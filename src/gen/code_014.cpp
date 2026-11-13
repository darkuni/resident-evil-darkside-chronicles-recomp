#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EB08C
void f_800EB08C(Ctx* __restrict c) {
  trace_call(0x800EB08Cu);
  c->r[3]=0u+0x00000024u; // 800EB08C
  return; // 800EB090
}

// fn_800EB094
void f_800EB094(Ctx* __restrict c) {
  trace_call(0x800EB094u);
  c->r[3]=0u+0x800F0000u; // 800EB094
  c->r[3]=c->r[3]+0xFFFFB0A0u; // 800EB098
  return; // 800EB09C
}

// fn_800EB0A0
void f_800EB0A0(Ctx* __restrict c) {
  trace_call(0x800EB0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB0A0
  c->r[0]=c->lr; // 800EB0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB0A8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800EB0AC
  c->r[0]=c->r[3]+0xADB40000u; // 800EB0B0
  cmpu(c,0,c->r[0],0x00004400u); // 800EB0B4
  if (crb(c,2)) { goto L_800EB0C4; } // 800EB0B8
  c->r[3]=0u+0x00000001u; // 800EB0BC
  goto L_800EB13C; // 800EB0C0
L_800EB0C4:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800EB0C4
  cmps(c,0,(int32_t)c->r[0],0); // 800EB0C8
  if (crb(c,2)) { goto L_800EB0D8; } // 800EB0CC
  c->r[3]=0u+0x00000001u; // 800EB0D0
  goto L_800EB13C; // 800EB0D4
L_800EB0D8:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EB0D8
  c->r[0]=R32(c->r[4]+c->r[0]); // 800EB0DC
  cmps(c,0,(int32_t)c->r[0],0); // 800EB0E0
  if (crb(c,2)) { goto L_800EB0F4; } // 800EB0E4
  cmps(c,0,(int32_t)c->r[0],1); // 800EB0E8
  if (crb(c,2)) { goto L_800EB118; } // 800EB0EC
  goto L_800EB138; // 800EB0F0
L_800EB0F4:;
  c->r[0]=0u+0x00000000u; // 800EB0F4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800EB0F8
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB0FC
  c->lr=0x800EB104u; f_80046EFC(c); // 800EB100
  c->r[4]=0u+0x00000020u; // 800EB104
  c->r[5]=0u+0x00000000u; // 800EB108
  c->r[6]=0u+0xFFFFFFFFu; // 800EB10C
  c->lr=0x800EB114u; f_800B1DE0(c); // 800EB110
  goto L_800EB138; // 800EB114
L_800EB118:;
  c->r[0]=0u+0x00000000u; // 800EB118
  W8(c->r[1]+0x00000008u,c->r[0]); // 800EB11C
  c->r[3]=c->r[1]+0x00000008u; // 800EB120
  c->lr=0x800EB128u; f_80046EFC(c); // 800EB124
  c->r[4]=0u+0x00000020u; // 800EB128
  c->r[5]=0u+0x00000001u; // 800EB12C
  c->r[6]=0u+0xFFFFFFFFu; // 800EB130
  c->lr=0x800EB138u; f_800B1DE0(c); // 800EB134
L_800EB138:;
  c->r[3]=0u+0x00000001u; // 800EB138
L_800EB13C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB13C
  c->lr=c->r[0]; // 800EB140
  c->r[1]=c->r[1]+0x00000010u; // 800EB144
  return; // 800EB148
}

// fn_800EB14C
void f_800EB14C(Ctx* __restrict c) {
  trace_call(0x800EB14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB14C
  c->r[0]=c->lr; // 800EB150
  c->r[8]=0u+0x806E0000u; // 800EB154
  c->r[4]=0u+0x80330000u; // 800EB158
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB15C
  c->r[8]=c->r[8]+0xFFFF80A8u; // 800EB160
  c->r[5]=0u+0x80330000u; // 800EB164
  c->r[6]=0u+0x00000002u; // 800EB168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB16C
  c->r[31]=0u+0x00000000u; // 800EB170
  c->r[0]=c->r[8]+0x00000028u; // 800EB174
  c->r[9]=0u+0xFFFFFFFFu; // 800EB178
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB17C
  c->r[30]=c->r[3]|c->r[3]; // 800EB180
  c->r[4]=c->r[4]+0x00007684u; // 800EB184
  c->r[5]=c->r[5]+0x000076ECu; // 800EB188
  W32(c->r[3]+0x00000004u,c->r[6]); // 800EB18C
  c->r[6]=0u+0x0000003Cu; // 800EB190
  c->r[7]=0u+0x00000002u; // 800EB194
  W32(c->r[3]+0x00000000u,c->r[31]); // 800EB198
  W32(c->r[3]+0x00000010u,c->r[9]); // 800EB19C
  W32(c->r[3]+0x00000014u,c->r[31]); // 800EB1A0
  W32(c->r[3]+0x00000018u,c->r[31]); // 800EB1A4
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800EB1A8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800EB1AC
  W32(c->r[3]+0x00000020u,c->r[31]); // 800EB1B0
  W32(c->r[3]+0x00000008u,c->r[31]); // 800EB1B4
  W32(c->r[3]+0x000000A4u,c->r[8]); // 800EB1B8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800EB1BC
  c->r[3]=c->r[3]+0x000000ACu; // 800EB1C0
  c->lr=0x800EB1C8u; f_803A9830(c); // 800EB1C4
  {uint32_t ea=c->r[2]+0xFFFFA698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB1C8
  {uint32_t ea=c->r[30]+0x00000124u; WF32(ea,c->f[0]);} // 800EB1CC
  W8(c->r[30]+0x00000128u,c->r[31]); // 800EB1D0
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800EB1D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EB1D8
  if (!crb(c,2)) { goto L_800EB200; } // 800EB1DC
  c->r[31]=0u+0x80730000u; // 800EB1E0
  c->r[3]=c->r[31]+0x000067B8u; // 800EB1E4
  c->lr=0x800EB1ECu; f_8029EF58(c); // 800EB1E8
  c->r[3]=0u+0x806D0000u; // 800EB1EC
  c->r[0]=0u+0x00000001u; // 800EB1F0
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800EB1F4
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800EB1F8
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800EB1FC
L_800EB200:;
  c->r[3]=0u+0x80730000u; // 800EB200
  c->r[8]=0u+0x80690000u; // 800EB204
  c->r[4]=c->r[30]|c->r[30]; // 800EB208
  c->r[5]=0u+0x00000000u; // 800EB20C
  c->r[3]=c->r[3]+0x000067B8u; // 800EB210
  c->r[8]=c->r[8]+0xFFFFEC10u; // 800EB214
  c->r[6]=0u+0x0000003Fu; // 800EB218
  c->r[7]=0u+0x0000001Fu; // 800EB21C
  c->lr=0x800EB224u; f_8029F4EC(c); // 800EB220
  c->r[3]=c->r[30]|c->r[30]; // 800EB224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB228
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB230
  c->lr=c->r[0]; // 800EB234
  c->r[1]=c->r[1]+0x00000010u; // 800EB238
  return; // 800EB23C
}

// fn_800EB240
void f_800EB240(Ctx* __restrict c) {
  trace_call(0x800EB240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB240
  c->r[0]=c->lr; // 800EB244
  cmps(c,0,(int32_t)c->r[3],0); // 800EB248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB250
  c->r[31]=c->r[3]|c->r[3]; // 800EB254
  if (crb(c,2)) { goto L_800EB274; } // 800EB258
  c->r[4]=0u+0x80330000u; // 800EB25C
  c->r[5]=0u+0x0000003Cu; // 800EB260
  c->r[4]=c->r[4]+0x000076ECu; // 800EB264
  c->r[6]=0u+0x00000002u; // 800EB268
  c->r[3]=c->r[3]+0x000000ACu; // 800EB26C
  c->lr=0x800EB274u; f_803A9928(c); // 800EB270
L_800EB274:;
  c->r[3]=c->r[31]|c->r[31]; // 800EB274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB278
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB27C
  c->lr=c->r[0]; // 800EB280
  c->r[1]=c->r[1]+0x00000010u; // 800EB284
  return; // 800EB288
}

// fn_800EB28C
void f_800EB28C(Ctx* __restrict c) {
  trace_call(0x800EB28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB28C
  c->r[0]=c->lr; // 800EB290
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EB294
  c->r[11]=c->r[1]+0x00000040u; // 800EB298
  c->lr=0x800EB2A0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EB29C
  {uint32_t ea=c->r[2]+0xFFFFA698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB2A0
  c->r[24]=0u+0x00000000u; // 800EB2A4
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 800EB2A8
  c->r[25]=0u+0x80730000u; // 800EB2AC
  c->r[4]=c->r[25]+0x00002408u; // 800EB2B0
  c->r[26]=0u+0x806D0000u; // 800EB2B4
  c->r[31]=0u+0x80690000u; // 800EB2B8
  W8(c->r[3]+0x00000128u,c->r[24]); // 800EB2BC
  c->r[0]=0u+0xFFFFFFFFu; // 800EB2C0
  c->r[21]=c->r[3]|c->r[3]; // 800EB2C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EB2C8
  c->r[23]=c->r[4]+0x00000034u; // 800EB2CC
  c->r[26]=c->r[26]+0xFFFFC080u; // 800EB2D0
  c->r[31]=c->r[31]+0xFFFFEC10u; // 800EB2D4
  c->r[22]=0u+0x00000000u; // 800EB2D8
  c->r[27]=0u+0x80040000u; // 800EB2DC
  c->r[28]=0u+0x80750000u; // 800EB2E0
  c->r[29]=0u+0x00000001u; // 800EB2E4
  c->r[30]=0u+0x80740000u; // 800EB2E8
L_800EB2EC:;
  c->r[0]=R8(c->r[13]+0xFFFFBB52u); // 800EB2EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EB2F0
  if (!crb(c,2)) { goto L_800EB318; } // 800EB2F4
  c->r[3]=c->r[25]+0x00002408u; // 800EB2F8
  c->lr=0x800EB300u; f_802D7C5C(c); // 800EB2FC
  W32(c->r[25]+0x00002408u,c->r[26]); // 800EB300
  c->r[3]=c->r[25]+0x00002408u; // 800EB304
  c->r[4]=c->r[27]+0x00005C40u; // 800EB308
  c->r[5]=c->r[28]+0x00003AB8u; // 800EB30C
  c->lr=0x800EB314u; f_803A92B8(c); // 800EB310
  W8(c->r[13]+0xFFFFBB52u,c->r[29]); // 800EB314
L_800EB318:;
  c->r[3]=c->r[30]+0x00004FD0u; // 800EB318
  c->r[4]=c->r[31]+0x00000017u; // 800EB31C
  c->r[5]=c->r[31]+0x00000024u; // 800EB320
  c->r[6]=0u+0x00000000u; // 800EB324
  c->lr=0x800EB32Cu; f_8005A7B0(c); // 800EB328
  c->r[6]=c->r[21]+c->r[24]; // 800EB32C
  c->r[4]=c->r[3]|c->r[3]; // 800EB330
  c->r[3]=c->r[6]+0x000000ACu; // 800EB334
  c->r[5]=c->r[23]|c->r[23]; // 800EB338
  c->r[9]=c->r[1]+0x00000008u; // 800EB33C
  c->r[6]=0u+0x00000005u; // 800EB340
  c->r[7]=0u+0x00000000u; // 800EB344
  c->r[8]=0u+0x00000001u; // 800EB348
  c->r[10]=0u+0x00000004u; // 800EB34C
  c->lr=0x800EB354u; f_80337820(c); // 800EB350
  c->r[22]=c->r[22]+0x00000001u; // 800EB354
  c->r[24]=c->r[24]+0x0000003Cu; // 800EB358
  cmps(c,0,(int32_t)c->r[22],2); // 800EB35C
  if (crb(c,0)) { IRQCHK(c); goto L_800EB2EC; } // 800EB360
  c->r[11]=c->r[1]+0x00000040u; // 800EB364
  c->lr=0x800EB36Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EB368
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EB36C
  c->lr=c->r[0]; // 800EB370
  c->r[1]=c->r[1]+0x00000040u; // 800EB374
  return; // 800EB378
}

// fn_800EB37C
void f_800EB37C(Ctx* __restrict c) {
  trace_call(0x800EB37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB37C
  c->r[0]=c->lr; // 800EB380
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB384
  c->r[11]=c->r[1]+0x00000020u; // 800EB388
  c->lr=0x800EB390u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EB38C
  {uint32_t ea=c->r[2]+0xFFFFA698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB390
  c->r[31]=0u+0x00000000u; // 800EB394
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 800EB398
  c->r[29]=c->r[3]|c->r[3]; // 800EB39C
  W8(c->r[3]+0x00000128u,c->r[31]); // 800EB3A0
  c->lr=0x800EB3A8u; f_800EB8F4(c); // 800EB3A4
  c->r[30]=0u+0x00000000u; // 800EB3A8
L_800EB3AC:;
  c->r[3]=c->r[29]+c->r[31]; // 800EB3AC
  c->r[3]=c->r[3]+0x000000ACu; // 800EB3B0
  c->lr=0x800EB3B8u; f_80337C14(c); // 800EB3B4
  c->r[30]=c->r[30]+0x00000001u; // 800EB3B8
  c->r[31]=c->r[31]+0x0000003Cu; // 800EB3BC
  cmps(c,0,(int32_t)c->r[30],2); // 800EB3C0
  if (crb(c,0)) { IRQCHK(c); goto L_800EB3AC; } // 800EB3C4
  c->r[11]=c->r[1]+0x00000020u; // 800EB3C8
  c->lr=0x800EB3D0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EB3CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB3D0
  c->lr=c->r[0]; // 800EB3D4
  c->r[1]=c->r[1]+0x00000020u; // 800EB3D8
  return; // 800EB3DC
}

// fn_800EB3E0
void f_800EB3E0(Ctx* __restrict c) {
  trace_call(0x800EB3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB3E0
  c->r[0]=c->lr; // 800EB3E4
  W32(c->r[1]+0x00000144u,c->r[0]); // 800EB3E8
  c->r[11]=c->r[1]+0x00000130u; // 800EB3EC
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800EB3F0
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800EB3F4
  c->lr=0x800EB3FCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EB3F8
  c->r[29]=0u+0x00000000u; // 800EB3FC
  W8(c->r[1]+0x00000024u,c->r[29]); // 800EB400
  c->r[25]=c->r[3]|c->r[3]; // 800EB404
  c->r[3]=c->r[1]+0x00000024u; // 800EB408
  c->lr=0x800EB410u; f_80047A80(c); // 800EB40C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB410
  c->lr=0x800EB418u; f_804CC8D4(c); // 800EB414
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800EB418
  c->r[3]=c->r[1]+0x0000003Cu; // 800EB41C
  c->r[4]=c->r[1]+0x000000B0u; // 800EB420
  c->lr=0x800EB428u; f_804C7FD8(c); // 800EB424
  {uint32_t ea=c->r[2]+0xFFFFA69Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB428
  c->r[0]=0u+0x00000002u; // 800EB42C
  W32(c->r[1]+0x000000E0u,c->r[0]); // 800EB430
  c->r[31]=c->r[29]|c->r[29]; // 800EB434
  {uint32_t ea=c->r[2]+0xFFFFA6A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EB438
  c->r[28]=c->r[1]+0x00000094u; // 800EB43C
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 800EB440
  c->r[26]=0u+0x00000000u; // 800EB444
  c->r[30]=0u+0x806A0000u; // 800EB448
L_800EB44C:;
  W8(c->r[1]+0x00000020u,c->r[29]); // 800EB44C
  c->r[3]=c->r[1]+0x00000020u; // 800EB450
  c->lr=0x800EB458u; f_80047A80(c); // 800EB454
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB458
  c->lr=0x800EB460u; f_804CC8D4(c); // 800EB45C
  W32(c->r[1]+0x00000038u,c->r[3]); // 800EB460
  c->r[3]=c->r[1]+0x00000038u; // 800EB464
  c->r[4]=c->r[1]+0x000000A0u; // 800EB468
  c->lr=0x800EB470u; f_804C7AC0(c); // 800EB46C
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800EB470
  c->r[27]=addc(c,~c->r[26],0x0000001Du,1); // 800EB474
  c->r[3]=c->r[1]+0x0000001Cu; // 800EB478
  c->lr=0x800EB480u; f_80046EFC(c); // 800EB47C
  c->r[4]=c->r[26]|c->r[26]; // 800EB480
  c->lr=0x800EB488u; f_80046DC8(c); // 800EB484
  c->lr=0x800EB48Cu; f_800AC498(c); // 800EB488
  cmps(c,0,(int32_t)c->r[3],1); // 800EB48C
  if (!crb(c,2)) { goto L_800EB554; } // 800EB490
  c->r[0]=R8(c->r[25]+0x00000128u); // 800EB494
  cmps(c,0,(int32_t)c->r[0],0); // 800EB498
  if (crb(c,2)) { goto L_800EB554; } // 800EB49C
  W8(c->r[1]+0x00000018u,c->r[29]); // 800EB4A0
  c->r[3]=c->r[1]+0x00000018u; // 800EB4A4
  c->lr=0x800EB4ACu; f_80046EFC(c); // 800EB4A8
  c->r[4]=c->r[26]|c->r[26]; // 800EB4AC
  c->r[6]=c->r[1]+0x000000F0u; // 800EB4B0
  c->r[5]=0u+0x00000000u; // 800EB4B4
  c->r[7]=0u+0x00000000u; // 800EB4B8
  c->r[8]=0u+0x00000000u; // 800EB4BC
  c->r[9]=0u+0x00000000u; // 800EB4C0
  c->lr=0x800EB4C8u; f_800B2400(c); // 800EB4C4
  c->r[3]=c->r[1]+0x0000007Cu; // 800EB4C8
  c->r[4]=c->r[1]+0x000000F0u; // 800EB4CC
  c->lr=0x800EB4D4u; f_800E710C(c); // 800EB4D0
  c->r[3]=c->r[1]+0x00000088u; // 800EB4D4
  c->r[4]=c->r[1]+0x000000A0u; // 800EB4D8
  c->r[5]=c->r[1]+0x0000007Cu; // 800EB4DC
  c->lr=0x800EB4E4u; f_800772A0(c); // 800EB4E0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB4E4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB4E8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB4EC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 800EB4F0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800EB4F4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 800EB4F8
  {uint32_t ea=c->r[28]+0x00000004u; psq_load(c,1,ea,0,0);} // 800EB4FC
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800EB500
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800EB504
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800EB508
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800EB50C
  fcmp(c,0,c->f[1],c->f[31]); // 800EB510
  c->r[0]=c->cr; // 800EB514
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800EB518
  if (!crb(c,2)) { goto L_800EB530; } // 800EB51C
  c->r[3]=c->r[28]|c->r[28]; // 800EB520
  c->r[4]=c->r[28]|c->r[28]; // 800EB524
  c->r[5]=c->r[30]+0x00000AA8u; // 800EB528
  c->lr=0x800EB530u; f_8030E0BC(c); // 800EB52C
L_800EB530:;
  {uint32_t ea=c->r[2]+0xFFFFA6A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB530
  c->r[3]=c->r[1]+0x00000070u; // 800EB534
  c->r[4]=c->r[1]+0x00000094u; // 800EB538
  c->lr=0x800EB540u; f_8005ED34(c); // 800EB53C
  c->r[3]=c->r[1]+0x000000A0u; // 800EB540
  c->r[5]=c->r[1]+0x00000070u; // 800EB544
  c->r[4]=c->r[3]|c->r[3]; // 800EB548
  c->lr=0x800EB550u; f_8005ED10(c); // 800EB54C
  goto L_800EB5EC; // 800EB550
L_800EB554:;
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB554
  c->r[3]=c->r[1]+0x00000064u; // 800EB558
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB55C
  c->r[4]=c->r[1]+0x00000094u; // 800EB560
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB564
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800EB568
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB56C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 800EB570
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800EB574
  c->lr=0x800EB57Cu; f_8005ED34(c); // 800EB578
  c->r[3]=c->r[1]+0x000000A0u; // 800EB57C
  c->r[5]=c->r[1]+0x00000064u; // 800EB580
  c->r[4]=c->r[3]|c->r[3]; // 800EB584
  c->lr=0x800EB58Cu; f_8005ED10(c); // 800EB588
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB58C
  c->r[3]=c->r[1]+0x00000058u; // 800EB590
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB594
  c->r[4]=c->r[1]+0x00000094u; // 800EB598
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB59C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800EB5A0
  {uint32_t ea=c->r[2]+0xFFFFA6A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB5A4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 800EB5A8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800EB5AC
  c->lr=0x800EB5B4u; f_8005ED34(c); // 800EB5B0
  c->r[3]=c->r[1]+0x000000A0u; // 800EB5B4
  c->r[5]=c->r[1]+0x00000058u; // 800EB5B8
  c->r[4]=c->r[3]|c->r[3]; // 800EB5BC
  c->lr=0x800EB5C4u; f_800772A0(c); // 800EB5C0
  c->r[3]=c->r[1]+0x0000004Cu; // 800EB5C4
  c->r[4]=c->r[1]+0x000000A0u; // 800EB5C8
  c->r[5]=c->r[1]+0x00000094u; // 800EB5CC
  c->lr=0x800EB5D4u; f_8005ED10(c); // 800EB5D0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB5D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB5D8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB5DC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[2]);} // 800EB5E0
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 800EB5E4
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 800EB5E8
L_800EB5EC:;
  W8(c->r[1]+0x00000014u,c->r[29]); // 800EB5EC
  c->r[3]=c->r[1]+0x00000014u; // 800EB5F0
  c->lr=0x800EB5F8u; f_80047A80(c); // 800EB5F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB5F8
  c->r[4]=c->r[27]|c->r[27]; // 800EB5FC
  c->lr=0x800EB604u; f_804CC878(c); // 800EB600
  W32(c->r[1]+0x00000034u,c->r[3]); // 800EB604
  c->r[3]=c->r[1]+0x00000034u; // 800EB608
  c->r[4]=c->r[1]+0x000000A0u; // 800EB60C
  c->lr=0x800EB614u; f_804C7A8C(c); // 800EB610
  W8(c->r[1]+0x00000010u,c->r[29]); // 800EB614
  c->r[3]=c->r[1]+0x00000010u; // 800EB618
  c->lr=0x800EB620u; f_80047A80(c); // 800EB61C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB620
  c->r[4]=c->r[27]|c->r[27]; // 800EB624
  c->lr=0x800EB62Cu; f_804CC878(c); // 800EB628
  W32(c->r[1]+0x00000030u,c->r[3]); // 800EB62C
  c->r[3]=c->r[1]+0x00000030u; // 800EB630
  c->r[4]=c->r[1]+0x000000E0u; // 800EB634
  c->lr=0x800EB63Cu; f_804C7AF0(c); // 800EB638
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 800EB63C
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB640
  c->lr=0x800EB648u; f_80047A80(c); // 800EB644
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB648
  c->r[4]=c->r[27]|c->r[27]; // 800EB64C
  c->lr=0x800EB654u; f_804CC878(c); // 800EB650
  {uint32_t ea=c->r[2]+0xFFFFA6ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB654
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800EB658
  c->r[3]=c->r[1]+0x0000002Cu; // 800EB65C
  c->f[3]=c->f[2]; // 800EB660
  {uint32_t ea=c->r[2]+0xFFFFA6B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EB664
  {uint32_t ea=c->r[25]+0x00000124u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB668
  c->lr=0x800EB670u; f_804C7DC4(c); // 800EB66C
  W8(c->r[1]+0x00000008u,c->r[29]); // 800EB670
  c->r[3]=c->r[1]+0x00000008u; // 800EB674
  c->lr=0x800EB67Cu; f_80047A80(c); // 800EB678
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EB67C
  c->r[4]=c->r[27]|c->r[27]; // 800EB680
  c->lr=0x800EB688u; f_804CC878(c); // 800EB684
  {uint32_t ea=c->r[2]+0xFFFFA69Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB688
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EB68C
  c->f[2]=c->f[1]; // 800EB690
  W32(c->r[1]+0x00000028u,c->r[3]); // 800EB694
  c->f[4]=c->f[3]; // 800EB698
  c->r[3]=c->r[1]+0x00000028u; // 800EB69C
  c->lr=0x800EB6A4u; f_804C7EB4(c); // 800EB6A0
  c->r[3]=c->r[25]+c->r[31]; // 800EB6A4
  c->r[0]=R32(c->r[3]+0x000000B4u); // 800EB6A8
  cmps(c,0,(int32_t)c->r[0],0); // 800EB6AC
  if (crb(c,2)) { goto L_800EB6E4; } // 800EB6B0
  c->r[27]=c->r[3]+0x000000ACu; // 800EB6B4
  c->r[5]=c->r[1]+0x000000A0u; // 800EB6B8
  c->r[3]=c->r[27]|c->r[27]; // 800EB6BC
  c->r[4]=0u+0x00000000u; // 800EB6C0
  c->lr=0x800EB6C8u; f_80338944(c); // 800EB6C4
  c->r[3]=c->r[1]+0x00000040u; // 800EB6C8
  c->r[4]=c->r[1]+0x000000F0u; // 800EB6CC
  c->lr=0x800EB6D4u; f_800E710C(c); // 800EB6D0
  c->r[5]=c->r[3]|c->r[3]; // 800EB6D4
  c->r[3]=c->r[27]|c->r[27]; // 800EB6D8
  c->r[4]=0u+0x00000000u; // 800EB6DC
  c->lr=0x800EB6E4u; f_80338970(c); // 800EB6E0
L_800EB6E4:;
  c->r[26]=c->r[26]+0x00000001u; // 800EB6E4
  c->r[31]=c->r[31]+0x0000003Cu; // 800EB6E8
  cmps(c,0,(int32_t)c->r[26],2); // 800EB6EC
  if (crb(c,0)) { IRQCHK(c); goto L_800EB44C; } // 800EB6F0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 800EB6F4
  c->r[3]=0u+0x00000001u; // 800EB6F8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800EB6FC
  c->r[11]=c->r[1]+0x00000130u; // 800EB700
  c->lr=0x800EB708u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EB704
  c->r[0]=R32(c->r[1]+0x00000144u); // 800EB708
  c->lr=c->r[0]; // 800EB70C
  c->r[1]=c->r[1]+0x00000140u; // 800EB710
  return; // 800EB714
}

// fn_800EB718
void f_800EB718(Ctx* __restrict c) {
  trace_call(0x800EB718u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB718
  c->r[0]=c->lr; // 800EB71C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800EB720
  c->r[11]=c->r[1]+0x00000040u; // 800EB724
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800EB728
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800EB72C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800EB730
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800EB734
  c->lr=0x800EB73Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EB738
  c->r[0]=R8(c->r[3]+0x00000128u); // 800EB73C
  c->r[27]=c->r[3]|c->r[3]; // 800EB740
  cmps(c,0,(int32_t)c->r[0],0); // 800EB744
  if (!crb(c,2)) { goto L_800EB834; } // 800EB748
  c->r[28]=0u+0x00000000u; // 800EB74C
  {uint32_t ea=c->r[2]+0xFFFFA69Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800EB750
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EB754
  c->r[30]=c->r[28]|c->r[28]; // 800EB758
  c->r[31]=0u+0x00000000u; // 800EB75C
L_800EB760:;
  W8(c->r[1]+0x00000008u,c->r[30]); // 800EB760
  c->r[3]=c->r[1]+0x00000008u; // 800EB764
  c->lr=0x800EB76Cu; f_80046EFC(c); // 800EB768
  c->r[4]=c->r[28]|c->r[28]; // 800EB76C
  c->lr=0x800EB774u; f_80046DC8(c); // 800EB770
  c->lr=0x800EB778u; f_800AC498(c); // 800EB774
  cmps(c,0,(int32_t)c->r[3],1); // 800EB778
  if (!crb(c,2)) { goto L_800EB824; } // 800EB77C
  c->r[3]=c->r[27]+c->r[31]; // 800EB780
  c->r[0]=R32(c->r[3]+0x000000B4u); // 800EB784
  cmps(c,0,(int32_t)c->r[0],0); // 800EB788
  if (crb(c,2)) { goto L_800EB824; } // 800EB78C
  c->r[29]=c->r[3]+0x000000ACu; // 800EB790
  c->r[4]=0u+0x00000001u; // 800EB794
  c->r[3]=c->r[29]|c->r[29]; // 800EB798
  c->lr=0x800EB7A0u; f_80338678(c); // 800EB79C
  c->r[3]=c->r[29]|c->r[29]; // 800EB7A0
  c->r[4]=0u+0x00000000u; // 800EB7A4
  c->lr=0x800EB7ACu; f_803387FC(c); // 800EB7A8
  c->r[4]=c->r[1]+0x00000014u; // 800EB7AC
  c->r[5]=c->r[1]+0x00000010u; // 800EB7B0
  c->r[6]=c->r[1]+0x0000000Cu; // 800EB7B4
  c->lr=0x800EB7BCu; f_804D37A0(c); // 800EB7B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB7BC
  fcmp(c,0,c->f[30],c->f[1]); // 800EB7C0
  if (crb(c,2)) { goto L_800EB808; } // 800EB7C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB7C8
  c->r[3]=c->r[1]+0x00000018u; // 800EB7CC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EB7D0
  c->lr=0x800EB7D8u; f_804E368C(c); // 800EB7D4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB7D8
  fcmp(c,0,c->f[1],c->f[30]); // 800EB7DC
  if (!crb(c,1)) { goto L_800EB7F4; } // 800EB7E0
  c->lr=0x800EB7E8u; f_800EB864(c); // 800EB7E4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800EB7E8
  {uint32_t ea=c->r[27]+0x00000124u; WF32(ea,c->f[0]);} // 800EB7EC
  goto L_800EB824; // 800EB7F0
L_800EB7F4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB7F4
  c->lr=0x800EB7FCu; f_800EB864(c); // 800EB7F8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800EB7FC
  {uint32_t ea=c->r[27]+0x00000124u; WF32(ea,c->f[0]);} // 800EB800
  goto L_800EB824; // 800EB804
L_800EB808:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB808
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB80C
  c->f[1]=-c->f[1]; // 800EB810
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800EB814
  c->lr=0x800EB81Cu; f_800EB864(c); // 800EB818
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800EB81C
  {uint32_t ea=c->r[27]+0x00000124u; WF32(ea,c->f[0]);} // 800EB820
L_800EB824:;
  c->r[28]=c->r[28]+0x00000001u; // 800EB824
  c->r[31]=c->r[31]+0x0000003Cu; // 800EB828
  cmps(c,0,(int32_t)c->r[28],2); // 800EB82C
  if (crb(c,0)) { IRQCHK(c); goto L_800EB760; } // 800EB830
L_800EB834:;
  c->r[0]=0u+0x00000001u; // 800EB834
  W8(c->r[27]+0x00000128u,c->r[0]); // 800EB838
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800EB83C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800EB840
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800EB844
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800EB848
  c->r[11]=c->r[1]+0x00000040u; // 800EB84C
  c->lr=0x800EB854u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EB850
  c->r[0]=R32(c->r[1]+0x00000064u); // 800EB854
  c->lr=c->r[0]; // 800EB858
  c->r[1]=c->r[1]+0x00000060u; // 800EB85C
  return; // 800EB860
}

// fn_800EB864
void f_800EB864(Ctx* __restrict c) {
  trace_call(0x800EB864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB864
  c->r[0]=c->lr; // 800EB868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB86C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EB870
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EB874
  {uint32_t ea=c->r[2]+0xFFFFA6ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB878
  c->f[31]=c->f[1]; // 800EB87C
  c->r[0]=0u+0x00000000u; // 800EB880
  fcmp(c,0,c->f[1],c->f[0]); // 800EB884
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EB888
  if (!crb(c,2)) { goto L_800EB8A4; } // 800EB88C
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB890
  fcmp(c,0,c->f[1],c->f[0]); // 800EB894
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800EB898
  if (!crb(c,2)) { goto L_800EB8A4; } // 800EB89C
  c->r[0]=0u+0x00000001u; // 800EB8A0
L_800EB8A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EB8A4
  if (!crb(c,2)) { goto L_800EB8C8; } // 800EB8A8
  c->r[3]=0u+0x806D0000u; // 800EB8AC
  c->r[5]=0u+0x806D0000u; // 800EB8B0
  c->r[3]=c->r[3]+0x000071D4u; // 800EB8B4
  c->r[4]=0u+0x00000119u; // 800EB8B8
  c->r[5]=c->r[5]+0x000071ACu; // 800EB8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EB8C0
  c->lr=0x800EB8C8u; f_80484708(c); // 800EB8C4
L_800EB8C8:;
  c->f[1]=c->f[31]; // 800EB8C8
  c->lr=0x800EB8D0u; f_803BA740(c); // 800EB8CC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800EB8D0
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB8D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800EB8D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EB8DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB8E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800EB8E4
  c->lr=c->r[0]; // 800EB8E8
  c->r[1]=c->r[1]+0x00000020u; // 800EB8EC
  return; // 800EB8F0
}

// fn_800EB8F4
void f_800EB8F4(Ctx* __restrict c) {
  trace_call(0x800EB8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB8F4
  c->r[0]=c->lr; // 800EB8F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB8FC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB900
  c->r[29]=c->r[3]|c->r[3]; // 800EB904
  c->r[0]=R8(c->r[3]+0x00000128u); // 800EB908
  cmps(c,0,(int32_t)c->r[0],0); // 800EB90C
  if (crb(c,2)) { goto L_800EB944; } // 800EB910
  c->r[30]=0u+0x00000000u; // 800EB914
  c->r[31]=0u+0x00000000u; // 800EB918
L_800EB91C:;
  c->r[3]=c->r[29]+c->r[31]; // 800EB91C
  c->r[0]=R32(c->r[3]+0x000000B4u); // 800EB920
  cmps(c,0,(int32_t)c->r[0],0); // 800EB924
  if (crb(c,2)) { goto L_800EB934; } // 800EB928
  c->r[3]=c->r[3]+0x000000ACu; // 800EB92C
  c->lr=0x800EB934u; f_80338730(c); // 800EB930
L_800EB934:;
  c->r[30]=c->r[30]+0x00000001u; // 800EB934
  c->r[31]=c->r[31]+0x0000003Cu; // 800EB938
  cmps(c,0,(int32_t)c->r[30],2); // 800EB93C
  if (crb(c,0)) { IRQCHK(c); goto L_800EB91C; } // 800EB940
L_800EB944:;
  c->r[0]=0u+0x00000000u; // 800EB944
  W8(c->r[29]+0x00000128u,c->r[0]); // 800EB948
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB94C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB950
  c->lr=c->r[0]; // 800EB954
  c->r[1]=c->r[1]+0x00000020u; // 800EB958
  return; // 800EB95C
}

// fn_800EB960
void f_800EB960(Ctx* __restrict c) {
  trace_call(0x800EB960u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB960
  c->r[0]=c->lr; // 800EB964
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EB968
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB96C
  c->r[26]=c->r[3]|c->r[3]; // 800EB970
  c->r[31]=0u+0x80690000u; // 800EB974
  c->r[30]=c->r[26]|c->r[26]; // 800EB978
  c->r[27]=c->r[26]|c->r[26]; // 800EB97C
  c->r[29]=c->r[26]|c->r[26]; // 800EB980
  c->r[31]=c->r[31]+0xFFFFEC50u; // 800EB984
  c->lr=0x800EB98Cu; f_800EC68C(c); // 800EB988
  c->r[4]=0u+0x806D0000u; // 800EB98C
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 800EB990
  c->r[0]=0u+0x00000000u; // 800EB994
  W32(c->r[26]+0x00000000u,c->r[3]); // 800EB998
  c->r[4]=c->r[4]+0x000038C0u; // 800EB99C
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 800EB9A0
  W32(c->r[26]+0x00000004u,c->r[0]); // 800EB9A4
  W32(c->r[26]+0x00000008u,c->r[0]); // 800EB9A8
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800EB9AC
  W8(c->r[26]+0x00000010u,c->r[0]); // 800EB9B0
  W32(c->r[26]+0x00000014u,c->r[0]); // 800EB9B4
  W32(c->r[26]+0x00000018u,c->r[0]); // 800EB9B8
  W32(c->r[26]+0x00000020u,c->r[0]); // 800EB9BC
  W32(c->r[26]+0x00000024u,c->r[0]); // 800EB9C0
  if (crb(c,2)) { goto L_800EB9CC; } // 800EB9C4
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 800EB9C8
L_800EB9CC:;
  c->lr=0x800EB9D0u; f_800797AC(c); // 800EB9CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB9D0
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800EB9D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EB9D8
  if (!crb(c,2)) { goto L_800EB9E8; } // 800EB9DC
  c->r[0]=0u+0x00000001u; // 800EB9E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EB9E4
L_800EB9E8:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 800EB9E8
  c->r[5]=0u+0x0000012Cu; // 800EB9EC
  c->r[4]=c->r[7]+0x00000001u; // 800EB9F0
  c->r[0]=divwu(c->r[4],c->r[5]); // 800EB9F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800EB9F8
  c->r[6]=c->r[4]-c->r[0]; // 800EB9FC
  goto L_800EBA4C; // 800EBA00
L_800EBA04:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800EBA04
  c->r[4]=c->r[3]+c->r[0]; // 800EBA08
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EBA0C
  cmps(c,0,(int32_t)c->r[0],0); // 800EBA10
  if (!crb(c,2)) { goto L_800EBA3C; } // 800EBA14
  W32(c->r[3]+0x00000004u,c->r[6]); // 800EBA18
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EBA1C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800EBA20
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 800EBA24
  c->r[4]=R32(c->r[3]+0x00000000u); // 800EBA28
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EBA2C
  W32(c->r[1]+0x00000010u,c->r[4]); // 800EBA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBA34
  goto L_800EBA68; // 800EBA38
L_800EBA3C:;
  c->r[4]=c->r[6]+0x00000001u; // 800EBA3C
  c->r[0]=divwu(c->r[4],c->r[5]); // 800EBA40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800EBA44
  c->r[6]=c->r[4]-c->r[0]; // 800EBA48
L_800EBA4C:;
  cmpu(c,0,c->r[6],c->r[7]); // 800EBA4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800EBA04; } // 800EBA50
  c->r[0]=0u+0x00000000u; // 800EBA54
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EBA58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EBA5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EBA60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBA64
L_800EBA68:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800EBA68
  c->r[24]=c->r[26]+0x00000028u; // 800EBA6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBA70
  c->r[3]=c->r[24]|c->r[24]; // 800EBA74
  W32(c->r[1]+0x00000018u,c->r[4]); // 800EBA78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EBA7C
  W32(c->r[26]+0x00000020u,c->r[4]); // 800EBA80
  W32(c->r[26]+0x00000024u,c->r[0]); // 800EBA84
  c->lr=0x800EBA8Cu; f_800506C0(c); // 800EBA88
  cmps(c,0,(int32_t)c->r[24],0); // 800EBA8C
  c->r[3]=c->r[24]|c->r[24]; // 800EBA90
  if (crb(c,2)) { goto L_800EBA9C; } // 800EBA94
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800EBA98
L_800EBA9C:;
  c->r[28]=0u+0x00000001u; // 800EBA9C
  W32(c->r[24]+0x00000008u,c->r[3]); // 800EBAA0
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 800EBAA4
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800EBAA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBAAC
  if (!crb(c,2)) { goto L_800EBAF0; } // 800EBAB0
  c->r[25]=0u+0x80740000u; // 800EBAB4
  c->r[3]=c->r[25]+0x000074BCu; // 800EBAB8
  c->lr=0x800EBAC0u; f_800506C0(c); // 800EBABC
  c->r[6]=0u+0x806D0000u; // 800EBAC0
  c->r[4]=0u+0x80060000u; // 800EBAC4
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800EBAC8
  c->r[3]=c->r[25]+0x000074BCu; // 800EBACC
  c->r[0]=c->r[6]+0x00000008u; // 800EBAD0
  c->r[5]=0u+0x80750000u; // 800EBAD4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EBAD8
  c->r[4]=c->r[4]+0x000057D4u; // 800EBADC
  c->r[5]=c->r[5]+0x00003AECu; // 800EBAE0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EBAE4
  c->lr=0x800EBAECu; f_803A92B8(c); // 800EBAE8
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 800EBAEC
L_800EBAF0:;
  c->r[3]=0u+0x80740000u; // 800EBAF0
  c->r[5]=c->r[24]|c->r[24]; // 800EBAF4
  c->r[3]=c->r[3]+0x000074BCu; // 800EBAF8
  c->r[4]=c->r[3]|c->r[3]; // 800EBAFC
  c->lr=0x800EBB04u; f_802DDCA8(c); // 800EBB00
  c->r[25]=c->r[26]+0x00000038u; // 800EBB04
  c->r[3]=c->r[25]|c->r[25]; // 800EBB08
  c->lr=0x800EBB10u; f_800506C0(c); // 800EBB0C
  cmps(c,0,(int32_t)c->r[25],0); // 800EBB10
  c->r[0]=c->r[25]|c->r[25]; // 800EBB14
  if (crb(c,2)) { goto L_800EBB20; } // 800EBB18
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 800EBB1C
L_800EBB20:;
  c->r[28]=c->r[26]+0x00000044u; // 800EBB20
  W32(c->r[25]+0x00000008u,c->r[0]); // 800EBB24
  c->r[3]=c->r[28]|c->r[28]; // 800EBB28
  c->lr=0x800EBB30u; f_800506C0(c); // 800EBB2C
  cmps(c,0,(int32_t)c->r[28],0); // 800EBB30
  c->r[0]=c->r[28]|c->r[28]; // 800EBB34
  if (crb(c,2)) { goto L_800EBB40; } // 800EBB38
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 800EBB3C
L_800EBB40:;
  c->r[3]=0u+0x806F0000u; // 800EBB40
  c->r[25]=0u+0x00000000u; // 800EBB44
  c->r[3]=c->r[3]+0x00000E80u; // 800EBB48
  W32(c->r[28]+0x00000008u,c->r[0]); // 800EBB4C
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 800EBB50
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800EBB54
  W32(c->r[26]+0x00000058u,c->r[25]); // 800EBB58
  W32(c->r[26]+0x00000064u,c->r[25]); // 800EBB5C
  c->lr=0x800EBB64u; f_8007BDCC(c); // 800EBB60
  c->r[0]=c->r[13]+0xFFFF8114u; // 800EBB64
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 800EBB68
  W32(c->r[26]+0x000000A0u,c->r[0]); // 800EBB6C
  W32(c->r[26]+0x000000A4u,c->r[25]); // 800EBB70
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800EBB74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBB78
  if (!crb(c,2)) { goto L_800EBB9C; } // 800EBB7C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EBB80
  c->r[0]=0u+0x00000001u; // 800EBB84
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EBB88
  c->r[3]=c->r[4]+0x00000001u; // 800EBB8C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EBB90
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800EBB94
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800EBB98
L_800EBB9C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800EBB9C
  c->r[3]=c->r[13]+0xFFFF8110u; // 800EBBA0
  c->r[0]=0u+0x00000000u; // 800EBBA4
  W32(c->r[26]+0x000000A8u,c->r[4]); // 800EBBA8
  W32(c->r[26]+0x000000ACu,c->r[3]); // 800EBBAC
  W32(c->r[26]+0x000000B0u,c->r[0]); // 800EBBB0
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800EBBB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBBB8
  if (!crb(c,2)) { goto L_800EBBDC; } // 800EBBBC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EBBC0
  c->r[0]=0u+0x00000001u; // 800EBBC4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EBBC8
  c->r[3]=c->r[4]+0x00000001u; // 800EBBCC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EBBD0
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800EBBD4
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800EBBD8
L_800EBBDC:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800EBBDC
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800EBBE0
  c->r[0]=0u+0x00000000u; // 800EBBE4
  W32(c->r[26]+0x000000B4u,c->r[4]); // 800EBBE8
  W32(c->r[26]+0x000000B8u,c->r[3]); // 800EBBEC
  W32(c->r[26]+0x000000BCu,c->r[0]); // 800EBBF0
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800EBBF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBBF8
  if (!crb(c,2)) { goto L_800EBC1C; } // 800EBBFC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EBC00
  c->r[0]=0u+0x00000001u; // 800EBC04
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EBC08
  c->r[3]=c->r[4]+0x00000001u; // 800EBC0C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EBC10
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800EBC14
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800EBC18
L_800EBC1C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800EBC1C
  c->r[3]=c->r[13]+0xFFFF8108u; // 800EBC20
  c->r[0]=0u+0x00000000u; // 800EBC24
  W32(c->r[26]+0x000000C0u,c->r[4]); // 800EBC28
  W32(c->r[26]+0x000000C4u,c->r[3]); // 800EBC2C
  W32(c->r[26]+0x000000C8u,c->r[0]); // 800EBC30
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800EBC34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBC38
  if (!crb(c,2)) { goto L_800EBC5C; } // 800EBC3C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EBC40
  c->r[0]=0u+0x00000001u; // 800EBC44
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EBC48
  c->r[3]=c->r[4]+0x00000001u; // 800EBC4C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EBC50
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800EBC54
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800EBC58
L_800EBC5C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800EBC5C
  c->r[0]=c->r[13]+0xFFFF8104u; // 800EBC60
  c->r[25]=0u+0x00000000u; // 800EBC64
  W32(c->r[26]+0x000000CCu,c->r[3]); // 800EBC68
  c->r[3]=c->r[26]+0x000000D8u; // 800EBC6C
  W32(c->r[26]+0x000000D0u,c->r[0]); // 800EBC70
  W32(c->r[26]+0x000000D4u,c->r[25]); // 800EBC74
  c->lr=0x800EBC7Cu; f_800506C0(c); // 800EBC78
  c->r[4]=0u+0x806F0000u; // 800EBC7C
  c->r[3]=0u+0x00000006u; // 800EBC80
  c->r[4]=c->r[4]+0x000007A0u; // 800EBC84
  c->r[28]=c->r[26]+0x000000FCu; // 800EBC88
  c->r[0]=c->r[4]+0x00000024u; // 800EBC8C
  W32(c->r[26]+0x000000E8u,c->r[3]); // 800EBC90
  c->r[3]=c->r[28]+0x0000000Cu; // 800EBC94
  W32(c->r[26]+0x000000ECu,c->r[25]); // 800EBC98
  W32(c->r[26]+0x000000F8u,c->r[25]); // 800EBC9C
  W32(c->r[26]+0x000000FCu,c->r[4]); // 800EBCA0
  W32(c->r[26]+0x00000100u,c->r[0]); // 800EBCA4
  c->lr=0x800EBCACu; f_800506C0(c); // 800EBCA8
  c->r[3]=c->r[28]+0x00000018u; // 800EBCAC
  c->lr=0x800EBCB4u; f_800506C0(c); // 800EBCB0
  W32(c->r[28]+0x00000024u,c->r[25]); // 800EBCB4
  c->r[3]=c->r[28]+0x000000B0u; // 800EBCB8
  c->lr=0x800EBCC0u; f_800506C0(c); // 800EBCBC
  c->r[12]=R32(c->r[28]+0x00000000u); // 800EBCC0
  c->r[3]=c->r[28]|c->r[28]; // 800EBCC4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800EBCC8
  c->ctr=c->r[12]; // 800EBCCC
  if (true) { c->lr=0x800EBCD4u; dispatch(c,c->ctr); } // 800EBCD0
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800EBCD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBCD8
  if (!crb(c,2)) { goto L_800EBCF8; } // 800EBCDC
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800EBCE0
  c->r[0]=0u+0x00000001u; // 800EBCE4
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800EBCE8
  c->r[3]=c->r[3]+0x00000001u; // 800EBCEC
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800EBCF0
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800EBCF4
L_800EBCF8:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800EBCF8
  c->r[5]=0u+0x806F0000u; // 800EBCFC
  c->r[5]=c->r[5]+0x000007F8u; // 800EBD00
  c->r[0]=0u+0x00000032u; // 800EBD04
  c->r[4]=c->r[5]+0x00000024u; // 800EBD08
  W32(c->r[28]+0x00000008u,c->r[3]); // 800EBD0C
  c->r[6]=0u+0x00000000u; // 800EBD10
  c->r[3]=0u+0x00000000u; // 800EBD14
  W32(c->r[28]+0x00000000u,c->r[5]); // 800EBD18
  W32(c->r[28]+0x00000004u,c->r[4]); // 800EBD1C
  c->ctr=c->r[0]; // 800EBD20
L_800EBD24:;
  c->r[4]=c->r[28]+c->r[3]; // 800EBD24
  c->r[3]=c->r[3]+0x00000004u; // 800EBD28
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800EBD2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EBD24; } // 800EBD30
  c->r[3]=0u+0x806D0000u; // 800EBD34
  c->r[7]=0u+0x00000000u; // 800EBD38
  c->r[3]=c->r[3]+0x00003868u; // 800EBD3C
  c->r[0]=0u+0x0000000Au; // 800EBD40
  c->r[4]=c->r[3]+0x00000024u; // 800EBD44
  W32(c->r[28]+0x00000000u,c->r[3]); // 800EBD48
  c->r[8]=0u+0x00000000u; // 800EBD4C
  c->r[3]=0u+0x00000000u; // 800EBD50
  W32(c->r[28]+0x00000004u,c->r[4]); // 800EBD54
  c->r[6]=0u+0xFFFFFFFFu; // 800EBD58
  W32(c->r[26]+0x00000314u,c->r[7]); // 800EBD5C
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 800EBD60
  W32(c->r[26]+0x00000054u,c->r[7]); // 800EBD64
  W32(c->r[26]+0x00000310u,c->r[26]); // 800EBD68
  c->ctr=c->r[0]; // 800EBD6C
L_800EBD70:;
  c->r[5]=c->r[26]+c->r[3]; // 800EBD70
  c->r[4]=c->r[26]+c->r[8]; // 800EBD74
  W32(c->r[5]+0x00000068u,c->r[6]); // 800EBD78
  c->r[8]=c->r[8]+0x00000001u; // 800EBD7C
  c->r[3]=c->r[3]+0x00000004u; // 800EBD80
  W8(c->r[4]+0x00000090u,c->r[7]); // 800EBD84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EBD70; } // 800EBD88
  c->r[24]=c->r[26]+0x00000318u; // 800EBD8C
  c->r[3]=c->r[24]|c->r[24]; // 800EBD90
  c->lr=0x800EBD98u; f_800506C0(c); // 800EBD94
  cmps(c,0,(int32_t)c->r[24],0); // 800EBD98
  c->r[3]=c->r[24]|c->r[24]; // 800EBD9C
  if (crb(c,2)) { goto L_800EBDA8; } // 800EBDA0
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 800EBDA4
L_800EBDA8:;
  c->r[29]=0u+0x00000001u; // 800EBDA8
  W32(c->r[24]+0x00000008u,c->r[3]); // 800EBDAC
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800EBDB0
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800EBDB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBDB8
  if (!crb(c,2)) { goto L_800EBDFC; } // 800EBDBC
  c->r[28]=0u+0x80750000u; // 800EBDC0
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800EBDC4
  c->lr=0x800EBDCCu; f_800506C0(c); // 800EBDC8
  c->r[6]=0u+0x806D0000u; // 800EBDCC
  c->r[4]=0u+0x80080000u; // 800EBDD0
  c->r[6]=c->r[6]+0x000038D8u; // 800EBDD4
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800EBDD8
  c->r[0]=c->r[6]+0x00000008u; // 800EBDDC
  c->r[5]=0u+0x80750000u; // 800EBDE0
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EBDE4
  c->r[4]=c->r[4]+0xFFFF9844u; // 800EBDE8
  c->r[5]=c->r[5]+0x00003AE0u; // 800EBDEC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EBDF0
  c->lr=0x800EBDF8u; f_803A92B8(c); // 800EBDF4
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800EBDF8
L_800EBDFC:;
  c->r[3]=0u+0x80750000u; // 800EBDFC
  c->r[5]=c->r[24]|c->r[24]; // 800EBE00
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800EBE04
  c->r[4]=c->r[3]|c->r[3]; // 800EBE08
  c->lr=0x800EBE10u; f_802DDCA8(c); // 800EBE0C
  c->r[3]=0u+0x806D0000u; // 800EBE10
  c->r[0]=0u+0x00000000u; // 800EBE14
  c->r[3]=c->r[3]+0xFFFFD974u; // 800EBE18
  c->r[5]=0u+0xFFFFFFFFu; // 800EBE1C
  c->r[4]=0u+0x00000001u; // 800EBE20
  c->r[25]=c->r[26]+0x0000032Cu; // 800EBE24
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800EBE28
  c->r[3]=c->r[25]|c->r[25]; // 800EBE2C
  W32(c->r[26]+0x00000328u,c->r[5]); // 800EBE30
  W32(c->r[26]+0x000000ECu,c->r[4]); // 800EBE34
  W32(c->r[26]+0x00000054u,c->r[0]); // 800EBE38
  W32(c->r[26]+0x00000314u,c->r[0]); // 800EBE3C
  c->lr=0x800EBE44u; f_800506C0(c); // 800EBE40
  cmps(c,0,(int32_t)c->r[25],0); // 800EBE44
  c->r[3]=c->r[25]|c->r[25]; // 800EBE48
  if (crb(c,2)) { goto L_800EBE54; } // 800EBE4C
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 800EBE50
L_800EBE54:;
  c->r[28]=0u+0x00000001u; // 800EBE54
  W32(c->r[25]+0x00000008u,c->r[3]); // 800EBE58
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 800EBE5C
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 800EBE60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBE64
  if (!crb(c,2)) { goto L_800EBEA8; } // 800EBE68
  c->r[27]=0u+0x80730000u; // 800EBE6C
  c->r[3]=c->r[27]+0x000073A8u; // 800EBE70
  c->lr=0x800EBE78u; f_800506C0(c); // 800EBE74
  c->r[6]=0u+0x806D0000u; // 800EBE78
  c->r[4]=0u+0x80050000u; // 800EBE7C
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 800EBE80
  c->r[3]=c->r[27]+0x000073A8u; // 800EBE84
  c->r[0]=c->r[6]+0x00000008u; // 800EBE88
  c->r[5]=0u+0x80750000u; // 800EBE8C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EBE90
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 800EBE94
  c->r[5]=c->r[5]+0x00003AD4u; // 800EBE98
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EBE9C
  c->lr=0x800EBEA4u; f_803A92B8(c); // 800EBEA0
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 800EBEA4
L_800EBEA8:;
  c->r[3]=0u+0x80730000u; // 800EBEA8
  c->r[5]=c->r[25]|c->r[25]; // 800EBEAC
  c->r[3]=c->r[3]+0x000073A8u; // 800EBEB0
  c->r[4]=c->r[3]|c->r[3]; // 800EBEB4
  c->lr=0x800EBEBCu; f_802DDCA8(c); // 800EBEB8
  c->r[25]=c->r[26]+0x0000033Cu; // 800EBEBC
  c->r[3]=c->r[25]|c->r[25]; // 800EBEC0
  c->lr=0x800EBEC8u; f_800506C0(c); // 800EBEC4
  cmps(c,0,(int32_t)c->r[25],0); // 800EBEC8
  c->r[3]=c->r[25]|c->r[25]; // 800EBECC
  if (crb(c,2)) { goto L_800EBED8; } // 800EBED0
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 800EBED4
L_800EBED8:;
  c->r[28]=0u+0x00000001u; // 800EBED8
  W32(c->r[25]+0x00000008u,c->r[3]); // 800EBEDC
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 800EBEE0
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800EBEE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBEE8
  if (!crb(c,2)) { goto L_800EBF2C; } // 800EBEEC
  c->r[27]=0u+0x80750000u; // 800EBEF0
  c->r[3]=c->r[27]+0xFFFF8158u; // 800EBEF4
  c->lr=0x800EBEFCu; f_800506C0(c); // 800EBEF8
  c->r[6]=0u+0x806D0000u; // 800EBEFC
  c->r[4]=0u+0x80080000u; // 800EBF00
  c->r[6]=c->r[6]+0x000038F0u; // 800EBF04
  c->r[3]=c->r[27]+0xFFFF8158u; // 800EBF08
  c->r[0]=c->r[6]+0x00000008u; // 800EBF0C
  c->r[5]=0u+0x80750000u; // 800EBF10
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EBF14
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800EBF18
  c->r[5]=c->r[5]+0x00003AC8u; // 800EBF1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EBF20
  c->lr=0x800EBF28u; f_803A92B8(c); // 800EBF24
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 800EBF28
L_800EBF2C:;
  c->r[3]=0u+0x80750000u; // 800EBF2C
  c->r[5]=c->r[25]|c->r[25]; // 800EBF30
  c->r[3]=c->r[3]+0xFFFF8158u; // 800EBF34
  c->r[4]=c->r[3]|c->r[3]; // 800EBF38
  c->lr=0x800EBF40u; f_802DDCA8(c); // 800EBF3C
  c->r[3]=0u+0x806D0000u; // 800EBF40
  W32(c->r[26]+0x00000054u,c->r[31]); // 800EBF44
  c->r[3]=c->r[3]+0x00004AE8u; // 800EBF48
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800EBF4C
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800EBF50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBF54
  if (!crb(c,2)) { goto L_800EBF74; } // 800EBF58
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800EBF5C
  c->r[0]=0u+0x00000001u; // 800EBF60
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800EBF64
  c->r[3]=c->r[3]+0x00000001u; // 800EBF68
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800EBF6C
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800EBF70
L_800EBF74:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800EBF74
  W32(c->r[26]+0x00000328u,c->r[0]); // 800EBF78
  c->r[0]=R8(c->r[13]+0xFFFFC3F4u); // 800EBF7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBF80
  if (!crb(c,2)) { goto L_800EBFA0; } // 800EBF84
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800EBF88
  c->r[0]=0u+0x00000001u; // 800EBF8C
  W32(c->r[13]+0xFFFFC3F0u,c->r[3]); // 800EBF90
  c->r[3]=c->r[3]+0x00000001u; // 800EBF94
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800EBF98
  W8(c->r[13]+0xFFFFC3F4u,c->r[0]); // 800EBF9C
L_800EBFA0:;
  c->r[0]=R32(c->r[13]+0xFFFFC3F0u); // 800EBFA0
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 800EBFA4
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 800EBFA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EBFAC
  if (!crb(c,2)) { goto L_800EBFCC; } // 800EBFB0
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800EBFB4
  c->r[0]=0u+0x00000001u; // 800EBFB8
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 800EBFBC
  c->r[3]=c->r[3]+0x00000001u; // 800EBFC0
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800EBFC4
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 800EBFC8
L_800EBFCC:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 800EBFCC
  c->r[5]=0u+0x806D0000u; // 800EBFD0
  c->r[5]=c->r[5]+0xFFFFE468u; // 800EBFD4
  W32(c->r[26]+0x00000350u,c->r[0]); // 800EBFD8
  c->r[3]=c->r[26]+0x000003B0u; // 800EBFDC
  c->r[4]=0u+0x00000000u; // 800EBFE0
  W32(c->r[26]+0x00000400u,c->r[5]); // 800EBFE4
  c->r[5]=0u+0x00000050u; // 800EBFE8
  c->lr=0x800EBFF0u; f_800043EC(c); // 800EBFEC
  c->r[4]=0u+0x806D0000u; // 800EBFF0
  c->r[3]=c->r[26]+0x00000450u; // 800EBFF4
  c->r[4]=c->r[4]+0xFFFFE170u; // 800EBFF8
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 800EBFFC
  c->r[0]=c->r[4]+0x00000044u; // 800EC000
  W32(c->r[26]+0x00000400u,c->r[0]); // 800EC004
  c->lr=0x800EC00Cu; f_8007BDFC(c); // 800EC008
  c->r[3]=c->r[26]+0x000004C4u; // 800EC00C
  c->lr=0x800EC014u; f_8007BDFC(c); // 800EC010
  c->r[3]=c->r[26]+0x00000538u; // 800EC014
  c->r[4]=0u+0x00000000u; // 800EC018
  c->r[5]=0u+0x00000008u; // 800EC01C
  c->lr=0x800EC024u; f_800043EC(c); // 800EC020
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC024
  cmps(c,0,(int32_t)c->r[24],0); // 800EC028
  if (crb(c,2)) { goto L_800EC070; } // 800EC02C
  c->lr=0x800EC034u; f_800EC68C(c); // 800EC030
  c->r[27]=c->r[3]|c->r[3]; // 800EC034
  c->lr=0x800EC03Cu; f_8007BDCC(c); // 800EC038
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 800EC03C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC040
  c->r[5]=0u+0x800F0000u; // 800EC044
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EC048
  c->r[4]=c->r[24]+c->r[4]; // 800EC04C
  c->r[5]=c->r[5]+0xFFFFC6FCu; // 800EC050
  c->r[4]=c->r[4]+c->r[0]; // 800EC054
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC058
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC05C
  cmpu(c,0,c->r[0],0x0000000Cu); // 800EC060
  if (!crb(c,0)) { goto L_800EC070; } // 800EC064
  c->r[0]=0u+0x0000000Cu; // 800EC068
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC06C
L_800EC070:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC070
  cmps(c,0,(int32_t)c->r[24],0); // 800EC074
  if (crb(c,2)) { goto L_800EC0E0; } // 800EC078
  c->lr=0x800EC080u; f_800EC68C(c); // 800EC07C
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800EC080
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC084
  if (!crb(c,2)) { goto L_800EC0A8; } // 800EC088
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC08C
  c->r[0]=0u+0x00000001u; // 800EC090
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC094
  c->r[4]=c->r[5]+0x00000001u; // 800EC098
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC09C
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800EC0A0
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800EC0A4
L_800EC0A8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC0A8
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800EC0AC
  c->r[5]=0u+0x800F0000u; // 800EC0B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC0B4
  c->r[4]=c->r[24]+c->r[4]; // 800EC0B8
  c->r[5]=c->r[5]+0xFFFFC6F8u; // 800EC0BC
  c->r[4]=c->r[4]+c->r[0]; // 800EC0C0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC0C4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC0C8
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC0CC
  cmpu(c,0,c->r[0],0x00000018u); // 800EC0D0
  if (!crb(c,0)) { goto L_800EC0E0; } // 800EC0D4
  c->r[0]=0u+0x00000018u; // 800EC0D8
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC0DC
L_800EC0E0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC0E0
  cmps(c,0,(int32_t)c->r[24],0); // 800EC0E4
  if (crb(c,2)) { goto L_800EC150; } // 800EC0E8
  c->lr=0x800EC0F0u; f_800EC68C(c); // 800EC0EC
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800EC0F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC0F4
  if (!crb(c,2)) { goto L_800EC118; } // 800EC0F8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC0FC
  c->r[0]=0u+0x00000001u; // 800EC100
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC104
  c->r[4]=c->r[5]+0x00000001u; // 800EC108
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC10C
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800EC110
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800EC114
L_800EC118:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC118
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800EC11C
  c->r[5]=0u+0x800F0000u; // 800EC120
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC124
  c->r[4]=c->r[24]+c->r[4]; // 800EC128
  c->r[5]=c->r[5]+0xFFFFC6F4u; // 800EC12C
  c->r[4]=c->r[4]+c->r[0]; // 800EC130
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC134
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC138
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC13C
  cmpu(c,0,c->r[0],0x0000006Cu); // 800EC140
  if (!crb(c,0)) { goto L_800EC150; } // 800EC144
  c->r[0]=0u+0x0000006Cu; // 800EC148
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC14C
L_800EC150:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC150
  cmps(c,0,(int32_t)c->r[24],0); // 800EC154
  if (crb(c,2)) { goto L_800EC1C0; } // 800EC158
  c->lr=0x800EC160u; f_800EC68C(c); // 800EC15C
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800EC160
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC164
  if (!crb(c,2)) { goto L_800EC188; } // 800EC168
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC16C
  c->r[0]=0u+0x00000001u; // 800EC170
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC174
  c->r[4]=c->r[5]+0x00000001u; // 800EC178
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC17C
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 800EC180
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800EC184
L_800EC188:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC188
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 800EC18C
  c->r[5]=0u+0x800F0000u; // 800EC190
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC194
  c->r[4]=c->r[24]+c->r[4]; // 800EC198
  c->r[5]=c->r[5]+0xFFFFC6F0u; // 800EC19C
  c->r[4]=c->r[4]+c->r[0]; // 800EC1A0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC1A4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC1A8
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC1AC
  cmpu(c,0,c->r[0],0x0000002Cu); // 800EC1B0
  if (!crb(c,0)) { goto L_800EC1C0; } // 800EC1B4
  c->r[0]=0u+0x0000002Cu; // 800EC1B8
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC1BC
L_800EC1C0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC1C0
  cmps(c,0,(int32_t)c->r[24],0); // 800EC1C4
  if (crb(c,2)) { goto L_800EC230; } // 800EC1C8
  c->lr=0x800EC1D0u; f_800EC68C(c); // 800EC1CC
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800EC1D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC1D4
  if (!crb(c,2)) { goto L_800EC1F8; } // 800EC1D8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC1DC
  c->r[0]=0u+0x00000001u; // 800EC1E0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC1E4
  c->r[4]=c->r[5]+0x00000001u; // 800EC1E8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC1EC
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800EC1F0
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800EC1F4
L_800EC1F8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC1F8
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800EC1FC
  c->r[5]=0u+0x800F0000u; // 800EC200
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC204
  c->r[4]=c->r[24]+c->r[4]; // 800EC208
  c->r[5]=c->r[5]+0xFFFFC6ECu; // 800EC20C
  c->r[4]=c->r[4]+c->r[0]; // 800EC210
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC214
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC218
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC21C
  cmpu(c,0,c->r[0],0x00000010u); // 800EC220
  if (!crb(c,0)) { goto L_800EC230; } // 800EC224
  c->r[0]=0u+0x00000010u; // 800EC228
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC22C
L_800EC230:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC230
  cmps(c,0,(int32_t)c->r[24],0); // 800EC234
  if (crb(c,2)) { goto L_800EC2A0; } // 800EC238
  c->lr=0x800EC240u; f_800EC68C(c); // 800EC23C
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800EC240
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC244
  if (!crb(c,2)) { goto L_800EC268; } // 800EC248
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC24C
  c->r[0]=0u+0x00000001u; // 800EC250
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC254
  c->r[4]=c->r[5]+0x00000001u; // 800EC258
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC25C
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800EC260
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800EC264
L_800EC268:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC268
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800EC26C
  c->r[5]=0u+0x800F0000u; // 800EC270
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC274
  c->r[4]=c->r[24]+c->r[4]; // 800EC278
  c->r[5]=c->r[5]+0xFFFFC6E8u; // 800EC27C
  c->r[4]=c->r[4]+c->r[0]; // 800EC280
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC284
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC288
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC28C
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EC290
  if (!crb(c,0)) { goto L_800EC2A0; } // 800EC294
  c->r[0]=0u+0x0000005Cu; // 800EC298
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC29C
L_800EC2A0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC2A0
  cmps(c,0,(int32_t)c->r[24],0); // 800EC2A4
  if (crb(c,2)) { goto L_800EC310; } // 800EC2A8
  c->lr=0x800EC2B0u; f_800EC68C(c); // 800EC2AC
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800EC2B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC2B4
  if (!crb(c,2)) { goto L_800EC2D8; } // 800EC2B8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC2BC
  c->r[0]=0u+0x00000001u; // 800EC2C0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC2C4
  c->r[4]=c->r[5]+0x00000001u; // 800EC2C8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC2CC
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800EC2D0
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800EC2D4
L_800EC2D8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC2D8
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800EC2DC
  c->r[5]=0u+0x800F0000u; // 800EC2E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC2E4
  c->r[4]=c->r[24]+c->r[4]; // 800EC2E8
  c->r[5]=c->r[5]+0xFFFFC6E4u; // 800EC2EC
  c->r[4]=c->r[4]+c->r[0]; // 800EC2F0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC2F4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC2F8
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC2FC
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EC300
  if (!crb(c,0)) { goto L_800EC310; } // 800EC304
  c->r[0]=0u+0x0000005Cu; // 800EC308
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC30C
L_800EC310:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC310
  cmps(c,0,(int32_t)c->r[24],0); // 800EC314
  if (crb(c,2)) { goto L_800EC380; } // 800EC318
  c->lr=0x800EC320u; f_800EC68C(c); // 800EC31C
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800EC320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC324
  if (!crb(c,2)) { goto L_800EC348; } // 800EC328
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC32C
  c->r[0]=0u+0x00000001u; // 800EC330
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC334
  c->r[4]=c->r[5]+0x00000001u; // 800EC338
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC33C
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800EC340
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800EC344
L_800EC348:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC348
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800EC34C
  c->r[5]=0u+0x800F0000u; // 800EC350
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC354
  c->r[4]=c->r[24]+c->r[4]; // 800EC358
  c->r[5]=c->r[5]+0xFFFFC6E0u; // 800EC35C
  c->r[4]=c->r[4]+c->r[0]; // 800EC360
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC364
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC368
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC36C
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EC370
  if (!crb(c,0)) { goto L_800EC380; } // 800EC374
  c->r[0]=0u+0x0000005Cu; // 800EC378
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC37C
L_800EC380:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EC380
  cmps(c,0,(int32_t)c->r[24],0); // 800EC384
  if (crb(c,2)) { goto L_800EC3F0; } // 800EC388
  c->lr=0x800EC390u; f_800EC68C(c); // 800EC38C
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800EC390
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC394
  if (!crb(c,2)) { goto L_800EC3B8; } // 800EC398
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EC39C
  c->r[0]=0u+0x00000001u; // 800EC3A0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EC3A4
  c->r[4]=c->r[5]+0x00000001u; // 800EC3A8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EC3AC
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800EC3B0
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800EC3B4
L_800EC3B8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EC3B8
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800EC3BC
  c->r[5]=0u+0x800F0000u; // 800EC3C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC3C4
  c->r[4]=c->r[24]+c->r[4]; // 800EC3C8
  c->r[5]=c->r[5]+0xFFFFC6DCu; // 800EC3CC
  c->r[4]=c->r[4]+c->r[0]; // 800EC3D0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC3D4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC3D8
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC3DC
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EC3E0
  if (!crb(c,0)) { goto L_800EC3F0; } // 800EC3E4
  c->r[0]=0u+0x0000005Cu; // 800EC3E8
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC3EC
L_800EC3F0:;
  c->r[3]=c->r[26]|c->r[26]; // 800EC3F0
  c->lr=0x800EC3F8u; f_8005BBF0(c); // 800EC3F4
  c->r[3]=0u+0x806E0000u; // 800EC3F8
  c->r[3]=c->r[3]+0xFFFF8110u; // 800EC3FC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800EC400
  c->r[0]=c->r[3]+0x00000044u; // 800EC404
  W32(c->r[26]+0x00000400u,c->r[0]); // 800EC408
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC40C
  cmps(c,0,(int32_t)c->r[24],0); // 800EC410
  if (crb(c,2)) { goto L_800EC47C; } // 800EC414
  c->lr=0x800EC41Cu; f_800EC68C(c); // 800EC418
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800EC41C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC420
  if (!crb(c,2)) { goto L_800EC444; } // 800EC424
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800EC428
  c->r[0]=0u+0x00000001u; // 800EC42C
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800EC430
  c->r[4]=c->r[5]+0x00000001u; // 800EC434
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800EC438
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800EC43C
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800EC440
L_800EC444:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800EC444
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800EC448
  c->r[5]=0u+0x800F0000u; // 800EC44C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC450
  c->r[4]=c->r[24]+c->r[4]; // 800EC454
  c->r[5]=c->r[5]+0xFFFFC6CCu; // 800EC458
  c->r[4]=c->r[4]+c->r[0]; // 800EC45C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC460
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC464
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC468
  cmpu(c,0,c->r[0],0x00000010u); // 800EC46C
  if (!crb(c,0)) { goto L_800EC47C; } // 800EC470
  c->r[0]=0u+0x00000010u; // 800EC474
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC478
L_800EC47C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC47C
  cmps(c,0,(int32_t)c->r[24],0); // 800EC480
  if (crb(c,2)) { goto L_800EC4C8; } // 800EC484
  c->lr=0x800EC48Cu; f_800EC68C(c); // 800EC488
  c->r[27]=c->r[3]|c->r[3]; // 800EC48C
  c->lr=0x800EC494u; f_80062F1C(c); // 800EC490
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 800EC494
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC498
  c->r[5]=0u+0x800F0000u; // 800EC49C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EC4A0
  c->r[4]=c->r[24]+c->r[4]; // 800EC4A4
  c->r[5]=c->r[5]+0xFFFFC6C8u; // 800EC4A8
  c->r[4]=c->r[4]+c->r[0]; // 800EC4AC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC4B0
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC4B4
  cmpu(c,0,c->r[0],0x00000010u); // 800EC4B8
  if (!crb(c,0)) { goto L_800EC4C8; } // 800EC4BC
  c->r[0]=0u+0x00000010u; // 800EC4C0
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC4C4
L_800EC4C8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC4C8
  cmps(c,0,(int32_t)c->r[24],0); // 800EC4CC
  if (crb(c,2)) { goto L_800EC538; } // 800EC4D0
  c->lr=0x800EC4D8u; f_800EC68C(c); // 800EC4D4
  c->r[0]=R8(c->r[13]+0xFFFFBCF8u); // 800EC4D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC4DC
  if (!crb(c,2)) { goto L_800EC500; } // 800EC4E0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800EC4E4
  c->r[0]=0u+0x00000001u; // 800EC4E8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800EC4EC
  c->r[4]=c->r[5]+0x00000001u; // 800EC4F0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800EC4F4
  W32(c->r[13]+0xFFFFBCF4u,c->r[5]); // 800EC4F8
  W8(c->r[13]+0xFFFFBCF8u,c->r[0]); // 800EC4FC
L_800EC500:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800EC500
  c->r[0]=R32(c->r[13]+0xFFFFBCF4u); // 800EC504
  c->r[5]=0u+0x800F0000u; // 800EC508
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC50C
  c->r[4]=c->r[24]+c->r[4]; // 800EC510
  c->r[5]=c->r[5]+0xFFFFC6C4u; // 800EC514
  c->r[4]=c->r[4]+c->r[0]; // 800EC518
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC51C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC520
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC524
  cmpu(c,0,c->r[0],0x00000010u); // 800EC528
  if (!crb(c,0)) { goto L_800EC538; } // 800EC52C
  c->r[0]=0u+0x00000010u; // 800EC530
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC534
L_800EC538:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC538
  cmps(c,0,(int32_t)c->r[24],0); // 800EC53C
  if (crb(c,2)) { goto L_800EC5A8; } // 800EC540
  c->lr=0x800EC548u; f_800EC68C(c); // 800EC544
  c->r[0]=R8(c->r[13]+0xFFFFBEF4u); // 800EC548
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC54C
  if (!crb(c,2)) { goto L_800EC570; } // 800EC550
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800EC554
  c->r[0]=0u+0x00000001u; // 800EC558
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800EC55C
  c->r[4]=c->r[5]+0x00000001u; // 800EC560
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800EC564
  W32(c->r[13]+0xFFFFBEF0u,c->r[5]); // 800EC568
  W8(c->r[13]+0xFFFFBEF4u,c->r[0]); // 800EC56C
L_800EC570:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800EC570
  c->r[0]=R32(c->r[13]+0xFFFFBEF0u); // 800EC574
  c->r[5]=0u+0x800F0000u; // 800EC578
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EC57C
  c->r[4]=c->r[24]+c->r[4]; // 800EC580
  c->r[5]=c->r[5]+0xFFFFC6C0u; // 800EC584
  c->r[4]=c->r[4]+c->r[0]; // 800EC588
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC58C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC590
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC594
  cmpu(c,0,c->r[0],0x00000018u); // 800EC598
  if (!crb(c,0)) { goto L_800EC5A8; } // 800EC59C
  c->r[0]=0u+0x00000018u; // 800EC5A0
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC5A4
L_800EC5A8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC5A8
  cmps(c,0,(int32_t)c->r[24],0); // 800EC5AC
  if (crb(c,2)) { goto L_800EC5F4; } // 800EC5B0
  c->lr=0x800EC5B8u; f_800EC68C(c); // 800EC5B4
  c->r[27]=c->r[3]|c->r[3]; // 800EC5B8
  c->lr=0x800EC5C0u; f_8007B170(c); // 800EC5BC
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 800EC5C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC5C4
  c->r[5]=0u+0x800F0000u; // 800EC5C8
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EC5CC
  c->r[4]=c->r[24]+c->r[4]; // 800EC5D0
  c->r[5]=c->r[5]+0xFFFFC6BCu; // 800EC5D4
  c->r[4]=c->r[4]+c->r[0]; // 800EC5D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC5DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC5E0
  cmpu(c,0,c->r[0],0x00000010u); // 800EC5E4
  if (!crb(c,0)) { goto L_800EC5F4; } // 800EC5E8
  c->r[0]=0u+0x00000010u; // 800EC5EC
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC5F0
L_800EC5F4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 800EC5F4
  cmps(c,0,(int32_t)c->r[24],0); // 800EC5F8
  if (crb(c,2)) { goto L_800EC640; } // 800EC5FC
  c->lr=0x800EC604u; f_800EC68C(c); // 800EC600
  c->r[27]=c->r[3]|c->r[3]; // 800EC604
  c->lr=0x800EC60Cu; f_800EC65C(c); // 800EC608
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 800EC60C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EC610
  c->r[5]=0u+0x800F0000u; // 800EC614
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EC618
  c->r[4]=c->r[24]+c->r[4]; // 800EC61C
  c->r[5]=c->r[5]+0xFFFFC658u; // 800EC620
  c->r[4]=c->r[4]+c->r[0]; // 800EC624
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EC628
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EC62C
  cmpu(c,0,c->r[0],0x00000010u); // 800EC630
  if (!crb(c,0)) { goto L_800EC640; } // 800EC634
  c->r[0]=0u+0x00000010u; // 800EC638
  W32(c->r[24]+c->r[3],c->r[0]); // 800EC63C
L_800EC640:;
  c->r[3]=c->r[26]|c->r[26]; // 800EC640
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC644
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EC648
  c->lr=c->r[0]; // 800EC64C
  c->r[1]=c->r[1]+0x00000040u; // 800EC650
  return; // 800EC654
}

// fn_800EC658
void f_800EC658(Ctx* __restrict c) {
  trace_call(0x800EC658u);
  f_800ECEE0(c); return; // 800EC658
}

// fn_800EC65C
void f_800EC65C(Ctx* __restrict c) {
  trace_call(0x800EC65Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC3E4u); // 800EC65C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC660
  if (!crb(c,2)) { goto L_800EC684; } // 800EC664
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EC668
  c->r[0]=0u+0x00000001u; // 800EC66C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EC670
  c->r[3]=c->r[4]+0x00000001u; // 800EC674
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EC678
  W32(c->r[13]+0xFFFFC3E0u,c->r[4]); // 800EC67C
  W8(c->r[13]+0xFFFFC3E4u,c->r[0]); // 800EC680
L_800EC684:;
  c->r[3]=R32(c->r[13]+0xFFFFC3E0u); // 800EC684
  return; // 800EC688
}

// fn_800EC68C
void f_800EC68C(Ctx* __restrict c) {
  trace_call(0x800EC68Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC3ECu); // 800EC68C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EC690
  if (!crb(c,2)) { goto L_800EC6B4; } // 800EC694
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800EC698
  c->r[0]=0u+0x00000001u; // 800EC69C
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800EC6A0
  c->r[3]=c->r[4]+0x00000001u; // 800EC6A4
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800EC6A8
  W32(c->r[13]+0xFFFFC3E8u,c->r[4]); // 800EC6AC
  W8(c->r[13]+0xFFFFC3ECu,c->r[0]); // 800EC6B0
L_800EC6B4:;
  c->r[3]=R32(c->r[13]+0xFFFFC3E8u); // 800EC6B4
  return; // 800EC6B8
}

// fn_800EC6BC
void f_800EC6BC(Ctx* __restrict c) {
  trace_call(0x800EC6BCu);
  f_800ECD34(c); return; // 800EC6BC
}

// fn_800EC6C0
void f_800EC6C0(Ctx* __restrict c) {
  trace_call(0x800EC6C0u);
  return; // 800EC6C0
}

// fn_800EC6C4
void f_800EC6C4(Ctx* __restrict c) {
  trace_call(0x800EC6C4u);
  return; // 800EC6C4
}

// fn_800EC6C8
void f_800EC6C8(Ctx* __restrict c) {
  trace_call(0x800EC6C8u);
  return; // 800EC6C8
}

// fn_800EC6CC
void f_800EC6CC(Ctx* __restrict c) {
  trace_call(0x800EC6CCu);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800EC6CC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 800EC6D0
  c->ctr=c->r[12]; // 800EC6D4
  if (true) { dispatch(c,c->ctr); return; } // 800EC6D8
}

// fn_800EC6DC
void f_800EC6DC(Ctx* __restrict c) {
  trace_call(0x800EC6DCu);
  f_8005E338(c); return; // 800EC6DC
}

// fn_800EC6E0
void f_800EC6E0(Ctx* __restrict c) {
  trace_call(0x800EC6E0u);
  f_8005E324(c); return; // 800EC6E0
}

// fn_800EC6E4
void f_800EC6E4(Ctx* __restrict c) {
  trace_call(0x800EC6E4u);
  f_8005E310(c); return; // 800EC6E4
}

// fn_800EC6E8
void f_800EC6E8(Ctx* __restrict c) {
  trace_call(0x800EC6E8u);
  f_8005E2FC(c); return; // 800EC6E8
}

// fn_800EC6EC
void f_800EC6EC(Ctx* __restrict c) {
  trace_call(0x800EC6ECu);
  f_8005E34C(c); return; // 800EC6EC
}

// fn_800EC6F0
void f_800EC6F0(Ctx* __restrict c) {
  trace_call(0x800EC6F0u);
  f_8005E360(c); return; // 800EC6F0
}

// fn_800EC6F4
void f_800EC6F4(Ctx* __restrict c) {
  trace_call(0x800EC6F4u);
  f_8005D47C(c); return; // 800EC6F4
}

// fn_800EC6F8
void f_800EC6F8(Ctx* __restrict c) {
  trace_call(0x800EC6F8u);
  f_8005D468(c); return; // 800EC6F8
}

// fn_800EC6FC
void f_800EC6FC(Ctx* __restrict c) {
  trace_call(0x800EC6FCu);
  f_8005BEDC(c); return; // 800EC6FC
}

// fn_800EC700
void f_800EC700(Ctx* __restrict c) {
  trace_call(0x800EC700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC700
  c->r[0]=c->lr; // 800EC704
  cmps(c,0,(int32_t)c->r[3],0); // 800EC708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC70C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC710
  c->r[30]=c->r[3]|c->r[3]; // 800EC714
  c->r[31]=c->r[4]|c->r[4]; // 800EC718
  if (crb(c,2)) { goto L_800EC73C; } // 800EC71C
  if (crb(c,2)) { goto L_800EC72C; } // 800EC720
  c->r[4]=0u+0x00000000u; // 800EC724
  c->lr=0x800EC72Cu; f_8005BD00(c); // 800EC728
L_800EC72C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EC72C
  if (!crb(c,1)) { goto L_800EC73C; } // 800EC730
  c->r[3]=c->r[30]|c->r[30]; // 800EC734
  c->lr=0x800EC73Cu; f_8005328C(c); // 800EC738
L_800EC73C:;
  c->r[3]=c->r[30]|c->r[30]; // 800EC73C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC740
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC744
  c->lr=c->r[0]; // 800EC748
  c->r[1]=c->r[1]+0x00000010u; // 800EC74C
  return; // 800EC750
}

// fn_800EC754
void f_800EC754(Ctx* __restrict c) {
  trace_call(0x800EC754u);
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC754
  c->r[6]=0u+0x00000000u; // 800EC758
  c->r[5]=0u+0xFFFFFFFFu; // 800EC75C
  c->r[4]=0u+0x0000003Cu; // 800EC760
  c->r[0]=0u+0x00000001u; // 800EC764
  W8(c->r[3]+0x000005C4u,c->r[6]); // 800EC768
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC76C
  W32(c->r[3]+0x000005C8u,c->r[5]); // 800EC770
  c->f[2]=c->f[1]; // 800EC774
  W32(c->r[3]+0x000005D0u,c->r[4]); // 800EC778
  c->f[3]=c->f[1]; // 800EC77C
  {uint32_t ea=c->r[3]+0x000005CCu; WF32(ea,c->f[0]);} // 800EC780
  W8(c->r[3]+0x000005DCu,c->r[6]); // 800EC784
  W32(c->r[3]+0x000005D8u,c->r[6]); // 800EC788
  W32(c->r[3]+0x000005E0u,c->r[0]); // 800EC78C
  W8(c->r[3]+0x000005D4u,c->r[6]); // 800EC790
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800EC794
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800EC798
  c->ctr=c->r[12]; // 800EC79C
  if (true) { dispatch(c,c->ctr); return; } // 800EC7A0
}

// fn_800EC7A4
void f_800EC7A4(Ctx* __restrict c) {
  trace_call(0x800EC7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC7A4
  c->r[0]=c->lr; // 800EC7A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC7AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC7B0
  c->r[31]=c->r[3]|c->r[3]; // 800EC7B4
  c->lr=0x800EC7BCu; f_800EC754(c); // 800EC7B8
  c->r[3]=R32(c->r[31]+0x00000138u); // 800EC7BC
  c->r[30]=R32(c->r[3]+0x000000E8u); // 800EC7C0
  cmps(c,0,(int32_t)c->r[30],0); // 800EC7C4
  if (!crb(c,2)) { goto L_800EC7F0; } // 800EC7C8
  c->r[3]=0u+0x806D0000u; // 800EC7CC
  c->r[5]=0u+0x806D0000u; // 800EC7D0
  c->r[3]=c->r[3]+0x00004F70u; // 800EC7D4
  c->r[4]=0u+0x00000078u; // 800EC7D8
  c->r[5]=c->r[5]+0x00004F50u; // 800EC7DC
  c->r[6]=c->r[13]+0xFFFF8118u; // 800EC7E0
  c->r[7]=c->r[13]+0xFFFF84E8u; // 800EC7E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EC7E8
  c->lr=0x800EC7F0u; f_80484674(c); // 800EC7EC
L_800EC7F0:;
  c->r[0]=R32(c->r[30]+0x00000048u); // 800EC7F0
  cmps(c,0,(int32_t)c->r[0],0); // 800EC7F4
  if (crb(c,2)) { goto L_800EC804; } // 800EC7F8
  c->r[29]=c->r[30]+c->r[0]; // 800EC7FC
  goto L_800EC808; // 800EC800
L_800EC804:;
  c->r[29]=0u+0x00000000u; // 800EC804
L_800EC808:;
  c->r[30]=0u+0x80690000u; // 800EC808
  c->r[3]=c->r[29]|c->r[29]; // 800EC80C
  c->r[30]=c->r[30]+0xFFFFEC50u; // 800EC810
  c->r[4]=c->r[30]+0x00000001u; // 800EC814
  c->lr=0x800EC81Cu; f_803B393C(c); // 800EC818
  cmps(c,0,(int32_t)c->r[3],0); // 800EC81C
  if (crb(c,2)) { goto L_800EC838; } // 800EC820
  c->r[3]=c->r[29]|c->r[29]; // 800EC824
  c->r[4]=c->r[30]+0x0000000Du; // 800EC828
  c->lr=0x800EC830u; f_803B393C(c); // 800EC82C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC830
  if (!crb(c,2)) { goto L_800EC874; } // 800EC834
L_800EC838:;
  c->r[30]=0u+0x80690000u; // 800EC838
  c->r[3]=0u+0x00000001u; // 800EC83C
  c->r[30]=c->r[30]+0xFFFFEC50u; // 800EC840
  c->r[0]=0u+0x0000000Bu; // 800EC844
  W8(c->r[31]+0x000005D4u,c->r[3]); // 800EC848
  c->r[3]=c->r[31]+0x000000FCu; // 800EC84C
  c->r[4]=c->r[30]+0x00000019u; // 800EC850
  c->r[5]=0u+0x00000001u; // 800EC854
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC858
  c->lr=0x800EC860u; f_802E6904(c); // 800EC85C
  c->r[3]=c->r[31]+0x000000FCu; // 800EC860
  c->r[4]=c->r[30]+0x00000021u; // 800EC864
  c->r[5]=0u+0x00000000u; // 800EC868
  c->lr=0x800EC870u; f_802E6904(c); // 800EC86C
  goto L_800EC9B8; // 800EC870
L_800EC874:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC874
  c->r[4]=c->r[30]+0x0000002Bu; // 800EC878
  c->lr=0x800EC880u; f_803B393C(c); // 800EC87C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC880
  if (!crb(c,2)) { goto L_800EC894; } // 800EC884
  c->r[0]=0u+0x00000001u; // 800EC888
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC88C
  goto L_800EC9B0; // 800EC890
L_800EC894:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC894
  c->r[4]=c->r[30]+0x00000030u; // 800EC898
  c->lr=0x800EC8A0u; f_803B393C(c); // 800EC89C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC8A0
  if (!crb(c,2)) { goto L_800EC8B4; } // 800EC8A4
  c->r[0]=0u+0x00000002u; // 800EC8A8
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC8AC
  goto L_800EC9B0; // 800EC8B0
L_800EC8B4:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC8B4
  c->r[4]=c->r[30]+0x00000035u; // 800EC8B8
  c->lr=0x800EC8C0u; f_803B393C(c); // 800EC8BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC8C0
  if (!crb(c,2)) { goto L_800EC8D4; } // 800EC8C4
  c->r[0]=0u+0x00000003u; // 800EC8C8
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC8CC
  goto L_800EC9B0; // 800EC8D0
L_800EC8D4:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC8D4
  c->r[4]=c->r[30]+0x0000003Au; // 800EC8D8
  c->lr=0x800EC8E0u; f_803B393C(c); // 800EC8DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC8E0
  if (!crb(c,2)) { goto L_800EC8F4; } // 800EC8E4
  c->r[0]=0u+0x00000004u; // 800EC8E8
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC8EC
  goto L_800EC9B0; // 800EC8F0
L_800EC8F4:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC8F4
  c->r[4]=c->r[30]+0x0000003Fu; // 800EC8F8
  c->lr=0x800EC900u; f_803B393C(c); // 800EC8FC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC900
  if (!crb(c,2)) { goto L_800EC914; } // 800EC904
  c->r[0]=0u+0x00000005u; // 800EC908
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC90C
  goto L_800EC9B0; // 800EC910
L_800EC914:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC914
  c->r[4]=c->r[30]+0x00000044u; // 800EC918
  c->lr=0x800EC920u; f_803B393C(c); // 800EC91C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC920
  if (!crb(c,2)) { goto L_800EC934; } // 800EC924
  c->r[0]=0u+0x00000006u; // 800EC928
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC92C
  goto L_800EC9B0; // 800EC930
L_800EC934:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC934
  c->r[4]=c->r[30]+0x00000049u; // 800EC938
  c->lr=0x800EC940u; f_803B393C(c); // 800EC93C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC940
  if (!crb(c,2)) { goto L_800EC954; } // 800EC944
  c->r[0]=0u+0x00000007u; // 800EC948
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC94C
  goto L_800EC9B0; // 800EC950
L_800EC954:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC954
  c->r[4]=c->r[30]+0x0000004Eu; // 800EC958
  c->lr=0x800EC960u; f_803B393C(c); // 800EC95C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC960
  if (!crb(c,2)) { goto L_800EC974; } // 800EC964
  c->r[0]=0u+0x00000008u; // 800EC968
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC96C
  goto L_800EC9B0; // 800EC970
L_800EC974:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC974
  c->r[4]=c->r[30]+0x00000053u; // 800EC978
  c->lr=0x800EC980u; f_803B393C(c); // 800EC97C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC980
  if (!crb(c,2)) { goto L_800EC994; } // 800EC984
  c->r[0]=0u+0x00000009u; // 800EC988
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC98C
  goto L_800EC9B0; // 800EC990
L_800EC994:;
  c->r[3]=c->r[29]|c->r[29]; // 800EC994
  c->r[4]=c->r[30]+0x00000058u; // 800EC998
  c->lr=0x800EC9A0u; f_803B393C(c); // 800EC99C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC9A0
  if (!crb(c,2)) { goto L_800EC9B0; } // 800EC9A4
  c->r[0]=0u+0x0000000Au; // 800EC9A8
  W32(c->r[31]+0x000005D8u,c->r[0]); // 800EC9AC
L_800EC9B0:;
  c->r[0]=0u+0x00000001u; // 800EC9B0
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800EC9B4
L_800EC9B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC9B8
  c->r[4]=0u+0x00000000u; // 800EC9BC
  c->r[5]=0u+0x00000000u; // 800EC9C0
  c->r[6]=0u+0x00000000u; // 800EC9C4
  c->lr=0x800EC9CCu; f_8005F14C(c); // 800EC9C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC9CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC9D0
  c->lr=c->r[0]; // 800EC9D4
  c->r[1]=c->r[1]+0x00000020u; // 800EC9D8
  return; // 800EC9DC
}

// fn_800EC9E0
void f_800EC9E0(Ctx* __restrict c) {
  trace_call(0x800EC9E0u);
  return; // 800EC9E0
}

// fn_800EC9E4
void f_800EC9E4(Ctx* __restrict c) {
  trace_call(0x800EC9E4u);
  return; // 800EC9E4
}

// fn_800EC9E8
void f_800EC9E8(Ctx* __restrict c) {
  trace_call(0x800EC9E8u);
  return; // 800EC9E8
}

// fn_800EC9EC
void f_800EC9EC(Ctx* __restrict c) {
  trace_call(0x800EC9ECu);
  return; // 800EC9EC
}

// fn_800EC9F0
void f_800EC9F0(Ctx* __restrict c) {
  trace_call(0x800EC9F0u);
  return; // 800EC9F0
}

// fn_800EC9F4
void f_800EC9F4(Ctx* __restrict c) {
  trace_call(0x800EC9F4u);
  return; // 800EC9F4
}

// fn_800EC9F8
void f_800EC9F8(Ctx* __restrict c) {
  trace_call(0x800EC9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC9F8
  c->r[0]=c->lr; // 800EC9FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECA00
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECA04
  c->r[31]=0u+0x80690000u; // 800ECA08
  c->r[31]=c->r[31]+0xFFFFEC50u; // 800ECA0C
  c->r[29]=c->r[3]|c->r[3]; // 800ECA10
  c->r[30]=c->r[4]|c->r[4]; // 800ECA14
  c->r[3]=c->r[31]+0x0000005Du; // 800ECA18
  c->lr=0x800ECA20u; f_803B393C(c); // 800ECA1C
  cmps(c,0,(int32_t)c->r[3],0); // 800ECA20
  if (!crb(c,2)) { goto L_800ECA34; } // 800ECA24
  c->r[0]=0u+0x00000001u; // 800ECA28
  W8(c->r[29]+0x000005C4u,c->r[0]); // 800ECA2C
  goto L_800ECA84; // 800ECA30
L_800ECA34:;
  c->r[4]=c->r[30]|c->r[30]; // 800ECA34
  c->r[3]=c->r[31]+0x00000065u; // 800ECA38
  c->lr=0x800ECA40u; f_803B393C(c); // 800ECA3C
  cmps(c,0,(int32_t)c->r[3],0); // 800ECA40
  if (!crb(c,2)) { goto L_800ECA84; } // 800ECA44
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800ECA48
  c->r[4]=R32(c->r[29]+0x000005E0u); // 800ECA4C
  c->lr=0x800ECA54u; f_800C2EE0(c); // 800ECA50
  c->r[4]=c->r[3]|c->r[3]; // 800ECA54
  c->r[3]=c->r[29]|c->r[29]; // 800ECA58
  c->lr=0x800ECA60u; f_800ED510(c); // 800ECA5C
  cmps(c,0,(int32_t)c->r[3],-1); // 800ECA60
  c->r[4]=c->r[3]|c->r[3]; // 800ECA64
  if (crb(c,2)) { goto L_800ECA84; } // 800ECA68
  c->r[3]=c->r[29]|c->r[29]; // 800ECA6C
  c->r[5]=0u+0x00000001u; // 800ECA70
  c->lr=0x800ECA78u; f_80064744(c); // 800ECA74
  c->r[3]=R32(c->r[29]+0x000005E0u); // 800ECA78
  c->r[0]=c->r[3]+0x00000001u; // 800ECA7C
  W32(c->r[29]+0x000005E0u,c->r[0]); // 800ECA80
L_800ECA84:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECA84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECA88
  c->lr=c->r[0]; // 800ECA8C
  c->r[1]=c->r[1]+0x00000020u; // 800ECA90
  return; // 800ECA94
}

// fn_800ECA98
void f_800ECA98(Ctx* __restrict c) {
  trace_call(0x800ECA98u);
  c->r[7]=0u+0x80690000u; // 800ECA98
  c->r[6]=0u+0x80760000u; // 800ECA9C
  c->r[7]=c->r[7]+0xFFFFEC50u; // 800ECAA0
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECAA4
  c->r[5]=c->r[4]|c->r[4]; // 800ECAA8
  c->r[6]=c->r[6]+0xFFFF9CA8u; // 800ECAAC
  c->r[4]=c->r[7]+0x00000077u; // 800ECAB0
  f_8005FA84(c); return; // 800ECAB4
}

// fn_800ECAB8
void f_800ECAB8(Ctx* __restrict c) {
  trace_call(0x800ECAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECAB8
  c->r[0]=c->lr; // 800ECABC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ECAC0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800ECAC4
  c->r[31]=c->r[3]|c->r[3]; // 800ECAC8
  c->r[0]=R8(c->r[3]+0x000005D4u); // 800ECACC
  cmps(c,0,(int32_t)c->r[0],0); // 800ECAD0
  if (crb(c,2)) { goto L_800ECB50; } // 800ECAD4
  c->r[4]=0u+0x80690000u; // 800ECAD8
  c->r[5]=0u+0x00000000u; // 800ECADC
  c->r[4]=c->r[4]+0xFFFFEC50u; // 800ECAE0
  c->r[3]=c->r[3]+0x000000FCu; // 800ECAE4
  c->r[4]=c->r[4]+0x00000019u; // 800ECAE8
  c->lr=0x800ECAF0u; f_802E6904(c); // 800ECAEC
  c->r[5]=R32(c->r[31]+0x0000040Cu); // 800ECAF0
  c->r[0]=0u+0x00000001u; // 800ECAF4
  c->r[4]=c->r[31]|c->r[31]; // 800ECAF8
  c->r[3]=c->r[1]+0x00000010u; // 800ECAFC
  W8(c->r[5]+0x00000075u,c->r[0]); // 800ECB00
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800ECB04
  c->r[12]=R32(c->r[12]+0x00000134u); // 800ECB08
  c->ctr=c->r[12]; // 800ECB0C
  if (true) { c->lr=0x800ECB14u; dispatch(c,c->ctr); } // 800ECB10
  c->r[6]=R32(c->r[31]+0x00000504u); // 800ECB14
  c->r[3]=c->r[31]|c->r[31]; // 800ECB18
  c->r[0]=R32(c->r[31]+0x00000508u); // 800ECB1C
  c->r[4]=c->r[1]+0x00000008u; // 800ECB20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ECB24
  c->r[5]=c->r[1]+0x00000010u; // 800ECB28
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ECB2C
  c->lr=0x800ECB34u; f_800ED2CC(c); // 800ECB30
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 800ECB34
  c->r[0]=0u+0x00000000u; // 800ECB38
  c->r[3]=R32(c->r[4]+0x000000C4u); // 800ECB3C
  c->r[3]=rotl(c->r[3],0)&0xFFBFFFFFu; // 800ECB40
  c->r[3]=c->r[3]+0x00400000u; // 800ECB44
  W32(c->r[4]+0x000000C4u,c->r[3]); // 800ECB48
  W8(c->r[31]+0x000005D4u,c->r[0]); // 800ECB4C
L_800ECB50:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ECB50
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800ECB54
  c->lr=c->r[0]; // 800ECB58
  c->r[1]=c->r[1]+0x00000030u; // 800ECB5C
  return; // 800ECB60
}

// fn_800ECB64
void f_800ECB64(Ctx* __restrict c) {
  trace_call(0x800ECB64u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB64
  c->r[0]=c->lr; // 800ECB68
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ECB6C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECB70
  c->r[31]=c->r[1]|c->r[1]; // 800ECB74
  c->r[28]=c->r[3]|c->r[3]; // 800ECB78
  c->r[0]=R32(c->r[3]+0x000005C0u); // 800ECB7C
  cmps(c,0,(int32_t)c->r[0],1); // 800ECB80
  if (!crb(c,2)) { goto L_800ECC6C; } // 800ECB84
  c->r[0]=R32(c->r[3]+0x000005D8u); // 800ECB88
  cmpu(c,0,c->r[0],0x0000000Au); // 800ECB8C
  if (crb(c,1)) { goto L_800ECC6C; } // 800ECB90
  c->r[4]=0u+0x806E0000u; // 800ECB94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ECB98
  c->r[4]=c->r[4]+0xFFFF80E0u; // 800ECB9C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800ECBA0
  c->ctr=c->r[4]; // 800ECBA4
  if (true) { switch (c->ctr) { case 0x800ECBACu: goto L_800ECBAC; case 0x800ECBB4u: goto L_800ECBB4; case 0x800ECBBCu: goto L_800ECBBC; case 0x800ECBC4u: goto L_800ECBC4; case 0x800ECBD0u: goto L_800ECBD0; case 0x800ECBF0u: goto L_800ECBF0; case 0x800ECC6Cu: goto L_800ECC6C; default: break; } dispatch(c,c->ctr); return; } // 800ECBA8
L_800ECBAC:;
  c->lr=0x800ECBB0u; f_80094A38(c); // 800ECBAC
  goto L_800ECC74; // 800ECBB0
L_800ECBB4:;
  c->lr=0x800ECBB8u; f_80094A38(c); // 800ECBB4
  goto L_800ECC74; // 800ECBB8
L_800ECBBC:;
  c->lr=0x800ECBC0u; f_800ECC90(c); // 800ECBBC
  goto L_800ECC74; // 800ECBC0
L_800ECBC4:;
  c->r[3]=0u+0x00010000u; // 800ECBC4
  c->r[4]=c->r[3]+0x00001171u; // 800ECBC8
  goto L_800ECBD8; // 800ECBCC
L_800ECBD0:;
  c->r[3]=0u+0x00010000u; // 800ECBD0
  c->r[4]=c->r[3]+0x00001559u; // 800ECBD4
L_800ECBD8:;
  c->r[3]=c->r[28]|c->r[28]; // 800ECBD8
  c->r[5]=0u+0x00000001u; // 800ECBDC
  c->lr=0x800ECBE4u; f_80064744(c); // 800ECBE0
  c->r[3]=c->r[28]|c->r[28]; // 800ECBE4
  c->lr=0x800ECBECu; f_800ECC90(c); // 800ECBE8
  goto L_800ECC74; // 800ECBEC
L_800ECBF0:;
  c->r[4]=0u+0x00000000u; // 800ECBF0
  c->lr=0x800ECBF8u; f_8005E814(c); // 800ECBF4
  c->lr=0x800ECBFCu; f_800EC65C(c); // 800ECBF8
  c->r[4]=c->r[3]|c->r[3]; // 800ECBFC
  c->r[3]=c->r[28]|c->r[28]; // 800ECC00
  c->lr=0x800ECC08u; f_80062F4C(c); // 800ECC04
  c->r[0]=R8(c->r[28]+0x00000010u); // 800ECC08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ECC0C
  c->r[3]=c->r[28]+c->r[0]; // 800ECC10
  c->r[29]=R32(c->r[3]+0x00000014u); // 800ECC14
  cmps(c,0,(int32_t)c->r[29],0); // 800ECC18
  if (crb(c,2)) { goto L_800ECC44; } // 800ECC1C
  c->r[30]=0u+0x00000000u; // 800ECC20
  W32(c->r[31]+0x00000024u,c->r[1]); // 800ECC24
  W8(c->r[31]+0x00000008u,c->r[30]); // 800ECC28
  c->lr=0x800ECC30u; f_800EC65C(c); // 800ECC2C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800ECC30
  c->r[0]=c->r[13]+0xFFFF84ECu; // 800ECC34
  W32(c->r[29]+0x00000004u,c->r[0]); // 800ECC38
  W32(c->r[29]+0x00000008u,c->r[30]); // 800ECC3C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800ECC40
L_800ECC44:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800ECC44
  c->r[0]=0u+0x00000000u; // 800ECC48
  c->r[3]=c->r[28]|c->r[28]; // 800ECC4C
  c->r[4]=c->r[29]|c->r[29]; // 800ECC50
  W32(c->r[29]+0x00000008u,c->r[0]); // 800ECC54
  c->r[0]=R32(c->r[28]+0x00000004u); // 800ECC58
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800ECC5C
  c->lr=0x800ECC64u; f_8006306C(c); // 800ECC60
  c->r[3]=c->r[29]|c->r[29]; // 800ECC64
  goto L_800ECC74; // 800ECC68
L_800ECC6C:;
  c->r[3]=c->r[28]|c->r[28]; // 800ECC6C
  c->lr=0x800ECC74u; f_800ECC90(c); // 800ECC70
L_800ECC74:;
  c->r[10]=c->r[31]|c->r[31]; // 800ECC74
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECC78
  c->r[10]=R32(c->r[1]+0x00000000u); // 800ECC7C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800ECC80
  c->r[1]=c->r[10]|c->r[10]; // 800ECC84
  c->lr=c->r[0]; // 800ECC88
  return; // 800ECC8C
}

// fn_800ECC90
void f_800ECC90(Ctx* __restrict c) {
  trace_call(0x800ECC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC90
  c->r[0]=c->lr; // 800ECC94
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ECC98
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECC9C
  c->r[31]=c->r[1]|c->r[1]; // 800ECCA0
  c->r[28]=c->r[3]|c->r[3]; // 800ECCA4
  c->lr=0x800ECCACu; f_80062F1C(c); // 800ECCA8
  c->r[4]=c->r[3]|c->r[3]; // 800ECCAC
  c->r[3]=c->r[28]|c->r[28]; // 800ECCB0
  c->lr=0x800ECCB8u; f_80062F4C(c); // 800ECCB4
  c->r[0]=R8(c->r[28]+0x00000010u); // 800ECCB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ECCBC
  c->r[3]=c->r[28]+c->r[0]; // 800ECCC0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800ECCC4
  cmps(c,0,(int32_t)c->r[29],0); // 800ECCC8
  if (crb(c,2)) { goto L_800ECCF4; } // 800ECCCC
  c->r[30]=0u+0x00000000u; // 800ECCD0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800ECCD4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800ECCD8
  c->lr=0x800ECCE0u; f_80062F1C(c); // 800ECCDC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800ECCE0
  c->r[0]=c->r[13]+0xFFFF80E4u; // 800ECCE4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800ECCE8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800ECCEC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800ECCF0
L_800ECCF4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800ECCF4
  c->r[0]=0u+0x00000000u; // 800ECCF8
  c->r[3]=c->r[28]|c->r[28]; // 800ECCFC
  c->r[4]=c->r[29]|c->r[29]; // 800ECD00
  W32(c->r[29]+0x00000008u,c->r[0]); // 800ECD04
  c->r[0]=R32(c->r[28]+0x00000004u); // 800ECD08
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800ECD0C
  c->lr=0x800ECD14u; f_8006306C(c); // 800ECD10
  c->r[10]=c->r[31]|c->r[31]; // 800ECD14
  c->r[3]=c->r[29]|c->r[29]; // 800ECD18
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECD1C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800ECD20
  c->r[0]=R32(c->r[10]+0x00000004u); // 800ECD24
  c->r[1]=c->r[10]|c->r[10]; // 800ECD28
  c->lr=c->r[0]; // 800ECD2C
  return; // 800ECD30
}

// fn_800ECD34
void f_800ECD34(Ctx* __restrict c) {
  trace_call(0x800ECD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD34
  c->r[0]=c->lr; // 800ECD38
  W32(c->r[1]+0x00000054u,c->r[0]); // 800ECD3C
  c->r[11]=c->r[1]+0x00000050u; // 800ECD40
  c->lr=0x800ECD48u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ECD44
  c->r[4]=R32(c->r[3]+0x00000004u); // 800ECD48
  c->r[29]=c->r[3]|c->r[3]; // 800ECD4C
  cmps(c,0,(int32_t)c->r[4],0); // 800ECD50
  if (crb(c,2)) { goto L_800ECD60; } // 800ECD54
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ECD58
  goto L_800ECD64; // 800ECD5C
L_800ECD60:;
  c->r[0]=0u+0x00000000u; // 800ECD60
L_800ECD64:;
  cmps(c,0,(int32_t)c->r[0],0); // 800ECD64
  if (!crb(c,2)) { goto L_800ECD9C; } // 800ECD68
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800ECD6C
  c->r[4]=0u+0x00000000u; // 800ECD70
  c->lr=0x800ECD78u; f_800C2EE0(c); // 800ECD74
  c->r[4]=c->r[3]|c->r[3]; // 800ECD78
  c->r[3]=c->r[29]|c->r[29]; // 800ECD7C
  c->lr=0x800ECD84u; f_800ED510(c); // 800ECD80
  cmps(c,0,(int32_t)c->r[3],-1); // 800ECD84
  c->r[4]=c->r[3]|c->r[3]; // 800ECD88
  if (crb(c,2)) { goto L_800ECD9C; } // 800ECD8C
  c->r[3]=c->r[29]|c->r[29]; // 800ECD90
  c->r[5]=0u+0x00000001u; // 800ECD94
  c->lr=0x800ECD9Cu; f_80064744(c); // 800ECD98
L_800ECD9C:;
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800ECD9C
  c->r[3]=c->r[1]+0x0000002Cu; // 800ECDA0
  c->lr=0x800ECDA8u; f_800C2FB8(c); // 800ECDA4
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800ECDA8
  c->r[3]=c->r[1]+0x00000020u; // 800ECDAC
  c->lr=0x800ECDB4u; f_800C2E48(c); // 800ECDB0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECDB4
  c->r[0]=0u+0x00000000u; // 800ECDB8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECDBC
  fcmp(c,0,c->f[1],c->f[0]); // 800ECDC0
  if (!crb(c,2)) { goto L_800ECDEC; } // 800ECDC4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECDC8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECDCC
  fcmp(c,0,c->f[1],c->f[0]); // 800ECDD0
  if (!crb(c,2)) { goto L_800ECDEC; } // 800ECDD4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECDD8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECDDC
  fcmp(c,0,c->f[1],c->f[0]); // 800ECDE0
  if (!crb(c,2)) { goto L_800ECDEC; } // 800ECDE4
  c->r[0]=0u+0x00000001u; // 800ECDE8
L_800ECDEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800ECDEC
  if (crb(c,2)) { goto L_800ECE10; } // 800ECDF0
  c->r[3]=c->r[29]+0x00000354u; // 800ECDF4
  c->lr=0x800ECDFCu; f_800667AC(c); // 800ECDF8
  cmps(c,0,(int32_t)c->r[3],0); // 800ECDFC
  if (crb(c,2)) { goto L_800ECEC8; } // 800ECE00
  c->r[3]=c->r[29]|c->r[29]; // 800ECE04
  c->lr=0x800ECE0Cu; f_800ECC90(c); // 800ECE08
  goto L_800ECEC8; // 800ECE0C
L_800ECE10:;
  c->r[3]=R32(c->r[29]+0x00000424u); // 800ECE10
  c->r[4]=c->r[1]+0x0000002Cu; // 800ECE14
  {uint32_t ea=c->r[2]+0xFFFFA6D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECE18
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECE1C
  c->lr=0x800ECE24u; f_800C43D0(c); // 800ECE20
  c->r[30]=R32(c->r[29]+0x0000041Cu); // 800ECE24
  c->r[3]=c->r[1]+0x00000008u; // 800ECE28
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECE2C
  c->lr=0x800ECE34u; f_800C998C(c); // 800ECE30
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 800ECE34
  c->r[31]=c->r[3]|c->r[3]; // 800ECE38
  c->r[4]=c->r[29]|c->r[29]; // 800ECE3C
  c->r[3]=c->r[1]+0x00000014u; // 800ECE40
  c->r[12]=R32(c->r[12]+0x00000134u); // 800ECE44
  c->ctr=c->r[12]; // 800ECE48
  if (true) { c->lr=0x800ECE50u; dispatch(c,c->ctr); } // 800ECE4C
  c->r[3]=c->r[30]|c->r[30]; // 800ECE50
  c->r[5]=c->r[31]|c->r[31]; // 800ECE54
  c->r[4]=c->r[1]+0x00000014u; // 800ECE58
  c->lr=0x800ECE60u; f_800C2D1C(c); // 800ECE5C
  cmps(c,0,(int32_t)c->r[3],0); // 800ECE60
  if (crb(c,2)) { goto L_800ECEB0; } // 800ECE64
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800ECE68
  c->r[4]=0u+0x00000000u; // 800ECE6C
  c->lr=0x800ECE74u; f_800C2F24(c); // 800ECE70
  cmps(c,0,(int32_t)c->r[3],0); // 800ECE74
  if (crb(c,2)) { goto L_800ECE98; } // 800ECE78
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800ECE7C
  c->r[4]=0u+0x00000000u; // 800ECE80
  c->lr=0x800ECE88u; f_800C2F24(c); // 800ECE84
  c->r[4]=c->r[3]|c->r[3]; // 800ECE88
  c->r[3]=c->r[29]|c->r[29]; // 800ECE8C
  c->r[5]=0u+0x00000001u; // 800ECE90
  c->lr=0x800ECE98u; f_80064744(c); // 800ECE94
L_800ECE98:;
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800ECE98
  c->r[0]=R8(c->r[3]+0x00000015u); // 800ECE9C
  cmps(c,0,(int32_t)c->r[0],0); // 800ECEA0
  if (crb(c,2)) { goto L_800ECEB0; } // 800ECEA4
  c->r[3]=c->r[29]|c->r[29]; // 800ECEA8
  c->lr=0x800ECEB0u; f_800ECC90(c); // 800ECEAC
L_800ECEB0:;
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800ECEB0
  c->r[0]=R8(c->r[3]+0x00000015u); // 800ECEB4
  cmps(c,0,(int32_t)c->r[0],0); // 800ECEB8
  if (crb(c,2)) { goto L_800ECEC8; } // 800ECEBC
  c->r[3]=c->r[29]|c->r[29]; // 800ECEC0
  c->lr=0x800ECEC8u; f_800ECC90(c); // 800ECEC4
L_800ECEC8:;
  c->r[11]=c->r[1]+0x00000050u; // 800ECEC8
  c->lr=0x800ECED0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ECECC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800ECED0
  c->lr=c->r[0]; // 800ECED4
  c->r[1]=c->r[1]+0x00000050u; // 800ECED8
  return; // 800ECEDC
}

// fn_800ECEE0
void f_800ECEE0(Ctx* __restrict c) {
  trace_call(0x800ECEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECEE0
  c->r[0]=c->lr; // 800ECEE4
  c->r[4]=0u+0x00000002u; // 800ECEE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ECEEC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800ECEF0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800ECEF4
  c->r[30]=c->r[3]|c->r[3]; // 800ECEF8
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800ECEFC
  c->lr=0x800ECF04u; f_800C2F68(c); // 800ECF00
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ECF04
  fcmp(c,0,c->f[1],c->f[0]); // 800ECF08
  if (!crb(c,1)) { goto L_800ECF20; } // 800ECF0C
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ECF10
  c->r[4]=0u+0x00000002u; // 800ECF14
  c->lr=0x800ECF1Cu; f_800C2F68(c); // 800ECF18
  {uint32_t ea=c->r[30]+0x000005CCu; WF32(ea,c->f[1]);} // 800ECF1C
L_800ECF20:;
  c->r[4]=c->r[30]|c->r[30]; // 800ECF20
  c->r[3]=c->r[1]+0x00000020u; // 800ECF24
  c->lr=0x800ECF2Cu; f_800ED154(c); // 800ECF28
  c->r[0]=R32(c->r[30]+0x000005C8u); // 800ECF2C
  cmps(c,0,(int32_t)c->r[0],-1); // 800ECF30
  if (!crb(c,2)) { goto L_800ECFA8; } // 800ECF34
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ECF38
  c->r[4]=0u+0x00000000u; // 800ECF3C
  c->lr=0x800ECF44u; f_800C2EE0(c); // 800ECF40
  c->r[31]=c->r[3]|c->r[3]; // 800ECF44
  c->r[3]=0u+0x80690000u; // 800ECF48
  c->r[4]=c->r[31]|c->r[31]; // 800ECF4C
  c->r[3]=c->r[3]+0xFFFFEC50u; // 800ECF50
  c->lr=0x800ECF58u; f_803B393C(c); // 800ECF54
  cmps(c,0,(int32_t)c->r[3],0); // 800ECF58
  if (crb(c,2)) { goto L_800ED008; } // 800ECF5C
  c->r[0]=0u+0x00000000u; // 800ECF60
  W8(c->r[1]+0x00000010u,c->r[0]); // 800ECF64
  c->r[3]=c->r[1]+0x00000010u; // 800ECF68
  c->lr=0x800ECF70u; f_800474F4(c); // 800ECF6C
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECF70
  c->r[4]=c->r[31]|c->r[31]; // 800ECF74
  c->r[5]=c->r[1]+0x00000020u; // 800ECF78
  c->r[6]=0u+0xFFFFFFFFu; // 800ECF7C
  c->r[7]=0u+0x00000000u; // 800ECF80
  c->r[8]=0u+0x00000000u; // 800ECF84
  c->r[9]=0u+0x00000001u; // 800ECF88
  c->lr=0x800ECF90u; f_8004BFE0(c); // 800ECF8C
  W32(c->r[30]+0x000005C8u,c->r[3]); // 800ECF90
  c->r[4]=0u+0x00000001u; // 800ECF94
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ECF98
  c->lr=0x800ECFA0u; f_800C2F24(c); // 800ECF9C
  W32(c->r[30]+0x000005D0u,c->r[3]); // 800ECFA0
  goto L_800ED008; // 800ECFA4
L_800ECFA8:;
  c->r[0]=R8(c->r[30]+0x000005C4u); // 800ECFA8
  cmps(c,0,(int32_t)c->r[0],0); // 800ECFAC
  if (crb(c,2)) { goto L_800ECFEC; } // 800ECFB0
  c->r[0]=0u+0x00000000u; // 800ECFB4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800ECFB8
  c->r[3]=c->r[1]+0x0000000Cu; // 800ECFBC
  c->lr=0x800ECFC4u; f_800474F4(c); // 800ECFC0
  c->r[4]=R32(c->r[30]+0x000005C8u); // 800ECFC4
  c->r[5]=R32(c->r[30]+0x000005D0u); // 800ECFC8
  c->lr=0x800ECFD0u; f_8004C2E0(c); // 800ECFCC
  c->r[3]=c->r[30]|c->r[30]; // 800ECFD0
  c->lr=0x800ECFD8u; f_800ECC90(c); // 800ECFD4
  c->r[3]=c->r[30]|c->r[30]; // 800ECFD8
  c->lr=0x800ECFE0u; f_800EC754(c); // 800ECFDC
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ECFE0
  c->lr=0x800ECFE8u; f_800C2DF8(c); // 800ECFE4
  goto L_800ED0A8; // 800ECFE8
L_800ECFEC:;
  c->r[0]=0u+0x00000000u; // 800ECFEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800ECFF0
  c->r[3]=c->r[1]+0x00000008u; // 800ECFF4
  c->lr=0x800ECFFCu; f_800474F4(c); // 800ECFF8
  c->r[4]=R32(c->r[30]+0x000005C8u); // 800ECFFC
  c->r[5]=c->r[1]+0x00000020u; // 800ED000
  c->lr=0x800ED008u; f_8004C348(c); // 800ED004
L_800ED008:;
  c->r[0]=R8(c->r[30]+0x000005DCu); // 800ED008
  cmps(c,0,(int32_t)c->r[0],0); // 800ED00C
  if (crb(c,2)) { goto L_800ED040; } // 800ED010
  c->r[3]=c->r[30]|c->r[30]; // 800ED014
  c->r[4]=c->r[1]+0x00000020u; // 800ED018
  c->lr=0x800ED020u; f_800ED0C0(c); // 800ED01C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED020
  if (crb(c,2)) { goto L_800ED0A8; } // 800ED024
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ED028
  c->lr=0x800ED030u; f_800C2DF8(c); // 800ED02C
  c->r[0]=0u+0x00000000u; // 800ED030
  W8(c->r[30]+0x000005C4u,c->r[0]); // 800ED034
  W8(c->r[30]+0x000005DCu,c->r[0]); // 800ED038
  goto L_800ED0A8; // 800ED03C
L_800ED040:;
  c->r[31]=R32(c->r[30]+0x0000041Cu); // 800ED040
  c->r[3]=c->r[1]+0x00000014u; // 800ED044
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED048
  c->lr=0x800ED050u; f_800C998C(c); // 800ED04C
  c->r[5]=c->r[3]|c->r[3]; // 800ED050
  c->r[3]=c->r[31]|c->r[31]; // 800ED054
  c->r[4]=c->r[1]+0x00000020u; // 800ED058
  c->lr=0x800ED060u; f_800C2D1C(c); // 800ED05C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED060
  if (crb(c,2)) { goto L_800ED08C; } // 800ED064
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ED068
  c->r[0]=R8(c->r[3]+0x00000015u); // 800ED06C
  cmps(c,0,(int32_t)c->r[0],0); // 800ED070
  if (crb(c,2)) { goto L_800ED08C; } // 800ED074
  c->lr=0x800ED07Cu; f_800C2DF8(c); // 800ED078
  c->r[3]=0u+0x00000000u; // 800ED07C
  c->r[0]=0u+0x00000001u; // 800ED080
  W8(c->r[30]+0x000005C4u,c->r[3]); // 800ED084
  W8(c->r[30]+0x000005DCu,c->r[0]); // 800ED088
L_800ED08C:;
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800ED08C
  c->r[0]=R8(c->r[3]+0x00000015u); // 800ED090
  cmps(c,0,(int32_t)c->r[0],0); // 800ED094
  if (crb(c,2)) { goto L_800ED0A8; } // 800ED098
  c->lr=0x800ED0A0u; f_800C2DF8(c); // 800ED09C
  c->r[0]=0u+0x00000001u; // 800ED0A0
  W8(c->r[30]+0x000005DCu,c->r[0]); // 800ED0A4
L_800ED0A8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800ED0A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800ED0AC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800ED0B0
  c->lr=c->r[0]; // 800ED0B4
  c->r[1]=c->r[1]+0x00000040u; // 800ED0B8
  return; // 800ED0BC
}

// fn_800ED0C0
void f_800ED0C0(Ctx* __restrict c) {
  trace_call(0x800ED0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED0C0
  c->r[0]=c->lr; // 800ED0C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ED0C8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800ED0CC
  c->r[31]=c->r[4]|c->r[4]; // 800ED0D0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800ED0D4
  c->r[30]=c->r[3]|c->r[3]; // 800ED0D8
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800ED0DC
  c->r[3]=c->r[1]+0x00000014u; // 800ED0E0
  c->lr=0x800ED0E8u; f_800C2E48(c); // 800ED0E4
  c->r[3]=c->r[1]+0x00000014u; // 800ED0E8
  c->r[4]=c->r[1]+0x00000008u; // 800ED0EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800ED0F0
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,1,ea,0,0);} // 800ED0F4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800ED0F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800ED0FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800ED100
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,1,0);} // 800ED104
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800ED108
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800ED10C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800ED110
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800ED114
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED118
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800ED11C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800ED120
  {uint32_t ea=c->r[30]+0x000005CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED124
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800ED128
  fcmp(c,0,c->f[1],c->f[0]); // 800ED12C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800ED130
  c->r[3]=c->cr; // 800ED134
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800ED138
  c->r[30]=R32(c->r[1]+0x00000028u); // 800ED13C
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800ED140
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ED144
  c->lr=c->r[0]; // 800ED148
  c->r[1]=c->r[1]+0x00000030u; // 800ED14C
  return; // 800ED150
}

// fn_800ED154
void f_800ED154(Ctx* __restrict c) {
  trace_call(0x800ED154u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED154
  c->r[0]=c->lr; // 800ED158
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800ED15C
  c->r[11]=c->r[1]+0x000000B0u; // 800ED160
  c->lr=0x800ED168u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED164
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 800ED168
  c->r[29]=c->r[3]|c->r[3]; // 800ED16C
  c->r[30]=c->r[4]|c->r[4]; // 800ED170
  c->r[3]=c->r[1]+0x0000005Cu; // 800ED174
  c->r[12]=R32(c->r[12]+0x00000134u); // 800ED178
  c->ctr=c->r[12]; // 800ED17C
  if (true) { c->lr=0x800ED184u; dispatch(c,c->ctr); } // 800ED180
  c->r[0]=R8(c->r[30]+0x000005DCu); // 800ED184
  cmps(c,0,(int32_t)c->r[0],0); // 800ED188
  if (crb(c,2)) { goto L_800ED1B8; } // 800ED18C
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800ED190
  c->r[3]=c->r[1]+0x0000002Cu; // 800ED194
  c->lr=0x800ED19Cu; f_800C2E48(c); // 800ED198
  c->r[3]=c->r[1]+0x00000038u; // 800ED19C
  c->r[4]=c->r[1]+0x0000002Cu; // 800ED1A0
  c->lr=0x800ED1A8u; f_8005CD7C(c); // 800ED1A4
  c->r[4]=c->r[3]|c->r[3]; // 800ED1A8
  c->r[3]=c->r[1]+0x00000050u; // 800ED1AC
  c->lr=0x800ED1B4u; f_8005DC84(c); // 800ED1B0
  goto L_800ED1DC; // 800ED1B4
L_800ED1B8:;
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800ED1B8
  c->r[3]=c->r[1]+0x00000014u; // 800ED1BC
  c->lr=0x800ED1C4u; f_800C2FB8(c); // 800ED1C0
  c->r[3]=c->r[1]+0x00000020u; // 800ED1C4
  c->r[4]=c->r[1]+0x00000014u; // 800ED1C8
  c->lr=0x800ED1D0u; f_8005CD7C(c); // 800ED1CC
  c->r[4]=c->r[3]|c->r[3]; // 800ED1D0
  c->r[3]=c->r[1]+0x00000050u; // 800ED1D4
  c->lr=0x800ED1DCu; f_8005DC84(c); // 800ED1D8
L_800ED1DC:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED1DC
  c->r[3]=c->r[1]+0x00000008u; // 800ED1E0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED1E4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 800ED1E8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED1EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800ED1F0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ED1F4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED1F8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 800ED1FC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800ED200
  c->lr=0x800ED208u; f_8005FD70(c); // 800ED204
  c->r[31]=c->r[3]|c->r[3]; // 800ED208
  c->r[5]=0u+0x806A0000u; // 800ED20C
  c->r[4]=c->r[31]|c->r[31]; // 800ED210
  c->r[5]=c->r[5]+0x00000AA8u; // 800ED214
  c->lr=0x800ED21Cu; f_8030E0BC(c); // 800ED218
  c->r[4]=c->r[31]|c->r[31]; // 800ED21C
  c->r[3]=c->r[1]+0x00000044u; // 800ED220
  c->lr=0x800ED228u; f_8005CD7C(c); // 800ED224
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED228
  c->r[3]=c->r[29]|c->r[29]; // 800ED22C
  c->f[2]=c->f[1]; // 800ED230
  c->f[3]=c->f[1]; // 800ED234
  c->lr=0x800ED23Cu; f_8005FD70(c); // 800ED238
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED23C
  c->r[3]=c->r[30]+0x000001B8u; // 800ED240
  {uint32_t ea=c->r[30]+0x000005CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED244
  c->r[4]=c->r[1]+0x00000068u; // 800ED248
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED24C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800ED250
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800ED254
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED258
  {uint32_t ea=c->r[30]+0x000005CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED25C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED260
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800ED264
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800ED268
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED26C
  {uint32_t ea=c->r[30]+0x000005CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED270
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED274
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800ED278
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800ED27C
  c->lr=0x800ED284u; f_80382F2C(c); // 800ED280
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED284
  c->r[3]=c->r[30]|c->r[30]; // 800ED288
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800ED28C
  c->r[4]=c->r[1]+0x00000068u; // 800ED290
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED294
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800ED298
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED29C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800ED2A0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800ED2A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ED2A8
  c->ctr=c->r[12]; // 800ED2AC
  if (true) { c->lr=0x800ED2B4u; dispatch(c,c->ctr); } // 800ED2B0
  c->r[11]=c->r[1]+0x000000B0u; // 800ED2B4
  c->lr=0x800ED2BCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED2B8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800ED2BC
  c->lr=c->r[0]; // 800ED2C0
  c->r[1]=c->r[1]+0x000000B0u; // 800ED2C4
  return; // 800ED2C8
}

// fn_800ED2CC
void f_800ED2CC(Ctx* __restrict c) {
  trace_call(0x800ED2CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED2CC
  c->r[0]=c->lr; // 800ED2D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800ED2D4
  c->r[11]=c->r[1]+0x00000050u; // 800ED2D8
  c->lr=0x800ED2E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED2DC
  c->r[31]=0u+0x80690000u; // 800ED2E0
  c->r[6]=0u+0x80740000u; // 800ED2E4
  c->r[31]=c->r[31]+0xFFFFEC50u; // 800ED2E8
  c->r[27]=c->r[3]|c->r[3]; // 800ED2EC
  c->r[28]=c->r[4]|c->r[4]; // 800ED2F0
  c->r[29]=c->r[5]|c->r[5]; // 800ED2F4
  c->r[3]=c->r[6]+0x00004FD0u; // 800ED2F8
  c->r[4]=c->r[31]+0x00000086u; // 800ED2FC
  c->r[5]=c->r[31]+0x00000093u; // 800ED300
  c->r[6]=0u+0x00000000u; // 800ED304
  c->lr=0x800ED30Cu; f_8005A7B0(c); // 800ED308
  c->r[30]=c->r[3]|c->r[3]; // 800ED30C
  c->lr=0x800ED314u; f_8033FE4C(c); // 800ED310
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED314
  c->r[4]=c->r[30]|c->r[30]; // 800ED318
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800ED31C
  c->f[2]=c->f[1]; // 800ED320
  c->lr=0x800ED328u; f_80332194(c); // 800ED324
  c->r[3]=R32(c->r[27]+0x0000041Cu); // 800ED328
  c->r[4]=0u+0x00000000u; // 800ED32C
  c->lr=0x800ED334u; f_800C2EE0(c); // 800ED330
  c->r[30]=c->r[3]|c->r[3]; // 800ED334
  c->r[4]=c->r[31]|c->r[31]; // 800ED338
  c->lr=0x800ED340u; f_803B393C(c); // 800ED33C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED340
  if (!crb(c,2)) { goto L_800ED364; } // 800ED344
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800ED348
  c->r[5]=c->r[29]|c->r[29]; // 800ED34C
  c->r[4]=c->r[31]+0x000000B0u; // 800ED350
  c->r[6]=0u+0x00000000u; // 800ED354
  c->r[7]=0u+0x00000000u; // 800ED358
  c->lr=0x800ED360u; f_80065FDC(c); // 800ED35C
  goto L_800ED37C; // 800ED360
L_800ED364:;
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800ED364
  c->r[4]=c->r[30]|c->r[30]; // 800ED368
  c->r[5]=c->r[29]|c->r[29]; // 800ED36C
  c->r[6]=0u+0x00000000u; // 800ED370
  c->r[7]=0u+0x00000000u; // 800ED374
  c->lr=0x800ED37Cu; f_80065FDC(c); // 800ED378
L_800ED37C:;
  c->r[3]=R32(c->r[27]+0x0000041Cu); // 800ED37C
  c->r[4]=0u+0x00000001u; // 800ED380
  c->lr=0x800ED388u; f_800C2EE0(c); // 800ED384
  c->r[31]=0u+0x80690000u; // 800ED388
  c->r[30]=c->r[3]|c->r[3]; // 800ED38C
  c->r[4]=c->r[31]+0xFFFFEC50u; // 800ED390
  c->lr=0x800ED398u; f_803B393C(c); // 800ED394
  cmps(c,0,(int32_t)c->r[3],0); // 800ED398
  if (!crb(c,2)) { goto L_800ED3D8; } // 800ED39C
  c->r[0]=0u+0x00000000u; // 800ED3A0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800ED3A4
  c->r[3]=c->r[1]+0x0000000Cu; // 800ED3A8
  c->lr=0x800ED3B0u; f_800474F4(c); // 800ED3AC
  c->r[4]=c->r[31]+0xFFFFEC50u; // 800ED3B0
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED3B4
  c->r[5]=c->r[29]|c->r[29]; // 800ED3B8
  c->r[6]=0u+0xFFFFFFFFu; // 800ED3BC
  c->r[4]=c->r[4]+0x000000BBu; // 800ED3C0
  c->r[7]=0u+0x00000000u; // 800ED3C4
  c->r[8]=0u+0x00000000u; // 800ED3C8
  c->r[9]=0u+0x00000001u; // 800ED3CC
  c->lr=0x800ED3D4u; f_8004BFE0(c); // 800ED3D0
  goto L_800ED408; // 800ED3D4
L_800ED3D8:;
  c->r[0]=0u+0x00000000u; // 800ED3D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800ED3DC
  c->r[3]=c->r[1]+0x00000008u; // 800ED3E0
  c->lr=0x800ED3E8u; f_800474F4(c); // 800ED3E4
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED3E8
  c->r[4]=c->r[30]|c->r[30]; // 800ED3EC
  c->r[5]=c->r[29]|c->r[29]; // 800ED3F0
  c->r[6]=0u+0xFFFFFFFFu; // 800ED3F4
  c->r[7]=0u+0x00000000u; // 800ED3F8
  c->r[8]=0u+0x00000000u; // 800ED3FC
  c->r[9]=0u+0x00000001u; // 800ED400
  c->lr=0x800ED408u; f_8004BFE0(c); // 800ED404
L_800ED408:;
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 800ED408
  c->r[4]=c->r[27]|c->r[27]; // 800ED40C
  c->r[3]=c->r[1]+0x00000024u; // 800ED410
  c->r[12]=R32(c->r[12]+0x00000134u); // 800ED414
  c->ctr=c->r[12]; // 800ED418
  if (true) { c->lr=0x800ED420u; dispatch(c,c->ctr); } // 800ED41C
  c->r[5]=R32(c->r[28]+0x00000000u); // 800ED420
  c->r[3]=c->r[1]+0x00000018u; // 800ED424
  c->r[0]=R32(c->r[28]+0x00000004u); // 800ED428
  c->r[4]=c->r[1]+0x00000024u; // 800ED42C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED430
  W32(c->r[1]+0x00000010u,c->r[5]); // 800ED434
  c->lr=0x800ED43Cu; f_8005CD7C(c); // 800ED438
  c->r[5]=c->r[3]|c->r[3]; // 800ED43C
  c->r[3]=c->r[27]|c->r[27]; // 800ED440
  c->r[4]=c->r[1]+0x00000010u; // 800ED444
  c->lr=0x800ED44Cu; f_800ED464(c); // 800ED448
  c->r[11]=c->r[1]+0x00000050u; // 800ED44C
  c->lr=0x800ED454u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED450
  c->r[0]=R32(c->r[1]+0x00000054u); // 800ED454
  c->lr=c->r[0]; // 800ED458
  c->r[1]=c->r[1]+0x00000050u; // 800ED45C
  return; // 800ED460
}

// fn_800ED464
void f_800ED464(Ctx* __restrict c) {
  trace_call(0x800ED464u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED464
  c->r[0]=c->lr; // 800ED468
  W32(c->r[1]+0x00000054u,c->r[0]); // 800ED46C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800ED470
  c->r[31]=c->r[5]|c->r[5]; // 800ED474
  W32(c->r[1]+0x00000048u,c->r[30]); // 800ED478
  c->r[30]=c->r[4]|c->r[4]; // 800ED47C
  c->r[4]=0u+0x00000002u; // 800ED480
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800ED484
  c->lr=0x800ED48Cu; f_800C2F68(c); // 800ED488
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED48C
  fcmp(c,0,c->f[2],c->f[1]); // 800ED490
  if (!crb(c,2)) { goto L_800ED4A0; } // 800ED494
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED498
  goto L_800ED4B0; // 800ED49C
L_800ED4A0:;
  {uint32_t ea=c->r[2]+0xFFFFA6DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED4A0
  fcmp(c,0,c->f[0],c->f[1]); // 800ED4A4
  if (!crb(c,2)) { goto L_800ED4B0; } // 800ED4A8
  c->f[1]=c->f[2]; // 800ED4AC
L_800ED4B0:;
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED4B0
  fcmp(c,0,c->f[1],c->f[0]); // 800ED4B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800ED4B8
  if (crb(c,2)) { goto L_800ED4F8; } // 800ED4BC
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED4C0
  c->r[5]=c->r[31]|c->r[31]; // 800ED4C4
  c->r[6]=R32(c->r[30]+0x00000000u); // 800ED4C8
  c->r[3]=c->r[1]+0x00000010u; // 800ED4CC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800ED4D0
  c->f[3]=c->f[2]; // 800ED4D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED4D8
  c->r[4]=c->r[1]+0x00000008u; // 800ED4DC
  c->r[7]=0u+0x00000000u; // 800ED4E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800ED4E4
  c->r[6]=0u+0x00000003u; // 800ED4E8
  c->lr=0x800ED4F0u; f_801B7A08(c); // 800ED4EC
  c->r[3]=c->r[1]+0x00000010u; // 800ED4F0
  c->lr=0x800ED4F8u; f_801B7E54(c); // 800ED4F4
L_800ED4F8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800ED4F8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800ED4FC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800ED500
  c->lr=c->r[0]; // 800ED504
  c->r[1]=c->r[1]+0x00000050u; // 800ED508
  return; // 800ED50C
}

// fn_800ED510
void f_800ED510(Ctx* __restrict c) {
  trace_call(0x800ED510u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED510
  c->r[0]=c->lr; // 800ED514
  W32(c->r[1]+0x00000124u,c->r[0]); // 800ED518
  c->r[3]=c->r[1]+0x00000008u; // 800ED51C
  {uint32_t ea=c->r[1]+0x00000114u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED520
  c->lr=0x800ED528u; f_803B37C0(c); // 800ED524
  c->r[30]=0u+0x80690000u; // 800ED528
  c->r[3]=c->r[1]+0x00000008u; // 800ED52C
  c->r[30]=c->r[30]+0xFFFFEC50u; // 800ED530
  c->r[4]=c->r[30]+0x000000C1u; // 800ED534
  c->lr=0x800ED53Cu; f_803B4154(c); // 800ED538
  cmps(c,0,(int32_t)c->r[3],0); // 800ED53C
  c->r[29]=c->r[3]|c->r[3]; // 800ED540
  if (!crb(c,2)) { goto L_800ED550; } // 800ED544
  c->r[3]=0u+0xFFFFFFFFu; // 800ED548
  goto L_800ED5F4; // 800ED54C
L_800ED550:;
  c->r[4]=c->r[30]+0x000000C1u; // 800ED550
  c->r[3]=0u+0x00000000u; // 800ED554
  c->lr=0x800ED55Cu; f_803B4154(c); // 800ED558
  cmps(c,0,(int32_t)c->r[3],0); // 800ED55C
  if (!crb(c,2)) { goto L_800ED56C; } // 800ED560
  c->r[3]=0u+0xFFFFFFFFu; // 800ED564
  goto L_800ED5F4; // 800ED568
L_800ED56C:;
  c->lr=0x800ED570u; f_803B613C(c); // 800ED56C
  c->r[31]=c->r[3]|c->r[3]; // 800ED570
  c->r[3]=c->r[29]|c->r[29]; // 800ED574
  c->r[4]=c->r[30]+0x000000C3u; // 800ED578
  c->lr=0x800ED580u; f_803B393C(c); // 800ED57C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED580
  if (!crb(c,2)) { goto L_800ED594; } // 800ED584
  c->r[3]=c->r[31]+0x00010000u; // 800ED588
  c->r[3]=c->r[3]+0x00007AE8u; // 800ED58C
  goto L_800ED5F4; // 800ED590
L_800ED594:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED594
  c->r[4]=c->r[30]+0x000000C8u; // 800ED598
  c->lr=0x800ED5A0u; f_803B393C(c); // 800ED59C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED5A0
  if (!crb(c,2)) { goto L_800ED5B4; } // 800ED5A4
  c->r[3]=c->r[31]+0x00010000u; // 800ED5A8
  c->r[3]=c->r[3]+0x00007318u; // 800ED5AC
  goto L_800ED5F4; // 800ED5B0
L_800ED5B4:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED5B4
  c->r[4]=c->r[30]+0x000000CDu; // 800ED5B8
  c->lr=0x800ED5C0u; f_803B393C(c); // 800ED5BC
  cmps(c,0,(int32_t)c->r[3],0); // 800ED5C0
  if (!crb(c,2)) { goto L_800ED5D4; } // 800ED5C4
  c->r[3]=c->r[31]+0x00010000u; // 800ED5C8
  c->r[3]=c->r[3]+0x00007AEDu; // 800ED5CC
  goto L_800ED5F4; // 800ED5D0
L_800ED5D4:;
  c->r[3]=c->r[29]|c->r[29]; // 800ED5D4
  c->r[4]=c->r[30]+0x000000D2u; // 800ED5D8
  c->lr=0x800ED5E0u; f_803B393C(c); // 800ED5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800ED5E0
  c->r[3]=0u+0xFFFFFFFFu; // 800ED5E4
  if (!crb(c,2)) { goto L_800ED5F4; } // 800ED5E8
  c->r[3]=c->r[31]+0x00010000u; // 800ED5EC
  c->r[3]=c->r[3]+0x00007AEEu; // 800ED5F0
L_800ED5F4:;
  {uint32_t ea=c->r[1]+0x00000114u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED5F4
  c->r[0]=R32(c->r[1]+0x00000124u); // 800ED5F8
  c->lr=c->r[0]; // 800ED5FC
  c->r[1]=c->r[1]+0x00000120u; // 800ED600
  return; // 800ED604
}

// fn_800ED608
void f_800ED608(Ctx* __restrict c) {
  trace_call(0x800ED608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED608
  c->r[0]=c->lr; // 800ED60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED614
  c->r[31]=c->r[3]|c->r[3]; // 800ED618
  c->lr=0x800ED620u; f_80061594(c); // 800ED61C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED620
  if (!crb(c,2)) { goto L_800ED630; } // 800ED624
  c->r[3]=0u+0x00000000u; // 800ED628
  goto L_800ED650; // 800ED62C
L_800ED630:;
  c->r[3]=R32(c->r[31]+0x000005D8u); // 800ED630
  cmps(c,0,(int32_t)c->r[3],9); // 800ED634
  if (!crb(c,2)) { goto L_800ED644; } // 800ED638
  c->r[3]=0u+0x00000000u; // 800ED63C
  goto L_800ED650; // 800ED640
L_800ED644:;
  c->r[3]=c->r[3]+0xFFFFFFF5u; // 800ED644
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800ED648
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800ED64C
L_800ED650:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED650
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED654
  c->lr=c->r[0]; // 800ED658
  c->r[1]=c->r[1]+0x00000010u; // 800ED65C
  return; // 800ED660
}

// fn_800ED664
void f_800ED664(Ctx* __restrict c) {
  trace_call(0x800ED664u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800ED664
  f_800EC700(c); return; // 800ED668
}

// fn_800ED66C
void f_800ED66C(Ctx* __restrict c) {
  trace_call(0x800ED66Cu);
  c->r[0]=0u+0x00000010u; // 800ED66C
  c->r[9]=0u+0x00000000u; // 800ED670
  c->r[4]=0u+0x00000000u; // 800ED674
  c->r[5]=0u+0x00000000u; // 800ED678
  c->r[7]=0u+0xFFFFFFFFu; // 800ED67C
  c->ctr=c->r[0]; // 800ED680
L_800ED684:;
  c->r[8]=c->r[3]+c->r[4]; // 800ED684
  c->r[6]=c->r[3]+c->r[5]; // 800ED688
  W8(c->r[8]+0x00000018u,c->r[9]); // 800ED68C
  c->r[4]=c->r[4]+0x00000020u; // 800ED690
  c->r[5]=c->r[5]+0x00000004u; // 800ED694
  W32(c->r[6]+0x00000218u,c->r[7]); // 800ED698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ED684; } // 800ED69C
  return; // 800ED6A0
}

// fn_800ED6A4
void f_800ED6A4(Ctx* __restrict c) {
  trace_call(0x800ED6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED6A4
  c->r[0]=c->lr; // 800ED6A8
  W32(c->r[1]+0x00000134u,c->r[0]); // 800ED6AC
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED6B0
  c->r[25]=0u+0x00000000u; // 800ED6B4
  c->r[24]=c->r[3]|c->r[3]; // 800ED6B8
  c->r[31]=0u+0x00000000u; // 800ED6BC
  c->r[29]=c->r[25]|c->r[25]; // 800ED6C0
  c->r[30]=0u+0x00000000u; // 800ED6C4
  c->r[27]=0u+0x80690000u; // 800ED6C8
  c->r[28]=0u+0x80740000u; // 800ED6CC
L_800ED6D0:;
  c->r[4]=c->r[24]+c->r[30]; // 800ED6D0
  c->r[3]=R32(c->r[4]+0x00000218u); // 800ED6D4
  cmps(c,0,(int32_t)c->r[3],0); // 800ED6D8
  if (crb(c,0)) { goto L_800ED718; } // 800ED6DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800ED6E0
  W32(c->r[4]+0x00000218u,c->r[0]); // 800ED6E4
  if (!crb(c,0)) { goto L_800ED718; } // 800ED6E8
  c->r[4]=c->r[24]+c->r[31]; // 800ED6EC
  c->r[3]=c->r[1]+0x00000008u; // 800ED6F0
  c->r[26]=c->r[4]+0x00000018u; // 800ED6F4
  c->r[4]=c->r[27]+0xFFFFED28u; // 800ED6F8
  c->r[5]=c->r[26]|c->r[26]; // 800ED6FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ED700
  c->lr=0x800ED708u; f_803B1FC8(c); // 800ED704
  c->r[3]=c->r[28]+0x00005180u; // 800ED708
  c->r[4]=c->r[1]+0x00000008u; // 800ED70C
  c->lr=0x800ED714u; f_80313660(c); // 800ED710
  W8(c->r[26]+0x00000000u,c->r[29]); // 800ED714
L_800ED718:;
  c->r[25]=c->r[25]+0x00000001u; // 800ED718
  c->r[30]=c->r[30]+0x00000004u; // 800ED71C
  cmps(c,0,(int32_t)c->r[25],16); // 800ED720
  c->r[31]=c->r[31]+0x00000020u; // 800ED724
  if (crb(c,0)) { IRQCHK(c); goto L_800ED6D0; } // 800ED728
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED72C
  c->r[0]=R32(c->r[1]+0x00000134u); // 800ED730
  c->lr=c->r[0]; // 800ED734
  c->r[1]=c->r[1]+0x00000130u; // 800ED738
  return; // 800ED73C
}

// fn_800ED740
void f_800ED740(Ctx* __restrict c) {
  trace_call(0x800ED740u);
  c->r[3]=0u+0x00000025u; // 800ED740
  return; // 800ED744
}

// fn_800ED748
void f_800ED748(Ctx* __restrict c) {
  trace_call(0x800ED748u);
  c->r[3]=0u+0x800F0000u; // 800ED748
  c->r[3]=c->r[3]+0xFFFFD754u; // 800ED74C
  return; // 800ED750
}

// fn_800ED754
void f_800ED754(Ctx* __restrict c) {
  trace_call(0x800ED754u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED754
  c->r[0]=c->lr; // 800ED758
  W32(c->r[1]+0x00000224u,c->r[0]); // 800ED75C
  c->r[11]=c->r[1]+0x00000200u; // 800ED760
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 800ED764
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 800ED768
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[30]);} // 800ED76C
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,30,ea,0,0);} // 800ED770
  c->lr=0x800ED778u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED774
  c->r[3]=R32(c->r[4]+0x00000000u); // 800ED778
  c->r[23]=c->r[5]|c->r[5]; // 800ED77C
  c->r[0]=c->r[3]+0xBBB10000u; // 800ED780
  cmpu(c,0,c->r[0],0x00004F52u); // 800ED784
  if (crb(c,2)) { goto L_800ED794; } // 800ED788
  c->r[3]=0u+0x00000001u; // 800ED78C
  goto L_800EDCF8; // 800ED790
L_800ED794:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800ED794
  cmps(c,0,(int32_t)c->r[0],0); // 800ED798
  if (crb(c,2)) { goto L_800ED7A8; } // 800ED79C
  c->r[3]=0u+0x00000001u; // 800ED7A0
  goto L_800EDCF8; // 800ED7A4
L_800ED7A8:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ED7A8
  c->r[29]=0u+0x00000001u; // 800ED7AC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800ED7B0
  c->r[31]=c->r[4]+c->r[0]; // 800ED7B4
  c->r[0]=R32(c->r[4]+c->r[0]); // 800ED7B8
  c->r[30]=c->r[31]+c->r[3]; // 800ED7BC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800ED7C0
  cmps(c,0,(int32_t)c->r[0],0); // 800ED7C4
  c->r[21]=c->r[30]+c->r[3]; // 800ED7C8
  if (crb(c,2)) { goto L_800ED810; } // 800ED7CC
  c->r[22]=0u+0x00000000u; // 800ED7D0
  W8(c->r[1]+0x00000028u,c->r[22]); // 800ED7D4
  c->r[3]=c->r[1]+0x00000028u; // 800ED7D8
  c->lr=0x800ED7E0u; f_8004DBC0(c); // 800ED7DC
  c->lr=0x800ED7E4u; f_8009946C(c); // 800ED7E0
  cmps(c,0,(int32_t)c->r[3],0); // 800ED7E4
  if (crb(c,2)) { goto L_800ED808; } // 800ED7E8
  W8(c->r[1]+0x00000024u,c->r[22]); // 800ED7EC
  c->r[3]=c->r[1]+0x00000024u; // 800ED7F0
  c->lr=0x800ED7F8u; f_8004DBC0(c); // 800ED7F4
  c->r[4]=c->r[23]|c->r[23]; // 800ED7F8
  c->lr=0x800ED800u; f_8009930C(c); // 800ED7FC
  cmps(c,0,(int32_t)c->r[3],3); // 800ED800
  if (crb(c,2)) { goto L_800ED810; } // 800ED804
L_800ED808:;
  c->r[3]=0u+0x00000000u; // 800ED808
  goto L_800EDCF8; // 800ED80C
L_800ED810:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800ED810
  cmpu(c,0,c->r[0],0x0000000Cu); // 800ED814
  if (crb(c,1)) { goto L_800EDCF4; } // 800ED818
  c->r[3]=0u+0x806E0000u; // 800ED81C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ED820
  c->r[3]=c->r[3]+0xFFFF8300u; // 800ED824
  c->r[3]=R32(c->r[3]+c->r[0]); // 800ED828
  c->ctr=c->r[3]; // 800ED82C
  if (true) { switch (c->ctr) { case 0x800ED834u: goto L_800ED834; case 0x800ED958u: goto L_800ED958; case 0x800EDA08u: goto L_800EDA08; case 0x800EDBACu: goto L_800EDBAC; case 0x800EDBCCu: goto L_800EDBCC; case 0x800EDBF4u: goto L_800EDBF4; case 0x800EDC18u: goto L_800EDC18; case 0x800EDC3Cu: goto L_800EDC3C; case 0x800EDC60u: goto L_800EDC60; case 0x800EDC84u: goto L_800EDC84; case 0x800EDCA8u: goto L_800EDCA8; case 0x800EDCD0u: goto L_800EDCD0; default: break; } dispatch(c,c->ctr); return; } // 800ED830
L_800ED834:;
  c->r[4]=0u+0x80690000u; // 800ED834
  c->r[5]=c->r[30]|c->r[30]; // 800ED838
  c->r[3]=c->r[1]+0x000000C8u; // 800ED83C
  c->r[4]=c->r[4]+0xFFFFED28u; // 800ED840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ED844
  c->lr=0x800ED84Cu; f_803B1FC8(c); // 800ED848
  c->r[0]=R8(c->r[13]+0xFFFFBC0Au); // 800ED84C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800ED850
  if (!crb(c,2)) { goto L_800ED898; } // 800ED854
  c->r[22]=0u+0x80740000u; // 800ED858
  c->r[3]=c->r[22]+0x000047D8u; // 800ED85C
  c->lr=0x800ED864u; f_80317EFC(c); // 800ED860
  c->r[6]=0u+0x806D0000u; // 800ED864
  c->r[4]=0u+0x80050000u; // 800ED868
  c->r[6]=c->r[6]+0xFFFFCA68u; // 800ED86C
  c->r[3]=c->r[22]+0x000047D8u; // 800ED870
  c->r[0]=c->r[6]+0x00000028u; // 800ED874
  c->r[5]=0u+0x80750000u; // 800ED878
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800ED87C
  c->r[4]=c->r[4]+0x0000074Cu; // 800ED880
  c->r[5]=c->r[5]+0x00003B04u; // 800ED884
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800ED888
  c->lr=0x800ED890u; f_803A92B8(c); // 800ED88C
  c->r[0]=0u+0x00000001u; // 800ED890
  W8(c->r[13]+0xFFFFBC0Au,c->r[0]); // 800ED894
L_800ED898:;
  c->r[3]=0u+0x80740000u; // 800ED898
  c->r[4]=0u+0x80740000u; // 800ED89C
  c->r[3]=c->r[3]+0x000047D8u; // 800ED8A0
  c->r[5]=c->r[1]+0x000000C8u; // 800ED8A4
  c->r[4]=c->r[4]+0x00005180u; // 800ED8A8
  c->r[6]=0u+0x00000000u; // 800ED8AC
  c->lr=0x800ED8B4u; f_803187FC(c); // 800ED8B0
  c->r[21]=0u+0x00000000u; // 800ED8B4
  c->r[31]=0u+0x00000000u; // 800ED8B8
  c->r[22]=c->r[21]|c->r[21]; // 800ED8BC
  c->r[28]=0u+0x00000000u; // 800ED8C0
  c->r[23]=c->r[21]|c->r[21]; // 800ED8C4
  c->r[24]=c->r[21]|c->r[21]; // 800ED8C8
  c->r[25]=c->r[21]|c->r[21]; // 800ED8CC
  c->r[26]=c->r[21]|c->r[21]; // 800ED8D0
  c->r[27]=0u+0xFFFFFFFFu; // 800ED8D4
L_800ED8D8:;
  W8(c->r[1]+0x00000020u,c->r[22]); // 800ED8D8
  c->r[3]=c->r[1]+0x00000020u; // 800ED8DC
  c->lr=0x800ED8E4u; f_8004EEC0(c); // 800ED8E0
  c->r[3]=c->r[3]+c->r[28]; // 800ED8E4
  c->r[0]=R32(c->r[3]+0x00000218u); // 800ED8E8
  cmps(c,0,(int32_t)c->r[0],0); // 800ED8EC
  if (crb(c,0)) { goto L_800ED940; } // 800ED8F0
  W8(c->r[1]+0x0000001Cu,c->r[23]); // 800ED8F4
  c->r[3]=c->r[1]+0x0000001Cu; // 800ED8F8
  c->lr=0x800ED900u; f_8004EEC0(c); // 800ED8FC
  c->r[3]=c->r[3]+c->r[31]; // 800ED900
  c->r[4]=c->r[30]|c->r[30]; // 800ED904
  c->r[3]=c->r[3]+0x00000018u; // 800ED908
  c->lr=0x800ED910u; f_803B393C(c); // 800ED90C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED910
  if (!crb(c,2)) { goto L_800ED940; } // 800ED914
  W8(c->r[1]+0x00000018u,c->r[24]); // 800ED918
  c->r[3]=c->r[1]+0x00000018u; // 800ED91C
  c->lr=0x800ED924u; f_8004EEC0(c); // 800ED920
  c->r[4]=c->r[3]+c->r[31]; // 800ED924
  c->r[3]=c->r[1]+0x00000014u; // 800ED928
  W8(c->r[4]+0x00000018u,c->r[25]); // 800ED92C
  W8(c->r[1]+0x00000014u,c->r[26]); // 800ED930
  c->lr=0x800ED938u; f_8004EEC0(c); // 800ED934
  c->r[3]=c->r[3]+c->r[28]; // 800ED938
  W32(c->r[3]+0x00000218u,c->r[27]); // 800ED93C
L_800ED940:;
  c->r[21]=c->r[21]+0x00000001u; // 800ED940
  c->r[28]=c->r[28]+0x00000004u; // 800ED944
  cmps(c,0,(int32_t)c->r[21],16); // 800ED948
  c->r[31]=c->r[31]+0x00000020u; // 800ED94C
  if (crb(c,0)) { IRQCHK(c); goto L_800ED8D8; } // 800ED950
  goto L_800EDCF4; // 800ED954
L_800ED958:;
  c->r[4]=0u+0x80690000u; // 800ED958
  c->r[5]=c->r[30]|c->r[30]; // 800ED95C
  c->r[4]=c->r[4]+0xFFFFED28u; // 800ED960
  c->r[3]=c->r[1]+0x000000C8u; // 800ED964
  c->r[4]=c->r[4]+0x00000012u; // 800ED968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ED96C
  c->lr=0x800ED974u; f_803B1FC8(c); // 800ED970
  c->r[3]=c->r[1]+0x000000C8u; // 800ED974
  c->lr=0x800ED97Cu; f_800E584C(c); // 800ED978
  c->r[22]=0u+0x00000000u; // 800ED97C
  c->r[31]=0u+0x00000000u; // 800ED980
  c->r[28]=0u+0x00000000u; // 800ED984
L_800ED988:;
  W8(c->r[1]+0x00000010u,c->r[28]); // 800ED988
  c->r[3]=c->r[1]+0x00000010u; // 800ED98C
  c->lr=0x800ED994u; f_8004EEC0(c); // 800ED990
  c->r[3]=c->r[3]+c->r[31]; // 800ED994
  c->r[0]=R32(c->r[3]+0x00000218u); // 800ED998
  cmps(c,0,(int32_t)c->r[0],0); // 800ED99C
  if (!crb(c,0)) { goto L_800ED9F4; } // 800ED9A0
  c->r[3]=c->r[30]|c->r[30]; // 800ED9A4
  c->lr=0x800ED9ACu; f_803A91D4(c); // 800ED9A8
  cmpu(c,0,c->r[3],0x00000020u); // 800ED9AC
  if (!crb(c,0)) { goto L_800ED9F4; } // 800ED9B0
  c->r[28]=0u+0x00000000u; // 800ED9B4
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 800ED9B8
  c->r[3]=c->r[1]+0x0000000Cu; // 800ED9BC
  c->lr=0x800ED9C4u; f_8004EEC0(c); // 800ED9C0
  c->r[0]=rotl(c->r[22],5)&0xFFFFFFE0u; // 800ED9C4
  c->r[4]=c->r[30]|c->r[30]; // 800ED9C8
  c->r[3]=c->r[3]+c->r[0]; // 800ED9CC
  c->r[3]=c->r[3]+0x00000018u; // 800ED9D0
  c->lr=0x800ED9D8u; f_803B37C0(c); // 800ED9D4
  W8(c->r[1]+0x00000008u,c->r[28]); // 800ED9D8
  c->r[3]=c->r[1]+0x00000008u; // 800ED9DC
  c->r[28]=0u+0x00000001u; // 800ED9E0
  c->lr=0x800ED9E8u; f_8004EEC0(c); // 800ED9E4
  c->r[3]=c->r[3]+c->r[31]; // 800ED9E8
  W32(c->r[3]+0x00000218u,c->r[28]); // 800ED9EC
  goto L_800EDCF4; // 800ED9F0
L_800ED9F4:;
  c->r[22]=c->r[22]+0x00000001u; // 800ED9F4
  c->r[31]=c->r[31]+0x00000004u; // 800ED9F8
  cmps(c,0,(int32_t)c->r[22],16); // 800ED9FC
  if (crb(c,0)) { IRQCHK(c); goto L_800ED988; } // 800EDA00
  goto L_800EDCF4; // 800EDA04
L_800EDA08:;
  c->r[4]=0u+0x80690000u; // 800EDA08
  c->r[5]=c->r[30]|c->r[30]; // 800EDA0C
  c->r[4]=c->r[4]+0xFFFFED28u; // 800EDA10
  c->r[3]=c->r[1]+0x000000C8u; // 800EDA14
  c->r[4]=c->r[4]+0x00000012u; // 800EDA18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EDA1C
  c->lr=0x800EDA24u; f_803B1FC8(c); // 800EDA20
  c->r[3]=0u+0x80740000u; // 800EDA24
  c->r[4]=c->r[1]+0x000000C8u; // 800EDA28
  c->r[3]=c->r[3]+0x00005180u; // 800EDA2C
  c->lr=0x800EDA34u; f_80313128(c); // 800EDA30
  c->r[0]=R8(c->r[3]+0x00000018u); // 800EDA34
  c->r[4]=0u+0x00000000u; // 800EDA38
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800EDA3C
  if (crb(c,2)) { goto L_800EDA54; } // 800EDA40
  c->r[0]=R8(c->r[3]+0x00000019u); // 800EDA44
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800EDA48
  if (!crb(c,2)) { goto L_800EDA54; } // 800EDA4C
  c->r[4]=0u+0x00000001u; // 800EDA50
L_800EDA54:;
  cmps(c,0,(int32_t)c->r[4],0); // 800EDA54
  if (crb(c,2)) { goto L_800EDA64; } // 800EDA58
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800EDA5C
  goto L_800EDA68; // 800EDA60
L_800EDA64:;
  c->r[0]=0u+0x00000000u; // 800EDA64
L_800EDA68:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EDA68
  if (crb(c,2)) { goto L_800EDB4C; } // 800EDA6C
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EDA70
  c->r[3]=c->r[1]+0x00000098u; // 800EDA74
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDA78
  {uint32_t ea=c->r[31]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDA7C
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[0]); // 800EDA80
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDA84
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDA88
  c->f[30]=c->ps1[30]=S(c->f[4]*c->f[3]); // 800EDA8C
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDA90
  c->f[31]=c->ps1[31]=S(c->f[4]*c->f[2]); // 800EDA94
  c->f[2]=c->f[1]; // 800EDA98
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[5]); // 800EDA9C
  c->lr=0x800EDAA4u; f_804E18A0(c); // 800EDAA0
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDAA4
  c->r[3]=c->r[1]+0x00000038u; // 800EDAA8
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDAAC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800EDAB0
  c->f[3]=c->f[2]; // 800EDAB4
  c->lr=0x800EDABCu; f_804E18A0(c); // 800EDAB8
  c->r[3]=c->r[1]+0x00000098u; // 800EDABC
  c->r[4]=c->r[1]+0x00000038u; // 800EDAC0
  c->r[5]=c->r[3]|c->r[3]; // 800EDAC4
  c->lr=0x800EDACCu; f_8030DA28(c); // 800EDAC8
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDACC
  c->r[3]=c->r[1]+0x00000068u; // 800EDAD0
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDAD4
  c->f[3]=c->f[1]; // 800EDAD8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 800EDADC
  c->lr=0x800EDAE4u; f_804E18A0(c); // 800EDAE0
  c->r[3]=c->r[1]+0x00000098u; // 800EDAE4
  c->r[4]=c->r[1]+0x00000068u; // 800EDAE8
  c->r[5]=c->r[3]|c->r[3]; // 800EDAEC
  c->lr=0x800EDAF4u; f_8030DA28(c); // 800EDAF0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDAF4
  c->r[4]=c->r[21]|c->r[21]; // 800EDAF8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDAFC
  c->r[3]=c->r[1]+0x000000C8u; // 800EDB00
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDB04
  c->r[6]=0u+0xFFFFFFFFu; // 800EDB08
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800EDB0C
  c->r[7]=0u+0xFFFFFFFFu; // 800EDB10
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 800EDB14
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 800EDB18
  c->r[5]=R32(c->r[31]+0x00000000u); // 800EDB1C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDB20
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 800EDB24
  c->r[0]=cntlz(c->r[0]); // 800EDB28
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EDB2C
  c->lr=0x800EDB34u; f_800E52E4(c); // 800EDB30
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800EDB34
  c->r[4]=c->r[1]+0x00000098u; // 800EDB38
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EDB3C
  c->ctr=c->r[12]; // 800EDB40
  if (true) { c->lr=0x800EDB48u; dispatch(c,c->ctr); } // 800EDB44
  goto L_800EDCF4; // 800EDB48
L_800EDB4C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800EDB4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EDB50
  if (!crb(c,2)) { goto L_800EDB98; } // 800EDB54
  c->r[28]=0u+0x80730000u; // 800EDB58
  c->r[3]=c->r[28]+0x00006160u; // 800EDB5C
  c->lr=0x800EDB64u; f_8008C1BC(c); // 800EDB60
  c->r[6]=0u+0x806D0000u; // 800EDB64
  c->r[4]=0u+0x80050000u; // 800EDB68
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800EDB6C
  c->r[3]=c->r[28]+0x00006160u; // 800EDB70
  c->r[0]=c->r[6]+0x00000028u; // 800EDB74
  c->r[5]=0u+0x80750000u; // 800EDB78
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800EDB7C
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800EDB80
  c->r[5]=c->r[5]+0x00003AF8u; // 800EDB84
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800EDB88
  c->lr=0x800EDB90u; f_803A92B8(c); // 800EDB8C
  c->r[0]=0u+0x00000001u; // 800EDB90
  W8(c->r[13]+0xFFFFBB87u,c->r[0]); // 800EDB94
L_800EDB98:;
  c->r[3]=0u+0x80730000u; // 800EDB98
  c->r[3]=c->r[3]+0x00006160u; // 800EDB9C
  c->lr=0x800EDBA4u; f_8008CC20(c); // 800EDBA0
  c->r[29]=0u+0x00000000u; // 800EDBA4
  goto L_800EDCF4; // 800EDBA8
L_800EDBAC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDBAC
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDBB0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDBB4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDBB8
  c->lr=0x800EDBC0u; f_8005A6D0(c); // 800EDBBC
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDBC0
  c->lr=0x800EDBC8u; f_800E5798(c); // 800EDBC4
  goto L_800EDCF4; // 800EDBC8
L_800EDBCC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDBCC
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDBD0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDBD4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDBD8
  c->lr=0x800EDBE0u; f_8005A6D0(c); // 800EDBDC
  c->r[4]=c->r[21]|c->r[21]; // 800EDBE0
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDBE4
  c->r[5]=0u+0x00000000u; // 800EDBE8
  c->lr=0x800EDBF0u; f_800E5B38(c); // 800EDBEC
  goto L_800EDCF4; // 800EDBF0
L_800EDBF4:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDBF4
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDBF8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDBFC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDC00
  c->lr=0x800EDC08u; f_8005A6D0(c); // 800EDC04
  c->r[4]=c->r[21]|c->r[21]; // 800EDC08
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC0C
  c->lr=0x800EDC14u; f_800E5CC0(c); // 800EDC10
  goto L_800EDCF4; // 800EDC14
L_800EDC18:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC18
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC1C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDC20
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDC24
  c->lr=0x800EDC2Cu; f_8005A6D0(c); // 800EDC28
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC2C
  c->r[4]=0u+0x00000001u; // 800EDC30
  c->lr=0x800EDC38u; f_800E5D7C(c); // 800EDC34
  goto L_800EDCF4; // 800EDC38
L_800EDC3C:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC3C
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC40
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDC44
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDC48
  c->lr=0x800EDC50u; f_8005A6D0(c); // 800EDC4C
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC50
  c->r[4]=0u+0x00000000u; // 800EDC54
  c->lr=0x800EDC5Cu; f_800E5D7C(c); // 800EDC58
  goto L_800EDCF4; // 800EDC5C
L_800EDC60:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC60
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC64
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDC68
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDC6C
  c->lr=0x800EDC74u; f_8005A6D0(c); // 800EDC70
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC74
  c->r[4]=0u+0x00000000u; // 800EDC78
  c->lr=0x800EDC80u; f_800E58E0(c); // 800EDC7C
  goto L_800EDCF4; // 800EDC80
L_800EDC84:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC84
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC88
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDC8C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDC90
  c->lr=0x800EDC98u; f_8005A6D0(c); // 800EDC94
  {uint32_t ea=c->r[2]+0xFFFFA6F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDC98
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDC9C
  c->lr=0x800EDCA4u; f_800E5BFC(c); // 800EDCA0
  goto L_800EDCF4; // 800EDCA4
L_800EDCA8:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDCA8
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDCAC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDCB0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDCB4
  c->lr=0x800EDCBCu; f_8005A6D0(c); // 800EDCB8
  c->r[5]=R32(c->r[31]+0x00000024u); // 800EDCBC
  c->r[4]=c->r[23]|c->r[23]; // 800EDCC0
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDCC4
  c->lr=0x800EDCCCu; f_800E55C0(c); // 800EDCC8
  goto L_800EDCF4; // 800EDCCC
L_800EDCD0:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDCD0
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDCD4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDCD8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDCDC
  c->lr=0x800EDCE4u; f_8005A6D0(c); // 800EDCE0
  c->r[4]=c->r[21]|c->r[21]; // 800EDCE4
  c->r[5]=c->r[30]|c->r[30]; // 800EDCE8
  c->r[3]=c->r[1]+0x0000002Cu; // 800EDCEC
  c->lr=0x800EDCF4u; f_800E5B38(c); // 800EDCF0
L_800EDCF4:;
  c->r[3]=c->r[29]|c->r[29]; // 800EDCF4
L_800EDCF8:;
  c->r[11]=c->r[1]+0x00000200u; // 800EDCF8
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 800EDCFC
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 800EDD00
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,30,ea,0,0);} // 800EDD04
  {uint32_t ea=c->r[1]+0x00000200u; c->f[30]=RF64(ea);} // 800EDD08
  c->lr=0x800EDD10u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EDD0C
  c->r[0]=R32(c->r[1]+0x00000224u); // 800EDD10
  c->lr=c->r[0]; // 800EDD14
  c->r[1]=c->r[1]+0x00000220u; // 800EDD18
  return; // 800EDD1C
}

// fn_800EDD20
void f_800EDD20(Ctx* __restrict c) {
  trace_call(0x800EDD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDD20
  c->r[0]=c->lr; // 800EDD24
  c->r[12]=0u+0x806D0000u; // 800EDD28
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDD30
  c->r[0]=0u+0x00000000u; // 800EDD34
  c->r[12]=c->r[12]+0xFFFFE140u; // 800EDD38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDD3C
  c->r[31]=c->r[3]|c->r[3]; // 800EDD40
  W32(c->r[3]+0x00000000u,c->r[3]); // 800EDD44
  W32(c->r[3]+0x00000004u,c->r[3]); // 800EDD48
  W32(c->r[3]+0x00000008u,c->r[3]); // 800EDD4C
  W32(c->r[3]+0x00000020u,c->r[12]); // 800EDD50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EDD54
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EDD58
  W32(c->r[3]+0x00000014u,c->r[0]); // 800EDD5C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800EDD60
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EDD64
  c->ctr=c->r[12]; // 800EDD68
  if (true) { c->lr=0x800EDD70u; dispatch(c,c->ctr); } // 800EDD6C
  c->r[4]=0u+0x806E0000u; // 800EDD70
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800EDD74
  c->r[4]=c->r[4]+0xFFFF8338u; // 800EDD78
  c->r[3]=c->r[31]+0x00000024u; // 800EDD7C
  W32(c->r[31]+0x00000020u,c->r[4]); // 800EDD80
  c->lr=0x800EDD88u; f_803209E8(c); // 800EDD84
  c->r[3]=c->r[31]|c->r[31]; // 800EDD88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDD8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDD90
  c->lr=c->r[0]; // 800EDD94
  c->r[1]=c->r[1]+0x00000010u; // 800EDD98
  return; // 800EDD9C
}

// dtor_800EDDA0
void f_800EDDA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDDA0
  c->r[0]=c->lr; // 800EDDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800EDDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDDAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDDB0
  c->r[31]=c->r[3]|c->r[3]; // 800EDDB4
  if (crb(c,2)) { goto L_800EDDE0; } // 800EDDB8
  c->r[5]=0u+0x806E0000u; // 800EDDBC
  c->r[4]=0u+0x00000001u; // 800EDDC0
  c->r[5]=c->r[5]+0xFFFF8338u; // 800EDDC4
  W32(c->r[3]+0x00000020u,c->r[5]); // 800EDDC8
  c->r[3]=c->r[3]+0x00000024u; // 800EDDCC
  c->lr=0x800EDDD4u; f_80320C3C(c); // 800EDDD0
  c->r[3]=c->r[31]|c->r[31]; // 800EDDD4
  c->r[4]=0u+0x00000000u; // 800EDDD8
  c->lr=0x800EDDE0u; f_8005C8DC(c); // 800EDDDC
L_800EDDE0:;
  c->r[3]=c->r[31]|c->r[31]; // 800EDDE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDDE8
  c->lr=c->r[0]; // 800EDDEC
  c->r[1]=c->r[1]+0x00000010u; // 800EDDF0
  return; // 800EDDF4
}

// fn_800EDDF8
void f_800EDDF8(Ctx* __restrict c) {
  trace_call(0x800EDDF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDDF8
  c->r[0]=c->lr; // 800EDDFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EDE00
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDE04
  c->r[30]=c->r[3]|c->r[3]; // 800EDE08
  c->r[5]=R32(c->r[3]+0x00000010u); // 800EDE0C
  c->r[3]=c->r[1]+0x00000008u; // 800EDE10
  c->r[4]=R32(c->r[13]+0xFFFF84F0u); // 800EDE14
  c->r[5]=R32(c->r[5]+0x00000138u); // 800EDE18
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800EDE1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EDE20
  c->lr=0x800EDE28u; f_804AC3C4(c); // 800EDE24
  cmps(c,0,(int32_t)c->r[3],0); // 800EDE28
  c->r[31]=c->r[3]|c->r[3]; // 800EDE2C
  if (crb(c,2)) { goto L_800EDE6C; } // 800EDE30
  if (!crb(c,2)) { goto L_800EDE54; } // 800EDE34
  c->r[3]=0u+0x806D0000u; // 800EDE38
  c->r[5]=0u+0x806D0000u; // 800EDE3C
  c->r[3]=c->r[3]+0xFFFFE3D8u; // 800EDE40
  c->r[4]=0u+0x00000038u; // 800EDE44
  c->r[5]=c->r[5]+0xFFFFE3B8u; // 800EDE48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EDE4C
  c->lr=0x800EDE54u; f_80484674(c); // 800EDE50
L_800EDE54:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EDE54
  if (crb(c,2)) { goto L_800EDE64; } // 800EDE58
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800EDE5C
  goto L_800EDE70; // 800EDE60
L_800EDE64:;
  c->r[0]=0u+0x00000000u; // 800EDE64
  goto L_800EDE70; // 800EDE68
L_800EDE6C:;
  c->r[0]=0u+0xFFFFFFFFu; // 800EDE6C
L_800EDE70:;
  W32(c->r[30]+0x00000060u,c->r[0]); // 800EDE70
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 800EDE74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EDE78
  if (!crb(c,2)) { goto L_800EDEAC; } // 800EDE7C
  c->r[31]=0u+0x80730000u; // 800EDE80
  c->r[3]=c->r[31]+0x00002598u; // 800EDE84
  c->lr=0x800EDE8Cu; f_80321014(c); // 800EDE88
  c->r[4]=0u+0x80320000u; // 800EDE8C
  c->r[5]=0u+0x80750000u; // 800EDE90
  c->r[3]=c->r[31]+0x00002598u; // 800EDE94
  c->r[4]=c->r[4]+0x0000116Cu; // 800EDE98
  c->r[5]=c->r[5]+0x00003B10u; // 800EDE9C
  c->lr=0x800EDEA4u; f_803A92B8(c); // 800EDEA0
  c->r[0]=0u+0x00000001u; // 800EDEA4
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 800EDEA8
L_800EDEAC:;
  c->r[4]=0u+0x80730000u; // 800EDEAC
  c->r[5]=R32(c->r[13]+0xFFFF84F4u); // 800EDEB0
  c->r[3]=c->r[1]+0x0000000Cu; // 800EDEB4
  c->r[6]=0u+0x00000001u; // 800EDEB8
  c->r[4]=c->r[4]+0x00002598u; // 800EDEBC
  c->lr=0x800EDEC4u; f_80321B90(c); // 800EDEC0
  c->r[3]=c->r[1]+0x0000000Cu; // 800EDEC4
  c->r[4]=c->r[30]+0x00000024u; // 800EDEC8
  c->lr=0x800EDED0u; f_80382F2C(c); // 800EDECC
  c->r[3]=c->r[30]+0x00000054u; // 800EDED0
  c->r[4]=c->r[1]+0x0000003Cu; // 800EDED4
  c->lr=0x800EDEDCu; f_80495690(c); // 800EDED8
  c->r[3]=c->r[30]+0x00000024u; // 800EDEDC
  c->lr=0x800EDEE4u; f_80320BEC(c); // 800EDEE0
  cmps(c,0,(int32_t)c->r[3],0); // 800EDEE4
  if (crb(c,2)) { goto L_800EDF0C; } // 800EDEE8
  c->r[3]=c->r[30]|c->r[30]; // 800EDEEC
  c->r[4]=c->r[30]+0x00000024u; // 800EDEF0
  c->lr=0x800EDEF8u; f_800EDF90(c); // 800EDEF4
  c->r[12]=R32(c->r[30]+0x0000005Cu); // 800EDEF8
  c->r[3]=c->r[30]+0x00000024u; // 800EDEFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800EDF00
  c->ctr=c->r[12]; // 800EDF04
  if (true) { c->lr=0x800EDF0Cu; dispatch(c,c->ctr); } // 800EDF08
L_800EDF0C:;
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDF0C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EDF10
  c->lr=c->r[0]; // 800EDF14
  c->r[1]=c->r[1]+0x00000050u; // 800EDF18
  return; // 800EDF1C
}

// fn_800EDF20
void f_800EDF20(Ctx* __restrict c) {
  trace_call(0x800EDF20u);
  c->r[4]=0u+0x00000001u; // 800EDF20
  c->r[3]=c->r[3]+0x00000024u; // 800EDF24
  f_80320C3C(c); return; // 800EDF28
}

// fn_800EDF2C
void f_800EDF2C(Ctx* __restrict c) {
  trace_call(0x800EDF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF2C
  c->r[0]=c->lr; // 800EDF30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDF34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDF38
  c->r[31]=c->r[3]|c->r[3]; // 800EDF3C
  c->r[3]=c->r[3]+0x00000024u; // 800EDF40
  c->lr=0x800EDF48u; f_80320BEC(c); // 800EDF44
  cmps(c,0,(int32_t)c->r[3],0); // 800EDF48
  if (!crb(c,2)) { goto L_800EDF58; } // 800EDF4C
  c->r[3]=0u+0x00000001u; // 800EDF50
  goto L_800EDF7C; // 800EDF54
L_800EDF58:;
  c->r[3]=c->r[31]|c->r[31]; // 800EDF58
  c->r[4]=c->r[31]+0x00000024u; // 800EDF5C
  c->lr=0x800EDF64u; f_800EDF90(c); // 800EDF60
  c->r[12]=R32(c->r[31]+0x0000005Cu); // 800EDF64
  c->r[3]=c->r[31]+0x00000024u; // 800EDF68
  c->r[12]=R32(c->r[12]+0x00000008u); // 800EDF6C
  c->ctr=c->r[12]; // 800EDF70
  if (true) { c->lr=0x800EDF78u; dispatch(c,c->ctr); } // 800EDF74
  c->r[3]=0u+0x00000000u; // 800EDF78
L_800EDF7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDF7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDF80
  c->lr=c->r[0]; // 800EDF84
  c->r[1]=c->r[1]+0x00000010u; // 800EDF88
  return; // 800EDF8C
}

// fn_800EDF90
void f_800EDF90(Ctx* __restrict c) {
  trace_call(0x800EDF90u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF90
  c->r[0]=c->lr; // 800EDF94
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800EDF98
  c->r[11]=c->r[1]+0x000000B0u; // 800EDF9C
  c->lr=0x800EDFA4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EDFA0
  c->r[5]=R32(c->r[3]+0x00000010u); // 800EDFA4
  c->r[29]=c->r[4]|c->r[4]; // 800EDFA8
  c->r[4]=R32(c->r[3]+0x00000060u); // 800EDFAC
  c->r[3]=c->r[5]+0x000000FCu; // 800EDFB0
  c->lr=0x800EDFB8u; f_802E6E80(c); // 800EDFB4
  c->r[30]=c->r[3]|c->r[3]; // 800EDFB8
  c->r[3]=c->r[1]+0x00000080u; // 800EDFBC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDFC0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDFC4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDFC8
  c->lr=0x800EDFD0u; f_8005FD70(c); // 800EDFCC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDFD0
  c->r[3]=c->r[1]+0x0000008Cu; // 800EDFD4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDFD8
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EDFDC
  c->lr=0x800EDFE4u; f_8005FD70(c); // 800EDFE0
  c->r[3]=c->r[29]|c->r[29]; // 800EDFE4
  c->r[4]=c->r[1]+0x0000008Cu; // 800EDFE8
  c->r[5]=c->r[1]+0x00000080u; // 800EDFEC
  c->lr=0x800EDFF4u; f_8032B6F4(c); // 800EDFF0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDFF4
  c->r[3]=c->r[1]+0x00000008u; // 800EDFF8
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDFFC
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE000
  c->lr=0x800EE008u; f_8005FD70(c); // 800EE004
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE008
  c->r[3]=c->r[1]+0x00000020u; // 800EE00C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE010
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE014
  c->lr=0x800EE01Cu; f_8005FD70(c); // 800EE018
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE01C
  c->r[3]=c->r[1]+0x00000038u; // 800EE020
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE024
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE028
  c->lr=0x800EE030u; f_8005FD70(c); // 800EE02C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE030
  c->r[3]=c->r[1]+0x00000050u; // 800EE034
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE038
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EE03C
  c->lr=0x800EE044u; f_8005FD70(c); // 800EE040
  c->r[30]=0u+0x80750000u; // 800EE044
  c->r[3]=c->r[1]+0x00000014u; // 800EE048
  c->r[31]=c->r[30]+0x00003B1Cu; // 800EE04C
  c->r[4]=c->r[1]+0x00000008u; // 800EE050
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE054
  c->lr=0x800EE05Cu; f_8005ED34(c); // 800EE058
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE05C
  c->r[3]=c->r[1]+0x0000002Cu; // 800EE060
  c->r[4]=c->r[1]+0x00000020u; // 800EE064
  c->lr=0x800EE06Cu; f_8005ED34(c); // 800EE068
  {uint32_t ea=c->r[30]+0x00003B1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE06C
  c->r[3]=c->r[1]+0x00000044u; // 800EE070
  c->r[4]=c->r[1]+0x00000038u; // 800EE074
  c->lr=0x800EE07Cu; f_8005ED34(c); // 800EE078
  c->r[3]=c->r[1]+0x0000005Cu; // 800EE07C
  c->r[4]=c->r[1]+0x00000050u; // 800EE080
  c->r[5]=c->r[1]+0x00000044u; // 800EE084
  c->lr=0x800EE08Cu; f_80073ACC(c); // 800EE088
  c->r[3]=c->r[1]+0x00000068u; // 800EE08C
  c->r[4]=c->r[1]+0x0000005Cu; // 800EE090
  c->r[5]=c->r[1]+0x0000002Cu; // 800EE094
  c->lr=0x800EE09Cu; f_80073ACC(c); // 800EE098
  c->r[3]=c->r[1]+0x00000074u; // 800EE09C
  c->r[4]=c->r[1]+0x00000068u; // 800EE0A0
  c->r[5]=c->r[1]+0x00000014u; // 800EE0A4
  c->lr=0x800EE0ACu; f_80073ACC(c); // 800EE0A8
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE0AC
  c->r[11]=c->r[1]+0x000000B0u; // 800EE0B0
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EE0B4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE0B8
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 800EE0BC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE0C0
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800EE0C4
  c->lr=0x800EE0CCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE0C8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800EE0CC
  c->lr=c->r[0]; // 800EE0D0
  c->r[1]=c->r[1]+0x000000B0u; // 800EE0D4
  return; // 800EE0D8
}

// fn_800EE0DC
void f_800EE0DC(Ctx* __restrict c) {
  trace_call(0x800EE0DCu);
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE0DC
  c->r[3]=0u+0x80750000u; // 800EE0E0
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EE0E4
  c->r[3]=c->r[3]+0x00003B1Cu; // 800EE0E8
  c->f[3]=c->f[1]; // 800EE0EC
  f_8005FD70(c); return; // 800EE0F0
}

// fn_800EE0F4
void f_800EE0F4(Ctx* __restrict c) {
  trace_call(0x800EE0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE0F4
  c->r[0]=c->lr; // 800EE0F8
  c->r[5]=0u+0x80690000u; // 800EE0FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE100
  c->r[0]=0u+0x00000000u; // 800EE104
  c->r[4]=c->r[1]+0x00000008u; // 800EE108
  c->r[5]=c->r[5]+0xFFFFED48u; // 800EE10C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EE110
  c->r[31]=c->r[3]|c->r[3]; // 800EE114
  W8(c->r[1]+0x00000008u,c->r[0]); // 800EE118
  c->lr=0x800EE120u; f_800EECE8(c); // 800EE11C
  c->r[4]=0u+0x806E0000u; // 800EE120
  c->r[3]=c->r[31]+0x000005C4u; // 800EE124
  c->r[4]=c->r[4]+0xFFFF83B8u; // 800EE128
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800EE12C
  c->r[0]=c->r[4]+0x00000044u; // 800EE130
  W32(c->r[31]+0x00000400u,c->r[0]); // 800EE134
  c->lr=0x800EE13Cu; f_800EE1A8(c); // 800EE138
  c->r[3]=c->r[31]+0x0000063Cu; // 800EE13C
  c->lr=0x800EE144u; f_800864D0(c); // 800EE140
  c->r[3]=c->r[31]+0x00000648u; // 800EE144
  c->lr=0x800EE14Cu; f_800864D0(c); // 800EE148
  c->lr=0x800EE150u; f_800EEC50(c); // 800EE14C
  c->lr=0x800EE154u; f_800EEBAC(c); // 800EE150
  c->lr=0x800EE158u; f_800EEB08(c); // 800EE154
  c->lr=0x800EE15Cu; f_800EEA64(c); // 800EE158
  c->lr=0x800EE160u; f_800EE9C0(c); // 800EE15C
  c->lr=0x800EE164u; f_800EE91C(c); // 800EE160
  c->lr=0x800EE168u; f_800EE878(c); // 800EE164
  c->lr=0x800EE16Cu; f_800EE7D4(c); // 800EE168
  c->lr=0x800EE170u; f_800EE730(c); // 800EE16C
  c->lr=0x800EE174u; f_800EE68C(c); // 800EE170
  c->lr=0x800EE178u; f_800EE5E8(c); // 800EE174
  c->lr=0x800EE17Cu; f_800EE544(c); // 800EE178
  c->lr=0x800EE180u; f_800EE4A0(c); // 800EE17C
  c->lr=0x800EE184u; f_800EE3FC(c); // 800EE180
  c->lr=0x800EE188u; f_800EE358(c); // 800EE184
  c->lr=0x800EE18Cu; f_800EE2B4(c); // 800EE188
  c->lr=0x800EE190u; f_800EE1E0(c); // 800EE18C
  c->r[3]=c->r[31]|c->r[31]; // 800EE190
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EE194
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE198
  c->lr=c->r[0]; // 800EE19C
  c->r[1]=c->r[1]+0x00000020u; // 800EE1A0
  return; // 800EE1A4
}

// fn_800EE1A8
void f_800EE1A8(Ctx* __restrict c) {
  trace_call(0x800EE1A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE1A8
  c->r[0]=c->lr; // 800EE1AC
  c->r[4]=0u+0x00000000u; // 800EE1B0
  c->r[5]=0u+0x0000002Cu; // 800EE1B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE1B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE1BC
  c->r[31]=c->r[3]|c->r[3]; // 800EE1C0
  c->lr=0x800EE1C8u; f_800043EC(c); // 800EE1C4
  c->r[3]=c->r[31]|c->r[31]; // 800EE1C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE1CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE1D0
  c->lr=c->r[0]; // 800EE1D4
  c->r[1]=c->r[1]+0x00000010u; // 800EE1D8
  return; // 800EE1DC
}

// fn_800EE1E0
void f_800EE1E0(Ctx* __restrict c) {
  trace_call(0x800EE1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE1E0
  c->r[0]=c->lr; // 800EE1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE1E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE1EC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE1F0
  cmps(c,0,(int32_t)c->r[30],0); // 800EE1F4
  if (crb(c,2)) { goto L_800EE23C; } // 800EE1F8
  c->lr=0x800EE200u; f_800EE284(c); // 800EE1FC
  c->r[31]=c->r[3]|c->r[3]; // 800EE200
  c->lr=0x800EE208u; f_800EE254(c); // 800EE204
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE208
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE20C
  c->r[5]=0u+0x800F0000u; // 800EE210
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE214
  c->r[4]=c->r[30]+c->r[4]; // 800EE218
  c->r[5]=c->r[5]+0xFFFFE250u; // 800EE21C
  c->r[4]=c->r[4]+c->r[0]; // 800EE220
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE224
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE228
  cmpu(c,0,c->r[0],0x00000014u); // 800EE22C
  if (!crb(c,0)) { goto L_800EE23C; } // 800EE230
  c->r[0]=0u+0x00000014u; // 800EE234
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE238
L_800EE23C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE23C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE240
  c->lr=c->r[0]; // 800EE244
  c->r[1]=c->r[1]+0x00000010u; // 800EE248
  return; // 800EE24C
}

// fn_800EE250
void f_800EE250(Ctx* __restrict c) {
  trace_call(0x800EE250u);
  f_800F1398(c); return; // 800EE250
}

// fn_800EE254
void f_800EE254(Ctx* __restrict c) {
  trace_call(0x800EE254u);
  c->r[0]=R8(c->r[13]+0xFFFFC474u); // 800EE254
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE258
  if (!crb(c,2)) { goto L_800EE27C; } // 800EE25C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE260
  c->r[0]=0u+0x00000001u; // 800EE264
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE268
  c->r[3]=c->r[4]+0x00000001u; // 800EE26C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE270
  W32(c->r[13]+0xFFFFC470u,c->r[4]); // 800EE274
  W8(c->r[13]+0xFFFFC474u,c->r[0]); // 800EE278
L_800EE27C:;
  c->r[3]=R32(c->r[13]+0xFFFFC470u); // 800EE27C
  return; // 800EE280
}

// fn_800EE284
void f_800EE284(Ctx* __restrict c) {
  trace_call(0x800EE284u);
  c->r[0]=R8(c->r[13]+0xFFFFC47Cu); // 800EE284
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE288
  if (!crb(c,2)) { goto L_800EE2AC; } // 800EE28C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800EE290
  c->r[0]=0u+0x00000001u; // 800EE294
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800EE298
  c->r[3]=c->r[4]+0x00000001u; // 800EE29C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800EE2A0
  W32(c->r[13]+0xFFFFC478u,c->r[4]); // 800EE2A4
  W8(c->r[13]+0xFFFFC47Cu,c->r[0]); // 800EE2A8
L_800EE2AC:;
  c->r[3]=R32(c->r[13]+0xFFFFC478u); // 800EE2AC
  return; // 800EE2B0
}

// fn_800EE2B4
void f_800EE2B4(Ctx* __restrict c) {
  trace_call(0x800EE2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE2B4
  c->r[0]=c->lr; // 800EE2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE2BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE2C0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE2C4
  cmps(c,0,(int32_t)c->r[30],0); // 800EE2C8
  if (crb(c,2)) { goto L_800EE310; } // 800EE2CC
  c->lr=0x800EE2D4u; f_800EE284(c); // 800EE2D0
  c->r[31]=c->r[3]|c->r[3]; // 800EE2D4
  c->lr=0x800EE2DCu; f_800EE328(c); // 800EE2D8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE2DC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE2E0
  c->r[5]=0u+0x800F0000u; // 800EE2E4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE2E8
  c->r[4]=c->r[30]+c->r[4]; // 800EE2EC
  c->r[5]=c->r[5]+0xFFFFE324u; // 800EE2F0
  c->r[4]=c->r[4]+c->r[0]; // 800EE2F4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE2F8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE2FC
  cmpu(c,0,c->r[0],0x00000010u); // 800EE300
  if (!crb(c,0)) { goto L_800EE310; } // 800EE304
  c->r[0]=0u+0x00000010u; // 800EE308
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE30C
L_800EE310:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE310
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE314
  c->lr=c->r[0]; // 800EE318
  c->r[1]=c->r[1]+0x00000010u; // 800EE31C
  return; // 800EE320
}

// fn_800EE324
void f_800EE324(Ctx* __restrict c) {
  trace_call(0x800EE324u);
  f_800F11FC(c); return; // 800EE324
}

// fn_800EE328
void f_800EE328(Ctx* __restrict c) {
  trace_call(0x800EE328u);
  c->r[0]=R8(c->r[13]+0xFFFFC46Cu); // 800EE328
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE32C
  if (!crb(c,2)) { goto L_800EE350; } // 800EE330
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE334
  c->r[0]=0u+0x00000001u; // 800EE338
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE33C
  c->r[3]=c->r[4]+0x00000001u; // 800EE340
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE344
  W32(c->r[13]+0xFFFFC468u,c->r[4]); // 800EE348
  W8(c->r[13]+0xFFFFC46Cu,c->r[0]); // 800EE34C
L_800EE350:;
  c->r[3]=R32(c->r[13]+0xFFFFC468u); // 800EE350
  return; // 800EE354
}

// fn_800EE358
void f_800EE358(Ctx* __restrict c) {
  trace_call(0x800EE358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE358
  c->r[0]=c->lr; // 800EE35C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE360
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE364
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE368
  cmps(c,0,(int32_t)c->r[30],0); // 800EE36C
  if (crb(c,2)) { goto L_800EE3B4; } // 800EE370
  c->lr=0x800EE378u; f_800EE284(c); // 800EE374
  c->r[31]=c->r[3]|c->r[3]; // 800EE378
  c->lr=0x800EE380u; f_800EE3CC(c); // 800EE37C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE380
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE384
  c->r[5]=0u+0x800F0000u; // 800EE388
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE38C
  c->r[4]=c->r[30]+c->r[4]; // 800EE390
  c->r[5]=c->r[5]+0xFFFFE3C8u; // 800EE394
  c->r[4]=c->r[4]+c->r[0]; // 800EE398
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE39C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE3A0
  cmpu(c,0,c->r[0],0x00000014u); // 800EE3A4
  if (!crb(c,0)) { goto L_800EE3B4; } // 800EE3A8
  c->r[0]=0u+0x00000014u; // 800EE3AC
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE3B0
L_800EE3B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE3B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE3B8
  c->lr=c->r[0]; // 800EE3BC
  c->r[1]=c->r[1]+0x00000010u; // 800EE3C0
  return; // 800EE3C4
}

// fn_800EE3C8
void f_800EE3C8(Ctx* __restrict c) {
  trace_call(0x800EE3C8u);
  f_800F118C(c); return; // 800EE3C8
}

// fn_800EE3CC
void f_800EE3CC(Ctx* __restrict c) {
  trace_call(0x800EE3CCu);
  c->r[0]=R8(c->r[13]+0xFFFFC464u); // 800EE3CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE3D0
  if (!crb(c,2)) { goto L_800EE3F4; } // 800EE3D4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE3D8
  c->r[0]=0u+0x00000001u; // 800EE3DC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE3E0
  c->r[3]=c->r[4]+0x00000001u; // 800EE3E4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE3E8
  W32(c->r[13]+0xFFFFC460u,c->r[4]); // 800EE3EC
  W8(c->r[13]+0xFFFFC464u,c->r[0]); // 800EE3F0
L_800EE3F4:;
  c->r[3]=R32(c->r[13]+0xFFFFC460u); // 800EE3F4
  return; // 800EE3F8
}

// fn_800EE3FC
void f_800EE3FC(Ctx* __restrict c) {
  trace_call(0x800EE3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE3FC
  c->r[0]=c->lr; // 800EE400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE408
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE40C
  cmps(c,0,(int32_t)c->r[30],0); // 800EE410
  if (crb(c,2)) { goto L_800EE458; } // 800EE414
  c->lr=0x800EE41Cu; f_800EE284(c); // 800EE418
  c->r[31]=c->r[3]|c->r[3]; // 800EE41C
  c->lr=0x800EE424u; f_800EE470(c); // 800EE420
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE424
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE428
  c->r[5]=0u+0x800F0000u; // 800EE42C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE430
  c->r[4]=c->r[30]+c->r[4]; // 800EE434
  c->r[5]=c->r[5]+0xFFFFE46Cu; // 800EE438
  c->r[4]=c->r[4]+c->r[0]; // 800EE43C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE440
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE444
  cmpu(c,0,c->r[0],0x00000010u); // 800EE448
  if (!crb(c,0)) { goto L_800EE458; } // 800EE44C
  c->r[0]=0u+0x00000010u; // 800EE450
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE454
L_800EE458:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE458
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE45C
  c->lr=c->r[0]; // 800EE460
  c->r[1]=c->r[1]+0x00000010u; // 800EE464
  return; // 800EE468
}

// fn_800EE46C
void f_800EE46C(Ctx* __restrict c) {
  trace_call(0x800EE46Cu);
  f_800F0F48(c); return; // 800EE46C
}

// fn_800EE470
void f_800EE470(Ctx* __restrict c) {
  trace_call(0x800EE470u);
  c->r[0]=R8(c->r[13]+0xFFFFC45Cu); // 800EE470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE474
  if (!crb(c,2)) { goto L_800EE498; } // 800EE478
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE47C
  c->r[0]=0u+0x00000001u; // 800EE480
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE484
  c->r[3]=c->r[4]+0x00000001u; // 800EE488
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE48C
  W32(c->r[13]+0xFFFFC458u,c->r[4]); // 800EE490
  W8(c->r[13]+0xFFFFC45Cu,c->r[0]); // 800EE494
L_800EE498:;
  c->r[3]=R32(c->r[13]+0xFFFFC458u); // 800EE498
  return; // 800EE49C
}

// fn_800EE4A0
void f_800EE4A0(Ctx* __restrict c) {
  trace_call(0x800EE4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE4A0
  c->r[0]=c->lr; // 800EE4A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE4A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE4AC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE4B0
  cmps(c,0,(int32_t)c->r[30],0); // 800EE4B4
  if (crb(c,2)) { goto L_800EE4FC; } // 800EE4B8
  c->lr=0x800EE4C0u; f_800EE284(c); // 800EE4BC
  c->r[31]=c->r[3]|c->r[3]; // 800EE4C0
  c->lr=0x800EE4C8u; f_800EE514(c); // 800EE4C4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE4C8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE4CC
  c->r[5]=0u+0x800F0000u; // 800EE4D0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE4D4
  c->r[4]=c->r[30]+c->r[4]; // 800EE4D8
  c->r[5]=c->r[5]+0xFFFFE510u; // 800EE4DC
  c->r[4]=c->r[4]+c->r[0]; // 800EE4E0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE4E4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE4E8
  cmpu(c,0,c->r[0],0x00000014u); // 800EE4EC
  if (!crb(c,0)) { goto L_800EE4FC; } // 800EE4F0
  c->r[0]=0u+0x00000014u; // 800EE4F4
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE4F8
L_800EE4FC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE4FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE500
  c->lr=c->r[0]; // 800EE504
  c->r[1]=c->r[1]+0x00000010u; // 800EE508
  return; // 800EE50C
}

// fn_800EE510
void f_800EE510(Ctx* __restrict c) {
  trace_call(0x800EE510u);
  f_800F0E9C(c); return; // 800EE510
}

// fn_800EE514
void f_800EE514(Ctx* __restrict c) {
  trace_call(0x800EE514u);
  c->r[0]=R8(c->r[13]+0xFFFFC454u); // 800EE514
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE518
  if (!crb(c,2)) { goto L_800EE53C; } // 800EE51C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE520
  c->r[0]=0u+0x00000001u; // 800EE524
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE528
  c->r[3]=c->r[4]+0x00000001u; // 800EE52C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE530
  W32(c->r[13]+0xFFFFC450u,c->r[4]); // 800EE534
  W8(c->r[13]+0xFFFFC454u,c->r[0]); // 800EE538
L_800EE53C:;
  c->r[3]=R32(c->r[13]+0xFFFFC450u); // 800EE53C
  return; // 800EE540
}

// fn_800EE544
void f_800EE544(Ctx* __restrict c) {
  trace_call(0x800EE544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE544
  c->r[0]=c->lr; // 800EE548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE54C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE550
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE554
  cmps(c,0,(int32_t)c->r[30],0); // 800EE558
  if (crb(c,2)) { goto L_800EE5A0; } // 800EE55C
  c->lr=0x800EE564u; f_800EE284(c); // 800EE560
  c->r[31]=c->r[3]|c->r[3]; // 800EE564
  c->lr=0x800EE56Cu; f_800EE5B8(c); // 800EE568
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE56C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE570
  c->r[5]=0u+0x800F0000u; // 800EE574
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE578
  c->r[4]=c->r[30]+c->r[4]; // 800EE57C
  c->r[5]=c->r[5]+0xFFFFE5B4u; // 800EE580
  c->r[4]=c->r[4]+c->r[0]; // 800EE584
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE588
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE58C
  cmpu(c,0,c->r[0],0x00000010u); // 800EE590
  if (!crb(c,0)) { goto L_800EE5A0; } // 800EE594
  c->r[0]=0u+0x00000010u; // 800EE598
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE59C
L_800EE5A0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE5A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE5A4
  c->lr=c->r[0]; // 800EE5A8
  c->r[1]=c->r[1]+0x00000010u; // 800EE5AC
  return; // 800EE5B0
}

// fn_800EE5B4
void f_800EE5B4(Ctx* __restrict c) {
  trace_call(0x800EE5B4u);
  f_800F0E2C(c); return; // 800EE5B4
}

// fn_800EE5B8
void f_800EE5B8(Ctx* __restrict c) {
  trace_call(0x800EE5B8u);
  c->r[0]=R8(c->r[13]+0xFFFFC44Cu); // 800EE5B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE5BC
  if (!crb(c,2)) { goto L_800EE5E0; } // 800EE5C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE5C4
  c->r[0]=0u+0x00000001u; // 800EE5C8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE5CC
  c->r[3]=c->r[4]+0x00000001u; // 800EE5D0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE5D4
  W32(c->r[13]+0xFFFFC448u,c->r[4]); // 800EE5D8
  W8(c->r[13]+0xFFFFC44Cu,c->r[0]); // 800EE5DC
L_800EE5E0:;
  c->r[3]=R32(c->r[13]+0xFFFFC448u); // 800EE5E0
  return; // 800EE5E4
}

// fn_800EE5E8
void f_800EE5E8(Ctx* __restrict c) {
  trace_call(0x800EE5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE5E8
  c->r[0]=c->lr; // 800EE5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE5F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE5F4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE5F8
  cmps(c,0,(int32_t)c->r[30],0); // 800EE5FC
  if (crb(c,2)) { goto L_800EE644; } // 800EE600
  c->lr=0x800EE608u; f_800EE284(c); // 800EE604
  c->r[31]=c->r[3]|c->r[3]; // 800EE608
  c->lr=0x800EE610u; f_800EE65C(c); // 800EE60C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE610
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE614
  c->r[5]=0u+0x800F0000u; // 800EE618
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE61C
  c->r[4]=c->r[30]+c->r[4]; // 800EE620
  c->r[5]=c->r[5]+0xFFFFE658u; // 800EE624
  c->r[4]=c->r[4]+c->r[0]; // 800EE628
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE62C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE630
  cmpu(c,0,c->r[0],0x00000014u); // 800EE634
  if (!crb(c,0)) { goto L_800EE644; } // 800EE638
  c->r[0]=0u+0x00000014u; // 800EE63C
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE640
L_800EE644:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE644
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE648
  c->lr=c->r[0]; // 800EE64C
  c->r[1]=c->r[1]+0x00000010u; // 800EE650
  return; // 800EE654
}

// fn_800EE658
void f_800EE658(Ctx* __restrict c) {
  trace_call(0x800EE658u);
  f_800F0D8C(c); return; // 800EE658
}

// fn_800EE65C
void f_800EE65C(Ctx* __restrict c) {
  trace_call(0x800EE65Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC444u); // 800EE65C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE660
  if (!crb(c,2)) { goto L_800EE684; } // 800EE664
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE668
  c->r[0]=0u+0x00000001u; // 800EE66C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE670
  c->r[3]=c->r[4]+0x00000001u; // 800EE674
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE678
  W32(c->r[13]+0xFFFFC440u,c->r[4]); // 800EE67C
  W8(c->r[13]+0xFFFFC444u,c->r[0]); // 800EE680
L_800EE684:;
  c->r[3]=R32(c->r[13]+0xFFFFC440u); // 800EE684
  return; // 800EE688
}

// fn_800EE68C
void f_800EE68C(Ctx* __restrict c) {
  trace_call(0x800EE68Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE68C
  c->r[0]=c->lr; // 800EE690
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE698
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE69C
  cmps(c,0,(int32_t)c->r[30],0); // 800EE6A0
  if (crb(c,2)) { goto L_800EE6E8; } // 800EE6A4
  c->lr=0x800EE6ACu; f_800EE284(c); // 800EE6A8
  c->r[31]=c->r[3]|c->r[3]; // 800EE6AC
  c->lr=0x800EE6B4u; f_800EE700(c); // 800EE6B0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE6B4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE6B8
  c->r[5]=0u+0x800F0000u; // 800EE6BC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE6C0
  c->r[4]=c->r[30]+c->r[4]; // 800EE6C4
  c->r[5]=c->r[5]+0xFFFFE6FCu; // 800EE6C8
  c->r[4]=c->r[4]+c->r[0]; // 800EE6CC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE6D0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE6D4
  cmpu(c,0,c->r[0],0x00000010u); // 800EE6D8
  if (!crb(c,0)) { goto L_800EE6E8; } // 800EE6DC
  c->r[0]=0u+0x00000010u; // 800EE6E0
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE6E4
L_800EE6E8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE6EC
  c->lr=c->r[0]; // 800EE6F0
  c->r[1]=c->r[1]+0x00000010u; // 800EE6F4
  return; // 800EE6F8
}

// fn_800EE6FC
void f_800EE6FC(Ctx* __restrict c) {
  trace_call(0x800EE6FCu);
  f_800F0C1C(c); return; // 800EE6FC
}

// fn_800EE700
void f_800EE700(Ctx* __restrict c) {
  trace_call(0x800EE700u);
  c->r[0]=R8(c->r[13]+0xFFFFC43Cu); // 800EE700
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE704
  if (!crb(c,2)) { goto L_800EE728; } // 800EE708
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE70C
  c->r[0]=0u+0x00000001u; // 800EE710
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE714
  c->r[3]=c->r[4]+0x00000001u; // 800EE718
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE71C
  W32(c->r[13]+0xFFFFC438u,c->r[4]); // 800EE720
  W8(c->r[13]+0xFFFFC43Cu,c->r[0]); // 800EE724
L_800EE728:;
  c->r[3]=R32(c->r[13]+0xFFFFC438u); // 800EE728
  return; // 800EE72C
}

// fn_800EE730
void f_800EE730(Ctx* __restrict c) {
  trace_call(0x800EE730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE730
  c->r[0]=c->lr; // 800EE734
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE738
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE73C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE740
  cmps(c,0,(int32_t)c->r[30],0); // 800EE744
  if (crb(c,2)) { goto L_800EE78C; } // 800EE748
  c->lr=0x800EE750u; f_800EE284(c); // 800EE74C
  c->r[31]=c->r[3]|c->r[3]; // 800EE750
  c->lr=0x800EE758u; f_800EE7A4(c); // 800EE754
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE758
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE75C
  c->r[5]=0u+0x800F0000u; // 800EE760
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE764
  c->r[4]=c->r[30]+c->r[4]; // 800EE768
  c->r[5]=c->r[5]+0xFFFFE7A0u; // 800EE76C
  c->r[4]=c->r[4]+c->r[0]; // 800EE770
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE774
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE778
  cmpu(c,0,c->r[0],0x00000010u); // 800EE77C
  if (!crb(c,0)) { goto L_800EE78C; } // 800EE780
  c->r[0]=0u+0x00000010u; // 800EE784
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE788
L_800EE78C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE78C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE790
  c->lr=c->r[0]; // 800EE794
  c->r[1]=c->r[1]+0x00000010u; // 800EE798
  return; // 800EE79C
}

// fn_800EE7A0
void f_800EE7A0(Ctx* __restrict c) {
  trace_call(0x800EE7A0u);
  f_800F0AA8(c); return; // 800EE7A0
}

// fn_800EE7A4
void f_800EE7A4(Ctx* __restrict c) {
  trace_call(0x800EE7A4u);
  c->r[0]=R8(c->r[13]+0xFFFFC434u); // 800EE7A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE7A8
  if (!crb(c,2)) { goto L_800EE7CC; } // 800EE7AC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE7B0
  c->r[0]=0u+0x00000001u; // 800EE7B4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE7B8
  c->r[3]=c->r[4]+0x00000001u; // 800EE7BC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE7C0
  W32(c->r[13]+0xFFFFC430u,c->r[4]); // 800EE7C4
  W8(c->r[13]+0xFFFFC434u,c->r[0]); // 800EE7C8
L_800EE7CC:;
  c->r[3]=R32(c->r[13]+0xFFFFC430u); // 800EE7CC
  return; // 800EE7D0
}

// fn_800EE7D4
void f_800EE7D4(Ctx* __restrict c) {
  trace_call(0x800EE7D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE7D4
  c->r[0]=c->lr; // 800EE7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE7DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE7E0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE7E4
  cmps(c,0,(int32_t)c->r[30],0); // 800EE7E8
  if (crb(c,2)) { goto L_800EE830; } // 800EE7EC
  c->lr=0x800EE7F4u; f_800EE284(c); // 800EE7F0
  c->r[31]=c->r[3]|c->r[3]; // 800EE7F4
  c->lr=0x800EE7FCu; f_800EE848(c); // 800EE7F8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE7FC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE800
  c->r[5]=0u+0x800F0000u; // 800EE804
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE808
  c->r[4]=c->r[30]+c->r[4]; // 800EE80C
  c->r[5]=c->r[5]+0xFFFFE844u; // 800EE810
  c->r[4]=c->r[4]+c->r[0]; // 800EE814
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE818
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE81C
  cmpu(c,0,c->r[0],0x00000010u); // 800EE820
  if (!crb(c,0)) { goto L_800EE830; } // 800EE824
  c->r[0]=0u+0x00000010u; // 800EE828
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE82C
L_800EE830:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE830
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE834
  c->lr=c->r[0]; // 800EE838
  c->r[1]=c->r[1]+0x00000010u; // 800EE83C
  return; // 800EE840
}

// fn_800EE844
void f_800EE844(Ctx* __restrict c) {
  trace_call(0x800EE844u);
  f_800F0974(c); return; // 800EE844
}

// fn_800EE848
void f_800EE848(Ctx* __restrict c) {
  trace_call(0x800EE848u);
  c->r[0]=R8(c->r[13]+0xFFFFC42Cu); // 800EE848
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE84C
  if (!crb(c,2)) { goto L_800EE870; } // 800EE850
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE854
  c->r[0]=0u+0x00000001u; // 800EE858
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE85C
  c->r[3]=c->r[4]+0x00000001u; // 800EE860
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE864
  W32(c->r[13]+0xFFFFC428u,c->r[4]); // 800EE868
  W8(c->r[13]+0xFFFFC42Cu,c->r[0]); // 800EE86C
L_800EE870:;
  c->r[3]=R32(c->r[13]+0xFFFFC428u); // 800EE870
  return; // 800EE874
}

// fn_800EE878
void f_800EE878(Ctx* __restrict c) {
  trace_call(0x800EE878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE878
  c->r[0]=c->lr; // 800EE87C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE880
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE884
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE888
  cmps(c,0,(int32_t)c->r[30],0); // 800EE88C
  if (crb(c,2)) { goto L_800EE8D4; } // 800EE890
  c->lr=0x800EE898u; f_800EE284(c); // 800EE894
  c->r[31]=c->r[3]|c->r[3]; // 800EE898
  c->lr=0x800EE8A0u; f_800EE8EC(c); // 800EE89C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE8A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE8A4
  c->r[5]=0u+0x800F0000u; // 800EE8A8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE8AC
  c->r[4]=c->r[30]+c->r[4]; // 800EE8B0
  c->r[5]=c->r[5]+0xFFFFE8E8u; // 800EE8B4
  c->r[4]=c->r[4]+c->r[0]; // 800EE8B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE8BC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE8C0
  cmpu(c,0,c->r[0],0x00000014u); // 800EE8C4
  if (!crb(c,0)) { goto L_800EE8D4; } // 800EE8C8
  c->r[0]=0u+0x00000014u; // 800EE8CC
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE8D0
L_800EE8D4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE8D8
  c->lr=c->r[0]; // 800EE8DC
  c->r[1]=c->r[1]+0x00000010u; // 800EE8E0
  return; // 800EE8E4
}

// fn_800EE8E8
void f_800EE8E8(Ctx* __restrict c) {
  trace_call(0x800EE8E8u);
  f_800F087C(c); return; // 800EE8E8
}

// fn_800EE8EC
void f_800EE8EC(Ctx* __restrict c) {
  trace_call(0x800EE8ECu);
  c->r[0]=R8(c->r[13]+0xFFFFC424u); // 800EE8EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE8F0
  if (!crb(c,2)) { goto L_800EE914; } // 800EE8F4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE8F8
  c->r[0]=0u+0x00000001u; // 800EE8FC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE900
  c->r[3]=c->r[4]+0x00000001u; // 800EE904
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE908
  W32(c->r[13]+0xFFFFC420u,c->r[4]); // 800EE90C
  W8(c->r[13]+0xFFFFC424u,c->r[0]); // 800EE910
L_800EE914:;
  c->r[3]=R32(c->r[13]+0xFFFFC420u); // 800EE914
  return; // 800EE918
}

// fn_800EE91C
void f_800EE91C(Ctx* __restrict c) {
  trace_call(0x800EE91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE91C
  c->r[0]=c->lr; // 800EE920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE928
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE92C
  cmps(c,0,(int32_t)c->r[30],0); // 800EE930
  if (crb(c,2)) { goto L_800EE978; } // 800EE934
  c->lr=0x800EE93Cu; f_800EE284(c); // 800EE938
  c->r[31]=c->r[3]|c->r[3]; // 800EE93C
  c->lr=0x800EE944u; f_800EE990(c); // 800EE940
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE944
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE948
  c->r[5]=0u+0x800F0000u; // 800EE94C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE950
  c->r[4]=c->r[30]+c->r[4]; // 800EE954
  c->r[5]=c->r[5]+0xFFFFE98Cu; // 800EE958
  c->r[4]=c->r[4]+c->r[0]; // 800EE95C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EE960
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EE964
  cmpu(c,0,c->r[0],0x00000018u); // 800EE968
  if (!crb(c,0)) { goto L_800EE978; } // 800EE96C
  c->r[0]=0u+0x00000018u; // 800EE970
  W32(c->r[30]+c->r[3],c->r[0]); // 800EE974
L_800EE978:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE97C
  c->lr=c->r[0]; // 800EE980
  c->r[1]=c->r[1]+0x00000010u; // 800EE984
  return; // 800EE988
}

// fn_800EE98C
void f_800EE98C(Ctx* __restrict c) {
  trace_call(0x800EE98Cu);
  f_800F0614(c); return; // 800EE98C
}

// fn_800EE990
void f_800EE990(Ctx* __restrict c) {
  trace_call(0x800EE990u);
  c->r[0]=R8(c->r[13]+0xFFFFC41Cu); // 800EE990
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE994
  if (!crb(c,2)) { goto L_800EE9B8; } // 800EE998
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EE99C
  c->r[0]=0u+0x00000001u; // 800EE9A0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EE9A4
  c->r[3]=c->r[4]+0x00000001u; // 800EE9A8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EE9AC
  W32(c->r[13]+0xFFFFC418u,c->r[4]); // 800EE9B0
  W8(c->r[13]+0xFFFFC41Cu,c->r[0]); // 800EE9B4
L_800EE9B8:;
  c->r[3]=R32(c->r[13]+0xFFFFC418u); // 800EE9B8
  return; // 800EE9BC
}

// fn_800EE9C0
void f_800EE9C0(Ctx* __restrict c) {
  trace_call(0x800EE9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE9C0
  c->r[0]=c->lr; // 800EE9C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE9C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE9CC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EE9D0
  cmps(c,0,(int32_t)c->r[30],0); // 800EE9D4
  if (crb(c,2)) { goto L_800EEA1C; } // 800EE9D8
  c->lr=0x800EE9E0u; f_800EE284(c); // 800EE9DC
  c->r[31]=c->r[3]|c->r[3]; // 800EE9E0
  c->lr=0x800EE9E8u; f_800EEA34(c); // 800EE9E4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EE9E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EE9EC
  c->r[5]=0u+0x800F0000u; // 800EE9F0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE9F4
  c->r[4]=c->r[30]+c->r[4]; // 800EE9F8
  c->r[5]=c->r[5]+0xFFFFEA30u; // 800EE9FC
  c->r[4]=c->r[4]+c->r[0]; // 800EEA00
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EEA04
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EEA08
  cmpu(c,0,c->r[0],0x00000014u); // 800EEA0C
  if (!crb(c,0)) { goto L_800EEA1C; } // 800EEA10
  c->r[0]=0u+0x00000014u; // 800EEA14
  W32(c->r[30]+c->r[3],c->r[0]); // 800EEA18
L_800EEA1C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEA1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEA20
  c->lr=c->r[0]; // 800EEA24
  c->r[1]=c->r[1]+0x00000010u; // 800EEA28
  return; // 800EEA2C
}

// fn_800EEA30
void f_800EEA30(Ctx* __restrict c) {
  trace_call(0x800EEA30u);
  f_800F0588(c); return; // 800EEA30
}

// fn_800EEA34
void f_800EEA34(Ctx* __restrict c) {
  trace_call(0x800EEA34u);
  c->r[0]=R8(c->r[13]+0xFFFFC414u); // 800EEA34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEA38
  if (!crb(c,2)) { goto L_800EEA5C; } // 800EEA3C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EEA40
  c->r[0]=0u+0x00000001u; // 800EEA44
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EEA48
  c->r[3]=c->r[4]+0x00000001u; // 800EEA4C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EEA50
  W32(c->r[13]+0xFFFFC410u,c->r[4]); // 800EEA54
  W8(c->r[13]+0xFFFFC414u,c->r[0]); // 800EEA58
L_800EEA5C:;
  c->r[3]=R32(c->r[13]+0xFFFFC410u); // 800EEA5C
  return; // 800EEA60
}

// fn_800EEA64
void f_800EEA64(Ctx* __restrict c) {
  trace_call(0x800EEA64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA64
  c->r[0]=c->lr; // 800EEA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEA6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEA70
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EEA74
  cmps(c,0,(int32_t)c->r[30],0); // 800EEA78
  if (crb(c,2)) { goto L_800EEAC0; } // 800EEA7C
  c->lr=0x800EEA84u; f_800EE284(c); // 800EEA80
  c->r[31]=c->r[3]|c->r[3]; // 800EEA84
  c->lr=0x800EEA8Cu; f_800EEAD8(c); // 800EEA88
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EEA8C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EEA90
  c->r[5]=0u+0x800F0000u; // 800EEA94
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EEA98
  c->r[4]=c->r[30]+c->r[4]; // 800EEA9C
  c->r[5]=c->r[5]+0xFFFFEAD4u; // 800EEAA0
  c->r[4]=c->r[4]+c->r[0]; // 800EEAA4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EEAA8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EEAAC
  cmpu(c,0,c->r[0],0x00000010u); // 800EEAB0
  if (!crb(c,0)) { goto L_800EEAC0; } // 800EEAB4
  c->r[0]=0u+0x00000010u; // 800EEAB8
  W32(c->r[30]+c->r[3],c->r[0]); // 800EEABC
L_800EEAC0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEAC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEAC4
  c->lr=c->r[0]; // 800EEAC8
  c->r[1]=c->r[1]+0x00000010u; // 800EEACC
  return; // 800EEAD0
}

// fn_800EEAD4
void f_800EEAD4(Ctx* __restrict c) {
  trace_call(0x800EEAD4u);
  f_800F0484(c); return; // 800EEAD4
}

// fn_800EEAD8
void f_800EEAD8(Ctx* __restrict c) {
  trace_call(0x800EEAD8u);
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 800EEAD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEADC
  if (!crb(c,2)) { goto L_800EEB00; } // 800EEAE0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EEAE4
  c->r[0]=0u+0x00000001u; // 800EEAE8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EEAEC
  c->r[3]=c->r[4]+0x00000001u; // 800EEAF0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EEAF4
  W32(c->r[13]+0xFFFFC408u,c->r[4]); // 800EEAF8
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 800EEAFC
L_800EEB00:;
  c->r[3]=R32(c->r[13]+0xFFFFC408u); // 800EEB00
  return; // 800EEB04
}

// fn_800EEB08
void f_800EEB08(Ctx* __restrict c) {
  trace_call(0x800EEB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEB08
  c->r[0]=c->lr; // 800EEB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEB10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEB14
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EEB18
  cmps(c,0,(int32_t)c->r[30],0); // 800EEB1C
  if (crb(c,2)) { goto L_800EEB64; } // 800EEB20
  c->lr=0x800EEB28u; f_800EE284(c); // 800EEB24
  c->r[31]=c->r[3]|c->r[3]; // 800EEB28
  c->lr=0x800EEB30u; f_800EEB7C(c); // 800EEB2C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EEB30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EEB34
  c->r[5]=0u+0x800F0000u; // 800EEB38
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EEB3C
  c->r[4]=c->r[30]+c->r[4]; // 800EEB40
  c->r[5]=c->r[5]+0xFFFFEB78u; // 800EEB44
  c->r[4]=c->r[4]+c->r[0]; // 800EEB48
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EEB4C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EEB50
  cmpu(c,0,c->r[0],0x00000010u); // 800EEB54
  if (!crb(c,0)) { goto L_800EEB64; } // 800EEB58
  c->r[0]=0u+0x00000010u; // 800EEB5C
  W32(c->r[30]+c->r[3],c->r[0]); // 800EEB60
L_800EEB64:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEB64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEB68
  c->lr=c->r[0]; // 800EEB6C
  c->r[1]=c->r[1]+0x00000010u; // 800EEB70
  return; // 800EEB74
}

// fn_800EEB78
void f_800EEB78(Ctx* __restrict c) {
  trace_call(0x800EEB78u);
  f_800F0410(c); return; // 800EEB78
}

// fn_800EEB7C
void f_800EEB7C(Ctx* __restrict c) {
  trace_call(0x800EEB7Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC404u); // 800EEB7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEB80
  if (!crb(c,2)) { goto L_800EEBA4; } // 800EEB84
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EEB88
  c->r[0]=0u+0x00000001u; // 800EEB8C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EEB90
  c->r[3]=c->r[4]+0x00000001u; // 800EEB94
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EEB98
  W32(c->r[13]+0xFFFFC400u,c->r[4]); // 800EEB9C
  W8(c->r[13]+0xFFFFC404u,c->r[0]); // 800EEBA0
L_800EEBA4:;
  c->r[3]=R32(c->r[13]+0xFFFFC400u); // 800EEBA4
  return; // 800EEBA8
}

// fn_800EEBAC
void f_800EEBAC(Ctx* __restrict c) {
  trace_call(0x800EEBACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEBAC
  c->r[0]=c->lr; // 800EEBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEBB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEBB8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800EEBBC
  cmps(c,0,(int32_t)c->r[30],0); // 800EEBC0
  if (crb(c,2)) { goto L_800EEC08; } // 800EEBC4
  c->lr=0x800EEBCCu; f_800EE284(c); // 800EEBC8
  c->r[31]=c->r[3]|c->r[3]; // 800EEBCC
  c->lr=0x800EEBD4u; f_800EEC20(c); // 800EEBD0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800EEBD4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EEBD8
  c->r[5]=0u+0x800F0000u; // 800EEBDC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EEBE0
  c->r[4]=c->r[30]+c->r[4]; // 800EEBE4
  c->r[5]=c->r[5]+0xFFFFEC1Cu; // 800EEBE8
  c->r[4]=c->r[4]+c->r[0]; // 800EEBEC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EEBF0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800EEBF4
  cmpu(c,0,c->r[0],0x00000010u); // 800EEBF8
  if (!crb(c,0)) { goto L_800EEC08; } // 800EEBFC
  c->r[0]=0u+0x00000010u; // 800EEC00
  W32(c->r[30]+c->r[3],c->r[0]); // 800EEC04
L_800EEC08:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEC08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEC0C
  c->lr=c->r[0]; // 800EEC10
  c->r[1]=c->r[1]+0x00000010u; // 800EEC14
  return; // 800EEC18
}

// fn_800EEC1C
void f_800EEC1C(Ctx* __restrict c) {
  trace_call(0x800EEC1Cu);
  f_800F0310(c); return; // 800EEC1C
}

// fn_800EEC20
void f_800EEC20(Ctx* __restrict c) {
  trace_call(0x800EEC20u);
  c->r[0]=R8(c->r[13]+0xFFFFC3FCu); // 800EEC20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEC24
  if (!crb(c,2)) { goto L_800EEC48; } // 800EEC28
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800EEC2C
  c->r[0]=0u+0x00000001u; // 800EEC30
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800EEC34
  c->r[3]=c->r[4]+0x00000001u; // 800EEC38
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800EEC3C
  W32(c->r[13]+0xFFFFC3F8u,c->r[4]); // 800EEC40
  W8(c->r[13]+0xFFFFC3FCu,c->r[0]); // 800EEC44
L_800EEC48:;
  c->r[3]=R32(c->r[13]+0xFFFFC3F8u); // 800EEC48
  return; // 800EEC4C
}

// fn_800EEC50
void f_800EEC50(Ctx* __restrict c) {
  trace_call(0x800EEC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC50
  c->r[0]=c->lr; // 800EEC54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEC5C
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800EEC60
  cmps(c,0,(int32_t)c->r[31],0); // 800EEC64
  if (crb(c,2)) { goto L_800EECD0; } // 800EEC68
  c->lr=0x800EEC70u; f_800EE284(c); // 800EEC6C
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800EEC70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEC74
  if (!crb(c,2)) { goto L_800EEC98; } // 800EEC78
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800EEC7C
  c->r[0]=0u+0x00000001u; // 800EEC80
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800EEC84
  c->r[4]=c->r[5]+0x00000001u; // 800EEC88
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800EEC8C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800EEC90
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800EEC94
L_800EEC98:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800EEC98
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800EEC9C
  c->r[5]=0u+0x800F0000u; // 800EECA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EECA4
  c->r[4]=c->r[31]+c->r[4]; // 800EECA8
  c->r[5]=c->r[5]+0xFFFFECE4u; // 800EECAC
  c->r[4]=c->r[4]+c->r[0]; // 800EECB0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EECB4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EECB8
  c->r[0]=R32(c->r[31]+c->r[3]); // 800EECBC
  cmpu(c,0,c->r[0],0x00000010u); // 800EECC0
  if (!crb(c,0)) { goto L_800EECD0; } // 800EECC4
  c->r[0]=0u+0x00000010u; // 800EECC8
  W32(c->r[31]+c->r[3],c->r[0]); // 800EECCC
L_800EECD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EECD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EECD4
  c->lr=c->r[0]; // 800EECD8
  c->r[1]=c->r[1]+0x00000010u; // 800EECDC
  return; // 800EECE0
}

// fn_800EECE4
void f_800EECE4(Ctx* __restrict c) {
  trace_call(0x800EECE4u);
  f_800F000C(c); return; // 800EECE4
}

// fn_800EECE8
void f_800EECE8(Ctx* __restrict c) {
  trace_call(0x800EECE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EECE8
  c->r[0]=c->lr; // 800EECEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EECF0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EECF4
  c->r[27]=c->r[3]|c->r[3]; // 800EECF8
  c->r[26]=c->r[5]|c->r[5]; // 800EECFC
  c->r[31]=c->r[27]|c->r[27]; // 800EED00
  c->r[30]=c->r[27]|c->r[27]; // 800EED04
  c->r[28]=c->r[27]|c->r[27]; // 800EED08
  c->lr=0x800EED10u; f_800EE284(c); // 800EED0C
  c->r[4]=0u+0x806D0000u; // 800EED10
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 800EED14
  c->r[0]=0u+0x00000000u; // 800EED18
  W32(c->r[27]+0x00000000u,c->r[3]); // 800EED1C
  c->r[4]=c->r[4]+0x000038C0u; // 800EED20
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800EED24
  W32(c->r[27]+0x00000004u,c->r[0]); // 800EED28
  W32(c->r[27]+0x00000008u,c->r[0]); // 800EED2C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800EED30
  W8(c->r[27]+0x00000010u,c->r[0]); // 800EED34
  W32(c->r[27]+0x00000014u,c->r[0]); // 800EED38
  W32(c->r[27]+0x00000018u,c->r[0]); // 800EED3C
  W32(c->r[27]+0x00000020u,c->r[0]); // 800EED40
  W32(c->r[27]+0x00000024u,c->r[0]); // 800EED44
  if (crb(c,2)) { goto L_800EED50; } // 800EED48
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 800EED4C
L_800EED50:;
  c->lr=0x800EED54u; f_800797AC(c); // 800EED50
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EED54
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800EED58
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EED5C
  if (!crb(c,2)) { goto L_800EED6C; } // 800EED60
  c->r[0]=0u+0x00000001u; // 800EED64
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EED68
L_800EED6C:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800EED6C
  c->r[5]=0u+0x0000012Cu; // 800EED70
  c->r[4]=c->r[6]+0x00000001u; // 800EED74
  c->r[0]=divwu(c->r[4],c->r[5]); // 800EED78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800EED7C
  c->r[7]=c->r[4]-c->r[0]; // 800EED80
  goto L_800EEDD0; // 800EED84
L_800EED88:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800EED88
  c->r[4]=c->r[3]+c->r[0]; // 800EED8C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800EED90
  cmps(c,0,(int32_t)c->r[0],0); // 800EED94
  if (!crb(c,2)) { goto L_800EEDC0; } // 800EED98
  W32(c->r[3]+0x00000004u,c->r[7]); // 800EED9C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EEDA0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800EEDA4
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800EEDA8
  c->r[4]=R32(c->r[3]+0x00000000u); // 800EEDAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EEDB0
  W32(c->r[1]+0x00000010u,c->r[4]); // 800EEDB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEDB8
  goto L_800EEDEC; // 800EEDBC
L_800EEDC0:;
  c->r[4]=c->r[7]+0x00000001u; // 800EEDC0
  c->r[0]=divwu(c->r[4],c->r[5]); // 800EEDC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800EEDC8
  c->r[7]=c->r[4]-c->r[0]; // 800EEDCC
L_800EEDD0:;
  cmpu(c,0,c->r[7],c->r[6]); // 800EEDD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800EED88; } // 800EEDD4
  c->r[0]=0u+0x00000000u; // 800EEDD8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800EEDDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EEDE0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EEDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEDE8
L_800EEDEC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800EEDEC
  c->r[24]=c->r[27]+0x00000028u; // 800EEDF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEDF4
  c->r[3]=c->r[24]|c->r[24]; // 800EEDF8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800EEDFC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EEE00
  W32(c->r[27]+0x00000020u,c->r[4]); // 800EEE04
  W32(c->r[27]+0x00000024u,c->r[0]); // 800EEE08
  c->lr=0x800EEE10u; f_800506C0(c); // 800EEE0C
  cmps(c,0,(int32_t)c->r[24],0); // 800EEE10
  c->r[3]=c->r[24]|c->r[24]; // 800EEE14
  if (crb(c,2)) { goto L_800EEE20; } // 800EEE18
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800EEE1C
L_800EEE20:;
  c->r[29]=0u+0x00000001u; // 800EEE20
  W32(c->r[24]+0x00000008u,c->r[3]); // 800EEE24
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800EEE28
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800EEE2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEE30
  if (!crb(c,2)) { goto L_800EEE74; } // 800EEE34
  c->r[25]=0u+0x80740000u; // 800EEE38
  c->r[3]=c->r[25]+0x000074BCu; // 800EEE3C
  c->lr=0x800EEE44u; f_800506C0(c); // 800EEE40
  c->r[6]=0u+0x806D0000u; // 800EEE44
  c->r[4]=0u+0x80060000u; // 800EEE48
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800EEE4C
  c->r[3]=c->r[25]+0x000074BCu; // 800EEE50
  c->r[0]=c->r[6]+0x00000008u; // 800EEE54
  c->r[5]=0u+0x80750000u; // 800EEE58
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EEE5C
  c->r[4]=c->r[4]+0x000057D4u; // 800EEE60
  c->r[5]=c->r[5]+0x00003B58u; // 800EEE64
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EEE68
  c->lr=0x800EEE70u; f_803A92B8(c); // 800EEE6C
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 800EEE70
L_800EEE74:;
  c->r[3]=0u+0x80740000u; // 800EEE74
  c->r[5]=c->r[24]|c->r[24]; // 800EEE78
  c->r[3]=c->r[3]+0x000074BCu; // 800EEE7C
  c->r[4]=c->r[3]|c->r[3]; // 800EEE80
  c->lr=0x800EEE88u; f_802DDCA8(c); // 800EEE84
  c->r[24]=c->r[27]+0x00000038u; // 800EEE88
  c->r[3]=c->r[24]|c->r[24]; // 800EEE8C
  c->lr=0x800EEE94u; f_800506C0(c); // 800EEE90
  cmps(c,0,(int32_t)c->r[24],0); // 800EEE94
  c->r[0]=c->r[24]|c->r[24]; // 800EEE98
  if (crb(c,2)) { goto L_800EEEA4; } // 800EEE9C
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 800EEEA0
L_800EEEA4:;
  c->r[29]=c->r[27]+0x00000044u; // 800EEEA4
  W32(c->r[24]+0x00000008u,c->r[0]); // 800EEEA8
  c->r[3]=c->r[29]|c->r[29]; // 800EEEAC
  c->lr=0x800EEEB4u; f_800506C0(c); // 800EEEB0
  cmps(c,0,(int32_t)c->r[29],0); // 800EEEB4
  c->r[0]=c->r[29]|c->r[29]; // 800EEEB8
  if (crb(c,2)) { goto L_800EEEC4; } // 800EEEBC
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 800EEEC0
L_800EEEC4:;
  c->r[3]=0u+0x806F0000u; // 800EEEC4
  c->r[25]=0u+0x00000000u; // 800EEEC8
  c->r[3]=c->r[3]+0x00000E80u; // 800EEECC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800EEED0
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 800EEED4
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800EEED8
  W32(c->r[27]+0x00000058u,c->r[25]); // 800EEEDC
  W32(c->r[27]+0x00000064u,c->r[25]); // 800EEEE0
  c->lr=0x800EEEE8u; f_8007BDCC(c); // 800EEEE4
  c->r[0]=c->r[13]+0xFFFF8114u; // 800EEEE8
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800EEEEC
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800EEEF0
  W32(c->r[27]+0x000000A4u,c->r[25]); // 800EEEF4
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800EEEF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEEFC
  if (!crb(c,2)) { goto L_800EEF20; } // 800EEF00
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EEF04
  c->r[0]=0u+0x00000001u; // 800EEF08
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EEF0C
  c->r[3]=c->r[4]+0x00000001u; // 800EEF10
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EEF14
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800EEF18
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800EEF1C
L_800EEF20:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800EEF20
  c->r[3]=c->r[13]+0xFFFF8110u; // 800EEF24
  c->r[0]=0u+0x00000000u; // 800EEF28
  W32(c->r[27]+0x000000A8u,c->r[4]); // 800EEF2C
  W32(c->r[27]+0x000000ACu,c->r[3]); // 800EEF30
  W32(c->r[27]+0x000000B0u,c->r[0]); // 800EEF34
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800EEF38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEF3C
  if (!crb(c,2)) { goto L_800EEF60; } // 800EEF40
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EEF44
  c->r[0]=0u+0x00000001u; // 800EEF48
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EEF4C
  c->r[3]=c->r[4]+0x00000001u; // 800EEF50
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EEF54
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800EEF58
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800EEF5C
L_800EEF60:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800EEF60
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800EEF64
  c->r[0]=0u+0x00000000u; // 800EEF68
  W32(c->r[27]+0x000000B4u,c->r[4]); // 800EEF6C
  W32(c->r[27]+0x000000B8u,c->r[3]); // 800EEF70
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800EEF74
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800EEF78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEF7C
  if (!crb(c,2)) { goto L_800EEFA0; } // 800EEF80
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EEF84
  c->r[0]=0u+0x00000001u; // 800EEF88
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EEF8C
  c->r[3]=c->r[4]+0x00000001u; // 800EEF90
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EEF94
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800EEF98
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800EEF9C
L_800EEFA0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800EEFA0
  c->r[3]=c->r[13]+0xFFFF8108u; // 800EEFA4
  c->r[0]=0u+0x00000000u; // 800EEFA8
  W32(c->r[27]+0x000000C0u,c->r[4]); // 800EEFAC
  W32(c->r[27]+0x000000C4u,c->r[3]); // 800EEFB0
  W32(c->r[27]+0x000000C8u,c->r[0]); // 800EEFB4
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800EEFB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EEFBC
  if (!crb(c,2)) { goto L_800EEFE0; } // 800EEFC0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800EEFC4
  c->r[0]=0u+0x00000001u; // 800EEFC8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800EEFCC
  c->r[3]=c->r[4]+0x00000001u; // 800EEFD0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800EEFD4
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800EEFD8
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800EEFDC
L_800EEFE0:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800EEFE0
  c->r[0]=c->r[13]+0xFFFF8104u; // 800EEFE4
  c->r[25]=0u+0x00000000u; // 800EEFE8
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800EEFEC
  c->r[3]=c->r[27]+0x000000D8u; // 800EEFF0
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800EEFF4
  W32(c->r[27]+0x000000D4u,c->r[25]); // 800EEFF8
  c->lr=0x800EF000u; f_800506C0(c); // 800EEFFC
  c->r[4]=0u+0x806F0000u; // 800EF000
  c->r[3]=0u+0x00000006u; // 800EF004
  c->r[4]=c->r[4]+0x000007A0u; // 800EF008
  c->r[29]=c->r[27]+0x000000FCu; // 800EF00C
  c->r[0]=c->r[4]+0x00000024u; // 800EF010
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800EF014
  c->r[3]=c->r[29]+0x0000000Cu; // 800EF018
  W32(c->r[27]+0x000000ECu,c->r[25]); // 800EF01C
  W32(c->r[27]+0x000000F8u,c->r[25]); // 800EF020
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800EF024
  W32(c->r[27]+0x00000100u,c->r[0]); // 800EF028
  c->lr=0x800EF030u; f_800506C0(c); // 800EF02C
  c->r[3]=c->r[29]+0x00000018u; // 800EF030
  c->lr=0x800EF038u; f_800506C0(c); // 800EF034
  W32(c->r[29]+0x00000024u,c->r[25]); // 800EF038
  c->r[3]=c->r[29]+0x000000B0u; // 800EF03C
  c->lr=0x800EF044u; f_800506C0(c); // 800EF040
  c->r[12]=R32(c->r[29]+0x00000000u); // 800EF044
  c->r[3]=c->r[29]|c->r[29]; // 800EF048
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800EF04C
  c->ctr=c->r[12]; // 800EF050
  if (true) { c->lr=0x800EF058u; dispatch(c,c->ctr); } // 800EF054
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800EF058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF05C
  if (!crb(c,2)) { goto L_800EF07C; } // 800EF060
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800EF064
  c->r[0]=0u+0x00000001u; // 800EF068
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800EF06C
  c->r[3]=c->r[3]+0x00000001u; // 800EF070
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800EF074
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800EF078
L_800EF07C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800EF07C
  c->r[5]=0u+0x806F0000u; // 800EF080
  c->r[5]=c->r[5]+0x000007F8u; // 800EF084
  c->r[0]=0u+0x00000032u; // 800EF088
  c->r[4]=c->r[5]+0x00000024u; // 800EF08C
  W32(c->r[29]+0x00000008u,c->r[3]); // 800EF090
  c->r[6]=0u+0x00000000u; // 800EF094
  c->r[3]=0u+0x00000000u; // 800EF098
  W32(c->r[29]+0x00000000u,c->r[5]); // 800EF09C
  W32(c->r[29]+0x00000004u,c->r[4]); // 800EF0A0
  c->ctr=c->r[0]; // 800EF0A4
L_800EF0A8:;
  c->r[4]=c->r[29]+c->r[3]; // 800EF0A8
  c->r[3]=c->r[3]+0x00000004u; // 800EF0AC
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800EF0B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF0A8; } // 800EF0B4
  c->r[3]=0u+0x806D0000u; // 800EF0B8
  c->r[7]=0u+0x00000000u; // 800EF0BC
  c->r[3]=c->r[3]+0x00003868u; // 800EF0C0
  c->r[0]=0u+0x0000000Au; // 800EF0C4
  c->r[4]=c->r[3]+0x00000024u; // 800EF0C8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800EF0CC
  c->r[8]=0u+0x00000000u; // 800EF0D0
  c->r[3]=0u+0x00000000u; // 800EF0D4
  W32(c->r[29]+0x00000004u,c->r[4]); // 800EF0D8
  c->r[6]=0u+0xFFFFFFFFu; // 800EF0DC
  W32(c->r[27]+0x00000314u,c->r[7]); // 800EF0E0
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800EF0E4
  W32(c->r[27]+0x00000054u,c->r[7]); // 800EF0E8
  W32(c->r[27]+0x00000310u,c->r[27]); // 800EF0EC
  c->ctr=c->r[0]; // 800EF0F0
L_800EF0F4:;
  c->r[5]=c->r[27]+c->r[3]; // 800EF0F4
  c->r[4]=c->r[27]+c->r[8]; // 800EF0F8
  W32(c->r[5]+0x00000068u,c->r[6]); // 800EF0FC
  c->r[8]=c->r[8]+0x00000001u; // 800EF100
  c->r[3]=c->r[3]+0x00000004u; // 800EF104
  W8(c->r[4]+0x00000090u,c->r[7]); // 800EF108
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF0F4; } // 800EF10C
  c->r[25]=c->r[27]+0x00000318u; // 800EF110
  c->r[3]=c->r[25]|c->r[25]; // 800EF114
  c->lr=0x800EF11Cu; f_800506C0(c); // 800EF118
  cmps(c,0,(int32_t)c->r[25],0); // 800EF11C
  c->r[3]=c->r[25]|c->r[25]; // 800EF120
  if (crb(c,2)) { goto L_800EF12C; } // 800EF124
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800EF128
L_800EF12C:;
  c->r[29]=0u+0x00000001u; // 800EF12C
  W32(c->r[25]+0x00000008u,c->r[3]); // 800EF130
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 800EF134
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800EF138
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF13C
  if (!crb(c,2)) { goto L_800EF180; } // 800EF140
  c->r[28]=0u+0x80750000u; // 800EF144
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800EF148
  c->lr=0x800EF150u; f_800506C0(c); // 800EF14C
  c->r[6]=0u+0x806D0000u; // 800EF150
  c->r[4]=0u+0x80080000u; // 800EF154
  c->r[6]=c->r[6]+0x000038D8u; // 800EF158
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800EF15C
  c->r[0]=c->r[6]+0x00000008u; // 800EF160
  c->r[5]=0u+0x80750000u; // 800EF164
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EF168
  c->r[4]=c->r[4]+0xFFFF9844u; // 800EF16C
  c->r[5]=c->r[5]+0x00003B4Cu; // 800EF170
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EF174
  c->lr=0x800EF17Cu; f_803A92B8(c); // 800EF178
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800EF17C
L_800EF180:;
  c->r[3]=0u+0x80750000u; // 800EF180
  c->r[5]=c->r[25]|c->r[25]; // 800EF184
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800EF188
  c->r[4]=c->r[3]|c->r[3]; // 800EF18C
  c->lr=0x800EF194u; f_802DDCA8(c); // 800EF190
  c->r[3]=0u+0x806D0000u; // 800EF194
  c->r[0]=0u+0x00000000u; // 800EF198
  c->r[3]=c->r[3]+0xFFFFD974u; // 800EF19C
  c->r[5]=0u+0xFFFFFFFFu; // 800EF1A0
  c->r[4]=0u+0x00000001u; // 800EF1A4
  c->r[24]=c->r[27]+0x0000032Cu; // 800EF1A8
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800EF1AC
  c->r[3]=c->r[24]|c->r[24]; // 800EF1B0
  W32(c->r[27]+0x00000328u,c->r[5]); // 800EF1B4
  W32(c->r[27]+0x000000ECu,c->r[4]); // 800EF1B8
  W32(c->r[27]+0x00000054u,c->r[0]); // 800EF1BC
  W32(c->r[27]+0x00000314u,c->r[0]); // 800EF1C0
  c->lr=0x800EF1C8u; f_800506C0(c); // 800EF1C4
  cmps(c,0,(int32_t)c->r[24],0); // 800EF1C8
  c->r[3]=c->r[24]|c->r[24]; // 800EF1CC
  if (crb(c,2)) { goto L_800EF1D8; } // 800EF1D0
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 800EF1D4
L_800EF1D8:;
  c->r[29]=0u+0x00000001u; // 800EF1D8
  W32(c->r[24]+0x00000008u,c->r[3]); // 800EF1DC
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800EF1E0
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 800EF1E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF1E8
  if (!crb(c,2)) { goto L_800EF22C; } // 800EF1EC
  c->r[28]=0u+0x80730000u; // 800EF1F0
  c->r[3]=c->r[28]+0x000073A8u; // 800EF1F4
  c->lr=0x800EF1FCu; f_800506C0(c); // 800EF1F8
  c->r[6]=0u+0x806D0000u; // 800EF1FC
  c->r[4]=0u+0x80050000u; // 800EF200
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 800EF204
  c->r[3]=c->r[28]+0x000073A8u; // 800EF208
  c->r[0]=c->r[6]+0x00000008u; // 800EF20C
  c->r[5]=0u+0x80750000u; // 800EF210
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EF214
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 800EF218
  c->r[5]=c->r[5]+0x00003B40u; // 800EF21C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EF220
  c->lr=0x800EF228u; f_803A92B8(c); // 800EF224
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 800EF228
L_800EF22C:;
  c->r[3]=0u+0x80730000u; // 800EF22C
  c->r[5]=c->r[24]|c->r[24]; // 800EF230
  c->r[3]=c->r[3]+0x000073A8u; // 800EF234
  c->r[4]=c->r[3]|c->r[3]; // 800EF238
  c->lr=0x800EF240u; f_802DDCA8(c); // 800EF23C
  c->r[24]=c->r[27]+0x0000033Cu; // 800EF240
  c->r[3]=c->r[24]|c->r[24]; // 800EF244
  c->lr=0x800EF24Cu; f_800506C0(c); // 800EF248
  cmps(c,0,(int32_t)c->r[24],0); // 800EF24C
  c->r[3]=c->r[24]|c->r[24]; // 800EF250
  if (crb(c,2)) { goto L_800EF25C; } // 800EF254
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 800EF258
L_800EF25C:;
  c->r[29]=0u+0x00000001u; // 800EF25C
  W32(c->r[24]+0x00000008u,c->r[3]); // 800EF260
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800EF264
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800EF268
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF26C
  if (!crb(c,2)) { goto L_800EF2B0; } // 800EF270
  c->r[28]=0u+0x80750000u; // 800EF274
  c->r[3]=c->r[28]+0xFFFF8158u; // 800EF278
  c->lr=0x800EF280u; f_800506C0(c); // 800EF27C
  c->r[6]=0u+0x806D0000u; // 800EF280
  c->r[4]=0u+0x80080000u; // 800EF284
  c->r[6]=c->r[6]+0x000038F0u; // 800EF288
  c->r[3]=c->r[28]+0xFFFF8158u; // 800EF28C
  c->r[0]=c->r[6]+0x00000008u; // 800EF290
  c->r[5]=0u+0x80750000u; // 800EF294
  W32(c->r[3]+0x00000010u,c->r[6]); // 800EF298
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800EF29C
  c->r[5]=c->r[5]+0x00003B34u; // 800EF2A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800EF2A4
  c->lr=0x800EF2ACu; f_803A92B8(c); // 800EF2A8
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 800EF2AC
L_800EF2B0:;
  c->r[3]=0u+0x80750000u; // 800EF2B0
  c->r[5]=c->r[24]|c->r[24]; // 800EF2B4
  c->r[3]=c->r[3]+0xFFFF8158u; // 800EF2B8
  c->r[4]=c->r[3]|c->r[3]; // 800EF2BC
  c->lr=0x800EF2C4u; f_802DDCA8(c); // 800EF2C0
  c->r[3]=0u+0x806D0000u; // 800EF2C4
  W32(c->r[27]+0x00000054u,c->r[26]); // 800EF2C8
  c->r[3]=c->r[3]+0x00004AE8u; // 800EF2CC
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800EF2D0
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800EF2D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF2D8
  if (!crb(c,2)) { goto L_800EF2F8; } // 800EF2DC
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800EF2E0
  c->r[0]=0u+0x00000001u; // 800EF2E4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800EF2E8
  c->r[3]=c->r[3]+0x00000001u; // 800EF2EC
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800EF2F0
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800EF2F4
L_800EF2F8:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800EF2F8
  W32(c->r[27]+0x00000328u,c->r[0]); // 800EF2FC
  c->r[0]=R8(c->r[13]+0xFFFFC484u); // 800EF300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF304
  if (!crb(c,2)) { goto L_800EF324; } // 800EF308
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800EF30C
  c->r[0]=0u+0x00000001u; // 800EF310
  W32(c->r[13]+0xFFFFC480u,c->r[3]); // 800EF314
  c->r[3]=c->r[3]+0x00000001u; // 800EF318
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800EF31C
  W8(c->r[13]+0xFFFFC484u,c->r[0]); // 800EF320
L_800EF324:;
  c->r[0]=R32(c->r[13]+0xFFFFC480u); // 800EF324
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 800EF328
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 800EF32C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF330
  if (!crb(c,2)) { goto L_800EF350; } // 800EF334
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800EF338
  c->r[0]=0u+0x00000001u; // 800EF33C
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 800EF340
  c->r[3]=c->r[3]+0x00000001u; // 800EF344
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800EF348
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 800EF34C
L_800EF350:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 800EF350
  c->r[5]=0u+0x806D0000u; // 800EF354
  c->r[5]=c->r[5]+0xFFFFE468u; // 800EF358
  W32(c->r[27]+0x00000350u,c->r[0]); // 800EF35C
  c->r[3]=c->r[27]+0x000003B0u; // 800EF360
  c->r[4]=0u+0x00000000u; // 800EF364
  W32(c->r[27]+0x00000400u,c->r[5]); // 800EF368
  c->r[5]=0u+0x00000050u; // 800EF36C
  c->lr=0x800EF374u; f_800043EC(c); // 800EF370
  c->r[4]=0u+0x806D0000u; // 800EF374
  c->r[3]=c->r[27]+0x00000450u; // 800EF378
  c->r[4]=c->r[4]+0xFFFFE170u; // 800EF37C
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800EF380
  c->r[0]=c->r[4]+0x00000044u; // 800EF384
  W32(c->r[27]+0x00000400u,c->r[0]); // 800EF388
  c->lr=0x800EF390u; f_8007BDFC(c); // 800EF38C
  c->r[3]=c->r[27]+0x000004C4u; // 800EF390
  c->lr=0x800EF398u; f_8007BDFC(c); // 800EF394
  c->r[3]=c->r[27]+0x00000538u; // 800EF398
  c->r[4]=0u+0x00000000u; // 800EF39C
  c->r[5]=0u+0x00000008u; // 800EF3A0
  c->lr=0x800EF3A8u; f_800043EC(c); // 800EF3A4
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF3A8
  cmps(c,0,(int32_t)c->r[24],0); // 800EF3AC
  if (crb(c,2)) { goto L_800EF3F4; } // 800EF3B0
  c->lr=0x800EF3B8u; f_800EE284(c); // 800EF3B4
  c->r[26]=c->r[3]|c->r[3]; // 800EF3B8
  c->lr=0x800EF3C0u; f_8007BDCC(c); // 800EF3BC
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 800EF3C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF3C4
  c->r[5]=0u+0x800F0000u; // 800EF3C8
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800EF3CC
  c->r[4]=c->r[24]+c->r[4]; // 800EF3D0
  c->r[5]=c->r[5]+0xFFFFF7C8u; // 800EF3D4
  c->r[4]=c->r[4]+c->r[0]; // 800EF3D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF3DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF3E0
  cmpu(c,0,c->r[0],0x0000000Cu); // 800EF3E4
  if (!crb(c,0)) { goto L_800EF3F4; } // 800EF3E8
  c->r[0]=0u+0x0000000Cu; // 800EF3EC
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF3F0
L_800EF3F4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF3F4
  cmps(c,0,(int32_t)c->r[24],0); // 800EF3F8
  if (crb(c,2)) { goto L_800EF464; } // 800EF3FC
  c->lr=0x800EF404u; f_800EE284(c); // 800EF400
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800EF404
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF408
  if (!crb(c,2)) { goto L_800EF42C; } // 800EF40C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF410
  c->r[0]=0u+0x00000001u; // 800EF414
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF418
  c->r[4]=c->r[5]+0x00000001u; // 800EF41C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF420
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800EF424
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800EF428
L_800EF42C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF42C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800EF430
  c->r[5]=0u+0x800F0000u; // 800EF434
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF438
  c->r[4]=c->r[24]+c->r[4]; // 800EF43C
  c->r[5]=c->r[5]+0xFFFFF7C4u; // 800EF440
  c->r[4]=c->r[4]+c->r[0]; // 800EF444
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF448
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF44C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF450
  cmpu(c,0,c->r[0],0x00000018u); // 800EF454
  if (!crb(c,0)) { goto L_800EF464; } // 800EF458
  c->r[0]=0u+0x00000018u; // 800EF45C
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF460
L_800EF464:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF464
  cmps(c,0,(int32_t)c->r[24],0); // 800EF468
  if (crb(c,2)) { goto L_800EF4D4; } // 800EF46C
  c->lr=0x800EF474u; f_800EE284(c); // 800EF470
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800EF474
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF478
  if (!crb(c,2)) { goto L_800EF49C; } // 800EF47C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF480
  c->r[0]=0u+0x00000001u; // 800EF484
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF488
  c->r[4]=c->r[5]+0x00000001u; // 800EF48C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF490
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800EF494
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800EF498
L_800EF49C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF49C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800EF4A0
  c->r[5]=0u+0x800F0000u; // 800EF4A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF4A8
  c->r[4]=c->r[24]+c->r[4]; // 800EF4AC
  c->r[5]=c->r[5]+0xFFFFF7C0u; // 800EF4B0
  c->r[4]=c->r[4]+c->r[0]; // 800EF4B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF4B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF4BC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF4C0
  cmpu(c,0,c->r[0],0x0000006Cu); // 800EF4C4
  if (!crb(c,0)) { goto L_800EF4D4; } // 800EF4C8
  c->r[0]=0u+0x0000006Cu; // 800EF4CC
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF4D0
L_800EF4D4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF4D4
  cmps(c,0,(int32_t)c->r[24],0); // 800EF4D8
  if (crb(c,2)) { goto L_800EF544; } // 800EF4DC
  c->lr=0x800EF4E4u; f_800EE284(c); // 800EF4E0
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800EF4E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF4E8
  if (!crb(c,2)) { goto L_800EF50C; } // 800EF4EC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF4F0
  c->r[0]=0u+0x00000001u; // 800EF4F4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF4F8
  c->r[4]=c->r[5]+0x00000001u; // 800EF4FC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF500
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 800EF504
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800EF508
L_800EF50C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF50C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 800EF510
  c->r[5]=0u+0x800F0000u; // 800EF514
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF518
  c->r[4]=c->r[24]+c->r[4]; // 800EF51C
  c->r[5]=c->r[5]+0xFFFFF7BCu; // 800EF520
  c->r[4]=c->r[4]+c->r[0]; // 800EF524
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF528
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF52C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF530
  cmpu(c,0,c->r[0],0x0000002Cu); // 800EF534
  if (!crb(c,0)) { goto L_800EF544; } // 800EF538
  c->r[0]=0u+0x0000002Cu; // 800EF53C
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF540
L_800EF544:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF544
  cmps(c,0,(int32_t)c->r[24],0); // 800EF548
  if (crb(c,2)) { goto L_800EF5B4; } // 800EF54C
  c->lr=0x800EF554u; f_800EE284(c); // 800EF550
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800EF554
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF558
  if (!crb(c,2)) { goto L_800EF57C; } // 800EF55C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF560
  c->r[0]=0u+0x00000001u; // 800EF564
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF568
  c->r[4]=c->r[5]+0x00000001u; // 800EF56C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF570
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800EF574
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800EF578
L_800EF57C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF57C
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800EF580
  c->r[5]=0u+0x800F0000u; // 800EF584
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF588
  c->r[4]=c->r[24]+c->r[4]; // 800EF58C
  c->r[5]=c->r[5]+0xFFFFF7B8u; // 800EF590
  c->r[4]=c->r[4]+c->r[0]; // 800EF594
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF598
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF59C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF5A0
  cmpu(c,0,c->r[0],0x00000010u); // 800EF5A4
  if (!crb(c,0)) { goto L_800EF5B4; } // 800EF5A8
  c->r[0]=0u+0x00000010u; // 800EF5AC
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF5B0
L_800EF5B4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF5B4
  cmps(c,0,(int32_t)c->r[24],0); // 800EF5B8
  if (crb(c,2)) { goto L_800EF624; } // 800EF5BC
  c->lr=0x800EF5C4u; f_800EE284(c); // 800EF5C0
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800EF5C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF5C8
  if (!crb(c,2)) { goto L_800EF5EC; } // 800EF5CC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF5D0
  c->r[0]=0u+0x00000001u; // 800EF5D4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF5D8
  c->r[4]=c->r[5]+0x00000001u; // 800EF5DC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF5E0
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800EF5E4
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800EF5E8
L_800EF5EC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF5EC
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800EF5F0
  c->r[5]=0u+0x800F0000u; // 800EF5F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF5F8
  c->r[4]=c->r[24]+c->r[4]; // 800EF5FC
  c->r[5]=c->r[5]+0xFFFFF7B4u; // 800EF600
  c->r[4]=c->r[4]+c->r[0]; // 800EF604
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF608
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF60C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF610
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EF614
  if (!crb(c,0)) { goto L_800EF624; } // 800EF618
  c->r[0]=0u+0x0000005Cu; // 800EF61C
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF620
L_800EF624:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF624
  cmps(c,0,(int32_t)c->r[24],0); // 800EF628
  if (crb(c,2)) { goto L_800EF694; } // 800EF62C
  c->lr=0x800EF634u; f_800EE284(c); // 800EF630
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800EF634
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF638
  if (!crb(c,2)) { goto L_800EF65C; } // 800EF63C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF640
  c->r[0]=0u+0x00000001u; // 800EF644
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF648
  c->r[4]=c->r[5]+0x00000001u; // 800EF64C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF650
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800EF654
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800EF658
L_800EF65C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF65C
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800EF660
  c->r[5]=0u+0x800F0000u; // 800EF664
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF668
  c->r[4]=c->r[24]+c->r[4]; // 800EF66C
  c->r[5]=c->r[5]+0xFFFFF7B0u; // 800EF670
  c->r[4]=c->r[4]+c->r[0]; // 800EF674
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF678
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF67C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF680
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EF684
  if (!crb(c,0)) { goto L_800EF694; } // 800EF688
  c->r[0]=0u+0x0000005Cu; // 800EF68C
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF690
L_800EF694:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF694
  cmps(c,0,(int32_t)c->r[24],0); // 800EF698
  if (crb(c,2)) { goto L_800EF704; } // 800EF69C
  c->lr=0x800EF6A4u; f_800EE284(c); // 800EF6A0
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800EF6A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF6A8
  if (!crb(c,2)) { goto L_800EF6CC; } // 800EF6AC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF6B0
  c->r[0]=0u+0x00000001u; // 800EF6B4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF6B8
  c->r[4]=c->r[5]+0x00000001u; // 800EF6BC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF6C0
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800EF6C4
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800EF6C8
L_800EF6CC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF6CC
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800EF6D0
  c->r[5]=0u+0x800F0000u; // 800EF6D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF6D8
  c->r[4]=c->r[24]+c->r[4]; // 800EF6DC
  c->r[5]=c->r[5]+0xFFFFF7ACu; // 800EF6E0
  c->r[4]=c->r[4]+c->r[0]; // 800EF6E4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF6E8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF6EC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF6F0
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EF6F4
  if (!crb(c,0)) { goto L_800EF704; } // 800EF6F8
  c->r[0]=0u+0x0000005Cu; // 800EF6FC
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF700
L_800EF704:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800EF704
  cmps(c,0,(int32_t)c->r[24],0); // 800EF708
  if (crb(c,2)) { goto L_800EF774; } // 800EF70C
  c->lr=0x800EF714u; f_800EE284(c); // 800EF710
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800EF714
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF718
  if (!crb(c,2)) { goto L_800EF73C; } // 800EF71C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800EF720
  c->r[0]=0u+0x00000001u; // 800EF724
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800EF728
  c->r[4]=c->r[5]+0x00000001u; // 800EF72C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800EF730
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800EF734
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800EF738
L_800EF73C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800EF73C
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800EF740
  c->r[5]=0u+0x800F0000u; // 800EF744
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF748
  c->r[4]=c->r[24]+c->r[4]; // 800EF74C
  c->r[5]=c->r[5]+0xFFFFF7A8u; // 800EF750
  c->r[4]=c->r[4]+c->r[0]; // 800EF754
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EF758
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800EF75C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800EF760
  cmpu(c,0,c->r[0],0x0000005Cu); // 800EF764
  if (!crb(c,0)) { goto L_800EF774; } // 800EF768
  c->r[0]=0u+0x0000005Cu; // 800EF76C
  W32(c->r[24]+c->r[3],c->r[0]); // 800EF770
L_800EF774:;
  c->r[3]=c->r[27]|c->r[27]; // 800EF774
  c->lr=0x800EF77Cu; f_8005BBF0(c); // 800EF778
  c->r[4]=0u+0x806D0000u; // 800EF77C
  c->r[3]=c->r[27]|c->r[27]; // 800EF780
  c->r[4]=c->r[4]+0x000048F8u; // 800EF784
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800EF788
  c->r[0]=c->r[4]+0x00000044u; // 800EF78C
  W32(c->r[27]+0x00000400u,c->r[0]); // 800EF790
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF794
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EF798
  c->lr=c->r[0]; // 800EF79C
  c->r[1]=c->r[1]+0x00000040u; // 800EF7A0
  return; // 800EF7A4
}

// fn_800EF7A8
void f_800EF7A8(Ctx* __restrict c) {
  trace_call(0x800EF7A8u);
  f_8005E338(c); return; // 800EF7A8
}

// fn_800EF7AC
void f_800EF7AC(Ctx* __restrict c) {
  trace_call(0x800EF7ACu);
  f_8005E324(c); return; // 800EF7AC
}

// fn_800EF7B0
void f_800EF7B0(Ctx* __restrict c) {
  trace_call(0x800EF7B0u);
  f_8005E310(c); return; // 800EF7B0
}

// fn_800EF7B4
void f_800EF7B4(Ctx* __restrict c) {
  trace_call(0x800EF7B4u);
  f_8005E2FC(c); return; // 800EF7B4
}

// fn_800EF7B8
void f_800EF7B8(Ctx* __restrict c) {
  trace_call(0x800EF7B8u);
  f_8005E34C(c); return; // 800EF7B8
}

// fn_800EF7BC
void f_800EF7BC(Ctx* __restrict c) {
  trace_call(0x800EF7BCu);
  f_8005E360(c); return; // 800EF7BC
}

// fn_800EF7C0
void f_800EF7C0(Ctx* __restrict c) {
  trace_call(0x800EF7C0u);
  f_8005D47C(c); return; // 800EF7C0
}

// fn_800EF7C4
void f_800EF7C4(Ctx* __restrict c) {
  trace_call(0x800EF7C4u);
  f_8005D468(c); return; // 800EF7C4
}

// fn_800EF7C8
void f_800EF7C8(Ctx* __restrict c) {
  trace_call(0x800EF7C8u);
  f_8005BEDC(c); return; // 800EF7C8
}

// fn_800EF7CC
void f_800EF7CC(Ctx* __restrict c) {
  trace_call(0x800EF7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF7CC
  c->r[0]=c->lr; // 800EF7D0
  cmps(c,0,(int32_t)c->r[3],0); // 800EF7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF7D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF7DC
  c->r[30]=c->r[3]|c->r[3]; // 800EF7E0
  c->r[31]=c->r[4]|c->r[4]; // 800EF7E4
  if (crb(c,2)) { goto L_800EF808; } // 800EF7E8
  if (crb(c,2)) { goto L_800EF7F8; } // 800EF7EC
  c->r[4]=0u+0x00000000u; // 800EF7F0
  c->lr=0x800EF7F8u; f_8005BD00(c); // 800EF7F4
L_800EF7F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EF7F8
  if (!crb(c,1)) { goto L_800EF808; } // 800EF7FC
  c->r[3]=c->r[30]|c->r[30]; // 800EF800
  c->lr=0x800EF808u; f_8005328C(c); // 800EF804
L_800EF808:;
  c->r[3]=c->r[30]|c->r[30]; // 800EF808
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF80C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF810
  c->lr=c->r[0]; // 800EF814
  c->r[1]=c->r[1]+0x00000010u; // 800EF818
  return; // 800EF81C
}

// fn_800EF820
void f_800EF820(Ctx* __restrict c) {
  trace_call(0x800EF820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF820
  c->r[0]=c->lr; // 800EF824
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF82C
  c->f[2]=c->f[1]; // 800EF830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF834
  c->f[3]=c->f[1]; // 800EF838
  c->r[31]=c->r[3]|c->r[3]; // 800EF83C
  c->lr=0x800EF844u; f_80316D18(c); // 800EF840
  c->r[0]=0u+0x00000000u; // 800EF844
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800EF848
  c->r[3]=c->r[31]+0x000005C4u; // 800EF84C
  c->r[4]=0u+0x00000000u; // 800EF850
  c->r[5]=0u+0x0000002Cu; // 800EF854
  c->lr=0x800EF85Cu; f_800043EC(c); // 800EF858
  c->r[3]=c->r[31]+0x000005F0u; // 800EF85C
  c->r[4]=0u+0x00000000u; // 800EF860
  c->r[5]=0u+0x00000008u; // 800EF864
  c->lr=0x800EF86Cu; f_800043EC(c); // 800EF868
  c->r[3]=c->r[31]|c->r[31]; // 800EF86C
  c->lr=0x800EF874u; f_8005EAA0(c); // 800EF870
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF874
  c->r[31]=c->r[3]|c->r[3]; // 800EF878
  c->lr=0x800EF880u; f_80101528(c); // 800EF87C
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF880
  c->r[3]=c->r[31]|c->r[31]; // 800EF884
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF888
  c->lr=0x800EF890u; f_80101538(c); // 800EF88C
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF890
  c->r[3]=c->r[31]|c->r[31]; // 800EF894
  {uint32_t ea=c->r[2]+0xFFFFA71Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EF898
  c->lr=0x800EF8A0u; f_80101544(c); // 800EF89C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF8A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF8A4
  c->lr=c->r[0]; // 800EF8A8
  c->r[1]=c->r[1]+0x00000010u; // 800EF8AC
  return; // 800EF8B0
}

// fn_800EF8B4
void f_800EF8B4(Ctx* __restrict c) {
  trace_call(0x800EF8B4u);
  return; // 800EF8B4
}

// fn_800EF8B8
void f_800EF8B8(Ctx* __restrict c) {
  trace_call(0x800EF8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF8B8
  c->r[0]=c->lr; // 800EF8BC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800EF8C0
  c->r[11]=c->r[1]+0x000000A0u; // 800EF8C4
  c->lr=0x800EF8CCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EF8C8
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800EF8CC
  c->r[30]=c->r[3]|c->r[3]; // 800EF8D0
  c->r[12]=R32(c->r[12]+0x00000110u); // 800EF8D4
  c->ctr=c->r[12]; // 800EF8D8
  if (true) { c->lr=0x800EF8E0u; dispatch(c,c->ctr); } // 800EF8DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF8E0
  if (crb(c,2)) { goto L_800EFBDC; } // 800EF8E4
  c->r[0]=R32(c->r[30]+0x00000450u); // 800EF8E8
  c->r[3]=c->r[1]+0x00000010u; // 800EF8EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EF8F0
  c->r[4]=c->r[30]+0x00000458u; // 800EF8F4
  c->r[0]=R32(c->r[30]+0x00000454u); // 800EF8F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EF8FC
  c->lr=0x800EF904u; f_8005CD7C(c); // 800EF900
  c->r[3]=c->r[1]+0x0000001Cu; // 800EF904
  c->r[4]=c->r[30]+0x00000464u; // 800EF908
  c->lr=0x800EF910u; f_8005CD7C(c); // 800EF90C
  c->r[3]=c->r[1]+0x00000028u; // 800EF910
  c->r[4]=c->r[30]+0x00000470u; // 800EF914
  c->lr=0x800EF91Cu; f_8005CD7C(c); // 800EF918
  c->r[0]=R32(c->r[30]+0x0000047Cu); // 800EF91C
  c->r[3]=c->r[30]|c->r[30]; // 800EF920
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF924
  c->r[31]=R32(c->r[30]+0x00000480u); // 800EF928
  W32(c->r[1]+0x00000038u,c->r[31]); // 800EF92C
  c->r[0]=R32(c->r[30]+0x00000484u); // 800EF930
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800EF934
  c->r[0]=R32(c->r[30]+0x00000488u); // 800EF938
  W32(c->r[1]+0x00000040u,c->r[0]); // 800EF93C
  c->r[0]=R8(c->r[30]+0x0000048Cu); // 800EF940
  W8(c->r[1]+0x00000044u,c->r[0]); // 800EF944
  c->r[0]=R32(c->r[30]+0x00000490u); // 800EF948
  W32(c->r[1]+0x00000048u,c->r[0]); // 800EF94C
  c->r[0]=R32(c->r[30]+0x00000494u); // 800EF950
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800EF954
  c->r[0]=R32(c->r[30]+0x00000498u); // 800EF958
  W32(c->r[1]+0x00000050u,c->r[0]); // 800EF95C
  {uint32_t ea=c->r[30]+0x0000049Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF960
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800EF964
  {uint32_t ea=c->r[30]+0x000004A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF968
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800EF96C
  c->r[0]=R32(c->r[30]+0x000004A4u); // 800EF970
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800EF974
  c->r[0]=R32(c->r[30]+0x000004A8u); // 800EF978
  W32(c->r[1]+0x00000060u,c->r[0]); // 800EF97C
  c->r[0]=R32(c->r[30]+0x000004ACu); // 800EF980
  W32(c->r[1]+0x00000064u,c->r[0]); // 800EF984
  {uint32_t ea=c->r[30]+0x000004B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF988
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800EF98C
  c->r[0]=R32(c->r[30]+0x000004B4u); // 800EF990
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800EF994
  c->r[4]=R32(c->r[30]+0x000004B8u); // 800EF998
  c->r[0]=R32(c->r[30]+0x000004BCu); // 800EF99C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800EF9A0
  W32(c->r[1]+0x00000070u,c->r[4]); // 800EF9A4
  c->r[0]=R8(c->r[30]+0x000004C0u); // 800EF9A8
  W8(c->r[1]+0x00000078u,c->r[0]); // 800EF9AC
  c->r[0]=R8(c->r[30]+0x000004C1u); // 800EF9B0
  W8(c->r[1]+0x00000079u,c->r[0]); // 800EF9B4
  c->r[0]=R8(c->r[30]+0x000004C2u); // 800EF9B8
  W8(c->r[1]+0x0000007Au,c->r[0]); // 800EF9BC
  c->r[0]=R8(c->r[30]+0x000004C3u); // 800EF9C0
  W8(c->r[1]+0x0000007Bu,c->r[0]); // 800EF9C4
  c->r[4]=R32(c->r[30]+0x0000044Cu); // 800EF9C8
  c->r[27]=R32(c->r[4]+0x0000008Cu); // 800EF9CC
  c->lr=0x800EF9D4u; f_80060974(c); // 800EF9D0
  c->r[4]=R32(c->r[30]+0x00000004u); // 800EF9D4
  c->r[28]=c->r[3]|c->r[3]; // 800EF9D8
  cmps(c,0,(int32_t)c->r[4],0); // 800EF9DC
  if (crb(c,2)) { goto L_800EF9EC; } // 800EF9E0
  c->r[26]=R32(c->r[4]+0x00000000u); // 800EF9E4
  goto L_800EF9F0; // 800EF9E8
L_800EF9EC:;
  c->r[26]=0u+0xFFFFFFFFu; // 800EF9EC
L_800EF9F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EF9F0
  c->lr=0x800EF9F8u; f_8006130C(c); // 800EF9F4
  c->r[0]=R32(c->r[30]+0x000005C0u); // 800EF9F8
  c->r[29]=c->r[3]|c->r[3]; // 800EF9FC
  cmps(c,0,(int32_t)c->r[0],1); // 800EFA00
  if (!crb(c,2)) { goto L_800EFA24; } // 800EFA04
  c->r[3]=c->r[30]+0x00000354u; // 800EFA08
  c->lr=0x800EFA10u; f_800C9374(c); // 800EFA0C
  c->r[0]=c->r[3]+0xFFFFB94Cu; // 800EFA10
  cmpu(c,0,c->r[0],0x00000001u); // 800EFA14
  if (crb(c,1)) { goto L_800EFA24; } // 800EFA18
  c->r[3]=c->r[30]|c->r[30]; // 800EFA1C
  c->lr=0x800EFA24u; f_800F1564(c); // 800EFA20
L_800EFA24:;
  cmps(c,0,(int32_t)c->r[27],4); // 800EFA24
  if (!crb(c,2)) { goto L_800EFAB8; } // 800EFA28
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800EFA2C
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFA30
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFA34
  fcmp(c,0,c->f[1],c->f[0]); // 800EFA38
  if (crb(c,1)) { goto L_800EFA6C; } // 800EFA3C
  c->lr=0x800EFA44u; f_800EE328(c); // 800EFA40
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFA44
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFA48
  c->lr=0x800EFA50u; f_800EE254(c); // 800EFA4C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFA50
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFA54
  c->r[3]=c->r[30]|c->r[30]; // 800EFA58
  c->lr=0x800EFA60u; f_800EFD40(c); // 800EFA5C
  c->r[0]=0u+0x0000497Bu; // 800EFA60
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EFA64
  goto L_800EFBDC; // 800EFA68
L_800EFA6C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EFA6C
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFA70
  cmps(c,0,(int32_t)c->r[31],2); // 800EFA74
  if (!crb(c,2)) { goto L_800EFA94; } // 800EFA78
  c->lr=0x800EFA80u; f_800EE328(c); // 800EFA7C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFA80
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFA84
  c->r[3]=c->r[30]|c->r[30]; // 800EFA88
  c->lr=0x800EFA90u; f_800EFC9C(c); // 800EFA8C
  goto L_800EFBDC; // 800EFA90
L_800EFA94:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800EFA94
  cmpu(c,0,c->r[0],0x00000002u); // 800EFA98
  if (crb(c,1)) { goto L_800EFBDC; } // 800EFA9C
  c->lr=0x800EFAA4u; f_800EE328(c); // 800EFAA0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFAA4
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFAA8
  c->r[3]=c->r[30]|c->r[30]; // 800EFAAC
  c->lr=0x800EFAB4u; f_800EFC9C(c); // 800EFAB0
  goto L_800EFBDC; // 800EFAB4
L_800EFAB8:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800EFAB8
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFABC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFAC0
  fcmp(c,0,c->f[1],c->f[0]); // 800EFAC4
  if (crb(c,1)) { goto L_800EFB34; } // 800EFAC8
  cmps(c,0,(int32_t)c->r[31],2); // 800EFACC
  if (!crb(c,2)) { goto L_800EFB00; } // 800EFAD0
  c->lr=0x800EFAD8u; f_800EE328(c); // 800EFAD4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFAD8
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFADC
  c->lr=0x800EFAE4u; f_800EE254(c); // 800EFAE0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFAE4
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFAE8
  c->r[3]=c->r[30]|c->r[30]; // 800EFAEC
  c->lr=0x800EFAF4u; f_800EFD40(c); // 800EFAF0
  c->r[0]=0u+0x00004972u; // 800EFAF4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EFAF8
  goto L_800EFBDC; // 800EFAFC
L_800EFB00:;
  c->lr=0x800EFB04u; f_800EE328(c); // 800EFB00
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFB04
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFB08
  c->lr=0x800EFB10u; f_800EE254(c); // 800EFB0C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFB10
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFB14
  c->r[3]=c->r[30]|c->r[30]; // 800EFB18
  c->lr=0x800EFB20u; f_800F20B8(c); // 800EFB1C
  c->r[31]=c->r[3]|c->r[3]; // 800EFB20
  c->r[3]=c->r[30]|c->r[30]; // 800EFB24
  c->lr=0x800EFB2Cu; f_800EFD40(c); // 800EFB28
  W32(c->r[3]+0x00000010u,c->r[31]); // 800EFB2C
  goto L_800EFBDC; // 800EFB30
L_800EFB34:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EFB34
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFB38
  cmps(c,0,(int32_t)c->r[31],2); // 800EFB3C
  if (!crb(c,2)) { goto L_800EFB84; } // 800EFB40
  c->r[0]=c->r[28]+0xFFFFFFFEu; // 800EFB44
  cmpu(c,0,c->r[0],0x00000001u); // 800EFB48
  if (!crb(c,1)) { goto L_800EFB6C; } // 800EFB4C
  cmps(c,0,(int32_t)c->r[28],1); // 800EFB50
  if (!crb(c,2)) { goto L_800EFBDC; } // 800EFB54
  c->r[3]=c->r[30]|c->r[30]; // 800EFB58
  c->lr=0x800EFB60u; f_800EFBF4(c); // 800EFB5C
  c->r[0]=0u+0x0000477Cu; // 800EFB60
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EFB64
  goto L_800EFBDC; // 800EFB68
L_800EFB6C:;
  c->lr=0x800EFB70u; f_800EE328(c); // 800EFB6C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFB70
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFB74
  c->r[3]=c->r[30]|c->r[30]; // 800EFB78
  c->lr=0x800EFB80u; f_800EFC9C(c); // 800EFB7C
  goto L_800EFBDC; // 800EFB80
L_800EFB84:;
  cmps(c,0,(int32_t)c->r[28],1); // 800EFB84
  if (crb(c,2)) { goto L_800EFBA0; } // 800EFB88
  cmps(c,0,(int32_t)c->r[28],2); // 800EFB8C
  if (crb(c,2)) { goto L_800EFBB4; } // 800EFB90
  cmps(c,0,(int32_t)c->r[28],3); // 800EFB94
  if (crb(c,2)) { goto L_800EFBC8; } // 800EFB98
  goto L_800EFBDC; // 800EFB9C
L_800EFBA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EFBA0
  c->lr=0x800EFBA8u; f_800EFBF4(c); // 800EFBA4
  c->r[0]=0u+0x0000477Du; // 800EFBA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EFBAC
  goto L_800EFBDC; // 800EFBB0
L_800EFBB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800EFBB4
  c->lr=0x800EFBBCu; f_800EFBF4(c); // 800EFBB8
  c->r[0]=0u+0x0000477Cu; // 800EFBBC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800EFBC0
  goto L_800EFBDC; // 800EFBC4
L_800EFBC8:;
  c->lr=0x800EFBCCu; f_800EE328(c); // 800EFBC8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800EFBCC
  if (crb(c,2)) { goto L_800EFBDC; } // 800EFBD0
  c->r[3]=c->r[30]|c->r[30]; // 800EFBD4
  c->lr=0x800EFBDCu; f_800EFC9C(c); // 800EFBD8
L_800EFBDC:;
  c->r[11]=c->r[1]+0x000000A0u; // 800EFBDC
  c->lr=0x800EFBE4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EFBE0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800EFBE4
  c->lr=c->r[0]; // 800EFBE8
  c->r[1]=c->r[1]+0x000000A0u; // 800EFBEC
  return; // 800EFBF0
}

// fn_800EFBF4
void f_800EFBF4(Ctx* __restrict c) {
  trace_call(0x800EFBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFBF4
  c->r[0]=c->lr; // 800EFBF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EFBFC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFC00
  c->r[31]=c->r[1]|c->r[1]; // 800EFC04
  c->r[28]=c->r[3]|c->r[3]; // 800EFC08
  c->lr=0x800EFC10u; f_800EE3CC(c); // 800EFC0C
  c->r[4]=c->r[3]|c->r[3]; // 800EFC10
  c->r[3]=c->r[28]|c->r[28]; // 800EFC14
  c->lr=0x800EFC1Cu; f_80062F4C(c); // 800EFC18
  c->r[0]=R8(c->r[28]+0x00000010u); // 800EFC1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EFC20
  c->r[3]=c->r[28]+c->r[0]; // 800EFC24
  c->r[29]=R32(c->r[3]+0x00000014u); // 800EFC28
  cmps(c,0,(int32_t)c->r[29],0); // 800EFC2C
  if (crb(c,2)) { goto L_800EFC5C; } // 800EFC30
  c->r[30]=0u+0x00000000u; // 800EFC34
  W32(c->r[31]+0x00000024u,c->r[1]); // 800EFC38
  W8(c->r[31]+0x00000008u,c->r[30]); // 800EFC3C
  c->lr=0x800EFC44u; f_800EE3CC(c); // 800EFC40
  W32(c->r[29]+0x00000000u,c->r[3]); // 800EFC44
  c->r[0]=c->r[13]+0xFFFF8500u; // 800EFC48
  W32(c->r[29]+0x00000004u,c->r[0]); // 800EFC4C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800EFC50
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800EFC54
  W32(c->r[29]+0x00000010u,c->r[30]); // 800EFC58
L_800EFC5C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800EFC5C
  c->r[0]=0u+0x00000000u; // 800EFC60
  c->r[3]=c->r[28]|c->r[28]; // 800EFC64
  c->r[4]=c->r[29]|c->r[29]; // 800EFC68
  W32(c->r[29]+0x00000008u,c->r[0]); // 800EFC6C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800EFC70
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800EFC74
  c->lr=0x800EFC7Cu; f_8006306C(c); // 800EFC78
  c->r[10]=c->r[31]|c->r[31]; // 800EFC7C
  c->r[3]=c->r[29]|c->r[29]; // 800EFC80
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFC84
  c->r[10]=R32(c->r[1]+0x00000000u); // 800EFC88
  c->r[0]=R32(c->r[10]+0x00000004u); // 800EFC8C
  c->r[1]=c->r[10]|c->r[10]; // 800EFC90
  c->lr=c->r[0]; // 800EFC94
  return; // 800EFC98
}

// fn_800EFC9C
void f_800EFC9C(Ctx* __restrict c) {
  trace_call(0x800EFC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFC9C
  c->r[0]=c->lr; // 800EFCA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EFCA4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFCA8
  c->r[31]=c->r[1]|c->r[1]; // 800EFCAC
  c->r[28]=c->r[3]|c->r[3]; // 800EFCB0
  c->lr=0x800EFCB8u; f_800EE328(c); // 800EFCB4
  c->r[4]=c->r[3]|c->r[3]; // 800EFCB8
  c->r[3]=c->r[28]|c->r[28]; // 800EFCBC
  c->lr=0x800EFCC4u; f_80062F4C(c); // 800EFCC0
  c->r[0]=R8(c->r[28]+0x00000010u); // 800EFCC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EFCC8
  c->r[3]=c->r[28]+c->r[0]; // 800EFCCC
  c->r[29]=R32(c->r[3]+0x00000014u); // 800EFCD0
  cmps(c,0,(int32_t)c->r[29],0); // 800EFCD4
  if (crb(c,2)) { goto L_800EFD00; } // 800EFCD8
  c->r[30]=0u+0x00000000u; // 800EFCDC
  W32(c->r[31]+0x00000024u,c->r[1]); // 800EFCE0
  W8(c->r[31]+0x00000008u,c->r[30]); // 800EFCE4
  c->lr=0x800EFCECu; f_800EE328(c); // 800EFCE8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800EFCEC
  c->r[0]=c->r[13]+0xFFFF84FCu; // 800EFCF0
  W32(c->r[29]+0x00000004u,c->r[0]); // 800EFCF4
  W32(c->r[29]+0x00000008u,c->r[30]); // 800EFCF8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800EFCFC
L_800EFD00:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800EFD00
  c->r[0]=0u+0x00000000u; // 800EFD04
  c->r[3]=c->r[28]|c->r[28]; // 800EFD08
  c->r[4]=c->r[29]|c->r[29]; // 800EFD0C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800EFD10
  c->r[0]=R32(c->r[28]+0x00000004u); // 800EFD14
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800EFD18
  c->lr=0x800EFD20u; f_8006306C(c); // 800EFD1C
  c->r[10]=c->r[31]|c->r[31]; // 800EFD20
  c->r[3]=c->r[29]|c->r[29]; // 800EFD24
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFD28
  c->r[10]=R32(c->r[1]+0x00000000u); // 800EFD2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800EFD30
  c->r[1]=c->r[10]|c->r[10]; // 800EFD34
  c->lr=c->r[0]; // 800EFD38
  return; // 800EFD3C
}

// fn_800EFD40
void f_800EFD40(Ctx* __restrict c) {
  trace_call(0x800EFD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFD40
  c->r[0]=c->lr; // 800EFD44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EFD48
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFD4C
  c->r[31]=c->r[1]|c->r[1]; // 800EFD50
  c->r[28]=c->r[3]|c->r[3]; // 800EFD54
  c->lr=0x800EFD5Cu; f_800EE254(c); // 800EFD58
  c->r[4]=c->r[3]|c->r[3]; // 800EFD5C
  c->r[3]=c->r[28]|c->r[28]; // 800EFD60
  c->lr=0x800EFD68u; f_80062F4C(c); // 800EFD64
  c->r[0]=R8(c->r[28]+0x00000010u); // 800EFD68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EFD6C
  c->r[3]=c->r[28]+c->r[0]; // 800EFD70
  c->r[29]=R32(c->r[3]+0x00000014u); // 800EFD74
  cmps(c,0,(int32_t)c->r[29],0); // 800EFD78
  if (crb(c,2)) { goto L_800EFDA8; } // 800EFD7C
  c->r[30]=0u+0x00000000u; // 800EFD80
  W32(c->r[31]+0x00000024u,c->r[1]); // 800EFD84
  W8(c->r[31]+0x00000008u,c->r[30]); // 800EFD88
  c->lr=0x800EFD90u; f_800EE254(c); // 800EFD8C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800EFD90
  c->r[0]=c->r[13]+0xFFFF84F8u; // 800EFD94
  W32(c->r[29]+0x00000004u,c->r[0]); // 800EFD98
  W32(c->r[29]+0x00000008u,c->r[30]); // 800EFD9C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800EFDA0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800EFDA4
L_800EFDA8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800EFDA8
  c->r[0]=0u+0x00000000u; // 800EFDAC
  c->r[3]=c->r[28]|c->r[28]; // 800EFDB0
  c->r[4]=c->r[29]|c->r[29]; // 800EFDB4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800EFDB8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800EFDBC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800EFDC0
  c->lr=0x800EFDC8u; f_8006306C(c); // 800EFDC4
  c->r[10]=c->r[31]|c->r[31]; // 800EFDC8
  c->r[3]=c->r[29]|c->r[29]; // 800EFDCC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFDD0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800EFDD4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800EFDD8
  c->r[1]=c->r[10]|c->r[10]; // 800EFDDC
  c->lr=c->r[0]; // 800EFDE0
  return; // 800EFDE4
}

// fn_800EFDE8
void f_800EFDE8(Ctx* __restrict c) {
  trace_call(0x800EFDE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFDE8
  c->r[0]=c->lr; // 800EFDEC
  c->r[5]=0u+0x0000002Cu; // 800EFDF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFDF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFDF8
  c->r[26]=c->r[3]|c->r[3]; // 800EFDFC
  c->r[27]=c->r[4]|c->r[4]; // 800EFE00
  c->r[4]=0u+0x00000000u; // 800EFE04
  c->r[3]=c->r[3]+0x000005C4u; // 800EFE08
  c->lr=0x800EFE10u; f_800043EC(c); // 800EFE0C
  c->r[3]=c->r[27]|c->r[27]; // 800EFE10
  c->lr=0x800EFE18u; f_802D93E8(c); // 800EFE14
  cmps(c,0,(int32_t)c->r[3],0); // 800EFE18
  if (crb(c,2)) { goto L_800EFEFC; } // 800EFE1C
  c->r[3]=c->r[27]|c->r[27]; // 800EFE20
  c->r[4]=0u+0x00000008u; // 800EFE24
  c->lr=0x800EFE2Cu; f_802D9584(c); // 800EFE28
  W32(c->r[26]+0x000005C4u,c->r[3]); // 800EFE2C
  c->r[3]=c->r[27]|c->r[27]; // 800EFE30
  c->r[4]=0u+0x00000003u; // 800EFE34
  c->lr=0x800EFE3Cu; f_802D9584(c); // 800EFE38
  W32(c->r[26]+0x000005C8u,c->r[3]); // 800EFE3C
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800EFE40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EFE44
  if (!crb(c,2)) { goto L_800EFE8C; } // 800EFE48
  c->r[31]=0u+0x80730000u; // 800EFE4C
  c->r[3]=c->r[31]+0x00005908u; // 800EFE50
  c->lr=0x800EFE58u; f_8009822C(c); // 800EFE54
  c->r[6]=0u+0x806D0000u; // 800EFE58
  c->r[4]=0u+0x80050000u; // 800EFE5C
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800EFE60
  c->r[3]=c->r[31]+0x00005908u; // 800EFE64
  c->r[0]=c->r[6]+0x00000028u; // 800EFE68
  c->r[5]=0u+0x80750000u; // 800EFE6C
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800EFE70
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800EFE74
  c->r[5]=c->r[5]+0x00003B28u; // 800EFE78
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800EFE7C
  c->lr=0x800EFE84u; f_803A92B8(c); // 800EFE80
  c->r[0]=0u+0x00000001u; // 800EFE84
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800EFE88
L_800EFE8C:;
  c->r[4]=R32(c->r[26]+0x00000448u); // 800EFE8C
  c->r[3]=0u+0x80730000u; // 800EFE90
  c->r[3]=c->r[3]+0x00005908u; // 800EFE94
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800EFE98
  c->lr=0x800EFEA0u; f_800992D4(c); // 800EFE9C
  c->r[30]=c->r[3]|c->r[3]; // 800EFEA0
  c->r[29]=0u+0x00000000u; // 800EFEA4
  c->r[31]=0u+0x00000000u; // 800EFEA8
L_800EFEAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EFEAC
  c->r[3]=c->r[27]|c->r[27]; // 800EFEB0
  c->r[4]=0u+0x00000005u; // 800EFEB4
  if (crb(c,2)) { goto L_800EFEC0; } // 800EFEB8
  c->r[4]=c->r[29]+0x0000000Cu; // 800EFEBC
L_800EFEC0:;
  c->lr=0x800EFEC4u; f_802D9584(c); // 800EFEC0
  c->r[28]=c->r[3]|c->r[3]; // 800EFEC4
  c->lr=0x800EFECCu; f_803A91D4(c); // 800EFEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800EFECC
  if (crb(c,2)) { goto L_800EFEEC; } // 800EFED0
  c->r[5]=c->r[26]+c->r[31]; // 800EFED4
  c->r[3]=c->r[30]|c->r[30]; // 800EFED8
  c->r[4]=c->r[28]|c->r[28]; // 800EFEDC
  c->r[6]=0u+0x00000000u; // 800EFEE0
  c->r[5]=c->r[5]+0x000005CCu; // 800EFEE4
  c->lr=0x800EFEECu; f_802D24C8(c); // 800EFEE8
L_800EFEEC:;
  c->r[29]=c->r[29]+0x00000001u; // 800EFEEC
  c->r[31]=c->r[31]+0x00000004u; // 800EFEF0
  cmps(c,0,(int32_t)c->r[29],9); // 800EFEF4
  if (crb(c,0)) { IRQCHK(c); goto L_800EFEAC; } // 800EFEF8
L_800EFEFC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFEFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFF00
  c->lr=c->r[0]; // 800EFF04
  c->r[1]=c->r[1]+0x00000020u; // 800EFF08
  return; // 800EFF0C
}

// fn_800EFF10
void f_800EFF10(Ctx* __restrict c) {
  trace_call(0x800EFF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF10
  c->r[0]=c->lr; // 800EFF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFF18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFF1C
  c->r[30]=c->r[3]|c->r[3]; // 800EFF20
  c->r[31]=0u+0x00000000u; // 800EFF24
  c->r[0]=R32(c->r[2]+0xFFFFA728u); // 800EFF28
  c->r[3]=c->r[0]|c->r[0]; // 800EFF2C
  c->lr=0x800EFF34u; f_803B393C(c); // 800EFF30
  cmps(c,0,(int32_t)c->r[3],0); // 800EFF34
  if (!crb(c,2)) { goto L_800EFF54; } // 800EFF38
  cmps(c,0,(int32_t)c->r[31],0); // 800EFF3C
  if (!crb(c,2)) { goto L_800EFF54; } // 800EFF40
  c->r[3]=c->r[30]+0x000005F0u; // 800EFF44
  c->r[4]=0u+0x00000000u; // 800EFF48
  c->r[5]=0u+0x00000001u; // 800EFF4C
  c->lr=0x800EFF54u; f_8005DCA0(c); // 800EFF50
L_800EFF54:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFF54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFF58
  c->lr=c->r[0]; // 800EFF5C
  c->r[1]=c->r[1]+0x00000010u; // 800EFF60
  return; // 800EFF64
}

// fn_800EFF68
void f_800EFF68(Ctx* __restrict c) {
  trace_call(0x800EFF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF68
  c->r[0]=c->lr; // 800EFF6C
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 800EFF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFF74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFF78
  c->r[30]=c->r[3]|c->r[3]; // 800EFF7C
  c->r[0]=R32(c->r[4]+0x00000088u); // 800EFF80
  cmps(c,0,(int32_t)c->r[0],3); // 800EFF84
  if (!crb(c,2)) { goto L_800EFF94; } // 800EFF88
  c->r[3]=0u+0x00000001u; // 800EFF8C
  goto L_800EFFF8; // 800EFF90
L_800EFF94:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EFF94
  cmps(c,0,(int32_t)c->r[3],0); // 800EFF98
  if (crb(c,2)) { goto L_800EFFC4; } // 800EFF9C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EFFA0
  c->lr=0x800EFFA8u; f_800EE514(c); // 800EFFA4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800EFFA8
  if (crb(c,2)) { goto L_800EFFBC; } // 800EFFAC
  c->lr=0x800EFFB4u; f_800EE470(c); // 800EFFB0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800EFFB4
  if (!crb(c,2)) { goto L_800EFFC4; } // 800EFFB8
L_800EFFBC:;
  c->r[3]=0u+0x00000001u; // 800EFFBC
  goto L_800EFFF8; // 800EFFC0
L_800EFFC4:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800EFFC4
  cmps(c,0,(int32_t)c->r[3],0); // 800EFFC8
  if (crb(c,2)) { goto L_800EFFF4; } // 800EFFCC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EFFD0
  c->lr=0x800EFFD8u; f_800EE514(c); // 800EFFD4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800EFFD8
  if (crb(c,2)) { goto L_800EFFEC; } // 800EFFDC
  c->lr=0x800EFFE4u; f_800EE470(c); // 800EFFE0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800EFFE4
  if (!crb(c,2)) { goto L_800EFFF4; } // 800EFFE8
L_800EFFEC:;
  c->r[3]=0u+0x00000001u; // 800EFFEC
  goto L_800EFFF8; // 800EFFF0
L_800EFFF4:;
  c->r[3]=0u+0x00000000u; // 800EFFF4
L_800EFFF8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFFF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFFFC
  c->lr=c->r[0]; // 800F0000
  c->r[1]=c->r[1]+0x00000010u; // 800F0004
  return; // 800F0008
}

// fn_800F000C
void f_800F000C(Ctx* __restrict c) {
  trace_call(0x800F000Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F000C
  c->r[0]=c->lr; // 800F0010
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F0014
  c->r[11]=c->r[1]+0x00000070u; // 800F0018
  c->lr=0x800F0020u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F001C
  c->r[31]=c->r[1]|c->r[1]; // 800F0020
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800F0024
  c->r[30]=c->r[3]|c->r[3]; // 800F0028
  c->r[3]=c->r[4]+0x00000004u; // 800F002C
  c->lr=0x800F0034u; f_800A097C(c); // 800F0030
  cmps(c,0,(int32_t)c->r[3],0); // 800F0034
  if (crb(c,2)) { goto L_800F0078; } // 800F0038
  c->r[0]=0u+0x00000001u; // 800F003C
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800F0040
  c->r[3]=c->r[30]|c->r[30]; // 800F0044
  c->lr=0x800F004Cu; f_800F165C(c); // 800F0048
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F004C
  c->r[3]=c->r[31]+0x00000010u; // 800F0050
  c->lr=0x800F0058u; f_800C998C(c); // 800F0054
  c->r[29]=c->r[3]|c->r[3]; // 800F0058
  c->r[4]=c->r[30]|c->r[30]; // 800F005C
  c->r[3]=c->r[31]+0x0000001Cu; // 800F0060
  c->lr=0x800F0068u; f_80061A48(c); // 800F0064
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F0068
  c->r[5]=c->r[29]|c->r[29]; // 800F006C
  c->r[4]=c->r[31]+0x0000001Cu; // 800F0070
  c->lr=0x800F0078u; f_800C2D1C(c); // 800F0074
L_800F0078:;
  c->r[28]=R32(c->r[30]+0x000005C4u); // 800F0078
  cmps(c,0,(int32_t)c->r[28],0); // 800F007C
  if (crb(c,2)) { goto L_800F0240; } // 800F0080
  c->r[29]=0u+0x80690000u; // 800F0084
  c->r[4]=c->r[28]|c->r[28]; // 800F0088
  c->r[29]=c->r[29]+0xFFFFED48u; // 800F008C
  c->r[27]=0u+0x00000000u; // 800F0090
  c->r[3]=c->r[29]+0x00000001u; // 800F0094
  c->r[26]=0u+0x00000000u; // 800F0098
  c->lr=0x800F00A0u; f_803B393C(c); // 800F009C
  cmps(c,0,(int32_t)c->r[3],0); // 800F00A0
  if (!crb(c,2)) { goto L_800F00B0; } // 800F00A4
  c->r[27]=0u+0x000049D4u; // 800F00A8
  goto L_800F0108; // 800F00AC
L_800F00B0:;
  c->r[4]=c->r[28]|c->r[28]; // 800F00B0
  c->r[3]=c->r[29]+0x0000000Cu; // 800F00B4
  c->lr=0x800F00BCu; f_803B393C(c); // 800F00B8
  cmps(c,0,(int32_t)c->r[3],0); // 800F00BC
  if (!crb(c,2)) { goto L_800F00CC; } // 800F00C0
  c->r[27]=0u+0x00004650u; // 800F00C4
  goto L_800F0108; // 800F00C8
L_800F00CC:;
  c->r[4]=c->r[28]|c->r[28]; // 800F00CC
  c->r[3]=c->r[29]+0x00000012u; // 800F00D0
  c->lr=0x800F00D8u; f_803B393C(c); // 800F00D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F00D8
  if (!crb(c,2)) { goto L_800F00EC; } // 800F00DC
  c->r[27]=0u+0x000046B5u; // 800F00E0
  c->r[26]=0u+0x00000002u; // 800F00E4
  goto L_800F0108; // 800F00E8
L_800F00EC:;
  c->r[4]=c->r[28]|c->r[28]; // 800F00EC
  c->r[3]=c->r[29]+0x00000017u; // 800F00F0
  c->lr=0x800F00F8u; f_803B393C(c); // 800F00F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F00F8
  if (!crb(c,2)) { goto L_800F0108; } // 800F00FC
  c->r[27]=0u+0x000046B4u; // 800F0100
  c->r[26]=0u+0x00000003u; // 800F0104
L_800F0108:;
  c->r[0]=c->r[27]+0xFFFFB94Cu; // 800F0108
  cmpu(c,0,c->r[0],0x00000001u); // 800F010C
  if (!crb(c,1)) { goto L_800F0208; } // 800F0110
  cmps(c,0,(int32_t)c->r[27],18900); // 800F0114
  if (crb(c,2)) { goto L_800F0128; } // 800F0118
  cmps(c,0,(int32_t)c->r[27],18000); // 800F011C
  if (crb(c,2)) { goto L_800F0198; } // 800F0120
  goto L_800F0234; // 800F0124
L_800F0128:;
  c->lr=0x800F012Cu; f_800EEC20(c); // 800F0128
  c->r[4]=c->r[3]|c->r[3]; // 800F012C
  c->r[3]=c->r[30]|c->r[30]; // 800F0130
  c->lr=0x800F0138u; f_80062F4C(c); // 800F0134
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F0138
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F013C
  c->r[3]=c->r[30]+c->r[0]; // 800F0140
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F0144
  cmps(c,0,(int32_t)c->r[28],0); // 800F0148
  if (crb(c,2)) { goto L_800F0174; } // 800F014C
  c->r[29]=0u+0x00000000u; // 800F0150
  W32(c->r[31]+0x00000054u,c->r[1]); // 800F0154
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800F0158
  c->lr=0x800F0160u; f_800EEC20(c); // 800F015C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F0160
  c->r[0]=c->r[13]+0xFFFF8534u; // 800F0164
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F0168
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F016C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F0170
L_800F0174:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F0174
  c->r[0]=0u+0x00000000u; // 800F0178
  c->r[3]=c->r[30]|c->r[30]; // 800F017C
  c->r[4]=c->r[28]|c->r[28]; // 800F0180
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F0184
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F0188
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F018C
  c->lr=0x800F0194u; f_8006306C(c); // 800F0190
  goto L_800F0248; // 800F0194
L_800F0198:;
  c->lr=0x800F019Cu; f_800EEB7C(c); // 800F0198
  c->r[4]=c->r[3]|c->r[3]; // 800F019C
  c->r[3]=c->r[30]|c->r[30]; // 800F01A0
  c->lr=0x800F01A8u; f_80062F4C(c); // 800F01A4
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F01A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F01AC
  c->r[3]=c->r[30]+c->r[0]; // 800F01B0
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F01B4
  cmps(c,0,(int32_t)c->r[28],0); // 800F01B8
  if (crb(c,2)) { goto L_800F01E4; } // 800F01BC
  c->r[29]=0u+0x00000000u; // 800F01C0
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800F01C4
  W8(c->r[31]+0x00000008u,c->r[29]); // 800F01C8
  c->lr=0x800F01D0u; f_800EEB7C(c); // 800F01CC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F01D0
  c->r[0]=c->r[13]+0xFFFF8530u; // 800F01D4
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F01D8
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F01DC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F01E0
L_800F01E4:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F01E4
  c->r[0]=0u+0x00000000u; // 800F01E8
  c->r[3]=c->r[30]|c->r[30]; // 800F01EC
  c->r[4]=c->r[28]|c->r[28]; // 800F01F0
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F01F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F01F8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F01FC
  c->lr=0x800F0204u; f_8006306C(c); // 800F0200
  goto L_800F0248; // 800F0204
L_800F0208:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0208
  c->lr=0x800F0210u; f_800F0268(c); // 800F020C
  W32(c->r[3]+0x00000010u,c->r[27]); // 800F0210
  c->r[3]=c->r[30]+0x000005F8u; // 800F0214
  c->r[4]=0u+0x00000000u; // 800F0218
  c->r[5]=0u+0x00000040u; // 800F021C
  c->lr=0x800F0224u; f_800043EC(c); // 800F0220
  c->r[0]=0u+0x00000000u; // 800F0224
  W32(c->r[30]+0x00000638u,c->r[0]); // 800F0228
  W32(c->r[30]+0x000005F8u,c->r[26]); // 800F022C
  goto L_800F0248; // 800F0230
L_800F0234:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0234
  c->lr=0x800F023Cu; f_800F1874(c); // 800F0238
  goto L_800F0248; // 800F023C
L_800F0240:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0240
  c->lr=0x800F0248u; f_800F1874(c); // 800F0244
L_800F0248:;
  c->r[10]=c->r[31]|c->r[31]; // 800F0248
  c->r[11]=c->r[10]+0x00000070u; // 800F024C
  c->lr=0x800F0254u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0250
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F0254
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F0258
  c->r[1]=c->r[10]|c->r[10]; // 800F025C
  c->lr=c->r[0]; // 800F0260
  return; // 800F0264
}

// fn_800F0268
void f_800F0268(Ctx* __restrict c) {
  trace_call(0x800F0268u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0268
  c->r[0]=c->lr; // 800F026C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F0270
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0274
  c->r[31]=c->r[1]|c->r[1]; // 800F0278
  c->r[28]=c->r[3]|c->r[3]; // 800F027C
  c->lr=0x800F0284u; f_800EE8EC(c); // 800F0280
  c->r[4]=c->r[3]|c->r[3]; // 800F0284
  c->r[3]=c->r[28]|c->r[28]; // 800F0288
  c->lr=0x800F0290u; f_80062F4C(c); // 800F028C
  c->r[0]=R8(c->r[28]+0x00000010u); // 800F0290
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0294
  c->r[3]=c->r[28]+c->r[0]; // 800F0298
  c->r[29]=R32(c->r[3]+0x00000014u); // 800F029C
  cmps(c,0,(int32_t)c->r[29],0); // 800F02A0
  if (crb(c,2)) { goto L_800F02D0; } // 800F02A4
  c->r[30]=0u+0x00000000u; // 800F02A8
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F02AC
  W8(c->r[31]+0x00000008u,c->r[30]); // 800F02B0
  c->lr=0x800F02B8u; f_800EE8EC(c); // 800F02B4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800F02B8
  c->r[0]=c->r[13]+0xFFFF8520u; // 800F02BC
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F02C0
  W32(c->r[29]+0x00000008u,c->r[30]); // 800F02C4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F02C8
  W32(c->r[29]+0x00000010u,c->r[30]); // 800F02CC
L_800F02D0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F02D0
  c->r[0]=0u+0x00000000u; // 800F02D4
  c->r[3]=c->r[28]|c->r[28]; // 800F02D8
  c->r[4]=c->r[29]|c->r[29]; // 800F02DC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F02E0
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F02E4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800F02E8
  c->lr=0x800F02F0u; f_8006306C(c); // 800F02EC
  c->r[10]=c->r[31]|c->r[31]; // 800F02F0
  c->r[3]=c->r[29]|c->r[29]; // 800F02F4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F02F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F02FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F0300
  c->r[1]=c->r[10]|c->r[10]; // 800F0304
  c->lr=c->r[0]; // 800F0308
  return; // 800F030C
}

// fn_800F0310
void f_800F0310(Ctx* __restrict c) {
  trace_call(0x800F0310u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0310
  c->r[0]=c->lr; // 800F0314
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0318
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F031C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F0320
  c->r[30]=c->r[3]|c->r[3]; // 800F0324
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0328
  cmps(c,0,(int32_t)c->r[4],0); // 800F032C
  if (crb(c,2)) { goto L_800F033C; } // 800F0330
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0334
  goto L_800F0340; // 800F0338
L_800F033C:;
  c->r[0]=0u+0x00000000u; // 800F033C
L_800F0340:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0340
  if (!crb(c,2)) { goto L_800F0364; } // 800F0344
  c->r[3]=c->r[30]|c->r[30]; // 800F0348
  c->r[4]=0u+0x000049D4u; // 800F034C
  c->r[5]=0u+0x00000001u; // 800F0350
  c->lr=0x800F0358u; f_80064744(c); // 800F0354
  c->r[3]=c->r[30]|c->r[30]; // 800F0358
  c->r[4]=0u+0x00000000u; // 800F035C
  c->lr=0x800F0364u; f_8005EA70(c); // 800F0360
L_800F0364:;
  c->r[3]=c->r[30]+0x00000354u; // 800F0364
  c->lr=0x800F036Cu; f_800C9374(c); // 800F0368
  cmps(c,0,(int32_t)c->r[3],18900); // 800F036C
  if (!crb(c,2)) { goto L_800F03A4; } // 800F0370
  c->r[3]=c->r[30]|c->r[30]; // 800F0374
  c->lr=0x800F037Cu; f_8005EA80(c); // 800F0378
  cmps(c,0,(int32_t)c->r[3],0); // 800F037C
  if (crb(c,2)) { goto L_800F03F8; } // 800F0380
  c->r[3]=c->r[30]|c->r[30]; // 800F0384
  c->r[4]=0u+0x000049D5u; // 800F0388
  c->r[5]=0u+0x00000001u; // 800F038C
  c->lr=0x800F0394u; f_80064744(c); // 800F0390
  c->r[3]=c->r[30]|c->r[30]; // 800F0394
  c->r[4]=0u+0x00000001u; // 800F0398
  c->lr=0x800F03A0u; f_8005EA70(c); // 800F039C
  goto L_800F03F8; // 800F03A0
L_800F03A4:;
  cmps(c,0,(int32_t)c->r[3],18901); // 800F03A4
  if (!crb(c,2)) { goto L_800F03F8; } // 800F03A8
  c->r[3]=c->r[30]+0x00000354u; // 800F03AC
  c->lr=0x800F03B4u; f_800667AC(c); // 800F03B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F03B4
  if (crb(c,2)) { goto L_800F03F8; } // 800F03B8
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F03BC
  c->r[3]=c->r[1]+0x00000008u; // 800F03C0
  c->lr=0x800F03C8u; f_800C998C(c); // 800F03C4
  c->r[31]=c->r[3]|c->r[3]; // 800F03C8
  c->r[4]=c->r[30]|c->r[30]; // 800F03CC
  c->r[3]=c->r[1]+0x00000014u; // 800F03D0
  c->lr=0x800F03D8u; f_80061A48(c); // 800F03D4
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F03D8
  c->r[5]=c->r[31]|c->r[31]; // 800F03DC
  c->r[4]=c->r[1]+0x00000014u; // 800F03E0
  c->lr=0x800F03E8u; f_800C2D1C(c); // 800F03E4
  c->r[3]=c->r[30]|c->r[30]; // 800F03E8
  c->lr=0x800F03F0u; f_800F165C(c); // 800F03EC
  c->r[3]=c->r[30]|c->r[30]; // 800F03F0
  c->lr=0x800F03F8u; f_800F1874(c); // 800F03F4
L_800F03F8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F03F8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F03FC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F0400
  c->lr=c->r[0]; // 800F0404
  c->r[1]=c->r[1]+0x00000030u; // 800F0408
  return; // 800F040C
}

// fn_800F0410
void f_800F0410(Ctx* __restrict c) {
  trace_call(0x800F0410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0410
  c->r[0]=c->lr; // 800F0414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F041C
  c->r[31]=c->r[3]|c->r[3]; // 800F0420
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0424
  cmps(c,0,(int32_t)c->r[4],0); // 800F0428
  if (crb(c,2)) { goto L_800F0438; } // 800F042C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0430
  goto L_800F043C; // 800F0434
L_800F0438:;
  c->r[0]=0u+0x00000000u; // 800F0438
L_800F043C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F043C
  if (!crb(c,2)) { goto L_800F0468; } // 800F0440
  c->r[4]=0u+0x00004650u; // 800F0444
  c->r[3]=c->r[3]+0x00000354u; // 800F0448
  c->lr=0x800F0450u; f_800667BC(c); // 800F044C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0450
  if (!crb(c,2)) { goto L_800F0468; } // 800F0454
  c->r[3]=c->r[31]|c->r[31]; // 800F0458
  c->r[4]=0u+0x00004650u; // 800F045C
  c->r[5]=0u+0x00000001u; // 800F0460
  c->lr=0x800F0468u; f_80064744(c); // 800F0464
L_800F0468:;
  c->r[3]=c->r[31]|c->r[31]; // 800F0468
  c->lr=0x800F0470u; f_800F14A0(c); // 800F046C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0474
  c->lr=c->r[0]; // 800F0478
  c->r[1]=c->r[1]+0x00000010u; // 800F047C
  return; // 800F0480
}

// fn_800F0484
void f_800F0484(Ctx* __restrict c) {
  trace_call(0x800F0484u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0484
  c->r[0]=c->lr; // 800F0488
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F048C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800F0490
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800F0494
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800F0498
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800F049C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F04A0
  c->r[31]=c->r[3]|c->r[3]; // 800F04A4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F04A8
  cmps(c,0,(int32_t)c->r[4],0); // 800F04AC
  if (crb(c,2)) { goto L_800F04BC; } // 800F04B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F04B4
  goto L_800F04C0; // 800F04B8
L_800F04BC:;
  c->r[0]=0u+0x00000000u; // 800F04BC
L_800F04C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F04C0
  if (!crb(c,2)) { goto L_800F0548; } // 800F04C4
  c->r[4]=0u+0x00004650u; // 800F04C8
  c->r[3]=c->r[3]+0x00000354u; // 800F04CC
  c->lr=0x800F04D4u; f_800667BC(c); // 800F04D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F04D4
  if (!crb(c,2)) { goto L_800F04EC; } // 800F04D8
  c->r[3]=c->r[31]|c->r[31]; // 800F04DC
  c->r[4]=0u+0x00004650u; // 800F04E0
  c->r[5]=0u+0x00000001u; // 800F04E4
  c->lr=0x800F04ECu; f_80064744(c); // 800F04E8
L_800F04EC:;
  c->r[3]=R32(c->r[31]+0x00000434u); // 800F04EC
  c->r[4]=0u+0x00000000u; // 800F04F0
  c->r[3]=c->r[3]+0x00000030u; // 800F04F4
  c->lr=0x800F04FCu; f_802D94E8(c); // 800F04F8
  c->r[3]=R32(c->r[31]+0x00000434u); // 800F04FC
  c->f[30]=c->f[1]; // 800F0500
  c->r[4]=0u+0x00000001u; // 800F0504
  c->r[3]=c->r[3]+0x00000030u; // 800F0508
  c->lr=0x800F0510u; f_802D94E8(c); // 800F050C
  c->f[31]=c->f[1]; // 800F0510
  c->lr=0x800F0518u; f_803B220C(c); // 800F0514
  c->r[3]=c->r[3]^0x80000000u; // 800F0518
  c->r[0]=0u+0x43300000u; // 800F051C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800F0520
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[30]); // 800F0524
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[3]=RF64(ea);} // 800F0528
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F052C
  {uint32_t ea=c->r[2]+0xFFFFA72Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0530
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800F0534
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800F0538
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800F053C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[30])); // 800F0540
  {uint32_t ea=c->r[31]+0x0000055Cu; WF32(ea,c->f[0]);} // 800F0544
L_800F0548:;
  {uint32_t ea=c->r[31]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0548
  {uint32_t ea=c->r[31]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F054C
  fcmp(c,0,c->f[0],c->f[1]); // 800F0550
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F0554
  if (!crb(c,2)) { goto L_800F0564; } // 800F0558
  c->r[3]=c->r[31]|c->r[31]; // 800F055C
  c->lr=0x800F0564u; f_800F1874(c); // 800F0560
L_800F0564:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F0564
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800F0568
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800F056C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800F0570
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800F0574
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0578
  c->lr=c->r[0]; // 800F057C
  c->r[1]=c->r[1]+0x00000040u; // 800F0580
  return; // 800F0584
}

// fn_800F0588
void f_800F0588(Ctx* __restrict c) {
  trace_call(0x800F0588u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0588
  c->r[0]=c->lr; // 800F058C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0590
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0594
  c->r[30]=c->r[3]|c->r[3]; // 800F0598
  c->r[31]=c->r[4]|c->r[4]; // 800F059C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F05A0
  cmps(c,0,(int32_t)c->r[5],0); // 800F05A4
  if (crb(c,2)) { goto L_800F05B4; } // 800F05A8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F05AC
  goto L_800F05B8; // 800F05B0
L_800F05B4:;
  c->r[0]=0u+0x00000000u; // 800F05B4
L_800F05B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F05B8
  if (!crb(c,2)) { goto L_800F05E4; } // 800F05BC
  c->r[4]=0u+0x00004650u; // 800F05C0
  c->r[3]=c->r[3]+0x00000354u; // 800F05C4
  c->lr=0x800F05CCu; f_800667BC(c); // 800F05C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F05CC
  if (!crb(c,2)) { goto L_800F05E4; } // 800F05D0
  c->r[3]=c->r[30]|c->r[30]; // 800F05D4
  c->r[4]=0u+0x00004650u; // 800F05D8
  c->r[5]=0u+0x00000001u; // 800F05DC
  c->lr=0x800F05E4u; f_80064744(c); // 800F05E0
L_800F05E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F05E4
  c->lr=0x800F05ECu; f_8006117C(c); // 800F05E8
  cmps(c,0,(int32_t)c->r[3],0); // 800F05EC
  if (crb(c,2)) { goto L_800F0600; } // 800F05F0
  c->r[4]=R32(c->r[31]+0x00000010u); // 800F05F4
  c->r[3]=c->r[30]|c->r[30]; // 800F05F8
  c->lr=0x800F0600u; f_800F1F84(c); // 800F05FC
L_800F0600:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0604
  c->lr=c->r[0]; // 800F0608
  c->r[1]=c->r[1]+0x00000010u; // 800F060C
  return; // 800F0610
}

// fn_800F0614
void f_800F0614(Ctx* __restrict c) {
  trace_call(0x800F0614u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0614
  c->r[0]=c->lr; // 800F0618
  W32(c->r[1]+0x00000084u,c->r[0]); // 800F061C
  c->r[11]=c->r[1]+0x00000080u; // 800F0620
  c->lr=0x800F0628u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0624
  c->r[31]=c->r[1]|c->r[1]; // 800F0628
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F062C
  c->r[27]=c->r[3]|c->r[3]; // 800F0630
  c->r[28]=c->r[4]|c->r[4]; // 800F0634
  cmps(c,0,(int32_t)c->r[5],0); // 800F0638
  if (crb(c,2)) { goto L_800F0648; } // 800F063C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0640
  goto L_800F064C; // 800F0644
L_800F0648:;
  c->r[0]=0u+0x00000000u; // 800F0648
L_800F064C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F064C
  if (!crb(c,2)) { goto L_800F0734; } // 800F0650
  c->r[0]=R32(c->r[4]+0x00000014u); // 800F0654
  cmps(c,0,(int32_t)c->r[0],0); // 800F0658
  if (crb(c,2)) { goto L_800F0674; } // 800F065C
  cmps(c,0,(int32_t)c->r[0],1); // 800F0660
  if (crb(c,2)) { goto L_800F06A8; } // 800F0664
  cmps(c,0,(int32_t)c->r[0],2); // 800F0668
  if (crb(c,2)) { goto L_800F0724; } // 800F066C
  goto L_800F0734; // 800F0670
L_800F0674:;
  c->r[3]=c->r[27]|c->r[27]; // 800F0674
  c->lr=0x800F067Cu; f_8006117C(c); // 800F0678
  cmps(c,0,(int32_t)c->r[3],0); // 800F067C
  if (crb(c,2)) { goto L_800F0694; } // 800F0680
  c->r[4]=R32(c->r[28]+0x00000010u); // 800F0684
  c->r[3]=c->r[27]|c->r[27]; // 800F0688
  c->lr=0x800F0690u; f_800F1F84(c); // 800F068C
  goto L_800F07B4; // 800F0690
L_800F0694:;
  c->r[29]=R32(c->r[28]+0x00000010u); // 800F0694
  c->r[3]=c->r[27]|c->r[27]; // 800F0698
  c->lr=0x800F06A0u; f_800F07D4(c); // 800F069C
  W32(c->r[3]+0x00000010u,c->r[29]); // 800F06A0
  goto L_800F07B4; // 800F06A4
L_800F06A8:;
  c->lr=0x800F06ACu; f_800EE65C(c); // 800F06A8
  c->r[4]=c->r[3]|c->r[3]; // 800F06AC
  c->r[3]=c->r[27]|c->r[27]; // 800F06B0
  c->lr=0x800F06B8u; f_80062F4C(c); // 800F06B4
  c->r[0]=R8(c->r[27]+0x00000010u); // 800F06B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F06BC
  c->r[3]=c->r[27]+c->r[0]; // 800F06C0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800F06C4
  cmps(c,0,(int32_t)c->r[29],0); // 800F06C8
  if (crb(c,2)) { goto L_800F06F8; } // 800F06CC
  c->r[30]=0u+0x00000000u; // 800F06D0
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800F06D4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800F06D8
  c->lr=0x800F06E0u; f_800EE65C(c); // 800F06DC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800F06E0
  c->r[0]=c->r[13]+0xFFFF8510u; // 800F06E4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F06E8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800F06EC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F06F0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800F06F4
L_800F06F8:;
  W32(c->r[27]+0x00000008u,c->r[29]); // 800F06F8
  c->r[0]=0u+0x00000000u; // 800F06FC
  c->r[3]=c->r[27]|c->r[27]; // 800F0700
  c->r[4]=c->r[29]|c->r[29]; // 800F0704
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F0708
  c->r[0]=R32(c->r[27]+0x00000004u); // 800F070C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800F0710
  c->lr=0x800F0718u; f_8006306C(c); // 800F0714
  c->r[0]=R32(c->r[28]+0x00000010u); // 800F0718
  W32(c->r[29]+0x00000010u,c->r[0]); // 800F071C
  goto L_800F07B4; // 800F0720
L_800F0724:;
  c->r[3]=c->r[27]|c->r[27]; // 800F0724
  c->r[4]=0u+0x000046B4u; // 800F0728
  c->r[5]=0u+0x00000001u; // 800F072C
  c->lr=0x800F0734u; f_80064744(c); // 800F0730
L_800F0734:;
  c->r[4]=R32(c->r[28]+0x00000010u); // 800F0734
  c->r[3]=c->r[27]|c->r[27]; // 800F0738
  c->lr=0x800F0740u; f_800F1DCC(c); // 800F073C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0740
  if (!crb(c,2)) { goto L_800F0778; } // 800F0744
  c->r[3]=c->r[27]|c->r[27]; // 800F0748
  c->lr=0x800F0750u; f_8006117C(c); // 800F074C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0750
  if (crb(c,2)) { goto L_800F0768; } // 800F0754
  c->r[4]=R32(c->r[28]+0x00000010u); // 800F0758
  c->r[3]=c->r[27]|c->r[27]; // 800F075C
  c->lr=0x800F0764u; f_800F1F84(c); // 800F0760
  goto L_800F0778; // 800F0764
L_800F0768:;
  c->r[29]=R32(c->r[28]+0x00000010u); // 800F0768
  c->r[3]=c->r[27]|c->r[27]; // 800F076C
  c->lr=0x800F0774u; f_800F07D4(c); // 800F0770
  W32(c->r[3]+0x00000010u,c->r[29]); // 800F0774
L_800F0778:;
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 800F0778
  c->r[3]=c->r[27]|c->r[27]; // 800F077C
  c->r[4]=c->r[31]+0x00000030u; // 800F0780
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F0784
  c->ctr=c->r[12]; // 800F0788
  if (true) { c->lr=0x800F0790u; dispatch(c,c->ctr); } // 800F078C
  c->r[4]=c->r[3]|c->r[3]; // 800F0790
  c->r[3]=c->r[31]+0x0000000Cu; // 800F0794
  c->lr=0x800F079Cu; f_80060878(c); // 800F0798
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F079C
  c->r[3]=c->r[27]|c->r[27]; // 800F07A0
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F07A4
  c->r[4]=c->r[31]+0x0000000Cu; // 800F07A8
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F07AC
  c->lr=0x800F07B4u; f_800634E8(c); // 800F07B0
L_800F07B4:;
  c->r[10]=c->r[31]|c->r[31]; // 800F07B4
  c->r[11]=c->r[10]+0x00000080u; // 800F07B8
  c->lr=0x800F07C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F07BC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F07C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F07C4
  c->r[1]=c->r[10]|c->r[10]; // 800F07C8
  c->lr=c->r[0]; // 800F07CC
  return; // 800F07D0
}

// fn_800F07D4
void f_800F07D4(Ctx* __restrict c) {
  trace_call(0x800F07D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F07D4
  c->r[0]=c->lr; // 800F07D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F07DC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F07E0
  c->r[31]=c->r[1]|c->r[1]; // 800F07E4
  c->r[28]=c->r[3]|c->r[3]; // 800F07E8
  c->lr=0x800F07F0u; f_800EEA34(c); // 800F07EC
  c->r[4]=c->r[3]|c->r[3]; // 800F07F0
  c->r[3]=c->r[28]|c->r[28]; // 800F07F4
  c->lr=0x800F07FCu; f_80062F4C(c); // 800F07F8
  c->r[0]=R8(c->r[28]+0x00000010u); // 800F07FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0800
  c->r[3]=c->r[28]+c->r[0]; // 800F0804
  c->r[29]=R32(c->r[3]+0x00000014u); // 800F0808
  cmps(c,0,(int32_t)c->r[29],0); // 800F080C
  if (crb(c,2)) { goto L_800F083C; } // 800F0810
  c->r[30]=0u+0x00000000u; // 800F0814
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F0818
  W8(c->r[31]+0x00000008u,c->r[30]); // 800F081C
  c->lr=0x800F0824u; f_800EEA34(c); // 800F0820
  W32(c->r[29]+0x00000000u,c->r[3]); // 800F0824
  c->r[0]=c->r[13]+0xFFFF8528u; // 800F0828
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F082C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800F0830
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F0834
  W32(c->r[29]+0x00000010u,c->r[30]); // 800F0838
L_800F083C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F083C
  c->r[0]=0u+0x00000000u; // 800F0840
  c->r[3]=c->r[28]|c->r[28]; // 800F0844
  c->r[4]=c->r[29]|c->r[29]; // 800F0848
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F084C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F0850
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800F0854
  c->lr=0x800F085Cu; f_8006306C(c); // 800F0858
  c->r[10]=c->r[31]|c->r[31]; // 800F085C
  c->r[3]=c->r[29]|c->r[29]; // 800F0860
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0864
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F0868
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F086C
  c->r[1]=c->r[10]|c->r[10]; // 800F0870
  c->lr=c->r[0]; // 800F0874
  return; // 800F0878
}

// fn_800F087C
void f_800F087C(Ctx* __restrict c) {
  trace_call(0x800F087Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F087C
  c->r[0]=c->lr; // 800F0880
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F0884
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F0888
  c->r[31]=c->r[4]|c->r[4]; // 800F088C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F0890
  c->r[30]=c->r[3]|c->r[3]; // 800F0894
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F0898
  cmps(c,0,(int32_t)c->r[5],0); // 800F089C
  if (crb(c,2)) { goto L_800F08AC; } // 800F08A0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F08A4
  goto L_800F08B0; // 800F08A8
L_800F08AC:;
  c->r[0]=0u+0x00000000u; // 800F08AC
L_800F08B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F08B0
  if (!crb(c,2)) { goto L_800F08DC; } // 800F08B4
  c->r[4]=R32(c->r[4]+0x00000010u); // 800F08B8
  c->r[3]=c->r[3]+0x00000354u; // 800F08BC
  c->lr=0x800F08C4u; f_800667BC(c); // 800F08C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F08C4
  if (!crb(c,2)) { goto L_800F08DC; } // 800F08C8
  c->r[4]=R32(c->r[31]+0x00000010u); // 800F08CC
  c->r[3]=c->r[30]|c->r[30]; // 800F08D0
  c->r[5]=0u+0x00000001u; // 800F08D4
  c->lr=0x800F08DCu; f_80064744(c); // 800F08D8
L_800F08DC:;
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800F08DC
  c->r[3]=c->r[1]+0x00000020u; // 800F08E0
  c->lr=0x800F08E8u; f_800C2FB8(c); // 800F08E4
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F08E8
  c->r[3]=c->r[1]+0x00000008u; // 800F08EC
  c->lr=0x800F08F4u; f_800C998C(c); // 800F08F0
  c->r[31]=c->r[3]|c->r[3]; // 800F08F4
  c->r[4]=c->r[30]|c->r[30]; // 800F08F8
  c->r[3]=c->r[1]+0x00000014u; // 800F08FC
  c->lr=0x800F0904u; f_80061A48(c); // 800F0900
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F0904
  c->r[5]=c->r[31]|c->r[31]; // 800F0908
  c->r[4]=c->r[1]+0x00000014u; // 800F090C
  c->lr=0x800F0914u; f_800C2D1C(c); // 800F0910
  cmps(c,0,(int32_t)c->r[3],0); // 800F0914
  if (crb(c,2)) { goto L_800F0944; } // 800F0918
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F091C
  c->r[0]=R8(c->r[3]+0x00000015u); // 800F0920
  cmps(c,0,(int32_t)c->r[0],0); // 800F0924
  if (crb(c,2)) { goto L_800F0934; } // 800F0928
  c->r[0]=0u+0x00000000u; // 800F092C
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800F0930
L_800F0934:;
  c->r[3]=c->r[30]|c->r[30]; // 800F0934
  c->lr=0x800F093Cu; f_800F165C(c); // 800F0938
  c->r[3]=c->r[30]|c->r[30]; // 800F093C
  c->lr=0x800F0944u; f_800F1874(c); // 800F0940
L_800F0944:;
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0944
  c->r[3]=c->r[30]|c->r[30]; // 800F0948
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F094C
  c->r[4]=c->r[1]+0x00000020u; // 800F0950
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0954
  c->lr=0x800F095Cu; f_800634E8(c); // 800F0958
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F095C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F0960
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F0964
  c->lr=c->r[0]; // 800F0968
  c->r[1]=c->r[1]+0x00000040u; // 800F096C
  return; // 800F0970
}

// fn_800F0974
void f_800F0974(Ctx* __restrict c) {
  trace_call(0x800F0974u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0974
  c->r[0]=c->lr; // 800F0978
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F097C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F0980
  W32(c->r[1]+0x00000038u,c->r[30]); // 800F0984
  c->r[30]=c->r[3]|c->r[3]; // 800F0988
  c->r[3]=c->r[1]+0x0000002Cu; // 800F098C
  c->r[4]=c->r[30]|c->r[30]; // 800F0990
  c->lr=0x800F0998u; f_80061A48(c); // 800F0994
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800F0998
  c->r[3]=c->r[1]+0x00000020u; // 800F099C
  c->lr=0x800F09A4u; f_800C2E48(c); // 800F09A0
  c->r[3]=c->r[1]+0x00000014u; // 800F09A4
  c->r[4]=c->r[1]+0x00000020u; // 800F09A8
  c->r[5]=c->r[1]+0x0000002Cu; // 800F09AC
  c->lr=0x800F09B4u; f_8005FC60(c); // 800F09B0
  c->r[3]=c->r[1]+0x00000014u; // 800F09B4
  c->lr=0x800F09BCu; f_80060DC8(c); // 800F09B8
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F09BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800F09C0
  fcmp(c,0,c->f[1],c->f[0]); // 800F09C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F09C8
  if (!crb(c,2)) { goto L_800F0A08; } // 800F09CC
  c->r[0]=0u+0x00000001u; // 800F09D0
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800F09D4
  c->r[3]=c->r[30]|c->r[30]; // 800F09D8
  c->lr=0x800F09E0u; f_800F165C(c); // 800F09DC
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F09E0
  c->r[3]=c->r[1]+0x00000008u; // 800F09E4
  c->lr=0x800F09ECu; f_800C998C(c); // 800F09E8
  c->r[5]=c->r[3]|c->r[3]; // 800F09EC
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F09F0
  c->r[4]=c->r[1]+0x0000002Cu; // 800F09F4
  c->lr=0x800F09FCu; f_800C2D1C(c); // 800F09F8
  c->r[3]=c->r[30]|c->r[30]; // 800F09FC
  c->lr=0x800F0A04u; f_800F1874(c); // 800F0A00
  goto L_800F0A90; // 800F0A04
L_800F0A08:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800F0A08
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A0C
  if (crb(c,2)) { goto L_800F0A1C; } // 800F0A10
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F0A14
  goto L_800F0A20; // 800F0A18
L_800F0A1C:;
  c->r[0]=0u+0x00000000u; // 800F0A1C
L_800F0A20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0A20
  if (!crb(c,2)) { goto L_800F0A78; } // 800F0A24
  c->r[3]=c->r[30]|c->r[30]; // 800F0A28
  c->r[4]=0u+0x00000001u; // 800F0A2C
  c->lr=0x800F0A34u; f_800F1524(c); // 800F0A30
  c->r[4]=c->r[3]|c->r[3]; // 800F0A34
  c->r[3]=c->r[30]|c->r[30]; // 800F0A38
  c->lr=0x800F0A40u; f_800F1580(c); // 800F0A3C
  c->r[0]=c->r[3]+0xFFFFB94Cu; // 800F0A40
  c->r[31]=c->r[3]|c->r[3]; // 800F0A44
  cmpu(c,0,c->r[0],0x00000001u); // 800F0A48
  if (!crb(c,1)) { goto L_800F0A54; } // 800F0A4C
  c->r[31]=0u+0x000046B4u; // 800F0A50
L_800F0A54:;
  c->r[4]=c->r[31]|c->r[31]; // 800F0A54
  c->r[3]=c->r[30]+0x00000354u; // 800F0A58
  c->lr=0x800F0A60u; f_800667BC(c); // 800F0A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0A60
  if (!crb(c,2)) { goto L_800F0A78; } // 800F0A64
  c->r[3]=c->r[30]|c->r[30]; // 800F0A68
  c->r[4]=c->r[31]|c->r[31]; // 800F0A6C
  c->r[5]=0u+0x00000001u; // 800F0A70
  c->lr=0x800F0A78u; f_80064744(c); // 800F0A74
L_800F0A78:;
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0A78
  c->r[3]=c->r[30]|c->r[30]; // 800F0A7C
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0A80
  c->r[4]=c->r[1]+0x00000020u; // 800F0A84
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0A88
  c->lr=0x800F0A90u; f_800634E8(c); // 800F0A8C
L_800F0A90:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F0A90
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F0A94
  c->r[30]=R32(c->r[1]+0x00000038u); // 800F0A98
  c->lr=c->r[0]; // 800F0A9C
  c->r[1]=c->r[1]+0x00000040u; // 800F0AA0
  return; // 800F0AA4
}

// fn_800F0AA8
void f_800F0AA8(Ctx* __restrict c) {
  trace_call(0x800F0AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0AA8
  c->r[0]=c->lr; // 800F0AAC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F0AB0
  c->r[11]=c->r[1]+0x00000050u; // 800F0AB4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800F0AB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800F0ABC
  c->lr=0x800F0AC4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0AC0
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0AC4
  c->r[29]=c->r[3]|c->r[3]; // 800F0AC8
  cmps(c,0,(int32_t)c->r[4],0); // 800F0ACC
  if (crb(c,2)) { goto L_800F0ADC; } // 800F0AD0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0AD4
  goto L_800F0AE0; // 800F0AD8
L_800F0ADC:;
  c->r[0]=0u+0x00000000u; // 800F0ADC
L_800F0AE0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0AE0
  if (!crb(c,2)) { goto L_800F0B04; } // 800F0AE4
  c->r[3]=c->r[29]|c->r[29]; // 800F0AE8
  c->r[4]=0u+0x000046E6u; // 800F0AEC
  c->r[5]=0u+0x00000001u; // 800F0AF0
  c->lr=0x800F0AF8u; f_80064744(c); // 800F0AF4
  c->r[3]=c->r[29]|c->r[29]; // 800F0AF8
  c->r[4]=0u+0x00000000u; // 800F0AFC
  c->lr=0x800F0B04u; f_8005EA70(c); // 800F0B00
L_800F0B04:;
  c->r[3]=c->r[29]+0x00000354u; // 800F0B04
  c->lr=0x800F0B0Cu; f_800C9374(c); // 800F0B08
  cmps(c,0,(int32_t)c->r[3],18151); // 800F0B0C
  c->r[30]=c->r[3]|c->r[3]; // 800F0B10
  if (!crb(c,2)) { goto L_800F0B20; } // 800F0B14
  c->r[3]=c->r[29]|c->r[29]; // 800F0B18
  c->lr=0x800F0B20u; f_800F21C8(c); // 800F0B1C
L_800F0B20:;
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0B20
  c->r[3]=c->r[1]+0x00000020u; // 800F0B24
  c->lr=0x800F0B2Cu; f_800C998C(c); // 800F0B28
  c->r[31]=c->r[3]|c->r[3]; // 800F0B2C
  c->r[4]=c->r[29]|c->r[29]; // 800F0B30
  c->r[3]=c->r[1]+0x0000002Cu; // 800F0B34
  c->lr=0x800F0B3Cu; f_80061A48(c); // 800F0B38
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800F0B3C
  c->r[5]=c->r[31]|c->r[31]; // 800F0B40
  c->r[4]=c->r[1]+0x0000002Cu; // 800F0B44
  c->lr=0x800F0B4Cu; f_800C2D1C(c); // 800F0B48
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B4C
  if (crb(c,2)) { goto L_800F0B5C; } // 800F0B50
  c->r[3]=c->r[29]|c->r[29]; // 800F0B54
  c->lr=0x800F0B5Cu; f_800F165C(c); // 800F0B58
L_800F0B5C:;
  c->r[3]=c->r[29]+0x00000354u; // 800F0B5C
  c->lr=0x800F0B64u; f_800667AC(c); // 800F0B60
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B64
  if (crb(c,2)) { goto L_800F0BFC; } // 800F0B68
  cmps(c,0,(int32_t)c->r[30],18150); // 800F0B6C
  if (crb(c,2)) { goto L_800F0B88; } // 800F0B70
  cmps(c,0,(int32_t)c->r[30],18151); // 800F0B74
  if (crb(c,2)) { goto L_800F0BD4; } // 800F0B78
  cmps(c,0,(int32_t)c->r[30],18152); // 800F0B7C
  if (crb(c,2)) { goto L_800F0BF4; } // 800F0B80
  goto L_800F0BFC; // 800F0B84
L_800F0B88:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0B88
  c->r[4]=0u+0x000046E7u; // 800F0B8C
  c->r[5]=0u+0x00000001u; // 800F0B90
  c->lr=0x800F0B98u; f_80064744(c); // 800F0B94
  c->r[3]=R32(c->r[29]+0x00000404u); // 800F0B98
  c->lr=0x800F0BA0u; f_802EA43C(c); // 800F0B9C
  c->f[31]=c->f[1]; // 800F0BA0
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800F0BA4
  c->r[3]=c->r[1]+0x00000008u; // 800F0BA8
  c->lr=0x800F0BB0u; f_800C2FB8(c); // 800F0BAC
  c->r[4]=c->r[29]|c->r[29]; // 800F0BB0
  c->r[3]=c->r[1]+0x00000014u; // 800F0BB4
  c->lr=0x800F0BBCu; f_80061A48(c); // 800F0BB8
  c->f[1]=c->f[31]; // 800F0BBC
  c->r[3]=c->r[29]|c->r[29]; // 800F0BC0
  c->r[4]=c->r[1]+0x00000014u; // 800F0BC4
  c->r[5]=c->r[1]+0x00000008u; // 800F0BC8
  c->lr=0x800F0BD0u; f_800F2104(c); // 800F0BCC
  goto L_800F0BFC; // 800F0BD0
L_800F0BD4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0BD4
  c->r[4]=0u+0x000046E8u; // 800F0BD8
  c->r[5]=0u+0x00000001u; // 800F0BDC
  c->lr=0x800F0BE4u; f_80064744(c); // 800F0BE0
  c->r[3]=c->r[29]|c->r[29]; // 800F0BE4
  c->r[4]=0u+0x00000001u; // 800F0BE8
  c->lr=0x800F0BF0u; f_8005EA70(c); // 800F0BEC
  goto L_800F0BFC; // 800F0BF0
L_800F0BF4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0BF4
  c->lr=0x800F0BFCu; f_800F1874(c); // 800F0BF8
L_800F0BFC:;
  c->r[11]=c->r[1]+0x00000050u; // 800F0BFC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800F0C00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800F0C04
  c->lr=0x800F0C0Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0C08
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F0C0C
  c->lr=c->r[0]; // 800F0C10
  c->r[1]=c->r[1]+0x00000060u; // 800F0C14
  return; // 800F0C18
}

// fn_800F0C1C
void f_800F0C1C(Ctx* __restrict c) {
  trace_call(0x800F0C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0C1C
  c->r[0]=c->lr; // 800F0C20
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F0C24
  c->r[11]=c->r[1]+0x00000050u; // 800F0C28
  c->lr=0x800F0C30u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0C2C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0C30
  c->r[29]=c->r[3]|c->r[3]; // 800F0C34
  cmps(c,0,(int32_t)c->r[4],0); // 800F0C38
  if (crb(c,2)) { goto L_800F0C48; } // 800F0C3C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0C40
  goto L_800F0C4C; // 800F0C44
L_800F0C48:;
  c->r[0]=0u+0x00000000u; // 800F0C48
L_800F0C4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0C4C
  if (!crb(c,2)) { goto L_800F0C70; } // 800F0C50
  c->r[3]=c->r[29]|c->r[29]; // 800F0C54
  c->r[4]=0u+0x000046E6u; // 800F0C58
  c->r[5]=0u+0x00000001u; // 800F0C5C
  c->lr=0x800F0C64u; f_80064744(c); // 800F0C60
  c->r[3]=c->r[29]|c->r[29]; // 800F0C64
  c->r[4]=0u+0x00000000u; // 800F0C68
  c->lr=0x800F0C70u; f_8005EA70(c); // 800F0C6C
L_800F0C70:;
  c->r[3]=c->r[29]+0x00000354u; // 800F0C70
  c->lr=0x800F0C78u; f_800C9374(c); // 800F0C74
  cmps(c,0,(int32_t)c->r[3],18153); // 800F0C78
  c->r[30]=c->r[3]|c->r[3]; // 800F0C7C
  if (crb(c,2)) { goto L_800F0C8C; } // 800F0C80
  cmps(c,0,(int32_t)c->r[3],18901); // 800F0C84
  if (!crb(c,2)) { goto L_800F0C98; } // 800F0C88
L_800F0C8C:;
  {uint32_t ea=c->r[2]+0xFFFFA71Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0C8C
  c->r[3]=c->r[29]|c->r[29]; // 800F0C90
  c->lr=0x800F0C98u; f_800F2318(c); // 800F0C94
L_800F0C98:;
  cmps(c,0,(int32_t)c->r[30],18153); // 800F0C98
  if (!crb(c,2)) { goto L_800F0CCC; } // 800F0C9C
  c->r[3]=c->r[29]|c->r[29]; // 800F0CA0
  c->lr=0x800F0CA8u; f_8005EA80(c); // 800F0CA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0CA8
  if (crb(c,2)) { goto L_800F0CCC; } // 800F0CAC
  c->r[3]=c->r[29]|c->r[29]; // 800F0CB0
  c->r[4]=0u+0x000049D5u; // 800F0CB4
  c->r[5]=0u+0x00000001u; // 800F0CB8
  c->lr=0x800F0CC0u; f_80064744(c); // 800F0CBC
  c->r[3]=c->r[29]|c->r[29]; // 800F0CC0
  c->r[4]=0u+0x00000001u; // 800F0CC4
  c->lr=0x800F0CCCu; f_8005EA70(c); // 800F0CC8
L_800F0CCC:;
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0CCC
  c->r[3]=c->r[1]+0x00000020u; // 800F0CD0
  c->lr=0x800F0CD8u; f_800C998C(c); // 800F0CD4
  c->r[31]=c->r[3]|c->r[3]; // 800F0CD8
  c->r[4]=c->r[29]|c->r[29]; // 800F0CDC
  c->r[3]=c->r[1]+0x0000002Cu; // 800F0CE0
  c->lr=0x800F0CE8u; f_80061A48(c); // 800F0CE4
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800F0CE8
  c->r[5]=c->r[31]|c->r[31]; // 800F0CEC
  c->r[4]=c->r[1]+0x0000002Cu; // 800F0CF0
  c->lr=0x800F0CF8u; f_800C2D1C(c); // 800F0CF4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0CF8
  if (crb(c,2)) { goto L_800F0D08; } // 800F0CFC
  c->r[3]=c->r[29]|c->r[29]; // 800F0D00
  c->lr=0x800F0D08u; f_800F165C(c); // 800F0D04
L_800F0D08:;
  c->r[3]=c->r[29]+0x00000354u; // 800F0D08
  c->lr=0x800F0D10u; f_800667AC(c); // 800F0D0C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0D10
  if (crb(c,2)) { goto L_800F0D74; } // 800F0D14
  cmps(c,0,(int32_t)c->r[30],18150); // 800F0D18
  if (crb(c,2)) { goto L_800F0D2C; } // 800F0D1C
  cmps(c,0,(int32_t)c->r[30],18901); // 800F0D20
  if (crb(c,2)) { goto L_800F0D6C; } // 800F0D24
  goto L_800F0D74; // 800F0D28
L_800F0D2C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0D2C
  c->r[4]=0u+0x000046E9u; // 800F0D30
  c->r[5]=0u+0x00000001u; // 800F0D34
  c->lr=0x800F0D3Cu; f_80064744(c); // 800F0D38
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800F0D3C
  c->r[3]=c->r[1]+0x00000008u; // 800F0D40
  c->lr=0x800F0D48u; f_800C2FB8(c); // 800F0D44
  c->r[4]=c->r[29]|c->r[29]; // 800F0D48
  c->r[3]=c->r[1]+0x00000014u; // 800F0D4C
  c->lr=0x800F0D54u; f_80061A48(c); // 800F0D50
  {uint32_t ea=c->r[2]+0xFFFFA744u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0D54
  c->r[3]=c->r[29]|c->r[29]; // 800F0D58
  c->r[4]=c->r[1]+0x00000014u; // 800F0D5C
  c->r[5]=c->r[1]+0x00000008u; // 800F0D60
  c->lr=0x800F0D68u; f_800F2280(c); // 800F0D64
  goto L_800F0D74; // 800F0D68
L_800F0D6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0D6C
  c->lr=0x800F0D74u; f_800F1874(c); // 800F0D70
L_800F0D74:;
  c->r[11]=c->r[1]+0x00000050u; // 800F0D74
  c->lr=0x800F0D7Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0D78
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F0D7C
  c->lr=c->r[0]; // 800F0D80
  c->r[1]=c->r[1]+0x00000050u; // 800F0D84
  return; // 800F0D88
}

// fn_800F0D8C
void f_800F0D8C(Ctx* __restrict c) {
  trace_call(0x800F0D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0D8C
  c->r[0]=c->lr; // 800F0D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0D94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0D98
  c->r[30]=c->r[3]|c->r[3]; // 800F0D9C
  c->r[31]=c->r[4]|c->r[4]; // 800F0DA0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F0DA4
  cmps(c,0,(int32_t)c->r[5],0); // 800F0DA8
  if (crb(c,2)) { goto L_800F0DB8; } // 800F0DAC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0DB0
  goto L_800F0DBC; // 800F0DB4
L_800F0DB8:;
  c->r[0]=0u+0x00000000u; // 800F0DB8
L_800F0DBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0DBC
  if (!crb(c,2)) { goto L_800F0DD4; } // 800F0DC0
  c->r[3]=c->r[30]|c->r[30]; // 800F0DC4
  c->r[4]=0u+0x000046B6u; // 800F0DC8
  c->r[5]=0u+0x00000001u; // 800F0DCC
  c->lr=0x800F0DD4u; f_80064744(c); // 800F0DD0
L_800F0DD4:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800F0DD4
  c->r[3]=c->r[30]|c->r[30]; // 800F0DD8
  c->lr=0x800F0DE0u; f_800F1DCC(c); // 800F0DDC
  cmps(c,0,(int32_t)c->r[3],0); // 800F0DE0
  if (!crb(c,2)) { goto L_800F0E18; } // 800F0DE4
  c->r[3]=c->r[30]|c->r[30]; // 800F0DE8
  c->lr=0x800F0DF0u; f_8006117C(c); // 800F0DEC
  cmps(c,0,(int32_t)c->r[3],0); // 800F0DF0
  if (crb(c,2)) { goto L_800F0E08; } // 800F0DF4
  c->r[4]=R32(c->r[31]+0x00000010u); // 800F0DF8
  c->r[3]=c->r[30]|c->r[30]; // 800F0DFC
  c->lr=0x800F0E04u; f_800F1F84(c); // 800F0E00
  goto L_800F0E18; // 800F0E04
L_800F0E08:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800F0E08
  c->r[3]=c->r[30]|c->r[30]; // 800F0E0C
  c->lr=0x800F0E14u; f_800F07D4(c); // 800F0E10
  W32(c->r[3]+0x00000010u,c->r[31]); // 800F0E14
L_800F0E18:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0E1C
  c->lr=c->r[0]; // 800F0E20
  c->r[1]=c->r[1]+0x00000010u; // 800F0E24
  return; // 800F0E28
}

// fn_800F0E2C
void f_800F0E2C(Ctx* __restrict c) {
  trace_call(0x800F0E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E2C
  c->r[0]=c->lr; // 800F0E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0E34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0E38
  c->r[31]=c->r[3]|c->r[3]; // 800F0E3C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0E40
  cmps(c,0,(int32_t)c->r[4],0); // 800F0E44
  if (crb(c,2)) { goto L_800F0E54; } // 800F0E48
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0E4C
  goto L_800F0E58; // 800F0E50
L_800F0E54:;
  c->r[0]=0u+0x00000000u; // 800F0E54
L_800F0E58:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0E58
  if (!crb(c,2)) { goto L_800F0E70; } // 800F0E5C
  c->r[3]=c->r[31]|c->r[31]; // 800F0E60
  c->r[4]=0u+0x00004651u; // 800F0E64
  c->r[5]=0u+0x00000001u; // 800F0E68
  c->lr=0x800F0E70u; f_80064744(c); // 800F0E6C
L_800F0E70:;
  c->r[3]=c->r[31]+0x00000354u; // 800F0E70
  c->lr=0x800F0E78u; f_800667AC(c); // 800F0E74
  cmps(c,0,(int32_t)c->r[3],0); // 800F0E78
  if (crb(c,2)) { goto L_800F0E88; } // 800F0E7C
  c->r[3]=c->r[31]|c->r[31]; // 800F0E80
  c->lr=0x800F0E88u; f_800F1874(c); // 800F0E84
L_800F0E88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0E88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0E8C
  c->lr=c->r[0]; // 800F0E90
  c->r[1]=c->r[1]+0x00000010u; // 800F0E94
  return; // 800F0E98
}

// fn_800F0E9C
void f_800F0E9C(Ctx* __restrict c) {
  trace_call(0x800F0E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E9C
  c->r[0]=c->lr; // 800F0EA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F0EA4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800F0EA8
  c->r[31]=c->r[3]|c->r[3]; // 800F0EAC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F0EB0
  cmps(c,0,(int32_t)c->r[5],0); // 800F0EB4
  if (crb(c,2)) { goto L_800F0EC4; } // 800F0EB8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F0EBC
  goto L_800F0EC8; // 800F0EC0
L_800F0EC4:;
  c->r[0]=0u+0x00000000u; // 800F0EC4
L_800F0EC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0EC8
  if (!crb(c,2)) { goto L_800F0EE0; } // 800F0ECC
  c->r[4]=R32(c->r[4]+0x00000010u); // 800F0ED0
  c->r[3]=c->r[31]|c->r[31]; // 800F0ED4
  c->r[5]=0u+0x00000001u; // 800F0ED8
  c->lr=0x800F0EE0u; f_80064744(c); // 800F0EDC
L_800F0EE0:;
  c->r[3]=c->r[31]+0x00000354u; // 800F0EE0
  c->lr=0x800F0EE8u; f_800667AC(c); // 800F0EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0EE8
  if (crb(c,2)) { goto L_800F0EF8; } // 800F0EEC
  c->r[3]=c->r[31]|c->r[31]; // 800F0EF0
  c->lr=0x800F0EF8u; f_800F1874(c); // 800F0EF4
L_800F0EF8:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800F0EF8
  c->r[3]=c->r[31]|c->r[31]; // 800F0EFC
  c->r[4]=c->r[1]+0x00000018u; // 800F0F00
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F0F04
  c->ctr=c->r[12]; // 800F0F08
  if (true) { c->lr=0x800F0F10u; dispatch(c,c->ctr); } // 800F0F0C
  c->r[4]=c->r[3]|c->r[3]; // 800F0F10
  c->r[3]=c->r[1]+0x00000008u; // 800F0F14
  c->lr=0x800F0F1Cu; f_80060878(c); // 800F0F18
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0F1C
  c->r[3]=c->r[31]|c->r[31]; // 800F0F20
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0F24
  c->r[4]=c->r[1]+0x00000008u; // 800F0F28
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0F2C
  c->lr=0x800F0F34u; f_800634E8(c); // 800F0F30
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F0F34
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800F0F38
  c->lr=c->r[0]; // 800F0F3C
  c->r[1]=c->r[1]+0x00000050u; // 800F0F40
  return; // 800F0F44
}

// fn_800F0F48
void f_800F0F48(Ctx* __restrict c) {
  trace_call(0x800F0F48u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0F48
  c->r[0]=c->lr; // 800F0F4C
  W32(c->r[1]+0x00000114u,c->r[0]); // 800F0F50
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800F0F54
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800F0F58
  W32(c->r[1]+0x000000FCu,c->r[31]); // 800F0F5C
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800F0F60
  c->r[30]=c->r[3]|c->r[3]; // 800F0F64
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F0F68
  cmps(c,0,(int32_t)c->r[4],0); // 800F0F6C
  if (crb(c,2)) { goto L_800F0F7C; } // 800F0F70
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F0F74
  goto L_800F0F80; // 800F0F78
L_800F0F7C:;
  c->r[0]=0u+0x00000000u; // 800F0F7C
L_800F0F80:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0F80
  if (!crb(c,2)) { goto L_800F1090; } // 800F0F84
  c->r[3]=c->r[30]|c->r[30]; // 800F0F88
  c->r[4]=0u+0x0000471Au; // 800F0F8C
  c->r[5]=0u+0x00000001u; // 800F0F90
  c->lr=0x800F0F98u; f_80064744(c); // 800F0F94
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800F0F98
  c->r[3]=c->r[30]|c->r[30]; // 800F0F9C
  c->r[4]=c->r[1]+0x000000C0u; // 800F0FA0
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F0FA4
  c->ctr=c->r[12]; // 800F0FA8
  if (true) { c->lr=0x800F0FB0u; dispatch(c,c->ctr); } // 800F0FAC
  c->r[4]=c->r[3]|c->r[3]; // 800F0FB0
  c->r[3]=c->r[1]+0x00000038u; // 800F0FB4
  c->lr=0x800F0FBCu; f_80060878(c); // 800F0FB8
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0FBC
  c->r[3]=c->r[30]|c->r[30]; // 800F0FC0
  {uint32_t ea=c->r[2]+0xFFFFA74Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0FC4
  c->r[4]=c->r[1]+0x00000038u; // 800F0FC8
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0FCC
  c->lr=0x800F0FD4u; f_800634E8(c); // 800F0FD0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800F0FD4
  c->r[3]=c->r[30]|c->r[30]; // 800F0FD8
  c->r[4]=c->r[1]+0x00000090u; // 800F0FDC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F0FE0
  c->ctr=c->r[12]; // 800F0FE4
  if (true) { c->lr=0x800F0FECu; dispatch(c,c->ctr); } // 800F0FE8
  c->r[4]=c->r[3]|c->r[3]; // 800F0FEC
  c->r[3]=c->r[1]+0x00000050u; // 800F0FF0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F0FF4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F0FF8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F0FFC
  c->lr=0x800F1004u; f_8005FD70(c); // 800F1000
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800F1004
  c->r[3]=c->r[30]|c->r[30]; // 800F1008
  c->r[4]=c->r[1]+0x00000060u; // 800F100C
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F1010
  c->ctr=c->r[12]; // 800F1014
  if (true) { c->lr=0x800F101Cu; dispatch(c,c->ctr); } // 800F1018
  c->r[4]=c->r[3]|c->r[3]; // 800F101C
  c->r[3]=c->r[1]+0x00000044u; // 800F1020
  c->lr=0x800F1028u; f_80060878(c); // 800F1024
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[31]=c->ps1[31]=RF32(ea);} // 800F1028
  c->r[4]=0u+0x00000001u; // 800F102C
  c->r[3]=R32(c->r[30]+0x00000418u); // 800F1030
  c->lr=0x800F1038u; f_800C2AB0(c); // 800F1034
  c->f[1]=c->f[31]; // 800F1038
  c->r[3]=R32(c->r[30]+0x00000418u); // 800F103C
  c->lr=0x800F1044u; f_800C2AC0(c); // 800F1040
  c->r[3]=c->r[1]+0x00000050u; // 800F1044
  c->r[5]=0u+0x806A0000u; // 800F1048
  c->r[4]=c->r[3]|c->r[3]; // 800F104C
  c->r[5]=c->r[5]+0x00000AA8u; // 800F1050
  c->lr=0x800F1058u; f_8030E0BC(c); // 800F1054
  c->f[1]=c->f[31]; // 800F1058
  c->r[3]=c->r[1]+0x00000020u; // 800F105C
  c->r[4]=c->r[1]+0x00000050u; // 800F1060
  c->lr=0x800F1068u; f_8005ED34(c); // 800F1064
  c->r[3]=c->r[1]+0x0000002Cu; // 800F1068
  c->r[4]=c->r[1]+0x00000044u; // 800F106C
  c->r[5]=c->r[1]+0x00000020u; // 800F1070
  c->lr=0x800F1078u; f_80073ACC(c); // 800F1074
  c->r[3]=c->r[30]+0x0000063Cu; // 800F1078
  c->r[4]=c->r[1]+0x0000002Cu; // 800F107C
  c->lr=0x800F1084u; f_8005DC84(c); // 800F1080
  c->r[3]=c->r[30]|c->r[30]; // 800F1084
  c->r[4]=0u+0x00000000u; // 800F1088
  c->lr=0x800F1090u; f_8005EA70(c); // 800F108C
L_800F1090:;
  c->r[3]=c->r[30]+0x00000354u; // 800F1090
  c->lr=0x800F1098u; f_800C9374(c); // 800F1094
  cmps(c,0,(int32_t)c->r[3],18203); // 800F1098
  c->r[31]=c->r[3]|c->r[3]; // 800F109C
  if (!crb(c,2)) { goto L_800F10BC; } // 800F10A0
  c->r[3]=c->r[30]|c->r[30]; // 800F10A4
  c->r[4]=0u+0x00000003u; // 800F10A8
  c->r[5]=0u+0x00000001u; // 800F10AC
  c->lr=0x800F10B4u; f_80062748(c); // 800F10B0
  c->r[3]=c->r[30]|c->r[30]; // 800F10B4
  c->lr=0x800F10BCu; f_800F21C8(c); // 800F10B8
L_800F10BC:;
  c->r[3]=c->r[30]+0x00000354u; // 800F10BC
  c->lr=0x800F10C4u; f_800667AC(c); // 800F10C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F10C4
  if (crb(c,2)) { goto L_800F116C; } // 800F10C8
  cmps(c,0,(int32_t)c->r[31],18202); // 800F10CC
  if (crb(c,2)) { goto L_800F10E8; } // 800F10D0
  cmps(c,0,(int32_t)c->r[31],18203); // 800F10D4
  if (crb(c,2)) { goto L_800F1138; } // 800F10D8
  cmps(c,0,(int32_t)c->r[31],18204); // 800F10DC
  if (crb(c,2)) { goto L_800F1164; } // 800F10E0
  goto L_800F116C; // 800F10E4
L_800F10E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F10E8
  c->r[4]=0u+0x0000471Bu; // 800F10EC
  c->r[5]=0u+0x00000001u; // 800F10F0
  c->lr=0x800F10F8u; f_80064744(c); // 800F10F4
  c->r[3]=R32(c->r[30]+0x00000404u); // 800F10F8
  c->lr=0x800F1100u; f_802EA43C(c); // 800F10FC
  c->f[31]=c->f[1]; // 800F1100
  c->r[3]=c->r[1]+0x00000008u; // 800F1104
  c->r[4]=c->r[30]+0x0000063Cu; // 800F1108
  c->lr=0x800F1110u; f_8005CD7C(c); // 800F110C
  c->r[31]=c->r[3]|c->r[3]; // 800F1110
  c->r[4]=c->r[30]|c->r[30]; // 800F1114
  c->r[3]=c->r[1]+0x00000014u; // 800F1118
  c->lr=0x800F1120u; f_80061A48(c); // 800F111C
  c->f[1]=c->f[31]; // 800F1120
  c->r[3]=c->r[30]|c->r[30]; // 800F1124
  c->r[5]=c->r[31]|c->r[31]; // 800F1128
  c->r[4]=c->r[1]+0x00000014u; // 800F112C
  c->lr=0x800F1134u; f_800F2104(c); // 800F1130
  goto L_800F116C; // 800F1134
L_800F1138:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1138
  c->r[4]=0u+0x0000471Cu; // 800F113C
  c->r[5]=0u+0x00000001u; // 800F1140
  c->lr=0x800F1148u; f_80064744(c); // 800F1144
  c->r[3]=R32(c->r[30]+0x00000418u); // 800F1148
  c->r[4]=0u+0x00000000u; // 800F114C
  c->lr=0x800F1154u; f_800C2AB0(c); // 800F1150
  c->r[3]=c->r[30]|c->r[30]; // 800F1154
  c->r[4]=0u+0x00000001u; // 800F1158
  c->lr=0x800F1160u; f_8005EA70(c); // 800F115C
  goto L_800F116C; // 800F1160
L_800F1164:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1164
  c->lr=0x800F116Cu; f_800F1874(c); // 800F1168
L_800F116C:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 800F116C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800F1170
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800F1174
  c->r[31]=R32(c->r[1]+0x000000FCu); // 800F1178
  c->r[30]=R32(c->r[1]+0x000000F8u); // 800F117C
  c->lr=c->r[0]; // 800F1180
  c->r[1]=c->r[1]+0x00000110u; // 800F1184
  return; // 800F1188
}

// fn_800F118C
void f_800F118C(Ctx* __restrict c) {
  trace_call(0x800F118Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F118C
  c->r[0]=c->lr; // 800F1190
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1194
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1198
  c->r[31]=c->r[3]|c->r[3]; // 800F119C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F11A0
  cmps(c,0,(int32_t)c->r[5],0); // 800F11A4
  if (crb(c,2)) { goto L_800F11B4; } // 800F11A8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F11AC
  goto L_800F11B8; // 800F11B0
L_800F11B4:;
  c->r[0]=0u+0x00000000u; // 800F11B4
L_800F11B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F11B8
  if (!crb(c,2)) { goto L_800F11D0; } // 800F11BC
  c->r[4]=R32(c->r[4]+0x00000010u); // 800F11C0
  c->r[3]=c->r[31]|c->r[31]; // 800F11C4
  c->r[5]=0u+0x00000001u; // 800F11C8
  c->lr=0x800F11D0u; f_80064744(c); // 800F11CC
L_800F11D0:;
  c->r[3]=c->r[31]+0x00000354u; // 800F11D0
  c->lr=0x800F11D8u; f_800667AC(c); // 800F11D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F11D8
  if (crb(c,2)) { goto L_800F11E8; } // 800F11DC
  c->r[3]=c->r[31]|c->r[31]; // 800F11E0
  c->lr=0x800F11E8u; f_800F1874(c); // 800F11E4
L_800F11E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F11E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F11EC
  c->lr=c->r[0]; // 800F11F0
  c->r[1]=c->r[1]+0x00000010u; // 800F11F4
  return; // 800F11F8
}

// fn_800F11FC
void f_800F11FC(Ctx* __restrict c) {
  trace_call(0x800F11FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F11FC
  c->r[0]=c->lr; // 800F1200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1208
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F120C
  c->r[30]=c->r[3]|c->r[3]; // 800F1210
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F1214
  cmps(c,0,(int32_t)c->r[4],0); // 800F1218
  if (crb(c,2)) { goto L_800F1228; } // 800F121C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F1220
  goto L_800F122C; // 800F1224
L_800F1228:;
  c->r[0]=0u+0x00000000u; // 800F1228
L_800F122C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F122C
  if (!crb(c,2)) { goto L_800F1250; } // 800F1230
  c->r[3]=c->r[30]|c->r[30]; // 800F1234
  c->r[4]=0u+0x00004786u; // 800F1238
  c->r[5]=0u+0x00000001u; // 800F123C
  c->lr=0x800F1244u; f_80064744(c); // 800F1240
  c->r[3]=c->r[30]|c->r[30]; // 800F1244
  c->r[4]=0u+0x00000000u; // 800F1248
  c->lr=0x800F1250u; f_8005EA70(c); // 800F124C
L_800F1250:;
  c->r[3]=c->r[30]+0x00000354u; // 800F1250
  c->lr=0x800F1258u; f_800C9374(c); // 800F1254
  cmps(c,0,(int32_t)c->r[3],18310); // 800F1258
  c->r[31]=c->r[3]|c->r[3]; // 800F125C
  if (!crb(c,2)) { goto L_800F12B8; } // 800F1260
  c->r[3]=c->r[30]|c->r[30]; // 800F1264
  c->lr=0x800F126Cu; f_8005EA80(c); // 800F1268
  cmps(c,0,(int32_t)c->r[3],0); // 800F126C
  if (crb(c,2)) { goto L_800F12B8; } // 800F1270
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800F1274
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1278
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F127C
  fcmp(c,0,c->f[1],c->f[0]); // 800F1280
  if (crb(c,1)) { goto L_800F129C; } // 800F1284
  c->r[3]=c->r[30]|c->r[30]; // 800F1288
  c->lr=0x800F1290u; f_800EFD40(c); // 800F128C
  c->r[0]=0u+0x0000497Au; // 800F1290
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F1294
  goto L_800F12AC; // 800F1298
L_800F129C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F129C
  c->r[4]=0u+0x00004787u; // 800F12A0
  c->r[5]=0u+0x00000001u; // 800F12A4
  c->lr=0x800F12ACu; f_80064744(c); // 800F12A8
L_800F12AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F12AC
  c->r[4]=0u+0x00000001u; // 800F12B0
  c->lr=0x800F12B8u; f_8005EA70(c); // 800F12B4
L_800F12B8:;
  c->r[3]=c->r[30]+0x00000354u; // 800F12B8
  c->lr=0x800F12C0u; f_800667AC(c); // 800F12BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F12C0
  if (crb(c,2)) { goto L_800F1380; } // 800F12C4
  cmps(c,0,(int32_t)c->r[31],18310); // 800F12C8
  if (crb(c,2)) { goto L_800F12E4; } // 800F12CC
  cmps(c,0,(int32_t)c->r[31],18311); // 800F12D0
  if (crb(c,2)) { goto L_800F1304; } // 800F12D4
  cmps(c,0,(int32_t)c->r[31],18350); // 800F12D8
  if (crb(c,2)) { goto L_800F1348; } // 800F12DC
  goto L_800F1380; // 800F12E0
L_800F12E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F12E4
  c->r[4]=0u+0x00004787u; // 800F12E8
  c->r[5]=0u+0x00000001u; // 800F12EC
  c->lr=0x800F12F4u; f_80064744(c); // 800F12F0
  c->r[3]=c->r[30]|c->r[30]; // 800F12F4
  c->r[4]=0u+0x00000001u; // 800F12F8
  c->lr=0x800F1300u; f_8005EA70(c); // 800F12FC
  goto L_800F1380; // 800F1300
L_800F1304:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800F1304
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1308
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F130C
  fcmp(c,0,c->f[1],c->f[0]); // 800F1310
  if (crb(c,1)) { goto L_800F1334; } // 800F1314
  c->r[3]=c->r[30]|c->r[30]; // 800F1318
  c->lr=0x800F1320u; f_800F20B8(c); // 800F131C
  c->r[31]=c->r[3]|c->r[3]; // 800F1320
  c->r[3]=c->r[30]|c->r[30]; // 800F1324
  c->lr=0x800F132Cu; f_800EFD40(c); // 800F1328
  W32(c->r[3]+0x00000010u,c->r[31]); // 800F132C
  goto L_800F1380; // 800F1330
L_800F1334:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1334
  c->r[4]=0u+0x000047AEu; // 800F1338
  c->r[5]=0u+0x00000001u; // 800F133C
  c->lr=0x800F1344u; f_80064744(c); // 800F1340
  goto L_800F1380; // 800F1344
L_800F1348:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800F1348
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F134C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1350
  fcmp(c,0,c->f[1],c->f[0]); // 800F1354
  if (crb(c,1)) { goto L_800F1378; } // 800F1358
  c->r[3]=c->r[30]|c->r[30]; // 800F135C
  c->lr=0x800F1364u; f_800F20B8(c); // 800F1360
  c->r[31]=c->r[3]|c->r[3]; // 800F1364
  c->r[3]=c->r[30]|c->r[30]; // 800F1368
  c->lr=0x800F1370u; f_800EFD40(c); // 800F136C
  W32(c->r[3]+0x00000010u,c->r[31]); // 800F1370
  goto L_800F1380; // 800F1374
L_800F1378:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1378
  c->lr=0x800F1380u; f_800F1874(c); // 800F137C
L_800F1380:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1384
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1388
  c->lr=c->r[0]; // 800F138C
  c->r[1]=c->r[1]+0x00000010u; // 800F1390
  return; // 800F1394
}

// fn_800F1398
void f_800F1398(Ctx* __restrict c) {
  trace_call(0x800F1398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1398
  c->r[0]=c->lr; // 800F139C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F13A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F13A4
  c->r[30]=c->r[3]|c->r[3]; // 800F13A8
  c->r[31]=c->r[4]|c->r[4]; // 800F13AC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F13B0
  cmps(c,0,(int32_t)c->r[5],0); // 800F13B4
  if (crb(c,2)) { goto L_800F13C4; } // 800F13B8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800F13BC
  goto L_800F13C8; // 800F13C0
L_800F13C4:;
  c->r[0]=0u+0x00000000u; // 800F13C4
L_800F13C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F13C8
  if (!crb(c,2)) { goto L_800F1400; } // 800F13CC
  c->r[4]=R32(c->r[4]+0x00000010u); // 800F13D0
  c->r[3]=c->r[30]|c->r[30]; // 800F13D4
  c->r[5]=0u+0x00000001u; // 800F13D8
  c->lr=0x800F13E0u; f_80064744(c); // 800F13DC
  c->r[0]=R32(c->r[31]+0x00000010u); // 800F13E0
  cmps(c,0,(int32_t)c->r[0],18811); // 800F13E4
  if (!crb(c,2)) { goto L_800F13F8; } // 800F13E8
  c->r[3]=c->r[30]|c->r[30]; // 800F13EC
  c->r[4]=0u+0x00000000u; // 800F13F0
  c->lr=0x800F13F8u; f_8005EA70(c); // 800F13F4
L_800F13F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F13F8
  c->lr=0x800F1400u; f_800F1CFC(c); // 800F13FC
L_800F1400:;
  c->r[3]=c->r[30]+0x00000354u; // 800F1400
  c->lr=0x800F1408u; f_800C9374(c); // 800F1404
  cmps(c,0,(int32_t)c->r[3],18811); // 800F1408
  c->r[31]=c->r[3]|c->r[3]; // 800F140C
  if (!crb(c,2)) { goto L_800F1440; } // 800F1410
  c->r[3]=c->r[30]|c->r[30]; // 800F1414
  c->lr=0x800F141Cu; f_8005EA80(c); // 800F1418
  cmps(c,0,(int32_t)c->r[3],0); // 800F141C
  if (crb(c,2)) { goto L_800F1440; } // 800F1420
  c->r[3]=c->r[30]|c->r[30]; // 800F1424
  c->r[4]=0u+0x0000497Au; // 800F1428
  c->r[5]=0u+0x00000001u; // 800F142C
  c->lr=0x800F1434u; f_80064744(c); // 800F1430
  c->r[3]=c->r[30]|c->r[30]; // 800F1434
  c->r[4]=0u+0x00000001u; // 800F1438
  c->lr=0x800F1440u; f_8005EA70(c); // 800F143C
L_800F1440:;
  c->r[3]=c->r[30]+0x00000354u; // 800F1440
  c->lr=0x800F1448u; f_800667AC(c); // 800F1444
  cmps(c,0,(int32_t)c->r[3],0); // 800F1448
  if (crb(c,2)) { goto L_800F1474; } // 800F144C
  cmps(c,0,(int32_t)c->r[31],18811); // 800F1450
  if (!crb(c,2)) { goto L_800F1474; } // 800F1454
  c->r[3]=c->r[30]|c->r[30]; // 800F1458
  c->r[4]=0u+0x0000497Au; // 800F145C
  c->r[5]=0u+0x00000001u; // 800F1460
  c->lr=0x800F1468u; f_80064744(c); // 800F1464
  c->r[3]=c->r[30]|c->r[30]; // 800F1468
  c->r[4]=0u+0x00000001u; // 800F146C
  c->lr=0x800F1474u; f_8005EA70(c); // 800F1470
L_800F1474:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1474
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1478
  c->lr=c->r[0]; // 800F147C
  c->r[1]=c->r[1]+0x00000010u; // 800F1480
  return; // 800F1484
}

// fn_800F1488
void f_800F1488(Ctx* __restrict c) {
  trace_call(0x800F1488u);
  cmps(c,0,(int32_t)c->r[4],0); // 800F1488
  if (!crb(c,2)) { goto L_800F1498; } // 800F148C
  c->r[3]=c->r[3]+0x000005F0u; // 800F1490
  f_8005CDE8(c); return; // 800F1494
L_800F1498:;
  c->r[3]=0u+0x00000000u; // 800F1498
  return; // 800F149C
}

// fn_800F14A0
void f_800F14A0(Ctx* __restrict c) {
  trace_call(0x800F14A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F14A0
  c->r[0]=c->lr; // 800F14A4
  c->r[4]=0u+0x00000000u; // 800F14A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F14AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F14B0
  c->r[30]=c->r[3]|c->r[3]; // 800F14B4
  c->r[31]=0u+0xFFFFFFFFu; // 800F14B8
  c->lr=0x800F14C0u; f_800F1488(c); // 800F14BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F14C0
  if (crb(c,2)) { goto L_800F14CC; } // 800F14C4
  c->r[31]=0u+0x00000000u; // 800F14C8
L_800F14CC:;
  cmps(c,0,(int32_t)c->r[31],-1); // 800F14CC
  if (!crb(c,2)) { goto L_800F14DC; } // 800F14D0
  c->r[3]=0u+0x00000000u; // 800F14D4
  goto L_800F1510; // 800F14D8
L_800F14DC:;
  c->r[3]=c->r[30]+0x00000354u; // 800F14DC
  c->lr=0x800F14E4u; f_800C9374(c); // 800F14E0
  cmps(c,0,(int32_t)c->r[3],18000); // 800F14E4
  if (!crb(c,2)) { goto L_800F14F4; } // 800F14E8
  c->r[3]=c->r[30]|c->r[30]; // 800F14EC
  c->lr=0x800F14F4u; f_800F1874(c); // 800F14F0
L_800F14F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F14F4
  if (!crb(c,2)) { goto L_800F150C; } // 800F14F8
  c->r[4]=c->r[31]|c->r[31]; // 800F14FC
  c->r[3]=c->r[30]+0x000005F0u; // 800F1500
  c->r[5]=0u+0x00000000u; // 800F1504
  c->lr=0x800F150Cu; f_8005DCA0(c); // 800F1508
L_800F150C:;
  c->r[3]=0u+0x00000001u; // 800F150C
L_800F1510:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1510
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1514
  c->lr=c->r[0]; // 800F1518
  c->r[1]=c->r[1]+0x00000010u; // 800F151C
  return; // 800F1520
}

// fn_800F1524
void f_800F1524(Ctx* __restrict c) {
  trace_call(0x800F1524u);
  c->r[5]=R32(c->r[3]+0x00000638u); // 800F1524
  cmps(c,0,(int32_t)c->r[5],0); // 800F1528
  if (crb(c,0)) { goto L_800F1538; } // 800F152C
  cmps(c,0,(int32_t)c->r[5],16); // 800F1530
  if (crb(c,0)) { goto L_800F1540; } // 800F1534
L_800F1538:;
  c->r[3]=0u+0x00000000u; // 800F1538
  return; // 800F153C
L_800F1540:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F1540
  cmps(c,0,(int32_t)c->r[4],0); // 800F1544
  c->r[4]=c->r[3]+c->r[0]; // 800F1548
  c->r[4]=R32(c->r[4]+0x000005F8u); // 800F154C
  if (crb(c,2)) { goto L_800F155C; } // 800F1550
  c->r[0]=c->r[5]+0x00000001u; // 800F1554
  W32(c->r[3]+0x00000638u,c->r[0]); // 800F1558
L_800F155C:;
  c->r[3]=c->r[4]|c->r[4]; // 800F155C
  return; // 800F1560
}

// fn_800F1564
void f_800F1564(Ctx* __restrict c) {
  trace_call(0x800F1564u);
  c->r[4]=R32(c->r[3]+0x00000638u); // 800F1564
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800F1568
  W32(c->r[3]+0x00000638u,c->r[0]); // 800F156C
  if (!crb(c,0)) return; // 800F1570
  c->r[0]=0u+0x00000000u; // 800F1574
  W32(c->r[3]+0x00000638u,c->r[0]); // 800F1578
  return; // 800F157C
}

// fn_800F1580
void f_800F1580(Ctx* __restrict c) {
  trace_call(0x800F1580u);
  cmps(c,0,(int32_t)c->r[4],0); // 800F1580
  if (crb(c,2)) { goto L_800F15BC; } // 800F1584
  cmps(c,0,(int32_t)c->r[4],1); // 800F1588
  if (crb(c,2)) { goto L_800F15C4; } // 800F158C
  cmps(c,0,(int32_t)c->r[4],2); // 800F1590
  if (crb(c,2)) { goto L_800F15CC; } // 800F1594
  cmps(c,0,(int32_t)c->r[4],3); // 800F1598
  if (crb(c,2)) { goto L_800F15D4; } // 800F159C
  cmps(c,0,(int32_t)c->r[4],4); // 800F15A0
  if (crb(c,2)) { goto L_800F15DC; } // 800F15A4
  cmps(c,0,(int32_t)c->r[4],5); // 800F15A8
  if (crb(c,2)) { goto L_800F15E4; } // 800F15AC
  cmps(c,0,(int32_t)c->r[4],6); // 800F15B0
  if (crb(c,2)) { goto L_800F15EC; } // 800F15B4
  return; // 800F15B8
L_800F15BC:;
  c->r[3]=0u+0x00000000u; // 800F15BC
  return; // 800F15C0
L_800F15C4:;
  c->r[3]=0u+0x00004650u; // 800F15C4
  return; // 800F15C8
L_800F15CC:;
  c->r[3]=0u+0x000046B5u; // 800F15CC
  return; // 800F15D0
L_800F15D4:;
  c->r[3]=0u+0x000046B4u; // 800F15D4
  return; // 800F15D8
L_800F15DC:;
  c->r[3]=0u+0x000046E6u; // 800F15DC
  return; // 800F15E0
L_800F15E4:;
  c->r[3]=0u+0x00004651u; // 800F15E4
  return; // 800F15E8
L_800F15EC:;
  c->r[3]=0u+0x0000471Au; // 800F15EC
  return; // 800F15F0
}

// fn_800F15F4
void f_800F15F4(Ctx* __restrict c) {
  trace_call(0x800F15F4u);
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 800F15F4
  c->r[3]=0u+0x00000001u; // 800F15F8
  cmpu(c,0,c->r[0],0x00000007u); // 800F15FC
  if (crb(c,1)) return; // 800F1600
  c->r[4]=0u+0x806E0000u; // 800F1604
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1608
  c->r[4]=c->r[4]+0xFFFF8358u; // 800F160C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800F1610
  c->ctr=c->r[4]; // 800F1614
  if (true) { switch (c->ctr) { case 0x800F161Cu: goto L_800F161C; case 0x800F1624u: goto L_800F1624; case 0x800F162Cu: goto L_800F162C; case 0x800F1634u: goto L_800F1634; case 0x800F163Cu: goto L_800F163C; case 0x800F1644u: goto L_800F1644; case 0x800F164Cu: goto L_800F164C; case 0x800F1654u: goto L_800F1654; default: break; } dispatch(c,c->ctr); return; } // 800F1618
L_800F161C:;
  c->r[3]=0u+0x00000001u; // 800F161C
  return; // 800F1620
L_800F1624:;
  c->r[3]=0u+0x00000002u; // 800F1624
  return; // 800F1628
L_800F162C:;
  c->r[3]=0u+0x00000003u; // 800F162C
  return; // 800F1630
L_800F1634:;
  c->r[3]=0u+0x00000004u; // 800F1634
  return; // 800F1638
L_800F163C:;
  c->r[3]=0u+0x00000005u; // 800F163C
  return; // 800F1640
L_800F1644:;
  c->r[3]=0u+0x00000006u; // 800F1644
  return; // 800F1648
L_800F164C:;
  c->r[3]=0u+0x00000007u; // 800F164C
  return; // 800F1650
L_800F1654:;
  c->r[3]=0u+0x00000008u; // 800F1654
  return; // 800F1658
}

// fn_800F165C
void f_800F165C(Ctx* __restrict c) {
  trace_call(0x800F165Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F165C
  c->r[0]=c->lr; // 800F1660
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1668
  c->r[26]=c->r[3]|c->r[3]; // 800F166C
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800F1670
  c->r[3]=c->r[4]+0x00000004u; // 800F1674
  c->lr=0x800F167Cu; f_800A097C(c); // 800F1678
  cmps(c,0,(int32_t)c->r[3],0); // 800F167C
  if (crb(c,2)) { goto L_800F1860; } // 800F1680
  c->r[3]=c->r[26]+0x000005F8u; // 800F1684
  c->r[31]=0u+0x00000000u; // 800F1688
  c->r[4]=0u+0x00000000u; // 800F168C
  c->r[5]=0u+0x00000040u; // 800F1690
  c->lr=0x800F1698u; f_800043EC(c); // 800F1694
  c->r[30]=0u+0x80690000u; // 800F1698
  W32(c->r[26]+0x00000638u,c->r[31]); // 800F169C
  c->r[29]=0u+0x00000000u; // 800F16A0
  c->r[30]=c->r[30]+0xFFFFED48u; // 800F16A4
L_800F16A8:;
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 800F16A8
  c->r[4]=c->r[29]|c->r[29]; // 800F16AC
  c->r[28]=0u+0x00000000u; // 800F16B0
  c->lr=0x800F16B8u; f_800C2EE0(c); // 800F16B4
  c->r[27]=c->r[3]|c->r[3]; // 800F16B8
  c->r[3]=c->r[30]+0x0000000Cu; // 800F16BC
  c->r[4]=c->r[27]|c->r[27]; // 800F16C0
  c->lr=0x800F16C8u; f_803B393C(c); // 800F16C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F16C8
  if (!crb(c,2)) { goto L_800F16D8; } // 800F16CC
  c->r[28]=0u+0x00000001u; // 800F16D0
  goto L_800F1840; // 800F16D4
L_800F16D8:;
  c->r[4]=c->r[27]|c->r[27]; // 800F16D8
  c->r[3]=c->r[30]+0x00000012u; // 800F16DC
  c->lr=0x800F16E4u; f_803B393C(c); // 800F16E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F16E4
  if (!crb(c,2)) { goto L_800F16F4; } // 800F16E8
  c->r[28]=0u+0x00000002u; // 800F16EC
  goto L_800F1840; // 800F16F0
L_800F16F4:;
  c->r[4]=c->r[27]|c->r[27]; // 800F16F4
  c->r[3]=c->r[30]+0x00000017u; // 800F16F8
  c->lr=0x800F1700u; f_803B393C(c); // 800F16FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F1700
  if (!crb(c,2)) { goto L_800F1710; } // 800F1704
  c->r[28]=0u+0x00000003u; // 800F1708
  goto L_800F1840; // 800F170C
L_800F1710:;
  c->r[4]=c->r[27]|c->r[27]; // 800F1710
  c->r[3]=c->r[30]+0x0000001Bu; // 800F1714
  c->lr=0x800F171Cu; f_803B393C(c); // 800F1718
  cmps(c,0,(int32_t)c->r[3],0); // 800F171C
  if (!crb(c,2)) { goto L_800F172C; } // 800F1720
  c->r[28]=0u+0x00000004u; // 800F1724
  goto L_800F1840; // 800F1728
L_800F172C:;
  c->r[4]=c->r[27]|c->r[27]; // 800F172C
  c->r[3]=c->r[30]+0x00000020u; // 800F1730
  c->lr=0x800F1738u; f_803B393C(c); // 800F1734
  cmps(c,0,(int32_t)c->r[3],0); // 800F1738
  if (!crb(c,2)) { goto L_800F1748; } // 800F173C
  c->r[28]=0u+0x00000005u; // 800F1740
  goto L_800F1840; // 800F1744
L_800F1748:;
  c->r[4]=c->r[27]|c->r[27]; // 800F1748
  c->r[3]=c->r[30]+0x00000027u; // 800F174C
  c->lr=0x800F1754u; f_803B393C(c); // 800F1750
  cmps(c,0,(int32_t)c->r[3],0); // 800F1754
  if (!crb(c,2)) { goto L_800F1764; } // 800F1758
  c->r[28]=0u+0x00000006u; // 800F175C
  goto L_800F1840; // 800F1760
L_800F1764:;
  c->r[4]=c->r[27]|c->r[27]; // 800F1764
  c->r[3]=c->r[30]+0x00000033u; // 800F1768
  c->lr=0x800F1770u; f_803B393C(c); // 800F176C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1770
  if (!crb(c,2)) { goto L_800F1780; } // 800F1774
  c->r[28]=0u+0x00000007u; // 800F1778
  goto L_800F1840; // 800F177C
L_800F1780:;
  c->r[4]=c->r[27]|c->r[27]; // 800F1780
  c->r[3]=c->r[30]+0x00000037u; // 800F1784
  c->lr=0x800F178Cu; f_803B393C(c); // 800F1788
  cmps(c,0,(int32_t)c->r[3],0); // 800F178C
  if (!crb(c,2)) { goto L_800F179C; } // 800F1790
  c->r[28]=0u+0x00000008u; // 800F1794
  goto L_800F1840; // 800F1798
L_800F179C:;
  c->r[4]=c->r[27]|c->r[27]; // 800F179C
  c->r[3]=c->r[30]+0x0000003Bu; // 800F17A0
  c->lr=0x800F17A8u; f_803B393C(c); // 800F17A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F17A8
  if (!crb(c,2)) { goto L_800F17B8; } // 800F17AC
  c->r[28]=0u+0x00000009u; // 800F17B0
  goto L_800F1840; // 800F17B4
L_800F17B8:;
  c->r[4]=c->r[27]|c->r[27]; // 800F17B8
  c->r[3]=c->r[30]+0x0000003Fu; // 800F17BC
  c->lr=0x800F17C4u; f_803B393C(c); // 800F17C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F17C4
  if (!crb(c,2)) { goto L_800F17D4; } // 800F17C8
  c->r[28]=0u+0x0000000Au; // 800F17CC
  goto L_800F1840; // 800F17D0
L_800F17D4:;
  c->r[4]=c->r[27]|c->r[27]; // 800F17D4
  c->r[3]=c->r[30]+0x00000043u; // 800F17D8
  c->lr=0x800F17E0u; f_803B393C(c); // 800F17DC
  cmps(c,0,(int32_t)c->r[3],0); // 800F17E0
  if (!crb(c,2)) { goto L_800F17F0; } // 800F17E4
  c->r[28]=0u+0x0000000Bu; // 800F17E8
  goto L_800F1840; // 800F17EC
L_800F17F0:;
  c->r[4]=c->r[27]|c->r[27]; // 800F17F0
  c->r[3]=c->r[30]+0x00000047u; // 800F17F4
  c->lr=0x800F17FCu; f_803B393C(c); // 800F17F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F17FC
  if (!crb(c,2)) { goto L_800F180C; } // 800F1800
  c->r[28]=0u+0x0000000Cu; // 800F1804
  goto L_800F1840; // 800F1808
L_800F180C:;
  c->r[4]=c->r[27]|c->r[27]; // 800F180C
  c->r[3]=c->r[30]+0x0000004Bu; // 800F1810
  c->lr=0x800F1818u; f_803B393C(c); // 800F1814
  cmps(c,0,(int32_t)c->r[3],0); // 800F1818
  if (!crb(c,2)) { goto L_800F1828; } // 800F181C
  c->r[28]=0u+0x0000000Du; // 800F1820
  goto L_800F1840; // 800F1824
L_800F1828:;
  c->r[4]=c->r[27]|c->r[27]; // 800F1828
  c->r[3]=c->r[30]+0x0000004Fu; // 800F182C
  c->lr=0x800F1834u; f_803B393C(c); // 800F1830
  cmps(c,0,(int32_t)c->r[3],0); // 800F1834
  if (!crb(c,2)) { goto L_800F1840; } // 800F1838
  c->r[28]=0u+0x0000000Eu; // 800F183C
L_800F1840:;
  cmps(c,0,(int32_t)c->r[28],0); // 800F1840
  if (crb(c,2)) { goto L_800F1854; } // 800F1844
  c->r[3]=c->r[26]+c->r[31]; // 800F1848
  c->r[31]=c->r[31]+0x00000004u; // 800F184C
  W32(c->r[3]+0x000005F8u,c->r[28]); // 800F1850
L_800F1854:;
  c->r[29]=c->r[29]+0x00000001u; // 800F1854
  cmps(c,0,(int32_t)c->r[29],16); // 800F1858
  if (crb(c,0)) { IRQCHK(c); goto L_800F16A8; } // 800F185C
L_800F1860:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1860
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1864
  c->lr=c->r[0]; // 800F1868
  c->r[1]=c->r[1]+0x00000020u; // 800F186C
  return; // 800F1870
}

// fn_800F1874
void f_800F1874(Ctx* __restrict c) {
  trace_call(0x800F1874u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1874
  c->r[0]=c->lr; // 800F1878
  c->r[4]=0u+0x00000001u; // 800F187C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F1880
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1884
  c->r[31]=c->r[1]|c->r[1]; // 800F1888
  c->r[30]=c->r[3]|c->r[3]; // 800F188C
  c->lr=0x800F1894u; f_800F1524(c); // 800F1890
  c->r[28]=c->r[3]|c->r[3]; // 800F1894
  c->r[3]=c->r[30]+0x00000354u; // 800F1898
  c->lr=0x800F18A0u; f_800C9374(c); // 800F189C
  cmpu(c,0,c->r[28],0x0000000Eu); // 800F18A0
  if (crb(c,1)) { goto L_800F1A2C; } // 800F18A4
  c->r[3]=0u+0x806E0000u; // 800F18A8
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800F18AC
  c->r[3]=c->r[3]+0xFFFF8378u; // 800F18B0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F18B4
  c->ctr=c->r[3]; // 800F18B8
  if (true) { switch (c->ctr) { case 0x800F18C0u: goto L_800F18C0; case 0x800F18CCu: goto L_800F18CC; case 0x800F18ECu: goto L_800F18EC; case 0x800F18F8u: goto L_800F18F8; case 0x800F1968u: goto L_800F1968; case 0x800F199Cu: goto L_800F199C; case 0x800F1A24u: goto L_800F1A24; default: break; } dispatch(c,c->ctr); return; } // 800F18BC
L_800F18C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F18C0
  c->lr=0x800F18C8u; f_800F1AF4(c); // 800F18C4
  goto L_800F1A2C; // 800F18C8
L_800F18CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F18CC
  c->r[4]=c->r[28]|c->r[28]; // 800F18D0
  c->lr=0x800F18D8u; f_800F1580(c); // 800F18D4
  c->r[29]=c->r[3]|c->r[3]; // 800F18D8
  c->r[3]=c->r[30]|c->r[30]; // 800F18DC
  c->lr=0x800F18E4u; f_800F0268(c); // 800F18E0
  W32(c->r[3]+0x00000010u,c->r[29]); // 800F18E4
  goto L_800F1A2C; // 800F18E8
L_800F18EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F18EC
  c->lr=0x800F18F4u; f_800F1E40(c); // 800F18F0
  goto L_800F1A2C; // 800F18F4
L_800F18F8:;
  c->lr=0x800F18FCu; f_800EE5B8(c); // 800F18F8
  c->r[4]=c->r[3]|c->r[3]; // 800F18FC
  c->r[3]=c->r[30]|c->r[30]; // 800F1900
  c->lr=0x800F1908u; f_80062F4C(c); // 800F1904
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F1908
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F190C
  c->r[3]=c->r[30]+c->r[0]; // 800F1910
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F1914
  cmps(c,0,(int32_t)c->r[28],0); // 800F1918
  if (crb(c,2)) { goto L_800F1944; } // 800F191C
  c->r[29]=0u+0x00000000u; // 800F1920
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800F1924
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800F1928
  c->lr=0x800F1930u; f_800EE5B8(c); // 800F192C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F1930
  c->r[0]=c->r[13]+0xFFFF850Cu; // 800F1934
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F1938
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F193C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F1940
L_800F1944:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F1944
  c->r[0]=0u+0x00000000u; // 800F1948
  c->r[3]=c->r[30]|c->r[30]; // 800F194C
  c->r[4]=c->r[28]|c->r[28]; // 800F1950
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F1954
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1958
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F195C
  c->lr=0x800F1964u; f_8006306C(c); // 800F1960
  goto L_800F1A2C; // 800F1964
L_800F1968:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1968
  c->r[4]=c->r[28]|c->r[28]; // 800F196C
  c->lr=0x800F1974u; f_800F1580(c); // 800F1970
  c->r[28]=c->r[3]|c->r[3]; // 800F1974
  c->r[3]=c->r[30]|c->r[30]; // 800F1978
  c->r[4]=c->r[28]|c->r[28]; // 800F197C
  c->lr=0x800F1984u; f_800F1DCC(c); // 800F1980
  c->r[29]=c->r[3]|c->r[3]; // 800F1984
  c->r[3]=c->r[30]|c->r[30]; // 800F1988
  c->lr=0x800F1990u; f_800F1A48(c); // 800F198C
  W32(c->r[3]+0x00000010u,c->r[28]); // 800F1990
  W32(c->r[3]+0x00000014u,c->r[29]); // 800F1994
  goto L_800F1A2C; // 800F1998
L_800F199C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F199C
  c->r[4]=c->r[28]|c->r[28]; // 800F19A0
  c->lr=0x800F19A8u; f_800F15F4(c); // 800F19A4
  c->r[4]=c->r[3]|c->r[3]; // 800F19A8
  c->r[3]=c->r[30]|c->r[30]; // 800F19AC
  c->lr=0x800F19B4u; f_800F1D78(c); // 800F19B0
  c->lr=0x800F19B8u; f_800EE848(c); // 800F19B4
  c->r[4]=c->r[3]|c->r[3]; // 800F19B8
  c->r[3]=c->r[30]|c->r[30]; // 800F19BC
  c->lr=0x800F19C4u; f_80062F4C(c); // 800F19C0
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F19C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F19C8
  c->r[3]=c->r[30]+c->r[0]; // 800F19CC
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F19D0
  cmps(c,0,(int32_t)c->r[28],0); // 800F19D4
  if (crb(c,2)) { goto L_800F1A00; } // 800F19D8
  c->r[29]=0u+0x00000000u; // 800F19DC
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F19E0
  W8(c->r[31]+0x00000008u,c->r[29]); // 800F19E4
  c->lr=0x800F19ECu; f_800EE848(c); // 800F19E8
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F19EC
  c->r[0]=c->r[13]+0xFFFF851Cu; // 800F19F0
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F19F4
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F19F8
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F19FC
L_800F1A00:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F1A00
  c->r[0]=0u+0x00000000u; // 800F1A04
  c->r[3]=c->r[30]|c->r[30]; // 800F1A08
  c->r[4]=c->r[28]|c->r[28]; // 800F1A0C
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F1A10
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1A14
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F1A18
  c->lr=0x800F1A20u; f_8006306C(c); // 800F1A1C
  goto L_800F1A2C; // 800F1A20
L_800F1A24:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1A24
  c->lr=0x800F1A2Cu; f_800F1C14(c); // 800F1A28
L_800F1A2C:;
  c->r[10]=c->r[31]|c->r[31]; // 800F1A2C
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1A30
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F1A34
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F1A38
  c->r[1]=c->r[10]|c->r[10]; // 800F1A3C
  c->lr=c->r[0]; // 800F1A40
  return; // 800F1A44
}

// fn_800F1A48
void f_800F1A48(Ctx* __restrict c) {
  trace_call(0x800F1A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1A48
  c->r[0]=c->lr; // 800F1A4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F1A50
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1A54
  c->r[31]=c->r[1]|c->r[1]; // 800F1A58
  c->r[28]=c->r[3]|c->r[3]; // 800F1A5C
  c->lr=0x800F1A64u; f_800EE990(c); // 800F1A60
  c->r[4]=c->r[3]|c->r[3]; // 800F1A64
  c->r[3]=c->r[28]|c->r[28]; // 800F1A68
  c->lr=0x800F1A70u; f_80062F4C(c); // 800F1A6C
  c->r[0]=R8(c->r[28]+0x00000010u); // 800F1A70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1A74
  c->r[3]=c->r[28]+c->r[0]; // 800F1A78
  c->r[29]=R32(c->r[3]+0x00000014u); // 800F1A7C
  cmps(c,0,(int32_t)c->r[29],0); // 800F1A80
  if (crb(c,2)) { goto L_800F1AB4; } // 800F1A84
  c->r[30]=0u+0x00000000u; // 800F1A88
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F1A8C
  W8(c->r[31]+0x00000008u,c->r[30]); // 800F1A90
  c->lr=0x800F1A98u; f_800EE990(c); // 800F1A94
  W32(c->r[29]+0x00000000u,c->r[3]); // 800F1A98
  c->r[0]=c->r[13]+0xFFFF8524u; // 800F1A9C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F1AA0
  W32(c->r[29]+0x00000008u,c->r[30]); // 800F1AA4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F1AA8
  W32(c->r[29]+0x00000010u,c->r[30]); // 800F1AAC
  W32(c->r[29]+0x00000014u,c->r[30]); // 800F1AB0
L_800F1AB4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F1AB4
  c->r[0]=0u+0x00000000u; // 800F1AB8
  c->r[3]=c->r[28]|c->r[28]; // 800F1ABC
  c->r[4]=c->r[29]|c->r[29]; // 800F1AC0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F1AC4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F1AC8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800F1ACC
  c->lr=0x800F1AD4u; f_8006306C(c); // 800F1AD0
  c->r[10]=c->r[31]|c->r[31]; // 800F1AD4
  c->r[3]=c->r[29]|c->r[29]; // 800F1AD8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1ADC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F1AE0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F1AE4
  c->r[1]=c->r[10]|c->r[10]; // 800F1AE8
  c->lr=c->r[0]; // 800F1AEC
  return; // 800F1AF0
}

// fn_800F1AF4
void f_800F1AF4(Ctx* __restrict c) {
  trace_call(0x800F1AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AF4
  c->r[0]=c->lr; // 800F1AF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F1AFC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1B00
  c->r[31]=c->r[1]|c->r[1]; // 800F1B04
  c->r[28]=c->r[3]|c->r[3]; // 800F1B08
  c->lr=0x800F1B10u; f_800EEAD8(c); // 800F1B0C
  c->r[4]=c->r[3]|c->r[3]; // 800F1B10
  c->r[3]=c->r[28]|c->r[28]; // 800F1B14
  c->lr=0x800F1B1Cu; f_80062F4C(c); // 800F1B18
  c->r[0]=R8(c->r[28]+0x00000010u); // 800F1B1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1B20
  c->r[3]=c->r[28]+c->r[0]; // 800F1B24
  c->r[29]=R32(c->r[3]+0x00000014u); // 800F1B28
  cmps(c,0,(int32_t)c->r[29],0); // 800F1B2C
  if (crb(c,2)) { goto L_800F1B58; } // 800F1B30
  c->r[30]=0u+0x00000000u; // 800F1B34
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F1B38
  W8(c->r[31]+0x00000008u,c->r[30]); // 800F1B3C
  c->lr=0x800F1B44u; f_800EEAD8(c); // 800F1B40
  W32(c->r[29]+0x00000000u,c->r[3]); // 800F1B44
  c->r[0]=c->r[13]+0xFFFF852Cu; // 800F1B48
  W32(c->r[29]+0x00000004u,c->r[0]); // 800F1B4C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800F1B50
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F1B54
L_800F1B58:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F1B58
  c->r[0]=0u+0x00000000u; // 800F1B5C
  c->r[3]=c->r[28]|c->r[28]; // 800F1B60
  c->r[4]=c->r[29]|c->r[29]; // 800F1B64
  W32(c->r[29]+0x00000008u,c->r[0]); // 800F1B68
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F1B6C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800F1B70
  c->lr=0x800F1B78u; f_8006306C(c); // 800F1B74
  c->r[10]=c->r[31]|c->r[31]; // 800F1B78
  c->r[3]=c->r[29]|c->r[29]; // 800F1B7C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1B80
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F1B84
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F1B88
  c->r[1]=c->r[10]|c->r[10]; // 800F1B8C
  c->lr=c->r[0]; // 800F1B90
  return; // 800F1B94
}

// fn_800F1B98
void f_800F1B98(Ctx* __restrict c) {
  trace_call(0x800F1B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B98
  c->r[0]=c->lr; // 800F1B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1BA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1BA4
  c->r[29]=c->r[3]|c->r[3]; // 800F1BA8
  c->r[30]=0u+0x00000001u; // 800F1BAC
  c->r[31]=R32(c->r[3]+0x000005C8u); // 800F1BB0
  c->r[3]=c->r[31]|c->r[31]; // 800F1BB4
  c->lr=0x800F1BBCu; f_803A91D4(c); // 800F1BB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F1BBC
  if (crb(c,2)) { goto L_800F1BE0; } // 800F1BC0
  c->r[3]=R32(c->r[29]+0x00000434u); // 800F1BC4
  c->r[4]=c->r[31]|c->r[31]; // 800F1BC8
  c->lr=0x800F1BD0u; f_800FE0C8(c); // 800F1BCC
  cmps(c,0,(int32_t)c->r[3],0); // 800F1BD0
  if (!crb(c,2)) { goto L_800F1BE4; } // 800F1BD4
  c->r[30]=0u+0x00000000u; // 800F1BD8
  goto L_800F1BE4; // 800F1BDC
L_800F1BE0:;
  c->r[30]=0u+0x00000000u; // 800F1BE0
L_800F1BE4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F1BE4
  if (!crb(c,2)) { goto L_800F1BF8; } // 800F1BE8
  c->r[3]=R32(c->r[29]+0x00000434u); // 800F1BEC
  c->r[4]=0u+0x00000000u; // 800F1BF0
  c->lr=0x800F1BF8u; f_800FE038(c); // 800F1BF4
L_800F1BF8:;
  c->r[3]=R32(c->r[29]+0x00000434u); // 800F1BF8
  c->lr=0x800F1C00u; f_800FE178(c); // 800F1BFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1C00
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1C04
  c->lr=c->r[0]; // 800F1C08
  c->r[1]=c->r[1]+0x00000020u; // 800F1C0C
  return; // 800F1C10
}

// fn_800F1C14
void f_800F1C14(Ctx* __restrict c) {
  trace_call(0x800F1C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C14
  c->r[0]=c->lr; // 800F1C18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1C1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1C20
  c->r[29]=c->r[3]|c->r[3]; // 800F1C24
  c->lr=0x800F1C2Cu; f_800F1B98(c); // 800F1C28
  cmps(c,0,(int32_t)c->r[3],0); // 800F1C2C
  c->r[30]=0u+0x00000000u; // 800F1C30
  if (crb(c,2)) { goto L_800F1C4C; } // 800F1C34
  cmps(c,0,(int32_t)c->r[3],1); // 800F1C38
  if (crb(c,2)) { goto L_800F1C54; } // 800F1C3C
  cmps(c,0,(int32_t)c->r[3],2); // 800F1C40
  if (crb(c,2)) { goto L_800F1C5C; } // 800F1C44
  goto L_800F1C60; // 800F1C48
L_800F1C4C:;
  c->r[30]=0u+0x00004718u; // 800F1C4C
  goto L_800F1C60; // 800F1C50
L_800F1C54:;
  c->r[30]=0u+0x00004719u; // 800F1C54
  goto L_800F1C60; // 800F1C58
L_800F1C5C:;
  c->r[30]=0u+0x0000471Au; // 800F1C5C
L_800F1C60:;
  cmpu(c,0,c->r[3],0x00000002u); // 800F1C60
  if (!crb(c,1)) { goto L_800F1C74; } // 800F1C64
  cmps(c,0,(int32_t)c->r[3],3); // 800F1C68
  if (crb(c,2)) { goto L_800F1CE0; } // 800F1C6C
  goto L_800F1CE8; // 800F1C70
L_800F1C74:;
  c->r[3]=c->r[29]|c->r[29]; // 800F1C74
  c->r[4]=c->r[30]|c->r[30]; // 800F1C78
  c->lr=0x800F1C80u; f_800F1DCC(c); // 800F1C7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F1C80
  c->r[31]=c->r[3]|c->r[3]; // 800F1C84
  cmpu(c,0,c->r[0],0x00000001u); // 800F1C88
  if (!crb(c,1)) { goto L_800F1C9C; } // 800F1C8C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1C90
  if (crb(c,2)) { goto L_800F1CB0; } // 800F1C94
  goto L_800F1CE8; // 800F1C98
L_800F1C9C:;
  c->r[3]=c->r[29]|c->r[29]; // 800F1C9C
  c->lr=0x800F1CA4u; f_800F1A48(c); // 800F1CA0
  W32(c->r[3]+0x00000010u,c->r[30]); // 800F1CA4
  W32(c->r[3]+0x00000014u,c->r[31]); // 800F1CA8
  goto L_800F1CE8; // 800F1CAC
L_800F1CB0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F1CB0
  c->lr=0x800F1CB8u; f_8006117C(c); // 800F1CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F1CB8
  if (crb(c,2)) { goto L_800F1CD0; } // 800F1CBC
  c->r[3]=c->r[29]|c->r[29]; // 800F1CC0
  c->r[4]=c->r[30]|c->r[30]; // 800F1CC4
  c->lr=0x800F1CCCu; f_800F1F84(c); // 800F1CC8
  goto L_800F1CE8; // 800F1CCC
L_800F1CD0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F1CD0
  c->lr=0x800F1CD8u; f_800F07D4(c); // 800F1CD4
  W32(c->r[3]+0x00000010u,c->r[30]); // 800F1CD8
  goto L_800F1CE8; // 800F1CDC
L_800F1CE0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F1CE0
  c->lr=0x800F1CE8u; f_800F1AF4(c); // 800F1CE4
L_800F1CE8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1CE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1CEC
  c->lr=c->r[0]; // 800F1CF0
  c->r[1]=c->r[1]+0x00000020u; // 800F1CF4
  return; // 800F1CF8
}

// fn_800F1CFC
void f_800F1CFC(Ctx* __restrict c) {
  trace_call(0x800F1CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1CFC
  c->r[0]=c->lr; // 800F1D00
  c->r[4]=0u+0x00000016u; // 800F1D04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1D08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1D0C
  c->r[31]=c->r[3]|c->r[3]; // 800F1D10
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800F1D14
  c->r[3]=c->r[5]+0x000000C4u; // 800F1D18
  c->lr=0x800F1D20u; f_8005CDE8(c); // 800F1D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1D20
  if (!crb(c,2)) { goto L_800F1D64; } // 800F1D24
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800F1D28
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1D2C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1D30
  fcmp(c,0,c->f[1],c->f[0]); // 800F1D34
  if (!crb(c,1)) { goto L_800F1D48; } // 800F1D38
  c->r[3]=c->r[31]|c->r[31]; // 800F1D3C
  c->lr=0x800F1D44u; f_8005E00C(c); // 800F1D40
  goto L_800F1D58; // 800F1D44
L_800F1D48:;
  c->r[3]=c->r[3]+0x000000C4u; // 800F1D48
  c->r[4]=0u+0x00000016u; // 800F1D4C
  c->r[5]=0u+0x00000001u; // 800F1D50
  c->lr=0x800F1D58u; f_8005DCA0(c); // 800F1D54
L_800F1D58:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1D58
  c->r[4]=0u+0x00000000u; // 800F1D5C
  c->lr=0x800F1D64u; f_8005EE88(c); // 800F1D60
L_800F1D64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1D68
  c->lr=c->r[0]; // 800F1D6C
  c->r[1]=c->r[1]+0x00000010u; // 800F1D70
  return; // 800F1D74
}

// fn_800F1D78
void f_800F1D78(Ctx* __restrict c) {
  trace_call(0x800F1D78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1D78
  c->r[0]=c->lr; // 800F1D7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1D80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1D84
  c->r[30]=c->r[3]|c->r[3]; // 800F1D88
  c->r[31]=c->r[4]|c->r[4]; // 800F1D8C
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800F1D90
  c->lr=0x800F1D98u; f_800C2DF8(c); // 800F1D94
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F1D98
  c->r[3]=c->r[30]+c->r[0]; // 800F1D9C
  c->r[4]=R32(c->r[3]+0x000005CCu); // 800F1DA0
  cmps(c,0,(int32_t)c->r[4],0); // 800F1DA4
  if (crb(c,2)) { goto L_800F1DB8; } // 800F1DA8
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800F1DAC
  c->r[3]=c->r[3]+0x00000004u; // 800F1DB0
  c->lr=0x800F1DB8u; f_800A0914(c); // 800F1DB4
L_800F1DB8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1DB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1DBC
  c->lr=c->r[0]; // 800F1DC0
  c->r[1]=c->r[1]+0x00000010u; // 800F1DC4
  return; // 800F1DC8
}

// fn_800F1DCC
void f_800F1DCC(Ctx* __restrict c) {
  trace_call(0x800F1DCCu);
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800F1DCC
  c->r[0]=c->r[4]+0xFFFFB8E8u; // 800F1DD0
  cmpu(c,0,c->r[0],0x00000001u); // 800F1DD4
  c->r[3]=0u+0x00000000u; // 800F1DD8
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1DDC
  if (!crb(c,1)) { goto L_800F1DF0; } // 800F1DE0
  cmps(c,0,(int32_t)c->r[4],18202); // 800F1DE4
  if (crb(c,2)) { goto L_800F1E18; } // 800F1DE8
  return; // 800F1DEC
L_800F1DF0:;
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1DF0
  fcmp(c,0,c->f[1],c->f[0]); // 800F1DF4
  if (!crb(c,0)) { goto L_800F1E04; } // 800F1DF8
  c->r[3]=0u+0x00000001u; // 800F1DFC
  return; // 800F1E00
L_800F1E04:;
  {uint32_t ea=c->r[2]+0xFFFFA754u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1E04
  fcmp(c,0,c->f[0],c->f[1]); // 800F1E08
  if (!crb(c,0)) return; // 800F1E0C
  c->r[3]=0u+0x00000002u; // 800F1E10
  return; // 800F1E14
L_800F1E18:;
  {uint32_t ea=c->r[2]+0xFFFFA754u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1E18
  fcmp(c,0,c->f[1],c->f[0]); // 800F1E1C
  if (!crb(c,0)) { goto L_800F1E2C; } // 800F1E20
  c->r[3]=0u+0x00000001u; // 800F1E24
  return; // 800F1E28
L_800F1E2C:;
  {uint32_t ea=c->r[2]+0xFFFFA758u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1E2C
  fcmp(c,0,c->f[0],c->f[1]); // 800F1E30
  if (!crb(c,0)) return; // 800F1E34
  c->r[3]=0u+0x00000002u; // 800F1E38
  return; // 800F1E3C
}

// fn_800F1E40
void f_800F1E40(Ctx* __restrict c) {
  trace_call(0x800F1E40u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E40
  c->r[0]=c->lr; // 800F1E44
  W32(c->r[1]+0x00000074u,c->r[0]); // 800F1E48
  c->r[11]=c->r[1]+0x00000070u; // 800F1E4C
  c->lr=0x800F1E54u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1E50
  c->r[31]=c->r[1]|c->r[1]; // 800F1E54
  c->r[30]=c->r[3]|c->r[3]; // 800F1E58
  c->r[3]=c->r[31]+0x0000001Cu; // 800F1E5C
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800F1E60
  c->lr=0x800F1E68u; f_800C2E48(c); // 800F1E64
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800F1E68
  c->r[3]=c->r[31]+0x00000010u; // 800F1E6C
  c->lr=0x800F1E74u; f_800C2FB8(c); // 800F1E70
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1E74
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1E78
  fcmp(c,0,c->f[1],c->f[0]); // 800F1E7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F1E80
  if (!crb(c,2)) { goto L_800F1EF8; } // 800F1E84
  c->lr=0x800F1E8Cu; f_800EE7A4(c); // 800F1E88
  c->r[4]=c->r[3]|c->r[3]; // 800F1E8C
  c->r[3]=c->r[30]|c->r[30]; // 800F1E90
  c->lr=0x800F1E98u; f_80062F4C(c); // 800F1E94
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F1E98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1E9C
  c->r[3]=c->r[30]+c->r[0]; // 800F1EA0
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F1EA4
  cmps(c,0,(int32_t)c->r[28],0); // 800F1EA8
  if (crb(c,2)) { goto L_800F1ED4; } // 800F1EAC
  c->r[29]=0u+0x00000000u; // 800F1EB0
  W32(c->r[31]+0x00000054u,c->r[1]); // 800F1EB4
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800F1EB8
  c->lr=0x800F1EC0u; f_800EE7A4(c); // 800F1EBC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F1EC0
  c->r[0]=c->r[13]+0xFFFF8518u; // 800F1EC4
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F1EC8
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F1ECC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F1ED0
L_800F1ED4:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F1ED4
  c->r[0]=0u+0x00000000u; // 800F1ED8
  c->r[3]=c->r[30]|c->r[30]; // 800F1EDC
  c->r[4]=c->r[28]|c->r[28]; // 800F1EE0
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F1EE4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1EE8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F1EEC
  c->lr=0x800F1EF4u; f_8006306C(c); // 800F1EF0
  goto L_800F1F64; // 800F1EF4
L_800F1EF8:;
  c->lr=0x800F1EFCu; f_800EE700(c); // 800F1EF8
  c->r[4]=c->r[3]|c->r[3]; // 800F1EFC
  c->r[3]=c->r[30]|c->r[30]; // 800F1F00
  c->lr=0x800F1F08u; f_80062F4C(c); // 800F1F04
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F1F08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1F0C
  c->r[3]=c->r[30]+c->r[0]; // 800F1F10
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F1F14
  cmps(c,0,(int32_t)c->r[28],0); // 800F1F18
  if (crb(c,2)) { goto L_800F1F44; } // 800F1F1C
  c->r[29]=0u+0x00000000u; // 800F1F20
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800F1F24
  W8(c->r[31]+0x00000008u,c->r[29]); // 800F1F28
  c->lr=0x800F1F30u; f_800EE700(c); // 800F1F2C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F1F30
  c->r[0]=c->r[13]+0xFFFF8514u; // 800F1F34
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F1F38
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F1F3C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F1F40
L_800F1F44:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F1F44
  c->r[0]=0u+0x00000000u; // 800F1F48
  c->r[3]=c->r[30]|c->r[30]; // 800F1F4C
  c->r[4]=c->r[28]|c->r[28]; // 800F1F50
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F1F54
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1F58
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F1F5C
  c->lr=0x800F1F64u; f_8006306C(c); // 800F1F60
L_800F1F64:;
  c->r[10]=c->r[31]|c->r[31]; // 800F1F64
  c->r[11]=c->r[10]+0x00000070u; // 800F1F68
  c->lr=0x800F1F70u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1F6C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F1F70
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F1F74
  c->r[1]=c->r[10]|c->r[10]; // 800F1F78
  c->lr=c->r[0]; // 800F1F7C
  return; // 800F1F80
}

// fn_800F1F84
void f_800F1F84(Ctx* __restrict c) {
  trace_call(0x800F1F84u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1F84
  c->r[0]=c->lr; // 800F1F88
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F1F8C
  c->r[0]=c->r[4]+0xFFFFB8E8u; // 800F1F90
  cmpu(c,0,c->r[0],0x00000001u); // 800F1F94
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1F98
  c->r[31]=c->r[1]|c->r[1]; // 800F1F9C
  c->r[30]=c->r[3]|c->r[3]; // 800F1FA0
  c->r[27]=c->r[4]|c->r[4]; // 800F1FA4
  if (!crb(c,1)) { goto L_800F1FB8; } // 800F1FA8
  cmps(c,0,(int32_t)c->r[4],18202); // 800F1FAC
  if (crb(c,2)) { goto L_800F2030; } // 800F1FB0
  goto L_800F209C; // 800F1FB4
L_800F1FB8:;
  c->lr=0x800F1FBCu; f_800EE514(c); // 800F1FB8
  c->r[4]=c->r[3]|c->r[3]; // 800F1FBC
  c->r[3]=c->r[30]|c->r[30]; // 800F1FC0
  c->lr=0x800F1FC8u; f_80062F4C(c); // 800F1FC4
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F1FC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F1FCC
  c->r[3]=c->r[30]+c->r[0]; // 800F1FD0
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F1FD4
  cmps(c,0,(int32_t)c->r[28],0); // 800F1FD8
  if (crb(c,2)) { goto L_800F2008; } // 800F1FDC
  c->r[29]=0u+0x00000000u; // 800F1FE0
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800F1FE4
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800F1FE8
  c->lr=0x800F1FF0u; f_800EE514(c); // 800F1FEC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F1FF0
  c->r[0]=c->r[13]+0xFFFF8508u; // 800F1FF4
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F1FF8
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F1FFC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F2000
  W32(c->r[28]+0x00000010u,c->r[29]); // 800F2004
L_800F2008:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F2008
  c->r[0]=0u+0x00000000u; // 800F200C
  c->r[3]=c->r[30]|c->r[30]; // 800F2010
  c->r[4]=c->r[28]|c->r[28]; // 800F2014
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F2018
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F201C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F2020
  c->lr=0x800F2028u; f_8006306C(c); // 800F2024
  W32(c->r[28]+0x00000010u,c->r[27]); // 800F2028
  goto L_800F209C; // 800F202C
L_800F2030:;
  c->lr=0x800F2034u; f_800EE470(c); // 800F2030
  c->r[4]=c->r[3]|c->r[3]; // 800F2034
  c->r[3]=c->r[30]|c->r[30]; // 800F2038
  c->lr=0x800F2040u; f_80062F4C(c); // 800F203C
  c->r[0]=R8(c->r[30]+0x00000010u); // 800F2040
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F2044
  c->r[3]=c->r[30]+c->r[0]; // 800F2048
  c->r[28]=R32(c->r[3]+0x00000014u); // 800F204C
  cmps(c,0,(int32_t)c->r[28],0); // 800F2050
  if (crb(c,2)) { goto L_800F207C; } // 800F2054
  c->r[29]=0u+0x00000000u; // 800F2058
  W32(c->r[31]+0x00000024u,c->r[1]); // 800F205C
  W8(c->r[31]+0x00000008u,c->r[29]); // 800F2060
  c->lr=0x800F2068u; f_800EE470(c); // 800F2064
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F2068
  c->r[0]=c->r[13]+0xFFFF8504u; // 800F206C
  W32(c->r[28]+0x00000004u,c->r[0]); // 800F2070
  W32(c->r[28]+0x00000008u,c->r[29]); // 800F2074
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800F2078
L_800F207C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800F207C
  c->r[0]=0u+0x00000000u; // 800F2080
  c->r[3]=c->r[30]|c->r[30]; // 800F2084
  c->r[4]=c->r[28]|c->r[28]; // 800F2088
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F208C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F2090
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F2094
  c->lr=0x800F209Cu; f_8006306C(c); // 800F2098
L_800F209C:;
  c->r[10]=c->r[31]|c->r[31]; // 800F209C
  {uint32_t ea=c->r[10]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F20A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F20A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F20A8
  c->r[1]=c->r[10]|c->r[10]; // 800F20AC
  c->lr=c->r[0]; // 800F20B0
  return; // 800F20B4
}

// fn_800F20B8
void f_800F20B8(Ctx* __restrict c) {
  trace_call(0x800F20B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F20B8
  c->r[0]=c->lr; // 800F20BC
  c->r[3]=R32(c->r[2]+0xFFFFA760u); // 800F20C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F20C4
  c->r[0]=R32(c->r[2]+0xFFFFA764u); // 800F20C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F20CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F20D0
  c->lr=0x800F20D8u; f_803B220C(c); // 800F20D4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800F20D8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800F20DC
  c->r[0]=c->r[0]^c->r[4]; // 800F20E0
  c->r[3]=c->r[1]+0x00000008u; // 800F20E4
  c->r[0]=c->r[0]-c->r[4]; // 800F20E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F20EC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F20F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F20F4
  c->lr=c->r[0]; // 800F20F8
  c->r[1]=c->r[1]+0x00000010u; // 800F20FC
  return; // 800F2100
}

// fn_800F2104
void f_800F2104(Ctx* __restrict c) {
  trace_call(0x800F2104u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2104
  c->r[0]=c->lr; // 800F2108
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F210C
  c->r[11]=c->r[1]+0x00000030u; // 800F2110
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800F2114
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800F2118
  c->lr=0x800F2120u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F211C
  c->f[31]=c->f[1]; // 800F2120
  c->r[29]=c->r[3]|c->r[3]; // 800F2124
  c->r[31]=c->r[5]|c->r[5]; // 800F2128
  c->r[30]=c->r[4]|c->r[4]; // 800F212C
  c->r[4]=c->r[31]|c->r[31]; // 800F2130
  c->r[3]=c->r[3]+0x0000063Cu; // 800F2134
  c->lr=0x800F213Cu; f_8005DC84(c); // 800F2138
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F213C
  c->r[4]=c->r[31]|c->r[31]; // 800F2140
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800F2144
  c->r[5]=c->r[30]|c->r[30]; // 800F2148
  c->r[3]=c->r[1]+0x00000014u; // 800F214C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 800F2150
  c->lr=0x800F2158u; f_8005FC60(c); // 800F2154
  c->r[3]=c->r[29]+0x00000648u; // 800F2158
  c->r[4]=c->r[1]+0x00000014u; // 800F215C
  c->lr=0x800F2164u; f_8005DC84(c); // 800F2160
  c->r[3]=c->r[29]+0x00000648u; // 800F2164
  c->lr=0x800F216Cu; f_80084FAC(c); // 800F2168
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 800F216C
  c->r[3]=c->r[29]+0x00000648u; // 800F2170
  c->r[5]=0u+0x806A0000u; // 800F2174
  c->r[4]=c->r[3]|c->r[3]; // 800F2178
  c->r[5]=c->r[5]+0x00000AA8u; // 800F217C
  c->lr=0x800F2184u; f_8030E0BC(c); // 800F2180
  c->f[1]=c->f[31]; // 800F2184
  c->r[3]=c->r[1]+0x00000008u; // 800F2188
  c->r[4]=c->r[29]+0x00000648u; // 800F218C
  c->lr=0x800F2194u; f_8005ED34(c); // 800F2190
  c->r[3]=c->r[29]+0x00000648u; // 800F2194
  c->r[4]=c->r[1]+0x00000008u; // 800F2198
  c->lr=0x800F21A0u; f_8005DC84(c); // 800F219C
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F21A0
  {uint32_t ea=c->r[29]+0x00000654u; WF32(ea,c->f[0]);} // 800F21A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800F21A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800F21AC
  c->r[11]=c->r[1]+0x00000030u; // 800F21B0
  c->lr=0x800F21B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F21B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F21B8
  c->lr=c->r[0]; // 800F21BC
  c->r[1]=c->r[1]+0x00000040u; // 800F21C0
  return; // 800F21C4
}

// fn_800F21C8
void f_800F21C8(Ctx* __restrict c) {
  trace_call(0x800F21C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F21C8
  c->r[0]=c->lr; // 800F21CC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F21D0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800F21D4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800F21D8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800F21DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800F21E0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800F21E4
  c->r[31]=c->r[3]|c->r[3]; // 800F21E8
  c->r[3]=R32(c->r[3]+0x00000404u); // 800F21EC
  c->lr=0x800F21F4u; f_802EA4B0(c); // 800F21F0
  {uint32_t ea=c->r[31]+0x00000654u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F21F4
  c->f[31]=c->f[1]; // 800F21F8
  c->r[3]=c->r[31]+0x000001B8u; // 800F21FC
  c->r[4]=c->r[1]+0x00000030u; // 800F2200
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 800F2204
  c->lr=0x800F220Cu; f_80382F2C(c); // 800F2208
  c->f[1]=c->f[30]; // 800F220C
  c->r[3]=c->r[1]+0x00000008u; // 800F2210
  c->r[4]=c->r[31]+0x00000648u; // 800F2214
  c->lr=0x800F221Cu; f_8005ED34(c); // 800F2218
  c->r[4]=c->r[31]|c->r[31]; // 800F221C
  c->r[3]=c->r[1]+0x00000014u; // 800F2220
  c->lr=0x800F2228u; f_80061A48(c); // 800F2224
  c->r[3]=c->r[1]+0x00000020u; // 800F2228
  c->r[4]=c->r[1]+0x00000014u; // 800F222C
  c->r[5]=c->r[1]+0x00000008u; // 800F2230
  c->lr=0x800F2238u; f_80073ACC(c); // 800F2234
  c->r[3]=c->r[1]+0x00000030u; // 800F2238
  c->r[4]=c->r[1]+0x00000020u; // 800F223C
  c->lr=0x800F2244u; f_8005CDC8(c); // 800F2240
  c->r[3]=c->r[31]+0x000000FCu; // 800F2244
  c->r[4]=c->r[1]+0x00000030u; // 800F2248
  c->lr=0x800F2250u; f_80078164(c); // 800F224C
  c->r[3]=R32(c->r[31]+0x00000420u); // 800F2250
  c->lr=0x800F2258u; f_800C3B34(c); // 800F2254
  {uint32_t ea=c->r[31]+0x00000654u; WF32(ea,c->f[31]);} // 800F2258
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800F225C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800F2260
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800F2264
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800F2268
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800F226C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F2270
  c->lr=c->r[0]; // 800F2274
  c->r[1]=c->r[1]+0x00000090u; // 800F2278
  return; // 800F227C
}

// fn_800F2280
void f_800F2280(Ctx* __restrict c) {
  trace_call(0x800F2280u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2280
  c->r[0]=c->lr; // 800F2284
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2288
  c->r[11]=c->r[1]+0x00000030u; // 800F228C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800F2290
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800F2294
  c->lr=0x800F229Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2298
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F229C
  c->r[29]=c->r[3]|c->r[3]; // 800F22A0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 800F22A4
  c->f[31]=c->f[1]; // 800F22A8
  c->r[31]=c->r[5]|c->r[5]; // 800F22AC
  c->r[30]=c->r[4]|c->r[4]; // 800F22B0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 800F22B4
  c->r[4]=c->r[31]|c->r[31]; // 800F22B8
  c->r[3]=c->r[3]+0x0000063Cu; // 800F22BC
  c->lr=0x800F22C4u; f_8005DC84(c); // 800F22C0
  c->r[4]=c->r[31]|c->r[31]; // 800F22C4
  c->r[5]=c->r[30]|c->r[30]; // 800F22C8
  c->r[3]=c->r[1]+0x00000008u; // 800F22CC
  c->lr=0x800F22D4u; f_8005FC60(c); // 800F22D0
  c->r[3]=c->r[29]+0x00000648u; // 800F22D4
  c->r[4]=c->r[1]+0x00000008u; // 800F22D8
  c->lr=0x800F22E0u; f_8005DC84(c); // 800F22DC
  c->r[3]=c->r[29]+0x00000648u; // 800F22E0
  c->r[5]=0u+0x806A0000u; // 800F22E4
  c->r[4]=c->r[3]|c->r[3]; // 800F22E8
  c->r[5]=c->r[5]+0x00000AA8u; // 800F22EC
  c->lr=0x800F22F4u; f_8030E0BC(c); // 800F22F0
  {uint32_t ea=c->r[29]+0x00000658u; WF32(ea,c->f[31]);} // 800F22F4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800F22F8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800F22FC
  c->r[11]=c->r[1]+0x00000030u; // 800F2300
  c->lr=0x800F2308u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2304
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F2308
  c->lr=c->r[0]; // 800F230C
  c->r[1]=c->r[1]+0x00000040u; // 800F2310
  return; // 800F2314
}

// fn_800F2318
void f_800F2318(Ctx* __restrict c) {
  trace_call(0x800F2318u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2318
  c->r[0]=c->lr; // 800F231C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F2320
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800F2324
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800F2328
  c->f[31]=c->f[1]; // 800F232C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F2330
  W32(c->r[1]+0x00000078u,c->r[30]); // 800F2334
  c->r[30]=c->r[3]|c->r[3]; // 800F2338
  c->r[4]=c->r[30]|c->r[30]; // 800F233C
  c->r[3]=c->r[1]+0x00000038u; // 800F2340
  c->lr=0x800F2348u; f_80061A48(c); // 800F2344
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2348
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F234C
  fcmp(c,0,c->f[0],c->f[31]); // 800F2350
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F2354
  if (crb(c,2)) { goto L_800F2370; } // 800F2358
  c->r[3]=c->r[30]+0x0000063Cu; // 800F235C
  c->lr=0x800F2364u; f_80084FAC(c); // 800F2360
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2364
  fcmp(c,0,c->f[1],c->f[0]); // 800F2368
  if (crb(c,2)) { goto L_800F23A0; } // 800F236C
L_800F2370:;
  c->r[3]=c->r[1]+0x00000014u; // 800F2370
  c->r[4]=c->r[30]+0x0000063Cu; // 800F2374
  c->r[5]=c->r[1]+0x00000038u; // 800F2378
  c->lr=0x800F2380u; f_8005FC60(c); // 800F237C
  c->r[3]=c->r[1]+0x00000014u; // 800F2380
  c->lr=0x800F2388u; f_80060DC8(c); // 800F2384
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800F2388
  fcmp(c,0,c->f[1],c->f[0]); // 800F238C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800F2390
  if (!crb(c,2)) { goto L_800F23A0; } // 800F2394
  c->r[3]=0u+0x00000001u; // 800F2398
  goto L_800F2450; // 800F239C
L_800F23A0:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800F23A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F23A4
  if (!crb(c,2)) { goto L_800F23E4; } // 800F23A8
  c->r[31]=0u+0x80730000u; // 800F23AC
  c->r[3]=c->r[31]+0x00006D10u; // 800F23B0
  c->lr=0x800F23B8u; f_802D8298(c); // 800F23B4
  c->r[3]=0u+0x806D0000u; // 800F23B8
  c->r[4]=0u+0x80050000u; // 800F23BC
  c->r[3]=c->r[3]+0xFFFFC220u; // 800F23C0
  c->r[5]=0u+0x80750000u; // 800F23C4
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800F23C8
  c->r[3]=c->r[31]+0x00006D10u; // 800F23CC
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800F23D0
  c->r[5]=c->r[5]+0x00003B64u; // 800F23D4
  c->lr=0x800F23DCu; f_803A92B8(c); // 800F23D8
  c->r[0]=0u+0x00000001u; // 800F23DC
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800F23E0
L_800F23E4:;
  c->r[4]=0u+0x80730000u; // 800F23E4
  {uint32_t ea=c->r[30]+0x00000658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F23E8
  c->r[4]=c->r[4]+0x00006D10u; // 800F23EC
  c->r[3]=c->r[1]+0x0000002Cu; // 800F23F0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F23F4
  c->r[4]=c->r[30]+0x00000648u; // 800F23F8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800F23FC
  c->lr=0x800F2404u; f_8005ED34(c); // 800F2400
  c->r[4]=c->r[30]|c->r[30]; // 800F2404
  c->r[3]=c->r[1]+0x00000008u; // 800F2408
  c->lr=0x800F2410u; f_80061A48(c); // 800F240C
  c->r[3]=c->r[1]+0x00000020u; // 800F2410
  c->r[4]=c->r[1]+0x00000008u; // 800F2414
  c->r[5]=c->r[1]+0x0000002Cu; // 800F2418
  c->lr=0x800F2420u; f_80073ACC(c); // 800F241C
  c->r[3]=c->r[30]+0x000001B8u; // 800F2420
  c->r[4]=c->r[1]+0x00000048u; // 800F2424
  c->lr=0x800F242Cu; f_80382F2C(c); // 800F2428
  c->r[3]=c->r[1]+0x00000048u; // 800F242C
  c->r[4]=c->r[1]+0x00000020u; // 800F2430
  c->lr=0x800F2438u; f_8005CDC8(c); // 800F2434
  c->r[3]=c->r[30]+0x000000FCu; // 800F2438
  c->r[4]=c->r[1]+0x00000048u; // 800F243C
  c->lr=0x800F2444u; f_80078164(c); // 800F2440
  c->r[3]=R32(c->r[30]+0x00000420u); // 800F2444
  c->lr=0x800F244Cu; f_800C3B34(c); // 800F2448
  c->r[3]=0u+0x00000000u; // 800F244C
L_800F2450:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F2450
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800F2454
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800F2458
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F245C
  c->r[30]=R32(c->r[1]+0x00000078u); // 800F2460
  c->lr=c->r[0]; // 800F2464
  c->r[1]=c->r[1]+0x00000090u; // 800F2468
  return; // 800F246C
}

// fn_800F2470
void f_800F2470(Ctx* __restrict c) {
  trace_call(0x800F2470u);
  return; // 800F2470
}

// fn_800F2474
void f_800F2474(Ctx* __restrict c) {
  trace_call(0x800F2474u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800F2474
  f_800EF7CC(c); return; // 800F2478
}

// fn_800F247C
void f_800F247C(Ctx* __restrict c) {
  trace_call(0x800F247Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F247C
  c->r[0]=c->lr; // 800F2480
  c->r[12]=0u+0x806D0000u; // 800F2484
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F248C
  c->r[0]=0u+0x00000000u; // 800F2490
  c->r[12]=c->r[12]+0xFFFFE140u; // 800F2494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2498
  c->r[31]=c->r[3]|c->r[3]; // 800F249C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F24A0
  c->r[30]=c->r[4]|c->r[4]; // 800F24A4
  W32(c->r[3]+0x00000000u,c->r[3]); // 800F24A8
  W32(c->r[3]+0x00000004u,c->r[3]); // 800F24AC
  W32(c->r[3]+0x00000008u,c->r[3]); // 800F24B0
  W32(c->r[3]+0x00000020u,c->r[12]); // 800F24B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F24B8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F24BC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800F24C0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800F24C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F24C8
  c->ctr=c->r[12]; // 800F24CC
  if (true) { c->lr=0x800F24D4u; dispatch(c,c->ctr); } // 800F24D0
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F24D4
  c->r[4]=0u+0x806E0000u; // 800F24D8
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800F24DC
  c->r[4]=c->r[4]+0xFFFF85A8u; // 800F24E0
  c->r[3]=c->r[31]|c->r[31]; // 800F24E4
  W32(c->r[31]+0x00000020u,c->r[4]); // 800F24E8
  W32(c->r[31]+0x00000028u,c->r[30]); // 800F24EC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800F24F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F24F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F24F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F24FC
  c->lr=c->r[0]; // 800F2500
  c->r[1]=c->r[1]+0x00000010u; // 800F2504
  return; // 800F2508
}

// fn_800F250C
void f_800F250C(Ctx* __restrict c) {
  trace_call(0x800F250Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F250C
  c->r[0]=c->lr; // 800F2510
  cmps(c,0,(int32_t)c->r[3],0); // 800F2514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F251C
  c->r[31]=c->r[3]|c->r[3]; // 800F2520
  if (crb(c,2)) { goto L_800F2530; } // 800F2524
  c->r[4]=0u+0x00000000u; // 800F2528
  c->lr=0x800F2530u; f_8005C8DC(c); // 800F252C
L_800F2530:;
  c->r[3]=c->r[31]|c->r[31]; // 800F2530
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2534
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2538
  c->lr=c->r[0]; // 800F253C
  c->r[1]=c->r[1]+0x00000010u; // 800F2540
  return; // 800F2544
}

// fn_800F2548
void f_800F2548(Ctx* __restrict c) {
  trace_call(0x800F2548u);
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2548
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800F254C
  f_800F269C(c); return; // 800F2550
}

// fn_800F2554
void f_800F2554(Ctx* __restrict c) {
  trace_call(0x800F2554u);
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2554
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800F2558
  f_800F269C(c); return; // 800F255C
}

// fn_800F2560
void f_800F2560(Ctx* __restrict c) {
  trace_call(0x800F2560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2560
  c->r[0]=c->lr; // 800F2564
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F256C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2570
  c->r[30]=c->r[3]|c->r[3]; // 800F2574
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2578
  {uint32_t ea=c->r[13]+0xFFFF8538u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F257C
  fcmp(c,0,c->f[1],c->f[0]); // 800F2580
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800F2584
  if (!crb(c,2)) { goto L_800F2594; } // 800F2588
  c->r[3]=0u+0x00000001u; // 800F258C
  goto L_800F2610; // 800F2590
L_800F2594:;
  c->lr=0x800F2598u; f_800F2704(c); // 800F2594
  {uint32_t ea=c->r[13]+0xFFFF853Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2598
  fcmp(c,0,c->f[1],c->f[0]); // 800F259C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800F25A0
  if (!crb(c,2)) { goto L_800F25B0; } // 800F25A4
  c->r[3]=0u+0x00000001u; // 800F25A8
  goto L_800F2610; // 800F25AC
L_800F25B0:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800F25B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F25B4
  if (!crb(c,2)) { goto L_800F25F4; } // 800F25B8
  c->r[31]=0u+0x80730000u; // 800F25BC
  c->r[3]=c->r[31]+0x00006D10u; // 800F25C0
  c->lr=0x800F25C8u; f_802D8298(c); // 800F25C4
  c->r[3]=0u+0x806D0000u; // 800F25C8
  c->r[4]=0u+0x80050000u; // 800F25CC
  c->r[3]=c->r[3]+0xFFFFC220u; // 800F25D0
  c->r[5]=0u+0x80750000u; // 800F25D4
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800F25D8
  c->r[3]=c->r[31]+0x00006D10u; // 800F25DC
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800F25E0
  c->r[5]=c->r[5]+0x00003B70u; // 800F25E4
  c->lr=0x800F25ECu; f_803A92B8(c); // 800F25E8
  c->r[0]=0u+0x00000001u; // 800F25EC
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800F25F0
L_800F25F4:;
  c->r[4]=0u+0x80730000u; // 800F25F4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F25F8
  c->r[4]=c->r[4]+0x00006D10u; // 800F25FC
  c->r[3]=0u+0x00000000u; // 800F2600
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2604
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800F2608
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 800F260C
L_800F2610:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2614
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2618
  c->lr=c->r[0]; // 800F261C
  c->r[1]=c->r[1]+0x00000010u; // 800F2620
  return; // 800F2624
}

// fn_800F2628
void f_800F2628(Ctx* __restrict c) {
  trace_call(0x800F2628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2628
  c->r[0]=c->lr; // 800F262C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2630
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800F2634
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800F2638
  c->f[31]=c->f[1]; // 800F263C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2640
  c->r[31]=c->r[3]|c->r[3]; // 800F2644
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F2648
  c->r[12]=R32(c->r[12]+0x00000020u); // 800F264C
  c->ctr=c->r[12]; // 800F2650
  if (true) { c->lr=0x800F2658u; dispatch(c,c->ctr); } // 800F2654
  c->r[4]=c->r[31]|c->r[31]; // 800F2658
  c->r[5]=0u+0x00000001u; // 800F265C
  c->lr=0x800F2664u; f_8005E5C4(c); // 800F2660
  c->r[3]=c->r[31]|c->r[31]; // 800F2664
  c->lr=0x800F266Cu; f_800F2704(c); // 800F2668
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 800F266C
  c->r[3]=c->r[31]|c->r[31]; // 800F2670
  c->lr=0x800F2678u; f_800F269C(c); // 800F2674
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2678
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800F267C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800F2680
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800F2684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2688
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F268C
  c->lr=c->r[0]; // 800F2690
  c->r[1]=c->r[1]+0x00000020u; // 800F2694
  return; // 800F2698
}

// fn_800F269C
void f_800F269C(Ctx* __restrict c) {
  trace_call(0x800F269Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F269C
  c->r[0]=c->lr; // 800F26A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F26A4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800F26A8
  c->f[31]=c->f[1]; // 800F26AC
  W32(c->r[1]+0x00000014u,c->r[31]); // 800F26B0
  c->r[31]=c->r[3]|c->r[3]; // 800F26B4
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F26B8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800F26BC
  c->ctr=c->r[12]; // 800F26C0
  if (true) { c->lr=0x800F26C8u; dispatch(c,c->ctr); } // 800F26C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F26C8
  if (crb(c,2)) { goto L_800F26EC; } // 800F26CC
  c->r[12]=R32(c->r[31]+0x00000020u); // 800F26D0
  c->r[3]=c->r[31]|c->r[31]; // 800F26D4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800F26D8
  c->ctr=c->r[12]; // 800F26DC
  if (true) { c->lr=0x800F26E4u; dispatch(c,c->ctr); } // 800F26E0
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800F26E4
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[31]);} // 800F26E8
L_800F26EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F26EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800F26F0
  c->r[31]=R32(c->r[1]+0x00000014u); // 800F26F4
  c->lr=c->r[0]; // 800F26F8
  c->r[1]=c->r[1]+0x00000020u; // 800F26FC
  return; // 800F2700
}

// fn_800F2704
void f_800F2704(Ctx* __restrict c) {
  trace_call(0x800F2704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2704
  c->r[0]=c->lr; // 800F2708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F270C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2710
  c->r[31]=c->r[3]|c->r[3]; // 800F2714
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F2718
  c->r[12]=R32(c->r[12]+0x00000028u); // 800F271C
  c->ctr=c->r[12]; // 800F2720
  if (true) { c->lr=0x800F2728u; dispatch(c,c->ctr); } // 800F2724
  cmps(c,0,(int32_t)c->r[3],0); // 800F2728
  if (!crb(c,2)) { goto L_800F2738; } // 800F272C
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2730
  goto L_800F2754; // 800F2734
L_800F2738:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 800F2738
  c->r[3]=c->r[31]|c->r[31]; // 800F273C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800F2740
  c->ctr=c->r[12]; // 800F2744
  if (true) { c->lr=0x800F274Cu; dispatch(c,c->ctr); } // 800F2748
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 800F274C
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2750
L_800F2754:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2758
  c->lr=c->r[0]; // 800F275C
  c->r[1]=c->r[1]+0x00000010u; // 800F2760
  return; // 800F2764
}

// fn_800F2768
void f_800F2768(Ctx* __restrict c) {
  trace_call(0x800F2768u);
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F2768
  c->r[12]=R32(c->r[12]+0x00000020u); // 800F276C
  c->ctr=c->r[12]; // 800F2770
  if (true) { dispatch(c,c->ctr); return; } // 800F2774
}

// fn_800F2778
void f_800F2778(Ctx* __restrict c) {
  trace_call(0x800F2778u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 800F2778
  return; // 800F277C
}

// fn_800F2780
void f_800F2780(Ctx* __restrict c) {
  trace_call(0x800F2780u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 800F2780
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800F2784
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800F2788
  return; // 800F278C
}

// fn_800F2790
void f_800F2790(Ctx* __restrict c) {
  trace_call(0x800F2790u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F2790
  if (!crb(c,1)) { goto L_800F279C; } // 800F2794
  c->r[4]=0u+0x00000000u; // 800F2798
L_800F279C:;
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F279C
  fcmp(c,0,c->f[1],c->f[0]); // 800F27A0
  if (crb(c,0)) { goto L_800F27B4; } // 800F27A4
  {uint32_t ea=c->r[2]+0xFFFFA774u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F27A8
  fcmp(c,0,c->f[1],c->f[0]); // 800F27AC
  if (!crb(c,1)) { goto L_800F27B8; } // 800F27B0
L_800F27B4:;
  {uint32_t ea=c->r[2]+0xFFFFA774u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F27B4
L_800F27B8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F27B8
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800F27BC
  return; // 800F27C0
}

// fn_800F27C4
void f_800F27C4(Ctx* __restrict c) {
  trace_call(0x800F27C4u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F27C4
  if (!crb(c,1)) { goto L_800F27D0; } // 800F27C8
  c->r[4]=0u+0x00000000u; // 800F27CC
L_800F27D0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F27D0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800F27D4
  return; // 800F27D8
}

// fn_800F27DC
void f_800F27DC(Ctx* __restrict c) {
  trace_call(0x800F27DCu);
  cmpu(c,0,c->r[4],0x00000001u); // 800F27DC
  if (!crb(c,1)) { goto L_800F27E8; } // 800F27E0
  c->r[4]=0u+0x00000000u; // 800F27E4
L_800F27E8:;
  cmpu(c,0,c->r[5],0x00000001u); // 800F27E8
  if (!crb(c,1)) { goto L_800F27F4; } // 800F27EC
  c->r[5]=0u+0x00000000u; // 800F27F0
L_800F27F4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F27F4
  c->r[3]=c->r[3]+c->r[0]; // 800F27F8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F27FC
  return; // 800F2800
}

// fn_800F2804
void f_800F2804(Ctx* __restrict c) {
  trace_call(0x800F2804u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F2804
  if (!crb(c,1)) { goto L_800F2810; } // 800F2808
  c->r[4]=0u+0x00000000u; // 800F280C
L_800F2810:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F2810
  c->r[3]=c->r[3]+c->r[0]; // 800F2814
  c->r[3]=R32(c->r[3]+0x00000008u); // 800F2818
  return; // 800F281C
}

// fn_800F2820
void f_800F2820(Ctx* __restrict c) {
  trace_call(0x800F2820u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F2820
  if (!crb(c,1)) { goto L_800F282C; } // 800F2824
  c->r[4]=0u+0x00000000u; // 800F2828
L_800F282C:;
  cmpu(c,0,c->r[5],0x0000000Bu); // 800F282C
  if (!crb(c,1)) { goto L_800F2838; } // 800F2830
  c->r[5]=0u+0x00000000u; // 800F2834
L_800F2838:;
  cmps(c,0,(int32_t)c->r[5],9); // 800F2838
  if (crb(c,2)) { goto L_800F28A0; } // 800F283C
  if (!crb(c,0)) { goto L_800F2864; } // 800F2840
  cmps(c,0,(int32_t)c->r[5],4); // 800F2844
  if (!crb(c,0)) { goto L_800F2858; } // 800F2848
  cmps(c,0,(int32_t)c->r[5],0); // 800F284C
  if (!crb(c,0)) { goto L_800F2870; } // 800F2850
  goto L_800F28BC; // 800F2854
L_800F2858:;
  cmps(c,0,(int32_t)c->r[5],7); // 800F2858
  if (!crb(c,0)) { goto L_800F2890; } // 800F285C
  goto L_800F2880; // 800F2860
L_800F2864:;
  cmps(c,0,(int32_t)c->r[5],12); // 800F2864
  if (!crb(c,0)) { goto L_800F28BC; } // 800F2868
  goto L_800F28B0; // 800F286C
L_800F2870:;
  cmps(c,0,(int32_t)c->r[6],4); // 800F2870
  if (crb(c,0)) { goto L_800F28BC; } // 800F2874
  c->r[6]=0u+0xFFFFFFFFu; // 800F2878
  goto L_800F28BC; // 800F287C
L_800F2880:;
  cmps(c,0,(int32_t)c->r[6],5); // 800F2880
  if (crb(c,0)) { goto L_800F28BC; } // 800F2884
  c->r[6]=0u+0xFFFFFFFFu; // 800F2888
  goto L_800F28BC; // 800F288C
L_800F2890:;
  cmps(c,0,(int32_t)c->r[6],2); // 800F2890
  if (crb(c,0)) { goto L_800F28BC; } // 800F2894
  c->r[6]=0u+0xFFFFFFFFu; // 800F2898
  goto L_800F28BC; // 800F289C
L_800F28A0:;
  cmps(c,0,(int32_t)c->r[6],3); // 800F28A0
  if (crb(c,0)) { goto L_800F28BC; } // 800F28A4
  c->r[6]=0u+0xFFFFFFFFu; // 800F28A8
  goto L_800F28BC; // 800F28AC
L_800F28B0:;
  cmps(c,0,(int32_t)c->r[6],3); // 800F28B0
  if (crb(c,0)) { goto L_800F28BC; } // 800F28B4
  c->r[6]=0u+0xFFFFFFFFu; // 800F28B8
L_800F28BC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F28BC
  c->r[3]=c->r[3]+c->r[0]; // 800F28C0
  W32(c->r[3]+0x00000010u,c->r[5]); // 800F28C4
  W32(c->r[3]+0x00000018u,c->r[6]); // 800F28C8
  return; // 800F28CC
}

// fn_800F28D0
void f_800F28D0(Ctx* __restrict c) {
  trace_call(0x800F28D0u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F28D0
  if (!crb(c,1)) { goto L_800F28DC; } // 800F28D4
  c->r[4]=0u+0x00000000u; // 800F28D8
L_800F28DC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F28DC
  c->r[3]=c->r[3]+c->r[0]; // 800F28E0
  c->r[3]=R32(c->r[3]+0x00000010u); // 800F28E4
  return; // 800F28E8
}

// fn_800F28EC
void f_800F28EC(Ctx* __restrict c) {
  trace_call(0x800F28ECu);
  cmpu(c,0,c->r[4],0x00000001u); // 800F28EC
  if (!crb(c,1)) { goto L_800F28F8; } // 800F28F0
  c->r[4]=0u+0x00000000u; // 800F28F4
L_800F28F8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F28F8
  c->r[3]=c->r[3]+c->r[0]; // 800F28FC
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F2900
  return; // 800F2904
}

// fn_800F2908
void f_800F2908(Ctx* __restrict c) {
  trace_call(0x800F2908u);
  cmpu(c,0,c->r[4],0x00000003u); // 800F2908
  if (!crb(c,1)) { goto L_800F2914; } // 800F290C
  c->r[4]=0u+0x00000000u; // 800F2910
L_800F2914:;
  cmpu(c,0,c->r[5],0x00000004u); // 800F2914
  if (!crb(c,1)) { goto L_800F2920; } // 800F2918
  c->r[5]=0u+0x00000000u; // 800F291C
L_800F2920:;
  cmps(c,0,(int32_t)c->r[5],3); // 800F2920
  if (crb(c,2)) return; // 800F2924
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F2928
  c->r[3]=c->r[3]+c->r[0]; // 800F292C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800F2930
  return; // 800F2934
}

// fn_800F2938
void f_800F2938(Ctx* __restrict c) {
  trace_call(0x800F2938u);
  cmpu(c,0,c->r[4],0x00000003u); // 800F2938
  if (!crb(c,1)) { goto L_800F2944; } // 800F293C
  c->r[4]=0u+0x00000000u; // 800F2940
L_800F2944:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F2944
  c->r[3]=c->r[3]+c->r[0]; // 800F2948
  c->r[3]=R32(c->r[3]+0x00000020u); // 800F294C
  return; // 800F2950
}

// fn_800F2954
void f_800F2954(Ctx* __restrict c) {
  trace_call(0x800F2954u);
  return; // 800F2954
}

// fn_800F2958
void f_800F2958(Ctx* __restrict c) {
  trace_call(0x800F2958u);
  c->r[3]=0u+0xFFFFFFFFu; // 800F2958
  return; // 800F295C
}

// fn_800F2960
void f_800F2960(Ctx* __restrict c) {
  trace_call(0x800F2960u);
  cmpu(c,0,c->r[4],0x00000001u); // 800F2960
  if (!crb(c,1)) { goto L_800F296C; } // 800F2964
  c->r[4]=0u+0x00000000u; // 800F2968
L_800F296C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F296C
  c->r[3]=c->r[3]+c->r[0]; // 800F2970
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800F2974
  return; // 800F2978
}

// fn_800F297C
void f_800F297C(Ctx* __restrict c) {
  trace_call(0x800F297Cu);
  cmpu(c,0,c->r[4],0x00000001u); // 800F297C
  if (!crb(c,1)) { goto L_800F2988; } // 800F2980
  c->r[4]=0u+0x00000000u; // 800F2984
L_800F2988:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F2988
  c->r[3]=c->r[3]+c->r[0]; // 800F298C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2990
  return; // 800F2994
}

// fn_800F2998
void f_800F2998(Ctx* __restrict c) {
  trace_call(0x800F2998u);
  W32(c->r[3]+0x00000058u,c->r[4]); // 800F2998
  return; // 800F299C
}

// fn_800F29A0
void f_800F29A0(Ctx* __restrict c) {
  trace_call(0x800F29A0u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 800F29A0
  return; // 800F29A4
}

// fn_800F29A8
void f_800F29A8(Ctx* __restrict c) {
  trace_call(0x800F29A8u);
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29A8
  fcmp(c,0,c->f[1],c->f[0]); // 800F29AC
  if (!crb(c,0)) { goto L_800F29B8; } // 800F29B0
  c->f[1]=c->f[0]; // 800F29B4
L_800F29B8:;
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800F29B8
  return; // 800F29BC
}

// fn_800F29C0
void f_800F29C0(Ctx* __restrict c) {
  trace_call(0x800F29C0u);
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F29C0
  return; // 800F29C4
}

// fn_800F29C8
void f_800F29C8(Ctx* __restrict c) {
  trace_call(0x800F29C8u);
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F29C8
  {uint32_t ea=c->r[2]+0xFFFFA778u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F29CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800F29D0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800F29D4
  fcmp(c,0,c->f[1],c->f[0]); // 800F29D8
  if (!crb(c,1)) return; // 800F29DC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800F29E0
  return; // 800F29E4
}

// fn_800F29E8
void f_800F29E8(Ctx* __restrict c) {
  trace_call(0x800F29E8u);
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F29E8
  return; // 800F29EC
}

// fn_800F29F0
void f_800F29F0(Ctx* __restrict c) {
  trace_call(0x800F29F0u);
  c->r[5]=R32(c->r[3]+0x00000064u); // 800F29F0
  c->r[4]=0u+0x05F60000u; // 800F29F4
  c->r[0]=c->r[4]+0xFFFFE0FFu; // 800F29F8
  c->r[4]=c->r[5]+0x00000001u; // 800F29FC
  W32(c->r[3]+0x00000064u,c->r[4]); // 800F2A00
  cmpu(c,0,c->r[4],c->r[0]); // 800F2A04
  if (!crb(c,1)) return; // 800F2A08
  W32(c->r[3]+0x00000064u,c->r[0]); // 800F2A0C
  return; // 800F2A10
}

// fn_800F2A14
void f_800F2A14(Ctx* __restrict c) {
  trace_call(0x800F2A14u);
  c->r[3]=R32(c->r[3]+0x00000064u); // 800F2A14
  return; // 800F2A18
}

// fn_800F2A1C
void f_800F2A1C(Ctx* __restrict c) {
  trace_call(0x800F2A1Cu);
  c->r[0]=0u+0x00000002u; // 800F2A1C
  {uint32_t ea=c->r[2]+0xFFFFA774u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A20
  c->r[6]=0u+0x00000000u; // 800F2A24
  c->r[4]=0u+0x00000000u; // 800F2A28
  c->ctr=c->r[0]; // 800F2A2C
L_800F2A30:;
  {uint32_t ea=c->r[3]+c->r[4]; WF32(ea,c->f[0]);} // 800F2A30
  c->r[5]=c->r[3]+c->r[4]; // 800F2A34
  c->r[4]=c->r[4]+0x00000004u; // 800F2A38
  W32(c->r[5]+0x00000008u,c->r[6]); // 800F2A3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2A30; } // 800F2A40
  c->r[0]=0u+0x00000002u; // 800F2A44
  {uint32_t ea=c->r[2]+0xFFFFA774u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A48
  c->r[4]=0u+0x00000000u; // 800F2A4C
  c->ctr=c->r[0]; // 800F2A50
L_800F2A54:;
  c->r[5]=c->r[3]+c->r[4]; // 800F2A54
  c->r[4]=c->r[4]+0x00000004u; // 800F2A58
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[0]);} // 800F2A5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2A54; } // 800F2A60
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A64
  c->r[0]=0u+0x00000000u; // 800F2A68
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800F2A6C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800F2A70
  W32(c->r[3]+0x00000064u,c->r[0]); // 800F2A74
  return; // 800F2A78
}

// fn_800F2A7C
void f_800F2A7C(Ctx* __restrict c) {
  trace_call(0x800F2A7Cu);
  cmpu(c,0,c->r[4],0x00000001u); // 800F2A7C
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2A80
  if (!crb(c,1)) { goto L_800F2A8C; } // 800F2A84
  c->r[4]=0u+0x00000000u; // 800F2A88
L_800F2A8C:;
  cmpu(c,0,c->r[5],0x00000001u); // 800F2A8C
  if (!crb(c,1)) { goto L_800F2A98; } // 800F2A90
  c->r[5]=0u+0x00000000u; // 800F2A94
L_800F2A98:;
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F2A98
  c->r[0]=0u+0x00000004u; // 800F2A9C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800F2AA0
  c->r[8]=c->r[1]+0x00000034u; // 800F2AA4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800F2AA8
  c->r[7]=c->r[3]+0x0000002Cu; // 800F2AAC
  W32(c->r[1]+0x00000008u,c->r[9]); // 800F2AB0
  c->r[9]=R32(c->r[3]+0x00000008u); // 800F2AB4
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800F2AB8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F2ABC
  W32(c->r[1]+0x00000010u,c->r[9]); // 800F2AC0
  c->r[9]=R32(c->r[3]+0x00000010u); // 800F2AC4
  c->r[6]=R32(c->r[3]+0x00000014u); // 800F2AC8
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800F2ACC
  W32(c->r[1]+0x00000018u,c->r[9]); // 800F2AD0
  c->r[9]=R32(c->r[3]+0x00000018u); // 800F2AD4
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 800F2AD8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800F2ADC
  W32(c->r[1]+0x00000020u,c->r[9]); // 800F2AE0
  c->r[9]=R32(c->r[3]+0x00000020u); // 800F2AE4
  c->r[6]=R32(c->r[3]+0x00000024u); // 800F2AE8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800F2AEC
  W32(c->r[1]+0x00000028u,c->r[9]); // 800F2AF0
  c->r[9]=R32(c->r[3]+0x00000028u); // 800F2AF4
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 800F2AF8
  W32(c->r[1]+0x00000034u,c->r[6]); // 800F2AFC
  W32(c->r[1]+0x00000030u,c->r[9]); // 800F2B00
  c->ctr=c->r[0]; // 800F2B04
L_800F2B08:;
  c->r[6]=R32(c->r[7]+0x00000004u); // 800F2B08
  {uint32_t ea=c->r[7]+0x00000008u; c->r[0]=R32(ea); c->r[7]=ea;} // 800F2B0C
  W32(c->r[8]+0x00000004u,c->r[6]); // 800F2B10
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[0]); c->r[8]=ea;} // 800F2B14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2B08; } // 800F2B18
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800F2B1C
  c->r[6]=R32(c->r[3]+0x00000050u); // 800F2B20
  c->r[4]=R32(c->r[3]+0x00000054u); // 800F2B24
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F2B28
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800F2B2C
  c->r[10]=c->r[1]+0x00000008u; // 800F2B30
  c->r[8]=c->r[1]+0x00000010u; // 800F2B34
  c->r[11]=c->r[3]+c->r[0]; // 800F2B38
  W32(c->r[1]+0x00000058u,c->r[6]); // 800F2B3C
  c->r[7]=c->r[1]+0x00000018u; // 800F2B40
  c->r[6]=c->r[1]+0x00000020u; // 800F2B44
  c->r[4]=0u+0x00000004u; // 800F2B48
  c->r[5]=R32(c->r[3]+0x00000058u); // 800F2B4C
  W32(c->r[1]+0x00000060u,c->r[5]); // 800F2B50
  c->r[5]=0u+0x00000000u; // 800F2B54
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2B58
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800F2B5C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2B60
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800F2B64
  c->r[9]=R32(c->r[3]+0x00000064u); // 800F2B68
  W32(c->r[1]+0x0000006Cu,c->r[9]); // 800F2B6C
  {uint32_t ea=c->r[10]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea); c->r[10]=ea;} // 800F2B70
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800F2B74
  c->r[8]=R32(c->r[8]+c->r[12]); // 800F2B78
  W32(c->r[11]+0x00000008u,c->r[8]); // 800F2B7C
  c->r[7]=R32(c->r[7]+c->r[12]); // 800F2B80
  W32(c->r[11]+0x00000010u,c->r[7]); // 800F2B84
  c->r[6]=R32(c->r[6]+c->r[12]); // 800F2B88
  W32(c->r[11]+0x00000018u,c->r[6]); // 800F2B8C
  c->ctr=c->r[4]; // 800F2B90
L_800F2B94:;
  c->r[6]=c->r[10]+c->r[5]; // 800F2B94
  c->r[4]=c->r[11]+c->r[5]; // 800F2B98
  c->r[6]=R32(c->r[6]+0x00000030u); // 800F2B9C
  c->r[5]=c->r[5]+0x00000008u; // 800F2BA0
  W32(c->r[4]+0x00000030u,c->r[6]); // 800F2BA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2B94; } // 800F2BA8
  c->r[8]=c->r[1]+0x00000008u; // 800F2BAC
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[8]=ea;} // 800F2BB0
  {uint32_t ea=c->r[3]+c->r[12]; WF32(ea,c->f[0]);} // 800F2BB4
  c->r[4]=c->r[1]+0x00000010u; // 800F2BB8
  c->r[9]=c->r[3]+c->r[12]; // 800F2BBC
  c->r[6]=c->r[1]+0x00000018u; // 800F2BC0
  c->r[7]=R32(c->r[4]+c->r[0]); // 800F2BC4
  c->r[5]=c->r[1]+0x00000020u; // 800F2BC8
  W32(c->r[9]+0x00000008u,c->r[7]); // 800F2BCC
  c->r[3]=0u+0x00000004u; // 800F2BD0
  c->r[4]=0u+0x00000000u; // 800F2BD4
  c->r[6]=R32(c->r[6]+c->r[0]); // 800F2BD8
  W32(c->r[9]+0x00000010u,c->r[6]); // 800F2BDC
  c->r[0]=R32(c->r[5]+c->r[0]); // 800F2BE0
  W32(c->r[9]+0x00000018u,c->r[0]); // 800F2BE4
  c->ctr=c->r[3]; // 800F2BE8
L_800F2BEC:;
  c->r[5]=c->r[8]+c->r[4]; // 800F2BEC
  c->r[3]=c->r[9]+c->r[4]; // 800F2BF0
  c->r[0]=R32(c->r[5]+0x00000030u); // 800F2BF4
  c->r[4]=c->r[4]+0x00000008u; // 800F2BF8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F2BFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2BEC; } // 800F2C00
  c->r[1]=c->r[1]+0x00000070u; // 800F2C04
  return; // 800F2C08
}

// fn_800F2C0C
void f_800F2C0C(Ctx* __restrict c) {
  trace_call(0x800F2C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2C0C
  c->r[0]=c->lr; // 800F2C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2C14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2C18
  c->r[31]=c->r[3]|c->r[3]; // 800F2C1C
  c->lr=0x800F2C24u; f_800F2A1C(c); // 800F2C20
  c->r[0]=0u+0x00000002u; // 800F2C24
  c->r[3]=0u+0x00000000u; // 800F2C28
  c->r[4]=0u+0xFFFFFFFFu; // 800F2C2C
  c->ctr=c->r[0]; // 800F2C30
L_800F2C34:;
  c->r[5]=c->r[31]+c->r[3]; // 800F2C34
  c->r[3]=c->r[3]+0x00000004u; // 800F2C38
  W32(c->r[5]+0x00000010u,c->r[4]); // 800F2C3C
  W32(c->r[5]+0x00000018u,c->r[4]); // 800F2C40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2C34; } // 800F2C44
  c->r[9]=0u+0x00000000u; // 800F2C48
  c->r[3]=0u+0x00000000u; // 800F2C4C
  c->r[4]=0u+0x00000000u; // 800F2C50
  c->r[7]=0u+0xFFFFFFFFu; // 800F2C54
  c->r[0]=0u+0x00000002u; // 800F2C58
L_800F2C5C:;
  c->r[5]=c->r[31]+c->r[4]; // 800F2C5C
  c->r[8]=c->r[31]+c->r[3]; // 800F2C60
  W32(c->r[5]+0x00000020u,c->r[7]); // 800F2C64
  c->r[5]=0u+0x00000000u; // 800F2C68
  c->ctr=c->r[0]; // 800F2C6C
L_800F2C70:;
  c->r[6]=c->r[8]+c->r[5]; // 800F2C70
  c->r[5]=c->r[5]+0x00000004u; // 800F2C74
  W32(c->r[6]+0x00000030u,c->r[7]); // 800F2C78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F2C70; } // 800F2C7C
  c->r[9]=c->r[9]+0x00000001u; // 800F2C80
  c->r[4]=c->r[4]+0x00000004u; // 800F2C84
  cmps(c,0,(int32_t)c->r[9],4); // 800F2C88
  c->r[3]=c->r[3]+0x00000008u; // 800F2C8C
  if (crb(c,0)) { IRQCHK(c); goto L_800F2C5C; } // 800F2C90
  c->r[0]=0u+0x00000000u; // 800F2C94
  W32(c->r[31]+0x00000058u,c->r[0]); // 800F2C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2CA0
  c->lr=c->r[0]; // 800F2CA4
  c->r[1]=c->r[1]+0x00000010u; // 800F2CA8
  return; // 800F2CAC
}

// fn_800F2CB0
void f_800F2CB0(Ctx* __restrict c) {
  trace_call(0x800F2CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2CB0
  c->r[0]=c->lr; // 800F2CB4
  c->r[5]=0u+0x80690000u; // 800F2CB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2CBC
  c->r[0]=0u+0x00000000u; // 800F2CC0
  c->r[4]=c->r[1]+0x00000008u; // 800F2CC4
  c->r[5]=c->r[5]+0xFFFFEDA0u; // 800F2CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2CCC
  c->r[31]=c->r[3]|c->r[3]; // 800F2CD0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F2CD4
  c->lr=0x800F2CDCu; f_800F3E6C(c); // 800F2CD8
  c->r[4]=0u+0x806E0000u; // 800F2CDC
  c->r[3]=c->r[31]+0x0000086Cu; // 800F2CE0
  c->r[4]=c->r[4]+0xFFFF85F0u; // 800F2CE4
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800F2CE8
  c->r[0]=c->r[4]+0x00000044u; // 800F2CEC
  W32(c->r[31]+0x00000400u,c->r[0]); // 800F2CF0
  c->lr=0x800F2CF8u; f_800864D0(c); // 800F2CF4
  c->r[3]=c->r[31]+0x00000878u; // 800F2CF8
  c->lr=0x800F2D00u; f_800864D0(c); // 800F2CFC
  c->r[3]=c->r[31]+0x000008A8u; // 800F2D00
  c->lr=0x800F2D08u; f_800F2D9C(c); // 800F2D04
  c->r[3]=c->r[31]+0x000008D8u; // 800F2D08
  c->lr=0x800F2D10u; f_800864D0(c); // 800F2D0C
  c->lr=0x800F2D14u; f_800F3DD4(c); // 800F2D10
  c->lr=0x800F2D18u; f_800F3D3C(c); // 800F2D14
  c->lr=0x800F2D1Cu; f_800F3CA4(c); // 800F2D18
  c->lr=0x800F2D20u; f_800F3C30(c); // 800F2D1C
  c->lr=0x800F2D24u; f_800F3B98(c); // 800F2D20
  c->lr=0x800F2D28u; f_800F3B24(c); // 800F2D24
  c->lr=0x800F2D2Cu; f_800F3A8C(c); // 800F2D28
  c->lr=0x800F2D30u; f_800F3A18(c); // 800F2D2C
  c->lr=0x800F2D34u; f_800F3974(c); // 800F2D30
  c->lr=0x800F2D38u; f_800F38D0(c); // 800F2D34
  c->lr=0x800F2D3Cu; f_800F3838(c); // 800F2D38
  c->lr=0x800F2D40u; f_800F37A0(c); // 800F2D3C
  c->lr=0x800F2D44u; f_800F3708(c); // 800F2D40
  c->lr=0x800F2D48u; f_800F3670(c); // 800F2D44
  c->lr=0x800F2D4Cu; f_800F35D8(c); // 800F2D48
  c->lr=0x800F2D50u; f_800F3564(c); // 800F2D4C
  c->lr=0x800F2D54u; f_800F34F0(c); // 800F2D50
  c->lr=0x800F2D58u; f_800F3458(c); // 800F2D54
  c->lr=0x800F2D5Cu; f_800F33E4(c); // 800F2D58
  c->lr=0x800F2D60u; f_800F334C(c); // 800F2D5C
  c->lr=0x800F2D64u; f_800F32B4(c); // 800F2D60
  c->lr=0x800F2D68u; f_800F321C(c); // 800F2D64
  c->lr=0x800F2D6Cu; f_800F3184(c); // 800F2D68
  c->lr=0x800F2D70u; f_800F30E0(c); // 800F2D6C
  c->lr=0x800F2D74u; f_800F303C(c); // 800F2D70
  c->lr=0x800F2D78u; f_800F2F98(c); // 800F2D74
  c->lr=0x800F2D7Cu; f_800F2F00(c); // 800F2D78
  c->lr=0x800F2D80u; f_800F2E68(c); // 800F2D7C
  c->lr=0x800F2D84u; f_800F2DA0(c); // 800F2D80
  c->r[3]=c->r[31]|c->r[31]; // 800F2D84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2D88
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2D8C
  c->lr=c->r[0]; // 800F2D90
  c->r[1]=c->r[1]+0x00000020u; // 800F2D94
  return; // 800F2D98
}

// fn_800F2D9C
void f_800F2D9C(Ctx* __restrict c) {
  trace_call(0x800F2D9Cu);
  return; // 800F2D9C
}

// fn_800F2DA0
void f_800F2DA0(Ctx* __restrict c) {
  trace_call(0x800F2DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2DA0
  c->r[0]=c->lr; // 800F2DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2DAC
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F2DB0
  cmps(c,0,(int32_t)c->r[31],0); // 800F2DB4
  if (crb(c,2)) { goto L_800F2E20; } // 800F2DB8
  c->lr=0x800F2DC0u; f_800F2E38(c); // 800F2DBC
  c->r[0]=R8(c->r[13]+0xFFFFC4E4u); // 800F2DC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F2DC4
  if (!crb(c,2)) { goto L_800F2DE8; } // 800F2DC8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F2DCC
  c->r[0]=0u+0x00000001u; // 800F2DD0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F2DD4
  c->r[4]=c->r[5]+0x00000001u; // 800F2DD8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F2DDC
  W32(c->r[13]+0xFFFFC4E0u,c->r[5]); // 800F2DE0
  W8(c->r[13]+0xFFFFC4E4u,c->r[0]); // 800F2DE4
L_800F2DE8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F2DE8
  c->r[0]=R32(c->r[13]+0xFFFFC4E0u); // 800F2DEC
  c->r[5]=0u+0x800F0000u; // 800F2DF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F2DF4
  c->r[4]=c->r[31]+c->r[4]; // 800F2DF8
  c->r[5]=c->r[5]+0x00002E34u; // 800F2DFC
  c->r[4]=c->r[4]+c->r[0]; // 800F2E00
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F2E04
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F2E08
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F2E0C
  cmpu(c,0,c->r[0],0x00000010u); // 800F2E10
  if (!crb(c,0)) { goto L_800F2E20; } // 800F2E14
  c->r[0]=0u+0x00000010u; // 800F2E18
  W32(c->r[31]+c->r[3],c->r[0]); // 800F2E1C
L_800F2E20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2E20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2E24
  c->lr=c->r[0]; // 800F2E28
  c->r[1]=c->r[1]+0x00000010u; // 800F2E2C
  return; // 800F2E30
}

// fn_800F2E34
void f_800F2E34(Ctx* __restrict c) {
  trace_call(0x800F2E34u);
  f_800F9CEC(c); return; // 800F2E34
}

// fn_800F2E38
void f_800F2E38(Ctx* __restrict c) {
  trace_call(0x800F2E38u);
  c->r[0]=R8(c->r[13]+0xFFFFC504u); // 800F2E38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F2E3C
  if (!crb(c,2)) { goto L_800F2E60; } // 800F2E40
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800F2E44
  c->r[0]=0u+0x00000001u; // 800F2E48
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800F2E4C
  c->r[3]=c->r[4]+0x00000001u; // 800F2E50
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800F2E54
  W32(c->r[13]+0xFFFFC500u,c->r[4]); // 800F2E58
  W8(c->r[13]+0xFFFFC504u,c->r[0]); // 800F2E5C
L_800F2E60:;
  c->r[3]=R32(c->r[13]+0xFFFFC500u); // 800F2E60
  return; // 800F2E64
}

// fn_800F2E68
void f_800F2E68(Ctx* __restrict c) {
  trace_call(0x800F2E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2E68
  c->r[0]=c->lr; // 800F2E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2E74
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F2E78
  cmps(c,0,(int32_t)c->r[31],0); // 800F2E7C
  if (crb(c,2)) { goto L_800F2EE8; } // 800F2E80
  c->lr=0x800F2E88u; f_800F2E38(c); // 800F2E84
  c->r[0]=R8(c->r[13]+0xFFFFC4ECu); // 800F2E88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F2E8C
  if (!crb(c,2)) { goto L_800F2EB0; } // 800F2E90
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F2E94
  c->r[0]=0u+0x00000001u; // 800F2E98
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F2E9C
  c->r[4]=c->r[5]+0x00000001u; // 800F2EA0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F2EA4
  W32(c->r[13]+0xFFFFC4E8u,c->r[5]); // 800F2EA8
  W8(c->r[13]+0xFFFFC4ECu,c->r[0]); // 800F2EAC
L_800F2EB0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F2EB0
  c->r[0]=R32(c->r[13]+0xFFFFC4E8u); // 800F2EB4
  c->r[5]=0u+0x800F0000u; // 800F2EB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F2EBC
  c->r[4]=c->r[31]+c->r[4]; // 800F2EC0
  c->r[5]=c->r[5]+0x00002EFCu; // 800F2EC4
  c->r[4]=c->r[4]+c->r[0]; // 800F2EC8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F2ECC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F2ED0
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F2ED4
  cmpu(c,0,c->r[0],0x00000010u); // 800F2ED8
  if (!crb(c,0)) { goto L_800F2EE8; } // 800F2EDC
  c->r[0]=0u+0x00000010u; // 800F2EE0
  W32(c->r[31]+c->r[3],c->r[0]); // 800F2EE4
L_800F2EE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2EEC
  c->lr=c->r[0]; // 800F2EF0
  c->r[1]=c->r[1]+0x00000010u; // 800F2EF4
  return; // 800F2EF8
}

// fn_800F2EFC
void f_800F2EFC(Ctx* __restrict c) {
  trace_call(0x800F2EFCu);
  f_800F8E34(c); return; // 800F2EFC
}

// fn_800F2F00
void f_800F2F00(Ctx* __restrict c) {
  trace_call(0x800F2F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2F00
  c->r[0]=c->lr; // 800F2F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2F0C
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F2F10
  cmps(c,0,(int32_t)c->r[31],0); // 800F2F14
  if (crb(c,2)) { goto L_800F2F80; } // 800F2F18
  c->lr=0x800F2F20u; f_800F2E38(c); // 800F2F1C
  c->r[0]=R8(c->r[13]+0xFFFFC4DCu); // 800F2F20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F2F24
  if (!crb(c,2)) { goto L_800F2F48; } // 800F2F28
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F2F2C
  c->r[0]=0u+0x00000001u; // 800F2F30
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F2F34
  c->r[4]=c->r[5]+0x00000001u; // 800F2F38
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F2F3C
  W32(c->r[13]+0xFFFFC4D8u,c->r[5]); // 800F2F40
  W8(c->r[13]+0xFFFFC4DCu,c->r[0]); // 800F2F44
L_800F2F48:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F2F48
  c->r[0]=R32(c->r[13]+0xFFFFC4D8u); // 800F2F4C
  c->r[5]=0u+0x800F0000u; // 800F2F50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F2F54
  c->r[4]=c->r[31]+c->r[4]; // 800F2F58
  c->r[5]=c->r[5]+0x00002F94u; // 800F2F5C
  c->r[4]=c->r[4]+c->r[0]; // 800F2F60
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F2F64
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F2F68
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F2F6C
  cmpu(c,0,c->r[0],0x00000010u); // 800F2F70
  if (!crb(c,0)) { goto L_800F2F80; } // 800F2F74
  c->r[0]=0u+0x00000010u; // 800F2F78
  W32(c->r[31]+c->r[3],c->r[0]); // 800F2F7C
L_800F2F80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2F80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2F84
  c->lr=c->r[0]; // 800F2F88
  c->r[1]=c->r[1]+0x00000010u; // 800F2F8C
  return; // 800F2F90
}

// fn_800F2F94
void f_800F2F94(Ctx* __restrict c) {
  trace_call(0x800F2F94u);
  f_800F8C88(c); return; // 800F2F94
}

// fn_800F2F98
void f_800F2F98(Ctx* __restrict c) {
  trace_call(0x800F2F98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2F98
  c->r[0]=c->lr; // 800F2F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2FA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2FA4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F2FA8
  cmps(c,0,(int32_t)c->r[30],0); // 800F2FAC
  if (crb(c,2)) { goto L_800F2FF4; } // 800F2FB0
  c->lr=0x800F2FB8u; f_800F2E38(c); // 800F2FB4
  c->r[31]=c->r[3]|c->r[3]; // 800F2FB8
  c->lr=0x800F2FC0u; f_800F300C(c); // 800F2FBC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F2FC0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F2FC4
  c->r[5]=0u+0x800F0000u; // 800F2FC8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F2FCC
  c->r[4]=c->r[30]+c->r[4]; // 800F2FD0
  c->r[5]=c->r[5]+0x00003008u; // 800F2FD4
  c->r[4]=c->r[4]+c->r[0]; // 800F2FD8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F2FDC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F2FE0
  cmpu(c,0,c->r[0],0x00000010u); // 800F2FE4
  if (!crb(c,0)) { goto L_800F2FF4; } // 800F2FE8
  c->r[0]=0u+0x00000010u; // 800F2FEC
  W32(c->r[30]+c->r[3],c->r[0]); // 800F2FF0
L_800F2FF4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2FF8
  c->lr=c->r[0]; // 800F2FFC
  c->r[1]=c->r[1]+0x00000010u; // 800F3000
  return; // 800F3004
}

// fn_800F3008
void f_800F3008(Ctx* __restrict c) {
  trace_call(0x800F3008u);
  f_800F91E4(c); return; // 800F3008
}

// fn_800F300C
void f_800F300C(Ctx* __restrict c) {
  trace_call(0x800F300Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC4D4u); // 800F300C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3010
  if (!crb(c,2)) { goto L_800F3034; } // 800F3014
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F3018
  c->r[0]=0u+0x00000001u; // 800F301C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F3020
  c->r[3]=c->r[4]+0x00000001u; // 800F3024
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F3028
  W32(c->r[13]+0xFFFFC4D0u,c->r[4]); // 800F302C
  W8(c->r[13]+0xFFFFC4D4u,c->r[0]); // 800F3030
L_800F3034:;
  c->r[3]=R32(c->r[13]+0xFFFFC4D0u); // 800F3034
  return; // 800F3038
}

// fn_800F303C
void f_800F303C(Ctx* __restrict c) {
  trace_call(0x800F303Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F303C
  c->r[0]=c->lr; // 800F3040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3044
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3048
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F304C
  cmps(c,0,(int32_t)c->r[30],0); // 800F3050
  if (crb(c,2)) { goto L_800F3098; } // 800F3054
  c->lr=0x800F305Cu; f_800F2E38(c); // 800F3058
  c->r[31]=c->r[3]|c->r[3]; // 800F305C
  c->lr=0x800F3064u; f_800F30B0(c); // 800F3060
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3064
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3068
  c->r[5]=0u+0x800F0000u; // 800F306C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3070
  c->r[4]=c->r[30]+c->r[4]; // 800F3074
  c->r[5]=c->r[5]+0x000030ACu; // 800F3078
  c->r[4]=c->r[4]+c->r[0]; // 800F307C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3080
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3084
  cmpu(c,0,c->r[0],0x00000010u); // 800F3088
  if (!crb(c,0)) { goto L_800F3098; } // 800F308C
  c->r[0]=0u+0x00000010u; // 800F3090
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3094
L_800F3098:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3098
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F309C
  c->lr=c->r[0]; // 800F30A0
  c->r[1]=c->r[1]+0x00000010u; // 800F30A4
  return; // 800F30A8
}

// fn_800F30AC
void f_800F30AC(Ctx* __restrict c) {
  trace_call(0x800F30ACu);
  f_800F8B70(c); return; // 800F30AC
}

// fn_800F30B0
void f_800F30B0(Ctx* __restrict c) {
  trace_call(0x800F30B0u);
  c->r[0]=R8(c->r[13]+0xFFFFC4CCu); // 800F30B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F30B4
  if (!crb(c,2)) { goto L_800F30D8; } // 800F30B8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F30BC
  c->r[0]=0u+0x00000001u; // 800F30C0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F30C4
  c->r[3]=c->r[4]+0x00000001u; // 800F30C8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F30CC
  W32(c->r[13]+0xFFFFC4C8u,c->r[4]); // 800F30D0
  W8(c->r[13]+0xFFFFC4CCu,c->r[0]); // 800F30D4
L_800F30D8:;
  c->r[3]=R32(c->r[13]+0xFFFFC4C8u); // 800F30D8
  return; // 800F30DC
}

// fn_800F30E0
void f_800F30E0(Ctx* __restrict c) {
  trace_call(0x800F30E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F30E0
  c->r[0]=c->lr; // 800F30E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F30E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F30EC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F30F0
  cmps(c,0,(int32_t)c->r[30],0); // 800F30F4
  if (crb(c,2)) { goto L_800F313C; } // 800F30F8
  c->lr=0x800F3100u; f_800F2E38(c); // 800F30FC
  c->r[31]=c->r[3]|c->r[3]; // 800F3100
  c->lr=0x800F3108u; f_800F3154(c); // 800F3104
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3108
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F310C
  c->r[5]=0u+0x800F0000u; // 800F3110
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3114
  c->r[4]=c->r[30]+c->r[4]; // 800F3118
  c->r[5]=c->r[5]+0x00003150u; // 800F311C
  c->r[4]=c->r[4]+c->r[0]; // 800F3120
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3124
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3128
  cmpu(c,0,c->r[0],0x00000014u); // 800F312C
  if (!crb(c,0)) { goto L_800F313C; } // 800F3130
  c->r[0]=0u+0x00000014u; // 800F3134
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3138
L_800F313C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F313C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3140
  c->lr=c->r[0]; // 800F3144
  c->r[1]=c->r[1]+0x00000010u; // 800F3148
  return; // 800F314C
}

// fn_800F3150
void f_800F3150(Ctx* __restrict c) {
  trace_call(0x800F3150u);
  f_800F8554(c); return; // 800F3150
}

// fn_800F3154
void f_800F3154(Ctx* __restrict c) {
  trace_call(0x800F3154u);
  c->r[0]=R8(c->r[13]+0xFFFFC4C4u); // 800F3154
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3158
  if (!crb(c,2)) { goto L_800F317C; } // 800F315C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F3160
  c->r[0]=0u+0x00000001u; // 800F3164
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F3168
  c->r[3]=c->r[4]+0x00000001u; // 800F316C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F3170
  W32(c->r[13]+0xFFFFC4C0u,c->r[4]); // 800F3174
  W8(c->r[13]+0xFFFFC4C4u,c->r[0]); // 800F3178
L_800F317C:;
  c->r[3]=R32(c->r[13]+0xFFFFC4C0u); // 800F317C
  return; // 800F3180
}

// fn_800F3184
void f_800F3184(Ctx* __restrict c) {
  trace_call(0x800F3184u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3184
  c->r[0]=c->lr; // 800F3188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F318C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3190
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3194
  cmps(c,0,(int32_t)c->r[31],0); // 800F3198
  if (crb(c,2)) { goto L_800F3204; } // 800F319C
  c->lr=0x800F31A4u; f_800F2E38(c); // 800F31A0
  c->r[0]=R8(c->r[13]+0xFFFFC4B4u); // 800F31A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F31A8
  if (!crb(c,2)) { goto L_800F31CC; } // 800F31AC
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F31B0
  c->r[0]=0u+0x00000001u; // 800F31B4
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F31B8
  c->r[4]=c->r[5]+0x00000001u; // 800F31BC
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F31C0
  W32(c->r[13]+0xFFFFC4B0u,c->r[5]); // 800F31C4
  W8(c->r[13]+0xFFFFC4B4u,c->r[0]); // 800F31C8
L_800F31CC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F31CC
  c->r[0]=R32(c->r[13]+0xFFFFC4B0u); // 800F31D0
  c->r[5]=0u+0x800F0000u; // 800F31D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F31D8
  c->r[4]=c->r[31]+c->r[4]; // 800F31DC
  c->r[5]=c->r[5]+0x00003218u; // 800F31E0
  c->r[4]=c->r[4]+c->r[0]; // 800F31E4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F31E8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F31EC
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F31F0
  cmpu(c,0,c->r[0],0x00000014u); // 800F31F4
  if (!crb(c,0)) { goto L_800F3204; } // 800F31F8
  c->r[0]=0u+0x00000014u; // 800F31FC
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3200
L_800F3204:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3208
  c->lr=c->r[0]; // 800F320C
  c->r[1]=c->r[1]+0x00000010u; // 800F3210
  return; // 800F3214
}

// fn_800F3218
void f_800F3218(Ctx* __restrict c) {
  trace_call(0x800F3218u);
  f_800F8200(c); return; // 800F3218
}

// fn_800F321C
void f_800F321C(Ctx* __restrict c) {
  trace_call(0x800F321Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F321C
  c->r[0]=c->lr; // 800F3220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3228
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F322C
  cmps(c,0,(int32_t)c->r[31],0); // 800F3230
  if (crb(c,2)) { goto L_800F329C; } // 800F3234
  c->lr=0x800F323Cu; f_800F2E38(c); // 800F3238
  c->r[0]=R8(c->r[13]+0xFFFFBD00u); // 800F323C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3240
  if (!crb(c,2)) { goto L_800F3264; } // 800F3244
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3248
  c->r[0]=0u+0x00000001u; // 800F324C
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3250
  c->r[4]=c->r[5]+0x00000001u; // 800F3254
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3258
  W32(c->r[13]+0xFFFFBCFCu,c->r[5]); // 800F325C
  W8(c->r[13]+0xFFFFBD00u,c->r[0]); // 800F3260
L_800F3264:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3264
  c->r[0]=R32(c->r[13]+0xFFFFBCFCu); // 800F3268
  c->r[5]=0u+0x800F0000u; // 800F326C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3270
  c->r[4]=c->r[31]+c->r[4]; // 800F3274
  c->r[5]=c->r[5]+0x000032B0u; // 800F3278
  c->r[4]=c->r[4]+c->r[0]; // 800F327C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3280
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3284
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3288
  cmpu(c,0,c->r[0],0x00000010u); // 800F328C
  if (!crb(c,0)) { goto L_800F329C; } // 800F3290
  c->r[0]=0u+0x00000010u; // 800F3294
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3298
L_800F329C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F329C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F32A0
  c->lr=c->r[0]; // 800F32A4
  c->r[1]=c->r[1]+0x00000010u; // 800F32A8
  return; // 800F32AC
}

// fn_800F32B0
void f_800F32B0(Ctx* __restrict c) {
  trace_call(0x800F32B0u);
  f_800F7ED4(c); return; // 800F32B0
}

// fn_800F32B4
void f_800F32B4(Ctx* __restrict c) {
  trace_call(0x800F32B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F32B4
  c->r[0]=c->lr; // 800F32B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F32BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F32C0
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F32C4
  cmps(c,0,(int32_t)c->r[31],0); // 800F32C8
  if (crb(c,2)) { goto L_800F3334; } // 800F32CC
  c->lr=0x800F32D4u; f_800F2E38(c); // 800F32D0
  c->r[0]=R8(c->r[13]+0xFFFFC4ACu); // 800F32D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F32D8
  if (!crb(c,2)) { goto L_800F32FC; } // 800F32DC
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F32E0
  c->r[0]=0u+0x00000001u; // 800F32E4
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F32E8
  c->r[4]=c->r[5]+0x00000001u; // 800F32EC
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F32F0
  W32(c->r[13]+0xFFFFC4A8u,c->r[5]); // 800F32F4
  W8(c->r[13]+0xFFFFC4ACu,c->r[0]); // 800F32F8
L_800F32FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F32FC
  c->r[0]=R32(c->r[13]+0xFFFFC4A8u); // 800F3300
  c->r[5]=0u+0x800F0000u; // 800F3304
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3308
  c->r[4]=c->r[31]+c->r[4]; // 800F330C
  c->r[5]=c->r[5]+0x00003348u; // 800F3310
  c->r[4]=c->r[4]+c->r[0]; // 800F3314
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3318
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F331C
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3320
  cmpu(c,0,c->r[0],0x00000010u); // 800F3324
  if (!crb(c,0)) { goto L_800F3334; } // 800F3328
  c->r[0]=0u+0x00000010u; // 800F332C
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3330
L_800F3334:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3338
  c->lr=c->r[0]; // 800F333C
  c->r[1]=c->r[1]+0x00000010u; // 800F3340
  return; // 800F3344
}

// fn_800F3348
void f_800F3348(Ctx* __restrict c) {
  trace_call(0x800F3348u);
  f_800F7E5C(c); return; // 800F3348
}

// fn_800F334C
void f_800F334C(Ctx* __restrict c) {
  trace_call(0x800F334Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F334C
  c->r[0]=c->lr; // 800F3350
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3358
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F335C
  cmps(c,0,(int32_t)c->r[31],0); // 800F3360
  if (crb(c,2)) { goto L_800F33CC; } // 800F3364
  c->lr=0x800F336Cu; f_800F2E38(c); // 800F3368
  c->r[0]=R8(c->r[13]+0xFFFFBD40u); // 800F336C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3370
  if (!crb(c,2)) { goto L_800F3394; } // 800F3374
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3378
  c->r[0]=0u+0x00000001u; // 800F337C
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3380
  c->r[4]=c->r[5]+0x00000001u; // 800F3384
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3388
  W32(c->r[13]+0xFFFFBD3Cu,c->r[5]); // 800F338C
  W8(c->r[13]+0xFFFFBD40u,c->r[0]); // 800F3390
L_800F3394:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3394
  c->r[0]=R32(c->r[13]+0xFFFFBD3Cu); // 800F3398
  c->r[5]=0u+0x800F0000u; // 800F339C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F33A0
  c->r[4]=c->r[31]+c->r[4]; // 800F33A4
  c->r[5]=c->r[5]+0x000033E0u; // 800F33A8
  c->r[4]=c->r[4]+c->r[0]; // 800F33AC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F33B0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F33B4
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F33B8
  cmpu(c,0,c->r[0],0x00000010u); // 800F33BC
  if (!crb(c,0)) { goto L_800F33CC; } // 800F33C0
  c->r[0]=0u+0x00000010u; // 800F33C4
  W32(c->r[31]+c->r[3],c->r[0]); // 800F33C8
L_800F33CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F33CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F33D0
  c->lr=c->r[0]; // 800F33D4
  c->r[1]=c->r[1]+0x00000010u; // 800F33D8
  return; // 800F33DC
}

// fn_800F33E0
void f_800F33E0(Ctx* __restrict c) {
  trace_call(0x800F33E0u);
  f_800F7710(c); return; // 800F33E0
}

// fn_800F33E4
void f_800F33E4(Ctx* __restrict c) {
  trace_call(0x800F33E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F33E4
  c->r[0]=c->lr; // 800F33E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F33EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F33F0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F33F4
  cmps(c,0,(int32_t)c->r[30],0); // 800F33F8
  if (crb(c,2)) { goto L_800F3440; } // 800F33FC
  c->lr=0x800F3404u; f_800F2E38(c); // 800F3400
  c->r[31]=c->r[3]|c->r[3]; // 800F3404
  c->lr=0x800F340Cu; f_80062DFC(c); // 800F3408
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F340C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3410
  c->r[5]=0u+0x800F0000u; // 800F3414
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3418
  c->r[4]=c->r[30]+c->r[4]; // 800F341C
  c->r[5]=c->r[5]+0x00003454u; // 800F3420
  c->r[4]=c->r[4]+c->r[0]; // 800F3424
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3428
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F342C
  cmpu(c,0,c->r[0],0x00000010u); // 800F3430
  if (!crb(c,0)) { goto L_800F3440; } // 800F3434
  c->r[0]=0u+0x00000010u; // 800F3438
  W32(c->r[30]+c->r[3],c->r[0]); // 800F343C
L_800F3440:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3444
  c->lr=c->r[0]; // 800F3448
  c->r[1]=c->r[1]+0x00000010u; // 800F344C
  return; // 800F3450
}

// fn_800F3454
void f_800F3454(Ctx* __restrict c) {
  trace_call(0x800F3454u);
  f_800F7858(c); return; // 800F3454
}

// fn_800F3458
void f_800F3458(Ctx* __restrict c) {
  trace_call(0x800F3458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3458
  c->r[0]=c->lr; // 800F345C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3464
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3468
  cmps(c,0,(int32_t)c->r[31],0); // 800F346C
  if (crb(c,2)) { goto L_800F34D8; } // 800F3470
  c->lr=0x800F3478u; f_800F2E38(c); // 800F3474
  c->r[0]=R8(c->r[13]+0xFFFFC49Cu); // 800F3478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F347C
  if (!crb(c,2)) { goto L_800F34A0; } // 800F3480
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3484
  c->r[0]=0u+0x00000001u; // 800F3488
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F348C
  c->r[4]=c->r[5]+0x00000001u; // 800F3490
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3494
  W32(c->r[13]+0xFFFFC498u,c->r[5]); // 800F3498
  W8(c->r[13]+0xFFFFC49Cu,c->r[0]); // 800F349C
L_800F34A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F34A0
  c->r[0]=R32(c->r[13]+0xFFFFC498u); // 800F34A4
  c->r[5]=0u+0x800F0000u; // 800F34A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F34AC
  c->r[4]=c->r[31]+c->r[4]; // 800F34B0
  c->r[5]=c->r[5]+0x000034ECu; // 800F34B4
  c->r[4]=c->r[4]+c->r[0]; // 800F34B8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F34BC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F34C0
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F34C4
  cmpu(c,0,c->r[0],0x00000010u); // 800F34C8
  if (!crb(c,0)) { goto L_800F34D8; } // 800F34CC
  c->r[0]=0u+0x00000010u; // 800F34D0
  W32(c->r[31]+c->r[3],c->r[0]); // 800F34D4
L_800F34D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F34D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F34DC
  c->lr=c->r[0]; // 800F34E0
  c->r[1]=c->r[1]+0x00000010u; // 800F34E4
  return; // 800F34E8
}

// fn_800F34EC
void f_800F34EC(Ctx* __restrict c) {
  trace_call(0x800F34ECu);
  f_800F7B0C(c); return; // 800F34EC
}

// fn_800F34F0
void f_800F34F0(Ctx* __restrict c) {
  trace_call(0x800F34F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F34F0
  c->r[0]=c->lr; // 800F34F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F34F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F34FC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3500
  cmps(c,0,(int32_t)c->r[30],0); // 800F3504
  if (crb(c,2)) { goto L_800F354C; } // 800F3508
  c->lr=0x800F3510u; f_800F2E38(c); // 800F350C
  c->r[31]=c->r[3]|c->r[3]; // 800F3510
  c->lr=0x800F3518u; f_80062DCC(c); // 800F3514
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3518
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F351C
  c->r[5]=0u+0x800F0000u; // 800F3520
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3524
  c->r[4]=c->r[30]+c->r[4]; // 800F3528
  c->r[5]=c->r[5]+0x00003560u; // 800F352C
  c->r[4]=c->r[4]+c->r[0]; // 800F3530
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3534
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3538
  cmpu(c,0,c->r[0],0x00000010u); // 800F353C
  if (!crb(c,0)) { goto L_800F354C; } // 800F3540
  c->r[0]=0u+0x00000010u; // 800F3544
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3548
L_800F354C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F354C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3550
  c->lr=c->r[0]; // 800F3554
  c->r[1]=c->r[1]+0x00000010u; // 800F3558
  return; // 800F355C
}

// fn_800F3560
void f_800F3560(Ctx* __restrict c) {
  trace_call(0x800F3560u);
  f_800F7898(c); return; // 800F3560
}

// fn_800F3564
void f_800F3564(Ctx* __restrict c) {
  trace_call(0x800F3564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3564
  c->r[0]=c->lr; // 800F3568
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F356C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3570
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3574
  cmps(c,0,(int32_t)c->r[30],0); // 800F3578
  if (crb(c,2)) { goto L_800F35C0; } // 800F357C
  c->lr=0x800F3584u; f_800F2E38(c); // 800F3580
  c->r[31]=c->r[3]|c->r[3]; // 800F3584
  c->lr=0x800F358Cu; f_80062E5C(c); // 800F3588
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F358C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3590
  c->r[5]=0u+0x800F0000u; // 800F3594
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3598
  c->r[4]=c->r[30]+c->r[4]; // 800F359C
  c->r[5]=c->r[5]+0x000035D4u; // 800F35A0
  c->r[4]=c->r[4]+c->r[0]; // 800F35A4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F35A8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F35AC
  cmpu(c,0,c->r[0],0x00000010u); // 800F35B0
  if (!crb(c,0)) { goto L_800F35C0; } // 800F35B4
  c->r[0]=0u+0x00000010u; // 800F35B8
  W32(c->r[30]+c->r[3],c->r[0]); // 800F35BC
L_800F35C0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F35C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F35C4
  c->lr=c->r[0]; // 800F35C8
  c->r[1]=c->r[1]+0x00000010u; // 800F35CC
  return; // 800F35D0
}

// fn_800F35D4
void f_800F35D4(Ctx* __restrict c) {
  trace_call(0x800F35D4u);
  f_800F75E4(c); return; // 800F35D4
}

// fn_800F35D8
void f_800F35D8(Ctx* __restrict c) {
  trace_call(0x800F35D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F35D8
  c->r[0]=c->lr; // 800F35DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F35E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F35E4
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F35E8
  cmps(c,0,(int32_t)c->r[31],0); // 800F35EC
  if (crb(c,2)) { goto L_800F3658; } // 800F35F0
  c->lr=0x800F35F8u; f_800F2E38(c); // 800F35F4
  c->r[0]=R8(c->r[13]+0xFFFFC4BCu); // 800F35F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F35FC
  if (!crb(c,2)) { goto L_800F3620; } // 800F3600
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3604
  c->r[0]=0u+0x00000001u; // 800F3608
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F360C
  c->r[4]=c->r[5]+0x00000001u; // 800F3610
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3614
  W32(c->r[13]+0xFFFFC4B8u,c->r[5]); // 800F3618
  W8(c->r[13]+0xFFFFC4BCu,c->r[0]); // 800F361C
L_800F3620:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3620
  c->r[0]=R32(c->r[13]+0xFFFFC4B8u); // 800F3624
  c->r[5]=0u+0x800F0000u; // 800F3628
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F362C
  c->r[4]=c->r[31]+c->r[4]; // 800F3630
  c->r[5]=c->r[5]+0x0000366Cu; // 800F3634
  c->r[4]=c->r[4]+c->r[0]; // 800F3638
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F363C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3640
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3644
  cmpu(c,0,c->r[0],0x00000014u); // 800F3648
  if (!crb(c,0)) { goto L_800F3658; } // 800F364C
  c->r[0]=0u+0x00000014u; // 800F3650
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3654
L_800F3658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F365C
  c->lr=c->r[0]; // 800F3660
  c->r[1]=c->r[1]+0x00000010u; // 800F3664
  return; // 800F3668
}

// fn_800F366C
void f_800F366C(Ctx* __restrict c) {
  trace_call(0x800F366Cu);
  f_800F750C(c); return; // 800F366C
}

// fn_800F3670
void f_800F3670(Ctx* __restrict c) {
  trace_call(0x800F3670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3670
  c->r[0]=c->lr; // 800F3674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F367C
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3680
  cmps(c,0,(int32_t)c->r[31],0); // 800F3684
  if (crb(c,2)) { goto L_800F36F0; } // 800F3688
  c->lr=0x800F3690u; f_800F2E38(c); // 800F368C
  c->r[0]=R8(c->r[13]+0xFFFFC4A4u); // 800F3690
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3694
  if (!crb(c,2)) { goto L_800F36B8; } // 800F3698
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F369C
  c->r[0]=0u+0x00000001u; // 800F36A0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F36A4
  c->r[4]=c->r[5]+0x00000001u; // 800F36A8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F36AC
  W32(c->r[13]+0xFFFFC4A0u,c->r[5]); // 800F36B0
  W8(c->r[13]+0xFFFFC4A4u,c->r[0]); // 800F36B4
L_800F36B8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F36B8
  c->r[0]=R32(c->r[13]+0xFFFFC4A0u); // 800F36BC
  c->r[5]=0u+0x800F0000u; // 800F36C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F36C4
  c->r[4]=c->r[31]+c->r[4]; // 800F36C8
  c->r[5]=c->r[5]+0x00003704u; // 800F36CC
  c->r[4]=c->r[4]+c->r[0]; // 800F36D0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F36D4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F36D8
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F36DC
  cmpu(c,0,c->r[0],0x00000010u); // 800F36E0
  if (!crb(c,0)) { goto L_800F36F0; } // 800F36E4
  c->r[0]=0u+0x00000010u; // 800F36E8
  W32(c->r[31]+c->r[3],c->r[0]); // 800F36EC
L_800F36F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F36F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F36F4
  c->lr=c->r[0]; // 800F36F8
  c->r[1]=c->r[1]+0x00000010u; // 800F36FC
  return; // 800F3700
}

// fn_800F3704
void f_800F3704(Ctx* __restrict c) {
  trace_call(0x800F3704u);
  f_800F72A8(c); return; // 800F3704
}

// fn_800F3708
void f_800F3708(Ctx* __restrict c) {
  trace_call(0x800F3708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3708
  c->r[0]=c->lr; // 800F370C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3714
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3718
  cmps(c,0,(int32_t)c->r[31],0); // 800F371C
  if (crb(c,2)) { goto L_800F3788; } // 800F3720
  c->lr=0x800F3728u; f_800F2E38(c); // 800F3724
  c->r[0]=R8(c->r[13]+0xFFFFBCF0u); // 800F3728
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F372C
  if (!crb(c,2)) { goto L_800F3750; } // 800F3730
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3734
  c->r[0]=0u+0x00000001u; // 800F3738
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F373C
  c->r[4]=c->r[5]+0x00000001u; // 800F3740
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3744
  W32(c->r[13]+0xFFFFBCECu,c->r[5]); // 800F3748
  W8(c->r[13]+0xFFFFBCF0u,c->r[0]); // 800F374C
L_800F3750:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3750
  c->r[0]=R32(c->r[13]+0xFFFFBCECu); // 800F3754
  c->r[5]=0u+0x800F0000u; // 800F3758
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F375C
  c->r[4]=c->r[31]+c->r[4]; // 800F3760
  c->r[5]=c->r[5]+0x0000379Cu; // 800F3764
  c->r[4]=c->r[4]+c->r[0]; // 800F3768
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F376C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3770
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3774
  cmpu(c,0,c->r[0],0x00000010u); // 800F3778
  if (!crb(c,0)) { goto L_800F3788; } // 800F377C
  c->r[0]=0u+0x00000010u; // 800F3780
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3784
L_800F3788:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F378C
  c->lr=c->r[0]; // 800F3790
  c->r[1]=c->r[1]+0x00000010u; // 800F3794
  return; // 800F3798
}

// fn_800F379C
void f_800F379C(Ctx* __restrict c) {
  trace_call(0x800F379Cu);
  f_800F708C(c); return; // 800F379C
}

// fn_800F37A0
void f_800F37A0(Ctx* __restrict c) {
  trace_call(0x800F37A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F37A0
  c->r[0]=c->lr; // 800F37A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F37A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F37AC
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F37B0
  cmps(c,0,(int32_t)c->r[31],0); // 800F37B4
  if (crb(c,2)) { goto L_800F3820; } // 800F37B8
  c->lr=0x800F37C0u; f_800F2E38(c); // 800F37BC
  c->r[0]=R8(c->r[13]+0xFFFFC4FCu); // 800F37C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F37C4
  if (!crb(c,2)) { goto L_800F37E8; } // 800F37C8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F37CC
  c->r[0]=0u+0x00000001u; // 800F37D0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F37D4
  c->r[4]=c->r[5]+0x00000001u; // 800F37D8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F37DC
  W32(c->r[13]+0xFFFFC4F8u,c->r[5]); // 800F37E0
  W8(c->r[13]+0xFFFFC4FCu,c->r[0]); // 800F37E4
L_800F37E8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F37E8
  c->r[0]=R32(c->r[13]+0xFFFFC4F8u); // 800F37EC
  c->r[5]=0u+0x800F0000u; // 800F37F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F37F4
  c->r[4]=c->r[31]+c->r[4]; // 800F37F8
  c->r[5]=c->r[5]+0x00003834u; // 800F37FC
  c->r[4]=c->r[4]+c->r[0]; // 800F3800
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3804
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3808
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F380C
  cmpu(c,0,c->r[0],0x00000010u); // 800F3810
  if (!crb(c,0)) { goto L_800F3820; } // 800F3814
  c->r[0]=0u+0x00000010u; // 800F3818
  W32(c->r[31]+c->r[3],c->r[0]); // 800F381C
L_800F3820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3824
  c->lr=c->r[0]; // 800F3828
  c->r[1]=c->r[1]+0x00000010u; // 800F382C
  return; // 800F3830
}

// fn_800F3834
void f_800F3834(Ctx* __restrict c) {
  trace_call(0x800F3834u);
  f_800F6FF4(c); return; // 800F3834
}

// fn_800F3838
void f_800F3838(Ctx* __restrict c) {
  trace_call(0x800F3838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3838
  c->r[0]=c->lr; // 800F383C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3844
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3848
  cmps(c,0,(int32_t)c->r[31],0); // 800F384C
  if (crb(c,2)) { goto L_800F38B8; } // 800F3850
  c->lr=0x800F3858u; f_800F2E38(c); // 800F3854
  c->r[0]=R8(c->r[13]+0xFFFFC4F4u); // 800F3858
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F385C
  if (!crb(c,2)) { goto L_800F3880; } // 800F3860
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3864
  c->r[0]=0u+0x00000001u; // 800F3868
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F386C
  c->r[4]=c->r[5]+0x00000001u; // 800F3870
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3874
  W32(c->r[13]+0xFFFFC4F0u,c->r[5]); // 800F3878
  W8(c->r[13]+0xFFFFC4F4u,c->r[0]); // 800F387C
L_800F3880:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3880
  c->r[0]=R32(c->r[13]+0xFFFFC4F0u); // 800F3884
  c->r[5]=0u+0x800F0000u; // 800F3888
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F388C
  c->r[4]=c->r[31]+c->r[4]; // 800F3890
  c->r[5]=c->r[5]+0x000038CCu; // 800F3894
  c->r[4]=c->r[4]+c->r[0]; // 800F3898
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F389C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F38A0
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F38A4
  cmpu(c,0,c->r[0],0x00000010u); // 800F38A8
  if (!crb(c,0)) { goto L_800F38B8; } // 800F38AC
  c->r[0]=0u+0x00000010u; // 800F38B0
  W32(c->r[31]+c->r[3],c->r[0]); // 800F38B4
L_800F38B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F38B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F38BC
  c->lr=c->r[0]; // 800F38C0
  c->r[1]=c->r[1]+0x00000010u; // 800F38C4
  return; // 800F38C8
}

// fn_800F38CC
void f_800F38CC(Ctx* __restrict c) {
  trace_call(0x800F38CCu);
  f_800F6B34(c); return; // 800F38CC
}

// fn_800F38D0
void f_800F38D0(Ctx* __restrict c) {
  trace_call(0x800F38D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F38D0
  c->r[0]=c->lr; // 800F38D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F38D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F38DC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F38E0
  cmps(c,0,(int32_t)c->r[30],0); // 800F38E4
  if (crb(c,2)) { goto L_800F392C; } // 800F38E8
  c->lr=0x800F38F0u; f_800F2E38(c); // 800F38EC
  c->r[31]=c->r[3]|c->r[3]; // 800F38F0
  c->lr=0x800F38F8u; f_800F3944(c); // 800F38F4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F38F8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F38FC
  c->r[5]=0u+0x800F0000u; // 800F3900
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3904
  c->r[4]=c->r[30]+c->r[4]; // 800F3908
  c->r[5]=c->r[5]+0x00003940u; // 800F390C
  c->r[4]=c->r[4]+c->r[0]; // 800F3910
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3914
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3918
  cmpu(c,0,c->r[0],0x00000010u); // 800F391C
  if (!crb(c,0)) { goto L_800F392C; } // 800F3920
  c->r[0]=0u+0x00000010u; // 800F3924
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3928
L_800F392C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F392C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3930
  c->lr=c->r[0]; // 800F3934
  c->r[1]=c->r[1]+0x00000010u; // 800F3938
  return; // 800F393C
}

// fn_800F3940
void f_800F3940(Ctx* __restrict c) {
  trace_call(0x800F3940u);
  f_800F688C(c); return; // 800F3940
}

// fn_800F3944
void f_800F3944(Ctx* __restrict c) {
  trace_call(0x800F3944u);
  c->r[0]=R8(c->r[13]+0xFFFFC494u); // 800F3944
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3948
  if (!crb(c,2)) { goto L_800F396C; } // 800F394C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F3950
  c->r[0]=0u+0x00000001u; // 800F3954
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F3958
  c->r[3]=c->r[4]+0x00000001u; // 800F395C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F3960
  W32(c->r[13]+0xFFFFC490u,c->r[4]); // 800F3964
  W8(c->r[13]+0xFFFFC494u,c->r[0]); // 800F3968
L_800F396C:;
  c->r[3]=R32(c->r[13]+0xFFFFC490u); // 800F396C
  return; // 800F3970
}

// fn_800F3974
void f_800F3974(Ctx* __restrict c) {
  trace_call(0x800F3974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3974
  c->r[0]=c->lr; // 800F3978
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F397C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3980
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3984
  cmps(c,0,(int32_t)c->r[30],0); // 800F3988
  if (crb(c,2)) { goto L_800F39D0; } // 800F398C
  c->lr=0x800F3994u; f_800F2E38(c); // 800F3990
  c->r[31]=c->r[3]|c->r[3]; // 800F3994
  c->lr=0x800F399Cu; f_800F39E8(c); // 800F3998
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F399C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F39A0
  c->r[5]=0u+0x800F0000u; // 800F39A4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F39A8
  c->r[4]=c->r[30]+c->r[4]; // 800F39AC
  c->r[5]=c->r[5]+0x000039E4u; // 800F39B0
  c->r[4]=c->r[4]+c->r[0]; // 800F39B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F39B8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F39BC
  cmpu(c,0,c->r[0],0x00000010u); // 800F39C0
  if (!crb(c,0)) { goto L_800F39D0; } // 800F39C4
  c->r[0]=0u+0x00000010u; // 800F39C8
  W32(c->r[30]+c->r[3],c->r[0]); // 800F39CC
L_800F39D0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F39D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F39D4
  c->lr=c->r[0]; // 800F39D8
  c->r[1]=c->r[1]+0x00000010u; // 800F39DC
  return; // 800F39E0
}

// fn_800F39E4
void f_800F39E4(Ctx* __restrict c) {
  trace_call(0x800F39E4u);
  f_800F6314(c); return; // 800F39E4
}

// fn_800F39E8
void f_800F39E8(Ctx* __restrict c) {
  trace_call(0x800F39E8u);
  c->r[0]=R8(c->r[13]+0xFFFFC48Cu); // 800F39E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F39EC
  if (!crb(c,2)) { goto L_800F3A10; } // 800F39F0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F39F4
  c->r[0]=0u+0x00000001u; // 800F39F8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F39FC
  c->r[3]=c->r[4]+0x00000001u; // 800F3A00
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F3A04
  W32(c->r[13]+0xFFFFC488u,c->r[4]); // 800F3A08
  W8(c->r[13]+0xFFFFC48Cu,c->r[0]); // 800F3A0C
L_800F3A10:;
  c->r[3]=R32(c->r[13]+0xFFFFC488u); // 800F3A10
  return; // 800F3A14
}

// fn_800F3A18
void f_800F3A18(Ctx* __restrict c) {
  trace_call(0x800F3A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A18
  c->r[0]=c->lr; // 800F3A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3A20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3A24
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3A28
  cmps(c,0,(int32_t)c->r[30],0); // 800F3A2C
  if (crb(c,2)) { goto L_800F3A74; } // 800F3A30
  c->lr=0x800F3A38u; f_800F2E38(c); // 800F3A34
  c->r[31]=c->r[3]|c->r[3]; // 800F3A38
  c->lr=0x800F3A40u; f_80061044(c); // 800F3A3C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3A40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3A44
  c->r[5]=0u+0x800F0000u; // 800F3A48
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3A4C
  c->r[4]=c->r[30]+c->r[4]; // 800F3A50
  c->r[5]=c->r[5]+0x00003A88u; // 800F3A54
  c->r[4]=c->r[4]+c->r[0]; // 800F3A58
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3A5C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3A60
  cmpu(c,0,c->r[0],0x00000020u); // 800F3A64
  if (!crb(c,0)) { goto L_800F3A74; } // 800F3A68
  c->r[0]=0u+0x00000020u; // 800F3A6C
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3A70
L_800F3A74:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3A78
  c->lr=c->r[0]; // 800F3A7C
  c->r[1]=c->r[1]+0x00000010u; // 800F3A80
  return; // 800F3A84
}

// fn_800F3A88
void f_800F3A88(Ctx* __restrict c) {
  trace_call(0x800F3A88u);
  f_800F58B0(c); return; // 800F3A88
}

// fn_800F3A8C
void f_800F3A8C(Ctx* __restrict c) {
  trace_call(0x800F3A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A8C
  c->r[0]=c->lr; // 800F3A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3A98
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3A9C
  cmps(c,0,(int32_t)c->r[31],0); // 800F3AA0
  if (crb(c,2)) { goto L_800F3B0C; } // 800F3AA4
  c->lr=0x800F3AACu; f_800F2E38(c); // 800F3AA8
  c->r[0]=R8(c->r[13]+0xFFFFBEECu); // 800F3AAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3AB0
  if (!crb(c,2)) { goto L_800F3AD4; } // 800F3AB4
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3AB8
  c->r[0]=0u+0x00000001u; // 800F3ABC
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3AC0
  c->r[4]=c->r[5]+0x00000001u; // 800F3AC4
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3AC8
  W32(c->r[13]+0xFFFFBEE8u,c->r[5]); // 800F3ACC
  W8(c->r[13]+0xFFFFBEECu,c->r[0]); // 800F3AD0
L_800F3AD4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3AD4
  c->r[0]=R32(c->r[13]+0xFFFFBEE8u); // 800F3AD8
  c->r[5]=0u+0x800F0000u; // 800F3ADC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3AE0
  c->r[4]=c->r[31]+c->r[4]; // 800F3AE4
  c->r[5]=c->r[5]+0x00003B20u; // 800F3AE8
  c->r[4]=c->r[4]+c->r[0]; // 800F3AEC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3AF0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3AF4
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3AF8
  cmpu(c,0,c->r[0],0x00000010u); // 800F3AFC
  if (!crb(c,0)) { goto L_800F3B0C; } // 800F3B00
  c->r[0]=0u+0x00000010u; // 800F3B04
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3B08
L_800F3B0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3B10
  c->lr=c->r[0]; // 800F3B14
  c->r[1]=c->r[1]+0x00000010u; // 800F3B18
  return; // 800F3B1C
}

// fn_800F3B20
void f_800F3B20(Ctx* __restrict c) {
  trace_call(0x800F3B20u);
  f_800F54A4(c); return; // 800F3B20
}

// fn_800F3B24
void f_800F3B24(Ctx* __restrict c) {
  trace_call(0x800F3B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B24
  c->r[0]=c->lr; // 800F3B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3B2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3B30
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3B34
  cmps(c,0,(int32_t)c->r[30],0); // 800F3B38
  if (crb(c,2)) { goto L_800F3B80; } // 800F3B3C
  c->lr=0x800F3B44u; f_800F2E38(c); // 800F3B40
  c->r[31]=c->r[3]|c->r[3]; // 800F3B44
  c->lr=0x800F3B4Cu; f_8007B170(c); // 800F3B48
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3B4C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3B50
  c->r[5]=0u+0x800F0000u; // 800F3B54
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3B58
  c->r[4]=c->r[30]+c->r[4]; // 800F3B5C
  c->r[5]=c->r[5]+0x00003B94u; // 800F3B60
  c->r[4]=c->r[4]+c->r[0]; // 800F3B64
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3B68
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3B6C
  cmpu(c,0,c->r[0],0x00000010u); // 800F3B70
  if (!crb(c,0)) { goto L_800F3B80; } // 800F3B74
  c->r[0]=0u+0x00000010u; // 800F3B78
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3B7C
L_800F3B80:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3B84
  c->lr=c->r[0]; // 800F3B88
  c->r[1]=c->r[1]+0x00000010u; // 800F3B8C
  return; // 800F3B90
}

// fn_800F3B94
void f_800F3B94(Ctx* __restrict c) {
  trace_call(0x800F3B94u);
  f_800F50DC(c); return; // 800F3B94
}

// fn_800F3B98
void f_800F3B98(Ctx* __restrict c) {
  trace_call(0x800F3B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B98
  c->r[0]=c->lr; // 800F3B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3BA4
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3BA8
  cmps(c,0,(int32_t)c->r[31],0); // 800F3BAC
  if (crb(c,2)) { goto L_800F3C18; } // 800F3BB0
  c->lr=0x800F3BB8u; f_800F2E38(c); // 800F3BB4
  c->r[0]=R8(c->r[13]+0xFFFFBCF8u); // 800F3BB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3BBC
  if (!crb(c,2)) { goto L_800F3BE0; } // 800F3BC0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3BC4
  c->r[0]=0u+0x00000001u; // 800F3BC8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3BCC
  c->r[4]=c->r[5]+0x00000001u; // 800F3BD0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3BD4
  W32(c->r[13]+0xFFFFBCF4u,c->r[5]); // 800F3BD8
  W8(c->r[13]+0xFFFFBCF8u,c->r[0]); // 800F3BDC
L_800F3BE0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3BE0
  c->r[0]=R32(c->r[13]+0xFFFFBCF4u); // 800F3BE4
  c->r[5]=0u+0x800F0000u; // 800F3BE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3BEC
  c->r[4]=c->r[31]+c->r[4]; // 800F3BF0
  c->r[5]=c->r[5]+0x00003C2Cu; // 800F3BF4
  c->r[4]=c->r[4]+c->r[0]; // 800F3BF8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3BFC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3C00
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3C04
  cmpu(c,0,c->r[0],0x00000010u); // 800F3C08
  if (!crb(c,0)) { goto L_800F3C18; } // 800F3C0C
  c->r[0]=0u+0x00000010u; // 800F3C10
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3C14
L_800F3C18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3C18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3C1C
  c->lr=c->r[0]; // 800F3C20
  c->r[1]=c->r[1]+0x00000010u; // 800F3C24
  return; // 800F3C28
}

// fn_800F3C2C
void f_800F3C2C(Ctx* __restrict c) {
  trace_call(0x800F3C2Cu);
  return; // 800F3C2C
}

// fn_800F3C30
void f_800F3C30(Ctx* __restrict c) {
  trace_call(0x800F3C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3C30
  c->r[0]=c->lr; // 800F3C34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3C38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3C3C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800F3C40
  cmps(c,0,(int32_t)c->r[30],0); // 800F3C44
  if (crb(c,2)) { goto L_800F3C8C; } // 800F3C48
  c->lr=0x800F3C50u; f_800F2E38(c); // 800F3C4C
  c->r[31]=c->r[3]|c->r[3]; // 800F3C50
  c->lr=0x800F3C58u; f_8005E1B0(c); // 800F3C54
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800F3C58
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3C5C
  c->r[5]=0u+0x800F0000u; // 800F3C60
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800F3C64
  c->r[4]=c->r[30]+c->r[4]; // 800F3C68
  c->r[5]=c->r[5]+0x00003CA0u; // 800F3C6C
  c->r[4]=c->r[4]+c->r[0]; // 800F3C70
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3C74
  c->r[0]=R32(c->r[30]+c->r[3]); // 800F3C78
  cmpu(c,0,c->r[0],0x00000010u); // 800F3C7C
  if (!crb(c,0)) { goto L_800F3C8C; } // 800F3C80
  c->r[0]=0u+0x00000010u; // 800F3C84
  W32(c->r[30]+c->r[3],c->r[0]); // 800F3C88
L_800F3C8C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3C90
  c->lr=c->r[0]; // 800F3C94
  c->r[1]=c->r[1]+0x00000010u; // 800F3C98
  return; // 800F3C9C
}

// fn_800F3CA0
void f_800F3CA0(Ctx* __restrict c) {
  trace_call(0x800F3CA0u);
  f_800F56A0(c); return; // 800F3CA0
}

// fn_800F3CA4
void f_800F3CA4(Ctx* __restrict c) {
  trace_call(0x800F3CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3CA4
  c->r[0]=c->lr; // 800F3CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3CB0
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3CB4
  cmps(c,0,(int32_t)c->r[31],0); // 800F3CB8
  if (crb(c,2)) { goto L_800F3D24; } // 800F3CBC
  c->lr=0x800F3CC4u; f_800F2E38(c); // 800F3CC0
  c->r[0]=R8(c->r[13]+0xFFFFBD20u); // 800F3CC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3CC8
  if (!crb(c,2)) { goto L_800F3CEC; } // 800F3CCC
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3CD0
  c->r[0]=0u+0x00000001u; // 800F3CD4
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3CD8
  c->r[4]=c->r[5]+0x00000001u; // 800F3CDC
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3CE0
  W32(c->r[13]+0xFFFFBD1Cu,c->r[5]); // 800F3CE4
  W8(c->r[13]+0xFFFFBD20u,c->r[0]); // 800F3CE8
L_800F3CEC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3CEC
  c->r[0]=R32(c->r[13]+0xFFFFBD1Cu); // 800F3CF0
  c->r[5]=0u+0x800F0000u; // 800F3CF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3CF8
  c->r[4]=c->r[31]+c->r[4]; // 800F3CFC
  c->r[5]=c->r[5]+0x00003D38u; // 800F3D00
  c->r[4]=c->r[4]+c->r[0]; // 800F3D04
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3D08
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3D0C
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3D10
  cmpu(c,0,c->r[0],0x00000010u); // 800F3D14
  if (!crb(c,0)) { goto L_800F3D24; } // 800F3D18
  c->r[0]=0u+0x00000010u; // 800F3D1C
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3D20
L_800F3D24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3D28
  c->lr=c->r[0]; // 800F3D2C
  c->r[1]=c->r[1]+0x00000010u; // 800F3D30
  return; // 800F3D34
}

// fn_800F3D38
void f_800F3D38(Ctx* __restrict c) {
  trace_call(0x800F3D38u);
  f_800F4F78(c); return; // 800F3D38
}

// fn_800F3D3C
void f_800F3D3C(Ctx* __restrict c) {
  trace_call(0x800F3D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3D3C
  c->r[0]=c->lr; // 800F3D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3D44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3D48
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3D4C
  cmps(c,0,(int32_t)c->r[31],0); // 800F3D50
  if (crb(c,2)) { goto L_800F3DBC; } // 800F3D54
  c->lr=0x800F3D5Cu; f_800F2E38(c); // 800F3D58
  c->r[0]=R8(c->r[13]+0xFFFFBCE0u); // 800F3D5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3D60
  if (!crb(c,2)) { goto L_800F3D84; } // 800F3D64
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3D68
  c->r[0]=0u+0x00000001u; // 800F3D6C
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3D70
  c->r[4]=c->r[5]+0x00000001u; // 800F3D74
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3D78
  W32(c->r[13]+0xFFFFBCDCu,c->r[5]); // 800F3D7C
  W8(c->r[13]+0xFFFFBCE0u,c->r[0]); // 800F3D80
L_800F3D84:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3D84
  c->r[0]=R32(c->r[13]+0xFFFFBCDCu); // 800F3D88
  c->r[5]=0u+0x800F0000u; // 800F3D8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3D90
  c->r[4]=c->r[31]+c->r[4]; // 800F3D94
  c->r[5]=c->r[5]+0x00003DD0u; // 800F3D98
  c->r[4]=c->r[4]+c->r[0]; // 800F3D9C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3DA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3DA4
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3DA8
  cmpu(c,0,c->r[0],0x00000010u); // 800F3DAC
  if (!crb(c,0)) { goto L_800F3DBC; } // 800F3DB0
  c->r[0]=0u+0x00000010u; // 800F3DB4
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3DB8
L_800F3DBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3DBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3DC0
  c->lr=c->r[0]; // 800F3DC4
  c->r[1]=c->r[1]+0x00000010u; // 800F3DC8
  return; // 800F3DCC
}

// fn_800F3DD0
void f_800F3DD0(Ctx* __restrict c) {
  trace_call(0x800F3DD0u);
  return; // 800F3DD0
}

// fn_800F3DD4
void f_800F3DD4(Ctx* __restrict c) {
  trace_call(0x800F3DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3DD4
  c->r[0]=c->lr; // 800F3DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3DE0
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800F3DE4
  cmps(c,0,(int32_t)c->r[31],0); // 800F3DE8
  if (crb(c,2)) { goto L_800F3E54; } // 800F3DEC
  c->lr=0x800F3DF4u; f_800F2E38(c); // 800F3DF0
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800F3DF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F3DF8
  if (!crb(c,2)) { goto L_800F3E1C; } // 800F3DFC
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800F3E00
  c->r[0]=0u+0x00000001u; // 800F3E04
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800F3E08
  c->r[4]=c->r[5]+0x00000001u; // 800F3E0C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800F3E10
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800F3E14
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800F3E18
L_800F3E1C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800F3E1C
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800F3E20
  c->r[5]=0u+0x800F0000u; // 800F3E24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F3E28
  c->r[4]=c->r[31]+c->r[4]; // 800F3E2C
  c->r[5]=c->r[5]+0x00003E68u; // 800F3E30
  c->r[4]=c->r[4]+c->r[0]; // 800F3E34
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F3E38
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F3E3C
  c->r[0]=R32(c->r[31]+c->r[3]); // 800F3E40
  cmpu(c,0,c->r[0],0x00000010u); // 800F3E44
  if (!crb(c,0)) { goto L_800F3E54; } // 800F3E48
  c->r[0]=0u+0x00000010u; // 800F3E4C
  W32(c->r[31]+c->r[3],c->r[0]); // 800F3E50
L_800F3E54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3E54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3E58
  c->lr=c->r[0]; // 800F3E5C
  c->r[1]=c->r[1]+0x00000010u; // 800F3E60
  return; // 800F3E64
}

// fn_800F3E68
void f_800F3E68(Ctx* __restrict c) {
  trace_call(0x800F3E68u);
  f_800F4DF8(c); return; // 800F3E68
}

// fn_800F3E6C
void f_800F3E6C(Ctx* __restrict c) {
  trace_call(0x800F3E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3E6C
  c->r[0]=c->lr; // 800F3E70
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F3E74
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3E78
  c->r[26]=c->r[3]|c->r[3]; // 800F3E7C
  c->r[25]=c->r[5]|c->r[5]; // 800F3E80
  c->r[31]=c->r[26]|c->r[26]; // 800F3E84
  c->r[30]=c->r[26]|c->r[26]; // 800F3E88
  c->r[27]=c->r[26]|c->r[26]; // 800F3E8C
  c->r[29]=c->r[26]|c->r[26]; // 800F3E90
  c->lr=0x800F3E98u; f_800F2E38(c); // 800F3E94
  c->r[4]=0u+0x806D0000u; // 800F3E98
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 800F3E9C
  c->r[0]=0u+0x00000000u; // 800F3EA0
  W32(c->r[26]+0x00000000u,c->r[3]); // 800F3EA4
  c->r[4]=c->r[4]+0x000038C0u; // 800F3EA8
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 800F3EAC
  W32(c->r[26]+0x00000004u,c->r[0]); // 800F3EB0
  W32(c->r[26]+0x00000008u,c->r[0]); // 800F3EB4
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800F3EB8
  W8(c->r[26]+0x00000010u,c->r[0]); // 800F3EBC
  W32(c->r[26]+0x00000014u,c->r[0]); // 800F3EC0
  W32(c->r[26]+0x00000018u,c->r[0]); // 800F3EC4
  W32(c->r[26]+0x00000020u,c->r[0]); // 800F3EC8
  W32(c->r[26]+0x00000024u,c->r[0]); // 800F3ECC
  if (crb(c,2)) { goto L_800F3ED8; } // 800F3ED0
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 800F3ED4
L_800F3ED8:;
  c->lr=0x800F3EDCu; f_800797AC(c); // 800F3ED8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3EDC
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800F3EE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F3EE4
  if (!crb(c,2)) { goto L_800F3EF4; } // 800F3EE8
  c->r[0]=0u+0x00000001u; // 800F3EEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F3EF0
L_800F3EF4:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F3EF4
  c->r[5]=0u+0x0000012Cu; // 800F3EF8
  c->r[4]=c->r[7]+0x00000001u; // 800F3EFC
  c->r[0]=divwu(c->r[4],c->r[5]); // 800F3F00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800F3F04
  c->r[6]=c->r[4]-c->r[0]; // 800F3F08
  goto L_800F3F58; // 800F3F0C
L_800F3F10:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800F3F10
  c->r[4]=c->r[3]+c->r[0]; // 800F3F14
  c->r[0]=R32(c->r[4]+0x00000008u); // 800F3F18
  cmps(c,0,(int32_t)c->r[0],0); // 800F3F1C
  if (!crb(c,2)) { goto L_800F3F48; } // 800F3F20
  W32(c->r[3]+0x00000004u,c->r[6]); // 800F3F24
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F3F28
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F3F2C
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 800F3F30
  c->r[4]=R32(c->r[3]+0x00000000u); // 800F3F34
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F3F38
  W32(c->r[1]+0x00000010u,c->r[4]); // 800F3F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F40
  goto L_800F3F74; // 800F3F44
L_800F3F48:;
  c->r[4]=c->r[6]+0x00000001u; // 800F3F48
  c->r[0]=divwu(c->r[4],c->r[5]); // 800F3F4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800F3F50
  c->r[6]=c->r[4]-c->r[0]; // 800F3F54
L_800F3F58:;
  cmpu(c,0,c->r[6],c->r[7]); // 800F3F58
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3F10; } // 800F3F5C
  c->r[0]=0u+0x00000000u; // 800F3F60
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F3F64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F3F68
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F3F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F70
L_800F3F74:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800F3F74
  c->r[24]=c->r[26]+0x00000028u; // 800F3F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3F7C
  c->r[3]=c->r[24]|c->r[24]; // 800F3F80
  W32(c->r[1]+0x00000018u,c->r[4]); // 800F3F84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F3F88
  W32(c->r[26]+0x00000020u,c->r[4]); // 800F3F8C
  W32(c->r[26]+0x00000024u,c->r[0]); // 800F3F90
  c->lr=0x800F3F98u; f_800506C0(c); // 800F3F94
  cmps(c,0,(int32_t)c->r[24],0); // 800F3F98
  c->r[3]=c->r[24]|c->r[24]; // 800F3F9C
  if (crb(c,2)) { goto L_800F3FA8; } // 800F3FA0
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800F3FA4
L_800F3FA8:;
  c->r[0]=0u+0x00000000u; // 800F3FA8
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800F3FAC
  c->r[0]=0u+0x00000001u; // 800F3FB0
  W32(c->r[24]+0x00000008u,c->r[3]); // 800F3FB4
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800F3FB8
  c->lr=0x800F3FC0u; f_800849B8(c); // 800F3FBC
  c->r[4]=c->r[3]|c->r[3]; // 800F3FC0
  c->r[5]=c->r[24]|c->r[24]; // 800F3FC4
  c->lr=0x800F3FCCu; f_802DDCA8(c); // 800F3FC8
  c->r[24]=c->r[26]+0x00000038u; // 800F3FCC
  c->r[3]=c->r[24]|c->r[24]; // 800F3FD0
  c->lr=0x800F3FD8u; f_800506C0(c); // 800F3FD4
  cmps(c,0,(int32_t)c->r[24],0); // 800F3FD8
  c->r[0]=c->r[24]|c->r[24]; // 800F3FDC
  if (crb(c,2)) { goto L_800F3FE8; } // 800F3FE0
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 800F3FE4
L_800F3FE8:;
  c->r[28]=c->r[26]+0x00000044u; // 800F3FE8
  W32(c->r[24]+0x00000008u,c->r[0]); // 800F3FEC
  c->r[3]=c->r[28]|c->r[28]; // 800F3FF0
  c->lr=0x800F3FF8u; f_800506C0(c); // 800F3FF4
  cmps(c,0,(int32_t)c->r[28],0); // 800F3FF8
  c->r[0]=c->r[28]|c->r[28]; // 800F3FFC
  if (crb(c,2)) { goto L_800F4008; } // 800F4000
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 800F4004
L_800F4008:;
  c->r[3]=0u+0x806F0000u; // 800F4008
  c->r[24]=0u+0x00000000u; // 800F400C
  c->r[3]=c->r[3]+0x00000E80u; // 800F4010
  W32(c->r[28]+0x00000008u,c->r[0]); // 800F4014
  W8(c->r[28]+0x0000000Cu,c->r[24]); // 800F4018
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800F401C
  W32(c->r[26]+0x00000058u,c->r[24]); // 800F4020
  W32(c->r[26]+0x00000064u,c->r[24]); // 800F4024
  c->lr=0x800F402Cu; f_8007BDCC(c); // 800F4028
  c->r[0]=c->r[13]+0xFFFF8114u; // 800F402C
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 800F4030
  W32(c->r[26]+0x000000A0u,c->r[0]); // 800F4034
  W32(c->r[26]+0x000000A4u,c->r[24]); // 800F4038
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800F403C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4040
  if (!crb(c,2)) { goto L_800F4064; } // 800F4044
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800F4048
  c->r[0]=0u+0x00000001u; // 800F404C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800F4050
  c->r[3]=c->r[4]+0x00000001u; // 800F4054
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800F4058
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800F405C
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800F4060
L_800F4064:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800F4064
  c->r[3]=c->r[13]+0xFFFF8110u; // 800F4068
  c->r[0]=0u+0x00000000u; // 800F406C
  W32(c->r[26]+0x000000A8u,c->r[4]); // 800F4070
  W32(c->r[26]+0x000000ACu,c->r[3]); // 800F4074
  W32(c->r[26]+0x000000B0u,c->r[0]); // 800F4078
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800F407C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4080
  if (!crb(c,2)) { goto L_800F40A4; } // 800F4084
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800F4088
  c->r[0]=0u+0x00000001u; // 800F408C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800F4090
  c->r[3]=c->r[4]+0x00000001u; // 800F4094
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800F4098
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800F409C
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800F40A0
L_800F40A4:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800F40A4
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800F40A8
  c->r[0]=0u+0x00000000u; // 800F40AC
  W32(c->r[26]+0x000000B4u,c->r[4]); // 800F40B0
  W32(c->r[26]+0x000000B8u,c->r[3]); // 800F40B4
  W32(c->r[26]+0x000000BCu,c->r[0]); // 800F40B8
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800F40BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F40C0
  if (!crb(c,2)) { goto L_800F40E4; } // 800F40C4
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800F40C8
  c->r[0]=0u+0x00000001u; // 800F40CC
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800F40D0
  c->r[3]=c->r[4]+0x00000001u; // 800F40D4
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800F40D8
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800F40DC
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800F40E0
L_800F40E4:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800F40E4
  c->r[3]=c->r[13]+0xFFFF8108u; // 800F40E8
  c->r[0]=0u+0x00000000u; // 800F40EC
  W32(c->r[26]+0x000000C0u,c->r[4]); // 800F40F0
  W32(c->r[26]+0x000000C4u,c->r[3]); // 800F40F4
  W32(c->r[26]+0x000000C8u,c->r[0]); // 800F40F8
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800F40FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4100
  if (!crb(c,2)) { goto L_800F4124; } // 800F4104
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800F4108
  c->r[0]=0u+0x00000001u; // 800F410C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800F4110
  c->r[3]=c->r[4]+0x00000001u; // 800F4114
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800F4118
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800F411C
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800F4120
L_800F4124:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800F4124
  c->r[0]=c->r[13]+0xFFFF8104u; // 800F4128
  c->r[24]=0u+0x00000000u; // 800F412C
  W32(c->r[26]+0x000000CCu,c->r[3]); // 800F4130
  c->r[3]=c->r[26]+0x000000D8u; // 800F4134
  W32(c->r[26]+0x000000D0u,c->r[0]); // 800F4138
  W32(c->r[26]+0x000000D4u,c->r[24]); // 800F413C
  c->lr=0x800F4144u; f_800506C0(c); // 800F4140
  c->r[4]=0u+0x806F0000u; // 800F4144
  c->r[3]=0u+0x00000006u; // 800F4148
  c->r[4]=c->r[4]+0x000007A0u; // 800F414C
  c->r[28]=c->r[26]+0x000000FCu; // 800F4150
  c->r[0]=c->r[4]+0x00000024u; // 800F4154
  W32(c->r[26]+0x000000E8u,c->r[3]); // 800F4158
  c->r[3]=c->r[28]+0x0000000Cu; // 800F415C
  W32(c->r[26]+0x000000ECu,c->r[24]); // 800F4160
  W32(c->r[26]+0x000000F8u,c->r[24]); // 800F4164
  W32(c->r[26]+0x000000FCu,c->r[4]); // 800F4168
  W32(c->r[26]+0x00000100u,c->r[0]); // 800F416C
  c->lr=0x800F4174u; f_800506C0(c); // 800F4170
  c->r[3]=c->r[28]+0x00000018u; // 800F4174
  c->lr=0x800F417Cu; f_800506C0(c); // 800F4178
  W32(c->r[28]+0x00000024u,c->r[24]); // 800F417C
  c->r[3]=c->r[28]+0x000000B0u; // 800F4180
  c->lr=0x800F4188u; f_800506C0(c); // 800F4184
  c->r[12]=R32(c->r[28]+0x00000000u); // 800F4188
  c->r[3]=c->r[28]|c->r[28]; // 800F418C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800F4190
  c->ctr=c->r[12]; // 800F4194
  if (true) { c->lr=0x800F419Cu; dispatch(c,c->ctr); } // 800F4198
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800F419C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F41A0
  if (!crb(c,2)) { goto L_800F41C0; } // 800F41A4
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800F41A8
  c->r[0]=0u+0x00000001u; // 800F41AC
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800F41B0
  c->r[3]=c->r[3]+0x00000001u; // 800F41B4
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800F41B8
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800F41BC
L_800F41C0:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800F41C0
  c->r[5]=0u+0x806F0000u; // 800F41C4
  c->r[5]=c->r[5]+0x000007F8u; // 800F41C8
  c->r[0]=0u+0x00000032u; // 800F41CC
  c->r[4]=c->r[5]+0x00000024u; // 800F41D0
  W32(c->r[28]+0x00000008u,c->r[3]); // 800F41D4
  c->r[6]=0u+0x00000000u; // 800F41D8
  c->r[3]=0u+0x00000000u; // 800F41DC
  W32(c->r[28]+0x00000000u,c->r[5]); // 800F41E0
  W32(c->r[28]+0x00000004u,c->r[4]); // 800F41E4
  c->ctr=c->r[0]; // 800F41E8
L_800F41EC:;
  c->r[4]=c->r[28]+c->r[3]; // 800F41EC
  c->r[3]=c->r[3]+0x00000004u; // 800F41F0
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800F41F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F41EC; } // 800F41F8
  c->r[3]=0u+0x806D0000u; // 800F41FC
  c->r[7]=0u+0x00000000u; // 800F4200
  c->r[3]=c->r[3]+0x00003868u; // 800F4204
  c->r[0]=0u+0x0000000Au; // 800F4208
  c->r[4]=c->r[3]+0x00000024u; // 800F420C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800F4210
  c->r[8]=0u+0x00000000u; // 800F4214
  c->r[3]=0u+0x00000000u; // 800F4218
  W32(c->r[28]+0x00000004u,c->r[4]); // 800F421C
  c->r[6]=0u+0xFFFFFFFFu; // 800F4220
  W32(c->r[26]+0x00000314u,c->r[7]); // 800F4224
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 800F4228
  W32(c->r[26]+0x00000054u,c->r[7]); // 800F422C
  W32(c->r[26]+0x00000310u,c->r[26]); // 800F4230
  c->ctr=c->r[0]; // 800F4234
L_800F4238:;
  c->r[5]=c->r[26]+c->r[3]; // 800F4238
  c->r[4]=c->r[26]+c->r[8]; // 800F423C
  W32(c->r[5]+0x00000068u,c->r[6]); // 800F4240
  c->r[8]=c->r[8]+0x00000001u; // 800F4244
  c->r[3]=c->r[3]+0x00000004u; // 800F4248
  W8(c->r[4]+0x00000090u,c->r[7]); // 800F424C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F4238; } // 800F4250
  c->r[24]=c->r[26]+0x00000318u; // 800F4254
  c->r[3]=c->r[24]|c->r[24]; // 800F4258
  c->lr=0x800F4260u; f_800506C0(c); // 800F425C
  cmps(c,0,(int32_t)c->r[24],0); // 800F4260
  c->r[3]=c->r[24]|c->r[24]; // 800F4264
  if (crb(c,2)) { goto L_800F4270; } // 800F4268
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 800F426C
L_800F4270:;
  c->r[29]=0u+0x00000001u; // 800F4270
  W32(c->r[24]+0x00000008u,c->r[3]); // 800F4274
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800F4278
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800F427C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4280
  if (!crb(c,2)) { goto L_800F42C4; } // 800F4284
  c->r[28]=0u+0x80750000u; // 800F4288
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800F428C
  c->lr=0x800F4294u; f_800506C0(c); // 800F4290
  c->r[6]=0u+0x806D0000u; // 800F4294
  c->r[4]=0u+0x80080000u; // 800F4298
  c->r[6]=c->r[6]+0x000038D8u; // 800F429C
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800F42A0
  c->r[0]=c->r[6]+0x00000008u; // 800F42A4
  c->r[5]=0u+0x80750000u; // 800F42A8
  W32(c->r[3]+0x00000010u,c->r[6]); // 800F42AC
  c->r[4]=c->r[4]+0xFFFF9844u; // 800F42B0
  c->r[5]=c->r[5]+0x00003B98u; // 800F42B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F42B8
  c->lr=0x800F42C0u; f_803A92B8(c); // 800F42BC
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800F42C0
L_800F42C4:;
  c->r[3]=0u+0x80750000u; // 800F42C4
  c->r[5]=c->r[24]|c->r[24]; // 800F42C8
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800F42CC
  c->r[4]=c->r[3]|c->r[3]; // 800F42D0
  c->lr=0x800F42D8u; f_802DDCA8(c); // 800F42D4
  c->r[3]=0u+0x806D0000u; // 800F42D8
  c->r[0]=0u+0x00000000u; // 800F42DC
  c->r[3]=c->r[3]+0xFFFFD974u; // 800F42E0
  c->r[5]=0u+0xFFFFFFFFu; // 800F42E4
  c->r[4]=0u+0x00000001u; // 800F42E8
  c->r[24]=c->r[26]+0x0000032Cu; // 800F42EC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800F42F0
  c->r[3]=c->r[24]|c->r[24]; // 800F42F4
  W32(c->r[26]+0x00000328u,c->r[5]); // 800F42F8
  W32(c->r[26]+0x000000ECu,c->r[4]); // 800F42FC
  W32(c->r[26]+0x00000054u,c->r[0]); // 800F4300
  W32(c->r[26]+0x00000314u,c->r[0]); // 800F4304
  c->lr=0x800F430Cu; f_800506C0(c); // 800F4308
  cmps(c,0,(int32_t)c->r[24],0); // 800F430C
  c->r[3]=c->r[24]|c->r[24]; // 800F4310
  if (crb(c,2)) { goto L_800F431C; } // 800F4314
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 800F4318
L_800F431C:;
  c->r[0]=0u+0x00000000u; // 800F431C
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800F4320
  c->r[0]=0u+0x00000001u; // 800F4324
  W32(c->r[24]+0x00000008u,c->r[3]); // 800F4328
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800F432C
  c->lr=0x800F4334u; f_8008570C(c); // 800F4330
  c->r[4]=c->r[3]|c->r[3]; // 800F4334
  c->r[5]=c->r[24]|c->r[24]; // 800F4338
  c->lr=0x800F4340u; f_802DDCA8(c); // 800F433C
  c->r[24]=c->r[26]+0x0000033Cu; // 800F4340
  c->r[3]=c->r[24]|c->r[24]; // 800F4344
  c->lr=0x800F434Cu; f_800506C0(c); // 800F4348
  cmps(c,0,(int32_t)c->r[24],0); // 800F434C
  c->r[3]=c->r[24]|c->r[24]; // 800F4350
  if (crb(c,2)) { goto L_800F435C; } // 800F4354
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 800F4358
L_800F435C:;
  c->r[28]=0u+0x00000001u; // 800F435C
  W32(c->r[24]+0x00000008u,c->r[3]); // 800F4360
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 800F4364
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800F4368
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F436C
  if (!crb(c,2)) { goto L_800F43B0; } // 800F4370
  c->r[27]=0u+0x80750000u; // 800F4374
  c->r[3]=c->r[27]+0xFFFF8158u; // 800F4378
  c->lr=0x800F4380u; f_800506C0(c); // 800F437C
  c->r[6]=0u+0x806D0000u; // 800F4380
  c->r[4]=0u+0x80080000u; // 800F4384
  c->r[6]=c->r[6]+0x000038F0u; // 800F4388
  c->r[3]=c->r[27]+0xFFFF8158u; // 800F438C
  c->r[0]=c->r[6]+0x00000008u; // 800F4390
  c->r[5]=0u+0x80750000u; // 800F4394
  W32(c->r[3]+0x00000010u,c->r[6]); // 800F4398
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800F439C
  c->r[5]=c->r[5]+0x00003B8Cu; // 800F43A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F43A4
  c->lr=0x800F43ACu; f_803A92B8(c); // 800F43A8
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 800F43AC
L_800F43B0:;
  c->r[3]=0u+0x80750000u; // 800F43B0
  c->r[5]=c->r[24]|c->r[24]; // 800F43B4
  c->r[3]=c->r[3]+0xFFFF8158u; // 800F43B8
  c->r[4]=c->r[3]|c->r[3]; // 800F43BC
  c->lr=0x800F43C4u; f_802DDCA8(c); // 800F43C0
  c->r[3]=0u+0x806D0000u; // 800F43C4
  W32(c->r[26]+0x00000054u,c->r[25]); // 800F43C8
  c->r[3]=c->r[3]+0x00004AE8u; // 800F43CC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800F43D0
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800F43D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F43D8
  if (!crb(c,2)) { goto L_800F43F8; } // 800F43DC
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800F43E0
  c->r[0]=0u+0x00000001u; // 800F43E4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800F43E8
  c->r[3]=c->r[3]+0x00000001u; // 800F43EC
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800F43F0
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800F43F4
L_800F43F8:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800F43F8
  W32(c->r[26]+0x00000328u,c->r[0]); // 800F43FC
  c->r[0]=R8(c->r[13]+0xFFFFC514u); // 800F4400
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4404
  if (!crb(c,2)) { goto L_800F4424; } // 800F4408
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800F440C
  c->r[0]=0u+0x00000001u; // 800F4410
  W32(c->r[13]+0xFFFFC510u,c->r[3]); // 800F4414
  c->r[3]=c->r[3]+0x00000001u; // 800F4418
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800F441C
  W8(c->r[13]+0xFFFFC514u,c->r[0]); // 800F4420
L_800F4424:;
  c->r[0]=R32(c->r[13]+0xFFFFC510u); // 800F4424
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 800F4428
  c->r[0]=R8(c->r[13]+0xFFFFC50Cu); // 800F442C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4430
  if (!crb(c,2)) { goto L_800F4450; } // 800F4434
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800F4438
  c->r[0]=0u+0x00000001u; // 800F443C
  W32(c->r[13]+0xFFFFC508u,c->r[3]); // 800F4440
  c->r[3]=c->r[3]+0x00000001u; // 800F4444
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800F4448
  W8(c->r[13]+0xFFFFC50Cu,c->r[0]); // 800F444C
L_800F4450:;
  c->r[0]=R32(c->r[13]+0xFFFFC508u); // 800F4450
  c->r[5]=0u+0x806D0000u; // 800F4454
  c->r[5]=c->r[5]+0xFFFFE468u; // 800F4458
  W32(c->r[26]+0x00000350u,c->r[0]); // 800F445C
  c->r[3]=c->r[26]+0x000003B0u; // 800F4460
  c->r[4]=0u+0x00000000u; // 800F4464
  W32(c->r[26]+0x00000400u,c->r[5]); // 800F4468
  c->r[5]=0u+0x00000050u; // 800F446C
  c->lr=0x800F4474u; f_800043EC(c); // 800F4470
  c->r[4]=0u+0x806D0000u; // 800F4474
  c->r[3]=c->r[26]+0x00000450u; // 800F4478
  c->r[4]=c->r[4]+0xFFFFE170u; // 800F447C
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 800F4480
  c->r[0]=c->r[4]+0x00000044u; // 800F4484
  W32(c->r[26]+0x00000400u,c->r[0]); // 800F4488
  c->lr=0x800F4490u; f_80062540(c); // 800F448C
  c->r[3]=c->r[26]+0x000004B8u; // 800F4490
  c->r[4]=0u+0x00000000u; // 800F4494
  c->r[5]=0u+0x00000008u; // 800F4498
  c->lr=0x800F44A0u; f_800043EC(c); // 800F449C
  c->r[3]=c->r[26]+0x000004C4u; // 800F44A0
  c->lr=0x800F44A8u; f_80062540(c); // 800F44A4
  c->r[3]=c->r[26]+0x0000052Cu; // 800F44A8
  c->r[4]=0u+0x00000000u; // 800F44AC
  c->r[5]=0u+0x00000008u; // 800F44B0
  c->lr=0x800F44B8u; f_800043EC(c); // 800F44B4
  c->r[3]=c->r[26]+0x00000538u; // 800F44B8
  c->r[4]=0u+0x00000000u; // 800F44BC
  c->r[5]=0u+0x00000008u; // 800F44C0
  c->lr=0x800F44C8u; f_800043EC(c); // 800F44C4
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800F44C8
  cmps(c,0,(int32_t)c->r[24],0); // 800F44CC
  if (crb(c,2)) { goto L_800F4514; } // 800F44D0
  c->lr=0x800F44D8u; f_800F2E38(c); // 800F44D4
  c->r[25]=c->r[3]|c->r[3]; // 800F44D8
  c->lr=0x800F44E0u; f_8007BDCC(c); // 800F44DC
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)80); // 800F44E0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F44E4
  c->r[5]=0u+0x800F0000u; // 800F44E8
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800F44EC
  c->r[4]=c->r[24]+c->r[4]; // 800F44F0
  c->r[5]=c->r[5]+0x00004A90u; // 800F44F4
  c->r[4]=c->r[4]+c->r[0]; // 800F44F8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F44FC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800F4500
  cmpu(c,0,c->r[0],0x0000000Cu); // 800F4504
  if (!crb(c,0)) { goto L_800F4514; } // 800F4508
  c->r[0]=0u+0x0000000Cu; // 800F450C
  W32(c->r[24]+c->r[3],c->r[0]); // 800F4510
L_800F4514:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F4514
  cmps(c,0,(int32_t)c->r[27],0); // 800F4518
  if (crb(c,2)) { goto L_800F4584; } // 800F451C
  c->lr=0x800F4524u; f_800F2E38(c); // 800F4520
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800F4524
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4528
  if (!crb(c,2)) { goto L_800F454C; } // 800F452C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F4530
  c->r[0]=0u+0x00000001u; // 800F4534
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F4538
  c->r[4]=c->r[5]+0x00000001u; // 800F453C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F4540
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800F4544
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800F4548
L_800F454C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F454C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800F4550
  c->r[5]=0u+0x800F0000u; // 800F4554
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4558
  c->r[4]=c->r[27]+c->r[4]; // 800F455C
  c->r[5]=c->r[5]+0x00004A8Cu; // 800F4560
  c->r[4]=c->r[4]+c->r[0]; // 800F4564
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F4568
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F456C
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F4570
  cmpu(c,0,c->r[0],0x00000018u); // 800F4574
  if (!crb(c,0)) { goto L_800F4584; } // 800F4578
  c->r[0]=0u+0x00000018u; // 800F457C
  W32(c->r[27]+c->r[3],c->r[0]); // 800F4580
L_800F4584:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800F4584
  cmps(c,0,(int32_t)c->r[24],0); // 800F4588
  if (crb(c,2)) { goto L_800F45D0; } // 800F458C
  c->lr=0x800F4594u; f_800F2E38(c); // 800F4590
  c->r[25]=c->r[3]|c->r[3]; // 800F4594
  c->lr=0x800F459Cu; f_80076C4C(c); // 800F4598
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)80); // 800F459C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F45A0
  c->r[5]=0u+0x800F0000u; // 800F45A4
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800F45A8
  c->r[4]=c->r[24]+c->r[4]; // 800F45AC
  c->r[5]=c->r[5]+0x00004A88u; // 800F45B0
  c->r[4]=c->r[4]+c->r[0]; // 800F45B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F45B8
  c->r[0]=R32(c->r[24]+c->r[3]); // 800F45BC
  cmpu(c,0,c->r[0],0x0000006Cu); // 800F45C0
  if (!crb(c,0)) { goto L_800F45D0; } // 800F45C4
  c->r[0]=0u+0x0000006Cu; // 800F45C8
  W32(c->r[24]+c->r[3],c->r[0]); // 800F45CC
L_800F45D0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800F45D0
  cmps(c,0,(int32_t)c->r[24],0); // 800F45D4
  if (crb(c,2)) { goto L_800F461C; } // 800F45D8
  c->lr=0x800F45E0u; f_800F2E38(c); // 800F45DC
  c->r[25]=c->r[3]|c->r[3]; // 800F45E0
  c->lr=0x800F45E8u; f_800F4A58(c); // 800F45E4
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)80); // 800F45E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F45EC
  c->r[5]=0u+0x800F0000u; // 800F45F0
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800F45F4
  c->r[4]=c->r[24]+c->r[4]; // 800F45F8
  c->r[5]=c->r[5]+0x00004A54u; // 800F45FC
  c->r[4]=c->r[4]+c->r[0]; // 800F4600
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F4604
  c->r[0]=R32(c->r[24]+c->r[3]); // 800F4608
  cmpu(c,0,c->r[0],0x0000002Cu); // 800F460C
  if (!crb(c,0)) { goto L_800F461C; } // 800F4610
  c->r[0]=0u+0x0000002Cu; // 800F4614
  W32(c->r[24]+c->r[3],c->r[0]); // 800F4618
L_800F461C:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F461C
  cmps(c,0,(int32_t)c->r[27],0); // 800F4620
  if (crb(c,2)) { goto L_800F468C; } // 800F4624
  c->lr=0x800F462Cu; f_800F2E38(c); // 800F4628
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800F462C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4630
  if (!crb(c,2)) { goto L_800F4654; } // 800F4634
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F4638
  c->r[0]=0u+0x00000001u; // 800F463C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F4640
  c->r[4]=c->r[5]+0x00000001u; // 800F4644
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F4648
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800F464C
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800F4650
L_800F4654:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F4654
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800F4658
  c->r[5]=0u+0x800F0000u; // 800F465C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4660
  c->r[4]=c->r[27]+c->r[4]; // 800F4664
  c->r[5]=c->r[5]+0x00004A50u; // 800F4668
  c->r[4]=c->r[4]+c->r[0]; // 800F466C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F4670
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F4674
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F4678
  cmpu(c,0,c->r[0],0x00000010u); // 800F467C
  if (!crb(c,0)) { goto L_800F468C; } // 800F4680
  c->r[0]=0u+0x00000010u; // 800F4684
  W32(c->r[27]+c->r[3],c->r[0]); // 800F4688
L_800F468C:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F468C
  cmps(c,0,(int32_t)c->r[27],0); // 800F4690
  if (crb(c,2)) { goto L_800F46FC; } // 800F4694
  c->lr=0x800F469Cu; f_800F2E38(c); // 800F4698
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800F469C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F46A0
  if (!crb(c,2)) { goto L_800F46C4; } // 800F46A4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F46A8
  c->r[0]=0u+0x00000001u; // 800F46AC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F46B0
  c->r[4]=c->r[5]+0x00000001u; // 800F46B4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F46B8
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800F46BC
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800F46C0
L_800F46C4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F46C4
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800F46C8
  c->r[5]=0u+0x800F0000u; // 800F46CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F46D0
  c->r[4]=c->r[27]+c->r[4]; // 800F46D4
  c->r[5]=c->r[5]+0x00004A4Cu; // 800F46D8
  c->r[4]=c->r[4]+c->r[0]; // 800F46DC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F46E0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F46E4
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F46E8
  cmpu(c,0,c->r[0],0x0000005Cu); // 800F46EC
  if (!crb(c,0)) { goto L_800F46FC; } // 800F46F0
  c->r[0]=0u+0x0000005Cu; // 800F46F4
  W32(c->r[27]+c->r[3],c->r[0]); // 800F46F8
L_800F46FC:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F46FC
  cmps(c,0,(int32_t)c->r[27],0); // 800F4700
  if (crb(c,2)) { goto L_800F476C; } // 800F4704
  c->lr=0x800F470Cu; f_800F2E38(c); // 800F4708
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800F470C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4710
  if (!crb(c,2)) { goto L_800F4734; } // 800F4714
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F4718
  c->r[0]=0u+0x00000001u; // 800F471C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F4720
  c->r[4]=c->r[5]+0x00000001u; // 800F4724
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F4728
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800F472C
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800F4730
L_800F4734:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F4734
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800F4738
  c->r[5]=0u+0x800F0000u; // 800F473C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4740
  c->r[4]=c->r[27]+c->r[4]; // 800F4744
  c->r[5]=c->r[5]+0x00004A48u; // 800F4748
  c->r[4]=c->r[4]+c->r[0]; // 800F474C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F4750
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F4754
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F4758
  cmpu(c,0,c->r[0],0x0000005Cu); // 800F475C
  if (!crb(c,0)) { goto L_800F476C; } // 800F4760
  c->r[0]=0u+0x0000005Cu; // 800F4764
  W32(c->r[27]+c->r[3],c->r[0]); // 800F4768
L_800F476C:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F476C
  cmps(c,0,(int32_t)c->r[27],0); // 800F4770
  if (crb(c,2)) { goto L_800F47DC; } // 800F4774
  c->lr=0x800F477Cu; f_800F2E38(c); // 800F4778
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800F477C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4780
  if (!crb(c,2)) { goto L_800F47A4; } // 800F4784
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F4788
  c->r[0]=0u+0x00000001u; // 800F478C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F4790
  c->r[4]=c->r[5]+0x00000001u; // 800F4794
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F4798
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800F479C
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800F47A0
L_800F47A4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F47A4
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800F47A8
  c->r[5]=0u+0x800F0000u; // 800F47AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F47B0
  c->r[4]=c->r[27]+c->r[4]; // 800F47B4
  c->r[5]=c->r[5]+0x00004A44u; // 800F47B8
  c->r[4]=c->r[4]+c->r[0]; // 800F47BC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F47C0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F47C4
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F47C8
  cmpu(c,0,c->r[0],0x0000005Cu); // 800F47CC
  if (!crb(c,0)) { goto L_800F47DC; } // 800F47D0
  c->r[0]=0u+0x0000005Cu; // 800F47D4
  W32(c->r[27]+c->r[3],c->r[0]); // 800F47D8
L_800F47DC:;
  c->r[27]=R32(c->r[13]+0xFFFFDBDCu); // 800F47DC
  cmps(c,0,(int32_t)c->r[27],0); // 800F47E0
  if (crb(c,2)) { goto L_800F484C; } // 800F47E4
  c->lr=0x800F47ECu; f_800F2E38(c); // 800F47E8
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800F47EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F47F0
  if (!crb(c,2)) { goto L_800F4814; } // 800F47F4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800F47F8
  c->r[0]=0u+0x00000001u; // 800F47FC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800F4800
  c->r[4]=c->r[5]+0x00000001u; // 800F4804
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800F4808
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800F480C
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800F4810
L_800F4814:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800F4814
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800F4818
  c->r[5]=0u+0x800F0000u; // 800F481C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F4820
  c->r[4]=c->r[27]+c->r[4]; // 800F4824
  c->r[5]=c->r[5]+0x00004A40u; // 800F4828
  c->r[4]=c->r[4]+c->r[0]; // 800F482C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F4830
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800F4834
  c->r[0]=R32(c->r[27]+c->r[3]); // 800F4838
  cmpu(c,0,c->r[0],0x0000005Cu); // 800F483C
  if (!crb(c,0)) { goto L_800F484C; } // 800F4840
  c->r[0]=0u+0x0000005Cu; // 800F4844
  W32(c->r[27]+c->r[3],c->r[0]); // 800F4848
L_800F484C:;
  c->r[3]=c->r[26]|c->r[26]; // 800F484C
  c->lr=0x800F4854u; f_8005BBF0(c); // 800F4850
  c->r[24]=c->r[26]+0x000005C0u; // 800F4854
  c->r[3]=c->r[24]|c->r[24]; // 800F4858
  c->lr=0x800F4860u; f_800506C0(c); // 800F485C
  cmps(c,0,(int32_t)c->r[24],0); // 800F4860
  c->r[3]=c->r[24]|c->r[24]; // 800F4864
  if (crb(c,2)) { goto L_800F4870; } // 800F4868
  c->r[3]=c->r[24]+0xFFFFFA40u; // 800F486C
L_800F4870:;
  c->r[27]=0u+0x00000001u; // 800F4870
  W32(c->r[24]+0x00000008u,c->r[3]); // 800F4874
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 800F4878
  c->r[0]=R8(c->r[13]+0xFFFFBBA8u); // 800F487C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4880
  if (!crb(c,2)) { goto L_800F48C4; } // 800F4884
  c->r[25]=0u+0x80730000u; // 800F4888
  c->r[3]=c->r[25]+0x00007394u; // 800F488C
  c->lr=0x800F4894u; f_800506C0(c); // 800F4890
  c->r[6]=0u+0x806D0000u; // 800F4894
  c->r[4]=0u+0x80050000u; // 800F4898
  c->r[6]=c->r[6]+0xFFFFC8E0u; // 800F489C
  c->r[3]=c->r[25]+0x00007394u; // 800F48A0
  c->r[0]=c->r[6]+0x00000008u; // 800F48A4
  c->r[5]=0u+0x80750000u; // 800F48A8
  W32(c->r[3]+0x00000010u,c->r[6]); // 800F48AC
  c->r[4]=c->r[4]+0xFFFFD018u; // 800F48B0
  c->r[5]=c->r[5]+0x00003B80u; // 800F48B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F48B8
  c->lr=0x800F48C0u; f_803A92B8(c); // 800F48BC
  W8(c->r[13]+0xFFFFBBA8u,c->r[27]); // 800F48C0
L_800F48C4:;
  c->r[3]=0u+0x80730000u; // 800F48C4
  c->r[5]=c->r[24]|c->r[24]; // 800F48C8
  c->r[3]=c->r[3]+0x00007394u; // 800F48CC
  c->r[4]=c->r[3]|c->r[3]; // 800F48D0
  c->lr=0x800F48D8u; f_802DDCA8(c); // 800F48D4
  c->r[0]=R8(c->r[26]+0x00000338u); // 800F48D8
  c->r[3]=0u+0x806E0000u; // 800F48DC
  c->r[3]=c->r[3]+0xFFFF87E0u; // 800F48E0
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800F48E4
  cmps(c,0,(int32_t)c->r[0],0); // 800F48E8
  c->r[0]=c->r[3]+0x00000044u; // 800F48EC
  W32(c->r[26]+0x00000400u,c->r[0]); // 800F48F0
  if (crb(c,2)) { goto L_800F490C; } // 800F48F4
  c->r[0]=0u+0x00000000u; // 800F48F8
  W8(c->r[26]+0x00000338u,c->r[0]); // 800F48FC
  c->lr=0x800F4904u; f_8008570C(c); // 800F4900
  c->r[4]=c->r[26]+0x0000032Cu; // 800F4904
  c->lr=0x800F490Cu; f_802DDD08(c); // 800F4908
L_800F490C:;
  c->r[4]=0u+0x806E0000u; // 800F490C
  c->r[3]=c->r[26]+0x000005D0u; // 800F4910
  c->r[4]=c->r[4]+0xFFFF8A00u; // 800F4914
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 800F4918
  c->r[0]=c->r[4]+0x00000044u; // 800F491C
  W32(c->r[26]+0x00000400u,c->r[0]); // 800F4920
  c->lr=0x800F4928u; f_802EE7E4(c); // 800F4924
  c->r[4]=0u+0x00000000u; // 800F4928
  c->r[0]=0u+0xFFFFFFFFu; // 800F492C
  W8(c->r[26]+0x000006A8u,c->r[4]); // 800F4930
  c->r[3]=c->r[26]+0x00000824u; // 800F4934
  W32(c->r[26]+0x000006ACu,c->r[0]); // 800F4938
  W32(c->r[26]+0x000006B0u,c->r[0]); // 800F493C
  W32(c->r[26]+0x000007F0u,c->r[4]); // 800F4940
  W32(c->r[26]+0x000007F4u,c->r[4]); // 800F4944
  c->lr=0x800F494Cu; f_803209E8(c); // 800F4948
  c->r[3]=c->r[26]|c->r[26]; // 800F494C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F4950
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F4954
  c->lr=c->r[0]; // 800F4958
  c->r[1]=c->r[1]+0x00000040u; // 800F495C
  return; // 800F4960
}

// dtor_800F4964
void f_800F4964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4964
  c->r[0]=c->lr; // 800F4968
  cmps(c,0,(int32_t)c->r[3],0); // 800F496C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4970
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F4974
  c->r[30]=c->r[3]|c->r[3]; // 800F4978
  c->r[31]=c->r[4]|c->r[4]; // 800F497C
  if (crb(c,2)) { goto L_800F49AC; } // 800F4980
  c->r[4]=0u+0x00000000u; // 800F4984
  c->r[3]=c->r[3]+0x000005C0u; // 800F4988
  c->lr=0x800F4990u; f_800F49C4(c); // 800F498C
  c->r[3]=c->r[30]|c->r[30]; // 800F4990
  c->r[4]=0u+0x00000000u; // 800F4994
  c->lr=0x800F499Cu; f_8005BD00(c); // 800F4998
  cmps(c,0,(int32_t)c->r[31],0); // 800F499C
  if (!crb(c,1)) { goto L_800F49AC; } // 800F49A0
  c->r[3]=c->r[30]|c->r[30]; // 800F49A4
  c->lr=0x800F49ACu; f_8005328C(c); // 800F49A8
L_800F49AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F49AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F49B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F49B4
  c->lr=c->r[0]; // 800F49B8
  c->r[1]=c->r[1]+0x00000010u; // 800F49BC
  return; // 800F49C0
}

// dtor_800F49C4
void f_800F49C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F49C4
  c->r[0]=c->lr; // 800F49C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F49CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F49D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F49D4
  c->r[31]=c->r[3]|c->r[3]; // 800F49D8
  if (crb(c,2)) { goto L_800F49EC; } // 800F49DC
  if (crb(c,2)) { goto L_800F49EC; } // 800F49E0
  c->r[4]=0u+0x00000000u; // 800F49E4
  c->lr=0x800F49ECu; f_800455D8(c); // 800F49E8
L_800F49EC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F49EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F49F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F49F4
  c->lr=c->r[0]; // 800F49F8
  c->r[1]=c->r[1]+0x00000010u; // 800F49FC
  return; // 800F4A00
}

// dtor_800F4A04
void f_800F4A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4A04
  c->r[0]=c->lr; // 800F4A08
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4A14
  c->r[31]=c->r[3]|c->r[3]; // 800F4A18
  if (crb(c,2)) { goto L_800F4A28; } // 800F4A1C
  c->r[4]=0u+0x00000000u; // 800F4A20
  c->lr=0x800F4A28u; f_800455D8(c); // 800F4A24
L_800F4A28:;
  c->r[3]=c->r[31]|c->r[31]; // 800F4A28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4A2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4A30
  c->lr=c->r[0]; // 800F4A34
  c->r[1]=c->r[1]+0x00000010u; // 800F4A38
  return; // 800F4A3C
}

// fn_800F4A40
void f_800F4A40(Ctx* __restrict c) {
  trace_call(0x800F4A40u);
  f_8005E338(c); return; // 800F4A40
}

// fn_800F4A44
void f_800F4A44(Ctx* __restrict c) {
  trace_call(0x800F4A44u);
  f_8005E324(c); return; // 800F4A44
}

// fn_800F4A48
void f_800F4A48(Ctx* __restrict c) {
  trace_call(0x800F4A48u);
  f_8005E310(c); return; // 800F4A48
}

// fn_800F4A4C
void f_800F4A4C(Ctx* __restrict c) {
  trace_call(0x800F4A4Cu);
  f_8005E2FC(c); return; // 800F4A4C
}

// fn_800F4A50
void f_800F4A50(Ctx* __restrict c) {
  trace_call(0x800F4A50u);
  f_8005E34C(c); return; // 800F4A50
}

// fn_800F4A54
void f_800F4A54(Ctx* __restrict c) {
  trace_call(0x800F4A54u);
  f_8005E360(c); return; // 800F4A54
}

// fn_800F4A58
void f_800F4A58(Ctx* __restrict c) {
  trace_call(0x800F4A58u);
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800F4A58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4A5C
  if (!crb(c,2)) { goto L_800F4A80; } // 800F4A60
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800F4A64
  c->r[0]=0u+0x00000001u; // 800F4A68
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800F4A6C
  c->r[3]=c->r[4]+0x00000001u; // 800F4A70
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800F4A74
  W32(c->r[13]+0xFFFFBD34u,c->r[4]); // 800F4A78
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800F4A7C
L_800F4A80:;
  c->r[3]=R32(c->r[13]+0xFFFFBD34u); // 800F4A80
  return; // 800F4A84
}

// fn_800F4A88
void f_800F4A88(Ctx* __restrict c) {
  trace_call(0x800F4A88u);
  f_8005D47C(c); return; // 800F4A88
}

// fn_800F4A8C
void f_800F4A8C(Ctx* __restrict c) {
  trace_call(0x800F4A8Cu);
  f_8005D468(c); return; // 800F4A8C
}

// fn_800F4A90
void f_800F4A90(Ctx* __restrict c) {
  trace_call(0x800F4A90u);
  f_8005BEDC(c); return; // 800F4A90
}

// fn_800F4A94
void f_800F4A94(Ctx* __restrict c) {
  trace_call(0x800F4A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4A94
  c->r[0]=c->lr; // 800F4A98
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4AA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F4AA4
  c->r[29]=c->r[3]|c->r[3]; // 800F4AA8
  c->r[30]=c->r[4]|c->r[4]; // 800F4AAC
  if (crb(c,2)) { goto L_800F4AF0; } // 800F4AB0
  c->r[4]=0u+0x806E0000u; // 800F4AB4
  c->r[31]=0u+0x00000000u; // 800F4AB8
  c->r[4]=c->r[4]+0xFFFF85F0u; // 800F4ABC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800F4AC0
  c->r[0]=c->r[4]+0x00000044u; // 800F4AC4
  W32(c->r[3]+0x00000400u,c->r[0]); // 800F4AC8
  c->lr=0x800F4AD0u; f_80049CC8(c); // 800F4ACC
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 800F4AD0
  c->r[3]=c->r[29]|c->r[29]; // 800F4AD4
  c->r[4]=0u+0x00000000u; // 800F4AD8
  c->lr=0x800F4AE0u; f_800F9E18(c); // 800F4ADC
  cmps(c,0,(int32_t)c->r[30],0); // 800F4AE0
  if (!crb(c,1)) { goto L_800F4AF0; } // 800F4AE4
  c->r[3]=c->r[29]|c->r[29]; // 800F4AE8
  c->lr=0x800F4AF0u; f_8005328C(c); // 800F4AEC
L_800F4AF0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F4AF0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F4AF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4AF8
  c->lr=c->r[0]; // 800F4AFC
  c->r[1]=c->r[1]+0x00000020u; // 800F4B00
  return; // 800F4B04
}

// fn_800F4B08
void f_800F4B08(Ctx* __restrict c) {
  trace_call(0x800F4B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B08
  c->r[0]=c->lr; // 800F4B0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F4B10
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F4B14
  c->r[31]=c->r[3]|c->r[3]; // 800F4B18
  c->r[3]=c->r[1]+0x00000020u; // 800F4B1C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800F4B20
  c->r[4]=c->r[31]|c->r[31]; // 800F4B24
  c->r[12]=R32(c->r[12]+0x00000134u); // 800F4B28
  c->ctr=c->r[12]; // 800F4B2C
  if (true) { c->lr=0x800F4B34u; dispatch(c,c->ctr); } // 800F4B30
  c->r[3]=c->r[1]+0x00000014u; // 800F4B34
  c->r[4]=c->r[31]+0x00000878u; // 800F4B38
  c->r[5]=c->r[31]+0x0000086Cu; // 800F4B3C
  c->lr=0x800F4B44u; f_8005FC60(c); // 800F4B40
  c->r[3]=c->r[1]+0x00000008u; // 800F4B44
  c->r[4]=c->r[1]+0x00000020u; // 800F4B48
  c->r[5]=c->r[31]+0x0000086Cu; // 800F4B4C
  c->lr=0x800F4B54u; f_8005FC60(c); // 800F4B50
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4B54
  c->r[3]=c->r[1]+0x00000014u; // 800F4B58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800F4B5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F4B60
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800F4B64
  c->lr=0x800F4B6Cu; f_80084FAC(c); // 800F4B68
  c->r[4]=c->r[1]+0x00000014u; // 800F4B6C
  c->r[3]=c->r[1]+0x00000008u; // 800F4B70
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 800F4B74
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 800F4B78
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800F4B7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4B80
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800F4B84
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4B88
  {double t0=S(std::fma(c->f[2],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[0],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 800F4B8C
  {uint32_t ea=c->r[2]+0xFFFFA784u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4B90
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800F4B94
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800F4B98
  fcmp(c,0,c->f[1],c->f[0]); // 800F4B9C
  c->r[3]=c->cr; // 800F4BA0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F4BA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F4BA8
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 800F4BAC
  c->lr=c->r[0]; // 800F4BB0
  c->r[1]=c->r[1]+0x00000040u; // 800F4BB4
  return; // 800F4BB8
}

// fn_800F4BBC
void f_800F4BBC(Ctx* __restrict c) {
  trace_call(0x800F4BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4BBC
  c->r[0]=c->lr; // 800F4BC0
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800F4BC4
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800F4BC8
  c->r[31]=c->r[4]|c->r[4]; // 800F4BCC
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800F4BD0
  c->r[30]=c->r[3]|c->r[3]; // 800F4BD4
  c->r[0]=R8(c->r[4]+0x00000898u); // 800F4BD8
  cmps(c,0,(int32_t)c->r[0],0); // 800F4BDC
  if (crb(c,2)) { goto L_800F4C0C; } // 800F4BE0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800F4BE4
  c->r[3]=c->r[31]|c->r[31]; // 800F4BE8
  c->r[4]=c->r[1]+0x00000038u; // 800F4BEC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800F4BF0
  c->ctr=c->r[12]; // 800F4BF4
  if (true) { c->lr=0x800F4BFCu; dispatch(c,c->ctr); } // 800F4BF8
  c->r[4]=c->r[3]|c->r[3]; // 800F4BFC
  c->r[3]=c->r[30]|c->r[30]; // 800F4C00
  c->lr=0x800F4C08u; f_80060878(c); // 800F4C04
  goto L_800F4CAC; // 800F4C08
L_800F4C0C:;
  c->r[0]=R32(c->r[4]+0x0000089Cu); // 800F4C0C
  cmps(c,0,(int32_t)c->r[0],1); // 800F4C10
  if (!crb(c,2)) { goto L_800F4CA0; } // 800F4C14
  {uint32_t ea=c->r[4]+0x000008A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4C18
  c->r[3]=c->r[1]+0x00000098u; // 800F4C1C
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4C20
  {uint32_t ea=c->r[4]+0x000008A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4C24
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800F4C28
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F4C2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800F4C30
  c->lr=0x800F4C38u; f_804E18A0(c); // 800F4C34
  c->r[3]=c->r[1]+0x00000068u; // 800F4C38
  c->r[4]=c->r[31]+0x000001B8u; // 800F4C3C
  c->r[5]=c->r[1]+0x00000098u; // 800F4C40
  c->lr=0x800F4C48u; f_8030DA28(c); // 800F4C44
  c->r[3]=c->r[1]+0x00000068u; // 800F4C48
  c->r[4]=c->r[1]+0x00000098u; // 800F4C4C
  c->lr=0x800F4C54u; f_80382F2C(c); // 800F4C50
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4C54
  c->r[3]=c->r[1]+0x00000008u; // 800F4C58
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F4C5C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F4C60
  c->lr=0x800F4C68u; f_8005FD70(c); // 800F4C64
  {uint32_t ea=c->r[2]+0xFFFFA78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4C68
  c->r[3]=c->r[1]+0x00000014u; // 800F4C6C
  c->r[4]=c->r[1]+0x00000008u; // 800F4C70
  c->lr=0x800F4C78u; f_8005ED34(c); // 800F4C74
  c->r[4]=R32(c->r[31]+0x00000894u); // 800F4C78
  c->r[3]=c->r[1]+0x00000020u; // 800F4C7C
  c->lr=0x800F4C84u; f_80060878(c); // 800F4C80
  c->r[3]=c->r[1]+0x0000002Cu; // 800F4C84
  c->r[4]=c->r[1]+0x00000020u; // 800F4C88
  c->r[5]=c->r[1]+0x00000014u; // 800F4C8C
  c->lr=0x800F4C94u; f_80073ACC(c); // 800F4C90
  c->r[3]=c->r[31]+0x000008D8u; // 800F4C94
  c->r[4]=c->r[1]+0x0000002Cu; // 800F4C98
  c->lr=0x800F4CA0u; f_8005DC84(c); // 800F4C9C
L_800F4CA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4CA0
  c->r[4]=c->r[31]+0x000008D8u; // 800F4CA4
  c->lr=0x800F4CACu; f_8005CD7C(c); // 800F4CA8
L_800F4CAC:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800F4CAC
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800F4CB0
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800F4CB4
  c->lr=c->r[0]; // 800F4CB8
  c->r[1]=c->r[1]+0x000000D0u; // 800F4CBC
  return; // 800F4CC0
}

// fn_800F4CC4
void f_800F4CC4(Ctx* __restrict c) {
  trace_call(0x800F4CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4CC4
  c->r[0]=c->lr; // 800F4CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4CD0
  c->r[31]=c->r[3]|c->r[3]; // 800F4CD4
  c->lr=0x800F4CDCu; f_80060684(c); // 800F4CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800F4CDC
  if (!crb(c,2)) { goto L_800F4CEC; } // 800F4CE0
  c->r[3]=0u+0x00000000u; // 800F4CE4
  goto L_800F4D94; // 800F4CE8
L_800F4CEC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F4CEC
  c->lr=0x800F4CF4u; f_800605B0(c); // 800F4CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4CF4
  if (crb(c,2)) { goto L_800F4D04; } // 800F4CF8
  c->r[3]=0u+0x00000000u; // 800F4CFC
  goto L_800F4D94; // 800F4D00
L_800F4D04:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800F4D04
  c->r[3]=c->r[31]|c->r[31]; // 800F4D08
  c->r[12]=R32(c->r[12]+0x00000100u); // 800F4D0C
  c->ctr=c->r[12]; // 800F4D10
  if (true) { c->lr=0x800F4D18u; dispatch(c,c->ctr); } // 800F4D14
  cmps(c,0,(int32_t)c->r[3],0); // 800F4D18
  if (!crb(c,2)) { goto L_800F4D28; } // 800F4D1C
  c->r[3]=0u+0x00000000u; // 800F4D20
  goto L_800F4D94; // 800F4D24
L_800F4D28:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800F4D28
  c->r[3]=c->r[31]|c->r[31]; // 800F4D2C
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 800F4D30
  c->ctr=c->r[12]; // 800F4D34
  if (true) { c->lr=0x800F4D3Cu; dispatch(c,c->ctr); } // 800F4D38
  cmps(c,0,(int32_t)c->r[3],0); // 800F4D3C
  if (crb(c,2)) { goto L_800F4D4C; } // 800F4D40
  c->r[3]=0u+0x00000000u; // 800F4D44
  goto L_800F4D94; // 800F4D48
L_800F4D4C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F4D4C
  c->r[4]=0u+0x00000018u; // 800F4D50
  c->lr=0x800F4D58u; f_800D5F00(c); // 800F4D54
  cmps(c,0,(int32_t)c->r[3],0); // 800F4D58
  if (crb(c,2)) { goto L_800F4D68; } // 800F4D5C
  c->r[3]=0u+0x00000000u; // 800F4D60
  goto L_800F4D94; // 800F4D64
L_800F4D68:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800F4D68
  {uint32_t ea=c->r[2]+0xFFFFA784u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4D6C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F4D70
  fcmp(c,0,c->f[1],c->f[0]); // 800F4D74
  if (!crb(c,0)) { goto L_800F4D84; } // 800F4D78
  c->r[3]=0u+0x00000000u; // 800F4D7C
  goto L_800F4D94; // 800F4D80
L_800F4D84:;
  c->r[3]=c->r[31]|c->r[31]; // 800F4D84
  c->lr=0x800F4D8Cu; f_800F4DA8(c); // 800F4D88
  c->r[0]=cntlz(c->r[3]); // 800F4D8C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F4D90
L_800F4D94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D98
  c->lr=c->r[0]; // 800F4D9C
  c->r[1]=c->r[1]+0x00000010u; // 800F4DA0
  return; // 800F4DA4
}

// fn_800F4DA8
void f_800F4DA8(Ctx* __restrict c) {
  trace_call(0x800F4DA8u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 800F4DA8
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 800F4DAC
  c->r[3]=addc(c,~c->r[0],c->r[4],c->xer_ca); cr0(c,c->r[3]); // 800F4DB0
  if (crb(c,2)) return; // 800F4DB4
  c->r[0]=R8(c->r[13]+0xFFFFBD58u); // 800F4DB8
  c->r[5]=R32(c->r[4]+0x00000000u); // 800F4DBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F4DC0
  if (!crb(c,2)) { goto L_800F4DE4; } // 800F4DC4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800F4DC8
  c->r[0]=0u+0x00000001u; // 800F4DCC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800F4DD0
  c->r[3]=c->r[4]+0x00000001u; // 800F4DD4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800F4DD8
  W32(c->r[13]+0xFFFFBD54u,c->r[4]); // 800F4DDC
  W8(c->r[13]+0xFFFFBD58u,c->r[0]); // 800F4DE0
L_800F4DE4:;
  c->r[0]=R32(c->r[13]+0xFFFFBD54u); // 800F4DE4
  c->r[0]=c->r[0]-c->r[5]; // 800F4DE8
  c->r[0]=cntlz(c->r[0]); // 800F4DEC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F4DF0
  return; // 800F4DF4
}

