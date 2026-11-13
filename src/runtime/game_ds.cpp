// Resident Evil: The Darkside Chronicles specific code.
#include "ppc.h"
#include "hle.h"
#include "config.h"

// Frame limiter (fn_802D8308, "ds_FrameLimiter"; the same design as Umbrella Chronicles'): waits for VI
// retraces until the counter at r13-0x25A8 (bumped by the post-retrace callback) reaches the minimum at
// timer+0x34, then turns the retraces that passed (up to 4) into the frame time. The constructor
// (fn_802D8298) sets the minimum to 1; screens change it and put it back (fn_802CB794 / fn_802CBB3C).
// With fps60 the minimum is held at 1; turned off again, the value the game had is put back.
static const uint32_t TIMER = 0x80736D10u;
void hle_wrap_ds_FrameLimiter(Ctx* c, GuestFn orig) {
    static bool forced = false;
    static uint32_t saved = 1;
    if (g_cfg.fps60) {
        if (!forced) { saved = R32(TIMER + 0x34); forced = true; }
        else if (R32(TIMER + 0x34) != 1) saved = R32(TIMER + 0x34);   // the game changed it meanwhile
        W32(TIMER + 0x34, 1);
    } else if (forced) {
        W32(TIMER + 0x34, saved);
        forced = false;
    }
    orig(c);
}
