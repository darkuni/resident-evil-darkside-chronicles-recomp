#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_804BB19C
void f_804BB19C(Ctx* __restrict c) {
  trace_call(0x804BB19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB19C
  c->r[0]=c->lr; // 804BB1A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BB1A4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804BB1A8
  c->f[31]=c->f[1]; // 804BB1AC
  W32(c->r[1]+0x00000014u,c->r[31]); // 804BB1B0
  c->r[31]=0u+0x00000000u; // 804BB1B4
  W32(c->r[1]+0x00000010u,c->r[30]); // 804BB1B8
  c->r[30]=0u+0x00000000u; // 804BB1BC
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804BB1C0
  c->r[29]=c->r[3]|c->r[3]; // 804BB1C4
  goto L_804BB1F8; // 804BB1C8
L_804BB1CC:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804BB1CC
  c->r[3]=R32(c->r[3]+c->r[31]); // 804BB1D0
  cmps(c,0,(int32_t)c->r[3],0); // 804BB1D4
  if (crb(c,2)) { goto L_804BB1F0; } // 804BB1D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB1DC
  c->f[1]=c->f[31]; // 804BB1E0
  c->r[12]=R32(c->r[12]+0x00000028u); // 804BB1E4
  c->ctr=c->r[12]; // 804BB1E8
  if (true) { c->lr=0x804BB1F0u; dispatch(c,c->ctr); } // 804BB1EC
L_804BB1F0:;
  c->r[31]=c->r[31]+0x00000004u; // 804BB1F0
  c->r[30]=c->r[30]+0x00000001u; // 804BB1F4
L_804BB1F8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804BB1F8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804BB1FC
  if (crb(c,0)) { IRQCHK(c); goto L_804BB1CC; } // 804BB200
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BB204
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804BB208
  c->r[31]=R32(c->r[1]+0x00000014u); // 804BB20C
  c->r[30]=R32(c->r[1]+0x00000010u); // 804BB210
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804BB214
  c->lr=c->r[0]; // 804BB218
  c->r[1]=c->r[1]+0x00000020u; // 804BB21C
  return; // 804BB220
}

// fn_804BB224
void f_804BB224(Ctx* __restrict c) {
  trace_call(0x804BB224u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804BB224
  c->r[6]=0u+0x00000000u; // 804BB228
  c->r[5]=0u+0x00000000u; // 804BB22C
  c->ctr=c->r[0]; // 804BB230
  cmps(c,0,(int32_t)c->r[0],0); // 804BB234
  if (!crb(c,1)) { goto L_804BB270; } // 804BB238
L_804BB23C:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804BB23C
  c->r[0]=R32(c->r[4]+c->r[5]); // 804BB240
  cmps(c,0,(int32_t)c->r[0],0); // 804BB244
  if (crb(c,2)) { goto L_804BB264; } // 804BB248
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804BB24C
  c->r[3]=R32(c->r[4]+c->r[0]); // 804BB250
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB254
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804BB258
  c->ctr=c->r[12]; // 804BB25C
  if (true) { dispatch(c,c->ctr); return; } // 804BB260
L_804BB264:;
  c->r[5]=c->r[5]+0x00000004u; // 804BB264
  c->r[6]=c->r[6]+0x00000001u; // 804BB268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BB23C; } // 804BB26C
L_804BB270:;
  {uint32_t ea=c->r[2]+0x000015BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BB270
  return; // 804BB274
}

// fn_804BB278
void f_804BB278(Ctx* __restrict c) {
  trace_call(0x804BB278u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB278
  c->r[0]=c->lr; // 804BB27C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BB280
  c->r[11]=c->r[1]+0x00000030u; // 804BB284
  c->lr=0x804BB28Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BB288
  c->r[25]=c->r[3]|c->r[3]; // 804BB28C
  c->r[26]=c->r[4]|c->r[4]; // 804BB290
  c->r[29]=0u+0x00000000u; // 804BB294
  c->r[28]=0u+0x00000000u; // 804BB298
  c->r[30]=0u+0x00000000u; // 804BB29C
  c->r[31]=0u+0x00000000u; // 804BB2A0
  goto L_804BB330; // 804BB2A4
L_804BB2A8:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 804BB2A8
  c->r[27]=R32(c->r[3]+c->r[30]); // 804BB2AC
  cmps(c,0,(int32_t)c->r[27],0); // 804BB2B0
  if (crb(c,2)) { goto L_804BB328; } // 804BB2B4
  c->r[0]=R32(c->r[26]+0x00000000u); // 804BB2B8
  c->r[3]=c->r[27]|c->r[27]; // 804BB2BC
  c->r[4]=c->r[1]+0x00000008u; // 804BB2C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BB2C4
  c->r[12]=R32(c->r[27]+0x00000000u); // 804BB2C8
  c->r[12]=R32(c->r[12]+0x00000030u); // 804BB2CC
  c->ctr=c->r[12]; // 804BB2D0
  if (true) { c->lr=0x804BB2D8u; dispatch(c,c->ctr); } // 804BB2D4
  cmps(c,0,(int32_t)c->r[29],0); // 804BB2D8
  c->r[29]=0u+0x00000000u; // 804BB2DC
  if (!crb(c,2)) { goto L_804BB2EC; } // 804BB2E0
  cmps(c,0,(int32_t)c->r[3],0); // 804BB2E4
  if (crb(c,2)) { goto L_804BB2F0; } // 804BB2E8
L_804BB2EC:;
  c->r[29]=0u+0x00000001u; // 804BB2EC
L_804BB2F0:;
  c->r[5]=0u+0x00000000u; // 804BB2F0
  c->r[4]=0u+0x00000000u; // 804BB2F4
  goto L_804BB31C; // 804BB2F8
L_804BB2FC:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804BB2FC
  c->r[0]=R16(c->r[3]+c->r[4]); // 804BB300
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804BB304
  if (!crb(c,2)) { goto L_804BB314; } // 804BB308
  c->r[3]=R32(c->r[25]+0x00000014u); // 804BB30C
  W16(c->r[3]+c->r[4],c->r[31]); // 804BB310
L_804BB314:;
  c->r[4]=c->r[4]+0x00000002u; // 804BB314
  c->r[5]=c->r[5]+0x00000001u; // 804BB318
L_804BB31C:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 804BB31C
  cmpu(c,0,c->r[5],c->r[0]); // 804BB320
  if (crb(c,0)) { IRQCHK(c); goto L_804BB2FC; } // 804BB324
L_804BB328:;
  c->r[30]=c->r[30]+0x00000004u; // 804BB328
  c->r[28]=c->r[28]+0x00000001u; // 804BB32C
L_804BB330:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 804BB330
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804BB334
  if (crb(c,0)) { IRQCHK(c); goto L_804BB2A8; } // 804BB338
  c->r[3]=c->r[25]|c->r[25]; // 804BB33C
  c->r[4]=0u+0x00000004u; // 804BB340
  c->r[5]=0u+0x00000001u; // 804BB344
  c->lr=0x804BB34Cu; f_804BDBC0(c); // 804BB348
  c->r[11]=c->r[1]+0x00000030u; // 804BB34C
  c->r[3]=c->r[29]|c->r[29]; // 804BB350
  c->lr=0x804BB358u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BB354
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BB358
  c->lr=c->r[0]; // 804BB35C
  c->r[1]=c->r[1]+0x00000030u; // 804BB360
  return; // 804BB364
}

// fn_804BB368
void f_804BB368(Ctx* __restrict c) {
  trace_call(0x804BB368u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB368
  c->r[0]=c->lr; // 804BB36C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BB370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BB374
  c->r[31]=0u+0x00000000u; // 804BB378
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BB37C
  c->r[30]=0u+0x00000000u; // 804BB380
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BB384
  c->r[29]=c->r[3]|c->r[3]; // 804BB388
  goto L_804BB3B8; // 804BB38C
L_804BB390:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804BB390
  c->r[3]=R32(c->r[3]+c->r[31]); // 804BB394
  cmps(c,0,(int32_t)c->r[3],0); // 804BB398
  if (crb(c,2)) { goto L_804BB3B0; } // 804BB39C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB3A0
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BB3A4
  c->ctr=c->r[12]; // 804BB3A8
  if (true) { c->lr=0x804BB3B0u; dispatch(c,c->ctr); } // 804BB3AC
L_804BB3B0:;
  c->r[31]=c->r[31]+0x00000004u; // 804BB3B0
  c->r[30]=c->r[30]+0x00000001u; // 804BB3B4
L_804BB3B8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804BB3B8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804BB3BC
  if (crb(c,0)) { IRQCHK(c); goto L_804BB390; } // 804BB3C0
  c->r[3]=0u+0x00010000u; // 804BB3C4
  c->r[5]=0u+0x00000000u; // 804BB3C8
  c->r[4]=c->r[3]+0xFFFF8000u; // 804BB3CC
  c->r[6]=0u+0x00000000u; // 804BB3D0
  goto L_804BB3E8; // 804BB3D4
L_804BB3D8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BB3D8
  c->r[5]=c->r[5]+0x00000001u; // 804BB3DC
  W16(c->r[3]+c->r[6],c->r[4]); // 804BB3E0
  c->r[6]=c->r[6]+0x00000002u; // 804BB3E4
L_804BB3E8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BB3E8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804BB3EC
  if (crb(c,0)) { IRQCHK(c); goto L_804BB3D8; } // 804BB3F0
  c->r[3]=c->r[29]|c->r[29]; // 804BB3F4
  c->r[4]=0u+0x00000004u; // 804BB3F8
  c->r[5]=0u+0x00000000u; // 804BB3FC
  c->lr=0x804BB404u; f_804BDBC0(c); // 804BB400
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BB404
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BB408
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BB40C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BB410
  c->lr=c->r[0]; // 804BB414
  c->r[1]=c->r[1]+0x00000020u; // 804BB418
  return; // 804BB41C
}

// fn_804BB420
void f_804BB420(Ctx* __restrict c) {
  trace_call(0x804BB420u);
  c->r[5]=0u+0x00010000u; // 804BB420
  c->r[0]=c->r[5]+0x00000002u; // 804BB424
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BB428
  if (crb(c,2)) { goto L_804BB4A8; } // 804BB42C
  if (!crb(c,0)) { goto L_804BB444; } // 804BB430
  c->r[0]=c->r[5]+0x00000001u; // 804BB434
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BB438
  if (!crb(c,0)) { goto L_804BB454; } // 804BB43C
  return; // 804BB440
L_804BB444:;
  c->r[0]=c->r[5]+0x00000004u; // 804BB444
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BB448
  if (!crb(c,0)) return; // 804BB44C
  goto L_804BB49C; // 804BB450
L_804BB454:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804BB454
  c->r[4]=0u+0x00000000u; // 804BB458
  c->r[7]=0u+0x00000000u; // 804BB45C
  c->ctr=c->r[0]; // 804BB460
  cmps(c,0,(int32_t)c->r[0],0); // 804BB464
  if (!crb(c,1)) return; // 804BB468
L_804BB46C:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804BB46C
  c->r[0]=R32(c->r[5]+c->r[7]); // 804BB470
  cmpu(c,0,c->r[0],c->r[6]); // 804BB474
  if (!crb(c,2)) { goto L_804BB48C; } // 804BB478
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB47C
  c->r[12]=R32(c->r[12]+0x00000040u); // 804BB480
  c->ctr=c->r[12]; // 804BB484
  if (true) { dispatch(c,c->ctr); return; } // 804BB488
L_804BB48C:;
  c->r[7]=c->r[7]+0x00000004u; // 804BB48C
  c->r[4]=c->r[4]+0x00000001u; // 804BB490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BB46C; } // 804BB494
  return; // 804BB498
L_804BB49C:;
  c->r[0]=0u+0x00000000u; // 804BB49C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BB4A0
  return; // 804BB4A4
L_804BB4A8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804BB4A8
  return; // 804BB4AC
}

// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
void f_804BB4B0(Ctx* __restrict c) {
  trace_call(0x804BB4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB4B0
  c->r[0]=c->lr; // 804BB4B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BB4B8
  c->r[11]=c->r[1]+0x00000030u; // 804BB4BC
  c->lr=0x804BB4C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BB4C0
  c->r[0]=R32(c->r[5]+0x00000000u); // 804BB4C4
  c->r[25]=c->r[3]|c->r[3]; // 804BB4C8
  c->r[29]=c->r[4]|c->r[4]; // 804BB4CC
  c->r[30]=c->r[6]|c->r[6]; // 804BB4D0
  cmps(c,0,(int32_t)c->r[0],0); // 804BB4D4
  if (!crb(c,2)) { goto L_804BB4E4; } // 804BB4D8
  c->r[3]=0u+0x00000000u; // 804BB4DC
  goto L_804BB60C; // 804BB4E0
L_804BB4E4:;
  c->r[3]=c->r[5]|c->r[5]; // 804BB4E4
  c->lr=0x804BB4ECu; f_804AC62C(c); // 804BB4E8
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804BB4EC
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 804BB4F0
  c->r[0]=c->r[4]+0x00000027u; // 804BB4F4
  c->r[28]=c->r[3]|c->r[3]; // 804BB4F8
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BB4FC
  cmps(c,0,(int32_t)c->r[29],0); // 804BB500
  c->r[3]=c->r[27]+c->r[5]; // 804BB504
  c->r[0]=c->r[3]+0x00000003u; // 804BB508
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BB50C
  c->r[3]=c->r[26]+c->r[5]; // 804BB510
  c->r[0]=c->r[3]+0x00000003u; // 804BB514
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BB518
  if (crb(c,2)) { goto L_804BB524; } // 804BB51C
  W32(c->r[29]+0x00000000u,c->r[4]); // 804BB520
L_804BB524:;
  cmps(c,0,(int32_t)c->r[25],0); // 804BB524
  if (!crb(c,2)) { goto L_804BB534; } // 804BB528
  c->r[3]=0u+0x00000000u; // 804BB52C
  goto L_804BB60C; // 804BB530
L_804BB534:;
  c->r[3]=c->r[25]|c->r[25]; // 804BB534
  c->lr=0x804BB53Cu; f_803C4D08(c); // 804BB538
  cmps(c,0,(int32_t)c->r[3],0); // 804BB53C
  c->r[31]=c->r[3]|c->r[3]; // 804BB540
  if (!crb(c,2)) { goto L_804BB550; } // 804BB544
  c->r[3]=0u+0x00000000u; // 804BB548
  goto L_804BB60C; // 804BB54C
L_804BB550:;
  if (crb(c,2)) { goto L_804BB608; } // 804BB550
  c->r[29]=0u+0x00000000u; // 804BB554
  c->r[12]=0u+0x80720000u; // 804BB558
  W32(c->r[3]+0x00000004u,c->r[29]); // 804BB55C
  c->r[12]=c->r[12]+0xFFFFA208u; // 804BB560
  c->r[0]=c->r[3]+0x00000024u; // 804BB564
  W32(c->r[3]+0x00000008u,c->r[25]); // 804BB568
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 804BB56C
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BB570
  W32(c->r[3]+0x00000010u,c->r[28]); // 804BB574
  W32(c->r[3]+0x00000014u,c->r[0]); // 804BB578
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BB57C
  c->ctr=c->r[12]; // 804BB580
  if (true) { c->lr=0x804BB588u; dispatch(c,c->ctr); } // 804BB584
  c->r[3]=0u+0x80720000u; // 804BB588
  c->r[0]=c->r[31]+c->r[27]; // 804BB58C
  c->r[3]=c->r[3]+0xFFFFA1B8u; // 804BB590
  c->r[4]=0u+0x00000000u; // 804BB594
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BB598
  c->r[5]=0u+0x00000000u; // 804BB59C
  W32(c->r[31]+0x00000018u,c->r[30]); // 804BB5A0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 804BB5A4
  goto L_804BB5BC; // 804BB5A8
L_804BB5AC:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804BB5AC
  c->r[4]=c->r[4]+0x00000001u; // 804BB5B0
  W32(c->r[3]+c->r[5],c->r[29]); // 804BB5B4
  c->r[5]=c->r[5]+0x00000004u; // 804BB5B8
L_804BB5BC:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804BB5BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BB5C0
  if (crb(c,0)) { IRQCHK(c); goto L_804BB5AC; } // 804BB5C4
  c->r[3]=0u+0x80720000u; // 804BB5C8
  c->r[0]=c->r[31]+c->r[26]; // 804BB5CC
  c->r[3]=c->r[3]+0xFFFFA168u; // 804BB5D0
  {uint32_t ea=c->r[2]+0x000015BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB5D4
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BB5D8
  c->r[4]=0u+0x00000000u; // 804BB5DC
  c->r[5]=0u+0x00000000u; // 804BB5E0
  W32(c->r[31]+0x00000020u,c->r[0]); // 804BB5E4
  goto L_804BB5FC; // 804BB5E8
L_804BB5EC:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 804BB5EC
  c->r[4]=c->r[4]+0x00000001u; // 804BB5F0
  {uint32_t ea=c->r[3]+c->r[5]; WF32(ea,c->f[0]);} // 804BB5F4
  c->r[5]=c->r[5]+0x00000004u; // 804BB5F8
L_804BB5FC:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804BB5FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BB600
  if (crb(c,0)) { IRQCHK(c); goto L_804BB5EC; } // 804BB604
L_804BB608:;
  c->r[3]=c->r[31]|c->r[31]; // 804BB608
L_804BB60C:;
  c->r[11]=c->r[1]+0x00000030u; // 804BB60C
  c->lr=0x804BB614u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BB610
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BB614
  c->lr=c->r[0]; // 804BB618
  c->r[1]=c->r[1]+0x00000030u; // 804BB61C
  return; // 804BB620
}

// fn_804BB624
void f_804BB624(Ctx* __restrict c) {
  trace_call(0x804BB624u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB624
  c->r[0]=c->lr; // 804BB628
  W32(c->r[1]+0x00000064u,c->r[0]); // 804BB62C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804BB630
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804BB634
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804BB638
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804BB63C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 804BB640
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 804BB644
  c->r[11]=c->r[1]+0x00000030u; // 804BB648
  c->lr=0x804BB650u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BB64C
  c->r[23]=c->r[3]|c->r[3]; // 804BB650
  c->r[24]=c->r[4]|c->r[4]; // 804BB654
  c->r[25]=c->r[5]|c->r[5]; // 804BB658
  c->lr=0x804BB660u; f_804C4FF8(c); // 804BB65C
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[30]=c->ps1[30]=RF32(ea);} // 804BB660
  c->r[28]=c->r[3]|c->r[3]; // 804BB664
  c->r[30]=c->r[28]|c->r[28]; // 804BB668
  c->r[29]=rotl(c->r[25],1)&0xFFFFFFFEu; // 804BB66C
  c->f[31]=c->f[30]; // 804BB670
  c->r[27]=0u+0x00000000u; // 804BB674
  c->r[26]=0u+0x00000000u; // 804BB678
  c->r[31]=0u+0x00000000u; // 804BB67C
  goto L_804BB708; // 804BB680
L_804BB684:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 804BB684
  c->r[3]=R32(c->r[23]+0x0000001Cu); // 804BB688
  {uint32_t ea=c->r[4]+c->r[31]; c->f[29]=c->ps1[29]=RF32(ea);} // 804BB68C
  c->r[3]=R32(c->r[3]+c->r[31]); // 804BB690
  fcmp(c,0,c->f[31],c->f[29]); // 804BB694
  c->r[0]=0u-c->r[3]; // 804BB698
  c->r[0]=c->r[0]|c->r[3]; // 804BB69C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804BB6A0
  c->r[0]=c->cr; // 804BB6A4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 804BB6A8
  c->r[0]=c->r[0]^0x00000001u; // 804BB6AC
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 804BB6B0
  if (crb(c,2)) { goto L_804BB700; } // 804BB6B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 804BB6B8
  c->r[0]=R16(c->r[29]+c->r[0]); // 804BB6BC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804BB6C0
  if (!crb(c,2)) { goto L_804BB700; } // 804BB6C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB6C8
  c->r[4]=c->r[30]|c->r[30]; // 804BB6CC
  c->r[5]=c->r[25]|c->r[25]; // 804BB6D0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804BB6D4
  c->ctr=c->r[12]; // 804BB6D8
  if (true) { c->lr=0x804BB6E0u; dispatch(c,c->ctr); } // 804BB6DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BB6E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BB6E4
  if (crb(c,2)) { goto L_804BB700; } // 804BB6E8
  W32(c->r[30]+0x00000218u,c->r[3]); // 804BB6EC
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[29]); // 804BB6F0
  c->r[27]=c->r[27]+0x00000001u; // 804BB6F4
  {uint32_t ea=c->r[30]+0x0000021Cu; WF32(ea,c->f[29]);} // 804BB6F8
  c->r[30]=c->r[30]+0x00000220u; // 804BB6FC
L_804BB700:;
  c->r[31]=c->r[31]+0x00000004u; // 804BB700
  c->r[26]=c->r[26]+0x00000001u; // 804BB704
L_804BB708:;
  c->r[0]=R32(c->r[23]+0x00000018u); // 804BB708
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 804BB70C
  if (crb(c,0)) { IRQCHK(c); goto L_804BB684; } // 804BB710
  cmps(c,0,(int32_t)c->r[27],0); // 804BB714
  if (!crb(c,2)) { goto L_804BB72C; } // 804BB718
  c->r[0]=0u+0x00000000u; // 804BB71C
  c->r[3]=c->r[24]|c->r[24]; // 804BB720
  W32(c->r[24]+0x00000000u,c->r[0]); // 804BB724
  goto L_804BB8FC; // 804BB728
L_804BB72C:;
  cmps(c,0,(int32_t)c->r[27],1); // 804BB72C
  if (!crb(c,2)) { goto L_804BB7A0; } // 804BB730
  c->r[3]=R32(c->r[28]+0x00000218u); // 804BB734
  cmpu(c,0,c->r[3],c->r[28]); // 804BB738
  if (!crb(c,2)) { goto L_804BB8FC; } // 804BB73C
  c->r[6]=R32(c->r[3]+0x00000000u); // 804BB740
  c->r[0]=0u+0x00000040u; // 804BB744
  c->r[5]=c->r[24]+0x00000014u; // 804BB748
  c->r[4]=c->r[3]+0x00000014u; // 804BB74C
  W32(c->r[24]+0x00000000u,c->r[6]); // 804BB750
  c->r[6]=R32(c->r[3]+0x00000004u); // 804BB754
  W32(c->r[24]+0x00000004u,c->r[6]); // 804BB758
  c->r[7]=R32(c->r[3]+0x00000008u); // 804BB75C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804BB760
  W32(c->r[24]+0x00000008u,c->r[7]); // 804BB764
  W32(c->r[24]+0x0000000Cu,c->r[6]); // 804BB768
  c->r[6]=R32(c->r[3]+0x00000010u); // 804BB76C
  W32(c->r[24]+0x00000010u,c->r[6]); // 804BB770
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB774
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 804BB778
  c->ctr=c->r[0]; // 804BB77C
L_804BB780:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 804BB780
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 804BB784
  W32(c->r[5]+0x00000004u,c->r[3]); // 804BB788
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 804BB78C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BB780; } // 804BB790
  c->r[3]=c->r[24]|c->r[24]; // 804BB794
  goto L_804BB8FC; // 804BB798
  goto L_804BB8FC; // 804BB79C
L_804BB7A0:;
  c->r[3]=R32(c->r[28]+0x00000218u); // 804BB7A0
  c->f[3]=c->ps1[3]=fres(c->f[30]); // 804BB7A4
  c->r[0]=0u+0x00000000u; // 804BB7A8
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BB7AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 804BB7B0
  c->r[3]=0u+0x00000000u; // 804BB7B4
  W32(c->r[24]+0x00000000u,c->r[4]); // 804BB7B8
  W32(c->r[24]+0x00000004u,c->r[0]); // 804BB7BC
  {double t0=S(c->f[3]+c->f[3]), t1=S(c->ps1[3]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804BB7C0
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804BB7C4
  c->r[4]=R32(c->r[28]+0x00000218u); // 804BB7C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BB7CC
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 804BB7D0
  W32(c->r[24]+0x00000008u,c->r[0]); // 804BB7D4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 804BB7D8
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 804BB7DC
  c->r[0]=R32(c->r[4]+0x00000010u); // 804BB7E0
  W32(c->r[24]+0x00000010u,c->r[0]); // 804BB7E4
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[2]);} // 804BB7E8
  goto L_804BB8F0; // 804BB7EC
L_804BB7F0:;
  {uint32_t ea=c->r[28]+0x0000021Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB7F0
  c->r[10]=0u+0x00000000u; // 804BB7F4
  c->r[9]=R32(c->r[28]+0x00000218u); // 804BB7F8
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[3]); // 804BB7FC
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB800
  {uint32_t ea=c->r[9]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BB804
  c->r[6]=c->r[9]+0x00000018u; // 804BB808
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804BB80C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804BB810
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 804BB814
  goto L_804BB8DC; // 804BB818
L_804BB81C:;
  c->r[8]=R32(c->r[24]+0x00000004u); // 804BB81C
  c->r[7]=c->r[24]|c->r[24]; // 804BB820
  c->r[11]=0u+0x00000000u; // 804BB824
  c->ctr=c->r[8]; // 804BB828
  cmpu(c,0,c->r[8],0x00000000u); // 804BB82C
  if (!crb(c,1)) { goto L_804BB880; } // 804BB830
L_804BB834:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 804BB834
  c->r[5]=0u+0x00000000u; // 804BB838
  c->r[0]=R32(c->r[7]+0x00000018u); // 804BB83C
  cmpu(c,0,c->r[4],c->r[0]); // 804BB840
  if (!crb(c,2)) { goto L_804BB86C; } // 804BB844
  c->r[4]=R32(c->r[6]+0x00000004u); // 804BB848
  c->r[0]=R32(c->r[7]+0x0000001Cu); // 804BB84C
  cmpu(c,0,c->r[4],c->r[0]); // 804BB850
  if (!crb(c,2)) { goto L_804BB86C; } // 804BB854
  c->r[4]=R32(c->r[6]+0x00000008u); // 804BB858
  c->r[0]=R32(c->r[7]+0x00000020u); // 804BB85C
  cmpu(c,0,c->r[4],c->r[0]); // 804BB860
  if (!crb(c,2)) { goto L_804BB86C; } // 804BB864
  c->r[5]=0u+0x00000001u; // 804BB868
L_804BB86C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804BB86C
  if (!crb(c,2)) { goto L_804BB880; } // 804BB870
  c->r[7]=c->r[7]+0x00000010u; // 804BB874
  c->r[11]=c->r[11]+0x00000001u; // 804BB878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BB834; } // 804BB87C
L_804BB880:;
  cmpu(c,0,c->r[11],c->r[8]); // 804BB880
  if (!crb(c,2)) { goto L_804BB8B8; } // 804BB884
  c->r[4]=rotl(c->r[11],4)&0xFFFFFFF0u; // 804BB888
  c->r[0]=R32(c->r[6]+0x00000000u); // 804BB88C
  c->r[4]=c->r[24]+c->r[4]; // 804BB890
  W32(c->r[4]+0x00000018u,c->r[0]); // 804BB894
  c->r[0]=R32(c->r[6]+0x00000004u); // 804BB898
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 804BB89C
  c->r[0]=R32(c->r[6]+0x00000008u); // 804BB8A0
  W32(c->r[4]+0x00000020u,c->r[0]); // 804BB8A4
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[2]);} // 804BB8A8
  c->r[4]=R32(c->r[24]+0x00000004u); // 804BB8AC
  c->r[0]=c->r[4]+0x00000001u; // 804BB8B0
  W32(c->r[24]+0x00000004u,c->r[0]); // 804BB8B4
L_804BB8B8:;
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB8B8
  c->r[0]=rotl(c->r[11],4)&0xFFFFFFF0u; // 804BB8BC
  c->r[4]=c->r[24]+c->r[0]; // 804BB8C0
  c->r[6]=c->r[6]+0x00000010u; // 804BB8C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 804BB8C8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BB8CC
  c->r[10]=c->r[10]+0x00000001u; // 804BB8D0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804BB8D4
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 804BB8D8
L_804BB8DC:;
  c->r[0]=R32(c->r[9]+0x00000004u); // 804BB8DC
  cmpu(c,0,c->r[10],c->r[0]); // 804BB8E0
  if (crb(c,0)) { IRQCHK(c); goto L_804BB81C; } // 804BB8E4
  c->r[28]=c->r[28]+0x00000220u; // 804BB8E8
  c->r[3]=c->r[3]+0x00000001u; // 804BB8EC
L_804BB8F0:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 804BB8F0
  if (crb(c,0)) { IRQCHK(c); goto L_804BB7F0; } // 804BB8F4
  c->r[3]=c->r[24]|c->r[24]; // 804BB8F8
L_804BB8FC:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804BB8FC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804BB900
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804BB904
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804BB908
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 804BB90C
  c->r[11]=c->r[1]+0x00000030u; // 804BB910
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 804BB914
  c->lr=0x804BB91Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BB918
  c->r[0]=R32(c->r[1]+0x00000064u); // 804BB91C
  c->lr=c->r[0]; // 804BB920
  c->r[1]=c->r[1]+0x00000060u; // 804BB924
  return; // 804BB928
}

// fn_804BB92C
void f_804BB92C(Ctx* __restrict c) {
  trace_call(0x804BB92Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BB92C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804BB930
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 804BB934
  return; // 804BB938
}

// fn_804BB93C
void f_804BB93C(Ctx* __restrict c) {
  trace_call(0x804BB93Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BB93C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804BB940
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 804BB944
  return; // 804BB948
}

// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
void f_804BB94C(Ctx* __restrict c) {
  trace_call(0x804BB94Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB94C
  c->r[0]=c->lr; // 804BB950
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BB954
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804BB958
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804BB95C
  c->r[11]=c->r[1]+0x00000030u; // 804BB960
  c->lr=0x804BB968u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BB964
  c->r[8]=R32(c->r[5]+0x00000000u); // 804BB968
  c->r[27]=c->r[3]|c->r[3]; // 804BB96C
  c->r[29]=c->r[4]|c->r[4]; // 804BB970
  c->r[28]=c->r[5]|c->r[5]; // 804BB974
  cmps(c,0,(int32_t)c->r[8],0); // 804BB978
  c->r[24]=c->r[7]|c->r[7]; // 804BB97C
  if (crb(c,2)) { goto L_804BB990; } // 804BB980
  c->r[0]=R32(c->r[6]+0x00000000u); // 804BB984
  cmps(c,0,(int32_t)c->r[0],0); // 804BB988
  if (!crb(c,2)) { goto L_804BB998; } // 804BB98C
L_804BB990:;
  c->r[3]=0u+0x00000000u; // 804BB990
  goto L_804BBB6C; // 804BB994
L_804BB998:;
  c->r[0]=R32(c->r[8]+0x00000010u); // 804BB998
  cmps(c,0,(int32_t)c->r[0],0); // 804BB99C
  if (crb(c,2)) { goto L_804BB9AC; } // 804BB9A0
  c->r[3]=c->r[8]+c->r[0]; // 804BB9A4
  goto L_804BB9B0; // 804BB9A8
L_804BB9AC:;
  c->r[3]=0u+0x00000000u; // 804BB9AC
L_804BB9B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BB9B0
  if (crb(c,2)) { goto L_804BB9C0; } // 804BB9B4
  c->r[25]=R32(c->r[3]+0x00000004u); // 804BB9B8
  goto L_804BB9C4; // 804BB9BC
L_804BB9C0:;
  c->r[25]=0u+0x00000000u; // 804BB9C0
L_804BB9C4:;
  c->r[3]=c->r[6]|c->r[6]; // 804BB9C4
  c->lr=0x804BB9CCu; f_804AC62C(c); // 804BB9C8
  c->r[5]=R32(c->r[28]+0x00000000u); // 804BB9CC
  c->r[0]=0u-c->r[24]; // 804BB9D0
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804BB9D4
  c->r[26]=c->r[3]|c->r[3]; // 804BB9D8
  c->r[6]=R16(c->r[5]+0x00000026u); // 804BB9DC
  c->r[0]=c->r[0]|c->r[24]; // 804BB9E0
  c->r[5]=sraw(c,c->r[0],31); // 804BB9E4
  c->r[4]=c->r[4]+0x0000003Bu; // 804BB9E8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 804BB9EC
  cmps(c,0,(int32_t)c->r[29],0); // 804BB9F0
  c->r[5]=c->r[25]&c->r[5]; // 804BB9F4
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804BB9F8
  c->r[3]=c->r[30]+c->r[0]; // 804BB9FC
  c->r[0]=c->r[3]+0x00000003u; // 804BBA00
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBA04
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BBA08
  c->r[3]=c->r[25]+c->r[24]; // 804BBA0C
  c->r[0]=c->r[3]+0x00000003u; // 804BBA10
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BBA14
  if (crb(c,2)) { goto L_804BBA20; } // 804BBA18
  W32(c->r[29]+0x00000000u,c->r[4]); // 804BBA1C
L_804BBA20:;
  cmps(c,0,(int32_t)c->r[27],0); // 804BBA20
  if (!crb(c,2)) { goto L_804BBA30; } // 804BBA24
  c->r[3]=0u+0x00000000u; // 804BBA28
  goto L_804BBB6C; // 804BBA2C
L_804BBA30:;
  c->r[3]=c->r[27]|c->r[27]; // 804BBA30
  c->lr=0x804BBA38u; f_803C4D08(c); // 804BBA34
  cmps(c,0,(int32_t)c->r[3],0); // 804BBA38
  c->r[31]=c->r[3]|c->r[3]; // 804BBA3C
  if (!crb(c,2)) { goto L_804BBA4C; } // 804BBA40
  c->r[3]=0u+0x00000000u; // 804BBA44
  goto L_804BBB6C; // 804BBA48
L_804BBA4C:;
  c->r[5]=c->r[3]+0x00000038u; // 804BBA4C
  c->r[30]=c->r[3]+c->r[30]; // 804BBA50
  c->r[29]=c->r[3]+c->r[25]; // 804BBA54
  if (crb(c,2)) { goto L_804BBB68; } // 804BBA58
  cmps(c,0,(int32_t)c->r[24],0); // 804BBA5C
  c->r[28]=R32(c->r[28]+0x00000000u); // 804BBA60
  if (crb(c,2)) { goto L_804BBA6C; } // 804BBA64
  goto L_804BBA70; // 804BBA68
L_804BBA6C:;
  c->r[29]=0u+0x00000000u; // 804BBA6C
L_804BBA70:;
  c->r[0]=0u+0x00000000u; // 804BBA70
  c->r[4]=0u+0x80720000u; // 804BBA74
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BBA78
  c->r[4]=c->r[4]+0xFFFFA208u; // 804BBA7C
  W32(c->r[3]+0x00000008u,c->r[27]); // 804BBA80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BBA84
  W32(c->r[3]+0x00000000u,c->r[4]); // 804BBA88
  W32(c->r[3]+0x00000010u,c->r[26]); // 804BBA8C
  W32(c->r[3]+0x00000014u,c->r[5]); // 804BBA90
  c->r[3]=c->r[31]|c->r[31]; // 804BBA94
  c->r[12]=R32(c->r[31]+0x00000000u); // 804BBA98
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BBA9C
  c->ctr=c->r[12]; // 804BBAA0
  if (true) { c->lr=0x804BBAA8u; dispatch(c,c->ctr); } // 804BBAA4
  c->r[4]=R16(c->r[28]+0x00000024u); // 804BBAA8
  c->r[0]=0u+0x43300000u; // 804BBAAC
  c->r[5]=R32(c->r[28]+0x00000028u); // 804BBAB0
  c->r[3]=0u+0x80720000u; // 804BBAB4
  c->r[4]=c->r[4]^0x80000000u; // 804BBAB8
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBABC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804BBAC0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804BBAC4
  {uint32_t ea=c->r[2]+0x000015BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BBAC8
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804BBACC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BBAD0
  c->r[3]=c->r[3]+0xFFFFA118u; // 804BBAD4
  {uint32_t ea=c->r[2]+0x000015C0u; c->f[3]=RF64(ea);} // 804BBAD8
  cmps(c,0,(int32_t)c->r[29],0); // 804BBADC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804BBAE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804BBAE4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BBAE8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804BBAEC
  c->r[0]=R32(c->r[4]+c->r[5]); // 804BBAF0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804BBAF4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804BBAF8
  W32(c->r[31]+0x00000028u,c->r[0]); // 804BBAFC
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BBB00
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 804BBB04
  W32(c->r[31]+0x00000030u,c->r[30]); // 804BBB08
  W32(c->r[31]+0x00000034u,c->r[29]); // 804BBB0C
  if (crb(c,2)) { goto L_804BBB68; } // 804BBB10
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BBB14
  c->r[26]=0u+0x00000000u; // 804BBB18
  c->r[25]=0u+0x00000000u; // 804BBB1C
  goto L_804BBB5C; // 804BBB20
L_804BBB24:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804BBB24
  c->r[3]=R16(c->r[3]+c->r[25]); // 804BBB28
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BBB2C
  if (!crb(c,2)) { goto L_804BBB54; } // 804BBB30
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BBB34
  c->f[1]=c->f[31]; // 804BBB38
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBB3C
  c->r[4]=R32(c->r[31]+0x00000034u); // 804BBB40
  c->r[6]=R32(c->r[31]+0x00000030u); // 804BBB44
  c->r[3]=c->r[31]+0x0000002Cu; // 804BBB48
  c->r[4]=c->r[4]+c->r[0]; // 804BBB4C
  c->lr=0x804BBB54u; f_804B4950(c); // 804BBB50
L_804BBB54:;
  c->r[25]=c->r[25]+0x00000002u; // 804BBB54
  c->r[26]=c->r[26]+0x00000001u; // 804BBB58
L_804BBB5C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804BBB5C
  cmpu(c,0,c->r[26],c->r[0]); // 804BBB60
  if (crb(c,0)) { IRQCHK(c); goto L_804BBB24; } // 804BBB64
L_804BBB68:;
  c->r[3]=c->r[31]|c->r[31]; // 804BBB68
L_804BBB6C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804BBB6C
  c->r[11]=c->r[1]+0x00000030u; // 804BBB70
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804BBB74
  c->lr=0x804BBB7Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BBB78
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BBB7C
  c->lr=c->r[0]; // 804BBB80
  c->r[1]=c->r[1]+0x00000040u; // 804BBB84
  return; // 804BBB88
}

// fn_804BBB8C
void f_804BBB8C(Ctx* __restrict c) {
  trace_call(0x804BBB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BBB8C
  c->r[0]=c->lr; // 804BBB90
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BBB94
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BBB98
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BBB9C
  c->r[12]=0u+0x80720000u; // 804BBBA0
  c->r[0]=0u+0x00000000u; // 804BBBA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BBBA8
  c->r[12]=c->r[12]+0xFFFFA208u; // 804BBBAC
  c->r[31]=c->r[3]|c->r[3]; // 804BBBB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BBBB4
  c->r[30]=c->r[7]|c->r[7]; // 804BBBB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BBBBC
  c->r[29]=c->r[9]|c->r[9]; // 804BBBC0
  W32(c->r[1]+0x00000010u,c->r[28]); // 804BBBC4
  c->r[28]=c->r[5]|c->r[5]; // 804BBBC8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BBBCC
  W32(c->r[3]+0x00000008u,c->r[4]); // 804BBBD0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BBBD4
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BBBD8
  W32(c->r[3]+0x00000010u,c->r[8]); // 804BBBDC
  W32(c->r[3]+0x00000014u,c->r[6]); // 804BBBE0
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BBBE4
  c->ctr=c->r[12]; // 804BBBE8
  if (true) { c->lr=0x804BBBF0u; dispatch(c,c->ctr); } // 804BBBEC
  c->r[5]=R32(c->r[28]+0x00000000u); // 804BBBF0
  c->r[0]=0u+0x43300000u; // 804BBBF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BBBF8
  c->r[3]=0u+0x80720000u; // 804BBBFC
  c->r[0]=R16(c->r[5]+0x00000024u); // 804BBC00
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804BBC04
  c->r[5]=R32(c->r[5]+0x00000028u); // 804BBC08
  c->r[3]=c->r[3]+0xFFFFA118u; // 804BBC0C
  c->r[0]=c->r[0]^0x80000000u; // 804BBC10
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BBC14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804BBC18
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804BBC1C
  c->r[4]=R32(c->r[4]+c->r[0]); // 804BBC20
  cmps(c,0,(int32_t)c->r[29],0); // 804BBC24
  {uint32_t ea=c->r[2]+0x000015C0u; c->f[2]=RF64(ea);} // 804BBC28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804BBC2C
  {uint32_t ea=c->r[2]+0x000015BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BBC30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804BBC34
  c->r[0]=R32(c->r[28]+0x00000000u); // 804BBC38
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 804BBC3C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BBC40
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[31]);} // 804BBC44
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804BBC48
  W32(c->r[31]+0x00000028u,c->r[4]); // 804BBC4C
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BBC50
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 804BBC54
  W32(c->r[31]+0x00000030u,c->r[30]); // 804BBC58
  W32(c->r[31]+0x00000034u,c->r[29]); // 804BBC5C
  if (crb(c,2)) { goto L_804BBCB4; } // 804BBC60
  c->r[30]=0u+0x00000000u; // 804BBC64
  c->r[29]=0u+0x00000000u; // 804BBC68
  goto L_804BBCA8; // 804BBC6C
L_804BBC70:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804BBC70
  c->r[3]=R16(c->r[3]+c->r[29]); // 804BBC74
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BBC78
  if (!crb(c,2)) { goto L_804BBCA0; } // 804BBC7C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BBC80
  c->f[1]=c->f[31]; // 804BBC84
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBC88
  c->r[4]=R32(c->r[31]+0x00000034u); // 804BBC8C
  c->r[6]=R32(c->r[31]+0x00000030u); // 804BBC90
  c->r[3]=c->r[31]+0x0000002Cu; // 804BBC94
  c->r[4]=c->r[4]+c->r[0]; // 804BBC98
  c->lr=0x804BBCA0u; f_804B4950(c); // 804BBC9C
L_804BBCA0:;
  c->r[29]=c->r[29]+0x00000002u; // 804BBCA0
  c->r[30]=c->r[30]+0x00000001u; // 804BBCA4
L_804BBCA8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804BBCA8
  cmpu(c,0,c->r[30],c->r[0]); // 804BBCAC
  if (crb(c,0)) { IRQCHK(c); goto L_804BBC70; } // 804BBCB0
L_804BBCB4:;
  c->r[3]=c->r[31]|c->r[31]; // 804BBCB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BBCB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BBCBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BBCC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BBCC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BBCC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804BBCCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BBCD0
  c->lr=c->r[0]; // 804BBCD4
  c->r[1]=c->r[1]+0x00000030u; // 804BBCD8
  return; // 804BBCDC
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf
void f_804BBCE0(Ctx* __restrict c) {
  trace_call(0x804BBCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BBCE0
  c->r[0]=c->lr; // 804BBCE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BBCE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BBCEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BBCF0
  c->f[3]=c->f[1]; // 804BBCF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BBCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BBCFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BBD00
  c->r[29]=c->r[3]|c->r[3]; // 804BBD04
  c->r[12]=R32(c->r[3]+0x00000028u); // 804BBD08
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBD0C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BBD10
  c->ctr=c->r[12]; // 804BBD14
  if (true) { c->lr=0x804BBD1Cu; dispatch(c,c->ctr); } // 804BBD18
  c->r[0]=R32(c->r[29]+0x00000034u); // 804BBD1C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804BBD20
  cmps(c,0,(int32_t)c->r[0],0); // 804BBD24
  if (crb(c,2)) { goto L_804BBD80; } // 804BBD28
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804BBD2C
  c->r[31]=0u+0x00000000u; // 804BBD30
  c->r[30]=0u+0x00000000u; // 804BBD34
  goto L_804BBD74; // 804BBD38
L_804BBD3C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BBD3C
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BBD40
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BBD44
  if (!crb(c,2)) { goto L_804BBD6C; } // 804BBD48
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BBD4C
  c->f[1]=c->f[31]; // 804BBD50
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBD54
  c->r[4]=R32(c->r[29]+0x00000034u); // 804BBD58
  c->r[6]=R32(c->r[29]+0x00000030u); // 804BBD5C
  c->r[3]=c->r[29]+0x0000002Cu; // 804BBD60
  c->r[4]=c->r[4]+c->r[0]; // 804BBD64
  c->lr=0x804BBD6Cu; f_804B4950(c); // 804BBD68
L_804BBD6C:;
  c->r[30]=c->r[30]+0x00000002u; // 804BBD6C
  c->r[31]=c->r[31]+0x00000001u; // 804BBD70
L_804BBD74:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BBD74
  cmpu(c,0,c->r[31],c->r[0]); // 804BBD78
  if (crb(c,0)) { IRQCHK(c); goto L_804BBD3C; } // 804BBD7C
L_804BBD80:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BBD80
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BBD84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BBD88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BBD8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BBD90
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BBD94
  c->lr=c->r[0]; // 804BBD98
  c->r[1]=c->r[1]+0x00000030u; // 804BBD9C
  return; // 804BBDA0
}

// fn_804BBDA4
void f_804BBDA4(Ctx* __restrict c) {
  trace_call(0x804BBDA4u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBDA4
  return; // 804BBDA8
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf
void f_804BBDAC(Ctx* __restrict c) {
  trace_call(0x804BBDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BBDAC
  c->r[0]=c->lr; // 804BBDB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BBDB4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BBDB8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BBDBC
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BBDC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BBDC4
  fcmp(c,0,c->f[0],c->f[1]); // 804BBDC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BBDCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BBDD0
  c->r[29]=c->r[3]|c->r[3]; // 804BBDD4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804BBDD8
  if (!crb(c,2)) { goto L_804BBE40; } // 804BBDDC
  c->r[0]=R32(c->r[3]+0x00000034u); // 804BBDE0
  cmps(c,0,(int32_t)c->r[0],0); // 804BBDE4
  if (crb(c,2)) { goto L_804BBE40; } // 804BBDE8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BBDEC
  c->r[31]=0u+0x00000000u; // 804BBDF0
  c->r[30]=0u+0x00000000u; // 804BBDF4
  goto L_804BBE34; // 804BBDF8
L_804BBDFC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BBDFC
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BBE00
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BBE04
  if (!crb(c,2)) { goto L_804BBE2C; } // 804BBE08
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BBE0C
  c->f[1]=c->f[31]; // 804BBE10
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBE14
  c->r[4]=R32(c->r[29]+0x00000034u); // 804BBE18
  c->r[6]=R32(c->r[29]+0x00000030u); // 804BBE1C
  c->r[3]=c->r[29]+0x0000002Cu; // 804BBE20
  c->r[4]=c->r[4]+c->r[0]; // 804BBE24
  c->lr=0x804BBE2Cu; f_804B4950(c); // 804BBE28
L_804BBE2C:;
  c->r[30]=c->r[30]+0x00000002u; // 804BBE2C
  c->r[31]=c->r[31]+0x00000001u; // 804BBE30
L_804BBE34:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BBE34
  cmpu(c,0,c->r[31],c->r[0]); // 804BBE38
  if (crb(c,0)) { IRQCHK(c); goto L_804BBDFC; } // 804BBE3C
L_804BBE40:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BBE40
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BBE44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BBE48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BBE4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BBE50
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BBE54
  c->lr=c->r[0]; // 804BBE58
  c->r[1]=c->r[1]+0x00000030u; // 804BBE5C
  return; // 804BBE60
}

// fn_804BBE64
void f_804BBE64(Ctx* __restrict c) {
  trace_call(0x804BBE64u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBE64
  return; // 804BBE68
}

// UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv
void f_804BBE6C(Ctx* __restrict c) {
  trace_call(0x804BBE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BBE6C
  c->r[0]=c->lr; // 804BBE70
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BBE74
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BBE78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BBE7C
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BBE80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BBE84
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BBE88
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BBE8C
  c->r[29]=c->r[3]|c->r[3]; // 804BBE90
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBE94
  fcmp(c,0,c->f[0],c->f[1]); // 804BBE98
  if (crb(c,2)) { goto L_804BBF2C; } // 804BBE9C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BBEA0
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBEA4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BBEA8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804BBEAC
  c->r[12]=R32(c->r[3]+0x00000028u); // 804BBEB0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BBEB4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BBEB8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804BBEBC
  c->ctr=c->r[12]; // 804BBEC0
  if (true) { c->lr=0x804BBEC8u; dispatch(c,c->ctr); } // 804BBEC4
  c->r[0]=R32(c->r[29]+0x00000034u); // 804BBEC8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804BBECC
  cmps(c,0,(int32_t)c->r[0],0); // 804BBED0
  if (crb(c,2)) { goto L_804BBF2C; } // 804BBED4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804BBED8
  c->r[31]=0u+0x00000000u; // 804BBEDC
  c->r[30]=0u+0x00000000u; // 804BBEE0
  goto L_804BBF20; // 804BBEE4
L_804BBEE8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BBEE8
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BBEEC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BBEF0
  if (!crb(c,2)) { goto L_804BBF18; } // 804BBEF4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BBEF8
  c->f[1]=c->f[31]; // 804BBEFC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BBF00
  c->r[4]=R32(c->r[29]+0x00000034u); // 804BBF04
  c->r[6]=R32(c->r[29]+0x00000030u); // 804BBF08
  c->r[3]=c->r[29]+0x0000002Cu; // 804BBF0C
  c->r[4]=c->r[4]+c->r[0]; // 804BBF10
  c->lr=0x804BBF18u; f_804B4950(c); // 804BBF14
L_804BBF18:;
  c->r[30]=c->r[30]+0x00000002u; // 804BBF18
  c->r[31]=c->r[31]+0x00000001u; // 804BBF1C
L_804BBF20:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BBF20
  cmpu(c,0,c->r[31],c->r[0]); // 804BBF24
  if (crb(c,0)) { IRQCHK(c); goto L_804BBEE8; } // 804BBF28
L_804BBF2C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BBF2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BBF30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BBF34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BBF38
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BBF3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BBF40
  c->lr=c->r[0]; // 804BBF44
  c->r[1]=c->r[1]+0x00000030u; // 804BBF48
  return; // 804BBF4C
}

// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
void f_804BBF50(Ctx* __restrict c) {
  trace_call(0x804BBF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BBF50
  c->r[0]=c->lr; // 804BBF54
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BBF58
  c->r[11]=c->r[1]+0x00000040u; // 804BBF5C
  c->lr=0x804BBF64u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BBF60
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804BBF64
  c->r[28]=c->r[3]|c->r[3]; // 804BBF68
  c->r[29]=c->r[4]|c->r[4]; // 804BBF6C
  c->r[31]=0u+0x00000000u; // 804BBF70
  c->r[0]=R32(c->r[5]+0x00000010u); // 804BBF74
  cmps(c,0,(int32_t)c->r[0],0); // 804BBF78
  if (crb(c,2)) { goto L_804BBF88; } // 804BBF7C
  c->r[3]=c->r[5]+c->r[0]; // 804BBF80
  goto L_804BBF8C; // 804BBF84
L_804BBF88:;
  c->r[3]=0u+0x00000000u; // 804BBF88
L_804BBF8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BBF8C
  if (crb(c,2)) { goto L_804BBF9C; } // 804BBF90
  c->r[27]=R32(c->r[3]+0x00000004u); // 804BBF94
  goto L_804BBFA0; // 804BBF98
L_804BBF9C:;
  c->r[27]=0u+0x00000000u; // 804BBF9C
L_804BBFA0:;
  cmps(c,0,(int32_t)c->r[27],0); // 804BBFA0
  c->r[30]=0u+0x00000000u; // 804BBFA4
  if (crb(c,2)) { goto L_804BC044; } // 804BBFA8
  goto L_804BC038; // 804BBFAC
L_804BBFB0:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 804BBFB0
  c->r[0]=R32(c->r[3]+0x00000010u); // 804BBFB4
  cmps(c,0,(int32_t)c->r[0],0); // 804BBFB8
  if (crb(c,2)) { goto L_804BBFC8; } // 804BBFBC
  c->r[0]=c->r[3]+c->r[0]; // 804BBFC0
  goto L_804BBFCC; // 804BBFC4
L_804BBFC8:;
  c->r[0]=0u+0x00000000u; // 804BBFC8
L_804BBFCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804BBFCC
  if (crb(c,2)) { goto L_804BBFF8; } // 804BBFD0
  c->r[3]=rotl(c->r[30],4)&0x000FFFF0u; // 804BBFD4
  c->r[3]=c->r[0]+c->r[3]; // 804BBFD8
  c->r[3]=R32(c->r[3]+0x00000024u); // 804BBFDC
  cmps(c,0,(int32_t)c->r[3],0); // 804BBFE0
  if (crb(c,2)) { goto L_804BBFF0; } // 804BBFE4
  c->r[5]=c->r[0]+c->r[3]; // 804BBFE8
  goto L_804BBFFC; // 804BBFEC
L_804BBFF0:;
  c->r[5]=0u+0x00000000u; // 804BBFF0
  goto L_804BBFFC; // 804BBFF4
L_804BBFF8:;
  c->r[5]=0u+0x00000000u; // 804BBFF8
L_804BBFFC:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 804BBFFC
  c->r[3]=c->r[29]|c->r[29]; // 804BC000
  c->r[4]=c->r[1]+0x00000014u; // 804BC004
  c->r[5]=c->r[0]+c->r[5]; // 804BC008
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804BC00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC010
  c->lr=0x804BC018u; f_804AC534(c); // 804BC014
  cmps(c,0,(int32_t)c->r[3],0); // 804BC018
  if (crb(c,2)) { goto L_804BC034; } // 804BC01C
  c->r[0]=R32(c->r[3]+0x00000010u); // 804BC020
  c->r[31]=0u+0x00000001u; // 804BC024
  c->r[3]=R32(c->r[28]+0x00000014u); // 804BC028
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804BC02C
  W16(c->r[3]+c->r[0],c->r[30]); // 804BC030
L_804BC034:;
  c->r[30]=c->r[30]+0x00000001u; // 804BC034
L_804BC038:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 804BC038
  cmpu(c,0,c->r[0],c->r[27]); // 804BC03C
  if (crb(c,0)) { IRQCHK(c); goto L_804BBFB0; } // 804BC040
L_804BC044:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 804BC044
  c->r[0]=R32(c->r[3]+0x00000014u); // 804BC048
  c->r[24]=R16(c->r[3]+0x00000026u); // 804BC04C
  cmps(c,0,(int32_t)c->r[0],0); // 804BC050
  if (crb(c,2)) { goto L_804BC060; } // 804BC054
  c->r[27]=c->r[3]+c->r[0]; // 804BC058
  goto L_804BC064; // 804BC05C
L_804BC060:;
  c->r[27]=0u+0x00000000u; // 804BC060
L_804BC064:;
  c->r[25]=c->r[27]|c->r[27]; // 804BC064
  c->r[23]=0u+0x00000000u; // 804BC068
  c->r[26]=0u+0x00000000u; // 804BC06C
  goto L_804BC0D0; // 804BC070
L_804BC074:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804BC074
  c->r[3]=c->r[29]|c->r[29]; // 804BC078
  c->r[6]=R32(c->r[28]+0x00000030u); // 804BC07C
  c->r[4]=c->r[1]+0x00000010u; // 804BC080
  c->r[5]=c->r[27]+c->r[0]; // 804BC084
  c->r[30]=c->r[5]+0xFFFFFFFCu; // 804BC088
  c->r[22]=c->r[6]+c->r[26]; // 804BC08C
  W32(c->r[1]+0x00000010u,c->r[30]); // 804BC090
  c->lr=0x804BC098u; f_804AC534(c); // 804BC094
  W32(c->r[22]+0x00000000u,c->r[3]); // 804BC098
  c->r[3]=c->r[29]|c->r[29]; // 804BC09C
  c->r[4]=c->r[1]+0x0000000Cu; // 804BC0A0
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 804BC0A4
  c->lr=0x804BC0ACu; f_804AC660(c); // 804BC0A8
  W32(c->r[22]+0x00000004u,c->r[3]); // 804BC0AC
  c->r[3]=c->r[29]|c->r[29]; // 804BC0B0
  c->r[4]=c->r[1]+0x00000008u; // 804BC0B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804BC0B8
  c->lr=0x804BC0C0u; f_804AC78C(c); // 804BC0BC
  W32(c->r[22]+0x00000008u,c->r[3]); // 804BC0C0
  c->r[26]=c->r[26]+0x0000000Cu; // 804BC0C4
  c->r[25]=c->r[25]+0x00000004u; // 804BC0C8
  c->r[23]=c->r[23]+0x00000001u; // 804BC0CC
L_804BC0D0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 804BC0D0
  if (crb(c,0)) { IRQCHK(c); goto L_804BC074; } // 804BC0D4
  c->r[3]=c->r[28]|c->r[28]; // 804BC0D8
  c->r[4]=0u+0x00000004u; // 804BC0DC
  c->r[5]=0u+0x00000001u; // 804BC0E0
  c->lr=0x804BC0E8u; f_804BDBC0(c); // 804BC0E4
  c->r[11]=c->r[1]+0x00000040u; // 804BC0E8
  c->r[3]=c->r[31]|c->r[31]; // 804BC0EC
  c->lr=0x804BC0F4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BC0F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BC0F4
  c->lr=c->r[0]; // 804BC0F8
  c->r[1]=c->r[1]+0x00000040u; // 804BC0FC
  return; // 804BC100
}

// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
void f_804BC104(Ctx* __restrict c) {
  trace_call(0x804BC104u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC104
  c->r[0]=c->lr; // 804BC108
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC10C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804BC110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BC114
  c->r[31]=c->r[4]|c->r[4]; // 804BC118
  c->r[6]=R32(c->r[3]+0x00000014u); // 804BC11C
  c->r[5]=R16(c->r[6]+c->r[0]); // 804BC120
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 804BC124
  if (crb(c,2)) { goto L_804BC13C; } // 804BC128
  c->r[0]=0u+0x00000000u; // 804BC12C
  c->r[3]=c->r[31]|c->r[31]; // 804BC130
  W32(c->r[4]+0x00000000u,c->r[0]); // 804BC134
  goto L_804BC168; // 804BC138
L_804BC13C:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 804BC13C
  cmps(c,0,(int32_t)c->r[6],0); // 804BC140
  if (crb(c,2)) { goto L_804BC154; } // 804BC144
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 804BC148
  c->r[3]=c->r[6]+c->r[0]; // 804BC14C
  goto L_804BC168; // 804BC150
L_804BC154:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC154
  c->r[6]=R32(c->r[3]+0x00000030u); // 804BC158
  c->r[3]=c->r[3]+0x0000002Cu; // 804BC15C
  c->lr=0x804BC164u; f_804B4950(c); // 804BC160
  c->r[3]=c->r[31]|c->r[31]; // 804BC164
L_804BC168:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BC16C
  c->lr=c->r[0]; // 804BC170
  c->r[1]=c->r[1]+0x00000010u; // 804BC174
  return; // 804BC178
}

// fn_804BC17C
void f_804BC17C(Ctx* __restrict c) {
  trace_call(0x804BC17Cu);
  c->r[5]=0u+0x00010000u; // 804BC17C
  c->r[0]=c->r[5]+0x00000002u; // 804BC180
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BC184
  if (crb(c,2)) { goto L_804BC1C8; } // 804BC188
  if (!crb(c,0)) { goto L_804BC19C; } // 804BC18C
  cmps(c,0,(int32_t)c->r[4],8); // 804BC190
  if (crb(c,2)) { goto L_804BC1AC; } // 804BC194
  return; // 804BC198
L_804BC19C:;
  c->r[0]=c->r[5]+0x00000004u; // 804BC19C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BC1A0
  if (!crb(c,0)) return; // 804BC1A4
  goto L_804BC1BC; // 804BC1A8
L_804BC1AC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC1AC
  c->r[12]=R32(c->r[12]+0x00000024u); // 804BC1B0
  c->ctr=c->r[12]; // 804BC1B4
  if (true) { dispatch(c,c->ctr); return; } // 804BC1B8
L_804BC1BC:;
  c->r[0]=0u+0x00000000u; // 804BC1BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BC1C0
  return; // 804BC1C4
L_804BC1C8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804BC1C8
  return; // 804BC1CC
}

// fn_804BC1D0
void f_804BC1D0(Ctx* __restrict c) {
  trace_call(0x804BC1D0u);
  c->r[3]=0u+0x806B0000u; // 804BC1D0
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC1D4
  c->r[3]=c->r[3]+0xFFFFBD38u; // 804BC1D8
  cmpu(c,0,c->r[0],c->r[3]); // 804BC1DC
  if (!crb(c,2)) { goto L_804BC1EC; } // 804BC1E0
  c->r[3]=0u+0x00000001u; // 804BC1E4
  return; // 804BC1E8
L_804BC1EC:;
  c->r[3]=0u+0x806B0000u; // 804BC1EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC1F0
  c->r[3]=c->r[3]+0xFFFFBD00u; // 804BC1F4
  cmpu(c,0,c->r[0],c->r[3]); // 804BC1F8
  if (!crb(c,2)) { goto L_804BC208; } // 804BC1FC
  c->r[3]=0u+0x00000001u; // 804BC200
  return; // 804BC204
L_804BC208:;
  c->r[3]=0u+0x806B0000u; // 804BC208
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BC20C
  cmpu(c,0,c->r[0],c->r[3]); // 804BC210
  if (!crb(c,2)) { goto L_804BC220; } // 804BC214
  c->r[3]=0u+0x00000001u; // 804BC218
  return; // 804BC21C
L_804BC220:;
  c->r[3]=0u+0x806B0000u; // 804BC220
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BC224
  c->r[0]=c->r[3]-c->r[0]; // 804BC228
  c->r[0]=cntlz(c->r[0]); // 804BC22C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BC230
  return; // 804BC234
}

// fn_804BC238
void f_804BC238(Ctx* __restrict c) {
  trace_call(0x804BC238u);
  c->r[3]=0u+0x806B0000u; // 804BC238
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC23C
  c->r[3]=c->r[3]+0xFFFFBD00u; // 804BC240
  cmpu(c,0,c->r[0],c->r[3]); // 804BC244
  if (!crb(c,2)) { goto L_804BC254; } // 804BC248
  c->r[3]=0u+0x00000001u; // 804BC24C
  return; // 804BC250
L_804BC254:;
  c->r[3]=0u+0x806B0000u; // 804BC254
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC258
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BC25C
  cmpu(c,0,c->r[0],c->r[3]); // 804BC260
  if (!crb(c,2)) { goto L_804BC270; } // 804BC264
  c->r[3]=0u+0x00000001u; // 804BC268
  return; // 804BC26C
L_804BC270:;
  c->r[3]=0u+0x806B0000u; // 804BC270
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BC274
  c->r[0]=c->r[3]-c->r[0]; // 804BC278
  c->r[0]=cntlz(c->r[0]); // 804BC27C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BC280
  return; // 804BC284
}

// fn_804BC288
void f_804BC288(Ctx* __restrict c) {
  trace_call(0x804BC288u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC288
  c->r[0]=c->lr; // 804BC28C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC290
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC294
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BC298
  c->ctr=c->r[12]; // 804BC29C
  if (true) { c->lr=0x804BC2A4u; dispatch(c,c->ctr); } // 804BC2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC2A4
  c->r[3]=c->r[3]+0x00000004u; // 804BC2A8
  c->lr=c->r[0]; // 804BC2AC
  c->r[1]=c->r[1]+0x00000010u; // 804BC2B0
  return; // 804BC2B4
}

// fn_804BC2B8
void f_804BC2B8(Ctx* __restrict c) {
  trace_call(0x804BC2B8u);
  c->r[3]=0u+0x806B0000u; // 804BC2B8
  c->r[3]=c->r[3]+0xFFFFBD38u; // 804BC2BC
  return; // 804BC2C0
}

// fn_804BC2C4
void f_804BC2C4(Ctx* __restrict c) {
  trace_call(0x804BC2C4u);
  c->r[5]=0u+0x806B0000u; // 804BC2C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC2C8
  c->r[5]=c->r[5]+0xFFFFBD00u; // 804BC2CC
  c->r[3]=c->r[5]+0x00000024u; // 804BC2D0
  cmpu(c,0,c->r[0],c->r[3]); // 804BC2D4
  if (!crb(c,2)) { goto L_804BC2E4; } // 804BC2D8
  c->r[3]=0u+0x00000001u; // 804BC2DC
  return; // 804BC2E0
L_804BC2E4:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804BC2E4
  c->r[0]=c->r[5]+0x00000010u; // 804BC2E8
  cmpu(c,0,c->r[4],c->r[0]); // 804BC2EC
  if (!crb(c,2)) { goto L_804BC2FC; } // 804BC2F0
  c->r[3]=0u+0x00000001u; // 804BC2F4
  return; // 804BC2F8
L_804BC2FC:;
  c->r[0]=c->r[5]+0x00000000u; // 804BC2FC
  cmpu(c,0,c->r[4],c->r[0]); // 804BC300
  if (!crb(c,2)) { goto L_804BC310; } // 804BC304
  c->r[3]=0u+0x00000001u; // 804BC308
  return; // 804BC30C
L_804BC310:;
  c->r[3]=0u+0x806B0000u; // 804BC310
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BC314
  cmpu(c,0,c->r[4],c->r[3]); // 804BC318
  if (!crb(c,2)) { goto L_804BC328; } // 804BC31C
  c->r[3]=0u+0x00000001u; // 804BC320
  return; // 804BC324
L_804BC328:;
  c->r[3]=0u+0x806B0000u; // 804BC328
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BC32C
  c->r[0]=c->r[3]-c->r[4]; // 804BC330
  c->r[0]=cntlz(c->r[0]); // 804BC334
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BC338
  return; // 804BC33C
}

// fn_804BC340
void f_804BC340(Ctx* __restrict c) {
  trace_call(0x804BC340u);
  c->r[3]=0u+0x806B0000u; // 804BC340
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC344
  c->r[3]=c->r[3]+0xFFFFBD10u; // 804BC348
  cmpu(c,0,c->r[0],c->r[3]); // 804BC34C
  if (!crb(c,2)) { goto L_804BC35C; } // 804BC350
  c->r[3]=0u+0x00000001u; // 804BC354
  return; // 804BC358
L_804BC35C:;
  c->r[3]=0u+0x806B0000u; // 804BC35C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC360
  c->r[3]=c->r[3]+0xFFFFBD00u; // 804BC364
  cmpu(c,0,c->r[0],c->r[3]); // 804BC368
  if (!crb(c,2)) { goto L_804BC378; } // 804BC36C
  c->r[3]=0u+0x00000001u; // 804BC370
  return; // 804BC374
L_804BC378:;
  c->r[3]=0u+0x806B0000u; // 804BC378
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BC37C
  cmpu(c,0,c->r[0],c->r[3]); // 804BC380
  if (!crb(c,2)) { goto L_804BC390; } // 804BC384
  c->r[3]=0u+0x00000001u; // 804BC388
  return; // 804BC38C
L_804BC390:;
  c->r[3]=0u+0x806B0000u; // 804BC390
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BC394
  c->r[0]=c->r[3]-c->r[0]; // 804BC398
  c->r[0]=cntlz(c->r[0]); // 804BC39C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BC3A0
  return; // 804BC3A4
}

// fn_804BC3A8
void f_804BC3A8(Ctx* __restrict c) {
  trace_call(0x804BC3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC3A8
  c->r[0]=c->lr; // 804BC3AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC3B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC3B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BC3B8
  c->ctr=c->r[12]; // 804BC3BC
  if (true) { c->lr=0x804BC3C4u; dispatch(c,c->ctr); } // 804BC3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC3C4
  c->r[3]=c->r[3]+0x00000004u; // 804BC3C8
  c->lr=c->r[0]; // 804BC3CC
  c->r[1]=c->r[1]+0x00000010u; // 804BC3D0
  return; // 804BC3D4
}

// fn_804BC3D8
void f_804BC3D8(Ctx* __restrict c) {
  trace_call(0x804BC3D8u);
  c->r[3]=0u+0x806B0000u; // 804BC3D8
  c->r[3]=c->r[3]+0xFFFFBD24u; // 804BC3DC
  return; // 804BC3E0
}

// fn_804BC3E4
void f_804BC3E4(Ctx* __restrict c) {
  trace_call(0x804BC3E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC3E4
  c->r[0]=c->lr; // 804BC3E8
  cmps(c,0,(int32_t)c->r[3],0); // 804BC3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC3F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BC3F4
  c->r[31]=c->r[3]|c->r[3]; // 804BC3F8
  if (crb(c,2)) { goto L_804BC434; } // 804BC3FC
  if (crb(c,2)) { goto L_804BC434; } // 804BC400
  c->r[12]=0u+0x80720000u; // 804BC404
  c->r[12]=c->r[12]+0xFFFFA1B8u; // 804BC408
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BC40C
  c->r[12]=R32(c->r[12]+0x00000044u); // 804BC410
  c->ctr=c->r[12]; // 804BC414
  if (true) { c->lr=0x804BC41Cu; dispatch(c,c->ctr); } // 804BC418
  cmps(c,0,(int32_t)c->r[31],0); // 804BC41C
  if (crb(c,2)) { goto L_804BC434; } // 804BC420
  if (crb(c,2)) { goto L_804BC434; } // 804BC424
  c->r[3]=c->r[31]|c->r[31]; // 804BC428
  c->r[4]=0u+0x00000000u; // 804BC42C
  c->lr=0x804BC434u; f_804BD9F0(c); // 804BC430
L_804BC434:;
  c->r[3]=c->r[31]|c->r[31]; // 804BC434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BC438
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC43C
  c->lr=c->r[0]; // 804BC440
  c->r[1]=c->r[1]+0x00000010u; // 804BC444
  return; // 804BC448
}

// fn_804BC44C
void f_804BC44C(Ctx* __restrict c) {
  trace_call(0x804BC44Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC44C
  c->r[0]=c->lr; // 804BC450
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC454
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC458
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BC45C
  c->ctr=c->r[12]; // 804BC460
  if (true) { c->lr=0x804BC468u; dispatch(c,c->ctr); } // 804BC464
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC468
  c->r[3]=c->r[3]+0x00000004u; // 804BC46C
  c->lr=c->r[0]; // 804BC470
  c->r[1]=c->r[1]+0x00000010u; // 804BC474
  return; // 804BC478
}

// fn_804BC47C
void f_804BC47C(Ctx* __restrict c) {
  trace_call(0x804BC47Cu);
  c->r[3]=0u+0x806B0000u; // 804BC47C
  c->r[3]=c->r[3]+0xFFFFBD10u; // 804BC480
  return; // 804BC484
}

// fn_804BC488
void f_804BC488(Ctx* __restrict c) {
  trace_call(0x804BC488u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC488
  c->r[0]=c->lr; // 804BC48C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BC490
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC494
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BC498
  c->ctr=c->r[12]; // 804BC49C
  if (true) { c->lr=0x804BC4A4u; dispatch(c,c->ctr); } // 804BC4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BC4A4
  c->r[3]=c->r[3]+0x00000004u; // 804BC4A8
  c->lr=c->r[0]; // 804BC4AC
  c->r[1]=c->r[1]+0x00000010u; // 804BC4B0
  return; // 804BC4B4
}

// fn_804BC4B8
void f_804BC4B8(Ctx* __restrict c) {
  trace_call(0x804BC4B8u);
  c->r[3]=0u+0x806B0000u; // 804BC4B8
  c->r[3]=c->r[3]+0xFFFFBD00u; // 804BC4BC
  return; // 804BC4C0
}

// fn_804BC4C4
void f_804BC4C4(Ctx* __restrict c) {
  trace_call(0x804BC4C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC4C4
  c->r[0]=c->lr; // 804BC4C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804BC4CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 804BC4D0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804BC4D4
  c->r[31]=c->r[4]|c->r[4]; // 804BC4D8
  W32(c->r[1]+0x00000048u,c->r[30]); // 804BC4DC
  c->r[30]=c->r[3]|c->r[3]; // 804BC4E0
  W32(c->r[1]+0x00000044u,c->r[29]); // 804BC4E4
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 804BC4E8
  c->lr=0x804BC4F0u; f_804D3528(c); // 804BC4EC
  cmps(c,0,(int32_t)c->r[29],1); // 804BC4F0
  if (crb(c,2)) { goto L_804BC590; } // 804BC4F4
  if (!crb(c,0)) { goto L_804BC508; } // 804BC4F8
  cmps(c,0,(int32_t)c->r[29],0); // 804BC4FC
  if (!crb(c,0)) { goto L_804BC514; } // 804BC500
  goto L_804BC6EC; // 804BC504
L_804BC508:;
  cmps(c,0,(int32_t)c->r[29],3); // 804BC508
  if (!crb(c,0)) { goto L_804BC6EC; } // 804BC50C
  goto L_804BC648; // 804BC510
L_804BC514:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 804BC514
  c->r[4]=c->r[1]+0x00000010u; // 804BC518
  c->r[6]=R8(c->r[31]+0x00000021u); // 804BC51C
  c->r[3]=c->r[30]|c->r[30]; // 804BC520
  c->r[5]=R8(c->r[31]+0x00000022u); // 804BC524
  c->r[0]=R8(c->r[31]+0x00000023u); // 804BC528
  W8(c->r[1]+0x00000010u,c->r[7]); // 804BC52C
  W8(c->r[1]+0x00000011u,c->r[6]); // 804BC530
  W8(c->r[1]+0x00000012u,c->r[5]); // 804BC534
  W8(c->r[1]+0x00000013u,c->r[0]); // 804BC538
  c->lr=0x804BC540u; f_804D353C(c); // 804BC53C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC540
  c->r[3]=c->r[30]|c->r[30]; // 804BC544
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC548
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BC54C
  c->lr=0x804BC554u; f_804D3584(c); // 804BC550
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC554
  c->r[3]=c->r[30]|c->r[30]; // 804BC558
  c->r[4]=0u+0x00000000u; // 804BC55C
  c->lr=0x804BC564u; f_804D3600(c); // 804BC560
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC564
  c->r[3]=c->r[30]|c->r[30]; // 804BC568
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC56C
  c->r[4]=R32(c->r[31]+0x00000024u); // 804BC570
  c->lr=0x804BC578u; f_804D3680(c); // 804BC574
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC578
  c->r[3]=c->r[30]|c->r[30]; // 804BC57C
  c->f[2]=c->f[1]; // 804BC580
  c->f[3]=c->f[1]; // 804BC584
  c->lr=0x804BC58Cu; f_804D35C0(c); // 804BC588
  goto L_804BC6EC; // 804BC58C
L_804BC590:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 804BC590
  c->r[4]=c->r[1]+0x0000000Cu; // 804BC594
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 804BC598
  c->r[3]=c->r[30]|c->r[30]; // 804BC59C
  c->r[7]=R8(c->r[31]+0x00000020u); // 804BC5A0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804BC5A4
  c->r[6]=R8(c->r[31]+0x00000021u); // 804BC5A8
  c->r[5]=R8(c->r[31]+0x00000022u); // 804BC5AC
  c->r[0]=R8(c->r[31]+0x00000023u); // 804BC5B0
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 804BC5B4
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 804BC5B8
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 804BC5BC
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 804BC5C0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804BC5C4
  {uint32_t ea=c->r[2]+0x000015CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804BC5C8
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 804BC5CC
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804BC5D0
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 804BC5D4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 804BC5D8
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804BC5DC
  W8(c->r[1]+0x0000000Du,c->r[6]); // 804BC5E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 804BC5E4
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 804BC5E8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 804BC5EC
  c->lr=0x804BC5F4u; f_804D353C(c); // 804BC5F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC5F4
  c->r[3]=c->r[30]|c->r[30]; // 804BC5F8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC5FC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BC600
  c->lr=0x804BC608u; f_804D3584(c); // 804BC604
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC608
  c->r[3]=c->r[30]|c->r[30]; // 804BC60C
  {uint32_t ea=c->r[2]+0x000015D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC610
  c->f[3]=c->f[2]; // 804BC614
  c->lr=0x804BC61Cu; f_804D3640(c); // 804BC618
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC61C
  c->r[3]=c->r[30]|c->r[30]; // 804BC620
  {uint32_t ea=c->r[2]+0x000015D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC624
  c->f[3]=c->f[2]; // 804BC628
  c->lr=0x804BC630u; f_804D36C0(c); // 804BC62C
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC630
  c->r[3]=c->r[30]|c->r[30]; // 804BC634
  c->f[2]=c->f[1]; // 804BC638
  c->f[3]=c->f[1]; // 804BC63C
  c->lr=0x804BC644u; f_804D35C0(c); // 804BC640
  goto L_804BC6EC; // 804BC644
L_804BC648:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 804BC648
  c->r[3]=c->r[1]+0x00000014u; // 804BC64C
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 804BC650
  c->r[4]=c->r[3]|c->r[3]; // 804BC654
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804BC658
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 804BC65C
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 804BC660
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804BC664
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804BC668
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 804BC66C
  c->lr=0x804BC674u; f_80383D38(c); // 804BC670
  c->r[7]=R8(c->r[31]+0x00000020u); // 804BC674
  c->r[4]=c->r[1]+0x00000008u; // 804BC678
  c->r[6]=R8(c->r[31]+0x00000021u); // 804BC67C
  c->r[3]=c->r[30]|c->r[30]; // 804BC680
  c->r[5]=R8(c->r[31]+0x00000022u); // 804BC684
  c->r[0]=R8(c->r[31]+0x00000023u); // 804BC688
  W8(c->r[1]+0x00000008u,c->r[7]); // 804BC68C
  W8(c->r[1]+0x00000009u,c->r[6]); // 804BC690
  W8(c->r[1]+0x0000000Au,c->r[5]); // 804BC694
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804BC698
  c->lr=0x804BC6A0u; f_804D353C(c); // 804BC69C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC6A0
  c->r[3]=c->r[30]|c->r[30]; // 804BC6A4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC6A8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BC6AC
  c->lr=0x804BC6B4u; f_804D3584(c); // 804BC6B0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC6B4
  c->r[3]=c->r[30]|c->r[30]; // 804BC6B8
  c->r[4]=R32(c->r[31]+0x00000030u); // 804BC6BC
  c->lr=0x804BC6C4u; f_804D3600(c); // 804BC6C0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC6C4
  c->r[3]=c->r[30]|c->r[30]; // 804BC6C8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC6CC
  c->r[4]=R32(c->r[31]+0x00000024u); // 804BC6D0
  c->lr=0x804BC6D8u; f_804D3680(c); // 804BC6D4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BC6D8
  c->r[3]=c->r[30]|c->r[30]; // 804BC6DC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BC6E0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804BC6E4
  c->lr=0x804BC6ECu; f_804D35C0(c); // 804BC6E8
L_804BC6EC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 804BC6EC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804BC6F0
  if (!crb(c,2)) { goto L_804BC704; } // 804BC6F4
  c->r[0]=R32(c->r[30]+0x00000000u); // 804BC6F8
  c->r[0]=c->r[0]|0x00000010u; // 804BC6FC
  W32(c->r[30]+0x00000000u,c->r[0]); // 804BC700
L_804BC704:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 804BC704
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BC708
  if (!crb(c,2)) { goto L_804BC71C; } // 804BC70C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804BC710
  c->r[0]=c->r[0]|0x00000020u; // 804BC714
  W32(c->r[30]+0x00000000u,c->r[0]); // 804BC718
L_804BC71C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804BC71C
  c->r[0]=c->r[0]|0x00000004u; // 804BC720
  W32(c->r[30]+0x00000000u,c->r[0]); // 804BC724
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804BC728
  c->r[30]=R32(c->r[1]+0x00000048u); // 804BC72C
  c->r[29]=R32(c->r[1]+0x00000044u); // 804BC730
  c->r[0]=R32(c->r[1]+0x00000054u); // 804BC734
  c->lr=c->r[0]; // 804BC738
  c->r[1]=c->r[1]+0x00000050u; // 804BC73C
  return; // 804BC740
}

// fn_804BC744
void f_804BC744(Ctx* __restrict c) {
  trace_call(0x804BC744u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BC744
  c->r[0]=c->lr; // 804BC748
  W32(c->r[1]+0x00000064u,c->r[0]); // 804BC74C
  c->r[11]=c->r[1]+0x00000060u; // 804BC750
  c->lr=0x804BC758u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BC754
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BC758
  c->r[28]=c->r[3]|c->r[3]; // 804BC75C
  c->r[29]=c->r[4]|c->r[4]; // 804BC760
  c->r[12]=R32(c->r[12]+0x00000050u); // 804BC764
  c->ctr=c->r[12]; // 804BC768
  if (true) { c->lr=0x804BC770u; dispatch(c,c->ctr); } // 804BC76C
  W32(c->r[1]+0x00000024u,c->r[3]); // 804BC770
  c->r[3]=c->r[28]|c->r[28]; // 804BC774
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC778
  c->r[12]=R32(c->r[12]+0x00000054u); // 804BC77C
  c->ctr=c->r[12]; // 804BC780
  if (true) { c->lr=0x804BC788u; dispatch(c,c->ctr); } // 804BC784
  W32(c->r[1]+0x00000020u,c->r[3]); // 804BC788
  c->r[3]=c->r[28]|c->r[28]; // 804BC78C
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC790
  c->r[12]=R32(c->r[12]+0x00000058u); // 804BC794
  c->ctr=c->r[12]; // 804BC798
  if (true) { c->lr=0x804BC7A0u; dispatch(c,c->ctr); } // 804BC79C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BC7A0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804BC7A4
  cmps(c,0,(int32_t)c->r[0],0); // 804BC7A8
  if (crb(c,2)) { goto L_804BC81C; } // 804BC7AC
  c->r[4]=R16(c->r[29]+0x00000002u); // 804BC7B0
  c->r[3]=c->r[1]+0x00000024u; // 804BC7B4
  cmpu(c,0,c->r[4],c->r[0]); // 804BC7B8
  W32(c->r[1]+0x00000018u,c->r[4]); // 804BC7BC
  if (!crb(c,0)) { goto L_804BC7C8; } // 804BC7C0
  c->r[3]=c->r[1]+0x00000018u; // 804BC7C4
L_804BC7C8:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 804BC7C8
  c->r[30]=0u+0x00000000u; // 804BC7CC
  goto L_804BC814; // 804BC7D0
L_804BC7D4:;
  c->r[4]=c->r[29]|c->r[29]; // 804BC7D4
  c->r[5]=c->r[30]|c->r[30]; // 804BC7D8
  c->r[3]=c->r[1]+0x00000030u; // 804BC7DC
  c->lr=0x804BC7E4u; f_804BCA58(c); // 804BC7E0
  c->r[4]=R32(c->r[1]+0x00000030u); // 804BC7E4
  c->r[3]=c->r[28]|c->r[28]; // 804BC7E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BC7EC
  c->r[5]=c->r[30]|c->r[30]; // 804BC7F0
  W32(c->r[1]+0x00000028u,c->r[4]); // 804BC7F4
  c->r[4]=c->r[1]+0x00000028u; // 804BC7F8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804BC7FC
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC800
  c->r[12]=R32(c->r[12]+0x00000064u); // 804BC804
  c->ctr=c->r[12]; // 804BC808
  if (true) { c->lr=0x804BC810u; dispatch(c,c->ctr); } // 804BC80C
  c->r[30]=c->r[30]+0x00000001u; // 804BC810
L_804BC814:;
  cmpu(c,0,c->r[30],c->r[27]); // 804BC814
  if (crb(c,0)) { IRQCHK(c); goto L_804BC7D4; } // 804BC818
L_804BC81C:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 804BC81C
  cmps(c,0,(int32_t)c->r[0],0); // 804BC820
  if (crb(c,2)) { goto L_804BC884; } // 804BC824
  c->r[4]=R16(c->r[29]+0x00000000u); // 804BC828
  c->r[3]=c->r[1]+0x00000020u; // 804BC82C
  c->r[27]=R32(c->r[29]+0x00000008u); // 804BC830
  cmpu(c,0,c->r[4],c->r[0]); // 804BC834
  W32(c->r[1]+0x00000014u,c->r[4]); // 804BC838
  if (!crb(c,0)) { goto L_804BC844; } // 804BC83C
  c->r[3]=c->r[1]+0x00000014u; // 804BC840
L_804BC844:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 804BC844
  c->r[31]=0u+0x00000000u; // 804BC848
  goto L_804BC87C; // 804BC84C
L_804BC850:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC850
  c->r[4]=c->r[28]|c->r[28]; // 804BC854
  c->r[5]=c->r[31]|c->r[31]; // 804BC858
  c->r[3]=c->r[1]+0x00000008u; // 804BC85C
  c->r[12]=R32(c->r[12]+0x00000068u); // 804BC860
  c->ctr=c->r[12]; // 804BC864
  if (true) { c->lr=0x804BC86Cu; dispatch(c,c->ctr); } // 804BC868
  c->r[0]=R32(c->r[1]+0x00000008u); // 804BC86C
  c->r[31]=c->r[31]+0x00000001u; // 804BC870
  W32(c->r[27]+0x00000000u,c->r[0]); // 804BC874
  c->r[27]=c->r[27]+0x00000004u; // 804BC878
L_804BC87C:;
  cmpu(c,0,c->r[31],c->r[30]); // 804BC87C
  if (crb(c,0)) { IRQCHK(c); goto L_804BC850; } // 804BC880
L_804BC884:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 804BC884
  cmps(c,0,(int32_t)c->r[27],0); // 804BC888
  if (crb(c,2)) { goto L_804BCA40; } // 804BC88C
  c->r[31]=R32(c->r[29]+0x00000004u); // 804BC890
  c->r[3]=c->r[28]|c->r[28]; // 804BC894
  c->r[29]=R16(c->r[29]+0x00000000u); // 804BC898
  W32(c->r[1]+0x00000010u,c->r[29]); // 804BC89C
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC8A0
  c->r[12]=R32(c->r[12]+0x00000044u); // 804BC8A4
  c->ctr=c->r[12]; // 804BC8A8
  if (true) { c->lr=0x804BC8B0u; dispatch(c,c->ctr); } // 804BC8AC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 804BC8B0
  c->r[0]=c->r[27]+c->r[3]; // 804BC8B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804BC8B8
  c->r[3]=c->r[1]+0x0000001Cu; // 804BC8BC
  cmpu(c,0,c->r[29],c->r[4]); // 804BC8C0
  if (!crb(c,0)) { goto L_804BC8CC; } // 804BC8C4
  c->r[3]=c->r[1]+0x00000010u; // 804BC8C8
L_804BC8CC:;
  cmpu(c,0,c->r[29],c->r[0]); // 804BC8CC
  c->r[30]=R32(c->r[3]+0x00000000u); // 804BC8D0
  c->r[3]=c->r[1]+0x0000000Cu; // 804BC8D4
  if (!crb(c,0)) { goto L_804BC8E0; } // 804BC8D8
  c->r[3]=c->r[1]+0x00000010u; // 804BC8DC
L_804BC8E0:;
  cmps(c,0,(int32_t)c->r[30],0); // 804BC8E0
  c->r[29]=R32(c->r[3]+0x00000000u); // 804BC8E4
  c->r[5]=0u+0x00000000u; // 804BC8E8
  if (crb(c,2)) { goto L_804BC9AC; } // 804BC8EC
  cmpu(c,0,c->r[30],0x00000008u); // 804BC8F0
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 804BC8F4
  if (!crb(c,1)) { goto L_804BC980; } // 804BC8F8
  c->r[0]=c->r[3]+0x00000007u; // 804BC8FC
  c->r[4]=c->r[31]|c->r[31]; // 804BC900
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804BC904
  c->ctr=c->r[0]; // 804BC908
  cmpu(c,0,c->r[3],0x00000000u); // 804BC90C
  if (!crb(c,1)) { goto L_804BC980; } // 804BC910
L_804BC914:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BC914
  c->r[5]=c->r[5]+0x00000008u; // 804BC918
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC91C
  W32(c->r[4]+0x00000000u,c->r[0]); // 804BC920
  c->r[0]=R32(c->r[4]+0x00000044u); // 804BC924
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC928
  W32(c->r[4]+0x00000044u,c->r[0]); // 804BC92C
  c->r[0]=R32(c->r[4]+0x00000088u); // 804BC930
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC934
  W32(c->r[4]+0x00000088u,c->r[0]); // 804BC938
  c->r[0]=R32(c->r[4]+0x000000CCu); // 804BC93C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC940
  W32(c->r[4]+0x000000CCu,c->r[0]); // 804BC944
  c->r[0]=R32(c->r[4]+0x00000110u); // 804BC948
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC94C
  W32(c->r[4]+0x00000110u,c->r[0]); // 804BC950
  c->r[0]=R32(c->r[4]+0x00000154u); // 804BC954
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC958
  W32(c->r[4]+0x00000154u,c->r[0]); // 804BC95C
  c->r[0]=R32(c->r[4]+0x00000198u); // 804BC960
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC964
  W32(c->r[4]+0x00000198u,c->r[0]); // 804BC968
  c->r[0]=R32(c->r[4]+0x000001DCu); // 804BC96C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC970
  W32(c->r[4]+0x000001DCu,c->r[0]); // 804BC974
  c->r[4]=c->r[4]+0x00000220u; // 804BC978
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BC914; } // 804BC97C
L_804BC980:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804BC980
  c->r[0]=c->r[30]-c->r[5]; // 804BC984
  c->r[3]=c->r[31]+c->r[3]; // 804BC988
  c->ctr=c->r[0]; // 804BC98C
  cmpu(c,0,c->r[5],c->r[30]); // 804BC990
  if (!crb(c,0)) { goto L_804BC9AC; } // 804BC994
L_804BC998:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BC998
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BC99C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804BC9A0
  c->r[3]=c->r[3]+0x00000044u; // 804BC9A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BC998; } // 804BC9A8
L_804BC9AC:;
  c->r[27]=c->r[31]|c->r[31]; // 804BC9AC
  c->r[26]=0u+0x00000000u; // 804BC9B0
  goto L_804BCA38; // 804BC9B4
L_804BC9B8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804BC9B8
  c->r[25]=0u+0x00000000u; // 804BC9BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BC9C0
  if (!crb(c,2)) { goto L_804BCA30; } // 804BC9C4
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC9C8
  c->r[3]=c->r[28]|c->r[28]; // 804BC9CC
  c->r[4]=c->r[26]|c->r[26]; // 804BC9D0
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 804BC9D4
  c->ctr=c->r[12]; // 804BC9D8
  if (true) { c->lr=0x804BC9E0u; dispatch(c,c->ctr); } // 804BC9DC
  cmps(c,0,(int32_t)c->r[3],0); // 804BC9E0
  if (crb(c,2)) { goto L_804BCA10; } // 804BC9E4
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BC9E8
  c->r[3]=c->r[28]|c->r[28]; // 804BC9EC
  c->r[4]=c->r[26]|c->r[26]; // 804BC9F0
  c->r[12]=R32(c->r[12]+0x00000078u); // 804BC9F4
  c->ctr=c->r[12]; // 804BC9F8
  if (true) { c->lr=0x804BCA00u; dispatch(c,c->ctr); } // 804BC9FC
  cmpu(c,0,c->r[3],c->r[29]); // 804BCA00
  if (!crb(c,0)) { goto L_804BCA10; } // 804BCA04
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 804BCA08
  c->r[25]=c->r[31]+c->r[0]; // 804BCA0C
L_804BCA10:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BCA10
  c->r[3]=c->r[28]|c->r[28]; // 804BCA14
  c->r[4]=c->r[27]|c->r[27]; // 804BCA18
  c->r[5]=c->r[25]|c->r[25]; // 804BCA1C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 804BCA20
  c->r[6]=c->r[26]|c->r[26]; // 804BCA24
  c->ctr=c->r[12]; // 804BCA28
  if (true) { c->lr=0x804BCA30u; dispatch(c,c->ctr); } // 804BCA2C
L_804BCA30:;
  c->r[27]=c->r[27]+0x00000044u; // 804BCA30
  c->r[26]=c->r[26]+0x00000001u; // 804BCA34
L_804BCA38:;
  cmpu(c,0,c->r[26],c->r[30]); // 804BCA38
  if (crb(c,0)) { IRQCHK(c); goto L_804BC9B8; } // 804BCA3C
L_804BCA40:;
  c->r[11]=c->r[1]+0x00000060u; // 804BCA40
  c->lr=0x804BCA48u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BCA44
  c->r[0]=R32(c->r[1]+0x00000064u); // 804BCA48
  c->lr=c->r[0]; // 804BCA4C
  c->r[1]=c->r[1]+0x00000060u; // 804BCA50
  return; // 804BCA54
}

// GetLightSet__Q34nw4r3g3d12LightSettingFi
void f_804BCA58(Ctx* __restrict c) {
  trace_call(0x804BCA58u);
  c->r[0]=R16(c->r[4]+0x00000002u); // 804BCA58
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804BCA5C
  if (!crb(c,0)) { goto L_804BCA84; } // 804BCA60
  cmps(c,0,(int32_t)c->r[5],0); // 804BCA64
  if (crb(c,0)) { goto L_804BCA84; } // 804BCA68
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 804BCA6C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 804BCA70
  W32(c->r[3]+0x00000000u,c->r[4]); // 804BCA74
  c->r[0]=c->r[5]+c->r[0]; // 804BCA78
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BCA7C
  return; // 804BCA80
L_804BCA84:;
  c->r[0]=0u+0x00000000u; // 804BCA84
  W32(c->r[3]+0x00000000u,c->r[4]); // 804BCA88
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BCA8C
  return; // 804BCA90
}

// fn_804BCA94
void f_804BCA94(Ctx* __restrict c) {
  trace_call(0x804BCA94u);
  c->r[3]=0u+0x00000000u; // 804BCA94
  return; // 804BCA98
}

// fn_804BCA9C
void f_804BCA9C(Ctx* __restrict c) {
  trace_call(0x804BCA9Cu);
  c->r[3]=0u+0x00000000u; // 804BCA9C
  return; // 804BCAA0
}

// fn_804BCAA4
void f_804BCAA4(Ctx* __restrict c) {
  trace_call(0x804BCAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCAA4
  c->r[0]=c->lr; // 804BCAA8
  cmps(c,0,(int32_t)c->r[3],0); // 804BCAAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BCAB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BCAB4
  c->r[31]=c->r[3]|c->r[3]; // 804BCAB8
  if (crb(c,2)) { goto L_804BCAC8; } // 804BCABC
  c->r[4]=0u+0x00000000u; // 804BCAC0
  c->lr=0x804BCAC8u; f_804BD9F0(c); // 804BCAC4
L_804BCAC8:;
  c->r[3]=c->r[31]|c->r[31]; // 804BCAC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BCACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BCAD0
  c->lr=c->r[0]; // 804BCAD4
  c->r[1]=c->r[1]+0x00000010u; // 804BCAD8
  return; // 804BCADC
}

// fn_804BCAE0
void f_804BCAE0(Ctx* __restrict c) {
  trace_call(0x804BCAE0u);
  c->r[3]=c->r[3]+0x00000020u; // 804BCAE0
  f_804B4028(c); return; // 804BCAE4
}

// fn_804BCAE8
void f_804BCAE8(Ctx* __restrict c) {
  trace_call(0x804BCAE8u);
  c->r[3]=c->r[3]+0x00000020u; // 804BCAE8
  f_804B41DC(c); return; // 804BCAEC
}

// fn_804BCAF0
void f_804BCAF0(Ctx* __restrict c) {
  trace_call(0x804BCAF0u);
  c->r[3]=c->r[3]+0x00000020u; // 804BCAF0
  f_804B4390(c); return; // 804BCAF4
}

// fn_804BCAF8
void f_804BCAF8(Ctx* __restrict c) {
  trace_call(0x804BCAF8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCAF8
  c->r[3]=R16(c->r[3]+0x00000036u); // 804BCAFC
  return; // 804BCB00
}

// fn_804BCB04
void f_804BCB04(Ctx* __restrict c) {
  trace_call(0x804BCB04u);
  c->r[3]=c->r[3]+0x00000020u; // 804BCB04
  f_804B44BC(c); return; // 804BCB08
}

// fn_804BCB0C
void f_804BCB0C(Ctx* __restrict c) {
  trace_call(0x804BCB0Cu);
  c->r[3]=c->r[3]+0x00000020u; // 804BCB0C
  f_804B45E8(c); return; // 804BCB10
}

// fn_804BCB14
void f_804BCB14(Ctx* __restrict c) {
  trace_call(0x804BCB14u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCB14
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 804BCB18
  return; // 804BCB1C
}

// fn_804BCB20
void f_804BCB20(Ctx* __restrict c) {
  trace_call(0x804BCB20u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCB20
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 804BCB24
  return; // 804BCB28
}

// fn_804BCB2C
void f_804BCB2C(Ctx* __restrict c) {
  trace_call(0x804BCB2Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCB2C
  c->r[3]=R16(c->r[3]+0x00000040u); // 804BCB30
  return; // 804BCB34
}

// fn_804BCB38
void f_804BCB38(Ctx* __restrict c) {
  trace_call(0x804BCB38u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCB38
  c->r[3]=R16(c->r[3]+0x00000042u); // 804BCB3C
  return; // 804BCB40
}

// fn_804BCB44
void f_804BCB44(Ctx* __restrict c) {
  trace_call(0x804BCB44u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804BCB44
  c->r[3]=R16(c->r[3]+0x00000044u); // 804BCB48
  return; // 804BCB4C
}

// fn_804BCB50
void f_804BCB50(Ctx* __restrict c) {
  trace_call(0x804BCB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCB50
  c->r[0]=c->lr; // 804BCB54
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BCB58
  c->r[11]=c->r[1]+0x00000040u; // 804BCB5C
  c->lr=0x804BCB64u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BCB60
  c->r[0]=R32(c->r[5]+0x00000000u); // 804BCB64
  c->r[29]=c->r[3]|c->r[3]; // 804BCB68
  c->r[30]=c->r[4]|c->r[4]; // 804BCB6C
  c->r[31]=c->r[5]|c->r[5]; // 804BCB70
  cmps(c,0,(int32_t)c->r[0],0); // 804BCB74
  c->r[22]=c->r[6]|c->r[6]; // 804BCB78
  if (!crb(c,2)) { goto L_804BCB88; } // 804BCB7C
  c->r[3]=0u+0x00000000u; // 804BCB80
  goto L_804BCCCC; // 804BCB84
L_804BCB88:;
  cmps(c,0,(int32_t)c->r[6],0); // 804BCB88
  if (crb(c,2)) { goto L_804BCBA0; } // 804BCB8C
  c->r[3]=c->r[31]|c->r[31]; // 804BCB90
  c->lr=0x804BCB98u; f_804B41DC(c); // 804BCB94
  c->r[26]=c->r[3]|c->r[3]; // 804BCB98
  goto L_804BCBA4; // 804BCB9C
L_804BCBA0:;
  c->r[26]=0u+0x00000000u; // 804BCBA0
L_804BCBA4:;
  cmps(c,0,(int32_t)c->r[22],0); // 804BCBA4
  if (crb(c,2)) { goto L_804BCBBC; } // 804BCBA8
  c->r[3]=c->r[31]|c->r[31]; // 804BCBAC
  c->lr=0x804BCBB4u; f_804B4390(c); // 804BCBB0
  c->r[27]=c->r[3]|c->r[3]; // 804BCBB4
  goto L_804BCBC0; // 804BCBB8
L_804BCBBC:;
  c->r[27]=0u+0x00000000u; // 804BCBBC
L_804BCBC0:;
  cmps(c,0,(int32_t)c->r[22],0); // 804BCBC0
  if (crb(c,2)) { goto L_804BCBD8; } // 804BCBC4
  c->r[3]=c->r[31]|c->r[31]; // 804BCBC8
  c->lr=0x804BCBD0u; f_804B44BC(c); // 804BCBCC
  c->r[28]=c->r[3]|c->r[3]; // 804BCBD0
  goto L_804BCBDC; // 804BCBD4
L_804BCBD8:;
  c->r[28]=0u+0x00000000u; // 804BCBD8
L_804BCBDC:;
  cmps(c,0,(int32_t)c->r[22],0); // 804BCBDC
  if (crb(c,2)) { goto L_804BCBF0; } // 804BCBE0
  c->r[3]=c->r[31]|c->r[31]; // 804BCBE4
  c->lr=0x804BCBECu; f_804B45E8(c); // 804BCBE8
  goto L_804BCBF4; // 804BCBEC
L_804BCBF0:;
  c->r[3]=0u+0x00000000u; // 804BCBF0
L_804BCBF4:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 804BCBF4
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 804BCBF8
  c->r[0]=c->r[25]+0x0000003Bu; // 804BCBFC
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 804BCC00
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BCC04
  cmps(c,0,(int32_t)c->r[30],0); // 804BCC08
  c->r[4]=c->r[26]+c->r[24]; // 804BCC0C
  c->r[0]=c->r[4]+0x00000003u; // 804BCC10
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BCC14
  c->r[4]=c->r[27]+c->r[23]; // 804BCC18
  c->r[0]=c->r[4]+0x00000003u; // 804BCC1C
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 804BCC20
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BCC24
  c->r[3]=c->r[28]+c->r[22]; // 804BCC28
  c->r[0]=c->r[3]+0x00000003u; // 804BCC2C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BCC30
  if (crb(c,2)) { goto L_804BCC3C; } // 804BCC34
  W32(c->r[30]+0x00000000u,c->r[4]); // 804BCC38
L_804BCC3C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804BCC3C
  if (!crb(c,2)) { goto L_804BCC4C; } // 804BCC40
  c->r[3]=0u+0x00000000u; // 804BCC44
  goto L_804BCCCC; // 804BCC48
L_804BCC4C:;
  c->r[3]=c->r[29]|c->r[29]; // 804BCC4C
  c->lr=0x804BCC54u; f_803C4D08(c); // 804BCC50
  cmps(c,0,(int32_t)c->r[3],0); // 804BCC54
  if (!crb(c,2)) { goto L_804BCC64; } // 804BCC58
  c->r[3]=0u+0x00000000u; // 804BCC5C
  goto L_804BCCCC; // 804BCC60
L_804BCC64:;
  if (crb(c,2)) { goto L_804BCCCC; } // 804BCC64
  cmps(c,0,(int32_t)c->r[22],0); // 804BCC68
  if (crb(c,2)) { goto L_804BCC78; } // 804BCC6C
  c->r[9]=c->r[3]+c->r[28]; // 804BCC70
  goto L_804BCC7C; // 804BCC74
L_804BCC78:;
  c->r[9]=0u+0x00000000u; // 804BCC78
L_804BCC7C:;
  cmps(c,0,(int32_t)c->r[23],0); // 804BCC7C
  if (crb(c,2)) { goto L_804BCC8C; } // 804BCC80
  c->r[8]=c->r[3]+c->r[27]; // 804BCC84
  goto L_804BCC90; // 804BCC88
L_804BCC8C:;
  c->r[8]=0u+0x00000000u; // 804BCC8C
L_804BCC90:;
  cmps(c,0,(int32_t)c->r[24],0); // 804BCC90
  if (crb(c,2)) { goto L_804BCCA0; } // 804BCC94
  c->r[7]=c->r[3]+c->r[26]; // 804BCC98
  goto L_804BCCA4; // 804BCC9C
L_804BCCA0:;
  c->r[7]=0u+0x00000000u; // 804BCCA0
L_804BCCA4:;
  cmps(c,0,(int32_t)c->r[25],0); // 804BCCA4
  if (crb(c,2)) { goto L_804BCCB4; } // 804BCCA8
  c->r[6]=c->r[3]+0x00000038u; // 804BCCAC
  goto L_804BCCB8; // 804BCCB0
L_804BCCB4:;
  c->r[6]=0u+0x00000000u; // 804BCCB4
L_804BCCB8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BCCB8
  c->r[4]=c->r[29]|c->r[29]; // 804BCCBC
  c->r[5]=c->r[1]+0x00000008u; // 804BCCC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BCCC4
  c->lr=0x804BCCCCu; f_804BCCE4(c); // 804BCCC8
L_804BCCCC:;
  c->r[11]=c->r[1]+0x00000040u; // 804BCCCC
  c->lr=0x804BCCD4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BCCD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BCCD4
  c->lr=c->r[0]; // 804BCCD8
  c->r[1]=c->r[1]+0x00000040u; // 804BCCDC
  return; // 804BCCE0
}

// fn_804BCCE4
void f_804BCCE4(Ctx* __restrict c) {
  trace_call(0x804BCCE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCCE4
  c->r[0]=c->lr; // 804BCCE8
  c->r[12]=0u+0x80720000u; // 804BCCEC
  c->r[10]=0u+0x80720000u; // 804BCCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BCCF4
  c->r[0]=0u+0x43300000u; // 804BCCF8
  c->r[12]=c->r[12]+0xFFFFA2E8u; // 804BCCFC
  {uint32_t ea=c->r[2]+0x000015D8u; c->f[3]=RF64(ea);} // 804BCD00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BCD04
  c->r[31]=0u+0x00000000u; // 804BCD08
  c->r[11]=c->r[13]+0xFFFF9B50u; // 804BCD0C
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCD10
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BCD14
  cmps(c,0,(int32_t)c->r[6],0); // 804BCD18
  c->r[30]=R32(c->r[5]+0x00000000u); // 804BCD1C
  c->r[10]=c->r[10]+0xFFFFA258u; // 804BCD20
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BCD24
  c->r[29]=c->r[3]|c->r[3]; // 804BCD28
  {uint32_t ea=c->r[2]+0x000015D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BCD2C
  W32(c->r[3]+0x00000004u,c->r[31]); // 804BCD30
  W32(c->r[3]+0x00000008u,c->r[4]); // 804BCD34
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BCD38
  c->r[4]=R16(c->r[30]+0x00000034u); // 804BCD3C
  c->r[12]=R32(c->r[30]+0x00000038u); // 804BCD40
  c->r[4]=c->r[4]^0x80000000u; // 804BCD44
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BCD48
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 804BCD4C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804BCD50
  c->r[4]=R32(c->r[11]+c->r[0]); // 804BCD54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804BCD58
  c->r[0]=R32(c->r[5]+0x00000000u); // 804BCD5C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804BCD60
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804BCD64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804BCD68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804BCD6C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804BCD70
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 804BCD74
  W32(c->r[3]+0x00000000u,c->r[10]); // 804BCD78
  W32(c->r[3]+0x00000020u,c->r[0]); // 804BCD7C
  W32(c->r[3]+0x00000024u,c->r[31]); // 804BCD80
  W32(c->r[3]+0x00000028u,c->r[6]); // 804BCD84
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 804BCD88
  W32(c->r[3]+0x00000030u,c->r[8]); // 804BCD8C
  W32(c->r[3]+0x00000034u,c->r[9]); // 804BCD90
  if (!crb(c,2)) { goto L_804BCDB0; } // 804BCD94
  cmps(c,0,(int32_t)c->r[7],0); // 804BCD98
  if (!crb(c,2)) { goto L_804BCDB0; } // 804BCD9C
  cmps(c,0,(int32_t)c->r[8],0); // 804BCDA0
  if (!crb(c,2)) { goto L_804BCDB0; } // 804BCDA4
  cmps(c,0,(int32_t)c->r[9],0); // 804BCDA8
  if (crb(c,2)) { goto L_804BCDBC; } // 804BCDAC
L_804BCDB0:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 804BCDB0
  c->r[0]=c->r[0]|0x00000001u; // 804BCDB4
  W32(c->r[3]+0x00000024u,c->r[0]); // 804BCDB8
L_804BCDBC:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 804BCDBC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BCDC0
  if (crb(c,2)) { goto L_804BCDD0; } // 804BCDC4
  c->r[3]=c->r[29]|c->r[29]; // 804BCDC8
  c->lr=0x804BCDD0u; f_804BD77C(c); // 804BCDCC
L_804BCDD0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BCDD0
  c->r[3]=c->r[29]|c->r[29]; // 804BCDD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BCDD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BCDDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BCDE0
  c->lr=c->r[0]; // 804BCDE4
  c->r[1]=c->r[1]+0x00000020u; // 804BCDE8
  return; // 804BCDEC
}

// fn_804BCDF0
void f_804BCDF0(Ctx* __restrict c) {
  trace_call(0x804BCDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCDF0
  c->r[0]=c->lr; // 804BCDF4
  cmps(c,0,(int32_t)c->r[3],0); // 804BCDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BCDFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BCE00
  c->r[31]=c->r[3]|c->r[3]; // 804BCE04
  if (crb(c,2)) { goto L_804BCE18; } // 804BCE08
  if (crb(c,2)) { goto L_804BCE18; } // 804BCE0C
  c->r[4]=0u+0x00000000u; // 804BCE10
  c->lr=0x804BCE18u; f_804BD9F0(c); // 804BCE14
L_804BCE18:;
  c->r[3]=c->r[31]|c->r[31]; // 804BCE18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BCE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BCE20
  c->lr=c->r[0]; // 804BCE24
  c->r[1]=c->r[1]+0x00000010u; // 804BCE28
  return; // 804BCE2C
}

// fn_804BCE30
void f_804BCE30(Ctx* __restrict c) {
  trace_call(0x804BCE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCE30
  c->r[0]=c->lr; // 804BCE34
  c->f[3]=c->f[1]; // 804BCE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BCE3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BCE40
  c->r[31]=c->r[3]|c->r[3]; // 804BCE44
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 804BCE48
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCE4C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BCE50
  c->ctr=c->r[12]; // 804BCE54
  if (true) { c->lr=0x804BCE5Cu; dispatch(c,c->ctr); } // 804BCE58
  c->r[0]=R32(c->r[31]+0x00000024u); // 804BCE5C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804BCE60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BCE64
  if (crb(c,2)) { goto L_804BCE74; } // 804BCE68
  c->r[3]=c->r[31]|c->r[31]; // 804BCE6C
  c->lr=0x804BCE74u; f_804BD77C(c); // 804BCE70
L_804BCE74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BCE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BCE78
  c->lr=c->r[0]; // 804BCE7C
  c->r[1]=c->r[1]+0x00000010u; // 804BCE80
  return; // 804BCE84
}

// fn_804BCE88
void f_804BCE88(Ctx* __restrict c) {
  trace_call(0x804BCE88u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCE88
  return; // 804BCE8C
}

// fn_804BCE90
void f_804BCE90(Ctx* __restrict c) {
  trace_call(0x804BCE90u);
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BCE90
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804BCE94
  fcmp(c,0,c->f[0],c->f[1]); // 804BCE98
  if (!crb(c,2)) return; // 804BCE9C
  c->r[0]=R32(c->r[3]+0x00000024u); // 804BCEA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BCEA4
  if (crb(c,2)) return; // 804BCEA8
  f_804BD77C(c); return; // 804BCEAC
  return; // 804BCEB0
}

// fn_804BCEB4
void f_804BCEB4(Ctx* __restrict c) {
  trace_call(0x804BCEB4u);
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCEB4
  return; // 804BCEB8
}

// fn_804BCEBC
void f_804BCEBC(Ctx* __restrict c) {
  trace_call(0x804BCEBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCEBC
  c->r[0]=c->lr; // 804BCEC0
  {uint32_t ea=c->r[2]+0x000015C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BCEC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BCEC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BCECC
  c->r[31]=c->r[3]|c->r[3]; // 804BCED0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCED4
  fcmp(c,0,c->f[0],c->f[1]); // 804BCED8
  if (crb(c,2)) { goto L_804BCF20; } // 804BCEDC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BCEE0
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCEE4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BCEE8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804BCEEC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 804BCEF0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BCEF4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BCEF8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804BCEFC
  c->ctr=c->r[12]; // 804BCF00
  if (true) { c->lr=0x804BCF08u; dispatch(c,c->ctr); } // 804BCF04
  c->r[0]=R32(c->r[31]+0x00000024u); // 804BCF08
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804BCF0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BCF10
  if (crb(c,2)) { goto L_804BCF20; } // 804BCF14
  c->r[3]=c->r[31]|c->r[31]; // 804BCF18
  c->lr=0x804BCF20u; f_804BD77C(c); // 804BCF1C
L_804BCF20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BCF20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BCF24
  c->lr=c->r[0]; // 804BCF28
  c->r[1]=c->r[1]+0x00000010u; // 804BCF2C
  return; // 804BCF30
}

// fn_804BCF34
void f_804BCF34(Ctx* __restrict c) {
  trace_call(0x804BCF34u);
  c->r[5]=0u+0x00010000u; // 804BCF34
  c->r[0]=c->r[5]+0x00000002u; // 804BCF38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BCF3C
  if (crb(c,2)) { goto L_804BCF80; } // 804BCF40
  if (!crb(c,0)) { goto L_804BCF54; } // 804BCF44
  cmps(c,0,(int32_t)c->r[4],8); // 804BCF48
  if (crb(c,2)) { goto L_804BCF64; } // 804BCF4C
  return; // 804BCF50
L_804BCF54:;
  c->r[0]=c->r[5]+0x00000004u; // 804BCF54
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BCF58
  if (!crb(c,0)) return; // 804BCF5C
  goto L_804BCF74; // 804BCF60
L_804BCF64:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BCF64
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804BCF68
  c->ctr=c->r[12]; // 804BCF6C
  if (true) { dispatch(c,c->ctr); return; } // 804BCF70
L_804BCF74:;
  c->r[0]=0u+0x00000000u; // 804BCF74
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BCF78
  return; // 804BCF7C
L_804BCF80:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804BCF80
  return; // 804BCF84
}

// fn_804BCF88
void f_804BCF88(Ctx* __restrict c) {
  trace_call(0x804BCF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BCF88
  c->r[0]=c->lr; // 804BCF8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BCF90
  c->r[11]=c->r[1]+0x00000030u; // 804BCF94
  c->lr=0x804BCF9Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BCF98
  c->r[24]=c->r[3]|c->r[3]; // 804BCF9C
  c->r[25]=c->r[4]|c->r[4]; // 804BCFA0
  c->r[4]=c->r[5]|c->r[5]; // 804BCFA4
  c->r[3]=c->r[3]+0x00000020u; // 804BCFA8
  c->lr=0x804BCFB0u; f_804B4668(c); // 804BCFAC
  cmps(c,0,(int32_t)c->r[3],0); // 804BCFB0
  c->r[30]=c->r[3]|c->r[3]; // 804BCFB4
  if (!crb(c,2)) { goto L_804BCFC4; } // 804BCFB8
  c->r[3]=0u+0x00000000u; // 804BCFBC
  goto L_804BD0A8; // 804BCFC0
L_804BCFC4:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 804BCFC4
  c->r[28]=0u+0x00000007u; // 804BCFC8
  c->r[27]=0u+0x00000000u; // 804BCFCC
  cmps(c,0,(int32_t)c->r[26],0); // 804BCFD0
  if (crb(c,2)) { goto L_804BD064; } // 804BCFD4
  c->r[29]=c->r[30]|c->r[30]; // 804BCFD8
  goto L_804BD044; // 804BCFDC
L_804BCFE0:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 804BCFE0
  cmpu(c,0,c->r[4],0x0000FFFFu); // 804BCFE4
  if (crb(c,2)) { goto L_804BD02C; } // 804BCFE8
  c->r[3]=c->r[24]+0x00000020u; // 804BCFEC
  c->lr=0x804BCFF4u; f_804B42E4(c); // 804BCFF0
  c->r[31]=c->r[3]|c->r[3]; // 804BCFF4
  c->r[3]=c->r[25]|c->r[25]; // 804BCFF8
  c->r[5]=R32(c->r[31]+0x00000010u); // 804BCFFC
  c->r[4]=c->r[27]|c->r[27]; // 804BD000
  c->lr=0x804BD008u; f_804D3FF4(c); // 804BD004
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 804BD008
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804BD00C
  if (crb(c,2)) { goto L_804BD03C; } // 804BD010
  c->r[5]=R32(c->r[31]+0x00000014u); // 804BD014
  c->r[4]=c->r[28]|c->r[28]; // 804BD018
  c->r[3]=c->r[25]|c->r[25]; // 804BD01C
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 804BD020
  c->lr=0x804BD028u; f_804D3FF4(c); // 804BD024
  goto L_804BD03C; // 804BD028
L_804BD02C:;
  c->r[3]=c->r[25]|c->r[25]; // 804BD02C
  c->r[4]=c->r[27]|c->r[27]; // 804BD030
  c->r[5]=0u+0xFFFFFFFFu; // 804BD034
  c->lr=0x804BD03Cu; f_804D3FF4(c); // 804BD038
L_804BD03C:;
  c->r[29]=c->r[29]+0x00000002u; // 804BD03C
  c->r[27]=c->r[27]+0x00000001u; // 804BD040
L_804BD044:;
  cmpu(c,0,c->r[27],c->r[26]); // 804BD044
  if (crb(c,0)) { IRQCHK(c); goto L_804BCFE0; } // 804BD048
  goto L_804BD064; // 804BD04C
L_804BD050:;
  c->r[3]=c->r[25]|c->r[25]; // 804BD050
  c->r[4]=c->r[26]|c->r[26]; // 804BD054
  c->r[5]=0u+0xFFFFFFFFu; // 804BD058
  c->lr=0x804BD060u; f_804D3FF4(c); // 804BD05C
  c->r[26]=c->r[26]+0x00000001u; // 804BD060
L_804BD064:;
  cmpu(c,0,c->r[26],c->r[28]); // 804BD064
  if (!crb(c,1)) { IRQCHK(c); goto L_804BD050; } // 804BD068
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BD06C
  cmps(c,0,(int32_t)c->r[0],0); // 804BD070
  if (crb(c,2)) { goto L_804BD098; } // 804BD074
  c->r[4]=R16(c->r[30]+0x00000018u); // 804BD078
  c->r[3]=c->r[24]+0x00000020u; // 804BD07C
  c->lr=0x804BD084u; f_804B4130(c); // 804BD080
  c->r[4]=c->r[3]|c->r[3]; // 804BD084
  c->r[3]=c->r[25]|c->r[25]; // 804BD088
  c->r[4]=R32(c->r[4]+0x00000010u); // 804BD08C
  c->lr=0x804BD094u; f_804D4064(c); // 804BD090
  goto L_804BD0A4; // 804BD094
L_804BD098:;
  c->r[3]=c->r[25]|c->r[25]; // 804BD098
  c->r[4]=0u+0xFFFFFFFFu; // 804BD09C
  c->lr=0x804BD0A4u; f_804D4064(c); // 804BD0A0
L_804BD0A4:;
  c->r[3]=0u+0x00000001u; // 804BD0A4
L_804BD0A8:;
  c->r[11]=c->r[1]+0x00000030u; // 804BD0A8
  c->lr=0x804BD0B0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BD0AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BD0B0
  c->lr=c->r[0]; // 804BD0B4
  c->r[1]=c->r[1]+0x00000030u; // 804BD0B8
  return; // 804BD0BC
}

// fn_804BD0C0
void f_804BD0C0(Ctx* __restrict c) {
  trace_call(0x804BD0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD0C0
  c->r[0]=c->lr; // 804BD0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BD0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BD0CC
  c->r[31]=c->r[3]|c->r[3]; // 804BD0D0
  c->r[3]=c->r[4]|c->r[4]; // 804BD0D4
  c->r[12]=R32(c->r[4]+0x00000000u); // 804BD0D8
  c->r[4]=c->r[1]+0x00000008u; // 804BD0DC
  c->r[12]=R32(c->r[12]+0x00000080u); // 804BD0E0
  c->ctr=c->r[12]; // 804BD0E4
  if (true) { c->lr=0x804BD0ECu; dispatch(c,c->ctr); } // 804BD0E8
  c->r[4]=R32(c->r[3]+0x00000000u); // 804BD0EC
  c->r[3]=R32(c->r[3]+0x00000004u); // 804BD0F0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804BD0F4
  if (!crb(c,2)) { goto L_804BD104; } // 804BD0F8
  c->r[0]=0u+0xFFFFFF00u; // 804BD0FC
  c->r[3]=c->r[3]|c->r[0]; // 804BD100
L_804BD104:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804BD104
  if (!crb(c,2)) { goto L_804BD110; } // 804BD108
  c->r[3]=c->r[3]|0x000000FFu; // 804BD10C
L_804BD110:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BD110
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BD114
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BD118
  c->lr=c->r[0]; // 804BD11C
  c->r[1]=c->r[1]+0x00000020u; // 804BD120
  return; // 804BD124
}

// fn_804BD128
void f_804BD128(Ctx* __restrict c) {
  trace_call(0x804BD128u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD128
  c->r[0]=c->lr; // 804BD12C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804BD130
  c->r[0]=0u+0xFFFFFFFFu; // 804BD134
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 804BD138
  c->r[31]=c->r[5]|c->r[5]; // 804BD13C
  c->r[5]=c->r[6]|c->r[6]; // 804BD140
  W32(c->r[1]+0x00000068u,c->r[30]); // 804BD144
  W32(c->r[1]+0x00000064u,c->r[29]); // 804BD148
  c->r[29]=c->r[4]|c->r[4]; // 804BD14C
  c->r[4]=c->r[1]+0x00000018u; // 804BD150
  W32(c->r[1]+0x00000038u,c->r[0]); // 804BD154
  W32(c->r[1]+0x00000050u,c->r[0]); // 804BD158
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BD15C
  c->r[12]=R32(c->r[12]+0x00000084u); // 804BD160
  c->ctr=c->r[12]; // 804BD164
  if (true) { c->lr=0x804BD16Cu; dispatch(c,c->ctr); } // 804BD168
  c->r[0]=R32(c->r[3]+0x00000004u); // 804BD16C
  c->r[30]=c->r[3]|c->r[3]; // 804BD170
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BD174
  if (crb(c,2)) { goto L_804BD274; } // 804BD178
  cmps(c,0,(int32_t)c->r[29],0); // 804BD17C
  if (crb(c,2)) { goto L_804BD190; } // 804BD180
  c->r[3]=c->r[29]|c->r[29]; // 804BD184
  c->r[4]=c->r[30]|c->r[30]; // 804BD188
  c->lr=0x804BD190u; f_804BC4C4(c); // 804BD18C
L_804BD190:;
  cmps(c,0,(int32_t)c->r[31],0); // 804BD190
  if (crb(c,2)) { goto L_804BD29C; } // 804BD194
  c->r[0]=R32(c->r[30]+0x00000004u); // 804BD198
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804BD19C
  if (crb(c,2)) { goto L_804BD264; } // 804BD1A0
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 804BD1A4
  c->r[3]=c->r[1]+0x0000000Cu; // 804BD1A8
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 804BD1AC
  c->r[4]=c->r[3]|c->r[3]; // 804BD1B0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804BD1B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804BD1B8
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 804BD1BC
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 804BD1C0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804BD1C4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 804BD1C8
  c->lr=0x804BD1D0u; f_80383D38(c); // 804BD1CC
  c->r[3]=c->r[31]|c->r[31]; // 804BD1D0
  c->lr=0x804BD1D8u; f_804D3528(c); // 804BD1D4
  c->r[0]=R8(c->r[30]+0x00000038u); // 804BD1D8
  c->r[4]=c->r[1]+0x00000008u; // 804BD1DC
  c->r[3]=c->r[31]|c->r[31]; // 804BD1E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 804BD1E4
  c->r[0]=R8(c->r[30]+0x00000039u); // 804BD1E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 804BD1EC
  c->r[0]=R8(c->r[30]+0x0000003Au); // 804BD1F0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 804BD1F4
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 804BD1F8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804BD1FC
  c->lr=0x804BD204u; f_804D353C(c); // 804BD200
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD204
  c->r[3]=c->r[31]|c->r[31]; // 804BD208
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BD20C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BD210
  c->lr=0x804BD218u; f_804D3700(c); // 804BD214
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD218
  c->r[3]=c->r[31]|c->r[31]; // 804BD21C
  c->lr=0x804BD224u; f_804D3740(c); // 804BD220
  c->r[0]=R32(c->r[30]+0x00000004u); // 804BD224
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804BD228
  if (!crb(c,2)) { goto L_804BD23C; } // 804BD22C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD230
  c->r[0]=c->r[0]|0x00000010u; // 804BD234
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD238
L_804BD23C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804BD23C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BD240
  if (!crb(c,2)) { goto L_804BD254; } // 804BD244
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD248
  c->r[0]=c->r[0]|0x00000020u; // 804BD24C
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD250
L_804BD254:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD254
  c->r[0]=c->r[0]|0x00000004u; // 804BD258
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD25C
  goto L_804BD29C; // 804BD260
L_804BD264:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD264
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BD268
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD26C
  goto L_804BD29C; // 804BD270
L_804BD274:;
  cmps(c,0,(int32_t)c->r[29],0); // 804BD274
  if (crb(c,2)) { goto L_804BD288; } // 804BD278
  c->r[0]=R32(c->r[29]+0x00000000u); // 804BD27C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BD280
  W32(c->r[29]+0x00000000u,c->r[0]); // 804BD284
L_804BD288:;
  cmps(c,0,(int32_t)c->r[31],0); // 804BD288
  if (crb(c,2)) { goto L_804BD29C; } // 804BD28C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD290
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804BD294
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD298
L_804BD29C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 804BD29C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 804BD2A0
  c->r[30]=R32(c->r[1]+0x00000068u); // 804BD2A4
  c->r[29]=R32(c->r[1]+0x00000064u); // 804BD2A8
  c->lr=c->r[0]; // 804BD2AC
  c->r[1]=c->r[1]+0x00000070u; // 804BD2B0
  return; // 804BD2B4
}

// fn_804BD2B8
void f_804BD2B8(Ctx* __restrict c) {
  trace_call(0x804BD2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD2B8
  c->r[0]=c->lr; // 804BD2BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BD2C0
  c->r[0]=0u+0xFFFFFFFFu; // 804BD2C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804BD2C8
  c->r[31]=c->r[4]|c->r[4]; // 804BD2CC
  c->r[4]=c->r[1]+0x00000010u; // 804BD2D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804BD2D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BD2D8
  c->r[12]=R32(c->r[12]+0x00000088u); // 804BD2DC
  c->ctr=c->r[12]; // 804BD2E0
  if (true) { c->lr=0x804BD2E8u; dispatch(c,c->ctr); } // 804BD2E4
  c->r[4]=R32(c->r[31]+0x00000000u); // 804BD2E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BD2EC
  cmps(c,0,(int32_t)c->r[4],0); // 804BD2F0
  if (crb(c,2)) { goto L_804BD2FC; } // 804BD2F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804BD2F8
L_804BD2FC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 804BD2FC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD300
  cmps(c,0,(int32_t)c->r[4],0); // 804BD304
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BD308
  if (crb(c,2)) { goto L_804BD318; } // 804BD30C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804BD310
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 804BD314
L_804BD318:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 804BD318
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 804BD31C
  c->r[5]=R8(c->r[3]+0x0000000Du); // 804BD320
  cmps(c,0,(int32_t)c->r[7],0); // 804BD324
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 804BD328
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 804BD32C
  W8(c->r[1]+0x00000008u,c->r[6]); // 804BD330
  W8(c->r[1]+0x00000009u,c->r[5]); // 804BD334
  W8(c->r[1]+0x0000000Au,c->r[4]); // 804BD338
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804BD33C
  if (crb(c,2)) { goto L_804BD354; } // 804BD340
  W8(c->r[7]+0x00000014u,c->r[6]); // 804BD344
  W8(c->r[7]+0x00000015u,c->r[5]); // 804BD348
  W8(c->r[7]+0x00000016u,c->r[4]); // 804BD34C
  W8(c->r[7]+0x00000017u,c->r[0]); // 804BD350
L_804BD354:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BD354
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804BD358
  c->lr=c->r[0]; // 804BD35C
  c->r[1]=c->r[1]+0x00000030u; // 804BD360
  return; // 804BD364
}

// fn_804BD368
void f_804BD368(Ctx* __restrict c) {
  trace_call(0x804BD368u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD368
  c->r[0]=c->lr; // 804BD36C
  W32(c->r[1]+0x00000094u,c->r[0]); // 804BD370
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 804BD374
  W32(c->r[1]+0x00000088u,c->r[30]); // 804BD378
  c->r[30]=c->r[4]|c->r[4]; // 804BD37C
  c->r[4]=c->r[1]+0x0000004Cu; // 804BD380
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BD384
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 804BD388
  c->ctr=c->r[12]; // 804BD38C
  if (true) { c->lr=0x804BD394u; dispatch(c,c->ctr); } // 804BD390
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BD394
  c->r[31]=c->r[3]|c->r[3]; // 804BD398
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804BD39C
  if (!crb(c,2)) { goto L_804BD3AC; } // 804BD3A0
  c->r[3]=0u+0x00000000u; // 804BD3A4
  goto L_804BD4B0; // 804BD3A8
L_804BD3AC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 804BD3AC
  cmps(c,0,(int32_t)c->r[0],1); // 804BD3B0
  if (crb(c,2)) { goto L_804BD3E4; } // 804BD3B4
  if (!crb(c,0)) { goto L_804BD410; } // 804BD3B8
  cmps(c,0,(int32_t)c->r[0],0); // 804BD3BC
  if (!crb(c,0)) { goto L_804BD3C8; } // 804BD3C0
  goto L_804BD410; // 804BD3C4
L_804BD3C8:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD3C8
  c->r[3]=c->r[30]|c->r[30]; // 804BD3CC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BD3D0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BD3D4
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804BD3D8
  c->lr=0x804BD3E0u; f_804C7DC4(c); // 804BD3DC
  goto L_804BD410; // 804BD3E0
L_804BD3E4:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BD3E4
  {uint32_t ea=c->r[2]+0x000015E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD3E8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BD3EC
  c->r[3]=c->r[30]|c->r[30]; // 804BD3F0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804BD3F4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 804BD3F8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804BD3FC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804BD400
  c->f[2]=-c->f[1]; // 804BD404
  c->f[3]=-c->f[4]; // 804BD408
  c->lr=0x804BD410u; f_804C7E3C(c); // 804BD40C
L_804BD410:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BD410
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 804BD414
  cmps(c,0,(int32_t)c->r[0],1); // 804BD418
  if (crb(c,2)) { goto L_804BD460; } // 804BD41C
  if (!crb(c,0)) { goto L_804BD494; } // 804BD420
  cmps(c,0,(int32_t)c->r[0],0); // 804BD424
  if (!crb(c,0)) { goto L_804BD430; } // 804BD428
  goto L_804BD494; // 804BD42C
L_804BD430:;
  c->r[0]=0u+0x00000001u; // 804BD430
  W32(c->r[1]+0x00000020u,c->r[0]); // 804BD434
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BD438
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD43C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BD440
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804BD444
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804BD448
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BD44C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 804BD450
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 804BD454
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 804BD458
  goto L_804BD494; // 804BD45C
L_804BD460:;
  c->r[0]=0u+0x00000002u; // 804BD460
  W32(c->r[1]+0x00000020u,c->r[0]); // 804BD464
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BD468
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BD46C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD470
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804BD474
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804BD478
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 804BD47C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 804BD480
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BD484
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804BD488
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804BD48C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 804BD490
L_804BD494:;
  c->r[3]=c->r[30]|c->r[30]; // 804BD494
  c->r[4]=c->r[31]+0x00000008u; // 804BD498
  c->lr=0x804BD4A0u; f_804C7A8C(c); // 804BD49C
  c->r[3]=c->r[30]|c->r[30]; // 804BD4A0
  c->r[4]=c->r[1]+0x00000020u; // 804BD4A4
  c->lr=0x804BD4ACu; f_804C7AF0(c); // 804BD4A8
  c->r[3]=0u+0x00000001u; // 804BD4AC
L_804BD4B0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 804BD4B0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 804BD4B4
  c->r[30]=R32(c->r[1]+0x00000088u); // 804BD4B8
  c->lr=c->r[0]; // 804BD4BC
  c->r[1]=c->r[1]+0x00000090u; // 804BD4C0
  return; // 804BD4C4
}

// fn_804BD4C8
void f_804BD4C8(Ctx* __restrict c) {
  trace_call(0x804BD4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD4C8
  c->r[0]=c->lr; // 804BD4CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BD4D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BD4D4
  c->r[31]=c->r[4]|c->r[4]; // 804BD4D8
  c->r[4]=c->r[5]|c->r[5]; // 804BD4DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BD4E0
  c->r[30]=c->r[3]|c->r[3]; // 804BD4E4
  c->r[3]=c->r[3]+0x00000020u; // 804BD4E8
  c->lr=0x804BD4F0u; f_804B46B4(c); // 804BD4EC
  cmps(c,0,(int32_t)c->r[3],0); // 804BD4F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BD4F4
  if (!crb(c,2)) { goto L_804BD514; } // 804BD4F8
  c->r[3]=0u+0x00000000u; // 804BD4FC
  c->r[0]=0u+0xFFFFFFFFu; // 804BD500
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BD504
  c->r[3]=c->r[31]|c->r[31]; // 804BD508
  W32(c->r[31]+0x00000004u,c->r[0]); // 804BD50C
  goto L_804BD544; // 804BD510
L_804BD514:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 804BD514
  cmps(c,0,(int32_t)c->r[4],0); // 804BD518
  if (crb(c,2)) { goto L_804BD530; } // 804BD51C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BD520
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804BD524
  c->r[3]=c->r[4]+c->r[0]; // 804BD528
  goto L_804BD544; // 804BD52C
L_804BD530:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD530
  c->r[4]=c->r[31]|c->r[31]; // 804BD534
  c->r[3]=c->r[1]+0x00000008u; // 804BD538
  c->lr=0x804BD540u; f_804B3628(c); // 804BD53C
  c->r[3]=c->r[31]|c->r[31]; // 804BD540
L_804BD544:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BD544
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BD548
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BD54C
  c->lr=c->r[0]; // 804BD550
  c->r[1]=c->r[1]+0x00000020u; // 804BD554
  return; // 804BD558
}

// fn_804BD55C
void f_804BD55C(Ctx* __restrict c) {
  trace_call(0x804BD55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD55C
  c->r[0]=c->lr; // 804BD560
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BD564
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BD568
  c->r[31]=c->r[4]|c->r[4]; // 804BD56C
  c->r[4]=c->r[5]|c->r[5]; // 804BD570
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BD574
  c->r[30]=c->r[3]|c->r[3]; // 804BD578
  c->r[3]=c->r[3]+0x00000020u; // 804BD57C
  c->lr=0x804BD584u; f_804B4700(c); // 804BD580
  cmps(c,0,(int32_t)c->r[3],0); // 804BD584
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BD588
  if (!crb(c,2)) { goto L_804BD5A0; } // 804BD58C
  c->r[0]=0u+0x00000000u; // 804BD590
  c->r[3]=c->r[31]|c->r[31]; // 804BD594
  W32(c->r[31]+0x00000004u,c->r[0]); // 804BD598
  goto L_804BD5D0; // 804BD59C
L_804BD5A0:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 804BD5A0
  cmps(c,0,(int32_t)c->r[4],0); // 804BD5A4
  if (crb(c,2)) { goto L_804BD5BC; } // 804BD5A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BD5AC
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 804BD5B0
  c->r[3]=c->r[4]+c->r[0]; // 804BD5B4
  goto L_804BD5D0; // 804BD5B8
L_804BD5BC:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD5BC
  c->r[4]=c->r[31]|c->r[31]; // 804BD5C0
  c->r[3]=c->r[1]+0x00000008u; // 804BD5C4
  c->lr=0x804BD5CCu; f_804B36F8(c); // 804BD5C8
  c->r[3]=c->r[31]|c->r[31]; // 804BD5CC
L_804BD5D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BD5D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BD5D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BD5D8
  c->lr=c->r[0]; // 804BD5DC
  c->r[1]=c->r[1]+0x00000020u; // 804BD5E0
  return; // 804BD5E4
}

// fn_804BD5E8
void f_804BD5E8(Ctx* __restrict c) {
  trace_call(0x804BD5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD5E8
  c->r[0]=c->lr; // 804BD5EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BD5F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BD5F4
  c->r[31]=c->r[4]|c->r[4]; // 804BD5F8
  c->r[4]=c->r[5]|c->r[5]; // 804BD5FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BD600
  c->r[30]=c->r[3]|c->r[3]; // 804BD604
  c->r[3]=c->r[3]+0x00000020u; // 804BD608
  c->lr=0x804BD610u; f_804B474C(c); // 804BD60C
  cmps(c,0,(int32_t)c->r[3],0); // 804BD610
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BD614
  if (!crb(c,2)) { goto L_804BD62C; } // 804BD618
  c->r[0]=0u+0x00000000u; // 804BD61C
  c->r[3]=c->r[31]|c->r[31]; // 804BD620
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD624
  goto L_804BD65C; // 804BD628
L_804BD62C:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 804BD62C
  cmps(c,0,(int32_t)c->r[4],0); // 804BD630
  if (crb(c,2)) { goto L_804BD648; } // 804BD634
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BD638
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BD63C
  c->r[3]=c->r[4]+c->r[0]; // 804BD640
  goto L_804BD65C; // 804BD644
L_804BD648:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD648
  c->r[4]=c->r[31]|c->r[31]; // 804BD64C
  c->r[3]=c->r[1]+0x00000008u; // 804BD650
  c->lr=0x804BD658u; f_804B3AF0(c); // 804BD654
  c->r[3]=c->r[31]|c->r[31]; // 804BD658
L_804BD65C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BD65C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BD660
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BD664
  c->lr=c->r[0]; // 804BD668
  c->r[1]=c->r[1]+0x00000020u; // 804BD66C
  return; // 804BD670
}

// fn_804BD674
void f_804BD674(Ctx* __restrict c) {
  trace_call(0x804BD674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD674
  c->r[0]=c->lr; // 804BD678
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BD67C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BD680
  c->r[31]=c->r[4]|c->r[4]; // 804BD684
  c->r[4]=c->r[5]|c->r[5]; // 804BD688
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BD68C
  c->r[30]=c->r[3]|c->r[3]; // 804BD690
  c->r[3]=c->r[3]+0x00000020u; // 804BD694
  c->lr=0x804BD69Cu; f_804B4798(c); // 804BD698
  cmps(c,0,(int32_t)c->r[3],0); // 804BD69C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BD6A0
  if (!crb(c,2)) { goto L_804BD6B8; } // 804BD6A4
  c->r[0]=0u+0x00000000u; // 804BD6A8
  c->r[3]=c->r[31]|c->r[31]; // 804BD6AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 804BD6B0
  goto L_804BD6E8; // 804BD6B4
L_804BD6B8:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 804BD6B8
  cmps(c,0,(int32_t)c->r[4],0); // 804BD6BC
  if (crb(c,2)) { goto L_804BD6D4; } // 804BD6C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BD6C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 804BD6C8
  c->r[3]=c->r[4]+c->r[0]; // 804BD6CC
  goto L_804BD6E8; // 804BD6D0
L_804BD6D4:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BD6D4
  c->r[4]=c->r[31]|c->r[31]; // 804BD6D8
  c->r[3]=c->r[1]+0x00000008u; // 804BD6DC
  c->lr=0x804BD6E4u; f_804B3C50(c); // 804BD6E0
  c->r[3]=c->r[31]|c->r[31]; // 804BD6E4
L_804BD6E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BD6E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BD6EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BD6F0
  c->lr=c->r[0]; // 804BD6F4
  c->r[1]=c->r[1]+0x00000020u; // 804BD6F8
  return; // 804BD6FC
}

// fn_804BD700
void f_804BD700(Ctx* __restrict c) {
  trace_call(0x804BD700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD700
  c->r[0]=c->lr; // 804BD704
  c->r[3]=c->r[3]+0x00000020u; // 804BD708
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BD70C
  c->lr=0x804BD714u; f_804B4700(c); // 804BD710
  cmps(c,0,(int32_t)c->r[3],0); // 804BD714
  if (crb(c,2)) { goto L_804BD724; } // 804BD718
  c->r[3]=R32(c->r[3]+0x00000014u); // 804BD71C
  goto L_804BD728; // 804BD720
L_804BD724:;
  c->r[3]=0u+0xFFFFFFFFu; // 804BD724
L_804BD728:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BD728
  c->lr=c->r[0]; // 804BD72C
  c->r[1]=c->r[1]+0x00000010u; // 804BD730
  return; // 804BD734
}

// fn_804BD738
void f_804BD738(Ctx* __restrict c) {
  trace_call(0x804BD738u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD738
  c->r[0]=c->lr; // 804BD73C
  c->r[3]=c->r[3]+0x00000020u; // 804BD740
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BD744
  c->lr=0x804BD74Cu; f_804B4700(c); // 804BD748
  cmps(c,0,(int32_t)c->r[3],0); // 804BD74C
  c->r[4]=0u+0x00000000u; // 804BD750
  if (crb(c,2)) { goto L_804BD768; } // 804BD754
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804BD758
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804BD75C
  if (crb(c,2)) { goto L_804BD768; } // 804BD760
  c->r[4]=0u+0x00000001u; // 804BD764
L_804BD768:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BD768
  c->r[3]=c->r[4]|c->r[4]; // 804BD76C
  c->lr=c->r[0]; // 804BD770
  c->r[1]=c->r[1]+0x00000010u; // 804BD774
  return; // 804BD778
}

// fn_804BD77C
void f_804BD77C(Ctx* __restrict c) {
  trace_call(0x804BD77Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD77C
  c->r[0]=c->lr; // 804BD780
  W32(c->r[1]+0x00000054u,c->r[0]); // 804BD784
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804BD788
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804BD78C
  c->r[11]=c->r[1]+0x00000040u; // 804BD790
  c->lr=0x804BD798u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BD794
  c->r[25]=c->r[3]|c->r[3]; // 804BD798
  c->r[3]=c->r[3]+0x00000020u; // 804BD79C
  c->lr=0x804BD7A4u; f_804B41DC(c); // 804BD7A0
  c->r[28]=c->r[3]|c->r[3]; // 804BD7A4
  c->r[3]=c->r[25]+0x00000020u; // 804BD7A8
  c->lr=0x804BD7B0u; f_804B4390(c); // 804BD7AC
  c->r[29]=c->r[3]|c->r[3]; // 804BD7B0
  c->r[3]=c->r[25]+0x00000020u; // 804BD7B4
  c->lr=0x804BD7BCu; f_804B44BC(c); // 804BD7B8
  c->r[30]=c->r[3]|c->r[3]; // 804BD7BC
  c->r[3]=c->r[25]+0x00000020u; // 804BD7C0
  c->lr=0x804BD7C8u; f_804B45E8(c); // 804BD7C4
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804BD7C8
  c->r[31]=c->r[3]|c->r[3]; // 804BD7CC
  c->r[26]=0u+0x00000000u; // 804BD7D0
  c->r[27]=0u+0x00000000u; // 804BD7D4
  goto L_804BD808; // 804BD7D8
L_804BD7DC:;
  c->r[4]=c->r[26]|c->r[26]; // 804BD7DC
  c->r[3]=c->r[25]+0x00000020u; // 804BD7E0
  c->lr=0x804BD7E8u; f_804B4130(c); // 804BD7E4
  W32(c->r[1]+0x00000014u,c->r[3]); // 804BD7E8
  c->f[1]=c->f[31]; // 804BD7EC
  c->r[3]=c->r[1]+0x00000014u; // 804BD7F0
  c->r[0]=R32(c->r[25]+0x00000028u); // 804BD7F4
  c->r[4]=c->r[0]+c->r[27]; // 804BD7F8
  c->lr=0x804BD800u; f_804B3628(c); // 804BD7FC
  c->r[27]=c->r[27]+0x00000008u; // 804BD800
  c->r[26]=c->r[26]+0x00000001u; // 804BD804
L_804BD808:;
  cmpu(c,0,c->r[26],c->r[28]); // 804BD808
  if (crb(c,0)) { IRQCHK(c); goto L_804BD7DC; } // 804BD80C
  c->r[26]=0u+0x00000000u; // 804BD810
  c->r[28]=0u+0x00000000u; // 804BD814
  goto L_804BD848; // 804BD818
L_804BD81C:;
  c->r[4]=c->r[26]|c->r[26]; // 804BD81C
  c->r[3]=c->r[25]+0x00000020u; // 804BD820
  c->lr=0x804BD828u; f_804B42E4(c); // 804BD824
  W32(c->r[1]+0x00000010u,c->r[3]); // 804BD828
  c->f[1]=c->f[31]; // 804BD82C
  c->r[3]=c->r[1]+0x00000010u; // 804BD830
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 804BD834
  c->r[4]=c->r[0]+c->r[28]; // 804BD838
  c->lr=0x804BD840u; f_804B36F8(c); // 804BD83C
  c->r[28]=c->r[28]+0x00000040u; // 804BD840
  c->r[26]=c->r[26]+0x00000001u; // 804BD844
L_804BD848:;
  cmpu(c,0,c->r[26],c->r[29]); // 804BD848
  if (crb(c,0)) { IRQCHK(c); goto L_804BD81C; } // 804BD84C
  c->r[26]=0u+0x00000000u; // 804BD850
  c->r[28]=0u+0x00000000u; // 804BD854
  goto L_804BD888; // 804BD858
L_804BD85C:;
  c->r[4]=c->r[26]|c->r[26]; // 804BD85C
  c->r[3]=c->r[25]+0x00000020u; // 804BD860
  c->lr=0x804BD868u; f_804B4410(c); // 804BD864
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804BD868
  c->f[1]=c->f[31]; // 804BD86C
  c->r[3]=c->r[1]+0x0000000Cu; // 804BD870
  c->r[0]=R32(c->r[25]+0x00000030u); // 804BD874
  c->r[4]=c->r[0]+c->r[28]; // 804BD878
  c->lr=0x804BD880u; f_804B3AF0(c); // 804BD87C
  c->r[28]=c->r[28]+0x00000010u; // 804BD880
  c->r[26]=c->r[26]+0x00000001u; // 804BD884
L_804BD888:;
  cmpu(c,0,c->r[26],c->r[30]); // 804BD888
  if (crb(c,0)) { IRQCHK(c); goto L_804BD85C; } // 804BD88C
  c->r[26]=0u+0x00000000u; // 804BD890
  c->r[28]=0u+0x00000000u; // 804BD894
  goto L_804BD8C8; // 804BD898
L_804BD89C:;
  c->r[4]=c->r[26]|c->r[26]; // 804BD89C
  c->r[3]=c->r[25]+0x00000020u; // 804BD8A0
  c->lr=0x804BD8A8u; f_804B453C(c); // 804BD8A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BD8A8
  c->f[1]=c->f[31]; // 804BD8AC
  c->r[3]=c->r[1]+0x00000008u; // 804BD8B0
  c->r[0]=R32(c->r[25]+0x00000034u); // 804BD8B4
  c->r[4]=c->r[0]+c->r[28]; // 804BD8B8
  c->lr=0x804BD8C0u; f_804B3C50(c); // 804BD8BC
  c->r[28]=c->r[28]+0x00000034u; // 804BD8C0
  c->r[26]=c->r[26]+0x00000001u; // 804BD8C4
L_804BD8C8:;
  cmpu(c,0,c->r[26],c->r[31]); // 804BD8C8
  if (crb(c,0)) { IRQCHK(c); goto L_804BD89C; } // 804BD8CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804BD8D0
  c->r[11]=c->r[1]+0x00000040u; // 804BD8D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804BD8D8
  c->lr=0x804BD8E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BD8DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 804BD8E0
  c->lr=c->r[0]; // 804BD8E4
  c->r[1]=c->r[1]+0x00000050u; // 804BD8E8
  return; // 804BD8EC
}

// fn_804BD8F0
void f_804BD8F0(Ctx* __restrict c) {
  trace_call(0x804BD8F0u);
  c->r[3]=0u+0x806B0000u; // 804BD8F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BD8F4
  c->r[3]=c->r[3]+0xFFFFBD60u; // 804BD8F8
  cmpu(c,0,c->r[0],c->r[3]); // 804BD8FC
  if (!crb(c,2)) { goto L_804BD90C; } // 804BD900
  c->r[3]=0u+0x00000001u; // 804BD904
  return; // 804BD908
L_804BD90C:;
  c->r[3]=0u+0x806B0000u; // 804BD90C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BD910
  c->r[3]=c->r[3]+0xFFFFBD50u; // 804BD914
  cmpu(c,0,c->r[0],c->r[3]); // 804BD918
  if (!crb(c,2)) { goto L_804BD928; } // 804BD91C
  c->r[3]=0u+0x00000001u; // 804BD920
  return; // 804BD924
L_804BD928:;
  c->r[3]=0u+0x806B0000u; // 804BD928
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BD92C
  c->r[0]=c->r[3]-c->r[0]; // 804BD930
  c->r[0]=cntlz(c->r[0]); // 804BD934
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BD938
  return; // 804BD93C
}

// fn_804BD940
void f_804BD940(Ctx* __restrict c) {
  trace_call(0x804BD940u);
  c->r[3]=0u+0x806B0000u; // 804BD940
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BD944
  c->r[3]=c->r[3]+0xFFFFBD50u; // 804BD948
  cmpu(c,0,c->r[0],c->r[3]); // 804BD94C
  if (!crb(c,2)) { goto L_804BD95C; } // 804BD950
  c->r[3]=0u+0x00000001u; // 804BD954
  return; // 804BD958
L_804BD95C:;
  c->r[3]=0u+0x806B0000u; // 804BD95C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BD960
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BD964
  c->r[0]=c->r[3]-c->r[0]; // 804BD968
  c->r[0]=cntlz(c->r[0]); // 804BD96C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BD970
  return; // 804BD974
}

// fn_804BD978
void f_804BD978(Ctx* __restrict c) {
  trace_call(0x804BD978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD978
  c->r[0]=c->lr; // 804BD97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BD980
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BD984
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BD988
  c->ctr=c->r[12]; // 804BD98C
  if (true) { c->lr=0x804BD994u; dispatch(c,c->ctr); } // 804BD990
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BD994
  c->r[3]=c->r[3]+0x00000004u; // 804BD998
  c->lr=c->r[0]; // 804BD99C
  c->r[1]=c->r[1]+0x00000010u; // 804BD9A0
  return; // 804BD9A4
}

// fn_804BD9A8
void f_804BD9A8(Ctx* __restrict c) {
  trace_call(0x804BD9A8u);
  c->r[3]=0u+0x806B0000u; // 804BD9A8
  c->r[3]=c->r[3]+0xFFFFBD60u; // 804BD9AC
  return; // 804BD9B0
}

// fn_804BD9B4
void f_804BD9B4(Ctx* __restrict c) {
  trace_call(0x804BD9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD9B4
  c->r[0]=c->lr; // 804BD9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BD9BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BD9C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BD9C4
  c->ctr=c->r[12]; // 804BD9C8
  if (true) { c->lr=0x804BD9D0u; dispatch(c,c->ctr); } // 804BD9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BD9D0
  c->r[3]=c->r[3]+0x00000004u; // 804BD9D4
  c->lr=c->r[0]; // 804BD9D8
  c->r[1]=c->r[1]+0x00000010u; // 804BD9DC
  return; // 804BD9E0
}

// fn_804BD9E4
void f_804BD9E4(Ctx* __restrict c) {
  trace_call(0x804BD9E4u);
  c->r[3]=0u+0x806B0000u; // 804BD9E4
  c->r[3]=c->r[3]+0xFFFFBD50u; // 804BD9E8
  return; // 804BD9EC
}

// __dt__Q34nw4r3g3d6G3dObjFv
void f_804BD9F0(Ctx* __restrict c) {
  trace_call(0x804BD9F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BD9F0
  c->r[0]=c->lr; // 804BD9F4
  cmps(c,0,(int32_t)c->r[3],0); // 804BD9F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BD9FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BDA00
  c->r[31]=c->r[3]|c->r[3]; // 804BDA04
  if (crb(c,2)) { goto L_804BDA24; } // 804BDA08
  c->r[5]=0u+0x80720000u; // 804BDA0C
  c->r[4]=c->r[31]|c->r[31]; // 804BDA10
  c->r[5]=c->r[5]+0xFFFFA378u; // 804BDA14
  W32(c->r[3]+0x00000000u,c->r[5]); // 804BDA18
  c->r[3]=R32(c->r[3]+0x00000008u); // 804BDA1C
  c->lr=0x804BDA24u; f_803C4D18(c); // 804BDA20
L_804BDA24:;
  c->r[3]=c->r[31]|c->r[31]; // 804BDA24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BDA28
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BDA2C
  c->lr=c->r[0]; // 804BDA30
  c->r[1]=c->r[1]+0x00000010u; // 804BDA34
  return; // 804BDA38
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_804BDA3C(Ctx* __restrict c) {
  trace_call(0x804BDA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BDA3C
  c->r[0]=c->lr; // 804BDA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BDA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BDA48
  c->r[31]=c->r[3]|c->r[3]; // 804BDA4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 804BDA50
  cmps(c,0,(int32_t)c->r[0],0); // 804BDA54
  if (crb(c,2)) { goto L_804BDA80; } // 804BDA58
  c->r[3]=c->r[0]|c->r[0]; // 804BDA5C
  c->r[4]=0u+0x00010000u; // 804BDA60
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BDA64
  c->r[6]=c->r[31]|c->r[31]; // 804BDA68
  c->r[4]=c->r[4]+0x00000001u; // 804BDA6C
  c->r[5]=0u+0x00000000u; // 804BDA70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804BDA74
  c->ctr=c->r[12]; // 804BDA78
  if (true) { c->lr=0x804BDA80u; dispatch(c,c->ctr); } // 804BDA7C
L_804BDA80:;
  cmps(c,0,(int32_t)c->r[31],0); // 804BDA80
  if (crb(c,2)) { goto L_804BDAA0; } // 804BDA84
  c->r[12]=R32(c->r[31]+0x00000000u); // 804BDA88
  c->r[3]=c->r[31]|c->r[31]; // 804BDA8C
  c->r[4]=0u+0x00000001u; // 804BDA90
  c->r[12]=R32(c->r[12]+0x00000010u); // 804BDA94
  c->ctr=c->r[12]; // 804BDA98
  if (true) { c->lr=0x804BDAA0u; dispatch(c,c->ctr); } // 804BDA9C
L_804BDAA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BDAA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BDAA4
  c->lr=c->r[0]; // 804BDAA8
  c->r[1]=c->r[1]+0x00000010u; // 804BDAAC
  return; // 804BDAB0
}

// fn_804BDAB4
void f_804BDAB4(Ctx* __restrict c) {
  trace_call(0x804BDAB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BDAB4
  c->r[0]=c->lr; // 804BDAB8
  c->r[6]=c->r[3]|c->r[3]; // 804BDABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BDAC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BDAC4
  c->r[31]=R32(c->r[3]+0x00000004u); // 804BDAC8
  cmps(c,0,(int32_t)c->r[31],0); // 804BDACC
  if (crb(c,2)) { goto L_804BDAF4; } // 804BDAD0
  c->r[12]=R32(c->r[31]+0x00000000u); // 804BDAD4
  c->r[4]=0u+0x00010000u; // 804BDAD8
  c->r[3]=c->r[31]|c->r[31]; // 804BDADC
  c->r[5]=0u+0x00000000u; // 804BDAE0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804BDAE4
  c->r[4]=c->r[4]+0x00000001u; // 804BDAE8
  c->ctr=c->r[12]; // 804BDAEC
  if (true) { c->lr=0x804BDAF4u; dispatch(c,c->ctr); } // 804BDAF0
L_804BDAF4:;
  c->r[3]=c->r[31]|c->r[31]; // 804BDAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BDAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BDAFC
  c->lr=c->r[0]; // 804BDB00
  c->r[1]=c->r[1]+0x00000010u; // 804BDB04
  return; // 804BDB08
}

// fn_804BDB0C
void f_804BDB0C(Ctx* __restrict c) {
  trace_call(0x804BDB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BDB0C
  c->r[0]=c->lr; // 804BDB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BDB14
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BDB18
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BDB1C
  c->ctr=c->r[12]; // 804BDB20
  if (true) { c->lr=0x804BDB28u; dispatch(c,c->ctr); } // 804BDB24
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BDB28
  c->r[3]=c->r[3]+0x00000004u; // 804BDB2C
  c->lr=c->r[0]; // 804BDB30
  c->r[1]=c->r[1]+0x00000010u; // 804BDB34
  return; // 804BDB38
}

// fn_804BDB3C
void f_804BDB3C(Ctx* __restrict c) {
  trace_call(0x804BDB3Cu);
  c->r[3]=0u+0x806B0000u; // 804BDB3C
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BDB40
  return; // 804BDB44
}

// fn_804BDB48
void f_804BDB48(Ctx* __restrict c) {
  trace_call(0x804BDB48u);
  c->f[1]=c->f[3]; // 804BDB48
  return; // 804BDB4C
}

// PlayPolicy_Loop__Q24nw4r3g3dFfff
void f_804BDB50(Ctx* __restrict c) {
  trace_call(0x804BDB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BDB50
  c->r[0]=c->lr; // 804BDB54
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BDB58
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 804BDB5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 804BDB60
  {uint32_t ea=c->r[2]+0x000015E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BDB64
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 804BDB68
  fcmp(c,0,c->f[3],c->f[0]); // 804BDB6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDB70
  if (!crb(c,2)) { goto L_804BDB8C; } // 804BDB74
  c->f[1]=c->f[3]; // 804BDB78
  c->f[2]=c->f[31]; // 804BDB7C
  c->lr=0x804BDB84u; f_803BA750(c); // 804BDB80
  c->f[1]=c->ps1[1]=S(c->f[1]); // 804BDB84
  goto L_804BDBA8; // 804BDB88
L_804BDB8C:;
  c->f[2]=c->f[31]; // 804BDB8C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 804BDB90
  c->lr=0x804BDB98u; f_803BA750(c); // 804BDB94
  c->f[1]=c->ps1[1]=S(c->f[1]); // 804BDB98
  {uint32_t ea=c->r[2]+0x000015E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BDB9C
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 804BDBA0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804BDBA4
L_804BDBA8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 804BDBA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BDBAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 804BDBB0
  c->lr=c->r[0]; // 804BDBB4
  c->r[1]=c->r[1]+0x00000020u; // 804BDBB8
  return; // 804BDBBC
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_804BDBC0(Ctx* __restrict c) {
  trace_call(0x804BDBC0u);
  cmps(c,0,(int32_t)c->r[5],0); // 804BDBC0
  if (crb(c,2)) { goto L_804BDBD8; } // 804BDBC4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BDBC8
  c->r[0]=c->r[0]|c->r[4]; // 804BDBCC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BDBD0
  return; // 804BDBD4
L_804BDBD8:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BDBD8
  c->r[0]=c->r[0]&~c->r[4]; // 804BDBDC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BDBE0
  return; // 804BDBE4
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_804BDBE8(Ctx* __restrict c) {
  trace_call(0x804BDBE8u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BDBE8
  c->r[3]=c->r[0]&c->r[4]; // 804BDBEC
  c->r[0]=0u-c->r[3]; // 804BDBF0
  c->r[0]=c->r[0]|c->r[3]; // 804BDBF4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804BDBF8
  return; // 804BDBFC
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_804BDC00(Ctx* __restrict c) {
  trace_call(0x804BDC00u);
  c->r[10]=0u+0xCC010000u; // 804BDC00
  c->r[11]=0u+0x00000061u; // 804BDC04
  c->r[9]=0u+0xFE080000u; // 804BDC08
  c->r[8]=c->r[2]+0x000015F0u; // 804BDC0C
  c->r[7]=R8(c->r[8]+c->r[7]); // 804BDC10
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 804BDC14
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 804BDC18
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 804BDC1C
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 804BDC20
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 804BDC24
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 804BDC28
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 804BDC2C
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 804BDC30
  c->r[0]=c->r[3]|c->r[0]; // 804BDC34
  c->r[0]=c->r[5]|c->r[0]; // 804BDC38
  c->r[6]=c->r[8]|c->r[6]; // 804BDC3C
  c->r[0]=c->r[6]|c->r[0]; // 804BDC40
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 804BDC44
  c->r[7]=0u+0x00000010u; // 804BDC48
  c->r[6]=0u+0x00000000u; // 804BDC4C
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 804BDC50
  c->r[5]=0u+0x00001009u; // 804BDC54
  c->r[0]=0u+0x0000103Fu; // 804BDC58
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 804BDC5C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 804BDC60
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 804BDC64
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 804BDC68
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 804BDC6C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 804BDC70
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 804BDC74
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 804BDC78
  return; // 804BDC7C
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_804BDC80(Ctx* __restrict c) {
  trace_call(0x804BDC80u);
  c->r[5]=0u+0xCC010000u; // 804BDC80
  c->r[6]=0u+0x00000061u; // 804BDC84
  c->r[4]=0u+0xFE010000u; // 804BDC88
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 804BDC8C
  c->r[0]=c->r[4]+0xFFFFC000u; // 804BDC90
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804BDC94
  c->r[4]=c->r[2]+0x000015F0u; // 804BDC98
  c->r[0]=R8(c->r[4]+c->r[3]); // 804BDC9C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 804BDCA0
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 804BDCA4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804BDCA8
  return; // 804BDCAC
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_804BDCB0(Ctx* __restrict c) {
  trace_call(0x804BDCB0u);
  c->r[11]=0u+0xCC010000u; // 804BDCB0
  c->r[12]=0u+0x00000061u; // 804BDCB4
  c->r[10]=0u+0xFE040000u; // 804BDCB8
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 804BDCBC
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 804BDCC0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 804BDCC4
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804BDCC8
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 804BDCCC
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 804BDCD0
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 804BDCD4
  c->r[3]=c->r[4]|c->r[3]; // 804BDCD8
  c->r[0]=c->r[10]+0x00000030u; // 804BDCDC
  c->r[3]=c->r[5]|c->r[3]; // 804BDCE0
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 804BDCE4
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 804BDCE8
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 804BDCEC
  c->r[0]=c->r[3]|c->r[0]; // 804BDCF0
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 804BDCF4
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 804BDCF8
  c->r[0]=c->r[10]+0x00000031u; // 804BDCFC
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 804BDD00
  c->r[3]=c->r[4]|c->r[3]; // 804BDD04
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 804BDD08
  c->r[3]=c->r[5]|c->r[3]; // 804BDD0C
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 804BDD10
  c->r[0]=c->r[3]|c->r[0]; // 804BDD14
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 804BDD18
  return; // 804BDD1C
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_804BDD20(Ctx* __restrict c) {
  trace_call(0x804BDD20u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BDD20
  c->r[5]=0u+0x00000000u; // 804BDD24
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BDD28
  c->f[5]=std::fabs(c->f[2]); // 804BDD2C
  {uint32_t ea=c->r[2]+0x000015F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BDD30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804BDD34
  c->f[9]=std::fabs(c->f[3]); // 804BDD38
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804BDD3C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 804BDD40
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804BDD44
  fcmp(c,0,c->f[5],c->f[0]); // 804BDD48
  c->f[10]=std::fabs(c->f[6]); // 804BDD4C
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BDD50
  c->f[11]=std::fabs(c->f[4]); // 804BDD54
  c->f[12]=std::fabs(c->f[7]); // 804BDD58
  c->f[13]=std::fabs(c->f[8]); // 804BDD5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD60
  if (crb(c,2)) { goto L_804BDDA4; } // 804BDD64
  fcmp(c,0,c->f[9],c->f[0]); // 804BDD68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD6C
  if (crb(c,2)) { goto L_804BDDA4; } // 804BDD70
  fcmp(c,0,c->f[10],c->f[0]); // 804BDD74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD78
  if (crb(c,2)) { goto L_804BDDA4; } // 804BDD7C
  fcmp(c,0,c->f[11],c->f[0]); // 804BDD80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD84
  if (crb(c,2)) { goto L_804BDDA4; } // 804BDD88
  fcmp(c,0,c->f[12],c->f[0]); // 804BDD8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD90
  if (crb(c,2)) { goto L_804BDDA4; } // 804BDD94
  fcmp(c,0,c->f[13],c->f[0]); // 804BDD98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDD9C
  if (!crb(c,2)) { goto L_804BDE38; } // 804BDDA0
L_804BDDA4:;
  {uint32_t ea=c->r[2]+0x000015F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BDDA4
  {uint32_t ea=c->r[2]+0x000015F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BDDA8
L_804BDDAC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804BDDAC
  cmps(c,0,(int32_t)c->r[0],46); // 804BDDB0
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDDB4
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 804BDDB8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 804BDDBC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 804BDDC0
  fcmp(c,0,c->f[5],c->f[0]); // 804BDDC4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 804BDDC8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 804BDDCC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 804BDDD0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 804BDDD4
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 804BDDD8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 804BDDDC
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 804BDDE0
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 804BDDE4
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 804BDDE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDDEC
  c->r[5]=c->r[5]+0x00000001u; // 804BDDF0
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDDF4
  fcmp(c,0,c->f[9],c->f[0]); // 804BDDF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDDFC
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDE00
  fcmp(c,0,c->f[10],c->f[0]); // 804BDE04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDE08
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDE0C
  fcmp(c,0,c->f[11],c->f[0]); // 804BDE10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDE14
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDE18
  fcmp(c,0,c->f[12],c->f[0]); // 804BDE1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDE20
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDE24
  fcmp(c,0,c->f[13],c->f[0]); // 804BDE28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804BDE2C
  if (crb(c,2)) { IRQCHK(c); goto L_804BDDAC; } // 804BDE30
  goto L_804BDEE0; // 804BDE34
L_804BDE38:;
  {uint32_t ea=c->r[2]+0x000015F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BDE38
  fcmp(c,0,c->f[5],c->f[1]); // 804BDE3C
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE40
  fcmp(c,0,c->f[9],c->f[1]); // 804BDE44
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE48
  fcmp(c,0,c->f[10],c->f[1]); // 804BDE4C
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE50
  fcmp(c,0,c->f[11],c->f[1]); // 804BDE54
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE58
  fcmp(c,0,c->f[12],c->f[1]); // 804BDE5C
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE60
  fcmp(c,0,c->f[13],c->f[1]); // 804BDE64
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDE68
  {uint32_t ea=c->r[2]+0x000015FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BDE6C
L_804BDE70:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 804BDE70
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 804BDE74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804BDE78
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804BDE7C
  fcmp(c,0,c->f[5],c->f[1]); // 804BDE80
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 804BDE84
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 804BDE88
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 804BDE8C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 804BDE90
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 804BDE94
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804BDE98
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 804BDE9C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 804BDEA0
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 804BDEA4
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDEA8
  fcmp(c,0,c->f[9],c->f[1]); // 804BDEAC
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDEB0
  fcmp(c,0,c->f[10],c->f[1]); // 804BDEB4
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDEB8
  fcmp(c,0,c->f[11],c->f[1]); // 804BDEBC
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDEC0
  fcmp(c,0,c->f[12],c->f[1]); // 804BDEC4
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDEC8
  fcmp(c,0,c->f[13],c->f[1]); // 804BDECC
  if (!crb(c,0)) { goto L_804BDEE0; } // 804BDED0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804BDED4
  cmps(c,0,(int32_t)c->r[0],-17); // 804BDED8
  if (crb(c,1)) { IRQCHK(c); goto L_804BDE70; } // 804BDEDC
L_804BDEE0:;
  {uint32_t ea=c->r[2]+0x00001600u; c->f[5]=c->ps1[5]=RF32(ea);} // 804BDEE0
  c->r[9]=c->r[5]+0x00000011u; // 804BDEE4
  c->r[0]=c->r[3]+0x00000006u; // 804BDEE8
  c->r[7]=0u+0xCC010000u; // 804BDEEC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 804BDEF0
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 804BDEF4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 804BDEF8
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804BDEFC
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 804BDF00
  c->r[8]=0u+0x00000061u; // 804BDF04
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804BDF08
  c->r[0]=c->r[3]+0x00000007u; // 804BDF0C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804BDF10
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 804BDF14
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 804BDF18
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 804BDF1C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 804BDF20
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804BDF24
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804BDF28
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 804BDF2C
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 804BDF30
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 804BDF34
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804BDF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BDF3C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804BDF40
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 804BDF44
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 804BDF48
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 804BDF4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804BDF50
  c->r[0]=c->r[5]|c->r[0]; // 804BDF54
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BDF58
  c->r[0]=c->r[3]+0x00000008u; // 804BDF5C
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 804BDF60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 804BDF64
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 804BDF68
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 804BDF6C
  c->r[3]=R32(c->r[1]+0x00000024u); // 804BDF70
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804BDF74
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 804BDF78
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 804BDF7C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 804BDF80
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 804BDF84
  c->r[5]=c->r[6]|c->r[5]; // 804BDF88
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 804BDF8C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 804BDF90
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BDF94
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 804BDF98
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 804BDF9C
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 804BDFA0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 804BDFA4
  c->r[0]=c->r[4]|c->r[0]; // 804BDFA8
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BDFAC
  c->r[1]=c->r[1]+0x00000040u; // 804BDFB0
  return; // 804BDFB4
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_804BDFB8(Ctx* __restrict c) {
  trace_call(0x804BDFB8u);
  c->r[8]=0u+0xCC010000u; // 804BDFB8
  c->r[9]=0u+0x00000008u; // 804BDFBC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 804BDFC0
  c->r[0]=0u+0x00000030u; // 804BDFC4
  c->r[4]=0u+0x3CF40000u; // 804BDFC8
  c->r[3]=0u+0x00F40000u; // 804BDFCC
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 804BDFD0
  c->r[7]=c->r[4]+0xFFFFCF00u; // 804BDFD4
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 804BDFD8
  c->r[6]=0u+0x00000040u; // 804BDFDC
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 804BDFE0
  c->r[4]=0u+0x00000010u; // 804BDFE4
  c->r[3]=0u+0x00000001u; // 804BDFE8
  c->r[0]=0u+0x00001018u; // 804BDFEC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 804BDFF0
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 804BDFF4
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 804BDFF8
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 804BDFFC
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 804BE000
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 804BE004
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 804BE008
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 804BE00C
  return; // 804BE010
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_804BE014(Ctx* __restrict c) {
  trace_call(0x804BE014u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 804BE014
  c->r[5]=0u+0xCC010000u; // 804BE018
  c->r[0]=0u+0x00000010u; // 804BE01C
  c->r[6]=R32(c->r[3]+0x00000004u); // 804BE020
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 804BE024
  c->r[4]=0u+0x00000001u; // 804BE028
  c->r[8]=R32(c->r[3]+0x00000008u); // 804BE02C
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 804BE030
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 804BE034
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 804BE038
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804BE03C
  c->r[6]=c->r[7]|c->r[6]; // 804BE040
  c->r[0]=0u+0x00001018u; // 804BE044
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 804BE048
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 804BE04C
  c->r[4]=R32(c->r[3]+0x00000014u); // 804BE050
  c->r[9]=c->r[8]|c->r[6]; // 804BE054
  c->r[7]=R32(c->r[3]+0x00000018u); // 804BE058
  c->r[6]=R32(c->r[3]+0x00000010u); // 804BE05C
  c->r[9]=c->r[10]|c->r[9]; // 804BE060
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 804BE064
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 804BE068
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804BE06C
  c->r[0]=c->r[6]|c->r[3]; // 804BE070
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 804BE074
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 804BE078
  c->r[0]=c->r[4]|c->r[0]; // 804BE07C
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 804BE080
  c->r[0]=c->r[3]|c->r[0]; // 804BE084
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804BE088
  return; // 804BE08C
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_804BE090(Ctx* __restrict c) {
  trace_call(0x804BE090u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BE090
  c->r[0]=c->lr; // 804BE094
  {uint32_t ea=c->r[2]+0x00001604u; c->f[6]=c->ps1[6]=RF32(ea);} // 804BE098
  c->r[5]=0u+0x00000000u; // 804BE09C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BE0A0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 804BE0A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804BE0A8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804BE0AC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804BE0B0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804BE0B4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804BE0B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BE0BC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE0C0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE0C4
  c->r[3]=c->r[1]+0x00000008u; // 804BE0C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 804BE0CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 804BE0D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 804BE0D4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 804BE0D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 804BE0DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 804BE0E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 804BE0E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 804BE0E8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 804BE0EC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804BE0F0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804BE0F4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 804BE0F8
  c->lr=0x804BE100u; f_803A8668(c); // 804BE0FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BE100
  c->lr=c->r[0]; // 804BE104
  c->r[1]=c->r[1]+0x00000040u; // 804BE108
  return; // 804BE10C
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_804BE110(Ctx* __restrict c) {
  trace_call(0x804BE110u);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 804BE110
  if (crb(c,2)) return; // 804BE114
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 804BE118
  c->ctr=c->r[0]; // 804BE11C
  if (crb(c,2)) { goto L_804BE1B8; } // 804BE120
L_804BE124:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 804BE124
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 804BE128
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 804BE12C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 804BE130
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 804BE134
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 804BE138
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 804BE13C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 804BE140
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 804BE144
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 804BE148
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 804BE14C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 804BE150
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 804BE154
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 804BE158
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 804BE15C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 804BE160
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 804BE164
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 804BE168
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 804BE16C
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 804BE170
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 804BE174
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 804BE178
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 804BE17C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 804BE180
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 804BE184
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 804BE188
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 804BE18C
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 804BE190
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 804BE194
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 804BE198
  c->r[4]=c->r[4]+0x00000080u; // 804BE19C
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 804BE1A0
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 804BE1A4
  c->r[3]=c->r[3]+0x00000080u; // 804BE1A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE124; } // 804BE1AC
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 804BE1B0
  if (crb(c,2)) return; // 804BE1B4
L_804BE1B8:;
  c->ctr=c->r[5]; // 804BE1B8
L_804BE1BC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 804BE1BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 804BE1C0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 804BE1C4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 804BE1C8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 804BE1CC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 804BE1D0
  c->r[4]=c->r[4]+0x00000020u; // 804BE1D4
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 804BE1D8
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 804BE1DC
  c->r[3]=c->r[3]+0x00000020u; // 804BE1E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE1BC; } // 804BE1E4
  return; // 804BE1E8
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_804BE1EC(Ctx* __restrict c) {
  trace_call(0x804BE1ECu);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 804BE1EC
  {uint32_t ea=c->r[2]+0x00001608u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE1F0
  if (crb(c,2)) return; // 804BE1F4
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 804BE1F8
  c->ctr=c->r[0]; // 804BE1FC
  if (crb(c,2)) { goto L_804BE294; } // 804BE200
L_804BE204:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804BE204
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804BE208
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 804BE20C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804BE210
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 804BE214
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 804BE218
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 804BE21C
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 804BE220
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 804BE224
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 804BE228
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 804BE22C
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 804BE230
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 804BE234
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 804BE238
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 804BE23C
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 804BE240
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 804BE244
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 804BE248
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 804BE24C
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 804BE250
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 804BE254
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 804BE258
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 804BE25C
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 804BE260
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 804BE264
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 804BE268
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 804BE26C
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 804BE270
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 804BE274
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 804BE278
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 804BE27C
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 804BE280
  c->r[3]=c->r[3]+0x00000100u; // 804BE284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE204; } // 804BE288
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 804BE28C
  if (crb(c,2)) return; // 804BE290
L_804BE294:;
  c->ctr=c->r[4]; // 804BE294
L_804BE298:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804BE298
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804BE29C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 804BE2A0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804BE2A4
  c->r[3]=c->r[3]+0x00000020u; // 804BE2A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE298; } // 804BE2AC
  return; // 804BE2B0
}

// ZeroMemory16ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_804BE2B4(Ctx* __restrict c) {
  trace_call(0x804BE2B4u);
  c->r[4]=rotl(c->r[4],28)&0x0FFFFFFFu; cr0(c,c->r[4]); // 804BE2B4
  {uint32_t ea=c->r[2]+0x00001608u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE2B8
  if (crb(c,2)) return; // 804BE2BC
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 804BE2C0
  c->ctr=c->r[0]; // 804BE2C4
  if (crb(c,2)) { goto L_804BE31C; } // 804BE2C8
L_804BE2CC:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804BE2CC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804BE2D0
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 804BE2D4
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804BE2D8
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 804BE2DC
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 804BE2E0
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 804BE2E4
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 804BE2E8
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 804BE2EC
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 804BE2F0
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 804BE2F4
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 804BE2F8
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 804BE2FC
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 804BE300
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 804BE304
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 804BE308
  c->r[3]=c->r[3]+0x00000080u; // 804BE30C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE2CC; } // 804BE310
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 804BE314
  if (crb(c,2)) return; // 804BE318
L_804BE31C:;
  c->ctr=c->r[4]; // 804BE31C
L_804BE320:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804BE320
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804BE324
  c->r[3]=c->r[3]+0x00000010u; // 804BE328
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BE320; } // 804BE32C
  return; // 804BE330
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_804BE334(Ctx* __restrict c) {
  trace_call(0x804BE334u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BE334
  c->r[0]=c->lr; // 804BE338
  cmps(c,0,(int32_t)c->r[3],0); // 804BE33C
  W32(c->r[1]+0x00000064u,c->r[0]); // 804BE340
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 804BE344
  c->r[31]=c->r[3]|c->r[3]; // 804BE348
  W32(c->r[1]+0x00000058u,c->r[30]); // 804BE34C
  W32(c->r[1]+0x00000054u,c->r[29]); // 804BE350
  if (crb(c,2)) { goto L_804BE6FC; } // 804BE354
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 804BE358
  cmps(c,1,(int32_t)c->r[0],0); // 804BE35C
  if (crb(c,4)) { goto L_804BE410; } // 804BE360
  cmps(c,0,(int32_t)c->r[0],32); // 804BE364
  if (!crb(c,0)) { goto L_804BE410; } // 804BE368
  if (!crb(c,0)) { goto L_804BE38C; } // 804BE36C
  if (crb(c,4)) { goto L_804BE38C; } // 804BE370
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE374
  c->r[3]=0u+0x80810000u; // 804BE378
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE37C
  c->r[3]=c->r[3]+c->r[0]; // 804BE380
  c->r[29]=c->r[3]+0x00000034u; // 804BE384
  goto L_804BE390; // 804BE388
L_804BE38C:;
  c->r[29]=0u+0x00000000u; // 804BE38C
L_804BE390:;
  c->r[30]=0u+0x80810000u; // 804BE390
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE394
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BE398
  if (!crb(c,2)) { goto L_804BE3C8; } // 804BE39C
  c->r[3]=c->r[30]+0xFFFFE680u; // 804BE3A0
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BE3A4
  c->r[4]=c->r[3]+0x00000004u; // 804BE3A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE3AC
  c->r[3]=c->r[3]+c->r[0]; // 804BE3B0
  c->r[3]=c->r[3]+0x00000034u; // 804BE3B4
  c->lr=0x804BE3BCu; f_80383214(c); // 804BE3B8
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE3BC
  c->r[0]=c->r[0]|0x00000001u; // 804BE3C0
  W16(c->r[30]+0xFFFFE680u,c->r[0]); // 804BE3C4
L_804BE3C8:;
  c->r[30]=0u+0x80810000u; // 804BE3C8
  c->r[3]=c->r[29]|c->r[29]; // 804BE3CC
  c->r[30]=c->r[30]+0xFFFFE680u; // 804BE3D0
  c->r[5]=c->r[31]|c->r[31]; // 804BE3D4
  c->r[4]=c->r[30]+0x00000004u; // 804BE3D8
  c->lr=0x804BE3E0u; f_80382F60(c); // 804BE3DC
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE3E0
  c->r[4]=c->r[31]|c->r[31]; // 804BE3E4
  c->r[5]=c->r[31]|c->r[31]; // 804BE3E8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804BE3EC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BE3F0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804BE3F4
  c->r[0]=R16(c->r[30]+0x00000002u); // 804BE3F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE3FC
  c->r[3]=c->r[30]+c->r[0]; // 804BE400
  c->r[3]=c->r[3]+0x00001434u; // 804BE404
  c->lr=0x804BE40Cu; f_80382F60(c); // 804BE408
  goto L_804BE6FC; // 804BE40C
L_804BE410:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804BE410
  cmps(c,1,(int32_t)c->r[0],0); // 804BE414
  if (crb(c,4)) { goto L_804BE6DC; } // 804BE418
  cmps(c,0,(int32_t)c->r[0],128); // 804BE41C
  if (!crb(c,0)) { goto L_804BE6DC; } // 804BE420
  if (crb(c,4)) { goto L_804BE444; } // 804BE424
  if (!crb(c,0)) { goto L_804BE444; } // 804BE428
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 804BE42C
  c->r[3]=0u+0x80810000u; // 804BE430
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804BE434
  c->r[3]=c->r[3]+c->r[0]; // 804BE438
  c->r[3]=c->r[3]+0x0000002Cu; // 804BE43C
  goto L_804BE448; // 804BE440
L_804BE444:;
  c->r[3]=0u+0x00000000u; // 804BE444
L_804BE448:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BE448
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BE44C
  if (crb(c,2)) { goto L_804BE6DC; } // 804BE450
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 804BE454
  if (crb(c,0)) { goto L_804BE47C; } // 804BE458
  cmps(c,0,(int32_t)c->r[0],128); // 804BE45C
  if (!crb(c,0)) { goto L_804BE47C; } // 804BE460
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 804BE464
  c->r[3]=0u+0x80810000u; // 804BE468
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804BE46C
  c->r[3]=c->r[3]+c->r[0]; // 804BE470
  c->r[29]=c->r[3]+0x0000002Cu; // 804BE474
  goto L_804BE480; // 804BE478
L_804BE47C:;
  c->r[29]=0u+0x00000000u; // 804BE47C
L_804BE480:;
  c->r[3]=c->r[29]|c->r[29]; // 804BE480
  c->r[4]=c->r[1]+0x00000038u; // 804BE484
  c->lr=0x804BE48Cu; f_804D3810(c); // 804BE488
  c->r[30]=0u+0x80810000u; // 804BE48C
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE490
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BE494
  if (!crb(c,2)) { goto L_804BE4C4; } // 804BE498
  c->r[3]=c->r[30]+0xFFFFE680u; // 804BE49C
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BE4A0
  c->r[4]=c->r[3]+0x00000004u; // 804BE4A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE4A8
  c->r[3]=c->r[3]+c->r[0]; // 804BE4AC
  c->r[3]=c->r[3]+0x00000034u; // 804BE4B0
  c->lr=0x804BE4B8u; f_80383214(c); // 804BE4B4
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE4B8
  c->r[0]=c->r[0]|0x00000001u; // 804BE4BC
  W16(c->r[30]+0xFFFFE680u,c->r[0]); // 804BE4C0
L_804BE4C4:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 804BE4C4
  c->r[3]=0u+0x80810000u; // 804BE4C8
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE4CC
  c->r[4]=0u+0x00000000u; // 804BE4D0
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 804BE4D4
  c->r[30]=c->r[3]+0x00000004u; // 804BE4D8
  if (!crb(c,2)) { goto L_804BE4EC; } // 804BE4DC
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804BE4E0
  if (!crb(c,2)) { goto L_804BE4EC; } // 804BE4E4
  c->r[4]=0u+0x00000001u; // 804BE4E8
L_804BE4EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BE4EC
  if (!crb(c,2)) { goto L_804BE51C; } // 804BE4F0
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE4F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE4F8
  fcmp(c,0,c->f[1],c->f[0]); // 804BE4FC
  if (!crb(c,2)) { goto L_804BE59C; } // 804BE500
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE504
  fcmp(c,0,c->f[1],c->f[0]); // 804BE508
  if (!crb(c,2)) { goto L_804BE59C; } // 804BE50C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE510
  fcmp(c,0,c->f[1],c->f[0]); // 804BE514
  if (!crb(c,2)) { goto L_804BE59C; } // 804BE518
L_804BE51C:;
  c->r[3]=c->r[29]|c->r[29]; // 804BE51C
  c->r[4]=c->r[1]+0x00000038u; // 804BE520
  c->lr=0x804BE528u; f_804D37F4(c); // 804BE524
  c->r[3]=c->r[1]+0x00000038u; // 804BE528
  c->r[4]=c->r[30]|c->r[30]; // 804BE52C
  c->r[5]=c->r[3]|c->r[3]; // 804BE530
  c->lr=0x804BE538u; f_804E1A00(c); // 804BE534
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE538
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BE53C
  c->f[6]=-c->f[0]; // 804BE540
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE544
  c->f[4]=-c->f[2]; // 804BE548
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE54C
  c->f[5]=-c->f[1]; // 804BE550
  c->f[3]=c->ps1[3]=S(c->f[6]); // 804BE554
  c->f[1]=c->ps1[1]=S(c->f[4]); // 804BE558
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 804BE55C
  c->f[2]=c->ps1[2]=S(c->f[5]); // 804BE560
  fcmp(c,0,c->f[0],c->f[3]); // 804BE564
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 804BE568
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804BE56C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 804BE570
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 804BE574
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 804BE578
  if (!crb(c,2)) { goto L_804BE5AC; } // 804BE57C
  fcmp(c,0,c->f[0],c->f[2]); // 804BE580
  if (!crb(c,2)) { goto L_804BE5AC; } // 804BE584
  fcmp(c,0,c->f[0],c->f[1]); // 804BE588
  if (!crb(c,2)) { goto L_804BE5AC; } // 804BE58C
  {uint32_t ea=c->r[2]+0x00001618u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE590
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 804BE594
  goto L_804BE5AC; // 804BE598
L_804BE59C:;
  c->r[3]=c->r[1]+0x00000038u; // 804BE59C
  c->r[4]=c->r[30]|c->r[30]; // 804BE5A0
  c->r[5]=c->r[3]|c->r[3]; // 804BE5A4
  c->lr=0x804BE5ACu; f_804E1A00(c); // 804BE5A8
L_804BE5AC:;
  c->r[3]=c->r[1]+0x00000038u; // 804BE5AC
  c->r[4]=c->r[3]|c->r[3]; // 804BE5B0
  c->lr=0x804BE5B8u; f_80383D38(c); // 804BE5B4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE5B8
  {uint32_t ea=c->r[2]+0x0000161Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE5BC
  c->f[1]=std::fabs(c->f[1]); // 804BE5C0
  fcmp(c,0,c->f[1],c->f[0]); // 804BE5C4
  if (!crb(c,0)) { goto L_804BE610; } // 804BE5C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE5CC
  c->f[1]=std::fabs(c->f[1]); // 804BE5D0
  fcmp(c,0,c->f[1],c->f[0]); // 804BE5D4
  if (!crb(c,0)) { goto L_804BE610; } // 804BE5D8
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE5DC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE5E0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 804BE5E4
  fcmp(c,0,c->f[0],c->f[1]); // 804BE5E8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804BE5EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804BE5F0
  if (!crb(c,2)) { goto L_804BE604; } // 804BE5F4
  {uint32_t ea=c->r[2]+0x00001618u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE5F8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804BE5FC
  goto L_804BE624; // 804BE600
L_804BE604:;
  {uint32_t ea=c->r[2]+0x00001620u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE604
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804BE608
  goto L_804BE624; // 804BE60C
L_804BE610:;
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE610
  {uint32_t ea=c->r[2]+0x00001620u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE614
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 804BE618
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804BE61C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804BE620
L_804BE624:;
  c->r[3]=c->r[1]+0x00000038u; // 804BE624
  c->r[4]=c->r[1]+0x0000002Cu; // 804BE628
  c->r[5]=c->r[1]+0x00000020u; // 804BE62C
  c->lr=0x804BE634u; f_80383DE0(c); // 804BE630
  c->r[3]=c->r[1]+0x00000020u; // 804BE634
  c->r[4]=c->r[3]|c->r[3]; // 804BE638
  c->lr=0x804BE640u; f_80383D38(c); // 804BE63C
  c->r[3]=c->r[1]+0x00000020u; // 804BE640
  c->r[4]=c->r[1]+0x00000038u; // 804BE644
  c->r[5]=c->r[1]+0x00000014u; // 804BE648
  c->lr=0x804BE650u; f_80383DE0(c); // 804BE64C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE650
  c->r[3]=c->r[31]|c->r[31]; // 804BE654
  c->r[4]=c->r[30]|c->r[30]; // 804BE658
  c->r[5]=c->r[31]|c->r[31]; // 804BE65C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804BE660
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE664
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804BE668
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE66C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 804BE670
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE674
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 804BE678
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE67C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 804BE680
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE684
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 804BE688
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE68C
  c->f[0]=-c->f[0]; // 804BE690
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 804BE694
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE698
  c->f[0]=-c->f[0]; // 804BE69C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804BE6A0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE6A4
  c->f[0]=-c->f[0]; // 804BE6A8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804BE6AC
  c->lr=0x804BE6B4u; f_80382F60(c); // 804BE6B0
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE6B4
  c->r[3]=0u+0x806B0000u; // 804BE6B8
  c->r[4]=c->r[31]|c->r[31]; // 804BE6BC
  c->r[5]=c->r[31]|c->r[31]; // 804BE6C0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804BE6C4
  c->r[3]=c->r[3]+0xFFFFBD90u; // 804BE6C8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BE6CC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804BE6D0
  c->lr=0x804BE6D8u; f_80382F60(c); // 804BE6D4
  goto L_804BE6FC; // 804BE6D8
L_804BE6DC:;
  c->r[3]=0u+0x80810000u; // 804BE6DC
  c->r[4]=c->r[31]|c->r[31]; // 804BE6E0
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE6E4
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BE6E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE6EC
  c->r[3]=c->r[3]+c->r[0]; // 804BE6F0
  c->r[3]=c->r[3]+0x00001434u; // 804BE6F4
  c->lr=0x804BE6FCu; f_80382F2C(c); // 804BE6F8
L_804BE6FC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 804BE6FC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 804BE700
  c->r[30]=R32(c->r[1]+0x00000058u); // 804BE704
  c->r[29]=R32(c->r[1]+0x00000054u); // 804BE708
  c->lr=c->r[0]; // 804BE70C
  c->r[1]=c->r[1]+0x00000060u; // 804BE710
  return; // 804BE714
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_804BE718(Ctx* __restrict c) {
  trace_call(0x804BE718u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BE718
  c->r[0]=c->lr; // 804BE71C
  cmps(c,0,(int32_t)c->r[3],0); // 804BE720
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BE724
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BE728
  c->r[31]=c->r[3]|c->r[3]; // 804BE72C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BE730
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BE734
  W32(c->r[1]+0x00000010u,c->r[28]); // 804BE738
  c->r[28]=c->r[4]|c->r[4]; // 804BE73C
  if (crb(c,2)) { goto L_804BE824; } // 804BE740
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 804BE744
  cmps(c,1,(int32_t)c->r[0],0); // 804BE748
  if (crb(c,4)) { goto L_804BE804; } // 804BE74C
  cmps(c,0,(int32_t)c->r[0],32); // 804BE750
  if (!crb(c,0)) { goto L_804BE804; } // 804BE754
  if (!crb(c,0)) { goto L_804BE778; } // 804BE758
  if (crb(c,4)) { goto L_804BE778; } // 804BE75C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE760
  c->r[3]=0u+0x80810000u; // 804BE764
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE768
  c->r[3]=c->r[3]+c->r[0]; // 804BE76C
  c->r[29]=c->r[3]+0x00000034u; // 804BE770
  goto L_804BE77C; // 804BE774
L_804BE778:;
  c->r[29]=0u+0x00000000u; // 804BE778
L_804BE77C:;
  c->r[30]=0u+0x80810000u; // 804BE77C
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE780
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BE784
  if (!crb(c,2)) { goto L_804BE7B4; } // 804BE788
  c->r[3]=c->r[30]+0xFFFFE680u; // 804BE78C
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BE790
  c->r[4]=c->r[3]+0x00000004u; // 804BE794
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE798
  c->r[3]=c->r[3]+c->r[0]; // 804BE79C
  c->r[3]=c->r[3]+0x00000034u; // 804BE7A0
  c->lr=0x804BE7A8u; f_80383214(c); // 804BE7A4
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804BE7A8
  c->r[0]=c->r[0]|0x00000001u; // 804BE7AC
  W16(c->r[30]+0xFFFFE680u,c->r[0]); // 804BE7B0
L_804BE7B4:;
  c->r[30]=0u+0x80810000u; // 804BE7B4
  c->r[3]=c->r[29]|c->r[29]; // 804BE7B8
  c->r[30]=c->r[30]+0xFFFFE680u; // 804BE7BC
  c->r[5]=c->r[31]|c->r[31]; // 804BE7C0
  c->r[4]=c->r[30]+0x00000004u; // 804BE7C4
  c->lr=0x804BE7CCu; f_80382F60(c); // 804BE7C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 804BE7CC
  cmps(c,0,(int32_t)c->r[0],32); // 804BE7D0
  if (!crb(c,0)) { goto L_804BE7F0; } // 804BE7D4
  cmps(c,0,(int32_t)c->r[0],0); // 804BE7D8
  if (crb(c,0)) { goto L_804BE7F0; } // 804BE7DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE7E0
  c->r[3]=c->r[30]+c->r[0]; // 804BE7E4
  c->r[3]=c->r[3]+0x00000E34u; // 804BE7E8
  goto L_804BE7F4; // 804BE7EC
L_804BE7F0:;
  c->r[3]=0u+0x00000000u; // 804BE7F0
L_804BE7F4:;
  c->r[4]=c->r[31]|c->r[31]; // 804BE7F4
  c->r[5]=c->r[31]|c->r[31]; // 804BE7F8
  c->lr=0x804BE800u; f_80382F60(c); // 804BE7FC
  goto L_804BE824; // 804BE800
L_804BE804:;
  c->r[3]=0u+0x80810000u; // 804BE804
  c->r[4]=c->r[31]|c->r[31]; // 804BE808
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE80C
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BE810
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BE814
  c->r[3]=c->r[3]+c->r[0]; // 804BE818
  c->r[3]=c->r[3]+0x00000E34u; // 804BE81C
  c->lr=0x804BE824u; f_80382F2C(c); // 804BE820
L_804BE824:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BE824
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BE828
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BE82C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BE830
  c->r[28]=R32(c->r[1]+0x00000010u); // 804BE834
  c->lr=c->r[0]; // 804BE838
  c->r[1]=c->r[1]+0x00000020u; // 804BE83C
  return; // 804BE840
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_804BE844(Ctx* __restrict c) {
  trace_call(0x804BE844u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BE844
  c->r[0]=c->lr; // 804BE848
  cmps(c,0,(int32_t)c->r[3],0); // 804BE84C
  W32(c->r[1]+0x00000094u,c->r[0]); // 804BE850
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 804BE854
  W32(c->r[1]+0x00000088u,c->r[30]); // 804BE858
  c->r[30]=c->r[5]|c->r[5]; // 804BE85C
  W32(c->r[1]+0x00000084u,c->r[29]); // 804BE860
  c->r[29]=c->r[4]|c->r[4]; // 804BE864
  W32(c->r[1]+0x00000080u,c->r[28]); // 804BE868
  c->r[28]=c->r[3]|c->r[3]; // 804BE86C
  if (crb(c,2)) { goto L_804BEC70; } // 804BE870
  c->r[31]=0u+0x80810000u; // 804BE874
  c->r[4]=c->r[31]+0xFFFFE680u; // 804BE878
  c->r[0]=R16(c->r[31]+0xFFFFE680u); // 804BE87C
  c->r[3]=R16(c->r[4]+0x00000002u); // 804BE880
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BE884
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 804BE888
  c->r[3]=c->r[4]+c->r[0]; // 804BE88C
  c->r[3]=c->r[3]+0x00000034u; // 804BE890
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BE894
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE898
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE89C
  c->f[2]=-c->f[2]; // 804BE8A0
  c->f[1]=-c->f[1]; // 804BE8A4
  c->f[0]=-c->f[0]; // 804BE8A8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 804BE8AC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 804BE8B0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 804BE8B4
  if (!crb(c,2)) { goto L_804BE8D0; } // 804BE8B8
  c->r[4]=c->r[4]+0x00000004u; // 804BE8BC
  c->lr=0x804BE8C4u; f_80383214(c); // 804BE8C0
  c->r[0]=R16(c->r[31]+0xFFFFE680u); // 804BE8C4
  c->r[0]=c->r[0]|0x00000001u; // 804BE8C8
  W16(c->r[31]+0xFFFFE680u,c->r[0]); // 804BE8CC
L_804BE8D0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 804BE8D0
  c->r[3]=0u+0x80810000u; // 804BE8D4
  cmps(c,1,(int32_t)c->r[0],0); // 804BE8D8
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BE8DC
  c->r[31]=c->r[3]+0x00000004u; // 804BE8E0
  if (crb(c,4)) { goto L_804BEB00; } // 804BE8E4
  cmps(c,0,(int32_t)c->r[0],128); // 804BE8E8
  if (!crb(c,0)) { goto L_804BEB00; } // 804BE8EC
  if (crb(c,4)) { goto L_804BE910; } // 804BE8F0
  if (!crb(c,0)) { goto L_804BE910; } // 804BE8F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 804BE8F8
  c->r[3]=0u+0x80810000u; // 804BE8FC
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804BE900
  c->r[3]=c->r[3]+c->r[0]; // 804BE904
  c->r[3]=c->r[3]+0x0000002Cu; // 804BE908
  goto L_804BE914; // 804BE90C
L_804BE910:;
  c->r[3]=0u+0x00000000u; // 804BE910
L_804BE914:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BE914
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BE918
  if (crb(c,2)) { goto L_804BEB00; } // 804BE91C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 804BE920
  if (crb(c,0)) { goto L_804BE948; } // 804BE924
  cmps(c,0,(int32_t)c->r[0],128); // 804BE928
  if (!crb(c,0)) { goto L_804BE948; } // 804BE92C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 804BE930
  c->r[3]=0u+0x80810000u; // 804BE934
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804BE938
  c->r[3]=c->r[3]+c->r[0]; // 804BE93C
  c->r[29]=c->r[3]+0x0000002Cu; // 804BE940
  goto L_804BE94C; // 804BE944
L_804BE948:;
  c->r[29]=0u+0x00000000u; // 804BE948
L_804BE94C:;
  c->r[3]=c->r[29]|c->r[29]; // 804BE94C
  c->r[4]=c->r[1]+0x00000044u; // 804BE950
  c->lr=0x804BE958u; f_804D3810(c); // 804BE954
  c->r[4]=R32(c->r[29]+0x00000000u); // 804BE958
  c->r[3]=0u+0x00000000u; // 804BE95C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804BE960
  if (!crb(c,2)) { goto L_804BE974; } // 804BE964
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804BE968
  if (!crb(c,2)) { goto L_804BE974; } // 804BE96C
  c->r[3]=0u+0x00000001u; // 804BE970
L_804BE974:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BE974
  if (!crb(c,2)) { goto L_804BE9A4; } // 804BE978
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE97C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE980
  fcmp(c,0,c->f[1],c->f[0]); // 804BE984
  if (!crb(c,2)) { goto L_804BEA24; } // 804BE988
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE98C
  fcmp(c,0,c->f[1],c->f[0]); // 804BE990
  if (!crb(c,2)) { goto L_804BEA24; } // 804BE994
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE998
  fcmp(c,0,c->f[1],c->f[0]); // 804BE99C
  if (!crb(c,2)) { goto L_804BEA24; } // 804BE9A0
L_804BE9A4:;
  c->r[3]=c->r[29]|c->r[29]; // 804BE9A4
  c->r[4]=c->r[1]+0x00000044u; // 804BE9A8
  c->lr=0x804BE9B0u; f_804D37F4(c); // 804BE9AC
  c->r[3]=c->r[1]+0x00000044u; // 804BE9B0
  c->r[4]=c->r[31]|c->r[31]; // 804BE9B4
  c->r[5]=c->r[3]|c->r[3]; // 804BE9B8
  c->lr=0x804BE9C0u; f_804E1A00(c); // 804BE9BC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE9C0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BE9C4
  c->f[6]=-c->f[0]; // 804BE9C8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BE9CC
  c->f[4]=-c->f[2]; // 804BE9D0
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BE9D4
  c->f[5]=-c->f[1]; // 804BE9D8
  c->f[3]=c->ps1[3]=S(c->f[6]); // 804BE9DC
  c->f[1]=c->ps1[1]=S(c->f[4]); // 804BE9E0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 804BE9E4
  c->f[2]=c->ps1[2]=S(c->f[5]); // 804BE9E8
  fcmp(c,0,c->f[0],c->f[3]); // 804BE9EC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 804BE9F0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 804BE9F4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 804BE9F8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 804BE9FC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 804BEA00
  if (!crb(c,2)) { goto L_804BEA34; } // 804BEA04
  fcmp(c,0,c->f[0],c->f[2]); // 804BEA08
  if (!crb(c,2)) { goto L_804BEA34; } // 804BEA0C
  fcmp(c,0,c->f[0],c->f[1]); // 804BEA10
  if (!crb(c,2)) { goto L_804BEA34; } // 804BEA14
  {uint32_t ea=c->r[2]+0x00001618u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEA18
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 804BEA1C
  goto L_804BEA34; // 804BEA20
L_804BEA24:;
  c->r[3]=c->r[1]+0x00000044u; // 804BEA24
  c->r[4]=c->r[31]|c->r[31]; // 804BEA28
  c->r[5]=c->r[3]|c->r[3]; // 804BEA2C
  c->lr=0x804BEA34u; f_804E1A00(c); // 804BEA30
L_804BEA34:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804BEA34
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804BEA38
  if (!crb(c,2)) { goto L_804BEA54; } // 804BEA3C
  c->r[3]=c->r[1]+0x00000050u; // 804BEA40
  c->r[4]=c->r[1]+0x00000044u; // 804BEA44
  c->r[5]=c->r[1]+0x00000068u; // 804BEA48
  c->lr=0x804BEA50u; f_80383E1C(c); // 804BEA4C
  goto L_804BEA90; // 804BEA50
L_804BEA54:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEA54
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEA58
  c->f[2]=-c->f[0]; // 804BEA5C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEA60
  c->f[3]=-c->f[1]; // 804BEA64
  c->f[4]=-c->f[0]; // 804BEA68
  c->f[0]=c->ps1[0]=S(c->f[2]); // 804BEA6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804BEA70
  c->f[1]=c->ps1[1]=S(c->f[3]); // 804BEA74
  c->f[2]=c->ps1[2]=S(c->f[4]); // 804BEA78
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 804BEA7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804BEA80
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 804BEA84
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 804BEA88
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 804BEA8C
L_804BEA90:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEA90
  {uint32_t ea=c->r[2]+0x0000161Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEA94
  c->f[1]=std::fabs(c->f[1]); // 804BEA98
  fcmp(c,0,c->f[1],c->f[0]); // 804BEA9C
  if (!crb(c,0)) { goto L_804BEAE8; } // 804BEAA0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEAA4
  c->f[1]=std::fabs(c->f[1]); // 804BEAA8
  fcmp(c,0,c->f[1],c->f[0]); // 804BEAAC
  if (!crb(c,0)) { goto L_804BEAE8; } // 804BEAB0
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEAB4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEAB8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 804BEABC
  fcmp(c,0,c->f[0],c->f[1]); // 804BEAC0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 804BEAC4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804BEAC8
  if (!crb(c,2)) { goto L_804BEADC; } // 804BEACC
  {uint32_t ea=c->r[2]+0x00001618u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEAD0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804BEAD4
  goto L_804BEBAC; // 804BEAD8
L_804BEADC:;
  {uint32_t ea=c->r[2]+0x00001620u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEADC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804BEAE0
  goto L_804BEBAC; // 804BEAE4
L_804BEAE8:;
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEAE8
  {uint32_t ea=c->r[2]+0x00001620u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEAEC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 804BEAF0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 804BEAF4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 804BEAF8
  goto L_804BEBAC; // 804BEAFC
L_804BEB00:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 804BEB00
  cmps(c,1,(int32_t)c->r[0],0); // 804BEB04
  if (crb(c,4)) { goto L_804BEB88; } // 804BEB08
  cmps(c,0,(int32_t)c->r[0],32); // 804BEB0C
  if (!crb(c,0)) { goto L_804BEB88; } // 804BEB10
  if (!crb(c,0)) { goto L_804BEB34; } // 804BEB14
  if (crb(c,4)) { goto L_804BEB34; } // 804BEB18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BEB1C
  c->r[3]=0u+0x80810000u; // 804BEB20
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BEB24
  c->r[3]=c->r[3]+c->r[0]; // 804BEB28
  c->r[6]=c->r[3]+0x00000034u; // 804BEB2C
  goto L_804BEB38; // 804BEB30
L_804BEB34:;
  c->r[6]=0u+0x00000000u; // 804BEB34
L_804BEB38:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEB38
  c->r[3]=c->r[1]+0x00000050u; // 804BEB3C
  c->r[4]=c->r[1]+0x00000038u; // 804BEB40
  c->r[5]=c->r[1]+0x00000068u; // 804BEB44
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 804BEB48
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEB4C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 804BEB50
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEB54
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804BEB58
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BEB5C
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BEB60
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEB64
  c->f[2]=-c->f[2]; // 804BEB68
  c->f[1]=-c->f[1]; // 804BEB6C
  c->f[0]=-c->f[0]; // 804BEB70
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 804BEB74
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804BEB78
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804BEB7C
  c->lr=0x804BEB84u; f_80383E1C(c); // 804BEB80
  goto L_804BEBAC; // 804BEB84
L_804BEB88:;
  c->r[3]=0u+0x80810000u; // 804BEB88
  c->r[4]=c->r[28]|c->r[28]; // 804BEB8C
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BEB90
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BEB94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BEB98
  c->r[3]=c->r[3]+c->r[0]; // 804BEB9C
  c->r[3]=c->r[3]+0x00001434u; // 804BEBA0
  c->lr=0x804BEBA8u; f_80382F2C(c); // 804BEBA4
  goto L_804BEC70; // 804BEBA8
L_804BEBAC:;
  c->r[3]=c->r[1]+0x00000068u; // 804BEBAC
  c->r[4]=c->r[3]|c->r[3]; // 804BEBB0
  c->lr=0x804BEBB8u; f_80383D38(c); // 804BEBB4
  c->r[3]=c->r[1]+0x0000005Cu; // 804BEBB8
  c->r[4]=c->r[1]+0x00000068u; // 804BEBBC
  c->r[5]=c->r[1]+0x0000002Cu; // 804BEBC0
  c->lr=0x804BEBC8u; f_80383DE0(c); // 804BEBC4
  c->r[3]=c->r[1]+0x0000002Cu; // 804BEBC8
  c->r[4]=c->r[3]|c->r[3]; // 804BEBCC
  c->lr=0x804BEBD4u; f_80383D38(c); // 804BEBD0
  c->r[3]=c->r[1]+0x00000068u; // 804BEBD4
  c->r[4]=c->r[1]+0x0000002Cu; // 804BEBD8
  c->r[5]=c->r[1]+0x00000020u; // 804BEBDC
  c->lr=0x804BEBE4u; f_80383DE0(c); // 804BEBE0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEBE4
  c->r[3]=c->r[28]|c->r[28]; // 804BEBE8
  c->r[4]=c->r[31]|c->r[31]; // 804BEBEC
  c->r[5]=c->r[28]|c->r[28]; // 804BEBF0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804BEBF4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEBF8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 804BEBFC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC00
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 804BEC04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC08
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 804BEC0C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC10
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 804BEC14
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC18
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 804BEC1C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC20
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 804BEC24
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC28
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 804BEC2C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC30
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 804BEC34
  c->lr=0x804BEC3Cu; f_80382F60(c); // 804BEC38
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BEC3C
  c->r[3]=0u+0x80810000u; // 804BEC40
  c->r[3]=c->r[3]+0xFFFFE680u; // 804BEC44
  c->r[4]=c->r[28]|c->r[28]; // 804BEC48
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 804BEC4C
  c->r[5]=c->r[28]|c->r[28]; // 804BEC50
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BEC54
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 804BEC58
  c->r[0]=R16(c->r[3]+0x00000002u); // 804BEC5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BEC60
  c->r[3]=c->r[3]+c->r[0]; // 804BEC64
  c->r[3]=c->r[3]+0x00001434u; // 804BEC68
  c->lr=0x804BEC70u; f_80382F60(c); // 804BEC6C
L_804BEC70:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 804BEC70
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 804BEC74
  c->r[30]=R32(c->r[1]+0x00000088u); // 804BEC78
  c->r[29]=R32(c->r[1]+0x00000084u); // 804BEC7C
  c->r[28]=R32(c->r[1]+0x00000080u); // 804BEC80
  c->lr=c->r[0]; // 804BEC84
  c->r[1]=c->r[1]+0x00000090u; // 804BEC88
  return; // 804BEC8C
}

// fn_804BEC90
void f_804BEC90(Ctx* __restrict c) {
  trace_call(0x804BEC90u);
  cmps(c,0,(int32_t)c->r[3],0); // 804BEC90
  if (crb(c,2)) return; // 804BEC94
  f_80382F00(c); return; // 804BEC98
  return; // 804BEC9C
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
void f_804BECA0(Ctx* __restrict c) {
  trace_call(0x804BECA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BECA0
  c->r[0]=c->lr; // 804BECA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BECA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BECAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BECB0
  c->r[31]=c->r[3]|c->r[3]; // 804BECB4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BECB8
  if (crb(c,2)) { goto L_804BECCC; } // 804BECBC
  c->r[4]=c->r[31]+0x00000004u; // 804BECC0
  c->r[3]=0u+0x00000000u; // 804BECC4
  c->lr=0x804BECCCu; f_804BDD20(c); // 804BECC8
L_804BECCC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BECCC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804BECD0
  if (crb(c,2)) { goto L_804BECE4; } // 804BECD4
  c->r[4]=c->r[31]+0x00000034u; // 804BECD8
  c->r[3]=0u+0x00000003u; // 804BECDC
  c->lr=0x804BECE4u; f_804BDD20(c); // 804BECE0
L_804BECE4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804BECE4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BECE8
  if (crb(c,2)) { goto L_804BECFC; } // 804BECEC
  c->r[4]=c->r[31]+0x00000064u; // 804BECF0
  c->r[3]=0u+0x00000006u; // 804BECF4
  c->lr=0x804BECFCu; f_804BDD20(c); // 804BECF8
L_804BECFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BECFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BED00
  c->lr=c->r[0]; // 804BED04
  c->r[1]=c->r[1]+0x00000010u; // 804BED08
  return; // 804BED0C
}

// fn_804BED10
void f_804BED10(Ctx* __restrict c) {
  trace_call(0x804BED10u);
  c->r[0]=0u+0x00000001u; // 804BED10
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BED14
  return; // 804BED18
}

// fn_804BED1C
void f_804BED1C(Ctx* __restrict c) {
  trace_call(0x804BED1Cu);
  c->r[0]=0u+0x00000000u; // 804BED1C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804BED20
  return; // 804BED24
}

// fn_804BED28
void f_804BED28(Ctx* __restrict c) {
  trace_call(0x804BED28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BED28
  c->r[0]=c->lr; // 804BED2C
  cmps(c,0,(int32_t)c->r[3],0); // 804BED30
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BED34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BED38
  c->r[31]=c->r[3]|c->r[3]; // 804BED3C
  if (crb(c,2)) { goto L_804BED50; } // 804BED40
  cmps(c,0,(int32_t)c->r[4],0); // 804BED44
  if (!crb(c,1)) { goto L_804BED50; } // 804BED48
  c->lr=0x804BED50u; f_803A9400(c); // 804BED4C
L_804BED50:;
  c->r[3]=c->r[31]|c->r[31]; // 804BED50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BED54
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BED58
  c->lr=c->r[0]; // 804BED5C
  c->r[1]=c->r[1]+0x00000010u; // 804BED60
  return; // 804BED64
}

// SetLightSetting__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFRCQ34nw4r3g3d12LightSetting
void f_804BED68(Ctx* __restrict c) {
  trace_call(0x804BED68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BED68
  c->r[0]=c->lr; // 804BED6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BED70
  c->r[11]=c->r[1]+0x00000020u; // 804BED74
  c->lr=0x804BED7Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BED78
  c->r[31]=c->r[3]|c->r[3]; // 804BED7C
  c->r[26]=c->r[4]|c->r[4]; // 804BED80
  c->lr=0x804BED88u; f_804D3D44(c); // 804BED84
  c->r[4]=0u+0x80810000u; // 804BED88
  c->r[5]=R16(c->r[26]+0x00000000u); // 804BED8C
  c->r[4]=c->r[4]+0xFFFFE680u; // 804BED90
  c->r[3]=c->r[31]|c->r[31]; // 804BED94
  c->r[0]=R16(c->r[4]+0x00000002u); // 804BED98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BED9C
  c->r[4]=c->r[4]+c->r[0]; // 804BEDA0
  c->r[4]=c->r[4]+0x00000034u; // 804BEDA4
  c->lr=0x804BEDACu; f_804D3ED4(c); // 804BEDA8
  c->r[3]=0u+0xFFFFFFFFu; // 804BEDAC
  c->r[0]=0u+0x00000000u; // 804BEDB0
  W32(c->r[31]+0x00000010u,c->r[3]); // 804BEDB4
  c->r[27]=0u+0x00000000u; // 804BEDB8
  c->r[28]=R16(c->r[31]+0x00000000u); // 804BEDBC
  c->r[26]=0u+0x00000000u; // 804BEDC0
  W32(c->r[31]+0x00000014u,c->r[0]); // 804BEDC4
  c->r[29]=0u+0x00000000u; // 804BEDC8
  c->r[30]=0u+0x00000001u; // 804BEDCC
  W32(c->r[31]+0x00000018u,c->r[0]); // 804BEDD0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 804BEDD4
  W32(c->r[31]+0x00000020u,c->r[0]); // 804BEDD8
  W8(c->r[31]+0x0000002Bu,c->r[3]); // 804BEDDC
  W8(c->r[31]+0x0000002Au,c->r[3]); // 804BEDE0
  W8(c->r[31]+0x00000029u,c->r[3]); // 804BEDE4
  W8(c->r[31]+0x00000028u,c->r[3]); // 804BEDE8
  W8(c->r[31]+0x00000027u,c->r[3]); // 804BEDEC
  W8(c->r[31]+0x00000026u,c->r[3]); // 804BEDF0
  W8(c->r[31]+0x00000025u,c->r[3]); // 804BEDF4
  W8(c->r[31]+0x00000024u,c->r[3]); // 804BEDF8
  goto L_804BEE34; // 804BEDFC
L_804BEE00:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 804BEE00
  c->r[3]=c->r[0]+c->r[29]; // 804BEE04
  c->r[0]=R32(c->r[29]+c->r[0]); // 804BEE08
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BEE0C
  if (crb(c,2)) { goto L_804BEE2C; } // 804BEE10
  c->r[4]=c->r[31]+c->r[27]; // 804BEE14
  c->r[3]=c->r[3]+0x00000004u; // 804BEE18
  W8(c->r[4]+0x00000024u,c->r[26]); // 804BEE1C
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[30]<<((c->r[27])&31)); // 804BEE20
  c->lr=0x804BEE28u; f_803A5BE4(c); // 804BEE24
  c->r[27]=c->r[27]+0x00000001u; // 804BEE28
L_804BEE2C:;
  c->r[29]=c->r[29]+0x00000044u; // 804BEE2C
  c->r[26]=c->r[26]+0x00000001u; // 804BEE30
L_804BEE34:;
  cmpu(c,0,c->r[27],0x00000008u); // 804BEE34
  if (!crb(c,0)) { goto L_804BEE44; } // 804BEE38
  cmpu(c,0,c->r[26],c->r[28]); // 804BEE3C
  if (crb(c,0)) { IRQCHK(c); goto L_804BEE00; } // 804BEE40
L_804BEE44:;
  c->r[11]=c->r[1]+0x00000020u; // 804BEE44
  c->lr=0x804BEE4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BEE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BEE4C
  c->lr=c->r[0]; // 804BEE50
  c->r[1]=c->r[1]+0x00000020u; // 804BEE54
  return; // 804BEE58
}

// fn_804BEE5C
void f_804BEE5C(Ctx* __restrict c) {
  trace_call(0x804BEE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BEE5C
  c->r[0]=c->lr; // 804BEE60
  W32(c->r[1]+0x00000074u,c->r[0]); // 804BEE64
  c->r[11]=c->r[1]+0x00000070u; // 804BEE68
  c->lr=0x804BEE70u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BEE6C
  cmps(c,0,(int32_t)c->r[5],0); // 804BEE70
  c->r[27]=c->r[3]|c->r[3]; // 804BEE74
  c->r[28]=c->r[5]|c->r[5]; // 804BEE78
  if (crb(c,0)) { goto L_804BF060; } // 804BEE7C
  cmps(c,0,(int32_t)c->r[5],128); // 804BEE80
  if (crb(c,0)) { goto L_804BEE8C; } // 804BEE84
  goto L_804BF060; // 804BEE88
L_804BEE8C:;
  c->r[3]=c->r[1]+0x00000008u; // 804BEE8C
  c->lr=0x804BEE94u; f_804D3378(c); // 804BEE90
  c->r[4]=0u+0x80810000u; // 804BEE94
  c->r[3]=c->r[1]+0x00000008u; // 804BEE98
  c->r[4]=c->r[4]+0xFFFFE680u; // 804BEE9C
  c->r[0]=R16(c->r[4]+0x00000002u); // 804BEEA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804BEEA4
  c->r[4]=c->r[4]+c->r[0]; // 804BEEA8
  c->r[4]=c->r[4]+0x00000034u; // 804BEEAC
  c->lr=0x804BEEB4u; f_804D3840(c); // 804BEEB0
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)68); // 804BEEB4
  c->r[3]=c->r[1]+0x00000008u; // 804BEEB8
  c->r[4]=c->r[27]+c->r[0]; // 804BEEBC
  c->r[26]=c->r[4]+0x0000002Cu; // 804BEEC0
  c->r[4]=c->r[26]|c->r[26]; // 804BEEC4
  c->lr=0x804BEECCu; f_804D3408(c); // 804BEEC8
  cmps(c,0,(int32_t)c->r[3],0); // 804BEECC
  if (crb(c,2)) { goto L_804BF060; } // 804BEED0
  c->r[3]=c->r[26]|c->r[26]; // 804BEED4
  c->r[4]=c->r[1]+0x00000008u; // 804BEED8
  c->lr=0x804BEEE0u; f_804D33BC(c); // 804BEEDC
  c->r[30]=0u+0x00000000u; // 804BEEE0
  c->r[31]=0u+0x00000001u; // 804BEEE4
  c->r[26]=0u+0xFFFFFFFFu; // 804BEEE8
L_804BEEEC:;
  c->r[3]=c->r[27]+c->r[30]; // 804BEEEC
  c->r[0]=R8(c->r[3]+0x00000024u); // 804BEEF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BEEF4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804BEEF8
  if (!crb(c,2)) { goto L_804BF054; } // 804BEEFC
  c->r[0]=R32(c->r[1]+0x00000008u); // 804BEF00
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BEF04
  if (crb(c,2)) { goto L_804BF018; } // 804BEF08
  c->r[29]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 804BEF0C
  c->r[3]=c->r[1]+0x0000000Cu; // 804BEF10
  c->r[4]=c->r[29]|c->r[29]; // 804BEF14
  c->lr=0x804BEF1Cu; f_803A5BE4(c); // 804BEF18
  c->r[4]=R32(c->r[27]+0x00000020u); // 804BEF1C
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 804BEF20
  c->r[3]=R32(c->r[27]+0x00000014u); // 804BEF24
  c->r[0]=R32(c->r[27]+0x00000018u); // 804BEF28
  c->r[4]=c->r[4]|c->r[5]; // 804BEF2C
  c->r[0]=c->r[3]|c->r[0]; // 804BEF30
  c->r[0]=c->r[4]|c->r[0]; // 804BEF34
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 804BEF38
  if (crb(c,2)) { goto L_804BF054; } // 804BEF3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 804BEF40
  c->r[4]=R32(c->r[1]+0x00000008u); // 804BEF44
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804BEF48
  if (crb(c,2)) { goto L_804BEFB4; } // 804BEF4C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 804BEF50
  if (!crb(c,2)) { goto L_804BEF64; } // 804BEF54
  c->r[0]=c->r[5]|c->r[29]; // 804BEF58
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 804BEF5C
  goto L_804BEF6C; // 804BEF60
L_804BEF64:;
  c->r[0]=c->r[5]&~c->r[29]; // 804BEF64
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 804BEF68
L_804BEF6C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 804BEF6C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BEF70
  if (!crb(c,2)) { goto L_804BEF88; } // 804BEF74
  c->r[0]=R32(c->r[27]+0x00000020u); // 804BEF78
  c->r[0]=c->r[0]|c->r[29]; // 804BEF7C
  W32(c->r[27]+0x00000020u,c->r[0]); // 804BEF80
  goto L_804BEF94; // 804BEF84
L_804BEF88:;
  c->r[0]=R32(c->r[27]+0x00000020u); // 804BEF88
  c->r[0]=c->r[0]&~c->r[29]; // 804BEF8C
  W32(c->r[27]+0x00000020u,c->r[0]); // 804BEF90
L_804BEF94:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804BEF94
  c->r[4]=~(c->r[29]|c->r[29]); // 804BEF98
  c->r[0]=R32(c->r[27]+0x00000018u); // 804BEF9C
  c->r[3]=c->r[3]&c->r[4]; // 804BEFA0
  c->r[0]=c->r[0]&c->r[4]; // 804BEFA4
  W32(c->r[27]+0x00000014u,c->r[3]); // 804BEFA8
  W32(c->r[27]+0x00000018u,c->r[0]); // 804BEFAC
  goto L_804BF054; // 804BEFB0
L_804BEFB4:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 804BEFB4
  if (!crb(c,2)) { goto L_804BEFC8; } // 804BEFB8
  c->r[0]=c->r[3]|c->r[29]; // 804BEFBC
  W32(c->r[27]+0x00000014u,c->r[0]); // 804BEFC0
  goto L_804BEFD0; // 804BEFC4
L_804BEFC8:;
  c->r[0]=c->r[3]&~c->r[29]; // 804BEFC8
  W32(c->r[27]+0x00000014u,c->r[0]); // 804BEFCC
L_804BEFD0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 804BEFD0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BEFD4
  if (!crb(c,2)) { goto L_804BEFEC; } // 804BEFD8
  c->r[0]=R32(c->r[27]+0x00000018u); // 804BEFDC
  c->r[0]=c->r[0]|c->r[29]; // 804BEFE0
  W32(c->r[27]+0x00000018u,c->r[0]); // 804BEFE4
  goto L_804BEFF8; // 804BEFE8
L_804BEFEC:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 804BEFEC
  c->r[0]=c->r[0]&~c->r[29]; // 804BEFF0
  W32(c->r[27]+0x00000018u,c->r[0]); // 804BEFF4
L_804BEFF8:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 804BEFF8
  c->r[4]=~(c->r[29]|c->r[29]); // 804BEFFC
  c->r[0]=R32(c->r[27]+0x00000020u); // 804BF000
  c->r[3]=c->r[3]&c->r[4]; // 804BF004
  c->r[0]=c->r[0]&c->r[4]; // 804BF008
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 804BF00C
  W32(c->r[27]+0x00000020u,c->r[0]); // 804BF010
  goto L_804BF054; // 804BF014
L_804BF018:;
  W8(c->r[3]+0x00000024u,c->r[26]); // 804BF018
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 804BF01C
  c->r[6]=~(c->r[0]|c->r[0]); // 804BF020
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 804BF024
  c->r[4]=R32(c->r[27]+0x00000020u); // 804BF028
  c->r[5]=c->r[0]&c->r[6]; // 804BF02C
  c->r[3]=R32(c->r[27]+0x00000014u); // 804BF030
  c->r[0]=R32(c->r[27]+0x00000018u); // 804BF034
  c->r[4]=c->r[4]&c->r[6]; // 804BF038
  c->r[3]=c->r[3]&c->r[6]; // 804BF03C
  W32(c->r[27]+0x0000001Cu,c->r[5]); // 804BF040
  c->r[0]=c->r[0]&c->r[6]; // 804BF044
  W32(c->r[27]+0x00000020u,c->r[4]); // 804BF048
  W32(c->r[27]+0x00000014u,c->r[3]); // 804BF04C
  W32(c->r[27]+0x00000018u,c->r[0]); // 804BF050
L_804BF054:;
  c->r[30]=c->r[30]+0x00000001u; // 804BF054
  cmpu(c,0,c->r[30],0x00000008u); // 804BF058
  if (crb(c,0)) { IRQCHK(c); goto L_804BEEEC; } // 804BF05C
L_804BF060:;
  c->r[11]=c->r[1]+0x00000070u; // 804BF060
  c->lr=0x804BF068u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BF064
  c->r[0]=R32(c->r[1]+0x00000074u); // 804BF068
  c->lr=c->r[0]; // 804BF06C
  c->r[1]=c->r[1]+0x00000070u; // 804BF070
  return; // 804BF074
}

// LoadLightSet__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_804BF078(Ctx* __restrict c) {
  trace_call(0x804BF078u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BF078
  c->r[0]=c->lr; // 804BF07C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BF080
  c->r[11]=c->r[1]+0x00000040u; // 804BF084
  c->lr=0x804BF08Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BF088
  cmps(c,0,(int32_t)c->r[4],0); // 804BF08C
  c->r[20]=c->r[3]|c->r[3]; // 804BF090
  c->r[21]=c->r[5]|c->r[5]; // 804BF094
  c->r[22]=c->r[6]|c->r[6]; // 804BF098
  c->r[23]=c->r[7]|c->r[7]; // 804BF09C
  c->r[24]=c->r[8]|c->r[8]; // 804BF0A0
  if (crb(c,0)) { goto L_804BF0B0; } // 804BF0A4
  cmps(c,0,(int32_t)c->r[4],128); // 804BF0A8
  if (crb(c,0)) { goto L_804BF110; } // 804BF0AC
L_804BF0B0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804BF0B0
  if (crb(c,2)) { goto L_804BF0C0; } // 804BF0B4
  c->r[0]=0u+0x00000000u; // 804BF0B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 804BF0BC
L_804BF0C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 804BF0C0
  if (crb(c,2)) { goto L_804BF0D0; } // 804BF0C4
  c->r[0]=0u+0x00000000u; // 804BF0C8
  W32(c->r[6]+0x00000000u,c->r[0]); // 804BF0CC
L_804BF0D0:;
  cmps(c,0,(int32_t)c->r[7],0); // 804BF0D0
  if (crb(c,2)) { goto L_804BF0E0; } // 804BF0D4
  c->r[0]=0u+0x00000000u; // 804BF0D8
  W32(c->r[7]+0x00000000u,c->r[0]); // 804BF0DC
L_804BF0E0:;
  cmps(c,0,(int32_t)c->r[8],0); // 804BF0E0
  if (crb(c,2)) { goto L_804BF0F0; } // 804BF0E4
  c->r[0]=0u+0x00000000u; // 804BF0E8
  W32(c->r[8]+0x00000000u,c->r[0]); // 804BF0EC
L_804BF0F0:;
  cmps(c,0,(int32_t)c->r[9],0); // 804BF0F0
  if (crb(c,2)) { goto L_804BF478; } // 804BF0F4
  c->r[0]=0u+0x000000FFu; // 804BF0F8
  W8(c->r[9]+0x00000003u,c->r[0]); // 804BF0FC
  W8(c->r[9]+0x00000002u,c->r[0]); // 804BF100
  W8(c->r[9]+0x00000001u,c->r[0]); // 804BF104
  W8(c->r[9]+0x00000000u,c->r[0]); // 804BF108
  goto L_804BF478; // 804BF10C
L_804BF110:;
  cmps(c,0,(int32_t)c->r[9],0); // 804BF110
  if (crb(c,2)) { goto L_804BF16C; } // 804BF114
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804BF118
  c->r[10]=c->r[3]+c->r[0]; // 804BF11C
  c->r[0]=R8(c->r[10]+0x00002434u); // 804BF120
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804BF124
  if (!crb(c,0)) { goto L_804BF144; } // 804BF128
  c->r[0]=0u+0x000000FFu; // 804BF12C
  W8(c->r[9]+0x00000003u,c->r[0]); // 804BF130
  W8(c->r[9]+0x00000002u,c->r[0]); // 804BF134
  W8(c->r[9]+0x00000001u,c->r[0]); // 804BF138
  W8(c->r[9]+0x00000000u,c->r[0]); // 804BF13C
  goto L_804BF16C; // 804BF140
L_804BF144:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804BF144
  c->r[10]=c->r[3]+c->r[0]; // 804BF148
  c->r[0]=R8(c->r[10]+0x0000222Cu); // 804BF14C
  W8(c->r[9]+0x00000000u,c->r[0]); // 804BF150
  c->r[0]=R8(c->r[10]+0x0000222Du); // 804BF154
  W8(c->r[9]+0x00000001u,c->r[0]); // 804BF158
  c->r[0]=R8(c->r[10]+0x0000222Eu); // 804BF15C
  W8(c->r[9]+0x00000002u,c->r[0]); // 804BF160
  c->r[0]=R8(c->r[10]+0x0000222Fu); // 804BF164
  W8(c->r[9]+0x00000003u,c->r[0]); // 804BF168
L_804BF16C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804BF16C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804BF170
  if (!crb(c,2)) { goto L_804BF1BC; } // 804BF174
  cmps(c,0,(int32_t)c->r[5],0); // 804BF178
  if (crb(c,2)) { goto L_804BF188; } // 804BF17C
  c->r[0]=R32(c->r[3]+0x00000014u); // 804BF180
  W32(c->r[5]+0x00000000u,c->r[0]); // 804BF184
L_804BF188:;
  cmps(c,0,(int32_t)c->r[6],0); // 804BF188
  if (crb(c,2)) { goto L_804BF198; } // 804BF18C
  c->r[0]=R32(c->r[3]+0x00000018u); // 804BF190
  W32(c->r[6]+0x00000000u,c->r[0]); // 804BF194
L_804BF198:;
  cmps(c,0,(int32_t)c->r[7],0); // 804BF198
  if (crb(c,2)) { goto L_804BF1A8; } // 804BF19C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804BF1A0
  W32(c->r[7]+0x00000000u,c->r[0]); // 804BF1A4
L_804BF1A8:;
  cmps(c,0,(int32_t)c->r[8],0); // 804BF1A8
  if (crb(c,2)) { goto L_804BF478; } // 804BF1AC
  c->r[0]=R32(c->r[3]+0x00000020u); // 804BF1B0
  W32(c->r[8]+0x00000000u,c->r[0]); // 804BF1B4
  goto L_804BF478; // 804BF1B8
L_804BF1BC:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804BF1BC
  c->r[0]=0u+0x00000000u; // 804BF1C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 804BF1C4
  c->r[27]=0u+0x00000000u; // 804BF1C8
  c->r[31]=0u+0x00000001u; // 804BF1CC
  c->r[5]=c->r[3]+c->r[5]; // 804BF1D0
  c->r[28]=c->r[5]+0x0000242Cu; // 804BF1D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 804BF1D8
  c->r[18]=c->r[28]|c->r[28]; // 804BF1DC
  c->r[19]=0u+0x00000002u; // 804BF1E0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804BF1E4
  W32(c->r[3]+0x00000020u,c->r[0]); // 804BF1E8
  W32(c->r[3]+0x00000010u,c->r[4]); // 804BF1EC
L_804BF1F0:;
  c->r[26]=R8(c->r[18]+0x00000000u); // 804BF1F0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; cr0(c,c->r[4]); // 804BF1F4
  if (crb(c,0)) { goto L_804BF428; } // 804BF1F8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 804BF1FC
  c->r[29]=c->r[20]+c->r[0]; // 804BF200
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 804BF204
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804BF208
  if (crb(c,2)) { goto L_804BF428; } // 804BF20C
  c->r[5]=c->r[20]+0x00000024u; // 804BF210
  c->r[3]=c->r[20]+0x0000002Cu; // 804BF214
  goto L_804BF220; // 804BF218
L_804BF21C:;
  c->r[5]=c->r[5]+0x00000001u; // 804BF21C
L_804BF220:;
  cmpu(c,0,c->r[5],c->r[3]); // 804BF220
  if (crb(c,2)) { goto L_804BF238; } // 804BF224
  c->r[0]=R8(c->r[5]+0x00000000u); // 804BF228
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF22C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804BF230
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF21C; } // 804BF234
L_804BF238:;
  c->r[3]=c->r[20]+0x0000002Cu; // 804BF238
  cmpu(c,0,c->r[5],c->r[3]); // 804BF23C
  if (!crb(c,2)) { goto L_804BF3B4; } // 804BF240
  c->r[4]=R32(c->r[13]+0xFFFFA280u); // 804BF244
  c->r[30]=c->r[20]+0x00000024u; // 804BF248
  goto L_804BF254; // 804BF24C
L_804BF250:;
  c->r[30]=c->r[30]+0x00000001u; // 804BF250
L_804BF254:;
  cmpu(c,0,c->r[30],c->r[3]); // 804BF254
  if (crb(c,2)) { goto L_804BF26C; } // 804BF258
  c->r[0]=R8(c->r[30]+0x00000000u); // 804BF25C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF260
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804BF264
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF250; } // 804BF268
L_804BF26C:;
  c->r[0]=c->r[20]+0x0000002Cu; // 804BF26C
  cmpu(c,0,c->r[30],c->r[0]); // 804BF270
  if (crb(c,2)) { goto L_804BF298; } // 804BF274
  c->r[0]=c->r[20]+0x00000024u; // 804BF278
  c->r[3]=c->r[29]+0x00000030u; // 804BF27C
  c->r[0]=c->r[30]-c->r[0]; // 804BF280
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 804BF284
  c->r[4]=c->r[25]|c->r[25]; // 804BF288
  c->lr=0x804BF290u; f_803A5BE4(c); // 804BF28C
  W8(c->r[30]+0x00000000u,c->r[26]); // 804BF290
  goto L_804BF3C0; // 804BF294
L_804BF298:;
  c->r[4]=c->r[28]+0x00000008u; // 804BF298
  c->r[30]=0u+0x00000000u; // 804BF29C
  c->ctr=c->r[19]; // 804BF2A0
L_804BF2A4:;
  c->r[5]=c->r[28]|c->r[28]; // 804BF2A4
  c->r[6]=c->r[20]+c->r[30]; // 804BF2A8
  goto L_804BF2B4; // 804BF2AC
L_804BF2B0:;
  c->r[5]=c->r[5]+0x00000001u; // 804BF2B0
L_804BF2B4:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF2B4
  if (crb(c,2)) { goto L_804BF2D4; } // 804BF2B8
  c->r[3]=R8(c->r[5]+0x00000000u); // 804BF2BC
  c->r[0]=R8(c->r[6]+0x00000024u); // 804BF2C0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804BF2C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF2C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804BF2CC
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF2B0; } // 804BF2D0
L_804BF2D4:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF2D4
  if (crb(c,2)) { goto L_804BF398; } // 804BF2D8
  c->r[30]=c->r[30]+0x00000001u; // 804BF2DC
  c->r[5]=c->r[28]|c->r[28]; // 804BF2E0
  c->r[6]=c->r[20]+c->r[30]; // 804BF2E4
  goto L_804BF2F0; // 804BF2E8
L_804BF2EC:;
  c->r[5]=c->r[5]+0x00000001u; // 804BF2EC
L_804BF2F0:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF2F0
  if (crb(c,2)) { goto L_804BF310; } // 804BF2F4
  c->r[3]=R8(c->r[5]+0x00000000u); // 804BF2F8
  c->r[0]=R8(c->r[6]+0x00000024u); // 804BF2FC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804BF300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF304
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804BF308
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF2EC; } // 804BF30C
L_804BF310:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF310
  if (crb(c,2)) { goto L_804BF398; } // 804BF314
  c->r[30]=c->r[30]+0x00000001u; // 804BF318
  c->r[5]=c->r[28]|c->r[28]; // 804BF31C
  c->r[6]=c->r[20]+c->r[30]; // 804BF320
  goto L_804BF32C; // 804BF324
L_804BF328:;
  c->r[5]=c->r[5]+0x00000001u; // 804BF328
L_804BF32C:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF32C
  if (crb(c,2)) { goto L_804BF34C; } // 804BF330
  c->r[3]=R8(c->r[5]+0x00000000u); // 804BF334
  c->r[0]=R8(c->r[6]+0x00000024u); // 804BF338
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804BF33C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF340
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804BF344
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF328; } // 804BF348
L_804BF34C:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF34C
  if (crb(c,2)) { goto L_804BF398; } // 804BF350
  c->r[30]=c->r[30]+0x00000001u; // 804BF354
  c->r[5]=c->r[28]|c->r[28]; // 804BF358
  c->r[6]=c->r[20]+c->r[30]; // 804BF35C
  goto L_804BF368; // 804BF360
L_804BF364:;
  c->r[5]=c->r[5]+0x00000001u; // 804BF364
L_804BF368:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF368
  if (crb(c,2)) { goto L_804BF388; } // 804BF36C
  c->r[3]=R8(c->r[5]+0x00000000u); // 804BF370
  c->r[0]=R8(c->r[6]+0x00000024u); // 804BF374
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804BF378
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804BF37C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804BF380
  if (!crb(c,2)) { IRQCHK(c); goto L_804BF364; } // 804BF384
L_804BF388:;
  cmpu(c,0,c->r[5],c->r[4]); // 804BF388
  if (crb(c,2)) { goto L_804BF398; } // 804BF38C
  c->r[30]=c->r[30]+0x00000001u; // 804BF390
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BF2A4; } // 804BF394
L_804BF398:;
  c->r[25]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 804BF398
  c->r[3]=c->r[29]+0x00000030u; // 804BF39C
  c->r[4]=c->r[25]|c->r[25]; // 804BF3A0
  c->lr=0x804BF3A8u; f_803A5BE4(c); // 804BF3A4
  c->r[3]=c->r[20]+c->r[30]; // 804BF3A8
  W8(c->r[3]+0x00000024u,c->r[26]); // 804BF3AC
  goto L_804BF3C0; // 804BF3B0
L_804BF3B4:;
  c->r[0]=c->r[20]+0x00000024u; // 804BF3B4
  c->r[0]=c->r[5]-c->r[0]; // 804BF3B8
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 804BF3BC
L_804BF3C0:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 804BF3C0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804BF3C4
  if (crb(c,2)) { goto L_804BF3FC; } // 804BF3C8
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804BF3CC
  if (!crb(c,2)) { goto L_804BF3E0; } // 804BF3D0
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 804BF3D4
  c->r[0]=c->r[0]|c->r[25]; // 804BF3D8
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 804BF3DC
L_804BF3E0:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 804BF3E0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BF3E4
  if (!crb(c,2)) { goto L_804BF428; } // 804BF3E8
  c->r[0]=R32(c->r[20]+0x00000020u); // 804BF3EC
  c->r[0]=c->r[0]|c->r[25]; // 804BF3F0
  W32(c->r[20]+0x00000020u,c->r[0]); // 804BF3F4
  goto L_804BF428; // 804BF3F8
L_804BF3FC:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804BF3FC
  if (!crb(c,2)) { goto L_804BF410; } // 804BF400
  c->r[0]=R32(c->r[20]+0x00000014u); // 804BF404
  c->r[0]=c->r[0]|c->r[25]; // 804BF408
  W32(c->r[20]+0x00000014u,c->r[0]); // 804BF40C
L_804BF410:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 804BF410
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804BF414
  if (!crb(c,2)) { goto L_804BF428; } // 804BF418
  c->r[0]=R32(c->r[20]+0x00000018u); // 804BF41C
  c->r[0]=c->r[0]|c->r[25]; // 804BF420
  W32(c->r[20]+0x00000018u,c->r[0]); // 804BF424
L_804BF428:;
  c->r[27]=c->r[27]+0x00000001u; // 804BF428
  c->r[18]=c->r[18]+0x00000001u; // 804BF42C
  cmpu(c,0,c->r[27],0x00000008u); // 804BF430
  if (crb(c,0)) { IRQCHK(c); goto L_804BF1F0; } // 804BF434
  cmps(c,0,(int32_t)c->r[21],0); // 804BF438
  if (crb(c,2)) { goto L_804BF448; } // 804BF43C
  c->r[0]=R32(c->r[20]+0x00000014u); // 804BF440
  W32(c->r[21]+0x00000000u,c->r[0]); // 804BF444
L_804BF448:;
  cmps(c,0,(int32_t)c->r[22],0); // 804BF448
  if (crb(c,2)) { goto L_804BF458; } // 804BF44C
  c->r[0]=R32(c->r[20]+0x00000018u); // 804BF450
  W32(c->r[22]+0x00000000u,c->r[0]); // 804BF454
L_804BF458:;
  cmps(c,0,(int32_t)c->r[23],0); // 804BF458
  if (crb(c,2)) { goto L_804BF468; } // 804BF45C
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 804BF460
  W32(c->r[23]+0x00000000u,c->r[0]); // 804BF464
L_804BF468:;
  cmps(c,0,(int32_t)c->r[24],0); // 804BF468
  if (crb(c,2)) { goto L_804BF478; } // 804BF46C
  c->r[0]=R32(c->r[20]+0x00000020u); // 804BF470
  W32(c->r[24]+0x00000000u,c->r[0]); // 804BF474
L_804BF478:;
  c->r[11]=c->r[1]+0x00000040u; // 804BF478
  c->lr=0x804BF480u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BF47C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BF480
  c->lr=c->r[0]; // 804BF484
  c->r[1]=c->r[1]+0x00000040u; // 804BF488
  return; // 804BF48C
}

// __ct__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@14CameraMtxStateFv
void f_804BF490(Ctx* __restrict c) {
  trace_call(0x804BF490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BF490
  c->r[0]=c->lr; // 804BF494
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BF498
  c->r[11]=c->r[1]+0x00000020u; // 804BF49C
  c->lr=0x804BF4A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BF4A0
  c->r[0]=0u+0x00000000u; // 804BF4A4
  c->r[26]=c->r[3]|c->r[3]; // 804BF4A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 804BF4AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 804BF4B0
  c->r[3]=c->r[3]+0x00000004u; // 804BF4B4
  c->lr=0x804BF4BCu; f_80382F00(c); // 804BF4B8
  c->r[31]=c->r[26]+0x00000034u; // 804BF4BC
  c->r[30]=c->r[26]+0x00000634u; // 804BF4C0
  c->r[29]=c->r[26]+0x00000E34u; // 804BF4C4
  c->r[28]=c->r[26]+0x00001434u; // 804BF4C8
  c->r[27]=0u+0x00000000u; // 804BF4CC
L_804BF4D0:;
  c->r[3]=c->r[31]|c->r[31]; // 804BF4D0
  c->lr=0x804BF4D8u; f_80382F00(c); // 804BF4D4
  c->r[3]=c->r[30]|c->r[30]; // 804BF4D8
  c->lr=0x804BF4E0u; f_804E1A90(c); // 804BF4DC
  c->r[3]=c->r[29]|c->r[29]; // 804BF4E0
  c->lr=0x804BF4E8u; f_80382F00(c); // 804BF4E4
  c->r[3]=c->r[28]|c->r[28]; // 804BF4E8
  c->lr=0x804BF4F0u; f_80382F00(c); // 804BF4EC
  c->r[27]=c->r[27]+0x00000001u; // 804BF4F0
  c->r[30]=c->r[30]+0x00000040u; // 804BF4F4
  cmpu(c,0,c->r[27],0x00000020u); // 804BF4F8
  c->r[29]=c->r[29]+0x00000030u; // 804BF4FC
  c->r[28]=c->r[28]+0x00000030u; // 804BF500
  c->r[31]=c->r[31]+0x00000030u; // 804BF504
  if (crb(c,0)) { IRQCHK(c); goto L_804BF4D0; } // 804BF508
  c->r[11]=c->r[1]+0x00000020u; // 804BF50C
  c->r[3]=c->r[26]|c->r[26]; // 804BF510
  c->lr=0x804BF518u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BF514
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BF518
  c->lr=c->r[0]; // 804BF51C
  c->r[1]=c->r[1]+0x00000020u; // 804BF520
  return; // 804BF524
}

// LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
void f_804BF528(Ctx* __restrict c) {
  trace_call(0x804BF528u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BF528
  c->r[0]=c->lr; // 804BF52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BF530
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BF534
  cmps(c,0,(int32_t)c->r[0],0); // 804BF538
  if (crb(c,2)) { goto L_804BF588; } // 804BF53C
  c->lr=0x804BF544u; f_804AECBC(c); // 804BF540
  c->r[0]=R32(c->r[13]+0xFFFFE488u); // 804BF544
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804BF548
  if (crb(c,2)) { goto L_804BF564; } // 804BF54C
  c->r[4]=c->r[13]+0xFFFFE488u; // 804BF550
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 804BF554
  c->r[4]=R8(c->r[4]+0x00000004u); // 804BF558
  cmpu(c,0,c->r[4],c->r[0]); // 804BF55C
  if (crb(c,2)) { goto L_804BF588; } // 804BF560
L_804BF564:;
  c->r[0]=R32(c->r[13]+0xFFFFE488u); // 804BF564
  c->r[4]=c->r[13]+0xFFFFE488u; // 804BF568
  W8(c->r[4]+0x00000004u,c->r[3]); // 804BF56C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804BF570
  c->r[0]=c->r[0]|0x00000001u; // 804BF574
  W32(c->r[13]+0xFFFFE488u,c->r[0]); // 804BF578
  c->lr=0x804BF580u; f_803A805C(c); // 804BF57C
  c->r[0]=0u+0x00000001u; // 804BF580
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BF584
L_804BF588:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BF588
  c->lr=c->r[0]; // 804BF58C
  c->r[1]=c->r[1]+0x00000010u; // 804BF590
  return; // 804BF594
}

// LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
void f_804BF598(Ctx* __restrict c) {
  trace_call(0x804BF598u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BF598
  c->r[0]=c->lr; // 804BF59C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BF5A0
  c->r[11]=c->r[1]+0x00000030u; // 804BF5A4
  c->lr=0x804BF5ACu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BF5A8
  c->r[4]=R32(c->r[3]+0x00000000u); // 804BF5AC
  c->r[0]=0u-c->r[4]; // 804BF5B0
  c->r[0]=c->r[0]|c->r[4]; // 804BF5B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804BF5B8
  if (crb(c,2)) { goto L_804BF7E8; } // 804BF5BC
  c->r[3]=0u+0x80810000u; // 804BF5C0
  c->r[25]=0u+0x80810000u; // 804BF5C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 804BF5C8
  c->r[31]=c->r[3]+0xFFFFAC80u; // 804BF5CC
  c->r[26]=c->r[25]+0xFFFFAC0Cu; // 804BF5D0
  c->r[28]=0u+0x00000000u; // 804BF5D4
  c->r[27]=0u+0x00000000u; // 804BF5D8
  c->r[30]=0u+0x00000001u; // 804BF5DC
L_804BF5E0:;
  c->r[4]=c->r[28]|c->r[28]; // 804BF5E0
  c->r[3]=c->r[1]+0x00000008u; // 804BF5E4
  c->lr=0x804BF5ECu; f_804AE840(c); // 804BF5E8
  cmps(c,0,(int32_t)c->r[3],0); // 804BF5EC
  if (crb(c,2)) { goto L_804BF7D0; } // 804BF5F0
  c->r[4]=c->r[28]|c->r[28]; // 804BF5F4
  c->r[3]=c->r[1]+0x00000008u; // 804BF5F8
  c->lr=0x804BF600u; f_804AE7D8(c); // 804BF5FC
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 804BF600
  c->r[4]=R8(c->r[31]+0x00000100u); // 804BF604
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804BF608
  c->r[29]=c->r[3]|c->r[3]; // 804BF60C
  c->r[4]=c->r[4]&c->r[0]; cr0(c,c->r[4]); // 804BF610
  if (crb(c,2)) { goto L_804BF73C; } // 804BF614
  c->r[9]=R32(c->r[3]+0x00000000u); // 804BF618
  c->r[4]=0u+0x00000000u; // 804BF61C
  c->r[8]=R32(c->r[31]+c->r[27]); // 804BF620
  c->r[5]=0u+0x00000000u; // 804BF624
  c->r[6]=0u+0x00000000u; // 804BF628
  c->r[7]=0u+0x00000000u; // 804BF62C
  cmpu(c,0,c->r[9],c->r[8]); // 804BF630
  c->r[10]=0u+0x00000000u; // 804BF634
  c->r[11]=0u+0x00000000u; // 804BF638
  c->r[12]=0u+0x00000000u; // 804BF63C
  if (!crb(c,2)) { goto L_804BF65C; } // 804BF640
  c->r[8]=c->r[31]+c->r[27]; // 804BF644
  c->r[9]=R32(c->r[3]+0x00000004u); // 804BF648
  c->r[8]=R32(c->r[8]+0x00000004u); // 804BF64C
  cmpu(c,0,c->r[9],c->r[8]); // 804BF650
  if (!crb(c,2)) { goto L_804BF65C; } // 804BF654
  c->r[12]=0u+0x00000001u; // 804BF658
L_804BF65C:;
  cmps(c,0,(int32_t)c->r[12],0); // 804BF65C
  if (crb(c,2)) { goto L_804BF680; } // 804BF660
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF664
  c->r[9]=R32(c->r[3]+0x00000008u); // 804BF668
  c->r[8]=c->r[31]+c->r[8]; // 804BF66C
  c->r[8]=R32(c->r[8]+0x00000008u); // 804BF670
  cmpu(c,0,c->r[9],c->r[8]); // 804BF674
  if (!crb(c,2)) { goto L_804BF680; } // 804BF678
  c->r[11]=0u+0x00000001u; // 804BF67C
L_804BF680:;
  cmps(c,0,(int32_t)c->r[11],0); // 804BF680
  if (crb(c,2)) { goto L_804BF6A4; } // 804BF684
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF688
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 804BF68C
  c->r[8]=c->r[31]+c->r[8]; // 804BF690
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 804BF694
  cmpu(c,0,c->r[9],c->r[8]); // 804BF698
  if (!crb(c,2)) { goto L_804BF6A4; } // 804BF69C
  c->r[10]=0u+0x00000001u; // 804BF6A0
L_804BF6A4:;
  cmps(c,0,(int32_t)c->r[10],0); // 804BF6A4
  if (crb(c,2)) { goto L_804BF6C8; } // 804BF6A8
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF6AC
  c->r[9]=R32(c->r[3]+0x00000010u); // 804BF6B0
  c->r[8]=c->r[31]+c->r[8]; // 804BF6B4
  c->r[8]=R32(c->r[8]+0x00000010u); // 804BF6B8
  cmpu(c,0,c->r[9],c->r[8]); // 804BF6BC
  if (!crb(c,2)) { goto L_804BF6C8; } // 804BF6C0
  c->r[7]=0u+0x00000001u; // 804BF6C4
L_804BF6C8:;
  cmps(c,0,(int32_t)c->r[7],0); // 804BF6C8
  if (crb(c,2)) { goto L_804BF6EC; } // 804BF6CC
  c->r[7]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF6D0
  c->r[8]=R32(c->r[3]+0x00000014u); // 804BF6D4
  c->r[7]=c->r[31]+c->r[7]; // 804BF6D8
  c->r[7]=R32(c->r[7]+0x00000014u); // 804BF6DC
  cmpu(c,0,c->r[8],c->r[7]); // 804BF6E0
  if (!crb(c,2)) { goto L_804BF6EC; } // 804BF6E4
  c->r[6]=0u+0x00000001u; // 804BF6E8
L_804BF6EC:;
  cmps(c,0,(int32_t)c->r[6],0); // 804BF6EC
  if (crb(c,2)) { goto L_804BF710; } // 804BF6F0
  c->r[6]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF6F4
  c->r[7]=R32(c->r[3]+0x00000018u); // 804BF6F8
  c->r[6]=c->r[31]+c->r[6]; // 804BF6FC
  c->r[6]=R32(c->r[6]+0x00000018u); // 804BF700
  cmpu(c,0,c->r[7],c->r[6]); // 804BF704
  if (!crb(c,2)) { goto L_804BF710; } // 804BF708
  c->r[5]=0u+0x00000001u; // 804BF70C
L_804BF710:;
  cmps(c,0,(int32_t)c->r[5],0); // 804BF710
  if (crb(c,2)) { goto L_804BF734; } // 804BF714
  c->r[5]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF718
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 804BF71C
  c->r[5]=c->r[31]+c->r[5]; // 804BF720
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 804BF724
  cmpu(c,0,c->r[6],c->r[5]); // 804BF728
  if (!crb(c,2)) { goto L_804BF734; } // 804BF72C
  c->r[4]=0u+0x00000001u; // 804BF730
L_804BF734:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BF734
  if (!crb(c,2)) { goto L_804BF7D0; } // 804BF738
L_804BF73C:;
  c->r[5]=R8(c->r[31]+0x00000100u); // 804BF73C
  c->r[4]=rotl(c->r[28],5)&0xFFFFFFE0u; // 804BF740
  c->r[6]=c->r[31]+c->r[4]; // 804BF744
  c->r[0]=c->r[5]|c->r[0]; // 804BF748
  c->r[4]=c->r[28]|c->r[28]; // 804BF74C
  W8(c->r[31]+0x00000100u,c->r[0]); // 804BF750
  c->r[5]=R32(c->r[3]+0x00000000u); // 804BF754
  c->r[0]=R32(c->r[3]+0x00000004u); // 804BF758
  W32(c->r[6]+0x00000000u,c->r[5]); // 804BF75C
  W32(c->r[6]+0x00000004u,c->r[0]); // 804BF760
  c->r[5]=R32(c->r[3]+0x00000008u); // 804BF764
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BF768
  W32(c->r[6]+0x00000008u,c->r[5]); // 804BF76C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 804BF770
  c->r[5]=R32(c->r[3]+0x00000010u); // 804BF774
  c->r[0]=R32(c->r[3]+0x00000014u); // 804BF778
  W32(c->r[6]+0x00000010u,c->r[5]); // 804BF77C
  W32(c->r[6]+0x00000014u,c->r[0]); // 804BF780
  c->r[5]=R32(c->r[3]+0x00000018u); // 804BF784
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804BF788
  c->r[3]=c->r[29]|c->r[29]; // 804BF78C
  W32(c->r[6]+0x00000018u,c->r[5]); // 804BF790
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 804BF794
  c->lr=0x804BF79Cu; f_803A6784(c); // 804BF798
  c->r[3]=c->r[29]|c->r[29]; // 804BF79C
  c->lr=0x804BF7A4u; f_803A64F4(c); // 804BF7A0
  c->r[24]=c->r[3]|c->r[3]; // 804BF7A4
  c->r[3]=c->r[29]|c->r[29]; // 804BF7A8
  c->lr=0x804BF7B0u; f_803A64E0(c); // 804BF7AC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 804BF7B0
  c->r[4]=c->r[26]+c->r[0]; // 804BF7B4
  W16(c->r[4]+0x00000004u,c->r[3]); // 804BF7B8
  W16(c->r[4]+0x00000006u,c->r[24]); // 804BF7BC
  c->r[0]=R32(c->r[25]+0xFFFFAC0Cu); // 804BF7C0
  c->r[0]=c->r[0]|0x00000002u; // 804BF7C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804BF7C8
  W32(c->r[25]+0xFFFFAC0Cu,c->r[0]); // 804BF7CC
L_804BF7D0:;
  c->r[28]=c->r[28]+0x00000001u; // 804BF7D0
  c->r[27]=c->r[27]+0x00000020u; // 804BF7D4
  cmpu(c,0,c->r[28],0x00000008u); // 804BF7D8
  if (crb(c,0)) { IRQCHK(c); goto L_804BF5E0; } // 804BF7DC
  c->r[0]=0u+0x00000001u; // 804BF7E0
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BF7E4
L_804BF7E8:;
  c->r[11]=c->r[1]+0x00000030u; // 804BF7E8
  c->lr=0x804BF7F0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BF7EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BF7F0
  c->lr=c->r[0]; // 804BF7F4
  c->r[1]=c->r[1]+0x00000030u; // 804BF7F8
  return; // 804BF7FC
}

// LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
void f_804BF800(Ctx* __restrict c) {
  trace_call(0x804BF800u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BF800
  c->r[0]=c->lr; // 804BF804
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BF808
  c->r[11]=c->r[1]+0x00000030u; // 804BF80C
  c->lr=0x804BF814u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BF810
  c->r[3]=R32(c->r[3]+0x00000000u); // 804BF814
  c->r[0]=0u-c->r[3]; // 804BF818
  c->r[0]=c->r[0]|c->r[3]; // 804BF81C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804BF820
  if (crb(c,2)) { goto L_804BF934; } // 804BF824
  c->r[27]=0u+0x80810000u; // 804BF828
  c->r[28]=0u+0x80810000u; // 804BF82C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804BF830
  c->r[27]=c->r[27]+0xFFFFADA0u; // 804BF834
  c->r[28]=c->r[28]+0xFFFFAC80u; // 804BF838
  c->r[30]=0u+0x00000000u; // 804BF83C
  c->r[29]=0u+0x00000000u; // 804BF840
  c->r[31]=0u+0x00000001u; // 804BF844
L_804BF848:;
  c->r[4]=c->r[30]|c->r[30]; // 804BF848
  c->r[3]=c->r[1]+0x00000008u; // 804BF84C
  c->lr=0x804BF854u; f_804AE9A8(c); // 804BF850
  cmps(c,0,(int32_t)c->r[3],0); // 804BF854
  if (crb(c,2)) { goto L_804BF91C; } // 804BF858
  c->r[4]=c->r[30]|c->r[30]; // 804BF85C
  c->r[3]=c->r[1]+0x00000008u; // 804BF860
  c->lr=0x804BF868u; f_804AE940(c); // 804BF864
  c->r[4]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 804BF868
  c->r[0]=R16(c->r[27]+0x00000060u); // 804BF86C
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 804BF870
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 804BF874
  if (crb(c,2)) { goto L_804BF8D8; } // 804BF878
  c->r[4]=R32(c->r[3]+0x00000000u); // 804BF87C
  c->r[7]=0u+0x00000000u; // 804BF880
  c->r[0]=R32(c->r[27]+c->r[29]); // 804BF884
  c->r[8]=0u+0x00000000u; // 804BF888
  cmpu(c,0,c->r[4],c->r[0]); // 804BF88C
  if (!crb(c,2)) { goto L_804BF8AC; } // 804BF890
  c->r[4]=c->r[27]+c->r[29]; // 804BF894
  c->r[5]=R32(c->r[3]+0x00000004u); // 804BF898
  c->r[0]=R32(c->r[4]+0x00000004u); // 804BF89C
  cmpu(c,0,c->r[5],c->r[0]); // 804BF8A0
  if (!crb(c,2)) { goto L_804BF8AC; } // 804BF8A4
  c->r[8]=0u+0x00000001u; // 804BF8A8
L_804BF8AC:;
  cmps(c,0,(int32_t)c->r[8],0); // 804BF8AC
  if (crb(c,2)) { goto L_804BF8D0; } // 804BF8B0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 804BF8B4
  c->r[5]=R32(c->r[3]+0x00000008u); // 804BF8B8
  c->r[4]=c->r[27]+c->r[0]; // 804BF8BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BF8C0
  cmpu(c,0,c->r[5],c->r[0]); // 804BF8C4
  if (!crb(c,2)) { goto L_804BF8D0; } // 804BF8C8
  c->r[7]=0u+0x00000001u; // 804BF8CC
L_804BF8D0:;
  cmps(c,0,(int32_t)c->r[7],0); // 804BF8D0
  if (!crb(c,2)) { goto L_804BF91C; } // 804BF8D4
L_804BF8D8:;
  c->r[5]=R16(c->r[27]+0x00000060u); // 804BF8D8
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 804BF8DC
  c->r[4]=c->r[30]|c->r[30]; // 804BF8E0
  c->r[5]=c->r[5]|c->r[6]; // 804BF8E4
  W16(c->r[27]+0x00000060u,c->r[5]); // 804BF8E8
  c->r[6]=c->r[27]+c->r[0]; // 804BF8EC
  c->r[5]=R32(c->r[3]+0x00000000u); // 804BF8F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804BF8F4
  W32(c->r[6]+0x00000000u,c->r[5]); // 804BF8F8
  W32(c->r[6]+0x00000004u,c->r[0]); // 804BF8FC
  c->r[0]=R32(c->r[3]+0x00000008u); // 804BF900
  W32(c->r[6]+0x00000008u,c->r[0]); // 804BF904
  c->lr=0x804BF90Cu; f_803A6800(c); // 804BF908
  c->r[3]=R8(c->r[28]+0x00000100u); // 804BF90C
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 804BF910
  c->r[0]=c->r[3]&~c->r[0]; // 804BF914
  W8(c->r[28]+0x00000100u,c->r[0]); // 804BF918
L_804BF91C:;
  c->r[30]=c->r[30]+0x00000001u; // 804BF91C
  c->r[29]=c->r[29]+0x0000000Cu; // 804BF920
  cmpu(c,0,c->r[30],0x00000008u); // 804BF924
  if (crb(c,0)) { IRQCHK(c); goto L_804BF848; } // 804BF928
  c->r[0]=0u+0x00000001u; // 804BF92C
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BF930
L_804BF934:;
  c->r[11]=c->r[1]+0x00000030u; // 804BF934
  c->lr=0x804BF93Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BF938
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BF93C
  c->lr=c->r[0]; // 804BF940
  c->r[1]=c->r[1]+0x00000030u; // 804BF944
  return; // 804BF948
}

// LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
void f_804BF94C(Ctx* __restrict c) {
  trace_call(0x804BF94Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804BF94C
  cmps(c,0,(int32_t)c->r[3],0); // 804BF950
  if (crb(c,2)) return; // 804BF954
  c->r[4]=0u+0x80810000u; // 804BF958
  c->r[4]=R8(c->r[4]+0xFFFFAC00u); // 804BF95C
  if (crb(c,2)) { goto L_804BF96C; } // 804BF960
  c->r[0]=R8(c->r[3]+0x00000000u); // 804BF964
  goto L_804BF970; // 804BF968
L_804BF96C:;
  c->r[0]=0u+0x00000000u; // 804BF96C
L_804BF970:;
  cmpu(c,0,c->r[4],c->r[0]); // 804BF970
  if (crb(c,2)) { goto L_804BF9A4; } // 804BF974
  cmps(c,0,(int32_t)c->r[3],0); // 804BF978
  if (crb(c,2)) { goto L_804BF988; } // 804BF97C
  c->r[0]=R8(c->r[3]+0x00000000u); // 804BF980
  goto L_804BF98C; // 804BF984
L_804BF988:;
  c->r[0]=0u+0x00000000u; // 804BF988
L_804BF98C:;
  c->r[5]=0u+0x80810000u; // 804BF98C
  c->r[4]=c->r[5]+0xFFFFAC00u; // 804BF990
  W8(c->r[5]+0xFFFFAC00u,c->r[0]); // 804BF994
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BF998
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BF99C
  W32(c->r[4]+0x00000008u,c->r[0]); // 804BF9A0
L_804BF9A4:;
  c->r[4]=0u+0x80810000u; // 804BF9A4
  cmps(c,0,(int32_t)c->r[3],0); // 804BF9A8
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BF9AC
  c->r[4]=R8(c->r[4]+0x00000001u); // 804BF9B0
  if (crb(c,2)) { goto L_804BF9C0; } // 804BF9B4
  c->r[0]=R8(c->r[3]+0x00000001u); // 804BF9B8
  goto L_804BF9C4; // 804BF9BC
L_804BF9C0:;
  c->r[0]=0u+0x00000000u; // 804BF9C0
L_804BF9C4:;
  cmpu(c,0,c->r[4],c->r[0]); // 804BF9C4
  if (crb(c,2)) { goto L_804BF9F8; } // 804BF9C8
  cmps(c,0,(int32_t)c->r[3],0); // 804BF9CC
  if (crb(c,2)) { goto L_804BF9DC; } // 804BF9D0
  c->r[5]=R8(c->r[3]+0x00000001u); // 804BF9D4
  goto L_804BF9E0; // 804BF9D8
L_804BF9DC:;
  c->r[5]=0u+0x00000000u; // 804BF9DC
L_804BF9E0:;
  c->r[4]=0u+0x80810000u; // 804BF9E0
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BF9E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BF9E8
  W8(c->r[4]+0x00000001u,c->r[5]); // 804BF9EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804BF9F0
  W32(c->r[4]+0x00000008u,c->r[0]); // 804BF9F4
L_804BF9F8:;
  c->r[4]=0u+0x80810000u; // 804BF9F8
  cmps(c,0,(int32_t)c->r[3],0); // 804BF9FC
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFA00
  c->r[4]=R8(c->r[4]+0x00000002u); // 804BFA04
  if (crb(c,2)) { goto L_804BFA14; } // 804BFA08
  c->r[0]=R8(c->r[3]+0x00000002u); // 804BFA0C
  goto L_804BFA18; // 804BFA10
L_804BFA14:;
  c->r[0]=0u+0x00000000u; // 804BFA14
L_804BFA18:;
  cmpu(c,0,c->r[4],c->r[0]); // 804BFA18
  if (crb(c,2)) { goto L_804BFA4C; } // 804BFA1C
  cmps(c,0,(int32_t)c->r[3],0); // 804BFA20
  if (crb(c,2)) { goto L_804BFA30; } // 804BFA24
  c->r[5]=R8(c->r[3]+0x00000002u); // 804BFA28
  goto L_804BFA34; // 804BFA2C
L_804BFA30:;
  c->r[5]=0u+0x00000000u; // 804BFA30
L_804BFA34:;
  c->r[4]=0u+0x80810000u; // 804BFA34
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFA38
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BFA3C
  W8(c->r[4]+0x00000002u,c->r[5]); // 804BFA40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804BFA44
  W32(c->r[4]+0x00000008u,c->r[0]); // 804BFA48
L_804BFA4C:;
  c->r[4]=0u+0x80810000u; // 804BFA4C
  cmps(c,0,(int32_t)c->r[3],0); // 804BFA50
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFA54
  c->r[4]=R8(c->r[4]+0x00000003u); // 804BFA58
  if (crb(c,2)) { goto L_804BFA68; } // 804BFA5C
  c->r[0]=R8(c->r[3]+0x00000003u); // 804BFA60
  goto L_804BFA6C; // 804BFA64
L_804BFA68:;
  c->r[0]=0u+0x00000000u; // 804BFA68
L_804BFA6C:;
  cmpu(c,0,c->r[4],c->r[0]); // 804BFA6C
  if (crb(c,2)) { goto L_804BFAA0; } // 804BFA70
  cmps(c,0,(int32_t)c->r[3],0); // 804BFA74
  if (crb(c,2)) { goto L_804BFA84; } // 804BFA78
  c->r[5]=R8(c->r[3]+0x00000003u); // 804BFA7C
  goto L_804BFA88; // 804BFA80
L_804BFA84:;
  c->r[5]=0u+0x00000000u; // 804BFA84
L_804BFA88:;
  c->r[4]=0u+0x80810000u; // 804BFA88
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFA8C
  c->r[0]=R32(c->r[4]+0x00000008u); // 804BFA90
  W8(c->r[4]+0x00000003u,c->r[5]); // 804BFA94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804BFA98
  W32(c->r[4]+0x00000008u,c->r[0]); // 804BFA9C
L_804BFAA0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BFAA0
  if (crb(c,2)) { goto L_804BFAB0; } // 804BFAA4
  c->r[5]=R32(c->r[3]+0x00000004u); // 804BFAA8
  goto L_804BFAB4; // 804BFAAC
L_804BFAB0:;
  c->r[5]=0u+0x00000003u; // 804BFAB0
L_804BFAB4:;
  c->r[4]=0u+0x80810000u; // 804BFAB4
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFAB8
  c->r[0]=R32(c->r[4]+0x00000004u); // 804BFABC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804BFAC0
  if (crb(c,2)) { goto L_804BFAF4; } // 804BFAC4
  cmps(c,0,(int32_t)c->r[3],0); // 804BFAC8
  if (crb(c,2)) { goto L_804BFAD8; } // 804BFACC
  c->r[4]=R32(c->r[3]+0x00000004u); // 804BFAD0
  goto L_804BFADC; // 804BFAD4
L_804BFAD8:;
  c->r[4]=0u+0x00000003u; // 804BFAD8
L_804BFADC:;
  c->r[3]=0u+0x80810000u; // 804BFADC
  c->r[3]=c->r[3]+0xFFFFAC00u; // 804BFAE0
  c->r[0]=R32(c->r[3]+0x00000008u); // 804BFAE4
  W32(c->r[3]+0x00000004u,c->r[4]); // 804BFAE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804BFAEC
  W32(c->r[3]+0x00000008u,c->r[0]); // 804BFAF0
L_804BFAF4:;
  c->r[4]=0u+0x80810000u; // 804BFAF4
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFAF8
  c->r[3]=R32(c->r[4]+0x00000008u); // 804BFAFC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804BFB00
  if (!crb(c,2)) return; // 804BFB04
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFCu; // 804BFB08
  c->r[0]=c->r[0]|0x00000004u; // 804BFB0C
  W32(c->r[4]+0x00000008u,c->r[0]); // 804BFB10
  return; // 804BFB14
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
void f_804BFB18(Ctx* __restrict c) {
  trace_call(0x804BFB18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BFB18
  c->r[0]=c->lr; // 804BFB1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BFB20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BFB24
  c->r[31]=c->r[3]|c->r[3]; // 804BFB28
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BFB2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BFB30
  c->r[4]=R32(c->r[3]+0x00000000u); // 804BFB34
  cmps(c,0,(int32_t)c->r[4],0); // 804BFB38
  if (crb(c,2)) { goto L_804BFD0C; } // 804BFB3C
  c->r[0]=R32(c->r[13]+0xFFFFE47Cu); // 804BFB40
  cmpu(c,0,c->r[4],c->r[0]); // 804BFB44
  if (!crb(c,2)) { goto L_804BFB54; } // 804BFB48
  c->r[0]=0u+0x00000001u; // 804BFB4C
  goto L_804BFB5C; // 804BFB50
L_804BFB54:;
  W32(c->r[13]+0xFFFFE47Cu,c->r[4]); // 804BFB54
  c->r[0]=0u+0x00000000u; // 804BFB58
L_804BFB5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804BFB5C
  if (!crb(c,2)) { goto L_804BFD0C; } // 804BFB60
  c->r[9]=0u+0x80810000u; // 804BFB64
  c->r[8]=c->r[9]+0xFFFFAC00u; // 804BFB68
  c->r[3]=R32(c->r[8]+0x00000008u); // 804BFB6C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804BFB70
  if (crb(c,2)) { goto L_804BFBF0; } // 804BFB74
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 804BFB78
  cmpu(c,0,c->r[0],0x00000002u); // 804BFB7C
  if (!crb(c,2)) { goto L_804BFBF0; } // 804BFB80
  c->r[5]=R32(c->r[8]+0x00000004u); // 804BFB84
  c->r[3]=0u+0xFE080000u; // 804BFB88
  c->r[7]=0u+0xCC010000u; // 804BFB8C
  c->r[4]=0u+0x00000061u; // 804BFB90
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 804BFB94
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 804BFB98
  c->r[3]=c->r[2]+0x00001610u; // 804BFB9C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BFBA0
  c->r[0]=R8(c->r[3]+c->r[5]); // 804BFBA4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 804BFBA8
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 804BFBAC
  c->r[3]=R8(c->r[8]+0x00000002u); // 804BFBB0
  c->r[0]=R8(c->r[8]+0x00000001u); // 804BFBB4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 804BFBB8
  c->r[6]=R8(c->r[8]+0x00000003u); // 804BFBBC
  c->r[3]=R8(c->r[9]+0xFFFFAC00u); // 804BFBC0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BFBC4
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 804BFBC8
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 804BFBCC
  c->r[0]=c->r[3]|c->r[0]; // 804BFBD0
  c->r[3]=c->r[6]|c->r[5]; // 804BFBD4
  c->r[0]=c->r[4]|c->r[0]; // 804BFBD8
  c->r[0]=c->r[3]|c->r[0]; // 804BFBDC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BFBE0
  c->r[0]=R32(c->r[8]+0x00000008u); // 804BFBE4
  c->r[0]=c->r[0]|0x00000001u; // 804BFBE8
  W32(c->r[8]+0x00000008u,c->r[0]); // 804BFBEC
L_804BFBF0:;
  c->r[4]=R8(c->r[13]+0xFFFFE470u); // 804BFBF0
  c->r[0]=0u+0x00000000u; // 804BFBF4
  c->r[3]=c->r[31]|c->r[31]; // 804BFBF8
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BFBFC
  c->lr=0x804BFC04u; f_804AE524(c); // 804BFC00
  c->r[3]=0u+0x80810000u; // 804BFC04
  c->r[6]=R32(c->r[31]+0x00000000u); // 804BFC08
  c->r[0]=R32(c->r[3]+0xFFFFAC0Cu); // 804BFC0C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804BFC10
  if (crb(c,2)) { goto L_804BFC3C; } // 804BFC14
  c->r[4]=c->r[3]+0xFFFFAC0Cu; // 804BFC18
  c->r[3]=R32(c->r[6]+0x00000010u); // 804BFC1C
  c->r[0]=R32(c->r[4]+0x00000064u); // 804BFC20
  cmpu(c,0,c->r[3],c->r[0]); // 804BFC24
  if (!crb(c,2)) { goto L_804BFC3C; } // 804BFC28
  c->r[3]=R32(c->r[6]+0x00000014u); // 804BFC2C
  c->r[0]=R32(c->r[4]+0x00000068u); // 804BFC30
  cmpu(c,0,c->r[3],c->r[0]); // 804BFC34
  if (crb(c,2)) { goto L_804BFC64; } // 804BFC38
L_804BFC3C:;
  c->r[5]=0u+0x80810000u; // 804BFC3C
  c->r[3]=R32(c->r[6]+0x00000010u); // 804BFC40
  c->r[4]=c->r[5]+0xFFFFAC0Cu; // 804BFC44
  c->r[0]=R32(c->r[5]+0xFFFFAC0Cu); // 804BFC48
  W32(c->r[4]+0x00000064u,c->r[3]); // 804BFC4C
  c->r[0]=c->r[0]|0x00000002u; // 804BFC50
  c->r[3]=R32(c->r[6]+0x00000014u); // 804BFC54
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804BFC58
  W32(c->r[4]+0x00000068u,c->r[3]); // 804BFC5C
  W32(c->r[5]+0xFFFFAC0Cu,c->r[0]); // 804BFC60
L_804BFC64:;
  c->r[3]=0u+0x80810000u; // 804BFC64
  c->r[4]=0u+0x80810000u; // 804BFC68
  c->r[5]=R32(c->r[3]+0xFFFFAC0Cu); // 804BFC6C
  c->r[29]=R8(c->r[4]+0xFFFFAC00u); // 804BFC70
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804BFC74
  if (crb(c,2)) { goto L_804BFD0C; } // 804BFC78
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 804BFC7C
  if (!crb(c,2)) { goto L_804BFD0C; } // 804BFC80
  cmps(c,0,(int32_t)c->r[29],0); // 804BFC84
  if (crb(c,2)) { goto L_804BFD0C; } // 804BFC88
  c->r[31]=c->r[3]+0xFFFFAC0Cu; // 804BFC8C
  c->r[30]=0u+0x00000000u; // 804BFC90
  goto L_804BFCF0; // 804BFC94
L_804BFC98:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 804BFC98
  c->r[7]=c->r[31]+c->r[3]; // 804BFC9C
  c->r[0]=R8(c->r[7]+0x00000064u); // 804BFCA0
  cmpu(c,0,c->r[0],0x000000FFu); // 804BFCA4
  if (crb(c,2)) { goto L_804BFCEC; } // 804BFCA8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 804BFCAC
  c->r[5]=rotl(c->r[30],3)&0x000007F8u; // 804BFCB0
  c->r[4]=c->r[31]+c->r[0]; // 804BFCB4
  c->r[6]=0u+0x00000000u; // 804BFCB8
  c->r[4]=R16(c->r[4]+0x00000004u); // 804BFCBC
  c->r[10]=c->r[31]+c->r[5]; // 804BFCC0
  c->r[5]=0u+0x00000000u; // 804BFCC4
  c->r[8]=0u+0x00000000u; // 804BFCC8
  W16(c->r[10]+0x00000024u,c->r[4]); // 804BFCCC
  c->r[9]=0u+0x00000000u; // 804BFCD0
  c->r[0]=R8(c->r[7]+0x00000064u); // 804BFCD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804BFCD8
  c->r[7]=c->r[31]+c->r[0]; // 804BFCDC
  c->r[7]=R16(c->r[7]+0x00000006u); // 804BFCE0
  W16(c->r[10]+0x00000026u,c->r[7]); // 804BFCE4
  c->lr=0x804BFCECu; f_804BDCB0(c); // 804BFCE8
L_804BFCEC:;
  c->r[30]=c->r[30]+0x00000001u; // 804BFCEC
L_804BFCF0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 804BFCF0
  cmpu(c,0,c->r[0],c->r[29]); // 804BFCF4
  if (crb(c,0)) { IRQCHK(c); goto L_804BFC98; } // 804BFCF8
  c->r[3]=0u+0x80810000u; // 804BFCFC
  c->r[0]=R32(c->r[3]+0xFFFFAC0Cu); // 804BFD00
  c->r[0]=c->r[0]|0x00000001u; // 804BFD04
  W32(c->r[3]+0xFFFFAC0Cu,c->r[0]); // 804BFD08
L_804BFD0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BFD0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BFD10
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BFD14
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BFD18
  c->lr=c->r[0]; // 804BFD1C
  c->r[1]=c->r[1]+0x00000020u; // 804BFD20
  return; // 804BFD24
}

// LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
void f_804BFD28(Ctx* __restrict c) {
  trace_call(0x804BFD28u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BFD28
  cmps(c,0,(int32_t)c->r[0],0); // 804BFD2C
  if (crb(c,2)) return; // 804BFD30
  c->r[10]=0u+0x80810000u; // 804BFD34
  c->r[9]=c->r[10]+0xFFFFAC00u; // 804BFD38
  c->r[4]=R32(c->r[9]+0x00000008u); // 804BFD3C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804BFD40
  if (crb(c,2)) { goto L_804BFDC0; } // 804BFD44
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804BFD48
  cmpu(c,0,c->r[0],0x00000002u); // 804BFD4C
  if (!crb(c,2)) { goto L_804BFDC0; } // 804BFD50
  c->r[6]=R32(c->r[9]+0x00000004u); // 804BFD54
  c->r[4]=0u+0xFE080000u; // 804BFD58
  c->r[8]=0u+0xCC010000u; // 804BFD5C
  c->r[5]=0u+0x00000061u; // 804BFD60
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFD64
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 804BFD68
  c->r[4]=c->r[2]+0x00001610u; // 804BFD6C
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFD70
  c->r[0]=R8(c->r[4]+c->r[6]); // 804BFD74
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFD78
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 804BFD7C
  c->r[4]=R8(c->r[9]+0x00000002u); // 804BFD80
  c->r[0]=R8(c->r[9]+0x00000001u); // 804BFD84
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 804BFD88
  c->r[7]=R8(c->r[9]+0x00000003u); // 804BFD8C
  c->r[4]=R8(c->r[10]+0xFFFFAC00u); // 804BFD90
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BFD94
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 804BFD98
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 804BFD9C
  c->r[0]=c->r[4]|c->r[0]; // 804BFDA0
  c->r[4]=c->r[7]|c->r[6]; // 804BFDA4
  c->r[0]=c->r[5]|c->r[0]; // 804BFDA8
  c->r[0]=c->r[4]|c->r[0]; // 804BFDAC
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFDB0
  c->r[0]=R32(c->r[9]+0x00000008u); // 804BFDB4
  c->r[0]=c->r[0]|0x00000001u; // 804BFDB8
  W32(c->r[9]+0x00000008u,c->r[0]); // 804BFDBC
L_804BFDC0:;
  c->r[4]=R8(c->r[13]+0xFFFFE470u); // 804BFDC0
  c->r[0]=0u+0x00000000u; // 804BFDC4
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BFDC8
  f_804AE688(c); return; // 804BFDCC
  return; // 804BFDD0
}

// LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
void f_804BFDD4(Ctx* __restrict c) {
  trace_call(0x804BFDD4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BFDD4
  cmps(c,0,(int32_t)c->r[0],0); // 804BFDD8
  if (crb(c,2)) return; // 804BFDDC
  c->r[10]=0u+0x80810000u; // 804BFDE0
  c->r[9]=c->r[10]+0xFFFFAC00u; // 804BFDE4
  c->r[4]=R32(c->r[9]+0x00000008u); // 804BFDE8
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804BFDEC
  if (crb(c,2)) { goto L_804BFE6C; } // 804BFDF0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804BFDF4
  cmpu(c,0,c->r[0],0x00000002u); // 804BFDF8
  if (!crb(c,2)) { goto L_804BFE6C; } // 804BFDFC
  c->r[6]=R32(c->r[9]+0x00000004u); // 804BFE00
  c->r[4]=0u+0xFE080000u; // 804BFE04
  c->r[8]=0u+0xCC010000u; // 804BFE08
  c->r[5]=0u+0x00000061u; // 804BFE0C
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFE10
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 804BFE14
  c->r[4]=c->r[2]+0x00001610u; // 804BFE18
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFE1C
  c->r[0]=R8(c->r[4]+c->r[6]); // 804BFE20
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFE24
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 804BFE28
  c->r[4]=R8(c->r[9]+0x00000002u); // 804BFE2C
  c->r[0]=R8(c->r[9]+0x00000001u); // 804BFE30
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 804BFE34
  c->r[7]=R8(c->r[9]+0x00000003u); // 804BFE38
  c->r[4]=R8(c->r[10]+0xFFFFAC00u); // 804BFE3C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BFE40
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 804BFE44
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 804BFE48
  c->r[0]=c->r[4]|c->r[0]; // 804BFE4C
  c->r[4]=c->r[7]|c->r[6]; // 804BFE50
  c->r[0]=c->r[5]|c->r[0]; // 804BFE54
  c->r[0]=c->r[4]|c->r[0]; // 804BFE58
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFE5C
  c->r[0]=R32(c->r[9]+0x00000008u); // 804BFE60
  c->r[0]=c->r[0]|0x00000001u; // 804BFE64
  W32(c->r[9]+0x00000008u,c->r[0]); // 804BFE68
L_804BFE6C:;
  c->r[4]=R8(c->r[13]+0xFFFFE470u); // 804BFE6C
  c->r[0]=0u+0x00000000u; // 804BFE70
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BFE74
  f_804AE6B8(c); return; // 804BFE78
  return; // 804BFE7C
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
void f_804BFE80(Ctx* __restrict c) {
  trace_call(0x804BFE80u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BFE80
  cmps(c,0,(int32_t)c->r[0],0); // 804BFE84
  if (crb(c,2)) return; // 804BFE88
  c->r[10]=0u+0x80810000u; // 804BFE8C
  c->r[9]=c->r[10]+0xFFFFAC00u; // 804BFE90
  c->r[4]=R32(c->r[9]+0x00000008u); // 804BFE94
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804BFE98
  if (crb(c,2)) { goto L_804BFF18; } // 804BFE9C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804BFEA0
  cmpu(c,0,c->r[0],0x00000002u); // 804BFEA4
  if (!crb(c,2)) { goto L_804BFF18; } // 804BFEA8
  c->r[6]=R32(c->r[9]+0x00000004u); // 804BFEAC
  c->r[4]=0u+0xFE080000u; // 804BFEB0
  c->r[8]=0u+0xCC010000u; // 804BFEB4
  c->r[5]=0u+0x00000061u; // 804BFEB8
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFEBC
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 804BFEC0
  c->r[4]=c->r[2]+0x00001610u; // 804BFEC4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFEC8
  c->r[0]=R8(c->r[4]+c->r[6]); // 804BFECC
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 804BFED0
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 804BFED4
  c->r[4]=R8(c->r[9]+0x00000002u); // 804BFED8
  c->r[0]=R8(c->r[9]+0x00000001u); // 804BFEDC
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 804BFEE0
  c->r[7]=R8(c->r[9]+0x00000003u); // 804BFEE4
  c->r[4]=R8(c->r[10]+0xFFFFAC00u); // 804BFEE8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BFEEC
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 804BFEF0
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 804BFEF4
  c->r[0]=c->r[4]|c->r[0]; // 804BFEF8
  c->r[4]=c->r[7]|c->r[6]; // 804BFEFC
  c->r[0]=c->r[5]|c->r[0]; // 804BFF00
  c->r[0]=c->r[4]|c->r[0]; // 804BFF04
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 804BFF08
  c->r[0]=R32(c->r[9]+0x00000008u); // 804BFF0C
  c->r[0]=c->r[0]|0x00000001u; // 804BFF10
  W32(c->r[9]+0x00000008u,c->r[0]); // 804BFF14
L_804BFF18:;
  c->r[4]=0u+0x80810000u; // 804BFF18
  c->r[5]=R8(c->r[13]+0xFFFFE470u); // 804BFF1C
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFF20
  c->r[0]=0u+0x00000000u; // 804BFF24
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804BFF28
  c->r[4]=R8(c->r[4]+0x00000003u); // 804BFF2C
  f_804AF2B4(c); return; // 804BFF30
  return; // 804BFF34
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
void f_804BFF38(Ctx* __restrict c) {
  trace_call(0x804BFF38u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BFF38
  c->r[0]=c->lr; // 804BFF3C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 804BFF40
  c->r[0]=R32(c->r[3]+0x00000000u); // 804BFF44
  W32(c->r[1]+0x000000ACu,c->r[31]); // 804BFF48
  c->r[31]=c->r[4]|c->r[4]; // 804BFF4C
  cmps(c,0,(int32_t)c->r[0],0); // 804BFF50
  W32(c->r[1]+0x000000A8u,c->r[30]); // 804BFF54
  c->r[30]=c->r[3]|c->r[3]; // 804BFF58
  if (crb(c,2)) { goto L_804C00F0; } // 804BFF5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804BFF60
  if (crb(c,2)) { goto L_804C0014; } // 804BFF64
  c->r[9]=0u+0x80810000u; // 804BFF68
  c->r[8]=c->r[9]+0xFFFFAC00u; // 804BFF6C
  c->r[3]=R32(c->r[8]+0x00000008u); // 804BFF70
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804BFF74
  if (crb(c,2)) { goto L_804BFFF4; } // 804BFF78
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 804BFF7C
  cmpu(c,0,c->r[0],0x00000002u); // 804BFF80
  if (!crb(c,2)) { goto L_804BFFF4; } // 804BFF84
  c->r[5]=R32(c->r[8]+0x00000004u); // 804BFF88
  c->r[3]=0u+0xFE080000u; // 804BFF8C
  c->r[7]=0u+0xCC010000u; // 804BFF90
  c->r[4]=0u+0x00000061u; // 804BFF94
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 804BFF98
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 804BFF9C
  c->r[3]=c->r[2]+0x00001610u; // 804BFFA0
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BFFA4
  c->r[0]=R8(c->r[3]+c->r[5]); // 804BFFA8
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 804BFFAC
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 804BFFB0
  c->r[3]=R8(c->r[8]+0x00000002u); // 804BFFB4
  c->r[0]=R8(c->r[8]+0x00000001u); // 804BFFB8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 804BFFBC
  c->r[6]=R8(c->r[8]+0x00000003u); // 804BFFC0
  c->r[3]=R8(c->r[9]+0xFFFFAC00u); // 804BFFC4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804BFFC8
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 804BFFCC
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 804BFFD0
  c->r[0]=c->r[3]|c->r[0]; // 804BFFD4
  c->r[3]=c->r[6]|c->r[5]; // 804BFFD8
  c->r[0]=c->r[4]|c->r[0]; // 804BFFDC
  c->r[0]=c->r[3]|c->r[0]; // 804BFFE0
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 804BFFE4
  c->r[0]=R32(c->r[8]+0x00000008u); // 804BFFE8
  c->r[0]=c->r[0]|0x00000001u; // 804BFFEC
  W32(c->r[8]+0x00000008u,c->r[0]); // 804BFFF0
L_804BFFF4:;
  c->r[4]=0u+0x80810000u; // 804BFFF4
  c->r[5]=R8(c->r[13]+0xFFFFE470u); // 804BFFF8
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804BFFFC
  c->r[0]=0u+0x00000000u; // 804C0000
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804C0004
  c->r[3]=c->r[1]+0x0000000Cu; // 804C0008
  c->r[4]=R8(c->r[4]+0x00000003u); // 804C000C
  c->lr=0x804C0014u; f_804AF2B4(c); // 804C0010
L_804C0014:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 804C0014
  c->r[0]=0u+0x00000000u; // 804C0018
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C001C
  c->r[3]=c->r[1]+0x00000008u; // 804C0020
  c->r[5]=c->r[1]+0x00000014u; // 804C0024
  c->r[4]=0u+0x00000001u; // 804C0028
  W32(c->r[1]+0x00000008u,c->r[6]); // 804C002C
  c->lr=0x804C0034u; f_804AF2E8(c); // 804C0030
  cmps(c,0,(int32_t)c->r[3],0); // 804C0034
  if (crb(c,2)) { goto L_804C0048; } // 804C0038
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C003C
  c->r[0]=c->r[0]|0x00000001u; // 804C0040
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C0044
L_804C0048:;
  c->r[3]=c->r[1]+0x00000008u; // 804C0048
  c->r[5]=c->r[1]+0x00000044u; // 804C004C
  c->r[4]=0u+0x00000002u; // 804C0050
  c->lr=0x804C0058u; f_804AF2E8(c); // 804C0054
  cmps(c,0,(int32_t)c->r[3],0); // 804C0058
  if (crb(c,2)) { goto L_804C006C; } // 804C005C
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C0060
  c->r[0]=c->r[0]|0x00000002u; // 804C0064
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C0068
L_804C006C:;
  c->r[3]=c->r[1]+0x00000008u; // 804C006C
  c->r[5]=c->r[1]+0x00000074u; // 804C0070
  c->r[4]=0u+0x00000003u; // 804C0074
  c->lr=0x804C007Cu; f_804AF2E8(c); // 804C0078
  cmps(c,0,(int32_t)c->r[3],0); // 804C007C
  if (crb(c,2)) { goto L_804C0090; } // 804C0080
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C0084
  c->r[0]=c->r[0]|0x00000004u; // 804C0088
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C008C
L_804C0090:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804C0090
  c->r[3]=c->r[31]|c->r[31]; // 804C0094
  c->r[4]=c->r[1]+0x00000010u; // 804C0098
  c->r[12]=R32(c->r[12]+0x00000008u); // 804C009C
  c->ctr=c->r[12]; // 804C00A0
  if (true) { c->lr=0x804C00A8u; dispatch(c,c->ctr); } // 804C00A4
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C00A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C00AC
  if (crb(c,2)) { goto L_804C00C0; } // 804C00B0
  c->r[4]=c->r[1]+0x00000014u; // 804C00B4
  c->r[3]=0u+0x00000000u; // 804C00B8
  c->lr=0x804C00C0u; f_804BDD20(c); // 804C00BC
L_804C00C0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C00C0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C00C4
  if (crb(c,2)) { goto L_804C00D8; } // 804C00C8
  c->r[4]=c->r[1]+0x00000044u; // 804C00CC
  c->r[3]=0u+0x00000003u; // 804C00D0
  c->lr=0x804C00D8u; f_804BDD20(c); // 804C00D4
L_804C00D8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C00D8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804C00DC
  if (crb(c,2)) { goto L_804C00F0; } // 804C00E0
  c->r[4]=c->r[1]+0x00000074u; // 804C00E4
  c->r[3]=0u+0x00000006u; // 804C00E8
  c->lr=0x804C00F0u; f_804BDD20(c); // 804C00EC
L_804C00F0:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 804C00F0
  c->r[31]=R32(c->r[1]+0x000000ACu); // 804C00F4
  c->r[30]=R32(c->r[1]+0x000000A8u); // 804C00F8
  c->lr=c->r[0]; // 804C00FC
  c->r[1]=c->r[1]+0x000000B0u; // 804C0100
  return; // 804C0104
}

// LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
void f_804C0108(Ctx* __restrict c) {
  trace_call(0x804C0108u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C0108
  c->r[0]=c->lr; // 804C010C
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C0110
  c->r[11]=c->r[1]+0x00000080u; // 804C0114
  c->lr=0x804C011Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C0118
  c->r[10]=R32(c->r[3]+0x00000000u); // 804C011C
  c->r[0]=0u+0x43300000u; // 804C0120
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C0124
  cmps(c,0,(int32_t)c->r[10],0); // 804C0128
  W32(c->r[1]+0x00000038u,c->r[0]); // 804C012C
  if (crb(c,2)) { goto L_804C081C; } // 804C0130
  c->r[11]=R32(c->r[10]+0x00000000u); // 804C0134
  c->r[0]=rotl(c->r[11],0)&0x00000001u; cr0(c,c->r[0]); // 804C0138
  if (crb(c,2)) { goto L_804C01D8; } // 804C013C
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 804C0140
  if (crb(c,2)) { goto L_804C0190; } // 804C0144
  c->r[31]=R8(c->r[10]+0x00000004u); // 804C0148
  c->r[12]=0u+0xCC010000u; // 804C014C
  c->r[30]=R8(c->r[10]+0x00000005u); // 804C0150
  c->r[27]=0u+0x00000010u; // 804C0154
  c->r[29]=R8(c->r[10]+0x00000006u); // 804C0158
  c->r[11]=0u+0x00000000u; // 804C015C
  c->r[28]=R8(c->r[10]+0x00000007u); // 804C0160
  c->r[0]=0u+0x0000100Cu; // 804C0164
  W8(c->r[1]+0x00000028u,c->r[31]); // 804C0168
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 804C016C
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 804C0170
  W8(c->r[1]+0x00000029u,c->r[30]); // 804C0174
  W8(c->r[1]+0x0000002Au,c->r[29]); // 804C0178
  W8(c->r[1]+0x0000002Bu,c->r[28]); // 804C017C
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 804C0180
  c->r[0]=R32(c->r[1]+0x00000028u); // 804C0184
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 804C0188
  goto L_804C0224; // 804C018C
L_804C0190:;
  c->r[31]=R8(c->r[10]+0x00000004u); // 804C0190
  c->r[12]=0u+0xCC010000u; // 804C0194
  c->r[30]=R8(c->r[10]+0x00000005u); // 804C0198
  c->r[27]=0u+0x00000010u; // 804C019C
  c->r[29]=R8(c->r[10]+0x00000006u); // 804C01A0
  c->r[11]=0u+0x00000000u; // 804C01A4
  c->r[28]=R8(c->r[10]+0x00000007u); // 804C01A8
  c->r[0]=0u+0x0000100Cu; // 804C01AC
  W8(c->r[1]+0x00000024u,c->r[31]); // 804C01B0
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 804C01B4
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 804C01B8
  W8(c->r[1]+0x00000025u,c->r[30]); // 804C01BC
  W8(c->r[1]+0x00000026u,c->r[29]); // 804C01C0
  W8(c->r[1]+0x00000027u,c->r[28]); // 804C01C4
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 804C01C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C01CC
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 804C01D0
  goto L_804C0224; // 804C01D4
L_804C01D8:;
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 804C01D8
  if (crb(c,2)) { goto L_804C0224; } // 804C01DC
  c->r[27]=R8(c->r[10]+0x00000004u); // 804C01E0
  c->r[12]=0u+0xCC010000u; // 804C01E4
  c->r[28]=R8(c->r[10]+0x00000005u); // 804C01E8
  c->r[29]=0u+0x00000010u; // 804C01EC
  c->r[31]=R8(c->r[10]+0x00000006u); // 804C01F0
  c->r[11]=0u+0x00000000u; // 804C01F4
  c->r[30]=R8(c->r[10]+0x00000007u); // 804C01F8
  c->r[0]=0u+0x0000100Cu; // 804C01FC
  W8(c->r[1]+0x00000020u,c->r[27]); // 804C0200
  W8(c->r[12]+0xFFFF8000u,c->r[29]); // 804C0204
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 804C0208
  W8(c->r[1]+0x00000021u,c->r[28]); // 804C020C
  W8(c->r[1]+0x00000022u,c->r[31]); // 804C0210
  W8(c->r[1]+0x00000023u,c->r[30]); // 804C0214
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 804C0218
  c->r[0]=R32(c->r[1]+0x00000020u); // 804C021C
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 804C0220
L_804C0224:;
  c->r[12]=R8(c->r[8]+0x00000000u); // 804C0224
  c->r[11]=R8(c->r[10]+0x00000008u); // 804C0228
  c->r[30]=R8(c->r[8]+0x00000001u); // 804C022C
  c->r[29]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 804C0230
  c->r[0]=R8(c->r[10]+0x00000009u); // 804C0234
  c->r[27]=R32(c->r[10]+0x00000000u); // 804C0238
  c->r[31]=R8(c->r[8]+0x00000002u); // 804C023C
  c->r[12]=R8(c->r[10]+0x0000000Au); // 804C0240
  c->r[11]=R8(c->r[8]+0x00000003u); // 804C0244
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 804C0248
  c->r[0]=c->r[29]^0x80000000u; // 804C024C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C0250
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 804C0254
  c->r[8]=R8(c->r[10]+0x0000000Bu); // 804C0258
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 804C025C
  c->r[0]=c->r[30]^0x80000000u; // 804C0260
  {uint32_t ea=c->r[2]+0x00001630u; c->f[6]=RF64(ea);} // 804C0264
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C0268
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[8]); // 804C026C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804C0270
  {uint32_t ea=c->r[2]+0x00001628u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C0274
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804C0278
  {uint32_t ea=c->r[2]+0x00001624u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C027C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 804C0280
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 804C0284
  c->r[0]=c->r[0]^0x80000000u; // 804C0288
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 804C028C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C0290
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 804C0294
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804C0298
  c->r[8]=c->r[12]^0x80000000u; // 804C029C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C02A0
  W32(c->r[1]+0x00000034u,c->r[8]); // 804C02A4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 804C02A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804C02AC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804C02B0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 804C02B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[6]); // 804C02B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804C02BC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 804C02C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 804C02C4
  c->r[12]=R32(c->r[1]+0x00000044u); // 804C02C8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 804C02CC
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 804C02D0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C02D4
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 804C02D8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 804C02DC
  W8(c->r[1]+0x0000002Du,c->r[11]); // 804C02E0
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 804C02E4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804C02E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804C02EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 804C02F0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 804C02F4
  c->r[8]=R32(c->r[1]+0x00000054u); // 804C02F8
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 804C02FC
  W8(c->r[1]+0x0000002Eu,c->r[8]); // 804C0300
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 804C0304
  if (crb(c,2)) { goto L_804C0364; } // 804C0308
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 804C030C
  if (crb(c,2)) { goto L_804C033C; } // 804C0310
  c->r[11]=0u+0xCC010000u; // 804C0314
  c->r[0]=0u+0x00000010u; // 804C0318
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 804C031C
  c->r[8]=0u+0x00000000u; // 804C0320
  c->r[0]=0u+0x0000100Au; // 804C0324
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 804C0328
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 804C032C
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0330
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 804C0334
  goto L_804C0390; // 804C0338
L_804C033C:;
  c->r[11]=0u+0xCC010000u; // 804C033C
  c->r[0]=0u+0x00000010u; // 804C0340
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0344
  c->r[8]=0u+0x00000000u; // 804C0348
  c->r[0]=0u+0x0000100Au; // 804C034C
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 804C0350
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 804C0354
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0358
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 804C035C
  goto L_804C0390; // 804C0360
L_804C0364:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 804C0364
  if (crb(c,2)) { goto L_804C0390; } // 804C0368
  c->r[11]=0u+0xCC010000u; // 804C036C
  c->r[0]=0u+0x00000010u; // 804C0370
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0374
  c->r[8]=0u+0x00000000u; // 804C0378
  c->r[0]=0u+0x0000100Au; // 804C037C
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 804C0380
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 804C0384
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0388
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 804C038C
L_804C0390:;
  cmps(c,0,(int32_t)c->r[9],0); // 804C0390
  if (crb(c,2)) { goto L_804C041C; } // 804C0394
  c->r[0]=R32(c->r[10]+0x00000000u); // 804C0398
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804C039C
  if (crb(c,2)) { goto L_804C03D8; } // 804C03A0
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 804C03A4
  c->r[12]=0u+0xFFFF87C1u; // 804C03A8
  c->r[11]=0u+0xCC010000u; // 804C03AC
  c->r[0]=0u+0x00000010u; // 804C03B0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 804C03B4
  c->r[8]=0u+0x00000000u; // 804C03B8
  c->r[27]=c->r[27]&c->r[12]; // 804C03BC
  c->r[0]=0u+0x0000100Eu; // 804C03C0
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 804C03C4
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 804C03C8
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 804C03CC
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 804C03D0
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 804C03D4
L_804C03D8:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 804C03D8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804C03DC
  if (crb(c,2)) { goto L_804C049C; } // 804C03E0
  c->r[11]=R32(c->r[10]+0x00000010u); // 804C03E4
  c->r[10]=0u+0xFFFF87C1u; // 804C03E8
  c->r[8]=0u+0xCC010000u; // 804C03EC
  c->r[0]=0u+0x00000010u; // 804C03F0
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 804C03F4
  c->r[4]=0u+0x00000000u; // 804C03F8
  c->r[11]=c->r[11]&c->r[10]; // 804C03FC
  c->r[0]=0u+0x00001010u; // 804C0400
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 804C0404
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 804C0408
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 804C040C
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 804C0410
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 804C0414
  goto L_804C049C; // 804C0418
L_804C041C:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 804C041C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804C0420
  if (crb(c,2)) { goto L_804C045C; } // 804C0424
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 804C0428
  c->r[12]=0u+0xFFFF87C3u; // 804C042C
  c->r[11]=0u+0xCC010000u; // 804C0430
  c->r[0]=0u+0x00000010u; // 804C0434
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0438
  c->r[8]=0u+0x00000000u; // 804C043C
  c->r[27]=c->r[27]&c->r[12]; // 804C0440
  c->r[0]=0u+0x0000100Eu; // 804C0444
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 804C0448
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 804C044C
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 804C0450
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 804C0454
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 804C0458
L_804C045C:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 804C045C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804C0460
  if (crb(c,2)) { goto L_804C049C; } // 804C0464
  c->r[11]=R32(c->r[10]+0x00000010u); // 804C0468
  c->r[10]=0u+0xFFFF87C3u; // 804C046C
  c->r[8]=0u+0xCC010000u; // 804C0470
  c->r[0]=0u+0x00000010u; // 804C0474
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 804C0478
  c->r[4]=0u+0x00000000u; // 804C047C
  c->r[11]=c->r[11]&c->r[10]; // 804C0480
  c->r[0]=0u+0x00001010u; // 804C0484
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 804C0488
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 804C048C
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 804C0490
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 804C0494
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 804C0498
L_804C049C:;
  c->r[4]=0u+0x80810000u; // 804C049C
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804C04A0
  c->r[0]=R8(c->r[4]+0x00000001u); // 804C04A4
  cmpu(c,0,c->r[0],0x00000002u); // 804C04A8
  if (!crb(c,2)) { goto L_804C07A4; } // 804C04AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C04B0
  c->r[4]=R32(c->r[3]+0x00000014u); // 804C04B4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804C04B8
  if (crb(c,2)) { goto L_804C0558; } // 804C04BC
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804C04C0
  if (crb(c,2)) { goto L_804C0510; } // 804C04C4
  c->r[31]=R8(c->r[3]+0x00000018u); // 804C04C8
  c->r[5]=0u+0xCC010000u; // 804C04CC
  c->r[12]=R8(c->r[3]+0x00000019u); // 804C04D0
  c->r[8]=0u+0x00000010u; // 804C04D4
  c->r[11]=R8(c->r[3]+0x0000001Au); // 804C04D8
  c->r[4]=0u+0x00000000u; // 804C04DC
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 804C04E0
  c->r[0]=0u+0x0000100Du; // 804C04E4
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 804C04E8
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C04EC
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C04F0
  W8(c->r[1]+0x0000001Du,c->r[12]); // 804C04F4
  W8(c->r[1]+0x0000001Eu,c->r[11]); // 804C04F8
  W8(c->r[1]+0x0000001Fu,c->r[10]); // 804C04FC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0500
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804C0504
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0508
  goto L_804C05A4; // 804C050C
L_804C0510:;
  c->r[31]=R8(c->r[3]+0x00000018u); // 804C0510
  c->r[5]=0u+0xCC010000u; // 804C0514
  c->r[12]=R8(c->r[3]+0x00000019u); // 804C0518
  c->r[8]=0u+0x00000010u; // 804C051C
  c->r[11]=R8(c->r[3]+0x0000001Au); // 804C0520
  c->r[4]=0u+0x00000000u; // 804C0524
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 804C0528
  c->r[0]=0u+0x0000100Du; // 804C052C
  W8(c->r[1]+0x00000018u,c->r[31]); // 804C0530
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C0534
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C0538
  W8(c->r[1]+0x00000019u,c->r[12]); // 804C053C
  W8(c->r[1]+0x0000001Au,c->r[11]); // 804C0540
  W8(c->r[1]+0x0000001Bu,c->r[10]); // 804C0544
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0548
  c->r[0]=R32(c->r[1]+0x00000018u); // 804C054C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0550
  goto L_804C05A4; // 804C0554
L_804C0558:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804C0558
  if (crb(c,2)) { goto L_804C05A4; } // 804C055C
  c->r[31]=R8(c->r[3]+0x00000018u); // 804C0560
  c->r[5]=0u+0xCC010000u; // 804C0564
  c->r[12]=R8(c->r[3]+0x00000019u); // 804C0568
  c->r[8]=0u+0x00000010u; // 804C056C
  c->r[11]=R8(c->r[3]+0x0000001Au); // 804C0570
  c->r[4]=0u+0x00000000u; // 804C0574
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 804C0578
  c->r[0]=0u+0x0000100Du; // 804C057C
  W8(c->r[1]+0x00000014u,c->r[31]); // 804C0580
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C0584
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C0588
  W8(c->r[1]+0x00000015u,c->r[12]); // 804C058C
  W8(c->r[1]+0x00000016u,c->r[11]); // 804C0590
  W8(c->r[1]+0x00000017u,c->r[10]); // 804C0594
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0598
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C059C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C05A0
L_804C05A4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804C05A4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804C05A8
  if (crb(c,2)) { goto L_804C0648; } // 804C05AC
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 804C05B0
  if (crb(c,2)) { goto L_804C0600; } // 804C05B4
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 804C05B8
  c->r[5]=0u+0xCC010000u; // 804C05BC
  c->r[12]=R8(c->r[3]+0x0000001Du); // 804C05C0
  c->r[8]=0u+0x00000010u; // 804C05C4
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 804C05C8
  c->r[4]=0u+0x00000000u; // 804C05CC
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 804C05D0
  c->r[0]=0u+0x0000100Bu; // 804C05D4
  W8(c->r[1]+0x00000010u,c->r[31]); // 804C05D8
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C05DC
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C05E0
  W8(c->r[1]+0x00000011u,c->r[12]); // 804C05E4
  W8(c->r[1]+0x00000012u,c->r[11]); // 804C05E8
  W8(c->r[1]+0x00000013u,c->r[10]); // 804C05EC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C05F0
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C05F4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C05F8
  goto L_804C0694; // 804C05FC
L_804C0600:;
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 804C0600
  c->r[5]=0u+0xCC010000u; // 804C0604
  c->r[12]=R8(c->r[3]+0x0000001Du); // 804C0608
  c->r[8]=0u+0x00000010u; // 804C060C
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 804C0610
  c->r[4]=0u+0x00000000u; // 804C0614
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 804C0618
  c->r[0]=0u+0x0000100Bu; // 804C061C
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 804C0620
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C0624
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C0628
  W8(c->r[1]+0x0000000Du,c->r[12]); // 804C062C
  W8(c->r[1]+0x0000000Eu,c->r[11]); // 804C0630
  W8(c->r[1]+0x0000000Fu,c->r[10]); // 804C0634
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0638
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C063C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0640
  goto L_804C0694; // 804C0644
L_804C0648:;
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 804C0648
  if (crb(c,2)) { goto L_804C0694; } // 804C064C
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 804C0650
  c->r[5]=0u+0xCC010000u; // 804C0654
  c->r[12]=R8(c->r[3]+0x0000001Du); // 804C0658
  c->r[8]=0u+0x00000010u; // 804C065C
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 804C0660
  c->r[4]=0u+0x00000000u; // 804C0664
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 804C0668
  c->r[0]=0u+0x0000100Bu; // 804C066C
  W8(c->r[1]+0x00000008u,c->r[31]); // 804C0670
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 804C0674
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C0678
  W8(c->r[1]+0x00000009u,c->r[12]); // 804C067C
  W8(c->r[1]+0x0000000Au,c->r[11]); // 804C0680
  W8(c->r[1]+0x0000000Bu,c->r[10]); // 804C0684
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0688
  c->r[0]=R32(c->r[1]+0x00000008u); // 804C068C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0690
L_804C0694:;
  cmps(c,0,(int32_t)c->r[9],0); // 804C0694
  if (crb(c,2)) { goto L_804C0720; } // 804C0698
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C069C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804C06A0
  if (crb(c,2)) { goto L_804C06DC; } // 804C06A4
  c->r[9]=R32(c->r[3]+0x00000020u); // 804C06A8
  c->r[8]=0u+0xFFFF87C1u; // 804C06AC
  c->r[5]=0u+0xCC010000u; // 804C06B0
  c->r[0]=0u+0x00000010u; // 804C06B4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 804C06B8
  c->r[4]=0u+0x00000000u; // 804C06BC
  c->r[9]=c->r[9]&c->r[8]; // 804C06C0
  c->r[0]=0u+0x0000100Fu; // 804C06C4
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C06C8
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 804C06CC
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 804C06D0
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C06D4
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 804C06D8
L_804C06DC:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C06DC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804C06E0
  if (crb(c,2)) { goto L_804C07D8; } // 804C06E4
  c->r[6]=R32(c->r[3]+0x00000024u); // 804C06E8
  c->r[5]=0u+0xFFFF87C1u; // 804C06EC
  c->r[4]=0u+0xCC010000u; // 804C06F0
  c->r[0]=0u+0x00000010u; // 804C06F4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804C06F8
  c->r[3]=0u+0x00000000u; // 804C06FC
  c->r[6]=c->r[6]&c->r[5]; // 804C0700
  c->r[0]=0u+0x00001011u; // 804C0704
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 804C0708
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 804C070C
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 804C0710
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 804C0714
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804C0718
  goto L_804C07D8; // 804C071C
L_804C0720:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C0720
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804C0724
  if (crb(c,2)) { goto L_804C0760; } // 804C0728
  c->r[9]=R32(c->r[3]+0x00000020u); // 804C072C
  c->r[8]=0u+0xFFFF87C3u; // 804C0730
  c->r[5]=0u+0xCC010000u; // 804C0734
  c->r[0]=0u+0x00000010u; // 804C0738
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 804C073C
  c->r[4]=0u+0x00000000u; // 804C0740
  c->r[9]=c->r[9]&c->r[8]; // 804C0744
  c->r[0]=0u+0x0000100Fu; // 804C0748
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C074C
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 804C0750
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 804C0754
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C0758
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 804C075C
L_804C0760:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C0760
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804C0764
  if (crb(c,2)) { goto L_804C07D8; } // 804C0768
  c->r[6]=R32(c->r[3]+0x00000024u); // 804C076C
  c->r[5]=0u+0xFFFF87C3u; // 804C0770
  c->r[4]=0u+0xCC010000u; // 804C0774
  c->r[0]=0u+0x00000010u; // 804C0778
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804C077C
  c->r[3]=0u+0x00000000u; // 804C0780
  c->r[6]=c->r[6]&c->r[5]; // 804C0784
  c->r[0]=0u+0x00001011u; // 804C0788
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 804C078C
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 804C0790
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 804C0794
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 804C0798
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804C079C
  goto L_804C07D8; // 804C07A0
L_804C07A4:;
  c->r[5]=0u+0xCC010000u; // 804C07A4
  c->r[6]=0u+0x00000010u; // 804C07A8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 804C07AC
  c->r[4]=0u+0x00000000u; // 804C07B0
  c->r[3]=0u+0x0000100Fu; // 804C07B4
  c->r[0]=0u+0x00001011u; // 804C07B8
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C07BC
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 804C07C0
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 804C07C4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 804C07C8
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 804C07CC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 804C07D0
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 804C07D4
L_804C07D8:;
  c->r[3]=0u+0x80810000u; // 804C07D8
  c->r[31]=c->r[3]+0xFFFFAC00u; // 804C07DC
  c->r[4]=R32(c->r[31]+0x00000008u); // 804C07E0
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804C07E4
  if (crb(c,2)) { goto L_804C081C; } // 804C07E8
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804C07EC
  cmpu(c,0,c->r[0],0x00000003u); // 804C07F0
  if (crb(c,2)) { goto L_804C081C; } // 804C07F4
  c->r[3]=R8(c->r[3]+0xFFFFAC00u); // 804C07F8
  c->r[4]=R8(c->r[31]+0x00000001u); // 804C07FC
  c->r[5]=R8(c->r[31]+0x00000002u); // 804C0800
  c->r[6]=R8(c->r[31]+0x00000003u); // 804C0804
  c->r[7]=R32(c->r[31]+0x00000004u); // 804C0808
  c->lr=0x804C0810u; f_804BDC00(c); // 804C080C
  c->r[0]=R32(c->r[31]+0x00000008u); // 804C0810
  c->r[0]=c->r[0]|0x00000003u; // 804C0814
  W32(c->r[31]+0x00000008u,c->r[0]); // 804C0818
L_804C081C:;
  c->r[11]=c->r[1]+0x00000080u; // 804C081C
  c->lr=0x804C0824u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C0820
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C0824
  c->lr=c->r[0]; // 804C0828
  c->r[1]=c->r[1]+0x00000080u; // 804C082C
  return; // 804C0830
}

// LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
void f_804C0834(Ctx* __restrict c) {
  trace_call(0x804C0834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C0834
  c->r[0]=c->lr; // 804C0838
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C083C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C0840
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C0844
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C0848
  cmps(c,0,(int32_t)c->r[0],0); // 804C084C
  if (crb(c,2)) { goto L_804C08AC; } // 804C0850
  c->r[5]=R8(c->r[13]+0xFFFFE470u); // 804C0854
  c->r[0]=0u+0x00000000u; // 804C0858
  c->r[30]=0u+0x80810000u; // 804C085C
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804C0860
  c->r[4]=R8(c->r[30]+0xFFFFAC00u); // 804C0864
  c->lr=0x804C086Cu; f_804AFAB4(c); // 804C0868
  c->r[31]=c->r[30]+0xFFFFAC00u; // 804C086C
  c->r[3]=R32(c->r[31]+0x00000008u); // 804C0870
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804C0874
  if (crb(c,2)) { goto L_804C08AC; } // 804C0878
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 804C087C
  cmpu(c,0,c->r[0],0x00000003u); // 804C0880
  if (crb(c,2)) { goto L_804C08AC; } // 804C0884
  c->r[3]=R8(c->r[30]+0xFFFFAC00u); // 804C0888
  c->r[4]=R8(c->r[31]+0x00000001u); // 804C088C
  c->r[5]=R8(c->r[31]+0x00000002u); // 804C0890
  c->r[6]=R8(c->r[31]+0x00000003u); // 804C0894
  c->r[7]=R32(c->r[31]+0x00000004u); // 804C0898
  c->lr=0x804C08A0u; f_804BDC00(c); // 804C089C
  c->r[0]=R32(c->r[31]+0x00000008u); // 804C08A0
  c->r[0]=c->r[0]|0x00000003u; // 804C08A4
  W32(c->r[31]+0x00000008u,c->r[0]); // 804C08A8
L_804C08AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C08AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C08B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C08B4
  c->lr=c->r[0]; // 804C08B8
  c->r[1]=c->r[1]+0x00000010u; // 804C08BC
  return; // 804C08C0
}

// LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
void f_804C08C4(Ctx* __restrict c) {
  trace_call(0x804C08C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C08C4
  c->r[0]=c->lr; // 804C08C8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 804C08CC
  c->r[11]=c->r[1]+0x000000D0u; // 804C08D0
  c->lr=0x804C08D8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C08D4
  c->r[30]=0u+0x80810000u; // 804C08D8
  c->r[26]=0u+0x80810000u; // 804C08DC
  c->r[21]=c->r[3]|c->r[3]; // 804C08E0
  c->r[23]=0u+0x00000000u; // 804C08E4
  c->r[26]=c->r[26]+0xFFFFAE10u; // 804C08E8
  c->r[30]=c->r[30]+0xFFFFAE40u; // 804C08EC
  c->r[28]=0u+0x00000000u; // 804C08F0
  c->r[27]=0u+0x00000000u; // 804C08F4
  c->r[25]=0u+0x00000000u; // 804C08F8
  c->r[24]=0u+0x00000040u; // 804C08FC
  c->r[31]=0u+0x00000000u; // 804C0900
  c->r[20]=0u+0x00000001u; // 804C0904
L_804C0908:;
  c->r[4]=R32(c->r[21]+0x00000000u); // 804C0908
  cmps(c,0,(int32_t)c->r[4],0); // 804C090C
  if (crb(c,2)) { goto L_804C0930; } // 804C0910
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C0914
  c->r[3]=((c->r[28])&0x20)?0u:(c->r[20]<<((c->r[28])&31)); // 804C0918
  c->r[3]=c->r[3]&c->r[0]; // 804C091C
  c->r[0]=0u-c->r[3]; // 804C0920
  c->r[0]=c->r[0]|c->r[3]; // 804C0924
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C0928
  goto L_804C0934; // 804C092C
L_804C0930:;
  c->r[0]=0u+0x00000000u; // 804C0930
L_804C0934:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C0934
  if (crb(c,2)) { goto L_804C0B34; } // 804C0938
  c->r[29]=c->r[4]+c->r[27]; // 804C093C
  c->r[3]=c->r[1]+0x00000068u; // 804C0940
  c->r[22]=0u+0x00000001u; // 804C0944
  c->lr=0x804C094Cu; f_80382F00(c); // 804C0948
  c->r[6]=R8(c->r[29]+0x000000AAu); // 804C094C
  cmps(c,0,(int32_t)c->r[6],0); // 804C0950
  if (crb(c,2)) { goto L_804C09C8; } // 804C0954
  c->r[3]=R8(c->r[29]+0x000000A9u); // 804C0958
  cmpu(c,0,c->r[6],0x00000100u); // 804C095C
  c->r[0]=R8(c->r[29]+0x000000A8u); // 804C0960
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804C0964
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804C0968
  if (crb(c,0)) { goto L_804C0974; } // 804C096C
  c->r[6]=0u+0x00000000u; // 804C0970
L_804C0974:;
  cmps(c,0,(int32_t)c->r[4],32); // 804C0974
  if (crb(c,0)) { goto L_804C0980; } // 804C0978
  c->r[4]=0u+0xFFFFFFFFu; // 804C097C
L_804C0980:;
  cmps(c,0,(int32_t)c->r[5],128); // 804C0980
  if (crb(c,0)) { goto L_804C098C; } // 804C0984
  c->r[5]=0u+0xFFFFFFFFu; // 804C0988
L_804C098C:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 804C098C
  c->r[3]=c->r[1]+0x00000068u; // 804C0990
  c->r[12]=R32(c->r[30]+c->r[0]); // 804C0994
  c->ctr=c->r[12]; // 804C0998
  if (true) { c->lr=0x804C09A0u; dispatch(c,c->ctr); } // 804C099C
  c->r[0]=R8(c->r[29]+0x000000AAu); // 804C09A0
  cmpu(c,0,c->r[0],0x00000100u); // 804C09A4
  if (crb(c,0)) { goto L_804C09B0; } // 804C09A8
  c->r[0]=0u+0x00000000u; // 804C09AC
L_804C09B0:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804C09B0
  c->r[22]=0u+0x00000000u; // 804C09B4
  c->r[3]=c->r[30]+c->r[0]; // 804C09B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 804C09BC
  W32(c->r[26]+0x00000000u,c->r[0]); // 804C09C0
  goto L_804C09CC; // 804C09C4
L_804C09C8:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 804C09C8
L_804C09CC:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C09CC
  c->r[4]=0u+0x00000000u; // 804C09D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C09D4
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 804C09D8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 804C09DC
  cmpu(c,0,c->r[0],0x0000000Fu); // 804C09E0
  if (!crb(c,2)) { goto L_804C09FC; } // 804C09E4
  c->r[3]=c->r[3]+c->r[27]; // 804C09E8
  c->r[0]=R8(c->r[3]+0x000000ABu); // 804C09EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C09F0
  if (crb(c,2)) { goto L_804C09FC; } // 804C09F4
  c->r[4]=0u+0x00000001u; // 804C09F8
L_804C09FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804C09FC
  if (!crb(c,2)) { goto L_804C0AD0; } // 804C0A00
  cmps(c,0,(int32_t)c->r[22],0); // 804C0A04
  if (crb(c,2)) { goto L_804C0A2C; } // 804C0A08
  c->r[0]=R8(c->r[29]+0x000000ABu); // 804C0A0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C0A10
  if (!crb(c,2)) { goto L_804C0A3C; } // 804C0A14
  c->r[3]=c->r[29]+0x000000ACu; // 804C0A18
  c->r[4]=c->r[1]+0x00000068u; // 804C0A1C
  c->r[22]=0u+0x00000000u; // 804C0A20
  c->lr=0x804C0A28u; f_80382F2C(c); // 804C0A24
  goto L_804C0A3C; // 804C0A28
L_804C0A2C:;
  c->r[4]=c->r[1]+0x00000068u; // 804C0A2C
  c->r[3]=c->r[29]+0x000000ACu; // 804C0A30
  c->r[5]=c->r[4]|c->r[4]; // 804C0A34
  c->lr=0x804C0A3Cu; f_80382F60(c); // 804C0A38
L_804C0A3C:;
  c->r[0]=R8(c->r[29]+0x000000AAu); // 804C0A3C
  cmps(c,0,(int32_t)c->r[0],0); // 804C0A40
  if (!crb(c,2)) { goto L_804C0A74; } // 804C0A44
  c->r[6]=R32(c->r[21]+0x00000000u); // 804C0A48
  c->r[4]=c->r[22]|c->r[22]; // 804C0A4C
  c->r[3]=c->r[1]+0x00000068u; // 804C0A50
  c->r[0]=R32(c->r[6]+0x00000000u); // 804C0A54
  c->r[5]=c->r[6]+c->r[25]; // 804C0A58
  c->r[7]=R32(c->r[6]+0x00000004u); // 804C0A5C
  c->r[5]=c->r[5]+0x00000008u; // 804C0A60
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 804C0A64
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 804C0A68
  c->lr=0x804C0A70u; f_804C4EDC(c); // 804C0A6C
  goto L_804C0ACC; // 804C0A70
L_804C0A74:;
  c->r[6]=R32(c->r[21]+0x00000000u); // 804C0A74
  c->r[3]=c->r[1]+0x00000038u; // 804C0A78
  c->r[4]=0u+0x00000001u; // 804C0A7C
  c->r[0]=R32(c->r[6]+0x00000000u); // 804C0A80
  c->r[5]=c->r[6]+c->r[25]; // 804C0A84
  c->r[7]=R32(c->r[6]+0x00000004u); // 804C0A88
  c->r[5]=c->r[5]+0x00000008u; // 804C0A8C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 804C0A90
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 804C0A94
  c->lr=0x804C0A9Cu; f_804C4EDC(c); // 804C0A98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C0A9C
  c->r[4]=c->r[1]+0x00000068u; // 804C0AA0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C0AA4
  c->r[5]=c->r[4]|c->r[4]; // 804C0AA8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C0AAC
  c->r[3]=c->r[1]+0x00000038u; // 804C0AB0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C0AB4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 804C0AB8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 804C0ABC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 804C0AC0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 804C0AC4
  c->lr=0x804C0ACCu; f_80382F60(c); // 804C0AC8
L_804C0ACC:;
  c->r[22]=0u+0x00000000u; // 804C0ACC
L_804C0AD0:;
  cmps(c,0,(int32_t)c->r[22],0); // 804C0AD0
  if (crb(c,2)) { goto L_804C0B10; } // 804C0AD4
  c->r[0]=R32(c->r[13]+0xFFFFE478u); // 804C0AD8
  c->r[4]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 804C0ADC
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 804C0AE0
  if (!crb(c,2)) { goto L_804C0B38; } // 804C0AE4
  c->r[0]=R32(c->r[13]+0xFFFFE478u); // 804C0AE8
  c->r[3]=c->r[1]+0x00000008u; // 804C0AEC
  c->r[0]=c->r[0]|c->r[4]; // 804C0AF0
  W32(c->r[13]+0xFFFFE478u,c->r[0]); // 804C0AF4
  c->lr=0x804C0AFCu; f_80382F00(c); // 804C0AF8
  c->r[4]=c->r[24]|c->r[24]; // 804C0AFC
  c->r[3]=c->r[1]+0x00000008u; // 804C0B00
  c->r[5]=0u+0x00000000u; // 804C0B04
  c->lr=0x804C0B0Cu; f_803A8668(c); // 804C0B08
  goto L_804C0B38; // 804C0B0C
L_804C0B10:;
  c->r[5]=R32(c->r[13]+0xFFFFE478u); // 804C0B10
  c->r[0]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 804C0B14
  c->r[4]=c->r[24]|c->r[24]; // 804C0B18
  c->r[3]=c->r[1]+0x00000068u; // 804C0B1C
  c->r[0]=c->r[5]&~c->r[0]; // 804C0B20
  c->r[5]=0u+0x00000000u; // 804C0B24
  W32(c->r[13]+0xFFFFE478u,c->r[0]); // 804C0B28
  c->lr=0x804C0B30u; f_803A8668(c); // 804C0B2C
  goto L_804C0B38; // 804C0B30
L_804C0B34:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 804C0B34
L_804C0B38:;
  c->r[23]=c->r[23]+0x00000001u; // 804C0B38
  c->r[27]=c->r[27]+0x00000034u; // 804C0B3C
  cmpu(c,0,c->r[23],0x00000008u); // 804C0B40
  c->r[26]=c->r[26]+0x00000004u; // 804C0B44
  c->r[25]=c->r[25]+0x00000014u; // 804C0B48
  c->r[24]=c->r[24]+0x00000003u; // 804C0B4C
  c->r[28]=c->r[28]+0x00000004u; // 804C0B50
  if (crb(c,0)) { IRQCHK(c); goto L_804C0908; } // 804C0B54
  c->r[11]=c->r[1]+0x000000D0u; // 804C0B58
  c->lr=0x804C0B60u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C0B5C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804C0B60
  c->lr=c->r[0]; // 804C0B64
  c->r[1]=c->r[1]+0x000000D0u; // 804C0B68
  return; // 804C0B6C
}

// LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
void f_804C0B70(Ctx* __restrict c) {
  trace_call(0x804C0B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C0B70
  c->r[0]=c->lr; // 804C0B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C0B78
  c->r[11]=c->r[1]+0x00000020u; // 804C0B7C
  c->lr=0x804C0B84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C0B80
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C0B84
  c->r[31]=0u+0x80810000u; // 804C0B88
  c->r[30]=c->r[3]|c->r[3]; // 804C0B8C
  cmps(c,0,(int32_t)c->r[0],0); // 804C0B90
  c->r[31]=c->r[31]+0xFFFFAC00u; // 804C0B94
  if (crb(c,2)) { goto L_804C0CFC; } // 804C0B98
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804C0B9C
  c->r[27]=R8(c->r[31]+0x00000000u); // 804C0BA0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804C0BA4
  if (crb(c,2)) { goto L_804C0C38; } // 804C0BA8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804C0BAC
  if (!crb(c,2)) { goto L_804C0C38; } // 804C0BB0
  cmps(c,0,(int32_t)c->r[27],0); // 804C0BB4
  if (crb(c,2)) { goto L_804C0C38; } // 804C0BB8
  c->r[29]=c->r[31]+0x0000000Cu; // 804C0BBC
  c->r[28]=0u+0x00000000u; // 804C0BC0
  goto L_804C0C20; // 804C0BC4
L_804C0BC8:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 804C0BC8
  c->r[7]=c->r[29]+c->r[3]; // 804C0BCC
  c->r[0]=R8(c->r[7]+0x00000064u); // 804C0BD0
  cmpu(c,0,c->r[0],0x000000FFu); // 804C0BD4
  if (crb(c,2)) { goto L_804C0C1C; } // 804C0BD8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 804C0BDC
  c->r[5]=rotl(c->r[28],3)&0x000007F8u; // 804C0BE0
  c->r[4]=c->r[29]+c->r[0]; // 804C0BE4
  c->r[6]=0u+0x00000000u; // 804C0BE8
  c->r[4]=R16(c->r[4]+0x00000004u); // 804C0BEC
  c->r[10]=c->r[29]+c->r[5]; // 804C0BF0
  c->r[5]=0u+0x00000000u; // 804C0BF4
  c->r[8]=0u+0x00000000u; // 804C0BF8
  W16(c->r[10]+0x00000024u,c->r[4]); // 804C0BFC
  c->r[9]=0u+0x00000000u; // 804C0C00
  c->r[0]=R8(c->r[7]+0x00000064u); // 804C0C04
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C0C08
  c->r[7]=c->r[29]+c->r[0]; // 804C0C0C
  c->r[7]=R16(c->r[7]+0x00000006u); // 804C0C10
  W16(c->r[10]+0x00000026u,c->r[7]); // 804C0C14
  c->lr=0x804C0C1Cu; f_804BDCB0(c); // 804C0C18
L_804C0C1C:;
  c->r[28]=c->r[28]+0x00000001u; // 804C0C1C
L_804C0C20:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 804C0C20
  cmpu(c,0,c->r[0],c->r[27]); // 804C0C24
  if (crb(c,0)) { IRQCHK(c); goto L_804C0BC8; } // 804C0C28
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804C0C2C
  c->r[0]=c->r[0]|0x00000001u; // 804C0C30
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 804C0C34
L_804C0C38:;
  c->r[29]=c->r[31]+0x00000000u; // 804C0C38
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C0C3C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804C0C40
  if (crb(c,2)) { goto L_804C0C78; } // 804C0C44
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 804C0C48
  cmpu(c,0,c->r[0],0x00000003u); // 804C0C4C
  if (crb(c,2)) { goto L_804C0C78; } // 804C0C50
  c->r[3]=R8(c->r[31]+0x00000000u); // 804C0C54
  c->r[4]=R8(c->r[29]+0x00000001u); // 804C0C58
  c->r[5]=R8(c->r[29]+0x00000002u); // 804C0C5C
  c->r[6]=R8(c->r[29]+0x00000003u); // 804C0C60
  c->r[7]=R32(c->r[29]+0x00000004u); // 804C0C64
  c->lr=0x804C0C6Cu; f_804BDC00(c); // 804C0C68
  c->r[0]=R32(c->r[29]+0x00000008u); // 804C0C6C
  c->r[0]=c->r[0]|0x00000003u; // 804C0C70
  W32(c->r[29]+0x00000008u,c->r[0]); // 804C0C74
L_804C0C78:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 804C0C78
  c->r[5]=0u+0x00000000u; // 804C0C7C
  c->r[0]=R32(c->r[31]+0x00000204u); // 804C0C80
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 804C0C84
  cmpu(c,0,c->r[3],c->r[0]); // 804C0C88
  if (!crb(c,2)) { goto L_804C0CB8; } // 804C0C8C
  c->r[4]=c->r[31]+0x00000204u; // 804C0C90
  c->r[3]=R32(c->r[6]+0x00000010u); // 804C0C94
  c->r[0]=R32(c->r[4]+0x00000004u); // 804C0C98
  cmpu(c,0,c->r[3],c->r[0]); // 804C0C9C
  if (!crb(c,2)) { goto L_804C0CB8; } // 804C0CA0
  c->r[3]=R32(c->r[6]+0x00000014u); // 804C0CA4
  c->r[0]=R32(c->r[4]+0x00000008u); // 804C0CA8
  cmpu(c,0,c->r[3],c->r[0]); // 804C0CAC
  if (!crb(c,2)) { goto L_804C0CB8; } // 804C0CB0
  c->r[5]=0u+0x00000001u; // 804C0CB4
L_804C0CB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804C0CB8
  if (crb(c,2)) { goto L_804C0CC8; } // 804C0CBC
  c->r[5]=0u+0x00000001u; // 804C0CC0
  goto L_804C0CE8; // 804C0CC4
L_804C0CC8:;
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 804C0CC8
  c->r[3]=c->r[31]+0x00000204u; // 804C0CCC
  c->r[0]=R32(c->r[6]+0x00000010u); // 804C0CD0
  c->r[5]=0u+0x00000000u; // 804C0CD4
  W32(c->r[31]+0x00000204u,c->r[4]); // 804C0CD8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C0CDC
  c->r[0]=R32(c->r[6]+0x00000014u); // 804C0CE0
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C0CE4
L_804C0CE8:;
  c->r[4]=R8(c->r[13]+0xFFFFE470u); // 804C0CE8
  c->r[0]=0u+0x00000000u; // 804C0CEC
  c->r[3]=c->r[30]|c->r[30]; // 804C0CF0
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804C0CF4
  c->lr=0x804C0CFCu; f_804AD7A4(c); // 804C0CF8
L_804C0CFC:;
  c->r[11]=c->r[1]+0x00000020u; // 804C0CFC
  c->lr=0x804C0D04u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C0D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C0D04
  c->lr=c->r[0]; // 804C0D08
  c->r[1]=c->r[1]+0x00000020u; // 804C0D0C
  return; // 804C0D10
}

// fn_804C0D14
void f_804C0D14(Ctx* __restrict c) {
  trace_call(0x804C0D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C0D14
  c->r[0]=c->lr; // 804C0D18
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C0D1C
  c->r[11]=c->r[1]+0x00000060u; // 804C0D20
  c->lr=0x804C0D28u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C0D24
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C0D28
  c->r[31]=0u+0x80810000u; // 804C0D2C
  c->r[27]=c->r[3]|c->r[3]; // 804C0D30
  c->r[28]=c->r[4]|c->r[4]; // 804C0D34
  cmps(c,0,(int32_t)c->r[0],0); // 804C0D38
  c->r[29]=c->r[5]|c->r[5]; // 804C0D3C
  c->r[31]=c->r[31]+0xFFFFAC00u; // 804C0D40
  if (crb(c,2)) { goto L_804C0FEC; } // 804C0D44
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804C0D48
  c->r[23]=R8(c->r[31]+0x00000000u); // 804C0D4C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804C0D50
  if (crb(c,2)) { goto L_804C0DE4; } // 804C0D54
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804C0D58
  if (!crb(c,2)) { goto L_804C0DE4; } // 804C0D5C
  cmps(c,0,(int32_t)c->r[23],0); // 804C0D60
  if (crb(c,2)) { goto L_804C0DE4; } // 804C0D64
  c->r[24]=c->r[31]+0x0000000Cu; // 804C0D68
  c->r[25]=0u+0x00000000u; // 804C0D6C
  goto L_804C0DCC; // 804C0D70
L_804C0D74:;
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 804C0D74
  c->r[7]=c->r[24]+c->r[3]; // 804C0D78
  c->r[0]=R8(c->r[7]+0x00000064u); // 804C0D7C
  cmpu(c,0,c->r[0],0x000000FFu); // 804C0D80
  if (crb(c,2)) { goto L_804C0DC8; } // 804C0D84
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 804C0D88
  c->r[5]=rotl(c->r[25],3)&0x000007F8u; // 804C0D8C
  c->r[4]=c->r[24]+c->r[0]; // 804C0D90
  c->r[6]=0u+0x00000000u; // 804C0D94
  c->r[4]=R16(c->r[4]+0x00000004u); // 804C0D98
  c->r[10]=c->r[24]+c->r[5]; // 804C0D9C
  c->r[5]=0u+0x00000000u; // 804C0DA0
  c->r[8]=0u+0x00000000u; // 804C0DA4
  W16(c->r[10]+0x00000024u,c->r[4]); // 804C0DA8
  c->r[9]=0u+0x00000000u; // 804C0DAC
  c->r[0]=R8(c->r[7]+0x00000064u); // 804C0DB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C0DB4
  c->r[7]=c->r[24]+c->r[0]; // 804C0DB8
  c->r[7]=R16(c->r[7]+0x00000006u); // 804C0DBC
  W16(c->r[10]+0x00000026u,c->r[7]); // 804C0DC0
  c->lr=0x804C0DC8u; f_804BDCB0(c); // 804C0DC4
L_804C0DC8:;
  c->r[25]=c->r[25]+0x00000001u; // 804C0DC8
L_804C0DCC:;
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 804C0DCC
  cmpu(c,0,c->r[0],c->r[23]); // 804C0DD0
  if (crb(c,0)) { IRQCHK(c); goto L_804C0D74; } // 804C0DD4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804C0DD8
  c->r[0]=c->r[0]|0x00000001u; // 804C0DDC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 804C0DE0
L_804C0DE4:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 804C0DE4
  c->r[18]=R32(c->r[3]+0x00000008u); // 804C0DE8
  c->r[30]=rotl(c->r[18],1)&0x00000001u; cr0(c,c->r[30]); // 804C0DEC
  if (!crb(c,2)) { goto L_804C0F74; } // 804C0DF0
  cmps(c,0,(int32_t)c->r[28],0); // 804C0DF4
  if (crb(c,2)) { goto L_804C0E40; } // 804C0DF8
  c->r[3]=c->r[28]|c->r[28]; // 804C0DFC
  c->r[4]=0u+0x00000000u; // 804C0E00
  c->lr=0x804C0E08u; f_803A8540(c); // 804C0E04
  c->r[3]=R32(c->r[27]+0x00000000u); // 804C0E08
  c->r[0]=R32(c->r[3]+0x00000030u); // 804C0E0C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C0E10
  if (crb(c,2)) { goto L_804C0E68; } // 804C0E14
  cmps(c,0,(int32_t)c->r[29],0); // 804C0E18
  if (crb(c,2)) { goto L_804C0E30; } // 804C0E1C
  c->r[3]=c->r[29]|c->r[29]; // 804C0E20
  c->r[4]=0u+0x00000000u; // 804C0E24
  c->lr=0x804C0E2Cu; f_803A85BC(c); // 804C0E28
  goto L_804C0E68; // 804C0E2C
L_804C0E30:;
  c->r[3]=c->r[28]|c->r[28]; // 804C0E30
  c->r[4]=0u+0x00000000u; // 804C0E34
  c->lr=0x804C0E3Cu; f_803A85BC(c); // 804C0E38
  goto L_804C0E68; // 804C0E3C
L_804C0E40:;
  c->r[3]=rotl(c->r[18],0)&0x0000FFFFu; // 804C0E40
  c->r[4]=0u+0x00000000u; // 804C0E44
  c->lr=0x804C0E4Cu; f_803A8590(c); // 804C0E48
  c->r[3]=R32(c->r[27]+0x00000000u); // 804C0E4C
  c->r[0]=R32(c->r[3]+0x00000030u); // 804C0E50
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C0E54
  if (crb(c,2)) { goto L_804C0E68; } // 804C0E58
  c->r[3]=rotl(c->r[18],0)&0x0000FFFFu; // 804C0E5C
  c->r[4]=0u+0x00000000u; // 804C0E60
  c->lr=0x804C0E68u; f_803A8614(c); // 804C0E64
L_804C0E68:;
  cmps(c,0,(int32_t)c->r[18],0); // 804C0E68
  c->r[3]=0u+0x00000001u; // 804C0E6C
  if (crb(c,0)) { goto L_804C0F8C; } // 804C0E70
  c->r[0]=rotl(c->r[18],0)&0x0000FFFFu; // 804C0E74
  c->r[22]=c->r[31]+0x00000210u; // 804C0E78
  c->r[19]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804C0E7C
  c->r[20]=c->r[1]+0x00000008u; // 804C0E80
  c->r[24]=c->r[31]+0x00000230u; // 804C0E84
  c->r[23]=0u+0x00000000u; // 804C0E88
  c->r[18]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C0E8C
  c->r[21]=0u+0x0000001Eu; // 804C0E90
  c->r[25]=0u+0x00000001u; // 804C0E94
  c->r[26]=0u+0x80810000u; // 804C0E98
  c->r[28]=0u+0x0000003Cu; // 804C0E9C
  c->r[29]=0u+0x00000000u; // 804C0EA0
L_804C0EA4:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 804C0EA4
  cmps(c,0,(int32_t)c->r[0],1); // 804C0EA8
  if (!crb(c,2)) { goto L_804C0F0C; } // 804C0EAC
  c->r[0]=R32(c->r[24]+0x00000004u); // 804C0EB0
  W32(c->r[20]+0x00000000u,c->r[21]); // 804C0EB4
  cmps(c,0,(int32_t)c->r[0],0); // 804C0EB8
  if (crb(c,2)) { goto L_804C0EC8; } // 804C0EBC
  c->r[3]=c->r[0]+c->r[19]; // 804C0EC0
  goto L_804C0EFC; // 804C0EC4
L_804C0EC8:;
  c->r[0]=R8(c->r[13]+0xFFFFE480u); // 804C0EC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804C0ECC
  if (!crb(c,2)) { goto L_804C0ED8; } // 804C0ED0
  W8(c->r[13]+0xFFFFE480u,c->r[25]); // 804C0ED4
L_804C0ED8:;
  c->r[0]=R32(c->r[31]+0x00000230u); // 804C0ED8
  c->r[3]=c->r[26]+0x00000198u; // 804C0EDC
  cmps(c,0,(int32_t)c->r[0],0); // 804C0EE0
  if (crb(c,2)) { goto L_804C0EF0; } // 804C0EE4
  c->r[4]=c->r[0]+c->r[18]; // 804C0EE8
  goto L_804C0EF4; // 804C0EEC
L_804C0EF0:;
  c->r[4]=0u+0x00000000u; // 804C0EF0
L_804C0EF4:;
  c->lr=0x804C0EF8u; f_804B4AB8(c); // 804C0EF4
  c->r[3]=c->r[26]+0x00000198u; // 804C0EF8
L_804C0EFC:;
  c->r[4]=R32(c->r[20]+0x00000000u); // 804C0EFC
  c->lr=0x804C0F04u; f_804BE090(c); // 804C0F00
  c->r[3]=0u+0x00000000u; // 804C0F04
  goto L_804C0F24; // 804C0F08
L_804C0F0C:;
  cmps(c,0,(int32_t)c->r[0],2); // 804C0F0C
  if (!crb(c,2)) { goto L_804C0F20; } // 804C0F10
  W32(c->r[20]+0x00000000u,c->r[29]); // 804C0F14
  c->r[3]=0u+0x00000000u; // 804C0F18
  goto L_804C0F24; // 804C0F1C
L_804C0F20:;
  W32(c->r[20]+0x00000000u,c->r[28]); // 804C0F20
L_804C0F24:;
  c->r[23]=c->r[23]+0x00000001u; // 804C0F24
  c->r[21]=c->r[21]+0x00000003u; // 804C0F28
  cmpu(c,0,c->r[23],0x00000008u); // 804C0F2C
  c->r[20]=c->r[20]+0x00000004u; // 804C0F30
  c->r[22]=c->r[22]+0x00000004u; // 804C0F34
  if (crb(c,0)) { IRQCHK(c); goto L_804C0EA4; } // 804C0F38
  cmps(c,0,(int32_t)c->r[3],0); // 804C0F3C
  if (crb(c,2)) { goto L_804C0F60; } // 804C0F40
  c->r[0]=R8(c->r[13]+0xFFFFE474u); // 804C0F44
  cmps(c,0,(int32_t)c->r[0],0); // 804C0F48
  if (!crb(c,2)) { goto L_804C0F8C; } // 804C0F4C
  c->lr=0x804C0F54u; f_804BDFB8(c); // 804C0F50
  c->r[0]=0u+0x00000001u; // 804C0F54
  W8(c->r[13]+0xFFFFE474u,c->r[0]); // 804C0F58
  goto L_804C0F8C; // 804C0F5C
L_804C0F60:;
  c->r[3]=c->r[1]+0x00000008u; // 804C0F60
  c->lr=0x804C0F68u; f_804BE014(c); // 804C0F64
  c->r[0]=0u+0x00000000u; // 804C0F68
  W8(c->r[13]+0xFFFFE474u,c->r[0]); // 804C0F6C
  goto L_804C0F8C; // 804C0F70
L_804C0F74:;
  c->r[0]=R8(c->r[13]+0xFFFFE474u); // 804C0F74
  cmps(c,0,(int32_t)c->r[0],0); // 804C0F78
  if (!crb(c,2)) { goto L_804C0F8C; } // 804C0F7C
  c->lr=0x804C0F84u; f_804BDFB8(c); // 804C0F80
  c->r[0]=0u+0x00000001u; // 804C0F84
  W8(c->r[13]+0xFFFFE474u,c->r[0]); // 804C0F88
L_804C0F8C:;
  c->r[28]=c->r[31]+0x00000000u; // 804C0F8C
  c->r[3]=R32(c->r[28]+0x00000008u); // 804C0F90
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804C0F94
  if (crb(c,2)) { goto L_804C0FCC; } // 804C0F98
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 804C0F9C
  cmpu(c,0,c->r[0],0x00000003u); // 804C0FA0
  if (crb(c,2)) { goto L_804C0FCC; } // 804C0FA4
  c->r[3]=R8(c->r[31]+0x00000000u); // 804C0FA8
  c->r[4]=R8(c->r[28]+0x00000001u); // 804C0FAC
  c->r[5]=R8(c->r[28]+0x00000002u); // 804C0FB0
  c->r[6]=R8(c->r[28]+0x00000003u); // 804C0FB4
  c->r[7]=R32(c->r[28]+0x00000004u); // 804C0FB8
  c->lr=0x804C0FC0u; f_804BDC00(c); // 804C0FBC
  c->r[0]=R32(c->r[28]+0x00000008u); // 804C0FC0
  c->r[0]=c->r[0]|0x00000003u; // 804C0FC4
  W32(c->r[28]+0x00000008u,c->r[0]); // 804C0FC8
L_804C0FCC:;
  c->r[4]=R8(c->r[13]+0xFFFFE470u); // 804C0FCC
  c->r[28]=0u+0x00000000u; // 804C0FD0
  c->r[3]=c->r[27]|c->r[27]; // 804C0FD4
  W8(c->r[13]+0xFFFFE470u,c->r[28]); // 804C0FD8
  c->lr=0x804C0FE0u; f_804AD87C(c); // 804C0FDC
  cmps(c,0,(int32_t)c->r[30],0); // 804C0FE0
  if (crb(c,2)) { goto L_804C0FEC; } // 804C0FE4
  W8(c->r[13]+0xFFFFE474u,c->r[28]); // 804C0FE8
L_804C0FEC:;
  c->r[11]=c->r[1]+0x00000060u; // 804C0FEC
  c->lr=0x804C0FF4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C0FF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 804C0FF4
  c->lr=c->r[0]; // 804C0FF8
  c->r[1]=c->r[1]+0x00000060u; // 804C0FFC
  return; // 804C1000
}

// SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_804C1004(Ctx* __restrict c) {
  trace_call(0x804C1004u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1004
  c->r[0]=c->lr; // 804C1008
  c->r[7]=0u+0x80810000u; // 804C100C
  cmps(c,0,(int32_t)c->r[3],0); // 804C1010
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C1014
  c->r[6]=c->r[7]+0xFFFFAE30u; // 804C1018
  W32(c->r[7]+0xFFFFAE30u,c->r[3]); // 804C101C
  W32(c->r[6]+0x00000004u,c->r[4]); // 804C1020
  W32(c->r[6]+0x00000008u,c->r[5]); // 804C1024
  if (crb(c,2)) { goto L_804C103C; } // 804C1028
  c->r[4]=c->r[3]|c->r[3]; // 804C102C
  c->r[3]=0u+0x00000015u; // 804C1030
  c->r[5]=0u+0x00000030u; // 804C1034
  c->lr=0x804C103Cu; f_803A3C04(c); // 804C1038
L_804C103C:;
  c->r[3]=0u+0x80810000u; // 804C103C
  c->r[3]=c->r[3]+0xFFFFAE30u; // 804C1040
  c->r[4]=R32(c->r[3]+0x00000004u); // 804C1044
  cmps(c,0,(int32_t)c->r[4],0); // 804C1048
  if (crb(c,2)) { goto L_804C105C; } // 804C104C
  c->r[3]=0u+0x00000016u; // 804C1050
  c->r[5]=0u+0x00000024u; // 804C1054
  c->lr=0x804C105Cu; f_803A3C04(c); // 804C1058
L_804C105C:;
  c->r[3]=0u+0x80810000u; // 804C105C
  c->r[3]=c->r[3]+0xFFFFAE30u; // 804C1060
  c->r[4]=R32(c->r[3]+0x00000008u); // 804C1064
  cmps(c,0,(int32_t)c->r[4],0); // 804C1068
  if (crb(c,2)) { goto L_804C107C; } // 804C106C
  c->r[3]=0u+0x00000017u; // 804C1070
  c->r[5]=0u+0x00000030u; // 804C1074
  c->lr=0x804C107Cu; f_803A3C04(c); // 804C1078
L_804C107C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C107C
  c->lr=c->r[0]; // 804C1080
  c->r[1]=c->r[1]+0x00000010u; // 804C1084
  return; // 804C1088
}

// fn_804C108C
void f_804C108C(Ctx* __restrict c) {
  trace_call(0x804C108Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C108C
  c->r[0]=c->lr; // 804C1090
  c->r[4]=0u+0x80810000u; // 804C1094
  c->r[5]=c->r[3]|c->r[3]; // 804C1098
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C109C
  c->r[4]=c->r[4]+0xFFFFAE30u; // 804C10A0
  c->r[4]=R32(c->r[4]+0x00000004u); // 804C10A4
  cmps(c,0,(int32_t)c->r[4],0); // 804C10A8
  if (crb(c,2)) { goto L_804C10BC; } // 804C10AC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)36); // 804C10B0
  c->r[3]=c->r[4]+c->r[0]; // 804C10B4
  goto L_804C1104; // 804C10B8
L_804C10BC:;
  c->r[0]=R8(c->r[13]+0xFFFFE480u); // 804C10BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804C10C0
  if (!crb(c,2)) { goto L_804C10D0; } // 804C10C4
  c->r[0]=0u+0x00000001u; // 804C10C8
  W8(c->r[13]+0xFFFFE480u,c->r[0]); // 804C10CC
L_804C10D0:;
  c->r[4]=0u+0x80810000u; // 804C10D0
  c->r[3]=0u+0x80810000u; // 804C10D4
  c->r[4]=R32(c->r[4]+0xFFFFAE30u); // 804C10D8
  c->r[3]=c->r[3]+0x00000198u; // 804C10DC
  cmps(c,0,(int32_t)c->r[4],0); // 804C10E0
  if (crb(c,2)) { goto L_804C10F4; } // 804C10E4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 804C10E8
  c->r[4]=c->r[4]+c->r[0]; // 804C10EC
  goto L_804C10F8; // 804C10F0
L_804C10F4:;
  c->r[4]=0u+0x00000000u; // 804C10F4
L_804C10F8:;
  c->lr=0x804C10FCu; f_804B4AB8(c); // 804C10F8
  c->r[3]=0u+0x80810000u; // 804C10FC
  c->r[3]=c->r[3]+0x00000198u; // 804C1100
L_804C1104:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1104
  c->lr=c->r[0]; // 804C1108
  c->r[1]=c->r[1]+0x00000010u; // 804C110C
  return; // 804C1110
}

// SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType
void f_804C1114(Ctx* __restrict c) {
  trace_call(0x804C1114u);
  cmpu(c,0,c->r[3],0x00000004u); // 804C1114
  if (!crb(c,1)) return; // 804C1118
  cmpu(c,0,c->r[3],0x00000100u); // 804C111C
  if (!crb(c,0)) return; // 804C1120
  cmps(c,0,(int32_t)c->r[4],0); // 804C1124
  if (crb(c,2)) { goto L_804C1154; } // 804C1128
  cmps(c,0,(int32_t)c->r[5],4); // 804C112C
  if (crb(c,0)) { goto L_804C1138; } // 804C1130
  c->r[5]=0u+0x00000000u; // 804C1134
L_804C1138:;
  c->r[6]=0u+0x80810000u; // 804C1138
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804C113C
  c->r[6]=c->r[6]+0xFFFFAE40u; // 804C1140
  W32(c->r[6]+c->r[0],c->r[4]); // 804C1144
  c->r[3]=c->r[6]+c->r[0]; // 804C1148
  W32(c->r[3]+0x00000004u,c->r[5]); // 804C114C
  return; // 804C1150
L_804C1154:;
  c->r[5]=0u+0x804C0000u; // 804C1154
  c->r[4]=0u+0x80810000u; // 804C1158
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804C115C
  c->r[0]=0u+0x00000000u; // 804C1160
  c->r[4]=c->r[4]+0xFFFFAE40u; // 804C1164
  c->r[5]=c->r[5]+0xFFFFEC90u; // 804C1168
  W32(c->r[4]+c->r[3],c->r[5]); // 804C116C
  c->r[3]=c->r[4]+c->r[3]; // 804C1170
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C1174
  return; // 804C1178
}

// fn_804C117C
void f_804C117C(Ctx* __restrict c) {
  trace_call(0x804C117Cu);
  c->r[3]=R32(c->r[13]+0xFFFFA284u); // 804C117C
  return; // 804C1180
}

// fn_804C1184
void f_804C1184(Ctx* __restrict c) {
  trace_call(0x804C1184u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1184
  c->r[0]=c->lr; // 804C1188
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C118C
  cmps(c,0,(int32_t)c->r[4],0); // 804C1190
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C1194
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C1198
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C119C
  c->r[30]=c->r[4]|c->r[4]; // 804C11A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C11A4
  if (crb(c,0)) { goto L_804C1210; } // 804C11A8
  cmps(c,0,(int32_t)c->r[4],32); // 804C11AC
  if (!crb(c,0)) { goto L_804C1210; } // 804C11B0
  cmps(c,0,(int32_t)c->r[3],0); // 804C11B4
  if (crb(c,2)) { goto L_804C1210; } // 804C11B8
  c->r[31]=0u+0x80810000u; // 804C11BC
  c->r[6]=c->r[31]+0xFFFFB640u; // 804C11C0
  c->r[0]=R32(c->r[6]+0x00000004u); // 804C11C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804C11C8
  if (!crb(c,2)) { goto L_804C11F4; } // 804C11CC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804C11D0
  c->r[5]=0u+0x00000030u; // 804C11D4
  c->r[4]=c->r[6]+c->r[0]; // 804C11D8
  c->r[4]=c->r[4]+0x00000008u; // 804C11DC
  c->lr=0x804C11E4u; f_803AF7B8(c); // 804C11E0
  cmps(c,0,(int32_t)c->r[3],0); // 804C11E4
  if (crb(c,2)) { goto L_804C1210; } // 804C11E8
  c->r[0]=0u+0x00000000u; // 804C11EC
  W32(c->r[31]+0xFFFFB640u,c->r[0]); // 804C11F0
L_804C11F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)48); // 804C11F4
  c->r[4]=0u+0x80810000u; // 804C11F8
  c->r[3]=c->r[1]+0x00000008u; // 804C11FC
  c->r[4]=c->r[4]+0xFFFFB640u; // 804C1200
  c->r[4]=c->r[4]+c->r[0]; // 804C1204
  c->r[4]=c->r[4]+0x00000008u; // 804C1208
  c->lr=0x804C1210u; f_804D31F4(c); // 804C120C
L_804C1210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C1210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C1214
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C1218
  c->lr=c->r[0]; // 804C121C
  c->r[1]=c->r[1]+0x00000020u; // 804C1220
  return; // 804C1224
}

// fn_804C1228
void f_804C1228(Ctx* __restrict c) {
  trace_call(0x804C1228u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1228
  c->r[0]=c->lr; // 804C122C
  c->r[4]=0u+0x80810000u; // 804C1230
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C1234
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C1238
  c->r[31]=c->r[3]|c->r[3]; // 804C123C
  c->r[5]=R32(c->r[4]+0xFFFFB640u); // 804C1240
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 804C1244
  if (crb(c,2)) { goto L_804C1264; } // 804C1248
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804C124C
  if (crb(c,2)) { goto L_804C1264; } // 804C1250
  c->r[4]=c->r[4]+0xFFFFB640u; // 804C1254
  c->r[0]=R32(c->r[4]+0x00000004u); // 804C1258
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804C125C
  if (crb(c,2)) { goto L_804C12D4; } // 804C1260
L_804C1264:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C1264
  if (crb(c,0)) { goto L_804C1274; } // 804C1268
  cmps(c,0,(int32_t)c->r[3],32); // 804C126C
  if (crb(c,0)) { goto L_804C129C; } // 804C1270
L_804C1274:;
  {uint32_t ea=c->r[2]+0x00001614u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C1274
  c->r[0]=0u+0x00000000u; // 804C1278
  W32(c->r[1]+0x00000008u,c->r[0]); // 804C127C
  c->r[4]=c->r[1]+0x00000008u; // 804C1280
  c->f[2]=c->f[1]; // 804C1284
  c->r[3]=0u+0x00000000u; // 804C1288
  c->f[3]=c->f[1]; // 804C128C
  c->f[4]=c->f[1]; // 804C1290
  c->lr=0x804C1298u; f_803A7AD0(c); // 804C1294
  goto L_804C12BC; // 804C1298
L_804C129C:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804C129C
  c->r[4]=0u+0x80810000u; // 804C12A0
  c->r[3]=c->r[1]+0x0000000Cu; // 804C12A4
  c->r[4]=c->r[4]+0xFFFFB640u; // 804C12A8
  c->r[4]=c->r[4]+c->r[0]; // 804C12AC
  c->r[4]=c->r[4]+0x00000008u; // 804C12B0
  c->lr=0x804C12B8u; f_804D317C(c); // 804C12B4
  c->lr=0x804C12BCu; f_804D32F0(c); // 804C12B8
L_804C12BC:;
  c->r[4]=0u+0x80810000u; // 804C12BC
  c->r[0]=R32(c->r[4]+0xFFFFB640u); // 804C12C0
  c->r[3]=c->r[4]+0xFFFFB640u; // 804C12C4
  W32(c->r[3]+0x00000004u,c->r[31]); // 804C12C8
  c->r[0]=c->r[0]|0x00000003u; // 804C12CC
  W32(c->r[4]+0xFFFFB640u,c->r[0]); // 804C12D0
L_804C12D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C12D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C12D8
  c->lr=c->r[0]; // 804C12DC
  c->r[1]=c->r[1]+0x00000020u; // 804C12E0
  return; // 804C12E4
}

// SetLightSetting__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d12LightSetting
void f_804C12E8(Ctx* __restrict c) {
  trace_call(0x804C12E8u);
  c->r[5]=0u+0x80810000u; // 804C12E8
  c->r[4]=c->r[3]|c->r[3]; // 804C12EC
  c->r[3]=c->r[5]+0xFFFFBC54u; // 804C12F0
  f_804BED68(c); return; // 804C12F4
}

// fn_804C12F8
void f_804C12F8(Ctx* __restrict c) {
  trace_call(0x804C12F8u);
  cmps(c,0,(int32_t)c->r[4],0); // 804C12F8
  c->r[6]=R32(c->r[3]+0x00000004u); // 804C12FC
  if (crb(c,0)) return; // 804C1300
  cmps(c,0,(int32_t)c->r[4],128); // 804C1304
  if (!crb(c,0)) return; // 804C1308
  c->r[5]=0u+0x80810000u; // 804C130C
  c->r[5]=c->r[5]+0xFFFFBC54u; // 804C1310
  c->r[0]=R32(c->r[5]+0x00000010u); // 804C1314
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804C1318
  if (!crb(c,2)) { goto L_804C133C; } // 804C131C
  c->r[0]=0u+0x00000000u; // 804C1320
  c->r[3]=0u+0xFFFFFFFFu; // 804C1324
  W32(c->r[5]+0x00000010u,c->r[3]); // 804C1328
  W32(c->r[5]+0x00000014u,c->r[0]); // 804C132C
  W32(c->r[5]+0x00000018u,c->r[0]); // 804C1330
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804C1334
  W32(c->r[5]+0x00000020u,c->r[0]); // 804C1338
L_804C133C:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804C133C
  c->r[4]=0u+0x80810000u; // 804C1340
  c->r[3]=R8(c->r[6]+0x00000000u); // 804C1344
  c->r[4]=c->r[4]+0xFFFFBC54u; // 804C1348
  c->r[0]=R8(c->r[6]+0x00000001u); // 804C134C
  c->r[4]=c->r[4]+c->r[5]; // 804C1350
  W8(c->r[4]+0x0000242Cu,c->r[3]); // 804C1354
  W8(c->r[4]+0x0000242Du,c->r[0]); // 804C1358
  c->r[3]=R8(c->r[6]+0x00000002u); // 804C135C
  c->r[0]=R8(c->r[6]+0x00000003u); // 804C1360
  W8(c->r[4]+0x0000242Eu,c->r[3]); // 804C1364
  W8(c->r[4]+0x0000242Fu,c->r[0]); // 804C1368
  c->r[3]=R8(c->r[6]+0x00000004u); // 804C136C
  c->r[0]=R8(c->r[6]+0x00000005u); // 804C1370
  W8(c->r[4]+0x00002430u,c->r[3]); // 804C1374
  W8(c->r[4]+0x00002431u,c->r[0]); // 804C1378
  c->r[3]=R8(c->r[6]+0x00000006u); // 804C137C
  c->r[0]=R8(c->r[6]+0x00000007u); // 804C1380
  W8(c->r[4]+0x00002432u,c->r[3]); // 804C1384
  W8(c->r[4]+0x00002433u,c->r[0]); // 804C1388
  c->r[0]=R8(c->r[6]+0x00000008u); // 804C138C
  W8(c->r[4]+0x00002434u,c->r[0]); // 804C1390
  c->r[0]=R8(c->r[6]+0x00000009u); // 804C1394
  W8(c->r[4]+0x00002435u,c->r[0]); // 804C1398
  c->r[0]=R8(c->r[6]+0x0000000Au); // 804C139C
  W8(c->r[4]+0x00002436u,c->r[0]); // 804C13A0
  c->r[0]=R8(c->r[6]+0x0000000Bu); // 804C13A4
  W8(c->r[4]+0x00002437u,c->r[0]); // 804C13A8
  return; // 804C13AC
}

// fn_804C13B0
void f_804C13B0(Ctx* __restrict c) {
  trace_call(0x804C13B0u);
  c->r[0]=c->r[3]|c->r[3]; // 804C13B0
  c->r[3]=0u+0x80810000u; // 804C13B4
  c->r[5]=c->r[4]|c->r[4]; // 804C13B8
  c->r[4]=c->r[0]|c->r[0]; // 804C13BC
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804C13C0
  f_804BEE5C(c); return; // 804C13C4
}

// fn_804C13C8
void f_804C13C8(Ctx* __restrict c) {
  trace_call(0x804C13C8u);
  cmps(c,0,(int32_t)c->r[3],0); // 804C13C8
  if (crb(c,0)) { goto L_804C13F0; } // 804C13CC
  cmps(c,0,(int32_t)c->r[3],128); // 804C13D0
  if (!crb(c,0)) { goto L_804C13F0; } // 804C13D4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 804C13D8
  c->r[3]=0u+0x80810000u; // 804C13DC
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804C13E0
  c->r[3]=c->r[3]+c->r[0]; // 804C13E4
  c->r[3]=c->r[3]+0x0000002Cu; // 804C13E8
  return; // 804C13EC
L_804C13F0:;
  c->r[3]=0u+0x00000000u; // 804C13F0
  return; // 804C13F4
}

// fn_804C13F8
void f_804C13F8(Ctx* __restrict c) {
  trace_call(0x804C13F8u);
  cmps(c,0,(int32_t)c->r[4],0); // 804C13F8
  if (crb(c,0)) return; // 804C13FC
  cmps(c,0,(int32_t)c->r[4],128); // 804C1400
  if (!crb(c,0)) return; // 804C1404
  c->r[5]=0u+0x80810000u; // 804C1408
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804C140C
  c->r[5]=c->r[5]+0xFFFFBC54u; // 804C1410
  c->r[4]=R8(c->r[3]+0x00000000u); // 804C1414
  c->r[5]=c->r[5]+c->r[0]; // 804C1418
  c->r[0]=R8(c->r[3]+0x00000001u); // 804C141C
  W8(c->r[5]+0x0000222Cu,c->r[4]); // 804C1420
  c->r[4]=R8(c->r[3]+0x00000002u); // 804C1424
  W8(c->r[5]+0x0000222Du,c->r[0]); // 804C1428
  c->r[0]=R8(c->r[3]+0x00000003u); // 804C142C
  W8(c->r[5]+0x0000222Eu,c->r[4]); // 804C1430
  W8(c->r[5]+0x0000222Fu,c->r[0]); // 804C1434
  return; // 804C1438
}

// LoadLightSet__Q34nw4r3g3d8G3DStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_804C143C(Ctx* __restrict c) {
  trace_call(0x804C143Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C143C
  c->r[0]=c->lr; // 804C1440
  c->r[12]=c->r[4]|c->r[4]; // 804C1444
  c->r[11]=c->r[5]|c->r[5]; // 804C1448
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C144C
  c->r[10]=c->r[6]|c->r[6]; // 804C1450
  c->r[0]=c->r[7]|c->r[7]; // 804C1454
  c->r[9]=c->r[8]|c->r[8]; // 804C1458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C145C
  c->r[31]=c->r[3]|c->r[3]; // 804C1460
  c->r[3]=0u+0x80810000u; // 804C1464
  c->r[5]=c->r[12]|c->r[12]; // 804C1468
  c->r[4]=c->r[31]|c->r[31]; // 804C146C
  c->r[6]=c->r[11]|c->r[11]; // 804C1470
  c->r[7]=c->r[10]|c->r[10]; // 804C1474
  c->r[8]=c->r[0]|c->r[0]; // 804C1478
  c->r[3]=c->r[3]+0xFFFFBC54u; // 804C147C
  c->lr=0x804C1484u; f_804BF078(c); // 804C1480
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C1488
  c->lr=c->r[0]; // 804C148C
  c->r[1]=c->r[1]+0x00000010u; // 804C1490
  return; // 804C1494
}

// fn_804C1498
void f_804C1498(Ctx* __restrict c) {
  trace_call(0x804C1498u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1498
  c->r[0]=c->lr; // 804C149C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C14A0
  c->r[11]=c->r[1]+0x00000020u; // 804C14A4
  c->lr=0x804C14ACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C14A8
  cmps(c,0,(int32_t)c->r[4],32); // 804C14AC
  c->r[26]=c->r[3]|c->r[3]; // 804C14B0
  c->r[27]=c->r[4]|c->r[4]; // 804C14B4
  c->r[28]=c->r[5]|c->r[5]; // 804C14B8
  if (!crb(c,0)) { goto L_804C152C; } // 804C14BC
  cmps(c,0,(int32_t)c->r[4],0); // 804C14C0
  if (crb(c,0)) { goto L_804C152C; } // 804C14C4
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804C14C8
  c->r[30]=0u+0x80810000u; // 804C14CC
  c->r[31]=c->r[30]+0xFFFFE680u; // 804C14D0
  c->r[4]=c->r[31]+c->r[29]; // 804C14D4
  c->r[4]=c->r[4]+0x00000034u; // 804C14D8
  c->lr=0x804C14E0u; f_804C7FD8(c); // 804C14DC
  c->r[0]=rotl(c->r[27],6)&0xFFFFFFC0u; // 804C14E0
  c->r[3]=c->r[26]|c->r[26]; // 804C14E4
  c->r[4]=c->r[31]+c->r[0]; // 804C14E8
  c->r[4]=c->r[4]+0x00000634u; // 804C14EC
  c->lr=0x804C14F4u; f_804C8038(c); // 804C14F0
  c->r[4]=c->r[31]+c->r[29]; // 804C14F4
  c->r[3]=c->r[26]|c->r[26]; // 804C14F8
  c->r[4]=c->r[4]+0x00000E34u; // 804C14FC
  c->lr=0x804C1504u; f_804C8114(c); // 804C1500
  c->r[4]=c->r[31]+c->r[29]; // 804C1504
  c->r[3]=c->r[26]|c->r[26]; // 804C1508
  c->r[4]=c->r[4]+0x00001434u; // 804C150C
  c->lr=0x804C1514u; f_804C81E4(c); // 804C1510
  cmps(c,0,(int32_t)c->r[28],0); // 804C1514
  if (crb(c,2)) { goto L_804C152C; } // 804C1518
  c->r[0]=R16(c->r[30]+0xFFFFE680u); // 804C151C
  W16(c->r[31]+0x00000002u,c->r[27]); // 804C1520
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 804C1524
  W16(c->r[30]+0xFFFFE680u,c->r[0]); // 804C1528
L_804C152C:;
  c->r[11]=c->r[1]+0x00000020u; // 804C152C
  c->lr=0x804C1534u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C1530
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C1534
  c->lr=c->r[0]; // 804C1538
  c->r[1]=c->r[1]+0x00000020u; // 804C153C
  return; // 804C1540
}

// GetCameraMtxPtr__Q34nw4r3g3d8G3DStateFv
void f_804C1544(Ctx* __restrict c) {
  trace_call(0x804C1544u);
  c->r[3]=0u+0x80810000u; // 804C1544
  c->r[3]=c->r[3]+0xFFFFE680u; // 804C1548
  c->r[0]=R16(c->r[3]+0x00000002u); // 804C154C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C1550
  c->r[3]=c->r[3]+c->r[0]; // 804C1554
  c->r[3]=c->r[3]+0x00000034u; // 804C1558
  return; // 804C155C
}

// fn_804C1560
void f_804C1560(Ctx* __restrict c) {
  trace_call(0x804C1560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1560
  c->r[0]=c->lr; // 804C1564
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C1568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C156C
  c->r[31]=0u+0x80810000u; // 804C1570
  c->r[0]=R16(c->r[31]+0xFFFFE680u); // 804C1574
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C1578
  if (!crb(c,2)) { goto L_804C15A8; } // 804C157C
  c->r[3]=c->r[31]+0xFFFFE680u; // 804C1580
  c->r[0]=R16(c->r[3]+0x00000002u); // 804C1584
  c->r[4]=c->r[3]+0x00000004u; // 804C1588
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C158C
  c->r[3]=c->r[3]+c->r[0]; // 804C1590
  c->r[3]=c->r[3]+0x00000034u; // 804C1594
  c->lr=0x804C159Cu; f_80383214(c); // 804C1598
  c->r[0]=R16(c->r[31]+0xFFFFE680u); // 804C159C
  c->r[0]=c->r[0]|0x00000001u; // 804C15A0
  W16(c->r[31]+0xFFFFE680u,c->r[0]); // 804C15A4
L_804C15A8:;
  c->r[3]=0u+0x80810000u; // 804C15A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C15AC
  c->r[3]=c->r[3]+0xFFFFE680u; // 804C15B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C15B4
  c->r[3]=c->r[3]+0x00000004u; // 804C15B8
  c->lr=c->r[0]; // 804C15BC
  c->r[1]=c->r[1]+0x00000010u; // 804C15C0
  return; // 804C15C4
}

// fn_804C15C8
void f_804C15C8(Ctx* __restrict c) {
  trace_call(0x804C15C8u);
  cmps(c,0,(int32_t)c->r[3],32); // 804C15C8
  if (!crb(c,0)) { goto L_804C15F0; } // 804C15CC
  cmps(c,0,(int32_t)c->r[3],0); // 804C15D0
  if (crb(c,0)) { goto L_804C15F0; } // 804C15D4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 804C15D8
  c->r[3]=0u+0x80810000u; // 804C15DC
  c->r[3]=c->r[3]+0xFFFFE680u; // 804C15E0
  c->r[3]=c->r[3]+c->r[0]; // 804C15E4
  c->r[3]=c->r[3]+0x00000034u; // 804C15E8
  return; // 804C15EC
L_804C15F0:;
  c->r[3]=0u+0x00000000u; // 804C15F0
  return; // 804C15F4
}

// fn_804C15F8
void f_804C15F8(Ctx* __restrict c) {
  trace_call(0x804C15F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C15F8
  c->r[0]=c->lr; // 804C15FC
  W32(c->r[1]+0x00000094u,c->r[0]); // 804C1600
  c->r[11]=c->r[1]+0x00000090u; // 804C1604
  c->lr=0x804C160Cu; f_803A9BD0(c); // 804C1608
  c->r[15]=R8(c->r[3]+0x00000029u); // 804C160C
  c->r[4]=0u+0x80810000u; // 804C1610
  c->r[18]=c->r[4]+0x000000B4u; // 804C1614
  c->r[0]=R8(c->r[3]+0x00000027u); // 804C1618
  W32(c->r[1]+0x00000040u,c->r[15]); // 804C161C
  c->r[15]=R8(c->r[3]+0x0000002Au); // 804C1620
  W8(c->r[18]+0x00000027u,c->r[0]); // 804C1624
  c->r[0]=R32(c->r[1]+0x00000040u); // 804C1628
  W32(c->r[1]+0x00000008u,c->r[15]); // 804C162C
  c->r[15]=R8(c->r[3]+0x0000002Bu); // 804C1630
  W8(c->r[18]+0x00000029u,c->r[0]); // 804C1634
  c->r[0]=R32(c->r[1]+0x00000008u); // 804C1638
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 804C163C
  c->r[15]=R8(c->r[3]+0x0000002Cu); // 804C1640
  W8(c->r[18]+0x0000002Au,c->r[0]); // 804C1644
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C1648
  W32(c->r[1]+0x00000010u,c->r[15]); // 804C164C
  c->r[15]=R8(c->r[3]+0x0000002Du); // 804C1650
  W8(c->r[18]+0x0000002Bu,c->r[0]); // 804C1654
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C1658
  W32(c->r[1]+0x00000014u,c->r[15]); // 804C165C
  c->r[15]=R8(c->r[3]+0x0000002Eu); // 804C1660
  W8(c->r[18]+0x0000002Cu,c->r[0]); // 804C1664
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1668
  W32(c->r[1]+0x00000018u,c->r[15]); // 804C166C
  c->r[15]=R8(c->r[3]+0x0000002Fu); // 804C1670
  W8(c->r[18]+0x0000002Du,c->r[0]); // 804C1674
  c->r[0]=R32(c->r[1]+0x00000018u); // 804C1678
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 804C167C
  c->r[15]=R8(c->r[3]+0x00000030u); // 804C1680
  W8(c->r[18]+0x0000002Eu,c->r[0]); // 804C1684
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804C1688
  W32(c->r[1]+0x00000020u,c->r[15]); // 804C168C
  c->r[15]=R8(c->r[3]+0x00000031u); // 804C1690
  W8(c->r[18]+0x0000002Fu,c->r[0]); // 804C1694
  c->r[0]=R32(c->r[1]+0x00000020u); // 804C1698
  W32(c->r[1]+0x00000024u,c->r[15]); // 804C169C
  c->r[15]=R8(c->r[3]+0x00000032u); // 804C16A0
  W8(c->r[18]+0x00000030u,c->r[0]); // 804C16A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C16A8
  W32(c->r[1]+0x00000028u,c->r[15]); // 804C16AC
  c->r[15]=R8(c->r[3]+0x00000033u); // 804C16B0
  W8(c->r[18]+0x00000031u,c->r[0]); // 804C16B4
  c->r[0]=R32(c->r[1]+0x00000028u); // 804C16B8
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 804C16BC
  c->r[15]=R8(c->r[3]+0x00000034u); // 804C16C0
  W8(c->r[18]+0x00000032u,c->r[0]); // 804C16C4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804C16C8
  W32(c->r[1]+0x00000030u,c->r[15]); // 804C16CC
  c->r[15]=R8(c->r[3]+0x00000035u); // 804C16D0
  W8(c->r[18]+0x00000033u,c->r[0]); // 804C16D4
  c->r[0]=R32(c->r[1]+0x00000030u); // 804C16D8
  W32(c->r[1]+0x00000034u,c->r[15]); // 804C16DC
  c->r[15]=R8(c->r[3]+0x00000036u); // 804C16E0
  W8(c->r[18]+0x00000034u,c->r[0]); // 804C16E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C16E8
  W32(c->r[1]+0x00000038u,c->r[15]); // 804C16EC
  c->r[15]=R8(c->r[3]+0x00000037u); // 804C16F0
  W8(c->r[18]+0x00000035u,c->r[0]); // 804C16F4
  c->r[0]=R32(c->r[1]+0x00000038u); // 804C16F8
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 804C16FC
  c->r[17]=R16(c->r[3]+0x00000004u); // 804C1700
  c->r[19]=R16(c->r[3]+0x00000006u); // 804C1704
  c->r[20]=R16(c->r[3]+0x00000008u); // 804C1708
  c->r[21]=R16(c->r[3]+0x0000000Au); // 804C170C
  c->r[22]=R16(c->r[3]+0x0000000Cu); // 804C1710
  c->r[23]=R16(c->r[3]+0x0000000Eu); // 804C1714
  c->r[24]=R16(c->r[3]+0x00000010u); // 804C1718
  c->r[25]=R32(c->r[3]+0x00000014u); // 804C171C
  c->r[26]=R8(c->r[3]+0x00000018u); // 804C1720
  c->r[27]=R8(c->r[3]+0x00000019u); // 804C1724
  c->r[28]=R8(c->r[3]+0x0000001Au); // 804C1728
  c->r[29]=R8(c->r[3]+0x0000001Bu); // 804C172C
  c->r[30]=R8(c->r[3]+0x0000001Cu); // 804C1730
  c->r[31]=R8(c->r[3]+0x0000001Du); // 804C1734
  c->r[12]=R8(c->r[3]+0x0000001Eu); // 804C1738
  c->r[11]=R8(c->r[3]+0x0000001Fu); // 804C173C
  c->r[10]=R8(c->r[3]+0x00000020u); // 804C1740
  c->r[9]=R8(c->r[3]+0x00000021u); // 804C1744
  c->r[8]=R8(c->r[3]+0x00000022u); // 804C1748
  c->r[7]=R8(c->r[3]+0x00000023u); // 804C174C
  c->r[6]=R8(c->r[3]+0x00000024u); // 804C1750
  c->r[5]=R8(c->r[3]+0x00000025u); // 804C1754
  c->r[4]=R8(c->r[3]+0x00000026u); // 804C1758
  c->r[14]=R8(c->r[3]+0x00000028u); // 804C175C
  c->r[15]=R8(c->r[3]+0x00000038u); // 804C1760
  c->r[16]=R32(c->r[3]+0x00000000u); // 804C1764
  c->r[3]=0u+0x80810000u; // 804C1768
  W8(c->r[18]+0x00000036u,c->r[0]); // 804C176C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 804C1770
  W32(c->r[3]+0x000000B4u,c->r[16]); // 804C1774
  W16(c->r[18]+0x00000004u,c->r[17]); // 804C1778
  W16(c->r[18]+0x00000006u,c->r[19]); // 804C177C
  W16(c->r[18]+0x00000008u,c->r[20]); // 804C1780
  W16(c->r[18]+0x0000000Au,c->r[21]); // 804C1784
  W16(c->r[18]+0x0000000Cu,c->r[22]); // 804C1788
  W16(c->r[18]+0x0000000Eu,c->r[23]); // 804C178C
  W16(c->r[18]+0x00000010u,c->r[24]); // 804C1790
  W32(c->r[18]+0x00000014u,c->r[25]); // 804C1794
  W8(c->r[18]+0x00000018u,c->r[26]); // 804C1798
  W8(c->r[18]+0x00000019u,c->r[27]); // 804C179C
  W8(c->r[18]+0x0000001Au,c->r[28]); // 804C17A0
  W8(c->r[18]+0x0000001Bu,c->r[29]); // 804C17A4
  W8(c->r[18]+0x0000001Cu,c->r[30]); // 804C17A8
  W8(c->r[18]+0x0000001Du,c->r[31]); // 804C17AC
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 804C17B0
  W8(c->r[18]+0x0000001Fu,c->r[11]); // 804C17B4
  W8(c->r[18]+0x00000020u,c->r[10]); // 804C17B8
  W8(c->r[18]+0x00000021u,c->r[9]); // 804C17BC
  W8(c->r[18]+0x00000022u,c->r[8]); // 804C17C0
  W8(c->r[18]+0x00000023u,c->r[7]); // 804C17C4
  W8(c->r[18]+0x00000024u,c->r[6]); // 804C17C8
  W8(c->r[18]+0x00000025u,c->r[5]); // 804C17CC
  W8(c->r[18]+0x00000026u,c->r[4]); // 804C17D0
  W8(c->r[18]+0x00000028u,c->r[14]); // 804C17D4
  W8(c->r[18]+0x00000037u,c->r[0]); // 804C17D8
  W8(c->r[18]+0x00000038u,c->r[15]); // 804C17DC
  c->r[11]=c->r[1]+0x00000090u; // 804C17E0
  c->lr=0x804C17E8u; f_803A9C1C(c); // 804C17E4
  c->r[0]=R32(c->r[1]+0x00000094u); // 804C17E8
  c->lr=c->r[0]; // 804C17EC
  c->r[1]=c->r[1]+0x00000090u; // 804C17F0
  return; // 804C17F4
}

// fn_804C17F8
void f_804C17F8(Ctx* __restrict c) {
  trace_call(0x804C17F8u);
  c->r[3]=0u+0x80810000u; // 804C17F8
  c->r[3]=c->r[3]+0x000000B4u; // 804C17FC
  return; // 804C1800
}

// fn_804C1804
void f_804C1804(Ctx* __restrict c) {
  trace_call(0x804C1804u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804C1804
  c->r[4]=0u+0x80810000u; // 804C1808
  c->r[4]=c->r[4]+0xFFFFAC00u; // 804C180C
  if (crb(c,2)) { goto L_804C1824; } // 804C1810
  c->r[0]=0u+0x00000000u; // 804C1814
  c->r[5]=c->r[4]+0x00000080u; // 804C1818
  W8(c->r[5]+0x00000100u,c->r[0]); // 804C181C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 804C1820
L_804C1824:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804C1824
  if (crb(c,2)) { goto L_804C1838; } // 804C1828
  c->r[5]=c->r[4]+0x000001A0u; // 804C182C
  c->r[0]=0u+0x00000000u; // 804C1830
  W16(c->r[5]+0x00000060u,c->r[0]); // 804C1834
L_804C1838:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804C1838
  if (crb(c,2)) { goto L_804C184C; } // 804C183C
  c->r[0]=0u+0x00000000u; // 804C1840
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 804C1844
  W32(c->r[13]+0xFFFFE47Cu,c->r[0]); // 804C1848
L_804C184C:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 804C184C
  if (crb(c,2)) { goto L_804C187C; } // 804C1850
  c->r[7]=0u+0x00000001u; // 804C1854
  c->r[5]=c->r[4]+0x00000000u; // 804C1858
  c->r[6]=0u+0x00000000u; // 804C185C
  c->r[0]=0u+0x00000002u; // 804C1860
  W8(c->r[4]+0x00000000u,c->r[7]); // 804C1864
  W8(c->r[5]+0x00000001u,c->r[6]); // 804C1868
  W8(c->r[5]+0x00000002u,c->r[7]); // 804C186C
  W8(c->r[5]+0x00000003u,c->r[6]); // 804C1870
  W32(c->r[5]+0x00000004u,c->r[0]); // 804C1874
  W32(c->r[5]+0x00000008u,c->r[6]); // 804C1878
L_804C187C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804C187C
  if (crb(c,2)) { goto L_804C1898; } // 804C1880
  c->r[0]=0u+0x00000000u; // 804C1884
  c->r[5]=c->r[4]+0x00000204u; // 804C1888
  W32(c->r[5]+0x00000008u,c->r[0]); // 804C188C
  W32(c->r[5]+0x00000004u,c->r[0]); // 804C1890
  W32(c->r[4]+0x00000204u,c->r[0]); // 804C1894
L_804C1898:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 804C1898
  if (crb(c,2)) { goto L_804C18A8; } // 804C189C
  c->r[0]=0u+0x00000000u; // 804C18A0
  W8(c->r[13]+0xFFFFE474u,c->r[0]); // 804C18A4
L_804C18A8:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 804C18A8
  if (crb(c,2)) { goto L_804C18DC; } // 804C18AC
  c->r[0]=0u+0x00000000u; // 804C18B0
  c->r[5]=c->r[4]+0x00000210u; // 804C18B4
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804C18B8
  W32(c->r[5]+0x00000018u,c->r[0]); // 804C18BC
  W32(c->r[5]+0x00000014u,c->r[0]); // 804C18C0
  W32(c->r[5]+0x00000010u,c->r[0]); // 804C18C4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 804C18C8
  W32(c->r[5]+0x00000008u,c->r[0]); // 804C18CC
  W32(c->r[5]+0x00000004u,c->r[0]); // 804C18D0
  W32(c->r[4]+0x00000210u,c->r[0]); // 804C18D4
  W32(c->r[13]+0xFFFFE478u,c->r[0]); // 804C18D8
L_804C18DC:;
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 804C18DC
  if (crb(c,2)) { goto L_804C18F0; } // 804C18E0
  c->r[0]=R32(c->r[13]+0xFFFFE488u); // 804C18E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804C18E8
  W32(c->r[13]+0xFFFFE488u,c->r[0]); // 804C18EC
L_804C18F0:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 804C18F0
  if (crb(c,2)) { goto L_804C1900; } // 804C18F4
  c->r[0]=0u+0x00000000u; // 804C18F8
  W32(c->r[4]+0x00000A40u,c->r[0]); // 804C18FC
L_804C1900:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 804C1900
  if (crb(c,2)) { goto L_804C1948; } // 804C1904
  c->r[5]=c->r[4]+0x00001054u; // 804C1908
  c->r[6]=0u+0xFFFFFFFFu; // 804C190C
  c->r[0]=0u+0x00000000u; // 804C1910
  W32(c->r[5]+0x00000010u,c->r[6]); // 804C1914
  W32(c->r[5]+0x00000014u,c->r[0]); // 804C1918
  W32(c->r[5]+0x00000018u,c->r[0]); // 804C191C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804C1920
  W32(c->r[5]+0x00000020u,c->r[0]); // 804C1924
  W8(c->r[5]+0x0000002Bu,c->r[6]); // 804C1928
  W8(c->r[5]+0x0000002Au,c->r[6]); // 804C192C
  W8(c->r[5]+0x00000029u,c->r[6]); // 804C1930
  W8(c->r[5]+0x00000028u,c->r[6]); // 804C1934
  W8(c->r[5]+0x00000027u,c->r[6]); // 804C1938
  W8(c->r[5]+0x00000026u,c->r[6]); // 804C193C
  W8(c->r[5]+0x00000025u,c->r[6]); // 804C1940
  W8(c->r[5]+0x00000024u,c->r[6]); // 804C1944
L_804C1948:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 804C1948
  if (crb(c,2)) { goto L_804C1964; } // 804C194C
  c->r[0]=0u+0x00000000u; // 804C1950
  c->r[3]=c->r[4]+0x00000230u; // 804C1954
  W32(c->r[4]+0x00000230u,c->r[0]); // 804C1958
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C195C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C1960
L_804C1964:;
  c->r[0]=0u+0x00000001u; // 804C1964
  W8(c->r[13]+0xFFFFE470u,c->r[0]); // 804C1968
  return; // 804C196C
}

// fn_804C1970
void f_804C1970(Ctx* __restrict c) {
  trace_call(0x804C1970u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1970
  c->r[0]=c->lr; // 804C1974
  cmps(c,0,(int32_t)c->r[4],1); // 804C1978
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C197C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804C1980
  W32(c->r[1]+0x00000028u,c->r[30]); // 804C1984
  W32(c->r[1]+0x00000024u,c->r[29]); // 804C1988
  c->r[29]=c->r[6]|c->r[6]; // 804C198C
  W32(c->r[1]+0x00000020u,c->r[28]); // 804C1990
  c->r[28]=c->r[3]|c->r[3]; // 804C1994
  if (crb(c,0)) { goto L_804C1AB4; } // 804C1998
  cmps(c,0,(int32_t)c->r[4],3); // 804C199C
  if (crb(c,1)) { goto L_804C1AB4; } // 804C19A0
  cmps(c,0,(int32_t)c->r[7],0); // 804C19A4
  if (crb(c,2)) { goto L_804C1AB4; } // 804C19A8
  cmps(c,0,(int32_t)c->r[7],3); // 804C19AC
  if (crb(c,2)) { goto L_804C1AB4; } // 804C19B0
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 804C19B4
  cmps(c,0,(int32_t)c->r[5],0); // 804C19B8
  c->r[4]=c->r[3]+c->r[6]; // 804C19BC
  c->r[0]=0u+0x00000001u; // 804C19C0
  W8(c->r[4]+0x00000004u,c->r[0]); // 804C19C4
  if (crb(c,2)) { goto L_804C1AA4; } // 804C19C8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C19CC
  c->r[30]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 804C19D0
  {uint32_t ea=c->r[2]+0x00001624u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C19D4
  cmps(c,0,(int32_t)c->r[7],2); // 804C19D8
  c->f[0]=-c->f[0]; // 804C19DC
  c->r[3]=c->r[3]+c->r[30]; // 804C19E0
  c->r[31]=c->r[3]+0x00000008u; // 804C19E4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C19E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804C19EC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C19F0
  c->f[0]=-c->f[0]; // 804C19F4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C19F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C19FC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A00
  c->f[0]=-c->f[0]; // 804C1A04
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C1A08
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804C1A0C
  if (!crb(c,2)) { goto L_804C1A7C; } // 804C1A10
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C1A14
  c->r[3]=c->r[1]+0x00000008u; // 804C1A18
  {uint32_t ea=c->r[2]+0x00001620u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A1C
  c->r[4]=c->r[3]|c->r[3]; // 804C1A20
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C1A24
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C1A28
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804C1A2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804C1A30
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804C1A34
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804C1A38
  c->lr=0x804C1A40u; f_80383D38(c); // 804C1A3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A40
  c->r[3]=c->r[28]+c->r[30]; // 804C1A44
  {uint32_t ea=c->r[2]+0x00001624u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C1A48
  c->f[0]=-c->f[0]; // 804C1A4C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C1A50
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 804C1A54
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A58
  c->f[0]=-c->f[0]; // 804C1A5C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C1A60
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C1A64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A68
  c->f[0]=-c->f[0]; // 804C1A6C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C1A70
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 804C1A74
  goto L_804C1A8C; // 804C1A78
L_804C1A7C:;
  {uint32_t ea=c->r[2]+0x00001614u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C1A7C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 804C1A80
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C1A84
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 804C1A88
L_804C1A8C:;
  c->r[3]=c->r[28]+c->r[30]; // 804C1A8C
  c->r[4]=c->r[29]|c->r[29]; // 804C1A90
  c->r[5]=c->r[31]|c->r[31]; // 804C1A94
  c->r[3]=c->r[3]+0x00000008u; // 804C1A98
  c->lr=0x804C1AA0u; f_80382F60(c); // 804C1A9C
  goto L_804C1AB4; // 804C1AA0
L_804C1AA4:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 804C1AA4
  c->r[3]=c->r[3]+c->r[0]; // 804C1AA8
  c->r[3]=c->r[3]+0x00000008u; // 804C1AAC
  c->lr=0x804C1AB4u; f_804E1674(c); // 804C1AB0
L_804C1AB4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C1AB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804C1AB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 804C1ABC
  c->r[29]=R32(c->r[1]+0x00000024u); // 804C1AC0
  c->r[28]=R32(c->r[1]+0x00000020u); // 804C1AC4
  c->lr=c->r[0]; // 804C1AC8
  c->r[1]=c->r[1]+0x00000030u; // 804C1ACC
  return; // 804C1AD0
}

// Reset__Q44nw4r3g3d8G3DState11IndMtxOpStdFv
void f_804C1AD4(Ctx* __restrict c) {
  trace_call(0x804C1AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1AD4
  c->r[0]=c->lr; // 804C1AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C1ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C1AE0
  c->r[31]=c->r[3]|c->r[3]; // 804C1AE4
  c->r[3]=c->r[3]+0x00000008u; // 804C1AE8
  c->lr=0x804C1AF0u; f_80382F00(c); // 804C1AEC
  c->r[3]=c->r[31]+0x00000038u; // 804C1AF0
  c->lr=0x804C1AF8u; f_80382F00(c); // 804C1AF4
  c->r[3]=c->r[31]+0x00000068u; // 804C1AF8
  c->lr=0x804C1B00u; f_80382F00(c); // 804C1AFC
  c->r[0]=0u+0x00000000u; // 804C1B00
  W8(c->r[31]+0x00000006u,c->r[0]); // 804C1B04
  W8(c->r[31]+0x00000005u,c->r[0]); // 804C1B08
  W8(c->r[31]+0x00000004u,c->r[0]); // 804C1B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C1B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1B14
  c->lr=c->r[0]; // 804C1B18
  c->r[1]=c->r[1]+0x00000010u; // 804C1B1C
  return; // 804C1B20
}

// fn_804C1B24
void f_804C1B24(Ctx* __restrict c) {
  trace_call(0x804C1B24u);
  c->r[0]=R8(c->r[3]+0x00000004u); // 804C1B24
  cmps(c,0,(int32_t)c->r[0],0); // 804C1B28
  if (crb(c,2)) { goto L_804C1B9C; } // 804C1B2C
  c->r[6]=R32(c->r[3]+0x00000008u); // 804C1B30
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 804C1B34
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C1B38
  W32(c->r[4]+0x00000004u,c->r[6]); // 804C1B3C
  c->r[0]=c->r[0]|0x00000001u; // 804C1B40
  W32(c->r[4]+0x00000008u,c->r[5]); // 804C1B44
  c->r[6]=R32(c->r[3]+0x00000010u); // 804C1B48
  c->r[5]=R32(c->r[3]+0x00000014u); // 804C1B4C
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 804C1B50
  W32(c->r[4]+0x00000010u,c->r[5]); // 804C1B54
  c->r[6]=R32(c->r[3]+0x00000018u); // 804C1B58
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804C1B5C
  W32(c->r[4]+0x00000014u,c->r[6]); // 804C1B60
  W32(c->r[4]+0x00000018u,c->r[5]); // 804C1B64
  c->r[6]=R32(c->r[3]+0x00000020u); // 804C1B68
  c->r[5]=R32(c->r[3]+0x00000024u); // 804C1B6C
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 804C1B70
  W32(c->r[4]+0x00000020u,c->r[5]); // 804C1B74
  c->r[6]=R32(c->r[3]+0x00000028u); // 804C1B78
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804C1B7C
  W32(c->r[4]+0x00000024u,c->r[6]); // 804C1B80
  W32(c->r[4]+0x00000028u,c->r[5]); // 804C1B84
  c->r[6]=R32(c->r[3]+0x00000030u); // 804C1B88
  c->r[5]=R32(c->r[3]+0x00000034u); // 804C1B8C
  W32(c->r[4]+0x0000002Cu,c->r[6]); // 804C1B90
  W32(c->r[4]+0x00000030u,c->r[5]); // 804C1B94
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C1B98
L_804C1B9C:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 804C1B9C
  cmps(c,0,(int32_t)c->r[0],0); // 804C1BA0
  if (crb(c,2)) { goto L_804C1C14; } // 804C1BA4
  c->r[6]=R32(c->r[3]+0x00000038u); // 804C1BA8
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 804C1BAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C1BB0
  W32(c->r[4]+0x00000034u,c->r[6]); // 804C1BB4
  c->r[0]=c->r[0]|0x00000002u; // 804C1BB8
  W32(c->r[4]+0x00000038u,c->r[5]); // 804C1BBC
  c->r[6]=R32(c->r[3]+0x00000040u); // 804C1BC0
  c->r[5]=R32(c->r[3]+0x00000044u); // 804C1BC4
  W32(c->r[4]+0x0000003Cu,c->r[6]); // 804C1BC8
  W32(c->r[4]+0x00000040u,c->r[5]); // 804C1BCC
  c->r[6]=R32(c->r[3]+0x00000048u); // 804C1BD0
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 804C1BD4
  W32(c->r[4]+0x00000044u,c->r[6]); // 804C1BD8
  W32(c->r[4]+0x00000048u,c->r[5]); // 804C1BDC
  c->r[6]=R32(c->r[3]+0x00000050u); // 804C1BE0
  c->r[5]=R32(c->r[3]+0x00000054u); // 804C1BE4
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 804C1BE8
  W32(c->r[4]+0x00000050u,c->r[5]); // 804C1BEC
  c->r[6]=R32(c->r[3]+0x00000058u); // 804C1BF0
  c->r[5]=R32(c->r[3]+0x0000005Cu); // 804C1BF4
  W32(c->r[4]+0x00000054u,c->r[6]); // 804C1BF8
  W32(c->r[4]+0x00000058u,c->r[5]); // 804C1BFC
  c->r[6]=R32(c->r[3]+0x00000060u); // 804C1C00
  c->r[5]=R32(c->r[3]+0x00000064u); // 804C1C04
  W32(c->r[4]+0x0000005Cu,c->r[6]); // 804C1C08
  W32(c->r[4]+0x00000060u,c->r[5]); // 804C1C0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C1C10
L_804C1C14:;
  c->r[0]=R8(c->r[3]+0x00000006u); // 804C1C14
  cmps(c,0,(int32_t)c->r[0],0); // 804C1C18
  if (crb(c,2)) return; // 804C1C1C
  c->r[6]=R32(c->r[3]+0x00000068u); // 804C1C20
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 804C1C24
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C1C28
  W32(c->r[4]+0x00000064u,c->r[6]); // 804C1C2C
  c->r[0]=c->r[0]|0x00000004u; // 804C1C30
  W32(c->r[4]+0x00000068u,c->r[5]); // 804C1C34
  c->r[6]=R32(c->r[3]+0x00000070u); // 804C1C38
  c->r[5]=R32(c->r[3]+0x00000074u); // 804C1C3C
  W32(c->r[4]+0x0000006Cu,c->r[6]); // 804C1C40
  W32(c->r[4]+0x00000070u,c->r[5]); // 804C1C44
  c->r[6]=R32(c->r[3]+0x00000078u); // 804C1C48
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 804C1C4C
  W32(c->r[4]+0x00000074u,c->r[6]); // 804C1C50
  W32(c->r[4]+0x00000078u,c->r[5]); // 804C1C54
  c->r[6]=R32(c->r[3]+0x00000080u); // 804C1C58
  c->r[5]=R32(c->r[3]+0x00000084u); // 804C1C5C
  W32(c->r[4]+0x0000007Cu,c->r[6]); // 804C1C60
  W32(c->r[4]+0x00000080u,c->r[5]); // 804C1C64
  c->r[6]=R32(c->r[3]+0x00000088u); // 804C1C68
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 804C1C6C
  W32(c->r[4]+0x00000084u,c->r[6]); // 804C1C70
  W32(c->r[4]+0x00000088u,c->r[5]); // 804C1C74
  c->r[5]=R32(c->r[3]+0x00000090u); // 804C1C78
  c->r[3]=R32(c->r[3]+0x00000094u); // 804C1C7C
  W32(c->r[4]+0x0000008Cu,c->r[5]); // 804C1C80
  W32(c->r[4]+0x00000090u,c->r[3]); // 804C1C84
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C1C88
  return; // 804C1C8C
}

// fn_804C1C90
void f_804C1C90(Ctx* __restrict c) {
  trace_call(0x804C1C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1C90
  c->r[0]=c->lr; // 804C1C94
  cmps(c,0,(int32_t)c->r[3],0); // 804C1C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C1C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C1CA0
  c->r[31]=c->r[3]|c->r[3]; // 804C1CA4
  if (crb(c,2)) { goto L_804C1CB8; } // 804C1CA8
  cmps(c,0,(int32_t)c->r[4],0); // 804C1CAC
  if (!crb(c,1)) { goto L_804C1CB8; } // 804C1CB0
  c->lr=0x804C1CB8u; f_803A9400(c); // 804C1CB4
L_804C1CB8:;
  c->r[3]=c->r[31]|c->r[31]; // 804C1CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C1CBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1CC0
  c->lr=c->r[0]; // 804C1CC4
  c->r[1]=c->r[1]+0x00000010u; // 804C1CC8
  return; // 804C1CCC
}

// fn_804C1CD0
void f_804C1CD0(Ctx* __restrict c) {
  trace_call(0x804C1CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1CD0
  c->r[0]=c->lr; // 804C1CD4
  c->r[4]=0u+0x00000000u; // 804C1CD8
  c->r[5]=0u+0x0000006Cu; // 804C1CDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C1CE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C1CE4
  c->r[31]=0u+0x80810000u; // 804C1CE8
  c->r[31]=c->r[31]+0xFFFFAC00u; // 804C1CEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C1CF0
  c->r[30]=0u+0x00000000u; // 804C1CF4
  c->r[6]=c->r[31]+0x00000000u; // 804C1CF8
  c->r[3]=c->r[31]+0x0000000Cu; // 804C1CFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804C1D00
  c->r[29]=0u+0x00000002u; // 804C1D04
  W32(c->r[1]+0x00000010u,c->r[28]); // 804C1D08
  c->r[28]=0u+0x00000001u; // 804C1D0C
  W8(c->r[13]+0xFFFFE470u,c->r[28]); // 804C1D10
  W8(c->r[31]+0x00000000u,c->r[28]); // 804C1D14
  W8(c->r[6]+0x00000001u,c->r[30]); // 804C1D18
  W8(c->r[6]+0x00000002u,c->r[28]); // 804C1D1C
  W8(c->r[6]+0x00000003u,c->r[30]); // 804C1D20
  W32(c->r[6]+0x00000004u,c->r[29]); // 804C1D24
  W32(c->r[6]+0x00000008u,c->r[30]); // 804C1D28
  c->lr=0x804C1D30u; f_800043EC(c); // 804C1D2C
  c->r[8]=0u+0x804C0000u; // 804C1D30
  c->r[6]=0u+0x804C0000u; // 804C1D34
  c->r[10]=c->r[31]+0x00000210u; // 804C1D38
  c->r[7]=c->r[31]+0x00000240u; // 804C1D3C
  c->r[11]=c->r[31]+0x00000204u; // 804C1D40
  c->r[9]=c->r[31]+0x00000230u; // 804C1D44
  c->r[6]=c->r[6]+0xFFFFE334u; // 804C1D48
  c->r[5]=0u+0x804C0000u; // 804C1D4C
  c->r[4]=0u+0x804C0000u; // 804C1D50
  c->r[3]=c->r[31]+0x00000080u; // 804C1D54
  c->r[12]=c->r[31]+0x000001A0u; // 804C1D58
  c->r[8]=c->r[8]+0xFFFFEC90u; // 804C1D5C
  c->r[5]=c->r[5]+0xFFFFE718u; // 804C1D60
  c->r[4]=c->r[4]+0xFFFFE844u; // 804C1D64
  W8(c->r[3]+0x00000100u,c->r[30]); // 804C1D68
  c->r[0]=0u+0x000000FBu; // 804C1D6C
  c->r[3]=0u+0x00000028u; // 804C1D70
  W16(c->r[12]+0x00000060u,c->r[30]); // 804C1D74
  W32(c->r[11]+0x00000008u,c->r[30]); // 804C1D78
  W32(c->r[11]+0x00000004u,c->r[30]); // 804C1D7C
  W32(c->r[31]+0x00000204u,c->r[30]); // 804C1D80
  W8(c->r[13]+0xFFFFE474u,c->r[30]); // 804C1D84
  W32(c->r[13]+0xFFFFE478u,c->r[30]); // 804C1D88
  W32(c->r[10]+0x0000001Cu,c->r[30]); // 804C1D8C
  W32(c->r[10]+0x00000018u,c->r[30]); // 804C1D90
  W32(c->r[10]+0x00000014u,c->r[30]); // 804C1D94
  W32(c->r[10]+0x00000010u,c->r[30]); // 804C1D98
  W32(c->r[10]+0x0000000Cu,c->r[30]); // 804C1D9C
  W32(c->r[10]+0x00000008u,c->r[30]); // 804C1DA0
  W32(c->r[10]+0x00000004u,c->r[30]); // 804C1DA4
  W32(c->r[31]+0x00000210u,c->r[30]); // 804C1DA8
  W32(c->r[13]+0xFFFFE47Cu,c->r[30]); // 804C1DAC
  W32(c->r[31]+0x00000230u,c->r[30]); // 804C1DB0
  W32(c->r[9]+0x00000004u,c->r[30]); // 804C1DB4
  W32(c->r[9]+0x00000008u,c->r[30]); // 804C1DB8
  W32(c->r[31]+0x00000240u,c->r[8]); // 804C1DBC
  W32(c->r[7]+0x00000004u,c->r[30]); // 804C1DC0
  W32(c->r[7]+0x00000008u,c->r[6]); // 804C1DC4
  W32(c->r[7]+0x0000000Cu,c->r[28]); // 804C1DC8
  W32(c->r[7]+0x00000010u,c->r[5]); // 804C1DCC
  W32(c->r[7]+0x00000014u,c->r[29]); // 804C1DD0
  W32(c->r[7]+0x00000018u,c->r[6]); // 804C1DD4
  W32(c->r[7]+0x0000001Cu,c->r[28]); // 804C1DD8
  W32(c->r[7]+0x00000020u,c->r[4]); // 804C1DDC
  W32(c->r[7]+0x00000024u,c->r[28]); // 804C1DE0
  c->ctr=c->r[0]; // 804C1DE4
L_804C1DE8:;
  W32(c->r[7]+c->r[3],c->r[8]); // 804C1DE8
  c->r[4]=c->r[7]+c->r[3]; // 804C1DEC
  c->r[3]=c->r[3]+0x00000008u; // 804C1DF0
  W32(c->r[4]+0x00000004u,c->r[30]); // 804C1DF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C1DE8; } // 804C1DF8
  c->r[3]=0u+0x00000000u; // 804C1DFC
  c->r[29]=c->r[31]+0x00000A40u; // 804C1E00
  c->r[0]=0u+0xFFFFFFFFu; // 804C1E04
  W32(c->r[31]+0x00000A40u,c->r[3]); // 804C1E08
  c->r[28]=0u+0x00000000u; // 804C1E0C
  c->r[30]=0u+0x00000000u; // 804C1E10
  W32(c->r[29]+0x00000004u,c->r[0]); // 804C1E14
L_804C1E18:;
  c->r[4]=c->r[29]+c->r[30]; // 804C1E18
  c->r[3]=c->r[1]+0x00000008u; // 804C1E1C
  c->r[4]=c->r[4]+0x00000008u; // 804C1E20
  c->lr=0x804C1E28u; f_804D317C(c); // 804C1E24
  c->lr=0x804C1E2Cu; f_804D3184(c); // 804C1E28
  c->r[28]=c->r[28]+0x00000001u; // 804C1E2C
  c->r[30]=c->r[30]+0x00000030u; // 804C1E30
  cmpu(c,0,c->r[28],0x00000020u); // 804C1E34
  if (crb(c,0)) { IRQCHK(c); goto L_804C1E18; } // 804C1E38
  c->r[28]=c->r[31]+0x00001054u; // 804C1E3C
  c->r[6]=0u+0x00000080u; // 804C1E40
  c->r[3]=c->r[28]|c->r[28]; // 804C1E44
  c->r[8]=0u+0x00000080u; // 804C1E48
  c->r[4]=c->r[28]+0x0000002Cu; // 804C1E4C
  c->r[5]=c->r[28]+0x0000222Cu; // 804C1E50
  c->r[7]=c->r[28]+0x0000242Cu; // 804C1E54
  c->lr=0x804C1E5Cu; f_804D3908(c); // 804C1E58
  c->r[4]=0u+0x804C0000u; // 804C1E5C
  c->r[5]=0u+0x804C0000u; // 804C1E60
  c->r[3]=c->r[28]+0x0000002Cu; // 804C1E64
  c->r[6]=0u+0x00000044u; // 804C1E68
  c->r[4]=c->r[4]+0xFFFFED1Cu; // 804C1E6C
  c->r[5]=c->r[5]+0xFFFFED28u; // 804C1E70
  c->r[7]=0u+0x00000080u; // 804C1E74
  c->lr=0x804C1E7Cu; f_803A9830(c); // 804C1E78
  c->r[0]=0u+0xFFFFFFFFu; // 804C1E7C
  c->r[30]=0u+0x00000000u; // 804C1E80
  c->r[4]=0u+0x804C0000u; // 804C1E84
  W32(c->r[28]+0x00000010u,c->r[0]); // 804C1E88
  c->r[3]=c->r[28]|c->r[28]; // 804C1E8C
  c->r[5]=c->r[31]+0x00001048u; // 804C1E90
  W32(c->r[28]+0x00000014u,c->r[30]); // 804C1E94
  c->r[4]=c->r[4]+0x00001F64u; // 804C1E98
  W32(c->r[28]+0x00000018u,c->r[30]); // 804C1E9C
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 804C1EA0
  W32(c->r[28]+0x00000020u,c->r[30]); // 804C1EA4
  W8(c->r[28]+0x0000002Bu,c->r[0]); // 804C1EA8
  W8(c->r[28]+0x0000002Au,c->r[0]); // 804C1EAC
  W8(c->r[28]+0x00000029u,c->r[0]); // 804C1EB0
  W8(c->r[28]+0x00000028u,c->r[0]); // 804C1EB4
  W8(c->r[28]+0x00000027u,c->r[0]); // 804C1EB8
  W8(c->r[28]+0x00000026u,c->r[0]); // 804C1EBC
  W8(c->r[28]+0x00000025u,c->r[0]); // 804C1EC0
  W8(c->r[28]+0x00000024u,c->r[0]); // 804C1EC4
  c->lr=0x804C1ECCu; f_803A92B8(c); // 804C1EC8
  c->r[3]=c->r[31]+0x00003A80u; // 804C1ECC
  c->lr=0x804C1ED4u; f_804BF490(c); // 804C1ED0
  c->r[3]=0u+0x80720000u; // 804C1ED4
  c->r[28]=c->r[31]+0x00005500u; // 804C1ED8
  c->r[3]=c->r[3]+0xFFFFA398u; // 804C1EDC
  c->r[4]=c->r[13]+0xFFFFE488u; // 804C1EE0
  W32(c->r[13]+0xFFFFE488u,c->r[30]); // 804C1EE4
  c->r[5]=c->r[28]+0x00000008u; // 804C1EE8
  c->r[0]=c->r[28]+0x00000098u; // 804C1EEC
  W8(c->r[4]+0x00000004u,c->r[30]); // 804C1EF0
  W32(c->r[28]+0x00000000u,c->r[3]); // 804C1EF4
L_804C1EF8:;
  c->r[5]=c->r[5]+0x00000030u; // 804C1EF8
  cmpu(c,0,c->r[5],c->r[0]); // 804C1EFC
  if (crb(c,0)) { IRQCHK(c); goto L_804C1EF8; } // 804C1F00
  c->r[3]=c->r[28]+0x00000008u; // 804C1F04
  c->lr=0x804C1F0Cu; f_80382F00(c); // 804C1F08
  c->r[3]=c->r[28]+0x00000038u; // 804C1F0C
  c->lr=0x804C1F14u; f_80382F00(c); // 804C1F10
  c->r[3]=c->r[28]+0x00000068u; // 804C1F14
  c->lr=0x804C1F1Cu; f_80382F00(c); // 804C1F18
  c->r[0]=0u+0x00000000u; // 804C1F1C
  c->r[4]=0u+0x804C0000u; // 804C1F20
  W8(c->r[28]+0x00000006u,c->r[0]); // 804C1F24
  c->r[3]=c->r[31]+0x00005500u; // 804C1F28
  c->r[4]=c->r[4]+0x00001C90u; // 804C1F2C
  c->r[5]=c->r[31]+0x000054F0u; // 804C1F30
  W8(c->r[28]+0x00000005u,c->r[0]); // 804C1F34
  W8(c->r[28]+0x00000004u,c->r[0]); // 804C1F38
  W8(c->r[28]+0x00000007u,c->r[0]); // 804C1F3C
  c->lr=0x804C1F44u; f_803A92B8(c); // 804C1F40
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C1F44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C1F48
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C1F4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804C1F50
  c->r[28]=R32(c->r[1]+0x00000010u); // 804C1F54
  c->lr=c->r[0]; // 804C1F58
  c->r[1]=c->r[1]+0x00000020u; // 804C1F5C
  return; // 804C1F60
}

// fn_804C1F64
void f_804C1F64(Ctx* __restrict c) {
  trace_call(0x804C1F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1F64
  c->r[0]=c->lr; // 804C1F68
  cmps(c,0,(int32_t)c->r[3],0); // 804C1F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C1F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C1F74
  c->r[31]=c->r[4]|c->r[4]; // 804C1F78
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C1F7C
  c->r[30]=c->r[3]|c->r[3]; // 804C1F80
  if (crb(c,2)) { goto L_804C1FB0; } // 804C1F84
  c->r[4]=0u+0x804C0000u; // 804C1F88
  c->r[5]=0u+0x00000044u; // 804C1F8C
  c->r[4]=c->r[4]+0xFFFFED28u; // 804C1F90
  c->r[6]=0u+0x00000080u; // 804C1F94
  c->r[3]=c->r[3]+0x0000002Cu; // 804C1F98
  c->lr=0x804C1FA0u; f_803A9928(c); // 804C1F9C
  cmps(c,0,(int32_t)c->r[31],0); // 804C1FA0
  if (!crb(c,1)) { goto L_804C1FB0; } // 804C1FA4
  c->r[3]=c->r[30]|c->r[30]; // 804C1FA8
  c->lr=0x804C1FB0u; f_803A9400(c); // 804C1FAC
L_804C1FB0:;
  c->r[3]=c->r[30]|c->r[30]; // 804C1FB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C1FB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C1FB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C1FBC
  c->lr=c->r[0]; // 804C1FC0
  c->r[1]=c->r[1]+0x00000010u; // 804C1FC4
  return; // 804C1FC8
}

// fn_804C1FCC
void f_804C1FCC(Ctx* __restrict c) {
  trace_call(0x804C1FCCu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C1FCC
  c->r[0]=c->lr; // 804C1FD0
  cmps(c,0,(int32_t)c->r[7],0); // 804C1FD4
  W32(c->r[1]+0x00000134u,c->r[0]); // 804C1FD8
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 804C1FDC
  c->r[31]=c->r[6]|c->r[6]; // 804C1FE0
  W32(c->r[1]+0x00000128u,c->r[30]); // 804C1FE4
  c->r[30]=c->r[5]|c->r[5]; // 804C1FE8
  W32(c->r[1]+0x00000124u,c->r[29]); // 804C1FEC
  c->r[29]=c->r[4]|c->r[4]; // 804C1FF0
  W32(c->r[1]+0x00000120u,c->r[28]); // 804C1FF4
  c->r[28]=c->r[3]|c->r[3]; // 804C1FF8
  if (!crb(c,2)) { goto L_804C23E4; } // 804C1FFC
  c->r[0]=0u+0x00000000u; // 804C2000
  cmps(c,0,(int32_t)c->r[5],0); // 804C2004
  W32(c->r[1]+0x00000088u,c->r[0]); // 804C2008
  if (crb(c,2)) { goto L_804C201C; } // 804C200C
  c->r[0]=R32(c->r[5]+0x00000024u); // 804C2010
  cmps(c,0,(int32_t)c->r[0],0); // 804C2014
  if (!crb(c,2)) { goto L_804C202C; } // 804C2018
L_804C201C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C201C
  c->r[0]=c->r[3]+0x0000001Cu; // 804C2020
  W32(c->r[1]+0x00000088u,c->r[0]); // 804C2024
  goto L_804C2034; // 804C2028
L_804C202C:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 804C202C
  W32(c->r[1]+0x00000088u,c->r[0]); // 804C2030
L_804C2034:;
  c->r[3]=c->r[1]+0x00000088u; // 804C2034
  c->lr=0x804C203Cu; f_804AED3C(c); // 804C2038
  c->lr=0x804C2040u; f_804C1228(c); // 804C203C
  c->r[0]=R32(c->r[1]+0x00000088u); // 804C2040
  c->r[3]=c->r[1]+0x0000006Cu; // 804C2044
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C2048
  c->lr=0x804C2050u; f_804BF528(c); // 804C204C
  cmps(c,0,(int32_t)c->r[30],0); // 804C2050
  if (crb(c,2)) { goto L_804C2064; } // 804C2054
  c->r[0]=R32(c->r[30]+0x00000004u); // 804C2058
  cmps(c,0,(int32_t)c->r[0],0); // 804C205C
  if (!crb(c,2)) { goto L_804C207C; } // 804C2060
L_804C2064:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 804C2064
  c->r[3]=c->r[1]+0x00000068u; // 804C2068
  c->r[0]=c->r[4]+0x00000144u; // 804C206C
  W32(c->r[1]+0x00000068u,c->r[0]); // 804C2070
  c->lr=0x804C2078u; f_804BF800(c); // 804C2074
  goto L_804C208C; // 804C2078
L_804C207C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804C207C
  c->r[3]=c->r[1]+0x00000064u; // 804C2080
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C2084
  c->lr=0x804C208Cu; f_804BF800(c); // 804C2088
L_804C208C:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C208C
  if (crb(c,2)) { goto L_804C20A0; } // 804C2090
  c->r[0]=R32(c->r[30]+0x00000000u); // 804C2094
  cmps(c,0,(int32_t)c->r[0],0); // 804C2098
  if (!crb(c,2)) { goto L_804C20B8; } // 804C209C
L_804C20A0:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 804C20A0
  c->r[3]=c->r[1]+0x00000060u; // 804C20A4
  c->r[0]=c->r[4]+0x00000040u; // 804C20A8
  W32(c->r[1]+0x00000060u,c->r[0]); // 804C20AC
  c->lr=0x804C20B4u; f_804BF598(c); // 804C20B0
  goto L_804C20C8; // 804C20B4
L_804C20B8:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804C20B8
  c->r[3]=c->r[1]+0x0000005Cu; // 804C20BC
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C20C0
  c->lr=0x804C20C8u; f_804BF598(c); // 804C20C4
L_804C20C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C20C8
  if (crb(c,2)) { goto L_804C20DC; } // 804C20CC
  c->r[0]=R32(c->r[30]+0x00000008u); // 804C20D0
  cmps(c,0,(int32_t)c->r[0],0); // 804C20D4
  if (!crb(c,2)) { goto L_804C20F4; } // 804C20D8
L_804C20DC:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 804C20DC
  c->r[3]=c->r[1]+0x00000058u; // 804C20E0
  c->r[0]=c->r[4]+0x00000014u; // 804C20E4
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C20E8
  c->lr=0x804C20F0u; f_804BF94C(c); // 804C20EC
  goto L_804C2104; // 804C20F0
L_804C20F4:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 804C20F4
  c->r[3]=c->r[1]+0x00000054u; // 804C20F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C20FC
  c->lr=0x804C2104u; f_804BF94C(c); // 804C2100
L_804C2104:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C2104
  if (crb(c,2)) { goto L_804C2118; } // 804C2108
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804C210C
  cmps(c,0,(int32_t)c->r[0],0); // 804C2110
  if (!crb(c,2)) { goto L_804C2130; } // 804C2114
L_804C2118:;
  c->r[3]=c->r[28]|c->r[28]; // 804C2118
  c->lr=0x804C2120u; f_804AFE68(c); // 804C211C
  W32(c->r[1]+0x00000050u,c->r[3]); // 804C2120
  c->r[3]=c->r[1]+0x00000050u; // 804C2124
  c->lr=0x804C212Cu; f_804BFB18(c); // 804C2128
  goto L_804C2140; // 804C212C
L_804C2130:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804C2130
  c->r[3]=c->r[1]+0x0000004Cu; // 804C2134
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804C2138
  c->lr=0x804C2140u; f_804BFB18(c); // 804C213C
L_804C2140:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C2140
  if (crb(c,2)) { goto L_804C2154; } // 804C2144
  c->r[0]=R32(c->r[30]+0x00000010u); // 804C2148
  cmps(c,0,(int32_t)c->r[0],0); // 804C214C
  if (!crb(c,2)) { goto L_804C2180; } // 804C2150
L_804C2154:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C2154
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C2158
  cmps(c,0,(int32_t)c->r[0],0); // 804C215C
  if (crb(c,2)) { goto L_804C216C; } // 804C2160
  c->r[0]=c->r[3]+c->r[0]; // 804C2164
  goto L_804C2170; // 804C2168
L_804C216C:;
  c->r[0]=0u+0x00000000u; // 804C216C
L_804C2170:;
  W32(c->r[1]+0x00000048u,c->r[0]); // 804C2170
  c->r[3]=c->r[1]+0x00000048u; // 804C2174
  c->lr=0x804C217Cu; f_804BFD28(c); // 804C2178
  goto L_804C2190; // 804C217C
L_804C2180:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 804C2180
  c->r[3]=c->r[1]+0x00000044u; // 804C2184
  W32(c->r[1]+0x00000044u,c->r[0]); // 804C2188
  c->lr=0x804C2190u; f_804BFD28(c); // 804C218C
L_804C2190:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C2190
  if (crb(c,2)) { goto L_804C21A4; } // 804C2194
  c->r[0]=R32(c->r[30]+0x00000014u); // 804C2198
  cmps(c,0,(int32_t)c->r[0],0); // 804C219C
  if (!crb(c,2)) { goto L_804C21D4; } // 804C21A0
L_804C21A4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C21A4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C21A8
  cmps(c,0,(int32_t)c->r[0],0); // 804C21AC
  if (crb(c,2)) { goto L_804C21BC; } // 804C21B0
  c->r[3]=c->r[3]+c->r[0]; // 804C21B4
  goto L_804C21C0; // 804C21B8
L_804C21BC:;
  c->r[3]=0u+0x00000000u; // 804C21BC
L_804C21C0:;
  c->r[0]=c->r[3]+0x00000020u; // 804C21C0
  c->r[3]=c->r[1]+0x00000040u; // 804C21C4
  W32(c->r[1]+0x00000040u,c->r[0]); // 804C21C8
  c->lr=0x804C21D0u; f_804BFDD4(c); // 804C21CC
  goto L_804C21E4; // 804C21D0
L_804C21D4:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 804C21D4
  c->r[3]=c->r[1]+0x0000003Cu; // 804C21D8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C21DC
  c->lr=0x804C21E4u; f_804BFDD4(c); // 804C21E0
L_804C21E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C21E4
  if (crb(c,2)) { goto L_804C21F8; } // 804C21E8
  c->r[0]=R32(c->r[30]+0x00000018u); // 804C21EC
  cmps(c,0,(int32_t)c->r[0],0); // 804C21F0
  if (!crb(c,2)) { goto L_804C2264; } // 804C21F4
L_804C21F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 804C21F8
  if (crb(c,2)) { goto L_804C2234; } // 804C21FC
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C2200
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C2204
  cmps(c,0,(int32_t)c->r[0],0); // 804C2208
  if (crb(c,2)) { goto L_804C2218; } // 804C220C
  c->r[3]=c->r[3]+c->r[0]; // 804C2210
  goto L_804C221C; // 804C2214
L_804C2218:;
  c->r[3]=0u+0x00000000u; // 804C2218
L_804C221C:;
  c->r[0]=c->r[3]+0x000000A0u; // 804C221C
  c->r[4]=c->r[31]|c->r[31]; // 804C2220
  W32(c->r[1]+0x00000038u,c->r[0]); // 804C2224
  c->r[3]=c->r[1]+0x00000038u; // 804C2228
  c->lr=0x804C2230u; f_804BFF38(c); // 804C222C
  goto L_804C2294; // 804C2230
L_804C2234:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C2234
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C2238
  cmps(c,0,(int32_t)c->r[0],0); // 804C223C
  if (crb(c,2)) { goto L_804C224C; } // 804C2240
  c->r[3]=c->r[3]+c->r[0]; // 804C2244
  goto L_804C2250; // 804C2248
L_804C224C:;
  c->r[3]=0u+0x00000000u; // 804C224C
L_804C2250:;
  c->r[0]=c->r[3]+0x000000A0u; // 804C2250
  c->r[3]=c->r[1]+0x00000034u; // 804C2254
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C2258
  c->lr=0x804C2260u; f_804BFE80(c); // 804C225C
  goto L_804C2294; // 804C2260
L_804C2264:;
  cmps(c,0,(int32_t)c->r[31],0); // 804C2264
  if (crb(c,2)) { goto L_804C2284; } // 804C2268
  c->r[0]=R32(c->r[30]+0x00000018u); // 804C226C
  c->r[4]=c->r[31]|c->r[31]; // 804C2270
  c->r[3]=c->r[1]+0x00000030u; // 804C2274
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C2278
  c->lr=0x804C2280u; f_804BFF38(c); // 804C227C
  goto L_804C2294; // 804C2280
L_804C2284:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 804C2284
  c->r[3]=c->r[1]+0x0000002Cu; // 804C2288
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804C228C
  c->lr=0x804C2294u; f_804BFE80(c); // 804C2290
L_804C2294:;
  c->r[3]=c->r[1]+0x00000088u; // 804C2294
  c->lr=0x804C229Cu; f_804AED08(c); // 804C2298
  c->r[4]=c->r[1]+0x00000084u; // 804C229C
  c->r[5]=c->r[1]+0x00000080u; // 804C22A0
  c->r[6]=c->r[1]+0x0000007Cu; // 804C22A4
  c->r[7]=c->r[1]+0x00000078u; // 804C22A8
  c->r[8]=c->r[1]+0x00000070u; // 804C22AC
  c->lr=0x804C22B4u; f_804C143C(c); // 804C22B0
  c->r[5]=R8(c->r[1]+0x00000070u); // 804C22B4
  cmps(c,0,(int32_t)c->r[30],0); // 804C22B8
  c->r[4]=R8(c->r[1]+0x00000071u); // 804C22BC
  c->r[3]=R8(c->r[1]+0x00000072u); // 804C22C0
  c->r[0]=R8(c->r[1]+0x00000073u); // 804C22C4
  W8(c->r[1]+0x00000074u,c->r[5]); // 804C22C8
  W8(c->r[1]+0x00000075u,c->r[4]); // 804C22CC
  W8(c->r[1]+0x00000076u,c->r[3]); // 804C22D0
  W8(c->r[1]+0x00000077u,c->r[0]); // 804C22D4
  if (crb(c,2)) { goto L_804C22E8; } // 804C22D8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 804C22DC
  cmps(c,0,(int32_t)c->r[0],0); // 804C22E0
  if (!crb(c,2)) { goto L_804C2320; } // 804C22E4
L_804C22E8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C22E8
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 804C22EC
  c->r[4]=R32(c->r[1]+0x00000084u); // 804C22F0
  c->r[3]=c->r[1]+0x00000028u; // 804C22F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C22F8
  c->r[8]=c->r[1]+0x00000024u; // 804C22FC
  c->r[5]=R32(c->r[1]+0x00000080u); // 804C2300
  c->r[7]=R32(c->r[28]+0x00000000u); // 804C2304
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 804C2308
  c->r[0]=c->r[7]+0x000003F0u; // 804C230C
  c->r[7]=R32(c->r[1]+0x00000078u); // 804C2310
  W32(c->r[1]+0x00000028u,c->r[0]); // 804C2314
  c->lr=0x804C231Cu; f_804C0108(c); // 804C2318
  goto L_804C2350; // 804C231C
L_804C2320:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C2320
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 804C2324
  c->r[4]=R32(c->r[1]+0x00000084u); // 804C2328
  c->r[3]=c->r[1]+0x00000020u; // 804C232C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804C2330
  c->r[8]=c->r[1]+0x0000001Cu; // 804C2334
  c->r[5]=R32(c->r[1]+0x00000080u); // 804C2338
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 804C233C
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 804C2340
  W32(c->r[1]+0x00000020u,c->r[0]); // 804C2344
  c->r[7]=R32(c->r[1]+0x00000078u); // 804C2348
  c->lr=0x804C2350u; f_804C0108(c); // 804C234C
L_804C2350:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C2350
  if (crb(c,2)) { goto L_804C2364; } // 804C2354
  c->r[0]=R32(c->r[30]+0x00000020u); // 804C2358
  cmps(c,0,(int32_t)c->r[0],0); // 804C235C
  if (!crb(c,2)) { goto L_804C2394; } // 804C2360
L_804C2364:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C2364
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C2368
  cmps(c,0,(int32_t)c->r[0],0); // 804C236C
  if (crb(c,2)) { goto L_804C237C; } // 804C2370
  c->r[3]=c->r[3]+c->r[0]; // 804C2374
  goto L_804C2380; // 804C2378
L_804C237C:;
  c->r[3]=0u+0x00000000u; // 804C237C
L_804C2380:;
  c->r[0]=c->r[3]+0x000000E0u; // 804C2380
  c->r[3]=c->r[1]+0x00000018u; // 804C2384
  W32(c->r[1]+0x00000018u,c->r[0]); // 804C2388
  c->lr=0x804C2390u; f_804C0834(c); // 804C238C
  goto L_804C23A4; // 804C2390
L_804C2394:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 804C2394
  c->r[3]=c->r[1]+0x00000014u; // 804C2398
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C239C
  c->lr=0x804C23A4u; f_804C0834(c); // 804C23A0
L_804C23A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C23A4
  if (crb(c,2)) { goto L_804C23B8; } // 804C23A8
  c->r[0]=R32(c->r[30]+0x00000028u); // 804C23AC
  cmps(c,0,(int32_t)c->r[0],0); // 804C23B0
  if (!crb(c,2)) { goto L_804C23D0; } // 804C23B4
L_804C23B8:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 804C23B8
  c->r[3]=c->r[1]+0x00000010u; // 804C23BC
  c->r[0]=c->r[4]+0x000001A8u; // 804C23C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C23C4
  c->lr=0x804C23CCu; f_804C08C4(c); // 804C23C8
  goto L_804C2440; // 804C23CC
L_804C23D0:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 804C23D0
  c->r[3]=c->r[1]+0x0000000Cu; // 804C23D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804C23D8
  c->lr=0x804C23E0u; f_804C08C4(c); // 804C23DC
  goto L_804C2440; // 804C23E0
L_804C23E4:;
  cmps(c,0,(int32_t)c->r[6],0); // 804C23E4
  if (crb(c,2)) { goto L_804C2440; } // 804C23E8
  cmps(c,0,(int32_t)c->r[5],0); // 804C23EC
  if (crb(c,2)) { goto L_804C2400; } // 804C23F0
  c->r[0]=R32(c->r[5]+0x00000018u); // 804C23F4
  cmps(c,0,(int32_t)c->r[0],0); // 804C23F8
  if (!crb(c,2)) { goto L_804C242C; } // 804C23FC
L_804C2400:;
  c->r[0]=0u+0x00000000u; // 804C2400
  c->r[3]=c->r[31]|c->r[31]; // 804C2404
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804C2408
  c->r[4]=c->r[1]+0x0000008Cu; // 804C240C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804C2410
  c->r[12]=R32(c->r[12]+0x00000008u); // 804C2414
  c->ctr=c->r[12]; // 804C2418
  if (true) { c->lr=0x804C2420u; dispatch(c,c->ctr); } // 804C241C
  c->r[3]=c->r[1]+0x0000008Cu; // 804C2420
  c->lr=0x804C2428u; f_804BECA0(c); // 804C2424
  goto L_804C2440; // 804C2428
L_804C242C:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 804C242C
  c->r[4]=c->r[31]|c->r[31]; // 804C2430
  c->r[3]=c->r[1]+0x00000008u; // 804C2434
  W32(c->r[1]+0x00000008u,c->r[0]); // 804C2438
  c->lr=0x804C2440u; f_804BFF38(c); // 804C243C
L_804C2440:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 804C2440
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 804C2444
  c->r[30]=R32(c->r[1]+0x00000128u); // 804C2448
  c->r[29]=R32(c->r[1]+0x00000124u); // 804C244C
  c->r[28]=R32(c->r[1]+0x00000120u); // 804C2450
  c->lr=c->r[0]; // 804C2454
  c->r[1]=c->r[1]+0x00000130u; // 804C2458
  return; // 804C245C
}

// fn_804C2460
void f_804C2460(Ctx* __restrict c) {
  trace_call(0x804C2460u);
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C2460
  c->r[0]=c->lr; // 804C2464
  W32(c->r[1]+0x00000264u,c->r[0]); // 804C2468
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[31]);} // 804C246C
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,31,ea,0,0);} // 804C2470
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[30]);} // 804C2474
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,30,ea,0,0);} // 804C2478
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[29]);} // 804C247C
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,29,ea,0,0);} // 804C2480
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[28]);} // 804C2484
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,28,ea,0,0);} // 804C2488
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[27]);} // 804C248C
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,27,ea,0,0);} // 804C2490
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[26]);} // 804C2494
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,26,ea,0,0);} // 804C2498
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[25]);} // 804C249C
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,25,ea,0,0);} // 804C24A0
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[24]);} // 804C24A4
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,24,ea,0,0);} // 804C24A8
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[23]);} // 804C24AC
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,23,ea,0,0);} // 804C24B0
  c->r[11]=c->r[1]+0x000001D0u; // 804C24B4
  c->lr=0x804C24BCu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C24B8
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 804C24BC
  c->r[18]=c->r[3]|c->r[3]; // 804C24C0
  c->r[0]=0u+0x43300000u; // 804C24C4
  c->r[26]=c->r[4]|c->r[4]; // 804C24C8
  c->r[27]=c->r[5]|c->r[5]; // 804C24CC
  c->r[28]=c->r[6]|c->r[6]; // 804C24D0
  W32(c->r[1]+0x00000158u,c->r[0]); // 804C24D4
  c->r[17]=c->r[7]|c->r[7]; // 804C24D8
  c->r[15]=c->r[8]|c->r[8]; // 804C24DC
  c->r[20]=c->r[9]|c->r[9]; // 804C24E0
  W32(c->r[1]+0x00000160u,c->r[0]); // 804C24E4
  if (!crb(c,2)) { goto L_804C24F8; } // 804C24E8
  c->r[3]=0u+0x00000000u; // 804C24EC
  c->lr=0x804C24F4u; f_80377568(c); // 804C24F0
  c->lr=0x804C24F8u; f_803749AC(c); // 804C24F4
L_804C24F8:;
  c->r[16]=0u+0x00000000u; // 804C24F8
  c->r[19]=0u+0x00000000u; // 804C24FC
  W32(c->r[1]+0x00000074u,c->r[16]); // 804C2500
  c->r[0]=R32(c->r[18]+0x00000000u); // 804C2504
  cmps(c,0,(int32_t)c->r[0],0); // 804C2508
  if (crb(c,2)) { goto L_804C2538; } // 804C250C
  c->r[0]=rotl(c->r[17],0)&0x00000010u; cr0(c,c->r[0]); // 804C2510
  if (crb(c,2)) { goto L_804C251C; } // 804C2514
  c->r[16]=0u+0x00000001u; // 804C2518
L_804C251C:;
  c->r[3]=c->r[18]|c->r[18]; // 804C251C
  c->lr=0x804C2524u; f_804AFE88(c); // 804C2520
  cmps(c,0,(int32_t)c->r[3],0); // 804C2524
  W32(c->r[1]+0x00000074u,c->r[3]); // 804C2528
  if (crb(c,2)) { goto L_804C253C; } // 804C252C
  c->r[19]=0u+0x00000001u; // 804C2530
  goto L_804C253C; // 804C2534
L_804C2538:;
  c->r[16]=0u+0x00000001u; // 804C2538
L_804C253C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 804C253C
  c->r[4]=c->r[17]|c->r[17]; // 804C2540
  c->r[5]=c->r[15]|c->r[15]; // 804C2544
  c->r[6]=c->r[20]|c->r[20]; // 804C2548
  W32(c->r[1]+0x00000040u,c->r[0]); // 804C254C
  c->r[7]=c->r[16]|c->r[16]; // 804C2550
  c->r[3]=c->r[1]+0x00000040u; // 804C2554
  c->lr=0x804C255Cu; f_804C1FCC(c); // 804C2558
  c->r[3]=R32(c->r[26]+0x00000000u); // 804C255C
  cmps(c,0,(int32_t)c->r[3],0); // 804C2560
  if (crb(c,2)) { goto L_804C2CA0; } // 804C2564
  c->r[0]=R32(c->r[3]+0x00000034u); // 804C2568
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C256C
  if (!crb(c,2)) { goto L_804C2CA0; } // 804C2570
  cmps(c,0,(int32_t)c->r[19],0); // 804C2574
  if (crb(c,2)) { goto L_804C2B98; } // 804C2578
  c->r[6]=0u+0x806B0000u; // 804C257C
  {uint32_t ea=c->r[6]+0xFFFFBDC0u; c->r[5]=R32(ea); c->r[6]=ea;} // 804C2580
  c->r[0]=cntlz(c->r[15]); // 804C2584
  c->r[8]=R32(c->r[1]+0x00000074u); // 804C2588
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[16]); // 804C258C
  c->r[4]=R32(c->r[6]+0x00000004u); // 804C2590
  c->r[3]=R32(c->r[6]+0x00000008u); // 804C2594
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 804C2598
  W32(c->r[1]+0x00000080u,c->r[5]); // 804C259C
  c->r[7]=c->r[16]|c->r[16]; // 804C25A0
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 804C25A4
  W32(c->r[1]+0x00000084u,c->r[4]); // 804C25A8
  {uint32_t ea=c->r[8]+0x00000010u; c->f[25]=c->ps1[25]=RF32(ea);} // 804C25AC
  W32(c->r[1]+0x00000088u,c->r[3]); // 804C25B0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804C25B4
  if (!crb(c,2)) { goto L_804C25C8; } // 804C25B8
  c->r[0]=R32(c->r[15]+0x00000014u); // 804C25BC
  c->r[0]=cntlz(c->r[0]); // 804C25C0
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C25C4
L_804C25C8:;
  cmps(c,0,(int32_t)c->r[7],0); // 804C25C8
  if (crb(c,2)) { goto L_804C25FC; } // 804C25CC
  c->r[3]=R32(c->r[18]+0x00000000u); // 804C25D0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C25D4
  cmps(c,0,(int32_t)c->r[0],0); // 804C25D8
  if (crb(c,2)) { goto L_804C25E8; } // 804C25DC
  c->r[3]=c->r[3]+c->r[0]; // 804C25E0
  goto L_804C25EC; // 804C25E4
L_804C25E8:;
  c->r[3]=0u+0x00000000u; // 804C25E8
L_804C25EC:;
  c->r[0]=c->r[3]+0x00000020u; // 804C25EC
  c->r[3]=c->r[1]+0x0000003Cu; // 804C25F0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C25F4
  goto L_804C2600; // 804C25F8
L_804C25FC:;
  c->r[3]=c->r[15]+0x00000014u; // 804C25FC
L_804C2600:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C2600
  c->r[3]=c->r[1]+0x0000005Cu; // 804C2604
  c->r[5]=c->r[1]+0x00000070u; // 804C2608
  c->r[4]=0u+0x00000000u; // 804C260C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C2610
  c->lr=0x804C2618u; f_804AF178(c); // 804C2614
  c->r[3]=c->r[1]+0x0000005Cu; // 804C2618
  c->r[5]=c->r[1]+0x0000006Cu; // 804C261C
  c->r[4]=0u+0x00000001u; // 804C2620
  c->lr=0x804C2628u; f_804AF178(c); // 804C2624
  c->r[3]=c->r[1]+0x0000005Cu; // 804C2628
  c->r[5]=c->r[1]+0x00000068u; // 804C262C
  c->r[4]=0u+0x00000002u; // 804C2630
  c->lr=0x804C2638u; f_804AF178(c); // 804C2634
  cmps(c,0,(int32_t)c->r[16],0); // 804C2638
  c->r[31]=R8(c->r[1]+0x00000069u); // 804C263C
  c->r[3]=0u+0x00000000u; // 804C2640
  if (!crb(c,2)) { goto L_804C2654; } // 804C2644
  c->r[0]=R32(c->r[15]+0x0000001Cu); // 804C2648
  cmps(c,0,(int32_t)c->r[0],0); // 804C264C
  if (!crb(c,2)) { goto L_804C2658; } // 804C2650
L_804C2654:;
  c->r[3]=0u+0x00000001u; // 804C2654
L_804C2658:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C2658
  if (crb(c,2)) { goto L_804C2674; } // 804C265C
  c->r[3]=R32(c->r[18]+0x00000000u); // 804C2660
  c->r[4]=c->r[1]+0x00000038u; // 804C2664
  c->r[0]=c->r[3]+0x000003F0u; // 804C2668
  W32(c->r[1]+0x00000038u,c->r[0]); // 804C266C
  goto L_804C2678; // 804C2670
L_804C2674:;
  c->r[4]=c->r[15]+0x0000001Cu; // 804C2674
L_804C2678:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C2678
  c->r[3]=c->r[1]+0x00000058u; // 804C267C
  c->r[5]=c->r[1]+0x00000078u; // 804C2680
  c->r[4]=0u+0x00000000u; // 804C2684
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C2688
  c->lr=0x804C2690u; f_804AF960(c); // 804C268C
  c->r[3]=c->r[1]+0x00000058u; // 804C2690
  c->r[5]=c->r[1]+0x0000007Cu; // 804C2694
  c->r[4]=0u+0x00000001u; // 804C2698
  c->lr=0x804C26A0u; f_804AF960(c); // 804C269C
  c->r[19]=c->r[1]+0x00000080u; // 804C26A0
  c->r[20]=0u+0x00000000u; // 804C26A4
L_804C26A8:;
  c->r[0]=rotl(c->r[20],2)&0x000003FCu; // 804C26A8
  c->r[7]=c->r[1]+0x000000A0u; // 804C26AC
  c->r[10]=c->r[1]+0x00000090u; // 804C26B0
  c->r[4]=R32(c->r[19]+c->r[0]); // 804C26B4
  c->r[3]=c->r[1]+0x00000058u; // 804C26B8
  c->r[7]=c->r[7]+c->r[0]; // 804C26BC
  c->r[10]=c->r[10]+c->r[0]; // 804C26C0
  c->r[5]=0u+0x00000000u; // 804C26C4
  c->r[6]=0u+0x00000000u; // 804C26C8
  c->r[8]=0u+0x00000000u; // 804C26CC
  c->r[9]=0u+0x00000000u; // 804C26D0
  c->lr=0x804C26D8u; f_804AF998(c); // 804C26D4
  c->r[20]=c->r[20]+0x00000001u; // 804C26D8
  cmpu(c,0,c->r[20],0x00000004u); // 804C26DC
  if (crb(c,0)) { IRQCHK(c); goto L_804C26A8; } // 804C26E0
  cmps(c,0,(int32_t)c->r[16],0); // 804C26E4
  c->r[3]=0u+0x00000000u; // 804C26E8
  if (!crb(c,2)) { goto L_804C26FC; } // 804C26EC
  c->r[0]=R32(c->r[15]+0x00000024u); // 804C26F0
  cmps(c,0,(int32_t)c->r[0],0); // 804C26F4
  if (!crb(c,2)) { goto L_804C2700; } // 804C26F8
L_804C26FC:;
  c->r[3]=0u+0x00000001u; // 804C26FC
L_804C2700:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C2700
  if (crb(c,2)) { goto L_804C271C; } // 804C2704
  c->r[3]=R32(c->r[18]+0x00000000u); // 804C2708
  c->r[4]=c->r[1]+0x00000034u; // 804C270C
  c->r[0]=c->r[3]+0x0000001Cu; // 804C2710
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C2714
  goto L_804C2720; // 804C2718
L_804C271C:;
  c->r[4]=c->r[15]+0x00000024u; // 804C271C
L_804C2720:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C2720
  cmps(c,0,(int32_t)c->r[16],0); // 804C2724
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C2728
  if (!crb(c,2)) { goto L_804C273C; } // 804C272C
  c->r[0]=R32(c->r[15]+0x00000018u); // 804C2730
  c->r[0]=cntlz(c->r[0]); // 804C2734
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C2738
L_804C273C:;
  cmps(c,0,(int32_t)c->r[16],0); // 804C273C
  if (crb(c,2)) { goto L_804C2770; } // 804C2740
  c->r[3]=R32(c->r[18]+0x00000000u); // 804C2744
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804C2748
  cmps(c,0,(int32_t)c->r[0],0); // 804C274C
  if (crb(c,2)) { goto L_804C275C; } // 804C2750
  c->r[3]=c->r[3]+c->r[0]; // 804C2754
  goto L_804C2760; // 804C2758
L_804C275C:;
  c->r[3]=0u+0x00000000u; // 804C275C
L_804C2760:;
  c->r[0]=c->r[3]+0x000000A0u; // 804C2760
  c->r[3]=c->r[1]+0x00000030u; // 804C2764
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C2768
  goto L_804C2774; // 804C276C
L_804C2770:;
  c->r[3]=c->r[15]+0x00000018u; // 804C2770
L_804C2774:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C2774
  c->r[18]=c->r[1]+0x00000064u; // 804C2778
  c->r[19]=c->r[1]+0x00000060u; // 804C277C
  c->r[20]=c->r[1]+0x000000C8u; // 804C2780
  W32(c->r[1]+0x00000050u,c->r[0]); // 804C2784
  c->r[21]=0u+0x00000000u; // 804C2788
  c->r[16]=0u+0x00000001u; // 804C278C
  c->r[15]=0u+0x00000000u; // 804C2790
L_804C2794:;
  c->r[22]=c->r[21]+0x00000001u; // 804C2794
  c->r[3]=c->r[1]+0x00000054u; // 804C2798
  c->r[4]=c->r[22]|c->r[22]; // 804C279C
  c->r[5]=c->r[1]+0x0000004Cu; // 804C27A0
  c->r[6]=c->r[1]+0x00000008u; // 804C27A4
  c->lr=0x804C27ACu; f_804AED5C(c); // 804C27A8
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 804C27AC
  cmps(c,0,(int32_t)c->r[0],3); // 804C27B0
  if (!crb(c,2)) { goto L_804C27D4; } // 804C27B4
  W8(c->r[18]+0x00000000u,c->r[16]); // 804C27B8
  c->r[4]=c->r[22]|c->r[22]; // 804C27BC
  c->r[5]=c->r[20]|c->r[20]; // 804C27C0
  c->r[6]=c->r[19]|c->r[19]; // 804C27C4
  c->r[3]=c->r[1]+0x00000050u; // 804C27C8
  c->lr=0x804C27D0u; f_804AF5A8(c); // 804C27CC
  goto L_804C27D8; // 804C27D0
L_804C27D4:;
  W8(c->r[18]+0x00000000u,c->r[15]); // 804C27D4
L_804C27D8:;
  c->r[21]=c->r[21]+0x00000001u; // 804C27D8
  c->r[19]=c->r[19]+0x00000001u; // 804C27DC
  cmpu(c,0,c->r[21],0x00000003u); // 804C27E0
  c->r[20]=c->r[20]+0x00000030u; // 804C27E4
  c->r[18]=c->r[18]+0x00000001u; // 804C27E8
  if (crb(c,0)) { IRQCHK(c); goto L_804C2794; } // 804C27EC
  c->r[0]=R32(c->r[26]+0x00000000u); // 804C27F0
  c->r[3]=c->r[1]+0x0000002Cu; // 804C27F4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804C27F8
  c->lr=0x804C2800u; f_804C0B70(c); // 804C27FC
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 804C2800
  if (crb(c,2)) { goto L_804C2818; } // 804C2804
  c->r[3]=0u+0x00000001u; // 804C2808
  c->lr=0x804C2810u; f_804BDC80(c); // 804C280C
  c->r[3]=0u+0x00000010u; // 804C2810
  c->lr=0x804C2818u; f_804C1804(c); // 804C2814
L_804C2818:;
  c->r[3]=c->r[26]|c->r[26]; // 804C2818
  c->lr=0x804C2820u; f_804AD3BC(c); // 804C281C
  W32(c->r[1]+0x00000048u,c->r[3]); // 804C2820
  c->r[18]=c->r[1]+0x000000A0u; // 804C2824
  {uint32_t ea=c->r[2]+0x00001650u; c->f[31]=RF64(ea);} // 804C2828
  c->r[19]=c->r[1]+0x00000090u; // 804C282C
  c->r[30]=R32(c->r[3]+0x00000020u); // 804C2830
  c->r[20]=c->r[1]+0x00000078u; // 804C2834
  {uint32_t ea=c->r[2]+0x00001638u; c->f[29]=c->ps1[29]=RF32(ea);} // 804C2838
  c->r[21]=c->r[1]+0x00000080u; // 804C283C
  {uint32_t ea=c->r[2]+0x00001648u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C2840
  c->r[17]=c->r[1]+0x00000060u; // 804C2844
  c->r[16]=c->r[1]+0x00000064u; // 804C2848
  c->r[29]=0u+0x00000000u; // 804C284C
  c->r[22]=0u+0x00000010u; // 804C2850
  c->r[23]=0u+0xCC010000u; // 804C2854
  c->r[24]=0u+0x00000000u; // 804C2858
  c->r[25]=0u+0x00000002u; // 804C285C
  goto L_804C2B88; // 804C2860
L_804C2864:;
  c->r[3]=c->r[1]+0x00000074u; // 804C2864
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 804C2868
  c->lr=0x804C2870u; f_804AEE10(c); // 804C286C
  c->f[24]=c->f[1]; // 804C2870
  c->f[2]=c->f[26]; // 804C2874
  c->f[23]=c->ps1[23]=S(c->f[29]-c->f[1]); // 804C2878
  c->lr=0x804C2880u; f_803BA75C(c); // 804C287C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 804C2880
  c->f[1]=c->f[24]; // 804C2884
  c->f[2]=c->f[25]; // 804C2888
  c->lr=0x804C2890u; f_803BA75C(c); // 804C288C
  c->f[27]=c->ps1[27]=S(c->f[1]); // 804C2890
  {uint32_t ea=c->r[2]+0x00001640u; c->f[2]=RF64(ea);} // 804C2894
  c->f[1]=c->f[24]; // 804C2898
  c->lr=0x804C28A0u; f_803BA75C(c); // 804C289C
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 804C28A0
  c->f[3]=c->ps1[3]=S(c->f[1]); // 804C28A4
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[24]); // 804C28A8
  c->r[4]=c->r[1]+0x00000028u; // 804C28AC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 804C28B0
  c->r[3]=0u+0x00000002u; // 804C28B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804C28B8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804C28BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 804C28C0
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[1]);} // 804C28C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804C28C8
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 804C28CC
  W8(c->r[1]+0x00000068u,c->r[0]); // 804C28D0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 804C28D4
  c->r[0]=R32(c->r[1]+0x00000174u); // 804C28D8
  W8(c->r[1]+0x00000069u,c->r[0]); // 804C28DC
  c->r[0]=R32(c->r[1]+0x00000068u); // 804C28E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 804C28E4
  c->lr=0x804C28ECu; f_803A76D8(c); // 804C28E8
  c->r[15]=0u+0x00000000u; // 804C28EC
L_804C28F0:;
  c->r[3]=rotl(c->r[15],0)&0x000000FFu; // 804C28F0
  c->r[0]=R8(c->r[16]+c->r[3]); // 804C28F4
  cmps(c,0,(int32_t)c->r[0],0); // 804C28F8
  if (crb(c,2)) { goto L_804C295C; } // 804C28FC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 804C2900
  c->r[6]=c->r[1]+0x000000C8u; // 804C2904
  c->r[0]=R8(c->r[17]+c->r[3]); // 804C2908
  c->r[3]=c->r[3]+0x00000001u; // 804C290C
  c->r[4]=c->r[1]+0x000000B0u; // 804C2910
  {uint32_t ea=c->r[6]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea); c->r[6]=ea;} // 804C2914
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804C2918
  c->f[5]=c->ps1[5]=S(c->f[24]*c->f[0]); // 804C291C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C2920
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2924
  c->f[4]=c->ps1[4]=S(c->f[24]*c->f[2]); // 804C2928
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C292C
  c->f[2]=c->ps1[2]=S(c->f[24]*c->f[1]); // 804C2930
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 804C2934
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C2938
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C293C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[5]);} // 804C2940
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[4]);} // 804C2944
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 804C2948
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 804C294C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 804C2950
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 804C2954
  c->lr=0x804C295Cu; f_803A706C(c); // 804C2958
L_804C295C:;
  c->r[15]=c->r[15]+0x00000001u; // 804C295C
  cmpu(c,0,c->r[15],0x00000003u); // 804C2960
  if (crb(c,0)) { IRQCHK(c); goto L_804C28F0; } // 804C2964
  c->r[3]=R8(c->r[1]+0x00000070u); // 804C2968
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 804C296C
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 804C2970
  c->r[7]=0u+0x00000000u; // 804C2974
  W32(c->r[1]+0x00000164u,c->r[3]); // 804C2978
  c->r[3]=R8(c->r[1]+0x00000071u); // 804C297C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 804C2980
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 804C2984
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 804C2988
  c->r[0]=R8(c->r[1]+0x0000006Du); // 804C298C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 804C2990
  W32(c->r[1]+0x00000164u,c->r[3]); // 804C2994
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 804C2998
  c->r[3]=R8(c->r[1]+0x00000072u); // 804C299C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 804C29A0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[23]); // 804C29A4
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 804C29A8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 804C29AC
  W32(c->r[1]+0x00000164u,c->r[3]); // 804C29B0
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[24]); // 804C29B4
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 804C29B8
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 804C29BC
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[23]); // 804C29C0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 804C29C4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 804C29C8
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 804C29CC
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 804C29D0
  c->r[3]=R8(c->r[1]+0x00000073u); // 804C29D4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 804C29D8
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 804C29DC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 804C29E0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[24]); // 804C29E4
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 804C29E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 804C29EC
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 804C29F0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[23]); // 804C29F4
  W32(c->r[1]+0x00000164u,c->r[3]); // 804C29F8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[24]); // 804C29FC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 804C2A00
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804C2A04
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=RF64(ea);} // 804C2A08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804C2A0C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[7]);} // 804C2A10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 804C2A14
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 804C2A18
  c->r[0]=R32(c->r[1]+0x00000174u); // 804C2A1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 804C2A20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804C2A24
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[5]);} // 804C2A28
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 804C2A2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C2A30
  c->r[3]=R32(c->r[1]+0x0000016Cu); // 804C2A34
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804C2A38
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804C2A3C
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 804C2A40
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[0]);} // 804C2A44
  c->r[4]=R32(c->r[1]+0x0000017Cu); // 804C2A48
  c->r[5]=R32(c->r[1]+0x00000184u); // 804C2A4C
  c->ctr=c->r[25]; // 804C2A50
L_804C2A54:;
  c->r[6]=rotl(c->r[7],3)&0x000003F8u; // 804C2A54
  c->r[8]=rotl(c->r[7],1)&0x000000FEu; // 804C2A58
  c->r[9]=R32(c->r[18]+c->r[6]); // 804C2A5C
  cmps(c,0,(int32_t)c->r[9],0); // 804C2A60
  if (crb(c,2)) { goto L_804C2A7C; } // 804C2A64
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 804C2A68
  c->r[9]=c->r[18]+c->r[9]; // 804C2A6C
  c->r[9]=R32(c->r[9]+0x00000004u); // 804C2A70
  cmps(c,0,(int32_t)c->r[9],0); // 804C2A74
  if (!crb(c,2)) { goto L_804C2B58; } // 804C2A78
L_804C2A7C:;
  c->r[9]=R32(c->r[19]+c->r[6]); // 804C2A7C
  cmps(c,0,(int32_t)c->r[9],0); // 804C2A80
  if (!crb(c,2)) { goto L_804C2B00; } // 804C2A84
  c->r[9]=rotl(c->r[7],2)&0x000003FCu; // 804C2A88
  c->r[11]=c->r[1]+0x00000078u; // 804C2A8C
  {uint32_t ea=c->r[11]+c->r[9]; c->r[9]=R8(ea); c->r[11]=ea;} // 804C2A90
  W32(c->r[1]+0x00000164u,c->r[9]); // 804C2A94
  c->r[10]=R8(c->r[11]+0x00000001u); // 804C2A98
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 804C2A9C
  c->r[9]=R8(c->r[11]+0x00000002u); // 804C2AA0
  W32(c->r[1]+0x0000015Cu,c->r[10]); // 804C2AA4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 804C2AA8
  W32(c->r[1]+0x00000164u,c->r[9]); // 804C2AAC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=RF64(ea);} // 804C2AB0
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[2]); // 804C2AB4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 804C2AB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 804C2ABC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804C2AC0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804C2AC4
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 804C2AC8
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 804C2ACC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[2]);} // 804C2AD0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804C2AD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804C2AD8
  c->r[11]=R32(c->r[1]+0x00000184u); // 804C2ADC
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 804C2AE0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 804C2AE4
  c->r[10]=R32(c->r[1]+0x0000017Cu); // 804C2AE8
  c->r[9]=R32(c->r[1]+0x00000174u); // 804C2AEC
  W8(c->r[1]+0x00000044u,c->r[11]); // 804C2AF0
  W8(c->r[1]+0x00000045u,c->r[10]); // 804C2AF4
  W8(c->r[1]+0x00000046u,c->r[9]); // 804C2AF8
  goto L_804C2B0C; // 804C2AFC
L_804C2B00:;
  W8(c->r[1]+0x00000044u,c->r[0]); // 804C2B00
  W8(c->r[1]+0x00000045u,c->r[3]); // 804C2B04
  W8(c->r[1]+0x00000046u,c->r[4]); // 804C2B08
L_804C2B0C:;
  c->r[8]=rotl(c->r[8],2)&0x000003FCu; // 804C2B0C
  c->r[8]=c->r[19]+c->r[8]; // 804C2B10
  c->r[8]=R32(c->r[8]+0x00000004u); // 804C2B14
  cmps(c,0,(int32_t)c->r[8],0); // 804C2B18
  if (!crb(c,2)) { goto L_804C2B30; } // 804C2B1C
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 804C2B20
  c->r[8]=c->r[20]+c->r[8]; // 804C2B24
  c->r[8]=R8(c->r[8]+0x00000003u); // 804C2B28
  goto L_804C2B34; // 804C2B2C
L_804C2B30:;
  c->r[8]=c->r[5]|c->r[5]; // 804C2B30
L_804C2B34:;
  W8(c->r[23]+0xFFFF8000u,c->r[22]); // 804C2B34
  c->r[6]=R32(c->r[21]+c->r[6]); // 804C2B38
  W8(c->r[1]+0x00000047u,c->r[8]); // 804C2B3C
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 804C2B40
  W16(c->r[23]+0xFFFF8000u,c->r[24]); // 804C2B44
  c->r[6]=c->r[6]+0x0000100Cu; // 804C2B48
  c->r[8]=R32(c->r[1]+0x00000044u); // 804C2B4C
  W16(c->r[23]+0xFFFF8000u,c->r[6]); // 804C2B50
  W32(c->r[23]+0xFFFF8000u,c->r[8]); // 804C2B54
L_804C2B58:;
  c->r[7]=c->r[7]+0x00000001u; // 804C2B58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C2A54; } // 804C2B5C
  c->r[3]=c->r[1]+0x00000048u; // 804C2B60
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 804C2B64
  c->lr=0x804C2B6Cu; f_804B04B0(c); // 804C2B68
  c->r[0]=R32(c->r[26]+0x00000000u); // 804C2B6C
  c->r[4]=c->r[27]|c->r[27]; // 804C2B70
  c->r[5]=c->r[28]|c->r[28]; // 804C2B74
  c->r[3]=c->r[1]+0x00000024u; // 804C2B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C2B7C
  c->lr=0x804C2B84u; f_804C0D14(c); // 804C2B80
  c->r[29]=c->r[29]+0x00000001u; // 804C2B84
L_804C2B88:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804C2B88
  cmpu(c,0,c->r[0],c->r[30]); // 804C2B8C
  if (crb(c,0)) { IRQCHK(c); goto L_804C2864; } // 804C2B90
  goto L_804C2CA0; // 804C2B94
L_804C2B98:;
  c->r[0]=rotl(c->r[17],0)&0x00000002u; cr0(c,c->r[0]); // 804C2B98
  if (!crb(c,2)) { goto L_804C2C70; } // 804C2B9C
  c->r[0]=R32(c->r[26]+0x00000000u); // 804C2BA0
  c->r[3]=c->r[1]+0x00000020u; // 804C2BA4
  W32(c->r[1]+0x00000020u,c->r[0]); // 804C2BA8
  c->lr=0x804C2BB0u; f_804C0B70(c); // 804C2BAC
  cmps(c,0,(int32_t)c->r[15],0); // 804C2BB0
  if (crb(c,2)) { goto L_804C2C70; } // 804C2BB4
  c->r[5]=R32(c->r[15]+0x0000002Cu); // 804C2BB8
  cmps(c,0,(int32_t)c->r[5],0); // 804C2BBC
  if (crb(c,2)) { goto L_804C2BE0; } // 804C2BC0
  c->r[4]=R32(c->r[26]+0x00000000u); // 804C2BC4
  c->r[3]=c->r[1]+0x0000001Cu; // 804C2BC8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 804C2BCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C2BD0
  c->r[0]=R32(c->r[5]+c->r[0]); // 804C2BD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804C2BD8
  c->lr=0x804C2BE0u; f_804B01BC(c); // 804C2BDC
L_804C2BE0:;
  c->r[4]=R32(c->r[15]+0x00000030u); // 804C2BE0
  cmps(c,0,(int32_t)c->r[4],0); // 804C2BE4
  if (crb(c,2)) { goto L_804C2C10; } // 804C2BE8
  c->r[3]=R32(c->r[26]+0x00000000u); // 804C2BEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Au); // 804C2BF0
  cmps(c,0,(int32_t)c->r[0],0); // 804C2BF4
  if (crb(c,0)) { goto L_804C2C10; } // 804C2BF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C2BFC
  c->r[3]=c->r[1]+0x00000018u; // 804C2C00
  c->r[0]=R32(c->r[4]+c->r[0]); // 804C2C04
  W32(c->r[1]+0x00000018u,c->r[0]); // 804C2C08
  c->lr=0x804C2C10u; f_804B028C(c); // 804C2C0C
L_804C2C10:;
  c->r[4]=R32(c->r[15]+0x00000034u); // 804C2C10
  cmps(c,0,(int32_t)c->r[4],0); // 804C2C14
  if (crb(c,2)) { goto L_804C2C70; } // 804C2C18
  c->r[3]=R32(c->r[26]+0x00000000u); // 804C2C1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Cu); // 804C2C20
  cmps(c,0,(int32_t)c->r[0],0); // 804C2C24
  if (crb(c,0)) { goto L_804C2C44; } // 804C2C28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C2C2C
  c->r[3]=c->r[1]+0x00000014u; // 804C2C30
  c->r[0]=R32(c->r[4]+c->r[0]); // 804C2C34
  c->r[4]=0u+0x0000000Bu; // 804C2C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C2C3C
  c->lr=0x804C2C44u; f_804B035C(c); // 804C2C40
L_804C2C44:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 804C2C44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Eu); // 804C2C48
  cmps(c,0,(int32_t)c->r[0],0); // 804C2C4C
  if (crb(c,0)) { goto L_804C2C70; } // 804C2C50
  c->r[5]=R32(c->r[15]+0x00000034u); // 804C2C54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C2C58
  c->r[3]=c->r[1]+0x00000010u; // 804C2C5C
  c->r[4]=0u+0x0000000Cu; // 804C2C60
  c->r[0]=R32(c->r[5]+c->r[0]); // 804C2C64
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C2C68
  c->lr=0x804C2C70u; f_804B035C(c); // 804C2C6C
L_804C2C70:;
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 804C2C70
  if (crb(c,2)) { goto L_804C2C88; } // 804C2C74
  c->r[3]=0u+0x00000001u; // 804C2C78
  c->lr=0x804C2C80u; f_804BDC80(c); // 804C2C7C
  c->r[3]=0u+0x00000010u; // 804C2C80
  c->lr=0x804C2C88u; f_804C1804(c); // 804C2C84
L_804C2C88:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 804C2C88
  c->r[4]=c->r[27]|c->r[27]; // 804C2C8C
  c->r[5]=c->r[28]|c->r[28]; // 804C2C90
  c->r[3]=c->r[1]+0x0000000Cu; // 804C2C94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804C2C98
  c->lr=0x804C2CA0u; f_804C0D14(c); // 804C2C9C
L_804C2CA0:;
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,31,ea,0,0);} // 804C2CA0
  {uint32_t ea=c->r[1]+0x00000250u; c->f[31]=RF64(ea);} // 804C2CA4
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,30,ea,0,0);} // 804C2CA8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[30]=RF64(ea);} // 804C2CAC
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,29,ea,0,0);} // 804C2CB0
  {uint32_t ea=c->r[1]+0x00000230u; c->f[29]=RF64(ea);} // 804C2CB4
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,28,ea,0,0);} // 804C2CB8
  {uint32_t ea=c->r[1]+0x00000220u; c->f[28]=RF64(ea);} // 804C2CBC
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,27,ea,0,0);} // 804C2CC0
  {uint32_t ea=c->r[1]+0x00000210u; c->f[27]=RF64(ea);} // 804C2CC4
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,26,ea,0,0);} // 804C2CC8
  {uint32_t ea=c->r[1]+0x00000200u; c->f[26]=RF64(ea);} // 804C2CCC
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,25,ea,0,0);} // 804C2CD0
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[25]=RF64(ea);} // 804C2CD4
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,24,ea,0,0);} // 804C2CD8
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[24]=RF64(ea);} // 804C2CDC
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,23,ea,0,0);} // 804C2CE0
  c->r[11]=c->r[1]+0x000001D0u; // 804C2CE4
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[23]=RF64(ea);} // 804C2CE8
  c->lr=0x804C2CF0u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C2CEC
  c->r[0]=R32(c->r[1]+0x00000264u); // 804C2CF0
  c->lr=c->r[0]; // 804C2CF4
  c->r[1]=c->r[1]+0x00000260u; // 804C2CF8
  return; // 804C2CFC
}

// GetModelLocalAxisY2__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_804C2D00(Ctx* __restrict c) {
  trace_call(0x804C2D00u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 804C2D00
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 804C2D04
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 804C2D08
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 804C2D0C
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 804C2D10
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 804C2D14
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804C2D18
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 804C2D1C
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 804C2D20
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 804C2D24
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 804C2D28
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 804C2D2C
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804C2D30
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 804C2D34
  c->r[12]=0u+0x80870000u; // 804C2D38
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 804C2D3C
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 804C2D40
  c->r[12]=c->r[12]+0x000038A0u; // 804C2D44
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 804C2D48
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 804C2D4C
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 804C2D50
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804C2D54
  {double t0=S(c->f[13]-c->f[13]), t1=S(c->ps1[13]-c->ps1[13]); c->f[13]=t0; c->ps1[13]=t1;} // 804C2D58
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 804C2D5C
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804C2D60
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 804C2D64
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 804C2D68
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 804C2D6C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,13,ea,1,0);} // 804C2D70
  fcmp(c,0,c->f[8],c->f[6]); // 804C2D74
  if (!crb(c,0)) { goto L_804C2D84; } // 804C2D78
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 804C2D7C
  return; // 804C2D80
L_804C2D84:;
  c->f[8]=c->ps1[8]=fres(c->f[7]); // 804C2D84
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804C2D88
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 804C2D8C
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 804C2D90
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 804C2D94
  {double t0=S(-std::fma(c->f[8],c->f[10],-c->f[11])), t1=S(-std::fma(c->ps1[8],c->ps1[10],-c->ps1[11])); c->f[8]=t0; c->ps1[8]=t1;} // 804C2D98
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 804C2D9C
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 804C2DA0
  {double t0=S(c->f[12]*c->f[8]), t1=S(c->ps1[12]*c->f[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804C2DA4
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 804C2DA8
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->f[12]); c->f[0]=t0; c->ps1[0]=t1;} // 804C2DAC
  {double t0=S(std::fma(c->f[5],c->ps1[12],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[12],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C2DB0
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C2DB4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804C2DB8
  return; // 804C2DBC
}

// GetModelLocalAxisY3__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_804C2DC0(Ctx* __restrict c) {
  trace_call(0x804C2DC0u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 804C2DC0
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 804C2DC4
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 804C2DC8
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 804C2DCC
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 804C2DD0
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 804C2DD4
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804C2DD8
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 804C2DDC
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 804C2DE0
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 804C2DE4
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 804C2DE8
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 804C2DEC
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804C2DF0
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 804C2DF4
  c->r[12]=0u+0x80870000u; // 804C2DF8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 804C2DFC
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 804C2E00
  c->r[12]=c->r[12]+0x000038A0u; // 804C2E04
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 804C2E08
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 804C2E0C
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 804C2E10
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804C2E14
  {double t0=S(c->f[13]-c->f[13]), t1=S(c->ps1[13]-c->ps1[13]); c->f[13]=t0; c->ps1[13]=t1;} // 804C2E18
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 804C2E1C
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804C2E20
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 804C2E24
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 804C2E28
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 804C2E2C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,13,ea,1,0);} // 804C2E30
  fcmp(c,0,c->f[8],c->f[6]); // 804C2E34
  if (!crb(c,0)) { goto L_804C2E44; } // 804C2E38
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 804C2E3C
  return; // 804C2E40
L_804C2E44:;
  c->f[8]=c->ps1[8]=fres(c->f[7]); // 804C2E44
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804C2E48
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 804C2E4C
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 804C2E50
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 804C2E54
  {double t0=S(-std::fma(c->f[8],c->f[10],-c->f[11])), t1=S(-std::fma(c->ps1[8],c->ps1[10],-c->ps1[11])); c->f[8]=t0; c->ps1[8]=t1;} // 804C2E58
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 804C2E5C
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 804C2E60
  {double t0=S(c->f[12]*c->f[8]), t1=S(c->ps1[12]*c->f[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804C2E64
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 804C2E68
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 804C2E6C
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,2,ea,1,0);} // 804C2E70
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->f[12]); c->f[0]=t0; c->ps1[0]=t1;} // 804C2E74
  {double t0=S(c->f[1]*c->f[9]), t1=S(c->ps1[1]*c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 804C2E78
  {double t0=S(std::fma(c->f[5],c->ps1[12],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[12],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C2E7C
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C2E80
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C2E84
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[9],c->f[1])); // 804C2E88
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804C2E8C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 804C2E90
  return; // 804C2E94
}

// fn_804C2E98
void f_804C2E98(Ctx* __restrict c) {
  trace_call(0x804C2E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C2E98
  c->r[0]=c->lr; // 804C2E9C
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C2EA0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804C2EA4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804C2EA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804C2EAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804C2EB0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 804C2EB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 804C2EB8
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C2EBC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804C2EC0
  c->r[31]=c->r[8]|c->r[8]; // 804C2EC4
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2EC8
  W32(c->r[1]+0x00000028u,c->r[30]); // 804C2ECC
  c->r[30]=c->r[5]|c->r[5]; // 804C2ED0
  W32(c->r[1]+0x00000024u,c->r[29]); // 804C2ED4
  c->r[29]=c->r[4]|c->r[4]; // 804C2ED8
  W32(c->r[1]+0x00000020u,c->r[28]); // 804C2EDC
  c->r[28]=c->r[3]|c->r[3]; // 804C2EE0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C2EE4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C2EE8
  c->f[4]=std::fabs(c->f[2]); // 804C2EEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804C2EF0
  fcmp(c,0,c->f[4],c->f[0]); // 804C2EF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804C2EF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804C2EFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C2F00
  if (crb(c,2)) { goto L_804C2F18; } // 804C2F04
  c->f[1]=std::fabs(c->f[3]); // 804C2F08
  fcmp(c,0,c->f[1],c->f[0]); // 804C2F0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C2F10
  if (!crb(c,2)) { goto L_804C30B4; } // 804C2F14
L_804C2F18:;
  c->r[3]=c->r[1]+0x00000008u; // 804C2F18
  c->r[4]=c->r[3]|c->r[3]; // 804C2F1C
  c->lr=0x804C2F24u; f_80383D38(c); // 804C2F20
  cmps(c,0,(int32_t)c->r[30],0); // 804C2F24
  if (crb(c,2)) { goto L_804C2FA8; } // 804C2F28
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804C2F2C
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C2F30
  c->r[3]=c->r[29]+c->r[0]; // 804C2F34
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 804C2F38
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2F3C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C2F40
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C2F44
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C2F48
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C2F4C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C2F50
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 804C2F54
  fcmp(c,0,c->f[30],c->f[0]); // 804C2F58
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C2F5C
  if (!crb(c,2)) { goto L_804C2F68; } // 804C2F60
  goto L_804C2F74; // 804C2F64
L_804C2F68:;
  c->f[1]=c->f[30]; // 804C2F68
  c->lr=0x804C2F70u; f_804E1098(c); // 804C2F6C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 804C2F70
L_804C2F74:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 804C2F74
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2F78
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804C2F7C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 804C2F80
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804C2F84
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804C2F88
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 804C2F8C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 804C2F90
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 804C2F94
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 804C2F98
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804C2F9C
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 804C2FA0
  goto L_804C30B8; // 804C2FA4
L_804C2FA8:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804C2FA8
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C2FAC
  c->r[3]=c->r[29]+c->r[31]; // 804C2FB0
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2FB4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C2FB8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C2FBC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C2FC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C2FC4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C2FC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C2FCC
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C2FD0
  fcmp(c,0,c->f[31],c->f[30]); // 804C2FD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C2FD8
  if (!crb(c,2)) { goto L_804C2FE4; } // 804C2FDC
  goto L_804C2FF0; // 804C2FE0
L_804C2FE4:;
  c->f[1]=c->f[31]; // 804C2FE4
  c->lr=0x804C2FECu; f_804E1098(c); // 804C2FE8
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C2FEC
L_804C2FF0:;
  c->r[3]=c->r[29]+c->r[31]; // 804C2FF0
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C2FF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C2FF8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C2FFC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3000
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3004
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3008
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C300C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3010
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C3014
  fcmp(c,0,c->f[29],c->f[31]); // 804C3018
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C301C
  if (!crb(c,2)) { goto L_804C3028; } // 804C3020
  goto L_804C3034; // 804C3024
L_804C3028:;
  c->f[1]=c->f[29]; // 804C3028
  c->lr=0x804C3030u; f_804E1098(c); // 804C302C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C3030
L_804C3034:;
  c->r[3]=c->r[29]+c->r[31]; // 804C3034
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3038
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C303C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3040
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3044
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3048
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C304C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C3050
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C3054
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C3058
  fcmp(c,0,c->f[29],c->f[0]); // 804C305C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3060
  if (!crb(c,2)) { goto L_804C306C; } // 804C3064
  goto L_804C3078; // 804C3068
L_804C306C:;
  c->f[1]=c->f[29]; // 804C306C
  c->lr=0x804C3074u; f_804E1098(c); // 804C3070
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C3074
L_804C3078:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C3078
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 804C307C
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3080
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3084
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 804C3088
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 804C308C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804C3090
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3094
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 804C3098
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C309C
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804C30A0
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 804C30A4
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 804C30A8
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,2,ea,0,0);} // 804C30AC
  goto L_804C30B8; // 804C30B0
L_804C30B4:;
  c->lr=0x804C30B8u; f_804E1674(c); // 804C30B4
L_804C30B8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804C30B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804C30BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804C30C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804C30C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 804C30C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 804C30CC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804C30D0
  c->r[30]=R32(c->r[1]+0x00000028u); // 804C30D4
  c->r[29]=R32(c->r[1]+0x00000024u); // 804C30D8
  c->r[0]=R32(c->r[1]+0x00000064u); // 804C30DC
  c->r[28]=R32(c->r[1]+0x00000020u); // 804C30E0
  c->lr=c->r[0]; // 804C30E4
  c->r[1]=c->r[1]+0x00000060u; // 804C30E8
  return; // 804C30EC
}

// fn_804C30F0
void f_804C30F0(Ctx* __restrict c) {
  trace_call(0x804C30F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C30F0
  c->r[0]=c->lr; // 804C30F4
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C30F8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804C30FC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804C3100
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804C3104
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804C3108
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804C310C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804C3110
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3114
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804C3118
  c->r[31]=c->r[8]|c->r[8]; // 804C311C
  W32(c->r[1]+0x00000038u,c->r[30]); // 804C3120
  c->r[30]=c->r[5]|c->r[5]; // 804C3124
  W32(c->r[1]+0x00000034u,c->r[29]); // 804C3128
  c->r[29]=c->r[4]|c->r[4]; // 804C312C
  W32(c->r[1]+0x00000030u,c->r[28]); // 804C3130
  c->r[28]=c->r[3]|c->r[3]; // 804C3134
  {uint32_t ea=c->r[3]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3138
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C313C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3140
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804C3144
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 804C3148
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 804C314C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3150
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3154
  c->f[3]=-c->f[1]; // 804C3158
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C315C
  c->f[2]=-c->f[2]; // 804C3160
  c->f[1]=-c->f[1]; // 804C3164
  c->f[4]=c->ps1[4]=S(c->f[3]); // 804C3168
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 804C316C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C3170
  c->f[3]=std::fabs(c->f[4]); // 804C3174
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804C3178
  fcmp(c,0,c->f[3],c->f[0]); // 804C317C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3180
  if (crb(c,2)) { goto L_804C31B0; } // 804C3184
  c->f[1]=c->ps1[1]=S(c->f[1]); // 804C3188
  c->f[1]=std::fabs(c->f[1]); // 804C318C
  fcmp(c,0,c->f[1],c->f[0]); // 804C3190
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3194
  if (crb(c,2)) { goto L_804C31B0; } // 804C3198
  c->f[1]=c->ps1[1]=S(c->f[2]); // 804C319C
  c->f[1]=std::fabs(c->f[1]); // 804C31A0
  fcmp(c,0,c->f[1],c->f[0]); // 804C31A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C31A8
  if (!crb(c,2)) { goto L_804C3400; } // 804C31AC
L_804C31B0:;
  c->r[3]=c->r[1]+0x00000008u; // 804C31B0
  c->r[4]=c->r[3]|c->r[3]; // 804C31B4
  c->lr=0x804C31BCu; f_80383D38(c); // 804C31B8
  c->r[3]=c->r[1]+0x00000014u; // 804C31BC
  c->r[4]=c->r[1]+0x00000008u; // 804C31C0
  c->r[5]=c->r[1]+0x00000020u; // 804C31C4
  c->lr=0x804C31CCu; f_80383DE0(c); // 804C31C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C31CC
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C31D0
  c->f[1]=std::fabs(c->f[1]); // 804C31D4
  fcmp(c,0,c->f[1],c->f[0]); // 804C31D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C31DC
  if (crb(c,2)) { goto L_804C320C; } // 804C31E0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C31E4
  c->f[1]=std::fabs(c->f[1]); // 804C31E8
  fcmp(c,0,c->f[1],c->f[0]); // 804C31EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C31F0
  if (crb(c,2)) { goto L_804C320C; } // 804C31F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C31F8
  c->f[1]=std::fabs(c->f[1]); // 804C31FC
  fcmp(c,0,c->f[1],c->f[0]); // 804C3200
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3204
  if (!crb(c,2)) { goto L_804C3400; } // 804C3208
L_804C320C:;
  c->r[3]=c->r[1]+0x00000020u; // 804C320C
  c->r[4]=c->r[3]|c->r[3]; // 804C3210
  c->lr=0x804C3218u; f_80383D38(c); // 804C3214
  c->r[3]=c->r[1]+0x00000008u; // 804C3218
  c->r[4]=c->r[1]+0x00000020u; // 804C321C
  c->r[5]=c->r[1]+0x00000014u; // 804C3220
  c->lr=0x804C3228u; f_80383DE0(c); // 804C3224
  cmps(c,0,(int32_t)c->r[30],0); // 804C3228
  if (crb(c,2)) { goto L_804C32D4; } // 804C322C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804C3230
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3234
  c->r[3]=c->r[29]+c->r[0]; // 804C3238
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 804C323C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3240
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3244
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3248
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C324C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C3250
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C3254
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 804C3258
  fcmp(c,0,c->f[30],c->f[0]); // 804C325C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3260
  if (!crb(c,2)) { goto L_804C326C; } // 804C3264
  goto L_804C3278; // 804C3268
L_804C326C:;
  c->f[1]=c->f[30]; // 804C326C
  c->lr=0x804C3274u; f_804E1098(c); // 804C3270
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 804C3274
L_804C3278:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C3278
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C327C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3280
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3284
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3288
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C328C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C3290
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C3294
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C3298
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C329C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 804C32A0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C32A4
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 804C32A8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C32AC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C32B0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 804C32B4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C32B8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C32BC
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 804C32C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C32C4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C32C8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 804C32CC
  goto L_804C3408; // 804C32D0
L_804C32D4:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804C32D4
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C32D8
  c->r[3]=c->r[29]+c->r[31]; // 804C32DC
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C32E0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C32E4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C32E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C32EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C32F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C32F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C32F8
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C32FC
  fcmp(c,0,c->f[31],c->f[30]); // 804C3300
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3304
  if (!crb(c,2)) { goto L_804C3310; } // 804C3308
  goto L_804C331C; // 804C330C
L_804C3310:;
  c->f[1]=c->f[31]; // 804C3310
  c->lr=0x804C3318u; f_804E1098(c); // 804C3314
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C3318
L_804C331C:;
  c->r[3]=c->r[29]+c->r[31]; // 804C331C
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C3320
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3324
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3328
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C332C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3330
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3334
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3338
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C333C
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C3340
  fcmp(c,0,c->f[29],c->f[31]); // 804C3344
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3348
  if (!crb(c,2)) { goto L_804C3354; } // 804C334C
  goto L_804C3360; // 804C3350
L_804C3354:;
  c->f[1]=c->f[29]; // 804C3354
  c->lr=0x804C335Cu; f_804E1098(c); // 804C3358
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C335C
L_804C3360:;
  c->r[3]=c->r[29]+c->r[31]; // 804C3360
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3364
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3368
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C336C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3370
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3374
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3378
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C337C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C3380
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C3384
  fcmp(c,0,c->f[29],c->f[0]); // 804C3388
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C338C
  if (!crb(c,2)) { goto L_804C3398; } // 804C3390
  goto L_804C33A4; // 804C3394
L_804C3398:;
  c->f[1]=c->f[29]; // 804C3398
  c->lr=0x804C33A0u; f_804E1098(c); // 804C339C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C33A0
L_804C33A4:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C33A4
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C33A8
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 804C33AC
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 804C33B0
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C33B4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C33B8
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C33BC
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C33C0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C33C4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C33C8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 804C33CC
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C33D0
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 804C33D4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C33D8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 804C33DC
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 804C33E0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C33E4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 804C33E8
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 804C33EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C33F0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C33F4
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 804C33F8
  goto L_804C3408; // 804C33FC
L_804C3400:;
  c->r[3]=c->r[28]|c->r[28]; // 804C3400
  c->lr=0x804C3408u; f_804E1674(c); // 804C3404
L_804C3408:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804C3408
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804C340C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804C3410
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804C3414
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804C3418
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804C341C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804C3420
  c->r[30]=R32(c->r[1]+0x00000038u); // 804C3424
  c->r[29]=R32(c->r[1]+0x00000034u); // 804C3428
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C342C
  c->r[28]=R32(c->r[1]+0x00000030u); // 804C3430
  c->lr=c->r[0]; // 804C3434
  c->r[1]=c->r[1]+0x00000070u; // 804C3438
  return; // 804C343C
}

// fn_804C3440
void f_804C3440(Ctx* __restrict c) {
  trace_call(0x804C3440u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C3440
  c->r[0]=c->lr; // 804C3444
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C3448
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804C344C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804C3450
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804C3454
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804C3458
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 804C345C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 804C3460
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 804C3464
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804C3468
  c->r[31]=c->r[4]|c->r[4]; // 804C346C
  W32(c->r[1]+0x00000028u,c->r[30]); // 804C3470
  c->r[30]=c->r[3]|c->r[3]; // 804C3474
  W32(c->r[1]+0x00000024u,c->r[29]); // 804C3478
  c->r[29]=c->r[8]|c->r[8]; // 804C347C
  W32(c->r[1]+0x00000020u,c->r[28]); // 804C3480
  c->r[28]=c->r[5]|c->r[5]; // 804C3484
  c->r[6]=R32(c->r[7]+0x00000000u); // 804C3488
  c->r[6]=c->r[6]+0x0000004Cu; // 804C348C
  c->r[3]=R32(c->r[6]+0x00000024u); // 804C3490
  c->r[3]=c->r[6]+c->r[3]; // 804C3494
  c->r[3]=c->r[3]+c->r[0]; // 804C3498
  c->r[0]=R32(c->r[3]+0x00000004u); // 804C349C
  cmps(c,0,(int32_t)c->r[0],0); // 804C34A0
  if (crb(c,0)) { goto L_804C3524; } // 804C34A4
  c->r[3]=c->r[7]|c->r[7]; // 804C34A8
  c->r[4]=c->r[0]|c->r[0]; // 804C34AC
  c->lr=0x804C34B4u; f_804AC458(c); // 804C34B0
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 804C34B4
  cmps(c,0,(int32_t)c->r[0],0); // 804C34B8
  if (crb(c,2)) { goto L_804C34C8; } // 804C34BC
  c->r[3]=c->r[3]+c->r[0]; // 804C34C0
  goto L_804C34CC; // 804C34C4
L_804C34C8:;
  c->r[3]=0u+0x00000000u; // 804C34C8
L_804C34CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C34CC
  if (crb(c,2)) { goto L_804C3500; } // 804C34D0
  if (crb(c,2)) { goto L_804C34E0; } // 804C34D4
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C34D8
  goto L_804C34E4; // 804C34DC
L_804C34E0:;
  c->r[0]=0u+0x00000000u; // 804C34E0
L_804C34E4:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 804C34E4
  c->r[3]=c->r[1]+0x00000008u; // 804C34E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C34EC
  c->r[4]=c->r[31]+c->r[29]; // 804C34F0
  c->r[5]=c->r[31]+c->r[0]; // 804C34F4
  c->lr=0x804C34FCu; f_804C2D00(c); // 804C34F8
  goto L_804C3544; // 804C34FC
L_804C3500:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 804C3500
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3504
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804C3508
  c->r[3]=c->r[31]+c->r[29]; // 804C350C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3510
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3514
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804C3518
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C351C
  goto L_804C3544; // 804C3520
L_804C3524:;
  c->r[29]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 804C3524
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3528
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804C352C
  c->r[3]=c->r[4]+c->r[29]; // 804C3530
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3534
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3538
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804C353C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C3540
L_804C3544:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3544
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3548
  c->f[1]=std::fabs(c->f[1]); // 804C354C
  fcmp(c,0,c->f[1],c->f[0]); // 804C3550
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3554
  if (crb(c,2)) { goto L_804C3570; } // 804C3558
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C355C
  c->f[1]=std::fabs(c->f[1]); // 804C3560
  fcmp(c,0,c->f[1],c->f[0]); // 804C3564
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3568
  if (!crb(c,2)) { goto L_804C3704; } // 804C356C
L_804C3570:;
  c->r[3]=c->r[1]+0x00000008u; // 804C3570
  c->r[4]=c->r[3]|c->r[3]; // 804C3574
  c->lr=0x804C357Cu; f_80383D38(c); // 804C3578
  cmps(c,0,(int32_t)c->r[28],0); // 804C357C
  if (crb(c,2)) { goto L_804C35FC; } // 804C3580
  c->r[3]=c->r[31]+c->r[29]; // 804C3584
  {uint32_t ea=c->r[31]+c->r[29]; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3588
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C358C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3590
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3594
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3598
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C359C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C35A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C35A4
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 804C35A8
  fcmp(c,0,c->f[30],c->f[0]); // 804C35AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C35B0
  if (!crb(c,2)) { goto L_804C35BC; } // 804C35B4
  goto L_804C35C8; // 804C35B8
L_804C35BC:;
  c->f[1]=c->f[30]; // 804C35BC
  c->lr=0x804C35C4u; f_804E1098(c); // 804C35C0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 804C35C4
L_804C35C8:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 804C35C8
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C35CC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804C35D0
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804C35D4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 804C35D8
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804C35DC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 804C35E0
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 804C35E4
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 804C35E8
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 804C35EC
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804C35F0
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,0,ea,0,0);} // 804C35F4
  goto L_804C370C; // 804C35F8
L_804C35FC:;
  c->r[3]=c->r[31]+c->r[29]; // 804C35FC
  {uint32_t ea=c->r[31]+c->r[29]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3600
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3604
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3608
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C360C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3610
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C3614
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3618
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C361C
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C3620
  fcmp(c,0,c->f[31],c->f[30]); // 804C3624
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3628
  if (!crb(c,2)) { goto L_804C3634; } // 804C362C
  goto L_804C3640; // 804C3630
L_804C3634:;
  c->f[1]=c->f[31]; // 804C3634
  c->lr=0x804C363Cu; f_804E1098(c); // 804C3638
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C363C
L_804C3640:;
  c->r[3]=c->r[31]+c->r[29]; // 804C3640
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C3644
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3648
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C364C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3650
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3654
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3658
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C365C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3660
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C3664
  fcmp(c,0,c->f[29],c->f[31]); // 804C3668
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C366C
  if (!crb(c,2)) { goto L_804C3678; } // 804C3670
  goto L_804C3684; // 804C3674
L_804C3678:;
  c->f[1]=c->f[29]; // 804C3678
  c->lr=0x804C3680u; f_804E1098(c); // 804C367C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C3680
L_804C3684:;
  c->r[3]=c->r[31]+c->r[29]; // 804C3684
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3688
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C368C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3690
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3694
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3698
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C369C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C36A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C36A4
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C36A8
  fcmp(c,0,c->f[29],c->f[0]); // 804C36AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C36B0
  if (!crb(c,2)) { goto L_804C36BC; } // 804C36B4
  goto L_804C36C8; // 804C36B8
L_804C36BC:;
  c->f[1]=c->f[29]; // 804C36BC
  c->lr=0x804C36C4u; f_804E1098(c); // 804C36C0
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C36C4
L_804C36C8:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C36C8
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 804C36CC
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C36D0
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804C36D4
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804C36D8
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 804C36DC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 804C36E0
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 804C36E4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 804C36E8
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C36EC
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804C36F0
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 804C36F4
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 804C36F8
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,2,ea,0,0);} // 804C36FC
  goto L_804C370C; // 804C3700
L_804C3704:;
  c->r[3]=c->r[30]|c->r[30]; // 804C3704
  c->lr=0x804C370Cu; f_804E1674(c); // 804C3708
L_804C370C:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804C370C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804C3710
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804C3714
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804C3718
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 804C371C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 804C3720
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804C3724
  c->r[30]=R32(c->r[1]+0x00000028u); // 804C3728
  c->r[29]=R32(c->r[1]+0x00000024u); // 804C372C
  c->r[0]=R32(c->r[1]+0x00000064u); // 804C3730
  c->r[28]=R32(c->r[1]+0x00000020u); // 804C3734
  c->lr=c->r[0]; // 804C3738
  c->r[1]=c->r[1]+0x00000060u; // 804C373C
  return; // 804C3740
}

// fn_804C3744
void f_804C3744(Ctx* __restrict c) {
  trace_call(0x804C3744u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C3744
  c->r[0]=c->lr; // 804C3748
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C374C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804C3750
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804C3754
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804C3758
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804C375C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804C3760
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804C3764
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 804C3768
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804C376C
  c->r[31]=c->r[5]|c->r[5]; // 804C3770
  W32(c->r[1]+0x00000038u,c->r[30]); // 804C3774
  c->r[30]=c->r[4]|c->r[4]; // 804C3778
  W32(c->r[1]+0x00000034u,c->r[29]); // 804C377C
  c->r[29]=c->r[3]|c->r[3]; // 804C3780
  W32(c->r[1]+0x00000030u,c->r[28]); // 804C3784
  c->r[28]=c->r[8]|c->r[8]; // 804C3788
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C378C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3790
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3794
  c->f[2]=-c->f[2]; // 804C3798
  c->f[1]=-c->f[1]; // 804C379C
  c->f[0]=-c->f[0]; // 804C37A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804C37A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804C37A8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C37AC
  c->r[3]=R32(c->r[7]+0x00000000u); // 804C37B0
  c->r[5]=c->r[3]+0x0000004Cu; // 804C37B4
  c->r[3]=R32(c->r[3]+0x00000070u); // 804C37B8
  c->r[3]=c->r[5]+c->r[3]; // 804C37BC
  c->r[3]=c->r[3]+c->r[0]; // 804C37C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804C37C4
  cmps(c,0,(int32_t)c->r[0],0); // 804C37C8
  if (crb(c,0)) { goto L_804C384C; } // 804C37CC
  c->r[3]=c->r[7]|c->r[7]; // 804C37D0
  c->r[4]=c->r[0]|c->r[0]; // 804C37D4
  c->lr=0x804C37DCu; f_804AC458(c); // 804C37D8
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 804C37DC
  cmps(c,0,(int32_t)c->r[0],0); // 804C37E0
  if (crb(c,2)) { goto L_804C37F0; } // 804C37E4
  c->r[3]=c->r[3]+c->r[0]; // 804C37E8
  goto L_804C37F4; // 804C37EC
L_804C37F0:;
  c->r[3]=0u+0x00000000u; // 804C37F0
L_804C37F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C37F4
  if (crb(c,2)) { goto L_804C3828; } // 804C37F8
  if (crb(c,2)) { goto L_804C3808; } // 804C37FC
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C3800
  goto L_804C380C; // 804C3804
L_804C3808:;
  c->r[0]=0u+0x00000000u; // 804C3808
L_804C380C:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 804C380C
  c->r[3]=c->r[1]+0x00000014u; // 804C3810
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C3814
  c->r[4]=c->r[30]+c->r[28]; // 804C3818
  c->r[5]=c->r[30]+c->r[0]; // 804C381C
  c->lr=0x804C3824u; f_804C2DC0(c); // 804C3820
  goto L_804C386C; // 804C3824
L_804C3828:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 804C3828
  c->r[3]=c->r[30]+c->r[28]; // 804C382C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3830
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3834
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3838
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804C383C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804C3840
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C3844
  goto L_804C386C; // 804C3848
L_804C384C:;
  c->r[28]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 804C384C
  c->r[3]=c->r[4]+c->r[28]; // 804C3850
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3854
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3858
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C385C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804C3860
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804C3864
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C3868
L_804C386C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C386C
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3870
  c->f[1]=std::fabs(c->f[1]); // 804C3874
  fcmp(c,0,c->f[1],c->f[0]); // 804C3878
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C387C
  if (crb(c,2)) { goto L_804C38AC; } // 804C3880
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3884
  c->f[1]=std::fabs(c->f[1]); // 804C3888
  fcmp(c,0,c->f[1],c->f[0]); // 804C388C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3890
  if (crb(c,2)) { goto L_804C38AC; } // 804C3894
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3898
  c->f[1]=std::fabs(c->f[1]); // 804C389C
  fcmp(c,0,c->f[1],c->f[0]); // 804C38A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C38A4
  if (!crb(c,2)) { goto L_804C3AF4; } // 804C38A8
L_804C38AC:;
  c->r[3]=c->r[1]+0x00000008u; // 804C38AC
  c->r[4]=c->r[3]|c->r[3]; // 804C38B0
  c->lr=0x804C38B8u; f_80383D38(c); // 804C38B4
  c->r[3]=c->r[1]+0x00000014u; // 804C38B8
  c->r[4]=c->r[1]+0x00000008u; // 804C38BC
  c->r[5]=c->r[1]+0x00000020u; // 804C38C0
  c->lr=0x804C38C8u; f_80383DE0(c); // 804C38C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C38C8
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C38CC
  c->f[1]=std::fabs(c->f[1]); // 804C38D0
  fcmp(c,0,c->f[1],c->f[0]); // 804C38D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C38D8
  if (crb(c,2)) { goto L_804C3908; } // 804C38DC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C38E0
  c->f[1]=std::fabs(c->f[1]); // 804C38E4
  fcmp(c,0,c->f[1],c->f[0]); // 804C38E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C38EC
  if (crb(c,2)) { goto L_804C3908; } // 804C38F0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C38F4
  c->f[1]=std::fabs(c->f[1]); // 804C38F8
  fcmp(c,0,c->f[1],c->f[0]); // 804C38FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3900
  if (!crb(c,2)) { goto L_804C3AF4; } // 804C3904
L_804C3908:;
  c->r[3]=c->r[1]+0x00000020u; // 804C3908
  c->r[4]=c->r[3]|c->r[3]; // 804C390C
  c->lr=0x804C3914u; f_80383D38(c); // 804C3910
  c->r[3]=c->r[1]+0x00000008u; // 804C3914
  c->r[4]=c->r[1]+0x00000020u; // 804C3918
  c->r[5]=c->r[1]+0x00000014u; // 804C391C
  c->lr=0x804C3924u; f_80383DE0(c); // 804C3920
  cmps(c,0,(int32_t)c->r[31],0); // 804C3924
  if (crb(c,2)) { goto L_804C39CC; } // 804C3928
  c->r[3]=c->r[30]+c->r[28]; // 804C392C
  {uint32_t ea=c->r[30]+c->r[28]; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3930
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3934
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3938
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C393C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3940
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3944
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C3948
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C394C
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 804C3950
  fcmp(c,0,c->f[30],c->f[0]); // 804C3954
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3958
  if (!crb(c,2)) { goto L_804C3964; } // 804C395C
  goto L_804C3970; // 804C3960
L_804C3964:;
  c->f[1]=c->f[30]; // 804C3964
  c->lr=0x804C396Cu; f_804E1098(c); // 804C3968
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 804C396C
L_804C3970:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C3970
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C3974
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3978
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C397C
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3980
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3984
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C3988
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C398C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C3990
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3994
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 804C3998
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C399C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 804C39A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C39A4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C39A8
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 804C39AC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C39B0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C39B4
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 804C39B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C39BC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C39C0
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 804C39C4
  goto L_804C3AFC; // 804C39C8
L_804C39CC:;
  c->r[3]=c->r[30]+c->r[28]; // 804C39CC
  {uint32_t ea=c->r[30]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C39D0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C39D4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C39D8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C39DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C39E0
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C39E4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C39E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C39EC
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C39F0
  fcmp(c,0,c->f[31],c->f[30]); // 804C39F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C39F8
  if (!crb(c,2)) { goto L_804C3A04; } // 804C39FC
  goto L_804C3A10; // 804C3A00
L_804C3A04:;
  c->f[1]=c->f[31]; // 804C3A04
  c->lr=0x804C3A0Cu; f_804E1098(c); // 804C3A08
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C3A0C
L_804C3A10:;
  c->r[3]=c->r[30]+c->r[28]; // 804C3A10
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C3A14
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3A18
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3A1C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3A20
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3A24
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3A28
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3A2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3A30
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C3A34
  fcmp(c,0,c->f[29],c->f[31]); // 804C3A38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3A3C
  if (!crb(c,2)) { goto L_804C3A48; } // 804C3A40
  goto L_804C3A54; // 804C3A44
L_804C3A48:;
  c->f[1]=c->f[29]; // 804C3A48
  c->lr=0x804C3A50u; f_804E1098(c); // 804C3A4C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C3A50
L_804C3A54:;
  c->r[3]=c->r[30]+c->r[28]; // 804C3A54
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3A58
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3A5C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3A60
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3A64
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3A68
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3A6C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C3A70
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C3A74
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C3A78
  fcmp(c,0,c->f[29],c->f[0]); // 804C3A7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3A80
  if (!crb(c,2)) { goto L_804C3A8C; } // 804C3A84
  goto L_804C3A98; // 804C3A88
L_804C3A8C:;
  c->f[1]=c->f[29]; // 804C3A8C
  c->lr=0x804C3A94u; f_804E1098(c); // 804C3A90
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C3A94
L_804C3A98:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C3A98
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C3A9C
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3AA0
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3AA4
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3AA8
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3AAC
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C3AB0
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C3AB4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C3AB8
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3ABC
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 804C3AC0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3AC4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 804C3AC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3ACC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 804C3AD0
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 804C3AD4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3AD8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 804C3ADC
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 804C3AE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3AE4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C3AE8
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 804C3AEC
  goto L_804C3AFC; // 804C3AF0
L_804C3AF4:;
  c->r[3]=c->r[29]|c->r[29]; // 804C3AF4
  c->lr=0x804C3AFCu; f_804E1674(c); // 804C3AF8
L_804C3AFC:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804C3AFC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804C3B00
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804C3B04
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804C3B08
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804C3B0C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804C3B10
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804C3B14
  c->r[30]=R32(c->r[1]+0x00000038u); // 804C3B18
  c->r[29]=R32(c->r[1]+0x00000034u); // 804C3B1C
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C3B20
  c->r[28]=R32(c->r[1]+0x00000030u); // 804C3B24
  c->lr=c->r[0]; // 804C3B28
  c->r[1]=c->r[1]+0x00000070u; // 804C3B2C
  return; // 804C3B30
}

// fn_804C3B34
void f_804C3B34(Ctx* __restrict c) {
  trace_call(0x804C3B34u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C3B34
  c->r[0]=c->lr; // 804C3B38
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C3B3C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804C3B40
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804C3B44
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804C3B48
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804C3B4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804C3B50
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804C3B54
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3B58
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804C3B5C
  {uint32_t ea=c->r[2]+0x00001658u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3B60
  W32(c->r[1]+0x00000038u,c->r[30]); // 804C3B64
  c->r[30]=c->r[5]|c->r[5]; // 804C3B68
  W32(c->r[1]+0x00000034u,c->r[29]); // 804C3B6C
  c->r[29]=c->r[4]|c->r[4]; // 804C3B70
  W32(c->r[1]+0x00000030u,c->r[28]); // 804C3B74
  c->r[28]=c->r[3]|c->r[3]; // 804C3B78
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3B7C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C3B80
  c->f[6]=std::fabs(c->f[2]); // 804C3B84
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3B88
  c->f[5]=-c->f[2]; // 804C3B8C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804C3B90
  fcmp(c,0,c->f[6],c->f[0]); // 804C3B94
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 804C3B98
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 804C3B9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 804C3BA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 804C3BA4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804C3BA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3BAC
  if (crb(c,2)) { goto L_804C3BD4; } // 804C3BB0
  c->f[1]=std::fabs(c->f[3]); // 804C3BB4
  fcmp(c,0,c->f[1],c->f[0]); // 804C3BB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3BBC
  if (crb(c,2)) { goto L_804C3BD4; } // 804C3BC0
  c->f[1]=std::fabs(c->f[4]); // 804C3BC4
  fcmp(c,0,c->f[1],c->f[0]); // 804C3BC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3BCC
  if (!crb(c,2)) { goto L_804C3DD4; } // 804C3BD0
L_804C3BD4:;
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 804C3BD4
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C3BD8
  c->r[3]=c->r[4]+c->r[31]; // 804C3BDC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3BE0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3BE4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3BE8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3BEC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3BF0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3BF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3BF8
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C3BFC
  fcmp(c,0,c->f[31],c->f[30]); // 804C3C00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3C04
  if (!crb(c,2)) { goto L_804C3C10; } // 804C3C08
  goto L_804C3C1C; // 804C3C0C
L_804C3C10:;
  c->f[1]=c->f[31]; // 804C3C10
  c->lr=0x804C3C18u; f_804E1098(c); // 804C3C14
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C3C18
L_804C3C1C:;
  c->f[1]=c->ps1[1]=fres(c->f[30]); // 804C3C1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C3C20
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,0,0);} // 804C3C24
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3C28
  {double t0=S(c->f[1]+c->f[1]), t1=S(c->ps1[1]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3C2C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3C30
  c->f[4]=std::fabs(c->f[4]); // 804C3C34
  {double t0=S(-std::fma(c->f[30],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[30],c->ps1[1],-c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804C3C38
  fcmp(c,0,c->f[4],c->f[0]); // 804C3C3C
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3C40
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,3,ea,1,0);} // 804C3C44
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,0,0);} // 804C3C48
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3C4C
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,2,ea,1,0);} // 804C3C50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3C54
  if (crb(c,2)) { goto L_804C3C70; } // 804C3C58
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3C5C
  c->f[1]=std::fabs(c->f[1]); // 804C3C60
  fcmp(c,0,c->f[1],c->f[0]); // 804C3C64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3C68
  if (!crb(c,2)) { goto L_804C3DD4; } // 804C3C6C
L_804C3C70:;
  c->r[3]=c->r[1]+0x00000008u; // 804C3C70
  c->r[4]=c->r[3]|c->r[3]; // 804C3C74
  c->lr=0x804C3C7Cu; f_80383D38(c); // 804C3C78
  c->r[3]=c->r[1]+0x00000008u; // 804C3C7C
  c->r[4]=c->r[1]+0x00000014u; // 804C3C80
  c->r[5]=c->r[1]+0x00000020u; // 804C3C84
  c->lr=0x804C3C8Cu; f_80383DE0(c); // 804C3C88
  cmps(c,0,(int32_t)c->r[30],0); // 804C3C8C
  if (crb(c,2)) { goto L_804C3CF0; } // 804C3C90
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 804C3C94
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 804C3C98
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3C9C
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 804C3CA0
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3CA4
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804C3CA8
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 804C3CAC
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 804C3CB0
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 804C3CB4
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3CB8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[2]);} // 804C3CBC
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3CC0
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[2]);} // 804C3CC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3CC8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3CCC
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 804C3CD0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3CD4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3CD8
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[2]);} // 804C3CDC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3CE0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3CE4
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[2]);} // 804C3CE8
  goto L_804C3DDC; // 804C3CEC
L_804C3CF0:;
  c->r[3]=c->r[29]+c->r[31]; // 804C3CF0
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3CF4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3CF8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3CFC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3D00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3D04
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C3D08
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3D0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3D10
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C3D14
  fcmp(c,0,c->f[29],c->f[31]); // 804C3D18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3D1C
  if (!crb(c,2)) { goto L_804C3D28; } // 804C3D20
  goto L_804C3D34; // 804C3D24
L_804C3D28:;
  c->f[1]=c->f[29]; // 804C3D28
  c->lr=0x804C3D30u; f_804E1098(c); // 804C3D2C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C3D30
L_804C3D34:;
  c->r[3]=c->r[29]+c->r[31]; // 804C3D34
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3D38
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3D3C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3D40
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3D44
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3D48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3D4C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C3D50
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C3D54
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C3D58
  fcmp(c,0,c->f[29],c->f[0]); // 804C3D5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3D60
  if (!crb(c,2)) { goto L_804C3D6C; } // 804C3D64
  goto L_804C3D78; // 804C3D68
L_804C3D6C:;
  c->f[1]=c->f[29]; // 804C3D6C
  c->lr=0x804C3D74u; f_804E1098(c); // 804C3D70
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C3D74
L_804C3D78:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C3D78
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C3D7C
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3D80
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3D84
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3D88
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3D8C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C3D90
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C3D94
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C3D98
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3D9C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 804C3DA0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C3DA4
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 804C3DA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3DAC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 804C3DB0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 804C3DB4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3DB8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 804C3DBC
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 804C3DC0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3DC4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C3DC8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 804C3DCC
  goto L_804C3DDC; // 804C3DD0
L_804C3DD4:;
  c->r[3]=c->r[28]|c->r[28]; // 804C3DD4
  c->lr=0x804C3DDCu; f_804E1674(c); // 804C3DD8
L_804C3DDC:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804C3DDC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804C3DE0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804C3DE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804C3DE8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804C3DEC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804C3DF0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804C3DF4
  c->r[30]=R32(c->r[1]+0x00000038u); // 804C3DF8
  c->r[29]=R32(c->r[1]+0x00000034u); // 804C3DFC
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C3E00
  c->r[28]=R32(c->r[1]+0x00000030u); // 804C3E04
  c->lr=c->r[0]; // 804C3E08
  c->r[1]=c->r[1]+0x00000070u; // 804C3E0C
  return; // 804C3E10
}

// fn_804C3E14
void f_804C3E14(Ctx* __restrict c) {
  trace_call(0x804C3E14u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C3E14
  c->r[0]=c->lr; // 804C3E18
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C3E1C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804C3E20
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804C3E24
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804C3E28
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804C3E2C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804C3E30
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804C3E34
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3E38
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804C3E3C
  W32(c->r[1]+0x00000038u,c->r[30]); // 804C3E40
  c->r[30]=c->r[5]|c->r[5]; // 804C3E44
  W32(c->r[1]+0x00000034u,c->r[29]); // 804C3E48
  c->r[29]=c->r[4]|c->r[4]; // 804C3E4C
  W32(c->r[1]+0x00000030u,c->r[28]); // 804C3E50
  c->r[28]=c->r[3]|c->r[3]; // 804C3E54
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3E58
  {uint32_t ea=c->r[3]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C3E5C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C3E60
  c->f[2]=std::fabs(c->f[1]); // 804C3E64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804C3E68
  fcmp(c,0,c->f[2],c->f[0]); // 804C3E6C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 804C3E70
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 804C3E74
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C3E78
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3E7C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3E80
  c->f[3]=-c->f[3]; // 804C3E84
  c->f[2]=-c->f[2]; // 804C3E88
  c->f[1]=-c->f[1]; // 804C3E8C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 804C3E90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804C3E94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C3E98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3E9C
  if (crb(c,2)) { goto L_804C3EC4; } // 804C3EA0
  c->f[1]=std::fabs(c->f[4]); // 804C3EA4
  fcmp(c,0,c->f[1],c->f[0]); // 804C3EA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3EAC
  if (crb(c,2)) { goto L_804C3EC4; } // 804C3EB0
  c->f[1]=std::fabs(c->f[5]); // 804C3EB4
  fcmp(c,0,c->f[1],c->f[0]); // 804C3EB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3EBC
  if (!crb(c,2)) { goto L_804C40E8; } // 804C3EC0
L_804C3EC4:;
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 804C3EC4
  {uint32_t ea=c->r[2]+0x00001658u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C3EC8
  c->r[3]=c->r[4]+c->r[31]; // 804C3ECC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3ED0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3ED4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C3ED8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3EDC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C3EE0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C3EE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C3EE8
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804C3EEC
  fcmp(c,0,c->f[31],c->f[30]); // 804C3EF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C3EF4
  if (!crb(c,2)) { goto L_804C3F00; } // 804C3EF8
  goto L_804C3F0C; // 804C3EFC
L_804C3F00:;
  c->f[1]=c->f[31]; // 804C3F00
  c->lr=0x804C3F08u; f_804E1098(c); // 804C3F04
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 804C3F08
L_804C3F0C:;
  c->f[0]=c->ps1[0]=fres(c->f[30]); // 804C3F0C
  c->r[3]=c->r[1]+0x00000014u; // 804C3F10
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 804C3F14
  c->r[4]=c->r[1]+0x00000008u; // 804C3F18
  c->r[5]=c->r[1]+0x00000020u; // 804C3F1C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3F20
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804C3F24
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 804C3F28
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3F2C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 804C3F30
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 804C3F34
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3F38
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 804C3F3C
  c->lr=0x804C3F44u; f_80383DE0(c); // 804C3F40
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3F44
  {uint32_t ea=c->r[2]+0x0000165Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C3F48
  c->f[1]=std::fabs(c->f[1]); // 804C3F4C
  fcmp(c,0,c->f[1],c->f[0]); // 804C3F50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3F54
  if (crb(c,2)) { goto L_804C3F84; } // 804C3F58
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3F5C
  c->f[1]=std::fabs(c->f[1]); // 804C3F60
  fcmp(c,0,c->f[1],c->f[0]); // 804C3F64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3F68
  if (crb(c,2)) { goto L_804C3F84; } // 804C3F6C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C3F70
  c->f[1]=std::fabs(c->f[1]); // 804C3F74
  fcmp(c,0,c->f[1],c->f[0]); // 804C3F78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804C3F7C
  if (!crb(c,2)) { goto L_804C40E8; } // 804C3F80
L_804C3F84:;
  c->r[3]=c->r[1]+0x00000020u; // 804C3F84
  c->r[4]=c->r[3]|c->r[3]; // 804C3F88
  c->lr=0x804C3F90u; f_80383D38(c); // 804C3F8C
  c->r[3]=c->r[1]+0x00000020u; // 804C3F90
  c->r[4]=c->r[1]+0x00000014u; // 804C3F94
  c->r[5]=c->r[1]+0x00000008u; // 804C3F98
  c->lr=0x804C3FA0u; f_80383DE0(c); // 804C3F9C
  cmps(c,0,(int32_t)c->r[30],0); // 804C3FA0
  if (crb(c,2)) { goto L_804C4004; } // 804C3FA4
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 804C3FA8
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 804C3FAC
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3FB0
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 804C3FB4
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C3FB8
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804C3FBC
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 804C3FC0
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 804C3FC4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 804C3FC8
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3FCC
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[2]);} // 804C3FD0
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804C3FD4
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[2]);} // 804C3FD8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3FDC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3FE0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 804C3FE4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3FE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3FEC
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[2]);} // 804C3FF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C3FF4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 804C3FF8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[2]);} // 804C3FFC
  goto L_804C40F0; // 804C4000
L_804C4004:;
  c->r[3]=c->r[29]+c->r[31]; // 804C4004
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 804C4008
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C400C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C4010
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C4014
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804C4018
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C401C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C4020
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C4024
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 804C4028
  fcmp(c,0,c->f[29],c->f[31]); // 804C402C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C4030
  if (!crb(c,2)) { goto L_804C403C; } // 804C4034
  goto L_804C4048; // 804C4038
L_804C403C:;
  c->f[1]=c->f[29]; // 804C403C
  c->lr=0x804C4044u; f_804E1098(c); // 804C4040
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804C4044
L_804C4048:;
  c->r[3]=c->r[29]+c->r[31]; // 804C4048
  {uint32_t ea=c->r[2]+0x00001658u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C404C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C4050
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C4054
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804C4058
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C405C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804C4060
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804C4064
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C4068
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 804C406C
  fcmp(c,0,c->f[29],c->f[0]); // 804C4070
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C4074
  if (!crb(c,2)) { goto L_804C4080; } // 804C4078
  goto L_804C408C; // 804C407C
L_804C4080:;
  c->f[1]=c->f[29]; // 804C4080
  c->lr=0x804C4088u; f_804E1098(c); // 804C4084
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 804C4088
L_804C408C:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 804C408C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804C4090
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 804C4094
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 804C4098
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C409C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804C40A0
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 804C40A4
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 804C40A8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804C40AC
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C40B0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 804C40B4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804C40B8
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 804C40BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C40C0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 804C40C4
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 804C40C8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C40CC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 804C40D0
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 804C40D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C40D8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804C40DC
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 804C40E0
  goto L_804C40F0; // 804C40E4
L_804C40E8:;
  c->r[3]=c->r[28]|c->r[28]; // 804C40E8
  c->lr=0x804C40F0u; f_804E1674(c); // 804C40EC
L_804C40F0:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804C40F0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804C40F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804C40F8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804C40FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804C4100
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804C4104
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804C4108
  c->r[30]=R32(c->r[1]+0x00000038u); // 804C410C
  c->r[29]=R32(c->r[1]+0x00000034u); // 804C4110
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C4114
  c->r[28]=R32(c->r[1]+0x00000030u); // 804C4118
  c->lr=c->r[0]; // 804C411C
  c->r[1]=c->r[1]+0x00000070u; // 804C4120
  return; // 804C4124
}

// fn_804C4128
void f_804C4128(Ctx* __restrict c) {
  trace_call(0x804C4128u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C4128
  c->r[0]=c->lr; // 804C412C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804C4130
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 804C4134
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 804C4138
  c->r[11]=c->r[1]+0x00000090u; // 804C413C
  c->lr=0x804C4144u; f_803A9BD0(c); // 804C4140
  cmps(c,0,(int32_t)c->r[7],0); // 804C4144
  c->r[15]=c->r[3]|c->r[3]; // 804C4148
  c->r[16]=c->r[4]|c->r[4]; // 804C414C
  c->r[17]=c->r[5]|c->r[5]; // 804C4150
  c->r[18]=c->r[6]|c->r[6]; // 804C4154
  c->r[19]=c->r[7]|c->r[7]; // 804C4158
  c->r[20]=c->r[8]|c->r[8]; // 804C415C
  c->r[21]=c->r[9]|c->r[9]; // 804C4160
  c->r[22]=c->r[10]|c->r[10]; // 804C4164
  if (crb(c,2)) { goto L_804C4444; } // 804C4168
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 804C416C
  cmpu(c,0,c->r[7],0x00000001u); // 804C4170
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 804C4174
  c->r[0]=c->r[3]+0x0000001Fu; // 804C4178
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804C417C
  c->r[4]=c->r[4]+0x0000001Fu; // 804C4180
  W32(c->r[1]+0x00000040u,c->r[0]); // 804C4184
  c->r[14]=rotl(c->r[4],0)&0xFFFFFFE0u; // 804C4188
  if (!crb(c,1)) { goto L_804C41A8; } // 804C418C
  c->r[3]=c->r[20]|c->r[20]; // 804C4190
  c->r[4]=c->r[17]|c->r[17]; // 804C4194
  c->r[5]=c->r[15]|c->r[15]; // 804C4198
  c->r[6]=c->r[19]|c->r[19]; // 804C419C
  c->lr=0x804C41A4u; f_8038302C(c); // 804C41A0
  goto L_804C41B8; // 804C41A4
L_804C41A8:;
  c->r[3]=c->r[20]|c->r[20]; // 804C41A8
  c->r[4]=c->r[17]|c->r[17]; // 804C41AC
  c->r[5]=c->r[15]|c->r[15]; // 804C41B0
  c->lr=0x804C41B8u; f_80382F60(c); // 804C41B4
L_804C41B8:;
  c->lr=0x804C41BCu; f_804C4FEC(c); // 804C41B8
  c->r[24]=c->r[3]|c->r[3]; // 804C41BC
  c->r[31]=0u+0x806B0000u; // 804C41C0
  c->r[30]=c->r[18]|c->r[18]; // 804C41C4
  c->r[29]=c->r[15]|c->r[15]; // 804C41C8
  c->r[27]=c->r[17]|c->r[17]; // 804C41CC
  c->r[26]=c->r[24]|c->r[24]; // 804C41D0
  c->r[25]=c->r[15]|c->r[15]; // 804C41D4
  c->r[31]=c->r[31]+0xFFFFBDD0u; // 804C41D8
  c->r[23]=0u+0x00000000u; // 804C41DC
  c->r[28]=0u+0x00000000u; // 804C41E0
  goto L_804C4358; // 804C41E4
L_804C41E8:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 804C41E8
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; cr0(c,c->r[0]); // 804C41EC
  if (crb(c,2)) { goto L_804C42CC; } // 804C41F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C41F4
  c->r[5]=R32(c->r[21]+0x00000000u); // 804C41F8
  c->r[12]=R32(c->r[31]+c->r[0]); // 804C41FC
  c->r[3]=c->r[29]|c->r[29]; // 804C4200
  W32(c->r[1]+0x00000008u,c->r[5]); // 804C4204
  c->r[4]=c->r[17]|c->r[17]; // 804C4208
  c->r[6]=c->r[20]|c->r[20]; // 804C420C
  c->r[8]=c->r[23]|c->r[23]; // 804C4210
  c->r[7]=c->r[1]+0x00000008u; // 804C4214
  c->r[5]=rotl(c->r[9],3)&0x00000001u; // 804C4218
  c->ctr=c->r[12]; // 804C421C
  if (true) { c->lr=0x804C4224u; dispatch(c,c->ctr); } // 804C4220
  c->r[4]=R32(c->r[21]+0x00000000u); // 804C4224
  c->r[3]=c->r[21]|c->r[21]; // 804C4228
  c->r[4]=c->r[4]+0x0000004Cu; // 804C422C
  c->r[0]=R32(c->r[4]+0x00000024u); // 804C4230
  c->r[0]=c->r[4]+c->r[0]; // 804C4234
  c->r[4]=c->r[0]+c->r[28]; // 804C4238
  c->r[4]=R32(c->r[4]+0x00000004u); // 804C423C
  c->lr=0x804C4244u; f_804AC4AC(c); // 804C4240
  c->r[0]=0u-c->r[3]; // 804C4244
  c->r[0]=c->r[0]|c->r[3]; // 804C4248
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804C424C
  if (crb(c,2)) { goto L_804C4278; } // 804C4250
  c->r[0]=R32(c->r[3]+0x00000060u); // 804C4254
  cmps(c,0,(int32_t)c->r[0],0); // 804C4258
  if (crb(c,2)) { goto L_804C4268; } // 804C425C
  c->r[0]=c->r[3]+c->r[0]; // 804C4260
  goto L_804C426C; // 804C4264
L_804C4268:;
  c->r[0]=0u+0x00000000u; // 804C4268
L_804C426C:;
  c->r[3]=0u-c->r[0]; // 804C426C
  c->r[0]=c->r[3]|c->r[0]; // 804C4270
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C4274
L_804C4278:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C4278
  if (crb(c,2)) { goto L_804C433C; } // 804C427C
  c->r[4]=c->r[27]|c->r[27]; // 804C4280
  c->r[3]=c->r[1]+0x00000010u; // 804C4284
  c->lr=0x804C428Cu; f_804B4CA4(c); // 804C4288
  cmpu(c,0,c->r[3],0x00000001u); // 804C428C
  if (!crb(c,2)) { goto L_804C42A8; } // 804C4290
  c->r[3]=c->r[25]|c->r[25]; // 804C4294
  c->r[5]=c->r[26]|c->r[26]; // 804C4298
  c->r[4]=c->r[1]+0x00000010u; // 804C429C
  c->lr=0x804C42A4u; f_80382F60(c); // 804C42A0
  goto L_804C433C; // 804C42A4
L_804C42A8:;
  c->r[3]=c->r[26]|c->r[26]; // 804C42A8
  c->lr=0x804C42B0u; f_80382F00(c); // 804C42AC
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C42B0
  {uint32_t ea=c->r[20]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C42B4
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C42B8
  {uint32_t ea=c->r[20]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C42BC
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C42C0
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C42C4
  goto L_804C433C; // 804C42C8
L_804C42CC:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C42CC
  c->r[3]=c->r[3]+0x0000004Cu; // 804C42D0
  c->r[0]=R32(c->r[3]+0x00000024u); // 804C42D4
  c->r[0]=c->r[3]+c->r[0]; // 804C42D8
  c->r[3]=c->r[0]+c->r[28]; // 804C42DC
  c->r[4]=R32(c->r[3]+0x00000004u); // 804C42E0
  cmps(c,0,(int32_t)c->r[4],0); // 804C42E4
  if (crb(c,0)) { goto L_804C433C; } // 804C42E8
  c->r[3]=c->r[21]|c->r[21]; // 804C42EC
  c->lr=0x804C42F4u; f_804AC4AC(c); // 804C42F0
  cmps(c,0,(int32_t)c->r[3],0); // 804C42F4
  if (crb(c,2)) { goto L_804C433C; } // 804C42F8
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C42FC
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C4300
  if (crb(c,2)) { goto L_804C433C; } // 804C4304
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804C4308
  c->r[3]=c->r[21]|c->r[21]; // 804C430C
  c->lr=0x804C4314u; f_804AC4AC(c); // 804C4310
  cmps(c,0,(int32_t)c->r[3],0); // 804C4314
  if (crb(c,2)) { goto L_804C4324; } // 804C4318
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C431C
  goto L_804C4328; // 804C4320
L_804C4324:;
  c->r[0]=0u+0x00000000u; // 804C4324
L_804C4328:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C4328
  c->r[4]=c->r[27]|c->r[27]; // 804C432C
  c->r[5]=c->r[29]|c->r[29]; // 804C4330
  c->r[3]=c->r[24]+c->r[0]; // 804C4334
  c->lr=0x804C433Cu; f_80382F60(c); // 804C4338
L_804C433C:;
  c->r[30]=c->r[30]+0x00000004u; // 804C433C
  c->r[29]=c->r[29]+0x00000030u; // 804C4340
  c->r[28]=c->r[28]+0x00000004u; // 804C4344
  c->r[27]=c->r[27]+0x00000030u; // 804C4348
  c->r[26]=c->r[26]+0x00000030u; // 804C434C
  c->r[25]=c->r[25]+0x00000030u; // 804C4350
  c->r[23]=c->r[23]+0x00000001u; // 804C4354
L_804C4358:;
  cmpu(c,0,c->r[23],c->r[19]); // 804C4358
  if (crb(c,0)) { IRQCHK(c); goto L_804C41E8; } // 804C435C
  cmps(c,0,(int32_t)c->r[16],0); // 804C4360
  if (crb(c,2)) { goto L_804C4410; } // 804C4364
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C4368
  c->r[17]=c->r[15]|c->r[15]; // 804C436C
  c->r[20]=c->r[16]|c->r[16]; // 804C4370
  c->r[21]=c->r[22]|c->r[22]; // 804C4374
  c->r[23]=c->r[22]|c->r[22]; // 804C4378
  c->r[24]=0u+0x00000000u; // 804C437C
  goto L_804C4408; // 804C4380
L_804C4384:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 804C4384
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 804C4388
  if (crb(c,2)) { goto L_804C43C0; } // 804C438C
  cmps(c,0,(int32_t)c->r[22],0); // 804C4390
  if (crb(c,2)) { goto L_804C43B0; } // 804C4394
  c->r[3]=c->r[17]|c->r[17]; // 804C4398
  c->r[4]=c->r[21]|c->r[21]; // 804C439C
  c->lr=0x804C43A4u; f_80382F2C(c); // 804C43A0
  {uint32_t ea=c->r[21]+0x0000002Cu; WF32(ea,c->f[31]);} // 804C43A4
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 804C43A8
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 804C43AC
L_804C43B0:;
  c->r[3]=c->r[20]|c->r[20]; // 804C43B0
  c->r[4]=c->r[17]|c->r[17]; // 804C43B4
  c->lr=0x804C43BCu; f_804E1640(c); // 804C43B8
  goto L_804C43F0; // 804C43BC
L_804C43C0:;
  cmps(c,0,(int32_t)c->r[22],0); // 804C43C0
  if (crb(c,2)) { goto L_804C43E4; } // 804C43C4
  c->r[3]=c->r[21]|c->r[21]; // 804C43C8
  c->r[4]=c->r[17]|c->r[17]; // 804C43CC
  c->lr=0x804C43D4u; f_804B4B9C(c); // 804C43D0
  c->r[3]=c->r[20]|c->r[20]; // 804C43D4
  c->r[4]=c->r[23]|c->r[23]; // 804C43D8
  c->lr=0x804C43E0u; f_804E1640(c); // 804C43DC
  goto L_804C43F0; // 804C43E0
L_804C43E4:;
  c->r[3]=c->r[20]|c->r[20]; // 804C43E4
  c->r[4]=c->r[17]|c->r[17]; // 804C43E8
  c->lr=0x804C43F0u; f_804B4AB8(c); // 804C43EC
L_804C43F0:;
  c->r[17]=c->r[17]+0x00000030u; // 804C43F0
  c->r[20]=c->r[20]+0x00000024u; // 804C43F4
  c->r[18]=c->r[18]+0x00000004u; // 804C43F8
  c->r[21]=c->r[21]+0x00000030u; // 804C43FC
  c->r[23]=c->r[23]+0x00000030u; // 804C4400
  c->r[24]=c->r[24]+0x00000001u; // 804C4404
L_804C4408:;
  cmpu(c,0,c->r[24],c->r[19]); // 804C4408
  if (crb(c,0)) { IRQCHK(c); goto L_804C4384; } // 804C440C
L_804C4410:;
  c->r[3]=c->r[15]|c->r[15]; // 804C4410
  c->r[4]=c->r[14]|c->r[14]; // 804C4414
  c->lr=0x804C441Cu; f_8037726C(c); // 804C4418
  cmps(c,0,(int32_t)c->r[16],0); // 804C441C
  if (crb(c,2)) { goto L_804C4444; } // 804C4420
  c->r[4]=R32(c->r[1]+0x00000040u); // 804C4424
  c->r[3]=c->r[16]|c->r[16]; // 804C4428
  c->lr=0x804C4430u; f_8037726C(c); // 804C442C
  cmps(c,0,(int32_t)c->r[22],0); // 804C4430
  if (crb(c,2)) { goto L_804C4444; } // 804C4434
  c->r[3]=c->r[22]|c->r[22]; // 804C4438
  c->r[4]=c->r[14]|c->r[14]; // 804C443C
  c->lr=0x804C4444u; f_8037726C(c); // 804C4440
L_804C4444:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 804C4444
  c->r[11]=c->r[1]+0x00000090u; // 804C4448
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 804C444C
  c->lr=0x804C4454u; f_803A9C1C(c); // 804C4450
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804C4454
  c->lr=c->r[0]; // 804C4458
  c->r[1]=c->r[1]+0x000000A0u; // 804C445C
  return; // 804C4460
}

// fn_804C4464
void f_804C4464(Ctx* __restrict c) {
  trace_call(0x804C4464u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C4464
  c->r[0]=c->lr; // 804C4468
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804C446C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 804C4470
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 804C4474
  c->r[11]=c->r[1]+0x000000D0u; // 804C4478
  c->lr=0x804C4480u; f_803A9BD0(c); // 804C447C
  cmps(c,0,(int32_t)c->r[7],0); // 804C4480
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C4484
  c->r[15]=c->r[5]|c->r[5]; // 804C4488
  c->r[16]=c->r[8]|c->r[8]; // 804C448C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804C4490
  c->r[17]=c->r[9]|c->r[9]; // 804C4494
  c->r[18]=c->r[10]|c->r[10]; // 804C4498
  W32(c->r[1]+0x00000010u,c->r[6]); // 804C449C
  W32(c->r[1]+0x00000014u,c->r[7]); // 804C44A0
  if (crb(c,2)) { goto L_804C4920; } // 804C44A4
  c->r[5]=0u+0xE0000000u; // 804C44A8
  c->r[0]=c->r[5]+0x00001000u; // 804C44AC
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 804C44B0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C44B4
  c->r[0]=c->r[5]+0x00001800u; // 804C44B8
  W32(c->r[1]+0x00000068u,c->r[0]); // 804C44BC
  c->r[14]=c->r[5]+0x00000800u; // 804C44C0
  c->r[0]=c->r[5]+0x00002800u; // 804C44C4
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C44C8
  c->r[0]=c->r[5]+0x00003000u; // 804C44CC
  c->r[4]=c->r[4]+0x0000001Fu; // 804C44D0
  W32(c->r[1]+0x00000060u,c->r[0]); // 804C44D4
  c->r[0]=c->r[5]+0x00003800u; // 804C44D8
  c->r[19]=rotl(c->r[4],0)&0xFFFFFFE0u; // 804C44DC
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C44E0
  c->r[4]=c->r[19]|c->r[19]; // 804C44E4
  c->lr=0x804C44ECu; f_803771E0(c); // 804C44E8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C44EC
  cmps(c,0,(int32_t)c->r[0],0); // 804C44F0
  c->r[0]=0u+0x00000001u; // 804C44F4
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C44F8
  if (crb(c,2)) { goto L_804C453C; } // 804C44FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4500
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 804C4504
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804C4508
  c->r[0]=0u+0x00000002u; // 804C450C
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C4510
  c->r[0]=c->r[4]+0x0000001Fu; // 804C4514
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804C4518
  c->lr=0x804C4520u; f_803771E0(c); // 804C451C
  cmps(c,0,(int32_t)c->r[18],0); // 804C4520
  if (crb(c,2)) { goto L_804C453C; } // 804C4524
  c->r[0]=0u+0x00000003u; // 804C4528
  c->r[3]=c->r[18]|c->r[18]; // 804C452C
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C4530
  c->r[4]=c->r[19]|c->r[19]; // 804C4534
  c->lr=0x804C453Cu; f_803771E0(c); // 804C4538
L_804C453C:;
  c->lr=0x804C4540u; f_804C4FEC(c); // 804C453C
  c->r[29]=c->r[3]|c->r[3]; // 804C4540
  c->r[3]=0u+0x00000000u; // 804C4544
  c->lr=0x804C454Cu; f_80377568(c); // 804C4548
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C454C
  c->r[30]=0u+0x806B0000u; // 804C4550
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C4554
  c->r[30]=c->r[30]+0xFFFFBDD0u; // 804C4558
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C455C
  c->r[0]=0u+0x00000000u; // 804C4560
  c->r[21]=0u+0x00000000u; // 804C4564
  c->r[31]=0u+0x00000000u; // 804C4568
  W32(c->r[1]+0x00000078u,c->r[15]); // 804C456C
  W32(c->r[1]+0x00000070u,c->r[18]); // 804C4570
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804C4574
  goto L_804C4914; // 804C4578
L_804C457C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C457C
  c->r[20]=c->r[0]-c->r[21]; // 804C4580
  cmpu(c,0,c->r[20],0x00000028u); // 804C4584
  if (!crb(c,1)) { goto L_804C45A4; } // 804C4588
  c->r[0]=0u+0x0000003Cu; // 804C458C
  c->r[20]=0u+0x00000028u; // 804C4590
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C4594
  c->r[0]=0u+0x0000002Du; // 804C4598
  W32(c->r[1]+0x00000050u,c->r[0]); // 804C459C
  goto L_804C45C4; // 804C45A0
L_804C45A4:;
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)48); // 804C45A4
  c->r[3]=(uint32_t)((int32_t)c->r[20]*(int32_t)36); // 804C45A8
  c->r[0]=c->r[4]+0x0000001Fu; // 804C45AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C45B0
  c->r[3]=c->r[3]+0x0000001Fu; // 804C45B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C45B8
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 804C45BC
  W32(c->r[1]+0x00000050u,c->r[0]); // 804C45C0
L_804C45C4:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 804C45C4
  c->lr=0x804C45CCu; f_80377568(c); // 804C45C8
  cmpu(c,0,c->r[20],0x00000001u); // 804C45CC
  if (!crb(c,1)) { goto L_804C45EC; } // 804C45D0
  c->r[4]=R32(c->r[1]+0x00000078u); // 804C45D4
  c->r[3]=c->r[16]|c->r[16]; // 804C45D8
  c->r[5]=c->r[14]|c->r[14]; // 804C45DC
  c->r[6]=c->r[20]|c->r[20]; // 804C45E0
  c->lr=0x804C45E8u; f_8038302C(c); // 804C45E4
  goto L_804C45FC; // 804C45E8
L_804C45EC:;
  c->r[4]=R32(c->r[1]+0x00000078u); // 804C45EC
  c->r[3]=c->r[16]|c->r[16]; // 804C45F0
  c->r[5]=c->r[14]|c->r[14]; // 804C45F4
  c->lr=0x804C45FCu; f_80382F60(c); // 804C45F8
L_804C45FC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C45FC
  c->r[27]=c->r[14]|c->r[14]; // 804C4600
  c->r[25]=c->r[14]|c->r[14]; // 804C4604
  c->r[19]=0u+0x00000000u; // 804C4608
  c->r[22]=c->r[0]+c->r[31]; // 804C460C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 804C4610
  c->r[28]=c->r[22]|c->r[22]; // 804C4614
  c->r[26]=0u+0x00000000u; // 804C4618
  c->r[24]=c->r[29]+c->r[0]; // 804C461C
  goto L_804C47A8; // 804C4620
L_804C4624:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 804C4624
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 804C4628
  if (crb(c,2)) { goto L_804C4714; } // 804C462C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C4630
  c->r[5]=R32(c->r[17]+0x00000000u); // 804C4634
  c->r[12]=R32(c->r[30]+c->r[0]); // 804C4638
  c->r[3]=c->r[27]|c->r[27]; // 804C463C
  W32(c->r[1]+0x00000018u,c->r[5]); // 804C4640
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 804C4644
  c->r[4]=c->r[15]|c->r[15]; // 804C4648
  c->r[6]=c->r[16]|c->r[16]; // 804C464C
  c->r[7]=c->r[1]+0x00000018u; // 804C4650
  c->r[8]=c->r[21]+c->r[19]; // 804C4654
  c->ctr=c->r[12]; // 804C4658
  if (true) { c->lr=0x804C4660u; dispatch(c,c->ctr); } // 804C465C
  c->r[4]=R32(c->r[17]+0x00000000u); // 804C4660
  c->r[3]=c->r[17]|c->r[17]; // 804C4664
  c->r[4]=c->r[4]+0x0000004Cu; // 804C4668
  c->r[0]=R32(c->r[4]+0x00000024u); // 804C466C
  c->r[0]=c->r[4]+c->r[0]; // 804C4670
  c->r[0]=c->r[0]+c->r[31]; // 804C4674
  c->r[4]=c->r[0]+c->r[26]; // 804C4678
  c->r[4]=R32(c->r[4]+0x00000004u); // 804C467C
  c->lr=0x804C4684u; f_804AC4AC(c); // 804C4680
  c->r[0]=0u-c->r[3]; // 804C4684
  c->r[0]=c->r[0]|c->r[3]; // 804C4688
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804C468C
  if (crb(c,2)) { goto L_804C46B8; } // 804C4690
  c->r[0]=R32(c->r[3]+0x00000060u); // 804C4694
  cmps(c,0,(int32_t)c->r[0],0); // 804C4698
  if (crb(c,2)) { goto L_804C46A8; } // 804C469C
  c->r[0]=c->r[3]+c->r[0]; // 804C46A0
  goto L_804C46AC; // 804C46A4
L_804C46A8:;
  c->r[0]=0u+0x00000000u; // 804C46A8
L_804C46AC:;
  c->r[3]=0u-c->r[0]; // 804C46AC
  c->r[0]=c->r[3]|c->r[0]; // 804C46B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C46B4
L_804C46B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C46B8
  if (crb(c,2)) { goto L_804C4790; } // 804C46BC
  c->r[0]=c->r[21]+c->r[19]; // 804C46C0
  c->r[3]=c->r[1]+0x00000020u; // 804C46C4
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C46C8
  c->r[4]=c->r[15]+c->r[23]; // 804C46CC
  c->lr=0x804C46D4u; f_804B4CA4(c); // 804C46D0
  cmpu(c,0,c->r[3],0x00000001u); // 804C46D4
  if (!crb(c,2)) { goto L_804C46F0; } // 804C46D8
  c->r[3]=c->r[25]|c->r[25]; // 804C46DC
  c->r[4]=c->r[1]+0x00000020u; // 804C46E0
  c->r[5]=c->r[29]+c->r[23]; // 804C46E4
  c->lr=0x804C46ECu; f_80382F60(c); // 804C46E8
  goto L_804C4790; // 804C46EC
L_804C46F0:;
  c->r[3]=c->r[29]+c->r[23]; // 804C46F0
  c->lr=0x804C46F8u; f_80382F00(c); // 804C46F4
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C46F8
  {uint32_t ea=c->r[16]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C46FC
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C4700
  {uint32_t ea=c->r[16]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C4704
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C4708
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C470C
  goto L_804C4790; // 804C4710
L_804C4714:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 804C4714
  c->r[3]=c->r[3]+0x0000004Cu; // 804C4718
  c->r[0]=R32(c->r[3]+0x00000024u); // 804C471C
  c->r[0]=c->r[3]+c->r[0]; // 804C4720
  c->r[0]=c->r[0]+c->r[31]; // 804C4724
  c->r[3]=c->r[0]+c->r[26]; // 804C4728
  c->r[4]=R32(c->r[3]+0x00000004u); // 804C472C
  cmps(c,0,(int32_t)c->r[4],0); // 804C4730
  if (crb(c,0)) { goto L_804C4790; } // 804C4734
  c->r[3]=c->r[17]|c->r[17]; // 804C4738
  c->lr=0x804C4740u; f_804AC4AC(c); // 804C473C
  cmps(c,0,(int32_t)c->r[3],0); // 804C4740
  if (crb(c,2)) { goto L_804C4790; } // 804C4744
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C4748
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C474C
  if (crb(c,2)) { goto L_804C4790; } // 804C4750
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804C4754
  c->r[3]=c->r[17]|c->r[17]; // 804C4758
  c->lr=0x804C4760u; f_804AC4AC(c); // 804C475C
  cmps(c,0,(int32_t)c->r[3],0); // 804C4760
  if (crb(c,2)) { goto L_804C4770; } // 804C4764
  c->r[3]=R32(c->r[3]+0x00000010u); // 804C4768
  goto L_804C4774; // 804C476C
L_804C4770:;
  c->r[3]=0u+0x00000000u; // 804C4770
L_804C4774:;
  c->r[0]=c->r[21]+c->r[19]; // 804C4774
  c->r[5]=c->r[27]|c->r[27]; // 804C4778
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 804C477C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C4780
  c->r[3]=c->r[29]+c->r[3]; // 804C4784
  c->r[4]=c->r[15]+c->r[0]; // 804C4788
  c->lr=0x804C4790u; f_80382F60(c); // 804C478C
L_804C4790:;
  c->r[28]=c->r[28]+0x00000004u; // 804C4790
  c->r[27]=c->r[27]+0x00000030u; // 804C4794
  c->r[26]=c->r[26]+0x00000004u; // 804C4798
  c->r[25]=c->r[25]+0x00000030u; // 804C479C
  c->r[24]=c->r[24]+0x00000030u; // 804C47A0
  c->r[19]=c->r[19]+0x00000001u; // 804C47A4
L_804C47A8:;
  cmpu(c,0,c->r[19],c->r[20]); // 804C47A8
  if (crb(c,0)) { IRQCHK(c); goto L_804C4624; } // 804C47AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 804C47B0
  c->r[4]=c->r[14]|c->r[14]; // 804C47B4
  c->r[5]=R32(c->r[1]+0x00000054u); // 804C47B8
  c->lr=0x804C47C0u; f_805093B4(c); // 804C47BC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C47C0
  cmps(c,0,(int32_t)c->r[0],0); // 804C47C4
  if (crb(c,2)) { goto L_804C4870; } // 804C47C8
  c->r[24]=R32(c->r[1]+0x00000068u); // 804C47CC
  c->r[19]=c->r[14]|c->r[14]; // 804C47D0
  c->r[23]=R32(c->r[1]+0x0000006Cu); // 804C47D4
  c->r[26]=0u+0x00000000u; // 804C47D8
  c->r[25]=c->r[24]|c->r[24]; // 804C47DC
  goto L_804C4868; // 804C47E0
L_804C47E4:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 804C47E4
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 804C47E8
  if (crb(c,2)) { goto L_804C4820; } // 804C47EC
  cmps(c,0,(int32_t)c->r[18],0); // 804C47F0
  if (crb(c,2)) { goto L_804C4810; } // 804C47F4
  c->r[3]=c->r[19]|c->r[19]; // 804C47F8
  c->r[4]=c->r[24]|c->r[24]; // 804C47FC
  c->lr=0x804C4804u; f_80382F2C(c); // 804C4800
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[31]);} // 804C4804
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[31]);} // 804C4808
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[31]);} // 804C480C
L_804C4810:;
  c->r[3]=c->r[23]|c->r[23]; // 804C4810
  c->r[4]=c->r[19]|c->r[19]; // 804C4814
  c->lr=0x804C481Cu; f_804E1640(c); // 804C4818
  goto L_804C4850; // 804C481C
L_804C4820:;
  cmps(c,0,(int32_t)c->r[18],0); // 804C4820
  if (crb(c,2)) { goto L_804C4844; } // 804C4824
  c->r[3]=c->r[24]|c->r[24]; // 804C4828
  c->r[4]=c->r[19]|c->r[19]; // 804C482C
  c->lr=0x804C4834u; f_804B4B9C(c); // 804C4830
  c->r[3]=c->r[23]|c->r[23]; // 804C4834
  c->r[4]=c->r[25]|c->r[25]; // 804C4838
  c->lr=0x804C4840u; f_804E1640(c); // 804C483C
  goto L_804C4850; // 804C4840
L_804C4844:;
  c->r[3]=c->r[23]|c->r[23]; // 804C4844
  c->r[4]=c->r[19]|c->r[19]; // 804C4848
  c->lr=0x804C4850u; f_804B4AB8(c); // 804C484C
L_804C4850:;
  c->r[19]=c->r[19]+0x00000030u; // 804C4850
  c->r[23]=c->r[23]+0x00000024u; // 804C4854
  c->r[22]=c->r[22]+0x00000004u; // 804C4858
  c->r[24]=c->r[24]+0x00000030u; // 804C485C
  c->r[25]=c->r[25]+0x00000030u; // 804C4860
  c->r[26]=c->r[26]+0x00000001u; // 804C4864
L_804C4868:;
  cmpu(c,0,c->r[26],c->r[20]); // 804C4868
  if (crb(c,0)) { IRQCHK(c); goto L_804C47E4; } // 804C486C
L_804C4870:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C4870
  cmps(c,0,(int32_t)c->r[0],0); // 804C4874
  if (crb(c,2)) { goto L_804C48A4; } // 804C4878
  c->r[3]=R32(c->r[1]+0x00000074u); // 804C487C
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 804C4880
  c->r[5]=R32(c->r[1]+0x00000050u); // 804C4884
  c->lr=0x804C488Cu; f_805093B4(c); // 804C4888
  cmps(c,0,(int32_t)c->r[18],0); // 804C488C
  if (crb(c,2)) { goto L_804C48A4; } // 804C4890
  c->r[3]=R32(c->r[1]+0x00000070u); // 804C4894
  c->r[4]=R32(c->r[1]+0x00000068u); // 804C4898
  c->r[5]=R32(c->r[1]+0x00000054u); // 804C489C
  c->lr=0x804C48A4u; f_805093B4(c); // 804C48A0
L_804C48A4:;
  c->r[3]=c->r[14]|c->r[14]; // 804C48A4
  c->r[14]=R32(c->r[1]+0x00000064u); // 804C48A8
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 804C48AC
  c->r[21]=c->r[21]+0x00000028u; // 804C48B0
  W32(c->r[1]+0x00000064u,c->r[3]); // 804C48B4
  c->r[31]=c->r[31]+0x000000A0u; // 804C48B8
  c->r[3]=R32(c->r[1]+0x00000078u); // 804C48BC
  c->r[0]=R32(c->r[1]+0x00000060u); // 804C48C0
  c->r[3]=c->r[3]+0x00000780u; // 804C48C4
  c->r[5]=R32(c->r[1]+0x00000068u); // 804C48C8
  W32(c->r[1]+0x00000078u,c->r[3]); // 804C48CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 804C48D0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C48D4
  c->r[3]=c->r[3]+0x00000780u; // 804C48D8
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 804C48DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C48E0
  c->r[3]=R32(c->r[1]+0x00000074u); // 804C48E4
  W32(c->r[1]+0x00000068u,c->r[0]); // 804C48E8
  c->r[3]=c->r[3]+0x000005A0u; // 804C48EC
  W32(c->r[1]+0x00000074u,c->r[3]); // 804C48F0
  c->r[3]=R32(c->r[1]+0x00000070u); // 804C48F4
  W32(c->r[1]+0x00000060u,c->r[4]); // 804C48F8
  c->r[3]=c->r[3]+0x00000780u; // 804C48FC
  W32(c->r[1]+0x00000070u,c->r[3]); // 804C4900
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 804C4904
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 804C4908
  c->r[3]=c->r[3]+0x00000780u; // 804C490C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 804C4910
L_804C4914:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4914
  cmpu(c,0,c->r[21],c->r[0]); // 804C4918
  if (crb(c,0)) { IRQCHK(c); goto L_804C457C; } // 804C491C
L_804C4920:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 804C4920
  c->r[11]=c->r[1]+0x000000D0u; // 804C4924
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 804C4928
  c->lr=0x804C4930u; f_803A9C1C(c); // 804C492C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804C4930
  c->lr=c->r[0]; // 804C4934
  c->r[1]=c->r[1]+0x000000E0u; // 804C4938
  return; // 804C493C
}

// fn_804C4940
void f_804C4940(Ctx* __restrict c) {
  trace_call(0x804C4940u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C4940
  c->r[0]=c->lr; // 804C4944
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804C4948
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 804C494C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 804C4950
  c->r[11]=c->r[1]+0x000000D0u; // 804C4954
  c->lr=0x804C495Cu; f_803A9BD0(c); // 804C4958
  cmps(c,0,(int32_t)c->r[7],0); // 804C495C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C4960
  c->r[15]=c->r[5]|c->r[5]; // 804C4964
  c->r[16]=c->r[8]|c->r[8]; // 804C4968
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804C496C
  c->r[17]=c->r[9]|c->r[9]; // 804C4970
  c->r[18]=c->r[10]|c->r[10]; // 804C4974
  W32(c->r[1]+0x00000010u,c->r[6]); // 804C4978
  W32(c->r[1]+0x00000014u,c->r[7]); // 804C497C
  if (crb(c,2)) { goto L_804C4EBC; } // 804C4980
  c->r[0]=0u+0xE0000000u; // 804C4984
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 804C4988
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C498C
  c->r[4]=c->r[0]|c->r[0]; // 804C4990
  c->r[5]=c->r[5]+0x0000001Fu; // 804C4994
  c->r[0]=c->r[4]+0x00001000u; // 804C4998
  c->r[14]=c->r[4]+0x00000800u; // 804C499C
  c->r[4]=R32(c->r[1]+0x00000074u); // 804C49A0
  c->r[19]=rotl(c->r[5],0)&0xFFFFFFE0u; // 804C49A4
  W32(c->r[1]+0x00000070u,c->r[0]); // 804C49A8
  c->r[0]=c->r[4]+0x00001800u; // 804C49AC
  c->r[5]=R32(c->r[1]+0x00000074u); // 804C49B0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C49B4
  c->r[4]=c->r[19]|c->r[19]; // 804C49B8
  c->r[0]=c->r[5]+0x00002000u; // 804C49BC
  W32(c->r[1]+0x00000068u,c->r[0]); // 804C49C0
  c->r[0]=c->r[5]+0x00002800u; // 804C49C4
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C49C8
  c->r[0]=c->r[5]+0x00003000u; // 804C49CC
  W32(c->r[1]+0x00000060u,c->r[0]); // 804C49D0
  c->r[0]=c->r[5]+0x00003800u; // 804C49D4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C49D8
  c->lr=0x804C49E0u; f_803771E0(c); // 804C49DC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C49E0
  cmps(c,0,(int32_t)c->r[0],0); // 804C49E4
  c->r[0]=0u+0x00000001u; // 804C49E8
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C49EC
  if (crb(c,2)) { goto L_804C4A30; } // 804C49F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C49F4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 804C49F8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804C49FC
  c->r[0]=0u+0x00000002u; // 804C4A00
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C4A04
  c->r[0]=c->r[4]+0x0000001Fu; // 804C4A08
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804C4A0C
  c->lr=0x804C4A14u; f_803771E0(c); // 804C4A10
  cmps(c,0,(int32_t)c->r[18],0); // 804C4A14
  if (crb(c,2)) { goto L_804C4A30; } // 804C4A18
  c->r[0]=0u+0x00000003u; // 804C4A1C
  c->r[3]=c->r[18]|c->r[18]; // 804C4A20
  W32(c->r[1]+0x00000058u,c->r[0]); // 804C4A24
  c->r[4]=c->r[19]|c->r[19]; // 804C4A28
  c->lr=0x804C4A30u; f_803771E0(c); // 804C4A2C
L_804C4A30:;
  c->lr=0x804C4A34u; f_804C4FEC(c); // 804C4A30
  c->r[29]=c->r[3]|c->r[3]; // 804C4A34
  c->r[3]=0u+0x00000000u; // 804C4A38
  c->lr=0x804C4A40u; f_80377568(c); // 804C4A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4A40
  c->r[4]=c->r[15]|c->r[15]; // 804C4A44
  c->r[3]=0u+0xE0000000u; // 804C4A48
  c->r[5]=0u+0x0000003Cu; // 804C4A4C
  cmpu(c,0,c->r[0],0x00000028u); // 804C4A50
  if (crb(c,1)) { goto L_804C4A5C; } // 804C4A54
  c->r[5]=rotl(c->r[19],27)&0x07FFFFFFu; // 804C4A58
L_804C4A5C:;
  c->lr=0x804C4A60u; f_805093B0(c); // 804C4A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4A60
  cmpu(c,0,c->r[0],0x00000014u); // 804C4A64
  if (!crb(c,1)) { goto L_804C4A84; } // 804C4A68
  goto L_804C4A74; // 804C4A6C
L_804C4A70:;
  c->lr=0x804C4A74u; f_8037EE44(c); // 804C4A70
L_804C4A74:;
  c->lr=0x804C4A78u; f_8037755C(c); // 804C4A74
  cmps(c,0,(int32_t)c->r[3],0); // 804C4A78
  if (!crb(c,2)) { IRQCHK(c); goto L_804C4A70; } // 804C4A7C
  goto L_804C4A8C; // 804C4A80
L_804C4A84:;
  c->r[3]=0u+0x00000000u; // 804C4A84
  c->lr=0x804C4A8Cu; f_80377568(c); // 804C4A88
L_804C4A8C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C4A8C
  c->r[30]=0u+0x806B0000u; // 804C4A90
  {uint32_t ea=c->r[2]+0x00001658u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C4A94
  c->r[30]=c->r[30]+0xFFFFBDD0u; // 804C4A98
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804C4A9C
  c->r[0]=0u+0x00000000u; // 804C4AA0
  c->r[21]=0u+0x00000000u; // 804C4AA4
  c->r[31]=0u+0x00000000u; // 804C4AA8
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C4AAC
  c->r[0]=0u+0x00000000u; // 804C4AB0
  W32(c->r[1]+0x00000078u,c->r[18]); // 804C4AB4
  W32(c->r[1]+0x00000080u,c->r[0]); // 804C4AB8
  goto L_804C4EB0; // 804C4ABC
L_804C4AC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4AC0
  c->r[19]=c->r[0]-c->r[21]; // 804C4AC4
  cmpu(c,0,c->r[19],0x00000028u); // 804C4AC8
  c->r[20]=c->r[19]|c->r[19]; // 804C4ACC
  if (!crb(c,1)) { goto L_804C4AEC; } // 804C4AD0
  c->r[0]=0u+0x0000003Cu; // 804C4AD4
  c->r[20]=0u+0x00000028u; // 804C4AD8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C4ADC
  c->r[0]=0u+0x0000002Du; // 804C4AE0
  W32(c->r[1]+0x00000050u,c->r[0]); // 804C4AE4
  goto L_804C4B0C; // 804C4AE8
L_804C4AEC:;
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)48); // 804C4AEC
  c->r[3]=(uint32_t)((int32_t)c->r[19]*(int32_t)36); // 804C4AF0
  c->r[0]=c->r[4]+0x0000001Fu; // 804C4AF4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C4AF8
  c->r[3]=c->r[3]+0x0000001Fu; // 804C4AFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C4B00
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 804C4B04
  W32(c->r[1]+0x00000050u,c->r[0]); // 804C4B08
L_804C4B0C:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 804C4B0C
  c->lr=0x804C4B14u; f_80377568(c); // 804C4B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4B14
  c->r[3]=c->r[21]+0x00000028u; // 804C4B18
  cmpu(c,0,c->r[3],c->r[0]); // 804C4B1C
  if (!crb(c,0)) { goto L_804C4B58; } // 804C4B20
  c->r[5]=c->r[19]+0xFFFFFFD8u; // 804C4B24
  c->r[0]=R32(c->r[1]+0x00000080u); // 804C4B28
  cmpu(c,0,c->r[5],0x00000028u); // 804C4B2C
  c->r[3]=R32(c->r[1]+0x00000068u); // 804C4B30
  c->r[4]=c->r[0]+c->r[15]; // 804C4B34
  c->r[4]=c->r[4]+0x00000780u; // 804C4B38
  if (!crb(c,1)) { goto L_804C4B48; } // 804C4B3C
  c->r[5]=0u+0x0000003Cu; // 804C4B40
  goto L_804C4B54; // 804C4B44
L_804C4B48:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 804C4B48
  c->r[0]=c->r[5]+0x0000001Fu; // 804C4B4C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C4B50
L_804C4B54:;
  c->lr=0x804C4B58u; f_805093B0(c); // 804C4B54
L_804C4B58:;
  cmpu(c,0,c->r[20],0x00000001u); // 804C4B58
  if (!crb(c,1)) { goto L_804C4B78; } // 804C4B5C
  c->r[4]=R32(c->r[1]+0x00000074u); // 804C4B60
  c->r[3]=c->r[16]|c->r[16]; // 804C4B64
  c->r[5]=c->r[14]|c->r[14]; // 804C4B68
  c->r[6]=c->r[20]|c->r[20]; // 804C4B6C
  c->lr=0x804C4B74u; f_8038302C(c); // 804C4B70
  goto L_804C4B88; // 804C4B74
L_804C4B78:;
  c->r[4]=R32(c->r[1]+0x00000074u); // 804C4B78
  c->r[3]=c->r[16]|c->r[16]; // 804C4B7C
  c->r[5]=c->r[14]|c->r[14]; // 804C4B80
  c->lr=0x804C4B88u; f_80382F60(c); // 804C4B84
L_804C4B88:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 804C4B88
  c->r[27]=c->r[14]|c->r[14]; // 804C4B8C
  c->r[25]=c->r[14]|c->r[14]; // 804C4B90
  c->r[19]=0u+0x00000000u; // 804C4B94
  c->r[22]=c->r[0]+c->r[31]; // 804C4B98
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C4B9C
  c->r[28]=c->r[22]|c->r[22]; // 804C4BA0
  c->r[26]=0u+0x00000000u; // 804C4BA4
  c->r[24]=c->r[29]+c->r[0]; // 804C4BA8
  goto L_804C4D34; // 804C4BAC
L_804C4BB0:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 804C4BB0
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 804C4BB4
  if (crb(c,2)) { goto L_804C4CA0; } // 804C4BB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C4BBC
  c->r[5]=R32(c->r[17]+0x00000000u); // 804C4BC0
  c->r[12]=R32(c->r[30]+c->r[0]); // 804C4BC4
  c->r[3]=c->r[27]|c->r[27]; // 804C4BC8
  W32(c->r[1]+0x00000018u,c->r[5]); // 804C4BCC
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 804C4BD0
  c->r[4]=c->r[15]|c->r[15]; // 804C4BD4
  c->r[6]=c->r[16]|c->r[16]; // 804C4BD8
  c->r[7]=c->r[1]+0x00000018u; // 804C4BDC
  c->r[8]=c->r[21]+c->r[19]; // 804C4BE0
  c->ctr=c->r[12]; // 804C4BE4
  if (true) { c->lr=0x804C4BECu; dispatch(c,c->ctr); } // 804C4BE8
  c->r[4]=R32(c->r[17]+0x00000000u); // 804C4BEC
  c->r[3]=c->r[17]|c->r[17]; // 804C4BF0
  c->r[4]=c->r[4]+0x0000004Cu; // 804C4BF4
  c->r[0]=R32(c->r[4]+0x00000024u); // 804C4BF8
  c->r[0]=c->r[4]+c->r[0]; // 804C4BFC
  c->r[0]=c->r[0]+c->r[31]; // 804C4C00
  c->r[4]=c->r[0]+c->r[26]; // 804C4C04
  c->r[4]=R32(c->r[4]+0x00000004u); // 804C4C08
  c->lr=0x804C4C10u; f_804AC4AC(c); // 804C4C0C
  c->r[0]=0u-c->r[3]; // 804C4C10
  c->r[0]=c->r[0]|c->r[3]; // 804C4C14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804C4C18
  if (crb(c,2)) { goto L_804C4C44; } // 804C4C1C
  c->r[0]=R32(c->r[3]+0x00000060u); // 804C4C20
  cmps(c,0,(int32_t)c->r[0],0); // 804C4C24
  if (crb(c,2)) { goto L_804C4C34; } // 804C4C28
  c->r[0]=c->r[3]+c->r[0]; // 804C4C2C
  goto L_804C4C38; // 804C4C30
L_804C4C34:;
  c->r[0]=0u+0x00000000u; // 804C4C34
L_804C4C38:;
  c->r[3]=0u-c->r[0]; // 804C4C38
  c->r[0]=c->r[3]|c->r[0]; // 804C4C3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C4C40
L_804C4C44:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C4C44
  if (crb(c,2)) { goto L_804C4D1C; } // 804C4C48
  c->r[0]=c->r[21]+c->r[19]; // 804C4C4C
  c->r[3]=c->r[1]+0x00000020u; // 804C4C50
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C4C54
  c->r[4]=c->r[15]+c->r[23]; // 804C4C58
  c->lr=0x804C4C60u; f_804B4CA4(c); // 804C4C5C
  cmpu(c,0,c->r[3],0x00000001u); // 804C4C60
  if (!crb(c,2)) { goto L_804C4C7C; } // 804C4C64
  c->r[3]=c->r[25]|c->r[25]; // 804C4C68
  c->r[4]=c->r[1]+0x00000020u; // 804C4C6C
  c->r[5]=c->r[29]+c->r[23]; // 804C4C70
  c->lr=0x804C4C78u; f_80382F60(c); // 804C4C74
  goto L_804C4D1C; // 804C4C78
L_804C4C7C:;
  c->r[3]=c->r[29]+c->r[23]; // 804C4C7C
  c->lr=0x804C4C84u; f_80382F00(c); // 804C4C80
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C4C84
  {uint32_t ea=c->r[16]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C4C88
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C4C8C
  {uint32_t ea=c->r[16]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C4C90
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C4C94
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C4C98
  goto L_804C4D1C; // 804C4C9C
L_804C4CA0:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 804C4CA0
  c->r[3]=c->r[3]+0x0000004Cu; // 804C4CA4
  c->r[0]=R32(c->r[3]+0x00000024u); // 804C4CA8
  c->r[0]=c->r[3]+c->r[0]; // 804C4CAC
  c->r[0]=c->r[0]+c->r[31]; // 804C4CB0
  c->r[3]=c->r[0]+c->r[26]; // 804C4CB4
  c->r[4]=R32(c->r[3]+0x00000004u); // 804C4CB8
  cmps(c,0,(int32_t)c->r[4],0); // 804C4CBC
  if (crb(c,0)) { goto L_804C4D1C; } // 804C4CC0
  c->r[3]=c->r[17]|c->r[17]; // 804C4CC4
  c->lr=0x804C4CCCu; f_804AC4AC(c); // 804C4CC8
  cmps(c,0,(int32_t)c->r[3],0); // 804C4CCC
  if (crb(c,2)) { goto L_804C4D1C; } // 804C4CD0
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C4CD4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C4CD8
  if (crb(c,2)) { goto L_804C4D1C; } // 804C4CDC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804C4CE0
  c->r[3]=c->r[17]|c->r[17]; // 804C4CE4
  c->lr=0x804C4CECu; f_804AC4AC(c); // 804C4CE8
  cmps(c,0,(int32_t)c->r[3],0); // 804C4CEC
  if (crb(c,2)) { goto L_804C4CFC; } // 804C4CF0
  c->r[3]=R32(c->r[3]+0x00000010u); // 804C4CF4
  goto L_804C4D00; // 804C4CF8
L_804C4CFC:;
  c->r[3]=0u+0x00000000u; // 804C4CFC
L_804C4D00:;
  c->r[0]=c->r[21]+c->r[19]; // 804C4D00
  c->r[5]=c->r[27]|c->r[27]; // 804C4D04
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 804C4D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C4D0C
  c->r[3]=c->r[29]+c->r[3]; // 804C4D10
  c->r[4]=c->r[15]+c->r[0]; // 804C4D14
  c->lr=0x804C4D1Cu; f_80382F60(c); // 804C4D18
L_804C4D1C:;
  c->r[28]=c->r[28]+0x00000004u; // 804C4D1C
  c->r[27]=c->r[27]+0x00000030u; // 804C4D20
  c->r[26]=c->r[26]+0x00000004u; // 804C4D24
  c->r[25]=c->r[25]+0x00000030u; // 804C4D28
  c->r[24]=c->r[24]+0x00000030u; // 804C4D2C
  c->r[19]=c->r[19]+0x00000001u; // 804C4D30
L_804C4D34:;
  cmpu(c,0,c->r[19],c->r[20]); // 804C4D34
  if (crb(c,0)) { IRQCHK(c); goto L_804C4BB0; } // 804C4D38
  c->r[3]=R32(c->r[1]+0x00000008u); // 804C4D3C
  c->r[4]=c->r[14]|c->r[14]; // 804C4D40
  c->r[5]=R32(c->r[1]+0x00000054u); // 804C4D44
  c->lr=0x804C4D4Cu; f_805093B4(c); // 804C4D48
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C4D4C
  cmps(c,0,(int32_t)c->r[0],0); // 804C4D50
  if (crb(c,2)) { goto L_804C4DFC; } // 804C4D54
  c->r[24]=R32(c->r[1]+0x0000006Cu); // 804C4D58
  c->r[19]=c->r[14]|c->r[14]; // 804C4D5C
  c->r[23]=R32(c->r[1]+0x00000070u); // 804C4D60
  c->r[26]=0u+0x00000000u; // 804C4D64
  c->r[25]=c->r[24]|c->r[24]; // 804C4D68
  goto L_804C4DF4; // 804C4D6C
L_804C4D70:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 804C4D70
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 804C4D74
  if (crb(c,2)) { goto L_804C4DAC; } // 804C4D78
  cmps(c,0,(int32_t)c->r[18],0); // 804C4D7C
  if (crb(c,2)) { goto L_804C4D9C; } // 804C4D80
  c->r[3]=c->r[19]|c->r[19]; // 804C4D84
  c->r[4]=c->r[24]|c->r[24]; // 804C4D88
  c->lr=0x804C4D90u; f_80382F2C(c); // 804C4D8C
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[31]);} // 804C4D90
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[31]);} // 804C4D94
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[31]);} // 804C4D98
L_804C4D9C:;
  c->r[3]=c->r[23]|c->r[23]; // 804C4D9C
  c->r[4]=c->r[19]|c->r[19]; // 804C4DA0
  c->lr=0x804C4DA8u; f_804E1640(c); // 804C4DA4
  goto L_804C4DDC; // 804C4DA8
L_804C4DAC:;
  cmps(c,0,(int32_t)c->r[18],0); // 804C4DAC
  if (crb(c,2)) { goto L_804C4DD0; } // 804C4DB0
  c->r[3]=c->r[24]|c->r[24]; // 804C4DB4
  c->r[4]=c->r[19]|c->r[19]; // 804C4DB8
  c->lr=0x804C4DC0u; f_804B4B9C(c); // 804C4DBC
  c->r[3]=c->r[23]|c->r[23]; // 804C4DC0
  c->r[4]=c->r[25]|c->r[25]; // 804C4DC4
  c->lr=0x804C4DCCu; f_804E1640(c); // 804C4DC8
  goto L_804C4DDC; // 804C4DCC
L_804C4DD0:;
  c->r[3]=c->r[23]|c->r[23]; // 804C4DD0
  c->r[4]=c->r[19]|c->r[19]; // 804C4DD4
  c->lr=0x804C4DDCu; f_804B4AB8(c); // 804C4DD8
L_804C4DDC:;
  c->r[19]=c->r[19]+0x00000030u; // 804C4DDC
  c->r[23]=c->r[23]+0x00000024u; // 804C4DE0
  c->r[22]=c->r[22]+0x00000004u; // 804C4DE4
  c->r[24]=c->r[24]+0x00000030u; // 804C4DE8
  c->r[25]=c->r[25]+0x00000030u; // 804C4DEC
  c->r[26]=c->r[26]+0x00000001u; // 804C4DF0
L_804C4DF4:;
  cmpu(c,0,c->r[26],c->r[20]); // 804C4DF4
  if (crb(c,0)) { IRQCHK(c); goto L_804C4D70; } // 804C4DF8
L_804C4DFC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804C4DFC
  cmps(c,0,(int32_t)c->r[0],0); // 804C4E00
  if (crb(c,2)) { goto L_804C4E30; } // 804C4E04
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 804C4E08
  c->r[4]=R32(c->r[1]+0x00000070u); // 804C4E0C
  c->r[5]=R32(c->r[1]+0x00000050u); // 804C4E10
  c->lr=0x804C4E18u; f_805093B4(c); // 804C4E14
  cmps(c,0,(int32_t)c->r[18],0); // 804C4E18
  if (crb(c,2)) { goto L_804C4E30; } // 804C4E1C
  c->r[3]=R32(c->r[1]+0x00000078u); // 804C4E20
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 804C4E24
  c->r[5]=R32(c->r[1]+0x00000054u); // 804C4E28
  c->lr=0x804C4E30u; f_805093B4(c); // 804C4E2C
L_804C4E30:;
  c->r[3]=R32(c->r[1]+0x00000074u); // 804C4E30
  c->r[4]=c->r[14]|c->r[14]; // 804C4E34
  c->r[0]=R32(c->r[1]+0x00000068u); // 804C4E38
  c->r[21]=c->r[21]+0x00000028u; // 804C4E3C
  c->r[14]=R32(c->r[1]+0x00000064u); // 804C4E40
  c->r[31]=c->r[31]+0x000000A0u; // 804C4E44
  W32(c->r[1]+0x00000068u,c->r[3]); // 804C4E48
  c->r[3]=R32(c->r[1]+0x00000080u); // 804C4E4C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C4E50
  c->r[3]=c->r[3]+0x00000780u; // 804C4E54
  c->r[5]=R32(c->r[1]+0x00000070u); // 804C4E58
  W32(c->r[1]+0x00000080u,c->r[3]); // 804C4E5C
  c->r[3]=R32(c->r[1]+0x00000008u); // 804C4E60
  c->r[0]=R32(c->r[1]+0x00000060u); // 804C4E64
  c->r[3]=c->r[3]+0x00000780u; // 804C4E68
  c->r[6]=R32(c->r[1]+0x0000006Cu); // 804C4E6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C4E70
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 804C4E74
  W32(c->r[1]+0x00000070u,c->r[0]); // 804C4E78
  c->r[3]=c->r[3]+0x000005A0u; // 804C4E7C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 804C4E80
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 804C4E84
  c->r[3]=R32(c->r[1]+0x00000078u); // 804C4E88
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C4E8C
  c->r[3]=c->r[3]+0x00000780u; // 804C4E90
  W32(c->r[1]+0x00000078u,c->r[3]); // 804C4E94
  c->r[3]=R32(c->r[1]+0x00000084u); // 804C4E98
  W32(c->r[1]+0x00000064u,c->r[4]); // 804C4E9C
  c->r[3]=c->r[3]+0x00000780u; // 804C4EA0
  W32(c->r[1]+0x00000060u,c->r[5]); // 804C4EA4
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 804C4EA8
  W32(c->r[1]+0x00000084u,c->r[3]); // 804C4EAC
L_804C4EB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4EB0
  cmpu(c,0,c->r[21],c->r[0]); // 804C4EB4
  if (crb(c,0)) { IRQCHK(c); goto L_804C4AC0; } // 804C4EB8
L_804C4EBC:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 804C4EBC
  c->r[11]=c->r[1]+0x000000D0u; // 804C4EC0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 804C4EC4
  c->lr=0x804C4ECCu; f_803A9C1C(c); // 804C4EC8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804C4ECC
  c->lr=c->r[0]; // 804C4ED0
  c->r[1]=c->r[1]+0x000000E0u; // 804C4ED4
  return; // 804C4ED8
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4FlagQ44nw4r3g3d13TexSrtTypedef13TexMatrixMode
void f_804C4EDC(Ctx* __restrict c) {
  trace_call(0x804C4EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C4EDC
  c->r[0]=c->lr; // 804C4EE0
  cmps(c,0,(int32_t)c->r[7],0); // 804C4EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C4EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C4EEC
  c->r[31]=c->r[4]|c->r[4]; // 804C4EF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C4EF4
  c->r[30]=c->r[3]|c->r[3]; // 804C4EF8
  if (!crb(c,2)) { goto L_804C4F10; } // 804C4EFC
  c->lr=0x804C4F04u; f_804C9548(c); // 804C4F00
  c->r[0]=cntlz(c->r[3]); // 804C4F04
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C4F08
  goto L_804C4F34; // 804C4F0C
L_804C4F10:;
  cmps(c,0,(int32_t)c->r[7],1); // 804C4F10
  if (!crb(c,2)) { goto L_804C4F28; } // 804C4F14
  c->lr=0x804C4F1Cu; f_804CA0E8(c); // 804C4F18
  c->r[0]=cntlz(c->r[3]); // 804C4F1C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C4F20
  goto L_804C4F34; // 804C4F24
L_804C4F28:;
  c->lr=0x804C4F2Cu; f_804CAD4C(c); // 804C4F28
  c->r[0]=cntlz(c->r[3]); // 804C4F2C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C4F30
L_804C4F34:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C4F34
  if (crb(c,2)) { goto L_804C4F4C; } // 804C4F38
  cmps(c,0,(int32_t)c->r[31],0); // 804C4F3C
  if (crb(c,2)) { goto L_804C4F4C; } // 804C4F40
  c->r[3]=c->r[30]|c->r[30]; // 804C4F44
  c->lr=0x804C4F4Cu; f_80382F00(c); // 804C4F48
L_804C4F4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C4F50
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C4F54
  c->lr=c->r[0]; // 804C4F58
  c->r[1]=c->r[1]+0x00000010u; // 804C4F5C
  return; // 804C4F60
}

// fn_804C4F64
void f_804C4F64(Ctx* __restrict c) {
  trace_call(0x804C4F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C4F64
  c->r[0]=c->lr; // 804C4F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C4F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C4F70
  c->r[31]=c->r[4]|c->r[4]; // 804C4F74
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C4F78
  c->r[30]=c->r[3]|c->r[3]; // 804C4F7C
  c->lr=0x804C4F84u; f_804C87F4(c); // 804C4F80
  c->r[0]=cntlz(c->r[3]); // 804C4F84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 804C4F88
  if (crb(c,2)) { goto L_804C4FA0; } // 804C4F8C
  cmps(c,0,(int32_t)c->r[31],0); // 804C4F90
  if (crb(c,2)) { goto L_804C4FA0; } // 804C4F94
  c->r[3]=c->r[30]|c->r[30]; // 804C4F98
  c->lr=0x804C4FA0u; f_80382F00(c); // 804C4F9C
L_804C4FA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C4FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C4FA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C4FA8
  c->lr=c->r[0]; // 804C4FAC
  c->r[1]=c->r[1]+0x00000010u; // 804C4FB0
  return; // 804C4FB4
}

// fn_804C4FB8
void f_804C4FB8(Ctx* __restrict c) {
  trace_call(0x804C4FB8u);
  c->r[3]=0u+0x80810000u; // 804C4FB8
  c->r[3]=c->r[3]+0x00000200u; // 804C4FBC
  return; // 804C4FC0
}

// fn_804C4FC4
void f_804C4FC4(Ctx* __restrict c) {
  trace_call(0x804C4FC4u);
  c->r[3]=0u+0x80810000u; // 804C4FC4
  c->r[3]=c->r[3]+0x00000200u; // 804C4FC8
  c->r[3]=c->r[3]+0x00006000u; // 804C4FCC
  return; // 804C4FD0
}

// fn_804C4FD4
void f_804C4FD4(Ctx* __restrict c) {
  trace_call(0x804C4FD4u);
  c->r[3]=0u+0x80810000u; // 804C4FD4
  c->r[3]=c->r[3]+0x00000200u; // 804C4FD8
  return; // 804C4FDC
}

// fn_804C4FE0
void f_804C4FE0(Ctx* __restrict c) {
  trace_call(0x804C4FE0u);
  c->r[3]=0u+0x80810000u; // 804C4FE0
  c->r[3]=c->r[3]+0x00000200u; // 804C4FE4
  return; // 804C4FE8
}

// fn_804C4FEC
void f_804C4FEC(Ctx* __restrict c) {
  trace_call(0x804C4FECu);
  c->r[3]=0u+0x80810000u; // 804C4FEC
  c->r[3]=c->r[3]+0x00000200u; // 804C4FF0
  return; // 804C4FF4
}

// fn_804C4FF8
void f_804C4FF8(Ctx* __restrict c) {
  trace_call(0x804C4FF8u);
  c->r[3]=0u+0x80810000u; // 804C4FF8
  c->r[3]=c->r[3]+0x00000200u; // 804C4FFC
  return; // 804C5000
}

// fn_804C5004
void f_804C5004(Ctx* __restrict c) {
  trace_call(0x804C5004u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C5004
  c->r[0]=c->lr; // 804C5008
  W32(c->r[1]+0x000000D4u,c->r[0]); // 804C500C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 804C5010
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 804C5014
  c->r[11]=c->r[1]+0x000000C0u; // 804C5018
  c->lr=0x804C5020u; f_803A9BD0(c); // 804C501C
  cmps(c,0,(int32_t)c->r[5],0); // 804C5020
  c->r[18]=c->r[3]|c->r[3]; // 804C5024
  c->r[19]=c->r[4]|c->r[4]; // 804C5028
  c->r[20]=c->r[5]|c->r[5]; // 804C502C
  c->r[17]=c->r[6]|c->r[6]; // 804C5030
  c->r[21]=c->r[7]|c->r[7]; // 804C5034
  c->r[14]=c->r[8]|c->r[8]; // 804C5038
  c->r[22]=c->r[9]|c->r[9]; // 804C503C
  c->r[15]=c->r[10]|c->r[10]; // 804C5040
  c->r[31]=0u+0x00000000u; // 804C5044
  if (!crb(c,2)) { goto L_804C5068; } // 804C5048
  c->r[4]=0u+0x80720000u; // 804C504C
  c->r[3]=c->r[21]|c->r[21]; // 804C5050
  c->r[4]=c->r[4]+0xFFFFA3B0u; // 804C5054
  c->lr=0x804C505Cu; f_804AC380(c); // 804C5058
  cmps(c,0,(int32_t)c->r[3],0); // 804C505C
  c->r[20]=c->r[3]|c->r[3]; // 804C5060
  if (crb(c,2)) { goto L_804C55A8; } // 804C5064
L_804C5068:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C5068
  c->r[0]=rotl(c->r[15],5)&0x00000001u; // 804C506C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C5070
  c->r[3]=c->r[3]+0x0000004Cu; // 804C5074
  c->r[3]=R32(c->r[3]+0x00000008u); // 804C5078
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804C507C
  c->r[0]=cntlz(c->r[0]); // 804C5080
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C5084
  W8(c->r[1]+0x00000070u,c->r[0]); // 804C5088
  c->lr=0x804C5090u; f_804C4FB8(c); // 804C508C
  {uint32_t ea=c->r[2]+0x00001668u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5090
  c->r[16]=c->r[3]|c->r[3]; // 804C5094
  c->r[4]=c->r[18]|c->r[18]; // 804C5098
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804C509C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804C50A0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804C50A4
  c->r[3]=c->r[17]|c->r[17]; // 804C50A8
  c->lr=0x804C50B0u; f_80382F2C(c); // 804C50AC
  c->lr=0x804C50B4u; f_804C4FC4(c); // 804C50B0
  W32(c->r[19]+0x00000000u,c->r[15]); // 804C50B4
  c->r[30]=c->r[3]|c->r[3]; // 804C50B8
  c->r[29]=0u+0x00000000u; // 804C50BC
  c->r[17]=0u+0x00000000u; // 804C50C0
  goto L_804C5500; // 804C50C4
L_804C50C8:;
  cmpu(c,0,c->r[0],0x00000002u); // 804C50C8
  if (!crb(c,2)) { goto L_804C5488; } // 804C50CC
  c->r[0]=R8(c->r[20]+0x00000001u); // 804C50D0
  c->r[3]=c->r[21]|c->r[21]; // 804C50D4
  c->r[4]=R8(c->r[20]+0x00000003u); // 804C50D8
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 804C50DC
  c->r[6]=R8(c->r[20]+0x00000002u); // 804C50E0
  c->r[0]=R8(c->r[20]+0x00000004u); // 804C50E4
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 804C50E8
  c->r[28]=c->r[7]+c->r[6]; // 804C50EC
  c->r[4]=c->r[28]|c->r[28]; // 804C50F0
  c->r[24]=c->r[5]+c->r[0]; // 804C50F4
  c->lr=0x804C50FCu; f_804AC4AC(c); // 804C50F8
  cmps(c,0,(int32_t)c->r[3],0); // 804C50FC
  W32(c->r[1]+0x00000014u,c->r[3]); // 804C5100
  if (crb(c,2)) { goto L_804C5110; } // 804C5104
  c->r[15]=R32(c->r[3]+0x00000010u); // 804C5108
  goto L_804C5114; // 804C510C
L_804C5110:;
  c->r[15]=0u+0x00000000u; // 804C5110
L_804C5114:;
  W32(c->r[30]+c->r[17],c->r[15]); // 804C5114
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 804C5118
  c->r[3]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 804C511C
  cmps(c,0,(int32_t)c->r[14],0); // 804C5120
  c->r[23]=R32(c->r[19]+c->r[0]); // 804C5124
  c->r[29]=c->r[29]+0x00000001u; // 804C5128
  c->r[17]=c->r[17]+0x00000004u; // 804C512C
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 804C5130
  c->r[27]=c->r[18]+c->r[3]; // 804C5134
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)48); // 804C5138
  c->r[26]=c->r[16]+c->r[0]; // 804C513C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 804C5140
  c->r[25]=c->r[18]+c->r[3]; // 804C5144
  c->r[24]=c->r[16]+c->r[0]; // 804C5148
  if (crb(c,2)) { goto L_804C5184; } // 804C514C
  c->r[5]=R32(c->r[1]+0x00000014u); // 804C5150
  c->r[3]=c->r[14]|c->r[14]; // 804C5154
  c->r[4]=c->r[1]+0x00000024u; // 804C5158
  cmps(c,0,(int32_t)c->r[5],0); // 804C515C
  if (crb(c,2)) { goto L_804C516C; } // 804C5160
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 804C5164
  goto L_804C5170; // 804C5168
L_804C516C:;
  c->r[5]=0u+0x00000000u; // 804C516C
L_804C5170:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804C5170
  c->r[12]=R32(c->r[12]+0x00000038u); // 804C5174
  c->ctr=c->r[12]; // 804C5178
  if (true) { c->lr=0x804C5180u; dispatch(c,c->ctr); } // 804C517C
  c->r[31]=c->r[3]|c->r[3]; // 804C5180
L_804C5184:;
  cmps(c,0,(int32_t)c->r[14],0); // 804C5184
  if (crb(c,2)) { goto L_804C5198; } // 804C5188
  c->r[0]=R32(c->r[31]+0x00000000u); // 804C518C
  cmps(c,0,(int32_t)c->r[0],0); // 804C5190
  if (!crb(c,2)) { goto L_804C51A8; } // 804C5194
L_804C5198:;
  c->r[3]=c->r[1]+0x00000014u; // 804C5198
  c->r[4]=c->r[1]+0x00000024u; // 804C519C
  c->lr=0x804C51A4u; f_804B0934(c); // 804C51A0
  c->r[31]=c->r[1]+0x00000024u; // 804C51A4
L_804C51A8:;
  cmps(c,0,(int32_t)c->r[28],0); // 804C51A8
  if (crb(c,2)) { goto L_804C527C; } // 804C51AC
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C51B0
  cmps(c,0,(int32_t)c->r[0],0); // 804C51B4
  if (crb(c,2)) { goto L_804C527C; } // 804C51B8
  c->r[0]=c->r[1]+0x00000024u; // 804C51BC
  cmpu(c,0,c->r[31],c->r[0]); // 804C51C0
  if (crb(c,2)) { goto L_804C5264; } // 804C51C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 804C51C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C51CC
  c->r[3]=R32(c->r[31]+0x00000004u); // 804C51D0
  c->r[0]=R32(c->r[31]+0x00000008u); // 804C51D4
  W32(c->r[1]+0x00000028u,c->r[3]); // 804C51D8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804C51DC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804C51E0
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C51E4
  c->r[3]=R32(c->r[31]+0x00000010u); // 804C51E8
  c->r[0]=R32(c->r[31]+0x00000014u); // 804C51EC
  W32(c->r[1]+0x00000034u,c->r[3]); // 804C51F0
  W32(c->r[1]+0x00000038u,c->r[0]); // 804C51F4
  c->r[0]=R32(c->r[31]+0x00000018u); // 804C51F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C51FC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804C5200
  c->r[0]=R32(c->r[31]+0x00000020u); // 804C5204
  W32(c->r[1]+0x00000040u,c->r[3]); // 804C5208
  W32(c->r[1]+0x00000044u,c->r[0]); // 804C520C
  c->r[3]=R32(c->r[31]+0x00000024u); // 804C5210
  c->r[0]=R32(c->r[31]+0x00000028u); // 804C5214
  W32(c->r[1]+0x00000048u,c->r[3]); // 804C5218
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804C521C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 804C5220
  c->r[0]=R32(c->r[31]+0x00000030u); // 804C5224
  W32(c->r[1]+0x00000050u,c->r[3]); // 804C5228
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C522C
  c->r[3]=R32(c->r[31]+0x00000034u); // 804C5230
  c->r[0]=R32(c->r[31]+0x00000038u); // 804C5234
  W32(c->r[1]+0x00000058u,c->r[3]); // 804C5238
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C523C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 804C5240
  c->r[0]=R32(c->r[31]+0x00000040u); // 804C5244
  W32(c->r[1]+0x00000060u,c->r[3]); // 804C5248
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C524C
  c->r[3]=R32(c->r[31]+0x00000044u); // 804C5250
  c->r[0]=R32(c->r[31]+0x00000048u); // 804C5254
  c->r[31]=c->r[1]+0x00000024u; // 804C5258
  W32(c->r[1]+0x00000068u,c->r[3]); // 804C525C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C5260
L_804C5264:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C5264
  c->r[3]=c->r[1]+0x00000014u; // 804C5268
  c->r[4]=c->r[1]+0x00000024u; // 804C526C
  c->r[0]=c->r[0]|0x00000200u; // 804C5270
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C5274
  c->lr=0x804C527Cu; f_804B0798(c); // 804C5278
L_804C527C:;
  cmps(c,0,(int32_t)c->r[22],0); // 804C527C
  if (crb(c,2)) { goto L_804C536C; } // 804C5280
  c->r[0]=c->r[1]+0x00000024u; // 804C5284
  cmpu(c,0,c->r[31],c->r[0]); // 804C5288
  if (crb(c,2)) { goto L_804C532C; } // 804C528C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804C5290
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C5294
  c->r[3]=R32(c->r[31]+0x00000004u); // 804C5298
  c->r[0]=R32(c->r[31]+0x00000008u); // 804C529C
  W32(c->r[1]+0x00000028u,c->r[3]); // 804C52A0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804C52A4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804C52A8
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C52AC
  c->r[3]=R32(c->r[31]+0x00000010u); // 804C52B0
  c->r[0]=R32(c->r[31]+0x00000014u); // 804C52B4
  W32(c->r[1]+0x00000034u,c->r[3]); // 804C52B8
  W32(c->r[1]+0x00000038u,c->r[0]); // 804C52BC
  c->r[0]=R32(c->r[31]+0x00000018u); // 804C52C0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C52C4
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804C52C8
  c->r[0]=R32(c->r[31]+0x00000020u); // 804C52CC
  W32(c->r[1]+0x00000040u,c->r[3]); // 804C52D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804C52D4
  c->r[3]=R32(c->r[31]+0x00000024u); // 804C52D8
  c->r[0]=R32(c->r[31]+0x00000028u); // 804C52DC
  W32(c->r[1]+0x00000048u,c->r[3]); // 804C52E0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804C52E4
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 804C52E8
  c->r[0]=R32(c->r[31]+0x00000030u); // 804C52EC
  W32(c->r[1]+0x00000050u,c->r[3]); // 804C52F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C52F4
  c->r[3]=R32(c->r[31]+0x00000034u); // 804C52F8
  c->r[0]=R32(c->r[31]+0x00000038u); // 804C52FC
  W32(c->r[1]+0x00000058u,c->r[3]); // 804C5300
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804C5304
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 804C5308
  c->r[0]=R32(c->r[31]+0x00000040u); // 804C530C
  W32(c->r[1]+0x00000060u,c->r[3]); // 804C5310
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C5314
  c->r[3]=R32(c->r[31]+0x00000044u); // 804C5318
  c->r[0]=R32(c->r[31]+0x00000048u); // 804C531C
  c->r[31]=c->r[1]+0x00000024u; // 804C5320
  W32(c->r[1]+0x00000068u,c->r[3]); // 804C5324
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 804C5328
L_804C532C:;
  c->r[0]=R16(c->r[22]+0x00000006u); // 804C532C
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C5330
  cmpu(c,0,c->r[28],c->r[0]); // 804C5334
  if (!crb(c,2)) { goto L_804C536C; } // 804C5338
  c->r[0]=R8(c->r[22]+0x00000004u); // 804C533C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C5340
  if (crb(c,2)) { goto L_804C536C; } // 804C5344
  W32(c->r[1]+0x00000010u,c->r[3]); // 804C5348
  c->r[6]=c->r[22]|c->r[22]; // 804C534C
  c->r[4]=c->r[1]+0x00000024u; // 804C5350
  c->r[5]=c->r[1]+0x00000010u; // 804C5354
  c->r[3]=R32(c->r[22]+0x00000000u); // 804C5358
  c->r[12]=R32(c->r[3]+0x00000000u); // 804C535C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804C5360
  c->ctr=c->r[12]; // 804C5364
  if (true) { c->lr=0x804C536Cu; dispatch(c,c->ctr); } // 804C5368
L_804C536C:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 804C536C
  cmps(c,0,(int32_t)c->r[0],0); // 804C5370
  if (crb(c,2)) { goto L_804C53A4; } // 804C5374
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 804C5378
  c->r[3]=c->r[27]|c->r[27]; // 804C537C
  c->r[15]=c->r[19]+c->r[0]; // 804C5380
  c->r[4]=c->r[26]|c->r[26]; // 804C5384
  c->r[5]=c->r[25]|c->r[25]; // 804C5388
  c->r[6]=c->r[24]|c->r[24]; // 804C538C
  c->r[7]=c->r[23]|c->r[23]; // 804C5390
  c->r[8]=c->r[31]|c->r[31]; // 804C5394
  c->lr=0x804C539Cu; f_804CA184(c); // 804C5398
  W32(c->r[15]+0x00000000u,c->r[3]); // 804C539C
  goto L_804C5404; // 804C53A0
L_804C53A4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804C53A4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804C53A8
  if (crb(c,2)) { goto L_804C53DC; } // 804C53AC
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 804C53B0
  c->r[3]=c->r[27]|c->r[27]; // 804C53B4
  c->r[15]=c->r[19]+c->r[0]; // 804C53B8
  c->r[4]=c->r[26]|c->r[26]; // 804C53BC
  c->r[5]=c->r[25]|c->r[25]; // 804C53C0
  c->r[6]=c->r[24]|c->r[24]; // 804C53C4
  c->r[7]=c->r[23]|c->r[23]; // 804C53C8
  c->r[8]=c->r[31]|c->r[31]; // 804C53CC
  c->lr=0x804C53D4u; f_804C95E4(c); // 804C53D0
  W32(c->r[15]+0x00000000u,c->r[3]); // 804C53D4
  goto L_804C5404; // 804C53D8
L_804C53DC:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 804C53DC
  c->r[3]=c->r[27]|c->r[27]; // 804C53E0
  c->r[15]=c->r[19]+c->r[0]; // 804C53E4
  c->r[4]=c->r[26]|c->r[26]; // 804C53E8
  c->r[5]=c->r[25]|c->r[25]; // 804C53EC
  c->r[6]=c->r[24]|c->r[24]; // 804C53F0
  c->r[7]=c->r[23]|c->r[23]; // 804C53F4
  c->r[8]=c->r[31]|c->r[31]; // 804C53F8
  c->lr=0x804C5400u; f_804C8950(c); // 804C53FC
  W32(c->r[15]+0x00000000u,c->r[3]); // 804C5400
L_804C5404:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 804C5404
  cmps(c,0,(int32_t)c->r[3],0); // 804C5408
  if (crb(c,2)) { goto L_804C5418; } // 804C540C
  c->r[3]=R32(c->r[3]+0x00000018u); // 804C5410
  goto L_804C541C; // 804C5414
L_804C5418:;
  c->r[3]=0u+0x00000000u; // 804C5418
L_804C541C:;
  c->r[0]=R32(c->r[15]+0x00000000u); // 804C541C
  cmps(c,0,(int32_t)c->r[22],0); // 804C5420
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 804C5424
  c->r[0]=c->r[0]|c->r[3]; // 804C5428
  W32(c->r[15]+0x00000000u,c->r[0]); // 804C542C
  if (crb(c,2)) { goto L_804C5480; } // 804C5430
  c->r[0]=R16(c->r[22]+0x00000006u); // 804C5434
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C5438
  cmpu(c,0,c->r[28],c->r[0]); // 804C543C
  if (!crb(c,2)) { goto L_804C5480; } // 804C5440
  c->r[0]=R8(c->r[22]+0x00000004u); // 804C5444
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C5448
  if (crb(c,2)) { goto L_804C5480; } // 804C544C
  W32(c->r[1]+0x00000018u,c->r[27]); // 804C5450
  c->r[6]=c->r[22]|c->r[22]; // 804C5454
  c->r[4]=c->r[1]+0x00000018u; // 804C5458
  c->r[5]=c->r[1]+0x0000000Cu; // 804C545C
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 804C5460
  W32(c->r[1]+0x00000020u,c->r[15]); // 804C5464
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804C5468
  c->r[3]=R32(c->r[22]+0x00000000u); // 804C546C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804C5470
  c->r[12]=R32(c->r[12]+0x00000010u); // 804C5474
  c->ctr=c->r[12]; // 804C5478
  if (true) { c->lr=0x804C5480u; dispatch(c,c->ctr); } // 804C547C
L_804C5480:;
  c->r[20]=c->r[20]+0x00000005u; // 804C5480
  goto L_804C5500; // 804C5484
L_804C5488:;
  c->r[0]=R8(c->r[20]+0x00000001u); // 804C5488
  c->r[29]=c->r[29]+0x00000001u; // 804C548C
  c->r[3]=R8(c->r[20]+0x00000003u); // 804C5490
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 804C5494
  c->r[4]=R8(c->r[20]+0x00000002u); // 804C5498
  c->r[0]=R8(c->r[20]+0x00000004u); // 804C549C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 804C54A0
  c->r[15]=c->r[5]+c->r[4]; // 804C54A4
  c->r[23]=c->r[3]+c->r[0]; // 804C54A8
  W32(c->r[30]+c->r[17],c->r[15]); // 804C54AC
  c->r[4]=rotl(c->r[23],2)&0xFFFFFFFCu; // 804C54B0
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 804C54B4
  c->r[4]=R32(c->r[19]+c->r[4]); // 804C54B8
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)48); // 804C54BC
  c->r[17]=c->r[17]+0x00000004u; // 804C54C0
  W32(c->r[19]+c->r[0],c->r[4]); // 804C54C4
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 804C54C8
  c->r[3]=c->r[18]+c->r[3]; // 804C54CC
  c->r[4]=c->r[18]+c->r[0]; // 804C54D0
  c->lr=0x804C54D8u; f_80382F2C(c); // 804C54D4
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 804C54D8
  c->r[20]=c->r[20]+0x00000005u; // 804C54DC
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 804C54E0
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804C54E4
  c->r[4]=c->r[16]+c->r[0]; // 804C54E8
  {uint32_t ea=c->r[16]+c->r[0]; WF32(ea,c->f[0]);} // 804C54EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C54F0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804C54F4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C54F8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804C54FC
L_804C5500:;
  c->r[0]=R8(c->r[20]+0x00000000u); // 804C5500
  cmpu(c,0,c->r[0],0x00000001u); // 804C5504
  if (!crb(c,2)) { IRQCHK(c); goto L_804C50C8; } // 804C5508
  {uint32_t ea=c->r[2]+0x00001668u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C550C
  c->r[14]=0u+0x00000000u; // 804C5510
  goto L_804C5564; // 804C5514
L_804C5518:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 804C5518
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804C551C
  {uint32_t ea=c->r[16]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5520
  c->r[3]=c->r[16]+c->r[0]; // 804C5524
  fcmp(c,0,c->f[31],c->f[0]); // 804C5528
  if (!crb(c,2)) { goto L_804C5548; } // 804C552C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5530
  fcmp(c,0,c->f[31],c->f[0]); // 804C5534
  if (!crb(c,2)) { goto L_804C5548; } // 804C5538
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C553C
  fcmp(c,0,c->f[31],c->f[0]); // 804C5540
  if (crb(c,2)) { goto L_804C555C; } // 804C5544
L_804C5548:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804C5548
  c->r[5]=c->r[16]+c->r[0]; // 804C554C
  c->r[3]=c->r[18]+c->r[3]; // 804C5550
  c->r[4]=c->r[3]|c->r[3]; // 804C5554
  c->lr=0x804C555Cu; f_804E17A8(c); // 804C5558
L_804C555C:;
  c->r[30]=c->r[30]+0x00000004u; // 804C555C
  c->r[14]=c->r[14]+0x00000001u; // 804C5560
L_804C5564:;
  cmpu(c,0,c->r[14],c->r[29]); // 804C5564
  if (crb(c,0)) { IRQCHK(c); goto L_804C5518; } // 804C5568
  cmps(c,0,(int32_t)c->r[22],0); // 804C556C
  if (crb(c,2)) { goto L_804C55A8; } // 804C5570
  c->r[0]=R8(c->r[22]+0x00000004u); // 804C5574
  c->r[3]=R32(c->r[21]+0x00000000u); // 804C5578
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804C557C
  if (crb(c,2)) { goto L_804C55A8; } // 804C5580
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C5584
  c->r[4]=c->r[18]|c->r[18]; // 804C5588
  c->r[6]=c->r[22]|c->r[22]; // 804C558C
  c->r[5]=c->r[1]+0x00000008u; // 804C5590
  c->r[3]=R32(c->r[22]+0x00000000u); // 804C5594
  c->r[12]=R32(c->r[3]+0x00000000u); // 804C5598
  c->r[12]=R32(c->r[12]+0x00000014u); // 804C559C
  c->ctr=c->r[12]; // 804C55A0
  if (true) { c->lr=0x804C55A8u; dispatch(c,c->ctr); } // 804C55A4
L_804C55A8:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 804C55A8
  c->r[11]=c->r[1]+0x000000C0u; // 804C55AC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 804C55B0
  c->lr=0x804C55B8u; f_803A9C1C(c); // 804C55B4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804C55B8
  c->lr=c->r[0]; // 804C55BC
  c->r[1]=c->r[1]+0x000000D0u; // 804C55C0
  return; // 804C55C4
}

// fn_804C55C8
void f_804C55C8(Ctx* __restrict c) {
  trace_call(0x804C55C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C55C8
  c->r[0]=c->lr; // 804C55CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C55D0
  c->r[11]=c->r[1]+0x00000030u; // 804C55D4
  c->lr=0x804C55DCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C55D8
  cmps(c,0,(int32_t)c->r[6],0); // 804C55DC
  c->r[26]=c->r[3]|c->r[3]; // 804C55E0
  c->r[27]=c->r[4]|c->r[4]; // 804C55E4
  c->r[28]=c->r[5]|c->r[5]; // 804C55E8
  c->r[29]=c->r[6]|c->r[6]; // 804C55EC
  if (!crb(c,2)) { goto L_804C560C; } // 804C55F0
  c->r[3]=c->r[28]|c->r[28]; // 804C55F4
  c->r[4]=c->r[13]+0xFFFFA288u; // 804C55F8
  c->lr=0x804C5600u; f_804AC380(c); // 804C55FC
  cmps(c,0,(int32_t)c->r[3],0); // 804C5600
  c->r[29]=c->r[3]|c->r[3]; // 804C5604
  if (crb(c,2)) { goto L_804C5AA4; } // 804C5608
L_804C560C:;
  c->lr=0x804C5610u; f_804C4FE0(c); // 804C560C
  c->r[30]=c->r[3]|c->r[3]; // 804C5610
  c->r[31]=0u+0xF0000000u; // 804C5614
  goto L_804C5880; // 804C5618
L_804C561C:;
  cmpu(c,0,c->r[0],0x00000003u); // 804C561C
  if (!crb(c,2)) { goto L_804C5840; } // 804C5620
  {uint32_t ea=c->r[2]+0x0000166Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5624
  c->r[3]=R8(c->r[29]+0x00000001u); // 804C5628
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804C562C
  c->r[0]=R8(c->r[29]+0x00000002u); // 804C5630
  c->r[11]=R8(c->r[29]+0x00000003u); // 804C5634
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 804C5638
  c->r[10]=c->r[3]+c->r[0]; // 804C563C
  c->r[29]=c->r[29]+0x00000004u; // 804C5640
  c->r[9]=rotl(c->r[10],2)&0xFFFFFFFCu; // 804C5644
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804C5648
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804C564C
  cmpu(c,0,c->r[11],0x00000000u); // 804C5650
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804C5654
  W32(c->r[27]+c->r[9],c->r[31]); // 804C5658
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 804C565C
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 804C5660
  if (!crb(c,1)) { goto L_804C581C; } // 804C5664
  c->r[0]=rotl(c->r[11],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 804C5668
  c->ctr=c->r[0]; // 804C566C
  if (crb(c,2)) { goto L_804C578C; } // 804C5670
L_804C5674:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 804C5674
  c->r[0]=R8(c->r[29]+0x00000001u); // 804C5678
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 804C567C
  c->r[5]=R8(c->r[29]+0x00000003u); // 804C5680
  c->r[0]=c->r[3]+c->r[0]; // 804C5684
  c->r[3]=R32(c->r[27]+c->r[9]); // 804C5688
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C568C
  c->r[7]=R8(c->r[29]+0x00000005u); // 804C5690
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C5694
  c->r[8]=R8(c->r[29]+0x00000004u); // 804C5698
  c->r[0]=R32(c->r[27]+c->r[0]); // 804C569C
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 804C56A0
  c->r[12]=c->r[30]+c->r[4]; // 804C56A4
  c->r[6]=R8(c->r[29]+0x00000002u); // 804C56A8
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 804C56AC
  c->r[0]=c->r[3]&c->r[0]; // 804C56B0
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 804C56B4
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 804C56B8
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 804C56BC
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804C56C0
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 804C56C4
  c->r[4]=c->r[7]|c->r[5]; // 804C56C8
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 804C56CC
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 804C56D0
  W32(c->r[1]+0x00000008u,c->r[4]); // 804C56D4
  W32(c->r[27]+c->r[9],c->r[0]); // 804C56D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C56DC
  c->r[3]=R8(c->r[29]+0x00000006u); // 804C56E0
  c->r[5]=R8(c->r[29]+0x00000009u); // 804C56E4
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C56E8
  c->r[0]=R8(c->r[29]+0x00000007u); // 804C56EC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 804C56F0
  c->r[8]=R8(c->r[29]+0x0000000Au); // 804C56F4
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 804C56F8
  c->r[0]=c->r[3]+c->r[0]; // 804C56FC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C5700
  c->r[6]=R8(c->r[29]+0x00000008u); // 804C5704
  c->r[7]=R8(c->r[29]+0x0000000Bu); // 804C5708
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C570C
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 804C5710
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804C5714
  c->r[12]=c->r[30]+c->r[4]; // 804C5718
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804C571C
  c->r[4]=c->r[7]|c->r[5]; // 804C5720
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 804C5724
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 804C5728
  W32(c->r[1]+0x00000008u,c->r[4]); // 804C572C
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 804C5730
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 804C5734
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 804C5738
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C573C
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 804C5740
  c->r[29]=c->r[29]+0x0000000Cu; // 804C5744
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 804C5748
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C574C
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 804C5750
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804C5754
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 804C5758
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 804C575C
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 804C5760
  c->r[3]=R32(c->r[27]+c->r[9]); // 804C5764
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 804C5768
  c->r[0]=R32(c->r[27]+c->r[0]); // 804C576C
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 804C5770
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 804C5774
  c->r[0]=c->r[3]&c->r[0]; // 804C5778
  W32(c->r[27]+c->r[9],c->r[0]); // 804C577C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C5674; } // 804C5780
  c->r[11]=c->r[11]&0x00000001u; cr0(c,c->r[11]); // 804C5784
  if (crb(c,2)) { goto L_804C581C; } // 804C5788
L_804C578C:;
  c->ctr=c->r[11]; // 804C578C
L_804C5790:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 804C5790
  c->r[0]=R8(c->r[29]+0x00000001u); // 804C5794
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 804C5798
  c->r[5]=R8(c->r[29]+0x00000003u); // 804C579C
  c->r[0]=c->r[3]+c->r[0]; // 804C57A0
  c->r[8]=R8(c->r[29]+0x00000004u); // 804C57A4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C57A8
  c->r[6]=R8(c->r[29]+0x00000002u); // 804C57AC
  c->r[7]=R8(c->r[29]+0x00000005u); // 804C57B0
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 804C57B4
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 804C57B8
  c->r[3]=R32(c->r[27]+c->r[9]); // 804C57BC
  c->r[12]=c->r[30]+c->r[4]; // 804C57C0
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804C57C4
  c->r[4]=c->r[7]|c->r[5]; // 804C57C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C57CC
  W32(c->r[1]+0x00000008u,c->r[4]); // 804C57D0
  c->r[29]=c->r[29]+0x00000006u; // 804C57D4
  c->r[0]=R32(c->r[27]+c->r[0]); // 804C57D8
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 804C57DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C57E0
  c->r[0]=c->r[3]&c->r[0]; // 804C57E4
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 804C57E8
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 804C57EC
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804C57F0
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 804C57F4
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804C57F8
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 804C57FC
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 804C5800
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 804C5804
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 804C5808
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 804C580C
  W32(c->r[27]+c->r[9],c->r[0]); // 804C5810
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 804C5814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C5790; } // 804C5818
L_804C581C:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)48); // 804C581C
  c->r[3]=c->r[26]+c->r[0]; // 804C5820
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804C5824
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 804C5828
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804C582C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 804C5830
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 804C5834
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 804C5838
  goto L_804C5880; // 804C583C
L_804C5840:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 804C5840
  c->r[3]=c->r[28]|c->r[28]; // 804C5844
  c->r[4]=R8(c->r[29]+0x00000003u); // 804C5848
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 804C584C
  c->r[5]=R8(c->r[29]+0x00000002u); // 804C5850
  c->r[0]=R8(c->r[29]+0x00000004u); // 804C5854
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 804C5858
  c->r[25]=c->r[6]+c->r[5]; // 804C585C
  c->r[4]=c->r[4]+c->r[0]; // 804C5860
  c->lr=0x804C5868u; f_804AC4AC(c); // 804C5864
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)48); // 804C5868
  c->r[4]=c->r[3]+0x000000A0u; // 804C586C
  c->r[3]=c->r[26]+c->r[0]; // 804C5870
  c->r[5]=c->r[30]+c->r[0]; // 804C5874
  c->lr=0x804C587Cu; f_80382F60(c); // 804C5878
  c->r[29]=c->r[29]+0x00000005u; // 804C587C
L_804C5880:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 804C5880
  cmpu(c,0,c->r[0],0x00000001u); // 804C5884
  if (!crb(c,2)) { IRQCHK(c); goto L_804C561C; } // 804C5888
  c->r[3]=R32(c->r[28]+0x00000000u); // 804C588C
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 804C5890
  c->r[26]=c->r[3]+0x0000004Cu; // 804C5894
  cmps(c,0,(int32_t)c->r[0],1); // 804C5898
  if (crb(c,2)) { goto L_804C58C0; } // 804C589C
  if (!crb(c,0)) { goto L_804C58B0; } // 804C58A0
  cmps(c,0,(int32_t)c->r[0],0); // 804C58A4
  if (!crb(c,0)) { goto L_804C5AA4; } // 804C58A8
  goto L_804C5AA4; // 804C58AC
L_804C58B0:;
  cmps(c,0,(int32_t)c->r[0],3); // 804C58B0
  if (!crb(c,0)) { goto L_804C5AA4; } // 804C58B4
  goto L_804C59B4; // 804C58B8
  goto L_804C5AA4; // 804C58BC
L_804C58C0:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 804C58C0
  c->r[3]=c->r[28]|c->r[28]; // 804C58C4
  c->r[28]=R32(c->r[26]+c->r[0]); // 804C58C8
  c->lr=0x804C58D0u; f_804AC500(c); // 804C58CC
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 804C58D0
  c->r[0]=c->r[28]-c->r[3]; // 804C58D4
  c->r[6]=c->r[4]-c->r[0]; // 804C58D8
  cmpu(c,1,c->r[6],c->r[4]); // 804C58DC
  if (!crb(c,4)) { goto L_804C5AA4; } // 804C58E0
  c->r[0]=c->r[4]-c->r[6]; // 804C58E4
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 804C58E8
  cmpu(c,0,c->r[0],0x00000008u); // 804C58EC
  if (!crb(c,1)) { goto L_804C5984; } // 804C58F0
  if (crb(c,5)) { goto L_804C5984; } // 804C58F4
  c->r[0]=c->r[5]+0x00000007u; // 804C58F8
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804C58FC
  c->r[0]=c->r[0]-c->r[6]; // 804C5900
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804C5904
  c->r[3]=c->r[27]+c->r[3]; // 804C5908
  c->ctr=c->r[0]; // 804C590C
  cmpu(c,0,c->r[6],c->r[5]); // 804C5910
  if (!crb(c,0)) { goto L_804C5984; } // 804C5914
L_804C5918:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C5918
  c->r[6]=c->r[6]+0x00000008u; // 804C591C
  c->r[0]=c->r[0]|0x30000000u; // 804C5920
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C5924
  c->r[0]=R32(c->r[3]+0x00000004u); // 804C5928
  c->r[0]=c->r[0]|0x30000000u; // 804C592C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C5930
  c->r[0]=R32(c->r[3]+0x00000008u); // 804C5934
  c->r[0]=c->r[0]|0x30000000u; // 804C5938
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C593C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804C5940
  c->r[0]=c->r[0]|0x30000000u; // 804C5944
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804C5948
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C594C
  c->r[0]=c->r[0]|0x30000000u; // 804C5950
  W32(c->r[3]+0x00000010u,c->r[0]); // 804C5954
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C5958
  c->r[0]=c->r[0]|0x30000000u; // 804C595C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804C5960
  c->r[0]=R32(c->r[3]+0x00000018u); // 804C5964
  c->r[0]=c->r[0]|0x30000000u; // 804C5968
  W32(c->r[3]+0x00000018u,c->r[0]); // 804C596C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804C5970
  c->r[0]=c->r[0]|0x30000000u; // 804C5974
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804C5978
  c->r[3]=c->r[3]+0x00000020u; // 804C597C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C5918; } // 804C5980
L_804C5984:;
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804C5984
  c->r[0]=c->r[4]-c->r[6]; // 804C5988
  c->r[3]=c->r[27]+c->r[3]; // 804C598C
  c->ctr=c->r[0]; // 804C5990
  cmpu(c,0,c->r[6],c->r[4]); // 804C5994
  if (!crb(c,0)) { goto L_804C5AA4; } // 804C5998
L_804C599C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C599C
  c->r[0]=c->r[0]|0x30000000u; // 804C59A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C59A4
  c->r[3]=c->r[3]+0x00000004u; // 804C59A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C599C; } // 804C59AC
  goto L_804C5AA4; // 804C59B0
L_804C59B4:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 804C59B4
  c->r[3]=c->r[28]|c->r[28]; // 804C59B8
  c->r[28]=R32(c->r[26]+c->r[0]); // 804C59BC
  c->lr=0x804C59C4u; f_804AC500(c); // 804C59C0
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 804C59C4
  c->r[0]=c->r[28]-c->r[3]; // 804C59C8
  c->r[6]=c->r[4]-c->r[0]; // 804C59CC
  cmpu(c,1,c->r[6],c->r[4]); // 804C59D0
  if (!crb(c,4)) { goto L_804C5AA4; } // 804C59D4
  c->r[0]=c->r[4]-c->r[6]; // 804C59D8
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 804C59DC
  cmpu(c,0,c->r[0],0x00000008u); // 804C59E0
  if (!crb(c,1)) { goto L_804C5A78; } // 804C59E4
  if (crb(c,5)) { goto L_804C5A78; } // 804C59E8
  c->r[0]=c->r[5]+0x00000007u; // 804C59EC
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804C59F0
  c->r[0]=c->r[0]-c->r[6]; // 804C59F4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804C59F8
  c->r[3]=c->r[27]+c->r[3]; // 804C59FC
  c->ctr=c->r[0]; // 804C5A00
  cmpu(c,0,c->r[6],c->r[5]); // 804C5A04
  if (!crb(c,0)) { goto L_804C5A78; } // 804C5A08
L_804C5A0C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C5A0C
  c->r[6]=c->r[6]+0x00000008u; // 804C5A10
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A14
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C5A18
  c->r[0]=R32(c->r[3]+0x00000004u); // 804C5A1C
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A20
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C5A24
  c->r[0]=R32(c->r[3]+0x00000008u); // 804C5A28
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A2C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C5A30
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804C5A34
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A38
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804C5A3C
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C5A40
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A44
  W32(c->r[3]+0x00000010u,c->r[0]); // 804C5A48
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C5A4C
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A50
  W32(c->r[3]+0x00000014u,c->r[0]); // 804C5A54
  c->r[0]=R32(c->r[3]+0x00000018u); // 804C5A58
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A5C
  W32(c->r[3]+0x00000018u,c->r[0]); // 804C5A60
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804C5A64
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A68
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804C5A6C
  c->r[3]=c->r[3]+0x00000020u; // 804C5A70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C5A0C; } // 804C5A74
L_804C5A78:;
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804C5A78
  c->r[0]=c->r[4]-c->r[6]; // 804C5A7C
  c->r[3]=c->r[27]+c->r[3]; // 804C5A80
  c->ctr=c->r[0]; // 804C5A84
  cmpu(c,0,c->r[6],c->r[4]); // 804C5A88
  if (!crb(c,0)) { goto L_804C5AA4; } // 804C5A8C
L_804C5A90:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804C5A90
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804C5A94
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C5A98
  c->r[3]=c->r[3]+0x00000004u; // 804C5A9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804C5A90; } // 804C5AA0
L_804C5AA4:;
  c->r[11]=c->r[1]+0x00000030u; // 804C5AA4
  c->lr=0x804C5AACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C5AA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C5AAC
  c->lr=c->r[0]; // 804C5AB0
  c->r[1]=c->r[1]+0x00000030u; // 804C5AB4
  return; // 804C5AB8
}

// fn_804C5ABC
void f_804C5ABC(Ctx* __restrict c) {
  trace_call(0x804C5ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C5ABC
  c->r[0]=c->lr; // 804C5AC0
  W32(c->r[1]+0x00000134u,c->r[0]); // 804C5AC4
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 804C5AC8
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 804C5ACC
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 804C5AD0
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 804C5AD4
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 804C5AD8
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 804C5ADC
  c->r[11]=c->r[1]+0x00000100u; // 804C5AE0
  c->lr=0x804C5AE8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C5AE4
  c->r[6]=R32(c->r[3]+0x00000000u); // 804C5AE8
  c->r[23]=c->r[3]|c->r[3]; // 804C5AEC
  c->r[24]=c->r[4]|c->r[4]; // 804C5AF0
  c->r[25]=c->r[5]|c->r[5]; // 804C5AF4
  cmps(c,0,(int32_t)c->r[6],0); // 804C5AF8
  if (crb(c,2)) { goto L_804C5B0C; } // 804C5AFC
  c->r[0]=R32(c->r[5]+0x00000000u); // 804C5B00
  cmps(c,0,(int32_t)c->r[0],0); // 804C5B04
  if (!crb(c,2)) { goto L_804C5B14; } // 804C5B08
L_804C5B0C:;
  c->r[3]=0u+0x00000000u; // 804C5B0C
  goto L_804C5FA8; // 804C5B10
L_804C5B14:;
  c->r[0]=c->r[6]+0x0000001Cu; // 804C5B14
  c->r[3]=c->r[1]+0x00000010u; // 804C5B18
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C5B1C
  c->r[5]=c->r[1]+0x00000068u; // 804C5B20
  c->r[6]=c->r[1]+0x0000000Cu; // 804C5B24
  c->r[4]=0u+0x00000001u; // 804C5B28
  c->lr=0x804C5B30u; f_804AED5C(c); // 804C5B2C
  c->r[3]=c->r[1]+0x00000010u; // 804C5B30
  c->r[5]=c->r[1]+0x0000006Cu; // 804C5B34
  c->r[6]=c->r[1]+0x0000000Du; // 804C5B38
  c->r[4]=0u+0x00000002u; // 804C5B3C
  c->lr=0x804C5B44u; f_804AED5C(c); // 804C5B40
  c->r[3]=c->r[1]+0x00000010u; // 804C5B44
  c->r[5]=c->r[1]+0x00000070u; // 804C5B48
  c->r[6]=c->r[1]+0x0000000Eu; // 804C5B4C
  c->r[4]=0u+0x00000003u; // 804C5B50
  c->lr=0x804C5B58u; f_804AED5C(c); // 804C5B54
  c->r[0]=R32(c->r[1]+0x00000068u); // 804C5B58
  cmps(c,0,(int32_t)c->r[0],0); // 804C5B5C
  if (!crb(c,2)) { goto L_804C5B84; } // 804C5B60
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 804C5B64
  cmps(c,0,(int32_t)c->r[0],0); // 804C5B68
  if (!crb(c,2)) { goto L_804C5B84; } // 804C5B6C
  c->r[0]=R32(c->r[1]+0x00000070u); // 804C5B70
  cmps(c,0,(int32_t)c->r[0],0); // 804C5B74
  if (!crb(c,2)) { goto L_804C5B84; } // 804C5B78
  c->r[3]=0u+0x00000000u; // 804C5B7C
  goto L_804C5FA8; // 804C5B80
L_804C5B84:;
  c->r[29]=0u+0x00000000u; // 804C5B84
  c->lr=0x804C5B8Cu; f_804C117C(c); // 804C5B88
  c->r[12]=R32(c->r[3]+0x00000000u); // 804C5B8C
  c->r[27]=c->r[3]|c->r[3]; // 804C5B90
  c->r[12]=R32(c->r[12]+0x00000010u); // 804C5B94
  c->ctr=c->r[12]; // 804C5B98
  if (true) { c->lr=0x804C5BA0u; dispatch(c,c->ctr); } // 804C5B9C
  {uint32_t ea=c->r[2]+0x00001674u; c->f[29]=c->ps1[29]=RF32(ea);} // 804C5BA0
  c->r[31]=c->r[1]+0x00000068u; // 804C5BA4
  {uint32_t ea=c->r[2]+0x00001678u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C5BA8
  c->r[30]=c->r[1]+0x0000000Cu; // 804C5BAC
  {uint32_t ea=c->r[2]+0x00001670u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C5BB0
  c->r[28]=0u+0x00000000u; // 804C5BB4
L_804C5BB8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804C5BB8
  c->r[26]=c->r[28]+0x00000001u; // 804C5BBC
  cmps(c,0,(int32_t)c->r[0],0); // 804C5BC0
  if (crb(c,2)) { goto L_804C5F90; } // 804C5BC4
  cmps(c,0,(int32_t)c->r[29],0); // 804C5BC8
  if (!crb(c,2)) { goto L_804C5DDC; } // 804C5BCC
  c->r[3]=R32(c->r[25]+0x00000000u); // 804C5BD0
  c->r[29]=0u+0x00000001u; // 804C5BD4
  c->r[3]=R32(c->r[3]+0x00000008u); // 804C5BD8
  cmps(c,0,(int32_t)c->r[3],0); // 804C5BDC
  if (crb(c,0)) { goto L_804C5DD0; } // 804C5BE0
  c->r[4]=R32(c->r[24]+0x00000000u); // 804C5BE4
  cmps(c,0,(int32_t)c->r[4],0); // 804C5BE8
  if (crb(c,2)) { goto L_804C5BF8; } // 804C5BEC
  c->r[0]=R32(c->r[4]+0x00000010u); // 804C5BF0
  goto L_804C5BFC; // 804C5BF4
L_804C5BF8:;
  c->r[0]=0u+0x00000000u; // 804C5BF8
L_804C5BFC:;
  cmpu(c,0,c->r[3],c->r[0]); // 804C5BFC
  if (!crb(c,2)) { goto L_804C5C54; } // 804C5C00
  c->lr=0x804C5C08u; f_804C108C(c); // 804C5C04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C08
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 804C5C0C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C10
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 804C5C14
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C18
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 804C5C1C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C20
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 804C5C24
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C28
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 804C5C2C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C30
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 804C5C34
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C38
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 804C5C3C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C40
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 804C5C44
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5C48
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 804C5C4C
  goto L_804C5D0C; // 804C5C50
L_804C5C54:;
  c->r[3]=c->r[23]|c->r[23]; // 804C5C54
  c->lr=0x804C5C5Cu; f_804AE5F8(c); // 804C5C58
  W32(c->r[1]+0x00000008u,c->r[3]); // 804C5C5C
  c->r[6]=c->r[3]+0x0000004Cu; // 804C5C60
  c->r[4]=R32(c->r[25]+0x00000000u); // 804C5C64
  c->r[3]=c->r[1]+0x00000008u; // 804C5C68
  c->r[5]=R32(c->r[6]+0x00000024u); // 804C5C6C
  c->r[0]=R32(c->r[4]+0x00000008u); // 804C5C70
  c->r[4]=c->r[6]+c->r[5]; // 804C5C74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C5C78
  c->r[4]=c->r[4]+c->r[0]; // 804C5C7C
  c->r[4]=R32(c->r[4]+0x00000004u); // 804C5C80
  c->lr=0x804C5C88u; f_804AC458(c); // 804C5C84
  c->r[4]=R32(c->r[24]+0x00000000u); // 804C5C88
  c->r[5]=c->r[1]+0x000000A8u; // 804C5C8C
  c->r[3]=c->r[3]+0x000000A0u; // 804C5C90
  c->r[4]=c->r[4]+0x00000070u; // 804C5C94
  c->lr=0x804C5C9Cu; f_80382F60(c); // 804C5C98
  c->r[3]=R32(c->r[25]+0x00000000u); // 804C5C9C
  c->r[3]=R32(c->r[3]+0x00000008u); // 804C5CA0
  c->lr=0x804C5CA8u; f_804C108C(c); // 804C5CA4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C5CA8
  c->r[4]=c->r[1]+0x000000A8u; // 804C5CAC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C5CB0
  c->r[5]=c->r[4]|c->r[4]; // 804C5CB4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C5CB8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C5CBC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C5CC0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C5CC4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5CC8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5CCC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5CD0
  c->r[3]=c->r[1]+0x00000078u; // 804C5CD4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 804C5CD8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 804C5CDC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 804C5CE0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[31]);} // 804C5CE4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 804C5CE8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 804C5CEC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 804C5CF0
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 804C5CF4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[6]);} // 804C5CF8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 804C5CFC
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[8]);} // 804C5D00
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[31]);} // 804C5D04
  c->lr=0x804C5D0Cu; f_80382F60(c); // 804C5D08
L_804C5D0C:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5D0C
  c->r[3]=c->r[1]+0x0000005Cu; // 804C5D10
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5D14
  c->r[4]=c->r[3]|c->r[3]; // 804C5D18
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5D1C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[31]);} // 804C5D20
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[31]);} // 804C5D24
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[31]);} // 804C5D28
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 804C5D2C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 804C5D30
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 804C5D34
  c->lr=0x804C5D3Cu; f_80383D38(c); // 804C5D38
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5D3C
  c->r[3]=c->r[1]+0x00000050u; // 804C5D40
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5D44
  c->r[4]=c->r[3]|c->r[3]; // 804C5D48
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5D4C
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C5D50
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C5D54
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C5D58
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 804C5D5C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 804C5D60
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 804C5D64
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 804C5D68
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 804C5D6C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 804C5D70
  c->lr=0x804C5D78u; f_80383D38(c); // 804C5D74
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5D78
  c->r[3]=c->r[1]+0x00000044u; // 804C5D7C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5D80
  c->r[4]=c->r[3]|c->r[3]; // 804C5D84
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5D88
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C5D8C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C5D90
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C5D94
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 804C5D98
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 804C5D9C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 804C5DA0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 804C5DA4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 804C5DA8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[5]);} // 804C5DAC
  c->lr=0x804C5DB4u; f_80383D38(c); // 804C5DB0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5DB4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5DB8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5DBC
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 804C5DC0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 804C5DC4
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 804C5DC8
  goto L_804C5DDC; // 804C5DCC
L_804C5DD0:;
  c->lr=0x804C5DD4u; f_804C1544(c); // 804C5DD0
  c->r[4]=c->r[1]+0x000000A8u; // 804C5DD4
  c->lr=0x804C5DDCu; f_80382F2C(c); // 804C5DD8
L_804C5DDC:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 804C5DDC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 804C5DE0
  c->lr=0x804C5DE8u; f_804C13C8(c); // 804C5DE4
  cmps(c,0,(int32_t)c->r[3],0); // 804C5DE8
  c->r[22]=c->r[3]|c->r[3]; // 804C5DEC
  if (crb(c,2)) { goto L_804C5F6C; } // 804C5DF0
  c->r[4]=R32(c->r[3]+0x00000000u); // 804C5DF4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804C5DF8
  if (crb(c,2)) { goto L_804C5F6C; } // 804C5DFC
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804C5E00
  if (crb(c,2)) { goto L_804C5E8C; } // 804C5E04
  c->r[4]=c->r[1]+0x00000038u; // 804C5E08
  c->lr=0x804C5E10u; f_804D3810(c); // 804C5E0C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5E10
  fcmp(c,0,c->f[31],c->f[0]); // 804C5E14
  if (!crb(c,2)) { goto L_804C5F44; } // 804C5E18
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5E1C
  fcmp(c,0,c->f[31],c->f[0]); // 804C5E20
  if (!crb(c,2)) { goto L_804C5F44; } // 804C5E24
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5E28
  fcmp(c,0,c->f[31],c->f[0]); // 804C5E2C
  if (!crb(c,2)) { goto L_804C5F44; } // 804C5E30
  c->r[3]=c->r[22]|c->r[22]; // 804C5E34
  c->r[4]=c->r[1]+0x00000038u; // 804C5E38
  c->lr=0x804C5E40u; f_804D37F4(c); // 804C5E3C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5E40
  c->r[3]=c->r[1]+0x00000038u; // 804C5E44
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5E48
  c->r[4]=c->r[3]|c->r[3]; // 804C5E4C
  c->f[2]=-c->f[0]; // 804C5E50
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5E54
  c->f[3]=-c->f[1]; // 804C5E58
  c->f[4]=-c->f[0]; // 804C5E5C
  c->f[0]=c->ps1[0]=S(c->f[2]); // 804C5E60
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 804C5E64
  c->f[1]=c->ps1[1]=S(c->f[3]); // 804C5E68
  c->f[2]=c->ps1[2]=S(c->f[4]); // 804C5E6C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 804C5E70
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 804C5E74
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 804C5E78
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804C5E7C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804C5E80
  c->lr=0x804C5E88u; f_80383D38(c); // 804C5E84
  goto L_804C5F44; // 804C5E88
L_804C5E8C:;
  c->r[3]=0u+0x00000000u; // 804C5E8C
  if (!crb(c,2)) { goto L_804C5EA0; } // 804C5E90
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804C5E94
  if (!crb(c,2)) { goto L_804C5EA0; } // 804C5E98
  c->r[3]=0u+0x00000001u; // 804C5E9C
L_804C5EA0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C5EA0
  if (crb(c,2)) { goto L_804C5F00; } // 804C5EA4
  c->r[3]=c->r[22]|c->r[22]; // 804C5EA8
  c->r[4]=c->r[1]+0x00000038u; // 804C5EAC
  c->lr=0x804C5EB4u; f_804D37F4(c); // 804C5EB0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5EB4
  c->r[3]=c->r[1]+0x00000038u; // 804C5EB8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5EBC
  c->r[4]=c->r[3]|c->r[3]; // 804C5EC0
  c->f[2]=-c->f[0]; // 804C5EC4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5EC8
  c->f[3]=-c->f[1]; // 804C5ECC
  c->f[4]=-c->f[0]; // 804C5ED0
  c->f[0]=c->ps1[0]=S(c->f[2]); // 804C5ED4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804C5ED8
  c->f[1]=c->ps1[1]=S(c->f[3]); // 804C5EDC
  c->f[2]=c->ps1[2]=S(c->f[4]); // 804C5EE0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 804C5EE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 804C5EE8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 804C5EEC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804C5EF0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804C5EF4
  c->lr=0x804C5EFCu; f_80383D38(c); // 804C5EF8
  goto L_804C5F44; // 804C5EFC
L_804C5F00:;
  c->r[3]=c->r[22]|c->r[22]; // 804C5F00
  c->r[4]=c->r[1]+0x0000002Cu; // 804C5F04
  c->lr=0x804C5F0Cu; f_804D3810(c); // 804C5F08
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C5F0C
  c->r[3]=c->r[1]+0x00000038u; // 804C5F10
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C5F14
  c->r[4]=c->r[3]|c->r[3]; // 804C5F18
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 804C5F1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C5F20
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804C5F24
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804C5F28
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804C5F2C
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 804C5F30
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 804C5F34
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804C5F38
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804C5F3C
  c->lr=0x804C5F44u; f_80383D38(c); // 804C5F40
L_804C5F44:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 804C5F44
  c->r[3]=c->r[27]|c->r[27]; // 804C5F48
  c->r[4]=c->r[26]|c->r[26]; // 804C5F4C
  c->r[5]=c->r[1]+0x00000038u; // 804C5F50
  c->r[12]=R32(c->r[12]+0x00000014u); // 804C5F54
  c->r[6]=c->r[1]+0x000000A8u; // 804C5F58
  c->r[7]=R32(c->r[31]+0x00000000u); // 804C5F5C
  c->ctr=c->r[12]; // 804C5F60
  if (true) { c->lr=0x804C5F68u; dispatch(c,c->ctr); } // 804C5F64
  goto L_804C5F90; // 804C5F68
L_804C5F6C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 804C5F6C
  c->r[3]=c->r[27]|c->r[27]; // 804C5F70
  c->r[4]=c->r[26]|c->r[26]; // 804C5F74
  c->r[6]=c->r[1]+0x000000A8u; // 804C5F78
  c->r[12]=R32(c->r[12]+0x00000014u); // 804C5F7C
  c->r[5]=0u+0x00000000u; // 804C5F80
  c->r[7]=R32(c->r[31]+0x00000000u); // 804C5F84
  c->ctr=c->r[12]; // 804C5F88
  if (true) { c->lr=0x804C5F90u; dispatch(c,c->ctr); } // 804C5F8C
L_804C5F90:;
  c->r[28]=c->r[28]+0x00000001u; // 804C5F90
  c->r[30]=c->r[30]+0x00000001u; // 804C5F94
  cmpu(c,0,c->r[28],0x00000003u); // 804C5F98
  c->r[31]=c->r[31]+0x00000004u; // 804C5F9C
  if (crb(c,0)) { IRQCHK(c); goto L_804C5BB8; } // 804C5FA0
  c->r[3]=c->r[27]|c->r[27]; // 804C5FA4
L_804C5FA8:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 804C5FA8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 804C5FAC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 804C5FB0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 804C5FB4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 804C5FB8
  c->r[11]=c->r[1]+0x00000100u; // 804C5FBC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 804C5FC0
  c->lr=0x804C5FC8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C5FC4
  c->r[0]=R32(c->r[1]+0x00000134u); // 804C5FC8
  c->lr=c->r[0]; // 804C5FCC
  c->r[1]=c->r[1]+0x00000130u; // 804C5FD0
  return; // 804C5FD4
}

// fn_804C5FD8
void f_804C5FD8(Ctx* __restrict c) {
  trace_call(0x804C5FD8u);
  c->r[6]=R32(c->r[4]+0x00000008u); // 804C5FD8
  cmps(c,0,(int32_t)c->r[6],0); // 804C5FDC
  if (crb(c,2)) { goto L_804C5FF4; } // 804C5FE0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)260); // 804C5FE4
  c->r[0]=c->r[6]+c->r[0]; // 804C5FE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C5FEC
  goto L_804C5FFC; // 804C5FF0
L_804C5FF4:;
  c->r[0]=0u+0x00000000u; // 804C5FF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 804C5FF8
L_804C5FFC:;
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 804C5FFC
  cmps(c,0,(int32_t)c->r[6],0); // 804C6000
  if (crb(c,2)) { goto L_804C6018; } // 804C6004
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 804C6008
  c->r[0]=c->r[6]+c->r[0]; // 804C600C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C6010
  goto L_804C6020; // 804C6014
L_804C6018:;
  c->r[0]=0u+0x00000000u; // 804C6018
  W32(c->r[3]+0x00000004u,c->r[0]); // 804C601C
L_804C6020:;
  c->r[6]=R32(c->r[4]+0x00000010u); // 804C6020
  cmps(c,0,(int32_t)c->r[6],0); // 804C6024
  if (crb(c,2)) { goto L_804C603C; } // 804C6028
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)584); // 804C602C
  c->r[0]=c->r[6]+c->r[0]; // 804C6030
  W32(c->r[3]+0x00000028u,c->r[0]); // 804C6034
  goto L_804C6044; // 804C6038
L_804C603C:;
  c->r[0]=0u+0x00000000u; // 804C603C
  W32(c->r[3]+0x00000028u,c->r[0]); // 804C6040
L_804C6044:;
  c->r[6]=R32(c->r[4]+0x00000014u); // 804C6044
  cmps(c,0,(int32_t)c->r[6],0); // 804C6048
  if (crb(c,2)) { goto L_804C6060; } // 804C604C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 804C6050
  c->r[0]=c->r[6]+c->r[0]; // 804C6054
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804C6058
  goto L_804C6068; // 804C605C
L_804C6060:;
  c->r[0]=0u+0x00000000u; // 804C6060
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804C6064
L_804C6068:;
  c->r[6]=R32(c->r[4]+0x00000018u); // 804C6068
  cmps(c,0,(int32_t)c->r[6],0); // 804C606C
  if (crb(c,2)) { goto L_804C6084; } // 804C6070
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 804C6074
  c->r[0]=c->r[6]+c->r[0]; // 804C6078
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C607C
  goto L_804C608C; // 804C6080
L_804C6084:;
  c->r[0]=0u+0x00000000u; // 804C6084
  W32(c->r[3]+0x00000008u,c->r[0]); // 804C6088
L_804C608C:;
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 804C608C
  cmps(c,0,(int32_t)c->r[6],0); // 804C6090
  if (crb(c,2)) { goto L_804C60A8; } // 804C6094
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 804C6098
  c->r[0]=c->r[6]+c->r[0]; // 804C609C
  W32(c->r[3]+0x00000024u,c->r[0]); // 804C60A0
  goto L_804C60B0; // 804C60A4
L_804C60A8:;
  c->r[0]=0u+0x00000000u; // 804C60A8
  W32(c->r[3]+0x00000024u,c->r[0]); // 804C60AC
L_804C60B0:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 804C60B0
  cmps(c,0,(int32_t)c->r[6],0); // 804C60B4
  if (crb(c,2)) { goto L_804C60CC; } // 804C60B8
  c->r[0]=rotl(c->r[5],5)&0xFFFFFFE0u; // 804C60BC
  c->r[0]=c->r[6]+c->r[0]; // 804C60C0
  W32(c->r[3]+0x00000010u,c->r[0]); // 804C60C4
  goto L_804C60D4; // 804C60C8
L_804C60CC:;
  c->r[0]=0u+0x00000000u; // 804C60CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 804C60D0
L_804C60D4:;
  c->r[6]=R32(c->r[4]+0x00000024u); // 804C60D4
  cmps(c,0,(int32_t)c->r[6],0); // 804C60D8
  if (crb(c,2)) { goto L_804C60F0; } // 804C60DC
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 804C60E0
  c->r[0]=c->r[6]+c->r[0]; // 804C60E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 804C60E8
  goto L_804C60F8; // 804C60EC
L_804C60F0:;
  c->r[0]=0u+0x00000000u; // 804C60F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 804C60F4
L_804C60F8:;
  c->r[6]=R32(c->r[4]+0x00000028u); // 804C60F8
  cmps(c,0,(int32_t)c->r[6],0); // 804C60FC
  if (crb(c,2)) { goto L_804C6114; } // 804C6100
  c->r[0]=rotl(c->r[5],6)&0xFFFFFFC0u; // 804C6104
  c->r[0]=c->r[6]+c->r[0]; // 804C6108
  W32(c->r[3]+0x00000018u,c->r[0]); // 804C610C
  goto L_804C611C; // 804C6110
L_804C6114:;
  c->r[0]=0u+0x00000000u; // 804C6114
  W32(c->r[3]+0x00000018u,c->r[0]); // 804C6118
L_804C611C:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 804C611C
  cmps(c,0,(int32_t)c->r[6],0); // 804C6120
  if (crb(c,2)) { goto L_804C6138; } // 804C6124
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)160); // 804C6128
  c->r[0]=c->r[6]+c->r[0]; // 804C612C
  W32(c->r[3]+0x00000020u,c->r[0]); // 804C6130
  goto L_804C6140; // 804C6134
L_804C6138:;
  c->r[0]=0u+0x00000000u; // 804C6138
  W32(c->r[3]+0x00000020u,c->r[0]); // 804C613C
L_804C6140:;
  c->r[6]=R32(c->r[4]+0x00000030u); // 804C6140
  cmps(c,0,(int32_t)c->r[6],0); // 804C6144
  if (crb(c,2)) { goto L_804C615C; } // 804C6148
  c->r[0]=rotl(c->r[5],9)&0xFFFFFE00u; // 804C614C
  c->r[0]=c->r[6]+c->r[0]; // 804C6150
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804C6154
  goto L_804C6164; // 804C6158
L_804C615C:;
  c->r[0]=0u+0x00000000u; // 804C615C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804C6160
L_804C6164:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C6164
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C6168
  if (crb(c,2)) { goto L_804C6184; } // 804C616C
  c->r[0]=0u+0x00000000u; // 804C6170
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 804C6174
  W32(c->r[3]+0x00000030u,c->r[0]); // 804C6178
  W32(c->r[3]+0x00000034u,c->r[0]); // 804C617C
  return; // 804C6180
L_804C6184:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 804C6184
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 804C6188
  c->r[0]=R32(c->r[4]+0x00000038u); // 804C618C
  W32(c->r[3]+0x00000030u,c->r[0]); // 804C6190
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804C6194
  W32(c->r[3]+0x00000034u,c->r[0]); // 804C6198
  return; // 804C619C
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcUl
void f_804C61A0(Ctx* __restrict c) {
  trace_call(0x804C61A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C61A0
  c->r[0]=c->lr; // 804C61A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C61A8
  c->r[11]=c->r[1]+0x00000050u; // 804C61AC
  c->lr=0x804C61B4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C61B0
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 804C61B4
  c->r[24]=c->r[3]|c->r[3]; // 804C61B8
  c->r[25]=c->r[4]|c->r[4]; // 804C61BC
  c->r[27]=0u+0x00000000u; // 804C61C0
  c->r[26]=0u+0x00000001u; // 804C61C4
  if (crb(c,2)) { goto L_804C61D0; } // 804C61C8
  c->r[26]=c->r[26]|0x00000008u; // 804C61CC
L_804C61D0:;
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 804C61D0
  if (crb(c,2)) { goto L_804C61DC; } // 804C61D4
  c->r[26]=c->r[26]|0x00000010u; // 804C61D8
L_804C61DC:;
  c->r[28]=c->r[26]|0x00000010u; // 804C61DC
  c->r[31]=c->r[1]+0x00000008u; // 804C61E0
  c->r[30]=c->r[1]+0x0000000Cu; // 804C61E4
  c->r[29]=c->r[1]+0x00000010u; // 804C61E8
  goto L_804C62BC; // 804C61EC
L_804C61F0:;
  c->r[0]=R8(c->r[25]+0x00000005u); // 804C61F0
  c->r[3]=c->r[24]|c->r[24]; // 804C61F4
  c->r[4]=R8(c->r[25]+0x00000006u); // 804C61F8
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C61FC
  c->lr=0x804C6204u; f_804AC458(c); // 804C6200
  c->r[0]=R8(c->r[25]+0x00000003u); // 804C6204
  c->r[21]=c->r[3]|c->r[3]; // 804C6208
  c->r[4]=R8(c->r[25]+0x00000004u); // 804C620C
  c->r[3]=c->r[24]|c->r[24]; // 804C6210
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C6214
  c->lr=0x804C621Cu; f_804ACAD0(c); // 804C6218
  cmps(c,0,(int32_t)c->r[21],0); // 804C621C
  c->r[22]=c->r[3]|c->r[3]; // 804C6220
  if (crb(c,2)) { goto L_804C6234; } // 804C6224
  c->r[0]=R32(c->r[21]+0x00000014u); // 804C6228
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804C622C
  goto L_804C6238; // 804C6230
L_804C6234:;
  c->r[0]=0u+0x00000000u; // 804C6234
L_804C6238:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C6238
  if (crb(c,2)) { goto L_804C62B8; } // 804C623C
  c->r[0]=R32(c->r[22]+0x00000034u); // 804C6240
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C6244
  if (!crb(c,2)) { goto L_804C62B8; } // 804C6248
  c->r[0]=R8(c->r[25]+0x00000001u); // 804C624C
  c->r[3]=c->r[24]|c->r[24]; // 804C6250
  c->r[4]=R8(c->r[25]+0x00000002u); // 804C6254
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C6258
  c->lr=0x804C6260u; f_804AC9F4(c); // 804C625C
  cmpu(c,0,c->r[3],c->r[27]); // 804C6260
  W32(c->r[1]+0x00000008u,c->r[22]); // 804C6264
  c->r[27]=c->r[3]|c->r[3]; // 804C6268
  c->r[23]=c->r[26]|c->r[26]; // 804C626C
  W32(c->r[1]+0x0000000Cu,c->r[21]); // 804C6270
  W32(c->r[1]+0x00000010u,c->r[3]); // 804C6274
  if (!crb(c,2)) { goto L_804C6280; } // 804C6278
  c->r[23]=c->r[28]|c->r[28]; // 804C627C
L_804C6280:;
  W32(c->r[1]+0x00000014u,c->r[22]); // 804C6280
  c->r[3]=c->r[29]|c->r[29]; // 804C6284
  c->r[4]=c->r[30]|c->r[30]; // 804C6288
  c->r[5]=c->r[31]|c->r[31]; // 804C628C
  W32(c->r[1]+0x00000018u,c->r[27]); // 804C6290
  c->lr=0x804C6298u; f_804C5ABC(c); // 804C6294
  c->r[9]=c->r[3]|c->r[3]; // 804C6298
  c->r[7]=c->r[23]|c->r[23]; // 804C629C
  c->r[3]=c->r[1]+0x00000018u; // 804C62A0
  c->r[4]=c->r[1]+0x00000014u; // 804C62A4
  c->r[5]=0u+0x00000000u; // 804C62A8
  c->r[6]=0u+0x00000000u; // 804C62AC
  c->r[8]=0u+0x00000000u; // 804C62B0
  c->lr=0x804C62B8u; f_804C2460(c); // 804C62B4
L_804C62B8:;
  c->r[25]=c->r[25]+0x00000008u; // 804C62B8
L_804C62BC:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 804C62BC
  cmpu(c,0,c->r[0],0x00000001u); // 804C62C0
  if (!crb(c,2)) { IRQCHK(c); goto L_804C61F0; } // 804C62C4
  c->r[11]=c->r[1]+0x00000050u; // 804C62C8
  c->lr=0x804C62D0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C62CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 804C62D0
  c->lr=c->r[0]; // 804C62D4
  c->r[1]=c->r[1]+0x00000050u; // 804C62D8
  return; // 804C62DC
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_804C62E0(Ctx* __restrict c) {
  trace_call(0x804C62E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C62E0
  c->r[0]=c->lr; // 804C62E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 804C62E8
  c->r[11]=c->r[1]+0x00000090u; // 804C62EC
  c->lr=0x804C62F4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C62F0
  c->r[25]=0u+0x00000000u; // 804C62F4
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 804C62F8
  W32(c->r[1]+0x00000020u,c->r[25]); // 804C62FC
  c->r[21]=c->r[3]|c->r[3]; // 804C6300
  c->r[22]=c->r[4]|c->r[4]; // 804C6304
  c->r[23]=c->r[5]|c->r[5]; // 804C6308
  W32(c->r[1]+0x00000024u,c->r[25]); // 804C630C
  c->r[24]=0u+0x00000001u; // 804C6310
  W32(c->r[1]+0x00000028u,c->r[25]); // 804C6314
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 804C6318
  W32(c->r[1]+0x00000030u,c->r[25]); // 804C631C
  W32(c->r[1]+0x00000034u,c->r[25]); // 804C6320
  W32(c->r[1]+0x00000038u,c->r[25]); // 804C6324
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 804C6328
  W32(c->r[1]+0x00000040u,c->r[25]); // 804C632C
  W32(c->r[1]+0x00000044u,c->r[25]); // 804C6330
  W32(c->r[1]+0x00000048u,c->r[25]); // 804C6334
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 804C6338
  W32(c->r[1]+0x00000050u,c->r[25]); // 804C633C
  W32(c->r[1]+0x00000054u,c->r[25]); // 804C6340
  if (crb(c,2)) { goto L_804C634C; } // 804C6344
  c->r[24]=c->r[24]|0x00000008u; // 804C6348
L_804C634C:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 804C634C
  if (crb(c,2)) { goto L_804C6358; } // 804C6350
  c->r[24]=c->r[24]|0x00000010u; // 804C6354
L_804C6358:;
  c->r[26]=c->r[24]|0x00000010u; // 804C6358
  c->r[29]=c->r[1]+0x00000008u; // 804C635C
  c->r[28]=c->r[1]+0x0000000Cu; // 804C6360
  c->r[27]=c->r[1]+0x00000010u; // 804C6364
  goto L_804C6480; // 804C6368
L_804C636C:;
  c->r[0]=R8(c->r[22]+0x00000005u); // 804C636C
  c->r[3]=c->r[21]|c->r[21]; // 804C6370
  c->r[4]=R8(c->r[22]+0x00000006u); // 804C6374
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C6378
  c->lr=0x804C6380u; f_804AC458(c); // 804C637C
  c->r[0]=R8(c->r[22]+0x00000003u); // 804C6380
  c->r[30]=c->r[3]|c->r[3]; // 804C6384
  c->r[4]=R8(c->r[22]+0x00000004u); // 804C6388
  c->r[3]=c->r[21]|c->r[21]; // 804C638C
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C6390
  c->lr=0x804C6398u; f_804ACAD0(c); // 804C6394
  c->r[4]=R32(c->r[23]+0x00000004u); // 804C6398
  c->r[31]=c->r[3]|c->r[3]; // 804C639C
  cmps(c,0,(int32_t)c->r[4],0); // 804C63A0
  if (crb(c,2)) { goto L_804C63D0; } // 804C63A4
  cmps(c,0,(int32_t)c->r[30],0); // 804C63A8
  if (crb(c,2)) { goto L_804C63B8; } // 804C63AC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804C63B0
  goto L_804C63BC; // 804C63B4
L_804C63B8:;
  c->r[0]=0u+0x00000000u; // 804C63B8
L_804C63BC:;
  c->r[3]=R8(c->r[4]+c->r[0]); // 804C63BC
  c->r[0]=0u-c->r[3]; // 804C63C0
  c->r[0]=c->r[0]|c->r[3]; // 804C63C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C63C8
  goto L_804C63E8; // 804C63CC
L_804C63D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C63D0
  if (crb(c,2)) { goto L_804C63E4; } // 804C63D4
  c->r[0]=R32(c->r[30]+0x00000014u); // 804C63D8
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804C63DC
  goto L_804C63E8; // 804C63E0
L_804C63E4:;
  c->r[0]=0u+0x00000000u; // 804C63E4
L_804C63E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C63E8
  if (crb(c,2)) { goto L_804C647C; } // 804C63EC
  c->r[0]=R32(c->r[31]+0x00000034u); // 804C63F0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C63F4
  if (!crb(c,2)) { goto L_804C647C; } // 804C63F8
  c->r[0]=R8(c->r[22]+0x00000001u); // 804C63FC
  c->r[3]=c->r[21]|c->r[21]; // 804C6400
  c->r[4]=R8(c->r[22]+0x00000002u); // 804C6404
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 804C6408
  c->lr=0x804C6410u; f_804AC9F4(c); // 804C640C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 804C6410
  c->r[20]=c->r[3]|c->r[3]; // 804C6414
  c->r[4]=c->r[23]|c->r[23]; // 804C6418
  c->r[3]=c->r[1]+0x00000020u; // 804C641C
  c->lr=0x804C6424u; f_804C5FD8(c); // 804C6420
  cmpu(c,0,c->r[20],c->r[25]); // 804C6424
  W32(c->r[1]+0x00000008u,c->r[31]); // 804C6428
  c->r[25]=c->r[24]|c->r[24]; // 804C642C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 804C6430
  W32(c->r[1]+0x00000010u,c->r[20]); // 804C6434
  if (!crb(c,2)) { goto L_804C6440; } // 804C6438
  c->r[25]=c->r[26]|c->r[26]; // 804C643C
L_804C6440:;
  W32(c->r[1]+0x00000014u,c->r[31]); // 804C6440
  c->r[3]=c->r[27]|c->r[27]; // 804C6444
  c->r[4]=c->r[28]|c->r[28]; // 804C6448
  c->r[5]=c->r[29]|c->r[29]; // 804C644C
  W32(c->r[1]+0x00000018u,c->r[20]); // 804C6450
  c->lr=0x804C6458u; f_804C5ABC(c); // 804C6454
  c->r[9]=c->r[3]|c->r[3]; // 804C6458
  c->r[7]=c->r[25]|c->r[25]; // 804C645C
  c->r[3]=c->r[1]+0x00000018u; // 804C6460
  c->r[4]=c->r[1]+0x00000014u; // 804C6464
  c->r[8]=c->r[1]+0x00000020u; // 804C6468
  c->r[5]=0u+0x00000000u; // 804C646C
  c->r[6]=0u+0x00000000u; // 804C6470
  c->lr=0x804C6478u; f_804C2460(c); // 804C6474
  c->r[25]=c->r[20]|c->r[20]; // 804C6478
L_804C647C:;
  c->r[22]=c->r[22]+0x00000008u; // 804C647C
L_804C6480:;
  c->r[0]=R8(c->r[22]+0x00000000u); // 804C6480
  cmpu(c,0,c->r[0],0x00000001u); // 804C6484
  if (!crb(c,2)) { IRQCHK(c); goto L_804C636C; } // 804C6488
  c->r[11]=c->r[1]+0x00000090u; // 804C648C
  c->lr=0x804C6494u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C6490
  c->r[0]=R32(c->r[1]+0x00000094u); // 804C6494
  c->lr=c->r[0]; // 804C6498
  c->r[1]=c->r[1]+0x00000090u; // 804C649C
  return; // 804C64A0
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlUl
void f_804C64A4(Ctx* __restrict c) {
  trace_call(0x804C64A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C64A4
  c->r[0]=c->lr; // 804C64A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C64AC
  c->r[11]=c->r[1]+0x00000050u; // 804C64B0
  c->lr=0x804C64B8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C64B4
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 804C64B8
  c->r[20]=c->r[3]|c->r[3]; // 804C64BC
  c->r[21]=c->r[5]|c->r[5]; // 804C64C0
  c->r[31]=0u+0x00000000u; // 804C64C4
  c->r[22]=0u+0x00000001u; // 804C64C8
  if (crb(c,2)) { goto L_804C64D4; } // 804C64CC
  c->r[22]=c->r[22]|0x00000008u; // 804C64D0
L_804C64D4:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 804C64D4
  if (crb(c,2)) { goto L_804C64E0; } // 804C64D8
  c->r[22]=c->r[22]|0x00000010u; // 804C64DC
L_804C64E0:;
  c->r[25]=c->r[4]|c->r[4]; // 804C64E0
  c->r[24]=c->r[22]|0x00000010u; // 804C64E4
  c->r[28]=c->r[1]+0x00000008u; // 804C64E8
  c->r[27]=c->r[1]+0x0000000Cu; // 804C64EC
  c->r[26]=c->r[1]+0x00000010u; // 804C64F0
  c->r[23]=0u+0x00000000u; // 804C64F4
  goto L_804C6594; // 804C64F8
L_804C64FC:;
  c->r[4]=R16(c->r[25]+0x0000000Au); // 804C64FC
  c->r[3]=c->r[20]|c->r[20]; // 804C6500
  c->lr=0x804C6508u; f_804ACAD0(c); // 804C6504
  c->r[0]=R32(c->r[3]+0x00000034u); // 804C6508
  c->r[29]=c->r[3]|c->r[3]; // 804C650C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C6510
  if (!crb(c,2)) { goto L_804C658C; } // 804C6514
  c->r[4]=R16(c->r[25]+0x00000008u); // 804C6518
  c->r[3]=c->r[20]|c->r[20]; // 804C651C
  c->lr=0x804C6524u; f_804AC9F4(c); // 804C6520
  c->r[4]=R16(c->r[25]+0x00000006u); // 804C6524
  c->r[30]=c->r[3]|c->r[3]; // 804C6528
  c->r[3]=c->r[20]|c->r[20]; // 804C652C
  c->lr=0x804C6534u; f_804AC458(c); // 804C6530
  cmpu(c,0,c->r[30],c->r[31]); // 804C6534
  W32(c->r[1]+0x00000008u,c->r[29]); // 804C6538
  c->r[31]=c->r[22]|c->r[22]; // 804C653C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804C6540
  W32(c->r[1]+0x00000010u,c->r[30]); // 804C6544
  if (!crb(c,2)) { goto L_804C6550; } // 804C6548
  c->r[31]=c->r[24]|c->r[24]; // 804C654C
L_804C6550:;
  W32(c->r[1]+0x00000014u,c->r[29]); // 804C6550
  c->r[3]=c->r[26]|c->r[26]; // 804C6554
  c->r[4]=c->r[27]|c->r[27]; // 804C6558
  c->r[5]=c->r[28]|c->r[28]; // 804C655C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C6560
  c->lr=0x804C6568u; f_804C5ABC(c); // 804C6564
  c->r[9]=c->r[3]|c->r[3]; // 804C6568
  c->r[7]=c->r[31]|c->r[31]; // 804C656C
  c->r[3]=c->r[1]+0x00000018u; // 804C6570
  c->r[4]=c->r[1]+0x00000014u; // 804C6574
  c->r[5]=0u+0x00000000u; // 804C6578
  c->r[6]=0u+0x00000000u; // 804C657C
  c->r[8]=0u+0x00000000u; // 804C6580
  c->lr=0x804C6588u; f_804C2460(c); // 804C6584
  c->r[31]=c->r[30]|c->r[30]; // 804C6588
L_804C658C:;
  c->r[25]=c->r[25]+0x0000000Cu; // 804C658C
  c->r[23]=c->r[23]+0x00000001u; // 804C6590
L_804C6594:;
  cmpu(c,0,c->r[23],c->r[21]); // 804C6594
  if (crb(c,0)) { IRQCHK(c); goto L_804C64FC; } // 804C6598
  c->r[11]=c->r[1]+0x00000050u; // 804C659C
  c->lr=0x804C65A4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C65A0
  c->r[0]=R32(c->r[1]+0x00000054u); // 804C65A4
  c->lr=c->r[0]; // 804C65A8
  c->r[1]=c->r[1]+0x00000050u; // 804C65AC
  return; // 804C65B0
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_804C65B4(Ctx* __restrict c) {
  trace_call(0x804C65B4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C65B4
  c->r[0]=c->lr; // 804C65B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 804C65BC
  c->r[11]=c->r[1]+0x00000090u; // 804C65C0
  c->lr=0x804C65C8u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C65C4
  c->r[27]=0u+0x00000000u; // 804C65C8
  c->r[0]=rotl(c->r[7],0)&0x00000008u; cr0(c,c->r[0]); // 804C65CC
  W32(c->r[1]+0x00000020u,c->r[27]); // 804C65D0
  c->r[28]=c->r[3]|c->r[3]; // 804C65D4
  c->r[29]=c->r[5]|c->r[5]; // 804C65D8
  c->r[30]=c->r[6]|c->r[6]; // 804C65DC
  W32(c->r[1]+0x00000024u,c->r[27]); // 804C65E0
  c->r[31]=0u+0x00000001u; // 804C65E4
  W32(c->r[1]+0x00000028u,c->r[27]); // 804C65E8
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 804C65EC
  W32(c->r[1]+0x00000030u,c->r[27]); // 804C65F0
  W32(c->r[1]+0x00000034u,c->r[27]); // 804C65F4
  W32(c->r[1]+0x00000038u,c->r[27]); // 804C65F8
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 804C65FC
  W32(c->r[1]+0x00000040u,c->r[27]); // 804C6600
  W32(c->r[1]+0x00000044u,c->r[27]); // 804C6604
  W32(c->r[1]+0x00000048u,c->r[27]); // 804C6608
  W32(c->r[1]+0x0000004Cu,c->r[27]); // 804C660C
  W32(c->r[1]+0x00000050u,c->r[27]); // 804C6610
  W32(c->r[1]+0x00000054u,c->r[27]); // 804C6614
  if (crb(c,2)) { goto L_804C6620; } // 804C6618
  c->r[31]=c->r[31]|0x00000008u; // 804C661C
L_804C6620:;
  c->r[0]=rotl(c->r[7],0)&0x00000004u; cr0(c,c->r[0]); // 804C6620
  if (crb(c,2)) { goto L_804C662C; } // 804C6624
  c->r[31]=c->r[31]|0x00000010u; // 804C6628
L_804C662C:;
  c->r[20]=c->r[4]|c->r[4]; // 804C662C
  c->r[19]=c->r[31]|0x00000010u; // 804C6630
  c->r[23]=c->r[1]+0x00000008u; // 804C6634
  c->r[22]=c->r[1]+0x0000000Cu; // 804C6638
  c->r[21]=c->r[1]+0x00000010u; // 804C663C
  c->r[18]=0u+0x00000000u; // 804C6640
  goto L_804C66F4; // 804C6644
L_804C6648:;
  c->r[4]=R16(c->r[20]+0x0000000Au); // 804C6648
  c->r[3]=c->r[28]|c->r[28]; // 804C664C
  c->lr=0x804C6654u; f_804ACAD0(c); // 804C6650
  c->r[0]=R32(c->r[3]+0x00000034u); // 804C6654
  c->r[24]=c->r[3]|c->r[3]; // 804C6658
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C665C
  if (!crb(c,2)) { goto L_804C66EC; } // 804C6660
  c->r[4]=R16(c->r[20]+0x00000008u); // 804C6664
  c->r[3]=c->r[28]|c->r[28]; // 804C6668
  c->lr=0x804C6670u; f_804AC9F4(c); // 804C666C
  c->r[4]=R16(c->r[20]+0x00000006u); // 804C6670
  c->r[25]=c->r[3]|c->r[3]; // 804C6674
  c->r[3]=c->r[28]|c->r[28]; // 804C6678
  c->lr=0x804C6680u; f_804AC458(c); // 804C667C
  c->r[5]=R32(c->r[25]+0x0000000Cu); // 804C6680
  c->r[26]=c->r[3]|c->r[3]; // 804C6684
  c->r[4]=c->r[30]|c->r[30]; // 804C6688
  c->r[3]=c->r[1]+0x00000020u; // 804C668C
  c->lr=0x804C6694u; f_804C5FD8(c); // 804C6690
  cmpu(c,0,c->r[25],c->r[27]); // 804C6694
  W32(c->r[1]+0x00000008u,c->r[24]); // 804C6698
  c->r[27]=c->r[31]|c->r[31]; // 804C669C
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 804C66A0
  W32(c->r[1]+0x00000010u,c->r[25]); // 804C66A4
  if (!crb(c,2)) { goto L_804C66B0; } // 804C66A8
  c->r[27]=c->r[19]|c->r[19]; // 804C66AC
L_804C66B0:;
  W32(c->r[1]+0x00000014u,c->r[24]); // 804C66B0
  c->r[3]=c->r[21]|c->r[21]; // 804C66B4
  c->r[4]=c->r[22]|c->r[22]; // 804C66B8
  c->r[5]=c->r[23]|c->r[23]; // 804C66BC
  W32(c->r[1]+0x00000018u,c->r[25]); // 804C66C0
  c->lr=0x804C66C8u; f_804C5ABC(c); // 804C66C4
  c->r[9]=c->r[3]|c->r[3]; // 804C66C8
  c->r[7]=c->r[27]|c->r[27]; // 804C66CC
  c->r[3]=c->r[1]+0x00000018u; // 804C66D0
  c->r[4]=c->r[1]+0x00000014u; // 804C66D4
  c->r[8]=c->r[1]+0x00000020u; // 804C66D8
  c->r[5]=0u+0x00000000u; // 804C66DC
  c->r[6]=0u+0x00000000u; // 804C66E0
  c->lr=0x804C66E8u; f_804C2460(c); // 804C66E4
  c->r[27]=c->r[25]|c->r[25]; // 804C66E8
L_804C66EC:;
  c->r[20]=c->r[20]+0x0000000Cu; // 804C66EC
  c->r[18]=c->r[18]+0x00000001u; // 804C66F0
L_804C66F4:;
  cmpu(c,0,c->r[18],c->r[29]); // 804C66F4
  if (crb(c,0)) { IRQCHK(c); goto L_804C6648; } // 804C66F8
  c->r[11]=c->r[1]+0x00000090u; // 804C66FC
  c->lr=0x804C6704u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C6700
  c->r[0]=R32(c->r[1]+0x00000094u); // 804C6704
  c->lr=c->r[0]; // 804C6708
  c->r[1]=c->r[1]+0x00000090u; // 804C670C
  return; // 804C6710
}

// fn_804C6714
void f_804C6714(Ctx* __restrict c) {
  trace_call(0x804C6714u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C6714
  c->r[0]=c->lr; // 804C6718
  W32(c->r[1]+0x00000044u,c->r[0]); // 804C671C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804C6720
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804C6724
  c->r[11]=c->r[1]+0x00000030u; // 804C6728
  c->lr=0x804C6730u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C672C
  c->r[8]=R32(c->r[4]+0x00000000u); // 804C6730
  c->r[23]=c->r[3]|c->r[3]; // 804C6734
  c->r[24]=c->r[4]|c->r[4]; // 804C6738
  c->r[25]=c->r[5]|c->r[5]; // 804C673C
  c->r[29]=R32(c->r[8]+0x00000068u); // 804C6740
  c->r[26]=c->r[6]|c->r[6]; // 804C6744
  c->r[27]=c->r[7]|c->r[7]; // 804C6748
  c->r[30]=0u+0x00000000u; // 804C674C
  c->lr=0x804C6754u; f_804C4FD4(c); // 804C6750
  c->r[28]=c->r[3]|c->r[3]; // 804C6754
  {uint32_t ea=c->r[2]+0x00001670u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C6758
  c->r[31]=c->r[28]|c->r[28]; // 804C675C
  goto L_804C6844; // 804C6760
L_804C6764:;
  c->r[0]=R8(c->r[26]+0x00000005u); // 804C6764
  c->r[3]=c->r[24]|c->r[24]; // 804C6768
  c->r[22]=R8(c->r[26]+0x00000006u); // 804C676C
  c->r[22]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[22]&~0x0000FF00u); // 804C6770
  c->r[4]=c->r[22]|c->r[22]; // 804C6774
  c->lr=0x804C677Cu; f_804AC458(c); // 804C6778
  cmps(c,0,(int32_t)c->r[27],0); // 804C677C
  if (crb(c,2)) { goto L_804C6790; } // 804C6780
  c->r[4]=R32(c->r[27]+0x00000004u); // 804C6784
  cmps(c,0,(int32_t)c->r[4],0); // 804C6788
  if (!crb(c,2)) { goto L_804C67AC; } // 804C678C
L_804C6790:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C6790
  if (crb(c,2)) { goto L_804C67A4; } // 804C6794
  c->r[0]=R32(c->r[3]+0x00000014u); // 804C6798
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804C679C
  goto L_804C67D0; // 804C67A0
L_804C67A4:;
  c->r[0]=0u+0x00000000u; // 804C67A4
  goto L_804C67D0; // 804C67A8
L_804C67AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804C67AC
  if (crb(c,2)) { goto L_804C67BC; } // 804C67B0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804C67B4
  goto L_804C67C0; // 804C67B8
L_804C67BC:;
  c->r[0]=0u+0x00000000u; // 804C67BC
L_804C67C0:;
  c->r[4]=R8(c->r[4]+c->r[0]); // 804C67C0
  c->r[0]=0u-c->r[4]; // 804C67C4
  c->r[0]=c->r[0]|c->r[4]; // 804C67C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804C67CC
L_804C67D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C67D0
  if (crb(c,2)) { goto L_804C6840; } // 804C67D4
  c->r[0]=R8(c->r[26]+0x00000001u); // 804C67D8
  cmps(c,0,(int32_t)c->r[3],0); // 804C67DC
  c->r[5]=R8(c->r[26]+0x00000002u); // 804C67E0
  c->r[5]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 804C67E4
  W16(c->r[31]+0x00000006u,c->r[22]); // 804C67E8
  c->r[4]=R8(c->r[26]+0x00000003u); // 804C67EC
  c->r[0]=R8(c->r[26]+0x00000004u); // 804C67F0
  W16(c->r[31]+0x00000008u,c->r[5]); // 804C67F4
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 804C67F8
  W16(c->r[31]+0x0000000Au,c->r[0]); // 804C67FC
  if (crb(c,2)) { goto L_804C680C; } // 804C6800
  c->r[0]=R32(c->r[3]+0x00000010u); // 804C6804
  goto L_804C6810; // 804C6808
L_804C680C:;
  c->r[0]=0u+0x00000000u; // 804C680C
L_804C6810:;
  cmpu(c,0,c->r[0],c->r[29]); // 804C6810
  if (!crb(c,0)) { goto L_804C682C; } // 804C6814
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804C6818
  c->r[3]=c->r[25]+c->r[0]; // 804C681C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6820
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804C6824
  goto L_804C6830; // 804C6828
L_804C682C:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[31]);} // 804C682C
L_804C6830:;
  c->r[0]=R8(c->r[26]+0x00000007u); // 804C6830
  c->r[30]=c->r[30]+0x00000001u; // 804C6834
  W16(c->r[31]+0x00000004u,c->r[0]); // 804C6838
  c->r[31]=c->r[31]+0x0000000Cu; // 804C683C
L_804C6840:;
  c->r[26]=c->r[26]+0x00000008u; // 804C6840
L_804C6844:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 804C6844
  cmpu(c,0,c->r[0],0x00000001u); // 804C6848
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6764; } // 804C684C
  W32(c->r[23]+0x00000000u,c->r[30]); // 804C6850
  c->r[3]=c->r[28]|c->r[28]; // 804C6854
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804C6858
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804C685C
  c->r[11]=c->r[1]+0x00000030u; // 804C6860
  c->lr=0x804C6868u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C6864
  c->r[0]=R32(c->r[1]+0x00000044u); // 804C6868
  c->lr=c->r[0]; // 804C686C
  c->r[1]=c->r[1]+0x00000040u; // 804C6870
  return; // 804C6874
}

// DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_804C6878(Ctx* __restrict c) {
  trace_call(0x804C6878u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C6878
  c->r[0]=c->lr; // 804C687C
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C6880
  c->r[11]=c->r[1]+0x00000050u; // 804C6884
  c->lr=0x804C688Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C6888
  c->r[28]=c->r[4]|c->r[4]; // 804C688C
  c->r[27]=c->r[3]|c->r[3]; // 804C6890
  c->r[4]=c->r[5]|c->r[5]; // 804C6894
  c->r[5]=c->r[6]|c->r[6]; // 804C6898
  c->r[26]=c->r[7]|c->r[7]; // 804C689C
  c->r[29]=c->r[8]|c->r[8]; // 804C68A0
  c->r[30]=c->r[9]|c->r[9]; // 804C68A4
  c->r[31]=c->r[10]|c->r[10]; // 804C68A8
  c->r[3]=c->r[28]|c->r[28]; // 804C68AC
  c->lr=0x804C68B4u; f_804C1004(c); // 804C68B0
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804C68B4
  if (!crb(c,2)) { goto L_804C68C8; } // 804C68B8
  c->r[3]=0u+0x00000000u; // 804C68BC
  c->lr=0x804C68C4u; f_80377568(c); // 804C68C0
  c->lr=0x804C68C8u; f_803749AC(c); // 804C68C4
L_804C68C8:;
  cmps(c,0,(int32_t)c->r[26],0); // 804C68C8
  if (crb(c,2)) { goto L_804C69A0; } // 804C68CC
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 804C68D0
  if (crb(c,2)) { goto L_804C6960; } // 804C68D4
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C68D8
  c->r[5]=c->r[28]|c->r[28]; // 804C68DC
  c->r[6]=c->r[26]|c->r[26]; // 804C68E0
  c->r[7]=c->r[30]|c->r[30]; // 804C68E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804C68E8
  c->r[3]=c->r[1]+0x00000034u; // 804C68EC
  c->r[4]=c->r[1]+0x0000002Cu; // 804C68F0
  c->lr=0x804C68F8u; f_804C6714(c); // 804C68F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C68F8
  c->r[5]=0u+0x804C0000u; // 804C68FC
  c->r[26]=c->r[3]|c->r[3]; // 804C6900
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C6904
  c->r[5]=c->r[5]+0x00006AA0u; // 804C6908
  c->r[4]=c->r[3]+c->r[0]; // 804C690C
  c->lr=0x804C6914u; f_804C6B40(c); // 804C6910
  cmps(c,0,(int32_t)c->r[30],0); // 804C6914
  if (crb(c,2)) { goto L_804C6940; } // 804C6918
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C691C
  c->r[4]=c->r[26]|c->r[26]; // 804C6920
  c->r[5]=R32(c->r[1]+0x00000034u); // 804C6924
  c->r[6]=c->r[30]|c->r[30]; // 804C6928
  W32(c->r[1]+0x00000028u,c->r[0]); // 804C692C
  c->r[7]=c->r[31]|c->r[31]; // 804C6930
  c->r[3]=c->r[1]+0x00000028u; // 804C6934
  c->lr=0x804C693Cu; f_804C65B4(c); // 804C6938
  goto L_804C69A0; // 804C693C
L_804C6940:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6940
  c->r[4]=c->r[26]|c->r[26]; // 804C6944
  c->r[5]=R32(c->r[1]+0x00000034u); // 804C6948
  c->r[6]=c->r[31]|c->r[31]; // 804C694C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C6950
  c->r[3]=c->r[1]+0x00000024u; // 804C6954
  c->lr=0x804C695Cu; f_804C64A4(c); // 804C6958
  goto L_804C69A0; // 804C695C
L_804C6960:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C6960
  if (crb(c,2)) { goto L_804C6988; } // 804C6964
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6968
  c->r[4]=c->r[26]|c->r[26]; // 804C696C
  c->r[5]=c->r[30]|c->r[30]; // 804C6970
  c->r[6]=c->r[31]|c->r[31]; // 804C6974
  W32(c->r[1]+0x00000020u,c->r[0]); // 804C6978
  c->r[3]=c->r[1]+0x00000020u; // 804C697C
  c->lr=0x804C6984u; f_804C62E0(c); // 804C6980
  goto L_804C69A0; // 804C6984
L_804C6988:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6988
  c->r[4]=c->r[26]|c->r[26]; // 804C698C
  c->r[5]=c->r[31]|c->r[31]; // 804C6990
  c->r[3]=c->r[1]+0x0000001Cu; // 804C6994
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804C6998
  c->lr=0x804C69A0u; f_804C61A0(c); // 804C699C
L_804C69A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804C69A0
  if (crb(c,2)) { goto L_804C6A78; } // 804C69A4
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804C69A8
  if (crb(c,2)) { goto L_804C6A38; } // 804C69AC
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C69B0
  c->r[5]=c->r[28]|c->r[28]; // 804C69B4
  c->r[6]=c->r[29]|c->r[29]; // 804C69B8
  c->r[7]=c->r[30]|c->r[30]; // 804C69BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 804C69C0
  c->r[3]=c->r[1]+0x00000030u; // 804C69C4
  c->r[4]=c->r[1]+0x00000018u; // 804C69C8
  c->lr=0x804C69D0u; f_804C6714(c); // 804C69CC
  c->r[0]=R32(c->r[1]+0x00000030u); // 804C69D0
  c->r[5]=0u+0x804C0000u; // 804C69D4
  c->r[26]=c->r[3]|c->r[3]; // 804C69D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C69DC
  c->r[5]=c->r[5]+0x00006ADCu; // 804C69E0
  c->r[4]=c->r[3]+c->r[0]; // 804C69E4
  c->lr=0x804C69ECu; f_804C6B40(c); // 804C69E8
  cmps(c,0,(int32_t)c->r[30],0); // 804C69EC
  if (crb(c,2)) { goto L_804C6A18; } // 804C69F0
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C69F4
  c->r[4]=c->r[26]|c->r[26]; // 804C69F8
  c->r[5]=R32(c->r[1]+0x00000030u); // 804C69FC
  c->r[6]=c->r[30]|c->r[30]; // 804C6A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C6A04
  c->r[7]=c->r[31]|c->r[31]; // 804C6A08
  c->r[3]=c->r[1]+0x00000014u; // 804C6A0C
  c->lr=0x804C6A14u; f_804C65B4(c); // 804C6A10
  goto L_804C6A78; // 804C6A14
L_804C6A18:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6A18
  c->r[4]=c->r[26]|c->r[26]; // 804C6A1C
  c->r[5]=R32(c->r[1]+0x00000030u); // 804C6A20
  c->r[6]=c->r[31]|c->r[31]; // 804C6A24
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C6A28
  c->r[3]=c->r[1]+0x00000010u; // 804C6A2C
  c->lr=0x804C6A34u; f_804C64A4(c); // 804C6A30
  goto L_804C6A78; // 804C6A34
L_804C6A38:;
  cmps(c,0,(int32_t)c->r[30],0); // 804C6A38
  if (crb(c,2)) { goto L_804C6A60; } // 804C6A3C
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6A40
  c->r[4]=c->r[29]|c->r[29]; // 804C6A44
  c->r[5]=c->r[30]|c->r[30]; // 804C6A48
  c->r[6]=c->r[31]|c->r[31]; // 804C6A4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804C6A50
  c->r[3]=c->r[1]+0x0000000Cu; // 804C6A54
  c->lr=0x804C6A5Cu; f_804C62E0(c); // 804C6A58
  goto L_804C6A78; // 804C6A5C
L_804C6A60:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804C6A60
  c->r[4]=c->r[29]|c->r[29]; // 804C6A64
  c->r[5]=c->r[31]|c->r[31]; // 804C6A68
  c->r[3]=c->r[1]+0x00000008u; // 804C6A6C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804C6A70
  c->lr=0x804C6A78u; f_804C61A0(c); // 804C6A74
L_804C6A78:;
  c->r[3]=0u+0x00000000u; // 804C6A78
  c->r[4]=0u+0x00000000u; // 804C6A7C
  c->r[5]=0u+0x00000000u; // 804C6A80
  c->lr=0x804C6A88u; f_804C1004(c); // 804C6A84
  c->r[11]=c->r[1]+0x00000050u; // 804C6A88
  c->lr=0x804C6A90u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C6A8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 804C6A90
  c->lr=c->r[0]; // 804C6A94
  c->r[1]=c->r[1]+0x00000050u; // 804C6A98
  return; // 804C6A9C
}

// FrontToBack__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_804C6AA0(Ctx* __restrict c) {
  trace_call(0x804C6AA0u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 804C6AA0
  c->r[5]=R16(c->r[3]+0x00000004u); // 804C6AA4
  cmpu(c,0,c->r[5],c->r[0]); // 804C6AA8
  if (!crb(c,0)) { goto L_804C6AB8; } // 804C6AAC
  c->r[3]=0u+0x00000001u; // 804C6AB0
  return; // 804C6AB4
L_804C6AB8:;
  if (!crb(c,1)) { goto L_804C6AC4; } // 804C6AB8
  c->r[3]=0u+0x00000000u; // 804C6ABC
  return; // 804C6AC0
L_804C6AC4:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C6AC4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6AC8
  fcmp(c,0,c->f[1],c->f[0]); // 804C6ACC
  c->r[3]=c->cr; // 804C6AD0
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 804C6AD4
  return; // 804C6AD8
}

// BackToFront__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_804C6ADC(Ctx* __restrict c) {
  trace_call(0x804C6ADCu);
  c->r[0]=R16(c->r[4]+0x00000004u); // 804C6ADC
  c->r[5]=R16(c->r[3]+0x00000004u); // 804C6AE0
  cmpu(c,0,c->r[5],c->r[0]); // 804C6AE4
  if (!crb(c,0)) { goto L_804C6AF4; } // 804C6AE8
  c->r[3]=0u+0x00000001u; // 804C6AEC
  return; // 804C6AF0
L_804C6AF4:;
  if (!crb(c,1)) { goto L_804C6B00; } // 804C6AF4
  c->r[3]=0u+0x00000000u; // 804C6AF8
  return; // 804C6AFC
L_804C6B00:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C6B00
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6B04
  fcmp(c,0,c->f[1],c->f[0]); // 804C6B08
  if (!crb(c,0)) { goto L_804C6B18; } // 804C6B0C
  c->r[3]=0u+0x00000001u; // 804C6B10
  return; // 804C6B14
L_804C6B18:;
  fcmp(c,0,c->f[1],c->f[0]); // 804C6B18
  if (!crb(c,2)) { goto L_804C6B38; } // 804C6B1C
  c->r[3]=R16(c->r[3]+0x00000008u); // 804C6B20
  c->r[0]=R16(c->r[4]+0x00000008u); // 804C6B24
  cmpu(c,0,c->r[3],c->r[0]); // 804C6B28
  if (!crb(c,0)) { goto L_804C6B38; } // 804C6B2C
  c->r[3]=0u+0x00000001u; // 804C6B30
  return; // 804C6B34
L_804C6B38:;
  c->r[3]=0u+0x00000000u; // 804C6B38
  return; // 804C6B3C
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,PFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_804C6B40(Ctx* __restrict c) {
  trace_call(0x804C6B40u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C6B40
  c->r[0]=c->lr; // 804C6B44
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C6B48
  c->r[11]=c->r[1]+0x00000080u; // 804C6B4C
  c->lr=0x804C6B54u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C6B50
  c->r[24]=0u+0x2AAB0000u; // 804C6B54
  c->r[6]=0u+0x66660000u; // 804C6B58
  W32(c->r[1]+0x00000008u,c->r[5]); // 804C6B5C
  c->r[25]=c->r[3]|c->r[3]; // 804C6B60
  c->r[26]=c->r[4]|c->r[4]; // 804C6B64
  c->r[31]=c->r[6]+0x00006667u; // 804C6B68
  c->r[30]=c->r[24]+0xFFFFAAABu; // 804C6B6C
L_804C6B70:;
  c->r[0]=c->r[26]-c->r[25]; // 804C6B70
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 804C6B74
  c->r[0]=sraw(c,c->r[0],1); // 804C6B78
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C6B7C
  c->r[7]=c->r[0]+c->r[3]; // 804C6B80
  cmps(c,0,(int32_t)c->r[7],1); // 804C6B84
  if (!crb(c,1)) { goto L_804C70E4; } // 804C6B88
  cmps(c,0,(int32_t)c->r[7],20); // 804C6B8C
  if (crb(c,1)) { goto L_804C6C64; } // 804C6B90
  cmpu(c,0,c->r[25],c->r[26]); // 804C6B94
  if (crb(c,2)) { goto L_804C70E4; } // 804C6B98
  c->r[24]=c->r[26]+0xFFFFFFF4u; // 804C6B9C
  goto L_804C6C58; // 804C6BA0
L_804C6BA4:;
  cmpu(c,0,c->r[25],c->r[26]); // 804C6BA4
  c->r[27]=c->r[25]|c->r[25]; // 804C6BA8
  if (crb(c,2)) { goto L_804C6BE4; } // 804C6BAC
  c->r[28]=c->r[25]+0x0000000Cu; // 804C6BB0
  goto L_804C6BDC; // 804C6BB4
L_804C6BB8:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6BB8
  c->r[3]=c->r[28]|c->r[28]; // 804C6BBC
  c->r[4]=c->r[27]|c->r[27]; // 804C6BC0
  c->ctr=c->r[12]; // 804C6BC4
  if (true) { c->lr=0x804C6BCCu; dispatch(c,c->ctr); } // 804C6BC8
  cmps(c,0,(int32_t)c->r[3],0); // 804C6BCC
  if (crb(c,2)) { goto L_804C6BD8; } // 804C6BD0
  c->r[27]=c->r[28]|c->r[28]; // 804C6BD4
L_804C6BD8:;
  c->r[28]=c->r[28]+0x0000000Cu; // 804C6BD8
L_804C6BDC:;
  cmpu(c,0,c->r[28],c->r[26]); // 804C6BDC
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6BB8; } // 804C6BE0
L_804C6BE4:;
  cmpu(c,0,c->r[27],c->r[25]); // 804C6BE4
  if (crb(c,2)) { goto L_804C6C54; } // 804C6BE8
  c->r[7]=R32(c->r[27]+0x00000000u); // 804C6BEC
  c->r[0]=R32(c->r[27]+0x00000004u); // 804C6BF0
  c->r[3]=R32(c->r[27]+0x00000008u); // 804C6BF4
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6BF8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804C6BFC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 804C6C00
  c->r[5]=R16(c->r[1]+0x0000004Cu); // 804C6C04
  c->r[0]=R16(c->r[25]+0x00000004u); // 804C6C08
  W32(c->r[1]+0x00000048u,c->r[7]); // 804C6C0C
  c->r[4]=R16(c->r[1]+0x0000004Eu); // 804C6C10
  W16(c->r[27]+0x00000004u,c->r[0]); // 804C6C14
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6C18
  c->r[6]=R16(c->r[25]+0x00000006u); // 804C6C1C
  W32(c->r[1]+0x00000050u,c->r[3]); // 804C6C20
  W16(c->r[27]+0x00000006u,c->r[6]); // 804C6C24
  c->r[3]=R16(c->r[1]+0x00000050u); // 804C6C28
  c->r[6]=R16(c->r[25]+0x00000008u); // 804C6C2C
  c->r[0]=R16(c->r[1]+0x00000052u); // 804C6C30
  W16(c->r[27]+0x00000008u,c->r[6]); // 804C6C34
  c->r[6]=R16(c->r[25]+0x0000000Au); // 804C6C38
  W16(c->r[27]+0x0000000Au,c->r[6]); // 804C6C3C
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804C6C40
  W16(c->r[25]+0x00000004u,c->r[5]); // 804C6C44
  W16(c->r[25]+0x00000006u,c->r[4]); // 804C6C48
  W16(c->r[25]+0x00000008u,c->r[3]); // 804C6C4C
  W16(c->r[25]+0x0000000Au,c->r[0]); // 804C6C50
L_804C6C54:;
  c->r[25]=c->r[25]+0x0000000Cu; // 804C6C54
L_804C6C58:;
  cmpu(c,0,c->r[25],c->r[24]); // 804C6C58
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6BA4; } // 804C6C5C
  goto L_804C70E4; // 804C6C60
L_804C6C64:;
  c->r[4]=R32(c->r[13]+0xFFFFA290u); // 804C6C64
  c->r[0]=sraw(c,c->r[7],2); // 804C6C68
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804C6C6C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 804C6C70
  c->r[6]=c->r[4]+0x00000001u; // 804C6C74
  cmps(c,0,(int32_t)c->r[6],5); // 804C6C78
  c->r[0]=sraw(c,c->r[0],1); // 804C6C7C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C6C80
  c->r[0]=c->r[0]+c->r[3]; // 804C6C84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804C6C88
  c->r[0]=c->r[4]-c->r[0]; // 804C6C8C
  c->r[0]=c->r[5]+c->r[0]; // 804C6C90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C6C94
  c->r[3]=c->r[25]+c->r[0]; // 804C6C98
  if (crb(c,0)) { goto L_804C6CA4; } // 804C6C9C
  c->r[6]=0u+0xFFFFFFFCu; // 804C6CA0
L_804C6CA4:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 804C6CA4
  c->r[0]=c->r[6]+0x00000001u; // 804C6CA8
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804C6CAC
  W32(c->r[13]+0xFFFFA290u,c->r[0]); // 804C6CB0
  cmps(c,0,(int32_t)c->r[0],5); // 804C6CB4
  c->r[0]=c->r[5]-c->r[7]; // 804C6CB8
  c->r[0]=sraw(c,c->r[0],2); // 804C6CBC
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804C6CC0
  c->r[0]=sraw(c,c->r[4],1); // 804C6CC4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804C6CC8
  c->r[0]=c->r[0]+c->r[4]; // 804C6CCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804C6CD0
  c->r[0]=c->r[6]-c->r[0]; // 804C6CD4
  c->r[0]=c->r[5]+c->r[0]; // 804C6CD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C6CDC
  c->r[4]=c->r[25]+c->r[0]; // 804C6CE0
  if (crb(c,0)) { goto L_804C6CF0; } // 804C6CE4
  c->r[6]=0u+0xFFFFFFFCu; // 804C6CE8
  W32(c->r[13]+0xFFFFA290u,c->r[6]); // 804C6CEC
L_804C6CF0:;
  c->r[27]=c->r[26]+0xFFFFFFF4u; // 804C6CF0
  c->r[6]=c->r[1]+0x00000008u; // 804C6CF4
  c->r[5]=c->r[27]|c->r[27]; // 804C6CF8
  c->lr=0x804C6D00u; f_804C76B8(c); // 804C6CFC
  c->r[29]=c->r[25]|c->r[25]; // 804C6D00
  c->r[28]=c->r[27]|c->r[27]; // 804C6D04
  goto L_804C6D10; // 804C6D08
L_804C6D0C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6D0C
L_804C6D10:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6D10
  c->r[3]=c->r[29]|c->r[29]; // 804C6D14
  c->r[4]=c->r[27]|c->r[27]; // 804C6D18
  c->ctr=c->r[12]; // 804C6D1C
  if (true) { c->lr=0x804C6D24u; dispatch(c,c->ctr); } // 804C6D20
  cmps(c,0,(int32_t)c->r[3],0); // 804C6D24
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6D0C; } // 804C6D28
L_804C6D2C:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C6D2C
  cmpu(c,0,c->r[29],c->r[28]); // 804C6D30
  if (crb(c,2)) { goto L_804C6D54; } // 804C6D34
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6D38
  c->r[3]=c->r[28]|c->r[28]; // 804C6D3C
  c->r[4]=c->r[27]|c->r[27]; // 804C6D40
  c->ctr=c->r[12]; // 804C6D44
  if (true) { c->lr=0x804C6D4Cu; dispatch(c,c->ctr); } // 804C6D48
  cmps(c,0,(int32_t)c->r[3],0); // 804C6D4C
  if (crb(c,2)) { IRQCHK(c); goto L_804C6D2C; } // 804C6D50
L_804C6D54:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C6D54
  if (!crb(c,0)) { goto L_804C6E84; } // 804C6D58
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C6D5C
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C6D60
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C6D64
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6D68
  W32(c->r[1]+0x00000040u,c->r[0]); // 804C6D6C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C6D70
  c->r[5]=R16(c->r[1]+0x00000040u); // 804C6D74
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C6D78
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 804C6D7C
  c->r[4]=R16(c->r[1]+0x00000042u); // 804C6D80
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C6D84
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6D88
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C6D8C
  W32(c->r[1]+0x00000044u,c->r[3]); // 804C6D90
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C6D94
  c->r[3]=R16(c->r[1]+0x00000044u); // 804C6D98
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C6D9C
  c->r[0]=R16(c->r[1]+0x00000046u); // 804C6DA0
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C6DA4
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C6DA8
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C6DAC
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6DB0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C6DB4
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C6DB8
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C6DBC
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C6DC0
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C6DC4
  goto L_804C6DD0; // 804C6DC8
L_804C6DCC:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6DCC
L_804C6DD0:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6DD0
  c->r[3]=c->r[29]|c->r[29]; // 804C6DD4
  c->r[4]=c->r[27]|c->r[27]; // 804C6DD8
  c->ctr=c->r[12]; // 804C6DDC
  if (true) { c->lr=0x804C6DE4u; dispatch(c,c->ctr); } // 804C6DE0
  cmps(c,0,(int32_t)c->r[3],0); // 804C6DE4
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6DCC; } // 804C6DE8
L_804C6DEC:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6DEC
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C6DF0
  c->r[3]=c->r[28]|c->r[28]; // 804C6DF4
  c->r[4]=c->r[27]|c->r[27]; // 804C6DF8
  c->ctr=c->r[12]; // 804C6DFC
  if (true) { c->lr=0x804C6E04u; dispatch(c,c->ctr); } // 804C6E00
  cmps(c,0,(int32_t)c->r[3],0); // 804C6E04
  if (crb(c,2)) { IRQCHK(c); goto L_804C6DEC; } // 804C6E08
  cmpu(c,0,c->r[29],c->r[28]); // 804C6E0C
  if (!crb(c,0)) { goto L_804C6E84; } // 804C6E10
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C6E14
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C6E18
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C6E1C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6E20
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C6E24
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C6E28
  c->r[5]=R16(c->r[1]+0x00000034u); // 804C6E2C
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C6E30
  W32(c->r[1]+0x00000030u,c->r[7]); // 804C6E34
  c->r[4]=R16(c->r[1]+0x00000036u); // 804C6E38
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C6E3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6E40
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C6E44
  W32(c->r[1]+0x00000038u,c->r[3]); // 804C6E48
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C6E4C
  c->r[3]=R16(c->r[1]+0x00000038u); // 804C6E50
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C6E54
  c->r[0]=R16(c->r[1]+0x0000003Au); // 804C6E58
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C6E5C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C6E60
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C6E64
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6E68
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C6E6C
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C6E70
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C6E74
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C6E78
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C6E7C
  IRQCHK(c); goto L_804C6DD0; // 804C6E80
L_804C6E84:;
  cmpu(c,0,c->r[29],c->r[25]); // 804C6E84
  if (!crb(c,2)) { goto L_804C7080; } // 804C6E88
  c->r[9]=R32(c->r[29]+0x00000000u); // 804C6E8C
  c->r[28]=c->r[26]+0xFFFFFFF4u; // 804C6E90
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C6E94
  c->r[3]=c->r[25]|c->r[25]; // 804C6E98
  c->r[5]=R32(c->r[29]+0x00000008u); // 804C6E9C
  c->r[4]=c->r[28]|c->r[28]; // 804C6EA0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6EA4
  W32(c->r[1]+0x00000028u,c->r[0]); // 804C6EA8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C6EAC
  c->r[7]=R16(c->r[1]+0x00000028u); // 804C6EB0
  c->r[0]=R16(c->r[27]+0x00000004u); // 804C6EB4
  W32(c->r[1]+0x00000024u,c->r[9]); // 804C6EB8
  c->r[6]=R16(c->r[1]+0x0000002Au); // 804C6EBC
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C6EC0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6EC4
  c->r[8]=R16(c->r[27]+0x00000006u); // 804C6EC8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 804C6ECC
  W16(c->r[29]+0x00000006u,c->r[8]); // 804C6ED0
  c->r[5]=R16(c->r[1]+0x0000002Cu); // 804C6ED4
  c->r[8]=R16(c->r[27]+0x00000008u); // 804C6ED8
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 804C6EDC
  W16(c->r[29]+0x00000008u,c->r[8]); // 804C6EE0
  c->r[8]=R16(c->r[27]+0x0000000Au); // 804C6EE4
  W16(c->r[29]+0x0000000Au,c->r[8]); // 804C6EE8
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 804C6EEC
  W16(c->r[27]+0x00000004u,c->r[7]); // 804C6EF0
  W16(c->r[27]+0x00000006u,c->r[6]); // 804C6EF4
  W16(c->r[27]+0x00000008u,c->r[5]); // 804C6EF8
  W16(c->r[27]+0x0000000Au,c->r[0]); // 804C6EFC
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6F00
  c->ctr=c->r[12]; // 804C6F04
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6F08
  if (true) { c->lr=0x804C6F10u; dispatch(c,c->ctr); } // 804C6F0C
  cmps(c,0,(int32_t)c->r[3],0); // 804C6F10
  if (!crb(c,2)) { goto L_804C6FB4; } // 804C6F14
  goto L_804C6F20; // 804C6F18
L_804C6F1C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6F1C
L_804C6F20:;
  cmpu(c,0,c->r[29],c->r[26]); // 804C6F20
  if (crb(c,2)) { goto L_804C6F44; } // 804C6F24
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6F28
  c->r[3]=c->r[25]|c->r[25]; // 804C6F2C
  c->r[4]=c->r[29]|c->r[29]; // 804C6F30
  c->ctr=c->r[12]; // 804C6F34
  if (true) { c->lr=0x804C6F3Cu; dispatch(c,c->ctr); } // 804C6F38
  cmps(c,0,(int32_t)c->r[3],0); // 804C6F3C
  if (crb(c,2)) { IRQCHK(c); goto L_804C6F1C; } // 804C6F40
L_804C6F44:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C6F44
  if (!crb(c,0)) { goto L_804C6FB4; } // 804C6F48
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C6F4C
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C6F50
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C6F54
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6F58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804C6F5C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C6F60
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 804C6F64
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C6F68
  W32(c->r[1]+0x00000018u,c->r[7]); // 804C6F6C
  c->r[4]=R16(c->r[1]+0x0000001Eu); // 804C6F70
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C6F74
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C6F78
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C6F7C
  W32(c->r[1]+0x00000020u,c->r[3]); // 804C6F80
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C6F84
  c->r[3]=R16(c->r[1]+0x00000020u); // 804C6F88
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C6F8C
  c->r[0]=R16(c->r[1]+0x00000022u); // 804C6F90
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C6F94
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C6F98
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C6F9C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C6FA0
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C6FA4
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C6FA8
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C6FAC
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C6FB0
L_804C6FB4:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C6FB4
  if (!crb(c,0)) { goto L_804C7078; } // 804C6FB8
  goto L_804C6FC4; // 804C6FBC
L_804C6FC0:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C6FC0
L_804C6FC4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6FC4
  c->r[3]=c->r[25]|c->r[25]; // 804C6FC8
  c->r[4]=c->r[29]|c->r[29]; // 804C6FCC
  c->ctr=c->r[12]; // 804C6FD0
  if (true) { c->lr=0x804C6FD8u; dispatch(c,c->ctr); } // 804C6FD4
  cmps(c,0,(int32_t)c->r[3],0); // 804C6FD8
  if (crb(c,2)) { IRQCHK(c); goto L_804C6FC0; } // 804C6FDC
L_804C6FE0:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804C6FE0
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C6FE4
  c->r[3]=c->r[25]|c->r[25]; // 804C6FE8
  c->r[4]=c->r[28]|c->r[28]; // 804C6FEC
  c->ctr=c->r[12]; // 804C6FF0
  if (true) { c->lr=0x804C6FF8u; dispatch(c,c->ctr); } // 804C6FF4
  cmps(c,0,(int32_t)c->r[3],0); // 804C6FF8
  if (!crb(c,2)) { IRQCHK(c); goto L_804C6FE0; } // 804C6FFC
  cmpu(c,0,c->r[29],c->r[28]); // 804C7000
  if (!crb(c,0)) { goto L_804C7078; } // 804C7004
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C7008
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C700C
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C7010
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7014
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C7018
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C701C
  c->r[5]=R16(c->r[1]+0x00000010u); // 804C7020
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C7024
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 804C7028
  c->r[4]=R16(c->r[1]+0x00000012u); // 804C702C
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C7030
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7034
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C7038
  W32(c->r[1]+0x00000014u,c->r[3]); // 804C703C
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C7040
  c->r[3]=R16(c->r[1]+0x00000014u); // 804C7044
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C7048
  c->r[0]=R16(c->r[1]+0x00000016u); // 804C704C
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7050
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C7054
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7058
  c->r[29]=c->r[29]+0x0000000Cu; // 804C705C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C7060
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C7064
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C7068
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C706C
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C7070
  IRQCHK(c); goto L_804C6FC4; // 804C7074
L_804C7078:;
  c->r[25]=c->r[29]|c->r[29]; // 804C7078
  IRQCHK(c); goto L_804C6B70; // 804C707C
L_804C7080:;
  c->r[0]=c->r[29]-c->r[25]; // 804C7080
  c->r[4]=c->r[24]+0xFFFFAAABu; // 804C7084
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804C7088
  c->r[0]=c->r[26]-c->r[29]; // 804C708C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804C7090
  c->r[3]=sraw(c,c->r[3],1); // 804C7094
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 804C7098
  c->r[0]=sraw(c,c->r[0],1); // 804C709C
  c->r[4]=c->r[3]+c->r[4]; // 804C70A0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C70A4
  c->r[0]=c->r[0]+c->r[3]; // 804C70A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804C70AC
  if (!crb(c,0)) { goto L_804C70CC; } // 804C70B0
  c->r[3]=c->r[25]|c->r[25]; // 804C70B4
  c->r[4]=c->r[29]|c->r[29]; // 804C70B8
  c->r[5]=c->r[1]+0x00000008u; // 804C70BC
  c->lr=0x804C70C4u; f_804C70FC(c); // 804C70C0
  c->r[25]=c->r[29]|c->r[29]; // 804C70C4
  IRQCHK(c); goto L_804C6B70; // 804C70C8
L_804C70CC:;
  c->r[3]=c->r[29]|c->r[29]; // 804C70CC
  c->r[4]=c->r[26]|c->r[26]; // 804C70D0
  c->r[5]=c->r[1]+0x00000008u; // 804C70D4
  c->lr=0x804C70DCu; f_804C70FC(c); // 804C70D8
  c->r[26]=c->r[29]|c->r[29]; // 804C70DC
  IRQCHK(c); goto L_804C6B70; // 804C70E0
L_804C70E4:;
  c->r[11]=c->r[1]+0x00000080u; // 804C70E4
  c->lr=0x804C70ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C70E8
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C70EC
  c->lr=c->r[0]; // 804C70F0
  c->r[1]=c->r[1]+0x00000080u; // 804C70F4
  return; // 804C70F8
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_804C70FC(Ctx* __restrict c) {
  trace_call(0x804C70FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C70FC
  c->r[0]=c->lr; // 804C7100
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C7104
  c->r[11]=c->r[1]+0x00000080u; // 804C7108
  c->lr=0x804C7110u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C710C
  c->r[23]=0u+0x2AAB0000u; // 804C7110
  c->r[6]=0u+0x66660000u; // 804C7114
  c->r[24]=c->r[3]|c->r[3]; // 804C7118
  c->r[25]=c->r[4]|c->r[4]; // 804C711C
  c->r[26]=c->r[5]|c->r[5]; // 804C7120
  c->r[31]=c->r[6]+0x00006667u; // 804C7124
  c->r[30]=c->r[23]+0xFFFFAAABu; // 804C7128
L_804C712C:;
  c->r[0]=c->r[25]-c->r[24]; // 804C712C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 804C7130
  c->r[0]=sraw(c,c->r[0],1); // 804C7134
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C7138
  c->r[7]=c->r[0]+c->r[3]; // 804C713C
  cmps(c,0,(int32_t)c->r[7],1); // 804C7140
  if (!crb(c,1)) { goto L_804C76A0; } // 804C7144
  cmps(c,0,(int32_t)c->r[7],20); // 804C7148
  if (crb(c,1)) { goto L_804C7220; } // 804C714C
  cmpu(c,0,c->r[24],c->r[25]); // 804C7150
  if (crb(c,2)) { goto L_804C76A0; } // 804C7154
  c->r[23]=c->r[25]+0xFFFFFFF4u; // 804C7158
  goto L_804C7214; // 804C715C
L_804C7160:;
  cmpu(c,0,c->r[24],c->r[25]); // 804C7160
  c->r[27]=c->r[24]|c->r[24]; // 804C7164
  if (crb(c,2)) { goto L_804C71A0; } // 804C7168
  c->r[28]=c->r[24]+0x0000000Cu; // 804C716C
  goto L_804C7198; // 804C7170
L_804C7174:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C7174
  c->r[3]=c->r[28]|c->r[28]; // 804C7178
  c->r[4]=c->r[27]|c->r[27]; // 804C717C
  c->ctr=c->r[12]; // 804C7180
  if (true) { c->lr=0x804C7188u; dispatch(c,c->ctr); } // 804C7184
  cmps(c,0,(int32_t)c->r[3],0); // 804C7188
  if (crb(c,2)) { goto L_804C7194; } // 804C718C
  c->r[27]=c->r[28]|c->r[28]; // 804C7190
L_804C7194:;
  c->r[28]=c->r[28]+0x0000000Cu; // 804C7194
L_804C7198:;
  cmpu(c,0,c->r[28],c->r[25]); // 804C7198
  if (!crb(c,2)) { IRQCHK(c); goto L_804C7174; } // 804C719C
L_804C71A0:;
  cmpu(c,0,c->r[27],c->r[24]); // 804C71A0
  if (crb(c,2)) { goto L_804C7210; } // 804C71A4
  c->r[7]=R32(c->r[27]+0x00000000u); // 804C71A8
  c->r[0]=R32(c->r[27]+0x00000004u); // 804C71AC
  c->r[3]=R32(c->r[27]+0x00000008u); // 804C71B0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C71B4
  W32(c->r[1]+0x00000048u,c->r[0]); // 804C71B8
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 804C71BC
  c->r[5]=R16(c->r[1]+0x00000048u); // 804C71C0
  c->r[0]=R16(c->r[24]+0x00000004u); // 804C71C4
  W32(c->r[1]+0x00000044u,c->r[7]); // 804C71C8
  c->r[4]=R16(c->r[1]+0x0000004Au); // 804C71CC
  W16(c->r[27]+0x00000004u,c->r[0]); // 804C71D0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C71D4
  c->r[6]=R16(c->r[24]+0x00000006u); // 804C71D8
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 804C71DC
  W16(c->r[27]+0x00000006u,c->r[6]); // 804C71E0
  c->r[3]=R16(c->r[1]+0x0000004Cu); // 804C71E4
  c->r[6]=R16(c->r[24]+0x00000008u); // 804C71E8
  c->r[0]=R16(c->r[1]+0x0000004Eu); // 804C71EC
  W16(c->r[27]+0x00000008u,c->r[6]); // 804C71F0
  c->r[6]=R16(c->r[24]+0x0000000Au); // 804C71F4
  W16(c->r[27]+0x0000000Au,c->r[6]); // 804C71F8
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 804C71FC
  W16(c->r[24]+0x00000004u,c->r[5]); // 804C7200
  W16(c->r[24]+0x00000006u,c->r[4]); // 804C7204
  W16(c->r[24]+0x00000008u,c->r[3]); // 804C7208
  W16(c->r[24]+0x0000000Au,c->r[0]); // 804C720C
L_804C7210:;
  c->r[24]=c->r[24]+0x0000000Cu; // 804C7210
L_804C7214:;
  cmpu(c,0,c->r[24],c->r[23]); // 804C7214
  if (!crb(c,2)) { IRQCHK(c); goto L_804C7160; } // 804C7218
  goto L_804C76A0; // 804C721C
L_804C7220:;
  c->r[4]=R32(c->r[13]+0xFFFFA294u); // 804C7220
  c->r[0]=sraw(c,c->r[7],2); // 804C7224
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804C7228
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 804C722C
  c->r[6]=c->r[4]+0x00000001u; // 804C7230
  cmps(c,0,(int32_t)c->r[6],5); // 804C7234
  c->r[0]=sraw(c,c->r[0],1); // 804C7238
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C723C
  c->r[0]=c->r[0]+c->r[3]; // 804C7240
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804C7244
  c->r[0]=c->r[4]-c->r[0]; // 804C7248
  c->r[0]=c->r[5]+c->r[0]; // 804C724C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C7250
  c->r[3]=c->r[24]+c->r[0]; // 804C7254
  if (crb(c,0)) { goto L_804C7260; } // 804C7258
  c->r[6]=0u+0xFFFFFFFCu; // 804C725C
L_804C7260:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 804C7260
  c->r[0]=c->r[6]+0x00000001u; // 804C7264
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804C7268
  W32(c->r[13]+0xFFFFA294u,c->r[0]); // 804C726C
  cmps(c,0,(int32_t)c->r[0],5); // 804C7270
  c->r[0]=c->r[5]-c->r[7]; // 804C7274
  c->r[0]=sraw(c,c->r[0],2); // 804C7278
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804C727C
  c->r[0]=sraw(c,c->r[4],1); // 804C7280
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804C7284
  c->r[0]=c->r[0]+c->r[4]; // 804C7288
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804C728C
  c->r[0]=c->r[6]-c->r[0]; // 804C7290
  c->r[0]=c->r[5]+c->r[0]; // 804C7294
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804C7298
  c->r[4]=c->r[24]+c->r[0]; // 804C729C
  if (crb(c,0)) { goto L_804C72AC; } // 804C72A0
  c->r[6]=0u+0xFFFFFFFCu; // 804C72A4
  W32(c->r[13]+0xFFFFA294u,c->r[6]); // 804C72A8
L_804C72AC:;
  c->r[27]=c->r[25]+0xFFFFFFF4u; // 804C72AC
  c->r[6]=c->r[26]|c->r[26]; // 804C72B0
  c->r[5]=c->r[27]|c->r[27]; // 804C72B4
  c->lr=0x804C72BCu; f_804C76B8(c); // 804C72B8
  c->r[29]=c->r[24]|c->r[24]; // 804C72BC
  c->r[28]=c->r[27]|c->r[27]; // 804C72C0
  goto L_804C72CC; // 804C72C4
L_804C72C8:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C72C8
L_804C72CC:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C72CC
  c->r[3]=c->r[29]|c->r[29]; // 804C72D0
  c->r[4]=c->r[27]|c->r[27]; // 804C72D4
  c->ctr=c->r[12]; // 804C72D8
  if (true) { c->lr=0x804C72E0u; dispatch(c,c->ctr); } // 804C72DC
  cmps(c,0,(int32_t)c->r[3],0); // 804C72E0
  if (!crb(c,2)) { IRQCHK(c); goto L_804C72C8; } // 804C72E4
L_804C72E8:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C72E8
  cmpu(c,0,c->r[29],c->r[28]); // 804C72EC
  if (crb(c,2)) { goto L_804C7310; } // 804C72F0
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C72F4
  c->r[3]=c->r[28]|c->r[28]; // 804C72F8
  c->r[4]=c->r[27]|c->r[27]; // 804C72FC
  c->ctr=c->r[12]; // 804C7300
  if (true) { c->lr=0x804C7308u; dispatch(c,c->ctr); } // 804C7304
  cmps(c,0,(int32_t)c->r[3],0); // 804C7308
  if (crb(c,2)) { IRQCHK(c); goto L_804C72E8; } // 804C730C
L_804C7310:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C7310
  if (!crb(c,0)) { goto L_804C7440; } // 804C7314
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C7318
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C731C
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C7320
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7324
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804C7328
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C732C
  c->r[5]=R16(c->r[1]+0x0000003Cu); // 804C7330
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C7334
  W32(c->r[1]+0x00000038u,c->r[7]); // 804C7338
  c->r[4]=R16(c->r[1]+0x0000003Eu); // 804C733C
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C7340
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7344
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C7348
  W32(c->r[1]+0x00000040u,c->r[3]); // 804C734C
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C7350
  c->r[3]=R16(c->r[1]+0x00000040u); // 804C7354
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C7358
  c->r[0]=R16(c->r[1]+0x00000042u); // 804C735C
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7360
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C7364
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7368
  c->r[29]=c->r[29]+0x0000000Cu; // 804C736C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C7370
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C7374
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C7378
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C737C
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C7380
  goto L_804C738C; // 804C7384
L_804C7388:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C7388
L_804C738C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C738C
  c->r[3]=c->r[29]|c->r[29]; // 804C7390
  c->r[4]=c->r[27]|c->r[27]; // 804C7394
  c->ctr=c->r[12]; // 804C7398
  if (true) { c->lr=0x804C73A0u; dispatch(c,c->ctr); } // 804C739C
  cmps(c,0,(int32_t)c->r[3],0); // 804C73A0
  if (!crb(c,2)) { IRQCHK(c); goto L_804C7388; } // 804C73A4
L_804C73A8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C73A8
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C73AC
  c->r[3]=c->r[28]|c->r[28]; // 804C73B0
  c->r[4]=c->r[27]|c->r[27]; // 804C73B4
  c->ctr=c->r[12]; // 804C73B8
  if (true) { c->lr=0x804C73C0u; dispatch(c,c->ctr); } // 804C73BC
  cmps(c,0,(int32_t)c->r[3],0); // 804C73C0
  if (crb(c,2)) { IRQCHK(c); goto L_804C73A8; } // 804C73C4
  cmpu(c,0,c->r[29],c->r[28]); // 804C73C8
  if (!crb(c,0)) { goto L_804C7440; } // 804C73CC
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C73D0
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C73D4
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C73D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C73DC
  W32(c->r[1]+0x00000030u,c->r[0]); // 804C73E0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C73E4
  c->r[5]=R16(c->r[1]+0x00000030u); // 804C73E8
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C73EC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 804C73F0
  c->r[4]=R16(c->r[1]+0x00000032u); // 804C73F4
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C73F8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C73FC
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C7400
  W32(c->r[1]+0x00000034u,c->r[3]); // 804C7404
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C7408
  c->r[3]=R16(c->r[1]+0x00000034u); // 804C740C
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C7410
  c->r[0]=R16(c->r[1]+0x00000036u); // 804C7414
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7418
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C741C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7420
  c->r[29]=c->r[29]+0x0000000Cu; // 804C7424
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C7428
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C742C
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C7430
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C7434
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C7438
  IRQCHK(c); goto L_804C738C; // 804C743C
L_804C7440:;
  cmpu(c,0,c->r[29],c->r[24]); // 804C7440
  if (!crb(c,2)) { goto L_804C763C; } // 804C7444
  c->r[9]=R32(c->r[29]+0x00000000u); // 804C7448
  c->r[28]=c->r[25]+0xFFFFFFF4u; // 804C744C
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C7450
  c->r[3]=c->r[24]|c->r[24]; // 804C7454
  c->r[5]=R32(c->r[29]+0x00000008u); // 804C7458
  c->r[4]=c->r[28]|c->r[28]; // 804C745C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7460
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C7464
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C7468
  c->r[7]=R16(c->r[1]+0x00000024u); // 804C746C
  c->r[0]=R16(c->r[27]+0x00000004u); // 804C7470
  W32(c->r[1]+0x00000020u,c->r[9]); // 804C7474
  c->r[6]=R16(c->r[1]+0x00000026u); // 804C7478
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C747C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7480
  c->r[8]=R16(c->r[27]+0x00000006u); // 804C7484
  W32(c->r[1]+0x00000028u,c->r[5]); // 804C7488
  W16(c->r[29]+0x00000006u,c->r[8]); // 804C748C
  c->r[5]=R16(c->r[1]+0x00000028u); // 804C7490
  c->r[8]=R16(c->r[27]+0x00000008u); // 804C7494
  c->r[0]=R16(c->r[1]+0x0000002Au); // 804C7498
  W16(c->r[29]+0x00000008u,c->r[8]); // 804C749C
  c->r[8]=R16(c->r[27]+0x0000000Au); // 804C74A0
  W16(c->r[29]+0x0000000Au,c->r[8]); // 804C74A4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 804C74A8
  W16(c->r[27]+0x00000004u,c->r[7]); // 804C74AC
  W16(c->r[27]+0x00000006u,c->r[6]); // 804C74B0
  W16(c->r[27]+0x00000008u,c->r[5]); // 804C74B4
  W16(c->r[27]+0x0000000Au,c->r[0]); // 804C74B8
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C74BC
  c->ctr=c->r[12]; // 804C74C0
  c->r[29]=c->r[29]+0x0000000Cu; // 804C74C4
  if (true) { c->lr=0x804C74CCu; dispatch(c,c->ctr); } // 804C74C8
  cmps(c,0,(int32_t)c->r[3],0); // 804C74CC
  if (!crb(c,2)) { goto L_804C7570; } // 804C74D0
  goto L_804C74DC; // 804C74D4
L_804C74D8:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C74D8
L_804C74DC:;
  cmpu(c,0,c->r[29],c->r[25]); // 804C74DC
  if (crb(c,2)) { goto L_804C7500; } // 804C74E0
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C74E4
  c->r[3]=c->r[24]|c->r[24]; // 804C74E8
  c->r[4]=c->r[29]|c->r[29]; // 804C74EC
  c->ctr=c->r[12]; // 804C74F0
  if (true) { c->lr=0x804C74F8u; dispatch(c,c->ctr); } // 804C74F4
  cmps(c,0,(int32_t)c->r[3],0); // 804C74F8
  if (crb(c,2)) { IRQCHK(c); goto L_804C74D8; } // 804C74FC
L_804C7500:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C7500
  if (!crb(c,0)) { goto L_804C7570; } // 804C7504
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C7508
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C750C
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C7510
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7514
  W32(c->r[1]+0x00000018u,c->r[0]); // 804C7518
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C751C
  c->r[5]=R16(c->r[1]+0x00000018u); // 804C7520
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C7524
  W32(c->r[1]+0x00000014u,c->r[7]); // 804C7528
  c->r[4]=R16(c->r[1]+0x0000001Au); // 804C752C
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C7530
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7534
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C7538
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804C753C
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C7540
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 804C7544
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C7548
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 804C754C
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7550
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C7554
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7558
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C755C
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C7560
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C7564
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C7568
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C756C
L_804C7570:;
  cmpu(c,0,c->r[29],c->r[28]); // 804C7570
  if (!crb(c,0)) { goto L_804C7634; } // 804C7574
  goto L_804C7580; // 804C7578
L_804C757C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 804C757C
L_804C7580:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C7580
  c->r[3]=c->r[24]|c->r[24]; // 804C7584
  c->r[4]=c->r[29]|c->r[29]; // 804C7588
  c->ctr=c->r[12]; // 804C758C
  if (true) { c->lr=0x804C7594u; dispatch(c,c->ctr); } // 804C7590
  cmps(c,0,(int32_t)c->r[3],0); // 804C7594
  if (crb(c,2)) { IRQCHK(c); goto L_804C757C; } // 804C7598
L_804C759C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804C759C
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 804C75A0
  c->r[3]=c->r[24]|c->r[24]; // 804C75A4
  c->r[4]=c->r[28]|c->r[28]; // 804C75A8
  c->ctr=c->r[12]; // 804C75AC
  if (true) { c->lr=0x804C75B4u; dispatch(c,c->ctr); } // 804C75B0
  cmps(c,0,(int32_t)c->r[3],0); // 804C75B4
  if (!crb(c,2)) { IRQCHK(c); goto L_804C759C; } // 804C75B8
  cmpu(c,0,c->r[29],c->r[28]); // 804C75BC
  if (!crb(c,0)) { goto L_804C7634; } // 804C75C0
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C75C4
  c->r[0]=R32(c->r[29]+0x00000004u); // 804C75C8
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C75CC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C75D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804C75D4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C75D8
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 804C75DC
  c->r[0]=R16(c->r[28]+0x00000004u); // 804C75E0
  W32(c->r[1]+0x00000008u,c->r[7]); // 804C75E4
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 804C75E8
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C75EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C75F0
  c->r[6]=R16(c->r[28]+0x00000006u); // 804C75F4
  W32(c->r[1]+0x00000010u,c->r[3]); // 804C75F8
  W16(c->r[29]+0x00000006u,c->r[6]); // 804C75FC
  c->r[3]=R16(c->r[1]+0x00000010u); // 804C7600
  c->r[6]=R16(c->r[28]+0x00000008u); // 804C7604
  c->r[0]=R16(c->r[1]+0x00000012u); // 804C7608
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C760C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 804C7610
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7614
  c->r[29]=c->r[29]+0x0000000Cu; // 804C7618
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 804C761C
  W16(c->r[28]+0x00000004u,c->r[5]); // 804C7620
  W16(c->r[28]+0x00000006u,c->r[4]); // 804C7624
  W16(c->r[28]+0x00000008u,c->r[3]); // 804C7628
  W16(c->r[28]+0x0000000Au,c->r[0]); // 804C762C
  IRQCHK(c); goto L_804C7580; // 804C7630
L_804C7634:;
  c->r[24]=c->r[29]|c->r[29]; // 804C7634
  IRQCHK(c); goto L_804C712C; // 804C7638
L_804C763C:;
  c->r[0]=c->r[29]-c->r[24]; // 804C763C
  c->r[4]=c->r[23]+0xFFFFAAABu; // 804C7640
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804C7644
  c->r[0]=c->r[25]-c->r[29]; // 804C7648
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804C764C
  c->r[3]=sraw(c,c->r[3],1); // 804C7650
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 804C7654
  c->r[0]=sraw(c,c->r[0],1); // 804C7658
  c->r[4]=c->r[3]+c->r[4]; // 804C765C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804C7660
  c->r[0]=c->r[0]+c->r[3]; // 804C7664
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804C7668
  if (!crb(c,0)) { goto L_804C7688; } // 804C766C
  c->r[3]=c->r[24]|c->r[24]; // 804C7670
  c->r[4]=c->r[29]|c->r[29]; // 804C7674
  c->r[5]=c->r[26]|c->r[26]; // 804C7678
  c->lr=0x804C7680u; f_804C70FC(c); // 804C767C
  c->r[24]=c->r[29]|c->r[29]; // 804C7680
  IRQCHK(c); goto L_804C712C; // 804C7684
L_804C7688:;
  c->r[3]=c->r[29]|c->r[29]; // 804C7688
  c->r[4]=c->r[25]|c->r[25]; // 804C768C
  c->r[5]=c->r[26]|c->r[26]; // 804C7690
  c->lr=0x804C7698u; f_804C70FC(c); // 804C7694
  c->r[25]=c->r[29]|c->r[29]; // 804C7698
  IRQCHK(c); goto L_804C712C; // 804C769C
L_804C76A0:;
  c->r[11]=c->r[1]+0x00000080u; // 804C76A0
  c->lr=0x804C76A8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C76A4
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C76A8
  c->lr=c->r[0]; // 804C76AC
  c->r[1]=c->r[1]+0x00000080u; // 804C76B0
  return; // 804C76B4
}

// __sort132<RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b,PQ54nw4r3g3d6detail7workmem4MdlZ>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_804C76B8(Ctx* __restrict c) {
  trace_call(0x804C76B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C76B8
  c->r[0]=c->lr; // 804C76BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C76C0
  c->r[11]=c->r[1]+0x00000050u; // 804C76C4
  c->lr=0x804C76CCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C76C8
  c->r[12]=R32(c->r[6]+0x00000000u); // 804C76CC
  c->r[29]=c->r[3]|c->r[3]; // 804C76D0
  c->r[31]=c->r[5]|c->r[5]; // 804C76D4
  c->r[30]=c->r[4]|c->r[4]; // 804C76D8
  c->r[27]=c->r[6]|c->r[6]; // 804C76DC
  c->r[4]=c->r[29]|c->r[29]; // 804C76E0
  c->r[3]=c->r[31]|c->r[31]; // 804C76E4
  c->ctr=c->r[12]; // 804C76E8
  if (true) { c->lr=0x804C76F0u; dispatch(c,c->ctr); } // 804C76EC
  c->r[12]=R32(c->r[27]+0x00000000u); // 804C76F0
  c->r[0]=cntlz(c->r[3]); // 804C76F4
  c->r[3]=c->r[30]|c->r[30]; // 804C76F8
  c->r[4]=c->r[31]|c->r[31]; // 804C76FC
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C7700
  c->ctr=c->r[12]; // 804C7704
  if (true) { c->lr=0x804C770Cu; dispatch(c,c->ctr); } // 804C7708
  cmps(c,0,(int32_t)c->r[28],0); // 804C770C
  c->r[0]=cntlz(c->r[3]); // 804C7710
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804C7714
  if (crb(c,2)) { goto L_804C7724; } // 804C7718
  cmps(c,0,(int32_t)c->r[0],0); // 804C771C
  if (!crb(c,2)) { goto L_804C7900; } // 804C7720
L_804C7724:;
  cmps(c,0,(int32_t)c->r[28],0); // 804C7724
  if (!crb(c,2)) { goto L_804C77A0; } // 804C7728
  cmps(c,0,(int32_t)c->r[0],0); // 804C772C
  if (!crb(c,2)) { goto L_804C77A0; } // 804C7730
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C7734
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7738
  c->r[4]=R32(c->r[29]+0x00000004u); // 804C773C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C7740
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C7744
  c->r[0]=R16(c->r[30]+0x00000004u); // 804C7748
  W32(c->r[1]+0x00000030u,c->r[4]); // 804C774C
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C7750
  c->r[5]=R16(c->r[1]+0x00000030u); // 804C7754
  c->r[0]=R16(c->r[30]+0x00000006u); // 804C7758
  W32(c->r[1]+0x00000034u,c->r[3]); // 804C775C
  c->r[4]=R16(c->r[1]+0x00000032u); // 804C7760
  W16(c->r[29]+0x00000006u,c->r[0]); // 804C7764
  c->r[3]=R16(c->r[1]+0x00000034u); // 804C7768
  c->r[6]=R16(c->r[30]+0x00000008u); // 804C776C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 804C7770
  c->r[0]=R16(c->r[1]+0x00000036u); // 804C7774
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7778
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C777C
  c->r[6]=R16(c->r[30]+0x0000000Au); // 804C7780
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C7784
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C7788
  W16(c->r[30]+0x00000004u,c->r[5]); // 804C778C
  W16(c->r[30]+0x00000006u,c->r[4]); // 804C7790
  W16(c->r[30]+0x00000008u,c->r[3]); // 804C7794
  W16(c->r[30]+0x0000000Au,c->r[0]); // 804C7798
  goto L_804C7900; // 804C779C
L_804C77A0:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 804C77A0
  c->r[3]=c->r[30]|c->r[30]; // 804C77A4
  c->r[4]=c->r[29]|c->r[29]; // 804C77A8
  c->ctr=c->r[12]; // 804C77AC
  if (true) { c->lr=0x804C77B4u; dispatch(c,c->ctr); } // 804C77B0
  cmps(c,0,(int32_t)c->r[3],0); // 804C77B4
  if (crb(c,2)) { goto L_804C7824; } // 804C77B8
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C77BC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C77C0
  c->r[4]=R32(c->r[29]+0x00000004u); // 804C77C4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C77C8
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C77CC
  c->r[0]=R16(c->r[30]+0x00000004u); // 804C77D0
  W32(c->r[1]+0x00000024u,c->r[4]); // 804C77D4
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C77D8
  c->r[5]=R16(c->r[1]+0x00000024u); // 804C77DC
  c->r[0]=R16(c->r[30]+0x00000006u); // 804C77E0
  W32(c->r[1]+0x00000028u,c->r[3]); // 804C77E4
  c->r[4]=R16(c->r[1]+0x00000026u); // 804C77E8
  W16(c->r[29]+0x00000006u,c->r[0]); // 804C77EC
  c->r[3]=R16(c->r[1]+0x00000028u); // 804C77F0
  c->r[6]=R16(c->r[30]+0x00000008u); // 804C77F4
  W32(c->r[1]+0x00000020u,c->r[7]); // 804C77F8
  c->r[0]=R16(c->r[1]+0x0000002Au); // 804C77FC
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C7800
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7804
  c->r[6]=R16(c->r[30]+0x0000000Au); // 804C7808
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C780C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C7810
  W16(c->r[30]+0x00000004u,c->r[5]); // 804C7814
  W16(c->r[30]+0x00000006u,c->r[4]); // 804C7818
  W16(c->r[30]+0x00000008u,c->r[3]); // 804C781C
  W16(c->r[30]+0x0000000Au,c->r[0]); // 804C7820
L_804C7824:;
  cmps(c,0,(int32_t)c->r[28],0); // 804C7824
  if (crb(c,2)) { goto L_804C7898; } // 804C7828
  c->r[7]=R32(c->r[30]+0x00000000u); // 804C782C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7830
  c->r[4]=R32(c->r[30]+0x00000004u); // 804C7834
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C7838
  c->r[3]=R32(c->r[30]+0x00000008u); // 804C783C
  c->r[0]=R16(c->r[31]+0x00000004u); // 804C7840
  W32(c->r[1]+0x00000018u,c->r[4]); // 804C7844
  W16(c->r[30]+0x00000004u,c->r[0]); // 804C7848
  c->r[5]=R16(c->r[1]+0x00000018u); // 804C784C
  c->r[0]=R16(c->r[31]+0x00000006u); // 804C7850
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804C7854
  c->r[4]=R16(c->r[1]+0x0000001Au); // 804C7858
  W16(c->r[30]+0x00000006u,c->r[0]); // 804C785C
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 804C7860
  c->r[6]=R16(c->r[31]+0x00000008u); // 804C7864
  W32(c->r[1]+0x00000014u,c->r[7]); // 804C7868
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 804C786C
  W16(c->r[30]+0x00000008u,c->r[6]); // 804C7870
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7874
  c->r[6]=R16(c->r[31]+0x0000000Au); // 804C7878
  W16(c->r[30]+0x0000000Au,c->r[6]); // 804C787C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804C7880
  W16(c->r[31]+0x00000004u,c->r[5]); // 804C7884
  W16(c->r[31]+0x00000006u,c->r[4]); // 804C7888
  W16(c->r[31]+0x00000008u,c->r[3]); // 804C788C
  W16(c->r[31]+0x0000000Au,c->r[0]); // 804C7890
  goto L_804C7900; // 804C7894
L_804C7898:;
  c->r[7]=R32(c->r[29]+0x00000000u); // 804C7898
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C789C
  c->r[4]=R32(c->r[29]+0x00000004u); // 804C78A0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C78A4
  c->r[3]=R32(c->r[29]+0x00000008u); // 804C78A8
  c->r[0]=R16(c->r[31]+0x00000004u); // 804C78AC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804C78B0
  W16(c->r[29]+0x00000004u,c->r[0]); // 804C78B4
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 804C78B8
  c->r[0]=R16(c->r[31]+0x00000006u); // 804C78BC
  W32(c->r[1]+0x00000010u,c->r[3]); // 804C78C0
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 804C78C4
  W16(c->r[29]+0x00000006u,c->r[0]); // 804C78C8
  c->r[3]=R16(c->r[1]+0x00000010u); // 804C78CC
  c->r[6]=R16(c->r[31]+0x00000008u); // 804C78D0
  W32(c->r[1]+0x00000008u,c->r[7]); // 804C78D4
  c->r[0]=R16(c->r[1]+0x00000012u); // 804C78D8
  W16(c->r[29]+0x00000008u,c->r[6]); // 804C78DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C78E0
  c->r[6]=R16(c->r[31]+0x0000000Au); // 804C78E4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 804C78E8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804C78EC
  W16(c->r[31]+0x00000004u,c->r[5]); // 804C78F0
  W16(c->r[31]+0x00000006u,c->r[4]); // 804C78F4
  W16(c->r[31]+0x00000008u,c->r[3]); // 804C78F8
  W16(c->r[31]+0x0000000Au,c->r[0]); // 804C78FC
L_804C7900:;
  c->r[11]=c->r[1]+0x00000050u; // 804C7900
  c->lr=0x804C7908u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C7904
  c->r[0]=R32(c->r[1]+0x00000054u); // 804C7908
  c->lr=c->r[0]; // 804C790C
  c->r[1]=c->r[1]+0x00000050u; // 804C7910
  return; // 804C7914
}

// __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
void f_804C7918(Ctx* __restrict c) {
  trace_call(0x804C7918u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 804C7918
  return; // 804C791C
}

// Init__Q34nw4r3g3d6CameraFv
void f_804C7920(Ctx* __restrict c) {
  trace_call(0x804C7920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C7920
  c->r[0]=c->lr; // 804C7924
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C7928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C792C
  c->r[31]=c->r[3]|c->r[3]; // 804C7930
  c->lr=0x804C7938u; f_804C17F8(c); // 804C7934
  c->r[9]=c->r[3]|c->r[3]; // 804C7938
  c->r[4]=R16(c->r[3]+0x00000004u); // 804C793C
  c->r[5]=R16(c->r[3]+0x00000006u); // 804C7940
  c->r[3]=c->r[31]|c->r[31]; // 804C7944
  c->r[7]=R16(c->r[9]+0x00000008u); // 804C7948
  c->r[6]=c->r[4]|c->r[4]; // 804C794C
  c->r[8]=R16(c->r[9]+0x0000000Eu); // 804C7950
  c->r[9]=R16(c->r[9]+0x00000010u); // 804C7954
  c->lr=0x804C795Cu; f_804C7970(c); // 804C7958
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C795C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C7960
  c->lr=c->r[0]; // 804C7964
  c->r[1]=c->r[1]+0x00000010u; // 804C7968
  return; // 804C796C
}

// Init__Q34nw4r3g3d6CameraFUsUsUsUsUsUs
void f_804C7970(Ctx* __restrict c) {
  trace_call(0x804C7970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C7970
  c->r[0]=0u+0x43300000u; // 804C7974
  c->r[10]=R32(c->r[3]+0x00000000u); // 804C7978
  W32(c->r[1]+0x00000008u,c->r[0]); // 804C797C
  cmps(c,0,(int32_t)c->r[10],0); // 804C7980
  W32(c->r[1]+0x00000010u,c->r[0]); // 804C7984
  if (crb(c,2)) { goto L_804C7A84; } // 804C7988
  c->r[3]=0u+0x00000021u; // 804C798C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 804C7990
  {uint32_t ea=c->r[2]+0x00001680u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C7994
  c->r[0]=0u+0x00000000u; // 804C7998
  W32(c->r[10]+0x00000070u,c->r[3]); // 804C799C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804C79A0
  {uint32_t ea=c->r[10]+0x00000074u; WF32(ea,c->f[8]);} // 804C79A4
  {uint32_t ea=c->r[2]+0x00001684u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C79A8
  {uint32_t ea=c->r[10]+0x00000078u; WF32(ea,c->f[8]);} // 804C79AC
  {uint32_t ea=c->r[2]+0x000016A0u; c->f[3]=RF64(ea);} // 804C79B0
  {uint32_t ea=c->r[10]+0x0000007Cu; WF32(ea,c->f[1]);} // 804C79B4
  {uint32_t ea=c->r[2]+0x00001688u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C79B8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804C79BC
  {uint32_t ea=c->r[10]+0x00000080u; WF32(ea,c->f[8]);} // 804C79C0
  {uint32_t ea=c->r[2]+0x0000168Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C79C4
  {uint32_t ea=c->r[10]+0x00000084u; WF32(ea,c->f[7]);} // 804C79C8
  {uint32_t ea=c->r[2]+0x00001690u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C79CC
  {uint32_t ea=c->r[10]+0x00000088u; WF32(ea,c->f[8]);} // 804C79D0
  {uint32_t ea=c->r[2]+0x00001694u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C79D4
  {uint32_t ea=c->r[10]+0x0000008Cu; WF32(ea,c->f[8]);} // 804C79D8
  {uint32_t ea=c->r[2]+0x00001698u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C79DC
  {uint32_t ea=c->r[10]+0x00000090u; WF32(ea,c->f[8]);} // 804C79E0
  {uint32_t ea=c->r[2]+0x0000169Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C79E4
  {uint32_t ea=c->r[10]+0x00000094u; WF32(ea,c->f[8]);} // 804C79E8
  {uint32_t ea=c->r[10]+0x00000098u; WF32(ea,c->f[8]);} // 804C79EC
  {uint32_t ea=c->r[10]+0x0000009Cu; WF32(ea,c->f[8]);} // 804C79F0
  {uint32_t ea=c->r[10]+0x000000A0u; WF32(ea,c->f[8]);} // 804C79F4
  {uint32_t ea=c->r[10]+0x000000A4u; WF32(ea,c->f[8]);} // 804C79F8
  W32(c->r[10]+0x000000A8u,c->r[0]); // 804C79FC
  {uint32_t ea=c->r[10]+0x000000ACu; WF32(ea,c->f[6]);} // 804C7A00
  {uint32_t ea=c->r[10]+0x000000B0u; WF32(ea,c->f[5]);} // 804C7A04
  {uint32_t ea=c->r[10]+0x000000B4u; WF32(ea,c->f[4]);} // 804C7A08
  {uint32_t ea=c->r[10]+0x000000B8u; WF32(ea,c->f[1]);} // 804C7A0C
  W32(c->r[1]+0x00000014u,c->r[8]); // 804C7A10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804C7A14
  {uint32_t ea=c->r[10]+0x000000BCu; WF32(ea,c->f[8]);} // 804C7A18
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 804C7A1C
  {uint32_t ea=c->r[10]+0x000000C0u; WF32(ea,c->f[2]);} // 804C7A20
  {uint32_t ea=c->r[10]+0x000000C4u; WF32(ea,c->f[8]);} // 804C7A24
  {uint32_t ea=c->r[10]+0x000000C8u; WF32(ea,c->f[1]);} // 804C7A28
  {uint32_t ea=c->r[10]+0x000000CCu; WF32(ea,c->f[0]);} // 804C7A2C
  {uint32_t ea=c->r[10]+0x000000D0u; WF32(ea,c->f[0]);} // 804C7A30
  {uint32_t ea=c->r[10]+0x000000D4u; WF32(ea,c->f[0]);} // 804C7A34
  {uint32_t ea=c->r[10]+0x000000D8u; WF32(ea,c->f[0]);} // 804C7A38
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 804C7A3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804C7A40
  {uint32_t ea=c->r[10]+0x000000DCu; WF32(ea,c->f[8]);} // 804C7A44
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 804C7A48
  W32(c->r[1]+0x00000014u,c->r[7]); // 804C7A4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804C7A50
  {uint32_t ea=c->r[10]+0x000000E0u; WF32(ea,c->f[8]);} // 804C7A54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804C7A58
  {uint32_t ea=c->r[10]+0x000000E4u; WF32(ea,c->f[1]);} // 804C7A5C
  {uint32_t ea=c->r[10]+0x000000E8u; WF32(ea,c->f[0]);} // 804C7A60
  {uint32_t ea=c->r[10]+0x000000ECu; WF32(ea,c->f[8]);} // 804C7A64
  {uint32_t ea=c->r[10]+0x000000F0u; WF32(ea,c->f[7]);} // 804C7A68
  W32(c->r[10]+0x000000F4u,c->r[0]); // 804C7A6C
  W32(c->r[10]+0x000000F8u,c->r[0]); // 804C7A70
  W32(c->r[10]+0x000000FCu,c->r[4]); // 804C7A74
  W32(c->r[10]+0x00000100u,c->r[5]); // 804C7A78
  W32(c->r[10]+0x00000104u,c->r[0]); // 804C7A7C
  W32(c->r[10]+0x00000108u,c->r[0]); // 804C7A80
L_804C7A84:;
  c->r[1]=c->r[1]+0x00000020u; // 804C7A84
  return; // 804C7A88
}

// SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
void f_804C7A8C(Ctx* __restrict c) {
  trace_call(0x804C7A8Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7A8C
  cmps(c,0,(int32_t)c->r[3],0); // 804C7A90
  if (crb(c,2)) return; // 804C7A94
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7A98
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7A9C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804C7AA0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7AA4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 804C7AA8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 804C7AAC
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7AB0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804C7AB4
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7AB8
  return; // 804C7ABC
}

// fn_804C7AC0
void f_804C7AC0(Ctx* __restrict c) {
  trace_call(0x804C7AC0u);
  cmps(c,0,(int32_t)c->r[4],0); // 804C7AC0
  if (crb(c,2)) return; // 804C7AC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7AC8
  cmps(c,0,(int32_t)c->r[3],0); // 804C7ACC
  if (crb(c,2)) return; // 804C7AD0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7AD4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 804C7AD8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7ADC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804C7AE0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7AE4
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804C7AE8
  return; // 804C7AEC
}

// SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
void f_804C7AF0(Ctx* __restrict c) {
  trace_call(0x804C7AF0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7AF0
  cmps(c,0,(int32_t)c->r[3],0); // 804C7AF4
  if (crb(c,2)) return; // 804C7AF8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804C7AFC
  cmps(c,0,(int32_t)c->r[0],1); // 804C7B00
  if (crb(c,2)) { goto L_804C7BFC; } // 804C7B04
  if (!crb(c,0)) { goto L_804C7B18; } // 804C7B08
  cmps(c,0,(int32_t)c->r[0],0); // 804C7B0C
  if (!crb(c,0)) { goto L_804C7B24; } // 804C7B10
  return; // 804C7B14
L_804C7B18:;
  cmps(c,0,(int32_t)c->r[0],3); // 804C7B18
  if (!crb(c,0)) return; // 804C7B1C
  goto L_804C7C78; // 804C7B20
L_804C7B24:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7B24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804C7B28
  if (crb(c,2)) { goto L_804C7BB0; } // 804C7B2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B30
  c->r[0]=0u+0x00000000u; // 804C7B34
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B38
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B3C
  if (!crb(c,2)) { goto L_804C7B64; } // 804C7B40
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B44
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B48
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B4C
  if (!crb(c,2)) { goto L_804C7B64; } // 804C7B50
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B54
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B58
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B5C
  if (crb(c,2)) { goto L_804C7B68; } // 804C7B60
L_804C7B64:;
  c->r[0]=0u+0x00000001u; // 804C7B64
L_804C7B68:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C7B68
  if (!crb(c,2)) { goto L_804C7BB0; } // 804C7B6C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B70
  c->r[0]=0u+0x00000000u; // 804C7B74
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B78
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B7C
  if (!crb(c,2)) { goto L_804C7BA4; } // 804C7B80
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B84
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B88
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B8C
  if (!crb(c,2)) { goto L_804C7BA4; } // 804C7B90
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7B94
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7B98
  fcmp(c,0,c->f[1],c->f[0]); // 804C7B9C
  if (crb(c,2)) { goto L_804C7BA8; } // 804C7BA0
L_804C7BA4:;
  c->r[0]=0u+0x00000001u; // 804C7BA4
L_804C7BA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C7BA8
  if (crb(c,2)) return; // 804C7BAC
L_804C7BB0:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7BB0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7BB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 804C7BB8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7BBC
  c->r[0]=c->r[0]|0x00000001u; // 804C7BC0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C7BC4
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7BC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804C7BCC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C7BD0
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 804C7BD4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7BD8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 804C7BDC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7BE0
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 804C7BE4
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 804C7BE8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 804C7BEC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 804C7BF0
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7BF4
  return; // 804C7BF8
L_804C7BFC:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7BFC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804C7C00
  if (crb(c,2)) { goto L_804C7C48; } // 804C7C04
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C08
  c->r[0]=0u+0x00000000u; // 804C7C0C
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C10
  fcmp(c,0,c->f[1],c->f[0]); // 804C7C14
  if (!crb(c,2)) { goto L_804C7C3C; } // 804C7C18
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C1C
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C20
  fcmp(c,0,c->f[1],c->f[0]); // 804C7C24
  if (!crb(c,2)) { goto L_804C7C3C; } // 804C7C28
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C2C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C30
  fcmp(c,0,c->f[1],c->f[0]); // 804C7C34
  if (crb(c,2)) { goto L_804C7C40; } // 804C7C38
L_804C7C3C:;
  c->r[0]=0u+0x00000001u; // 804C7C3C
L_804C7C40:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C7C40
  if (crb(c,2)) return; // 804C7C44
L_804C7C48:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7C48
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C7C4C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 804C7C54
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 804C7C58
  c->r[0]=c->r[0]|0x00000002u; // 804C7C5C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C60
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804C7C64
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 804C7C68
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 804C7C6C
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7C70
  return; // 804C7C74
L_804C7C78:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7C78
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804C7C7C
  if (crb(c,2)) { goto L_804C7CD4; } // 804C7C80
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C84
  c->r[0]=0u+0x00000000u; // 804C7C88
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C8C
  fcmp(c,0,c->f[1],c->f[0]); // 804C7C90
  if (!crb(c,2)) { goto L_804C7CB8; } // 804C7C94
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7C98
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7C9C
  fcmp(c,0,c->f[1],c->f[0]); // 804C7CA0
  if (!crb(c,2)) { goto L_804C7CB8; } // 804C7CA4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7CA8
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7CAC
  fcmp(c,0,c->f[1],c->f[0]); // 804C7CB0
  if (crb(c,2)) { goto L_804C7CBC; } // 804C7CB4
L_804C7CB8:;
  c->r[0]=0u+0x00000001u; // 804C7CB8
L_804C7CBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804C7CBC
  if (!crb(c,2)) { goto L_804C7CD4; } // 804C7CC0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7CC4
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7CC8
  fcmp(c,0,c->f[1],c->f[0]); // 804C7CCC
  if (crb(c,2)) return; // 804C7CD0
L_804C7CD4:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7CD4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C7CD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 804C7CDC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C7CE0
  c->r[0]=c->r[0]|0x00000004u; // 804C7CE4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C7CE8
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7CEC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804C7CF0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7CF4
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[3]);} // 804C7CF8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 804C7CFC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 804C7D00
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 804C7D04
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7D08
  return; // 804C7D0C
}

// fn_804C7D10
void f_804C7D10(Ctx* __restrict c) {
  trace_call(0x804C7D10u);
  cmps(c,0,(int32_t)c->r[4],0); // 804C7D10
  if (crb(c,2)) return; // 804C7D14
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7D18
  cmps(c,0,(int32_t)c->r[3],0); // 804C7D1C
  if (crb(c,2)) return; // 804C7D20
  c->r[5]=R32(c->r[3]+0x00000070u); // 804C7D24
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 804C7D28
  if (crb(c,2)) { goto L_804C7D6C; } // 804C7D2C
  c->r[0]=0u+0x00000000u; // 804C7D30
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C7D34
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D38
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804C7D3C
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D40
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804C7D44
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D48
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C7D4C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D50
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 804C7D54
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D58
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 804C7D5C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D60
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 804C7D64
  return; // 804C7D68
L_804C7D6C:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804C7D6C
  if (crb(c,2)) { goto L_804C7D98; } // 804C7D70
  c->r[0]=0u+0x00000001u; // 804C7D74
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C7D78
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D7C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C7D80
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D84
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 804C7D88
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7D8C
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 804C7D90
  return; // 804C7D94
L_804C7D98:;
  c->r[0]=0u+0x00000002u; // 804C7D98
  W32(c->r[4]+0x00000000u,c->r[0]); // 804C7D9C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7DA0
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 804C7DA4
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7DA8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 804C7DAC
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7DB0
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 804C7DB4
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7DB8
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 804C7DBC
  return; // 804C7DC0
}

// SetPerspective__Q34nw4r3g3d6CameraFffff
void f_804C7DC4(Ctx* __restrict c) {
  trace_call(0x804C7DC4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7DC4
  cmps(c,0,(int32_t)c->r[3],0); // 804C7DC8
  if (crb(c,2)) return; // 804C7DCC
  c->r[0]=0u+0x00000000u; // 804C7DD0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804C7DD4
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 804C7DD8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 804C7DDC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[3]);} // 804C7DE0
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[4]);} // 804C7DE4
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7DE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 804C7DEC
  c->r[0]=c->r[0]|0x00000020u; // 804C7DF0
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7DF4
  return; // 804C7DF8
}

// fn_804C7DFC
void f_804C7DFC(Ctx* __restrict c) {
  trace_call(0x804C7DFCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7DFC
  cmps(c,0,(int32_t)c->r[3],0); // 804C7E00
  if (crb(c,2)) return; // 804C7E04
  c->r[0]=0u+0x00000000u; // 804C7E08
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804C7E0C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 804C7E10
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 804C7E14
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 804C7E18
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 804C7E1C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 804C7E20
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 804C7E24
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7E28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 804C7E2C
  c->r[0]=c->r[0]|0x00000010u; // 804C7E30
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7E34
  return; // 804C7E38
}

// SetOrtho__Q34nw4r3g3d6CameraFffffff
void f_804C7E3C(Ctx* __restrict c) {
  trace_call(0x804C7E3Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7E3C
  cmps(c,0,(int32_t)c->r[3],0); // 804C7E40
  if (crb(c,2)) return; // 804C7E44
  c->r[0]=0u+0x00000001u; // 804C7E48
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804C7E4C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 804C7E50
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 804C7E54
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 804C7E58
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 804C7E5C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 804C7E60
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 804C7E64
  c->r[0]=R32(c->r[3]+0x00000070u); // 804C7E68
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 804C7E6C
  c->r[0]=c->r[0]|0x00000040u; // 804C7E70
  W32(c->r[3]+0x00000070u,c->r[0]); // 804C7E74
  return; // 804C7E78
}

// fn_804C7E7C
void f_804C7E7C(Ctx* __restrict c) {
  trace_call(0x804C7E7Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7E7C
  cmps(c,0,(int32_t)c->r[3],0); // 804C7E80
  if (crb(c,2)) return; // 804C7E84
  W32(c->r[3]+0x000000F4u,c->r[4]); // 804C7E88
  W32(c->r[3]+0x000000F8u,c->r[5]); // 804C7E8C
  W32(c->r[3]+0x000000FCu,c->r[6]); // 804C7E90
  W32(c->r[3]+0x00000100u,c->r[7]); // 804C7E94
  return; // 804C7E98
}

// fn_804C7E9C
void f_804C7E9C(Ctx* __restrict c) {
  trace_call(0x804C7E9Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7E9C
  cmps(c,0,(int32_t)c->r[3],0); // 804C7EA0
  if (crb(c,2)) return; // 804C7EA4
  W32(c->r[3]+0x00000104u,c->r[4]); // 804C7EA8
  W32(c->r[3]+0x00000108u,c->r[5]); // 804C7EAC
  return; // 804C7EB0
}

// SetViewport__Q34nw4r3g3d6CameraFffff
void f_804C7EB4(Ctx* __restrict c) {
  trace_call(0x804C7EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C7EB4
  c->r[0]=c->lr; // 804C7EB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C7EBC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 804C7EC0
  c->f[31]=c->f[4]; // 804C7EC4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804C7EC8
  c->f[30]=c->f[3]; // 804C7ECC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 804C7ED0
  c->f[29]=c->f[2]; // 804C7ED4
  W32(c->r[1]+0x00000014u,c->r[31]); // 804C7ED8
  c->r[4]=R32(c->r[3]+0x00000000u); // 804C7EDC
  cmps(c,0,(int32_t)c->r[4],0); // 804C7EE0
  if (crb(c,2)) { goto L_804C7F30; } // 804C7EE4
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 804C7EE8
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[2]);} // 804C7EEC
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[3]);} // 804C7EF0
  {uint32_t ea=c->r[4]+0x000000E8u; WF32(ea,c->f[4]);} // 804C7EF4
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C7EF8
  cmps(c,0,(int32_t)c->r[31],0); // 804C7EFC
  if (crb(c,2)) { goto L_804C7F30; } // 804C7F00
  c->lr=0x804C7F08u; f_803A9ADC(c); // 804C7F04
  c->f[1]=c->f[29]; // 804C7F08
  W32(c->r[31]+0x000000F4u,c->r[3]); // 804C7F0C
  c->lr=0x804C7F14u; f_803A9ADC(c); // 804C7F10
  c->f[1]=c->f[30]; // 804C7F14
  W32(c->r[31]+0x000000F8u,c->r[3]); // 804C7F18
  c->lr=0x804C7F20u; f_803A9ADC(c); // 804C7F1C
  c->f[1]=c->f[31]; // 804C7F20
  W32(c->r[31]+0x000000FCu,c->r[3]); // 804C7F24
  c->lr=0x804C7F2Cu; f_803A9ADC(c); // 804C7F28
  W32(c->r[31]+0x00000100u,c->r[3]); // 804C7F2C
L_804C7F30:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C7F30
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 804C7F34
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804C7F38
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 804C7F3C
  c->r[31]=R32(c->r[1]+0x00000014u); // 804C7F40
  c->lr=c->r[0]; // 804C7F44
  c->r[1]=c->r[1]+0x00000030u; // 804C7F48
  return; // 804C7F4C
}

// SetViewportZRange__Q34nw4r3g3d6CameraFff
void f_804C7F50(Ctx* __restrict c) {
  trace_call(0x804C7F50u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7F50
  cmps(c,0,(int32_t)c->r[3],0); // 804C7F54
  if (crb(c,2)) return; // 804C7F58
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[1]);} // 804C7F5C
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[2]);} // 804C7F60
  return; // 804C7F64
}

// GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
void f_804C7F68(Ctx* __restrict c) {
  trace_call(0x804C7F68u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804C7F68
  cmps(c,0,(int32_t)c->r[3],0); // 804C7F6C
  if (crb(c,2)) return; // 804C7F70
  cmps(c,0,(int32_t)c->r[4],0); // 804C7F74
  if (crb(c,2)) { goto L_804C7F84; } // 804C7F78
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7F7C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 804C7F80
L_804C7F84:;
  cmps(c,0,(int32_t)c->r[5],0); // 804C7F84
  if (crb(c,2)) { goto L_804C7F94; } // 804C7F88
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7F8C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 804C7F90
L_804C7F94:;
  cmps(c,0,(int32_t)c->r[6],0); // 804C7F94
  if (crb(c,2)) { goto L_804C7FA4; } // 804C7F98
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7F9C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 804C7FA0
L_804C7FA4:;
  cmps(c,0,(int32_t)c->r[7],0); // 804C7FA4
  if (crb(c,2)) { goto L_804C7FB4; } // 804C7FA8
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7FAC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 804C7FB0
L_804C7FB4:;
  cmps(c,0,(int32_t)c->r[8],0); // 804C7FB4
  if (crb(c,2)) { goto L_804C7FC4; } // 804C7FB8
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7FBC
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 804C7FC0
L_804C7FC4:;
  cmps(c,0,(int32_t)c->r[9],0); // 804C7FC4
  if (crb(c,2)) return; // 804C7FC8
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C7FCC
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 804C7FD0
  return; // 804C7FD4
}

// GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_804C7FD8(Ctx* __restrict c) {
  trace_call(0x804C7FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C7FD8
  c->r[0]=c->lr; // 804C7FDC
  cmps(c,0,(int32_t)c->r[4],0); // 804C7FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C7FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C7FE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C7FEC
  c->r[30]=c->r[4]|c->r[4]; // 804C7FF0
  if (crb(c,2)) { goto L_804C8020; } // 804C7FF4
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C7FF8
  cmps(c,0,(int32_t)c->r[31],0); // 804C7FFC
  if (crb(c,2)) { goto L_804C8020; } // 804C8000
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C8004
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804C8008
  if (!crb(c,2)) { goto L_804C8014; } // 804C800C
  c->lr=0x804C8014u; f_804C83F0(c); // 804C8010
L_804C8014:;
  c->r[3]=c->r[31]|c->r[31]; // 804C8014
  c->r[4]=c->r[30]|c->r[30]; // 804C8018
  c->lr=0x804C8020u; f_80382F2C(c); // 804C801C
L_804C8020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C8020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C8024
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C8028
  c->lr=c->r[0]; // 804C802C
  c->r[1]=c->r[1]+0x00000010u; // 804C8030
  return; // 804C8034
}

// GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
void f_804C8038(Ctx* __restrict c) {
  trace_call(0x804C8038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8038
  c->r[0]=c->lr; // 804C803C
  cmps(c,0,(int32_t)c->r[4],0); // 804C8040
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C8044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C8048
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C804C
  c->r[30]=c->r[4]|c->r[4]; // 804C8050
  if (crb(c,2)) { goto L_804C80FC; } // 804C8054
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C8058
  cmps(c,0,(int32_t)c->r[31],0); // 804C805C
  if (crb(c,2)) { goto L_804C80FC; } // 804C8060
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C8064
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 804C8068
  if (!crb(c,2)) { goto L_804C80F0; } // 804C806C
  c->r[3]=R32(c->r[31]+0x00000070u); // 804C8070
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 804C8074
  if (crb(c,2)) { goto L_804C80A0; } // 804C8078
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C807C
  c->r[3]=c->r[31]+0x00000030u; // 804C8080
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8084
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8088
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C808C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8090
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8094
  c->lr=0x804C809Cu; f_80383C7C(c); // 804C8098
  goto L_804C80E4; // 804C809C
L_804C80A0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804C80A0
  if (crb(c,2)) { goto L_804C80CC; } // 804C80A4
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C80A8
  c->r[3]=c->r[31]+0x00000030u; // 804C80AC
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C80B0
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C80B4
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C80B8
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C80BC
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C80C0
  c->lr=0x804C80C8u; f_80383AF4(c); // 804C80C4
  goto L_804C80E4; // 804C80C8
L_804C80CC:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C80CC
  c->r[3]=c->r[31]+0x00000030u; // 804C80D0
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C80D4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C80D8
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C80DC
  c->lr=0x804C80E4u; f_80383B90(c); // 804C80E0
L_804C80E4:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C80E4
  c->r[0]=c->r[0]|0x00000080u; // 804C80E8
  W32(c->r[31]+0x00000070u,c->r[0]); // 804C80EC
L_804C80F0:;
  c->r[3]=c->r[30]|c->r[30]; // 804C80F0
  c->r[4]=c->r[31]+0x00000030u; // 804C80F4
  c->lr=0x804C80FCu; f_804E1AC4(c); // 804C80F8
L_804C80FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C80FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C8100
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C8104
  c->lr=c->r[0]; // 804C8108
  c->r[1]=c->r[1]+0x00000010u; // 804C810C
  return; // 804C8110
}

// GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_804C8114(Ctx* __restrict c) {
  trace_call(0x804C8114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8114
  c->r[0]=c->lr; // 804C8118
  cmps(c,0,(int32_t)c->r[4],0); // 804C811C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C8120
  if (crb(c,2)) { goto L_804C81D4; } // 804C8124
  c->r[5]=R32(c->r[3]+0x00000000u); // 804C8128
  cmps(c,0,(int32_t)c->r[5],0); // 804C812C
  if (crb(c,2)) { goto L_804C81D4; } // 804C8130
  c->r[3]=R32(c->r[5]+0x00000070u); // 804C8134
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 804C8138
  if (crb(c,2)) { goto L_804C8170; } // 804C813C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8140
  c->r[3]=c->r[4]|c->r[4]; // 804C8144
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8148
  c->f[6]=-c->f[0]; // 804C814C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8150
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8154
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8158
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C815C
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C8160
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8164
  c->lr=0x804C816Cu; f_80383A18(c); // 804C8168
  goto L_804C81D4; // 804C816C
L_804C8170:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804C8170
  if (crb(c,2)) { goto L_804C81B0; } // 804C8174
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8178
  c->r[3]=c->r[4]|c->r[4]; // 804C817C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804C8180
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8184
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8188
  c->f[7]=-c->f[0]; // 804C818C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8190
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8194
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8198
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C819C
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C81A0
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C81A4
  c->lr=0x804C81ACu; f_8038387C(c); // 804C81A8
  goto L_804C81D4; // 804C81AC
L_804C81B0:;
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C81B0
  c->r[3]=c->r[4]|c->r[4]; // 804C81B4
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C81B8
  c->f[4]=-c->f[0]; // 804C81BC
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C81C0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C81C4
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C81C8
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C81CC
  c->lr=0x804C81D4u; f_80383920(c); // 804C81D0
L_804C81D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C81D4
  c->lr=c->r[0]; // 804C81D8
  c->r[1]=c->r[1]+0x00000010u; // 804C81DC
  return; // 804C81E0
}

// GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_804C81E4(Ctx* __restrict c) {
  trace_call(0x804C81E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C81E4
  c->r[0]=c->lr; // 804C81E8
  cmps(c,0,(int32_t)c->r[4],0); // 804C81EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C81F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C81F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804C81F8
  c->r[30]=c->r[4]|c->r[4]; // 804C81FC
  if (crb(c,2)) { goto L_804C824C; } // 804C8200
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C8204
  cmps(c,0,(int32_t)c->r[31],0); // 804C8208
  if (crb(c,2)) { goto L_804C824C; } // 804C820C
  c->r[3]=c->r[30]|c->r[30]; // 804C8210
  c->lr=0x804C8218u; f_80382F00(c); // 804C8214
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8218
  {uint32_t ea=c->r[2]+0x00001680u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C821C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C8220
  {uint32_t ea=c->r[2]+0x00001688u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8224
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8228
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C822C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8230
  c->f[2]=-c->f[2]; // 804C8234
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 804C8238
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C823C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[2]);} // 804C8240
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 804C8244
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C8248
L_804C824C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C824C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C8250
  c->r[30]=R32(c->r[1]+0x00000008u); // 804C8254
  c->lr=c->r[0]; // 804C8258
  c->r[1]=c->r[1]+0x00000010u; // 804C825C
  return; // 804C8260
}

// GXSetViewport__Q34nw4r3g3d6CameraCFv
void f_804C8264(Ctx* __restrict c) {
  trace_call(0x804C8264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8264
  c->r[0]=c->lr; // 804C8268
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C826C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C8270
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C8274
  cmps(c,0,(int32_t)c->r[31],0); // 804C8278
  if (crb(c,2)) { goto L_804C82D4; } // 804C827C
  c->lr=0x804C8284u; f_804C17F8(c); // 804C8280
  c->r[0]=R8(c->r[3]+0x00000018u); // 804C8284
  cmps(c,0,(int32_t)c->r[0],0); // 804C8288
  if (crb(c,2)) { goto L_804C82B8; } // 804C828C
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C8290
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8294
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8298
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 804C829C
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C82A0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C82A4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C82A8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C82AC
  c->lr=0x804C82B4u; f_803A87AC(c); // 804C82B0
  goto L_804C82D4; // 804C82B4
L_804C82B8:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C82B8
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C82BC
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C82C0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C82C4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C82C8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C82CC
  c->lr=0x804C82D4u; f_803A87E8(c); // 804C82D0
L_804C82D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C82D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C82D8
  c->lr=c->r[0]; // 804C82DC
  c->r[1]=c->r[1]+0x00000010u; // 804C82E0
  return; // 804C82E4
}

// GXSetProjection__Q34nw4r3g3d6CameraCFv
void f_804C82E8(Ctx* __restrict c) {
  trace_call(0x804C82E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C82E8
  c->r[0]=c->lr; // 804C82EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C82F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C82F4
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C82F8
  cmps(c,0,(int32_t)c->r[31],0); // 804C82FC
  if (crb(c,2)) { goto L_804C839C; } // 804C8300
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C8304
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 804C8308
  if (!crb(c,2)) { goto L_804C8390; } // 804C830C
  c->r[3]=R32(c->r[31]+0x00000070u); // 804C8310
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 804C8314
  if (crb(c,2)) { goto L_804C8340; } // 804C8318
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C831C
  c->r[3]=c->r[31]+0x00000030u; // 804C8320
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8324
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8328
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C832C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8330
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8334
  c->lr=0x804C833Cu; f_80383C7C(c); // 804C8338
  goto L_804C8384; // 804C833C
L_804C8340:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804C8340
  if (crb(c,2)) { goto L_804C836C; } // 804C8344
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8348
  c->r[3]=c->r[31]+0x00000030u; // 804C834C
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8350
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8354
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8358
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C835C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8360
  c->lr=0x804C8368u; f_80383AF4(c); // 804C8364
  goto L_804C8384; // 804C8368
L_804C836C:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C836C
  c->r[3]=c->r[31]+0x00000030u; // 804C8370
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8374
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8378
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C837C
  c->lr=0x804C8384u; f_80383B90(c); // 804C8380
L_804C8384:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C8384
  c->r[0]=c->r[0]|0x00000080u; // 804C8388
  W32(c->r[31]+0x00000070u,c->r[0]); // 804C838C
L_804C8390:;
  c->r[4]=R32(c->r[31]+0x000000A8u); // 804C8390
  c->r[3]=c->r[31]+0x00000030u; // 804C8394
  c->lr=0x804C839Cu; f_803A8450(c); // 804C8398
L_804C839C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C839C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C83A0
  c->lr=c->r[0]; // 804C83A4
  c->r[1]=c->r[1]+0x00000010u; // 804C83A8
  return; // 804C83AC
}

// GXSetScissor__Q34nw4r3g3d6CameraCFv
void f_804C83B0(Ctx* __restrict c) {
  trace_call(0x804C83B0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804C83B0
  cmps(c,0,(int32_t)c->r[6],0); // 804C83B4
  if (crb(c,2)) return; // 804C83B8
  c->r[3]=R32(c->r[6]+0x000000F4u); // 804C83BC
  c->r[4]=R32(c->r[6]+0x000000F8u); // 804C83C0
  c->r[5]=R32(c->r[6]+0x000000FCu); // 804C83C4
  c->r[6]=R32(c->r[6]+0x00000100u); // 804C83C8
  f_803A8844(c); return; // 804C83CC
  return; // 804C83D0
}

// GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
void f_804C83D4(Ctx* __restrict c) {
  trace_call(0x804C83D4u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 804C83D4
  cmps(c,0,(int32_t)c->r[4],0); // 804C83D8
  if (crb(c,2)) return; // 804C83DC
  c->r[3]=R32(c->r[4]+0x00000104u); // 804C83E0
  c->r[4]=R32(c->r[4]+0x00000108u); // 804C83E4
  f_803A88AC(c); return; // 804C83E8
  return; // 804C83EC
}

// UpdateCameraMtx__Q34nw4r3g3d6CameraCFv
void f_804C83F0(Ctx* __restrict c) {
  trace_call(0x804C83F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C83F0
  c->r[0]=c->lr; // 804C83F4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804C83F8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 804C83FC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 804C8400
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 804C8404
  c->r[31]=R32(c->r[3]+0x00000000u); // 804C8408
  c->r[3]=R32(c->r[31]+0x00000070u); // 804C840C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804C8410
  if (crb(c,2)) { goto L_804C8430; } // 804C8414
  c->r[3]=c->r[31]|c->r[31]; // 804C8418
  c->r[4]=c->r[31]+0x00000074u; // 804C841C
  c->r[5]=c->r[31]+0x00000080u; // 804C8420
  c->r[6]=c->r[31]+0x0000008Cu; // 804C8424
  c->lr=0x804C842Cu; f_80383708(c); // 804C8428
  goto L_804C87CC; // 804C842C
L_804C8430:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804C8430
  if (crb(c,2)) { goto L_804C8668; } // 804C8434
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8438
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C843C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8440
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 804C8444
  {uint32_t ea=c->r[31]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8448
  {uint32_t ea=c->r[2]+0x00001680u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C844C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8450
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 804C8454
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8458
  fcmp(c,0,c->f[2],c->f[5]); // 804C845C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804C8460
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[5]);} // 804C8464
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 804C8468
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 804C846C
  if (!crb(c,2)) { goto L_804C8500; } // 804C8470
  fcmp(c,0,c->f[2],c->f[3]); // 804C8474
  if (!crb(c,2)) { goto L_804C8500; } // 804C8478
  {uint32_t ea=c->r[2]+0x00001688u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C847C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 804C8480
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 804C8484
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 804C8488
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C848C
  c->f[0]=-c->f[0]; // 804C8490
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C8494
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 804C8498
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 804C849C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 804C84A0
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 804C84A4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84A8
  fcmp(c,0,c->f[0],c->f[2]); // 804C84AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804C84B0
  if (!crb(c,2)) { goto L_804C84DC; } // 804C84B4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804C84B8
  {uint32_t ea=c->r[2]+0x000016A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84BC
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C84C0
  c->f[1]=-c->f[1]; // 804C84C4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C84C8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804C84CC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84D0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C84D4
  goto L_804C87CC; // 804C84D8
L_804C84DC:;
  {uint32_t ea=c->r[2]+0x000016A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84DC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 804C84E0
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84E4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C84E8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804C84EC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C84F0
  c->f[0]=-c->f[0]; // 804C84F4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C84F8
  goto L_804C87CC; // 804C84FC
L_804C8500:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8500
  c->r[3]=c->r[1]+0x0000007Cu; // 804C8504
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8508
  c->r[4]=c->r[3]|c->r[3]; // 804C850C
  c->f[2]=-c->f[0]; // 804C8510
  {uint32_t ea=c->r[2]+0x00001680u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8514
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 804C8518
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 804C851C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 804C8520
  c->lr=0x804C8528u; f_80383D38(c); // 804C8524
  c->r[3]=c->r[1]+0x00000070u; // 804C8528
  c->r[4]=c->r[3]|c->r[3]; // 804C852C
  c->lr=0x804C8534u; f_80383D38(c); // 804C8530
  c->r[3]=c->r[1]+0x0000007Cu; // 804C8534
  c->r[4]=c->r[1]+0x00000070u; // 804C8538
  c->r[5]=c->r[1]+0x00000064u; // 804C853C
  c->lr=0x804C8544u; f_80383DE0(c); // 804C8540
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8544
  c->r[3]=c->r[1]+0x00000024u; // 804C8548
  {uint32_t ea=c->r[2]+0x000016ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C854C
  c->r[4]=c->r[1]+0x00000020u; // 804C8550
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8554
  c->lr=0x804C855Cu; f_804E11BC(c); // 804C8558
  {uint32_t ea=c->r[1]+0x00000024u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C855C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8560
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C8564
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8568
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[0]); // 804C856C
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 804C8570
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8574
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[4]); // 804C8578
  {uint32_t ea=c->r[1]+0x00000068u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C857C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8580
  c->f[7]=c->ps1[7]=S(c->f[11]*c->f[8]); // 804C8584
  c->f[9]=c->ps1[9]=S(c->f[2]+c->f[0]); // 804C8588
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[6]); // 804C858C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[5]); // 804C8590
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[7]);} // 804C8594
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[4]); // 804C8598
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 804C859C
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[2]); // 804C85A0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804C85A4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[7]);} // 804C85A8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[6]); // 804C85AC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 804C85B0
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 804C85B4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 804C85B8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 804C85BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804C85C0
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,6,ea,0,0);} // 804C85C4
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,5,ea,0,0);} // 804C85C8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[9]);} // 804C85CC
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[6]=t0; c->ps1[6]=t1;} // 804C85D0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 804C85D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,4,ea,1,0);} // 804C85D8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 804C85DC
  {double t0=S(std::fma(c->f[0],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 804C85E0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 804C85E4
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_load(c,7,ea,1,0);} // 804C85E8
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 804C85EC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 804C85F0
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,4,ea,0,0);} // 804C85F4
  c->f[0]=-c->f[0]; // 804C85F8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C85FC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 804C8600
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 804C8604
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804C8608
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 804C860C
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 804C8610
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804C8614
  {double t0=S(std::fma(c->f[0],c->f[7],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[7],c->ps1[1])); c->f[4]=t0; c->ps1[4]=t1;} // 804C8618
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804C861C
  c->f[0]=-c->f[0]; // 804C8620
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8624
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8628
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 804C862C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8630
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804C8634
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8638
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804C863C
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,2,ea,0,0);} // 804C8640
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,1,ea,0,0);} // 804C8644
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 804C8648
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804C864C
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,1,ea,1,0);} // 804C8650
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804C8654
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804C8658
  c->f[0]=-c->f[0]; // 804C865C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C8660
  goto L_804C87CC; // 804C8664
L_804C8668:;
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8668
  c->r[3]=c->r[1]+0x0000001Cu; // 804C866C
  {uint32_t ea=c->r[2]+0x000016ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8670
  c->r[4]=c->r[1]+0x00000010u; // 804C8674
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8678
  c->lr=0x804C8680u; f_804E11BC(c); // 804C867C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8680
  c->r[3]=c->r[1]+0x00000018u; // 804C8684
  {uint32_t ea=c->r[2]+0x000016ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8688
  c->r[4]=c->r[1]+0x0000000Cu; // 804C868C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8690
  c->lr=0x804C8698u; f_804E11BC(c); // 804C8694
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8698
  c->r[3]=c->r[1]+0x00000014u; // 804C869C
  {uint32_t ea=c->r[2]+0x000016ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C86A0
  c->r[4]=c->r[1]+0x00000008u; // 804C86A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C86A8
  c->lr=0x804C86B0u; f_804E11BC(c); // 804C86AC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C86B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C86B4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 804C86B8
  c->f[0]=-c->f[2]; // 804C86BC
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[31]); // 804C86C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 804C86C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C86C8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[12]); // 804C86CC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[11]); // 804C86D0
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[13]); // 804C86D4
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[10]); // 804C86D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C86DC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C86E0
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[4]); // 804C86E4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[10]); // 804C86E8
  c->f[9]=c->ps1[9]=S(c->f[7]+c->f[5]); // 804C86EC
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[12]); // 804C86F0
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[2]); // 804C86F4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 804C86F8
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[4]); // 804C86FC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[10]); // 804C8700
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[8]);} // 804C8704
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[31]); // 804C8708
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 804C870C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[11]); // 804C8710
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[7]);} // 804C8714
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[13]); // 804C8718
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 804C871C
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[12]); // 804C8720
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,8,ea,1,0);} // 804C8724
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[7]);} // 804C8728
  c->f[0]=c->ps1[0]=S(c->f[0]); // 804C872C
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 804C8730
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 804C8734
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,9,ea,0,0);} // 804C8738
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,7,ea,0,0);} // 804C873C
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,1,ea,1,0);} // 804C8740
  {double t0=S(c->f[9]*c->f[7]), t1=S(c->ps1[9]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 804C8744
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 804C8748
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 804C874C
  {double t0=S(std::fma(c->f[8],c->f[1],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[1],c->ps1[9])); c->f[7]=t0; c->ps1[7]=t1;} // 804C8750
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,10,ea,1,0);} // 804C8754
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 804C8758
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,11,ea,0,0);} // 804C875C
  {double t0=S(c->f[7]+c->ps1[9]), t1=S(c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 804C8760
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 804C8764
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,8,ea,1,0);} // 804C8768
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 804C876C
  c->f[1]=-c->f[1]; // 804C8770
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,7,ea,0,0);} // 804C8774
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C8778
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 804C877C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[5]);} // 804C8780
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 804C8784
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,4,ea,0,0);} // 804C8788
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,1,ea,1,0);} // 804C878C
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 804C8790
  {double t0=S(std::fma(c->f[1],c->f[10],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[10],c->ps1[4])); c->f[7]=t0; c->ps1[7]=t1;} // 804C8794
  {double t0=S(c->f[7]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804C8798
  c->f[1]=-c->f[1]; // 804C879C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C87A0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 804C87A4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804C87A8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 804C87AC
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 804C87B0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 804C87B4
  {double t0=S(c->f[1]*c->f[11]), t1=S(c->ps1[1]*c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 804C87B8
  {double t0=S(std::fma(c->f[0],c->f[8],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[8],c->ps1[1])); c->f[11]=t0; c->ps1[11]=t1;} // 804C87BC
  {double t0=S(c->f[11]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804C87C0
  c->f[0]=-c->f[0]; // 804C87C4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804C87C8
L_804C87CC:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 804C87CC
  c->r[0]=c->r[0]|0x00000008u; // 804C87D0
  W32(c->r[31]+0x00000070u,c->r[0]); // 804C87D4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 804C87D8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 804C87DC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 804C87E0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804C87E4
  c->lr=c->r[0]; // 804C87E8
  c->r[1]=c->r[1]+0x000000A0u; // 804C87EC
  return; // 804C87F0
}

// CalcTexMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_804C87F4(Ctx* __restrict c) {
  trace_call(0x804C87F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C87F4
  c->r[0]=c->lr; // 804C87F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C87FC
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 804C8800
  cmpu(c,0,c->r[0],0x00000007u); // 804C8804
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804C8808
  c->r[31]=c->r[5]|c->r[5]; // 804C880C
  W32(c->r[1]+0x00000048u,c->r[30]); // 804C8810
  c->r[30]=c->r[4]|c->r[4]; // 804C8814
  W32(c->r[1]+0x00000044u,c->r[29]); // 804C8818
  c->r[29]=c->r[3]|c->r[3]; // 804C881C
  if (!crb(c,2)) { goto L_804C882C; } // 804C8820
  c->r[3]=0u+0x00000000u; // 804C8824
  goto L_804C8934; // 804C8828
L_804C882C:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C882C
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8830
  {uint32_t ea=c->r[2]+0x000016B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8834
  c->r[4]=c->r[1]+0x00000008u; // 804C8838
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C883C
  c->lr=0x804C8844u; f_804E11BC(c); // 804C8840
  cmps(c,0,(int32_t)c->r[30],0); // 804C8844
  if (crb(c,2)) { goto L_804C88BC; } // 804C8848
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C884C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8850
  {uint32_t ea=c->r[31]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8854
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 804C8858
  {uint32_t ea=c->r[2]+0x000016B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C885C
  c->f[5]=-c->f[6]; // 804C8860
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8864
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8868
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 804C886C
  {uint32_t ea=c->r[2]+0x000016B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8870
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8874
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 804C8878
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 804C887C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8880
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[4]);} // 804C8884
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8888
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 804C888C
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[2]);} // 804C8890
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8894
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 804C8898
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 804C889C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 804C88A0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[2]);} // 804C88A4
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 804C88A8
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 804C88AC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 804C88B0
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[3]);} // 804C88B4
  goto L_804C8930; // 804C88B8
L_804C88BC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C88BC
  c->r[4]=c->r[29]|c->r[29]; // 804C88C0
  {uint32_t ea=c->r[2]+0x000016B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C88C4
  c->r[5]=c->r[29]|c->r[29]; // 804C88C8
  c->f[1]=-c->f[2]; // 804C88CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C88D0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C88D4
  c->r[3]=c->r[1]+0x00000010u; // 804C88D8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C88DC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 804C88E0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 804C88E4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C88E8
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 804C88EC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C88F0
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[0]); // 804C88F4
  {uint32_t ea=c->r[2]+0x000016B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C88F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 804C88FC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 804C8900
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 804C8904
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 804C8908
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 804C890C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 804C8910
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 804C8914
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804C8918
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 804C891C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 804C8920
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804C8924
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 804C8928
  c->lr=0x804C8930u; f_80382F60(c); // 804C892C
L_804C8930:;
  c->r[3]=0u+0x00000001u; // 804C8930
L_804C8934:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 804C8934
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804C8938
  c->r[30]=R32(c->r[1]+0x00000048u); // 804C893C
  c->r[29]=R32(c->r[1]+0x00000044u); // 804C8940
  c->lr=c->r[0]; // 804C8944
  c->r[1]=c->r[1]+0x00000050u; // 804C8948
  return; // 804C894C
}

// CalcWorldMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_804C8950(Ctx* __restrict c) {
  trace_call(0x804C8950u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8950
  c->r[0]=c->lr; // 804C8954
  W32(c->r[1]+0x00000064u,c->r[0]); // 804C8958
  c->r[11]=c->r[1]+0x00000060u; // 804C895C
  c->lr=0x804C8964u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C8960
  c->r[31]=R32(c->r[8]+0x00000000u); // 804C8964
  c->r[26]=c->r[3]|c->r[3]; // 804C8968
  c->r[27]=c->r[4]|c->r[4]; // 804C896C
  c->r[28]=c->r[5]|c->r[5]; // 804C8970
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804C8974
  c->r[29]=c->r[7]|c->r[7]; // 804C8978
  c->r[30]=c->r[8]|c->r[8]; // 804C897C
  if (!crb(c,2)) { goto L_804C898C; } // 804C8980
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 804C8984
  if (crb(c,2)) { goto L_804C89B8; } // 804C8988
L_804C898C:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 804C898C
  if (crb(c,2)) { goto L_804C89A4; } // 804C8990
  c->r[3]=c->r[28]|c->r[28]; // 804C8994
  c->r[4]=c->r[26]|c->r[26]; // 804C8998
  c->lr=0x804C89A0u; f_80382F2C(c); // 804C899C
  goto L_804C8A54; // 804C89A0
L_804C89A4:;
  c->r[3]=c->r[26]|c->r[26]; // 804C89A4
  c->r[4]=c->r[28]|c->r[28]; // 804C89A8
  c->r[5]=c->r[6]|c->r[6]; // 804C89AC
  c->lr=0x804C89B4u; f_804E17A8(c); // 804C89B0
  goto L_804C8A54; // 804C89B4
L_804C89B8:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804C89B8
  if (crb(c,2)) { goto L_804C8A1C; } // 804C89BC
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 804C89C0
  if (crb(c,2)) { goto L_804C89F0; } // 804C89C4
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C89C8
  c->r[4]=c->r[28]|c->r[28]; // 804C89CC
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C89D0
  c->r[5]=c->r[1]+0x00000008u; // 804C89D4
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C89D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C89DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804C89E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804C89E4
  c->lr=0x804C89ECu; f_804E17FC(c); // 804C89E8
  goto L_804C8A54; // 804C89EC
L_804C89F0:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C89F0
  c->r[3]=c->r[8]+0x0000001Cu; // 804C89F4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C89F8
  c->r[4]=c->r[1]+0x00000018u; // 804C89FC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8A00
  c->lr=0x804C8A08u; f_8038360C(c); // 804C8A04
  c->r[3]=c->r[28]|c->r[28]; // 804C8A08
  c->r[5]=c->r[26]|c->r[26]; // 804C8A0C
  c->r[4]=c->r[1]+0x00000018u; // 804C8A10
  c->lr=0x804C8A18u; f_80382F60(c); // 804C8A14
  goto L_804C8A54; // 804C8A18
L_804C8A1C:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 804C8A1C
  if (crb(c,2)) { goto L_804C8A38; } // 804C8A20
  c->r[3]=c->r[28]|c->r[28]; // 804C8A24
  c->r[5]=c->r[26]|c->r[26]; // 804C8A28
  c->r[4]=c->r[8]+0x0000001Cu; // 804C8A2C
  c->lr=0x804C8A34u; f_80382F60(c); // 804C8A30
  goto L_804C8A54; // 804C8A34
L_804C8A38:;
  c->r[4]=c->r[28]|c->r[28]; // 804C8A38
  c->r[5]=c->r[6]|c->r[6]; // 804C8A3C
  c->lr=0x804C8A44u; f_804E17A8(c); // 804C8A40
  c->r[3]=c->r[26]|c->r[26]; // 804C8A44
  c->r[5]=c->r[26]|c->r[26]; // 804C8A48
  c->r[4]=c->r[30]+0x0000001Cu; // 804C8A4C
  c->lr=0x804C8A54u; f_80382F60(c); // 804C8A50
L_804C8A54:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804C8A54
  if (crb(c,2)) { goto L_804C8A74; } // 804C8A58
  {uint32_t ea=c->r[2]+0x000016B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8A5C
  c->r[4]=c->r[29]|0x40000000u; // 804C8A60
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 804C8A64
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 804C8A68
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 804C8A6C
  goto L_804C8A90; // 804C8A70
L_804C8A74:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8A74
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 804C8A78
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8A7C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8A80
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[2]);} // 804C8A84
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 804C8A88
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 804C8A8C
L_804C8A90:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804C8A90
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 804C8A94
  if (crb(c,2)) { goto L_804C8AA0; } // 804C8A98
  c->r[3]=c->r[4]|0x10000000u; // 804C8A9C
L_804C8AA0:;
  c->r[11]=c->r[1]+0x00000060u; // 804C8AA0
  c->lr=0x804C8AA8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C8AA4
  c->r[0]=R32(c->r[1]+0x00000064u); // 804C8AA8
  c->lr=c->r[0]; // 804C8AAC
  c->r[1]=c->r[1]+0x00000060u; // 804C8AB0
  return; // 804C8AB4
}

// fn_804C8AB8
void f_804C8AB8(Ctx* __restrict c) {
  trace_call(0x804C8AB8u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8AB8
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8ABC
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8AC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C8AC4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8AC8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804C8ACC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804C8AD0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804C8AD4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8AD8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804C8ADC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804C8AE0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C8AE4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8AE8
  return; // 804C8AEC
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8AF0(Ctx* __restrict c) {
  trace_call(0x804C8AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8AF0
  c->r[0]=c->lr; // 804C8AF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8AF8
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8AFC
  c->r[4]=c->r[1]+0x00000008u; // 804C8B00
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C8B04
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8B08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C8B0C
  c->r[31]=c->r[3]|c->r[3]; // 804C8B10
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8B14
  c->lr=0x804C8B1Cu; f_804E11BC(c); // 804C8B18
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8B1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8B20
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8B24
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[1]); // 804C8B28
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8B2C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804C8B30
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 804C8B34
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 804C8B38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8B3C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804C8B40
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 804C8B44
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 804C8B48
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 804C8B4C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C8B50
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8B54
  c->f[1]=-c->f[1]; // 804C8B58
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 804C8B5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8B60
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 804C8B64
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 804C8B68
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8B6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C8B70
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C8B74
  c->lr=c->r[0]; // 804C8B78
  c->r[1]=c->r[1]+0x00000020u; // 804C8B7C
  return; // 804C8B80
}

// fn_804C8B84
void f_804C8B84(Ctx* __restrict c) {
  trace_call(0x804C8B84u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8B84
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8B88
  c->f[1]=-c->f[0]; // 804C8B8C
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8B90
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8B94
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804C8B98
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804C8B9C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804C8BA0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C8BA4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804C8BA8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C8BAC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C8BB0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8BB4
  return; // 804C8BB8
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8BBC(Ctx* __restrict c) {
  trace_call(0x804C8BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8BBC
  c->r[0]=c->lr; // 804C8BC0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8BC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C8BC8
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8BCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C8BD0
  c->r[31]=c->r[4]|c->r[4]; // 804C8BD4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8BD8
  c->r[4]=c->r[1]+0x00000008u; // 804C8BDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C8BE0
  c->r[30]=c->r[3]|c->r[3]; // 804C8BE4
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8BE8
  c->lr=0x804C8BF0u; f_804E11BC(c); // 804C8BEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8BF0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C8BF4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8BF8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8BFC
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[1]); // 804C8C00
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[0]); // 804C8C04
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8C08
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[1]); // 804C8C0C
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8C10
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[0]); // 804C8C14
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[11]); // 804C8C18
  c->f[3]=-c->f[3]; // 804C8C1C
  {uint32_t ea=c->r[2]+0x000016D0u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8C20
  c->f[5]=c->ps1[5]=S(c->f[10]+c->f[9]); // 804C8C24
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8C28
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[7]); // 804C8C2C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[9]);} // 804C8C30
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[8]); // 804C8C34
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804C8C38
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 804C8C3C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 804C8C40
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 804C8C44
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C8C48
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 804C8C4C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8C50
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[11]);} // 804C8C54
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 804C8C58
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8C5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C8C60
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C8C64
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C8C68
  c->lr=c->r[0]; // 804C8C6C
  c->r[1]=c->r[1]+0x00000020u; // 804C8C70
  return; // 804C8C74
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8C78(Ctx* __restrict c) {
  trace_call(0x804C8C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8C78
  c->r[0]=c->lr; // 804C8C7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8C80
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C8C84
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8C88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C8C8C
  c->r[31]=c->r[4]|c->r[4]; // 804C8C90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8C94
  c->r[4]=c->r[1]+0x00000008u; // 804C8C98
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C8C9C
  c->r[30]=c->r[3]|c->r[3]; // 804C8CA0
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8CA4
  c->lr=0x804C8CACu; f_804E11BC(c); // 804C8CA8
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8CAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8CB0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8CB4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[1]); // 804C8CB8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8CBC
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[3]); // 804C8CC0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 804C8CC4
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8CC8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 804C8CCC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8CD0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8CD4
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[6]); // 804C8CD8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 804C8CDC
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[6]); // 804C8CE0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 804C8CE4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804C8CE8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C8CEC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8CF0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8CF4
  c->f[1]=-c->f[1]; // 804C8CF8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 804C8CFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8D00
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 804C8D04
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 804C8D08
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8D0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C8D10
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C8D14
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C8D18
  c->lr=c->r[0]; // 804C8D1C
  c->r[1]=c->r[1]+0x00000020u; // 804C8D20
  return; // 804C8D24
}

// fn_804C8D28
void f_804C8D28(Ctx* __restrict c) {
  trace_call(0x804C8D28u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8D28
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8D2C
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8D30
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8D34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C8D38
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8D3C
  c->f[4]=-c->f[6]; // 804C8D40
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8D44
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804C8D48
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 804C8D4C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804C8D50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 804C8D54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C8D58
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 804C8D5C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 804C8D60
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 804C8D64
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 804C8D68
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 804C8D6C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8D70
  return; // 804C8D74
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8D78(Ctx* __restrict c) {
  trace_call(0x804C8D78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8D78
  c->r[0]=c->lr; // 804C8D7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8D80
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C8D84
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8D88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C8D8C
  c->r[31]=c->r[4]|c->r[4]; // 804C8D90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8D94
  c->r[4]=c->r[1]+0x00000008u; // 804C8D98
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C8D9C
  c->r[30]=c->r[3]|c->r[3]; // 804C8DA0
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8DA4
  c->lr=0x804C8DACu; f_804E11BC(c); // 804C8DA8
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8DAC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8DB0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8DB4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 804C8DB8
  {uint32_t ea=c->r[2]+0x000016D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8DBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8DC0
  c->f[3]=-c->f[4]; // 804C8DC4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C8DC8
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[0]); // 804C8DCC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 804C8DD0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8DD4
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 804C8DD8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8DDC
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C8DE0
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[2]); // 804C8DE4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C8DE8
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 804C8DEC
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8DF0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8DF4
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 804C8DF8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804C8DFC
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[8]); // 804C8E00
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[7]);} // 804C8E04
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[5]); // 804C8E08
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 804C8E0C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 804C8E10
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8E14
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C8E18
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8E1C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804C8E20
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 804C8E24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8E28
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 804C8E2C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[7]);} // 804C8E30
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8E34
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 804C8E38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C8E3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C8E40
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C8E44
  c->lr=c->r[0]; // 804C8E48
  c->r[1]=c->r[1]+0x00000020u; // 804C8E4C
  return; // 804C8E50
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8E54(Ctx* __restrict c) {
  trace_call(0x804C8E54u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8E54
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8E58
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8E5C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 804C8E60
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8E64
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 804C8E68
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8E6C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8E70
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C8E74
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 804C8E78
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8E7C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C8E80
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 804C8E84
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C8E88
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8E8C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C8E90
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 804C8E94
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 804C8E98
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804C8E9C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 804C8EA0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 804C8EA4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 804C8EA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804C8EAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 804C8EB0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 804C8EB4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8EB8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C8EBC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 804C8EC0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8EC4
  return; // 804C8EC8
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8ECC(Ctx* __restrict c) {
  trace_call(0x804C8ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C8ECC
  c->r[0]=c->lr; // 804C8ED0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C8ED4
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8ED8
  c->r[4]=c->r[1]+0x00000008u; // 804C8EDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C8EE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C8EE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C8EE8
  c->r[31]=c->r[3]|c->r[3]; // 804C8EEC
  c->r[3]=c->r[1]+0x0000000Cu; // 804C8EF0
  c->lr=0x804C8EF8u; f_804E11BC(c); // 804C8EF4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 804C8EF8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8EFC
  c->f[1]=-c->f[10]; // 804C8F00
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C8F04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8F08
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[0]); // 804C8F0C
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[12]=c->ps1[12]=RF32(ea);} // 804C8F10
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 804C8F14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804C8F18
  {uint32_t ea=c->r[31]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C8F1C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C8F20
  {uint32_t ea=c->r[31]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8F24
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804C8F28
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[5]); // 804C8F2C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 804C8F30
  {uint32_t ea=c->r[31]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C8F34
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 804C8F38
  c->f[0]=c->ps1[0]=S(c->f[12]*c->f[10]); // 804C8F3C
  c->f[1]=c->ps1[1]=S(c->f[12]-c->f[4]); // 804C8F40
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 804C8F44
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C8F48
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8F4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 804C8F50
  c->f[2]=-c->f[3]; // 804C8F54
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C8F58
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[8]); // 804C8F5C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C8F60
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 804C8F64
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[11]); // 804C8F68
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[8]); // 804C8F6C
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[4]); // 804C8F70
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804C8F74
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[4]);} // 804C8F78
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 804C8F7C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8F80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C8F84
  c->f[2]=-c->f[3]; // 804C8F88
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[6]); // 804C8F8C
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 804C8F90
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[9]); // 804C8F94
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[6]); // 804C8F98
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[4]); // 804C8F9C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804C8FA0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 804C8FA4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 804C8FA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C8FAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C8FB0
  c->f[2]=-c->f[3]; // 804C8FB4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 804C8FB8
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 804C8FBC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 804C8FC0
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[5]); // 804C8FC4
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 804C8FC8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804C8FCC
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[4]); // 804C8FD0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804C8FD4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 804C8FD8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C8FDC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C8FE0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C8FE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C8FE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C8FEC
  c->lr=c->r[0]; // 804C8FF0
  c->r[1]=c->r[1]+0x00000020u; // 804C8FF4
  return; // 804C8FF8
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C8FFC(Ctx* __restrict c) {
  trace_call(0x804C8FFCu);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C8FFC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9000
  c->f[3]=-c->f[0]; // 804C9004
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9008
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C900C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804C9010
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9014
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9018
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C901C
  return; // 804C9020
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9024(Ctx* __restrict c) {
  trace_call(0x804C9024u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9024
  c->r[0]=c->lr; // 804C9028
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C902C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 804C9030
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 804C9034
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 804C9038
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 804C903C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 804C9040
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 804C9044
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 804C9048
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 804C904C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 804C9050
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 804C9054
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 804C9058
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 804C905C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9060
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9064
  c->r[31]=c->r[4]|c->r[4]; // 804C9068
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C906C
  c->r[4]=c->r[1]+0x00000008u; // 804C9070
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9074
  c->r[30]=c->r[3]|c->r[3]; // 804C9078
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C907C
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9080
  c->lr=0x804C9088u; f_804E11BC(c); // 804C9084
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9088
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C908C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9090
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[6]); // 804C9094
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9098
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C909C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[7]); // 804C90A0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C90A4
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[0]); // 804C90A8
  c->f[30]=-c->f[8]; // 804C90AC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C90B0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[10]); // 804C90B4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 804C90B8
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[10]); // 804C90BC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 804C90C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 804C90C4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C90C8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 804C90CC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 804C90D0
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[8]); // 804C90D4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 804C90D8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[4]); // 804C90DC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C90E0
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[8]); // 804C90E4
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[4]); // 804C90E8
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C90EC
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804C90F0
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 804C90F4
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 804C90F8
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 804C90FC
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 804C9100
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 804C9104
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 804C9108
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 804C910C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 804C9110
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 804C9114
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 804C9118
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 804C911C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 804C9120
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 804C9124
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 804C9128
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 804C912C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 804C9130
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 804C9134
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 804C9138
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 804C913C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804C9140
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 804C9144
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 804C9148
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 804C914C
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 804C9150
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 804C9154
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 804C9158
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C915C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 804C9160
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9164
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 804C9168
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C916C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 804C9170
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 804C9174
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 804C9178
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 804C917C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 804C9180
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 804C9184
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 804C9188
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 804C918C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 804C9190
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 804C9194
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 804C9198
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 804C919C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C91A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C91A4
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C91A8
  c->lr=c->r[0]; // 804C91AC
  c->r[1]=c->r[1]+0x00000080u; // 804C91B0
  return; // 804C91B4
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C91B8(Ctx* __restrict c) {
  trace_call(0x804C91B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C91B8
  c->r[0]=c->lr; // 804C91BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804C91C0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804C91C4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804C91C8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C91CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C91D0
  c->r[31]=c->r[4]|c->r[4]; // 804C91D4
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C91D8
  c->r[4]=c->r[1]+0x00000008u; // 804C91DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C91E0
  c->r[30]=c->r[3]|c->r[3]; // 804C91E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C91E8
  c->r[3]=c->r[1]+0x0000000Cu; // 804C91EC
  c->lr=0x804C91F4u; f_804E11BC(c); // 804C91F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C91F4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C91F8
  c->f[1]=-c->f[7]; // 804C91FC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9200
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9204
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 804C9208
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[12]=c->ps1[12]=RF32(ea);} // 804C920C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 804C9210
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804C9214
  {uint32_t ea=c->r[2]+0x000016D0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9218
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C921C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[13]=c->ps1[13]=RF32(ea);} // 804C9220
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804C9224
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[7]); // 804C9228
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 804C922C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9230
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 804C9234
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[5]); // 804C9238
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[12]); // 804C923C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 804C9240
  {uint32_t ea=c->r[30]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C9244
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9248
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C924C
  c->f[3]=-c->f[4]; // 804C9250
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9254
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[10]); // 804C9258
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 804C925C
  c->f[12]=c->ps1[12]=S(c->f[31]*c->f[13]); // 804C9260
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9264
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 804C9268
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C926C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[10]); // 804C9270
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9274
  c->f[6]=c->ps1[6]=S(c->f[12]+c->f[6]); // 804C9278
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804C927C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 804C9280
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[3]);} // 804C9284
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9288
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 804C928C
  c->f[3]=-c->f[4]; // 804C9290
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[8]); // 804C9294
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 804C9298
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[11]); // 804C929C
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[8]); // 804C92A0
  c->f[6]=c->ps1[6]=S(c->f[10]+c->f[6]); // 804C92A4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804C92A8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 804C92AC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[3]);} // 804C92B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C92B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C92B8
  c->f[3]=-c->f[4]; // 804C92BC
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[7]); // 804C92C0
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 804C92C4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 804C92C8
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 804C92CC
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[6]); // 804C92D0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804C92D4
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[6]); // 804C92D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 804C92DC
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[0]); // 804C92E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C92E4
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 804C92E8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804C92EC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C92F0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C92F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804C92F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804C92FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9300
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C9304
  c->r[0]=R32(c->r[1]+0x00000034u); // 804C9308
  c->lr=c->r[0]; // 804C930C
  c->r[1]=c->r[1]+0x00000030u; // 804C9310
  return; // 804C9314
}

// fn_804C9318
void f_804C9318(Ctx* __restrict c) {
  trace_call(0x804C9318u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9318
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C931C
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9320
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804C9324
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9328
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C932C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9330
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C9334
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9338
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 804C933C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9340
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 804C9344
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9348
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 804C934C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9350
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C9354
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9358
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C935C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 804C9360
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9364
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 804C9368
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 804C936C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 804C9370
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 804C9374
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 804C9378
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 804C937C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9380
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 804C9384
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 804C9388
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804C938C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C9390
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C9394
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9398
  return; // 804C939C
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C93A0(Ctx* __restrict c) {
  trace_call(0x804C93A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C93A0
  c->r[0]=c->lr; // 804C93A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 804C93A8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 804C93AC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 804C93B0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 804C93B4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 804C93B8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 804C93BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 804C93C0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 804C93C4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 804C93C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 804C93CC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 804C93D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 804C93D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 804C93D8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C93DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C93E0
  c->r[31]=c->r[4]|c->r[4]; // 804C93E4
  {uint32_t ea=c->r[2]+0x000016C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C93E8
  c->r[4]=c->r[1]+0x00000008u; // 804C93EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C93F0
  c->r[30]=c->r[3]|c->r[3]; // 804C93F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C93F8
  c->r[3]=c->r[1]+0x0000000Cu; // 804C93FC
  c->lr=0x804C9404u; f_804E11BC(c); // 804C9400
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9404
  {uint32_t ea=c->r[31]+0x00000004u; c->f[27]=c->ps1[27]=RF32(ea);} // 804C9408
  {uint32_t ea=c->r[2]+0x000016CCu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C940C
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[2]); // 804C9410
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9414
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C9418
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 804C941C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9420
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9424
  c->f[5]=c->ps1[5]=S(c->f[7]-c->f[1]); // 804C9428
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C942C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9430
  c->f[30]=-c->f[4]; // 804C9434
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 804C9438
  c->f[10]=c->ps1[10]=S(c->f[7]-c->f[1]); // 804C943C
  c->f[3]=c->ps1[3]=S(c->f[27]*c->f[9]); // 804C9440
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 804C9444
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[9]); // 804C9448
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[7]); // 804C944C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 804C9450
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 804C9454
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[27]); // 804C9458
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 804C945C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804C9460
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[4]); // 804C9464
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9468
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[8]); // 804C946C
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 804C9470
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C9474
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 804C9478
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804C947C
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 804C9480
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 804C9484
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 804C9488
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 804C948C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 804C9490
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 804C9494
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 804C9498
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 804C949C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 804C94A0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 804C94A4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 804C94A8
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[9]); // 804C94AC
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[8]); // 804C94B0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 804C94B4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 804C94B8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 804C94BC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 804C94C0
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 804C94C4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804C94C8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 804C94CC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 804C94D0
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 804C94D4
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 804C94D8
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 804C94DC
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 804C94E0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 804C94E4
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 804C94E8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C94EC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 804C94F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C94F4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 804C94F8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C94FC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 804C9500
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 804C9504
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 804C9508
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 804C950C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 804C9510
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 804C9514
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 804C9518
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 804C951C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 804C9520
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 804C9524
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 804C9528
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 804C952C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9530
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C9534
  c->r[0]=R32(c->r[1]+0x00000084u); // 804C9538
  c->lr=c->r[0]; // 804C953C
  c->r[1]=c->r[1]+0x00000080u; // 804C9540
  return; // 804C9544
}

// CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_804C9548(Ctx* __restrict c) {
  trace_call(0x804C9548u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9548
  c->r[0]=c->lr; // 804C954C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804C9550
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 804C9554
  cmpu(c,0,c->r[0],0x00000007u); // 804C9558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804C955C
  c->r[31]=c->r[3]|c->r[3]; // 804C9560
  if (!crb(c,2)) { goto L_804C9570; } // 804C9564
  c->r[3]=0u+0x00000000u; // 804C9568
  goto L_804C95D0; // 804C956C
L_804C9570:;
  cmps(c,0,(int32_t)c->r[4],0); // 804C9570
  if (crb(c,2)) { goto L_804C9598; } // 804C9574
  c->r[6]=0u+0x806B0000u; // 804C9578
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C957C
  c->r[6]=c->r[6]+0xFFFFBDF0u; // 804C9580
  c->r[4]=c->r[5]|c->r[5]; // 804C9584
  c->r[12]=R32(c->r[6]+c->r[0]); // 804C9588
  c->ctr=c->r[12]; // 804C958C
  if (true) { c->lr=0x804C9594u; dispatch(c,c->ctr); } // 804C9590
  goto L_804C95B4; // 804C9594
L_804C9598:;
  c->r[6]=0u+0x806B0000u; // 804C9598
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804C959C
  c->r[6]=c->r[6]+0xFFFFBE0Cu; // 804C95A0
  c->r[4]=c->r[5]|c->r[5]; // 804C95A4
  c->r[12]=R32(c->r[6]+c->r[0]); // 804C95A8
  c->ctr=c->r[12]; // 804C95AC
  if (true) { c->lr=0x804C95B4u; dispatch(c,c->ctr); } // 804C95B0
L_804C95B4:;
  {uint32_t ea=c->r[2]+0x000016C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C95B4
  c->r[3]=0u+0x00000001u; // 804C95B8
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C95BC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804C95C0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804C95C4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804C95C8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 804C95CC
L_804C95D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804C95D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804C95D4
  c->lr=c->r[0]; // 804C95D8
  c->r[1]=c->r[1]+0x00000010u; // 804C95DC
  return; // 804C95E0
}

// fn_804C95E4
void f_804C95E4(Ctx* __restrict c) {
  trace_call(0x804C95E4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C95E4
  c->r[0]=c->lr; // 804C95E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 804C95EC
  c->r[11]=c->r[1]+0x00000070u; // 804C95F0
  c->lr=0x804C95F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804C95F4
  c->r[31]=R32(c->r[8]+0x00000000u); // 804C95F8
  c->r[25]=c->r[3]|c->r[3]; // 804C95FC
  c->r[26]=c->r[4]|c->r[4]; // 804C9600
  c->r[27]=c->r[5]|c->r[5]; // 804C9604
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804C9608
  c->r[28]=c->r[6]|c->r[6]; // 804C960C
  c->r[29]=c->r[7]|c->r[7]; // 804C9610
  c->r[30]=c->r[8]|c->r[8]; // 804C9614
  if (!crb(c,2)) { goto L_804C9624; } // 804C9618
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 804C961C
  if (crb(c,2)) { goto L_804C9634; } // 804C9620
L_804C9624:;
  c->r[3]=c->r[27]|c->r[27]; // 804C9624
  c->r[4]=c->r[25]|c->r[25]; // 804C9628
  c->lr=0x804C9630u; f_80382F2C(c); // 804C962C
  goto L_804C9714; // 804C9630
L_804C9634:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804C9634
  if (crb(c,2)) { goto L_804C96AC; } // 804C9638
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 804C963C
  if (crb(c,2)) { goto L_804C966C; } // 804C9640
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9644
  c->r[4]=c->r[27]|c->r[27]; // 804C9648
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C964C
  c->r[5]=c->r[1]+0x00000014u; // 804C9650
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9654
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804C9658
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804C965C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804C9660
  c->lr=0x804C9668u; f_804E17FC(c); // 804C9664
  goto L_804C9714; // 804C9668
L_804C966C:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C966C
  c->r[4]=c->r[27]|c->r[27]; // 804C9670
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9674
  c->r[5]=c->r[1]+0x00000008u; // 804C9678
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C967C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804C9680
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9684
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9688
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C968C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804C9690
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804C9694
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C9698
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C969C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804C96A0
  c->lr=0x804C96A8u; f_804E17FC(c); // 804C96A4
  goto L_804C9714; // 804C96A8
L_804C96AC:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 804C96AC
  if (crb(c,2)) { goto L_804C96C8; } // 804C96B0
  c->r[3]=c->r[27]|c->r[27]; // 804C96B4
  c->r[5]=c->r[25]|c->r[25]; // 804C96B8
  c->r[4]=c->r[8]+0x0000001Cu; // 804C96BC
  c->lr=0x804C96C4u; f_80382F60(c); // 804C96C0
  goto L_804C9714; // 804C96C4
L_804C96C8:;
  c->r[3]=c->r[8]+0x0000001Cu; // 804C96C8
  c->r[4]=c->r[1]+0x00000020u; // 804C96CC
  c->lr=0x804C96D4u; f_80382F2C(c); // 804C96D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C96D4
  c->r[3]=c->r[27]|c->r[27]; // 804C96D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C96DC
  c->r[5]=c->r[25]|c->r[25]; // 804C96E0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C96E4
  c->r[4]=c->r[1]+0x00000020u; // 804C96E8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804C96EC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C96F0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C96F4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C96F8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804C96FC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 804C9700
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804C9704
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 804C9708
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 804C970C
  c->lr=0x804C9714u; f_80382F60(c); // 804C9710
L_804C9714:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804C9714
  if (crb(c,2)) { goto L_804C9734; } // 804C9718
  {uint32_t ea=c->r[2]+0x000016C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C971C
  c->r[4]=c->r[29]|0x40000000u; // 804C9720
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 804C9724
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[0]);} // 804C9728
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 804C972C
  goto L_804C9750; // 804C9730
L_804C9734:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9734
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 804C9738
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C973C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9740
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 804C9744
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 804C9748
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 804C974C
L_804C9750:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804C9750
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 804C9754
  if (crb(c,2)) { goto L_804C9760; } // 804C9758
  c->r[3]=c->r[4]|0x10000000u; // 804C975C
L_804C9760:;
  c->r[11]=c->r[1]+0x00000070u; // 804C9760
  c->lr=0x804C9768u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804C9764
  c->r[0]=R32(c->r[1]+0x00000074u); // 804C9768
  c->lr=c->r[0]; // 804C976C
  c->r[1]=c->r[1]+0x00000070u; // 804C9770
  return; // 804C9774
}

// fn_804C9778
void f_804C9778(Ctx* __restrict c) {
  trace_call(0x804C9778u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9778
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C977C
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9780
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C9784
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9788
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804C978C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804C9790
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804C9794
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9798
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804C979C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804C97A0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C97A4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C97A8
  return; // 804C97AC
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C97B0(Ctx* __restrict c) {
  trace_call(0x804C97B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C97B0
  c->r[0]=c->lr; // 804C97B4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C97B8
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C97BC
  c->r[4]=c->r[1]+0x00000008u; // 804C97C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C97C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C97C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C97CC
  c->r[31]=c->r[3]|c->r[3]; // 804C97D0
  c->r[3]=c->r[1]+0x0000000Cu; // 804C97D4
  c->lr=0x804C97DCu; f_804E11BC(c); // 804C97D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C97DC
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C97E0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804C97E4
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C97E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C97EC
  c->f[0]=-c->f[0]; // 804C97F0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 804C97F4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804C97F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C97FC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804C9800
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9804
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 804C9808
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C980C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 804C9810
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 804C9814
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9818
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804C981C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9824
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C9828
  c->lr=c->r[0]; // 804C982C
  c->r[1]=c->r[1]+0x00000020u; // 804C9830
  return; // 804C9834
}

// fn_804C9838
void f_804C9838(Ctx* __restrict c) {
  trace_call(0x804C9838u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9838
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C983C
  c->f[1]=-c->f[0]; // 804C9840
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9844
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9848
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804C984C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804C9850
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804C9854
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C9858
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804C985C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C9860
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C9864
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9868
  return; // 804C986C
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9870(Ctx* __restrict c) {
  trace_call(0x804C9870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9870
  c->r[0]=c->lr; // 804C9874
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9878
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C987C
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9880
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9884
  c->r[31]=c->r[4]|c->r[4]; // 804C9888
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C988C
  c->r[4]=c->r[1]+0x00000008u; // 804C9890
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9894
  c->r[30]=c->r[3]|c->r[3]; // 804C9898
  c->r[3]=c->r[1]+0x0000000Cu; // 804C989C
  c->lr=0x804C98A4u; f_804E11BC(c); // 804C98A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C98A4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C98A8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C98AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C98B0
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[0]); // 804C98B4
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 804C98B8
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C98BC
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[4]); // 804C98C0
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C98C4
  c->f[1]=-c->f[7]; // 804C98C8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 804C98CC
  c->f[3]=-c->f[6]; // 804C98D0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 804C98D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C98D8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804C98DC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[3]);} // 804C98E0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[6]);} // 804C98E4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 804C98E8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[7]);} // 804C98EC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 804C98F0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C98F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C98F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C98FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C9900
  c->lr=c->r[0]; // 804C9904
  c->r[1]=c->r[1]+0x00000020u; // 804C9908
  return; // 804C990C
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9910(Ctx* __restrict c) {
  trace_call(0x804C9910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9910
  c->r[0]=c->lr; // 804C9914
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9918
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C991C
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9920
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9924
  c->r[31]=c->r[4]|c->r[4]; // 804C9928
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C992C
  c->r[4]=c->r[1]+0x00000008u; // 804C9930
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9934
  c->r[30]=c->r[3]|c->r[3]; // 804C9938
  c->r[3]=c->r[1]+0x0000000Cu; // 804C993C
  c->lr=0x804C9944u; f_804E11BC(c); // 804C9940
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9944
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9948
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804C994C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9950
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9954
  {uint32_t ea=c->r[31]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9958
  c->f[1]=-c->f[0]; // 804C995C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 804C9960
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9964
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 804C9968
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C996C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9970
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[6]); // 804C9974
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 804C9978
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804C997C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804C9980
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 804C9984
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9988
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 804C998C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9990
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 804C9994
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 804C9998
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C999C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C99A0
  c->f[3]=-c->f[4]; // 804C99A4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[6]); // 804C99A8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 804C99AC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804C99B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C99B4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C99B8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C99BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C99C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C99C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C99C8
  c->lr=c->r[0]; // 804C99CC
  c->r[1]=c->r[1]+0x00000020u; // 804C99D0
  return; // 804C99D4
}

// fn_804C99D8
void f_804C99D8(Ctx* __restrict c) {
  trace_call(0x804C99D8u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C99D8
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C99DC
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C99E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C99E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C99E8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C99EC
  c->f[4]=-c->f[6]; // 804C99F0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C99F4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804C99F8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 804C99FC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804C9A00
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 804C9A04
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9A08
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 804C9A0C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 804C9A10
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 804C9A14
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 804C9A18
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 804C9A1C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9A20
  return; // 804C9A24
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9A28(Ctx* __restrict c) {
  trace_call(0x804C9A28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9A28
  c->r[0]=c->lr; // 804C9A2C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9A30
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C9A34
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9A38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9A3C
  c->r[31]=c->r[4]|c->r[4]; // 804C9A40
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C9A44
  c->r[4]=c->r[1]+0x00000008u; // 804C9A48
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9A4C
  c->r[30]=c->r[3]|c->r[3]; // 804C9A50
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9A54
  c->lr=0x804C9A5Cu; f_804E11BC(c); // 804C9A58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9A5C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9A60
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9A64
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9A68
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[3]); // 804C9A6C
  c->f[10]=c->ps1[10]=S(c->f[0]*c->f[2]); // 804C9A70
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9A74
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[3]); // 804C9A78
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9A7C
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 804C9A80
  c->f[3]=-c->f[9]; // 804C9A84
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[1]); // 804C9A88
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9A8C
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[1]); // 804C9A90
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9A94
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 804C9A98
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804C9A9C
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[4]); // 804C9AA0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[7]);} // 804C9AA4
  c->f[5]=c->ps1[5]=S(c->f[8]-c->f[5]); // 804C9AA8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9AAC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 804C9AB0
  c->f[4]=-c->f[8]; // 804C9AB4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 804C9AB8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[10]);} // 804C9ABC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C9AC0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[9]);} // 804C9AC4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 804C9AC8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 804C9ACC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9AD0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9AD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9AD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C9ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C9AE0
  c->lr=c->r[0]; // 804C9AE4
  c->r[1]=c->r[1]+0x00000020u; // 804C9AE8
  return; // 804C9AEC
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9AF0(Ctx* __restrict c) {
  trace_call(0x804C9AF0u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9AF0
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9AF4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9AF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C9AFC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9B00
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9B04
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9B08
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 804C9B0C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C9B10
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 804C9B14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9B18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 804C9B1C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C9B20
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9B24
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9B28
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 804C9B2C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9B30
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 804C9B34
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804C9B38
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 804C9B3C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[9]); // 804C9B40
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9B44
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 804C9B48
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 804C9B4C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 804C9B50
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 804C9B54
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C9B58
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C9B5C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9B60
  return; // 804C9B64
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9B68(Ctx* __restrict c) {
  trace_call(0x804C9B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9B68
  c->r[0]=c->lr; // 804C9B6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9B70
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9B74
  c->r[4]=c->r[1]+0x00000008u; // 804C9B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C9B7C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C9B80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9B84
  c->r[31]=c->r[3]|c->r[3]; // 804C9B88
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9B8C
  c->lr=0x804C9B94u; f_804E11BC(c); // 804C9B90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9B94
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9B98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9B9C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9BA0
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[2]); // 804C9BA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 804C9BA8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C9BAC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804C9BB0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9BB4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C9BB8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9BBC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 804C9BC0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9BC4
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[0]); // 804C9BC8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9BCC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9BD0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 804C9BD4
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9BD8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 804C9BDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9BE0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9BE4
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 804C9BE8
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[2]); // 804C9BEC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[9]); // 804C9BF0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 804C9BF4
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 804C9BF8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C9BFC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[6]);} // 804C9C00
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 804C9C04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9C08
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9C0C
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 804C9C10
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804C9C14
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 804C9C18
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 804C9C1C
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 804C9C20
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9C24
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 804C9C28
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804C9C2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9C30
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9C34
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 804C9C38
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 804C9C3C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 804C9C40
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804C9C44
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9C48
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 804C9C4C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804C9C50
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C9C54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C9C58
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9C5C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9C60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9C64
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C9C68
  c->lr=c->r[0]; // 804C9C6C
  c->r[1]=c->r[1]+0x00000020u; // 804C9C70
  return; // 804C9C74
}

// fn_804C9C78
void f_804C9C78(Ctx* __restrict c) {
  trace_call(0x804C9C78u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9C78
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9C7C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9C80
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9C84
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804C9C88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9C8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9C90
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9C94
  return; // 804C9C98
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9C9C(Ctx* __restrict c) {
  trace_call(0x804C9C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9C9C
  c->r[0]=c->lr; // 804C9CA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804C9CA4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804C9CA8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804C9CAC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804C9CB0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804C9CB4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9CB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9CBC
  c->r[31]=c->r[4]|c->r[4]; // 804C9CC0
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9CC4
  c->r[4]=c->r[1]+0x00000008u; // 804C9CC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9CCC
  c->r[30]=c->r[3]|c->r[3]; // 804C9CD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C9CD4
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9CD8
  c->lr=0x804C9CE0u; f_804E11BC(c); // 804C9CDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9CE0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9CE4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9CE8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 804C9CEC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9CF0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 804C9CF4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9CF8
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 804C9CFC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9D00
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 804C9D04
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804C9D08
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[7]); // 804C9D0C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 804C9D10
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[6]); // 804C9D14
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C9D18
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 804C9D1C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9D20
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 804C9D24
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9D28
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 804C9D2C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C9D30
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 804C9D34
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9D38
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 804C9D3C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 804C9D40
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 804C9D44
  c->f[12]=c->ps1[12]=S(c->f[1]*c->f[13]); // 804C9D48
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[30]); // 804C9D4C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[4]);} // 804C9D50
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[11]); // 804C9D54
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[12]); // 804C9D58
  c->f[12]=c->ps1[12]=S(c->f[1]+c->f[6]); // 804C9D5C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[13]); // 804C9D60
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[10]); // 804C9D64
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 804C9D68
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[6]); // 804C9D6C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[12]);} // 804C9D70
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[10]); // 804C9D74
  c->f[10]=c->ps1[10]=S(c->f[5]-c->f[4]); // 804C9D78
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[11]); // 804C9D7C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 804C9D80
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[9]); // 804C9D84
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[8]); // 804C9D88
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 804C9D8C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 804C9D90
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[9]); // 804C9D94
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804C9D98
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 804C9D9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9DA0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 804C9DA4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804C9DA8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 804C9DAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804C9DB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804C9DB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804C9DB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804C9DBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9DC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C9DC4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804C9DC8
  c->lr=c->r[0]; // 804C9DCC
  c->r[1]=c->r[1]+0x00000040u; // 804C9DD0
  return; // 804C9DD4
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9DD8(Ctx* __restrict c) {
  trace_call(0x804C9DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9DD8
  c->r[0]=c->lr; // 804C9DDC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9DE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804C9DE4
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9DE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9DEC
  c->r[31]=c->r[4]|c->r[4]; // 804C9DF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C9DF4
  c->r[4]=c->r[1]+0x00000008u; // 804C9DF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9DFC
  c->r[30]=c->r[3]|c->r[3]; // 804C9E00
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9E04
  c->lr=0x804C9E0Cu; f_804E11BC(c); // 804C9E08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9E0C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9E10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9E14
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 804C9E18
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9E1C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804C9E20
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9E24
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804C9E28
  {uint32_t ea=c->r[30]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9E2C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 804C9E30
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9E34
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 804C9E38
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9E3C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9E40
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 804C9E44
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9E48
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 804C9E4C
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 804C9E50
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9E54
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 804C9E58
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9E5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 804C9E60
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 804C9E64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9E68
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 804C9E6C
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9E70
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[7]); // 804C9E74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[10]); // 804C9E78
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[7]); // 804C9E7C
  c->f[4]=c->ps1[4]=S(c->f[9]-c->f[4]); // 804C9E80
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9E84
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 804C9E88
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 804C9E8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9E90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804C9E94
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[6]); // 804C9E98
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[8]); // 804C9E9C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[8]); // 804C9EA0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[6]); // 804C9EA4
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[4]); // 804C9EA8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9EAC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 804C9EB0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 804C9EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9EB8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9EBC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 804C9EC0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 804C9EC4
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 804C9EC8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804C9ECC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804C9ED0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 804C9ED4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804C9ED8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804C9EDC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804C9EE0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804C9EE4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9EE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804C9EEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804C9EF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804C9EF4
  c->lr=c->r[0]; // 804C9EF8
  c->r[1]=c->r[1]+0x00000020u; // 804C9EFC
  return; // 804C9F00
}

// fn_804C9F04
void f_804C9F04(Ctx* __restrict c) {
  trace_call(0x804C9F04u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9F04
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9F08
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9F0C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804C9F10
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9F14
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9F18
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9F1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804C9F20
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9F24
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 804C9F28
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 804C9F2C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 804C9F30
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9F34
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 804C9F38
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804C9F3C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804C9F40
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9F44
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804C9F48
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 804C9F4C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804C9F50
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 804C9F54
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 804C9F58
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 804C9F5C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 804C9F60
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 804C9F64
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 804C9F68
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804C9F6C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 804C9F70
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 804C9F74
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804C9F78
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804C9F7C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804C9F80
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804C9F84
  return; // 804C9F88
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804C9F8C(Ctx* __restrict c) {
  trace_call(0x804C9F8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804C9F8C
  c->r[0]=c->lr; // 804C9F90
  W32(c->r[1]+0x00000054u,c->r[0]); // 804C9F94
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804C9F98
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804C9F9C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804C9FA0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804C9FA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 804C9FA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 804C9FAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9FB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804C9FB4
  c->r[31]=c->r[4]|c->r[4]; // 804C9FB8
  {uint32_t ea=c->r[2]+0x000016E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9FBC
  c->r[4]=c->r[1]+0x00000008u; // 804C9FC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804C9FC4
  c->r[30]=c->r[3]|c->r[3]; // 804C9FC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804C9FCC
  c->r[3]=c->r[1]+0x0000000Cu; // 804C9FD0
  c->lr=0x804C9FD8u; f_804E11BC(c); // 804C9FD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9FD8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804C9FDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804C9FE0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804C9FE4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 804C9FE8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[6]); // 804C9FEC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804C9FF0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804C9FF4
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[5]); // 804C9FF8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804C9FFC
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[1]); // 804CA000
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 804CA004
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA008
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804CA00C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 804CA010
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 804CA014
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 804CA018
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[7]); // 804CA01C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 804CA020
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[4]); // 804CA024
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[4]); // 804CA028
  {uint32_t ea=c->r[30]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CA02C
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 804CA030
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CA034
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA038
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[7]); // 804CA03C
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 804CA040
  {uint32_t ea=c->r[30]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CA044
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 804CA048
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[6]); // 804CA04C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CA050
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[13]); // 804CA054
  c->f[13]=c->ps1[13]=S(c->f[4]+c->f[5]); // 804CA058
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[29]); // 804CA05C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[8]);} // 804CA060
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[31]); // 804CA064
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[12]); // 804CA068
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[30]);} // 804CA06C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[11]); // 804CA070
  c->f[29]=c->ps1[29]=S(c->f[7]+c->f[6]); // 804CA074
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[13]);} // 804CA078
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[12]); // 804CA07C
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[4]); // 804CA080
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[11]); // 804CA084
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[29]);} // 804CA088
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[10]); // 804CA08C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[9]); // 804CA090
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[8]);} // 804CA094
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[9]); // 804CA098
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[10]); // 804CA09C
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804CA0A0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 804CA0A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA0A8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 804CA0AC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804CA0B0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 804CA0B4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804CA0B8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804CA0BC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804CA0C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804CA0C4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 804CA0C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 804CA0CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA0D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CA0D4
  c->r[0]=R32(c->r[1]+0x00000054u); // 804CA0D8
  c->lr=c->r[0]; // 804CA0DC
  c->r[1]=c->r[1]+0x00000050u; // 804CA0E0
  return; // 804CA0E4
}

// CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_804CA0E8(Ctx* __restrict c) {
  trace_call(0x804CA0E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA0E8
  c->r[0]=c->lr; // 804CA0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CA0F0
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 804CA0F4
  cmpu(c,0,c->r[0],0x00000007u); // 804CA0F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CA0FC
  c->r[31]=c->r[3]|c->r[3]; // 804CA100
  if (!crb(c,2)) { goto L_804CA110; } // 804CA104
  c->r[3]=0u+0x00000000u; // 804CA108
  goto L_804CA170; // 804CA10C
L_804CA110:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CA110
  if (crb(c,2)) { goto L_804CA138; } // 804CA114
  c->r[6]=0u+0x806B0000u; // 804CA118
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CA11C
  c->r[6]=c->r[6]+0xFFFFBE28u; // 804CA120
  c->r[4]=c->r[5]|c->r[5]; // 804CA124
  c->r[12]=R32(c->r[6]+c->r[0]); // 804CA128
  c->ctr=c->r[12]; // 804CA12C
  if (true) { c->lr=0x804CA134u; dispatch(c,c->ctr); } // 804CA130
  goto L_804CA154; // 804CA134
L_804CA138:;
  c->r[6]=0u+0x806B0000u; // 804CA138
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CA13C
  c->r[6]=c->r[6]+0xFFFFBE44u; // 804CA140
  c->r[4]=c->r[5]|c->r[5]; // 804CA144
  c->r[12]=R32(c->r[6]+c->r[0]); // 804CA148
  c->ctr=c->r[12]; // 804CA14C
  if (true) { c->lr=0x804CA154u; dispatch(c,c->ctr); } // 804CA150
L_804CA154:;
  {uint32_t ea=c->r[2]+0x000016D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA154
  c->r[3]=0u+0x00000001u; // 804CA158
  {uint32_t ea=c->r[2]+0x000016DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA15C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804CA160
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804CA164
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804CA168
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 804CA16C
L_804CA170:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CA170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CA174
  c->lr=c->r[0]; // 804CA178
  c->r[1]=c->r[1]+0x00000010u; // 804CA17C
  return; // 804CA180
}

// fn_804CA184
void f_804CA184(Ctx* __restrict c) {
  trace_call(0x804CA184u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA184
  c->r[0]=c->lr; // 804CA188
  W32(c->r[1]+0x00000074u,c->r[0]); // 804CA18C
  c->r[11]=c->r[1]+0x00000070u; // 804CA190
  c->lr=0x804CA198u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CA194
  c->r[31]=R32(c->r[8]+0x00000000u); // 804CA198
  c->r[25]=c->r[3]|c->r[3]; // 804CA19C
  c->r[26]=c->r[4]|c->r[4]; // 804CA1A0
  c->r[27]=c->r[5]|c->r[5]; // 804CA1A4
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804CA1A8
  c->r[28]=c->r[6]|c->r[6]; // 804CA1AC
  c->r[29]=c->r[7]|c->r[7]; // 804CA1B0
  c->r[30]=c->r[8]|c->r[8]; // 804CA1B4
  if (!crb(c,2)) { goto L_804CA1C4; } // 804CA1B8
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 804CA1BC
  if (crb(c,2)) { goto L_804CA1D4; } // 804CA1C0
L_804CA1C4:;
  c->r[3]=c->r[27]|c->r[27]; // 804CA1C4
  c->r[4]=c->r[25]|c->r[25]; // 804CA1C8
  c->lr=0x804CA1D0u; f_80382F2C(c); // 804CA1CC
  goto L_804CA2B4; // 804CA1D0
L_804CA1D4:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804CA1D4
  if (crb(c,2)) { goto L_804CA24C; } // 804CA1D8
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 804CA1DC
  if (crb(c,2)) { goto L_804CA20C; } // 804CA1E0
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA1E4
  c->r[4]=c->r[27]|c->r[27]; // 804CA1E8
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA1EC
  c->r[5]=c->r[1]+0x00000014u; // 804CA1F0
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA1F4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804CA1F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804CA1FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804CA200
  c->lr=0x804CA208u; f_804E17FC(c); // 804CA204
  goto L_804CA2B4; // 804CA208
L_804CA20C:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA20C
  c->r[4]=c->r[27]|c->r[27]; // 804CA210
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA214
  c->r[5]=c->r[1]+0x00000008u; // 804CA218
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA21C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804CA220
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA224
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA228
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA22C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804CA230
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804CA234
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804CA238
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA23C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804CA240
  c->lr=0x804CA248u; f_804E17FC(c); // 804CA244
  goto L_804CA2B4; // 804CA248
L_804CA24C:;
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 804CA24C
  if (crb(c,2)) { goto L_804CA268; } // 804CA250
  c->r[3]=c->r[27]|c->r[27]; // 804CA254
  c->r[5]=c->r[25]|c->r[25]; // 804CA258
  c->r[4]=c->r[8]+0x0000001Cu; // 804CA25C
  c->lr=0x804CA264u; f_80382F60(c); // 804CA260
  goto L_804CA2B4; // 804CA264
L_804CA268:;
  c->r[3]=c->r[8]+0x0000001Cu; // 804CA268
  c->r[4]=c->r[1]+0x00000020u; // 804CA26C
  c->lr=0x804CA274u; f_80382F2C(c); // 804CA270
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA274
  c->r[3]=c->r[27]|c->r[27]; // 804CA278
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA27C
  c->r[5]=c->r[25]|c->r[25]; // 804CA280
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA284
  c->r[4]=c->r[1]+0x00000020u; // 804CA288
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804CA28C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA290
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA294
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA298
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804CA29C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 804CA2A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804CA2A4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 804CA2A8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 804CA2AC
  c->lr=0x804CA2B4u; f_80382F60(c); // 804CA2B0
L_804CA2B4:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804CA2B4
  if (crb(c,2)) { goto L_804CA2DC; } // 804CA2B8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA2BC
  c->r[4]=c->r[29]|0x40000000u; // 804CA2C0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA2C4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA2C8
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 804CA2CC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 804CA2D0
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 804CA2D4
  goto L_804CA310; // 804CA2D8
L_804CA2DC:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA2DC
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 804CA2E0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA2E4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA2E8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 804CA2EC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA2F0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA2F4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA2F8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804CA2FC
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[4]);} // 804CA300
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804CA304
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[2]);} // 804CA308
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 804CA30C
L_804CA310:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804CA310
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 804CA314
  if (crb(c,2)) { goto L_804CA320; } // 804CA318
  c->r[3]=c->r[4]|0x10000000u; // 804CA31C
L_804CA320:;
  c->r[11]=c->r[1]+0x00000070u; // 804CA320
  c->lr=0x804CA328u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CA324
  c->r[0]=R32(c->r[1]+0x00000074u); // 804CA328
  c->lr=c->r[0]; // 804CA32C
  c->r[1]=c->r[1]+0x00000070u; // 804CA330
  return; // 804CA334
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA338(Ctx* __restrict c) {
  trace_call(0x804CA338u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA338
  {uint32_t ea=c->r[2]+0x000016F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA33C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA340
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804CA344
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA348
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804CA34C
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA350
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[5]);} // 804CA354
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804CA358
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804CA35C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 804CA360
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 804CA364
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA368
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804CA36C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804CA370
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 804CA374
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA378
  return; // 804CA37C
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA380(Ctx* __restrict c) {
  trace_call(0x804CA380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA380
  c->r[0]=c->lr; // 804CA384
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA388
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA38C
  c->r[4]=c->r[1]+0x00000008u; // 804CA390
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CA394
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA398
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA39C
  c->r[31]=c->r[3]|c->r[3]; // 804CA3A0
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA3A4
  c->lr=0x804CA3ACu; f_804E11BC(c); // 804CA3A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA3AC
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA3B0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804CA3B4
  {uint32_t ea=c->r[2]+0x000016F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA3B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA3BC
  {uint32_t ea=c->r[2]+0x000016F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA3C0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804CA3C4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 804CA3C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA3CC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA3D0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA3D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804CA3D8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804CA3DC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804CA3E0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA3E4
  c->f[0]=-c->f[0]; // 804CA3E8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 804CA3EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA3F0
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 804CA3F4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 804CA3F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA3FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA400
  c->f[1]=-c->f[1]; // 804CA404
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA408
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804CA40C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804CA410
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA414
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA418
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CA41C
  c->lr=c->r[0]; // 804CA420
  c->r[1]=c->r[1]+0x00000020u; // 804CA424
  return; // 804CA428
}

// fn_804CA42C
void f_804CA42C(Ctx* __restrict c) {
  trace_call(0x804CA42Cu);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA42C
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA430
  c->f[1]=-c->f[0]; // 804CA434
  {uint32_t ea=c->r[2]+0x000016F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA438
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA43C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804CA440
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804CA444
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 804CA448
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804CA44C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804CA450
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804CA454
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804CA458
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA45C
  return; // 804CA460
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA464(Ctx* __restrict c) {
  trace_call(0x804CA464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA464
  c->r[0]=c->lr; // 804CA468
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA46C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CA470
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA474
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA478
  c->r[31]=c->r[4]|c->r[4]; // 804CA47C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA480
  c->r[4]=c->r[1]+0x00000008u; // 804CA484
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CA488
  c->r[30]=c->r[3]|c->r[3]; // 804CA48C
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA490
  c->lr=0x804CA498u; f_804E11BC(c); // 804CA494
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA498
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA49C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA4A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA4A4
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 804CA4A8
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[1]); // 804CA4AC
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA4B0
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[2]); // 804CA4B4
  {uint32_t ea=c->r[2]+0x000016F0u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA4B8
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[2]); // 804CA4BC
  c->f[1]=-c->f[9]; // 804CA4C0
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[7]); // 804CA4C4
  {uint32_t ea=c->r[2]+0x000016F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA4C8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[6]);} // 804CA4CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[8]); // 804CA4D0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 804CA4D4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804CA4D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804CA4DC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 804CA4E0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804CA4E4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 804CA4E8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804CA4EC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA4F0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 804CA4F4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 804CA4F8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA4FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA500
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CA504
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CA508
  c->lr=c->r[0]; // 804CA50C
  c->r[1]=c->r[1]+0x00000020u; // 804CA510
  return; // 804CA514
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA518(Ctx* __restrict c) {
  trace_call(0x804CA518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA518
  c->r[0]=c->lr; // 804CA51C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA520
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CA524
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA528
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA52C
  c->r[31]=c->r[4]|c->r[4]; // 804CA530
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA534
  c->r[4]=c->r[1]+0x00000008u; // 804CA538
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CA53C
  c->r[30]=c->r[3]|c->r[3]; // 804CA540
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA544
  c->lr=0x804CA54Cu; f_804E11BC(c); // 804CA548
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA54C
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA550
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804CA554
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA558
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA55C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA560
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 804CA564
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA568
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 804CA56C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 804CA570
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 804CA574
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA578
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA57C
  c->f[1]=-c->f[1]; // 804CA580
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804CA584
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 804CA588
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA58C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 804CA590
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804CA594
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA598
  c->f[0]=-c->f[0]; // 804CA59C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 804CA5A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA5A4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 804CA5A8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 804CA5AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA5B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA5B4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 804CA5B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804CA5BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA5C0
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 804CA5C4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA5C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA5CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CA5D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CA5D4
  c->lr=c->r[0]; // 804CA5D8
  c->r[1]=c->r[1]+0x00000020u; // 804CA5DC
  return; // 804CA5E0
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA5E4(Ctx* __restrict c) {
  trace_call(0x804CA5E4u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CA5E4
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA5E8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA5EC
  c->f[4]=-c->f[6]; // 804CA5F0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA5F4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 804CA5F8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA5FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804CA600
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA604
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 804CA608
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 804CA60C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804CA610
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 804CA614
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804CA618
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 804CA61C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 804CA620
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 804CA624
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA628
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804CA62C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 804CA630
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA634
  return; // 804CA638
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA63C(Ctx* __restrict c) {
  trace_call(0x804CA63Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA63C
  c->r[0]=c->lr; // 804CA640
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA644
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CA648
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA64C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA650
  c->r[31]=c->r[4]|c->r[4]; // 804CA654
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA658
  c->r[4]=c->r[1]+0x00000008u; // 804CA65C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CA660
  c->r[30]=c->r[3]|c->r[3]; // 804CA664
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA668
  c->lr=0x804CA670u; f_804E11BC(c); // 804CA66C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA670
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA674
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA678
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA67C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 804CA680
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[3]); // 804CA684
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA688
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[0]); // 804CA68C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA690
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[3]); // 804CA694
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA698
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 804CA69C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 804CA6A0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 804CA6A4
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CA6A8
  c->f[5]=-c->f[5]; // 804CA6AC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804CA6B0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 804CA6B4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 804CA6B8
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[2]); // 804CA6BC
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 804CA6C0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 804CA6C4
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 804CA6C8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA6CC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 804CA6D0
  c->f[1]=-c->f[9]; // 804CA6D4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804CA6D8
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 804CA6DC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 804CA6E0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804CA6E4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA6E8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA6EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA6F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CA6F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CA6F8
  c->lr=c->r[0]; // 804CA6FC
  c->r[1]=c->r[1]+0x00000020u; // 804CA700
  return; // 804CA704
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA708(Ctx* __restrict c) {
  trace_call(0x804CA708u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA708
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[6]=c->ps1[6]=RF32(ea);} // 804CA70C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA710
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804CA714
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CA718
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA71C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 804CA720
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA724
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[1]); // 804CA728
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 804CA72C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CA730
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 804CA734
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804CA738
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA73C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA740
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA744
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 804CA748
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 804CA74C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 804CA750
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CA754
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 804CA758
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 804CA75C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 804CA760
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804CA764
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 804CA768
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 804CA76C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[5]);} // 804CA770
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 804CA774
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 804CA778
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 804CA77C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA780
  return; // 804CA784
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA788(Ctx* __restrict c) {
  trace_call(0x804CA788u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA788
  c->r[0]=c->lr; // 804CA78C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA790
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA794
  c->r[4]=c->r[1]+0x00000008u; // 804CA798
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CA79C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA7A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA7A4
  c->r[31]=c->r[3]|c->r[3]; // 804CA7A8
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA7AC
  c->lr=0x804CA7B4u; f_804E11BC(c); // 804CA7B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA7B4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA7B8
  c->f[1]=-c->f[2]; // 804CA7BC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA7C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA7C4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804CA7C8
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 804CA7CC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804CA7D0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 804CA7D4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CA7D8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804CA7DC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA7E0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CA7E4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804CA7E8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 804CA7EC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA7F0
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA7F4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 804CA7F8
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[7]); // 804CA7FC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CA800
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 804CA804
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 804CA808
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA80C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CA810
  c->f[0]=-c->f[1]; // 804CA814
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 804CA818
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 804CA81C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[10]); // 804CA820
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 804CA824
  c->f[2]=c->ps1[2]=S(c->f[9]+c->f[2]); // 804CA828
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA82C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 804CA830
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 804CA834
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA838
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CA83C
  c->f[0]=-c->f[1]; // 804CA840
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 804CA844
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 804CA848
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 804CA84C
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 804CA850
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 804CA854
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA858
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 804CA85C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 804CA860
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA864
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA868
  c->f[0]=-c->f[1]; // 804CA86C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 804CA870
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 804CA874
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 804CA878
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 804CA87C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804CA880
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA884
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 804CA888
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 804CA88C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804CA890
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA894
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA898
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CA89C
  c->lr=c->r[0]; // 804CA8A0
  c->r[1]=c->r[1]+0x00000020u; // 804CA8A4
  return; // 804CA8A8
}

// fn_804CA8AC
void f_804CA8AC(Ctx* __restrict c) {
  trace_call(0x804CA8ACu);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA8AC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA8B0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA8B4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA8B8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804CA8BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA8C0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804CA8C4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CA8C8
  return; // 804CA8CC
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CA8D0(Ctx* __restrict c) {
  trace_call(0x804CA8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CA8D0
  c->r[0]=c->lr; // 804CA8D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CA8D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804CA8DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804CA8E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804CA8E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804CA8E8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CA8EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CA8F0
  c->r[31]=c->r[4]|c->r[4]; // 804CA8F4
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA8F8
  c->r[4]=c->r[1]+0x00000008u; // 804CA8FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CA900
  c->r[30]=c->r[3]|c->r[3]; // 804CA904
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CA908
  c->r[3]=c->r[1]+0x0000000Cu; // 804CA90C
  c->lr=0x804CA914u; f_804E11BC(c); // 804CA910
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CA914
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CA918
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA91C
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[0]); // 804CA920
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CA924
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 804CA928
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CA92C
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 804CA930
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[6]); // 804CA934
  c->f[12]=-c->f[8]; // 804CA938
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CA93C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[7]); // 804CA940
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804CA944
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[7]); // 804CA948
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 804CA94C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 804CA950
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CA954
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 804CA958
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CA95C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 804CA960
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CA964
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 804CA968
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CA96C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 804CA970
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CA974
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 804CA978
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[13]); // 804CA97C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804CA980
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[5]); // 804CA984
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[6]); // 804CA988
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 804CA98C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[4]);} // 804CA990
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[30]); // 804CA994
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 804CA998
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 804CA99C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 804CA9A0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 804CA9A4
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 804CA9A8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 804CA9AC
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 804CA9B0
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 804CA9B4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 804CA9B8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 804CA9BC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 804CA9C0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 804CA9C4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804CA9C8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 804CA9CC
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 804CA9D0
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CA9D4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 804CA9D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CA9DC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 804CA9E0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804CA9E4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 804CA9E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804CA9EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804CA9F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804CA9F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804CA9F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CA9FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CAA00
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CAA04
  c->lr=c->r[0]; // 804CAA08
  c->r[1]=c->r[1]+0x00000040u; // 804CAA0C
  return; // 804CAA10
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CAA14(Ctx* __restrict c) {
  trace_call(0x804CAA14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CAA14
  c->r[0]=c->lr; // 804CAA18
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAA1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CAA20
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAA24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CAA28
  c->r[31]=c->r[4]|c->r[4]; // 804CAA2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CAA30
  c->r[4]=c->r[1]+0x00000008u; // 804CAA34
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CAA38
  c->r[30]=c->r[3]|c->r[3]; // 804CAA3C
  c->r[3]=c->r[1]+0x0000000Cu; // 804CAA40
  c->lr=0x804CAA48u; f_804E11BC(c); // 804CAA44
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAA48
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAA4C
  c->f[1]=-c->f[2]; // 804CAA50
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CAA54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CAA58
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804CAA5C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CAA60
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804CAA64
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 804CAA68
  {uint32_t ea=c->r[30]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CAA6C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 804CAA70
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 804CAA74
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CAA78
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 804CAA7C
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 804CAA80
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAA84
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAA88
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 804CAA8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 804CAA90
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAA94
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[5]);} // 804CAA98
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAA9C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CAAA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CAAA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CAAA8
  c->f[1]=-c->f[3]; // 804CAAAC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CAAB0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[6]); // 804CAAB4
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 804CAAB8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 804CAABC
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 804CAAC0
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[5]); // 804CAAC4
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[7]); // 804CAAC8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 804CAACC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[5]);} // 804CAAD0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 804CAAD4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 804CAAD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAADC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CAAE0
  c->f[0]=-c->f[1]; // 804CAAE4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 804CAAE8
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 804CAAEC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 804CAAF0
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 804CAAF4
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 804CAAF8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CAAFC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804CAB00
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 804CAB04
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAB08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CAB0C
  c->f[0]=-c->f[1]; // 804CAB10
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 804CAB14
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 804CAB18
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 804CAB1C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 804CAB20
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 804CAB24
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CAB28
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 804CAB2C
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 804CAB30
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 804CAB34
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CAB38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CAB3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CAB40
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CAB44
  c->lr=c->r[0]; // 804CAB48
  c->r[1]=c->r[1]+0x00000020u; // 804CAB4C
  return; // 804CAB50
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CAB54(Ctx* __restrict c) {
  trace_call(0x804CAB54u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAB54
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAB58
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CAB5C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAB60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CAB64
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 804CAB68
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 804CAB6C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CAB70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 804CAB74
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CAB78
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAB7C
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[7]); // 804CAB80
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804CAB84
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CAB88
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 804CAB8C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CAB90
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[6]); // 804CAB94
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[11]); // 804CAB98
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 804CAB9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CABA0
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[2]); // 804CABA4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CABA8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CABAC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[11]); // 804CABB0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[11]); // 804CABB4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[10]);} // 804CABB8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 804CABBC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 804CABC0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 804CABC4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804CABC8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 804CABCC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 804CABD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 804CABD4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 804CABD8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 804CABDC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CABE0
  return; // 804CABE4
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_804CABE8(Ctx* __restrict c) {
  trace_call(0x804CABE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CABE8
  c->r[0]=c->lr; // 804CABEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 804CABF0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804CABF4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804CABF8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804CABFC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804CAC00
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 804CAC04
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 804CAC08
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAC0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CAC10
  c->r[31]=c->r[4]|c->r[4]; // 804CAC14
  {uint32_t ea=c->r[2]+0x000016F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAC18
  c->r[4]=c->r[1]+0x00000008u; // 804CAC1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CAC20
  c->r[30]=c->r[3]|c->r[3]; // 804CAC24
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804CAC28
  c->r[3]=c->r[1]+0x0000000Cu; // 804CAC2C
  c->lr=0x804CAC34u; f_804E11BC(c); // 804CAC30
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAC34
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CAC38
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CAC3C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAC40
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[2]); // 804CAC44
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CAC48
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 804CAC4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CAC50
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[2]); // 804CAC54
  {uint32_t ea=c->r[2]+0x000016ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 804CAC58
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[6]); // 804CAC5C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804CAC60
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CAC64
  c->f[12]=-c->f[9]; // 804CAC68
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804CAC6C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[7]); // 804CAC70
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 804CAC74
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 804CAC78
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 804CAC7C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 804CAC80
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 804CAC84
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 804CAC88
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 804CAC8C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 804CAC90
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 804CAC94
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 804CAC98
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804CAC9C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 804CACA0
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 804CACA4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804CACA8
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CACAC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804CACB0
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[13]); // 804CACB4
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[5]); // 804CACB8
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 804CACBC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[4]);} // 804CACC0
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[29]); // 804CACC4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[31]); // 804CACC8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[13]);} // 804CACCC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 804CACD0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 804CACD4
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 804CACD8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 804CACDC
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 804CACE0
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 804CACE4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 804CACE8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 804CACEC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 804CACF0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 804CACF4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 804CACF8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 804CACFC
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 804CAD00
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804CAD04
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 804CAD08
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804CAD0C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 804CAD10
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 804CAD14
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 804CAD18
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804CAD1C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804CAD20
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804CAD24
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804CAD28
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 804CAD2C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 804CAD30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CAD34
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CAD38
  c->r[0]=R32(c->r[1]+0x00000054u); // 804CAD3C
  c->lr=c->r[0]; // 804CAD40
  c->r[1]=c->r[1]+0x00000050u; // 804CAD44
  return; // 804CAD48
}

// CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_804CAD4C(Ctx* __restrict c) {
  trace_call(0x804CAD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CAD4C
  c->r[0]=c->lr; // 804CAD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CAD54
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 804CAD58
  cmpu(c,0,c->r[0],0x00000007u); // 804CAD5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CAD60
  c->r[31]=c->r[3]|c->r[3]; // 804CAD64
  if (!crb(c,2)) { goto L_804CAD74; } // 804CAD68
  c->r[3]=0u+0x00000000u; // 804CAD6C
  goto L_804CADD4; // 804CAD70
L_804CAD74:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CAD74
  if (crb(c,2)) { goto L_804CAD9C; } // 804CAD78
  c->r[6]=0u+0x806B0000u; // 804CAD7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CAD80
  c->r[6]=c->r[6]+0xFFFFBE60u; // 804CAD84
  c->r[4]=c->r[5]|c->r[5]; // 804CAD88
  c->r[12]=R32(c->r[6]+c->r[0]); // 804CAD8C
  c->ctr=c->r[12]; // 804CAD90
  if (true) { c->lr=0x804CAD98u; dispatch(c,c->ctr); } // 804CAD94
  goto L_804CADB8; // 804CAD98
L_804CAD9C:;
  c->r[6]=0u+0x806B0000u; // 804CAD9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CADA0
  c->r[6]=c->r[6]+0xFFFFBE7Cu; // 804CADA4
  c->r[4]=c->r[5]|c->r[5]; // 804CADA8
  c->r[12]=R32(c->r[6]+c->r[0]); // 804CADAC
  c->ctr=c->r[12]; // 804CADB0
  if (true) { c->lr=0x804CADB8u; dispatch(c,c->ctr); } // 804CADB4
L_804CADB8:;
  {uint32_t ea=c->r[2]+0x000016E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CADB8
  c->r[3]=0u+0x00000001u; // 804CADBC
  {uint32_t ea=c->r[2]+0x000016F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CADC0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804CADC4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804CADC8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804CADCC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 804CADD0
L_804CADD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CADD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CADD8
  c->lr=c->r[0]; // 804CADDC
  c->r[1]=c->r[1]+0x00000010u; // 804CADE0
  return; // 804CADE4
}

// CalcWorldMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34PUl
void f_804CADE8(Ctx* __restrict c) {
  trace_call(0x804CADE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CADE8
  c->r[0]=c->lr; // 804CADEC
  cmps(c,0,(int32_t)c->r[5],0); // 804CADF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CADF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CADF8
  c->r[31]=c->r[3]|c->r[3]; // 804CADFC
  if (crb(c,2)) { goto L_804CAE1C; } // 804CAE00
  c->r[6]=R32(c->r[5]+0x00000000u); // 804CAE04
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 804CAE08
  if (crb(c,2)) { goto L_804CAE1C; } // 804CAE0C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 804CAE10
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CAE14
  goto L_804CAE7C; // 804CAE18
L_804CAE1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CAE1C
  if (crb(c,2)) { goto L_804CAE54; } // 804CAE20
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CAE24
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 804CAE28
  if (crb(c,2)) { goto L_804CAE40; } // 804CAE2C
  c->r[3]=c->r[4]|c->r[4]; // 804CAE30
  c->r[4]=c->r[31]+0x0000003Cu; // 804CAE34
  c->lr=0x804CAE3Cu; f_80382F2C(c); // 804CAE38
  goto L_804CAE60; // 804CAE3C
L_804CAE40:;
  c->r[3]=c->r[4]|c->r[4]; // 804CAE40
  c->r[4]=c->r[31]+0x0000000Cu; // 804CAE44
  c->r[5]=c->r[31]+0x0000003Cu; // 804CAE48
  c->lr=0x804CAE50u; f_80382F60(c); // 804CAE4C
  goto L_804CAE60; // 804CAE50
L_804CAE54:;
  c->r[3]=c->r[3]+0x0000000Cu; // 804CAE54
  c->r[4]=c->r[31]+0x0000003Cu; // 804CAE58
  c->lr=0x804CAE60u; f_80382F2C(c); // 804CAE5C
L_804CAE60:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 804CAE60
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 804CAE64
  if (crb(c,2)) { goto L_804CAE7C; } // 804CAE68
  c->r[3]=c->r[31]+0x000000B4u; // 804CAE6C
  c->r[4]=c->r[31]+0x0000009Cu; // 804CAE70
  c->r[5]=c->r[31]+0x0000003Cu; // 804CAE74
  c->lr=0x804CAE7Cu; f_804E1D9C(c); // 804CAE78
L_804CAE7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CAE7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CAE80
  c->lr=c->r[0]; // 804CAE84
  c->r[1]=c->r[1]+0x00000010u; // 804CAE88
  return; // 804CAE8C
}

// CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
void f_804CAE90(Ctx* __restrict c) {
  trace_call(0x804CAE90u);
  c->r[5]=c->r[3]|c->r[3]; // 804CAE90
  c->r[3]=c->r[4]|c->r[4]; // 804CAE94
  c->r[4]=c->r[5]+0x0000003Cu; // 804CAE98
  c->r[5]=c->r[5]+0x0000006Cu; // 804CAE9C
  f_80382F60(c); return; // 804CAEA0
}

// __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
void f_804CAEA4(Ctx* __restrict c) {
  trace_call(0x804CAEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CAEA4
  c->r[0]=c->lr; // 804CAEA8
  c->r[6]=0u+0x80720000u; // 804CAEAC
  c->r[7]=0u+0x00000000u; // 804CAEB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CAEB4
  c->r[5]=0u+0x00000080u; // 804CAEB8
  c->r[6]=c->r[6]+0xFFFFA450u; // 804CAEBC
  c->r[0]=c->r[7]|0x80000000u; // 804CAEC0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804CAEC4
  c->r[31]=c->r[3]|c->r[3]; // 804CAEC8
  W32(c->r[3]+0x00000004u,c->r[7]); // 804CAECC
  W32(c->r[3]+0x00000008u,c->r[4]); // 804CAED0
  W32(c->r[3]+0x00000000u,c->r[6]); // 804CAED4
  W8(c->r[3]+0x000000D0u,c->r[5]); // 804CAED8
  W8(c->r[3]+0x000000D1u,c->r[5]); // 804CAEDC
  W8(c->r[3]+0x000000D2u,c->r[7]); // 804CAEE0
  W8(c->r[3]+0x000000D3u,c->r[7]); // 804CAEE4
  W32(c->r[3]+0x000000D4u,c->r[7]); // 804CAEE8
  W8(c->r[3]+0x000000D8u,c->r[7]); // 804CAEEC
  W8(c->r[3]+0x000000D9u,c->r[7]); // 804CAEF0
  W16(c->r[3]+0x000000DAu,c->r[7]); // 804CAEF4
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CAEF8
  c->r[3]=c->r[3]+0x0000000Cu; // 804CAEFC
  c->lr=0x804CAF04u; f_80382F00(c); // 804CAF00
  c->r[3]=c->r[31]+0x0000003Cu; // 804CAF04
  c->lr=0x804CAF0Cu; f_80382F00(c); // 804CAF08
  c->r[3]=c->r[31]+0x0000006Cu; // 804CAF0C
  c->lr=0x804CAF14u; f_80382F00(c); // 804CAF10
  {uint32_t ea=c->r[2]+0x00001700u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CAF14
  c->r[3]=c->r[31]|c->r[31]; // 804CAF18
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 804CAF1C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 804CAF20
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 804CAF24
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 804CAF28
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 804CAF2C
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 804CAF30
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 804CAF34
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 804CAF38
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 804CAF3C
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 804CAF40
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 804CAF44
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 804CAF48
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804CAF4C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CAF50
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804CAF54
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804CAF58
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804CAF5C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804CAF60
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804CAF64
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804CAF68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804CAF6C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804CAF70
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CAF74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804CAF78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804CAF7C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804CAF80
  c->lr=c->r[0]; // 804CAF84
  c->r[1]=c->r[1]+0x00000040u; // 804CAF88
  return; // 804CAF8C
}

// __dt__Q34nw4r3g3d6ScnObjFv
void f_804CAF90(Ctx* __restrict c) {
  trace_call(0x804CAF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CAF90
  c->r[0]=c->lr; // 804CAF94
  cmps(c,0,(int32_t)c->r[3],0); // 804CAF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CAF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CAFA0
  c->r[31]=c->r[3]|c->r[3]; // 804CAFA4
  if (crb(c,2)) { goto L_804CAFFC; } // 804CAFA8
  c->r[5]=R32(c->r[3]+0x000000D4u); // 804CAFAC
  c->r[4]=0u+0x80720000u; // 804CAFB0
  c->r[4]=c->r[4]+0xFFFFA450u; // 804CAFB4
  cmps(c,1,(int32_t)c->r[5],0); // 804CAFB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 804CAFBC
  if (crb(c,6)) { goto L_804CAFF0; } // 804CAFC0
  c->r[0]=R8(c->r[3]+0x000000D9u); // 804CAFC4
  cmps(c,0,(int32_t)c->r[0],1); // 804CAFC8
  if (crb(c,2)) { goto L_804CAFD4; } // 804CAFCC
  goto L_804CAFF0; // 804CAFD0
L_804CAFD4:;
  if (crb(c,6)) { goto L_804CAFF0; } // 804CAFD4
  c->r[12]=R32(c->r[5]+0x00000000u); // 804CAFD8
  c->r[3]=c->r[5]|c->r[5]; // 804CAFDC
  c->r[4]=0u+0x00000001u; // 804CAFE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CAFE4
  c->ctr=c->r[12]; // 804CAFE8
  if (true) { c->lr=0x804CAFF0u; dispatch(c,c->ctr); } // 804CAFEC
L_804CAFF0:;
  c->r[3]=c->r[31]|c->r[31]; // 804CAFF0
  c->r[4]=0u+0x00000000u; // 804CAFF4
  c->lr=0x804CAFFCu; f_804BD9F0(c); // 804CAFF8
L_804CAFFC:;
  c->r[3]=c->r[31]|c->r[31]; // 804CAFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CB000
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CB004
  c->lr=c->r[0]; // 804CB008
  c->r[1]=c->r[1]+0x00000010u; // 804CB00C
  return; // 804CB010
}

// SetScnObjOption__Q34nw4r3g3d6ScnObjFUlUl
void f_804CB014(Ctx* __restrict c) {
  trace_call(0x804CB014u);
  cmpu(c,0,c->r[4],0x00000009u); // 804CB014
  if (crb(c,1)) { goto L_804CB19C; } // 804CB018
  c->r[6]=0u+0x80720000u; // 804CB01C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804CB020
  c->r[6]=c->r[6]+0xFFFFA3C0u; // 804CB024
  c->r[6]=R32(c->r[6]+c->r[0]); // 804CB028
  c->ctr=c->r[6]; // 804CB02C
  if (true) { switch (c->ctr) { case 0x804CB034u: goto L_804CB034; case 0x804CB05Cu: goto L_804CB05C; case 0x804CB084u: goto L_804CB084; case 0x804CB0ACu: goto L_804CB0AC; case 0x804CB0D4u: goto L_804CB0D4; case 0x804CB0FCu: goto L_804CB0FC; case 0x804CB124u: goto L_804CB124; case 0x804CB14Cu: goto L_804CB14C; case 0x804CB174u: goto L_804CB174; case 0x804CB19Cu: goto L_804CB19C; default: break; } dispatch(c,c->ctr); return; } // 804CB030
L_804CB034:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB034
  if (crb(c,2)) { goto L_804CB04C; } // 804CB038
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB03C
  c->r[0]=c->r[0]|0x00000010u; // 804CB040
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB044
  goto L_804CB1A4; // 804CB048
L_804CB04C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB04C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 804CB050
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB054
  goto L_804CB1A4; // 804CB058
L_804CB05C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB05C
  if (crb(c,2)) { goto L_804CB074; } // 804CB060
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB064
  c->r[0]=c->r[0]|0x00000001u; // 804CB068
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB06C
  goto L_804CB1A4; // 804CB070
L_804CB074:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB074
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804CB078
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB07C
  goto L_804CB1A4; // 804CB080
L_804CB084:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB084
  if (crb(c,2)) { goto L_804CB09C; } // 804CB088
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB08C
  c->r[0]=c->r[0]|0x00000002u; // 804CB090
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB094
  goto L_804CB1A4; // 804CB098
L_804CB09C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB09C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804CB0A0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB0A4
  goto L_804CB1A4; // 804CB0A8
L_804CB0AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB0AC
  if (crb(c,2)) { goto L_804CB0C4; } // 804CB0B0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB0B4
  c->r[0]=c->r[0]|0x00000004u; // 804CB0B8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB0BC
  goto L_804CB1A4; // 804CB0C0
L_804CB0C4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB0C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804CB0C8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB0CC
  goto L_804CB1A4; // 804CB0D0
L_804CB0D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB0D4
  if (crb(c,2)) { goto L_804CB0EC; } // 804CB0D8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB0DC
  c->r[0]=c->r[0]|0x00000008u; // 804CB0E0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB0E4
  goto L_804CB1A4; // 804CB0E8
L_804CB0EC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB0EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804CB0F0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB0F4
  goto L_804CB1A4; // 804CB0F8
L_804CB0FC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB0FC
  if (crb(c,2)) { goto L_804CB114; } // 804CB100
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB104
  c->r[0]=c->r[0]|0x00000020u; // 804CB108
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB10C
  goto L_804CB1A4; // 804CB110
L_804CB114:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB114
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 804CB118
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB11C
  goto L_804CB1A4; // 804CB120
L_804CB124:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB124
  if (crb(c,2)) { goto L_804CB13C; } // 804CB128
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB12C
  c->r[0]=c->r[0]|0x00000040u; // 804CB130
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB134
  goto L_804CB1A4; // 804CB138
L_804CB13C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB13C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 804CB140
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB144
  goto L_804CB1A4; // 804CB148
L_804CB14C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB14C
  if (crb(c,2)) { goto L_804CB164; } // 804CB150
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB154
  c->r[0]=c->r[0]|0x00000080u; // 804CB158
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB15C
  goto L_804CB1A4; // 804CB160
L_804CB164:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB164
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 804CB168
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB16C
  goto L_804CB1A4; // 804CB170
L_804CB174:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB174
  if (crb(c,2)) { goto L_804CB18C; } // 804CB178
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB17C
  c->r[0]=c->r[0]|0x10000000u; // 804CB180
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB184
  goto L_804CB1A4; // 804CB188
L_804CB18C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB18C
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 804CB190
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB194
  goto L_804CB1A4; // 804CB198
L_804CB19C:;
  c->r[3]=0u+0x00000000u; // 804CB19C
  return; // 804CB1A0
L_804CB1A4:;
  c->r[3]=0u+0x00000001u; // 804CB1A4
  return; // 804CB1A8
}

// GetScnObjOption__Q34nw4r3g3d6ScnObjCFUlPUl
void f_804CB1AC(Ctx* __restrict c) {
  trace_call(0x804CB1ACu);
  cmps(c,0,(int32_t)c->r[5],0); // 804CB1AC
  if (!crb(c,2)) { goto L_804CB1BC; } // 804CB1B0
  c->r[3]=0u+0x00000000u; // 804CB1B4
  return; // 804CB1B8
L_804CB1BC:;
  cmpu(c,0,c->r[4],0x00000009u); // 804CB1BC
  if (crb(c,1)) { goto L_804CB26C; } // 804CB1C0
  c->r[6]=0u+0x80720000u; // 804CB1C4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804CB1C8
  c->r[6]=c->r[6]+0xFFFFA3E8u; // 804CB1CC
  c->r[6]=R32(c->r[6]+c->r[0]); // 804CB1D0
  c->ctr=c->r[6]; // 804CB1D4
  if (true) { switch (c->ctr) { case 0x804CB1DCu: goto L_804CB1DC; case 0x804CB1ECu: goto L_804CB1EC; case 0x804CB1FCu: goto L_804CB1FC; case 0x804CB20Cu: goto L_804CB20C; case 0x804CB21Cu: goto L_804CB21C; case 0x804CB22Cu: goto L_804CB22C; case 0x804CB23Cu: goto L_804CB23C; case 0x804CB24Cu: goto L_804CB24C; case 0x804CB25Cu: goto L_804CB25C; case 0x804CB26Cu: goto L_804CB26C; default: break; } dispatch(c,c->ctr); return; } // 804CB1D8
L_804CB1DC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB1DC
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 804CB1E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB1E4
  goto L_804CB274; // 804CB1E8
L_804CB1EC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB1EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 804CB1F0
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB1F4
  goto L_804CB274; // 804CB1F8
L_804CB1FC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB1FC
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 804CB200
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB204
  goto L_804CB274; // 804CB208
L_804CB20C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB20C
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 804CB210
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB214
  goto L_804CB274; // 804CB218
L_804CB21C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB21C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 804CB220
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB224
  goto L_804CB274; // 804CB228
L_804CB22C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB22C
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 804CB230
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB234
  goto L_804CB274; // 804CB238
L_804CB23C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB23C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 804CB240
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB244
  goto L_804CB274; // 804CB248
L_804CB24C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB24C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 804CB250
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB254
  goto L_804CB274; // 804CB258
L_804CB25C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB25C
  c->r[0]=rotl(c->r[0],4)&0x00000001u; // 804CB260
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB264
  goto L_804CB274; // 804CB268
L_804CB26C:;
  c->r[3]=0u+0x00000000u; // 804CB26C
  return; // 804CB270
L_804CB274:;
  c->r[3]=0u+0x00000001u; // 804CB274
  return; // 804CB278
}

// SetMtx__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePCQ34nw4r4math5MTX34
void f_804CB27C(Ctx* __restrict c) {
  trace_call(0x804CB27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB27C
  c->r[0]=c->lr; // 804CB280
  cmpu(c,0,c->r[4],0x00000003u); // 804CB284
  c->r[6]=c->r[3]|c->r[3]; // 804CB288
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CB28C
  if (!crb(c,0)) { goto L_804CB2F4; } // 804CB290
  cmps(c,0,(int32_t)c->r[5],0); // 804CB294
  if (crb(c,2)) { goto L_804CB2C8; } // 804CB298
  cmps(c,0,(int32_t)c->r[4],0); // 804CB29C
  if (!crb(c,2)) { goto L_804CB2B0; } // 804CB2A0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB2A4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 804CB2A8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB2AC
L_804CB2B0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804CB2B0
  c->r[3]=c->r[5]|c->r[5]; // 804CB2B4
  c->r[4]=c->r[6]+c->r[0]; // 804CB2B8
  c->r[4]=c->r[4]+0x0000000Cu; // 804CB2BC
  c->lr=0x804CB2C4u; f_80382F2C(c); // 804CB2C0
  goto L_804CB2EC; // 804CB2C4
L_804CB2C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CB2C8
  if (!crb(c,2)) { goto L_804CB2DC; } // 804CB2CC
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB2D0
  c->r[0]=c->r[0]|0x80000000u; // 804CB2D4
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB2D8
L_804CB2DC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804CB2DC
  c->r[3]=c->r[3]+c->r[0]; // 804CB2E0
  c->r[3]=c->r[3]+0x0000000Cu; // 804CB2E4
  c->lr=0x804CB2ECu; f_80382F00(c); // 804CB2E8
L_804CB2EC:;
  c->r[3]=0u+0x00000001u; // 804CB2EC
  goto L_804CB2F8; // 804CB2F0
L_804CB2F4:;
  c->r[3]=0u+0x00000000u; // 804CB2F4
L_804CB2F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CB2F8
  c->lr=c->r[0]; // 804CB2FC
  c->r[1]=c->r[1]+0x00000010u; // 804CB300
  return; // 804CB304
}

// GetMtx__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePQ34nw4r4math5MTX34
void f_804CB308(Ctx* __restrict c) {
  trace_call(0x804CB308u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB308
  c->r[0]=c->lr; // 804CB30C
  cmps(c,0,(int32_t)c->r[5],0); // 804CB310
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CB314
  if (crb(c,2)) { goto L_804CB340; } // 804CB318
  cmpu(c,0,c->r[4],0x00000003u); // 804CB31C
  if (!crb(c,0)) { goto L_804CB340; } // 804CB320
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804CB324
  c->r[4]=c->r[5]|c->r[5]; // 804CB328
  c->r[3]=c->r[3]+c->r[0]; // 804CB32C
  c->r[3]=c->r[3]+0x0000000Cu; // 804CB330
  c->lr=0x804CB338u; f_80382F2C(c); // 804CB334
  c->r[3]=0u+0x00000001u; // 804CB338
  goto L_804CB344; // 804CB33C
L_804CB340:;
  c->r[3]=0u+0x00000000u; // 804CB340
L_804CB344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CB344
  c->lr=c->r[0]; // 804CB348
  c->r[1]=c->r[1]+0x00000010u; // 804CB34C
  return; // 804CB350
}

// GetValueForSortOpa__Q34nw4r3g3d6ScnObjCFv
void f_804CB354(Ctx* __restrict c) {
  trace_call(0x804CB354u);
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CB354
  c->f[1]=-c->f[0]; // 804CB358
  return; // 804CB35C
}

// fn_804CB360
void f_804CB360(Ctx* __restrict c) {
  trace_call(0x804CB360u);
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CB360
  return; // 804CB364
}

// fn_804CB368
void f_804CB368(Ctx* __restrict c) {
  trace_call(0x804CB368u);
  cmps(c,0,(int32_t)c->r[4],0); // 804CB368
  if (!crb(c,0)) { goto L_804CB378; } // 804CB36C
  c->r[4]=0u+0x00000000u; // 804CB370
  goto L_804CB384; // 804CB374
L_804CB378:;
  cmps(c,0,(int32_t)c->r[4],255); // 804CB378
  if (!crb(c,1)) { goto L_804CB384; } // 804CB37C
  c->r[4]=0u+0x000000FFu; // 804CB380
L_804CB384:;
  W8(c->r[3]+0x000000D0u,c->r[4]); // 804CB384
  return; // 804CB388
}

// fn_804CB38C
void f_804CB38C(Ctx* __restrict c) {
  trace_call(0x804CB38Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 804CB38C
  if (!crb(c,0)) { goto L_804CB39C; } // 804CB390
  c->r[4]=0u+0x00000000u; // 804CB394
  goto L_804CB3A8; // 804CB398
L_804CB39C:;
  cmps(c,0,(int32_t)c->r[4],255); // 804CB39C
  if (!crb(c,1)) { goto L_804CB3A8; } // 804CB3A0
  c->r[4]=0u+0x000000FFu; // 804CB3A4
L_804CB3A8:;
  W8(c->r[3]+0x000000D1u,c->r[4]); // 804CB3A8
  return; // 804CB3AC
}

// fn_804CB3B0
void f_804CB3B0(Ctx* __restrict c) {
  trace_call(0x804CB3B0u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804CB3B0
  if (crb(c,2)) { goto L_804CB3C4; } // 804CB3B4
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB3B8
  c->r[0]=c->r[0]|0x00000001u; // 804CB3BC
  W8(c->r[3]+0x000000D8u,c->r[0]); // 804CB3C0
L_804CB3C4:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804CB3C4
  if (crb(c,2)) { goto L_804CB3D8; } // 804CB3C8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB3CC
  c->r[0]=c->r[0]|0x00000002u; // 804CB3D0
  W8(c->r[3]+0x000000D8u,c->r[0]); // 804CB3D4
L_804CB3D8:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804CB3D8
  if (crb(c,2)) return; // 804CB3DC
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB3E0
  c->r[0]=c->r[0]|0x00000004u; // 804CB3E4
  W8(c->r[3]+0x000000D8u,c->r[0]); // 804CB3E8
  return; // 804CB3EC
}

// fn_804CB3F0
void f_804CB3F0(Ctx* __restrict c) {
  trace_call(0x804CB3F0u);
  c->r[5]=R16(c->r[3]+0x000000DAu); // 804CB3F0
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 804CB3F4
  c->r[0]=c->r[5]|c->r[0]; // 804CB3F8
  W16(c->r[3]+0x000000DAu,c->r[0]); // 804CB3FC
  return; // 804CB400
}

// fn_804CB404
void f_804CB404(Ctx* __restrict c) {
  trace_call(0x804CB404u);
  cmps(c,0,(int32_t)c->r[5],0); // 804CB404
  if (crb(c,2)) { goto L_804CB46C; } // 804CB408
  cmps(c,0,(int32_t)c->r[4],2); // 804CB40C
  if (!crb(c,0)) { goto L_804CB464; } // 804CB410
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 804CB414
  c->r[6]=R32(c->r[5]+0x00000000u); // 804CB418
  c->r[0]=R32(c->r[5]+0x00000004u); // 804CB41C
  c->r[4]=0u+0x00000009u; // 804CB420
  c->r[7]=c->r[3]+c->r[7]; // 804CB424
  W32(c->r[7]+0x0000009Cu,c->r[6]); // 804CB428
  W32(c->r[7]+0x000000A0u,c->r[0]); // 804CB42C
  c->r[0]=R32(c->r[5]+0x00000008u); // 804CB430
  W32(c->r[7]+0x000000A4u,c->r[0]); // 804CB434
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 804CB438
  c->r[0]=R32(c->r[5]+0x00000010u); // 804CB43C
  W32(c->r[7]+0x000000A8u,c->r[6]); // 804CB440
  W32(c->r[7]+0x000000ACu,c->r[0]); // 804CB444
  c->r[0]=R32(c->r[5]+0x00000014u); // 804CB448
  c->r[5]=0u+0x00000001u; // 804CB44C
  W32(c->r[7]+0x000000B0u,c->r[0]); // 804CB450
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB454
  c->r[12]=R32(c->r[12]+0x00000020u); // 804CB458
  c->ctr=c->r[12]; // 804CB45C
  if (true) { dispatch(c,c->ctr); return; } // 804CB460
L_804CB464:;
  c->r[3]=0u+0x00000000u; // 804CB464
  return; // 804CB468
L_804CB46C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB46C
  c->r[4]=0u+0x00000009u; // 804CB470
  c->r[5]=0u+0x00000000u; // 804CB474
  c->r[12]=R32(c->r[12]+0x00000020u); // 804CB478
  c->ctr=c->r[12]; // 804CB47C
  if (true) { dispatch(c,c->ctr); return; } // 804CB480
}

// fn_804CB484
void f_804CB484(Ctx* __restrict c) {
  trace_call(0x804CB484u);
  return; // 804CB484
}

// GetBoundingVolume__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj24ScnObjBoundingVolumeTypePQ34nw4r4math4AABB
void f_804CB488(Ctx* __restrict c) {
  trace_call(0x804CB488u);
  cmps(c,0,(int32_t)c->r[5],0); // 804CB488
  if (crb(c,2)) { goto L_804CB4E0; } // 804CB48C
  cmps(c,0,(int32_t)c->r[4],2); // 804CB490
  if (!crb(c,0)) { goto L_804CB4D8; } // 804CB494
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 804CB498
  c->r[10]=c->r[3]+c->r[0]; // 804CB49C
  c->r[3]=0u+0x00000001u; // 804CB4A0
  c->r[9]=R32(c->r[10]+0x0000009Cu); // 804CB4A4
  c->r[8]=R32(c->r[10]+0x000000A0u); // 804CB4A8
  c->r[7]=R32(c->r[10]+0x000000A4u); // 804CB4AC
  c->r[6]=R32(c->r[10]+0x000000A8u); // 804CB4B0
  c->r[4]=R32(c->r[10]+0x000000ACu); // 804CB4B4
  c->r[0]=R32(c->r[10]+0x000000B0u); // 804CB4B8
  W32(c->r[5]+0x00000000u,c->r[9]); // 804CB4BC
  W32(c->r[5]+0x00000004u,c->r[8]); // 804CB4C0
  W32(c->r[5]+0x00000008u,c->r[7]); // 804CB4C4
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 804CB4C8
  W32(c->r[5]+0x00000010u,c->r[4]); // 804CB4CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 804CB4D0
  return; // 804CB4D4
L_804CB4D8:;
  c->r[3]=0u+0x00000000u; // 804CB4D8
  return; // 804CB4DC
L_804CB4E0:;
  c->r[3]=0u+0x00000000u; // 804CB4E0
  return; // 804CB4E4
}

// ForEach__Q34nw4r3g3d7ScnLeafFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_804CB4E8(Ctx* __restrict c) {
  trace_call(0x804CB4E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB4E8
  c->r[0]=c->lr; // 804CB4EC
  c->r[12]=c->r[4]|c->r[4]; // 804CB4F0
  c->r[4]=c->r[5]|c->r[5]; // 804CB4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CB4F8
  c->ctr=c->r[12]; // 804CB4FC
  if (true) { c->lr=0x804CB504u; dispatch(c,c->ctr); } // 804CB500
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804CB504
  c->r[0]=cntlz(c->r[0]); // 804CB508
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CB50C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CB510
  c->lr=c->r[0]; // 804CB514
  c->r[1]=c->r[1]+0x00000010u; // 804CB518
  return; // 804CB51C
}

// fn_804CB520
void f_804CB520(Ctx* __restrict c) {
  trace_call(0x804CB520u);
  c->r[6]=0u+0x00010000u; // 804CB520
  c->r[0]=c->r[6]+0x00000001u; // 804CB524
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CB528
  if (crb(c,2)) { goto L_804CB534; } // 804CB52C
  goto L_804CB55C; // 804CB530
L_804CB534:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB534
  if (crb(c,2)) { goto L_804CB54C; } // 804CB538
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB53C
  c->r[0]=c->r[0]|0x00000060u; // 804CB540
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB544
  goto L_804CB560; // 804CB548
L_804CB54C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB54C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF9Fu; // 804CB550
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CB554
  goto L_804CB560; // 804CB558
L_804CB55C:;
  f_804CB014(c); return; // 804CB55C
L_804CB560:;
  c->r[3]=0u+0x00000001u; // 804CB560
  return; // 804CB564
}

// fn_804CB568
void f_804CB568(Ctx* __restrict c) {
  trace_call(0x804CB568u);
  cmps(c,0,(int32_t)c->r[5],0); // 804CB568
  if (!crb(c,2)) { goto L_804CB578; } // 804CB56C
  c->r[3]=0u+0x00000000u; // 804CB570
  return; // 804CB574
L_804CB578:;
  c->r[6]=0u+0x00010000u; // 804CB578
  c->r[0]=c->r[6]+0x00000001u; // 804CB57C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CB580
  if (crb(c,2)) { goto L_804CB58C; } // 804CB584
  goto L_804CB5A8; // 804CB588
L_804CB58C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB58C
  c->r[3]=rotl(c->r[0],0)&0x00000060u; // 804CB590
  c->r[0]=0u-c->r[3]; // 804CB594
  c->r[0]=c->r[0]|c->r[3]; // 804CB598
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804CB59C
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB5A0
  goto L_804CB5AC; // 804CB5A4
L_804CB5A8:;
  f_804CB1AC(c); return; // 804CB5A8
L_804CB5AC:;
  c->r[3]=0u+0x00000001u; // 804CB5AC
  return; // 804CB5B0
}

// CalcWorldMtx__Q34nw4r3g3d7ScnLeafFPCQ34nw4r4math5MTX34PUl
void f_804CB5B4(Ctx* __restrict c) {
  trace_call(0x804CB5B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB5B4
  c->r[0]=c->lr; // 804CB5B8
  cmps(c,0,(int32_t)c->r[5],0); // 804CB5BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CB5C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CB5C4
  c->r[31]=c->r[3]|c->r[3]; // 804CB5C8
  if (crb(c,2)) { goto L_804CB5E8; } // 804CB5CC
  c->r[6]=R32(c->r[5]+0x00000000u); // 804CB5D0
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 804CB5D4
  if (crb(c,2)) { goto L_804CB5E8; } // 804CB5D8
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 804CB5DC
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB5E0
  goto L_804CB694; // 804CB5E4
L_804CB5E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CB5E8
  if (crb(c,2)) { goto L_804CB608; } // 804CB5EC
  c->r[6]=R32(c->r[5]+0x00000000u); // 804CB5F0
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 804CB5F4
  if (crb(c,2)) { goto L_804CB608; } // 804CB5F8
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 804CB5FC
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CB600
  goto L_804CB668; // 804CB604
L_804CB608:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CB608
  if (crb(c,2)) { goto L_804CB640; } // 804CB60C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CB610
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 804CB614
  if (crb(c,2)) { goto L_804CB62C; } // 804CB618
  c->r[3]=c->r[4]|c->r[4]; // 804CB61C
  c->r[4]=c->r[31]+0x0000003Cu; // 804CB620
  c->lr=0x804CB628u; f_80382F2C(c); // 804CB624
  goto L_804CB64C; // 804CB628
L_804CB62C:;
  c->r[3]=c->r[4]|c->r[4]; // 804CB62C
  c->r[4]=c->r[31]+0x0000000Cu; // 804CB630
  c->r[5]=c->r[31]+0x0000003Cu; // 804CB634
  c->lr=0x804CB63Cu; f_80382F60(c); // 804CB638
  goto L_804CB64C; // 804CB63C
L_804CB640:;
  c->r[3]=c->r[3]+0x0000000Cu; // 804CB640
  c->r[4]=c->r[31]+0x0000003Cu; // 804CB644
  c->lr=0x804CB64Cu; f_80382F2C(c); // 804CB648
L_804CB64C:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 804CB64C
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 804CB650
  if (crb(c,2)) { goto L_804CB668; } // 804CB654
  c->r[3]=c->r[31]+0x000000B4u; // 804CB658
  c->r[4]=c->r[31]+0x0000009Cu; // 804CB65C
  c->r[5]=c->r[31]+0x0000003Cu; // 804CB660
  c->lr=0x804CB668u; f_804E1D9C(c); // 804CB664
L_804CB668:;
  c->r[3]=c->r[31]+0x0000003Cu; // 804CB668
  c->r[5]=c->r[31]+0x000000DCu; // 804CB66C
  c->r[4]=c->r[3]|c->r[3]; // 804CB670
  c->lr=0x804CB678u; f_804E17A8(c); // 804CB674
  c->r[0]=R32(c->r[31]+0x000000CCu); // 804CB678
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 804CB67C
  if (crb(c,2)) { goto L_804CB694; } // 804CB680
  c->r[3]=c->r[31]+0x000000B4u; // 804CB684
  c->r[4]=c->r[31]+0x0000009Cu; // 804CB688
  c->r[5]=c->r[31]+0x0000003Cu; // 804CB68C
  c->lr=0x804CB694u; f_804E1D9C(c); // 804CB690
L_804CB694:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CB694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CB698
  c->lr=c->r[0]; // 804CB69C
  c->r[1]=c->r[1]+0x00000010u; // 804CB6A0
  return; // 804CB6A4
}

// GetScaleProperty__Q34nw4r3g3d7ScnLeafCFv
void f_804CB6A8(Ctx* __restrict c) {
  trace_call(0x804CB6A8u);
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804CB6A8
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CB6AC
  fcmp(c,0,c->f[2],c->f[1]); // 804CB6B0
  if (!crb(c,2)) { goto L_804CB6E0; } // 804CB6B4
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CB6B8
  fcmp(c,0,c->f[1],c->f[0]); // 804CB6BC
  if (!crb(c,2)) { goto L_804CB6E0; } // 804CB6C0
  {uint32_t ea=c->r[2]+0x00001704u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CB6C4
  fcmp(c,0,c->f[0],c->f[2]); // 804CB6C8
  if (!crb(c,2)) { goto L_804CB6D8; } // 804CB6CC
  c->r[3]=0u+0x00000000u; // 804CB6D0
  return; // 804CB6D4
L_804CB6D8:;
  c->r[3]=0u+0x00000001u; // 804CB6D8
  return; // 804CB6DC
L_804CB6E0:;
  c->r[3]=0u+0x00000002u; // 804CB6E0
  return; // 804CB6E4
}

// fn_804CB6E8
void f_804CB6E8(Ctx* __restrict c) {
  trace_call(0x804CB6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB6E8
  c->r[0]=c->lr; // 804CB6EC
  cmps(c,0,(int32_t)c->r[4],9); // 804CB6F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CB6F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CB6F8
  c->r[31]=c->r[6]|c->r[6]; // 804CB6FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CB700
  c->r[30]=c->r[3]|c->r[3]; // 804CB704
  W32(c->r[1]+0x00000008u,c->r[5]); // 804CB708
  if (!crb(c,0)) { goto L_804CB738; } // 804CB70C
  cmps(c,0,(int32_t)c->r[4],3); // 804CB710
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB714
  if (!crb(c,0)) { goto L_804CB72C; } // 804CB718
  cmps(c,0,(int32_t)c->r[4],1); // 804CB71C
  if (crb(c,2)) { goto L_804CB764; } // 804CB720
  if (!crb(c,0)) { goto L_804CB854; } // 804CB724
  goto L_804CB9D8; // 804CB728
L_804CB72C:;
  cmps(c,0,(int32_t)c->r[4],5); // 804CB72C
  if (!crb(c,0)) { goto L_804CB9D8; } // 804CB730
  goto L_804CB8E4; // 804CB734
L_804CB738:;
  c->r[5]=0u+0x00010000u; // 804CB738
  c->r[0]=c->r[5]+0x00000003u; // 804CB73C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CB740
  if (crb(c,2)) { goto L_804CB9C8; } // 804CB744
  if (!crb(c,0)) { goto L_804CB9D8; } // 804CB748
  c->r[0]=c->r[5]+0x00000001u; // 804CB74C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CB750
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB754
  if (!crb(c,0)) { goto L_804CB9D4; } // 804CB758
  goto L_804CB9D8; // 804CB75C
  goto L_804CB9D8; // 804CB760
L_804CB764:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CB764
  c->r[6]=c->r[5]|c->r[5]; // 804CB768
  cmps(c,0,(int32_t)c->r[4],0); // 804CB76C
  if (crb(c,2)) { goto L_804CB7AC; } // 804CB770
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CB774
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB778
  if (crb(c,2)) { goto L_804CB7AC; } // 804CB77C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB780
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB784
  if (crb(c,2)) { goto L_804CB7AC; } // 804CB788
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CB78C
  c->r[3]=c->r[4]|c->r[4]; // 804CB790
  c->r[5]=c->r[30]|c->r[30]; // 804CB794
  c->r[7]=c->r[31]|c->r[31]; // 804CB798
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CB79C
  c->r[4]=0u+0x00000001u; // 804CB7A0
  c->ctr=c->r[12]; // 804CB7A4
  if (true) { c->lr=0x804CB7ACu; dispatch(c,c->ctr); } // 804CB7A8
L_804CB7AC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CB7AC
  c->r[3]=c->r[30]|c->r[30]; // 804CB7B0
  c->r[4]=c->r[31]|c->r[31]; // 804CB7B4
  c->r[5]=c->r[1]+0x00000008u; // 804CB7B8
  c->r[12]=R32(c->r[12]+0x00000030u); // 804CB7BC
  c->ctr=c->r[12]; // 804CB7C0
  if (true) { c->lr=0x804CB7C8u; dispatch(c,c->ctr); } // 804CB7C4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CB7C8
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CB7CC
  cmps(c,0,(int32_t)c->r[3],0); // 804CB7D0
  if (crb(c,2)) { goto L_804CB80C; } // 804CB7D4
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CB7D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB7DC
  if (crb(c,2)) { goto L_804CB80C; } // 804CB7E0
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CB7E4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CB7E8
  if (crb(c,2)) { goto L_804CB80C; } // 804CB7EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB7F0
  c->r[5]=c->r[30]|c->r[30]; // 804CB7F4
  c->r[7]=c->r[31]|c->r[31]; // 804CB7F8
  c->r[4]=0u+0x00000002u; // 804CB7FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CB800
  c->ctr=c->r[12]; // 804CB804
  if (true) { c->lr=0x804CB80Cu; dispatch(c,c->ctr); } // 804CB808
L_804CB80C:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CB80C
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CB810
  cmps(c,0,(int32_t)c->r[3],0); // 804CB814
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB818
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CB81C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB820
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB824
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CB828
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB82C
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB830
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB834
  c->r[5]=c->r[30]|c->r[30]; // 804CB838
  c->r[7]=c->r[31]|c->r[31]; // 804CB83C
  c->r[4]=0u+0x00000004u; // 804CB840
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CB844
  c->ctr=c->r[12]; // 804CB848
  if (true) { c->lr=0x804CB850u; dispatch(c,c->ctr); } // 804CB84C
  goto L_804CB9D8; // 804CB850
L_804CB854:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CB854
  c->r[6]=c->r[5]|c->r[5]; // 804CB858
  cmps(c,0,(int32_t)c->r[4],0); // 804CB85C
  if (crb(c,2)) { goto L_804CB89C; } // 804CB860
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CB864
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CB868
  if (crb(c,2)) { goto L_804CB89C; } // 804CB86C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB870
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB874
  if (crb(c,2)) { goto L_804CB89C; } // 804CB878
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CB87C
  c->r[3]=c->r[4]|c->r[4]; // 804CB880
  c->r[5]=c->r[30]|c->r[30]; // 804CB884
  c->r[7]=c->r[31]|c->r[31]; // 804CB888
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CB88C
  c->r[4]=0u+0x00000001u; // 804CB890
  c->ctr=c->r[12]; // 804CB894
  if (true) { c->lr=0x804CB89Cu; dispatch(c,c->ctr); } // 804CB898
L_804CB89C:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CB89C
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CB8A0
  cmps(c,0,(int32_t)c->r[3],0); // 804CB8A4
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB8A8
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CB8AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CB8B0
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB8B4
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CB8B8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB8BC
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB8C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB8C4
  c->r[5]=c->r[30]|c->r[30]; // 804CB8C8
  c->r[7]=c->r[31]|c->r[31]; // 804CB8CC
  c->r[4]=0u+0x00000004u; // 804CB8D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CB8D4
  c->ctr=c->r[12]; // 804CB8D8
  if (true) { c->lr=0x804CB8E0u; dispatch(c,c->ctr); } // 804CB8DC
  goto L_804CB9D8; // 804CB8E0
L_804CB8E4:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CB8E4
  c->r[6]=c->r[5]|c->r[5]; // 804CB8E8
  cmps(c,0,(int32_t)c->r[4],0); // 804CB8EC
  if (crb(c,2)) { goto L_804CB92C; } // 804CB8F0
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CB8F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB8F8
  if (crb(c,2)) { goto L_804CB92C; } // 804CB8FC
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CB900
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CB904
  if (crb(c,2)) { goto L_804CB92C; } // 804CB908
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CB90C
  c->r[3]=c->r[4]|c->r[4]; // 804CB910
  c->r[5]=c->r[30]|c->r[30]; // 804CB914
  c->r[7]=c->r[31]|c->r[31]; // 804CB918
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CB91C
  c->r[4]=0u+0x00000001u; // 804CB920
  c->ctr=c->r[12]; // 804CB924
  if (true) { c->lr=0x804CB92Cu; dispatch(c,c->ctr); } // 804CB928
L_804CB92C:;
  c->r[3]=c->r[31]|c->r[31]; // 804CB92C
  c->r[4]=c->r[30]+0x0000003Cu; // 804CB930
  c->r[5]=c->r[30]+0x0000006Cu; // 804CB934
  c->lr=0x804CB93Cu; f_80382F60(c); // 804CB938
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CB93C
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CB940
  cmps(c,0,(int32_t)c->r[3],0); // 804CB944
  if (crb(c,2)) { goto L_804CB980; } // 804CB948
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CB94C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB950
  if (crb(c,2)) { goto L_804CB980; } // 804CB954
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CB958
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CB95C
  if (crb(c,2)) { goto L_804CB980; } // 804CB960
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB964
  c->r[5]=c->r[30]|c->r[30]; // 804CB968
  c->r[7]=c->r[31]|c->r[31]; // 804CB96C
  c->r[4]=0u+0x00000002u; // 804CB970
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CB974
  c->ctr=c->r[12]; // 804CB978
  if (true) { c->lr=0x804CB980u; dispatch(c,c->ctr); } // 804CB97C
L_804CB980:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CB980
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CB984
  cmps(c,0,(int32_t)c->r[3],0); // 804CB988
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB98C
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CB990
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB994
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB998
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CB99C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CB9A0
  if (crb(c,2)) { goto L_804CB9D8; } // 804CB9A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CB9A8
  c->r[5]=c->r[30]|c->r[30]; // 804CB9AC
  c->r[7]=c->r[31]|c->r[31]; // 804CB9B0
  c->r[4]=0u+0x00000004u; // 804CB9B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CB9B8
  c->ctr=c->r[12]; // 804CB9BC
  if (true) { c->lr=0x804CB9C4u; dispatch(c,c->ctr); } // 804CB9C0
  goto L_804CB9D8; // 804CB9C4
L_804CB9C8:;
  c->r[0]=0u+0x00000000u; // 804CB9C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804CB9CC
  goto L_804CB9D8; // 804CB9D0
L_804CB9D4:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804CB9D4
L_804CB9D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CB9D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CB9DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CB9E0
  c->lr=c->r[0]; // 804CB9E4
  c->r[1]=c->r[1]+0x00000020u; // 804CB9E8
  return; // 804CB9EC
}

// Construct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPUlUl
void f_804CB9F0(Ctx* __restrict c) {
  trace_call(0x804CB9F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CB9F0
  c->r[0]=c->lr; // 804CB9F4
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804CB9F8
  cmps(c,0,(int32_t)c->r[4],0); // 804CB9FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CBA00
  c->r[0]=c->r[6]+0x000000EBu; // 804CBA04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804CBA08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CBA0C
  c->r[31]=0u+0x00000000u; // 804CBA10
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CBA14
  c->r[30]=c->r[5]|c->r[5]; // 804CBA18
  W32(c->r[1]+0x00000014u,c->r[29]); // 804CBA1C
  c->r[29]=c->r[3]|c->r[3]; // 804CBA20
  if (crb(c,2)) { goto L_804CBA2C; } // 804CBA24
  W32(c->r[4]+0x00000000u,c->r[0]); // 804CBA28
L_804CBA2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804CBA2C
  if (crb(c,2)) { goto L_804CBA8C; } // 804CBA30
  c->r[3]=c->r[29]|c->r[29]; // 804CBA34
  c->r[4]=c->r[0]|c->r[0]; // 804CBA38
  c->lr=0x804CBA40u; f_803C4D08(c); // 804CBA3C
  cmps(c,0,(int32_t)c->r[3],0); // 804CBA40
  c->r[31]=c->r[3]|c->r[3]; // 804CBA44
  if (!crb(c,2)) { goto L_804CBA54; } // 804CBA48
  c->r[3]=0u+0x00000000u; // 804CBA4C
  goto L_804CBA90; // 804CBA50
L_804CBA54:;
  if (crb(c,2)) { goto L_804CBA8C; } // 804CBA54
  c->r[4]=c->r[29]|c->r[29]; // 804CBA58
  c->lr=0x804CBA60u; f_804CAEA4(c); // 804CBA5C
  c->r[4]=0u+0x80720000u; // 804CBA60
  c->r[3]=c->r[31]+0x000000E8u; // 804CBA64
  c->r[4]=c->r[4]+0xFFFFA410u; // 804CBA68
  c->r[0]=0u+0x00000000u; // 804CBA6C
  W32(c->r[31]+0x00000000u,c->r[4]); // 804CBA70
  W32(c->r[31]+0x000000DCu,c->r[3]); // 804CBA74
  W32(c->r[31]+0x000000E0u,c->r[30]); // 804CBA78
  W32(c->r[31]+0x000000E4u,c->r[0]); // 804CBA7C
  c->r[0]=R32(c->r[31]+0x000000CCu); // 804CBA80
  c->r[0]=c->r[0]|0x60000000u; // 804CBA84
  W32(c->r[31]+0x000000CCu,c->r[0]); // 804CBA88
L_804CBA8C:;
  c->r[3]=c->r[31]|c->r[31]; // 804CBA8C
L_804CBA90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CBA90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CBA94
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CBA98
  c->r[29]=R32(c->r[1]+0x00000014u); // 804CBA9C
  c->lr=c->r[0]; // 804CBAA0
  c->r[1]=c->r[1]+0x00000020u; // 804CBAA4
  return; // 804CBAA8
}

// ForEach__Q34nw4r3g3d8ScnGroupFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_804CBAAC(Ctx* __restrict c) {
  trace_call(0x804CBAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CBAAC
  c->r[0]=c->lr; // 804CBAB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CBAB4
  c->r[11]=c->r[1]+0x00000020u; // 804CBAB8
  c->lr=0x804CBAC0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CBABC
  cmps(c,0,(int32_t)c->r[6],0); // 804CBAC0
  c->r[27]=c->r[3]|c->r[3]; // 804CBAC4
  c->r[28]=c->r[4]|c->r[4]; // 804CBAC8
  c->r[29]=c->r[5]|c->r[5]; // 804CBACC
  if (crb(c,2)) { goto L_804CBB4C; } // 804CBAD0
  c->r[30]=0u+0x00000000u; // 804CBAD4
  c->r[31]=0u+0x00000000u; // 804CBAD8
  goto L_804CBB1C; // 804CBADC
L_804CBAE0:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 804CBAE0
  c->r[4]=c->r[28]|c->r[28]; // 804CBAE4
  c->r[5]=c->r[29]|c->r[29]; // 804CBAE8
  c->r[6]=0u+0x00000000u; // 804CBAEC
  c->r[3]=R32(c->r[3]+c->r[31]); // 804CBAF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBAF4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804CBAF8
  c->ctr=c->r[12]; // 804CBAFC
  if (true) { c->lr=0x804CBB04u; dispatch(c,c->ctr); } // 804CBB00
  cmps(c,0,(int32_t)c->r[3],1); // 804CBB04
  if (!crb(c,2)) { goto L_804CBB14; } // 804CBB08
  c->r[3]=0u+0x00000001u; // 804CBB0C
  goto L_804CBBCC; // 804CBB10
L_804CBB14:;
  c->r[31]=c->r[31]+0x00000004u; // 804CBB14
  c->r[30]=c->r[30]+0x00000001u; // 804CBB18
L_804CBB1C:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 804CBB1C
  cmpu(c,0,c->r[30],c->r[0]); // 804CBB20
  if (crb(c,0)) { IRQCHK(c); goto L_804CBAE0; } // 804CBB24
  c->r[12]=c->r[28]|c->r[28]; // 804CBB28
  c->r[3]=c->r[27]|c->r[27]; // 804CBB2C
  c->r[4]=c->r[29]|c->r[29]; // 804CBB30
  c->ctr=c->r[12]; // 804CBB34
  if (true) { c->lr=0x804CBB3Cu; dispatch(c,c->ctr); } // 804CBB38
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804CBB3C
  c->r[0]=cntlz(c->r[0]); // 804CBB40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CBB44
  goto L_804CBBCC; // 804CBB48
L_804CBB4C:;
  c->r[12]=c->r[28]|c->r[28]; // 804CBB4C
  c->r[4]=c->r[29]|c->r[29]; // 804CBB50
  c->ctr=c->r[12]; // 804CBB54
  if (true) { c->lr=0x804CBB5Cu; dispatch(c,c->ctr); } // 804CBB58
  cmps(c,0,(int32_t)c->r[3],0); // 804CBB5C
  if (!crb(c,2)) { goto L_804CBBC0; } // 804CBB60
  c->r[30]=0u+0x00000000u; // 804CBB64
  c->r[31]=0u+0x00000000u; // 804CBB68
  goto L_804CBBAC; // 804CBB6C
L_804CBB70:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 804CBB70
  c->r[4]=c->r[28]|c->r[28]; // 804CBB74
  c->r[5]=c->r[29]|c->r[29]; // 804CBB78
  c->r[6]=0u+0x00000000u; // 804CBB7C
  c->r[3]=R32(c->r[3]+c->r[31]); // 804CBB80
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBB84
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804CBB88
  c->ctr=c->r[12]; // 804CBB8C
  if (true) { c->lr=0x804CBB94u; dispatch(c,c->ctr); } // 804CBB90
  cmps(c,0,(int32_t)c->r[3],1); // 804CBB94
  if (!crb(c,2)) { goto L_804CBBA4; } // 804CBB98
  c->r[3]=0u+0x00000001u; // 804CBB9C
  goto L_804CBBCC; // 804CBBA0
L_804CBBA4:;
  c->r[31]=c->r[31]+0x00000004u; // 804CBBA4
  c->r[30]=c->r[30]+0x00000001u; // 804CBBA8
L_804CBBAC:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 804CBBAC
  cmpu(c,0,c->r[30],c->r[0]); // 804CBBB0
  if (crb(c,0)) { IRQCHK(c); goto L_804CBB70; } // 804CBBB4
  c->r[3]=0u+0x00000000u; // 804CBBB8
  goto L_804CBBCC; // 804CBBBC
L_804CBBC0:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804CBBC0
  c->r[0]=cntlz(c->r[0]); // 804CBBC4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CBBC8
L_804CBBCC:;
  c->r[11]=c->r[1]+0x00000020u; // 804CBBCC
  c->lr=0x804CBBD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CBBD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CBBD4
  c->lr=c->r[0]; // 804CBBD8
  c->r[1]=c->r[1]+0x00000020u; // 804CBBDC
  return; // 804CBBE0
}

// ScnGroup_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d13IScnObjGather
void f_804CBBE4(Ctx* __restrict c) {
  trace_call(0x804CBBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CBBE4
  c->r[0]=c->lr; // 804CBBE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CBBEC
  c->r[11]=c->r[1]+0x00000020u; // 804CBBF0
  c->lr=0x804CBBF8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CBBF4
  c->r[31]=c->r[5]|c->r[5]; // 804CBBF8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CBBFC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CBC00
  c->r[30]=c->r[4]|c->r[4]; // 804CBC04
  c->r[4]=rotl(c->r[0],0)&0x20000000u; // 804CBC08
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 804CBC0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBC10
  c->r[29]=c->r[3]|c->r[3]; // 804CBC14
  c->r[5]=cntlz(c->r[4]); // 804CBC18
  c->r[0]=cntlz(c->r[0]); // 804CBC1C
  c->r[3]=c->r[31]|c->r[31]; // 804CBC20
  c->r[4]=c->r[29]|c->r[29]; // 804CBC24
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 804CBC28
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CBC2C
  c->ctr=c->r[12]; // 804CBC30
  if (true) { c->lr=0x804CBC38u; dispatch(c,c->ctr); } // 804CBC34
  cmps(c,0,(int32_t)c->r[3],0); // 804CBC38
  if (!crb(c,2)) { goto L_804CBC88; } // 804CBC3C
  c->r[27]=0u+0x00000000u; // 804CBC40
  c->r[28]=0u+0x00000000u; // 804CBC44
  goto L_804CBC78; // 804CBC48
L_804CBC4C:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CBC4C
  c->r[5]=c->r[30]|c->r[30]; // 804CBC50
  c->r[6]=c->r[31]|c->r[31]; // 804CBC54
  c->r[4]=0u+0x00000005u; // 804CBC58
  c->r[3]=R32(c->r[3]+c->r[28]); // 804CBC5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBC60
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBC64
  c->ctr=c->r[12]; // 804CBC68
  if (true) { c->lr=0x804CBC70u; dispatch(c,c->ctr); } // 804CBC6C
  c->r[28]=c->r[28]+0x00000004u; // 804CBC70
  c->r[27]=c->r[27]+0x00000001u; // 804CBC74
L_804CBC78:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CBC78
  cmpu(c,0,c->r[27],c->r[0]); // 804CBC7C
  if (crb(c,0)) { IRQCHK(c); goto L_804CBC4C; } // 804CBC80
  goto L_804CBCE4; // 804CBC84
L_804CBC88:;
  cmps(c,0,(int32_t)c->r[3],1); // 804CBC88
  if (!crb(c,2)) { goto L_804CBCE4; } // 804CBC8C
  c->r[27]=R32(c->r[13]+0xFFFFE490u); // 804CBC90
  c->r[0]=0u+0x00000000u; // 804CBC94
  c->r[26]=0u+0x00000000u; // 804CBC98
  c->r[28]=0u+0x00000000u; // 804CBC9C
  W32(c->r[13]+0xFFFFE490u,c->r[0]); // 804CBCA0
  goto L_804CBCD4; // 804CBCA4
L_804CBCA8:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CBCA8
  c->r[5]=c->r[30]|c->r[30]; // 804CBCAC
  c->r[6]=c->r[31]|c->r[31]; // 804CBCB0
  c->r[4]=0u+0x00000005u; // 804CBCB4
  c->r[3]=R32(c->r[3]+c->r[28]); // 804CBCB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBCBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBCC0
  c->ctr=c->r[12]; // 804CBCC4
  if (true) { c->lr=0x804CBCCCu; dispatch(c,c->ctr); } // 804CBCC8
  c->r[28]=c->r[28]+0x00000004u; // 804CBCCC
  c->r[26]=c->r[26]+0x00000001u; // 804CBCD0
L_804CBCD4:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CBCD4
  cmpu(c,0,c->r[26],c->r[0]); // 804CBCD8
  if (crb(c,0)) { IRQCHK(c); goto L_804CBCA8; } // 804CBCDC
  W32(c->r[13]+0xFFFFE490u,c->r[27]); // 804CBCE0
L_804CBCE4:;
  c->r[11]=c->r[1]+0x00000020u; // 804CBCE4
  c->lr=0x804CBCECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CBCE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CBCEC
  c->lr=c->r[0]; // 804CBCF0
  c->r[1]=c->r[1]+0x00000020u; // 804CBCF4
  return; // 804CBCF8
}

// G3dProc__Q34nw4r3g3d8ScnGroupFUlUlPv
void f_804CBCFC(Ctx* __restrict c) {
  trace_call(0x804CBCFCu);
  cmpu(c,0,c->r[4],0x00000009u); // 804CBCFC
  if (!crb(c,0)) { goto L_804CBD24; } // 804CBD00
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 804CBD04
  c->r[8]=0u+0x00000001u; // 804CBD08
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CBD0C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 804CBD10
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 804CBD14
  if (crb(c,2)) { goto L_804CBD24; } // 804CBD18
  c->r[0]=0u+0x00000001u; // 804CBD1C
  goto L_804CBD28; // 804CBD20
L_804CBD24:;
  c->r[0]=0u+0x00000000u; // 804CBD24
L_804CBD28:;
  cmps(c,0,(int32_t)c->r[0],0); // 804CBD28
  if (!crb(c,2)) return; // 804CBD2C
  f_804CBD38(c); return; // 804CBD30
  return; // 804CBD34
}

// fn_804CBD38
void f_804CBD38(Ctx* __restrict c) {
  trace_call(0x804CBD38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CBD38
  c->r[0]=c->lr; // 804CBD3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CBD40
  c->r[11]=c->r[1]+0x00000030u; // 804CBD44
  c->lr=0x804CBD4Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CBD48
  cmps(c,0,(int32_t)c->r[4],8); // 804CBD4C
  c->r[29]=c->r[3]|c->r[3]; // 804CBD50
  c->r[26]=c->r[4]|c->r[4]; // 804CBD54
  c->r[30]=c->r[5]|c->r[5]; // 804CBD58
  c->r[31]=c->r[6]|c->r[6]; // 804CBD5C
  if (crb(c,2)) { goto L_804CC138; } // 804CBD60
  if (!crb(c,0)) { goto L_804CBD94; } // 804CBD64
  cmps(c,0,(int32_t)c->r[4],3); // 804CBD68
  if (crb(c,2)) { goto L_804CC138; } // 804CBD6C
  if (!crb(c,0)) { goto L_804CBD84; } // 804CBD70
  cmps(c,0,(int32_t)c->r[4],1); // 804CBD74
  if (crb(c,2)) { goto L_804CBDD0; } // 804CBD78
  if (!crb(c,0)) { goto L_804CBF0C; } // 804CBD7C
  goto L_804CC138; // 804CBD80
L_804CBD84:;
  cmps(c,0,(int32_t)c->r[4],5); // 804CBD84
  if (crb(c,2)) { goto L_804CBDC0; } // 804CBD88
  if (!crb(c,0)) { goto L_804CC17C; } // 804CBD8C
  goto L_804CBFE0; // 804CBD90
L_804CBD94:;
  c->r[5]=0u+0x00010000u; // 804CBD94
  c->r[0]=c->r[5]+0x00000003u; // 804CBD98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CBD9C
  if (crb(c,2)) { goto L_804CC124; } // 804CBDA0
  if (!crb(c,0)) { goto L_804CC138; } // 804CBDA4
  c->r[0]=c->r[5]+0x00000001u; // 804CBDA8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CBDAC
  if (crb(c,2)) { goto L_804CC10C; } // 804CBDB0
  if (!crb(c,0)) { goto L_804CC130; } // 804CBDB4
  goto L_804CC138; // 804CBDB8
  goto L_804CC138; // 804CBDBC
L_804CBDC0:;
  c->r[4]=c->r[30]|c->r[30]; // 804CBDC0
  c->r[5]=c->r[31]|c->r[31]; // 804CBDC4
  c->lr=0x804CBDCCu; f_804CBBE4(c); // 804CBDC8
  goto L_804CC17C; // 804CBDCC
L_804CBDD0:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 804CBDD0
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CBDD4
  cmps(c,0,(int32_t)c->r[4],0); // 804CBDD8
  if (crb(c,2)) { goto L_804CBE1C; } // 804CBDDC
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CBDE0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBDE4
  if (crb(c,2)) { goto L_804CBE1C; } // 804CBDE8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CBDEC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBDF0
  if (crb(c,2)) { goto L_804CBE1C; } // 804CBDF4
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CBDF8
  c->r[3]=c->r[4]|c->r[4]; // 804CBDFC
  c->r[5]=c->r[29]|c->r[29]; // 804CBE00
  c->r[6]=c->r[30]|c->r[30]; // 804CBE04
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBE08
  c->r[7]=c->r[31]|c->r[31]; // 804CBE0C
  c->r[4]=0u+0x00000001u; // 804CBE10
  c->ctr=c->r[12]; // 804CBE14
  if (true) { c->lr=0x804CBE1Cu; dispatch(c,c->ctr); } // 804CBE18
L_804CBE1C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CBE1C
  c->r[3]=c->r[29]|c->r[29]; // 804CBE20
  c->r[4]=c->r[31]|c->r[31]; // 804CBE24
  c->r[5]=c->r[1]+0x00000008u; // 804CBE28
  c->r[12]=R32(c->r[12]+0x00000030u); // 804CBE2C
  c->ctr=c->r[12]; // 804CBE30
  if (true) { c->lr=0x804CBE38u; dispatch(c,c->ctr); } // 804CBE34
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CBE38
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CBE3C
  cmps(c,0,(int32_t)c->r[3],0); // 804CBE40
  if (crb(c,2)) { goto L_804CBE7C; } // 804CBE44
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CBE48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBE4C
  if (crb(c,2)) { goto L_804CBE7C; } // 804CBE50
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CBE54
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CBE58
  if (crb(c,2)) { goto L_804CBE7C; } // 804CBE5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBE60
  c->r[5]=c->r[29]|c->r[29]; // 804CBE64
  c->r[7]=c->r[31]|c->r[31]; // 804CBE68
  c->r[4]=0u+0x00000002u; // 804CBE6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBE70
  c->ctr=c->r[12]; // 804CBE74
  if (true) { c->lr=0x804CBE7Cu; dispatch(c,c->ctr); } // 804CBE78
L_804CBE7C:;
  c->r[28]=c->r[29]+0x0000003Cu; // 804CBE7C
  c->r[30]=0u+0x00000000u; // 804CBE80
  c->r[27]=0u+0x00000000u; // 804CBE84
  goto L_804CBEB8; // 804CBE88
L_804CBE8C:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CBE8C
  c->r[6]=c->r[28]|c->r[28]; // 804CBE90
  c->r[5]=R32(c->r[1]+0x00000008u); // 804CBE94
  c->r[4]=0u+0x00000001u; // 804CBE98
  c->r[3]=R32(c->r[3]+c->r[27]); // 804CBE9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBEA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBEA4
  c->ctr=c->r[12]; // 804CBEA8
  if (true) { c->lr=0x804CBEB0u; dispatch(c,c->ctr); } // 804CBEAC
  c->r[27]=c->r[27]+0x00000004u; // 804CBEB0
  c->r[30]=c->r[30]+0x00000001u; // 804CBEB4
L_804CBEB8:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CBEB8
  cmpu(c,0,c->r[30],c->r[0]); // 804CBEBC
  if (crb(c,0)) { IRQCHK(c); goto L_804CBE8C; } // 804CBEC0
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CBEC4
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CBEC8
  cmps(c,0,(int32_t)c->r[3],0); // 804CBECC
  if (crb(c,2)) { goto L_804CC17C; } // 804CBED0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CBED4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBED8
  if (crb(c,2)) { goto L_804CC17C; } // 804CBEDC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CBEE0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CBEE4
  if (crb(c,2)) { goto L_804CC17C; } // 804CBEE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBEEC
  c->r[5]=c->r[29]|c->r[29]; // 804CBEF0
  c->r[7]=c->r[31]|c->r[31]; // 804CBEF4
  c->r[4]=0u+0x00000004u; // 804CBEF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBEFC
  c->ctr=c->r[12]; // 804CBF00
  if (true) { c->lr=0x804CBF08u; dispatch(c,c->ctr); } // 804CBF04
  goto L_804CC17C; // 804CBF08
L_804CBF0C:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CBF0C
  cmps(c,0,(int32_t)c->r[4],0); // 804CBF10
  if (crb(c,2)) { goto L_804CBF54; } // 804CBF14
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CBF18
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CBF1C
  if (crb(c,2)) { goto L_804CBF54; } // 804CBF20
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CBF24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBF28
  if (crb(c,2)) { goto L_804CBF54; } // 804CBF2C
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CBF30
  c->r[3]=c->r[4]|c->r[4]; // 804CBF34
  c->r[5]=c->r[29]|c->r[29]; // 804CBF38
  c->r[6]=c->r[30]|c->r[30]; // 804CBF3C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CBF40
  c->r[7]=c->r[31]|c->r[31]; // 804CBF44
  c->r[4]=0u+0x00000001u; // 804CBF48
  c->ctr=c->r[12]; // 804CBF4C
  if (true) { c->lr=0x804CBF54u; dispatch(c,c->ctr); } // 804CBF50
L_804CBF54:;
  c->r[28]=0u+0x00000000u; // 804CBF54
  c->r[27]=0u+0x00000000u; // 804CBF58
  goto L_804CBF8C; // 804CBF5C
L_804CBF60:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CBF60
  c->r[5]=c->r[30]|c->r[30]; // 804CBF64
  c->r[6]=c->r[31]|c->r[31]; // 804CBF68
  c->r[4]=0u+0x00000002u; // 804CBF6C
  c->r[3]=R32(c->r[3]+c->r[27]); // 804CBF70
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBF74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CBF78
  c->ctr=c->r[12]; // 804CBF7C
  if (true) { c->lr=0x804CBF84u; dispatch(c,c->ctr); } // 804CBF80
  c->r[27]=c->r[27]+0x00000004u; // 804CBF84
  c->r[28]=c->r[28]+0x00000001u; // 804CBF88
L_804CBF8C:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CBF8C
  cmpu(c,0,c->r[28],c->r[0]); // 804CBF90
  if (crb(c,0)) { IRQCHK(c); goto L_804CBF60; } // 804CBF94
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CBF98
  cmps(c,0,(int32_t)c->r[3],0); // 804CBF9C
  if (crb(c,2)) { goto L_804CC17C; } // 804CBFA0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CBFA4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CBFA8
  if (crb(c,2)) { goto L_804CC17C; } // 804CBFAC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CBFB0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CBFB4
  if (crb(c,2)) { goto L_804CC17C; } // 804CBFB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CBFBC
  c->r[5]=c->r[29]|c->r[29]; // 804CBFC0
  c->r[6]=c->r[30]|c->r[30]; // 804CBFC4
  c->r[7]=c->r[31]|c->r[31]; // 804CBFC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CBFCC
  c->r[4]=0u+0x00000004u; // 804CBFD0
  c->ctr=c->r[12]; // 804CBFD4
  if (true) { c->lr=0x804CBFDCu; dispatch(c,c->ctr); } // 804CBFD8
  goto L_804CC17C; // 804CBFDC
L_804CBFE0:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CBFE0
  cmps(c,0,(int32_t)c->r[4],0); // 804CBFE4
  if (crb(c,2)) { goto L_804CC028; } // 804CBFE8
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CBFEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CBFF0
  if (crb(c,2)) { goto L_804CC028; } // 804CBFF4
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CBFF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CBFFC
  if (crb(c,2)) { goto L_804CC028; } // 804CC000
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CC004
  c->r[3]=c->r[4]|c->r[4]; // 804CC008
  c->r[5]=c->r[29]|c->r[29]; // 804CC00C
  c->r[6]=c->r[30]|c->r[30]; // 804CC010
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CC014
  c->r[7]=c->r[31]|c->r[31]; // 804CC018
  c->r[4]=0u+0x00000001u; // 804CC01C
  c->ctr=c->r[12]; // 804CC020
  if (true) { c->lr=0x804CC028u; dispatch(c,c->ctr); } // 804CC024
L_804CC028:;
  c->r[3]=c->r[31]|c->r[31]; // 804CC028
  c->r[4]=c->r[29]+0x0000003Cu; // 804CC02C
  c->r[5]=c->r[29]+0x0000006Cu; // 804CC030
  c->lr=0x804CC038u; f_80382F60(c); // 804CC034
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CC038
  cmps(c,0,(int32_t)c->r[3],0); // 804CC03C
  if (crb(c,2)) { goto L_804CC07C; } // 804CC040
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CC044
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CC048
  if (crb(c,2)) { goto L_804CC07C; } // 804CC04C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CC050
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CC054
  if (crb(c,2)) { goto L_804CC07C; } // 804CC058
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC05C
  c->r[5]=c->r[29]|c->r[29]; // 804CC060
  c->r[6]=c->r[30]|c->r[30]; // 804CC064
  c->r[7]=c->r[31]|c->r[31]; // 804CC068
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CC06C
  c->r[4]=0u+0x00000002u; // 804CC070
  c->ctr=c->r[12]; // 804CC074
  if (true) { c->lr=0x804CC07Cu; dispatch(c,c->ctr); } // 804CC078
L_804CC07C:;
  c->r[28]=0u+0x00000000u; // 804CC07C
  c->r[27]=0u+0x00000000u; // 804CC080
  goto L_804CC0B4; // 804CC084
L_804CC088:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CC088
  c->r[5]=c->r[30]|c->r[30]; // 804CC08C
  c->r[6]=c->r[31]|c->r[31]; // 804CC090
  c->r[4]=0u+0x00000004u; // 804CC094
  c->r[3]=R32(c->r[3]+c->r[27]); // 804CC098
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC09C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC0A0
  c->ctr=c->r[12]; // 804CC0A4
  if (true) { c->lr=0x804CC0ACu; dispatch(c,c->ctr); } // 804CC0A8
  c->r[27]=c->r[27]+0x00000004u; // 804CC0AC
  c->r[28]=c->r[28]+0x00000001u; // 804CC0B0
L_804CC0B4:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CC0B4
  cmpu(c,0,c->r[28],c->r[0]); // 804CC0B8
  if (crb(c,0)) { IRQCHK(c); goto L_804CC088; } // 804CC0BC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CC0C0
  cmps(c,0,(int32_t)c->r[3],0); // 804CC0C4
  if (crb(c,2)) { goto L_804CC17C; } // 804CC0C8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CC0CC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CC0D0
  if (crb(c,2)) { goto L_804CC17C; } // 804CC0D4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CC0D8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CC0DC
  if (crb(c,2)) { goto L_804CC17C; } // 804CC0E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC0E4
  c->r[5]=c->r[29]|c->r[29]; // 804CC0E8
  c->r[6]=c->r[30]|c->r[30]; // 804CC0EC
  c->r[7]=c->r[31]|c->r[31]; // 804CC0F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CC0F4
  c->r[4]=0u+0x00000004u; // 804CC0F8
  c->ctr=c->r[12]; // 804CC0FC
  if (true) { c->lr=0x804CC104u; dispatch(c,c->ctr); } // 804CC100
  goto L_804CC17C; // 804CC104
  goto L_804CC17C; // 804CC108
L_804CC10C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC10C
  c->r[4]=c->r[31]|c->r[31]; // 804CC110
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804CC114
  c->ctr=c->r[12]; // 804CC118
  if (true) { c->lr=0x804CC120u; dispatch(c,c->ctr); } // 804CC11C
  goto L_804CC17C; // 804CC120
L_804CC124:;
  c->r[0]=0u+0x00000000u; // 804CC124
  W32(c->r[3]+0x00000004u,c->r[0]); // 804CC128
  goto L_804CC17C; // 804CC12C
L_804CC130:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804CC130
  goto L_804CC17C; // 804CC134
L_804CC138:;
  c->r[27]=0u+0x00000000u; // 804CC138
  c->r[28]=0u+0x00000000u; // 804CC13C
  goto L_804CC170; // 804CC140
L_804CC144:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 804CC144
  c->r[4]=c->r[26]|c->r[26]; // 804CC148
  c->r[5]=c->r[30]|c->r[30]; // 804CC14C
  c->r[6]=c->r[31]|c->r[31]; // 804CC150
  c->r[3]=R32(c->r[3]+c->r[28]); // 804CC154
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC158
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC15C
  c->ctr=c->r[12]; // 804CC160
  if (true) { c->lr=0x804CC168u; dispatch(c,c->ctr); } // 804CC164
  c->r[28]=c->r[28]+0x00000004u; // 804CC168
  c->r[27]=c->r[27]+0x00000001u; // 804CC16C
L_804CC170:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 804CC170
  cmpu(c,0,c->r[27],c->r[0]); // 804CC174
  if (crb(c,0)) { IRQCHK(c); goto L_804CC144; } // 804CC178
L_804CC17C:;
  c->r[11]=c->r[1]+0x00000030u; // 804CC17C
  c->lr=0x804CC184u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CC180
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CC184
  c->lr=c->r[0]; // 804CC188
  c->r[1]=c->r[1]+0x00000030u; // 804CC18C
  return; // 804CC190
}

// Insert__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d6ScnObj
void f_804CC194(Ctx* __restrict c) {
  trace_call(0x804CC194u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC194
  c->r[0]=c->lr; // 804CC198
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC19C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CC1A0
  c->r[31]=c->r[3]|c->r[3]; // 804CC1A4
  c->r[6]=R32(c->r[3]+0x000000E4u); // 804CC1A8
  cmpu(c,0,c->r[4],c->r[6]); // 804CC1AC
  if (crb(c,1)) { goto L_804CC308; } // 804CC1B0
  c->r[0]=R32(c->r[3]+0x000000E0u); // 804CC1B4
  cmpu(c,0,c->r[6],c->r[0]); // 804CC1B8
  if (!crb(c,0)) { goto L_804CC308; } // 804CC1BC
  cmps(c,0,(int32_t)c->r[5],0); // 804CC1C0
  if (crb(c,2)) { goto L_804CC308; } // 804CC1C4
  c->r[0]=R32(c->r[5]+0x00000004u); // 804CC1C8
  cmps(c,0,(int32_t)c->r[0],0); // 804CC1CC
  if (!crb(c,2)) { goto L_804CC308; } // 804CC1D0
  cmpu(c,1,c->r[6],c->r[4]); // 804CC1D4
  if (!crb(c,5)) { goto L_804CC2C4; } // 804CC1D8
  c->r[0]=c->r[6]-c->r[4]; // 804CC1DC
  c->r[7]=c->r[4]+0x00000008u; // 804CC1E0
  cmpu(c,0,c->r[0],0x00000008u); // 804CC1E4
  if (!crb(c,1)) { goto L_804CC298; } // 804CC1E8
  if (crb(c,4)) { goto L_804CC298; } // 804CC1EC
  c->r[0]=c->r[6]+0x00000007u; // 804CC1F0
  c->r[8]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804CC1F4
  c->r[0]=c->r[0]-c->r[7]; // 804CC1F8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804CC1FC
  c->ctr=c->r[0]; // 804CC200
  cmpu(c,0,c->r[6],c->r[7]); // 804CC204
  if (!crb(c,1)) { goto L_804CC298; } // 804CC208
L_804CC20C:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC20C
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 804CC210
  c->r[7]=c->r[0]+c->r[8]; // 804CC214
  c->r[0]=R32(c->r[7]+0xFFFFFFFCu); // 804CC218
  W32(c->r[7]+0x00000000u,c->r[0]); // 804CC21C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC220
  c->r[7]=c->r[0]+c->r[8]; // 804CC224
  c->r[0]=R32(c->r[7]+0xFFFFFFF8u); // 804CC228
  W32(c->r[7]+0xFFFFFFFCu,c->r[0]); // 804CC22C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC230
  c->r[7]=c->r[0]+c->r[8]; // 804CC234
  c->r[0]=R32(c->r[7]+0xFFFFFFF4u); // 804CC238
  W32(c->r[7]+0xFFFFFFF8u,c->r[0]); // 804CC23C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC240
  c->r[7]=c->r[0]+c->r[8]; // 804CC244
  c->r[0]=R32(c->r[7]+0xFFFFFFF0u); // 804CC248
  W32(c->r[7]+0xFFFFFFF4u,c->r[0]); // 804CC24C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC250
  c->r[7]=c->r[0]+c->r[8]; // 804CC254
  c->r[0]=R32(c->r[7]+0xFFFFFFECu); // 804CC258
  W32(c->r[7]+0xFFFFFFF0u,c->r[0]); // 804CC25C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC260
  c->r[7]=c->r[0]+c->r[8]; // 804CC264
  c->r[0]=R32(c->r[7]+0xFFFFFFE8u); // 804CC268
  W32(c->r[7]+0xFFFFFFECu,c->r[0]); // 804CC26C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC270
  c->r[7]=c->r[0]+c->r[8]; // 804CC274
  c->r[0]=R32(c->r[7]+0xFFFFFFE4u); // 804CC278
  W32(c->r[7]+0xFFFFFFE8u,c->r[0]); // 804CC27C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC280
  c->r[7]=c->r[0]+c->r[8]; // 804CC284
  c->r[8]=c->r[8]+0xFFFFFFE0u; // 804CC288
  c->r[0]=R32(c->r[7]+0xFFFFFFE0u); // 804CC28C
  W32(c->r[7]+0xFFFFFFE4u,c->r[0]); // 804CC290
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804CC20C; } // 804CC294
L_804CC298:;
  c->r[0]=c->r[6]-c->r[4]; // 804CC298
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804CC29C
  c->ctr=c->r[0]; // 804CC2A0
  cmpu(c,0,c->r[6],c->r[4]); // 804CC2A4
  if (!crb(c,1)) { goto L_804CC2C4; } // 804CC2A8
L_804CC2AC:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804CC2AC
  c->r[6]=c->r[0]+c->r[7]; // 804CC2B0
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 804CC2B4
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 804CC2B8
  W32(c->r[6]+0x00000000u,c->r[0]); // 804CC2BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804CC2AC; } // 804CC2C0
L_804CC2C4:;
  c->r[6]=R32(c->r[3]+0x000000DCu); // 804CC2C4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804CC2C8
  c->r[4]=0u+0x00010000u; // 804CC2CC
  c->r[3]=c->r[5]|c->r[5]; // 804CC2D0
  W32(c->r[6]+c->r[0],c->r[5]); // 804CC2D4
  c->r[6]=c->r[31]|c->r[31]; // 804CC2D8
  c->r[4]=c->r[4]+0x00000002u; // 804CC2DC
  c->r[5]=0u+0x00000000u; // 804CC2E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC2E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC2E8
  c->ctr=c->r[12]; // 804CC2EC
  if (true) { c->lr=0x804CC2F4u; dispatch(c,c->ctr); } // 804CC2F0
  c->r[4]=R32(c->r[31]+0x000000E4u); // 804CC2F4
  c->r[3]=0u+0x00000001u; // 804CC2F8
  c->r[0]=c->r[4]+0x00000001u; // 804CC2FC
  W32(c->r[31]+0x000000E4u,c->r[0]); // 804CC300
  goto L_804CC30C; // 804CC304
L_804CC308:;
  c->r[3]=0u+0x00000000u; // 804CC308
L_804CC30C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC30C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CC310
  c->lr=c->r[0]; // 804CC314
  c->r[1]=c->r[1]+0x00000010u; // 804CC318
  return; // 804CC31C
}

// fn_804CC320
void f_804CC320(Ctx* __restrict c) {
  trace_call(0x804CC320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC320
  c->r[0]=c->lr; // 804CC324
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CC328
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CC32C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CC330
  W32(c->r[1]+0x00000014u,c->r[29]); // 804CC334
  c->r[29]=c->r[4]|c->r[4]; // 804CC338
  W32(c->r[1]+0x00000010u,c->r[28]); // 804CC33C
  c->r[28]=c->r[3]|c->r[3]; // 804CC340
  c->r[0]=R32(c->r[3]+0x000000E4u); // 804CC344
  cmpu(c,0,c->r[4],c->r[0]); // 804CC348
  if (!crb(c,0)) { goto L_804CC3B8; } // 804CC34C
  c->r[5]=R32(c->r[3]+0x000000DCu); // 804CC350
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804CC354
  c->r[3]=0u+0x00010000u; // 804CC358
  c->r[6]=c->r[28]|c->r[28]; // 804CC35C
  c->r[30]=R32(c->r[5]+c->r[31]); // 804CC360
  c->r[4]=c->r[3]+0x00000003u; // 804CC364
  c->r[5]=0u+0x00000000u; // 804CC368
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CC36C
  c->r[3]=c->r[30]|c->r[30]; // 804CC370
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC374
  c->ctr=c->r[12]; // 804CC378
  if (true) { c->lr=0x804CC380u; dispatch(c,c->ctr); } // 804CC37C
  goto L_804CC39C; // 804CC380
L_804CC384:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 804CC384
  c->r[29]=c->r[29]+0x00000001u; // 804CC388
  c->r[3]=c->r[0]+c->r[31]; // 804CC38C
  c->r[31]=c->r[31]+0x00000004u; // 804CC390
  c->r[0]=R32(c->r[3]+0x00000004u); // 804CC394
  W32(c->r[3]+0x00000000u,c->r[0]); // 804CC398
L_804CC39C:;
  c->r[3]=R32(c->r[28]+0x000000E4u); // 804CC39C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804CC3A0
  cmpu(c,0,c->r[29],c->r[0]); // 804CC3A4
  if (crb(c,0)) { IRQCHK(c); goto L_804CC384; } // 804CC3A8
  W32(c->r[28]+0x000000E4u,c->r[0]); // 804CC3AC
  c->r[3]=c->r[30]|c->r[30]; // 804CC3B0
  goto L_804CC3BC; // 804CC3B4
L_804CC3B8:;
  c->r[3]=0u+0x00000000u; // 804CC3B8
L_804CC3BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CC3BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CC3C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CC3C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804CC3C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804CC3CC
  c->lr=c->r[0]; // 804CC3D0
  c->r[1]=c->r[1]+0x00000020u; // 804CC3D4
  return; // 804CC3D8
}

// fn_804CC3DC
void f_804CC3DC(Ctx* __restrict c) {
  trace_call(0x804CC3DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC3DC
  c->r[0]=c->lr; // 804CC3E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC3E4
  c->r[0]=R32(c->r[3]+0x000000E4u); // 804CC3E8
  c->r[6]=R32(c->r[3]+0x000000DCu); // 804CC3EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CC3F0
  c->r[5]=c->r[6]|c->r[6]; // 804CC3F4
  c->r[7]=c->r[6]+c->r[0]; // 804CC3F8
  goto L_804CC404; // 804CC3FC
L_804CC400:;
  c->r[5]=c->r[5]+0x00000004u; // 804CC400
L_804CC404:;
  cmpu(c,0,c->r[5],c->r[7]); // 804CC404
  if (crb(c,2)) { goto L_804CC418; } // 804CC408
  c->r[0]=R32(c->r[5]+0x00000000u); // 804CC40C
  cmpu(c,0,c->r[0],c->r[4]); // 804CC410
  if (!crb(c,2)) { IRQCHK(c); goto L_804CC400; } // 804CC414
L_804CC418:;
  cmpu(c,0,c->r[5],c->r[7]); // 804CC418
  if (crb(c,2)) { goto L_804CC44C; } // 804CC41C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC420
  c->r[0]=c->r[5]-c->r[6]; // 804CC424
  c->r[0]=sraw(c,c->r[0],2); // 804CC428
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CC42C
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 804CC430
  c->ctr=c->r[12]; // 804CC434
  if (true) { c->lr=0x804CC43Cu; dispatch(c,c->ctr); } // 804CC438
  c->r[0]=0u-c->r[3]; // 804CC43C
  c->r[0]=c->r[0]|c->r[3]; // 804CC440
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CC444
  goto L_804CC450; // 804CC448
L_804CC44C:;
  c->r[3]=0u+0x00000000u; // 804CC44C
L_804CC450:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC450
  c->lr=c->r[0]; // 804CC454
  c->r[1]=c->r[1]+0x00000010u; // 804CC458
  return; // 804CC45C
}

// fn_804CC460
void f_804CC460(Ctx* __restrict c) {
  trace_call(0x804CC460u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC460
  c->r[0]=c->lr; // 804CC464
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CC468
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CC46C
  c->r[31]=c->r[6]|c->r[6]; // 804CC470
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CC474
  c->r[30]=c->r[5]|c->r[5]; // 804CC478
  W32(c->r[1]+0x00000014u,c->r[29]); // 804CC47C
  c->r[29]=c->r[3]|c->r[3]; // 804CC480
  c->lr=0x804CC488u; f_804CAEA4(c); // 804CC484
  c->r[0]=R32(c->r[29]+0x000000CCu); // 804CC488
  c->r[3]=0u+0x80720000u; // 804CC48C
  c->r[3]=c->r[3]+0xFFFFA410u; // 804CC490
  c->r[4]=0u+0x00000000u; // 804CC494
  c->r[0]=c->r[0]|0x60000000u; // 804CC498
  W32(c->r[29]+0x00000000u,c->r[3]); // 804CC49C
  c->r[3]=c->r[29]|c->r[29]; // 804CC4A0
  W32(c->r[29]+0x000000DCu,c->r[30]); // 804CC4A4
  W32(c->r[29]+0x000000E0u,c->r[31]); // 804CC4A8
  W32(c->r[29]+0x000000E4u,c->r[4]); // 804CC4AC
  W32(c->r[29]+0x000000CCu,c->r[0]); // 804CC4B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CC4B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CC4B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804CC4BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CC4C0
  c->lr=c->r[0]; // 804CC4C4
  c->r[1]=c->r[1]+0x00000020u; // 804CC4C8
  return; // 804CC4CC
}

// fn_804CC4D0
void f_804CC4D0(Ctx* __restrict c) {
  trace_call(0x804CC4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC4D0
  c->r[0]=c->lr; // 804CC4D4
  cmps(c,0,(int32_t)c->r[3],0); // 804CC4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC4DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CC4E0
  c->r[31]=c->r[3]|c->r[3]; // 804CC4E4
  if (crb(c,2)) { goto L_804CC57C; } // 804CC4E8
  c->r[4]=0u+0x80720000u; // 804CC4EC
  c->r[4]=c->r[4]+0xFFFFA410u; // 804CC4F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 804CC4F4
  goto L_804CC51C; // 804CC4F8
L_804CC4FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804CC4FC
  if (crb(c,2)) { goto L_804CC51C; } // 804CC500
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CC504
  c->r[3]=c->r[31]|c->r[31]; // 804CC508
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 804CC50C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CC510
  c->ctr=c->r[12]; // 804CC514
  if (true) { c->lr=0x804CC51Cu; dispatch(c,c->ctr); } // 804CC518
L_804CC51C:;
  c->r[4]=R32(c->r[31]+0x000000E4u); // 804CC51C
  cmps(c,0,(int32_t)c->r[4],0); // 804CC520
  if (!crb(c,2)) { IRQCHK(c); goto L_804CC4FC; } // 804CC524
  cmps(c,0,(int32_t)c->r[31],0); // 804CC528
  if (crb(c,2)) { goto L_804CC57C; } // 804CC52C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 804CC530
  c->r[4]=0u+0x80720000u; // 804CC534
  c->r[4]=c->r[4]+0xFFFFA450u; // 804CC538
  cmps(c,1,(int32_t)c->r[3],0); // 804CC53C
  W32(c->r[31]+0x00000000u,c->r[4]); // 804CC540
  if (crb(c,6)) { goto L_804CC570; } // 804CC544
  c->r[0]=R8(c->r[31]+0x000000D9u); // 804CC548
  cmps(c,0,(int32_t)c->r[0],1); // 804CC54C
  if (crb(c,2)) { goto L_804CC558; } // 804CC550
  goto L_804CC570; // 804CC554
L_804CC558:;
  if (crb(c,6)) { goto L_804CC570; } // 804CC558
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC55C
  c->r[4]=0u+0x00000001u; // 804CC560
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CC564
  c->ctr=c->r[12]; // 804CC568
  if (true) { c->lr=0x804CC570u; dispatch(c,c->ctr); } // 804CC56C
L_804CC570:;
  c->r[3]=c->r[31]|c->r[31]; // 804CC570
  c->r[4]=0u+0x00000000u; // 804CC574
  c->lr=0x804CC57Cu; f_804BD9F0(c); // 804CC578
L_804CC57C:;
  c->r[3]=c->r[31]|c->r[31]; // 804CC57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CC580
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC584
  c->lr=c->r[0]; // 804CC588
  c->r[1]=c->r[1]+0x00000010u; // 804CC58C
  return; // 804CC590
}

// fn_804CC594
void f_804CC594(Ctx* __restrict c) {
  trace_call(0x804CC594u);
  c->r[3]=0u+0x806B0000u; // 804CC594
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CC598
  c->r[3]=c->r[3]+0xFFFFBEB8u; // 804CC59C
  cmpu(c,0,c->r[0],c->r[3]); // 804CC5A0
  if (!crb(c,2)) { goto L_804CC5B0; } // 804CC5A4
  c->r[3]=0u+0x00000001u; // 804CC5A8
  return; // 804CC5AC
L_804CC5B0:;
  c->r[3]=0u+0x806B0000u; // 804CC5B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CC5B4
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804CC5B8
  cmpu(c,0,c->r[0],c->r[3]); // 804CC5BC
  if (!crb(c,2)) { goto L_804CC5CC; } // 804CC5C0
  c->r[3]=0u+0x00000001u; // 804CC5C4
  return; // 804CC5C8
L_804CC5CC:;
  c->r[3]=0u+0x806B0000u; // 804CC5CC
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804CC5D0
  c->r[0]=c->r[3]-c->r[0]; // 804CC5D4
  c->r[0]=cntlz(c->r[0]); // 804CC5D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CC5DC
  return; // 804CC5E0
}

// fn_804CC5E4
void f_804CC5E4(Ctx* __restrict c) {
  trace_call(0x804CC5E4u);
  c->r[3]=0u+0x806B0000u; // 804CC5E4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CC5E8
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804CC5EC
  cmpu(c,0,c->r[0],c->r[3]); // 804CC5F0
  if (!crb(c,2)) { goto L_804CC600; } // 804CC5F4
  c->r[3]=0u+0x00000001u; // 804CC5F8
  return; // 804CC5FC
L_804CC600:;
  c->r[3]=0u+0x806B0000u; // 804CC600
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CC604
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804CC608
  c->r[0]=c->r[3]-c->r[0]; // 804CC60C
  c->r[0]=cntlz(c->r[0]); // 804CC610
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CC614
  return; // 804CC618
}

// fn_804CC61C
void f_804CC61C(Ctx* __restrict c) {
  trace_call(0x804CC61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC61C
  c->r[0]=c->lr; // 804CC620
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC624
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC628
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CC62C
  c->ctr=c->r[12]; // 804CC630
  if (true) { c->lr=0x804CC638u; dispatch(c,c->ctr); } // 804CC634
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC638
  c->r[3]=c->r[3]+0x00000004u; // 804CC63C
  c->lr=c->r[0]; // 804CC640
  c->r[1]=c->r[1]+0x00000010u; // 804CC644
  return; // 804CC648
}

// fn_804CC64C
void f_804CC64C(Ctx* __restrict c) {
  trace_call(0x804CC64Cu);
  c->r[3]=0u+0x806B0000u; // 804CC64C
  c->r[3]=c->r[3]+0xFFFFBEB8u; // 804CC650
  return; // 804CC654
}

// fn_804CC658
void f_804CC658(Ctx* __restrict c) {
  trace_call(0x804CC658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC658
  c->r[0]=c->lr; // 804CC65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC660
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC664
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CC668
  c->ctr=c->r[12]; // 804CC66C
  if (true) { c->lr=0x804CC674u; dispatch(c,c->ctr); } // 804CC670
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC674
  c->r[3]=c->r[3]+0x00000004u; // 804CC678
  c->lr=c->r[0]; // 804CC67C
  c->r[1]=c->r[1]+0x00000010u; // 804CC680
  return; // 804CC684
}

// fn_804CC688
void f_804CC688(Ctx* __restrict c) {
  trace_call(0x804CC688u);
  c->r[3]=0u+0x806B0000u; // 804CC688
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804CC68C
  return; // 804CC690
}

// fn_804CC694
void f_804CC694(Ctx* __restrict c) {
  trace_call(0x804CC694u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC694
  c->r[0]=c->lr; // 804CC698
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CC69C
  c->r[11]=c->r[1]+0x00000040u; // 804CC6A0
  c->lr=0x804CC6A8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CC6A4
  c->r[10]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804CC6A8
  c->r[24]=c->r[5]|c->r[5]; // 804CC6AC
  c->r[10]=c->r[10]+0x000028A7u; // 804CC6B0
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 804CC6B4
  c->r[31]=rotl(c->r[10],0)&0xFFFFFFFCu; // 804CC6B8
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804CC6BC
  c->r[9]=c->r[31]+c->r[9]; // 804CC6C0
  cmps(c,0,(int32_t)c->r[4],0); // 804CC6C4
  c->r[9]=c->r[9]+0x00000003u; // 804CC6C8
  c->r[23]=c->r[3]|c->r[3]; // 804CC6CC
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)68); // 804CC6D0
  c->r[25]=c->r[6]|c->r[6]; // 804CC6D4
  c->r[30]=rotl(c->r[9],0)&0xFFFFFFFCu; // 804CC6D8
  c->r[28]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804CC6DC
  c->r[5]=c->r[30]+c->r[5]; // 804CC6E0
  c->r[26]=c->r[7]|c->r[7]; // 804CC6E4
  c->r[5]=c->r[5]+0x00000003u; // 804CC6E8
  c->r[27]=c->r[8]|c->r[8]; // 804CC6EC
  c->r[29]=rotl(c->r[5],0)&0xFFFFFFFCu; // 804CC6F0
  c->r[6]=0u+0x00000000u; // 804CC6F4
  c->r[5]=c->r[29]+c->r[0]; // 804CC6F8
  c->r[5]=c->r[5]+0x00000003u; // 804CC6FC
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 804CC700
  c->r[22]=rotl(c->r[5],0)&0xFFFFFFFCu; // 804CC704
  c->r[5]=c->r[22]+c->r[0]; // 804CC708
  c->r[0]=c->r[5]+0x00000003u; // 804CC70C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804CC710
  if (crb(c,2)) { goto L_804CC71C; } // 804CC714
  W32(c->r[4]+0x00000000u,c->r[0]); // 804CC718
L_804CC71C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804CC71C
  if (crb(c,2)) { goto L_804CC7B0; } // 804CC720
  c->r[3]=c->r[23]|c->r[23]; // 804CC724
  c->r[4]=c->r[0]|c->r[0]; // 804CC728
  c->lr=0x804CC730u; f_803C4D08(c); // 804CC72C
  cmps(c,0,(int32_t)c->r[3],0); // 804CC730
  if (!crb(c,2)) { goto L_804CC740; } // 804CC734
  c->r[3]=0u+0x00000000u; // 804CC738
  goto L_804CC7B4; // 804CC73C
L_804CC740:;
  c->r[5]=addc(c,c->r[3],0x0000288Cu,0); cr0(c,c->r[5]); // 804CC740
  c->r[7]=c->r[3]+c->r[31]; // 804CC744
  if (crb(c,2)) { goto L_804CC774; } // 804CC748
  c->r[6]=0u+0x80720000u; // 804CC74C
  c->r[4]=c->r[7]+c->r[28]; // 804CC750
  c->r[6]=c->r[6]+0xFFFFA488u; // 804CC754
  c->r[0]=0u+0x00000000u; // 804CC758
  W32(c->r[5]+0x00000000u,c->r[6]); // 804CC75C
  W32(c->r[5]+0x00000004u,c->r[7]); // 804CC760
  W32(c->r[5]+0x00000008u,c->r[4]); // 804CC764
  W32(c->r[5]+0x0000000Cu,c->r[25]); // 804CC768
  W32(c->r[5]+0x00000010u,c->r[0]); // 804CC76C
  W32(c->r[5]+0x00000014u,c->r[0]); // 804CC770
L_804CC774:;
  cmps(c,0,(int32_t)c->r[3],0); // 804CC774
  c->r[6]=c->r[3]|c->r[3]; // 804CC778
  c->r[10]=c->r[3]+c->r[30]; // 804CC77C
  c->r[0]=c->r[3]+c->r[29]; // 804CC780
  c->r[7]=c->r[3]+c->r[22]; // 804CC784
  if (crb(c,2)) { goto L_804CC7B0; } // 804CC788
  W32(c->r[1]+0x00000008u,c->r[0]); // 804CC78C
  c->r[4]=c->r[23]|c->r[23]; // 804CC790
  c->r[8]=c->r[26]|c->r[26]; // 804CC794
  c->r[9]=c->r[27]|c->r[27]; // 804CC798
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 804CC79C
  c->r[7]=c->r[24]|c->r[24]; // 804CC7A0
  c->r[6]=c->r[3]+0x000028A4u; // 804CC7A4
  c->lr=0x804CC7ACu; f_804CD14C(c); // 804CC7A8
  c->r[6]=c->r[3]|c->r[3]; // 804CC7AC
L_804CC7B0:;
  c->r[3]=c->r[6]|c->r[6]; // 804CC7B0
L_804CC7B4:;
  c->r[11]=c->r[1]+0x00000040u; // 804CC7B4
  c->lr=0x804CC7BCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CC7B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CC7BC
  c->lr=c->r[0]; // 804CC7C0
  c->r[1]=c->r[1]+0x00000040u; // 804CC7C4
  return; // 804CC7C8
}

// fn_804CC7CC
void f_804CC7CC(Ctx* __restrict c) {
  trace_call(0x804CC7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC7CC
  c->r[0]=c->lr; // 804CC7D0
  cmpu(c,0,c->r[4],0x00000009u); // 804CC7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC7D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CC7DC
  c->r[31]=c->r[3]|c->r[3]; // 804CC7E0
  if (!crb(c,0)) { goto L_804CC808; } // 804CC7E4
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 804CC7E8
  c->r[8]=0u+0x00000001u; // 804CC7EC
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CC7F0
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 804CC7F4
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 804CC7F8
  if (crb(c,2)) { goto L_804CC808; } // 804CC7FC
  c->r[0]=0u+0x00000001u; // 804CC800
  goto L_804CC80C; // 804CC804
L_804CC808:;
  c->r[0]=0u+0x00000000u; // 804CC808
L_804CC80C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804CC80C
  if (!crb(c,2)) { goto L_804CC864; } // 804CC810
  c->r[7]=0u+0x00010000u; // 804CC814
  c->r[0]=c->r[7]+0x00000001u; // 804CC818
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CC81C
  if (crb(c,2)) { goto L_804CC828; } // 804CC820
  goto L_804CC85C; // 804CC824
L_804CC828:;
  c->r[3]=R32(c->r[3]+0x00002888u); // 804CC828
  cmpu(c,0,c->r[3],c->r[6]); // 804CC82C
  if (!crb(c,2)) { goto L_804CC85C; } // 804CC830
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CC834
  c->r[6]=c->r[31]|c->r[31]; // 804CC838
  c->r[4]=c->r[7]+0x00000003u; // 804CC83C
  c->r[5]=0u+0x00000000u; // 804CC840
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC844
  c->ctr=c->r[12]; // 804CC848
  if (true) { c->lr=0x804CC850u; dispatch(c,c->ctr); } // 804CC84C
  c->r[0]=0u+0x00000000u; // 804CC850
  W32(c->r[31]+0x00002888u,c->r[0]); // 804CC854
  goto L_804CC864; // 804CC858
L_804CC85C:;
  c->r[3]=c->r[31]|c->r[31]; // 804CC85C
  c->lr=0x804CC864u; f_804CBD38(c); // 804CC860
L_804CC864:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CC868
  c->lr=c->r[0]; // 804CC86C
  c->r[1]=c->r[1]+0x00000010u; // 804CC870
  return; // 804CC874
}

// fn_804CC878
void f_804CC878(Ctx* __restrict c) {
  trace_call(0x804CC878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC878
  c->r[0]=c->lr; // 804CC87C
  cmps(c,0,(int32_t)c->r[4],0); // 804CC880
  c->r[5]=c->r[3]|c->r[3]; // 804CC884
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC888
  if (crb(c,0)) { goto L_804CC8B4; } // 804CC88C
  cmps(c,0,(int32_t)c->r[4],32); // 804CC890
  if (!crb(c,0)) { goto L_804CC8B4; } // 804CC894
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)268); // 804CC898
  c->r[3]=c->r[1]+0x0000000Cu; // 804CC89C
  c->r[4]=c->r[5]+c->r[0]; // 804CC8A0
  c->r[4]=c->r[4]+0x000000F8u; // 804CC8A4
  c->lr=0x804CC8ACu; f_804C7918(c); // 804CC8A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 804CC8AC
  goto L_804CC8C4; // 804CC8B0
L_804CC8B4:;
  c->r[3]=c->r[1]+0x00000008u; // 804CC8B4
  c->r[4]=0u+0x00000000u; // 804CC8B8
  c->lr=0x804CC8C0u; f_804C7918(c); // 804CC8BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804CC8C0
L_804CC8C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC8C4
  c->lr=c->r[0]; // 804CC8C8
  c->r[1]=c->r[1]+0x00000010u; // 804CC8CC
  return; // 804CC8D0
}

// GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
void f_804CC8D4(Ctx* __restrict c) {
  trace_call(0x804CC8D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC8D4
  c->r[0]=c->lr; // 804CC8D8
  c->r[4]=c->r[3]|c->r[3]; // 804CC8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC8E0
  c->r[3]=c->r[1]+0x00000008u; // 804CC8E4
  c->r[0]=R8(c->r[4]+0x000000F4u); // 804CC8E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 804CC8EC
  c->r[4]=c->r[4]+c->r[0]; // 804CC8F0
  c->r[4]=c->r[4]+0x000000F8u; // 804CC8F4
  c->lr=0x804CC8FCu; f_804C7918(c); // 804CC8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC8FC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804CC900
  c->lr=c->r[0]; // 804CC904
  c->r[1]=c->r[1]+0x00000010u; // 804CC908
  return; // 804CC90C
}

// fn_804CC910
void f_804CC910(Ctx* __restrict c) {
  trace_call(0x804CC910u);
  W8(c->r[3]+0x000000F4u,c->r[4]); // 804CC910
  return; // 804CC914
}

// fn_804CC918
void f_804CC918(Ctx* __restrict c) {
  trace_call(0x804CC918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC918
  c->r[0]=c->lr; // 804CC91C
  cmps(c,0,(int32_t)c->r[4],0); // 804CC920
  c->r[5]=c->r[3]|c->r[3]; // 804CC924
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC928
  if (crb(c,0)) { goto L_804CC954; } // 804CC92C
  cmps(c,0,(int32_t)c->r[4],32); // 804CC930
  if (!crb(c,0)) { goto L_804CC954; } // 804CC934
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 804CC938
  c->r[3]=c->r[1]+0x0000000Cu; // 804CC93C
  c->r[4]=c->r[5]+c->r[0]; // 804CC940
  c->r[4]=c->r[4]+0x00002278u; // 804CC944
  c->lr=0x804CC94Cu; f_804D317C(c); // 804CC948
  c->r[3]=R32(c->r[3]+0x00000000u); // 804CC94C
  goto L_804CC964; // 804CC950
L_804CC954:;
  c->r[3]=c->r[1]+0x00000008u; // 804CC954
  c->r[4]=0u+0x00000000u; // 804CC958
  c->lr=0x804CC960u; f_804D317C(c); // 804CC95C
  c->r[3]=R32(c->r[3]+0x00000000u); // 804CC960
L_804CC964:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC964
  c->lr=c->r[0]; // 804CC968
  c->r[1]=c->r[1]+0x00000010u; // 804CC96C
  return; // 804CC970
}

