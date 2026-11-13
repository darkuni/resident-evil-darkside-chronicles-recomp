#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8005E348
void f_8005E348(Ctx* __restrict c) {
  trace_call(0x8005E348u);
  return; // 8005E348
}

// fn_8005E34C
void f_8005E34C(Ctx* __restrict c) {
  trace_call(0x8005E34Cu);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8005E34C
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8005E350
  c->ctr=c->r[12]; // 8005E354
  if (true) { dispatch(c,c->ctr); return; } // 8005E358
}

// fn_8005E35C
void f_8005E35C(Ctx* __restrict c) {
  trace_call(0x8005E35Cu);
  return; // 8005E35C
}

// fn_8005E360
void f_8005E360(Ctx* __restrict c) {
  trace_call(0x8005E360u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E360
  c->r[0]=c->lr; // 8005E364
  W32(c->r[1]+0x00000044u,c->r[0]); // 8005E368
  c->r[11]=c->r[1]+0x00000040u; // 8005E36C
  c->lr=0x8005E374u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005E370
  c->r[31]=c->r[1]|c->r[1]; // 8005E374
  c->r[28]=c->r[3]|c->r[3]; // 8005E378
  c->r[29]=c->r[4]|c->r[4]; // 8005E37C
  c->lr=0x8005E384u; f_80062C30(c); // 8005E380
  cmps(c,0,(int32_t)c->r[3],0); // 8005E384
  if (crb(c,2)) { goto L_8005E49C; } // 8005E388
  c->lr=0x8005E390u; f_8005E4BC(c); // 8005E38C
  c->r[4]=c->r[3]|c->r[3]; // 8005E390
  c->r[3]=c->r[28]|c->r[28]; // 8005E394
  c->lr=0x8005E39Cu; f_80062F4C(c); // 8005E398
  c->r[0]=R8(c->r[28]+0x00000010u); // 8005E39C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8005E3A0
  c->r[3]=c->r[28]+c->r[0]; // 8005E3A4
  c->r[30]=R32(c->r[3]+0x00000014u); // 8005E3A8
  cmps(c,0,(int32_t)c->r[30],0); // 8005E3AC
  if (crb(c,2)) { goto L_8005E428; } // 8005E3B0
  c->r[27]=0u+0x00000000u; // 8005E3B4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8005E3B8
  W8(c->r[31]+0x00000008u,c->r[27]); // 8005E3BC
  c->lr=0x8005E3C4u; f_8005E4BC(c); // 8005E3C0
  W32(c->r[30]+0x00000000u,c->r[3]); // 8005E3C4
  c->r[0]=c->r[13]+0xFFFF80A8u; // 8005E3C8
  W32(c->r[30]+0x00000004u,c->r[0]); // 8005E3CC
  W32(c->r[30]+0x00000008u,c->r[27]); // 8005E3D0
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 8005E3D4
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8005E3D8
  W8(c->r[31]+0x0000000Cu,c->r[27]); // 8005E3DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005E3E0
  if (!crb(c,2)) { goto L_8005E404; } // 8005E3E4
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8005E3E8
  c->r[0]=0u+0x00000001u; // 8005E3EC
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8005E3F0
  c->r[3]=c->r[4]+0x00000001u; // 8005E3F4
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8005E3F8
  W32(c->r[13]+0xFFFFBD34u,c->r[4]); // 8005E3FC
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 8005E400
L_8005E404:;
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 8005E404
  c->r[3]=c->r[13]+0xFFFF80B8u; // 8005E408
  W32(c->r[30]+0x00000010u,c->r[0]); // 8005E40C
  c->r[0]=0u+0x00000000u; // 8005E410
  W32(c->r[30]+0x00000014u,c->r[3]); // 8005E414
  W32(c->r[30]+0x00000018u,c->r[0]); // 8005E418
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8005E41C
  W32(c->r[30]+0x00000020u,c->r[0]); // 8005E420
  W32(c->r[30]+0x00000038u,c->r[0]); // 8005E424
L_8005E428:;
  W32(c->r[28]+0x00000008u,c->r[30]); // 8005E428
  c->r[0]=0u+0x00000000u; // 8005E42C
  c->r[3]=c->r[28]|c->r[28]; // 8005E430
  c->r[6]=c->r[30]|c->r[30]; // 8005E434
  W32(c->r[30]+0x00000008u,c->r[0]); // 8005E438
  c->r[0]=R32(c->r[28]+0x00000004u); // 8005E43C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8005E440
  c->r[4]=R32(c->r[28]+0x0000056Cu); // 8005E444
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8005E448
  c->r[5]=R32(c->r[28]+0x00000550u); // 8005E44C
  c->r[12]=R32(c->r[12]+0x000000D4u); // 8005E450
  c->ctr=c->r[12]; // 8005E454
  if (true) { c->lr=0x8005E45Cu; dispatch(c,c->ctr); } // 8005E458
  c->r[4]=c->r[29]|c->r[29]; // 8005E45C
  c->r[3]=c->r[30]+0x00000010u; // 8005E460
  c->lr=0x8005E468u; f_8005E4EC(c); // 8005E464
  c->r[0]=R32(c->r[29]+0x00000010u); // 8005E468
  c->r[3]=c->r[30]+0x00000028u; // 8005E46C
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8005E470
  c->r[4]=c->r[29]+0x00000018u; // 8005E474
  W32(c->r[30]+0x0000001Cu,c->r[5]); // 8005E478
  W32(c->r[30]+0x00000020u,c->r[0]); // 8005E47C
  c->r[0]=R32(c->r[29]+0x00000014u); // 8005E480
  W32(c->r[30]+0x00000024u,c->r[0]); // 8005E484
  c->lr=0x8005E48Cu; f_8005DC84(c); // 8005E488
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005E48C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8005E490
  c->r[0]=R32(c->r[29]+0x00000028u); // 8005E494
  W32(c->r[30]+0x00000038u,c->r[0]); // 8005E498
L_8005E49C:;
  c->r[10]=c->r[31]|c->r[31]; // 8005E49C
  c->r[11]=c->r[10]+0x00000040u; // 8005E4A0
  c->lr=0x8005E4A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005E4A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8005E4A8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8005E4AC
  c->r[1]=c->r[10]|c->r[10]; // 8005E4B0
  c->lr=c->r[0]; // 8005E4B4
  return; // 8005E4B8
}

// fn_8005E4BC
void f_8005E4BC(Ctx* __restrict c) {
  trace_call(0x8005E4BCu);
  c->r[0]=R8(c->r[13]+0xFFFFBD58u); // 8005E4BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005E4C0
  if (!crb(c,2)) { goto L_8005E4E4; } // 8005E4C4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8005E4C8
  c->r[0]=0u+0x00000001u; // 8005E4CC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8005E4D0
  c->r[3]=c->r[4]+0x00000001u; // 8005E4D4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8005E4D8
  W32(c->r[13]+0xFFFFBD54u,c->r[4]); // 8005E4DC
  W8(c->r[13]+0xFFFFBD58u,c->r[0]); // 8005E4E0
L_8005E4E4:;
  c->r[3]=R32(c->r[13]+0xFFFFBD54u); // 8005E4E4
  return; // 8005E4E8
}

// fn_8005E4EC
void f_8005E4EC(Ctx* __restrict c) {
  trace_call(0x8005E4ECu);
  c->r[5]=R32(c->r[4]+0x00000004u); // 8005E4EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8005E4F0
  W32(c->r[3]+0x00000004u,c->r[5]); // 8005E4F4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8005E4F8
  return; // 8005E4FC
}

// fn_8005E500
void f_8005E500(Ctx* __restrict c) {
  trace_call(0x8005E500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E500
  c->r[0]=c->lr; // 8005E504
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005E508
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005E50C
  c->r[31]=c->r[4]|c->r[4]; // 8005E510
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005E514
  c->r[30]=c->r[3]|c->r[3]; // 8005E518
  c->r[5]=R32(c->r[3]+0x00000004u); // 8005E51C
  cmps(c,0,(int32_t)c->r[5],0); // 8005E520
  if (crb(c,2)) { goto L_8005E530; } // 8005E524
  c->r[0]=R32(c->r[5]+0x00000008u); // 8005E528
  goto L_8005E534; // 8005E52C
L_8005E530:;
  c->r[0]=0u+0x00000000u; // 8005E530
L_8005E534:;
  cmps(c,0,(int32_t)c->r[0],0); // 8005E534
  if (!crb(c,2)) { goto L_8005E5AC; } // 8005E538
  c->r[0]=R32(c->r[4]+0x00000038u); // 8005E53C
  cmps(c,0,(int32_t)c->r[0],1); // 8005E540
  if (crb(c,2)) { goto L_8005E554; } // 8005E544
  cmps(c,0,(int32_t)c->r[0],2); // 8005E548
  if (crb(c,2)) { goto L_8005E584; } // 8005E54C
  goto L_8005E5AC; // 8005E550
L_8005E554:;
  c->lr=0x8005E558u; f_80085910(c); // 8005E554
  c->r[4]=R32(c->r[31]+0x00000024u); // 8005E558
  c->lr=0x8005E560u; f_800860D8(c); // 8005E55C
  c->r[4]=c->r[3]|c->r[3]; // 8005E560
  c->r[3]=c->r[30]|c->r[30]; // 8005E564
  c->lr=0x8005E56Cu; f_800647A0(c); // 8005E568
  c->r[3]=R32(c->r[30]+0x00000424u); // 8005E56C
  c->r[4]=c->r[31]+0x00000028u; // 8005E570
  {uint32_t ea=c->r[2]+0xFFFF8278u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005E574
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005E578
  c->lr=0x8005E580u; f_800C43B8(c); // 8005E57C
  goto L_8005E5AC; // 8005E580
L_8005E584:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E584
  c->r[4]=0u+0x00000008u; // 8005E588
  c->r[5]=0u+0x00000000u; // 8005E58C
  c->r[3]=c->r[3]+0x000000C4u; // 8005E590
  c->lr=0x8005E598u; f_8005DCA0(c); // 8005E594
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8005E598
  c->r[3]=c->r[30]|c->r[30]; // 8005E59C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8005E5A0
  c->ctr=c->r[12]; // 8005E5A4
  if (true) { c->lr=0x8005E5ACu; dispatch(c,c->ctr); } // 8005E5A8
L_8005E5AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005E5AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005E5B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005E5B4
  c->lr=c->r[0]; // 8005E5B8
  c->r[1]=c->r[1]+0x00000010u; // 8005E5BC
  return; // 8005E5C0
}

// fn_8005E5C4
void f_8005E5C4(Ctx* __restrict c) {
  trace_call(0x8005E5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E5C4
  c->r[0]=c->lr; // 8005E5C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005E5CC
  c->r[11]=c->r[1]+0x00000030u; // 8005E5D0
  c->lr=0x8005E5D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005E5D4
  c->r[0]=R32(c->r[4]+0x00000010u); // 8005E5D8
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8005E5DC
  c->r[6]=R32(c->r[3]+0x00000428u); // 8005E5E0
  c->r[27]=c->r[3]|c->r[3]; // 8005E5E4
  cmps(c,0,(int32_t)c->r[0],0); // 8005E5E8
  c->r[28]=c->r[4]|c->r[4]; // 8005E5EC
  c->r[30]=c->r[6]+c->r[5]; // 8005E5F0
  if (!crb(c,2)) { goto L_8005E6C4; } // 8005E5F4
  c->r[0]=R32(c->r[30]+0x00000000u); // 8005E5F8
  c->r[29]=0u+0x00000000u; // 8005E5FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8005E600
  goto L_8005E668; // 8005E604
L_8005E608:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8005E608
  c->r[3]=R32(c->r[3]+0x00000008u); // 8005E60C
  c->r[12]=R32(c->r[3]+0x00000020u); // 8005E610
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8005E614
  c->ctr=c->r[12]; // 8005E618
  if (true) { c->lr=0x8005E620u; dispatch(c,c->ctr); } // 8005E61C
  c->r[12]=R32(c->r[28]+0x00000020u); // 8005E620
  c->r[31]=c->r[3]|c->r[3]; // 8005E624
  c->r[3]=c->r[28]|c->r[28]; // 8005E628
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8005E62C
  c->ctr=c->r[12]; // 8005E630
  if (true) { c->lr=0x8005E638u; dispatch(c,c->ctr); } // 8005E634
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 8005E638
  if (!crb(c,0)) { goto L_8005E658; } // 8005E63C
  c->r[4]=R32(c->r[1]+0x00000010u); // 8005E640
  c->r[3]=c->r[30]|c->r[30]; // 8005E644
  c->r[5]=c->r[28]|c->r[28]; // 8005E648
  c->lr=0x8005E650u; f_802DDCA8(c); // 8005E64C
  c->r[29]=0u+0x00000001u; // 8005E650
  goto L_8005E680; // 8005E654
L_8005E658:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8005E658
  c->r[4]=c->r[1]+0x00000010u; // 8005E65C
  c->r[5]=0u+0x00000000u; // 8005E660
  c->lr=0x8005E668u; f_8005D35C(c); // 8005E664
L_8005E668:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005E668
  c->r[3]=c->r[1]+0x00000010u; // 8005E66C
  c->r[4]=c->r[1]+0x00000008u; // 8005E670
  c->lr=0x8005E678u; f_8005D374(c); // 8005E674
  cmps(c,0,(int32_t)c->r[3],0); // 8005E678
  if (!crb(c,2)) { IRQCHK(c); goto L_8005E608; } // 8005E67C
L_8005E680:;
  cmps(c,0,(int32_t)c->r[29],0); // 8005E680
  if (!crb(c,2)) { goto L_8005E698; } // 8005E684
  c->r[3]=c->r[30]|c->r[30]; // 8005E688
  c->r[4]=c->r[30]|c->r[30]; // 8005E68C
  c->r[5]=c->r[28]|c->r[28]; // 8005E690
  c->lr=0x8005E698u; f_802DDCA8(c); // 8005E694
L_8005E698:;
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005E698
  c->r[0]=0u+0x00000000u; // 8005E69C
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 8005E6A0
  c->r[3]=c->r[28]|c->r[28]; // 8005E6A4
  W32(c->r[28]+0x00000010u,c->r[27]); // 8005E6A8
  W32(c->r[28]+0x00000014u,c->r[0]); // 8005E6AC
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 8005E6B0
  c->r[12]=R32(c->r[28]+0x00000020u); // 8005E6B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8005E6B8
  c->ctr=c->r[12]; // 8005E6BC
  if (true) { c->lr=0x8005E6C4u; dispatch(c,c->ctr); } // 8005E6C0
L_8005E6C4:;
  c->r[11]=c->r[1]+0x00000030u; // 8005E6C4
  c->lr=0x8005E6CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005E6C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005E6CC
  c->lr=c->r[0]; // 8005E6D0
  c->r[1]=c->r[1]+0x00000030u; // 8005E6D4
  return; // 8005E6D8
}

// fn_8005E6DC
void f_8005E6DC(Ctx* __restrict c) {
  trace_call(0x8005E6DCu);
  return; // 8005E6DC
}

// fn_8005E6E0
void f_8005E6E0(Ctx* __restrict c) {
  trace_call(0x8005E6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E6E0
  c->r[0]=c->lr; // 8005E6E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005E6E8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005E6EC
  c->r[30]=c->r[4]|c->r[4]; // 8005E6F0
  c->r[0]=R32(c->r[4]+0x00000010u); // 8005E6F4
  cmps(c,0,(int32_t)c->r[0],0); // 8005E6F8
  if (crb(c,2)) { goto L_8005E760; } // 8005E6FC
  c->r[31]=R32(c->r[4]+0x0000000Cu); // 8005E700
  if (crb(c,2)) { goto L_8005E760; } // 8005E704
  c->r[0]=R32(c->r[31]+0x00000000u); // 8005E708
  W32(c->r[1]+0x00000010u,c->r[0]); // 8005E70C
  goto L_8005E748; // 8005E710
L_8005E714:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8005E714
  c->r[3]=R32(c->r[3]+0x00000008u); // 8005E718
  cmpu(c,0,c->r[30],c->r[3]); // 8005E71C
  if (!crb(c,2)) { goto L_8005E738; } // 8005E720
  c->lr=0x8005E728u; f_8005C948(c); // 8005E724
  c->r[4]=R32(c->r[1]+0x00000010u); // 8005E728
  c->r[3]=c->r[31]|c->r[31]; // 8005E72C
  c->lr=0x8005E734u; f_802DDD08(c); // 8005E730
  goto L_8005E760; // 8005E734
L_8005E738:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8005E738
  c->r[4]=c->r[1]+0x00000010u; // 8005E73C
  c->r[5]=0u+0x00000000u; // 8005E740
  c->lr=0x8005E748u; f_8005D35C(c); // 8005E744
L_8005E748:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8005E748
  c->r[3]=c->r[1]+0x00000010u; // 8005E74C
  c->r[4]=c->r[1]+0x00000008u; // 8005E750
  c->lr=0x8005E758u; f_8005D374(c); // 8005E754
  cmps(c,0,(int32_t)c->r[3],0); // 8005E758
  if (!crb(c,2)) { IRQCHK(c); goto L_8005E714; } // 8005E75C
L_8005E760:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005E760
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005E764
  c->lr=c->r[0]; // 8005E768
  c->r[1]=c->r[1]+0x00000020u; // 8005E76C
  return; // 8005E770
}

// fn_8005E774
void f_8005E774(Ctx* __restrict c) {
  trace_call(0x8005E774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E774
  c->r[0]=c->lr; // 8005E778
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8005E77C
  c->r[4]=0u+0x0000000Du; // 8005E780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005E784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005E788
  c->r[31]=c->r[3]|c->r[3]; // 8005E78C
  c->r[3]=c->r[5]+0x000000C4u; // 8005E790
  c->lr=0x8005E798u; f_8005CDE8(c); // 8005E794
  cmps(c,0,(int32_t)c->r[3],0); // 8005E798
  if (crb(c,2)) { goto L_8005E7A8; } // 8005E79C
  c->r[3]=0u+0x00000000u; // 8005E7A0
  goto L_8005E800; // 8005E7A4
L_8005E7A8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E7A8
  c->r[4]=0u+0x0000000Eu; // 8005E7AC
  c->r[3]=c->r[3]+0x000000C4u; // 8005E7B0
  c->lr=0x8005E7B8u; f_8005CDE8(c); // 8005E7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8005E7B8
  if (crb(c,2)) { goto L_8005E7C8; } // 8005E7BC
  c->r[3]=0u+0x00000000u; // 8005E7C0
  goto L_8005E800; // 8005E7C4
L_8005E7C8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E7C8
  c->r[4]=0u+0x0000000Fu; // 8005E7CC
  c->r[3]=c->r[3]+0x000000C4u; // 8005E7D0
  c->lr=0x8005E7D8u; f_8005CDE8(c); // 8005E7D4
  cmps(c,0,(int32_t)c->r[3],0); // 8005E7D8
  if (crb(c,2)) { goto L_8005E7E8; } // 8005E7DC
  c->r[3]=0u+0x00000000u; // 8005E7E0
  goto L_8005E800; // 8005E7E4
L_8005E7E8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E7E8
  c->r[4]=0u+0x00000010u; // 8005E7EC
  c->r[3]=c->r[3]+0x000000C4u; // 8005E7F0
  c->lr=0x8005E7F8u; f_8005CDE8(c); // 8005E7F4
  c->r[0]=cntlz(c->r[3]); // 8005E7F8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E7FC
L_8005E800:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005E800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005E804
  c->lr=c->r[0]; // 8005E808
  c->r[1]=c->r[1]+0x00000010u; // 8005E80C
  return; // 8005E810
}

// fn_8005E814
void f_8005E814(Ctx* __restrict c) {
  trace_call(0x8005E814u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E814
  c->r[0]=cntlz(c->r[4]); // 8005E818
  c->r[4]=0u+0x0000000Du; // 8005E81C
  c->r[3]=c->r[3]+0x000000C4u; // 8005E820
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E824
  f_8005DCA0(c); return; // 8005E828
}

// fn_8005E82C
void f_8005E82C(Ctx* __restrict c) {
  trace_call(0x8005E82Cu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E82C
  c->r[0]=cntlz(c->r[4]); // 8005E830
  c->r[4]=0u+0x0000000Fu; // 8005E834
  c->r[3]=c->r[3]+0x000000C4u; // 8005E838
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E83C
  f_8005DCA0(c); return; // 8005E840
}

// fn_8005E844
void f_8005E844(Ctx* __restrict c) {
  trace_call(0x8005E844u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E844
  c->r[0]=c->lr; // 8005E848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005E84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005E850
  c->r[31]=c->r[3]|c->r[3]; // 8005E854
  c->lr=0x8005E85Cu; f_8005E774(c); // 8005E858
  cmps(c,0,(int32_t)c->r[3],0); // 8005E85C
  if (!crb(c,2)) { goto L_8005E86C; } // 8005E860
  c->r[3]=0u+0x00000000u; // 8005E864
  goto L_8005E8A4; // 8005E868
L_8005E86C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E86C
  c->r[4]=0u+0x00000021u; // 8005E870
  c->r[3]=c->r[3]+0x000000C4u; // 8005E874
  c->lr=0x8005E87Cu; f_8005CDE8(c); // 8005E878
  cmps(c,0,(int32_t)c->r[3],0); // 8005E87C
  if (crb(c,2)) { goto L_8005E88C; } // 8005E880
  c->r[3]=0u+0x00000000u; // 8005E884
  goto L_8005E8A4; // 8005E888
L_8005E88C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E88C
  c->r[4]=0u+0x00000023u; // 8005E890
  c->r[3]=c->r[3]+0x000000C4u; // 8005E894
  c->lr=0x8005E89Cu; f_8005CDE8(c); // 8005E898
  c->r[0]=cntlz(c->r[3]); // 8005E89C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E8A0
L_8005E8A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005E8A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005E8A8
  c->lr=c->r[0]; // 8005E8AC
  c->r[1]=c->r[1]+0x00000010u; // 8005E8B0
  return; // 8005E8B4
}

// fn_8005E8B8
void f_8005E8B8(Ctx* __restrict c) {
  trace_call(0x8005E8B8u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E8B8
  c->r[0]=cntlz(c->r[4]); // 8005E8BC
  c->r[4]=0u+0x00000023u; // 8005E8C0
  c->r[3]=c->r[3]+0x000000C4u; // 8005E8C4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E8C8
  f_8005DCA0(c); return; // 8005E8CC
}

// fn_8005E8D0
void f_8005E8D0(Ctx* __restrict c) {
  trace_call(0x8005E8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E8D0
  c->r[0]=c->lr; // 8005E8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005E8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005E8DC
  c->r[31]=c->r[3]|c->r[3]; // 8005E8E0
  c->lr=0x8005E8E8u; f_8005E774(c); // 8005E8E4
  cmps(c,0,(int32_t)c->r[3],0); // 8005E8E8
  if (!crb(c,2)) { goto L_8005E8F8; } // 8005E8EC
  c->r[3]=0u+0x00000000u; // 8005E8F0
  goto L_8005E930; // 8005E8F4
L_8005E8F8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E8F8
  c->r[4]=0u+0x00000025u; // 8005E8FC
  c->r[3]=c->r[3]+0x000000C4u; // 8005E900
  c->lr=0x8005E908u; f_8005CDE8(c); // 8005E904
  cmps(c,0,(int32_t)c->r[3],0); // 8005E908
  if (crb(c,2)) { goto L_8005E918; } // 8005E90C
  c->r[3]=0u+0x00000000u; // 8005E910
  goto L_8005E930; // 8005E914
L_8005E918:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E918
  c->r[4]=0u+0x00000027u; // 8005E91C
  c->r[3]=c->r[3]+0x000000C4u; // 8005E920
  c->lr=0x8005E928u; f_8005CDE8(c); // 8005E924
  c->r[0]=cntlz(c->r[3]); // 8005E928
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E92C
L_8005E930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005E930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005E934
  c->lr=c->r[0]; // 8005E938
  c->r[1]=c->r[1]+0x00000010u; // 8005E93C
  return; // 8005E940
}

// fn_8005E944
void f_8005E944(Ctx* __restrict c) {
  trace_call(0x8005E944u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E944
  c->r[0]=cntlz(c->r[4]); // 8005E948
  c->r[4]=0u+0x00000025u; // 8005E94C
  c->r[3]=c->r[3]+0x000000C4u; // 8005E950
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E954
  f_8005DCA0(c); return; // 8005E958
}

// fn_8005E95C
void f_8005E95C(Ctx* __restrict c) {
  trace_call(0x8005E95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005E95C
  c->r[0]=c->lr; // 8005E960
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005E964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005E968
  c->r[31]=c->r[3]|c->r[3]; // 8005E96C
  c->lr=0x8005E974u; f_8005E774(c); // 8005E970
  cmps(c,0,(int32_t)c->r[3],0); // 8005E974
  if (!crb(c,2)) { goto L_8005E984; } // 8005E978
  c->r[3]=0u+0x00000000u; // 8005E97C
  goto L_8005E9BC; // 8005E980
L_8005E984:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E984
  c->r[4]=0u+0x00000029u; // 8005E988
  c->r[3]=c->r[3]+0x000000C4u; // 8005E98C
  c->lr=0x8005E994u; f_8005CDE8(c); // 8005E990
  cmps(c,0,(int32_t)c->r[3],0); // 8005E994
  if (crb(c,2)) { goto L_8005E9A4; } // 8005E998
  c->r[3]=0u+0x00000000u; // 8005E99C
  goto L_8005E9BC; // 8005E9A0
L_8005E9A4:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005E9A4
  c->r[4]=0u+0x0000002Bu; // 8005E9A8
  c->r[3]=c->r[3]+0x000000C4u; // 8005E9AC
  c->lr=0x8005E9B4u; f_8005CDE8(c); // 8005E9B0
  c->r[0]=cntlz(c->r[3]); // 8005E9B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E9B8
L_8005E9BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005E9BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005E9C0
  c->lr=c->r[0]; // 8005E9C4
  c->r[1]=c->r[1]+0x00000010u; // 8005E9C8
  return; // 8005E9CC
}

// fn_8005E9D0
void f_8005E9D0(Ctx* __restrict c) {
  trace_call(0x8005E9D0u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005E9D0
  c->r[0]=cntlz(c->r[4]); // 8005E9D4
  c->r[4]=0u+0x0000002Bu; // 8005E9D8
  c->r[3]=c->r[3]+0x000000C4u; // 8005E9DC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005E9E0
  f_8005DCA0(c); return; // 8005E9E4
}

// fn_8005E9E8
void f_8005E9E8(Ctx* __restrict c) {
  trace_call(0x8005E9E8u);
  cmps(c,0,(int32_t)c->r[4],0); // 8005E9E8
  if (crb(c,2)) { goto L_8005EA0C; } // 8005E9EC
  cmpu(c,0,c->r[4],0x00000001u); // 8005E9F0
  if (crb(c,2)) { goto L_8005EA24; } // 8005E9F4
  cmpu(c,0,c->r[4],0x00000003u); // 8005E9F8
  if (crb(c,2)) { goto L_8005EA3C; } // 8005E9FC
  cmpu(c,0,c->r[4],0x00000004u); // 8005EA00
  if (crb(c,2)) { goto L_8005EA54; } // 8005EA04
  return; // 8005EA08
L_8005EA0C:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EA0C
  c->r[0]=cntlz(c->r[5]); // 8005EA10
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EA14
  c->r[4]=0u+0x0000000Du; // 8005EA18
  c->r[3]=c->r[3]+0x000000C4u; // 8005EA1C
  f_8005DCA0(c); return; // 8005EA20
L_8005EA24:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EA24
  c->r[0]=cntlz(c->r[5]); // 8005EA28
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EA2C
  c->r[4]=0u+0x00000021u; // 8005EA30
  c->r[3]=c->r[3]+0x000000C4u; // 8005EA34
  f_8005DCA0(c); return; // 8005EA38
L_8005EA3C:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EA3C
  c->r[0]=cntlz(c->r[5]); // 8005EA40
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EA44
  c->r[4]=0u+0x00000025u; // 8005EA48
  c->r[3]=c->r[3]+0x000000C4u; // 8005EA4C
  f_8005DCA0(c); return; // 8005EA50
L_8005EA54:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EA54
  c->r[0]=cntlz(c->r[5]); // 8005EA58
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EA5C
  c->r[4]=0u+0x00000029u; // 8005EA60
  c->r[3]=c->r[3]+0x000000C4u; // 8005EA64
  f_8005DCA0(c); return; // 8005EA68
  return; // 8005EA6C
}

// fn_8005EA70
void f_8005EA70(Ctx* __restrict c) {
  trace_call(0x8005EA70u);
  c->r[3]=R32(c->r[3]+0x00000408u); // 8005EA70
  c->r[3]=R32(c->r[3]+0x00000038u); // 8005EA74
  W8(c->r[3]+0x000003FBu,c->r[4]); // 8005EA78
  return; // 8005EA7C
}

// fn_8005EA80
void f_8005EA80(Ctx* __restrict c) {
  trace_call(0x8005EA80u);
  c->r[3]=R32(c->r[3]+0x00000408u); // 8005EA80
  c->r[3]=R32(c->r[3]+0x00000038u); // 8005EA84
  c->r[3]=R8(c->r[3]+0x000003F8u); // 8005EA88
  return; // 8005EA8C
}

// fn_8005EA90
void f_8005EA90(Ctx* __restrict c) {
  trace_call(0x8005EA90u);
  c->r[3]=R32(c->r[3]+0x00000408u); // 8005EA90
  c->r[3]=R32(c->r[3]+0x00000038u); // 8005EA94
  c->r[3]=R8(c->r[3]+0x000003FAu); // 8005EA98
  return; // 8005EA9C
}

// fn_8005EAA0
void f_8005EAA0(Ctx* __restrict c) {
  trace_call(0x8005EAA0u);
  c->r[3]=R32(c->r[3]+0x00000408u); // 8005EAA0
  c->r[3]=R32(c->r[3]+0x00000038u); // 8005EAA4
  return; // 8005EAA8
}

// fn_8005EAAC
void f_8005EAAC(Ctx* __restrict c) {
  trace_call(0x8005EAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EAAC
  c->r[0]=c->lr; // 8005EAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005EAB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005EAB8
  c->r[30]=c->r[3]|c->r[3]; // 8005EABC
  c->r[4]=R32(c->r[3]+0x00000408u); // 8005EAC0
  cmps(c,0,(int32_t)c->r[4],0); // 8005EAC4
  if (crb(c,2)) { goto L_8005EB48; } // 8005EAC8
  c->r[31]=R32(c->r[4]+0x00000038u); // 8005EACC
  c->lr=0x8005EAD4u; f_8005E774(c); // 8005EAD0
  cmps(c,0,(int32_t)c->r[3],0); // 8005EAD4
  if (crb(c,2)) { goto L_8005EB38; } // 8005EAD8
  c->r[3]=c->r[31]+0x000003E0u; // 8005EADC
  c->r[4]=0u+0x00000000u; // 8005EAE0
  c->r[5]=0u+0x00000001u; // 8005EAE4
  c->lr=0x8005EAECu; f_8005DCA0(c); // 8005EAE8
  c->r[3]=c->r[30]|c->r[30]; // 8005EAEC
  c->lr=0x8005EAF4u; f_8005E844(c); // 8005EAF0
  c->r[5]=c->r[3]|c->r[3]; // 8005EAF4
  c->r[3]=c->r[31]+0x000003E0u; // 8005EAF8
  c->r[4]=0u+0x00000001u; // 8005EAFC
  c->lr=0x8005EB04u; f_8005DCA0(c); // 8005EB00
  c->r[3]=c->r[30]|c->r[30]; // 8005EB04
  c->lr=0x8005EB0Cu; f_8005E8D0(c); // 8005EB08
  c->r[5]=c->r[3]|c->r[3]; // 8005EB0C
  c->r[3]=c->r[31]+0x000003E0u; // 8005EB10
  c->r[4]=0u+0x00000003u; // 8005EB14
  c->lr=0x8005EB1Cu; f_8005DCA0(c); // 8005EB18
  c->r[3]=c->r[30]|c->r[30]; // 8005EB1C
  c->lr=0x8005EB24u; f_8005E95C(c); // 8005EB20
  c->r[5]=c->r[3]|c->r[3]; // 8005EB24
  c->r[3]=c->r[31]+0x000003E0u; // 8005EB28
  c->r[4]=0u+0x00000004u; // 8005EB2C
  c->lr=0x8005EB34u; f_8005DCA0(c); // 8005EB30
  goto L_8005EB48; // 8005EB34
L_8005EB38:;
  c->r[3]=c->r[31]+0x000003E0u; // 8005EB38
  c->r[4]=0u+0x00000000u; // 8005EB3C
  c->r[5]=0u+0x00000000u; // 8005EB40
  c->lr=0x8005EB48u; f_8005DCA0(c); // 8005EB44
L_8005EB48:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005EB48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005EB4C
  c->lr=c->r[0]; // 8005EB50
  c->r[1]=c->r[1]+0x00000010u; // 8005EB54
  return; // 8005EB58
}

// fn_8005EB5C
void f_8005EB5C(Ctx* __restrict c) {
  trace_call(0x8005EB5Cu);
  c->r[0]=c->r[4]|c->r[4]; // 8005EB5C
  c->r[7]=0u+0x00310000u; // 8005EB60
  c->r[6]=c->r[5]|c->r[5]; // 8005EB64
  c->r[4]=c->r[3]|c->r[3]; // 8005EB68
  c->r[5]=c->r[0]|c->r[0]; // 8005EB6C
  c->r[3]=c->r[7]+0x00000004u; // 8005EB70
  f_8005EBB0(c); return; // 8005EB74
}

// fn_8005EB78
void f_8005EB78(Ctx* __restrict c) {
  trace_call(0x8005EB78u);
  c->r[0]=c->r[4]|c->r[4]; // 8005EB78
  c->r[7]=0u+0x00110000u; // 8005EB7C
  c->r[6]=c->r[5]|c->r[5]; // 8005EB80
  c->r[4]=c->r[3]|c->r[3]; // 8005EB84
  c->r[5]=c->r[0]|c->r[0]; // 8005EB88
  c->r[3]=c->r[7]+0x00000004u; // 8005EB8C
  f_8005EBB0(c); return; // 8005EB90
}

// fn_8005EB94
void f_8005EB94(Ctx* __restrict c) {
  trace_call(0x8005EB94u);
  c->r[0]=c->r[4]|c->r[4]; // 8005EB94
  c->r[7]=0u+0x00210000u; // 8005EB98
  c->r[6]=c->r[5]|c->r[5]; // 8005EB9C
  c->r[4]=c->r[3]|c->r[3]; // 8005EBA0
  c->r[5]=c->r[0]|c->r[0]; // 8005EBA4
  c->r[3]=c->r[7]+0x00000004u; // 8005EBA8
  f_8005EBB0(c); return; // 8005EBAC
}

// fn_8005EBB0
void f_8005EBB0(Ctx* __restrict c) {
  trace_call(0x8005EBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EBB0
  c->r[0]=c->lr; // 8005EBB4
  cmps(c,0,(int32_t)c->r[6],0); // 8005EBB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005EBBC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005EBC0
  c->r[28]=c->r[3]|c->r[3]; // 8005EBC4
  c->r[29]=c->r[4]|c->r[4]; // 8005EBC8
  c->r[30]=c->r[5]|c->r[5]; // 8005EBCC
  if (crb(c,2)) { goto L_8005EBDC; } // 8005EBD0
  c->r[31]=c->r[6]|c->r[6]; // 8005EBD4
  goto L_8005EBE4; // 8005EBD8
L_8005EBDC:;
  c->r[31]=0u+0x80740000u; // 8005EBDC
  c->r[31]=c->r[31]+0x00007108u; // 8005EBE0
L_8005EBE4:;
  c->r[0]=0u+0x00000000u; // 8005EBE4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005EBE8
  c->r[3]=c->r[1]+0x00000008u; // 8005EBEC
  c->lr=0x8005EBF4u; f_8004FA38(c); // 8005EBF0
  c->r[4]=c->r[28]|c->r[28]; // 8005EBF4
  c->r[5]=c->r[29]|c->r[29]; // 8005EBF8
  c->r[6]=c->r[30]|c->r[30]; // 8005EBFC
  c->r[7]=c->r[31]|c->r[31]; // 8005EC00
  c->lr=0x8005EC08u; f_802F1B34(c); // 8005EC04
  c->r[0]=R32(c->r[31]+0x00000348u); // 8005EC08
  cmps(c,0,(int32_t)c->r[0],0); // 8005EC0C
  if (crb(c,2)) { goto L_8005EC1C; } // 8005EC10
  c->r[3]=0u+0x00000001u; // 8005EC14
  goto L_8005EC20; // 8005EC18
L_8005EC1C:;
  c->r[3]=0u+0x00000000u; // 8005EC1C
L_8005EC20:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005EC20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005EC24
  c->lr=c->r[0]; // 8005EC28
  c->r[1]=c->r[1]+0x00000020u; // 8005EC2C
  return; // 8005EC30
}

// fn_8005EC34
void f_8005EC34(Ctx* __restrict c) {
  trace_call(0x8005EC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EC34
  c->r[0]=c->lr; // 8005EC38
  W32(c->r[1]+0x00000054u,c->r[0]); // 8005EC3C
  c->r[11]=c->r[1]+0x00000040u; // 8005EC40
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8005EC44
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8005EC48
  c->lr=0x8005EC50u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005EC4C
  c->f[31]=c->f[1]; // 8005EC50
  cmps(c,0,(int32_t)c->r[5],0); // 8005EC54
  c->r[28]=c->r[3]|c->r[3]; // 8005EC58
  c->r[29]=c->r[4]|c->r[4]; // 8005EC5C
  c->r[30]=c->r[6]|c->r[6]; // 8005EC60
  if (crb(c,2)) { goto L_8005EC70; } // 8005EC64
  c->r[31]=c->r[5]|c->r[5]; // 8005EC68
  goto L_8005EC78; // 8005EC6C
L_8005EC70:;
  c->r[31]=0u+0x80740000u; // 8005EC70
  c->r[31]=c->r[31]+0x00007108u; // 8005EC74
L_8005EC78:;
  c->r[0]=0u+0x00000000u; // 8005EC78
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005EC7C
  c->r[3]=c->r[1]+0x00000008u; // 8005EC80
  c->lr=0x8005EC88u; f_8004FA38(c); // 8005EC84
  c->f[1]=c->f[31]; // 8005EC88
  c->r[7]=R8(c->r[13]+0xFFFF809Cu); // 8005EC8C
  {uint32_t ea=c->r[13]+0xFFFF80A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005EC90
  c->r[4]=c->r[28]|c->r[28]; // 8005EC94
  c->r[5]=c->r[29]|c->r[29]; // 8005EC98
  c->r[6]=c->r[31]|c->r[31]; // 8005EC9C
  c->lr=0x8005ECA4u; f_802F1DA4(c); // 8005ECA0
  c->r[0]=R32(c->r[31]+0x00000348u); // 8005ECA4
  cmps(c,0,(int32_t)c->r[0],0); // 8005ECA8
  if (crb(c,2)) { goto L_8005ECEC; } // 8005ECAC
  cmps(c,0,(int32_t)c->r[30],0); // 8005ECB0
  if (crb(c,2)) { goto L_8005ECE4; } // 8005ECB4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005ECB8
  c->r[3]=c->r[1]+0x0000000Cu; // 8005ECBC
  c->r[4]=c->r[31]+0x00000034u; // 8005ECC0
  c->lr=0x8005ECC8u; f_8005ED34(c); // 8005ECC4
  c->r[4]=c->r[29]|c->r[29]; // 8005ECC8
  c->r[3]=c->r[1]+0x00000018u; // 8005ECCC
  c->r[5]=c->r[1]+0x0000000Cu; // 8005ECD0
  c->lr=0x8005ECD8u; f_8005ED10(c); // 8005ECD4
  c->r[3]=c->r[30]|c->r[30]; // 8005ECD8
  c->r[4]=c->r[1]+0x00000018u; // 8005ECDC
  c->lr=0x8005ECE4u; f_8005DC84(c); // 8005ECE0
L_8005ECE4:;
  c->r[3]=0u+0x00000001u; // 8005ECE4
  goto L_8005ECF0; // 8005ECE8
L_8005ECEC:;
  c->r[3]=0u+0x00000000u; // 8005ECEC
L_8005ECF0:;
  c->r[11]=c->r[1]+0x00000040u; // 8005ECF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8005ECF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8005ECF8
  c->lr=0x8005ED00u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005ECFC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8005ED00
  c->lr=c->r[0]; // 8005ED04
  c->r[1]=c->r[1]+0x00000050u; // 8005ED08
  return; // 8005ED0C
}

// fn_8005ED10
void f_8005ED10(Ctx* __restrict c) {
  trace_call(0x8005ED10u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8005ED10
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8005ED14
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8005ED18
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8005ED1C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8005ED20
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 8005ED24
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8005ED28
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8005ED2C
  return; // 8005ED30
}

// fn_8005ED34
void f_8005ED34(Ctx* __restrict c) {
  trace_call(0x8005ED34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005ED34
  c->r[0]=c->lr; // 8005ED38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005ED3C
  c->r[5]=c->r[1]+0x00000008u; // 8005ED40
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8005ED44
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8005ED48
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 8005ED4C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8005ED50
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8005ED54
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8005ED58
  c->r[4]=c->r[5]|c->r[5]; // 8005ED5C
  c->lr=0x8005ED64u; f_8005CD7C(c); // 8005ED60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005ED64
  c->lr=c->r[0]; // 8005ED68
  c->r[1]=c->r[1]+0x00000020u; // 8005ED6C
  return; // 8005ED70
}

// fn_8005ED74
void f_8005ED74(Ctx* __restrict c) {
  trace_call(0x8005ED74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005ED74
  c->r[0]=c->lr; // 8005ED78
  cmps(c,0,(int32_t)c->r[6],0); // 8005ED7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005ED80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005ED84
  c->r[30]=c->r[3]|c->r[3]; // 8005ED88
  if (crb(c,2)) { goto L_8005ED98; } // 8005ED8C
  c->r[31]=c->r[6]|c->r[6]; // 8005ED90
  goto L_8005EDA0; // 8005ED94
L_8005ED98:;
  c->r[31]=0u+0x80740000u; // 8005ED98
  c->r[31]=c->r[31]+0x00007108u; // 8005ED9C
L_8005EDA0:;
  c->r[3]=0u+0x00110000u; // 8005EDA0
  c->r[6]=c->r[31]|c->r[31]; // 8005EDA4
  c->r[3]=c->r[3]+0x00000010u; // 8005EDA8
  c->lr=0x8005EDB0u; f_8005EBB0(c); // 8005EDAC
  cmps(c,0,(int32_t)c->r[3],0); // 8005EDB0
  if (crb(c,2)) { goto L_8005EDD0; } // 8005EDB4
  c->r[0]=R32(c->r[31]+0x00000018u); // 8005EDB8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8005EDBC
  cmpu(c,0,c->r[30],c->r[0]); // 8005EDC0
  if (!crb(c,2)) { goto L_8005EDD0; } // 8005EDC4
  c->r[3]=0u+0x00000001u; // 8005EDC8
  goto L_8005EDD4; // 8005EDCC
L_8005EDD0:;
  c->r[3]=0u+0x00000000u; // 8005EDD0
L_8005EDD4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005EDD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005EDD8
  c->lr=c->r[0]; // 8005EDDC
  c->r[1]=c->r[1]+0x00000010u; // 8005EDE0
  return; // 8005EDE4
}

// fn_8005EDE8
void f_8005EDE8(Ctx* __restrict c) {
  trace_call(0x8005EDE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EDE8
  c->r[0]=c->lr; // 8005EDEC
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8005EDF0
  c->r[4]=0u+0x00000011u; // 8005EDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005EDF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005EDFC
  c->r[31]=c->r[3]|c->r[3]; // 8005EE00
  c->r[3]=c->r[5]+0x000000C4u; // 8005EE04
  c->lr=0x8005EE0Cu; f_8005CDE8(c); // 8005EE08
  cmps(c,0,(int32_t)c->r[3],0); // 8005EE0C
  if (crb(c,2)) { goto L_8005EE1C; } // 8005EE10
  c->r[3]=0u+0x00000000u; // 8005EE14
  goto L_8005EE74; // 8005EE18
L_8005EE1C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005EE1C
  c->r[4]=0u+0x00000012u; // 8005EE20
  c->r[3]=c->r[3]+0x000000C4u; // 8005EE24
  c->lr=0x8005EE2Cu; f_8005CDE8(c); // 8005EE28
  cmps(c,0,(int32_t)c->r[3],0); // 8005EE2C
  if (crb(c,2)) { goto L_8005EE3C; } // 8005EE30
  c->r[3]=0u+0x00000000u; // 8005EE34
  goto L_8005EE74; // 8005EE38
L_8005EE3C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005EE3C
  c->r[4]=0u+0x00000013u; // 8005EE40
  c->r[3]=c->r[3]+0x000000C4u; // 8005EE44
  c->lr=0x8005EE4Cu; f_8005CDE8(c); // 8005EE48
  cmps(c,0,(int32_t)c->r[3],0); // 8005EE4C
  if (crb(c,2)) { goto L_8005EE5C; } // 8005EE50
  c->r[3]=0u+0x00000000u; // 8005EE54
  goto L_8005EE74; // 8005EE58
L_8005EE5C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8005EE5C
  c->r[4]=0u+0x00000014u; // 8005EE60
  c->r[3]=c->r[3]+0x000000C4u; // 8005EE64
  c->lr=0x8005EE6Cu; f_8005CDE8(c); // 8005EE68
  c->r[0]=cntlz(c->r[3]); // 8005EE6C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EE70
L_8005EE74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005EE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005EE78
  c->lr=c->r[0]; // 8005EE7C
  c->r[1]=c->r[1]+0x00000010u; // 8005EE80
  return; // 8005EE84
}

// fn_8005EE88
void f_8005EE88(Ctx* __restrict c) {
  trace_call(0x8005EE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EE88
  c->r[0]=c->lr; // 8005EE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005EE90
  c->r[0]=cntlz(c->r[4]); // 8005EE94
  c->r[4]=0u+0x00000011u; // 8005EE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005EE9C
  c->r[31]=c->r[3]|c->r[3]; // 8005EEA0
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8005EEA4
  c->r[3]=c->r[5]+0x000000C4u; // 8005EEA8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EEAC
  c->lr=0x8005EEB4u; f_8005DCA0(c); // 8005EEB0
  c->r[3]=c->r[31]|c->r[31]; // 8005EEB4
  c->lr=0x8005EEBCu; f_8005EEE8(c); // 8005EEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005EEBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005EEC0
  c->lr=c->r[0]; // 8005EEC4
  c->r[1]=c->r[1]+0x00000010u; // 8005EEC8
  return; // 8005EECC
}

// fn_8005EED0
void f_8005EED0(Ctx* __restrict c) {
  trace_call(0x8005EED0u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EED0
  c->r[0]=cntlz(c->r[4]); // 8005EED4
  c->r[4]=0u+0x00000013u; // 8005EED8
  c->r[3]=c->r[3]+0x000000C4u; // 8005EEDC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EEE0
  f_8005DCA0(c); return; // 8005EEE4
}

// fn_8005EEE8
void f_8005EEE8(Ctx* __restrict c) {
  trace_call(0x8005EEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EEE8
  c->r[0]=c->lr; // 8005EEEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005EEF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005EEF4
  c->r[31]=c->r[3]|c->r[3]; // 8005EEF8
  c->r[0]=R32(c->r[3]+0x0000040Cu); // 8005EEFC
  cmps(c,0,(int32_t)c->r[0],0); // 8005EF00
  if (crb(c,2)) { goto L_8005EF1C; } // 8005EF04
  c->lr=0x8005EF0Cu; f_8005EDE8(c); // 8005EF08
  c->r[4]=R32(c->r[31]+0x0000040Cu); // 8005EF0C
  c->r[0]=cntlz(c->r[3]); // 8005EF10
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005EF14
  W8(c->r[4]+0x00000074u,c->r[0]); // 8005EF18
L_8005EF1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005EF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005EF20
  c->lr=c->r[0]; // 8005EF24
  c->r[1]=c->r[1]+0x00000010u; // 8005EF28
  return; // 8005EF2C
}

// fn_8005EF30
void f_8005EF30(Ctx* __restrict c) {
  trace_call(0x8005EF30u);
  c->r[0]=c->r[6]-c->r[4]; // 8005EF30
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 8005EF34
  return; // 8005EF38
}

// fn_8005EF3C
void f_8005EF3C(Ctx* __restrict c) {
  trace_call(0x8005EF3Cu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005EF3C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8005EF40
  return; // 8005EF44
}

// fn_8005EF48
void f_8005EF48(Ctx* __restrict c) {
  trace_call(0x8005EF48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EF48
  c->r[0]=c->lr; // 8005EF4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005EF50
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005EF54
  c->r[30]=c->r[4]|c->r[4]; // 8005EF58
  c->r[29]=c->r[3]|c->r[3]; // 8005EF5C
  c->r[4]=c->r[5]|c->r[5]; // 8005EF60
  c->r[31]=R32(c->r[3]+0x00000444u); // 8005EF64
  c->lr=0x8005EF6Cu; f_8005EF94(c); // 8005EF68
  cmps(c,0,(int32_t)c->r[30],0); // 8005EF6C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 8005EF70
  if (crb(c,2)) { goto L_8005EF80; } // 8005EF74
  c->r[3]=c->r[29]|c->r[29]; // 8005EF78
  c->lr=0x8005EF80u; f_8005EFE8(c); // 8005EF7C
L_8005EF80:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005EF80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005EF84
  c->lr=c->r[0]; // 8005EF88
  c->r[1]=c->r[1]+0x00000020u; // 8005EF8C
  return; // 8005EF90
}

// fn_8005EF94
void f_8005EF94(Ctx* __restrict c) {
  trace_call(0x8005EF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EF94
  c->r[0]=c->lr; // 8005EF98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005EF9C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8005EFA0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8005EFA4
  c->f[31]=c->f[1]; // 8005EFA8
  cmps(c,0,(int32_t)c->r[4],0); // 8005EFAC
  if (crb(c,2)) { goto L_8005EFCC; } // 8005EFB0
  c->r[0]=0u+0x00000000u; // 8005EFB4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005EFB8
  c->r[3]=c->r[1]+0x00000008u; // 8005EFBC
  c->lr=0x8005EFC4u; f_80046FEC(c); // 8005EFC0
  c->lr=0x8005EFC8u; f_801A1454(c); // 8005EFC4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 8005EFC8
L_8005EFCC:;
  c->f[1]=c->f[31]; // 8005EFCC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8005EFD0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8005EFD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005EFD8
  c->lr=c->r[0]; // 8005EFDC
  c->r[1]=c->r[1]+0x00000020u; // 8005EFE0
  return; // 8005EFE4
}

// fn_8005EFE8
void f_8005EFE8(Ctx* __restrict c) {
  trace_call(0x8005EFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005EFE8
  c->r[0]=c->lr; // 8005EFEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8005EFF0
  c->r[11]=c->r[1]+0x00000040u; // 8005EFF4
  c->lr=0x8005EFFCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005EFF8
  c->r[4]=R32(c->r[3]+0x00000440u); // 8005EFFC
  c->r[31]=c->r[3]|c->r[3]; // 8005F000
  c->r[29]=R32(c->r[3]+0x00000444u); // 8005F004
  c->r[30]=R32(c->r[4]+0x00000004u); // 8005F008
  cmps(c,0,(int32_t)c->r[30],0); // 8005F00C
  if (crb(c,2)) { goto L_8005F0E4; } // 8005F010
  c->r[5]=0u+0x80690000u; // 8005F014
  c->r[3]=0u+0x80740000u; // 8005F018
  c->r[5]=c->r[5]+0xFFFFB8D8u; // 8005F01C
  c->r[6]=0u+0x00000000u; // 8005F020
  c->r[4]=c->r[5]+0x0000006Fu; // 8005F024
  c->r[3]=c->r[3]+0x00004FD0u; // 8005F028
  c->r[5]=c->r[5]+0x0000007Cu; // 8005F02C
  c->lr=0x8005F034u; f_8005A7B0(c); // 8005F030
  cmps(c,0,(int32_t)c->r[3],0); // 8005F034
  if (crb(c,2)) { goto L_8005F0E4; } // 8005F038
  c->r[4]=c->r[3]|c->r[3]; // 8005F03C
  c->r[3]=c->r[1]+0x00000024u; // 8005F040
  c->lr=0x8005F048u; f_802D8E94(c); // 8005F044
  c->r[3]=c->r[1]+0x00000024u; // 8005F048
  c->r[4]=0u+0x00000000u; // 8005F04C
  c->lr=0x8005F054u; f_802D8F30(c); // 8005F050
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8005F054
  c->r[28]=0u+0x00000000u; // 8005F058
  W32(c->r[1]+0x00000008u,c->r[3]); // 8005F05C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8005F060
  W32(c->r[1]+0x00000014u,c->r[4]); // 8005F064
  goto L_8005F0D4; // 8005F068
L_8005F06C:;
  c->r[5]=c->r[28]|c->r[28]; // 8005F06C
  c->r[3]=c->r[1]+0x00000018u; // 8005F070
  c->r[4]=c->r[1]+0x00000010u; // 8005F074
  c->lr=0x8005F07Cu; f_802D90FC(c); // 8005F078
  c->r[3]=c->r[1]+0x00000018u; // 8005F07C
  c->r[4]=0u+0x00000000u; // 8005F080
  c->lr=0x8005F088u; f_802D9584(c); // 8005F084
  c->r[4]=c->r[30]|c->r[30]; // 8005F088
  c->lr=0x8005F090u; f_803B393C(c); // 8005F08C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F090
  if (!crb(c,2)) { goto L_8005F0D0; } // 8005F094
  c->r[28]=0u+0x00000000u; // 8005F098
  c->r[30]=0u+0x00000000u; // 8005F09C
L_8005F0A0:;
  c->r[4]=c->r[28]+0x00000001u; // 8005F0A0
  c->r[3]=c->r[1]+0x00000018u; // 8005F0A4
  c->lr=0x8005F0ACu; f_802D94E8(c); // 8005F0A8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005F0AC
  c->r[28]=c->r[28]+0x00000001u; // 8005F0B0
  c->r[3]=c->r[29]+c->r[30]; // 8005F0B4
  c->r[30]=c->r[30]+0x0000000Cu; // 8005F0B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8005F0BC
  cmps(c,0,(int32_t)c->r[28],32); // 8005F0C0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8005F0C4
  if (crb(c,0)) { IRQCHK(c); goto L_8005F0A0; } // 8005F0C8
  goto L_8005F0E4; // 8005F0CC
L_8005F0D0:;
  c->r[28]=c->r[28]+0x00000001u; // 8005F0D0
L_8005F0D4:;
  c->r[3]=c->r[1]+0x00000010u; // 8005F0D4
  c->lr=0x8005F0DCu; f_802D90E0(c); // 8005F0D8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 8005F0DC
  if (crb(c,0)) { IRQCHK(c); goto L_8005F06C; } // 8005F0E0
L_8005F0E4:;
  c->r[3]=R32(c->r[31]+0x00000444u); // 8005F0E4
  c->r[0]=0u+0x00000020u; // 8005F0E8
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 8005F0EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005F0F0
  c->r[3]=0u+0x00000000u; // 8005F0F4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8005F0F8
  c->r[4]=0u+0x00000000u; // 8005F0FC
  c->ctr=c->r[0]; // 8005F100
L_8005F104:;
  c->r[5]=R32(c->r[31]+0x00000444u); // 8005F104
  c->r[0]=R32(c->r[31]+0x0000044Cu); // 8005F108
  c->r[6]=c->r[5]+c->r[3]; // 8005F10C
  c->r[3]=c->r[3]+0x0000000Cu; // 8005F110
  c->r[5]=c->r[0]+c->r[4]; // 8005F114
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005F118
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 8005F11C
  c->r[4]=c->r[4]+0x00000004u; // 8005F120
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8005F104; } // 8005F124
  c->r[3]=c->r[31]|c->r[31]; // 8005F128
  c->lr=0x8005F130u; f_80060F38(c); // 8005F12C
  c->r[11]=c->r[1]+0x00000040u; // 8005F130
  c->lr=0x8005F138u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005F134
  c->r[0]=R32(c->r[1]+0x00000044u); // 8005F138
  c->lr=c->r[0]; // 8005F13C
  c->r[1]=c->r[1]+0x00000040u; // 8005F140
  return; // 8005F144
}

// fn_8005F148
void f_8005F148(Ctx* __restrict c) {
  trace_call(0x8005F148u);
  return; // 8005F148
}

// fn_8005F14C
void f_8005F14C(Ctx* __restrict c) {
  trace_call(0x8005F14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F14C
  c->r[0]=c->lr; // 8005F150
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005F154
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F158
  c->r[27]=c->r[3]|c->r[3]; // 8005F15C
  c->r[28]=c->r[4]|c->r[4]; // 8005F160
  c->r[29]=c->r[6]|c->r[6]; // 8005F164
  c->r[0]=R32(c->r[3]+0x00000404u); // 8005F168
  cmps(c,0,(int32_t)c->r[0],0); // 8005F16C
  if (!crb(c,2)) { goto L_8005F17C; } // 8005F170
  c->r[3]=0u+0x00000000u; // 8005F174
  goto L_8005F224; // 8005F178
L_8005F17C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8005F17C
  c->r[3]=c->r[0]|c->r[0]; // 8005F180
  if (crb(c,2)) { goto L_8005F190; } // 8005F184
  c->r[4]=c->r[5]|c->r[5]; // 8005F188
  goto L_8005F194; // 8005F18C
L_8005F190:;
  c->r[4]=R32(c->r[13]+0xFFFF9CA8u); // 8005F190
L_8005F194:;
  c->lr=0x8005F198u; f_802E9DB4(c); // 8005F194
  cmps(c,0,(int32_t)c->r[3],0); // 8005F198
  c->r[30]=c->r[3]|c->r[3]; // 8005F19C
  if (!crb(c,0)) { goto L_8005F1AC; } // 8005F1A0
  c->r[3]=0u+0x00000000u; // 8005F1A4
  goto L_8005F224; // 8005F1A8
L_8005F1AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8005F1AC
  c->r[3]=c->r[27]|c->r[27]; // 8005F1B0
  if (crb(c,2)) { goto L_8005F1C0; } // 8005F1B4
  c->r[4]=c->r[29]|c->r[29]; // 8005F1B8
  goto L_8005F1C4; // 8005F1BC
L_8005F1C0:;
  c->r[4]=R32(c->r[13]+0xFFFF9CACu); // 8005F1C0
L_8005F1C4:;
  c->lr=0x8005F1C8u; f_8005C990(c); // 8005F1C4
  cmps(c,0,(int32_t)c->r[3],0); // 8005F1C8
  c->r[29]=c->r[3]|c->r[3]; // 8005F1CC
  if (!crb(c,0)) { goto L_8005F1DC; } // 8005F1D0
  c->r[3]=0u+0x00000000u; // 8005F1D4
  goto L_8005F224; // 8005F1D8
L_8005F1DC:;
  c->lr=0x8005F1E0u; f_80052EE8(c); // 8005F1DC
  c->r[4]=0u+0x00000060u; // 8005F1E0
  c->lr=0x8005F1E8u; f_8005BFB0(c); // 8005F1E4
  cmps(c,0,(int32_t)c->r[3],0); // 8005F1E8
  c->r[31]=c->r[3]|c->r[3]; // 8005F1EC
  if (crb(c,2)) { goto L_8005F204; } // 8005F1F0
  c->r[4]=c->r[28]|c->r[28]; // 8005F1F4
  c->r[5]=c->r[30]|c->r[30]; // 8005F1F8
  c->r[6]=c->r[29]|c->r[29]; // 8005F1FC
  c->lr=0x8005F204u; f_803709D0(c); // 8005F200
L_8005F204:;
  c->r[12]=R32(c->r[27]+0x000000FCu); // 8005F204
  c->r[3]=c->r[27]+0x000000FCu; // 8005F208
  c->r[4]=c->r[31]|c->r[31]; // 8005F20C
  c->r[5]=0u+0x00000001u; // 8005F210
  c->r[12]=R32(c->r[12]+0x00000040u); // 8005F214
  c->ctr=c->r[12]; // 8005F218
  if (true) { c->lr=0x8005F220u; dispatch(c,c->ctr); } // 8005F21C
  c->r[3]=0u+0x00000001u; // 8005F220
L_8005F224:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F224
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005F228
  c->lr=c->r[0]; // 8005F22C
  c->r[1]=c->r[1]+0x00000020u; // 8005F230
  return; // 8005F234
}

// fn_8005F238
void f_8005F238(Ctx* __restrict c) {
  trace_call(0x8005F238u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F238
  c->r[0]=c->lr; // 8005F23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F244
  c->r[31]=c->r[3]|c->r[3]; // 8005F248
  c->lr=0x8005F250u; f_8005F2B8(c); // 8005F24C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F250
  if (crb(c,2)) { goto L_8005F264; } // 8005F254
  c->r[3]=c->r[31]|c->r[31]; // 8005F258
  c->lr=0x8005F260u; f_8005F398(c); // 8005F25C
  c->lr=0x8005F264u; f_80370DE0(c); // 8005F260
L_8005F264:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F268
  c->lr=c->r[0]; // 8005F26C
  c->r[1]=c->r[1]+0x00000010u; // 8005F270
  return; // 8005F274
}

// fn_8005F278
void f_8005F278(Ctx* __restrict c) {
  trace_call(0x8005F278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F278
  c->r[0]=c->lr; // 8005F27C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F284
  c->r[31]=c->r[3]|c->r[3]; // 8005F288
  c->lr=0x8005F290u; f_8005F2B8(c); // 8005F28C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F290
  if (crb(c,2)) { goto L_8005F2A4; } // 8005F294
  c->r[3]=c->r[31]|c->r[31]; // 8005F298
  c->lr=0x8005F2A0u; f_8005F398(c); // 8005F29C
  c->lr=0x8005F2A4u; f_80370DFC(c); // 8005F2A0
L_8005F2A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F2A8
  c->lr=c->r[0]; // 8005F2AC
  c->r[1]=c->r[1]+0x00000010u; // 8005F2B0
  return; // 8005F2B4
}

// fn_8005F2B8
void f_8005F2B8(Ctx* __restrict c) {
  trace_call(0x8005F2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F2B8
  c->r[0]=c->lr; // 8005F2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F2C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F2C4
  c->r[31]=c->r[3]|c->r[3]; // 8005F2C8
  c->lr=0x8005F2D0u; f_8005F398(c); // 8005F2CC
  cmps(c,0,(int32_t)c->r[3],0); // 8005F2D0
  if (!crb(c,2)) { goto L_8005F2E0; } // 8005F2D4
  c->r[3]=0u+0x00000000u; // 8005F2D8
  goto L_8005F2EC; // 8005F2DC
L_8005F2E0:;
  c->r[3]=c->r[31]|c->r[31]; // 8005F2E0
  c->lr=0x8005F2E8u; f_8005F398(c); // 8005F2E4
  c->lr=0x8005F2ECu; f_80370DC4(c); // 8005F2E8
L_8005F2EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F2EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F2F0
  c->lr=c->r[0]; // 8005F2F4
  c->r[1]=c->r[1]+0x00000010u; // 8005F2F8
  return; // 8005F2FC
}

// fn_8005F300
void f_8005F300(Ctx* __restrict c) {
  trace_call(0x8005F300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F300
  c->r[0]=c->lr; // 8005F304
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005F308
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8005F30C
  c->f[31]=c->f[1]; // 8005F310
  W32(c->r[1]+0x00000014u,c->r[31]); // 8005F314
  c->r[31]=c->r[3]|c->r[3]; // 8005F318
  c->lr=0x8005F320u; f_8005F2B8(c); // 8005F31C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F320
  if (crb(c,2)) { goto L_8005F334; } // 8005F324
  c->r[3]=c->r[31]|c->r[31]; // 8005F328
  c->lr=0x8005F330u; f_8005F398(c); // 8005F32C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[31]);} // 8005F330
L_8005F334:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005F334
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8005F338
  c->r[31]=R32(c->r[1]+0x00000014u); // 8005F33C
  c->lr=c->r[0]; // 8005F340
  c->r[1]=c->r[1]+0x00000020u; // 8005F344
  return; // 8005F348
}

// fn_8005F34C
void f_8005F34C(Ctx* __restrict c) {
  trace_call(0x8005F34Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F34C
  c->r[0]=c->lr; // 8005F350
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005F354
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8005F358
  c->f[31]=c->f[1]; // 8005F35C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8005F360
  c->r[31]=c->r[3]|c->r[3]; // 8005F364
  c->lr=0x8005F36Cu; f_8005F2B8(c); // 8005F368
  cmps(c,0,(int32_t)c->r[3],0); // 8005F36C
  if (crb(c,2)) { goto L_8005F380; } // 8005F370
  c->r[3]=c->r[31]|c->r[31]; // 8005F374
  c->lr=0x8005F37Cu; f_8005F398(c); // 8005F378
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[31]);} // 8005F37C
L_8005F380:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005F380
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8005F384
  c->r[31]=R32(c->r[1]+0x00000014u); // 8005F388
  c->lr=c->r[0]; // 8005F38C
  c->r[1]=c->r[1]+0x00000020u; // 8005F390
  return; // 8005F394
}

// fn_8005F398
void f_8005F398(Ctx* __restrict c) {
  trace_call(0x8005F398u);
  c->r[0]=R8(c->r[13]+0xFFFFBD80u); // 8005F398
  c->r[3]=c->r[3]+0x000000FCu; // 8005F39C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F3A0
  if (!crb(c,2)) { goto L_8005F3C0; } // 8005F3A4
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8005F3A8
  c->r[0]=0u+0x00000001u; // 8005F3AC
  W32(c->r[13]+0xFFFFBD7Cu,c->r[4]); // 8005F3B0
  c->r[4]=c->r[4]+0x00000001u; // 8005F3B4
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8005F3B8
  W8(c->r[13]+0xFFFFBD80u,c->r[0]); // 8005F3BC
L_8005F3C0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005F3C0
  c->r[4]=R32(c->r[13]+0xFFFFBD7Cu); // 8005F3C4
  c->r[12]=R32(c->r[12]+0x00000048u); // 8005F3C8
  c->ctr=c->r[12]; // 8005F3CC
  if (true) { dispatch(c,c->ctr); return; } // 8005F3D0
}

// fn_8005F3D4
void f_8005F3D4(Ctx* __restrict c) {
  trace_call(0x8005F3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F3D4
  c->r[0]=c->lr; // 8005F3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F3E0
  c->r[31]=c->r[3]|c->r[3]; // 8005F3E4
  c->lr=0x8005F3ECu; f_8005F420(c); // 8005F3E8
  cmps(c,0,(int32_t)c->r[3],0); // 8005F3EC
  if (!crb(c,2)) { goto L_8005F3FC; } // 8005F3F0
  c->r[3]=0u+0x00000000u; // 8005F3F4
  goto L_8005F40C; // 8005F3F8
L_8005F3FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8005F3FC
  c->lr=0x8005F404u; f_8005F420(c); // 8005F400
  c->lr=0x8005F408u; f_8017AF34(c); // 8005F404
  c->r[3]=0u+0x00000001u; // 8005F408
L_8005F40C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F40C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F410
  c->lr=c->r[0]; // 8005F414
  c->r[1]=c->r[1]+0x00000010u; // 8005F418
  return; // 8005F41C
}

// fn_8005F420
void f_8005F420(Ctx* __restrict c) {
  trace_call(0x8005F420u);
  c->r[0]=R8(c->r[13]+0xFFFFBD88u); // 8005F420
  c->r[3]=c->r[3]+0x000000FCu; // 8005F424
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F428
  if (!crb(c,2)) { goto L_8005F448; } // 8005F42C
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8005F430
  c->r[0]=0u+0x00000001u; // 8005F434
  W32(c->r[13]+0xFFFFBD84u,c->r[4]); // 8005F438
  c->r[4]=c->r[4]+0x00000001u; // 8005F43C
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8005F440
  W8(c->r[13]+0xFFFFBD88u,c->r[0]); // 8005F444
L_8005F448:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005F448
  c->r[4]=R32(c->r[13]+0xFFFFBD84u); // 8005F44C
  c->r[12]=R32(c->r[12]+0x00000048u); // 8005F450
  c->ctr=c->r[12]; // 8005F454
  if (true) { dispatch(c,c->ctr); return; } // 8005F458
}

// fn_8005F45C
void f_8005F45C(Ctx* __restrict c) {
  trace_call(0x8005F45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F45C
  c->r[0]=c->lr; // 8005F460
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F468
  c->r[31]=c->r[3]|c->r[3]; // 8005F46C
  c->lr=0x8005F474u; f_8005F4A8(c); // 8005F470
  cmps(c,0,(int32_t)c->r[3],0); // 8005F474
  if (!crb(c,2)) { goto L_8005F484; } // 8005F478
  c->r[3]=0u+0x00000000u; // 8005F47C
  goto L_8005F494; // 8005F480
L_8005F484:;
  c->r[3]=c->r[31]|c->r[31]; // 8005F484
  c->lr=0x8005F48Cu; f_8005F4A8(c); // 8005F488
  c->lr=0x8005F490u; f_8017AF34(c); // 8005F48C
  c->r[3]=0u+0x00000001u; // 8005F490
L_8005F494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F498
  c->lr=c->r[0]; // 8005F49C
  c->r[1]=c->r[1]+0x00000010u; // 8005F4A0
  return; // 8005F4A4
}

// fn_8005F4A8
void f_8005F4A8(Ctx* __restrict c) {
  trace_call(0x8005F4A8u);
  c->r[0]=R8(c->r[13]+0xFFFFBD90u); // 8005F4A8
  c->r[3]=c->r[3]+0x000000FCu; // 8005F4AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F4B0
  if (!crb(c,2)) { goto L_8005F4D0; } // 8005F4B4
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8005F4B8
  c->r[0]=0u+0x00000001u; // 8005F4BC
  W32(c->r[13]+0xFFFFBD8Cu,c->r[4]); // 8005F4C0
  c->r[4]=c->r[4]+0x00000001u; // 8005F4C4
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8005F4C8
  W8(c->r[13]+0xFFFFBD90u,c->r[0]); // 8005F4CC
L_8005F4D0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005F4D0
  c->r[4]=R32(c->r[13]+0xFFFFBD8Cu); // 8005F4D4
  c->r[12]=R32(c->r[12]+0x00000048u); // 8005F4D8
  c->ctr=c->r[12]; // 8005F4DC
  if (true) { dispatch(c,c->ctr); return; } // 8005F4E0
}

// fn_8005F4E4
void f_8005F4E4(Ctx* __restrict c) {
  trace_call(0x8005F4E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F4E4
  c->r[0]=c->lr; // 8005F4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F4EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F4F0
  c->r[31]=c->r[3]|c->r[3]; // 8005F4F4
  c->lr=0x8005F4FCu; f_8005F530(c); // 8005F4F8
  cmps(c,0,(int32_t)c->r[3],0); // 8005F4FC
  if (!crb(c,2)) { goto L_8005F50C; } // 8005F500
  c->r[3]=0u+0x00000000u; // 8005F504
  goto L_8005F51C; // 8005F508
L_8005F50C:;
  c->r[3]=c->r[31]|c->r[31]; // 8005F50C
  c->lr=0x8005F514u; f_8005F530(c); // 8005F510
  c->lr=0x8005F518u; f_8017AF34(c); // 8005F514
  c->r[3]=0u+0x00000001u; // 8005F518
L_8005F51C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F51C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F520
  c->lr=c->r[0]; // 8005F524
  c->r[1]=c->r[1]+0x00000010u; // 8005F528
  return; // 8005F52C
}

// fn_8005F530
void f_8005F530(Ctx* __restrict c) {
  trace_call(0x8005F530u);
  c->r[0]=R8(c->r[13]+0xFFFFBD98u); // 8005F530
  c->r[3]=c->r[3]+0x000000FCu; // 8005F534
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F538
  if (!crb(c,2)) { goto L_8005F558; } // 8005F53C
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8005F540
  c->r[0]=0u+0x00000001u; // 8005F544
  W32(c->r[13]+0xFFFFBD94u,c->r[4]); // 8005F548
  c->r[4]=c->r[4]+0x00000001u; // 8005F54C
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8005F550
  W8(c->r[13]+0xFFFFBD98u,c->r[0]); // 8005F554
L_8005F558:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005F558
  c->r[4]=R32(c->r[13]+0xFFFFBD94u); // 8005F55C
  c->r[12]=R32(c->r[12]+0x00000048u); // 8005F560
  c->ctr=c->r[12]; // 8005F564
  if (true) { dispatch(c,c->ctr); return; } // 8005F568
}

// fn_8005F56C
void f_8005F56C(Ctx* __restrict c) {
  trace_call(0x8005F56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F56C
  c->r[0]=c->lr; // 8005F570
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005F578
  c->r[31]=c->r[3]|c->r[3]; // 8005F57C
  c->lr=0x8005F584u; f_8005F5B8(c); // 8005F580
  cmps(c,0,(int32_t)c->r[3],0); // 8005F584
  if (!crb(c,2)) { goto L_8005F594; } // 8005F588
  c->r[3]=0u+0x00000000u; // 8005F58C
  goto L_8005F5A4; // 8005F590
L_8005F594:;
  c->r[3]=c->r[31]|c->r[31]; // 8005F594
  c->lr=0x8005F59Cu; f_8005F5B8(c); // 8005F598
  c->lr=0x8005F5A0u; f_8017AF34(c); // 8005F59C
  c->r[3]=0u+0x00000001u; // 8005F5A0
L_8005F5A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005F5A8
  c->lr=c->r[0]; // 8005F5AC
  c->r[1]=c->r[1]+0x00000010u; // 8005F5B0
  return; // 8005F5B4
}

// fn_8005F5B8
void f_8005F5B8(Ctx* __restrict c) {
  trace_call(0x8005F5B8u);
  c->r[0]=R8(c->r[13]+0xFFFFBDA0u); // 8005F5B8
  c->r[3]=c->r[3]+0x000000FCu; // 8005F5BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F5C0
  if (!crb(c,2)) { goto L_8005F5E0; } // 8005F5C4
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8005F5C8
  c->r[0]=0u+0x00000001u; // 8005F5CC
  W32(c->r[13]+0xFFFFBD9Cu,c->r[4]); // 8005F5D0
  c->r[4]=c->r[4]+0x00000001u; // 8005F5D4
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8005F5D8
  W8(c->r[13]+0xFFFFBDA0u,c->r[0]); // 8005F5DC
L_8005F5E0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005F5E0
  c->r[4]=R32(c->r[13]+0xFFFFBD9Cu); // 8005F5E4
  c->r[12]=R32(c->r[12]+0x00000048u); // 8005F5E8
  c->ctr=c->r[12]; // 8005F5EC
  if (true) { dispatch(c,c->ctr); return; } // 8005F5F0
}

// fn_8005F5F4
void f_8005F5F4(Ctx* __restrict c) {
  trace_call(0x8005F5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F5F4
  c->r[0]=c->lr; // 8005F5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F5FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F600
  c->r[30]=c->r[3]|c->r[3]; // 8005F604
  c->r[31]=0u+0x00000000u; // 8005F608
  c->r[0]=R32(c->r[3]+0x00000000u); // 8005F60C
  cmps(c,0,(int32_t)c->r[0],0); // 8005F610
  if (crb(c,2)) { goto L_8005F638; } // 8005F614
  c->lr=0x8005F61Cu; f_80046E94(c); // 8005F618
  c->r[3]=R32(c->r[3]+0x00000000u); // 8005F61C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8005F620
  c->r[3]=c->r[3]-c->r[0]; // 8005F624
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8005F628
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8005F62C
  if (!crb(c,2)) { goto L_8005F638; } // 8005F630
  c->r[31]=0u+0x00000001u; // 8005F634
L_8005F638:;
  c->r[0]=cntlz(c->r[31]); // 8005F638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F63C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005F640
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F644
  c->lr=c->r[0]; // 8005F648
  c->r[1]=c->r[1]+0x00000010u; // 8005F64C
  return; // 8005F650
}

// fn_8005F654
void f_8005F654(Ctx* __restrict c) {
  trace_call(0x8005F654u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F654
  c->r[0]=c->lr; // 8005F658
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005F65C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F660
  c->r[27]=c->r[4]|c->r[4]; // 8005F664
  c->r[28]=c->r[5]|c->r[5]; // 8005F668
  c->r[29]=c->r[6]|c->r[6]; // 8005F66C
  c->r[30]=c->r[7]|c->r[7]; // 8005F670
  c->r[31]=c->r[8]|c->r[8]; // 8005F674
  c->r[4]=0u+0x0000002Du; // 8005F678
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8005F67C
  c->r[3]=c->r[3]+0x000000C4u; // 8005F680
  c->lr=0x8005F688u; f_8005CDE8(c); // 8005F684
  cmps(c,0,(int32_t)c->r[3],0); // 8005F688
  if (!crb(c,2)) { goto L_8005F6CC; } // 8005F68C
  c->r[5]=R32(c->r[27]+0x00000000u); // 8005F690
  c->r[0]=0u+0x00000000u; // 8005F694
  c->r[4]=R32(c->r[27]+0x00000004u); // 8005F698
  c->r[3]=c->r[1]+0x00000008u; // 8005F69C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8005F6A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 8005F6A4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005F6A8
  c->lr=0x8005F6B0u; f_80046EFC(c); // 8005F6AC
  c->lr=0x8005F6B4u; f_800B281C(c); // 8005F6B0
  c->r[5]=c->r[28]|c->r[28]; // 8005F6B4
  c->r[6]=c->r[29]|c->r[29]; // 8005F6B8
  c->r[7]=c->r[30]|c->r[30]; // 8005F6BC
  c->r[8]=c->r[31]|c->r[31]; // 8005F6C0
  c->r[4]=c->r[1]+0x00000010u; // 8005F6C4
  c->lr=0x8005F6CCu; f_8024BD5C(c); // 8005F6C8
L_8005F6CC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F6CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005F6D0
  c->lr=c->r[0]; // 8005F6D4
  c->r[1]=c->r[1]+0x00000030u; // 8005F6D8
  return; // 8005F6DC
}

// fn_8005F6E0
void f_8005F6E0(Ctx* __restrict c) {
  trace_call(0x8005F6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F6E0
  c->r[0]=c->lr; // 8005F6E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005F6E8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F6EC
  c->r[28]=c->r[4]|c->r[4]; // 8005F6F0
  c->r[27]=c->r[3]|c->r[3]; // 8005F6F4
  c->r[29]=c->r[5]|c->r[5]; // 8005F6F8
  c->r[30]=c->r[6]|c->r[6]; // 8005F6FC
  c->r[4]=0u+0x0000002Eu; // 8005F700
  c->r[7]=R32(c->r[3]+0x0000044Cu); // 8005F704
  c->r[3]=c->r[7]+0x000000C4u; // 8005F708
  c->lr=0x8005F710u; f_8005CDE8(c); // 8005F70C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F710
  if (!crb(c,2)) { goto L_8005F794; } // 8005F714
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 8005F718
  c->r[3]=c->r[27]|c->r[27]; // 8005F71C
  c->r[4]=0u+0x00000000u; // 8005F720
  c->r[12]=R32(c->r[12]+0x000001A4u); // 8005F724
  c->ctr=c->r[12]; // 8005F728
  if (true) { c->lr=0x8005F730u; dispatch(c,c->ctr); } // 8005F72C
  cmps(c,0,(int32_t)c->r[3],0); // 8005F730
  c->r[31]=c->r[3]|c->r[3]; // 8005F734
  if (crb(c,2)) { goto L_8005F794; } // 8005F738
  c->r[5]=R32(c->r[28]+0x00000000u); // 8005F73C
  c->r[3]=c->r[27]|c->r[27]; // 8005F740
  c->r[0]=R32(c->r[28]+0x00000004u); // 8005F744
  c->r[4]=c->r[29]|c->r[29]; // 8005F748
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8005F74C
  W32(c->r[1]+0x00000008u,c->r[5]); // 8005F750
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 8005F754
  c->r[12]=R32(c->r[12]+0x000001ACu); // 8005F758
  c->ctr=c->r[12]; // 8005F75C
  if (true) { c->lr=0x8005F764u; dispatch(c,c->ctr); } // 8005F760
  c->r[8]=c->r[3]|c->r[3]; // 8005F764
  c->r[3]=c->r[27]|c->r[27]; // 8005F768
  c->r[5]=c->r[31]|c->r[31]; // 8005F76C
  c->r[7]=c->r[30]|c->r[30]; // 8005F770
  c->r[4]=c->r[1]+0x00000008u; // 8005F774
  c->r[6]=0u+0x00000001u; // 8005F778
  c->lr=0x8005F780u; f_8005F654(c); // 8005F77C
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 8005F780
  c->r[3]=c->r[27]|c->r[27]; // 8005F784
  c->r[12]=R32(c->r[12]+0x000001A8u); // 8005F788
  c->ctr=c->r[12]; // 8005F78C
  if (true) { c->lr=0x8005F794u; dispatch(c,c->ctr); } // 8005F790
L_8005F794:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F794
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005F798
  c->lr=c->r[0]; // 8005F79C
  c->r[1]=c->r[1]+0x00000030u; // 8005F7A0
  return; // 8005F7A4
}

// fn_8005F7A8
void f_8005F7A8(Ctx* __restrict c) {
  trace_call(0x8005F7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F7A8
  c->r[0]=c->lr; // 8005F7AC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8005F7B0
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F7B4
  c->r[29]=c->r[4]|c->r[4]; // 8005F7B8
  c->lr=0x8005F7C0u; f_80061A10(c); // 8005F7BC
  cmps(c,0,(int32_t)c->r[29],0); // 8005F7C0
  c->r[31]=c->r[3]|c->r[3]; // 8005F7C4
  if (!crb(c,2)) { goto L_8005F898; } // 8005F7C8
  cmps(c,0,(int32_t)c->r[3],0); // 8005F7CC
  if (crb(c,2)) { goto L_8005F898; } // 8005F7D0
  c->r[5]=0u+0x80690000u; // 8005F7D4
  c->r[3]=0u+0x80740000u; // 8005F7D8
  c->r[5]=c->r[5]+0xFFFFB8D8u; // 8005F7DC
  c->r[6]=0u+0x00000000u; // 8005F7E0
  c->r[4]=c->r[5]+0x0000006Fu; // 8005F7E4
  c->r[3]=c->r[3]+0x00004FD0u; // 8005F7E8
  c->r[5]=c->r[5]+0x000000A4u; // 8005F7EC
  c->lr=0x8005F7F4u; f_8005A7B0(c); // 8005F7F0
  cmps(c,0,(int32_t)c->r[3],0); // 8005F7F4
  c->r[30]=c->r[3]|c->r[3]; // 8005F7F8
  if (crb(c,2)) { goto L_8005F898; } // 8005F7FC
  c->r[0]=0u+0x00000000u; // 8005F800
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005F804
  c->r[3]=c->r[1]+0x00000008u; // 8005F808
  c->lr=0x8005F810u; f_80046FEC(c); // 8005F80C
  c->lr=0x8005F814u; f_801A15A4(c); // 8005F810
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8005F814
  c->r[4]=c->r[30]|c->r[30]; // 8005F818
  c->r[3]=c->r[1]+0x0000002Cu; // 8005F81C
  c->lr=0x8005F824u; f_802D8E94(c); // 8005F820
  c->r[3]=c->r[1]+0x0000002Cu; // 8005F824
  c->r[4]=0u+0x00000000u; // 8005F828
  c->lr=0x8005F830u; f_802D8F30(c); // 8005F82C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8005F830
  c->r[30]=0u+0x00000000u; // 8005F834
  W32(c->r[1]+0x00000010u,c->r[3]); // 8005F838
  W32(c->r[1]+0x00000018u,c->r[3]); // 8005F83C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8005F840
  goto L_8005F888; // 8005F844
L_8005F848:;
  c->r[5]=c->r[30]|c->r[30]; // 8005F848
  c->r[3]=c->r[1]+0x00000020u; // 8005F84C
  c->r[4]=c->r[1]+0x00000018u; // 8005F850
  c->lr=0x8005F858u; f_802D90FC(c); // 8005F854
  c->r[3]=c->r[1]+0x00000020u; // 8005F858
  c->r[4]=0u+0x00000000u; // 8005F85C
  c->lr=0x8005F864u; f_802D9584(c); // 8005F860
  c->r[4]=c->r[31]|c->r[31]; // 8005F864
  c->lr=0x8005F86Cu; f_803B393C(c); // 8005F868
  cmps(c,0,(int32_t)c->r[3],0); // 8005F86C
  if (!crb(c,2)) { goto L_8005F884; } // 8005F870
  c->r[4]=c->r[29]|c->r[29]; // 8005F874
  c->r[3]=c->r[1]+0x00000020u; // 8005F878
  c->lr=0x8005F880u; f_802D944C(c); // 8005F87C
  goto L_8005F89C; // 8005F880
L_8005F884:;
  c->r[30]=c->r[30]+0x00000001u; // 8005F884
L_8005F888:;
  c->r[3]=c->r[1]+0x00000018u; // 8005F888
  c->lr=0x8005F890u; f_802D90E0(c); // 8005F88C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8005F890
  if (crb(c,0)) { IRQCHK(c); goto L_8005F848; } // 8005F894
L_8005F898:;
  c->r[3]=0u+0x00000000u; // 8005F898
L_8005F89C:;
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F89C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8005F8A0
  c->lr=c->r[0]; // 8005F8A4
  c->r[1]=c->r[1]+0x00000050u; // 8005F8A8
  return; // 8005F8AC
}

// fn_8005F8B0
void f_8005F8B0(Ctx* __restrict c) {
  trace_call(0x8005F8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005F8B0
  c->r[0]=c->lr; // 8005F8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005F8B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005F8BC
  c->lr=0x8005F8C4u; f_8005F950(c); // 8005F8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8005F8C4
  c->r[30]=c->r[3]|c->r[3]; // 8005F8C8
  if (crb(c,0)) { goto L_8005F930; } // 8005F8CC
  c->r[0]=R8(c->r[13]+0xFFFFBB77u); // 8005F8D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F8D4
  if (!crb(c,2)) { goto L_8005F91C; } // 8005F8D8
  c->r[31]=0u+0x80730000u; // 8005F8DC
  c->r[3]=c->r[31]+0x00003694u; // 8005F8E0
  c->lr=0x8005F8E8u; f_800BD290(c); // 8005F8E4
  c->r[6]=0u+0x806D0000u; // 8005F8E8
  c->r[4]=0u+0x80050000u; // 8005F8EC
  c->r[6]=c->r[6]+0xFFFFC740u; // 8005F8F0
  c->r[3]=c->r[31]+0x00003694u; // 8005F8F4
  c->r[0]=c->r[6]+0x00000028u; // 8005F8F8
  c->r[5]=0u+0x80740000u; // 8005F8FC
  W32(c->r[3]+0x000000A4u,c->r[6]); // 8005F900
  c->r[4]=c->r[4]+0xFFFFA2E4u; // 8005F904
  c->r[5]=c->r[5]+0x00007460u; // 8005F908
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8005F90C
  c->lr=0x8005F914u; f_803A92B8(c); // 8005F910
  c->r[0]=0u+0x00000001u; // 8005F914
  W8(c->r[13]+0xFFFFBB77u,c->r[0]); // 8005F918
L_8005F91C:;
  c->r[3]=0u+0x80730000u; // 8005F91C
  c->r[3]=c->r[3]+0x00003694u; // 8005F920
  c->lr=0x8005F928u; f_800BFDC8(c); // 8005F924
  c->r[4]=c->r[30]|c->r[30]; // 8005F928
  c->lr=0x8005F930u; f_8026D4A8(c); // 8005F92C
L_8005F930:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005F930
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005F934
  c->lr=c->r[0]; // 8005F938
  c->r[1]=c->r[1]+0x00000010u; // 8005F93C
  return; // 8005F940
}

// fn_8005F944
void f_8005F944(Ctx* __restrict c) {
  trace_call(0x8005F944u);
  c->r[3]=R32(c->r[3]+0x00000444u); // 8005F944
  c->r[3]=c->r[3]+0x000001D8u; // 8005F948
  f_8005DCD0(c); return; // 8005F94C
}

// fn_8005F950
void f_8005F950(Ctx* __restrict c) {
  trace_call(0x8005F950u);
  c->r[0]=R8(c->r[13]+0xFFFFBDCCu); // 8005F950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F954
  if (!crb(c,2)) { goto L_8005F974; } // 8005F958
  c->r[4]=R32(c->r[13]+0xFFFFBDACu); // 8005F95C
  c->r[0]=0u+0x00000001u; // 8005F960
  W32(c->r[13]+0xFFFFBDC8u,c->r[4]); // 8005F964
  c->r[4]=c->r[4]+0x00000001u; // 8005F968
  W32(c->r[13]+0xFFFFBDACu,c->r[4]); // 8005F96C
  W8(c->r[13]+0xFFFFBDCCu,c->r[0]); // 8005F970
L_8005F974:;
  c->r[4]=R32(c->r[13]+0xFFFFBDC8u); // 8005F974
  c->r[0]=R32(c->r[3]+0x0000034Cu); // 8005F978
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005F97C
  if (!crb(c,2)) { goto L_8005F98C; } // 8005F980
  c->r[3]=0u+0x00000000u; // 8005F984
  return; // 8005F988
L_8005F98C:;
  c->r[0]=R8(c->r[13]+0xFFFFBDC4u); // 8005F98C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F990
  if (!crb(c,2)) { goto L_8005F9B0; } // 8005F994
  c->r[4]=R32(c->r[13]+0xFFFFBDACu); // 8005F998
  c->r[0]=0u+0x00000001u; // 8005F99C
  W32(c->r[13]+0xFFFFBDC0u,c->r[4]); // 8005F9A0
  c->r[4]=c->r[4]+0x00000001u; // 8005F9A4
  W32(c->r[13]+0xFFFFBDACu,c->r[4]); // 8005F9A8
  W8(c->r[13]+0xFFFFBDC4u,c->r[0]); // 8005F9AC
L_8005F9B0:;
  c->r[4]=R32(c->r[13]+0xFFFFBDC0u); // 8005F9B0
  c->r[0]=R32(c->r[3]+0x0000034Cu); // 8005F9B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005F9B8
  if (!crb(c,2)) { goto L_8005F9C8; } // 8005F9BC
  c->r[3]=0u+0x00000001u; // 8005F9C0
  return; // 8005F9C4
L_8005F9C8:;
  c->r[0]=R8(c->r[13]+0xFFFFBDBCu); // 8005F9C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005F9CC
  if (!crb(c,2)) { goto L_8005F9EC; } // 8005F9D0
  c->r[4]=R32(c->r[13]+0xFFFFBDACu); // 8005F9D4
  c->r[0]=0u+0x00000001u; // 8005F9D8
  W32(c->r[13]+0xFFFFBDB8u,c->r[4]); // 8005F9DC
  c->r[4]=c->r[4]+0x00000001u; // 8005F9E0
  W32(c->r[13]+0xFFFFBDACu,c->r[4]); // 8005F9E4
  W8(c->r[13]+0xFFFFBDBCu,c->r[0]); // 8005F9E8
L_8005F9EC:;
  c->r[4]=R32(c->r[13]+0xFFFFBDB8u); // 8005F9EC
  c->r[0]=R32(c->r[3]+0x0000034Cu); // 8005F9F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005F9F4
  if (!crb(c,2)) { goto L_8005FA04; } // 8005F9F8
  c->r[3]=0u+0x00000001u; // 8005F9FC
  return; // 8005FA00
L_8005FA04:;
  c->r[0]=R8(c->r[13]+0xFFFFBDB4u); // 8005FA04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005FA08
  if (!crb(c,2)) { goto L_8005FA28; } // 8005FA0C
  c->r[4]=R32(c->r[13]+0xFFFFBDACu); // 8005FA10
  c->r[0]=0u+0x00000001u; // 8005FA14
  W32(c->r[13]+0xFFFFBDB0u,c->r[4]); // 8005FA18
  c->r[4]=c->r[4]+0x00000001u; // 8005FA1C
  W32(c->r[13]+0xFFFFBDACu,c->r[4]); // 8005FA20
  W8(c->r[13]+0xFFFFBDB4u,c->r[0]); // 8005FA24
L_8005FA28:;
  c->r[4]=R32(c->r[13]+0xFFFFBDB0u); // 8005FA28
  c->r[0]=R32(c->r[3]+0x0000034Cu); // 8005FA2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005FA30
  if (!crb(c,2)) { goto L_8005FA40; } // 8005FA34
  c->r[3]=0u+0x00000002u; // 8005FA38
  return; // 8005FA3C
L_8005FA40:;
  c->r[0]=R8(c->r[13]+0xFFFFBDA8u); // 8005FA40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005FA44
  if (!crb(c,2)) { goto L_8005FA64; } // 8005FA48
  c->r[4]=R32(c->r[13]+0xFFFFBDACu); // 8005FA4C
  c->r[0]=0u+0x00000001u; // 8005FA50
  W32(c->r[13]+0xFFFFBDA4u,c->r[4]); // 8005FA54
  c->r[4]=c->r[4]+0x00000001u; // 8005FA58
  W32(c->r[13]+0xFFFFBDACu,c->r[4]); // 8005FA5C
  W8(c->r[13]+0xFFFFBDA8u,c->r[0]); // 8005FA60
L_8005FA64:;
  c->r[4]=R32(c->r[13]+0xFFFFBDA4u); // 8005FA64
  c->r[0]=R32(c->r[3]+0x0000034Cu); // 8005FA68
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005FA6C
  if (!crb(c,2)) { goto L_8005FA7C; } // 8005FA70
  c->r[3]=0u+0x00000003u; // 8005FA74
  return; // 8005FA78
L_8005FA7C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8005FA7C
  return; // 8005FA80
}

// fn_8005FA84
void f_8005FA84(Ctx* __restrict c) {
  trace_call(0x8005FA84u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FA84
  c->r[0]=c->lr; // 8005FA88
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8005FA8C
  c->r[11]=c->r[1]+0x000000A0u; // 8005FA90
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8005FA94
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8005FA98
  c->lr=0x8005FAA0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005FA9C
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 8005FAA0
  c->f[31]=c->f[1]; // 8005FAA4
  c->r[28]=c->r[4]|c->r[4]; // 8005FAA8
  c->r[29]=c->r[5]|c->r[5]; // 8005FAAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005FAB0
  c->r[30]=c->r[6]|c->r[6]; // 8005FAB4
  if (!crb(c,2)) { goto L_8005FAE8; } // 8005FAB8
  c->r[31]=0u+0x80730000u; // 8005FABC
  c->r[3]=c->r[31]+0x00002598u; // 8005FAC0
  c->lr=0x8005FAC8u; f_80321014(c); // 8005FAC4
  c->r[4]=0u+0x80320000u; // 8005FAC8
  c->r[5]=0u+0x80740000u; // 8005FACC
  c->r[3]=c->r[31]+0x00002598u; // 8005FAD0
  c->r[4]=c->r[4]+0x0000116Cu; // 8005FAD4
  c->r[5]=c->r[5]+0x000070F0u; // 8005FAD8
  c->lr=0x8005FAE0u; f_803A92B8(c); // 8005FADC
  c->r[0]=0u+0x00000001u; // 8005FAE0
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 8005FAE4
L_8005FAE8:;
  c->r[4]=0u+0x80730000u; // 8005FAE8
  c->r[5]=c->r[28]|c->r[28]; // 8005FAEC
  c->r[3]=c->r[1]+0x00000050u; // 8005FAF0
  c->r[6]=0u+0x00000001u; // 8005FAF4
  c->r[4]=c->r[4]+0x00002598u; // 8005FAF8
  c->lr=0x8005FB00u; f_80321B90(c); // 8005FAFC
  c->r[3]=c->r[1]+0x00000050u; // 8005FB00
  c->lr=0x8005FB08u; f_80320BEC(c); // 8005FB04
  cmps(c,0,(int32_t)c->r[3],0); // 8005FB08
  if (!crb(c,2)) { goto L_8005FB18; } // 8005FB0C
  c->r[3]=0u+0x00000000u; // 8005FB10
  goto L_8005FC00; // 8005FB14
L_8005FB18:;
  c->r[4]=c->r[30]|c->r[30]; // 8005FB18
  c->r[3]=c->r[1]+0x00000044u; // 8005FB1C
  c->lr=0x8005FB24u; f_8005CD7C(c); // 8005FB20
  c->lr=0x8005FB28u; f_8033FE4C(c); // 8005FB24
  c->r[5]=c->r[3]|c->r[3]; // 8005FB28
  c->r[3]=c->r[1]+0x00000008u; // 8005FB2C
  c->r[4]=c->r[5]+0x00000138u; // 8005FB30
  c->r[5]=c->r[5]+0x0000012Cu; // 8005FB34
  c->lr=0x8005FB3Cu; f_8005FC60(c); // 8005FB38
  c->r[5]=0u+0x806A0000u; // 8005FB3C
  c->r[4]=c->r[1]+0x00000008u; // 8005FB40
  c->r[3]=c->r[1]+0x00000014u; // 8005FB44
  c->r[5]=c->r[5]+0x00000AA8u; // 8005FB48
  c->lr=0x8005FB50u; f_8030E0BC(c); // 8005FB4C
  c->r[3]=c->r[1]+0x00000020u; // 8005FB50
  c->r[4]=c->r[1]+0x00000014u; // 8005FB54
  c->lr=0x8005FB5Cu; f_8005FC20(c); // 8005FB58
  c->f[1]=c->f[31]; // 8005FB5C
  c->r[3]=c->r[1]+0x0000002Cu; // 8005FB60
  c->r[4]=c->r[1]+0x00000020u; // 8005FB64
  c->lr=0x8005FB6Cu; f_8005ED34(c); // 8005FB68
  c->r[4]=c->r[29]|c->r[29]; // 8005FB6C
  c->r[3]=c->r[1]+0x00000038u; // 8005FB70
  c->r[5]=c->r[1]+0x0000002Cu; // 8005FB74
  c->lr=0x8005FB7Cu; f_8005ED10(c); // 8005FB78
  c->r[4]=0u+0x80760000u; // 8005FB7C
  {uint32_t ea=c->r[2]+0xFFFF827Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FB80
  c->r[3]=c->r[1]+0x00000044u; // 8005FB84
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 8005FB88
  c->lr=0x8005FB90u; f_8005FC84(c); // 8005FB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8005FB90
  if (crb(c,2)) { goto L_8005FBA8; } // 8005FB94
  c->r[4]=0u+0x80760000u; // 8005FB98
  c->r[3]=c->r[1]+0x00000044u; // 8005FB9C
  c->r[4]=c->r[4]+0xFFFF9CA8u; // 8005FBA0
  c->lr=0x8005FBA8u; f_8005DC84(c); // 8005FBA4
L_8005FBA8:;
  c->r[0]=R8(c->r[13]+0xFFFFBCC0u); // 8005FBA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005FBAC
  if (!crb(c,2)) { goto L_8005FBD4; } // 8005FBB0
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FBB4
  c->r[3]=0u+0x80740000u; // 8005FBB8
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005FBBC
  c->r[3]=c->r[3]+0x00007490u; // 8005FBC0
  c->f[3]=c->f[1]; // 8005FBC4
  c->lr=0x8005FBCCu; f_8005FD70(c); // 8005FBC8
  c->r[0]=0u+0x00000001u; // 8005FBCC
  W8(c->r[13]+0xFFFFBCC0u,c->r[0]); // 8005FBD0
L_8005FBD4:;
  c->r[5]=0u+0x80740000u; // 8005FBD4
  c->r[3]=c->r[1]+0x00000050u; // 8005FBD8
  c->r[4]=c->r[1]+0x00000044u; // 8005FBDC
  c->r[5]=c->r[5]+0x00007490u; // 8005FBE0
  c->lr=0x8005FBE8u; f_8005FD80(c); // 8005FBE4
  c->r[3]=c->r[1]+0x00000050u; // 8005FBE8
  c->r[4]=c->r[1]+0x00000038u; // 8005FBEC
  c->lr=0x8005FBF4u; f_8005CDC8(c); // 8005FBF0
  c->r[3]=c->r[1]+0x00000050u; // 8005FBF4
  c->lr=0x8005FBFCu; f_80320A28(c); // 8005FBF8
  c->r[3]=0u+0x00000001u; // 8005FBFC
L_8005FC00:;
  c->r[11]=c->r[1]+0x000000A0u; // 8005FC00
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8005FC04
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8005FC08
  c->lr=0x8005FC10u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005FC0C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8005FC10
  c->lr=c->r[0]; // 8005FC14
  c->r[1]=c->r[1]+0x000000B0u; // 8005FC18
  return; // 8005FC1C
}

// fn_8005FC20
void f_8005FC20(Ctx* __restrict c) {
  trace_call(0x8005FC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FC20
  c->r[0]=c->lr; // 8005FC24
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005FC28
  c->r[5]=c->r[1]+0x00000008u; // 8005FC2C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8005FC30
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8005FC34
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 8005FC38
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8005FC3C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8005FC40
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8005FC44
  c->r[4]=c->r[5]|c->r[5]; // 8005FC48
  c->lr=0x8005FC50u; f_8005CD7C(c); // 8005FC4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005FC50
  c->lr=c->r[0]; // 8005FC54
  c->r[1]=c->r[1]+0x00000020u; // 8005FC58
  return; // 8005FC5C
}

// fn_8005FC60
void f_8005FC60(Ctx* __restrict c) {
  trace_call(0x8005FC60u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 8005FC60
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8005FC64
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8005FC68
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8005FC6C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8005FC70
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8005FC74
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8005FC78
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8005FC7C
  return; // 8005FC80
}

// fn_8005FC84
void f_8005FC84(Ctx* __restrict c) {
  trace_call(0x8005FC84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FC84
  c->r[0]=c->lr; // 8005FC88
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005FC8C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8005FC90
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8005FC94
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8005FC98
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8005FC9C
  c->f[30]=c->f[1]; // 8005FCA0
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,31,ea,0,0);} // 8005FCA4
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 8005FCA8
  {double t0=S(c->f[31]*c->f[0]), t1=S(c->ps1[31]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8005FCAC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8005FCB0
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[31]); c->f[0]=t0; c->ps1[0]=t1;} // 8005FCB4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8005FCB8
  {double t0=S(std::fma(c->f[31],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[0],c->ps1[0])); c->f[31]=t0; c->ps1[31]=t1;} // 8005FCBC
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FCC0
  fcmp(c,0,c->f[31],c->f[0]); // 8005FCC4
  if (!crb(c,1)) { goto L_8005FCD4; } // 8005FCC8
  c->f[31]=c->f[0]; // 8005FCCC
  goto L_8005FCE4; // 8005FCD0
L_8005FCD4:;
  {uint32_t ea=c->r[2]+0xFFFF8280u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FCD4
  fcmp(c,0,c->f[31],c->f[0]); // 8005FCD8
  if (!crb(c,0)) { goto L_8005FCE4; } // 8005FCDC
  c->f[31]=c->f[0]; // 8005FCE0
L_8005FCE4:;
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FCE4
  c->r[0]=0u+0x00000000u; // 8005FCE8
  fcmp(c,0,c->f[31],c->f[0]); // 8005FCEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8005FCF0
  if (!crb(c,2)) { goto L_8005FD0C; } // 8005FCF4
  {uint32_t ea=c->r[2]+0xFFFF8280u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FCF8
  fcmp(c,0,c->f[31],c->f[0]); // 8005FCFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8005FD00
  if (!crb(c,2)) { goto L_8005FD0C; } // 8005FD04
  c->r[0]=0u+0x00000001u; // 8005FD08
L_8005FD0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8005FD0C
  if (!crb(c,2)) { goto L_8005FD30; } // 8005FD10
  c->r[3]=0u+0x806D0000u; // 8005FD14
  c->r[5]=0u+0x806D0000u; // 8005FD18
  c->r[3]=c->r[3]+0xFFFFE414u; // 8005FD1C
  c->r[4]=0u+0x000000EFu; // 8005FD20
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 8005FD24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005FD28
  c->lr=0x8005FD30u; f_80484708(c); // 8005FD2C
L_8005FD30:;
  c->f[1]=c->f[31]; // 8005FD30
  c->lr=0x8005FD38u; f_803BA740(c); // 8005FD34
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8005FD38
  fcmp(c,0,c->f[0],c->f[30]); // 8005FD3C
  if (!crb(c,1)) { goto L_8005FD4C; } // 8005FD40
  c->r[3]=0u+0x00000000u; // 8005FD44
  goto L_8005FD50; // 8005FD48
L_8005FD4C:;
  c->r[3]=0u+0x00000001u; // 8005FD4C
L_8005FD50:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005FD50
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8005FD54
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8005FD58
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 8005FD5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8005FD60
  c->lr=c->r[0]; // 8005FD64
  c->r[1]=c->r[1]+0x00000030u; // 8005FD68
  return; // 8005FD6C
}

// fn_8005FD70
void f_8005FD70(Ctx* __restrict c) {
  trace_call(0x8005FD70u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8005FD70
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8005FD74
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 8005FD78
  return; // 8005FD7C
}

// fn_8005FD80
void f_8005FD80(Ctx* __restrict c) {
  trace_call(0x8005FD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FD80
  c->r[0]=c->lr; // 8005FD84
  W32(c->r[1]+0x00000044u,c->r[0]); // 8005FD88
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8005FD8C
  c->r[31]=0u+0x806A0000u; // 8005FD90
  W32(c->r[1]+0x00000038u,c->r[30]); // 8005FD94
  c->r[30]=c->r[5]|c->r[5]; // 8005FD98
  c->r[5]=c->r[31]+0x00000AA8u; // 8005FD9C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8005FDA0
  c->r[29]=c->r[3]|c->r[3]; // 8005FDA4
  c->r[3]=c->r[1]+0x00000008u; // 8005FDA8
  c->lr=0x8005FDB0u; f_8030E0BC(c); // 8005FDAC
  c->r[3]=c->r[30]|c->r[30]; // 8005FDB0
  c->r[4]=c->r[1]+0x00000014u; // 8005FDB4
  c->r[5]=c->r[1]+0x00000008u; // 8005FDB8
  c->lr=0x8005FDC0u; f_8005FE58(c); // 8005FDBC
  c->r[3]=c->r[1]+0x00000014u; // 8005FDC0
  c->r[5]=c->r[31]+0x00000AA8u; // 8005FDC4
  c->r[4]=c->r[3]|c->r[3]; // 8005FDC8
  c->lr=0x8005FDD0u; f_8030E0BC(c); // 8005FDCC
  c->r[3]=c->r[1]+0x00000008u; // 8005FDD0
  c->r[4]=c->r[1]+0x00000020u; // 8005FDD4
  c->r[5]=c->r[1]+0x00000014u; // 8005FDD8
  c->lr=0x8005FDE0u; f_8005FE58(c); // 8005FDDC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FDE0
  c->r[3]=c->r[29]|c->r[29]; // 8005FDE4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8005FDE8
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005FDEC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FDF0
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[1]);} // 8005FDF4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FDF8
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 8005FDFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE00
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8005FE04
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE08
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[1]);} // 8005FE0C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE10
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 8005FE14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE18
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8005FE1C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE20
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8005FE24
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FE28
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[1]);} // 8005FE2C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8005FE30
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 8005FE34
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 8005FE38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8005FE3C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8005FE40
  c->r[29]=R32(c->r[1]+0x00000034u); // 8005FE44
  c->r[0]=R32(c->r[1]+0x00000044u); // 8005FE48
  c->lr=c->r[0]; // 8005FE4C
  c->r[1]=c->r[1]+0x00000040u; // 8005FE50
  return; // 8005FE54
}

// fn_8005FE58
void f_8005FE58(Ctx* __restrict c) {
  trace_call(0x8005FE58u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8005FE58
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 8005FE5C
  {double t0=S(c->f[1]*c->ps1[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 8005FE60
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8005FE64
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8005FE68
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 8005FE6C
  {double t0=S(std::fma(c->f[2],c->f[1],-c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8005FE70
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8005FE74
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8005FE78
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8005FE7C
  {double t0=S(c->ps1[0]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8005FE80
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8005FE84
  return; // 8005FE88
}

// fn_8005FE8C
void f_8005FE8C(Ctx* __restrict c) {
  trace_call(0x8005FE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FE8C
  c->r[0]=c->lr; // 8005FE90
  cmps(c,0,(int32_t)c->r[3],0); // 8005FE94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005FE98
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005FE9C
  c->r[28]=c->r[4]|c->r[4]; // 8005FEA0
  c->r[29]=c->r[5]|c->r[5]; // 8005FEA4
  c->r[30]=c->r[6]|c->r[6]; // 8005FEA8
  c->r[31]=c->r[7]|c->r[7]; // 8005FEAC
  if (crb(c,2)) { goto L_8005FEB8; } // 8005FEB0
  c->r[3]=c->r[3]+0x00000020u; // 8005FEB4
L_8005FEB8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8005FEB8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8005FEBC
  W32(c->r[1]+0x00000008u,c->r[4]); // 8005FEC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8005FEC4
  W32(c->r[1]+0x00000010u,c->r[4]); // 8005FEC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005FECC
  c->lr=0x8005FED4u; f_80067D60(c); // 8005FED0
  c->r[3]=R32(c->r[3]+0x00000010u); // 8005FED4
  c->r[4]=c->r[28]|c->r[28]; // 8005FED8
  c->r[5]=c->r[29]|c->r[29]; // 8005FEDC
  c->r[6]=c->r[30]|c->r[30]; // 8005FEE0
  c->r[8]=c->r[31]|c->r[31]; // 8005FEE4
  c->r[7]=c->r[1]+0x00000010u; // 8005FEE8
  c->lr=0x8005FEF0u; f_8011DC78(c); // 8005FEEC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005FEF0
  c->r[3]=0u+0x00000001u; // 8005FEF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005FEF8
  c->lr=c->r[0]; // 8005FEFC
  c->r[1]=c->r[1]+0x00000030u; // 8005FF00
  return; // 8005FF04
}

// fn_8005FF08
void f_8005FF08(Ctx* __restrict c) {
  trace_call(0x8005FF08u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005FF08
  c->r[0]=c->lr; // 8005FF0C
  W32(c->r[1]+0x00000084u,c->r[0]); // 8005FF10
  c->r[11]=c->r[1]+0x00000080u; // 8005FF14
  c->lr=0x8005FF1Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005FF18
  cmps(c,0,(int32_t)c->r[7],3); // 8005FF1C
  c->r[28]=c->r[3]|c->r[3]; // 8005FF20
  c->r[29]=c->r[4]|c->r[4]; // 8005FF24
  c->r[31]=c->r[5]|c->r[5]; // 8005FF28
  c->r[30]=c->r[6]|c->r[6]; // 8005FF2C
  if (crb(c,2)) { goto L_8006008C; } // 8005FF30
  c->r[4]=c->r[8]|c->r[8]; // 8005FF34
  c->r[5]=c->r[7]|c->r[7]; // 8005FF38
  c->r[3]=c->r[1]+0x00000058u; // 8005FF3C
  c->lr=0x8005FF44u; f_8013E99C(c); // 8005FF40
  cmps(c,0,(int32_t)c->r[3],0); // 8005FF44
  if (crb(c,2)) { goto L_8005FFFC; } // 8005FF48
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 8005FF4C
  cmps(c,0,(int32_t)c->r[0],0); // 8005FF50
  if (crb(c,2)) { goto L_8005FF78; } // 8005FF54
  c->r[4]=R32(c->r[1]+0x00000058u); // 8005FF58
  c->r[3]=c->r[28]|c->r[28]; // 8005FF5C
  {uint32_t ea=c->r[13]+0xFFFF80A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FF60
  c->r[5]=c->r[29]|c->r[29]; // 8005FF64
  c->r[6]=c->r[31]|c->r[31]; // 8005FF68
  c->r[7]=c->r[30]|c->r[30]; // 8005FF6C
  c->lr=0x8005FF74u; f_8005FE8C(c); // 8005FF70
  goto L_8005FFC8; // 8005FF74
L_8005FF78:;
  c->lr=0x8005FF7Cu; f_8033FE4C(c); // 8005FF78
  c->r[5]=c->r[3]|c->r[3]; // 8005FF7C
  c->r[3]=c->r[1]+0x0000001Cu; // 8005FF80
  c->r[4]=c->r[5]+0x00000138u; // 8005FF84
  c->r[5]=c->r[5]+0x0000012Cu; // 8005FF88
  c->lr=0x8005FF90u; f_8005FC60(c); // 8005FF8C
  c->r[5]=0u+0x806A0000u; // 8005FF90
  c->r[4]=c->r[1]+0x0000001Cu; // 8005FF94
  c->r[3]=c->r[1]+0x00000040u; // 8005FF98
  c->r[5]=c->r[5]+0x00000AA8u; // 8005FF9C
  c->lr=0x8005FFA4u; f_8030E0BC(c); // 8005FFA0
  c->r[3]=c->r[1]+0x0000004Cu; // 8005FFA4
  c->r[4]=c->r[1]+0x00000040u; // 8005FFA8
  c->lr=0x8005FFB0u; f_8005FC20(c); // 8005FFAC
  c->r[4]=R32(c->r[1]+0x00000058u); // 8005FFB0
  c->r[3]=c->r[28]|c->r[28]; // 8005FFB4
  {uint32_t ea=c->r[13]+0xFFFF80A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FFB8
  c->r[5]=c->r[29]|c->r[29]; // 8005FFBC
  c->r[6]=c->r[1]+0x0000004Cu; // 8005FFC0
  c->lr=0x8005FFC8u; f_8005FA84(c); // 8005FFC4
L_8005FFC8:;
  c->r[0]=0u+0x00000000u; // 8005FFC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8005FFCC
  c->r[3]=c->r[1]+0x0000000Cu; // 8005FFD0
  c->lr=0x8005FFD8u; f_800474F4(c); // 8005FFD4
  c->r[4]=R32(c->r[1]+0x00000060u); // 8005FFD8
  c->r[5]=c->r[29]|c->r[29]; // 8005FFDC
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005FFE0
  c->r[6]=0u+0xFFFFFFFFu; // 8005FFE4
  c->r[7]=0u+0x00000000u; // 8005FFE8
  c->r[8]=0u+0x00000000u; // 8005FFEC
  c->r[9]=0u+0x00000001u; // 8005FFF0
  c->lr=0x8005FFF8u; f_8004BFE0(c); // 8005FFF4
  goto L_8006008C; // 8005FFF8
L_8005FFFC:;
  c->r[3]=0u+0x80690000u; // 8005FFFC
  c->r[3]=c->r[3]+0xFFFFB8D8u; // 80060000
  c->r[31]=c->r[3]+0x000000CBu; // 80060004
  c->r[30]=c->r[3]+0x000000D1u; // 80060008
  c->lr=0x80060010u; f_8033FE4C(c); // 8006000C
  c->r[5]=c->r[3]|c->r[3]; // 80060010
  c->r[3]=c->r[1]+0x00000010u; // 80060014
  c->r[4]=c->r[5]+0x00000138u; // 80060018
  c->r[5]=c->r[5]+0x0000012Cu; // 8006001C
  c->lr=0x80060024u; f_8005FC60(c); // 80060020
  c->r[5]=0u+0x806A0000u; // 80060024
  c->r[4]=c->r[1]+0x00000010u; // 80060028
  c->r[3]=c->r[1]+0x00000028u; // 8006002C
  c->r[5]=c->r[5]+0x00000AA8u; // 80060030
  c->lr=0x80060038u; f_8030E0BC(c); // 80060034
  c->r[3]=c->r[1]+0x00000034u; // 80060038
  c->r[4]=c->r[1]+0x00000028u; // 8006003C
  c->lr=0x80060044u; f_8005FC20(c); // 80060040
  {uint32_t ea=c->r[13]+0xFFFF80A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060044
  c->r[3]=c->r[28]|c->r[28]; // 80060048
  c->r[4]=c->r[31]|c->r[31]; // 8006004C
  c->r[5]=c->r[29]|c->r[29]; // 80060050
  c->r[6]=c->r[1]+0x00000034u; // 80060054
  c->lr=0x8006005Cu; f_8005FA84(c); // 80060058
  c->r[0]=0u+0x00000000u; // 8006005C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80060060
  c->r[3]=c->r[1]+0x00000008u; // 80060064
  c->lr=0x8006006Cu; f_800474F4(c); // 80060068
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006006C
  c->r[4]=c->r[30]|c->r[30]; // 80060070
  c->r[5]=c->r[29]|c->r[29]; // 80060074
  c->r[6]=0u+0xFFFFFFFFu; // 80060078
  c->r[7]=0u+0x00000000u; // 8006007C
  c->r[8]=0u+0x00000000u; // 80060080
  c->r[9]=0u+0x00000001u; // 80060084
  c->lr=0x8006008Cu; f_8004BFE0(c); // 80060088
L_8006008C:;
  c->r[11]=c->r[1]+0x00000080u; // 8006008C
  c->lr=0x80060094u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80060090
  c->r[0]=R32(c->r[1]+0x00000084u); // 80060094
  c->lr=c->r[0]; // 80060098
  c->r[1]=c->r[1]+0x00000080u; // 8006009C
  return; // 800600A0
}

// fn_800600A4
void f_800600A4(Ctx* __restrict c) {
  trace_call(0x800600A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800600A4
  c->r[0]=c->lr; // 800600A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800600AC
  c->r[11]=c->r[1]+0x00000030u; // 800600B0
  c->lr=0x800600B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800600B4
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800600B8
  c->r[29]=c->r[3]|c->r[3]; // 800600BC
  c->r[30]=0u+0x00000000u; // 800600C0
  c->r[4]=0u+0x0000001Fu; // 800600C4
  c->r[3]=c->r[5]+0x000000C4u; // 800600C8
  c->lr=0x800600D0u; f_8005CDE8(c); // 800600CC
  cmps(c,0,(int32_t)c->r[3],0); // 800600D0
  if (crb(c,2)) { goto L_8006011C; } // 800600D4
  c->lr=0x800600DCu; f_8033FE4C(c); // 800600D8
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 800600DC
  c->r[31]=c->r[3]|c->r[3]; // 800600E0
  c->r[4]=c->r[29]|c->r[29]; // 800600E4
  c->r[3]=c->r[1]+0x00000008u; // 800600E8
  c->r[12]=R32(c->r[12]+0x00000134u); // 800600EC
  c->ctr=c->r[12]; // 800600F0
  if (true) { c->lr=0x800600F8u; dispatch(c,c->ctr); } // 800600F4
  c->r[5]=0u+0x80760000u; // 800600F8
  c->r[3]=c->r[1]+0x00000008u; // 800600FC
  c->r[4]=c->r[31]+0x0000012Cu; // 80060100
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 80060104
  c->lr=0x8006010Cu; f_8032B134(c); // 80060108
  {uint32_t ea=c->r[2]+0xFFFF8254u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006010C
  fcmp(c,0,c->f[1],c->f[0]); // 80060110
  if (!crb(c,0)) { goto L_8006011C; } // 80060114
  c->r[30]=0u+0x00000001u; // 80060118
L_8006011C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8006011C
  if (crb(c,2)) { goto L_80060144; } // 80060120
  c->r[5]=0u+0x80760000u; // 80060124
  c->r[6]=0u+0x80760000u; // 80060128
  c->r[4]=R32(c->r[13]+0xFFFF8098u); // 8006012C
  c->r[3]=c->r[29]|c->r[29]; // 80060130
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060134
  c->r[5]=c->r[5]+0xFFFF9C78u; // 80060138
  c->r[6]=c->r[6]+0xFFFF9CA8u; // 8006013C
  c->lr=0x80060144u; f_8005FA84(c); // 80060140
L_80060144:;
  c->r[11]=c->r[1]+0x00000030u; // 80060144
  c->lr=0x8006014Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80060148
  c->r[0]=R32(c->r[1]+0x00000034u); // 8006014C
  c->lr=c->r[0]; // 80060150
  c->r[1]=c->r[1]+0x00000030u; // 80060154
  return; // 80060158
}

// fn_8006015C
void f_8006015C(Ctx* __restrict c) {
  trace_call(0x8006015Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006015C
  c->r[0]=c->lr; // 80060160
  W32(c->r[1]+0x00000044u,c->r[0]); // 80060164
  c->r[11]=c->r[1]+0x00000040u; // 80060168
  c->lr=0x80060170u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8006016C
  cmps(c,0,(int32_t)c->r[7],3); // 80060170
  c->r[29]=c->r[3]|c->r[3]; // 80060174
  c->r[30]=c->r[4]|c->r[4]; // 80060178
  c->r[31]=c->r[6]|c->r[6]; // 8006017C
  if (crb(c,2)) { goto L_800601FC; } // 80060180
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80060184
  c->r[4]=c->r[8]|c->r[8]; // 80060188
  c->r[12]=R32(c->r[12]+0x000001ACu); // 8006018C
  c->ctr=c->r[12]; // 80060190
  if (true) { c->lr=0x80060198u; dispatch(c,c->ctr); } // 80060194
  cmps(c,0,(int32_t)c->r[3],0); // 80060198
  if (crb(c,2)) { goto L_800601FC; } // 8006019C
  c->lr=0x800601A4u; f_8033FE4C(c); // 800601A0
  c->r[5]=c->r[3]|c->r[3]; // 800601A4
  c->r[3]=c->r[1]+0x00000008u; // 800601A8
  c->r[4]=c->r[5]+0x00000138u; // 800601AC
  c->r[5]=c->r[5]+0x0000012Cu; // 800601B0
  c->lr=0x800601B8u; f_8005FC60(c); // 800601B4
  c->r[5]=0u+0x806A0000u; // 800601B8
  c->r[4]=c->r[1]+0x00000008u; // 800601BC
  c->r[3]=c->r[1]+0x00000014u; // 800601C0
  c->r[5]=c->r[5]+0x00000AA8u; // 800601C4
  c->lr=0x800601CCu; f_8030E0BC(c); // 800601C8
  c->r[3]=c->r[1]+0x00000020u; // 800601CC
  c->r[4]=c->r[1]+0x00000014u; // 800601D0
  c->lr=0x800601D8u; f_8005FC20(c); // 800601D4
  c->r[4]=0u+0x80690000u; // 800601D8
  {uint32_t ea=c->r[2]+0xFFFF8284u; c->f[1]=c->ps1[1]=RF32(ea);} // 800601DC
  c->r[4]=c->r[4]+0xFFFFB8D8u; // 800601E0
  c->r[3]=c->r[29]|c->r[29]; // 800601E4
  c->r[5]=c->r[30]|c->r[30]; // 800601E8
  c->r[7]=c->r[31]|c->r[31]; // 800601EC
  c->r[4]=c->r[4]+0x000000D8u; // 800601F0
  c->r[6]=c->r[1]+0x00000020u; // 800601F4
  c->lr=0x800601FCu; f_8005FE8C(c); // 800601F8
L_800601FC:;
  c->r[11]=c->r[1]+0x00000040u; // 800601FC
  c->lr=0x80060204u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80060200
  c->r[0]=R32(c->r[1]+0x00000044u); // 80060204
  c->lr=c->r[0]; // 80060208
  c->r[1]=c->r[1]+0x00000040u; // 8006020C
  return; // 80060210
}

// fn_80060214
void f_80060214(Ctx* __restrict c) {
  trace_call(0x80060214u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060214
  c->r[0]=c->lr; // 80060218
  cmps(c,0,(int32_t)c->r[7],3); // 8006021C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80060220
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80060224
  c->r[31]=c->r[4]|c->r[4]; // 80060228
  W32(c->r[1]+0x00000038u,c->r[30]); // 8006022C
  c->r[30]=c->r[3]|c->r[3]; // 80060230
  if (crb(c,2)) { goto L_80060290; } // 80060234
  c->lr=0x8006023Cu; f_8033FE4C(c); // 80060238
  c->r[5]=c->r[3]|c->r[3]; // 8006023C
  c->r[3]=c->r[1]+0x00000008u; // 80060240
  c->r[4]=c->r[5]+0x00000138u; // 80060244
  c->r[5]=c->r[5]+0x0000012Cu; // 80060248
  c->lr=0x80060250u; f_8005FC60(c); // 8006024C
  c->r[5]=0u+0x806A0000u; // 80060250
  c->r[4]=c->r[1]+0x00000008u; // 80060254
  c->r[3]=c->r[1]+0x00000014u; // 80060258
  c->r[5]=c->r[5]+0x00000AA8u; // 8006025C
  c->lr=0x80060264u; f_8030E0BC(c); // 80060260
  c->r[3]=c->r[1]+0x00000020u; // 80060264
  c->r[4]=c->r[1]+0x00000014u; // 80060268
  c->lr=0x80060270u; f_8005FC20(c); // 8006026C
  c->r[4]=0u+0x80690000u; // 80060270
  {uint32_t ea=c->r[2]+0xFFFF8284u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060274
  c->r[4]=c->r[4]+0xFFFFB8D8u; // 80060278
  c->r[3]=c->r[30]|c->r[30]; // 8006027C
  c->r[5]=c->r[31]|c->r[31]; // 80060280
  c->r[6]=c->r[1]+0x00000020u; // 80060284
  c->r[4]=c->r[4]+0x000000E8u; // 80060288
  c->lr=0x80060290u; f_8005FA84(c); // 8006028C
L_80060290:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80060290
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80060294
  c->r[30]=R32(c->r[1]+0x00000038u); // 80060298
  c->lr=c->r[0]; // 8006029C
  c->r[1]=c->r[1]+0x00000040u; // 800602A0
  return; // 800602A4
}

// fn_800602A8
void f_800602A8(Ctx* __restrict c) {
  trace_call(0x800602A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800602A8
  c->r[0]=c->lr; // 800602AC
  c->r[3]=0u+0x80690000u; // 800602B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800602B4
  c->r[0]=0u+0x00000000u; // 800602B8
  c->r[3]=c->r[3]+0xFFFFB8D8u; // 800602BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800602C0
  c->r[31]=c->r[3]+0x000000F6u; // 800602C4
  c->r[3]=c->r[1]+0x00000008u; // 800602C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800602CC
  c->lr=0x800602D4u; f_800474F4(c); // 800602D0
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[1]=c->ps1[1]=RF32(ea);} // 800602D4
  c->r[4]=c->r[31]|c->r[31]; // 800602D8
  c->r[5]=0u+0x00000000u; // 800602DC
  c->r[6]=0u+0xFFFFFFFFu; // 800602E0
  c->r[7]=0u+0x00000000u; // 800602E4
  c->r[8]=0u+0x00000000u; // 800602E8
  c->r[9]=0u+0x00000001u; // 800602EC
  c->lr=0x800602F4u; f_8004BFE0(c); // 800602F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800602F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800602F8
  c->lr=c->r[0]; // 800602FC
  c->r[1]=c->r[1]+0x00000020u; // 80060300
  return; // 80060304
}

// fn_80060308
void f_80060308(Ctx* __restrict c) {
  trace_call(0x80060308u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060308
  c->r[0]=c->lr; // 8006030C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80060310
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80060314
  c->r[28]=c->r[3]|c->r[3]; // 80060318
  c->r[29]=c->r[4]|c->r[4]; // 8006031C
  c->r[30]=c->r[5]|c->r[5]; // 80060320
  c->r[31]=c->r[6]|c->r[6]; // 80060324
  c->lr=0x8006032Cu; f_80060404(c); // 80060328
  cmps(c,0,(int32_t)c->r[3],0); // 8006032C
  if (crb(c,2)) { goto L_8006033C; } // 80060330
  c->r[0]=R32(c->r[3]+0x00000038u); // 80060334
  goto L_80060340; // 80060338
L_8006033C:;
  c->r[0]=0u+0x00000000u; // 8006033C
L_80060340:;
  cmps(c,0,(int32_t)c->r[0],0); // 80060340
  if (crb(c,2)) { goto L_80060350; } // 80060344
  c->r[3]=0u+0x00000000u; // 80060348
  goto L_800603F0; // 8006034C
L_80060350:;
  cmps(c,0,(int32_t)c->r[31],0); // 80060350
  if (crb(c,2)) { goto L_800603A0; } // 80060354
  c->r[3]=c->r[31]|c->r[31]; // 80060358
  c->r[4]=0u+0x0000000Au; // 8006035C
  c->lr=0x80060364u; f_802D9584(c); // 80060360
  c->r[4]=c->r[3]|c->r[3]; // 80060364
  c->r[3]=c->r[1]+0x00000008u; // 80060368
  c->r[5]=0u+0x00000000u; // 8006036C
  c->r[6]=0u+0x00000000u; // 80060370
  c->r[7]=0u+0x00000000u; // 80060374
  c->lr=0x8006037Cu; f_800A7BF4(c); // 80060378
  c->r[4]=0u+0x80690000u; // 8006037C
  c->r[3]=c->r[1]+0x00000008u; // 80060380
  c->r[4]=c->r[4]+0xFFFFB8D8u; // 80060384
  c->r[4]=c->r[4]+0x000000FCu; // 80060388
  c->lr=0x80060390u; f_800A7CCC(c); // 8006038C
  cmps(c,0,(int32_t)c->r[3],0); // 80060390
  if (!crb(c,0)) { goto L_800603A0; } // 80060394
  c->r[3]=0u+0x00000000u; // 80060398
  goto L_800603F0; // 8006039C
L_800603A0:;
  c->lr=0x800603A4u; f_80052EE8(c); // 800603A0
  c->r[4]=0u+0x0000003Cu; // 800603A4
  c->lr=0x800603ACu; f_8005BFB0(c); // 800603A8
  cmps(c,0,(int32_t)c->r[3],0); // 800603AC
  c->r[31]=c->r[3]|c->r[3]; // 800603B0
  if (crb(c,2)) { goto L_800603BC; } // 800603B4
  c->lr=0x800603BCu; f_8027DECC(c); // 800603B8
L_800603BC:;
  c->r[12]=R32(c->r[28]+0x000000FCu); // 800603BC
  c->r[3]=c->r[28]+0x000000FCu; // 800603C0
  c->r[4]=c->r[31]|c->r[31]; // 800603C4
  c->r[5]=0u+0x00000001u; // 800603C8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800603CC
  c->ctr=c->r[12]; // 800603D0
  if (true) { c->lr=0x800603D8u; dispatch(c,c->ctr); } // 800603D4
  c->r[3]=c->r[28]|c->r[28]; // 800603D8
  c->lr=0x800603E0u; f_80060404(c); // 800603DC
  c->r[4]=c->r[29]|c->r[29]; // 800603E0
  c->r[5]=c->r[30]|c->r[30]; // 800603E4
  c->lr=0x800603ECu; f_8027E1BC(c); // 800603E8
  c->r[3]=0u+0x00000001u; // 800603EC
L_800603F0:;
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800603F0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800603F4
  c->lr=c->r[0]; // 800603F8
  c->r[1]=c->r[1]+0x00000060u; // 800603FC
  return; // 80060400
}

// fn_80060404
void f_80060404(Ctx* __restrict c) {
  trace_call(0x80060404u);
  c->r[0]=R8(c->r[13]+0xFFFFBDD4u); // 80060404
  c->r[3]=c->r[3]+0x000000FCu; // 80060408
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8006040C
  if (!crb(c,2)) { goto L_8006042C; } // 80060410
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 80060414
  c->r[0]=0u+0x00000001u; // 80060418
  W32(c->r[13]+0xFFFFBDD0u,c->r[4]); // 8006041C
  c->r[4]=c->r[4]+0x00000001u; // 80060420
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 80060424
  W8(c->r[13]+0xFFFFBDD4u,c->r[0]); // 80060428
L_8006042C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8006042C
  c->r[4]=R32(c->r[13]+0xFFFFBDD0u); // 80060430
  c->r[12]=R32(c->r[12]+0x00000048u); // 80060434
  c->ctr=c->r[12]; // 80060438
  if (true) { dispatch(c,c->ctr); return; } // 8006043C
}

// fn_80060440
void f_80060440(Ctx* __restrict c) {
  trace_call(0x80060440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060440
  c->r[0]=c->lr; // 80060444
  W32(c->r[1]+0x00000014u,c->r[0]); // 80060448
  c->lr=0x80060450u; f_80060404(c); // 8006044C
  cmps(c,0,(int32_t)c->r[3],0); // 80060450
  if (crb(c,2)) { goto L_80060460; } // 80060454
  c->r[3]=R32(c->r[3]+0x00000038u); // 80060458
  goto L_80060464; // 8006045C
L_80060460:;
  c->r[3]=0u+0x00000000u; // 80060460
L_80060464:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80060464
  c->lr=c->r[0]; // 80060468
  c->r[1]=c->r[1]+0x00000010u; // 8006046C
  return; // 80060470
}

// fn_80060474
void f_80060474(Ctx* __restrict c) {
  trace_call(0x80060474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060474
  c->r[0]=c->lr; // 80060478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006047C
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 80060480
  cmps(c,0,(int32_t)c->r[3],0); // 80060484
  if (crb(c,2)) { goto L_8006049C; } // 80060488
  c->lr=0x80060490u; f_800CEC64(c); // 8006048C
  c->lr=0x80060494u; f_800CD5F8(c); // 80060490
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80060494
  goto L_800604A0; // 80060498
L_8006049C:;
  c->r[3]=0u+0x00000003u; // 8006049C
L_800604A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800604A0
  c->lr=c->r[0]; // 800604A4
  c->r[1]=c->r[1]+0x00000010u; // 800604A8
  return; // 800604AC
}

// fn_800604B0
void f_800604B0(Ctx* __restrict c) {
  trace_call(0x800604B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800604B0
  c->r[0]=c->lr; // 800604B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800604B8
  c->r[0]=0u+0x00000000u; // 800604BC
  c->r[3]=c->r[1]+0x00000008u; // 800604C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800604C4
  c->r[31]=c->r[4]|c->r[4]; // 800604C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800604CC
  c->lr=0x800604D4u; f_80046FEC(c); // 800604D0
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[1]=c->ps1[1]=RF32(ea);} // 800604D4
  c->r[4]=c->r[31]|c->r[31]; // 800604D8
  c->lr=0x800604E0u; f_801A1280(c); // 800604DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800604E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800604E4
  c->lr=c->r[0]; // 800604E8
  c->r[1]=c->r[1]+0x00000020u; // 800604EC
  return; // 800604F0
}

// fn_800604F4
void f_800604F4(Ctx* __restrict c) {
  trace_call(0x800604F4u);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 800604F4
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 800604F8
  if (!crb(c,2)) { goto L_80060508; } // 800604FC
  c->r[3]=0u+0x00000000u; // 80060500
  return; // 80060504
L_80060508:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 80060508
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 8006050C
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 80060510
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80060514
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80060518
  return; // 8006051C
}

// fn_80060520
void f_80060520(Ctx* __restrict c) {
  trace_call(0x80060520u);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 80060520
  c->r[3]=rotl(c->r[0],4)&0x00000001u; // 80060524
  return; // 80060528
}

// fn_8006052C
void f_8006052C(Ctx* __restrict c) {
  trace_call(0x8006052Cu);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 8006052C
  c->r[0]=c->r[0]|0x10000000u; // 80060530
  W32(c->r[3]+0x000005BCu,c->r[0]); // 80060534
  return; // 80060538
}

// fn_8006053C
void f_8006053C(Ctx* __restrict c) {
  trace_call(0x8006053Cu);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 8006053C
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80060540
  W32(c->r[3]+0x000005BCu,c->r[0]); // 80060544
  return; // 80060548
}

// fn_8006054C
void f_8006054C(Ctx* __restrict c) {
  trace_call(0x8006054Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006054C
  c->r[0]=c->lr; // 80060550
  W32(c->r[1]+0x00000014u,c->r[0]); // 80060554
  c->lr=0x8006055Cu; f_80060574(c); // 80060558
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8006055C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80060560
  c->r[0]=R32(c->r[1]+0x00000014u); // 80060564
  c->lr=c->r[0]; // 80060568
  c->r[1]=c->r[1]+0x00000010u; // 8006056C
  return; // 80060570
}

// fn_80060574
void f_80060574(Ctx* __restrict c) {
  trace_call(0x80060574u);
  c->r[0]=R8(c->r[13]+0xFFFFBDDCu); // 80060574
  c->r[3]=c->r[3]+0x000000FCu; // 80060578
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8006057C
  if (!crb(c,2)) { goto L_8006059C; } // 80060580
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 80060584
  c->r[0]=0u+0x00000001u; // 80060588
  W32(c->r[13]+0xFFFFBDD8u,c->r[4]); // 8006058C
  c->r[4]=c->r[4]+0x00000001u; // 80060590
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 80060594
  W8(c->r[13]+0xFFFFBDDCu,c->r[0]); // 80060598
L_8006059C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8006059C
  c->r[4]=R32(c->r[13]+0xFFFFBDD8u); // 800605A0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800605A4
  c->ctr=c->r[12]; // 800605A8
  if (true) { dispatch(c,c->ctr); return; } // 800605AC
}

// fn_800605B0
void f_800605B0(Ctx* __restrict c) {
  trace_call(0x800605B0u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800605B0
  c->r[4]=0u+0x0000001Cu; // 800605B4
  c->r[3]=c->r[3]+0x000000C4u; // 800605B8
  f_8005CDE8(c); return; // 800605BC
}

// fn_800605C0
void f_800605C0(Ctx* __restrict c) {
  trace_call(0x800605C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800605C0
  c->r[0]=c->lr; // 800605C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800605C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800605CC
  c->r[31]=c->r[3]|c->r[3]; // 800605D0
  c->lr=0x800605D8u; f_80060574(c); // 800605D4
  cmps(c,0,(int32_t)c->r[3],0); // 800605D8
  if (!crb(c,2)) { goto L_800605E8; } // 800605DC
  c->r[3]=0u+0x00000000u; // 800605E0
  goto L_80060670; // 800605E4
L_800605E8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800605E8
  c->r[4]=0u+0x0000001Cu; // 800605EC
  c->r[5]=0u+0x00000001u; // 800605F0
  c->r[3]=c->r[3]+0x000000C4u; // 800605F4
  c->lr=0x800605FCu; f_8005DCA0(c); // 800605F8
  c->r[3]=R32(c->r[31]+0x00000404u); // 800605FC
  cmps(c,0,(int32_t)c->r[3],0); // 80060600
  if (crb(c,2)) { goto L_80060610; } // 80060604
  c->r[4]=0u+0x00000001u; // 80060608
  c->lr=0x80060610u; f_802E8A44(c); // 8006060C
L_80060610:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060610
  c->r[4]=0u+0x0000001Du; // 80060614
  c->r[5]=0u+0x00000000u; // 80060618
  c->r[3]=c->r[3]+0x000000C4u; // 8006061C
  c->lr=0x80060624u; f_8005DCA0(c); // 80060620
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060624
  c->r[4]=0u+0x0000000Du; // 80060628
  c->r[5]=0u+0x00000001u; // 8006062C
  c->r[3]=c->r[3]+0x000000C4u; // 80060630
  c->lr=0x80060638u; f_8005DCA0(c); // 80060634
  c->r[0]=R32(c->r[31]+0x000005BCu); // 80060638
  c->r[4]=0u+0x00000011u; // 8006063C
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060640
  c->r[5]=0u+0x00000001u; // 80060644
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80060648
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8006064C
  c->r[3]=c->r[3]+0x000000C4u; // 80060650
  c->lr=0x80060658u; f_8005DCA0(c); // 80060654
  c->r[3]=c->r[31]|c->r[31]; // 80060658
  c->lr=0x80060660u; f_8005EEE8(c); // 8006065C
  c->r[3]=c->r[31]|c->r[31]; // 80060660
  c->lr=0x80060668u; f_80060574(c); // 80060664
  c->lr=0x8006066Cu; f_8035ED4C(c); // 80060668
  c->r[3]=0u+0x00000001u; // 8006066C
L_80060670:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80060670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80060674
  c->lr=c->r[0]; // 80060678
  c->r[1]=c->r[1]+0x00000010u; // 8006067C
  return; // 80060680
}

// fn_80060684
void f_80060684(Ctx* __restrict c) {
  trace_call(0x80060684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060684
  c->r[0]=c->lr; // 80060688
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006068C
  c->lr=0x80060694u; f_800606AC(c); // 80060690
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80060694
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80060698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006069C
  c->lr=c->r[0]; // 800606A0
  c->r[1]=c->r[1]+0x00000010u; // 800606A4
  return; // 800606A8
}

// fn_800606AC
void f_800606AC(Ctx* __restrict c) {
  trace_call(0x800606ACu);
  c->r[0]=R8(c->r[13]+0xFFFFBDE4u); // 800606AC
  c->r[3]=c->r[3]+0x000000FCu; // 800606B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800606B4
  if (!crb(c,2)) { goto L_800606D4; } // 800606B8
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 800606BC
  c->r[0]=0u+0x00000001u; // 800606C0
  W32(c->r[13]+0xFFFFBDE0u,c->r[4]); // 800606C4
  c->r[4]=c->r[4]+0x00000001u; // 800606C8
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 800606CC
  W8(c->r[13]+0xFFFFBDE4u,c->r[0]); // 800606D0
L_800606D4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800606D4
  c->r[4]=R32(c->r[13]+0xFFFFBDE0u); // 800606D8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800606DC
  c->ctr=c->r[12]; // 800606E0
  if (true) { dispatch(c,c->ctr); return; } // 800606E4
}

// fn_800606E8
void f_800606E8(Ctx* __restrict c) {
  trace_call(0x800606E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800606E8
  c->r[0]=c->lr; // 800606EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800606F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800606F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800606F8
  c->r[30]=c->r[3]|c->r[3]; // 800606FC
  c->lr=0x80060704u; f_800606AC(c); // 80060700
  cmps(c,0,(int32_t)c->r[3],0); // 80060704
  if (!crb(c,2)) { goto L_80060714; } // 80060708
  c->r[3]=0u+0x00000000u; // 8006070C
  goto L_80060804; // 80060710
L_80060714:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80060714
  c->r[4]=0u+0x0000001Cu; // 80060718
  c->r[3]=c->r[3]+0x000000C4u; // 8006071C
  c->lr=0x80060724u; f_8005CDE8(c); // 80060720
  cmps(c,0,(int32_t)c->r[3],0); // 80060724
  if (crb(c,2)) { goto L_80060734; } // 80060728
  c->r[3]=0u+0x00000000u; // 8006072C
  goto L_80060804; // 80060730
L_80060734:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80060734
  c->r[3]=c->r[30]|c->r[30]; // 80060738
  c->r[12]=R32(c->r[12]+0x00000100u); // 8006073C
  c->ctr=c->r[12]; // 80060740
  if (true) { c->lr=0x80060748u; dispatch(c,c->ctr); } // 80060744
  cmps(c,0,(int32_t)c->r[3],0); // 80060748
  if (!crb(c,2)) { goto L_80060758; } // 8006074C
  c->r[3]=0u+0x00000000u; // 80060750
  goto L_80060804; // 80060754
L_80060758:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80060758
  c->r[3]=c->r[30]|c->r[30]; // 8006075C
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 80060760
  c->ctr=c->r[12]; // 80060764
  if (true) { c->lr=0x8006076Cu; dispatch(c,c->ctr); } // 80060768
  cmps(c,0,(int32_t)c->r[3],0); // 8006076C
  if (crb(c,2)) { goto L_8006077C; } // 80060770
  c->r[3]=0u+0x00000000u; // 80060774
  goto L_80060804; // 80060778
L_8006077C:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 8006077C
  c->r[4]=0u+0x00000031u; // 80060780
  c->r[3]=c->r[3]+0x000000C4u; // 80060784
  c->lr=0x8006078Cu; f_8005CDE8(c); // 80060788
  cmps(c,0,(int32_t)c->r[3],0); // 8006078C
  if (crb(c,2)) { goto L_8006079C; } // 80060790
  c->r[3]=0u+0x00000000u; // 80060794
  goto L_80060804; // 80060798
L_8006079C:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 8006079C
  c->r[4]=0u+0x00000018u; // 800607A0
  c->r[3]=c->r[3]+0x000000C4u; // 800607A4
  c->lr=0x800607ACu; f_8005CDE8(c); // 800607A8
  cmps(c,0,(int32_t)c->r[3],0); // 800607AC
  if (crb(c,2)) { goto L_800607BC; } // 800607B0
  c->r[3]=0u+0x00000000u; // 800607B4
  goto L_80060804; // 800607B8
L_800607BC:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800607BC
  {uint32_t ea=c->r[2]+0xFFFF8288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800607C0
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800607C4
  fcmp(c,0,c->f[1],c->f[0]); // 800607C8
  if (!crb(c,0)) { goto L_800607D8; } // 800607CC
  c->r[3]=0u+0x00000000u; // 800607D0
  goto L_80060804; // 800607D4
L_800607D8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800607D8
  c->r[31]=0u+0x00000000u; // 800607DC
  cmps(c,0,(int32_t)c->r[3],0); // 800607E0
  if (crb(c,2)) { goto L_800607FC; } // 800607E4
  c->r[30]=R32(c->r[3]+0x00000000u); // 800607E8
  c->lr=0x800607F0u; f_8005E4BC(c); // 800607EC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800607F0
  if (!crb(c,2)) { goto L_800607FC; } // 800607F4
  c->r[31]=0u+0x00000001u; // 800607F8
L_800607FC:;
  c->r[0]=cntlz(c->r[31]); // 800607FC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80060800
L_80060804:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80060804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80060808
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006080C
  c->lr=c->r[0]; // 80060810
  c->r[1]=c->r[1]+0x00000010u; // 80060814
  return; // 80060818
}

// fn_8006081C
void f_8006081C(Ctx* __restrict c) {
  trace_call(0x8006081Cu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8006081C
  c->r[4]=0u+0x0000001Du; // 80060820
  c->r[3]=c->r[3]+0x000000C4u; // 80060824
  f_8005CDE8(c); return; // 80060828
}

// fn_8006082C
void f_8006082C(Ctx* __restrict c) {
  trace_call(0x8006082Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006082C
  c->r[0]=c->lr; // 80060830
  W32(c->r[1]+0x00000044u,c->r[0]); // 80060834
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80060838
  c->r[31]=c->r[3]|c->r[3]; // 8006083C
  c->r[3]=c->r[4]|c->r[4]; // 80060840
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 80060844
  c->r[4]=c->r[1]+0x00000008u; // 80060848
  c->r[12]=R32(c->r[12]+0x00000148u); // 8006084C
  c->ctr=c->r[12]; // 80060850
  if (true) { c->lr=0x80060858u; dispatch(c,c->ctr); } // 80060854
  c->r[4]=c->r[3]|c->r[3]; // 80060858
  c->r[3]=c->r[31]|c->r[31]; // 8006085C
  c->lr=0x80060864u; f_80060878(c); // 80060860
  c->r[0]=R32(c->r[1]+0x00000044u); // 80060864
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80060868
  c->lr=c->r[0]; // 8006086C
  c->r[1]=c->r[1]+0x00000040u; // 80060870
  return; // 80060874
}

// fn_80060878
void f_80060878(Ctx* __restrict c) {
  trace_call(0x80060878u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80060878
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8006087C
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80060880
  f_8005FD70(c); return; // 80060884
}

// fn_80060888
void f_80060888(Ctx* __restrict c) {
  trace_call(0x80060888u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060888
  c->r[0]=c->lr; // 8006088C
  c->r[4]=0u+0x0000001Du; // 80060890
  c->r[5]=0u+0x00000001u; // 80060894
  W32(c->r[1]+0x00000014u,c->r[0]); // 80060898
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8006089C
  c->r[3]=c->r[3]+0x000000C4u; // 800608A0
  c->lr=0x800608A8u; f_8005DCA0(c); // 800608A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800608A8
  c->r[3]=0u+0x00000001u; // 800608AC
  c->lr=c->r[0]; // 800608B0
  c->r[1]=c->r[1]+0x00000010u; // 800608B4
  return; // 800608B8
}

// fn_800608BC
void f_800608BC(Ctx* __restrict c) {
  trace_call(0x800608BCu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800608BC
  c->r[4]=0u+0x0000001Du; // 800608C0
  c->r[5]=0u+0x00000000u; // 800608C4
  c->r[3]=c->r[3]+0x000000C4u; // 800608C8
  f_8005DCA0(c); return; // 800608CC
}

// fn_800608D0
void f_800608D0(Ctx* __restrict c) {
  trace_call(0x800608D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800608D0
  c->r[0]=c->lr; // 800608D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800608D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800608DC
  c->r[31]=c->r[3]|c->r[3]; // 800608E0
  c->lr=0x800608E8u; f_800606AC(c); // 800608E4
  cmps(c,0,(int32_t)c->r[3],0); // 800608E8
  if (crb(c,2)) { goto L_80060960; } // 800608EC
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800608F0
  c->r[4]=0u+0x0000001Du; // 800608F4
  c->r[3]=c->r[3]+0x000000C4u; // 800608F8
  c->lr=0x80060900u; f_8005CDE8(c); // 800608FC
  cmps(c,0,(int32_t)c->r[3],0); // 80060900
  if (crb(c,2)) { goto L_80060950; } // 80060904
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80060908
  c->r[3]=c->r[31]|c->r[31]; // 8006090C
  c->r[12]=R32(c->r[12]+0x000001BCu); // 80060910
  c->ctr=c->r[12]; // 80060914
  if (true) { c->lr=0x8006091Cu; dispatch(c,c->ctr); } // 80060918
  cmps(c,0,(int32_t)c->r[3],0); // 8006091C
  if (crb(c,2)) { goto L_80060950; } // 80060920
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80060924
  c->r[4]=c->r[31]|c->r[31]; // 80060928
  c->r[3]=c->r[1]+0x00000008u; // 8006092C
  c->r[12]=R32(c->r[12]+0x000001C0u); // 80060930
  c->ctr=c->r[12]; // 80060934
  if (true) { c->lr=0x8006093Cu; dispatch(c,c->ctr); } // 80060938
  c->r[3]=c->r[31]|c->r[31]; // 8006093C
  c->lr=0x80060944u; f_800606AC(c); // 80060940
  c->r[4]=c->r[1]+0x00000008u; // 80060944
  c->lr=0x8006094Cu; f_8031CE08(c); // 80060948
  goto L_80060960; // 8006094C
L_80060950:;
  c->r[3]=c->r[31]|c->r[31]; // 80060950
  c->lr=0x80060958u; f_800606AC(c); // 80060954
  c->r[4]=0u+0x00000000u; // 80060958
  c->lr=0x80060960u; f_8031CE08(c); // 8006095C
L_80060960:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80060960
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80060964
  c->lr=c->r[0]; // 80060968
  c->r[1]=c->r[1]+0x00000020u; // 8006096C
  return; // 80060970
}

// fn_80060974
void f_80060974(Ctx* __restrict c) {
  trace_call(0x80060974u);
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80060974
  c->r[3]=R32(c->r[3]+0x00000444u); // 80060978
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006097C
  {uint32_t ea=c->r[3]+0x000001A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060980
  fcmp(c,0,c->f[1],c->f[0]); // 80060984
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060988
  if (!crb(c,2)) { goto L_80060998; } // 8006098C
  c->r[3]=0u+0x00000000u; // 80060990
  return; // 80060994
L_80060998:;
  {uint32_t ea=c->r[3]+0x000001A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060998
  fcmp(c,0,c->f[1],c->f[0]); // 8006099C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800609A0
  if (!crb(c,2)) { goto L_800609B0; } // 800609A4
  c->r[3]=0u+0x00000001u; // 800609A8
  return; // 800609AC
L_800609B0:;
  {uint32_t ea=c->r[3]+0x000001ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800609B0
  fcmp(c,0,c->f[1],c->f[0]); // 800609B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800609B8
  if (!crb(c,2)) { goto L_800609C8; } // 800609BC
  c->r[3]=0u+0x00000002u; // 800609C0
  return; // 800609C4
L_800609C8:;
  c->r[3]=0u+0x00000003u; // 800609C8
  return; // 800609CC
}

// fn_800609D0
void f_800609D0(Ctx* __restrict c) {
  trace_call(0x800609D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800609D0
  c->r[0]=c->lr; // 800609D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800609D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800609DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800609E0
  c->r[7]=R32(c->r[4]+0x00000000u); // 800609E4
  c->r[6]=c->r[5]|c->r[5]; // 800609E8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800609EC
  c->f[31]=c->f[1]; // 800609F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800609F4
  c->r[3]=c->r[1]+0x0000000Cu; // 800609F8
  c->r[4]=c->r[1]+0x00000008u; // 800609FC
  c->r[5]=c->r[1]+0x00000010u; // 80060A00
  W32(c->r[1]+0x00000010u,c->r[7]); // 80060A04
  c->lr=0x80060A0Cu; f_80060A48(c); // 80060A08
  cmps(c,0,(int32_t)c->r[3],0); // 80060A0C
  if (!crb(c,2)) { goto L_80060A1C; } // 80060A10
  c->f[1]=c->f[31]; // 80060A14
  goto L_80060A30; // 80060A18
L_80060A1C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80060A1C
  {uint32_t ea=c->r[2]+0xFFFF828Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80060A20
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80060A24
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 80060A28
  c->f[1]=c->f[31]; // 80060A2C
L_80060A30:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80060A30
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80060A34
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80060A38
  c->lr=c->r[0]; // 80060A3C
  c->r[1]=c->r[1]+0x00000030u; // 80060A40
  return; // 80060A44
}

// fn_80060A48
void f_80060A48(Ctx* __restrict c) {
  trace_call(0x80060A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060A48
  c->r[0]=c->lr; // 80060A4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80060A50
  c->r[11]=c->r[1]+0x00000030u; // 80060A54
  c->lr=0x80060A5Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80060A58
  c->r[7]=R32(c->r[5]+0x00000000u); // 80060A5C
  c->r[30]=c->r[3]|c->r[3]; // 80060A60
  c->r[0]=R32(c->r[5]+0x00000004u); // 80060A64
  c->r[31]=c->r[4]|c->r[4]; // 80060A68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80060A6C
  c->r[29]=c->r[6]|c->r[6]; // 80060A70
  c->r[3]=c->r[1]+0x00000008u; // 80060A74
  W32(c->r[1]+0x00000008u,c->r[7]); // 80060A78
  c->lr=0x80060A80u; f_80064D50(c); // 80060A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80060A80
  if (crb(c,2)) { goto L_80060B58; } // 80060A84
  c->lr=0x80060A8Cu; f_8033FE4C(c); // 80060A88
  c->r[4]=c->r[3]|c->r[3]; // 80060A8C
  c->r[3]=c->r[29]|c->r[29]; // 80060A90
  c->r[4]=c->r[4]+0x0000012Cu; // 80060A94
  c->lr=0x80060A9Cu; f_8005BBC8(c); // 80060A98
  c->lr=0x80060AA0u; f_80060B74(c); // 80060A9C
  {uint32_t ea=c->r[2]+0xFFFF8254u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060AA0
  c->r[5]=0u+0x00000064u; // 80060AA4
  fcmp(c,0,c->f[1],c->f[0]); // 80060AA8
  if (!crb(c,1)) { goto L_80060AD4; } // 80060AAC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80060AB0
  c->r[0]=0u+0x0000000Au; // 80060AB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80060AB8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80060ABC
  c->r[3]=R32(c->r[1]+0x00000014u); // 80060AC0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[0]); // 80060AC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80060AC8
  c->r[5]=addc(c,~c->r[0],0x0000005Fu,1); // 80060ACC
  goto L_80060B0C; // 80060AD0
L_80060AD4:;
  c->r[4]=0u+0x80690000u; // 80060AD4
  c->r[0]=0u+0x00000004u; // 80060AD8
  c->r[4]=c->r[4]+0xFFFFB8B8u; // 80060ADC
  c->r[3]=0u+0x00000000u; // 80060AE0
  c->ctr=c->r[0]; // 80060AE4
L_80060AE8:;
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 80060AE8
  c->r[6]=c->r[4]+c->r[3]; // 80060AEC
  fcmp(c,0,c->f[1],c->f[0]); // 80060AF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060AF4
  if (!crb(c,2)) { goto L_80060B04; } // 80060AF8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000004u); // 80060AFC
  goto L_80060B0C; // 80060B00
L_80060B04:;
  c->r[3]=c->r[3]+0x00000008u; // 80060B04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80060AE8; } // 80060B08
L_80060B0C:;
  cmps(c,0,(int32_t)c->r[5],50); // 80060B0C
  c->r[0]=0u+0x00000032u; // 80060B10
  if (crb(c,0)) { goto L_80060B1C; } // 80060B14
  c->r[0]=c->r[5]|c->r[5]; // 80060B18
L_80060B1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80060B1C
  if (crb(c,2)) { goto L_80060B44; } // 80060B20
  c->r[3]=c->r[0]^0x80000000u; // 80060B24
  c->r[0]=0u+0x43300000u; // 80060B28
  W32(c->r[1]+0x00000014u,c->r[3]); // 80060B2C
  {uint32_t ea=c->r[2]+0xFFFF8290u; c->f[2]=RF64(ea);} // 80060B30
  W32(c->r[1]+0x00000010u,c->r[0]); // 80060B34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80060B38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80060B3C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80060B40
L_80060B44:;
  cmps(c,0,(int32_t)c->r[31],0); // 80060B44
  if (crb(c,2)) { goto L_80060B50; } // 80060B48
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 80060B4C
L_80060B50:;
  c->r[3]=0u+0x00000001u; // 80060B50
  goto L_80060B5C; // 80060B54
L_80060B58:;
  c->r[3]=0u+0x00000000u; // 80060B58
L_80060B5C:;
  c->r[11]=c->r[1]+0x00000030u; // 80060B5C
  c->lr=0x80060B64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80060B60
  c->r[0]=R32(c->r[1]+0x00000034u); // 80060B64
  c->lr=c->r[0]; // 80060B68
  c->r[1]=c->r[1]+0x00000030u; // 80060B6C
  return; // 80060B70
}

// fn_80060B74
void f_80060B74(Ctx* __restrict c) {
  trace_call(0x80060B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060B74
  c->r[0]=c->lr; // 80060B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 80060B7C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80060B80
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80060B84
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060B88
  c->f[31]=c->f[1]; // 80060B8C
  fcmp(c,0,c->f[1],c->f[0]); // 80060B90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80060B94
  if (crb(c,2)) { goto L_80060BB8; } // 80060B98
  c->r[3]=0u+0x806D0000u; // 80060B9C
  c->r[5]=0u+0x806D0000u; // 80060BA0
  c->r[3]=c->r[3]+0xFFFFDD24u; // 80060BA4
  c->r[4]=0u+0x00000273u; // 80060BA8
  c->r[5]=c->r[5]+0xFFFFDD00u; // 80060BAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80060BB0
  c->lr=0x80060BB8u; f_80484708(c); // 80060BB4
L_80060BB8:;
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060BB8
  fcmp(c,0,c->f[31],c->f[1]); // 80060BBC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060BC0
  if (!crb(c,2)) { goto L_80060BCC; } // 80060BC4
  goto L_80060BD8; // 80060BC8
L_80060BCC:;
  c->f[1]=c->f[31]; // 80060BCC
  c->lr=0x80060BD4u; f_804E1098(c); // 80060BD0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80060BD4
L_80060BD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80060BD8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80060BDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80060BE0
  c->lr=c->r[0]; // 80060BE4
  c->r[1]=c->r[1]+0x00000020u; // 80060BE8
  return; // 80060BEC
}

// fn_80060BF0
void f_80060BF0(Ctx* __restrict c) {
  trace_call(0x80060BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060BF0
  c->r[0]=c->lr; // 80060BF4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80060BF8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 80060BFC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 80060C00
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80060C04
  c->r[31]=c->r[3]|c->r[3]; // 80060C08
  c->lr=0x80060C10u; f_80060F38(c); // 80060C0C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80060C10
  c->r[3]=c->r[31]|c->r[31]; // 80060C14
  c->r[4]=c->r[1]+0x00000068u; // 80060C18
  c->r[12]=R32(c->r[12]+0x00000148u); // 80060C1C
  c->ctr=c->r[12]; // 80060C20
  if (true) { c->lr=0x80060C28u; dispatch(c,c->ctr); } // 80060C24
  c->r[4]=c->r[3]|c->r[3]; // 80060C28
  c->r[3]=c->r[1]+0x0000005Cu; // 80060C2C
  c->lr=0x80060C34u; f_80060878(c); // 80060C30
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80060C34
  c->r[4]=c->r[31]|c->r[31]; // 80060C38
  c->r[3]=c->r[1]+0x00000044u; // 80060C3C
  c->r[12]=R32(c->r[12]+0x00000134u); // 80060C40
  c->ctr=c->r[12]; // 80060C44
  if (true) { c->lr=0x80060C4Cu; dispatch(c,c->ctr); } // 80060C48
  c->r[3]=c->r[1]+0x00000050u; // 80060C4C
  c->r[4]=c->r[1]+0x0000005Cu; // 80060C50
  c->r[5]=c->r[1]+0x00000044u; // 80060C54
  c->lr=0x80060C5Cu; f_8005FC60(c); // 80060C58
  c->r[3]=c->r[1]+0x00000050u; // 80060C5C
  c->lr=0x80060C64u; f_80060DC8(c); // 80060C60
  {uint32_t ea=c->r[2]+0xFFFF8298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060C64
  fcmp(c,0,c->f[1],c->f[0]); // 80060C68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060C6C
  if (!crb(c,2)) { goto L_80060C9C; } // 80060C70
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060C74
  c->r[3]=c->r[1]+0x00000008u; // 80060C78
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[3]=c->ps1[3]=RF32(ea);} // 80060C7C
  c->f[2]=c->f[1]; // 80060C80
  c->lr=0x80060C88u; f_8005FD70(c); // 80060C84
  c->r[3]=c->r[1]+0x00000038u; // 80060C88
  c->r[4]=c->r[1]+0x00000008u; // 80060C8C
  c->lr=0x80060C94u; f_8005CD7C(c); // 80060C90
  c->r[4]=c->r[1]+0x00000038u; // 80060C94
  goto L_80060CB8; // 80060C98
L_80060C9C:;
  c->r[3]=c->r[1]+0x00000050u; // 80060C9C
  c->r[4]=c->r[1]+0x00000014u; // 80060CA0
  c->lr=0x80060CA8u; f_80383D38(c); // 80060CA4
  c->r[3]=c->r[1]+0x00000038u; // 80060CA8
  c->r[4]=c->r[1]+0x00000014u; // 80060CAC
  c->lr=0x80060CB4u; f_8005CD7C(c); // 80060CB0
  c->r[4]=c->r[1]+0x00000038u; // 80060CB4
L_80060CB8:;
  c->r[3]=c->r[1]+0x00000050u; // 80060CB8
  c->lr=0x80060CC0u; f_8005DC84(c); // 80060CBC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80060CC0
  c->r[4]=c->r[31]|c->r[31]; // 80060CC4
  c->r[3]=c->r[1]+0x0000002Cu; // 80060CC8
  c->r[12]=R32(c->r[12]+0x00000134u); // 80060CCC
  c->ctr=c->r[12]; // 80060CD0
  if (true) { c->lr=0x80060CD8u; dispatch(c,c->ctr); } // 80060CD4
  c->r[5]=0u+0x80760000u; // 80060CD8
  c->r[3]=c->r[1]+0x0000002Cu; // 80060CDC
  c->r[4]=c->r[1]+0x0000005Cu; // 80060CE0
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 80060CE4
  c->lr=0x80060CECu; f_8032B134(c); // 80060CE8
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060CEC
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 80060CF0
  c->r[3]=R32(c->r[31]+0x00000444u); // 80060CF4
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 80060CF8
  {uint32_t ea=c->r[3]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060CFC
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060D00
  fcmp(c,0,c->f[1],c->f[0]); // 80060D04
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060D08
  if (!crb(c,2)) { goto L_80060D18; } // 80060D0C
  c->r[0]=0u+0x00000000u; // 80060D10
  goto L_80060D4C; // 80060D14
L_80060D18:;
  {uint32_t ea=c->r[3]+0x00000198u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060D18
  fcmp(c,0,c->f[1],c->f[0]); // 80060D1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060D20
  if (!crb(c,2)) { goto L_80060D30; } // 80060D24
  c->r[0]=0u+0x00000001u; // 80060D28
  goto L_80060D4C; // 80060D2C
L_80060D30:;
  {uint32_t ea=c->r[3]+0x0000019Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80060D30
  fcmp(c,0,c->f[1],c->f[0]); // 80060D34
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060D38
  if (!crb(c,2)) { goto L_80060D48; } // 80060D3C
  c->r[0]=0u+0x00000002u; // 80060D40
  goto L_80060D4C; // 80060D44
L_80060D48:;
  c->r[0]=0u+0x00000003u; // 80060D48
L_80060D4C:;
  W32(c->r[4]+0x000000A4u,c->r[0]); // 80060D4C
  c->r[4]=c->r[1]+0x00000050u; // 80060D50
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060D54
  c->r[3]=c->r[3]+0x000000A8u; // 80060D58
  c->lr=0x80060D60u; f_8005DC84(c); // 80060D5C
  c->r[3]=c->r[1]+0x00000020u; // 80060D60
  c->r[4]=c->r[31]+0x000001B8u; // 80060D64
  c->lr=0x80060D6Cu; f_80060F28(c); // 80060D68
  c->r[3]=c->r[1]+0x00000050u; // 80060D6C
  c->lr=0x80060D74u; f_8005CD98(c); // 80060D70
  c->f[31]=c->f[1]; // 80060D74
  c->r[3]=c->r[1]+0x00000020u; // 80060D78
  c->lr=0x80060D80u; f_8005CD98(c); // 80060D7C
  c->f[2]=c->f[31]; // 80060D80
  c->lr=0x80060D88u; f_80060DE0(c); // 80060D84
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060D88
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 80060D8C
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060D90
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060D94
  c->lr=0x80060D9Cu; f_80061FDC(c); // 80060D98
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 80060D9C
  W32(c->r[4]+0x000000B8u,c->r[3]); // 80060DA0
  c->r[3]=R32(c->r[31]+0x00000420u); // 80060DA4
  c->lr=0x80060DACu; f_800C3B00(c); // 80060DA8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80060DAC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 80060DB0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 80060DB4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80060DB8
  c->lr=c->r[0]; // 80060DBC
  c->r[1]=c->r[1]+0x000000B0u; // 80060DC0
  return; // 80060DC4
}

// fn_80060DC8
void f_80060DC8(Ctx* __restrict c) {
  trace_call(0x80060DC8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80060DC8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80060DCC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060DD0
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 80060DD4
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80060DD8
  return; // 80060DDC
}

// fn_80060DE0
void f_80060DE0(Ctx* __restrict c) {
  trace_call(0x80060DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060DE0
  c->r[0]=c->lr; // 80060DE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80060DE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80060DEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80060DF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80060DF4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80060DF8
  c->f[30]=c->f[2]; // 80060DFC
  {uint32_t ea=c->r[2]+0xFFFF829Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80060E00
  {uint32_t ea=c->r[2]+0xFFFF82A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80060E04
  c->lr=0x80060E0Cu; f_80060E74(c); // 80060E08
  c->f[31]=c->f[1]; // 80060E0C
  {uint32_t ea=c->r[2]+0xFFFF829Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80060E10
  c->f[1]=c->f[30]; // 80060E14
  {uint32_t ea=c->r[2]+0xFFFF82A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80060E18
  c->lr=0x80060E20u; f_80060E74(c); // 80060E1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80060E20
  {uint32_t ea=c->r[2]+0xFFFF82A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060E24
  fcmp(c,0,c->f[1],c->f[0]); // 80060E28
  if (!crb(c,0)) { goto L_80060E3C; } // 80060E2C
  {uint32_t ea=c->r[2]+0xFFFF82A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060E30
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80060E34
  goto L_80060E54; // 80060E38
L_80060E3C:;
  {uint32_t ea=c->r[2]+0xFFFF829Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80060E3C
  fcmp(c,0,c->f[1],c->f[0]); // 80060E40
  if (!crb(c,1)) { goto L_80060E54; } // 80060E44
  {uint32_t ea=c->r[2]+0xFFFF82A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060E48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80060E4C
  c->f[1]=-c->f[0]; // 80060E50
L_80060E54:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80060E54
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80060E58
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80060E5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80060E60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80060E64
  c->lr=c->r[0]; // 80060E68
  c->r[1]=c->r[1]+0x00000030u; // 80060E6C
  return; // 80060E70
}

// fn_80060E74
void f_80060E74(Ctx* __restrict c) {
  trace_call(0x80060E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060E74
  c->r[0]=c->lr; // 80060E78
  W32(c->r[1]+0x00000024u,c->r[0]); // 80060E7C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80060E80
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80060E84
  c->f[4]=-c->f[2]; // 80060E88
  c->f[31]=c->f[2]; // 80060E8C
  fcmp(c,0,c->f[1],c->f[4]); // 80060E90
  if (!crb(c,0)) { goto L_80060ED4; } // 80060E94
  c->f[0]=-c->f[3]; // 80060E98
  fcmp(c,0,c->f[1],c->f[0]); // 80060E9C
  if (!crb(c,1)) { goto L_80060EB0; } // 80060EA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 80060EA4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80060EA8
  goto L_80060F10; // 80060EAC
L_80060EB0:;
  c->f[2]=c->f[3]; // 80060EB0
  c->lr=0x80060EB8u; f_803BA750(c); // 80060EB4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80060EB8
  c->f[2]=-c->f[31]; // 80060EBC
  fcmp(c,0,c->f[1],c->f[2]); // 80060EC0
  if (!crb(c,0)) { goto L_80060F10; } // 80060EC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 80060EC8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 80060ECC
  goto L_80060F10; // 80060ED0
L_80060ED4:;
  fcmp(c,0,c->f[1],c->f[2]); // 80060ED4
  if (!crb(c,1)) { goto L_80060F10; } // 80060ED8
  fcmp(c,0,c->f[1],c->f[3]); // 80060EDC
  if (!crb(c,1)) { goto L_80060F08; } // 80060EE0
  c->f[2]=c->f[3]; // 80060EE4
  c->lr=0x80060EECu; f_803BA750(c); // 80060EE8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80060EEC
  fcmp(c,0,c->f[1],c->f[31]); // 80060EF0
  if (!crb(c,1)) { goto L_80060F10; } // 80060EF4
  c->f[2]=-c->f[31]; // 80060EF8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 80060EFC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80060F00
  goto L_80060F10; // 80060F04
L_80060F08:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80060F08
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80060F0C
L_80060F10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80060F10
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80060F14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80060F18
  c->lr=c->r[0]; // 80060F1C
  c->r[1]=c->r[1]+0x00000020u; // 80060F20
  return; // 80060F24
}

// fn_80060F28
void f_80060F28(Ctx* __restrict c) {
  trace_call(0x80060F28u);
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060F28
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80060F2C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80060F30
  f_8005FD70(c); return; // 80060F34
}

// fn_80060F38
void f_80060F38(Ctx* __restrict c) {
  trace_call(0x80060F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060F38
  c->r[0]=c->lr; // 80060F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80060F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80060F44
  c->r[31]=c->r[3]|c->r[3]; // 80060F48
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80060F4C
  c->r[12]=R32(c->r[12]+0x00000100u); // 80060F50
  c->ctr=c->r[12]; // 80060F54
  if (true) { c->lr=0x80060F5Cu; dispatch(c,c->ctr); } // 80060F58
  cmps(c,0,(int32_t)c->r[3],0); // 80060F5C
  if (!crb(c,2)) { goto L_80060F6C; } // 80060F60
  c->r[0]=0u+0x00000000u; // 80060F64
  goto L_80060FAC; // 80060F68
L_80060F6C:;
  c->r[3]=R32(c->r[31]+0x00000444u); // 80060F6C
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 80060F70
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80060F74
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80060F78
  fcmp(c,0,c->f[2],c->f[1]); // 80060F7C
  if (!crb(c,2)) { goto L_80060F8C; } // 80060F80
  c->r[0]=0u+0x00000003u; // 80060F84
  goto L_80060FAC; // 80060F88
L_80060F8C:;
  {uint32_t ea=c->r[3]+0x00000188u; c->f[0]=c->ps1[0]=RF32(ea);} // 80060F8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80060F90
  fcmp(c,0,c->f[2],c->f[0]); // 80060F94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80060F98
  if (!crb(c,2)) { goto L_80060FA8; } // 80060F9C
  c->r[0]=0u+0x00000001u; // 80060FA0
  goto L_80060FAC; // 80060FA4
L_80060FA8:;
  c->r[0]=0u+0x00000002u; // 80060FA8
L_80060FAC:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80060FAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80060FB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80060FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80060FB8
  c->lr=c->r[0]; // 80060FBC
  c->r[1]=c->r[1]+0x00000010u; // 80060FC0
  return; // 80060FC4
}

// fn_80060FC8
void f_80060FC8(Ctx* __restrict c) {
  trace_call(0x80060FC8u);
  c->r[4]=c->r[3]|c->r[3]; // 80060FC8
  c->r[3]=R32(c->r[3]+0x00000404u); // 80060FCC
  {uint32_t ea=c->r[4]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80060FD0
  f_802E8E84(c); return; // 80060FD4
}

// fn_80060FD8
void f_80060FD8(Ctx* __restrict c) {
  trace_call(0x80060FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80060FD8
  c->r[0]=c->lr; // 80060FDC
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80060FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80060FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80060FE8
  c->r[31]=c->r[3]|c->r[3]; // 80060FEC
  c->r[0]=R32(c->r[4]+0x00000088u); // 80060FF0
  cmps(c,0,(int32_t)c->r[0],3); // 80060FF4
  if (!crb(c,2)) { goto L_80061004; } // 80060FF8
  c->r[3]=0u+0x00000001u; // 80060FFC
  goto L_80061030; // 80061000
L_80061004:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80061004
  cmps(c,0,(int32_t)c->r[0],0); // 80061008
  if (crb(c,2)) { goto L_8006102C; } // 8006100C
  c->lr=0x80061014u; f_80061044(c); // 80061010
  c->r[4]=R32(c->r[31]+0x00000008u); // 80061014
  c->r[0]=R32(c->r[4]+0x00000000u); // 80061018
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8006101C
  if (!crb(c,2)) { goto L_8006102C; } // 80061020
  c->r[3]=0u+0x00000001u; // 80061024
  goto L_80061030; // 80061028
L_8006102C:;
  c->r[3]=0u+0x00000000u; // 8006102C
L_80061030:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061034
  c->lr=c->r[0]; // 80061038
  c->r[1]=c->r[1]+0x00000010u; // 8006103C
  return; // 80061040
}

// fn_80061044
void f_80061044(Ctx* __restrict c) {
  trace_call(0x80061044u);
  c->r[0]=R8(c->r[13]+0xFFFFBD08u); // 80061044
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80061048
  if (!crb(c,2)) { goto L_8006106C; } // 8006104C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80061050
  c->r[0]=0u+0x00000001u; // 80061054
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80061058
  c->r[3]=c->r[4]+0x00000001u; // 8006105C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80061060
  W32(c->r[13]+0xFFFFBD04u,c->r[4]); // 80061064
  W8(c->r[13]+0xFFFFBD08u,c->r[0]); // 80061068
L_8006106C:;
  c->r[3]=R32(c->r[13]+0xFFFFBD04u); // 8006106C
  return; // 80061070
}

// fn_80061074
void f_80061074(Ctx* __restrict c) {
  trace_call(0x80061074u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 80061074
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 80061078
  c->r[0]=c->r[0]-c->r[4]; // 8006107C
  c->r[0]=cntlz(c->r[0]); // 80061080
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80061084
  return; // 80061088
}

// fn_8006108C
void f_8006108C(Ctx* __restrict c) {
  trace_call(0x8006108Cu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 8006108C
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 80061090
  cmps(c,0,(int32_t)c->r[3],3); // 80061094
  if (!crb(c,2)) { goto L_800610A4; } // 80061098
  c->r[3]=0u+0x00000001u; // 8006109C
  return; // 800610A0
L_800610A4:;
  cmps(c,0,(int32_t)c->r[3],2); // 800610A4
  if (!crb(c,2)) { goto L_800610B4; } // 800610A8
  c->r[3]=0u+0x00000001u; // 800610AC
  return; // 800610B0
L_800610B4:;
  cmps(c,0,(int32_t)c->r[3],5); // 800610B4
  if (!crb(c,2)) { goto L_800610C4; } // 800610B8
  c->r[3]=0u+0x00000001u; // 800610BC
  return; // 800610C0
L_800610C4:;
  cmps(c,0,(int32_t)c->r[3],6); // 800610C4
  if (!crb(c,2)) { goto L_800610D4; } // 800610C8
  c->r[3]=0u+0x00000001u; // 800610CC
  return; // 800610D0
L_800610D4:;
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 800610D4
  c->r[0]=cntlz(c->r[0]); // 800610D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800610DC
  return; // 800610E0
}

// fn_800610E4
void f_800610E4(Ctx* __restrict c) {
  trace_call(0x800610E4u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800610E4
  c->r[0]=R32(c->r[3]+0x00000090u); // 800610E8
  c->r[0]=c->r[0]-c->r[4]; // 800610EC
  c->r[0]=cntlz(c->r[0]); // 800610F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800610F4
  return; // 800610F8
}

// fn_800610FC
void f_800610FC(Ctx* __restrict c) {
  trace_call(0x800610FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800610FC
  c->r[0]=c->lr; // 80061100
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061108
  c->r[31]=c->r[3]|c->r[3]; // 8006110C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80061110
  c->r[12]=R32(c->r[12]+0x00000100u); // 80061114
  c->ctr=c->r[12]; // 80061118
  if (true) { c->lr=0x80061120u; dispatch(c,c->ctr); } // 8006111C
  cmps(c,0,(int32_t)c->r[3],0); // 80061120
  if (crb(c,2)) { goto L_80061144; } // 80061124
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80061128
  c->r[3]=c->r[31]|c->r[31]; // 8006112C
  c->r[12]=R32(c->r[12]+0x0000011Cu); // 80061130
  c->ctr=c->r[12]; // 80061134
  if (true) { c->lr=0x8006113Cu; dispatch(c,c->ctr); } // 80061138
  cmps(c,0,(int32_t)c->r[3],0); // 8006113C
  if (crb(c,2)) { goto L_8006115C; } // 80061140
L_80061144:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061144
  c->r[4]=0u+0x00000016u; // 80061148
  c->r[3]=c->r[3]+0x000000C4u; // 8006114C
  c->lr=0x80061154u; f_8005CDE8(c); // 80061150
  cmps(c,0,(int32_t)c->r[3],0); // 80061154
  if (crb(c,2)) { goto L_80061164; } // 80061158
L_8006115C:;
  c->r[3]=0u+0x00000000u; // 8006115C
  goto L_80061168; // 80061160
L_80061164:;
  c->r[3]=0u+0x00000001u; // 80061164
L_80061168:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006116C
  c->lr=c->r[0]; // 80061170
  c->r[1]=c->r[1]+0x00000010u; // 80061174
  return; // 80061178
}

// fn_8006117C
void f_8006117C(Ctx* __restrict c) {
  trace_call(0x8006117Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006117C
  c->r[0]=c->lr; // 80061180
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061184
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061188
  c->r[31]=c->r[3]|c->r[3]; // 8006118C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80061190
  c->r[12]=R32(c->r[12]+0x00000100u); // 80061194
  c->ctr=c->r[12]; // 80061198
  if (true) { c->lr=0x800611A0u; dispatch(c,c->ctr); } // 8006119C
  cmps(c,0,(int32_t)c->r[3],0); // 800611A0
  if (!crb(c,2)) { goto L_800611B0; } // 800611A4
  c->r[3]=0u+0x00000000u; // 800611A8
  goto L_800611D8; // 800611AC
L_800611B0:;
  c->lr=0x800611B4u; f_80154938(c); // 800611B0
  c->r[0]=R8(c->r[3]+0x00000026u); // 800611B4
  cmps(c,0,(int32_t)c->r[0],0); // 800611B8
  if (crb(c,2)) { goto L_800611C8; } // 800611BC
  c->r[3]=0u+0x00000000u; // 800611C0
  goto L_800611D8; // 800611C4
L_800611C8:;
  c->lr=0x800611CCu; f_80067D60(c); // 800611C8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800611CC
  c->r[4]=c->r[31]|c->r[31]; // 800611D0
  c->lr=0x800611D8u; f_800C290C(c); // 800611D4
L_800611D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800611D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800611DC
  c->lr=c->r[0]; // 800611E0
  c->r[1]=c->r[1]+0x00000010u; // 800611E4
  return; // 800611E8
}

// fn_800611EC
void f_800611EC(Ctx* __restrict c) {
  trace_call(0x800611ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800611EC
  c->r[0]=c->lr; // 800611F0
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800611F4
  c->r[4]=0u+0x00000001u; // 800611F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800611FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061200
  c->r[31]=c->r[3]|c->r[3]; // 80061204
  c->r[3]=c->r[5]+0x000000C4u; // 80061208
  c->lr=0x80061210u; f_8005CDE8(c); // 8006120C
  cmps(c,0,(int32_t)c->r[3],0); // 80061210
  if (crb(c,2)) { goto L_80061220; } // 80061214
  c->r[3]=0u+0x00000000u; // 80061218
  goto L_800612F8; // 8006121C
L_80061220:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061220
  c->r[4]=0u+0x00000005u; // 80061224
  c->r[3]=c->r[3]+0x000000C4u; // 80061228
  c->lr=0x80061230u; f_8005CDE8(c); // 8006122C
  cmps(c,0,(int32_t)c->r[3],0); // 80061230
  if (crb(c,2)) { goto L_80061240; } // 80061234
  c->r[3]=0u+0x00000000u; // 80061238
  goto L_800612F8; // 8006123C
L_80061240:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061240
  c->r[4]=0u+0x00000018u; // 80061244
  c->r[3]=c->r[3]+0x000000C4u; // 80061248
  c->lr=0x80061250u; f_8005CDE8(c); // 8006124C
  cmps(c,0,(int32_t)c->r[3],0); // 80061250
  if (crb(c,2)) { goto L_80061260; } // 80061254
  c->r[3]=0u+0x00000000u; // 80061258
  goto L_800612F8; // 8006125C
L_80061260:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061260
  c->r[4]=0u+0x00000002u; // 80061264
  c->r[3]=c->r[3]+0x000000C4u; // 80061268
  c->lr=0x80061270u; f_8005CDE8(c); // 8006126C
  cmps(c,0,(int32_t)c->r[3],0); // 80061270
  if (crb(c,2)) { goto L_80061280; } // 80061274
  c->r[3]=0u+0x00000000u; // 80061278
  goto L_800612F8; // 8006127C
L_80061280:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061280
  c->r[4]=0u+0x00000006u; // 80061284
  c->r[3]=c->r[3]+0x000000C4u; // 80061288
  c->lr=0x80061290u; f_8005CDE8(c); // 8006128C
  cmps(c,0,(int32_t)c->r[3],0); // 80061290
  if (crb(c,2)) { goto L_800612A0; } // 80061294
  c->r[3]=0u+0x00000000u; // 80061298
  goto L_800612F8; // 8006129C
L_800612A0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800612A0
  c->r[4]=0u+0x00000003u; // 800612A4
  c->r[3]=c->r[3]+0x000000C4u; // 800612A8
  c->lr=0x800612B0u; f_8005CDE8(c); // 800612AC
  cmps(c,0,(int32_t)c->r[3],0); // 800612B0
  if (crb(c,2)) { goto L_800612C0; } // 800612B4
  c->r[3]=0u+0x00000000u; // 800612B8
  goto L_800612F8; // 800612BC
L_800612C0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800612C0
  c->r[4]=0u+0x00000007u; // 800612C4
  c->r[3]=c->r[3]+0x000000C4u; // 800612C8
  c->lr=0x800612D0u; f_8005CDE8(c); // 800612CC
  cmps(c,0,(int32_t)c->r[3],0); // 800612D0
  if (crb(c,2)) { goto L_800612E0; } // 800612D4
  c->r[3]=0u+0x00000000u; // 800612D8
  goto L_800612F8; // 800612DC
L_800612E0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800612E0
  c->r[4]=0u+0x00000004u; // 800612E4
  c->r[3]=c->r[3]+0x000000C4u; // 800612E8
  c->lr=0x800612F0u; f_8005CDE8(c); // 800612EC
  c->r[0]=cntlz(c->r[3]); // 800612F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800612F4
L_800612F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800612F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800612FC
  c->lr=c->r[0]; // 80061300
  c->r[1]=c->r[1]+0x00000010u; // 80061304
  return; // 80061308
}

// fn_8006130C
void f_8006130C(Ctx* __restrict c) {
  trace_call(0x8006130Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006130C
  c->r[0]=c->lr; // 80061310
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80061314
  c->r[4]=0u+0x00000001u; // 80061318
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006131C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061320
  c->r[31]=c->r[3]|c->r[3]; // 80061324
  c->r[3]=c->r[5]+0x000000C4u; // 80061328
  c->lr=0x80061330u; f_8005CDE8(c); // 8006132C
  cmps(c,0,(int32_t)c->r[3],0); // 80061330
  if (crb(c,2)) { goto L_80061340; } // 80061334
  c->r[3]=0u+0x00000000u; // 80061338
  goto L_80061438; // 8006133C
L_80061340:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061340
  c->r[4]=0u+0x00000008u; // 80061344
  c->r[3]=c->r[3]+0x000000C4u; // 80061348
  c->lr=0x80061350u; f_8005CDE8(c); // 8006134C
  cmps(c,0,(int32_t)c->r[3],0); // 80061350
  if (crb(c,2)) { goto L_80061360; } // 80061354
  c->r[3]=0u+0x00000000u; // 80061358
  goto L_80061438; // 8006135C
L_80061360:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061360
  c->r[4]=0u+0x00000018u; // 80061364
  c->r[3]=c->r[3]+0x000000C4u; // 80061368
  c->lr=0x80061370u; f_8005CDE8(c); // 8006136C
  cmps(c,0,(int32_t)c->r[3],0); // 80061370
  if (crb(c,2)) { goto L_80061380; } // 80061374
  c->r[3]=0u+0x00000000u; // 80061378
  goto L_80061438; // 8006137C
L_80061380:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061380
  c->r[4]=0u+0x00000002u; // 80061384
  c->r[3]=c->r[3]+0x000000C4u; // 80061388
  c->lr=0x80061390u; f_8005CDE8(c); // 8006138C
  cmps(c,0,(int32_t)c->r[3],0); // 80061390
  if (crb(c,2)) { goto L_800613A0; } // 80061394
  c->r[3]=0u+0x00000000u; // 80061398
  goto L_80061438; // 8006139C
L_800613A0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800613A0
  c->r[4]=0u+0x00000009u; // 800613A4
  c->r[3]=c->r[3]+0x000000C4u; // 800613A8
  c->lr=0x800613B0u; f_8005CDE8(c); // 800613AC
  cmps(c,0,(int32_t)c->r[3],0); // 800613B0
  if (crb(c,2)) { goto L_800613C0; } // 800613B4
  c->r[3]=0u+0x00000000u; // 800613B8
  goto L_80061438; // 800613BC
L_800613C0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800613C0
  c->r[4]=0u+0x00000003u; // 800613C4
  c->r[3]=c->r[3]+0x000000C4u; // 800613C8
  c->lr=0x800613D0u; f_8005CDE8(c); // 800613CC
  cmps(c,0,(int32_t)c->r[3],0); // 800613D0
  if (crb(c,2)) { goto L_800613E0; } // 800613D4
  c->r[3]=0u+0x00000000u; // 800613D8
  goto L_80061438; // 800613DC
L_800613E0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800613E0
  c->r[4]=0u+0x0000000Au; // 800613E4
  c->r[3]=c->r[3]+0x000000C4u; // 800613E8
  c->lr=0x800613F0u; f_8005CDE8(c); // 800613EC
  cmps(c,0,(int32_t)c->r[3],0); // 800613F0
  if (crb(c,2)) { goto L_80061400; } // 800613F4
  c->r[3]=0u+0x00000000u; // 800613F8
  goto L_80061438; // 800613FC
L_80061400:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061400
  c->r[4]=0u+0x00000004u; // 80061404
  c->r[3]=c->r[3]+0x000000C4u; // 80061408
  c->lr=0x80061410u; f_8005CDE8(c); // 8006140C
  cmps(c,0,(int32_t)c->r[3],0); // 80061410
  if (crb(c,2)) { goto L_80061420; } // 80061414
  c->r[3]=0u+0x00000000u; // 80061418
  goto L_80061438; // 8006141C
L_80061420:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061420
  c->r[4]=0u+0x00000030u; // 80061424
  c->r[3]=c->r[3]+0x000000C4u; // 80061428
  c->lr=0x80061430u; f_8005CDE8(c); // 8006142C
  c->r[0]=cntlz(c->r[3]); // 80061430
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80061434
L_80061438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006143C
  c->lr=c->r[0]; // 80061440
  c->r[1]=c->r[1]+0x00000010u; // 80061444
  return; // 80061448
}

// fn_8006144C
void f_8006144C(Ctx* __restrict c) {
  trace_call(0x8006144Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006144C
  c->r[0]=c->lr; // 80061450
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80061454
  c->r[4]=0u+0x0000000Bu; // 80061458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006145C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061460
  c->r[31]=c->r[3]|c->r[3]; // 80061464
  c->r[3]=c->r[5]+0x000000C4u; // 80061468
  c->lr=0x80061470u; f_8005CDE8(c); // 8006146C
  cmps(c,0,(int32_t)c->r[3],0); // 80061470
  if (crb(c,2)) { goto L_80061480; } // 80061474
  c->r[3]=0u+0x00000000u; // 80061478
  goto L_80061498; // 8006147C
L_80061480:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061480
  c->r[4]=0u+0x0000000Cu; // 80061484
  c->r[3]=c->r[3]+0x000000C4u; // 80061488
  c->lr=0x80061490u; f_8005CDE8(c); // 8006148C
  c->r[0]=cntlz(c->r[3]); // 80061490
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80061494
L_80061498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006149C
  c->lr=c->r[0]; // 800614A0
  c->r[1]=c->r[1]+0x00000010u; // 800614A4
  return; // 800614A8
}

// fn_800614AC
void f_800614AC(Ctx* __restrict c) {
  trace_call(0x800614ACu);
  c->r[3]=0u+0x00000001u; // 800614AC
  return; // 800614B0
}

// fn_800614B4
void f_800614B4(Ctx* __restrict c) {
  trace_call(0x800614B4u);
  c->r[3]=0u+0x00000001u; // 800614B4
  return; // 800614B8
}

// fn_800614BC
void f_800614BC(Ctx* __restrict c) {
  trace_call(0x800614BCu);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800614BC
  c->r[4]=0u+0x00000019u; // 800614C0
  c->r[3]=c->r[3]+0x000000C4u; // 800614C4
  f_8005CDE8(c); return; // 800614C8
}

// fn_800614CC
void f_800614CC(Ctx* __restrict c) {
  trace_call(0x800614CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800614CC
  c->r[0]=c->lr; // 800614D0
  c->r[4]=c->r[3]|c->r[3]; // 800614D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800614D8
  c->r[3]=c->r[1]+0x00000008u; // 800614DC
  c->lr=0x800614E4u; f_80061584(c); // 800614E0
  c->r[3]=c->r[1]+0x00000014u; // 800614E4
  c->r[4]=c->r[1]+0x00000008u; // 800614E8
  c->lr=0x800614F0u; f_8005FC20(c); // 800614EC
  c->r[3]=0u+0x80760000u; // 800614F0
  c->r[4]=0u+0x80760000u; // 800614F4
  c->r[3]=c->r[3]+0xFFFF9C78u; // 800614F8
  c->r[5]=c->r[1]+0x00000014u; // 800614FC
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 80061500
  c->lr=0x80061508u; f_80061518(c); // 80061504
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061508
  c->lr=c->r[0]; // 8006150C
  c->r[1]=c->r[1]+0x00000020u; // 80061510
  return; // 80061514
}

// fn_80061518
void f_80061518(Ctx* __restrict c) {
  trace_call(0x80061518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061518
  c->r[0]=c->lr; // 8006151C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80061520
  c->r[0]=c->r[3]|c->r[3]; // 80061524
  c->r[3]=c->r[1]+0x00000008u; // 80061528
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006152C
  c->r[31]=c->r[4]|c->r[4]; // 80061530
  c->r[4]=c->r[5]|c->r[5]; // 80061534
  c->r[5]=c->r[0]|c->r[0]; // 80061538
  c->lr=0x80061540u; f_8005FC60(c); // 8006153C
  c->r[3]=c->r[1]+0x00000008u; // 80061540
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80061544
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 80061548
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8006154C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80061550
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,1,0);} // 80061554
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80061558
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8006155C
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061560
  fcmp(c,0,c->f[1],c->f[0]); // 80061564
  c->r[3]=c->cr; // 80061568
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006156C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061570
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80061574
  c->lr=c->r[0]; // 80061578
  c->r[1]=c->r[1]+0x00000020u; // 8006157C
  return; // 80061580
}

// fn_80061584
void f_80061584(Ctx* __restrict c) {
  trace_call(0x80061584u);
  {uint32_t ea=c->r[4]+0x000001B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061584
  {uint32_t ea=c->r[4]+0x000001C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061588
  {uint32_t ea=c->r[4]+0x000001D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8006158C
  f_8005FD70(c); return; // 80061590
}

// fn_80061594
void f_80061594(Ctx* __restrict c) {
  trace_call(0x80061594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061594
  c->r[0]=c->lr; // 80061598
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006159C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800615A0
  c->r[31]=c->r[3]|c->r[3]; // 800615A4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800615A8
  c->r[12]=R32(c->r[12]+0x00000100u); // 800615AC
  c->ctr=c->r[12]; // 800615B0
  if (true) { c->lr=0x800615B8u; dispatch(c,c->ctr); } // 800615B4
  cmps(c,0,(int32_t)c->r[3],0); // 800615B8
  if (!crb(c,2)) { goto L_800615C8; } // 800615BC
  c->r[3]=0u+0x00000000u; // 800615C0
  goto L_800615E0; // 800615C4
L_800615C8:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800615C8
  c->r[4]=0u+0x00000018u; // 800615CC
  c->r[3]=c->r[3]+0x000000C4u; // 800615D0
  c->lr=0x800615D8u; f_8005CDE8(c); // 800615D4
  c->r[0]=cntlz(c->r[3]); // 800615D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800615DC
L_800615E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800615E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800615E4
  c->lr=c->r[0]; // 800615E8
  c->r[1]=c->r[1]+0x00000010u; // 800615EC
  return; // 800615F0
}

// fn_800615F4
void f_800615F4(Ctx* __restrict c) {
  trace_call(0x800615F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800615F4
  c->r[0]=c->lr; // 800615F8
  c->r[4]=0u+0x0000001Bu; // 800615FC
  c->r[5]=0u+0x00000001u; // 80061600
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061608
  c->r[31]=c->r[3]|c->r[3]; // 8006160C
  c->r[6]=R32(c->r[3]+0x0000044Cu); // 80061610
  c->r[3]=c->r[6]+0x000000C4u; // 80061614
  c->lr=0x8006161Cu; f_8005DCA0(c); // 80061618
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8006161C
  c->r[4]=0u+0x0000000Du; // 80061620
  c->r[5]=0u+0x00000001u; // 80061624
  c->r[3]=c->r[3]+0x000000C4u; // 80061628
  c->lr=0x80061630u; f_8005DCA0(c); // 8006162C
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80061630
  c->r[4]=0u+0x00000011u; // 80061634
  c->r[5]=0u+0x00000001u; // 80061638
  c->r[3]=c->r[3]+0x000000C4u; // 8006163C
  c->lr=0x80061644u; f_8005DCA0(c); // 80061640
  c->r[3]=c->r[31]|c->r[31]; // 80061644
  c->lr=0x8006164Cu; f_8005EEE8(c); // 80061648
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8006164C
  c->r[3]=c->r[31]|c->r[31]; // 80061650
  c->r[12]=R32(c->r[12]+0x000000D8u); // 80061654
  c->ctr=c->r[12]; // 80061658
  if (true) { c->lr=0x80061660u; dispatch(c,c->ctr); } // 8006165C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061664
  c->lr=c->r[0]; // 80061668
  c->r[1]=c->r[1]+0x00000010u; // 8006166C
  return; // 80061670
}

// fn_80061674
void f_80061674(Ctx* __restrict c) {
  trace_call(0x80061674u);
  return; // 80061674
}

// fn_80061678
void f_80061678(Ctx* __restrict c) {
  trace_call(0x80061678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061678
  c->r[0]=c->lr; // 8006167C
  c->r[4]=0u+0x0000001Bu; // 80061680
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061688
  c->r[31]=c->r[3]|c->r[3]; // 8006168C
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80061690
  c->r[3]=c->r[5]+0x000000C4u; // 80061694
  c->lr=0x8006169Cu; f_8005CDE8(c); // 80061698
  cmps(c,0,(int32_t)c->r[3],0); // 8006169C
  if (crb(c,2)) { goto L_800616FC; } // 800616A0
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800616A4
  c->r[4]=0u+0x0000001Bu; // 800616A8
  c->r[5]=0u+0x00000000u; // 800616AC
  c->r[3]=c->r[3]+0x000000C4u; // 800616B0
  c->lr=0x800616B8u; f_8005DCA0(c); // 800616B4
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800616B8
  c->r[4]=0u+0x0000000Du; // 800616BC
  c->r[5]=0u+0x00000000u; // 800616C0
  c->r[3]=c->r[3]+0x000000C4u; // 800616C4
  c->lr=0x800616CCu; f_8005DCA0(c); // 800616C8
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800616CC
  c->r[4]=0u+0x00000011u; // 800616D0
  c->r[5]=0u+0x00000000u; // 800616D4
  c->r[3]=c->r[3]+0x000000C4u; // 800616D8
  c->lr=0x800616E0u; f_8005DCA0(c); // 800616DC
  c->r[3]=c->r[31]|c->r[31]; // 800616E0
  c->lr=0x800616E8u; f_8005EEE8(c); // 800616E4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800616E8
  c->r[3]=c->r[31]|c->r[31]; // 800616EC
  c->r[12]=R32(c->r[12]+0x000000DCu); // 800616F0
  c->ctr=c->r[12]; // 800616F4
  if (true) { c->lr=0x800616FCu; dispatch(c,c->ctr); } // 800616F8
L_800616FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800616FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061700
  c->lr=c->r[0]; // 80061704
  c->r[1]=c->r[1]+0x00000010u; // 80061708
  return; // 8006170C
}

// fn_80061710
void f_80061710(Ctx* __restrict c) {
  trace_call(0x80061710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061710
  c->r[0]=c->lr; // 80061714
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006171C
  c->r[31]=c->r[4]|c->r[4]; // 80061720
  W32(c->r[1]+0x00000008u,c->r[30]); // 80061724
  c->r[30]=c->r[3]|c->r[3]; // 80061728
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8006172C
  c->r[0]=R32(c->r[5]+0x00000094u); // 80061730
  cmps(c,0,(int32_t)c->r[0],1); // 80061734
  if (!crb(c,2)) { goto L_800617A0; } // 80061738
  c->r[0]=R8(c->r[13]+0xFFFFBDE5u); // 8006173C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80061740
  if (!crb(c,2)) { goto L_80061768; } // 80061744
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061748
  c->r[3]=0u+0x80740000u; // 8006174C
  {uint32_t ea=c->r[2]+0xFFFF82A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061750
  c->r[3]=c->r[3]+0x0000749Cu; // 80061754
  c->f[3]=c->f[1]; // 80061758
  c->lr=0x80061760u; f_8005FD70(c); // 8006175C
  c->r[0]=0u+0x00000001u; // 80061760
  W8(c->r[13]+0xFFFFBDE5u,c->r[0]); // 80061764
L_80061768:;
  c->r[3]=c->r[30]|c->r[30]; // 80061768
  c->lr=0x80061770u; f_800617CC(c); // 8006176C
  c->r[4]=c->r[31]|c->r[31]; // 80061770
  c->r[3]=c->r[3]+0x000001B8u; // 80061774
  c->lr=0x8006177Cu; f_80382F2C(c); // 80061778
  c->r[4]=0u+0x80740000u; // 8006177C
  c->r[3]=c->r[31]|c->r[31]; // 80061780
  c->r[5]=c->r[4]+0x0000749Cu; // 80061784
  {uint32_t ea=c->r[4]+0x0000749Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80061788
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006178C
  c->r[4]=c->r[31]|c->r[31]; // 80061790
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061794
  c->lr=0x8006179Cu; f_80383598(c); // 80061798
  goto L_800617B0; // 8006179C
L_800617A0:;
  c->lr=0x800617A4u; f_8033FE4C(c); // 800617A0
  c->r[4]=c->r[31]|c->r[31]; // 800617A4
  c->r[3]=c->r[3]+0x0000012Cu; // 800617A8
  c->lr=0x800617B0u; f_8032EFEC(c); // 800617AC
L_800617B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800617B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800617B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800617B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800617BC
  c->lr=c->r[0]; // 800617C0
  c->r[1]=c->r[1]+0x00000010u; // 800617C4
  return; // 800617C8
}

// fn_800617CC
void f_800617CC(Ctx* __restrict c) {
  trace_call(0x800617CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800617CC
  c->r[0]=c->lr; // 800617D0
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800617D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800617D8
  c->r[3]=c->r[1]+0x00000008u; // 800617DC
  c->r[4]=R32(c->r[5]+0x00000098u); // 800617E0
  c->r[0]=R32(c->r[5]+0x0000009Cu); // 800617E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800617E8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800617EC
  c->lr=0x800617F4u; f_80046E94(c); // 800617F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800617F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800617F8
  c->lr=c->r[0]; // 800617FC
  c->r[1]=c->r[1]+0x00000010u; // 80061800
  return; // 80061804
}

// fn_80061808
void f_80061808(Ctx* __restrict c) {
  trace_call(0x80061808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061808
  c->r[0]=c->lr; // 8006180C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061810
  c->lr=0x80061818u; f_80061A2C(c); // 80061814
  c->r[4]=0u+0x80690000u; // 80061818
  c->r[4]=c->r[4]+0xFFFFB8D8u; // 8006181C
  c->r[4]=c->r[4]+0x00000102u; // 80061820
  c->lr=0x80061828u; f_803B393C(c); // 80061824
  c->r[0]=cntlz(c->r[3]); // 80061828
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8006182C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061830
  c->lr=c->r[0]; // 80061834
  c->r[1]=c->r[1]+0x00000010u; // 80061838
  return; // 8006183C
}

// fn_80061840
void f_80061840(Ctx* __restrict c) {
  trace_call(0x80061840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061840
  c->r[0]=c->lr; // 80061844
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006184C
  c->r[31]=c->r[3]|c->r[3]; // 80061850
  c->lr=0x80061858u; f_80061808(c); // 80061854
  cmps(c,0,(int32_t)c->r[3],0); // 80061858
  if (!crb(c,2)) { goto L_80061868; } // 8006185C
  c->r[3]=0u+0x00000000u; // 80061860
  goto L_80061884; // 80061864
L_80061868:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80061868
  c->r[3]=c->r[31]|c->r[31]; // 8006186C
  c->r[12]=R32(c->r[12]+0x00000108u); // 80061870
  c->ctr=c->r[12]; // 80061874
  if (true) { c->lr=0x8006187Cu; dispatch(c,c->ctr); } // 80061878
  c->r[0]=cntlz(c->r[3]); // 8006187C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80061880
L_80061884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061888
  c->lr=c->r[0]; // 8006188C
  c->r[1]=c->r[1]+0x00000010u; // 80061890
  return; // 80061894
}

// fn_80061898
void f_80061898(Ctx* __restrict c) {
  trace_call(0x80061898u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061898
  c->r[0]=c->lr; // 8006189C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800618A0
  c->r[0]=0u+0x00000000u; // 800618A4
  c->r[5]=c->r[1]+0x00000010u; // 800618A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800618AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800618B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800618B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800618B8
  c->lr=0x800618C0u; f_800618D0(c); // 800618BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800618C0
  c->lr=c->r[0]; // 800618C4
  c->r[1]=c->r[1]+0x00000020u; // 800618C8
  return; // 800618CC
}

// fn_800618D0
void f_800618D0(Ctx* __restrict c) {
  trace_call(0x800618D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800618D0
  c->r[0]=c->lr; // 800618D4
  cmps(c,0,(int32_t)c->r[4],1); // 800618D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800618DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800618E0
  c->r[29]=c->r[3]|c->r[3]; // 800618E4
  c->r[30]=c->r[4]|c->r[4]; // 800618E8
  c->r[31]=c->r[5]|c->r[5]; // 800618EC
  if (!crb(c,2)) { goto L_80061908; } // 800618F0
  c->r[3]=c->r[31]|c->r[31]; // 800618F4
  c->lr=0x800618FCu; f_8005F5F4(c); // 800618F8
  cmps(c,0,(int32_t)c->r[3],0); // 800618FC
  if (crb(c,2)) { goto L_80061908; } // 80061900
  c->r[30]=0u+0x00000000u; // 80061904
L_80061908:;
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 80061908
  c->r[0]=R32(c->r[3]+0x00000094u); // 8006190C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80061910
  if (!crb(c,2)) { goto L_80061920; } // 80061914
  c->r[3]=0u+0x00000001u; // 80061918
  goto L_80061964; // 8006191C
L_80061920:;
  c->r[3]=c->r[29]|c->r[29]; // 80061920
  c->lr=0x80061928u; f_80061808(c); // 80061924
  cmps(c,0,(int32_t)c->r[3],0); // 80061928
  if (!crb(c,2)) { goto L_80061938; } // 8006192C
  c->r[3]=0u+0x00000000u; // 80061930
  goto L_80061964; // 80061934
L_80061938:;
  c->r[4]=R32(c->r[29]+0x00000438u); // 80061938
  c->r[3]=c->r[29]|c->r[29]; // 8006193C
  c->r[5]=0u+0x00000001u; // 80061940
  c->lr=0x80061948u; f_8005E5C4(c); // 80061944
  c->r[3]=R32(c->r[29]+0x00000438u); // 80061948
  c->r[4]=c->r[31]|c->r[31]; // 8006194C
  W32(c->r[3]+0x00000024u,c->r[30]); // 80061950
  c->r[3]=R32(c->r[29]+0x00000438u); // 80061954
  c->r[3]=c->r[3]+0x00000028u; // 80061958
  c->lr=0x80061960u; f_80053568(c); // 8006195C
  c->r[3]=0u+0x00000001u; // 80061960
L_80061964:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80061964
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061968
  c->lr=c->r[0]; // 8006196C
  c->r[1]=c->r[1]+0x00000020u; // 80061970
  return; // 80061974
}

// fn_80061978
void f_80061978(Ctx* __restrict c) {
  trace_call(0x80061978u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061978
  c->r[0]=c->lr; // 8006197C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80061980
  c->r[0]=0u+0x00000000u; // 80061984
  c->r[5]=c->r[1]+0x00000010u; // 80061988
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006198C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80061990
  W32(c->r[1]+0x00000010u,c->r[0]); // 80061994
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061998
  c->lr=0x800619A0u; f_800619B0(c); // 8006199C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800619A0
  c->lr=c->r[0]; // 800619A4
  c->r[1]=c->r[1]+0x00000020u; // 800619A8
  return; // 800619AC
}

// fn_800619B0
void f_800619B0(Ctx* __restrict c) {
  trace_call(0x800619B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800619B0
  c->r[0]=c->lr; // 800619B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800619B8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800619BC
  c->r[29]=c->r[3]|c->r[3]; // 800619C0
  c->r[30]=c->r[4]|c->r[4]; // 800619C4
  c->r[31]=c->r[5]|c->r[5]; // 800619C8
  c->lr=0x800619D0u; f_80061808(c); // 800619CC
  cmps(c,0,(int32_t)c->r[3],0); // 800619D0
  if (!crb(c,2)) { goto L_800619E0; } // 800619D4
  c->r[3]=0u+0x00000000u; // 800619D8
  goto L_800619FC; // 800619DC
L_800619E0:;
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800619E0
  c->r[4]=c->r[31]|c->r[31]; // 800619E4
  W32(c->r[3]+0x00000094u,c->r[30]); // 800619E8
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800619EC
  c->r[3]=c->r[3]+0x00000098u; // 800619F0
  c->lr=0x800619F8u; f_80053568(c); // 800619F4
  c->r[3]=0u+0x00000001u; // 800619F8
L_800619FC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800619FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061A00
  c->lr=c->r[0]; // 80061A04
  c->r[1]=c->r[1]+0x00000020u; // 80061A08
  return; // 80061A0C
}

// fn_80061A10
void f_80061A10(Ctx* __restrict c) {
  trace_call(0x80061A10u);
  c->r[3]=R32(c->r[3]+0x00000440u); // 80061A10
  cmps(c,0,(int32_t)c->r[3],0); // 80061A14
  if (crb(c,2)) { goto L_80061A24; } // 80061A18
  c->r[3]=R32(c->r[3]+0x00000000u); // 80061A1C
  return; // 80061A20
L_80061A24:;
  c->r[3]=0u+0x00000000u; // 80061A24
  return; // 80061A28
}

// fn_80061A2C
void f_80061A2C(Ctx* __restrict c) {
  trace_call(0x80061A2Cu);
  c->r[3]=R32(c->r[3]+0x00000440u); // 80061A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80061A30
  if (crb(c,2)) { goto L_80061A40; } // 80061A34
  c->r[3]=R32(c->r[3]+0x00000008u); // 80061A38
  return; // 80061A3C
L_80061A40:;
  c->r[3]=0u+0x00000000u; // 80061A40
  return; // 80061A44
}

// fn_80061A48
void f_80061A48(Ctx* __restrict c) {
  trace_call(0x80061A48u);
  c->r[4]=c->r[4]+0x000001B8u; // 80061A48
  f_80060878(c); return; // 80061A4C
}

// fn_80061A50
void f_80061A50(Ctx* __restrict c) {
  trace_call(0x80061A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061A50
  c->r[0]=c->lr; // 80061A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061A5C
  c->r[31]=c->r[3]|c->r[3]; // 80061A60
  c->r[3]=c->r[4]+0x000000FCu; // 80061A64
  c->r[5]=R32(c->r[4]+0x00000444u); // 80061A68
  c->r[4]=R32(c->r[5]+0x000001C0u); // 80061A6C
  c->lr=0x80061A74u; f_802E6E80(c); // 80061A70
  c->r[4]=c->r[3]|c->r[3]; // 80061A74
  c->r[3]=c->r[31]|c->r[31]; // 80061A78
  c->lr=0x80061A80u; f_80060878(c); // 80061A7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061A80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061A84
  c->lr=c->r[0]; // 80061A88
  c->r[1]=c->r[1]+0x00000010u; // 80061A8C
  return; // 80061A90
}

// fn_80061A94
void f_80061A94(Ctx* __restrict c) {
  trace_call(0x80061A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061A94
  c->r[0]=c->lr; // 80061A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80061A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80061AA0
  c->r[31]=c->r[3]|c->r[3]; // 80061AA4
  c->r[3]=c->r[4]+0x000000FCu; // 80061AA8
  c->r[5]=R32(c->r[4]+0x00000444u); // 80061AAC
  c->r[4]=R32(c->r[5]+0x000001C4u); // 80061AB0
  c->lr=0x80061AB8u; f_802E6E80(c); // 80061AB4
  c->r[4]=c->r[3]|c->r[3]; // 80061AB8
  c->r[3]=c->r[31]|c->r[31]; // 80061ABC
  c->lr=0x80061AC4u; f_80060878(c); // 80061AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80061AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80061AC8
  c->lr=c->r[0]; // 80061ACC
  c->r[1]=c->r[1]+0x00000010u; // 80061AD0
  return; // 80061AD4
}

// fn_80061AD8
void f_80061AD8(Ctx* __restrict c) {
  trace_call(0x80061AD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061AD8
  c->r[0]=c->lr; // 80061ADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80061AE0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80061AE4
  c->r[29]=c->r[4]|c->r[4]; // 80061AE8
  c->r[30]=c->r[5]|c->r[5]; // 80061AEC
  c->r[31]=c->r[3]+0x000000FCu; // 80061AF0
  c->r[0]=R8(c->r[13]+0xFFFFBDECu); // 80061AF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80061AF8
  if (!crb(c,2)) { goto L_80061B18; } // 80061AFC
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 80061B00
  c->r[0]=0u+0x00000001u; // 80061B04
  W32(c->r[13]+0xFFFFBDE8u,c->r[3]); // 80061B08
  c->r[3]=c->r[3]+0x00000001u; // 80061B0C
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 80061B10
  W8(c->r[13]+0xFFFFBDECu,c->r[0]); // 80061B14
L_80061B18:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80061B18
  c->r[3]=c->r[31]|c->r[31]; // 80061B1C
  c->r[4]=R32(c->r[13]+0xFFFFBDE8u); // 80061B20
  c->r[12]=R32(c->r[12]+0x00000048u); // 80061B24
  c->ctr=c->r[12]; // 80061B28
  if (true) { c->lr=0x80061B30u; dispatch(c,c->ctr); } // 80061B2C
  cmps(c,0,(int32_t)c->r[3],0); // 80061B30
  if (crb(c,2)) { goto L_80061B44; } // 80061B34
  c->r[4]=c->r[30]|c->r[30]; // 80061B38
  c->lr=0x80061B40u; f_803547F0(c); // 80061B3C
  goto L_80061B48; // 80061B40
L_80061B44:;
  c->r[3]=0u+0x00000000u; // 80061B44
L_80061B48:;
  cmps(c,0,(int32_t)c->r[3],0); // 80061B48
  if (crb(c,2)) { goto L_80061B64; } // 80061B4C
  c->r[4]=c->r[29]|c->r[29]; // 80061B50
  c->r[3]=c->r[3]+0x00000020u; // 80061B54
  c->lr=0x80061B5Cu; f_80382F2C(c); // 80061B58
  c->r[3]=0u+0x00000001u; // 80061B5C
  goto L_80061B74; // 80061B60
L_80061B64:;
  c->r[4]=c->r[29]|c->r[29]; // 80061B64
  c->r[3]=c->r[31]+0x000000BCu; // 80061B68
  c->lr=0x80061B70u; f_80382F2C(c); // 80061B6C
  c->r[3]=0u+0x00000000u; // 80061B70
L_80061B74:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80061B74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061B78
  c->lr=c->r[0]; // 80061B7C
  c->r[1]=c->r[1]+0x00000020u; // 80061B80
  return; // 80061B84
}

// fn_80061B88
void f_80061B88(Ctx* __restrict c) {
  trace_call(0x80061B88u);
  c->r[5]=0u+0x00000001u; // 80061B88
  f_80061AD8(c); return; // 80061B8C
}

// fn_80061B90
void f_80061B90(Ctx* __restrict c) {
  trace_call(0x80061B90u);
  c->r[5]=0u+0x00000002u; // 80061B90
  f_80061AD8(c); return; // 80061B94
}

// fn_80061B98
void f_80061B98(Ctx* __restrict c) {
  trace_call(0x80061B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061B98
  c->r[0]=c->lr; // 80061B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80061BA0
  c->r[6]=c->r[1]+0x00000008u; // 80061BA4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 80061BA8
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 80061BAC
  {double t0=S(c->f[1]*c->ps1[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80061BB0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80061BB4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80061BB8
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 80061BBC
  {double t0=S(std::fma(c->f[2],c->f[1],-c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80061BC0
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80061BC4
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 80061BC8
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80061BCC
  {double t0=S(c->ps1[0]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80061BD0
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 80061BD4
  c->r[4]=c->r[6]|c->r[6]; // 80061BD8
  c->lr=0x80061BE0u; f_8005CD7C(c); // 80061BDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80061BE0
  c->lr=c->r[0]; // 80061BE4
  c->r[1]=c->r[1]+0x00000020u; // 80061BE8
  return; // 80061BEC
}

// fn_80061BF0
void f_80061BF0(Ctx* __restrict c) {
  trace_call(0x80061BF0u);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 80061BF0
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80061BF4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061BF8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80061BFC
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80061C00
  {uint32_t ea=c->r[2]+0xFFFF82ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80061C04
  fcmp(c,0,c->f[1],c->f[0]); // 80061C08
  c->r[3]=c->cr; // 80061C0C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80061C10
  return; // 80061C14
}

// fn_80061C18
void f_80061C18(Ctx* __restrict c) {
  trace_call(0x80061C18u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061C18
  c->r[0]=c->lr; // 80061C1C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80061C20
  c->r[11]=c->r[1]+0x000000F0u; // 80061C24
  c->lr=0x80061C2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80061C28
  c->r[29]=c->r[3]|c->r[3]; // 80061C2C
  c->r[30]=c->r[4]|c->r[4]; // 80061C30
  c->r[3]=c->r[3]+0x000001B8u; // 80061C34
  c->r[4]=c->r[1]+0x00000078u; // 80061C38
  c->lr=0x80061C40u; f_80382F2C(c); // 80061C3C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061C40
  c->r[3]=c->r[1]+0x0000005Cu; // 80061C44
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061C48
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061C4C
  c->lr=0x80061C54u; f_8005FD70(c); // 80061C50
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061C54
  c->r[3]=c->r[1]+0x00000068u; // 80061C58
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061C5C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061C60
  c->lr=0x80061C68u; f_8005FD70(c); // 80061C64
  c->r[31]=0u+0x806A0000u; // 80061C68
  c->r[4]=c->r[30]|c->r[30]; // 80061C6C
  c->r[3]=c->r[1]+0x00000008u; // 80061C70
  c->r[5]=c->r[31]+0x00000AA8u; // 80061C74
  c->lr=0x80061C7Cu; f_8030E0BC(c); // 80061C78
  c->r[3]=c->r[1]+0x00000014u; // 80061C7C
  c->r[4]=c->r[1]+0x00000068u; // 80061C80
  c->r[5]=c->r[31]+0x00000AA8u; // 80061C84
  c->lr=0x80061C8Cu; f_8030E0BC(c); // 80061C88
  c->r[3]=c->r[1]+0x00000020u; // 80061C8C
  c->r[4]=c->r[1]+0x00000008u; // 80061C90
  c->r[5]=c->r[1]+0x00000014u; // 80061C94
  c->lr=0x80061C9Cu; f_80061B98(c); // 80061C98
  c->r[3]=c->r[1]+0x00000020u; // 80061C9C
  c->lr=0x80061CA4u; f_80061BF0(c); // 80061CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80061CA4
  if (crb(c,2)) { goto L_80061CE4; } // 80061CA8
  c->r[3]=c->r[1]+0x0000002Cu; // 80061CAC
  c->r[4]=c->r[1]+0x0000005Cu; // 80061CB0
  c->r[5]=c->r[31]+0x00000AA8u; // 80061CB4
  c->lr=0x80061CBCu; f_8030E0BC(c); // 80061CB8
  c->r[3]=c->r[1]+0x00000014u; // 80061CBC
  c->r[4]=c->r[1]+0x0000002Cu; // 80061CC0
  c->lr=0x80061CC8u; f_8005DC84(c); // 80061CC4
  c->r[3]=c->r[1]+0x00000038u; // 80061CC8
  c->r[4]=c->r[1]+0x00000008u; // 80061CCC
  c->r[5]=c->r[1]+0x00000014u; // 80061CD0
  c->lr=0x80061CD8u; f_80061B98(c); // 80061CD4
  c->r[3]=c->r[1]+0x00000020u; // 80061CD8
  c->r[4]=c->r[1]+0x00000038u; // 80061CDC
  c->lr=0x80061CE4u; f_8005DC84(c); // 80061CE0
L_80061CE4:;
  c->r[3]=c->r[1]+0x00000020u; // 80061CE4
  c->r[5]=0u+0x806A0000u; // 80061CE8
  c->r[4]=c->r[3]|c->r[3]; // 80061CEC
  c->r[5]=c->r[5]+0x00000AA8u; // 80061CF0
  c->lr=0x80061CF8u; f_8030E0BC(c); // 80061CF4
  c->r[3]=c->r[1]+0x00000044u; // 80061CF8
  c->r[4]=c->r[1]+0x00000020u; // 80061CFC
  c->r[5]=c->r[1]+0x00000008u; // 80061D00
  c->lr=0x80061D08u; f_80061B98(c); // 80061D04
  c->r[3]=c->r[1]+0x00000014u; // 80061D08
  c->r[4]=c->r[1]+0x00000044u; // 80061D0C
  c->lr=0x80061D14u; f_8005DC84(c); // 80061D10
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061D14
  c->r[3]=c->r[1]+0x00000050u; // 80061D18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061D1C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061D20
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061D24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 80061D28
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80061D2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 80061D30
  {uint32_t ea=c->r[1]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 80061D34
  {uint32_t ea=c->r[1]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 80061D38
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80061D3C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80061D40
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061D44
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 80061D48
  {uint32_t ea=c->r[1]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061D4C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[3]);} // 80061D50
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061D54
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[9]);} // 80061D58
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[8]);} // 80061D5C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[7]);} // 80061D60
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[6]);} // 80061D64
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[5]);} // 80061D68
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[4]);} // 80061D6C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80061D70
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80061D74
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 80061D78
  c->lr=0x80061D80u; f_8005FD70(c); // 80061D7C
  c->r[3]=c->r[1]+0x000000A8u; // 80061D80
  c->r[4]=c->r[1]+0x00000050u; // 80061D84
  c->lr=0x80061D8Cu; f_8005CDC8(c); // 80061D88
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80061D8C
  c->r[3]=c->r[29]|c->r[29]; // 80061D90
  c->r[4]=c->r[1]+0x000000A8u; // 80061D94
  c->r[12]=R32(c->r[12]+0x00000020u); // 80061D98
  c->ctr=c->r[12]; // 80061D9C
  if (true) { c->lr=0x80061DA4u; dispatch(c,c->ctr); } // 80061DA0
  c->r[11]=c->r[1]+0x000000F0u; // 80061DA4
  c->lr=0x80061DACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80061DA8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80061DAC
  c->lr=c->r[0]; // 80061DB0
  c->r[1]=c->r[1]+0x000000F0u; // 80061DB4
  return; // 80061DB8
}

// fn_80061DBC
void f_80061DBC(Ctx* __restrict c) {
  trace_call(0x80061DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061DBC
  c->r[0]=c->lr; // 80061DC0
  c->r[5]=0u+0x80760000u; // 80061DC4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80061DC8
  c->r[0]=0u+0x00000000u; // 80061DCC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80061DD0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80061DD4
  c->f[31]=c->f[2]; // 80061DD8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 80061DDC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 80061DE0
  c->f[30]=c->f[1]; // 80061DE4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80061DE8
  W32(c->r[1]+0x00000078u,c->r[30]); // 80061DEC
  c->r[30]=c->r[3]|c->r[3]; // 80061DF0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061DF4
  {uint32_t ea=c->r[5]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061DF8
  fcmp(c,0,c->f[3],c->f[0]); // 80061DFC
  if (!crb(c,2)) { goto L_80061E2C; } // 80061E00
  c->r[3]=c->r[5]+0xFFFF9C78u; // 80061E04
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061E08
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061E0C
  fcmp(c,0,c->f[1],c->f[0]); // 80061E10
  if (!crb(c,2)) { goto L_80061E2C; } // 80061E14
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061E18
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061E1C
  fcmp(c,0,c->f[1],c->f[0]); // 80061E20
  if (!crb(c,2)) { goto L_80061E2C; } // 80061E24
  c->r[0]=0u+0x00000001u; // 80061E28
L_80061E2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80061E2C
  if (crb(c,2)) { goto L_80061E5C; } // 80061E30
  c->r[3]=c->r[1]+0x00000050u; // 80061E34
  c->r[4]=c->r[30]+0x000001B8u; // 80061E38
  c->lr=0x80061E40u; f_80061F40(c); // 80061E3C
  c->r[3]=c->r[1]+0x0000005Cu; // 80061E40
  c->r[4]=c->r[1]+0x00000050u; // 80061E44
  c->lr=0x80061E4Cu; f_8005FC20(c); // 80061E48
  c->r[3]=c->r[1]+0x00000068u; // 80061E4C
  c->r[4]=c->r[1]+0x0000005Cu; // 80061E50
  c->lr=0x80061E58u; f_8005DC84(c); // 80061E54
  goto L_80061E64; // 80061E58
L_80061E5C:;
  c->r[3]=c->r[1]+0x00000068u; // 80061E5C
  c->lr=0x80061E64u; f_8005DC84(c); // 80061E60
L_80061E64:;
  c->f[1]=c->f[31]; // 80061E64
  c->r[3]=c->r[1]+0x00000008u; // 80061E68
  c->r[4]=c->r[1]+0x00000068u; // 80061E6C
  c->lr=0x80061E74u; f_8005ED34(c); // 80061E70
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80061E74
  c->r[4]=c->r[30]|c->r[30]; // 80061E78
  c->r[3]=c->r[1]+0x00000014u; // 80061E7C
  c->r[12]=R32(c->r[12]+0x00000134u); // 80061E80
  c->ctr=c->r[12]; // 80061E84
  if (true) { c->lr=0x80061E8Cu; dispatch(c,c->ctr); } // 80061E88
  c->r[3]=c->r[1]+0x00000020u; // 80061E8C
  c->r[4]=c->r[1]+0x00000014u; // 80061E90
  c->r[5]=c->r[1]+0x00000008u; // 80061E94
  c->lr=0x80061E9Cu; f_8005ED10(c); // 80061E98
  c->f[1]=c->f[30]; // 80061E9C
  c->r[3]=c->r[1]+0x0000002Cu; // 80061EA0
  c->r[4]=c->r[1]+0x00000068u; // 80061EA4
  c->lr=0x80061EACu; f_8005ED34(c); // 80061EA8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80061EAC
  c->r[4]=c->r[30]|c->r[30]; // 80061EB0
  c->r[3]=c->r[1]+0x00000038u; // 80061EB4
  c->r[12]=R32(c->r[12]+0x00000134u); // 80061EB8
  c->ctr=c->r[12]; // 80061EBC
  if (true) { c->lr=0x80061EC4u; dispatch(c,c->ctr); } // 80061EC0
  c->r[3]=c->r[1]+0x00000044u; // 80061EC4
  c->r[4]=c->r[1]+0x00000038u; // 80061EC8
  c->r[5]=c->r[1]+0x0000002Cu; // 80061ECC
  c->lr=0x80061ED4u; f_8005ED10(c); // 80061ED0
  c->r[3]=0u+0x00310000u; // 80061ED4
  c->r[31]=0u+0x80740000u; // 80061ED8
  c->r[3]=c->r[3]+0x00000004u; // 80061EDC
  c->r[4]=c->r[1]+0x00000044u; // 80061EE0
  c->r[5]=c->r[1]+0x00000020u; // 80061EE4
  c->r[6]=c->r[31]+0x00007108u; // 80061EE8
  c->lr=0x80061EF0u; f_8005EBB0(c); // 80061EEC
  c->r[4]=c->r[31]+0x00007108u; // 80061EF0
  c->r[0]=R32(c->r[4]+0x00000348u); // 80061EF4
  cmps(c,0,(int32_t)c->r[0],0); // 80061EF8
  if (crb(c,2)) { goto L_80061F14; } // 80061EFC
  c->r[3]=c->r[30]|c->r[30]; // 80061F00
  c->r[4]=c->r[4]+0x00000034u; // 80061F04
  c->lr=0x80061F0Cu; f_80061C18(c); // 80061F08
  c->r[3]=0u+0x00000001u; // 80061F0C
  goto L_80061F18; // 80061F10
L_80061F14:;
  c->r[3]=0u+0x00000000u; // 80061F14
L_80061F18:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80061F18
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80061F1C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80061F20
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80061F24
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80061F28
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80061F2C
  c->r[30]=R32(c->r[1]+0x00000078u); // 80061F30
  c->lr=c->r[0]; // 80061F34
  c->r[1]=c->r[1]+0x000000A0u; // 80061F38
  return; // 80061F3C
}

// fn_80061F40
void f_80061F40(Ctx* __restrict c) {
  trace_call(0x80061F40u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80061F40
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061F44
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80061F48
  f_8005FD70(c); return; // 80061F4C
}

// fn_80061F50
void f_80061F50(Ctx* __restrict c) {
  trace_call(0x80061F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80061F50
  c->r[0]=c->lr; // 80061F54
  W32(c->r[1]+0x00000044u,c->r[0]); // 80061F58
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 80061F5C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80061F60
  c->r[30]=c->r[3]|c->r[3]; // 80061F64
  c->r[31]=c->r[4]|c->r[4]; // 80061F68
  c->r[3]=c->r[1]+0x00000014u; // 80061F6C
  c->r[4]=c->r[30]+0x000001B8u; // 80061F70
  c->lr=0x80061F78u; f_80060F28(c); // 80061F74
  c->r[3]=c->r[1]+0x00000014u; // 80061F78
  c->lr=0x80061F80u; f_8005CD98(c); // 80061F7C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80061F80
  c->f[31]=c->f[1]; // 80061F84
  c->r[4]=c->r[30]|c->r[30]; // 80061F88
  c->r[3]=c->r[1]+0x00000020u; // 80061F8C
  c->r[12]=R32(c->r[12]+0x00000134u); // 80061F90
  c->ctr=c->r[12]; // 80061F94
  if (true) { c->lr=0x80061F9Cu; dispatch(c,c->ctr); } // 80061F98
  c->r[4]=c->r[31]|c->r[31]; // 80061F9C
  c->r[3]=c->r[1]+0x00000008u; // 80061FA0
  c->r[5]=c->r[1]+0x00000020u; // 80061FA4
  c->lr=0x80061FACu; f_8005FC60(c); // 80061FA8
  c->r[3]=c->r[1]+0x00000008u; // 80061FAC
  c->lr=0x80061FB4u; f_8005CD98(c); // 80061FB0
  c->f[2]=c->f[1]; // 80061FB4
  c->f[1]=c->f[31]; // 80061FB8
  c->lr=0x80061FC0u; f_80060DE0(c); // 80061FBC
  c->lr=0x80061FC4u; f_80061FDC(c); // 80061FC0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 80061FC4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80061FC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80061FCC
  c->lr=c->r[0]; // 80061FD0
  c->r[1]=c->r[1]+0x00000040u; // 80061FD4
  return; // 80061FD8
}

// fn_80061FDC
void f_80061FDC(Ctx* __restrict c) {
  trace_call(0x80061FDCu);
  {uint32_t ea=c->r[2]+0xFFFF82B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80061FDC
  {uint32_t ea=c->r[2]+0xFFFF82B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061FE0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80061FE4
  fcmp(c,0,c->f[1],c->f[0]); // 80061FE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80061FEC
  if (!crb(c,2)) { goto L_8006200C; } // 80061FF0
  {uint32_t ea=c->r[2]+0xFFFF82B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80061FF4
  fcmp(c,0,c->f[1],c->f[0]); // 80061FF8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80061FFC
  if (!crb(c,2)) { goto L_8006200C; } // 80062000
  c->r[3]=0u+0x00000000u; // 80062004
  return; // 80062008
L_8006200C:;
  {uint32_t ea=c->r[2]+0xFFFF82BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006200C
  fcmp(c,0,c->f[1],c->f[0]); // 80062010
  if (crb(c,0)) { goto L_80062024; } // 80062014
  {uint32_t ea=c->r[2]+0xFFFF82C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80062018
  fcmp(c,0,c->f[1],c->f[0]); // 8006201C
  if (!crb(c,1)) { goto L_8006202C; } // 80062020
L_80062024:;
  c->r[3]=0u+0x00000002u; // 80062024
  return; // 80062028
L_8006202C:;
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006202C
  fcmp(c,0,c->f[1],c->f[0]); // 80062030
  if (!crb(c,1)) { goto L_80062040; } // 80062034
  c->r[3]=0u+0x00000003u; // 80062038
  return; // 8006203C
L_80062040:;
  c->r[3]=0u+0x00000001u; // 80062040
  return; // 80062044
}

// fn_80062048
void f_80062048(Ctx* __restrict c) {
  trace_call(0x80062048u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062048
  c->r[0]=c->lr; // 8006204C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80062050
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80062054
  c->r[30]=c->r[3]|c->r[3]; // 80062058
  c->r[31]=c->r[4]|c->r[4]; // 8006205C
  c->r[3]=c->r[1]+0x00000008u; // 80062060
  c->r[4]=c->r[30]|c->r[30]; // 80062064
  c->lr=0x8006206Cu; f_80061584(c); // 80062068
  c->r[3]=c->r[1]+0x00000014u; // 8006206C
  c->r[4]=c->r[1]+0x00000008u; // 80062070
  c->lr=0x80062078u; f_8005FC20(c); // 80062074
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80062078
  c->r[4]=c->r[30]|c->r[30]; // 8006207C
  c->r[3]=c->r[1]+0x00000020u; // 80062080
  c->r[12]=R32(c->r[12]+0x00000134u); // 80062084
  c->ctr=c->r[12]; // 80062088
  if (true) { c->lr=0x80062090u; dispatch(c,c->ctr); } // 8006208C
  c->r[5]=c->r[31]|c->r[31]; // 80062090
  c->r[3]=c->r[1]+0x00000020u; // 80062094
  c->r[4]=c->r[1]+0x00000014u; // 80062098
  c->lr=0x800620A0u; f_80061518(c); // 8006209C
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800620A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800620A4
  c->lr=c->r[0]; // 800620A8
  c->r[1]=c->r[1]+0x00000040u; // 800620AC
  return; // 800620B0
}

// fn_800620B4
void f_800620B4(Ctx* __restrict c) {
  trace_call(0x800620B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800620B4
  c->r[0]=c->lr; // 800620B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800620BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800620C0
  c->r[31]=c->r[3]|c->r[3]; // 800620C4
  c->lr=0x800620CCu; f_8033FE4C(c); // 800620C8
  c->r[4]=c->r[31]|c->r[31]; // 800620CC
  c->r[31]=c->r[3]|c->r[3]; // 800620D0
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 800620D4
  c->r[3]=c->r[1]+0x00000008u; // 800620D8
  c->r[12]=R32(c->r[12]+0x00000134u); // 800620DC
  c->ctr=c->r[12]; // 800620E0
  if (true) { c->lr=0x800620E8u; dispatch(c,c->ctr); } // 800620E4
  c->r[3]=c->r[1]+0x00000008u; // 800620E8
  c->r[4]=c->r[31]+0x0000012Cu; // 800620EC
  c->lr=0x800620F4u; f_8005BBC8(c); // 800620F0
  c->lr=0x800620F8u; f_80060B74(c); // 800620F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800620F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800620FC
  c->lr=c->r[0]; // 80062100
  c->r[1]=c->r[1]+0x00000020u; // 80062104
  return; // 80062108
}

// fn_8006210C
void f_8006210C(Ctx* __restrict c) {
  trace_call(0x8006210Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006210C
  c->r[0]=c->lr; // 80062110
  W32(c->r[1]+0x00000024u,c->r[0]); // 80062114
  c->r[3]=c->r[1]+0x00000010u; // 80062118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006211C
  c->r[31]=0u+0x00000000u; // 80062120
  W8(c->r[1]+0x00000010u,c->r[31]); // 80062124
  c->lr=0x8006212Cu; f_80046D50(c); // 80062128
  c->lr=0x80062130u; f_8008CD18(c); // 8006212C
  cmps(c,0,(int32_t)c->r[3],1); // 80062130
  if (!crb(c,2)) { goto L_8006214C; } // 80062134
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 80062138
  c->r[3]=c->r[1]+0x0000000Cu; // 8006213C
  c->lr=0x80062144u; f_80046D50(c); // 80062140
  c->lr=0x80062148u; f_8008CD00(c); // 80062144
  goto L_80062170; // 80062148
L_8006214C:;
  W8(c->r[1]+0x00000008u,c->r[31]); // 8006214C
  c->r[3]=c->r[1]+0x00000008u; // 80062150
  c->lr=0x80062158u; f_80046D50(c); // 80062154
  c->lr=0x8006215Cu; f_8008CD18(c); // 80062158
  c->r[31]=c->r[3]|c->r[3]; // 8006215C
  c->lr=0x80062164u; f_803B220C(c); // 80062160
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 80062164
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 80062168
  c->r[3]=c->r[3]-c->r[0]; // 8006216C
L_80062170:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80062170
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80062174
  c->lr=c->r[0]; // 80062178
  c->r[1]=c->r[1]+0x00000020u; // 8006217C
  return; // 80062180
}

// fn_80062184
void f_80062184(Ctx* __restrict c) {
  trace_call(0x80062184u);
  c->r[3]=R32(c->r[3]+0x00000444u); // 80062184
  {uint32_t ea=c->r[3]+0x000001D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80062188
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8006218C
  return; // 80062190
}

// fn_80062194
void f_80062194(Ctx* __restrict c) {
  trace_call(0x80062194u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062194
  c->r[0]=c->lr; // 80062198
  W32(c->r[1]+0x00000144u,c->r[0]); // 8006219C
  c->r[11]=c->r[1]+0x00000130u; // 800621A0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800621A4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800621A8
  c->lr=0x800621B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800621AC
  c->f[31]=c->f[1]; // 800621B0
  cmps(c,0,(int32_t)c->r[5],0); // 800621B4
  c->r[29]=c->r[3]|c->r[3]; // 800621B8
  c->r[30]=c->r[4]|c->r[4]; // 800621BC
  c->r[31]=c->r[5]|c->r[5]; // 800621C0
  if (!crb(c,0)) { goto L_800621E4; } // 800621C4
  c->lr=0x800621CCu; f_8006210C(c); // 800621C8
  c->f[1]=c->f[31]; // 800621CC
  c->r[5]=c->r[3]|c->r[3]; // 800621D0
  c->r[3]=c->r[29]|c->r[29]; // 800621D4
  c->r[4]=c->r[30]|c->r[30]; // 800621D8
  c->lr=0x800621E0u; f_80062194(c); // 800621DC
  goto L_800624AC; // 800621E0
L_800621E4:;
  cmps(c,0,(int32_t)c->r[5],1); // 800621E4
  if (!crb(c,1)) { goto L_80062228; } // 800621E8
  c->r[5]=0u+0x00000000u; // 800621EC
  c->lr=0x800621F4u; f_80062194(c); // 800621F0
  c->r[0]=0u+0x00000000u; // 800621F4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800621F8
  c->r[3]=c->r[1]+0x0000000Cu; // 800621FC
  c->lr=0x80062204u; f_80046D50(c); // 80062200
  c->lr=0x80062208u; f_8008CD18(c); // 80062204
  cmps(c,0,(int32_t)c->r[3],1); // 80062208
  if (!crb(c,1)) { goto L_800624AC; } // 8006220C
  c->f[1]=c->f[31]; // 80062210
  c->r[3]=c->r[29]|c->r[29]; // 80062214
  c->r[4]=c->r[30]|c->r[30]; // 80062218
  c->r[5]=0u+0x00000001u; // 8006221C
  c->lr=0x80062224u; f_80062194(c); // 80062220
  goto L_800624AC; // 80062224
L_80062228:;
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80062228
  c->r[0]=R32(c->r[4]+0x00000094u); // 8006222C
  cmps(c,0,(int32_t)c->r[0],1); // 80062230
  if (!crb(c,2)) { goto L_800623A4; } // 80062234
  c->lr=0x8006223Cu; f_800617CC(c); // 80062238
  c->r[31]=c->r[3]|c->r[3]; // 8006223C
  c->r[3]=c->r[1]+0x000000B0u; // 80062240
  c->lr=0x80062248u; f_800624CC(c); // 80062244
  c->r[3]=c->r[1]+0x00000070u; // 80062248
  c->lr=0x80062250u; f_8006257C(c); // 8006224C
  cmps(c,0,(int32_t)c->r[31],0); // 80062250
  c->r[3]=c->r[31]|c->r[31]; // 80062254
  if (crb(c,2)) { goto L_80062260; } // 80062258
  c->r[3]=c->r[31]+0x00000020u; // 8006225C
L_80062260:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80062260
  c->r[4]=c->r[31]|c->r[31]; // 80062264
  c->r[0]=R32(c->r[3]+0x00000004u); // 80062268
  c->r[3]=c->r[1]+0x00000048u; // 8006226C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80062270
  W32(c->r[1]+0x00000070u,c->r[5]); // 80062274
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80062278
  W32(c->r[1]+0x00000040u,c->r[5]); // 8006227C
  c->r[12]=R32(c->r[12]+0x00000134u); // 80062280
  W32(c->r[1]+0x00000044u,c->r[0]); // 80062284
  c->ctr=c->r[12]; // 80062288
  if (true) { c->lr=0x80062290u; dispatch(c,c->ctr); } // 8006228C
  c->r[3]=c->r[1]+0x00000078u; // 80062290
  c->r[4]=c->r[1]+0x00000048u; // 80062294
  c->lr=0x8006229Cu; f_8005DC84(c); // 80062298
  c->r[4]=0u+0x80760000u; // 8006229C
  c->r[3]=c->r[1]+0x00000084u; // 800622A0
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 800622A4
  c->lr=0x800622ACu; f_8005DC84(c); // 800622A8
  cmps(c,0,(int32_t)c->r[29],0); // 800622AC
  c->r[0]=0u+0x00000000u; // 800622B0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800622B4
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800622B8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800622BC
  W32(c->r[1]+0x000000A8u,c->r[0]); // 800622C0
  W8(c->r[1]+0x000000ACu,c->r[0]); // 800622C4
  if (crb(c,2)) { goto L_800622D0; } // 800622C8
  c->r[29]=c->r[29]+0x00000020u; // 800622CC
L_800622D0:;
  c->r[8]=R32(c->r[29]+0x00000000u); // 800622D0
  c->f[1]=c->f[31]; // 800622D4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800622D8
  c->f[2]=c->f[31]; // 800622DC
  W32(c->r[1]+0x00000030u,c->r[8]); // 800622E0
  c->r[3]=c->r[1]+0x000000BCu; // 800622E4
  c->r[4]=c->r[1]+0x00000070u; // 800622E8
  W32(c->r[1]+0x00000038u,c->r[8]); // 800622EC
  c->r[5]=c->r[1]+0x00000038u; // 800622F0
  c->r[6]=0u+0x00000000u; // 800622F4
  c->r[7]=0u+0x00000000u; // 800622F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800622FC
  c->r[8]=0u+0x00000000u; // 80062300
  c->r[9]=0u+0x00000000u; // 80062304
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80062308
  c->lr=0x80062310u; f_800E3684(c); // 8006230C
  cmps(c,0,(int32_t)c->r[31],0); // 80062310
  if (crb(c,2)) { goto L_8006231C; } // 80062314
  c->r[31]=c->r[31]+0x00000020u; // 80062318
L_8006231C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8006231C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80062320
  W32(c->r[1]+0x00000020u,c->r[3]); // 80062324
  W32(c->r[1]+0x00000024u,c->r[0]); // 80062328
  W32(c->r[1]+0x00000028u,c->r[3]); // 8006232C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80062330
  c->lr=0x80062338u; f_80065650(c); // 80062334
  c->r[3]=0u+0x0000008Cu; // 80062338
  c->lr=0x80062340u; f_800625D8(c); // 8006233C
  cmps(c,0,(int32_t)c->r[3],0); // 80062340
  c->r[31]=c->r[3]|c->r[3]; // 80062344
  if (crb(c,2)) { goto L_80062374; } // 80062348
  c->r[4]=0u+0x00000001u; // 8006234C
  c->lr=0x80062354u; f_8006264C(c); // 80062350
  c->r[3]=0u+0x806D0000u; // 80062354
  c->r[0]=0u+0x00000000u; // 80062358
  c->r[3]=c->r[3]+0xFFFFE0D8u; // 8006235C
  W32(c->r[31]+0x00000010u,c->r[3]); // 80062360
  c->r[3]=c->r[31]+0x0000001Cu; // 80062364
  W32(c->r[31]+0x00000014u,c->r[0]); // 80062368
  W32(c->r[31]+0x00000018u,c->r[0]); // 8006236C
  c->lr=0x80062374u; f_800624CC(c); // 80062370
L_80062374:;
  c->r[3]=c->r[31]+0x00000014u; // 80062374
  c->r[4]=c->r[1]+0x00000028u; // 80062378
  c->lr=0x80062380u; f_80053568(c); // 8006237C
  c->r[3]=c->r[31]+0x0000001Cu; // 80062380
  c->r[4]=c->r[1]+0x000000B0u; // 80062384
  c->lr=0x8006238Cu; f_8005E4EC(c); // 80062388
  c->r[3]=c->r[31]+0x00000028u; // 8006238C
  c->r[4]=c->r[1]+0x000000BCu; // 80062390
  c->lr=0x80062398u; f_8005DBB0(c); // 80062394
  c->r[0]=0u+0x00000000u; // 80062398
  W8(c->r[31]+0x00000088u,c->r[0]); // 8006239C
  goto L_800624AC; // 800623A0
L_800623A4:;
  c->r[3]=c->r[1]+0x00000054u; // 800623A4
  c->lr=0x800623ACu; f_8006258C(c); // 800623A8
  cmps(c,0,(int32_t)c->r[29],0); // 800623AC
  c->r[4]=c->r[29]|c->r[29]; // 800623B0
  if (crb(c,2)) { goto L_800623BC; } // 800623B4
  c->r[4]=c->r[29]+0x00000020u; // 800623B8
L_800623BC:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 800623BC
  c->r[3]=c->r[1]+0x00000060u; // 800623C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800623C4
  c->r[4]=c->r[1]+0x00000018u; // 800623C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800623CC
  W32(c->r[1]+0x00000018u,c->r[5]); // 800623D0
  c->lr=0x800623D8u; f_80053568(c); // 800623D4
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 800623D8
  c->f[1]=c->f[31]; // 800623DC
  c->r[3]=c->r[29]|c->r[29]; // 800623E0
  c->r[12]=R32(c->r[12]+0x00000160u); // 800623E4
  c->ctr=c->r[12]; // 800623E8
  if (true) { c->lr=0x800623F0u; dispatch(c,c->ctr); } // 800623EC
  c->r[0]=0u+0x00000000u; // 800623F0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 800623F4
  c->r[3]=c->r[1]+0x00000008u; // 800623F8
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 800623FC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80062400
  c->lr=0x80062408u; f_80046EFC(c); // 80062404
  cmpu(c,0,c->r[31],0x00000001u); // 80062408
  if (!crb(c,1)) { goto L_80062414; } // 8006240C
  c->r[31]=0u+0x00000000u; // 80062410
L_80062414:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80062414
  c->r[4]=c->r[3]+c->r[0]; // 80062418
  c->r[3]=R32(c->r[4]+0x000000ACu); // 8006241C
  c->r[0]=R32(c->r[4]+0x000000B0u); // 80062420
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062424
  W32(c->r[1]+0x00000010u,c->r[3]); // 80062428
  c->lr=0x80062430u; f_80065650(c); // 8006242C
  c->r[3]=0u+0x0000003Cu; // 80062430
  c->lr=0x80062438u; f_800625D8(c); // 80062434
  cmps(c,0,(int32_t)c->r[3],0); // 80062438
  c->r[31]=c->r[3]|c->r[3]; // 8006243C
  if (crb(c,2)) { goto L_8006246C; } // 80062440
  c->r[4]=0u+0x00000001u; // 80062444
  c->lr=0x8006244Cu; f_8006264C(c); // 80062448
  c->r[3]=0u+0x806D0000u; // 8006244C
  c->r[0]=0u+0x00000000u; // 80062450
  c->r[3]=c->r[3]+0xFFFFE0ECu; // 80062454
  W32(c->r[31]+0x00000010u,c->r[3]); // 80062458
  c->r[3]=c->r[31]+0x0000001Cu; // 8006245C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80062460
  W32(c->r[31]+0x00000018u,c->r[0]); // 80062464
  c->lr=0x8006246Cu; f_8006258C(c); // 80062468
L_8006246C:;
  c->r[3]=c->r[31]+0x00000014u; // 8006246C
  c->r[4]=c->r[1]+0x00000010u; // 80062470
  c->lr=0x80062478u; f_80053568(c); // 80062474
  c->r[3]=c->r[31]+0x0000001Cu; // 80062478
  c->r[4]=c->r[1]+0x00000054u; // 8006247C
  c->lr=0x80062484u; f_8005E4EC(c); // 80062480
  c->r[3]=R32(c->r[1]+0x00000064u); // 80062484
  c->r[0]=0u+0x00000000u; // 80062488
  c->r[4]=R32(c->r[1]+0x00000060u); // 8006248C
  W32(c->r[31]+0x00000028u,c->r[4]); // 80062490
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80062494
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80062498
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 8006249C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 800624A0
  W32(c->r[31]+0x00000034u,c->r[3]); // 800624A4
  W8(c->r[31]+0x00000038u,c->r[0]); // 800624A8
L_800624AC:;
  c->r[11]=c->r[1]+0x00000130u; // 800624AC
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 800624B0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800624B4
  c->lr=0x800624BCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800624B8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800624BC
  c->lr=c->r[0]; // 800624C0
  c->r[1]=c->r[1]+0x00000140u; // 800624C4
  return; // 800624C8
}

// fn_800624CC
void f_800624CC(Ctx* __restrict c) {
  trace_call(0x800624CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800624CC
  c->r[0]=c->lr; // 800624D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800624D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800624D8
  c->r[31]=c->r[3]|c->r[3]; // 800624DC
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800624E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800624E4
  if (!crb(c,2)) { goto L_80062508; } // 800624E8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800624EC
  c->r[0]=0u+0x00000001u; // 800624F0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800624F4
  c->r[4]=c->r[5]+0x00000001u; // 800624F8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800624FC
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80062500
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80062504
L_80062508:;
  c->r[5]=R32(c->r[13]+0xFFFFBCCCu); // 80062508
  c->r[4]=c->r[13]+0xFFFF80ECu; // 8006250C
  c->r[0]=0u+0x00000000u; // 80062510
  W32(c->r[3]+0x00000000u,c->r[5]); // 80062514
  W32(c->r[3]+0x00000004u,c->r[4]); // 80062518
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006251C
  c->r[3]=c->r[3]+0x0000000Cu; // 80062520
  c->lr=0x80062528u; f_80062540(c); // 80062524
  c->r[3]=c->r[31]|c->r[31]; // 80062528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006252C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062530
  c->lr=c->r[0]; // 80062534
  c->r[1]=c->r[1]+0x00000010u; // 80062538
  return; // 8006253C
}

// fn_80062540
void f_80062540(Ctx* __restrict c) {
  trace_call(0x80062540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062540
  c->r[0]=c->lr; // 80062544
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006254C
  c->r[31]=c->r[3]|c->r[3]; // 80062550
  c->lr=0x80062558u; f_8006257C(c); // 80062554
  c->r[0]=0u+0x00000000u; // 80062558
  W32(c->r[31]+0x00000040u,c->r[0]); // 8006255C
  c->r[3]=c->r[31]|c->r[31]; // 80062560
  W32(c->r[31]+0x00000044u,c->r[0]); // 80062564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80062568
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006256C
  c->lr=c->r[0]; // 80062570
  c->r[1]=c->r[1]+0x00000010u; // 80062574
  return; // 80062578
}

// fn_8006257C
void f_8006257C(Ctx* __restrict c) {
  trace_call(0x8006257Cu);
  c->r[0]=0u+0x00000000u; // 8006257C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80062580
  W32(c->r[3]+0x00000004u,c->r[0]); // 80062584
  return; // 80062588
}

// fn_8006258C
void f_8006258C(Ctx* __restrict c) {
  trace_call(0x8006258Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBCD8u); // 8006258C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062590
  if (!crb(c,2)) { goto L_800625B4; } // 80062594
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80062598
  c->r[0]=0u+0x00000001u; // 8006259C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800625A0
  c->r[4]=c->r[5]+0x00000001u; // 800625A4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800625A8
  W32(c->r[13]+0xFFFFBCD4u,c->r[5]); // 800625AC
  W8(c->r[13]+0xFFFFBCD8u,c->r[0]); // 800625B0
L_800625B4:;
  c->r[5]=R32(c->r[13]+0xFFFFBCD4u); // 800625B4
  c->r[0]=0u+0x00000000u; // 800625B8
  c->r[4]=c->r[13]+0xFFFF80E8u; // 800625BC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800625C0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800625C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800625C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800625CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800625D0
  return; // 800625D4
}

// fn_800625D8
void f_800625D8(Ctx* __restrict c) {
  trace_call(0x800625D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800625D8
  c->r[0]=c->lr; // 800625DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800625E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800625E4
  c->r[30]=c->r[3]|c->r[3]; // 800625E8
  c->r[0]=R8(c->r[13]+0xFFFFBC31u); // 800625EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800625F0
  if (!crb(c,2)) { goto L_80062624; } // 800625F4
  c->r[31]=0u+0x80740000u; // 800625F8
  c->r[3]=c->r[31]+0x00004D70u; // 800625FC
  c->lr=0x80062604u; f_80052DF0(c); // 80062600
  c->r[4]=0u+0x80040000u; // 80062604
  c->r[5]=0u+0x80740000u; // 80062608
  c->r[3]=c->r[31]+0x00004D70u; // 8006260C
  c->r[4]=c->r[4]+0x000055F4u; // 80062610
  c->r[5]=c->r[5]+0x00007454u; // 80062614
  c->lr=0x8006261Cu; f_803A92B8(c); // 80062618
  c->r[0]=0u+0x00000001u; // 8006261C
  W8(c->r[13]+0xFFFFBC31u,c->r[0]); // 80062620
L_80062624:;
  c->r[3]=0u+0x80740000u; // 80062624
  c->r[4]=c->r[30]|c->r[30]; // 80062628
  c->r[3]=c->r[3]+0x00004D70u; // 8006262C
  c->lr=0x80062634u; f_8005BFB0(c); // 80062630
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80062634
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062638
  c->lr=c->r[0]; // 8006263C
  c->r[1]=c->r[1]+0x00000010u; // 80062640
  return; // 80062644
}

// dtor_80062648
void f_80062648(Ctx* __restrict c) {
  f_8005328C(c); return; // 80062648
}

// fn_8006264C
void f_8006264C(Ctx* __restrict c) {
  trace_call(0x8006264Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006264C
  c->r[0]=c->lr; // 80062650
  W32(c->r[1]+0x00000024u,c->r[0]); // 80062654
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80062658
  c->r[29]=c->r[3]|c->r[3]; // 8006265C
  c->r[30]=c->r[4]|c->r[4]; // 80062660
  c->lr=0x80062668u; f_800506C0(c); // 80062664
  cmps(c,0,(int32_t)c->r[30],0); // 80062668
  c->r[0]=0u+0x00000000u; // 8006266C
  W32(c->r[29]+0x00000008u,c->r[29]); // 80062670
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 80062674
  if (crb(c,2)) { goto L_800626E8; } // 80062678
  cmps(c,0,(int32_t)c->r[0],0); // 8006267C
  if (!crb(c,2)) { goto L_800626E8; } // 80062680
  c->r[30]=0u+0x00000001u; // 80062684
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 80062688
  c->r[0]=R8(c->r[13]+0xFFFFBE08u); // 8006268C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062690
  if (!crb(c,2)) { goto L_800626D4; } // 80062694
  c->r[31]=0u+0x80740000u; // 80062698
  c->r[3]=c->r[31]+0x000074A8u; // 8006269C
  c->lr=0x800626A4u; f_800506C0(c); // 800626A0
  c->r[6]=0u+0x806D0000u; // 800626A4
  c->r[4]=0u+0x80060000u; // 800626A8
  c->r[6]=c->r[6]+0xFFFFE378u; // 800626AC
  c->r[3]=c->r[31]+0x000074A8u; // 800626B0
  c->r[0]=c->r[6]+0x00000008u; // 800626B4
  c->r[5]=0u+0x80740000u; // 800626B8
  W32(c->r[3]+0x00000010u,c->r[6]); // 800626BC
  c->r[4]=c->r[4]+0x00005730u; // 800626C0
  c->r[5]=c->r[5]+0x00007478u; // 800626C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800626C8
  c->lr=0x800626D0u; f_803A92B8(c); // 800626CC
  W8(c->r[13]+0xFFFFBE08u,c->r[30]); // 800626D0
L_800626D4:;
  c->r[3]=0u+0x80740000u; // 800626D4
  c->r[5]=c->r[29]|c->r[29]; // 800626D8
  c->r[3]=c->r[3]+0x000074A8u; // 800626DC
  c->r[4]=c->r[3]|c->r[3]; // 800626E0
  c->lr=0x800626E8u; f_802DDCA8(c); // 800626E4
L_800626E8:;
  c->r[4]=0u+0x806D0000u; // 800626E8
  c->r[3]=c->r[29]|c->r[29]; // 800626EC
  c->r[4]=c->r[4]+0xFFFFE360u; // 800626F0
  W32(c->r[29]+0x00000010u,c->r[4]); // 800626F4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800626F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800626FC
  c->lr=c->r[0]; // 80062700
  c->r[1]=c->r[1]+0x00000020u; // 80062704
  return; // 80062708
}

// dtor_8006270C
void f_8006270C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006270C
  c->r[0]=c->lr; // 80062710
  cmps(c,0,(int32_t)c->r[3],0); // 80062714
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006271C
  c->r[31]=c->r[3]|c->r[3]; // 80062720
  if (crb(c,2)) { goto L_80062730; } // 80062724
  c->r[4]=0u+0x00000000u; // 80062728
  c->lr=0x80062730u; f_800455D8(c); // 8006272C
L_80062730:;
  c->r[3]=c->r[31]|c->r[31]; // 80062730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80062734
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062738
  c->lr=c->r[0]; // 8006273C
  c->r[1]=c->r[1]+0x00000010u; // 80062740
  return; // 80062744
}

// fn_80062748
void f_80062748(Ctx* __restrict c) {
  trace_call(0x80062748u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062748
  c->r[0]=c->lr; // 8006274C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80062750
  c->r[11]=c->r[1]+0x00000080u; // 80062754
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80062758
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8006275C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 80062760
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 80062764
  c->lr=0x8006276Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80062768
  c->r[6]=R32(c->r[3]+0x0000044Cu); // 8006276C
  c->r[26]=c->r[3]|c->r[3]; // 80062770
  c->r[27]=c->r[4]|c->r[4]; // 80062774
  c->r[28]=c->r[5]|c->r[5]; // 80062778
  c->r[3]=c->r[6]+0x000000C4u; // 8006277C
  c->r[4]=0u+0x0000003Cu; // 80062780
  c->lr=0x80062788u; f_8005CDE8(c); // 80062784
  cmps(c,0,(int32_t)c->r[3],0); // 80062788
  if (!crb(c,2)) { goto L_800628E8; } // 8006278C
  c->r[0]=R32(c->r[26]+0x00000430u); // 80062790
  cmps(c,0,(int32_t)c->r[0],0); // 80062794
  if (crb(c,2)) { goto L_800628E8; } // 80062798
  c->r[30]=R32(c->r[26]+0x00000430u); // 8006279C
  c->r[4]=c->r[27]|c->r[27]; // 800627A0
  c->r[29]=0u+0x00000000u; // 800627A4
  c->r[3]=c->r[30]|c->r[30]; // 800627A8
  c->lr=0x800627B0u; f_800FE990(c); // 800627AC
  cmps(c,0,(int32_t)c->r[28],0); // 800627B0
  if (crb(c,2)) { goto L_800628A0; } // 800627B4
  c->r[3]=c->r[30]|c->r[30]; // 800627B8
  c->lr=0x800627C0u; f_800FEBC4(c); // 800627BC
  cmps(c,0,(int32_t)c->r[3],0); // 800627C0
  if (crb(c,2)) { goto L_800628A0; } // 800627C4
  {uint32_t ea=c->r[2]+0xFFFF823Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800627C8
  c->r[31]=c->r[1]+0x0000001Cu; // 800627CC
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[31]=c->ps1[31]=RF32(ea);} // 800627D0
  c->r[28]=0u+0x00000000u; // 800627D4
  goto L_8006288C; // 800627D8
L_800627DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800627DC
  c->r[4]=c->r[28]|c->r[28]; // 800627E0
  c->lr=0x800627E8u; f_800FEBCC(c); // 800627E4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800627E8
  c->r[4]=c->r[3]|c->r[3]; // 800627EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800627F0
  c->r[3]=c->r[26]|c->r[26]; // 800627F4
  c->lr=0x800627FCu; f_8005C990(c); // 800627F8
  cmps(c,0,(int32_t)c->r[3],0); // 800627FC
  if (crb(c,0)) { goto L_80062888; } // 80062800
  c->r[4]=c->r[3]|c->r[3]; // 80062804
  c->r[3]=c->r[26]+0x000000FCu; // 80062808
  c->lr=0x80062810u; f_802E6E80(c); // 8006280C
  c->r[4]=c->r[3]|c->r[3]; // 80062810
  c->r[3]=c->r[1]+0x00000028u; // 80062814
  c->lr=0x8006281Cu; f_80060878(c); // 80062818
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 8006281C
  c->r[3]=c->r[26]|c->r[26]; // 80062820
  c->r[4]=c->r[1]+0x00000038u; // 80062824
  c->r[12]=R32(c->r[12]+0x00000148u); // 80062828
  c->ctr=c->r[12]; // 8006282C
  if (true) { c->lr=0x80062834u; dispatch(c,c->ctr); } // 80062830
  c->r[4]=c->r[3]|c->r[3]; // 80062834
  c->r[3]=c->r[1]+0x00000010u; // 80062838
  c->lr=0x80062840u; f_80060878(c); // 8006283C
  c->r[3]=c->r[1]+0x0000001Cu; // 80062840
  c->r[4]=c->r[1]+0x00000010u; // 80062844
  c->r[5]=c->r[1]+0x00000028u; // 80062848
  c->lr=0x80062850u; f_8005FC60(c); // 8006284C
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,1,ea,0,0);} // 80062850
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80062854
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80062858
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8006285C
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80062860
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80062864
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 80062868
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8006286C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80062870
  fcmp(c,0,c->f[0],c->f[31]); // 80062874
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80062878
  if (!crb(c,2)) { goto L_80062888; } // 8006287C
  c->r[29]=0u+0x00000001u; // 80062880
  goto L_800628A4; // 80062884
L_80062888:;
  c->r[28]=c->r[28]+0x00000001u; // 80062888
L_8006288C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006288C
  c->lr=0x80062894u; f_800FEC30(c); // 80062890
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 80062894
  if (crb(c,0)) { IRQCHK(c); goto L_800627DC; } // 80062898
  goto L_800628A4; // 8006289C
L_800628A0:;
  c->r[29]=0u+0x00000001u; // 800628A0
L_800628A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800628A4
  if (crb(c,2)) { goto L_800628DC; } // 800628A8
  c->r[3]=c->r[30]|c->r[30]; // 800628AC
  c->lr=0x800628B4u; f_800FEB34(c); // 800628B0
  c->r[31]=c->r[3]|c->r[3]; // 800628B4
  c->r[3]=c->r[30]|c->r[30]; // 800628B8
  c->lr=0x800628C0u; f_800FEB28(c); // 800628BC
  c->r[3]=c->r[26]|c->r[26]; // 800628C0
  c->r[4]=c->r[31]|c->r[31]; // 800628C4
  c->r[5]=0u+0xFFFFFFFFu; // 800628C8
  c->lr=0x800628D0u; f_80062194(c); // 800628CC
  c->r[3]=c->r[26]|c->r[26]; // 800628D0
  c->r[4]=c->r[27]|c->r[27]; // 800628D4
  c->lr=0x800628DCu; f_80062910(c); // 800628D8
L_800628DC:;
  c->r[0]=R8(c->r[26]+0x000005BCu); // 800628DC
  c->r[0]=c->r[0]|0x00000008u; // 800628E0
  W8(c->r[26]+0x000005BCu,c->r[0]); // 800628E4
L_800628E8:;
  c->r[11]=c->r[1]+0x00000080u; // 800628E8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800628EC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800628F0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800628F4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800628F8
  c->lr=0x80062900u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800628FC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80062900
  c->lr=c->r[0]; // 80062904
  c->r[1]=c->r[1]+0x000000A0u; // 80062908
  return; // 8006290C
}

// fn_80062910
void f_80062910(Ctx* __restrict c) {
  trace_call(0x80062910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062910
  c->r[0]=c->lr; // 80062914
  W32(c->r[1]+0x00000024u,c->r[0]); // 80062918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006291C
  c->r[0]=R32(c->r[3]+0x00000430u); // 80062920
  cmps(c,0,(int32_t)c->r[0],0); // 80062924
  if (crb(c,2)) { goto L_8006298C; } // 80062928
  c->r[3]=R32(c->r[3]+0x00000430u); // 8006292C
  c->lr=0x80062934u; f_800FEB40(c); // 80062930
  cmps(c,0,(int32_t)c->r[3],0); // 80062934
  c->r[31]=c->r[3]|c->r[3]; // 80062938
  c->r[4]=0u+0x00000000u; // 8006293C
  if (crb(c,2)) { goto L_80062950; } // 80062940
  c->r[0]=R8(c->r[3]+0x00000000u); // 80062944
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062948
  if (!crb(c,2)) { goto L_80062954; } // 8006294C
L_80062950:;
  c->r[4]=0u+0x00000001u; // 80062950
L_80062954:;
  cmps(c,0,(int32_t)c->r[4],0); // 80062954
  if (!crb(c,2)) { goto L_8006298C; } // 80062958
  c->r[0]=0u+0x00000000u; // 8006295C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80062960
  c->r[3]=c->r[1]+0x00000008u; // 80062964
  c->lr=0x8006296Cu; f_800474F4(c); // 80062968
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006296C
  c->r[4]=c->r[31]|c->r[31]; // 80062970
  c->r[5]=0u+0x00000000u; // 80062974
  c->r[6]=0u+0xFFFFFFFFu; // 80062978
  c->r[7]=0u+0x00000000u; // 8006297C
  c->r[8]=0u+0x00000000u; // 80062980
  c->r[9]=0u+0x00000001u; // 80062984
  c->lr=0x8006298Cu; f_8004BFE0(c); // 80062988
L_8006298C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006298C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80062990
  c->lr=c->r[0]; // 80062994
  c->r[1]=c->r[1]+0x00000020u; // 80062998
  return; // 8006299C
}

// fn_800629A0
void f_800629A0(Ctx* __restrict c) {
  trace_call(0x800629A0u);
  return; // 800629A0
}

// fn_800629A4
void f_800629A4(Ctx* __restrict c) {
  trace_call(0x800629A4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800629A4
  c->r[0]=c->lr; // 800629A8
  W32(c->r[1]+0x00000124u,c->r[0]); // 800629AC
  c->r[11]=c->r[1]+0x00000120u; // 800629B0
  c->lr=0x800629B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800629B4
  c->r[29]=c->r[3]|c->r[3]; // 800629B8
  c->r[30]=c->r[4]|c->r[4]; // 800629BC
  c->r[31]=c->r[5]|c->r[5]; // 800629C0
  c->r[3]=c->r[1]+0x000000A8u; // 800629C4
  c->lr=0x800629CCu; f_80062540(c); // 800629C8
  c->r[3]=c->r[1]+0x00000048u; // 800629CC
  c->lr=0x800629D4u; f_80062540(c); // 800629D0
  cmps(c,0,(int32_t)c->r[29],0); // 800629D4
  c->r[0]=0u+0x00000000u; // 800629D8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800629DC
  c->r[3]=c->r[29]|c->r[29]; // 800629E0
  c->r[6]=c->r[1]+0x00000030u; // 800629E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800629E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 800629EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800629F0
  if (crb(c,2)) { goto L_800629FC; } // 800629F4
  c->r[3]=c->r[29]+0x00000020u; // 800629F8
L_800629FC:;
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 800629FC
  c->r[5]=c->r[30]|c->r[30]; // 80062A00
  c->r[10]=R32(c->r[3]+0x00000000u); // 80062A04
  c->r[4]=c->r[1]+0x00000040u; // 80062A08
  c->r[0]=R32(c->r[3]+0x00000004u); // 80062A0C
  c->f[2]=c->f[1]; // 80062A10
  W32(c->r[1]+0x00000038u,c->r[10]); // 80062A14
  c->r[3]=c->r[1]+0x000000A8u; // 80062A18
  c->r[7]=0u+0xFFFFFFFFu; // 80062A1C
  c->r[8]=0u+0x00000000u; // 80062A20
  W32(c->r[1]+0x00000040u,c->r[10]); // 80062A24
  c->r[9]=0u+0x00000000u; // 80062A28
  c->r[10]=0u+0x00000000u; // 80062A2C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80062A30
  W32(c->r[1]+0x00000044u,c->r[0]); // 80062A34
  c->lr=0x80062A3Cu; f_800E375C(c); // 80062A38
  cmps(c,0,(int32_t)c->r[29],0); // 80062A3C
  c->r[0]=0u+0x00000000u; // 80062A40
  W32(c->r[1]+0x00000008u,c->r[0]); // 80062A44
  c->r[3]=c->r[29]|c->r[29]; // 80062A48
  c->r[6]=c->r[1]+0x00000010u; // 80062A4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80062A50
  W32(c->r[1]+0x00000010u,c->r[0]); // 80062A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062A58
  if (crb(c,2)) { goto L_80062A64; } // 80062A5C
  c->r[3]=c->r[29]+0x00000020u; // 80062A60
L_80062A64:;
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80062A64
  c->r[5]=c->r[31]|c->r[31]; // 80062A68
  c->r[10]=R32(c->r[3]+0x00000000u); // 80062A6C
  c->r[4]=c->r[1]+0x00000020u; // 80062A70
  c->r[0]=R32(c->r[3]+0x00000004u); // 80062A74
  c->f[2]=c->f[1]; // 80062A78
  W32(c->r[1]+0x00000018u,c->r[10]); // 80062A7C
  c->r[3]=c->r[1]+0x00000048u; // 80062A80
  c->r[7]=0u+0xFFFFFFFFu; // 80062A84
  c->r[8]=0u+0x00000000u; // 80062A88
  W32(c->r[1]+0x00000020u,c->r[10]); // 80062A8C
  c->r[9]=0u+0x00000000u; // 80062A90
  c->r[10]=0u+0x00000000u; // 80062A94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80062A98
  W32(c->r[1]+0x00000024u,c->r[0]); // 80062A9C
  c->lr=0x80062AA4u; f_800E375C(c); // 80062AA0
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80062AA4
  c->r[3]=c->r[29]|c->r[29]; // 80062AA8
  c->r[4]=c->r[1]+0x000000A8u; // 80062AAC
  c->r[5]=0u+0x00000001u; // 80062AB0
  c->r[12]=R32(c->r[12]+0x0000016Cu); // 80062AB4
  c->ctr=c->r[12]; // 80062AB8
  if (true) { c->lr=0x80062AC0u; dispatch(c,c->ctr); } // 80062ABC
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80062AC0
  c->r[31]=c->r[3]|c->r[3]; // 80062AC4
  c->r[3]=c->r[29]|c->r[29]; // 80062AC8
  c->r[4]=c->r[1]+0x00000048u; // 80062ACC
  c->r[12]=R32(c->r[12]+0x0000016Cu); // 80062AD0
  c->r[5]=0u+0x00000001u; // 80062AD4
  c->ctr=c->r[12]; // 80062AD8
  if (true) { c->lr=0x80062AE0u; dispatch(c,c->ctr); } // 80062ADC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 80062AE0
  if (!crb(c,0)) { goto L_80062AF0; } // 80062AE4
  c->r[3]=0u+0x00000001u; // 80062AE8
  goto L_80062AF4; // 80062AEC
L_80062AF0:;
  c->r[3]=0u+0x00000000u; // 80062AF0
L_80062AF4:;
  c->r[11]=c->r[1]+0x00000120u; // 80062AF4
  c->lr=0x80062AFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80062AF8
  c->r[0]=R32(c->r[1]+0x00000124u); // 80062AFC
  c->lr=c->r[0]; // 80062B00
  c->r[1]=c->r[1]+0x00000120u; // 80062B04
  return; // 80062B08
}

// fn_80062B0C
void f_80062B0C(Ctx* __restrict c) {
  trace_call(0x80062B0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062B0C
  c->r[0]=c->lr; // 80062B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062B14
  c->r[0]=R32(c->r[4]+0x00000038u); // 80062B18
  cmps(c,0,(int32_t)c->r[0],2); // 80062B1C
  if (!crb(c,2)) { goto L_80062B2C; } // 80062B20
  c->r[3]=0u+0x00000005u; // 80062B24
  goto L_80062B64; // 80062B28
L_80062B2C:;
  cmps(c,0,(int32_t)c->r[0],1); // 80062B2C
  if (!crb(c,2)) { goto L_80062B3C; } // 80062B30
  c->r[3]=0u+0x00000000u; // 80062B34
  goto L_80062B64; // 80062B38
L_80062B3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80062B3C
  if (crb(c,2)) { goto L_80062B60; } // 80062B40
  c->r[4]=R32(c->r[4]+0x00000030u); // 80062B44
  c->r[3]=c->r[3]+0x00000538u; // 80062B48
  c->lr=0x80062B50u; f_800A8388(c); // 80062B4C
  cmps(c,0,(int32_t)c->r[3],0); // 80062B50
  if (crb(c,2)) { goto L_80062B60; } // 80062B54
  c->r[3]=0u+0x00000001u; // 80062B58
  goto L_80062B64; // 80062B5C
L_80062B60:;
  c->r[3]=0u+0x00000003u; // 80062B60
L_80062B64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062B64
  c->lr=c->r[0]; // 80062B68
  c->r[1]=c->r[1]+0x00000010u; // 80062B6C
  return; // 80062B70
}

// fn_80062B74
void f_80062B74(Ctx* __restrict c) {
  trace_call(0x80062B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062B74
  c->r[0]=c->lr; // 80062B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062B7C
  c->lr=0x80062B84u; f_8005DD2C(c); // 80062B80
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80062B84
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80062B88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062B8C
  c->lr=c->r[0]; // 80062B90
  c->r[1]=c->r[1]+0x00000010u; // 80062B94
  return; // 80062B98
}

// fn_80062B9C
void f_80062B9C(Ctx* __restrict c) {
  trace_call(0x80062B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062B9C
  c->r[0]=c->lr; // 80062BA0
  c->r[4]=0u+0x00000034u; // 80062BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80062BAC
  c->r[31]=c->r[3]|c->r[3]; // 80062BB0
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80062BB4
  c->r[3]=c->r[5]+0x000000C4u; // 80062BB8
  c->lr=0x80062BC0u; f_8005CDE8(c); // 80062BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80062BC0
  if (crb(c,2)) { goto L_80062BD0; } // 80062BC4
  c->r[3]=0u+0x00000000u; // 80062BC8
  goto L_80062C04; // 80062BCC
L_80062BD0:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80062BD0
  c->r[4]=0u+0x00000035u; // 80062BD4
  c->r[3]=c->r[3]+0x000000C4u; // 80062BD8
  c->lr=0x80062BE0u; f_8005CDE8(c); // 80062BDC
  cmps(c,0,(int32_t)c->r[3],0); // 80062BE0
  if (crb(c,2)) { goto L_80062BF0; } // 80062BE4
  c->r[3]=0u+0x00000000u; // 80062BE8
  goto L_80062C04; // 80062BEC
L_80062BF0:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80062BF0
  c->r[3]=c->r[31]|c->r[31]; // 80062BF4
  c->r[12]=R32(c->r[12]+0x00000100u); // 80062BF8
  c->ctr=c->r[12]; // 80062BFC
  if (true) { c->lr=0x80062C04u; dispatch(c,c->ctr); } // 80062C00
L_80062C04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80062C08
  c->lr=c->r[0]; // 80062C0C
  c->r[1]=c->r[1]+0x00000010u; // 80062C10
  return; // 80062C14
}

// fn_80062C18
void f_80062C18(Ctx* __restrict c) {
  trace_call(0x80062C18u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 80062C18
  c->r[3]=R32(c->r[3]+0x00000088u); // 80062C1C
  c->r[3]=c->r[3]+0xFFFFFFFAu; // 80062C20
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80062C24
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80062C28
  return; // 80062C2C
}

// fn_80062C30
void f_80062C30(Ctx* __restrict c) {
  trace_call(0x80062C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062C30
  c->r[0]=c->lr; // 80062C34
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80062C38
  c->r[4]=0u+0x0000001Au; // 80062C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062C40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80062C44
  c->r[30]=c->r[3]|c->r[3]; // 80062C48
  c->r[31]=0u+0x00000000u; // 80062C4C
  c->r[3]=c->r[5]+0x000000C4u; // 80062C50
  c->lr=0x80062C58u; f_8005CDE8(c); // 80062C54
  cmps(c,0,(int32_t)c->r[3],0); // 80062C58
  if (crb(c,2)) { goto L_80062C7C; } // 80062C5C
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80062C60
  c->r[4]=0u+0x00000018u; // 80062C64
  c->r[3]=c->r[3]+0x000000C4u; // 80062C68
  c->lr=0x80062C70u; f_8005CDE8(c); // 80062C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80062C70
  if (!crb(c,2)) { goto L_80062C7C; } // 80062C74
  c->r[31]=0u+0x00000001u; // 80062C78
L_80062C7C:;
  c->r[3]=c->r[31]|c->r[31]; // 80062C7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80062C80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062C84
  c->lr=c->r[0]; // 80062C88
  c->r[1]=c->r[1]+0x00000010u; // 80062C8C
  return; // 80062C90
}

// fn_80062C94
void f_80062C94(Ctx* __restrict c) {
  trace_call(0x80062C94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062C94
  c->r[0]=c->lr; // 80062C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062C9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80062CA0
  c->r[30]=c->r[3]|c->r[3]; // 80062CA4
  c->r[31]=0u+0x00000000u; // 80062CA8
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80062CAC
  c->r[12]=R32(c->r[12]+0x00000154u); // 80062CB0
  c->ctr=c->r[12]; // 80062CB4
  if (true) { c->lr=0x80062CBCu; dispatch(c,c->ctr); } // 80062CB8
  cmps(c,0,(int32_t)c->r[3],0); // 80062CBC
  if (crb(c,2)) { goto L_80062CF4; } // 80062CC0
  c->r[3]=c->r[30]|c->r[30]; // 80062CC4
  c->lr=0x80062CCCu; f_80062C30(c); // 80062CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80062CCC
  if (crb(c,2)) { goto L_80062CF4; } // 80062CD0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80062CD4
  c->r[3]=c->r[30]|c->r[30]; // 80062CD8
  c->r[12]=R32(c->r[12]+0x00000118u); // 80062CDC
  c->ctr=c->r[12]; // 80062CE0
  if (true) { c->lr=0x80062CE8u; dispatch(c,c->ctr); } // 80062CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80062CE8
  if (crb(c,2)) { goto L_80062CF4; } // 80062CEC
  c->r[31]=0u+0x00000001u; // 80062CF0
L_80062CF4:;
  c->r[3]=c->r[31]|c->r[31]; // 80062CF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80062CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80062CFC
  c->lr=c->r[0]; // 80062D00
  c->r[1]=c->r[1]+0x00000010u; // 80062D04
  return; // 80062D08
}

// fn_80062D0C
void f_80062D0C(Ctx* __restrict c) {
  trace_call(0x80062D0Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD50u); // 80062D0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062D10
  if (!crb(c,2)) { goto L_80062D34; } // 80062D14
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062D18
  c->r[0]=0u+0x00000001u; // 80062D1C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062D20
  c->r[3]=c->r[4]+0x00000001u; // 80062D24
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062D28
  W32(c->r[13]+0xFFFFBD4Cu,c->r[4]); // 80062D2C
  W8(c->r[13]+0xFFFFBD50u,c->r[0]); // 80062D30
L_80062D34:;
  c->r[3]=R32(c->r[13]+0xFFFFBD4Cu); // 80062D34
  return; // 80062D38
}

// fn_80062D3C
void f_80062D3C(Ctx* __restrict c) {
  trace_call(0x80062D3Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD30u); // 80062D3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062D40
  if (!crb(c,2)) { goto L_80062D64; } // 80062D44
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062D48
  c->r[0]=0u+0x00000001u; // 80062D4C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062D50
  c->r[3]=c->r[4]+0x00000001u; // 80062D54
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062D58
  W32(c->r[13]+0xFFFFBD2Cu,c->r[4]); // 80062D5C
  W8(c->r[13]+0xFFFFBD30u,c->r[0]); // 80062D60
L_80062D64:;
  c->r[3]=R32(c->r[13]+0xFFFFBD2Cu); // 80062D64
  return; // 80062D68
}

// fn_80062D6C
void f_80062D6C(Ctx* __restrict c) {
  trace_call(0x80062D6Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD28u); // 80062D6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062D70
  if (!crb(c,2)) { goto L_80062D94; } // 80062D74
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062D78
  c->r[0]=0u+0x00000001u; // 80062D7C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062D80
  c->r[3]=c->r[4]+0x00000001u; // 80062D84
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062D88
  W32(c->r[13]+0xFFFFBD24u,c->r[4]); // 80062D8C
  W8(c->r[13]+0xFFFFBD28u,c->r[0]); // 80062D90
L_80062D94:;
  c->r[3]=R32(c->r[13]+0xFFFFBD24u); // 80062D94
  return; // 80062D98
}

// fn_80062D9C
void f_80062D9C(Ctx* __restrict c) {
  trace_call(0x80062D9Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD20u); // 80062D9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062DA0
  if (!crb(c,2)) { goto L_80062DC4; } // 80062DA4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062DA8
  c->r[0]=0u+0x00000001u; // 80062DAC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062DB0
  c->r[3]=c->r[4]+0x00000001u; // 80062DB4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062DB8
  W32(c->r[13]+0xFFFFBD1Cu,c->r[4]); // 80062DBC
  W8(c->r[13]+0xFFFFBD20u,c->r[0]); // 80062DC0
L_80062DC4:;
  c->r[3]=R32(c->r[13]+0xFFFFBD1Cu); // 80062DC4
  return; // 80062DC8
}

// fn_80062DCC
void f_80062DCC(Ctx* __restrict c) {
  trace_call(0x80062DCCu);
  c->r[0]=R8(c->r[13]+0xFFFFBD18u); // 80062DCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062DD0
  if (!crb(c,2)) { goto L_80062DF4; } // 80062DD4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062DD8
  c->r[0]=0u+0x00000001u; // 80062DDC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062DE0
  c->r[3]=c->r[4]+0x00000001u; // 80062DE4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062DE8
  W32(c->r[13]+0xFFFFBD14u,c->r[4]); // 80062DEC
  W8(c->r[13]+0xFFFFBD18u,c->r[0]); // 80062DF0
L_80062DF4:;
  c->r[3]=R32(c->r[13]+0xFFFFBD14u); // 80062DF4
  return; // 80062DF8
}

// fn_80062DFC
void f_80062DFC(Ctx* __restrict c) {
  trace_call(0x80062DFCu);
  c->r[0]=R8(c->r[13]+0xFFFFBD48u); // 80062DFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062E00
  if (!crb(c,2)) { goto L_80062E24; } // 80062E04
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062E08
  c->r[0]=0u+0x00000001u; // 80062E0C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062E10
  c->r[3]=c->r[4]+0x00000001u; // 80062E14
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062E18
  W32(c->r[13]+0xFFFFBD44u,c->r[4]); // 80062E1C
  W8(c->r[13]+0xFFFFBD48u,c->r[0]); // 80062E20
L_80062E24:;
  c->r[3]=R32(c->r[13]+0xFFFFBD44u); // 80062E24
  return; // 80062E28
}

// fn_80062E2C
void f_80062E2C(Ctx* __restrict c) {
  trace_call(0x80062E2Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD40u); // 80062E2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062E30
  if (!crb(c,2)) { goto L_80062E54; } // 80062E34
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062E38
  c->r[0]=0u+0x00000001u; // 80062E3C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062E40
  c->r[3]=c->r[4]+0x00000001u; // 80062E44
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062E48
  W32(c->r[13]+0xFFFFBD3Cu,c->r[4]); // 80062E4C
  W8(c->r[13]+0xFFFFBD40u,c->r[0]); // 80062E50
L_80062E54:;
  c->r[3]=R32(c->r[13]+0xFFFFBD3Cu); // 80062E54
  return; // 80062E58
}

// fn_80062E5C
void f_80062E5C(Ctx* __restrict c) {
  trace_call(0x80062E5Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD10u); // 80062E5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062E60
  if (!crb(c,2)) { goto L_80062E84; } // 80062E64
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062E68
  c->r[0]=0u+0x00000001u; // 80062E6C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062E70
  c->r[3]=c->r[4]+0x00000001u; // 80062E74
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062E78
  W32(c->r[13]+0xFFFFBD0Cu,c->r[4]); // 80062E7C
  W8(c->r[13]+0xFFFFBD10u,c->r[0]); // 80062E80
L_80062E84:;
  c->r[3]=R32(c->r[13]+0xFFFFBD0Cu); // 80062E84
  return; // 80062E88
}

// fn_80062E8C
void f_80062E8C(Ctx* __restrict c) {
  trace_call(0x80062E8Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBD00u); // 80062E8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062E90
  if (!crb(c,2)) { goto L_80062EB4; } // 80062E94
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062E98
  c->r[0]=0u+0x00000001u; // 80062E9C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062EA0
  c->r[3]=c->r[4]+0x00000001u; // 80062EA4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062EA8
  W32(c->r[13]+0xFFFFBCFCu,c->r[4]); // 80062EAC
  W8(c->r[13]+0xFFFFBD00u,c->r[0]); // 80062EB0
L_80062EB4:;
  c->r[3]=R32(c->r[13]+0xFFFFBCFCu); // 80062EB4
  return; // 80062EB8
}

// fn_80062EBC
void f_80062EBC(Ctx* __restrict c) {
  trace_call(0x80062EBCu);
  c->r[0]=R8(c->r[13]+0xFFFFBCF8u); // 80062EBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062EC0
  if (!crb(c,2)) { goto L_80062EE4; } // 80062EC4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062EC8
  c->r[0]=0u+0x00000001u; // 80062ECC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062ED0
  c->r[3]=c->r[4]+0x00000001u; // 80062ED4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062ED8
  W32(c->r[13]+0xFFFFBCF4u,c->r[4]); // 80062EDC
  W8(c->r[13]+0xFFFFBCF8u,c->r[0]); // 80062EE0
L_80062EE4:;
  c->r[3]=R32(c->r[13]+0xFFFFBCF4u); // 80062EE4
  return; // 80062EE8
}

// fn_80062EEC
void f_80062EEC(Ctx* __restrict c) {
  trace_call(0x80062EECu);
  c->r[0]=R8(c->r[13]+0xFFFFBCF0u); // 80062EEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062EF0
  if (!crb(c,2)) { goto L_80062F14; } // 80062EF4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062EF8
  c->r[0]=0u+0x00000001u; // 80062EFC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062F00
  c->r[3]=c->r[4]+0x00000001u; // 80062F04
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062F08
  W32(c->r[13]+0xFFFFBCECu,c->r[4]); // 80062F0C
  W8(c->r[13]+0xFFFFBCF0u,c->r[0]); // 80062F10
L_80062F14:;
  c->r[3]=R32(c->r[13]+0xFFFFBCECu); // 80062F14
  return; // 80062F18
}

// fn_80062F1C
void f_80062F1C(Ctx* __restrict c) {
  trace_call(0x80062F1Cu);
  c->r[0]=R8(c->r[13]+0xFFFFBCE0u); // 80062F1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80062F20
  if (!crb(c,2)) { goto L_80062F44; } // 80062F24
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80062F28
  c->r[0]=0u+0x00000001u; // 80062F2C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80062F30
  c->r[3]=c->r[4]+0x00000001u; // 80062F34
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80062F38
  W32(c->r[13]+0xFFFFBCDCu,c->r[4]); // 80062F3C
  W8(c->r[13]+0xFFFFBCE0u,c->r[0]); // 80062F40
L_80062F44:;
  c->r[3]=R32(c->r[13]+0xFFFFBCDCu); // 80062F44
  return; // 80062F48
}

// fn_80062F4C
void f_80062F4C(Ctx* __restrict c) {
  trace_call(0x80062F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80062F4C
  c->r[0]=c->lr; // 80062F50
  c->r[5]=0u+0x0000001Cu; // 80062F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80062F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80062F5C
  c->r[31]=c->r[4]|c->r[4]; // 80062F60
  c->r[4]=0u+0x00000000u; // 80062F64
  W32(c->r[1]+0x00000008u,c->r[30]); // 80062F68
  c->r[30]=c->r[3]|c->r[3]; // 80062F6C
  c->r[10]=R32(c->r[3]+0x00000550u); // 80062F70
  c->r[9]=R32(c->r[3]+0x00000554u); // 80062F74
  {uint32_t ea=c->r[3]+0x00000558u; c->f[0]=c->ps1[0]=RF32(ea);} // 80062F78
  c->r[8]=R32(c->r[3]+0x0000055Cu); // 80062F7C
  c->r[7]=R32(c->r[3]+0x00000560u); // 80062F80
  c->r[6]=R32(c->r[3]+0x00000564u); // 80062F84
  c->r[0]=R32(c->r[3]+0x00000568u); // 80062F88
  W32(c->r[3]+0x0000056Cu,c->r[10]); // 80062F8C
  W32(c->r[3]+0x00000570u,c->r[9]); // 80062F90
  {uint32_t ea=c->r[3]+0x00000574u; WF32(ea,c->f[0]);} // 80062F94
  W32(c->r[3]+0x00000578u,c->r[8]); // 80062F98
  W32(c->r[3]+0x0000057Cu,c->r[7]); // 80062F9C
  W32(c->r[3]+0x00000580u,c->r[6]); // 80062FA0
  W32(c->r[3]+0x00000584u,c->r[0]); // 80062FA4
  c->r[3]=c->r[3]+0x00000550u; // 80062FA8
  c->lr=0x80062FB0u; f_800043EC(c); // 80062FAC
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80062FB0
  c->r[4]=0u+0x00000003u; // 80062FB4
  W32(c->r[30]+0x00000550u,c->r[31]); // 80062FB8
  c->r[5]=0u+0x00000000u; // 80062FBC
  c->r[3]=c->r[3]+0x000000C4u; // 80062FC0
  c->lr=0x80062FC8u; f_8005DCA0(c); // 80062FC4
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80062FC8
  c->r[4]=0u+0x00000007u; // 80062FCC
  c->r[5]=0u+0x00000000u; // 80062FD0
  c->r[3]=c->r[3]+0x000000C4u; // 80062FD4
  c->lr=0x80062FDCu; f_8005DCA0(c); // 80062FD8
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80062FDC
  c->r[4]=0u+0x0000000Au; // 80062FE0
  c->r[5]=0u+0x00000000u; // 80062FE4
  c->r[3]=c->r[3]+0x000000C4u; // 80062FE8
  c->lr=0x80062FF0u; f_8005DCA0(c); // 80062FEC
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80062FF0
  c->r[4]=0u+0x0000000Fu; // 80062FF4
  c->r[5]=0u+0x00000000u; // 80062FF8
  c->r[3]=c->r[3]+0x000000C4u; // 80062FFC
  c->lr=0x80063004u; f_8005DCA0(c); // 80063000
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80063004
  c->r[4]=0u+0x00000023u; // 80063008
  c->r[5]=0u+0x00000000u; // 8006300C
  c->r[3]=c->r[3]+0x000000C4u; // 80063010
  c->lr=0x80063018u; f_8005DCA0(c); // 80063014
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80063018
  c->r[4]=0u+0x00000027u; // 8006301C
  c->r[5]=0u+0x00000000u; // 80063020
  c->r[3]=c->r[3]+0x000000C4u; // 80063024
  c->lr=0x8006302Cu; f_8005DCA0(c); // 80063028
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 8006302C
  c->r[4]=0u+0x0000002Bu; // 80063030
  c->r[5]=0u+0x00000000u; // 80063034
  c->r[3]=c->r[3]+0x000000C4u; // 80063038
  c->lr=0x80063040u; f_8005DCA0(c); // 8006303C
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80063040
  c->r[4]=0u+0x00000013u; // 80063044
  c->r[5]=0u+0x00000000u; // 80063048
  c->r[3]=c->r[3]+0x000000C4u; // 8006304C
  c->lr=0x80063054u; f_8005DCA0(c); // 80063050
  c->r[0]=R32(c->r[1]+0x00000014u); // 80063054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80063058
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006305C
  c->lr=c->r[0]; // 80063060
  c->r[1]=c->r[1]+0x00000010u; // 80063064
  return; // 80063068
}

// fn_8006306C
void f_8006306C(Ctx* __restrict c) {
  trace_call(0x8006306Cu);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8006306C
  c->r[6]=c->r[4]|c->r[4]; // 80063070
  c->r[4]=R32(c->r[3]+0x0000056Cu); // 80063074
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80063078
  c->r[5]=R32(c->r[3]+0x00000550u); // 8006307C
  c->ctr=c->r[12]; // 80063080
  if (true) { dispatch(c,c->ctr); return; } // 80063084
}

// fn_80063088
void f_80063088(Ctx* __restrict c) {
  trace_call(0x80063088u);
  return; // 80063088
}

// fn_8006308C
void f_8006308C(Ctx* __restrict c) {
  trace_call(0x8006308Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006308C
  c->r[0]=c->lr; // 80063090
  W32(c->r[1]+0x00000194u,c->r[0]); // 80063094
  c->r[11]=c->r[1]+0x00000170u; // 80063098
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 8006309C
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 800630A0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 800630A4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 800630A8
  c->lr=0x800630B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800630AC
  c->f[30]=c->f[1]; // 800630B0
  c->r[29]=c->r[3]|c->r[3]; // 800630B4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800630B8
  c->r[30]=c->r[4]|c->r[4]; // 800630BC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800630C0
  c->r[31]=c->r[5]|c->r[5]; // 800630C4
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800630C8
  c->r[3]=c->r[1]+0x00000064u; // 800630CC
  c->lr=0x800630D4u; f_8005FD70(c); // 800630D0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800630D4
  c->r[3]=c->r[1]+0x00000058u; // 800630D8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800630DC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800630E0
  c->lr=0x800630E8u; f_8005FD70(c); // 800630E4
  c->r[4]=c->r[31]|c->r[31]; // 800630E8
  c->r[3]=c->r[1]+0x0000004Cu; // 800630EC
  c->r[5]=c->r[1]+0x00000064u; // 800630F0
  c->lr=0x800630F8u; f_8005FC60(c); // 800630F4
  c->r[3]=c->r[30]|c->r[30]; // 800630F8
  c->r[4]=c->r[1]+0x00000130u; // 800630FC
  c->lr=0x80063104u; f_80383214(c); // 80063100
  c->r[3]=c->r[1]+0x0000004Cu; // 80063104
  c->lr=0x8006310Cu; f_80061BF0(c); // 80063108
  cmps(c,0,(int32_t)c->r[3],0); // 8006310C
  if (crb(c,2)) { goto L_80063124; } // 80063110
  c->r[3]=c->r[30]|c->r[30]; // 80063114
  c->r[4]=c->r[29]|c->r[29]; // 80063118
  c->lr=0x80063120u; f_80382F2C(c); // 8006311C
  goto L_80063298; // 80063120
L_80063124:;
  c->r[3]=c->r[1]+0x0000004Cu; // 80063124
  c->r[4]=c->r[1]+0x00000040u; // 80063128
  c->lr=0x80063130u; f_80383D38(c); // 8006312C
  {uint32_t ea=c->r[2]+0xFFFF827Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063130
  c->r[3]=c->r[1]+0x00000040u; // 80063134
  c->r[4]=c->r[1]+0x00000058u; // 80063138
  c->lr=0x80063140u; f_8005FC84(c); // 8006313C
  cmps(c,0,(int32_t)c->r[3],0); // 80063140
  if (crb(c,2)) { goto L_80063158; } // 80063144
  c->r[3]=c->r[30]|c->r[30]; // 80063148
  c->r[4]=c->r[29]|c->r[29]; // 8006314C
  c->lr=0x80063154u; f_80382F2C(c); // 80063150
  goto L_80063298; // 80063154
L_80063158:;
  c->r[3]=c->r[1]+0x00000100u; // 80063158
  c->r[4]=c->r[1]+0x00000040u; // 8006315C
  c->r[5]=c->r[1]+0x00000058u; // 80063160
  c->lr=0x80063168u; f_8005FD80(c); // 80063164
  c->r[3]=c->r[1]+0x00000100u; // 80063168
  c->r[4]=c->r[1]+0x00000064u; // 8006316C
  c->lr=0x80063174u; f_8005CDC8(c); // 80063170
  c->r[3]=c->r[1]+0x000000D0u; // 80063174
  c->r[4]=c->r[1]+0x00000130u; // 80063178
  c->r[5]=c->r[1]+0x00000100u; // 8006317C
  c->lr=0x80063184u; f_8030DA28(c); // 80063180
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063184
  c->r[3]=c->r[1]+0x0000001Cu; // 80063188
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006318C
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063190
  c->lr=0x80063198u; f_8005FD70(c); // 80063194
  c->r[3]=c->r[1]+0x0000001Cu; // 80063198
  c->lr=0x800631A0u; f_800632C0(c); // 8006319C
  c->f[31]=c->f[1]; // 800631A0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800631A4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800631A8
  c->r[3]=c->r[1]+0x00000034u; // 800631AC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800631B0
  c->lr=0x800631B8u; f_8005FD70(c); // 800631B4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800631B8
  c->r[3]=c->r[1]+0x00000028u; // 800631BC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800631C0
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800631C4
  c->lr=0x800631CCu; f_8005FD70(c); // 800631C8
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800631CC
  fcmp(c,0,c->f[31],c->f[0]); // 800631D0
  if (!crb(c,1)) { goto L_80063204; } // 800631D4
  c->r[0]=0u+0x00000000u; // 800631D8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800631DC
  c->r[3]=c->r[1]+0x0000000Cu; // 800631E0
  c->lr=0x800631E8u; f_8004714C(c); // 800631E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800631E8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800631EC
  fcmp(c,0,c->f[0],c->f[31]); // 800631F0
  if (!crb(c,1)) { goto L_800631FC; } // 800631F4
  goto L_80063230; // 800631F8
L_800631FC:;
  c->f[31]=c->f[0]; // 800631FC
  goto L_80063230; // 80063200
L_80063204:;
  c->r[0]=0u+0x00000000u; // 80063204
  W8(c->r[1]+0x00000008u,c->r[0]); // 80063208
  c->r[3]=c->r[1]+0x00000008u; // 8006320C
  c->lr=0x80063214u; f_8004714C(c); // 80063210
  c->f[0]=-c->f[30]; // 80063214
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063218
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8006321C
  fcmp(c,0,c->f[0],c->f[31]); // 80063220
  if (!crb(c,0)) { goto L_8006322C; } // 80063224
  goto L_80063230; // 80063228
L_8006322C:;
  c->f[31]=c->f[0]; // 8006322C
L_80063230:;
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063230
  c->r[3]=c->r[1]+0x00000070u; // 80063234
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063238
  c->r[4]=c->r[1]+0x00000034u; // 8006323C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 80063240
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80063244
  c->lr=0x8006324Cu; f_804E1868(c); // 80063248
  c->r[3]=c->r[1]+0x00000028u; // 8006324C
  c->r[4]=c->r[1]+0x00000070u; // 80063250
  c->r[5]=c->r[3]|c->r[3]; // 80063254
  c->lr=0x8006325Cu; f_8030DEC0(c); // 80063258
  c->r[3]=c->r[1]+0x000000A0u; // 8006325C
  c->r[4]=c->r[1]+0x00000028u; // 80063260
  c->r[5]=c->r[1]+0x00000034u; // 80063264
  c->lr=0x8006326Cu; f_8005FD80(c); // 80063268
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006326C
  c->r[3]=c->r[1]+0x00000010u; // 80063270
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063274
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063278
  c->lr=0x80063280u; f_8005FD70(c); // 8006327C
  c->r[3]=c->r[1]+0x000000A0u; // 80063280
  c->r[4]=c->r[1]+0x00000010u; // 80063284
  c->lr=0x8006328Cu; f_8005CDC8(c); // 80063288
  c->r[4]=c->r[29]|c->r[29]; // 8006328C
  c->r[3]=c->r[1]+0x000000A0u; // 80063290
  c->lr=0x80063298u; f_80382F2C(c); // 80063294
L_80063298:;
  c->r[11]=c->r[1]+0x00000170u; // 80063298
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 8006329C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 800632A0
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 800632A4
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 800632A8
  c->lr=0x800632B0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800632AC
  c->r[0]=R32(c->r[1]+0x00000194u); // 800632B0
  c->lr=c->r[0]; // 800632B4
  c->r[1]=c->r[1]+0x00000190u; // 800632B8
  return; // 800632BC
}

// fn_800632C0
void f_800632C0(Ctx* __restrict c) {
  trace_call(0x800632C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800632C0
  c->r[0]=c->lr; // 800632C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800632C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800632CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800632D0
  c->lr=0x800632D8u; f_804E1378(c); // 800632D4
  {uint32_t ea=c->r[2]+0xFFFF82C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800632D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800632DC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800632E0
  c->lr=c->r[0]; // 800632E4
  c->r[1]=c->r[1]+0x00000010u; // 800632E8
  return; // 800632EC
}

// fn_800632F0
void f_800632F0(Ctx* __restrict c) {
  trace_call(0x800632F0u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800632F0
  c->r[0]=c->lr; // 800632F4
  W32(c->r[1]+0x00000194u,c->r[0]); // 800632F8
  c->r[11]=c->r[1]+0x00000170u; // 800632FC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 80063300
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 80063304
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 80063308
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 8006330C
  c->lr=0x80063314u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80063310
  c->f[30]=c->f[1]; // 80063314
  c->r[29]=c->r[3]|c->r[3]; // 80063318
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006331C
  c->r[30]=c->r[4]|c->r[4]; // 80063320
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063324
  c->r[31]=c->r[5]|c->r[5]; // 80063328
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8006332C
  c->r[3]=c->r[1]+0x0000005Cu; // 80063330
  c->lr=0x80063338u; f_8005FD70(c); // 80063334
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063338
  c->r[3]=c->r[1]+0x00000050u; // 8006333C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063340
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063344
  c->lr=0x8006334Cu; f_8005FD70(c); // 80063348
  c->r[4]=c->r[31]|c->r[31]; // 8006334C
  c->r[3]=c->r[1]+0x00000044u; // 80063350
  c->r[5]=c->r[1]+0x0000005Cu; // 80063354
  c->lr=0x8006335Cu; f_8005FC60(c); // 80063358
  c->r[3]=c->r[30]|c->r[30]; // 8006335C
  c->r[4]=c->r[1]+0x00000128u; // 80063360
  c->lr=0x80063368u; f_80383214(c); // 80063364
  c->r[3]=c->r[1]+0x00000044u; // 80063368
  c->lr=0x80063370u; f_80061BF0(c); // 8006336C
  cmps(c,0,(int32_t)c->r[3],0); // 80063370
  if (crb(c,2)) { goto L_80063388; } // 80063374
  c->r[3]=c->r[30]|c->r[30]; // 80063378
  c->r[4]=c->r[29]|c->r[29]; // 8006337C
  c->lr=0x80063384u; f_80382F2C(c); // 80063380
  goto L_800634C0; // 80063384
L_80063388:;
  c->r[3]=c->r[1]+0x00000044u; // 80063388
  c->r[4]=c->r[1]+0x00000038u; // 8006338C
  c->lr=0x80063394u; f_80383D38(c); // 80063390
  {uint32_t ea=c->r[2]+0xFFFF827Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063394
  c->r[3]=c->r[1]+0x00000038u; // 80063398
  c->r[4]=c->r[1]+0x00000050u; // 8006339C
  c->lr=0x800633A4u; f_8005FC84(c); // 800633A0
  cmps(c,0,(int32_t)c->r[3],0); // 800633A4
  if (crb(c,2)) { goto L_800633BC; } // 800633A8
  c->r[3]=c->r[30]|c->r[30]; // 800633AC
  c->r[4]=c->r[29]|c->r[29]; // 800633B0
  c->lr=0x800633B8u; f_80382F2C(c); // 800633B4
  goto L_800634C0; // 800633B8
L_800633BC:;
  c->r[3]=c->r[1]+0x000000F8u; // 800633BC
  c->r[4]=c->r[1]+0x00000038u; // 800633C0
  c->r[5]=c->r[1]+0x00000050u; // 800633C4
  c->lr=0x800633CCu; f_8005FD80(c); // 800633C8
  c->r[3]=c->r[1]+0x000000F8u; // 800633CC
  c->r[4]=c->r[1]+0x0000005Cu; // 800633D0
  c->lr=0x800633D8u; f_8005CDC8(c); // 800633D4
  c->r[3]=c->r[1]+0x000000C8u; // 800633D8
  c->r[4]=c->r[1]+0x00000128u; // 800633DC
  c->r[5]=c->r[1]+0x000000F8u; // 800633E0
  c->lr=0x800633E8u; f_8030DA28(c); // 800633E4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800633E8
  c->r[3]=c->r[1]+0x00000014u; // 800633EC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800633F0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800633F4
  c->lr=0x800633FCu; f_8005FD70(c); // 800633F8
  c->r[3]=c->r[1]+0x00000014u; // 800633FC
  c->lr=0x80063404u; f_800632C0(c); // 80063400
  c->f[31]=c->f[1]; // 80063404
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063408
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006340C
  c->r[3]=c->r[1]+0x0000002Cu; // 80063410
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063414
  c->lr=0x8006341Cu; f_8005FD70(c); // 80063418
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006341C
  c->r[3]=c->r[1]+0x00000020u; // 80063420
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063424
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063428
  c->lr=0x80063430u; f_8005FD70(c); // 8006342C
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063430
  fcmp(c,0,c->f[30],c->f[0]); // 80063434
  if (!crb(c,0)) { goto L_80063440; } // 80063438
  goto L_80063458; // 8006343C
L_80063440:;
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063440
  fcmp(c,0,c->f[30],c->f[0]); // 80063444
  if (!crb(c,1)) { goto L_80063450; } // 80063448
  goto L_80063454; // 8006344C
L_80063450:;
  c->f[0]=c->f[30]; // 80063450
L_80063454:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 80063454
L_80063458:;
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063458
  c->r[3]=c->r[1]+0x00000068u; // 8006345C
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063460
  c->r[4]=c->r[1]+0x0000002Cu; // 80063464
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 80063468
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8006346C
  c->lr=0x80063474u; f_804E1868(c); // 80063470
  c->r[3]=c->r[1]+0x00000020u; // 80063474
  c->r[4]=c->r[1]+0x00000068u; // 80063478
  c->r[5]=c->r[3]|c->r[3]; // 8006347C
  c->lr=0x80063484u; f_8030DEC0(c); // 80063480
  c->r[3]=c->r[1]+0x00000098u; // 80063484
  c->r[4]=c->r[1]+0x00000020u; // 80063488
  c->r[5]=c->r[1]+0x0000002Cu; // 8006348C
  c->lr=0x80063494u; f_8005FD80(c); // 80063490
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063494
  c->r[3]=c->r[1]+0x00000008u; // 80063498
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8006349C
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800634A0
  c->lr=0x800634A8u; f_8005FD70(c); // 800634A4
  c->r[3]=c->r[1]+0x00000098u; // 800634A8
  c->r[4]=c->r[1]+0x00000008u; // 800634AC
  c->lr=0x800634B4u; f_8005CDC8(c); // 800634B0
  c->r[4]=c->r[29]|c->r[29]; // 800634B4
  c->r[3]=c->r[1]+0x00000098u; // 800634B8
  c->lr=0x800634C0u; f_80382F2C(c); // 800634BC
L_800634C0:;
  c->r[11]=c->r[1]+0x00000170u; // 800634C0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 800634C4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 800634C8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 800634CC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 800634D0
  c->lr=0x800634D8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800634D4
  c->r[0]=R32(c->r[1]+0x00000194u); // 800634D8
  c->lr=c->r[0]; // 800634DC
  c->r[1]=c->r[1]+0x00000190u; // 800634E0
  return; // 800634E4
}

// fn_800634E8
void f_800634E8(Ctx* __restrict c) {
  trace_call(0x800634E8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800634E8
  c->r[0]=c->lr; // 800634EC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800634F0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800634F4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800634F8
  c->f[31]=c->f[3]; // 800634FC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 80063500
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 80063504
  c->f[30]=c->f[2]; // 80063508
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 8006350C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 80063510
  c->f[29]=c->f[1]; // 80063514
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80063518
  c->r[31]=c->r[4]|c->r[4]; // 8006351C
  W32(c->r[1]+0x00000068u,c->r[30]); // 80063520
  c->r[30]=c->r[3]|c->r[3]; // 80063524
  c->r[3]=c->r[1]+0x00000020u; // 80063528
  c->lr=0x80063530u; f_8005CD7C(c); // 8006352C
  c->r[3]=c->r[30]+0x000001B8u; // 80063530
  c->r[4]=c->r[1]+0x00000030u; // 80063534
  c->lr=0x8006353Cu; f_80382F2C(c); // 80063538
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006353C
  c->r[3]=c->r[1]+0x00000008u; // 80063540
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063544
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063548
  c->lr=0x80063550u; f_8005FD70(c); // 8006354C
  c->r[3]=c->r[1]+0x00000014u; // 80063550
  c->r[4]=c->r[1]+0x00000020u; // 80063554
  c->r[5]=c->r[1]+0x00000008u; // 80063558
  c->lr=0x80063560u; f_8005FC60(c); // 8006355C
  c->r[3]=c->r[1]+0x00000014u; // 80063560
  c->lr=0x80063568u; f_80060DC8(c); // 80063564
  fcmp(c,0,c->f[1],c->f[30]); // 80063568
  if (crb(c,0)) { goto L_800635B0; } // 8006356C
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80063570
  c->r[0]=R32(c->r[3]+0x00000090u); // 80063574
  cmps(c,0,(int32_t)c->r[0],0); // 80063578
  if (crb(c,2)) { goto L_80063598; } // 8006357C
  c->f[1]=c->f[29]; // 80063580
  c->r[3]=c->r[30]+0x000001B8u; // 80063584
  c->r[4]=c->r[3]|c->r[3]; // 80063588
  c->r[5]=c->r[31]|c->r[31]; // 8006358C
  c->lr=0x80063594u; f_8006308C(c); // 80063590
  goto L_800635B0; // 80063594
L_80063598:;
  c->r[3]=c->r[1]+0x00000014u; // 80063598
  c->lr=0x800635A0u; f_800632C0(c); // 8006359C
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 800635A0
  c->r[3]=c->r[30]|c->r[30]; // 800635A4
  c->f[2]=c->f[29]; // 800635A8
  c->lr=0x800635B0u; f_800635E0(c); // 800635AC
L_800635B0:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800635B0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800635B4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800635B8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800635BC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800635C0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800635C4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800635C8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800635CC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800635D0
  c->lr=c->r[0]; // 800635D4
  c->r[1]=c->r[1]+0x000000A0u; // 800635D8
  return; // 800635DC
}

// fn_800635E0
void f_800635E0(Ctx* __restrict c) {
  trace_call(0x800635E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800635E0
  c->r[0]=c->lr; // 800635E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800635E8
  c->r[4]=c->r[1]+0x00000038u; // 800635EC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800635F0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800635F4
  c->f[31]=c->f[1]; // 800635F8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800635FC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80063600
  c->f[30]=c->f[2]; // 80063604
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80063608
  c->r[31]=c->r[3]|c->r[3]; // 8006360C
  c->r[3]=c->r[3]+0x000001B8u; // 80063610
  c->lr=0x80063618u; f_80382F2C(c); // 80063614
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063618
  c->r[3]=c->r[1]+0x00000028u; // 8006361C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063620
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063624
  c->lr=0x8006362Cu; f_8005FD70(c); // 80063628
  c->r[3]=c->r[1]+0x00000028u; // 8006362C
  c->lr=0x80063634u; f_800632C0(c); // 80063630
  c->f[2]=c->f[31]; // 80063634
  c->lr=0x8006363Cu; f_8006373C(c); // 80063638
  c->f[31]=c->f[1]; // 8006363C
  c->r[3]=c->r[31]+0x000001B8u; // 80063640
  c->lr=0x80063648u; f_80382F00(c); // 80063644
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063648
  fcmp(c,0,c->f[30],c->f[0]); // 8006364C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80063650
  if (!crb(c,2)) { goto L_800636B8; } // 80063654
  fcmp(c,0,c->f[31],c->f[0]); // 80063658
  if (!crb(c,1)) { goto L_8006368C; } // 8006365C
  c->r[0]=0u+0x00000000u; // 80063660
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80063664
  c->r[3]=c->r[1]+0x0000000Cu; // 80063668
  c->lr=0x80063670u; f_8004714C(c); // 8006366C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063670
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80063674
  fcmp(c,0,c->f[0],c->f[31]); // 80063678
  if (!crb(c,1)) { goto L_80063684; } // 8006367C
  goto L_800636B8; // 80063680
L_80063684:;
  c->f[31]=c->f[0]; // 80063684
  goto L_800636B8; // 80063688
L_8006368C:;
  c->r[0]=0u+0x00000000u; // 8006368C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80063690
  c->r[3]=c->r[1]+0x00000008u; // 80063694
  c->lr=0x8006369Cu; f_8004714C(c); // 80063698
  c->f[0]=-c->f[30]; // 8006369C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800636A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800636A4
  fcmp(c,0,c->f[0],c->f[31]); // 800636A8
  if (!crb(c,0)) { goto L_800636B4; } // 800636AC
  goto L_800636B8; // 800636B0
L_800636B4:;
  c->f[31]=c->f[0]; // 800636B4
L_800636B8:;
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800636B8
  c->r[3]=c->r[1]+0x0000001Cu; // 800636BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800636C0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 800636C4
  c->lr=0x800636CCu; f_8005FD70(c); // 800636C8
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 800636CC
  c->r[3]=c->r[1]+0x0000001Cu; // 800636D0
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 800636D4
  c->lr=0x800636DCu; f_8005CD98(c); // 800636D8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 800636DC
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 800636E0
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 800636E4
  c->r[3]=c->r[31]+0x000001B8u; // 800636E8
  c->f[3]=c->f[1]; // 800636EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800636F0
  c->lr=0x800636F8u; f_804E18A0(c); // 800636F4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800636F8
  c->r[3]=c->r[1]+0x00000010u; // 800636FC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063700
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063704
  c->lr=0x8006370Cu; f_8005FD70(c); // 80063708
  c->r[3]=c->r[31]+0x000001B8u; // 8006370C
  c->r[4]=c->r[1]+0x00000010u; // 80063710
  c->lr=0x80063718u; f_8005CDC8(c); // 80063714
  c->r[0]=R32(c->r[1]+0x00000094u); // 80063718
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8006371C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80063720
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80063724
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80063728
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8006372C
  c->lr=c->r[0]; // 80063730
  c->r[1]=c->r[1]+0x00000090u; // 80063734
  return; // 80063738
}

// fn_8006373C
void f_8006373C(Ctx* __restrict c) {
  trace_call(0x8006373Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006373C
  c->r[0]=c->lr; // 80063740
  W32(c->r[1]+0x00000034u,c->r[0]); // 80063744
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80063748
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8006374C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80063750
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80063754
  c->f[30]=c->f[2]; // 80063758
  {uint32_t ea=c->r[2]+0xFFFF82C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006375C
  {uint32_t ea=c->r[2]+0xFFFF82CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063760
  c->lr=0x80063768u; f_80060E74(c); // 80063764
  c->f[31]=c->f[1]; // 80063768
  {uint32_t ea=c->r[2]+0xFFFF82C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006376C
  c->f[1]=c->f[30]; // 80063770
  {uint32_t ea=c->r[2]+0xFFFF82CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063774
  c->lr=0x8006377Cu; f_80060E74(c); // 80063778
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8006377C
  {uint32_t ea=c->r[2]+0xFFFF82D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063780
  fcmp(c,0,c->f[1],c->f[0]); // 80063784
  if (!crb(c,0)) { goto L_80063798; } // 80063788
  {uint32_t ea=c->r[2]+0xFFFF82CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006378C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80063790
  goto L_800637B0; // 80063794
L_80063798:;
  {uint32_t ea=c->r[2]+0xFFFF82C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063798
  fcmp(c,0,c->f[1],c->f[0]); // 8006379C
  if (!crb(c,1)) { goto L_800637B0; } // 800637A0
  {uint32_t ea=c->r[2]+0xFFFF82CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800637A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800637A8
  c->f[1]=-c->f[0]; // 800637AC
L_800637B0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800637B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800637B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800637B8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800637BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800637C0
  c->lr=c->r[0]; // 800637C4
  c->r[1]=c->r[1]+0x00000030u; // 800637C8
  return; // 800637CC
}

// fn_800637D0
void f_800637D0(Ctx* __restrict c) {
  trace_call(0x800637D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800637D0
  c->r[0]=c->lr; // 800637D4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800637D8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800637DC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800637E0
  c->f[31]=c->f[3]; // 800637E4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800637E8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800637EC
  c->f[30]=c->f[2]; // 800637F0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800637F4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800637F8
  c->f[29]=c->f[1]; // 800637FC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80063800
  c->r[31]=c->r[3]|c->r[3]; // 80063804
  c->r[3]=c->r[1]+0x00000020u; // 80063808
  c->lr=0x80063810u; f_8005CD7C(c); // 8006380C
  c->r[3]=c->r[31]+0x000001B8u; // 80063810
  c->r[4]=c->r[1]+0x00000030u; // 80063814
  c->lr=0x8006381Cu; f_80382F2C(c); // 80063818
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006381C
  c->r[3]=c->r[1]+0x00000008u; // 80063820
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063824
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063828
  c->lr=0x80063830u; f_8005FD70(c); // 8006382C
  c->r[3]=c->r[1]+0x00000014u; // 80063830
  c->r[4]=c->r[1]+0x00000020u; // 80063834
  c->r[5]=c->r[1]+0x00000008u; // 80063838
  c->lr=0x80063840u; f_8005FC60(c); // 8006383C
  c->r[3]=c->r[1]+0x00000014u; // 80063840
  c->lr=0x80063848u; f_80060DC8(c); // 80063844
  fcmp(c,0,c->f[1],c->f[30]); // 80063848
  if (crb(c,0)) { goto L_80063868; } // 8006384C
  c->r[3]=c->r[1]+0x00000014u; // 80063850
  c->lr=0x80063858u; f_800632C0(c); // 80063854
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 80063858
  c->r[3]=c->r[31]|c->r[31]; // 8006385C
  c->f[2]=c->f[29]; // 80063860
  c->lr=0x80063868u; f_80063894(c); // 80063864
L_80063868:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80063868
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8006386C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80063870
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80063874
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80063878
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 8006387C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 80063880
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80063884
  c->lr=c->r[0]; // 80063888
  c->r[1]=c->r[1]+0x000000A0u; // 8006388C
  return; // 80063890
}

// fn_80063894
void f_80063894(Ctx* __restrict c) {
  trace_call(0x80063894u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063894
  c->r[0]=c->lr; // 80063898
  W32(c->r[1]+0x00000094u,c->r[0]); // 8006389C
  c->r[4]=c->r[1]+0x00000030u; // 800638A0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800638A4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800638A8
  c->f[31]=c->f[1]; // 800638AC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800638B0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800638B4
  c->f[30]=c->f[2]; // 800638B8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800638BC
  c->r[31]=c->r[3]|c->r[3]; // 800638C0
  c->r[3]=c->r[3]+0x000001B8u; // 800638C4
  c->lr=0x800638CCu; f_80382F2C(c); // 800638C8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800638CC
  c->r[3]=c->r[1]+0x00000024u; // 800638D0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800638D4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 800638D8
  c->lr=0x800638E0u; f_8005FD70(c); // 800638DC
  c->r[3]=c->r[1]+0x00000024u; // 800638E0
  c->lr=0x800638E8u; f_800632C0(c); // 800638E4
  c->f[2]=c->f[31]; // 800638E8
  c->lr=0x800638F0u; f_8006373C(c); // 800638EC
  c->f[31]=c->f[1]; // 800638F0
  c->r[3]=c->r[31]+0x000001B8u; // 800638F4
  c->lr=0x800638FCu; f_80382F00(c); // 800638F8
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800638FC
  fcmp(c,0,c->f[30],c->f[0]); // 80063900
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80063904
  if (!crb(c,2)) { goto L_80063948; } // 80063908
  c->f[0]=-c->f[30]; // 8006390C
  fcmp(c,0,c->f[31],c->f[0]); // 80063910
  if (!crb(c,0)) { goto L_8006391C; } // 80063914
  goto L_80063920; // 80063918
L_8006391C:;
  c->f[0]=c->f[31]; // 8006391C
L_80063920:;
  fcmp(c,0,c->f[0],c->f[30]); // 80063920
  if (!crb(c,1)) { goto L_8006392C; } // 80063924
  goto L_80063930; // 80063928
L_8006392C:;
  c->f[30]=c->f[0]; // 8006392C
L_80063930:;
  c->r[0]=0u+0x00000000u; // 80063930
  W8(c->r[1]+0x00000008u,c->r[0]); // 80063934
  c->r[3]=c->r[1]+0x00000008u; // 80063938
  c->lr=0x80063940u; f_8004714C(c); // 8006393C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063940
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[0]); // 80063944
L_80063948:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063948
  c->r[3]=c->r[1]+0x00000018u; // 8006394C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063950
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063954
  c->lr=0x8006395Cu; f_8005FD70(c); // 80063958
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006395C
  c->r[3]=c->r[1]+0x00000018u; // 80063960
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80063964
  c->lr=0x8006396Cu; f_8005CD98(c); // 80063968
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8006396C
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063970
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063974
  c->r[3]=c->r[31]+0x000001B8u; // 80063978
  c->f[3]=c->f[1]; // 8006397C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80063980
  c->lr=0x80063988u; f_804E18A0(c); // 80063984
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063988
  c->r[3]=c->r[1]+0x0000000Cu; // 8006398C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063990
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063994
  c->lr=0x8006399Cu; f_8005FD70(c); // 80063998
  c->r[3]=c->r[31]+0x000001B8u; // 8006399C
  c->r[4]=c->r[1]+0x0000000Cu; // 800639A0
  c->lr=0x800639A8u; f_8005CDC8(c); // 800639A4
  c->r[0]=R32(c->r[1]+0x00000094u); // 800639A8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800639AC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800639B0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800639B4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800639B8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800639BC
  c->lr=c->r[0]; // 800639C0
  c->r[1]=c->r[1]+0x00000090u; // 800639C4
  return; // 800639C8
}

// fn_800639CC
void f_800639CC(Ctx* __restrict c) {
  trace_call(0x800639CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800639CC
  c->r[0]=c->lr; // 800639D0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800639D4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800639D8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800639DC
  c->f[31]=c->f[3]; // 800639E0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800639E4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800639E8
  c->f[30]=c->f[2]; // 800639EC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800639F0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800639F4
  c->f[29]=c->f[1]; // 800639F8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800639FC
  c->r[31]=c->r[4]|c->r[4]; // 80063A00
  W32(c->r[1]+0x00000068u,c->r[30]); // 80063A04
  c->r[30]=c->r[3]|c->r[3]; // 80063A08
  c->r[3]=c->r[1]+0x00000020u; // 80063A0C
  c->lr=0x80063A14u; f_8005CD7C(c); // 80063A10
  c->r[3]=c->r[30]+0x000001B8u; // 80063A14
  c->r[4]=c->r[1]+0x00000030u; // 80063A18
  c->lr=0x80063A20u; f_80382F2C(c); // 80063A1C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063A20
  c->r[3]=c->r[1]+0x00000008u; // 80063A24
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063A28
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063A2C
  c->lr=0x80063A34u; f_8005FD70(c); // 80063A30
  c->r[3]=c->r[1]+0x00000014u; // 80063A34
  c->r[4]=c->r[1]+0x00000020u; // 80063A38
  c->r[5]=c->r[1]+0x00000008u; // 80063A3C
  c->lr=0x80063A44u; f_8005FC60(c); // 80063A40
  c->r[3]=c->r[1]+0x00000014u; // 80063A44
  c->lr=0x80063A4Cu; f_80060DC8(c); // 80063A48
  fcmp(c,0,c->f[1],c->f[30]); // 80063A4C
  if (crb(c,0)) { goto L_80063A94; } // 80063A50
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80063A54
  c->r[0]=R32(c->r[3]+0x00000090u); // 80063A58
  cmps(c,0,(int32_t)c->r[0],0); // 80063A5C
  if (crb(c,2)) { goto L_80063A7C; } // 80063A60
  c->f[1]=c->f[29]; // 80063A64
  c->r[3]=c->r[30]+0x000001B8u; // 80063A68
  c->r[4]=c->r[3]|c->r[3]; // 80063A6C
  c->r[5]=c->r[31]|c->r[31]; // 80063A70
  c->lr=0x80063A78u; f_800632F0(c); // 80063A74
  goto L_80063A94; // 80063A78
L_80063A7C:;
  c->r[3]=c->r[1]+0x00000014u; // 80063A7C
  c->lr=0x80063A84u; f_800632C0(c); // 80063A80
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 80063A84
  c->r[3]=c->r[30]|c->r[30]; // 80063A88
  c->f[2]=c->f[29]; // 80063A8C
  c->lr=0x80063A94u; f_80063AC4(c); // 80063A90
L_80063A94:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80063A94
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80063A98
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80063A9C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80063AA0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80063AA4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 80063AA8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 80063AAC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80063AB0
  c->r[30]=R32(c->r[1]+0x00000068u); // 80063AB4
  c->lr=c->r[0]; // 80063AB8
  c->r[1]=c->r[1]+0x000000A0u; // 80063ABC
  return; // 80063AC0
}

// fn_80063AC4
void f_80063AC4(Ctx* __restrict c) {
  trace_call(0x80063AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063AC4
  c->r[0]=c->lr; // 80063AC8
  W32(c->r[1]+0x00000094u,c->r[0]); // 80063ACC
  c->r[4]=c->r[1]+0x00000030u; // 80063AD0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80063AD4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80063AD8
  c->f[31]=c->f[1]; // 80063ADC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80063AE0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80063AE4
  c->f[30]=c->f[2]; // 80063AE8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80063AEC
  c->r[31]=c->r[3]|c->r[3]; // 80063AF0
  c->r[3]=c->r[3]+0x000001B8u; // 80063AF4
  c->lr=0x80063AFCu; f_80382F2C(c); // 80063AF8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063AFC
  c->r[3]=c->r[1]+0x00000020u; // 80063B00
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063B04
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063B08
  c->lr=0x80063B10u; f_8005FD70(c); // 80063B0C
  c->r[3]=c->r[1]+0x00000020u; // 80063B10
  c->lr=0x80063B18u; f_800632C0(c); // 80063B14
  c->f[2]=c->f[31]; // 80063B18
  c->lr=0x80063B20u; f_8006373C(c); // 80063B1C
  c->f[31]=c->f[1]; // 80063B20
  c->r[3]=c->r[31]+0x000001B8u; // 80063B24
  c->lr=0x80063B2Cu; f_80382F00(c); // 80063B28
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063B2C
  fcmp(c,0,c->f[30],c->f[0]); // 80063B30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80063B34
  if (!crb(c,2)) { goto L_80063B54; } // 80063B38
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063B3C
  fcmp(c,0,c->f[30],c->f[0]); // 80063B40
  if (!crb(c,1)) { goto L_80063B4C; } // 80063B44
  goto L_80063B50; // 80063B48
L_80063B4C:;
  c->f[0]=c->f[30]; // 80063B4C
L_80063B50:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 80063B50
L_80063B54:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063B54
  c->r[3]=c->r[1]+0x00000014u; // 80063B58
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063B5C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063B60
  c->lr=0x80063B68u; f_8005FD70(c); // 80063B64
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063B68
  c->r[3]=c->r[1]+0x00000014u; // 80063B6C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80063B70
  c->lr=0x80063B78u; f_8005CD98(c); // 80063B74
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 80063B78
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063B7C
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063B80
  c->r[3]=c->r[31]+0x000001B8u; // 80063B84
  c->f[3]=c->f[1]; // 80063B88
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80063B8C
  c->lr=0x80063B94u; f_804E18A0(c); // 80063B90
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063B94
  c->r[3]=c->r[1]+0x00000008u; // 80063B98
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063B9C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063BA0
  c->lr=0x80063BA8u; f_8005FD70(c); // 80063BA4
  c->r[3]=c->r[31]+0x000001B8u; // 80063BA8
  c->r[4]=c->r[1]+0x00000008u; // 80063BAC
  c->lr=0x80063BB4u; f_8005CDC8(c); // 80063BB0
  c->r[0]=R32(c->r[1]+0x00000094u); // 80063BB4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80063BB8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80063BBC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80063BC0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80063BC4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80063BC8
  c->lr=c->r[0]; // 80063BCC
  c->r[1]=c->r[1]+0x00000090u; // 80063BD0
  return; // 80063BD4
}

// fn_80063BD8
void f_80063BD8(Ctx* __restrict c) {
  trace_call(0x80063BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063BD8
  c->r[0]=c->lr; // 80063BDC
  W32(c->r[1]+0x00000094u,c->r[0]); // 80063BE0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80063BE4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80063BE8
  c->f[31]=c->f[3]; // 80063BEC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80063BF0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80063BF4
  c->f[30]=c->f[2]; // 80063BF8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80063BFC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 80063C00
  c->f[29]=c->f[1]; // 80063C04
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80063C08
  c->r[31]=c->r[4]|c->r[4]; // 80063C0C
  c->r[4]=c->r[1]+0x00000020u; // 80063C10
  W32(c->r[1]+0x00000058u,c->r[30]); // 80063C14
  c->r[30]=c->r[3]|c->r[3]; // 80063C18
  c->r[3]=c->r[3]+0x000001B8u; // 80063C1C
  c->lr=0x80063C24u; f_80382F2C(c); // 80063C20
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063C24
  c->r[3]=c->r[1]+0x00000008u; // 80063C28
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063C2C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063C30
  c->lr=0x80063C38u; f_8005FD70(c); // 80063C34
  c->r[4]=c->r[31]|c->r[31]; // 80063C38
  c->r[3]=c->r[1]+0x00000014u; // 80063C3C
  c->r[5]=c->r[1]+0x00000008u; // 80063C40
  c->lr=0x80063C48u; f_8005FC60(c); // 80063C44
  c->r[3]=c->r[1]+0x00000014u; // 80063C48
  c->lr=0x80063C50u; f_80060DC8(c); // 80063C4C
  fcmp(c,0,c->f[1],c->f[31]); // 80063C50
  if (crb(c,0)) { goto L_80063C88; } // 80063C54
  c->r[3]=c->r[1]+0x00000014u; // 80063C58
  c->lr=0x80063C60u; f_80063CB8(c); // 80063C5C
  {uint32_t ea=c->r[2]+0xFFFF82B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063C60
  c->r[3]=c->r[1]+0x00000014u; // 80063C64
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 80063C68
  c->lr=0x80063C70u; f_800632C0(c); // 80063C6C
  c->f[2]=c->f[1]; // 80063C70
  c->r[3]=c->r[30]|c->r[30]; // 80063C74
  c->f[1]=c->f[31]; // 80063C78
  c->f[3]=c->f[29]; // 80063C7C
  c->f[4]=c->f[30]; // 80063C80
  c->lr=0x80063C88u; f_80063D10(c); // 80063C84
L_80063C88:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80063C88
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80063C8C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80063C90
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80063C94
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80063C98
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80063C9C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 80063CA0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80063CA4
  c->r[30]=R32(c->r[1]+0x00000058u); // 80063CA8
  c->lr=c->r[0]; // 80063CAC
  c->r[1]=c->r[1]+0x00000090u; // 80063CB0
  return; // 80063CB4
}

// fn_80063CB8
void f_80063CB8(Ctx* __restrict c) {
  trace_call(0x80063CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063CB8
  c->r[0]=c->lr; // 80063CBC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063CC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80063CC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80063CC8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80063CD0
  c->r[31]=c->r[3]|c->r[3]; // 80063CD4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 80063CD8
  c->lr=0x80063CE0u; f_80060B74(c); // 80063CDC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063CE0
  c->f[2]=c->f[1]; // 80063CE4
  c->f[0]=-c->f[0]; // 80063CE8
  c->f[1]=c->f[0]; // 80063CEC
  c->lr=0x80063CF4u; f_804E1378(c); // 80063CF0
  {uint32_t ea=c->r[2]+0xFFFF826Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80063CF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80063CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80063CFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80063D00
  c->lr=c->r[0]; // 80063D04
  c->r[1]=c->r[1]+0x00000010u; // 80063D08
  return; // 80063D0C
}

// fn_80063D10
void f_80063D10(Ctx* __restrict c) {
  trace_call(0x80063D10u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063D10
  c->r[0]=c->lr; // 80063D14
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80063D18
  c->r[4]=c->r[1]+0x00000058u; // 80063D1C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80063D20
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80063D24
  c->f[31]=c->f[1]; // 80063D28
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 80063D2C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 80063D30
  c->f[30]=c->f[3]; // 80063D34
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 80063D38
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 80063D3C
  c->f[29]=c->f[4]; // 80063D40
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 80063D44
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 80063D48
  c->f[28]=c->f[2]; // 80063D4C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80063D50
  c->r[31]=c->r[3]|c->r[3]; // 80063D54
  c->r[3]=c->r[3]+0x000001B8u; // 80063D58
  c->lr=0x80063D60u; f_80382F2C(c); // 80063D5C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063D60
  c->r[3]=c->r[1]+0x00000048u; // 80063D64
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063D68
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063D6C
  c->lr=0x80063D74u; f_8005FD70(c); // 80063D70
  c->r[3]=c->r[1]+0x00000048u; // 80063D74
  c->lr=0x80063D7Cu; f_80063CB8(c); // 80063D78
  {uint32_t ea=c->r[2]+0xFFFF82B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063D7C
  c->f[2]=c->f[31]; // 80063D80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80063D84
  c->lr=0x80063D8Cu; f_8006373C(c); // 80063D88
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063D8C
  c->f[31]=c->f[1]; // 80063D90
  fcmp(c,0,c->f[0],c->f[30]); // 80063D94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80063D98
  if (!crb(c,2)) { goto L_80063E00; } // 80063D9C
  fcmp(c,0,c->f[0],c->f[1]); // 80063DA0
  if (!crb(c,0)) { goto L_80063DD4; } // 80063DA4
  c->r[0]=0u+0x00000000u; // 80063DA8
  W8(c->r[1]+0x00000014u,c->r[0]); // 80063DAC
  c->r[3]=c->r[1]+0x00000014u; // 80063DB0
  c->lr=0x80063DB8u; f_8004714C(c); // 80063DB4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063DB8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80063DBC
  fcmp(c,0,c->f[0],c->f[31]); // 80063DC0
  if (!crb(c,1)) { goto L_80063DCC; } // 80063DC4
  goto L_80063E00; // 80063DC8
L_80063DCC:;
  c->f[31]=c->f[0]; // 80063DCC
  goto L_80063E00; // 80063DD0
L_80063DD4:;
  c->r[0]=0u+0x00000000u; // 80063DD4
  W8(c->r[1]+0x00000010u,c->r[0]); // 80063DD8
  c->r[3]=c->r[1]+0x00000010u; // 80063DDC
  c->lr=0x80063DE4u; f_8004714C(c); // 80063DE0
  c->f[0]=-c->f[30]; // 80063DE4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063DE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80063DEC
  fcmp(c,0,c->f[0],c->f[31]); // 80063DF0
  if (!crb(c,0)) { goto L_80063DFC; } // 80063DF4
  goto L_80063E00; // 80063DF8
L_80063DFC:;
  c->f[31]=c->f[0]; // 80063DFC
L_80063E00:;
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063E00
  c->r[3]=c->r[1]+0x0000003Cu; // 80063E04
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063E08
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063E0C
  c->lr=0x80063E14u; f_8005FD70(c); // 80063E10
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063E14
  c->r[3]=c->r[1]+0x0000003Cu; // 80063E18
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80063E1C
  c->lr=0x80063E24u; f_80063CB8(c); // 80063E20
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[31]); // 80063E24
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063E28
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063E2C
  c->r[3]=c->r[1]+0x00000030u; // 80063E30
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063E34
  c->lr=0x80063E3Cu; f_8005FD70(c); // 80063E38
  c->r[3]=c->r[1]+0x00000030u; // 80063E3C
  c->lr=0x80063E44u; f_800632C0(c); // 80063E40
  c->f[2]=c->f[28]; // 80063E44
  c->lr=0x80063E4Cu; f_8006373C(c); // 80063E48
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063E4C
  c->f[31]=c->f[1]; // 80063E50
  fcmp(c,0,c->f[0],c->f[29]); // 80063E54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80063E58
  if (!crb(c,2)) { goto L_80063EC0; } // 80063E5C
  fcmp(c,0,c->f[0],c->f[1]); // 80063E60
  if (!crb(c,0)) { goto L_80063E94; } // 80063E64
  c->r[0]=0u+0x00000000u; // 80063E68
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80063E6C
  c->r[3]=c->r[1]+0x0000000Cu; // 80063E70
  c->lr=0x80063E78u; f_8004714C(c); // 80063E74
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063E78
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80063E7C
  fcmp(c,0,c->f[0],c->f[31]); // 80063E80
  if (!crb(c,1)) { goto L_80063E8C; } // 80063E84
  goto L_80063EC0; // 80063E88
L_80063E8C:;
  c->f[31]=c->f[0]; // 80063E8C
  goto L_80063EC0; // 80063E90
L_80063E94:;
  c->r[0]=0u+0x00000000u; // 80063E94
  W8(c->r[1]+0x00000008u,c->r[0]); // 80063E98
  c->r[3]=c->r[1]+0x00000008u; // 80063E9C
  c->lr=0x80063EA4u; f_8004714C(c); // 80063EA0
  c->f[0]=-c->f[29]; // 80063EA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063EA8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80063EAC
  fcmp(c,0,c->f[0],c->f[31]); // 80063EB0
  if (!crb(c,0)) { goto L_80063EBC; } // 80063EB4
  goto L_80063EC0; // 80063EB8
L_80063EBC:;
  c->f[31]=c->f[0]; // 80063EBC
L_80063EC0:;
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063EC0
  c->r[3]=c->r[1]+0x00000024u; // 80063EC4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063EC8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063ECC
  c->lr=0x80063ED4u; f_8005FD70(c); // 80063ED0
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063ED4
  c->r[3]=c->r[1]+0x00000024u; // 80063ED8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80063EDC
  c->lr=0x80063EE4u; f_8005CD98(c); // 80063EE0
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[31]); // 80063EE4
  c->r[3]=c->r[31]+0x000001B8u; // 80063EE8
  c->lr=0x80063EF0u; f_80382F00(c); // 80063EEC
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063EF0
  c->r[3]=c->r[31]+0x000001B8u; // 80063EF4
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063EF8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80063EFC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 80063F00
  c->lr=0x80063F08u; f_804E18A0(c); // 80063F04
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80063F08
  c->r[3]=c->r[1]+0x00000018u; // 80063F0C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80063F10
  {uint32_t ea=c->r[1]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 80063F14
  c->lr=0x80063F1Cu; f_8005FD70(c); // 80063F18
  c->r[3]=c->r[31]+0x000001B8u; // 80063F1C
  c->r[4]=c->r[1]+0x00000018u; // 80063F20
  c->lr=0x80063F28u; f_8005CDC8(c); // 80063F24
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80063F28
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 80063F2C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 80063F30
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 80063F34
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 80063F38
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 80063F3C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 80063F40
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 80063F44
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 80063F48
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80063F4C
  c->lr=c->r[0]; // 80063F50
  c->r[1]=c->r[1]+0x000000D0u; // 80063F54
  return; // 80063F58
}

// fn_80063F5C
void f_80063F5C(Ctx* __restrict c) {
  trace_call(0x80063F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80063F5C
  c->r[0]=c->lr; // 80063F60
  W32(c->r[1]+0x00000094u,c->r[0]); // 80063F64
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80063F68
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80063F6C
  c->f[31]=c->f[3]; // 80063F70
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80063F74
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80063F78
  c->f[30]=c->f[2]; // 80063F7C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80063F80
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 80063F84
  c->f[29]=c->f[1]; // 80063F88
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80063F8C
  c->r[31]=c->r[4]|c->r[4]; // 80063F90
  c->r[4]=c->r[1]+0x00000020u; // 80063F94
  W32(c->r[1]+0x00000058u,c->r[30]); // 80063F98
  c->r[30]=c->r[3]|c->r[3]; // 80063F9C
  c->r[3]=c->r[3]+0x000001B8u; // 80063FA0
  c->lr=0x80063FA8u; f_80382F2C(c); // 80063FA4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80063FA8
  c->r[3]=c->r[1]+0x00000008u; // 80063FAC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80063FB0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80063FB4
  c->lr=0x80063FBCu; f_8005FD70(c); // 80063FB8
  c->r[4]=c->r[31]|c->r[31]; // 80063FBC
  c->r[3]=c->r[1]+0x00000014u; // 80063FC0
  c->r[5]=c->r[1]+0x00000008u; // 80063FC4
  c->lr=0x80063FCCu; f_8005FC60(c); // 80063FC8
  c->r[3]=c->r[1]+0x00000014u; // 80063FCC
  c->lr=0x80063FD4u; f_80060DC8(c); // 80063FD0
  fcmp(c,0,c->f[1],c->f[31]); // 80063FD4
  if (crb(c,0)) { goto L_8006400C; } // 80063FD8
  c->r[3]=c->r[1]+0x00000014u; // 80063FDC
  c->lr=0x80063FE4u; f_80063CB8(c); // 80063FE0
  {uint32_t ea=c->r[2]+0xFFFF82B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80063FE4
  c->r[3]=c->r[1]+0x00000014u; // 80063FE8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 80063FEC
  c->lr=0x80063FF4u; f_800632C0(c); // 80063FF0
  c->f[2]=c->f[1]; // 80063FF4
  c->r[3]=c->r[30]|c->r[30]; // 80063FF8
  c->f[1]=c->f[31]; // 80063FFC
  c->f[3]=c->f[29]; // 80064000
  c->f[4]=c->f[30]; // 80064004
  c->lr=0x8006400Cu; f_8006403C(c); // 80064008
L_8006400C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8006400C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80064010
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80064014
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80064018
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8006401C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80064020
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 80064024
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80064028
  c->r[30]=R32(c->r[1]+0x00000058u); // 8006402C
  c->lr=c->r[0]; // 80064030
  c->r[1]=c->r[1]+0x00000090u; // 80064034
  return; // 80064038
}

// fn_8006403C
void f_8006403C(Ctx* __restrict c) {
  trace_call(0x8006403Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006403C
  c->r[0]=c->lr; // 80064040
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80064044
  c->r[4]=c->r[1]+0x00000050u; // 80064048
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 8006404C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80064050
  c->f[31]=c->f[1]; // 80064054
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 80064058
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 8006405C
  c->f[30]=c->f[3]; // 80064060
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 80064064
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 80064068
  c->f[29]=c->f[4]; // 8006406C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 80064070
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 80064074
  c->f[28]=c->f[2]; // 80064078
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8006407C
  c->r[31]=c->r[3]|c->r[3]; // 80064080
  c->r[3]=c->r[3]+0x000001B8u; // 80064084
  c->lr=0x8006408Cu; f_80382F2C(c); // 80064088
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006408C
  c->r[3]=c->r[1]+0x00000040u; // 80064090
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064094
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064098
  c->lr=0x800640A0u; f_8005FD70(c); // 8006409C
  c->r[3]=c->r[1]+0x00000040u; // 800640A0
  c->lr=0x800640A8u; f_80063CB8(c); // 800640A4
  {uint32_t ea=c->r[2]+0xFFFF82B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800640A8
  c->f[2]=c->f[31]; // 800640AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800640B0
  c->lr=0x800640B8u; f_8006373C(c); // 800640B4
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800640B8
  c->f[31]=c->f[1]; // 800640BC
  fcmp(c,0,c->f[0],c->f[30]); // 800640C0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800640C4
  if (!crb(c,2)) { goto L_80064108; } // 800640C8
  c->f[0]=-c->f[30]; // 800640CC
  fcmp(c,0,c->f[1],c->f[0]); // 800640D0
  if (!crb(c,0)) { goto L_800640DC; } // 800640D4
  goto L_800640E0; // 800640D8
L_800640DC:;
  c->f[0]=c->f[31]; // 800640DC
L_800640E0:;
  fcmp(c,0,c->f[0],c->f[30]); // 800640E0
  if (!crb(c,1)) { goto L_800640EC; } // 800640E4
  goto L_800640F0; // 800640E8
L_800640EC:;
  c->f[30]=c->f[0]; // 800640EC
L_800640F0:;
  c->r[0]=0u+0x00000000u; // 800640F0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800640F4
  c->r[3]=c->r[1]+0x0000000Cu; // 800640F8
  c->lr=0x80064100u; f_8004714C(c); // 800640FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064100
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[0]); // 80064104
L_80064108:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064108
  c->r[3]=c->r[1]+0x00000034u; // 8006410C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064110
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064114
  c->lr=0x8006411Cu; f_8005FD70(c); // 80064118
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006411C
  c->r[3]=c->r[1]+0x00000034u; // 80064120
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80064124
  c->lr=0x8006412Cu; f_80063CB8(c); // 80064128
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[31]); // 8006412C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064130
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064134
  c->r[3]=c->r[1]+0x00000028u; // 80064138
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 8006413C
  c->lr=0x80064144u; f_8005FD70(c); // 80064140
  c->r[3]=c->r[1]+0x00000028u; // 80064144
  c->lr=0x8006414Cu; f_800632C0(c); // 80064148
  c->f[2]=c->f[28]; // 8006414C
  c->lr=0x80064154u; f_8006373C(c); // 80064150
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064154
  c->f[31]=c->f[1]; // 80064158
  fcmp(c,0,c->f[0],c->f[29]); // 8006415C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80064160
  if (!crb(c,2)) { goto L_800641A4; } // 80064164
  c->f[0]=-c->f[29]; // 80064168
  fcmp(c,0,c->f[1],c->f[0]); // 8006416C
  if (!crb(c,0)) { goto L_80064178; } // 80064170
  goto L_8006417C; // 80064174
L_80064178:;
  c->f[0]=c->f[31]; // 80064178
L_8006417C:;
  fcmp(c,0,c->f[0],c->f[29]); // 8006417C
  if (!crb(c,1)) { goto L_80064188; } // 80064180
  goto L_8006418C; // 80064184
L_80064188:;
  c->f[29]=c->f[0]; // 80064188
L_8006418C:;
  c->r[0]=0u+0x00000000u; // 8006418C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80064190
  c->r[3]=c->r[1]+0x00000008u; // 80064194
  c->lr=0x8006419Cu; f_8004714C(c); // 80064198
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006419C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[0]); // 800641A0
L_800641A4:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800641A4
  c->r[3]=c->r[1]+0x0000001Cu; // 800641A8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800641AC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 800641B0
  c->lr=0x800641B8u; f_8005FD70(c); // 800641B4
  {uint32_t ea=c->r[2]+0xFFFF8264u; c->f[0]=c->ps1[0]=RF32(ea);} // 800641B8
  c->r[3]=c->r[1]+0x0000001Cu; // 800641BC
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 800641C0
  c->lr=0x800641C8u; f_8005CD98(c); // 800641C4
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[31]); // 800641C8
  c->r[3]=c->r[31]+0x000001B8u; // 800641CC
  c->lr=0x800641D4u; f_80382F00(c); // 800641D0
  {uint32_t ea=c->r[2]+0xFFFF8268u; c->f[0]=c->ps1[0]=RF32(ea);} // 800641D4
  c->r[3]=c->r[31]+0x000001B8u; // 800641D8
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[3]=c->ps1[3]=RF32(ea);} // 800641DC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 800641E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 800641E4
  c->lr=0x800641ECu; f_804E18A0(c); // 800641E8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800641EC
  c->r[3]=c->r[1]+0x00000010u; // 800641F0
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800641F4
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800641F8
  c->lr=0x80064200u; f_8005FD70(c); // 800641FC
  c->r[3]=c->r[31]+0x000001B8u; // 80064200
  c->r[4]=c->r[1]+0x00000010u; // 80064204
  c->lr=0x8006420Cu; f_8005CDC8(c); // 80064208
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8006420C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 80064210
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 80064214
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 80064218
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 8006421C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 80064220
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 80064224
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 80064228
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 8006422C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80064230
  c->lr=c->r[0]; // 80064234
  c->r[1]=c->r[1]+0x000000D0u; // 80064238
  return; // 8006423C
}

// fn_80064240
void f_80064240(Ctx* __restrict c) {
  trace_call(0x80064240u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064240
  c->r[0]=c->lr; // 80064244
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80064248
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 8006424C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80064250
  c->f[31]=c->f[3]; // 80064254
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80064258
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8006425C
  c->f[30]=c->f[2]; // 80064260
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80064264
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80064268
  c->f[29]=c->f[1]; // 8006426C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80064270
  c->r[31]=c->r[4]|c->r[4]; // 80064274
  W32(c->r[1]+0x00000088u,c->r[30]); // 80064278
  c->r[30]=c->r[3]|c->r[3]; // 8006427C
  c->lr=0x80064284u; f_8033FE4C(c); // 80064280
  c->r[4]=c->r[30]|c->r[30]; // 80064284
  c->r[3]=c->r[3]+0x00000104u; // 80064288
  c->lr=0x80064290u; f_8032EFEC(c); // 8006428C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80064290
  c->r[3]=c->r[1]+0x00000068u; // 80064294
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80064298
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8006429C
  c->lr=0x800642A4u; f_8005FD70(c); // 800642A0
  c->r[3]=c->r[1]+0x00000074u; // 800642A4
  c->r[4]=c->r[1]+0x00000068u; // 800642A8
  c->lr=0x800642B0u; f_8005DC84(c); // 800642AC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800642B0
  c->r[3]=c->r[1]+0x00000050u; // 800642B4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800642B8
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800642BC
  c->lr=0x800642C4u; f_8005FD70(c); // 800642C0
  c->f[1]=c->f[29]; // 800642C4
  c->r[3]=c->r[1]+0x0000005Cu; // 800642C8
  c->r[4]=c->r[1]+0x00000050u; // 800642CC
  c->lr=0x800642D4u; f_8005ED34(c); // 800642D0
  c->r[3]=c->r[1]+0x00000074u; // 800642D4
  c->r[5]=c->r[1]+0x0000005Cu; // 800642D8
  c->r[4]=c->r[3]|c->r[3]; // 800642DC
  c->lr=0x800642E4u; f_8005ED10(c); // 800642E0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800642E4
  c->r[3]=c->r[1]+0x00000038u; // 800642E8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800642EC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800642F0
  c->lr=0x800642F8u; f_8005FD70(c); // 800642F4
  c->f[1]=c->f[30]; // 800642F8
  c->r[3]=c->r[1]+0x00000044u; // 800642FC
  c->r[4]=c->r[1]+0x00000038u; // 80064300
  c->lr=0x80064308u; f_8005ED34(c); // 80064304
  c->r[3]=c->r[1]+0x00000074u; // 80064308
  c->r[5]=c->r[1]+0x00000044u; // 8006430C
  c->r[4]=c->r[3]|c->r[3]; // 80064310
  c->lr=0x80064318u; f_8005ED10(c); // 80064314
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064318
  c->r[3]=c->r[1]+0x00000020u; // 8006431C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064320
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064324
  c->lr=0x8006432Cu; f_8005FD70(c); // 80064328
  c->f[1]=c->f[31]; // 8006432C
  c->r[3]=c->r[1]+0x0000002Cu; // 80064330
  c->r[4]=c->r[1]+0x00000020u; // 80064334
  c->lr=0x8006433Cu; f_8005ED34(c); // 80064338
  c->r[3]=c->r[1]+0x00000074u; // 8006433C
  c->r[5]=c->r[1]+0x0000002Cu; // 80064340
  c->r[4]=c->r[3]|c->r[3]; // 80064344
  c->lr=0x8006434Cu; f_8005ED10(c); // 80064348
  cmps(c,0,(int32_t)c->r[31],0); // 8006434C
  if (crb(c,2)) { goto L_8006438C; } // 80064350
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064354
  c->r[3]=c->r[1]+0x00000008u; // 80064358
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006435C
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064360
  c->lr=0x80064368u; f_8005FD70(c); // 80064364
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064368
  c->r[3]=c->r[1]+0x00000014u; // 8006436C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064370
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064374
  c->lr=0x8006437Cu; f_8005FD70(c); // 80064378
  c->r[3]=c->r[30]|c->r[30]; // 8006437C
  c->r[4]=c->r[1]+0x00000014u; // 80064380
  c->r[5]=c->r[1]+0x00000008u; // 80064384
  c->lr=0x8006438Cu; f_8005FD80(c); // 80064388
L_8006438C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006438C
  c->r[4]=c->r[1]+0x00000074u; // 80064390
  c->lr=0x80064398u; f_8005CDC8(c); // 80064394
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80064398
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 8006439C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800643A0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800643A4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800643A8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800643AC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800643B0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800643B4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800643B8
  c->lr=c->r[0]; // 800643BC
  c->r[1]=c->r[1]+0x000000C0u; // 800643C0
  return; // 800643C4
}

// fn_800643C8
void f_800643C8(Ctx* __restrict c) {
  trace_call(0x800643C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800643C8
  c->r[0]=c->lr; // 800643CC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800643D0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800643D4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800643D8
  c->f[31]=c->f[3]; // 800643DC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800643E0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800643E4
  c->f[30]=c->f[2]; // 800643E8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800643EC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800643F0
  c->f[29]=c->f[1]; // 800643F4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800643F8
  c->r[31]=c->r[4]|c->r[4]; // 800643FC
  W32(c->r[1]+0x00000088u,c->r[30]); // 80064400
  c->r[30]=c->r[3]|c->r[3]; // 80064404
  c->lr=0x8006440Cu; f_8033FE4C(c); // 80064408
  c->r[4]=c->r[30]|c->r[30]; // 8006440C
  c->r[3]=c->r[3]+0x0000012Cu; // 80064410
  c->lr=0x80064418u; f_8032EFEC(c); // 80064414
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80064418
  c->r[3]=c->r[1]+0x00000068u; // 8006441C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80064420
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80064424
  c->lr=0x8006442Cu; f_8005FD70(c); // 80064428
  c->r[3]=c->r[1]+0x00000074u; // 8006442C
  c->r[4]=c->r[1]+0x00000068u; // 80064430
  c->lr=0x80064438u; f_8005DC84(c); // 80064434
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064438
  c->r[3]=c->r[1]+0x00000050u; // 8006443C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064440
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064444
  c->lr=0x8006444Cu; f_8005FD70(c); // 80064448
  c->f[1]=c->f[29]; // 8006444C
  c->r[3]=c->r[1]+0x0000005Cu; // 80064450
  c->r[4]=c->r[1]+0x00000050u; // 80064454
  c->lr=0x8006445Cu; f_8005ED34(c); // 80064458
  c->r[3]=c->r[1]+0x00000074u; // 8006445C
  c->r[5]=c->r[1]+0x0000005Cu; // 80064460
  c->r[4]=c->r[3]|c->r[3]; // 80064464
  c->lr=0x8006446Cu; f_8005ED10(c); // 80064468
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006446C
  c->r[3]=c->r[1]+0x00000038u; // 80064470
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80064474
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80064478
  c->lr=0x80064480u; f_8005FD70(c); // 8006447C
  c->f[1]=c->f[30]; // 80064480
  c->r[3]=c->r[1]+0x00000044u; // 80064484
  c->r[4]=c->r[1]+0x00000038u; // 80064488
  c->lr=0x80064490u; f_8005ED34(c); // 8006448C
  c->r[3]=c->r[1]+0x00000074u; // 80064490
  c->r[5]=c->r[1]+0x00000044u; // 80064494
  c->r[4]=c->r[3]|c->r[3]; // 80064498
  c->lr=0x800644A0u; f_8005ED10(c); // 8006449C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800644A0
  c->r[3]=c->r[1]+0x00000020u; // 800644A4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800644A8
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800644AC
  c->lr=0x800644B4u; f_8005FD70(c); // 800644B0
  c->f[1]=c->f[31]; // 800644B4
  c->r[3]=c->r[1]+0x0000002Cu; // 800644B8
  c->r[4]=c->r[1]+0x00000020u; // 800644BC
  c->lr=0x800644C4u; f_8005ED34(c); // 800644C0
  c->r[3]=c->r[1]+0x00000074u; // 800644C4
  c->r[5]=c->r[1]+0x0000002Cu; // 800644C8
  c->r[4]=c->r[3]|c->r[3]; // 800644CC
  c->lr=0x800644D4u; f_8005ED10(c); // 800644D0
  cmps(c,0,(int32_t)c->r[31],0); // 800644D4
  if (crb(c,2)) { goto L_80064514; } // 800644D8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800644DC
  c->r[3]=c->r[1]+0x00000008u; // 800644E0
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800644E4
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800644E8
  c->lr=0x800644F0u; f_8005FD70(c); // 800644EC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800644F0
  c->r[3]=c->r[1]+0x00000014u; // 800644F4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800644F8
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800644FC
  c->lr=0x80064504u; f_8005FD70(c); // 80064500
  c->r[3]=c->r[30]|c->r[30]; // 80064504
  c->r[4]=c->r[1]+0x00000014u; // 80064508
  c->r[5]=c->r[1]+0x00000008u; // 8006450C
  c->lr=0x80064514u; f_8005FD80(c); // 80064510
L_80064514:;
  c->r[3]=c->r[30]|c->r[30]; // 80064514
  c->r[4]=c->r[1]+0x00000074u; // 80064518
  c->lr=0x80064520u; f_8005CDC8(c); // 8006451C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80064520
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80064524
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80064528
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 8006452C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 80064530
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 80064534
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 80064538
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8006453C
  c->r[30]=R32(c->r[1]+0x00000088u); // 80064540
  c->lr=c->r[0]; // 80064544
  c->r[1]=c->r[1]+0x000000C0u; // 80064548
  return; // 8006454C
}

// fn_80064550
void f_80064550(Ctx* __restrict c) {
  trace_call(0x80064550u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064550
  c->r[0]=c->lr; // 80064554
  c->r[4]=0u+0x00000000u; // 80064558
  W32(c->r[1]+0x00000044u,c->r[0]); // 8006455C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80064560
  c->r[31]=c->r[3]|c->r[3]; // 80064564
  c->r[3]=c->r[1]+0x00000008u; // 80064568
  c->lr=0x80064570u; f_80064240(c); // 8006456C
  c->r[3]=c->r[31]|c->r[31]; // 80064570
  c->r[4]=c->r[1]+0x00000008u; // 80064574
  c->lr=0x8006457Cu; f_80060878(c); // 80064578
  c->r[0]=R32(c->r[1]+0x00000044u); // 8006457C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80064580
  c->lr=c->r[0]; // 80064584
  c->r[1]=c->r[1]+0x00000040u; // 80064588
  return; // 8006458C
}

// fn_80064590
void f_80064590(Ctx* __restrict c) {
  trace_call(0x80064590u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064590
  c->r[0]=c->lr; // 80064594
  W32(c->r[1]+0x00000094u,c->r[0]); // 80064598
  c->r[11]=c->r[1]+0x00000080u; // 8006459C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800645A0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800645A4
  c->lr=0x800645ACu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800645A8
  c->f[31]=c->f[1]; // 800645AC
  c->r[28]=c->r[3]|c->r[3]; // 800645B0
  c->r[29]=c->r[4]|c->r[4]; // 800645B4
  c->r[30]=c->r[5]|c->r[5]; // 800645B8
  c->r[31]=c->r[6]|c->r[6]; // 800645BC
  c->r[4]=c->r[28]|c->r[28]; // 800645C0
  c->r[5]=c->r[29]|c->r[29]; // 800645C4
  c->r[3]=c->r[1]+0x00000050u; // 800645C8
  c->lr=0x800645D0u; f_80064698(c); // 800645CC
  c->r[6]=R32(c->r[30]+0x00000000u); // 800645D0
  c->r[3]=c->r[1]+0x00000050u; // 800645D4
  c->r[7]=R32(c->r[30]+0x00000004u); // 800645D8
  c->r[4]=c->r[1]+0x00000040u; // 800645DC
  c->r[0]=R32(c->r[30]+0x00000008u); // 800645E0
  c->r[5]=c->r[1]+0x00000008u; // 800645E4
  W32(c->r[1]+0x00000040u,c->r[6]); // 800645E8
  c->r[6]=0u+0x00000000u; // 800645EC
  W32(c->r[1]+0x00000044u,c->r[7]); // 800645F0
  W32(c->r[1]+0x00000048u,c->r[0]); // 800645F4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 800645F8
  c->lr=0x80064600u; f_804E3138(c); // 800645FC
  cmps(c,0,(int32_t)c->r[3],0); // 80064600
  if (crb(c,2)) { goto L_80064674; } // 80064604
  c->r[4]=c->r[29]|c->r[29]; // 80064608
  c->r[5]=c->r[28]|c->r[28]; // 8006460C
  c->r[3]=c->r[1]+0x00000030u; // 80064610
  c->lr=0x80064618u; f_8005FC60(c); // 80064614
  c->r[3]=c->r[1]+0x00000030u; // 80064618
  c->lr=0x80064620u; f_80060DC8(c); // 8006461C
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064620
  fcmp(c,0,c->f[1],c->f[0]); // 80064624
  if (!crb(c,1)) { goto L_80064640; } // 80064628
  c->r[5]=0u+0x806A0000u; // 8006462C
  c->r[3]=c->r[1]+0x00000024u; // 80064630
  c->r[4]=c->r[1]+0x00000030u; // 80064634
  c->r[5]=c->r[5]+0x00000AA8u; // 80064638
  c->lr=0x80064640u; f_8030E0BC(c); // 8006463C
L_80064640:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80064640
  c->r[3]=c->r[1]+0x0000000Cu; // 80064644
  c->r[4]=c->r[1]+0x00000030u; // 80064648
  c->lr=0x80064650u; f_8005ED34(c); // 8006464C
  c->r[4]=c->r[28]|c->r[28]; // 80064650
  c->r[3]=c->r[1]+0x00000018u; // 80064654
  c->r[5]=c->r[1]+0x0000000Cu; // 80064658
  c->lr=0x80064660u; f_8005ED10(c); // 8006465C
  c->r[3]=c->r[31]|c->r[31]; // 80064660
  c->r[4]=c->r[1]+0x00000018u; // 80064664
  c->lr=0x8006466Cu; f_8005DC84(c); // 80064668
  c->r[3]=0u+0x00000001u; // 8006466C
  goto L_80064678; // 80064670
L_80064674:;
  c->r[3]=0u+0x00000000u; // 80064674
L_80064678:;
  c->r[11]=c->r[1]+0x00000080u; // 80064678
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8006467C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80064680
  c->lr=0x80064688u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80064684
  c->r[0]=R32(c->r[1]+0x00000094u); // 80064688
  c->lr=c->r[0]; // 8006468C
  c->r[1]=c->r[1]+0x00000090u; // 80064690
  return; // 80064694
}

// fn_80064698
void f_80064698(Ctx* __restrict c) {
  trace_call(0x80064698u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 80064698
  c->r[8]=R32(c->r[4]+0x00000004u); // 8006469C
  c->r[7]=R32(c->r[4]+0x00000008u); // 800646A0
  c->r[6]=R32(c->r[5]+0x00000000u); // 800646A4
  c->r[4]=R32(c->r[5]+0x00000004u); // 800646A8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800646AC
  W32(c->r[3]+0x00000000u,c->r[9]); // 800646B0
  W32(c->r[3]+0x00000004u,c->r[8]); // 800646B4
  W32(c->r[3]+0x00000008u,c->r[7]); // 800646B8
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800646BC
  W32(c->r[3]+0x00000010u,c->r[4]); // 800646C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800646C4
  return; // 800646C8
}

// fn_800646CC
void f_800646CC(Ctx* __restrict c) {
  trace_call(0x800646CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800646CC
  c->r[0]=c->lr; // 800646D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800646D4
  c->r[0]=c->r[4]|c->r[4]; // 800646D8
  c->r[4]=c->r[3]|c->r[3]; // 800646DC
  c->r[3]=c->r[1]+0x00000020u; // 800646E0
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800646E4
  c->r[28]=c->r[5]|c->r[5]; // 800646E8
  c->r[29]=c->r[6]|c->r[6]; // 800646EC
  c->r[30]=c->r[7]|c->r[7]; // 800646F0
  c->r[31]=c->r[8]|c->r[8]; // 800646F4
  c->r[5]=c->r[0]|c->r[0]; // 800646F8
  c->lr=0x80064700u; f_80064698(c); // 800646FC
  c->r[4]=c->r[28]|c->r[28]; // 80064700
  c->r[5]=c->r[29]|c->r[29]; // 80064704
  c->r[6]=c->r[30]|c->r[30]; // 80064708
  c->r[3]=c->r[1]+0x00000010u; // 8006470C
  c->lr=0x80064714u; f_804E1BE0(c); // 80064710
  c->r[6]=c->r[31]|c->r[31]; // 80064714
  c->r[3]=c->r[1]+0x00000020u; // 80064718
  c->r[4]=c->r[1]+0x00000010u; // 8006471C
  c->r[5]=c->r[1]+0x00000008u; // 80064720
  c->lr=0x80064728u; f_804E2D80(c); // 80064724
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80064728
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8006472C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80064730
  c->r[0]=R32(c->r[1]+0x00000054u); // 80064734
  c->lr=c->r[0]; // 80064738
  c->r[1]=c->r[1]+0x00000050u; // 8006473C
  return; // 80064740
}

// fn_80064744
void f_80064744(Ctx* __restrict c) {
  trace_call(0x80064744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064744
  c->r[0]=c->lr; // 80064748
  cmps(c,0,(int32_t)c->r[5],0); // 8006474C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064750
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064754
  c->r[30]=c->r[3]|c->r[3]; // 80064758
  c->r[31]=c->r[4]|c->r[4]; // 8006475C
  if (!crb(c,2)) { goto L_80064774; } // 80064760
  c->r[3]=c->r[3]+0x00000354u; // 80064764
  c->lr=0x8006476Cu; f_800667BC(c); // 80064768
  cmps(c,0,(int32_t)c->r[3],0); // 8006476C
  if (!crb(c,2)) { goto L_8006478C; } // 80064770
L_80064774:;
  c->lr=0x80064778u; f_80085910(c); // 80064774
  c->r[4]=c->r[31]|c->r[31]; // 80064778
  c->lr=0x80064780u; f_800860D8(c); // 8006477C
  c->r[4]=c->r[3]|c->r[3]; // 80064780
  c->r[3]=c->r[30]|c->r[30]; // 80064784
  c->lr=0x8006478Cu; f_800647A0(c); // 80064788
L_8006478C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006478C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064790
  c->lr=c->r[0]; // 80064794
  c->r[1]=c->r[1]+0x00000010u; // 80064798
  return; // 8006479C
}

// fn_800647A0
void f_800647A0(Ctx* __restrict c) {
  trace_call(0x800647A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800647A0
  c->r[0]=c->lr; // 800647A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800647A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800647AC
  c->r[31]=c->r[3]|c->r[3]; // 800647B0
  c->r[30]=c->r[4]|c->r[4]; // 800647B4
  c->r[3]=c->r[3]+0x00000354u; // 800647B8
  c->lr=0x800647C0u; f_8006665C(c); // 800647BC
  cmps(c,0,(int32_t)c->r[30],0); // 800647C0
  if (crb(c,2)) { goto L_800647EC; } // 800647C4
  c->r[3]=c->r[30]|c->r[30]; // 800647C8
  c->lr=0x800647D0u; f_80064800(c); // 800647CC
  cmps(c,0,(int32_t)c->r[3],0); // 800647D0
  if (crb(c,2)) { goto L_800647EC; } // 800647D4
  c->r[31]=R32(c->r[31]+0x0000044Cu); // 800647D8
  c->r[3]=c->r[30]|c->r[30]; // 800647DC
  c->lr=0x800647E4u; f_80064800(c); // 800647E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800647E4
  W32(c->r[31]+0x00000088u,c->r[0]); // 800647E8
L_800647EC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800647EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800647F0
  c->lr=c->r[0]; // 800647F4
  c->r[1]=c->r[1]+0x00000010u; // 800647F8
  return; // 800647FC
}

// fn_80064800
void f_80064800(Ctx* __restrict c) {
  trace_call(0x80064800u);
  c->r[0]=R32(c->r[3]+0x00000020u); // 80064800
  cmps(c,0,(int32_t)c->r[0],0); // 80064804
  if (crb(c,2)) { goto L_80064814; } // 80064808
  c->r[3]=c->r[3]+c->r[0]; // 8006480C
  return; // 80064810
L_80064814:;
  c->r[3]=0u+0x00000000u; // 80064814
  return; // 80064818
}

// fn_8006481C
void f_8006481C(Ctx* __restrict c) {
  trace_call(0x8006481Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006481C
  c->r[0]=c->lr; // 80064820
  c->r[4]=R32(c->r[3]+0x00000440u); // 80064824
  c->r[5]=0u+0x80690000u; // 80064828
  W32(c->r[1]+0x00000114u,c->r[0]); // 8006482C
  c->r[5]=c->r[5]+0xFFFFB8D8u; // 80064830
  c->r[3]=c->r[1]+0x00000008u; // 80064834
  c->r[6]=R32(c->r[4]+0x00000034u); // 80064838
  c->r[4]=c->r[5]+0x00000107u; // 8006483C
  c->r[5]=c->r[5]+0x0000003Du; // 80064840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80064844
  c->lr=0x8006484Cu; f_803B1FC8(c); // 80064848
  c->r[3]=0u+0x80740000u; // 8006484C
  c->r[4]=c->r[1]+0x00000008u; // 80064850
  c->r[3]=c->r[3]+0x00005258u; // 80064854
  c->lr=0x8006485Cu; f_80313128(c); // 80064858
  c->lr=0x80064860u; f_80048F58(c); // 8006485C
  c->r[0]=R32(c->r[1]+0x00000114u); // 80064860
  c->lr=c->r[0]; // 80064864
  c->r[1]=c->r[1]+0x00000110u; // 80064868
  return; // 8006486C
}

// fn_80064870
void f_80064870(Ctx* __restrict c) {
  trace_call(0x80064870u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064870
  c->r[0]=c->lr; // 80064874
  c->r[5]=0u+0x00000000u; // 80064878
  c->r[3]=c->r[3]+0x000000FCu; // 8006487C
  W32(c->r[1]+0x00000094u,c->r[0]); // 80064880
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064884
  c->r[30]=c->r[4]|c->r[4]; // 80064888
  c->lr=0x80064890u; f_802E5F54(c); // 8006488C
  cmps(c,0,(int32_t)c->r[3],0); // 80064890
  if (crb(c,2)) { goto L_8006489C; } // 80064894
  goto L_800648E0; // 80064898
L_8006489C:;
  c->r[31]=0u+0x80690000u; // 8006489C
  c->r[5]=c->r[30]|c->r[30]; // 800648A0
  c->r[31]=c->r[31]+0xFFFFB8D8u; // 800648A4
  c->r[3]=c->r[1]+0x00000008u; // 800648A8
  c->r[4]=c->r[31]+0x00000111u; // 800648AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800648B0
  c->lr=0x800648B8u; f_803B1FC8(c); // 800648B4
  c->r[3]=0u+0x80740000u; // 800648B8
  c->r[4]=c->r[31]+0x0000006Fu; // 800648BC
  c->r[3]=c->r[3]+0x00004FD0u; // 800648C0
  c->r[5]=c->r[1]+0x00000008u; // 800648C4
  c->r[6]=0u+0x00000000u; // 800648C8
  c->lr=0x800648D0u; f_8005A7B0(c); // 800648CC
  cmps(c,0,(int32_t)c->r[3],0); // 800648D0
  if (crb(c,2)) { goto L_800648DC; } // 800648D4
  goto L_800648E0; // 800648D8
L_800648DC:;
  c->r[3]=0u+0x00000000u; // 800648DC
L_800648E0:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800648E0
  c->r[0]=R32(c->r[1]+0x00000094u); // 800648E4
  c->lr=c->r[0]; // 800648E8
  c->r[1]=c->r[1]+0x00000090u; // 800648EC
  return; // 800648F0
}

// fn_800648F4
void f_800648F4(Ctx* __restrict c) {
  trace_call(0x800648F4u);
  c->r[5]=0u+0x00000000u; // 800648F4
  c->r[3]=c->r[3]+0x000000FCu; // 800648F8
  f_802E5F54(c); return; // 800648FC
}

// fn_80064900
void f_80064900(Ctx* __restrict c) {
  trace_call(0x80064900u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064900
  c->r[0]=c->lr; // 80064904
  W32(c->r[1]+0x00000034u,c->r[0]); // 80064908
  c->r[11]=c->r[1]+0x00000030u; // 8006490C
  c->lr=0x80064914u; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 80064910
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064914
  c->f[29]=c->f[1]; // 80064918
  c->r[31]=c->r[4]|c->r[4]; // 8006491C
  c->f[30]=c->f[2]; // 80064920
  c->r[30]=c->r[3]|c->r[3]; // 80064924
  c->f[31]=c->f[3]; // 80064928
  c->r[4]=0u+0x00000000u; // 8006492C
  c->lr=0x80064934u; f_800647A0(c); // 80064930
  c->f[1]=c->f[29]; // 80064934
  c->r[3]=R32(c->r[30]+0x00000404u); // 80064938
  c->f[2]=c->f[30]; // 8006493C
  c->r[4]=c->r[31]|c->r[31]; // 80064940
  c->f[3]=c->f[31]; // 80064944
  c->lr=0x8006494Cu; f_802E8A64(c); // 80064948
  c->r[11]=c->r[1]+0x00000030u; // 8006494C
  c->lr=0x80064954u; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 80064950
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80064954
  c->r[0]=R32(c->r[1]+0x00000034u); // 80064958
  c->lr=c->r[0]; // 8006495C
  c->r[1]=c->r[1]+0x00000030u; // 80064960
  return; // 80064964
}

// fn_80064968
void f_80064968(Ctx* __restrict c) {
  trace_call(0x80064968u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064968
  f_802E91C8(c); return; // 8006496C
}

// fn_80064970
void f_80064970(Ctx* __restrict c) {
  trace_call(0x80064970u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064970
  c->r[0]=c->lr; // 80064974
  W32(c->r[1]+0x00000034u,c->r[0]); // 80064978
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8006497C
  c->f[31]=c->f[2]; // 80064980
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80064984
  c->f[30]=c->f[1]; // 80064988
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006498C
  c->r[28]=c->r[3]|c->r[3]; // 80064990
  c->r[29]=c->r[4]|c->r[4]; // 80064994
  c->r[30]=c->r[5]|c->r[5]; // 80064998
  c->r[31]=c->r[6]|c->r[6]; // 8006499C
  c->r[4]=c->r[7]|c->r[7]; // 800649A0
  c->r[3]=c->r[3]+0x000000FCu; // 800649A4
  c->lr=0x800649ACu; f_802E6E50(c); // 800649A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800649AC
  c->r[3]=c->r[1]+0x00000008u; // 800649B0
  c->lr=0x800649B8u; f_8005C9DC(c); // 800649B4
  c->f[1]=c->f[30]; // 800649B8
  c->r[7]=c->r[3]|c->r[3]; // 800649BC
  c->f[2]=c->f[31]; // 800649C0
  c->r[3]=R32(c->r[28]+0x00000404u); // 800649C4
  c->r[4]=c->r[29]|c->r[29]; // 800649C8
  c->r[5]=c->r[30]|c->r[30]; // 800649CC
  c->r[6]=c->r[31]|c->r[31]; // 800649D0
  c->lr=0x800649D8u; f_802E955C(c); // 800649D4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800649D8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800649DC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800649E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800649E4
  c->lr=c->r[0]; // 800649E8
  c->r[1]=c->r[1]+0x00000030u; // 800649EC
  return; // 800649F0
}

// fn_800649F4
void f_800649F4(Ctx* __restrict c) {
  trace_call(0x800649F4u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 800649F4
  f_802E9A20(c); return; // 800649F8
}

// fn_800649FC
void f_800649FC(Ctx* __restrict c) {
  trace_call(0x800649FCu);
  c->r[3]=R32(c->r[3]+0x00000404u); // 800649FC
  f_802E9FE8(c); return; // 80064A00
}

// fn_80064A04
void f_80064A04(Ctx* __restrict c) {
  trace_call(0x80064A04u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A04
  f_802E9FB8(c); return; // 80064A08
}

// fn_80064A0C
void f_80064A0C(Ctx* __restrict c) {
  trace_call(0x80064A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064A0C
  c->r[0]=c->lr; // 80064A10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064A14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80064A18
  c->r[31]=c->r[3]|c->r[3]; // 80064A1C
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A20
  c->lr=0x80064A28u; f_802EA380(c); // 80064A24
  cmps(c,0,(int32_t)c->r[3],0); // 80064A28
  c->r[4]=c->r[3]|c->r[3]; // 80064A2C
  if (crb(c,2)) { goto L_80064A3C; } // 80064A30
  c->r[3]=R32(c->r[31]+0x00000404u); // 80064A34
  c->lr=0x80064A3Cu; f_802E9FE8(c); // 80064A38
L_80064A3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80064A40
  c->lr=c->r[0]; // 80064A44
  c->r[1]=c->r[1]+0x00000010u; // 80064A48
  return; // 80064A4C
}

// fn_80064A50
void f_80064A50(Ctx* __restrict c) {
  trace_call(0x80064A50u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A50
  f_802E9D04(c); return; // 80064A54
}

// fn_80064A58
void f_80064A58(Ctx* __restrict c) {
  trace_call(0x80064A58u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A58
  f_802E9F0C(c); return; // 80064A5C
}

// fn_80064A60
void f_80064A60(Ctx* __restrict c) {
  trace_call(0x80064A60u);
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A60
  f_802E8A3C(c); return; // 80064A64
}

// fn_80064A68
void f_80064A68(Ctx* __restrict c) {
  trace_call(0x80064A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064A68
  c->r[0]=c->lr; // 80064A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064A70
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 80064A74
  c->f[31]=c->f[1]; // 80064A78
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064A7C
  c->lr=0x80064A84u; f_802EA2AC(c); // 80064A80
  c->f[1]=c->f[31]; // 80064A84
  c->lr=0x80064A8Cu; f_802ECD10(c); // 80064A88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064A8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 80064A90
  c->lr=c->r[0]; // 80064A94
  c->r[1]=c->r[1]+0x00000010u; // 80064A98
  return; // 80064A9C
}

// fn_80064AA0
void f_80064AA0(Ctx* __restrict c) {
  trace_call(0x80064AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064AA0
  c->r[0]=c->lr; // 80064AA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80064AA8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80064AAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80064AB0
  c->f[30]=c->f[1]; // 80064AB4
  c->r[3]=R32(c->r[3]+0x00000404u); // 80064AB8
  c->f[31]=c->f[2]; // 80064ABC
  c->lr=0x80064AC4u; f_802EA4B0(c); // 80064AC0
  fcmp(c,0,c->f[30],c->f[1]); // 80064AC4
  c->r[3]=0u+0x00000000u; // 80064AC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80064ACC
  if (!crb(c,2)) { goto L_80064AE4; } // 80064AD0
  fcmp(c,0,c->f[1],c->f[31]); // 80064AD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80064AD8
  if (!crb(c,2)) { goto L_80064AE4; } // 80064ADC
  c->r[3]=0u+0x00000001u; // 80064AE0
L_80064AE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80064AE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80064AE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80064AEC
  c->lr=c->r[0]; // 80064AF0
  c->r[1]=c->r[1]+0x00000020u; // 80064AF4
  return; // 80064AF8
}

// fn_80064AFC
void f_80064AFC(Ctx* __restrict c) {
  trace_call(0x80064AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064AFC
  c->r[0]=c->lr; // 80064B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064B04
  c->lr=0x80064B0Cu; f_80052EE8(c); // 80064B08
  c->r[0]=R32(c->r[3]+0x00000028u); // 80064B0C
  cmps(c,0,(int32_t)c->r[0],0); // 80064B10
  if (crb(c,2)) { goto L_80064B30; } // 80064B14
  c->r[3]=c->r[0]|c->r[0]; // 80064B18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80064B1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80064B20
  c->ctr=c->r[12]; // 80064B24
  if (true) { c->lr=0x80064B2Cu; dispatch(c,c->ctr); } // 80064B28
  goto L_80064B34; // 80064B2C
L_80064B30:;
  c->r[3]=c->r[3]+0x00000018u; // 80064B30
L_80064B34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064B34
  c->lr=c->r[0]; // 80064B38
  c->r[1]=c->r[1]+0x00000010u; // 80064B3C
  return; // 80064B40
}

// fn_80064B44
void f_80064B44(Ctx* __restrict c) {
  trace_call(0x80064B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064B44
  c->r[0]=c->lr; // 80064B48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064B4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80064B50
  c->r[31]=c->r[4]|c->r[4]; // 80064B54
  c->lr=0x80064B5Cu; f_80052EE8(c); // 80064B58
  c->r[4]=c->r[31]|c->r[31]; // 80064B5C
  c->lr=0x80064B64u; f_8005BFB0(c); // 80064B60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80064B68
  c->lr=c->r[0]; // 80064B6C
  c->r[1]=c->r[1]+0x00000010u; // 80064B70
  return; // 80064B74
}

// fn_80064B78
void f_80064B78(Ctx* __restrict c) {
  trace_call(0x80064B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064B78
  c->r[0]=c->lr; // 80064B7C
  cmps(c,0,(int32_t)c->r[4],0); // 80064B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80064B88
  c->r[31]=c->r[4]|c->r[4]; // 80064B8C
  if (crb(c,2)) { goto L_80064BA0; } // 80064B90
  c->lr=0x80064B98u; f_80052EE8(c); // 80064B94
  c->r[3]=c->r[31]|c->r[31]; // 80064B98
  c->lr=0x80064BA0u; f_8005328C(c); // 80064B9C
L_80064BA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80064BA4
  c->lr=c->r[0]; // 80064BA8
  c->r[1]=c->r[1]+0x00000010u; // 80064BAC
  return; // 80064BB0
}

// fn_80064BB4
void f_80064BB4(Ctx* __restrict c) {
  trace_call(0x80064BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064BB4
  c->r[0]=c->lr; // 80064BB8
  cmps(c,0,(int32_t)c->r[4],0); // 80064BBC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80064BC0
  {uint32_t ea=c->r[1]+0x00000098u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064BC4
  c->r[30]=c->r[3]|c->r[3]; // 80064BC8
  if (!crb(c,2)) { goto L_80064BD8; } // 80064BCC
  c->r[3]=0u+0x00000000u; // 80064BD0
  goto L_80064C74; // 80064BD4
L_80064BD8:;
  c->r[3]=c->r[1]+0x00000020u; // 80064BD8
  c->lr=0x80064BE0u; f_802D240C(c); // 80064BDC
  c->r[4]=0u+0x80690000u; // 80064BE0
  c->r[3]=c->r[1]+0x00000020u; // 80064BE4
  c->r[4]=c->r[4]+0xFFFFB8D8u; // 80064BE8
  c->r[5]=c->r[1]+0x00000010u; // 80064BEC
  c->r[4]=c->r[4]+0x00000124u; // 80064BF0
  c->lr=0x80064BF8u; f_802D27B4(c); // 80064BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80064BF8
  if (crb(c,2)) { goto L_80064C64; } // 80064BFC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80064C00
  c->r[3]=c->r[1]+0x00000020u; // 80064C04
  c->r[5]=0u+0x00000000u; // 80064C08
  c->lr=0x80064C10u; f_802D25B8(c); // 80064C0C
  c->r[31]=c->r[3]|c->r[3]; // 80064C10
  c->r[3]=c->r[1]+0x00000020u; // 80064C14
  c->lr=0x80064C1Cu; f_802D2930(c); // 80064C18
  c->r[0]=rotl(c->r[31],0)&0x0000001Fu; cr0(c,c->r[0]); // 80064C1C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80064C20
  if (crb(c,2)) { goto L_80064C44; } // 80064C24
  c->r[3]=0u+0x806D0000u; // 80064C28
  c->r[5]=0u+0x806D0000u; // 80064C2C
  c->r[3]=c->r[3]+0xFFFFDA50u; // 80064C30
  c->r[4]=0u+0x0000003Cu; // 80064C34
  c->r[5]=c->r[5]+0xFFFFDA28u; // 80064C38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80064C3C
  c->lr=0x80064C44u; f_80484674(c); // 80064C40
L_80064C44:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 80064C44
  c->r[4]=c->r[1]+0x00000008u; // 80064C48
  c->lr=0x80064C50u; f_8032D814(c); // 80064C4C
  c->r[3]=c->r[1]+0x00000020u; // 80064C50
  c->r[4]=0u+0xFFFFFFFFu; // 80064C54
  c->lr=0x80064C5Cu; f_802D246C(c); // 80064C58
  c->r[3]=0u+0x00000001u; // 80064C5C
  goto L_80064C74; // 80064C60
L_80064C64:;
  c->r[3]=c->r[1]+0x00000020u; // 80064C64
  c->r[4]=0u+0xFFFFFFFFu; // 80064C68
  c->lr=0x80064C70u; f_802D246C(c); // 80064C6C
  c->r[3]=0u+0x00000000u; // 80064C70
L_80064C74:;
  {uint32_t ea=c->r[1]+0x00000098u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80064C74
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80064C78
  c->lr=c->r[0]; // 80064C7C
  c->r[1]=c->r[1]+0x000000A0u; // 80064C80
  return; // 80064C84
}

// fn_80064C88
void f_80064C88(Ctx* __restrict c) {
  trace_call(0x80064C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064C88
  c->r[0]=c->lr; // 80064C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064C90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064C94
  c->r[30]=c->r[3]|c->r[3]; // 80064C98
  c->r[31]=c->r[4]|c->r[4]; // 80064C9C
  c->r[6]=R32(c->r[3]+0x0000044Cu); // 80064CA0
  c->r[3]=c->r[6]+0x000000C4u; // 80064CA4
  c->lr=0x80064CACu; f_8005DCA0(c); // 80064CA8
  cmps(c,0,(int32_t)c->r[31],16); // 80064CAC
  if (!crb(c,2)) { goto L_80064CC0; } // 80064CB0
  c->r[3]=c->r[30]|c->r[30]; // 80064CB4
  c->lr=0x80064CBCu; f_8005EAAC(c); // 80064CB8
  goto L_80064CD0; // 80064CBC
L_80064CC0:;
  cmps(c,0,(int32_t)c->r[31],20); // 80064CC0
  if (!crb(c,2)) { goto L_80064CD0; } // 80064CC4
  c->r[3]=c->r[30]|c->r[30]; // 80064CC8
  c->lr=0x80064CD0u; f_8005EEE8(c); // 80064CCC
L_80064CD0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80064CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064CD4
  c->lr=c->r[0]; // 80064CD8
  c->r[1]=c->r[1]+0x00000010u; // 80064CDC
  return; // 80064CE0
}

// fn_80064CE4
void f_80064CE4(Ctx* __restrict c) {
  trace_call(0x80064CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064CE4
  c->r[0]=c->lr; // 80064CE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80064CEC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80064CF0
  c->r[27]=c->r[3]|c->r[3]; // 80064CF4
  c->r[28]=c->r[4]|c->r[4]; // 80064CF8
  c->r[29]=c->r[5]|c->r[5]; // 80064CFC
  c->r[30]=0u+0x00000000u; // 80064D00
  c->r[31]=0u+0x00000000u; // 80064D04
  goto L_80064D30; // 80064D08
L_80064D0C:;
  c->r[3]=R32(c->r[28]+c->r[31]); // 80064D0C
  c->r[4]=c->r[27]|c->r[27]; // 80064D10
  c->lr=0x80064D18u; f_803B393C(c); // 80064D14
  cmps(c,0,(int32_t)c->r[3],0); // 80064D18
  if (!crb(c,2)) { goto L_80064D28; } // 80064D1C
  c->r[3]=c->r[30]|c->r[30]; // 80064D20
  goto L_80064D3C; // 80064D24
L_80064D28:;
  c->r[30]=c->r[30]+0x00000001u; // 80064D28
  c->r[31]=c->r[31]+0x00000004u; // 80064D2C
L_80064D30:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 80064D30
  if (crb(c,0)) { IRQCHK(c); goto L_80064D0C; } // 80064D34
  c->r[3]=0u+0xFFFFFFFFu; // 80064D38
L_80064D3C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80064D3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80064D40
  c->lr=c->r[0]; // 80064D44
  c->r[1]=c->r[1]+0x00000020u; // 80064D48
  return; // 80064D4C
}

// fn_80064D50
void f_80064D50(Ctx* __restrict c) {
  trace_call(0x80064D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064D50
  c->r[0]=c->lr; // 80064D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80064D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80064D5C
  c->r[31]=c->r[3]|c->r[3]; // 80064D60
  c->lr=0x80064D68u; f_8005F5F4(c); // 80064D64
  cmps(c,0,(int32_t)c->r[3],0); // 80064D68
  if (crb(c,2)) { goto L_80064D78; } // 80064D6C
  c->r[3]=0u+0x00000000u; // 80064D70
  goto L_80064DC0; // 80064D74
L_80064D78:;
  c->r[3]=c->r[31]|c->r[31]; // 80064D78
  c->lr=0x80064D80u; f_80046E94(c); // 80064D7C
  c->r[0]=R8(c->r[13]+0xFFFFBDF4u); // 80064D80
  c->r[3]=R32(c->r[3]+0x00000004u); // 80064D84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80064D88
  if (!crb(c,2)) { goto L_80064DA8; } // 80064D8C
  c->r[4]=R32(c->r[13]+0xFFFFBC48u); // 80064D90
  c->r[0]=0u+0x00000001u; // 80064D94
  W32(c->r[13]+0xFFFFBDF0u,c->r[4]); // 80064D98
  c->r[4]=c->r[4]+0x00000001u; // 80064D9C
  W32(c->r[13]+0xFFFFBC48u,c->r[4]); // 80064DA0
  W8(c->r[13]+0xFFFFBDF4u,c->r[0]); // 80064DA4
L_80064DA8:;
  c->r[4]=R32(c->r[3]+0x00000328u); // 80064DA8
  c->r[0]=R32(c->r[13]+0xFFFFBDF0u); // 80064DAC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80064DB0
  if (!crb(c,2)) { goto L_80064DBC; } // 80064DB4
  goto L_80064DC0; // 80064DB8
L_80064DBC:;
  c->r[3]=0u+0x00000000u; // 80064DBC
L_80064DC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80064DC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80064DC4
  c->lr=c->r[0]; // 80064DC8
  c->r[1]=c->r[1]+0x00000010u; // 80064DCC
  return; // 80064DD0
}

// fn_80064DD4
void f_80064DD4(Ctx* __restrict c) {
  trace_call(0x80064DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80064DD4
  c->r[0]=c->lr; // 80064DD8
  W32(c->r[1]+0x00000114u,c->r[0]); // 80064DDC
  c->r[11]=c->r[1]+0x000000E0u; // 80064DE0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 80064DE4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 80064DE8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 80064DEC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 80064DF0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 80064DF4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 80064DF8
  c->lr=0x80064E00u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80064DFC
  cmps(c,0,(int32_t)c->r[4],0); // 80064E00
  c->r[31]=c->r[3]|c->r[3]; // 80064E04
  c->r[23]=c->r[4]|c->r[4]; // 80064E08
  c->r[24]=c->r[5]|c->r[5]; // 80064E0C
  if (crb(c,2)) { goto L_800651F4; } // 80064E10
  c->r[29]=0u+0x80690000u; // 80064E14
  c->r[30]=0u+0x80740000u; // 80064E18
  c->r[29]=c->r[29]+0xFFFFB8D8u; // 80064E1C
  c->r[6]=0u+0x00000000u; // 80064E20
  c->r[3]=c->r[30]+0x00004FD0u; // 80064E24
  c->r[4]=c->r[29]+0x0000006Fu; // 80064E28
  c->r[5]=c->r[29]+0x0000012Bu; // 80064E2C
  c->lr=0x80064E34u; f_8005A7B0(c); // 80064E30
  c->r[28]=c->r[3]|c->r[3]; // 80064E34
  c->r[3]=c->r[30]+0x00004FD0u; // 80064E38
  c->r[4]=c->r[29]+0x0000006Fu; // 80064E3C
  c->r[5]=c->r[29]+0x0000007Cu; // 80064E40
  c->r[6]=0u+0x00000000u; // 80064E44
  c->lr=0x80064E4Cu; f_8005A7B0(c); // 80064E48
  c->r[27]=c->r[3]|c->r[3]; // 80064E4C
  c->r[3]=c->r[30]+0x00004FD0u; // 80064E50
  c->r[4]=c->r[29]+0x0000006Fu; // 80064E54
  c->r[5]=c->r[29]+0x00000151u; // 80064E58
  c->r[6]=0u+0x00000000u; // 80064E5C
  c->lr=0x80064E64u; f_8005A7B0(c); // 80064E60
  c->r[26]=c->r[3]|c->r[3]; // 80064E64
  c->r[3]=c->r[30]+0x00004FD0u; // 80064E68
  c->r[4]=c->r[29]+0x0000006Fu; // 80064E6C
  c->r[5]=c->r[29]+0x0000017Cu; // 80064E70
  c->r[6]=0u+0x00000000u; // 80064E74
  c->lr=0x80064E7Cu; f_8005A7B0(c); // 80064E78
  cmps(c,0,(int32_t)c->r[28],0); // 80064E7C
  c->r[25]=c->r[3]|c->r[3]; // 80064E80
  if (crb(c,2)) { goto L_80064F38; } // 80064E84
  cmps(c,0,(int32_t)c->r[24],0); // 80064E88
  if (!crb(c,1)) { goto L_80064F38; } // 80064E8C
  c->r[4]=c->r[28]|c->r[28]; // 80064E90
  c->r[3]=c->r[1]+0x000000A4u; // 80064E94
  c->lr=0x80064E9Cu; f_802D8E94(c); // 80064E98
  c->r[3]=c->r[1]+0x000000A4u; // 80064E9C
  c->r[4]=0u+0x00000000u; // 80064EA0
  c->lr=0x80064EA8u; f_802D8F30(c); // 80064EA4
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80064EA8
  c->r[28]=0u+0x00000000u; // 80064EAC
  W32(c->r[1]+0x00000028u,c->r[3]); // 80064EB0
  W32(c->r[1]+0x00000048u,c->r[3]); // 80064EB4
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80064EB8
  goto L_80064F28; // 80064EBC
L_80064EC0:;
  c->r[5]=c->r[28]|c->r[28]; // 80064EC0
  c->r[3]=c->r[1]+0x00000098u; // 80064EC4
  c->r[4]=c->r[1]+0x00000048u; // 80064EC8
  c->lr=0x80064ED0u; f_802D90FC(c); // 80064ECC
  c->r[3]=c->r[1]+0x00000098u; // 80064ED0
  c->r[4]=0u+0x00000001u; // 80064ED4
  c->lr=0x80064EDCu; f_802D944C(c); // 80064ED8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 80064EDC
  if (!crb(c,2)) { goto L_80064F24; } // 80064EE0
  c->r[3]=c->r[1]+0x00000098u; // 80064EE4
  c->r[4]=0u+0x00000000u; // 80064EE8
  c->lr=0x80064EF0u; f_802D9584(c); // 80064EEC
  c->r[4]=c->r[23]|c->r[23]; // 80064EF0
  c->lr=0x80064EF8u; f_803B393C(c); // 80064EF4
  cmps(c,0,(int32_t)c->r[3],0); // 80064EF8
  if (!crb(c,2)) { goto L_80064F24; } // 80064EFC
  c->r[3]=c->r[1]+0x00000098u; // 80064F00
  c->r[4]=0u+0x00000002u; // 80064F04
  c->lr=0x80064F0Cu; f_802D94E8(c); // 80064F08
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 80064F0C
  c->r[3]=c->r[1]+0x00000098u; // 80064F10
  c->r[4]=0u+0x00000003u; // 80064F14
  c->lr=0x80064F1Cu; f_802D94E8(c); // 80064F18
  {uint32_t ea=c->r[31]+0x000001D4u; WF32(ea,c->f[1]);} // 80064F1C
  goto L_80064F38; // 80064F20
L_80064F24:;
  c->r[28]=c->r[28]+0x00000001u; // 80064F24
L_80064F28:;
  c->r[3]=c->r[1]+0x00000048u; // 80064F28
  c->lr=0x80064F30u; f_802D90E0(c); // 80064F2C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 80064F30
  if (crb(c,0)) { IRQCHK(c); goto L_80064EC0; } // 80064F34
L_80064F38:;
  c->r[29]=0u+0x00000000u; // 80064F38
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 80064F3C
  c->r[3]=c->r[1]+0x0000000Cu; // 80064F40
  c->lr=0x80064F48u; f_80046FEC(c); // 80064F44
  c->lr=0x80064F4Cu; f_801A1454(c); // 80064F48
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064F4C
  c->r[3]=c->r[1]+0x00000008u; // 80064F50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80064F54
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80064F58
  W8(c->r[1]+0x00000008u,c->r[29]); // 80064F5C
  c->lr=0x80064F64u; f_80046FEC(c); // 80064F60
  c->lr=0x80064F68u; f_801A13BC(c); // 80064F64
  {uint32_t ea=c->r[31]+0x000001D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064F68
  cmps(c,0,(int32_t)c->r[27],0); // 80064F6C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80064F70
  {uint32_t ea=c->r[31]+0x000001D4u; WF32(ea,c->f[0]);} // 80064F74
  if (crb(c,2)) { goto L_80065054; } // 80064F78
  c->r[4]=c->r[27]|c->r[27]; // 80064F7C
  c->r[3]=c->r[1]+0x0000008Cu; // 80064F80
  c->lr=0x80064F88u; f_802D8E94(c); // 80064F84
  c->r[3]=c->r[1]+0x0000008Cu; // 80064F88
  c->r[4]=0u+0x00000000u; // 80064F8C
  c->lr=0x80064F94u; f_802D8F30(c); // 80064F90
  W32(c->r[1]+0x00000024u,c->r[4]); // 80064F94
  c->r[27]=0u+0x00000000u; // 80064F98
  W32(c->r[1]+0x00000020u,c->r[3]); // 80064F9C
  W32(c->r[1]+0x00000040u,c->r[3]); // 80064FA0
  W32(c->r[1]+0x00000044u,c->r[4]); // 80064FA4
  goto L_80065044; // 80064FA8
L_80064FAC:;
  c->r[5]=c->r[27]|c->r[27]; // 80064FAC
  c->r[3]=c->r[1]+0x00000080u; // 80064FB0
  c->r[4]=c->r[1]+0x00000040u; // 80064FB4
  c->lr=0x80064FBCu; f_802D90FC(c); // 80064FB8
  c->r[3]=c->r[1]+0x00000080u; // 80064FBC
  c->r[4]=0u+0x00000000u; // 80064FC0
  c->lr=0x80064FC8u; f_802D9584(c); // 80064FC4
  c->r[4]=c->r[23]|c->r[23]; // 80064FC8
  c->lr=0x80064FD0u; f_803B393C(c); // 80064FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80064FD0
  if (!crb(c,2)) { goto L_80065040; } // 80064FD4
  c->r[27]=0u+0x00000001u; // 80064FD8
  c->r[28]=0u+0x00000000u; // 80064FDC
  c->r[30]=0u+0x00000000u; // 80064FE0
L_80064FE4:;
  c->r[4]=c->r[27]|c->r[27]; // 80064FE4
  c->r[29]=c->r[31]+c->r[30]; // 80064FE8
  c->r[3]=c->r[1]+0x00000080u; // 80064FEC
  c->r[27]=c->r[27]+0x00000001u; // 80064FF0
  c->lr=0x80064FF8u; f_802D94E8(c); // 80064FF4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80064FF8
  c->r[4]=c->r[27]|c->r[27]; // 80064FFC
  c->r[3]=c->r[1]+0x00000080u; // 80065000
  c->r[27]=c->r[27]+0x00000001u; // 80065004
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80065008
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 8006500C
  c->lr=0x80065014u; f_802D94E8(c); // 80065010
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 80065014
  c->r[4]=c->r[27]|c->r[27]; // 80065018
  c->r[3]=c->r[1]+0x00000080u; // 8006501C
  c->r[27]=c->r[27]+0x00000001u; // 80065020
  c->lr=0x80065028u; f_802D94E8(c); // 80065024
  c->r[28]=c->r[28]+0x00000001u; // 80065028
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[1]);} // 8006502C
  cmps(c,0,(int32_t)c->r[28],32); // 80065030
  c->r[30]=c->r[30]+0x0000000Cu; // 80065034
  if (crb(c,0)) { IRQCHK(c); goto L_80064FE4; } // 80065038
  goto L_80065054; // 8006503C
L_80065040:;
  c->r[27]=c->r[27]+0x00000001u; // 80065040
L_80065044:;
  c->r[3]=c->r[1]+0x00000040u; // 80065044
  c->lr=0x8006504Cu; f_802D90E0(c); // 80065048
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 8006504C
  if (crb(c,0)) { IRQCHK(c); goto L_80064FAC; } // 80065050
L_80065054:;
  cmps(c,0,(int32_t)c->r[26],0); // 80065054
  if (crb(c,2)) { goto L_800650F0; } // 80065058
  c->r[4]=c->r[26]|c->r[26]; // 8006505C
  c->r[3]=c->r[1]+0x00000074u; // 80065060
  c->lr=0x80065068u; f_802D8E94(c); // 80065064
  c->r[3]=c->r[1]+0x00000074u; // 80065068
  c->r[4]=0u+0x00000000u; // 8006506C
  c->lr=0x80065074u; f_802D8F30(c); // 80065070
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80065074
  c->r[26]=0u+0x00000000u; // 80065078
  W32(c->r[1]+0x00000018u,c->r[3]); // 8006507C
  W32(c->r[1]+0x00000038u,c->r[3]); // 80065080
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80065084
  goto L_800650E0; // 80065088
L_8006508C:;
  c->r[5]=c->r[26]|c->r[26]; // 8006508C
  c->r[3]=c->r[1]+0x00000068u; // 80065090
  c->r[4]=c->r[1]+0x00000038u; // 80065094
  c->lr=0x8006509Cu; f_802D90FC(c); // 80065098
  c->r[3]=c->r[1]+0x00000068u; // 8006509C
  c->r[4]=0u+0x00000000u; // 800650A0
  c->lr=0x800650A8u; f_802D9584(c); // 800650A4
  c->r[4]=c->r[23]|c->r[23]; // 800650A8
  c->lr=0x800650B0u; f_803B393C(c); // 800650AC
  cmps(c,0,(int32_t)c->r[3],0); // 800650B0
  if (!crb(c,2)) { goto L_800650DC; } // 800650B4
  c->r[3]=c->r[1]+0x00000068u; // 800650B8
  c->r[4]=0u+0x00000001u; // 800650BC
  c->lr=0x800650C4u; f_802D94E8(c); // 800650C0
  {uint32_t ea=c->r[31]+0x000001B4u; WF32(ea,c->f[1]);} // 800650C4
  c->r[3]=c->r[1]+0x00000068u; // 800650C8
  c->r[4]=0u+0x00000002u; // 800650CC
  c->lr=0x800650D4u; f_802D94E8(c); // 800650D0
  {uint32_t ea=c->r[31]+0x000001B8u; WF32(ea,c->f[1]);} // 800650D4
  goto L_800650F0; // 800650D8
L_800650DC:;
  c->r[26]=c->r[26]+0x00000001u; // 800650DC
L_800650E0:;
  c->r[3]=c->r[1]+0x00000038u; // 800650E0
  c->lr=0x800650E8u; f_802D90E0(c); // 800650E4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800650E8
  if (crb(c,0)) { IRQCHK(c); goto L_8006508C; } // 800650EC
L_800650F0:;
  cmps(c,0,(int32_t)c->r[25],0); // 800650F0
  if (crb(c,2)) { goto L_800651F4; } // 800650F4
  c->r[4]=c->r[25]|c->r[25]; // 800650F8
  c->r[3]=c->r[1]+0x0000005Cu; // 800650FC
  c->lr=0x80065104u; f_802D8E94(c); // 80065100
  c->r[4]=c->r[23]|c->r[23]; // 80065104
  c->r[3]=c->r[1]+0x0000005Cu; // 80065108
  c->lr=0x80065110u; f_802D8F80(c); // 8006510C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80065110
  W32(c->r[1]+0x00000010u,c->r[3]); // 80065114
  W32(c->r[1]+0x00000030u,c->r[3]); // 80065118
  c->r[3]=c->r[1]+0x00000030u; // 8006511C
  W32(c->r[1]+0x00000034u,c->r[4]); // 80065120
  c->lr=0x80065128u; f_802D90CC(c); // 80065124
  cmps(c,0,(int32_t)c->r[3],0); // 80065128
  if (crb(c,2)) { goto L_800651F4; } // 8006512C
  {uint32_t ea=c->r[2]+0xFFFF828Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80065130
  c->lr=0x80065138u; f_803B220C(c); // 80065134
  c->r[3]=c->r[3]^0x80000000u; // 80065138
  c->r[0]=0u+0x43300000u; // 8006513C
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80065140
  c->r[25]=0u+0x00000000u; // 80065144
  {uint32_t ea=c->r[2]+0xFFFF8290u; c->f[3]=RF64(ea);} // 80065148
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8006514C
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[31]=c->ps1[31]=RF32(ea);} // 80065150
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=RF64(ea);} // 80065154
  {uint32_t ea=c->r[2]+0xFFFF82D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80065158
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[31]); // 8006515C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80065160
  c->f[29]=c->f[31]; // 80065164
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80065168
  c->f[30]=c->ps1[30]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 8006516C
  goto L_800651E4; // 80065170
L_80065174:;
  c->r[5]=c->r[25]|c->r[25]; // 80065174
  c->r[3]=c->r[1]+0x00000050u; // 80065178
  c->r[4]=c->r[1]+0x00000030u; // 8006517C
  c->lr=0x80065184u; f_802D90FC(c); // 80065180
  c->r[3]=c->r[1]+0x00000050u; // 80065184
  c->r[4]=0u+0x00000001u; // 80065188
  c->lr=0x80065190u; f_802D94E8(c); // 8006518C
  fcmp(c,0,c->f[1],c->f[31]); // 80065190
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80065194
  if (crb(c,2)) { goto L_800651E0; } // 80065198
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[1]); // 8006519C
  fcmp(c,0,c->f[30],c->f[29]); // 800651A0
  if (crb(c,1)) { goto L_800651E0; } // 800651A4
  c->r[3]=c->r[1]+0x00000050u; // 800651A8
  c->r[4]=0u+0x00000000u; // 800651AC
  c->lr=0x800651B4u; f_802D944C(c); // 800651B0
  c->r[25]=c->r[3]|c->r[3]; // 800651B4
  c->r[4]=0u+0x00000000u; // 800651B8
  c->r[5]=0u+0x0000001Fu; // 800651BC
  c->lr=0x800651C4u; f_8005DB3C(c); // 800651C0
  cmps(c,0,(int32_t)c->r[3],0); // 800651C4
  if (crb(c,2)) { goto L_800651F4; } // 800651C8
  c->r[4]=c->r[25]|c->r[25]; // 800651CC
  c->r[3]=c->r[31]+0x000001D8u; // 800651D0
  c->r[5]=0u+0x00000001u; // 800651D4
  c->lr=0x800651DCu; f_8005DCA0(c); // 800651D8
  goto L_800651F4; // 800651DC
L_800651E0:;
  c->r[25]=c->r[25]+0x00000001u; // 800651E0
L_800651E4:;
  c->r[3]=c->r[1]+0x00000030u; // 800651E4
  c->lr=0x800651ECu; f_802D90E0(c); // 800651E8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 800651EC
  if (crb(c,0)) { IRQCHK(c); goto L_80065174; } // 800651F0
L_800651F4:;
  c->r[11]=c->r[1]+0x000000E0u; // 800651F4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800651F8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800651FC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 80065200
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 80065204
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 80065208
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 8006520C
  c->lr=0x80065214u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80065210
  c->r[0]=R32(c->r[1]+0x00000114u); // 80065214
  c->lr=c->r[0]; // 80065218
  c->r[1]=c->r[1]+0x00000110u; // 8006521C
  return; // 80065220
}

// fn_80065224
void f_80065224(Ctx* __restrict c) {
  trace_call(0x80065224u);
  return; // 80065224
}

// fn_80065228
void f_80065228(Ctx* __restrict c) {
  trace_call(0x80065228u);
  return; // 80065228
}

// fn_8006522C
void f_8006522C(Ctx* __restrict c) {
  trace_call(0x8006522Cu);
  return; // 8006522C
}

// fn_80065230
void f_80065230(Ctx* __restrict c) {
  trace_call(0x80065230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065230
  c->r[0]=c->lr; // 80065234
  W32(c->r[1]+0x00000024u,c->r[0]); // 80065238
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006523C
  c->r[30]=c->r[3]|c->r[3]; // 80065240
  c->r[31]=R32(c->r[3]+0x00000010u); // 80065244
  c->r[3]=c->r[31]|c->r[31]; // 80065248
  c->lr=0x80065250u; f_80061840(c); // 8006524C
  cmps(c,0,(int32_t)c->r[3],0); // 80065250
  if (crb(c,2)) { goto L_800652B0; } // 80065254
  c->r[4]=R32(c->r[30]+0x00000028u); // 80065258
  c->r[3]=c->r[31]|c->r[31]; // 8006525C
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 80065260
  c->r[5]=c->r[1]+0x00000008u; // 80065264
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80065268
  W32(c->r[1]+0x00000008u,c->r[4]); // 8006526C
  c->r[4]=R32(c->r[30]+0x00000024u); // 80065270
  c->lr=0x80065278u; f_800619B0(c); // 80065274
  c->r[4]=R32(c->r[31]+0x0000043Cu); // 80065278
  cmps(c,0,(int32_t)c->r[4],0); // 8006527C
  if (crb(c,2)) { goto L_800652A8; } // 80065280
  c->r[0]=R32(c->r[30]+0x00000024u); // 80065284
  cmps(c,0,(int32_t)c->r[0],1); // 80065288
  if (!crb(c,2)) { goto L_800652A0; } // 8006528C
  c->r[3]=c->r[31]|c->r[31]; // 80065290
  c->r[5]=0u+0x00000000u; // 80065294
  c->lr=0x8006529Cu; f_8005E5C4(c); // 80065298
  goto L_800652A8; // 8006529C
L_800652A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800652A0
  c->lr=0x800652A8u; f_8005E6E0(c); // 800652A4
L_800652A8:;
  c->r[3]=0u+0x00000001u; // 800652A8
  goto L_800652B4; // 800652AC
L_800652B0:;
  c->r[3]=0u+0x00000000u; // 800652B0
L_800652B4:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800652B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800652B8
  c->lr=c->r[0]; // 800652BC
  c->r[1]=c->r[1]+0x00000020u; // 800652C0
  return; // 800652C4
}

// fn_800652C8
void f_800652C8(Ctx* __restrict c) {
  trace_call(0x800652C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800652C8
  c->r[0]=c->lr; // 800652CC
  cmps(c,0,(int32_t)c->r[3],0); // 800652D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800652D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800652D8
  c->r[31]=c->r[3]|c->r[3]; // 800652DC
  if (crb(c,2)) { goto L_800652EC; } // 800652E0
  c->r[4]=0u+0x00000000u; // 800652E4
  c->lr=0x800652ECu; f_8005C8DC(c); // 800652E8
L_800652EC:;
  c->r[3]=c->r[31]|c->r[31]; // 800652EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800652F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800652F4
  c->lr=c->r[0]; // 800652F8
  c->r[1]=c->r[1]+0x00000010u; // 800652FC
  return; // 80065300
}

// fn_80065304
void f_80065304(Ctx* __restrict c) {
  trace_call(0x80065304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065304
  c->r[0]=c->lr; // 80065308
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006530C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065310
  c->r[30]=c->r[3]|c->r[3]; // 80065314
  c->r[31]=0u+0x00000001u; // 80065318
  c->r[4]=R32(c->r[3]+0x00000010u); // 8006531C
  c->r[5]=R32(c->r[4]+0x0000044Cu); // 80065320
  c->r[0]=R32(c->r[5]+0x00000094u); // 80065324
  cmps(c,0,(int32_t)c->r[0],1); // 80065328
  if (crb(c,2)) { goto L_80065338; } // 8006532C
  c->r[3]=0u+0x00000001u; // 80065330
  goto L_8006537C; // 80065334
L_80065338:;
  c->r[4]=R32(c->r[5]+0x00000098u); // 80065338
  c->r[3]=c->r[1]+0x00000008u; // 8006533C
  c->r[0]=R32(c->r[5]+0x0000009Cu); // 80065340
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80065344
  W32(c->r[1]+0x00000008u,c->r[4]); // 80065348
  c->lr=0x80065350u; f_8005F5F4(c); // 8006534C
  cmps(c,0,(int32_t)c->r[3],0); // 80065350
  if (crb(c,2)) { goto L_8006535C; } // 80065354
  c->r[31]=0u+0x00000000u; // 80065358
L_8006535C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006535C
  if (!crb(c,2)) { goto L_80065378; } // 80065360
  c->r[3]=R32(c->r[30]+0x00000010u); // 80065364
  c->r[4]=0u+0x00000000u; // 80065368
  c->lr=0x80065370u; f_80061978(c); // 8006536C
  c->r[3]=0u+0x00000001u; // 80065370
  goto L_8006537C; // 80065374
L_80065378:;
  c->r[3]=0u+0x00000000u; // 80065378
L_8006537C:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006537C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80065380
  c->lr=c->r[0]; // 80065384
  c->r[1]=c->r[1]+0x00000020u; // 80065388
  return; // 8006538C
}

// fn_80065390
void f_80065390(Ctx* __restrict c) {
  trace_call(0x80065390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065390
  c->r[0]=c->lr; // 80065394
  cmps(c,0,(int32_t)c->r[3],0); // 80065398
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006539C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800653A0
  c->r[31]=c->r[3]|c->r[3]; // 800653A4
  if (crb(c,2)) { goto L_800653B4; } // 800653A8
  c->r[4]=0u+0x00000000u; // 800653AC
  c->lr=0x800653B4u; f_8005C8DC(c); // 800653B0
L_800653B4:;
  c->r[3]=c->r[31]|c->r[31]; // 800653B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800653B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800653BC
  c->lr=c->r[0]; // 800653C0
  c->r[1]=c->r[1]+0x00000010u; // 800653C4
  return; // 800653C8
}

// fn_800653CC
void f_800653CC(Ctx* __restrict c) {
  trace_call(0x800653CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800653CC
  c->r[0]=c->lr; // 800653D0
  cmps(c,0,(int32_t)c->r[3],0); // 800653D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800653D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800653DC
  c->r[31]=c->r[3]|c->r[3]; // 800653E0
  if (crb(c,2)) { goto L_800653F4; } // 800653E4
  if (crb(c,2)) { goto L_800653F4; } // 800653E8
  c->r[4]=0u+0x00000000u; // 800653EC
  c->lr=0x800653F4u; f_80045C7C(c); // 800653F0
L_800653F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800653F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800653F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800653FC
  c->lr=c->r[0]; // 80065400
  c->r[1]=c->r[1]+0x00000010u; // 80065404
  return; // 80065408
}

// fn_8006540C
void f_8006540C(Ctx* __restrict c) {
  trace_call(0x8006540Cu);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 8006540C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80065410
  if (!crb(c,2)) { goto L_80065420; } // 80065414
  c->r[3]=0u+0x00000000u; // 80065418
  return; // 8006541C
L_80065420:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 80065420
  c->r[3]=0u+0x00000001u; // 80065424
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80065428
  c->r[0]=cntlz(c->r[0]); // 8006542C
  c->r[3]=rotl(c->r[3],c->r[0]&31)&0x00000001u; // 80065430
  return; // 80065434
}

// fn_80065438
void f_80065438(Ctx* __restrict c) {
  trace_call(0x80065438u);
  return; // 80065438
}

// fn_8006543C
void f_8006543C(Ctx* __restrict c) {
  trace_call(0x8006543Cu);
  c->r[3]=0u+0x00000000u; // 8006543C
  return; // 80065440
}

// fn_80065444
void f_80065444(Ctx* __restrict c) {
  trace_call(0x80065444u);
  return; // 80065444
}

// fn_80065448
void f_80065448(Ctx* __restrict c) {
  trace_call(0x80065448u);
  return; // 80065448
}

// fn_8006544C
void f_8006544C(Ctx* __restrict c) {
  trace_call(0x8006544Cu);
  c->r[3]=c->r[3]+0x0000001Cu; // 8006544C
  return; // 80065450
}

// fn_80065454
void f_80065454(Ctx* __restrict c) {
  trace_call(0x80065454u);
  c->r[3]=c->r[3]+0x00000014u; // 80065454
  return; // 80065458
}

// fn_8006545C
void f_8006545C(Ctx* __restrict c) {
  trace_call(0x8006545Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006545C
  c->r[0]=c->lr; // 80065460
  W32(c->r[1]+0x00000024u,c->r[0]); // 80065464
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065468
  c->r[30]=c->r[3]|c->r[3]; // 8006546C
  c->r[0]=R8(c->r[3]+0x00000088u); // 80065470
  cmps(c,0,(int32_t)c->r[0],0); // 80065474
  if (crb(c,2)) { goto L_800654D4; } // 80065478
  c->r[0]=0u+0x00000000u; // 8006547C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80065480
  c->r[3]=c->r[1]+0x00000008u; // 80065484
  c->lr=0x8006548Cu; f_80065678(c); // 80065488
  c->r[0]=R32(c->r[3]+0x00000000u); // 8006548C
  c->r[31]=c->r[3]|c->r[3]; // 80065490
  W32(c->r[1]+0x00000010u,c->r[0]); // 80065494
  goto L_800654B8; // 80065498
L_8006549C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8006549C
  c->r[4]=c->r[30]+0x0000001Cu; // 800654A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800654A4
  c->lr=0x800654ACu; f_8006550C(c); // 800654A8
  c->r[3]=R32(c->r[1]+0x00000010u); // 800654AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800654B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800654B4
L_800654B8:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800654B8
  c->r[3]=c->r[1]+0x00000010u; // 800654BC
  c->r[4]=c->r[1]+0x0000000Cu; // 800654C0
  c->lr=0x800654C8u; f_8006576C(c); // 800654C4
  cmps(c,0,(int32_t)c->r[3],0); // 800654C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8006549C; } // 800654CC
  goto L_800654F8; // 800654D0
L_800654D4:;
  c->r[3]=c->r[3]+0x00000014u; // 800654D4
  c->lr=0x800654DCu; f_800655F4(c); // 800654D8
  cmps(c,0,(int32_t)c->r[3],0); // 800654DC
  if (crb(c,2)) { goto L_800654F8; } // 800654E0
  c->r[3]=c->r[30]+0x00000014u; // 800654E4
  c->lr=0x800654ECu; f_80046E94(c); // 800654E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800654EC
  c->r[4]=c->r[30]+0x0000001Cu; // 800654F0
  c->lr=0x800654F8u; f_8006550C(c); // 800654F4
L_800654F8:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800654F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800654FC
  c->lr=c->r[0]; // 80065500
  c->r[1]=c->r[1]+0x00000020u; // 80065504
  return; // 80065508
}

// fn_8006550C
void f_8006550C(Ctx* __restrict c) {
  trace_call(0x8006550Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8006550C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80065510
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)80); // 80065514
  c->r[6]=R32(c->r[13]+0xFFFFDBDCu); // 80065518
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8006551C
  c->r[5]=c->r[6]+c->r[5]; // 80065520
  c->r[5]=c->r[5]+c->r[0]; // 80065524
  c->r[12]=R32(c->r[5]+0x000001CCu); // 80065528
  c->ctr=c->r[12]; // 8006552C
  if (true) { dispatch(c,c->ctr); return; } // 80065530
}

// fn_80065534
void f_80065534(Ctx* __restrict c) {
  trace_call(0x80065534u);
  c->r[3]=c->r[3]+0x0000001Cu; // 80065534
  return; // 80065538
}

// fn_8006553C
void f_8006553C(Ctx* __restrict c) {
  trace_call(0x8006553Cu);
  c->r[3]=c->r[3]+0x00000014u; // 8006553C
  return; // 80065540
}

// fn_80065544
void f_80065544(Ctx* __restrict c) {
  trace_call(0x80065544u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065544
  c->r[0]=c->lr; // 80065548
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006554C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065550
  c->r[30]=c->r[3]|c->r[3]; // 80065554
  c->r[0]=R8(c->r[3]+0x00000038u); // 80065558
  cmps(c,0,(int32_t)c->r[0],0); // 8006555C
  if (crb(c,2)) { goto L_800655BC; } // 80065560
  c->r[0]=0u+0x00000000u; // 80065564
  W8(c->r[1]+0x00000008u,c->r[0]); // 80065568
  c->r[3]=c->r[1]+0x00000008u; // 8006556C
  c->lr=0x80065574u; f_80065678(c); // 80065570
  c->r[0]=R32(c->r[3]+0x00000000u); // 80065574
  c->r[31]=c->r[3]|c->r[3]; // 80065578
  W32(c->r[1]+0x00000010u,c->r[0]); // 8006557C
  goto L_800655A0; // 80065580
L_80065584:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 80065584
  c->r[4]=c->r[30]+0x0000001Cu; // 80065588
  c->r[3]=R32(c->r[3]+0x00000008u); // 8006558C
  c->lr=0x80065594u; f_8006550C(c); // 80065590
  c->r[3]=R32(c->r[1]+0x00000010u); // 80065594
  c->r[0]=R32(c->r[3]+0x00000000u); // 80065598
  W32(c->r[1]+0x00000010u,c->r[0]); // 8006559C
L_800655A0:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800655A0
  c->r[3]=c->r[1]+0x00000010u; // 800655A4
  c->r[4]=c->r[1]+0x0000000Cu; // 800655A8
  c->lr=0x800655B0u; f_8006576C(c); // 800655AC
  cmps(c,0,(int32_t)c->r[3],0); // 800655B0
  if (!crb(c,2)) { IRQCHK(c); goto L_80065584; } // 800655B4
  goto L_800655E0; // 800655B8
L_800655BC:;
  c->r[3]=c->r[3]+0x00000014u; // 800655BC
  c->lr=0x800655C4u; f_800655F4(c); // 800655C0
  cmps(c,0,(int32_t)c->r[3],0); // 800655C4
  if (crb(c,2)) { goto L_800655E0; } // 800655C8
  c->r[3]=c->r[30]+0x00000014u; // 800655CC
  c->lr=0x800655D4u; f_80046E94(c); // 800655D0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800655D4
  c->r[4]=c->r[30]+0x0000001Cu; // 800655D8
  c->lr=0x800655E0u; f_8006550C(c); // 800655DC
L_800655E0:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800655E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800655E4
  c->lr=c->r[0]; // 800655E8
  c->r[1]=c->r[1]+0x00000020u; // 800655EC
  return; // 800655F0
}

// fn_800655F4
void f_800655F4(Ctx* __restrict c) {
  trace_call(0x800655F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800655F4
  c->r[0]=c->lr; // 800655F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800655FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065600
  c->r[30]=c->r[3]|c->r[3]; // 80065604
  c->r[31]=0u+0x00000000u; // 80065608
  c->r[0]=R32(c->r[3]+0x00000000u); // 8006560C
  cmps(c,0,(int32_t)c->r[0],0); // 80065610
  if (crb(c,2)) { goto L_80065638; } // 80065614
  c->lr=0x8006561Cu; f_80046E94(c); // 80065618
  c->r[3]=R32(c->r[3]+0x00000000u); // 8006561C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80065620
  c->r[3]=c->r[3]-c->r[0]; // 80065624
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80065628
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8006562C
  if (!crb(c,2)) { goto L_80065638; } // 80065630
  c->r[31]=0u+0x00000001u; // 80065634
L_80065638:;
  c->r[3]=c->r[31]|c->r[31]; // 80065638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006563C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065640
  c->lr=c->r[0]; // 80065644
  c->r[1]=c->r[1]+0x00000010u; // 80065648
  return; // 8006564C
}

// fn_80065650
void f_80065650(Ctx* __restrict c) {
  trace_call(0x80065650u);
  c->r[0]=R8(c->r[13]+0xFFFFBE00u); // 80065650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80065654
  if (!crb(c,2)) { goto L_80065670; } // 80065658
  c->r[3]=0u+0x806D0000u; // 8006565C
  c->r[0]=0u+0x00000001u; // 80065660
  c->r[3]=c->r[3]+0xFFFFE390u; // 80065664
  W32(c->r[13]+0xFFFFBE04u,c->r[3]); // 80065668
  W8(c->r[13]+0xFFFFBE00u,c->r[0]); // 8006566C
L_80065670:;
  c->r[3]=c->r[13]+0xFFFFBE04u; // 80065670
  return; // 80065674
}

// fn_80065678
void f_80065678(Ctx* __restrict c) {
  trace_call(0x80065678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065678
  c->r[0]=c->lr; // 8006567C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065680
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065684
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 80065688
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8006568C
  if (!crb(c,2)) { goto L_800656D4; } // 80065690
  c->r[31]=0u+0x80740000u; // 80065694
  c->r[3]=c->r[31]+0x000074BCu; // 80065698
  c->lr=0x800656A0u; f_800506C0(c); // 8006569C
  c->r[6]=0u+0x806D0000u; // 800656A0
  c->r[4]=0u+0x80060000u; // 800656A4
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800656A8
  c->r[3]=c->r[31]+0x000074BCu; // 800656AC
  c->r[0]=c->r[6]+0x00000008u; // 800656B0
  c->r[5]=0u+0x80740000u; // 800656B4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800656B8
  c->r[4]=c->r[4]+0x000057D4u; // 800656BC
  c->r[5]=c->r[5]+0x00007484u; // 800656C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800656C4
  c->lr=0x800656CCu; f_803A92B8(c); // 800656C8
  c->r[0]=0u+0x00000001u; // 800656CC
  W8(c->r[13]+0xFFFFBE09u,c->r[0]); // 800656D0
L_800656D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800656D4
  c->r[3]=0u+0x80740000u; // 800656D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800656DC
  c->r[3]=c->r[3]+0x000074BCu; // 800656E0
  c->lr=c->r[0]; // 800656E4
  c->r[1]=c->r[1]+0x00000010u; // 800656E8
  return; // 800656EC
}

// fn_800656F0
void f_800656F0(Ctx* __restrict c) {
  trace_call(0x800656F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800656F0
  c->r[0]=c->lr; // 800656F4
  cmps(c,0,(int32_t)c->r[3],0); // 800656F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800656FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065700
  c->r[31]=c->r[3]|c->r[3]; // 80065704
  if (crb(c,2)) { goto L_80065718; } // 80065708
  if (crb(c,2)) { goto L_80065718; } // 8006570C
  c->r[4]=0u+0x00000000u; // 80065710
  c->lr=0x80065718u; f_80045C7C(c); // 80065714
L_80065718:;
  c->r[3]=c->r[31]|c->r[31]; // 80065718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006571C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065720
  c->lr=c->r[0]; // 80065724
  c->r[1]=c->r[1]+0x00000010u; // 80065728
  return; // 8006572C
}

// fn_80065730
void f_80065730(Ctx* __restrict c) {
  trace_call(0x80065730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065730
  c->r[0]=c->lr; // 80065734
  cmps(c,0,(int32_t)c->r[3],0); // 80065738
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006573C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065740
  c->r[31]=c->r[3]|c->r[3]; // 80065744
  if (crb(c,2)) { goto L_80065754; } // 80065748
  c->r[4]=0u+0x00000000u; // 8006574C
  c->lr=0x80065754u; f_800656F0(c); // 80065750
L_80065754:;
  c->r[3]=c->r[31]|c->r[31]; // 80065754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80065758
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006575C
  c->lr=c->r[0]; // 80065760
  c->r[1]=c->r[1]+0x00000010u; // 80065764
  return; // 80065768
}

// fn_8006576C
void f_8006576C(Ctx* __restrict c) {
  trace_call(0x8006576Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8006576C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80065770
  c->r[4]=R32(c->r[5]+0x00000008u); // 80065774
  c->r[0]=R32(c->r[3]+0x00000008u); // 80065778
  c->r[3]=c->r[0]-c->r[4]; // 8006577C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80065780
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80065784
  return; // 80065788
}

// fn_8006578C
void f_8006578C(Ctx* __restrict c) {
  trace_call(0x8006578Cu);
  return; // 8006578C
}

// fn_80065790
void f_80065790(Ctx* __restrict c) {
  trace_call(0x80065790u);
  return; // 80065790
}

// fn_80065794
void f_80065794(Ctx* __restrict c) {
  trace_call(0x80065794u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065794
  c->r[0]=c->lr; // 80065798
  cmps(c,0,(int32_t)c->r[3],0); // 8006579C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800657A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800657A4
  c->r[31]=c->r[3]|c->r[3]; // 800657A8
  if (crb(c,2)) { goto L_800657BC; } // 800657AC
  if (crb(c,2)) { goto L_800657BC; } // 800657B0
  c->r[4]=0u+0x00000000u; // 800657B4
  c->lr=0x800657BCu; f_80045C7C(c); // 800657B8
L_800657BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800657BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800657C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800657C4
  c->lr=c->r[0]; // 800657C8
  c->r[1]=c->r[1]+0x00000010u; // 800657CC
  return; // 800657D0
}

// fn_800657D4
void f_800657D4(Ctx* __restrict c) {
  trace_call(0x800657D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800657D4
  c->r[0]=c->lr; // 800657D8
  cmps(c,0,(int32_t)c->r[3],0); // 800657DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800657E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800657E4
  c->r[31]=c->r[3]|c->r[3]; // 800657E8
  if (crb(c,2)) { goto L_800657F8; } // 800657EC
  c->r[4]=0u+0x00000000u; // 800657F0
  c->lr=0x800657F8u; f_80065794(c); // 800657F4
L_800657F8:;
  c->r[3]=c->r[31]|c->r[31]; // 800657F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800657FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065800
  c->lr=c->r[0]; // 80065804
  c->r[1]=c->r[1]+0x00000010u; // 80065808
  return; // 8006580C
}

// fn_80065810
void f_80065810(Ctx* __restrict c) {
  trace_call(0x80065810u);
  return; // 80065810
}

// fn_80065814
void f_80065814(Ctx* __restrict c) {
  trace_call(0x80065814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065814
  c->r[0]=c->lr; // 80065818
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006581C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065820
  c->r[31]=0u+0x80740000u; // 80065824
  c->r[3]=c->r[31]+0x00007108u; // 80065828
  c->lr=0x80065830u; f_8006585C(c); // 8006582C
  c->r[4]=0u+0x80060000u; // 80065830
  c->r[5]=0u+0x80740000u; // 80065834
  c->r[3]=c->r[31]+0x00007108u; // 80065838
  c->r[4]=c->r[4]+0xFFFFA368u; // 8006583C
  c->r[5]=c->r[5]+0x000070FCu; // 80065840
  c->lr=0x80065848u; f_803A92B8(c); // 80065844
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006584C
  c->lr=c->r[0]; // 80065850
  c->r[1]=c->r[1]+0x00000010u; // 80065854
  return; // 80065858
}

// fn_8006585C
void f_8006585C(Ctx* __restrict c) {
  trace_call(0x8006585Cu);
  c->r[0]=0u+0x00000000u; // 8006585C
  W32(c->r[3]+0x00000348u,c->r[0]); // 80065860
  return; // 80065864
}

// fn_80065868
void f_80065868(Ctx* __restrict c) {
  trace_call(0x80065868u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 80065868
  f_80065810(c); return; // 8006586C
}

// fn_80065870
void f_80065870(Ctx* __restrict c) {
  trace_call(0x80065870u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 80065870
  f_80065790(c); return; // 80065874
}

// fn_80065878
void f_80065878(Ctx* __restrict c) {
  trace_call(0x80065878u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80065878
  f_80067B00(c); return; // 8006587C
}

// fn_80065880
void f_80065880(Ctx* __restrict c) {
  trace_call(0x80065880u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80065880
  f_80067AF8(c); return; // 80065884
}

// fn_80065888
void f_80065888(Ctx* __restrict c) {
  trace_call(0x80065888u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80065888
  f_80067AF0(c); return; // 8006588C
}

// fn_80065890
void f_80065890(Ctx* __restrict c) {
  trace_call(0x80065890u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80065890
  f_80067AE8(c); return; // 80065894
}

// fn_80065898
void f_80065898(Ctx* __restrict c) {
  trace_call(0x80065898u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80065898
  f_80067A80(c); return; // 8006589C
}

// fn_800658A0
void f_800658A0(Ctx* __restrict c) {
  trace_call(0x800658A0u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800658A0
  f_800679C4(c); return; // 800658A4
}

// fn_800658A8
void f_800658A8(Ctx* __restrict c) {
  trace_call(0x800658A8u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800658A8
  f_80066CD4(c); return; // 800658AC
}

// fn_800658B0
void f_800658B0(Ctx* __restrict c) {
  trace_call(0x800658B0u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800658B0
  f_80066AB0(c); return; // 800658B4
}

// fn_800658B8
void f_800658B8(Ctx* __restrict c) {
  trace_call(0x800658B8u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800658B8
  f_8005BD00(c); return; // 800658BC
}

// fn_800658C0
void f_800658C0(Ctx* __restrict c) {
  trace_call(0x800658C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800658C0
  c->r[0]=c->lr; // 800658C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800658C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800658CC
  c->r[31]=0u+0x80740000u; // 800658D0
  c->r[3]=c->r[31]+0x000074DCu; // 800658D4
  c->lr=0x800658DCu; f_80065908(c); // 800658D8
  c->r[4]=0u+0x80060000u; // 800658DC
  c->r[5]=0u+0x80740000u; // 800658E0
  c->r[3]=c->r[31]+0x000074DCu; // 800658E4
  c->r[4]=c->r[4]+0x00005980u; // 800658E8
  c->r[5]=c->r[5]+0x000074D0u; // 800658EC
  c->lr=0x800658F4u; f_803A92B8(c); // 800658F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800658F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800658F8
  c->lr=c->r[0]; // 800658FC
  c->r[1]=c->r[1]+0x00000010u; // 80065900
  return; // 80065904
}

// fn_80065908
void f_80065908(Ctx* __restrict c) {
  trace_call(0x80065908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065908
  c->r[0]=c->lr; // 8006590C
  {uint32_t ea=c->r[2]+0xFFFF82D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80065910
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065914
  c->r[0]=0u+0x00000000u; // 80065918
  {uint32_t ea=c->r[2]+0xFFFF82DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006591C
  c->f[2]=c->f[1]; // 80065920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065924
  c->f[3]=c->f[1]; // 80065928
  c->r[31]=c->r[3]|c->r[3]; // 8006592C
  W32(c->r[3]+0x0000034Cu,c->r[0]); // 80065930
  {uint32_t ea=c->r[3]+0x00000360u; WF32(ea,c->f[1]);} // 80065934
  {uint32_t ea=c->r[3]+0x00000364u; WF32(ea,c->f[0]);} // 80065938
  W32(c->r[3]+0x000003B4u,c->r[0]); // 8006593C
  W32(c->r[3]+0x000003B8u,c->r[0]); // 80065940
  W8(c->r[3]+0x00000000u,c->r[0]); // 80065944
  W32(c->r[3]+0x00000398u,c->r[0]); // 80065948
  c->r[3]=c->r[3]+0x0000039Cu; // 8006594C
  c->lr=0x80065954u; f_8005A6D0(c); // 80065950
  {uint32_t ea=c->r[2]+0xFFFF82D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80065954
  c->r[3]=c->r[31]+0x000003A8u; // 80065958
  c->f[2]=c->f[1]; // 8006595C
  c->f[3]=c->f[1]; // 80065960
  c->lr=0x80065968u; f_8005A6D0(c); // 80065964
  c->r[3]=c->r[31]|c->r[31]; // 80065968
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006596C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065970
  c->lr=c->r[0]; // 80065974
  c->r[1]=c->r[1]+0x00000010u; // 80065978
  return; // 8006597C
}

// dtor_80065980
void f_80065980(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 80065980
  if (crb(c,2)) return; // 80065984
  c->r[0]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[0]); // 80065988
  if (crb(c,2)) return; // 8006598C
  c->r[0]=0u+0x00000000u; // 80065990
  W32(c->r[3]+0x0000034Cu,c->r[0]); // 80065994
  return; // 80065998
}

// fn_8006599C
void f_8006599C(Ctx* __restrict c) {
  trace_call(0x8006599Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006599C
  c->r[0]=c->lr; // 800659A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800659A4
  c->r[11]=c->r[1]+0x00000050u; // 800659A8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800659AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800659B0
  c->lr=0x800659B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800659B4
  c->r[29]=c->r[3]|c->r[3]; // 800659B8
  c->r[30]=c->r[4]|c->r[4]; // 800659BC
  c->r[31]=c->r[5]|c->r[5]; // 800659C0
  c->r[3]=c->r[1]+0x00000010u; // 800659C4
  c->r[4]=c->r[5]+0x000003BCu; // 800659C8
  c->lr=0x800659D0u; f_8005CD7C(c); // 800659CC
  c->r[3]=c->r[1]+0x00000010u; // 800659D0
  c->r[4]=c->r[1]+0x0000001Cu; // 800659D4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800659D8
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,1,ea,0,0);} // 800659DC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800659E0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800659E4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800659E8
  {uint32_t ea=c->r[29]+0x00000010u; psq_load(c,1,ea,1,0);} // 800659EC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800659F0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800659F4
  c->r[3]=c->r[1]+0x00000028u; // 800659F8
  c->lr=0x80065A00u; f_8005DC84(c); // 800659FC
  c->r[3]=c->r[1]+0x00000028u; // 80065A00
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 80065A04
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80065A08
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80065A0C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80065A10
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80065A14
  {uint32_t ea=c->r[2]+0xFFFF82E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80065A18
  fcmp(c,1,c->f[1],c->f[0]); // 80065A1C
  c->r[0]=c->cr; // 80065A20
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 80065A24
  cmps(c,1,(int32_t)c->r[0],0); // 80065A28
  if (!crb(c,6)) { goto L_80065A80; } // 80065A2C
  c->r[4]=0u+0x806A0000u; // 80065A30
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,31,ea,0,0);} // 80065A34
  {double t0=S(c->f[31]*c->f[31]), t1=S(c->ps1[31]*c->ps1[31]); c->f[3]=t0; c->ps1[3]=t1;} // 80065A38
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 80065A3C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[31]); c->f[3]=t0; c->ps1[3]=t1;} // 80065A40
  {uint32_t ea=c->r[4]+0x00000AA8u; c->f[2]=c->ps1[2]=RF32(ea); c->r[4]=ea;} // 80065A44
  {double t0=S(std::fma(c->f[31],c->ps1[3],c->f[3])), t1=S(std::fma(c->ps1[31],c->ps1[3],c->ps1[3])); c->f[31]=t0; c->ps1[31]=t1;} // 80065A48
  fcmp(c,0,c->f[2],c->f[31]); // 80065A4C
  if (crb(c,0)) { goto L_80065A5C; } // 80065A50
  c->f[31]=c->f[2]; // 80065A54
  goto L_80065A84; // 80065A58
L_80065A5C:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80065A5C
  c->f[3]=frsqrte(c->f[31]); // 80065A60
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80065A64
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 80065A68
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80065A6C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[31],-c->f[0])); // 80065A70
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80065A74
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[3]); // 80065A78
  goto L_80065A84; // 80065A7C
L_80065A80:;
  {uint32_t ea=c->r[2]+0xFFFF82E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80065A80
L_80065A84:;
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80065A84
  fcmp(c,1,c->f[0],c->f[31]); // 80065A88
  if (!crb(c,5)) { goto L_80065AC8; } // 80065A8C
  c->r[3]=R32(c->r[29]+0x00000004u); // 80065A90
  cmps(c,1,(int32_t)c->r[3],0); // 80065A94
  if (crb(c,6)) { goto L_80065AC4; } // 80065A98
  c->r[6]=R32(c->r[30]+0x00000000u); // 80065A9C
  c->r[5]=c->r[31]|c->r[31]; // 80065AA0
  c->r[0]=R32(c->r[30]+0x00000004u); // 80065AA4
  c->r[4]=c->r[1]+0x00000008u; // 80065AA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80065AAC
  W32(c->r[1]+0x00000008u,c->r[6]); // 80065AB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80065AB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80065AB8
  c->ctr=c->r[12]; // 80065ABC
  if (true) { c->lr=0x80065AC4u; dispatch(c,c->ctr); } // 80065AC0
L_80065AC4:;
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[31]);} // 80065AC4
L_80065AC8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80065AC8
  c->r[3]=0u+0x00000001u; // 80065ACC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80065AD0
  c->r[11]=c->r[1]+0x00000050u; // 80065AD4
  c->lr=0x80065ADCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80065AD8
  c->r[0]=R32(c->r[1]+0x00000064u); // 80065ADC
  c->lr=c->r[0]; // 80065AE0
  c->r[1]=c->r[1]+0x00000060u; // 80065AE4
  return; // 80065AE8
}

// fn_80065AEC
void f_80065AEC(Ctx* __restrict c) {
  trace_call(0x80065AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065AEC
  c->r[0]=c->lr; // 80065AF0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80065AF4
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065AF8
  c->r[29]=c->r[3]|c->r[3]; // 80065AFC
  c->r[30]=c->r[4]|c->r[4]; // 80065B00
  c->r[31]=c->r[5]|c->r[5]; // 80065B04
  c->r[3]=c->r[3]+0x00000004u; // 80065B08
  c->r[6]=R32(c->r[4]+0x00000000u); // 80065B0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80065B10
  c->r[4]=c->r[1]+0x00000008u; // 80065B14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80065B18
  W32(c->r[1]+0x00000008u,c->r[6]); // 80065B1C
  c->lr=0x80065B24u; f_800E341C(c); // 80065B20
  c->r[0]=R32(c->r[30]+0x00000000u); // 80065B24
  c->r[3]=c->r[1]+0x0000001Cu; // 80065B28
  W32(c->r[29]+0x00000044u,c->r[0]); // 80065B2C
  c->r[4]=c->r[31]+0x000003BCu; // 80065B30
  c->r[0]=R32(c->r[30]+0x00000004u); // 80065B34
  W32(c->r[29]+0x00000048u,c->r[0]); // 80065B38
  c->lr=0x80065B40u; f_8005CD7C(c); // 80065B3C
  c->r[3]=c->r[29]+0x0000004Cu; // 80065B40
  c->r[4]=c->r[1]+0x0000001Cu; // 80065B44
  c->lr=0x80065B4Cu; f_8005DC84(c); // 80065B48
  c->r[3]=c->r[1]+0x00000010u; // 80065B4C
  c->r[4]=c->r[31]+0x000003C8u; // 80065B50
  c->lr=0x80065B58u; f_8005CD7C(c); // 80065B54
  c->r[3]=c->r[29]+0x00000058u; // 80065B58
  c->r[4]=c->r[1]+0x00000010u; // 80065B5C
  c->lr=0x80065B64u; f_8005DC84(c); // 80065B60
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80065B64
  c->r[0]=R32(c->r[1]+0x00000044u); // 80065B68
  c->lr=c->r[0]; // 80065B6C
  c->r[1]=c->r[1]+0x00000040u; // 80065B70
  return; // 80065B74
}

// fn_80065B78
void f_80065B78(Ctx* __restrict c) {
  trace_call(0x80065B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065B78
  c->r[0]=c->lr; // 80065B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80065B80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80065B84
  c->r[31]=c->r[3]|c->r[3]; // 80065B88
  c->r[6]=R32(c->r[3]+0x00000008u); // 80065B8C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80065B90
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80065B94
  if (!crb(c,0)) { goto L_80065BE0; } // 80065B98
  c->r[7]=R32(c->r[3]+0x00000004u); // 80065B9C
  cmps(c,0,(int32_t)c->r[7],0); // 80065BA0
  if (crb(c,2)) { goto L_80065BD4; } // 80065BA4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)100); // 80065BA8
  c->r[6]=R32(c->r[4]+0x00000000u); // 80065BAC
  c->r[3]=R32(c->r[4]+0x00000004u); // 80065BB0
  c->r[4]=c->r[1]+0x00000008u; // 80065BB4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80065BB8
  c->r[3]=c->r[7]+c->r[0]; // 80065BBC
  W32(c->r[1]+0x00000008u,c->r[6]); // 80065BC0
  c->r[12]=R32(c->r[7]+c->r[0]); // 80065BC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80065BC8
  c->ctr=c->r[12]; // 80065BCC
  if (true) { c->lr=0x80065BD4u; dispatch(c,c->ctr); } // 80065BD0
L_80065BD4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80065BD4
  c->r[0]=c->r[3]+0x00000001u; // 80065BD8
  W32(c->r[31]+0x00000008u,c->r[0]); // 80065BDC
L_80065BE0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80065BE0
  c->r[3]=0u+0x00000001u; // 80065BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80065BE8
  c->lr=c->r[0]; // 80065BEC
  c->r[1]=c->r[1]+0x00000020u; // 80065BF0
  return; // 80065BF4
}

// fn_80065BF8
void f_80065BF8(Ctx* __restrict c) {
  trace_call(0x80065BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065BF8
  c->r[0]=c->lr; // 80065BFC
  c->r[5]=0u+0x806D0000u; // 80065C00
  c->r[4]=c->r[3]+0x00010000u; // 80065C04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80065C08
  c->r[0]=0u+0x00000000u; // 80065C0C
  c->r[5]=c->r[5]+0xFFFFE458u; // 80065C10
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065C14
  c->r[29]=c->r[3]|c->r[3]; // 80065C18
  W32(c->r[3]+0x00000000u,c->r[5]); // 80065C1C
  c->r[3]=c->r[4]|c->r[4]; // 80065C20
  c->r[3]=c->r[3]+0x00000338u; // 80065C24
  W32(c->r[4]+0x00000340u,c->r[0]); // 80065C28
  W32(c->r[4]+0x00000344u,c->r[0]); // 80065C2C
  c->lr=0x80065C34u; f_8037E89C(c); // 80065C30
  c->r[3]=0u+0x806D0000u; // 80065C34
  c->r[30]=c->r[29]+0x00010000u; // 80065C38
  c->r[3]=c->r[3]+0xFFFFE448u; // 80065C3C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80065C40
  c->r[31]=c->r[30]+0x00000AC8u; // 80065C44
  c->r[30]=c->r[30]+0x00000348u; // 80065C48
L_80065C4C:;
  c->r[3]=c->r[30]|c->r[30]; // 80065C4C
  c->lr=0x80065C54u; f_803209E8(c); // 80065C50
  c->r[30]=c->r[30]+0x0000003Cu; // 80065C54
  cmpu(c,0,c->r[30],c->r[31]); // 80065C58
  if (crb(c,0)) { IRQCHK(c); goto L_80065C4C; } // 80065C5C
  c->r[3]=c->r[29]|c->r[29]; // 80065C60
  c->lr=0x80065C68u; f_8006643C(c); // 80065C64
  c->r[4]=c->r[29]+0x00010000u; // 80065C68
  c->r[0]=0u+0x00000000u; // 80065C6C
  W32(c->r[4]+0x00000ACCu,c->r[0]); // 80065C70
  c->r[3]=c->r[29]|c->r[29]; // 80065C74
  W32(c->r[4]+0x00000AD0u,c->r[0]); // 80065C78
  W8(c->r[4]+0x00000AD4u,c->r[0]); // 80065C7C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80065C80
  c->r[0]=R32(c->r[1]+0x00000024u); // 80065C84
  c->lr=c->r[0]; // 80065C88
  c->r[1]=c->r[1]+0x00000020u; // 80065C8C
  return; // 80065C90
}

// dtor_80065C94
void f_80065C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065C94
  c->r[0]=c->lr; // 80065C98
  cmps(c,0,(int32_t)c->r[3],0); // 80065C9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065CA4
  c->r[31]=c->r[3]|c->r[3]; // 80065CA8
  if (crb(c,2)) { goto L_80065CE0; } // 80065CAC
  c->r[4]=c->r[3]+0x00010000u; // 80065CB0
  c->r[5]=0u+0x806D0000u; // 80065CB4
  c->r[0]=R32(c->r[4]+0x00000340u); // 80065CB8
  c->r[5]=c->r[5]+0xFFFFE458u; // 80065CBC
  W32(c->r[3]+0x00000000u,c->r[5]); // 80065CC0
  cmps(c,0,(int32_t)c->r[0],0); // 80065CC4
  if (crb(c,2)) { goto L_80065CE0; } // 80065CC8
  c->r[3]=c->r[4]|c->r[4]; // 80065CCC
  c->r[0]=0u+0x00000000u; // 80065CD0
  W32(c->r[4]+0x00000340u,c->r[0]); // 80065CD4
  c->r[3]=c->r[3]+0x00000020u; // 80065CD8
  c->lr=0x80065CE0u; f_8037F1D0(c); // 80065CDC
L_80065CE0:;
  c->r[3]=c->r[31]|c->r[31]; // 80065CE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80065CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065CE8
  c->lr=c->r[0]; // 80065CEC
  c->r[1]=c->r[1]+0x00000010u; // 80065CF0
  return; // 80065CF4
}

// fn_80065CF8
void f_80065CF8(Ctx* __restrict c) {
  trace_call(0x80065CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065CF8
  c->r[0]=c->lr; // 80065CFC
  cmps(c,0,(int32_t)c->r[3],0); // 80065D00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065D04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065D08
  c->r[31]=c->r[3]|c->r[3]; // 80065D0C
  if (crb(c,2)) { goto L_80065D1C; } // 80065D10
  c->r[4]=0u+0x00000000u; // 80065D14
  c->lr=0x80065D1Cu; f_80065C94(c); // 80065D18
L_80065D1C:;
  c->r[3]=c->r[31]|c->r[31]; // 80065D1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80065D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065D24
  c->lr=c->r[0]; // 80065D28
  c->r[1]=c->r[1]+0x00000010u; // 80065D2C
  return; // 80065D30
}

// fn_80065D34
void f_80065D34(Ctx* __restrict c) {
  trace_call(0x80065D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065D34
  c->r[0]=c->lr; // 80065D38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80065D3C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065D40
  c->r[31]=c->r[1]|c->r[1]; // 80065D44
  c->r[0]=R32(c->r[13]+0xFFFFBE10u); // 80065D48
  cmps(c,0,(int32_t)c->r[0],0); // 80065D4C
  if (!crb(c,2)) { goto L_80065DE4; } // 80065D50
  c->r[0]=R8(c->r[13]+0xFFFFBB52u); // 80065D54
  c->r[3]=0u+0x00000000u; // 80065D58
  W8(c->r[31]+0x00000008u,c->r[3]); // 80065D5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80065D60
  if (!crb(c,2)) { goto L_80065DA0; } // 80065D64
  c->r[30]=0u+0x80730000u; // 80065D68
  c->r[3]=c->r[30]+0x00002408u; // 80065D6C
  c->lr=0x80065D74u; f_802D7C5C(c); // 80065D70
  c->r[3]=0u+0x806D0000u; // 80065D74
  c->r[4]=0u+0x80040000u; // 80065D78
  c->r[3]=c->r[3]+0xFFFFC080u; // 80065D7C
  c->r[5]=0u+0x80740000u; // 80065D80
  W32(c->r[30]+0x00002408u,c->r[3]); // 80065D84
  c->r[3]=c->r[30]+0x00002408u; // 80065D88
  c->r[4]=c->r[4]+0x00005C40u; // 80065D8C
  c->r[5]=c->r[5]+0x000078B0u; // 80065D90
  c->lr=0x80065D98u; f_803A92B8(c); // 80065D94
  c->r[0]=0u+0x00000001u; // 80065D98
  W8(c->r[13]+0xFFFFBB52u,c->r[0]); // 80065D9C
L_80065DA0:;
  c->r[3]=0u+0x80730000u; // 80065DA0
  c->r[4]=0u+0x00010000u; // 80065DA4
  c->r[3]=c->r[3]+0x00002408u; // 80065DA8
  c->r[3]=c->r[3]+0x00000034u; // 80065DAC
  c->r[4]=c->r[4]+0x00000AE0u; // 80065DB0
  c->lr=0x80065DB8u; f_803C4D08(c); // 80065DB4
  cmps(c,0,(int32_t)c->r[3],0); // 80065DB8
  c->r[30]=c->r[3]|c->r[3]; // 80065DBC
  if (crb(c,2)) { goto L_80065DE0; } // 80065DC0
  W32(c->r[31]+0x00000024u,c->r[1]); // 80065DC4
  c->lr=0x80065DCCu; f_80065BF8(c); // 80065DC8
  goto L_80065DE0; // 80065DCC
  c->r[3]=0u+0x00000000u; // 80065DD0
  c->r[4]=0u+0x00000000u; // 80065DD4
  c->r[5]=0u+0x00000000u; // 80065DD8
  c->lr=0x80065DE0u; f_803ABBF0(c); // 80065DDC
L_80065DE0:;
  W32(c->r[13]+0xFFFFBE10u,c->r[30]); // 80065DE0
L_80065DE4:;
  c->r[10]=c->r[31]|c->r[31]; // 80065DE4
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80065DE8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80065DEC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80065DF0
  c->r[1]=c->r[10]|c->r[10]; // 80065DF4
  c->lr=c->r[0]; // 80065DF8
  return; // 80065DFC
}

// fn_80065E00
void f_80065E00(Ctx* __restrict c) {
  trace_call(0x80065E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065E00
  c->r[0]=c->lr; // 80065E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065E0C
  c->r[31]=c->r[3]|c->r[3]; // 80065E10
  c->lr=0x80065E18u; f_8006643C(c); // 80065E14
  c->lr=0x80065E1Cu; f_8004DB5C(c); // 80065E18
  c->lr=0x80065E20u; f_80321B88(c); // 80065E1C
  c->lr=0x80065E24u; f_8004DB5C(c); // 80065E20
  c->lr=0x80065E28u; f_802CD278(c); // 80065E24
  c->r[4]=0u+0x00000000u; // 80065E28
  c->lr=0x80065E30u; f_802CF328(c); // 80065E2C
  c->r[3]=c->r[31]+0x00010000u; // 80065E30
  c->r[0]=0u+0x00000001u; // 80065E34
  c->r[4]=0u+0x80060000u; // 80065E38
  W8(c->r[3]+0x00000AD4u,c->r[0]); // 80065E3C
  c->r[6]=c->r[3]|c->r[3]; // 80065E40
  c->r[5]=c->r[31]|c->r[31]; // 80065E44
  c->r[4]=c->r[4]+0x00005EA0u; // 80065E48
  c->r[7]=0u+0x00010000u; // 80065E4C
  c->r[8]=0u+0x00000019u; // 80065E50
  c->r[9]=0u+0x00000001u; // 80065E54
  c->r[3]=c->r[3]+0x00000020u; // 80065E58
  c->r[6]=c->r[6]+0x00000020u; // 80065E5C
  c->lr=0x80065E64u; f_8037EE80(c); // 80065E60
  c->r[4]=c->r[31]+0x00010000u; // 80065E64
  cmps(c,0,(int32_t)c->r[3],0); // 80065E68
  W32(c->r[4]+0x00000340u,c->r[3]); // 80065E6C
  if (crb(c,2)) { goto L_80065E80; } // 80065E70
  c->r[3]=c->r[4]|c->r[4]; // 80065E74
  c->r[3]=c->r[3]+0x00000020u; // 80065E78
  c->lr=0x80065E80u; f_8037F4F0(c); // 80065E7C
L_80065E80:;
  c->r[3]=c->r[31]+0x00010000u; // 80065E80
  c->r[0]=0u+0x00000000u; // 80065E84
  W32(c->r[3]+0x00000344u,c->r[0]); // 80065E88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80065E90
  c->lr=c->r[0]; // 80065E94
  c->r[1]=c->r[1]+0x00000010u; // 80065E98
  return; // 80065E9C
}

// fn_80065EA0
void f_80065EA0(Ctx* __restrict c) {
  trace_call(0x80065EA0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80065EA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80065EA4
  c->ctr=c->r[12]; // 80065EA8
  if (true) { dispatch(c,c->ctr); return; } // 80065EAC
}

// fn_80065EB0
void f_80065EB0(Ctx* __restrict c) {
  trace_call(0x80065EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065EB0
  c->r[0]=c->lr; // 80065EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80065EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80065EBC
  c->r[31]=c->r[3]|c->r[3]; // 80065EC0
  c->lr=0x80065EC8u; f_8006643C(c); // 80065EC4
  c->lr=0x80065ECCu; f_8004DB5C(c); // 80065EC8
  c->lr=0x80065ED0u; f_80321390(c); // 80065ECC
  c->lr=0x80065ED4u; f_8004DB5C(c); // 80065ED0
  c->lr=0x80065ED8u; f_802CD278(c); // 80065ED4
  c->r[4]=0u+0x00000000u; // 80065ED8
  c->lr=0x80065EE0u; f_802CF328(c); // 80065EDC
  c->r[3]=c->r[31]+0x00010000u; // 80065EE0
  c->r[0]=0u+0x00000000u; // 80065EE4
  W32(c->r[3]+0x00000AD0u,c->r[0]); // 80065EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80065EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80065EF0
  c->lr=c->r[0]; // 80065EF4
  c->r[1]=c->r[1]+0x00000010u; // 80065EF8
  return; // 80065EFC
}

// fn_80065F00
void f_80065F00(Ctx* __restrict c) {
  trace_call(0x80065F00u);
  c->r[3]=c->r[3]+0x00010000u; // 80065F00
  c->r[3]=R8(c->r[3]+0x00000AD4u); // 80065F04
  return; // 80065F08
}

// fn_80065F0C
void f_80065F0C(Ctx* __restrict c) {
  trace_call(0x80065F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065F0C
  c->r[0]=c->lr; // 80065F10
  W32(c->r[1]+0x00000114u,c->r[0]); // 80065F14
  c->r[0]=c->r[4]|c->r[4]; // 80065F18
  c->r[4]=0u+0x80690000u; // 80065F1C
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065F20
  c->r[30]=c->r[3]|c->r[3]; // 80065F24
  c->r[31]=c->r[5]|c->r[5]; // 80065F28
  c->r[5]=c->r[0]|c->r[0]; // 80065F2C
  c->r[3]=c->r[1]+0x00000008u; // 80065F30
  c->r[4]=c->r[4]+0xFFFFBA80u; // 80065F34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80065F38
  c->lr=0x80065F40u; f_803B1FC8(c); // 80065F3C
  cmps(c,0,(int32_t)c->r[31],3); // 80065F40
  if (crb(c,2)) { goto L_80065F54; } // 80065F44
  cmps(c,0,(int32_t)c->r[31],0); // 80065F48
  if (crb(c,2)) { goto L_80065F90; } // 80065F4C
  goto L_80065FC8; // 80065F50
L_80065F54:;
  c->r[4]=c->r[30]+0x00010000u; // 80065F54
  c->r[0]=0u+0x00000000u; // 80065F58
  c->r[3]=0u+0x80740000u; // 80065F5C
  c->r[5]=0u+0x80060000u; // 80065F60
  W32(c->r[4]+0x00000ACCu,c->r[0]); // 80065F64
  c->r[6]=c->r[31]|c->r[31]; // 80065F68
  c->r[3]=c->r[3]+0x00004FD0u; // 80065F6C
  c->r[4]=c->r[1]+0x00000008u; // 80065F70
  c->r[5]=c->r[5]+0x00006528u; // 80065F74
  c->r[7]=0u+0x00000002u; // 80065F78
  c->r[8]=0u+0x00000000u; // 80065F7C
  c->r[9]=0u+0x00000000u; // 80065F80
  c->r[10]=0u+0x00000001u; // 80065F84
  c->lr=0x80065F8Cu; f_80312A60(c); // 80065F88
  goto L_80065FC8; // 80065F8C
L_80065F90:;
  c->r[4]=c->r[30]+0x00010000u; // 80065F90
  c->r[0]=0u+0x00000000u; // 80065F94
  c->r[3]=0u+0x80740000u; // 80065F98
  c->r[5]=0u+0x80060000u; // 80065F9C
  W32(c->r[4]+0x00000AD0u,c->r[0]); // 80065FA0
  c->r[6]=c->r[31]|c->r[31]; // 80065FA4
  c->r[3]=c->r[3]+0x00005408u; // 80065FA8
  c->r[4]=c->r[1]+0x00000008u; // 80065FAC
  c->r[5]=c->r[5]+0x00006554u; // 80065FB0
  c->r[7]=0u+0x00000002u; // 80065FB4
  c->r[8]=0u+0x00000000u; // 80065FB8
  c->r[9]=0u+0x00000000u; // 80065FBC
  c->r[10]=0u+0x00000001u; // 80065FC0
  c->lr=0x80065FC8u; f_80312A60(c); // 80065FC4
L_80065FC8:;
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80065FC8
  c->r[0]=R32(c->r[1]+0x00000114u); // 80065FCC
  c->lr=c->r[0]; // 80065FD0
  c->r[1]=c->r[1]+0x00000110u; // 80065FD4
  return; // 80065FD8
}

// fn_80065FDC
void f_80065FDC(Ctx* __restrict c) {
  trace_call(0x80065FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80065FDC
  c->r[0]=c->lr; // 80065FE0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80065FE4
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80065FE8
  c->r[27]=c->r[3]|c->r[3]; // 80065FEC
  c->r[28]=c->r[4]|c->r[4]; // 80065FF0
  c->r[29]=c->r[5]|c->r[5]; // 80065FF4
  c->r[30]=c->r[6]|c->r[6]; // 80065FF8
  c->r[31]=c->r[7]|c->r[7]; // 80065FFC
  c->r[3]=c->r[1]+0x00000044u; // 80066000
  c->lr=0x80066008u; f_803209E8(c); // 80066004
  cmps(c,0,(int32_t)c->r[28],0); // 80066008
  if (crb(c,2)) { goto L_8006606C; } // 8006600C
  c->r[0]=R8(c->r[28]+0x00000000u); // 80066010
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80066014
  if (crb(c,2)) { goto L_8006606C; } // 80066018
  cmps(c,0,(int32_t)c->r[31],0); // 8006601C
  if (!crb(c,2)) { goto L_80066028; } // 80066020
  c->r[31]=c->r[1]+0x00000044u; // 80066024
L_80066028:;
  c->lr=0x8006602Cu; f_8004DB5C(c); // 80066028
  c->r[4]=c->r[3]|c->r[3]; // 8006602C
  c->r[5]=c->r[28]|c->r[28]; // 80066030
  c->r[3]=c->r[1]+0x00000008u; // 80066034
  c->r[6]=0u+0x00000001u; // 80066038
  c->lr=0x80066040u; f_80321B90(c); // 8006603C
  c->r[4]=c->r[31]|c->r[31]; // 80066040
  c->r[3]=c->r[1]+0x00000008u; // 80066044
  c->lr=0x8006604Cu; f_80382F2C(c); // 80066048
  c->r[3]=c->r[31]+0x00000030u; // 8006604C
  c->r[4]=c->r[1]+0x00000038u; // 80066050
  c->lr=0x80066058u; f_80495690(c); // 80066054
  c->r[3]=c->r[27]|c->r[27]; // 80066058
  c->r[4]=c->r[31]|c->r[31]; // 8006605C
  c->r[5]=c->r[29]|c->r[29]; // 80066060
  c->r[6]=c->r[30]|c->r[30]; // 80066064
  c->lr=0x8006606Cu; f_800660C8(c); // 80066068
L_8006606C:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006606C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80066070
  c->lr=c->r[0]; // 80066074
  c->r[1]=c->r[1]+0x000000A0u; // 80066078
  return; // 8006607C
}

// fn_80066080
void f_80066080(Ctx* __restrict c) {
  trace_call(0x80066080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80066080
  c->r[0]=c->lr; // 80066084
  W32(c->r[1]+0x00000014u,c->r[0]); // 80066088
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006608C
  c->r[30]=c->r[3]|c->r[3]; // 80066090
  c->r[31]=c->r[4]|c->r[4]; // 80066094
  c->r[3]=c->r[31]|c->r[31]; // 80066098
  c->r[4]=c->r[30]|c->r[30]; // 8006609C
  c->lr=0x800660A4u; f_80382F2C(c); // 800660A0
  c->r[3]=c->r[30]+0x00000030u; // 800660A4
  c->r[4]=c->r[31]+0x00000030u; // 800660A8
  c->lr=0x800660B0u; f_80495690(c); // 800660AC
  c->r[3]=c->r[30]|c->r[30]; // 800660B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800660B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800660B8
  c->lr=c->r[0]; // 800660BC
  c->r[1]=c->r[1]+0x00000010u; // 800660C0
  return; // 800660C4
}

