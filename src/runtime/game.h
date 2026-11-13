// Per-game constants for Resident Evil: The Darkside Chronicles (Wii disc, NTSC-U, SBDE08).
// Addresses come from config/symbols.txt: dtk analysis, SDK names matched against the other recomps
// (Umbrella Chronicles first, the same Cavia code base). r13 (0x8086B8C0) offsets were read from the
// instruction that loads the variable in the named SDK function. RVL SDK Jul 2008 / Feb 2009:
// KPADReadEx(chan, buf, len, err) with a 0xB0-byte KPADStatus.
#pragma once
#define GAME_NAME        "Resident Evil: The Darkside Chronicles"
#define GAME_EXE         "darksidechronicles"
#define GAME_INI         "darksidechronicles.ini"
#define GAME_SETUP_WHAT  "Resident Evil: The Darkside Chronicles disc image (.iso, .ciso or .wbfs)"

#define G_AX_RESUME_CB          0x80395568u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x803765ACu   // DecrementerExceptionCallback
#define G_IOS_FREE              0x803C8474u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x8037F0ECu   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x2350u       // __OSGetInterruptHandler: lwz r4,-0x2350(r13)
#define G_SDA_IOS_HEAP          0x60FCu       // __ios_Ipc2: lwz r3,-0x60FC(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_8037F0EC
#define G_FN_IOS_FREE           f_803C8474
#define G_KPAD_STATUS_SIZE      0xB0u         // KPADStatus (KPADiRead: mulli 0xB0)
#define G_FN_OS_DISABLE_SCHEDULER f_8037E8E4  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_8037E920
#define G_FN_OS_RESCHEDULE        f_8037EE2C  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_RELOAD_SHAKE          1             // reload = shake the remote: middle mouse / V / Shift / LT
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
#define G_POINTER_GAIN_X        0.8f          // Umbrella Chronicles' pointer gain; checked against the crosshair
#define G_POINTER_GAIN_Y        0.6f
#define G_NUNCHUK               1             // the Nunchuk is always attached (camera stick; the Zapper types need it)
#define G_NUNCHUK_LIGHTGUN      1             // controls layout: see dist/README.txt
#define G_FPS60                 1             // "Frame rate" setting: hold the frame limiter at one retrace (game_ds.cpp)
