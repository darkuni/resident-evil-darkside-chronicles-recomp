# Resident Evil: The Darkside Chronicles (SBDE08, Wii disc, NTSC-U) - native recomp notes

Built from the Umbrella Chronicles recomp (same Cavia code base; Darkside's Havok build tag reads
"Cavia_BIOHAZARD_UC2"), with its runtime: light gun + Nunchuk controls, 60 fps option, faster draw path and
render thread.

## Source
- main.dol sha1 d4202edfc1842a08245b4dd9e561b6ce75044d44, entry 0x8000403C, r13 0x8086B8C0, r2 0x80872240.
  RVL SDK Jul 2008 / Feb 2009, NW4R, CRI ADX + Sofdec, Havok 6.5.0. No REL modules, no symbols.

## Naming
- dtk 1.8.4 analysis: 27,806 functions (the object split runs out of memory in the container and isn't
  needed). xmatch against Martian Panic, Umbrella Chronicles, House of the Dead: Overkill, Zack & Wiki,
  TARGET: Terror, Lost in Shadow, My Life as a King and Geometry Wars names 5,809.
- By hand: KPADReadEx 0x80411E60 (li r7,1; b KPADiRead), KPADiRead 0x80411E68 (KPADStatus 0xB0),
  KPADInit 0x80412770, ds_FrameLimiter 0x802D8308.

## game.h constants
- __AXDSPResumeCallback 0x80395568, DecrementerExceptionCallback 0x803765AC, iosFree 0x803C8474, OSExitThread
  0x8037F0EC, OSDisableScheduler 0x8037E8E4 / OSEnableScheduler 0x8037E920, __OSReschedule 0x8037EE2C,
  SelectThread idle branch 0x8037ED58, interrupt table r13-0x2350, IOS heap r13-0x60FC.

## Frame rate
- Limiter fn_802D8308 (ds_FrameLimiter): waits for retraces until the counter at r13-0x25A8 reaches the
  minimum at 0x80736D44 (timer 0x80736D10 + 0x34), elapsed retraces (up to 4) at +0x30. The constructor
  fn_802D8298 sets the minimum to 1; fn_802CB794 sets 1 and fn_802CBB3C restores a saved value.
  game_ds.cpp holds it at 1 with the fps60 setting.
