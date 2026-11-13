#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// Release__Q44nw4r3snd6detail7ChannelFv
void f_804ED258(Ctx* __restrict c) {
  trace_call(0x804ED258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED258
  c->r[0]=c->lr; // 804ED25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED264
  c->r[31]=c->r[3]|c->r[3]; // 804ED268
  c->r[0]=R32(c->r[3]+0x00000000u); // 804ED26C
  cmps(c,0,(int32_t)c->r[0],4); // 804ED270
  if (crb(c,2)) { goto L_804ED2A4; } // 804ED274
  c->r[4]=R32(c->r[3]+0x000000F0u); // 804ED278
  cmps(c,0,(int32_t)c->r[4],0); // 804ED27C
  if (crb(c,2)) { goto L_804ED29C; } // 804ED280
  c->r[0]=R8(c->r[3]+0x00000039u); // 804ED284
  cmps(c,0,(int32_t)c->r[0],0); // 804ED288
  if (!crb(c,2)) { goto L_804ED29C; } // 804ED28C
  c->r[3]=c->r[4]|c->r[4]; // 804ED290
  c->r[4]=0u+0x00000001u; // 804ED294
  c->lr=0x804ED29Cu; f_80503C34(c); // 804ED298
L_804ED29C:;
  c->r[0]=0u+0x00000004u; // 804ED29C
  W32(c->r[31]+0x00000000u,c->r[0]); // 804ED2A0
L_804ED2A4:;
  c->r[0]=0u+0x00000000u; // 804ED2A4
  W8(c->r[31]+0x00000035u,c->r[0]); // 804ED2A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED2B0
  c->lr=c->r[0]; // 804ED2B4
  c->r[1]=c->r[1]+0x00000010u; // 804ED2B8
  return; // 804ED2BC
}

// NoteOff__Q44nw4r3snd6detail7ChannelFv
void f_804ED2C0(Ctx* __restrict c) {
  trace_call(0x804ED2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED2C0
  c->r[0]=c->lr; // 804ED2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED2C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED2CC
  c->r[31]=c->r[3]|c->r[3]; // 804ED2D0
  c->r[0]=R8(c->r[3]+0x0000003Au); // 804ED2D4
  cmps(c,0,(int32_t)c->r[0],0); // 804ED2D8
  if (!crb(c,2)) { goto L_804ED320; } // 804ED2DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 804ED2E0
  cmps(c,0,(int32_t)c->r[0],4); // 804ED2E4
  if (crb(c,2)) { goto L_804ED318; } // 804ED2E8
  c->r[4]=R32(c->r[3]+0x000000F0u); // 804ED2EC
  cmps(c,0,(int32_t)c->r[4],0); // 804ED2F0
  if (crb(c,2)) { goto L_804ED310; } // 804ED2F4
  c->r[0]=R8(c->r[3]+0x00000039u); // 804ED2F8
  cmps(c,0,(int32_t)c->r[0],0); // 804ED2FC
  if (!crb(c,2)) { goto L_804ED310; } // 804ED300
  c->r[3]=c->r[4]|c->r[4]; // 804ED304
  c->r[4]=0u+0x00000001u; // 804ED308
  c->lr=0x804ED310u; f_80503C34(c); // 804ED30C
L_804ED310:;
  c->r[0]=0u+0x00000004u; // 804ED310
  W32(c->r[31]+0x00000000u,c->r[0]); // 804ED314
L_804ED318:;
  c->r[0]=0u+0x00000000u; // 804ED318
  W8(c->r[31]+0x00000035u,c->r[0]); // 804ED31C
L_804ED320:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED324
  c->lr=c->r[0]; // 804ED328
  c->r[1]=c->r[1]+0x00000010u; // 804ED32C
  return; // 804ED330
}

// fn_804ED334
void f_804ED334(Ctx* __restrict c) {
  trace_call(0x804ED334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED334
  c->r[0]=c->lr; // 804ED338
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED340
  W32(c->r[1]+0x00000008u,c->r[30]); // 804ED344
  c->r[30]=c->r[3]|c->r[3]; // 804ED348
  c->r[0]=R32(c->r[3]+0x000000F0u); // 804ED34C
  cmps(c,0,(int32_t)c->r[0],0); // 804ED350
  if (crb(c,2)) { goto L_804ED448; } // 804ED354
  c->r[3]=c->r[0]|c->r[0]; // 804ED358
  c->lr=0x804ED360u; f_805036B8(c); // 804ED35C
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED360
  c->lr=0x804ED368u; f_80503354(c); // 804ED364
  c->r[12]=R32(c->r[30]+0x000000E0u); // 804ED368
  c->r[0]=0u+0x00000000u; // 804ED36C
  W32(c->r[30]+0x000000F0u,c->r[0]); // 804ED370
  cmps(c,0,(int32_t)c->r[12],0); // 804ED374
  W8(c->r[30]+0x00000035u,c->r[0]); // 804ED378
  W8(c->r[30]+0x00000036u,c->r[0]); // 804ED37C
  if (crb(c,2)) { goto L_804ED398; } // 804ED380
  c->r[3]=c->r[30]|c->r[30]; // 804ED384
  c->r[5]=R32(c->r[30]+0x000000E4u); // 804ED388
  c->r[4]=0u+0x00000000u; // 804ED38C
  c->ctr=c->r[12]; // 804ED390
  if (true) { c->lr=0x804ED398u; dispatch(c,c->ctr); } // 804ED394
L_804ED398:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 804ED398
  cmps(c,0,(int32_t)c->r[3],0); // 804ED39C
  if (crb(c,2)) { goto L_804ED3B8; } // 804ED3A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804ED3A4
  c->r[4]=R32(c->r[30]+0x000000ECu); // 804ED3A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804ED3AC
  c->ctr=c->r[12]; // 804ED3B0
  if (true) { c->lr=0x804ED3B8u; dispatch(c,c->ctr); } // 804ED3B4
L_804ED3B8:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 804ED3B8
  cmps(c,0,(int32_t)c->r[0],0); // 804ED3BC
  if (crb(c,2)) { goto L_804ED448; } // 804ED3C0
  c->r[7]=0u+0x00000000u; // 804ED3C4
  W8(c->r[30]+0x00000037u,c->r[7]); // 804ED3C8
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ED3CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED3D0
  if (!crb(c,2)) { goto L_804ED420; } // 804ED3D4
  c->r[6]=0u+0x80830000u; // 804ED3D8
  c->r[4]=0u+0x804F0000u; // 804ED3DC
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ED3E0
  c->r[5]=0u+0x80830000u; // 804ED3E4
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED3E8
  c->r[8]=c->r[3]+0x00000008u; // 804ED3EC
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ED3F0
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ED3F4
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ED3F8
  W32(c->r[6]+0xFFFF86B0u,c->r[7]); // 804ED3FC
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ED400
  W32(c->r[3]+0x00000008u,c->r[8]); // 804ED404
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 804ED408
  W8(c->r[3]+0x00000010u,c->r[7]); // 804ED40C
  W32(c->r[3]+0x00000014u,c->r[7]); // 804ED410
  c->lr=0x804ED418u; f_803A92B8(c); // 804ED414
  c->r[0]=0u+0x00000001u; // 804ED418
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804ED41C
L_804ED420:;
  c->r[31]=0u+0x80830000u; // 804ED420
  c->r[4]=c->r[30]+0x000000F8u; // 804ED424
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ED428
  c->r[3]=c->r[31]+0x00000004u; // 804ED42C
  c->lr=0x804ED434u; f_80507F08(c); // 804ED430
  cmps(c,0,(int32_t)c->r[30],0); // 804ED434
  if (crb(c,2)) { goto L_804ED448; } // 804ED438
  c->r[3]=c->r[31]|c->r[31]; // 804ED43C
  c->r[4]=c->r[30]|c->r[30]; // 804ED440
  c->lr=0x804ED448u; f_804F0D38(c); // 804ED444
L_804ED448:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED44C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804ED450
  c->lr=c->r[0]; // 804ED454
  c->r[1]=c->r[1]+0x00000010u; // 804ED458
  return; // 804ED45C
}

// UpdateSweep__Q44nw4r3snd6detail7ChannelFi
void f_804ED460(Ctx* __restrict c) {
  trace_call(0x804ED460u);
  c->r[0]=R32(c->r[3]+0x000000A8u); // 804ED460
  c->r[5]=R32(c->r[3]+0x000000ACu); // 804ED464
  c->r[0]=c->r[0]+c->r[4]; // 804ED468
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804ED46C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804ED470
  if (!crb(c,1)) return; // 804ED474
  W32(c->r[3]+0x000000A8u,c->r[5]); // 804ED478
  return; // 804ED47C
}

// SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
void f_804ED480(Ctx* __restrict c) {
  trace_call(0x804ED480u);
  c->r[0]=0u+0x00000000u; // 804ED480
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 804ED484
  W32(c->r[3]+0x000000ACu,c->r[4]); // 804ED488
  W8(c->r[3]+0x00000038u,c->r[5]); // 804ED48C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804ED490
  return; // 804ED494
}

// fn_804ED498
void f_804ED498(Ctx* __restrict c) {
  trace_call(0x804ED498u);
  W8(c->r[3]+0x0000003Bu,c->r[4]); // 804ED498
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 804ED49C
  return; // 804ED4A0
}

// VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv
void f_804ED4A4(Ctx* __restrict c) {
  trace_call(0x804ED4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED4A4
  c->r[0]=c->lr; // 804ED4A8
  cmps(c,0,(int32_t)c->r[4],2); // 804ED4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED4B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804ED4B8
  c->r[30]=c->r[5]|c->r[5]; // 804ED4BC
  if (crb(c,2)) { goto L_804ED4FC; } // 804ED4C0
  if (!crb(c,0)) { goto L_804ED4D8; } // 804ED4C4
  cmps(c,0,(int32_t)c->r[4],0); // 804ED4C8
  if (crb(c,2)) { goto L_804ED4E4; } // 804ED4CC
  if (!crb(c,0)) { goto L_804ED4F0; } // 804ED4D0
  goto L_804ED508; // 804ED4D4
L_804ED4D8:;
  cmps(c,0,(int32_t)c->r[4],4); // 804ED4D8
  if (!crb(c,0)) { goto L_804ED508; } // 804ED4DC
  goto L_804ED504; // 804ED4E0
L_804ED4E4:;
  c->r[31]=0u+0x00000002u; // 804ED4E4
  c->lr=0x804ED4ECu; f_80503354(c); // 804ED4E8
  goto L_804ED508; // 804ED4EC
L_804ED4F0:;
  c->r[31]=0u+0x00000003u; // 804ED4F0
  c->lr=0x804ED4F8u; f_80503354(c); // 804ED4F4
  goto L_804ED508; // 804ED4F8
L_804ED4FC:;
  c->r[31]=0u+0x00000001u; // 804ED4FC
  goto L_804ED508; // 804ED500
L_804ED504:;
  c->r[31]=0u+0x00000001u; // 804ED504
L_804ED508:;
  c->r[12]=R32(c->r[30]+0x000000E0u); // 804ED508
  cmps(c,0,(int32_t)c->r[12],0); // 804ED50C
  if (crb(c,2)) { goto L_804ED528; } // 804ED510
  c->r[3]=c->r[30]|c->r[30]; // 804ED514
  c->r[4]=c->r[31]|c->r[31]; // 804ED518
  c->r[5]=R32(c->r[30]+0x000000E4u); // 804ED51C
  c->ctr=c->r[12]; // 804ED520
  if (true) { c->lr=0x804ED528u; dispatch(c,c->ctr); } // 804ED524
L_804ED528:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 804ED528
  cmps(c,0,(int32_t)c->r[3],0); // 804ED52C
  if (crb(c,2)) { goto L_804ED548; } // 804ED530
  c->r[12]=R32(c->r[3]+0x00000000u); // 804ED534
  c->r[4]=R32(c->r[30]+0x000000ECu); // 804ED538
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804ED53C
  c->ctr=c->r[12]; // 804ED540
  if (true) { c->lr=0x804ED548u; dispatch(c,c->ctr); } // 804ED544
L_804ED548:;
  c->r[7]=0u+0x00000000u; // 804ED548
  W32(c->r[30]+0x000000F0u,c->r[7]); // 804ED54C
  W8(c->r[30]+0x00000035u,c->r[7]); // 804ED550
  W8(c->r[30]+0x00000036u,c->r[7]); // 804ED554
  W8(c->r[30]+0x00000037u,c->r[7]); // 804ED558
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ED55C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED560
  if (!crb(c,2)) { goto L_804ED5B0; } // 804ED564
  c->r[6]=0u+0x80830000u; // 804ED568
  c->r[4]=0u+0x804F0000u; // 804ED56C
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ED570
  c->r[5]=0u+0x80830000u; // 804ED574
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED578
  c->r[8]=c->r[3]+0x00000008u; // 804ED57C
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ED580
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ED584
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ED588
  W32(c->r[6]+0xFFFF86B0u,c->r[7]); // 804ED58C
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ED590
  W32(c->r[3]+0x00000008u,c->r[8]); // 804ED594
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 804ED598
  W8(c->r[3]+0x00000010u,c->r[7]); // 804ED59C
  W32(c->r[3]+0x00000014u,c->r[7]); // 804ED5A0
  c->lr=0x804ED5A8u; f_803A92B8(c); // 804ED5A4
  c->r[0]=0u+0x00000001u; // 804ED5A8
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804ED5AC
L_804ED5B0:;
  c->r[31]=0u+0x80830000u; // 804ED5B0
  c->r[4]=c->r[30]+0x000000F8u; // 804ED5B4
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ED5B8
  c->r[3]=c->r[31]+0x00000004u; // 804ED5BC
  c->lr=0x804ED5C4u; f_80507F08(c); // 804ED5C0
  cmps(c,0,(int32_t)c->r[30],0); // 804ED5C4
  if (crb(c,2)) { goto L_804ED5D8; } // 804ED5C8
  c->r[3]=c->r[31]|c->r[31]; // 804ED5CC
  c->r[4]=c->r[30]|c->r[30]; // 804ED5D0
  c->lr=0x804ED5D8u; f_804F0D38(c); // 804ED5D4
L_804ED5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED5DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804ED5E0
  c->lr=c->r[0]; // 804ED5E4
  c->r[1]=c->r[1]+0x00000010u; // 804ED5E8
  return; // 804ED5EC
}

// AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
void f_804ED5F0(Ctx* __restrict c) {
  trace_call(0x804ED5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED5F0
  c->r[0]=c->lr; // 804ED5F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804ED5F8
  c->r[11]=c->r[1]+0x00000030u; // 804ED5FC
  c->lr=0x804ED604u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804ED600
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ED604
  c->r[24]=c->r[3]|c->r[3]; // 804ED608
  c->r[25]=c->r[4]|c->r[4]; // 804ED60C
  c->r[26]=c->r[5]|c->r[5]; // 804ED610
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED614
  c->r[27]=c->r[6]|c->r[6]; // 804ED618
  c->r[28]=c->r[7]|c->r[7]; // 804ED61C
  if (!crb(c,2)) { goto L_804ED670; } // 804ED620
  c->r[6]=0u+0x80830000u; // 804ED624
  c->r[0]=0u+0x00000000u; // 804ED628
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ED62C
  c->r[4]=0u+0x804F0000u; // 804ED630
  W32(c->r[3]+0x00000008u,c->r[0]); // 804ED634
  c->r[7]=c->r[3]+0x00000008u; // 804ED638
  c->r[5]=0u+0x80830000u; // 804ED63C
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ED640
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804ED644
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ED648
  W32(c->r[6]+0xFFFF86B0u,c->r[0]); // 804ED64C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804ED650
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED654
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ED658
  W8(c->r[3]+0x00000010u,c->r[0]); // 804ED65C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804ED660
  c->lr=0x804ED668u; f_803A92B8(c); // 804ED664
  c->r[0]=0u+0x00000001u; // 804ED668
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804ED66C
L_804ED670:;
  c->r[31]=0u+0x80830000u; // 804ED670
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ED674
  c->r[3]=c->r[31]|c->r[31]; // 804ED678
  c->lr=0x804ED680u; f_804F0CDC(c); // 804ED67C
  cmps(c,0,(int32_t)c->r[3],0); // 804ED680
  c->r[30]=c->r[3]|c->r[3]; // 804ED684
  if (!crb(c,2)) { goto L_804ED694; } // 804ED688
  c->r[30]=0u+0x00000000u; // 804ED68C
  goto L_804ED6DC; // 804ED690
L_804ED694:;
  if (crb(c,2)) { goto L_804ED6DC; } // 804ED694
  c->lr=0x804ED69Cu; f_804EE1C4(c); // 804ED698
  c->r[3]=c->r[30]+0x0000001Cu; // 804ED69C
  c->lr=0x804ED6A4u; f_804F0D80(c); // 804ED6A0
  c->r[0]=0u+0x00000000u; // 804ED6A4
  {uint32_t ea=c->r[2]+0x00001990u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ED6A8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 804ED6AC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 804ED6B0
  W8(c->r[30]+0x00000035u,c->r[0]); // 804ED6B4
  W8(c->r[30]+0x00000036u,c->r[0]); // 804ED6B8
  W8(c->r[30]+0x00000037u,c->r[0]); // 804ED6BC
  W8(c->r[30]+0x000000C0u,c->r[0]); // 804ED6C0
  W8(c->r[30]+0x000000C1u,c->r[0]); // 804ED6C4
  W16(c->r[30]+0x000000C2u,c->r[0]); // 804ED6C8
  W16(c->r[30]+0x000000C4u,c->r[0]); // 804ED6CC
  W32(c->r[30]+0x000000F0u,c->r[0]); // 804ED6D0
  W32(c->r[30]+0x000000F8u,c->r[0]); // 804ED6D4
  W32(c->r[30]+0x000000FCu,c->r[0]); // 804ED6D8
L_804ED6DC:;
  c->r[0]=c->r[31]+0x00000008u; // 804ED6DC
  c->r[29]=c->r[30]+0x000000F8u; // 804ED6E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804ED6E4
  c->r[5]=c->r[29]|c->r[29]; // 804ED6E8
  c->r[3]=c->r[31]+0x00000004u; // 804ED6EC
  c->r[4]=c->r[1]+0x00000008u; // 804ED6F0
  c->lr=0x804ED6F8u; f_80507EDC(c); // 804ED6F4
  cmps(c,0,(int32_t)c->r[30],0); // 804ED6F8
  if (!crb(c,2)) { goto L_804ED708; } // 804ED6FC
  c->r[3]=0u+0x00000000u; // 804ED700
  goto L_804ED7D4; // 804ED704
L_804ED708:;
  c->r[31]=0u+0x00000001u; // 804ED708
  W8(c->r[30]+0x00000037u,c->r[31]); // 804ED70C
  c->lr=0x804ED714u; f_80505288(c); // 804ED710
  c->r[7]=0u+0x804F0000u; // 804ED714
  c->r[4]=c->r[24]|c->r[24]; // 804ED718
  c->r[5]=c->r[25]|c->r[25]; // 804ED71C
  c->r[6]=c->r[26]|c->r[26]; // 804ED720
  c->r[8]=c->r[30]|c->r[30]; // 804ED724
  c->r[7]=c->r[7]+0xFFFFD4A4u; // 804ED728
  c->lr=0x804ED730u; f_8050543C(c); // 804ED72C
  cmps(c,0,(int32_t)c->r[3],0); // 804ED730
  if (!crb(c,2)) { goto L_804ED7BC; } // 804ED734
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ED738
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED73C
  if (!crb(c,2)) { goto L_804ED78C; } // 804ED740
  c->r[6]=0u+0x80830000u; // 804ED744
  c->r[0]=0u+0x00000000u; // 804ED748
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ED74C
  c->r[4]=0u+0x804F0000u; // 804ED750
  W32(c->r[3]+0x00000008u,c->r[0]); // 804ED754
  c->r[7]=c->r[3]+0x00000008u; // 804ED758
  c->r[5]=0u+0x80830000u; // 804ED75C
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ED760
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804ED764
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ED768
  W32(c->r[6]+0xFFFF86B0u,c->r[0]); // 804ED76C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804ED770
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED774
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ED778
  W8(c->r[3]+0x00000010u,c->r[0]); // 804ED77C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804ED780
  c->lr=0x804ED788u; f_803A92B8(c); // 804ED784
  W8(c->r[13]+0xFFFFE500u,c->r[31]); // 804ED788
L_804ED78C:;
  c->r[31]=0u+0x80830000u; // 804ED78C
  c->r[4]=c->r[29]|c->r[29]; // 804ED790
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ED794
  c->r[3]=c->r[31]+0x00000004u; // 804ED798
  c->lr=0x804ED7A0u; f_80507F08(c); // 804ED79C
  cmps(c,0,(int32_t)c->r[30],0); // 804ED7A0
  if (crb(c,2)) { goto L_804ED7B4; } // 804ED7A4
  c->r[3]=c->r[31]|c->r[31]; // 804ED7A8
  c->r[4]=c->r[30]|c->r[30]; // 804ED7AC
  c->lr=0x804ED7B4u; f_804F0D38(c); // 804ED7B0
L_804ED7B4:;
  c->r[3]=0u+0x00000000u; // 804ED7B4
  goto L_804ED7D4; // 804ED7B8
L_804ED7BC:;
  W32(c->r[30]+0x000000F0u,c->r[3]); // 804ED7BC
  c->r[3]=c->r[30]|c->r[30]; // 804ED7C0
  c->r[4]=c->r[27]|c->r[27]; // 804ED7C4
  c->r[5]=c->r[28]|c->r[28]; // 804ED7C8
  c->lr=0x804ED7D0u; f_804EC8FC(c); // 804ED7CC
  c->r[3]=c->r[30]|c->r[30]; // 804ED7D0
L_804ED7D4:;
  c->r[11]=c->r[1]+0x00000030u; // 804ED7D4
  c->lr=0x804ED7DCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804ED7D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804ED7DC
  c->lr=c->r[0]; // 804ED7E0
  c->r[1]=c->r[1]+0x00000030u; // 804ED7E4
  return; // 804ED7E8
}

// FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
void f_804ED7EC(Ctx* __restrict c) {
  trace_call(0x804ED7ECu);
  cmps(c,0,(int32_t)c->r[3],0); // 804ED7EC
  if (crb(c,2)) return; // 804ED7F0
  c->r[0]=0u+0x00000000u; // 804ED7F4
  W32(c->r[3]+0x000000E0u,c->r[0]); // 804ED7F8
  W32(c->r[3]+0x000000E4u,c->r[0]); // 804ED7FC
  return; // 804ED800
}

// GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
void f_804ED804(Ctx* __restrict c) {
  trace_call(0x804ED804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED804
  c->r[0]=c->lr; // 804ED808
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED80C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED810
  c->lr=0x804ED818u; f_8037BBA4(c); // 804ED814
  c->r[0]=R8(c->r[13]+0xFFFFE508u); // 804ED818
  c->r[31]=c->r[3]|c->r[3]; // 804ED81C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED820
  if (!crb(c,2)) { goto L_804ED868; } // 804ED824
  c->r[6]=0u+0x80830000u; // 804ED828
  c->r[0]=0u+0x00000000u; // 804ED82C
  c->r[3]=c->r[6]+0xFFFF86DCu; // 804ED830
  c->r[4]=0u+0x804F0000u; // 804ED834
  W32(c->r[3]+0x00000004u,c->r[0]); // 804ED838
  c->r[7]=c->r[3]+0x00000004u; // 804ED83C
  c->r[5]=0u+0x80830000u; // 804ED840
  c->r[4]=c->r[4]+0xFFFFD88Cu; // 804ED844
  W32(c->r[3]+0x00000008u,c->r[0]); // 804ED848
  c->r[5]=c->r[5]+0xFFFF86D0u; // 804ED84C
  W32(c->r[6]+0xFFFF86DCu,c->r[0]); // 804ED850
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ED854
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED858
  c->lr=0x804ED860u; f_803A92B8(c); // 804ED85C
  c->r[0]=0u+0x00000001u; // 804ED860
  W8(c->r[13]+0xFFFFE508u,c->r[0]); // 804ED864
L_804ED868:;
  c->r[3]=c->r[31]|c->r[31]; // 804ED868
  c->lr=0x804ED870u; f_8037BBCC(c); // 804ED86C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED870
  c->r[3]=0u+0x80830000u; // 804ED874
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED878
  c->r[3]=c->r[3]+0xFFFF86DCu; // 804ED87C
  c->lr=c->r[0]; // 804ED880
  c->r[1]=c->r[1]+0x00000010u; // 804ED884
  return; // 804ED888
}

// __dt__Q44nw4r3snd6detail22DisposeCallbackManagerFv
void f_804ED88C(Ctx* __restrict c) {
  trace_call(0x804ED88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED88C
  c->r[0]=c->lr; // 804ED890
  cmps(c,0,(int32_t)c->r[3],0); // 804ED894
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804ED89C
  c->r[31]=c->r[4]|c->r[4]; // 804ED8A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804ED8A4
  c->r[30]=c->r[3]|c->r[3]; // 804ED8A8
  if (crb(c,2)) { goto L_804ED8CC; } // 804ED8AC
  if (crb(c,2)) { goto L_804ED8BC; } // 804ED8B0
  c->r[4]=0u+0x00000000u; // 804ED8B4
  c->lr=0x804ED8BCu; f_80507DCC(c); // 804ED8B8
L_804ED8BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804ED8BC
  if (!crb(c,1)) { goto L_804ED8CC; } // 804ED8C0
  c->r[3]=c->r[30]|c->r[30]; // 804ED8C4
  c->lr=0x804ED8CCu; f_803A9400(c); // 804ED8C8
L_804ED8CC:;
  c->r[3]=c->r[30]|c->r[30]; // 804ED8CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ED8D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804ED8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED8D8
  c->lr=c->r[0]; // 804ED8DC
  c->r[1]=c->r[1]+0x00000010u; // 804ED8E0
  return; // 804ED8E4
}

// RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
void f_804ED8E8(Ctx* __restrict c) {
  trace_call(0x804ED8E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED8E8
  c->r[0]=c->lr; // 804ED8EC
  c->r[5]=c->r[4]|c->r[4]; // 804ED8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804ED8F4
  c->r[0]=c->r[3]+0x00000004u; // 804ED8F8
  c->r[4]=c->r[1]+0x00000008u; // 804ED8FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804ED900
  c->lr=0x804ED908u; f_80507EDC(c); // 804ED904
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ED908
  c->lr=c->r[0]; // 804ED90C
  c->r[1]=c->r[1]+0x00000010u; // 804ED910
  return; // 804ED914
}

// fn_804ED918
void f_804ED918(Ctx* __restrict c) {
  trace_call(0x804ED918u);
  f_80507F08(c); return; // 804ED918
}

// Dispose__Q44nw4r3snd6detail22DisposeCallbackManagerFPvUlPv
void f_804ED91C(Ctx* __restrict c) {
  trace_call(0x804ED91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED91C
  c->r[0]=c->lr; // 804ED920
  W32(c->r[1]+0x00000044u,c->r[0]); // 804ED924
  c->r[11]=c->r[1]+0x00000040u; // 804ED928
  c->lr=0x804ED930u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804ED92C
  c->r[31]=c->r[4]|c->r[4]; // 804ED930
  c->r[30]=c->r[4]+c->r[5]; // 804ED934
  c->lr=0x804ED93Cu; f_804FD930(c); // 804ED938
  c->r[3]=c->r[3]+0x00000354u; // 804ED93C
  c->lr=0x804ED944u; f_8037CD84(c); // 804ED940
  c->lr=0x804ED948u; f_8037BBA4(c); // 804ED944
  c->r[0]=R8(c->r[13]+0xFFFFE508u); // 804ED948
  c->r[29]=c->r[3]|c->r[3]; // 804ED94C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED950
  if (!crb(c,2)) { goto L_804ED998; } // 804ED954
  c->r[6]=0u+0x80830000u; // 804ED958
  c->r[0]=0u+0x00000000u; // 804ED95C
  c->r[3]=c->r[6]+0xFFFF86DCu; // 804ED960
  c->r[4]=0u+0x804F0000u; // 804ED964
  W32(c->r[3]+0x00000004u,c->r[0]); // 804ED968
  c->r[7]=c->r[3]+0x00000004u; // 804ED96C
  c->r[5]=0u+0x80830000u; // 804ED970
  c->r[4]=c->r[4]+0xFFFFD88Cu; // 804ED974
  W32(c->r[3]+0x00000008u,c->r[0]); // 804ED978
  c->r[5]=c->r[5]+0xFFFF86D0u; // 804ED97C
  W32(c->r[6]+0xFFFF86DCu,c->r[0]); // 804ED980
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ED984
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ED988
  c->lr=0x804ED990u; f_803A92B8(c); // 804ED98C
  c->r[0]=0u+0x00000001u; // 804ED990
  W8(c->r[13]+0xFFFFE508u,c->r[0]); // 804ED994
L_804ED998:;
  c->r[3]=c->r[29]|c->r[29]; // 804ED998
  c->lr=0x804ED9A0u; f_8037BBCC(c); // 804ED99C
  c->r[21]=0u+0x80830000u; // 804ED9A0
  c->r[23]=0u+0x00000000u; // 804ED9A4
  c->r[22]=c->r[21]+0xFFFF86DCu; // 804ED9A8
  c->r[24]=0u+0x804F0000u; // 804ED9AC
  c->r[29]=R32(c->r[22]+0x00000004u); // 804ED9B0
  c->r[27]=c->r[22]+0x00000004u; // 804ED9B4
  c->r[25]=0u+0x80830000u; // 804ED9B8
  c->r[26]=0u+0x00000001u; // 804ED9BC
  goto L_804ED9E4; // 804ED9C0
L_804ED9C4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 804ED9C4
  c->r[3]=c->r[29]|c->r[29]; // 804ED9C8
  c->r[4]=c->r[31]|c->r[31]; // 804ED9CC
  c->r[5]=c->r[30]|c->r[30]; // 804ED9D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804ED9D4
  c->r[29]=R32(c->r[29]+0x00000000u); // 804ED9D8
  c->ctr=c->r[12]; // 804ED9DC
  if (true) { c->lr=0x804ED9E4u; dispatch(c,c->ctr); } // 804ED9E0
L_804ED9E4:;
  c->lr=0x804ED9E8u; f_8037BBA4(c); // 804ED9E4
  c->r[0]=R8(c->r[13]+0xFFFFE508u); // 804ED9E8
  c->r[28]=c->r[3]|c->r[3]; // 804ED9EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ED9F0
  if (!crb(c,2)) { goto L_804EDA24; } // 804ED9F4
  W32(c->r[22]+0x00000004u,c->r[23]); // 804ED9F8
  c->r[6]=c->r[22]+0x00000004u; // 804ED9FC
  c->r[3]=c->r[22]|c->r[22]; // 804EDA00
  c->r[4]=c->r[24]+0xFFFFD88Cu; // 804EDA04
  W32(c->r[22]+0x00000008u,c->r[23]); // 804EDA08
  c->r[5]=c->r[25]+0xFFFF86D0u; // 804EDA0C
  W32(c->r[21]+0xFFFF86DCu,c->r[23]); // 804EDA10
  W32(c->r[22]+0x00000004u,c->r[6]); // 804EDA14
  W32(c->r[22]+0x00000008u,c->r[6]); // 804EDA18
  c->lr=0x804EDA20u; f_803A92B8(c); // 804EDA1C
  W8(c->r[13]+0xFFFFE508u,c->r[26]); // 804EDA20
L_804EDA24:;
  c->r[3]=c->r[28]|c->r[28]; // 804EDA24
  c->lr=0x804EDA2Cu; f_8037BBCC(c); // 804EDA28
  cmpu(c,0,c->r[29],c->r[27]); // 804EDA2C
  if (!crb(c,2)) { IRQCHK(c); goto L_804ED9C4; } // 804EDA30
  c->lr=0x804EDA38u; f_804FD930(c); // 804EDA34
  c->r[3]=c->r[3]+0x00000354u; // 804EDA38
  c->lr=0x804EDA40u; f_8037CE60(c); // 804EDA3C
  c->r[11]=c->r[1]+0x00000040u; // 804EDA40
  c->lr=0x804EDA48u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EDA44
  c->r[0]=R32(c->r[1]+0x00000044u); // 804EDA48
  c->lr=c->r[0]; // 804EDA4C
  c->r[1]=c->r[1]+0x00000040u; // 804EDA50
  return; // 804EDA54
}

// DisposeWave__Q44nw4r3snd6detail22DisposeCallbackManagerFPvUlPv
void f_804EDA58(Ctx* __restrict c) {
  trace_call(0x804EDA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDA58
  c->r[0]=c->lr; // 804EDA5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804EDA60
  c->r[11]=c->r[1]+0x00000040u; // 804EDA64
  c->lr=0x804EDA6Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804EDA68
  c->r[31]=c->r[4]|c->r[4]; // 804EDA6C
  c->r[30]=c->r[4]+c->r[5]; // 804EDA70
  c->lr=0x804EDA78u; f_804FD930(c); // 804EDA74
  c->r[3]=c->r[3]+0x00000354u; // 804EDA78
  c->lr=0x804EDA80u; f_8037CD84(c); // 804EDA7C
  c->lr=0x804EDA84u; f_8037BBA4(c); // 804EDA80
  c->r[0]=R8(c->r[13]+0xFFFFE508u); // 804EDA84
  c->r[29]=c->r[3]|c->r[3]; // 804EDA88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804EDA8C
  if (!crb(c,2)) { goto L_804EDAD4; } // 804EDA90
  c->r[6]=0u+0x80830000u; // 804EDA94
  c->r[0]=0u+0x00000000u; // 804EDA98
  c->r[3]=c->r[6]+0xFFFF86DCu; // 804EDA9C
  c->r[4]=0u+0x804F0000u; // 804EDAA0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EDAA4
  c->r[7]=c->r[3]+0x00000004u; // 804EDAA8
  c->r[5]=0u+0x80830000u; // 804EDAAC
  c->r[4]=c->r[4]+0xFFFFD88Cu; // 804EDAB0
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EDAB4
  c->r[5]=c->r[5]+0xFFFF86D0u; // 804EDAB8
  W32(c->r[6]+0xFFFF86DCu,c->r[0]); // 804EDABC
  W32(c->r[3]+0x00000004u,c->r[7]); // 804EDAC0
  W32(c->r[3]+0x00000008u,c->r[7]); // 804EDAC4
  c->lr=0x804EDACCu; f_803A92B8(c); // 804EDAC8
  c->r[0]=0u+0x00000001u; // 804EDACC
  W8(c->r[13]+0xFFFFE508u,c->r[0]); // 804EDAD0
L_804EDAD4:;
  c->r[3]=c->r[29]|c->r[29]; // 804EDAD4
  c->lr=0x804EDADCu; f_8037BBCC(c); // 804EDAD8
  c->r[21]=0u+0x80830000u; // 804EDADC
  c->r[23]=0u+0x00000000u; // 804EDAE0
  c->r[22]=c->r[21]+0xFFFF86DCu; // 804EDAE4
  c->r[24]=0u+0x804F0000u; // 804EDAE8
  c->r[29]=R32(c->r[22]+0x00000004u); // 804EDAEC
  c->r[27]=c->r[22]+0x00000004u; // 804EDAF0
  c->r[25]=0u+0x80830000u; // 804EDAF4
  c->r[26]=0u+0x00000001u; // 804EDAF8
  goto L_804EDB20; // 804EDAFC
L_804EDB00:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 804EDB00
  c->r[3]=c->r[29]|c->r[29]; // 804EDB04
  c->r[4]=c->r[31]|c->r[31]; // 804EDB08
  c->r[5]=c->r[30]|c->r[30]; // 804EDB0C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EDB10
  c->r[29]=R32(c->r[29]+0x00000000u); // 804EDB14
  c->ctr=c->r[12]; // 804EDB18
  if (true) { c->lr=0x804EDB20u; dispatch(c,c->ctr); } // 804EDB1C
L_804EDB20:;
  c->lr=0x804EDB24u; f_8037BBA4(c); // 804EDB20
  c->r[0]=R8(c->r[13]+0xFFFFE508u); // 804EDB24
  c->r[28]=c->r[3]|c->r[3]; // 804EDB28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804EDB2C
  if (!crb(c,2)) { goto L_804EDB60; } // 804EDB30
  W32(c->r[22]+0x00000004u,c->r[23]); // 804EDB34
  c->r[6]=c->r[22]+0x00000004u; // 804EDB38
  c->r[3]=c->r[22]|c->r[22]; // 804EDB3C
  c->r[4]=c->r[24]+0xFFFFD88Cu; // 804EDB40
  W32(c->r[22]+0x00000008u,c->r[23]); // 804EDB44
  c->r[5]=c->r[25]+0xFFFF86D0u; // 804EDB48
  W32(c->r[21]+0xFFFF86DCu,c->r[23]); // 804EDB4C
  W32(c->r[22]+0x00000004u,c->r[6]); // 804EDB50
  W32(c->r[22]+0x00000008u,c->r[6]); // 804EDB54
  c->lr=0x804EDB5Cu; f_803A92B8(c); // 804EDB58
  W8(c->r[13]+0xFFFFE508u,c->r[26]); // 804EDB5C
L_804EDB60:;
  c->r[3]=c->r[28]|c->r[28]; // 804EDB60
  c->lr=0x804EDB68u; f_8037BBCC(c); // 804EDB64
  cmpu(c,0,c->r[29],c->r[27]); // 804EDB68
  if (!crb(c,2)) { IRQCHK(c); goto L_804EDB00; } // 804EDB6C
  c->lr=0x804EDB74u; f_804FD930(c); // 804EDB70
  c->r[3]=c->r[3]+0x00000354u; // 804EDB74
  c->lr=0x804EDB7Cu; f_8037CE60(c); // 804EDB78
  c->r[11]=c->r[1]+0x00000040u; // 804EDB7C
  c->lr=0x804EDB84u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EDB80
  c->r[0]=R32(c->r[1]+0x00000044u); // 804EDB84
  c->lr=c->r[0]; // 804EDB88
  c->r[1]=c->r[1]+0x00000040u; // 804EDB8C
  return; // 804EDB90
}

// fn_804EDB94
void f_804EDB94(Ctx* __restrict c) {
  trace_call(0x804EDB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDB94
  c->r[0]=c->lr; // 804EDB98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EDB9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EDBA0
  c->r[31]=c->r[3]|c->r[3]; // 804EDBA4
  c->lr=0x804EDBACu; f_804F7E74(c); // 804EDBA8
  c->r[4]=0u+0x80720000u; // 804EDBAC
  c->r[3]=c->r[31]+0x00000108u; // 804EDBB0
  c->r[4]=c->r[4]+0xFFFFB588u; // 804EDBB4
  W32(c->r[31]+0x00000000u,c->r[4]); // 804EDBB8
  c->lr=0x804EDBC0u; f_804F8480(c); // 804EDBBC
  c->r[0]=0u+0x00000000u; // 804EDBC0
  c->r[3]=c->r[31]|c->r[31]; // 804EDBC4
  W8(c->r[31]+0x00000188u,c->r[0]); // 804EDBC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EDBCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EDBD0
  c->lr=c->r[0]; // 804EDBD4
  c->r[1]=c->r[1]+0x00000010u; // 804EDBD8
  return; // 804EDBDC
}

// dtor_804EDBE0
void f_804EDBE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDBE0
  c->r[0]=c->lr; // 804EDBE4
  cmps(c,0,(int32_t)c->r[3],0); // 804EDBE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EDBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EDBF0
  c->r[31]=c->r[4]|c->r[4]; // 804EDBF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EDBF8
  c->r[30]=c->r[3]|c->r[3]; // 804EDBFC
  if (crb(c,2)) { goto L_804EDC50; } // 804EDC00
  c->r[0]=R8(c->r[3]+0x00000188u); // 804EDC04
  c->r[4]=0u+0x80720000u; // 804EDC08
  c->r[4]=c->r[4]+0xFFFFB588u; // 804EDC0C
  cmps(c,0,(int32_t)c->r[0],0); // 804EDC10
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EDC14
  if (crb(c,2)) { goto L_804EDC2C; } // 804EDC18
  c->r[3]=c->r[3]+0x0000014Cu; // 804EDC1C
  c->lr=0x804EDC24u; f_80384A24(c); // 804EDC20
  c->r[0]=0u+0x00000000u; // 804EDC24
  W8(c->r[30]+0x00000188u,c->r[0]); // 804EDC28
L_804EDC2C:;
  c->r[3]=c->r[30]|c->r[30]; // 804EDC2C
  c->lr=0x804EDC34u; f_804F7EF4(c); // 804EDC30
  c->r[3]=c->r[30]|c->r[30]; // 804EDC34
  c->r[4]=0u+0x00000000u; // 804EDC38
  c->lr=0x804EDC40u; f_804F7E98(c); // 804EDC3C
  cmps(c,0,(int32_t)c->r[31],0); // 804EDC40
  if (!crb(c,1)) { goto L_804EDC50; } // 804EDC44
  c->r[3]=c->r[30]|c->r[30]; // 804EDC48
  c->lr=0x804EDC50u; f_803A9400(c); // 804EDC4C
L_804EDC50:;
  c->r[3]=c->r[30]|c->r[30]; // 804EDC50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EDC54
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EDC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EDC5C
  c->lr=c->r[0]; // 804EDC60
  c->r[1]=c->r[1]+0x00000010u; // 804EDC64
  return; // 804EDC68
}

// fn_804EDC6C
void f_804EDC6C(Ctx* __restrict c) {
  trace_call(0x804EDC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDC6C
  c->r[0]=c->lr; // 804EDC70
  W32(c->r[1]+0x00000184u,c->r[0]); // 804EDC74
  W32(c->r[1]+0x0000017Cu,c->r[31]); // 804EDC78
  W32(c->r[1]+0x00000178u,c->r[30]); // 804EDC7C
  c->r[30]=c->r[4]|c->r[4]; // 804EDC80
  W32(c->r[1]+0x00000174u,c->r[29]); // 804EDC84
  c->r[29]=c->r[3]|c->r[3]; // 804EDC88
  c->r[3]=c->r[30]|c->r[30]; // 804EDC8C
  c->lr=0x804EDC94u; f_80384408(c); // 804EDC90
  cmps(c,0,(int32_t)c->r[3],0); // 804EDC94
  if (!crb(c,0)) { goto L_804EDCA4; } // 804EDC98
  c->r[3]=0u+0x00000000u; // 804EDC9C
  goto L_804EDD9C; // 804EDCA0
L_804EDCA4:;
  c->r[4]=c->r[29]+0x0000014Cu; // 804EDCA4
  c->lr=0x804EDCACu; f_80384710(c); // 804EDCA8
  cmps(c,0,(int32_t)c->r[3],0); // 804EDCAC
  if (!crb(c,2)) { goto L_804EDCBC; } // 804EDCB0
  c->r[0]=0u+0x00000000u; // 804EDCB4
  goto L_804EDD10; // 804EDCB8
L_804EDCBC:;
  c->r[0]=c->r[1]+0x00000027u; // 804EDCBC
  c->r[3]=0u+0x00000001u; // 804EDCC0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EDCC4
  W8(c->r[29]+0x00000188u,c->r[3]); // 804EDCC8
  c->r[4]=c->r[31]|c->r[31]; // 804EDCCC
  c->r[3]=c->r[29]+0x0000014Cu; // 804EDCD0
  c->r[5]=0u+0x00000040u; // 804EDCD4
  c->r[6]=0u+0x00000000u; // 804EDCD8
  c->r[7]=0u+0x00000002u; // 804EDCDC
  c->lr=0x804EDCE4u; f_80384CF0(c); // 804EDCE0
  cmpu(c,0,c->r[3],0x00000040u); // 804EDCE4
  if (crb(c,2)) { goto L_804EDCF4; } // 804EDCE8
  c->r[0]=0u+0x00000000u; // 804EDCEC
  goto L_804EDD10; // 804EDCF0
L_804EDCF4:;
  c->r[4]=c->r[31]|c->r[31]; // 804EDCF4
  c->r[3]=c->r[29]+0x00000108u; // 804EDCF8
  c->lr=0x804EDD00u; f_804F84A4(c); // 804EDCFC
  c->r[3]=c->r[29]|c->r[29]; // 804EDD00
  c->r[4]=c->r[29]+0x00000108u; // 804EDD04
  c->lr=0x804EDD0Cu; f_804F7EEC(c); // 804EDD08
  c->r[0]=0u+0x00000001u; // 804EDD0C
L_804EDD10:;
  cmps(c,0,(int32_t)c->r[0],0); // 804EDD10
  if (!crb(c,2)) { goto L_804EDD20; } // 804EDD14
  c->r[3]=0u+0x00000000u; // 804EDD18
  goto L_804EDD9C; // 804EDD1C
L_804EDD20:;
  c->r[3]=c->r[30]|c->r[30]; // 804EDD20
  c->lr=0x804EDD28u; f_803A91D4(c); // 804EDD24
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 804EDD28
  c->r[0]=c->r[31]+0x00000001u; // 804EDD2C
  c->r[3]=c->r[30]+c->r[31]; // 804EDD30
  c->ctr=c->r[0]; // 804EDD34
  if (crb(c,0)) { goto L_804EDD98; } // 804EDD38
L_804EDD3C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 804EDD3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804EDD40
  cmps(c,0,(int32_t)c->r[0],47); // 804EDD44
  if (crb(c,2)) { goto L_804EDD54; } // 804EDD48
  cmps(c,0,(int32_t)c->r[0],92); // 804EDD4C
  if (!crb(c,2)) { goto L_804EDD8C; } // 804EDD50
L_804EDD54:;
  cmps(c,0,(int32_t)c->r[31],256); // 804EDD54
  if (crb(c,0)) { goto L_804EDD64; } // 804EDD58
  c->r[3]=0u+0x00000000u; // 804EDD5C
  goto L_804EDD9C; // 804EDD60
L_804EDD64:;
  c->r[4]=c->r[30]|c->r[30]; // 804EDD64
  c->r[5]=c->r[31]|c->r[31]; // 804EDD68
  c->r[3]=c->r[1]+0x00000070u; // 804EDD6C
  c->lr=0x804EDD74u; f_803B3880(c); // 804EDD70
  c->r[4]=c->r[1]+0x00000070u; // 804EDD74
  c->r[0]=0u+0x00000000u; // 804EDD78
  W8(c->r[4]+c->r[31],c->r[0]); // 804EDD7C
  c->r[3]=c->r[29]|c->r[29]; // 804EDD80
  c->lr=0x804EDD88u; f_804F8404(c); // 804EDD84
  goto L_804EDD98; // 804EDD88
L_804EDD8C:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 804EDD8C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 804EDD90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EDD3C; } // 804EDD94
L_804EDD98:;
  c->r[3]=0u+0x00000001u; // 804EDD98
L_804EDD9C:;
  c->r[0]=R32(c->r[1]+0x00000184u); // 804EDD9C
  c->r[31]=R32(c->r[1]+0x0000017Cu); // 804EDDA0
  c->r[30]=R32(c->r[1]+0x00000178u); // 804EDDA4
  c->r[29]=R32(c->r[1]+0x00000174u); // 804EDDA8
  c->lr=c->r[0]; // 804EDDAC
  c->r[1]=c->r[1]+0x00000180u; // 804EDDB0
  return; // 804EDDB4
}

// fn_804EDDB8
void f_804EDDB8(Ctx* __restrict c) {
  trace_call(0x804EDDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDDB8
  c->r[0]=c->lr; // 804EDDBC
  c->r[8]=c->r[3]|c->r[3]; // 804EDDC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EDDC4
  c->r[0]=R8(c->r[3]+0x00000188u); // 804EDDC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EDDCC
  c->r[31]=c->r[7]|c->r[7]; // 804EDDD0
  cmps(c,0,(int32_t)c->r[0],0); // 804EDDD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EDDD8
  c->r[30]=c->r[6]|c->r[6]; // 804EDDDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EDDE0
  c->r[29]=c->r[4]|c->r[4]; // 804EDDE4
  if (!crb(c,2)) { goto L_804EDDF4; } // 804EDDE8
  c->r[3]=0u+0x00000000u; // 804EDDEC
  goto L_804EDE44; // 804EDDF0
L_804EDDF4:;
  cmpu(c,0,c->r[5],0x00000078u); // 804EDDF4
  if (!crb(c,0)) { goto L_804EDE04; } // 804EDDF8
  c->r[3]=0u+0x00000000u; // 804EDDFC
  goto L_804EDE44; // 804EDE00
L_804EDE04:;
  cmps(c,0,(int32_t)c->r[4],0); // 804EDE04
  if (crb(c,2)) { goto L_804EDE40; } // 804EDE08
  c->r[3]=c->r[29]|c->r[29]; // 804EDE0C
  c->r[4]=c->r[8]+0x0000014Cu; // 804EDE10
  c->r[5]=0u+0x00000000u; // 804EDE14
  c->lr=0x804EDE1Cu; f_80508F0C(c); // 804EDE18
  c->r[4]=0u+0x80720000u; // 804EDE1C
  W32(c->r[29]+0x00000070u,c->r[30]); // 804EDE20
  c->r[4]=c->r[4]+0xFFFFB520u; // 804EDE24
  c->r[3]=c->r[29]|c->r[29]; // 804EDE28
  W32(c->r[29]+0x00000000u,c->r[4]); // 804EDE2C
  c->r[4]=c->r[30]|c->r[30]; // 804EDE30
  c->r[5]=0u+0x00000000u; // 804EDE34
  W32(c->r[29]+0x00000074u,c->r[31]); // 804EDE38
  c->lr=0x804EDE40u; f_80508DF0(c); // 804EDE3C
L_804EDE40:;
  c->r[3]=c->r[29]|c->r[29]; // 804EDE40
L_804EDE44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EDE44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EDE48
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EDE4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EDE50
  c->lr=c->r[0]; // 804EDE54
  c->r[1]=c->r[1]+0x00000020u; // 804EDE58
  return; // 804EDE5C
}

// fn_804EDE60
void f_804EDE60(Ctx* __restrict c) {
  trace_call(0x804EDE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDE60
  c->r[0]=c->lr; // 804EDE64
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EDE68
  c->r[0]=R8(c->r[3]+0x00000188u); // 804EDE6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EDE70
  c->r[31]=c->r[8]|c->r[8]; // 804EDE74
  cmps(c,0,(int32_t)c->r[0],0); // 804EDE78
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EDE7C
  c->r[30]=c->r[7]|c->r[7]; // 804EDE80
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EDE84
  c->r[29]=c->r[4]|c->r[4]; // 804EDE88
  if (!crb(c,2)) { goto L_804EDE98; } // 804EDE8C
  c->r[3]=0u+0x00000000u; // 804EDE90
  goto L_804EDEFC; // 804EDE94
L_804EDE98:;
  cmpu(c,0,c->r[5],0x00000078u); // 804EDE98
  if (!crb(c,0)) { goto L_804EDEA8; } // 804EDE9C
  c->r[3]=0u+0x00000000u; // 804EDEA0
  goto L_804EDEFC; // 804EDEA4
L_804EDEA8:;
  c->r[3]=c->r[6]|c->r[6]; // 804EDEA8
  c->lr=0x804EDEB0u; f_80384408(c); // 804EDEAC
  cmps(c,0,(int32_t)c->r[3],0); // 804EDEB0
  c->r[4]=c->r[3]|c->r[3]; // 804EDEB4
  if (!crb(c,0)) { goto L_804EDEC4; } // 804EDEB8
  c->r[3]=0u+0x00000000u; // 804EDEBC
  goto L_804EDEFC; // 804EDEC0
L_804EDEC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804EDEC4
  if (crb(c,2)) { goto L_804EDEF8; } // 804EDEC8
  c->r[3]=c->r[29]|c->r[29]; // 804EDECC
  c->lr=0x804EDED4u; f_80508E88(c); // 804EDED0
  c->r[4]=0u+0x80720000u; // 804EDED4
  W32(c->r[29]+0x00000070u,c->r[30]); // 804EDED8
  c->r[4]=c->r[4]+0xFFFFB520u; // 804EDEDC
  c->r[3]=c->r[29]|c->r[29]; // 804EDEE0
  W32(c->r[29]+0x00000000u,c->r[4]); // 804EDEE4
  c->r[4]=c->r[30]|c->r[30]; // 804EDEE8
  c->r[5]=0u+0x00000000u; // 804EDEEC
  W32(c->r[29]+0x00000074u,c->r[31]); // 804EDEF0
  c->lr=0x804EDEF8u; f_80508DF0(c); // 804EDEF4
L_804EDEF8:;
  c->r[3]=c->r[29]|c->r[29]; // 804EDEF8
L_804EDEFC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EDEFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EDF00
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EDF04
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EDF08
  c->lr=c->r[0]; // 804EDF0C
  c->r[1]=c->r[1]+0x00000020u; // 804EDF10
  return; // 804EDF14
}

// fn_804EDF18
void f_804EDF18(Ctx* __restrict c) {
  trace_call(0x804EDF18u);
  c->r[3]=0u+0x00000078u; // 804EDF18
  return; // 804EDF1C
}

// fn_804EDF20
void f_804EDF20(Ctx* __restrict c) {
  trace_call(0x804EDF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDF20
  c->r[0]=c->lr; // 804EDF24
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EDF28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EDF2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EDF30
  c->r[30]=c->r[4]|c->r[4]; // 804EDF34
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EDF38
  c->r[29]=c->r[3]|c->r[3]; // 804EDF3C
  c->r[31]=R32(c->r[3]+0x00000124u); // 804EDF40
  c->r[6]=R32(c->r[3]+0x00000120u); // 804EDF44
  cmpu(c,0,c->r[5],c->r[31]); // 804EDF48
  if (!crb(c,0)) { goto L_804EDF58; } // 804EDF4C
  c->r[3]=0u+0x00000000u; // 804EDF50
  goto L_804EDF8C; // 804EDF54
L_804EDF58:;
  c->r[5]=c->r[31]|c->r[31]; // 804EDF58
  c->r[7]=0u+0x00000002u; // 804EDF5C
  c->r[3]=c->r[3]+0x0000014Cu; // 804EDF60
  c->lr=0x804EDF68u; f_80384CF0(c); // 804EDF64
  cmpu(c,0,c->r[3],c->r[31]); // 804EDF68
  if (crb(c,2)) { goto L_804EDF78; } // 804EDF6C
  c->r[3]=0u+0x00000000u; // 804EDF70
  goto L_804EDF8C; // 804EDF74
L_804EDF78:;
  c->r[4]=c->r[30]|c->r[30]; // 804EDF78
  c->r[5]=c->r[31]|c->r[31]; // 804EDF7C
  c->r[3]=c->r[29]+0x00000108u; // 804EDF80
  c->lr=0x804EDF88u; f_804F85FC(c); // 804EDF84
  c->r[3]=0u+0x00000001u; // 804EDF88
L_804EDF8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EDF8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EDF90
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EDF94
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EDF98
  c->lr=c->r[0]; // 804EDF9C
  c->r[1]=c->r[1]+0x00000020u; // 804EDFA0
  return; // 804EDFA4
}

// fn_804EDFA8
void f_804EDFA8(Ctx* __restrict c) {
  trace_call(0x804EDFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EDFA8
  c->r[0]=c->lr; // 804EDFAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EDFB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EDFB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EDFB8
  c->r[30]=c->r[4]|c->r[4]; // 804EDFBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EDFC0
  c->r[29]=c->r[3]|c->r[3]; // 804EDFC4
  c->r[31]=R32(c->r[3]+0x0000011Cu); // 804EDFC8
  c->r[6]=R32(c->r[3]+0x00000118u); // 804EDFCC
  cmpu(c,0,c->r[5],c->r[31]); // 804EDFD0
  if (!crb(c,0)) { goto L_804EDFE0; } // 804EDFD4
  c->r[3]=0u+0x00000000u; // 804EDFD8
  goto L_804EE014; // 804EDFDC
L_804EDFE0:;
  c->r[5]=c->r[31]|c->r[31]; // 804EDFE0
  c->r[7]=0u+0x00000002u; // 804EDFE4
  c->r[3]=c->r[3]+0x0000014Cu; // 804EDFE8
  c->lr=0x804EDFF0u; f_80384CF0(c); // 804EDFEC
  cmpu(c,0,c->r[3],c->r[31]); // 804EDFF0
  if (crb(c,2)) { goto L_804EE000; } // 804EDFF4
  c->r[3]=0u+0x00000000u; // 804EDFF8
  goto L_804EE014; // 804EDFFC
L_804EE000:;
  c->r[4]=c->r[30]|c->r[30]; // 804EE000
  c->r[5]=c->r[31]|c->r[31]; // 804EE004
  c->r[3]=c->r[29]+0x00000108u; // 804EE008
  c->lr=0x804EE010u; f_804F8554(c); // 804EE00C
  c->r[3]=0u+0x00000001u; // 804EE010
L_804EE014:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EE014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EE018
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EE01C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EE020
  c->lr=c->r[0]; // 804EE024
  c->r[1]=c->r[1]+0x00000020u; // 804EE028
  return; // 804EE02C
}

// fn_804EE030
void f_804EE030(Ctx* __restrict c) {
  trace_call(0x804EE030u);
  c->r[8]=R32(c->r[3]+0x00000018u); // 804EE030
  c->r[7]=R32(c->r[3]+0x00000070u); // 804EE034
  c->r[6]=R32(c->r[3]+0x00000074u); // 804EE038
  c->r[0]=c->r[8]+c->r[5]; // 804EE03C
  c->r[6]=c->r[7]+c->r[6]; // 804EE040
  cmpu(c,0,c->r[0],c->r[6]); // 804EE044
  if (!crb(c,1)) { goto L_804EE058; } // 804EE048
  c->r[5]=c->r[6]-c->r[8]; // 804EE04C
  c->r[0]=c->r[5]+0x0000001Fu; // 804EE050
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EE054
L_804EE058:;
  f_8050901C(c); return; // 804EE058
}

// fn_804EE05C
void f_804EE05C(Ctx* __restrict c) {
  trace_call(0x804EE05Cu);
  cmps(c,0,(int32_t)c->r[5],1); // 804EE05C
  if (crb(c,2)) { goto L_804EE08C; } // 804EE060
  if (!crb(c,0)) { goto L_804EE074; } // 804EE064
  cmps(c,0,(int32_t)c->r[5],0); // 804EE068
  if (!crb(c,0)) { goto L_804EE080; } // 804EE06C
  return; // 804EE070
L_804EE074:;
  cmps(c,0,(int32_t)c->r[5],3); // 804EE074
  if (!crb(c,0)) return; // 804EE078
  goto L_804EE098; // 804EE07C
L_804EE080:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804EE080
  c->r[4]=c->r[4]+c->r[0]; // 804EE084
  goto L_804EE0B0; // 804EE088
L_804EE08C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804EE08C
  c->r[4]=c->r[4]+c->r[0]; // 804EE090
  goto L_804EE0B0; // 804EE094
L_804EE098:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 804EE098
  c->r[0]=R32(c->r[3]+0x00000074u); // 804EE09C
  c->r[0]=c->r[5]+c->r[0]; // 804EE0A0
  c->r[4]=c->r[0]-c->r[4]; // 804EE0A4
  goto L_804EE0B0; // 804EE0A8
  return; // 804EE0AC
L_804EE0B0:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 804EE0B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804EE0B4
  if (!crb(c,0)) { goto L_804EE0C4; } // 804EE0B8
  c->r[4]=c->r[5]|c->r[5]; // 804EE0BC
  goto L_804EE0D8; // 804EE0C0
L_804EE0C4:;
  c->r[0]=R32(c->r[3]+0x00000074u); // 804EE0C4
  c->r[0]=c->r[5]+c->r[0]; // 804EE0C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804EE0CC
  if (!crb(c,1)) { goto L_804EE0D8; } // 804EE0D0
  c->r[4]=c->r[0]|c->r[0]; // 804EE0D4
L_804EE0D8:;
  c->r[5]=0u+0x00000000u; // 804EE0D8
  f_80508DF0(c); return; // 804EE0DC
  return; // 804EE0E0
}

// fn_804EE0E4
void f_804EE0E4(Ctx* __restrict c) {
  trace_call(0x804EE0E4u);
  c->r[3]=0u+0x00000020u; // 804EE0E4
  return; // 804EE0E8
}

// fn_804EE0EC
void f_804EE0EC(Ctx* __restrict c) {
  trace_call(0x804EE0ECu);
  c->r[3]=0u+0x00000020u; // 804EE0EC
  return; // 804EE0F0
}

// fn_804EE0F4
void f_804EE0F4(Ctx* __restrict c) {
  trace_call(0x804EE0F4u);
  c->r[3]=0u+0x00000004u; // 804EE0F4
  return; // 804EE0F8
}

// fn_804EE0FC
void f_804EE0FC(Ctx* __restrict c) {
  trace_call(0x804EE0FCu);
  c->r[3]=0u+0x00000001u; // 804EE0FC
  return; // 804EE100
}

// fn_804EE104
void f_804EE104(Ctx* __restrict c) {
  trace_call(0x804EE104u);
  c->r[3]=0u+0x00000000u; // 804EE104
  return; // 804EE108
}

// fn_804EE10C
void f_804EE10C(Ctx* __restrict c) {
  trace_call(0x804EE10Cu);
  c->r[3]=0u+0x00000001u; // 804EE10C
  return; // 804EE110
}

// fn_804EE114
void f_804EE114(Ctx* __restrict c) {
  trace_call(0x804EE114u);
  c->r[3]=0u+0x00000001u; // 804EE114
  return; // 804EE118
}

// fn_804EE11C
void f_804EE11C(Ctx* __restrict c) {
  trace_call(0x804EE11Cu);
  c->r[3]=R8(c->r[3]+0x0000006Cu); // 804EE11C
  return; // 804EE120
}

// fn_804EE124
void f_804EE124(Ctx* __restrict c) {
  trace_call(0x804EE124u);
  c->r[3]=0u+0x00000000u; // 804EE124
  return; // 804EE128
}

// fn_804EE12C
void f_804EE12C(Ctx* __restrict c) {
  trace_call(0x804EE12Cu);
  c->r[3]=0u+0x00000000u; // 804EE12C
  return; // 804EE130
}

// fn_804EE134
void f_804EE134(Ctx* __restrict c) {
  trace_call(0x804EE134u);
  c->r[3]=0u+0x00000000u; // 804EE134
  return; // 804EE138
}

// fn_804EE13C
void f_804EE13C(Ctx* __restrict c) {
  trace_call(0x804EE13Cu);
  c->r[3]=c->r[13]+0xFFFFE580u; // 804EE13C
  return; // 804EE140
}

// fn_804EE144
void f_804EE144(Ctx* __restrict c) {
  trace_call(0x804EE144u);
  c->r[3]=R32(c->r[3]+0x00000074u); // 804EE144
  return; // 804EE148
}

// fn_804EE14C
void f_804EE14C(Ctx* __restrict c) {
  trace_call(0x804EE14Cu);
  c->r[4]=R32(c->r[3]+0x00000070u); // 804EE14C
  c->r[0]=R32(c->r[3]+0x00000018u); // 804EE150
  c->r[3]=c->r[0]-c->r[4]; // 804EE154
  return; // 804EE158
}

// fn_804EE15C
void f_804EE15C(Ctx* __restrict c) {
  trace_call(0x804EE15Cu);
  c->r[3]=0u+0x00000000u; // 804EE15C
  return; // 804EE160
}

// fn_804EE164
void f_804EE164(Ctx* __restrict c) {
  trace_call(0x804EE164u);
  c->r[3]=0u+0x00000000u; // 804EE164
  return; // 804EE168
}

// fn_804EE16C
void f_804EE16C(Ctx* __restrict c) {
  trace_call(0x804EE16Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE16C
  c->r[0]=c->lr; // 804EE170
  cmps(c,0,(int32_t)c->r[3],0); // 804EE174
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EE178
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EE17C
  c->r[31]=c->r[4]|c->r[4]; // 804EE180
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EE184
  c->r[30]=c->r[3]|c->r[3]; // 804EE188
  if (crb(c,2)) { goto L_804EE1A8; } // 804EE18C
  c->r[4]=0u+0x00000000u; // 804EE190
  c->lr=0x804EE198u; f_80508F90(c); // 804EE194
  cmps(c,0,(int32_t)c->r[31],0); // 804EE198
  if (!crb(c,1)) { goto L_804EE1A8; } // 804EE19C
  c->r[3]=c->r[30]|c->r[30]; // 804EE1A0
  c->lr=0x804EE1A8u; f_803A9400(c); // 804EE1A4
L_804EE1A8:;
  c->r[3]=c->r[30]|c->r[30]; // 804EE1A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EE1AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EE1B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EE1B4
  c->lr=c->r[0]; // 804EE1B8
  c->r[1]=c->r[1]+0x00000010u; // 804EE1BC
  return; // 804EE1C0
}

// __ct__Q44nw4r3snd6detail12EnvGeneratorFv
void f_804EE1C4(Ctx* __restrict c) {
  trace_call(0x804EE1C4u);
  {uint32_t ea=c->r[2]+0x000019B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE1C4
  c->r[4]=0u+0x00000000u; // 804EE1C8
  {uint32_t ea=c->r[2]+0x000019C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE1CC
  c->r[5]=0u+0x806B0000u; // 804EE1D0
  c->r[5]=c->r[5]+0xFFFFD448u; // 804EE1D4
  {uint32_t ea=c->r[2]+0x000019BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EE1D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EE1DC
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE1E0
  c->r[0]=0u+0x0000007Fu; // 804EE1E4
  W16(c->r[3]+0x00000016u,c->r[4]); // 804EE1E8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804EE1EC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804EE1F0
  W8(c->r[3]+0x00000014u,c->r[0]); // 804EE1F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804EE1F8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE1FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EE200
  return; // 804EE204
}

// Init__Q44nw4r3snd6detail12EnvGeneratorFf
void f_804EE208(Ctx* __restrict c) {
  trace_call(0x804EE208u);
  {uint32_t ea=c->r[2]+0x000019C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE208
  c->r[4]=0u+0x00000000u; // 804EE20C
  c->r[5]=0u+0x806B0000u; // 804EE210
  {uint32_t ea=c->r[2]+0x000019BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EE214
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EE218
  c->r[5]=c->r[5]+0xFFFFD448u; // 804EE21C
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE220
  c->r[0]=0u+0x0000007Fu; // 804EE224
  W16(c->r[3]+0x00000016u,c->r[4]); // 804EE228
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804EE22C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804EE230
  W8(c->r[3]+0x00000014u,c->r[0]); // 804EE234
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804EE238
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE23C
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EE240
  return; // 804EE244
}

// Reset__Q44nw4r3snd6detail12EnvGeneratorFf
void f_804EE248(Ctx* __restrict c) {
  trace_call(0x804EE248u);
  {uint32_t ea=c->r[2]+0x000019C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE248
  c->r[0]=0u+0x00000000u; // 804EE24C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EE250
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EE254
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE258
  return; // 804EE25C
}

// GetValue__Q44nw4r3snd6detail12EnvGeneratorCFv
void f_804EE260(Ctx* __restrict c) {
  trace_call(0x804EE260u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EE260
  cmps(c,0,(int32_t)c->r[0],0); // 804EE264
  if (!crb(c,2)) { goto L_804EE27C; } // 804EE268
  {uint32_t ea=c->r[2]+0x000019C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE26C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE270
  fcmp(c,0,c->f[1],c->f[0]); // 804EE274
  if (crb(c,2)) return; // 804EE278
L_804EE27C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE27C
  {uint32_t ea=c->r[2]+0x000019C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE280
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 804EE284
  return; // 804EE288
}

// Update__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE28C(Ctx* __restrict c) {
  trace_call(0x804EE28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE28C
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EE290
  cmps(c,0,(int32_t)c->r[0],2); // 804EE294
  if (crb(c,2)) { goto L_804EE340; } // 804EE298
  if (!crb(c,0)) { goto L_804EE2B0; } // 804EE29C
  cmps(c,0,(int32_t)c->r[0],0); // 804EE2A0
  if (crb(c,2)) { goto L_804EE2BC; } // 804EE2A4
  if (!crb(c,0)) { goto L_804EE308; } // 804EE2A8
  goto L_804EE3E0; // 804EE2AC
L_804EE2B0:;
  cmps(c,0,(int32_t)c->r[0],4); // 804EE2B0
  if (crb(c,2)) { goto L_804EE3B0; } // 804EE2B4
  goto L_804EE3E0; // 804EE2B8
L_804EE2BC:;
  {uint32_t ea=c->r[2]+0x000019C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE2BC
  c->ctr=c->r[4]; // 804EE2C0
  cmps(c,0,(int32_t)c->r[4],0); // 804EE2C4
  if (!crb(c,1)) { goto L_804EE3E0; } // 804EE2C8
L_804EE2CC:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EE2CC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE2D0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804EE2D4
  fcmp(c,0,c->f[1],c->f[0]); // 804EE2D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804EE2DC
  if (!crb(c,1)) { goto L_804EE300; } // 804EE2E0
  {uint32_t ea=c->r[2]+0x000019C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE2E4
  c->r[4]=0u+0x00000001u; // 804EE2E8
  c->r[0]=R16(c->r[3]+0x00000016u); // 804EE2EC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE2F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EE2F4
  W16(c->r[3]+0x00000018u,c->r[0]); // 804EE2F8
  goto L_804EE3E0; // 804EE2FC
L_804EE300:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EE2CC; } // 804EE300
  goto L_804EE3E0; // 804EE304
L_804EE308:;
  c->r[6]=R16(c->r[3]+0x00000018u); // 804EE308
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 804EE30C
  if (!crb(c,0)) { goto L_804EE320; } // 804EE310
  c->r[0]=c->r[6]-c->r[4]; // 804EE314
  W16(c->r[3]+0x00000018u,c->r[0]); // 804EE318
  goto L_804EE334; // 804EE31C
L_804EE320:;
  c->r[5]=0u+0x00000000u; // 804EE320
  c->r[0]=0u+0x00000002u; // 804EE324
  W16(c->r[3]+0x00000018u,c->r[5]); // 804EE328
  c->r[4]=c->r[4]-c->r[6]; // 804EE32C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EE330
L_804EE334:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EE334
  cmps(c,0,(int32_t)c->r[0],2); // 804EE338
  if (!crb(c,2)) { goto L_804EE3E0; } // 804EE33C
L_804EE340:;
  c->r[5]=0u+0x43300000u; // 804EE340
  c->r[0]=c->r[4]^0x80000000u; // 804EE344
  c->r[6]=R8(c->r[3]+0x00000014u); // 804EE348
  c->r[4]=0u+0x806B0000u; // 804EE34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EE350
  c->r[4]=c->r[4]+0xFFFFD348u; // 804EE354
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 804EE358
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE35C
  W32(c->r[1]+0x00000010u,c->r[5]); // 804EE360
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[0]); // 804EE364
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EE368
  c->r[0]=c->r[0]^0x80000000u; // 804EE36C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE370
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804EE374
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EE378
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE37C
  W32(c->r[1]+0x00000008u,c->r[5]); // 804EE380
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804EE384
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804EE388
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EE38C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 804EE390
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE394
  fcmp(c,0,c->f[0],c->f[1]); // 804EE398
  if (!crb(c,0)) { goto L_804EE3E0; } // 804EE39C
  c->r[0]=0u+0x00000003u; // 804EE3A0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804EE3A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EE3A8
  goto L_804EE3E0; // 804EE3AC
L_804EE3B0:;
  c->r[4]=c->r[4]^0x80000000u; // 804EE3B0
  c->r[0]=0u+0x43300000u; // 804EE3B4
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EE3B8
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE3BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EE3C0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE3C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 804EE3C8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE3CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804EE3D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804EE3D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EE3D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804EE3DC
L_804EE3E0:;
  c->r[1]=c->r[1]+0x00000020u; // 804EE3E0
  return; // 804EE3E4
}

// SetAttack__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE3E8(Ctx* __restrict c) {
  trace_call(0x804EE3E8u);
  c->r[5]=0u+0x806B0000u; // 804EE3E8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EE3EC
  c->r[5]=c->r[5]+0xFFFFD448u; // 804EE3F0
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE3F4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804EE3F8
  return; // 804EE3FC
}

// SetHold__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE400(Ctx* __restrict c) {
  trace_call(0x804EE400u);
  c->r[0]=c->r[4]+0x00000001u; // 804EE400
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 804EE404
  c->r[0]=sraw(c,c->r[0],2); // 804EE408
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 804EE40C
  W16(c->r[3]+0x00000016u,c->r[0]); // 804EE410
  return; // 804EE414
}

// SetDecay__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE418(Ctx* __restrict c) {
  trace_call(0x804EE418u);
  cmps(c,0,(int32_t)c->r[4],127); // 804EE418
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE41C
  if (!crb(c,2)) { goto L_804EE42C; } // 804EE420
  {uint32_t ea=c->r[2]+0x000019BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE424
  goto L_804EE4AC; // 804EE428
L_804EE42C:;
  cmps(c,0,(int32_t)c->r[4],126); // 804EE42C
  if (!crb(c,2)) { goto L_804EE43C; } // 804EE430
  {uint32_t ea=c->r[2]+0x000019D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE434
  goto L_804EE4AC; // 804EE438
L_804EE43C:;
  cmps(c,0,(int32_t)c->r[4],50); // 804EE43C
  if (!crb(c,0)) { goto L_804EE47C; } // 804EE440
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804EE444
  c->r[0]=0u+0x43300000u; // 804EE448
  c->r[4]=c->r[4]+0x00000001u; // 804EE44C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EE450
  c->r[0]=c->r[4]^0x80000000u; // 804EE454
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE458
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EE45C
  {uint32_t ea=c->r[2]+0x000019DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE460
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804EE464
  {uint32_t ea=c->r[2]+0x000019E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE468
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804EE46C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804EE470
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EE474
  goto L_804EE4AC; // 804EE478
L_804EE47C:;
  c->r[4]=addc(c,~c->r[4],0x0000007Eu,1); // 804EE47C
  c->r[0]=0u+0x43300000u; // 804EE480
  c->r[4]=c->r[4]^0x80000000u; // 804EE484
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EE488
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE48C
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EE490
  {uint32_t ea=c->r[2]+0x000019E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE494
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 804EE498
  {uint32_t ea=c->r[2]+0x000019E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE49C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804EE4A0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 804EE4A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EE4A8
L_804EE4AC:;
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804EE4AC
  c->r[1]=c->r[1]+0x00000020u; // 804EE4B0
  return; // 804EE4B4
}

// SetSustain__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE4B8(Ctx* __restrict c) {
  trace_call(0x804EE4B8u);
  W8(c->r[3]+0x00000014u,c->r[4]); // 804EE4B8
  return; // 804EE4BC
}

// SetRelease__Q44nw4r3snd6detail12EnvGeneratorFi
void f_804EE4C0(Ctx* __restrict c) {
  trace_call(0x804EE4C0u);
  cmps(c,0,(int32_t)c->r[4],127); // 804EE4C0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE4C4
  if (!crb(c,2)) { goto L_804EE4D4; } // 804EE4C8
  {uint32_t ea=c->r[2]+0x000019BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE4CC
  goto L_804EE554; // 804EE4D0
L_804EE4D4:;
  cmps(c,0,(int32_t)c->r[4],126); // 804EE4D4
  if (!crb(c,2)) { goto L_804EE4E4; } // 804EE4D8
  {uint32_t ea=c->r[2]+0x000019D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE4DC
  goto L_804EE554; // 804EE4E0
L_804EE4E4:;
  cmps(c,0,(int32_t)c->r[4],50); // 804EE4E4
  if (!crb(c,0)) { goto L_804EE524; } // 804EE4E8
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804EE4EC
  c->r[0]=0u+0x43300000u; // 804EE4F0
  c->r[4]=c->r[4]+0x00000001u; // 804EE4F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EE4F8
  c->r[0]=c->r[4]^0x80000000u; // 804EE4FC
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE500
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EE504
  {uint32_t ea=c->r[2]+0x000019DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE508
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804EE50C
  {uint32_t ea=c->r[2]+0x000019E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE510
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804EE514
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804EE518
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EE51C
  goto L_804EE554; // 804EE520
L_804EE524:;
  c->r[4]=addc(c,~c->r[4],0x0000007Eu,1); // 804EE524
  c->r[0]=0u+0x43300000u; // 804EE528
  c->r[4]=c->r[4]^0x80000000u; // 804EE52C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EE530
  {uint32_t ea=c->r[2]+0x000019D0u; c->f[3]=RF64(ea);} // 804EE534
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EE538
  {uint32_t ea=c->r[2]+0x000019E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EE53C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 804EE540
  {uint32_t ea=c->r[2]+0x000019E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EE544
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804EE548
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 804EE54C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EE550
L_804EE554:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EE554
  c->r[1]=c->r[1]+0x00000020u; // 804EE558
  return; // 804EE55C
}

// fn_804EE560
void f_804EE560(Ctx* __restrict c) {
  trace_call(0x804EE560u);
  c->r[4]=0u+0x00000000u; // 804EE560
  c->r[0]=0u+0x00000001u; // 804EE564
  W32(c->r[3]+0x00000004u,c->r[4]); // 804EE568
  c->r[5]=c->r[3]+0x00000004u; // 804EE56C
  W32(c->r[3]+0x00000008u,c->r[4]); // 804EE570
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EE574
  W32(c->r[3]+0x00000004u,c->r[5]); // 804EE578
  W32(c->r[3]+0x00000008u,c->r[5]); // 804EE57C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EE580
  return; // 804EE584
}

// fn_804EE588
void f_804EE588(Ctx* __restrict c) {
  trace_call(0x804EE588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE588
  c->r[0]=c->lr; // 804EE58C
  cmps(c,0,(int32_t)c->r[3],0); // 804EE590
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EE594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EE598
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EE59C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EE5A0
  c->r[29]=c->r[4]|c->r[4]; // 804EE5A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 804EE5A8
  c->r[28]=c->r[3]|c->r[3]; // 804EE5AC
  if (crb(c,2)) { goto L_804EE600; } // 804EE5B0
  c->r[31]=R32(c->r[3]+0x00000004u); // 804EE5B4
  c->r[30]=c->r[3]+0x00000004u; // 804EE5B8
  goto L_804EE5D4; // 804EE5BC
L_804EE5C0:;
  c->r[3]=c->r[31]|c->r[31]; // 804EE5C0
  c->r[31]=R32(c->r[31]+0x00000000u); // 804EE5C4
  c->r[4]=c->r[28]|c->r[28]; // 804EE5C8
  c->r[3]=c->r[3]+0xFFFFFEFCu; // 804EE5CC
  c->lr=0x804EE5D4u; f_804EC034(c); // 804EE5D0
L_804EE5D4:;
  cmpu(c,0,c->r[31],c->r[30]); // 804EE5D4
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE5C0; } // 804EE5D8
  cmps(c,0,(int32_t)c->r[28],0); // 804EE5DC
  if (crb(c,2)) { goto L_804EE5F0; } // 804EE5E0
  c->r[3]=c->r[28]|c->r[28]; // 804EE5E4
  c->r[4]=0u+0x00000000u; // 804EE5E8
  c->lr=0x804EE5F0u; f_80507DCC(c); // 804EE5EC
L_804EE5F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804EE5F0
  if (!crb(c,1)) { goto L_804EE600; } // 804EE5F4
  c->r[3]=c->r[28]|c->r[28]; // 804EE5F8
  c->lr=0x804EE600u; f_803A9400(c); // 804EE5FC
L_804EE600:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EE600
  c->r[3]=c->r[28]|c->r[28]; // 804EE604
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EE608
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EE60C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804EE610
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EE614
  c->lr=c->r[0]; // 804EE618
  c->r[1]=c->r[1]+0x00000020u; // 804EE61C
  return; // 804EE620
}

// fn_804EE624
void f_804EE624(Ctx* __restrict c) {
  trace_call(0x804EE624u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE624
  c->r[0]=c->lr; // 804EE628
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EE62C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EE630
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EE634
  c->r[30]=c->r[3]+0x00000004u; // 804EE638
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EE63C
  c->r[29]=c->r[4]|c->r[4]; // 804EE640
  c->r[31]=R32(c->r[3]+0x00000004u); // 804EE644
  goto L_804EE660; // 804EE648
L_804EE64C:;
  c->r[3]=c->r[31]|c->r[31]; // 804EE64C
  c->r[31]=R32(c->r[31]+0x00000000u); // 804EE650
  c->r[4]=c->r[29]|c->r[29]; // 804EE654
  c->r[3]=c->r[3]+0xFFFFFEFCu; // 804EE658
  c->lr=0x804EE660u; f_804EAE90(c); // 804EE65C
L_804EE660:;
  cmpu(c,0,c->r[31],c->r[30]); // 804EE660
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE64C; } // 804EE664
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EE668
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EE66C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EE670
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EE674
  c->lr=c->r[0]; // 804EE678
  c->r[1]=c->r[1]+0x00000020u; // 804EE67C
  return; // 804EE680
}

// fn_804EE684
void f_804EE684(Ctx* __restrict c) {
  trace_call(0x804EE684u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE684
  c->r[0]=c->lr; // 804EE688
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EE68C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EE690
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EE694
  c->r[30]=c->r[3]+0x00000004u; // 804EE698
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EE69C
  c->r[29]=c->r[4]|c->r[4]; // 804EE6A0
  c->r[31]=R32(c->r[3]+0x00000004u); // 804EE6A4
  goto L_804EE6C0; // 804EE6A8
L_804EE6AC:;
  c->r[3]=c->r[31]|c->r[31]; // 804EE6AC
  c->r[31]=R32(c->r[31]+0x00000000u); // 804EE6B0
  c->r[4]=c->r[29]|c->r[29]; // 804EE6B4
  c->r[3]=c->r[3]+0xFFFFFEFCu; // 804EE6B8
  c->lr=0x804EE6C0u; f_804EC020(c); // 804EE6BC
L_804EE6C0:;
  cmpu(c,0,c->r[31],c->r[30]); // 804EE6C0
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE6AC; } // 804EE6C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EE6C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EE6CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EE6D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EE6D4
  c->lr=c->r[0]; // 804EE6D8
  c->r[1]=c->r[1]+0x00000020u; // 804EE6DC
  return; // 804EE6E0
}

// fn_804EE6E4
void f_804EE6E4(Ctx* __restrict c) {
  trace_call(0x804EE6E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE6E4
  c->r[0]=c->lr; // 804EE6E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EE6EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EE6F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EE6F4
  c->r[30]=c->r[4]|c->r[4]; // 804EE6F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EE6FC
  c->r[29]=c->r[3]|c->r[3]; // 804EE700
  W32(c->r[1]+0x00000010u,c->r[28]); // 804EE704
  c->lr=0x804EE70Cu; f_804FD930(c); // 804EE708
  c->r[3]=c->r[3]+0x00000354u; // 804EE70C
  c->lr=0x804EE714u; f_8037CD84(c); // 804EE710
  c->r[3]=R8(c->r[30]+0x00000094u); // 804EE714
  c->r[0]=R32(c->r[30]+0x00000050u); // 804EE718
  c->r[3]=c->r[3]+c->r[0]; // 804EE71C
  cmps(c,0,(int32_t)c->r[3],127); // 804EE720
  if (!crb(c,1)) { goto L_804EE730; } // 804EE724
  c->r[31]=0u+0x0000007Fu; // 804EE728
  goto L_804EE738; // 804EE72C
L_804EE730:;
  c->r[0]=sraw(c,c->r[3],31); // 804EE730
  c->r[31]=c->r[3]&~c->r[0]; // 804EE734
L_804EE738:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EE738
  cmps(c,0,(int32_t)c->r[0],0); // 804EE73C
  if (!crb(c,2)) { goto L_804EE758; } // 804EE740
  c->lr=0x804EE748u; f_804FD930(c); // 804EE744
  c->r[3]=c->r[3]+0x00000354u; // 804EE748
  c->lr=0x804EE750u; f_8037CE60(c); // 804EE74C
  c->r[3]=0u+0x00000000u; // 804EE750
  goto L_804EE864; // 804EE754
L_804EE758:;
  c->r[28]=c->r[29]+0x00000004u; // 804EE758
  goto L_804EE820; // 804EE75C
L_804EE760:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 804EE760
  c->r[6]=0u+0x00000080u; // 804EE764
  c->r[3]=0u+0x00000000u; // 804EE768
  goto L_804EE7AC; // 804EE76C
L_804EE770:;
  c->r[5]=R8(c->r[4]+0xFFFFFF90u); // 804EE770
  c->r[7]=c->r[4]+0xFFFFFEFCu; // 804EE774
  c->r[0]=R32(c->r[4]+0xFFFFFF4Cu); // 804EE778
  c->r[5]=c->r[5]+c->r[0]; // 804EE77C
  cmps(c,0,(int32_t)c->r[5],127); // 804EE780
  if (!crb(c,1)) { goto L_804EE790; } // 804EE784
  c->r[0]=0u+0x0000007Fu; // 804EE788
  goto L_804EE798; // 804EE78C
L_804EE790:;
  c->r[0]=sraw(c,c->r[5],31); // 804EE790
  c->r[0]=c->r[5]&~c->r[0]; // 804EE794
L_804EE798:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804EE798
  if (!crb(c,1)) { goto L_804EE7A8; } // 804EE79C
  c->r[3]=c->r[7]|c->r[7]; // 804EE7A0
  c->r[6]=c->r[0]|c->r[0]; // 804EE7A4
L_804EE7A8:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804EE7A8
L_804EE7AC:;
  cmpu(c,0,c->r[4],c->r[28]); // 804EE7AC
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE770; } // 804EE7B0
  cmps(c,0,(int32_t)c->r[3],0); // 804EE7B4
  if (!crb(c,2)) { goto L_804EE7D0; } // 804EE7B8
  c->lr=0x804EE7C0u; f_804FD930(c); // 804EE7BC
  c->r[3]=c->r[3]+0x00000354u; // 804EE7C0
  c->lr=0x804EE7C8u; f_8037CE60(c); // 804EE7C4
  c->r[3]=0u+0x00000000u; // 804EE7C8
  goto L_804EE864; // 804EE7CC
L_804EE7D0:;
  c->r[4]=R8(c->r[3]+0x00000094u); // 804EE7D0
  c->r[0]=R32(c->r[3]+0x00000050u); // 804EE7D4
  c->r[4]=c->r[4]+c->r[0]; // 804EE7D8
  cmps(c,0,(int32_t)c->r[4],127); // 804EE7DC
  if (!crb(c,1)) { goto L_804EE7EC; } // 804EE7E0
  c->r[0]=0u+0x0000007Fu; // 804EE7E4
  goto L_804EE7F4; // 804EE7E8
L_804EE7EC:;
  c->r[0]=sraw(c,c->r[4],31); // 804EE7EC
  c->r[0]=c->r[4]&~c->r[0]; // 804EE7F0
L_804EE7F4:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804EE7F4
  if (!crb(c,0)) { goto L_804EE810; } // 804EE7F8
  c->lr=0x804EE800u; f_804FD930(c); // 804EE7FC
  c->r[3]=c->r[3]+0x00000354u; // 804EE800
  c->lr=0x804EE808u; f_8037CE60(c); // 804EE804
  c->r[3]=0u+0x00000000u; // 804EE808
  goto L_804EE864; // 804EE80C
L_804EE810:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EE810
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EE814
  c->ctr=c->r[12]; // 804EE818
  if (true) { c->lr=0x804EE820u; dispatch(c,c->ctr); } // 804EE81C
L_804EE820:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 804EE820
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EE824
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EE828
  if (!crb(c,0)) { IRQCHK(c); goto L_804EE760; } // 804EE82C
  c->r[0]=c->r[29]+0x00000004u; // 804EE830
  c->r[3]=c->r[29]|c->r[29]; // 804EE834
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EE838
  c->r[4]=c->r[1]+0x00000008u; // 804EE83C
  c->r[5]=c->r[30]+0x00000104u; // 804EE840
  c->lr=0x804EE848u; f_80507EDC(c); // 804EE844
  c->r[3]=c->r[30]|c->r[30]; // 804EE848
  c->r[4]=c->r[29]|c->r[29]; // 804EE84C
  c->lr=0x804EE854u; f_804EC02C(c); // 804EE850
  c->lr=0x804EE858u; f_804FD930(c); // 804EE854
  c->r[3]=c->r[3]+0x00000354u; // 804EE858
  c->lr=0x804EE860u; f_8037CE60(c); // 804EE85C
  c->r[3]=0u+0x00000001u; // 804EE860
L_804EE864:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EE864
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EE868
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EE86C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EE870
  c->r[28]=R32(c->r[1]+0x00000010u); // 804EE874
  c->lr=c->r[0]; // 804EE878
  c->r[1]=c->r[1]+0x00000020u; // 804EE87C
  return; // 804EE880
}

// fn_804EE884
void f_804EE884(Ctx* __restrict c) {
  trace_call(0x804EE884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE884
  c->r[0]=c->lr; // 804EE888
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EE88C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EE890
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EE894
  c->r[30]=c->r[3]|c->r[3]; // 804EE898
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EE89C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804EE8A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804EE8A4
  if (!crb(c,1)) { goto L_804EE928; } // 804EE8A8
  c->r[31]=c->r[3]+0x00000004u; // 804EE8AC
  goto L_804EE918; // 804EE8B0
L_804EE8B4:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 804EE8B4
  c->r[6]=0u+0x00000080u; // 804EE8B8
  c->r[3]=0u+0x00000000u; // 804EE8BC
  goto L_804EE900; // 804EE8C0
L_804EE8C4:;
  c->r[5]=R8(c->r[4]+0xFFFFFF90u); // 804EE8C4
  c->r[7]=c->r[4]+0xFFFFFEFCu; // 804EE8C8
  c->r[0]=R32(c->r[4]+0xFFFFFF4Cu); // 804EE8CC
  c->r[5]=c->r[5]+c->r[0]; // 804EE8D0
  cmps(c,0,(int32_t)c->r[5],127); // 804EE8D4
  if (!crb(c,1)) { goto L_804EE8E4; } // 804EE8D8
  c->r[0]=0u+0x0000007Fu; // 804EE8DC
  goto L_804EE8EC; // 804EE8E0
L_804EE8E4:;
  c->r[0]=sraw(c,c->r[5],31); // 804EE8E4
  c->r[0]=c->r[5]&~c->r[0]; // 804EE8E8
L_804EE8EC:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804EE8EC
  if (!crb(c,1)) { goto L_804EE8FC; } // 804EE8F0
  c->r[3]=c->r[7]|c->r[7]; // 804EE8F4
  c->r[6]=c->r[0]|c->r[0]; // 804EE8F8
L_804EE8FC:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804EE8FC
L_804EE900:;
  cmpu(c,0,c->r[4],c->r[31]); // 804EE900
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE8C4; } // 804EE904
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EE908
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EE90C
  c->ctr=c->r[12]; // 804EE910
  if (true) { c->lr=0x804EE918u; dispatch(c,c->ctr); } // 804EE914
L_804EE918:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 804EE918
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804EE91C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EE920
  if (crb(c,1)) { IRQCHK(c); goto L_804EE8B4; } // 804EE924
L_804EE928:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EE928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EE92C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EE930
  c->lr=c->r[0]; // 804EE934
  c->r[1]=c->r[1]+0x00000010u; // 804EE938
  return; // 804EE93C
}

// fn_804EE940
void f_804EE940(Ctx* __restrict c) {
  trace_call(0x804EE940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EE940
  c->r[0]=c->lr; // 804EE944
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EE948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EE94C
  c->r[31]=c->r[4]|c->r[4]; // 804EE950
  c->r[4]=c->r[4]+0x00000104u; // 804EE954
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EE958
  c->r[30]=c->r[3]|c->r[3]; // 804EE95C
  c->lr=0x804EE964u; f_80507F08(c); // 804EE960
  c->r[3]=c->r[31]|c->r[31]; // 804EE964
  c->r[4]=c->r[30]|c->r[30]; // 804EE968
  c->lr=0x804EE970u; f_804EC034(c); // 804EE96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EE970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EE974
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EE978
  c->lr=c->r[0]; // 804EE97C
  c->r[1]=c->r[1]+0x00000010u; // 804EE980
  return; // 804EE984
}

// fn_804EE988
void f_804EE988(Ctx* __restrict c) {
  trace_call(0x804EE988u);
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 804EE988
  cmps(c,0,(int32_t)c->r[5],0); // 804EE98C
  if (!crb(c,2)) { goto L_804EE99C; } // 804EE990
  c->r[3]=0u+0x00000000u; // 804EE994
  return; // 804EE998
L_804EE99C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EE99C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804EE9A0
  if (crb(c,0)) { goto L_804EEA44; } // 804EE9A4
  c->r[5]=R32(c->r[3]+0x00000004u); // 804EE9A8
  c->r[0]=c->r[3]+0x00000004u; // 804EE9AC
  c->r[8]=0u+0x00000080u; // 804EE9B0
  c->r[7]=0u+0x00000000u; // 804EE9B4
  goto L_804EE9F8; // 804EE9B8
L_804EE9BC:;
  c->r[6]=R8(c->r[5]+0xFFFFFF90u); // 804EE9BC
  c->r[9]=c->r[5]+0xFFFFFEFCu; // 804EE9C0
  c->r[3]=R32(c->r[5]+0xFFFFFF4Cu); // 804EE9C4
  c->r[6]=c->r[6]+c->r[3]; // 804EE9C8
  cmps(c,0,(int32_t)c->r[6],127); // 804EE9CC
  if (!crb(c,1)) { goto L_804EE9DC; } // 804EE9D0
  c->r[3]=0u+0x0000007Fu; // 804EE9D4
  goto L_804EE9E4; // 804EE9D8
L_804EE9DC:;
  c->r[3]=sraw(c,c->r[6],31); // 804EE9DC
  c->r[3]=c->r[6]&~c->r[3]; // 804EE9E0
L_804EE9E4:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 804EE9E4
  if (!crb(c,1)) { goto L_804EE9F4; } // 804EE9E8
  c->r[7]=c->r[9]|c->r[9]; // 804EE9EC
  c->r[8]=c->r[3]|c->r[3]; // 804EE9F0
L_804EE9F4:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 804EE9F4
L_804EE9F8:;
  cmpu(c,0,c->r[5],c->r[0]); // 804EE9F8
  if (!crb(c,2)) { IRQCHK(c); goto L_804EE9BC; } // 804EE9FC
  cmps(c,0,(int32_t)c->r[7],0); // 804EEA00
  if (!crb(c,2)) { goto L_804EEA10; } // 804EEA04
  c->r[3]=0u+0x00000000u; // 804EEA08
  return; // 804EEA0C
L_804EEA10:;
  c->r[3]=R8(c->r[7]+0x00000094u); // 804EEA10
  c->r[0]=R32(c->r[7]+0x00000050u); // 804EEA14
  c->r[3]=c->r[3]+c->r[0]; // 804EEA18
  cmps(c,0,(int32_t)c->r[3],127); // 804EEA1C
  if (!crb(c,1)) { goto L_804EEA2C; } // 804EEA20
  c->r[0]=0u+0x0000007Fu; // 804EEA24
  goto L_804EEA34; // 804EEA28
L_804EEA2C:;
  c->r[0]=sraw(c,c->r[3],31); // 804EEA2C
  c->r[0]=c->r[3]&~c->r[0]; // 804EEA30
L_804EEA34:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804EEA34
  if (!crb(c,0)) { goto L_804EEA44; } // 804EEA38
  c->r[3]=0u+0x00000000u; // 804EEA3C
  return; // 804EEA40
L_804EEA44:;
  c->r[3]=0u+0x00000001u; // 804EEA44
  return; // 804EEA48
}

// __ct__Q44nw4r3snd6detail9FrameHeapFv
void f_804EEA4C(Ctx* __restrict c) {
  trace_call(0x804EEA4Cu);
  c->r[0]=0u+0x00000000u; // 804EEA4C
  c->r[4]=c->r[3]+0x00000008u; // 804EEA50
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EEA54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EEA58
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EEA5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EEA60
  W32(c->r[3]+0x00000008u,c->r[4]); // 804EEA64
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804EEA68
  return; // 804EEA6C
}

// fn_804EEA70
void f_804EEA70(Ctx* __restrict c) {
  trace_call(0x804EEA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EEA70
  c->r[0]=c->lr; // 804EEA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EEA78
  c->r[11]=c->r[1]+0x00000020u; // 804EEA7C
  c->lr=0x804EEA84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804EEA80
  cmps(c,0,(int32_t)c->r[3],0); // 804EEA84
  c->r[27]=c->r[3]|c->r[3]; // 804EEA88
  c->r[28]=c->r[4]|c->r[4]; // 804EEA8C
  if (crb(c,2)) { goto L_804EEB68; } // 804EEA90
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EEA94
  cmps(c,0,(int32_t)c->r[0],0); // 804EEA98
  if (crb(c,2)) { goto L_804EEB48; } // 804EEA9C
  if (crb(c,2)) { goto L_804EEB48; } // 804EEAA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804EEAA4
  cmps(c,0,(int32_t)c->r[0],0); // 804EEAA8
  if (crb(c,2)) { goto L_804EEB2C; } // 804EEAAC
  c->r[31]=c->r[3]+0x00000008u; // 804EEAB0
  goto L_804EEB20; // 804EEAB4
L_804EEAB8:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 804EEAB8
  cmps(c,0,(int32_t)c->r[29],0); // 804EEABC
  if (crb(c,2)) { goto L_804EEB14; } // 804EEAC0
  c->r[30]=c->r[29]+0x0000000Cu; // 804EEAC4
  goto L_804EEAF8; // 804EEAC8
L_804EEACC:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 804EEACC
  cmps(c,0,(int32_t)c->r[30],0); // 804EEAD0
  if (crb(c,2)) { goto L_804EEAF8; } // 804EEAD4
  c->r[12]=R32(c->r[30]+0x00000010u); // 804EEAD8
  cmps(c,0,(int32_t)c->r[12],0); // 804EEADC
  if (crb(c,2)) { goto L_804EEAF8; } // 804EEAE0
  c->r[3]=R32(c->r[30]+0x00000008u); // 804EEAE4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804EEAE8
  c->r[5]=R32(c->r[30]+0x00000014u); // 804EEAEC
  c->ctr=c->r[12]; // 804EEAF0
  if (true) { c->lr=0x804EEAF8u; dispatch(c,c->ctr); } // 804EEAF4
L_804EEAF8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EEAF8
  cmpu(c,0,c->r[30],c->r[0]); // 804EEAFC
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEACC; } // 804EEB00
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 804EEB04
  if (crb(c,2)) { goto L_804EEB14; } // 804EEB08
  c->r[4]=0u+0x00000000u; // 804EEB0C
  c->lr=0x804EEB14u; f_80507DCC(c); // 804EEB10
L_804EEB14:;
  c->r[4]=c->r[29]|c->r[29]; // 804EEB14
  c->r[3]=c->r[27]+0x00000004u; // 804EEB18
  c->lr=0x804EEB20u; f_80507F08(c); // 804EEB1C
L_804EEB20:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 804EEB20
  cmps(c,0,(int32_t)c->r[0],0); // 804EEB24
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEAB8; } // 804EEB28
L_804EEB2C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 804EEB2C
  c->r[4]=0u+0x00000003u; // 804EEB30
  c->lr=0x804EEB38u; f_803C49B8(c); // 804EEB34
  c->r[3]=R32(c->r[27]+0x00000000u); // 804EEB38
  c->lr=0x804EEB40u; f_803C4868(c); // 804EEB3C
  c->r[0]=0u+0x00000000u; // 804EEB40
  W32(c->r[27]+0x00000000u,c->r[0]); // 804EEB44
L_804EEB48:;
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 804EEB48
  if (crb(c,2)) { goto L_804EEB58; } // 804EEB4C
  c->r[4]=0u+0x00000000u; // 804EEB50
  c->lr=0x804EEB58u; f_80507DCC(c); // 804EEB54
L_804EEB58:;
  cmps(c,0,(int32_t)c->r[28],0); // 804EEB58
  if (!crb(c,1)) { goto L_804EEB68; } // 804EEB5C
  c->r[3]=c->r[27]|c->r[27]; // 804EEB60
  c->lr=0x804EEB68u; f_803A9400(c); // 804EEB64
L_804EEB68:;
  c->r[11]=c->r[1]+0x00000020u; // 804EEB68
  c->r[3]=c->r[27]|c->r[27]; // 804EEB6C
  c->lr=0x804EEB74u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EEB70
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EEB74
  c->lr=c->r[0]; // 804EEB78
  c->r[1]=c->r[1]+0x00000020u; // 804EEB7C
  return; // 804EEB80
}

// fn_804EEB84
void f_804EEB84(Ctx* __restrict c) {
  trace_call(0x804EEB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EEB84
  c->r[0]=c->lr; // 804EEB88
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EEB8C
  c->r[11]=c->r[1]+0x00000030u; // 804EEB90
  c->lr=0x804EEB98u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804EEB94
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EEB98
  c->r[26]=c->r[3]|c->r[3]; // 804EEB9C
  c->r[27]=c->r[4]|c->r[4]; // 804EEBA0
  c->r[28]=c->r[5]|c->r[5]; // 804EEBA4
  cmps(c,0,(int32_t)c->r[0],0); // 804EEBA8
  if (crb(c,2)) { goto L_804EEC58; } // 804EEBAC
  if (crb(c,2)) { goto L_804EEC58; } // 804EEBB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804EEBB4
  cmps(c,0,(int32_t)c->r[0],0); // 804EEBB8
  if (crb(c,2)) { goto L_804EEC3C; } // 804EEBBC
  c->r[31]=c->r[3]+0x00000008u; // 804EEBC0
  goto L_804EEC30; // 804EEBC4
L_804EEBC8:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 804EEBC8
  cmps(c,0,(int32_t)c->r[29],0); // 804EEBCC
  if (crb(c,2)) { goto L_804EEC24; } // 804EEBD0
  c->r[30]=c->r[29]+0x0000000Cu; // 804EEBD4
  goto L_804EEC08; // 804EEBD8
L_804EEBDC:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 804EEBDC
  cmps(c,0,(int32_t)c->r[30],0); // 804EEBE0
  if (crb(c,2)) { goto L_804EEC08; } // 804EEBE4
  c->r[12]=R32(c->r[30]+0x00000010u); // 804EEBE8
  cmps(c,0,(int32_t)c->r[12],0); // 804EEBEC
  if (crb(c,2)) { goto L_804EEC08; } // 804EEBF0
  c->r[3]=R32(c->r[30]+0x00000008u); // 804EEBF4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804EEBF8
  c->r[5]=R32(c->r[30]+0x00000014u); // 804EEBFC
  c->ctr=c->r[12]; // 804EEC00
  if (true) { c->lr=0x804EEC08u; dispatch(c,c->ctr); } // 804EEC04
L_804EEC08:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EEC08
  cmpu(c,0,c->r[30],c->r[0]); // 804EEC0C
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEBDC; } // 804EEC10
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 804EEC14
  if (crb(c,2)) { goto L_804EEC24; } // 804EEC18
  c->r[4]=0u+0x00000000u; // 804EEC1C
  c->lr=0x804EEC24u; f_80507DCC(c); // 804EEC20
L_804EEC24:;
  c->r[4]=c->r[29]|c->r[29]; // 804EEC24
  c->r[3]=c->r[26]+0x00000004u; // 804EEC28
  c->lr=0x804EEC30u; f_80507F08(c); // 804EEC2C
L_804EEC30:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 804EEC30
  cmps(c,0,(int32_t)c->r[0],0); // 804EEC34
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEBC8; } // 804EEC38
L_804EEC3C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 804EEC3C
  c->r[4]=0u+0x00000003u; // 804EEC40
  c->lr=0x804EEC48u; f_803C49B8(c); // 804EEC44
  c->r[3]=R32(c->r[26]+0x00000000u); // 804EEC48
  c->lr=0x804EEC50u; f_803C4868(c); // 804EEC4C
  c->r[0]=0u+0x00000000u; // 804EEC50
  W32(c->r[26]+0x00000000u,c->r[0]); // 804EEC54
L_804EEC58:;
  c->r[0]=c->r[27]+0x00000003u; // 804EEC58
  c->r[4]=c->r[27]+c->r[28]; // 804EEC5C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804EEC60
  cmpu(c,0,c->r[3],c->r[4]); // 804EEC64
  if (!crb(c,1)) { goto L_804EEC74; } // 804EEC68
  c->r[3]=0u+0x00000000u; // 804EEC6C
  goto L_804EED08; // 804EEC70
L_804EEC74:;
  c->r[4]=c->r[4]-c->r[3]; // 804EEC74
  c->r[5]=0u+0x00000000u; // 804EEC78
  c->lr=0x804EEC80u; f_803C47E4(c); // 804EEC7C
  cmps(c,0,(int32_t)c->r[3],0); // 804EEC80
  W32(c->r[26]+0x00000000u,c->r[3]); // 804EEC84
  if (!crb(c,2)) { goto L_804EEC94; } // 804EEC88
  c->r[3]=0u+0x00000000u; // 804EEC8C
  goto L_804EED08; // 804EEC90
L_804EEC94:;
  c->r[4]=0u+0x00000014u; // 804EEC94
  c->r[5]=0u+0x00000004u; // 804EEC98
  c->lr=0x804EECA0u; f_803C4898(c); // 804EEC9C
  cmps(c,0,(int32_t)c->r[3],0); // 804EECA0
  if (!crb(c,2)) { goto L_804EECB0; } // 804EECA4
  c->r[0]=0u+0x00000000u; // 804EECA8
  goto L_804EECF4; // 804EECAC
L_804EECB0:;
  c->r[5]=c->r[3]|c->r[3]; // 804EECB0
  if (crb(c,2)) { goto L_804EECDC; } // 804EECB4
  c->r[0]=0u+0x00000000u; // 804EECB8
  c->r[4]=c->r[3]+0x0000000Cu; // 804EECBC
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EECC0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EECC4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EECC8
  W32(c->r[3]+0x00000010u,c->r[0]); // 804EECCC
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EECD0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804EECD4
  W32(c->r[3]+0x00000010u,c->r[4]); // 804EECD8
L_804EECDC:;
  c->r[0]=c->r[26]+0x00000008u; // 804EECDC
  c->r[3]=c->r[26]+0x00000004u; // 804EECE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EECE4
  c->r[4]=c->r[1]+0x00000008u; // 804EECE8
  c->lr=0x804EECF0u; f_80507EDC(c); // 804EECEC
  c->r[0]=0u+0x00000001u; // 804EECF0
L_804EECF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 804EECF4
  if (!crb(c,2)) { goto L_804EED04; } // 804EECF8
  c->r[3]=0u+0x00000000u; // 804EECFC
  goto L_804EED08; // 804EED00
L_804EED04:;
  c->r[3]=0u+0x00000001u; // 804EED04
L_804EED08:;
  c->r[11]=c->r[1]+0x00000030u; // 804EED08
  c->lr=0x804EED10u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EED0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EED10
  c->lr=c->r[0]; // 804EED14
  c->r[1]=c->r[1]+0x00000030u; // 804EED18
  return; // 804EED1C
}

// fn_804EED20
void f_804EED20(Ctx* __restrict c) {
  trace_call(0x804EED20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EED20
  c->r[0]=c->lr; // 804EED24
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EED28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EED2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EED30
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EED34
  W32(c->r[1]+0x00000010u,c->r[28]); // 804EED38
  c->r[28]=c->r[3]|c->r[3]; // 804EED3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EED40
  cmps(c,0,(int32_t)c->r[0],0); // 804EED44
  if (crb(c,2)) { goto L_804EEDF0; } // 804EED48
  c->r[0]=R32(c->r[3]+0x00000004u); // 804EED4C
  cmps(c,0,(int32_t)c->r[0],0); // 804EED50
  if (crb(c,2)) { goto L_804EEDD4; } // 804EED54
  c->r[31]=c->r[3]+0x00000008u; // 804EED58
  goto L_804EEDC8; // 804EED5C
L_804EED60:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 804EED60
  cmps(c,0,(int32_t)c->r[29],0); // 804EED64
  if (crb(c,2)) { goto L_804EEDBC; } // 804EED68
  c->r[30]=c->r[29]+0x0000000Cu; // 804EED6C
  goto L_804EEDA0; // 804EED70
L_804EED74:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 804EED74
  cmps(c,0,(int32_t)c->r[30],0); // 804EED78
  if (crb(c,2)) { goto L_804EEDA0; } // 804EED7C
  c->r[12]=R32(c->r[30]+0x00000010u); // 804EED80
  cmps(c,0,(int32_t)c->r[12],0); // 804EED84
  if (crb(c,2)) { goto L_804EEDA0; } // 804EED88
  c->r[3]=R32(c->r[30]+0x00000008u); // 804EED8C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804EED90
  c->r[5]=R32(c->r[30]+0x00000014u); // 804EED94
  c->ctr=c->r[12]; // 804EED98
  if (true) { c->lr=0x804EEDA0u; dispatch(c,c->ctr); } // 804EED9C
L_804EEDA0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EEDA0
  cmpu(c,0,c->r[30],c->r[0]); // 804EEDA4
  if (!crb(c,2)) { IRQCHK(c); goto L_804EED74; } // 804EEDA8
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 804EEDAC
  if (crb(c,2)) { goto L_804EEDBC; } // 804EEDB0
  c->r[4]=0u+0x00000000u; // 804EEDB4
  c->lr=0x804EEDBCu; f_80507DCC(c); // 804EEDB8
L_804EEDBC:;
  c->r[4]=c->r[29]|c->r[29]; // 804EEDBC
  c->r[3]=c->r[28]+0x00000004u; // 804EEDC0
  c->lr=0x804EEDC8u; f_80507F08(c); // 804EEDC4
L_804EEDC8:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 804EEDC8
  cmps(c,0,(int32_t)c->r[0],0); // 804EEDCC
  if (!crb(c,2)) { IRQCHK(c); goto L_804EED60; } // 804EEDD0
L_804EEDD4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804EEDD4
  c->r[4]=0u+0x00000003u; // 804EEDD8
  c->lr=0x804EEDE0u; f_803C49B8(c); // 804EEDDC
  c->r[3]=R32(c->r[28]+0x00000000u); // 804EEDE0
  c->lr=0x804EEDE8u; f_803C4868(c); // 804EEDE4
  c->r[0]=0u+0x00000000u; // 804EEDE8
  W32(c->r[28]+0x00000000u,c->r[0]); // 804EEDEC
L_804EEDF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EEDF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EEDF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EEDF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EEDFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 804EEE00
  c->lr=c->r[0]; // 804EEE04
  c->r[1]=c->r[1]+0x00000020u; // 804EEE08
  return; // 804EEE0C
}

// fn_804EEE10
void f_804EEE10(Ctx* __restrict c) {
  trace_call(0x804EEE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EEE10
  c->r[0]=c->lr; // 804EEE14
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EEE18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EEE1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EEE20
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EEE24
  W32(c->r[1]+0x00000010u,c->r[28]); // 804EEE28
  c->r[28]=c->r[3]|c->r[3]; // 804EEE2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 804EEE30
  cmps(c,0,(int32_t)c->r[0],0); // 804EEE34
  if (crb(c,2)) { goto L_804EEEB8; } // 804EEE38
  c->r[31]=c->r[3]+0x00000008u; // 804EEE3C
  goto L_804EEEAC; // 804EEE40
L_804EEE44:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 804EEE44
  cmps(c,0,(int32_t)c->r[29],0); // 804EEE48
  if (crb(c,2)) { goto L_804EEEA0; } // 804EEE4C
  c->r[30]=c->r[29]+0x0000000Cu; // 804EEE50
  goto L_804EEE84; // 804EEE54
L_804EEE58:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 804EEE58
  cmps(c,0,(int32_t)c->r[30],0); // 804EEE5C
  if (crb(c,2)) { goto L_804EEE84; } // 804EEE60
  c->r[12]=R32(c->r[30]+0x00000010u); // 804EEE64
  cmps(c,0,(int32_t)c->r[12],0); // 804EEE68
  if (crb(c,2)) { goto L_804EEE84; } // 804EEE6C
  c->r[3]=R32(c->r[30]+0x00000008u); // 804EEE70
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804EEE74
  c->r[5]=R32(c->r[30]+0x00000014u); // 804EEE78
  c->ctr=c->r[12]; // 804EEE7C
  if (true) { c->lr=0x804EEE84u; dispatch(c,c->ctr); } // 804EEE80
L_804EEE84:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804EEE84
  cmpu(c,0,c->r[30],c->r[0]); // 804EEE88
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEE58; } // 804EEE8C
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 804EEE90
  if (crb(c,2)) { goto L_804EEEA0; } // 804EEE94
  c->r[4]=0u+0x00000000u; // 804EEE98
  c->lr=0x804EEEA0u; f_80507DCC(c); // 804EEE9C
L_804EEEA0:;
  c->r[4]=c->r[29]|c->r[29]; // 804EEEA0
  c->r[3]=c->r[28]+0x00000004u; // 804EEEA4
  c->lr=0x804EEEACu; f_80507F08(c); // 804EEEA8
L_804EEEAC:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 804EEEAC
  cmps(c,0,(int32_t)c->r[0],0); // 804EEEB0
  if (!crb(c,2)) { IRQCHK(c); goto L_804EEE44; } // 804EEEB4
L_804EEEB8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804EEEB8
  c->r[4]=0u+0x00000003u; // 804EEEBC
  c->lr=0x804EEEC4u; f_803C49B8(c); // 804EEEC0
  c->r[3]=R32(c->r[28]+0x00000000u); // 804EEEC4
  c->r[4]=0u+0x00000014u; // 804EEEC8
  c->r[5]=0u+0x00000004u; // 804EEECC
  c->lr=0x804EEED4u; f_803C4898(c); // 804EEED0
  cmps(c,0,(int32_t)c->r[3],0); // 804EEED4
  if (crb(c,2)) { goto L_804EEF1C; } // 804EEED8
  c->r[5]=c->r[3]|c->r[3]; // 804EEEDC
  if (crb(c,2)) { goto L_804EEF08; } // 804EEEE0
  c->r[0]=0u+0x00000000u; // 804EEEE4
  c->r[4]=c->r[3]+0x0000000Cu; // 804EEEE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EEEEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EEEF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EEEF4
  W32(c->r[3]+0x00000010u,c->r[0]); // 804EEEF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EEEFC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804EEF00
  W32(c->r[3]+0x00000010u,c->r[4]); // 804EEF04
L_804EEF08:;
  c->r[0]=c->r[28]+0x00000008u; // 804EEF08
  c->r[3]=c->r[28]+0x00000004u; // 804EEF0C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EEF10
  c->r[4]=c->r[1]+0x00000008u; // 804EEF14
  c->lr=0x804EEF1Cu; f_80507EDC(c); // 804EEF18
L_804EEF1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EEF1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EEF20
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EEF24
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EEF28
  c->r[28]=R32(c->r[1]+0x00000010u); // 804EEF2C
  c->lr=c->r[0]; // 804EEF30
  c->r[1]=c->r[1]+0x00000020u; // 804EEF34
  return; // 804EEF38
}

// fn_804EEF3C
void f_804EEF3C(Ctx* __restrict c) {
  trace_call(0x804EEF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EEF3C
  c->r[0]=c->lr; // 804EEF40
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EEF44
  c->r[11]=c->r[1]+0x00000030u; // 804EEF48
  c->lr=0x804EEF50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804EEF4C
  c->r[0]=c->r[4]+0x0000001Fu; // 804EEF50
  c->r[27]=c->r[3]|c->r[3]; // 804EEF54
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EEF58
  c->r[3]=R32(c->r[3]+0x00000000u); // 804EEF5C
  c->r[28]=c->r[4]|c->r[4]; // 804EEF60
  c->r[29]=c->r[5]|c->r[5]; // 804EEF64
  c->r[30]=c->r[6]|c->r[6]; // 804EEF68
  c->r[4]=c->r[7]+0x00000020u; // 804EEF6C
  c->r[5]=0u+0x00000020u; // 804EEF70
  c->lr=0x804EEF78u; f_803C4898(c); // 804EEF74
  cmps(c,0,(int32_t)c->r[3],0); // 804EEF78
  if (!crb(c,2)) { goto L_804EEF88; } // 804EEF7C
  c->r[3]=0u+0x00000000u; // 804EEF80
  goto L_804EEFCC; // 804EEF84
L_804EEF88:;
  c->r[5]=c->r[3]|c->r[3]; // 804EEF88
  c->r[31]=c->r[3]+0x00000020u; // 804EEF8C
  if (crb(c,2)) { goto L_804EEFB0; } // 804EEF90
  c->r[0]=0u+0x00000000u; // 804EEF94
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EEF98
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EEF9C
  W32(c->r[3]+0x00000008u,c->r[31]); // 804EEFA0
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 804EEFA4
  W32(c->r[3]+0x00000010u,c->r[29]); // 804EEFA8
  W32(c->r[3]+0x00000014u,c->r[30]); // 804EEFAC
L_804EEFB0:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 804EEFB0
  c->r[4]=c->r[1]+0x00000008u; // 804EEFB4
  c->r[0]=c->r[3]+0x0000000Cu; // 804EEFB8
  c->r[3]=c->r[3]+0x00000008u; // 804EEFBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EEFC0
  c->lr=0x804EEFC8u; f_80507EDC(c); // 804EEFC4
  c->r[3]=c->r[31]|c->r[31]; // 804EEFC8
L_804EEFCC:;
  c->r[11]=c->r[1]+0x00000030u; // 804EEFCC
  c->lr=0x804EEFD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EEFD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EEFD4
  c->lr=c->r[0]; // 804EEFD8
  c->r[1]=c->r[1]+0x00000030u; // 804EEFDC
  return; // 804EEFE0
}

// fn_804EEFE4
void f_804EEFE4(Ctx* __restrict c) {
  trace_call(0x804EEFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EEFE4
  c->r[0]=c->lr; // 804EEFE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EEFEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EEFF0
  c->r[31]=c->r[3]|c->r[3]; // 804EEFF4
  c->r[3]=R32(c->r[3]+0x00000000u); // 804EEFF8
  c->r[4]=R32(c->r[31]+0x00000004u); // 804EEFFC
  c->lr=0x804EF004u; f_803C4AD0(c); // 804EF000
  cmps(c,0,(int32_t)c->r[3],0); // 804EF004
  if (!crb(c,2)) { goto L_804EF014; } // 804EF008
  c->r[3]=0u+0xFFFFFFFFu; // 804EF00C
  goto L_804EF09C; // 804EF010
L_804EF014:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 804EF014
  c->r[4]=0u+0x00000014u; // 804EF018
  c->r[5]=0u+0x00000004u; // 804EF01C
  c->lr=0x804EF024u; f_803C4898(c); // 804EF020
  cmps(c,0,(int32_t)c->r[3],0); // 804EF024
  if (!crb(c,2)) { goto L_804EF034; } // 804EF028
  c->r[0]=0u+0x00000000u; // 804EF02C
  goto L_804EF078; // 804EF030
L_804EF034:;
  c->r[5]=c->r[3]|c->r[3]; // 804EF034
  if (crb(c,2)) { goto L_804EF060; } // 804EF038
  c->r[0]=0u+0x00000000u; // 804EF03C
  c->r[4]=c->r[3]+0x0000000Cu; // 804EF040
  W32(c->r[3]+0x00000000u,c->r[0]); // 804EF044
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EF048
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EF04C
  W32(c->r[3]+0x00000010u,c->r[0]); // 804EF050
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EF054
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804EF058
  W32(c->r[3]+0x00000010u,c->r[4]); // 804EF05C
L_804EF060:;
  c->r[0]=c->r[31]+0x00000008u; // 804EF060
  c->r[3]=c->r[31]+0x00000004u; // 804EF064
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EF068
  c->r[4]=c->r[1]+0x00000008u; // 804EF06C
  c->lr=0x804EF074u; f_80507EDC(c); // 804EF070
  c->r[0]=0u+0x00000001u; // 804EF074
L_804EF078:;
  cmps(c,0,(int32_t)c->r[0],0); // 804EF078
  if (!crb(c,2)) { goto L_804EF094; } // 804EF07C
  c->r[3]=R32(c->r[31]+0x00000000u); // 804EF080
  c->r[4]=0u+0x00000000u; // 804EF084
  c->lr=0x804EF08Cu; f_803C4BA4(c); // 804EF088
  c->r[3]=0u+0xFFFFFFFFu; // 804EF08C
  goto L_804EF09C; // 804EF090
L_804EF094:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 804EF094
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 804EF098
L_804EF09C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EF09C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EF0A0
  c->lr=c->r[0]; // 804EF0A4
  c->r[1]=c->r[1]+0x00000020u; // 804EF0A8
  return; // 804EF0AC
}

// fn_804EF0B0
void f_804EF0B0(Ctx* __restrict c) {
  trace_call(0x804EF0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF0B0
  c->r[0]=c->lr; // 804EF0B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 804EF0B8
  c->r[4]=0u+0x00000020u; // 804EF0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EF0C0
  c->lr=0x804EF0C8u; f_803C4A58(c); // 804EF0C4
  c->r[4]=0u+0x00000018u; // 804EF0C8
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 804EF0CC
  c->r[3]=addc(c,~c->r[4],c->r[3],1); // 804EF0D0
  c->r[3]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 804EF0D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF0D8
  c->r[3]=c->r[0]&~c->r[3]; // 804EF0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EF0E0
  c->lr=c->r[0]; // 804EF0E4
  c->r[1]=c->r[1]+0x00000010u; // 804EF0E8
  return; // 804EF0EC
}

// fn_804EF0F0
void f_804EF0F0(Ctx* __restrict c) {
  trace_call(0x804EF0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF0F0
  c->r[0]=c->lr; // 804EF0F4
  c->r[5]=0u+0x80720000u; // 804EF0F8
  {uint32_t ea=c->r[2]+0x000019F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF0FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EF100
  c->r[0]=0u+0x00000000u; // 804EF104
  {uint32_t ea=c->r[2]+0x000019E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 804EF108
  c->r[5]=c->r[5]+0xFFFFB5A8u; // 804EF10C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804EF110
  c->r[31]=c->r[3]|c->r[3]; // 804EF114
  {uint32_t ea=c->r[2]+0x000019ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF118
  c->r[4]=c->r[1]+0x00000008u; // 804EF11C
  {uint32_t ea=c->r[2]+0x000019F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF120
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EF124
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EF128
  W32(c->r[3]+0x00000000u,c->r[5]); // 804EF12C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804EF130
  W32(c->r[3]+0x00000014u,c->r[0]); // 804EF134
  W32(c->r[3]+0x00000018u,c->r[0]); // 804EF138
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 804EF13C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 804EF140
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 804EF144
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 804EF148
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 804EF14C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 804EF150
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804EF154
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804EF158
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804EF15C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804EF160
  c->lr=0x804EF168u; f_804EF388(c); // 804EF164
  c->r[3]=c->r[31]|c->r[31]; // 804EF168
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804EF16C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EF170
  c->lr=c->r[0]; // 804EF174
  c->r[1]=c->r[1]+0x00000030u; // 804EF178
  return; // 804EF17C
}

// fn_804EF180
void f_804EF180(Ctx* __restrict c) {
  trace_call(0x804EF180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF180
  c->r[0]=c->lr; // 804EF184
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EF188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EF18C
  c->r[31]=c->r[3]|c->r[3]; // 804EF190
  c->r[3]=c->r[3]+0x00000030u; // 804EF194
  c->lr=0x804EF19Cu; f_8039BC0C(c); // 804EF198
  c->r[0]=c->r[3]+0x00000087u; // 804EF19C
  c->r[3]=c->r[31]+0x000000D0u; // 804EF1A0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF1A4
  c->lr=0x804EF1ACu; f_8039C70C(c); // 804EF1A8
  c->r[0]=c->r[3]+0x00000087u; // 804EF1AC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF1B0
  cmpu(c,0,c->r[3],c->r[31]); // 804EF1B4
  if (!crb(c,0)) { goto L_804EF1C0; } // 804EF1B8
  c->r[3]=c->r[31]|c->r[31]; // 804EF1BC
L_804EF1C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EF1C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EF1C4
  c->lr=c->r[0]; // 804EF1C8
  c->r[1]=c->r[1]+0x00000010u; // 804EF1CC
  return; // 804EF1D0
}

// fn_804EF1D4
void f_804EF1D4(Ctx* __restrict c) {
  trace_call(0x804EF1D4u);
  c->r[3]=c->r[3]+0x00000014u; // 804EF1D4
  f_804E9D5C(c); return; // 804EF1D8
}

// fn_804EF1DC
void f_804EF1DC(Ctx* __restrict c) {
  trace_call(0x804EF1DCu);
  c->r[3]=c->r[3]+0x00000014u; // 804EF1DC
  f_804E9DC4(c); return; // 804EF1E0
}

// fn_804EF1E4
void f_804EF1E4(Ctx* __restrict c) {
  trace_call(0x804EF1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF1E4
  c->r[0]=c->lr; // 804EF1E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF1EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EF1F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EF1F4
  c->r[30]=c->r[3]|c->r[3]; // 804EF1F8
  c->r[3]=c->r[3]+0x00000030u; // 804EF1FC
  c->lr=0x804EF204u; f_8039BC0C(c); // 804EF200
  c->r[0]=c->r[3]+0x00000087u; // 804EF204
  c->r[3]=c->r[30]+0x000000D0u; // 804EF208
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF20C
  c->lr=0x804EF214u; f_8039C70C(c); // 804EF210
  c->r[0]=c->r[3]+0x00000087u; // 804EF214
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF218
  cmpu(c,0,c->r[3],c->r[31]); // 804EF21C
  if (!crb(c,0)) { goto L_804EF228; } // 804EF220
  c->r[3]=c->r[31]|c->r[31]; // 804EF224
L_804EF228:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804EF228
  cmps(c,0,(int32_t)c->r[4],0); // 804EF22C
  if (!crb(c,2)) { goto L_804EF23C; } // 804EF230
  c->r[0]=0u+0x00000000u; // 804EF234
  goto L_804EF244; // 804EF238
L_804EF23C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804EF23C
  c->r[0]=c->r[0]-c->r[4]; // 804EF240
L_804EF244:;
  cmpu(c,0,c->r[3],c->r[0]); // 804EF244
  if (!crb(c,1)) { goto L_804EF254; } // 804EF248
  c->r[3]=0u+0x00000000u; // 804EF24C
  goto L_804EF2F4; // 804EF250
L_804EF254:;
  c->lr=0x804EF258u; f_804E5278(c); // 804EF254
  c->lr=0x804EF25Cu; f_804E5A84(c); // 804EF258
  cmps(c,0,(int32_t)c->r[3],2); // 804EF25C
  if (!crb(c,2)) { goto L_804EF2A4; } // 804EF260
  c->r[0]=0u+0x00000001u; // 804EF264
  c->r[3]=c->r[30]+0x00000014u; // 804EF268
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EF26C
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF270
  c->r[5]=c->r[1]+0x00000008u; // 804EF274
  c->lr=0x804EF27Cu; f_804E9E08(c); // 804EF278
  c->r[3]=c->r[30]+0x000000D0u; // 804EF27C
  c->lr=0x804EF284u; f_8039C718(c); // 804EF280
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF284
  c->r[31]=c->r[3]|c->r[3]; // 804EF288
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF28C
  c->r[3]=c->r[30]+0x00000014u; // 804EF290
  c->lr=0x804EF298u; f_804E9E5C(c); // 804EF294
  c->r[3]=c->r[30]+0x000000D0u; // 804EF298
  c->lr=0x804EF2A0u; f_8039C70C(c); // 804EF29C
  goto L_804EF2E0; // 804EF2A0
L_804EF2A4:;
  c->r[0]=0u+0x00000000u; // 804EF2A4
  c->r[3]=c->r[30]+0x00000014u; // 804EF2A8
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EF2AC
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF2B0
  c->r[5]=c->r[1]+0x00000008u; // 804EF2B4
  c->lr=0x804EF2BCu; f_804E9E08(c); // 804EF2B8
  c->r[3]=c->r[30]+0x00000030u; // 804EF2BC
  c->lr=0x804EF2C4u; f_8039BC18(c); // 804EF2C0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF2C4
  c->r[31]=c->r[3]|c->r[3]; // 804EF2C8
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF2CC
  c->r[3]=c->r[30]+0x00000014u; // 804EF2D0
  c->lr=0x804EF2D8u; f_804E9E5C(c); // 804EF2D4
  c->r[3]=c->r[30]+0x00000030u; // 804EF2D8
  c->lr=0x804EF2E0u; f_8039BC0C(c); // 804EF2DC
L_804EF2E0:;
  c->r[0]=0u-c->r[31]; // 804EF2E0
  c->r[3]=0u+0x00000001u; // 804EF2E4
  c->r[0]=c->r[0]|c->r[31]; // 804EF2E8
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 804EF2EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EF2F0
L_804EF2F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EF2F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EF2F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EF2FC
  c->lr=c->r[0]; // 804EF300
  c->r[1]=c->r[1]+0x00000020u; // 804EF304
  return; // 804EF308
}

// fn_804EF30C
void f_804EF30C(Ctx* __restrict c) {
  trace_call(0x804EF30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF30C
  c->r[0]=c->lr; // 804EF310
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF314
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EF318
  c->r[31]=c->r[3]|c->r[3]; // 804EF31C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EF320
  cmps(c,0,(int32_t)c->r[0],0); // 804EF324
  if (crb(c,2)) { goto L_804EF374; } // 804EF328
  c->r[0]=0u+0x00000000u; // 804EF32C
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF330
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804EF334
  c->r[3]=c->r[3]+0x00000014u; // 804EF338
  c->r[5]=c->r[1]+0x00000008u; // 804EF33C
  c->lr=0x804EF344u; f_804E9E08(c); // 804EF340
  c->r[0]=R32(c->r[31]+0x00000010u); // 804EF344
  cmps(c,0,(int32_t)c->r[0],1); // 804EF348
  if (!crb(c,2)) { goto L_804EF35C; } // 804EF34C
  c->r[3]=c->r[31]+0x000000D0u; // 804EF350
  c->lr=0x804EF358u; f_8039CB3C(c); // 804EF354
  goto L_804EF364; // 804EF358
L_804EF35C:;
  c->r[3]=c->r[31]+0x00000030u; // 804EF35C
  c->lr=0x804EF364u; f_8039C020(c); // 804EF360
L_804EF364:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF364
  c->r[3]=c->r[31]+0x00000014u; // 804EF368
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF36C
  c->lr=0x804EF374u; f_804E9E5C(c); // 804EF370
L_804EF374:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EF374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EF378
  c->lr=c->r[0]; // 804EF37C
  c->r[1]=c->r[1]+0x00000020u; // 804EF380
  return; // 804EF384
}

// fn_804EF388
void f_804EF388(Ctx* __restrict c) {
  trace_call(0x804EF388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF388
  c->r[0]=c->lr; // 804EF38C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EF390
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EF394
  {uint32_t ea=c->r[2]+0x000019F8u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EF398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EF39C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804EF3A0
  fcmp(c,0,c->f[4],c->f[5]); // 804EF3A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EF3A8
  c->r[30]=c->r[3]|c->r[3]; // 804EF3AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF3B0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF3B4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF3B8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 804EF3BC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 804EF3C0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 804EF3C4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 804EF3C8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EF3CC
  if (!crb(c,1)) { goto L_804EF3D8; } // 804EF3D0
  goto L_804EF3EC; // 804EF3D4
L_804EF3D8:;
  {uint32_t ea=c->r[2]+0x000019FCu; c->f[5]=c->ps1[5]=RF32(ea);} // 804EF3D8
  fcmp(c,0,c->f[4],c->f[5]); // 804EF3DC
  if (!crb(c,0)) { goto L_804EF3E8; } // 804EF3E0
  goto L_804EF3EC; // 804EF3E4
L_804EF3E8:;
  c->f[5]=c->f[4]; // 804EF3E8
L_804EF3EC:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF3EC
  {uint32_t ea=c->r[2]+0x000019F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF3F0
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[5]);} // 804EF3F4
  fcmp(c,0,c->f[0],c->f[1]); // 804EF3F8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[5]);} // 804EF3FC
  if (!crb(c,1)) { goto L_804EF408; } // 804EF400
  goto L_804EF41C; // 804EF404
L_804EF408:;
  {uint32_t ea=c->r[2]+0x000019F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF408
  fcmp(c,0,c->f[0],c->f[1]); // 804EF40C
  if (!crb(c,0)) { goto L_804EF418; } // 804EF410
  goto L_804EF41C; // 804EF414
L_804EF418:;
  c->f[1]=c->f[0]; // 804EF418
L_804EF41C:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF41C
  {uint32_t ea=c->r[2]+0x00001A00u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF420
  {uint32_t ea=c->r[3]+0x00000168u; WF32(ea,c->f[1]);} // 804EF424
  fcmp(c,0,c->f[0],c->f[2]); // 804EF428
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 804EF42C
  if (!crb(c,1)) { goto L_804EF438; } // 804EF430
  goto L_804EF44C; // 804EF434
L_804EF438:;
  {uint32_t ea=c->r[2]+0x000019FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF438
  fcmp(c,0,c->f[0],c->f[2]); // 804EF43C
  if (!crb(c,0)) { goto L_804EF448; } // 804EF440
  goto L_804EF44C; // 804EF444
L_804EF448:;
  c->f[2]=c->f[0]; // 804EF448
L_804EF44C:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF44C
  {uint32_t ea=c->r[2]+0x00001A04u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF450
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[2]);} // 804EF454
  fcmp(c,0,c->f[0],c->f[1]); // 804EF458
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 804EF45C
  if (!crb(c,1)) { goto L_804EF468; } // 804EF460
  goto L_804EF47C; // 804EF464
L_804EF468:;
  {uint32_t ea=c->r[2]+0x000019F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF468
  fcmp(c,0,c->f[0],c->f[1]); // 804EF46C
  if (!crb(c,0)) { goto L_804EF478; } // 804EF470
  goto L_804EF47C; // 804EF474
L_804EF478:;
  c->f[1]=c->f[0]; // 804EF478
L_804EF47C:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF47C
  {uint32_t ea=c->r[2]+0x000019F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF480
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[1]);} // 804EF484
  fcmp(c,0,c->f[0],c->f[2]); // 804EF488
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 804EF48C
  if (!crb(c,1)) { goto L_804EF498; } // 804EF490
  goto L_804EF4AC; // 804EF494
L_804EF498:;
  {uint32_t ea=c->r[2]+0x000019F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF498
  fcmp(c,0,c->f[0],c->f[2]); // 804EF49C
  if (!crb(c,0)) { goto L_804EF4A8; } // 804EF4A0
  goto L_804EF4AC; // 804EF4A4
L_804EF4A8:;
  c->f[2]=c->f[0]; // 804EF4A8
L_804EF4AC:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EF4AC
  c->r[4]=0u+0x00000000u; // 804EF4B0
  {uint32_t ea=c->r[2]+0x000019F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF4B4
  cmps(c,0,(int32_t)c->r[0],0); // 804EF4B8
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[2]);} // 804EF4BC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 804EF4C0
  W32(c->r[3]+0x000000C0u,c->r[4]); // 804EF4C4
  W32(c->r[3]+0x000000C4u,c->r[4]); // 804EF4C8
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 804EF4CC
  W32(c->r[3]+0x00000174u,c->r[4]); // 804EF4D0
  W32(c->r[3]+0x00000178u,c->r[4]); // 804EF4D4
  {uint32_t ea=c->r[3]+0x00000180u; WF32(ea,c->f[0]);} // 804EF4D8
  if (!crb(c,2)) { goto L_804EF4E8; } // 804EF4DC
  c->r[3]=0u+0x00000001u; // 804EF4E0
  goto L_804EF56C; // 804EF4E4
L_804EF4E8:;
  c->r[3]=c->r[3]+0x00000030u; // 804EF4E8
  c->lr=0x804EF4F0u; f_8039BC0C(c); // 804EF4EC
  c->r[0]=c->r[3]+0x00000087u; // 804EF4F0
  c->r[3]=c->r[30]+0x000000D0u; // 804EF4F4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF4F8
  c->lr=0x804EF500u; f_8039C70C(c); // 804EF4FC
  c->r[0]=c->r[3]+0x00000087u; // 804EF500
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF504
  cmpu(c,0,c->r[3],c->r[31]); // 804EF508
  if (!crb(c,0)) { goto L_804EF514; } // 804EF50C
  c->r[3]=c->r[31]|c->r[31]; // 804EF510
L_804EF514:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804EF514
  cmps(c,0,(int32_t)c->r[4],0); // 804EF518
  if (!crb(c,2)) { goto L_804EF528; } // 804EF51C
  c->r[0]=0u+0x00000000u; // 804EF520
  goto L_804EF530; // 804EF524
L_804EF528:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804EF528
  c->r[0]=c->r[0]-c->r[4]; // 804EF52C
L_804EF530:;
  cmpu(c,0,c->r[3],c->r[0]); // 804EF530
  if (!crb(c,1)) { goto L_804EF540; } // 804EF534
  c->r[3]=0u+0x00000000u; // 804EF538
  goto L_804EF56C; // 804EF53C
L_804EF540:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 804EF540
  cmps(c,0,(int32_t)c->r[0],1); // 804EF544
  if (!crb(c,2)) { goto L_804EF558; } // 804EF548
  c->r[3]=c->r[30]+0x000000D0u; // 804EF54C
  c->lr=0x804EF554u; f_8039C98C(c); // 804EF550
  goto L_804EF560; // 804EF554
L_804EF558:;
  c->r[3]=c->r[30]+0x00000030u; // 804EF558
  c->lr=0x804EF560u; f_8039BE70(c); // 804EF55C
L_804EF560:;
  c->r[0]=0u-c->r[3]; // 804EF560
  c->r[0]=c->r[0]|c->r[3]; // 804EF564
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EF568
L_804EF56C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EF56C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EF570
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EF574
  c->lr=c->r[0]; // 804EF578
  c->r[1]=c->r[1]+0x00000010u; // 804EF57C
  return; // 804EF580
}

// fn_804EF584
void f_804EF584(Ctx* __restrict c) {
  trace_call(0x804EF584u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF584
  c->r[0]=c->lr; // 804EF588
  c->r[4]=c->r[3]|c->r[3]; // 804EF58C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EF590
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EF594
  cmps(c,0,(int32_t)c->r[0],0); // 804EF598
  if (crb(c,2)) { goto L_804EF614; } // 804EF59C
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 804EF5A0
  c->r[3]=R32(c->r[3]+0x00000010u); // 804EF5A4
  c->r[0]=cntlz(c->r[0]); // 804EF5A8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804EF5AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804EF5B0
  if (!crb(c,2)) { goto L_804EF614; } // 804EF5B4
  cmps(c,0,(int32_t)c->r[3],1); // 804EF5B8
  if (!crb(c,2)) { goto L_804EF5F0; } // 804EF5BC
  c->r[0]=R32(c->r[5]+0x00000000u); // 804EF5C0
  c->r[3]=c->r[1]+0x00000018u; // 804EF5C4
  c->r[4]=c->r[4]+0x000000D0u; // 804EF5C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 804EF5CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 804EF5D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804EF5D4
  c->r[0]=R32(c->r[5]+0x00000008u); // 804EF5D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 804EF5DC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804EF5E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF5E4
  c->lr=0x804EF5ECu; f_8039CBCC(c); // 804EF5E8
  goto L_804EF614; // 804EF5EC
L_804EF5F0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804EF5F0
  c->r[3]=c->r[1]+0x00000008u; // 804EF5F4
  c->r[4]=c->r[4]+0x00000030u; // 804EF5F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EF5FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 804EF600
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EF604
  c->r[0]=R32(c->r[5]+0x00000008u); // 804EF608
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EF60C
  c->lr=0x804EF614u; f_8039C0B0(c); // 804EF610
L_804EF614:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EF614
  c->lr=c->r[0]; // 804EF618
  c->r[1]=c->r[1]+0x00000030u; // 804EF61C
  return; // 804EF620
}

// fn_804EF624
void f_804EF624(Ctx* __restrict c) {
  trace_call(0x804EF624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF624
  c->r[0]=c->lr; // 804EF628
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EF62C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EF630
  c->r[31]=c->r[3]|c->r[3]; // 804EF634
  c->lr=0x804EF63Cu; f_804E5278(c); // 804EF638
  c->lr=0x804EF640u; f_804E5A84(c); // 804EF63C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804EF640
  c->r[0]=R32(c->r[31]+0x00000010u); // 804EF644
  c->r[3]=cntlz(c->r[3]); // 804EF648
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 804EF64C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804EF650
  if (crb(c,2)) { goto L_804EF680; } // 804EF654
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EF658
  c->r[3]=c->r[31]|c->r[31]; // 804EF65C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EF660
  c->ctr=c->r[12]; // 804EF664
  if (true) { c->lr=0x804EF66Cu; dispatch(c,c->ctr); } // 804EF668
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EF66C
  c->r[3]=c->r[31]|c->r[31]; // 804EF670
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EF674
  c->ctr=c->r[12]; // 804EF678
  if (true) { c->lr=0x804EF680u; dispatch(c,c->ctr); } // 804EF67C
L_804EF680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EF680
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EF684
  c->lr=c->r[0]; // 804EF688
  c->r[1]=c->r[1]+0x00000010u; // 804EF68C
  return; // 804EF690
}

// fn_804EF694
void f_804EF694(Ctx* __restrict c) {
  trace_call(0x804EF694u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF694
  c->r[0]=c->lr; // 804EF698
  c->r[5]=0u+0x80720000u; // 804EF69C
  {uint32_t ea=c->r[2]+0x00001A08u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF6A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EF6A4
  c->r[0]=0u+0x00000000u; // 804EF6A8
  {uint32_t ea=c->r[2]+0x00001A10u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF6AC
  c->r[5]=c->r[5]+0xFFFFB5D0u; // 804EF6B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804EF6B4
  c->r[31]=c->r[3]|c->r[3]; // 804EF6B8
  {uint32_t ea=c->r[2]+0x00001A0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF6BC
  c->r[4]=c->r[1]+0x00000008u; // 804EF6C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EF6C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EF6C8
  W32(c->r[3]+0x00000000u,c->r[5]); // 804EF6CC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804EF6D0
  W32(c->r[3]+0x00000014u,c->r[0]); // 804EF6D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 804EF6D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 804EF6DC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 804EF6E0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 804EF6E4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 804EF6E8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EF6EC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804EF6F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804EF6F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804EF6F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804EF6FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804EF700
  c->lr=0x804EF708u; f_804EF928(c); // 804EF704
  c->r[3]=c->r[31]|c->r[31]; // 804EF708
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804EF70C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EF710
  c->lr=c->r[0]; // 804EF714
  c->r[1]=c->r[1]+0x00000030u; // 804EF718
  return; // 804EF71C
}

// fn_804EF720
void f_804EF720(Ctx* __restrict c) {
  trace_call(0x804EF720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF720
  c->r[0]=c->lr; // 804EF724
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EF728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EF72C
  c->r[31]=c->r[3]|c->r[3]; // 804EF730
  c->r[3]=c->r[3]+0x00000030u; // 804EF734
  c->lr=0x804EF73Cu; f_80398EAC(c); // 804EF738
  c->r[0]=c->r[3]+0x00000087u; // 804EF73C
  c->r[3]=c->r[31]+0x00000088u; // 804EF740
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF744
  c->lr=0x804EF74Cu; f_80399934(c); // 804EF748
  c->r[0]=c->r[3]+0x00000087u; // 804EF74C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF750
  cmpu(c,0,c->r[3],c->r[31]); // 804EF754
  if (!crb(c,0)) { goto L_804EF760; } // 804EF758
  c->r[3]=c->r[31]|c->r[31]; // 804EF75C
L_804EF760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EF760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EF764
  c->lr=c->r[0]; // 804EF768
  c->r[1]=c->r[1]+0x00000010u; // 804EF76C
  return; // 804EF770
}

// fn_804EF774
void f_804EF774(Ctx* __restrict c) {
  trace_call(0x804EF774u);
  c->r[3]=c->r[3]+0x00000014u; // 804EF774
  f_804E9D5C(c); return; // 804EF778
}

// fn_804EF77C
void f_804EF77C(Ctx* __restrict c) {
  trace_call(0x804EF77Cu);
  c->r[3]=c->r[3]+0x00000014u; // 804EF77C
  f_804E9DC4(c); return; // 804EF780
}

// fn_804EF784
void f_804EF784(Ctx* __restrict c) {
  trace_call(0x804EF784u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF784
  c->r[0]=c->lr; // 804EF788
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF78C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EF790
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EF794
  c->r[30]=c->r[3]|c->r[3]; // 804EF798
  c->r[3]=c->r[3]+0x00000030u; // 804EF79C
  c->lr=0x804EF7A4u; f_80398EAC(c); // 804EF7A0
  c->r[0]=c->r[3]+0x00000087u; // 804EF7A4
  c->r[3]=c->r[30]+0x00000088u; // 804EF7A8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF7AC
  c->lr=0x804EF7B4u; f_80399934(c); // 804EF7B0
  c->r[0]=c->r[3]+0x00000087u; // 804EF7B4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EF7B8
  cmpu(c,0,c->r[3],c->r[31]); // 804EF7BC
  if (!crb(c,0)) { goto L_804EF7C8; } // 804EF7C0
  c->r[3]=c->r[31]|c->r[31]; // 804EF7C4
L_804EF7C8:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804EF7C8
  cmps(c,0,(int32_t)c->r[4],0); // 804EF7CC
  if (!crb(c,2)) { goto L_804EF7DC; } // 804EF7D0
  c->r[0]=0u+0x00000000u; // 804EF7D4
  goto L_804EF7E4; // 804EF7D8
L_804EF7DC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804EF7DC
  c->r[0]=c->r[0]-c->r[4]; // 804EF7E0
L_804EF7E4:;
  cmpu(c,0,c->r[3],c->r[0]); // 804EF7E4
  if (!crb(c,1)) { goto L_804EF7F4; } // 804EF7E8
  c->r[3]=0u+0x00000000u; // 804EF7EC
  goto L_804EF894; // 804EF7F0
L_804EF7F4:;
  c->lr=0x804EF7F8u; f_804E5278(c); // 804EF7F4
  c->lr=0x804EF7FCu; f_804E5A84(c); // 804EF7F8
  cmps(c,0,(int32_t)c->r[3],2); // 804EF7FC
  if (!crb(c,2)) { goto L_804EF844; } // 804EF800
  c->r[0]=0u+0x00000001u; // 804EF804
  c->r[3]=c->r[30]+0x00000014u; // 804EF808
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EF80C
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF810
  c->r[5]=c->r[1]+0x00000008u; // 804EF814
  c->lr=0x804EF81Cu; f_804E9E08(c); // 804EF818
  c->r[3]=c->r[30]+0x00000088u; // 804EF81C
  c->lr=0x804EF824u; f_8039995C(c); // 804EF820
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF824
  c->r[31]=c->r[3]|c->r[3]; // 804EF828
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF82C
  c->r[3]=c->r[30]+0x00000014u; // 804EF830
  c->lr=0x804EF838u; f_804E9E5C(c); // 804EF834
  c->r[3]=c->r[30]+0x00000088u; // 804EF838
  c->lr=0x804EF840u; f_80399934(c); // 804EF83C
  goto L_804EF880; // 804EF840
L_804EF844:;
  c->r[0]=0u+0x00000000u; // 804EF844
  c->r[3]=c->r[30]+0x00000014u; // 804EF848
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EF84C
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF850
  c->r[5]=c->r[1]+0x00000008u; // 804EF854
  c->lr=0x804EF85Cu; f_804E9E08(c); // 804EF858
  c->r[3]=c->r[30]+0x00000030u; // 804EF85C
  c->lr=0x804EF864u; f_80398ED4(c); // 804EF860
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF864
  c->r[31]=c->r[3]|c->r[3]; // 804EF868
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF86C
  c->r[3]=c->r[30]+0x00000014u; // 804EF870
  c->lr=0x804EF878u; f_804E9E5C(c); // 804EF874
  c->r[3]=c->r[30]+0x00000030u; // 804EF878
  c->lr=0x804EF880u; f_80398EAC(c); // 804EF87C
L_804EF880:;
  c->r[0]=0u-c->r[31]; // 804EF880
  c->r[3]=0u+0x00000001u; // 804EF884
  c->r[0]=c->r[0]|c->r[31]; // 804EF888
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 804EF88C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EF890
L_804EF894:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EF894
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EF898
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EF89C
  c->lr=c->r[0]; // 804EF8A0
  c->r[1]=c->r[1]+0x00000020u; // 804EF8A4
  return; // 804EF8A8
}

// fn_804EF8AC
void f_804EF8AC(Ctx* __restrict c) {
  trace_call(0x804EF8ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF8AC
  c->r[0]=c->lr; // 804EF8B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF8B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EF8B8
  c->r[31]=c->r[3]|c->r[3]; // 804EF8BC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EF8C0
  cmps(c,0,(int32_t)c->r[0],0); // 804EF8C4
  if (crb(c,2)) { goto L_804EF914; } // 804EF8C8
  c->r[0]=0u+0x00000000u; // 804EF8CC
  c->r[4]=c->r[1]+0x0000000Cu; // 804EF8D0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804EF8D4
  c->r[3]=c->r[3]+0x00000014u; // 804EF8D8
  c->r[5]=c->r[1]+0x00000008u; // 804EF8DC
  c->lr=0x804EF8E4u; f_804E9E08(c); // 804EF8E0
  c->r[0]=R32(c->r[31]+0x00000010u); // 804EF8E4
  cmps(c,0,(int32_t)c->r[0],1); // 804EF8E8
  if (!crb(c,2)) { goto L_804EF8FC; } // 804EF8EC
  c->r[3]=c->r[31]+0x00000088u; // 804EF8F0
  c->lr=0x804EF8F8u; f_80399D74(c); // 804EF8F4
  goto L_804EF904; // 804EF8F8
L_804EF8FC:;
  c->r[3]=c->r[31]+0x00000030u; // 804EF8FC
  c->lr=0x804EF904u; f_8039941C(c); // 804EF900
L_804EF904:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EF904
  c->r[3]=c->r[31]+0x00000014u; // 804EF908
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EF90C
  c->lr=0x804EF914u; f_804E9E5C(c); // 804EF910
L_804EF914:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EF914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EF918
  c->lr=c->r[0]; // 804EF91C
  c->r[1]=c->r[1]+0x00000020u; // 804EF920
  return; // 804EF924
}

// fn_804EF928
void f_804EF928(Ctx* __restrict c) {
  trace_call(0x804EF928u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EF928
  c->r[0]=c->lr; // 804EF92C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF930
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EF934
  {uint32_t ea=c->r[2]+0x00001A14u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EF938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EF93C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EF940
  fcmp(c,0,c->f[1],c->f[5]); // 804EF944
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EF948
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804EF94C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EF950
  c->r[29]=c->r[3]|c->r[3]; // 804EF954
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF958
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF95C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 804EF960
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 804EF964
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 804EF968
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 804EF96C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EF970
  if (!crb(c,0)) { goto L_804EF97C; } // 804EF974
  goto L_804EF980; // 804EF978
L_804EF97C:;
  c->f[5]=c->f[1]; // 804EF97C
L_804EF980:;
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF980
  fcmp(c,0,c->f[5],c->f[0]); // 804EF984
  c->r[0]=c->cr; // 804EF988
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF98C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF990
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 804EF994
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[5]);} // 804EF998
  c->r[30]=c->r[0]^0x00000001u; // 804EF99C
  fcmp(c,0,c->f[0],c->f[1]); // 804EF9A0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[5]);} // 804EF9A4
  if (!crb(c,1)) { goto L_804EF9B0; } // 804EF9A8
  goto L_804EF9C4; // 804EF9AC
L_804EF9B0:;
  {uint32_t ea=c->r[2]+0x00001A14u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF9B0
  fcmp(c,0,c->f[0],c->f[1]); // 804EF9B4
  if (!crb(c,0)) { goto L_804EF9C0; } // 804EF9B8
  goto L_804EF9C4; // 804EF9BC
L_804EF9C0:;
  c->f[1]=c->f[0]; // 804EF9C0
L_804EF9C4:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF9C4
  {uint32_t ea=c->r[2]+0x00001A18u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF9C8
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 804EF9CC
  fcmp(c,0,c->f[0],c->f[2]); // 804EF9D0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 804EF9D4
  if (!crb(c,1)) { goto L_804EF9E0; } // 804EF9D8
  goto L_804EF9F4; // 804EF9DC
L_804EF9E0:;
  {uint32_t ea=c->r[2]+0x00001A1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EF9E0
  fcmp(c,0,c->f[0],c->f[2]); // 804EF9E4
  if (!crb(c,0)) { goto L_804EF9F0; } // 804EF9E8
  goto L_804EF9F4; // 804EF9EC
L_804EF9F0:;
  c->f[2]=c->f[0]; // 804EF9F0
L_804EF9F4:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EF9F4
  {uint32_t ea=c->r[2]+0x00001A10u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EF9F8
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[2]);} // 804EF9FC
  fcmp(c,0,c->f[0],c->f[1]); // 804EFA00
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 804EFA04
  if (!crb(c,1)) { goto L_804EFA10; } // 804EFA08
  goto L_804EFA24; // 804EFA0C
L_804EFA10:;
  {uint32_t ea=c->r[2]+0x00001A1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804EFA10
  fcmp(c,0,c->f[0],c->f[1]); // 804EFA14
  if (!crb(c,0)) { goto L_804EFA20; } // 804EFA18
  goto L_804EFA24; // 804EFA1C
L_804EFA20:;
  c->f[1]=c->f[0]; // 804EFA20
L_804EFA24:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EFA24
  {uint32_t ea=c->r[2]+0x00001A10u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EFA28
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 804EFA2C
  fcmp(c,0,c->f[0],c->f[2]); // 804EFA30
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 804EFA34
  if (!crb(c,1)) { goto L_804EFA40; } // 804EFA38
  goto L_804EFA54; // 804EFA3C
L_804EFA40:;
  {uint32_t ea=c->r[2]+0x00001A1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EFA40
  fcmp(c,0,c->f[0],c->f[2]); // 804EFA44
  if (!crb(c,0)) { goto L_804EFA50; } // 804EFA48
  goto L_804EFA54; // 804EFA4C
L_804EFA50:;
  c->f[2]=c->f[0]; // 804EFA50
L_804EFA54:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EFA54
  c->r[4]=0u+0x00000000u; // 804EFA58
  {uint32_t ea=c->r[2]+0x00001A1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EFA5C
  cmps(c,0,(int32_t)c->r[0],0); // 804EFA60
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[2]);} // 804EFA64
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[2]);} // 804EFA68
  W32(c->r[3]+0x00000078u,c->r[4]); // 804EFA6C
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 804EFA70
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 804EFA74
  W32(c->r[3]+0x000000D8u,c->r[4]); // 804EFA78
  W32(c->r[3]+0x000000DCu,c->r[4]); // 804EFA7C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 804EFA80
  if (!crb(c,2)) { goto L_804EFA90; } // 804EFA84
  c->r[3]=0u+0x00000001u; // 804EFA88
  goto L_804EFB68; // 804EFA8C
L_804EFA90:;
  c->r[3]=c->r[3]+0x00000030u; // 804EFA90
  c->lr=0x804EFA98u; f_80398EAC(c); // 804EFA94
  c->r[0]=c->r[3]+0x00000087u; // 804EFA98
  c->r[3]=c->r[29]+0x00000088u; // 804EFA9C
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFAA0
  c->lr=0x804EFAA8u; f_80399934(c); // 804EFAA4
  c->r[0]=c->r[3]+0x00000087u; // 804EFAA8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFAAC
  cmpu(c,0,c->r[3],c->r[31]); // 804EFAB0
  if (!crb(c,0)) { goto L_804EFABC; } // 804EFAB4
  c->r[3]=c->r[31]|c->r[31]; // 804EFAB8
L_804EFABC:;
  c->r[4]=R32(c->r[29]+0x00000014u); // 804EFABC
  cmps(c,0,(int32_t)c->r[4],0); // 804EFAC0
  if (!crb(c,2)) { goto L_804EFAD0; } // 804EFAC4
  c->r[0]=0u+0x00000000u; // 804EFAC8
  goto L_804EFAD8; // 804EFACC
L_804EFAD0:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804EFAD0
  c->r[0]=c->r[0]-c->r[4]; // 804EFAD4
L_804EFAD8:;
  cmpu(c,0,c->r[3],c->r[0]); // 804EFAD8
  if (!crb(c,1)) { goto L_804EFAE8; } // 804EFADC
  c->r[3]=0u+0x00000000u; // 804EFAE0
  goto L_804EFB68; // 804EFAE4
L_804EFAE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 804EFAE8
  if (crb(c,2)) { goto L_804EFB38; } // 804EFAEC
  c->r[3]=c->r[29]+0x00000014u; // 804EFAF0
  c->r[4]=c->r[1]+0x0000000Cu; // 804EFAF4
  c->r[5]=c->r[1]+0x00000008u; // 804EFAF8
  c->lr=0x804EFB00u; f_804E9E08(c); // 804EFAFC
  c->r[0]=R32(c->r[29]+0x00000010u); // 804EFB00
  cmps(c,0,(int32_t)c->r[0],1); // 804EFB04
  if (!crb(c,2)) { goto L_804EFB18; } // 804EFB08
  c->r[3]=c->r[29]+0x00000088u; // 804EFB0C
  c->lr=0x804EFB14u; f_80399B80(c); // 804EFB10
  goto L_804EFB20; // 804EFB14
L_804EFB18:;
  c->r[3]=c->r[29]+0x00000030u; // 804EFB18
  c->lr=0x804EFB20u; f_80399198(c); // 804EFB1C
L_804EFB20:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EFB20
  c->r[30]=c->r[3]|c->r[3]; // 804EFB24
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EFB28
  c->r[3]=c->r[29]+0x00000014u; // 804EFB2C
  c->lr=0x804EFB34u; f_804E9E5C(c); // 804EFB30
  goto L_804EFB5C; // 804EFB34
L_804EFB38:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804EFB38
  cmps(c,0,(int32_t)c->r[0],1); // 804EFB3C
  if (!crb(c,2)) { goto L_804EFB50; } // 804EFB40
  c->r[3]=c->r[29]+0x00000088u; // 804EFB44
  c->lr=0x804EFB4Cu; f_80399CA4(c); // 804EFB48
  goto L_804EFB58; // 804EFB4C
L_804EFB50:;
  c->r[3]=c->r[29]+0x00000030u; // 804EFB50
  c->lr=0x804EFB58u; f_80399318(c); // 804EFB54
L_804EFB58:;
  c->r[30]=c->r[3]|c->r[3]; // 804EFB58
L_804EFB5C:;
  c->r[0]=0u-c->r[30]; // 804EFB5C
  c->r[0]=c->r[0]|c->r[30]; // 804EFB60
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EFB64
L_804EFB68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EFB68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EFB6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EFB70
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EFB74
  c->lr=c->r[0]; // 804EFB78
  c->r[1]=c->r[1]+0x00000020u; // 804EFB7C
  return; // 804EFB80
}

// fn_804EFB84
void f_804EFB84(Ctx* __restrict c) {
  trace_call(0x804EFB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFB84
  c->r[0]=c->lr; // 804EFB88
  c->r[4]=c->r[3]|c->r[3]; // 804EFB8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EFB90
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EFB94
  cmps(c,0,(int32_t)c->r[0],0); // 804EFB98
  if (crb(c,2)) { goto L_804EFC14; } // 804EFB9C
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 804EFBA0
  c->r[3]=R32(c->r[3]+0x00000010u); // 804EFBA4
  c->r[0]=cntlz(c->r[0]); // 804EFBA8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804EFBAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804EFBB0
  if (!crb(c,2)) { goto L_804EFC14; } // 804EFBB4
  cmps(c,0,(int32_t)c->r[3],1); // 804EFBB8
  if (!crb(c,2)) { goto L_804EFBF0; } // 804EFBBC
  c->r[0]=R32(c->r[5]+0x00000000u); // 804EFBC0
  c->r[3]=c->r[1]+0x00000018u; // 804EFBC4
  c->r[4]=c->r[4]+0x00000088u; // 804EFBC8
  W32(c->r[1]+0x00000018u,c->r[0]); // 804EFBCC
  c->r[0]=R32(c->r[5]+0x00000004u); // 804EFBD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804EFBD4
  c->r[0]=R32(c->r[5]+0x00000008u); // 804EFBD8
  W32(c->r[1]+0x00000020u,c->r[0]); // 804EFBDC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804EFBE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EFBE4
  c->lr=0x804EFBECu; f_80399E04(c); // 804EFBE8
  goto L_804EFC14; // 804EFBEC
L_804EFBF0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804EFBF0
  c->r[3]=c->r[1]+0x00000008u; // 804EFBF4
  c->r[4]=c->r[4]+0x00000030u; // 804EFBF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EFBFC
  c->r[0]=R32(c->r[5]+0x00000004u); // 804EFC00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EFC04
  c->r[0]=R32(c->r[5]+0x00000008u); // 804EFC08
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EFC0C
  c->lr=0x804EFC14u; f_803994C8(c); // 804EFC10
L_804EFC14:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EFC14
  c->lr=c->r[0]; // 804EFC18
  c->r[1]=c->r[1]+0x00000030u; // 804EFC1C
  return; // 804EFC20
}

// fn_804EFC24
void f_804EFC24(Ctx* __restrict c) {
  trace_call(0x804EFC24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFC24
  c->r[0]=c->lr; // 804EFC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EFC2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EFC30
  c->r[31]=c->r[3]|c->r[3]; // 804EFC34
  c->lr=0x804EFC3Cu; f_804E5278(c); // 804EFC38
  c->lr=0x804EFC40u; f_804E5A84(c); // 804EFC3C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804EFC40
  c->r[0]=R32(c->r[31]+0x00000010u); // 804EFC44
  c->r[3]=cntlz(c->r[3]); // 804EFC48
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 804EFC4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804EFC50
  if (crb(c,2)) { goto L_804EFC80; } // 804EFC54
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EFC58
  c->r[3]=c->r[31]|c->r[31]; // 804EFC5C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EFC60
  c->ctr=c->r[12]; // 804EFC64
  if (true) { c->lr=0x804EFC6Cu; dispatch(c,c->ctr); } // 804EFC68
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EFC6C
  c->r[3]=c->r[31]|c->r[31]; // 804EFC70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EFC74
  c->ctr=c->r[12]; // 804EFC78
  if (true) { c->lr=0x804EFC80u; dispatch(c,c->ctr); } // 804EFC7C
L_804EFC80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EFC80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EFC84
  c->lr=c->r[0]; // 804EFC88
  c->r[1]=c->r[1]+0x00000010u; // 804EFC8C
  return; // 804EFC90
}

// fn_804EFC94
void f_804EFC94(Ctx* __restrict c) {
  trace_call(0x804EFC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFC94
  c->r[0]=c->lr; // 804EFC98
  c->r[5]=0u+0x80720000u; // 804EFC9C
  {uint32_t ea=c->r[2]+0x00001A20u; c->f[6]=c->ps1[6]=RF32(ea);} // 804EFCA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804EFCA4
  c->r[6]=0u+0x00000000u; // 804EFCA8
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EFCAC
  c->r[5]=c->r[5]+0xFFFFB5F8u; // 804EFCB0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804EFCB4
  c->r[0]=0u+0x00000005u; // 804EFCB8
  {uint32_t ea=c->r[2]+0x00001A24u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EFCBC
  c->r[31]=c->r[3]|c->r[3]; // 804EFCC0
  {uint32_t ea=c->r[2]+0x00001A28u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EFCC4
  c->r[4]=c->r[1]+0x00000008u; // 804EFCC8
  {uint32_t ea=c->r[2]+0x00001A2Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804EFCCC
  {uint32_t ea=c->r[2]+0x00001A30u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EFCD0
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EFCD4
  W32(c->r[3]+0x00000004u,c->r[6]); // 804EFCD8
  W32(c->r[3]+0x00000008u,c->r[6]); // 804EFCDC
  W32(c->r[3]+0x00000000u,c->r[5]); // 804EFCE0
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 804EFCE4
  W32(c->r[3]+0x00000014u,c->r[6]); // 804EFCE8
  W32(c->r[3]+0x00000018u,c->r[6]); // 804EFCEC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[6]);} // 804EFCF0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 804EFCF4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 804EFCF8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 804EFCFC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 804EFD00
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 804EFD04
  W32(c->r[3]+0x00000034u,c->r[0]); // 804EFD08
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[6]);} // 804EFD0C
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 804EFD10
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804EFD14
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 804EFD18
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 804EFD1C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 804EFD20
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804EFD24
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 804EFD28
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 804EFD2C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804EFD30
  W32(c->r[1]+0x00000020u,c->r[0]); // 804EFD34
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 804EFD38
  W32(c->r[1]+0x00000028u,c->r[6]); // 804EFD3C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EFD40
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 804EFD44
  c->lr=0x804EFD4Cu; f_804EFF6C(c); // 804EFD48
  c->r[3]=c->r[31]|c->r[31]; // 804EFD4C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804EFD50
  c->r[0]=R32(c->r[1]+0x00000044u); // 804EFD54
  c->lr=c->r[0]; // 804EFD58
  c->r[1]=c->r[1]+0x00000040u; // 804EFD5C
  return; // 804EFD60
}

// fn_804EFD64
void f_804EFD64(Ctx* __restrict c) {
  trace_call(0x804EFD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFD64
  c->r[0]=c->lr; // 804EFD68
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EFD6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EFD70
  c->r[31]=c->r[3]|c->r[3]; // 804EFD74
  c->r[3]=c->r[3]+0x00000048u; // 804EFD78
  c->lr=0x804EFD80u; f_80396E10(c); // 804EFD7C
  c->r[0]=c->r[3]+0x00000087u; // 804EFD80
  c->r[3]=c->r[31]+0x00000190u; // 804EFD84
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFD88
  c->lr=0x804EFD90u; f_80397DF8(c); // 804EFD8C
  c->r[0]=c->r[3]+0x00000087u; // 804EFD90
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFD94
  cmpu(c,0,c->r[3],c->r[31]); // 804EFD98
  if (!crb(c,0)) { goto L_804EFDA4; } // 804EFD9C
  c->r[3]=c->r[31]|c->r[31]; // 804EFDA0
L_804EFDA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EFDA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EFDA8
  c->lr=c->r[0]; // 804EFDAC
  c->r[1]=c->r[1]+0x00000010u; // 804EFDB0
  return; // 804EFDB4
}

// fn_804EFDB8
void f_804EFDB8(Ctx* __restrict c) {
  trace_call(0x804EFDB8u);
  c->r[3]=c->r[3]+0x00000014u; // 804EFDB8
  f_804E9D5C(c); return; // 804EFDBC
}

// fn_804EFDC0
void f_804EFDC0(Ctx* __restrict c) {
  trace_call(0x804EFDC0u);
  c->r[3]=c->r[3]+0x00000014u; // 804EFDC0
  f_804E9DC4(c); return; // 804EFDC4
}

// fn_804EFDC8
void f_804EFDC8(Ctx* __restrict c) {
  trace_call(0x804EFDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFDC8
  c->r[0]=c->lr; // 804EFDCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EFDD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EFDD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EFDD8
  c->r[30]=c->r[3]|c->r[3]; // 804EFDDC
  c->r[3]=c->r[3]+0x00000048u; // 804EFDE0
  c->lr=0x804EFDE8u; f_80396E10(c); // 804EFDE4
  c->r[0]=c->r[3]+0x00000087u; // 804EFDE8
  c->r[3]=c->r[30]+0x00000190u; // 804EFDEC
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFDF0
  c->lr=0x804EFDF8u; f_80397DF8(c); // 804EFDF4
  c->r[0]=c->r[3]+0x00000087u; // 804EFDF8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804EFDFC
  cmpu(c,0,c->r[3],c->r[31]); // 804EFE00
  if (!crb(c,0)) { goto L_804EFE0C; } // 804EFE04
  c->r[3]=c->r[31]|c->r[31]; // 804EFE08
L_804EFE0C:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804EFE0C
  cmps(c,0,(int32_t)c->r[4],0); // 804EFE10
  if (!crb(c,2)) { goto L_804EFE20; } // 804EFE14
  c->r[0]=0u+0x00000000u; // 804EFE18
  goto L_804EFE28; // 804EFE1C
L_804EFE20:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804EFE20
  c->r[0]=c->r[0]-c->r[4]; // 804EFE24
L_804EFE28:;
  cmpu(c,0,c->r[3],c->r[0]); // 804EFE28
  if (!crb(c,1)) { goto L_804EFE38; } // 804EFE2C
  c->r[3]=0u+0x00000000u; // 804EFE30
  goto L_804EFED8; // 804EFE34
L_804EFE38:;
  c->lr=0x804EFE3Cu; f_804E5278(c); // 804EFE38
  c->lr=0x804EFE40u; f_804E5A84(c); // 804EFE3C
  cmps(c,0,(int32_t)c->r[3],2); // 804EFE40
  if (!crb(c,2)) { goto L_804EFE88; } // 804EFE44
  c->r[0]=0u+0x00000001u; // 804EFE48
  c->r[3]=c->r[30]+0x00000014u; // 804EFE4C
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EFE50
  c->r[4]=c->r[1]+0x0000000Cu; // 804EFE54
  c->r[5]=c->r[1]+0x00000008u; // 804EFE58
  c->lr=0x804EFE60u; f_804E9E08(c); // 804EFE5C
  c->r[3]=c->r[30]+0x00000190u; // 804EFE60
  c->lr=0x804EFE68u; f_80397E84(c); // 804EFE64
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EFE68
  c->r[31]=c->r[3]|c->r[3]; // 804EFE6C
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EFE70
  c->r[3]=c->r[30]+0x00000014u; // 804EFE74
  c->lr=0x804EFE7Cu; f_804E9E5C(c); // 804EFE78
  c->r[3]=c->r[30]+0x00000190u; // 804EFE7C
  c->lr=0x804EFE84u; f_80397DF8(c); // 804EFE80
  goto L_804EFEC4; // 804EFE84
L_804EFE88:;
  c->r[0]=0u+0x00000000u; // 804EFE88
  c->r[3]=c->r[30]+0x00000014u; // 804EFE8C
  W32(c->r[30]+0x00000010u,c->r[0]); // 804EFE90
  c->r[4]=c->r[1]+0x0000000Cu; // 804EFE94
  c->r[5]=c->r[1]+0x00000008u; // 804EFE98
  c->lr=0x804EFEA0u; f_804E9E08(c); // 804EFE9C
  c->r[3]=c->r[30]+0x00000048u; // 804EFEA0
  c->lr=0x804EFEA8u; f_80396E98(c); // 804EFEA4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EFEA8
  c->r[31]=c->r[3]|c->r[3]; // 804EFEAC
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EFEB0
  c->r[3]=c->r[30]+0x00000014u; // 804EFEB4
  c->lr=0x804EFEBCu; f_804E9E5C(c); // 804EFEB8
  c->r[3]=c->r[30]+0x00000048u; // 804EFEBC
  c->lr=0x804EFEC4u; f_80396E10(c); // 804EFEC0
L_804EFEC4:;
  c->r[0]=0u-c->r[31]; // 804EFEC4
  c->r[3]=0u+0x00000001u; // 804EFEC8
  c->r[0]=c->r[0]|c->r[31]; // 804EFECC
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 804EFED0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EFED4
L_804EFED8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EFED8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EFEDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EFEE0
  c->lr=c->r[0]; // 804EFEE4
  c->r[1]=c->r[1]+0x00000020u; // 804EFEE8
  return; // 804EFEEC
}

// fn_804EFEF0
void f_804EFEF0(Ctx* __restrict c) {
  trace_call(0x804EFEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFEF0
  c->r[0]=c->lr; // 804EFEF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EFEF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EFEFC
  c->r[31]=c->r[3]|c->r[3]; // 804EFF00
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EFF04
  cmps(c,0,(int32_t)c->r[0],0); // 804EFF08
  if (crb(c,2)) { goto L_804EFF58; } // 804EFF0C
  c->r[0]=0u+0x00000000u; // 804EFF10
  c->r[4]=c->r[1]+0x0000000Cu; // 804EFF14
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804EFF18
  c->r[3]=c->r[3]+0x00000014u; // 804EFF1C
  c->r[5]=c->r[1]+0x00000008u; // 804EFF20
  c->lr=0x804EFF28u; f_804E9E08(c); // 804EFF24
  c->r[0]=R32(c->r[31]+0x00000010u); // 804EFF28
  cmps(c,0,(int32_t)c->r[0],1); // 804EFF2C
  if (!crb(c,2)) { goto L_804EFF40; } // 804EFF30
  c->r[3]=c->r[31]+0x00000190u; // 804EFF34
  c->lr=0x804EFF3Cu; f_803981C8(c); // 804EFF38
  goto L_804EFF48; // 804EFF3C
L_804EFF40:;
  c->r[3]=c->r[31]+0x00000048u; // 804EFF40
  c->lr=0x804EFF48u; f_803971B8(c); // 804EFF44
L_804EFF48:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804EFF48
  c->r[3]=c->r[31]+0x00000014u; // 804EFF4C
  c->r[5]=R32(c->r[1]+0x00000008u); // 804EFF50
  c->lr=0x804EFF58u; f_804E9E5C(c); // 804EFF54
L_804EFF58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EFF58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EFF5C
  c->lr=c->r[0]; // 804EFF60
  c->r[1]=c->r[1]+0x00000020u; // 804EFF64
  return; // 804EFF68
}

// fn_804EFF6C
void f_804EFF6C(Ctx* __restrict c) {
  trace_call(0x804EFF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EFF6C
  c->r[0]=c->lr; // 804EFF70
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EFF74
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EFF78
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[9]=c->ps1[9]=RF32(ea);} // 804EFF7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EFF80
  c->r[31]=c->r[3]|c->r[3]; // 804EFF84
  {uint32_t ea=c->r[4]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804EFF88
  fcmp(c,0,c->f[2],c->f[9]); // 804EFF8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EFF90
  {uint32_t ea=c->r[4]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804EFF94
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EFF98
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804EFF9C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804EFFA0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EFFA4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804EFFA8
  c->r[5]=R32(c->r[4]+0x00000018u); // 804EFFAC
  c->r[0]=R32(c->r[4]+0x00000020u); // 804EFFB0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EFFB4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EFFB8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[8]);} // 804EFFBC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[7]);} // 804EFFC0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[6]);} // 804EFFC4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[5]);} // 804EFFC8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 804EFFCC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 804EFFD0
  W32(c->r[3]+0x00000034u,c->r[5]); // 804EFFD4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 804EFFD8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804EFFDC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 804EFFE0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 804EFFE4
  if (!crb(c,0)) { goto L_804EFFF0; } // 804EFFE8
  goto L_804EFFF4; // 804EFFEC
L_804EFFF0:;
  c->f[9]=c->f[2]; // 804EFFF0
L_804EFFF4:;
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EFFF4
  fcmp(c,0,c->f[9],c->f[0]); // 804EFFF8
  c->r[5]=c->cr; // 804EFFFC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0000
  c->r[0]=R32(c->r[4]+0x00000018u); // 804F0004
  c->r[5]=rotl(c->r[5],3)&0x00000001u; // 804F0008
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F000C
  c->r[29]=c->r[5]^0x00000001u; // 804F0010
  W32(c->r[3]+0x000002D0u,c->r[0]); // 804F0014
  fcmp(c,0,c->f[0],c->f[1]); // 804F0018
  W32(c->r[3]+0x00000158u,c->r[0]); // 804F001C
  {uint32_t ea=c->r[3]+0x000002D4u; WF32(ea,c->f[9]);} // 804F0020
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[9]);} // 804F0024
  if (!crb(c,1)) { goto L_804F0030; } // 804F0028
  goto L_804F0044; // 804F002C
L_804F0030:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0030
  fcmp(c,0,c->f[0],c->f[1]); // 804F0034
  if (!crb(c,0)) { goto L_804F0040; } // 804F0038
  goto L_804F0044; // 804F003C
L_804F0040:;
  c->f[1]=c->f[0]; // 804F0040
L_804F0044:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0044
  c->r[0]=R32(c->r[4]+0x00000020u); // 804F0048
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F004C
  {uint32_t ea=c->r[3]+0x000002D8u; WF32(ea,c->f[1]);} // 804F0050
  fcmp(c,0,c->f[0],c->f[2]); // 804F0054
  {uint32_t ea=c->r[3]+0x00000160u; WF32(ea,c->f[1]);} // 804F0058
  W32(c->r[3]+0x000002DCu,c->r[0]); // 804F005C
  W32(c->r[3]+0x00000164u,c->r[0]); // 804F0060
  if (!crb(c,0)) { goto L_804F006C; } // 804F0064
  goto L_804F0070; // 804F0068
L_804F006C:;
  c->f[2]=c->f[0]; // 804F006C
L_804F0070:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0070
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0074
  {uint32_t ea=c->r[3]+0x000002E0u; WF32(ea,c->f[2]);} // 804F0078
  fcmp(c,0,c->f[0],c->f[1]); // 804F007C
  {uint32_t ea=c->r[3]+0x00000168u; WF32(ea,c->f[2]);} // 804F0080
  if (!crb(c,1)) { goto L_804F008C; } // 804F0084
  goto L_804F00A0; // 804F0088
L_804F008C:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F008C
  fcmp(c,0,c->f[0],c->f[1]); // 804F0090
  if (!crb(c,0)) { goto L_804F009C; } // 804F0094
  goto L_804F00A0; // 804F0098
L_804F009C:;
  c->f[1]=c->f[0]; // 804F009C
L_804F00A0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F00A0
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F00A4
  {uint32_t ea=c->r[3]+0x000002E4u; WF32(ea,c->f[1]);} // 804F00A8
  fcmp(c,0,c->f[0],c->f[2]); // 804F00AC
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[1]);} // 804F00B0
  if (!crb(c,1)) { goto L_804F00BC; } // 804F00B4
  goto L_804F00D0; // 804F00B8
L_804F00BC:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F00BC
  fcmp(c,0,c->f[0],c->f[2]); // 804F00C0
  if (!crb(c,0)) { goto L_804F00CC; } // 804F00C4
  goto L_804F00D0; // 804F00C8
L_804F00CC:;
  c->f[2]=c->f[0]; // 804F00CC
L_804F00D0:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F00D0
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F00D4
  {uint32_t ea=c->r[3]+0x000002E8u; WF32(ea,c->f[2]);} // 804F00D8
  fcmp(c,0,c->f[0],c->f[1]); // 804F00DC
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[2]);} // 804F00E0
  if (!crb(c,1)) { goto L_804F00EC; } // 804F00E4
  goto L_804F0100; // 804F00E8
L_804F00EC:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F00EC
  fcmp(c,0,c->f[0],c->f[1]); // 804F00F0
  if (!crb(c,0)) { goto L_804F00FC; } // 804F00F4
  goto L_804F0100; // 804F00F8
L_804F00FC:;
  c->f[1]=c->f[0]; // 804F00FC
L_804F0100:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0100
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0104
  {uint32_t ea=c->r[3]+0x000002ECu; WF32(ea,c->f[1]);} // 804F0108
  fcmp(c,0,c->f[0],c->f[2]); // 804F010C
  {uint32_t ea=c->r[3]+0x00000174u; WF32(ea,c->f[1]);} // 804F0110
  if (!crb(c,1)) { goto L_804F011C; } // 804F0114
  goto L_804F0130; // 804F0118
L_804F011C:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F011C
  fcmp(c,0,c->f[0],c->f[2]); // 804F0120
  if (!crb(c,0)) { goto L_804F012C; } // 804F0124
  goto L_804F0130; // 804F0128
L_804F012C:;
  c->f[2]=c->f[0]; // 804F012C
L_804F0130:;
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0130
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0134
  {uint32_t ea=c->r[3]+0x000002F0u; WF32(ea,c->f[2]);} // 804F0138
  fcmp(c,0,c->f[0],c->f[1]); // 804F013C
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[2]);} // 804F0140
  if (!crb(c,1)) { goto L_804F014C; } // 804F0144
  goto L_804F0160; // 804F0148
L_804F014C:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F014C
  fcmp(c,0,c->f[0],c->f[1]); // 804F0150
  if (!crb(c,0)) { goto L_804F015C; } // 804F0154
  goto L_804F0160; // 804F0158
L_804F015C:;
  c->f[1]=c->f[0]; // 804F015C
L_804F0160:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0160
  {uint32_t ea=c->r[2]+0x00001A34u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0164
  {uint32_t ea=c->r[3]+0x000002F4u; WF32(ea,c->f[1]);} // 804F0168
  fcmp(c,0,c->f[0],c->f[2]); // 804F016C
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[1]);} // 804F0170
  if (!crb(c,1)) { goto L_804F017C; } // 804F0174
  goto L_804F0190; // 804F0178
L_804F017C:;
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F017C
  fcmp(c,0,c->f[0],c->f[2]); // 804F0180
  if (!crb(c,0)) { goto L_804F018C; } // 804F0184
  goto L_804F0190; // 804F0188
L_804F018C:;
  c->f[2]=c->f[0]; // 804F018C
L_804F0190:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F0190
  c->r[4]=0u+0x00000000u; // 804F0194
  {uint32_t ea=c->r[2]+0x00001A38u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0198
  cmps(c,0,(int32_t)c->r[0],0); // 804F019C
  {uint32_t ea=c->r[3]+0x00000300u; WF32(ea,c->f[2]);} // 804F01A0
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[2]);} // 804F01A4
  W32(c->r[3]+0x00000180u,c->r[4]); // 804F01A8
  W32(c->r[3]+0x00000184u,c->r[4]); // 804F01AC
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 804F01B0
  W32(c->r[3]+0x000002F8u,c->r[4]); // 804F01B4
  W32(c->r[3]+0x000002FCu,c->r[4]); // 804F01B8
  {uint32_t ea=c->r[3]+0x00000304u; WF32(ea,c->f[0]);} // 804F01BC
  if (!crb(c,2)) { goto L_804F01CC; } // 804F01C0
  c->r[3]=0u+0x00000001u; // 804F01C4
  goto L_804F02A4; // 804F01C8
L_804F01CC:;
  c->r[3]=c->r[3]+0x00000048u; // 804F01CC
  c->lr=0x804F01D4u; f_80396E10(c); // 804F01D0
  c->r[0]=c->r[3]+0x00000087u; // 804F01D4
  c->r[3]=c->r[31]+0x00000190u; // 804F01D8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F01DC
  c->lr=0x804F01E4u; f_80397DF8(c); // 804F01E0
  c->r[0]=c->r[3]+0x00000087u; // 804F01E4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F01E8
  cmpu(c,0,c->r[3],c->r[30]); // 804F01EC
  if (!crb(c,0)) { goto L_804F01F8; } // 804F01F0
  c->r[3]=c->r[30]|c->r[30]; // 804F01F4
L_804F01F8:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 804F01F8
  cmps(c,0,(int32_t)c->r[4],0); // 804F01FC
  if (!crb(c,2)) { goto L_804F020C; } // 804F0200
  c->r[0]=0u+0x00000000u; // 804F0204
  goto L_804F0214; // 804F0208
L_804F020C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F020C
  c->r[0]=c->r[0]-c->r[4]; // 804F0210
L_804F0214:;
  cmpu(c,0,c->r[3],c->r[0]); // 804F0214
  if (!crb(c,1)) { goto L_804F0224; } // 804F0218
  c->r[3]=0u+0x00000000u; // 804F021C
  goto L_804F02A4; // 804F0220
L_804F0224:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F0224
  if (crb(c,2)) { goto L_804F0274; } // 804F0228
  c->r[3]=c->r[31]+0x00000014u; // 804F022C
  c->r[4]=c->r[1]+0x0000000Cu; // 804F0230
  c->r[5]=c->r[1]+0x00000008u; // 804F0234
  c->lr=0x804F023Cu; f_804E9E08(c); // 804F0238
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F023C
  cmps(c,0,(int32_t)c->r[0],1); // 804F0240
  if (!crb(c,2)) { goto L_804F0254; } // 804F0244
  c->r[3]=c->r[31]+0x00000190u; // 804F0248
  c->lr=0x804F0250u; f_80398044(c); // 804F024C
  goto L_804F025C; // 804F0250
L_804F0254:;
  c->r[3]=c->r[31]+0x00000048u; // 804F0254
  c->lr=0x804F025Cu; f_80397034(c); // 804F0258
L_804F025C:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804F025C
  c->r[29]=c->r[3]|c->r[3]; // 804F0260
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F0264
  c->r[3]=c->r[31]+0x00000014u; // 804F0268
  c->lr=0x804F0270u; f_804E9E5C(c); // 804F026C
  goto L_804F0298; // 804F0270
L_804F0274:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F0274
  cmps(c,0,(int32_t)c->r[0],1); // 804F0278
  if (!crb(c,2)) { goto L_804F028C; } // 804F027C
  c->r[3]=c->r[31]+0x00000190u; // 804F0280
  c->lr=0x804F0288u; f_80398114(c); // 804F0284
  goto L_804F0294; // 804F0288
L_804F028C:;
  c->r[3]=c->r[31]+0x00000048u; // 804F028C
  c->lr=0x804F0294u; f_80397104(c); // 804F0290
L_804F0294:;
  c->r[29]=c->r[3]|c->r[3]; // 804F0294
L_804F0298:;
  c->r[0]=0u-c->r[29]; // 804F0298
  c->r[0]=c->r[0]|c->r[29]; // 804F029C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F02A0
L_804F02A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F02A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F02A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F02AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F02B0
  c->lr=c->r[0]; // 804F02B4
  c->r[1]=c->r[1]+0x00000020u; // 804F02B8
  return; // 804F02BC
}

// fn_804F02C0
void f_804F02C0(Ctx* __restrict c) {
  trace_call(0x804F02C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F02C0
  c->r[0]=c->lr; // 804F02C4
  c->r[4]=c->r[3]|c->r[3]; // 804F02C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F02CC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F02D0
  cmps(c,0,(int32_t)c->r[0],0); // 804F02D4
  if (crb(c,2)) { goto L_804F0350; } // 804F02D8
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 804F02DC
  c->r[3]=R32(c->r[3]+0x00000010u); // 804F02E0
  c->r[0]=cntlz(c->r[0]); // 804F02E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804F02E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804F02EC
  if (!crb(c,2)) { goto L_804F0350; } // 804F02F0
  cmps(c,0,(int32_t)c->r[3],1); // 804F02F4
  if (!crb(c,2)) { goto L_804F032C; } // 804F02F8
  c->r[0]=R32(c->r[5]+0x00000000u); // 804F02FC
  c->r[3]=c->r[1]+0x00000018u; // 804F0300
  c->r[4]=c->r[4]+0x00000190u; // 804F0304
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F0308
  c->r[0]=R32(c->r[5]+0x00000004u); // 804F030C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F0310
  c->r[0]=R32(c->r[5]+0x00000008u); // 804F0314
  W32(c->r[1]+0x00000020u,c->r[0]); // 804F0318
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804F031C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0320
  c->lr=0x804F0328u; f_8039821C(c); // 804F0324
  goto L_804F0350; // 804F0328
L_804F032C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804F032C
  c->r[3]=c->r[1]+0x00000008u; // 804F0330
  c->r[4]=c->r[4]+0x00000048u; // 804F0334
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F0338
  c->r[0]=R32(c->r[5]+0x00000004u); // 804F033C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F0340
  c->r[0]=R32(c->r[5]+0x00000008u); // 804F0344
  W32(c->r[1]+0x00000010u,c->r[0]); // 804F0348
  c->lr=0x804F0350u; f_8039720C(c); // 804F034C
L_804F0350:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F0350
  c->lr=c->r[0]; // 804F0354
  c->r[1]=c->r[1]+0x00000030u; // 804F0358
  return; // 804F035C
}

// fn_804F0360
void f_804F0360(Ctx* __restrict c) {
  trace_call(0x804F0360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0360
  c->r[0]=c->lr; // 804F0364
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F036C
  c->r[31]=c->r[3]|c->r[3]; // 804F0370
  c->lr=0x804F0378u; f_804E5278(c); // 804F0374
  c->lr=0x804F037Cu; f_804E5A84(c); // 804F0378
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804F037C
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F0380
  c->r[3]=cntlz(c->r[3]); // 804F0384
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 804F0388
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804F038C
  if (crb(c,2)) { goto L_804F03BC; } // 804F0390
  c->r[12]=R32(c->r[31]+0x00000000u); // 804F0394
  c->r[3]=c->r[31]|c->r[31]; // 804F0398
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F039C
  c->ctr=c->r[12]; // 804F03A0
  if (true) { c->lr=0x804F03A8u; dispatch(c,c->ctr); } // 804F03A4
  c->r[12]=R32(c->r[31]+0x00000000u); // 804F03A8
  c->r[3]=c->r[31]|c->r[31]; // 804F03AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F03B0
  c->ctr=c->r[12]; // 804F03B4
  if (true) { c->lr=0x804F03BCu; dispatch(c,c->ctr); } // 804F03B8
L_804F03BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F03BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F03C0
  c->lr=c->r[0]; // 804F03C4
  c->r[1]=c->r[1]+0x00000010u; // 804F03C8
  return; // 804F03CC
}

// fn_804F03D0
void f_804F03D0(Ctx* __restrict c) {
  trace_call(0x804F03D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F03D0
  c->r[0]=c->lr; // 804F03D4
  c->r[5]=0u+0x80720000u; // 804F03D8
  {uint32_t ea=c->r[2]+0x00001A40u; c->f[5]=c->ps1[5]=RF32(ea);} // 804F03DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F03E0
  c->r[6]=0u+0x00000000u; // 804F03E4
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F03E8
  c->r[5]=c->r[5]+0xFFFFB620u; // 804F03EC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804F03F0
  c->r[0]=0u+0x00000005u; // 804F03F4
  {uint32_t ea=c->r[2]+0x00001A44u; c->f[4]=c->ps1[4]=RF32(ea);} // 804F03F8
  c->r[31]=c->r[3]|c->r[3]; // 804F03FC
  {uint32_t ea=c->r[2]+0x00001A48u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F0400
  c->r[4]=c->r[1]+0x00000008u; // 804F0404
  {uint32_t ea=c->r[2]+0x00001A4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0408
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F040C
  W32(c->r[3]+0x00000004u,c->r[6]); // 804F0410
  W32(c->r[3]+0x00000008u,c->r[6]); // 804F0414
  W32(c->r[3]+0x00000000u,c->r[5]); // 804F0418
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 804F041C
  W32(c->r[3]+0x00000014u,c->r[6]); // 804F0420
  W32(c->r[3]+0x00000018u,c->r[6]); // 804F0424
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 804F0428
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[4]);} // 804F042C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 804F0430
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 804F0434
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 804F0438
  W32(c->r[3]+0x00000030u,c->r[0]); // 804F043C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[5]);} // 804F0440
  W32(c->r[3]+0x00000038u,c->r[6]); // 804F0444
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 804F0448
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 804F044C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 804F0450
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 804F0454
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 804F0458
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804F045C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804F0460
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F0464
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 804F0468
  W32(c->r[1]+0x00000024u,c->r[6]); // 804F046C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804F0470
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804F0474
  c->lr=0x804F047Cu; f_804F069C(c); // 804F0478
  c->r[3]=c->r[31]|c->r[31]; // 804F047C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804F0480
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F0484
  c->lr=c->r[0]; // 804F0488
  c->r[1]=c->r[1]+0x00000040u; // 804F048C
  return; // 804F0490
}

// fn_804F0494
void f_804F0494(Ctx* __restrict c) {
  trace_call(0x804F0494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0494
  c->r[0]=c->lr; // 804F0498
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F049C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F04A0
  c->r[31]=c->r[3]|c->r[3]; // 804F04A4
  c->r[3]=c->r[3]+0x00000044u; // 804F04A8
  c->lr=0x804F04B0u; f_8039A1D4(c); // 804F04AC
  c->r[0]=c->r[3]+0x00000087u; // 804F04B0
  c->r[3]=c->r[31]+0x0000012Cu; // 804F04B4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F04B8
  c->lr=0x804F04C0u; f_8039AED4(c); // 804F04BC
  c->r[0]=c->r[3]+0x00000087u; // 804F04C0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F04C4
  cmpu(c,0,c->r[3],c->r[31]); // 804F04C8
  if (!crb(c,0)) { goto L_804F04D4; } // 804F04CC
  c->r[3]=c->r[31]|c->r[31]; // 804F04D0
L_804F04D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F04D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F04D8
  c->lr=c->r[0]; // 804F04DC
  c->r[1]=c->r[1]+0x00000010u; // 804F04E0
  return; // 804F04E4
}

// fn_804F04E8
void f_804F04E8(Ctx* __restrict c) {
  trace_call(0x804F04E8u);
  c->r[3]=c->r[3]+0x00000014u; // 804F04E8
  f_804E9D5C(c); return; // 804F04EC
}

// fn_804F04F0
void f_804F04F0(Ctx* __restrict c) {
  trace_call(0x804F04F0u);
  c->r[3]=c->r[3]+0x00000014u; // 804F04F0
  f_804E9DC4(c); return; // 804F04F4
}

// fn_804F04F8
void f_804F04F8(Ctx* __restrict c) {
  trace_call(0x804F04F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F04F8
  c->r[0]=c->lr; // 804F04FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F0504
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F0508
  c->r[30]=c->r[3]|c->r[3]; // 804F050C
  c->r[3]=c->r[3]+0x00000044u; // 804F0510
  c->lr=0x804F0518u; f_8039A1D4(c); // 804F0514
  c->r[0]=c->r[3]+0x00000087u; // 804F0518
  c->r[3]=c->r[30]+0x0000012Cu; // 804F051C
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F0520
  c->lr=0x804F0528u; f_8039AED4(c); // 804F0524
  c->r[0]=c->r[3]+0x00000087u; // 804F0528
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F052C
  cmpu(c,0,c->r[3],c->r[31]); // 804F0530
  if (!crb(c,0)) { goto L_804F053C; } // 804F0534
  c->r[3]=c->r[31]|c->r[31]; // 804F0538
L_804F053C:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804F053C
  cmps(c,0,(int32_t)c->r[4],0); // 804F0540
  if (!crb(c,2)) { goto L_804F0550; } // 804F0544
  c->r[0]=0u+0x00000000u; // 804F0548
  goto L_804F0558; // 804F054C
L_804F0550:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F0550
  c->r[0]=c->r[0]-c->r[4]; // 804F0554
L_804F0558:;
  cmpu(c,0,c->r[3],c->r[0]); // 804F0558
  if (!crb(c,1)) { goto L_804F0568; } // 804F055C
  c->r[3]=0u+0x00000000u; // 804F0560
  goto L_804F0608; // 804F0564
L_804F0568:;
  c->lr=0x804F056Cu; f_804E5278(c); // 804F0568
  c->lr=0x804F0570u; f_804E5A84(c); // 804F056C
  cmps(c,0,(int32_t)c->r[3],2); // 804F0570
  if (!crb(c,2)) { goto L_804F05B8; } // 804F0574
  c->r[0]=0u+0x00000001u; // 804F0578
  c->r[3]=c->r[30]+0x00000014u; // 804F057C
  W32(c->r[30]+0x00000010u,c->r[0]); // 804F0580
  c->r[4]=c->r[1]+0x0000000Cu; // 804F0584
  c->r[5]=c->r[1]+0x00000008u; // 804F0588
  c->lr=0x804F0590u; f_804E9E08(c); // 804F058C
  c->r[3]=c->r[30]+0x0000012Cu; // 804F0590
  c->lr=0x804F0598u; f_8039AF34(c); // 804F0594
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804F0598
  c->r[31]=c->r[3]|c->r[3]; // 804F059C
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F05A0
  c->r[3]=c->r[30]+0x00000014u; // 804F05A4
  c->lr=0x804F05ACu; f_804E9E5C(c); // 804F05A8
  c->r[3]=c->r[30]+0x0000012Cu; // 804F05AC
  c->lr=0x804F05B4u; f_8039AED4(c); // 804F05B0
  goto L_804F05F4; // 804F05B4
L_804F05B8:;
  c->r[0]=0u+0x00000000u; // 804F05B8
  c->r[3]=c->r[30]+0x00000014u; // 804F05BC
  W32(c->r[30]+0x00000010u,c->r[0]); // 804F05C0
  c->r[4]=c->r[1]+0x0000000Cu; // 804F05C4
  c->r[5]=c->r[1]+0x00000008u; // 804F05C8
  c->lr=0x804F05D0u; f_804E9E08(c); // 804F05CC
  c->r[3]=c->r[30]+0x00000044u; // 804F05D0
  c->lr=0x804F05D8u; f_8039A234(c); // 804F05D4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804F05D8
  c->r[31]=c->r[3]|c->r[3]; // 804F05DC
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F05E0
  c->r[3]=c->r[30]+0x00000014u; // 804F05E4
  c->lr=0x804F05ECu; f_804E9E5C(c); // 804F05E8
  c->r[3]=c->r[30]+0x00000044u; // 804F05EC
  c->lr=0x804F05F4u; f_8039A1D4(c); // 804F05F0
L_804F05F4:;
  c->r[0]=0u-c->r[31]; // 804F05F4
  c->r[3]=0u+0x00000001u; // 804F05F8
  c->r[0]=c->r[0]|c->r[31]; // 804F05FC
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 804F0600
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F0604
L_804F0608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F0608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F060C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F0610
  c->lr=c->r[0]; // 804F0614
  c->r[1]=c->r[1]+0x00000020u; // 804F0618
  return; // 804F061C
}

// fn_804F0620
void f_804F0620(Ctx* __restrict c) {
  trace_call(0x804F0620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0620
  c->r[0]=c->lr; // 804F0624
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0628
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F062C
  c->r[31]=c->r[3]|c->r[3]; // 804F0630
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F0634
  cmps(c,0,(int32_t)c->r[0],0); // 804F0638
  if (crb(c,2)) { goto L_804F0688; } // 804F063C
  c->r[0]=0u+0x00000000u; // 804F0640
  c->r[4]=c->r[1]+0x0000000Cu; // 804F0644
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 804F0648
  c->r[3]=c->r[3]+0x00000014u; // 804F064C
  c->r[5]=c->r[1]+0x00000008u; // 804F0650
  c->lr=0x804F0658u; f_804E9E08(c); // 804F0654
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F0658
  cmps(c,0,(int32_t)c->r[0],1); // 804F065C
  if (!crb(c,2)) { goto L_804F0670; } // 804F0660
  c->r[3]=c->r[31]+0x0000012Cu; // 804F0664
  c->lr=0x804F066Cu; f_8039B250(c); // 804F0668
  goto L_804F0678; // 804F066C
L_804F0670:;
  c->r[3]=c->r[31]+0x00000044u; // 804F0670
  c->lr=0x804F0678u; f_8039A534(c); // 804F0674
L_804F0678:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804F0678
  c->r[3]=c->r[31]+0x00000014u; // 804F067C
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F0680
  c->lr=0x804F0688u; f_804E9E5C(c); // 804F0684
L_804F0688:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F0688
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F068C
  c->lr=c->r[0]; // 804F0690
  c->r[1]=c->r[1]+0x00000020u; // 804F0694
  return; // 804F0698
}

// fn_804F069C
void f_804F069C(Ctx* __restrict c) {
  trace_call(0x804F069Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F069C
  c->r[0]=c->lr; // 804F06A0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F06A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F06A8
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[8]=c->ps1[8]=RF32(ea);} // 804F06AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F06B0
  c->r[31]=c->r[3]|c->r[3]; // 804F06B4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 804F06B8
  fcmp(c,0,c->f[2],c->f[8]); // 804F06BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F06C0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 804F06C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F06C8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804F06CC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804F06D0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F06D4
  c->r[5]=R32(c->r[4]+0x00000014u); // 804F06D8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F06DC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F06E0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F06E4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[7]);} // 804F06E8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[6]);} // 804F06EC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[5]);} // 804F06F0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[4]);} // 804F06F4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 804F06F8
  W32(c->r[3]+0x00000030u,c->r[5]); // 804F06FC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 804F0700
  W32(c->r[3]+0x00000038u,c->r[0]); // 804F0704
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 804F0708
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804F070C
  if (!crb(c,0)) { goto L_804F0718; } // 804F0710
  goto L_804F071C; // 804F0714
L_804F0718:;
  c->f[8]=c->f[2]; // 804F0718
L_804F071C:;
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F071C
  fcmp(c,0,c->f[8],c->f[0]); // 804F0720
  c->r[5]=c->cr; // 804F0724
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0728
  c->r[0]=R32(c->r[4]+0x00000014u); // 804F072C
  c->r[5]=rotl(c->r[5],3)&0x00000001u; // 804F0730
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0734
  c->r[29]=c->r[5]^0x00000001u; // 804F0738
  W32(c->r[3]+0x000001FCu,c->r[0]); // 804F073C
  fcmp(c,0,c->f[0],c->f[1]); // 804F0740
  W32(c->r[3]+0x000000F8u,c->r[0]); // 804F0744
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[8]);} // 804F0748
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[8]);} // 804F074C
  if (!crb(c,1)) { goto L_804F0758; } // 804F0750
  goto L_804F076C; // 804F0754
L_804F0758:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0758
  fcmp(c,0,c->f[0],c->f[1]); // 804F075C
  if (!crb(c,0)) { goto L_804F0768; } // 804F0760
  goto L_804F076C; // 804F0764
L_804F0768:;
  c->f[1]=c->f[0]; // 804F0768
L_804F076C:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F076C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F0770
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0774
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[1]);} // 804F0778
  fcmp(c,0,c->f[0],c->f[2]); // 804F077C
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[1]);} // 804F0780
  W32(c->r[3]+0x00000208u,c->r[0]); // 804F0784
  W32(c->r[3]+0x00000104u,c->r[0]); // 804F0788
  if (!crb(c,0)) { goto L_804F0794; } // 804F078C
  goto L_804F0798; // 804F0790
L_804F0794:;
  c->f[2]=c->f[0]; // 804F0794
L_804F0798:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0798
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F079C
  {uint32_t ea=c->r[3]+0x0000020Cu; WF32(ea,c->f[2]);} // 804F07A0
  fcmp(c,0,c->f[0],c->f[1]); // 804F07A4
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[2]);} // 804F07A8
  if (!crb(c,1)) { goto L_804F07B4; } // 804F07AC
  goto L_804F07C8; // 804F07B0
L_804F07B4:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F07B4
  fcmp(c,0,c->f[0],c->f[1]); // 804F07B8
  if (!crb(c,0)) { goto L_804F07C4; } // 804F07BC
  goto L_804F07C8; // 804F07C0
L_804F07C4:;
  c->f[1]=c->f[0]; // 804F07C4
L_804F07C8:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F07C8
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F07CC
  {uint32_t ea=c->r[3]+0x00000210u; WF32(ea,c->f[1]);} // 804F07D0
  fcmp(c,0,c->f[0],c->f[2]); // 804F07D4
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[1]);} // 804F07D8
  if (!crb(c,1)) { goto L_804F07E4; } // 804F07DC
  goto L_804F07F8; // 804F07E0
L_804F07E4:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F07E4
  fcmp(c,0,c->f[0],c->f[2]); // 804F07E8
  if (!crb(c,0)) { goto L_804F07F4; } // 804F07EC
  goto L_804F07F8; // 804F07F0
L_804F07F4:;
  c->f[2]=c->f[0]; // 804F07F4
L_804F07F8:;
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F07F8
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F07FC
  {uint32_t ea=c->r[3]+0x00000214u; WF32(ea,c->f[2]);} // 804F0800
  fcmp(c,0,c->f[0],c->f[1]); // 804F0804
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[2]);} // 804F0808
  if (!crb(c,1)) { goto L_804F0814; } // 804F080C
  goto L_804F0828; // 804F0810
L_804F0814:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0814
  fcmp(c,0,c->f[0],c->f[1]); // 804F0818
  if (!crb(c,0)) { goto L_804F0824; } // 804F081C
  goto L_804F0828; // 804F0820
L_804F0824:;
  c->f[1]=c->f[0]; // 804F0824
L_804F0828:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0828
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F082C
  {uint32_t ea=c->r[3]+0x00000218u; WF32(ea,c->f[1]);} // 804F0830
  fcmp(c,0,c->f[0],c->f[2]); // 804F0834
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[1]);} // 804F0838
  if (!crb(c,1)) { goto L_804F0844; } // 804F083C
  goto L_804F0858; // 804F0840
L_804F0844:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0844
  fcmp(c,0,c->f[0],c->f[2]); // 804F0848
  if (!crb(c,0)) { goto L_804F0854; } // 804F084C
  goto L_804F0858; // 804F0850
L_804F0854:;
  c->f[2]=c->f[0]; // 804F0854
L_804F0858:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0858
  {uint32_t ea=c->r[2]+0x00001A50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F085C
  {uint32_t ea=c->r[3]+0x0000021Cu; WF32(ea,c->f[2]);} // 804F0860
  fcmp(c,0,c->f[0],c->f[1]); // 804F0864
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[2]);} // 804F0868
  if (!crb(c,1)) { goto L_804F0874; } // 804F086C
  goto L_804F0888; // 804F0870
L_804F0874:;
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0874
  fcmp(c,0,c->f[0],c->f[1]); // 804F0878
  if (!crb(c,0)) { goto L_804F0884; } // 804F087C
  goto L_804F0888; // 804F0880
L_804F0884:;
  c->f[1]=c->f[0]; // 804F0884
L_804F0888:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F0888
  c->r[4]=0u+0x00000000u; // 804F088C
  {uint32_t ea=c->r[2]+0x00001A54u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0890
  cmps(c,0,(int32_t)c->r[0],0); // 804F0894
  {uint32_t ea=c->r[3]+0x00000228u; WF32(ea,c->f[1]);} // 804F0898
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[1]);} // 804F089C
  W32(c->r[3]+0x0000011Cu,c->r[4]); // 804F08A0
  W32(c->r[3]+0x00000120u,c->r[4]); // 804F08A4
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 804F08A8
  W32(c->r[3]+0x00000220u,c->r[4]); // 804F08AC
  W32(c->r[3]+0x00000224u,c->r[4]); // 804F08B0
  {uint32_t ea=c->r[3]+0x0000022Cu; WF32(ea,c->f[0]);} // 804F08B4
  if (!crb(c,2)) { goto L_804F08C4; } // 804F08B8
  c->r[3]=0u+0x00000001u; // 804F08BC
  goto L_804F099C; // 804F08C0
L_804F08C4:;
  c->r[3]=c->r[3]+0x00000044u; // 804F08C4
  c->lr=0x804F08CCu; f_8039A1D4(c); // 804F08C8
  c->r[0]=c->r[3]+0x00000087u; // 804F08CC
  c->r[3]=c->r[31]+0x0000012Cu; // 804F08D0
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F08D4
  c->lr=0x804F08DCu; f_8039AED4(c); // 804F08D8
  c->r[0]=c->r[3]+0x00000087u; // 804F08DC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F08E0
  cmpu(c,0,c->r[3],c->r[30]); // 804F08E4
  if (!crb(c,0)) { goto L_804F08F0; } // 804F08E8
  c->r[3]=c->r[30]|c->r[30]; // 804F08EC
L_804F08F0:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 804F08F0
  cmps(c,0,(int32_t)c->r[4],0); // 804F08F4
  if (!crb(c,2)) { goto L_804F0904; } // 804F08F8
  c->r[0]=0u+0x00000000u; // 804F08FC
  goto L_804F090C; // 804F0900
L_804F0904:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F0904
  c->r[0]=c->r[0]-c->r[4]; // 804F0908
L_804F090C:;
  cmpu(c,0,c->r[3],c->r[0]); // 804F090C
  if (!crb(c,1)) { goto L_804F091C; } // 804F0910
  c->r[3]=0u+0x00000000u; // 804F0914
  goto L_804F099C; // 804F0918
L_804F091C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F091C
  if (crb(c,2)) { goto L_804F096C; } // 804F0920
  c->r[3]=c->r[31]+0x00000014u; // 804F0924
  c->r[4]=c->r[1]+0x0000000Cu; // 804F0928
  c->r[5]=c->r[1]+0x00000008u; // 804F092C
  c->lr=0x804F0934u; f_804E9E08(c); // 804F0930
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F0934
  cmps(c,0,(int32_t)c->r[0],1); // 804F0938
  if (!crb(c,2)) { goto L_804F094C; } // 804F093C
  c->r[3]=c->r[31]+0x0000012Cu; // 804F0940
  c->lr=0x804F0948u; f_8039B0CC(c); // 804F0944
  goto L_804F0954; // 804F0948
L_804F094C:;
  c->r[3]=c->r[31]+0x00000044u; // 804F094C
  c->lr=0x804F0954u; f_8039A3B0(c); // 804F0950
L_804F0954:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804F0954
  c->r[29]=c->r[3]|c->r[3]; // 804F0958
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F095C
  c->r[3]=c->r[31]+0x00000014u; // 804F0960
  c->lr=0x804F0968u; f_804E9E5C(c); // 804F0964
  goto L_804F0990; // 804F0968
L_804F096C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F096C
  cmps(c,0,(int32_t)c->r[0],1); // 804F0970
  if (!crb(c,2)) { goto L_804F0984; } // 804F0974
  c->r[3]=c->r[31]+0x0000012Cu; // 804F0978
  c->lr=0x804F0980u; f_8039B19C(c); // 804F097C
  goto L_804F098C; // 804F0980
L_804F0984:;
  c->r[3]=c->r[31]+0x00000044u; // 804F0984
  c->lr=0x804F098Cu; f_8039A480(c); // 804F0988
L_804F098C:;
  c->r[29]=c->r[3]|c->r[3]; // 804F098C
L_804F0990:;
  c->r[0]=0u-c->r[29]; // 804F0990
  c->r[0]=c->r[0]|c->r[29]; // 804F0994
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F0998
L_804F099C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F099C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F09A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F09A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F09A8
  c->lr=c->r[0]; // 804F09AC
  c->r[1]=c->r[1]+0x00000020u; // 804F09B0
  return; // 804F09B4
}

// fn_804F09B8
void f_804F09B8(Ctx* __restrict c) {
  trace_call(0x804F09B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F09B8
  c->r[0]=c->lr; // 804F09BC
  c->r[4]=c->r[3]|c->r[3]; // 804F09C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F09C4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F09C8
  cmps(c,0,(int32_t)c->r[0],0); // 804F09CC
  if (crb(c,2)) { goto L_804F0A48; } // 804F09D0
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 804F09D4
  c->r[3]=R32(c->r[3]+0x00000010u); // 804F09D8
  c->r[0]=cntlz(c->r[0]); // 804F09DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804F09E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804F09E4
  if (!crb(c,2)) { goto L_804F0A48; } // 804F09E8
  cmps(c,0,(int32_t)c->r[3],1); // 804F09EC
  if (!crb(c,2)) { goto L_804F0A24; } // 804F09F0
  c->r[0]=R32(c->r[5]+0x00000000u); // 804F09F4
  c->r[3]=c->r[1]+0x00000018u; // 804F09F8
  c->r[4]=c->r[4]+0x0000012Cu; // 804F09FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F0A00
  c->r[0]=R32(c->r[5]+0x00000004u); // 804F0A04
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F0A08
  c->r[0]=R32(c->r[5]+0x00000008u); // 804F0A0C
  W32(c->r[1]+0x00000020u,c->r[0]); // 804F0A10
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804F0A14
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0A18
  c->lr=0x804F0A20u; f_8039B2A4(c); // 804F0A1C
  goto L_804F0A48; // 804F0A20
L_804F0A24:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804F0A24
  c->r[3]=c->r[1]+0x00000008u; // 804F0A28
  c->r[4]=c->r[4]+0x00000044u; // 804F0A2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F0A30
  c->r[0]=R32(c->r[5]+0x00000004u); // 804F0A34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F0A38
  c->r[0]=R32(c->r[5]+0x00000008u); // 804F0A3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804F0A40
  c->lr=0x804F0A48u; f_8039A588(c); // 804F0A44
L_804F0A48:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F0A48
  c->lr=c->r[0]; // 804F0A4C
  c->r[1]=c->r[1]+0x00000030u; // 804F0A50
  return; // 804F0A54
}

// fn_804F0A58
void f_804F0A58(Ctx* __restrict c) {
  trace_call(0x804F0A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0A58
  c->r[0]=c->lr; // 804F0A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F0A64
  c->r[31]=c->r[3]|c->r[3]; // 804F0A68
  c->lr=0x804F0A70u; f_804E5278(c); // 804F0A6C
  c->lr=0x804F0A74u; f_804E5A84(c); // 804F0A70
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804F0A74
  c->r[0]=R32(c->r[31]+0x00000010u); // 804F0A78
  c->r[3]=cntlz(c->r[3]); // 804F0A7C
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 804F0A80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804F0A84
  if (crb(c,2)) { goto L_804F0AB4; } // 804F0A88
  c->r[12]=R32(c->r[31]+0x00000000u); // 804F0A8C
  c->r[3]=c->r[31]|c->r[31]; // 804F0A90
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F0A94
  c->ctr=c->r[12]; // 804F0A98
  if (true) { c->lr=0x804F0AA0u; dispatch(c,c->ctr); } // 804F0A9C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804F0AA0
  c->r[3]=c->r[31]|c->r[31]; // 804F0AA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F0AA8
  c->ctr=c->r[12]; // 804F0AAC
  if (true) { c->lr=0x804F0AB4u; dispatch(c,c->ctr); } // 804F0AB0
L_804F0AB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F0AB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F0AB8
  c->lr=c->r[0]; // 804F0ABC
  c->r[1]=c->r[1]+0x00000010u; // 804F0AC0
  return; // 804F0AC4
}

// CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
void f_804F0AC8(Ctx* __restrict c) {
  trace_call(0x804F0AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0AC8
  c->r[0]=c->lr; // 804F0ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F0AD4
  c->r[31]=c->r[3]|c->r[3]; // 804F0AD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F0ADC
  c->r[30]=c->r[6]|c->r[6]; // 804F0AE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F0AE4
  c->r[29]=c->r[5]|c->r[5]; // 804F0AE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F0AEC
  c->r[28]=c->r[4]|c->r[4]; // 804F0AF0
  c->lr=0x804F0AF8u; f_8037BBA4(c); // 804F0AF4
  c->r[0]=c->r[28]+0x00000003u; // 804F0AF8
  c->r[4]=c->r[30]+0x00000003u; // 804F0AFC
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804F0B00
  c->r[7]=0u+0x00000000u; // 804F0B04
  c->r[0]=c->r[6]-c->r[28]; // 804F0B08
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804F0B0C
  c->r[0]=c->r[29]-c->r[0]; // 804F0B10
  c->r[30]=divwu(c->r[0],c->r[4]); cr0(c,c->r[30]); // 804F0B14
  if (crb(c,2)) { goto L_804F0BE4; } // 804F0B18
  cmpu(c,0,c->r[30],0x00000008u); // 804F0B1C
  c->r[5]=c->r[30]+0xFFFFFFF8u; // 804F0B20
  if (!crb(c,1)) { goto L_804F0BC0; } // 804F0B24
  c->r[0]=c->r[5]+0x00000007u; // 804F0B28
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804F0B2C
  c->ctr=c->r[0]; // 804F0B30
  cmpu(c,0,c->r[5],0x00000000u); // 804F0B34
  if (!crb(c,1)) { goto L_804F0BC0; } // 804F0B38
L_804F0B3C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F0B3C
  c->r[8]=c->r[6]|c->r[6]; // 804F0B40
  c->r[7]=c->r[7]+0x00000008u; // 804F0B44
  W32(c->r[6]+0x00000000u,c->r[0]); // 804F0B48
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B4C
  c->r[6]=c->r[6]+c->r[4]; // 804F0B50
  c->r[5]=c->r[6]|c->r[6]; // 804F0B54
  W32(c->r[6]+0x00000000u,c->r[8]); // 804F0B58
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B5C
  c->r[6]=c->r[6]+c->r[4]; // 804F0B60
  c->r[0]=c->r[6]|c->r[6]; // 804F0B64
  W32(c->r[6]+0x00000000u,c->r[5]); // 804F0B68
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B6C
  c->r[6]=c->r[6]+c->r[4]; // 804F0B70
  c->r[5]=c->r[6]|c->r[6]; // 804F0B74
  W32(c->r[6]+0x00000000u,c->r[0]); // 804F0B78
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B7C
  c->r[6]=c->r[6]+c->r[4]; // 804F0B80
  c->r[0]=c->r[6]|c->r[6]; // 804F0B84
  W32(c->r[6]+0x00000000u,c->r[5]); // 804F0B88
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B8C
  c->r[6]=c->r[6]+c->r[4]; // 804F0B90
  c->r[5]=c->r[6]|c->r[6]; // 804F0B94
  W32(c->r[6]+0x00000000u,c->r[0]); // 804F0B98
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0B9C
  c->r[6]=c->r[6]+c->r[4]; // 804F0BA0
  c->r[0]=c->r[6]|c->r[6]; // 804F0BA4
  W32(c->r[6]+0x00000000u,c->r[5]); // 804F0BA8
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0BAC
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[0]); c->r[6]=ea;} // 804F0BB0
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0BB4
  c->r[6]=c->r[6]+c->r[4]; // 804F0BB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F0B3C; } // 804F0BBC
L_804F0BC0:;
  c->r[0]=c->r[30]-c->r[7]; // 804F0BC0
  c->ctr=c->r[0]; // 804F0BC4
  cmpu(c,0,c->r[7],c->r[30]); // 804F0BC8
  if (!crb(c,0)) { goto L_804F0BE4; } // 804F0BCC
L_804F0BD0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F0BD0
  W32(c->r[6]+0x00000000u,c->r[0]); // 804F0BD4
  W32(c->r[31]+0x00000000u,c->r[6]); // 804F0BD8
  c->r[6]=c->r[6]+c->r[4]; // 804F0BDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F0BD0; } // 804F0BE0
L_804F0BE4:;
  c->lr=0x804F0BE8u; f_8037BBCC(c); // 804F0BE4
  c->r[3]=c->r[30]|c->r[30]; // 804F0BE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F0BEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F0BF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F0BF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F0BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F0BFC
  c->lr=c->r[0]; // 804F0C00
  c->r[1]=c->r[1]+0x00000020u; // 804F0C04
  return; // 804F0C08
}

// DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
void f_804F0C0C(Ctx* __restrict c) {
  trace_call(0x804F0C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0C0C
  c->r[0]=c->lr; // 804F0C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F0C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F0C18
  c->r[31]=c->r[5]|c->r[5]; // 804F0C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F0C20
  c->r[30]=c->r[4]|c->r[4]; // 804F0C24
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F0C28
  c->r[29]=c->r[3]|c->r[3]; // 804F0C2C
  c->lr=0x804F0C34u; f_8037BBA4(c); // 804F0C30
  c->r[5]=R32(c->r[29]+0x00000000u); // 804F0C34
  c->r[4]=c->r[30]+c->r[31]; // 804F0C38
  goto L_804F0C64; // 804F0C3C
L_804F0C40:;
  cmpu(c,0,c->r[30],c->r[5]); // 804F0C40
  if (crb(c,1)) { goto L_804F0C5C; } // 804F0C44
  cmpu(c,0,c->r[5],c->r[4]); // 804F0C48
  if (!crb(c,0)) { goto L_804F0C5C; } // 804F0C4C
  c->r[0]=R32(c->r[5]+0x00000000u); // 804F0C50
  W32(c->r[29]+0x00000000u,c->r[0]); // 804F0C54
  goto L_804F0C60; // 804F0C58
L_804F0C5C:;
  c->r[29]=c->r[5]|c->r[5]; // 804F0C5C
L_804F0C60:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 804F0C60
L_804F0C64:;
  cmps(c,0,(int32_t)c->r[5],0); // 804F0C64
  if (!crb(c,2)) { IRQCHK(c); goto L_804F0C40; } // 804F0C68
  c->lr=0x804F0C70u; f_8037BBCC(c); // 804F0C6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F0C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F0C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F0C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F0C7C
  c->lr=c->r[0]; // 804F0C80
  c->r[1]=c->r[1]+0x00000020u; // 804F0C84
  return; // 804F0C88
}

// CountImpl__Q44nw4r3snd6detail8PoolImplCFv
void f_804F0C8C(Ctx* __restrict c) {
  trace_call(0x804F0C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0C8C
  c->r[0]=c->lr; // 804F0C90
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0C94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F0C98
  c->r[31]=c->r[3]|c->r[3]; // 804F0C9C
  c->lr=0x804F0CA4u; f_8037BBA4(c); // 804F0CA0
  c->r[4]=R32(c->r[31]+0x00000000u); // 804F0CA4
  c->r[31]=0u+0x00000000u; // 804F0CA8
  goto L_804F0CB8; // 804F0CAC
L_804F0CB0:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804F0CB0
  c->r[31]=c->r[31]+0x00000001u; // 804F0CB4
L_804F0CB8:;
  cmps(c,0,(int32_t)c->r[4],0); // 804F0CB8
  if (!crb(c,2)) { IRQCHK(c); goto L_804F0CB0; } // 804F0CBC
  c->lr=0x804F0CC4u; f_8037BBCC(c); // 804F0CC0
  c->r[3]=c->r[31]|c->r[31]; // 804F0CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F0CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F0CCC
  c->lr=c->r[0]; // 804F0CD0
  c->r[1]=c->r[1]+0x00000010u; // 804F0CD4
  return; // 804F0CD8
}

// AllocImpl__Q44nw4r3snd6detail8PoolImplFv
void f_804F0CDC(Ctx* __restrict c) {
  trace_call(0x804F0CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0CDC
  c->r[0]=c->lr; // 804F0CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0CE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F0CE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F0CEC
  c->r[30]=c->r[3]|c->r[3]; // 804F0CF0
  c->lr=0x804F0CF8u; f_8037BBA4(c); // 804F0CF4
  c->r[31]=R32(c->r[30]+0x00000000u); // 804F0CF8
  cmps(c,0,(int32_t)c->r[31],0); // 804F0CFC
  if (!crb(c,2)) { goto L_804F0D10; } // 804F0D00
  c->lr=0x804F0D08u; f_8037BBCC(c); // 804F0D04
  c->r[3]=0u+0x00000000u; // 804F0D08
  goto L_804F0D20; // 804F0D0C
L_804F0D10:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F0D10
  W32(c->r[30]+0x00000000u,c->r[0]); // 804F0D14
  c->lr=0x804F0D1Cu; f_8037BBCC(c); // 804F0D18
  c->r[3]=c->r[31]|c->r[31]; // 804F0D1C
L_804F0D20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F0D20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F0D24
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F0D28
  c->lr=c->r[0]; // 804F0D2C
  c->r[1]=c->r[1]+0x00000010u; // 804F0D30
  return; // 804F0D34
}

// FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
void f_804F0D38(Ctx* __restrict c) {
  trace_call(0x804F0D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0D38
  c->r[0]=c->lr; // 804F0D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F0D44
  c->r[31]=c->r[4]|c->r[4]; // 804F0D48
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F0D4C
  c->r[30]=c->r[3]|c->r[3]; // 804F0D50
  c->lr=0x804F0D58u; f_8037BBA4(c); // 804F0D54
  c->r[0]=R32(c->r[30]+0x00000000u); // 804F0D58
  W32(c->r[31]+0x00000000u,c->r[0]); // 804F0D5C
  W32(c->r[30]+0x00000000u,c->r[31]); // 804F0D60
  c->lr=0x804F0D68u; f_8037BBCC(c); // 804F0D64
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F0D68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F0D6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F0D70
  c->lr=c->r[0]; // 804F0D74
  c->r[1]=c->r[1]+0x00000010u; // 804F0D78
  return; // 804F0D7C
}

// Init__Q44nw4r3snd6detail8LfoParamFv
void f_804F0D80(Ctx* __restrict c) {
  trace_call(0x804F0D80u);
  {uint32_t ea=c->r[2]+0x00001A58u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0D80
  c->r[4]=0u+0x00000001u; // 804F0D84
  {uint32_t ea=c->r[2]+0x00001A5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0D88
  c->r[0]=0u+0x00000000u; // 804F0D8C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 804F0D90
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 804F0D94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804F0D98
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F0D9C
  return; // 804F0DA0
}

// Reset__Q44nw4r3snd6detail3LfoFv
void f_804F0DA4(Ctx* __restrict c) {
  trace_call(0x804F0DA4u);
  {uint32_t ea=c->r[2]+0x00001A58u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0DA4
  c->r[0]=0u+0x00000000u; // 804F0DA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F0DAC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 804F0DB0
  return; // 804F0DB4
}

// Update__Q44nw4r3snd6detail3LfoFi
void f_804F0DB8(Ctx* __restrict c) {
  trace_call(0x804F0DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0DB8
  c->r[6]=R32(c->r[3]+0x00000008u); // 804F0DBC
  c->r[5]=R32(c->r[3]+0x00000010u); // 804F0DC0
  cmpu(c,0,c->r[5],c->r[6]); // 804F0DC4
  if (!crb(c,0)) { goto L_804F0DEC; } // 804F0DC8
  c->r[0]=c->r[5]+c->r[4]; // 804F0DCC
  cmpu(c,0,c->r[0],c->r[6]); // 804F0DD0
  if (crb(c,1)) { goto L_804F0DE0; } // 804F0DD4
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F0DD8
  goto L_804F0E4C; // 804F0DDC
L_804F0DE0:;
  c->r[0]=c->r[6]-c->r[5]; // 804F0DE0
  W32(c->r[3]+0x00000010u,c->r[6]); // 804F0DE4
  c->r[4]=c->r[4]-c->r[0]; // 804F0DE8
L_804F0DEC:;
  c->r[0]=0u+0x43300000u; // 804F0DEC
  c->r[4]=c->r[4]^0x80000000u; // 804F0DF0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804F0DF4
  {uint32_t ea=c->r[2]+0x00001A68u; c->f[4]=RF64(ea);} // 804F0DF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F0DFC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0E00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804F0E04
  {uint32_t ea=c->r[2]+0x00001A60u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0E08
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804F0E0C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0E10
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F0E14
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 804F0E18
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 804F0E1C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 804F0E20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804F0E24
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804F0E28
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804F0E2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F0E30
  c->r[0]=c->r[0]^0x80000000u; // 804F0E34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F0E38
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 804F0E3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804F0E40
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804F0E44
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 804F0E48
L_804F0E4C:;
  c->r[1]=c->r[1]+0x00000020u; // 804F0E4C
  return; // 804F0E50
}

// GetValue__Q44nw4r3snd6detail3LfoCFv
void f_804F0E54(Ctx* __restrict c) {
  trace_call(0x804F0E54u);
  {uint32_t ea=c->r[2]+0x00001A58u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0E54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0E58
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0E5C
  fcmp(c,0,c->f[1],c->f[0]); // 804F0E60
  if (!crb(c,2)) { goto L_804F0E6C; } // 804F0E64
  goto L_804F0F68; // 804F0E68
L_804F0E6C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 804F0E6C
  c->r[0]=R32(c->r[3]+0x00000008u); // 804F0E70
  cmpu(c,0,c->r[4],c->r[0]); // 804F0E74
  if (!crb(c,0)) { goto L_804F0E80; } // 804F0E78
  goto L_804F0F68; // 804F0E7C
L_804F0E80:;
  {uint32_t ea=c->r[2]+0x00001A74u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F0E80
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F0E84
  {uint32_t ea=c->r[2]+0x00001A70u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0E88
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804F0E8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F0E90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804F0E94
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 804F0E98
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 804F0E9C
  cmps(c,0,(int32_t)c->r[5],32); // 804F0EA0
  if (!crb(c,0)) { goto L_804F0EBC; } // 804F0EA4
  c->r[4]=0u+0x806B0000u; // 804F0EA8
  c->r[4]=c->r[4]+0xFFFFD648u; // 804F0EAC
  c->r[0]=R8(c->r[4]+c->r[5]); // 804F0EB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F0EB4
  goto L_804F0F20; // 804F0EB8
L_804F0EBC:;
  cmps(c,0,(int32_t)c->r[5],64); // 804F0EBC
  if (!crb(c,0)) { goto L_804F0EE0; } // 804F0EC0
  c->r[0]=c->r[5]+0xFFFFFFE0u; // 804F0EC4
  c->r[4]=0u+0x806B0000u; // 804F0EC8
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 804F0ECC
  c->r[4]=c->r[4]+0xFFFFD648u; // 804F0ED0
  c->r[0]=R8(c->r[4]+c->r[0]); // 804F0ED4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F0ED8
  goto L_804F0F20; // 804F0EDC
L_804F0EE0:;
  cmps(c,0,(int32_t)c->r[5],96); // 804F0EE0
  if (!crb(c,0)) { goto L_804F0F04; } // 804F0EE4
  c->r[4]=0u+0x806B0000u; // 804F0EE8
  c->r[4]=c->r[4]+0xFFFFD648u; // 804F0EEC
  c->r[4]=c->r[5]+c->r[4]; // 804F0EF0
  c->r[0]=R8(c->r[4]+0xFFFFFFC0u); // 804F0EF4
  c->r[0]=0u-c->r[0]; // 804F0EF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F0EFC
  goto L_804F0F20; // 804F0F00
L_804F0F04:;
  c->r[0]=c->r[5]+0xFFFFFFA0u; // 804F0F04
  c->r[4]=0u+0x806B0000u; // 804F0F08
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 804F0F0C
  c->r[4]=c->r[4]+0xFFFFD648u; // 804F0F10
  c->r[0]=R8(c->r[4]+c->r[0]); // 804F0F14
  c->r[0]=0u-c->r[0]; // 804F0F18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F0F1C
L_804F0F20:;
  c->r[4]=0u+0x43300000u; // 804F0F20
  c->r[0]=c->r[0]^0x80000000u; // 804F0F24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F0F28
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F0F2C
  W32(c->r[1]+0x00000008u,c->r[4]); // 804F0F30
  {uint32_t ea=c->r[2]+0x00001A68u; c->f[2]=RF64(ea);} // 804F0F34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F0F38
  {uint32_t ea=c->r[2]+0x00001A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F0F3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F0F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F0F44
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F0F48
  W32(c->r[1]+0x00000010u,c->r[4]); // 804F0F4C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 804F0F50
  {uint32_t ea=c->r[2]+0x00001A80u; c->f[2]=RF64(ea);} // 804F0F54
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804F0F58
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 804F0F5C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804F0F60
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804F0F64
L_804F0F68:;
  c->r[1]=c->r[1]+0x00000020u; // 804F0F68
  return; // 804F0F6C
}

// fn_804F0F70
void f_804F0F70(Ctx* __restrict c) {
  trace_call(0x804F0F70u);
  f_804F4080(c); return; // 804F0F70
}

// fn_804F0F74
void f_804F0F74(Ctx* __restrict c) {
  trace_call(0x804F0F74u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F0F74
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F0F78
  c->ctr=c->r[12]; // 804F0F7C
  if (true) { dispatch(c,c->ctr); return; } // 804F0F80
}

// fn_804F0F84
void f_804F0F84(Ctx* __restrict c) {
  trace_call(0x804F0F84u);
  return; // 804F0F84
}

// fn_804F0F88
void f_804F0F88(Ctx* __restrict c) {
  trace_call(0x804F0F88u);
  return; // 804F0F88
}

// fn_804F0F8C
void f_804F0F8C(Ctx* __restrict c) {
  trace_call(0x804F0F8Cu);
  c->r[3]=R8(c->r[3]+0x000000EEu); // 804F0F8C
  return; // 804F0F90
}

// fn_804F0F94
void f_804F0F94(Ctx* __restrict c) {
  trace_call(0x804F0F94u);
  c->r[3]=R8(c->r[3]+0x000000EDu); // 804F0F94
  return; // 804F0F98
}

// fn_804F0F9C
void f_804F0F9C(Ctx* __restrict c) {
  trace_call(0x804F0F9Cu);
  c->r[3]=R8(c->r[3]+0x000000ECu); // 804F0F9C
  return; // 804F0FA0
}

// fn_804F0FA4
void f_804F0FA4(Ctx* __restrict c) {
  trace_call(0x804F0FA4u);
  c->r[3]=c->r[3]+0xFFFFFF2Cu; // 804F0FA4
  f_804F0F84(c); return; // 804F0FA8
}

// fn_804F0FAC
void f_804F0FAC(Ctx* __restrict c) {
  trace_call(0x804F0FACu);
  c->r[3]=c->r[3]+0xFFFFFF2Cu; // 804F0FAC
  f_804F3D20(c); return; // 804F0FB0
}

// fn_804F0FB4
void f_804F0FB4(Ctx* __restrict c) {
  trace_call(0x804F0FB4u);
  c->r[3]=c->r[3]+0xFFFFFF20u; // 804F0FB4
  f_804F0F74(c); return; // 804F0FB8
}

// fn_804F0FBC
void f_804F0FBC(Ctx* __restrict c) {
  trace_call(0x804F0FBCu);
  c->r[3]=c->r[3]+0xFFFFFF20u; // 804F0FBC
  f_804F0F70(c); return; // 804F0FC0
}

// fn_804F0FC4
void f_804F0FC4(Ctx* __restrict c) {
  trace_call(0x804F0FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F0FC4
  c->r[0]=c->lr; // 804F0FC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F0FCC
  c->r[11]=c->r[1]+0x00000030u; // 804F0FD0
  c->lr=0x804F0FD8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F0FD4
  c->r[7]=R32(c->r[4]+0x00000020u); // 804F0FD8
  c->r[25]=c->r[3]|c->r[3]; // 804F0FDC
  c->r[31]=R32(c->r[4]+0x000000C0u); // 804F0FE0
  c->r[26]=c->r[4]|c->r[4]; // 804F0FE4
  c->r[6]=c->r[7]+0x00000001u; // 804F0FE8
  c->r[27]=c->r[5]|c->r[5]; // 804F0FEC
  W32(c->r[4]+0x00000020u,c->r[6]); // 804F0FF0
  c->r[30]=0u+0x00000000u; // 804F0FF4
  c->r[3]=0u+0x00000000u; // 804F0FF8
  c->r[29]=0u+0x00000001u; // 804F0FFC
  c->r[28]=R8(c->r[7]+0x00000000u); // 804F1000
  cmpu(c,0,c->r[28],0x000000A2u); // 804F1004
  if (!crb(c,2)) { goto L_804F1028; } // 804F1008
  c->r[0]=c->r[6]+0x00000001u; // 804F100C
  c->r[5]=R8(c->r[4]+0x00000024u); // 804F1010
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F1014
  c->r[0]=0u-c->r[5]; // 804F1018
  c->r[0]=c->r[0]|c->r[5]; // 804F101C
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F1020
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 804F1024
L_804F1028:;
  cmpu(c,0,c->r[28],0x000000A3u); // 804F1028
  if (!crb(c,2)) { goto L_804F1048; } // 804F102C
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F1030
  c->r[30]=0u+0x00000002u; // 804F1034
  c->r[5]=c->r[6]+0x00000001u; // 804F1038
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F103C
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F1040
  goto L_804F1084; // 804F1044
L_804F1048:;
  cmpu(c,0,c->r[28],0x000000A4u); // 804F1048
  if (!crb(c,2)) { goto L_804F1068; } // 804F104C
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F1050
  c->r[30]=0u+0x00000004u; // 804F1054
  c->r[5]=c->r[6]+0x00000001u; // 804F1058
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F105C
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F1060
  goto L_804F1084; // 804F1064
L_804F1068:;
  cmpu(c,0,c->r[28],0x000000A5u); // 804F1068
  if (!crb(c,2)) { goto L_804F1084; } // 804F106C
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F1070
  c->r[30]=0u+0x00000005u; // 804F1074
  c->r[5]=c->r[6]+0x00000001u; // 804F1078
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F107C
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F1080
L_804F1084:;
  cmpu(c,0,c->r[28],0x000000A0u); // 804F1084
  if (!crb(c,2)) { goto L_804F10A8; } // 804F1088
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F108C
  c->r[0]=0u+0x00000004u; // 804F1090
  c->r[3]=0u+0x00000001u; // 804F1094
  c->r[5]=c->r[6]+0x00000001u; // 804F1098
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F109C
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F10A0
  goto L_804F10C8; // 804F10A4
L_804F10A8:;
  cmpu(c,0,c->r[28],0x000000A1u); // 804F10A8
  if (!crb(c,2)) { goto L_804F10C8; } // 804F10AC
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F10B0
  c->r[0]=0u+0x00000005u; // 804F10B4
  c->r[3]=0u+0x00000001u; // 804F10B8
  c->r[5]=c->r[6]+0x00000001u; // 804F10BC
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F10C0
  c->r[28]=R8(c->r[6]+0x00000000u); // 804F10C4
L_804F10C8:;
  c->r[5]=rotl(c->r[28],0)&0x00000080u; cr0(c,c->r[5]); // 804F10C8
  if (!crb(c,2)) { goto L_804F11A0; } // 804F10CC
  c->r[8]=R32(c->r[4]+0x00000020u); // 804F10D0
  cmps(c,0,(int32_t)c->r[3],0); // 804F10D4
  c->r[3]=c->r[25]|c->r[25]; // 804F10D8
  c->r[5]=c->r[31]|c->r[31]; // 804F10DC
  c->r[7]=c->r[8]+0x00000001u; // 804F10E0
  c->r[6]=c->r[26]|c->r[26]; // 804F10E4
  {uint32_t ea=c->r[4]+0x00000020u; W32(ea,c->r[7]); c->r[4]=ea;} // 804F10E8
  c->r[7]=0u+0x00000003u; // 804F10EC
  c->r[24]=R8(c->r[8]+0x00000000u); // 804F10F0
  if (crb(c,2)) { goto L_804F10FC; } // 804F10F4
  c->r[7]=c->r[0]|c->r[0]; // 804F10F8
L_804F10FC:;
  c->lr=0x804F1100u; f_804F1FC0(c); // 804F10FC
  c->r[0]=R8(c->r[26]+0x00000087u); // 804F1100
  cmps(c,0,(int32_t)c->r[29],0); // 804F1104
  c->r[23]=c->r[3]|c->r[3]; // 804F1108
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F110C
  c->r[3]=c->r[28]+c->r[0]; // 804F1110
  if (!crb(c,2)) { goto L_804F1120; } // 804F1114
  c->r[3]=0u+0x00000000u; // 804F1118
  goto L_804F167C; // 804F111C
L_804F1120:;
  cmps(c,0,(int32_t)c->r[3],127); // 804F1120
  if (!crb(c,1)) { goto L_804F1130; } // 804F1124
  c->r[5]=0u+0x0000007Fu; // 804F1128
  goto L_804F1138; // 804F112C
L_804F1130:;
  c->r[0]=sraw(c,c->r[3],31); // 804F1130
  c->r[5]=c->r[3]&~c->r[0]; // 804F1134
L_804F1138:;
  c->r[0]=R8(c->r[26]+0x00000048u); // 804F1138
  cmps(c,0,(int32_t)c->r[0],0); // 804F113C
  if (!crb(c,2)) { goto L_804F117C; } // 804F1140
  cmps(c,0,(int32_t)c->r[27],0); // 804F1144
  if (crb(c,2)) { goto L_804F117C; } // 804F1148
  cmps(c,0,(int32_t)c->r[23],0); // 804F114C
  c->r[3]=c->r[25]|c->r[25]; // 804F1150
  c->r[4]=c->r[26]|c->r[26]; // 804F1154
  c->r[6]=c->r[24]|c->r[24]; // 804F1158
  c->r[7]=0u+0xFFFFFFFFu; // 804F115C
  if (!crb(c,1)) { goto L_804F1168; } // 804F1160
  c->r[7]=c->r[23]|c->r[23]; // 804F1164
L_804F1168:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F1168
  c->r[8]=R8(c->r[26]+0x00000026u); // 804F116C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F1170
  c->ctr=c->r[12]; // 804F1174
  if (true) { c->lr=0x804F117Cu; dispatch(c,c->ctr); } // 804F1178
L_804F117C:;
  c->r[0]=R8(c->r[26]+0x00000025u); // 804F117C
  cmps(c,0,(int32_t)c->r[0],0); // 804F1180
  if (crb(c,2)) { goto L_804F1678; } // 804F1184
  cmps(c,0,(int32_t)c->r[23],0); // 804F1188
  W32(c->r[26]+0x00000044u,c->r[23]); // 804F118C
  if (!crb(c,2)) { goto L_804F1678; } // 804F1190
  c->r[0]=0u+0x00000001u; // 804F1194
  W8(c->r[26]+0x0000004Au,c->r[0]); // 804F1198
  goto L_804F1678; // 804F119C
L_804F11A0:;
  c->r[5]=rotl(c->r[28],0)&0x000000F0u; // 804F11A0
  c->r[23]=0u+0x00000000u; // 804F11A4
  cmps(c,0,(int32_t)c->r[5],192); // 804F11A8
  c->r[27]=0u+0x00000000u; // 804F11AC
  if (crb(c,2)) { goto L_804F13F0; } // 804F11B0
  if (!crb(c,0)) { goto L_804F11E8; } // 804F11B4
  cmps(c,0,(int32_t)c->r[5],160); // 804F11B8
  if (crb(c,2)) { goto L_804F1678; } // 804F11BC
  if (!crb(c,0)) { goto L_804F11DC; } // 804F11C0
  cmps(c,0,(int32_t)c->r[5],144); // 804F11C4
  if (crb(c,2)) { goto L_804F148C; } // 804F11C8
  if (!crb(c,0)) { goto L_804F1678; } // 804F11CC
  cmps(c,0,(int32_t)c->r[5],128); // 804F11D0
  if (crb(c,2)) { goto L_804F120C; } // 804F11D4
  goto L_804F1678; // 804F11D8
L_804F11DC:;
  cmps(c,0,(int32_t)c->r[5],176); // 804F11DC
  if (crb(c,2)) { goto L_804F13F0; } // 804F11E0
  goto L_804F1678; // 804F11E4
L_804F11E8:;
  cmps(c,0,(int32_t)c->r[5],224); // 804F11E8
  if (crb(c,2)) { goto L_804F14BC; } // 804F11EC
  if (!crb(c,0)) { goto L_804F1200; } // 804F11F0
  cmps(c,0,(int32_t)c->r[5],208); // 804F11F4
  if (crb(c,2)) { goto L_804F13F0; } // 804F11F8
  goto L_804F1678; // 804F11FC
L_804F1200:;
  cmps(c,0,(int32_t)c->r[5],240); // 804F1200
  if (crb(c,2)) { goto L_804F1510; } // 804F1204
  goto L_804F1678; // 804F1208
L_804F120C:;
  cmps(c,0,(int32_t)c->r[28],136); // 804F120C
  if (crb(c,2)) { goto L_804F12C8; } // 804F1210
  if (!crb(c,0)) { goto L_804F1230; } // 804F1214
  cmps(c,0,(int32_t)c->r[28],129); // 804F1218
  if (crb(c,2)) { goto L_804F1274; } // 804F121C
  if (!crb(c,0)) { goto L_804F1678; } // 804F1220
  cmps(c,0,(int32_t)c->r[28],128); // 804F1224
  if (!crb(c,0)) { goto L_804F1240; } // 804F1228
  goto L_804F1678; // 804F122C
L_804F1230:;
  cmps(c,0,(int32_t)c->r[28],138); // 804F1230
  if (crb(c,2)) { goto L_804F1390; } // 804F1234
  if (!crb(c,0)) { goto L_804F1678; } // 804F1238
  goto L_804F1330; // 804F123C
L_804F1240:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F1240
  c->r[3]=c->r[25]|c->r[25]; // 804F1244
  c->r[5]=c->r[31]|c->r[31]; // 804F1248
  c->r[6]=c->r[26]|c->r[26]; // 804F124C
  c->r[7]=0u+0x00000003u; // 804F1250
  c->r[4]=c->r[4]+0x00000020u; // 804F1254
  if (crb(c,2)) { goto L_804F1260; } // 804F1258
  c->r[7]=c->r[0]|c->r[0]; // 804F125C
L_804F1260:;
  c->lr=0x804F1264u; f_804F1FC0(c); // 804F1260
  cmps(c,0,(int32_t)c->r[29],0); // 804F1264
  if (crb(c,2)) { goto L_804F1678; } // 804F1268
  W32(c->r[26]+0x00000044u,c->r[3]); // 804F126C
  goto L_804F1678; // 804F1270
L_804F1274:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F1274
  c->r[3]=c->r[25]|c->r[25]; // 804F1278
  c->r[5]=c->r[31]|c->r[31]; // 804F127C
  c->r[6]=c->r[26]|c->r[26]; // 804F1280
  c->r[7]=0u+0x00000003u; // 804F1284
  c->r[4]=c->r[4]+0x00000020u; // 804F1288
  if (crb(c,2)) { goto L_804F1294; } // 804F128C
  c->r[7]=c->r[0]|c->r[0]; // 804F1290
L_804F1294:;
  c->lr=0x804F1298u; f_804F1FC0(c); // 804F1294
  cmps(c,0,(int32_t)c->r[29],0); // 804F1298
  c->r[6]=c->r[3]|c->r[3]; // 804F129C
  if (crb(c,2)) { goto L_804F1678; } // 804F12A0
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F12A4
  c->r[3]=c->r[25]|c->r[25]; // 804F12A8
  c->r[4]=c->r[26]|c->r[26]; // 804F12AC
  c->r[5]=c->r[28]|c->r[28]; // 804F12B0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F12B4
  c->r[7]=0u+0x00000000u; // 804F12B8
  c->ctr=c->r[12]; // 804F12BC
  if (true) { c->lr=0x804F12C4u; dispatch(c,c->ctr); } // 804F12C0
  goto L_804F1678; // 804F12C4
L_804F12C8:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F12C8
  cmps(c,0,(int32_t)c->r[29],0); // 804F12CC
  c->r[5]=c->r[6]+0x00000001u; // 804F12D0
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F12D4
  c->r[7]=c->r[5]+0x00000001u; // 804F12D8
  c->r[3]=c->r[7]+0x00000001u; // 804F12DC
  c->r[6]=R8(c->r[6]+0x00000000u); // 804F12E0
  c->r[0]=c->r[3]+0x00000001u; // 804F12E4
  W32(c->r[4]+0x00000020u,c->r[7]); // 804F12E8
  c->r[5]=R8(c->r[5]+0x00000000u); // 804F12EC
  W32(c->r[4]+0x00000020u,c->r[3]); // 804F12F0
  c->r[7]=R8(c->r[7]+0x00000000u); // 804F12F4
  c->r[7]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 804F12F8
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F12FC
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 804F1300
  c->r[0]=R8(c->r[3]+0x00000000u); // 804F1304
  c->r[7]=c->r[7]|c->r[0]; // 804F1308
  if (crb(c,2)) { goto L_804F1678; } // 804F130C
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F1310
  c->r[3]=c->r[25]|c->r[25]; // 804F1314
  c->r[4]=c->r[26]|c->r[26]; // 804F1318
  c->r[5]=c->r[28]|c->r[28]; // 804F131C
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F1320
  c->ctr=c->r[12]; // 804F1324
  if (true) { c->lr=0x804F132Cu; dispatch(c,c->ctr); } // 804F1328
  goto L_804F1678; // 804F132C
L_804F1330:;
  c->r[5]=R32(c->r[4]+0x00000020u); // 804F1330
  cmps(c,0,(int32_t)c->r[29],0); // 804F1334
  c->r[6]=c->r[5]+0x00000001u; // 804F1338
  W32(c->r[4]+0x00000020u,c->r[6]); // 804F133C
  c->r[3]=c->r[6]+0x00000001u; // 804F1340
  c->r[0]=c->r[3]+0x00000001u; // 804F1344
  c->r[5]=R8(c->r[5]+0x00000000u); // 804F1348
  W32(c->r[4]+0x00000020u,c->r[3]); // 804F134C
  c->r[6]=R8(c->r[6]+0x00000000u); // 804F1350
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 804F1354
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F1358
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 804F135C
  c->r[0]=R8(c->r[3]+0x00000000u); // 804F1360
  c->r[6]=c->r[6]|c->r[0]; // 804F1364
  if (crb(c,2)) { goto L_804F1678; } // 804F1368
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F136C
  c->r[3]=c->r[25]|c->r[25]; // 804F1370
  c->r[4]=c->r[26]|c->r[26]; // 804F1374
  c->r[5]=c->r[28]|c->r[28]; // 804F1378
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F137C
  c->r[7]=0u+0x00000000u; // 804F1380
  c->ctr=c->r[12]; // 804F1384
  if (true) { c->lr=0x804F138Cu; dispatch(c,c->ctr); } // 804F1388
  goto L_804F1678; // 804F138C
L_804F1390:;
  c->r[5]=R32(c->r[4]+0x00000020u); // 804F1390
  cmps(c,0,(int32_t)c->r[29],0); // 804F1394
  c->r[6]=c->r[5]+0x00000001u; // 804F1398
  W32(c->r[4]+0x00000020u,c->r[6]); // 804F139C
  c->r[3]=c->r[6]+0x00000001u; // 804F13A0
  c->r[0]=c->r[3]+0x00000001u; // 804F13A4
  c->r[5]=R8(c->r[5]+0x00000000u); // 804F13A8
  W32(c->r[4]+0x00000020u,c->r[3]); // 804F13AC
  c->r[6]=R8(c->r[6]+0x00000000u); // 804F13B0
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 804F13B4
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F13B8
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 804F13BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 804F13C0
  c->r[6]=c->r[6]|c->r[0]; // 804F13C4
  if (crb(c,2)) { goto L_804F1678; } // 804F13C8
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F13CC
  c->r[3]=c->r[25]|c->r[25]; // 804F13D0
  c->r[4]=c->r[26]|c->r[26]; // 804F13D4
  c->r[5]=c->r[28]|c->r[28]; // 804F13D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F13DC
  c->r[7]=0u+0x00000000u; // 804F13E0
  c->ctr=c->r[12]; // 804F13E4
  if (true) { c->lr=0x804F13ECu; dispatch(c,c->ctr); } // 804F13E8
  goto L_804F1678; // 804F13EC
L_804F13F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F13F0
  c->r[3]=c->r[25]|c->r[25]; // 804F13F4
  c->r[5]=c->r[31]|c->r[31]; // 804F13F8
  c->r[6]=c->r[26]|c->r[26]; // 804F13FC
  c->r[7]=0u+0x00000001u; // 804F1400
  c->r[4]=c->r[4]+0x00000020u; // 804F1404
  if (crb(c,2)) { goto L_804F1410; } // 804F1408
  c->r[7]=c->r[0]|c->r[0]; // 804F140C
L_804F1410:;
  c->lr=0x804F1414u; f_804F1FC0(c); // 804F1410
  cmps(c,0,(int32_t)c->r[30],0); // 804F1414
  c->r[24]=c->r[3]|c->r[3]; // 804F1418
  if (crb(c,2)) { goto L_804F143C; } // 804F141C
  c->r[3]=c->r[25]|c->r[25]; // 804F1420
  c->r[5]=c->r[31]|c->r[31]; // 804F1424
  c->r[6]=c->r[26]|c->r[26]; // 804F1428
  c->r[7]=c->r[30]|c->r[30]; // 804F142C
  c->r[4]=c->r[26]+0x00000020u; // 804F1430
  c->lr=0x804F1438u; f_804F1FC0(c); // 804F1434
  c->r[27]=c->r[3]|c->r[3]; // 804F1438
L_804F143C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F143C
  if (crb(c,2)) { goto L_804F1678; } // 804F1440
  cmps(c,0,(int32_t)c->r[28],197); // 804F1444
  if (!crb(c,0)) { goto L_804F1464; } // 804F1448
  cmps(c,0,(int32_t)c->r[28],195); // 804F144C
  if (!crb(c,0)) { goto L_804F1458; } // 804F1450
  goto L_804F1464; // 804F1454
L_804F1458:;
  c->r[6]=rotl(c->r[24],0)&0x000000FFu; // 804F1458
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 804F145C
  goto L_804F1468; // 804F1460
L_804F1464:;
  c->r[6]=rotl(c->r[24],0)&0x000000FFu; // 804F1464
L_804F1468:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F1468
  c->r[3]=c->r[25]|c->r[25]; // 804F146C
  c->r[4]=c->r[26]|c->r[26]; // 804F1470
  c->r[5]=c->r[28]|c->r[28]; // 804F1474
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F1478
  c->r[7]=c->r[27]|c->r[27]; // 804F147C
  c->ctr=c->r[12]; // 804F1480
  if (true) { c->lr=0x804F1488u; dispatch(c,c->ctr); } // 804F1484
  goto L_804F1678; // 804F1488
L_804F148C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F148C
  if (crb(c,2)) { goto L_804F1678; } // 804F1490
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F1494
  c->r[3]=c->r[25]|c->r[25]; // 804F1498
  c->r[4]=c->r[26]|c->r[26]; // 804F149C
  c->r[5]=c->r[28]|c->r[28]; // 804F14A0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F14A4
  c->r[6]=0u+0x00000000u; // 804F14A8
  c->r[7]=0u+0x00000000u; // 804F14AC
  c->ctr=c->r[12]; // 804F14B0
  if (true) { c->lr=0x804F14B8u; dispatch(c,c->ctr); } // 804F14B4
  goto L_804F1678; // 804F14B8
L_804F14BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F14BC
  c->r[3]=c->r[25]|c->r[25]; // 804F14C0
  c->r[5]=c->r[31]|c->r[31]; // 804F14C4
  c->r[6]=c->r[26]|c->r[26]; // 804F14C8
  c->r[7]=0u+0x00000002u; // 804F14CC
  c->r[4]=c->r[4]+0x00000020u; // 804F14D0
  if (crb(c,2)) { goto L_804F14DC; } // 804F14D4
  c->r[7]=c->r[0]|c->r[0]; // 804F14D8
L_804F14DC:;
  c->lr=0x804F14E0u; f_804F1FC0(c); // 804F14DC
  cmps(c,0,(int32_t)c->r[29],0); // 804F14E0
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 804F14E4
  if (crb(c,2)) { goto L_804F1678; } // 804F14E8
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F14EC
  c->r[3]=c->r[25]|c->r[25]; // 804F14F0
  c->r[4]=c->r[26]|c->r[26]; // 804F14F4
  c->r[5]=c->r[28]|c->r[28]; // 804F14F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F14FC
  c->r[7]=0u+0x00000000u; // 804F1500
  c->ctr=c->r[12]; // 804F1504
  if (true) { c->lr=0x804F150Cu; dispatch(c,c->ctr); } // 804F1508
  goto L_804F1678; // 804F150C
L_804F1510:;
  cmps(c,0,(int32_t)c->r[28],254); // 804F1510
  if (crb(c,2)) { goto L_804F1534; } // 804F1514
  if (!crb(c,0)) { goto L_804F1528; } // 804F1518
  cmps(c,0,(int32_t)c->r[28],240); // 804F151C
  if (crb(c,2)) { goto L_804F1554; } // 804F1520
  goto L_804F164C; // 804F1524
L_804F1528:;
  cmps(c,0,(int32_t)c->r[28],256); // 804F1528
  if (!crb(c,0)) { goto L_804F164C; } // 804F152C
  goto L_804F1544; // 804F1530
L_804F1534:;
  c->r[3]=R32(c->r[4]+0x00000020u); // 804F1534
  c->r[0]=c->r[3]+0x00000002u; // 804F1538
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F153C
  goto L_804F1678; // 804F1540
L_804F1544:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F1544
  if (crb(c,2)) { goto L_804F1678; } // 804F1548
  c->r[3]=0u+0x00000001u; // 804F154C
  goto L_804F167C; // 804F1550
L_804F1554:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 804F1554
  c->r[5]=c->r[6]+0x00000001u; // 804F1558
  W32(c->r[4]+0x00000020u,c->r[5]); // 804F155C
  c->r[24]=R8(c->r[6]+0x00000000u); // 804F1560
  c->r[5]=rotl(c->r[24],0)&0x000000F0u; // 804F1564
  cmps(c,0,(int32_t)c->r[5],144); // 804F1568
  if (crb(c,2)) { goto L_804F15E8; } // 804F156C
  if (!crb(c,0)) { goto L_804F1580; } // 804F1570
  cmps(c,0,(int32_t)c->r[5],128); // 804F1574
  if (crb(c,2)) { goto L_804F15E8; } // 804F1578
  goto L_804F164C; // 804F157C
L_804F1580:;
  cmps(c,0,(int32_t)c->r[5],224); // 804F1580
  if (crb(c,2)) { goto L_804F158C; } // 804F1584
  goto L_804F164C; // 804F1588
L_804F158C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F158C
  c->r[3]=c->r[25]|c->r[25]; // 804F1590
  c->r[5]=c->r[31]|c->r[31]; // 804F1594
  c->r[6]=c->r[26]|c->r[26]; // 804F1598
  c->r[7]=0u+0x00000002u; // 804F159C
  c->r[4]=c->r[4]+0x00000020u; // 804F15A0
  if (crb(c,2)) { goto L_804F15AC; } // 804F15A4
  c->r[7]=c->r[0]|c->r[0]; // 804F15A8
L_804F15AC:;
  c->lr=0x804F15B0u; f_804F1FC0(c); // 804F15AC
  cmps(c,0,(int32_t)c->r[29],0); // 804F15B0
  c->r[23]=rotl(c->r[3],0)&0x0000FFFFu; // 804F15B4
  if (crb(c,2)) { goto L_804F164C; } // 804F15B8
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F15BC
  c->r[0]=rotl(c->r[28],8)&0xFFFFFF00u; // 804F15C0
  c->r[3]=c->r[25]|c->r[25]; // 804F15C4
  c->r[4]=c->r[26]|c->r[26]; // 804F15C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F15CC
  c->r[6]=c->r[23]|c->r[23]; // 804F15D0
  c->r[5]=c->r[0]+c->r[24]; // 804F15D4
  c->r[7]=0u+0x00000000u; // 804F15D8
  c->ctr=c->r[12]; // 804F15DC
  if (true) { c->lr=0x804F15E4u; dispatch(c,c->ctr); } // 804F15E0
  goto L_804F164C; // 804F15E4
L_804F15E8:;
  c->r[8]=R32(c->r[4]+0x00000020u); // 804F15E8
  cmps(c,0,(int32_t)c->r[3],0); // 804F15EC
  c->r[3]=c->r[25]|c->r[25]; // 804F15F0
  c->r[5]=c->r[31]|c->r[31]; // 804F15F4
  c->r[7]=c->r[8]+0x00000001u; // 804F15F8
  c->r[6]=c->r[26]|c->r[26]; // 804F15FC
  {uint32_t ea=c->r[4]+0x00000020u; W32(ea,c->r[7]); c->r[4]=ea;} // 804F1600
  c->r[7]=0u+0x00000002u; // 804F1604
  c->r[23]=R8(c->r[8]+0x00000000u); // 804F1608
  if (crb(c,2)) { goto L_804F1614; } // 804F160C
  c->r[7]=c->r[0]|c->r[0]; // 804F1610
L_804F1614:;
  c->lr=0x804F1618u; f_804F1FC0(c); // 804F1614
  cmps(c,0,(int32_t)c->r[29],0); // 804F1618
  c->r[27]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 804F161C
  if (crb(c,2)) { goto L_804F164C; } // 804F1620
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F1624
  c->r[0]=rotl(c->r[28],8)&0xFFFFFF00u; // 804F1628
  c->r[3]=c->r[25]|c->r[25]; // 804F162C
  c->r[4]=c->r[26]|c->r[26]; // 804F1630
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F1634
  c->r[6]=c->r[23]|c->r[23]; // 804F1638
  c->r[7]=c->r[27]|c->r[27]; // 804F163C
  c->r[5]=c->r[0]+c->r[24]; // 804F1640
  c->ctr=c->r[12]; // 804F1644
  if (true) { c->lr=0x804F164Cu; dispatch(c,c->ctr); } // 804F1648
L_804F164C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F164C
  if (crb(c,2)) { goto L_804F1678; } // 804F1650
  c->r[12]=R32(c->r[25]+0x00000000u); // 804F1654
  c->r[3]=c->r[25]|c->r[25]; // 804F1658
  c->r[4]=c->r[26]|c->r[26]; // 804F165C
  c->r[5]=c->r[28]|c->r[28]; // 804F1660
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F1664
  c->r[6]=c->r[23]|c->r[23]; // 804F1668
  c->r[7]=c->r[27]|c->r[27]; // 804F166C
  c->ctr=c->r[12]; // 804F1670
  if (true) { c->lr=0x804F1678u; dispatch(c,c->ctr); } // 804F1674
L_804F1678:;
  c->r[3]=0u+0x00000000u; // 804F1678
L_804F167C:;
  c->r[11]=c->r[1]+0x00000030u; // 804F167C
  c->lr=0x804F1684u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F1680
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F1684
  c->lr=c->r[0]; // 804F1688
  c->r[1]=c->r[1]+0x00000030u; // 804F168C
  return; // 804F1690
}

// fn_804F1694
void f_804F1694(Ctx* __restrict c) {
  trace_call(0x804F1694u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F1694
  c->r[0]=c->lr; // 804F1698
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F169C
  c->r[11]=c->r[1]+0x00000040u; // 804F16A0
  c->lr=0x804F16A8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F16A4
  c->r[0]=0u+0x43300000u; // 804F16A8
  cmpu(c,0,c->r[5],0x000000FFu); // 804F16AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F16B0
  c->r[28]=c->r[4]|c->r[4]; // 804F16B4
  c->r[27]=R32(c->r[4]+0x000000C0u); // 804F16B8
  c->r[25]=c->r[6]|c->r[6]; // 804F16BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804F16C0
  c->r[29]=c->r[7]|c->r[7]; // 804F16C4
  c->r[31]=c->r[4]+0x0000001Cu; // 804F16C8
  if (crb(c,1)) { goto L_804F1CA8; } // 804F16CC
  c->r[0]=c->r[5]+0xFFFFFF7Fu; // 804F16D0
  cmpu(c,0,c->r[0],0x0000007Cu); // 804F16D4
  if (crb(c,1)) { goto L_804F1F90; } // 804F16D8
  c->r[3]=0u+0x80720000u; // 804F16DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804F16E0
  c->r[3]=c->r[3]+0xFFFFB670u; // 804F16E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 804F16E8
  c->ctr=c->r[3]; // 804F16EC
  if (true) { switch (c->ctr) { case 0x804F16F4u: goto L_804F16F4; case 0x804F1714u: goto L_804F1714; case 0x804F171Cu: goto L_804F171C; case 0x804F1734u: goto L_804F1734; case 0x804F1744u: goto L_804F1744; case 0x804F1790u: goto L_804F1790; case 0x804F1798u: goto L_804F1798; case 0x804F17A0u: goto L_804F17A0; case 0x804F17A8u: goto L_804F17A8; case 0x804F17B0u: goto L_804F17B0; case 0x804F17B8u: goto L_804F17B8; case 0x804F17C0u: goto L_804F17C0; case 0x804F181Cu: goto L_804F181C; case 0x804F1828u: goto L_804F1828; case 0x804F1880u: goto L_804F1880; case 0x804F1888u: goto L_804F1888; case 0x804F189Cu: goto L_804F189C; case 0x804F18A4u: goto L_804F18A4; case 0x804F18C8u: goto L_804F18C8; case 0x804F18ECu: goto L_804F18EC; case 0x804F18F4u: goto L_804F18F4; case 0x804F18FCu: goto L_804F18FC; case 0x804F190Cu: goto L_804F190C; case 0x804F1930u: goto L_804F1930; case 0x804F1938u: goto L_804F1938; case 0x804F1940u: goto L_804F1940; case 0x804F1948u: goto L_804F1948; case 0x804F1950u: goto L_804F1950; case 0x804F195Cu: goto L_804F195C; case 0x804F1978u: goto L_804F1978; case 0x804F199Cu: goto L_804F199C; case 0x804F19C4u: goto L_804F19C4; case 0x804F19F0u: goto L_804F19F0; case 0x804F1A08u: goto L_804F1A08; case 0x804F1A1Cu: goto L_804F1A1C; case 0x804F1A44u: goto L_804F1A44; case 0x804F1A4Cu: goto L_804F1A4C; case 0x804F1A70u: goto L_804F1A70; case 0x804F1A78u: goto L_804F1A78; case 0x804F1A80u: goto L_804F1A80; case 0x804F1A88u: goto L_804F1A88; case 0x804F1A90u: goto L_804F1A90; case 0x804F1B3Cu: goto L_804F1B3C; case 0x804F1B7Cu: goto L_804F1B7C; case 0x804F1B8Cu: goto L_804F1B8C; case 0x804F1BCCu: goto L_804F1BCC; case 0x804F1C1Cu: goto L_804F1C1C; case 0x804F1C54u: goto L_804F1C54; case 0x804F1F90u: goto L_804F1F90; default: break; } dispatch(c,c->ctr); return; } // 804F16F0
L_804F16F4:;
  cmps(c,0,(int32_t)c->r[6],1023); // 804F16F4
  if (!crb(c,1)) { goto L_804F1704; } // 804F16F8
  c->r[0]=0u+0x000003FFu; // 804F16FC
  goto L_804F170C; // 804F1700
L_804F1704:;
  c->r[0]=sraw(c,c->r[6],31); // 804F1704
  c->r[0]=c->r[6]&~c->r[0]; // 804F1708
L_804F170C:;
  W16(c->r[27]+0x0000010Cu,c->r[0]); // 804F170C
  goto L_804F1F90; // 804F1710
L_804F1714:;
  W8(c->r[27]+0x0000010Au,c->r[6]); // 804F1714
  goto L_804F1F90; // 804F1718
L_804F171C:;
  c->r[0]=0u+0x00010000u; // 804F171C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804F1720
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1724
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 804F1728
  W32(c->r[31]+0x00000038u,c->r[0]); // 804F172C
  goto L_804F1F90; // 804F1730
L_804F1734:;
  c->r[3]=c->r[28]|c->r[28]; // 804F1734
  c->r[4]=c->r[25]|c->r[25]; // 804F1738
  c->lr=0x804F1740u; f_804F5E00(c); // 804F173C
  goto L_804F1F90; // 804F1740
L_804F1744:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000056u); // 804F1744
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000058u); // 804F1748
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 804F174C
  if (crb(c,0)) { goto L_804F175C; } // 804F1750
  c->r[3]=R8(c->r[31]+0x00000055u); // 804F1754
  goto L_804F1778; // 804F1758
L_804F175C:;
  c->r[5]=R8(c->r[31]+0x00000054u); // 804F175C
  c->r[0]=R8(c->r[31]+0x00000055u); // 804F1760
  c->r[0]=c->r[0]-c->r[5]; // 804F1764
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F1768
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 804F176C
  c->r[0]=c->r[5]+c->r[0]; // 804F1770
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 804F1774
L_804F1778:;
  c->r[0]=0u+0x00000000u; // 804F1778
  W8(c->r[31]+0x00000054u,c->r[3]); // 804F177C
  W8(c->r[31]+0x00000055u,c->r[6]); // 804F1780
  W16(c->r[31]+0x00000056u,c->r[7]); // 804F1784
  W16(c->r[31]+0x00000058u,c->r[0]); // 804F1788
  goto L_804F1F90; // 804F178C
L_804F1790:;
  W8(c->r[31]+0x00000066u,c->r[6]); // 804F1790
  goto L_804F1F90; // 804F1794
L_804F1798:;
  W8(c->r[31]+0x00000067u,c->r[6]); // 804F1798
  goto L_804F1F90; // 804F179C
L_804F17A0:;
  W8(c->r[27]+0x00000108u,c->r[6]); // 804F17A0
  goto L_804F1F90; // 804F17A4
L_804F17A8:;
  W8(c->r[31]+0x0000006Bu,c->r[6]); // 804F17A8
  goto L_804F1F90; // 804F17AC
L_804F17B0:;
  W8(c->r[31]+0x00000068u,c->r[6]); // 804F17B0
  goto L_804F1F90; // 804F17B4
L_804F17B8:;
  W8(c->r[31]+0x00000069u,c->r[6]); // 804F17B8
  goto L_804F1F90; // 804F17BC
L_804F17C0:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000005Cu); // 804F17C0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000005Eu); // 804F17C4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804F17C8
  if (crb(c,0)) { goto L_804F17DC; } // 804F17CC
  c->r[0]=R8(c->r[31]+0x0000005Bu); // 804F17D0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F17D4
  goto L_804F1800; // 804F17D8
L_804F17DC:;
  c->r[8]=R8(c->r[31]+0x0000005Au); // 804F17DC
  c->r[0]=R8(c->r[31]+0x0000005Bu); // 804F17E0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 804F17E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F17E8
  c->r[0]=c->r[0]-c->r[3]; // 804F17EC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804F17F0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 804F17F4
  c->r[0]=c->r[8]+c->r[0]; // 804F17F8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F17FC
L_804F1800:;
  c->r[3]=c->r[6]+0xFFFFFFC0u; // 804F1800
  c->r[0]=0u+0x00000000u; // 804F1804
  W8(c->r[31]+0x0000005Au,c->r[4]); // 804F1808
  W8(c->r[31]+0x0000005Bu,c->r[3]); // 804F180C
  W16(c->r[31]+0x0000005Cu,c->r[7]); // 804F1810
  W16(c->r[31]+0x0000005Eu,c->r[0]); // 804F1814
  goto L_804F1F90; // 804F1818
L_804F181C:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 804F181C
  W8(c->r[31]+0x0000006Au,c->r[0]); // 804F1820
  goto L_804F1F90; // 804F1824
L_804F1828:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000062u); // 804F1828
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 804F182C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804F1830
  if (crb(c,0)) { goto L_804F1844; } // 804F1834
  c->r[0]=R8(c->r[31]+0x00000061u); // 804F1838
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F183C
  goto L_804F1868; // 804F1840
L_804F1844:;
  c->r[8]=R8(c->r[31]+0x00000060u); // 804F1844
  c->r[0]=R8(c->r[31]+0x00000061u); // 804F1848
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 804F184C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F1850
  c->r[0]=c->r[0]-c->r[3]; // 804F1854
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804F1858
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 804F185C
  c->r[0]=c->r[8]+c->r[0]; // 804F1860
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F1864
L_804F1868:;
  c->r[0]=0u+0x00000000u; // 804F1868
  W8(c->r[31]+0x00000060u,c->r[3]); // 804F186C
  W8(c->r[31]+0x00000061u,c->r[6]); // 804F1870
  W16(c->r[31]+0x00000062u,c->r[7]); // 804F1874
  W16(c->r[31]+0x00000064u,c->r[0]); // 804F1878
  goto L_804F1F90; // 804F187C
L_804F1880:;
  W8(c->r[31]+0x0000006Cu,c->r[6]); // 804F1880
  goto L_804F1F90; // 804F1884
L_804F1888:;
  c->r[0]=0u-c->r[6]; // 804F1888
  c->r[0]=c->r[0]|c->r[6]; // 804F188C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1890
  W8(c->r[31]+0x00000009u,c->r[0]); // 804F1894
  goto L_804F1F90; // 804F1898
L_804F189C:;
  W8(c->r[31]+0x0000006Eu,c->r[6]); // 804F189C
  goto L_804F1F90; // 804F18A0
L_804F18A4:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 804F18A4
  {uint32_t ea=c->r[2]+0x00001A98u; c->f[2]=RF64(ea);} // 804F18A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F18AC
  {uint32_t ea=c->r[2]+0x00001A88u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F18B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F18B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F18B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804F18BC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 804F18C0
  goto L_804F1F90; // 804F18C4
L_804F18C8:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 804F18C8
  {uint32_t ea=c->r[2]+0x00001A98u; c->f[2]=RF64(ea);} // 804F18CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F18D0
  {uint32_t ea=c->r[2]+0x00001A8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F18D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804F18D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F18DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F18E0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 804F18E4
  goto L_804F1F90; // 804F18E8
L_804F18EC:;
  W8(c->r[31]+0x0000004Cu,c->r[6]); // 804F18EC
  goto L_804F1F90; // 804F18F0
L_804F18F4:;
  W8(c->r[31]+0x00000048u,c->r[6]); // 804F18F4
  goto L_804F1F90; // 804F18F8
L_804F18FC:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804F18FC
  c->r[0]=c->r[0]+c->r[6]; // 804F1900
  W32(c->r[31]+0x00000044u,c->r[0]); // 804F1904
  goto L_804F1F90; // 804F1908
L_804F190C:;
  c->r[0]=c->r[6]^0x80000000u; // 804F190C
  {uint32_t ea=c->r[2]+0x00001AA0u; c->f[2]=RF64(ea);} // 804F1910
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F1914
  {uint32_t ea=c->r[2]+0x00001A90u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F1918
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F191C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F1920
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804F1924
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 804F1928
  goto L_804F1F90; // 804F192C
L_804F1930:;
  W8(c->r[31]+0x0000006Fu,c->r[6]); // 804F1930
  goto L_804F1F90; // 804F1934
L_804F1938:;
  W8(c->r[31]+0x00000070u,c->r[6]); // 804F1938
  goto L_804F1F90; // 804F193C
L_804F1940:;
  W8(c->r[31]+0x00000071u,c->r[6]); // 804F1940
  goto L_804F1F90; // 804F1944
L_804F1948:;
  W8(c->r[31]+0x00000072u,c->r[6]); // 804F1948
  goto L_804F1F90; // 804F194C
L_804F1950:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 804F1950
  W16(c->r[31]+0x00000074u,c->r[0]); // 804F1954
  goto L_804F1F90; // 804F1958
L_804F195C:;
  c->r[0]=0u+0x000000FFu; // 804F195C
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 804F1960
  W8(c->r[31]+0x00000070u,c->r[0]); // 804F1964
  W8(c->r[31]+0x00000071u,c->r[0]); // 804F1968
  W8(c->r[31]+0x00000072u,c->r[0]); // 804F196C
  W16(c->r[31]+0x00000074u,c->r[0]); // 804F1970
  goto L_804F1F90; // 804F1974
L_804F1978:;
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 804F1978
  c->r[3]=0u+0x00000040u; // 804F197C
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 804F1980
  c->r[3]=c->r[4]|~c->r[3]; // 804F1984
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804F1988
  c->r[0]=c->r[3]-c->r[0]; // 804F198C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1990
  W8(c->r[31]+0x00000030u,c->r[0]); // 804F1994
  goto L_804F1F90; // 804F1998
L_804F199C:;
  c->r[0]=0u-c->r[6]; // 804F199C
  c->r[3]=c->r[28]|c->r[28]; // 804F19A0
  c->r[0]=c->r[0]|c->r[6]; // 804F19A4
  c->r[4]=0u+0xFFFFFFFFu; // 804F19A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F19AC
  W8(c->r[31]+0x0000000Au,c->r[0]); // 804F19B0
  c->lr=0x804F19B8u; f_804F55B8(c); // 804F19B4
  c->r[3]=c->r[28]|c->r[28]; // 804F19B8
  c->lr=0x804F19C0u; f_804F5C9C(c); // 804F19BC
  goto L_804F1F90; // 804F19C0
L_804F19C4:;
  c->r[0]=0u-c->r[6]; // 804F19C4
  c->r[0]=c->r[0]|c->r[6]; // 804F19C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804F19CC
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 804F19D0
  if (crb(c,2)) { goto L_804F1F90; } // 804F19D4
  c->r[3]=c->r[28]|c->r[28]; // 804F19D8
  c->r[4]=0u+0xFFFFFFFFu; // 804F19DC
  c->lr=0x804F19E4u; f_804F55B8(c); // 804F19E0
  c->r[3]=c->r[28]|c->r[28]; // 804F19E4
  c->lr=0x804F19ECu; f_804F5C9C(c); // 804F19E8
  goto L_804F1F90; // 804F19EC
L_804F19F0:;
  c->r[3]=R8(c->r[31]+0x0000006Bu); // 804F19F0
  c->r[0]=0u+0x00000001u; // 804F19F4
  W8(c->r[31]+0x0000002Fu,c->r[0]); // 804F19F8
  c->r[0]=c->r[6]+c->r[3]; // 804F19FC
  W8(c->r[31]+0x0000006Du,c->r[0]); // 804F1A00
  goto L_804F1F90; // 804F1A04
L_804F1A08:;
  c->r[0]=0u-c->r[6]; // 804F1A08
  c->r[0]=c->r[0]|c->r[6]; // 804F1A0C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1A10
  W8(c->r[31]+0x0000002Fu,c->r[0]); // 804F1A14
  goto L_804F1F90; // 804F1A18
L_804F1A1C:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 804F1A1C
  {uint32_t ea=c->r[2]+0x00001AA0u; c->f[2]=RF64(ea);} // 804F1A20
  c->r[0]=c->r[0]^0x80000000u; // 804F1A24
  {uint32_t ea=c->r[2]+0x00001A90u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F1A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F1A2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804F1A30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F1A34
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804F1A38
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 804F1A3C
  goto L_804F1F90; // 804F1A40
L_804F1A44:;
  W8(c->r[31]+0x0000007Au,c->r[6]); // 804F1A44
  goto L_804F1F90; // 804F1A48
L_804F1A4C:;
  c->r[0]=c->r[6]^0x80000000u; // 804F1A4C
  {uint32_t ea=c->r[2]+0x00001AA0u; c->f[2]=RF64(ea);} // 804F1A50
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F1A54
  {uint32_t ea=c->r[2]+0x00001A94u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F1A58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F1A5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F1A60
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F1A64
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 804F1A68
  goto L_804F1F90; // 804F1A6C
L_804F1A70:;
  W8(c->r[31]+0x00000077u,c->r[6]); // 804F1A70
  goto L_804F1F90; // 804F1A74
L_804F1A78:;
  W8(c->r[31]+0x00000078u,c->r[6]); // 804F1A78
  goto L_804F1F90; // 804F1A7C
L_804F1A80:;
  W8(c->r[31]+0x00000079u,c->r[6]); // 804F1A80
  goto L_804F1F90; // 804F1A84
L_804F1A88:;
  W8(c->r[31]+0x00000076u,c->r[6]); // 804F1A88
  goto L_804F1F90; // 804F1A8C
L_804F1A90:;
  c->r[0]=R8(c->r[13]+0xFFFFE510u); // 804F1A90
  cmps(c,0,(int32_t)c->r[0],0); // 804F1A94
  if (crb(c,2)) { goto L_804F1F90; } // 804F1A98
  cmps(c,0,(int32_t)c->r[6],32); // 804F1A9C
  if (!crb(c,0)) { goto L_804F1AB8; } // 804F1AA0
  c->r[3]=c->r[27]|c->r[27]; // 804F1AA4
  c->r[4]=c->r[25]|c->r[25]; // 804F1AA8
  c->lr=0x804F1AB0u; f_804F4044(c); // 804F1AAC
  c->r[4]=c->r[3]|c->r[3]; // 804F1AB0
  goto L_804F1AD8; // 804F1AB4
L_804F1AB8:;
  cmps(c,0,(int32_t)c->r[6],48); // 804F1AB8
  if (!crb(c,0)) { goto L_804F1AD0; } // 804F1ABC
  c->r[3]=c->r[28]|c->r[28]; // 804F1AC0
  c->r[4]=c->r[6]+0xFFFFFFE0u; // 804F1AC4
  c->lr=0x804F1ACCu; f_804F5F68(c); // 804F1AC8
  goto L_804F1AD4; // 804F1ACC
L_804F1AD0:;
  c->r[3]=0u+0x00000000u; // 804F1AD0
L_804F1AD4:;
  c->r[4]=c->r[3]|c->r[3]; // 804F1AD4
L_804F1AD8:;
  cmps(c,0,(int32_t)c->r[25],32); // 804F1AD8
  if (crb(c,0)) { goto L_804F1AE8; } // 804F1ADC
  c->r[7]=c->r[25]+0xFFFFFFE0u; // 804F1AE0
  goto L_804F1AF8; // 804F1AE4
L_804F1AE8:;
  cmps(c,0,(int32_t)c->r[25],16); // 804F1AE8
  c->r[7]=c->r[25]|c->r[25]; // 804F1AEC
  if (crb(c,0)) { goto L_804F1AF8; } // 804F1AF0
  c->r[7]=c->r[25]+0xFFFFFFF0u; // 804F1AF4
L_804F1AF8:;
  cmps(c,0,(int32_t)c->r[25],32); // 804F1AF8
  if (crb(c,0)) { goto L_804F1B08; } // 804F1AFC
  c->r[6]=c->r[13]+0xFFFFA2E8u; // 804F1B00
  goto L_804F1B18; // 804F1B04
L_804F1B08:;
  cmps(c,0,(int32_t)c->r[25],16); // 804F1B08
  c->r[6]=c->r[13]+0xFFFFA2F0u; // 804F1B0C
  if (crb(c,0)) { goto L_804F1B18; } // 804F1B10
  c->r[6]=c->r[13]+0xFFFFA2ECu; // 804F1B14
L_804F1B18:;
  c->r[3]=0u+0x80720000u; // 804F1B18
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 804F1B1C
  c->r[5]=R8(c->r[28]+0x00000004u); // 804F1B20
  c->r[4]=c->r[27]|c->r[27]; // 804F1B24
  c->r[8]=c->r[25]|c->r[25]; // 804F1B28
  c->r[3]=c->r[3]+0xFFFFB648u; // 804F1B2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804F1B30
  c->lr=0x804F1B38u; f_802DB4AC(c); // 804F1B34
  goto L_804F1F90; // 804F1B38
L_804F1B3C:;
  c->r[3]=c->r[27]|c->r[27]; // 804F1B3C
  c->r[4]=c->r[25]|c->r[25]; // 804F1B40
  c->lr=0x804F1B48u; f_804F3EEC(c); // 804F1B44
  cmps(c,0,(int32_t)c->r[3],0); // 804F1B48
  c->r[27]=c->r[3]|c->r[3]; // 804F1B4C
  if (crb(c,2)) { goto L_804F1F90; } // 804F1B50
  cmpu(c,0,c->r[3],c->r[28]); // 804F1B54
  if (crb(c,2)) { goto L_804F1F90; } // 804F1B58
  c->lr=0x804F1B60u; f_804F52A4(c); // 804F1B5C
  c->r[4]=R32(c->r[31]+0x00000000u); // 804F1B60
  c->r[3]=c->r[27]|c->r[27]; // 804F1B64
  c->r[5]=c->r[29]|c->r[29]; // 804F1B68
  c->lr=0x804F1B70u; f_804F5278(c); // 804F1B6C
  c->r[3]=c->r[27]|c->r[27]; // 804F1B70
  c->lr=0x804F1B78u; f_804F5288(c); // 804F1B74
  goto L_804F1F90; // 804F1B78
L_804F1B7C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F1B7C
  c->r[0]=c->r[0]+c->r[6]; // 804F1B80
  W32(c->r[31]+0x00000004u,c->r[0]); // 804F1B84
  goto L_804F1F90; // 804F1B88
L_804F1B8C:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 804F1B8C
  cmpu(c,0,c->r[0],0x00000003u); // 804F1B90
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1B94
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 804F1B98
  c->r[3]=R32(c->r[31]+0x00000004u); // 804F1B9C
  c->r[4]=c->r[31]+c->r[0]; // 804F1BA0
  W32(c->r[4]+0x00000010u,c->r[3]); // 804F1BA4
  c->r[0]=0u+0x00000000u; // 804F1BA8
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 804F1BAC
  c->r[3]=R8(c->r[31]+0x00000024u); // 804F1BB0
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F1BB4
  c->r[3]=c->r[3]+0x00000001u; // 804F1BB8
  c->r[0]=c->r[0]+c->r[6]; // 804F1BBC
  W8(c->r[31]+0x00000024u,c->r[3]); // 804F1BC0
  W32(c->r[31]+0x00000004u,c->r[0]); // 804F1BC4
  goto L_804F1F90; // 804F1BC8
L_804F1BCC:;
  c->r[4]=0u+0x00000000u; // 804F1BCC
  goto L_804F1BFC; // 804F1BD0
L_804F1BD4:;
  c->r[3]=R8(c->r[31]+0x00000024u); // 804F1BD4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 804F1BD8
  c->r[0]=rotl(c->r[3],3)&0x000007F8u; // 804F1BDC
  W8(c->r[31]+0x00000024u,c->r[3]); // 804F1BE0
  c->r[3]=c->r[31]+c->r[0]; // 804F1BE4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F1BE8
  cmps(c,0,(int32_t)c->r[0],0); // 804F1BEC
  if (!crb(c,2)) { goto L_804F1BFC; } // 804F1BF0
  c->r[4]=c->r[3]+0x0000000Cu; // 804F1BF4
  goto L_804F1C08; // 804F1BF8
L_804F1BFC:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 804F1BFC
  cmps(c,0,(int32_t)c->r[0],0); // 804F1C00
  if (!crb(c,2)) { IRQCHK(c); goto L_804F1BD4; } // 804F1C04
L_804F1C08:;
  cmps(c,0,(int32_t)c->r[4],0); // 804F1C08
  if (crb(c,2)) { goto L_804F1F90; } // 804F1C0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 804F1C10
  W32(c->r[31]+0x00000004u,c->r[0]); // 804F1C14
  goto L_804F1F90; // 804F1C18
L_804F1C1C:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 804F1C1C
  cmpu(c,0,c->r[0],0x00000003u); // 804F1C20
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1C24
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 804F1C28
  c->r[3]=R32(c->r[31]+0x00000004u); // 804F1C2C
  c->r[4]=c->r[31]+c->r[0]; // 804F1C30
  W32(c->r[4]+0x00000010u,c->r[3]); // 804F1C34
  c->r[0]=0u+0x00000001u; // 804F1C38
  W8(c->r[4]+0x0000000Du,c->r[6]); // 804F1C3C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 804F1C40
  c->r[3]=R8(c->r[31]+0x00000024u); // 804F1C44
  c->r[0]=c->r[3]+0x00000001u; // 804F1C48
  W8(c->r[31]+0x00000024u,c->r[0]); // 804F1C4C
  goto L_804F1F90; // 804F1C50
L_804F1C54:;
  c->r[3]=R8(c->r[31]+0x00000024u); // 804F1C54
  cmps(c,0,(int32_t)c->r[3],0); // 804F1C58
  if (crb(c,2)) { goto L_804F1F90; } // 804F1C5C
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 804F1C60
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804F1C64
  c->r[3]=c->r[31]+c->r[0]; // 804F1C68
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804F1C6C
  cmps(c,0,(int32_t)c->r[0],0); // 804F1C70
  if (crb(c,2)) { goto L_804F1F90; } // 804F1C74
  c->r[5]=R8(c->r[3]+0x0000000Du); // 804F1C78
  cmps(c,0,(int32_t)c->r[5],0); // 804F1C7C
  if (crb(c,2)) { goto L_804F1C98; } // 804F1C80
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 804F1C84
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; cr0(c,c->r[0]); // 804F1C88
  if (!crb(c,2)) { goto L_804F1C98; } // 804F1C8C
  W8(c->r[31]+0x00000024u,c->r[4]); // 804F1C90
  goto L_804F1F90; // 804F1C94
L_804F1C98:;
  W8(c->r[3]+0x0000000Du,c->r[5]); // 804F1C98
  c->r[0]=R32(c->r[3]+0x00000010u); // 804F1C9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 804F1CA0
  goto L_804F1F90; // 804F1CA4
L_804F1CA8:;
  cmpu(c,0,c->r[5],0x0000FFFFu); // 804F1CA8
  if (crb(c,1)) { goto L_804F1F90; } // 804F1CAC
  c->r[0]=rotl(c->r[5],0)&0x000000F0u; // 804F1CB0
  c->r[26]=rotl(c->r[5],0)&0x000000FFu; // 804F1CB4
  cmpu(c,0,c->r[0],0x00000080u); // 804F1CB8
  c->r[30]=0u+0x00000000u; // 804F1CBC
  if (crb(c,2)) { goto L_804F1CCC; } // 804F1CC0
  cmpu(c,0,c->r[0],0x00000090u); // 804F1CC4
  if (!crb(c,2)) { goto L_804F1D0C; } // 804F1CC8
L_804F1CCC:;
  cmps(c,0,(int32_t)c->r[6],32); // 804F1CCC
  if (!crb(c,0)) { goto L_804F1CE4; } // 804F1CD0
  c->r[3]=c->r[27]|c->r[27]; // 804F1CD4
  c->r[4]=c->r[25]|c->r[25]; // 804F1CD8
  c->lr=0x804F1CE0u; f_804F4044(c); // 804F1CDC
  goto L_804F1D00; // 804F1CE0
L_804F1CE4:;
  cmps(c,0,(int32_t)c->r[6],48); // 804F1CE4
  if (!crb(c,0)) { goto L_804F1CFC; } // 804F1CE8
  c->r[3]=c->r[28]|c->r[28]; // 804F1CEC
  c->r[4]=c->r[6]+0xFFFFFFE0u; // 804F1CF0
  c->lr=0x804F1CF8u; f_804F5F68(c); // 804F1CF4
  goto L_804F1D00; // 804F1CF8
L_804F1CFC:;
  c->r[3]=0u+0x00000000u; // 804F1CFC
L_804F1D00:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F1D00
  c->r[30]=c->r[3]|c->r[3]; // 804F1D04
  if (crb(c,2)) { goto L_804F1F90; } // 804F1D08
L_804F1D0C:;
  cmps(c,0,(int32_t)c->r[26],138); // 804F1D0C
  if (crb(c,2)) { goto L_804F1EA4; } // 804F1D10
  if (!crb(c,0)) { goto L_804F1D6C; } // 804F1D14
  cmps(c,0,(int32_t)c->r[26],132); // 804F1D18
  if (crb(c,2)) { goto L_804F1DF0; } // 804F1D1C
  if (!crb(c,0)) { goto L_804F1D48; } // 804F1D20
  cmps(c,0,(int32_t)c->r[26],129); // 804F1D24
  if (crb(c,2)) { goto L_804F1DC0; } // 804F1D28
  if (!crb(c,0)) { goto L_804F1D3C; } // 804F1D2C
  cmps(c,0,(int32_t)c->r[26],128); // 804F1D30
  if (!crb(c,0)) { goto L_804F1DB8; } // 804F1D34
  goto L_804F1F90; // 804F1D38
L_804F1D3C:;
  cmps(c,0,(int32_t)c->r[26],131); // 804F1D3C
  if (!crb(c,0)) { goto L_804F1DE0; } // 804F1D40
  goto L_804F1DD0; // 804F1D44
L_804F1D48:;
  cmps(c,0,(int32_t)c->r[26],135); // 804F1D48
  if (crb(c,2)) { goto L_804F1E74; } // 804F1D4C
  if (!crb(c,0)) { goto L_804F1D60; } // 804F1D50
  cmps(c,0,(int32_t)c->r[26],134); // 804F1D54
  if (!crb(c,0)) { goto L_804F1E34; } // 804F1D58
  goto L_804F1E08; // 804F1D5C
L_804F1D60:;
  cmps(c,0,(int32_t)c->r[26],137); // 804F1D60
  if (!crb(c,0)) { goto L_804F1E94; } // 804F1D64
  goto L_804F1E84; // 804F1D68
L_804F1D6C:;
  cmps(c,0,(int32_t)c->r[26],147); // 804F1D6C
  if (crb(c,2)) { goto L_804F1F28; } // 804F1D70
  if (!crb(c,0)) { goto L_804F1D9C; } // 804F1D74
  cmps(c,0,(int32_t)c->r[26],144); // 804F1D78
  if (crb(c,2)) { goto L_804F1ED4; } // 804F1D7C
  if (!crb(c,0)) { goto L_804F1D90; } // 804F1D80
  cmps(c,0,(int32_t)c->r[26],140); // 804F1D84
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1D88
  goto L_804F1EB4; // 804F1D8C
L_804F1D90:;
  cmps(c,0,(int32_t)c->r[26],146); // 804F1D90
  if (!crb(c,0)) { goto L_804F1F08; } // 804F1D94
  goto L_804F1EEC; // 804F1D98
L_804F1D9C:;
  cmps(c,0,(int32_t)c->r[26],224); // 804F1D9C
  if (crb(c,2)) { goto L_804F1F80; } // 804F1DA0
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1DA4
  cmps(c,0,(int32_t)c->r[26],149); // 804F1DA8
  if (crb(c,2)) { goto L_804F1F64; } // 804F1DAC
  if (!crb(c,0)) { goto L_804F1F90; } // 804F1DB0
  goto L_804F1F44; // 804F1DB4
L_804F1DB8:;
  W16(c->r[30]+0x00000000u,c->r[29]); // 804F1DB8
  goto L_804F1F90; // 804F1DBC
L_804F1DC0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1DC0
  c->r[0]=c->r[0]+c->r[29]; // 804F1DC4
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1DC8
  goto L_804F1F90; // 804F1DCC
L_804F1DD0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1DD0
  c->r[0]=c->r[0]-c->r[29]; // 804F1DD4
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1DD8
  goto L_804F1F90; // 804F1DDC
L_804F1DE0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1DE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 804F1DE4
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1DE8
  goto L_804F1F90; // 804F1DEC
L_804F1DF0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F1DF0
  if (crb(c,2)) { goto L_804F1F90; } // 804F1DF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1DF8
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[29]); // 804F1DFC
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E00
  goto L_804F1F90; // 804F1E04
L_804F1E08:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F1E08
  if (crb(c,0)) { goto L_804F1E20; } // 804F1E0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1E10
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 804F1E14
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E18
  goto L_804F1F90; // 804F1E1C
L_804F1E20:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1E20
  c->r[0]=0u-c->r[29]; // 804F1E24
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 804F1E28
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E2C
  goto L_804F1F90; // 804F1E30
L_804F1E34:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F1E34
  c->r[26]=0u+0x00000000u; // 804F1E38
  if (!crb(c,0)) { goto L_804F1E4C; } // 804F1E3C
  c->r[0]=0u-c->r[29]; // 804F1E40
  c->r[26]=0u+0x00000001u; // 804F1E44
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 804F1E48
L_804F1E4C:;
  c->lr=0x804F1E50u; f_80505D54(c); // 804F1E4C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 804F1E50
  c->r[0]=c->r[29]+0x00000001u; // 804F1E54
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F1E58
  cmps(c,0,(int32_t)c->r[26],0); // 804F1E5C
  c->r[3]=sraw(c,c->r[3],16); // 804F1E60
  if (crb(c,2)) { goto L_804F1E6C; } // 804F1E64
  c->r[3]=0u-c->r[3]; // 804F1E68
L_804F1E6C:;
  W16(c->r[30]+0x00000000u,c->r[3]); // 804F1E6C
  goto L_804F1F90; // 804F1E70
L_804F1E74:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1E74
  c->r[0]=c->r[0]&c->r[29]; // 804F1E78
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E7C
  goto L_804F1F90; // 804F1E80
L_804F1E84:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1E84
  c->r[0]=c->r[0]|c->r[29]; // 804F1E88
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E8C
  goto L_804F1F90; // 804F1E90
L_804F1E94:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1E94
  c->r[0]=c->r[0]^c->r[29]; // 804F1E98
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1E9C
  goto L_804F1F90; // 804F1EA0
L_804F1EA4:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804F1EA4
  c->r[0]=~(c->r[0]|c->r[0]); // 804F1EA8
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1EAC
  goto L_804F1F90; // 804F1EB0
L_804F1EB4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F1EB4
  if (crb(c,2)) { goto L_804F1F90; } // 804F1EB8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1EBC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 804F1EC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 804F1EC4
  c->r[0]=c->r[3]-c->r[0]; // 804F1EC8
  W16(c->r[30]+0x00000000u,c->r[0]); // 804F1ECC
  goto L_804F1F90; // 804F1ED0
L_804F1ED4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1ED4
  c->r[0]=c->r[29]-c->r[0]; // 804F1ED8
  c->r[0]=cntlz(c->r[0]); // 804F1EDC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804F1EE0
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1EE4
  goto L_804F1F90; // 804F1EE8
L_804F1EEC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1EEC
  c->r[3]=rotl(c->r[29],1)&0x00000001u; // 804F1EF0
  c->r[4]=sraw(c,c->r[0],31); // 804F1EF4
  c->r[0]=addc(c,~c->r[29],c->r[0],1); // 804F1EF8
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 804F1EFC
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1F00
  goto L_804F1F90; // 804F1F04
L_804F1F08:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1F08
  c->r[0]=c->r[4]^c->r[29]; // 804F1F0C
  c->r[3]=sraw(c,c->r[0],1); // 804F1F10
  c->r[0]=c->r[0]&c->r[4]; // 804F1F14
  c->r[0]=c->r[3]-c->r[0]; // 804F1F18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1F1C
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1F20
  goto L_804F1F90; // 804F1F24
L_804F1F28:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1F28
  c->r[4]=sraw(c,c->r[29],31); // 804F1F2C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F1F30
  c->r[0]=addc(c,~c->r[0],c->r[29],1); // 804F1F34
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 804F1F38
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1F3C
  goto L_804F1F90; // 804F1F40
L_804F1F44:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1F44
  c->r[0]=c->r[29]^c->r[0]; // 804F1F48
  c->r[3]=sraw(c,c->r[0],1); // 804F1F4C
  c->r[0]=c->r[0]&c->r[29]; // 804F1F50
  c->r[0]=c->r[3]-c->r[0]; // 804F1F54
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1F58
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1F5C
  goto L_804F1F90; // 804F1F60
L_804F1F64:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 804F1F64
  c->r[3]=c->r[29]-c->r[0]; // 804F1F68
  c->r[0]=c->r[0]-c->r[29]; // 804F1F6C
  c->r[0]=c->r[3]|c->r[0]; // 804F1F70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F1F74
  W8(c->r[31]+0x00000008u,c->r[0]); // 804F1F78
  goto L_804F1F90; // 804F1F7C
L_804F1F80:;
  c->r[3]=c->r[27]|c->r[27]; // 804F1F80
  c->r[5]=c->r[28]|c->r[28]; // 804F1F84
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 804F1F88
  c->lr=0x804F1F90u; f_804F3C88(c); // 804F1F8C
L_804F1F90:;
  c->r[11]=c->r[1]+0x00000040u; // 804F1F90
  c->lr=0x804F1F98u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F1F94
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F1F98
  c->lr=c->r[0]; // 804F1F9C
  c->r[1]=c->r[1]+0x00000040u; // 804F1FA0
  return; // 804F1FA4
}

// fn_804F1FA8
void f_804F1FA8(Ctx* __restrict c) {
  trace_call(0x804F1FA8u);
  c->r[3]=c->r[4]|c->r[4]; // 804F1FA8
  c->r[4]=c->r[5]|c->r[5]; // 804F1FAC
  c->r[5]=c->r[6]|c->r[6]; // 804F1FB0
  c->r[6]=c->r[7]|c->r[7]; // 804F1FB4
  c->r[7]=c->r[8]|c->r[8]; // 804F1FB8
  f_804F5F88(c); return; // 804F1FBC
}

// ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
void f_804F1FC0(Ctx* __restrict c) {
  trace_call(0x804F1FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F1FC0
  c->r[0]=c->lr; // 804F1FC4
  cmps(c,0,(int32_t)c->r[7],3); // 804F1FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F1FCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F1FD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F1FD4
  if (crb(c,2)) { goto L_804F2038; } // 804F1FD8
  if (!crb(c,0)) { goto L_804F1FF0; } // 804F1FDC
  cmps(c,0,(int32_t)c->r[7],1); // 804F1FE0
  if (crb(c,2)) { goto L_804F2000; } // 804F1FE4
  if (!crb(c,0)) { goto L_804F2014; } // 804F1FE8
  goto L_804F2114; // 804F1FEC
L_804F1FF0:;
  cmps(c,0,(int32_t)c->r[7],5); // 804F1FF0
  if (crb(c,2)) { goto L_804F2064; } // 804F1FF4
  if (!crb(c,0)) { goto L_804F2114; } // 804F1FF8
  goto L_804F20B4; // 804F1FFC
L_804F2000:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 804F2000
  c->r[0]=c->r[3]+0x00000001u; // 804F2004
  W32(c->r[4]+0x00000000u,c->r[0]); // 804F2008
  c->r[3]=R8(c->r[3]+0x00000000u); // 804F200C
  goto L_804F2114; // 804F2010
L_804F2014:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 804F2014
  c->r[3]=c->r[5]+0x00000001u; // 804F2018
  W32(c->r[4]+0x00000000u,c->r[3]); // 804F201C
  c->r[0]=c->r[3]+0x00000001u; // 804F2020
  c->r[5]=R8(c->r[5]+0x00000000u); // 804F2024
  W32(c->r[4]+0x00000000u,c->r[0]); // 804F2028
  c->r[3]=R8(c->r[3]+0x00000000u); // 804F202C
  c->r[3]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 804F2030
  goto L_804F2114; // 804F2034
L_804F2038:;
  c->r[3]=0u+0x00000000u; // 804F2038
L_804F203C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 804F203C
  c->r[3]=rotl(c->r[3],7)&0xFFFFFF80u; // 804F2040
  c->r[0]=c->r[5]+0x00000001u; // 804F2044
  W32(c->r[4]+0x00000000u,c->r[0]); // 804F2048
  c->r[5]=R8(c->r[5]+0x00000000u); // 804F204C
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 804F2050
  c->r[0]=rotl(c->r[5],0)&0x0000007Fu; // 804F2054
  c->r[3]=c->r[3]|c->r[0]; // 804F2058
  if (!crb(c,2)) { IRQCHK(c); goto L_804F203C; } // 804F205C
  goto L_804F2114; // 804F2060
L_804F2064:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 804F2064
  c->r[0]=c->r[3]+0x00000001u; // 804F2068
  W32(c->r[4]+0x00000000u,c->r[0]); // 804F206C
  c->r[4]=R8(c->r[3]+0x00000000u); // 804F2070
  cmps(c,0,(int32_t)c->r[4],32); // 804F2074
  if (!crb(c,0)) { goto L_804F2088; } // 804F2078
  c->r[3]=c->r[5]|c->r[5]; // 804F207C
  c->lr=0x804F2084u; f_804F4044(c); // 804F2080
  goto L_804F20A4; // 804F2084
L_804F2088:;
  cmps(c,0,(int32_t)c->r[4],48); // 804F2088
  if (!crb(c,0)) { goto L_804F20A0; } // 804F208C
  c->r[3]=c->r[6]|c->r[6]; // 804F2090
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 804F2094
  c->lr=0x804F209Cu; f_804F5F68(c); // 804F2098
  goto L_804F20A4; // 804F209C
L_804F20A0:;
  c->r[3]=0u+0x00000000u; // 804F20A0
L_804F20A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F20A4
  if (crb(c,2)) { goto L_804F2114; } // 804F20A8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 804F20AC
  goto L_804F2114; // 804F20B0
L_804F20B4:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 804F20B4
  c->r[7]=c->r[6]+0x00000001u; // 804F20B8
  W32(c->r[4]+0x00000000u,c->r[7]); // 804F20BC
  c->r[3]=c->r[7]+0x00000001u; // 804F20C0
  c->r[5]=c->r[3]+0x00000001u; // 804F20C4
  c->r[6]=R8(c->r[6]+0x00000000u); // 804F20C8
  c->r[0]=c->r[5]+0x00000001u; // 804F20CC
  W32(c->r[4]+0x00000000u,c->r[3]); // 804F20D0
  c->r[7]=R8(c->r[7]+0x00000000u); // 804F20D4
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 804F20D8
  W32(c->r[4]+0x00000000u,c->r[5]); // 804F20DC
  c->r[30]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 804F20E0
  c->r[3]=R8(c->r[3]+0x00000000u); // 804F20E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804F20E8
  c->r[31]=R8(c->r[5]+0x00000000u); // 804F20EC
  c->r[31]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[31]&~0x0000FF00u); // 804F20F0
  c->lr=0x804F20F8u; f_80505D54(c); // 804F20F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 804F20F8
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 804F20FC
  c->r[3]=c->r[0]-c->r[30]; // 804F2100
  c->r[0]=c->r[3]+0x00000001u; // 804F2104
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804F2108
  c->r[4]=sraw(c,c->r[4],16); // 804F210C
  c->r[3]=c->r[4]+c->r[30]; // 804F2110
L_804F2114:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2118
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F211C
  c->lr=c->r[0]; // 804F2120
  c->r[1]=c->r[1]+0x00000010u; // 804F2124
  return; // 804F2128
}

// ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl
void f_804F212C(Ctx* __restrict c) {
  trace_call(0x804F212Cu);
  c->r[0]=R8(c->r[4]+c->r[3]); // 804F212C
  c->r[6]=c->r[4]+c->r[3]; // 804F2130
  cmpu(c,0,c->r[0],0x000000FEu); // 804F2134
  if (crb(c,2)) { goto L_804F214C; } // 804F2138
  c->r[0]=0u+0x00000001u; // 804F213C
  c->r[3]=c->r[4]|c->r[4]; // 804F2140
  W32(c->r[5]+0x00000000u,c->r[0]); // 804F2144
  return; // 804F2148
L_804F214C:;
  c->r[7]=R8(c->r[6]+0x00000001u); // 804F214C
  c->r[3]=c->r[4]+0x00000003u; // 804F2150
  c->r[0]=R8(c->r[6]+0x00000002u); // 804F2154
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 804F2158
  c->r[7]=c->r[7]|c->r[0]; // 804F215C
  W32(c->r[5]+0x00000000u,c->r[7]); // 804F2160
  return; // 804F2164
}

// __ct__Q44nw4r3snd6detail11MmlSeqTrackFv
void f_804F2168(Ctx* __restrict c) {
  trace_call(0x804F2168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2168
  c->r[0]=c->lr; // 804F216C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2174
  c->r[31]=c->r[3]|c->r[3]; // 804F2178
  c->lr=0x804F2180u; f_804F4F64(c); // 804F217C
  c->r[4]=0u+0x80720000u; // 804F2180
  c->r[3]=c->r[31]|c->r[31]; // 804F2184
  c->r[4]=c->r[4]+0xFFFFB878u; // 804F2188
  W32(c->r[31]+0x00000000u,c->r[4]); // 804F218C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2190
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2194
  c->lr=c->r[0]; // 804F2198
  c->r[1]=c->r[1]+0x00000010u; // 804F219C
  return; // 804F21A0
}

// Parse__Q44nw4r3snd6detail11MmlSeqTrackFb
void f_804F21A4(Ctx* __restrict c) {
  trace_call(0x804F21A4u);
  c->r[0]=c->r[3]|c->r[3]; // 804F21A4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 804F21A8
  c->r[5]=c->r[4]|c->r[4]; // 804F21AC
  c->r[4]=c->r[0]|c->r[0]; // 804F21B0
  f_804F0FC4(c); return; // 804F21B4
}

// fn_804F21B8
void f_804F21B8(Ctx* __restrict c) {
  trace_call(0x804F21B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F21B8
  c->r[0]=c->lr; // 804F21BC
  cmps(c,0,(int32_t)c->r[3],0); // 804F21C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F21C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F21C8
  c->r[31]=c->r[4]|c->r[4]; // 804F21CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F21D0
  c->r[30]=c->r[3]|c->r[3]; // 804F21D4
  if (crb(c,2)) { goto L_804F21F4; } // 804F21D8
  c->r[4]=0u+0x00000000u; // 804F21DC
  c->lr=0x804F21E4u; f_804F4FF4(c); // 804F21E0
  cmps(c,0,(int32_t)c->r[31],0); // 804F21E4
  if (!crb(c,1)) { goto L_804F21F4; } // 804F21E8
  c->r[3]=c->r[30]|c->r[30]; // 804F21EC
  c->lr=0x804F21F4u; f_803A9400(c); // 804F21F0
L_804F21F4:;
  c->r[3]=c->r[30]|c->r[30]; // 804F21F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F21F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F21FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2200
  c->lr=c->r[0]; // 804F2204
  c->r[1]=c->r[1]+0x00000010u; // 804F2208
  return; // 804F220C
}

// AllocTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail9SeqPlayer
void f_804F2210(Ctx* __restrict c) {
  trace_call(0x804F2210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2210
  c->r[0]=c->lr; // 804F2214
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F221C
  c->r[31]=c->r[4]|c->r[4]; // 804F2220
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F2224
  c->r[30]=c->r[3]|c->r[3]; // 804F2228
  c->r[3]=c->r[3]+0x00000008u; // 804F222C
  c->lr=0x804F2234u; f_804F0CDC(c); // 804F2230
  cmps(c,0,(int32_t)c->r[3],0); // 804F2234
  if (!crb(c,2)) { goto L_804F2244; } // 804F2238
  c->r[3]=0u+0x00000000u; // 804F223C
  goto L_804F224C; // 804F2240
L_804F2244:;
  if (crb(c,2)) { goto L_804F224C; } // 804F2244
  c->lr=0x804F224Cu; f_804F2168(c); // 804F2248
L_804F224C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F224C
  if (crb(c,2)) { goto L_804F2260; } // 804F2250
  W32(c->r[3]+0x000000C0u,c->r[31]); // 804F2254
  c->r[0]=R32(c->r[30]+0x00000004u); // 804F2258
  W32(c->r[3]+0x000000C8u,c->r[0]); // 804F225C
L_804F2260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2264
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F2268
  c->lr=c->r[0]; // 804F226C
  c->r[1]=c->r[1]+0x00000010u; // 804F2270
  return; // 804F2274
}

// FreeTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail8SeqTrack
void f_804F2278(Ctx* __restrict c) {
  trace_call(0x804F2278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2278
  c->r[0]=c->lr; // 804F227C
  cmps(c,0,(int32_t)c->r[4],0); // 804F2280
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2284
  c->r[0]=0u+0x00000000u; // 804F2288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F228C
  c->r[31]=c->r[4]|c->r[4]; // 804F2290
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F2294
  c->r[30]=c->r[3]|c->r[3]; // 804F2298
  W32(c->r[4]+0x000000C0u,c->r[0]); // 804F229C
  if (crb(c,2)) { goto L_804F22C8; } // 804F22A0
  c->r[12]=R32(c->r[31]+0x00000000u); // 804F22A4
  c->r[3]=c->r[31]|c->r[31]; // 804F22A8
  c->r[4]=0u+0xFFFFFFFFu; // 804F22AC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F22B0
  c->ctr=c->r[12]; // 804F22B4
  if (true) { c->lr=0x804F22BCu; dispatch(c,c->ctr); } // 804F22B8
  c->r[4]=c->r[31]|c->r[31]; // 804F22BC
  c->r[3]=c->r[30]+0x00000008u; // 804F22C0
  c->lr=0x804F22C8u; f_804F0D38(c); // 804F22C4
L_804F22C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F22C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F22CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F22D0
  c->lr=c->r[0]; // 804F22D4
  c->r[1]=c->r[1]+0x00000010u; // 804F22D8
  return; // 804F22DC
}

// Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
void f_804F22E0(Ctx* __restrict c) {
  trace_call(0x804F22E0u);
  c->r[6]=0u+0x000000CCu; // 804F22E0
  c->r[3]=c->r[3]+0x00000008u; // 804F22E4
  f_804F0AC8(c); return; // 804F22E8
}

// fn_804F22EC
void f_804F22EC(Ctx* __restrict c) {
  trace_call(0x804F22ECu);
  c->r[3]=c->r[3]+0x00000008u; // 804F22EC
  f_804F0C8C(c); return; // 804F22F0
}

// fn_804F22F4
void f_804F22F4(Ctx* __restrict c) {
  trace_call(0x804F22F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F22F4
  c->r[0]=c->lr; // 804F22F8
  cmps(c,0,(int32_t)c->r[3],0); // 804F22FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2300
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2304
  c->r[31]=c->r[3]|c->r[3]; // 804F2308
  if (crb(c,2)) { goto L_804F231C; } // 804F230C
  cmps(c,0,(int32_t)c->r[4],0); // 804F2310
  if (!crb(c,1)) { goto L_804F231C; } // 804F2314
  c->lr=0x804F231Cu; f_803A9400(c); // 804F2318
L_804F231C:;
  c->r[3]=c->r[31]|c->r[31]; // 804F231C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2320
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2324
  c->lr=c->r[0]; // 804F2328
  c->r[1]=c->r[1]+0x00000010u; // 804F232C
  return; // 804F2330
}

// __ct__Q44nw4r3snd6detail10PlayerHeapFv
void f_804F2334(Ctx* __restrict c) {
  trace_call(0x804F2334u);
  c->r[4]=0u+0x80720000u; // 804F2334
  c->r[0]=0u+0x00000000u; // 804F2338
  c->r[4]=c->r[4]+0xFFFFB8A0u; // 804F233C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804F2340
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F2344
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2348
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804F234C
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F2350
  W32(c->r[3]+0x00000014u,c->r[0]); // 804F2354
  W32(c->r[3]+0x00000018u,c->r[0]); // 804F2358
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804F235C
  return; // 804F2360
}

// __dt__Q44nw4r3snd6detail10PlayerHeapFv
void f_804F2364(Ctx* __restrict c) {
  trace_call(0x804F2364u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2364
  c->r[0]=c->lr; // 804F2368
  cmps(c,0,(int32_t)c->r[3],0); // 804F236C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F2370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2374
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2378
  c->r[30]=c->r[4]|c->r[4]; // 804F237C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2380
  c->r[29]=c->r[3]|c->r[3]; // 804F2384
  if (crb(c,2)) { goto L_804F2408; } // 804F2388
  c->r[4]=0u+0x80720000u; // 804F238C
  c->r[4]=c->r[4]+0xFFFFB8A0u; // 804F2390
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F2394
  c->lr=0x804F239Cu; f_804FD930(c); // 804F2398
  c->r[3]=c->r[3]+0x00000354u; // 804F239C
  c->lr=0x804F23A4u; f_8037CD84(c); // 804F23A0
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 804F23A4
  c->lr=0x804F23ACu; f_804ED804(c); // 804F23A8
  c->r[0]=R32(c->r[29]+0x00000014u); // 804F23AC
  c->r[4]=c->r[31]|c->r[31]; // 804F23B0
  c->r[6]=0u+0x00000000u; // 804F23B4
  c->r[5]=c->r[0]-c->r[31]; // 804F23B8
  c->lr=0x804F23C0u; f_804ED91C(c); // 804F23BC
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 804F23C0
  c->lr=0x804F23C8u; f_804ED804(c); // 804F23C4
  c->r[0]=R32(c->r[29]+0x00000014u); // 804F23C8
  c->r[4]=c->r[31]|c->r[31]; // 804F23CC
  c->r[6]=0u+0x00000000u; // 804F23D0
  c->r[5]=c->r[0]-c->r[31]; // 804F23D4
  c->lr=0x804F23DCu; f_804EDA58(c); // 804F23D8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804F23DC
  W32(c->r[29]+0x00000014u,c->r[0]); // 804F23E0
  c->lr=0x804F23E8u; f_804FD930(c); // 804F23E4
  c->r[3]=c->r[3]+0x00000354u; // 804F23E8
  c->lr=0x804F23F0u; f_8037CE60(c); // 804F23EC
  c->r[0]=0u+0x00000000u; // 804F23F0
  cmps(c,0,(int32_t)c->r[30],0); // 804F23F4
  W32(c->r[29]+0x00000014u,c->r[0]); // 804F23F8
  if (!crb(c,1)) { goto L_804F2408; } // 804F23FC
  c->r[3]=c->r[29]|c->r[29]; // 804F2400
  c->lr=0x804F2408u; f_803A9400(c); // 804F2404
L_804F2408:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2408
  c->r[3]=c->r[29]|c->r[29]; // 804F240C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2410
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F2414
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2418
  c->lr=c->r[0]; // 804F241C
  c->r[1]=c->r[1]+0x00000020u; // 804F2420
  return; // 804F2424
}

// Create__Q44nw4r3snd6detail10PlayerHeapFPvUl
void f_804F2428(Ctx* __restrict c) {
  trace_call(0x804F2428u);
  c->r[0]=c->r[4]+0x0000001Fu; // 804F2428
  c->r[4]=c->r[5]+c->r[4]; // 804F242C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F2430
  cmpu(c,0,c->r[0],c->r[4]); // 804F2434
  if (!crb(c,1)) { goto L_804F2444; } // 804F2438
  c->r[3]=0u+0x00000000u; // 804F243C
  return; // 804F2440
L_804F2444:;
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804F2444
  W32(c->r[3]+0x00000010u,c->r[4]); // 804F2448
  W32(c->r[3]+0x00000014u,c->r[0]); // 804F244C
  c->r[3]=0u+0x00000001u; // 804F2450
  return; // 804F2454
}

// Alloc__Q44nw4r3snd6detail10PlayerHeapFUl
void f_804F2458(Ctx* __restrict c) {
  trace_call(0x804F2458u);
  c->r[5]=R32(c->r[3]+0x00000014u); // 804F2458
  c->r[0]=R32(c->r[3]+0x00000010u); // 804F245C
  c->r[4]=c->r[4]+c->r[5]; // 804F2460
  cmpu(c,0,c->r[4],c->r[0]); // 804F2464
  if (!crb(c,1)) { goto L_804F2474; } // 804F2468
  c->r[3]=0u+0x00000000u; // 804F246C
  return; // 804F2470
L_804F2474:;
  c->r[0]=c->r[4]+0x0000001Fu; // 804F2474
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804F2478
  W32(c->r[3]+0x00000014u,c->r[0]); // 804F247C
  c->r[3]=c->r[5]|c->r[5]; // 804F2480
  return; // 804F2484
}

// Clear__Q44nw4r3snd6detail10PlayerHeapFv
void f_804F2488(Ctx* __restrict c) {
  trace_call(0x804F2488u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2488
  c->r[0]=c->lr; // 804F248C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2494
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F2498
  c->r[30]=c->r[3]|c->r[3]; // 804F249C
  c->lr=0x804F24A4u; f_804FD930(c); // 804F24A0
  c->r[3]=c->r[3]+0x00000354u; // 804F24A4
  c->lr=0x804F24ACu; f_8037CD84(c); // 804F24A8
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 804F24AC
  c->lr=0x804F24B4u; f_804ED804(c); // 804F24B0
  c->r[0]=R32(c->r[30]+0x00000014u); // 804F24B4
  c->r[4]=c->r[31]|c->r[31]; // 804F24B8
  c->r[6]=0u+0x00000000u; // 804F24BC
  c->r[5]=c->r[0]-c->r[31]; // 804F24C0
  c->lr=0x804F24C8u; f_804ED91C(c); // 804F24C4
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 804F24C8
  c->lr=0x804F24D0u; f_804ED804(c); // 804F24CC
  c->r[0]=R32(c->r[30]+0x00000014u); // 804F24D0
  c->r[4]=c->r[31]|c->r[31]; // 804F24D4
  c->r[6]=0u+0x00000000u; // 804F24D8
  c->r[5]=c->r[0]-c->r[31]; // 804F24DC
  c->lr=0x804F24E4u; f_804EDA58(c); // 804F24E0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804F24E4
  W32(c->r[30]+0x00000014u,c->r[0]); // 804F24E8
  c->lr=0x804F24F0u; f_804FD930(c); // 804F24EC
  c->r[3]=c->r[3]+0x00000354u; // 804F24F0
  c->lr=0x804F24F8u; f_8037CE60(c); // 804F24F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F24F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F24FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F2500
  c->lr=c->r[0]; // 804F2504
  c->r[1]=c->r[1]+0x00000010u; // 804F2508
  return; // 804F250C
}

// fn_804F2510
void f_804F2510(Ctx* __restrict c) {
  trace_call(0x804F2510u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 804F2510
  c->r[0]=R32(c->r[3]+0x00000010u); // 804F2514
  c->r[3]=c->r[0]-c->r[4]; // 804F2518
  return; // 804F251C
}

// AttachSound__Q44nw4r3snd6detail10PlayerHeapFPQ44nw4r3snd6detail10BasicSound
void f_804F2520(Ctx* __restrict c) {
  trace_call(0x804F2520u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 804F2520
  return; // 804F2524
}

// DetachSound__Q44nw4r3snd6detail10PlayerHeapFPQ44nw4r3snd6detail10BasicSound
void f_804F2528(Ctx* __restrict c) {
  trace_call(0x804F2528u);
  c->r[0]=0u+0x00000000u; // 804F2528
  W32(c->r[3]+0x00000004u,c->r[0]); // 804F252C
  return; // 804F2530
}

// __ct__Q34nw4r3snd13RemoteSpeakerFv
void f_804F2534(Ctx* __restrict c) {
  trace_call(0x804F2534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2534
  c->r[0]=c->lr; // 804F2538
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F253C
  c->r[0]=0u+0x00000000u; // 804F2540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2544
  c->r[31]=c->r[3]|c->r[3]; // 804F2548
  W8(c->r[3]+0x00000000u,c->r[0]); // 804F254C
  W8(c->r[3]+0x00000001u,c->r[0]); // 804F2550
  W8(c->r[3]+0x00000002u,c->r[0]); // 804F2554
  W8(c->r[3]+0x00000003u,c->r[0]); // 804F2558
  W8(c->r[3]+0x00000004u,c->r[0]); // 804F255C
  W8(c->r[3]+0x00000005u,c->r[0]); // 804F2560
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2564
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804F2568
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F256C
  W32(c->r[3]+0x00000038u,c->r[0]); // 804F2570
  c->r[3]=c->r[3]+0x00000040u; // 804F2574
  c->lr=0x804F257Cu; f_80376140(c); // 804F2578
  c->r[4]=c->r[31]|c->r[31]; // 804F257C
  c->r[3]=c->r[31]+0x00000040u; // 804F2580
  c->lr=0x804F2588u; f_803768B4(c); // 804F2584
  c->r[3]=c->r[31]+0x00000070u; // 804F2588
  c->lr=0x804F2590u; f_80376140(c); // 804F258C
  c->r[4]=c->r[31]|c->r[31]; // 804F2590
  c->r[3]=c->r[31]+0x00000070u; // 804F2594
  c->lr=0x804F259Cu; f_803768B4(c); // 804F2598
  c->r[3]=c->r[31]|c->r[31]; // 804F259C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F25A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F25A4
  c->lr=c->r[0]; // 804F25A8
  c->r[1]=c->r[1]+0x00000010u; // 804F25AC
  return; // 804F25B0
}

// fn_804F25B4
void f_804F25B4(Ctx* __restrict c) {
  trace_call(0x804F25B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F25B4
  c->r[0]=c->lr; // 804F25B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F25BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F25C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F25C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F25C8
  c->r[29]=c->r[4]|c->r[4]; // 804F25CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F25D0
  c->r[28]=c->r[3]|c->r[3]; // 804F25D4
  c->lr=0x804F25DCu; f_8037BBA4(c); // 804F25D8
  c->r[30]=0u+0x00000000u; // 804F25DC
  c->r[31]=c->r[3]|c->r[3]; // 804F25E0
  W8(c->r[28]+0x00000001u,c->r[30]); // 804F25E4
  c->r[3]=c->r[28]+0x00000040u; // 804F25E8
  W8(c->r[28]+0x00000002u,c->r[30]); // 804F25EC
  c->lr=0x804F25F4u; f_80376494(c); // 804F25F0
  W8(c->r[28]+0x00000006u,c->r[30]); // 804F25F4
  c->r[3]=c->r[28]+0x00000070u; // 804F25F8
  c->lr=0x804F2600u; f_80376494(c); // 804F25FC
  c->r[12]=R32(c->r[28]+0x00000038u); // 804F2600
  c->r[0]=0u+0x00000001u; // 804F2604
  W8(c->r[28]+0x00000007u,c->r[30]); // 804F2608
  cmps(c,0,(int32_t)c->r[12],0); // 804F260C
  W8(c->r[28]+0x00000006u,c->r[30]); // 804F2610
  W8(c->r[28]+0x00000001u,c->r[30]); // 804F2614
  W8(c->r[28]+0x00000002u,c->r[0]); // 804F2618
  W8(c->r[28]+0x00000007u,c->r[30]); // 804F261C
  if (crb(c,2)) { goto L_804F2638; } // 804F2620
  c->r[3]=R32(c->r[28]+0x00000034u); // 804F2624
  c->r[4]=0u+0x00000000u; // 804F2628
  c->ctr=c->r[12]; // 804F262C
  if (true) { c->lr=0x804F2634u; dispatch(c,c->ctr); } // 804F2630
  W8(c->r[28]+0x00000004u,c->r[30]); // 804F2634
L_804F2638:;
  c->r[0]=0u+0x00000001u; // 804F2638
  W32(c->r[28]+0x00000038u,c->r[29]); // 804F263C
  c->r[3]=c->r[31]|c->r[31]; // 804F2640
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 804F2644
  W8(c->r[28]+0x00000000u,c->r[0]); // 804F2648
  c->lr=0x804F2650u; f_8037BBCC(c); // 804F264C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2650
  c->r[3]=0u+0x00000001u; // 804F2654
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2658
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F265C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F2660
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2664
  c->lr=c->r[0]; // 804F2668
  c->r[1]=c->r[1]+0x00000020u; // 804F266C
  return; // 804F2670
}

// fn_804F2674
void f_804F2674(Ctx* __restrict c) {
  trace_call(0x804F2674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2674
  c->r[0]=c->lr; // 804F2678
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F267C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2680
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2684
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2688
  c->r[29]=c->r[4]|c->r[4]; // 804F268C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F2690
  c->r[28]=c->r[3]|c->r[3]; // 804F2694
  c->lr=0x804F269Cu; f_8037BBA4(c); // 804F2698
  c->r[30]=0u+0x00000000u; // 804F269C
  c->r[31]=c->r[3]|c->r[3]; // 804F26A0
  W8(c->r[28]+0x00000001u,c->r[30]); // 804F26A4
  c->r[3]=c->r[28]+0x00000040u; // 804F26A8
  W8(c->r[28]+0x00000002u,c->r[30]); // 804F26AC
  c->lr=0x804F26B4u; f_80376494(c); // 804F26B0
  W8(c->r[28]+0x00000006u,c->r[30]); // 804F26B4
  c->r[3]=c->r[28]+0x00000070u; // 804F26B8
  c->lr=0x804F26C0u; f_80376494(c); // 804F26BC
  c->r[12]=R32(c->r[28]+0x00000038u); // 804F26C0
  W8(c->r[28]+0x00000007u,c->r[30]); // 804F26C4
  cmps(c,0,(int32_t)c->r[12],0); // 804F26C8
  if (crb(c,2)) { goto L_804F26E4; } // 804F26CC
  c->r[3]=R32(c->r[28]+0x00000034u); // 804F26D0
  c->r[4]=0u+0x00000000u; // 804F26D4
  c->ctr=c->r[12]; // 804F26D8
  if (true) { c->lr=0x804F26E0u; dispatch(c,c->ctr); } // 804F26DC
  W8(c->r[28]+0x00000004u,c->r[30]); // 804F26E0
L_804F26E4:;
  c->r[3]=0u+0x00000003u; // 804F26E4
  c->r[0]=0u+0x00000000u; // 804F26E8
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 804F26EC
  c->r[3]=c->r[31]|c->r[31]; // 804F26F0
  W32(c->r[28]+0x00000038u,c->r[29]); // 804F26F4
  W8(c->r[28]+0x00000000u,c->r[0]); // 804F26F8
  c->lr=0x804F2700u; f_8037BBCC(c); // 804F26FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2700
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2704
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2708
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F270C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F2710
  c->lr=c->r[0]; // 804F2714
  c->r[1]=c->r[1]+0x00000020u; // 804F2718
  return; // 804F271C
}

// fn_804F2720
void f_804F2720(Ctx* __restrict c) {
  trace_call(0x804F2720u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 804F2720
  cmps(c,0,(int32_t)c->r[0],0); // 804F2724
  if (crb(c,2)) { goto L_804F2734; } // 804F2728
  c->r[3]=R8(c->r[3]+0x00000002u); // 804F272C
  return; // 804F2730
L_804F2734:;
  c->r[3]=0u+0x00000000u; // 804F2734
  return; // 804F2738
}

// fn_804F273C
void f_804F273C(Ctx* __restrict c) {
  trace_call(0x804F273Cu);
  c->r[0]=R8(c->r[3]+0x00000005u); // 804F273C
  cmps(c,0,(int32_t)c->r[0],0); // 804F2740
  if (!crb(c,2)) return; // 804F2744
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 804F2748
  cmps(c,0,(int32_t)c->r[4],0); // 804F274C
  if (crb(c,2)) { goto L_804F2758; } // 804F2750
  goto L_804F275C; // 804F2754
L_804F2758:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 804F2758
L_804F275C:;
  c->r[0]=0u+0x00000000u; // 804F275C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804F2760
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F2764
  goto L_804F2770; // 804F2768
  return; // 804F276C
L_804F2770:;
  cmps(c,0,(int32_t)c->r[4],2); // 804F2770
  if (crb(c,2)) { goto L_804F27BC; } // 804F2774
  if (!crb(c,0)) { goto L_804F278C; } // 804F2778
  cmps(c,0,(int32_t)c->r[4],0); // 804F277C
  if (crb(c,2)) return; // 804F2780
  if (!crb(c,0)) { goto L_804F2798; } // 804F2784
  return; // 804F2788
L_804F278C:;
  cmps(c,0,(int32_t)c->r[4],4); // 804F278C
  if (!crb(c,0)) return; // 804F2790
  goto L_804F27E4; // 804F2794
L_804F2798:;
  c->r[0]=0u+0x00000001u; // 804F2798
  c->r[5]=0u+0x804F0000u; // 804F279C
  W8(c->r[3]+0x00000004u,c->r[0]); // 804F27A0
  c->r[5]=c->r[5]+0x00002B14u; // 804F27A4
  c->r[4]=0u+0x00000001u; // 804F27A8
  W8(c->r[3]+0x00000005u,c->r[0]); // 804F27AC
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F27B0
  c->r[3]=R32(c->r[3]+0x00000034u); // 804F27B4
  f_80400028(c); return; // 804F27B8
L_804F27BC:;
  c->r[6]=0u+0x00000001u; // 804F27BC
  c->r[0]=0u+0x00000003u; // 804F27C0
  c->r[5]=0u+0x804F0000u; // 804F27C4
  W8(c->r[3]+0x00000004u,c->r[6]); // 804F27C8
  c->r[5]=c->r[5]+0x00002C20u; // 804F27CC
  c->r[4]=0u+0x00000004u; // 804F27D0
  W8(c->r[3]+0x00000005u,c->r[6]); // 804F27D4
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F27D8
  c->r[3]=R32(c->r[3]+0x00000034u); // 804F27DC
  f_80400028(c); return; // 804F27E0
L_804F27E4:;
  c->r[6]=0u+0x00000001u; // 804F27E4
  c->r[0]=0u+0x00000005u; // 804F27E8
  c->r[5]=0u+0x804F0000u; // 804F27EC
  W8(c->r[3]+0x00000004u,c->r[6]); // 804F27F0
  c->r[5]=c->r[5]+0x00002D08u; // 804F27F4
  c->r[4]=0u+0x00000000u; // 804F27F8
  W8(c->r[3]+0x00000005u,c->r[6]); // 804F27FC
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2800
  c->r[3]=R32(c->r[3]+0x00000034u); // 804F2804
  f_80400028(c); return; // 804F2808
  return; // 804F280C
}

// UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs
void f_804F2810(Ctx* __restrict c) {
  trace_call(0x804F2810u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2810
  c->r[0]=c->lr; // 804F2814
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F2818
  c->r[11]=c->r[1]+0x00000040u; // 804F281C
  c->lr=0x804F2824u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F2820
  c->r[0]=R32(c->r[3]+0x00000008u); // 804F2824
  c->r[29]=c->r[3]|c->r[3]; // 804F2828
  c->r[25]=c->r[4]|c->r[4]; // 804F282C
  cmps(c,0,(int32_t)c->r[0],4); // 804F2830
  if (!crb(c,2)) { goto L_804F2AFC; } // 804F2834
  c->r[0]=R8(c->r[3]+0x00000002u); // 804F2838
  c->r[30]=0u+0x00000001u; // 804F283C
  cmps(c,0,(int32_t)c->r[0],0); // 804F2840
  if (crb(c,2)) { goto L_804F2934; } // 804F2844
  c->r[0]=0u+0x00000002u; // 804F2848
  c->r[6]=c->r[25]|c->r[25]; // 804F284C
  c->r[5]=0u+0x00000001u; // 804F2850
  c->r[4]=0u+0x00000000u; // 804F2854
  c->ctr=c->r[0]; // 804F2858
L_804F285C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 804F285C
  cmps(c,0,(int32_t)c->r[0],0); // 804F2860
  if (crb(c,2)) { goto L_804F2870; } // 804F2864
  c->r[5]=0u+0x00000000u; // 804F2868
  goto L_804F2938; // 804F286C
L_804F2870:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 804F2870
  cmps(c,0,(int32_t)c->r[0],0); // 804F2874
  if (crb(c,2)) { goto L_804F2884; } // 804F2878
  c->r[5]=0u+0x00000000u; // 804F287C
  goto L_804F2938; // 804F2880
L_804F2884:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 804F2884
  cmps(c,0,(int32_t)c->r[0],0); // 804F2888
  if (crb(c,2)) { goto L_804F2898; } // 804F288C
  c->r[5]=0u+0x00000000u; // 804F2890
  goto L_804F2938; // 804F2894
L_804F2898:;
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 804F2898
  cmps(c,0,(int32_t)c->r[0],0); // 804F289C
  if (crb(c,2)) { goto L_804F28AC; } // 804F28A0
  c->r[5]=0u+0x00000000u; // 804F28A4
  goto L_804F2938; // 804F28A8
L_804F28AC:;
  c->r[0]=R32(c->r[6]+0x00000010u); // 804F28AC
  cmps(c,0,(int32_t)c->r[0],0); // 804F28B0
  if (crb(c,2)) { goto L_804F28C0; } // 804F28B4
  c->r[5]=0u+0x00000000u; // 804F28B8
  goto L_804F2938; // 804F28BC
L_804F28C0:;
  c->r[0]=R32(c->r[6]+0x00000014u); // 804F28C0
  cmps(c,0,(int32_t)c->r[0],0); // 804F28C4
  if (crb(c,2)) { goto L_804F28D4; } // 804F28C8
  c->r[5]=0u+0x00000000u; // 804F28CC
  goto L_804F2938; // 804F28D0
L_804F28D4:;
  c->r[0]=R32(c->r[6]+0x00000018u); // 804F28D4
  cmps(c,0,(int32_t)c->r[0],0); // 804F28D8
  if (crb(c,2)) { goto L_804F28E8; } // 804F28DC
  c->r[5]=0u+0x00000000u; // 804F28E0
  goto L_804F2938; // 804F28E4
L_804F28E8:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 804F28E8
  cmps(c,0,(int32_t)c->r[0],0); // 804F28EC
  if (crb(c,2)) { goto L_804F28FC; } // 804F28F0
  c->r[5]=0u+0x00000000u; // 804F28F4
  goto L_804F2938; // 804F28F8
L_804F28FC:;
  c->r[0]=R32(c->r[6]+0x00000020u); // 804F28FC
  cmps(c,0,(int32_t)c->r[0],0); // 804F2900
  if (crb(c,2)) { goto L_804F2910; } // 804F2904
  c->r[5]=0u+0x00000000u; // 804F2908
  goto L_804F2938; // 804F290C
L_804F2910:;
  c->r[0]=R32(c->r[6]+0x00000024u); // 804F2910
  cmps(c,0,(int32_t)c->r[0],0); // 804F2914
  if (crb(c,2)) { goto L_804F2924; } // 804F2918
  c->r[5]=0u+0x00000000u; // 804F291C
  goto L_804F2938; // 804F2920
L_804F2924:;
  c->r[6]=c->r[6]+0x00000028u; // 804F2924
  c->r[4]=c->r[4]+0x00000009u; // 804F2928
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F285C; } // 804F292C
  goto L_804F2938; // 804F2930
L_804F2934:;
  c->r[5]=0u+0x00000001u; // 804F2934
L_804F2938:;
  cmps(c,0,(int32_t)c->r[5],0); // 804F2938
  if (crb(c,2)) { goto L_804F2944; } // 804F293C
  c->r[30]=0u+0x00000000u; // 804F2940
L_804F2944:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 804F2944
  c->r[26]=0u+0x00000000u; // 804F2948
  cmps(c,0,(int32_t)c->r[0],0); // 804F294C
  if (!crb(c,2)) { goto L_804F2960; } // 804F2950
  cmps(c,0,(int32_t)c->r[30],0); // 804F2954
  if (crb(c,2)) { goto L_804F2960; } // 804F2958
  c->r[26]=0u+0x00000001u; // 804F295C
L_804F2960:;
  cmps(c,0,(int32_t)c->r[0],0); // 804F2960
  c->r[31]=0u+0x00000000u; // 804F2964
  if (crb(c,2)) { goto L_804F2978; } // 804F2968
  cmps(c,0,(int32_t)c->r[30],0); // 804F296C
  if (!crb(c,2)) { goto L_804F2978; } // 804F2970
  c->r[31]=0u+0x00000001u; // 804F2974
L_804F2978:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F2978
  if (crb(c,2)) { goto L_804F2A34; } // 804F297C
  c->lr=0x804F2984u; f_8037BBA4(c); // 804F2980
  c->r[28]=c->r[3]|c->r[3]; // 804F2984
  c->r[3]=R32(c->r[29]+0x00000034u); // 804F2988
  c->lr=0x804F2990u; f_80401800(c); // 804F298C
  cmps(c,0,(int32_t)c->r[3],0); // 804F2990
  if (!crb(c,2)) { goto L_804F29A4; } // 804F2994
  c->r[3]=c->r[28]|c->r[28]; // 804F2998
  c->lr=0x804F29A0u; f_8037BBCC(c); // 804F299C
  goto L_804F2AFC; // 804F29A0
L_804F29A4:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 804F29A4
  c->r[27]=0u+0x00000000u; // 804F29A8
  c->r[5]=c->r[25]|c->r[25]; // 804F29AC
  c->r[3]=c->r[29]+0x00000014u; // 804F29B0
  c->r[0]=cntlz(c->r[0]); // 804F29B4
  W8(c->r[29]+0x00000003u,c->r[27]); // 804F29B8
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 804F29BC
  c->r[7]=c->r[1]+0x00000008u; // 804F29C0
  c->r[6]=0u+0x00000028u; // 804F29C4
  c->lr=0x804F29CCu; f_804134E8(c); // 804F29C8
  c->r[3]=R32(c->r[29]+0x00000034u); // 804F29CC
  c->r[4]=c->r[1]+0x00000008u; // 804F29D0
  c->r[5]=0u+0x00000014u; // 804F29D4
  c->lr=0x804F29DCu; f_80401884(c); // 804F29D8
  cmps(c,0,(int32_t)c->r[3],0); // 804F29DC
  if (crb(c,2)) { goto L_804F2A2C; } // 804F29E0
  c->r[30]=0u+0x00000001u; // 804F29E4
  W32(c->r[29]+0x00000008u,c->r[27]); // 804F29E8
  c->r[3]=c->r[29]+0x00000040u; // 804F29EC
  W32(c->r[29]+0x00000010u,c->r[30]); // 804F29F0
  W8(c->r[29]+0x00000001u,c->r[27]); // 804F29F4
  W8(c->r[29]+0x00000002u,c->r[27]); // 804F29F8
  c->lr=0x804F2A00u; f_80376494(c); // 804F29FC
  W8(c->r[29]+0x00000006u,c->r[27]); // 804F2A00
  c->r[3]=c->r[29]+0x00000070u; // 804F2A04
  c->lr=0x804F2A0Cu; f_80376494(c); // 804F2A08
  W8(c->r[29]+0x00000007u,c->r[27]); // 804F2A0C
  c->r[3]=c->r[28]|c->r[28]; // 804F2A10
  W8(c->r[29]+0x00000006u,c->r[27]); // 804F2A14
  W8(c->r[29]+0x00000001u,c->r[27]); // 804F2A18
  W8(c->r[29]+0x00000002u,c->r[30]); // 804F2A1C
  W8(c->r[29]+0x00000007u,c->r[27]); // 804F2A20
  c->lr=0x804F2A28u; f_8037BBCC(c); // 804F2A24
  goto L_804F2AFC; // 804F2A28
L_804F2A2C:;
  c->r[3]=c->r[28]|c->r[28]; // 804F2A2C
  c->lr=0x804F2A34u; f_8037BBCC(c); // 804F2A30
L_804F2A34:;
  cmps(c,0,(int32_t)c->r[26],0); // 804F2A34
  if (crb(c,2)) { goto L_804F2AB0; } // 804F2A38
  c->lr=0x804F2A40u; f_8037BBA4(c); // 804F2A3C
  c->r[0]=R8(c->r[29]+0x00000006u); // 804F2A40
  c->r[28]=c->r[3]|c->r[3]; // 804F2A44
  cmps(c,0,(int32_t)c->r[0],0); // 804F2A48
  if (!crb(c,2)) { goto L_804F2A98; } // 804F2A4C
  c->r[3]=0u+0x80000000u; // 804F2A50
  c->r[7]=0u+0x804F0000u; // 804F2A54
  c->r[0]=R32(c->r[3]+0x000000F8u); // 804F2A58
  c->r[4]=0u+0x000001E0u; // 804F2A5C
  c->r[5]=0u+0x00000000u; // 804F2A60
  c->r[3]=c->r[29]+0x00000040u; // 804F2A64
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804F2A68
  c->r[7]=c->r[7]+0x00002DF0u; // 804F2A6C
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 804F2A70
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 804F2A74
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)480); // 804F2A78
  c->r[5]=c->r[0]+c->r[4]; // 804F2A7C
  c->lr=0x804F2A84u; f_803763A0(c); // 804F2A80
  c->lr=0x804F2A88u; f_8037FD18(c); // 804F2A84
  c->r[0]=0u+0x00000001u; // 804F2A88
  W32(c->r[29]+0x000000A4u,c->r[4]); // 804F2A8C
  W32(c->r[29]+0x000000A0u,c->r[3]); // 804F2A90
  W8(c->r[29]+0x00000006u,c->r[0]); // 804F2A94
L_804F2A98:;
  c->r[3]=c->r[29]+0x00000070u; // 804F2A98
  c->lr=0x804F2AA0u; f_80376494(c); // 804F2A9C
  c->r[0]=0u+0x00000000u; // 804F2AA0
  c->r[3]=c->r[28]|c->r[28]; // 804F2AA4
  W8(c->r[29]+0x00000007u,c->r[0]); // 804F2AA8
  c->lr=0x804F2AB0u; f_8037BBCC(c); // 804F2AAC
L_804F2AB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F2AB0
  if (crb(c,2)) { goto L_804F2AF8; } // 804F2AB4
  c->lr=0x804F2ABCu; f_8037BBA4(c); // 804F2AB8
  c->r[0]=0u+0x00000001u; // 804F2ABC
  c->r[28]=c->r[3]|c->r[3]; // 804F2AC0
  W8(c->r[29]+0x00000007u,c->r[0]); // 804F2AC4
  c->r[3]=c->r[29]+0x00000070u; // 804F2AC8
  c->lr=0x804F2AD0u; f_80376494(c); // 804F2ACC
  c->r[3]=0u+0x80000000u; // 804F2AD0
  c->r[7]=0u+0x804F0000u; // 804F2AD4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 804F2AD8
  c->r[3]=c->r[29]+0x00000070u; // 804F2ADC
  c->r[7]=c->r[7]+0x00002E38u; // 804F2AE0
  c->r[5]=0u+0x00000000u; // 804F2AE4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804F2AE8
  c->lr=0x804F2AF0u; f_803763A0(c); // 804F2AEC
  c->r[3]=c->r[28]|c->r[28]; // 804F2AF0
  c->lr=0x804F2AF8u; f_8037BBCC(c); // 804F2AF4
L_804F2AF8:;
  W8(c->r[29]+0x00000001u,c->r[30]); // 804F2AF8
L_804F2AFC:;
  c->r[11]=c->r[1]+0x00000040u; // 804F2AFC
  c->lr=0x804F2B04u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F2B00
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F2B04
  c->lr=c->r[0]; // 804F2B08
  c->r[1]=c->r[1]+0x00000040u; // 804F2B0C
  return; // 804F2B10
}

// SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll
void f_804F2B14(Ctx* __restrict c) {
  trace_call(0x804F2B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2B14
  c->r[0]=c->lr; // 804F2B18
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F2B1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2B20
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2B24
  c->r[30]=c->r[4]|c->r[4]; // 804F2B28
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2B2C
  c->r[29]=c->r[3]|c->r[3]; // 804F2B30
  c->lr=0x804F2B38u; f_804F2EA8(c); // 804F2B34
  c->r[4]=c->r[29]|c->r[29]; // 804F2B38
  c->lr=0x804F2B40u; f_804F2F40(c); // 804F2B3C
  cmps(c,0,(int32_t)c->r[30],-1); // 804F2B40
  c->r[31]=c->r[3]|c->r[3]; // 804F2B44
  if (crb(c,2)) { goto L_804F2BA8; } // 804F2B48
  if (!crb(c,0)) { goto L_804F2B60; } // 804F2B4C
  cmps(c,0,(int32_t)c->r[30],-3); // 804F2B50
  if (crb(c,2)) { goto L_804F2B9C; } // 804F2B54
  if (!crb(c,0)) { goto L_804F2B90; } // 804F2B58
  goto L_804F2BB4; // 804F2B5C
L_804F2B60:;
  cmps(c,0,(int32_t)c->r[30],1); // 804F2B60
  if (!crb(c,0)) { goto L_804F2BB4; } // 804F2B64
  c->r[0]=0u+0x00000001u; // 804F2B68
  c->r[4]=0u+0x00000000u; // 804F2B6C
  W8(c->r[3]+0x00000003u,c->r[0]); // 804F2B70
  c->r[5]=0u+0x00000020u; // 804F2B74
  c->r[3]=c->r[3]+0x00000014u; // 804F2B78
  c->lr=0x804F2B80u; f_800043EC(c); // 804F2B7C
  c->r[0]=0u+0x00000002u; // 804F2B80
  W32(c->r[31]+0x00000008u,c->r[0]); // 804F2B84
  W32(c->r[31]+0x00000010u,c->r[0]); // 804F2B88
  goto L_804F2BBC; // 804F2B8C
L_804F2B90:;
  c->r[0]=0u+0x00000001u; // 804F2B90
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F2B94
  goto L_804F2BBC; // 804F2B98
L_804F2B9C:;
  c->r[0]=0u+0x00000000u; // 804F2B9C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2BA0
  goto L_804F2BBC; // 804F2BA4
L_804F2BA8:;
  c->r[0]=0u+0x00000000u; // 804F2BA8
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2BAC
  goto L_804F2BBC; // 804F2BB0
L_804F2BB4:;
  c->r[0]=0u+0x00000000u; // 804F2BB4
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2BB8
L_804F2BBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F2BBC
  if (crb(c,2)) { goto L_804F2BFC; } // 804F2BC0
  cmps(c,0,(int32_t)c->r[30],-2); // 804F2BC4
  if (crb(c,2)) { goto L_804F2BFC; } // 804F2BC8
  c->r[0]=R8(c->r[31]+0x00000004u); // 804F2BCC
  cmps(c,0,(int32_t)c->r[0],0); // 804F2BD0
  if (crb(c,2)) { goto L_804F2BFC; } // 804F2BD4
  c->r[12]=R32(c->r[31]+0x00000038u); // 804F2BD8
  cmps(c,0,(int32_t)c->r[12],0); // 804F2BDC
  if (crb(c,2)) { goto L_804F2BFC; } // 804F2BE0
  c->r[3]=c->r[29]|c->r[29]; // 804F2BE4
  c->r[4]=c->r[30]|c->r[30]; // 804F2BE8
  c->ctr=c->r[12]; // 804F2BEC
  if (true) { c->lr=0x804F2BF4u; dispatch(c,c->ctr); } // 804F2BF0
  c->r[0]=0u+0x00000000u; // 804F2BF4
  W32(c->r[31]+0x00000038u,c->r[0]); // 804F2BF8
L_804F2BFC:;
  c->r[0]=0u+0x00000000u; // 804F2BFC
  W8(c->r[31]+0x00000005u,c->r[0]); // 804F2C00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2C04
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2C08
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F2C0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2C10
  c->lr=c->r[0]; // 804F2C14
  c->r[1]=c->r[1]+0x00000020u; // 804F2C18
  return; // 804F2C1C
}

// fn_804F2C20
void f_804F2C20(Ctx* __restrict c) {
  trace_call(0x804F2C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2C20
  c->r[0]=c->lr; // 804F2C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F2C28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2C2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2C30
  c->r[30]=c->r[4]|c->r[4]; // 804F2C34
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2C38
  c->r[29]=c->r[3]|c->r[3]; // 804F2C3C
  c->lr=0x804F2C44u; f_804F2EA8(c); // 804F2C40
  c->r[4]=c->r[29]|c->r[29]; // 804F2C44
  c->lr=0x804F2C4Cu; f_804F2F40(c); // 804F2C48
  cmps(c,0,(int32_t)c->r[30],-1); // 804F2C4C
  c->r[31]=c->r[3]|c->r[3]; // 804F2C50
  if (crb(c,2)) { goto L_804F2C98; } // 804F2C54
  if (!crb(c,0)) { goto L_804F2C6C; } // 804F2C58
  cmps(c,0,(int32_t)c->r[30],-3); // 804F2C5C
  if (crb(c,2)) { goto L_804F2C8C; } // 804F2C60
  if (!crb(c,0)) { goto L_804F2C80; } // 804F2C64
  goto L_804F2CA4; // 804F2C68
L_804F2C6C:;
  cmps(c,0,(int32_t)c->r[30],1); // 804F2C6C
  if (!crb(c,0)) { goto L_804F2CA4; } // 804F2C70
  c->r[0]=0u+0x00000004u; // 804F2C74
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2C78
  goto L_804F2CAC; // 804F2C7C
L_804F2C80:;
  c->r[0]=0u+0x00000002u; // 804F2C80
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F2C84
  goto L_804F2CAC; // 804F2C88
L_804F2C8C:;
  c->r[0]=0u+0x00000000u; // 804F2C8C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2C90
  goto L_804F2CAC; // 804F2C94
L_804F2C98:;
  c->r[0]=0u+0x00000000u; // 804F2C98
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2C9C
  goto L_804F2CAC; // 804F2CA0
L_804F2CA4:;
  c->r[0]=0u+0x00000000u; // 804F2CA4
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2CA8
L_804F2CAC:;
  cmps(c,0,(int32_t)c->r[30],-2); // 804F2CAC
  if (crb(c,2)) { goto L_804F2CE4; } // 804F2CB0
  c->r[0]=R8(c->r[3]+0x00000004u); // 804F2CB4
  cmps(c,0,(int32_t)c->r[0],0); // 804F2CB8
  if (crb(c,2)) { goto L_804F2CE4; } // 804F2CBC
  c->r[12]=R32(c->r[3]+0x00000038u); // 804F2CC0
  cmps(c,0,(int32_t)c->r[12],0); // 804F2CC4
  if (crb(c,2)) { goto L_804F2CE4; } // 804F2CC8
  c->r[3]=c->r[29]|c->r[29]; // 804F2CCC
  c->r[4]=c->r[30]|c->r[30]; // 804F2CD0
  c->ctr=c->r[12]; // 804F2CD4
  if (true) { c->lr=0x804F2CDCu; dispatch(c,c->ctr); } // 804F2CD8
  c->r[0]=0u+0x00000000u; // 804F2CDC
  W32(c->r[31]+0x00000038u,c->r[0]); // 804F2CE0
L_804F2CE4:;
  c->r[0]=0u+0x00000000u; // 804F2CE4
  W8(c->r[31]+0x00000005u,c->r[0]); // 804F2CE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2CEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2CF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F2CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2CF8
  c->lr=c->r[0]; // 804F2CFC
  c->r[1]=c->r[1]+0x00000020u; // 804F2D00
  return; // 804F2D04
}

// fn_804F2D08
void f_804F2D08(Ctx* __restrict c) {
  trace_call(0x804F2D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2D08
  c->r[0]=c->lr; // 804F2D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F2D10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2D14
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2D18
  c->r[30]=c->r[4]|c->r[4]; // 804F2D1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2D20
  c->r[29]=c->r[3]|c->r[3]; // 804F2D24
  c->lr=0x804F2D2Cu; f_804F2EA8(c); // 804F2D28
  c->r[4]=c->r[29]|c->r[29]; // 804F2D2C
  c->lr=0x804F2D34u; f_804F2F40(c); // 804F2D30
  cmps(c,0,(int32_t)c->r[30],-1); // 804F2D34
  c->r[31]=c->r[3]|c->r[3]; // 804F2D38
  if (crb(c,2)) { goto L_804F2D80; } // 804F2D3C
  if (!crb(c,0)) { goto L_804F2D54; } // 804F2D40
  cmps(c,0,(int32_t)c->r[30],-3); // 804F2D44
  if (crb(c,2)) { goto L_804F2D74; } // 804F2D48
  if (!crb(c,0)) { goto L_804F2D68; } // 804F2D4C
  goto L_804F2D8C; // 804F2D50
L_804F2D54:;
  cmps(c,0,(int32_t)c->r[30],1); // 804F2D54
  if (!crb(c,0)) { goto L_804F2D8C; } // 804F2D58
  c->r[0]=0u+0x00000006u; // 804F2D5C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2D60
  goto L_804F2D94; // 804F2D64
L_804F2D68:;
  c->r[0]=0u+0x00000003u; // 804F2D68
  W32(c->r[3]+0x00000010u,c->r[0]); // 804F2D6C
  goto L_804F2D94; // 804F2D70
L_804F2D74:;
  c->r[0]=0u+0x00000000u; // 804F2D74
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2D78
  goto L_804F2D94; // 804F2D7C
L_804F2D80:;
  c->r[0]=0u+0x00000000u; // 804F2D80
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2D84
  goto L_804F2D94; // 804F2D88
L_804F2D8C:;
  c->r[0]=0u+0x00000000u; // 804F2D8C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804F2D90
L_804F2D94:;
  cmps(c,0,(int32_t)c->r[30],-2); // 804F2D94
  if (crb(c,2)) { goto L_804F2DCC; } // 804F2D98
  c->r[0]=R8(c->r[3]+0x00000004u); // 804F2D9C
  cmps(c,0,(int32_t)c->r[0],0); // 804F2DA0
  if (crb(c,2)) { goto L_804F2DCC; } // 804F2DA4
  c->r[12]=R32(c->r[3]+0x00000038u); // 804F2DA8
  cmps(c,0,(int32_t)c->r[12],0); // 804F2DAC
  if (crb(c,2)) { goto L_804F2DCC; } // 804F2DB0
  c->r[3]=c->r[29]|c->r[29]; // 804F2DB4
  c->r[4]=c->r[30]|c->r[30]; // 804F2DB8
  c->ctr=c->r[12]; // 804F2DBC
  if (true) { c->lr=0x804F2DC4u; dispatch(c,c->ctr); } // 804F2DC0
  c->r[0]=0u+0x00000000u; // 804F2DC4
  W32(c->r[31]+0x00000038u,c->r[0]); // 804F2DC8
L_804F2DCC:;
  c->r[0]=0u+0x00000000u; // 804F2DCC
  W8(c->r[31]+0x00000005u,c->r[0]); // 804F2DD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2DD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2DD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F2DDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2DE0
  c->lr=c->r[0]; // 804F2DE4
  c->r[1]=c->r[1]+0x00000020u; // 804F2DE8
  return; // 804F2DEC
}

// ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext
void f_804F2DF0(Ctx* __restrict c) {
  trace_call(0x804F2DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2DF0
  c->r[0]=c->lr; // 804F2DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2DFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F2E00
  c->r[30]=c->r[3]|c->r[3]; // 804F2E04
  c->lr=0x804F2E0Cu; f_8037BBA4(c); // 804F2E08
  c->r[31]=c->r[3]|c->r[3]; // 804F2E0C
  c->r[3]=c->r[30]|c->r[30]; // 804F2E10
  c->lr=0x804F2E18u; f_803768BC(c); // 804F2E14
  c->r[3]=c->r[31]|c->r[31]; // 804F2E18
  c->lr=0x804F2E20u; f_8037BBCC(c); // 804F2E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2E20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2E24
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F2E28
  c->lr=c->r[0]; // 804F2E2C
  c->r[1]=c->r[1]+0x00000010u; // 804F2E30
  return; // 804F2E34
}

// IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext
void f_804F2E38(Ctx* __restrict c) {
  trace_call(0x804F2E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2E38
  c->r[0]=c->lr; // 804F2E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2E44
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F2E48
  c->r[30]=c->r[3]|c->r[3]; // 804F2E4C
  c->lr=0x804F2E54u; f_8037BBA4(c); // 804F2E50
  c->r[31]=c->r[3]|c->r[3]; // 804F2E54
  c->r[3]=c->r[30]|c->r[30]; // 804F2E58
  c->lr=0x804F2E60u; f_803768BC(c); // 804F2E5C
  c->r[0]=R8(c->r[3]+0x00000007u); // 804F2E60
  c->r[30]=c->r[3]|c->r[3]; // 804F2E64
  cmps(c,0,(int32_t)c->r[0],0); // 804F2E68
  if (crb(c,2)) { goto L_804F2E80; } // 804F2E6C
  c->r[3]=c->r[3]+0x00000040u; // 804F2E70
  c->lr=0x804F2E78u; f_80376494(c); // 804F2E74
  c->r[0]=0u+0x00000000u; // 804F2E78
  W8(c->r[30]+0x00000006u,c->r[0]); // 804F2E7C
L_804F2E80:;
  c->r[0]=0u+0x00000000u; // 804F2E80
  c->r[3]=c->r[31]|c->r[31]; // 804F2E84
  W8(c->r[30]+0x00000007u,c->r[0]); // 804F2E88
  c->lr=0x804F2E90u; f_8037BBCC(c); // 804F2E8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2E90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2E94
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F2E98
  c->lr=c->r[0]; // 804F2E9C
  c->r[1]=c->r[1]+0x00000010u; // 804F2EA0
  return; // 804F2EA4
}

// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_804F2EA8(Ctx* __restrict c) {
  trace_call(0x804F2EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2EA8
  c->r[0]=c->lr; // 804F2EAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F2EB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F2EB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F2EB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F2EBC
  c->r[0]=R8(c->r[13]+0xFFFFE518u); // 804F2EC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804F2EC4
  if (!crb(c,2)) { goto L_804F2F1C; } // 804F2EC8
  c->r[3]=0u+0x80830000u; // 804F2ECC
  c->r[0]=0u+0x00000000u; // 804F2ED0
  c->r[30]=c->r[3]+0xFFFF86E8u; // 804F2ED4
  W8(c->r[3]+0xFFFF86E8u,c->r[0]); // 804F2ED8
  c->r[29]=c->r[30]+0x00000038u; // 804F2EDC
  c->r[31]=c->r[30]+0x000002D8u; // 804F2EE0
L_804F2EE4:;
  c->r[3]=c->r[29]|c->r[29]; // 804F2EE4
  c->lr=0x804F2EECu; f_804F2534(c); // 804F2EE8
  c->r[29]=c->r[29]+0x000000A8u; // 804F2EEC
  cmpu(c,0,c->r[29],c->r[31]); // 804F2EF0
  if (crb(c,0)) { IRQCHK(c); goto L_804F2EE4; } // 804F2EF4
  c->r[4]=0u+0x00000001u; // 804F2EF8
  c->r[5]=0u+0x00000000u; // 804F2EFC
  c->r[3]=0u+0x00000002u; // 804F2F00
  c->r[0]=0u+0x00000003u; // 804F2F04
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 804F2F08
  W32(c->r[30]+0x00000114u,c->r[4]); // 804F2F0C
  W32(c->r[30]+0x000001BCu,c->r[3]); // 804F2F10
  W32(c->r[30]+0x00000264u,c->r[0]); // 804F2F14
  W8(c->r[13]+0xFFFFE518u,c->r[4]); // 804F2F18
L_804F2F1C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F2F1C
  c->r[3]=0u+0x80830000u; // 804F2F20
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F2F24
  c->r[3]=c->r[3]+0xFFFF86E8u; // 804F2F28
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F2F2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F2F30
  c->lr=c->r[0]; // 804F2F34
  c->r[1]=c->r[1]+0x00000020u; // 804F2F38
  return; // 804F2F3C
}

// GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
void f_804F2F40(Ctx* __restrict c) {
  trace_call(0x804F2F40u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)168); // 804F2F40
  c->r[3]=c->r[3]+c->r[0]; // 804F2F44
  c->r[3]=c->r[3]+0x00000038u; // 804F2F48
  return; // 804F2F4C
}

// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_804F2F50(Ctx* __restrict c) {
  trace_call(0x804F2F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2F50
  c->r[0]=c->lr; // 804F2F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F2F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F2F5C
  c->r[31]=c->r[3]|c->r[3]; // 804F2F60
  c->r[0]=R8(c->r[3]+0x00000000u); // 804F2F64
  cmps(c,0,(int32_t)c->r[0],0); // 804F2F68
  if (!crb(c,2)) { goto L_804F2FD8; } // 804F2F6C
  c->r[3]=c->r[3]+0x00000008u; // 804F2F70
  c->lr=0x804F2F78u; f_80376140(c); // 804F2F74
  c->lr=0x804F2F7Cu; f_8037FD18(c); // 804F2F78
  c->r[6]=0u+0x80000000u; // 804F2F7C
  c->r[5]=0u+0x431C0000u; // 804F2F80
  c->r[0]=R32(c->r[6]+0x000000F8u); // 804F2F84
  c->r[6]=0u+0x10620000u; // 804F2F88
  c->r[10]=c->r[6]+0x00004DD3u; // 804F2F8C
  c->r[9]=0u+0x804F0000u; // 804F2F90
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804F2F94
  c->r[5]=c->r[5]+0xFFFFDE83u; // 804F2F98
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 804F2F9C
  c->r[7]=0u+0x00660000u; // 804F2FA0
  c->r[6]=c->r[4]|c->r[4]; // 804F2FA4
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 804F2FA8
  c->r[5]=c->r[3]|c->r[3]; // 804F2FAC
  c->r[3]=c->r[31]+0x00000008u; // 804F2FB0
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 804F2FB4
  c->r[9]=c->r[9]+0x00002FECu; // 804F2FB8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804F2FBC
  c->r[7]=0u+0x00000000u; // 804F2FC0
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 804F2FC4
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 804F2FC8
  c->lr=0x804F2FD0u; f_80376410(c); // 804F2FCC
  c->r[0]=0u+0x00000001u; // 804F2FD0
  W8(c->r[31]+0x00000000u,c->r[0]); // 804F2FD4
L_804F2FD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F2FD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F2FDC
  c->lr=c->r[0]; // 804F2FE0
  c->r[1]=c->r[1]+0x00000010u; // 804F2FE4
  return; // 804F2FE8
}

// RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext
void f_804F2FEC(Ctx* __restrict c) {
  trace_call(0x804F2FECu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F2FEC
  c->r[0]=c->lr; // 804F2FF0
  W32(c->r[1]+0x00000074u,c->r[0]); // 804F2FF4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 804F2FF8
  W32(c->r[1]+0x00000068u,c->r[30]); // 804F2FFC
  W32(c->r[1]+0x00000064u,c->r[29]); // 804F3000
  c->r[0]=R8(c->r[13]+0xFFFFE518u); // 804F3004
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804F3008
  if (!crb(c,2)) { goto L_804F3060; } // 804F300C
  c->r[3]=0u+0x80830000u; // 804F3010
  c->r[0]=0u+0x00000000u; // 804F3014
  c->r[30]=c->r[3]+0xFFFF86E8u; // 804F3018
  W8(c->r[3]+0xFFFF86E8u,c->r[0]); // 804F301C
  c->r[29]=c->r[30]+0x00000038u; // 804F3020
  c->r[31]=c->r[30]+0x000002D8u; // 804F3024
L_804F3028:;
  c->r[3]=c->r[29]|c->r[29]; // 804F3028
  c->lr=0x804F3030u; f_804F2534(c); // 804F302C
  c->r[29]=c->r[29]+0x000000A8u; // 804F3030
  cmpu(c,0,c->r[29],c->r[31]); // 804F3034
  if (crb(c,0)) { IRQCHK(c); goto L_804F3028; } // 804F3038
  c->r[4]=0u+0x00000001u; // 804F303C
  c->r[5]=0u+0x00000000u; // 804F3040
  c->r[3]=0u+0x00000002u; // 804F3044
  c->r[0]=0u+0x00000003u; // 804F3048
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 804F304C
  W32(c->r[30]+0x00000114u,c->r[4]); // 804F3050
  W32(c->r[30]+0x000001BCu,c->r[3]); // 804F3054
  W32(c->r[30]+0x00000264u,c->r[0]); // 804F3058
  W8(c->r[13]+0xFFFFE518u,c->r[4]); // 804F305C
L_804F3060:;
  c->r[30]=0u+0x80830000u; // 804F3060
  c->r[30]=c->r[30]+0xFFFF86E8u; // 804F3064
  c->lr=0x804F306Cu; f_803958FC(c); // 804F3068
  cmps(c,0,(int32_t)c->r[3],40); // 804F306C
  if (crb(c,0)) { goto L_804F30C8; } // 804F3070
  c->r[29]=c->r[30]+0x00000038u; // 804F3074
  c->r[31]=0u+0x00000000u; // 804F3078
L_804F307C:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 804F307C
  cmps(c,0,(int32_t)c->r[0],4); // 804F3080
  if (!crb(c,2)) { goto L_804F30A4; } // 804F3084
  c->r[3]=c->r[31]|c->r[31]; // 804F3088
  c->r[4]=c->r[1]+0x00000008u; // 804F308C
  c->r[5]=0u+0x00000028u; // 804F3090
  c->lr=0x804F3098u; f_80395928(c); // 804F3094
  c->r[3]=c->r[29]|c->r[29]; // 804F3098
  c->r[4]=c->r[1]+0x00000008u; // 804F309C
  c->lr=0x804F30A4u; f_804F2810(c); // 804F30A0
L_804F30A4:;
  c->r[3]=c->r[29]|c->r[29]; // 804F30A4
  c->lr=0x804F30ACu; f_804F273C(c); // 804F30A8
  c->r[31]=c->r[31]+0x00000001u; // 804F30AC
  c->r[29]=c->r[29]+0x000000A8u; // 804F30B0
  cmps(c,0,(int32_t)c->r[31],4); // 804F30B4
  c->r[30]=c->r[30]+0x000000A8u; // 804F30B8
  if (crb(c,0)) { IRQCHK(c); goto L_804F307C; } // 804F30BC
  c->r[3]=0u+0x00000028u; // 804F30C0
  c->lr=0x804F30C8u; f_803959EC(c); // 804F30C4
L_804F30C8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 804F30C8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 804F30CC
  c->r[30]=R32(c->r[1]+0x00000068u); // 804F30D0
  c->r[29]=R32(c->r[1]+0x00000064u); // 804F30D4
  c->lr=c->r[0]; // 804F30D8
  c->r[1]=c->r[1]+0x00000070u; // 804F30DC
  return; // 804F30E0
}

// __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
void f_804F30E4(Ctx* __restrict c) {
  trace_call(0x804F30E4u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 804F30E4
  c->r[6]=0u+0x00000000u; // 804F30E8
  W32(c->r[3]+0x00000000u,c->r[6]); // 804F30EC
  c->r[0]=c->r[5]+0xADAD0000u; // 804F30F0
  cmpu(c,0,c->r[0],0x00004551u); // 804F30F4
  W32(c->r[3]+0x00000004u,c->r[6]); // 804F30F8
  if (crb(c,2)) { goto L_804F3108; } // 804F30FC
  c->r[0]=0u+0x00000000u; // 804F3100
  goto L_804F3134; // 804F3104
L_804F3108:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 804F3108
  cmpu(c,0,c->r[6],0x00000100u); // 804F310C
  if (!crb(c,0)) { goto L_804F311C; } // 804F3110
  c->r[0]=0u+0x00000000u; // 804F3114
  goto L_804F3134; // 804F3118
L_804F311C:;
  c->r[0]=addc(c,~c->r[6],0x00000100u,1); // 804F311C
  c->r[5]=0u+0x00000100u; // 804F3120
  c->r[5]=c->r[5]|~c->r[6]; // 804F3124
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804F3128
  c->r[0]=c->r[5]-c->r[0]; // 804F312C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F3130
L_804F3134:;
  cmps(c,0,(int32_t)c->r[0],0); // 804F3134
  if (crb(c,2)) return; // 804F3138
  c->r[0]=R32(c->r[4]+0x00000010u); // 804F313C
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F3140
  c->r[0]=c->r[0]+c->r[4]; // 804F3144
  W32(c->r[3]+0x00000004u,c->r[0]); // 804F3148
  return; // 804F314C
}

// GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv
void f_804F3150(Ctx* __restrict c) {
  trace_call(0x804F3150u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F3150
  c->r[0]=R32(c->r[3]+0x00000008u); // 804F3154
  c->r[3]=c->r[0]+c->r[3]; // 804F3158
  return; // 804F315C
}

// ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl
void f_804F3160(Ctx* __restrict c) {
  trace_call(0x804F3160u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3160
  c->r[0]=c->lr; // 804F3164
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F3168
  c->r[11]=c->r[1]+0x00000030u; // 804F316C
  c->lr=0x804F3174u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F3170
  c->r[3]=R32(c->r[3]+0x00000000u); // 804F3174
  c->r[24]=c->r[4]|c->r[4]; // 804F3178
  c->r[25]=c->r[5]|c->r[5]; // 804F317C
  c->r[0]=R32(c->r[3]+0x00000018u); // 804F3180
  c->r[28]=c->r[0]+c->r[3]; cr0(c,c->r[28]); // 804F3184
  if (!crb(c,2)) { goto L_804F3194; } // 804F3188
  c->r[3]=0u+0x00000000u; // 804F318C
  goto L_804F3200; // 804F3190
L_804F3194:;
  c->r[3]=c->r[24]|c->r[24]; // 804F3194
  c->lr=0x804F319Cu; f_803A91D4(c); // 804F3198
  c->r[30]=R32(c->r[28]+0x00000008u); // 804F319C
  c->r[27]=c->r[3]|c->r[3]; // 804F31A0
  c->r[29]=c->r[28]|c->r[28]; // 804F31A4
  c->r[26]=0u+0x00000000u; // 804F31A8
  goto L_804F31F4; // 804F31AC
L_804F31B0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804F31B0
  c->r[31]=c->r[28]+c->r[0]; // 804F31B4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804F31B8
  cmpu(c,0,c->r[27],c->r[0]); // 804F31BC
  if (!crb(c,2)) { goto L_804F31EC; } // 804F31C0
  c->r[3]=c->r[24]|c->r[24]; // 804F31C4
  c->r[5]=c->r[27]|c->r[27]; // 804F31C8
  c->r[4]=c->r[31]+0x00000010u; // 804F31CC
  c->lr=0x804F31D4u; f_803B3A58(c); // 804F31D0
  cmps(c,0,(int32_t)c->r[3],0); // 804F31D4
  if (!crb(c,2)) { goto L_804F31EC; } // 804F31D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 804F31DC
  c->r[3]=0u+0x00000001u; // 804F31E0
  W32(c->r[25]+0x00000000u,c->r[0]); // 804F31E4
  goto L_804F3200; // 804F31E8
L_804F31EC:;
  c->r[29]=c->r[29]+0x00000004u; // 804F31EC
  c->r[26]=c->r[26]+0x00000001u; // 804F31F0
L_804F31F4:;
  cmpu(c,0,c->r[26],c->r[30]); // 804F31F4
  if (crb(c,0)) { IRQCHK(c); goto L_804F31B0; } // 804F31F8
  c->r[3]=0u+0x00000000u; // 804F31FC
L_804F3200:;
  c->r[11]=c->r[1]+0x00000030u; // 804F3200
  c->lr=0x804F3208u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F3204
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F3208
  c->lr=c->r[0]; // 804F320C
  c->r[1]=c->r[1]+0x00000030u; // 804F3210
  return; // 804F3214
}

// fn_804F3218
void f_804F3218(Ctx* __restrict c) {
  trace_call(0x804F3218u);
  c->r[0]=0u+0xFFFFFFFFu; // 804F3218
  c->r[3]=0u+0x80830000u; // 804F321C
  {uint32_t ea=c->r[3]+0xFFFF89C0u; W16(ea,c->r[0]); c->r[3]=ea;} // 804F3220
  W16(c->r[3]+0x00000002u,c->r[0]); // 804F3224
  W16(c->r[3]+0x00000004u,c->r[0]); // 804F3228
  W16(c->r[3]+0x00000006u,c->r[0]); // 804F322C
  W16(c->r[3]+0x00000008u,c->r[0]); // 804F3230
  W16(c->r[3]+0x0000000Au,c->r[0]); // 804F3234
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 804F3238
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 804F323C
  W16(c->r[3]+0x00000010u,c->r[0]); // 804F3240
  W16(c->r[3]+0x00000012u,c->r[0]); // 804F3244
  W16(c->r[3]+0x00000014u,c->r[0]); // 804F3248
  W16(c->r[3]+0x00000016u,c->r[0]); // 804F324C
  W16(c->r[3]+0x00000018u,c->r[0]); // 804F3250
  W16(c->r[3]+0x0000001Au,c->r[0]); // 804F3254
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 804F3258
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 804F325C
  return; // 804F3260
}

// fn_804F3264
void f_804F3264(Ctx* __restrict c) {
  trace_call(0x804F3264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3264
  c->r[0]=c->lr; // 804F3268
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F326C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F3270
  c->r[31]=c->r[3]|c->r[3]; // 804F3274
  c->lr=0x804F327Cu; f_804EA938(c); // 804F3278
  c->r[9]=0u+0x80720000u; // 804F327C
  c->r[10]=0u+0x00000000u; // 804F3280
  c->r[9]=c->r[9]+0xFFFFB8B0u; // 804F3284
  {uint32_t ea=c->r[2]+0x00001AA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F3288
  {uint32_t ea=c->r[2]+0x00001AACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F328C
  c->r[8]=c->r[9]+0x00000024u; // 804F3290
  c->r[7]=c->r[9]+0x00000038u; // 804F3294
  c->r[6]=0u+0x00000078u; // 804F3298
  c->r[5]=0u+0x00000030u; // 804F329C
  c->r[4]=0u+0x0000007Fu; // 804F32A0
  c->r[3]=0u+0x00000040u; // 804F32A4
  W32(c->r[31]+0x000000D4u,c->r[10]); // 804F32A8
  c->r[0]=0u+0xFFFFFFFFu; // 804F32AC
  W32(c->r[31]+0x000000D8u,c->r[10]); // 804F32B0
  W32(c->r[31]+0x000000E0u,c->r[10]); // 804F32B4
  W32(c->r[31]+0x000000E4u,c->r[10]); // 804F32B8
  W32(c->r[31]+0x00000000u,c->r[9]); // 804F32BC
  W32(c->r[31]+0x000000DCu,c->r[8]); // 804F32C0
  W32(c->r[31]+0x000000E8u,c->r[7]); // 804F32C4
  W8(c->r[31]+0x000000ECu,c->r[10]); // 804F32C8
  W8(c->r[31]+0x000000EDu,c->r[10]); // 804F32CC
  W8(c->r[31]+0x000000EEu,c->r[10]); // 804F32D0
  W8(c->r[31]+0x000000EFu,c->r[10]); // 804F32D4
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[1]);} // 804F32D8
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 804F32DC
  W32(c->r[31]+0x000000FCu,c->r[10]); // 804F32E0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 804F32E4
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[1]);} // 804F32E8
  W32(c->r[31]+0x00000180u,c->r[10]); // 804F32EC
  W32(c->r[31]+0x00000104u,c->r[10]); // 804F32F0
  W32(c->r[31]+0x00000118u,c->r[10]); // 804F32F4
  W32(c->r[31]+0x0000011Cu,c->r[10]); // 804F32F8
  W16(c->r[31]+0x0000010Cu,c->r[6]); // 804F32FC
  W8(c->r[31]+0x0000010Au,c->r[5]); // 804F3300
  W8(c->r[31]+0x00000108u,c->r[4]); // 804F3304
  W8(c->r[31]+0x00000109u,c->r[3]); // 804F3308
  W32(c->r[31]+0x00000110u,c->r[10]); // 804F330C
  W16(c->r[31]+0x00000160u,c->r[0]); // 804F3310
  W16(c->r[31]+0x00000162u,c->r[0]); // 804F3314
  W16(c->r[31]+0x00000164u,c->r[0]); // 804F3318
  W16(c->r[31]+0x00000166u,c->r[0]); // 804F331C
  W16(c->r[31]+0x00000168u,c->r[0]); // 804F3320
  W16(c->r[31]+0x0000016Au,c->r[0]); // 804F3324
  W16(c->r[31]+0x0000016Cu,c->r[0]); // 804F3328
  W16(c->r[31]+0x0000016Eu,c->r[0]); // 804F332C
  W16(c->r[31]+0x00000170u,c->r[0]); // 804F3330
  W16(c->r[31]+0x00000172u,c->r[0]); // 804F3334
  W16(c->r[31]+0x00000174u,c->r[0]); // 804F3338
  W16(c->r[31]+0x00000176u,c->r[0]); // 804F333C
  W16(c->r[31]+0x00000178u,c->r[0]); // 804F3340
  W16(c->r[31]+0x0000017Au,c->r[0]); // 804F3344
  W16(c->r[31]+0x0000017Cu,c->r[0]); // 804F3348
  W16(c->r[31]+0x0000017Eu,c->r[0]); // 804F334C
  c->r[0]=0u+0x00000000u; // 804F3350
  c->r[3]=c->r[31]|c->r[31]; // 804F3354
  W32(c->r[31]+0x00000120u,c->r[0]); // 804F3358
  W32(c->r[31]+0x00000124u,c->r[0]); // 804F335C
  W32(c->r[31]+0x00000128u,c->r[0]); // 804F3360
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 804F3364
  W32(c->r[31]+0x00000130u,c->r[0]); // 804F3368
  W32(c->r[31]+0x00000134u,c->r[0]); // 804F336C
  W32(c->r[31]+0x00000138u,c->r[0]); // 804F3370
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 804F3374
  W32(c->r[31]+0x00000140u,c->r[0]); // 804F3378
  W32(c->r[31]+0x00000144u,c->r[0]); // 804F337C
  W32(c->r[31]+0x00000148u,c->r[0]); // 804F3380
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 804F3384
  W32(c->r[31]+0x00000150u,c->r[0]); // 804F3388
  W32(c->r[31]+0x00000154u,c->r[0]); // 804F338C
  W32(c->r[31]+0x00000158u,c->r[0]); // 804F3390
  W32(c->r[31]+0x0000015Cu,c->r[0]); // 804F3394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F3398
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F339C
  c->lr=c->r[0]; // 804F33A0
  c->r[1]=c->r[1]+0x00000010u; // 804F33A4
  return; // 804F33A8
}

// __dt__Q44nw4r3snd6detail9SeqPlayerFv
void f_804F33AC(Ctx* __restrict c) {
  trace_call(0x804F33ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F33AC
  c->r[0]=c->lr; // 804F33B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F33B4
  c->r[11]=c->r[1]+0x00000020u; // 804F33B8
  c->lr=0x804F33C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F33BC
  cmps(c,0,(int32_t)c->r[3],0); // 804F33C0
  c->r[27]=c->r[3]|c->r[3]; // 804F33C4
  c->r[28]=c->r[4]|c->r[4]; // 804F33C8
  if (crb(c,2)) { goto L_804F350C; } // 804F33CC
  c->r[5]=0u+0x80720000u; // 804F33D0
  c->r[5]=c->r[5]+0xFFFFB8B0u; // 804F33D4
  c->r[4]=c->r[5]+0x00000024u; // 804F33D8
  W32(c->r[3]+0x00000000u,c->r[5]); // 804F33DC
  c->r[0]=c->r[5]+0x00000038u; // 804F33E0
  W32(c->r[3]+0x000000DCu,c->r[4]); // 804F33E4
  W32(c->r[3]+0x000000E8u,c->r[0]); // 804F33E8
  c->lr=0x804F33F0u; f_804FD930(c); // 804F33EC
  c->r[3]=c->r[3]+0x00000354u; // 804F33F0
  c->lr=0x804F33F8u; f_8037CD84(c); // 804F33F4
  c->lr=0x804F33FCu; f_804FD930(c); // 804F33F8
  c->r[3]=c->r[3]+0x00000354u; // 804F33FC
  c->lr=0x804F3404u; f_8037CD84(c); // 804F3400
  c->r[0]=R8(c->r[27]+0x000000EDu); // 804F3404
  cmps(c,0,(int32_t)c->r[0],0); // 804F3408
  if (crb(c,2)) { goto L_804F3434; } // 804F340C
  cmps(c,0,(int32_t)c->r[27],0); // 804F3410
  c->r[30]=c->r[27]|c->r[27]; // 804F3414
  if (crb(c,2)) { goto L_804F3420; } // 804F3418
  c->r[30]=c->r[27]+0x000000E0u; // 804F341C
L_804F3420:;
  c->lr=0x804F3424u; f_804FD930(c); // 804F3420
  c->r[4]=c->r[30]|c->r[30]; // 804F3424
  c->lr=0x804F342Cu; f_804FDD64(c); // 804F3428
  c->r[0]=0u+0x00000000u; // 804F342C
  W8(c->r[27]+0x000000EDu,c->r[0]); // 804F3430
L_804F3434:;
  c->r[0]=R8(c->r[27]+0x000000ECu); // 804F3434
  cmps(c,0,(int32_t)c->r[0],0); // 804F3438
  if (crb(c,2)) { goto L_804F3464; } // 804F343C
  cmps(c,0,(int32_t)c->r[27],0); // 804F3440
  c->r[30]=c->r[27]|c->r[27]; // 804F3444
  if (crb(c,2)) { goto L_804F3450; } // 804F3448
  c->r[30]=c->r[27]+0x000000D4u; // 804F344C
L_804F3450:;
  c->lr=0x804F3454u; f_804ED804(c); // 804F3450
  c->r[4]=c->r[30]|c->r[30]; // 804F3454
  c->lr=0x804F345Cu; f_804ED918(c); // 804F3458
  c->r[0]=0u+0x00000000u; // 804F345C
  W8(c->r[27]+0x000000ECu,c->r[0]); // 804F3460
L_804F3464:;
  c->r[29]=c->r[27]|c->r[27]; // 804F3464
  c->r[30]=0u+0x00000000u; // 804F3468
  c->r[31]=0u+0x00000000u; // 804F346C
L_804F3470:;
  c->lr=0x804F3474u; f_804FD930(c); // 804F3470
  c->r[3]=c->r[3]+0x00000354u; // 804F3474
  c->lr=0x804F347Cu; f_8037CD84(c); // 804F3478
  cmps(c,0,(int32_t)c->r[30],15); // 804F347C
  if (!crb(c,1)) { goto L_804F348C; } // 804F3480
  c->r[3]=0u+0x00000000u; // 804F3484
  goto L_804F3490; // 804F3488
L_804F348C:;
  c->r[3]=R32(c->r[29]+0x00000120u); // 804F348C
L_804F3490:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3490
  if (!crb(c,2)) { goto L_804F34A8; } // 804F3494
  c->lr=0x804F349Cu; f_804FD930(c); // 804F3498
  c->r[3]=c->r[3]+0x00000354u; // 804F349C
  c->lr=0x804F34A4u; f_8037CE60(c); // 804F34A0
  goto L_804F34D4; // 804F34A4
L_804F34A8:;
  c->lr=0x804F34ACu; f_804F52A4(c); // 804F34A8
  c->r[3]=R32(c->r[27]+0x00000114u); // 804F34AC
  c->r[4]=R32(c->r[29]+0x00000120u); // 804F34B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F34B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F34B8
  c->ctr=c->r[12]; // 804F34BC
  if (true) { c->lr=0x804F34C4u; dispatch(c,c->ctr); } // 804F34C0
  W32(c->r[29]+0x00000120u,c->r[31]); // 804F34C4
  c->lr=0x804F34CCu; f_804FD930(c); // 804F34C8
  c->r[3]=c->r[3]+0x00000354u; // 804F34CC
  c->lr=0x804F34D4u; f_8037CE60(c); // 804F34D0
L_804F34D4:;
  c->r[30]=c->r[30]+0x00000001u; // 804F34D4
  c->r[29]=c->r[29]+0x00000004u; // 804F34D8
  cmps(c,0,(int32_t)c->r[30],16); // 804F34DC
  if (crb(c,0)) { IRQCHK(c); goto L_804F3470; } // 804F34E0
  c->lr=0x804F34E8u; f_804FD930(c); // 804F34E4
  c->r[3]=c->r[3]+0x00000354u; // 804F34E8
  c->lr=0x804F34F0u; f_8037CE60(c); // 804F34EC
  c->lr=0x804F34F4u; f_804FD930(c); // 804F34F0
  c->r[3]=c->r[3]+0x00000354u; // 804F34F4
  c->lr=0x804F34FCu; f_8037CE60(c); // 804F34F8
  cmps(c,0,(int32_t)c->r[28],0); // 804F34FC
  if (!crb(c,1)) { goto L_804F350C; } // 804F3500
  c->r[3]=c->r[27]|c->r[27]; // 804F3504
  c->lr=0x804F350Cu; f_803A9400(c); // 804F3508
L_804F350C:;
  c->r[11]=c->r[1]+0x00000020u; // 804F350C
  c->r[3]=c->r[27]|c->r[27]; // 804F3510
  c->lr=0x804F3518u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F3514
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3518
  c->lr=c->r[0]; // 804F351C
  c->r[1]=c->r[1]+0x00000020u; // 804F3520
  return; // 804F3524
}

// InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
void f_804F3528(Ctx* __restrict c) {
  trace_call(0x804F3528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3528
  c->r[0]=c->lr; // 804F352C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F3530
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F3534
  c->r[31]=c->r[5]|c->r[5]; // 804F3538
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F353C
  c->r[30]=c->r[4]|c->r[4]; // 804F3540
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F3544
  c->r[29]=c->r[3]|c->r[3]; // 804F3548
  c->lr=0x804F3550u; f_804EAB8C(c); // 804F354C
  {uint32_t ea=c->r[2]+0x00001AA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F3550
  c->r[7]=0u+0x00000000u; // 804F3554
  {uint32_t ea=c->r[2]+0x00001AACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F3558
  c->r[6]=0u+0x00000078u; // 804F355C
  c->r[5]=0u+0x00000030u; // 804F3560
  c->r[4]=0u+0x0000007Fu; // 804F3564
  c->r[3]=0u+0x00000040u; // 804F3568
  W8(c->r[29]+0x000000EDu,c->r[7]); // 804F356C
  c->r[0]=0u+0xFFFFFFFFu; // 804F3570
  W8(c->r[29]+0x000000EEu,c->r[7]); // 804F3574
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 804F3578
  W32(c->r[29]+0x000000FCu,c->r[7]); // 804F357C
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 804F3580
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 804F3584
  W32(c->r[29]+0x00000180u,c->r[7]); // 804F3588
  W32(c->r[29]+0x00000104u,c->r[30]); // 804F358C
  W16(c->r[29]+0x0000010Cu,c->r[6]); // 804F3590
  W8(c->r[29]+0x0000010Au,c->r[5]); // 804F3594
  W8(c->r[29]+0x00000108u,c->r[4]); // 804F3598
  W8(c->r[29]+0x00000109u,c->r[3]); // 804F359C
  W32(c->r[29]+0x00000110u,c->r[31]); // 804F35A0
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 804F35A4
  W16(c->r[29]+0x00000160u,c->r[0]); // 804F35A8
  W16(c->r[29]+0x00000162u,c->r[0]); // 804F35AC
  W16(c->r[29]+0x00000164u,c->r[0]); // 804F35B0
  W16(c->r[29]+0x00000166u,c->r[0]); // 804F35B4
  W16(c->r[29]+0x00000168u,c->r[0]); // 804F35B8
  W16(c->r[29]+0x0000016Au,c->r[0]); // 804F35BC
  W16(c->r[29]+0x0000016Cu,c->r[0]); // 804F35C0
  W16(c->r[29]+0x0000016Eu,c->r[0]); // 804F35C4
  W16(c->r[29]+0x00000170u,c->r[0]); // 804F35C8
  W16(c->r[29]+0x00000172u,c->r[0]); // 804F35CC
  W16(c->r[29]+0x00000174u,c->r[0]); // 804F35D0
  W16(c->r[29]+0x00000176u,c->r[0]); // 804F35D4
  W16(c->r[29]+0x00000178u,c->r[0]); // 804F35D8
  W16(c->r[29]+0x0000017Au,c->r[0]); // 804F35DC
  W16(c->r[29]+0x0000017Cu,c->r[0]); // 804F35E0
  W16(c->r[29]+0x0000017Eu,c->r[0]); // 804F35E4
  c->r[0]=0u+0x00000000u; // 804F35E8
  W32(c->r[29]+0x00000120u,c->r[0]); // 804F35EC
  W32(c->r[29]+0x00000124u,c->r[0]); // 804F35F0
  W32(c->r[29]+0x00000128u,c->r[0]); // 804F35F4
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 804F35F8
  W32(c->r[29]+0x00000130u,c->r[0]); // 804F35FC
  W32(c->r[29]+0x00000134u,c->r[0]); // 804F3600
  W32(c->r[29]+0x00000138u,c->r[0]); // 804F3604
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 804F3608
  W32(c->r[29]+0x00000140u,c->r[0]); // 804F360C
  W32(c->r[29]+0x00000144u,c->r[0]); // 804F3610
  W32(c->r[29]+0x00000148u,c->r[0]); // 804F3614
  W32(c->r[29]+0x0000014Cu,c->r[0]); // 804F3618
  W32(c->r[29]+0x00000150u,c->r[0]); // 804F361C
  W32(c->r[29]+0x00000154u,c->r[0]); // 804F3620
  W32(c->r[29]+0x00000158u,c->r[0]); // 804F3624
  W32(c->r[29]+0x0000015Cu,c->r[0]); // 804F3628
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F362C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3630
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3634
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3638
  c->lr=c->r[0]; // 804F363C
  c->r[1]=c->r[1]+0x00000020u; // 804F3640
  return; // 804F3644
}

// Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback
void f_804F3648(Ctx* __restrict c) {
  trace_call(0x804F3648u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3648
  c->r[0]=c->lr; // 804F364C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F3650
  c->r[11]=c->r[1]+0x00000030u; // 804F3654
  c->lr=0x804F365Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F3658
  c->r[29]=c->r[3]|c->r[3]; // 804F365C
  c->r[30]=c->r[4]|c->r[4]; // 804F3660
  c->r[31]=c->r[5]|c->r[5]; // 804F3664
  c->r[24]=c->r[6]|c->r[6]; // 804F3668
  c->r[25]=c->r[7]|c->r[7]; // 804F366C
  c->lr=0x804F3674u; f_804FD930(c); // 804F3670
  c->r[3]=c->r[3]+0x00000354u; // 804F3674
  c->lr=0x804F367Cu; f_8037CD84(c); // 804F3678
  c->lr=0x804F3680u; f_804FD930(c); // 804F367C
  c->r[3]=c->r[3]+0x00000354u; // 804F3680
  c->lr=0x804F3688u; f_8037CD84(c); // 804F3684
  c->lr=0x804F368Cu; f_804FD930(c); // 804F3688
  c->r[3]=c->r[3]+0x00000354u; // 804F368C
  c->lr=0x804F3694u; f_8037CD84(c); // 804F3690
  c->r[0]=R8(c->r[29]+0x000000EDu); // 804F3694
  cmps(c,0,(int32_t)c->r[0],0); // 804F3698
  if (crb(c,2)) { goto L_804F36C4; } // 804F369C
  cmps(c,0,(int32_t)c->r[29],0); // 804F36A0
  c->r[27]=c->r[29]|c->r[29]; // 804F36A4
  if (crb(c,2)) { goto L_804F36B0; } // 804F36A8
  c->r[27]=c->r[29]+0x000000E0u; // 804F36AC
L_804F36B0:;
  c->lr=0x804F36B4u; f_804FD930(c); // 804F36B0
  c->r[4]=c->r[27]|c->r[27]; // 804F36B4
  c->lr=0x804F36BCu; f_804FDD64(c); // 804F36B8
  c->r[0]=0u+0x00000000u; // 804F36BC
  W8(c->r[29]+0x000000EDu,c->r[0]); // 804F36C0
L_804F36C4:;
  c->r[0]=R8(c->r[29]+0x000000ECu); // 804F36C4
  cmps(c,0,(int32_t)c->r[0],0); // 804F36C8
  if (crb(c,2)) { goto L_804F36F4; } // 804F36CC
  cmps(c,0,(int32_t)c->r[29],0); // 804F36D0
  c->r[27]=c->r[29]|c->r[29]; // 804F36D4
  if (crb(c,2)) { goto L_804F36E0; } // 804F36D8
  c->r[27]=c->r[29]+0x000000D4u; // 804F36DC
L_804F36E0:;
  c->lr=0x804F36E4u; f_804ED804(c); // 804F36E0
  c->r[4]=c->r[27]|c->r[27]; // 804F36E4
  c->lr=0x804F36ECu; f_804ED918(c); // 804F36E8
  c->r[0]=0u+0x00000000u; // 804F36EC
  W8(c->r[29]+0x000000ECu,c->r[0]); // 804F36F0
L_804F36F4:;
  c->r[26]=c->r[29]|c->r[29]; // 804F36F4
  c->r[27]=0u+0x00000000u; // 804F36F8
  c->r[28]=0u+0x00000000u; // 804F36FC
L_804F3700:;
  c->lr=0x804F3704u; f_804FD930(c); // 804F3700
  c->r[3]=c->r[3]+0x00000354u; // 804F3704
  c->lr=0x804F370Cu; f_8037CD84(c); // 804F3708
  cmps(c,0,(int32_t)c->r[27],15); // 804F370C
  if (!crb(c,1)) { goto L_804F371C; } // 804F3710
  c->r[3]=0u+0x00000000u; // 804F3714
  goto L_804F3720; // 804F3718
L_804F371C:;
  c->r[3]=R32(c->r[26]+0x00000120u); // 804F371C
L_804F3720:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3720
  if (!crb(c,2)) { goto L_804F3738; } // 804F3724
  c->lr=0x804F372Cu; f_804FD930(c); // 804F3728
  c->r[3]=c->r[3]+0x00000354u; // 804F372C
  c->lr=0x804F3734u; f_8037CE60(c); // 804F3730
  goto L_804F3764; // 804F3734
L_804F3738:;
  c->lr=0x804F373Cu; f_804F52A4(c); // 804F3738
  c->r[3]=R32(c->r[29]+0x00000114u); // 804F373C
  c->r[4]=R32(c->r[26]+0x00000120u); // 804F3740
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F3744
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F3748
  c->ctr=c->r[12]; // 804F374C
  if (true) { c->lr=0x804F3754u; dispatch(c,c->ctr); } // 804F3750
  W32(c->r[26]+0x00000120u,c->r[28]); // 804F3754
  c->lr=0x804F375Cu; f_804FD930(c); // 804F3758
  c->r[3]=c->r[3]+0x00000354u; // 804F375C
  c->lr=0x804F3764u; f_8037CE60(c); // 804F3760
L_804F3764:;
  c->r[27]=c->r[27]+0x00000001u; // 804F3764
  c->r[26]=c->r[26]+0x00000004u; // 804F3768
  cmps(c,0,(int32_t)c->r[27],16); // 804F376C
  if (crb(c,0)) { IRQCHK(c); goto L_804F3700; } // 804F3770
  c->lr=0x804F3778u; f_804FD930(c); // 804F3774
  c->r[3]=c->r[3]+0x00000354u; // 804F3778
  c->lr=0x804F3780u; f_8037CE60(c); // 804F377C
  c->lr=0x804F3784u; f_804FD930(c); // 804F3780
  c->r[3]=c->r[3]+0x00000354u; // 804F3784
  c->lr=0x804F378Cu; f_8037CE60(c); // 804F3788
  c->r[3]=c->r[29]|c->r[29]; // 804F378C
  c->r[4]=c->r[24]|c->r[24]; // 804F3790
  c->r[5]=c->r[25]|c->r[25]; // 804F3794
  c->lr=0x804F379Cu; f_804F3528(c); // 804F3798
  c->lr=0x804F37A0u; f_8037BBA4(c); // 804F379C
  c->r[28]=c->r[3]|c->r[3]; // 804F37A0
  c->r[3]=c->r[31]|c->r[31]; // 804F37A4
  c->r[26]=0u+0x00000000u; // 804F37A8
  goto L_804F37C0; // 804F37AC
L_804F37B0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804F37B0
  if (crb(c,2)) { goto L_804F37BC; } // 804F37B4
  c->r[26]=c->r[26]+0x00000001u; // 804F37B8
L_804F37BC:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804F37BC
L_804F37C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F37C0
  if (!crb(c,2)) { IRQCHK(c); goto L_804F37B0; } // 804F37C4
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F37C8
  c->r[3]=c->r[30]|c->r[30]; // 804F37CC
  c->r[12]=R32(c->r[12]+0x00000014u); // 804F37D0
  c->ctr=c->r[12]; // 804F37D4
  if (true) { c->lr=0x804F37DCu; dispatch(c,c->ctr); } // 804F37D8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 804F37DC
  if (!crb(c,1)) { goto L_804F3800; } // 804F37E0
  c->r[3]=c->r[28]|c->r[28]; // 804F37E4
  c->lr=0x804F37ECu; f_8037BBCC(c); // 804F37E8
  c->lr=0x804F37F0u; f_804FD930(c); // 804F37EC
  c->r[3]=c->r[3]+0x00000354u; // 804F37F0
  c->lr=0x804F37F8u; f_8037CE60(c); // 804F37F4
  c->r[3]=0u+0x00000001u; // 804F37F8
  goto L_804F38C4; // 804F37FC
L_804F3800:;
  c->r[27]=c->r[29]|c->r[29]; // 804F3800
  c->r[26]=0u+0x00000000u; // 804F3804
  goto L_804F387C; // 804F3808
L_804F380C:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 804F380C
  if (crb(c,2)) { goto L_804F3870; } // 804F3810
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F3814
  c->r[3]=c->r[30]|c->r[30]; // 804F3818
  c->r[4]=c->r[29]|c->r[29]; // 804F381C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F3820
  c->ctr=c->r[12]; // 804F3824
  if (true) { c->lr=0x804F382Cu; dispatch(c,c->ctr); } // 804F3828
  c->r[25]=c->r[3]|c->r[3]; // 804F382C
  c->lr=0x804F3834u; f_804FD930(c); // 804F3830
  c->r[3]=c->r[3]+0x00000354u; // 804F3834
  c->lr=0x804F383Cu; f_8037CD84(c); // 804F3838
  cmps(c,0,(int32_t)c->r[26],15); // 804F383C
  if (!crb(c,1)) { goto L_804F3854; } // 804F3840
  c->lr=0x804F3848u; f_804FD930(c); // 804F3844
  c->r[3]=c->r[3]+0x00000354u; // 804F3848
  c->lr=0x804F3850u; f_8037CE60(c); // 804F384C
  goto L_804F3870; // 804F3850
L_804F3854:;
  W32(c->r[27]+0x00000120u,c->r[25]); // 804F3854
  c->r[3]=c->r[25]|c->r[25]; // 804F3858
  c->r[4]=c->r[26]|c->r[26]; // 804F385C
  c->lr=0x804F3864u; f_804F4F5C(c); // 804F3860
  c->lr=0x804F3868u; f_804FD930(c); // 804F3864
  c->r[3]=c->r[3]+0x00000354u; // 804F3868
  c->lr=0x804F3870u; f_8037CE60(c); // 804F386C
L_804F3870:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 804F3870
  c->r[27]=c->r[27]+0x00000004u; // 804F3874
  c->r[26]=c->r[26]+0x00000001u; // 804F3878
L_804F387C:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F387C
  if (!crb(c,2)) { IRQCHK(c); goto L_804F380C; } // 804F3880
  c->r[3]=c->r[28]|c->r[28]; // 804F3884
  c->lr=0x804F388Cu; f_8037BBCC(c); // 804F3888
  cmps(c,0,(int32_t)c->r[29],0); // 804F388C
  c->r[27]=c->r[29]|c->r[29]; // 804F3890
  if (crb(c,2)) { goto L_804F389C; } // 804F3894
  c->r[27]=c->r[29]+0x000000D4u; // 804F3898
L_804F389C:;
  c->lr=0x804F38A0u; f_804ED804(c); // 804F389C
  c->r[4]=c->r[27]|c->r[27]; // 804F38A0
  c->lr=0x804F38A8u; f_804ED8E8(c); // 804F38A4
  c->r[0]=0u+0x00000001u; // 804F38A8
  W32(c->r[29]+0x00000114u,c->r[30]); // 804F38AC
  W8(c->r[29]+0x000000ECu,c->r[0]); // 804F38B0
  c->lr=0x804F38B8u; f_804FD930(c); // 804F38B4
  c->r[3]=c->r[3]+0x00000354u; // 804F38B8
  c->lr=0x804F38C0u; f_8037CE60(c); // 804F38BC
  c->r[3]=0u+0x00000000u; // 804F38C0
L_804F38C4:;
  c->r[11]=c->r[1]+0x00000030u; // 804F38C4
  c->lr=0x804F38CCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F38C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F38CC
  c->lr=c->r[0]; // 804F38D0
  c->r[1]=c->r[1]+0x00000030u; // 804F38D4
  return; // 804F38D8
}

// SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl
void f_804F38DC(Ctx* __restrict c) {
  trace_call(0x804F38DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F38DC
  c->r[0]=c->lr; // 804F38E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F38E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F38E8
  c->r[31]=c->r[3]|c->r[3]; // 804F38EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F38F0
  c->r[30]=c->r[5]|c->r[5]; // 804F38F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F38F8
  c->r[29]=c->r[4]|c->r[4]; // 804F38FC
  c->lr=0x804F3904u; f_804FD930(c); // 804F3900
  c->r[3]=c->r[3]+0x00000354u; // 804F3904
  c->lr=0x804F390Cu; f_8037CD84(c); // 804F3908
  cmps(c,0,(int32_t)c->r[29],0); // 804F390C
  c->r[31]=R32(c->r[31]+0x00000120u); // 804F3910
  if (crb(c,2)) { goto L_804F3930; } // 804F3914
  c->r[3]=c->r[31]|c->r[31]; // 804F3918
  c->r[4]=c->r[29]|c->r[29]; // 804F391C
  c->r[5]=c->r[30]|c->r[30]; // 804F3920
  c->lr=0x804F3928u; f_804F5278(c); // 804F3924
  c->r[3]=c->r[31]|c->r[31]; // 804F3928
  c->lr=0x804F3930u; f_804F5288(c); // 804F392C
L_804F3930:;
  c->lr=0x804F3934u; f_804FD930(c); // 804F3930
  c->r[3]=c->r[3]+0x00000354u; // 804F3934
  c->lr=0x804F393Cu; f_8037CE60(c); // 804F3938
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F393C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F3940
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3944
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3948
  c->lr=c->r[0]; // 804F394C
  c->r[1]=c->r[1]+0x00000020u; // 804F3950
  return; // 804F3954
}

// fn_804F3958
void f_804F3958(Ctx* __restrict c) {
  trace_call(0x804F3958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3958
  c->r[0]=c->lr; // 804F395C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F3960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F3964
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F3968
  c->r[30]=c->r[3]|c->r[3]; // 804F396C
  c->lr=0x804F3974u; f_804FD930(c); // 804F3970
  c->r[3]=c->r[3]+0x00000354u; // 804F3974
  c->lr=0x804F397Cu; f_8037CD84(c); // 804F3978
  cmps(c,0,(int32_t)c->r[30],0); // 804F397C
  c->r[31]=c->r[30]|c->r[30]; // 804F3980
  if (crb(c,2)) { goto L_804F398C; } // 804F3984
  c->r[31]=c->r[30]+0x000000E0u; // 804F3988
L_804F398C:;
  c->lr=0x804F3990u; f_804FD930(c); // 804F398C
  c->r[4]=c->r[31]|c->r[31]; // 804F3990
  c->lr=0x804F3998u; f_804FDCFC(c); // 804F3994
  c->r[0]=0u+0x00000001u; // 804F3998
  W8(c->r[30]+0x000000EDu,c->r[0]); // 804F399C
  c->lr=0x804F39A4u; f_804FD930(c); // 804F39A0
  c->r[3]=c->r[3]+0x00000354u; // 804F39A4
  c->lr=0x804F39ACu; f_8037CE60(c); // 804F39A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F39AC
  c->r[3]=0u+0x00000001u; // 804F39B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F39B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F39B8
  c->lr=c->r[0]; // 804F39BC
  c->r[1]=c->r[1]+0x00000010u; // 804F39C0
  return; // 804F39C4
}

// Stop__Q44nw4r3snd6detail9SeqPlayerFv
void f_804F39C8(Ctx* __restrict c) {
  trace_call(0x804F39C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F39C8
  c->r[0]=c->lr; // 804F39CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F39D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F39D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F39D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F39DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F39E0
  c->r[28]=c->r[3]|c->r[3]; // 804F39E4
  c->lr=0x804F39ECu; f_804FD930(c); // 804F39E8
  c->r[3]=c->r[3]+0x00000354u; // 804F39EC
  c->lr=0x804F39F4u; f_8037CD84(c); // 804F39F0
  c->lr=0x804F39F8u; f_804FD930(c); // 804F39F4
  c->r[3]=c->r[3]+0x00000354u; // 804F39F8
  c->lr=0x804F3A00u; f_8037CD84(c); // 804F39FC
  c->r[0]=R8(c->r[28]+0x000000EDu); // 804F3A00
  cmps(c,0,(int32_t)c->r[0],0); // 804F3A04
  if (crb(c,2)) { goto L_804F3A30; } // 804F3A08
  cmps(c,0,(int32_t)c->r[28],0); // 804F3A0C
  c->r[30]=c->r[28]|c->r[28]; // 804F3A10
  if (crb(c,2)) { goto L_804F3A1C; } // 804F3A14
  c->r[30]=c->r[28]+0x000000E0u; // 804F3A18
L_804F3A1C:;
  c->lr=0x804F3A20u; f_804FD930(c); // 804F3A1C
  c->r[4]=c->r[30]|c->r[30]; // 804F3A20
  c->lr=0x804F3A28u; f_804FDD64(c); // 804F3A24
  c->r[0]=0u+0x00000000u; // 804F3A28
  W8(c->r[28]+0x000000EDu,c->r[0]); // 804F3A2C
L_804F3A30:;
  c->r[0]=R8(c->r[28]+0x000000ECu); // 804F3A30
  cmps(c,0,(int32_t)c->r[0],0); // 804F3A34
  if (crb(c,2)) { goto L_804F3A60; } // 804F3A38
  cmps(c,0,(int32_t)c->r[28],0); // 804F3A3C
  c->r[30]=c->r[28]|c->r[28]; // 804F3A40
  if (crb(c,2)) { goto L_804F3A4C; } // 804F3A44
  c->r[30]=c->r[28]+0x000000D4u; // 804F3A48
L_804F3A4C:;
  c->lr=0x804F3A50u; f_804ED804(c); // 804F3A4C
  c->r[4]=c->r[30]|c->r[30]; // 804F3A50
  c->lr=0x804F3A58u; f_804ED918(c); // 804F3A54
  c->r[0]=0u+0x00000000u; // 804F3A58
  W8(c->r[28]+0x000000ECu,c->r[0]); // 804F3A5C
L_804F3A60:;
  c->r[29]=c->r[28]|c->r[28]; // 804F3A60
  c->r[30]=0u+0x00000000u; // 804F3A64
  c->r[31]=0u+0x00000000u; // 804F3A68
L_804F3A6C:;
  c->lr=0x804F3A70u; f_804FD930(c); // 804F3A6C
  c->r[3]=c->r[3]+0x00000354u; // 804F3A70
  c->lr=0x804F3A78u; f_8037CD84(c); // 804F3A74
  cmps(c,0,(int32_t)c->r[30],15); // 804F3A78
  if (!crb(c,1)) { goto L_804F3A88; } // 804F3A7C
  c->r[3]=0u+0x00000000u; // 804F3A80
  goto L_804F3A8C; // 804F3A84
L_804F3A88:;
  c->r[3]=R32(c->r[29]+0x00000120u); // 804F3A88
L_804F3A8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3A8C
  if (!crb(c,2)) { goto L_804F3AA4; } // 804F3A90
  c->lr=0x804F3A98u; f_804FD930(c); // 804F3A94
  c->r[3]=c->r[3]+0x00000354u; // 804F3A98
  c->lr=0x804F3AA0u; f_8037CE60(c); // 804F3A9C
  goto L_804F3AD0; // 804F3AA0
L_804F3AA4:;
  c->lr=0x804F3AA8u; f_804F52A4(c); // 804F3AA4
  c->r[3]=R32(c->r[28]+0x00000114u); // 804F3AA8
  c->r[4]=R32(c->r[29]+0x00000120u); // 804F3AAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F3AB0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F3AB4
  c->ctr=c->r[12]; // 804F3AB8
  if (true) { c->lr=0x804F3AC0u; dispatch(c,c->ctr); } // 804F3ABC
  W32(c->r[29]+0x00000120u,c->r[31]); // 804F3AC0
  c->lr=0x804F3AC8u; f_804FD930(c); // 804F3AC4
  c->r[3]=c->r[3]+0x00000354u; // 804F3AC8
  c->lr=0x804F3AD0u; f_8037CE60(c); // 804F3ACC
L_804F3AD0:;
  c->r[30]=c->r[30]+0x00000001u; // 804F3AD0
  c->r[29]=c->r[29]+0x00000004u; // 804F3AD4
  cmps(c,0,(int32_t)c->r[30],16); // 804F3AD8
  if (crb(c,0)) { IRQCHK(c); goto L_804F3A6C; } // 804F3ADC
  c->lr=0x804F3AE4u; f_804FD930(c); // 804F3AE0
  c->r[3]=c->r[3]+0x00000354u; // 804F3AE4
  c->lr=0x804F3AECu; f_8037CE60(c); // 804F3AE8
  c->lr=0x804F3AF0u; f_804FD930(c); // 804F3AEC
  c->r[3]=c->r[3]+0x00000354u; // 804F3AF0
  c->lr=0x804F3AF8u; f_8037CE60(c); // 804F3AF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3AF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F3AFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3B00
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3B04
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F3B08
  c->lr=c->r[0]; // 804F3B0C
  c->r[1]=c->r[1]+0x00000020u; // 804F3B10
  return; // 804F3B14
}

// Pause__Q44nw4r3snd6detail9SeqPlayerFb
void f_804F3B18(Ctx* __restrict c) {
  trace_call(0x804F3B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3B18
  c->r[0]=c->lr; // 804F3B1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F3B20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F3B24
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F3B28
  c->r[30]=c->r[4]|c->r[4]; // 804F3B2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F3B30
  c->r[29]=c->r[3]|c->r[3]; // 804F3B34
  c->lr=0x804F3B3Cu; f_804FD930(c); // 804F3B38
  c->r[3]=c->r[3]+0x00000354u; // 804F3B3C
  c->lr=0x804F3B44u; f_8037CD84(c); // 804F3B40
  W8(c->r[29]+0x000000EEu,c->r[30]); // 804F3B44
  c->r[31]=0u+0x00000000u; // 804F3B48
L_804F3B4C:;
  cmps(c,0,(int32_t)c->r[31],15); // 804F3B4C
  if (!crb(c,1)) { goto L_804F3B5C; } // 804F3B50
  c->r[3]=0u+0x00000000u; // 804F3B54
  goto L_804F3B60; // 804F3B58
L_804F3B5C:;
  c->r[3]=R32(c->r[29]+0x00000120u); // 804F3B5C
L_804F3B60:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3B60
  if (crb(c,2)) { goto L_804F3B70; } // 804F3B64
  c->r[4]=c->r[30]|c->r[30]; // 804F3B68
  c->lr=0x804F3B70u; f_804F5648(c); // 804F3B6C
L_804F3B70:;
  c->r[31]=c->r[31]+0x00000001u; // 804F3B70
  c->r[29]=c->r[29]+0x00000004u; // 804F3B74
  cmps(c,0,(int32_t)c->r[31],16); // 804F3B78
  if (crb(c,0)) { IRQCHK(c); goto L_804F3B4C; } // 804F3B7C
  c->lr=0x804F3B84u; f_804FD930(c); // 804F3B80
  c->r[3]=c->r[3]+0x00000354u; // 804F3B84
  c->lr=0x804F3B8Cu; f_8037CE60(c); // 804F3B88
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3B8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F3B90
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3B94
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3B98
  c->lr=c->r[0]; // 804F3B9C
  c->r[1]=c->r[1]+0x00000020u; // 804F3BA0
  return; // 804F3BA4
}

// Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_804F3BA8(Ctx* __restrict c) {
  trace_call(0x804F3BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3BA8
  c->r[0]=c->lr; // 804F3BAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F3BB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F3BB4
  c->r[31]=c->r[5]|c->r[5]; // 804F3BB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F3BBC
  c->r[30]=c->r[4]|c->r[4]; // 804F3BC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F3BC4
  c->r[29]=c->r[3]|c->r[3]; // 804F3BC8
  c->lr=0x804F3BD0u; f_804FD930(c); // 804F3BCC
  c->r[3]=c->r[3]+0x00000354u; // 804F3BD0
  c->lr=0x804F3BD8u; f_8037CD84(c); // 804F3BD4
  c->r[0]=R8(c->r[29]+0x000000ECu); // 804F3BD8
  cmps(c,0,(int32_t)c->r[0],0); // 804F3BDC
  if (!crb(c,2)) { goto L_804F3BF4; } // 804F3BE0
  c->lr=0x804F3BE8u; f_804FD930(c); // 804F3BE4
  c->r[3]=c->r[3]+0x00000354u; // 804F3BE8
  c->lr=0x804F3BF0u; f_8037CE60(c); // 804F3BEC
  goto L_804F3C50; // 804F3BF0
L_804F3BF4:;
  cmps(c,0,(int32_t)c->r[30],1); // 804F3BF4
  if (crb(c,2)) { goto L_804F3C1C; } // 804F3BF8
  if (!crb(c,0)) { goto L_804F3C44; } // 804F3BFC
  cmps(c,0,(int32_t)c->r[30],0); // 804F3C00
  if (!crb(c,0)) { goto L_804F3C0C; } // 804F3C04
  goto L_804F3C44; // 804F3C08
L_804F3C0C:;
  c->r[0]=R32(c->r[29]+0x000000FCu); // 804F3C0C
  c->r[0]=c->r[0]+c->r[31]; // 804F3C10
  W32(c->r[29]+0x000000FCu,c->r[0]); // 804F3C14
  goto L_804F3C44; // 804F3C18
L_804F3C1C:;
  c->r[3]=c->r[31]^0x80000000u; // 804F3C1C
  c->r[0]=0u+0x43300000u; // 804F3C20
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804F3C24
  {uint32_t ea=c->r[2]+0x00001AB0u; c->f[2]=RF64(ea);} // 804F3C28
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F3C2C
  {uint32_t ea=c->r[29]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F3C30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F3C34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F3C38
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804F3C3C
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 804F3C40
L_804F3C44:;
  c->lr=0x804F3C48u; f_804FD930(c); // 804F3C44
  c->r[3]=c->r[3]+0x00000354u; // 804F3C48
  c->lr=0x804F3C50u; f_8037CE60(c); // 804F3C4C
L_804F3C50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3C50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F3C54
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3C58
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3C5C
  c->lr=c->r[0]; // 804F3C60
  c->r[1]=c->r[1]+0x00000020u; // 804F3C64
  return; // 804F3C68
}

// fn_804F3C6C
void f_804F3C6C(Ctx* __restrict c) {
  trace_call(0x804F3C6Cu);
  W8(c->r[3]+0x00000109u,c->r[4]); // 804F3C6C
  return; // 804F3C70
}

// fn_804F3C74
void f_804F3C74(Ctx* __restrict c) {
  trace_call(0x804F3C74u);
  W8(c->r[3]+0x000000EFu,c->r[4]); // 804F3C74
  return; // 804F3C78
}

// fn_804F3C7C
void f_804F3C7C(Ctx* __restrict c) {
  trace_call(0x804F3C7Cu);
  W32(c->r[3]+0x00000118u,c->r[4]); // 804F3C7C
  W32(c->r[3]+0x0000011Cu,c->r[5]); // 804F3C80
  return; // 804F3C84
}

// fn_804F3C88
void f_804F3C88(Ctx* __restrict c) {
  trace_call(0x804F3C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3C88
  c->r[0]=c->lr; // 804F3C8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F3C90
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804F3C94
  c->r[31]=c->r[5]|c->r[5]; // 804F3C98
  W32(c->r[1]+0x00000028u,c->r[30]); // 804F3C9C
  c->r[30]=c->r[4]|c->r[4]; // 804F3CA0
  W32(c->r[1]+0x00000024u,c->r[29]); // 804F3CA4
  c->r[29]=c->r[3]|c->r[3]; // 804F3CA8
  c->r[0]=R32(c->r[3]+0x00000118u); // 804F3CAC
  cmps(c,0,(int32_t)c->r[0],0); // 804F3CB0
  if (crb(c,2)) { goto L_804F3D04; } // 804F3CB4
  c->r[5]=0u+0x80830000u; // 804F3CB8
  c->r[0]=c->r[3]+0x00000160u; // 804F3CBC
  c->r[5]=c->r[5]+0xFFFF89C0u; // 804F3CC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804F3CC4
  c->r[3]=c->r[31]|c->r[31]; // 804F3CC8
  c->r[4]=0u+0x00000000u; // 804F3CCC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804F3CD0
  c->lr=0x804F3CD8u; f_804F5F68(c); // 804F3CD4
  W32(c->r[1]+0x00000010u,c->r[3]); // 804F3CD8
  c->r[3]=c->r[30]|c->r[30]; // 804F3CDC
  c->r[4]=c->r[1]+0x00000008u; // 804F3CE0
  c->r[0]=R8(c->r[31]+0x00000024u); // 804F3CE4
  W8(c->r[1]+0x00000014u,c->r[0]); // 804F3CE8
  c->r[12]=R32(c->r[29]+0x00000118u); // 804F3CEC
  c->r[5]=R32(c->r[29]+0x0000011Cu); // 804F3CF0
  c->ctr=c->r[12]; // 804F3CF4
  if (true) { c->lr=0x804F3CFCu; dispatch(c,c->ctr); } // 804F3CF8
  c->r[0]=R8(c->r[1]+0x00000014u); // 804F3CFC
  W8(c->r[31]+0x00000024u,c->r[0]); // 804F3D00
L_804F3D04:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F3D04
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804F3D08
  c->r[30]=R32(c->r[1]+0x00000028u); // 804F3D0C
  c->r[29]=R32(c->r[1]+0x00000024u); // 804F3D10
  c->lr=c->r[0]; // 804F3D14
  c->r[1]=c->r[1]+0x00000030u; // 804F3D18
  return; // 804F3D1C
}

// InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv
void f_804F3D20(Ctx* __restrict c) {
  trace_call(0x804F3D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3D20
  c->r[0]=c->lr; // 804F3D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F3D28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F3D2C
  c->r[31]=c->r[3]|c->r[3]; // 804F3D30
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F3D34
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F3D38
  c->r[29]=c->r[4]|c->r[4]; // 804F3D3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F3D40
  c->r[28]=c->r[5]|c->r[5]; // 804F3D44
  c->lr=0x804F3D4Cu; f_804FD930(c); // 804F3D48
  c->r[3]=c->r[3]+0x00000354u; // 804F3D4C
  c->lr=0x804F3D54u; f_8037CD84(c); // 804F3D50
  c->r[0]=R8(c->r[31]+0x000000ECu); // 804F3D54
  cmps(c,0,(int32_t)c->r[0],0); // 804F3D58
  if (crb(c,2)) { goto L_804F3EC0; } // 804F3D5C
  c->r[0]=0u+0x00000010u; // 804F3D60
  c->r[4]=c->r[31]|c->r[31]; // 804F3D64
  c->r[5]=0u+0x00000000u; // 804F3D68
  c->ctr=c->r[0]; // 804F3D6C
L_804F3D70:;
  cmps(c,0,(int32_t)c->r[5],15); // 804F3D70
  if (!crb(c,1)) { goto L_804F3D80; } // 804F3D74
  c->r[3]=0u+0x00000000u; // 804F3D78
  goto L_804F3D84; // 804F3D7C
L_804F3D80:;
  c->r[3]=R32(c->r[4]+0x00000120u); // 804F3D80
L_804F3D84:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3D84
  if (crb(c,2)) { goto L_804F3EB4; } // 804F3D88
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804F3D8C
  cmpu(c,0,c->r[29],c->r[0]); // 804F3D90
  if (crb(c,1)) { goto L_804F3EB4; } // 804F3D94
  cmpu(c,0,c->r[0],c->r[28]); // 804F3D98
  if (crb(c,1)) { goto L_804F3EB4; } // 804F3D9C
  c->lr=0x804F3DA4u; f_804FD930(c); // 804F3DA0
  c->r[3]=c->r[3]+0x00000354u; // 804F3DA4
  c->lr=0x804F3DACu; f_8037CD84(c); // 804F3DA8
  c->lr=0x804F3DB0u; f_804FD930(c); // 804F3DAC
  c->r[3]=c->r[3]+0x00000354u; // 804F3DB0
  c->lr=0x804F3DB8u; f_8037CD84(c); // 804F3DB4
  c->r[0]=R8(c->r[31]+0x000000EDu); // 804F3DB8
  cmps(c,0,(int32_t)c->r[0],0); // 804F3DBC
  if (crb(c,2)) { goto L_804F3DE8; } // 804F3DC0
  cmps(c,0,(int32_t)c->r[31],0); // 804F3DC4
  c->r[29]=c->r[31]|c->r[31]; // 804F3DC8
  if (crb(c,2)) { goto L_804F3DD4; } // 804F3DCC
  c->r[29]=c->r[31]+0x000000E0u; // 804F3DD0
L_804F3DD4:;
  c->lr=0x804F3DD8u; f_804FD930(c); // 804F3DD4
  c->r[4]=c->r[29]|c->r[29]; // 804F3DD8
  c->lr=0x804F3DE0u; f_804FDD64(c); // 804F3DDC
  c->r[0]=0u+0x00000000u; // 804F3DE0
  W8(c->r[31]+0x000000EDu,c->r[0]); // 804F3DE4
L_804F3DE8:;
  c->r[0]=R8(c->r[31]+0x000000ECu); // 804F3DE8
  cmps(c,0,(int32_t)c->r[0],0); // 804F3DEC
  if (crb(c,2)) { goto L_804F3E18; } // 804F3DF0
  cmps(c,0,(int32_t)c->r[31],0); // 804F3DF4
  c->r[29]=c->r[31]|c->r[31]; // 804F3DF8
  if (crb(c,2)) { goto L_804F3E04; } // 804F3DFC
  c->r[29]=c->r[31]+0x000000D4u; // 804F3E00
L_804F3E04:;
  c->lr=0x804F3E08u; f_804ED804(c); // 804F3E04
  c->r[4]=c->r[29]|c->r[29]; // 804F3E08
  c->lr=0x804F3E10u; f_804ED918(c); // 804F3E0C
  c->r[0]=0u+0x00000000u; // 804F3E10
  W8(c->r[31]+0x000000ECu,c->r[0]); // 804F3E14
L_804F3E18:;
  c->r[28]=c->r[31]|c->r[31]; // 804F3E18
  c->r[29]=0u+0x00000000u; // 804F3E1C
  c->r[30]=0u+0x00000000u; // 804F3E20
L_804F3E24:;
  c->lr=0x804F3E28u; f_804FD930(c); // 804F3E24
  c->r[3]=c->r[3]+0x00000354u; // 804F3E28
  c->lr=0x804F3E30u; f_8037CD84(c); // 804F3E2C
  cmps(c,0,(int32_t)c->r[29],15); // 804F3E30
  if (!crb(c,1)) { goto L_804F3E40; } // 804F3E34
  c->r[3]=0u+0x00000000u; // 804F3E38
  goto L_804F3E44; // 804F3E3C
L_804F3E40:;
  c->r[3]=R32(c->r[28]+0x00000120u); // 804F3E40
L_804F3E44:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3E44
  if (!crb(c,2)) { goto L_804F3E5C; } // 804F3E48
  c->lr=0x804F3E50u; f_804FD930(c); // 804F3E4C
  c->r[3]=c->r[3]+0x00000354u; // 804F3E50
  c->lr=0x804F3E58u; f_8037CE60(c); // 804F3E54
  goto L_804F3E88; // 804F3E58
L_804F3E5C:;
  c->lr=0x804F3E60u; f_804F52A4(c); // 804F3E5C
  c->r[3]=R32(c->r[31]+0x00000114u); // 804F3E60
  c->r[4]=R32(c->r[28]+0x00000120u); // 804F3E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F3E68
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F3E6C
  c->ctr=c->r[12]; // 804F3E70
  if (true) { c->lr=0x804F3E78u; dispatch(c,c->ctr); } // 804F3E74
  W32(c->r[28]+0x00000120u,c->r[30]); // 804F3E78
  c->lr=0x804F3E80u; f_804FD930(c); // 804F3E7C
  c->r[3]=c->r[3]+0x00000354u; // 804F3E80
  c->lr=0x804F3E88u; f_8037CE60(c); // 804F3E84
L_804F3E88:;
  c->r[29]=c->r[29]+0x00000001u; // 804F3E88
  c->r[28]=c->r[28]+0x00000004u; // 804F3E8C
  cmps(c,0,(int32_t)c->r[29],16); // 804F3E90
  if (crb(c,0)) { IRQCHK(c); goto L_804F3E24; } // 804F3E94
  c->lr=0x804F3E9Cu; f_804FD930(c); // 804F3E98
  c->r[3]=c->r[3]+0x00000354u; // 804F3E9C
  c->lr=0x804F3EA4u; f_8037CE60(c); // 804F3EA0
  c->lr=0x804F3EA8u; f_804FD930(c); // 804F3EA4
  c->r[3]=c->r[3]+0x00000354u; // 804F3EA8
  c->lr=0x804F3EB0u; f_8037CE60(c); // 804F3EAC
  goto L_804F3EC0; // 804F3EB0
L_804F3EB4:;
  c->r[4]=c->r[4]+0x00000004u; // 804F3EB4
  c->r[5]=c->r[5]+0x00000001u; // 804F3EB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F3D70; } // 804F3EBC
L_804F3EC0:;
  c->lr=0x804F3EC4u; f_804FD930(c); // 804F3EC0
  c->r[3]=c->r[3]+0x00000354u; // 804F3EC4
  c->lr=0x804F3ECCu; f_8037CE60(c); // 804F3EC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F3ECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F3ED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F3ED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F3ED8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F3EDC
  c->lr=c->r[0]; // 804F3EE0
  c->r[1]=c->r[1]+0x00000020u; // 804F3EE4
  return; // 804F3EE8
}

// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
void f_804F3EEC(Ctx* __restrict c) {
  trace_call(0x804F3EECu);
  cmps(c,0,(int32_t)c->r[4],15); // 804F3EEC
  if (!crb(c,1)) { goto L_804F3EFC; } // 804F3EF0
  c->r[3]=0u+0x00000000u; // 804F3EF4
  return; // 804F3EF8
L_804F3EFC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804F3EFC
  c->r[3]=c->r[3]+c->r[0]; // 804F3F00
  c->r[3]=R32(c->r[3]+0x00000120u); // 804F3F04
  return; // 804F3F08
}

// ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb
void f_804F3F0C(Ctx* __restrict c) {
  trace_call(0x804F3F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F3F0C
  c->r[0]=c->lr; // 804F3F10
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F3F14
  c->r[11]=c->r[1]+0x00000030u; // 804F3F18
  c->lr=0x804F3F20u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F3F1C
  c->r[25]=c->r[3]|c->r[3]; // 804F3F20
  c->r[26]=c->r[4]|c->r[4]; // 804F3F24
  c->lr=0x804F3F2Cu; f_804FD930(c); // 804F3F28
  c->r[3]=c->r[3]+0x00000354u; // 804F3F2C
  c->lr=0x804F3F34u; f_8037CD84(c); // 804F3F30
  c->r[29]=c->r[25]|c->r[25]; // 804F3F34
  c->r[28]=0u+0x00000000u; // 804F3F38
  c->r[27]=0u+0x00000000u; // 804F3F3C
  c->r[31]=0u+0x00000000u; // 804F3F40
L_804F3F44:;
  cmps(c,0,(int32_t)c->r[27],15); // 804F3F44
  if (!crb(c,1)) { goto L_804F3F54; } // 804F3F48
  c->r[30]=0u+0x00000000u; // 804F3F4C
  goto L_804F3F58; // 804F3F50
L_804F3F54:;
  c->r[30]=R32(c->r[29]+0x00000120u); // 804F3F54
L_804F3F58:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F3F58
  if (crb(c,2)) { goto L_804F3FF0; } // 804F3F5C
  c->r[3]=c->r[30]|c->r[30]; // 804F3F60
  c->lr=0x804F3F68u; f_804F5374(c); // 804F3F64
  c->r[3]=c->r[30]|c->r[30]; // 804F3F68
  c->r[4]=c->r[26]|c->r[26]; // 804F3F6C
  c->lr=0x804F3F74u; f_804F5444(c); // 804F3F70
  cmps(c,0,(int32_t)c->r[3],0); // 804F3F74
  if (!crb(c,0)) { goto L_804F3FE0; } // 804F3F78
  c->lr=0x804F3F80u; f_804FD930(c); // 804F3F7C
  c->r[3]=c->r[3]+0x00000354u; // 804F3F80
  c->lr=0x804F3F88u; f_8037CD84(c); // 804F3F84
  cmps(c,0,(int32_t)c->r[27],15); // 804F3F88
  if (!crb(c,1)) { goto L_804F3F98; } // 804F3F8C
  c->r[3]=0u+0x00000000u; // 804F3F90
  goto L_804F3F9C; // 804F3F94
L_804F3F98:;
  c->r[3]=R32(c->r[29]+0x00000120u); // 804F3F98
L_804F3F9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F3F9C
  if (!crb(c,2)) { goto L_804F3FB4; } // 804F3FA0
  c->lr=0x804F3FA8u; f_804FD930(c); // 804F3FA4
  c->r[3]=c->r[3]+0x00000354u; // 804F3FA8
  c->lr=0x804F3FB0u; f_8037CE60(c); // 804F3FAC
  goto L_804F3FE0; // 804F3FB0
L_804F3FB4:;
  c->lr=0x804F3FB8u; f_804F52A4(c); // 804F3FB4
  c->r[3]=R32(c->r[25]+0x00000114u); // 804F3FB8
  c->r[4]=R32(c->r[29]+0x00000120u); // 804F3FBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F3FC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F3FC4
  c->ctr=c->r[12]; // 804F3FC8
  if (true) { c->lr=0x804F3FD0u; dispatch(c,c->ctr); } // 804F3FCC
  W32(c->r[29]+0x00000120u,c->r[31]); // 804F3FD0
  c->lr=0x804F3FD8u; f_804FD930(c); // 804F3FD4
  c->r[3]=c->r[3]+0x00000354u; // 804F3FD8
  c->lr=0x804F3FE0u; f_8037CE60(c); // 804F3FDC
L_804F3FE0:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 804F3FE0
  cmps(c,0,(int32_t)c->r[0],0); // 804F3FE4
  if (crb(c,2)) { goto L_804F3FF0; } // 804F3FE8
  c->r[28]=0u+0x00000001u; // 804F3FEC
L_804F3FF0:;
  c->r[27]=c->r[27]+0x00000001u; // 804F3FF0
  c->r[29]=c->r[29]+0x00000004u; // 804F3FF4
  cmps(c,0,(int32_t)c->r[27],16); // 804F3FF8
  if (crb(c,0)) { IRQCHK(c); goto L_804F3F44; } // 804F3FFC
  cmps(c,0,(int32_t)c->r[28],0); // 804F4000
  if (!crb(c,2)) { goto L_804F401C; } // 804F4004
  c->lr=0x804F400Cu; f_804FD930(c); // 804F4008
  c->r[3]=c->r[3]+0x00000354u; // 804F400C
  c->lr=0x804F4014u; f_8037CE60(c); // 804F4010
  c->r[3]=0u+0x00000001u; // 804F4014
  goto L_804F402C; // 804F4018
L_804F401C:;
  c->lr=0x804F4020u; f_804FD930(c); // 804F401C
  c->r[3]=c->r[3]+0x00000354u; // 804F4020
  c->lr=0x804F4028u; f_8037CE60(c); // 804F4024
  c->r[3]=0u+0x00000000u; // 804F4028
L_804F402C:;
  c->r[11]=c->r[1]+0x00000030u; // 804F402C
  c->lr=0x804F4034u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F4030
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F4034
  c->lr=c->r[0]; // 804F4038
  c->r[1]=c->r[1]+0x00000030u; // 804F403C
  return; // 804F4040
}

// GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
void f_804F4044(Ctx* __restrict c) {
  trace_call(0x804F4044u);
  cmps(c,0,(int32_t)c->r[4],16); // 804F4044
  if (!crb(c,0)) { goto L_804F405C; } // 804F4048
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804F404C
  c->r[3]=c->r[3]+c->r[0]; // 804F4050
  c->r[3]=c->r[3]+0x00000160u; // 804F4054
  return; // 804F4058
L_804F405C:;
  cmps(c,0,(int32_t)c->r[4],32); // 804F405C
  c->r[3]=0u+0x00000000u; // 804F4060
  if (!crb(c,0)) return; // 804F4064
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 804F4068
  c->r[3]=0u+0x80830000u; // 804F406C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804F4070
  c->r[3]=c->r[3]+0xFFFF89C0u; // 804F4074
  c->r[3]=c->r[3]+c->r[0]; // 804F4078
  return; // 804F407C
}

// Update__Q44nw4r3snd6detail9SeqPlayerFv
void f_804F4080(Ctx* __restrict c) {
  trace_call(0x804F4080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4080
  c->r[0]=c->lr; // 804F4084
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F4088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F408C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4090
  c->r[30]=c->r[3]|c->r[3]; // 804F4094
  c->lr=0x804F409Cu; f_804FD930(c); // 804F4098
  c->r[3]=c->r[3]+0x00000354u; // 804F409C
  c->lr=0x804F40A4u; f_8037CD84(c); // 804F40A0
  c->r[0]=R8(c->r[30]+0x000000ECu); // 804F40A4
  cmps(c,0,(int32_t)c->r[0],0); // 804F40A8
  if (!crb(c,2)) { goto L_804F40C0; } // 804F40AC
  c->lr=0x804F40B4u; f_804FD930(c); // 804F40B0
  c->r[3]=c->r[3]+0x00000354u; // 804F40B4
  c->lr=0x804F40BCu; f_8037CE60(c); // 804F40B8
  goto L_804F4174; // 804F40BC
L_804F40C0:;
  c->r[0]=R8(c->r[30]+0x000000EDu); // 804F40C0
  cmps(c,0,(int32_t)c->r[0],0); // 804F40C4
  if (!crb(c,2)) { goto L_804F40DC; } // 804F40C8
  c->lr=0x804F40D0u; f_804FD930(c); // 804F40CC
  c->r[3]=c->r[3]+0x00000354u; // 804F40D0
  c->lr=0x804F40D8u; f_8037CE60(c); // 804F40D4
  goto L_804F4174; // 804F40D8
L_804F40DC:;
  c->r[0]=R32(c->r[30]+0x000000FCu); // 804F40DC
  cmps(c,0,(int32_t)c->r[0],0); // 804F40E0
  if (!crb(c,2)) { goto L_804F40F8; } // 804F40E4
  {uint32_t ea=c->r[30]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F40E8
  {uint32_t ea=c->r[2]+0x00001AACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F40EC
  fcmp(c,0,c->f[1],c->f[0]); // 804F40F0
  if (!crb(c,1)) { goto L_804F4104; } // 804F40F4
L_804F40F8:;
  c->r[3]=c->r[30]|c->r[30]; // 804F40F8
  c->lr=0x804F4100u; f_804F43F0(c); // 804F40FC
  goto L_804F411C; // 804F4100
L_804F4104:;
  c->r[0]=R8(c->r[30]+0x000000EEu); // 804F4104
  cmps(c,0,(int32_t)c->r[0],0); // 804F4108
  if (!crb(c,2)) { goto L_804F411C; } // 804F410C
  c->r[3]=c->r[30]|c->r[30]; // 804F4110
  c->r[4]=0u+0x00000003u; // 804F4114
  c->lr=0x804F411Cu; f_804F418C(c); // 804F4118
L_804F411C:;
  c->lr=0x804F4120u; f_804FD930(c); // 804F411C
  c->r[3]=c->r[3]+0x00000354u; // 804F4120
  c->lr=0x804F4128u; f_8037CD84(c); // 804F4124
  c->r[31]=0u+0x00000000u; // 804F4128
L_804F412C:;
  cmps(c,0,(int32_t)c->r[31],15); // 804F412C
  if (!crb(c,1)) { goto L_804F413C; } // 804F4130
  c->r[3]=0u+0x00000000u; // 804F4134
  goto L_804F4140; // 804F4138
L_804F413C:;
  c->r[3]=R32(c->r[30]+0x00000120u); // 804F413C
L_804F4140:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F4140
  if (crb(c,2)) { goto L_804F414C; } // 804F4144
  c->lr=0x804F414Cu; f_804F56DC(c); // 804F4148
L_804F414C:;
  c->r[31]=c->r[31]+0x00000001u; // 804F414C
  c->r[30]=c->r[30]+0x00000004u; // 804F4150
  cmps(c,0,(int32_t)c->r[31],16); // 804F4154
  if (crb(c,0)) { IRQCHK(c); goto L_804F412C; } // 804F4158
  c->lr=0x804F4160u; f_804FD930(c); // 804F415C
  c->r[3]=c->r[3]+0x00000354u; // 804F4160
  c->lr=0x804F4168u; f_8037CE60(c); // 804F4164
  c->lr=0x804F416Cu; f_804FD930(c); // 804F4168
  c->r[3]=c->r[3]+0x00000354u; // 804F416C
  c->lr=0x804F4174u; f_8037CE60(c); // 804F4170
L_804F4174:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F4174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F4178
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F417C
  c->lr=c->r[0]; // 804F4180
  c->r[1]=c->r[1]+0x00000010u; // 804F4184
  return; // 804F4188
}

// UpdateTick__Q44nw4r3snd6detail9SeqPlayerFi
void f_804F418C(Ctx* __restrict c) {
  trace_call(0x804F418Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F418C
  c->r[0]=c->lr; // 804F4190
  W32(c->r[1]+0x00000074u,c->r[0]); // 804F4194
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804F4198
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804F419C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804F41A0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804F41A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804F41A8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804F41AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 804F41B0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 804F41B4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 804F41B8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 804F41BC
  {uint32_t ea=c->r[2]+0x00001AB0u; c->f[28]=RF64(ea);} // 804F41C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F41C4
  c->r[31]=c->r[3]|c->r[3]; // 804F41C8
  {uint32_t ea=c->r[2]+0x00001AB8u; c->f[29]=c->ps1[29]=RF32(ea);} // 804F41CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F41D0
  c->r[30]=0u+0x43300000u; // 804F41D4
  {uint32_t ea=c->r[2]+0x00001AACu; c->f[30]=c->ps1[30]=RF32(ea);} // 804F41D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F41DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F41E0
  c->r[5]=R8(c->r[3]+0x0000010Au); // 804F41E4
  c->r[0]=R16(c->r[3]+0x0000010Cu); // 804F41E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F41EC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804F41F0
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F41F4
  c->r[0]=c->r[0]^0x80000000u; // 804F41F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F41FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F4200
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 804F4204
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F4208
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 804F420C
  fcmp(c,0,c->f[30],c->f[1]); // 804F4210
  if (crb(c,2)) { goto L_804F43A8; } // 804F4214
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F4218
  c->r[0]=c->r[4]^0x80000000u; // 804F421C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F4220
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 804F4224
  {uint32_t ea=c->r[2]+0x00001AA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F4228
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F422C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804F4230
  c->f[27]=c->ps1[27]=S(c->f[0]-c->f[28]); // 804F4234
  goto L_804F4394; // 804F4238
L_804F423C:;
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[2]); // 804F423C
  c->r[3]=c->r[31]|c->r[31]; // 804F4240
  c->r[4]=0u+0x00000001u; // 804F4244
  c->lr=0x804F424Cu; f_804F3F0C(c); // 804F4248
  cmps(c,0,(int32_t)c->r[3],0); // 804F424C
  if (crb(c,2)) { goto L_804F4350; } // 804F4250
  c->lr=0x804F4258u; f_804FD930(c); // 804F4254
  c->r[3]=c->r[3]+0x00000354u; // 804F4258
  c->lr=0x804F4260u; f_8037CD84(c); // 804F425C
  c->r[0]=R8(c->r[31]+0x000000EDu); // 804F4260
  cmps(c,0,(int32_t)c->r[0],0); // 804F4264
  if (crb(c,2)) { goto L_804F4290; } // 804F4268
  cmps(c,0,(int32_t)c->r[31],0); // 804F426C
  c->r[29]=c->r[31]|c->r[31]; // 804F4270
  if (crb(c,2)) { goto L_804F427C; } // 804F4274
  c->r[29]=c->r[31]+0x000000E0u; // 804F4278
L_804F427C:;
  c->lr=0x804F4280u; f_804FD930(c); // 804F427C
  c->r[4]=c->r[29]|c->r[29]; // 804F4280
  c->lr=0x804F4288u; f_804FDD64(c); // 804F4284
  c->r[0]=0u+0x00000000u; // 804F4288
  W8(c->r[31]+0x000000EDu,c->r[0]); // 804F428C
L_804F4290:;
  c->r[0]=R8(c->r[31]+0x000000ECu); // 804F4290
  cmps(c,0,(int32_t)c->r[0],0); // 804F4294
  if (crb(c,2)) { goto L_804F42C0; } // 804F4298
  cmps(c,0,(int32_t)c->r[31],0); // 804F429C
  c->r[29]=c->r[31]|c->r[31]; // 804F42A0
  if (crb(c,2)) { goto L_804F42AC; } // 804F42A4
  c->r[29]=c->r[31]+0x000000D4u; // 804F42A8
L_804F42AC:;
  c->lr=0x804F42B0u; f_804ED804(c); // 804F42AC
  c->r[4]=c->r[29]|c->r[29]; // 804F42B0
  c->lr=0x804F42B8u; f_804ED918(c); // 804F42B4
  c->r[0]=0u+0x00000000u; // 804F42B8
  W8(c->r[31]+0x000000ECu,c->r[0]); // 804F42BC
L_804F42C0:;
  c->r[28]=c->r[31]|c->r[31]; // 804F42C0
  c->r[29]=0u+0x00000000u; // 804F42C4
  c->r[30]=0u+0x00000000u; // 804F42C8
L_804F42CC:;
  c->lr=0x804F42D0u; f_804FD930(c); // 804F42CC
  c->r[3]=c->r[3]+0x00000354u; // 804F42D0
  c->lr=0x804F42D8u; f_8037CD84(c); // 804F42D4
  cmps(c,0,(int32_t)c->r[29],15); // 804F42D8
  if (!crb(c,1)) { goto L_804F42E8; } // 804F42DC
  c->r[3]=0u+0x00000000u; // 804F42E0
  goto L_804F42EC; // 804F42E4
L_804F42E8:;
  c->r[3]=R32(c->r[28]+0x00000120u); // 804F42E8
L_804F42EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F42EC
  if (!crb(c,2)) { goto L_804F4304; } // 804F42F0
  c->lr=0x804F42F8u; f_804FD930(c); // 804F42F4
  c->r[3]=c->r[3]+0x00000354u; // 804F42F8
  c->lr=0x804F4300u; f_8037CE60(c); // 804F42FC
  goto L_804F4330; // 804F4300
L_804F4304:;
  c->lr=0x804F4308u; f_804F52A4(c); // 804F4304
  c->r[3]=R32(c->r[31]+0x00000114u); // 804F4308
  c->r[4]=R32(c->r[28]+0x00000120u); // 804F430C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4310
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F4314
  c->ctr=c->r[12]; // 804F4318
  if (true) { c->lr=0x804F4320u; dispatch(c,c->ctr); } // 804F431C
  W32(c->r[28]+0x00000120u,c->r[30]); // 804F4320
  c->lr=0x804F4328u; f_804FD930(c); // 804F4324
  c->r[3]=c->r[3]+0x00000354u; // 804F4328
  c->lr=0x804F4330u; f_8037CE60(c); // 804F432C
L_804F4330:;
  c->r[29]=c->r[29]+0x00000001u; // 804F4330
  c->r[28]=c->r[28]+0x00000004u; // 804F4334
  cmps(c,0,(int32_t)c->r[29],16); // 804F4338
  if (crb(c,0)) { IRQCHK(c); goto L_804F42CC; } // 804F433C
  c->lr=0x804F4344u; f_804FD930(c); // 804F4340
  c->r[3]=c->r[3]+0x00000354u; // 804F4344
  c->lr=0x804F434Cu; f_8037CE60(c); // 804F4348
  goto L_804F43A8; // 804F434C
L_804F4350:;
  c->r[3]=R8(c->r[31]+0x0000010Au); // 804F4350
  c->r[0]=R16(c->r[31]+0x0000010Cu); // 804F4354
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4358
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F435C
  c->r[4]=R32(c->r[31]+0x00000180u); // 804F4360
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F4364
  c->r[3]=c->r[4]+0x00000001u; // 804F4368
  W32(c->r[31]+0x00000180u,c->r[3]); // 804F436C
  c->r[0]=c->r[0]^0x80000000u; // 804F4370
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F4374
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804F4378
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 804F437C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F4380
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 804F4384
  fcmp(c,0,c->f[30],c->f[1]); // 804F4388
  if (crb(c,2)) { goto L_804F43A8; } // 804F438C
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 804F4390
L_804F4394:;
  fcmp(c,0,c->f[2],c->f[27]); // 804F4394
  if (crb(c,0)) { IRQCHK(c); goto L_804F423C; } // 804F4398
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 804F439C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 804F43A0
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 804F43A4
L_804F43A8:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804F43A8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804F43AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804F43B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804F43B4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804F43B8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804F43BC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 804F43C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 804F43C4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 804F43C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 804F43CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F43D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F43D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F43D8
  c->r[0]=R32(c->r[1]+0x00000074u); // 804F43DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F43E0
  c->lr=c->r[0]; // 804F43E4
  c->r[1]=c->r[1]+0x00000070u; // 804F43E8
  return; // 804F43EC
}

// SkipTick__Q44nw4r3snd6detail9SeqPlayerFv
void f_804F43F0(Ctx* __restrict c) {
  trace_call(0x804F43F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F43F0
  c->r[0]=c->lr; // 804F43F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804F43F8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804F43FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804F4400
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804F4404
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804F4408
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 804F440C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 804F4410
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4414
  c->r[31]=c->r[3]|c->r[3]; // 804F4418
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F441C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F4420
  c->r[29]=0u+0x00000000u; // 804F4424
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F4428
  c->r[28]=c->r[31]|c->r[31]; // 804F442C
L_804F4430:;
  cmps(c,0,(int32_t)c->r[29],15); // 804F4430
  if (!crb(c,1)) { goto L_804F4440; } // 804F4434
  c->r[30]=0u+0x00000000u; // 804F4438
  goto L_804F4444; // 804F443C
L_804F4440:;
  c->r[30]=R32(c->r[28]+0x00000120u); // 804F4440
L_804F4444:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F4444
  if (crb(c,2)) { goto L_804F4460; } // 804F4448
  c->r[3]=c->r[30]|c->r[30]; // 804F444C
  c->r[4]=0u+0x0000007Fu; // 804F4450
  c->lr=0x804F4458u; f_804F55B8(c); // 804F4454
  c->r[3]=c->r[30]|c->r[30]; // 804F4458
  c->lr=0x804F4460u; f_804F5C9C(c); // 804F445C
L_804F4460:;
  c->r[29]=c->r[29]+0x00000001u; // 804F4460
  c->r[28]=c->r[28]+0x00000004u; // 804F4464
  cmps(c,0,(int32_t)c->r[29],16); // 804F4468
  if (crb(c,0)) { IRQCHK(c); goto L_804F4430; } // 804F446C
  {uint32_t ea=c->r[2]+0x00001AB0u; c->f[29]=RF64(ea);} // 804F4470
  c->r[28]=0u+0x00000000u; // 804F4474
  {uint32_t ea=c->r[2]+0x00001AB8u; c->f[30]=c->ps1[30]=RF32(ea);} // 804F4478
  c->r[30]=0u+0x43300000u; // 804F447C
  {uint32_t ea=c->r[2]+0x00001AA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F4480
  goto L_804F4604; // 804F4484
L_804F4488:;
  cmps(c,0,(int32_t)c->r[28],768); // 804F4488
  if (!crb(c,0)) { goto L_804F4658; } // 804F448C
  cmps(c,0,(int32_t)c->r[4],0); // 804F4490
  if (crb(c,2)) { goto L_804F44A8; } // 804F4494
  c->r[3]=R32(c->r[31]+0x000000FCu); // 804F4498
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804F449C
  W32(c->r[31]+0x000000FCu,c->r[0]); // 804F44A0
  goto L_804F44E4; // 804F44A4
L_804F44A8:;
  c->r[3]=R8(c->r[31]+0x0000010Au); // 804F44A8
  c->r[0]=R16(c->r[31]+0x0000010Cu); // 804F44AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F44B0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F44B4
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F44B8
  {uint32_t ea=c->r[31]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F44BC
  c->r[0]=c->r[0]^0x80000000u; // 804F44C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F44C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804F44C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 804F44CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804F44D0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 804F44D4
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[1]); // 804F44D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804F44DC
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 804F44E0
L_804F44E4:;
  c->r[3]=c->r[31]|c->r[31]; // 804F44E4
  c->r[4]=0u+0x00000000u; // 804F44E8
  c->lr=0x804F44F0u; f_804F3F0C(c); // 804F44EC
  cmps(c,0,(int32_t)c->r[3],0); // 804F44F0
  if (crb(c,2)) { goto L_804F45F4; } // 804F44F4
  c->lr=0x804F44FCu; f_804FD930(c); // 804F44F8
  c->r[3]=c->r[3]+0x00000354u; // 804F44FC
  c->lr=0x804F4504u; f_8037CD84(c); // 804F4500
  c->r[0]=R8(c->r[31]+0x000000EDu); // 804F4504
  cmps(c,0,(int32_t)c->r[0],0); // 804F4508
  if (crb(c,2)) { goto L_804F4534; } // 804F450C
  cmps(c,0,(int32_t)c->r[31],0); // 804F4510
  c->r[29]=c->r[31]|c->r[31]; // 804F4514
  if (crb(c,2)) { goto L_804F4520; } // 804F4518
  c->r[29]=c->r[31]+0x000000E0u; // 804F451C
L_804F4520:;
  c->lr=0x804F4524u; f_804FD930(c); // 804F4520
  c->r[4]=c->r[29]|c->r[29]; // 804F4524
  c->lr=0x804F452Cu; f_804FDD64(c); // 804F4528
  c->r[0]=0u+0x00000000u; // 804F452C
  W8(c->r[31]+0x000000EDu,c->r[0]); // 804F4530
L_804F4534:;
  c->r[0]=R8(c->r[31]+0x000000ECu); // 804F4534
  cmps(c,0,(int32_t)c->r[0],0); // 804F4538
  if (crb(c,2)) { goto L_804F4564; } // 804F453C
  cmps(c,0,(int32_t)c->r[31],0); // 804F4540
  c->r[29]=c->r[31]|c->r[31]; // 804F4544
  if (crb(c,2)) { goto L_804F4550; } // 804F4548
  c->r[29]=c->r[31]+0x000000D4u; // 804F454C
L_804F4550:;
  c->lr=0x804F4554u; f_804ED804(c); // 804F4550
  c->r[4]=c->r[29]|c->r[29]; // 804F4554
  c->lr=0x804F455Cu; f_804ED918(c); // 804F4558
  c->r[0]=0u+0x00000000u; // 804F455C
  W8(c->r[31]+0x000000ECu,c->r[0]); // 804F4560
L_804F4564:;
  c->r[28]=c->r[31]|c->r[31]; // 804F4564
  c->r[29]=0u+0x00000000u; // 804F4568
  c->r[30]=0u+0x00000000u; // 804F456C
L_804F4570:;
  c->lr=0x804F4574u; f_804FD930(c); // 804F4570
  c->r[3]=c->r[3]+0x00000354u; // 804F4574
  c->lr=0x804F457Cu; f_8037CD84(c); // 804F4578
  cmps(c,0,(int32_t)c->r[29],15); // 804F457C
  if (!crb(c,1)) { goto L_804F458C; } // 804F4580
  c->r[3]=0u+0x00000000u; // 804F4584
  goto L_804F4590; // 804F4588
L_804F458C:;
  c->r[3]=R32(c->r[28]+0x00000120u); // 804F458C
L_804F4590:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F4590
  if (!crb(c,2)) { goto L_804F45A8; } // 804F4594
  c->lr=0x804F459Cu; f_804FD930(c); // 804F4598
  c->r[3]=c->r[3]+0x00000354u; // 804F459C
  c->lr=0x804F45A4u; f_8037CE60(c); // 804F45A0
  goto L_804F45D4; // 804F45A4
L_804F45A8:;
  c->lr=0x804F45ACu; f_804F52A4(c); // 804F45A8
  c->r[3]=R32(c->r[31]+0x00000114u); // 804F45AC
  c->r[4]=R32(c->r[28]+0x00000120u); // 804F45B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F45B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F45B8
  c->ctr=c->r[12]; // 804F45BC
  if (true) { c->lr=0x804F45C4u; dispatch(c,c->ctr); } // 804F45C0
  W32(c->r[28]+0x00000120u,c->r[30]); // 804F45C4
  c->lr=0x804F45CCu; f_804FD930(c); // 804F45C8
  c->r[3]=c->r[3]+0x00000354u; // 804F45CC
  c->lr=0x804F45D4u; f_8037CE60(c); // 804F45D0
L_804F45D4:;
  c->r[29]=c->r[29]+0x00000001u; // 804F45D4
  c->r[28]=c->r[28]+0x00000004u; // 804F45D8
  cmps(c,0,(int32_t)c->r[29],16); // 804F45DC
  if (crb(c,0)) { IRQCHK(c); goto L_804F4570; } // 804F45E0
  c->lr=0x804F45E8u; f_804FD930(c); // 804F45E4
  c->r[3]=c->r[3]+0x00000354u; // 804F45E8
  c->lr=0x804F45F0u; f_8037CE60(c); // 804F45EC
  goto L_804F4658; // 804F45F0
L_804F45F4:;
  c->r[3]=R32(c->r[31]+0x00000180u); // 804F45F4
  c->r[28]=c->r[28]+0x00000001u; // 804F45F8
  c->r[0]=c->r[3]+0x00000001u; // 804F45FC
  W32(c->r[31]+0x00000180u,c->r[0]); // 804F4600
L_804F4604:;
  c->r[4]=R32(c->r[31]+0x000000FCu); // 804F4604
  cmps(c,0,(int32_t)c->r[4],0); // 804F4608
  if (!crb(c,2)) { IRQCHK(c); goto L_804F4488; } // 804F460C
  c->r[3]=R8(c->r[31]+0x0000010Au); // 804F4610
  c->r[0]=R16(c->r[31]+0x0000010Cu); // 804F4614
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4618
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F461C
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F4620
  {uint32_t ea=c->r[31]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F4624
  c->r[0]=c->r[0]^0x80000000u; // 804F4628
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804F462C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804F4630
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 804F4634
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804F4638
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 804F463C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F4640
  fcmp(c,0,c->f[0],c->f[31]); // 804F4644
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804F4648
  if (crb(c,2)) { IRQCHK(c); goto L_804F4488; } // 804F464C
  {uint32_t ea=c->r[2]+0x00001AACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F4650
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 804F4654
L_804F4658:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804F4658
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804F465C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804F4660
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804F4664
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 804F4668
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 804F466C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4670
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F4674
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F4678
  c->r[0]=R32(c->r[1]+0x00000054u); // 804F467C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F4680
  c->lr=c->r[0]; // 804F4684
  c->r[1]=c->r[1]+0x00000050u; // 804F4688
  return; // 804F468C
}

// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
void f_804F4690(Ctx* __restrict c) {
  trace_call(0x804F4690u);
  c->r[7]=c->r[3]|c->r[3]; // 804F4690
  c->r[3]=R32(c->r[3]+0x00000110u); // 804F4694
  c->r[0]=c->r[4]|c->r[4]; // 804F4698
  c->r[6]=c->r[5]|c->r[5]; // 804F469C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F46A0
  c->r[4]=c->r[7]|c->r[7]; // 804F46A4
  c->r[5]=c->r[0]|c->r[0]; // 804F46A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F46AC
  c->ctr=c->r[12]; // 804F46B0
  if (true) { dispatch(c,c->ctr); return; } // 804F46B4
}

// fn_804F46B8
void f_804F46B8(Ctx* __restrict c) {
  trace_call(0x804F46B8u);
  return; // 804F46B8
}

// fn_804F46BC
void f_804F46BC(Ctx* __restrict c) {
  trace_call(0x804F46BCu);
  c->r[3]=c->r[3]+0xFFFFFF2Cu; // 804F46BC
  f_804F33AC(c); return; // 804F46C0
}

// fn_804F46C4
void f_804F46C4(Ctx* __restrict c) {
  trace_call(0x804F46C4u);
  c->r[3]=c->r[3]+0xFFFFFF20u; // 804F46C4
  f_804F33AC(c); return; // 804F46C8
}

// __ct__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail49SoundInstanceManager<Q44nw4r3snd6detail8SeqSound>ii
void f_804F46CC(Ctx* __restrict c) {
  trace_call(0x804F46CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F46CC
  c->r[0]=c->lr; // 804F46D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F46D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F46D8
  c->r[31]=c->r[4]|c->r[4]; // 804F46DC
  c->r[4]=c->r[5]|c->r[5]; // 804F46E0
  c->r[5]=c->r[6]|c->r[6]; // 804F46E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F46E8
  c->r[30]=c->r[3]|c->r[3]; // 804F46EC
  c->lr=0x804F46F4u; f_804EAC48(c); // 804F46F0
  c->r[4]=0u+0x80720000u; // 804F46F4
  c->r[3]=c->r[30]+0x0000010Cu; // 804F46F8
  c->r[4]=c->r[4]+0xFFFFB918u; // 804F46FC
  W32(c->r[30]+0x00000000u,c->r[4]); // 804F4700
  c->lr=0x804F4708u; f_804F3264(c); // 804F4704
  c->r[4]=0u+0x80720000u; // 804F4708
  c->r[0]=0u+0x00000000u; // 804F470C
  c->r[4]=c->r[4]+0xFFFFB950u; // 804F4710
  W8(c->r[30]+0x000002A4u,c->r[0]); // 804F4714
  c->r[3]=c->r[30]|c->r[30]; // 804F4718
  W8(c->r[30]+0x000002A5u,c->r[0]); // 804F471C
  W32(c->r[30]+0x00000290u,c->r[0]); // 804F4720
  W32(c->r[30]+0x00000294u,c->r[31]); // 804F4724
  W32(c->r[30]+0x000002A0u,c->r[0]); // 804F4728
  W32(c->r[30]+0x000002A8u,c->r[0]); // 804F472C
  W32(c->r[30]+0x000004B0u,c->r[0]); // 804F4730
  W32(c->r[30]+0x000004B4u,c->r[0]); // 804F4734
  W8(c->r[30]+0x000004B8u,c->r[0]); // 804F4738
  W32(c->r[30]+0x000004ACu,c->r[4]); // 804F473C
  W32(c->r[30]+0x000004BCu,c->r[0]); // 804F4740
  W32(c->r[30]+0x000004C0u,c->r[0]); // 804F4744
  W32(c->r[30]+0x000004C8u,c->r[0]); // 804F4748
  W32(c->r[30]+0x000004CCu,c->r[0]); // 804F474C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F4750
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F4754
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F4758
  c->lr=c->r[0]; // 804F475C
  c->r[1]=c->r[1]+0x00000010u; // 804F4760
  return; // 804F4764
}

// fn_804F4768
void f_804F4768(Ctx* __restrict c) {
  trace_call(0x804F4768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4768
  c->r[0]=c->lr; // 804F476C
  cmps(c,0,(int32_t)c->r[3],0); // 804F4770
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F4774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F4778
  c->r[31]=c->r[4]|c->r[4]; // 804F477C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4780
  c->r[30]=c->r[3]|c->r[3]; // 804F4784
  if (crb(c,2)) { goto L_804F47A4; } // 804F4788
  c->r[4]=0u+0x00000000u; // 804F478C
  c->lr=0x804F4794u; f_80501EF0(c); // 804F4790
  cmps(c,0,(int32_t)c->r[31],0); // 804F4794
  if (!crb(c,1)) { goto L_804F47A4; } // 804F4798
  c->r[3]=c->r[30]|c->r[30]; // 804F479C
  c->lr=0x804F47A4u; f_803A9400(c); // 804F47A0
L_804F47A4:;
  c->r[3]=c->r[30]|c->r[30]; // 804F47A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F47A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F47AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F47B0
  c->lr=c->r[0]; // 804F47B4
  c->r[1]=c->r[1]+0x00000010u; // 804F47B8
  return; // 804F47BC
}

// fn_804F47C0
void f_804F47C0(Ctx* __restrict c) {
  trace_call(0x804F47C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F47C0
  c->r[0]=c->lr; // 804F47C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F47C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F47CC
  c->r[31]=c->r[3]|c->r[3]; // 804F47D0
  c->lr=0x804F47D8u; f_804EAD24(c); // 804F47D4
  c->r[0]=0u+0x00000000u; // 804F47D8
  W32(c->r[31]+0x000002A0u,c->r[0]); // 804F47DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F47E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F47E4
  c->lr=c->r[0]; // 804F47E8
  c->r[1]=c->r[1]+0x00000010u; // 804F47EC
  return; // 804F47F0
}

// Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback
void f_804F47F4(Ctx* __restrict c) {
  trace_call(0x804F47F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F47F4
  c->r[0]=c->lr; // 804F47F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F47FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4800
  c->r[31]=c->r[6]|c->r[6]; // 804F4804
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F4808
  c->r[30]=c->r[5]|c->r[5]; // 804F480C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F4810
  c->r[29]=c->r[4]|c->r[4]; // 804F4814
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F4818
  c->r[28]=c->r[3]|c->r[3]; // 804F481C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4820
  c->r[12]=R32(c->r[12]+0x00000020u); // 804F4824
  c->ctr=c->r[12]; // 804F4828
  if (true) { c->lr=0x804F4830u; dispatch(c,c->ctr); } // 804F482C
  c->r[3]=c->r[28]|c->r[28]; // 804F4830
  c->lr=0x804F4838u; f_804EC040(c); // 804F4834
  c->r[6]=c->r[3]|c->r[3]; // 804F4838
  c->r[4]=c->r[29]|c->r[29]; // 804F483C
  c->r[5]=c->r[30]|c->r[30]; // 804F4840
  c->r[7]=c->r[31]|c->r[31]; // 804F4844
  c->r[3]=c->r[28]+0x0000010Cu; // 804F4848
  c->lr=0x804F4850u; f_804F3648(c); // 804F484C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F4850
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4854
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F4858
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F485C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F4860
  c->lr=c->r[0]; // 804F4864
  c->r[1]=c->r[1]+0x00000020u; // 804F4868
  return; // 804F486C
}

// Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_804F4870(Ctx* __restrict c) {
  trace_call(0x804F4870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4870
  c->r[0]=c->lr; // 804F4874
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F4878
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F487C
  c->r[31]=c->r[7]|c->r[7]; // 804F4880
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F4884
  c->r[30]=c->r[6]|c->r[6]; // 804F4888
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F488C
  c->r[29]=c->r[3]|c->r[3]; // 804F4890
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4894
  c->lr=0x804F489Cu; f_804F38DC(c); // 804F4898
  cmps(c,0,(int32_t)c->r[31],0); // 804F489C
  if (!crb(c,1)) { goto L_804F48B4; } // 804F48A0
  c->r[4]=c->r[30]|c->r[30]; // 804F48A4
  c->r[5]=c->r[31]|c->r[31]; // 804F48A8
  c->r[3]=c->r[29]+0x0000010Cu; // 804F48AC
  c->lr=0x804F48B4u; f_804F3BA8(c); // 804F48B0
L_804F48B4:;
  c->r[0]=0u+0x00000001u; // 804F48B4
  W8(c->r[29]+0x000002A5u,c->r[0]); // 804F48B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F48BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F48C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F48C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F48C8
  c->lr=c->r[0]; // 804F48CC
  c->r[1]=c->r[1]+0x00000020u; // 804F48D0
  return; // 804F48D4
}

// Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_804F48D8(Ctx* __restrict c) {
  trace_call(0x804F48D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F48D8
  c->r[0]=c->lr; // 804F48DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F48E0
  c->r[0]=0u+0x00000001u; // 804F48E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F48E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F48EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F48F0
  c->r[29]=c->r[3]|c->r[3]; // 804F48F4
  c->r[30]=R32(c->r[3]+0x00000004u); // 804F48F8
  W32(c->r[3]+0x000002A8u,c->r[4]); // 804F48FC
  cmps(c,0,(int32_t)c->r[30],0); // 804F4900
  W32(c->r[3]+0x00000298u,c->r[5]); // 804F4904
  W32(c->r[3]+0x0000029Cu,c->r[6]); // 804F4908
  W32(c->r[3]+0x000002A0u,c->r[7]); // 804F490C
  W8(c->r[3]+0x000002A4u,c->r[0]); // 804F4910
  if (!crb(c,2)) { goto L_804F4920; } // 804F4914
  c->r[0]=0u+0x00000000u; // 804F4918
  goto L_804F4994; // 804F491C
L_804F4920:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 804F4920
  c->r[3]=c->r[4]|c->r[4]; // 804F4924
  c->r[12]=R32(c->r[12]+0x00000040u); // 804F4928
  c->ctr=c->r[12]; // 804F492C
  if (true) { c->lr=0x804F4934u; dispatch(c,c->ctr); } // 804F4930
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F4934
  c->r[31]=c->r[3]|c->r[3]; // 804F4938
  c->r[3]=c->r[30]|c->r[30]; // 804F493C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F4940
  c->r[4]=c->r[31]|c->r[31]; // 804F4944
  c->ctr=c->r[12]; // 804F4948
  if (true) { c->lr=0x804F4950u; dispatch(c,c->ctr); } // 804F494C
  cmps(c,0,(int32_t)c->r[3],0); // 804F4950
  if (!crb(c,2)) { goto L_804F4960; } // 804F4954
  c->r[0]=0u+0x00000000u; // 804F4958
  goto L_804F4994; // 804F495C
L_804F4960:;
  c->r[0]=R32(c->r[29]+0x000002A8u); // 804F4960
  c->r[4]=0u+0x804F0000u; // 804F4964
  c->r[4]=c->r[4]+0x000049CCu; // 804F4968
  W32(c->r[29]+0x000004C0u,c->r[3]); // 804F496C
  W32(c->r[29]+0x000004BCu,c->r[0]); // 804F4970
  W32(c->r[29]+0x000004C4u,c->r[31]); // 804F4974
  W32(c->r[29]+0x000004C8u,c->r[4]); // 804F4978
  W32(c->r[29]+0x000004CCu,c->r[29]); // 804F497C
  c->lr=0x804F4984u; f_80501F30(c); // 804F4980
  c->r[4]=c->r[29]+0x000004ACu; // 804F4984
  c->r[5]=0u+0x00000001u; // 804F4988
  c->lr=0x804F4990u; f_805020A8(c); // 804F498C
  c->r[0]=0u+0x00000001u; // 804F4990
L_804F4994:;
  cmps(c,0,(int32_t)c->r[0],0); // 804F4994
  if (!crb(c,2)) { goto L_804F49B0; } // 804F4998
  c->r[12]=R32(c->r[29]+0x00000000u); // 804F499C
  c->r[3]=c->r[29]|c->r[29]; // 804F49A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F49A4
  c->ctr=c->r[12]; // 804F49A8
  if (true) { c->lr=0x804F49B0u; dispatch(c,c->ctr); } // 804F49AC
L_804F49B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F49B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F49B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F49B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F49BC
  c->lr=c->r[0]; // 804F49C0
  c->r[1]=c->r[1]+0x00000020u; // 804F49C4
  return; // 804F49C8
}

// NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv
void f_804F49CC(Ctx* __restrict c) {
  trace_call(0x804F49CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F49CC
  c->r[0]=c->lr; // 804F49D0
  cmps(c,0,(int32_t)c->r[3],0); // 804F49D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F49D8
  c->r[0]=0u+0x00000000u; // 804F49DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F49E0
  c->r[31]=c->r[5]|c->r[5]; // 804F49E4
  W8(c->r[5]+0x000002A4u,c->r[0]); // 804F49E8
  if (!crb(c,2)) { goto L_804F4A00; } // 804F49EC
  c->r[3]=c->r[31]|c->r[31]; // 804F49F0
  c->r[4]=0u+0x00000000u; // 804F49F4
  c->lr=0x804F49FCu; f_804EAE90(c); // 804F49F8
  goto L_804F4A2C; // 804F49FC
L_804F4A00:;
  c->r[3]=c->r[5]+0x0000010Cu; // 804F4A00
  c->r[5]=R32(c->r[5]+0x00000298u); // 804F4A04
  c->lr=0x804F4A0Cu; f_804F38DC(c); // 804F4A08
  c->r[5]=R32(c->r[31]+0x000002A0u); // 804F4A0C
  cmps(c,0,(int32_t)c->r[5],0); // 804F4A10
  if (!crb(c,1)) { goto L_804F4A24; } // 804F4A14
  c->r[4]=R32(c->r[31]+0x0000029Cu); // 804F4A18
  c->r[3]=c->r[31]+0x0000010Cu; // 804F4A1C
  c->lr=0x804F4A24u; f_804F3BA8(c); // 804F4A20
L_804F4A24:;
  c->r[0]=0u+0x00000001u; // 804F4A24
  W8(c->r[31]+0x000002A5u,c->r[0]); // 804F4A28
L_804F4A2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F4A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F4A30
  c->lr=c->r[0]; // 804F4A34
  c->r[1]=c->r[1]+0x00000010u; // 804F4A38
  return; // 804F4A3C
}

// Shutdown__Q44nw4r3snd6detail8SeqSoundFv
void f_804F4A40(Ctx* __restrict c) {
  trace_call(0x804F4A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4A40
  c->r[0]=c->lr; // 804F4A44
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F4A48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4A4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F4A50
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F4A54
  c->r[29]=c->r[3]|c->r[3]; // 804F4A58
  c->r[0]=R8(c->r[3]+0x000002A4u); // 804F4A5C
  cmps(c,0,(int32_t)c->r[0],0); // 804F4A60
  if (crb(c,2)) { goto L_804F4A74; } // 804F4A64
  c->lr=0x804F4A6Cu; f_80501F30(c); // 804F4A68
  c->r[4]=c->r[29]+0x000004ACu; // 804F4A6C
  c->lr=0x804F4A74u; f_80502408(c); // 804F4A70
L_804F4A74:;
  c->r[3]=R32(c->r[29]+0x000002A8u); // 804F4A74
  cmps(c,0,(int32_t)c->r[3],0); // 804F4A78
  if (crb(c,2)) { goto L_804F4A98; } // 804F4A7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4A80
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F4A84
  c->ctr=c->r[12]; // 804F4A88
  if (true) { c->lr=0x804F4A90u; dispatch(c,c->ctr); } // 804F4A8C
  c->r[0]=0u+0x00000000u; // 804F4A90
  W32(c->r[29]+0x000002A8u,c->r[0]); // 804F4A94
L_804F4A98:;
  c->r[3]=c->r[29]|c->r[29]; // 804F4A98
  c->lr=0x804F4AA0u; f_804EBE84(c); // 804F4A9C
  c->r[30]=R32(c->r[29]+0x00000294u); // 804F4AA0
  c->r[31]=c->r[30]+0x00000010u; // 804F4AA4
  c->r[3]=c->r[31]|c->r[31]; // 804F4AA8
  c->lr=0x804F4AB0u; f_8037CD84(c); // 804F4AAC
  c->r[0]=R32(c->r[30]+0x00000004u); // 804F4AB0
  cmps(c,0,(int32_t)c->r[0],0); // 804F4AB4
  if (!crb(c,2)) { goto L_804F4AC8; } // 804F4AB8
  c->r[3]=c->r[31]|c->r[31]; // 804F4ABC
  c->lr=0x804F4AC4u; f_8037CE60(c); // 804F4AC0
  goto L_804F4B00; // 804F4AC4
L_804F4AC8:;
  c->r[3]=c->r[30]+0x00000004u; // 804F4AC8
  c->r[4]=c->r[29]+0x000000ECu; // 804F4ACC
  c->lr=0x804F4AD4u; f_80507F08(c); // 804F4AD0
  c->r[12]=R32(c->r[29]+0x00000000u); // 804F4AD4
  c->r[3]=c->r[29]|c->r[29]; // 804F4AD8
  c->r[4]=0u+0xFFFFFFFFu; // 804F4ADC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F4AE0
  c->ctr=c->r[12]; // 804F4AE4
  if (true) { c->lr=0x804F4AECu; dispatch(c,c->ctr); } // 804F4AE8
  c->r[3]=c->r[30]|c->r[30]; // 804F4AEC
  c->r[4]=c->r[29]|c->r[29]; // 804F4AF0
  c->lr=0x804F4AF8u; f_804F0D38(c); // 804F4AF4
  c->r[3]=c->r[31]|c->r[31]; // 804F4AF8
  c->lr=0x804F4B00u; f_8037CE60(c); // 804F4AFC
L_804F4B00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F4B00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4B04
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F4B08
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F4B0C
  c->lr=c->r[0]; // 804F4B10
  c->r[1]=c->r[1]+0x00000020u; // 804F4B14
  return; // 804F4B18
}

// __dt__Q44nw4r3snd6detail8SeqSoundFv
void f_804F4B1C(Ctx* __restrict c) {
  trace_call(0x804F4B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4B1C
  c->r[0]=c->lr; // 804F4B20
  cmps(c,0,(int32_t)c->r[3],0); // 804F4B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F4B28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F4B2C
  c->r[31]=c->r[4]|c->r[4]; // 804F4B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4B34
  c->r[30]=c->r[3]|c->r[3]; // 804F4B38
  if (crb(c,2)) { goto L_804F4B6C; } // 804F4B3C
  c->r[3]=addc(c,c->r[3],0x000004ACu,0); cr0(c,c->r[3]); // 804F4B40
  if (crb(c,2)) { goto L_804F4B50; } // 804F4B44
  c->r[4]=0u+0x00000000u; // 804F4B48
  c->lr=0x804F4B50u; f_80501EF0(c); // 804F4B4C
L_804F4B50:;
  c->r[3]=c->r[30]+0x0000010Cu; // 804F4B50
  c->r[4]=0u+0xFFFFFFFFu; // 804F4B54
  c->lr=0x804F4B5Cu; f_804F33AC(c); // 804F4B58
  cmps(c,0,(int32_t)c->r[31],0); // 804F4B5C
  if (!crb(c,1)) { goto L_804F4B6C; } // 804F4B60
  c->r[3]=c->r[30]|c->r[30]; // 804F4B64
  c->lr=0x804F4B6Cu; f_803A9400(c); // 804F4B68
L_804F4B6C:;
  c->r[3]=c->r[30]|c->r[30]; // 804F4B6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F4B70
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F4B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F4B78
  c->lr=c->r[0]; // 804F4B7C
  c->r[1]=c->r[1]+0x00000010u; // 804F4B80
  return; // 804F4B84
}

// fn_804F4B88
void f_804F4B88(Ctx* __restrict c) {
  trace_call(0x804F4B88u);
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4B88
  f_804F3C6C(c); return; // 804F4B8C
}

// fn_804F4B90
void f_804F4B90(Ctx* __restrict c) {
  trace_call(0x804F4B90u);
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4B90
  f_804F3C74(c); return; // 804F4B94
}

// fn_804F4B98
void f_804F4B98(Ctx* __restrict c) {
  trace_call(0x804F4B98u);
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4B98
  f_804F3C7C(c); return; // 804F4B9C
}

// fn_804F4BA0
void f_804F4BA0(Ctx* __restrict c) {
  trace_call(0x804F4BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4BA0
  c->r[0]=c->lr; // 804F4BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F4BA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4BAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F4BB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F4BB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F4BB8
  c->r[28]=c->r[3]|c->r[3]; // 804F4BBC
  c->r[4]=R8(c->r[3]+0x00000094u); // 804F4BC0
  c->r[0]=R32(c->r[3]+0x00000050u); // 804F4BC4
  c->r[4]=c->r[4]+c->r[0]; // 804F4BC8
  cmps(c,0,(int32_t)c->r[4],127); // 804F4BCC
  if (!crb(c,1)) { goto L_804F4BDC; } // 804F4BD0
  c->r[29]=0u+0x0000007Fu; // 804F4BD4
  goto L_804F4BE4; // 804F4BD8
L_804F4BDC:;
  c->r[0]=sraw(c,c->r[4],31); // 804F4BDC
  c->r[29]=c->r[4]&~c->r[0]; // 804F4BE0
L_804F4BE4:;
  c->r[30]=R32(c->r[3]+0x00000294u); // 804F4BE4
  c->r[31]=c->r[30]+0x00000010u; // 804F4BE8
  c->r[3]=c->r[31]|c->r[31]; // 804F4BEC
  c->lr=0x804F4BF4u; f_8037CD84(c); // 804F4BF0
  c->r[28]=c->r[28]+0x000000ECu; // 804F4BF4
  c->r[3]=c->r[30]+0x00000004u; // 804F4BF8
  c->r[4]=c->r[28]|c->r[28]; // 804F4BFC
  c->lr=0x804F4C04u; f_80507F08(c); // 804F4C00
  c->r[3]=R32(c->r[30]+0x00000008u); // 804F4C04
  c->r[0]=c->r[30]+0x00000008u; // 804F4C08
  goto L_804F4C40; // 804F4C0C
L_804F4C10:;
  c->r[5]=R8(c->r[3]+0xFFFFFFA8u); // 804F4C10
  c->r[4]=R32(c->r[3]+0xFFFFFF64u); // 804F4C14
  c->r[5]=c->r[5]+c->r[4]; // 804F4C18
  cmps(c,0,(int32_t)c->r[5],127); // 804F4C1C
  if (!crb(c,1)) { goto L_804F4C2C; } // 804F4C20
  c->r[4]=0u+0x0000007Fu; // 804F4C24
  goto L_804F4C34; // 804F4C28
L_804F4C2C:;
  c->r[4]=sraw(c,c->r[5],31); // 804F4C2C
  c->r[4]=c->r[5]&~c->r[4]; // 804F4C30
L_804F4C34:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 804F4C34
  if (crb(c,0)) { goto L_804F4C48; } // 804F4C38
  c->r[3]=R32(c->r[3]+0x00000000u); // 804F4C3C
L_804F4C40:;
  cmpu(c,0,c->r[3],c->r[0]); // 804F4C40
  if (!crb(c,2)) { IRQCHK(c); goto L_804F4C10; } // 804F4C44
L_804F4C48:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 804F4C48
  c->r[5]=c->r[28]|c->r[28]; // 804F4C4C
  c->r[3]=c->r[30]+0x00000004u; // 804F4C50
  c->r[4]=c->r[1]+0x00000008u; // 804F4C54
  c->lr=0x804F4C5Cu; f_80507EDC(c); // 804F4C58
  c->r[3]=c->r[31]|c->r[31]; // 804F4C5C
  c->lr=0x804F4C64u; f_8037CE60(c); // 804F4C60
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F4C64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4C68
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F4C6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F4C70
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F4C74
  c->lr=c->r[0]; // 804F4C78
  c->r[1]=c->r[1]+0x00000020u; // 804F4C7C
  return; // 804F4C80
}

// fn_804F4C84
void f_804F4C84(Ctx* __restrict c) {
  trace_call(0x804F4C84u);
  c->r[0]=R8(c->r[3]+0x00000081u); // 804F4C84
  cmps(c,0,(int32_t)c->r[0],0); // 804F4C88
  if (!crb(c,2)) { goto L_804F4C98; } // 804F4C8C
  c->r[3]=0u+0x00000000u; // 804F4C90
  return; // 804F4C94
L_804F4C98:;
  c->r[3]=R32(c->r[3]+0x0000028Cu); // 804F4C98
  return; // 804F4C9C
}

// fn_804F4CA0
void f_804F4CA0(Ctx* __restrict c) {
  trace_call(0x804F4CA0u);
  c->r[3]=R32(c->r[3]+0x00000290u); // 804F4CA0
  c->r[0]=0u-c->r[3]; // 804F4CA4
  c->r[0]=c->r[0]|c->r[3]; // 804F4CA8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F4CAC
  return; // 804F4CB0
}

// fn_804F4CB4
void f_804F4CB4(Ctx* __restrict c) {
  trace_call(0x804F4CB4u);
  c->r[3]=R32(c->r[3]+0x00000290u); // 804F4CB4
  f_804F4F24(c); return; // 804F4CB8
}

// Execute__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_804F4CBC(Ctx* __restrict c) {
  trace_call(0x804F4CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4CBC
  c->r[0]=c->lr; // 804F4CC0
  c->r[4]=0u+0x00000000u; // 804F4CC4
  c->r[5]=0u+0x00000000u; // 804F4CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F4CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4CD0
  c->r[31]=c->r[3]|c->r[3]; // 804F4CD4
  c->r[3]=R32(c->r[3]+0x00000010u); // 804F4CD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4CDC
  c->r[12]=R32(c->r[12]+0x00000044u); // 804F4CE0
  c->ctr=c->r[12]; // 804F4CE4
  if (true) { c->lr=0x804F4CECu; dispatch(c,c->ctr); } // 804F4CE8
  c->r[3]=R32(c->r[31]+0x00000010u); // 804F4CEC
  c->r[4]=R32(c->r[31]+0x00000014u); // 804F4CF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4CF4
  c->r[5]=R32(c->r[31]+0x00000018u); // 804F4CF8
  c->r[12]=R32(c->r[12]+0x00000014u); // 804F4CFC
  c->ctr=c->r[12]; // 804F4D00
  if (true) { c->lr=0x804F4D08u; dispatch(c,c->ctr); } // 804F4D04
  c->r[0]=0u+0x00000000u; // 804F4D08
  cmps(c,0,(int32_t)c->r[3],-3); // 804F4D0C
  W32(c->r[31]+0x00000010u,c->r[0]); // 804F4D10
  if (!crb(c,2)) { goto L_804F4D3C; } // 804F4D14
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 804F4D18
  cmps(c,0,(int32_t)c->r[12],0); // 804F4D1C
  if (crb(c,2)) { goto L_804F4DA0; } // 804F4D20
  c->r[5]=R32(c->r[31]+0x00000020u); // 804F4D24
  c->r[3]=0u+0x00000000u; // 804F4D28
  c->r[4]=0u+0x00000000u; // 804F4D2C
  c->ctr=c->r[12]; // 804F4D30
  if (true) { c->lr=0x804F4D38u; dispatch(c,c->ctr); } // 804F4D34
  goto L_804F4DA0; // 804F4D38
L_804F4D3C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804F4D3C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F4D40
  if (crb(c,2)) { goto L_804F4D6C; } // 804F4D44
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 804F4D48
  cmps(c,0,(int32_t)c->r[12],0); // 804F4D4C
  if (crb(c,2)) { goto L_804F4DA0; } // 804F4D50
  c->r[5]=R32(c->r[31]+0x00000020u); // 804F4D54
  c->r[3]=0u+0x00000000u; // 804F4D58
  c->r[4]=0u+0x00000000u; // 804F4D5C
  c->ctr=c->r[12]; // 804F4D60
  if (true) { c->lr=0x804F4D68u; dispatch(c,c->ctr); } // 804F4D64
  goto L_804F4DA0; // 804F4D68
L_804F4D6C:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 804F4D6C
  c->r[3]=c->r[1]+0x00000008u; // 804F4D70
  c->lr=0x804F4D78u; f_804F30E4(c); // 804F4D74
  c->r[3]=c->r[1]+0x00000008u; // 804F4D78
  c->lr=0x804F4D80u; f_804F3150(c); // 804F4D7C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 804F4D80
  cmps(c,0,(int32_t)c->r[12],0); // 804F4D84
  if (crb(c,2)) { goto L_804F4DA0; } // 804F4D88
  c->r[4]=c->r[3]|c->r[3]; // 804F4D8C
  c->r[5]=R32(c->r[31]+0x00000020u); // 804F4D90
  c->r[3]=0u+0x00000001u; // 804F4D94
  c->ctr=c->r[12]; // 804F4D98
  if (true) { c->lr=0x804F4DA0u; dispatch(c,c->ctr); } // 804F4D9C
L_804F4DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F4DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4DA4
  c->lr=c->r[0]; // 804F4DA8
  c->r[1]=c->r[1]+0x00000020u; // 804F4DAC
  return; // 804F4DB0
}

// Cancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_804F4DB4(Ctx* __restrict c) {
  trace_call(0x804F4DB4u);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 804F4DB4
  cmps(c,0,(int32_t)c->r[12],0); // 804F4DB8
  if (crb(c,2)) return; // 804F4DBC
  c->r[5]=R32(c->r[3]+0x00000020u); // 804F4DC0
  c->r[3]=0u+0x00000000u; // 804F4DC4
  c->r[4]=0u+0x00000000u; // 804F4DC8
  c->ctr=c->r[12]; // 804F4DCC
  if (true) { dispatch(c,c->ctr); return; } // 804F4DD0
  return; // 804F4DD4
}

// OnCancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_804F4DD8(Ctx* __restrict c) {
  trace_call(0x804F4DD8u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 804F4DD8
  c->r[0]=0u+0x00000000u; // 804F4DDC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804F4DE0
  cmps(c,0,(int32_t)c->r[4],0); // 804F4DE4
  if (crb(c,2)) return; // 804F4DE8
  c->r[12]=R32(c->r[4]+0x00000000u); // 804F4DEC
  c->r[3]=c->r[4]|c->r[4]; // 804F4DF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 804F4DF4
  c->ctr=c->r[12]; // 804F4DF8
  if (true) { dispatch(c,c->ctr); return; } // 804F4DFC
  return; // 804F4E00
}

// fn_804F4E04
void f_804F4E04(Ctx* __restrict c) {
  trace_call(0x804F4E04u);
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4E04
  return; // 804F4E08
}

// fn_804F4E0C
void f_804F4E0C(Ctx* __restrict c) {
  trace_call(0x804F4E0Cu);
  c->r[3]=c->r[3]+0x0000010Cu; // 804F4E0C
  return; // 804F4E10
}

// fn_804F4E14
void f_804F4E14(Ctx* __restrict c) {
  trace_call(0x804F4E14u);
  c->r[3]=R8(c->r[3]+0x000002A5u); // 804F4E14
  return; // 804F4E18
}

// fn_804F4E1C
void f_804F4E1C(Ctx* __restrict c) {
  trace_call(0x804F4E1Cu);
  c->r[3]=c->r[13]+0xFFFFE520u; // 804F4E1C
  return; // 804F4E20
}

// fn_804F4E24
void f_804F4E24(Ctx* __restrict c) {
  trace_call(0x804F4E24u);
  c->r[0]=c->r[13]+0xFFFFE4F8u; // 804F4E24
  W32(c->r[13]+0xFFFFE520u,c->r[0]); // 804F4E28
  return; // 804F4E2C
}

// fn_804F4E30
void f_804F4E30(Ctx* __restrict c) {
  trace_call(0x804F4E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4E30
  c->r[0]=c->lr; // 804F4E34
  cmps(c,0,(int32_t)c->r[4],0); // 804F4E38
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F4E3C
  c->r[0]=0u+0x00000000u; // 804F4E40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F4E44
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F4E48
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F4E4C
  c->r[29]=c->r[3]|c->r[3]; // 804F4E50
  W32(c->r[3]+0x00000000u,c->r[0]); // 804F4E54
  if (!crb(c,2)) { goto L_804F4E60; } // 804F4E58
  goto L_804F4F08; // 804F4E5C
L_804F4E60:;
  c->r[30]=R32(c->r[4]+0x00000000u); // 804F4E60
  cmps(c,0,(int32_t)c->r[30],0); // 804F4E64
  if (!crb(c,2)) { goto L_804F4E70; } // 804F4E68
  goto L_804F4F08; // 804F4E6C
L_804F4E70:;
  c->r[31]=c->r[13]+0xFFFFE520u; // 804F4E70
  if (crb(c,2)) { goto L_804F4EBC; } // 804F4E74
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F4E78
  c->r[3]=c->r[30]|c->r[30]; // 804F4E7C
  c->r[12]=R32(c->r[12]+0x00000008u); // 804F4E80
  c->ctr=c->r[12]; // 804F4E84
  if (true) { c->lr=0x804F4E8Cu; dispatch(c,c->ctr); } // 804F4E88
  goto L_804F4EA4; // 804F4E8C
L_804F4E90:;
  cmpu(c,0,c->r[3],c->r[31]); // 804F4E90
  if (!crb(c,2)) { goto L_804F4EA0; } // 804F4E94
  c->r[0]=0u+0x00000001u; // 804F4E98
  goto L_804F4EB0; // 804F4E9C
L_804F4EA0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804F4EA0
L_804F4EA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804F4EA4
  if (!crb(c,2)) { IRQCHK(c); goto L_804F4E90; } // 804F4EA8
  c->r[0]=0u+0x00000000u; // 804F4EAC
L_804F4EB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804F4EB0
  if (crb(c,2)) { goto L_804F4EBC; } // 804F4EB4
  goto L_804F4EC0; // 804F4EB8
L_804F4EBC:;
  c->r[30]=0u+0x00000000u; // 804F4EBC
L_804F4EC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F4EC0
  if (crb(c,2)) { goto L_804F4F04; } // 804F4EC4
  W32(c->r[29]+0x00000000u,c->r[30]); // 804F4EC8
  c->r[3]=c->r[30]|c->r[30]; // 804F4ECC
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F4ED0
  c->r[12]=R32(c->r[12]+0x00000018u); // 804F4ED4
  c->ctr=c->r[12]; // 804F4ED8
  if (true) { c->lr=0x804F4EE0u; dispatch(c,c->ctr); } // 804F4EDC
  cmps(c,0,(int32_t)c->r[3],0); // 804F4EE0
  if (crb(c,2)) { goto L_804F4EFC; } // 804F4EE4
  c->r[3]=R32(c->r[29]+0x00000000u); // 804F4EE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F4EEC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804F4EF0
  c->ctr=c->r[12]; // 804F4EF4
  if (true) { c->lr=0x804F4EFCu; dispatch(c,c->ctr); } // 804F4EF8
L_804F4EFC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 804F4EFC
  W32(c->r[3]+0x00000290u,c->r[29]); // 804F4F00
L_804F4F04:;
  c->r[3]=c->r[29]|c->r[29]; // 804F4F04
L_804F4F08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F4F08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F4F0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F4F10
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F4F14
  c->lr=c->r[0]; // 804F4F18
  c->r[1]=c->r[1]+0x00000020u; // 804F4F1C
  return; // 804F4F20
}

// fn_804F4F24
void f_804F4F24(Ctx* __restrict c) {
  trace_call(0x804F4F24u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 804F4F24
  cmps(c,0,(int32_t)c->r[4],0); // 804F4F28
  if (crb(c,2)) { goto L_804F4F44; } // 804F4F2C
  c->r[0]=R32(c->r[4]+0x00000290u); // 804F4F30
  cmpu(c,0,c->r[0],c->r[3]); // 804F4F34
  if (!crb(c,2)) { goto L_804F4F44; } // 804F4F38
  c->r[0]=0u+0x00000000u; // 804F4F3C
  W32(c->r[4]+0x00000290u,c->r[0]); // 804F4F40
L_804F4F44:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804F4F44
  cmps(c,0,(int32_t)c->r[0],0); // 804F4F48
  if (crb(c,2)) return; // 804F4F4C
  c->r[0]=0u+0x00000000u; // 804F4F50
  W32(c->r[3]+0x00000000u,c->r[0]); // 804F4F54
  return; // 804F4F58
}

// SetPlayerTrackNo__Q44nw4r3snd6detail8SeqTrackFi
void f_804F4F5C(Ctx* __restrict c) {
  trace_call(0x804F4F5Cu);
  W8(c->r[3]+0x00000004u,c->r[4]); // 804F4F5C
  return; // 804F4F60
}

// __ct__Q44nw4r3snd6detail8SeqTrackFv
void f_804F4F64(Ctx* __restrict c) {
  trace_call(0x804F4F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4F64
  c->r[0]=c->lr; // 804F4F68
  c->r[4]=0u+0x80720000u; // 804F4F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F4F70
  c->r[4]=c->r[4]+0xFFFFB968u; // 804F4F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F4F78
  c->r[31]=0u+0x00000000u; // 804F4F7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F4F80
  c->r[30]=c->r[3]|c->r[3]; // 804F4F84
  W8(c->r[3]+0x00000005u,c->r[31]); // 804F4F88
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F4F8C
  c->r[3]=c->r[3]+0x00000058u; // 804F4F90
  c->lr=0x804F4F98u; f_804F0D80(c); // 804F4F94
  W8(c->r[30]+0x00000070u,c->r[31]); // 804F4F98
  c->r[3]=c->r[30]|c->r[30]; // 804F4F9C
  W8(c->r[30]+0x00000071u,c->r[31]); // 804F4FA0
  W16(c->r[30]+0x00000072u,c->r[31]); // 804F4FA4
  W16(c->r[30]+0x00000074u,c->r[31]); // 804F4FA8
  W8(c->r[30]+0x00000076u,c->r[31]); // 804F4FAC
  W8(c->r[30]+0x00000077u,c->r[31]); // 804F4FB0
  W16(c->r[30]+0x00000078u,c->r[31]); // 804F4FB4
  W16(c->r[30]+0x0000007Au,c->r[31]); // 804F4FB8
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 804F4FBC
  W8(c->r[30]+0x0000007Du,c->r[31]); // 804F4FC0
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 804F4FC4
  W16(c->r[30]+0x00000080u,c->r[31]); // 804F4FC8
  W32(c->r[30]+0x000000C0u,c->r[31]); // 804F4FCC
  W32(c->r[30]+0x000000C4u,c->r[31]); // 804F4FD0
  c->lr=0x804F4FD8u; f_804F50F8(c); // 804F4FD4
  c->r[3]=c->r[30]|c->r[30]; // 804F4FD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F4FDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F4FE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F4FE4
  c->lr=c->r[0]; // 804F4FE8
  c->r[1]=c->r[1]+0x00000010u; // 804F4FEC
  return; // 804F4FF0
}

// __dt__Q44nw4r3snd6detail8SeqTrackFv
void f_804F4FF4(Ctx* __restrict c) {
  trace_call(0x804F4FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F4FF4
  c->r[0]=c->lr; // 804F4FF8
  cmps(c,0,(int32_t)c->r[3],0); // 804F4FFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F5000
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F5004
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F5008
  c->r[30]=c->r[4]|c->r[4]; // 804F500C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F5010
  c->r[29]=c->r[3]|c->r[3]; // 804F5014
  if (crb(c,2)) { goto L_804F50D8; } // 804F5018
  c->r[4]=0u+0x80720000u; // 804F501C
  c->r[4]=c->r[4]+0xFFFFB968u; // 804F5020
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F5024
  c->lr=0x804F502Cu; f_804FD930(c); // 804F5028
  c->r[3]=c->r[3]+0x00000354u; // 804F502C
  c->lr=0x804F5034u; f_8037CD84(c); // 804F5030
  c->lr=0x804F5038u; f_804FD930(c); // 804F5034
  c->r[3]=c->r[3]+0x00000354u; // 804F5038
  c->lr=0x804F5040u; f_8037CD84(c); // 804F503C
  c->r[3]=c->r[29]|c->r[29]; // 804F5040
  c->lr=0x804F5048u; f_804F56DC(c); // 804F5044
  c->r[31]=R32(c->r[29]+0x000000C4u); // 804F5048
  goto L_804F5068; // 804F504C
L_804F5050:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 804F5050
  cmps(c,0,(int32_t)c->r[0],0); // 804F5054
  if (crb(c,2)) { goto L_804F5064; } // 804F5058
  c->r[3]=c->r[31]|c->r[31]; // 804F505C
  c->lr=0x804F5064u; f_804ED258(c); // 804F5060
L_804F5064:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5064
L_804F5068:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5068
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5050; } // 804F506C
  c->lr=0x804F5074u; f_804FD930(c); // 804F5070
  c->r[3]=c->r[3]+0x00000354u; // 804F5074
  c->lr=0x804F507Cu; f_8037CE60(c); // 804F5078
  c->lr=0x804F5080u; f_804FD930(c); // 804F507C
  c->r[3]=c->r[3]+0x00000354u; // 804F5080
  c->lr=0x804F5088u; f_8037CD84(c); // 804F5084
  c->r[31]=R32(c->r[29]+0x000000C4u); // 804F5088
  goto L_804F509C; // 804F508C
L_804F5090:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5090
  c->lr=0x804F5098u; f_804ED7EC(c); // 804F5094
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5098
L_804F509C:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F509C
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5090; } // 804F50A0
  c->r[31]=0u+0x00000000u; // 804F50A4
  W32(c->r[29]+0x000000C4u,c->r[31]); // 804F50A8
  c->lr=0x804F50B0u; f_804FD930(c); // 804F50AC
  c->r[3]=c->r[3]+0x00000354u; // 804F50B0
  c->lr=0x804F50B8u; f_8037CE60(c); // 804F50B4
  W8(c->r[29]+0x00000005u,c->r[31]); // 804F50B8
  c->lr=0x804F50C0u; f_804FD930(c); // 804F50BC
  c->r[3]=c->r[3]+0x00000354u; // 804F50C0
  c->lr=0x804F50C8u; f_8037CE60(c); // 804F50C4
  cmps(c,0,(int32_t)c->r[30],0); // 804F50C8
  if (!crb(c,1)) { goto L_804F50D8; } // 804F50CC
  c->r[3]=c->r[29]|c->r[29]; // 804F50D0
  c->lr=0x804F50D8u; f_803A9400(c); // 804F50D4
L_804F50D8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F50D8
  c->r[3]=c->r[29]|c->r[29]; // 804F50DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F50E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F50E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F50E8
  c->lr=c->r[0]; // 804F50EC
  c->r[1]=c->r[1]+0x00000020u; // 804F50F0
  return; // 804F50F4
}

// fn_804F50F8
void f_804F50F8(Ctx* __restrict c) {
  trace_call(0x804F50F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F50F8
  c->r[0]=c->lr; // 804F50FC
  {uint32_t ea=c->r[2]+0x00001AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F5100
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F5104
  c->r[0]=0u+0x00000001u; // 804F5108
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F510C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5110
  c->r[31]=0u+0x00000000u; // 804F5114
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F5118
  c->r[30]=c->r[3]|c->r[3]; // 804F511C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 804F5120
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804F5124
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804F5128
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 804F512C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 804F5130
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 804F5134
  W32(c->r[3]+0x00000020u,c->r[31]); // 804F5138
  W8(c->r[3]+0x00000024u,c->r[0]); // 804F513C
  W8(c->r[3]+0x00000025u,c->r[0]); // 804F5140
  W8(c->r[3]+0x00000026u,c->r[31]); // 804F5144
  W8(c->r[3]+0x00000027u,c->r[31]); // 804F5148
  W8(c->r[3]+0x00000040u,c->r[31]); // 804F514C
  W32(c->r[3]+0x00000044u,c->r[31]); // 804F5150
  W8(c->r[3]+0x00000048u,c->r[31]); // 804F5154
  W8(c->r[3]+0x00000049u,c->r[31]); // 804F5158
  W8(c->r[3]+0x0000004Au,c->r[31]); // 804F515C
  W8(c->r[3]+0x0000004Bu,c->r[31]); // 804F5160
  W8(c->r[3]+0x0000004Cu,c->r[31]); // 804F5164
  W32(c->r[3]+0x00000050u,c->r[31]); // 804F5168
  W32(c->r[3]+0x00000054u,c->r[31]); // 804F516C
  c->r[3]=c->r[3]+0x00000058u; // 804F5170
  c->lr=0x804F5178u; f_804F0D80(c); // 804F5174
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5178
  c->r[7]=0u+0x0000007Fu; // 804F517C
  c->r[3]=0u+0x000000FFu; // 804F5180
  c->r[6]=0u+0x00000002u; // 804F5184
  c->r[5]=0u+0x00000040u; // 804F5188
  c->r[4]=0u+0x0000003Cu; // 804F518C
  W8(c->r[30]+0x00000068u,c->r[31]); // 804F5190
  c->r[0]=0u+0xFFFFFFFFu; // 804F5194
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 804F5198
  W8(c->r[30]+0x00000070u,c->r[7]); // 804F519C
  W8(c->r[30]+0x00000071u,c->r[7]); // 804F51A0
  W16(c->r[30]+0x00000072u,c->r[31]); // 804F51A4
  W16(c->r[30]+0x00000074u,c->r[31]); // 804F51A8
  W8(c->r[30]+0x00000076u,c->r[31]); // 804F51AC
  W8(c->r[30]+0x00000077u,c->r[31]); // 804F51B0
  W16(c->r[30]+0x00000078u,c->r[31]); // 804F51B4
  W16(c->r[30]+0x0000007Au,c->r[31]); // 804F51B8
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 804F51BC
  W8(c->r[30]+0x0000007Du,c->r[31]); // 804F51C0
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 804F51C4
  W16(c->r[30]+0x00000080u,c->r[31]); // 804F51C8
  W8(c->r[30]+0x00000082u,c->r[7]); // 804F51CC
  W8(c->r[30]+0x00000083u,c->r[7]); // 804F51D0
  W8(c->r[30]+0x00000084u,c->r[31]); // 804F51D4
  W8(c->r[30]+0x00000085u,c->r[6]); // 804F51D8
  W8(c->r[30]+0x00000086u,c->r[31]); // 804F51DC
  W8(c->r[30]+0x00000087u,c->r[31]); // 804F51E0
  W8(c->r[30]+0x00000088u,c->r[5]); // 804F51E4
  W8(c->r[30]+0x00000089u,c->r[4]); // 804F51E8
  W8(c->r[30]+0x0000008Au,c->r[31]); // 804F51EC
  W8(c->r[30]+0x0000008Bu,c->r[3]); // 804F51F0
  W8(c->r[30]+0x0000008Cu,c->r[3]); // 804F51F4
  W8(c->r[30]+0x0000008Du,c->r[3]); // 804F51F8
  W8(c->r[30]+0x0000008Eu,c->r[3]); // 804F51FC
  W16(c->r[30]+0x00000090u,c->r[3]); // 804F5200
  W8(c->r[30]+0x00000092u,c->r[7]); // 804F5204
  W8(c->r[30]+0x00000093u,c->r[31]); // 804F5208
  W8(c->r[30]+0x00000094u,c->r[31]); // 804F520C
  W8(c->r[30]+0x00000095u,c->r[31]); // 804F5210
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[0]);} // 804F5214
  W8(c->r[30]+0x00000096u,c->r[31]); // 804F5218
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[0]);} // 804F521C
  W16(c->r[30]+0x000000A0u,c->r[0]); // 804F5220
  W16(c->r[30]+0x000000A2u,c->r[0]); // 804F5224
  W16(c->r[30]+0x000000A4u,c->r[0]); // 804F5228
  W16(c->r[30]+0x000000A6u,c->r[0]); // 804F522C
  W16(c->r[30]+0x000000A8u,c->r[0]); // 804F5230
  W16(c->r[30]+0x000000AAu,c->r[0]); // 804F5234
  W16(c->r[30]+0x000000ACu,c->r[0]); // 804F5238
  W16(c->r[30]+0x000000AEu,c->r[0]); // 804F523C
  W16(c->r[30]+0x000000B0u,c->r[0]); // 804F5240
  W16(c->r[30]+0x000000B2u,c->r[0]); // 804F5244
  W16(c->r[30]+0x000000B4u,c->r[0]); // 804F5248
  W16(c->r[30]+0x000000B6u,c->r[0]); // 804F524C
  W16(c->r[30]+0x000000B8u,c->r[0]); // 804F5250
  W16(c->r[30]+0x000000BAu,c->r[0]); // 804F5254
  W16(c->r[30]+0x000000BCu,c->r[0]); // 804F5258
  W16(c->r[30]+0x000000BEu,c->r[0]); // 804F525C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F5260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5264
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5268
  c->lr=c->r[0]; // 804F526C
  c->r[1]=c->r[1]+0x00000010u; // 804F5270
  return; // 804F5274
}

// SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
void f_804F5278(Ctx* __restrict c) {
  trace_call(0x804F5278u);
  c->r[0]=c->r[4]+c->r[5]; // 804F5278
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 804F527C
  W32(c->r[3]+0x00000020u,c->r[0]); // 804F5280
  return; // 804F5284
}

// Open__Q44nw4r3snd6detail8SeqTrackFv
void f_804F5288(Ctx* __restrict c) {
  trace_call(0x804F5288u);
  c->r[4]=0u+0x00000000u; // 804F5288
  c->r[0]=0u+0x00000001u; // 804F528C
  W8(c->r[3]+0x0000004Au,c->r[4]); // 804F5290
  W8(c->r[3]+0x00000040u,c->r[4]); // 804F5294
  W32(c->r[3]+0x00000044u,c->r[4]); // 804F5298
  W8(c->r[3]+0x00000005u,c->r[0]); // 804F529C
  return; // 804F52A0
}

// Close__Q44nw4r3snd6detail8SeqTrackFv
void f_804F52A4(Ctx* __restrict c) {
  trace_call(0x804F52A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F52A4
  c->r[0]=c->lr; // 804F52A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F52AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F52B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F52B4
  c->r[30]=c->r[3]|c->r[3]; // 804F52B8
  c->lr=0x804F52C0u; f_804FD930(c); // 804F52BC
  c->r[3]=c->r[3]+0x00000354u; // 804F52C0
  c->lr=0x804F52C8u; f_8037CD84(c); // 804F52C4
  c->lr=0x804F52CCu; f_804FD930(c); // 804F52C8
  c->r[3]=c->r[3]+0x00000354u; // 804F52CC
  c->lr=0x804F52D4u; f_8037CD84(c); // 804F52D0
  c->r[3]=c->r[30]|c->r[30]; // 804F52D4
  c->lr=0x804F52DCu; f_804F56DC(c); // 804F52D8
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F52DC
  goto L_804F52FC; // 804F52E0
L_804F52E4:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 804F52E4
  cmps(c,0,(int32_t)c->r[0],0); // 804F52E8
  if (crb(c,2)) { goto L_804F52F8; } // 804F52EC
  c->r[3]=c->r[31]|c->r[31]; // 804F52F0
  c->lr=0x804F52F8u; f_804ED258(c); // 804F52F4
L_804F52F8:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F52F8
L_804F52FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F52FC
  if (!crb(c,2)) { IRQCHK(c); goto L_804F52E4; } // 804F5300
  c->lr=0x804F5308u; f_804FD930(c); // 804F5304
  c->r[3]=c->r[3]+0x00000354u; // 804F5308
  c->lr=0x804F5310u; f_8037CE60(c); // 804F530C
  c->lr=0x804F5314u; f_804FD930(c); // 804F5310
  c->r[3]=c->r[3]+0x00000354u; // 804F5314
  c->lr=0x804F531Cu; f_8037CD84(c); // 804F5318
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F531C
  goto L_804F5330; // 804F5320
L_804F5324:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5324
  c->lr=0x804F532Cu; f_804ED7EC(c); // 804F5328
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F532C
L_804F5330:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5330
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5324; } // 804F5334
  c->r[31]=0u+0x00000000u; // 804F5338
  W32(c->r[30]+0x000000C4u,c->r[31]); // 804F533C
  c->lr=0x804F5344u; f_804FD930(c); // 804F5340
  c->r[3]=c->r[3]+0x00000354u; // 804F5344
  c->lr=0x804F534Cu; f_8037CE60(c); // 804F5348
  W8(c->r[30]+0x00000005u,c->r[31]); // 804F534C
  c->lr=0x804F5354u; f_804FD930(c); // 804F5350
  c->r[3]=c->r[3]+0x00000354u; // 804F5354
  c->lr=0x804F535Cu; f_8037CE60(c); // 804F5358
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F535C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5360
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5364
  c->lr=c->r[0]; // 804F5368
  c->r[1]=c->r[1]+0x00000010u; // 804F536C
  return; // 804F5370
}

// UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv
void f_804F5374(Ctx* __restrict c) {
  trace_call(0x804F5374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5374
  c->r[0]=c->lr; // 804F5378
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F537C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5380
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F5384
  c->r[30]=c->r[3]|c->r[3]; // 804F5388
  c->lr=0x804F5390u; f_804FD930(c); // 804F538C
  c->r[3]=c->r[3]+0x00000354u; // 804F5390
  c->lr=0x804F5398u; f_8037CD84(c); // 804F5394
  c->r[0]=R8(c->r[30]+0x00000005u); // 804F5398
  cmps(c,0,(int32_t)c->r[0],0); // 804F539C
  if (!crb(c,2)) { goto L_804F53B4; } // 804F53A0
  c->lr=0x804F53A8u; f_804FD930(c); // 804F53A4
  c->r[3]=c->r[3]+0x00000354u; // 804F53A8
  c->lr=0x804F53B0u; f_8037CE60(c); // 804F53AC
  goto L_804F542C; // 804F53B0
L_804F53B4:;
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F53B4
  goto L_804F5418; // 804F53B8
L_804F53BC:;
  c->r[3]=R32(c->r[31]+0x000000D0u); // 804F53BC
  cmps(c,0,(int32_t)c->r[3],0); // 804F53C0
  if (!crb(c,1)) { goto L_804F53D0; } // 804F53C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804F53C8
  W32(c->r[31]+0x000000D0u,c->r[0]); // 804F53CC
L_804F53D0:;
  c->r[0]=R32(c->r[31]+0x000000D0u); // 804F53D0
  cmps(c,0,(int32_t)c->r[0],0); // 804F53D4
  if (!crb(c,2)) { goto L_804F53FC; } // 804F53D8
  c->r[0]=R32(c->r[31]+0x00000000u); // 804F53DC
  cmps(c,0,(int32_t)c->r[0],4); // 804F53E0
  if (crb(c,2)) { goto L_804F53FC; } // 804F53E4
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 804F53E8
  cmps(c,0,(int32_t)c->r[0],0); // 804F53EC
  if (!crb(c,2)) { goto L_804F53FC; } // 804F53F0
  c->r[3]=c->r[31]|c->r[31]; // 804F53F4
  c->lr=0x804F53FCu; f_804ED2C0(c); // 804F53F8
L_804F53FC:;
  c->r[0]=R8(c->r[31]+0x00000038u); // 804F53FC
  cmps(c,0,(int32_t)c->r[0],0); // 804F5400
  if (!crb(c,2)) { goto L_804F5414; } // 804F5404
  c->r[3]=c->r[31]|c->r[31]; // 804F5408
  c->r[4]=0u+0x00000001u; // 804F540C
  c->lr=0x804F5414u; f_804ED460(c); // 804F5410
L_804F5414:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5414
L_804F5418:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5418
  if (!crb(c,2)) { IRQCHK(c); goto L_804F53BC; } // 804F541C
  c->lr=0x804F5424u; f_804FD930(c); // 804F5420
  c->r[3]=c->r[3]+0x00000354u; // 804F5424
  c->lr=0x804F542Cu; f_8037CE60(c); // 804F5428
L_804F542C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F542C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5430
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5434
  c->lr=c->r[0]; // 804F5438
  c->r[1]=c->r[1]+0x00000010u; // 804F543C
  return; // 804F5440
}

// ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
void f_804F5444(Ctx* __restrict c) {
  trace_call(0x804F5444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5444
  c->r[0]=c->lr; // 804F5448
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F544C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5450
  c->r[31]=c->r[4]|c->r[4]; // 804F5454
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F5458
  c->r[30]=c->r[3]|c->r[3]; // 804F545C
  c->lr=0x804F5464u; f_804FD930(c); // 804F5460
  c->r[3]=c->r[3]+0x00000354u; // 804F5464
  c->lr=0x804F546Cu; f_8037CD84(c); // 804F5468
  c->r[0]=R8(c->r[30]+0x00000005u); // 804F546C
  cmps(c,0,(int32_t)c->r[0],0); // 804F5470
  if (!crb(c,2)) { goto L_804F548C; } // 804F5474
  c->lr=0x804F547Cu; f_804FD930(c); // 804F5478
  c->r[3]=c->r[3]+0x00000354u; // 804F547C
  c->lr=0x804F5484u; f_8037CE60(c); // 804F5480
  c->r[3]=0u+0x00000000u; // 804F5484
  goto L_804F55A0; // 804F5488
L_804F548C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000074u); // 804F548C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000072u); // 804F5490
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F5494
  if (!crb(c,0)) { goto L_804F54A4; } // 804F5498
  c->r[0]=c->r[3]+0x00000001u; // 804F549C
  W16(c->r[30]+0x00000074u,c->r[0]); // 804F54A0
L_804F54A4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Au); // 804F54A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000078u); // 804F54A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F54AC
  if (!crb(c,0)) { goto L_804F54BC; } // 804F54B0
  c->r[0]=c->r[3]+0x00000001u; // 804F54B4
  W16(c->r[30]+0x0000007Au,c->r[0]); // 804F54B8
L_804F54BC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000080u); // 804F54BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Eu); // 804F54C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F54C4
  if (!crb(c,0)) { goto L_804F54D4; } // 804F54C8
  c->r[0]=c->r[3]+0x00000001u; // 804F54CC
  W16(c->r[30]+0x00000080u,c->r[0]); // 804F54D0
L_804F54D4:;
  c->r[0]=R8(c->r[30]+0x0000004Au); // 804F54D4
  cmps(c,0,(int32_t)c->r[0],0); // 804F54D8
  if (crb(c,2)) { goto L_804F5508; } // 804F54DC
  c->r[0]=R32(c->r[30]+0x000000C4u); // 804F54E0
  cmps(c,0,(int32_t)c->r[0],0); // 804F54E4
  if (crb(c,2)) { goto L_804F5500; } // 804F54E8
  c->lr=0x804F54F0u; f_804FD930(c); // 804F54EC
  c->r[3]=c->r[3]+0x00000354u; // 804F54F0
  c->lr=0x804F54F8u; f_8037CE60(c); // 804F54F4
  c->r[3]=0u+0x00000001u; // 804F54F8
  goto L_804F55A0; // 804F54FC
L_804F5500:;
  c->r[0]=0u+0x00000000u; // 804F5500
  W8(c->r[30]+0x0000004Au,c->r[0]); // 804F5504
L_804F5508:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 804F5508
  cmps(c,0,(int32_t)c->r[3],0); // 804F550C
  if (!crb(c,1)) { goto L_804F5534; } // 804F5510
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 804F5514
  W32(c->r[30]+0x00000044u,c->r[0]); // 804F5518
  if (!crb(c,1)) { goto L_804F5534; } // 804F551C
  c->lr=0x804F5524u; f_804FD930(c); // 804F5520
  c->r[3]=c->r[3]+0x00000354u; // 804F5524
  c->lr=0x804F552Cu; f_8037CE60(c); // 804F5528
  c->r[3]=0u+0x00000001u; // 804F552C
  goto L_804F55A0; // 804F5530
L_804F5534:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 804F5534
  cmps(c,0,(int32_t)c->r[0],0); // 804F5538
  if (crb(c,2)) { goto L_804F5590; } // 804F553C
  goto L_804F5578; // 804F5540
L_804F5544:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804F5544
  c->r[3]=c->r[30]|c->r[30]; // 804F5548
  c->r[4]=c->r[31]|c->r[31]; // 804F554C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F5550
  c->ctr=c->r[12]; // 804F5554
  if (true) { c->lr=0x804F555Cu; dispatch(c,c->ctr); } // 804F5558
  cmps(c,0,(int32_t)c->r[3],1); // 804F555C
  if (!crb(c,2)) { goto L_804F5578; } // 804F5560
  c->lr=0x804F5568u; f_804FD930(c); // 804F5564
  c->r[3]=c->r[3]+0x00000354u; // 804F5568
  c->lr=0x804F5570u; f_8037CE60(c); // 804F556C
  c->r[3]=0u+0xFFFFFFFFu; // 804F5570
  goto L_804F55A0; // 804F5574
L_804F5578:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 804F5578
  cmps(c,0,(int32_t)c->r[0],0); // 804F557C
  if (!crb(c,2)) { goto L_804F5590; } // 804F5580
  c->r[0]=R8(c->r[30]+0x0000004Au); // 804F5584
  cmps(c,0,(int32_t)c->r[0],0); // 804F5588
  if (crb(c,2)) { IRQCHK(c); goto L_804F5544; } // 804F558C
L_804F5590:;
  c->lr=0x804F5594u; f_804FD930(c); // 804F5590
  c->r[3]=c->r[3]+0x00000354u; // 804F5594
  c->lr=0x804F559Cu; f_8037CE60(c); // 804F5598
  c->r[3]=0u+0x00000001u; // 804F559C
L_804F55A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F55A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F55A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F55A8
  c->lr=c->r[0]; // 804F55AC
  c->r[1]=c->r[1]+0x00000010u; // 804F55B0
  return; // 804F55B4
}

// ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
void f_804F55B8(Ctx* __restrict c) {
  trace_call(0x804F55B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F55B8
  c->r[0]=c->lr; // 804F55BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F55C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F55C4
  c->r[31]=c->r[3]|c->r[3]; // 804F55C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F55CC
  c->r[30]=c->r[4]|c->r[4]; // 804F55D0
  c->lr=0x804F55D8u; f_804FD930(c); // 804F55D4
  c->r[3]=c->r[3]+0x00000354u; // 804F55D8
  c->lr=0x804F55E0u; f_8037CD84(c); // 804F55DC
  c->r[3]=c->r[31]|c->r[31]; // 804F55E0
  c->lr=0x804F55E8u; f_804F56DC(c); // 804F55E4
  c->r[31]=R32(c->r[31]+0x000000C4u); // 804F55E8
  goto L_804F561C; // 804F55EC
L_804F55F0:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 804F55F0
  cmps(c,0,(int32_t)c->r[0],0); // 804F55F4
  if (crb(c,2)) { goto L_804F5618; } // 804F55F8
  cmps(c,0,(int32_t)c->r[30],0); // 804F55FC
  if (crb(c,0)) { goto L_804F5610; } // 804F5600
  c->r[3]=c->r[31]|c->r[31]; // 804F5604
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 804F5608
  c->lr=0x804F5610u; f_804EE4C0(c); // 804F560C
L_804F5610:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5610
  c->lr=0x804F5618u; f_804ED258(c); // 804F5614
L_804F5618:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5618
L_804F561C:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F561C
  if (!crb(c,2)) { IRQCHK(c); goto L_804F55F0; } // 804F5620
  c->lr=0x804F5628u; f_804FD930(c); // 804F5624
  c->r[3]=c->r[3]+0x00000354u; // 804F5628
  c->lr=0x804F5630u; f_8037CE60(c); // 804F562C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F5630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5634
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5638
  c->lr=c->r[0]; // 804F563C
  c->r[1]=c->r[1]+0x00000010u; // 804F5640
  return; // 804F5644
}

// PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb
void f_804F5648(Ctx* __restrict c) {
  trace_call(0x804F5648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5648
  c->r[0]=c->lr; // 804F564C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F5650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5654
  c->r[31]=c->r[3]|c->r[3]; // 804F5658
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F565C
  c->r[30]=c->r[4]|c->r[4]; // 804F5660
  c->lr=0x804F5668u; f_804FD930(c); // 804F5664
  c->r[3]=c->r[3]+0x00000354u; // 804F5668
  c->lr=0x804F5670u; f_8037CD84(c); // 804F566C
  c->r[31]=R32(c->r[31]+0x000000C4u); // 804F5670
  goto L_804F56B0; // 804F5674
L_804F5678:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 804F5678
  cmps(c,0,(int32_t)c->r[0],0); // 804F567C
  if (crb(c,2)) { goto L_804F56AC; } // 804F5680
  c->r[3]=R8(c->r[31]+0x00000035u); // 804F5684
  c->r[0]=0u-c->r[3]; // 804F5688
  c->r[0]=c->r[0]|c->r[3]; // 804F568C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804F5690
  cmpu(c,0,c->r[30],c->r[0]); // 804F5694
  if (crb(c,2)) { goto L_804F56AC; } // 804F5698
  W8(c->r[31]+0x00000035u,c->r[30]); // 804F569C
  c->r[4]=c->r[30]|c->r[30]; // 804F56A0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 804F56A4
  c->lr=0x804F56ACu; f_80503788(c); // 804F56A8
L_804F56AC:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F56AC
L_804F56B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F56B0
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5678; } // 804F56B4
  c->lr=0x804F56BCu; f_804FD930(c); // 804F56B8
  c->r[3]=c->r[3]+0x00000354u; // 804F56BC
  c->lr=0x804F56C4u; f_8037CE60(c); // 804F56C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F56C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F56C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F56CC
  c->lr=c->r[0]; // 804F56D0
  c->r[1]=c->r[1]+0x00000010u; // 804F56D4
  return; // 804F56D8
}

// fn_804F56DC
void f_804F56DC(Ctx* __restrict c) {
  trace_call(0x804F56DCu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F56DC
  c->r[0]=c->lr; // 804F56E0
  W32(c->r[1]+0x00000124u,c->r[0]); // 804F56E4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 804F56E8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 804F56EC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 804F56F0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 804F56F4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 804F56F8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 804F56FC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[28]);} // 804F5700
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,28,ea,0,0);} // 804F5704
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[27]);} // 804F5708
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,27,ea,0,0);} // 804F570C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[26]);} // 804F5710
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,26,ea,0,0);} // 804F5714
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[25]);} // 804F5718
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,25,ea,0,0);} // 804F571C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[24]);} // 804F5720
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,24,ea,0,0);} // 804F5724
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[23]);} // 804F5728
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,23,ea,0,0);} // 804F572C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[22]);} // 804F5730
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,22,ea,0,0);} // 804F5734
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[21]);} // 804F5738
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,21,ea,0,0);} // 804F573C
  c->r[11]=c->r[1]+0x00000070u; // 804F5740
  c->lr=0x804F5748u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F5744
  c->r[0]=0u+0x43300000u; // 804F5748
  c->r[29]=c->r[3]|c->r[3]; // 804F574C
  W32(c->r[1]+0x00000038u,c->r[0]); // 804F5750
  W32(c->r[1]+0x00000040u,c->r[0]); // 804F5754
  c->lr=0x804F575Cu; f_804FD930(c); // 804F5758
  c->r[3]=c->r[3]+0x00000354u; // 804F575C
  c->lr=0x804F5764u; f_8037CD84(c); // 804F5760
  c->r[0]=R8(c->r[29]+0x00000005u); // 804F5764
  cmps(c,0,(int32_t)c->r[0],0); // 804F5768
  if (!crb(c,2)) { goto L_804F5780; } // 804F576C
  c->lr=0x804F5774u; f_804FD930(c); // 804F5770
  c->r[3]=c->r[3]+0x00000354u; // 804F5774
  c->lr=0x804F577Cu; f_8037CE60(c); // 804F5778
  goto L_804F5C2C; // 804F577C
L_804F5780:;
  c->r[0]=R32(c->r[29]+0x000000C4u); // 804F5780
  cmps(c,0,(int32_t)c->r[0],0); // 804F5784
  if (!crb(c,2)) { goto L_804F579C; } // 804F5788
  c->lr=0x804F5790u; f_804FD930(c); // 804F578C
  c->r[3]=c->r[3]+0x00000354u; // 804F5790
  c->lr=0x804F5798u; f_8037CE60(c); // 804F5794
  goto L_804F5C2C; // 804F5798
L_804F579C:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000072u); // 804F579C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000074u); // 804F57A0
  {uint32_t ea=c->r[2]+0x00001AC0u; c->f[29]=c->ps1[29]=RF32(ea);} // 804F57A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 804F57A8
  if (crb(c,0)) { goto L_804F57B8; } // 804F57AC
  c->r[0]=R8(c->r[29]+0x00000071u); // 804F57B0
  goto L_804F57D4; // 804F57B4
L_804F57B8:;
  c->r[5]=R8(c->r[29]+0x00000070u); // 804F57B8
  c->r[0]=R8(c->r[29]+0x00000071u); // 804F57BC
  c->r[0]=c->r[0]-c->r[5]; // 804F57C0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804F57C4
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 804F57C8
  c->r[0]=c->r[5]+c->r[0]; // 804F57CC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804F57D0
L_804F57D4:;
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F57D4
  c->r[0]=R8(c->r[29]+0x00000082u); // 804F57D8
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F57DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F57E0
  {uint32_t ea=c->r[2]+0x00001AE0u; c->f[8]=RF64(ea);} // 804F57E4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F57E8
  c->r[0]=R8(c->r[3]+0x00000108u); // 804F57EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 804F57F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[8]); // 804F57F4
  {uint32_t ea=c->r[2]+0x00001AC8u; c->f[7]=c->ps1[7]=RF32(ea);} // 804F57F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F57FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[8]); // 804F5800
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[7]); // 804F5804
  c->r[0]=R8(c->r[29]+0x00000084u); // 804F5808
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F580C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F5810
  c->r[0]=R8(c->r[29]+0x00000085u); // 804F5814
  c->r[4]=c->r[4]^0x80000000u; // 804F5818
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[2]); // 804F581C
  {uint32_t ea=c->r[2]+0x00001AC0u; c->f[27]=c->ps1[27]=RF32(ea);} // 804F5820
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 804F5824
  W32(c->r[1]+0x00000044u,c->r[4]); // 804F5828
  c->f[9]=c->ps1[9]=S(c->f[0]/c->f[7]); // 804F582C
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[3]=RF64(ea);} // 804F5830
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 804F5834
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F5838
  {uint32_t ea=c->r[29]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804F583C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F5840
  c->f[10]=c->ps1[10]=S(c->f[6]/c->f[7]); // 804F5844
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804F5848
  {uint32_t ea=c->r[2]+0x00001ACCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F584C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804F5850
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000078u); // 804F5854
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Au); // 804F5858
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 804F585C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5860
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[6]); // 804F5864
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 804F5868
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[5]); // 804F586C
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[26]=c->ps1[26]=RF32(ea);} // 804F5870
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[9]); // 804F5874
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[10]); // 804F5878
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804F587C
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[6]); // 804F5880
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[8]); // 804F5884
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 804F5888
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[5]); // 804F588C
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 804F5890
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[4]); // 804F5894
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[7]); // 804F5898
  if (crb(c,0)) { goto L_804F58AC; } // 804F589C
  c->r[0]=R8(c->r[29]+0x00000077u); // 804F58A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F58A4
  goto L_804F58D0; // 804F58A8
L_804F58AC:;
  c->r[7]=R8(c->r[29]+0x00000076u); // 804F58AC
  c->r[0]=R8(c->r[29]+0x00000077u); // 804F58B0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 804F58B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F58B8
  c->r[0]=c->r[0]-c->r[4]; // 804F58BC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804F58C0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 804F58C4
  c->r[0]=c->r[7]+c->r[0]; // 804F58C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F58CC
L_804F58D0:;
  c->r[0]=c->r[0]^0x80000000u; // 804F58D0
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F58D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F58D8
  {uint32_t ea=c->r[2]+0x00001AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F58DC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 804F58E0
  {uint32_t ea=c->r[2]+0x00001AC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F58E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F58E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F58EC
  fcmp(c,0,c->f[0],c->f[3]); // 804F58F0
  if (!crb(c,1)) { goto L_804F58FC; } // 804F58F4
  goto L_804F5910; // 804F58F8
L_804F58FC:;
  {uint32_t ea=c->r[2]+0x00001AD4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F58FC
  fcmp(c,0,c->f[0],c->f[3]); // 804F5900
  if (!crb(c,0)) { goto L_804F590C; } // 804F5904
  goto L_804F5910; // 804F5908
L_804F590C:;
  c->f[3]=c->f[0]; // 804F590C
L_804F5910:;
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[3]); // 804F5910
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F5914
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F5918
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F591C
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[1]); // 804F5920
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F5924
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Eu); // 804F5928
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000080u); // 804F592C
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[2]); // 804F5930
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F5934
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 804F5938
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 804F593C
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 804F5940
  if (crb(c,0)) { goto L_804F5954; } // 804F5944
  c->r[0]=R8(c->r[29]+0x0000007Du); // 804F5948
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F594C
  goto L_804F5978; // 804F5950
L_804F5954:;
  c->r[7]=R8(c->r[29]+0x0000007Cu); // 804F5954
  c->r[0]=R8(c->r[29]+0x0000007Du); // 804F5958
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 804F595C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F5960
  c->r[0]=c->r[0]-c->r[4]; // 804F5964
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804F5968
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 804F596C
  c->r[0]=c->r[7]+c->r[0]; // 804F5970
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F5974
L_804F5978:;
  c->r[0]=c->r[0]^0x80000000u; // 804F5978
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F597C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F5980
  {uint32_t ea=c->r[2]+0x00001AD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5984
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F5988
  {uint32_t ea=c->r[2]+0x00001AD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F598C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F5990
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F5994
  fcmp(c,0,c->f[0],c->f[3]); // 804F5998
  if (!crb(c,1)) { goto L_804F59A4; } // 804F599C
  goto L_804F59B8; // 804F59A0
L_804F59A4:;
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F59A4
  fcmp(c,0,c->f[0],c->f[3]); // 804F59A8
  if (!crb(c,0)) { goto L_804F59B4; } // 804F59AC
  goto L_804F59B8; // 804F59B0
L_804F59B4:;
  c->f[3]=c->f[0]; // 804F59B4
L_804F59B8:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[3]); // 804F59B8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F59BC
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[24]=c->ps1[24]=RF32(ea);} // 804F59C0
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F59C4
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 804F59C8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F59CC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 804F59D0
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 804F59D4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F59D8
  cmps(c,0,(int32_t)c->r[0],0); // 804F59DC
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 804F59E0
  c->r[31]=R8(c->r[29]+0x00000096u); // 804F59E4
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 804F59E8
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 804F59EC
  if (crb(c,2)) { goto L_804F59FC; } // 804F59F0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[23]=c->ps1[23]=RF32(ea);} // 804F59F4
  c->r[31]=c->r[0]|c->r[0]; // 804F59F8
L_804F59FC:;
  c->r[0]=R8(c->r[29]+0x00000092u); // 804F59FC
  c->r[25]=c->r[1]+0x00000028u; // 804F5A00
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[22]=c->ps1[22]=RF32(ea);} // 804F5A04
  c->r[26]=0u+0x00000000u; // 804F5A08
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F5A0C
  {uint32_t ea=c->r[2]+0x00001AE0u; c->f[30]=RF64(ea);} // 804F5A10
  c->f[21]=c->f[22]; // 804F5A14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 804F5A18
  {uint32_t ea=c->r[2]+0x00001AC8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F5A1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 804F5A20
  {uint32_t ea=c->r[2]+0x00001AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5A24
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F5A28
  c->r[28]=R8(c->r[3]+0x0000001Du); // 804F5A2C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 804F5A30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804F5A34
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[0]); // 804F5A38
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[2]); // 804F5A3C
L_804F5A40:;
  c->r[3]=c->r[29]+c->r[26]; // 804F5A40
  c->f[0]=c->ps1[0]=S(c->f[21]); // 804F5A44
  c->r[0]=R8(c->r[3]+0x00000093u); // 804F5A48
  c->r[4]=c->r[26]|c->r[26]; // 804F5A4C
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[21]);} // 804F5A50
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5A54
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F5A58
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F5A5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 804F5A60
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 804F5A64
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804F5A68
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804F5A6C
  c->lr=0x804F5A74u; f_804EABA4(c); // 804F5A70
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5A74
  c->r[26]=c->r[26]+0x00000001u; // 804F5A78
  cmps(c,0,(int32_t)c->r[26],3); // 804F5A7C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804F5A80
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804F5A84
  c->r[25]=c->r[25]+0x00000004u; // 804F5A88
  if (crb(c,0)) { IRQCHK(c); goto L_804F5A40; } // 804F5A8C
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[30]=c->ps1[30]=RF32(ea);} // 804F5A90
  c->r[25]=c->r[1]+0x00000018u; // 804F5A94
  c->r[26]=c->r[1]+0x00000008u; // 804F5A98
  c->r[27]=0u+0x00000000u; // 804F5A9C
L_804F5AA0:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[30]);} // 804F5AA0
  c->r[4]=c->r[27]|c->r[27]; // 804F5AA4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5AA8
  c->lr=0x804F5AB0u; f_804EABE8(c); // 804F5AAC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5AB0
  c->r[4]=c->r[27]|c->r[27]; // 804F5AB4
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[30]);} // 804F5AB8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804F5ABC
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5AC0
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804F5AC4
  c->lr=0x804F5ACCu; f_804EABF8(c); // 804F5AC8
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5ACC
  c->r[27]=c->r[27]+0x00000001u; // 804F5AD0
  cmps(c,0,(int32_t)c->r[27],4); // 804F5AD4
  c->r[25]=c->r[25]+0x00000004u; // 804F5AD8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804F5ADC
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 804F5AE0
  c->r[26]=c->r[26]+0x00000004u; // 804F5AE4
  if (crb(c,0)) { IRQCHK(c); goto L_804F5AA0; } // 804F5AE8
  c->r[30]=R32(c->r[29]+0x000000C4u); // 804F5AEC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[21]=c->ps1[21]=RF32(ea);} // 804F5AF0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804F5AF4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=c->ps1[30]=RF32(ea);} // 804F5AF8
  goto L_804F5C18; // 804F5AFC
L_804F5B00:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[29]);} // 804F5B00
  c->f[1]=c->f[23]; // 804F5B04
  c->r[3]=c->r[30]|c->r[30]; // 804F5B08
  c->r[4]=c->r[31]|c->r[31]; // 804F5B0C
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[28]);} // 804F5B10
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[27]);} // 804F5B14
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[26]);} // 804F5B18
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[25]);} // 804F5B1C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[24]);} // 804F5B20
  c->lr=0x804F5B28u; f_804ED498(c); // 804F5B24
  W8(c->r[30]+0x0000003Cu,c->r[28]); // 804F5B28
  c->r[27]=c->r[30]|c->r[30]; // 804F5B2C
  c->r[26]=c->r[1]+0x00000018u; // 804F5B30
  c->r[25]=c->r[1]+0x00000008u; // 804F5B34
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5B38
  c->r[24]=0u+0x00000000u; // 804F5B3C
  c->r[0]=R32(c->r[3]+0x00000020u); // 804F5B40
  W32(c->r[30]+0x00000058u,c->r[0]); // 804F5B44
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5B48
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5B4C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 804F5B50
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[22]);} // 804F5B54
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[21]);} // 804F5B58
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[31]);} // 804F5B5C
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[30]);} // 804F5B60
L_804F5B64:;
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5B64
  c->r[4]=c->r[24]|c->r[24]; // 804F5B68
  c->lr=0x804F5B70u; f_804EABD8(c); // 804F5B6C
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5B70
  c->r[24]=c->r[24]+0x00000001u; // 804F5B74
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[1]);} // 804F5B78
  cmps(c,0,(int32_t)c->r[24],4); // 804F5B7C
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F5B80
  c->r[26]=c->r[26]+0x00000004u; // 804F5B84
  {uint32_t ea=c->r[27]+0x00000080u; WF32(ea,c->f[0]);} // 804F5B88
  c->r[25]=c->r[25]+0x00000004u; // 804F5B8C
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[1]);} // 804F5B90
  c->r[27]=c->r[27]+0x00000004u; // 804F5B94
  if (crb(c,0)) { IRQCHK(c); goto L_804F5B64; } // 804F5B98
  c->r[24]=0u+0x00000000u; // 804F5B9C
  c->r[27]=0u+0x00000000u; // 804F5BA0
  goto L_804F5BC4; // 804F5BA4
L_804F5BA8:;
  c->r[5]=c->r[3]+c->r[27]; // 804F5BA8
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804F5BAC
  c->r[4]=c->r[24]|c->r[24]; // 804F5BB0
  c->r[5]=c->r[5]+0x00000070u; // 804F5BB4
  c->lr=0x804F5BBCu; f_80503BEC(c); // 804F5BB8
  c->r[27]=c->r[27]+0x00000018u; // 804F5BBC
  c->r[24]=c->r[24]+0x00000001u; // 804F5BC0
L_804F5BC4:;
  c->r[3]=R32(c->r[29]+0x000000C0u); // 804F5BC4
  c->r[0]=R32(c->r[3]+0x00000104u); // 804F5BC8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 804F5BCC
  if (crb(c,0)) { IRQCHK(c); goto L_804F5BA8; } // 804F5BD0
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5BD4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804F5BD8
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F5BDC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 804F5BE0
  c->r[0]=R32(c->r[29]+0x00000060u); // 804F5BE4
  W32(c->r[30]+0x00000024u,c->r[0]); // 804F5BE8
  c->r[0]=R8(c->r[29]+0x00000064u); // 804F5BEC
  W8(c->r[30]+0x00000028u,c->r[0]); // 804F5BF0
  c->r[0]=R8(c->r[29]+0x00000065u); // 804F5BF4
  W8(c->r[30]+0x00000029u,c->r[0]); // 804F5BF8
  c->r[0]=R8(c->r[29]+0x00000066u); // 804F5BFC
  W8(c->r[30]+0x0000002Au,c->r[0]); // 804F5C00
  c->r[0]=R8(c->r[29]+0x00000067u); // 804F5C04
  W8(c->r[30]+0x0000002Bu,c->r[0]); // 804F5C08
  c->r[0]=R8(c->r[29]+0x00000068u); // 804F5C0C
  W8(c->r[30]+0x00000034u,c->r[0]); // 804F5C10
  c->r[30]=R32(c->r[30]+0x000000F4u); // 804F5C14
L_804F5C18:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F5C18
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5B00; } // 804F5C1C
  c->lr=0x804F5C24u; f_804FD930(c); // 804F5C20
  c->r[3]=c->r[3]+0x00000354u; // 804F5C24
  c->lr=0x804F5C2Cu; f_8037CE60(c); // 804F5C28
L_804F5C2C:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 804F5C2C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 804F5C30
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 804F5C34
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 804F5C38
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,29,ea,0,0);} // 804F5C3C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 804F5C40
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,28,ea,0,0);} // 804F5C44
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[28]=RF64(ea);} // 804F5C48
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,27,ea,0,0);} // 804F5C4C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[27]=RF64(ea);} // 804F5C50
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,26,ea,0,0);} // 804F5C54
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[26]=RF64(ea);} // 804F5C58
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,25,ea,0,0);} // 804F5C5C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[25]=RF64(ea);} // 804F5C60
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,24,ea,0,0);} // 804F5C64
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[24]=RF64(ea);} // 804F5C68
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,23,ea,0,0);} // 804F5C6C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[23]=RF64(ea);} // 804F5C70
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,22,ea,0,0);} // 804F5C74
  {uint32_t ea=c->r[1]+0x00000080u; c->f[22]=RF64(ea);} // 804F5C78
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,21,ea,0,0);} // 804F5C7C
  c->r[11]=c->r[1]+0x00000070u; // 804F5C80
  {uint32_t ea=c->r[1]+0x00000070u; c->f[21]=RF64(ea);} // 804F5C84
  c->lr=0x804F5C8Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F5C88
  c->r[0]=R32(c->r[1]+0x00000124u); // 804F5C8C
  c->lr=c->r[0]; // 804F5C90
  c->r[1]=c->r[1]+0x00000120u; // 804F5C94
  return; // 804F5C98
}

// FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
void f_804F5C9C(Ctx* __restrict c) {
  trace_call(0x804F5C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5C9C
  c->r[0]=c->lr; // 804F5CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F5CA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5CA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F5CAC
  c->r[30]=c->r[3]|c->r[3]; // 804F5CB0
  c->lr=0x804F5CB8u; f_804FD930(c); // 804F5CB4
  c->r[3]=c->r[3]+0x00000354u; // 804F5CB8
  c->lr=0x804F5CC0u; f_8037CD84(c); // 804F5CBC
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F5CC0
  goto L_804F5CD4; // 804F5CC4
L_804F5CC8:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5CC8
  c->lr=0x804F5CD0u; f_804ED7EC(c); // 804F5CCC
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5CD0
L_804F5CD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5CD4
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5CC8; } // 804F5CD8
  c->r[0]=0u+0x00000000u; // 804F5CDC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 804F5CE0
  c->lr=0x804F5CE8u; f_804FD930(c); // 804F5CE4
  c->r[3]=c->r[3]+0x00000354u; // 804F5CE8
  c->lr=0x804F5CF0u; f_8037CE60(c); // 804F5CEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F5CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5CF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5CF8
  c->lr=c->r[0]; // 804F5CFC
  c->r[1]=c->r[1]+0x00000010u; // 804F5D00
  return; // 804F5D04
}

// fn_804F5D08
void f_804F5D08(Ctx* __restrict c) {
  trace_call(0x804F5D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5D08
  c->r[0]=c->lr; // 804F5D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F5D10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F5D14
  c->r[31]=c->r[5]|c->r[5]; // 804F5D18
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F5D1C
  c->r[30]=c->r[4]|c->r[4]; // 804F5D20
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F5D24
  c->r[29]=c->r[3]|c->r[3]; // 804F5D28
  c->lr=0x804F5D30u; f_804FD930(c); // 804F5D2C
  c->r[3]=c->r[3]+0x00000354u; // 804F5D30
  c->lr=0x804F5D38u; f_8037CD84(c); // 804F5D34
  cmps(c,0,(int32_t)c->r[30],1); // 804F5D38
  if (crb(c,2)) { goto L_804F5D60; } // 804F5D3C
  if (!crb(c,0)) { goto L_804F5D50; } // 804F5D40
  cmps(c,0,(int32_t)c->r[30],0); // 804F5D44
  if (!crb(c,0)) { goto L_804F5D58; } // 804F5D48
  goto L_804F5D60; // 804F5D4C
L_804F5D50:;
  cmps(c,0,(int32_t)c->r[30],3); // 804F5D50
  if (!crb(c,0)) { goto L_804F5D60; } // 804F5D54
L_804F5D58:;
  c->r[3]=c->r[29]|c->r[29]; // 804F5D58
  c->lr=0x804F5D60u; f_804ED7EC(c); // 804F5D5C
L_804F5D60:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 804F5D60
  cmps(c,0,(int32_t)c->r[3],0); // 804F5D64
  if (crb(c,2)) { goto L_804F5D80; } // 804F5D68
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F5D6C
  c->r[4]=c->r[29]|c->r[29]; // 804F5D70
  c->r[12]=R32(c->r[12]+0x00000058u); // 804F5D74
  c->ctr=c->r[12]; // 804F5D78
  if (true) { c->lr=0x804F5D80u; dispatch(c,c->ctr); } // 804F5D7C
L_804F5D80:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 804F5D80
  cmpu(c,0,c->r[3],c->r[29]); // 804F5D84
  if (!crb(c,2)) { goto L_804F5DCC; } // 804F5D88
  c->r[0]=R32(c->r[29]+0x000000F4u); // 804F5D8C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 804F5D90
  c->lr=0x804F5D98u; f_804FD930(c); // 804F5D94
  c->r[3]=c->r[3]+0x00000354u; // 804F5D98
  c->lr=0x804F5DA0u; f_8037CE60(c); // 804F5D9C
  goto L_804F5DE4; // 804F5DA0
  goto L_804F5DCC; // 804F5DA4
L_804F5DA8:;
  cmpu(c,0,c->r[0],c->r[29]); // 804F5DA8
  if (!crb(c,2)) { goto L_804F5DC8; } // 804F5DAC
  c->r[0]=R32(c->r[29]+0x000000F4u); // 804F5DB0
  W32(c->r[3]+0x000000F4u,c->r[0]); // 804F5DB4
  c->lr=0x804F5DBCu; f_804FD930(c); // 804F5DB8
  c->r[3]=c->r[3]+0x00000354u; // 804F5DBC
  c->lr=0x804F5DC4u; f_8037CE60(c); // 804F5DC0
  goto L_804F5DE4; // 804F5DC4
L_804F5DC8:;
  c->r[3]=c->r[0]|c->r[0]; // 804F5DC8
L_804F5DCC:;
  c->r[0]=R32(c->r[3]+0x000000F4u); // 804F5DCC
  cmps(c,0,(int32_t)c->r[0],0); // 804F5DD0
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5DA8; } // 804F5DD4
  c->lr=0x804F5DDCu; f_804FD930(c); // 804F5DD8
  c->r[3]=c->r[3]+0x00000354u; // 804F5DDC
  c->lr=0x804F5DE4u; f_8037CE60(c); // 804F5DE0
L_804F5DE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F5DE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F5DE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F5DEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F5DF0
  c->lr=c->r[0]; // 804F5DF4
  c->r[1]=c->r[1]+0x00000020u; // 804F5DF8
  return; // 804F5DFC
}

// fn_804F5E00
void f_804F5E00(Ctx* __restrict c) {
  trace_call(0x804F5E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5E00
  c->r[0]=c->lr; // 804F5E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F5E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F5E0C
  c->r[31]=c->r[4]|c->r[4]; // 804F5E10
  W32(c->r[1]+0x00000008u,c->r[30]); // 804F5E14
  c->r[30]=c->r[3]|c->r[3]; // 804F5E18
  c->lr=0x804F5E20u; f_804FD930(c); // 804F5E1C
  c->r[3]=c->r[3]+0x00000354u; // 804F5E20
  c->lr=0x804F5E28u; f_8037CD84(c); // 804F5E24
  cmps(c,0,(int32_t)c->r[31],2); // 804F5E28
  if (crb(c,2)) { goto L_804F5EAC; } // 804F5E2C
  if (!crb(c,0)) { goto L_804F5E44; } // 804F5E30
  cmps(c,0,(int32_t)c->r[31],0); // 804F5E34
  if (crb(c,2)) { goto L_804F5E50; } // 804F5E38
  if (!crb(c,0)) { goto L_804F5F3C; } // 804F5E3C
  goto L_804F5F44; // 804F5E40
L_804F5E44:;
  cmps(c,0,(int32_t)c->r[31],4); // 804F5E44
  if (!crb(c,0)) { goto L_804F5F44; } // 804F5E48
  goto L_804F5E5C; // 804F5E4C
L_804F5E50:;
  c->r[0]=0u+0x00000000u; // 804F5E50
  W8(c->r[30]+0x00000048u,c->r[0]); // 804F5E54
  goto L_804F5F44; // 804F5E58
L_804F5E5C:;
  c->lr=0x804F5E60u; f_804FD930(c); // 804F5E5C
  c->r[3]=c->r[3]+0x00000354u; // 804F5E60
  c->lr=0x804F5E68u; f_8037CD84(c); // 804F5E64
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F5E68
  goto L_804F5E84; // 804F5E6C
L_804F5E70:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5E70
  c->lr=0x804F5E78u; f_804ED7EC(c); // 804F5E74
  c->r[3]=c->r[31]|c->r[31]; // 804F5E78
  c->lr=0x804F5E80u; f_804ED334(c); // 804F5E7C
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5E80
L_804F5E84:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5E84
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5E70; } // 804F5E88
  c->r[0]=0u+0x00000000u; // 804F5E8C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 804F5E90
  c->lr=0x804F5E98u; f_804FD930(c); // 804F5E94
  c->r[3]=c->r[3]+0x00000354u; // 804F5E98
  c->lr=0x804F5EA0u; f_8037CE60(c); // 804F5E9C
  c->r[0]=0u+0x00000001u; // 804F5EA0
  W8(c->r[30]+0x00000048u,c->r[0]); // 804F5EA4
  goto L_804F5F44; // 804F5EA8
L_804F5EAC:;
  c->lr=0x804F5EB0u; f_804FD930(c); // 804F5EAC
  c->r[3]=c->r[3]+0x00000354u; // 804F5EB0
  c->lr=0x804F5EB8u; f_8037CD84(c); // 804F5EB4
  c->r[3]=c->r[30]|c->r[30]; // 804F5EB8
  c->lr=0x804F5EC0u; f_804F56DC(c); // 804F5EBC
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F5EC0
  goto L_804F5EE0; // 804F5EC4
L_804F5EC8:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 804F5EC8
  cmps(c,0,(int32_t)c->r[0],0); // 804F5ECC
  if (crb(c,2)) { goto L_804F5EDC; } // 804F5ED0
  c->r[3]=c->r[31]|c->r[31]; // 804F5ED4
  c->lr=0x804F5EDCu; f_804ED258(c); // 804F5ED8
L_804F5EDC:;
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5EDC
L_804F5EE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5EE0
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5EC8; } // 804F5EE4
  c->lr=0x804F5EECu; f_804FD930(c); // 804F5EE8
  c->r[3]=c->r[3]+0x00000354u; // 804F5EEC
  c->lr=0x804F5EF4u; f_8037CE60(c); // 804F5EF0
  c->lr=0x804F5EF8u; f_804FD930(c); // 804F5EF4
  c->r[3]=c->r[3]+0x00000354u; // 804F5EF8
  c->lr=0x804F5F00u; f_8037CD84(c); // 804F5EFC
  c->r[31]=R32(c->r[30]+0x000000C4u); // 804F5F00
  goto L_804F5F14; // 804F5F04
L_804F5F08:;
  c->r[3]=c->r[31]|c->r[31]; // 804F5F08
  c->lr=0x804F5F10u; f_804ED7EC(c); // 804F5F0C
  c->r[31]=R32(c->r[31]+0x000000F4u); // 804F5F10
L_804F5F14:;
  cmps(c,0,(int32_t)c->r[31],0); // 804F5F14
  if (!crb(c,2)) { IRQCHK(c); goto L_804F5F08; } // 804F5F18
  c->r[0]=0u+0x00000000u; // 804F5F1C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 804F5F20
  c->lr=0x804F5F28u; f_804FD930(c); // 804F5F24
  c->r[3]=c->r[3]+0x00000354u; // 804F5F28
  c->lr=0x804F5F30u; f_8037CE60(c); // 804F5F2C
  c->r[0]=0u+0x00000001u; // 804F5F30
  W8(c->r[30]+0x00000048u,c->r[0]); // 804F5F34
  goto L_804F5F44; // 804F5F38
L_804F5F3C:;
  c->r[0]=0u+0x00000001u; // 804F5F3C
  W8(c->r[30]+0x00000048u,c->r[0]); // 804F5F40
L_804F5F44:;
  c->lr=0x804F5F48u; f_804FD930(c); // 804F5F44
  c->r[3]=c->r[3]+0x00000354u; // 804F5F48
  c->lr=0x804F5F50u; f_8037CE60(c); // 804F5F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F5F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F5F54
  c->r[30]=R32(c->r[1]+0x00000008u); // 804F5F58
  c->lr=c->r[0]; // 804F5F5C
  c->r[1]=c->r[1]+0x00000010u; // 804F5F60
  return; // 804F5F64
}

// fn_804F5F68
void f_804F5F68(Ctx* __restrict c) {
  trace_call(0x804F5F68u);
  cmps(c,0,(int32_t)c->r[4],16); // 804F5F68
  if (!crb(c,0)) { goto L_804F5F80; } // 804F5F6C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804F5F70
  c->r[3]=c->r[3]+c->r[0]; // 804F5F74
  c->r[3]=c->r[3]+0x000000A0u; // 804F5F78
  return; // 804F5F7C
L_804F5F80:;
  c->r[3]=0u+0x00000000u; // 804F5F80
  return; // 804F5F84
}

// fn_804F5F88
void f_804F5F88(Ctx* __restrict c) {
  trace_call(0x804F5F88u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F5F88
  c->r[0]=c->lr; // 804F5F8C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804F5F90
  c->r[11]=c->r[1]+0x00000070u; // 804F5F94
  c->lr=0x804F5F9Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F5F98
  c->r[0]=0u+0x43300000u; // 804F5F9C
  c->r[25]=c->r[3]|c->r[3]; // 804F5FA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 804F5FA4
  c->r[26]=c->r[4]|c->r[4]; // 804F5FA8
  c->r[27]=c->r[5]|c->r[5]; // 804F5FAC
  c->r[28]=c->r[6]|c->r[6]; // 804F5FB0
  W32(c->r[1]+0x00000038u,c->r[0]); // 804F5FB4
  c->r[29]=c->r[7]|c->r[7]; // 804F5FB8
  c->lr=0x804F5FC0u; f_804FD930(c); // 804F5FBC
  c->r[3]=c->r[3]+0x00000354u; // 804F5FC0
  c->lr=0x804F5FC8u; f_8037CD84(c); // 804F5FC4
  c->r[0]=R8(c->r[25]+0x00000083u); // 804F5FC8
  c->r[3]=0u+0x81020000u; // 804F5FCC
  c->r[3]=c->r[3]+0x00000409u; // 804F5FD0
  cmps(c,0,(int32_t)c->r[29],0); // 804F5FD4
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[0]); // 804F5FD8
  c->r[31]=R32(c->r[25]+0x000000C0u); // 804F5FDC
  c->r[30]=0u+0x00000000u; // 804F5FE0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804F5FE4
  c->r[0]=c->r[3]+c->r[0]; // 804F5FE8
  c->r[0]=sraw(c,c->r[0],6); // 804F5FEC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F5FF0
  c->r[27]=c->r[0]+c->r[3]; // 804F5FF4
  if (crb(c,2)) { goto L_804F6034; } // 804F5FF8
  c->r[30]=R32(c->r[25]+0x000000C4u); // 804F5FFC
  cmps(c,0,(int32_t)c->r[30],0); // 804F6000
  if (crb(c,2)) { goto L_804F6034; } // 804F6004
  c->r[0]=c->r[27]^0x80000000u; // 804F6008
  c->r[3]=rotl(c->r[26],0)&0x000000FFu; // 804F600C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F6010
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F6014
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 804F6018
  {uint32_t ea=c->r[2]+0x00001AC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F601C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F6020
  W32(c->r[30]+0x000000C8u,c->r[3]); // 804F6024
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F6028
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804F602C
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[0]);} // 804F6030
L_804F6034:;
  c->r[0]=R8(c->r[25]+0x00000027u); // 804F6034
  cmps(c,0,(int32_t)c->r[0],0); // 804F6038
  if (crb(c,2)) { goto L_804F6098; } // 804F603C
  c->r[30]=R32(c->r[25]+0x000000C4u); // 804F6040
  cmps(c,0,(int32_t)c->r[30],0); // 804F6044
  if (crb(c,2)) { goto L_804F6098; } // 804F6048
  c->r[0]=R32(c->r[30]+0x00000000u); // 804F604C
  cmps(c,0,(int32_t)c->r[0],4); // 804F6050
  if (!crb(c,2)) { goto L_804F6068; } // 804F6054
  c->r[3]=c->r[30]|c->r[30]; // 804F6058
  c->lr=0x804F6060u; f_804ED334(c); // 804F605C
  c->r[30]=0u+0x00000000u; // 804F6060
  goto L_804F6098; // 804F6064
L_804F6068:;
  c->r[0]=c->r[27]^0x80000000u; // 804F6068
  c->r[3]=rotl(c->r[26],0)&0x000000FFu; // 804F606C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F6070
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F6074
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 804F6078
  {uint32_t ea=c->r[2]+0x00001AC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F607C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F6080
  W32(c->r[30]+0x000000C8u,c->r[3]); // 804F6084
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F6088
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804F608C
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[0]);} // 804F6090
  W32(c->r[30]+0x000000D0u,c->r[28]); // 804F6094
L_804F6098:;
  cmps(c,0,(int32_t)c->r[30],0); // 804F6098
  if (!crb(c,2)) { goto L_804F61C8; } // 804F609C
  c->r[3]=0u+0x806B0000u; // 804F60A0
  {uint32_t ea=c->r[3]+0xFFFFD670u; c->r[11]=R32(ea); c->r[3]=ea;} // 804F60A4
  cmps(c,0,(int32_t)c->r[29],0); // 804F60A8
  c->r[0]=0u+0xFFFFFFFFu; // 804F60AC
  c->r[10]=R32(c->r[3]+0x00000004u); // 804F60B0
  c->r[9]=R32(c->r[3]+0x00000008u); // 804F60B4
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 804F60B8
  c->r[7]=R32(c->r[3]+0x00000010u); // 804F60BC
  c->r[6]=R32(c->r[3]+0x00000014u); // 804F60C0
  c->r[5]=R32(c->r[3]+0x00000018u); // 804F60C4
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804F60C8
  c->r[3]=R32(c->r[3]+0x00000020u); // 804F60CC
  W32(c->r[1]+0x00000008u,c->r[11]); // 804F60D0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 804F60D4
  W32(c->r[1]+0x00000010u,c->r[9]); // 804F60D8
  W32(c->r[1]+0x00000014u,c->r[8]); // 804F60DC
  W32(c->r[1]+0x00000018u,c->r[7]); // 804F60E0
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 804F60E4
  W32(c->r[1]+0x00000020u,c->r[5]); // 804F60E8
  W32(c->r[1]+0x00000024u,c->r[4]); // 804F60EC
  W32(c->r[1]+0x00000028u,c->r[3]); // 804F60F0
  c->r[3]=R32(c->r[25]+0x00000054u); // 804F60F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 804F60F8
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 804F60FC
  W32(c->r[1]+0x00000010u,c->r[27]); // 804F6100
  if (!crb(c,2)) { goto L_804F610C; } // 804F6104
  c->r[0]=c->r[28]|c->r[28]; // 804F6108
L_804F610C:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F610C
  c->r[5]=c->r[1]+0x00000008u; // 804F6110
  c->r[0]=R8(c->r[25]+0x00000086u); // 804F6114
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804F6118
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F611C
  c->r[3]=R8(c->r[31]+0x00000109u); // 804F6120
  c->r[0]=R8(c->r[25]+0x00000088u); // 804F6124
  c->r[0]=c->r[3]+c->r[0]; // 804F6128
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F612C
  c->r[3]=R32(c->r[25]+0x000000C0u); // 804F6130
  c->r[0]=R32(c->r[3]+0x00000104u); // 804F6134
  W32(c->r[1]+0x00000020u,c->r[0]); // 804F6138
  W32(c->r[1]+0x00000028u,c->r[25]); // 804F613C
  c->r[3]=R32(c->r[25]+0x000000C0u); // 804F6140
  c->r[4]=R32(c->r[25]+0x00000050u); // 804F6144
  c->lr=0x804F614Cu; f_804F4690(c); // 804F6148
  cmps(c,0,(int32_t)c->r[3],0); // 804F614C
  c->r[30]=c->r[3]|c->r[3]; // 804F6150
  if (!crb(c,2)) { goto L_804F616C; } // 804F6154
  c->lr=0x804F615Cu; f_804FD930(c); // 804F6158
  c->r[3]=c->r[3]+0x00000354u; // 804F615C
  c->lr=0x804F6164u; f_8037CE60(c); // 804F6160
  c->r[3]=0u+0x00000000u; // 804F6164
  goto L_804F637C; // 804F6168
L_804F616C:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804F616C
  cmps(c,0,(int32_t)c->r[0],0); // 804F6170
  if (!crb(c,1)) { goto L_804F61A4; } // 804F6174
  c->r[27]=R32(c->r[25]+0x000000C4u); // 804F6178
  goto L_804F619C; // 804F617C
L_804F6180:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 804F6180
  c->r[0]=R32(c->r[30]+0x000000DCu); // 804F6184
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F6188
  if (!crb(c,2)) { goto L_804F6198; } // 804F618C
  c->r[3]=c->r[27]|c->r[27]; // 804F6190
  c->lr=0x804F6198u; f_804ED258(c); // 804F6194
L_804F6198:;
  c->r[27]=R32(c->r[27]+0x000000F4u); // 804F6198
L_804F619C:;
  cmps(c,0,(int32_t)c->r[27],0); // 804F619C
  if (!crb(c,2)) { IRQCHK(c); goto L_804F6180; } // 804F61A0
L_804F61A4:;
  c->lr=0x804F61A8u; f_804FD930(c); // 804F61A4
  c->r[3]=c->r[3]+0x00000354u; // 804F61A8
  c->lr=0x804F61B0u; f_8037CD84(c); // 804F61AC
  c->r[0]=R32(c->r[25]+0x000000C4u); // 804F61B0
  W32(c->r[30]+0x000000F4u,c->r[0]); // 804F61B4
  W32(c->r[25]+0x000000C4u,c->r[30]); // 804F61B8
  c->lr=0x804F61C0u; f_804FD930(c); // 804F61BC
  c->r[3]=c->r[3]+0x00000354u; // 804F61C0
  c->lr=0x804F61C8u; f_8037CE60(c); // 804F61C4
L_804F61C8:;
  c->r[4]=R8(c->r[25]+0x0000008Bu); // 804F61C8
  cmpu(c,0,c->r[4],0x0000007Fu); // 804F61CC
  if (crb(c,1)) { goto L_804F61DC; } // 804F61D0
  c->r[3]=c->r[30]|c->r[30]; // 804F61D4
  c->lr=0x804F61DCu; f_804EE3E8(c); // 804F61D8
L_804F61DC:;
  c->r[4]=R8(c->r[25]+0x0000008Cu); // 804F61DC
  cmpu(c,0,c->r[4],0x0000007Fu); // 804F61E0
  if (crb(c,1)) { goto L_804F61F0; } // 804F61E4
  c->r[3]=c->r[30]|c->r[30]; // 804F61E8
  c->lr=0x804F61F0u; f_804EE418(c); // 804F61EC
L_804F61F0:;
  c->r[4]=R8(c->r[25]+0x0000008Du); // 804F61F0
  cmpu(c,0,c->r[4],0x0000007Fu); // 804F61F4
  if (crb(c,1)) { goto L_804F6204; } // 804F61F8
  c->r[3]=c->r[30]|c->r[30]; // 804F61FC
  c->lr=0x804F6204u; f_804EE4B8(c); // 804F6200
L_804F6204:;
  c->r[4]=R8(c->r[25]+0x0000008Eu); // 804F6204
  cmpu(c,0,c->r[4],0x0000007Fu); // 804F6208
  if (crb(c,1)) { goto L_804F6218; } // 804F620C
  c->r[3]=c->r[30]|c->r[30]; // 804F6210
  c->lr=0x804F6218u; f_804EE4C0(c); // 804F6214
L_804F6218:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[25]+0x00000090u); // 804F6218
  cmps(c,0,(int32_t)c->r[4],127); // 804F621C
  if (crb(c,1)) { goto L_804F622C; } // 804F6220
  c->r[3]=c->r[30]|c->r[30]; // 804F6224
  c->lr=0x804F622Cu; f_804EE400(c); // 804F6228
L_804F622C:;
  c->r[0]=R8(c->r[25]+0x0000004Bu); // 804F622C
  {uint32_t ea=c->r[25]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6230
  cmps(c,0,(int32_t)c->r[0],0); // 804F6234
  if (crb(c,2)) { goto L_804F625C; } // 804F6238
  c->r[0]=R8(c->r[25]+0x00000089u); // 804F623C
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F6240
  c->r[0]=c->r[0]-c->r[26]; // 804F6244
  c->r[0]=c->r[0]^0x80000000u; // 804F6248
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F624C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804F6250
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804F6254
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804F6258
L_804F625C:;
  c->r[0]=R8(c->r[25]+0x0000008Au); // 804F625C
  cmps(c,0,(int32_t)c->r[0],0); // 804F6260
  if (!crb(c,2)) { goto L_804F627C; } // 804F6264
  c->r[3]=c->r[30]|c->r[30]; // 804F6268
  c->r[4]=c->r[28]|c->r[28]; // 804F626C
  c->r[5]=0u+0x00000000u; // 804F6270
  c->lr=0x804F6278u; f_804ED480(c); // 804F6274
  goto L_804F62D8; // 804F6278
L_804F627C:;
  {uint32_t ea=c->r[2]+0x00001AC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F627C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 804F6280
  fcmp(c,0,c->f[1],c->f[0]); // 804F6284
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804F6288
  if (!crb(c,2)) { goto L_804F6298; } // 804F628C
  c->f[3]=c->f[1]; // 804F6290
  goto L_804F629C; // 804F6294
L_804F6298:;
  c->f[3]=-c->f[1]; // 804F6298
L_804F629C:;
  c->r[0]=c->r[0]^0x80000000u; // 804F629C
  {uint32_t ea=c->r[2]+0x00001AE8u; c->f[2]=RF64(ea);} // 804F62A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804F62A4
  c->r[3]=c->r[30]|c->r[30]; // 804F62A8
  c->r[5]=0u+0x00000001u; // 804F62AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804F62B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804F62B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 804F62B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804F62BC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 804F62C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F62C4
  c->r[4]=sraw(c,c->r[0],5); // 804F62C8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804F62CC
  c->r[4]=c->r[0]+c->r[4]; // 804F62D0
  c->lr=0x804F62D8u; f_804ED480(c); // 804F62D4
L_804F62D8:;
  W8(c->r[25]+0x00000089u,c->r[26]); // 804F62D8
  c->r[3]=R8(c->r[25]+0x00000049u); // 804F62DC
  c->r[5]=R16(c->r[30]+0x000000C2u); // 804F62E0
  c->r[4]=R16(c->r[30]+0x000000C4u); // 804F62E4
  c->r[0]=0u-c->r[3]; // 804F62E8
  c->r[0]=c->r[0]|c->r[3]; // 804F62EC
  cmpu(c,0,c->r[4],c->r[5]); // 804F62F0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F62F4
  if (crb(c,0)) { goto L_804F6304; } // 804F62F8
  c->r[4]=R8(c->r[30]+0x000000C1u); // 804F62FC
  goto L_804F6320; // 804F6300
L_804F6304:;
  c->r[6]=R8(c->r[30]+0x000000C0u); // 804F6304
  c->r[0]=R8(c->r[30]+0x000000C1u); // 804F6308
  c->r[0]=c->r[0]-c->r[6]; // 804F630C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804F6310
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 804F6314
  c->r[0]=c->r[6]+c->r[0]; // 804F6318
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 804F631C
L_804F6320:;
  c->r[0]=0u-c->r[3]; // 804F6320
  W8(c->r[30]+0x000000C0u,c->r[4]); // 804F6324
  c->r[0]=c->r[0]|c->r[3]; // 804F6328
  c->r[3]=0u+0x000000FFu; // 804F632C
  c->r[4]=sraw(c,c->r[0],31); // 804F6330
  c->r[3]=c->r[3]&~c->r[4]; // 804F6334
  c->r[0]=0u+0x00000000u; // 804F6338
  W8(c->r[30]+0x000000C1u,c->r[3]); // 804F633C
  W16(c->r[30]+0x000000C2u,c->r[0]); // 804F6340
  W16(c->r[30]+0x000000C4u,c->r[0]); // 804F6344
  c->r[3]=R32(c->r[25]+0x000000C0u); // 804F6348
  c->r[0]=R8(c->r[3]+0x000000EFu); // 804F634C
  W8(c->r[30]+0x00000039u,c->r[0]); // 804F6350
  c->r[3]=R32(c->r[25]+0x000000C0u); // 804F6354
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 804F6358
  W32(c->r[30]+0x000000D4u,c->r[0]); // 804F635C
  c->r[3]=R32(c->r[25]+0x000000C0u); // 804F6360
  c->r[0]=R32(c->r[3]+0x00000030u); // 804F6364
  W32(c->r[30]+0x000000D8u,c->r[0]); // 804F6368
  c->lr=0x804F6370u; f_804FD930(c); // 804F636C
  c->r[3]=c->r[3]+0x00000354u; // 804F6370
  c->lr=0x804F6378u; f_8037CE60(c); // 804F6374
  c->r[3]=c->r[30]|c->r[30]; // 804F6378
L_804F637C:;
  c->r[11]=c->r[1]+0x00000070u; // 804F637C
  c->lr=0x804F6384u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F6380
  c->r[0]=R32(c->r[1]+0x00000074u); // 804F6384
  c->lr=c->r[0]; // 804F6388
  c->r[1]=c->r[1]+0x00000070u; // 804F638C
  return; // 804F6390
}

// __ct__Q34nw4r3snd12Sound3DActorFRQ34nw4r3snd18SoundArchivePlayerRQ34nw4r3snd14Sound3DManager
void f_804F6394(Ctx* __restrict c) {
  trace_call(0x804F6394u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6394
  c->r[0]=c->lr; // 804F6398
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F639C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F63A0
  c->r[31]=c->r[5]|c->r[5]; // 804F63A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F63A8
  c->r[30]=c->r[4]|c->r[4]; // 804F63AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F63B0
  c->r[29]=c->r[3]|c->r[3]; // 804F63B4
  c->lr=0x804F63BCu; f_804F7C20(c); // 804F63B8
  c->r[3]=0u+0x80720000u; // 804F63BC
  {uint32_t ea=c->r[2]+0x00001AF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F63C0
  c->r[3]=c->r[3]+0xFFFFB978u; // 804F63C4
  c->r[4]=0u+0x00000000u; // 804F63C8
  c->r[5]=c->r[3]+0x0000001Cu; // 804F63CC
  c->r[0]=0u+0x00000001u; // 804F63D0
  W32(c->r[29]+0x00000000u,c->r[3]); // 804F63D4
  c->r[3]=c->r[29]|c->r[29]; // 804F63D8
  W32(c->r[29]+0x00000054u,c->r[5]); // 804F63DC
  W32(c->r[29]+0x00000058u,c->r[31]); // 804F63E0
  W32(c->r[29]+0x0000005Cu,c->r[30]); // 804F63E4
  W32(c->r[29]+0x00000060u,c->r[4]); // 804F63E8
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 804F63EC
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 804F63F0
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 804F63F4
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[0]);} // 804F63F8
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[0]);} // 804F63FC
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 804F6400
  W8(c->r[29]+0x0000007Cu,c->r[0]); // 804F6404
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F6408
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F640C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F6410
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F6414
  c->lr=c->r[0]; // 804F6418
  c->r[1]=c->r[1]+0x00000020u; // 804F641C
  return; // 804F6420
}

// fn_804F6424
void f_804F6424(Ctx* __restrict c) {
  trace_call(0x804F6424u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6424
  c->r[0]=c->lr; // 804F6428
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F642C
  c->r[11]=c->r[1]+0x00000030u; // 804F6430
  c->lr=0x804F6438u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F6434
  cmps(c,0,(int32_t)c->r[3],0); // 804F6438
  c->r[24]=c->r[3]|c->r[3]; // 804F643C
  c->r[25]=c->r[4]|c->r[4]; // 804F6440
  if (crb(c,2)) { goto L_804F64E0; } // 804F6444
  c->r[4]=0u+0x80720000u; // 804F6448
  c->r[27]=c->r[24]|c->r[24]; // 804F644C
  c->r[4]=c->r[4]+0xFFFFB978u; // 804F6450
  c->r[26]=c->r[3]+0x00000008u; // 804F6454
  c->r[0]=c->r[4]+0x0000001Cu; // 804F6458
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F645C
  c->r[28]=0u+0x00000000u; // 804F6460
  c->r[29]=0u+0x00000000u; // 804F6464
  W32(c->r[3]+0x00000054u,c->r[0]); // 804F6468
L_804F646C:;
  c->r[31]=R32(c->r[27]+0x0000000Cu); // 804F646C
  c->r[30]=c->r[26]+0x00000004u; // 804F6470
  goto L_804F64A8; // 804F6474
L_804F6478:;
  c->r[4]=c->r[31]|c->r[31]; // 804F6478
  c->r[31]=R32(c->r[31]+0x00000000u); // 804F647C
  c->r[3]=c->r[1]+0x00000008u; // 804F6480
  W32(c->r[1]+0x00000008u,c->r[29]); // 804F6484
  c->r[4]=c->r[4]+0xFFFFFEFCu; // 804F6488
  c->lr=0x804F6490u; f_804FC564(c); // 804F648C
  c->r[3]=R32(c->r[1]+0x00000008u); // 804F6490
  cmps(c,0,(int32_t)c->r[3],0); // 804F6494
  if (crb(c,2)) { goto L_804F64A0; } // 804F6498
  W32(c->r[3]+0x00000020u,c->r[29]); // 804F649C
L_804F64A0:;
  c->r[3]=c->r[1]+0x00000008u; // 804F64A0
  c->lr=0x804F64A8u; f_804FC5FC(c); // 804F64A4
L_804F64A8:;
  cmpu(c,0,c->r[31],c->r[30]); // 804F64A8
  if (!crb(c,2)) { IRQCHK(c); goto L_804F6478; } // 804F64AC
  c->r[28]=c->r[28]+0x00000001u; // 804F64B0
  c->r[26]=c->r[26]+0x00000010u; // 804F64B4
  cmps(c,0,(int32_t)c->r[28],4); // 804F64B8
  c->r[27]=c->r[27]+0x00000010u; // 804F64BC
  if (crb(c,0)) { IRQCHK(c); goto L_804F646C; } // 804F64C0
  c->r[3]=c->r[24]|c->r[24]; // 804F64C4
  c->r[4]=0u+0x00000000u; // 804F64C8
  c->lr=0x804F64D0u; f_804F7CE0(c); // 804F64CC
  cmps(c,0,(int32_t)c->r[25],0); // 804F64D0
  if (!crb(c,1)) { goto L_804F64E0; } // 804F64D4
  c->r[3]=c->r[24]|c->r[24]; // 804F64D8
  c->lr=0x804F64E0u; f_803A9400(c); // 804F64DC
L_804F64E0:;
  c->r[11]=c->r[1]+0x00000030u; // 804F64E0
  c->r[3]=c->r[24]|c->r[24]; // 804F64E4
  c->lr=0x804F64ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F64E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F64EC
  c->lr=c->r[0]; // 804F64F0
  c->r[1]=c->r[1]+0x00000030u; // 804F64F4
  return; // 804F64F8
}

// fn_804F64FC
void f_804F64FC(Ctx* __restrict c) {
  trace_call(0x804F64FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F64FC
  c->r[0]=c->lr; // 804F6500
  W32(c->r[1]+0x00000074u,c->r[0]); // 804F6504
  c->r[11]=c->r[1]+0x00000070u; // 804F6508
  c->lr=0x804F6510u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F650C
  c->r[27]=c->r[3]|c->r[3]; // 804F6510
  c->r[28]=c->r[4]|c->r[4]; // 804F6514
  c->r[29]=c->r[5]|c->r[5]; // 804F6518
  c->r[30]=c->r[6]|c->r[6]; // 804F651C
  c->r[31]=c->r[7]|c->r[7]; // 804F6520
  c->r[3]=c->r[1]+0x00000028u; // 804F6524
  c->lr=0x804F652Cu; f_804F7B98(c); // 804F6528
  {uint32_t ea=c->r[27]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F652C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804F6530
  {uint32_t ea=c->r[27]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6534
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804F6538
  {uint32_t ea=c->r[27]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F653C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804F6540
  {uint32_t ea=c->r[27]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6544
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804F6548
  {uint32_t ea=c->r[27]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F654C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804F6550
  {uint32_t ea=c->r[27]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6554
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 804F6558
  c->r[0]=R32(c->r[27]+0x00000060u); // 804F655C
  W32(c->r[1]+0x00000048u,c->r[0]); // 804F6560
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 804F6564
  cmps(c,0,(int32_t)c->r[3],0); // 804F6568
  if (crb(c,2)) { goto L_804F65F0; } // 804F656C
  c->lr=0x804F6574u; f_804FAC84(c); // 804F6570
  c->r[26]=c->r[3]|c->r[3]; // 804F6574
  c->r[4]=c->r[29]|c->r[29]; // 804F6578
  c->r[5]=c->r[1]+0x00000008u; // 804F657C
  c->lr=0x804F6584u; f_804F7F74(c); // 804F6580
  cmps(c,0,(int32_t)c->r[3],0); // 804F6584
  if (crb(c,2)) { goto L_804F65E0; } // 804F6588
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 804F658C
  c->r[5]=R32(c->r[1]+0x00000008u); // 804F6590
  c->r[4]=R8(c->r[1]+0x0000000Du); // 804F6594
  cmps(c,0,(int32_t)c->r[0],2); // 804F6598
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 804F659C
  W32(c->r[1]+0x00000040u,c->r[5]); // 804F65A0
  W8(c->r[1]+0x00000045u,c->r[4]); // 804F65A4
  W8(c->r[1]+0x00000046u,c->r[3]); // 804F65A8
  if (crb(c,2)) { goto L_804F65CC; } // 804F65AC
  if (!crb(c,0)) { goto L_804F65D8; } // 804F65B0
  cmps(c,0,(int32_t)c->r[0],1); // 804F65B4
  if (!crb(c,0)) { goto L_804F65C0; } // 804F65B8
  goto L_804F65D8; // 804F65BC
L_804F65C0:;
  c->r[0]=0u+0x00000001u; // 804F65C0
  W8(c->r[1]+0x00000044u,c->r[0]); // 804F65C4
  goto L_804F65E0; // 804F65C8
L_804F65CC:;
  c->r[0]=0u+0x00000002u; // 804F65CC
  W8(c->r[1]+0x00000044u,c->r[0]); // 804F65D0
  goto L_804F65E0; // 804F65D4
L_804F65D8:;
  c->r[0]=0u+0x00000001u; // 804F65D8
  W8(c->r[1]+0x00000044u,c->r[0]); // 804F65DC
L_804F65E0:;
  c->r[3]=c->r[26]|c->r[26]; // 804F65E0
  c->r[4]=c->r[29]|c->r[29]; // 804F65E4
  c->lr=0x804F65ECu; f_804F7F34(c); // 804F65E8
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 804F65EC
L_804F65F0:;
  c->r[7]=0u+0x806B0000u; // 804F65F0
  {uint32_t ea=c->r[7]+0xFFFFD698u; c->r[6]=R32(ea); c->r[7]=ea;} // 804F65F4
  cmps(c,0,(int32_t)c->r[27],0); // 804F65F8
  c->r[8]=c->r[27]|c->r[27]; // 804F65FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 804F6600
  c->r[4]=R32(c->r[7]+0x00000008u); // 804F6604
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 804F6608
  c->r[0]=R32(c->r[7]+0x00000010u); // 804F660C
  W32(c->r[1]+0x00000010u,c->r[6]); // 804F6610
  W32(c->r[1]+0x00000014u,c->r[5]); // 804F6614
  W32(c->r[1]+0x00000018u,c->r[4]); // 804F6618
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804F661C
  W32(c->r[1]+0x00000020u,c->r[0]); // 804F6620
  c->r[0]=R32(c->r[27]+0x00000058u); // 804F6624
  W32(c->r[1]+0x00000010u,c->r[0]); // 804F6628
  if (crb(c,2)) { goto L_804F6634; } // 804F662C
  c->r[8]=c->r[27]+0x00000054u; // 804F6630
L_804F6634:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 804F6634
  c->r[3]=R32(c->r[27]+0x00000058u); // 804F6638
  cmps(c,0,(int32_t)c->r[3],0); // 804F663C
  if (crb(c,2)) { goto L_804F6648; } // 804F6640
  c->r[3]=c->r[3]+0x00000004u; // 804F6644
L_804F6648:;
  c->r[0]=c->r[1]+0x00000028u; // 804F6648
  W32(c->r[1]+0x00000018u,c->r[3]); // 804F664C
  c->r[3]=c->r[27]|c->r[27]; // 804F6650
  c->r[4]=c->r[28]|c->r[28]; // 804F6654
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804F6658
  c->r[5]=c->r[29]|c->r[29]; // 804F665C
  c->r[6]=c->r[30]|c->r[30]; // 804F6660
  c->r[8]=c->r[31]|c->r[31]; // 804F6664
  c->r[7]=c->r[1]+0x00000010u; // 804F6668
  c->lr=0x804F6670u; f_804F7E00(c); // 804F666C
  c->r[0]=R32(c->r[28]+0x00000000u); // 804F6670
  c->r[26]=c->r[3]|c->r[3]; // 804F6674
  cmps(c,0,(int32_t)c->r[0],0); // 804F6678
  if (crb(c,2)) { goto L_804F668C; } // 804F667C
  c->r[3]=c->r[0]|c->r[0]; // 804F6680
  c->r[4]=0u+0x00000003u; // 804F6684
  c->lr=0x804F668Cu; f_804EC254(c); // 804F6688
L_804F668C:;
  c->r[11]=c->r[1]+0x00000070u; // 804F668C
  c->r[3]=c->r[26]|c->r[26]; // 804F6690
  c->lr=0x804F6698u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F6694
  c->r[0]=R32(c->r[1]+0x00000074u); // 804F6698
  c->lr=c->r[0]; // 804F669C
  c->r[1]=c->r[1]+0x00000070u; // 804F66A0
  return; // 804F66A4
}

// SetPosition__Q34nw4r3snd12Sound3DActorFRCQ34nw4r4math4VEC3
void f_804F66A8(Ctx* __restrict c) {
  trace_call(0x804F66A8u);
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 804F66A8
  cmps(c,0,(int32_t)c->r[0],0); // 804F66AC
  if (!crb(c,2)) { goto L_804F66D4; } // 804F66B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 804F66B4
  {uint32_t ea=c->r[3]+0x00000064u; psq_load(c,1,ea,0,0);} // 804F66B8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F66BC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 804F66C0
  {uint32_t ea=c->r[3]+0x0000006Cu; psq_load(c,1,ea,1,0);} // 804F66C4
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 804F66C8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F66CC
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,1,0);} // 804F66D0
L_804F66D4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F66D4
  c->r[0]=0u+0x00000000u; // 804F66D8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F66DC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F66E0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 804F66E4
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 804F66E8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 804F66EC
  W8(c->r[3]+0x0000007Cu,c->r[0]); // 804F66F0
  return; // 804F66F4
}

// detail_UpdateAmbientArg__Q34nw4r3snd12Sound3DActorFPvPCQ44nw4r3snd6detail10BasicSound
void f_804F66F8(Ctx* __restrict c) {
  trace_call(0x804F66F8u);
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F66F8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 804F66FC
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6700
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804F6704
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6708
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804F670C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6710
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804F6714
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6718
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 804F671C
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6720
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 804F6724
  c->r[0]=R32(c->r[3]+0x00000060u); // 804F6728
  W32(c->r[4]+0x00000020u,c->r[0]); // 804F672C
  return; // 804F6730
}

// fn_804F6734
void f_804F6734(Ctx* __restrict c) {
  trace_call(0x804F6734u);
  c->r[3]=c->r[3]+0xFFFFFFACu; // 804F6734
  f_804F66F8(c); return; // 804F6738
}

// fn_804F673C
void f_804F673C(Ctx* __restrict c) {
  trace_call(0x804F673Cu);
  c->r[3]=c->r[3]+0xFFFFFFACu; // 804F673C
  f_804F6424(c); return; // 804F6740
}

// fn_804F6744
void f_804F6744(Ctx* __restrict c) {
  trace_call(0x804F6744u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6744
  c->r[0]=c->lr; // 804F6748
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F674C
  c->r[11]=c->r[1]+0x00000040u; // 804F6750
  c->lr=0x804F6758u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F6754
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 804F6758
  c->r[8]=c->r[1]+0x00000008u; // 804F675C
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 804F6760
  c->r[27]=c->r[3]|c->r[3]; // 804F6764
  c->r[31]=c->r[4]|c->r[4]; // 804F6768
  c->r[28]=c->r[5]|c->r[5]; // 804F676C
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6770
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,1,0);} // 804F6774
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,1,ea,1,0);} // 804F6778
  c->r[29]=c->r[6]|c->r[6]; // 804F677C
  c->r[30]=c->r[7]|c->r[7]; // 804F6780
  c->r[3]=c->r[8]|c->r[8]; // 804F6784
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 804F6788
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F678C
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,1,0);} // 804F6790
  c->lr=0x804F6798u; f_80383D7C(c); // 804F6794
  c->r[3]=R8(c->r[28]+0x0000001Du); // 804F6798
  c->r[0]=0u+0x43300000u; // 804F679C
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F67A0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804F67A4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804F67A8
  {uint32_t ea=c->r[2]+0x00001B08u; c->f[3]=RF64(ea);} // 804F67AC
  fcmp(c,0,c->f[1],c->f[5]); // 804F67B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 804F67B4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 804F67B8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804F67BC
  {uint32_t ea=c->r[2]+0x00001AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F67C0
  c->r[31]=R32(c->r[27]+0x0000001Cu); // 804F67C4
  c->r[0]=R8(c->r[28]+0x0000001Cu); // 804F67C8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804F67CC
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F67D0
  if (!crb(c,1)) { goto L_804F682C; } // 804F67D4
  cmps(c,0,(int32_t)c->r[0],2); // 804F67D8
  if (crb(c,2)) { goto L_804F6808; } // 804F67DC
  if (!crb(c,0)) { goto L_804F682C; } // 804F67E0
  cmps(c,0,(int32_t)c->r[0],1); // 804F67E4
  if (!crb(c,0)) { goto L_804F67F0; } // 804F67E8
  goto L_804F682C; // 804F67EC
L_804F67F0:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[5]); // 804F67F0
  c->f[1]=c->f[2]; // 804F67F4
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[4]); // 804F67F8
  c->lr=0x804F6800u; f_803BA75C(c); // 804F67FC
  c->f[3]=c->ps1[3]=S(c->f[1]); // 804F6800
  goto L_804F682C; // 804F6804
L_804F6808:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 804F6808
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F680C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804F6810
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 804F6814
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804F6818
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 804F681C
  fcmp(c,0,c->f[3],c->f[0]); // 804F6820
  if (!crb(c,0)) { goto L_804F682C; } // 804F6824
  c->f[3]=c->f[0]; // 804F6828
L_804F682C:;
  c->r[3]=c->r[31]^0x80000000u; // 804F682C
  c->r[0]=0u+0x43300000u; // 804F6830
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6834
  c->r[11]=c->r[1]+0x00000040u; // 804F6838
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804F683C
  {uint32_t ea=c->r[2]+0x00001B10u; c->f[1]=RF64(ea);} // 804F6840
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804F6844
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F6848
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 804F684C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[3]);} // 804F6850
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804F6854
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804F6858
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804F685C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 804F6860
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F6864
  c->r[0]=0u-c->r[0]; // 804F6868
  W32(c->r[30]+0x00000000u,c->r[0]); // 804F686C
  c->lr=0x804F6874u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F6870
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F6874
  c->lr=c->r[0]; // 804F6878
  c->r[1]=c->r[1]+0x00000040u; // 804F687C
  return; // 804F6880
}

// fn_804F6884
void f_804F6884(Ctx* __restrict c) {
  trace_call(0x804F6884u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6884
  c->r[0]=c->lr; // 804F6888
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804F688C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 804F6890
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 804F6894
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 804F6898
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 804F689C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 804F68A0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 804F68A4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 804F68A8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 804F68AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 804F68B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 804F68B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[26]);} // 804F68B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,26,ea,0,0);} // 804F68BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[25]);} // 804F68C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,25,ea,0,0);} // 804F68C4
  c->r[11]=c->r[1]+0x00000030u; // 804F68C8
  c->lr=0x804F68D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F68CC
  c->r[28]=c->r[4]|c->r[4]; // 804F68D0
  c->r[27]=c->r[3]|c->r[3]; // 804F68D4
  c->r[4]=c->r[5]|c->r[5]; // 804F68D8
  c->r[29]=c->r[6]|c->r[6]; // 804F68DC
  c->r[30]=c->r[7]|c->r[7]; // 804F68E0
  c->r[31]=c->r[8]|c->r[8]; // 804F68E4
  c->r[3]=c->r[28]|c->r[28]; // 804F68E8
  c->r[5]=c->r[1]+0x00000008u; // 804F68EC
  c->lr=0x804F68F4u; f_80383AA0(c); // 804F68F0
  c->r[3]=c->r[1]+0x00000008u; // 804F68F4
  c->lr=0x804F68FCu; f_80383D7C(c); // 804F68F8
  c->f[25]=c->f[1]; // 804F68FC
  {uint32_t ea=c->r[27]+0x00000020u; c->f[27]=c->ps1[27]=RF32(ea);} // 804F6900
  {uint32_t ea=c->r[28]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 804F6904
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 804F6908
  {uint32_t ea=c->r[29]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 804F690C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 804F6910
  {uint32_t ea=c->r[29]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6914
  c->lr=0x804F691Cu; f_804E5278(c); // 804F6918
  c->lr=0x804F6920u; f_804E5A84(c); // 804F691C
  cmps(c,0,(int32_t)c->r[3],3); // 804F6920
  if (crb(c,2)) { goto L_804F698C; } // 804F6924
  if (!crb(c,0)) { goto L_804F698C; } // 804F6928
  cmps(c,0,(int32_t)c->r[3],0); // 804F692C
  if (crb(c,2)) { goto L_804F6968; } // 804F6930
  if (!crb(c,0)) { goto L_804F693C; } // 804F6934
  goto L_804F698C; // 804F6938
L_804F693C:;
  c->f[1]=c->f[26]; // 804F693C
  c->r[4]=c->r[30]|c->r[30]; // 804F6940
  c->f[2]=c->f[25]; // 804F6944
  c->r[5]=c->r[31]|c->r[31]; // 804F6948
  c->f[3]=c->f[27]; // 804F694C
  c->r[3]=c->r[1]+0x00000008u; // 804F6950
  c->f[4]=c->f[30]; // 804F6954
  c->f[5]=c->f[29]; // 804F6958
  c->f[6]=c->f[28]; // 804F695C
  c->lr=0x804F6964u; f_804F6C28(c); // 804F6960
  goto L_804F6998; // 804F6964
L_804F6968:;
  c->f[1]=c->f[26]; // 804F6968
  c->r[4]=c->r[30]|c->r[30]; // 804F696C
  c->f[2]=c->f[25]; // 804F6970
  c->r[5]=c->r[31]|c->r[31]; // 804F6974
  c->f[3]=c->f[27]; // 804F6978
  c->r[3]=c->r[1]+0x00000008u; // 804F697C
  c->f[4]=c->f[31]; // 804F6980
  c->lr=0x804F6988u; f_804F6F64(c); // 804F6984
  goto L_804F6998; // 804F6988
L_804F698C:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F698C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804F6990
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804F6994
L_804F6998:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 804F6998
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 804F699C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 804F69A0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 804F69A4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 804F69A8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 804F69AC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 804F69B0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 804F69B4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 804F69B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 804F69BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,26,ea,0,0);} // 804F69C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[26]=RF64(ea);} // 804F69C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,25,ea,0,0);} // 804F69C8
  c->r[11]=c->r[1]+0x00000030u; // 804F69CC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[25]=RF64(ea);} // 804F69D0
  c->lr=0x804F69D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F69D4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804F69D8
  c->lr=c->r[0]; // 804F69DC
  c->r[1]=c->r[1]+0x000000A0u; // 804F69E0
  return; // 804F69E4
}

// fn_804F69E8
void f_804F69E8(Ctx* __restrict c) {
  trace_call(0x804F69E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F69E8
  c->r[0]=c->lr; // 804F69EC
  W32(c->r[1]+0x00000064u,c->r[0]); // 804F69F0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804F69F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804F69F8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804F69FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804F6A00
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 804F6A04
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 804F6A08
  {uint32_t ea=c->r[3]+0x00000024u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6A0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804F6A10
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6A14
  W32(c->r[1]+0x00000028u,c->r[30]); // 804F6A18
  c->r[30]=c->r[6]|c->r[6]; // 804F6A1C
  fcmp(c,0,c->f[0],c->f[31]); // 804F6A20
  W32(c->r[1]+0x00000024u,c->r[29]); // 804F6A24
  c->r[29]=c->r[5]|c->r[5]; // 804F6A28
  W32(c->r[1]+0x00000020u,c->r[28]); // 804F6A2C
  c->r[28]=c->r[4]|c->r[4]; // 804F6A30
  if (!crb(c,2)) { goto L_804F6A44; } // 804F6A34
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6A38
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 804F6A3C
  goto L_804F6B5C; // 804F6A40
L_804F6A44:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 804F6A44
  c->r[31]=c->r[1]+0x00000008u; // 804F6A48
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 804F6A4C
  c->r[3]=c->r[31]|c->r[31]; // 804F6A50
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6A54
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,1,0);} // 804F6A58
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,1,ea,1,0);} // 804F6A5C
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 804F6A60
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6A64
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 804F6A68
  c->lr=0x804F6A70u; f_80383D7C(c); // 804F6A6C
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6A70
  fcmp(c,0,c->f[1],c->f[0]); // 804F6A74
  if (!crb(c,1)) { goto L_804F6A9C; } // 804F6A78
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6A7C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 804F6A80
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 804F6A84
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6A88
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 804F6A8C
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 804F6A90
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6A94
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 804F6A98
L_804F6A9C:;
  c->r[3]=R8(c->r[29]+0x0000001Eu); // 804F6A9C
  c->r[0]=0u+0x43300000u; // 804F6AA0
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6AA4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804F6AA8
  fcmp(c,0,c->f[1],c->f[0]); // 804F6AAC
  {uint32_t ea=c->r[2]+0x00001B08u; c->f[2]=RF64(ea);} // 804F6AB0
  W32(c->r[1]+0x00000018u,c->r[0]); // 804F6AB4
  {uint32_t ea=c->r[2]+0x00001B18u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6AB8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 804F6ABC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804F6AC0
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[0]); // 804F6AC4
  if (!crb(c,1)) { goto L_804F6B0C; } // 804F6AC8
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,2,ea,0,0);} // 804F6ACC
  {uint32_t ea=c->r[29]+0x00000010u; psq_load(c,1,ea,0,0);} // 804F6AD0
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 804F6AD4
  {uint32_t ea=c->r[28]+0x00000040u; psq_load(c,3,ea,0,0);} // 804F6AD8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804F6ADC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,0);} // 804F6AE0
  {uint32_t ea=c->r[29]+0x0000000Cu; psq_load(c,1,ea,1,0);} // 804F6AE4
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804F6AE8
  {uint32_t ea=c->r[28]+0x0000003Cu; psq_load(c,3,ea,1,0);} // 804F6AEC
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804F6AF0
  {double t0=S(std::fma(c->f[0],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 804F6AF4
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6AF8
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804F6AFC
  c->f[29]=-c->f[0]; // 804F6B00
  c->f[1]=-c->f[1]; // 804F6B04
  goto L_804F6B20; // 804F6B08
L_804F6B0C:;
  c->r[3]=c->r[29]+0x0000000Cu; // 804F6B0C
  c->lr=0x804F6B14u; f_80383D7C(c); // 804F6B10
  c->f[29]=-c->f[1]; // 804F6B14
  c->r[3]=c->r[28]+0x0000003Cu; // 804F6B18
  c->lr=0x804F6B20u; f_80383D7C(c); // 804F6B1C
L_804F6B20:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 804F6B20
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[30]); // 804F6B24
  fcmp(c,0,c->f[1],c->f[31]); // 804F6B28
  if (!crb(c,1)) { goto L_804F6B38; } // 804F6B2C
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6B30
  goto L_804F6B58; // 804F6B34
L_804F6B38:;
  fcmp(c,0,c->f[29],c->f[31]); // 804F6B38
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804F6B3C
  if (!crb(c,2)) { goto L_804F6B4C; } // 804F6B40
  {uint32_t ea=c->r[2]+0x00001B1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6B44
  goto L_804F6B58; // 804F6B48
L_804F6B4C:;
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 804F6B4C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[29]); // 804F6B50
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804F6B54
L_804F6B58:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804F6B58
L_804F6B5C:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804F6B5C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804F6B60
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804F6B64
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804F6B68
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 804F6B6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 804F6B70
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804F6B74
  c->r[30]=R32(c->r[1]+0x00000028u); // 804F6B78
  c->r[29]=R32(c->r[1]+0x00000024u); // 804F6B7C
  c->r[0]=R32(c->r[1]+0x00000064u); // 804F6B80
  c->r[28]=R32(c->r[1]+0x00000020u); // 804F6B84
  c->lr=c->r[0]; // 804F6B88
  c->r[1]=c->r[1]+0x00000060u; // 804F6B8C
  return; // 804F6B90
}

// fn_804F6B94
void f_804F6B94(Ctx* __restrict c) {
  trace_call(0x804F6B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6B94
  c->r[0]=c->lr; // 804F6B98
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 804F6B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F6BA0
  c->r[3]=c->r[1]+0x00000008u; // 804F6BA4
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 804F6BA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F6BAC
  c->r[31]=c->r[6]|c->r[6]; // 804F6BB0
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6BB4
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,1,0);} // 804F6BB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F6BBC
  c->r[30]=c->r[4]|c->r[4]; // 804F6BC0
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,1,ea,1,0);} // 804F6BC4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804F6BC8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F6BCC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 804F6BD0
  c->lr=0x804F6BD8u; f_80383D7C(c); // 804F6BD4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6BD8
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6BDC
  fcmp(c,0,c->f[1],c->f[0]); // 804F6BE0
  {uint32_t ea=c->r[30]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6BE4
  if (!crb(c,1)) { goto L_804F6C0C; } // 804F6BE8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804F6BEC
  {uint32_t ea=c->r[30]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6BF0
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6BF4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804F6BF8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804F6BFC
  fcmp(c,0,c->f[3],c->f[2]); // 804F6C00
  if (!crb(c,1)) { goto L_804F6C0C; } // 804F6C04
  c->f[3]=c->f[2]; // 804F6C08
L_804F6C0C:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[3]);} // 804F6C0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F6C10
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F6C14
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F6C18
  c->lr=c->r[0]; // 804F6C1C
  c->r[1]=c->r[1]+0x00000020u; // 804F6C20
  return; // 804F6C24
}

// fn_804F6C28
void f_804F6C28(Ctx* __restrict c) {
  trace_call(0x804F6C28u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6C28
  c->r[0]=c->lr; // 804F6C2C
  W32(c->r[1]+0x00000094u,c->r[0]); // 804F6C30
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 804F6C34
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 804F6C38
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 804F6C3C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 804F6C40
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 804F6C44
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 804F6C48
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 804F6C4C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 804F6C50
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 804F6C54
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 804F6C58
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 804F6C5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 804F6C60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[25]);} // 804F6C64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,25,ea,0,0);} // 804F6C68
  c->f[0]=c->f[1]; // 804F6C6C
  c->f[1]=c->f[2]; // 804F6C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F6C74
  c->r[31]=c->r[5]|c->r[5]; // 804F6C78
  c->f[27]=c->f[3]; // 804F6C7C
  c->r[5]=c->r[1]+0x00000008u; // 804F6C80
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F6C84
  c->r[30]=c->r[4]|c->r[4]; // 804F6C88
  c->f[28]=c->f[4]; // 804F6C8C
  c->f[29]=c->f[5]; // 804F6C90
  c->f[30]=c->f[6]; // 804F6C94
  c->r[4]=c->r[1]+0x0000000Cu; // 804F6C98
  c->f[2]=c->f[0]; // 804F6C9C
  c->lr=0x804F6CA4u; f_804F70E4(c); // 804F6CA0
  c->f[5]=-c->f[29]; // 804F6CA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6CA8
  c->f[6]=-c->f[28]; // 804F6CAC
  fcmp(c,0,c->f[0],c->f[5]); // 804F6CB0
  if (!crb(c,0)) { goto L_804F6CFC; } // 804F6CB4
  {uint32_t ea=c->r[2]+0x00001B20u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6CB8
  fcmp(c,0,c->f[2],c->f[5]); // 804F6CBC
  if (!crb(c,2)) { goto L_804F6CCC; } // 804F6CC0
  {uint32_t ea=c->r[2]+0x00001B24u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6CC4
  goto L_804F6CF4; // 804F6CC8
L_804F6CCC:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6CCC
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[5]); // 804F6CD0
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6CD4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 804F6CD8
  {uint32_t ea=c->r[2]+0x00001B28u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6CDC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804F6CE0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 804F6CE4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 804F6CE8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6CEC
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 804F6CF0
L_804F6CF4:;
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6CF4
  goto L_804F6EA0; // 804F6CF8
L_804F6CFC:;
  {uint32_t ea=c->r[2]+0x00001B2Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804F6CFC
  fcmp(c,0,c->f[0],c->f[4]); // 804F6D00
  if (!crb(c,0)) { goto L_804F6D44; } // 804F6D04
  fcmp(c,0,c->f[5],c->f[4]); // 804F6D08
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6D0C
  if (!crb(c,2)) { goto L_804F6D1C; } // 804F6D10
  {uint32_t ea=c->r[2]+0x00001B34u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6D14
  goto L_804F6EA0; // 804F6D18
L_804F6D1C:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6D1C
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 804F6D20
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6D24
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 804F6D28
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804F6D2C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 804F6D30
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 804F6D34
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 804F6D38
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 804F6D3C
  goto L_804F6EA0; // 804F6D40
L_804F6D44:;
  fcmp(c,0,c->f[0],c->f[6]); // 804F6D44
  if (!crb(c,0)) { goto L_804F6D8C; } // 804F6D48
  fcmp(c,0,c->f[4],c->f[6]); // 804F6D4C
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6D50
  if (!crb(c,2)) { goto L_804F6D60; } // 804F6D54
  {uint32_t ea=c->r[2]+0x00001B24u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6D58
  goto L_804F6EA0; // 804F6D5C
L_804F6D60:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6D60
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[6]); // 804F6D64
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6D68
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[1]); // 804F6D6C
  {uint32_t ea=c->r[2]+0x00001B38u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6D70
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804F6D74
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 804F6D78
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 804F6D7C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6D80
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 804F6D84
  goto L_804F6EA0; // 804F6D88
L_804F6D8C:;
  fcmp(c,0,c->f[0],c->f[28]); // 804F6D8C
  if (!crb(c,0)) { goto L_804F6DD8; } // 804F6D90
  fcmp(c,0,c->f[6],c->f[28]); // 804F6D94
  if (!crb(c,2)) { goto L_804F6DA4; } // 804F6D98
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6D9C
  goto L_804F6DD0; // 804F6DA0
L_804F6DA4:;
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6DA4
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[28]); // 804F6DA8
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6DAC
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 804F6DB0
  {uint32_t ea=c->r[2]+0x00001B3Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6DB4
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 804F6DB8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804F6DBC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 804F6DC0
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 804F6DC4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6DC8
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 804F6DCC
L_804F6DD0:;
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6DD0
  goto L_804F6EA0; // 804F6DD4
L_804F6DD8:;
  {uint32_t ea=c->r[2]+0x00001B38u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6DD8
  fcmp(c,0,c->f[0],c->f[3]); // 804F6DDC
  if (!crb(c,0)) { goto L_804F6E20; } // 804F6DE0
  fcmp(c,0,c->f[28],c->f[3]); // 804F6DE4
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6DE8
  if (!crb(c,2)) { goto L_804F6DF8; } // 804F6DEC
  {uint32_t ea=c->r[2]+0x00001B24u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6DF0
  goto L_804F6EA0; // 804F6DF4
L_804F6DF8:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6DF8
  c->f[3]=c->ps1[3]=S(c->f[28]-c->f[3]); // 804F6DFC
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6E00
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 804F6E04
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804F6E08
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 804F6E0C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 804F6E10
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 804F6E14
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 804F6E18
  goto L_804F6EA0; // 804F6E1C
L_804F6E20:;
  fcmp(c,0,c->f[0],c->f[29]); // 804F6E20
  if (!crb(c,0)) { goto L_804F6E64; } // 804F6E24
  fcmp(c,0,c->f[3],c->f[29]); // 804F6E28
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6E2C
  if (!crb(c,2)) { goto L_804F6E3C; } // 804F6E30
  {uint32_t ea=c->r[2]+0x00001B34u; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6E34
  goto L_804F6EA0; // 804F6E38
L_804F6E3C:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6E3C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[29]); // 804F6E40
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6E44
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 804F6E48
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804F6E4C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 804F6E50
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 804F6E54
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6E58
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 804F6E5C
  goto L_804F6EA0; // 804F6E60
L_804F6E64:;
  {uint32_t ea=c->r[2]+0x00001B28u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6E64
  fcmp(c,0,c->f[29],c->f[3]); // 804F6E68
  if (!crb(c,2)) { goto L_804F6E78; } // 804F6E6C
  {uint32_t ea=c->r[2]+0x00001B34u; c->f[31]=c->ps1[31]=RF32(ea);} // 804F6E70
  goto L_804F6E9C; // 804F6E74
L_804F6E78:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6E78
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[3]); // 804F6E7C
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6E80
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 804F6E84
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804F6E88
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 804F6E8C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 804F6E90
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6E94
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 804F6E98
L_804F6E9C:;
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[25]=c->ps1[25]=RF32(ea);} // 804F6E9C
L_804F6EA0:;
  c->f[1]=c->f[29]; // 804F6EA0
  c->lr=0x804F6EA8u; f_803BA0F4(c); // 804F6EA4
  c->f[26]=c->ps1[26]=S(c->f[1]); // 804F6EA8
  c->f[1]=c->f[28]; // 804F6EAC
  c->lr=0x804F6EB4u; f_803BA0F4(c); // 804F6EB0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 804F6EB4
  {uint32_t ea=c->r[2]+0x00001B34u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6EB8
  c->f[1]=c->f[29]; // 804F6EBC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[26]); // 804F6EC0
  c->f[26]=c->ps1[26]=S(c->f[2]*c->f[0]); // 804F6EC4
  c->lr=0x804F6ECCu; f_803BA0F4(c); // 804F6EC8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 804F6ECC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6ED0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[27]); // 804F6ED4
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6ED8
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[27]); // 804F6EDC
  c->f[2]=-c->f[2]; // 804F6EE0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 804F6EE4
  c->f[2]=c->ps1[2]=S(c->f[26]+c->f[2]); // 804F6EE8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804F6EEC
  c->f[3]=c->ps1[3]=S(c->f[26]/c->f[2]); // 804F6EF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6EF4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 804F6EF8
  c->f[2]=c->ps1[2]=S(c->f[25]*c->f[2]); // 804F6EFC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804F6F00
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804F6F04
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804F6F08
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 804F6F0C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804F6F10
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 804F6F14
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 804F6F18
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 804F6F1C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 804F6F20
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 804F6F24
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 804F6F28
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 804F6F2C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 804F6F30
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 804F6F34
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 804F6F38
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 804F6F3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 804F6F40
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,25,ea,0,0);} // 804F6F44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[25]=RF64(ea);} // 804F6F48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F6F4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F6F50
  c->r[0]=R32(c->r[1]+0x00000094u); // 804F6F54
  c->lr=c->r[0]; // 804F6F58
  c->r[1]=c->r[1]+0x00000090u; // 804F6F5C
  return; // 804F6F60
}

// fn_804F6F64
void f_804F6F64(Ctx* __restrict c) {
  trace_call(0x804F6F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F6F64
  c->r[0]=c->lr; // 804F6F68
  W32(c->r[1]+0x00000044u,c->r[0]); // 804F6F6C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804F6F70
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804F6F74
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804F6F78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804F6F7C
  c->f[0]=c->f[1]; // 804F6F80
  c->f[1]=c->f[2]; // 804F6F84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F6F88
  c->r[31]=c->r[5]|c->r[5]; // 804F6F8C
  c->f[31]=c->f[3]; // 804F6F90
  c->r[5]=c->r[1]+0x00000008u; // 804F6F94
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F6F98
  c->r[30]=c->r[4]|c->r[4]; // 804F6F9C
  c->f[30]=c->f[4]; // 804F6FA0
  c->f[2]=c->f[0]; // 804F6FA4
  c->r[4]=c->r[1]+0x0000000Cu; // 804F6FA8
  c->lr=0x804F6FB0u; f_804F70E4(c); // 804F6FAC
  {uint32_t ea=c->r[2]+0x00001B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6FB0
  c->f[6]=-c->f[30]; // 804F6FB4
  {uint32_t ea=c->r[2]+0x00001B28u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6FB8
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[30]); // 804F6FBC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804F6FC0
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[30]); // 804F6FC4
  fcmp(c,0,c->f[3],c->f[5]); // 804F6FC8
  if (!crb(c,0)) { goto L_804F7008; } // 804F6FCC
  fcmp(c,0,c->f[1],c->f[5]); // 804F6FD0
  if (!crb(c,2)) { goto L_804F6FE0; } // 804F6FD4
  {uint32_t ea=c->r[2]+0x00001B24u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F6FD8
  goto L_804F70A4; // 804F6FDC
L_804F6FE0:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F6FE0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[5]); // 804F6FE4
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F6FE8
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804F6FEC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804F6FF0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 804F6FF4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 804F6FF8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F6FFC
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 804F7000
  goto L_804F70A4; // 804F7004
L_804F7008:;
  fcmp(c,0,c->f[3],c->f[6]); // 804F7008
  if (!crb(c,0)) { goto L_804F7018; } // 804F700C
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7010
  goto L_804F70A4; // 804F7014
L_804F7018:;
  fcmp(c,0,c->f[3],c->f[30]); // 804F7018
  if (!crb(c,0)) { goto L_804F7060; } // 804F701C
  fcmp(c,0,c->f[6],c->f[30]); // 804F7020
  if (!crb(c,2)) { goto L_804F7030; } // 804F7024
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7028
  goto L_804F70A4; // 804F702C
L_804F7030:;
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7030
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[30]); // 804F7034
  {uint32_t ea=c->r[2]+0x00001B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7038
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 804F703C
  {uint32_t ea=c->r[2]+0x00001B3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7040
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 804F7044
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804F7048
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804F704C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 804F7050
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F7054
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 804F7058
  goto L_804F70A4; // 804F705C
L_804F7060:;
  fcmp(c,0,c->f[3],c->f[7]); // 804F7060
  if (!crb(c,0)) { goto L_804F7070; } // 804F7064
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7068
  goto L_804F70A4; // 804F706C
L_804F7070:;
  fcmp(c,0,c->f[7],c->f[2]); // 804F7070
  if (!crb(c,2)) { goto L_804F7080; } // 804F7074
  {uint32_t ea=c->r[2]+0x00001B34u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7078
  goto L_804F70A4; // 804F707C
L_804F7080:;
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7080
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[2]); // 804F7084
  {uint32_t ea=c->r[2]+0x00001AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7088
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 804F708C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804F7090
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804F7094
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 804F7098
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804F709C
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 804F70A0
L_804F70A4:;
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 804F70A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F70A8
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F70AC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804F70B0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 804F70B4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804F70B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804F70BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804F70C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804F70C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804F70C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F70CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F70D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804F70D4
  c->lr=c->r[0]; // 804F70D8
  c->r[1]=c->r[1]+0x00000040u; // 804F70DC
  return; // 804F70E0
}

// fn_804F70E4
void f_804F70E4(Ctx* __restrict c) {
  trace_call(0x804F70E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F70E4
  c->r[0]=c->lr; // 804F70E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804F70EC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804F70F0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804F70F4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804F70F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804F70FC
  c->f[30]=c->f[1]; // 804F7100
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7104
  c->f[31]=c->f[2]; // 804F7108
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804F710C
  c->r[31]=c->r[5]|c->r[5]; // 804F7110
  fcmp(c,0,c->f[0],c->f[1]); // 804F7114
  W32(c->r[1]+0x00000028u,c->r[30]); // 804F7118
  c->r[30]=c->r[4]|c->r[4]; // 804F711C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804F7120
  c->r[29]=c->r[3]|c->r[3]; // 804F7124
  if (!crb(c,2)) { goto L_804F713C; } // 804F7128
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804F712C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804F7130
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804F7134
  goto L_804F71AC; // 804F7138
L_804F713C:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F713C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7140
  c->r[3]=c->r[1]+0x00000008u; // 804F7144
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804F7148
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804F714C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804F7150
  c->lr=0x804F7158u; f_80383D7C(c); // 804F7154
  fcmp(c,0,c->f[1],c->f[31]); // 804F7158
  if (!crb(c,1)) { goto L_804F717C; } // 804F715C
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 804F7160
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7164
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7168
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804F716C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804F7170
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804F7174
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804F7178
L_804F717C:;
  c->r[3]=c->r[1]+0x00000008u; // 804F717C
  c->lr=0x804F7184u; f_80383D7C(c); // 804F7180
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7184
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7188
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804F718C
  {uint32_t ea=c->r[2]+0x00001B00u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7190
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804F7194
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 804F7198
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[30]); // 804F719C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 804F71A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804F71A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804F71A8
L_804F71AC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F71AC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F71B0
  c->f[2]=-c->f[0]; // 804F71B4
  c->lr=0x804F71BCu; f_803BA748(c); // 804F71B8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804F71BC
  c->r[3]=c->r[1]+0x00000014u; // 804F71C0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804F71C4
  c->lr=0x804F71CCu; f_80383D7C(c); // 804F71C8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[31]); // 804F71CC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804F71D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804F71D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804F71D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804F71DC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804F71E0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804F71E4
  c->r[30]=R32(c->r[1]+0x00000028u); // 804F71E8
  c->r[29]=R32(c->r[1]+0x00000024u); // 804F71EC
  c->r[0]=R32(c->r[1]+0x00000054u); // 804F71F0
  c->lr=c->r[0]; // 804F71F4
  c->r[1]=c->r[1]+0x00000050u; // 804F71F8
  return; // 804F71FC
}

// __ct__Q34nw4r3snd13Sound3DEngineFv
void f_804F7200(Ctx* __restrict c) {
  trace_call(0x804F7200u);
  {uint32_t ea=c->r[2]+0x00001B40u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F7200
  c->r[4]=0u+0x80720000u; // 804F7204
  {uint32_t ea=c->r[2]+0x00001B44u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7208
  c->r[4]=c->r[4]+0xFFFFB9A8u; // 804F720C
  {uint32_t ea=c->r[2]+0x00001B48u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7210
  {uint32_t ea=c->r[2]+0x00001B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7214
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F7218
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 804F721C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804F7220
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804F7224
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804F7228
  return; // 804F722C
}

// fn_804F7230
void f_804F7230(Ctx* __restrict c) {
  trace_call(0x804F7230u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7230
  c->r[0]=c->lr; // 804F7234
  W32(c->r[1]+0x00000064u,c->r[0]); // 804F7238
  c->r[11]=c->r[1]+0x00000060u; // 804F723C
  c->lr=0x804F7244u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804F7240
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 804F7244
  c->r[28]=c->r[3]|c->r[3]; // 804F7248
  c->r[29]=c->r[4]|c->r[4]; // 804F724C
  c->r[30]=c->r[5]|c->r[5]; // 804F7250
  c->r[31]=c->r[8]|c->r[8]; // 804F7254
  if (crb(c,2)) { goto L_804F7264; } // 804F7258
  {uint32_t ea=c->r[2]+0x00001B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F725C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 804F7260
L_804F7264:;
  c->r[0]=rotl(c->r[7],0)&0x00000008u; cr0(c,c->r[0]); // 804F7264
  if (crb(c,2)) { goto L_804F7278; } // 804F7268
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804F726C
  c->r[0]=0u-c->r[0]; // 804F7270
  W32(c->r[8]+0x00000020u,c->r[0]); // 804F7274
L_804F7278:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 804F7278
  cmpu(c,0,c->r[0],0x00000001u); // 804F727C
  if (!crb(c,1)) { goto L_804F728C; } // 804F7280
  c->r[0]=0u+0xFFFFFFE9u; // 804F7284
  c->r[7]=c->r[7]&c->r[0]; // 804F7288
L_804F728C:;
  c->r[25]=c->r[7]&0x00000009u; cr0(c,c->r[25]); // 804F728C
  c->r[27]=R32(c->r[4]+0x00000010u); // 804F7290
  c->r[17]=c->r[4]+0x00000010u; // 804F7294
  c->r[24]=rotl(c->r[7],0)&0x00000001u; // 804F7298
  c->r[23]=rotl(c->r[7],0)&0x00000008u; // 804F729C
  c->r[22]=rotl(c->r[7],0)&0x00000006u; // 804F72A0
  c->r[21]=rotl(c->r[7],0)&0x00000002u; // 804F72A4
  c->r[20]=rotl(c->r[7],0)&0x00000004u; // 804F72A8
  c->r[19]=rotl(c->r[7],0)&0x00000010u; // 804F72AC
  c->r[18]=rotl(c->r[7],0)&0x00000020u; // 804F72B0
  goto L_804F73CC; // 804F72B4
L_804F72B8:;
  cmps(c,0,(int32_t)c->r[25],0); // 804F72B8
  c->r[26]=c->r[27]+0xFFFFFF9Cu; // 804F72BC
  if (crb(c,2)) { goto L_804F7320; } // 804F72C0
  c->r[3]=c->r[29]|c->r[29]; // 804F72C4
  c->r[4]=c->r[26]|c->r[26]; // 804F72C8
  c->r[5]=c->r[30]|c->r[30]; // 804F72CC
  c->r[6]=c->r[1]+0x0000001Cu; // 804F72D0
  c->r[7]=c->r[1]+0x00000018u; // 804F72D4
  c->lr=0x804F72DCu; f_804F6744(c); // 804F72D8
  cmps(c,0,(int32_t)c->r[24],0); // 804F72DC
  if (crb(c,2)) { goto L_804F7300; } // 804F72E0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F72E4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F72E8
  fcmp(c,0,c->f[0],c->f[1]); // 804F72EC
  if (!crb(c,0)) { goto L_804F72F8; } // 804F72F0
  goto L_804F72FC; // 804F72F4
L_804F72F8:;
  c->f[1]=c->f[0]; // 804F72F8
L_804F72FC:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 804F72FC
L_804F7300:;
  cmps(c,0,(int32_t)c->r[23],0); // 804F7300
  if (crb(c,2)) { goto L_804F7320; } // 804F7304
  c->r[3]=R32(c->r[1]+0x00000018u); // 804F7308
  c->r[0]=R32(c->r[31]+0x00000020u); // 804F730C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804F7310
  if (!crb(c,0)) { goto L_804F731C; } // 804F7314
  c->r[3]=c->r[0]|c->r[0]; // 804F7318
L_804F731C:;
  W32(c->r[31]+0x00000020u,c->r[3]); // 804F731C
L_804F7320:;
  cmps(c,0,(int32_t)c->r[22],0); // 804F7320
  if (crb(c,2)) { goto L_804F7364; } // 804F7324
  c->r[3]=c->r[29]|c->r[29]; // 804F7328
  c->r[4]=c->r[26]|c->r[26]; // 804F732C
  c->r[5]=c->r[30]|c->r[30]; // 804F7330
  c->r[6]=c->r[28]+0x00000004u; // 804F7334
  c->r[7]=c->r[1]+0x00000014u; // 804F7338
  c->r[8]=c->r[1]+0x00000010u; // 804F733C
  c->lr=0x804F7344u; f_804F6884(c); // 804F7340
  cmps(c,0,(int32_t)c->r[21],0); // 804F7344
  if (crb(c,2)) { goto L_804F7354; } // 804F7348
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F734C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 804F7350
L_804F7354:;
  cmps(c,0,(int32_t)c->r[20],0); // 804F7354
  if (crb(c,2)) { goto L_804F7364; } // 804F7358
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F735C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804F7360
L_804F7364:;
  cmps(c,0,(int32_t)c->r[19],0); // 804F7364
  if (crb(c,2)) { goto L_804F7388; } // 804F7368
  c->r[3]=c->r[29]|c->r[29]; // 804F736C
  c->r[4]=c->r[26]|c->r[26]; // 804F7370
  c->r[5]=c->r[30]|c->r[30]; // 804F7374
  c->r[6]=c->r[1]+0x0000000Cu; // 804F7378
  c->lr=0x804F7380u; f_804F69E8(c); // 804F737C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7380
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804F7384
L_804F7388:;
  cmps(c,0,(int32_t)c->r[18],0); // 804F7388
  if (crb(c,2)) { goto L_804F73C8; } // 804F738C
  c->r[3]=c->r[29]|c->r[29]; // 804F7390
  c->r[4]=c->r[26]|c->r[26]; // 804F7394
  c->r[5]=c->r[30]|c->r[30]; // 804F7398
  c->r[6]=c->r[1]+0x00000008u; // 804F739C
  c->lr=0x804F73A4u; f_804F6B94(c); // 804F73A0
  c->r[0]=R32(c->r[29]+0x00000028u); // 804F73A4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F73A8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 804F73AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F73B0
  fcmp(c,0,c->f[0],c->f[1]); // 804F73B4
  if (!crb(c,1)) { goto L_804F73C0; } // 804F73B8
  goto L_804F73C4; // 804F73BC
L_804F73C0:;
  c->f[1]=c->f[0]; // 804F73C0
L_804F73C4:;
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804F73C4
L_804F73C8:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 804F73C8
L_804F73CC:;
  cmpu(c,0,c->r[27],c->r[17]); // 804F73CC
  if (!crb(c,2)) { IRQCHK(c); goto L_804F72B8; } // 804F73D0
  c->r[11]=c->r[1]+0x00000060u; // 804F73D4
  c->lr=0x804F73DCu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804F73D8
  c->r[0]=R32(c->r[1]+0x00000064u); // 804F73DC
  c->lr=c->r[0]; // 804F73E0
  c->r[1]=c->r[1]+0x00000060u; // 804F73E4
  return; // 804F73E8
}

// fn_804F73EC
void f_804F73EC(Ctx* __restrict c) {
  trace_call(0x804F73ECu);
  c->r[9]=R32(c->r[5]+0x00000018u); // 804F73EC
  c->r[7]=0u+0x0000001Fu; // 804F73F0
  c->r[0]=rotl(c->r[9],0)&0x00000001u; cr0(c,c->r[0]); // 804F73F4
  if (crb(c,2)) { goto L_804F7400; } // 804F73F8
  c->r[7]=0u+0x0000001Eu; // 804F73FC
L_804F7400:;
  c->r[0]=rotl(c->r[9],0)&0x00000002u; cr0(c,c->r[0]); // 804F7400
  if (crb(c,2)) { goto L_804F740C; } // 804F7404
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFFDu; // 804F7408
L_804F740C:;
  c->r[0]=rotl(c->r[9],0)&0x00000004u; cr0(c,c->r[0]); // 804F740C
  if (crb(c,2)) { goto L_804F7418; } // 804F7410
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFFBu; // 804F7414
L_804F7418:;
  c->r[0]=rotl(c->r[9],0)&0x00000008u; cr0(c,c->r[0]); // 804F7418
  if (crb(c,2)) { goto L_804F7424; } // 804F741C
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFF7u; // 804F7420
L_804F7424:;
  c->r[0]=R8(c->r[5]+0x0000001Eu); // 804F7424
  cmps(c,0,(int32_t)c->r[0],0); // 804F7428
  if (!crb(c,2)) { goto L_804F7434; } // 804F742C
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFEFu; // 804F7430
L_804F7434:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 804F7434
  if (crb(c,2)) { goto L_804F7440; } // 804F7438
  c->r[7]=c->r[7]|0x00000020u; // 804F743C
L_804F7440:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F7440
  c->r[12]=R32(c->r[12]+0x00000018u); // 804F7444
  c->ctr=c->r[12]; // 804F7448
  if (true) { dispatch(c,c->ctr); return; } // 804F744C
}

// fn_804F7450
void f_804F7450(Ctx* __restrict c) {
  trace_call(0x804F7450u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7450
  c->r[0]=c->lr; // 804F7454
  c->r[7]=0u+0x01000000u; // 804F7458
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804F745C
  c->r[7]=c->r[7]+0x00000008u; // 804F7460
  c->r[0]=R32(c->r[5]+0x00000018u); // 804F7464
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 804F7468
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804F746C
  W32(c->r[1]+0x00000098u,c->r[30]); // 804F7470
  W32(c->r[1]+0x00000094u,c->r[29]); // 804F7474
  if (crb(c,2)) { goto L_804F7480; } // 804F7478
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFF7u; // 804F747C
L_804F7480:;
  {uint32_t ea=c->r[2]+0x00001B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7480
  c->r[10]=c->r[1]+0x00000044u; // 804F7484
  {uint32_t ea=c->r[2]+0x00001B50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7488
  c->r[8]=0u+0x00000000u; // 804F748C
  c->r[0]=c->r[1]+0x0000008Cu; // 804F7490
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804F7494
  cmpu(c,1,c->r[10],c->r[0]); // 804F7498
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804F749C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804F74A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804F74A4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804F74A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804F74AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804F74B0
  W32(c->r[1]+0x00000024u,c->r[8]); // 804F74B4
  W32(c->r[1]+0x00000028u,c->r[8]); // 804F74B8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804F74BC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 804F74C0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804F74C4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804F74C8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 804F74CC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804F74D0
  if (!crb(c,4)) { goto L_804F76A4; } // 804F74D4
  c->r[12]=c->r[0]-c->r[10]; // 804F74D8
  c->r[8]=0u+0x2AAB0000u; // 804F74DC
  c->r[31]=c->r[12]+0x00000017u; // 804F74E0
  c->r[9]=c->r[1]+0xFFFFFFCCu; // 804F74E4
  c->r[0]=c->r[8]+0xFFFFAAABu; // 804F74E8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 804F74EC
  c->r[0]=sraw(c,c->r[0],2); // 804F74F0
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 804F74F4
  c->r[30]=c->r[0]+c->r[8]; // 804F74F8
  c->r[29]=c->r[30]+0x00000001u; // 804F74FC
  cmps(c,0,(int32_t)c->r[29],8); // 804F7500
  if (!crb(c,1)) { goto L_804F765C; } // 804F7504
  c->r[8]=0u+0x00000000u; // 804F7508
  c->r[11]=0u+0x00000000u; // 804F750C
  if (crb(c,5)) { goto L_804F7538; } // 804F7510
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 804F7514
  c->r[12]=0u+0x00000001u; // 804F7518
  if (!crb(c,2)) { goto L_804F752C; } // 804F751C
  c->r[0]=rotl(c->r[31],0)&0x80000000u; cr0(c,c->r[0]); // 804F7520
  if (crb(c,2)) { goto L_804F752C; } // 804F7524
  c->r[12]=0u+0x00000000u; // 804F7528
L_804F752C:;
  cmps(c,0,(int32_t)c->r[12],0); // 804F752C
  if (crb(c,2)) { goto L_804F7538; } // 804F7530
  c->r[11]=0u+0x00000001u; // 804F7534
L_804F7538:;
  cmps(c,0,(int32_t)c->r[11],0); // 804F7538
  if (crb(c,2)) { goto L_804F7568; } // 804F753C
  c->r[12]=rotl(c->r[30],0)&0x80000000u; cr0(c,c->r[12]); // 804F7540
  c->r[11]=0u+0x00000001u; // 804F7544
  if (!crb(c,2)) { goto L_804F755C; } // 804F7548
  c->r[0]=rotl(c->r[29],0)&0x80000000u; // 804F754C
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 804F7550
  if (crb(c,2)) { goto L_804F755C; } // 804F7554
  c->r[11]=0u+0x00000000u; // 804F7558
L_804F755C:;
  cmps(c,0,(int32_t)c->r[11],0); // 804F755C
  if (crb(c,2)) { goto L_804F7568; } // 804F7560
  c->r[8]=0u+0x00000001u; // 804F7564
L_804F7568:;
  cmps(c,0,(int32_t)c->r[8],0); // 804F7568
  if (crb(c,2)) { goto L_804F765C; } // 804F756C
  c->r[8]=c->r[9]+0x000000BFu; // 804F7570
  c->r[0]=0u+0x000000C0u; // 804F7574
  c->r[8]=c->r[8]-c->r[10]; // 804F7578
  {uint32_t ea=c->r[2]+0x00001B50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F757C
  c->r[8]=divwu(c->r[8],c->r[0]); // 804F7580
  {uint32_t ea=c->r[2]+0x00001B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7584
  c->ctr=c->r[8]; // 804F7588
  cmpu(c,0,c->r[10],c->r[9]); // 804F758C
  if (!crb(c,0)) { goto L_804F765C; } // 804F7590
L_804F7594:;
  {uint32_t ea=c->r[10]+0x00000000u; WF32(ea,c->f[1]);} // 804F7594
  {uint32_t ea=c->r[10]+0x00000004u; WF32(ea,c->f[1]);} // 804F7598
  {uint32_t ea=c->r[10]+0x00000008u; WF32(ea,c->f[0]);} // 804F759C
  {uint32_t ea=c->r[10]+0x0000000Cu; WF32(ea,c->f[0]);} // 804F75A0
  {uint32_t ea=c->r[10]+0x00000010u; WF32(ea,c->f[0]);} // 804F75A4
  {uint32_t ea=c->r[10]+0x00000014u; WF32(ea,c->f[0]);} // 804F75A8
  {uint32_t ea=c->r[10]+0x00000018u; WF32(ea,c->f[1]);} // 804F75AC
  {uint32_t ea=c->r[10]+0x0000001Cu; WF32(ea,c->f[1]);} // 804F75B0
  {uint32_t ea=c->r[10]+0x00000020u; WF32(ea,c->f[0]);} // 804F75B4
  {uint32_t ea=c->r[10]+0x00000024u; WF32(ea,c->f[0]);} // 804F75B8
  {uint32_t ea=c->r[10]+0x00000028u; WF32(ea,c->f[0]);} // 804F75BC
  {uint32_t ea=c->r[10]+0x0000002Cu; WF32(ea,c->f[0]);} // 804F75C0
  {uint32_t ea=c->r[10]+0x00000030u; WF32(ea,c->f[1]);} // 804F75C4
  {uint32_t ea=c->r[10]+0x00000034u; WF32(ea,c->f[1]);} // 804F75C8
  {uint32_t ea=c->r[10]+0x00000038u; WF32(ea,c->f[0]);} // 804F75CC
  {uint32_t ea=c->r[10]+0x0000003Cu; WF32(ea,c->f[0]);} // 804F75D0
  {uint32_t ea=c->r[10]+0x00000040u; WF32(ea,c->f[0]);} // 804F75D4
  {uint32_t ea=c->r[10]+0x00000044u; WF32(ea,c->f[0]);} // 804F75D8
  {uint32_t ea=c->r[10]+0x00000048u; WF32(ea,c->f[1]);} // 804F75DC
  {uint32_t ea=c->r[10]+0x0000004Cu; WF32(ea,c->f[1]);} // 804F75E0
  {uint32_t ea=c->r[10]+0x00000050u; WF32(ea,c->f[0]);} // 804F75E4
  {uint32_t ea=c->r[10]+0x00000054u; WF32(ea,c->f[0]);} // 804F75E8
  {uint32_t ea=c->r[10]+0x00000058u; WF32(ea,c->f[0]);} // 804F75EC
  {uint32_t ea=c->r[10]+0x0000005Cu; WF32(ea,c->f[0]);} // 804F75F0
  {uint32_t ea=c->r[10]+0x00000060u; WF32(ea,c->f[1]);} // 804F75F4
  {uint32_t ea=c->r[10]+0x00000064u; WF32(ea,c->f[1]);} // 804F75F8
  {uint32_t ea=c->r[10]+0x00000068u; WF32(ea,c->f[0]);} // 804F75FC
  {uint32_t ea=c->r[10]+0x0000006Cu; WF32(ea,c->f[0]);} // 804F7600
  {uint32_t ea=c->r[10]+0x00000070u; WF32(ea,c->f[0]);} // 804F7604
  {uint32_t ea=c->r[10]+0x00000074u; WF32(ea,c->f[0]);} // 804F7608
  {uint32_t ea=c->r[10]+0x00000078u; WF32(ea,c->f[1]);} // 804F760C
  {uint32_t ea=c->r[10]+0x0000007Cu; WF32(ea,c->f[1]);} // 804F7610
  {uint32_t ea=c->r[10]+0x00000080u; WF32(ea,c->f[0]);} // 804F7614
  {uint32_t ea=c->r[10]+0x00000084u; WF32(ea,c->f[0]);} // 804F7618
  {uint32_t ea=c->r[10]+0x00000088u; WF32(ea,c->f[0]);} // 804F761C
  {uint32_t ea=c->r[10]+0x0000008Cu; WF32(ea,c->f[0]);} // 804F7620
  {uint32_t ea=c->r[10]+0x00000090u; WF32(ea,c->f[1]);} // 804F7624
  {uint32_t ea=c->r[10]+0x00000094u; WF32(ea,c->f[1]);} // 804F7628
  {uint32_t ea=c->r[10]+0x00000098u; WF32(ea,c->f[0]);} // 804F762C
  {uint32_t ea=c->r[10]+0x0000009Cu; WF32(ea,c->f[0]);} // 804F7630
  {uint32_t ea=c->r[10]+0x000000A0u; WF32(ea,c->f[0]);} // 804F7634
  {uint32_t ea=c->r[10]+0x000000A4u; WF32(ea,c->f[0]);} // 804F7638
  {uint32_t ea=c->r[10]+0x000000A8u; WF32(ea,c->f[1]);} // 804F763C
  {uint32_t ea=c->r[10]+0x000000ACu; WF32(ea,c->f[1]);} // 804F7640
  {uint32_t ea=c->r[10]+0x000000B0u; WF32(ea,c->f[0]);} // 804F7644
  {uint32_t ea=c->r[10]+0x000000B4u; WF32(ea,c->f[0]);} // 804F7648
  {uint32_t ea=c->r[10]+0x000000B8u; WF32(ea,c->f[0]);} // 804F764C
  {uint32_t ea=c->r[10]+0x000000BCu; WF32(ea,c->f[0]);} // 804F7650
  c->r[10]=c->r[10]+0x000000C0u; // 804F7654
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F7594; } // 804F7658
L_804F765C:;
  c->r[9]=c->r[1]+0x0000008Cu; // 804F765C
  c->r[0]=0u+0x00000018u; // 804F7660
  c->r[8]=c->r[9]+0x00000017u; // 804F7664
  {uint32_t ea=c->r[2]+0x00001B50u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7668
  c->r[8]=c->r[8]-c->r[10]; // 804F766C
  {uint32_t ea=c->r[2]+0x00001B4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7670
  c->r[8]=divwu(c->r[8],c->r[0]); // 804F7674
  c->ctr=c->r[8]; // 804F7678
  cmpu(c,0,c->r[10],c->r[9]); // 804F767C
  if (!crb(c,0)) { goto L_804F76A4; } // 804F7680
L_804F7684:;
  {uint32_t ea=c->r[10]+0x00000000u; WF32(ea,c->f[1]);} // 804F7684
  {uint32_t ea=c->r[10]+0x00000004u; WF32(ea,c->f[1]);} // 804F7688
  {uint32_t ea=c->r[10]+0x00000008u; WF32(ea,c->f[0]);} // 804F768C
  {uint32_t ea=c->r[10]+0x0000000Cu; WF32(ea,c->f[0]);} // 804F7690
  {uint32_t ea=c->r[10]+0x00000010u; WF32(ea,c->f[0]);} // 804F7694
  {uint32_t ea=c->r[10]+0x00000014u; WF32(ea,c->f[0]);} // 804F7698
  c->r[10]=c->r[10]+0x00000018u; // 804F769C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804F7684; } // 804F76A0
L_804F76A4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F76A4
  c->r[8]=c->r[1]+0x00000008u; // 804F76A8
  c->r[12]=R32(c->r[12]+0x00000018u); // 804F76AC
  c->ctr=c->r[12]; // 804F76B0
  if (true) { c->lr=0x804F76B8u; dispatch(c,c->ctr); } // 804F76B4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 804F76B8
  c->r[30]=R32(c->r[1]+0x00000098u); // 804F76BC
  c->r[29]=R32(c->r[1]+0x00000094u); // 804F76C0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804F76C4
  c->r[3]=R32(c->r[1]+0x00000028u); // 804F76C8
  c->lr=c->r[0]; // 804F76CC
  c->r[1]=c->r[1]+0x000000A0u; // 804F76D0
  return; // 804F76D4
}

// fn_804F76D8
void f_804F76D8(Ctx* __restrict c) {
  trace_call(0x804F76D8u);
  c->r[3]=0u+0x00000001u; // 804F76D8
  return; // 804F76DC
}

// fn_804F76E0
void f_804F76E0(Ctx* __restrict c) {
  trace_call(0x804F76E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F76E0
  c->r[0]=c->lr; // 804F76E4
  cmps(c,0,(int32_t)c->r[3],0); // 804F76E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F76EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F76F0
  c->r[31]=c->r[3]|c->r[3]; // 804F76F4
  if (crb(c,2)) { goto L_804F7708; } // 804F76F8
  cmps(c,0,(int32_t)c->r[4],0); // 804F76FC
  if (!crb(c,1)) { goto L_804F7708; } // 804F7700
  c->lr=0x804F7708u; f_803A9400(c); // 804F7704
L_804F7708:;
  c->r[3]=c->r[31]|c->r[31]; // 804F7708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F770C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7710
  c->lr=c->r[0]; // 804F7714
  c->r[1]=c->r[1]+0x00000010u; // 804F7718
  return; // 804F771C
}

// __ct__Q34nw4r3snd15Sound3DListenerFv
void f_804F7720(Ctx* __restrict c) {
  trace_call(0x804F7720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7720
  c->r[0]=c->lr; // 804F7724
  {uint32_t ea=c->r[2]+0x00001B58u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F7728
  c->r[4]=0u+0x00000000u; // 804F772C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7730
  c->r[0]=0u+0x00000001u; // 804F7734
  {uint32_t ea=c->r[2]+0x00001B5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F773C
  c->r[31]=c->r[3]|c->r[3]; // 804F7740
  {uint32_t ea=c->r[2]+0x00001B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7744
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 804F7748
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 804F774C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 804F7750
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 804F7754
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 804F7758
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 804F775C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 804F7760
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 804F7764
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 804F7768
  W32(c->r[3]+0x00000054u,c->r[4]); // 804F776C
  W8(c->r[3]+0x00000058u,c->r[0]); // 804F7770
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 804F7774
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 804F7778
  W32(c->r[3]+0x00000064u,c->r[4]); // 804F777C
  W32(c->r[3]+0x00000068u,c->r[4]); // 804F7780
  c->lr=0x804F7788u; f_804E1674(c); // 804F7784
  c->r[3]=c->r[31]|c->r[31]; // 804F7788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F778C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7790
  c->lr=c->r[0]; // 804F7794
  c->r[1]=c->r[1]+0x00000010u; // 804F7798
  return; // 804F779C
}

// fn_804F77A0
void f_804F77A0(Ctx* __restrict c) {
  trace_call(0x804F77A0u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F77A0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804F77A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F77A8
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 804F77AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F77B0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 804F77B4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804F77B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 804F77BC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804F77C0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F77C4
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[5]); // 804F77C8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F77CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 804F77D0
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F77D4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[5]); // 804F77D8
  {uint32_t ea=c->r[4]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 804F77DC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 804F77E0
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804F77E4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 804F77E8
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 804F77EC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804F77F0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804F77F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804F77F8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 804F77FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804F7800
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 804F7804
  W32(c->r[1]+0x00000028u,c->r[30]); // 804F7808
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[3]); // 804F780C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804F7810
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 804F7814
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804F7818
  c->r[0]=R8(c->r[3]+0x00000058u); // 804F781C
  c->f[1]=-c->f[1]; // 804F7820
  c->r[6]=R32(c->r[3]+0x00000034u); // 804F7824
  c->f[3]=-c->f[4]; // 804F7828
  c->r[7]=R32(c->r[3]+0x00000030u); // 804F782C
  c->r[5]=R32(c->r[3]+0x00000038u); // 804F7830
  c->f[0]=-c->f[0]; // 804F7834
  cmps(c,0,(int32_t)c->r[0],0); // 804F7838
  W32(c->r[1]+0x00000008u,c->r[7]); // 804F783C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 804F7840
  W32(c->r[1]+0x00000010u,c->r[5]); // 804F7844
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 804F7848
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 804F784C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 804F7850
  if (crb(c,2)) { goto L_804F78C4; } // 804F7854
  c->r[31]=R32(c->r[4]+0x00000000u); // 804F7858
  c->r[0]=0u+0x00000000u; // 804F785C
  c->r[30]=R32(c->r[4]+0x00000004u); // 804F7860
  c->r[29]=R32(c->r[4]+0x00000008u); // 804F7864
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 804F7868
  c->r[11]=R32(c->r[4]+0x00000010u); // 804F786C
  c->r[10]=R32(c->r[4]+0x00000014u); // 804F7870
  c->r[9]=R32(c->r[4]+0x00000018u); // 804F7874
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 804F7878
  c->r[7]=R32(c->r[4]+0x00000020u); // 804F787C
  c->r[6]=R32(c->r[4]+0x00000024u); // 804F7880
  c->r[5]=R32(c->r[4]+0x00000028u); // 804F7884
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 804F7888
  W32(c->r[3]+0x00000000u,c->r[31]); // 804F788C
  W32(c->r[3]+0x00000004u,c->r[30]); // 804F7890
  W32(c->r[3]+0x00000008u,c->r[29]); // 804F7894
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 804F7898
  W32(c->r[3]+0x00000010u,c->r[11]); // 804F789C
  W32(c->r[3]+0x00000014u,c->r[10]); // 804F78A0
  W32(c->r[3]+0x00000018u,c->r[9]); // 804F78A4
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 804F78A8
  W32(c->r[3]+0x00000020u,c->r[7]); // 804F78AC
  W32(c->r[3]+0x00000024u,c->r[6]); // 804F78B0
  W32(c->r[3]+0x00000028u,c->r[5]); // 804F78B4
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 804F78B8
  W8(c->r[3]+0x00000058u,c->r[0]); // 804F78BC
  goto L_804F7944; // 804F78C0
L_804F78C4:;
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,2,ea,0,0);} // 804F78C4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,0,0);} // 804F78C8
  c->r[29]=R32(c->r[4]+0x00000000u); // 804F78CC
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F78D0
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,2,ea,1,0);} // 804F78D4
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,1,ea,1,0);} // 804F78D8
  c->r[30]=R32(c->r[4]+0x00000004u); // 804F78DC
  {uint32_t ea=c->r[3]+0x0000003Cu; psq_store(c,0,ea,0,0);} // 804F78E0
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804F78E4
  c->r[31]=R32(c->r[4]+0x00000008u); // 804F78E8
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 804F78EC
  c->r[11]=R32(c->r[4]+0x00000010u); // 804F78F0
  c->r[10]=R32(c->r[4]+0x00000014u); // 804F78F4
  c->r[9]=R32(c->r[4]+0x00000018u); // 804F78F8
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 804F78FC
  c->r[7]=R32(c->r[4]+0x00000020u); // 804F7900
  c->r[6]=R32(c->r[4]+0x00000024u); // 804F7904
  c->r[5]=R32(c->r[4]+0x00000028u); // 804F7908
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 804F790C
  W32(c->r[3]+0x00000000u,c->r[29]); // 804F7910
  W32(c->r[3]+0x00000004u,c->r[30]); // 804F7914
  W32(c->r[3]+0x00000008u,c->r[31]); // 804F7918
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 804F791C
  W32(c->r[3]+0x00000010u,c->r[11]); // 804F7920
  W32(c->r[3]+0x00000014u,c->r[10]); // 804F7924
  W32(c->r[3]+0x00000018u,c->r[9]); // 804F7928
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 804F792C
  W32(c->r[3]+0x00000020u,c->r[7]); // 804F7930
  W32(c->r[3]+0x00000024u,c->r[6]); // 804F7934
  W32(c->r[3]+0x00000028u,c->r[5]); // 804F7938
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 804F793C
  {uint32_t ea=c->r[3]+0x00000044u; psq_store(c,0,ea,1,0);} // 804F7940
L_804F7944:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804F7944
  c->r[30]=R32(c->r[1]+0x00000028u); // 804F7948
  c->r[29]=R32(c->r[1]+0x00000024u); // 804F794C
  c->r[1]=c->r[1]+0x00000030u; // 804F7950
  return; // 804F7954
}

// fn_804F7958
void f_804F7958(Ctx* __restrict c) {
  trace_call(0x804F7958u);
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 804F7958
  return; // 804F795C
}

// fn_804F7960
void f_804F7960(Ctx* __restrict c) {
  trace_call(0x804F7960u);
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 804F7960
  return; // 804F7964
}

// fn_804F7968
void f_804F7968(Ctx* __restrict c) {
  trace_call(0x804F7968u);
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 804F7968
  return; // 804F796C
}

// fn_804F7970
void f_804F7970(Ctx* __restrict c) {
  trace_call(0x804F7970u);
  c->r[5]=0u+0x00000000u; // 804F7970
  c->r[7]=0u+0x80720000u; // 804F7974
  c->r[7]=c->r[7]+0xFFFFB9C8u; // 804F7978
  {uint32_t ea=c->r[2]+0x00001B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F797C
  c->r[4]=0u+0x80830000u; // 804F7980
  {uint32_t ea=c->r[2]+0x00001B6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7984
  c->r[6]=c->r[7]+0x00000018u; // 804F7988
  c->r[0]=0u+0x00000020u; // 804F798C
  c->r[4]=c->r[4]+0xFFFF89ECu; // 804F7990
  W32(c->r[3]+0x00000010u,c->r[5]); // 804F7994
  c->r[8]=c->r[3]+0x00000010u; // 804F7998
  W32(c->r[3]+0x00000014u,c->r[5]); // 804F799C
  W32(c->r[3]+0x00000000u,c->r[7]); // 804F79A0
  W32(c->r[3]+0x00000004u,c->r[6]); // 804F79A4
  W32(c->r[3]+0x00000008u,c->r[5]); // 804F79A8
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 804F79AC
  W32(c->r[3]+0x00000010u,c->r[8]); // 804F79B0
  W32(c->r[3]+0x00000014u,c->r[8]); // 804F79B4
  W32(c->r[3]+0x00000018u,c->r[4]); // 804F79B8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804F79BC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 804F79C0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 804F79C4
  W32(c->r[3]+0x00000028u,c->r[5]); // 804F79C8
  return; // 804F79CC
}

// fn_804F79D0
void f_804F79D0(Ctx* __restrict c) {
  trace_call(0x804F79D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F79D0
  c->r[0]=c->lr; // 804F79D4
  c->r[3]=c->r[4]|c->r[4]; // 804F79D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804F79DC
  c->r[4]=c->r[1]+0x00000008u; // 804F79E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804F79E4
  c->r[31]=0u+0x00000000u; // 804F79E8
  c->lr=0x804F79F0u; f_804F7F6C(c); // 804F79EC
  cmps(c,0,(int32_t)c->r[3],0); // 804F79F0
  if (crb(c,2)) { goto L_804F7A0C; } // 804F79F4
  c->r[4]=R32(c->r[1]+0x00000008u); // 804F79F8
  c->r[3]=R32(c->r[1]+0x00000010u); // 804F79FC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804F7A00
  c->r[31]=c->r[4]+c->r[3]; // 804F7A04
  c->r[31]=c->r[31]+c->r[0]; // 804F7A08
L_804F7A0C:;
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)40); // 804F7A0C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804F7A10
  c->r[0]=R32(c->r[1]+0x00000034u); // 804F7A14
  c->lr=c->r[0]; // 804F7A18
  c->r[1]=c->r[1]+0x00000030u; // 804F7A1C
  return; // 804F7A20
}

// fn_804F7A24
void f_804F7A24(Ctx* __restrict c) {
  trace_call(0x804F7A24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7A24
  c->r[0]=c->lr; // 804F7A28
  c->r[4]=c->r[5]|c->r[5]; // 804F7A2C
  c->r[5]=c->r[6]|c->r[6]; // 804F7A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7A34
  c->r[6]=0u+0x00000028u; // 804F7A38
  c->r[3]=c->r[3]+0x00000008u; // 804F7A3C
  c->lr=0x804F7A44u; f_804F0AC8(c); // 804F7A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7A44
  c->r[3]=0u+0x00000001u; // 804F7A48
  c->lr=c->r[0]; // 804F7A4C
  c->r[1]=c->r[1]+0x00000010u; // 804F7A50
  return; // 804F7A54
}

// detail_UpdateAmbientParam__Q34nw4r3snd14Sound3DManagerFPCvUliPQ34nw4r3snd17SoundAmbientParam
void f_804F7A58(Ctx* __restrict c) {
  trace_call(0x804F7A58u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804F7A58
  c->r[12]=c->r[3]|c->r[3]; // 804F7A5C
  c->r[9]=c->r[4]|c->r[4]; // 804F7A60
  c->r[11]=c->r[5]|c->r[5]; // 804F7A64
  cmps(c,0,(int32_t)c->r[0],0); // 804F7A68
  c->r[10]=c->r[6]|c->r[6]; // 804F7A6C
  c->r[8]=c->r[7]|c->r[7]; // 804F7A70
  if (crb(c,2)) return; // 804F7A74
  c->r[3]=c->r[0]|c->r[0]; // 804F7A78
  c->r[4]=c->r[12]|c->r[12]; // 804F7A7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F7A80
  c->r[5]=c->r[9]|c->r[9]; // 804F7A84
  c->r[6]=c->r[11]|c->r[11]; // 804F7A88
  c->r[7]=c->r[10]|c->r[10]; // 804F7A8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804F7A90
  c->ctr=c->r[12]; // 804F7A94
  if (true) { dispatch(c,c->ctr); return; } // 804F7A98
  return; // 804F7A9C
}

// fn_804F7AA0
void f_804F7AA0(Ctx* __restrict c) {
  trace_call(0x804F7AA0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804F7AA0
  c->r[8]=c->r[3]|c->r[3]; // 804F7AA4
  c->r[7]=c->r[4]|c->r[4]; // 804F7AA8
  c->r[6]=c->r[5]|c->r[5]; // 804F7AAC
  cmps(c,0,(int32_t)c->r[0],0); // 804F7AB0
  c->r[3]=0u+0x00000000u; // 804F7AB4
  if (crb(c,2)) return; // 804F7AB8
  c->r[3]=c->r[0]|c->r[0]; // 804F7ABC
  c->r[4]=c->r[8]|c->r[8]; // 804F7AC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F7AC4
  c->r[5]=c->r[7]|c->r[7]; // 804F7AC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804F7ACC
  c->ctr=c->r[12]; // 804F7AD0
  if (true) { dispatch(c,c->ctr); return; } // 804F7AD4
  return; // 804F7AD8
}

// fn_804F7ADC
void f_804F7ADC(Ctx* __restrict c) {
  trace_call(0x804F7ADCu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804F7ADC
  c->r[8]=c->r[3]|c->r[3]; // 804F7AE0
  c->r[7]=c->r[4]|c->r[4]; // 804F7AE4
  c->r[6]=c->r[5]|c->r[5]; // 804F7AE8
  cmps(c,0,(int32_t)c->r[0],0); // 804F7AEC
  c->r[3]=0u+0x00000001u; // 804F7AF0
  if (crb(c,2)) return; // 804F7AF4
  c->r[3]=c->r[0]|c->r[0]; // 804F7AF8
  c->r[4]=c->r[8]|c->r[8]; // 804F7AFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F7B00
  c->r[5]=c->r[7]|c->r[7]; // 804F7B04
  c->r[12]=R32(c->r[12]+0x00000014u); // 804F7B08
  c->ctr=c->r[12]; // 804F7B0C
  if (true) { dispatch(c,c->ctr); return; } // 804F7B10
  return; // 804F7B14
}

// fn_804F7B18
void f_804F7B18(Ctx* __restrict c) {
  trace_call(0x804F7B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7B18
  c->r[0]=c->lr; // 804F7B1C
  cmpu(c,0,c->r[4],0x00000028u); // 804F7B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7B24
  if (crb(c,2)) { goto L_804F7B34; } // 804F7B28
  c->r[3]=0u+0x00000000u; // 804F7B2C
  goto L_804F7B74; // 804F7B30
L_804F7B34:;
  c->r[3]=c->r[3]+0x00000008u; // 804F7B34
  c->lr=0x804F7B3Cu; f_804F0CDC(c); // 804F7B38
  cmps(c,0,(int32_t)c->r[3],0); // 804F7B3C
  if (!crb(c,2)) { goto L_804F7B4C; } // 804F7B40
  c->r[3]=0u+0x00000000u; // 804F7B44
  goto L_804F7B74; // 804F7B48
L_804F7B4C:;
  if (crb(c,2)) { goto L_804F7B74; } // 804F7B4C
  c->r[5]=0u+0x00000000u; // 804F7B50
  c->r[4]=0u+0x00000001u; // 804F7B54
  W32(c->r[3]+0x00000018u,c->r[5]); // 804F7B58
  c->r[0]=0u+0x00000080u; // 804F7B5C
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 804F7B60
  W8(c->r[3]+0x0000001Du,c->r[0]); // 804F7B64
  W8(c->r[3]+0x0000001Eu,c->r[5]); // 804F7B68
  W32(c->r[3]+0x00000020u,c->r[5]); // 804F7B6C
  W32(c->r[3]+0x00000024u,c->r[5]); // 804F7B70
L_804F7B74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7B74
  c->lr=c->r[0]; // 804F7B78
  c->r[1]=c->r[1]+0x00000010u; // 804F7B7C
  return; // 804F7B80
}

// fn_804F7B84
void f_804F7B84(Ctx* __restrict c) {
  trace_call(0x804F7B84u);
  cmps(c,0,(int32_t)c->r[4],0); // 804F7B84
  if (crb(c,2)) return; // 804F7B88
  c->r[3]=c->r[3]+0x00000008u; // 804F7B8C
  f_804F0D38(c); return; // 804F7B90
  return; // 804F7B94
}

// __ct__Q34nw4r3snd12Sound3DParamFv
void f_804F7B98(Ctx* __restrict c) {
  trace_call(0x804F7B98u);
  c->r[5]=0u+0x00000000u; // 804F7B98
  c->r[4]=0u+0x00000001u; // 804F7B9C
  c->r[0]=0u+0x00000080u; // 804F7BA0
  W32(c->r[3]+0x00000018u,c->r[5]); // 804F7BA4
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 804F7BA8
  W8(c->r[3]+0x0000001Du,c->r[0]); // 804F7BAC
  W8(c->r[3]+0x0000001Eu,c->r[5]); // 804F7BB0
  W32(c->r[3]+0x00000020u,c->r[5]); // 804F7BB4
  W32(c->r[3]+0x00000024u,c->r[5]); // 804F7BB8
  return; // 804F7BBC
}

// fn_804F7BC0
void f_804F7BC0(Ctx* __restrict c) {
  trace_call(0x804F7BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7BC0
  c->r[0]=c->lr; // 804F7BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F7BCC
  c->r[31]=0u+0x80830000u; // 804F7BD0
  c->r[3]=c->r[31]+0xFFFF89ECu; // 804F7BD4
  c->lr=0x804F7BDCu; f_804F7200(c); // 804F7BD8
  c->r[4]=0u+0x804F0000u; // 804F7BDC
  c->r[5]=0u+0x80830000u; // 804F7BE0
  c->r[3]=c->r[31]+0xFFFF89ECu; // 804F7BE4
  c->r[4]=c->r[4]+0x000076E0u; // 804F7BE8
  c->r[5]=c->r[5]+0xFFFF89E0u; // 804F7BEC
  c->lr=0x804F7BF4u; f_803A92B8(c); // 804F7BF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F7BF8
  c->lr=c->r[0]; // 804F7BFC
  c->r[1]=c->r[1]+0x00000010u; // 804F7C00
  return; // 804F7C04
}

// fn_804F7C08
void f_804F7C08(Ctx* __restrict c) {
  trace_call(0x804F7C08u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 804F7C08
  f_804F7B84(c); return; // 804F7C0C
}

// fn_804F7C10
void f_804F7C10(Ctx* __restrict c) {
  trace_call(0x804F7C10u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 804F7C10
  f_804F7B18(c); return; // 804F7C14
}

// fn_804F7C18
void f_804F7C18(Ctx* __restrict c) {
  trace_call(0x804F7C18u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 804F7C18
  f_802A335C(c); return; // 804F7C1C
}

// fn_804F7C20
void f_804F7C20(Ctx* __restrict c) {
  trace_call(0x804F7C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7C20
  c->r[0]=c->lr; // 804F7C24
  c->r[6]=0u+0x80720000u; // 804F7C28
  c->r[5]=0u+0x804F0000u; // 804F7C2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F7C30
  c->r[6]=c->r[6]+0xFFFFBA00u; // 804F7C34
  c->r[5]=c->r[5]+0xFFFFE588u; // 804F7C38
  c->r[7]=0u+0x00000004u; // 804F7C3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F7C40
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F7C44
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F7C48
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F7C4C
  c->r[28]=c->r[3]|c->r[3]; // 804F7C50
  W32(c->r[3]+0x00000004u,c->r[4]); // 804F7C54
  c->r[4]=0u+0x804F0000u; // 804F7C58
  c->r[4]=c->r[4]+0xFFFFE560u; // 804F7C5C
  W32(c->r[3]+0x00000000u,c->r[6]); // 804F7C60
  c->r[6]=0u+0x00000010u; // 804F7C64
  c->r[3]=c->r[3]+0x00000008u; // 804F7C68
  c->lr=0x804F7C70u; f_803A9830(c); // 804F7C6C
  {uint32_t ea=c->r[2]+0x00001B70u; c->f[1]=c->ps1[1]=RF32(ea);} // 804F7C70
  c->r[29]=0u+0x00000000u; // 804F7C74
  {uint32_t ea=c->r[2]+0x00001B74u; c->f[0]=c->ps1[0]=RF32(ea);} // 804F7C78
  c->r[30]=0u+0x00000000u; // 804F7C7C
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[1]);} // 804F7C80
  c->r[31]=0u+0x80000000u; // 804F7C84
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[1]);} // 804F7C88
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 804F7C8C
L_804F7C90:;
  cmps(c,0,(int32_t)c->r[29],0); // 804F7C90
  c->r[3]=c->r[28]+c->r[30]; // 804F7C94
  c->r[3]=c->r[3]+0x00000008u; // 804F7C98
  c->r[4]=0u+0x00000001u; // 804F7C9C
  if (!crb(c,2)) { goto L_804F7CA8; } // 804F7CA0
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 804F7CA4
L_804F7CA8:;
  c->lr=0x804F7CACu; f_804EE884(c); // 804F7CA8
  c->r[29]=c->r[29]+0x00000001u; // 804F7CAC
  c->r[30]=c->r[30]+0x00000010u; // 804F7CB0
  cmps(c,0,(int32_t)c->r[29],4); // 804F7CB4
  if (crb(c,0)) { IRQCHK(c); goto L_804F7C90; } // 804F7CB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F7CBC
  c->r[3]=c->r[28]|c->r[28]; // 804F7CC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F7CC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F7CC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F7CCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F7CD0
  c->lr=c->r[0]; // 804F7CD4
  c->r[1]=c->r[1]+0x00000020u; // 804F7CD8
  return; // 804F7CDC
}

// fn_804F7CE0
void f_804F7CE0(Ctx* __restrict c) {
  trace_call(0x804F7CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7CE0
  c->r[0]=c->lr; // 804F7CE4
  cmps(c,0,(int32_t)c->r[3],0); // 804F7CE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F7CEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F7CF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F7CF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F7CF8
  c->r[29]=c->r[4]|c->r[4]; // 804F7CFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804F7D00
  c->r[28]=c->r[3]|c->r[3]; // 804F7D04
  if (crb(c,2)) { goto L_804F7D64; } // 804F7D08
  c->r[4]=0u+0x80720000u; // 804F7D0C
  c->r[31]=c->r[3]+0x00000008u; // 804F7D10
  c->r[4]=c->r[4]+0xFFFFBA00u; // 804F7D14
  c->r[30]=0u+0x00000000u; // 804F7D18
  W32(c->r[3]+0x00000000u,c->r[4]); // 804F7D1C
L_804F7D20:;
  c->r[3]=c->r[31]|c->r[31]; // 804F7D20
  c->r[4]=c->r[28]|c->r[28]; // 804F7D24
  c->lr=0x804F7D2Cu; f_804EE684(c); // 804F7D28
  c->r[30]=c->r[30]+0x00000001u; // 804F7D2C
  c->r[31]=c->r[31]+0x00000010u; // 804F7D30
  cmps(c,0,(int32_t)c->r[30],4); // 804F7D34
  if (crb(c,0)) { IRQCHK(c); goto L_804F7D20; } // 804F7D38
  c->r[4]=0u+0x804F0000u; // 804F7D3C
  c->r[3]=c->r[28]+0x00000008u; // 804F7D40
  c->r[4]=c->r[4]+0xFFFFE588u; // 804F7D44
  c->r[5]=0u+0x00000010u; // 804F7D48
  c->r[6]=0u+0x00000004u; // 804F7D4C
  c->lr=0x804F7D54u; f_803A9928(c); // 804F7D50
  cmps(c,0,(int32_t)c->r[29],0); // 804F7D54
  if (!crb(c,1)) { goto L_804F7D64; } // 804F7D58
  c->r[3]=c->r[28]|c->r[28]; // 804F7D5C
  c->lr=0x804F7D64u; f_803A9400(c); // 804F7D60
L_804F7D64:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F7D64
  c->r[3]=c->r[28]|c->r[28]; // 804F7D68
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F7D6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F7D70
  c->r[28]=R32(c->r[1]+0x00000010u); // 804F7D74
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F7D78
  c->lr=c->r[0]; // 804F7D7C
  c->r[1]=c->r[1]+0x00000020u; // 804F7D80
  return; // 804F7D84
}

// StopAllSound__Q34nw4r3snd10SoundActorFi
void f_804F7D88(Ctx* __restrict c) {
  trace_call(0x804F7D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7D88
  c->r[0]=c->lr; // 804F7D8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804F7D90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804F7D94
  c->r[31]=c->r[3]+0x00000008u; // 804F7D98
  W32(c->r[1]+0x00000018u,c->r[30]); // 804F7D9C
  c->r[30]=0u+0x00000000u; // 804F7DA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804F7DA4
  c->r[29]=c->r[4]|c->r[4]; // 804F7DA8
L_804F7DAC:;
  c->r[3]=c->r[31]|c->r[31]; // 804F7DAC
  c->r[4]=c->r[29]|c->r[29]; // 804F7DB0
  c->lr=0x804F7DB8u; f_804EE624(c); // 804F7DB4
  c->r[30]=c->r[30]+0x00000001u; // 804F7DB8
  c->r[31]=c->r[31]+0x00000010u; // 804F7DBC
  cmps(c,0,(int32_t)c->r[30],4); // 804F7DC0
  if (crb(c,0)) { IRQCHK(c); goto L_804F7DAC; } // 804F7DC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804F7DC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804F7DCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804F7DD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804F7DD4
  c->lr=c->r[0]; // 804F7DD8
  c->r[1]=c->r[1]+0x00000020u; // 804F7DDC
  return; // 804F7DE0
}

// fn_804F7DE4
void f_804F7DE4(Ctx* __restrict c) {
  trace_call(0x804F7DE4u);
  c->r[8]=c->r[7]|c->r[7]; // 804F7DE4
  c->r[7]=c->r[3]|c->r[3]; // 804F7DE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7DEC
  c->r[9]=c->r[6]|c->r[6]; // 804F7DF0
  c->r[8]=R8(c->r[8]+0x00000000u); // 804F7DF4
  c->r[6]=0u+0x00000000u; // 804F7DF8
  f_804FAFD0(c); return; // 804F7DFC
}

// fn_804F7E00
void f_804F7E00(Ctx* __restrict c) {
  trace_call(0x804F7E00u);
  c->r[0]=c->r[3]|c->r[3]; // 804F7E00
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7E04
  c->r[9]=c->r[6]|c->r[6]; // 804F7E08
  c->r[6]=c->r[7]|c->r[7]; // 804F7E0C
  c->r[8]=R8(c->r[8]+0x00000000u); // 804F7E10
  c->r[7]=c->r[0]|c->r[0]; // 804F7E14
  f_804FAFD0(c); return; // 804F7E18
}

// fn_804F7E1C
void f_804F7E1C(Ctx* __restrict c) {
  trace_call(0x804F7E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7E1C
  c->r[0]=c->lr; // 804F7E20
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7E24
  c->r[0]=c->r[6]|c->r[6]; // 804F7E28
  c->r[6]=c->r[7]|c->r[7]; // 804F7E2C
  c->r[7]=c->r[1]+0x00000008u; // 804F7E30
  W8(c->r[1]+0x00000008u,c->r[0]); // 804F7E34
  c->r[12]=R32(c->r[3]+0x00000000u); // 804F7E38
  c->r[12]=R32(c->r[12]+0x00000014u); // 804F7E3C
  c->ctr=c->r[12]; // 804F7E40
  if (true) { c->lr=0x804F7E48u; dispatch(c,c->ctr); } // 804F7E44
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7E48
  c->lr=c->r[0]; // 804F7E4C
  c->r[1]=c->r[1]+0x00000010u; // 804F7E50
  return; // 804F7E54
}

// fn_804F7E58
void f_804F7E58(Ctx* __restrict c) {
  trace_call(0x804F7E58u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7E58
  c->r[12]=R32(c->r[3]+0x00000008u); // 804F7E5C
  c->r[12]=R32(c->r[12]+0x00000028u); // 804F7E60
  c->ctr=c->r[12]; // 804F7E64
  if (true) { dispatch(c,c->ctr); return; } // 804F7E68
}

// fn_804F7E6C
void f_804F7E6C(Ctx* __restrict c) {
  trace_call(0x804F7E6Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804F7E6C
  f_804F7F24(c); return; // 804F7E70
}

// __ct__Q34nw4r3snd12SoundArchiveFv
void f_804F7E74(Ctx* __restrict c) {
  trace_call(0x804F7E74u);
  c->r[5]=0u+0x80720000u; // 804F7E74
  c->r[4]=0u+0x00000000u; // 804F7E78
  c->r[5]=c->r[5]+0xFFFFBA20u; // 804F7E7C
  c->r[0]=0u+0x0000002Fu; // 804F7E80
  W32(c->r[3]+0x00000000u,c->r[5]); // 804F7E84
  W32(c->r[3]+0x00000004u,c->r[4]); // 804F7E88
  W8(c->r[3]+0x00000008u,c->r[0]); // 804F7E8C
  W8(c->r[3]+0x00000009u,c->r[4]); // 804F7E90
  return; // 804F7E94
}

// fn_804F7E98
void f_804F7E98(Ctx* __restrict c) {
  trace_call(0x804F7E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804F7E98
  c->r[0]=c->lr; // 804F7E9C
  cmps(c,0,(int32_t)c->r[3],0); // 804F7EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804F7EA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804F7EA8
  c->r[31]=c->r[3]|c->r[3]; // 804F7EAC
  if (crb(c,2)) { goto L_804F7EC0; } // 804F7EB0
  cmps(c,0,(int32_t)c->r[4],0); // 804F7EB4
  if (!crb(c,1)) { goto L_804F7EC0; } // 804F7EB8
  c->lr=0x804F7EC0u; f_803A9400(c); // 804F7EBC
L_804F7EC0:;
  c->r[3]=c->r[31]|c->r[31]; // 804F7EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804F7EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804F7EC8
  c->lr=c->r[0]; // 804F7ECC
  c->r[1]=c->r[1]+0x00000010u; // 804F7ED0
  return; // 804F7ED4
}

// fn_804F7ED8
void f_804F7ED8(Ctx* __restrict c) {
  trace_call(0x804F7ED8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7ED8
  c->r[0]=0u-c->r[3]; // 804F7EDC
  c->r[0]=c->r[0]|c->r[3]; // 804F7EE0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804F7EE4
  return; // 804F7EE8
}

// fn_804F7EEC
void f_804F7EEC(Ctx* __restrict c) {
  trace_call(0x804F7EECu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 804F7EEC
  return; // 804F7EF0
}

// Shutdown__Q34nw4r3snd12SoundArchiveFv
void f_804F7EF4(Ctx* __restrict c) {
  trace_call(0x804F7EF4u);
  c->r[4]=0u+0x00000000u; // 804F7EF4
  c->r[0]=0u+0x0000002Fu; // 804F7EF8
  W32(c->r[3]+0x00000004u,c->r[4]); // 804F7EFC
  W8(c->r[3]+0x00000008u,c->r[0]); // 804F7F00
  W8(c->r[3]+0x00000009u,c->r[4]); // 804F7F04
  return; // 804F7F08
}

// GetPlayerCount__Q34nw4r3snd12SoundArchiveCFv
void f_804F7F0C(Ctx* __restrict c) {
  trace_call(0x804F7F0Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F0C
  f_804F9018(c); return; // 804F7F10
}

// GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
void f_804F7F14(Ctx* __restrict c) {
  trace_call(0x804F7F14u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F14
  f_804F9058(c); return; // 804F7F18
}

// fn_804F7F1C
void f_804F7F1C(Ctx* __restrict c) {
  trace_call(0x804F7F1Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F1C
  f_804F909C(c); return; // 804F7F20
}

// ConvertLabelStringToSoundId__Q34nw4r3snd12SoundArchiveCFPCc
void f_804F7F24(Ctx* __restrict c) {
  trace_call(0x804F7F24u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F24
  c->r[5]=c->r[4]|c->r[4]; // 804F7F28
  c->r[4]=R32(c->r[3]+0x00000034u); // 804F7F2C
  f_804F9494(c); return; // 804F7F30
}

// fn_804F7F34
void f_804F7F34(Ctx* __restrict c) {
  trace_call(0x804F7F34u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F34
  f_804F917C(c); return; // 804F7F38
}

// GetSoundType__Q34nw4r3snd12SoundArchiveCFUl
void f_804F7F3C(Ctx* __restrict c) {
  trace_call(0x804F7F3Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F3C
  f_804F8608(c); return; // 804F7F40
}

// ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo
void f_804F7F44(Ctx* __restrict c) {
  trace_call(0x804F7F44u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F44
  f_804F86F8(c); return; // 804F7F48
}

// detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
void f_804F7F4C(Ctx* __restrict c) {
  trace_call(0x804F7F4Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F4C
  f_804F892C(c); return; // 804F7F50
}

// detail_ReadStrmSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo
void f_804F7F54(Ctx* __restrict c) {
  trace_call(0x804F7F54u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F54
  f_804F8A10(c); return; // 804F7F58
}

// detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo_804F7F5C
void f_804F7F5C(Ctx* __restrict c) {
  trace_call(0x804F7F5Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F5C
  f_804F8B14(c); return; // 804F7F60
}

// ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
void f_804F7F64(Ctx* __restrict c) {
  trace_call(0x804F7F64u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F64
  f_804F8C94(c); return; // 804F7F68
}

// ReadBankInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8BankInfo
void f_804F7F6C(Ctx* __restrict c) {
  trace_call(0x804F7F6Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F6C
  f_804F8F94(c); return; // 804F7F70
}

// fn_804F7F74
void f_804F7F74(Ctx* __restrict c) {
  trace_call(0x804F7F74u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F74
  f_804F8820(c); return; // 804F7F78
}

// detail_ReadGroupInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
void f_804F7F7C(Ctx* __restrict c) {
  trace_call(0x804F7F7Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F7C
  f_804F8BE8(c); return; // 804F7F80
}

// fn_804F7F84
void f_804F7F84(Ctx* __restrict c) {
  trace_call(0x804F7F84u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F84
  f_804F8D4C(c); return; // 804F7F88
}

// fn_804F7F8C
void f_804F7F8C(Ctx* __restrict c) {
  trace_call(0x804F7F8Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F8C
  f_804F8E5C(c); return; // 804F7F90
}

// fn_804F7F94
void f_804F7F94(Ctx* __restrict c) {
  trace_call(0x804F7F94u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F94
  f_804F9234(c); return; // 804F7F98
}

// fn_804F7F9C
void f_804F7F9C(Ctx* __restrict c) {
  trace_call(0x804F7F9Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804F7F9C
  f_804F9274(c); return; // 804F7FA0
}

