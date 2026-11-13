#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_804AF028
void f_804AF028(Ctx* __restrict c) {
  trace_call(0x804AF028u);
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 804AF028
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF02C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804AF030
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF034
  c->r[11]=c->r[3]+c->r[0]; // 804AF038
  c->r[0]=R8(c->r[3]+c->r[0]); // 804AF03C
  cmps(c,0,(int32_t)c->r[0],0); // 804AF040
  if (!crb(c,2)) { goto L_804AF050; } // 804AF044
  c->r[3]=0u+0x00000000u; // 804AF048
  goto L_804AF0DC; // 804AF04C
L_804AF050:;
  c->r[0]=R8(c->r[11]+0x00000003u); // 804AF050
  c->r[3]=0u+0x00000001u; // 804AF054
  c->r[6]=R8(c->r[11]+0x00000002u); // 804AF058
  c->r[4]=R8(c->r[11]+0x00000007u); // 804AF05C
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF060
  c->r[8]=R8(c->r[11]+0x00000001u); // 804AF064
  c->r[9]=rotl(c->r[6],16)&0xFFFF0000u; // 804AF068
  c->r[0]=R8(c->r[11]+0x00000008u); // 804AF06C
  c->r[10]=rotl(c->r[4],16)&0xFFFF0000u; // 804AF070
  c->r[6]=R8(c->r[11]+0x00000006u); // 804AF074
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 804AF078
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF07C
  c->r[0]=R8(c->r[11]+0x00000004u); // 804AF080
  c->r[9]=c->r[9]|c->r[7]; // 804AF084
  c->r[10]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 804AF088
  c->r[9]=c->r[9]|c->r[0]; // 804AF08C
  c->r[0]=R8(c->r[11]+0x00000009u); // 804AF090
  c->r[10]=c->r[10]|c->r[4]; // 804AF094
  W8(c->r[1]+0x00000008u,c->r[9]); // 804AF098
  c->r[10]=c->r[10]|c->r[0]; // 804AF09C
  c->r[0]=rotl(c->r[9],20)&0x000000FFu; // 804AF0A0
  c->r[4]=rotl(c->r[10],20)&0x000000FFu; // 804AF0A4
  W8(c->r[1]+0x0000000Au,c->r[10]); // 804AF0A8
  W8(c->r[1]+0x00000009u,c->r[4]); // 804AF0AC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804AF0B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 804AF0B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804AF0B8
  c->r[7]=R8(c->r[1]+0x0000000Cu); // 804AF0BC
  c->r[6]=R8(c->r[1]+0x0000000Du); // 804AF0C0
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 804AF0C4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 804AF0C8
  W8(c->r[5]+0x00000000u,c->r[7]); // 804AF0CC
  W8(c->r[5]+0x00000001u,c->r[6]); // 804AF0D0
  W8(c->r[5]+0x00000002u,c->r[4]); // 804AF0D4
  W8(c->r[5]+0x00000003u,c->r[0]); // 804AF0D8
L_804AF0DC:;
  c->r[1]=c->r[1]+0x00000010u; // 804AF0DC
  return; // 804AF0E0
}

// fn_804AF0E4
void f_804AF0E4(Ctx* __restrict c) {
  trace_call(0x804AF0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF0E4
  c->r[0]=c->lr; // 804AF0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804AF0EC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 804AF0F0
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804AF0F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804AF0F8
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804AF0FC
  c->r[0]=c->r[4]+0x000000E0u; // 804AF100
  W32(c->r[1]+0x00000008u,c->r[30]); // 804AF104
  c->r[6]=c->r[4]+0x000000E1u; // 804AF108
  c->r[4]=R8(c->r[5]+0x00000000u); // 804AF10C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 804AF110
  c->r[8]=R32(c->r[3]+0x00000000u); // 804AF114
  c->r[3]=R8(c->r[5]+0x00000001u); // 804AF118
  c->r[30]=R8(c->r[5]+0x00000002u); // 804AF11C
  c->r[31]=c->r[8]+c->r[7]; // 804AF120
  c->r[30]=(rotl(c->r[3],12)&0x000FF000u)|(c->r[30]&~0x000FF000u); // 804AF124
  c->r[5]=R8(c->r[5]+0x00000003u); // 804AF128
  c->r[3]=c->r[31]|c->r[31]; // 804AF12C
  c->r[30]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 804AF130
  c->r[4]=(rotl(c->r[5],12)&0x000FF000u)|(c->r[4]&~0x000FF000u); // 804AF134
  c->lr=0x804AF13Cu; f_804AA014(c); // 804AF138
  c->r[4]=c->r[30]|c->r[30]; // 804AF13C
  c->r[3]=c->r[31]+0x00000005u; // 804AF140
  c->lr=0x804AF148u; f_804AA014(c); // 804AF144
  c->r[4]=c->r[30]|c->r[30]; // 804AF148
  c->r[3]=c->r[31]+0x0000000Au; // 804AF14C
  c->lr=0x804AF154u; f_804AA014(c); // 804AF150
  c->r[4]=c->r[30]|c->r[30]; // 804AF154
  c->r[3]=c->r[31]+0x0000000Fu; // 804AF158
  c->lr=0x804AF160u; f_804AA014(c); // 804AF15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804AF160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804AF164
  c->r[30]=R32(c->r[1]+0x00000008u); // 804AF168
  c->lr=c->r[0]; // 804AF16C
  c->r[1]=c->r[1]+0x00000010u; // 804AF170
  return; // 804AF174
}

// fn_804AF178
void f_804AF178(Ctx* __restrict c) {
  trace_call(0x804AF178u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804AF178
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF17C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF180
  c->r[9]=c->r[3]+c->r[0]; // 804AF184
  c->r[0]=R8(c->r[9]+0x00000040u); // 804AF188
  cmps(c,0,(int32_t)c->r[0],0); // 804AF18C
  if (!crb(c,2)) { goto L_804AF19C; } // 804AF190
  c->r[3]=0u+0x00000000u; // 804AF194
  goto L_804AF228; // 804AF198
L_804AF19C:;
  c->r[0]=R8(c->r[9]+0x00000043u); // 804AF19C
  c->r[3]=0u+0x00000001u; // 804AF1A0
  c->r[6]=R8(c->r[9]+0x00000042u); // 804AF1A4
  c->r[4]=R8(c->r[9]+0x00000047u); // 804AF1A8
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF1AC
  c->r[8]=R8(c->r[9]+0x00000041u); // 804AF1B0
  c->r[10]=rotl(c->r[6],16)&0xFFFF0000u; // 804AF1B4
  c->r[0]=R8(c->r[9]+0x00000048u); // 804AF1B8
  c->r[11]=rotl(c->r[4],16)&0xFFFF0000u; // 804AF1BC
  c->r[6]=R8(c->r[9]+0x00000046u); // 804AF1C0
  c->r[10]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 804AF1C4
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF1C8
  c->r[0]=R8(c->r[9]+0x00000044u); // 804AF1CC
  c->r[10]=c->r[10]|c->r[7]; // 804AF1D0
  c->r[11]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 804AF1D4
  c->r[10]=c->r[10]|c->r[0]; // 804AF1D8
  c->r[0]=R8(c->r[9]+0x00000049u); // 804AF1DC
  c->r[11]=c->r[11]|c->r[4]; // 804AF1E0
  W8(c->r[1]+0x00000008u,c->r[10]); // 804AF1E4
  c->r[11]=c->r[11]|c->r[0]; // 804AF1E8
  c->r[0]=rotl(c->r[10],20)&0x000000FFu; // 804AF1EC
  c->r[4]=rotl(c->r[11],20)&0x000000FFu; // 804AF1F0
  W8(c->r[1]+0x0000000Au,c->r[11]); // 804AF1F4
  W8(c->r[1]+0x00000009u,c->r[4]); // 804AF1F8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804AF1FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 804AF200
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804AF204
  c->r[7]=R8(c->r[1]+0x0000000Cu); // 804AF208
  c->r[6]=R8(c->r[1]+0x0000000Du); // 804AF20C
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 804AF210
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 804AF214
  W8(c->r[5]+0x00000000u,c->r[7]); // 804AF218
  W8(c->r[5]+0x00000001u,c->r[6]); // 804AF21C
  W8(c->r[5]+0x00000002u,c->r[4]); // 804AF220
  W8(c->r[5]+0x00000003u,c->r[0]); // 804AF224
L_804AF228:;
  c->r[1]=c->r[1]+0x00000010u; // 804AF228
  return; // 804AF22C
}

// fn_804AF230
void f_804AF230(Ctx* __restrict c) {
  trace_call(0x804AF230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF230
  c->r[0]=c->lr; // 804AF234
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804AF238
  W32(c->r[1]+0x00000014u,c->r[0]); // 804AF23C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804AF240
  c->r[0]=R8(c->r[5]+0x00000000u); // 804AF244
  c->r[6]=c->r[8]+0x000000E1u; // 804AF248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804AF24C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804AF250
  c->r[4]=R32(c->r[3]+0x00000000u); // 804AF254
  c->r[3]=R8(c->r[5]+0x00000002u); // 804AF258
  c->r[7]=c->r[4]+c->r[7]; // 804AF25C
  c->r[4]=R8(c->r[5]+0x00000001u); // 804AF260
  c->r[30]=c->r[3]|0x00800000u; // 804AF264
  c->r[3]=R8(c->r[5]+0x00000003u); // 804AF268
  c->r[30]=(rotl(c->r[4],12)&0x000FF000u)|(c->r[30]&~0x000FF000u); // 804AF26C
  c->r[4]=c->r[0]|0x00800000u; // 804AF270
  c->r[31]=c->r[7]+0x00000040u; // 804AF274
  c->r[0]=c->r[8]+0x000000E0u; // 804AF278
  c->r[4]=(rotl(c->r[3],12)&0x000FF000u)|(c->r[4]&~0x000FF000u); // 804AF27C
  c->r[30]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 804AF280
  c->r[3]=c->r[31]|c->r[31]; // 804AF284
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 804AF288
  c->lr=0x804AF290u; f_804AA014(c); // 804AF28C
  c->r[4]=c->r[30]|c->r[30]; // 804AF290
  c->r[3]=c->r[31]+0x00000005u; // 804AF294
  c->lr=0x804AF29Cu; f_804AA014(c); // 804AF298
  c->r[0]=R32(c->r[1]+0x00000014u); // 804AF29C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804AF2A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804AF2A4
  c->lr=c->r[0]; // 804AF2A8
  c->r[1]=c->r[1]+0x00000010u; // 804AF2AC
  return; // 804AF2B0
}

// fn_804AF2B4
void f_804AF2B4(Ctx* __restrict c) {
  trace_call(0x804AF2B4u);
  cmps(c,0,(int32_t)c->r[4],0); // 804AF2B4
  if (crb(c,2)) return; // 804AF2B8
  cmps(c,0,(int32_t)c->r[5],0); // 804AF2BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF2C0
  if (crb(c,2)) { goto L_804AF2D0; } // 804AF2C4
  c->r[4]=0u+0x00000040u; // 804AF2C8
  f_803A8398(c); return; // 804AF2CC
L_804AF2D0:;
  c->r[4]=0u+0xCC010000u; // 804AF2D0
  c->r[0]=0u+0x00000040u; // 804AF2D4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804AF2D8
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 804AF2DC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 804AF2E0
  return; // 804AF2E4
}

// fn_804AF2E8
void f_804AF2E8(Ctx* __restrict c) {
  trace_call(0x804AF2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF2E8
  c->r[0]=0u+0x43300000u; // 804AF2EC
  cmps(c,0,(int32_t)c->r[4],2); // 804AF2F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF2F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804AF2F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 804AF2FC
  if (crb(c,2)) { goto L_804AF328; } // 804AF300
  if (!crb(c,0)) { goto L_804AF314; } // 804AF304
  cmps(c,0,(int32_t)c->r[4],1); // 804AF308
  if (!crb(c,0)) { goto L_804AF320; } // 804AF30C
  goto L_804AF338; // 804AF310
L_804AF314:;
  cmps(c,0,(int32_t)c->r[4],4); // 804AF314
  if (!crb(c,0)) { goto L_804AF338; } // 804AF318
  goto L_804AF330; // 804AF31C
L_804AF320:;
  c->r[11]=c->r[3]+0x0000000Au; // 804AF320
  goto L_804AF340; // 804AF324
L_804AF328:;
  c->r[11]=c->r[3]+0x00000020u; // 804AF328
  goto L_804AF340; // 804AF32C
L_804AF330:;
  c->r[11]=c->r[3]+0x0000002Fu; // 804AF330
  goto L_804AF340; // 804AF334
L_804AF338:;
  c->r[3]=0u+0x00000000u; // 804AF338
  goto L_804AF5A0; // 804AF33C
L_804AF340:;
  c->r[0]=R8(c->r[11]+0x00000000u); // 804AF340
  cmps(c,0,(int32_t)c->r[0],0); // 804AF344
  if (!crb(c,2)) { goto L_804AF354; } // 804AF348
  c->r[3]=0u+0x00000000u; // 804AF34C
  goto L_804AF5A0; // 804AF350
L_804AF354:;
  c->r[0]=R8(c->r[11]+0x00000002u); // 804AF354
  c->r[4]=R8(c->r[11]+0x00000003u); // 804AF358
  c->r[3]=R8(c->r[11]+0x00000007u); // 804AF35C
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 804AF360
  c->r[8]=R8(c->r[11]+0x00000001u); // 804AF364
  c->r[10]=rotl(c->r[4],8)&0xFFFFFF00u; // 804AF368
  c->r[6]=R8(c->r[11]+0x00000008u); // 804AF36C
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 804AF370
  c->r[0]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 804AF374
  c->r[7]=R8(c->r[11]+0x00000006u); // 804AF378
  c->r[4]=R8(c->r[11]+0x0000000Cu); // 804AF37C
  c->r[9]=rotl(c->r[6],8)&0xFFFFFF00u; // 804AF380
  c->r[3]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 804AF384
  c->r[6]=R8(c->r[11]+0x0000000Du); // 804AF388
  c->r[7]=R8(c->r[11]+0x0000000Bu); // 804AF38C
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 804AF390
  c->r[8]=R8(c->r[11]+0x00000004u); // 804AF394
  c->r[0]=c->r[0]|c->r[10]; // 804AF398
  c->r[4]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 804AF39C
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 804AF3A0
  c->r[0]=c->r[0]|c->r[8]; // 804AF3A4
  c->r[8]=R8(c->r[11]+0x00000009u); // 804AF3A8
  c->r[3]=c->r[3]|c->r[9]; // 804AF3AC
  c->r[4]=c->r[4]|c->r[6]; // 804AF3B0
  c->r[7]=R8(c->r[11]+0x0000000Eu); // 804AF3B4
  c->r[3]=c->r[3]|c->r[8]; // 804AF3B8
  c->r[6]=rotl(c->r[0],10)&0x00000003u; // 804AF3BC
  {uint32_t ea=c->r[2]+0x0000146Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 804AF3C0
  c->r[4]=c->r[4]|c->r[7]; // 804AF3C4
  c->r[6]=(rotl(c->r[3],12)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 804AF3C8
  c->r[6]=(rotl(c->r[4],14)&0x00000030u)|(c->r[6]&~0x00000030u); // 804AF3CC
  c->r[6]=c->r[6]+0xFFFFFFEFu; // 804AF3D0
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[8]); // 804AF3D4
  if (!crb(c,1)) { goto L_804AF438; } // 804AF3D8
  {uint32_t ea=c->r[2]+0x00001480u; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF3DC
  c->r[7]=c->r[8]|c->r[8]; // 804AF3E0
  if (crb(c,2)) { goto L_804AF494; } // 804AF3E4
  c->r[6]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[6]); // 804AF3E8
  c->ctr=c->r[6]; // 804AF3EC
  if (crb(c,2)) { goto L_804AF424; } // 804AF3F0
L_804AF3F4:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF3F4
  c->r[8]=c->r[8]+0xFFFFFFF8u; // 804AF3F8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF3FC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF400
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF404
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF408
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF40C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF410
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF414
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804AF3F4; } // 804AF418
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 804AF41C
  if (crb(c,2)) { goto L_804AF494; } // 804AF420
L_804AF424:;
  c->ctr=c->r[7]; // 804AF424
L_804AF428:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF428
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 804AF42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804AF428; } // 804AF430
  goto L_804AF494; // 804AF434
L_804AF438:;
  if (!crb(c,0)) { goto L_804AF494; } // 804AF438
  {uint32_t ea=c->r[2]+0x00001484u; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF43C
  c->r[7]=0u-c->r[8]; // 804AF440
  if (crb(c,2)) { goto L_804AF494; } // 804AF444
  c->r[6]=rotl(c->r[7],29)&0x1FFFFFFFu; cr0(c,c->r[6]); // 804AF448
  c->ctr=c->r[6]; // 804AF44C
  if (crb(c,2)) { goto L_804AF484; } // 804AF450
L_804AF454:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF454
  c->r[8]=c->r[8]+0x00000008u; // 804AF458
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF45C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF460
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF464
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF468
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF46C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF470
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804AF454; } // 804AF478
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 804AF47C
  if (crb(c,2)) { goto L_804AF494; } // 804AF480
L_804AF484:;
  c->ctr=c->r[7]; // 804AF484
L_804AF488:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804AF488
  c->r[8]=c->r[8]+0x00000001u; // 804AF48C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804AF488; } // 804AF490
L_804AF494:;
  cmps(c,0,(int32_t)c->r[5],0); // 804AF494
  if (crb(c,2)) { goto L_804AF59C; } // 804AF498
  c->r[6]=rotl(c->r[0],21)&0xFFE00000u; // 804AF49C
  {uint32_t ea=c->r[2]+0x00001468u; c->f[4]=c->ps1[4]=RF32(ea);} // 804AF4A0
  c->r[8]=sraw(c,c->r[6],21); // 804AF4A4
  {uint32_t ea=c->r[2]+0x0000146Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF4A8
  c->r[6]=rotl(c->r[3],21)&0xFFE00000u; // 804AF4AC
  c->r[0]=rotl(c->r[0],10)&0xFFE00000u; // 804AF4B0
  c->r[7]=sraw(c,c->r[6],21); // 804AF4B4
  c->r[9]=c->r[8]^0x80000000u; // 804AF4B8
  c->r[8]=c->r[7]^0x80000000u; // 804AF4BC
  c->r[6]=rotl(c->r[4],21)&0xFFE00000u; // 804AF4C0
  c->r[7]=sraw(c,c->r[6],21); // 804AF4C4
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 804AF4C8
  c->r[6]=sraw(c,c->r[0],21); // 804AF4CC
  c->r[0]=rotl(c->r[3],10)&0xFFE00000u; // 804AF4D0
  W32(c->r[1]+0x00000014u,c->r[8]); // 804AF4D4
  c->r[7]=c->r[7]^0x80000000u; // 804AF4D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 804AF4DC
  c->r[6]=c->r[6]^0x80000000u; // 804AF4E0
  c->r[3]=sraw(c,c->r[0],21); // 804AF4E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 804AF4E8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 804AF4EC
  c->r[0]=rotl(c->r[4],10)&0xFFE00000u; // 804AF4F0
  c->r[0]=sraw(c,c->r[0],21); // 804AF4F4
  c->r[3]=c->r[3]^0x80000000u; // 804AF4F8
  {uint32_t ea=c->r[2]+0x00001490u; c->f[9]=RF64(ea);} // 804AF4FC
  c->r[0]=c->r[0]^0x80000000u; // 804AF500
  W32(c->r[1]+0x00000014u,c->r[6]); // 804AF504
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804AF508
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[9]); // 804AF50C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 804AF510
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[9]); // 804AF514
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804AF518
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[9]); // 804AF51C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[9]); // 804AF520
  W32(c->r[1]+0x00000014u,c->r[0]); // 804AF524
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[7]); // 804AF528
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804AF52C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 804AF530
  {uint32_t ea=c->r[2]+0x00001488u; c->f[8]=c->ps1[8]=RF32(ea);} // 804AF534
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804AF538
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[9]); // 804AF53C
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[5]); // 804AF540
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 804AF544
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[9]); // 804AF548
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[3]); // 804AF54C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 804AF550
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 804AF554
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[1]); // 804AF558
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[4]);} // 804AF55C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 804AF560
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[6]); // 804AF564
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[4]);} // 804AF568
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[5]); // 804AF56C
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 804AF570
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[4]);} // 804AF574
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 804AF578
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[1]); // 804AF57C
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[4]);} // 804AF580
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[7]);} // 804AF584
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 804AF588
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 804AF58C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 804AF590
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 804AF594
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 804AF598
L_804AF59C:;
  c->r[3]=0u+0x00000001u; // 804AF59C
L_804AF5A0:;
  c->r[1]=c->r[1]+0x00000020u; // 804AF5A0
  return; // 804AF5A4
}

// fn_804AF5A8
void f_804AF5A8(Ctx* __restrict c) {
  trace_call(0x804AF5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF5A8
  c->r[0]=0u+0x43300000u; // 804AF5AC
  cmps(c,0,(int32_t)c->r[4],2); // 804AF5B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF5B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804AF5B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 804AF5BC
  if (crb(c,2)) { goto L_804AF5E8; } // 804AF5C0
  if (!crb(c,0)) { goto L_804AF5D4; } // 804AF5C4
  cmps(c,0,(int32_t)c->r[4],1); // 804AF5C8
  if (!crb(c,0)) { goto L_804AF5E0; } // 804AF5CC
  goto L_804AF5F8; // 804AF5D0
L_804AF5D4:;
  cmps(c,0,(int32_t)c->r[4],4); // 804AF5D4
  if (!crb(c,0)) { goto L_804AF5F8; } // 804AF5D8
  goto L_804AF5F0; // 804AF5DC
L_804AF5E0:;
  c->r[12]=c->r[3]+0x0000000Au; // 804AF5E0
  goto L_804AF600; // 804AF5E4
L_804AF5E8:;
  c->r[12]=c->r[3]+0x00000020u; // 804AF5E8
  goto L_804AF600; // 804AF5EC
L_804AF5F0:;
  c->r[12]=c->r[3]+0x0000002Fu; // 804AF5F0
  goto L_804AF600; // 804AF5F4
L_804AF5F8:;
  c->r[3]=0u+0x00000000u; // 804AF5F8
  goto L_804AF790; // 804AF5FC
L_804AF600:;
  c->r[0]=R8(c->r[12]+0x00000000u); // 804AF600
  cmps(c,0,(int32_t)c->r[0],0); // 804AF604
  if (!crb(c,2)) { goto L_804AF614; } // 804AF608
  c->r[3]=0u+0x00000000u; // 804AF60C
  goto L_804AF790; // 804AF610
L_804AF614:;
  c->r[0]=R8(c->r[12]+0x00000003u); // 804AF614
  cmps(c,0,(int32_t)c->r[6],0); // 804AF618
  c->r[4]=R8(c->r[12]+0x00000002u); // 804AF61C
  c->r[3]=R8(c->r[12]+0x00000007u); // 804AF620
  c->r[8]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF624
  c->r[7]=R8(c->r[12]+0x00000001u); // 804AF628
  c->r[9]=rotl(c->r[4],16)&0xFFFF0000u; // 804AF62C
  c->r[10]=rotl(c->r[3],16)&0xFFFF0000u; // 804AF630
  c->r[4]=R8(c->r[12]+0x00000006u); // 804AF634
  c->r[9]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 804AF638
  c->r[0]=R8(c->r[12]+0x00000008u); // 804AF63C
  c->r[3]=R8(c->r[12]+0x0000000Cu); // 804AF640
  c->r[10]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 804AF644
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF648
  c->r[0]=R8(c->r[12]+0x0000000Du); // 804AF64C
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 804AF650
  c->r[4]=R8(c->r[12]+0x0000000Bu); // 804AF654
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 804AF658
  c->r[0]=R8(c->r[12]+0x00000004u); // 804AF65C
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 804AF660
  c->r[9]=c->r[9]|c->r[8]; // 804AF664
  c->r[9]=c->r[9]|c->r[0]; // 804AF668
  c->r[4]=R8(c->r[12]+0x00000009u); // 804AF66C
  c->r[10]=c->r[10]|c->r[7]; // 804AF670
  c->r[11]=c->r[11]|c->r[3]; // 804AF674
  c->r[0]=R8(c->r[12]+0x0000000Eu); // 804AF678
  c->r[10]=c->r[10]|c->r[4]; // 804AF67C
  c->r[3]=rotl(c->r[9],10)&0x00000003u; // 804AF680
  c->r[11]=c->r[11]|c->r[0]; // 804AF684
  c->r[3]=(rotl(c->r[10],12)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 804AF688
  c->r[3]=(rotl(c->r[11],14)&0x00000030u)|(c->r[3]&~0x00000030u); // 804AF68C
  if (crb(c,2)) { goto L_804AF69C; } // 804AF690
  c->r[0]=c->r[3]+0xFFFFFFEFu; // 804AF694
  W8(c->r[6]+0x00000000u,c->r[0]); // 804AF698
L_804AF69C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804AF69C
  if (crb(c,2)) { goto L_804AF78C; } // 804AF6A0
  c->r[0]=rotl(c->r[9],21)&0xFFE00000u; // 804AF6A4
  {uint32_t ea=c->r[2]+0x00001468u; c->f[4]=c->ps1[4]=RF32(ea);} // 804AF6A8
  c->r[4]=sraw(c,c->r[0],21); // 804AF6AC
  {uint32_t ea=c->r[2]+0x0000146Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF6B0
  c->r[0]=rotl(c->r[10],21)&0xFFE00000u; // 804AF6B4
  {uint32_t ea=c->r[2]+0x00001490u; c->f[9]=RF64(ea);} // 804AF6B8
  c->r[3]=sraw(c,c->r[0],21); // 804AF6BC
  c->r[4]=c->r[4]^0x80000000u; // 804AF6C0
  c->r[3]=c->r[3]^0x80000000u; // 804AF6C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804AF6C8
  c->r[0]=rotl(c->r[11],21)&0xFFE00000u; // 804AF6CC
  {uint32_t ea=c->r[2]+0x00001488u; c->f[8]=c->ps1[8]=RF32(ea);} // 804AF6D0
  c->r[4]=sraw(c,c->r[0],21); // 804AF6D4
  W32(c->r[1]+0x00000014u,c->r[3]); // 804AF6D8
  c->r[0]=rotl(c->r[9],10)&0xFFE00000u; // 804AF6DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 804AF6E0
  c->r[3]=sraw(c,c->r[0],21); // 804AF6E4
  c->r[6]=c->r[4]^0x80000000u; // 804AF6E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 804AF6EC
  c->r[4]=c->r[3]^0x80000000u; // 804AF6F0
  c->r[0]=rotl(c->r[10],10)&0xFFE00000u; // 804AF6F4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 804AF6F8
  c->r[3]=sraw(c,c->r[0],21); // 804AF6FC
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[9]); // 804AF700
  W32(c->r[1]+0x00000014u,c->r[4]); // 804AF704
  c->r[0]=rotl(c->r[11],10)&0xFFE00000u; // 804AF708
  c->r[0]=sraw(c,c->r[0],21); // 804AF70C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804AF710
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 804AF714
  c->r[3]=c->r[3]^0x80000000u; // 804AF718
  c->r[0]=c->r[0]^0x80000000u; // 804AF71C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[9]); // 804AF720
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804AF724
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[9]); // 804AF728
  W32(c->r[1]+0x00000014u,c->r[0]); // 804AF72C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[9]); // 804AF730
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804AF734
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804AF738
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 804AF73C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[9]); // 804AF740
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 804AF744
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[9]); // 804AF748
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[6]); // 804AF74C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[4]);} // 804AF750
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[5]); // 804AF754
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 804AF758
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[4]);} // 804AF75C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 804AF760
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 804AF764
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[7]);} // 804AF768
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 804AF76C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 804AF770
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 804AF774
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 804AF778
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 804AF77C
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[4]);} // 804AF780
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 804AF784
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[4]);} // 804AF788
L_804AF78C:;
  c->r[3]=0u+0x00000001u; // 804AF78C
L_804AF790:;
  c->r[1]=c->r[1]+0x00000020u; // 804AF790
  return; // 804AF794
}

// fn_804AF798
void f_804AF798(Ctx* __restrict c) {
  trace_call(0x804AF798u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AF798
  c->r[0]=c->lr; // 804AF79C
  cmps(c,0,(int32_t)c->r[4],2); // 804AF7A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 804AF7A4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804AF7A8
  W32(c->r[1]+0x00000048u,c->r[30]); // 804AF7AC
  W32(c->r[1]+0x00000044u,c->r[29]); // 804AF7B0
  W32(c->r[1]+0x00000040u,c->r[28]); // 804AF7B4
  c->r[28]=c->r[5]|c->r[5]; // 804AF7B8
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF7BC
  if (crb(c,2)) { goto L_804AF7EC; } // 804AF7C0
  if (!crb(c,0)) { goto L_804AF7D4; } // 804AF7C4
  cmps(c,0,(int32_t)c->r[4],1); // 804AF7C8
  if (!crb(c,0)) { goto L_804AF7E0; } // 804AF7CC
  goto L_804AF8EC; // 804AF7D0
L_804AF7D4:;
  cmps(c,0,(int32_t)c->r[4],4); // 804AF7D4
  if (!crb(c,0)) { goto L_804AF8EC; } // 804AF7D8
  goto L_804AF7F8; // 804AF7DC
L_804AF7E0:;
  c->r[30]=c->r[3]+0x0000000Au; // 804AF7E0
  c->r[31]=0u+0x00000000u; // 804AF7E4
  goto L_804AF808; // 804AF7E8
L_804AF7EC:;
  c->r[30]=c->r[3]+0x00000020u; // 804AF7EC
  c->r[31]=0u+0x00000003u; // 804AF7F0
  goto L_804AF808; // 804AF7F4
L_804AF7F8:;
  c->r[30]=c->r[3]+0x0000002Fu; // 804AF7F8
  c->r[31]=0u+0x00000006u; // 804AF7FC
  goto L_804AF808; // 804AF800
  goto L_804AF8EC; // 804AF804
L_804AF808:;
  {uint32_t ea=c->r[2]+0x00001498u; c->f[2]=c->ps1[2]=RF32(ea);} // 804AF808
  c->r[29]=c->r[6]+0x00000011u; // 804AF80C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804AF810
  c->r[6]=c->r[31]+0x00000006u; // 804AF814
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF818
  c->r[3]=c->r[30]|c->r[30]; // 804AF81C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804AF820
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804AF824
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804AF828
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804AF82C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 804AF830
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804AF834
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804AF838
  c->r[0]=R32(c->r[1]+0x00000014u); // 804AF83C
  c->r[4]=rotl(c->r[4],0)&0x000007FFu; // 804AF840
  c->r[4]=(rotl(c->r[29],22)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 804AF844
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 804AF848
  c->r[4]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 804AF84C
  c->lr=0x804AF854u; f_804AA014(c); // 804AF850
  {uint32_t ea=c->r[2]+0x00001498u; c->f[2]=c->ps1[2]=RF32(ea);} // 804AF854
  c->r[0]=c->r[31]+0x00000007u; // 804AF858
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804AF85C
  c->r[5]=rotl(c->r[29],20)&0x00C00000u; // 804AF860
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF864
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804AF868
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804AF86C
  c->r[3]=c->r[30]+0x00000005u; // 804AF870
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804AF874
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804AF878
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804AF87C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 804AF880
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 804AF884
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 804AF888
  c->r[0]=R32(c->r[1]+0x00000024u); // 804AF88C
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 804AF890
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 804AF894
  c->r[4]=c->r[5]|c->r[0]; // 804AF898
  c->lr=0x804AF8A0u; f_804AA014(c); // 804AF89C
  {uint32_t ea=c->r[2]+0x00001498u; c->f[2]=c->ps1[2]=RF32(ea);} // 804AF8A0
  c->r[0]=c->r[31]+0x00000008u; // 804AF8A4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804AF8A8
  c->r[5]=rotl(c->r[29],18)&0x00C00000u; // 804AF8AC
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804AF8B0
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 804AF8B4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804AF8B8
  c->r[3]=c->r[30]+0x0000000Au; // 804AF8BC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804AF8C0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 804AF8C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804AF8C8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 804AF8CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 804AF8D0
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 804AF8D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804AF8D8
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 804AF8DC
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 804AF8E0
  c->r[4]=c->r[5]|c->r[0]; // 804AF8E4
  c->lr=0x804AF8ECu; f_804AA014(c); // 804AF8E8
L_804AF8EC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 804AF8EC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804AF8F0
  c->r[30]=R32(c->r[1]+0x00000048u); // 804AF8F4
  c->r[29]=R32(c->r[1]+0x00000044u); // 804AF8F8
  c->r[28]=R32(c->r[1]+0x00000040u); // 804AF8FC
  c->lr=c->r[0]; // 804AF900
  c->r[1]=c->r[1]+0x00000050u; // 804AF904
  return; // 804AF908
}

// GXSetChanAmbColor__Q34nw4r3g3d10ResMatChanF12_GXChannelID8_GXColor
void f_804AF90C(Ctx* __restrict c) {
  trace_call(0x804AF90Cu);
  c->r[6]=rotl(c->r[4],0)&0x00000001u; // 804AF90C
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804AF910
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 804AF914
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF918
  c->r[7]=c->r[3]+c->r[0]; // 804AF91C
  if (!crb(c,2)) { goto L_804AF954; } // 804AF920
  c->r[6]=R8(c->r[5]+0x00000000u); // 804AF924
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 804AF928
  cmpu(c,0,c->r[0],0x00000001u); // 804AF92C
  c->r[3]=R8(c->r[5]+0x00000001u); // 804AF930
  W8(c->r[7]+0x00000004u,c->r[6]); // 804AF934
  c->r[0]=R8(c->r[5]+0x00000002u); // 804AF938
  W8(c->r[7]+0x00000005u,c->r[3]); // 804AF93C
  W8(c->r[7]+0x00000006u,c->r[0]); // 804AF940
  if (crb(c,1)) return; // 804AF944
  c->r[0]=R8(c->r[5]+0x00000003u); // 804AF948
  W8(c->r[7]+0x00000007u,c->r[0]); // 804AF94C
  return; // 804AF950
L_804AF954:;
  c->r[0]=R8(c->r[5]+0x00000003u); // 804AF954
  W8(c->r[7]+0x00000007u,c->r[0]); // 804AF958
  return; // 804AF95C
}

// fn_804AF960
void f_804AF960(Ctx* __restrict c) {
  trace_call(0x804AF960u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 804AF960
  c->r[4]=R32(c->r[3]+0x00000000u); // 804AF964
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804AF968
  c->r[3]=0u+0x00000001u; // 804AF96C
  c->r[4]=c->r[4]+c->r[0]; // 804AF970
  c->r[0]=R8(c->r[4]+0x00000004u); // 804AF974
  W8(c->r[5]+0x00000000u,c->r[0]); // 804AF978
  c->r[0]=R8(c->r[4]+0x00000005u); // 804AF97C
  W8(c->r[5]+0x00000001u,c->r[0]); // 804AF980
  c->r[0]=R8(c->r[4]+0x00000006u); // 804AF984
  W8(c->r[5]+0x00000002u,c->r[0]); // 804AF988
  c->r[0]=R8(c->r[4]+0x00000007u); // 804AF98C
  W8(c->r[5]+0x00000003u,c->r[0]); // 804AF990
  return; // 804AF994
}

// fn_804AF998
void f_804AF998(Ctx* __restrict c) {
  trace_call(0x804AF998u);
  c->r[11]=rotl(c->r[4],0)&0x00000001u; // 804AF998
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804AF99C
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)20); // 804AF9A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AF9A4
  c->r[3]=c->r[3]+c->r[0]; // 804AF9A8
  if (!crb(c,2)) { goto L_804AF9B8; } // 804AF9AC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804AF9B0
  goto L_804AF9BC; // 804AF9B4
L_804AF9B8:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 804AF9B8
L_804AF9BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804AF9BC
  if (crb(c,2)) { goto L_804AF9CC; } // 804AF9C0
  c->r[0]=rotl(c->r[3],31)&0x00000001u; // 804AF9C4
  W8(c->r[5]+0x00000000u,c->r[0]); // 804AF9C8
L_804AF9CC:;
  cmps(c,0,(int32_t)c->r[6],0); // 804AF9CC
  if (crb(c,2)) { goto L_804AF9DC; } // 804AF9D0
  c->r[0]=rotl(c->r[3],26)&0x00000001u; // 804AF9D4
  W32(c->r[6]+0x00000000u,c->r[0]); // 804AF9D8
L_804AF9DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 804AF9DC
  if (crb(c,2)) { goto L_804AF9EC; } // 804AF9E0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 804AF9E4
  W32(c->r[7]+0x00000000u,c->r[0]); // 804AF9E8
L_804AF9EC:;
  cmps(c,0,(int32_t)c->r[8],0); // 804AF9EC
  c->r[4]=rotl(c->r[3],30)&0x0000000Fu; // 804AF9F0
  c->r[0]=rotl(c->r[3],21)&0x0000000Fu; // 804AF9F4
  if (crb(c,2)) { goto L_804AFA08; } // 804AF9F8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804AF9FC
  c->r[0]=c->r[4]|c->r[0]; // 804AFA00
  W32(c->r[8]+0x00000000u,c->r[0]); // 804AFA04
L_804AFA08:;
  c->r[0]=rotl(c->r[3],22)&0x00000001u; cr0(c,c->r[0]); // 804AFA08
  if (!crb(c,2)) { goto L_804AFA1C; } // 804AFA0C
  c->r[4]=0u+0x00000000u; // 804AFA10
  c->r[0]=0u+0x00000000u; // 804AFA14
  goto L_804AFA38; // 804AFA18
L_804AFA1C:;
  c->r[0]=rotl(c->r[3],23)&0x00000001u; cr0(c,c->r[0]); // 804AFA1C
  if (!crb(c,2)) { goto L_804AFA30; } // 804AFA20
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 804AFA24
  c->r[4]=0u+0x00000002u; // 804AFA28
  goto L_804AFA38; // 804AFA2C
L_804AFA30:;
  c->r[4]=0u+0x00000001u; // 804AFA30
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 804AFA34
L_804AFA38:;
  cmps(c,0,(int32_t)c->r[9],0); // 804AFA38
  if (crb(c,2)) { goto L_804AFA44; } // 804AFA3C
  W32(c->r[9]+0x00000000u,c->r[0]); // 804AFA40
L_804AFA44:;
  cmps(c,0,(int32_t)c->r[10],0); // 804AFA44
  if (crb(c,2)) { goto L_804AFA50; } // 804AFA48
  W32(c->r[10]+0x00000000u,c->r[4]); // 804AFA4C
L_804AFA50:;
  c->r[3]=0u+0x00000001u; // 804AFA50
  return; // 804AFA54
}

// fn_804AFA58
void f_804AFA58(Ctx* __restrict c) {
  trace_call(0x804AFA58u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804AFA58
  c->r[3]=c->r[4]|c->r[4]; // 804AFA5C
  c->r[5]=R32(c->r[6]+0x00000000u); // 804AFA60
  c->r[0]=R32(c->r[6]+0x00000004u); // 804AFA64
  W32(c->r[4]+0x00000000u,c->r[5]); // 804AFA68
  W32(c->r[4]+0x00000004u,c->r[0]); // 804AFA6C
  c->r[5]=R32(c->r[6]+0x00000008u); // 804AFA70
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 804AFA74
  W32(c->r[4]+0x00000008u,c->r[5]); // 804AFA78
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 804AFA7C
  c->r[5]=R32(c->r[6]+0x00000010u); // 804AFA80
  c->r[0]=R32(c->r[6]+0x00000014u); // 804AFA84
  W32(c->r[4]+0x00000010u,c->r[5]); // 804AFA88
  W32(c->r[4]+0x00000014u,c->r[0]); // 804AFA8C
  c->r[5]=R32(c->r[6]+0x00000018u); // 804AFA90
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 804AFA94
  W32(c->r[4]+0x00000018u,c->r[5]); // 804AFA98
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 804AFA9C
  c->r[5]=R32(c->r[6]+0x00000020u); // 804AFAA0
  c->r[0]=R32(c->r[6]+0x00000024u); // 804AFAA4
  W32(c->r[4]+0x00000020u,c->r[5]); // 804AFAA8
  W32(c->r[4]+0x00000024u,c->r[0]); // 804AFAAC
  return; // 804AFAB0
}

// fn_804AFAB4
void f_804AFAB4(Ctx* __restrict c) {
  trace_call(0x804AFAB4u);
  cmps(c,0,(int32_t)c->r[4],0); // 804AFAB4
  if (crb(c,2)) return; // 804AFAB8
  cmps(c,0,(int32_t)c->r[5],0); // 804AFABC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AFAC0
  if (crb(c,2)) { goto L_804AFB00; } // 804AFAC4
  cmpu(c,0,c->r[4],0x00000002u); // 804AFAC8
  if (!crb(c,0)) { goto L_804AFAD8; } // 804AFACC
  c->r[4]=0u+0x00000020u; // 804AFAD0
  f_803A8398(c); return; // 804AFAD4
L_804AFAD8:;
  cmpu(c,0,c->r[4],0x00000004u); // 804AFAD8
  if (!crb(c,0)) { goto L_804AFAE8; } // 804AFADC
  c->r[4]=0u+0x00000040u; // 804AFAE0
  f_803A8398(c); return; // 804AFAE4
L_804AFAE8:;
  cmpu(c,0,c->r[4],0x00000008u); // 804AFAE8
  if (!crb(c,0)) { goto L_804AFAF8; } // 804AFAEC
  c->r[4]=0u+0x00000080u; // 804AFAF0
  f_803A8398(c); return; // 804AFAF4
L_804AFAF8:;
  c->r[4]=0u+0x000000A0u; // 804AFAF8
  f_803A8398(c); return; // 804AFAFC
L_804AFB00:;
  cmpu(c,0,c->r[4],0x00000002u); // 804AFB00
  if (!crb(c,0)) { goto L_804AFB24; } // 804AFB04
  c->r[4]=0u+0xCC010000u; // 804AFB08
  c->r[0]=0u+0x00000040u; // 804AFB0C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB10
  c->r[0]=0u+0x00000020u; // 804AFB14
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 804AFB18
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB1C
  return; // 804AFB20
L_804AFB24:;
  cmpu(c,0,c->r[4],0x00000004u); // 804AFB24
  if (!crb(c,0)) { goto L_804AFB44; } // 804AFB28
  c->r[4]=0u+0xCC010000u; // 804AFB2C
  c->r[0]=0u+0x00000040u; // 804AFB30
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB34
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 804AFB38
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB3C
  return; // 804AFB40
L_804AFB44:;
  cmpu(c,0,c->r[4],0x00000008u); // 804AFB44
  if (!crb(c,0)) { goto L_804AFB68; } // 804AFB48
  c->r[4]=0u+0xCC010000u; // 804AFB4C
  c->r[0]=0u+0x00000040u; // 804AFB50
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB54
  c->r[0]=0u+0x00000080u; // 804AFB58
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 804AFB5C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB60
  return; // 804AFB64
L_804AFB68:;
  c->r[4]=0u+0xCC010000u; // 804AFB68
  c->r[0]=0u+0x00000040u; // 804AFB6C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB70
  c->r[0]=0u+0x000000A0u; // 804AFB74
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 804AFB78
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 804AFB7C
  return; // 804AFB80
}

// fn_804AFB84
void f_804AFB84(Ctx* __restrict c) {
  trace_call(0x804AFB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AFB84
  c->r[0]=c->lr; // 804AFB88
  cmpu(c,0,c->r[6],0x00000014u); // 804AFB8C
  c->r[9]=0u+0x00000005u; // 804AFB90
  W32(c->r[1]+0x00000024u,c->r[0]); // 804AFB94
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)18); // 804AFB98
  c->r[10]=0u+0x00000005u; // 804AFB9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804AFBA0
  c->r[11]=0u+0x00000000u; // 804AFBA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804AFBA8
  c->r[30]=c->r[8]|c->r[8]; // 804AFBAC
  c->r[8]=0u+0x00000000u; // 804AFBB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804AFBB4
  c->r[29]=c->r[7]|c->r[7]; // 804AFBB8
  c->r[7]=0u+0x00000000u; // 804AFBBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804AFBC0
  c->r[28]=c->r[4]|c->r[4]; // 804AFBC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AFBC8
  c->r[31]=c->r[3]+c->r[0]; // 804AFBCC
  if (crb(c,1)) { goto L_804AFCA0; } // 804AFBD0
  c->r[3]=0u+0x80720000u; // 804AFBD4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804AFBD8
  c->r[3]=c->r[3]+0xFFFF9B50u; // 804AFBDC
  c->r[3]=R32(c->r[3]+c->r[0]); // 804AFBE0
  c->ctr=c->r[3]; // 804AFBE4
  if (true) { switch (c->ctr) { case 0x804AFBECu: goto L_804AFBEC; case 0x804AFBF8u: goto L_804AFBF8; case 0x804AFC04u: goto L_804AFC04; case 0x804AFC10u: goto L_804AFC10; case 0x804AFC1Cu: goto L_804AFC1C; case 0x804AFC24u: goto L_804AFC24; case 0x804AFC2Cu: goto L_804AFC2C; case 0x804AFC34u: goto L_804AFC34; case 0x804AFC3Cu: goto L_804AFC3C; case 0x804AFC44u: goto L_804AFC44; case 0x804AFC4Cu: goto L_804AFC4C; case 0x804AFC54u: goto L_804AFC54; case 0x804AFC5Cu: goto L_804AFC5C; case 0x804AFC64u: goto L_804AFC64; case 0x804AFC6Cu: goto L_804AFC6C; case 0x804AFC74u: goto L_804AFC74; case 0x804AFC7Cu: goto L_804AFC7C; case 0x804AFC84u: goto L_804AFC84; case 0x804AFC8Cu: goto L_804AFC8C; case 0x804AFC94u: goto L_804AFC94; case 0x804AFC9Cu: goto L_804AFC9C; default: break; } dispatch(c,c->ctr); return; } // 804AFBE8
L_804AFBEC:;
  c->r[9]=0u+0x00000000u; // 804AFBEC
  c->r[7]=0u+0x00000001u; // 804AFBF0
  goto L_804AFCA0; // 804AFBF4
L_804AFBF8:;
  c->r[9]=0u+0x00000001u; // 804AFBF8
  c->r[7]=0u+0x00000001u; // 804AFBFC
  goto L_804AFCA0; // 804AFC00
L_804AFC04:;
  c->r[9]=0u+0x00000003u; // 804AFC04
  c->r[7]=0u+0x00000001u; // 804AFC08
  goto L_804AFCA0; // 804AFC0C
L_804AFC10:;
  c->r[9]=0u+0x00000004u; // 804AFC10
  c->r[7]=0u+0x00000001u; // 804AFC14
  goto L_804AFCA0; // 804AFC18
L_804AFC1C:;
  c->r[9]=0u+0x00000002u; // 804AFC1C
  goto L_804AFCA0; // 804AFC20
L_804AFC24:;
  c->r[9]=0u+0x00000002u; // 804AFC24
  goto L_804AFCA0; // 804AFC28
L_804AFC2C:;
  c->r[9]=0u+0x00000005u; // 804AFC2C
  goto L_804AFCA0; // 804AFC30
L_804AFC34:;
  c->r[9]=0u+0x00000006u; // 804AFC34
  goto L_804AFCA0; // 804AFC38
L_804AFC3C:;
  c->r[9]=0u+0x00000007u; // 804AFC3C
  goto L_804AFCA0; // 804AFC40
L_804AFC44:;
  c->r[9]=0u+0x00000008u; // 804AFC44
  goto L_804AFCA0; // 804AFC48
L_804AFC4C:;
  c->r[9]=0u+0x00000009u; // 804AFC4C
  goto L_804AFCA0; // 804AFC50
L_804AFC54:;
  c->r[9]=0u+0x0000000Au; // 804AFC54
  goto L_804AFCA0; // 804AFC58
L_804AFC5C:;
  c->r[9]=0u+0x0000000Bu; // 804AFC5C
  goto L_804AFCA0; // 804AFC60
L_804AFC64:;
  c->r[9]=0u+0x0000000Cu; // 804AFC64
  goto L_804AFCA0; // 804AFC68
L_804AFC6C:;
  c->r[10]=0u+0x00000000u; // 804AFC6C
  goto L_804AFCA0; // 804AFC70
L_804AFC74:;
  c->r[10]=0u+0x00000001u; // 804AFC74
  goto L_804AFCA0; // 804AFC78
L_804AFC7C:;
  c->r[10]=0u+0x00000002u; // 804AFC7C
  goto L_804AFCA0; // 804AFC80
L_804AFC84:;
  c->r[10]=0u+0x00000003u; // 804AFC84
  goto L_804AFCA0; // 804AFC88
L_804AFC8C:;
  c->r[10]=0u+0x00000004u; // 804AFC8C
  goto L_804AFCA0; // 804AFC90
L_804AFC94:;
  c->r[10]=0u+0x00000005u; // 804AFC94
  goto L_804AFCA0; // 804AFC98
L_804AFC9C:;
  c->r[10]=0u+0x00000006u; // 804AFC9C
L_804AFCA0:;
  cmps(c,0,(int32_t)c->r[5],1); // 804AFCA0
  if (crb(c,2)) { goto L_804AFCC8; } // 804AFCA4
  if (!crb(c,0)) { goto L_804AFCB8; } // 804AFCA8
  cmps(c,0,(int32_t)c->r[5],0); // 804AFCAC
  if (!crb(c,0)) { goto L_804AFCD0; } // 804AFCB0
  goto L_804AFD5C; // 804AFCB4
L_804AFCB8:;
  cmps(c,0,(int32_t)c->r[5],10); // 804AFCB8
  if (crb(c,2)) { goto L_804AFCE8; } // 804AFCBC
  if (!crb(c,0)) { goto L_804AFD5C; } // 804AFCC0
  goto L_804AFCDC; // 804AFCC4
L_804AFCC8:;
  c->r[0]=0u+0x00000000u; // 804AFCC8
  goto L_804AFD04; // 804AFCCC
L_804AFCD0:;
  c->r[0]=0u+0x00000000u; // 804AFCD0
  c->r[8]=0u+0x00000001u; // 804AFCD4
  goto L_804AFD04; // 804AFCD8
L_804AFCDC:;
  c->r[11]=c->r[5]+0xFFFFFFFEu; // 804AFCDC
  c->r[0]=0u+0x00000001u; // 804AFCE0
  goto L_804AFD04; // 804AFCE4
L_804AFCE8:;
  cmps(c,0,(int32_t)c->r[6],19); // 804AFCE8
  if (!crb(c,2)) { goto L_804AFCF8; } // 804AFCEC
  c->r[0]=0u+0x00000002u; // 804AFCF0
  goto L_804AFD04; // 804AFCF4
L_804AFCF8:;
  c->r[0]=0u+0x00000003u; // 804AFCF8
  goto L_804AFD04; // 804AFCFC
  goto L_804AFD5C; // 804AFD00
L_804AFD04:;
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804AFD04
  c->r[6]=rotl(c->r[9],7)&0xFFFFFF80u; // 804AFD08
  c->r[3]=rotl(c->r[8],1)&0xFFFFFFFEu; // 804AFD0C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804AFD10
  c->r[8]=c->r[4]+0x00001040u; // 804AFD14
  c->r[7]=rotl(c->r[11],15)&0xFFFF8000u; // 804AFD18
  c->r[0]=c->r[3]|c->r[0]; // 804AFD1C
  c->r[5]=c->r[6]|c->r[5]; // 804AFD20
  c->r[4]=rotl(c->r[10],12)&0xFFFFF000u; // 804AFD24
  c->r[3]=c->r[31]|c->r[31]; // 804AFD28
  c->r[6]=c->r[7]|c->r[4]; // 804AFD2C
  c->r[0]=c->r[5]|c->r[0]; // 804AFD30
  c->r[4]=rotl(c->r[8],0)&0x0000FFFFu; // 804AFD34
  c->r[5]=c->r[6]|c->r[0]; // 804AFD38
  c->lr=0x804AFD40u; f_804AA0C0(c); // 804AFD3C
  c->r[4]=c->r[28]+0x00001050u; // 804AFD40
  c->r[5]=c->r[30]+0xFFFFFFC0u; // 804AFD44
  c->r[0]=rotl(c->r[29],8)&0x0000FF00u; // 804AFD48
  c->r[3]=c->r[31]+0x00000009u; // 804AFD4C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 804AFD50
  c->r[5]=c->r[5]|c->r[0]; // 804AFD54
  c->lr=0x804AFD5Cu; f_804AA0C0(c); // 804AFD58
L_804AFD5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804AFD5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804AFD60
  c->r[30]=R32(c->r[1]+0x00000018u); // 804AFD64
  c->r[29]=R32(c->r[1]+0x00000014u); // 804AFD68
  c->r[28]=R32(c->r[1]+0x00000010u); // 804AFD6C
  c->lr=c->r[0]; // 804AFD70
  c->r[1]=c->r[1]+0x00000020u; // 804AFD74
  return; // 804AFD78
}

// Bind__Q34nw4r3g3d6ResMatFQ34nw4r3g3d7ResFile
void f_804AFD7C(Ctx* __restrict c) {
  trace_call(0x804AFD7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AFD7C
  c->r[0]=c->lr; // 804AFD80
  W32(c->r[1]+0x00000034u,c->r[0]); // 804AFD84
  c->r[11]=c->r[1]+0x00000030u; // 804AFD88
  c->lr=0x804AFD90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804AFD8C
  c->r[5]=R32(c->r[3]+0x00000000u); // 804AFD90
  c->r[26]=c->r[3]|c->r[3]; // 804AFD94
  c->r[27]=c->r[4]|c->r[4]; // 804AFD98
  c->r[28]=0u+0x00000000u; // 804AFD9C
  c->r[31]=R32(c->r[5]+0x0000002Cu); // 804AFDA0
  c->r[29]=0u+0x00000000u; // 804AFDA4
  c->r[30]=0u+0x00000000u; // 804AFDA8
  goto L_804AFE18; // 804AFDAC
L_804AFDB0:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 804AFDB0
  c->r[0]=R32(c->r[3]+0x00000030u); // 804AFDB4
  cmps(c,0,(int32_t)c->r[0],0); // 804AFDB8
  if (crb(c,2)) { goto L_804AFDC8; } // 804AFDBC
  c->r[4]=c->r[3]+c->r[0]; // 804AFDC0
  goto L_804AFDCC; // 804AFDC4
L_804AFDC8:;
  c->r[4]=0u+0x00000000u; // 804AFDC8
L_804AFDCC:;
  c->r[3]=c->r[3]+0x00000144u; // 804AFDCC
  c->r[8]=c->r[4]+c->r[30]; // 804AFDD0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804AFDD4
  c->r[3]=c->r[1]+0x00000014u; // 804AFDD8
  c->r[0]=R32(c->r[27]+0x00000000u); // 804AFDDC
  c->r[4]=c->r[1]+0x00000010u; // 804AFDE0
  c->r[7]=R32(c->r[26]+0x00000000u); // 804AFDE4
  c->r[5]=c->r[1]+0x0000000Cu; // 804AFDE8
  c->r[6]=c->r[1]+0x00000008u; // 804AFDEC
  c->r[7]=c->r[7]+0x00000040u; // 804AFDF0
  W32(c->r[1]+0x00000010u,c->r[0]); // 804AFDF4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 804AFDF8
  W32(c->r[1]+0x00000014u,c->r[8]); // 804AFDFC
  c->lr=0x804AFE04u; f_804AFEA8(c); // 804AFE00
  cmps(c,0,(int32_t)c->r[3],0); // 804AFE04
  if (crb(c,2)) { goto L_804AFE10; } // 804AFE08
  c->r[28]=c->r[28]+0x00000001u; // 804AFE0C
L_804AFE10:;
  c->r[30]=c->r[30]+0x00000034u; // 804AFE10
  c->r[29]=c->r[29]+0x00000001u; // 804AFE14
L_804AFE18:;
  cmpu(c,0,c->r[29],c->r[31]); // 804AFE18
  if (crb(c,0)) { IRQCHK(c); goto L_804AFDB0; } // 804AFE1C
  c->r[0]=c->r[31]-c->r[28]; // 804AFE20
  c->r[11]=c->r[1]+0x00000030u; // 804AFE24
  c->r[0]=cntlz(c->r[0]); // 804AFE28
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804AFE2C
  c->lr=0x804AFE34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804AFE30
  c->r[0]=R32(c->r[1]+0x00000034u); // 804AFE34
  c->lr=c->r[0]; // 804AFE38
  c->r[1]=c->r[1]+0x00000030u; // 804AFE3C
  return; // 804AFE40
}

// Init__Q34nw4r3g3d6ResMatFv
void f_804AFE44(Ctx* __restrict c) {
  trace_call(0x804AFE44u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AFE44
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804AFE48
  cmps(c,0,(int32_t)c->r[0],0); // 804AFE4C
  if (crb(c,2)) { goto L_804AFE5C; } // 804AFE50
  c->r[3]=c->r[3]+c->r[0]; // 804AFE54
  goto L_804AFE60; // 804AFE58
L_804AFE5C:;
  c->r[3]=0u+0x00000000u; // 804AFE5C
L_804AFE60:;
  c->r[4]=0u+0x00000180u; // 804AFE60
  f_80377298(c); return; // 804AFE64
}

// GetResTev__Q34nw4r3g3d6ResMatFv
void f_804AFE68(Ctx* __restrict c) {
  trace_call(0x804AFE68u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AFE68
  c->r[0]=R32(c->r[3]+0x00000028u); // 804AFE6C
  cmps(c,0,(int32_t)c->r[0],0); // 804AFE70
  if (crb(c,2)) { goto L_804AFE80; } // 804AFE74
  c->r[3]=c->r[3]+c->r[0]; // 804AFE78
  return; // 804AFE7C
L_804AFE80:;
  c->r[3]=0u+0x00000000u; // 804AFE80
  return; // 804AFE84
}

// GetResTev__Q34nw4r3g3d6ResMatCFv
void f_804AFE88(Ctx* __restrict c) {
  trace_call(0x804AFE88u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804AFE88
  c->r[0]=R32(c->r[3]+0x00000034u); // 804AFE8C
  cmps(c,0,(int32_t)c->r[0],0); // 804AFE90
  if (crb(c,2)) { goto L_804AFEA0; } // 804AFE94
  c->r[3]=c->r[3]+c->r[0]; // 804AFE98
  return; // 804AFE9C
L_804AFEA0:;
  c->r[3]=0u+0x00000000u; // 804AFEA0
  return; // 804AFEA4
}

// Bind__Q34nw4r3g3d14ResTexPlttInfoFQ34nw4r3g3d7ResFileQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObj
void f_804AFEA8(Ctx* __restrict c) {
  trace_call(0x804AFEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804AFEA8
  c->r[0]=c->lr; // 804AFEAC
  W32(c->r[1]+0x00000064u,c->r[0]); // 804AFEB0
  c->r[11]=c->r[1]+0x00000060u; // 804AFEB4
  c->lr=0x804AFEBCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804AFEB8
  c->r[7]=R32(c->r[3]+0x00000000u); // 804AFEBC
  c->r[28]=c->r[3]|c->r[3]; // 804AFEC0
  c->r[29]=c->r[4]|c->r[4]; // 804AFEC4
  c->r[25]=c->r[5]|c->r[5]; // 804AFEC8
  c->r[0]=R32(c->r[7]+0x00000000u); // 804AFECC
  c->r[30]=c->r[6]|c->r[6]; // 804AFED0
  c->r[31]=0u+0x00000001u; // 804AFED4
  cmps(c,0,(int32_t)c->r[0],0); // 804AFED8
  if (crb(c,2)) { goto L_804AFEEC; } // 804AFEDC
  c->r[3]=c->r[7]+c->r[0]; // 804AFEE0
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 804AFEE4
  goto L_804AFEF0; // 804AFEE8
L_804AFEEC:;
  c->r[0]=0u+0x00000000u; // 804AFEEC
L_804AFEF0:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 804AFEF0
  cmps(c,0,(int32_t)c->r[3],0); // 804AFEF4
  if (!crb(c,2)) { goto L_804B007C; } // 804AFEF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804AFEFC
  c->r[3]=c->r[29]|c->r[29]; // 804AFF00
  c->r[4]=c->r[1]+0x00000034u; // 804AFF04
  c->lr=0x804AFF0Cu; f_804AA73C(c); // 804AFF08
  cmps(c,0,(int32_t)c->r[3],0); // 804AFF0C
  if (crb(c,2)) { goto L_804B0078; } // 804AFF10
  c->r[4]=R32(c->r[28]+0x00000000u); // 804AFF14
  c->r[0]=R32(c->r[4]+0x00000004u); // 804AFF18
  cmps(c,0,(int32_t)c->r[0],0); // 804AFF1C
  if (crb(c,2)) { goto L_804AFF30; } // 804AFF20
  c->r[0]=R32(c->r[3]+0x00000018u); // 804AFF24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804AFF28
  if (crb(c,2)) { goto L_804B0078; } // 804AFF2C
L_804AFF30:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 804AFF30
  c->r[27]=R32(c->r[25]+0x00000000u); // 804AFF34
  c->r[25]=R32(c->r[28]+0x00000000u); // 804AFF38
  cmps(c,0,(int32_t)c->r[27],0); // 804AFF3C
  W32(c->r[25]+0x00000008u,c->r[3]); // 804AFF40
  c->r[0]=R32(c->r[25]+0x00000010u); // 804AFF44
  if (crb(c,2)) { goto L_804AFF6C; } // 804AFF48
  cmps(c,0,(int32_t)c->r[0],0); // 804AFF4C
  if (crb(c,0)) { goto L_804AFF6C; } // 804AFF50
  cmps(c,0,(int32_t)c->r[0],7); // 804AFF54
  if (crb(c,1)) { goto L_804AFF6C; } // 804AFF58
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 804AFF5C
  c->r[3]=c->r[27]+c->r[0]; // 804AFF60
  c->r[26]=c->r[3]+0x00000004u; // 804AFF64
  goto L_804AFF70; // 804AFF68
L_804AFF6C:;
  c->r[26]=0u+0x00000000u; // 804AFF6C
L_804AFF70:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804AFF70
  c->r[0]=R32(c->r[3]+0x00000004u); // 804AFF74
  cmps(c,0,(int32_t)c->r[0],0); // 804AFF78
  if (crb(c,2)) { goto L_804AFFD4; } // 804AFF7C
  c->r[3]=c->r[1]+0x00000030u; // 804AFF80
  c->r[4]=c->r[1]+0x00000018u; // 804AFF84
  c->r[5]=c->r[1]+0x00000012u; // 804AFF88
  c->r[6]=c->r[1]+0x00000014u; // 804AFF8C
  c->r[7]=c->r[1]+0x00000024u; // 804AFF90
  c->r[8]=c->r[1]+0x0000001Cu; // 804AFF94
  c->r[9]=c->r[1]+0x00000020u; // 804AFF98
  c->r[10]=c->r[1]+0x00000010u; // 804AFF9C
  c->lr=0x804AFFA4u; f_804B06AC(c); // 804AFFA0
  c->r[0]=R32(c->r[25]+0x00000014u); // 804AFFA4
  c->r[3]=c->r[26]|c->r[26]; // 804AFFA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804AFFAC
  c->r[4]=R32(c->r[1]+0x00000018u); // 804AFFB0
  c->r[5]=R16(c->r[1]+0x00000012u); // 804AFFB4
  c->r[6]=R16(c->r[1]+0x00000014u); // 804AFFB8
  c->r[7]=R32(c->r[1]+0x00000024u); // 804AFFBC
  c->r[8]=R32(c->r[25]+0x00000018u); // 804AFFC0
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 804AFFC4
  c->r[10]=R8(c->r[1]+0x00000010u); // 804AFFC8
  c->lr=0x804AFFD0u; f_803A62C8(c); // 804AFFCC
  goto L_804B001C; // 804AFFD0
L_804AFFD4:;
  c->r[3]=c->r[1]+0x00000030u; // 804AFFD4
  c->r[4]=c->r[1]+0x00000018u; // 804AFFD8
  c->r[5]=c->r[1]+0x00000012u; // 804AFFDC
  c->r[6]=c->r[1]+0x00000014u; // 804AFFE0
  c->r[7]=c->r[1]+0x00000028u; // 804AFFE4
  c->r[8]=c->r[1]+0x0000001Cu; // 804AFFE8
  c->r[9]=c->r[1]+0x00000020u; // 804AFFEC
  c->r[10]=c->r[1]+0x00000010u; // 804AFFF0
  c->lr=0x804AFFF8u; f_804B05F0(c); // 804AFFF4
  c->r[4]=R32(c->r[1]+0x00000018u); // 804AFFF8
  c->r[3]=c->r[26]|c->r[26]; // 804AFFFC
  c->r[5]=R16(c->r[1]+0x00000012u); // 804B0000
  c->r[6]=R16(c->r[1]+0x00000014u); // 804B0004
  c->r[7]=R32(c->r[1]+0x00000028u); // 804B0008
  c->r[8]=R32(c->r[25]+0x00000018u); // 804B000C
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 804B0010
  c->r[10]=R8(c->r[1]+0x00000010u); // 804B0014
  c->lr=0x804B001Cu; f_803A60BC(c); // 804B0018
L_804B001C:;
  c->r[4]=R32(c->r[25]+0x00000020u); // 804B001C
  c->r[3]=c->r[26]|c->r[26]; // 804B0020
  c->r[5]=R32(c->r[25]+0x00000024u); // 804B0024
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0028
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B002C
  {uint32_t ea=c->r[25]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B0030
  c->r[6]=R8(c->r[25]+0x00000030u); // 804B0034
  c->r[7]=R8(c->r[25]+0x00000031u); // 804B0038
  c->r[8]=R32(c->r[25]+0x0000002Cu); // 804B003C
  c->lr=0x804B0044u; f_803A6310(c); // 804B0040
  cmps(c,0,(int32_t)c->r[27],0); // 804B0044
  c->r[4]=R32(c->r[25]+0x00000010u); // 804B0048
  if (crb(c,2)) { goto L_804B007C; } // 804B004C
  cmps(c,0,(int32_t)c->r[4],0); // 804B0050
  if (crb(c,0)) { goto L_804B007C; } // 804B0054
  cmps(c,0,(int32_t)c->r[4],7); // 804B0058
  if (crb(c,1)) { goto L_804B007C; } // 804B005C
  c->r[0]=0u+0x00000001u; // 804B0060
  c->r[3]=R32(c->r[27]+0x00000000u); // 804B0064
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 804B0068
  c->r[0]=c->r[3]|c->r[0]; // 804B006C
  W32(c->r[27]+0x00000000u,c->r[0]); // 804B0070
  goto L_804B007C; // 804B0074
L_804B0078:;
  c->r[31]=0u+0x00000000u; // 804B0078
L_804B007C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804B007C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B0080
  cmps(c,0,(int32_t)c->r[0],0); // 804B0084
  if (!crb(c,2)) { goto L_804B0168; } // 804B0088
  c->r[0]=R32(c->r[3]+0x00000004u); // 804B008C
  cmps(c,0,(int32_t)c->r[0],0); // 804B0090
  if (crb(c,2)) { goto L_804B00A4; } // 804B0094
  c->r[3]=c->r[3]+c->r[0]; // 804B0098
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 804B009C
  goto L_804B00A8; // 804B00A0
L_804B00A4:;
  c->r[0]=0u+0x00000000u; // 804B00A4
L_804B00A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B00A8
  if (crb(c,2)) { goto L_804B0168; } // 804B00AC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804B00B0
  c->r[3]=c->r[29]|c->r[29]; // 804B00B4
  c->r[4]=c->r[1]+0x0000002Cu; // 804B00B8
  c->lr=0x804B00C0u; f_804AA65C(c); // 804B00BC
  cmps(c,0,(int32_t)c->r[3],0); // 804B00C0
  c->r[7]=c->r[3]|c->r[3]; // 804B00C4
  if (crb(c,2)) { goto L_804B0164; } // 804B00C8
  c->r[25]=R32(c->r[28]+0x00000000u); // 804B00CC
  c->r[28]=R32(c->r[30]+0x00000000u); // 804B00D0
  W32(c->r[25]+0x0000000Cu,c->r[3]); // 804B00D4
  cmps(c,0,(int32_t)c->r[28],0); // 804B00D8
  c->r[0]=R32(c->r[25]+0x00000010u); // 804B00DC
  if (crb(c,2)) { goto L_804B0104; } // 804B00E0
  cmps(c,0,(int32_t)c->r[0],0); // 804B00E4
  if (crb(c,0)) { goto L_804B0104; } // 804B00E8
  cmps(c,0,(int32_t)c->r[0],7); // 804B00EC
  if (crb(c,1)) { goto L_804B0104; } // 804B00F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B00F4
  c->r[4]=c->r[28]+c->r[0]; // 804B00F8
  c->r[0]=c->r[4]+0x00000004u; // 804B00FC
  goto L_804B0108; // 804B0100
L_804B0104:;
  c->r[0]=0u+0x00000000u; // 804B0104
L_804B0108:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 804B0108
  c->r[6]=R16(c->r[3]+0x0000001Cu); // 804B010C
  cmps(c,0,(int32_t)c->r[4],0); // 804B0110
  c->r[5]=R32(c->r[3]+0x00000018u); // 804B0114
  c->r[3]=c->r[0]|c->r[0]; // 804B0118
  if (crb(c,2)) { goto L_804B0128; } // 804B011C
  c->r[4]=c->r[7]+c->r[4]; // 804B0120
  goto L_804B012C; // 804B0124
L_804B0128:;
  c->r[4]=0u+0x00000000u; // 804B0128
L_804B012C:;
  c->lr=0x804B0130u; f_803A67D8(c); // 804B012C
  cmps(c,0,(int32_t)c->r[28],0); // 804B0130
  c->r[4]=R32(c->r[25]+0x00000010u); // 804B0134
  if (crb(c,2)) { goto L_804B0168; } // 804B0138
  cmps(c,0,(int32_t)c->r[4],0); // 804B013C
  if (crb(c,0)) { goto L_804B0168; } // 804B0140
  cmps(c,0,(int32_t)c->r[4],7); // 804B0144
  if (crb(c,1)) { goto L_804B0168; } // 804B0148
  c->r[0]=0u+0x00000001u; // 804B014C
  c->r[3]=R32(c->r[28]+0x00000000u); // 804B0150
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 804B0154
  c->r[0]=c->r[3]|c->r[0]; // 804B0158
  W32(c->r[28]+0x00000000u,c->r[0]); // 804B015C
  goto L_804B0168; // 804B0160
L_804B0164:;
  c->r[31]=0u+0x00000000u; // 804B0164
L_804B0168:;
  c->r[11]=c->r[1]+0x00000060u; // 804B0168
  c->r[3]=c->r[31]|c->r[31]; // 804B016C
  c->lr=0x804B0174u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B0170
  c->r[0]=R32(c->r[1]+0x00000064u); // 804B0174
  c->lr=c->r[0]; // 804B0178
  c->r[1]=c->r[1]+0x00000060u; // 804B017C
  return; // 804B0180
}

// fn_804B0184
void f_804B0184(Ctx* __restrict c) {
  trace_call(0x804B0184u);
  cmps(c,0,(int32_t)c->r[4],0); // 804B0184
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0188
  if (crb(c,2)) { goto L_804B0198; } // 804B018C
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B0190
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0194
L_804B0198:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B0198
  if (crb(c,2)) { goto L_804B01A8; } // 804B019C
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B01A0
  W32(c->r[5]+0x00000000u,c->r[0]); // 804B01A4
L_804B01A8:;
  cmps(c,0,(int32_t)c->r[6],0); // 804B01A8
  if (crb(c,2)) return; // 804B01AC
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 804B01B0
  W8(c->r[6]+0x00000000u,c->r[0]); // 804B01B4
  return; // 804B01B8
}

// SetArray__Q34nw4r3g3d9ResVtxPosFv
void f_804B01BC(Ctx* __restrict c) {
  trace_call(0x804B01BCu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B01BC
  cmps(c,0,(int32_t)c->r[5],0); // 804B01C0
  if (crb(c,2)) return; // 804B01C4
  c->r[0]=R32(c->r[5]+0x00000008u); // 804B01C8
  c->r[3]=0u+0x00000009u; // 804B01CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B01D0
  if (crb(c,2)) { goto L_804B01E0; } // 804B01D4
  c->r[4]=c->r[5]+c->r[0]; // 804B01D8
  goto L_804B01E4; // 804B01DC
L_804B01E0:;
  c->r[4]=0u+0x00000000u; // 804B01E0
L_804B01E4:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 804B01E4
  f_803A3C04(c); return; // 804B01E8
  return; // 804B01EC
}

// GetArray__Q34nw4r3g3d9ResVtxPosCFPPCvPUc
void f_804B01F0(Ctx* __restrict c) {
  trace_call(0x804B01F0u);
  cmps(c,0,(int32_t)c->r[4],0); // 804B01F0
  if (crb(c,2)) { goto L_804B0218; } // 804B01F4
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B01F8
  c->r[0]=R32(c->r[6]+0x00000008u); // 804B01FC
  cmps(c,0,(int32_t)c->r[0],0); // 804B0200
  if (crb(c,2)) { goto L_804B0210; } // 804B0204
  c->r[0]=c->r[6]+c->r[0]; // 804B0208
  goto L_804B0214; // 804B020C
L_804B0210:;
  c->r[0]=0u+0x00000000u; // 804B0210
L_804B0214:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0214
L_804B0218:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B0218
  if (crb(c,2)) return; // 804B021C
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0220
  c->r[0]=R8(c->r[3]+0x0000001Du); // 804B0224
  W8(c->r[5]+0x00000000u,c->r[0]); // 804B0228
  return; // 804B022C
}

// CopyTo__Q34nw4r3g3d9ResVtxPosCFPv
void f_804B0230(Ctx* __restrict c) {
  trace_call(0x804B0230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0230
  c->r[0]=c->lr; // 804B0234
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B0238
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B023C
  cmps(c,0,(int32_t)c->r[5],0); // 804B0240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B0244
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B0248
  c->r[30]=c->r[4]|c->r[4]; // 804B024C
  if (crb(c,2)) { goto L_804B0274; } // 804B0250
  c->r[31]=R32(c->r[5]+0x00000000u); // 804B0254
  c->r[4]=c->r[5]|c->r[5]; // 804B0258
  c->r[3]=c->r[30]|c->r[30]; // 804B025C
  c->r[5]=c->r[31]|c->r[31]; // 804B0260
  c->lr=0x804B0268u; f_804BE110(c); // 804B0264
  c->r[3]=c->r[30]|c->r[30]; // 804B0268
  c->r[4]=c->r[31]|c->r[31]; // 804B026C
  c->lr=0x804B0274u; f_8037723C(c); // 804B0270
L_804B0274:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B0274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B0278
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B027C
  c->lr=c->r[0]; // 804B0280
  c->r[1]=c->r[1]+0x00000010u; // 804B0284
  return; // 804B0288
}

// SetArray__Q34nw4r3g3d9ResVtxNrmFv
void f_804B028C(Ctx* __restrict c) {
  trace_call(0x804B028Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B028C
  cmps(c,0,(int32_t)c->r[5],0); // 804B0290
  if (crb(c,2)) return; // 804B0294
  c->r[0]=R32(c->r[5]+0x00000008u); // 804B0298
  c->r[3]=0u+0x0000000Au; // 804B029C
  cmps(c,0,(int32_t)c->r[0],0); // 804B02A0
  if (crb(c,2)) { goto L_804B02B0; } // 804B02A4
  c->r[4]=c->r[5]+c->r[0]; // 804B02A8
  goto L_804B02B4; // 804B02AC
L_804B02B0:;
  c->r[4]=0u+0x00000000u; // 804B02B0
L_804B02B4:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 804B02B4
  f_803A3C04(c); return; // 804B02B8
  return; // 804B02BC
}

// GetArray__Q34nw4r3g3d9ResVtxNrmCFPPCvPUc
void f_804B02C0(Ctx* __restrict c) {
  trace_call(0x804B02C0u);
  cmps(c,0,(int32_t)c->r[4],0); // 804B02C0
  if (crb(c,2)) { goto L_804B02E8; } // 804B02C4
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B02C8
  c->r[0]=R32(c->r[6]+0x00000008u); // 804B02CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B02D0
  if (crb(c,2)) { goto L_804B02E0; } // 804B02D4
  c->r[0]=c->r[6]+c->r[0]; // 804B02D8
  goto L_804B02E4; // 804B02DC
L_804B02E0:;
  c->r[0]=0u+0x00000000u; // 804B02E0
L_804B02E4:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B02E4
L_804B02E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B02E8
  if (crb(c,2)) return; // 804B02EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B02F0
  c->r[0]=R8(c->r[3]+0x0000001Du); // 804B02F4
  W8(c->r[5]+0x00000000u,c->r[0]); // 804B02F8
  return; // 804B02FC
}

// CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv
void f_804B0300(Ctx* __restrict c) {
  trace_call(0x804B0300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0300
  c->r[0]=c->lr; // 804B0304
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B0308
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B030C
  cmps(c,0,(int32_t)c->r[5],0); // 804B0310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B0314
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B0318
  c->r[30]=c->r[4]|c->r[4]; // 804B031C
  if (crb(c,2)) { goto L_804B0344; } // 804B0320
  c->r[31]=R32(c->r[5]+0x00000000u); // 804B0324
  c->r[4]=c->r[5]|c->r[5]; // 804B0328
  c->r[3]=c->r[30]|c->r[30]; // 804B032C
  c->r[5]=c->r[31]|c->r[31]; // 804B0330
  c->lr=0x804B0338u; f_804BE110(c); // 804B0334
  c->r[3]=c->r[30]|c->r[30]; // 804B0338
  c->r[4]=c->r[31]|c->r[31]; // 804B033C
  c->lr=0x804B0344u; f_8037723C(c); // 804B0340
L_804B0344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B0344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B0348
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B034C
  c->lr=c->r[0]; // 804B0350
  c->r[1]=c->r[1]+0x00000010u; // 804B0354
  return; // 804B0358
}

// SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr
void f_804B035C(Ctx* __restrict c) {
  trace_call(0x804B035Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B035C
  cmps(c,0,(int32_t)c->r[5],0); // 804B0360
  if (crb(c,2)) return; // 804B0364
  c->r[0]=c->r[4]+0xFFFFFFF5u; // 804B0368
  cmpu(c,0,c->r[0],0x00000001u); // 804B036C
  if (crb(c,1)) return; // 804B0370
  c->r[0]=R32(c->r[5]+0x00000008u); // 804B0374
  c->r[3]=c->r[4]|c->r[4]; // 804B0378
  cmps(c,0,(int32_t)c->r[0],0); // 804B037C
  if (crb(c,2)) { goto L_804B038C; } // 804B0380
  c->r[4]=c->r[5]+c->r[0]; // 804B0384
  goto L_804B0390; // 804B0388
L_804B038C:;
  c->r[4]=0u+0x00000000u; // 804B038C
L_804B0390:;
  c->r[5]=R8(c->r[5]+0x0000001Cu); // 804B0390
  f_803A3C04(c); return; // 804B0394
  return; // 804B0398
}

// GetArray__Q34nw4r3g3d9ResVtxClrCFPPCvPUc
void f_804B039C(Ctx* __restrict c) {
  trace_call(0x804B039Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 804B039C
  if (crb(c,2)) { goto L_804B03C4; } // 804B03A0
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B03A4
  c->r[0]=R32(c->r[6]+0x00000008u); // 804B03A8
  cmps(c,0,(int32_t)c->r[0],0); // 804B03AC
  if (crb(c,2)) { goto L_804B03BC; } // 804B03B0
  c->r[0]=c->r[6]+c->r[0]; // 804B03B4
  goto L_804B03C0; // 804B03B8
L_804B03BC:;
  c->r[0]=0u+0x00000000u; // 804B03BC
L_804B03C0:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B03C0
L_804B03C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B03C4
  if (crb(c,2)) return; // 804B03C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B03CC
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 804B03D0
  W8(c->r[5]+0x00000000u,c->r[0]); // 804B03D4
  return; // 804B03D8
}

// CopyTo__Q34nw4r3g3d9ResVtxClrCFPv
void f_804B03DC(Ctx* __restrict c) {
  trace_call(0x804B03DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B03DC
  c->r[0]=c->lr; // 804B03E0
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B03E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B03E8
  cmps(c,0,(int32_t)c->r[5],0); // 804B03EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B03F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B03F4
  c->r[30]=c->r[4]|c->r[4]; // 804B03F8
  if (crb(c,2)) { goto L_804B0420; } // 804B03FC
  c->r[31]=R32(c->r[5]+0x00000000u); // 804B0400
  c->r[4]=c->r[5]|c->r[5]; // 804B0404
  c->r[3]=c->r[30]|c->r[30]; // 804B0408
  c->r[5]=c->r[31]|c->r[31]; // 804B040C
  c->lr=0x804B0414u; f_804BE110(c); // 804B0410
  c->r[3]=c->r[30]|c->r[30]; // 804B0414
  c->r[4]=c->r[31]|c->r[31]; // 804B0418
  c->lr=0x804B0420u; f_8037723C(c); // 804B041C
L_804B0420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B0420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B0424
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B0428
  c->lr=c->r[0]; // 804B042C
  c->r[1]=c->r[1]+0x00000010u; // 804B0430
  return; // 804B0434
}

// fn_804B0438
void f_804B0438(Ctx* __restrict c) {
  trace_call(0x804B0438u);
  cmps(c,0,(int32_t)c->r[4],0); // 804B0438
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B043C
  if (crb(c,2)) { goto L_804B044C; } // 804B0440
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B0444
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0448
L_804B044C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B044C
  if (crb(c,2)) { goto L_804B045C; } // 804B0450
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B0454
  W32(c->r[5]+0x00000000u,c->r[0]); // 804B0458
L_804B045C:;
  cmps(c,0,(int32_t)c->r[6],0); // 804B045C
  if (crb(c,2)) return; // 804B0460
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 804B0464
  W8(c->r[6]+0x00000000u,c->r[0]); // 804B0468
  return; // 804B046C
}

// GetArray__Q34nw4r3g3d14ResVtxTexCoordCFPPCvPUc
void f_804B0470(Ctx* __restrict c) {
  trace_call(0x804B0470u);
  cmps(c,0,(int32_t)c->r[4],0); // 804B0470
  if (crb(c,2)) { goto L_804B0498; } // 804B0474
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B0478
  c->r[0]=R32(c->r[6]+0x00000008u); // 804B047C
  cmps(c,0,(int32_t)c->r[0],0); // 804B0480
  if (crb(c,2)) { goto L_804B0490; } // 804B0484
  c->r[0]=c->r[6]+c->r[0]; // 804B0488
  goto L_804B0494; // 804B048C
L_804B0490:;
  c->r[0]=0u+0x00000000u; // 804B0490
L_804B0494:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0494
L_804B0498:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B0498
  if (crb(c,2)) return; // 804B049C
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B04A0
  c->r[0]=R8(c->r[3]+0x0000001Du); // 804B04A4
  W8(c->r[5]+0x00000000u,c->r[0]); // 804B04A8
  return; // 804B04AC
}

// SetArray__Q34nw4r3g3d12ResVtxFurPosFUs
void f_804B04B0(Ctx* __restrict c) {
  trace_call(0x804B04B0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B04B0
  cmps(c,0,(int32_t)c->r[6],0); // 804B04B4
  if (crb(c,2)) return; // 804B04B8
  c->r[7]=R32(c->r[6]+0x00000008u); // 804B04BC
  c->r[3]=0u+0x00000000u; // 804B04C0
  c->r[5]=0u+0x00000000u; // 804B04C4
  cmps(c,0,(int32_t)c->r[7],0); // 804B04C8
  if (crb(c,2)) { goto L_804B04E0; } // 804B04CC
  c->r[0]=R32(c->r[6]+0x00000020u); // 804B04D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B04D4
  if (!crb(c,0)) { goto L_804B04E0; } // 804B04D8
  c->r[5]=0u+0x00000001u; // 804B04DC
L_804B04E0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B04E0
  if (crb(c,2)) { goto L_804B04F4; } // 804B04E4
  cmps(c,0,(int32_t)c->r[4],0); // 804B04E8
  if (crb(c,0)) { goto L_804B04F4; } // 804B04EC
  c->r[3]=0u+0x00000001u; // 804B04F0
L_804B04F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804B04F4
  c->r[3]=0u+0x00000009u; // 804B04F8
  if (crb(c,2)) { goto L_804B0514; } // 804B04FC
  c->r[5]=R32(c->r[6]+0x00000024u); // 804B0500
  c->r[0]=c->r[6]+c->r[7]; // 804B0504
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 804B0508
  c->r[4]=c->r[4]+c->r[0]; // 804B050C
  goto L_804B0518; // 804B0510
L_804B0514:;
  c->r[4]=0u+0x00000000u; // 804B0514
L_804B0518:;
  c->r[5]=R8(c->r[6]+0x0000001Du); // 804B0518
  f_803A3C04(c); return; // 804B051C
  return; // 804B0520
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb
void f_804B0524(Ctx* __restrict c) {
  trace_call(0x804B0524u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0524
  cmps(c,0,(int32_t)c->r[4],0); // 804B0528
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B052C
  if (crb(c,2)) { goto L_804B0538; } // 804B0530
  f_8037723C(c); return; // 804B0534
L_804B0538:;
  f_80377298(c); return; // 804B0538
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb
void f_804B053C(Ctx* __restrict c) {
  trace_call(0x804B053Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B053C
  cmps(c,0,(int32_t)c->r[4],0); // 804B0540
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B0544
  if (crb(c,2)) { goto L_804B0550; } // 804B0548
  f_8037723C(c); return; // 804B054C
L_804B0550:;
  f_80377298(c); return; // 804B0550
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb_804B0554
void f_804B0554(Ctx* __restrict c) {
  trace_call(0x804B0554u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0554
  cmps(c,0,(int32_t)c->r[4],0); // 804B0558
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B055C
  if (crb(c,2)) { goto L_804B0568; } // 804B0560
  f_8037723C(c); return; // 804B0564
L_804B0568:;
  f_80377298(c); return; // 804B0568
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb_804B056C
void f_804B056C(Ctx* __restrict c) {
  trace_call(0x804B056Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B056C
  cmps(c,0,(int32_t)c->r[4],0); // 804B0570
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B0574
  if (crb(c,2)) { goto L_804B0580; } // 804B0578
  f_8037723C(c); return; // 804B057C
L_804B0580:;
  f_80377298(c); return; // 804B0580
}

// DCStore__Q34nw4r3g3d9ResVtxClrFb
void f_804B0584(Ctx* __restrict c) {
  trace_call(0x804B0584u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0584
  cmps(c,0,(int32_t)c->r[4],0); // 804B0588
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B058C
  if (crb(c,2)) { goto L_804B0598; } // 804B0590
  f_8037723C(c); return; // 804B0594
L_804B0598:;
  f_80377298(c); return; // 804B0598
}

// DCStore__Q34nw4r3g3d14ResVtxTexCoordFb
void f_804B059C(Ctx* __restrict c) {
  trace_call(0x804B059Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B059C
  cmps(c,0,(int32_t)c->r[4],0); // 804B05A0
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B05A4
  if (crb(c,2)) { goto L_804B05B0; } // 804B05A8
  f_8037723C(c); return; // 804B05AC
L_804B05B0:;
  f_80377298(c); return; // 804B05B0
}

// DCStore__Q34nw4r3g3d7ResPlttFb
void f_804B05B4(Ctx* __restrict c) {
  trace_call(0x804B05B4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B05B4
  cmps(c,0,(int32_t)c->r[4],0); // 804B05B8
  c->r[4]=R32(c->r[3]+0x00000004u); // 804B05BC
  if (crb(c,2)) { goto L_804B05C8; } // 804B05C0
  f_8037723C(c); return; // 804B05C4
L_804B05C8:;
  f_80377298(c); return; // 804B05C8
}

// fn_804B05CC
void f_804B05CC(Ctx* __restrict c) {
  trace_call(0x804B05CCu);
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B05CC
  c->r[3]=0u+0x00000000u; // 804B05D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 804B05D4
  cmpu(c,0,c->r[0],0x00000003u); // 804B05D8
  if (crb(c,2)) { goto L_804B05E8; } // 804B05DC
  cmpu(c,0,c->r[0],0x00000001u); // 804B05E0
  if (!crb(c,2)) return; // 804B05E4
L_804B05E8:;
  c->r[3]=0u+0x00000001u; // 804B05E8
  return; // 804B05EC
}

// GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
void f_804B05F0(Ctx* __restrict c) {
  trace_call(0x804B05F0u);
  c->r[11]=R32(c->r[3]+0x00000000u); // 804B05F0
  c->r[0]=R32(c->r[11]+0x00000018u); // 804B05F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804B05F8
  if (crb(c,2)) { goto L_804B0608; } // 804B05FC
  c->r[3]=0u+0x00000000u; // 804B0600
  return; // 804B0604
L_804B0608:;
  cmps(c,0,(int32_t)c->r[4],0); // 804B0608
  if (crb(c,2)) { goto L_804B062C; } // 804B060C
  c->r[0]=R32(c->r[11]+0x00000010u); // 804B0610
  cmps(c,0,(int32_t)c->r[0],0); // 804B0614
  if (crb(c,2)) { goto L_804B0624; } // 804B0618
  c->r[0]=c->r[11]+c->r[0]; // 804B061C
  goto L_804B0628; // 804B0620
L_804B0624:;
  c->r[0]=0u+0x00000000u; // 804B0624
L_804B0628:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0628
L_804B062C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B062C
  if (crb(c,2)) { goto L_804B0640; } // 804B0630
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B0634
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 804B0638
  W16(c->r[5]+0x00000000u,c->r[0]); // 804B063C
L_804B0640:;
  cmps(c,0,(int32_t)c->r[6],0); // 804B0640
  if (crb(c,2)) { goto L_804B0654; } // 804B0644
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0648
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 804B064C
  W16(c->r[6]+0x00000000u,c->r[0]); // 804B0650
L_804B0654:;
  cmps(c,0,(int32_t)c->r[7],0); // 804B0654
  if (crb(c,2)) { goto L_804B0664; } // 804B0658
  c->r[0]=R32(c->r[11]+0x00000020u); // 804B065C
  W32(c->r[7]+0x00000000u,c->r[0]); // 804B0660
L_804B0664:;
  cmps(c,0,(int32_t)c->r[8],0); // 804B0664
  if (crb(c,2)) { goto L_804B0674; } // 804B0668
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B066C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 804B0670
L_804B0674:;
  cmps(c,0,(int32_t)c->r[9],0); // 804B0674
  if (crb(c,2)) { goto L_804B0684; } // 804B0678
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B067C
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 804B0680
L_804B0684:;
  cmps(c,0,(int32_t)c->r[10],0); // 804B0684
  if (crb(c,2)) { goto L_804B06A4; } // 804B0688
  c->r[3]=R32(c->r[11]+0x00000024u); // 804B068C
  c->r[0]=c->r[3]^0x00000001u; // 804B0690
  c->r[0]=cntlz(c->r[0]); // 804B0694
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 804B0698
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804B069C
  W8(c->r[10]+0x00000000u,c->r[0]); // 804B06A0
L_804B06A4:;
  c->r[3]=0u+0x00000001u; // 804B06A4
  return; // 804B06A8
}

// GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
void f_804B06AC(Ctx* __restrict c) {
  trace_call(0x804B06ACu);
  c->r[11]=R32(c->r[3]+0x00000000u); // 804B06AC
  c->r[0]=R32(c->r[11]+0x00000018u); // 804B06B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804B06B4
  if (!crb(c,2)) { goto L_804B06C4; } // 804B06B8
  c->r[3]=0u+0x00000000u; // 804B06BC
  return; // 804B06C0
L_804B06C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804B06C4
  if (crb(c,2)) { goto L_804B06E8; } // 804B06C8
  c->r[0]=R32(c->r[11]+0x00000010u); // 804B06CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B06D0
  if (crb(c,2)) { goto L_804B06E0; } // 804B06D4
  c->r[0]=c->r[11]+c->r[0]; // 804B06D8
  goto L_804B06E4; // 804B06DC
L_804B06E0:;
  c->r[0]=0u+0x00000000u; // 804B06E0
L_804B06E4:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B06E4
L_804B06E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B06E8
  if (crb(c,2)) { goto L_804B06FC; } // 804B06EC
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B06F0
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 804B06F4
  W16(c->r[5]+0x00000000u,c->r[0]); // 804B06F8
L_804B06FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 804B06FC
  if (crb(c,2)) { goto L_804B0710; } // 804B0700
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0704
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 804B0708
  W16(c->r[6]+0x00000000u,c->r[0]); // 804B070C
L_804B0710:;
  cmps(c,0,(int32_t)c->r[7],0); // 804B0710
  if (crb(c,2)) { goto L_804B0720; } // 804B0714
  c->r[0]=R32(c->r[11]+0x00000020u); // 804B0718
  W32(c->r[7]+0x00000000u,c->r[0]); // 804B071C
L_804B0720:;
  cmps(c,0,(int32_t)c->r[8],0); // 804B0720
  if (crb(c,2)) { goto L_804B0730; } // 804B0724
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0728
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 804B072C
L_804B0730:;
  cmps(c,0,(int32_t)c->r[9],0); // 804B0730
  if (crb(c,2)) { goto L_804B0740; } // 804B0734
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0738
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 804B073C
L_804B0740:;
  cmps(c,0,(int32_t)c->r[10],0); // 804B0740
  if (crb(c,2)) { goto L_804B0760; } // 804B0744
  c->r[3]=R32(c->r[11]+0x00000024u); // 804B0748
  c->r[0]=c->r[3]^0x00000001u; // 804B074C
  c->r[0]=cntlz(c->r[0]); // 804B0750
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 804B0754
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804B0758
  W8(c->r[10]+0x00000000u,c->r[0]); // 804B075C
L_804B0760:;
  c->r[3]=0u+0x00000001u; // 804B0760
  return; // 804B0764
}

// fn_804B0768
void f_804B0768(Ctx* __restrict c) {
  trace_call(0x804B0768u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 804B0768
  c->r[3]=0u+0x00000000u; // 804B076C
  c->r[0]=R32(c->r[4]+0x00000008u); // 804B0770
  cmpu(c,0,c->r[0],0x00000003u); // 804B0774
  if (crb(c,2)) { goto L_804B0784; } // 804B0778
  cmpu(c,0,c->r[0],0x00000001u); // 804B077C
  if (!crb(c,2)) return; // 804B0780
L_804B0784:;
  c->r[3]=0u+0x00000001u; // 804B0784
  return; // 804B0788
}

// Init__Q34nw4r3g3d6ResTexFv
void f_804B078C(Ctx* __restrict c) {
  trace_call(0x804B078Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B078C
  c->r[4]=R32(c->r[3]+0x00000004u); // 804B0790
  f_8037726C(c); return; // 804B0794
}

// PatchChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_804B0798(Ctx* __restrict c) {
  trace_call(0x804B0798u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0798
  c->r[0]=c->lr; // 804B079C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B07A0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B07A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B07A8
  c->r[30]=c->r[4]|c->r[4]; // 804B07AC
  W32(c->r[1]+0x00000024u,c->r[29]); // 804B07B0
  c->r[29]=R32(c->r[3]+0x00000000u); // 804B07B4
  cmps(c,0,(int32_t)c->r[29],0); // 804B07B8
  if (crb(c,2)) { goto L_804B0918; } // 804B07BC
  c->r[31]=R32(c->r[4]+0x00000000u); // 804B07C0
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 804B07C4
  if (crb(c,2)) { goto L_804B0820; } // 804B07C8
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B07CC
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 804B07D0
  if (crb(c,2)) { goto L_804B07F0; } // 804B07D4
  {uint32_t ea=c->r[2]+0x000014A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B07D8
  c->r[31]=c->r[31]|0x00000018u; // 804B07DC
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B07E0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B07E4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804B07E8
  goto L_804B0820; // 804B07EC
L_804B07F0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804B07F0
  c->r[3]=rotl(c->r[31],0)&0xFFFFFFEFu; // 804B07F4
  if (crb(c,2)) { goto L_804B0800; } // 804B07F8
  c->r[3]=c->r[31]|0x00000010u; // 804B07FC
L_804B0800:;
  {uint32_t ea=c->r[29]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0800
  c->r[0]=0u+0xFFFFFFF5u; // 804B0804
  c->r[31]=c->r[3]&c->r[0]; // 804B0808
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804B080C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0810
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B0814
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0818
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B081C
L_804B0820:;
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 804B0820
  if (crb(c,2)) { goto L_804B08A4; } // 804B0824
  c->r[0]=R32(c->r[29]+0x00000014u); // 804B0828
  {uint32_t ea=c->r[4]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B082C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0830
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804B0834
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0838
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B083C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804B0840
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804B0844
  if (crb(c,2)) { goto L_804B085C; } // 804B0848
  c->r[3]=c->r[4]+0x0000001Cu; // 804B084C
  c->lr=0x804B0854u; f_80382F00(c); // 804B0850
  c->r[31]=c->r[31]|0x00000020u; // 804B0854
  goto L_804B0888; // 804B0858
L_804B085C:;
  {uint32_t ea=c->r[29]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B085C
  c->r[3]=c->r[4]+0x0000001Cu; // 804B0860
  {uint32_t ea=c->r[2]+0x000014A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0864
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0868
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B086C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804B0870
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804B0874
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804B0878
  c->lr=0x804B0880u; f_804E18A0(c); // 804B087C
  c->r[0]=0u+0xFFFFFFD9u; // 804B0880
  c->r[31]=c->r[31]&c->r[0]; // 804B0884
L_804B0888:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0888
  c->r[31]=c->r[31]|0x80000000u; // 804B088C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0890
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0894
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[2]);} // 804B0898
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 804B089C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 804B08A0
L_804B08A4:;
  c->r[0]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[0]); // 804B08A4
  if (crb(c,2)) { goto L_804B08F0; } // 804B08A8
  c->r[0]=R32(c->r[29]+0x00000014u); // 804B08AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804B08B0
  if (crb(c,2)) { goto L_804B08D0; } // 804B08B4
  {uint32_t ea=c->r[2]+0x000014A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B08B8
  c->r[31]=c->r[31]|0x00000040u; // 804B08BC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 804B08C0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 804B08C4
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804B08C8
  goto L_804B08F0; // 804B08CC
L_804B08D0:;
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B08D0
  c->r[0]=0u+0xFFFFFFB9u; // 804B08D4
  c->r[31]=c->r[31]&c->r[0]; // 804B08D8
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804B08DC
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B08E0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 804B08E4
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B08E8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 804B08EC
L_804B08F0:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804B08F0
  if (crb(c,2)) { goto L_804B0910; } // 804B08F4
  c->r[0]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[0]); // 804B08F8
  if (crb(c,2)) { goto L_804B0910; } // 804B08FC
  c->r[31]=c->r[31]|0x00000004u; // 804B0900
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804B0904
  if (crb(c,2)) { goto L_804B0910; } // 804B0908
  c->r[31]=c->r[31]|0x00000002u; // 804B090C
L_804B0910:;
  c->r[0]=rotl(c->r[31],0)&0xFFFFFC7Fu; // 804B0910
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B0914
L_804B0918:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B0918
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B091C
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B0920
  c->r[29]=R32(c->r[1]+0x00000024u); // 804B0924
  c->lr=c->r[0]; // 804B0928
  c->r[1]=c->r[1]+0x00000030u; // 804B092C
  return; // 804B0930
}

// CalcChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_804B0934(Ctx* __restrict c) {
  trace_call(0x804B0934u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0934
  c->r[0]=c->lr; // 804B0938
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B093C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B0940
  c->r[31]=R32(c->r[3]+0x00000000u); // 804B0944
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B0948
  cmps(c,0,(int32_t)c->r[31],0); // 804B094C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804B0950
  c->r[29]=c->r[4]|c->r[4]; // 804B0954
  if (crb(c,2)) { goto L_804B0A80; } // 804B0958
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B095C
  c->r[30]=0u+0x00000000u; // 804B0960
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 804B0964
  if (crb(c,2)) { goto L_804B0984; } // 804B0968
  {uint32_t ea=c->r[2]+0x000014A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B096C
  c->r[30]=c->r[30]|0x00000018u; // 804B0970
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B0974
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B0978
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804B097C
  goto L_804B09A8; // 804B0980
L_804B0984:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804B0984
  if (crb(c,2)) { goto L_804B0990; } // 804B0988
  c->r[30]=c->r[30]|0x00000010u; // 804B098C
L_804B0990:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0990
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804B0994
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0998
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B099C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B09A0
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B09A4
L_804B09A8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B09A8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804B09AC
  if (crb(c,2)) { goto L_804B09C4; } // 804B09B0
  c->r[3]=c->r[4]+0x0000001Cu; // 804B09B4
  c->lr=0x804B09BCu; f_80382F00(c); // 804B09B8
  c->r[30]=c->r[30]|0x00000020u; // 804B09BC
  goto L_804B0A0C; // 804B09C0
L_804B09C4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B09C4
  c->r[3]=c->r[4]+0x0000001Cu; // 804B09C8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 804B09CC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B09D0
  {uint32_t ea=c->r[2]+0x000014A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B09D4
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 804B09D8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[5]);} // 804B09DC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[4]);} // 804B09E0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B09E4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B09E8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804B09EC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 804B09F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804B09F4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 804B09F8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 804B09FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 804B0A00
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804B0A04
  c->lr=0x804B0A0Cu; f_804E18A0(c); // 804B0A08
L_804B0A0C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B0A0C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804B0A10
  if (crb(c,2)) { goto L_804B0A20; } // 804B0A14
  c->r[30]=c->r[30]|0x00000040u; // 804B0A18
  goto L_804B0A38; // 804B0A1C
L_804B0A20:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0A20
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 804B0A24
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0A28
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 804B0A2C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0A30
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 804B0A34
L_804B0A38:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 804B0A38
  if (crb(c,2)) { goto L_804B0A58; } // 804B0A3C
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 804B0A40
  if (crb(c,2)) { goto L_804B0A58; } // 804B0A44
  c->r[30]=c->r[30]|0x00000004u; // 804B0A48
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 804B0A4C
  if (crb(c,2)) { goto L_804B0A58; } // 804B0A50
  c->r[30]=c->r[30]|0x00000002u; // 804B0A54
L_804B0A58:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B0A58
  c->r[30]=c->r[30]|0x80000000u; // 804B0A5C
  c->r[30]=c->r[30]|0x00000001u; // 804B0A60
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 804B0A64
  if (crb(c,2)) { goto L_804B0A70; } // 804B0A68
  c->r[30]=c->r[30]|0x00000400u; // 804B0A6C
L_804B0A70:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 804B0A70
  if (crb(c,2)) { goto L_804B0A7C; } // 804B0A74
  c->r[30]=c->r[30]|0x00000800u; // 804B0A78
L_804B0A7C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 804B0A7C
L_804B0A80:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B0A80
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B0A84
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B0A88
  c->r[29]=R32(c->r[1]+0x00000024u); // 804B0A8C
  c->lr=c->r[0]; // 804B0A90
  c->r[1]=c->r[1]+0x00000030u; // 804B0A94
  return; // 804B0A98
}

// fn_804B0A9C
void f_804B0A9C(Ctx* __restrict c) {
  trace_call(0x804B0A9Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0A9C
  cmps(c,0,(int32_t)c->r[3],0); // 804B0AA0
  if (crb(c,2)) return; // 804B0AA4
  {uint32_t ea=c->r[2]+0x000014A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0AA8
  fcmp(c,0,c->f[0],c->f[1]); // 804B0AAC
  if (!crb(c,2)) { goto L_804B0AD4; } // 804B0AB0
  fcmp(c,0,c->f[0],c->f[2]); // 804B0AB4
  if (!crb(c,2)) { goto L_804B0AD4; } // 804B0AB8
  fcmp(c,0,c->f[0],c->f[3]); // 804B0ABC
  if (!crb(c,2)) { goto L_804B0AD4; } // 804B0AC0
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B0AC4
  c->r[0]=c->r[0]|0x00000002u; // 804B0AC8
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B0ACC
  goto L_804B0AE0; // 804B0AD0
L_804B0AD4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B0AD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804B0AD8
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B0ADC
L_804B0AE0:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B0AE0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804B0AE4
  if (crb(c,2)) { goto L_804B0B08; } // 804B0AE8
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804B0AEC
  if (crb(c,2)) { goto L_804B0B08; } // 804B0AF0
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 804B0AF4
  if (crb(c,2)) { goto L_804B0B08; } // 804B0AF8
  c->r[0]=c->r[4]|0x00000001u; // 804B0AFC
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B0B00
  goto L_804B0B14; // 804B0B04
L_804B0B08:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B0B08
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804B0B0C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B0B10
L_804B0B14:;
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 804B0B14
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 804B0B18
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[3]);} // 804B0B1C
  return; // 804B0B20
}

// GetResKeyFrameAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d18ResKeyFrameAnmDataf
void f_804B0B24(Ctx* __restrict c) {
  trace_call(0x804B0B24u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 804B0B24
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0B28
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 804B0B2C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0B30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B0B34
  fcmp(c,0,c->f[1],c->f[2]); // 804B0B38
  c->r[4]=c->r[3]+c->r[0]; // 804B0B3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0B40
  if (!crb(c,2)) { goto L_804B0B50; } // 804B0B44
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0B48
  goto L_804B0C48; // 804B0B4C
L_804B0B50:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0B50
  fcmp(c,0,c->f[0],c->f[1]); // 804B0B54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0B58
  if (!crb(c,2)) { goto L_804B0B68; } // 804B0B5C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0B60
  goto L_804B0C48; // 804B0B64
L_804B0B68:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 804B0B68
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 804B0B6C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 804B0B70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0B74
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804B0B78
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804B0B7C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 804B0B80
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804B0B84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B0B88
  c->r[3]=c->r[3]+c->r[0]; // 804B0B8C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B0B90
  fcmp(c,0,c->f[1],c->f[0]); // 804B0B94
  if (!crb(c,0)) { goto L_804B0BAC; } // 804B0B98
L_804B0B9C:;
  {uint32_t ea=c->r[3]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B0B9C
  fcmp(c,0,c->f[1],c->f[0]); // 804B0BA0
  if (crb(c,0)) { IRQCHK(c); goto L_804B0B9C; } // 804B0BA4
  goto L_804B0BC0; // 804B0BA8
L_804B0BAC:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B0BAC
  fcmp(c,0,c->f[0],c->f[1]); // 804B0BB0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0BB4
  if (crb(c,2)) { IRQCHK(c); goto L_804B0BAC; } // 804B0BB8
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 804B0BBC
L_804B0BC0:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B0BC0
  fcmp(c,0,c->f[3],c->f[1]); // 804B0BC4
  if (!crb(c,2)) { goto L_804B0BD4; } // 804B0BC8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0BCC
  goto L_804B0C48; // 804B0BD0
L_804B0BD4:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0BD4
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 804B0BD8
  {uint32_t ea=c->r[2]+0x000014B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0BDC
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[3]); // 804B0BE0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0BE4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804B0BE8
  {uint32_t ea=c->r[2]+0x000014B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B0BEC
  c->f[8]=c->ps1[8]=fres(c->f[11]); // 804B0BF0
  {uint32_t ea=c->r[2]+0x000014B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B0BF4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 804B0BF8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B0BFC
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[9]=t0; c->ps1[9]=t1;} // 804B0C00
  {double t0=S(c->f[8]*c->f[8]), t1=S(c->ps1[8]*c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 804B0C04
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[2]); // 804B0C08
  {double t0=S(-std::fma(c->f[11],c->f[8],-c->f[9])), t1=S(-std::fma(c->ps1[11],c->ps1[8],-c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 804B0C0C
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[8]); // 804B0C10
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[9]); // 804B0C14
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[4]); // 804B0C18
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[7]); // 804B0C1C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 804B0C20
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 804B0C24
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 804B0C28
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804B0C2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804B0C30
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 804B0C34
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804B0C38
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[1]); // 804B0C3C
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 804B0C40
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804B0C44
L_804B0C48:;
  c->r[1]=c->r[1]+0x00000010u; // 804B0C48
  return; // 804B0C4C
}

// GetResColorAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d21ResColorAnmFramesDataf
void f_804B0C50(Ctx* __restrict c) {
  trace_call(0x804B0C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0C50
  c->r[0]=c->lr; // 804B0C54
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B0C58
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B0C5C
  c->r[31]=c->r[3]|c->r[3]; // 804B0C60
  c->r[3]=c->r[1]+0x00000018u; // 804B0C64
  c->lr=0x804B0C6Cu; f_803BA500(c); // 804B0C68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 804B0C6C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 804B0C70
  {uint32_t ea=c->r[2]+0x000014BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0C74
  c->f[2]=c->ps1[2]=S(c->f[2]); // 804B0C78
  fcmp(c,0,c->f[0],c->f[1]); // 804B0C7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 804B0C80
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 804B0C84
  c->r[3]=R32(c->r[1]+0x00000024u); // 804B0C88
  if (!crb(c,2)) { goto L_804B0C9C; } // 804B0C8C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804B0C90
  c->r[3]=R32(c->r[31]+c->r[0]); // 804B0C94
  goto L_804B0D3C; // 804B0C98
L_804B0C9C:;
  c->r[0]=c->r[3]+0x00000001u; // 804B0C9C
  {uint32_t ea=c->r[2]+0x000014C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0CA0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804B0CA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804B0CA8
  c->r[3]=R32(c->r[31]+c->r[3]); // 804B0CAC
  c->r[0]=R32(c->r[31]+c->r[0]); // 804B0CB0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804B0CB4
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B0CB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B0CBC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 804B0CC0
  c->r[10]=R8(c->r[1]+0x00000014u); // 804B0CC4
  c->r[0]=R8(c->r[1]+0x00000010u); // 804B0CC8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 804B0CCC
  c->r[3]=c->r[0]-c->r[10]; // 804B0CD0
  c->r[7]=R8(c->r[1]+0x00000015u); // 804B0CD4
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 804B0CD8
  c->r[0]=R8(c->r[1]+0x00000011u); // 804B0CDC
  c->r[8]=R8(c->r[1]+0x00000016u); // 804B0CE0
  c->r[4]=c->r[0]-c->r[7]; // 804B0CE4
  c->r[3]=R8(c->r[1]+0x00000012u); // 804B0CE8
  c->r[9]=R8(c->r[1]+0x00000017u); // 804B0CEC
  c->r[0]=R8(c->r[1]+0x00000013u); // 804B0CF0
  c->r[3]=c->r[3]-c->r[8]; // 804B0CF4
  c->r[5]=sraw(c,c->r[5],15); // 804B0CF8
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 804B0CFC
  c->r[0]=c->r[0]-c->r[9]; // 804B0D00
  c->r[5]=c->r[10]+c->r[5]; // 804B0D04
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 804B0D08
  c->r[4]=sraw(c,c->r[4],15); // 804B0D0C
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 804B0D10
  c->r[4]=c->r[7]+c->r[4]; // 804B0D14
  W8(c->r[1]+0x0000000Du,c->r[4]); // 804B0D18
  c->r[3]=sraw(c,c->r[3],15); // 804B0D1C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 804B0D20
  c->r[3]=c->r[8]+c->r[3]; // 804B0D24
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 804B0D28
  c->r[0]=sraw(c,c->r[0],15); // 804B0D2C
  c->r[0]=c->r[9]+c->r[0]; // 804B0D30
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 804B0D34
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 804B0D38
L_804B0D3C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B0D3C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B0D40
  c->lr=c->r[0]; // 804B0D44
  c->r[1]=c->r[1]+0x00000030u; // 804B0D48
  return; // 804B0D4C
}

// GetAnmResult__Q34nw4r3g3d9ResAnmVisCFUlf
void f_804B0D50(Ctx* __restrict c) {
  trace_call(0x804B0D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0D50
  c->r[0]=c->lr; // 804B0D54
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B0D58
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B0D5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B0D60
  c->r[0]=R32(c->r[5]+0x00000010u); // 804B0D64
  cmps(c,0,(int32_t)c->r[0],0); // 804B0D68
  if (crb(c,2)) { goto L_804B0D78; } // 804B0D6C
  c->r[0]=c->r[5]+c->r[0]; // 804B0D70
  goto L_804B0D7C; // 804B0D74
L_804B0D78:;
  c->r[0]=0u+0x00000000u; // 804B0D78
L_804B0D7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B0D7C
  if (crb(c,2)) { goto L_804B0DAC; } // 804B0D80
  c->r[4]=c->r[4]+0x00000001u; // 804B0D84
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 804B0D88
  c->r[4]=c->r[0]+c->r[4]; // 804B0D8C
  c->r[4]=R32(c->r[4]+0x00000014u); // 804B0D90
  cmps(c,0,(int32_t)c->r[4],0); // 804B0D94
  if (crb(c,2)) { goto L_804B0DA4; } // 804B0D98
  c->r[31]=c->r[0]+c->r[4]; // 804B0D9C
  goto L_804B0DB0; // 804B0DA0
L_804B0DA4:;
  c->r[31]=0u+0x00000000u; // 804B0DA4
  goto L_804B0DB0; // 804B0DA8
L_804B0DAC:;
  c->r[31]=0u+0x00000000u; // 804B0DAC
L_804B0DB0:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 804B0DB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0DB4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804B0DB8
  if (crb(c,2)) { goto L_804B0DC8; } // 804B0DBC
  c->r[3]=rotl(c->r[4],0)&0x00000001u; // 804B0DC0
  goto L_804B0E5C; // 804B0DC4
L_804B0DC8:;
  {uint32_t ea=c->r[2]+0x000014C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B0DC8
  fcmp(c,0,c->f[1],c->f[0]); // 804B0DCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0DD0
  if (!crb(c,2)) { goto L_804B0DDC; } // 804B0DD4
  goto L_804B0E1C; // 804B0DD8
L_804B0DDC:;
  c->r[3]=R16(c->r[3]+0x00000020u); // 804B0DDC
  c->r[0]=0u+0x43300000u; // 804B0DE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B0DE4
  {uint32_t ea=c->r[2]+0x000014D0u; c->f[2]=RF64(ea);} // 804B0DE8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B0DEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804B0DF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B0DF4
  fcmp(c,0,c->f[0],c->f[1]); // 804B0DF8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0DFC
  if (!crb(c,2)) { goto L_804B0E18; } // 804B0E00
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B0E04
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B0E08
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804B0E0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B0E10
  goto L_804B0E1C; // 804B0E14
L_804B0E18:;
  c->f[0]=c->f[1]; // 804B0E18
L_804B0E1C:;
  c->f[1]=c->f[0]; // 804B0E1C
  c->lr=0x804B0E24u; f_803BA1BC(c); // 804B0E20
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804B0E24
  c->r[3]=0u+0x80000000u; // 804B0E28
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804B0E2C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804B0E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B0E34
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 804B0E38
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 804B0E3C
  c->r[4]=c->r[31]+c->r[4]; // 804B0E40
  c->r[4]=R32(c->r[4]+0x00000008u); // 804B0E44
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 804B0E48
  c->r[3]=c->r[4]&c->r[0]; // 804B0E4C
  c->r[0]=0u-c->r[3]; // 804B0E50
  c->r[0]=c->r[0]|c->r[3]; // 804B0E54
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804B0E58
L_804B0E5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B0E5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B0E60
  c->lr=c->r[0]; // 804B0E64
  c->r[1]=c->r[1]+0x00000020u; // 804B0E68
  return; // 804B0E6C
}

// GetAnmResult__Q34nw4r3g3d9ResAnmClrCFPQ34nw4r3g3d12ClrAnmResultUlf
void f_804B0E70(Ctx* __restrict c) {
  trace_call(0x804B0E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0E70
  c->r[0]=c->lr; // 804B0E74
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B0E78
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B0E7C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B0E80
  c->r[11]=c->r[1]+0x00000030u; // 804B0E84
  c->lr=0x804B0E8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B0E88
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B0E8C
  c->r[30]=c->r[4]|c->r[4]; // 804B0E90
  c->r[0]=R32(c->r[6]+0x00000010u); // 804B0E94
  cmps(c,0,(int32_t)c->r[0],0); // 804B0E98
  if (crb(c,2)) { goto L_804B0EA8; } // 804B0E9C
  c->r[0]=c->r[6]+c->r[0]; // 804B0EA0
  goto L_804B0EAC; // 804B0EA4
L_804B0EA8:;
  c->r[0]=0u+0x00000000u; // 804B0EA8
L_804B0EAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B0EAC
  if (crb(c,2)) { goto L_804B0EDC; } // 804B0EB0
  c->r[5]=c->r[5]+0x00000001u; // 804B0EB4
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 804B0EB8
  c->r[5]=c->r[0]+c->r[5]; // 804B0EBC
  c->r[5]=R32(c->r[5]+0x00000014u); // 804B0EC0
  cmps(c,0,(int32_t)c->r[5],0); // 804B0EC4
  if (crb(c,2)) { goto L_804B0ED4; } // 804B0EC8
  c->r[5]=c->r[0]+c->r[5]; // 804B0ECC
  goto L_804B0EE0; // 804B0ED0
L_804B0ED4:;
  c->r[5]=0u+0x00000000u; // 804B0ED4
  goto L_804B0EE0; // 804B0ED8
L_804B0EDC:;
  c->r[5]=0u+0x00000000u; // 804B0EDC
L_804B0EE0:;
  c->r[31]=R32(c->r[5]+0x00000004u); // 804B0EE0
  c->r[0]=0u+0x00000000u; // 804B0EE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B0EE8
  c->r[27]=c->r[5]+0x00000008u; // 804B0EEC
  cmps(c,0,(int32_t)c->r[31],0); // 804B0EF0
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B0EF4
  if (crb(c,2)) { goto L_804B0FBC; } // 804B0EF8
  {uint32_t ea=c->r[2]+0x000014D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B0EFC
  fcmp(c,0,c->f[1],c->f[31]); // 804B0F00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0F04
  if (!crb(c,2)) { goto L_804B0F10; } // 804B0F08
  goto L_804B0F50; // 804B0F0C
L_804B0F10:;
  c->r[3]=R16(c->r[3]+0x00000020u); // 804B0F10
  c->r[0]=0u+0x43300000u; // 804B0F14
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B0F18
  {uint32_t ea=c->r[2]+0x000014E0u; c->f[2]=RF64(ea);} // 804B0F1C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B0F20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804B0F24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B0F28
  fcmp(c,0,c->f[0],c->f[1]); // 804B0F2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B0F30
  if (!crb(c,2)) { goto L_804B0F4C; } // 804B0F34
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B0F38
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B0F3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804B0F40
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 804B0F44
  goto L_804B0F50; // 804B0F48
L_804B0F4C:;
  c->f[31]=c->f[1]; // 804B0F4C
L_804B0F50:;
  c->r[28]=c->r[30]|c->r[30]; // 804B0F50
  c->r[26]=0u+0x00000000u; // 804B0F54
  c->r[29]=0u+0x00000001u; // 804B0F58
L_804B0F5C:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 804B0F5C
  if (crb(c,2)) { goto L_804B0FA8; } // 804B0F60
  c->r[4]=R32(c->r[30]+0x00000000u); // 804B0F64
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804B0F68
  c->r[3]=((c->r[26])&0x20)?0u:(c->r[29]<<((c->r[26])&31)); // 804B0F6C
  c->r[0]=c->r[4]|c->r[3]; // 804B0F70
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B0F74
  c->r[0]=R32(c->r[27]+0x00000000u); // 804B0F78
  W32(c->r[28]+0x00000030u,c->r[0]); // 804B0F7C
  if (crb(c,2)) { goto L_804B0F8C; } // 804B0F80
  c->r[3]=R32(c->r[27]+0x00000004u); // 804B0F84
  goto L_804B0FA0; // 804B0F88
L_804B0F8C:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 804B0F8C
  c->f[1]=c->f[31]; // 804B0F90
  c->r[3]=c->r[27]+c->r[0]; // 804B0F94
  c->r[3]=c->r[3]+0x00000004u; // 804B0F98
  c->lr=0x804B0FA0u; f_804B0C50(c); // 804B0F9C
L_804B0FA0:;
  W32(c->r[28]+0x00000004u,c->r[3]); // 804B0FA0
  c->r[27]=c->r[27]+0x00000008u; // 804B0FA4
L_804B0FA8:;
  c->r[26]=c->r[26]+0x00000001u; // 804B0FA8
  c->r[31]=rotl(c->r[31],30)&0x3FFFFFFFu; // 804B0FAC
  cmps(c,0,(int32_t)c->r[26],11); // 804B0FB0
  c->r[28]=c->r[28]+0x00000004u; // 804B0FB4
  if (crb(c,0)) { IRQCHK(c); goto L_804B0F5C; } // 804B0FB8
L_804B0FBC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B0FBC
  c->r[11]=c->r[1]+0x00000030u; // 804B0FC0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B0FC4
  c->lr=0x804B0FCCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B0FC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B0FCC
  c->lr=c->r[0]; // 804B0FD0
  c->r[1]=c->r[1]+0x00000040u; // 804B0FD4
  return; // 804B0FD8
}

// SearchFrame__Q34nw4r3g3d30@unnamed@g3d_resanmtexpat_cpp@FPCQ34nw4r3g3d19ResAnmTexPatAnmDataf
void f_804B0FDC(Ctx* __restrict c) {
  trace_call(0x804B0FDCu);
  c->r[5]=R16(c->r[3]+0x00000000u); // 804B0FDC
  c->r[6]=c->r[3]+0x00000008u; // 804B0FE0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B0FE4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 804B0FE8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B0FEC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804B0FF0
  fcmp(c,0,c->f[1],c->f[2]); // 804B0FF4
  c->r[4]=c->r[3]+c->r[0]; // 804B0FF8
  c->r[4]=c->r[4]+0x00000008u; // 804B0FFC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1000
  if (!crb(c,2)) { goto L_804B1010; } // 804B1004
  c->r[3]=c->r[6]|c->r[6]; // 804B1008
  goto L_804B1080; // 804B100C
L_804B1010:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1010
  fcmp(c,0,c->f[0],c->f[1]); // 804B1014
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1018
  if (!crb(c,2)) { goto L_804B1028; } // 804B101C
  c->r[3]=c->r[4]|c->r[4]; // 804B1020
  goto L_804B1080; // 804B1024
L_804B1028:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 804B1028
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 804B102C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 804B1030
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1034
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804B1038
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804B103C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 804B1040
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804B1044
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804B1048
  c->r[3]=c->r[3]+c->r[0]; // 804B104C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B1050
  fcmp(c,0,c->f[1],c->f[0]); // 804B1054
  if (!crb(c,0)) { goto L_804B106C; } // 804B1058
L_804B105C:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B105C
  fcmp(c,0,c->f[1],c->f[0]); // 804B1060
  if (crb(c,0)) { IRQCHK(c); goto L_804B105C; } // 804B1064
  goto L_804B1080; // 804B1068
L_804B106C:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804B106C
  fcmp(c,0,c->f[0],c->f[1]); // 804B1070
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1074
  if (crb(c,2)) { IRQCHK(c); goto L_804B106C; } // 804B1078
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 804B107C
L_804B1080:;
  c->r[1]=c->r[1]+0x00000010u; // 804B1080
  return; // 804B1084
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexPatCFPQ34nw4r3g3d15TexPatAnmResultUlf
void f_804B1088(Ctx* __restrict c) {
  trace_call(0x804B1088u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1088
  c->r[0]=c->lr; // 804B108C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B1090
  c->r[11]=c->r[1]+0x00000038u; // 804B1094
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 804B1098
  c->lr=0x804B10A0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B109C
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B10A0
  c->f[31]=c->f[1]; // 804B10A4
  c->r[24]=c->r[4]|c->r[4]; // 804B10A8
  c->r[0]=R32(c->r[6]+0x00000010u); // 804B10AC
  cmps(c,0,(int32_t)c->r[0],0); // 804B10B0
  if (crb(c,2)) { goto L_804B10C0; } // 804B10B4
  c->r[0]=c->r[6]+c->r[0]; // 804B10B8
  goto L_804B10C4; // 804B10BC
L_804B10C0:;
  c->r[0]=0u+0x00000000u; // 804B10C0
L_804B10C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B10C4
  if (crb(c,2)) { goto L_804B10F4; } // 804B10C8
  c->r[5]=c->r[5]+0x00000001u; // 804B10CC
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 804B10D0
  c->r[5]=c->r[0]+c->r[5]; // 804B10D4
  c->r[5]=R32(c->r[5]+0x00000014u); // 804B10D8
  cmps(c,0,(int32_t)c->r[5],0); // 804B10DC
  if (crb(c,2)) { goto L_804B10EC; } // 804B10E0
  c->r[31]=c->r[0]+c->r[5]; // 804B10E4
  goto L_804B10F8; // 804B10E8
L_804B10EC:;
  c->r[31]=0u+0x00000000u; // 804B10EC
  goto L_804B10F8; // 804B10F0
L_804B10F4:;
  c->r[31]=0u+0x00000000u; // 804B10F4
L_804B10F8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B10F8
  c->r[27]=c->r[31]+0x00000008u; // 804B10FC
  c->r[26]=R32(c->r[31]+0x00000004u); // 804B1100
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804B1104
  cmps(c,0,(int32_t)c->r[0],0); // 804B1108
  if (crb(c,2)) { goto L_804B1118; } // 804B110C
  c->r[30]=c->r[3]+c->r[0]; // 804B1110
  goto L_804B111C; // 804B1114
L_804B1118:;
  c->r[30]=0u+0x00000000u; // 804B1118
L_804B111C:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 804B111C
  cmps(c,0,(int32_t)c->r[0],0); // 804B1120
  if (crb(c,2)) { goto L_804B1130; } // 804B1124
  c->r[29]=c->r[3]+c->r[0]; // 804B1128
  goto L_804B1134; // 804B112C
L_804B1130:;
  c->r[29]=0u+0x00000000u; // 804B1130
L_804B1134:;
  c->r[0]=0u+0x00000000u; // 804B1134
  c->r[28]=c->r[24]|c->r[24]; // 804B1138
  W8(c->r[4]+0x00000000u,c->r[0]); // 804B113C
  c->r[25]=0u+0x00000000u; // 804B1140
  c->r[23]=0u+0x00000001u; // 804B1144
  W8(c->r[4]+0x00000001u,c->r[0]); // 804B1148
L_804B114C:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 804B114C
  if (crb(c,2)) { goto L_804B11D8; } // 804B1150
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 804B1154
  if (crb(c,2)) { goto L_804B1168; } // 804B1158
  c->r[4]=R16(c->r[27]+0x00000000u); // 804B115C
  c->r[3]=R16(c->r[27]+0x00000002u); // 804B1160
  goto L_804B1180; // 804B1164
L_804B1168:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804B1168
  c->f[1]=c->f[31]; // 804B116C
  c->r[3]=c->r[0]+c->r[31]; // 804B1170
  c->lr=0x804B1178u; f_804B0FDC(c); // 804B1174
  c->r[4]=R16(c->r[3]+0x00000004u); // 804B1178
  c->r[3]=R16(c->r[3]+0x00000006u); // 804B117C
L_804B1180:;
  c->r[0]=rotl(c->r[26],0)&0x00000004u; cr0(c,c->r[0]); // 804B1180
  c->r[5]=((c->r[25])&0x20)?0u:(c->r[23]<<((c->r[25])&31)); // 804B1184
  if (crb(c,2)) { goto L_804B11AC; } // 804B1188
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B118C
  c->r[0]=R32(c->r[30]+c->r[0]); // 804B1190
  cmps(c,0,(int32_t)c->r[0],0); // 804B1194
  if (crb(c,2)) { goto L_804B11AC; } // 804B1198
  W32(c->r[28]+0x00000004u,c->r[0]); // 804B119C
  c->r[0]=R8(c->r[24]+0x00000000u); // 804B11A0
  c->r[0]=c->r[0]|c->r[5]; // 804B11A4
  W8(c->r[24]+0x00000000u,c->r[0]); // 804B11A8
L_804B11AC:;
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 804B11AC
  if (crb(c,2)) { goto L_804B11D4; } // 804B11B0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804B11B4
  c->r[0]=R32(c->r[29]+c->r[0]); // 804B11B8
  cmps(c,0,(int32_t)c->r[0],0); // 804B11BC
  if (crb(c,2)) { goto L_804B11D4; } // 804B11C0
  W32(c->r[28]+0x00000024u,c->r[0]); // 804B11C4
  c->r[0]=R8(c->r[24]+0x00000001u); // 804B11C8
  c->r[0]=c->r[0]|c->r[5]; // 804B11CC
  W8(c->r[24]+0x00000001u,c->r[0]); // 804B11D0
L_804B11D4:;
  c->r[27]=c->r[27]+0x00000004u; // 804B11D4
L_804B11D8:;
  c->r[25]=c->r[25]+0x00000001u; // 804B11D8
  c->r[26]=rotl(c->r[26],28)&0x0FFFFFFFu; // 804B11DC
  cmps(c,0,(int32_t)c->r[25],8); // 804B11E0
  c->r[28]=c->r[28]+0x00000004u; // 804B11E4
  if (crb(c,0)) { IRQCHK(c); goto L_804B114C; } // 804B11E8
  c->r[11]=c->r[1]+0x00000038u; // 804B11EC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 804B11F0
  c->lr=0x804B11F8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B11F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B11F8
  c->lr=c->r[0]; // 804B11FC
  c->r[1]=c->r[1]+0x00000040u; // 804B1200
  return; // 804B1204
}

// Bind__Q34nw4r3g3d12ResAnmTexPatFQ34nw4r3g3d7ResFile
void f_804B1208(Ctx* __restrict c) {
  trace_call(0x804B1208u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1208
  c->r[0]=c->lr; // 804B120C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B1210
  c->r[11]=c->r[1]+0x00000040u; // 804B1214
  c->lr=0x804B121Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B1218
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B121C
  c->r[28]=c->r[4]|c->r[4]; // 804B1220
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B1224
  c->r[31]=R16(c->r[3]+0x00000034u); // 804B1228
  cmps(c,0,(int32_t)c->r[0],0); // 804B122C
  c->r[30]=R16(c->r[3]+0x00000036u); // 804B1230
  if (crb(c,2)) { goto L_804B1240; } // 804B1234
  c->r[27]=c->r[3]+c->r[0]; // 804B1238
  goto L_804B1244; // 804B123C
L_804B1240:;
  c->r[27]=0u+0x00000000u; // 804B1240
L_804B1244:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B1244
  cmps(c,0,(int32_t)c->r[0],0); // 804B1248
  if (crb(c,2)) { goto L_804B1258; } // 804B124C
  c->r[26]=c->r[3]+c->r[0]; // 804B1250
  goto L_804B125C; // 804B1254
L_804B1258:;
  c->r[26]=0u+0x00000000u; // 804B1258
L_804B125C:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804B125C
  cmps(c,0,(int32_t)c->r[0],0); // 804B1260
  if (crb(c,2)) { goto L_804B1270; } // 804B1264
  c->r[24]=c->r[3]+c->r[0]; // 804B1268
  goto L_804B1274; // 804B126C
L_804B1270:;
  c->r[24]=0u+0x00000000u; // 804B1270
L_804B1274:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 804B1274
  cmps(c,0,(int32_t)c->r[0],0); // 804B1278
  if (crb(c,2)) { goto L_804B1288; } // 804B127C
  c->r[25]=c->r[3]+c->r[0]; // 804B1280
  goto L_804B128C; // 804B1284
L_804B1288:;
  c->r[25]=0u+0x00000000u; // 804B1288
L_804B128C:;
  c->r[23]=c->r[27]|c->r[27]; // 804B128C
  c->r[29]=0u+0x00000000u; // 804B1290
  c->r[22]=0u+0x00000000u; // 804B1294
  goto L_804B12E8; // 804B1298
L_804B129C:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 804B129C
  cmps(c,0,(int32_t)c->r[0],0); // 804B12A0
  if (crb(c,2)) { goto L_804B12B0; } // 804B12A4
  c->r[29]=c->r[29]+0x00000001u; // 804B12A8
  goto L_804B12DC; // 804B12AC
L_804B12B0:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 804B12B0
  c->r[3]=c->r[28]|c->r[28]; // 804B12B4
  c->r[4]=c->r[1]+0x0000000Cu; // 804B12B8
  c->r[5]=c->r[27]+c->r[0]; // 804B12BC
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B12C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B12C4
  c->lr=0x804B12CCu; f_804AA73C(c); // 804B12C8
  cmps(c,0,(int32_t)c->r[3],0); // 804B12CC
  if (crb(c,2)) { goto L_804B12DC; } // 804B12D0
  W32(c->r[24]+0x00000000u,c->r[3]); // 804B12D4
  c->r[29]=c->r[29]+0x00000001u; // 804B12D8
L_804B12DC:;
  c->r[24]=c->r[24]+0x00000004u; // 804B12DC
  c->r[23]=c->r[23]+0x00000004u; // 804B12E0
  c->r[22]=c->r[22]+0x00000001u; // 804B12E4
L_804B12E8:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[31]); // 804B12E8
  if (crb(c,0)) { IRQCHK(c); goto L_804B129C; } // 804B12EC
  c->r[27]=c->r[26]|c->r[26]; // 804B12F0
  c->r[22]=0u+0x00000000u; // 804B12F4
  goto L_804B1348; // 804B12F8
L_804B12FC:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804B12FC
  cmps(c,0,(int32_t)c->r[0],0); // 804B1300
  if (crb(c,2)) { goto L_804B1310; } // 804B1304
  c->r[29]=c->r[29]+0x00000001u; // 804B1308
  goto L_804B133C; // 804B130C
L_804B1310:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 804B1310
  c->r[3]=c->r[28]|c->r[28]; // 804B1314
  c->r[4]=c->r[1]+0x00000008u; // 804B1318
  c->r[5]=c->r[26]+c->r[0]; // 804B131C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B1320
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B1324
  c->lr=0x804B132Cu; f_804AA65C(c); // 804B1328
  cmps(c,0,(int32_t)c->r[3],0); // 804B132C
  if (crb(c,2)) { goto L_804B133C; } // 804B1330
  W32(c->r[25]+0x00000000u,c->r[3]); // 804B1334
  c->r[29]=c->r[29]+0x00000001u; // 804B1338
L_804B133C:;
  c->r[25]=c->r[25]+0x00000004u; // 804B133C
  c->r[27]=c->r[27]+0x00000004u; // 804B1340
  c->r[22]=c->r[22]+0x00000001u; // 804B1344
L_804B1348:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[30]); // 804B1348
  if (crb(c,0)) { IRQCHK(c); goto L_804B12FC; } // 804B134C
  c->r[0]=c->r[31]+c->r[30]; // 804B1350
  c->r[11]=c->r[1]+0x00000040u; // 804B1354
  c->r[0]=c->r[0]-c->r[29]; // 804B1358
  c->r[0]=cntlz(c->r[0]); // 804B135C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B1360
  c->lr=0x804B1368u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B1364
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B1368
  c->lr=c->r[0]; // 804B136C
  c->r[1]=c->r[1]+0x00000040u; // 804B1370
  return; // 804B1374
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexSrtCFPQ34nw4r3g3d15TexSrtAnmResultUlf
void f_804B1378(Ctx* __restrict c) {
  trace_call(0x804B1378u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1378
  c->r[0]=c->lr; // 804B137C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804B1380
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804B1384
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804B1388
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804B138C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804B1390
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804B1394
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804B1398
  c->r[11]=c->r[1]+0x00000040u; // 804B139C
  c->lr=0x804B13A4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B13A0
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B13A4
  c->f[29]=c->f[1]; // 804B13A8
  c->r[22]=c->r[4]|c->r[4]; // 804B13AC
  c->r[0]=R32(c->r[6]+0x00000010u); // 804B13B0
  cmps(c,0,(int32_t)c->r[0],0); // 804B13B4
  if (crb(c,2)) { goto L_804B13C4; } // 804B13B8
  c->r[0]=c->r[6]+c->r[0]; // 804B13BC
  goto L_804B13C8; // 804B13C0
L_804B13C4:;
  c->r[0]=0u+0x00000000u; // 804B13C4
L_804B13C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B13C8
  if (crb(c,2)) { goto L_804B13F8; } // 804B13CC
  c->r[5]=c->r[5]+0x00000001u; // 804B13D0
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 804B13D4
  c->r[5]=c->r[0]+c->r[5]; // 804B13D8
  c->r[5]=R32(c->r[5]+0x00000014u); // 804B13DC
  cmps(c,0,(int32_t)c->r[5],0); // 804B13E0
  if (crb(c,2)) { goto L_804B13F0; } // 804B13E4
  c->r[30]=c->r[0]+c->r[5]; // 804B13E8
  goto L_804B13FC; // 804B13EC
L_804B13F0:;
  c->r[30]=0u+0x00000000u; // 804B13F0
  goto L_804B13FC; // 804B13F4
L_804B13F8:;
  c->r[30]=0u+0x00000000u; // 804B13F8
L_804B13FC:;
  c->r[26]=R32(c->r[30]+0x00000004u); // 804B13FC
  c->r[0]=0u+0x00000000u; // 804B1400
  c->r[24]=R32(c->r[30]+0x00000008u); // 804B1404
  c->r[25]=c->r[30]+0x0000000Cu; // 804B1408
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B140C
  c->r[27]=c->r[4]+0x0000000Cu; // 804B1410
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B1414
  c->r[28]=0u+0x00000000u; // 804B1418
  {uint32_t ea=c->r[2]+0x000014E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B141C
  W32(c->r[4]+0x00000004u,c->r[0]); // 804B1420
  {uint32_t ea=c->r[2]+0x000014ECu; c->f[30]=c->ps1[30]=RF32(ea);} // 804B1424
  c->r[0]=R32(c->r[3]+0x00000024u); // 804B1428
  W32(c->r[4]+0x00000008u,c->r[0]); // 804B142C
  goto L_804B15B0; // 804B1430
L_804B1434:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 804B1434
  if (crb(c,2)) { goto L_804B15A4; } // 804B1438
  c->r[0]=R32(c->r[25]+0x00000000u); // 804B143C
  c->r[29]=0u+0x00000000u; // 804B1440
  c->r[25]=c->r[25]+0x00000004u; // 804B1444
  c->r[31]=R32(c->r[30]+c->r[0]); // 804B1448
  c->r[23]=c->r[0]+c->r[30]; // 804B144C
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804B1450
  if (!crb(c,2)) { goto L_804B14C8; } // 804B1454
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804B1458
  c->r[3]=c->r[23]+0x00000004u; // 804B145C
  c->r[29]=0u+0x00000001u; // 804B1460
  if (crb(c,2)) { goto L_804B1470; } // 804B1464
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1468
  goto L_804B1480; // 804B146C
L_804B1470:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1470
  c->f[1]=c->f[29]; // 804B1474
  c->r[3]=c->r[3]+c->r[0]; // 804B1478
  c->lr=0x804B1480u; f_804B0B24(c); // 804B147C
L_804B1480:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804B1480
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 804B1484
  if (crb(c,2)) { goto L_804B1498; } // 804B1488
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B148C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 804B1490
  goto L_804B14D0; // 804B1494
L_804B1498:;
  c->r[0]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[0]); // 804B1498
  c->r[3]=c->r[23]+0x00000008u; // 804B149C
  c->r[29]=0u+0x00000002u; // 804B14A0
  if (crb(c,2)) { goto L_804B14B0; } // 804B14A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B14A8
  goto L_804B14C0; // 804B14AC
L_804B14B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B14B0
  c->f[1]=c->f[29]; // 804B14B4
  c->r[3]=c->r[3]+c->r[0]; // 804B14B8
  c->lr=0x804B14C0u; f_804B0B24(c); // 804B14BC
L_804B14C0:;
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 804B14C0
  goto L_804B14D0; // 804B14C4
L_804B14C8:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 804B14C8
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[31]);} // 804B14CC
L_804B14D0:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 804B14D0
  if (!crb(c,2)) { goto L_804B1510; } // 804B14D4
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 804B14D8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B14DC
  c->r[29]=c->r[29]+0x00000001u; // 804B14E0
  c->r[3]=c->r[23]+c->r[0]; // 804B14E4
  c->r[3]=c->r[3]+0x00000004u; // 804B14E8
  if (crb(c,2)) { goto L_804B14F8; } // 804B14EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B14F0
  goto L_804B1508; // 804B14F4
L_804B14F8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B14F8
  c->f[1]=c->f[29]; // 804B14FC
  c->r[3]=c->r[3]+c->r[0]; // 804B1500
  c->lr=0x804B1508u; f_804B0B24(c); // 804B1504
L_804B1508:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 804B1508
  goto L_804B1514; // 804B150C
L_804B1510:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[30]);} // 804B1510
L_804B1514:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804B1514
  if (!crb(c,2)) { goto L_804B1588; } // 804B1518
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 804B151C
  c->r[21]=rotl(c->r[31],23)&0x00000001u; // 804B1520
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B1524
  c->r[29]=c->r[29]+0x00000001u; // 804B1528
  c->r[3]=c->r[23]+c->r[0]; // 804B152C
  c->r[3]=c->r[3]+0x00000004u; // 804B1530
  if (crb(c,2)) { goto L_804B1540; } // 804B1534
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1538
  goto L_804B1550; // 804B153C
L_804B1540:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1540
  c->f[1]=c->f[29]; // 804B1544
  c->r[3]=c->r[3]+c->r[0]; // 804B1548
  c->lr=0x804B1550u; f_804B0B24(c); // 804B154C
L_804B1550:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B1550
  cmps(c,0,(int32_t)c->r[21],0); // 804B1554
  c->r[3]=c->r[23]+c->r[0]; // 804B1558
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B155C
  c->r[3]=c->r[3]+0x00000004u; // 804B1560
  if (crb(c,2)) { goto L_804B1570; } // 804B1564
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1568
  goto L_804B1580; // 804B156C
L_804B1570:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1570
  c->f[1]=c->f[29]; // 804B1574
  c->r[3]=c->r[3]+c->r[0]; // 804B1578
  c->lr=0x804B1580u; f_804B0B24(c); // 804B157C
L_804B1580:;
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 804B1580
  goto L_804B1590; // 804B1584
L_804B1588:;
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[30]);} // 804B1588
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[30]);} // 804B158C
L_804B1590:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; // 804B1590
  c->r[3]=R32(c->r[22]+0x00000000u); // 804B1594
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 804B1598
  c->r[0]=c->r[3]|c->r[0]; // 804B159C
  W32(c->r[22]+0x00000000u,c->r[0]); // 804B15A0
L_804B15A4:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 804B15A4
  c->r[27]=c->r[27]+0x00000014u; // 804B15A8
  c->r[28]=c->r[28]+0x00000004u; // 804B15AC
L_804B15B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 804B15B0
  if (!crb(c,2)) { IRQCHK(c); goto L_804B1434; } // 804B15B4
  {uint32_t ea=c->r[2]+0x000014E8u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B15B8
  c->r[26]=0u+0x00000000u; // 804B15BC
  {uint32_t ea=c->r[2]+0x000014ECu; c->f[31]=c->ps1[31]=RF32(ea);} // 804B15C0
  c->r[27]=0u+0x00000000u; // 804B15C4
  goto L_804B1754; // 804B15C8
L_804B15CC:;
  c->r[0]=rotl(c->r[24],0)&0x00000001u; cr0(c,c->r[0]); // 804B15CC
  if (crb(c,2)) { goto L_804B1748; } // 804B15D0
  c->r[3]=R32(c->r[25]+0x00000000u); // 804B15D4
  c->r[0]=c->r[26]+0x00000008u; // 804B15D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804B15DC
  c->r[28]=0u+0x00000000u; // 804B15E0
  c->r[29]=R32(c->r[3]+c->r[30]); // 804B15E4
  c->r[23]=c->r[3]+c->r[30]; // 804B15E8
  c->r[25]=c->r[25]+0x00000004u; // 804B15EC
  c->r[31]=c->r[22]+c->r[0]; // 804B15F0
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 804B15F4
  if (!crb(c,2)) { goto L_804B166C; } // 804B15F8
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 804B15FC
  c->r[3]=c->r[23]+0x00000004u; // 804B1600
  c->r[28]=0u+0x00000001u; // 804B1604
  if (crb(c,2)) { goto L_804B1614; } // 804B1608
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B160C
  goto L_804B1624; // 804B1610
L_804B1614:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1614
  c->f[1]=c->f[29]; // 804B1618
  c->r[3]=c->r[3]+c->r[0]; // 804B161C
  c->lr=0x804B1624u; f_804B0B24(c); // 804B1620
L_804B1624:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 804B1624
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B1628
  if (crb(c,2)) { goto L_804B163C; } // 804B162C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1630
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 804B1634
  goto L_804B1674; // 804B1638
L_804B163C:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 804B163C
  c->r[3]=c->r[23]+0x00000008u; // 804B1640
  c->r[28]=0u+0x00000002u; // 804B1644
  if (crb(c,2)) { goto L_804B1654; } // 804B1648
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B164C
  goto L_804B1664; // 804B1650
L_804B1654:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1654
  c->f[1]=c->f[29]; // 804B1658
  c->r[3]=c->r[3]+c->r[0]; // 804B165C
  c->lr=0x804B1664u; f_804B0B24(c); // 804B1660
L_804B1664:;
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 804B1664
  goto L_804B1674; // 804B1668
L_804B166C:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[30]);} // 804B166C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[30]);} // 804B1670
L_804B1674:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 804B1674
  if (!crb(c,2)) { goto L_804B16B4; } // 804B1678
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 804B167C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 804B1680
  c->r[28]=c->r[28]+0x00000001u; // 804B1684
  c->r[3]=c->r[23]+c->r[0]; // 804B1688
  c->r[3]=c->r[3]+0x00000004u; // 804B168C
  if (crb(c,2)) { goto L_804B169C; } // 804B1690
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1694
  goto L_804B16AC; // 804B1698
L_804B169C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B169C
  c->f[1]=c->f[29]; // 804B16A0
  c->r[3]=c->r[3]+c->r[0]; // 804B16A4
  c->lr=0x804B16ACu; f_804B0B24(c); // 804B16A8
L_804B16AC:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 804B16AC
  goto L_804B16B8; // 804B16B0
L_804B16B4:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[31]);} // 804B16B4
L_804B16B8:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 804B16B8
  if (!crb(c,2)) { goto L_804B172C; } // 804B16BC
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 804B16C0
  c->r[21]=rotl(c->r[29],23)&0x00000001u; // 804B16C4
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 804B16C8
  c->r[28]=c->r[28]+0x00000001u; // 804B16CC
  c->r[3]=c->r[23]+c->r[0]; // 804B16D0
  c->r[3]=c->r[3]+0x00000004u; // 804B16D4
  if (crb(c,2)) { goto L_804B16E4; } // 804B16D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B16DC
  goto L_804B16F4; // 804B16E0
L_804B16E4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B16E4
  c->f[1]=c->f[29]; // 804B16E8
  c->r[3]=c->r[3]+c->r[0]; // 804B16EC
  c->lr=0x804B16F4u; f_804B0B24(c); // 804B16F0
L_804B16F4:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 804B16F4
  cmps(c,0,(int32_t)c->r[21],0); // 804B16F8
  c->r[3]=c->r[23]+c->r[0]; // 804B16FC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B1700
  c->r[3]=c->r[3]+0x00000004u; // 804B1704
  if (crb(c,2)) { goto L_804B1714; } // 804B1708
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B170C
  goto L_804B1724; // 804B1710
L_804B1714:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1714
  c->f[1]=c->f[29]; // 804B1718
  c->r[3]=c->r[3]+c->r[0]; // 804B171C
  c->lr=0x804B1724u; f_804B0B24(c); // 804B1720
L_804B1724:;
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B1724
  goto L_804B1734; // 804B1728
L_804B172C:;
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 804B172C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[31]);} // 804B1730
L_804B1734:;
  c->r[0]=rotl(c->r[29],0)&0x0000000Fu; // 804B1734
  c->r[3]=R32(c->r[22]+0x00000004u); // 804B1738
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[0]<<((c->r[27])&31)); // 804B173C
  c->r[0]=c->r[3]|c->r[0]; // 804B1740
  W32(c->r[22]+0x00000004u,c->r[0]); // 804B1744
L_804B1748:;
  c->r[24]=rotl(c->r[24],31)&0x7FFFFFFFu; // 804B1748
  c->r[27]=c->r[27]+0x00000004u; // 804B174C
  c->r[26]=c->r[26]+0x00000001u; // 804B1750
L_804B1754:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B1754
  if (!crb(c,2)) { IRQCHK(c); goto L_804B15CC; } // 804B1758
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804B175C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804B1760
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804B1764
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804B1768
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804B176C
  c->r[11]=c->r[1]+0x00000040u; // 804B1770
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804B1774
  c->lr=0x804B177Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B1778
  c->r[0]=R32(c->r[1]+0x00000074u); // 804B177C
  c->lr=c->r[0]; // 804B1780
  c->r[1]=c->r[1]+0x00000070u; // 804B1784
  return; // 804B1788
}

// GetAnmScale__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_804B178C(Ctx* __restrict c) {
  trace_call(0x804B178Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B178C
  c->r[0]=c->lr; // 804B1790
  W32(c->r[1]+0x00000054u,c->r[0]); // 804B1794
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804B1798
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804B179C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804B17A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804B17A4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 804B17A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 804B17AC
  c->r[0]=0u+0x04000000u; // 804B17B0
  c->f[29]=c->f[1]; // 804B17B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B17B8
  c->r[31]=R32(c->r[4]+0x00000004u); // 804B17BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B17C0
  c->r[30]=c->r[5]|c->r[5]; // 804B17C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B17C8
  c->r[29]=c->r[4]|c->r[4]; // 804B17CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B17D0
  c->r[28]=c->r[3]|c->r[3]; // 804B17D4
  c->r[3]=rotl(c->r[31],0)&0x06000000u; // 804B17D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804B17DC
  if (crb(c,2)) { goto L_804B18D0; } // 804B17E0
  if (!crb(c,0)) { goto L_804B1804; } // 804B17E4
  c->r[0]=0u+0x02000000u; // 804B17E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804B17EC
  if (crb(c,2)) { goto L_804B1840; } // 804B17F0
  if (!crb(c,0)) { goto L_804B19F0; } // 804B17F4
  cmps(c,0,(int32_t)c->r[3],0); // 804B17F8
  if (crb(c,2)) { goto L_804B1814; } // 804B17FC
  goto L_804B19F0; // 804B1800
L_804B1804:;
  c->r[0]=0u+0x06000000u; // 804B1804
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804B1808
  if (crb(c,2)) { goto L_804B1960; } // 804B180C
  goto L_804B19F0; // 804B1810
L_804B1814:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804B1814
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B1818
  c->r[30]=c->r[5]+0x00000004u; // 804B181C
  if (crb(c,2)) { goto L_804B1830; } // 804B1820
  c->f[30]=c->f[31]; // 804B1824
  c->f[1]=c->f[31]; // 804B1828
  goto L_804B19FC; // 804B182C
L_804B1830:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B1830
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1834
  c->r[30]=c->r[30]+0x00000008u; // 804B1838
  goto L_804B19FC; // 804B183C
L_804B1840:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 804B1840
  c->r[3]=c->r[30]|c->r[30]; // 804B1844
  c->r[30]=c->r[5]+0x00000004u; // 804B1848
  if (crb(c,2)) { goto L_804B1858; } // 804B184C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1850
  goto L_804B1864; // 804B1854
L_804B1858:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1858
  c->r[3]=c->r[0]+c->r[4]; // 804B185C
  c->lr=0x804B1864u; f_804B1CE0(c); // 804B1860
L_804B1864:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804B1864
  c->f[31]=c->f[1]; // 804B1868
  if (crb(c,2)) { goto L_804B1878; } // 804B186C
  c->f[30]=c->f[1]; // 804B1870
  goto L_804B19FC; // 804B1874
L_804B1878:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 804B1878
  c->r[3]=c->r[30]|c->r[30]; // 804B187C
  c->r[30]=c->r[30]+0x00000004u; // 804B1880
  if (crb(c,2)) { goto L_804B1890; } // 804B1884
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1888
  goto L_804B18A0; // 804B188C
L_804B1890:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1890
  c->f[1]=c->f[29]; // 804B1894
  c->r[3]=c->r[0]+c->r[29]; // 804B1898
  c->lr=0x804B18A0u; f_804B1CE0(c); // 804B189C
L_804B18A0:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 804B18A0
  c->f[30]=c->f[1]; // 804B18A4
  c->r[3]=c->r[30]|c->r[30]; // 804B18A8
  c->r[30]=c->r[30]+0x00000004u; // 804B18AC
  if (crb(c,2)) { goto L_804B18BC; } // 804B18B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B18B4
  goto L_804B19FC; // 804B18B8
L_804B18BC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B18BC
  c->f[1]=c->f[29]; // 804B18C0
  c->r[3]=c->r[0]+c->r[29]; // 804B18C4
  c->lr=0x804B18CCu; f_804B1CE0(c); // 804B18C8
  goto L_804B19FC; // 804B18CC
L_804B18D0:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 804B18D0
  c->r[3]=c->r[30]|c->r[30]; // 804B18D4
  c->r[30]=c->r[5]+0x00000004u; // 804B18D8
  if (crb(c,2)) { goto L_804B18E8; } // 804B18DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B18E0
  goto L_804B18F4; // 804B18E4
L_804B18E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B18E8
  c->r[3]=c->r[0]+c->r[4]; // 804B18EC
  c->lr=0x804B18F4u; f_804B1B70(c); // 804B18F0
L_804B18F4:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804B18F4
  c->f[31]=c->f[1]; // 804B18F8
  if (crb(c,2)) { goto L_804B1908; } // 804B18FC
  c->f[30]=c->f[1]; // 804B1900
  goto L_804B19FC; // 804B1904
L_804B1908:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 804B1908
  c->r[3]=c->r[30]|c->r[30]; // 804B190C
  c->r[30]=c->r[30]+0x00000004u; // 804B1910
  if (crb(c,2)) { goto L_804B1920; } // 804B1914
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1918
  goto L_804B1930; // 804B191C
L_804B1920:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1920
  c->f[1]=c->f[29]; // 804B1924
  c->r[3]=c->r[0]+c->r[29]; // 804B1928
  c->lr=0x804B1930u; f_804B1B70(c); // 804B192C
L_804B1930:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 804B1930
  c->f[30]=c->f[1]; // 804B1934
  c->r[3]=c->r[30]|c->r[30]; // 804B1938
  c->r[30]=c->r[30]+0x00000004u; // 804B193C
  if (crb(c,2)) { goto L_804B194C; } // 804B1940
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1944
  goto L_804B19FC; // 804B1948
L_804B194C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B194C
  c->f[1]=c->f[29]; // 804B1950
  c->r[3]=c->r[0]+c->r[29]; // 804B1954
  c->lr=0x804B195Cu; f_804B1B70(c); // 804B1958
  goto L_804B19FC; // 804B195C
L_804B1960:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 804B1960
  c->r[3]=c->r[30]|c->r[30]; // 804B1964
  c->r[30]=c->r[5]+0x00000004u; // 804B1968
  if (crb(c,2)) { goto L_804B1978; } // 804B196C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1970
  goto L_804B1984; // 804B1974
L_804B1978:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1978
  c->r[3]=c->r[0]+c->r[4]; // 804B197C
  c->lr=0x804B1984u; f_804B1A44(c); // 804B1980
L_804B1984:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804B1984
  c->f[31]=c->f[1]; // 804B1988
  if (crb(c,2)) { goto L_804B1998; } // 804B198C
  c->f[30]=c->f[1]; // 804B1990
  goto L_804B19FC; // 804B1994
L_804B1998:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 804B1998
  c->r[3]=c->r[30]|c->r[30]; // 804B199C
  c->r[30]=c->r[30]+0x00000004u; // 804B19A0
  if (crb(c,2)) { goto L_804B19B0; } // 804B19A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B19A8
  goto L_804B19C0; // 804B19AC
L_804B19B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B19B0
  c->f[1]=c->f[29]; // 804B19B4
  c->r[3]=c->r[0]+c->r[29]; // 804B19B8
  c->lr=0x804B19C0u; f_804B1A44(c); // 804B19BC
L_804B19C0:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 804B19C0
  c->f[30]=c->f[1]; // 804B19C4
  c->r[3]=c->r[30]|c->r[30]; // 804B19C8
  c->r[30]=c->r[30]+0x00000004u; // 804B19CC
  if (crb(c,2)) { goto L_804B19DC; } // 804B19D0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B19D4
  goto L_804B19FC; // 804B19D8
L_804B19DC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B19DC
  c->f[1]=c->f[29]; // 804B19E0
  c->r[3]=c->r[0]+c->r[29]; // 804B19E4
  c->lr=0x804B19ECu; f_804B1A44(c); // 804B19E8
  goto L_804B19FC; // 804B19EC
L_804B19F0:;
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B19F0
  c->f[30]=c->f[31]; // 804B19F4
  c->f[1]=c->f[31]; // 804B19F8
L_804B19FC:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 804B19FC
  c->r[3]=c->r[30]|c->r[30]; // 804B1A00
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 804B1A04
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804B1A08
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804B1A0C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804B1A10
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804B1A14
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804B1A18
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 804B1A1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 804B1A20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B1A24
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B1A28
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B1A2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B1A30
  c->r[0]=R32(c->r[1]+0x00000054u); // 804B1A34
  c->lr=c->r[0]; // 804B1A38
  c->r[1]=c->r[1]+0x00000050u; // 804B1A3C
  return; // 804B1A40
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS96Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_804B1A44(Ctx* __restrict c) {
  trace_call(0x804B1A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1A44
  c->r[5]=c->r[3]+0x00000008u; // 804B1A48
  c->r[6]=R16(c->r[3]+0x00000000u); // 804B1A4C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1A50
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 804B1A54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B1A58
  fcmp(c,0,c->f[1],c->f[0]); // 804B1A5C
  c->r[4]=c->r[3]+c->r[0]; // 804B1A60
  c->r[4]=c->r[4]+0x00000008u; // 804B1A64
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1A68
  if (!crb(c,2)) { goto L_804B1A78; } // 804B1A6C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1A70
  goto L_804B1B68; // 804B1A74
L_804B1A78:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1A78
  fcmp(c,0,c->f[0],c->f[1]); // 804B1A7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1A80
  if (!crb(c,2)) { goto L_804B1A90; } // 804B1A84
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1A88
  goto L_804B1B68; // 804B1A8C
L_804B1A90:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1A90
  W16(c->r[1]+0x00000008u,c->r[6]); // 804B1A94
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804B1A98
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 804B1A9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1AA0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804B1AA4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804B1AA8
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 804B1AAC
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804B1AB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B1AB4
  c->r[3]=c->r[3]+c->r[0]; // 804B1AB8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1ABC
  c->r[4]=c->r[3]+0x00000008u; // 804B1AC0
  fcmp(c,0,c->f[1],c->f[0]); // 804B1AC4
  if (!crb(c,0)) { goto L_804B1ADC; } // 804B1AC8
L_804B1ACC:;
  {uint32_t ea=c->r[4]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 804B1ACC
  fcmp(c,0,c->f[1],c->f[0]); // 804B1AD0
  if (crb(c,0)) { IRQCHK(c); goto L_804B1ACC; } // 804B1AD4
  goto L_804B1AF0; // 804B1AD8
L_804B1ADC:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 804B1ADC
  fcmp(c,0,c->f[0],c->f[1]); // 804B1AE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1AE4
  if (crb(c,2)) { IRQCHK(c); goto L_804B1ADC; } // 804B1AE8
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 804B1AEC
L_804B1AF0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1AF0
  fcmp(c,0,c->f[1],c->f[0]); // 804B1AF4
  if (!crb(c,2)) { goto L_804B1B04; } // 804B1AF8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1AFC
  goto L_804B1B68; // 804B1B00
L_804B1B04:;
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[0]); // 804B1B04
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1B08
  {uint32_t ea=c->r[4]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804B1B0C
  c->f[11]=c->ps1[11]=S(c->f[1]-c->f[0]); // 804B1B10
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1B14
  {uint32_t ea=c->r[2]+0x000014F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B1B18
  {uint32_t ea=c->r[2]+0x000014FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1B1C
  c->f[0]=c->ps1[0]=S(c->f[7]-c->f[0]); // 804B1B20
  c->f[6]=c->ps1[6]=fres(c->f[11]); // 804B1B24
  {uint32_t ea=c->r[4]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 804B1B28
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B1B2C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804B1B30
  {double t0=S(c->f[6]+c->f[6]), t1=S(c->ps1[6]+c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804B1B34
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 804B1B38
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[5])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[5])); c->f[6]=t0; c->ps1[6]=t1;} // 804B1B3C
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[6]); // 804B1B40
  c->f[5]=c->ps1[5]=S(std::fma(c->f[10],c->f[6],-c->f[4])); // 804B1B44
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 804B1B48
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[9]); // 804B1B4C
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[5]); // 804B1B50
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804B1B54
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[8],c->f[2])); // 804B1B58
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804B1B5C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[7])); // 804B1B60
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 804B1B64
L_804B1B68:;
  c->r[1]=c->r[1]+0x00000010u; // 804B1B68
  return; // 804B1B6C
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS48Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_804B1B70(Ctx* __restrict c) {
  trace_call(0x804B1B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1B70
  c->r[5]=c->r[3]+0x00000010u; // 804B1B74
  c->r[6]=R16(c->r[3]+0x00000000u); // 804B1B78
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 804B1B7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 804B1B80
  c->r[4]=c->r[3]+c->r[0]; // 804B1B84
  c->r[4]=c->r[4]+0x00000010u; // 804B1B88
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 804B1B8C
  fcmp(c,0,c->f[1],c->f[0]); // 804B1B90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1B94
  if (!crb(c,2)) { goto L_804B1BB0; } // 804B1B98
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 804B1B9C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1BA0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1BA4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1BA8
  goto L_804B1CD8; // 804B1BAC
L_804B1BB0:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,6);} // 804B1BB0
  fcmp(c,0,c->f[0],c->f[1]); // 804B1BB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1BB8
  if (!crb(c,2)) { goto L_804B1BD4; } // 804B1BBC
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,2,ea,1,3);} // 804B1BC0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1BC4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1BC8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1BCC
  goto L_804B1CD8; // 804B1BD0
L_804B1BD4:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 804B1BD4
  W16(c->r[1]+0x0000000Au,c->r[6]); // 804B1BD8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804B1BDC
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 804B1BE0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1BE4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804B1BE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804B1BEC
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 804B1BF0
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804B1BF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 804B1BF8
  c->r[4]=c->r[3]+c->r[0]; // 804B1BFC
  c->r[5]=c->r[4]+0x00000010u; // 804B1C00
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,6);} // 804B1C04
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 804B1C08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000000u); // 804B1C0C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 804B1C10
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B1C14
  if (!crb(c,0)) { goto L_804B1C2C; } // 804B1C18
L_804B1C1C:;
  {uint32_t ea=c->r[5]+0xFFFFFFFAu; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 804B1C1C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804B1C20
  if (crb(c,0)) { IRQCHK(c); goto L_804B1C1C; } // 804B1C24
  goto L_804B1C3C; // 804B1C28
L_804B1C2C:;
  {uint32_t ea=c->r[5]+0x00000006u; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 804B1C2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 804B1C30
  if (!crb(c,1)) { IRQCHK(c); goto L_804B1C2C; } // 804B1C34
  c->r[5]=c->r[5]+0xFFFFFFFAu; // 804B1C38
L_804B1C3C:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 804B1C3C
  fcmp(c,0,c->f[1],c->f[0]); // 804B1C40
  if (!crb(c,2)) { goto L_804B1C5C; } // 804B1C44
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 804B1C48
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1C4C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1C50
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1C54
  goto L_804B1CD8; // 804B1C58
L_804B1C5C:;
  c->r[4]=c->r[5]+0x00000006u; // 804B1C5C
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,3,ea,1,3);} // 804B1C60
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B1C64
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1C68
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B1C6C
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,6,ea,1,7);} // 804B1C70
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,3,ea,1,3);} // 804B1C74
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B1C78
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,7,ea,1,7);} // 804B1C7C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,1,6);} // 804B1C80
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,1,6);} // 804B1C84
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 804B1C88
  {uint32_t ea=c->r[2]+0x000014F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B1C8C
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 804B1C90
  {uint32_t ea=c->r[2]+0x000014FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1C94
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 804B1C98
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B1C9C
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 804B1CA0
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 804B1CA4
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 804B1CA8
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 804B1CAC
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 804B1CB0
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 804B1CB4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 804B1CB8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 804B1CBC
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 804B1CC0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804B1CC4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 804B1CC8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804B1CCC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 804B1CD0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 804B1CD4
L_804B1CD8:;
  c->r[1]=c->r[1]+0x00000010u; // 804B1CD8
  return; // 804B1CDC
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS32Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_804B1CE0(Ctx* __restrict c) {
  trace_call(0x804B1CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1CE0
  c->r[5]=c->r[3]+0x00000010u; // 804B1CE4
  c->r[6]=R16(c->r[3]+0x00000000u); // 804B1CE8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 804B1CEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804B1CF0
  c->r[4]=c->r[3]+c->r[0]; // 804B1CF4
  c->r[4]=c->r[4]+0x00000010u; // 804B1CF8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 804B1CFC
  fcmp(c,0,c->f[1],c->f[0]); // 804B1D00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1D04
  if (!crb(c,2)) { goto L_804B1D2C; } // 804B1D08
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B1D0C
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 804B1D10
  W16(c->r[1]+0x00000016u,c->r[0]); // 804B1D14
  {uint32_t ea=c->r[1]+0x00000016u; psq_load(c,2,ea,1,3);} // 804B1D18
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1D1C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1D20
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1D24
  goto L_804B1E98; // 804B1D28
L_804B1D2C:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,2);} // 804B1D2C
  fcmp(c,0,c->f[0],c->f[1]); // 804B1D30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B1D34
  if (!crb(c,2)) { goto L_804B1D5C; } // 804B1D38
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B1D3C
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 804B1D40
  W16(c->r[1]+0x00000014u,c->r[0]); // 804B1D44
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,1,3);} // 804B1D48
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1D4C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1D50
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1D54
  goto L_804B1E98; // 804B1D58
L_804B1D5C:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 804B1D5C
  W16(c->r[1]+0x00000012u,c->r[6]); // 804B1D60
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804B1D64
  {uint32_t ea=c->r[1]+0x00000012u; psq_load(c,2,ea,1,3);} // 804B1D68
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1D6C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804B1D70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804B1D74
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,3);} // 804B1D78
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 804B1D7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804B1D80
  c->r[4]=c->r[3]+c->r[0]; // 804B1D84
  c->r[6]=c->r[4]+0x00000010u; // 804B1D88
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,2);} // 804B1D8C
  c->r[4]=R8(c->r[1]+0x00000018u); // 804B1D90
  c->r[0]=R8(c->r[6]+0x00000000u); // 804B1D94
  cmpu(c,0,c->r[4],c->r[0]); // 804B1D98
  if (!crb(c,0)) { goto L_804B1DB0; } // 804B1D9C
L_804B1DA0:;
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; c->r[0]=R8(ea); c->r[6]=ea;} // 804B1DA0
  cmpu(c,0,c->r[4],c->r[0]); // 804B1DA4
  if (crb(c,0)) { IRQCHK(c); goto L_804B1DA0; } // 804B1DA8
  goto L_804B1DC0; // 804B1DAC
L_804B1DB0:;
  {uint32_t ea=c->r[6]+0x00000004u; c->r[0]=R8(ea); c->r[6]=ea;} // 804B1DB0
  cmpu(c,0,c->r[0],c->r[4]); // 804B1DB4
  if (!crb(c,1)) { IRQCHK(c); goto L_804B1DB0; } // 804B1DB8
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 804B1DBC
L_804B1DC0:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,1,2);} // 804B1DC0
  fcmp(c,0,c->f[1],c->f[0]); // 804B1DC4
  if (!crb(c,2)) { goto L_804B1DEC; } // 804B1DC8
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B1DCC
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 804B1DD0
  W16(c->r[1]+0x00000010u,c->r[0]); // 804B1DD4
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,3);} // 804B1DD8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1DDC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1DE0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B1DE4
  goto L_804B1E98; // 804B1DE8
L_804B1DEC:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 804B1DEC
  c->r[5]=c->r[6]+0x00000004u; // 804B1DF0
  c->r[0]=rotl(c->r[4],20)&0x00000FFFu; // 804B1DF4
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 804B1DF8
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,3,ea,1,3);} // 804B1DFC
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 804B1E00
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B1E04
  c->r[0]=sraw(c,c->r[0],20); // 804B1E08
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B1E0C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804B1E10
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B1E14
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,6,ea,1,6);} // 804B1E18
  c->r[3]=R32(c->r[6]+0x00000004u); // 804B1E1C
  c->r[0]=rotl(c->r[3],20)&0x00000FFFu; // 804B1E20
  W16(c->r[1]+0x0000000Au,c->r[0]); // 804B1E24
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,3);} // 804B1E28
  c->r[0]=rotl(c->r[3],20)&0xFFF00000u; // 804B1E2C
  c->r[0]=sraw(c,c->r[0],20); // 804B1E30
  W16(c->r[1]+0x00000008u,c->r[0]); // 804B1E34
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B1E38
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,6);} // 804B1E3C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,1,2);} // 804B1E40
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,1,2);} // 804B1E44
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 804B1E48
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 804B1E4C
  {uint32_t ea=c->r[2]+0x000014F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B1E50
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 804B1E54
  {uint32_t ea=c->r[2]+0x000014FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1E58
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B1E5C
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 804B1E60
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 804B1E64
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 804B1E68
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 804B1E6C
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 804B1E70
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 804B1E74
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 804B1E78
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 804B1E7C
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 804B1E80
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804B1E84
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 804B1E88
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 804B1E8C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 804B1E90
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 804B1E94
L_804B1E98:;
  c->r[1]=c->r[1]+0x00000020u; // 804B1E98
  return; // 804B1E9C
}

// GetAnmRotation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3RCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_804B1EA0(Ctx* __restrict c) {
  trace_call(0x804B1EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B1EA0
  c->r[0]=c->lr; // 804B1EA4
  W32(c->r[1]+0x00000094u,c->r[0]); // 804B1EA8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 804B1EAC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 804B1EB0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 804B1EB4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 804B1EB8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 804B1EBC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 804B1EC0
  c->r[11]=c->r[1]+0x00000060u; // 804B1EC4
  c->lr=0x804B1ECCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B1EC8
  c->r[31]=R32(c->r[6]+0x00000004u); // 804B1ECC
  c->r[9]=0u+0x43300000u; // 804B1ED0
  c->r[0]=0u+0x18000000u; // 804B1ED4
  c->f[29]=c->f[1]; // 804B1ED8
  c->r[8]=rotl(c->r[31],0)&0x38000000u; // 804B1EDC
  W32(c->r[1]+0x00000030u,c->r[9]); // 804B1EE0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1EE4
  c->r[27]=c->r[3]|c->r[3]; // 804B1EE8
  W32(c->r[1]+0x00000038u,c->r[9]); // 804B1EEC
  c->r[28]=c->r[4]|c->r[4]; // 804B1EF0
  c->r[29]=c->r[6]|c->r[6]; // 804B1EF4
  c->r[30]=c->r[7]|c->r[7]; // 804B1EF8
  if (crb(c,2)) { goto L_804B207C; } // 804B1EFC
  if (!crb(c,0)) { goto L_804B1F30; } // 804B1F00
  c->r[0]=0u+0x08000000u; // 804B1F04
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1F08
  if (crb(c,2)) { goto L_804B1F74; } // 804B1F0C
  if (!crb(c,0)) { goto L_804B1F20; } // 804B1F10
  cmps(c,0,(int32_t)c->r[8],0); // 804B1F14
  if (crb(c,2)) { goto L_804B1F60; } // 804B1F18
  goto L_804B2898; // 804B1F1C
L_804B1F20:;
  c->r[0]=0u+0x10000000u; // 804B1F20
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1F24
  if (crb(c,2)) { goto L_804B1FF8; } // 804B1F28
  goto L_804B2898; // 804B1F2C
L_804B1F30:;
  c->r[0]=0u+0x28000000u; // 804B1F30
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1F34
  if (crb(c,2)) { goto L_804B23E4; } // 804B1F38
  if (!crb(c,0)) { goto L_804B1F50; } // 804B1F3C
  c->r[0]=0u+0x20000000u; // 804B1F40
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1F44
  if (crb(c,2)) { goto L_804B2100; } // 804B1F48
  goto L_804B2898; // 804B1F4C
L_804B1F50:;
  c->r[0]=0u+0x30000000u; // 804B1F50
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804B1F54
  if (crb(c,2)) { goto L_804B26E0; } // 804B1F58
  goto L_804B2898; // 804B1F5C
L_804B1F60:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B1F60
  c->r[30]=c->r[7]+0x0000000Cu; // 804B1F64
  {uint32_t ea=c->r[7]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B1F68
  {uint32_t ea=c->r[7]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 804B1F6C
  goto L_804B28A4; // 804B1F70
L_804B1F74:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B1F74
  c->r[3]=c->r[30]|c->r[30]; // 804B1F78
  c->r[30]=c->r[7]+0x00000004u; // 804B1F7C
  if (crb(c,2)) { goto L_804B1F8C; } // 804B1F80
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1F84
  goto L_804B1F98; // 804B1F88
L_804B1F8C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1F8C
  c->r[3]=c->r[0]+c->r[6]; // 804B1F90
  c->lr=0x804B1F98u; f_804B1CE0(c); // 804B1F94
L_804B1F98:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 804B1F98
  c->f[31]=c->f[1]; // 804B1F9C
  c->r[3]=c->r[30]|c->r[30]; // 804B1FA0
  c->r[30]=c->r[30]+0x00000004u; // 804B1FA4
  if (crb(c,2)) { goto L_804B1FB4; } // 804B1FA8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1FAC
  goto L_804B1FC4; // 804B1FB0
L_804B1FB4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1FB4
  c->f[1]=c->f[29]; // 804B1FB8
  c->r[3]=c->r[0]+c->r[29]; // 804B1FBC
  c->lr=0x804B1FC4u; f_804B1CE0(c); // 804B1FC0
L_804B1FC4:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 804B1FC4
  c->f[30]=c->f[1]; // 804B1FC8
  c->r[3]=c->r[30]|c->r[30]; // 804B1FCC
  c->r[30]=c->r[30]+0x00000004u; // 804B1FD0
  if (crb(c,2)) { goto L_804B1FE0; } // 804B1FD4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B1FD8
  goto L_804B1FF0; // 804B1FDC
L_804B1FE0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B1FE0
  c->f[1]=c->f[29]; // 804B1FE4
  c->r[3]=c->r[0]+c->r[29]; // 804B1FE8
  c->lr=0x804B1FF0u; f_804B1CE0(c); // 804B1FEC
L_804B1FF0:;
  c->f[29]=c->f[1]; // 804B1FF0
  goto L_804B28A4; // 804B1FF4
L_804B1FF8:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B1FF8
  c->r[3]=c->r[30]|c->r[30]; // 804B1FFC
  c->r[30]=c->r[7]+0x00000004u; // 804B2000
  if (crb(c,2)) { goto L_804B2010; } // 804B2004
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2008
  goto L_804B201C; // 804B200C
L_804B2010:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2010
  c->r[3]=c->r[0]+c->r[6]; // 804B2014
  c->lr=0x804B201Cu; f_804B1B70(c); // 804B2018
L_804B201C:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 804B201C
  c->f[31]=c->f[1]; // 804B2020
  c->r[3]=c->r[30]|c->r[30]; // 804B2024
  c->r[30]=c->r[30]+0x00000004u; // 804B2028
  if (crb(c,2)) { goto L_804B2038; } // 804B202C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2030
  goto L_804B2048; // 804B2034
L_804B2038:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2038
  c->f[1]=c->f[29]; // 804B203C
  c->r[3]=c->r[0]+c->r[29]; // 804B2040
  c->lr=0x804B2048u; f_804B1B70(c); // 804B2044
L_804B2048:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 804B2048
  c->f[30]=c->f[1]; // 804B204C
  c->r[3]=c->r[30]|c->r[30]; // 804B2050
  c->r[30]=c->r[30]+0x00000004u; // 804B2054
  if (crb(c,2)) { goto L_804B2064; } // 804B2058
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B205C
  goto L_804B2074; // 804B2060
L_804B2064:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2064
  c->f[1]=c->f[29]; // 804B2068
  c->r[3]=c->r[0]+c->r[29]; // 804B206C
  c->lr=0x804B2074u; f_804B1B70(c); // 804B2070
L_804B2074:;
  c->f[29]=c->f[1]; // 804B2074
  goto L_804B28A4; // 804B2078
L_804B207C:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B207C
  c->r[3]=c->r[30]|c->r[30]; // 804B2080
  c->r[30]=c->r[7]+0x00000004u; // 804B2084
  if (crb(c,2)) { goto L_804B2094; } // 804B2088
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B208C
  goto L_804B20A0; // 804B2090
L_804B2094:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2094
  c->r[3]=c->r[0]+c->r[6]; // 804B2098
  c->lr=0x804B20A0u; f_804B1A44(c); // 804B209C
L_804B20A0:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 804B20A0
  c->f[31]=c->f[1]; // 804B20A4
  c->r[3]=c->r[30]|c->r[30]; // 804B20A8
  c->r[30]=c->r[30]+0x00000004u; // 804B20AC
  if (crb(c,2)) { goto L_804B20BC; } // 804B20B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B20B4
  goto L_804B20CC; // 804B20B8
L_804B20BC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B20BC
  c->f[1]=c->f[29]; // 804B20C0
  c->r[3]=c->r[0]+c->r[29]; // 804B20C4
  c->lr=0x804B20CCu; f_804B1A44(c); // 804B20C8
L_804B20CC:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 804B20CC
  c->f[30]=c->f[1]; // 804B20D0
  c->r[3]=c->r[30]|c->r[30]; // 804B20D4
  c->r[30]=c->r[30]+0x00000004u; // 804B20D8
  if (crb(c,2)) { goto L_804B20E8; } // 804B20DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B20E0
  goto L_804B20F8; // 804B20E4
L_804B20E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B20E8
  c->f[1]=c->f[29]; // 804B20EC
  c->r[3]=c->r[0]+c->r[29]; // 804B20F0
  c->lr=0x804B20F8u; f_804B1A44(c); // 804B20F4
L_804B20F8:;
  c->f[29]=c->f[1]; // 804B20F8
  goto L_804B28A4; // 804B20FC
L_804B2100:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B2100
  c->r[3]=c->r[30]|c->r[30]; // 804B2104
  c->r[0]=R16(c->r[5]+0x00000000u); // 804B2108
  c->r[30]=c->r[7]+0x00000004u; // 804B210C
  if (crb(c,2)) { goto L_804B211C; } // 804B2110
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2114
  goto L_804B21F8; // 804B2118
L_804B211C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B211C
  c->r[4]=c->r[3]+c->r[6]; // 804B2120
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,1,3);} // 804B2124
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B2128
  c->r[5]=R16(c->r[1]+0x00000028u); // 804B212C
  fcmp(c,0,c->f[29],c->f[6]); // 804B2130
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2134
  if (!crb(c,2)) { goto L_804B2160; } // 804B2138
  c->r[3]=R8(c->r[4]+0x00000008u); // 804B213C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2140
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B2144
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2148
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 804B214C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2150
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2154
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B2158
  goto L_804B21F8; // 804B215C
L_804B2160:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2160
  if (crb(c,1)) { goto L_804B2190; } // 804B2164
  c->r[3]=c->r[4]+c->r[0]; // 804B2168
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B216C
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B2170
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2174
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B2178
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B217C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 804B2180
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2184
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B2188
  goto L_804B21F8; // 804B218C
L_804B2190:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 804B2190
  c->r[3]=c->r[4]+c->r[5]; // 804B2194
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B2198
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B219C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B21A0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B21A4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B21A8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B21AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B21B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B21B4
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 804B21B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B21BC
  fcmp(c,0,c->f[6],c->f[4]); // 804B21C0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B21C4
  if (!crb(c,2)) { goto L_804B21D0; } // 804B21C8
  goto L_804B21F8; // 804B21CC
L_804B21D0:;
  c->r[3]=c->r[5]+0x00000001u; // 804B21D0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 804B21D4
  c->r[3]=c->r[4]+c->r[3]; // 804B21D8
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B21DC
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B21E0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B21E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B21E8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B21EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804B21F0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 804B21F4
L_804B21F8:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 804B21F8
  c->r[3]=c->r[30]|c->r[30]; // 804B21FC
  c->r[30]=c->r[30]+0x00000004u; // 804B2200
  if (crb(c,2)) { goto L_804B2210; } // 804B2204
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B2208
  goto L_804B22EC; // 804B220C
L_804B2210:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B2210
  c->r[4]=c->r[3]+c->r[6]; // 804B2214
  {uint32_t ea=c->r[1]+0x00000024u; psq_store(c,1,ea,1,3);} // 804B2218
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B221C
  c->r[5]=R16(c->r[1]+0x00000024u); // 804B2220
  fcmp(c,0,c->f[1],c->f[6]); // 804B2224
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2228
  if (!crb(c,2)) { goto L_804B2254; } // 804B222C
  c->r[3]=R8(c->r[4]+0x00000008u); // 804B2230
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2234
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B2238
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B223C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 804B2240
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2244
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2248
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B224C
  goto L_804B22EC; // 804B2250
L_804B2254:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2254
  if (crb(c,1)) { goto L_804B2284; } // 804B2258
  c->r[3]=c->r[4]+c->r[0]; // 804B225C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2260
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B2264
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2268
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B226C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2270
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 804B2274
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2278
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B227C
  goto L_804B22EC; // 804B2280
L_804B2284:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 804B2284
  c->r[3]=c->r[4]+c->r[5]; // 804B2288
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B228C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B2290
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B2294
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B2298
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B229C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B22A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B22A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B22A8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 804B22AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B22B0
  fcmp(c,0,c->f[6],c->f[4]); // 804B22B4
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B22B8
  if (!crb(c,2)) { goto L_804B22C4; } // 804B22BC
  goto L_804B22EC; // 804B22C0
L_804B22C4:;
  c->r[3]=c->r[5]+0x00000001u; // 804B22C4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 804B22C8
  c->r[3]=c->r[4]+c->r[3]; // 804B22CC
  c->r[3]=R8(c->r[3]+0x00000008u); // 804B22D0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B22D4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B22D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B22DC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B22E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 804B22E4
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 804B22E8
L_804B22EC:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 804B22EC
  c->r[3]=c->r[30]|c->r[30]; // 804B22F0
  c->r[30]=c->r[30]+0x00000004u; // 804B22F4
  if (crb(c,2)) { goto L_804B2304; } // 804B22F8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804B22FC
  goto L_804B28A4; // 804B2300
L_804B2304:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B2304
  c->r[4]=c->r[3]+c->r[6]; // 804B2308
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,1,3);} // 804B230C
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B2310
  c->r[5]=R16(c->r[1]+0x00000020u); // 804B2314
  fcmp(c,0,c->f[1],c->f[6]); // 804B2318
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B231C
  if (!crb(c,2)) { goto L_804B2348; } // 804B2320
  c->r[0]=R8(c->r[4]+0x00000008u); // 804B2324
  {uint32_t ea=c->r[2]+0x00001508u; c->f[3]=RF64(ea);} // 804B2328
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B232C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2330
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 804B2334
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2338
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804B233C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B2340
  goto L_804B28A4; // 804B2344
L_804B2348:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2348
  if (crb(c,1)) { goto L_804B2378; } // 804B234C
  c->r[3]=c->r[4]+c->r[0]; // 804B2350
  {uint32_t ea=c->r[2]+0x00001508u; c->f[3]=RF64(ea);} // 804B2354
  c->r[0]=R8(c->r[3]+0x00000008u); // 804B2358
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B235C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804B2360
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2364
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 804B2368
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804B236C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B2370
  goto L_804B28A4; // 804B2374
L_804B2378:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 804B2378
  c->r[3]=c->r[4]+c->r[5]; // 804B237C
  c->r[0]=R8(c->r[3]+0x00000008u); // 804B2380
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B2384
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B2388
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804B238C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B2390
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2394
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B2398
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B239C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 804B23A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B23A4
  fcmp(c,0,c->f[6],c->f[1]); // 804B23A8
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B23AC
  if (!crb(c,2)) { goto L_804B23B8; } // 804B23B0
  goto L_804B28A4; // 804B23B4
L_804B23B8:;
  c->r[0]=c->r[5]+0x00000001u; // 804B23B8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 804B23BC
  c->r[3]=c->r[4]+c->r[0]; // 804B23C0
  c->r[0]=R8(c->r[3]+0x00000008u); // 804B23C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B23C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B23CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B23D0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B23D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 804B23D8
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 804B23DC
  goto L_804B28A4; // 804B23E0
L_804B23E4:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B23E4
  c->r[3]=c->r[30]|c->r[30]; // 804B23E8
  c->r[0]=R16(c->r[5]+0x00000000u); // 804B23EC
  c->r[30]=c->r[7]+0x00000004u; // 804B23F0
  if (crb(c,2)) { goto L_804B2400; } // 804B23F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B23F8
  goto L_804B24E4; // 804B23FC
L_804B2400:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B2400
  c->r[4]=c->r[3]+c->r[6]; // 804B2404
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,29,ea,1,3);} // 804B2408
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B240C
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 804B2410
  fcmp(c,0,c->f[29],c->f[6]); // 804B2414
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2418
  if (!crb(c,2)) { goto L_804B2444; } // 804B241C
  c->r[3]=R16(c->r[4]+0x00000008u); // 804B2420
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2424
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B2428
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B242C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 804B2430
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2434
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2438
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B243C
  goto L_804B24E4; // 804B2440
L_804B2444:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2444
  if (crb(c,1)) { goto L_804B2478; } // 804B2448
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 804B244C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2450
  c->r[3]=c->r[4]+c->r[3]; // 804B2454
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2458
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B245C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2460
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B2464
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 804B2468
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B246C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B2470
  goto L_804B24E4; // 804B2474
L_804B2478:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 804B2478
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 804B247C
  c->r[3]=c->r[4]+c->r[3]; // 804B2480
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B2484
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B2488
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B248C
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B2490
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B2494
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2498
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B249C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B24A0
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 804B24A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B24A8
  fcmp(c,0,c->f[6],c->f[4]); // 804B24AC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B24B0
  if (!crb(c,2)) { goto L_804B24BC; } // 804B24B4
  goto L_804B24E4; // 804B24B8
L_804B24BC:;
  c->r[3]=c->r[5]+0x00000001u; // 804B24BC
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 804B24C0
  c->r[3]=c->r[4]+c->r[3]; // 804B24C4
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B24C8
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B24CC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B24D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B24D4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B24D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804B24DC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 804B24E0
L_804B24E4:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 804B24E4
  c->r[3]=c->r[30]|c->r[30]; // 804B24E8
  c->r[30]=c->r[30]+0x00000004u; // 804B24EC
  if (crb(c,2)) { goto L_804B24FC; } // 804B24F0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B24F4
  goto L_804B25E0; // 804B24F8
L_804B24FC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B24FC
  c->r[4]=c->r[3]+c->r[6]; // 804B2500
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,3);} // 804B2504
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B2508
  c->r[5]=R16(c->r[1]+0x00000018u); // 804B250C
  fcmp(c,0,c->f[1],c->f[6]); // 804B2510
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2514
  if (!crb(c,2)) { goto L_804B2540; } // 804B2518
  c->r[3]=R16(c->r[4]+0x00000008u); // 804B251C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B2520
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B2524
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2528
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 804B252C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2530
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2534
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B2538
  goto L_804B25E0; // 804B253C
L_804B2540:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2540
  if (crb(c,1)) { goto L_804B2574; } // 804B2544
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 804B2548
  {uint32_t ea=c->r[2]+0x00001508u; c->f[4]=RF64(ea);} // 804B254C
  c->r[3]=c->r[4]+c->r[3]; // 804B2550
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2554
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B2558
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B255C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B2560
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 804B2564
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 804B2568
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 804B256C
  goto L_804B25E0; // 804B2570
L_804B2574:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 804B2574
  W32(c->r[1]+0x00000034u,c->r[5]); // 804B2578
  c->r[3]=c->r[4]+c->r[3]; // 804B257C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B2580
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B2584
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B2588
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 804B258C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B2590
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2594
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B2598
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B259C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 804B25A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B25A4
  fcmp(c,0,c->f[6],c->f[4]); // 804B25A8
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B25AC
  if (!crb(c,2)) { goto L_804B25B8; } // 804B25B0
  goto L_804B25E0; // 804B25B4
L_804B25B8:;
  c->r[3]=c->r[5]+0x00000001u; // 804B25B8
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 804B25BC
  c->r[3]=c->r[4]+c->r[3]; // 804B25C0
  c->r[3]=R16(c->r[3]+0x00000008u); // 804B25C4
  W32(c->r[1]+0x00000034u,c->r[3]); // 804B25C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B25CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B25D0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B25D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 804B25D8
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 804B25DC
L_804B25E0:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 804B25E0
  c->r[3]=c->r[30]|c->r[30]; // 804B25E4
  c->r[30]=c->r[30]+0x00000004u; // 804B25E8
  if (crb(c,2)) { goto L_804B25F8; } // 804B25EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804B25F0
  goto L_804B28A4; // 804B25F4
L_804B25F8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B25F8
  c->r[4]=c->r[3]+c->r[6]; // 804B25FC
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 804B2600
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 804B2604
  c->r[5]=R16(c->r[1]+0x00000014u); // 804B2608
  fcmp(c,0,c->f[1],c->f[6]); // 804B260C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2610
  if (!crb(c,2)) { goto L_804B263C; } // 804B2614
  c->r[0]=R16(c->r[4]+0x00000008u); // 804B2618
  {uint32_t ea=c->r[2]+0x00001508u; c->f[3]=RF64(ea);} // 804B261C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804B2620
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2624
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 804B2628
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B262C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804B2630
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B2634
  goto L_804B28A4; // 804B2638
L_804B263C:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B263C
  if (crb(c,1)) { goto L_804B2670; } // 804B2640
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 804B2644
  {uint32_t ea=c->r[2]+0x00001508u; c->f[3]=RF64(ea);} // 804B2648
  c->r[3]=c->r[4]+c->r[0]; // 804B264C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2650
  c->r[0]=R16(c->r[3]+0x00000008u); // 804B2654
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2658
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B265C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 804B2660
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804B2664
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 804B2668
  goto L_804B28A4; // 804B266C
L_804B2670:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 804B2670
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 804B2674
  c->r[3]=c->r[4]+c->r[0]; // 804B2678
  {uint32_t ea=c->r[2]+0x00001508u; c->f[5]=RF64(ea);} // 804B267C
  c->r[0]=R16(c->r[3]+0x00000008u); // 804B2680
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B2684
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B2688
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 804B268C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2690
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B2694
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2698
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 804B269C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B26A0
  fcmp(c,0,c->f[6],c->f[1]); // 804B26A4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B26A8
  if (!crb(c,2)) { goto L_804B26B4; } // 804B26AC
  goto L_804B28A4; // 804B26B0
L_804B26B4:;
  c->r[0]=c->r[5]+0x00000001u; // 804B26B4
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 804B26B8
  c->r[3]=c->r[4]+c->r[0]; // 804B26BC
  c->r[0]=R16(c->r[3]+0x00000008u); // 804B26C0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804B26C4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B26C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 804B26CC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 804B26D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 804B26D4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 804B26D8
  goto L_804B28A4; // 804B26DC
L_804B26E0:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 804B26E0
  c->r[3]=c->r[30]|c->r[30]; // 804B26E4
  c->r[0]=R16(c->r[5]+0x00000000u); // 804B26E8
  c->r[30]=c->r[7]+0x00000004u; // 804B26EC
  if (crb(c,2)) { goto L_804B26FC; } // 804B26F0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B26F4
  goto L_804B2774; // 804B26F8
L_804B26FC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B26FC
  c->r[4]=c->r[3]+c->r[6]; // 804B2700
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,29,ea,1,3);} // 804B2704
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2708
  c->r[5]=R16(c->r[1]+0x00000010u); // 804B270C
  fcmp(c,0,c->f[29],c->f[3]); // 804B2710
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2714
  if (!crb(c,2)) { goto L_804B2724; } // 804B2718
  {uint32_t ea=c->r[4]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B271C
  goto L_804B2774; // 804B2720
L_804B2724:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B2724
  if (crb(c,1)) { goto L_804B2738; } // 804B2728
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 804B272C
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2730
  goto L_804B2774; // 804B2734
L_804B2738:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 804B2738
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 804B273C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[2]=RF64(ea);} // 804B2740
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B2744
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2748
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B274C
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[0]); // 804B2750
  fcmp(c,0,c->f[3],c->f[2]); // 804B2754
  if (!crb(c,2)) { goto L_804B2760; } // 804B2758
  goto L_804B2774; // 804B275C
L_804B2760:;
  c->r[3]=c->r[5]+0x00000001u; // 804B2760
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 804B2764
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2768
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804B276C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[0],c->f[31])); // 804B2770
L_804B2774:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 804B2774
  c->r[3]=c->r[30]|c->r[30]; // 804B2778
  c->r[30]=c->r[30]+0x00000004u; // 804B277C
  if (crb(c,2)) { goto L_804B278C; } // 804B2780
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B2784
  goto L_804B2804; // 804B2788
L_804B278C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B278C
  c->r[4]=c->r[3]+c->r[6]; // 804B2790
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 804B2794
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2798
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 804B279C
  fcmp(c,0,c->f[1],c->f[3]); // 804B27A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B27A4
  if (!crb(c,2)) { goto L_804B27B4; } // 804B27A8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B27AC
  goto L_804B2804; // 804B27B0
L_804B27B4:;
  cmpu(c,0,c->r[0],c->r[5]); // 804B27B4
  if (crb(c,1)) { goto L_804B27C8; } // 804B27B8
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 804B27BC
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 804B27C0
  goto L_804B2804; // 804B27C4
L_804B27C8:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 804B27C8
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 804B27CC
  {uint32_t ea=c->r[2]+0x00001508u; c->f[2]=RF64(ea);} // 804B27D0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 804B27D4
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 804B27D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B27DC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804B27E0
  fcmp(c,0,c->f[3],c->f[2]); // 804B27E4
  if (!crb(c,2)) { goto L_804B27F0; } // 804B27E8
  goto L_804B2804; // 804B27EC
L_804B27F0:;
  c->r[3]=c->r[5]+0x00000001u; // 804B27F0
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 804B27F4
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 804B27F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 804B27FC
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[0],c->f[30])); // 804B2800
L_804B2804:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 804B2804
  c->r[3]=c->r[30]|c->r[30]; // 804B2808
  c->r[30]=c->r[30]+0x00000004u; // 804B280C
  if (crb(c,2)) { goto L_804B281C; } // 804B2810
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804B2814
  goto L_804B28A4; // 804B2818
L_804B281C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B281C
  c->r[3]=c->r[3]+c->r[6]; // 804B2820
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,3);} // 804B2824
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B2828
  c->r[4]=R16(c->r[1]+0x00000008u); // 804B282C
  fcmp(c,0,c->f[1],c->f[3]); // 804B2830
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B2834
  if (!crb(c,2)) { goto L_804B2844; } // 804B2838
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 804B283C
  goto L_804B28A4; // 804B2840
L_804B2844:;
  cmpu(c,0,c->r[0],c->r[4]); // 804B2844
  if (crb(c,1)) { goto L_804B2858; } // 804B2848
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 804B284C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 804B2850
  goto L_804B28A4; // 804B2854
L_804B2858:;
  W32(c->r[1]+0x00000034u,c->r[4]); // 804B2858
  c->r[0]=rotl(c->r[4],2)&0x0003FFFCu; // 804B285C
  {uint32_t ea=c->r[2]+0x00001508u; c->f[2]=RF64(ea);} // 804B2860
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804B2864
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 804B2868
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B286C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804B2870
  fcmp(c,0,c->f[3],c->f[1]); // 804B2874
  if (!crb(c,2)) { goto L_804B2880; } // 804B2878
  goto L_804B28A4; // 804B287C
L_804B2880:;
  c->r[0]=c->r[4]+0x00000001u; // 804B2880
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 804B2884
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2888
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 804B288C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 804B2890
  goto L_804B28A4; // 804B2894
L_804B2898:;
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2898
  c->f[30]=c->f[31]; // 804B289C
  c->f[29]=c->f[31]; // 804B28A0
L_804B28A4:;
  {uint32_t ea=c->r[2]+0x00001500u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B28A4
  c->r[3]=c->r[27]|c->r[27]; // 804B28A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 804B28AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 804B28B0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[29]); // 804B28B4
  c->lr=0x804B28BCu; f_804E18A0(c); // 804B28B8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 804B28BC
  c->r[3]=c->r[30]|c->r[30]; // 804B28C0
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 804B28C4
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[29]);} // 804B28C8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 804B28CC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 804B28D0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 804B28D4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 804B28D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 804B28DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 804B28E0
  c->r[11]=c->r[1]+0x00000060u; // 804B28E4
  c->lr=0x804B28ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B28E8
  c->r[0]=R32(c->r[1]+0x00000094u); // 804B28EC
  c->lr=c->r[0]; // 804B28F0
  c->r[1]=c->r[1]+0x00000090u; // 804B28F4
  return; // 804B28F8
}

// GetAnmTranslation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_804B28FC(Ctx* __restrict c) {
  trace_call(0x804B28FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B28FC
  c->r[0]=c->lr; // 804B2900
  W32(c->r[1]+0x00000054u,c->r[0]); // 804B2904
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804B2908
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804B290C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804B2910
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804B2914
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 804B2918
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 804B291C
  c->f[29]=c->f[1]; // 804B2920
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B2924
  c->r[31]=R32(c->r[4]+0x00000004u); // 804B2928
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B292C
  c->r[30]=c->r[5]|c->r[5]; // 804B2930
  c->r[6]=rotl(c->r[31],0)&0xC0000000u; cr0(c,c->r[6]); // 804B2934
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B2938
  c->r[29]=c->r[4]|c->r[4]; // 804B293C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B2940
  c->r[28]=c->r[3]|c->r[3]; // 804B2944
  if (crb(c,2)) { goto L_804B2984; } // 804B2948
  if (!crb(c,0)) { goto L_804B2974; } // 804B294C
  c->r[0]=0u+0xC0000000u; // 804B2950
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804B2954
  if (crb(c,2)) { goto L_804B2A98; } // 804B2958
  if (!crb(c,0)) { goto L_804B2B18; } // 804B295C
  c->r[3]=0u+0x80000000u; // 804B2960
  c->r[0]=c->r[3]+0x00000001u; // 804B2964
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804B2968
  if (!crb(c,0)) { goto L_804B2B18; } // 804B296C
  goto L_804B2A18; // 804B2970
L_804B2974:;
  c->r[0]=0u+0x40000000u; // 804B2974
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804B2978
  if (crb(c,2)) { goto L_804B2998; } // 804B297C
  goto L_804B2B18; // 804B2980
L_804B2984:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2984
  c->r[30]=c->r[5]+0x0000000Cu; // 804B2988
  {uint32_t ea=c->r[5]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B298C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2990
  goto L_804B2B24; // 804B2994
L_804B2998:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 804B2998
  c->r[3]=c->r[30]|c->r[30]; // 804B299C
  c->r[30]=c->r[5]+0x00000004u; // 804B29A0
  if (crb(c,2)) { goto L_804B29B0; } // 804B29A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B29A8
  goto L_804B29BC; // 804B29AC
L_804B29B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B29B0
  c->r[3]=c->r[0]+c->r[4]; // 804B29B4
  c->lr=0x804B29BCu; f_804B1CE0(c); // 804B29B8
L_804B29BC:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 804B29BC
  c->f[31]=c->f[1]; // 804B29C0
  c->r[3]=c->r[30]|c->r[30]; // 804B29C4
  c->r[30]=c->r[30]+0x00000004u; // 804B29C8
  if (crb(c,2)) { goto L_804B29D8; } // 804B29CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B29D0
  goto L_804B29E8; // 804B29D4
L_804B29D8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B29D8
  c->f[1]=c->f[29]; // 804B29DC
  c->r[3]=c->r[0]+c->r[29]; // 804B29E0
  c->lr=0x804B29E8u; f_804B1CE0(c); // 804B29E4
L_804B29E8:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 804B29E8
  c->f[30]=c->f[1]; // 804B29EC
  c->r[3]=c->r[30]|c->r[30]; // 804B29F0
  c->r[30]=c->r[30]+0x00000004u; // 804B29F4
  if (crb(c,2)) { goto L_804B2A04; } // 804B29F8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B29FC
  goto L_804B2B24; // 804B2A00
L_804B2A04:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2A04
  c->f[1]=c->f[29]; // 804B2A08
  c->r[3]=c->r[0]+c->r[29]; // 804B2A0C
  c->lr=0x804B2A14u; f_804B1CE0(c); // 804B2A10
  goto L_804B2B24; // 804B2A14
L_804B2A18:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 804B2A18
  c->r[3]=c->r[30]|c->r[30]; // 804B2A1C
  c->r[30]=c->r[5]+0x00000004u; // 804B2A20
  if (crb(c,2)) { goto L_804B2A30; } // 804B2A24
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2A28
  goto L_804B2A3C; // 804B2A2C
L_804B2A30:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2A30
  c->r[3]=c->r[0]+c->r[4]; // 804B2A34
  c->lr=0x804B2A3Cu; f_804B1B70(c); // 804B2A38
L_804B2A3C:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 804B2A3C
  c->f[31]=c->f[1]; // 804B2A40
  c->r[3]=c->r[30]|c->r[30]; // 804B2A44
  c->r[30]=c->r[30]+0x00000004u; // 804B2A48
  if (crb(c,2)) { goto L_804B2A58; } // 804B2A4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2A50
  goto L_804B2A68; // 804B2A54
L_804B2A58:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2A58
  c->f[1]=c->f[29]; // 804B2A5C
  c->r[3]=c->r[0]+c->r[29]; // 804B2A60
  c->lr=0x804B2A68u; f_804B1B70(c); // 804B2A64
L_804B2A68:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 804B2A68
  c->f[30]=c->f[1]; // 804B2A6C
  c->r[3]=c->r[30]|c->r[30]; // 804B2A70
  c->r[30]=c->r[30]+0x00000004u; // 804B2A74
  if (crb(c,2)) { goto L_804B2A84; } // 804B2A78
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2A7C
  goto L_804B2B24; // 804B2A80
L_804B2A84:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2A84
  c->f[1]=c->f[29]; // 804B2A88
  c->r[3]=c->r[0]+c->r[29]; // 804B2A8C
  c->lr=0x804B2A94u; f_804B1B70(c); // 804B2A90
  goto L_804B2B24; // 804B2A94
L_804B2A98:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 804B2A98
  c->r[3]=c->r[30]|c->r[30]; // 804B2A9C
  c->r[30]=c->r[5]+0x00000004u; // 804B2AA0
  if (crb(c,2)) { goto L_804B2AB0; } // 804B2AA4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2AA8
  goto L_804B2ABC; // 804B2AAC
L_804B2AB0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2AB0
  c->r[3]=c->r[0]+c->r[4]; // 804B2AB4
  c->lr=0x804B2ABCu; f_804B1A44(c); // 804B2AB8
L_804B2ABC:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 804B2ABC
  c->f[31]=c->f[1]; // 804B2AC0
  c->r[3]=c->r[30]|c->r[30]; // 804B2AC4
  c->r[30]=c->r[30]+0x00000004u; // 804B2AC8
  if (crb(c,2)) { goto L_804B2AD8; } // 804B2ACC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2AD0
  goto L_804B2AE8; // 804B2AD4
L_804B2AD8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2AD8
  c->f[1]=c->f[29]; // 804B2ADC
  c->r[3]=c->r[0]+c->r[29]; // 804B2AE0
  c->lr=0x804B2AE8u; f_804B1A44(c); // 804B2AE4
L_804B2AE8:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 804B2AE8
  c->f[30]=c->f[1]; // 804B2AEC
  c->r[3]=c->r[30]|c->r[30]; // 804B2AF0
  c->r[30]=c->r[30]+0x00000004u; // 804B2AF4
  if (crb(c,2)) { goto L_804B2B04; } // 804B2AF8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2AFC
  goto L_804B2B24; // 804B2B00
L_804B2B04:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2B04
  c->f[1]=c->f[29]; // 804B2B08
  c->r[3]=c->r[0]+c->r[29]; // 804B2B0C
  c->lr=0x804B2B14u; f_804B1A44(c); // 804B2B10
  goto L_804B2B24; // 804B2B14
L_804B2B18:;
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B2B18
  c->f[30]=c->f[31]; // 804B2B1C
  c->f[1]=c->f[31]; // 804B2B20
L_804B2B24:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 804B2B24
  c->r[3]=c->r[30]|c->r[30]; // 804B2B28
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 804B2B2C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804B2B30
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804B2B34
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804B2B38
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804B2B3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804B2B40
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 804B2B44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 804B2B48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B2B4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B2B50
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B2B54
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B2B58
  c->r[0]=R32(c->r[1]+0x00000054u); // 804B2B5C
  c->lr=c->r[0]; // 804B2B60
  c->r[1]=c->r[1]+0x00000050u; // 804B2B64
  return; // 804B2B68
}

// GetAnmResult___Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2B6C(Ctx* __restrict c) {
  trace_call(0x804B2B6Cu);
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2B6C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804B2B70
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804B2B74
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B2B78
  c->r[3]=c->r[3]+0x0000001Cu; // 804B2B7C
  f_80382F00(c); return; // 804B2B80
}

// GetAnmResult_T__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2B84(Ctx* __restrict c) {
  trace_call(0x804B2B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2B84
  c->r[0]=c->lr; // 804B2B88
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B2B8C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B2B90
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B2B94
  c->f[31]=c->f[1]; // 804B2B98
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2B9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B2BA0
  c->r[31]=c->r[5]|c->r[5]; // 804B2BA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B2BA8
  c->r[30]=c->r[3]|c->r[3]; // 804B2BAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804B2BB0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804B2BB4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B2BB8
  c->r[3]=c->r[3]+0x0000001Cu; // 804B2BBC
  c->lr=0x804B2BC4u; f_80382F00(c); // 804B2BC0
  c->f[1]=c->f[31]; // 804B2BC4
  c->r[4]=c->r[31]|c->r[31]; // 804B2BC8
  c->r[3]=c->r[1]+0x00000008u; // 804B2BCC
  c->r[5]=c->r[31]+0x00000008u; // 804B2BD0
  c->lr=0x804B2BD8u; f_804B28FC(c); // 804B2BD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2BD8
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804B2BDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2BE0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 804B2BE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2BE8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 804B2BEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B2BF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B2BF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B2BF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B2BFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B2C00
  c->lr=c->r[0]; // 804B2C04
  c->r[1]=c->r[1]+0x00000030u; // 804B2C08
  return; // 804B2C0C
}

// GetAnmResult_R__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2C10(Ctx* __restrict c) {
  trace_call(0x804B2C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2C10
  c->r[0]=c->lr; // 804B2C14
  c->r[6]=c->r[5]|c->r[5]; // 804B2C18
  c->r[5]=c->r[4]|c->r[4]; // 804B2C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B2C20
  c->r[4]=c->r[3]+0x00000010u; // 804B2C24
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2C28
  c->r[7]=c->r[6]+0x00000008u; // 804B2C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B2C30
  c->r[31]=c->r[3]|c->r[3]; // 804B2C34
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804B2C38
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804B2C3C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B2C40
  c->r[3]=c->r[3]+0x0000001Cu; // 804B2C44
  c->lr=0x804B2C4Cu; f_804B1EA0(c); // 804B2C48
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B2C4C
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2C50
  c->r[0]=c->r[0]|0x80000000u; // 804B2C54
  W32(c->r[31]+0x00000000u,c->r[0]); // 804B2C58
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 804B2C5C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 804B2C60
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 804B2C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B2C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B2C6C
  c->lr=c->r[0]; // 804B2C70
  c->r[1]=c->r[1]+0x00000010u; // 804B2C74
  return; // 804B2C78
}

// GetAnmResult_S__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2C7C(Ctx* __restrict c) {
  trace_call(0x804B2C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2C7C
  c->r[0]=c->lr; // 804B2C80
  c->r[4]=c->r[5]|c->r[5]; // 804B2C84
  c->r[5]=c->r[5]+0x00000008u; // 804B2C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B2C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B2C90
  c->r[31]=c->r[3]|c->r[3]; // 804B2C94
  c->r[3]=c->r[3]+0x00000004u; // 804B2C98
  c->lr=0x804B2CA0u; f_804B178C(c); // 804B2C9C
  c->r[3]=c->r[31]+0x0000001Cu; // 804B2CA0
  c->lr=0x804B2CA8u; f_80382F00(c); // 804B2CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B2CA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B2CAC
  c->lr=c->r[0]; // 804B2CB0
  c->r[1]=c->r[1]+0x00000010u; // 804B2CB4
  return; // 804B2CB8
}

// GetAnmResult_RT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2CBC(Ctx* __restrict c) {
  trace_call(0x804B2CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2CBC
  c->r[0]=c->lr; // 804B2CC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B2CC4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B2CC8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B2CCC
  c->f[31]=c->f[1]; // 804B2CD0
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2CD4
  c->r[7]=c->r[5]+0x00000008u; // 804B2CD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B2CDC
  c->r[31]=c->r[5]|c->r[5]; // 804B2CE0
  c->r[5]=c->r[4]|c->r[4]; // 804B2CE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B2CE8
  c->r[30]=c->r[3]|c->r[3]; // 804B2CEC
  c->r[6]=c->r[31]|c->r[31]; // 804B2CF0
  c->r[4]=c->r[3]+0x00000010u; // 804B2CF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804B2CF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804B2CFC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B2D00
  c->r[3]=c->r[3]+0x0000001Cu; // 804B2D04
  c->lr=0x804B2D0Cu; f_804B1EA0(c); // 804B2D08
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B2D0C
  c->r[5]=c->r[3]|c->r[3]; // 804B2D10
  c->f[1]=c->f[31]; // 804B2D14
  c->r[4]=c->r[31]|c->r[31]; // 804B2D18
  c->r[0]=c->r[0]|0x80000000u; // 804B2D1C
  c->r[3]=c->r[1]+0x00000008u; // 804B2D20
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B2D24
  c->lr=0x804B2D2Cu; f_804B28FC(c); // 804B2D28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2D2C
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804B2D30
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2D34
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 804B2D38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2D3C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 804B2D40
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B2D44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B2D48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B2D4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B2D50
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B2D54
  c->lr=c->r[0]; // 804B2D58
  c->r[1]=c->r[1]+0x00000030u; // 804B2D5C
  return; // 804B2D60
}

// GetAnmResult_SR__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2D64(Ctx* __restrict c) {
  trace_call(0x804B2D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2D64
  c->r[0]=c->lr; // 804B2D68
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B2D6C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B2D70
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B2D74
  c->f[31]=c->f[1]; // 804B2D78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B2D7C
  c->r[31]=c->r[5]|c->r[5]; // 804B2D80
  c->r[5]=c->r[5]+0x00000008u; // 804B2D84
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B2D88
  c->r[30]=c->r[4]|c->r[4]; // 804B2D8C
  c->r[4]=c->r[31]|c->r[31]; // 804B2D90
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B2D94
  c->r[29]=c->r[3]|c->r[3]; // 804B2D98
  c->r[3]=c->r[3]+0x00000004u; // 804B2D9C
  c->lr=0x804B2DA4u; f_804B178C(c); // 804B2DA0
  c->f[1]=c->f[31]; // 804B2DA4
  c->r[7]=c->r[3]|c->r[3]; // 804B2DA8
  c->r[5]=c->r[30]|c->r[30]; // 804B2DAC
  c->r[6]=c->r[31]|c->r[31]; // 804B2DB0
  c->r[3]=c->r[29]+0x0000001Cu; // 804B2DB4
  c->r[4]=c->r[29]+0x00000010u; // 804B2DB8
  c->lr=0x804B2DC0u; f_804B1EA0(c); // 804B2DBC
  c->r[0]=R32(c->r[29]+0x00000000u); // 804B2DC0
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2DC4
  c->r[0]=c->r[0]|0x80000000u; // 804B2DC8
  W32(c->r[29]+0x00000000u,c->r[0]); // 804B2DCC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 804B2DD0
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 804B2DD4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 804B2DD8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B2DDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B2DE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B2DE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B2DE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B2DEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B2DF0
  c->lr=c->r[0]; // 804B2DF4
  c->r[1]=c->r[1]+0x00000030u; // 804B2DF8
  return; // 804B2DFC
}

// GetAnmResult_ST__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2E00(Ctx* __restrict c) {
  trace_call(0x804B2E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2E00
  c->r[0]=c->lr; // 804B2E04
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B2E08
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B2E0C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B2E10
  c->f[31]=c->f[1]; // 804B2E14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B2E18
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B2E1C
  c->r[30]=c->r[5]|c->r[5]; // 804B2E20
  c->r[4]=c->r[30]|c->r[30]; // 804B2E24
  c->r[5]=c->r[5]+0x00000008u; // 804B2E28
  W32(c->r[1]+0x00000024u,c->r[29]); // 804B2E2C
  c->r[29]=c->r[3]|c->r[3]; // 804B2E30
  c->r[3]=c->r[3]+0x00000004u; // 804B2E34
  c->lr=0x804B2E3Cu; f_804B178C(c); // 804B2E38
  c->r[31]=c->r[3]|c->r[3]; // 804B2E3C
  c->r[3]=c->r[29]+0x0000001Cu; // 804B2E40
  c->lr=0x804B2E48u; f_80382F00(c); // 804B2E44
  c->f[1]=c->f[31]; // 804B2E48
  c->r[4]=c->r[30]|c->r[30]; // 804B2E4C
  c->r[5]=c->r[31]|c->r[31]; // 804B2E50
  c->r[3]=c->r[1]+0x00000008u; // 804B2E54
  c->lr=0x804B2E5Cu; f_804B28FC(c); // 804B2E58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2E5C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 804B2E60
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2E64
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 804B2E68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2E6C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 804B2E70
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B2E74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B2E78
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B2E7C
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B2E80
  c->r[29]=R32(c->r[1]+0x00000024u); // 804B2E84
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B2E88
  c->lr=c->r[0]; // 804B2E8C
  c->r[1]=c->r[1]+0x00000040u; // 804B2E90
  return; // 804B2E94
}

// GetAnmResult_SRT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_804B2E98(Ctx* __restrict c) {
  trace_call(0x804B2E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B2E98
  c->r[0]=c->lr; // 804B2E9C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B2EA0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B2EA4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B2EA8
  c->f[31]=c->f[1]; // 804B2EAC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B2EB0
  c->r[31]=c->r[5]|c->r[5]; // 804B2EB4
  c->r[5]=c->r[5]+0x00000008u; // 804B2EB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B2EBC
  c->r[30]=c->r[4]|c->r[4]; // 804B2EC0
  c->r[4]=c->r[31]|c->r[31]; // 804B2EC4
  W32(c->r[1]+0x00000024u,c->r[29]); // 804B2EC8
  c->r[29]=c->r[3]|c->r[3]; // 804B2ECC
  c->r[3]=c->r[3]+0x00000004u; // 804B2ED0
  c->lr=0x804B2ED8u; f_804B178C(c); // 804B2ED4
  c->f[1]=c->f[31]; // 804B2ED8
  c->r[7]=c->r[3]|c->r[3]; // 804B2EDC
  c->r[5]=c->r[30]|c->r[30]; // 804B2EE0
  c->r[6]=c->r[31]|c->r[31]; // 804B2EE4
  c->r[3]=c->r[29]+0x0000001Cu; // 804B2EE8
  c->r[4]=c->r[29]+0x00000010u; // 804B2EEC
  c->lr=0x804B2EF4u; f_804B1EA0(c); // 804B2EF0
  c->f[1]=c->f[31]; // 804B2EF4
  c->r[5]=c->r[3]|c->r[3]; // 804B2EF8
  c->r[4]=c->r[31]|c->r[31]; // 804B2EFC
  c->r[3]=c->r[1]+0x00000008u; // 804B2F00
  c->lr=0x804B2F08u; f_804B28FC(c); // 804B2F04
  c->r[0]=R32(c->r[29]+0x00000000u); // 804B2F08
  c->r[0]=c->r[0]|0x80000000u; // 804B2F0C
  W32(c->r[29]+0x00000000u,c->r[0]); // 804B2F10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2F14
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 804B2F18
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2F1C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 804B2F20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2F24
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 804B2F28
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B2F2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B2F30
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B2F34
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B2F38
  c->r[29]=R32(c->r[1]+0x00000024u); // 804B2F3C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B2F40
  c->lr=c->r[0]; // 804B2F44
  c->r[1]=c->r[1]+0x00000040u; // 804B2F48
  return; // 804B2F4C
}

// GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
void f_804B2F50(Ctx* __restrict c) {
  trace_call(0x804B2F50u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804B2F50
  c->r[0]=R32(c->r[6]+0x00000010u); // 804B2F54
  cmps(c,0,(int32_t)c->r[0],0); // 804B2F58
  if (crb(c,2)) { goto L_804B2F68; } // 804B2F5C
  c->r[0]=c->r[6]+c->r[0]; // 804B2F60
  goto L_804B2F6C; // 804B2F64
L_804B2F68:;
  c->r[0]=0u+0x00000000u; // 804B2F68
L_804B2F6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B2F6C
  if (crb(c,2)) { goto L_804B2F9C; } // 804B2F70
  c->r[5]=c->r[5]+0x00000001u; // 804B2F74
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 804B2F78
  c->r[5]=c->r[0]+c->r[5]; // 804B2F7C
  c->r[5]=R32(c->r[5]+0x00000014u); // 804B2F80
  cmps(c,0,(int32_t)c->r[5],0); // 804B2F84
  if (crb(c,2)) { goto L_804B2F94; } // 804B2F88
  c->r[5]=c->r[0]+c->r[5]; // 804B2F8C
  goto L_804B2FA0; // 804B2F90
L_804B2F94:;
  c->r[5]=0u+0x00000000u; // 804B2F94
  goto L_804B2FA0; // 804B2F98
L_804B2F9C:;
  c->r[5]=0u+0x00000000u; // 804B2F9C
L_804B2FA0:;
  c->r[8]=R32(c->r[5]+0x00000004u); // 804B2FA0
  c->r[6]=0u+0x806B0000u; // 804B2FA4
  c->r[7]=R32(c->r[3]+0x00000000u); // 804B2FA8
  c->r[6]=c->r[6]+0xFFFFBB68u; // 804B2FAC
  c->r[0]=rotl(c->r[8],12)&0x0000001Cu; // 804B2FB0
  c->r[3]=rotl(c->r[8],0)&0x00001FFFu; // 804B2FB4
  c->r[12]=R32(c->r[6]+c->r[0]); // 804B2FB8
  W32(c->r[4]+0x00000000u,c->r[3]); // 804B2FBC
  c->r[3]=c->r[4]|c->r[4]; // 804B2FC0
  c->r[4]=c->r[7]+0x00000020u; // 804B2FC4
  c->ctr=c->r[12]; // 804B2FC8
  if (true) { dispatch(c,c->ctr); return; } // 804B2FCC
}

// fn_804B2FD0
void f_804B2FD0(Ctx* __restrict c) {
  trace_call(0x804B2FD0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B2FD0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 804B2FD4
  if (crb(c,2)) { goto L_804B2FF0; } // 804B2FD8
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2FDC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 804B2FE0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804B2FE4
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B2FE8
  return; // 804B2FEC
L_804B2FF0:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B2FF0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B2FF4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B2FF8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 804B2FFC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 804B3000
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 804B3004
  return; // 804B3008
}

// fn_804B300C
void f_804B300C(Ctx* __restrict c) {
  trace_call(0x804B300Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B300C
  c->r[0]=c->lr; // 804B3010
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B3014
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B3018
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 804B301C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B3020
  c->r[31]=c->r[4]|c->r[4]; // 804B3024
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B3028
  c->r[30]=c->r[3]|c->r[3]; // 804B302C
  if (crb(c,2)) { goto L_804B306C; } // 804B3030
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 804B3034
  if (crb(c,2)) { goto L_804B3048; } // 804B3038
  c->r[3]=c->r[31]|c->r[31]; // 804B303C
  c->lr=0x804B3044u; f_80382F00(c); // 804B3040
  goto L_804B3098; // 804B3044
L_804B3048:;
  c->r[3]=c->r[31]|c->r[31]; // 804B3048
  c->lr=0x804B3050u; f_80382F00(c); // 804B304C
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B3050
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3054
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3058
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 804B305C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B3060
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804B3064
  goto L_804B3098; // 804B3068
L_804B306C:;
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 804B306C
  if (crb(c,2)) { goto L_804B3090; } // 804B3070
  c->r[3]=c->r[3]+0x0000001Cu; // 804B3074
  c->lr=0x804B307Cu; f_80382F2C(c); // 804B3078
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B307C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B3080
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B3084
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804B3088
  goto L_804B3098; // 804B308C
L_804B3090:;
  c->r[3]=c->r[3]+0x0000001Cu; // 804B3090
  c->lr=0x804B3098u; f_80382F2C(c); // 804B3094
L_804B3098:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B3098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B309C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B30A0
  c->lr=c->r[0]; // 804B30A4
  c->r[1]=c->r[1]+0x00000010u; // 804B30A8
  return; // 804B30AC
}

// fn_804B30B0
void f_804B30B0(Ctx* __restrict c) {
  trace_call(0x804B30B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B30B0
  c->r[0]=c->lr; // 804B30B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B30B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B30BC
  c->r[31]=c->r[4]|c->r[4]; // 804B30C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B30C4
  c->r[30]=c->r[3]|c->r[3]; // 804B30C8
  c->lr=0x804B30D0u; f_804B300C(c); // 804B30CC
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B30D0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804B30D4
  if (!crb(c,2)) { goto L_804B30EC; } // 804B30D8
  c->r[3]=c->r[31]|c->r[31]; // 804B30DC
  c->r[4]=c->r[31]|c->r[31]; // 804B30E0
  c->r[5]=c->r[30]+0x00000004u; // 804B30E4
  c->lr=0x804B30ECu; f_804E17A8(c); // 804B30E8
L_804B30EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B30EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B30F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B30F4
  c->lr=c->r[0]; // 804B30F8
  c->r[1]=c->r[1]+0x00000010u; // 804B30FC
  return; // 804B3100
}

// fn_804B3104
void f_804B3104(Ctx* __restrict c) {
  trace_call(0x804B3104u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3104
  c->r[0]=c->lr; // 804B3108
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B310C
  c->r[5]=0u+0x00000000u; // 804B3110
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B3114
  c->r[0]=0u+0x00000000u; // 804B3118
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B311C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B3120
  c->r[31]=c->r[3]|c->r[3]; // 804B3124
  fcmp(c,0,c->f[2],c->f[0]); // 804B3128
  if (!crb(c,2)) { goto L_804B318C; } // 804B312C
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3130
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3134
  fcmp(c,0,c->f[1],c->f[0]); // 804B3138
  if (!crb(c,2)) { goto L_804B318C; } // 804B313C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3140
  fcmp(c,0,c->f[1],c->f[0]); // 804B3144
  if (!crb(c,2)) { goto L_804B318C; } // 804B3148
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B314C
  fcmp(c,0,c->f[1],c->f[0]); // 804B3150
  if (!crb(c,2)) { goto L_804B318C; } // 804B3154
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3158
  fcmp(c,0,c->f[2],c->f[0]); // 804B315C
  if (!crb(c,2)) { goto L_804B318C; } // 804B3160
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3164
  fcmp(c,0,c->f[1],c->f[0]); // 804B3168
  if (!crb(c,2)) { goto L_804B318C; } // 804B316C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3170
  fcmp(c,0,c->f[1],c->f[0]); // 804B3174
  if (!crb(c,2)) { goto L_804B318C; } // 804B3178
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B317C
  fcmp(c,0,c->f[1],c->f[0]); // 804B3180
  if (!crb(c,2)) { goto L_804B318C; } // 804B3184
  c->r[0]=0u+0x00000001u; // 804B3188
L_804B318C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B318C
  if (crb(c,2)) { goto L_804B31A8; } // 804B3190
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3194
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3198
  fcmp(c,0,c->f[1],c->f[0]); // 804B319C
  if (!crb(c,2)) { goto L_804B31A8; } // 804B31A0
  c->r[5]=0u+0x00000001u; // 804B31A4
L_804B31A8:;
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B31A8
  c->r[6]=0u+0x00000000u; // 804B31AC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B31B0
  c->r[0]=0u+0x00000000u; // 804B31B4
  fcmp(c,0,c->f[1],c->f[0]); // 804B31B8
  if (!crb(c,2)) { goto L_804B31D0; } // 804B31BC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B31C0
  fcmp(c,0,c->f[1],c->f[0]); // 804B31C4
  if (!crb(c,2)) { goto L_804B31D0; } // 804B31C8
  c->r[0]=0u+0x00000001u; // 804B31CC
L_804B31D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B31D0
  if (crb(c,2)) { goto L_804B31EC; } // 804B31D4
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B31D8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B31DC
  fcmp(c,0,c->f[1],c->f[0]); // 804B31E0
  if (!crb(c,2)) { goto L_804B31EC; } // 804B31E4
  c->r[6]=0u+0x00000001u; // 804B31E8
L_804B31EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804B31EC
  if (crb(c,2)) { goto L_804B3234; } // 804B31F0
  cmps(c,0,(int32_t)c->r[6],0); // 804B31F4
  if (crb(c,2)) { goto L_804B321C; } // 804B31F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B31FC
  c->r[5]=c->r[0]|0x00000064u; // 804B3200
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 804B3204
  W32(c->r[3]+0x00000000u,c->r[5]); // 804B3208
  if (crb(c,2)) { goto L_804B3264; } // 804B320C
  c->r[0]=c->r[5]|0x00000002u; // 804B3210
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B3214
  goto L_804B3264; // 804B3218
L_804B321C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B321C
  c->r[0]=0u+0xFFFFFFB9u; // 804B3220
  c->r[5]=c->r[5]|0x00000020u; // 804B3224
  c->r[0]=c->r[5]&c->r[0]; // 804B3228
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B322C
  goto L_804B3264; // 804B3230
L_804B3234:;
  cmps(c,0,(int32_t)c->r[6],0); // 804B3234
  if (crb(c,2)) { goto L_804B3254; } // 804B3238
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B323C
  c->r[0]=0u+0xFFFFFFD9u; // 804B3240
  c->r[5]=c->r[5]|0x00000040u; // 804B3244
  c->r[0]=c->r[5]&c->r[0]; // 804B3248
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B324C
  goto L_804B3264; // 804B3250
L_804B3254:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B3254
  c->r[0]=0u+0xFFFFFF99u; // 804B3258
  c->r[0]=c->r[5]&c->r[0]; // 804B325C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B3260
L_804B3264:;
  c->r[3]=c->r[4]|c->r[4]; // 804B3264
  c->r[4]=c->r[31]+0x0000001Cu; // 804B3268
  c->lr=0x804B3270u; f_80382F2C(c); // 804B326C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B3270
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 804B3274
  W32(c->r[31]+0x00000000u,c->r[0]); // 804B3278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B327C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B3280
  c->lr=c->r[0]; // 804B3284
  c->r[1]=c->r[1]+0x00000010u; // 804B3288
  return; // 804B328C
}

// fn_804B3290
void f_804B3290(Ctx* __restrict c) {
  trace_call(0x804B3290u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3290
  c->r[0]=c->lr; // 804B3294
  W32(c->r[1]+0x00000064u,c->r[0]); // 804B3298
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804B329C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804B32A0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804B32A4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804B32A8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 804B32AC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 804B32B0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B32B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B32B8
  c->r[31]=c->r[4]|c->r[4]; // 804B32BC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 804B32C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B32C4
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B32C8
  c->r[30]=c->r[3]|c->r[3]; // 804B32CC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B32D0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 804B32D4
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B32D8
  c->f[29]=c->ps1[29]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 804B32DC
  fcmp(c,0,c->f[29],c->f[30]); // 804B32E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B32E4
  if (!crb(c,2)) { goto L_804B32F0; } // 804B32E8
  goto L_804B32FC; // 804B32EC
L_804B32F0:;
  c->f[1]=c->f[29]; // 804B32F0
  c->lr=0x804B32F8u; f_804E1098(c); // 804B32F4
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 804B32F8
L_804B32FC:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B32FC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3300
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 804B3304
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3308
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B330C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 804B3310
  c->f[29]=c->ps1[29]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 804B3314
  fcmp(c,0,c->f[29],c->f[31]); // 804B3318
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B331C
  if (!crb(c,2)) { goto L_804B3328; } // 804B3320
  goto L_804B3334; // 804B3324
L_804B3328:;
  c->f[1]=c->f[29]; // 804B3328
  c->lr=0x804B3330u; f_804E1098(c); // 804B332C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 804B3330
L_804B3334:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3334
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3338
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[0]); // 804B333C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3340
  {uint32_t ea=c->r[2]+0x000014F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B3344
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[3])); // 804B3348
  c->f[29]=c->ps1[29]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 804B334C
  fcmp(c,0,c->f[29],c->f[2]); // 804B3350
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3354
  if (!crb(c,2)) { goto L_804B3360; } // 804B3358
  goto L_804B336C; // 804B335C
L_804B3360:;
  c->f[1]=c->f[29]; // 804B3360
  c->lr=0x804B3368u; f_804E1098(c); // 804B3364
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[1]); // 804B3368
L_804B336C:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 804B336C
  {uint32_t ea=c->r[2]+0x000014F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3370
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804B3374
  fcmp(c,0,c->f[1],c->f[0]); // 804B3378
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 804B337C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 804B3380
  if (!crb(c,2)) { goto L_804B33C0; } // 804B3384
  c->f[0]=c->ps1[0]=S(c->f[31]); // 804B3388
  fcmp(c,0,c->f[1],c->f[0]); // 804B338C
  if (!crb(c,2)) { goto L_804B33C0; } // 804B3390
  c->f[0]=c->ps1[0]=S(c->f[30]); // 804B3394
  fcmp(c,0,c->f[1],c->f[0]); // 804B3398
  if (!crb(c,2)) { goto L_804B33C0; } // 804B339C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B33A0
  c->r[3]=c->r[0]|0x00000018u; // 804B33A4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804B33A8
  W32(c->r[30]+0x00000000u,c->r[3]); // 804B33AC
  if (crb(c,2)) { goto L_804B33F4; } // 804B33B0
  c->r[0]=c->r[3]|0x00000002u; // 804B33B4
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B33B8
  goto L_804B33F4; // 804B33BC
L_804B33C0:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 804B33C0
  c->r[0]=0u+0xFFFFFFE5u; // 804B33C4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B33C8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B33CC
  c->r[0]=c->r[3]&c->r[0]; // 804B33D0
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B33D4
  fcmp(c,0,c->f[0],c->f[1]); // 804B33D8
  if (!crb(c,2)) { goto L_804B33F4; } // 804B33DC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B33E0
  fcmp(c,0,c->f[1],c->f[0]); // 804B33E4
  if (!crb(c,2)) { goto L_804B33F4; } // 804B33E8
  c->r[0]=c->r[0]|0x00000010u; // 804B33EC
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B33F0
L_804B33F4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B33F4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B33F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B33FC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804B3400
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3404
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[2]);} // 804B3408
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 804B340C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B3410
  if (crb(c,2)) { goto L_804B3428; } // 804B3414
  c->r[3]=c->r[31]|c->r[31]; // 804B3418
  c->r[4]=c->r[30]+0x0000001Cu; // 804B341C
  c->lr=0x804B3424u; f_80382F2C(c); // 804B3420
  goto L_804B3480; // 804B3424
L_804B3428:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3428
  c->r[4]=c->r[31]|c->r[31]; // 804B342C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B3430
  c->r[3]=c->r[30]+0x0000001Cu; // 804B3434
  c->f[1]=c->ps1[1]=fres(c->f[0]); // 804B3438
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804B343C
  c->r[5]=c->r[1]+0x00000008u; // 804B3440
  c->f[4]=c->ps1[4]=fres(c->f[3]); // 804B3444
  {double t0=S(c->f[1]+c->f[1]), t1=S(c->ps1[1]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804B3448
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804B344C
  {double t0=S(c->f[4]+c->f[4]), t1=S(c->ps1[4]+c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804B3450
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804B3454
  {double t0=S(-std::fma(c->f[0],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[0],c->ps1[1],-c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804B3458
  c->f[7]=c->ps1[7]=fres(c->f[6]); // 804B345C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804B3460
  {double t0=S(-std::fma(c->f[3],c->f[4],-c->f[5])), t1=S(-std::fma(c->ps1[3],c->ps1[4],-c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 804B3464
  {double t0=S(c->f[7]+c->f[7]), t1=S(c->ps1[7]+c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 804B3468
  {double t0=S(c->f[7]*c->f[7]), t1=S(c->ps1[7]*c->ps1[7]); c->f[0]=t0; c->ps1[0]=t1;} // 804B346C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 804B3470
  {double t0=S(-std::fma(c->f[6],c->f[0],-c->f[2])), t1=S(-std::fma(c->ps1[6],c->ps1[0],-c->ps1[2])); c->f[7]=t0; c->ps1[7]=t1;} // 804B3474
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 804B3478
  c->lr=0x804B3480u; f_804E17A8(c); // 804B347C
L_804B3480:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B3480
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 804B3484
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B3488
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804B348C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804B3490
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804B3494
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804B3498
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 804B349C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 804B34A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B34A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B34A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 804B34AC
  c->lr=c->r[0]; // 804B34B0
  c->r[1]=c->r[1]+0x00000060u; // 804B34B4
  return; // 804B34B8
}

// fn_804B34BC
void f_804B34BC(Ctx* __restrict c) {
  trace_call(0x804B34BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B34BC
  c->r[0]=c->lr; // 804B34C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B34C4
  c->r[11]=c->r[1]+0x00000030u; // 804B34C8
  c->lr=0x804B34D0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B34CC
  c->r[25]=R32(c->r[3]+0x00000000u); // 804B34D0
  c->r[28]=c->r[3]|c->r[3]; // 804B34D4
  c->r[29]=c->r[4]|c->r[4]; // 804B34D8
  c->r[31]=0u+0x00000000u; // 804B34DC
  c->r[0]=R32(c->r[25]+0x00000014u); // 804B34E0
  c->r[30]=0u+0x00000000u; // 804B34E4
  cmps(c,0,(int32_t)c->r[0],0); // 804B34E8
  if (crb(c,2)) { goto L_804B3578; } // 804B34EC
  c->r[3]=c->r[29]|c->r[29]; // 804B34F0
  c->lr=0x804B34F8u; f_804B3F68(c); // 804B34F4
  cmps(c,0,(int32_t)c->r[3],0); // 804B34F8
  if (crb(c,2)) { goto L_804B3578; } // 804B34FC
  c->r[4]=R32(c->r[28]+0x00000000u); // 804B3500
  c->r[3]=0u+0x00000001u; // 804B3504
  c->r[31]=0u+0x00000001u; // 804B3508
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B350C
  cmps(c,0,(int32_t)c->r[0],0); // 804B3510
  if (crb(c,2)) { goto L_804B3528; } // 804B3514
  c->r[0]=R16(c->r[4]+0x00000018u); // 804B3518
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804B351C
  if (!crb(c,2)) { goto L_804B3528; } // 804B3520
  c->r[3]=0u+0x00000000u; // 804B3524
L_804B3528:;
  cmps(c,0,(int32_t)c->r[3],0); // 804B3528
  if (!crb(c,2)) { goto L_804B3574; } // 804B352C
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B3530
  cmps(c,0,(int32_t)c->r[0],0); // 804B3534
  if (crb(c,2)) { goto L_804B3548; } // 804B3538
  c->r[3]=c->r[4]+c->r[0]; // 804B353C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 804B3540
  goto L_804B354C; // 804B3544
L_804B3548:;
  c->r[0]=0u+0x00000000u; // 804B3548
L_804B354C:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B354C
  c->r[3]=c->r[29]|c->r[29]; // 804B3550
  c->r[4]=c->r[1]+0x0000000Cu; // 804B3554
  c->lr=0x804B355Cu; f_804B40A8(c); // 804B3558
  cmps(c,0,(int32_t)c->r[3],0); // 804B355C
  if (crb(c,2)) { goto L_804B3578; } // 804B3560
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B3564
  c->r[30]=0u+0x00000001u; // 804B3568
  W16(c->r[25]+0x00000018u,c->r[0]); // 804B356C
  goto L_804B3578; // 804B3570
L_804B3574:;
  c->r[30]=0u+0x00000001u; // 804B3574
L_804B3578:;
  c->r[3]=c->r[29]|c->r[29]; // 804B3578
  c->lr=0x804B3580u; f_804B3FC8(c); // 804B357C
  cmps(c,0,(int32_t)c->r[3],0); // 804B3580
  if (crb(c,2)) { goto L_804B3604; } // 804B3584
  c->r[3]=R32(c->r[28]+0x00000000u); // 804B3588
  c->r[26]=c->r[25]+0x0000003Cu; // 804B358C
  c->r[24]=0u+0x00000000u; // 804B3590
  c->r[25]=0u+0x00000000u; // 804B3594
  c->r[27]=R8(c->r[3]+0x0000001Au); // 804B3598
  c->r[31]=c->r[31]+c->r[27]; // 804B359C
  goto L_804B35FC; // 804B35A0
L_804B35A4:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 804B35A4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804B35A8
  if (crb(c,2)) { goto L_804B35B8; } // 804B35AC
  c->r[30]=c->r[30]+0x00000001u; // 804B35B0
  goto L_804B35F0; // 804B35B4
L_804B35B8:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 804B35B8
  c->r[3]=c->r[29]|c->r[29]; // 804B35BC
  c->r[4]=c->r[1]+0x00000008u; // 804B35C0
  c->r[5]=c->r[5]+0x0000001Cu; // 804B35C4
  c->r[0]=R32(c->r[5]+c->r[25]); // 804B35C8
  c->r[5]=c->r[5]+c->r[0]; // 804B35CC
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B35D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B35D4
  c->lr=0x804B35DCu; f_804B425C(c); // 804B35D8
  cmps(c,0,(int32_t)c->r[3],0); // 804B35DC
  if (crb(c,2)) { goto L_804B35F0; } // 804B35E0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B35E4
  c->r[30]=c->r[30]+0x00000001u; // 804B35E8
  W16(c->r[26]+0x00000000u,c->r[0]); // 804B35EC
L_804B35F0:;
  c->r[26]=c->r[26]+0x00000002u; // 804B35F0
  c->r[25]=c->r[25]+0x00000004u; // 804B35F4
  c->r[24]=c->r[24]+0x00000001u; // 804B35F8
L_804B35FC:;
  cmpu(c,0,c->r[24],c->r[27]); // 804B35FC
  if (crb(c,0)) { IRQCHK(c); goto L_804B35A4; } // 804B3600
L_804B3604:;
  c->r[0]=c->r[31]-c->r[30]; // 804B3604
  c->r[11]=c->r[1]+0x00000030u; // 804B3608
  c->r[0]=cntlz(c->r[0]); // 804B360C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B3610
  c->lr=0x804B3618u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B3614
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B3618
  c->lr=c->r[0]; // 804B361C
  c->r[1]=c->r[1]+0x00000030u; // 804B3620
  return; // 804B3624
}

// GetAnmResult__Q34nw4r3g3d14ResAnmAmbLightCFPQ34nw4r3g3d17AmbLightAnmResultf
void f_804B3628(Ctx* __restrict c) {
  trace_call(0x804B3628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3628
  c->r[0]=c->lr; // 804B362C
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B3630
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B3634
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B3638
  c->r[31]=c->r[4]|c->r[4]; // 804B363C
  c->r[0]=R32(c->r[5]+0x00000004u); // 804B3640
  c->r[6]=R32(c->r[5]+0x00000014u); // 804B3644
  cmps(c,0,(int32_t)c->r[0],0); // 804B3648
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 804B364C
  if (crb(c,2)) { goto L_804B365C; } // 804B3650
  c->r[3]=c->r[5]+c->r[0]; // 804B3654
  goto L_804B3660; // 804B3658
L_804B365C:;
  c->r[3]=0u+0x00000000u; // 804B365C
L_804B3660:;
  {uint32_t ea=c->r[2]+0x00001510u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B3660
  fcmp(c,0,c->f[1],c->f[0]); // 804B3664
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3668
  if (!crb(c,2)) { goto L_804B3674; } // 804B366C
  goto L_804B36B4; // 804B3670
L_804B3674:;
  c->r[3]=R16(c->r[3]+0x00000034u); // 804B3674
  c->r[0]=0u+0x43300000u; // 804B3678
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B367C
  {uint32_t ea=c->r[2]+0x00001518u; c->f[2]=RF64(ea);} // 804B3680
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B3684
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804B3688
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B368C
  fcmp(c,0,c->f[0],c->f[1]); // 804B3690
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3694
  if (!crb(c,2)) { goto L_804B36B0; } // 804B3698
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B369C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B36A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804B36A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B36A8
  goto L_804B36B4; // 804B36AC
L_804B36B0:;
  c->f[0]=c->f[1]; // 804B36B0
L_804B36B4:;
  c->r[0]=rotl(c->r[6],0)&0x00000003u; // 804B36B4
  cmps(c,0,(int32_t)c->r[7],0); // 804B36B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B36BC
  if (crb(c,2)) { goto L_804B36CC; } // 804B36C0
  c->r[3]=R32(c->r[5]+0x00000018u); // 804B36C4
  goto L_804B36E0; // 804B36C8
L_804B36CC:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 804B36CC
  c->f[1]=c->f[0]; // 804B36D0
  c->r[3]=c->r[5]+c->r[0]; // 804B36D4
  c->r[3]=c->r[3]+0x00000018u; // 804B36D8
  c->lr=0x804B36E0u; f_804B0C50(c); // 804B36DC
L_804B36E0:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 804B36E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B36E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B36E8
  c->lr=c->r[0]; // 804B36EC
  c->r[1]=c->r[1]+0x00000020u; // 804B36F0
  return; // 804B36F4
}

// GetAnmResult__Q34nw4r3g3d11ResAnmLightCFPQ34nw4r3g3d14LightAnmResultf
void f_804B36F8(Ctx* __restrict c) {
  trace_call(0x804B36F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B36F8
  c->r[0]=c->lr; // 804B36FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 804B3700
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804B3704
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804B3708
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804B370C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804B3710
  c->r[11]=c->r[1]+0x00000040u; // 804B3714
  c->lr=0x804B371Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B3718
  c->r[31]=R32(c->r[3]+0x00000000u); // 804B371C
  c->f[30]=c->f[1]; // 804B3720
  c->r[27]=c->r[4]|c->r[4]; // 804B3724
  c->r[0]=R32(c->r[31]+0x00000004u); // 804B3728
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 804B372C
  cmps(c,0,(int32_t)c->r[0],0); // 804B3730
  if (crb(c,2)) { goto L_804B3740; } // 804B3734
  c->r[3]=c->r[31]+c->r[0]; // 804B3738
  goto L_804B3744; // 804B373C
L_804B3740:;
  c->r[3]=0u+0x00000000u; // 804B3740
L_804B3744:;
  {uint32_t ea=c->r[2]+0x00001520u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B3744
  fcmp(c,0,c->f[1],c->f[31]); // 804B3748
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B374C
  if (!crb(c,2)) { goto L_804B3758; } // 804B3750
  goto L_804B3798; // 804B3754
L_804B3758:;
  c->r[3]=R16(c->r[3]+0x00000034u); // 804B3758
  c->r[0]=0u+0x43300000u; // 804B375C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B3760
  {uint32_t ea=c->r[2]+0x00001528u; c->f[2]=RF64(ea);} // 804B3764
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B3768
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804B376C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B3770
  fcmp(c,0,c->f[0],c->f[1]); // 804B3774
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3778
  if (!crb(c,2)) { goto L_804B3794; } // 804B377C
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B3780
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B3784
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804B3788
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 804B378C
  goto L_804B3798; // 804B3790
L_804B3794:;
  c->f[31]=c->f[30]; // 804B3794
L_804B3798:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 804B3798
  c->r[0]=rotl(c->r[30],0)&0x0000003Fu; // 804B379C
  W32(c->r[4]+0x00000004u,c->r[0]); // 804B37A0
  if (!crb(c,2)) { goto L_804B37F4; } // 804B37A4
  c->f[1]=c->f[31]; // 804B37A8
  c->lr=0x804B37B0u; f_803BA1BC(c); // 804B37AC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804B37B0
  c->r[0]=R32(c->r[31]+0x00000020u); // 804B37B4
  c->r[3]=0u+0x80000000u; // 804B37B8
  c->r[5]=c->r[31]+c->r[0]; // 804B37BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804B37C0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804B37C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B37C8
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 804B37CC
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 804B37D0
  c->r[4]=c->r[5]+c->r[4]; // 804B37D4
  c->r[4]=R32(c->r[4]+0x00000020u); // 804B37D8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 804B37DC
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 804B37E0
  if (crb(c,2)) { goto L_804B37F4; } // 804B37E4
  c->r[0]=R32(c->r[27]+0x00000004u); // 804B37E8
  c->r[0]=c->r[0]|0x00000004u; // 804B37EC
  W32(c->r[27]+0x00000004u,c->r[0]); // 804B37F0
L_804B37F4:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 804B37F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804B37F8
  if (crb(c,2)) { goto L_804B3AC8; } // 804B37FC
  c->r[29]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[29]); // 804B3800
  c->r[28]=rotl(c->r[30],29)&0x00000001u; // 804B3804
  c->r[26]=0u+0x00000001u; // 804B3808
  if (!crb(c,2)) { goto L_804B381C; } // 804B380C
  cmps(c,0,(int32_t)c->r[28],0); // 804B3810
  if (!crb(c,2)) { goto L_804B381C; } // 804B3814
  c->r[26]=0u+0x00000000u; // 804B3818
L_804B381C:;
  c->r[0]=rotl(c->r[30],0)&0x00080000u; cr0(c,c->r[0]); // 804B381C
  c->r[25]=rotl(c->r[30],12)&0x00000001u; // 804B3820
  c->r[24]=rotl(c->r[30],11)&0x00000001u; // 804B3824
  c->r[23]=rotl(c->r[30],10)&0x00000001u; // 804B3828
  if (crb(c,2)) { goto L_804B3838; } // 804B382C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3830
  goto L_804B384C; // 804B3834
L_804B3838:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 804B3838
  c->f[1]=c->f[30]; // 804B383C
  c->r[3]=c->r[31]+c->r[0]; // 804B3840
  c->r[3]=c->r[3]+0x00000024u; // 804B3844
  c->lr=0x804B384Cu; f_804B0B24(c); // 804B3848
L_804B384C:;
  cmps(c,0,(int32_t)c->r[25],0); // 804B384C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 804B3850
  if (crb(c,2)) { goto L_804B3860; } // 804B3854
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3858
  goto L_804B3874; // 804B385C
L_804B3860:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 804B3860
  c->f[1]=c->f[30]; // 804B3864
  c->r[3]=c->r[31]+c->r[0]; // 804B3868
  c->r[3]=c->r[3]+0x00000028u; // 804B386C
  c->lr=0x804B3874u; f_804B0B24(c); // 804B3870
L_804B3874:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3874
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B3878
  if (crb(c,2)) { goto L_804B3888; } // 804B387C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3880
  goto L_804B389C; // 804B3884
L_804B3888:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 804B3888
  c->f[1]=c->f[30]; // 804B388C
  c->r[3]=c->r[31]+c->r[0]; // 804B3890
  c->r[3]=c->r[3]+0x0000002Cu; // 804B3894
  c->lr=0x804B389Cu; f_804B0B24(c); // 804B3898
L_804B389C:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B389C
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 804B38A0
  if (crb(c,2)) { goto L_804B38B0; } // 804B38A4
  c->r[3]=R32(c->r[31]+0x00000030u); // 804B38A8
  goto L_804B38C4; // 804B38AC
L_804B38B0:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 804B38B0
  c->f[1]=c->f[31]; // 804B38B4
  c->r[3]=c->r[31]+c->r[0]; // 804B38B8
  c->r[3]=c->r[3]+0x00000030u; // 804B38BC
  c->lr=0x804B38C4u; f_804B0C50(c); // 804B38C0
L_804B38C4:;
  cmps(c,0,(int32_t)c->r[26],0); // 804B38C4
  W32(c->r[27]+0x00000020u,c->r[3]); // 804B38C8
  if (crb(c,2)) { goto L_804B3950; } // 804B38CC
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 804B38D0
  c->r[23]=rotl(c->r[30],7)&0x00000001u; // 804B38D4
  c->r[24]=rotl(c->r[30],6)&0x00000001u; // 804B38D8
  if (crb(c,2)) { goto L_804B38E8; } // 804B38DC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B38E0
  goto L_804B38FC; // 804B38E4
L_804B38E8:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 804B38E8
  c->f[1]=c->f[30]; // 804B38EC
  c->r[3]=c->r[31]+c->r[0]; // 804B38F0
  c->r[3]=c->r[3]+0x00000034u; // 804B38F4
  c->lr=0x804B38FCu; f_804B0B24(c); // 804B38F8
L_804B38FC:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B38FC
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[1]);} // 804B3900
  if (crb(c,2)) { goto L_804B3910; } // 804B3904
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3908
  goto L_804B3924; // 804B390C
L_804B3910:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 804B3910
  c->f[1]=c->f[30]; // 804B3914
  c->r[3]=c->r[31]+c->r[0]; // 804B3918
  c->r[3]=c->r[3]+0x00000038u; // 804B391C
  c->lr=0x804B3924u; f_804B0B24(c); // 804B3920
L_804B3924:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3924
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[1]);} // 804B3928
  if (crb(c,2)) { goto L_804B3938; } // 804B392C
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3930
  goto L_804B394C; // 804B3934
L_804B3938:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 804B3938
  c->f[1]=c->f[30]; // 804B393C
  c->r[3]=c->r[31]+c->r[0]; // 804B3940
  c->r[3]=c->r[3]+0x0000003Cu; // 804B3944
  c->lr=0x804B394Cu; f_804B0B24(c); // 804B3948
L_804B394C:;
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B394C
L_804B3950:;
  cmps(c,0,(int32_t)c->r[29],1); // 804B3950
  if (crb(c,2)) { goto L_804B3A64; } // 804B3954
  if (!crb(c,0)) { goto L_804B3968; } // 804B3958
  cmps(c,0,(int32_t)c->r[29],0); // 804B395C
  if (!crb(c,0)) { goto L_804B3974; } // 804B3960
  goto L_804B3A64; // 804B3964
L_804B3968:;
  cmps(c,0,(int32_t)c->r[29],3); // 804B3968
  if (!crb(c,0)) { goto L_804B3A64; } // 804B396C
  goto L_804B39D4; // 804B3970
L_804B3974:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 804B3974
  c->r[0]=R32(c->r[31]+0x00000040u); // 804B3978
  c->r[23]=rotl(c->r[30],3)&0x00000001u; // 804B397C
  W32(c->r[27]+0x00000024u,c->r[0]); // 804B3980
  if (crb(c,2)) { goto L_804B3990; } // 804B3984
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3988
  goto L_804B39A4; // 804B398C
L_804B3990:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 804B3990
  c->f[1]=c->f[30]; // 804B3994
  c->r[3]=c->r[31]+c->r[0]; // 804B3998
  c->r[3]=c->r[3]+0x00000044u; // 804B399C
  c->lr=0x804B39A4u; f_804B0B24(c); // 804B39A0
L_804B39A4:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B39A4
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 804B39A8
  if (crb(c,2)) { goto L_804B39B8; } // 804B39AC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B39B0
  goto L_804B39CC; // 804B39B4
L_804B39B8:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 804B39B8
  c->f[1]=c->f[30]; // 804B39BC
  c->r[3]=c->r[31]+c->r[0]; // 804B39C0
  c->r[3]=c->r[3]+0x00000048u; // 804B39C4
  c->lr=0x804B39CCu; f_804B0B24(c); // 804B39C8
L_804B39CC:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 804B39CC
  goto L_804B3A64; // 804B39D0
L_804B39D4:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 804B39D4
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 804B39D8
  c->r[23]=rotl(c->r[30],4)&0x00000001u; // 804B39DC
  c->r[24]=rotl(c->r[30],3)&0x00000001u; // 804B39E0
  W32(c->r[27]+0x00000024u,c->r[3]); // 804B39E4
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 804B39E8
  W32(c->r[27]+0x00000030u,c->r[0]); // 804B39EC
  if (crb(c,2)) { goto L_804B39FC; } // 804B39F0
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B39F4
  goto L_804B3A10; // 804B39F8
L_804B39FC:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 804B39FC
  c->f[1]=c->f[30]; // 804B3A00
  c->r[3]=c->r[31]+c->r[0]; // 804B3A04
  c->r[3]=c->r[3]+0x00000050u; // 804B3A08
  c->lr=0x804B3A10u; f_804B0B24(c); // 804B3A0C
L_804B3A10:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B3A10
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[1]);} // 804B3A14
  if (crb(c,2)) { goto L_804B3A24; } // 804B3A18
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3A1C
  goto L_804B3A38; // 804B3A20
L_804B3A24:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 804B3A24
  c->f[1]=c->f[30]; // 804B3A28
  c->r[3]=c->r[31]+c->r[0]; // 804B3A2C
  c->r[3]=c->r[3]+0x00000044u; // 804B3A30
  c->lr=0x804B3A38u; f_804B0B24(c); // 804B3A34
L_804B3A38:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3A38
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 804B3A3C
  if (crb(c,2)) { goto L_804B3A4C; } // 804B3A40
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3A44
  goto L_804B3A60; // 804B3A48
L_804B3A4C:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 804B3A4C
  c->f[1]=c->f[30]; // 804B3A50
  c->r[3]=c->r[31]+c->r[0]; // 804B3A54
  c->r[3]=c->r[3]+0x00000048u; // 804B3A58
  c->lr=0x804B3A60u; f_804B0B24(c); // 804B3A5C
L_804B3A60:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 804B3A60
L_804B3A64:;
  cmps(c,0,(int32_t)c->r[28],0); // 804B3A64
  if (crb(c,2)) { goto L_804B3AC8; } // 804B3A68
  c->r[0]=rotl(c->r[30],0)&0x40000000u; cr0(c,c->r[0]); // 804B3A6C
  c->r[23]=rotl(c->r[30],1)&0x00000001u; // 804B3A70
  if (crb(c,2)) { goto L_804B3A80; } // 804B3A74
  c->r[3]=R32(c->r[31]+0x00000054u); // 804B3A78
  goto L_804B3A94; // 804B3A7C
L_804B3A80:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 804B3A80
  c->f[1]=c->f[31]; // 804B3A84
  c->r[3]=c->r[31]+c->r[0]; // 804B3A88
  c->r[3]=c->r[3]+0x00000054u; // 804B3A8C
  c->lr=0x804B3A94u; f_804B0C50(c); // 804B3A90
L_804B3A94:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B3A94
  W32(c->r[27]+0x00000038u,c->r[3]); // 804B3A98
  if (crb(c,2)) { goto L_804B3AA8; } // 804B3A9C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3AA0
  goto L_804B3ABC; // 804B3AA4
L_804B3AA8:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 804B3AA8
  c->f[1]=c->f[30]; // 804B3AAC
  c->r[3]=c->r[31]+c->r[0]; // 804B3AB0
  c->r[3]=c->r[3]+0x00000058u; // 804B3AB4
  c->lr=0x804B3ABCu; f_804B0B24(c); // 804B3AB8
L_804B3ABC:;
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[1]);} // 804B3ABC
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B3AC0
  W32(c->r[27]+0x00000000u,c->r[0]); // 804B3AC4
L_804B3AC8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804B3AC8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804B3ACC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804B3AD0
  c->r[11]=c->r[1]+0x00000040u; // 804B3AD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804B3AD8
  c->lr=0x804B3AE0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B3ADC
  c->r[0]=R32(c->r[1]+0x00000064u); // 804B3AE0
  c->lr=c->r[0]; // 804B3AE4
  c->r[1]=c->r[1]+0x00000060u; // 804B3AE8
  return; // 804B3AEC
}

// GetAnmResult__Q34nw4r3g3d9ResAnmFogCFPQ34nw4r3g3d12FogAnmResultf
void f_804B3AF0(Ctx* __restrict c) {
  trace_call(0x804B3AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3AF0
  c->r[0]=c->lr; // 804B3AF4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804B3AF8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804B3AFC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804B3B00
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804B3B04
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804B3B08
  c->f[30]=c->f[1]; // 804B3B0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804B3B10
  c->r[31]=R32(c->r[3]+0x00000000u); // 804B3B14
  W32(c->r[1]+0x00000028u,c->r[30]); // 804B3B18
  W32(c->r[1]+0x00000024u,c->r[29]); // 804B3B1C
  W32(c->r[1]+0x00000020u,c->r[28]); // 804B3B20
  c->r[28]=c->r[4]|c->r[4]; // 804B3B24
  c->r[0]=R32(c->r[31]+0x00000004u); // 804B3B28
  c->r[5]=R32(c->r[31]+0x00000014u); // 804B3B2C
  cmps(c,0,(int32_t)c->r[0],0); // 804B3B30
  if (crb(c,2)) { goto L_804B3B40; } // 804B3B34
  c->r[3]=c->r[31]+c->r[0]; // 804B3B38
  goto L_804B3B44; // 804B3B3C
L_804B3B40:;
  c->r[3]=0u+0x00000000u; // 804B3B40
L_804B3B44:;
  {uint32_t ea=c->r[2]+0x00001530u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B3B44
  fcmp(c,0,c->f[1],c->f[31]); // 804B3B48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3B4C
  if (!crb(c,2)) { goto L_804B3B58; } // 804B3B50
  goto L_804B3B98; // 804B3B54
L_804B3B58:;
  c->r[3]=R16(c->r[3]+0x00000034u); // 804B3B58
  c->r[0]=0u+0x43300000u; // 804B3B5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B3B60
  {uint32_t ea=c->r[2]+0x00001538u; c->f[2]=RF64(ea);} // 804B3B64
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B3B68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804B3B6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804B3B70
  fcmp(c,0,c->f[0],c->f[1]); // 804B3B74
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804B3B78
  if (!crb(c,2)) { goto L_804B3B94; } // 804B3B7C
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B3B80
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B3B84
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804B3B88
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 804B3B8C
  goto L_804B3B98; // 804B3B90
L_804B3B94:;
  c->f[31]=c->f[30]; // 804B3B94
L_804B3B98:;
  c->r[0]=rotl(c->r[5],0)&0x20000000u; cr0(c,c->r[0]); // 804B3B98
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B3B9C
  c->r[30]=rotl(c->r[5],2)&0x00000001u; // 804B3BA0
  c->r[29]=rotl(c->r[5],1)&0x00000001u; // 804B3BA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B3BA8
  if (crb(c,2)) { goto L_804B3BB8; } // 804B3BAC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3BB0
  goto L_804B3BCC; // 804B3BB4
L_804B3BB8:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 804B3BB8
  c->f[1]=c->f[30]; // 804B3BBC
  c->r[3]=c->r[31]+c->r[0]; // 804B3BC0
  c->r[3]=c->r[3]+0x0000001Cu; // 804B3BC4
  c->lr=0x804B3BCCu; f_804B0B24(c); // 804B3BC8
L_804B3BCC:;
  cmps(c,0,(int32_t)c->r[30],0); // 804B3BCC
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 804B3BD0
  if (crb(c,2)) { goto L_804B3BE0; } // 804B3BD4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3BD8
  goto L_804B3BF4; // 804B3BDC
L_804B3BE0:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 804B3BE0
  c->f[1]=c->f[30]; // 804B3BE4
  c->r[3]=c->r[31]+c->r[0]; // 804B3BE8
  c->r[3]=c->r[3]+0x00000020u; // 804B3BEC
  c->lr=0x804B3BF4u; f_804B0B24(c); // 804B3BF0
L_804B3BF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B3BF4
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804B3BF8
  if (crb(c,2)) { goto L_804B3C08; } // 804B3BFC
  c->r[3]=R32(c->r[31]+0x00000024u); // 804B3C00
  goto L_804B3C1C; // 804B3C04
L_804B3C08:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 804B3C08
  c->f[1]=c->f[31]; // 804B3C0C
  c->r[3]=c->r[31]+c->r[0]; // 804B3C10
  c->r[3]=c->r[3]+0x00000024u; // 804B3C14
  c->lr=0x804B3C1Cu; f_804B0C50(c); // 804B3C18
L_804B3C1C:;
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 804B3C1C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804B3C20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804B3C24
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804B3C28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804B3C2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804B3C30
  c->r[30]=R32(c->r[1]+0x00000028u); // 804B3C34
  c->r[29]=R32(c->r[1]+0x00000024u); // 804B3C38
  c->r[28]=R32(c->r[1]+0x00000020u); // 804B3C3C
  c->r[0]=R32(c->r[1]+0x00000054u); // 804B3C40
  c->lr=c->r[0]; // 804B3C44
  c->r[1]=c->r[1]+0x00000050u; // 804B3C48
  return; // 804B3C4C
}

// GetAnmResult__Q34nw4r3g3d12ResAnmCameraCFPQ34nw4r3g3d15CameraAnmResultf
void f_804B3C50(Ctx* __restrict c) {
  trace_call(0x804B3C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3C50
  c->r[0]=c->lr; // 804B3C54
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B3C58
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B3C5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B3C60
  c->r[11]=c->r[1]+0x00000030u; // 804B3C64
  c->lr=0x804B3C6Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B3C68
  c->r[31]=R32(c->r[3]+0x00000000u); // 804B3C6C
  c->f[31]=c->f[1]; // 804B3C70
  c->r[26]=c->r[4]|c->r[4]; // 804B3C74
  c->r[30]=R32(c->r[31]+0x00000018u); // 804B3C78
  c->r[3]=rotl(c->r[30],0)&0x00000003u; // 804B3C7C
  c->r[0]=rotl(c->r[30],0)&0x00020000u; cr0(c,c->r[0]); // 804B3C80
  W32(c->r[4]+0x00000000u,c->r[3]); // 804B3C84
  c->r[25]=rotl(c->r[30],14)&0x00000001u; // 804B3C88
  c->r[24]=rotl(c->r[30],13)&0x00000001u; // 804B3C8C
  c->r[23]=rotl(c->r[30],12)&0x00000001u; // 804B3C90
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B3C94
  c->r[29]=rotl(c->r[30],11)&0x00000001u; // 804B3C98
  c->r[28]=rotl(c->r[30],10)&0x00000001u; // 804B3C9C
  c->r[27]=rotl(c->r[30],0)&0x00000001u; // 804B3CA0
  W32(c->r[4]+0x00000004u,c->r[0]); // 804B3CA4
  if (crb(c,2)) { goto L_804B3CB4; } // 804B3CA8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3CAC
  goto L_804B3CC4; // 804B3CB0
L_804B3CB4:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 804B3CB4
  c->r[3]=c->r[31]+c->r[0]; // 804B3CB8
  c->r[3]=c->r[3]+0x00000020u; // 804B3CBC
  c->lr=0x804B3CC4u; f_804B0B24(c); // 804B3CC0
L_804B3CC4:;
  cmps(c,0,(int32_t)c->r[25],0); // 804B3CC4
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 804B3CC8
  if (crb(c,2)) { goto L_804B3CD8; } // 804B3CCC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3CD0
  goto L_804B3CEC; // 804B3CD4
L_804B3CD8:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 804B3CD8
  c->f[1]=c->f[31]; // 804B3CDC
  c->r[3]=c->r[31]+c->r[0]; // 804B3CE0
  c->r[3]=c->r[3]+0x00000024u; // 804B3CE4
  c->lr=0x804B3CECu; f_804B0B24(c); // 804B3CE8
L_804B3CEC:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3CEC
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B3CF0
  if (crb(c,2)) { goto L_804B3D00; } // 804B3CF4
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3CF8
  goto L_804B3D14; // 804B3CFC
L_804B3D00:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 804B3D00
  c->f[1]=c->f[31]; // 804B3D04
  c->r[3]=c->r[31]+c->r[0]; // 804B3D08
  c->r[3]=c->r[3]+0x00000028u; // 804B3D0C
  c->lr=0x804B3D14u; f_804B0B24(c); // 804B3D10
L_804B3D14:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B3D14
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[1]);} // 804B3D18
  if (crb(c,2)) { goto L_804B3D28; } // 804B3D1C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3D20
  goto L_804B3D3C; // 804B3D24
L_804B3D28:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 804B3D28
  c->f[1]=c->f[31]; // 804B3D2C
  c->r[3]=c->r[31]+c->r[0]; // 804B3D30
  c->r[3]=c->r[3]+0x0000002Cu; // 804B3D34
  c->lr=0x804B3D3Cu; f_804B0B24(c); // 804B3D38
L_804B3D3C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B3D3C
  {uint32_t ea=c->r[26]+0x00000014u; WF32(ea,c->f[1]);} // 804B3D40
  if (crb(c,2)) { goto L_804B3D50; } // 804B3D44
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3D48
  goto L_804B3D64; // 804B3D4C
L_804B3D50:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 804B3D50
  c->f[1]=c->f[31]; // 804B3D54
  c->r[3]=c->r[31]+c->r[0]; // 804B3D58
  c->r[3]=c->r[3]+0x00000030u; // 804B3D5C
  c->lr=0x804B3D64u; f_804B0B24(c); // 804B3D60
L_804B3D64:;
  cmps(c,0,(int32_t)c->r[28],0); // 804B3D64
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[1]);} // 804B3D68
  if (crb(c,2)) { goto L_804B3D78; } // 804B3D6C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3D70
  goto L_804B3D8C; // 804B3D74
L_804B3D78:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 804B3D78
  c->f[1]=c->f[31]; // 804B3D7C
  c->r[3]=c->r[31]+c->r[0]; // 804B3D80
  c->r[3]=c->r[3]+0x00000034u; // 804B3D84
  c->lr=0x804B3D8Cu; f_804B0B24(c); // 804B3D88
L_804B3D8C:;
  cmps(c,0,(int32_t)c->r[27],1); // 804B3D8C
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B3D90
  if (crb(c,2)) { goto L_804B3E2C; } // 804B3D94
  if (!crb(c,0)) { goto L_804B3ED8; } // 804B3D98
  cmps(c,0,(int32_t)c->r[27],0); // 804B3D9C
  if (!crb(c,0)) { goto L_804B3DA8; } // 804B3DA0
  goto L_804B3ED8; // 804B3DA4
L_804B3DA8:;
  c->r[0]=rotl(c->r[30],0)&0x20000000u; cr0(c,c->r[0]); // 804B3DA8
  c->r[23]=rotl(c->r[30],2)&0x00000001u; // 804B3DAC
  c->r[24]=rotl(c->r[30],1)&0x00000001u; // 804B3DB0
  if (crb(c,2)) { goto L_804B3DC0; } // 804B3DB4
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3DB8
  goto L_804B3DD4; // 804B3DBC
L_804B3DC0:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 804B3DC0
  c->f[1]=c->f[31]; // 804B3DC4
  c->r[3]=c->r[31]+c->r[0]; // 804B3DC8
  c->r[3]=c->r[3]+0x00000038u; // 804B3DCC
  c->lr=0x804B3DD4u; f_804B0B24(c); // 804B3DD0
L_804B3DD4:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B3DD4
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 804B3DD8
  if (crb(c,2)) { goto L_804B3DE8; } // 804B3DDC
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3DE0
  goto L_804B3DFC; // 804B3DE4
L_804B3DE8:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 804B3DE8
  c->f[1]=c->f[31]; // 804B3DEC
  c->r[3]=c->r[31]+c->r[0]; // 804B3DF0
  c->r[3]=c->r[3]+0x0000003Cu; // 804B3DF4
  c->lr=0x804B3DFCu; f_804B0B24(c); // 804B3DF8
L_804B3DFC:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3DFC
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 804B3E00
  if (crb(c,2)) { goto L_804B3E10; } // 804B3E04
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3E08
  goto L_804B3E24; // 804B3E0C
L_804B3E10:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 804B3E10
  c->f[1]=c->f[31]; // 804B3E14
  c->r[3]=c->r[31]+c->r[0]; // 804B3E18
  c->r[3]=c->r[3]+0x00000040u; // 804B3E1C
  c->lr=0x804B3E24u; f_804B0B24(c); // 804B3E20
L_804B3E24:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 804B3E24
  goto L_804B3ED8; // 804B3E28
L_804B3E2C:;
  c->r[0]=rotl(c->r[30],0)&0x02000000u; cr0(c,c->r[0]); // 804B3E2C
  c->r[23]=rotl(c->r[30],6)&0x00000001u; // 804B3E30
  c->r[24]=rotl(c->r[30],5)&0x00000001u; // 804B3E34
  c->r[25]=rotl(c->r[30],4)&0x00000001u; // 804B3E38
  if (crb(c,2)) { goto L_804B3E48; } // 804B3E3C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3E40
  goto L_804B3E5C; // 804B3E44
L_804B3E48:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 804B3E48
  c->f[1]=c->f[31]; // 804B3E4C
  c->r[3]=c->r[31]+c->r[0]; // 804B3E50
  c->r[3]=c->r[3]+0x00000044u; // 804B3E54
  c->lr=0x804B3E5Cu; f_804B0B24(c); // 804B3E58
L_804B3E5C:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B3E5C
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 804B3E60
  if (crb(c,2)) { goto L_804B3E70; } // 804B3E64
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3E68
  goto L_804B3E84; // 804B3E6C
L_804B3E70:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 804B3E70
  c->f[1]=c->f[31]; // 804B3E74
  c->r[3]=c->r[31]+c->r[0]; // 804B3E78
  c->r[3]=c->r[3]+0x00000048u; // 804B3E7C
  c->lr=0x804B3E84u; f_804B0B24(c); // 804B3E80
L_804B3E84:;
  cmps(c,0,(int32_t)c->r[24],0); // 804B3E84
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 804B3E88
  if (crb(c,2)) { goto L_804B3E98; } // 804B3E8C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3E90
  goto L_804B3EAC; // 804B3E94
L_804B3E98:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 804B3E98
  c->f[1]=c->f[31]; // 804B3E9C
  c->r[3]=c->r[31]+c->r[0]; // 804B3EA0
  c->r[3]=c->r[3]+0x0000004Cu; // 804B3EA4
  c->lr=0x804B3EACu; f_804B0B24(c); // 804B3EA8
L_804B3EAC:;
  cmps(c,0,(int32_t)c->r[25],0); // 804B3EAC
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 804B3EB0
  if (crb(c,2)) { goto L_804B3EC0; } // 804B3EB4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3EB8
  goto L_804B3ED4; // 804B3EBC
L_804B3EC0:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 804B3EC0
  c->f[1]=c->f[31]; // 804B3EC4
  c->r[3]=c->r[31]+c->r[0]; // 804B3EC8
  c->r[3]=c->r[3]+0x00000050u; // 804B3ECC
  c->lr=0x804B3ED4u; f_804B0B24(c); // 804B3ED0
L_804B3ED4:;
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[1]);} // 804B3ED4
L_804B3ED8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B3ED8
  cmps(c,0,(int32_t)c->r[0],1); // 804B3EDC
  if (crb(c,2)) { goto L_804B3F20; } // 804B3EE0
  if (!crb(c,0)) { goto L_804B3F48; } // 804B3EE4
  cmps(c,0,(int32_t)c->r[0],0); // 804B3EE8
  if (!crb(c,0)) { goto L_804B3EF4; } // 804B3EEC
  goto L_804B3F48; // 804B3EF0
L_804B3EF4:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 804B3EF4
  if (crb(c,2)) { goto L_804B3F04; } // 804B3EF8
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3EFC
  goto L_804B3F18; // 804B3F00
L_804B3F04:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 804B3F04
  c->f[1]=c->f[31]; // 804B3F08
  c->r[3]=c->r[31]+c->r[0]; // 804B3F0C
  c->r[3]=c->r[3]+0x00000054u; // 804B3F10
  c->lr=0x804B3F18u; f_804B0B24(c); // 804B3F14
L_804B3F18:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 804B3F18
  goto L_804B3F48; // 804B3F1C
L_804B3F20:;
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 804B3F20
  if (crb(c,2)) { goto L_804B3F30; } // 804B3F24
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B3F28
  goto L_804B3F44; // 804B3F2C
L_804B3F30:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 804B3F30
  c->f[1]=c->f[31]; // 804B3F34
  c->r[3]=c->r[31]+c->r[0]; // 804B3F38
  c->r[3]=c->r[3]+0x00000058u; // 804B3F3C
  c->lr=0x804B3F44u; f_804B0B24(c); // 804B3F40
L_804B3F44:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 804B3F44
L_804B3F48:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B3F48
  c->r[11]=c->r[1]+0x00000030u; // 804B3F4C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B3F50
  c->lr=0x804B3F58u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B3F54
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B3F58
  c->lr=c->r[0]; // 804B3F5C
  c->r[1]=c->r[1]+0x00000040u; // 804B3F60
  return; // 804B3F64
}

// fn_804B3F68
void f_804B3F68(Ctx* __restrict c) {
  trace_call(0x804B3F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3F68
  c->r[0]=c->lr; // 804B3F6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B3F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B3F74
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B3F78
  cmps(c,0,(int32_t)c->r[0],0); // 804B3F7C
  if (crb(c,2)) { goto L_804B3F8C; } // 804B3F80
  c->r[0]=c->r[3]+c->r[0]; // 804B3F84
  goto L_804B3F90; // 804B3F88
L_804B3F8C:;
  c->r[0]=0u+0x00000000u; // 804B3F8C
L_804B3F90:;
  c->r[3]=0u+0x80720000u; // 804B3F90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B3F94
  c->r[3]=c->r[3]+0xFFFF9BE0u; // 804B3F98
  c->r[4]=c->r[1]+0x00000008u; // 804B3F9C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B3FA0
  c->r[3]=c->r[1]+0x0000000Cu; // 804B3FA4
  c->lr=0x804B3FACu; f_804AA37C(c); // 804B3FA8
  c->r[0]=0u-c->r[3]; // 804B3FAC
  c->r[0]=c->r[0]|c->r[3]; // 804B3FB0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804B3FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B3FB8
  c->lr=c->r[0]; // 804B3FBC
  c->r[1]=c->r[1]+0x00000010u; // 804B3FC0
  return; // 804B3FC4
}

// fn_804B3FC8
void f_804B3FC8(Ctx* __restrict c) {
  trace_call(0x804B3FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B3FC8
  c->r[0]=c->lr; // 804B3FCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B3FD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B3FD4
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B3FD8
  cmps(c,0,(int32_t)c->r[0],0); // 804B3FDC
  if (crb(c,2)) { goto L_804B3FEC; } // 804B3FE0
  c->r[0]=c->r[3]+c->r[0]; // 804B3FE4
  goto L_804B3FF0; // 804B3FE8
L_804B3FEC:;
  c->r[0]=0u+0x00000000u; // 804B3FEC
L_804B3FF0:;
  c->r[3]=0u+0x80720000u; // 804B3FF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B3FF4
  c->r[3]=c->r[3]+0xFFFF9C00u; // 804B3FF8
  c->r[4]=c->r[1]+0x00000008u; // 804B3FFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B4000
  c->r[3]=c->r[1]+0x0000000Cu; // 804B4004
  c->lr=0x804B400Cu; f_804AA37C(c); // 804B4008
  c->r[0]=0u-c->r[3]; // 804B400C
  c->r[0]=c->r[0]|c->r[3]; // 804B4010
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804B4014
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B4018
  c->lr=c->r[0]; // 804B401C
  c->r[1]=c->r[1]+0x00000010u; // 804B4020
  return; // 804B4024
}

// fn_804B4028
void f_804B4028(Ctx* __restrict c) {
  trace_call(0x804B4028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4028
  c->r[0]=c->lr; // 804B402C
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4030
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B4034
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4038
  cmps(c,0,(int32_t)c->r[0],0); // 804B403C
  if (crb(c,2)) { goto L_804B404C; } // 804B4040
  c->r[0]=c->r[3]+c->r[0]; // 804B4044
  goto L_804B4050; // 804B4048
L_804B404C:;
  c->r[0]=0u+0x00000000u; // 804B404C
L_804B4050:;
  c->r[3]=0u+0x80720000u; // 804B4050
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B4054
  c->r[3]=c->r[3]+0xFFFF9BC0u; // 804B4058
  c->r[4]=c->r[1]+0x00000008u; // 804B405C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B4060
  c->r[3]=c->r[1]+0x0000000Cu; // 804B4064
  c->lr=0x804B406Cu; f_804AA37C(c); // 804B4068
  cmps(c,0,(int32_t)c->r[3],0); // 804B406C
  if (crb(c,2)) { goto L_804B4094; } // 804B4070
  c->r[0]=0u-c->r[3]; // 804B4074
  c->r[0]=c->r[0]|c->r[3]; // 804B4078
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B407C
  if (crb(c,2)) { goto L_804B408C; } // 804B4080
  c->r[3]=R32(c->r[3]+0x00000004u); // 804B4084
  goto L_804B4098; // 804B4088
L_804B408C:;
  c->r[3]=0u+0x00000000u; // 804B408C
  goto L_804B4098; // 804B4090
L_804B4094:;
  c->r[3]=0u+0x00000000u; // 804B4094
L_804B4098:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B4098
  c->lr=c->r[0]; // 804B409C
  c->r[1]=c->r[1]+0x00000010u; // 804B40A0
  return; // 804B40A4
}

// fn_804B40A8
void f_804B40A8(Ctx* __restrict c) {
  trace_call(0x804B40A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B40A8
  c->r[0]=c->lr; // 804B40AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B40B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B40B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B40B8
  c->r[31]=c->r[4]|c->r[4]; // 804B40BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B40C0
  cmps(c,0,(int32_t)c->r[0],0); // 804B40C4
  if (crb(c,2)) { goto L_804B40D4; } // 804B40C8
  c->r[0]=c->r[3]+c->r[0]; // 804B40CC
  goto L_804B40D8; // 804B40D0
L_804B40D4:;
  c->r[0]=0u+0x00000000u; // 804B40D4
L_804B40D8:;
  c->r[3]=0u+0x80720000u; // 804B40D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B40DC
  c->r[3]=c->r[3]+0xFFFF9BE0u; // 804B40E0
  c->r[4]=c->r[1]+0x00000010u; // 804B40E4
  W32(c->r[1]+0x00000010u,c->r[3]); // 804B40E8
  c->r[3]=c->r[1]+0x00000014u; // 804B40EC
  c->lr=0x804B40F4u; f_804AA37C(c); // 804B40F0
  cmps(c,0,(int32_t)c->r[3],0); // 804B40F4
  if (crb(c,2)) { goto L_804B4118; } // 804B40F8
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B40FC
  c->r[4]=c->r[1]+0x00000008u; // 804B4100
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B4104
  c->r[3]=c->r[1]+0x0000000Cu; // 804B4108
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B410C
  c->lr=0x804B4114u; f_804AA37C(c); // 804B4110
  goto L_804B411C; // 804B4114
L_804B4118:;
  c->r[3]=0u+0x00000000u; // 804B4118
L_804B411C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B411C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B4120
  c->lr=c->r[0]; // 804B4124
  c->r[1]=c->r[1]+0x00000020u; // 804B4128
  return; // 804B412C
}

// fn_804B4130
void f_804B4130(Ctx* __restrict c) {
  trace_call(0x804B4130u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4130
  c->r[0]=c->lr; // 804B4134
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4138
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B413C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B4140
  c->r[31]=c->r[4]|c->r[4]; // 804B4144
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4148
  cmps(c,0,(int32_t)c->r[0],0); // 804B414C
  if (crb(c,2)) { goto L_804B415C; } // 804B4150
  c->r[0]=c->r[3]+c->r[0]; // 804B4154
  goto L_804B4160; // 804B4158
L_804B415C:;
  c->r[0]=0u+0x00000000u; // 804B415C
L_804B4160:;
  c->r[3]=0u+0x80720000u; // 804B4160
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B4164
  c->r[3]=c->r[3]+0xFFFF9BE0u; // 804B4168
  c->r[4]=c->r[1]+0x0000000Cu; // 804B416C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B4170
  c->r[3]=c->r[1]+0x00000008u; // 804B4174
  c->lr=0x804B417Cu; f_804AA37C(c); // 804B4178
  cmps(c,0,(int32_t)c->r[3],0); // 804B417C
  if (crb(c,2)) { goto L_804B41C4; } // 804B4180
  c->r[0]=0u-c->r[3]; // 804B4184
  c->r[0]=c->r[0]|c->r[3]; // 804B4188
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B418C
  if (crb(c,2)) { goto L_804B41BC; } // 804B4190
  c->r[0]=c->r[31]+0x00000001u; // 804B4194
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804B4198
  c->r[4]=c->r[3]+c->r[0]; // 804B419C
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B41A0
  cmps(c,0,(int32_t)c->r[0],0); // 804B41A4
  if (crb(c,2)) { goto L_804B41B4; } // 804B41A8
  c->r[3]=c->r[3]+c->r[0]; // 804B41AC
  goto L_804B41C8; // 804B41B0
L_804B41B4:;
  c->r[3]=0u+0x00000000u; // 804B41B4
  goto L_804B41C8; // 804B41B8
L_804B41BC:;
  c->r[3]=0u+0x00000000u; // 804B41BC
  goto L_804B41C8; // 804B41C0
L_804B41C4:;
  c->r[3]=0u+0x00000000u; // 804B41C4
L_804B41C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B41C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B41CC
  c->lr=c->r[0]; // 804B41D0
  c->r[1]=c->r[1]+0x00000020u; // 804B41D4
  return; // 804B41D8
}

// fn_804B41DC
void f_804B41DC(Ctx* __restrict c) {
  trace_call(0x804B41DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B41DC
  c->r[0]=c->lr; // 804B41E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B41E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B41E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B41EC
  cmps(c,0,(int32_t)c->r[0],0); // 804B41F0
  if (crb(c,2)) { goto L_804B4200; } // 804B41F4
  c->r[0]=c->r[3]+c->r[0]; // 804B41F8
  goto L_804B4204; // 804B41FC
L_804B4200:;
  c->r[0]=0u+0x00000000u; // 804B4200
L_804B4204:;
  c->r[3]=0u+0x80720000u; // 804B4204
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B4208
  c->r[3]=c->r[3]+0xFFFF9BE0u; // 804B420C
  c->r[4]=c->r[1]+0x00000008u; // 804B4210
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B4214
  c->r[3]=c->r[1]+0x0000000Cu; // 804B4218
  c->lr=0x804B4220u; f_804AA37C(c); // 804B421C
  cmps(c,0,(int32_t)c->r[3],0); // 804B4220
  if (crb(c,2)) { goto L_804B4248; } // 804B4224
  c->r[0]=0u-c->r[3]; // 804B4228
  c->r[0]=c->r[0]|c->r[3]; // 804B422C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B4230
  if (crb(c,2)) { goto L_804B4240; } // 804B4234
  c->r[3]=R32(c->r[3]+0x00000004u); // 804B4238
  goto L_804B424C; // 804B423C
L_804B4240:;
  c->r[3]=0u+0x00000000u; // 804B4240
  goto L_804B424C; // 804B4244
L_804B4248:;
  c->r[3]=0u+0x00000000u; // 804B4248
L_804B424C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B424C
  c->lr=c->r[0]; // 804B4250
  c->r[1]=c->r[1]+0x00000010u; // 804B4254
  return; // 804B4258
}

// fn_804B425C
void f_804B425C(Ctx* __restrict c) {
  trace_call(0x804B425Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B425C
  c->r[0]=c->lr; // 804B4260
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4264
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B4268
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B426C
  c->r[31]=c->r[4]|c->r[4]; // 804B4270
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4274
  cmps(c,0,(int32_t)c->r[0],0); // 804B4278
  if (crb(c,2)) { goto L_804B4288; } // 804B427C
  c->r[0]=c->r[3]+c->r[0]; // 804B4280
  goto L_804B428C; // 804B4284
L_804B4288:;
  c->r[0]=0u+0x00000000u; // 804B4288
L_804B428C:;
  c->r[3]=0u+0x80720000u; // 804B428C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B4290
  c->r[3]=c->r[3]+0xFFFF9C00u; // 804B4294
  c->r[4]=c->r[1]+0x00000010u; // 804B4298
  W32(c->r[1]+0x00000010u,c->r[3]); // 804B429C
  c->r[3]=c->r[1]+0x00000014u; // 804B42A0
  c->lr=0x804B42A8u; f_804AA37C(c); // 804B42A4
  cmps(c,0,(int32_t)c->r[3],0); // 804B42A8
  if (crb(c,2)) { goto L_804B42CC; } // 804B42AC
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B42B0
  c->r[4]=c->r[1]+0x00000008u; // 804B42B4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B42B8
  c->r[3]=c->r[1]+0x0000000Cu; // 804B42BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B42C0
  c->lr=0x804B42C8u; f_804AA37C(c); // 804B42C4
  goto L_804B42D0; // 804B42C8
L_804B42CC:;
  c->r[3]=0u+0x00000000u; // 804B42CC
L_804B42D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B42D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B42D4
  c->lr=c->r[0]; // 804B42D8
  c->r[1]=c->r[1]+0x00000020u; // 804B42DC
  return; // 804B42E0
}

// fn_804B42E4
void f_804B42E4(Ctx* __restrict c) {
  trace_call(0x804B42E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B42E4
  c->r[0]=c->lr; // 804B42E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B42EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B42F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B42F4
  c->r[31]=c->r[4]|c->r[4]; // 804B42F8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B42FC
  cmps(c,0,(int32_t)c->r[0],0); // 804B4300
  if (crb(c,2)) { goto L_804B4310; } // 804B4304
  c->r[0]=c->r[3]+c->r[0]; // 804B4308
  goto L_804B4314; // 804B430C
L_804B4310:;
  c->r[0]=0u+0x00000000u; // 804B4310
L_804B4314:;
  c->r[3]=0u+0x80720000u; // 804B4314
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B4318
  c->r[3]=c->r[3]+0xFFFF9C00u; // 804B431C
  c->r[4]=c->r[1]+0x0000000Cu; // 804B4320
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B4324
  c->r[3]=c->r[1]+0x00000008u; // 804B4328
  c->lr=0x804B4330u; f_804AA37C(c); // 804B432C
  cmps(c,0,(int32_t)c->r[3],0); // 804B4330
  if (crb(c,2)) { goto L_804B4378; } // 804B4334
  c->r[0]=0u-c->r[3]; // 804B4338
  c->r[0]=c->r[0]|c->r[3]; // 804B433C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B4340
  if (crb(c,2)) { goto L_804B4370; } // 804B4344
  c->r[0]=c->r[31]+0x00000001u; // 804B4348
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804B434C
  c->r[4]=c->r[3]+c->r[0]; // 804B4350
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B4354
  cmps(c,0,(int32_t)c->r[0],0); // 804B4358
  if (crb(c,2)) { goto L_804B4368; } // 804B435C
  c->r[3]=c->r[3]+c->r[0]; // 804B4360
  goto L_804B437C; // 804B4364
L_804B4368:;
  c->r[3]=0u+0x00000000u; // 804B4368
  goto L_804B437C; // 804B436C
L_804B4370:;
  c->r[3]=0u+0x00000000u; // 804B4370
  goto L_804B437C; // 804B4374
L_804B4378:;
  c->r[3]=0u+0x00000000u; // 804B4378
L_804B437C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B437C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B4380
  c->lr=c->r[0]; // 804B4384
  c->r[1]=c->r[1]+0x00000020u; // 804B4388
  return; // 804B438C
}

// fn_804B4390
void f_804B4390(Ctx* __restrict c) {
  trace_call(0x804B4390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4390
  c->r[0]=c->lr; // 804B4394
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4398
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B439C
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B43A0
  cmps(c,0,(int32_t)c->r[0],0); // 804B43A4
  if (crb(c,2)) { goto L_804B43B4; } // 804B43A8
  c->r[0]=c->r[3]+c->r[0]; // 804B43AC
  goto L_804B43B8; // 804B43B0
L_804B43B4:;
  c->r[0]=0u+0x00000000u; // 804B43B4
L_804B43B8:;
  c->r[3]=0u+0x80720000u; // 804B43B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B43BC
  c->r[3]=c->r[3]+0xFFFF9C00u; // 804B43C0
  c->r[4]=c->r[1]+0x00000008u; // 804B43C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B43C8
  c->r[3]=c->r[1]+0x0000000Cu; // 804B43CC
  c->lr=0x804B43D4u; f_804AA37C(c); // 804B43D0
  cmps(c,0,(int32_t)c->r[3],0); // 804B43D4
  if (crb(c,2)) { goto L_804B43FC; } // 804B43D8
  c->r[0]=0u-c->r[3]; // 804B43DC
  c->r[0]=c->r[0]|c->r[3]; // 804B43E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B43E4
  if (crb(c,2)) { goto L_804B43F4; } // 804B43E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 804B43EC
  goto L_804B4400; // 804B43F0
L_804B43F4:;
  c->r[3]=0u+0x00000000u; // 804B43F4
  goto L_804B4400; // 804B43F8
L_804B43FC:;
  c->r[3]=0u+0x00000000u; // 804B43FC
L_804B4400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B4400
  c->lr=c->r[0]; // 804B4404
  c->r[1]=c->r[1]+0x00000010u; // 804B4408
  return; // 804B440C
}

// fn_804B4410
void f_804B4410(Ctx* __restrict c) {
  trace_call(0x804B4410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4410
  c->r[0]=c->lr; // 804B4414
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4418
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B441C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B4420
  c->r[31]=c->r[4]|c->r[4]; // 804B4424
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4428
  cmps(c,0,(int32_t)c->r[0],0); // 804B442C
  if (crb(c,2)) { goto L_804B443C; } // 804B4430
  c->r[0]=c->r[3]+c->r[0]; // 804B4434
  goto L_804B4440; // 804B4438
L_804B443C:;
  c->r[0]=0u+0x00000000u; // 804B443C
L_804B4440:;
  c->r[3]=0u+0x80720000u; // 804B4440
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B4444
  c->r[3]=c->r[3]+0xFFFF9C20u; // 804B4448
  c->r[4]=c->r[1]+0x0000000Cu; // 804B444C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B4450
  c->r[3]=c->r[1]+0x00000008u; // 804B4454
  c->lr=0x804B445Cu; f_804AA37C(c); // 804B4458
  cmps(c,0,(int32_t)c->r[3],0); // 804B445C
  if (crb(c,2)) { goto L_804B44A4; } // 804B4460
  c->r[0]=0u-c->r[3]; // 804B4464
  c->r[0]=c->r[0]|c->r[3]; // 804B4468
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B446C
  if (crb(c,2)) { goto L_804B449C; } // 804B4470
  c->r[0]=c->r[31]+0x00000001u; // 804B4474
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804B4478
  c->r[4]=c->r[3]+c->r[0]; // 804B447C
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B4480
  cmps(c,0,(int32_t)c->r[0],0); // 804B4484
  if (crb(c,2)) { goto L_804B4494; } // 804B4488
  c->r[3]=c->r[3]+c->r[0]; // 804B448C
  goto L_804B44A8; // 804B4490
L_804B4494:;
  c->r[3]=0u+0x00000000u; // 804B4494
  goto L_804B44A8; // 804B4498
L_804B449C:;
  c->r[3]=0u+0x00000000u; // 804B449C
  goto L_804B44A8; // 804B44A0
L_804B44A4:;
  c->r[3]=0u+0x00000000u; // 804B44A4
L_804B44A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B44A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B44AC
  c->lr=c->r[0]; // 804B44B0
  c->r[1]=c->r[1]+0x00000020u; // 804B44B4
  return; // 804B44B8
}

// fn_804B44BC
void f_804B44BC(Ctx* __restrict c) {
  trace_call(0x804B44BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B44BC
  c->r[0]=c->lr; // 804B44C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B44C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B44C8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B44CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B44D0
  if (crb(c,2)) { goto L_804B44E0; } // 804B44D4
  c->r[0]=c->r[3]+c->r[0]; // 804B44D8
  goto L_804B44E4; // 804B44DC
L_804B44E0:;
  c->r[0]=0u+0x00000000u; // 804B44E0
L_804B44E4:;
  c->r[3]=0u+0x80720000u; // 804B44E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B44E8
  c->r[3]=c->r[3]+0xFFFF9C20u; // 804B44EC
  c->r[4]=c->r[1]+0x00000008u; // 804B44F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B44F4
  c->r[3]=c->r[1]+0x0000000Cu; // 804B44F8
  c->lr=0x804B4500u; f_804AA37C(c); // 804B44FC
  cmps(c,0,(int32_t)c->r[3],0); // 804B4500
  if (crb(c,2)) { goto L_804B4528; } // 804B4504
  c->r[0]=0u-c->r[3]; // 804B4508
  c->r[0]=c->r[0]|c->r[3]; // 804B450C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B4510
  if (crb(c,2)) { goto L_804B4520; } // 804B4514
  c->r[3]=R32(c->r[3]+0x00000004u); // 804B4518
  goto L_804B452C; // 804B451C
L_804B4520:;
  c->r[3]=0u+0x00000000u; // 804B4520
  goto L_804B452C; // 804B4524
L_804B4528:;
  c->r[3]=0u+0x00000000u; // 804B4528
L_804B452C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B452C
  c->lr=c->r[0]; // 804B4530
  c->r[1]=c->r[1]+0x00000010u; // 804B4534
  return; // 804B4538
}

// fn_804B453C
void f_804B453C(Ctx* __restrict c) {
  trace_call(0x804B453Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B453C
  c->r[0]=c->lr; // 804B4540
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4544
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B4548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B454C
  c->r[31]=c->r[4]|c->r[4]; // 804B4550
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4554
  cmps(c,0,(int32_t)c->r[0],0); // 804B4558
  if (crb(c,2)) { goto L_804B4568; } // 804B455C
  c->r[0]=c->r[3]+c->r[0]; // 804B4560
  goto L_804B456C; // 804B4564
L_804B4568:;
  c->r[0]=0u+0x00000000u; // 804B4568
L_804B456C:;
  c->r[3]=0u+0x80720000u; // 804B456C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B4570
  c->r[3]=c->r[3]+0xFFFF9C40u; // 804B4574
  c->r[4]=c->r[1]+0x0000000Cu; // 804B4578
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804B457C
  c->r[3]=c->r[1]+0x00000008u; // 804B4580
  c->lr=0x804B4588u; f_804AA37C(c); // 804B4584
  cmps(c,0,(int32_t)c->r[3],0); // 804B4588
  if (crb(c,2)) { goto L_804B45D0; } // 804B458C
  c->r[0]=0u-c->r[3]; // 804B4590
  c->r[0]=c->r[0]|c->r[3]; // 804B4594
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B4598
  if (crb(c,2)) { goto L_804B45C8; } // 804B459C
  c->r[0]=c->r[31]+0x00000001u; // 804B45A0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804B45A4
  c->r[4]=c->r[3]+c->r[0]; // 804B45A8
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B45AC
  cmps(c,0,(int32_t)c->r[0],0); // 804B45B0
  if (crb(c,2)) { goto L_804B45C0; } // 804B45B4
  c->r[3]=c->r[3]+c->r[0]; // 804B45B8
  goto L_804B45D4; // 804B45BC
L_804B45C0:;
  c->r[3]=0u+0x00000000u; // 804B45C0
  goto L_804B45D4; // 804B45C4
L_804B45C8:;
  c->r[3]=0u+0x00000000u; // 804B45C8
  goto L_804B45D4; // 804B45CC
L_804B45D0:;
  c->r[3]=0u+0x00000000u; // 804B45D0
L_804B45D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B45D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B45D8
  c->lr=c->r[0]; // 804B45DC
  c->r[1]=c->r[1]+0x00000020u; // 804B45E0
  return; // 804B45E4
}

// fn_804B45E8
void f_804B45E8(Ctx* __restrict c) {
  trace_call(0x804B45E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B45E8
  c->r[0]=c->lr; // 804B45EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B45F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B45F4
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B45F8
  cmps(c,0,(int32_t)c->r[0],0); // 804B45FC
  if (crb(c,2)) { goto L_804B460C; } // 804B4600
  c->r[0]=c->r[3]+c->r[0]; // 804B4604
  goto L_804B4610; // 804B4608
L_804B460C:;
  c->r[0]=0u+0x00000000u; // 804B460C
L_804B4610:;
  c->r[3]=0u+0x80720000u; // 804B4610
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B4614
  c->r[3]=c->r[3]+0xFFFF9C40u; // 804B4618
  c->r[4]=c->r[1]+0x00000008u; // 804B461C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804B4620
  c->r[3]=c->r[1]+0x0000000Cu; // 804B4624
  c->lr=0x804B462Cu; f_804AA37C(c); // 804B4628
  cmps(c,0,(int32_t)c->r[3],0); // 804B462C
  if (crb(c,2)) { goto L_804B4654; } // 804B4630
  c->r[0]=0u-c->r[3]; // 804B4634
  c->r[0]=c->r[0]|c->r[3]; // 804B4638
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B463C
  if (crb(c,2)) { goto L_804B464C; } // 804B4640
  c->r[3]=R32(c->r[3]+0x00000004u); // 804B4644
  goto L_804B4658; // 804B4648
L_804B464C:;
  c->r[3]=0u+0x00000000u; // 804B464C
  goto L_804B4658; // 804B4650
L_804B4654:;
  c->r[3]=0u+0x00000000u; // 804B4654
L_804B4658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B4658
  c->lr=c->r[0]; // 804B465C
  c->r[1]=c->r[1]+0x00000010u; // 804B4660
  return; // 804B4664
}

// fn_804B4668
void f_804B4668(Ctx* __restrict c) {
  trace_call(0x804B4668u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4668
  c->r[5]=R16(c->r[3]+0x0000003Cu); // 804B466C
  cmpu(c,0,c->r[5],c->r[4]); // 804B4670
  if (crb(c,1)) { goto L_804B4680; } // 804B4674
  c->r[3]=0u+0x00000000u; // 804B4678
  return; // 804B467C
L_804B4680:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B4680
  cmps(c,0,(int32_t)c->r[0],0); // 804B4684
  if (crb(c,2)) { goto L_804B4694; } // 804B4688
  c->r[3]=c->r[3]+c->r[0]; // 804B468C
  goto L_804B4698; // 804B4690
L_804B4694:;
  c->r[3]=0u+0x00000000u; // 804B4694
L_804B4698:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 804B4698
  c->r[3]=c->r[3]+c->r[0]; // 804B469C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B46A0
  cmpu(c,0,c->r[0],c->r[5]); // 804B46A4
  if (crb(c,0)) return; // 804B46A8
  c->r[3]=0u+0x00000000u; // 804B46AC
  return; // 804B46B0
}

// fn_804B46B4
void f_804B46B4(Ctx* __restrict c) {
  trace_call(0x804B46B4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B46B4
  c->r[5]=R16(c->r[3]+0x0000003Eu); // 804B46B8
  cmpu(c,0,c->r[5],c->r[4]); // 804B46BC
  if (crb(c,1)) { goto L_804B46CC; } // 804B46C0
  c->r[3]=0u+0x00000000u; // 804B46C4
  return; // 804B46C8
L_804B46CC:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B46CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B46D0
  if (crb(c,2)) { goto L_804B46E0; } // 804B46D4
  c->r[3]=c->r[3]+c->r[0]; // 804B46D8
  goto L_804B46E4; // 804B46DC
L_804B46E0:;
  c->r[3]=0u+0x00000000u; // 804B46E0
L_804B46E4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 804B46E4
  c->r[3]=c->r[3]+c->r[0]; // 804B46E8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B46EC
  cmpu(c,0,c->r[0],c->r[5]); // 804B46F0
  if (crb(c,0)) return; // 804B46F4
  c->r[3]=0u+0x00000000u; // 804B46F8
  return; // 804B46FC
}

// fn_804B4700
void f_804B4700(Ctx* __restrict c) {
  trace_call(0x804B4700u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4700
  c->r[5]=R16(c->r[3]+0x00000040u); // 804B4704
  cmpu(c,0,c->r[5],c->r[4]); // 804B4708
  if (crb(c,1)) { goto L_804B4718; } // 804B470C
  c->r[3]=0u+0x00000000u; // 804B4710
  return; // 804B4714
L_804B4718:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804B4718
  cmps(c,0,(int32_t)c->r[0],0); // 804B471C
  if (crb(c,2)) { goto L_804B472C; } // 804B4720
  c->r[3]=c->r[3]+c->r[0]; // 804B4724
  goto L_804B4730; // 804B4728
L_804B472C:;
  c->r[3]=0u+0x00000000u; // 804B472C
L_804B4730:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 804B4730
  c->r[3]=c->r[3]+c->r[0]; // 804B4734
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B4738
  cmpu(c,0,c->r[0],c->r[5]); // 804B473C
  if (crb(c,0)) return; // 804B4740
  c->r[3]=0u+0x00000000u; // 804B4744
  return; // 804B4748
}

// fn_804B474C
void f_804B474C(Ctx* __restrict c) {
  trace_call(0x804B474Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B474C
  c->r[5]=R16(c->r[3]+0x00000042u); // 804B4750
  cmpu(c,0,c->r[5],c->r[4]); // 804B4754
  if (crb(c,1)) { goto L_804B4764; } // 804B4758
  c->r[3]=0u+0x00000000u; // 804B475C
  return; // 804B4760
L_804B4764:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 804B4764
  cmps(c,0,(int32_t)c->r[0],0); // 804B4768
  if (crb(c,2)) { goto L_804B4778; } // 804B476C
  c->r[3]=c->r[3]+c->r[0]; // 804B4770
  goto L_804B477C; // 804B4774
L_804B4778:;
  c->r[3]=0u+0x00000000u; // 804B4778
L_804B477C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 804B477C
  c->r[3]=c->r[3]+c->r[0]; // 804B4780
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B4784
  cmpu(c,0,c->r[0],c->r[5]); // 804B4788
  if (crb(c,0)) return; // 804B478C
  c->r[3]=0u+0x00000000u; // 804B4790
  return; // 804B4794
}

// fn_804B4798
void f_804B4798(Ctx* __restrict c) {
  trace_call(0x804B4798u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B4798
  c->r[5]=R16(c->r[3]+0x00000044u); // 804B479C
  cmpu(c,0,c->r[5],c->r[4]); // 804B47A0
  if (crb(c,1)) { goto L_804B47B0; } // 804B47A4
  c->r[3]=0u+0x00000000u; // 804B47A8
  return; // 804B47AC
L_804B47B0:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 804B47B0
  cmps(c,0,(int32_t)c->r[0],0); // 804B47B4
  if (crb(c,2)) { goto L_804B47C4; } // 804B47B8
  c->r[3]=c->r[3]+c->r[0]; // 804B47BC
  goto L_804B47C8; // 804B47C0
L_804B47C4:;
  c->r[3]=0u+0x00000000u; // 804B47C4
L_804B47C8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 804B47C8
  c->r[3]=c->r[3]+c->r[0]; // 804B47CC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B47D0
  cmpu(c,0,c->r[0],c->r[5]); // 804B47D4
  if (crb(c,0)) return; // 804B47D8
  c->r[3]=0u+0x00000000u; // 804B47DC
  return; // 804B47E0
}

// fn_804B47E4
void f_804B47E4(Ctx* __restrict c) {
  trace_call(0x804B47E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B47E4
  c->r[0]=c->lr; // 804B47E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B47EC
  c->r[11]=c->r[1]+0x00000040u; // 804B47F0
  c->lr=0x804B47F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B47F4
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B47F8
  c->r[28]=c->r[3]|c->r[3]; // 804B47FC
  c->r[29]=c->r[4]|c->r[4]; // 804B4800
  c->r[0]=R32(c->r[5]+0x00000010u); // 804B4804
  cmps(c,0,(int32_t)c->r[0],0); // 804B4808
  if (crb(c,2)) { goto L_804B4818; } // 804B480C
  c->r[0]=c->r[5]+c->r[0]; // 804B4810
  goto L_804B481C; // 804B4814
L_804B4818:;
  c->r[0]=0u+0x00000000u; // 804B4818
L_804B481C:;
  c->r[3]=0u+0x80720000u; // 804B481C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804B4820
  c->r[3]=c->r[3]+0xFFFF9BC0u; // 804B4824
  c->r[4]=c->r[1]+0x00000014u; // 804B4828
  W32(c->r[1]+0x00000014u,c->r[3]); // 804B482C
  c->r[3]=c->r[1]+0x00000010u; // 804B4830
  c->lr=0x804B4838u; f_804AA37C(c); // 804B4834
  cmps(c,0,(int32_t)c->r[3],0); // 804B4838
  if (crb(c,2)) { goto L_804B4860; } // 804B483C
  c->r[0]=0u-c->r[3]; // 804B4840
  c->r[0]=c->r[0]|c->r[3]; // 804B4844
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B4848
  if (crb(c,2)) { goto L_804B4858; } // 804B484C
  c->r[26]=R32(c->r[3]+0x00000004u); // 804B4850
  goto L_804B4864; // 804B4854
L_804B4858:;
  c->r[26]=0u+0x00000000u; // 804B4858
  goto L_804B4864; // 804B485C
L_804B4860:;
  c->r[26]=0u+0x00000000u; // 804B4860
L_804B4864:;
  c->r[27]=0u+0x80720000u; // 804B4864
  c->r[31]=0u+0x00000001u; // 804B4868
  c->r[27]=c->r[27]+0xFFFF9BC0u; // 804B486C
  c->r[30]=0u+0x00000000u; // 804B4870
  goto L_804B492C; // 804B4874
L_804B4878:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804B4878
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B487C
  cmps(c,0,(int32_t)c->r[0],0); // 804B4880
  if (crb(c,2)) { goto L_804B4890; } // 804B4884
  c->r[0]=c->r[3]+c->r[0]; // 804B4888
  goto L_804B4894; // 804B488C
L_804B4890:;
  c->r[0]=0u+0x00000000u; // 804B4890
L_804B4894:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 804B4894
  c->r[4]=c->r[1]+0x00000008u; // 804B4898
  c->r[3]=c->r[1]+0x0000000Cu; // 804B489C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B48A0
  c->lr=0x804B48A8u; f_804AA37C(c); // 804B48A4
  cmps(c,0,(int32_t)c->r[3],0); // 804B48A8
  if (crb(c,2)) { goto L_804B48F0; } // 804B48AC
  c->r[0]=0u-c->r[3]; // 804B48B0
  c->r[0]=c->r[0]|c->r[3]; // 804B48B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804B48B8
  if (crb(c,2)) { goto L_804B48E8; } // 804B48BC
  c->r[0]=c->r[30]+0x00000001u; // 804B48C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804B48C4
  c->r[4]=c->r[3]+c->r[0]; // 804B48C8
  c->r[0]=R32(c->r[4]+0x00000014u); // 804B48CC
  cmps(c,0,(int32_t)c->r[0],0); // 804B48D0
  if (crb(c,2)) { goto L_804B48E0; } // 804B48D4
  c->r[3]=c->r[3]+c->r[0]; // 804B48D8
  goto L_804B48F4; // 804B48DC
L_804B48E0:;
  c->r[3]=0u+0x00000000u; // 804B48E0
  goto L_804B48F4; // 804B48E4
L_804B48E8:;
  c->r[3]=0u+0x00000000u; // 804B48E8
  goto L_804B48F4; // 804B48EC
L_804B48F0:;
  c->r[3]=0u+0x00000000u; // 804B48F0
L_804B48F4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804B48F4
  c->r[4]=c->r[1]+0x00000018u; // 804B48F8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804B48FC
  c->r[3]=c->r[1]+0x0000001Cu; // 804B4900
  c->r[25]=0u+0x00000000u; // 804B4904
  W32(c->r[1]+0x00000018u,c->r[0]); // 804B4908
  c->lr=0x804B4910u; f_804B34BC(c); // 804B490C
  cmps(c,0,(int32_t)c->r[3],0); // 804B4910
  if (crb(c,2)) { goto L_804B4924; } // 804B4914
  cmps(c,0,(int32_t)c->r[31],0); // 804B4918
  if (crb(c,2)) { goto L_804B4924; } // 804B491C
  c->r[25]=0u+0x00000001u; // 804B4920
L_804B4924:;
  c->r[31]=c->r[25]|c->r[25]; // 804B4924
  c->r[30]=c->r[30]+0x00000001u; // 804B4928
L_804B492C:;
  cmpu(c,0,c->r[30],c->r[26]); // 804B492C
  if (crb(c,0)) { IRQCHK(c); goto L_804B4878; } // 804B4930
  c->r[11]=c->r[1]+0x00000040u; // 804B4934
  c->r[3]=c->r[31]|c->r[31]; // 804B4938
  c->lr=0x804B4940u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B493C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B4940
  c->lr=c->r[0]; // 804B4944
  c->r[1]=c->r[1]+0x00000040u; // 804B4948
  return; // 804B494C
}

// GetAnmResult__Q34nw4r3g3d9ResAnmShpCFPQ34nw4r3g3d12ShpAnmResultUlfPCQ34nw4r3g3d12ShpAnmVtxSet
void f_804B4950(Ctx* __restrict c) {
  trace_call(0x804B4950u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4950
  c->r[0]=c->lr; // 804B4954
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B4958
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B495C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B4960
  c->r[11]=c->r[1]+0x00000030u; // 804B4964
  c->lr=0x804B496Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B4968
  c->r[3]=R32(c->r[3]+0x00000000u); // 804B496C
  c->f[31]=c->f[1]; // 804B4970
  c->r[23]=c->r[4]|c->r[4]; // 804B4974
  c->r[24]=c->r[6]|c->r[6]; // 804B4978
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B497C
  cmps(c,0,(int32_t)c->r[0],0); // 804B4980
  if (crb(c,2)) { goto L_804B4990; } // 804B4984
  c->r[0]=c->r[3]+c->r[0]; // 804B4988
  goto L_804B4994; // 804B498C
L_804B4990:;
  c->r[0]=0u+0x00000000u; // 804B4990
L_804B4994:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B4994
  if (crb(c,2)) { goto L_804B49C4; } // 804B4998
  c->r[3]=c->r[5]+0x00000001u; // 804B499C
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 804B49A0
  c->r[3]=c->r[0]+c->r[3]; // 804B49A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 804B49A8
  cmps(c,0,(int32_t)c->r[3],0); // 804B49AC
  if (crb(c,2)) { goto L_804B49BC; } // 804B49B0
  c->r[31]=c->r[0]+c->r[3]; // 804B49B4
  goto L_804B49C8; // 804B49B8
L_804B49BC:;
  c->r[31]=0u+0x00000000u; // 804B49BC
  goto L_804B49C8; // 804B49C0
L_804B49C4:;
  c->r[31]=0u+0x00000000u; // 804B49C4
L_804B49C8:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 804B49C8
  c->r[28]=c->r[31]|c->r[31]; // 804B49CC
  c->r[26]=R32(c->r[31]+0x0000000Cu); // 804B49D0
  c->r[30]=c->r[4]+0x00000018u; // 804B49D4
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B49D8
  c->r[29]=c->r[3]+c->r[31]; // 804B49DC
  {uint32_t ea=c->r[2]+0x00001540u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B49E0
  c->r[27]=c->r[31]+0x00000014u; // 804B49E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B49E8
  c->r[25]=0u+0x00000000u; // 804B49EC
  c->r[0]=R16(c->r[31]+0x0000000Au); // 804B49F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 804B49F4
  c->r[0]=R16(c->r[31]+0x00000008u); // 804B49F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804B49FC
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 804B4A00
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 804B4A04
  c->r[3]=R32(c->r[6]+0x00000004u); // 804B4A08
  c->r[0]=R32(c->r[6]+0x00000008u); // 804B4A0C
  W32(c->r[4]+0x00000008u,c->r[5]); // 804B4A10
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 804B4A14
  W32(c->r[4]+0x00000010u,c->r[0]); // 804B4A18
  goto L_804B4A8C; // 804B4A1C
L_804B4A20:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 804B4A20
  c->r[22]=R16(c->r[29]+0x00000000u); // 804B4A24
  if (crb(c,2)) { goto L_804B4A34; } // 804B4A28
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B4A2C
  goto L_804B4A44; // 804B4A30
L_804B4A34:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804B4A34
  c->f[1]=c->f[31]; // 804B4A38
  c->r[3]=c->r[27]+c->r[0]; // 804B4A3C
  c->lr=0x804B4A44u; f_804B0B24(c); // 804B4A40
L_804B4A44:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)12); // 804B4A44
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 804B4A48
  c->r[29]=c->r[29]+0x00000002u; // 804B4A4C
  c->r[28]=c->r[28]+0x00000004u; // 804B4A50
  c->r[4]=c->r[24]+c->r[0]; // 804B4A54
  c->r[0]=R32(c->r[24]+c->r[0]); // 804B4A58
  c->r[3]=R32(c->r[4]+0x00000004u); // 804B4A5C
  c->r[27]=c->r[27]+0x00000004u; // 804B4A60
  W32(c->r[30]+0x00000000u,c->r[0]); // 804B4A64
  c->r[25]=c->r[25]+0x00000001u; // 804B4A68
  c->r[0]=R32(c->r[4]+0x00000008u); // 804B4A6C
  W32(c->r[30]+0x00000004u,c->r[3]); // 804B4A70
  W32(c->r[30]+0x00000008u,c->r[0]); // 804B4A74
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B4A78
  c->r[30]=c->r[30]+0x00000010u; // 804B4A7C
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B4A80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804B4A84
  {uint32_t ea=c->r[23]+0x00000014u; WF32(ea,c->f[0]);} // 804B4A88
L_804B4A8C:;
  c->r[0]=R16(c->r[31]+0x0000000Au); // 804B4A8C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 804B4A90
  if (crb(c,0)) { IRQCHK(c); goto L_804B4A20; } // 804B4A94
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B4A98
  c->r[11]=c->r[1]+0x00000030u; // 804B4A9C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B4AA0
  c->lr=0x804B4AA8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B4AA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B4AA8
  c->lr=c->r[0]; // 804B4AAC
  c->r[1]=c->r[1]+0x00000040u; // 804B4AB0
  return; // 804B4AB4
}

// CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_804B4AB8(Ctx* __restrict c) {
  trace_call(0x804B4AB8u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,0);} // 804B4AB8
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 804B4ABC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,1,0);} // 804B4AC0
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4AC4
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,0,0);} // 804B4AC8
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,1,0);} // 804B4ACC
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4AD0
  {uint32_t ea=c->r[4]+0x00000024u; psq_load(c,5,ea,0,0);} // 804B4AD4
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4AD8
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4ADC
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4AE0
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 804B4AE4
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4AE8
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 804B4AEC
  c->r[12]=0u+0x80870000u; // 804B4AF0
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 804B4AF4
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4AF8
  c->r[12]=c->r[12]+0x00003788u; // 804B4AFC
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4B00
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4B04
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 804B4B08
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4B0C
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4B10
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 804B4B14
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 804B4B18
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4B1C
  fcmp(c,0,c->f[8],c->f[6]); // 804B4B20
  if (!crb(c,0)) { goto L_804B4B48; } // 804B4B24
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,0);} // 804B4B28
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,2,ea,1,0);} // 804B4B2C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,1,0);} // 804B4B30
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,1,ea,0,0);} // 804B4B34
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 804B4B38
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,5,ea,0,0);} // 804B4B3C
  c->r[3]=0u+0x00000000u; // 804B4B40
  return; // 804B4B44
L_804B4B48:;
  c->f[5]=c->ps1[5]=fres(c->f[7]); // 804B4B48
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4B4C
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4B50
  {double t0=S(c->f[5]+c->f[5]), t1=S(c->ps1[5]+c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804B4B54
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 804B4B58
  {double t0=S(c->f[7]*c->f[5]), t1=S(c->ps1[7]*c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 804B4B5C
  {double t0=S(-std::fma(c->f[5],c->f[2],-c->f[1])), t1=S(-std::fma(c->ps1[5],c->ps1[2],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 804B4B60
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4B64
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4B68
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 804B4B6C
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4B70
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,12,ea,0,0);} // 804B4B74
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4B78
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,11,ea,0,0);} // 804B4B7C
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4B80
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,10,ea,1,0);} // 804B4B84
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4B88
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,9,ea,1,0);} // 804B4B8C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,8,ea,1,0);} // 804B4B90
  c->r[3]=0u+0x00000001u; // 804B4B94
  return; // 804B4B98
}

// CalcViewTexMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_804B4B9C(Ctx* __restrict c) {
  trace_call(0x804B4B9Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,0);} // 804B4B9C
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 804B4BA0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,1,0);} // 804B4BA4
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4BA8
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,0,0);} // 804B4BAC
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,1,0);} // 804B4BB0
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4BB4
  {uint32_t ea=c->r[4]+0x00000024u; psq_load(c,5,ea,0,0);} // 804B4BB8
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4BBC
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4BC0
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4BC4
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 804B4BC8
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4BCC
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 804B4BD0
  c->r[12]=0u+0x80870000u; // 804B4BD4
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 804B4BD8
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4BDC
  c->r[12]=c->r[12]+0x00003788u; // 804B4BE0
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4BE4
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4BE8
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 804B4BEC
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4BF0
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4BF4
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 804B4BF8
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 804B4BFC
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4C00
  fcmp(c,0,c->f[8],c->f[6]); // 804B4C04
  if (!crb(c,0)) { goto L_804B4C44; } // 804B4C08
  cmpu(c,0,c->r[3],c->r[4]); // 804B4C0C
  if (crb(c,2)) { goto L_804B4C3C; } // 804B4C10
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,0);} // 804B4C14
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,1,0);} // 804B4C18
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,1,0);} // 804B4C1C
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4C20
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,1,ea,0,0);} // 804B4C24
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,3,ea,0,0);} // 804B4C28
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,5,ea,0,0);} // 804B4C2C
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,6,ea,1,0);} // 804B4C30
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,6,ea,1,0);} // 804B4C34
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,6,ea,1,0);} // 804B4C38
L_804B4C3C:;
  c->r[3]=0u+0x00000000u; // 804B4C3C
  return; // 804B4C40
L_804B4C44:;
  c->f[5]=c->ps1[5]=fres(c->f[7]); // 804B4C44
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4C48
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4C4C
  {double t0=S(c->f[5]+c->f[5]), t1=S(c->ps1[5]+c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804B4C50
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 804B4C54
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,6,ea,1,0);} // 804B4C58
  {double t0=S(c->f[7]*c->f[5]), t1=S(c->ps1[7]*c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 804B4C5C
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,6,ea,1,0);} // 804B4C60
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,6,ea,1,0);} // 804B4C64
  {double t0=S(-std::fma(c->f[5],c->f[2],-c->f[1])), t1=S(-std::fma(c->ps1[5],c->ps1[2],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 804B4C68
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4C6C
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4C70
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 804B4C74
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4C78
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,12,ea,0,0);} // 804B4C7C
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4C80
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,11,ea,0,0);} // 804B4C84
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4C88
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,10,ea,1,0);} // 804B4C8C
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4C90
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,9,ea,1,0);} // 804B4C94
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,8,ea,1,0);} // 804B4C98
  c->r[3]=0u+0x00000001u; // 804B4C9C
  return; // 804B4CA0
}

// CalcInvWorldMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_804B4CA4(Ctx* __restrict c) {
  trace_call(0x804B4CA4u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,0);} // 804B4CA4
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 804B4CA8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,1,0);} // 804B4CAC
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4CB0
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,0,0);} // 804B4CB4
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,1,0);} // 804B4CB8
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4CBC
  {uint32_t ea=c->r[4]+0x00000024u; psq_load(c,5,ea,0,0);} // 804B4CC0
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4CC4
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4CC8
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4CCC
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 804B4CD0
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4CD4
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 804B4CD8
  c->r[12]=0u+0x80870000u; // 804B4CDC
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 804B4CE0
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4CE4
  c->r[12]=c->r[12]+0x00003788u; // 804B4CE8
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4CEC
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4CF0
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 804B4CF4
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4CF8
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4CFC
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 804B4D00
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 804B4D04
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4D08
  fcmp(c,0,c->f[8],c->f[6]); // 804B4D0C
  if (!crb(c,0)) { goto L_804B4D1C; } // 804B4D10
  c->r[3]=0u+0x00000000u; // 804B4D14
  return; // 804B4D18
L_804B4D1C:;
  c->f[6]=c->ps1[6]=fres(c->f[7]); // 804B4D1C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4D20
  {double t0=S(c->f[6]+c->f[6]), t1=S(c->ps1[6]+c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804B4D24
  {double t0=S(c->f[7]*c->f[6]), t1=S(c->ps1[7]*c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 804B4D28
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 804B4D2C
  {double t0=S(-std::fma(c->f[6],c->f[4],-c->f[5])), t1=S(-std::fma(c->ps1[6],c->ps1[4],-c->ps1[5])); c->f[0]=t0; c->ps1[0]=t1;} // 804B4D30
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B4D34
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 804B4D38
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B4D3C
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 804B4D40
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804B4D44
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 804B4D48
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[5]=t0; c->ps1[5]=t1;} // 804B4D4C
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 804B4D50
  {double t0=S(c->f[13]*c->f[1]), t1=S(c->ps1[13]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 804B4D54
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,5,ea,0,0);} // 804B4D58
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 804B4D5C
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 804B4D60
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 804B4D64
  {double t0=S(std::fma(c->f[12],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[12],c->ps1[2],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 804B4D68
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,10,ea,1,0);} // 804B4D6C
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804B4D70
  {double t0=S(-std::fma(c->f[11],c->f[3],c->f[6])), t1=S(-std::fma(c->ps1[11],c->ps1[3],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 804B4D74
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,9,ea,1,0);} // 804B4D78
  {double t0=S(c->f[10]*c->f[1]), t1=S(c->ps1[10]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 804B4D7C
  {double t0=S(c->f[11]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804B4D80
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,8,ea,1,0);} // 804B4D84
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[7])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4D88
  {double t0=S(c->ps1[11]), t1=S(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 804B4D8C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,5,ea,0,0);} // 804B4D90
  {double t0=S(-std::fma(c->f[8],c->f[3],c->f[7])), t1=S(-std::fma(c->ps1[8],c->ps1[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 804B4D94
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,0,0);} // 804B4D98
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 804B4D9C
  c->r[3]=0u+0x00000001u; // 804B4DA0
  return; // 804B4DA4
}

// fn_804B4DA8
void f_804B4DA8(Ctx* __restrict c) {
  trace_call(0x804B4DA8u);
  c->r[4]=0u+0x00010000u; // 804B4DA8
  c->r[7]=0u+0x00000000u; // 804B4DAC
  c->r[5]=c->r[4]+0xFFFF8000u; // 804B4DB0
  c->r[6]=0u+0x00000000u; // 804B4DB4
  goto L_804B4DCC; // 804B4DB8
L_804B4DBC:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B4DBC
  c->r[7]=c->r[7]+0x00000001u; // 804B4DC0
  W16(c->r[4]+c->r[6],c->r[5]); // 804B4DC4
  c->r[6]=c->r[6]+0x00000002u; // 804B4DC8
L_804B4DCC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B4DCC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B4DD0
  if (crb(c,0)) { IRQCHK(c); goto L_804B4DBC; } // 804B4DD4
  c->r[4]=0u+0x00000004u; // 804B4DD8
  c->r[5]=0u+0x00000000u; // 804B4DDC
  f_804BDBC0(c); return; // 804B4DE0
}

// fn_804B4DE4
void f_804B4DE4(Ctx* __restrict c) {
  trace_call(0x804B4DE4u);
  c->r[3]=0u+0x00000000u; // 804B4DE4
  return; // 804B4DE8
}

// fn_804B4DEC
void f_804B4DEC(Ctx* __restrict c) {
  trace_call(0x804B4DECu);
  c->r[3]=0u+0x00000000u; // 804B4DEC
  return; // 804B4DF0
}

// fn_804B4DF4
void f_804B4DF4(Ctx* __restrict c) {
  trace_call(0x804B4DF4u);
  c->r[5]=0u+0x00010000u; // 804B4DF4
  c->r[0]=c->r[5]+0x00000002u; // 804B4DF8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B4DFC
  if (crb(c,2)) { goto L_804B4E3C; } // 804B4E00
  if (!crb(c,0)) { goto L_804B4E14; } // 804B4E04
  cmps(c,0,(int32_t)c->r[4],8); // 804B4E08
  if (crb(c,2)) { goto L_804B4E24; } // 804B4E0C
  return; // 804B4E10
L_804B4E14:;
  c->r[0]=c->r[5]+0x00000004u; // 804B4E14
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B4E18
  if (!crb(c,0)) return; // 804B4E1C
  goto L_804B4E30; // 804B4E20
L_804B4E24:;
  c->r[4]=0u+0x00000002u; // 804B4E24
  c->r[5]=0u+0x00000001u; // 804B4E28
  f_804BDBC0(c); return; // 804B4E2C
L_804B4E30:;
  c->r[0]=0u+0x00000000u; // 804B4E30
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B4E34
  return; // 804B4E38
L_804B4E3C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B4E3C
  return; // 804B4E40
}

// fn_804B4E44
void f_804B4E44(Ctx* __restrict c) {
  trace_call(0x804B4E44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4E44
  c->r[0]=c->lr; // 804B4E48
  cmps(c,0,(int32_t)c->r[3],0); // 804B4E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B4E50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B4E54
  c->r[31]=c->r[3]|c->r[3]; // 804B4E58
  if (crb(c,2)) { goto L_804B4E6C; } // 804B4E5C
  if (crb(c,2)) { goto L_804B4E6C; } // 804B4E60
  c->r[4]=0u+0x00000000u; // 804B4E64
  c->lr=0x804B4E6Cu; f_804BD9F0(c); // 804B4E68
L_804B4E6C:;
  c->r[3]=c->r[31]|c->r[31]; // 804B4E6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B4E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B4E74
  c->lr=c->r[0]; // 804B4E78
  c->r[1]=c->r[1]+0x00000010u; // 804B4E7C
  return; // 804B4E80
}

// Construct__Q34nw4r3g3d12AnmObjVisResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmVisQ34nw4r3g3d6ResMdl
void f_804B4E84(Ctx* __restrict c) {
  trace_call(0x804B4E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4E84
  c->r[0]=c->lr; // 804B4E88
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B4E8C
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B4E90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B4E94
  c->r[31]=c->r[5]|c->r[5]; // 804B4E98
  cmps(c,0,(int32_t)c->r[0],0); // 804B4E9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B4EA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B4EA4
  c->r[29]=c->r[4]|c->r[4]; // 804B4EA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B4EAC
  c->r[28]=c->r[3]|c->r[3]; // 804B4EB0
  if (crb(c,2)) { goto L_804B4EC4; } // 804B4EB4
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B4EB8
  cmps(c,0,(int32_t)c->r[0],0); // 804B4EBC
  if (!crb(c,2)) { goto L_804B4ECC; } // 804B4EC0
L_804B4EC4:;
  c->r[3]=0u+0x00000000u; // 804B4EC4
  goto L_804B4FB4; // 804B4EC8
L_804B4ECC:;
  c->r[3]=c->r[6]|c->r[6]; // 804B4ECC
  c->lr=0x804B4ED4u; f_804AC500(c); // 804B4ED0
  cmps(c,0,(int32_t)c->r[29],0); // 804B4ED4
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B4ED8
  c->r[30]=c->r[3]|c->r[3]; // 804B4EDC
  c->r[4]=c->r[4]+0x00000030u; // 804B4EE0
  if (crb(c,2)) { goto L_804B4EEC; } // 804B4EE4
  W32(c->r[29]+0x00000000u,c->r[4]); // 804B4EE8
L_804B4EEC:;
  cmps(c,0,(int32_t)c->r[28],0); // 804B4EEC
  if (!crb(c,2)) { goto L_804B4EFC; } // 804B4EF0
  c->r[3]=0u+0x00000000u; // 804B4EF4
  goto L_804B4FB4; // 804B4EF8
L_804B4EFC:;
  c->r[3]=c->r[28]|c->r[28]; // 804B4EFC
  c->lr=0x804B4F04u; f_803C4D08(c); // 804B4F00
  cmps(c,0,(int32_t)c->r[3],0); // 804B4F04
  c->r[29]=c->r[3]|c->r[3]; // 804B4F08
  if (!crb(c,2)) { goto L_804B4F18; } // 804B4F0C
  c->r[3]=0u+0x00000000u; // 804B4F10
  goto L_804B4FB4; // 804B4F14
L_804B4F18:;
  c->r[4]=c->r[3]+0x00000030u; // 804B4F18
  if (crb(c,2)) { goto L_804B4FB0; } // 804B4F1C
  c->r[0]=0u+0x00000000u; // 804B4F20
  c->r[12]=0u+0x80720000u; // 804B4F24
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B4F28
  c->r[12]=c->r[12]+0xFFFF9CA4u; // 804B4F2C
  c->r[31]=R32(c->r[31]+0x00000000u); // 804B4F30
  W32(c->r[3]+0x00000008u,c->r[28]); // 804B4F34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B4F38
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B4F3C
  W32(c->r[3]+0x00000010u,c->r[30]); // 804B4F40
  W32(c->r[3]+0x00000014u,c->r[4]); // 804B4F44
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B4F48
  c->ctr=c->r[12]; // 804B4F4C
  if (true) { c->lr=0x804B4F54u; dispatch(c,c->ctr); } // 804B4F50
  c->r[4]=R16(c->r[31]+0x00000020u); // 804B4F54
  c->r[0]=0u+0x43300000u; // 804B4F58
  c->r[5]=R32(c->r[31]+0x00000024u); // 804B4F5C
  c->r[3]=0u+0x80720000u; // 804B4F60
  c->r[4]=c->r[4]^0x80000000u; // 804B4F64
  {uint32_t ea=c->r[2]+0x00001550u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B4F68
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804B4F6C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B4F70
  {uint32_t ea=c->r[2]+0x00001554u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B4F74
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B4F78
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B4F7C
  c->r[3]=c->r[3]+0xFFFF9C60u; // 804B4F80
  {uint32_t ea=c->r[2]+0x00001558u; c->f[3]=RF64(ea);} // 804B4F84
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B4F88
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804B4F8C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B4F90
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804B4F94
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B4F98
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 804B4F9C
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 804B4FA0
  W32(c->r[29]+0x00000028u,c->r[0]); // 804B4FA4
  W32(c->r[29]+0x00000000u,c->r[3]); // 804B4FA8
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 804B4FAC
L_804B4FB0:;
  c->r[3]=c->r[29]|c->r[29]; // 804B4FB0
L_804B4FB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B4FB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B4FB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B4FBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B4FC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B4FC4
  c->lr=c->r[0]; // 804B4FC8
  c->r[1]=c->r[1]+0x00000020u; // 804B4FCC
  return; // 804B4FD0
}

// SetFrame__Q34nw4r3g3d12AnmObjVisResFf
void f_804B4FD4(Ctx* __restrict c) {
  trace_call(0x804B4FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B4FD4
  c->r[0]=c->lr; // 804B4FD8
  c->f[3]=c->f[1]; // 804B4FDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B4FE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B4FE4
  c->r[31]=c->r[3]|c->r[3]; // 804B4FE8
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B4FEC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B4FF0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B4FF4
  c->ctr=c->r[12]; // 804B4FF8
  if (true) { c->lr=0x804B5000u; dispatch(c,c->ctr); } // 804B4FFC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B5000
  c->r[3]=c->r[31]|c->r[31]; // 804B5004
  c->r[4]=0u+0x00000008u; // 804B5008
  c->r[5]=0u+0x00000000u; // 804B500C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804B5010
  c->r[6]=0u+0x00000000u; // 804B5014
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B5018
  c->ctr=c->r[12]; // 804B501C
  if (true) { c->lr=0x804B5024u; dispatch(c,c->ctr); } // 804B5020
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B5024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B5028
  c->lr=c->r[0]; // 804B502C
  c->r[1]=c->r[1]+0x00000010u; // 804B5030
  return; // 804B5034
}

// fn_804B5038
void f_804B5038(Ctx* __restrict c) {
  trace_call(0x804B5038u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5038
  return; // 804B503C
}

// fn_804B5040
void f_804B5040(Ctx* __restrict c) {
  trace_call(0x804B5040u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B5040
  return; // 804B5044
}

// fn_804B5048
void f_804B5048(Ctx* __restrict c) {
  trace_call(0x804B5048u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5048
  return; // 804B504C
}

// UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv
void f_804B5050(Ctx* __restrict c) {
  trace_call(0x804B5050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5050
  c->r[0]=c->lr; // 804B5054
  {uint32_t ea=c->r[2]+0x00001550u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B5058
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B505C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B5060
  c->r[31]=c->r[3]|c->r[3]; // 804B5064
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5068
  fcmp(c,0,c->f[0],c->f[1]); // 804B506C
  if (crb(c,2)) { goto L_804B50C0; } // 804B5070
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B5074
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5078
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B507C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804B5080
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B5084
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5088
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B508C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804B5090
  c->ctr=c->r[12]; // 804B5094
  if (true) { c->lr=0x804B509Cu; dispatch(c,c->ctr); } // 804B5098
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B509C
  c->r[3]=c->r[31]|c->r[31]; // 804B50A0
  c->r[4]=0u+0x00000008u; // 804B50A4
  c->r[5]=0u+0x00000000u; // 804B50A8
  c->r[12]=R32(c->r[31]+0x00000000u); // 804B50AC
  c->r[6]=0u+0x00000000u; // 804B50B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B50B4
  c->ctr=c->r[12]; // 804B50B8
  if (true) { c->lr=0x804B50C0u; dispatch(c,c->ctr); } // 804B50BC
L_804B50C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B50C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B50C4
  c->lr=c->r[0]; // 804B50C8
  c->r[1]=c->r[1]+0x00000010u; // 804B50CC
  return; // 804B50D0
}

// fn_804B50D4
void f_804B50D4(Ctx* __restrict c) {
  trace_call(0x804B50D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B50D4
  c->r[0]=c->lr; // 804B50D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B50DC
  c->r[11]=c->r[1]+0x00000030u; // 804B50E0
  c->lr=0x804B50E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B50E4
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804B50E8
  c->r[27]=c->r[3]|c->r[3]; // 804B50EC
  c->r[28]=c->r[4]|c->r[4]; // 804B50F0
  c->r[30]=0u+0x00000000u; // 804B50F4
  c->r[31]=R16(c->r[5]+0x00000022u); // 804B50F8
  c->r[29]=0u+0x00000000u; // 804B50FC
  cmps(c,0,(int32_t)c->r[31],0); // 804B5100
  if (!crb(c,1)) { goto L_804B51AC; } // 804B5104
  goto L_804B51A0; // 804B5108
L_804B510C:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 804B510C
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B5110
  cmps(c,0,(int32_t)c->r[0],0); // 804B5114
  if (crb(c,2)) { goto L_804B5124; } // 804B5118
  c->r[0]=c->r[3]+c->r[0]; // 804B511C
  goto L_804B5128; // 804B5120
L_804B5124:;
  c->r[0]=0u+0x00000000u; // 804B5124
L_804B5128:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B5128
  if (crb(c,2)) { goto L_804B5154; } // 804B512C
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 804B5130
  c->r[3]=c->r[0]+c->r[3]; // 804B5134
  c->r[3]=R32(c->r[3]+0x00000024u); // 804B5138
  cmps(c,0,(int32_t)c->r[3],0); // 804B513C
  if (crb(c,2)) { goto L_804B514C; } // 804B5140
  c->r[5]=c->r[0]+c->r[3]; // 804B5144
  goto L_804B5158; // 804B5148
L_804B514C:;
  c->r[5]=0u+0x00000000u; // 804B514C
  goto L_804B5158; // 804B5150
L_804B5154:;
  c->r[5]=0u+0x00000000u; // 804B5154
L_804B5158:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B5158
  c->r[3]=c->r[28]|c->r[28]; // 804B515C
  c->r[4]=c->r[1]+0x00000008u; // 804B5160
  c->r[5]=c->r[0]+c->r[5]; // 804B5164
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B5168
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B516C
  c->lr=0x804B5174u; f_804AC408(c); // 804B5170
  cmps(c,0,(int32_t)c->r[3],0); // 804B5174
  if (crb(c,2)) { goto L_804B519C; } // 804B5178
  c->r[4]=R32(c->r[27]+0x00000014u); // 804B517C
  if (crb(c,2)) { goto L_804B518C; } // 804B5180
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B5184
  goto L_804B5190; // 804B5188
L_804B518C:;
  c->r[0]=0u+0x00000000u; // 804B518C
L_804B5190:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804B5190
  c->r[30]=0u+0x00000001u; // 804B5194
  W16(c->r[4]+c->r[0],c->r[29]); // 804B5198
L_804B519C:;
  c->r[29]=c->r[29]+0x00000001u; // 804B519C
L_804B51A0:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804B51A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 804B51A4
  if (crb(c,0)) { IRQCHK(c); goto L_804B510C; } // 804B51A8
L_804B51AC:;
  c->r[3]=c->r[27]|c->r[27]; // 804B51AC
  c->r[4]=0u+0x00000004u; // 804B51B0
  c->r[5]=0u+0x00000001u; // 804B51B4
  c->lr=0x804B51BCu; f_804BDBC0(c); // 804B51B8
  c->r[11]=c->r[1]+0x00000030u; // 804B51BC
  c->r[3]=c->r[30]|c->r[30]; // 804B51C0
  c->lr=0x804B51C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B51C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B51C8
  c->lr=c->r[0]; // 804B51CC
  c->r[1]=c->r[1]+0x00000030u; // 804B51D0
  return; // 804B51D4
}

// GetResult__Q34nw4r3g3d12AnmObjVisResFUl
void f_804B51D8(Ctx* __restrict c) {
  trace_call(0x804B51D8u);
  c->r[5]=R32(c->r[3]+0x00000014u); // 804B51D8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804B51DC
  c->r[4]=R16(c->r[5]+c->r[0]); // 804B51E0
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 804B51E4
  if (!crb(c,2)) { goto L_804B51F4; } // 804B51E8
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 804B51EC
  if (crb(c,2)) { goto L_804B51FC; } // 804B51F0
L_804B51F4:;
  c->r[3]=0u+0x00000001u; // 804B51F4
  return; // 804B51F8
L_804B51FC:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B51FC
  c->r[3]=c->r[3]+0x0000002Cu; // 804B5200
  f_804B0D50(c); return; // 804B5204
  return; // 804B5208
}

// ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_804B520C(Ctx* __restrict c) {
  trace_call(0x804B520Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B520C
  c->r[0]=c->lr; // 804B5210
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B5214
  c->r[11]=c->r[1]+0x00000020u; // 804B5218
  c->lr=0x804B5220u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B521C
  c->r[26]=c->r[3]|c->r[3]; // 804B5220
  c->r[27]=c->r[4]|c->r[4]; // 804B5224
  c->lr=0x804B522Cu; f_804AC500(c); // 804B5228
  c->r[30]=c->r[3]|c->r[3]; // 804B522C
  c->r[28]=0u+0x00000000u; // 804B5230
  c->r[29]=0u+0x00000000u; // 804B5234
  goto L_804B52A8; // 804B5238
L_804B523C:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B523C
  c->r[0]=R16(c->r[3]+c->r[29]); // 804B5240
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B5244
  if (!crb(c,2)) { goto L_804B52A0; } // 804B5248
  c->r[3]=c->r[26]|c->r[26]; // 804B524C
  c->r[4]=c->r[28]|c->r[28]; // 804B5250
  c->lr=0x804B5258u; f_804AC4AC(c); // 804B5254
  c->r[12]=R32(c->r[27]+0x00000000u); // 804B5258
  c->r[31]=c->r[3]|c->r[3]; // 804B525C
  c->r[3]=c->r[27]|c->r[27]; // 804B5260
  c->r[4]=c->r[28]|c->r[28]; // 804B5264
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B5268
  c->ctr=c->r[12]; // 804B526C
  if (true) { c->lr=0x804B5274u; dispatch(c,c->ctr); } // 804B5270
  cmps(c,0,(int32_t)c->r[31],0); // 804B5274
  if (crb(c,2)) { goto L_804B52A0; } // 804B5278
  cmps(c,0,(int32_t)c->r[3],0); // 804B527C
  if (crb(c,2)) { goto L_804B5294; } // 804B5280
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B5284
  c->r[0]=c->r[0]|0x00000100u; // 804B5288
  W32(c->r[31]+0x00000014u,c->r[0]); // 804B528C
  goto L_804B52A0; // 804B5290
L_804B5294:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 804B5294
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 804B5298
  W32(c->r[31]+0x00000014u,c->r[0]); // 804B529C
L_804B52A0:;
  c->r[29]=c->r[29]+0x00000002u; // 804B52A0
  c->r[28]=c->r[28]+0x00000001u; // 804B52A4
L_804B52A8:;
  cmpu(c,0,c->r[28],c->r[30]); // 804B52A8
  if (crb(c,0)) { IRQCHK(c); goto L_804B523C; } // 804B52AC
  c->r[11]=c->r[1]+0x00000020u; // 804B52B0
  c->lr=0x804B52B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B52B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B52B8
  c->lr=c->r[0]; // 804B52BC
  c->r[1]=c->r[1]+0x00000020u; // 804B52C0
  return; // 804B52C4
}

// ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_804B52C8(Ctx* __restrict c) {
  trace_call(0x804B52C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B52C8
  c->r[0]=c->lr; // 804B52CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B52D0
  c->r[11]=c->r[1]+0x00000020u; // 804B52D4
  c->lr=0x804B52DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B52D8
  c->r[27]=c->r[3]|c->r[3]; // 804B52DC
  c->r[3]=c->r[4]|c->r[4]; // 804B52E0
  c->r[28]=c->r[5]|c->r[5]; // 804B52E4
  c->lr=0x804B52ECu; f_804AC500(c); // 804B52E8
  c->r[31]=c->r[3]|c->r[3]; // 804B52EC
  c->r[29]=0u+0x00000000u; // 804B52F0
  c->r[30]=0u+0x00000000u; // 804B52F4
  goto L_804B5334; // 804B52F8
L_804B52FC:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 804B52FC
  c->r[0]=R16(c->r[3]+c->r[30]); // 804B5300
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B5304
  if (!crb(c,2)) { goto L_804B5328; } // 804B5308
  c->r[12]=R32(c->r[28]+0x00000000u); // 804B530C
  c->r[3]=c->r[28]|c->r[28]; // 804B5310
  c->r[4]=c->r[29]|c->r[29]; // 804B5314
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B5318
  c->ctr=c->r[12]; // 804B531C
  if (true) { c->lr=0x804B5324u; dispatch(c,c->ctr); } // 804B5320
  W8(c->r[27]+0x00000000u,c->r[3]); // 804B5324
L_804B5328:;
  c->r[30]=c->r[30]+0x00000002u; // 804B5328
  c->r[29]=c->r[29]+0x00000001u; // 804B532C
  c->r[27]=c->r[27]+0x00000001u; // 804B5330
L_804B5334:;
  cmpu(c,0,c->r[29],c->r[31]); // 804B5334
  if (crb(c,0)) { IRQCHK(c); goto L_804B52FC; } // 804B5338
  c->r[11]=c->r[1]+0x00000020u; // 804B533C
  c->lr=0x804B5344u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B5340
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B5344
  c->lr=c->r[0]; // 804B5348
  c->r[1]=c->r[1]+0x00000020u; // 804B534C
  return; // 804B5350
}

// fn_804B5354
void f_804B5354(Ctx* __restrict c) {
  trace_call(0x804B5354u);
  c->r[3]=0u+0x806B0000u; // 804B5354
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B5358
  c->r[3]=c->r[3]+0xFFFFBB98u; // 804B535C
  cmpu(c,0,c->r[0],c->r[3]); // 804B5360
  if (!crb(c,2)) { goto L_804B5370; } // 804B5364
  c->r[3]=0u+0x00000001u; // 804B5368
  return; // 804B536C
L_804B5370:;
  c->r[3]=0u+0x806B0000u; // 804B5370
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B5374
  c->r[3]=c->r[3]+0xFFFFBB88u; // 804B5378
  cmpu(c,0,c->r[0],c->r[3]); // 804B537C
  if (!crb(c,2)) { goto L_804B538C; } // 804B5380
  c->r[3]=0u+0x00000001u; // 804B5384
  return; // 804B5388
L_804B538C:;
  c->r[3]=0u+0x806B0000u; // 804B538C
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B5390
  cmpu(c,0,c->r[0],c->r[3]); // 804B5394
  if (!crb(c,2)) { goto L_804B53A4; } // 804B5398
  c->r[3]=0u+0x00000001u; // 804B539C
  return; // 804B53A0
L_804B53A4:;
  c->r[3]=0u+0x806B0000u; // 804B53A4
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B53A8
  c->r[0]=c->r[3]-c->r[0]; // 804B53AC
  c->r[0]=cntlz(c->r[0]); // 804B53B0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B53B4
  return; // 804B53B8
}

// fn_804B53BC
void f_804B53BC(Ctx* __restrict c) {
  trace_call(0x804B53BCu);
  c->r[3]=0u+0x806B0000u; // 804B53BC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B53C0
  c->r[3]=c->r[3]+0xFFFFBB88u; // 804B53C4
  cmpu(c,0,c->r[0],c->r[3]); // 804B53C8
  if (!crb(c,2)) { goto L_804B53D8; } // 804B53CC
  c->r[3]=0u+0x00000001u; // 804B53D0
  return; // 804B53D4
L_804B53D8:;
  c->r[3]=0u+0x806B0000u; // 804B53D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B53DC
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B53E0
  cmpu(c,0,c->r[0],c->r[3]); // 804B53E4
  if (!crb(c,2)) { goto L_804B53F4; } // 804B53E8
  c->r[3]=0u+0x00000001u; // 804B53EC
  return; // 804B53F0
L_804B53F4:;
  c->r[3]=0u+0x806B0000u; // 804B53F4
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B53F8
  c->r[0]=c->r[3]-c->r[0]; // 804B53FC
  c->r[0]=cntlz(c->r[0]); // 804B5400
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B5404
  return; // 804B5408
}

// fn_804B540C
void f_804B540C(Ctx* __restrict c) {
  trace_call(0x804B540Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B540C
  c->r[0]=c->lr; // 804B5410
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B5414
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B5418
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B541C
  c->ctr=c->r[12]; // 804B5420
  if (true) { c->lr=0x804B5428u; dispatch(c,c->ctr); } // 804B5424
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B5428
  c->r[3]=c->r[3]+0x00000004u; // 804B542C
  c->lr=c->r[0]; // 804B5430
  c->r[1]=c->r[1]+0x00000010u; // 804B5434
  return; // 804B5438
}

// fn_804B543C
void f_804B543C(Ctx* __restrict c) {
  trace_call(0x804B543Cu);
  c->r[3]=0u+0x806B0000u; // 804B543C
  c->r[3]=c->r[3]+0xFFFFBB98u; // 804B5440
  return; // 804B5444
}

// fn_804B5448
void f_804B5448(Ctx* __restrict c) {
  trace_call(0x804B5448u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5448
  c->r[0]=c->lr; // 804B544C
  cmps(c,0,(int32_t)c->r[3],0); // 804B5450
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B5454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B5458
  c->r[31]=c->r[3]|c->r[3]; // 804B545C
  if (crb(c,2)) { goto L_804B5474; } // 804B5460
  if (crb(c,2)) { goto L_804B5474; } // 804B5464
  if (crb(c,2)) { goto L_804B5474; } // 804B5468
  c->r[4]=0u+0x00000000u; // 804B546C
  c->lr=0x804B5474u; f_804BD9F0(c); // 804B5470
L_804B5474:;
  c->r[3]=c->r[31]|c->r[31]; // 804B5474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B5478
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B547C
  c->lr=c->r[0]; // 804B5480
  c->r[1]=c->r[1]+0x00000010u; // 804B5484
  return; // 804B5488
}

// fn_804B548C
void f_804B548C(Ctx* __restrict c) {
  trace_call(0x804B548Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B548C
  c->r[0]=c->lr; // 804B5490
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B5494
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B5498
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B549C
  c->ctr=c->r[12]; // 804B54A0
  if (true) { c->lr=0x804B54A8u; dispatch(c,c->ctr); } // 804B54A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B54A8
  c->r[3]=c->r[3]+0x00000004u; // 804B54AC
  c->lr=c->r[0]; // 804B54B0
  c->r[1]=c->r[1]+0x00000010u; // 804B54B4
  return; // 804B54B8
}

// fn_804B54BC
void f_804B54BC(Ctx* __restrict c) {
  trace_call(0x804B54BCu);
  c->r[3]=0u+0x806B0000u; // 804B54BC
  c->r[3]=c->r[3]+0xFFFFBB88u; // 804B54C0
  return; // 804B54C4
}

// TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
void f_804B54C8(Ctx* __restrict c) {
  trace_call(0x804B54C8u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804B54C8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804B54CC
  c->r[0]=R16(c->r[3]+c->r[0]); // 804B54D0
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 804B54D4
  c->r[0]=cntlz(c->r[0]); // 804B54D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B54DC
  return; // 804B54E0
}

// fn_804B54E4
void f_804B54E4(Ctx* __restrict c) {
  trace_call(0x804B54E4u);
  c->r[4]=0u+0x00010000u; // 804B54E4
  c->r[7]=0u+0x00000000u; // 804B54E8
  c->r[5]=c->r[4]+0xFFFF8000u; // 804B54EC
  c->r[6]=0u+0x00000000u; // 804B54F0
  goto L_804B5508; // 804B54F4
L_804B54F8:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B54F8
  c->r[7]=c->r[7]+0x00000001u; // 804B54FC
  W16(c->r[4]+c->r[6],c->r[5]); // 804B5500
  c->r[6]=c->r[6]+0x00000002u; // 804B5504
L_804B5508:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B5508
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B550C
  if (crb(c,0)) { IRQCHK(c); goto L_804B54F8; } // 804B5510
  c->r[4]=0u+0x00000004u; // 804B5514
  c->r[5]=0u+0x00000000u; // 804B5518
  f_804BDBC0(c); return; // 804B551C
}

// fn_804B5520
void f_804B5520(Ctx* __restrict c) {
  trace_call(0x804B5520u);
  c->r[3]=0u+0x00000000u; // 804B5520
  return; // 804B5524
}

// fn_804B5528
void f_804B5528(Ctx* __restrict c) {
  trace_call(0x804B5528u);
  c->r[3]=0u+0x00000000u; // 804B5528
  return; // 804B552C
}

// fn_804B5530
void f_804B5530(Ctx* __restrict c) {
  trace_call(0x804B5530u);
  return; // 804B5530
}

// fn_804B5534
void f_804B5534(Ctx* __restrict c) {
  trace_call(0x804B5534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5534
  c->r[0]=c->lr; // 804B5538
  cmps(c,0,(int32_t)c->r[3],0); // 804B553C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B5540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B5544
  c->r[31]=c->r[3]|c->r[3]; // 804B5548
  if (crb(c,2)) { goto L_804B555C; } // 804B554C
  if (crb(c,2)) { goto L_804B555C; } // 804B5550
  c->r[4]=0u+0x00000000u; // 804B5554
  c->lr=0x804B555Cu; f_804BD9F0(c); // 804B5558
L_804B555C:;
  c->r[3]=c->r[31]|c->r[31]; // 804B555C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B5560
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B5564
  c->lr=c->r[0]; // 804B5568
  c->r[1]=c->r[1]+0x00000010u; // 804B556C
  return; // 804B5570
}

// fn_804B5574
void f_804B5574(Ctx* __restrict c) {
  trace_call(0x804B5574u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5574
  c->r[0]=c->lr; // 804B5578
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B557C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B5580
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B5584
  c->r[11]=c->r[1]+0x00000030u; // 804B5588
  c->lr=0x804B5590u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B558C
  c->r[8]=R32(c->r[5]+0x00000000u); // 804B5590
  c->r[29]=c->r[3]|c->r[3]; // 804B5594
  c->r[25]=c->r[4]|c->r[4]; // 804B5598
  c->r[30]=c->r[5]|c->r[5]; // 804B559C
  cmps(c,0,(int32_t)c->r[8],0); // 804B55A0
  c->r[27]=c->r[7]|c->r[7]; // 804B55A4
  if (crb(c,2)) { goto L_804B55B8; } // 804B55A8
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B55AC
  cmps(c,0,(int32_t)c->r[0],0); // 804B55B0
  if (!crb(c,2)) { goto L_804B55C0; } // 804B55B4
L_804B55B8:;
  c->r[3]=0u+0x00000000u; // 804B55B8
  goto L_804B5744; // 804B55BC
L_804B55C0:;
  c->r[31]=R16(c->r[8]+0x00000022u); // 804B55C0
  c->r[3]=c->r[6]|c->r[6]; // 804B55C4
  c->lr=0x804B55CCu; f_804ACA9C(c); // 804B55C8
  c->r[0]=0u-c->r[27]; // 804B55CC
  c->r[28]=c->r[3]|c->r[3]; // 804B55D0
  c->r[4]=c->r[0]|c->r[27]; // 804B55D4
  cmps(c,0,(int32_t)c->r[25],0); // 804B55D8
  c->r[4]=sraw(c,c->r[4],31); // 804B55DC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B55E0
  c->r[3]=c->r[31]&c->r[4]; // 804B55E4
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)92); // 804B55E8
  c->r[3]=c->r[26]+c->r[0]; // 804B55EC
  c->r[4]=c->r[3]+0x00000034u; // 804B55F0
  if (crb(c,2)) { goto L_804B55FC; } // 804B55F4
  W32(c->r[25]+0x00000000u,c->r[4]); // 804B55F8
L_804B55FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B55FC
  if (!crb(c,2)) { goto L_804B560C; } // 804B5600
  c->r[3]=0u+0x00000000u; // 804B5604
  goto L_804B5744; // 804B5608
L_804B560C:;
  c->r[3]=c->r[29]|c->r[29]; // 804B560C
  c->lr=0x804B5614u; f_803C4D08(c); // 804B5610
  cmps(c,0,(int32_t)c->r[3],0); // 804B5614
  c->r[31]=c->r[3]|c->r[3]; // 804B5618
  if (!crb(c,2)) { goto L_804B5628; } // 804B561C
  c->r[3]=0u+0x00000000u; // 804B5620
  goto L_804B5744; // 804B5624
L_804B5628:;
  cmps(c,0,(int32_t)c->r[27],0); // 804B5628
  if (crb(c,2)) { goto L_804B5638; } // 804B562C
  c->r[27]=c->r[3]+0x00000034u; // 804B5630
  goto L_804B563C; // 804B5634
L_804B5638:;
  c->r[27]=0u+0x00000000u; // 804B5638
L_804B563C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804B563C
  c->r[4]=c->r[3]+c->r[26]; // 804B5640
  c->r[5]=c->r[4]+0x00000034u; // 804B5644
  if (crb(c,2)) { goto L_804B5740; } // 804B5648
  c->r[0]=0u+0x00000000u; // 804B564C
  c->r[4]=0u+0x80720000u; // 804B5650
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B5654
  c->r[4]=c->r[4]+0xFFFF9D30u; // 804B5658
  c->r[30]=R32(c->r[30]+0x00000000u); // 804B565C
  W32(c->r[3]+0x00000008u,c->r[29]); // 804B5660
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B5664
  W32(c->r[3]+0x00000000u,c->r[4]); // 804B5668
  W32(c->r[3]+0x00000010u,c->r[28]); // 804B566C
  W32(c->r[3]+0x00000014u,c->r[5]); // 804B5670
  c->r[3]=c->r[31]|c->r[31]; // 804B5674
  c->r[12]=R32(c->r[31]+0x00000000u); // 804B5678
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B567C
  c->ctr=c->r[12]; // 804B5680
  if (true) { c->lr=0x804B5688u; dispatch(c,c->ctr); } // 804B5684
  c->r[4]=R16(c->r[30]+0x00000020u); // 804B5688
  c->r[0]=0u+0x43300000u; // 804B568C
  c->r[5]=R32(c->r[30]+0x00000024u); // 804B5690
  c->r[3]=0u+0x80720000u; // 804B5694
  c->r[4]=c->r[4]^0x80000000u; // 804B5698
  {uint32_t ea=c->r[2]+0x00001560u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B569C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804B56A0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B56A4
  {uint32_t ea=c->r[2]+0x00001564u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B56A8
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B56AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B56B0
  c->r[3]=c->r[3]+0xFFFF9CE8u; // 804B56B4
  {uint32_t ea=c->r[2]+0x00001568u; c->f[3]=RF64(ea);} // 804B56B8
  cmps(c,0,(int32_t)c->r[27],0); // 804B56BC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B56C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804B56C4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B56C8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804B56CC
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B56D0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804B56D4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804B56D8
  W32(c->r[31]+0x00000028u,c->r[0]); // 804B56DC
  W32(c->r[31]+0x00000000u,c->r[3]); // 804B56E0
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 804B56E4
  W32(c->r[31]+0x00000030u,c->r[27]); // 804B56E8
  if (crb(c,2)) { goto L_804B5740; } // 804B56EC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B56F0
  c->r[28]=0u+0x00000000u; // 804B56F4
  c->r[27]=0u+0x00000000u; // 804B56F8
  goto L_804B5734; // 804B56FC
L_804B5700:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B5700
  c->r[3]=R16(c->r[3]+c->r[27]); // 804B5704
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B5708
  if (!crb(c,2)) { goto L_804B572C; } // 804B570C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B5710
  c->f[1]=c->f[31]; // 804B5714
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 804B5718
  c->r[4]=R32(c->r[31]+0x00000030u); // 804B571C
  c->r[3]=c->r[31]+0x0000002Cu; // 804B5720
  c->r[4]=c->r[4]+c->r[0]; // 804B5724
  c->lr=0x804B572Cu; f_804B0E70(c); // 804B5728
L_804B572C:;
  c->r[27]=c->r[27]+0x00000002u; // 804B572C
  c->r[28]=c->r[28]+0x00000001u; // 804B5730
L_804B5734:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B5734
  cmpu(c,0,c->r[28],c->r[0]); // 804B5738
  if (crb(c,0)) { IRQCHK(c); goto L_804B5700; } // 804B573C
L_804B5740:;
  c->r[3]=c->r[31]|c->r[31]; // 804B5740
L_804B5744:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B5744
  c->r[11]=c->r[1]+0x00000030u; // 804B5748
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B574C
  c->lr=0x804B5754u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B5750
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B5754
  c->lr=c->r[0]; // 804B5758
  c->r[1]=c->r[1]+0x00000040u; // 804B575C
  return; // 804B5760
}

// fn_804B5764
void f_804B5764(Ctx* __restrict c) {
  trace_call(0x804B5764u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5764
  c->r[0]=c->lr; // 804B5768
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B576C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B5770
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B5774
  c->f[3]=c->f[1]; // 804B5778
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B577C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B5780
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B5784
  c->r[29]=c->r[3]|c->r[3]; // 804B5788
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B578C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5790
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B5794
  c->ctr=c->r[12]; // 804B5798
  if (true) { c->lr=0x804B57A0u; dispatch(c,c->ctr); } // 804B579C
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B57A0
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B57A4
  cmps(c,0,(int32_t)c->r[0],0); // 804B57A8
  if (crb(c,2)) { goto L_804B5800; } // 804B57AC
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B57B0
  c->r[31]=0u+0x00000000u; // 804B57B4
  c->r[30]=0u+0x00000000u; // 804B57B8
  goto L_804B57F4; // 804B57BC
L_804B57C0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B57C0
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B57C4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B57C8
  if (!crb(c,2)) { goto L_804B57EC; } // 804B57CC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B57D0
  c->f[1]=c->f[31]; // 804B57D4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 804B57D8
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B57DC
  c->r[3]=c->r[29]+0x0000002Cu; // 804B57E0
  c->r[4]=c->r[4]+c->r[0]; // 804B57E4
  c->lr=0x804B57ECu; f_804B0E70(c); // 804B57E8
L_804B57EC:;
  c->r[30]=c->r[30]+0x00000002u; // 804B57EC
  c->r[31]=c->r[31]+0x00000001u; // 804B57F0
L_804B57F4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B57F4
  cmpu(c,0,c->r[31],c->r[0]); // 804B57F8
  if (crb(c,0)) { IRQCHK(c); goto L_804B57C0; } // 804B57FC
L_804B5800:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B5800
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B5804
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B5808
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B580C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B5810
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B5814
  c->lr=c->r[0]; // 804B5818
  c->r[1]=c->r[1]+0x00000030u; // 804B581C
  return; // 804B5820
}

// fn_804B5824
void f_804B5824(Ctx* __restrict c) {
  trace_call(0x804B5824u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5824
  return; // 804B5828
}

// fn_804B582C
void f_804B582C(Ctx* __restrict c) {
  trace_call(0x804B582Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B582C
  c->r[0]=c->lr; // 804B5830
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B5834
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B5838
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B583C
  {uint32_t ea=c->r[2]+0x00001560u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B5840
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B5844
  fcmp(c,0,c->f[0],c->f[1]); // 804B5848
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B584C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B5850
  c->r[29]=c->r[3]|c->r[3]; // 804B5854
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B5858
  if (!crb(c,2)) { goto L_804B58BC; } // 804B585C
  c->r[0]=R32(c->r[3]+0x00000030u); // 804B5860
  cmps(c,0,(int32_t)c->r[0],0); // 804B5864
  if (crb(c,2)) { goto L_804B58BC; } // 804B5868
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B586C
  c->r[31]=0u+0x00000000u; // 804B5870
  c->r[30]=0u+0x00000000u; // 804B5874
  goto L_804B58B0; // 804B5878
L_804B587C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B587C
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B5880
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B5884
  if (!crb(c,2)) { goto L_804B58A8; } // 804B5888
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B588C
  c->f[1]=c->f[31]; // 804B5890
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 804B5894
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B5898
  c->r[3]=c->r[29]+0x0000002Cu; // 804B589C
  c->r[4]=c->r[4]+c->r[0]; // 804B58A0
  c->lr=0x804B58A8u; f_804B0E70(c); // 804B58A4
L_804B58A8:;
  c->r[30]=c->r[30]+0x00000002u; // 804B58A8
  c->r[31]=c->r[31]+0x00000001u; // 804B58AC
L_804B58B0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B58B0
  cmpu(c,0,c->r[31],c->r[0]); // 804B58B4
  if (crb(c,0)) { IRQCHK(c); goto L_804B587C; } // 804B58B8
L_804B58BC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B58BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B58C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B58C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B58C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B58CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B58D0
  c->lr=c->r[0]; // 804B58D4
  c->r[1]=c->r[1]+0x00000030u; // 804B58D8
  return; // 804B58DC
}

// fn_804B58E0
void f_804B58E0(Ctx* __restrict c) {
  trace_call(0x804B58E0u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B58E0
  return; // 804B58E4
}

// fn_804B58E8
void f_804B58E8(Ctx* __restrict c) {
  trace_call(0x804B58E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B58E8
  c->r[0]=c->lr; // 804B58EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B58F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B58F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B58F8
  {uint32_t ea=c->r[2]+0x00001560u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B58FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B5900
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B5904
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B5908
  c->r[29]=c->r[3]|c->r[3]; // 804B590C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5910
  fcmp(c,0,c->f[0],c->f[1]); // 804B5914
  if (crb(c,2)) { goto L_804B59A4; } // 804B5918
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B591C
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5920
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B5924
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804B5928
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B592C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5930
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B5934
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804B5938
  c->ctr=c->r[12]; // 804B593C
  if (true) { c->lr=0x804B5944u; dispatch(c,c->ctr); } // 804B5940
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B5944
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B5948
  cmps(c,0,(int32_t)c->r[0],0); // 804B594C
  if (crb(c,2)) { goto L_804B59A4; } // 804B5950
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B5954
  c->r[31]=0u+0x00000000u; // 804B5958
  c->r[30]=0u+0x00000000u; // 804B595C
  goto L_804B5998; // 804B5960
L_804B5964:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B5964
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B5968
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B596C
  if (!crb(c,2)) { goto L_804B5990; } // 804B5970
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B5974
  c->f[1]=c->f[31]; // 804B5978
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 804B597C
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B5980
  c->r[3]=c->r[29]+0x0000002Cu; // 804B5984
  c->r[4]=c->r[4]+c->r[0]; // 804B5988
  c->lr=0x804B5990u; f_804B0E70(c); // 804B598C
L_804B5990:;
  c->r[30]=c->r[30]+0x00000002u; // 804B5990
  c->r[31]=c->r[31]+0x00000001u; // 804B5994
L_804B5998:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B5998
  cmpu(c,0,c->r[31],c->r[0]); // 804B599C
  if (crb(c,0)) { IRQCHK(c); goto L_804B5964; } // 804B59A0
L_804B59A4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B59A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B59A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B59AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B59B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B59B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B59B8
  c->lr=c->r[0]; // 804B59BC
  c->r[1]=c->r[1]+0x00000030u; // 804B59C0
  return; // 804B59C4
}

// fn_804B59C8
void f_804B59C8(Ctx* __restrict c) {
  trace_call(0x804B59C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B59C8
  c->r[0]=c->lr; // 804B59CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B59D0
  c->r[11]=c->r[1]+0x00000030u; // 804B59D4
  c->lr=0x804B59DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B59D8
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804B59DC
  c->r[27]=c->r[3]|c->r[3]; // 804B59E0
  c->r[28]=c->r[4]|c->r[4]; // 804B59E4
  c->r[30]=0u+0x00000000u; // 804B59E8
  c->r[31]=R16(c->r[5]+0x00000022u); // 804B59EC
  c->r[29]=0u+0x00000000u; // 804B59F0
  cmps(c,0,(int32_t)c->r[31],0); // 804B59F4
  if (!crb(c,1)) { goto L_804B5A94; } // 804B59F8
  goto L_804B5A88; // 804B59FC
L_804B5A00:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 804B5A00
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B5A04
  cmps(c,0,(int32_t)c->r[0],0); // 804B5A08
  if (crb(c,2)) { goto L_804B5A18; } // 804B5A0C
  c->r[0]=c->r[3]+c->r[0]; // 804B5A10
  goto L_804B5A1C; // 804B5A14
L_804B5A18:;
  c->r[0]=0u+0x00000000u; // 804B5A18
L_804B5A1C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B5A1C
  if (crb(c,2)) { goto L_804B5A48; } // 804B5A20
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 804B5A24
  c->r[3]=c->r[0]+c->r[3]; // 804B5A28
  c->r[3]=R32(c->r[3]+0x00000024u); // 804B5A2C
  cmps(c,0,(int32_t)c->r[3],0); // 804B5A30
  if (crb(c,2)) { goto L_804B5A40; } // 804B5A34
  c->r[5]=c->r[0]+c->r[3]; // 804B5A38
  goto L_804B5A4C; // 804B5A3C
L_804B5A40:;
  c->r[5]=0u+0x00000000u; // 804B5A40
  goto L_804B5A4C; // 804B5A44
L_804B5A48:;
  c->r[5]=0u+0x00000000u; // 804B5A48
L_804B5A4C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B5A4C
  c->r[3]=c->r[28]|c->r[28]; // 804B5A50
  c->r[4]=c->r[1]+0x00000008u; // 804B5A54
  c->r[5]=c->r[0]+c->r[5]; // 804B5A58
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B5A5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B5A60
  c->lr=0x804B5A68u; f_804AC9A4(c); // 804B5A64
  cmps(c,0,(int32_t)c->r[3],0); // 804B5A68
  if (crb(c,2)) { goto L_804B5A84; } // 804B5A6C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B5A70
  c->r[30]=0u+0x00000001u; // 804B5A74
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B5A78
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804B5A7C
  W16(c->r[3]+c->r[0],c->r[29]); // 804B5A80
L_804B5A84:;
  c->r[29]=c->r[29]+0x00000001u; // 804B5A84
L_804B5A88:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804B5A88
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 804B5A8C
  if (crb(c,0)) { IRQCHK(c); goto L_804B5A00; } // 804B5A90
L_804B5A94:;
  c->r[3]=c->r[27]|c->r[27]; // 804B5A94
  c->r[4]=0u+0x00000004u; // 804B5A98
  c->r[5]=0u+0x00000001u; // 804B5A9C
  c->lr=0x804B5AA4u; f_804BDBC0(c); // 804B5AA0
  c->r[11]=c->r[1]+0x00000030u; // 804B5AA4
  c->r[3]=c->r[30]|c->r[30]; // 804B5AA8
  c->lr=0x804B5AB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B5AAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B5AB0
  c->lr=c->r[0]; // 804B5AB4
  c->r[1]=c->r[1]+0x00000030u; // 804B5AB8
  return; // 804B5ABC
}

// fn_804B5AC0
void f_804B5AC0(Ctx* __restrict c) {
  trace_call(0x804B5AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5AC0
  c->r[0]=c->lr; // 804B5AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B5AC8
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B5ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B5AD0
  c->r[31]=c->r[4]|c->r[4]; // 804B5AD4
  c->r[6]=R32(c->r[3]+0x00000014u); // 804B5AD8
  c->r[5]=R16(c->r[6]+c->r[0]); // 804B5ADC
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 804B5AE0
  if (crb(c,2)) { goto L_804B5AF8; } // 804B5AE4
  c->r[0]=0u+0x00000000u; // 804B5AE8
  c->r[3]=c->r[31]|c->r[31]; // 804B5AEC
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B5AF0
  goto L_804B5B20; // 804B5AF4
L_804B5AF8:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 804B5AF8
  cmps(c,0,(int32_t)c->r[6],0); // 804B5AFC
  if (crb(c,2)) { goto L_804B5B10; } // 804B5B00
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 804B5B04
  c->r[3]=c->r[6]+c->r[0]; // 804B5B08
  goto L_804B5B20; // 804B5B0C
L_804B5B10:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B5B10
  c->r[3]=c->r[3]+0x0000002Cu; // 804B5B14
  c->lr=0x804B5B1Cu; f_804B0E70(c); // 804B5B18
  c->r[3]=c->r[31]|c->r[31]; // 804B5B1C
L_804B5B20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B5B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B5B24
  c->lr=c->r[0]; // 804B5B28
  c->r[1]=c->r[1]+0x00000010u; // 804B5B2C
  return; // 804B5B30
}

// fn_804B5B34
void f_804B5B34(Ctx* __restrict c) {
  trace_call(0x804B5B34u);
  c->r[5]=0u+0x00010000u; // 804B5B34
  c->r[0]=c->r[5]+0x00000002u; // 804B5B38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B5B3C
  if (crb(c,2)) { goto L_804B5B80; } // 804B5B40
  if (!crb(c,0)) { goto L_804B5B54; } // 804B5B44
  cmps(c,0,(int32_t)c->r[4],8); // 804B5B48
  if (crb(c,2)) { goto L_804B5B64; } // 804B5B4C
  return; // 804B5B50
L_804B5B54:;
  c->r[0]=c->r[5]+0x00000004u; // 804B5B54
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B5B58
  if (!crb(c,0)) return; // 804B5B5C
  goto L_804B5B74; // 804B5B60
L_804B5B64:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B5B64
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B5B68
  c->ctr=c->r[12]; // 804B5B6C
  if (true) { dispatch(c,c->ctr); return; } // 804B5B70
L_804B5B74:;
  c->r[0]=0u+0x00000000u; // 804B5B74
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B5B78
  return; // 804B5B7C
L_804B5B80:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B5B80
  return; // 804B5B84
}

// ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
void f_804B5B88(Ctx* __restrict c) {
  trace_call(0x804B5B88u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B5B88
  c->r[0]=c->lr; // 804B5B8C
  c->r[6]=R32(c->r[5]+0x00000000u); // 804B5B90
  W32(c->r[1]+0x00000094u,c->r[0]); // 804B5B94
  c->r[0]=0u+0xFFFFFFFFu; // 804B5B98
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 804B5B9C
  c->r[31]=c->r[5]|c->r[5]; // 804B5BA0
  W32(c->r[1]+0x00000088u,c->r[30]); // 804B5BA4
  c->r[30]=c->r[4]|c->r[4]; // 804B5BA8
  W32(c->r[1]+0x00000084u,c->r[29]); // 804B5BAC
  c->r[29]=c->r[3]|c->r[3]; // 804B5BB0
  W32(c->r[1]+0x00000080u,c->r[28]); // 804B5BB4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5BB8
  c->r[0]=rotl(c->r[6],0)&0x0000000Fu; cr0(c,c->r[0]); // 804B5BBC
  if (crb(c,2)) { goto L_804B5D20; } // 804B5BC0
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 804B5BC4
  if (crb(c,2)) { goto L_804B5C18; } // 804B5BC8
  c->r[28]=R32(c->r[3]+0x00000000u); // 804B5BCC
  c->r[3]=c->r[1]+0x00000078u; // 804B5BD0
  c->r[5]=R32(c->r[5]+0x00000030u); // 804B5BD4
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5BD8
  c->r[0]=R32(c->r[28]+0x00000004u); // 804B5BDC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5BE0
  c->lr=0x804B5BE8u; f_804B60B8(c); // 804B5BE4
  c->r[5]=R32(c->r[31]+0x00000004u); // 804B5BE8
  c->r[3]=c->r[1]+0x00000074u; // 804B5BEC
  c->r[4]=c->r[1]+0x00000078u; // 804B5BF0
  c->lr=0x804B5BF8u; f_804B60C8(c); // 804B5BF4
  c->r[0]=R8(c->r[1]+0x00000074u); // 804B5BF8
  W8(c->r[28]+0x00000004u,c->r[0]); // 804B5BFC
  c->r[0]=R8(c->r[1]+0x00000075u); // 804B5C00
  W8(c->r[28]+0x00000005u,c->r[0]); // 804B5C04
  c->r[0]=R8(c->r[1]+0x00000076u); // 804B5C08
  W8(c->r[28]+0x00000006u,c->r[0]); // 804B5C0C
  c->r[0]=R8(c->r[1]+0x00000077u); // 804B5C10
  W8(c->r[28]+0x00000007u,c->r[0]); // 804B5C14
L_804B5C18:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5C18
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804B5C1C
  if (crb(c,2)) { goto L_804B5C70; } // 804B5C20
  c->r[28]=R32(c->r[29]+0x00000000u); // 804B5C24
  c->r[3]=c->r[1]+0x00000070u; // 804B5C28
  c->r[5]=R32(c->r[31]+0x00000038u); // 804B5C2C
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5C30
  c->r[0]=R32(c->r[28]+0x00000008u); // 804B5C34
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5C38
  c->lr=0x804B5C40u; f_804B60B8(c); // 804B5C3C
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 804B5C40
  c->r[3]=c->r[1]+0x0000006Cu; // 804B5C44
  c->r[4]=c->r[1]+0x00000070u; // 804B5C48
  c->lr=0x804B5C50u; f_804B60C8(c); // 804B5C4C
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 804B5C50
  W8(c->r[28]+0x00000008u,c->r[0]); // 804B5C54
  c->r[0]=R8(c->r[1]+0x0000006Du); // 804B5C58
  W8(c->r[28]+0x00000009u,c->r[0]); // 804B5C5C
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 804B5C60
  W8(c->r[28]+0x0000000Au,c->r[0]); // 804B5C64
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 804B5C68
  W8(c->r[28]+0x0000000Bu,c->r[0]); // 804B5C6C
L_804B5C70:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5C70
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804B5C74
  if (crb(c,2)) { goto L_804B5CC8; } // 804B5C78
  c->r[28]=R32(c->r[29]+0x00000000u); // 804B5C7C
  c->r[3]=c->r[1]+0x00000068u; // 804B5C80
  c->r[5]=R32(c->r[31]+0x00000034u); // 804B5C84
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5C88
  c->r[0]=R32(c->r[28]+0x00000018u); // 804B5C8C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5C90
  c->lr=0x804B5C98u; f_804B60B8(c); // 804B5C94
  c->r[5]=R32(c->r[31]+0x00000008u); // 804B5C98
  c->r[3]=c->r[1]+0x00000064u; // 804B5C9C
  c->r[4]=c->r[1]+0x00000068u; // 804B5CA0
  c->lr=0x804B5CA8u; f_804B60C8(c); // 804B5CA4
  c->r[0]=R8(c->r[1]+0x00000064u); // 804B5CA8
  W8(c->r[28]+0x00000018u,c->r[0]); // 804B5CAC
  c->r[0]=R8(c->r[1]+0x00000065u); // 804B5CB0
  W8(c->r[28]+0x00000019u,c->r[0]); // 804B5CB4
  c->r[0]=R8(c->r[1]+0x00000066u); // 804B5CB8
  W8(c->r[28]+0x0000001Au,c->r[0]); // 804B5CBC
  c->r[0]=R8(c->r[1]+0x00000067u); // 804B5CC0
  W8(c->r[28]+0x0000001Bu,c->r[0]); // 804B5CC4
L_804B5CC8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5CC8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804B5CCC
  if (crb(c,2)) { goto L_804B5D20; } // 804B5CD0
  c->r[29]=R32(c->r[29]+0x00000000u); // 804B5CD4
  c->r[3]=c->r[1]+0x00000060u; // 804B5CD8
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 804B5CDC
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5CE0
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 804B5CE4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5CE8
  c->lr=0x804B5CF0u; f_804B60B8(c); // 804B5CEC
  c->r[5]=R32(c->r[31]+0x00000010u); // 804B5CF0
  c->r[3]=c->r[1]+0x0000005Cu; // 804B5CF4
  c->r[4]=c->r[1]+0x00000060u; // 804B5CF8
  c->lr=0x804B5D00u; f_804B60C8(c); // 804B5CFC
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 804B5D00
  W8(c->r[29]+0x0000001Cu,c->r[0]); // 804B5D04
  c->r[0]=R8(c->r[1]+0x0000005Du); // 804B5D08
  W8(c->r[29]+0x0000001Du,c->r[0]); // 804B5D0C
  c->r[0]=R8(c->r[1]+0x0000005Eu); // 804B5D10
  W8(c->r[29]+0x0000001Eu,c->r[0]); // 804B5D14
  c->r[0]=R8(c->r[1]+0x0000005Fu); // 804B5D18
  W8(c->r[29]+0x0000001Fu,c->r[0]); // 804B5D1C
L_804B5D20:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 804B5D20
  c->r[0]=rotl(c->r[3],0)&0x000007F0u; cr0(c,c->r[0]); // 804B5D24
  if (crb(c,2)) { goto L_804B6098; } // 804B5D28
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 804B5D2C
  if (crb(c,2)) { goto L_804B5DA4; } // 804B5D30
  c->r[3]=c->r[30]|c->r[30]; // 804B5D34
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5D38
  c->r[4]=0u+0x00000001u; // 804B5D3C
  c->lr=0x804B5D44u; f_804AF028(c); // 804B5D40
  cmps(c,0,(int32_t)c->r[3],0); // 804B5D44
  if (!crb(c,2)) { goto L_804B5D54; } // 804B5D48
  c->r[0]=0u+0x000000FFu; // 804B5D4C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5D50
L_804B5D54:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 804B5D54
  c->r[3]=c->r[1]+0x00000054u; // 804B5D58
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5D5C
  c->lr=0x804B5D64u; f_804B60B8(c); // 804B5D60
  c->r[5]=R32(c->r[31]+0x00000014u); // 804B5D64
  c->r[3]=c->r[1]+0x00000050u; // 804B5D68
  c->r[4]=c->r[1]+0x00000054u; // 804B5D6C
  c->lr=0x804B5D74u; f_804B60C8(c); // 804B5D70
  c->r[8]=R8(c->r[1]+0x00000050u); // 804B5D74
  c->r[5]=c->r[1]+0x00000058u; // 804B5D78
  c->r[7]=R8(c->r[1]+0x00000051u); // 804B5D7C
  c->r[3]=c->r[30]|c->r[30]; // 804B5D80
  c->r[6]=R8(c->r[1]+0x00000052u); // 804B5D84
  c->r[4]=0u+0x00000001u; // 804B5D88
  c->r[0]=R8(c->r[1]+0x00000053u); // 804B5D8C
  W8(c->r[1]+0x00000058u,c->r[8]); // 804B5D90
  W8(c->r[1]+0x00000059u,c->r[7]); // 804B5D94
  W8(c->r[1]+0x0000005Au,c->r[6]); // 804B5D98
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 804B5D9C
  c->lr=0x804B5DA4u; f_804AF0E4(c); // 804B5DA0
L_804B5DA4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5DA4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804B5DA8
  if (crb(c,2)) { goto L_804B5E20; } // 804B5DAC
  c->r[3]=c->r[30]|c->r[30]; // 804B5DB0
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5DB4
  c->r[4]=0u+0x00000002u; // 804B5DB8
  c->lr=0x804B5DC0u; f_804AF028(c); // 804B5DBC
  cmps(c,0,(int32_t)c->r[3],0); // 804B5DC0
  if (!crb(c,2)) { goto L_804B5DD0; } // 804B5DC4
  c->r[0]=0u+0x000000FFu; // 804B5DC8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5DCC
L_804B5DD0:;
  c->r[5]=R32(c->r[31]+0x00000044u); // 804B5DD0
  c->r[3]=c->r[1]+0x00000048u; // 804B5DD4
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5DD8
  c->lr=0x804B5DE0u; f_804B60B8(c); // 804B5DDC
  c->r[5]=R32(c->r[31]+0x00000018u); // 804B5DE0
  c->r[3]=c->r[1]+0x00000044u; // 804B5DE4
  c->r[4]=c->r[1]+0x00000048u; // 804B5DE8
  c->lr=0x804B5DF0u; f_804B60C8(c); // 804B5DEC
  c->r[8]=R8(c->r[1]+0x00000044u); // 804B5DF0
  c->r[5]=c->r[1]+0x0000004Cu; // 804B5DF4
  c->r[7]=R8(c->r[1]+0x00000045u); // 804B5DF8
  c->r[3]=c->r[30]|c->r[30]; // 804B5DFC
  c->r[6]=R8(c->r[1]+0x00000046u); // 804B5E00
  c->r[4]=0u+0x00000002u; // 804B5E04
  c->r[0]=R8(c->r[1]+0x00000047u); // 804B5E08
  W8(c->r[1]+0x0000004Cu,c->r[8]); // 804B5E0C
  W8(c->r[1]+0x0000004Du,c->r[7]); // 804B5E10
  W8(c->r[1]+0x0000004Eu,c->r[6]); // 804B5E14
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 804B5E18
  c->lr=0x804B5E20u; f_804AF0E4(c); // 804B5E1C
L_804B5E20:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5E20
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 804B5E24
  if (crb(c,2)) { goto L_804B5E9C; } // 804B5E28
  c->r[3]=c->r[30]|c->r[30]; // 804B5E2C
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5E30
  c->r[4]=0u+0x00000003u; // 804B5E34
  c->lr=0x804B5E3Cu; f_804AF028(c); // 804B5E38
  cmps(c,0,(int32_t)c->r[3],0); // 804B5E3C
  if (!crb(c,2)) { goto L_804B5E4C; } // 804B5E40
  c->r[0]=0u+0x000000FFu; // 804B5E44
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5E48
L_804B5E4C:;
  c->r[5]=R32(c->r[31]+0x00000048u); // 804B5E4C
  c->r[3]=c->r[1]+0x0000003Cu; // 804B5E50
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5E54
  c->lr=0x804B5E5Cu; f_804B60B8(c); // 804B5E58
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 804B5E5C
  c->r[3]=c->r[1]+0x00000038u; // 804B5E60
  c->r[4]=c->r[1]+0x0000003Cu; // 804B5E64
  c->lr=0x804B5E6Cu; f_804B60C8(c); // 804B5E68
  c->r[8]=R8(c->r[1]+0x00000038u); // 804B5E6C
  c->r[5]=c->r[1]+0x00000040u; // 804B5E70
  c->r[7]=R8(c->r[1]+0x00000039u); // 804B5E74
  c->r[3]=c->r[30]|c->r[30]; // 804B5E78
  c->r[6]=R8(c->r[1]+0x0000003Au); // 804B5E7C
  c->r[4]=0u+0x00000003u; // 804B5E80
  c->r[0]=R8(c->r[1]+0x0000003Bu); // 804B5E84
  W8(c->r[1]+0x00000040u,c->r[8]); // 804B5E88
  W8(c->r[1]+0x00000041u,c->r[7]); // 804B5E8C
  W8(c->r[1]+0x00000042u,c->r[6]); // 804B5E90
  W8(c->r[1]+0x00000043u,c->r[0]); // 804B5E94
  c->lr=0x804B5E9Cu; f_804AF0E4(c); // 804B5E98
L_804B5E9C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5E9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 804B5EA0
  if (crb(c,2)) { goto L_804B5F18; } // 804B5EA4
  c->r[3]=c->r[30]|c->r[30]; // 804B5EA8
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5EAC
  c->r[4]=0u+0x00000000u; // 804B5EB0
  c->lr=0x804B5EB8u; f_804AF178(c); // 804B5EB4
  cmps(c,0,(int32_t)c->r[3],0); // 804B5EB8
  if (!crb(c,2)) { goto L_804B5EC8; } // 804B5EBC
  c->r[0]=0u+0x000000FFu; // 804B5EC0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5EC4
L_804B5EC8:;
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 804B5EC8
  c->r[3]=c->r[1]+0x00000030u; // 804B5ECC
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5ED0
  c->lr=0x804B5ED8u; f_804B60B8(c); // 804B5ED4
  c->r[5]=R32(c->r[31]+0x00000020u); // 804B5ED8
  c->r[3]=c->r[1]+0x0000002Cu; // 804B5EDC
  c->r[4]=c->r[1]+0x00000030u; // 804B5EE0
  c->lr=0x804B5EE8u; f_804B60C8(c); // 804B5EE4
  c->r[8]=R8(c->r[1]+0x0000002Cu); // 804B5EE8
  c->r[5]=c->r[1]+0x00000034u; // 804B5EEC
  c->r[7]=R8(c->r[1]+0x0000002Du); // 804B5EF0
  c->r[3]=c->r[30]|c->r[30]; // 804B5EF4
  c->r[6]=R8(c->r[1]+0x0000002Eu); // 804B5EF8
  c->r[4]=0u+0x00000000u; // 804B5EFC
  c->r[0]=R8(c->r[1]+0x0000002Fu); // 804B5F00
  W8(c->r[1]+0x00000034u,c->r[8]); // 804B5F04
  W8(c->r[1]+0x00000035u,c->r[7]); // 804B5F08
  W8(c->r[1]+0x00000036u,c->r[6]); // 804B5F0C
  W8(c->r[1]+0x00000037u,c->r[0]); // 804B5F10
  c->lr=0x804B5F18u; f_804AF230(c); // 804B5F14
L_804B5F18:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5F18
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 804B5F1C
  if (crb(c,2)) { goto L_804B5F94; } // 804B5F20
  c->r[3]=c->r[30]|c->r[30]; // 804B5F24
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5F28
  c->r[4]=0u+0x00000001u; // 804B5F2C
  c->lr=0x804B5F34u; f_804AF178(c); // 804B5F30
  cmps(c,0,(int32_t)c->r[3],0); // 804B5F34
  if (!crb(c,2)) { goto L_804B5F44; } // 804B5F38
  c->r[0]=0u+0x000000FFu; // 804B5F3C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5F40
L_804B5F44:;
  c->r[5]=R32(c->r[31]+0x00000050u); // 804B5F44
  c->r[3]=c->r[1]+0x00000024u; // 804B5F48
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5F4C
  c->lr=0x804B5F54u; f_804B60B8(c); // 804B5F50
  c->r[5]=R32(c->r[31]+0x00000024u); // 804B5F54
  c->r[3]=c->r[1]+0x00000020u; // 804B5F58
  c->r[4]=c->r[1]+0x00000024u; // 804B5F5C
  c->lr=0x804B5F64u; f_804B60C8(c); // 804B5F60
  c->r[8]=R8(c->r[1]+0x00000020u); // 804B5F64
  c->r[5]=c->r[1]+0x00000028u; // 804B5F68
  c->r[7]=R8(c->r[1]+0x00000021u); // 804B5F6C
  c->r[3]=c->r[30]|c->r[30]; // 804B5F70
  c->r[6]=R8(c->r[1]+0x00000022u); // 804B5F74
  c->r[4]=0u+0x00000001u; // 804B5F78
  c->r[0]=R8(c->r[1]+0x00000023u); // 804B5F7C
  W8(c->r[1]+0x00000028u,c->r[8]); // 804B5F80
  W8(c->r[1]+0x00000029u,c->r[7]); // 804B5F84
  W8(c->r[1]+0x0000002Au,c->r[6]); // 804B5F88
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 804B5F8C
  c->lr=0x804B5F94u; f_804AF230(c); // 804B5F90
L_804B5F94:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B5F94
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 804B5F98
  if (crb(c,2)) { goto L_804B6010; } // 804B5F9C
  c->r[3]=c->r[30]|c->r[30]; // 804B5FA0
  c->r[5]=c->r[1]+0x0000007Cu; // 804B5FA4
  c->r[4]=0u+0x00000002u; // 804B5FA8
  c->lr=0x804B5FB0u; f_804AF178(c); // 804B5FAC
  cmps(c,0,(int32_t)c->r[3],0); // 804B5FB0
  if (!crb(c,2)) { goto L_804B5FC0; } // 804B5FB4
  c->r[0]=0u+0x000000FFu; // 804B5FB8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B5FBC
L_804B5FC0:;
  c->r[5]=R32(c->r[31]+0x00000054u); // 804B5FC0
  c->r[3]=c->r[1]+0x00000018u; // 804B5FC4
  c->r[4]=c->r[1]+0x0000007Cu; // 804B5FC8
  c->lr=0x804B5FD0u; f_804B60B8(c); // 804B5FCC
  c->r[5]=R32(c->r[31]+0x00000028u); // 804B5FD0
  c->r[3]=c->r[1]+0x00000014u; // 804B5FD4
  c->r[4]=c->r[1]+0x00000018u; // 804B5FD8
  c->lr=0x804B5FE0u; f_804B60C8(c); // 804B5FDC
  c->r[8]=R8(c->r[1]+0x00000014u); // 804B5FE0
  c->r[5]=c->r[1]+0x0000001Cu; // 804B5FE4
  c->r[7]=R8(c->r[1]+0x00000015u); // 804B5FE8
  c->r[3]=c->r[30]|c->r[30]; // 804B5FEC
  c->r[6]=R8(c->r[1]+0x00000016u); // 804B5FF0
  c->r[4]=0u+0x00000002u; // 804B5FF4
  c->r[0]=R8(c->r[1]+0x00000017u); // 804B5FF8
  W8(c->r[1]+0x0000001Cu,c->r[8]); // 804B5FFC
  W8(c->r[1]+0x0000001Du,c->r[7]); // 804B6000
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 804B6004
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 804B6008
  c->lr=0x804B6010u; f_804AF230(c); // 804B600C
L_804B6010:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804B6010
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804B6014
  if (crb(c,2)) { goto L_804B608C; } // 804B6018
  c->r[3]=c->r[30]|c->r[30]; // 804B601C
  c->r[5]=c->r[1]+0x0000007Cu; // 804B6020
  c->r[4]=0u+0x00000003u; // 804B6024
  c->lr=0x804B602Cu; f_804AF178(c); // 804B6028
  cmps(c,0,(int32_t)c->r[3],0); // 804B602C
  if (!crb(c,2)) { goto L_804B603C; } // 804B6030
  c->r[0]=0u+0x000000FFu; // 804B6034
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804B6038
L_804B603C:;
  c->r[5]=R32(c->r[31]+0x00000058u); // 804B603C
  c->r[3]=c->r[1]+0x0000000Cu; // 804B6040
  c->r[4]=c->r[1]+0x0000007Cu; // 804B6044
  c->lr=0x804B604Cu; f_804B60B8(c); // 804B6048
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 804B604C
  c->r[3]=c->r[1]+0x00000008u; // 804B6050
  c->r[4]=c->r[1]+0x0000000Cu; // 804B6054
  c->lr=0x804B605Cu; f_804B60C8(c); // 804B6058
  c->r[8]=R8(c->r[1]+0x00000008u); // 804B605C
  c->r[5]=c->r[1]+0x00000010u; // 804B6060
  c->r[7]=R8(c->r[1]+0x00000009u); // 804B6064
  c->r[3]=c->r[30]|c->r[30]; // 804B6068
  c->r[6]=R8(c->r[1]+0x0000000Au); // 804B606C
  c->r[4]=0u+0x00000003u; // 804B6070
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 804B6074
  W8(c->r[1]+0x00000010u,c->r[8]); // 804B6078
  W8(c->r[1]+0x00000011u,c->r[7]); // 804B607C
  W8(c->r[1]+0x00000012u,c->r[6]); // 804B6080
  W8(c->r[1]+0x00000013u,c->r[0]); // 804B6084
  c->lr=0x804B608Cu; f_804AF230(c); // 804B6088
L_804B608C:;
  c->r[3]=c->r[30]|c->r[30]; // 804B608C
  c->r[4]=0u+0x00000000u; // 804B6090
  c->lr=0x804B6098u; f_804AE634(c); // 804B6094
L_804B6098:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 804B6098
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 804B609C
  c->r[30]=R32(c->r[1]+0x00000088u); // 804B60A0
  c->r[29]=R32(c->r[1]+0x00000084u); // 804B60A4
  c->r[28]=R32(c->r[1]+0x00000080u); // 804B60A8
  c->lr=c->r[0]; // 804B60AC
  c->r[1]=c->r[1]+0x00000090u; // 804B60B0
  return; // 804B60B4
}

// __ad__Q34nw4r2ut5ColorCFUl
void f_804B60B8(Ctx* __restrict c) {
  trace_call(0x804B60B8u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B60B8
  c->r[0]=c->r[5]&c->r[0]; // 804B60BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B60C0
  return; // 804B60C4
}

// __or__Q34nw4r2ut5ColorCFUl
void f_804B60C8(Ctx* __restrict c) {
  trace_call(0x804B60C8u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B60C8
  c->r[0]=c->r[5]|c->r[0]; // 804B60CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 804B60D0
  return; // 804B60D4
}

// fn_804B60D8
void f_804B60D8(Ctx* __restrict c) {
  trace_call(0x804B60D8u);
  c->r[3]=0u+0x806B0000u; // 804B60D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B60DC
  c->r[3]=c->r[3]+0xFFFFBBC8u; // 804B60E0
  cmpu(c,0,c->r[0],c->r[3]); // 804B60E4
  if (!crb(c,2)) { goto L_804B60F4; } // 804B60E8
  c->r[3]=0u+0x00000001u; // 804B60EC
  return; // 804B60F0
L_804B60F4:;
  c->r[3]=0u+0x806B0000u; // 804B60F4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B60F8
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 804B60FC
  cmpu(c,0,c->r[0],c->r[3]); // 804B6100
  if (!crb(c,2)) { goto L_804B6110; } // 804B6104
  c->r[3]=0u+0x00000001u; // 804B6108
  return; // 804B610C
L_804B6110:;
  c->r[3]=0u+0x806B0000u; // 804B6110
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B6114
  cmpu(c,0,c->r[0],c->r[3]); // 804B6118
  if (!crb(c,2)) { goto L_804B6128; } // 804B611C
  c->r[3]=0u+0x00000001u; // 804B6120
  return; // 804B6124
L_804B6128:;
  c->r[3]=0u+0x806B0000u; // 804B6128
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B612C
  c->r[0]=c->r[3]-c->r[0]; // 804B6130
  c->r[0]=cntlz(c->r[0]); // 804B6134
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B6138
  return; // 804B613C
}

// fn_804B6140
void f_804B6140(Ctx* __restrict c) {
  trace_call(0x804B6140u);
  c->r[3]=0u+0x806B0000u; // 804B6140
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B6144
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 804B6148
  cmpu(c,0,c->r[0],c->r[3]); // 804B614C
  if (!crb(c,2)) { goto L_804B615C; } // 804B6150
  c->r[3]=0u+0x00000001u; // 804B6154
  return; // 804B6158
L_804B615C:;
  c->r[3]=0u+0x806B0000u; // 804B615C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B6160
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B6164
  cmpu(c,0,c->r[0],c->r[3]); // 804B6168
  if (!crb(c,2)) { goto L_804B6178; } // 804B616C
  c->r[3]=0u+0x00000001u; // 804B6170
  return; // 804B6174
L_804B6178:;
  c->r[3]=0u+0x806B0000u; // 804B6178
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B617C
  c->r[0]=c->r[3]-c->r[0]; // 804B6180
  c->r[0]=cntlz(c->r[0]); // 804B6184
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B6188
  return; // 804B618C
}

// fn_804B6190
void f_804B6190(Ctx* __restrict c) {
  trace_call(0x804B6190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6190
  c->r[0]=c->lr; // 804B6194
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B6198
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B619C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B61A0
  c->ctr=c->r[12]; // 804B61A4
  if (true) { c->lr=0x804B61ACu; dispatch(c,c->ctr); } // 804B61A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B61AC
  c->r[3]=c->r[3]+0x00000004u; // 804B61B0
  c->lr=c->r[0]; // 804B61B4
  c->r[1]=c->r[1]+0x00000010u; // 804B61B8
  return; // 804B61BC
}

// fn_804B61C0
void f_804B61C0(Ctx* __restrict c) {
  trace_call(0x804B61C0u);
  c->r[3]=0u+0x806B0000u; // 804B61C0
  c->r[3]=c->r[3]+0xFFFFBBC8u; // 804B61C4
  return; // 804B61C8
}

// fn_804B61CC
void f_804B61CC(Ctx* __restrict c) {
  trace_call(0x804B61CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B61CC
  c->r[0]=c->lr; // 804B61D0
  cmps(c,0,(int32_t)c->r[3],0); // 804B61D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B61D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B61DC
  c->r[31]=c->r[3]|c->r[3]; // 804B61E0
  if (crb(c,2)) { goto L_804B61F8; } // 804B61E4
  if (crb(c,2)) { goto L_804B61F8; } // 804B61E8
  if (crb(c,2)) { goto L_804B61F8; } // 804B61EC
  c->r[4]=0u+0x00000000u; // 804B61F0
  c->lr=0x804B61F8u; f_804BD9F0(c); // 804B61F4
L_804B61F8:;
  c->r[3]=c->r[31]|c->r[31]; // 804B61F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B61FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B6200
  c->lr=c->r[0]; // 804B6204
  c->r[1]=c->r[1]+0x00000010u; // 804B6208
  return; // 804B620C
}

// fn_804B6210
void f_804B6210(Ctx* __restrict c) {
  trace_call(0x804B6210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6210
  c->r[0]=c->lr; // 804B6214
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B6218
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B621C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B6220
  c->ctr=c->r[12]; // 804B6224
  if (true) { c->lr=0x804B622Cu; dispatch(c,c->ctr); } // 804B6228
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B622C
  c->r[3]=c->r[3]+0x00000004u; // 804B6230
  c->lr=c->r[0]; // 804B6234
  c->r[1]=c->r[1]+0x00000010u; // 804B6238
  return; // 804B623C
}

// fn_804B6240
void f_804B6240(Ctx* __restrict c) {
  trace_call(0x804B6240u);
  c->r[3]=0u+0x806B0000u; // 804B6240
  c->r[3]=c->r[3]+0xFFFFBBB0u; // 804B6244
  return; // 804B6248
}

// fn_804B624C
void f_804B624C(Ctx* __restrict c) {
  trace_call(0x804B624Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804B624C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804B6250
  c->r[0]=R16(c->r[3]+c->r[0]); // 804B6254
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 804B6258
  c->r[0]=cntlz(c->r[0]); // 804B625C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B6260
  return; // 804B6264
}

// fn_804B6268
void f_804B6268(Ctx* __restrict c) {
  trace_call(0x804B6268u);
  c->r[4]=0u+0x00010000u; // 804B6268
  c->r[7]=0u+0x00000000u; // 804B626C
  c->r[5]=c->r[4]+0xFFFF8000u; // 804B6270
  c->r[6]=0u+0x00000000u; // 804B6274
  goto L_804B628C; // 804B6278
L_804B627C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B627C
  c->r[7]=c->r[7]+0x00000001u; // 804B6280
  W16(c->r[4]+c->r[6],c->r[5]); // 804B6284
  c->r[6]=c->r[6]+0x00000002u; // 804B6288
L_804B628C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B628C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B6290
  if (crb(c,0)) { IRQCHK(c); goto L_804B627C; } // 804B6294
  c->r[4]=0u+0x00000004u; // 804B6298
  c->r[5]=0u+0x00000000u; // 804B629C
  f_804BDBC0(c); return; // 804B62A0
}

// fn_804B62A4
void f_804B62A4(Ctx* __restrict c) {
  trace_call(0x804B62A4u);
  c->r[3]=0u+0x00000000u; // 804B62A4
  return; // 804B62A8
}

// fn_804B62AC
void f_804B62AC(Ctx* __restrict c) {
  trace_call(0x804B62ACu);
  c->r[3]=0u+0x00000000u; // 804B62AC
  return; // 804B62B0
}

// fn_804B62B4
void f_804B62B4(Ctx* __restrict c) {
  trace_call(0x804B62B4u);
  return; // 804B62B4
}

// fn_804B62B8
void f_804B62B8(Ctx* __restrict c) {
  trace_call(0x804B62B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B62B8
  c->r[0]=c->lr; // 804B62BC
  cmps(c,0,(int32_t)c->r[3],0); // 804B62C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B62C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B62C8
  c->r[31]=c->r[3]|c->r[3]; // 804B62CC
  if (crb(c,2)) { goto L_804B6304; } // 804B62D0
  c->r[12]=0u+0x80720000u; // 804B62D4
  c->r[12]=c->r[12]+0xFFFF9E08u; // 804B62D8
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B62DC
  c->r[12]=R32(c->r[12]+0x00000044u); // 804B62E0
  c->ctr=c->r[12]; // 804B62E4
  if (true) { c->lr=0x804B62ECu; dispatch(c,c->ctr); } // 804B62E8
  cmps(c,0,(int32_t)c->r[31],0); // 804B62EC
  if (crb(c,2)) { goto L_804B6304; } // 804B62F0
  if (crb(c,2)) { goto L_804B6304; } // 804B62F4
  c->r[3]=c->r[31]|c->r[31]; // 804B62F8
  c->r[4]=0u+0x00000000u; // 804B62FC
  c->lr=0x804B6304u; f_804BD9F0(c); // 804B6300
L_804B6304:;
  c->r[3]=c->r[31]|c->r[31]; // 804B6304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B6308
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B630C
  c->lr=c->r[0]; // 804B6310
  c->r[1]=c->r[1]+0x00000010u; // 804B6314
  return; // 804B6318
}

// fn_804B631C
void f_804B631C(Ctx* __restrict c) {
  trace_call(0x804B631Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B631C
  c->r[0]=c->lr; // 804B6320
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B6324
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B6328
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B632C
  c->r[30]=c->r[5]|c->r[5]; // 804B6330
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B6334
  c->r[29]=c->r[4]|c->r[4]; // 804B6338
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B633C
  c->r[28]=c->r[3]|c->r[3]; // 804B6340
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B6344
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B6348
  c->ctr=c->r[12]; // 804B634C
  if (true) { c->lr=0x804B6354u; dispatch(c,c->ctr); } // 804B6350
  c->r[31]=c->r[3]|c->r[3]; // 804B6354
  c->r[6]=0u+0x00000000u; // 804B6358
  c->r[7]=0u+0x00000000u; // 804B635C
  c->r[5]=0u+0x00000000u; // 804B6360
  c->r[4]=0u+0x00000000u; // 804B6364
  goto L_804B6390; // 804B6368
L_804B636C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 804B636C
  c->r[0]=R16(c->r[3]+c->r[5]); // 804B6370
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B6374
  if (!crb(c,2)) { goto L_804B6388; } // 804B6378
  c->r[3]=R32(c->r[28]+0x00000014u); // 804B637C
  c->r[6]=0u+0x00000001u; // 804B6380
  W16(c->r[3]+c->r[5],c->r[4]); // 804B6384
L_804B6388:;
  c->r[5]=c->r[5]+0x00000002u; // 804B6388
  c->r[7]=c->r[7]+0x00000001u; // 804B638C
L_804B6390:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804B6390
  cmpu(c,0,c->r[7],c->r[0]); // 804B6394
  if (crb(c,0)) { IRQCHK(c); goto L_804B636C; } // 804B6398
  cmps(c,0,(int32_t)c->r[6],0); // 804B639C
  if (crb(c,2)) { goto L_804B63B4; } // 804B63A0
  c->r[3]=c->r[28]|c->r[28]; // 804B63A4
  c->r[4]=0u+0x00000004u; // 804B63A8
  c->r[5]=0u+0x00000001u; // 804B63AC
  c->lr=0x804B63B4u; f_804BDBC0(c); // 804B63B0
L_804B63B4:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 804B63B4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B63B8
  c->r[4]=0u+0x00010000u; // 804B63BC
  c->r[3]=c->r[30]|c->r[30]; // 804B63C0
  W32(c->r[5]+c->r[0],c->r[30]); // 804B63C4
  c->r[6]=c->r[28]|c->r[28]; // 804B63C8
  c->r[4]=c->r[4]+0x00000002u; // 804B63CC
  c->r[5]=0u+0x00000000u; // 804B63D0
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B63D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B63D8
  c->ctr=c->r[12]; // 804B63DC
  if (true) { c->lr=0x804B63E4u; dispatch(c,c->ctr); } // 804B63E0
  c->r[3]=c->r[31]|c->r[31]; // 804B63E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B63E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B63EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B63F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B63F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B63F8
  c->lr=c->r[0]; // 804B63FC
  c->r[1]=c->r[1]+0x00000020u; // 804B6400
  return; // 804B6404
}

// fn_804B6408
void f_804B6408(Ctx* __restrict c) {
  trace_call(0x804B6408u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6408
  c->r[0]=c->lr; // 804B640C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B6410
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B6414
  c->r[31]=c->r[3]|c->r[3]; // 804B6418
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B641C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B6420
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B6424
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B6428
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B642C
  c->r[28]=R32(c->r[5]+c->r[29]); // 804B6430
  cmps(c,0,(int32_t)c->r[28],0); // 804B6434
  if (crb(c,2)) { goto L_804B64FC; } // 804B6438
  c->r[12]=R32(c->r[28]+0x00000000u); // 804B643C
  c->r[30]=0u+0x00010000u; // 804B6440
  c->r[3]=c->r[28]|c->r[28]; // 804B6444
  c->r[6]=c->r[31]|c->r[31]; // 804B6448
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B644C
  c->r[4]=c->r[30]+0x00000003u; // 804B6450
  c->r[5]=0u+0x00000000u; // 804B6454
  c->ctr=c->r[12]; // 804B6458
  if (true) { c->lr=0x804B6460u; dispatch(c,c->ctr); } // 804B645C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B6460
  c->r[0]=0u+0x00000000u; // 804B6464
  c->r[6]=0u+0x00000000u; // 804B6468
  c->r[7]=0u+0x00000000u; // 804B646C
  W32(c->r[3]+c->r[29],c->r[0]); // 804B6470
  c->r[4]=0u+0x00000000u; // 804B6474
  goto L_804B64D8; // 804B6478
L_804B647C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B647C
  c->r[8]=c->r[30]+0xFFFF8000u; // 804B6480
  c->r[5]=0u+0x00000000u; // 804B6484
  c->ctr=c->r[0]; // 804B6488
  cmps(c,0,(int32_t)c->r[0],0); // 804B648C
  if (!crb(c,1)) { goto L_804B64C8; } // 804B6490
L_804B6494:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B6494
  c->r[3]=R32(c->r[3]+c->r[5]); // 804B6498
  cmps(c,0,(int32_t)c->r[3],0); // 804B649C
  if (crb(c,2)) { goto L_804B64C0; } // 804B64A0
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B64A4
  c->r[0]=R16(c->r[4]+c->r[0]); // 804B64A8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B64AC
  if (!crb(c,2)) { goto L_804B64C0; } // 804B64B0
  c->r[6]=0u+0x00000001u; // 804B64B4
  c->r[8]=0u+0x00000000u; // 804B64B8
  goto L_804B64C8; // 804B64BC
L_804B64C0:;
  c->r[5]=c->r[5]+0x00000004u; // 804B64C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B6494; } // 804B64C4
L_804B64C8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B64C8
  c->r[7]=c->r[7]+0x00000001u; // 804B64CC
  W16(c->r[3]+c->r[4],c->r[8]); // 804B64D0
  c->r[4]=c->r[4]+0x00000002u; // 804B64D4
L_804B64D8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B64D8
  cmpu(c,0,c->r[7],c->r[0]); // 804B64DC
  if (crb(c,0)) { IRQCHK(c); goto L_804B647C; } // 804B64E0
  cmps(c,0,(int32_t)c->r[6],0); // 804B64E4
  if (!crb(c,2)) { goto L_804B64FC; } // 804B64E8
  c->r[3]=c->r[31]|c->r[31]; // 804B64EC
  c->r[4]=0u+0x00000004u; // 804B64F0
  c->r[5]=0u+0x00000000u; // 804B64F4
  c->lr=0x804B64FCu; f_804BDBC0(c); // 804B64F8
L_804B64FC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B64FC
  c->r[3]=c->r[28]|c->r[28]; // 804B6500
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B6504
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B6508
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B650C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B6510
  c->lr=c->r[0]; // 804B6514
  c->r[1]=c->r[1]+0x00000020u; // 804B6518
  return; // 804B651C
}

// fn_804B6520
void f_804B6520(Ctx* __restrict c) {
  trace_call(0x804B6520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6520
  c->r[0]=c->lr; // 804B6524
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B6528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B652C
  c->r[31]=0u+0x00000000u; // 804B6530
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B6534
  c->r[30]=c->r[3]|c->r[3]; // 804B6538
  goto L_804B655C; // 804B653C
L_804B6540:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B6540
  c->r[3]=c->r[30]|c->r[30]; // 804B6544
  c->r[4]=c->r[31]|c->r[31]; // 804B6548
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B654C
  c->ctr=c->r[12]; // 804B6550
  if (true) { c->lr=0x804B6558u; dispatch(c,c->ctr); } // 804B6554
  c->r[31]=c->r[31]+0x00000001u; // 804B6558
L_804B655C:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 804B655C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804B6560
  if (crb(c,0)) { IRQCHK(c); goto L_804B6540; } // 804B6564
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B6568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B656C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B6570
  c->lr=c->r[0]; // 804B6574
  c->r[1]=c->r[1]+0x00000010u; // 804B6578
  return; // 804B657C
}

// fn_804B6580
void f_804B6580(Ctx* __restrict c) {
  trace_call(0x804B6580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6580
  c->r[0]=c->lr; // 804B6584
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B6588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B658C
  c->r[31]=0u+0x00000000u; // 804B6590
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B6594
  c->r[30]=0u+0x00000000u; // 804B6598
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B659C
  c->r[29]=c->r[3]|c->r[3]; // 804B65A0
  goto L_804B65D0; // 804B65A4
L_804B65A8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B65A8
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B65AC
  cmps(c,0,(int32_t)c->r[3],0); // 804B65B0
  if (crb(c,2)) { goto L_804B65C8; } // 804B65B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B65B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B65BC
  c->ctr=c->r[12]; // 804B65C0
  if (true) { c->lr=0x804B65C8u; dispatch(c,c->ctr); } // 804B65C4
L_804B65C8:;
  c->r[31]=c->r[31]+0x00000004u; // 804B65C8
  c->r[30]=c->r[30]+0x00000001u; // 804B65CC
L_804B65D0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B65D0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B65D4
  if (crb(c,0)) { IRQCHK(c); goto L_804B65A8; } // 804B65D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B65DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B65E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B65E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B65E8
  c->lr=c->r[0]; // 804B65EC
  c->r[1]=c->r[1]+0x00000020u; // 804B65F0
  return; // 804B65F4
}

// fn_804B65F8
void f_804B65F8(Ctx* __restrict c) {
  trace_call(0x804B65F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B65F8
  c->r[0]=c->lr; // 804B65FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B6600
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B6604
  c->f[31]=c->f[1]; // 804B6608
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B660C
  c->r[31]=0u+0x00000000u; // 804B6610
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B6614
  c->r[30]=0u+0x00000000u; // 804B6618
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B661C
  c->r[29]=c->r[3]|c->r[3]; // 804B6620
  goto L_804B6654; // 804B6624
L_804B6628:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B6628
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B662C
  cmps(c,0,(int32_t)c->r[3],0); // 804B6630
  if (crb(c,2)) { goto L_804B664C; } // 804B6634
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B6638
  c->f[1]=c->f[31]; // 804B663C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804B6640
  c->ctr=c->r[12]; // 804B6644
  if (true) { c->lr=0x804B664Cu; dispatch(c,c->ctr); } // 804B6648
L_804B664C:;
  c->r[31]=c->r[31]+0x00000004u; // 804B664C
  c->r[30]=c->r[30]+0x00000001u; // 804B6650
L_804B6654:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B6654
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B6658
  if (crb(c,0)) { IRQCHK(c); goto L_804B6628; } // 804B665C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B6660
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B6664
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B6668
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B666C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B6670
  c->lr=c->r[0]; // 804B6674
  c->r[1]=c->r[1]+0x00000020u; // 804B6678
  return; // 804B667C
}

// fn_804B6680
void f_804B6680(Ctx* __restrict c) {
  trace_call(0x804B6680u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B6680
  c->r[6]=0u+0x00000000u; // 804B6684
  c->r[5]=0u+0x00000000u; // 804B6688
  c->ctr=c->r[0]; // 804B668C
  cmps(c,0,(int32_t)c->r[0],0); // 804B6690
  if (!crb(c,1)) { goto L_804B66CC; } // 804B6694
L_804B6698:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B6698
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B669C
  cmps(c,0,(int32_t)c->r[0],0); // 804B66A0
  if (crb(c,2)) { goto L_804B66C0; } // 804B66A4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B66A8
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B66AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B66B0
  c->r[12]=R32(c->r[12]+0x00000020u); // 804B66B4
  c->ctr=c->r[12]; // 804B66B8
  if (true) { dispatch(c,c->ctr); return; } // 804B66BC
L_804B66C0:;
  c->r[5]=c->r[5]+0x00000004u; // 804B66C0
  c->r[6]=c->r[6]+0x00000001u; // 804B66C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B6698; } // 804B66C8
L_804B66CC:;
  {uint32_t ea=c->r[2]+0x00001570u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B66CC
  return; // 804B66D0
}

// fn_804B66D4
void f_804B66D4(Ctx* __restrict c) {
  trace_call(0x804B66D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B66D4
  c->r[0]=c->lr; // 804B66D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B66DC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B66E0
  c->f[31]=c->f[1]; // 804B66E4
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B66E8
  c->r[31]=0u+0x00000000u; // 804B66EC
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B66F0
  c->r[30]=0u+0x00000000u; // 804B66F4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B66F8
  c->r[29]=c->r[3]|c->r[3]; // 804B66FC
  goto L_804B6730; // 804B6700
L_804B6704:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B6704
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B6708
  cmps(c,0,(int32_t)c->r[3],0); // 804B670C
  if (crb(c,2)) { goto L_804B6728; } // 804B6710
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B6714
  c->f[1]=c->f[31]; // 804B6718
  c->r[12]=R32(c->r[12]+0x00000028u); // 804B671C
  c->ctr=c->r[12]; // 804B6720
  if (true) { c->lr=0x804B6728u; dispatch(c,c->ctr); } // 804B6724
L_804B6728:;
  c->r[31]=c->r[31]+0x00000004u; // 804B6728
  c->r[30]=c->r[30]+0x00000001u; // 804B672C
L_804B6730:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B6730
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B6734
  if (crb(c,0)) { IRQCHK(c); goto L_804B6704; } // 804B6738
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B673C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B6740
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B6744
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B6748
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B674C
  c->lr=c->r[0]; // 804B6750
  c->r[1]=c->r[1]+0x00000020u; // 804B6754
  return; // 804B6758
}

// fn_804B675C
void f_804B675C(Ctx* __restrict c) {
  trace_call(0x804B675Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B675C
  c->r[6]=0u+0x00000000u; // 804B6760
  c->r[5]=0u+0x00000000u; // 804B6764
  c->ctr=c->r[0]; // 804B6768
  cmps(c,0,(int32_t)c->r[0],0); // 804B676C
  if (!crb(c,1)) { goto L_804B67A8; } // 804B6770
L_804B6774:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B6774
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B6778
  cmps(c,0,(int32_t)c->r[0],0); // 804B677C
  if (crb(c,2)) { goto L_804B679C; } // 804B6780
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B6784
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B6788
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B678C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804B6790
  c->ctr=c->r[12]; // 804B6794
  if (true) { dispatch(c,c->ctr); return; } // 804B6798
L_804B679C:;
  c->r[5]=c->r[5]+0x00000004u; // 804B679C
  c->r[6]=c->r[6]+0x00000001u; // 804B67A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B6774; } // 804B67A4
L_804B67A8:;
  {uint32_t ea=c->r[2]+0x00001574u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B67A8
  return; // 804B67AC
}

// fn_804B67B0
void f_804B67B0(Ctx* __restrict c) {
  trace_call(0x804B67B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B67B0
  c->r[0]=c->lr; // 804B67B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B67B8
  c->r[11]=c->r[1]+0x00000030u; // 804B67BC
  c->lr=0x804B67C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B67C0
  c->r[25]=c->r[3]|c->r[3]; // 804B67C4
  c->r[26]=c->r[4]|c->r[4]; // 804B67C8
  c->r[29]=0u+0x00000000u; // 804B67CC
  c->r[28]=0u+0x00000000u; // 804B67D0
  c->r[30]=0u+0x00000000u; // 804B67D4
  c->r[31]=0u+0x00000000u; // 804B67D8
  goto L_804B6868; // 804B67DC
L_804B67E0:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 804B67E0
  c->r[27]=R32(c->r[3]+c->r[30]); // 804B67E4
  cmps(c,0,(int32_t)c->r[27],0); // 804B67E8
  if (crb(c,2)) { goto L_804B6860; } // 804B67EC
  c->r[0]=R32(c->r[26]+0x00000000u); // 804B67F0
  c->r[3]=c->r[27]|c->r[27]; // 804B67F4
  c->r[4]=c->r[1]+0x00000008u; // 804B67F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B67FC
  c->r[12]=R32(c->r[27]+0x00000000u); // 804B6800
  c->r[12]=R32(c->r[12]+0x00000030u); // 804B6804
  c->ctr=c->r[12]; // 804B6808
  if (true) { c->lr=0x804B6810u; dispatch(c,c->ctr); } // 804B680C
  cmps(c,0,(int32_t)c->r[29],0); // 804B6810
  c->r[29]=0u+0x00000000u; // 804B6814
  if (!crb(c,2)) { goto L_804B6824; } // 804B6818
  cmps(c,0,(int32_t)c->r[3],0); // 804B681C
  if (crb(c,2)) { goto L_804B6828; } // 804B6820
L_804B6824:;
  c->r[29]=0u+0x00000001u; // 804B6824
L_804B6828:;
  c->r[5]=0u+0x00000000u; // 804B6828
  c->r[4]=0u+0x00000000u; // 804B682C
  goto L_804B6854; // 804B6830
L_804B6834:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B6834
  c->r[0]=R16(c->r[3]+c->r[4]); // 804B6838
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B683C
  if (!crb(c,2)) { goto L_804B684C; } // 804B6840
  c->r[3]=R32(c->r[25]+0x00000014u); // 804B6844
  W16(c->r[3]+c->r[4],c->r[31]); // 804B6848
L_804B684C:;
  c->r[4]=c->r[4]+0x00000002u; // 804B684C
  c->r[5]=c->r[5]+0x00000001u; // 804B6850
L_804B6854:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 804B6854
  cmpu(c,0,c->r[5],c->r[0]); // 804B6858
  if (crb(c,0)) { IRQCHK(c); goto L_804B6834; } // 804B685C
L_804B6860:;
  c->r[30]=c->r[30]+0x00000004u; // 804B6860
  c->r[28]=c->r[28]+0x00000001u; // 804B6864
L_804B6868:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 804B6868
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804B686C
  if (crb(c,0)) { IRQCHK(c); goto L_804B67E0; } // 804B6870
  c->r[3]=c->r[25]|c->r[25]; // 804B6874
  c->r[4]=0u+0x00000004u; // 804B6878
  c->r[5]=0u+0x00000001u; // 804B687C
  c->lr=0x804B6884u; f_804BDBC0(c); // 804B6880
  c->r[11]=c->r[1]+0x00000030u; // 804B6884
  c->r[3]=c->r[29]|c->r[29]; // 804B6888
  c->lr=0x804B6890u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B688C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B6890
  c->lr=c->r[0]; // 804B6894
  c->r[1]=c->r[1]+0x00000030u; // 804B6898
  return; // 804B689C
}

// fn_804B68A0
void f_804B68A0(Ctx* __restrict c) {
  trace_call(0x804B68A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B68A0
  c->r[0]=c->lr; // 804B68A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B68A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B68AC
  c->r[31]=0u+0x00000000u; // 804B68B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B68B4
  c->r[30]=0u+0x00000000u; // 804B68B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B68BC
  c->r[29]=c->r[3]|c->r[3]; // 804B68C0
  goto L_804B68F0; // 804B68C4
L_804B68C8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B68C8
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B68CC
  cmps(c,0,(int32_t)c->r[3],0); // 804B68D0
  if (crb(c,2)) { goto L_804B68E8; } // 804B68D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B68D8
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B68DC
  c->ctr=c->r[12]; // 804B68E0
  if (true) { c->lr=0x804B68E8u; dispatch(c,c->ctr); } // 804B68E4
L_804B68E8:;
  c->r[31]=c->r[31]+0x00000004u; // 804B68E8
  c->r[30]=c->r[30]+0x00000001u; // 804B68EC
L_804B68F0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B68F0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B68F4
  if (crb(c,0)) { IRQCHK(c); goto L_804B68C8; } // 804B68F8
  c->r[3]=0u+0x00010000u; // 804B68FC
  c->r[5]=0u+0x00000000u; // 804B6900
  c->r[4]=c->r[3]+0xFFFF8000u; // 804B6904
  c->r[6]=0u+0x00000000u; // 804B6908
  goto L_804B6920; // 804B690C
L_804B6910:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B6910
  c->r[5]=c->r[5]+0x00000001u; // 804B6914
  W16(c->r[3]+c->r[6],c->r[4]); // 804B6918
  c->r[6]=c->r[6]+0x00000002u; // 804B691C
L_804B6920:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B6920
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804B6924
  if (crb(c,0)) { IRQCHK(c); goto L_804B6910; } // 804B6928
  c->r[3]=c->r[29]|c->r[29]; // 804B692C
  c->r[4]=0u+0x00000004u; // 804B6930
  c->r[5]=0u+0x00000000u; // 804B6934
  c->lr=0x804B693Cu; f_804BDBC0(c); // 804B6938
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B693C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B6940
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B6944
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B6948
  c->lr=c->r[0]; // 804B694C
  c->r[1]=c->r[1]+0x00000020u; // 804B6950
  return; // 804B6954
}

// fn_804B6958
void f_804B6958(Ctx* __restrict c) {
  trace_call(0x804B6958u);
  c->r[5]=0u+0x00010000u; // 804B6958
  c->r[0]=c->r[5]+0x00000002u; // 804B695C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B6960
  if (crb(c,2)) { goto L_804B69E0; } // 804B6964
  if (!crb(c,0)) { goto L_804B697C; } // 804B6968
  c->r[0]=c->r[5]+0x00000001u; // 804B696C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B6970
  if (!crb(c,0)) { goto L_804B698C; } // 804B6974
  return; // 804B6978
L_804B697C:;
  c->r[0]=c->r[5]+0x00000004u; // 804B697C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B6980
  if (!crb(c,0)) return; // 804B6984
  goto L_804B69D4; // 804B6988
L_804B698C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B698C
  c->r[4]=0u+0x00000000u; // 804B6990
  c->r[7]=0u+0x00000000u; // 804B6994
  c->ctr=c->r[0]; // 804B6998
  cmps(c,0,(int32_t)c->r[0],0); // 804B699C
  if (!crb(c,1)) return; // 804B69A0
L_804B69A4:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B69A4
  c->r[0]=R32(c->r[5]+c->r[7]); // 804B69A8
  cmpu(c,0,c->r[0],c->r[6]); // 804B69AC
  if (!crb(c,2)) { goto L_804B69C4; } // 804B69B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B69B4
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B69B8
  c->ctr=c->r[12]; // 804B69BC
  if (true) { dispatch(c,c->ctr); return; } // 804B69C0
L_804B69C4:;
  c->r[7]=c->r[7]+0x00000004u; // 804B69C4
  c->r[4]=c->r[4]+0x00000001u; // 804B69C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B69A4; } // 804B69CC
  return; // 804B69D0
L_804B69D4:;
  c->r[0]=0u+0x00000000u; // 804B69D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B69D8
  return; // 804B69DC
L_804B69E0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B69E0
  return; // 804B69E4
}

// fn_804B69E8
void f_804B69E8(Ctx* __restrict c) {
  trace_call(0x804B69E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B69E8
  c->r[0]=c->lr; // 804B69EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B69F0
  c->r[11]=c->r[1]+0x00000020u; // 804B69F4
  c->lr=0x804B69FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B69F8
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B69FC
  c->r[26]=c->r[3]|c->r[3]; // 804B6A00
  c->r[28]=c->r[4]|c->r[4]; // 804B6A04
  c->r[27]=c->r[6]|c->r[6]; // 804B6A08
  cmps(c,0,(int32_t)c->r[0],0); // 804B6A0C
  if (!crb(c,2)) { goto L_804B6A1C; } // 804B6A10
  c->r[3]=0u+0x00000000u; // 804B6A14
  goto L_804B6B04; // 804B6A18
L_804B6A1C:;
  c->r[3]=c->r[5]|c->r[5]; // 804B6A1C
  c->lr=0x804B6A24u; f_804ACA9C(c); // 804B6A20
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B6A24
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 804B6A28
  c->r[4]=c->r[4]+0x00000023u; // 804B6A2C
  cmps(c,0,(int32_t)c->r[28],0); // 804B6A30
  c->r[29]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804B6A34
  c->r[30]=c->r[3]|c->r[3]; // 804B6A38
  c->r[3]=c->r[29]+c->r[0]; // 804B6A3C
  c->r[0]=c->r[3]+0x00000003u; // 804B6A40
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804B6A44
  if (crb(c,2)) { goto L_804B6A50; } // 804B6A48
  W32(c->r[28]+0x00000000u,c->r[4]); // 804B6A4C
L_804B6A50:;
  cmps(c,0,(int32_t)c->r[26],0); // 804B6A50
  if (!crb(c,2)) { goto L_804B6A60; } // 804B6A54
  c->r[3]=0u+0x00000000u; // 804B6A58
  goto L_804B6B04; // 804B6A5C
L_804B6A60:;
  c->r[3]=c->r[26]|c->r[26]; // 804B6A60
  c->lr=0x804B6A68u; f_803C4D08(c); // 804B6A64
  cmps(c,0,(int32_t)c->r[3],0); // 804B6A68
  c->r[28]=c->r[3]|c->r[3]; // 804B6A6C
  if (!crb(c,2)) { goto L_804B6A7C; } // 804B6A70
  c->r[3]=0u+0x00000000u; // 804B6A74
  goto L_804B6B04; // 804B6A78
L_804B6A7C:;
  if (crb(c,2)) { goto L_804B6B00; } // 804B6A7C
  c->r[31]=0u+0x00000000u; // 804B6A80
  c->r[12]=0u+0x80720000u; // 804B6A84
  W32(c->r[3]+0x00000004u,c->r[31]); // 804B6A88
  c->r[12]=c->r[12]+0xFFFF9E50u; // 804B6A8C
  c->r[0]=c->r[3]+0x00000020u; // 804B6A90
  W32(c->r[3]+0x00000008u,c->r[26]); // 804B6A94
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 804B6A98
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B6A9C
  W32(c->r[3]+0x00000010u,c->r[30]); // 804B6AA0
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B6AA4
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B6AA8
  c->ctr=c->r[12]; // 804B6AAC
  if (true) { c->lr=0x804B6AB4u; dispatch(c,c->ctr); } // 804B6AB0
  c->r[3]=0u+0x80720000u; // 804B6AB4
  c->r[0]=c->r[28]+c->r[29]; // 804B6AB8
  c->r[3]=c->r[3]+0xFFFF9E08u; // 804B6ABC
  c->r[4]=0u+0x00000000u; // 804B6AC0
  W32(c->r[28]+0x00000000u,c->r[3]); // 804B6AC4
  c->r[5]=0u+0x00000000u; // 804B6AC8
  W32(c->r[28]+0x00000018u,c->r[27]); // 804B6ACC
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 804B6AD0
  goto L_804B6AE8; // 804B6AD4
L_804B6AD8:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804B6AD8
  c->r[4]=c->r[4]+0x00000001u; // 804B6ADC
  W32(c->r[3]+c->r[5],c->r[31]); // 804B6AE0
  c->r[5]=c->r[5]+0x00000004u; // 804B6AE4
L_804B6AE8:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 804B6AE8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B6AEC
  if (crb(c,0)) { IRQCHK(c); goto L_804B6AD8; } // 804B6AF0
  c->r[3]=0u+0x80720000u; // 804B6AF4
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 804B6AF8
  W32(c->r[28]+0x00000000u,c->r[3]); // 804B6AFC
L_804B6B00:;
  c->r[3]=c->r[28]|c->r[28]; // 804B6B00
L_804B6B04:;
  c->r[11]=c->r[1]+0x00000020u; // 804B6B04
  c->lr=0x804B6B0Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B6B08
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B6B0C
  c->lr=c->r[0]; // 804B6B10
  c->r[1]=c->r[1]+0x00000020u; // 804B6B14
  return; // 804B6B18
}

// fn_804B6B1C
void f_804B6B1C(Ctx* __restrict c) {
  trace_call(0x804B6B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6B1C
  c->r[0]=c->lr; // 804B6B20
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B6B24
  c->r[11]=c->r[1]+0x00000020u; // 804B6B28
  c->lr=0x804B6B30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B6B2C
  c->r[6]=R32(c->r[3]+0x00000018u); // 804B6B30
  c->r[26]=c->r[3]|c->r[3]; // 804B6B34
  c->r[27]=c->r[4]|c->r[4]; // 804B6B38
  c->r[28]=c->r[5]|c->r[5]; // 804B6B3C
  c->r[29]=c->r[6]+0xFFFFFFFFu; // 804B6B40
  c->r[30]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B6B44
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B6B48
  goto L_804B6BAC; // 804B6B4C
L_804B6B50:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 804B6B50
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B6B54
  cmps(c,0,(int32_t)c->r[3],0); // 804B6B58
  if (crb(c,2)) { goto L_804B6BA4; } // 804B6B5C
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B6B60
  c->r[0]=R16(c->r[30]+c->r[0]); // 804B6B64
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B6B68
  if (!crb(c,2)) { goto L_804B6BA4; } // 804B6B6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B6B70
  c->r[4]=c->r[27]|c->r[27]; // 804B6B74
  c->r[5]=c->r[28]|c->r[28]; // 804B6B78
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B6B7C
  c->ctr=c->r[12]; // 804B6B80
  if (true) { c->lr=0x804B6B88u; dispatch(c,c->ctr); } // 804B6B84
  c->r[0]=R8(c->r[3]+0x00000000u); // 804B6B88
  cmps(c,0,(int32_t)c->r[0],0); // 804B6B8C
  if (!crb(c,2)) { goto L_804B6BC4; } // 804B6B90
  c->r[0]=R8(c->r[3]+0x00000001u); // 804B6B94
  cmps(c,0,(int32_t)c->r[0],0); // 804B6B98
  if (crb(c,2)) { goto L_804B6BA4; } // 804B6B9C
  goto L_804B6BC4; // 804B6BA0
L_804B6BA4:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 804B6BA4
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 804B6BA8
L_804B6BAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B6BAC
  if (!crb(c,0)) { IRQCHK(c); goto L_804B6B50; } // 804B6BB0
  c->r[0]=0u+0x00000000u; // 804B6BB4
  c->r[3]=c->r[27]|c->r[27]; // 804B6BB8
  W8(c->r[27]+0x00000000u,c->r[0]); // 804B6BBC
  W8(c->r[27]+0x00000001u,c->r[0]); // 804B6BC0
L_804B6BC4:;
  c->r[11]=c->r[1]+0x00000020u; // 804B6BC4
  c->lr=0x804B6BCCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B6BC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B6BCC
  c->lr=c->r[0]; // 804B6BD0
  c->r[1]=c->r[1]+0x00000020u; // 804B6BD4
  return; // 804B6BD8
}

// fn_804B6BDC
void f_804B6BDC(Ctx* __restrict c) {
  trace_call(0x804B6BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6BDC
  c->r[0]=c->lr; // 804B6BE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B6BE4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B6BE8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B6BEC
  c->r[11]=c->r[1]+0x00000030u; // 804B6BF0
  c->lr=0x804B6BF8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B6BF4
  c->r[8]=R32(c->r[5]+0x00000000u); // 804B6BF8
  c->r[29]=c->r[3]|c->r[3]; // 804B6BFC
  c->r[25]=c->r[4]|c->r[4]; // 804B6C00
  c->r[30]=c->r[5]|c->r[5]; // 804B6C04
  cmps(c,0,(int32_t)c->r[8],0); // 804B6C08
  c->r[27]=c->r[7]|c->r[7]; // 804B6C0C
  if (crb(c,2)) { goto L_804B6C20; } // 804B6C10
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B6C14
  cmps(c,0,(int32_t)c->r[0],0); // 804B6C18
  if (!crb(c,2)) { goto L_804B6C28; } // 804B6C1C
L_804B6C20:;
  c->r[3]=0u+0x00000000u; // 804B6C20
  goto L_804B6DAC; // 804B6C24
L_804B6C28:;
  c->r[31]=R16(c->r[8]+0x00000032u); // 804B6C28
  c->r[3]=c->r[6]|c->r[6]; // 804B6C2C
  c->lr=0x804B6C34u; f_804ACA9C(c); // 804B6C30
  c->r[0]=0u-c->r[27]; // 804B6C34
  c->r[28]=c->r[3]|c->r[3]; // 804B6C38
  c->r[4]=c->r[0]|c->r[27]; // 804B6C3C
  cmps(c,0,(int32_t)c->r[25],0); // 804B6C40
  c->r[4]=sraw(c,c->r[4],31); // 804B6C44
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B6C48
  c->r[3]=c->r[31]&c->r[4]; // 804B6C4C
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 804B6C50
  c->r[3]=c->r[26]+c->r[0]; // 804B6C54
  c->r[4]=c->r[3]+0x00000034u; // 804B6C58
  if (crb(c,2)) { goto L_804B6C64; } // 804B6C5C
  W32(c->r[25]+0x00000000u,c->r[4]); // 804B6C60
L_804B6C64:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B6C64
  if (!crb(c,2)) { goto L_804B6C74; } // 804B6C68
  c->r[3]=0u+0x00000000u; // 804B6C6C
  goto L_804B6DAC; // 804B6C70
L_804B6C74:;
  c->r[3]=c->r[29]|c->r[29]; // 804B6C74
  c->lr=0x804B6C7Cu; f_803C4D08(c); // 804B6C78
  cmps(c,0,(int32_t)c->r[3],0); // 804B6C7C
  c->r[31]=c->r[3]|c->r[3]; // 804B6C80
  if (!crb(c,2)) { goto L_804B6C90; } // 804B6C84
  c->r[3]=0u+0x00000000u; // 804B6C88
  goto L_804B6DAC; // 804B6C8C
L_804B6C90:;
  cmps(c,0,(int32_t)c->r[27],0); // 804B6C90
  if (crb(c,2)) { goto L_804B6CA0; } // 804B6C94
  c->r[27]=c->r[3]+0x00000034u; // 804B6C98
  goto L_804B6CA4; // 804B6C9C
L_804B6CA0:;
  c->r[27]=0u+0x00000000u; // 804B6CA0
L_804B6CA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804B6CA4
  c->r[4]=c->r[3]+c->r[26]; // 804B6CA8
  c->r[5]=c->r[4]+0x00000034u; // 804B6CAC
  if (crb(c,2)) { goto L_804B6DA8; } // 804B6CB0
  c->r[0]=0u+0x00000000u; // 804B6CB4
  c->r[4]=0u+0x80720000u; // 804B6CB8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B6CBC
  c->r[4]=c->r[4]+0xFFFF9E50u; // 804B6CC0
  c->r[30]=R32(c->r[30]+0x00000000u); // 804B6CC4
  W32(c->r[3]+0x00000008u,c->r[29]); // 804B6CC8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B6CCC
  W32(c->r[3]+0x00000000u,c->r[4]); // 804B6CD0
  W32(c->r[3]+0x00000010u,c->r[28]); // 804B6CD4
  W32(c->r[3]+0x00000014u,c->r[5]); // 804B6CD8
  c->r[3]=c->r[31]|c->r[31]; // 804B6CDC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804B6CE0
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B6CE4
  c->ctr=c->r[12]; // 804B6CE8
  if (true) { c->lr=0x804B6CF0u; dispatch(c,c->ctr); } // 804B6CEC
  c->r[4]=R16(c->r[30]+0x00000030u); // 804B6CF0
  c->r[0]=0u+0x43300000u; // 804B6CF4
  c->r[5]=R32(c->r[30]+0x00000038u); // 804B6CF8
  c->r[3]=0u+0x80720000u; // 804B6CFC
  c->r[4]=c->r[4]^0x80000000u; // 804B6D00
  {uint32_t ea=c->r[2]+0x00001570u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B6D04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804B6D08
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B6D0C
  {uint32_t ea=c->r[2]+0x00001574u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B6D10
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B6D14
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B6D18
  c->r[3]=c->r[3]+0xFFFF9D78u; // 804B6D1C
  {uint32_t ea=c->r[2]+0x00001578u; c->f[3]=RF64(ea);} // 804B6D20
  cmps(c,0,(int32_t)c->r[27],0); // 804B6D24
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B6D28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804B6D2C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B6D30
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804B6D34
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B6D38
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804B6D3C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804B6D40
  W32(c->r[31]+0x00000028u,c->r[0]); // 804B6D44
  W32(c->r[31]+0x00000000u,c->r[3]); // 804B6D48
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 804B6D4C
  W32(c->r[31]+0x00000030u,c->r[27]); // 804B6D50
  if (crb(c,2)) { goto L_804B6DA8; } // 804B6D54
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B6D58
  c->r[28]=0u+0x00000000u; // 804B6D5C
  c->r[27]=0u+0x00000000u; // 804B6D60
  goto L_804B6D9C; // 804B6D64
L_804B6D68:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B6D68
  c->r[3]=R16(c->r[3]+c->r[27]); // 804B6D6C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B6D70
  if (!crb(c,2)) { goto L_804B6D94; } // 804B6D74
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B6D78
  c->f[1]=c->f[31]; // 804B6D7C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B6D80
  c->r[4]=R32(c->r[31]+0x00000030u); // 804B6D84
  c->r[3]=c->r[31]+0x0000002Cu; // 804B6D88
  c->r[4]=c->r[4]+c->r[0]; // 804B6D8C
  c->lr=0x804B6D94u; f_804B1088(c); // 804B6D90
L_804B6D94:;
  c->r[27]=c->r[27]+0x00000002u; // 804B6D94
  c->r[28]=c->r[28]+0x00000001u; // 804B6D98
L_804B6D9C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B6D9C
  cmpu(c,0,c->r[28],c->r[0]); // 804B6DA0
  if (crb(c,0)) { IRQCHK(c); goto L_804B6D68; } // 804B6DA4
L_804B6DA8:;
  c->r[3]=c->r[31]|c->r[31]; // 804B6DA8
L_804B6DAC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B6DAC
  c->r[11]=c->r[1]+0x00000030u; // 804B6DB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B6DB4
  c->lr=0x804B6DBCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B6DB8
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B6DBC
  c->lr=c->r[0]; // 804B6DC0
  c->r[1]=c->r[1]+0x00000040u; // 804B6DC4
  return; // 804B6DC8
}

// fn_804B6DCC
void f_804B6DCC(Ctx* __restrict c) {
  trace_call(0x804B6DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6DCC
  c->r[0]=c->lr; // 804B6DD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B6DD4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B6DD8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B6DDC
  c->r[12]=0u+0x80720000u; // 804B6DE0
  c->r[0]=0u+0x00000000u; // 804B6DE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B6DE8
  c->r[12]=c->r[12]+0xFFFF9E50u; // 804B6DEC
  c->r[31]=c->r[3]|c->r[3]; // 804B6DF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B6DF4
  c->r[30]=c->r[5]|c->r[5]; // 804B6DF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B6DFC
  c->r[29]=c->r[8]|c->r[8]; // 804B6E00
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B6E04
  W32(c->r[3]+0x00000008u,c->r[4]); // 804B6E08
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B6E0C
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B6E10
  W32(c->r[3]+0x00000010u,c->r[7]); // 804B6E14
  W32(c->r[3]+0x00000014u,c->r[6]); // 804B6E18
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B6E1C
  c->ctr=c->r[12]; // 804B6E20
  if (true) { c->lr=0x804B6E28u; dispatch(c,c->ctr); } // 804B6E24
  c->r[5]=R32(c->r[30]+0x00000000u); // 804B6E28
  c->r[0]=0u+0x43300000u; // 804B6E2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B6E30
  c->r[3]=0u+0x80720000u; // 804B6E34
  c->r[0]=R16(c->r[5]+0x00000030u); // 804B6E38
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B6E3C
  c->r[5]=R32(c->r[5]+0x00000038u); // 804B6E40
  c->r[3]=c->r[3]+0xFFFF9D78u; // 804B6E44
  c->r[0]=c->r[0]^0x80000000u; // 804B6E48
  {uint32_t ea=c->r[2]+0x00001570u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B6E4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B6E50
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B6E54
  c->r[4]=R32(c->r[4]+c->r[0]); // 804B6E58
  cmps(c,0,(int32_t)c->r[29],0); // 804B6E5C
  {uint32_t ea=c->r[2]+0x00001578u; c->f[2]=RF64(ea);} // 804B6E60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804B6E64
  {uint32_t ea=c->r[2]+0x00001574u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B6E68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804B6E6C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B6E70
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 804B6E74
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B6E78
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[31]);} // 804B6E7C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804B6E80
  W32(c->r[31]+0x00000028u,c->r[4]); // 804B6E84
  W32(c->r[31]+0x00000000u,c->r[3]); // 804B6E88
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 804B6E8C
  W32(c->r[31]+0x00000030u,c->r[29]); // 804B6E90
  if (crb(c,2)) { goto L_804B6EE4; } // 804B6E94
  c->r[30]=0u+0x00000000u; // 804B6E98
  c->r[29]=0u+0x00000000u; // 804B6E9C
  goto L_804B6ED8; // 804B6EA0
L_804B6EA4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B6EA4
  c->r[3]=R16(c->r[3]+c->r[29]); // 804B6EA8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B6EAC
  if (!crb(c,2)) { goto L_804B6ED0; } // 804B6EB0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B6EB4
  c->f[1]=c->f[31]; // 804B6EB8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B6EBC
  c->r[4]=R32(c->r[31]+0x00000030u); // 804B6EC0
  c->r[3]=c->r[31]+0x0000002Cu; // 804B6EC4
  c->r[4]=c->r[4]+c->r[0]; // 804B6EC8
  c->lr=0x804B6ED0u; f_804B1088(c); // 804B6ECC
L_804B6ED0:;
  c->r[29]=c->r[29]+0x00000002u; // 804B6ED0
  c->r[30]=c->r[30]+0x00000001u; // 804B6ED4
L_804B6ED8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B6ED8
  cmpu(c,0,c->r[30],c->r[0]); // 804B6EDC
  if (crb(c,0)) { IRQCHK(c); goto L_804B6EA4; } // 804B6EE0
L_804B6EE4:;
  c->r[3]=c->r[31]|c->r[31]; // 804B6EE4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B6EE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B6EEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B6EF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B6EF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B6EF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B6EFC
  c->lr=c->r[0]; // 804B6F00
  c->r[1]=c->r[1]+0x00000030u; // 804B6F04
  return; // 804B6F08
}

// fn_804B6F0C
void f_804B6F0C(Ctx* __restrict c) {
  trace_call(0x804B6F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6F0C
  c->r[0]=c->lr; // 804B6F10
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B6F14
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B6F18
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B6F1C
  c->f[3]=c->f[1]; // 804B6F20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B6F24
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B6F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B6F2C
  c->r[29]=c->r[3]|c->r[3]; // 804B6F30
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B6F34
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B6F38
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B6F3C
  c->ctr=c->r[12]; // 804B6F40
  if (true) { c->lr=0x804B6F48u; dispatch(c,c->ctr); } // 804B6F44
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B6F48
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B6F4C
  cmps(c,0,(int32_t)c->r[0],0); // 804B6F50
  if (crb(c,2)) { goto L_804B6FA8; } // 804B6F54
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B6F58
  c->r[31]=0u+0x00000000u; // 804B6F5C
  c->r[30]=0u+0x00000000u; // 804B6F60
  goto L_804B6F9C; // 804B6F64
L_804B6F68:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B6F68
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B6F6C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B6F70
  if (!crb(c,2)) { goto L_804B6F94; } // 804B6F74
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B6F78
  c->f[1]=c->f[31]; // 804B6F7C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B6F80
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B6F84
  c->r[3]=c->r[29]+0x0000002Cu; // 804B6F88
  c->r[4]=c->r[4]+c->r[0]; // 804B6F8C
  c->lr=0x804B6F94u; f_804B1088(c); // 804B6F90
L_804B6F94:;
  c->r[30]=c->r[30]+0x00000002u; // 804B6F94
  c->r[31]=c->r[31]+0x00000001u; // 804B6F98
L_804B6F9C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B6F9C
  cmpu(c,0,c->r[31],c->r[0]); // 804B6FA0
  if (crb(c,0)) { IRQCHK(c); goto L_804B6F68; } // 804B6FA4
L_804B6FA8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B6FA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B6FAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B6FB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B6FB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B6FB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B6FBC
  c->lr=c->r[0]; // 804B6FC0
  c->r[1]=c->r[1]+0x00000030u; // 804B6FC4
  return; // 804B6FC8
}

// fn_804B6FCC
void f_804B6FCC(Ctx* __restrict c) {
  trace_call(0x804B6FCCu);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B6FCC
  return; // 804B6FD0
}

// fn_804B6FD4
void f_804B6FD4(Ctx* __restrict c) {
  trace_call(0x804B6FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B6FD4
  c->r[0]=c->lr; // 804B6FD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B6FDC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B6FE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B6FE4
  {uint32_t ea=c->r[2]+0x00001570u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B6FE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B6FEC
  fcmp(c,0,c->f[0],c->f[1]); // 804B6FF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B6FF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B6FF8
  c->r[29]=c->r[3]|c->r[3]; // 804B6FFC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B7000
  if (!crb(c,2)) { goto L_804B7064; } // 804B7004
  c->r[0]=R32(c->r[3]+0x00000030u); // 804B7008
  cmps(c,0,(int32_t)c->r[0],0); // 804B700C
  if (crb(c,2)) { goto L_804B7064; } // 804B7010
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B7014
  c->r[31]=0u+0x00000000u; // 804B7018
  c->r[30]=0u+0x00000000u; // 804B701C
  goto L_804B7058; // 804B7020
L_804B7024:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B7024
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B7028
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B702C
  if (!crb(c,2)) { goto L_804B7050; } // 804B7030
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B7034
  c->f[1]=c->f[31]; // 804B7038
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B703C
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B7040
  c->r[3]=c->r[29]+0x0000002Cu; // 804B7044
  c->r[4]=c->r[4]+c->r[0]; // 804B7048
  c->lr=0x804B7050u; f_804B1088(c); // 804B704C
L_804B7050:;
  c->r[30]=c->r[30]+0x00000002u; // 804B7050
  c->r[31]=c->r[31]+0x00000001u; // 804B7054
L_804B7058:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B7058
  cmpu(c,0,c->r[31],c->r[0]); // 804B705C
  if (crb(c,0)) { IRQCHK(c); goto L_804B7024; } // 804B7060
L_804B7064:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B7064
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B7068
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B706C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B7070
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B7074
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B7078
  c->lr=c->r[0]; // 804B707C
  c->r[1]=c->r[1]+0x00000030u; // 804B7080
  return; // 804B7084
}

// fn_804B7088
void f_804B7088(Ctx* __restrict c) {
  trace_call(0x804B7088u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B7088
  return; // 804B708C
}

// fn_804B7090
void f_804B7090(Ctx* __restrict c) {
  trace_call(0x804B7090u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7090
  c->r[0]=c->lr; // 804B7094
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B7098
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B709C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B70A0
  {uint32_t ea=c->r[2]+0x00001570u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B70A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B70A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B70AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B70B0
  c->r[29]=c->r[3]|c->r[3]; // 804B70B4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B70B8
  fcmp(c,0,c->f[0],c->f[1]); // 804B70BC
  if (crb(c,2)) { goto L_804B714C; } // 804B70C0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B70C4
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B70C8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B70CC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804B70D0
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B70D4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B70D8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B70DC
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804B70E0
  c->ctr=c->r[12]; // 804B70E4
  if (true) { c->lr=0x804B70ECu; dispatch(c,c->ctr); } // 804B70E8
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B70EC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B70F0
  cmps(c,0,(int32_t)c->r[0],0); // 804B70F4
  if (crb(c,2)) { goto L_804B714C; } // 804B70F8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B70FC
  c->r[31]=0u+0x00000000u; // 804B7100
  c->r[30]=0u+0x00000000u; // 804B7104
  goto L_804B7140; // 804B7108
L_804B710C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B710C
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B7110
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B7114
  if (!crb(c,2)) { goto L_804B7138; } // 804B7118
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B711C
  c->f[1]=c->f[31]; // 804B7120
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B7124
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B7128
  c->r[3]=c->r[29]+0x0000002Cu; // 804B712C
  c->r[4]=c->r[4]+c->r[0]; // 804B7130
  c->lr=0x804B7138u; f_804B1088(c); // 804B7134
L_804B7138:;
  c->r[30]=c->r[30]+0x00000002u; // 804B7138
  c->r[31]=c->r[31]+0x00000001u; // 804B713C
L_804B7140:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B7140
  cmpu(c,0,c->r[31],c->r[0]); // 804B7144
  if (crb(c,0)) { IRQCHK(c); goto L_804B710C; } // 804B7148
L_804B714C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B714C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B7150
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B7154
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B7158
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B715C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B7160
  c->lr=c->r[0]; // 804B7164
  c->r[1]=c->r[1]+0x00000030u; // 804B7168
  return; // 804B716C
}

// fn_804B7170
void f_804B7170(Ctx* __restrict c) {
  trace_call(0x804B7170u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7170
  c->r[0]=c->lr; // 804B7174
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B7178
  c->r[11]=c->r[1]+0x00000030u; // 804B717C
  c->lr=0x804B7184u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B7180
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804B7184
  c->r[27]=c->r[3]|c->r[3]; // 804B7188
  c->r[28]=c->r[4]|c->r[4]; // 804B718C
  c->r[30]=0u+0x00000000u; // 804B7190
  c->r[31]=R16(c->r[5]+0x00000032u); // 804B7194
  c->r[29]=0u+0x00000000u; // 804B7198
  cmps(c,0,(int32_t)c->r[31],0); // 804B719C
  if (!crb(c,1)) { goto L_804B723C; } // 804B71A0
  goto L_804B7230; // 804B71A4
L_804B71A8:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 804B71A8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B71AC
  cmps(c,0,(int32_t)c->r[0],0); // 804B71B0
  if (crb(c,2)) { goto L_804B71C0; } // 804B71B4
  c->r[0]=c->r[3]+c->r[0]; // 804B71B8
  goto L_804B71C4; // 804B71BC
L_804B71C0:;
  c->r[0]=0u+0x00000000u; // 804B71C0
L_804B71C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B71C4
  if (crb(c,2)) { goto L_804B71F0; } // 804B71C8
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 804B71CC
  c->r[3]=c->r[0]+c->r[3]; // 804B71D0
  c->r[3]=R32(c->r[3]+0x00000024u); // 804B71D4
  cmps(c,0,(int32_t)c->r[3],0); // 804B71D8
  if (crb(c,2)) { goto L_804B71E8; } // 804B71DC
  c->r[5]=c->r[0]+c->r[3]; // 804B71E0
  goto L_804B71F4; // 804B71E4
L_804B71E8:;
  c->r[5]=0u+0x00000000u; // 804B71E8
  goto L_804B71F4; // 804B71EC
L_804B71F0:;
  c->r[5]=0u+0x00000000u; // 804B71F0
L_804B71F4:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B71F4
  c->r[3]=c->r[28]|c->r[28]; // 804B71F8
  c->r[4]=c->r[1]+0x00000008u; // 804B71FC
  c->r[5]=c->r[0]+c->r[5]; // 804B7200
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B7204
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B7208
  c->lr=0x804B7210u; f_804AC9A4(c); // 804B720C
  cmps(c,0,(int32_t)c->r[3],0); // 804B7210
  if (crb(c,2)) { goto L_804B722C; } // 804B7214
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B7218
  c->r[30]=0u+0x00000001u; // 804B721C
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B7220
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804B7224
  W16(c->r[3]+c->r[0],c->r[29]); // 804B7228
L_804B722C:;
  c->r[29]=c->r[29]+0x00000001u; // 804B722C
L_804B7230:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804B7230
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 804B7234
  if (crb(c,0)) { IRQCHK(c); goto L_804B71A8; } // 804B7238
L_804B723C:;
  c->r[3]=c->r[27]|c->r[27]; // 804B723C
  c->r[4]=0u+0x00000004u; // 804B7240
  c->r[5]=0u+0x00000001u; // 804B7244
  c->lr=0x804B724Cu; f_804BDBC0(c); // 804B7248
  c->r[11]=c->r[1]+0x00000030u; // 804B724C
  c->r[3]=c->r[30]|c->r[30]; // 804B7250
  c->lr=0x804B7258u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B7254
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B7258
  c->lr=c->r[0]; // 804B725C
  c->r[1]=c->r[1]+0x00000030u; // 804B7260
  return; // 804B7264
}

// fn_804B7268
void f_804B7268(Ctx* __restrict c) {
  trace_call(0x804B7268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7268
  c->r[0]=c->lr; // 804B726C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B7270
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B7274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B7278
  c->r[31]=c->r[4]|c->r[4]; // 804B727C
  c->r[6]=R32(c->r[3]+0x00000014u); // 804B7280
  c->r[5]=R16(c->r[6]+c->r[0]); // 804B7284
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 804B7288
  if (crb(c,2)) { goto L_804B72A4; } // 804B728C
  c->r[0]=0u+0x00000000u; // 804B7290
  c->r[3]=c->r[31]|c->r[31]; // 804B7294
  W8(c->r[4]+0x00000000u,c->r[0]); // 804B7298
  W8(c->r[4]+0x00000001u,c->r[0]); // 804B729C
  goto L_804B72CC; // 804B72A0
L_804B72A4:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 804B72A4
  cmps(c,0,(int32_t)c->r[6],0); // 804B72A8
  if (crb(c,2)) { goto L_804B72BC; } // 804B72AC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 804B72B0
  c->r[3]=c->r[6]+c->r[0]; // 804B72B4
  goto L_804B72CC; // 804B72B8
L_804B72BC:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B72BC
  c->r[3]=c->r[3]+0x0000002Cu; // 804B72C0
  c->lr=0x804B72C8u; f_804B1088(c); // 804B72C4
  c->r[3]=c->r[31]|c->r[31]; // 804B72C8
L_804B72CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B72CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B72D0
  c->lr=c->r[0]; // 804B72D4
  c->r[1]=c->r[1]+0x00000010u; // 804B72D8
  return; // 804B72DC
}

// fn_804B72E0
void f_804B72E0(Ctx* __restrict c) {
  trace_call(0x804B72E0u);
  c->r[5]=0u+0x00010000u; // 804B72E0
  c->r[0]=c->r[5]+0x00000002u; // 804B72E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B72E8
  if (crb(c,2)) { goto L_804B732C; } // 804B72EC
  if (!crb(c,0)) { goto L_804B7300; } // 804B72F0
  cmps(c,0,(int32_t)c->r[4],8); // 804B72F4
  if (crb(c,2)) { goto L_804B7310; } // 804B72F8
  return; // 804B72FC
L_804B7300:;
  c->r[0]=c->r[5]+0x00000004u; // 804B7300
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B7304
  if (!crb(c,0)) return; // 804B7308
  goto L_804B7320; // 804B730C
L_804B7310:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7310
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B7314
  c->ctr=c->r[12]; // 804B7318
  if (true) { dispatch(c,c->ctr); return; } // 804B731C
L_804B7320:;
  c->r[0]=0u+0x00000000u; // 804B7320
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B7324
  return; // 804B7328
L_804B732C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B732C
  return; // 804B7330
}

// fn_804B7334
void f_804B7334(Ctx* __restrict c) {
  trace_call(0x804B7334u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7334
  c->r[0]=c->lr; // 804B7338
  W32(c->r[1]+0x00000074u,c->r[0]); // 804B733C
  c->r[11]=c->r[1]+0x00000070u; // 804B7340
  c->lr=0x804B7348u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B7344
  c->r[31]=c->r[5]|c->r[5]; // 804B7348
  c->r[26]=R8(c->r[5]+0x00000000u); // 804B734C
  c->r[22]=c->r[3]|c->r[3]; // 804B7350
  c->r[30]=c->r[4]|c->r[4]; // 804B7354
  c->r[27]=c->r[31]|c->r[31]; // 804B7358
  c->r[29]=c->r[1]+0x00000024u; // 804B735C
  c->r[28]=0u+0x00000000u; // 804B7360
  goto L_804B74A0; // 804B7364
L_804B7368:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 804B7368
  if (crb(c,2)) { goto L_804B7494; } // 804B736C
  c->r[0]=R32(c->r[27]+0x00000004u); // 804B7370
  c->r[3]=c->r[22]|c->r[22]; // 804B7374
  c->r[4]=c->r[28]|c->r[28]; // 804B7378
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804B737C
  c->lr=0x804B7384u; f_804AE80C(c); // 804B7380
  W32(c->r[1]+0x00000008u,c->r[29]); // 804B7384
  c->r[25]=c->r[3]|c->r[3]; // 804B7388
  c->r[4]=c->r[1]+0x00000038u; // 804B738C
  c->r[5]=c->r[1]+0x00000034u; // 804B7390
  c->r[6]=c->r[1]+0x00000030u; // 804B7394
  c->r[7]=c->r[1]+0x0000002Cu; // 804B7398
  c->r[8]=c->r[1]+0x00000028u; // 804B739C
  c->r[9]=c->r[1]+0x00000012u; // 804B73A0
  c->r[10]=c->r[1]+0x00000011u; // 804B73A4
  c->lr=0x804B73ACu; f_803A6534(c); // 804B73A8
  c->r[3]=c->r[25]|c->r[25]; // 804B73AC
  c->lr=0x804B73B4u; f_803A6510(c); // 804B73B0
  c->r[24]=c->r[3]|c->r[3]; // 804B73B4
  c->r[3]=c->r[25]|c->r[25]; // 804B73B8
  c->lr=0x804B73C0u; f_803A651C(c); // 804B73BC
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 804B73C0
  c->r[23]=c->r[3]|c->r[3]; // 804B73C4
  c->r[0]=R32(c->r[4]+0x00000018u); // 804B73C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804B73CC
  if (crb(c,2)) { goto L_804B7424; } // 804B73D0
  c->r[3]=c->r[1]+0x0000003Cu; // 804B73D4
  c->r[4]=c->r[1]+0x00000020u; // 804B73D8
  c->r[5]=c->r[1]+0x00000016u; // 804B73DC
  c->r[6]=c->r[1]+0x00000014u; // 804B73E0
  c->r[7]=c->r[1]+0x00000018u; // 804B73E4
  c->r[8]=c->r[1]+0x00000030u; // 804B73E8
  c->r[9]=c->r[1]+0x0000002Cu; // 804B73EC
  c->r[10]=c->r[1]+0x00000010u; // 804B73F0
  c->lr=0x804B73F8u; f_804B06AC(c); // 804B73F4
  W32(c->r[1]+0x00000008u,c->r[28]); // 804B73F8
  c->r[3]=c->r[25]|c->r[25]; // 804B73FC
  c->r[8]=c->r[24]|c->r[24]; // 804B7400
  c->r[9]=c->r[23]|c->r[23]; // 804B7404
  c->r[4]=R32(c->r[1]+0x00000020u); // 804B7408
  c->r[5]=R16(c->r[1]+0x00000016u); // 804B740C
  c->r[6]=R16(c->r[1]+0x00000014u); // 804B7410
  c->r[7]=R32(c->r[1]+0x00000018u); // 804B7414
  c->r[10]=R8(c->r[1]+0x00000010u); // 804B7418
  c->lr=0x804B7420u; f_803A62C8(c); // 804B741C
  goto L_804B746C; // 804B7420
L_804B7424:;
  c->r[3]=c->r[1]+0x0000003Cu; // 804B7424
  c->r[4]=c->r[1]+0x00000020u; // 804B7428
  c->r[5]=c->r[1]+0x00000016u; // 804B742C
  c->r[6]=c->r[1]+0x00000014u; // 804B7430
  c->r[7]=c->r[1]+0x0000001Cu; // 804B7434
  c->r[8]=c->r[1]+0x00000030u; // 804B7438
  c->r[9]=c->r[1]+0x0000002Cu; // 804B743C
  c->r[10]=c->r[1]+0x00000010u; // 804B7440
  c->lr=0x804B7448u; f_804B05F0(c); // 804B7444
  c->r[4]=R32(c->r[1]+0x00000020u); // 804B7448
  c->r[3]=c->r[25]|c->r[25]; // 804B744C
  c->r[5]=R16(c->r[1]+0x00000016u); // 804B7450
  c->r[8]=c->r[24]|c->r[24]; // 804B7454
  c->r[6]=R16(c->r[1]+0x00000014u); // 804B7458
  c->r[9]=c->r[23]|c->r[23]; // 804B745C
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 804B7460
  c->r[10]=R8(c->r[1]+0x00000010u); // 804B7464
  c->lr=0x804B746Cu; f_803A60BC(c); // 804B7468
L_804B746C:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 804B746C
  c->r[3]=c->r[25]|c->r[25]; // 804B7470
  c->r[5]=R32(c->r[1]+0x00000034u); // 804B7474
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B7478
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B747C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B7480
  c->r[6]=R8(c->r[1]+0x00000012u); // 804B7484
  c->r[7]=R8(c->r[1]+0x00000011u); // 804B7488
  c->r[8]=R32(c->r[1]+0x00000024u); // 804B748C
  c->lr=0x804B7494u; f_803A6310(c); // 804B7490
L_804B7494:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 804B7494
  c->r[27]=c->r[27]+0x00000004u; // 804B7498
  c->r[28]=c->r[28]+0x00000001u; // 804B749C
L_804B74A0:;
  cmps(c,0,(int32_t)c->r[26],0); // 804B74A0
  if (!crb(c,2)) { IRQCHK(c); goto L_804B7368; } // 804B74A4
  c->r[23]=R8(c->r[31]+0x00000001u); // 804B74A8
  c->r[26]=0u+0x00000000u; // 804B74AC
  goto L_804B7508; // 804B74B0
L_804B74B4:;
  c->r[0]=rotl(c->r[23],0)&0x00000001u; cr0(c,c->r[0]); // 804B74B4
  if (crb(c,2)) { goto L_804B74FC; } // 804B74B8
  c->r[4]=R32(c->r[31]+0x00000024u); // 804B74BC
  c->r[0]=R32(c->r[4]+0x00000010u); // 804B74C0
  cmps(c,0,(int32_t)c->r[0],0); // 804B74C4
  if (crb(c,2)) { goto L_804B74D4; } // 804B74C8
  c->r[28]=c->r[4]+c->r[0]; // 804B74CC
  goto L_804B74D8; // 804B74D0
L_804B74D4:;
  c->r[28]=0u+0x00000000u; // 804B74D4
L_804B74D8:;
  c->r[27]=R32(c->r[4]+0x00000018u); // 804B74D8
  c->r[3]=c->r[30]|c->r[30]; // 804B74DC
  c->r[29]=R16(c->r[4]+0x0000001Cu); // 804B74E0
  c->r[4]=c->r[26]|c->r[26]; // 804B74E4
  c->lr=0x804B74ECu; f_804AE974(c); // 804B74E8
  c->r[4]=c->r[28]|c->r[28]; // 804B74EC
  c->r[5]=c->r[27]|c->r[27]; // 804B74F0
  c->r[6]=c->r[29]|c->r[29]; // 804B74F4
  c->lr=0x804B74FCu; f_803A67D8(c); // 804B74F8
L_804B74FC:;
  c->r[23]=rotl(c->r[23],31)&0x7FFFFFFFu; // 804B74FC
  c->r[31]=c->r[31]+0x00000004u; // 804B7500
  c->r[26]=c->r[26]+0x00000001u; // 804B7504
L_804B7508:;
  cmps(c,0,(int32_t)c->r[23],0); // 804B7508
  if (!crb(c,2)) { IRQCHK(c); goto L_804B74B4; } // 804B750C
  c->r[11]=c->r[1]+0x00000070u; // 804B7510
  c->lr=0x804B7518u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B7514
  c->r[0]=R32(c->r[1]+0x00000074u); // 804B7518
  c->lr=c->r[0]; // 804B751C
  c->r[1]=c->r[1]+0x00000070u; // 804B7520
  return; // 804B7524
}

// fn_804B7528
void f_804B7528(Ctx* __restrict c) {
  trace_call(0x804B7528u);
  c->r[3]=0u+0x806B0000u; // 804B7528
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B752C
  c->r[3]=c->r[3]+0xFFFFBC30u; // 804B7530
  cmpu(c,0,c->r[0],c->r[3]); // 804B7534
  if (!crb(c,2)) { goto L_804B7544; } // 804B7538
  c->r[3]=0u+0x00000001u; // 804B753C
  return; // 804B7540
L_804B7544:;
  c->r[3]=0u+0x806B0000u; // 804B7544
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B7548
  c->r[3]=c->r[3]+0xFFFFBBE0u; // 804B754C
  cmpu(c,0,c->r[0],c->r[3]); // 804B7550
  if (!crb(c,2)) { goto L_804B7560; } // 804B7554
  c->r[3]=0u+0x00000001u; // 804B7558
  return; // 804B755C
L_804B7560:;
  c->r[3]=0u+0x806B0000u; // 804B7560
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B7564
  cmpu(c,0,c->r[0],c->r[3]); // 804B7568
  if (!crb(c,2)) { goto L_804B7578; } // 804B756C
  c->r[3]=0u+0x00000001u; // 804B7570
  return; // 804B7574
L_804B7578:;
  c->r[3]=0u+0x806B0000u; // 804B7578
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B757C
  c->r[0]=c->r[3]-c->r[0]; // 804B7580
  c->r[0]=cntlz(c->r[0]); // 804B7584
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B7588
  return; // 804B758C
}

// fn_804B7590
void f_804B7590(Ctx* __restrict c) {
  trace_call(0x804B7590u);
  c->r[3]=0u+0x806B0000u; // 804B7590
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B7594
  c->r[3]=c->r[3]+0xFFFFBBE0u; // 804B7598
  cmpu(c,0,c->r[0],c->r[3]); // 804B759C
  if (!crb(c,2)) { goto L_804B75AC; } // 804B75A0
  c->r[3]=0u+0x00000001u; // 804B75A4
  return; // 804B75A8
L_804B75AC:;
  c->r[3]=0u+0x806B0000u; // 804B75AC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B75B0
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B75B4
  cmpu(c,0,c->r[0],c->r[3]); // 804B75B8
  if (!crb(c,2)) { goto L_804B75C8; } // 804B75BC
  c->r[3]=0u+0x00000001u; // 804B75C0
  return; // 804B75C4
L_804B75C8:;
  c->r[3]=0u+0x806B0000u; // 804B75C8
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B75CC
  c->r[0]=c->r[3]-c->r[0]; // 804B75D0
  c->r[0]=cntlz(c->r[0]); // 804B75D4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B75D8
  return; // 804B75DC
}

// fn_804B75E0
void f_804B75E0(Ctx* __restrict c) {
  trace_call(0x804B75E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B75E0
  c->r[0]=c->lr; // 804B75E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B75E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B75EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B75F0
  c->ctr=c->r[12]; // 804B75F4
  if (true) { c->lr=0x804B75FCu; dispatch(c,c->ctr); } // 804B75F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B75FC
  c->r[3]=c->r[3]+0x00000004u; // 804B7600
  c->lr=c->r[0]; // 804B7604
  c->r[1]=c->r[1]+0x00000010u; // 804B7608
  return; // 804B760C
}

// fn_804B7610
void f_804B7610(Ctx* __restrict c) {
  trace_call(0x804B7610u);
  c->r[3]=0u+0x806B0000u; // 804B7610
  c->r[3]=c->r[3]+0xFFFFBC30u; // 804B7614
  return; // 804B7618
}

// fn_804B761C
void f_804B761C(Ctx* __restrict c) {
  trace_call(0x804B761Cu);
  c->r[5]=0u+0x806B0000u; // 804B761C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B7620
  c->r[5]=c->r[5]+0xFFFFBBE0u; // 804B7624
  c->r[3]=c->r[5]+0x00000030u; // 804B7628
  cmpu(c,0,c->r[0],c->r[3]); // 804B762C
  if (!crb(c,2)) { goto L_804B763C; } // 804B7630
  c->r[3]=0u+0x00000001u; // 804B7634
  return; // 804B7638
L_804B763C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804B763C
  c->r[0]=c->r[5]+0x00000018u; // 804B7640
  cmpu(c,0,c->r[4],c->r[0]); // 804B7644
  if (!crb(c,2)) { goto L_804B7654; } // 804B7648
  c->r[3]=0u+0x00000001u; // 804B764C
  return; // 804B7650
L_804B7654:;
  c->r[0]=c->r[5]+0x00000000u; // 804B7654
  cmpu(c,0,c->r[4],c->r[0]); // 804B7658
  if (!crb(c,2)) { goto L_804B7668; } // 804B765C
  c->r[3]=0u+0x00000001u; // 804B7660
  return; // 804B7664
L_804B7668:;
  c->r[3]=0u+0x806B0000u; // 804B7668
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B766C
  cmpu(c,0,c->r[4],c->r[3]); // 804B7670
  if (!crb(c,2)) { goto L_804B7680; } // 804B7674
  c->r[3]=0u+0x00000001u; // 804B7678
  return; // 804B767C
L_804B7680:;
  c->r[3]=0u+0x806B0000u; // 804B7680
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B7684
  c->r[0]=c->r[3]-c->r[4]; // 804B7688
  c->r[0]=cntlz(c->r[0]); // 804B768C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B7690
  return; // 804B7694
}

// fn_804B7698
void f_804B7698(Ctx* __restrict c) {
  trace_call(0x804B7698u);
  c->r[3]=0u+0x806B0000u; // 804B7698
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B769C
  c->r[3]=c->r[3]+0xFFFFBBF8u; // 804B76A0
  cmpu(c,0,c->r[0],c->r[3]); // 804B76A4
  if (!crb(c,2)) { goto L_804B76B4; } // 804B76A8
  c->r[3]=0u+0x00000001u; // 804B76AC
  return; // 804B76B0
L_804B76B4:;
  c->r[3]=0u+0x806B0000u; // 804B76B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B76B8
  c->r[3]=c->r[3]+0xFFFFBBE0u; // 804B76BC
  cmpu(c,0,c->r[0],c->r[3]); // 804B76C0
  if (!crb(c,2)) { goto L_804B76D0; } // 804B76C4
  c->r[3]=0u+0x00000001u; // 804B76C8
  return; // 804B76CC
L_804B76D0:;
  c->r[3]=0u+0x806B0000u; // 804B76D0
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B76D4
  cmpu(c,0,c->r[0],c->r[3]); // 804B76D8
  if (!crb(c,2)) { goto L_804B76E8; } // 804B76DC
  c->r[3]=0u+0x00000001u; // 804B76E0
  return; // 804B76E4
L_804B76E8:;
  c->r[3]=0u+0x806B0000u; // 804B76E8
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B76EC
  c->r[0]=c->r[3]-c->r[0]; // 804B76F0
  c->r[0]=cntlz(c->r[0]); // 804B76F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B76F8
  return; // 804B76FC
}

// fn_804B7700
void f_804B7700(Ctx* __restrict c) {
  trace_call(0x804B7700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7700
  c->r[0]=c->lr; // 804B7704
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B7708
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B770C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B7710
  c->ctr=c->r[12]; // 804B7714
  if (true) { c->lr=0x804B771Cu; dispatch(c,c->ctr); } // 804B7718
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B771C
  c->r[3]=c->r[3]+0x00000004u; // 804B7720
  c->lr=c->r[0]; // 804B7724
  c->r[1]=c->r[1]+0x00000010u; // 804B7728
  return; // 804B772C
}

// fn_804B7730
void f_804B7730(Ctx* __restrict c) {
  trace_call(0x804B7730u);
  c->r[3]=0u+0x806B0000u; // 804B7730
  c->r[3]=c->r[3]+0xFFFFBC10u; // 804B7734
  return; // 804B7738
}

// fn_804B773C
void f_804B773C(Ctx* __restrict c) {
  trace_call(0x804B773Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B773C
  c->r[0]=c->lr; // 804B7740
  cmps(c,0,(int32_t)c->r[3],0); // 804B7744
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B7748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B774C
  c->r[31]=c->r[3]|c->r[3]; // 804B7750
  if (crb(c,2)) { goto L_804B778C; } // 804B7754
  if (crb(c,2)) { goto L_804B778C; } // 804B7758
  c->r[12]=0u+0x80720000u; // 804B775C
  c->r[12]=c->r[12]+0xFFFF9E08u; // 804B7760
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B7764
  c->r[12]=R32(c->r[12]+0x00000044u); // 804B7768
  c->ctr=c->r[12]; // 804B776C
  if (true) { c->lr=0x804B7774u; dispatch(c,c->ctr); } // 804B7770
  cmps(c,0,(int32_t)c->r[31],0); // 804B7774
  if (crb(c,2)) { goto L_804B778C; } // 804B7778
  if (crb(c,2)) { goto L_804B778C; } // 804B777C
  c->r[3]=c->r[31]|c->r[31]; // 804B7780
  c->r[4]=0u+0x00000000u; // 804B7784
  c->lr=0x804B778Cu; f_804BD9F0(c); // 804B7788
L_804B778C:;
  c->r[3]=c->r[31]|c->r[31]; // 804B778C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B7790
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B7794
  c->lr=c->r[0]; // 804B7798
  c->r[1]=c->r[1]+0x00000010u; // 804B779C
  return; // 804B77A0
}

// fn_804B77A4
void f_804B77A4(Ctx* __restrict c) {
  trace_call(0x804B77A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B77A4
  c->r[0]=c->lr; // 804B77A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B77AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B77B0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B77B4
  c->ctr=c->r[12]; // 804B77B8
  if (true) { c->lr=0x804B77C0u; dispatch(c,c->ctr); } // 804B77BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B77C0
  c->r[3]=c->r[3]+0x00000004u; // 804B77C4
  c->lr=c->r[0]; // 804B77C8
  c->r[1]=c->r[1]+0x00000010u; // 804B77CC
  return; // 804B77D0
}

// fn_804B77D4
void f_804B77D4(Ctx* __restrict c) {
  trace_call(0x804B77D4u);
  c->r[3]=0u+0x806B0000u; // 804B77D4
  c->r[3]=c->r[3]+0xFFFFBBF8u; // 804B77D8
  return; // 804B77DC
}

// fn_804B77E0
void f_804B77E0(Ctx* __restrict c) {
  trace_call(0x804B77E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B77E0
  c->r[0]=c->lr; // 804B77E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B77E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B77EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B77F0
  c->ctr=c->r[12]; // 804B77F4
  if (true) { c->lr=0x804B77FCu; dispatch(c,c->ctr); } // 804B77F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B77FC
  c->r[3]=c->r[3]+0x00000004u; // 804B7800
  c->lr=c->r[0]; // 804B7804
  c->r[1]=c->r[1]+0x00000010u; // 804B7808
  return; // 804B780C
}

// fn_804B7810
void f_804B7810(Ctx* __restrict c) {
  trace_call(0x804B7810u);
  c->r[3]=0u+0x806B0000u; // 804B7810
  c->r[3]=c->r[3]+0xFFFFBBE0u; // 804B7814
  return; // 804B7818
}

// fn_804B781C
void f_804B781C(Ctx* __restrict c) {
  trace_call(0x804B781Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804B781C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804B7820
  c->r[0]=R16(c->r[3]+c->r[0]); // 804B7824
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 804B7828
  c->r[0]=cntlz(c->r[0]); // 804B782C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B7830
  return; // 804B7834
}

// fn_804B7838
void f_804B7838(Ctx* __restrict c) {
  trace_call(0x804B7838u);
  c->r[4]=0u+0x00010000u; // 804B7838
  c->r[7]=0u+0x00000000u; // 804B783C
  c->r[5]=c->r[4]+0xFFFF8000u; // 804B7840
  c->r[6]=0u+0x00000000u; // 804B7844
  goto L_804B785C; // 804B7848
L_804B784C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B784C
  c->r[7]=c->r[7]+0x00000001u; // 804B7850
  W16(c->r[4]+c->r[6],c->r[5]); // 804B7854
  c->r[6]=c->r[6]+0x00000002u; // 804B7858
L_804B785C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B785C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B7860
  if (crb(c,0)) { IRQCHK(c); goto L_804B784C; } // 804B7864
  c->r[4]=0u+0x00000004u; // 804B7868
  c->r[5]=0u+0x00000000u; // 804B786C
  f_804BDBC0(c); return; // 804B7870
}

// fn_804B7874
void f_804B7874(Ctx* __restrict c) {
  trace_call(0x804B7874u);
  c->r[3]=0u+0x00000000u; // 804B7874
  return; // 804B7878
}

// fn_804B787C
void f_804B787C(Ctx* __restrict c) {
  trace_call(0x804B787Cu);
  c->r[3]=0u+0x00000000u; // 804B787C
  return; // 804B7880
}

// fn_804B7884
void f_804B7884(Ctx* __restrict c) {
  trace_call(0x804B7884u);
  return; // 804B7884
}

// fn_804B7888
void f_804B7888(Ctx* __restrict c) {
  trace_call(0x804B7888u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7888
  c->r[0]=c->lr; // 804B788C
  cmps(c,0,(int32_t)c->r[3],0); // 804B7890
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B7894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B7898
  c->r[31]=c->r[3]|c->r[3]; // 804B789C
  if (crb(c,2)) { goto L_804B78D4; } // 804B78A0
  c->r[12]=0u+0x80720000u; // 804B78A4
  c->r[12]=c->r[12]+0xFFFF9F28u; // 804B78A8
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B78AC
  c->r[12]=R32(c->r[12]+0x00000044u); // 804B78B0
  c->ctr=c->r[12]; // 804B78B4
  if (true) { c->lr=0x804B78BCu; dispatch(c,c->ctr); } // 804B78B8
  cmps(c,0,(int32_t)c->r[31],0); // 804B78BC
  if (crb(c,2)) { goto L_804B78D4; } // 804B78C0
  if (crb(c,2)) { goto L_804B78D4; } // 804B78C4
  c->r[3]=c->r[31]|c->r[31]; // 804B78C8
  c->r[4]=0u+0x00000000u; // 804B78CC
  c->lr=0x804B78D4u; f_804BD9F0(c); // 804B78D0
L_804B78D4:;
  c->r[3]=c->r[31]|c->r[31]; // 804B78D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B78D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B78DC
  c->lr=c->r[0]; // 804B78E0
  c->r[1]=c->r[1]+0x00000010u; // 804B78E4
  return; // 804B78E8
}

// fn_804B78EC
void f_804B78EC(Ctx* __restrict c) {
  trace_call(0x804B78ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B78EC
  c->r[0]=c->lr; // 804B78F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B78F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B78F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B78FC
  c->r[30]=c->r[5]|c->r[5]; // 804B7900
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B7904
  c->r[29]=c->r[4]|c->r[4]; // 804B7908
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B790C
  c->r[28]=c->r[3]|c->r[3]; // 804B7910
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7914
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B7918
  c->ctr=c->r[12]; // 804B791C
  if (true) { c->lr=0x804B7924u; dispatch(c,c->ctr); } // 804B7920
  c->r[31]=c->r[3]|c->r[3]; // 804B7924
  c->r[6]=0u+0x00000000u; // 804B7928
  c->r[7]=0u+0x00000000u; // 804B792C
  c->r[5]=0u+0x00000000u; // 804B7930
  c->r[4]=0u+0x00000000u; // 804B7934
  goto L_804B7960; // 804B7938
L_804B793C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 804B793C
  c->r[0]=R16(c->r[3]+c->r[5]); // 804B7940
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B7944
  if (!crb(c,2)) { goto L_804B7958; } // 804B7948
  c->r[3]=R32(c->r[28]+0x00000014u); // 804B794C
  c->r[6]=0u+0x00000001u; // 804B7950
  W16(c->r[3]+c->r[5],c->r[4]); // 804B7954
L_804B7958:;
  c->r[5]=c->r[5]+0x00000002u; // 804B7958
  c->r[7]=c->r[7]+0x00000001u; // 804B795C
L_804B7960:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804B7960
  cmpu(c,0,c->r[7],c->r[0]); // 804B7964
  if (crb(c,0)) { IRQCHK(c); goto L_804B793C; } // 804B7968
  cmps(c,0,(int32_t)c->r[6],0); // 804B796C
  if (crb(c,2)) { goto L_804B7984; } // 804B7970
  c->r[3]=c->r[28]|c->r[28]; // 804B7974
  c->r[4]=0u+0x00000004u; // 804B7978
  c->r[5]=0u+0x00000001u; // 804B797C
  c->lr=0x804B7984u; f_804BDBC0(c); // 804B7980
L_804B7984:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 804B7984
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B7988
  c->r[4]=0u+0x00010000u; // 804B798C
  c->r[3]=c->r[30]|c->r[30]; // 804B7990
  W32(c->r[5]+c->r[0],c->r[30]); // 804B7994
  c->r[6]=c->r[28]|c->r[28]; // 804B7998
  c->r[4]=c->r[4]+0x00000002u; // 804B799C
  c->r[5]=0u+0x00000000u; // 804B79A0
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B79A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B79A8
  c->ctr=c->r[12]; // 804B79AC
  if (true) { c->lr=0x804B79B4u; dispatch(c,c->ctr); } // 804B79B0
  c->r[3]=c->r[31]|c->r[31]; // 804B79B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B79B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B79BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B79C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B79C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B79C8
  c->lr=c->r[0]; // 804B79CC
  c->r[1]=c->r[1]+0x00000020u; // 804B79D0
  return; // 804B79D4
}

// fn_804B79D8
void f_804B79D8(Ctx* __restrict c) {
  trace_call(0x804B79D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B79D8
  c->r[0]=c->lr; // 804B79DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B79E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B79E4
  c->r[31]=c->r[3]|c->r[3]; // 804B79E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B79EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B79F0
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B79F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B79F8
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B79FC
  c->r[28]=R32(c->r[5]+c->r[29]); // 804B7A00
  cmps(c,0,(int32_t)c->r[28],0); // 804B7A04
  if (crb(c,2)) { goto L_804B7ACC; } // 804B7A08
  c->r[12]=R32(c->r[28]+0x00000000u); // 804B7A0C
  c->r[30]=0u+0x00010000u; // 804B7A10
  c->r[3]=c->r[28]|c->r[28]; // 804B7A14
  c->r[6]=c->r[31]|c->r[31]; // 804B7A18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B7A1C
  c->r[4]=c->r[30]+0x00000003u; // 804B7A20
  c->r[5]=0u+0x00000000u; // 804B7A24
  c->ctr=c->r[12]; // 804B7A28
  if (true) { c->lr=0x804B7A30u; dispatch(c,c->ctr); } // 804B7A2C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B7A30
  c->r[0]=0u+0x00000000u; // 804B7A34
  c->r[6]=0u+0x00000000u; // 804B7A38
  c->r[7]=0u+0x00000000u; // 804B7A3C
  W32(c->r[3]+c->r[29],c->r[0]); // 804B7A40
  c->r[4]=0u+0x00000000u; // 804B7A44
  goto L_804B7AA8; // 804B7A48
L_804B7A4C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B7A4C
  c->r[8]=c->r[30]+0xFFFF8000u; // 804B7A50
  c->r[5]=0u+0x00000000u; // 804B7A54
  c->ctr=c->r[0]; // 804B7A58
  cmps(c,0,(int32_t)c->r[0],0); // 804B7A5C
  if (!crb(c,1)) { goto L_804B7A98; } // 804B7A60
L_804B7A64:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B7A64
  c->r[3]=R32(c->r[3]+c->r[5]); // 804B7A68
  cmps(c,0,(int32_t)c->r[3],0); // 804B7A6C
  if (crb(c,2)) { goto L_804B7A90; } // 804B7A70
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B7A74
  c->r[0]=R16(c->r[4]+c->r[0]); // 804B7A78
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B7A7C
  if (!crb(c,2)) { goto L_804B7A90; } // 804B7A80
  c->r[6]=0u+0x00000001u; // 804B7A84
  c->r[8]=0u+0x00000000u; // 804B7A88
  goto L_804B7A98; // 804B7A8C
L_804B7A90:;
  c->r[5]=c->r[5]+0x00000004u; // 804B7A90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B7A64; } // 804B7A94
L_804B7A98:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B7A98
  c->r[7]=c->r[7]+0x00000001u; // 804B7A9C
  W16(c->r[3]+c->r[4],c->r[8]); // 804B7AA0
  c->r[4]=c->r[4]+0x00000002u; // 804B7AA4
L_804B7AA8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B7AA8
  cmpu(c,0,c->r[7],c->r[0]); // 804B7AAC
  if (crb(c,0)) { IRQCHK(c); goto L_804B7A4C; } // 804B7AB0
  cmps(c,0,(int32_t)c->r[6],0); // 804B7AB4
  if (!crb(c,2)) { goto L_804B7ACC; } // 804B7AB8
  c->r[3]=c->r[31]|c->r[31]; // 804B7ABC
  c->r[4]=0u+0x00000004u; // 804B7AC0
  c->r[5]=0u+0x00000000u; // 804B7AC4
  c->lr=0x804B7ACCu; f_804BDBC0(c); // 804B7AC8
L_804B7ACC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B7ACC
  c->r[3]=c->r[28]|c->r[28]; // 804B7AD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B7AD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B7AD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B7ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B7AE0
  c->lr=c->r[0]; // 804B7AE4
  c->r[1]=c->r[1]+0x00000020u; // 804B7AE8
  return; // 804B7AEC
}

// fn_804B7AF0
void f_804B7AF0(Ctx* __restrict c) {
  trace_call(0x804B7AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7AF0
  c->r[0]=c->lr; // 804B7AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B7AF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B7AFC
  c->r[31]=0u+0x00000000u; // 804B7B00
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B7B04
  c->r[30]=c->r[3]|c->r[3]; // 804B7B08
  goto L_804B7B2C; // 804B7B0C
L_804B7B10:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B7B10
  c->r[3]=c->r[30]|c->r[30]; // 804B7B14
  c->r[4]=c->r[31]|c->r[31]; // 804B7B18
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B7B1C
  c->ctr=c->r[12]; // 804B7B20
  if (true) { c->lr=0x804B7B28u; dispatch(c,c->ctr); } // 804B7B24
  c->r[31]=c->r[31]+0x00000001u; // 804B7B28
L_804B7B2C:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 804B7B2C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804B7B30
  if (crb(c,0)) { IRQCHK(c); goto L_804B7B10; } // 804B7B34
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B7B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B7B3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B7B40
  c->lr=c->r[0]; // 804B7B44
  c->r[1]=c->r[1]+0x00000010u; // 804B7B48
  return; // 804B7B4C
}

// fn_804B7B50
void f_804B7B50(Ctx* __restrict c) {
  trace_call(0x804B7B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7B50
  c->r[0]=c->lr; // 804B7B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B7B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B7B5C
  c->r[31]=0u+0x00000000u; // 804B7B60
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B7B64
  c->r[30]=0u+0x00000000u; // 804B7B68
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B7B6C
  c->r[29]=c->r[3]|c->r[3]; // 804B7B70
  goto L_804B7BA0; // 804B7B74
L_804B7B78:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B7B78
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B7B7C
  cmps(c,0,(int32_t)c->r[3],0); // 804B7B80
  if (crb(c,2)) { goto L_804B7B98; } // 804B7B84
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7B88
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B7B8C
  c->ctr=c->r[12]; // 804B7B90
  if (true) { c->lr=0x804B7B98u; dispatch(c,c->ctr); } // 804B7B94
L_804B7B98:;
  c->r[31]=c->r[31]+0x00000004u; // 804B7B98
  c->r[30]=c->r[30]+0x00000001u; // 804B7B9C
L_804B7BA0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B7BA0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B7BA4
  if (crb(c,0)) { IRQCHK(c); goto L_804B7B78; } // 804B7BA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B7BAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B7BB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B7BB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B7BB8
  c->lr=c->r[0]; // 804B7BBC
  c->r[1]=c->r[1]+0x00000020u; // 804B7BC0
  return; // 804B7BC4
}

// fn_804B7BC8
void f_804B7BC8(Ctx* __restrict c) {
  trace_call(0x804B7BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7BC8
  c->r[0]=c->lr; // 804B7BCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B7BD0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B7BD4
  c->f[31]=c->f[1]; // 804B7BD8
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B7BDC
  c->r[31]=0u+0x00000000u; // 804B7BE0
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B7BE4
  c->r[30]=0u+0x00000000u; // 804B7BE8
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B7BEC
  c->r[29]=c->r[3]|c->r[3]; // 804B7BF0
  goto L_804B7C24; // 804B7BF4
L_804B7BF8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B7BF8
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B7BFC
  cmps(c,0,(int32_t)c->r[3],0); // 804B7C00
  if (crb(c,2)) { goto L_804B7C1C; } // 804B7C04
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7C08
  c->f[1]=c->f[31]; // 804B7C0C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804B7C10
  c->ctr=c->r[12]; // 804B7C14
  if (true) { c->lr=0x804B7C1Cu; dispatch(c,c->ctr); } // 804B7C18
L_804B7C1C:;
  c->r[31]=c->r[31]+0x00000004u; // 804B7C1C
  c->r[30]=c->r[30]+0x00000001u; // 804B7C20
L_804B7C24:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B7C24
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B7C28
  if (crb(c,0)) { IRQCHK(c); goto L_804B7BF8; } // 804B7C2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B7C30
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B7C34
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B7C38
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B7C3C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B7C40
  c->lr=c->r[0]; // 804B7C44
  c->r[1]=c->r[1]+0x00000020u; // 804B7C48
  return; // 804B7C4C
}

// fn_804B7C50
void f_804B7C50(Ctx* __restrict c) {
  trace_call(0x804B7C50u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B7C50
  c->r[6]=0u+0x00000000u; // 804B7C54
  c->r[5]=0u+0x00000000u; // 804B7C58
  c->ctr=c->r[0]; // 804B7C5C
  cmps(c,0,(int32_t)c->r[0],0); // 804B7C60
  if (!crb(c,1)) { goto L_804B7C9C; } // 804B7C64
L_804B7C68:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B7C68
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B7C6C
  cmps(c,0,(int32_t)c->r[0],0); // 804B7C70
  if (crb(c,2)) { goto L_804B7C90; } // 804B7C74
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B7C78
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B7C7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7C80
  c->r[12]=R32(c->r[12]+0x00000020u); // 804B7C84
  c->ctr=c->r[12]; // 804B7C88
  if (true) { dispatch(c,c->ctr); return; } // 804B7C8C
L_804B7C90:;
  c->r[5]=c->r[5]+0x00000004u; // 804B7C90
  c->r[6]=c->r[6]+0x00000001u; // 804B7C94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B7C68; } // 804B7C98
L_804B7C9C:;
  {uint32_t ea=c->r[2]+0x00001580u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B7C9C
  return; // 804B7CA0
}

// fn_804B7CA4
void f_804B7CA4(Ctx* __restrict c) {
  trace_call(0x804B7CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7CA4
  c->r[0]=c->lr; // 804B7CA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B7CAC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B7CB0
  c->f[31]=c->f[1]; // 804B7CB4
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B7CB8
  c->r[31]=0u+0x00000000u; // 804B7CBC
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B7CC0
  c->r[30]=0u+0x00000000u; // 804B7CC4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B7CC8
  c->r[29]=c->r[3]|c->r[3]; // 804B7CCC
  goto L_804B7D00; // 804B7CD0
L_804B7CD4:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B7CD4
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B7CD8
  cmps(c,0,(int32_t)c->r[3],0); // 804B7CDC
  if (crb(c,2)) { goto L_804B7CF8; } // 804B7CE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7CE4
  c->f[1]=c->f[31]; // 804B7CE8
  c->r[12]=R32(c->r[12]+0x00000028u); // 804B7CEC
  c->ctr=c->r[12]; // 804B7CF0
  if (true) { c->lr=0x804B7CF8u; dispatch(c,c->ctr); } // 804B7CF4
L_804B7CF8:;
  c->r[31]=c->r[31]+0x00000004u; // 804B7CF8
  c->r[30]=c->r[30]+0x00000001u; // 804B7CFC
L_804B7D00:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B7D00
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B7D04
  if (crb(c,0)) { IRQCHK(c); goto L_804B7CD4; } // 804B7D08
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B7D0C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B7D10
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B7D14
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B7D18
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B7D1C
  c->lr=c->r[0]; // 804B7D20
  c->r[1]=c->r[1]+0x00000020u; // 804B7D24
  return; // 804B7D28
}

// fn_804B7D2C
void f_804B7D2C(Ctx* __restrict c) {
  trace_call(0x804B7D2Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B7D2C
  c->r[6]=0u+0x00000000u; // 804B7D30
  c->r[5]=0u+0x00000000u; // 804B7D34
  c->ctr=c->r[0]; // 804B7D38
  cmps(c,0,(int32_t)c->r[0],0); // 804B7D3C
  if (!crb(c,1)) { goto L_804B7D78; } // 804B7D40
L_804B7D44:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B7D44
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B7D48
  cmps(c,0,(int32_t)c->r[0],0); // 804B7D4C
  if (crb(c,2)) { goto L_804B7D6C; } // 804B7D50
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B7D54
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B7D58
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7D5C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804B7D60
  c->ctr=c->r[12]; // 804B7D64
  if (true) { dispatch(c,c->ctr); return; } // 804B7D68
L_804B7D6C:;
  c->r[5]=c->r[5]+0x00000004u; // 804B7D6C
  c->r[6]=c->r[6]+0x00000001u; // 804B7D70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B7D44; } // 804B7D74
L_804B7D78:;
  {uint32_t ea=c->r[2]+0x00001584u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B7D78
  return; // 804B7D7C
}

// fn_804B7D80
void f_804B7D80(Ctx* __restrict c) {
  trace_call(0x804B7D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7D80
  c->r[0]=c->lr; // 804B7D84
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B7D88
  c->r[11]=c->r[1]+0x00000030u; // 804B7D8C
  c->lr=0x804B7D94u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B7D90
  c->r[25]=c->r[3]|c->r[3]; // 804B7D94
  c->r[26]=c->r[4]|c->r[4]; // 804B7D98
  c->r[29]=0u+0x00000000u; // 804B7D9C
  c->r[28]=0u+0x00000000u; // 804B7DA0
  c->r[30]=0u+0x00000000u; // 804B7DA4
  c->r[31]=0u+0x00000000u; // 804B7DA8
  goto L_804B7E38; // 804B7DAC
L_804B7DB0:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 804B7DB0
  c->r[27]=R32(c->r[3]+c->r[30]); // 804B7DB4
  cmps(c,0,(int32_t)c->r[27],0); // 804B7DB8
  if (crb(c,2)) { goto L_804B7E30; } // 804B7DBC
  c->r[0]=R32(c->r[26]+0x00000000u); // 804B7DC0
  c->r[3]=c->r[27]|c->r[27]; // 804B7DC4
  c->r[4]=c->r[1]+0x00000008u; // 804B7DC8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B7DCC
  c->r[12]=R32(c->r[27]+0x00000000u); // 804B7DD0
  c->r[12]=R32(c->r[12]+0x00000030u); // 804B7DD4
  c->ctr=c->r[12]; // 804B7DD8
  if (true) { c->lr=0x804B7DE0u; dispatch(c,c->ctr); } // 804B7DDC
  cmps(c,0,(int32_t)c->r[29],0); // 804B7DE0
  c->r[29]=0u+0x00000000u; // 804B7DE4
  if (!crb(c,2)) { goto L_804B7DF4; } // 804B7DE8
  cmps(c,0,(int32_t)c->r[3],0); // 804B7DEC
  if (crb(c,2)) { goto L_804B7DF8; } // 804B7DF0
L_804B7DF4:;
  c->r[29]=0u+0x00000001u; // 804B7DF4
L_804B7DF8:;
  c->r[5]=0u+0x00000000u; // 804B7DF8
  c->r[4]=0u+0x00000000u; // 804B7DFC
  goto L_804B7E24; // 804B7E00
L_804B7E04:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B7E04
  c->r[0]=R16(c->r[3]+c->r[4]); // 804B7E08
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B7E0C
  if (!crb(c,2)) { goto L_804B7E1C; } // 804B7E10
  c->r[3]=R32(c->r[25]+0x00000014u); // 804B7E14
  W16(c->r[3]+c->r[4],c->r[31]); // 804B7E18
L_804B7E1C:;
  c->r[4]=c->r[4]+0x00000002u; // 804B7E1C
  c->r[5]=c->r[5]+0x00000001u; // 804B7E20
L_804B7E24:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 804B7E24
  cmpu(c,0,c->r[5],c->r[0]); // 804B7E28
  if (crb(c,0)) { IRQCHK(c); goto L_804B7E04; } // 804B7E2C
L_804B7E30:;
  c->r[30]=c->r[30]+0x00000004u; // 804B7E30
  c->r[28]=c->r[28]+0x00000001u; // 804B7E34
L_804B7E38:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 804B7E38
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804B7E3C
  if (crb(c,0)) { IRQCHK(c); goto L_804B7DB0; } // 804B7E40
  c->r[3]=c->r[25]|c->r[25]; // 804B7E44
  c->r[4]=0u+0x00000004u; // 804B7E48
  c->r[5]=0u+0x00000001u; // 804B7E4C
  c->lr=0x804B7E54u; f_804BDBC0(c); // 804B7E50
  c->r[11]=c->r[1]+0x00000030u; // 804B7E54
  c->r[3]=c->r[29]|c->r[29]; // 804B7E58
  c->lr=0x804B7E60u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B7E5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B7E60
  c->lr=c->r[0]; // 804B7E64
  c->r[1]=c->r[1]+0x00000030u; // 804B7E68
  return; // 804B7E6C
}

// fn_804B7E70
void f_804B7E70(Ctx* __restrict c) {
  trace_call(0x804B7E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7E70
  c->r[0]=c->lr; // 804B7E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B7E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B7E7C
  c->r[31]=0u+0x00000000u; // 804B7E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B7E84
  c->r[30]=0u+0x00000000u; // 804B7E88
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B7E8C
  c->r[29]=c->r[3]|c->r[3]; // 804B7E90
  goto L_804B7EC0; // 804B7E94
L_804B7E98:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B7E98
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B7E9C
  cmps(c,0,(int32_t)c->r[3],0); // 804B7EA0
  if (crb(c,2)) { goto L_804B7EB8; } // 804B7EA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7EA8
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B7EAC
  c->ctr=c->r[12]; // 804B7EB0
  if (true) { c->lr=0x804B7EB8u; dispatch(c,c->ctr); } // 804B7EB4
L_804B7EB8:;
  c->r[31]=c->r[31]+0x00000004u; // 804B7EB8
  c->r[30]=c->r[30]+0x00000001u; // 804B7EBC
L_804B7EC0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B7EC0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B7EC4
  if (crb(c,0)) { IRQCHK(c); goto L_804B7E98; } // 804B7EC8
  c->r[3]=0u+0x00010000u; // 804B7ECC
  c->r[5]=0u+0x00000000u; // 804B7ED0
  c->r[4]=c->r[3]+0xFFFF8000u; // 804B7ED4
  c->r[6]=0u+0x00000000u; // 804B7ED8
  goto L_804B7EF0; // 804B7EDC
L_804B7EE0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B7EE0
  c->r[5]=c->r[5]+0x00000001u; // 804B7EE4
  W16(c->r[3]+c->r[6],c->r[4]); // 804B7EE8
  c->r[6]=c->r[6]+0x00000002u; // 804B7EEC
L_804B7EF0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B7EF0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804B7EF4
  if (crb(c,0)) { IRQCHK(c); goto L_804B7EE0; } // 804B7EF8
  c->r[3]=c->r[29]|c->r[29]; // 804B7EFC
  c->r[4]=0u+0x00000004u; // 804B7F00
  c->r[5]=0u+0x00000000u; // 804B7F04
  c->lr=0x804B7F0Cu; f_804BDBC0(c); // 804B7F08
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B7F0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B7F10
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B7F14
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B7F18
  c->lr=c->r[0]; // 804B7F1C
  c->r[1]=c->r[1]+0x00000020u; // 804B7F20
  return; // 804B7F24
}

// fn_804B7F28
void f_804B7F28(Ctx* __restrict c) {
  trace_call(0x804B7F28u);
  c->r[5]=0u+0x00010000u; // 804B7F28
  c->r[0]=c->r[5]+0x00000002u; // 804B7F2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B7F30
  if (crb(c,2)) { goto L_804B7FB0; } // 804B7F34
  if (!crb(c,0)) { goto L_804B7F4C; } // 804B7F38
  c->r[0]=c->r[5]+0x00000001u; // 804B7F3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B7F40
  if (!crb(c,0)) { goto L_804B7F5C; } // 804B7F44
  return; // 804B7F48
L_804B7F4C:;
  c->r[0]=c->r[5]+0x00000004u; // 804B7F4C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B7F50
  if (!crb(c,0)) return; // 804B7F54
  goto L_804B7FA4; // 804B7F58
L_804B7F5C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B7F5C
  c->r[4]=0u+0x00000000u; // 804B7F60
  c->r[7]=0u+0x00000000u; // 804B7F64
  c->ctr=c->r[0]; // 804B7F68
  cmps(c,0,(int32_t)c->r[0],0); // 804B7F6C
  if (!crb(c,1)) return; // 804B7F70
L_804B7F74:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B7F74
  c->r[0]=R32(c->r[5]+c->r[7]); // 804B7F78
  cmpu(c,0,c->r[0],c->r[6]); // 804B7F7C
  if (!crb(c,2)) { goto L_804B7F94; } // 804B7F80
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B7F84
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B7F88
  c->ctr=c->r[12]; // 804B7F8C
  if (true) { dispatch(c,c->ctr); return; } // 804B7F90
L_804B7F94:;
  c->r[7]=c->r[7]+0x00000004u; // 804B7F94
  c->r[4]=c->r[4]+0x00000001u; // 804B7F98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B7F74; } // 804B7F9C
  return; // 804B7FA0
L_804B7FA4:;
  c->r[0]=0u+0x00000000u; // 804B7FA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B7FA8
  return; // 804B7FAC
L_804B7FB0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B7FB0
  return; // 804B7FB4
}

// fn_804B7FB8
void f_804B7FB8(Ctx* __restrict c) {
  trace_call(0x804B7FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B7FB8
  c->r[0]=c->lr; // 804B7FBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B7FC0
  c->r[11]=c->r[1]+0x00000020u; // 804B7FC4
  c->lr=0x804B7FCCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B7FC8
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B7FCC
  c->r[26]=c->r[3]|c->r[3]; // 804B7FD0
  c->r[28]=c->r[4]|c->r[4]; // 804B7FD4
  c->r[27]=c->r[6]|c->r[6]; // 804B7FD8
  cmps(c,0,(int32_t)c->r[0],0); // 804B7FDC
  if (!crb(c,2)) { goto L_804B7FEC; } // 804B7FE0
  c->r[3]=0u+0x00000000u; // 804B7FE4
  goto L_804B80D4; // 804B7FE8
L_804B7FEC:;
  c->r[3]=c->r[5]|c->r[5]; // 804B7FEC
  c->lr=0x804B7FF4u; f_804ACA9C(c); // 804B7FF0
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B7FF4
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 804B7FF8
  c->r[4]=c->r[4]+0x00000023u; // 804B7FFC
  cmps(c,0,(int32_t)c->r[28],0); // 804B8000
  c->r[29]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804B8004
  c->r[30]=c->r[3]|c->r[3]; // 804B8008
  c->r[3]=c->r[29]+c->r[0]; // 804B800C
  c->r[0]=c->r[3]+0x00000003u; // 804B8010
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804B8014
  if (crb(c,2)) { goto L_804B8020; } // 804B8018
  W32(c->r[28]+0x00000000u,c->r[4]); // 804B801C
L_804B8020:;
  cmps(c,0,(int32_t)c->r[26],0); // 804B8020
  if (!crb(c,2)) { goto L_804B8030; } // 804B8024
  c->r[3]=0u+0x00000000u; // 804B8028
  goto L_804B80D4; // 804B802C
L_804B8030:;
  c->r[3]=c->r[26]|c->r[26]; // 804B8030
  c->lr=0x804B8038u; f_803C4D08(c); // 804B8034
  cmps(c,0,(int32_t)c->r[3],0); // 804B8038
  c->r[28]=c->r[3]|c->r[3]; // 804B803C
  if (!crb(c,2)) { goto L_804B804C; } // 804B8040
  c->r[3]=0u+0x00000000u; // 804B8044
  goto L_804B80D4; // 804B8048
L_804B804C:;
  if (crb(c,2)) { goto L_804B80D0; } // 804B804C
  c->r[31]=0u+0x00000000u; // 804B8050
  c->r[12]=0u+0x80720000u; // 804B8054
  W32(c->r[3]+0x00000004u,c->r[31]); // 804B8058
  c->r[12]=c->r[12]+0xFFFF9F70u; // 804B805C
  c->r[0]=c->r[3]+0x00000020u; // 804B8060
  W32(c->r[3]+0x00000008u,c->r[26]); // 804B8064
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 804B8068
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B806C
  W32(c->r[3]+0x00000010u,c->r[30]); // 804B8070
  W32(c->r[3]+0x00000014u,c->r[0]); // 804B8074
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B8078
  c->ctr=c->r[12]; // 804B807C
  if (true) { c->lr=0x804B8084u; dispatch(c,c->ctr); } // 804B8080
  c->r[3]=0u+0x80720000u; // 804B8084
  c->r[0]=c->r[28]+c->r[29]; // 804B8088
  c->r[3]=c->r[3]+0xFFFF9F28u; // 804B808C
  c->r[4]=0u+0x00000000u; // 804B8090
  W32(c->r[28]+0x00000000u,c->r[3]); // 804B8094
  c->r[5]=0u+0x00000000u; // 804B8098
  W32(c->r[28]+0x00000018u,c->r[27]); // 804B809C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 804B80A0
  goto L_804B80B8; // 804B80A4
L_804B80A8:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804B80A8
  c->r[4]=c->r[4]+0x00000001u; // 804B80AC
  W32(c->r[3]+c->r[5],c->r[31]); // 804B80B0
  c->r[5]=c->r[5]+0x00000004u; // 804B80B4
L_804B80B8:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 804B80B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B80BC
  if (crb(c,0)) { IRQCHK(c); goto L_804B80A8; } // 804B80C0
  c->r[3]=0u+0x80720000u; // 804B80C4
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 804B80C8
  W32(c->r[28]+0x00000000u,c->r[3]); // 804B80CC
L_804B80D0:;
  c->r[3]=c->r[28]|c->r[28]; // 804B80D0
L_804B80D4:;
  c->r[11]=c->r[1]+0x00000020u; // 804B80D4
  c->lr=0x804B80DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B80D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B80DC
  c->lr=c->r[0]; // 804B80E0
  c->r[1]=c->r[1]+0x00000020u; // 804B80E4
  return; // 804B80E8
}

// fn_804B80EC
void f_804B80EC(Ctx* __restrict c) {
  trace_call(0x804B80ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B80EC
  c->r[0]=c->lr; // 804B80F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B80F4
  c->r[11]=c->r[1]+0x00000020u; // 804B80F8
  c->lr=0x804B8100u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B80FC
  c->r[6]=R32(c->r[3]+0x00000018u); // 804B8100
  c->r[26]=c->r[3]|c->r[3]; // 804B8104
  c->r[27]=c->r[4]|c->r[4]; // 804B8108
  c->r[28]=c->r[5]|c->r[5]; // 804B810C
  c->r[29]=c->r[6]+0xFFFFFFFFu; // 804B8110
  c->r[30]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B8114
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B8118
  goto L_804B8170; // 804B811C
L_804B8120:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 804B8120
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B8124
  cmps(c,0,(int32_t)c->r[3],0); // 804B8128
  if (crb(c,2)) { goto L_804B8168; } // 804B812C
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B8130
  c->r[0]=R16(c->r[30]+c->r[0]); // 804B8134
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B8138
  if (!crb(c,2)) { goto L_804B8168; } // 804B813C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8140
  c->r[4]=c->r[27]|c->r[27]; // 804B8144
  c->r[5]=c->r[28]|c->r[28]; // 804B8148
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B814C
  c->ctr=c->r[12]; // 804B8150
  if (true) { c->lr=0x804B8158u; dispatch(c,c->ctr); } // 804B8154
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B8158
  cmps(c,0,(int32_t)c->r[0],0); // 804B815C
  if (crb(c,2)) { goto L_804B8168; } // 804B8160
  goto L_804B8184; // 804B8164
L_804B8168:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 804B8168
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 804B816C
L_804B8170:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B8170
  if (!crb(c,0)) { IRQCHK(c); goto L_804B8120; } // 804B8174
  c->r[0]=0u+0x00000000u; // 804B8178
  c->r[3]=c->r[27]|c->r[27]; // 804B817C
  W32(c->r[27]+0x00000000u,c->r[0]); // 804B8180
L_804B8184:;
  c->r[11]=c->r[1]+0x00000020u; // 804B8184
  c->lr=0x804B818Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B8188
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B818C
  c->lr=c->r[0]; // 804B8190
  c->r[1]=c->r[1]+0x00000020u; // 804B8194
  return; // 804B8198
}

// fn_804B819C
void f_804B819C(Ctx* __restrict c) {
  trace_call(0x804B819Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B819C
  c->r[0]=c->lr; // 804B81A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B81A4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B81A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B81AC
  c->r[11]=c->r[1]+0x00000030u; // 804B81B0
  c->lr=0x804B81B8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B81B4
  c->r[8]=R32(c->r[5]+0x00000000u); // 804B81B8
  c->r[29]=c->r[3]|c->r[3]; // 804B81BC
  c->r[25]=c->r[4]|c->r[4]; // 804B81C0
  c->r[30]=c->r[5]|c->r[5]; // 804B81C4
  cmps(c,0,(int32_t)c->r[8],0); // 804B81C8
  c->r[27]=c->r[7]|c->r[7]; // 804B81CC
  if (crb(c,2)) { goto L_804B81E0; } // 804B81D0
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B81D4
  cmps(c,0,(int32_t)c->r[0],0); // 804B81D8
  if (!crb(c,2)) { goto L_804B81E8; } // 804B81DC
L_804B81E0:;
  c->r[3]=0u+0x00000000u; // 804B81E0
  goto L_804B836C; // 804B81E4
L_804B81E8:;
  c->r[31]=R16(c->r[8]+0x00000022u); // 804B81E8
  c->r[3]=c->r[6]|c->r[6]; // 804B81EC
  c->lr=0x804B81F4u; f_804ACA9C(c); // 804B81F0
  c->r[0]=0u-c->r[27]; // 804B81F4
  c->r[28]=c->r[3]|c->r[3]; // 804B81F8
  c->r[4]=c->r[0]|c->r[27]; // 804B81FC
  cmps(c,0,(int32_t)c->r[25],0); // 804B8200
  c->r[4]=sraw(c,c->r[4],31); // 804B8204
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B8208
  c->r[3]=c->r[31]&c->r[4]; // 804B820C
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)232); // 804B8210
  c->r[3]=c->r[26]+c->r[0]; // 804B8214
  c->r[4]=c->r[3]+0x00000034u; // 804B8218
  if (crb(c,2)) { goto L_804B8224; } // 804B821C
  W32(c->r[25]+0x00000000u,c->r[4]); // 804B8220
L_804B8224:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B8224
  if (!crb(c,2)) { goto L_804B8234; } // 804B8228
  c->r[3]=0u+0x00000000u; // 804B822C
  goto L_804B836C; // 804B8230
L_804B8234:;
  c->r[3]=c->r[29]|c->r[29]; // 804B8234
  c->lr=0x804B823Cu; f_803C4D08(c); // 804B8238
  cmps(c,0,(int32_t)c->r[3],0); // 804B823C
  c->r[31]=c->r[3]|c->r[3]; // 804B8240
  if (!crb(c,2)) { goto L_804B8250; } // 804B8244
  c->r[3]=0u+0x00000000u; // 804B8248
  goto L_804B836C; // 804B824C
L_804B8250:;
  cmps(c,0,(int32_t)c->r[27],0); // 804B8250
  if (crb(c,2)) { goto L_804B8260; } // 804B8254
  c->r[27]=c->r[3]+0x00000034u; // 804B8258
  goto L_804B8264; // 804B825C
L_804B8260:;
  c->r[27]=0u+0x00000000u; // 804B8260
L_804B8264:;
  cmps(c,0,(int32_t)c->r[3],0); // 804B8264
  c->r[4]=c->r[3]+c->r[26]; // 804B8268
  c->r[5]=c->r[4]+0x00000034u; // 804B826C
  if (crb(c,2)) { goto L_804B8368; } // 804B8270
  c->r[0]=0u+0x00000000u; // 804B8274
  c->r[4]=0u+0x80720000u; // 804B8278
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B827C
  c->r[4]=c->r[4]+0xFFFF9F70u; // 804B8280
  c->r[30]=R32(c->r[30]+0x00000000u); // 804B8284
  W32(c->r[3]+0x00000008u,c->r[29]); // 804B8288
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B828C
  W32(c->r[3]+0x00000000u,c->r[4]); // 804B8290
  W32(c->r[3]+0x00000010u,c->r[28]); // 804B8294
  W32(c->r[3]+0x00000014u,c->r[5]); // 804B8298
  c->r[3]=c->r[31]|c->r[31]; // 804B829C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804B82A0
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B82A4
  c->ctr=c->r[12]; // 804B82A8
  if (true) { c->lr=0x804B82B0u; dispatch(c,c->ctr); } // 804B82AC
  c->r[4]=R16(c->r[30]+0x00000020u); // 804B82B0
  c->r[0]=0u+0x43300000u; // 804B82B4
  c->r[5]=R32(c->r[30]+0x00000028u); // 804B82B8
  c->r[3]=0u+0x80720000u; // 804B82BC
  c->r[4]=c->r[4]^0x80000000u; // 804B82C0
  {uint32_t ea=c->r[2]+0x00001580u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B82C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804B82C8
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B82CC
  {uint32_t ea=c->r[2]+0x00001584u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B82D0
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B82D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B82D8
  c->r[3]=c->r[3]+0xFFFF9E98u; // 804B82DC
  {uint32_t ea=c->r[2]+0x00001588u; c->f[3]=RF64(ea);} // 804B82E0
  cmps(c,0,(int32_t)c->r[27],0); // 804B82E4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804B82E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804B82EC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B82F0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804B82F4
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B82F8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804B82FC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804B8300
  W32(c->r[31]+0x00000028u,c->r[0]); // 804B8304
  W32(c->r[31]+0x00000000u,c->r[3]); // 804B8308
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 804B830C
  W32(c->r[31]+0x00000030u,c->r[27]); // 804B8310
  if (crb(c,2)) { goto L_804B8368; } // 804B8314
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B8318
  c->r[28]=0u+0x00000000u; // 804B831C
  c->r[27]=0u+0x00000000u; // 804B8320
  goto L_804B835C; // 804B8324
L_804B8328:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B8328
  c->r[3]=R16(c->r[3]+c->r[27]); // 804B832C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B8330
  if (!crb(c,2)) { goto L_804B8354; } // 804B8334
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B8338
  c->f[1]=c->f[31]; // 804B833C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B8340
  c->r[4]=R32(c->r[31]+0x00000030u); // 804B8344
  c->r[3]=c->r[31]+0x0000002Cu; // 804B8348
  c->r[4]=c->r[4]+c->r[0]; // 804B834C
  c->lr=0x804B8354u; f_804B1378(c); // 804B8350
L_804B8354:;
  c->r[27]=c->r[27]+0x00000002u; // 804B8354
  c->r[28]=c->r[28]+0x00000001u; // 804B8358
L_804B835C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B835C
  cmpu(c,0,c->r[28],c->r[0]); // 804B8360
  if (crb(c,0)) { IRQCHK(c); goto L_804B8328; } // 804B8364
L_804B8368:;
  c->r[3]=c->r[31]|c->r[31]; // 804B8368
L_804B836C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804B836C
  c->r[11]=c->r[1]+0x00000030u; // 804B8370
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804B8374
  c->lr=0x804B837Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B8378
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B837C
  c->lr=c->r[0]; // 804B8380
  c->r[1]=c->r[1]+0x00000040u; // 804B8384
  return; // 804B8388
}

// fn_804B838C
void f_804B838C(Ctx* __restrict c) {
  trace_call(0x804B838Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B838C
  c->r[0]=c->lr; // 804B8390
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B8394
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B8398
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B839C
  c->r[12]=0u+0x80720000u; // 804B83A0
  c->r[0]=0u+0x00000000u; // 804B83A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B83A8
  c->r[12]=c->r[12]+0xFFFF9F70u; // 804B83AC
  c->r[31]=c->r[3]|c->r[3]; // 804B83B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B83B4
  c->r[30]=c->r[5]|c->r[5]; // 804B83B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B83BC
  c->r[29]=c->r[8]|c->r[8]; // 804B83C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B83C4
  W32(c->r[3]+0x00000008u,c->r[4]); // 804B83C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804B83CC
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B83D0
  W32(c->r[3]+0x00000010u,c->r[7]); // 804B83D4
  W32(c->r[3]+0x00000014u,c->r[6]); // 804B83D8
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B83DC
  c->ctr=c->r[12]; // 804B83E0
  if (true) { c->lr=0x804B83E8u; dispatch(c,c->ctr); } // 804B83E4
  c->r[5]=R32(c->r[30]+0x00000000u); // 804B83E8
  c->r[0]=0u+0x43300000u; // 804B83EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B83F0
  c->r[3]=0u+0x80720000u; // 804B83F4
  c->r[0]=R16(c->r[5]+0x00000020u); // 804B83F8
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804B83FC
  c->r[5]=R32(c->r[5]+0x00000028u); // 804B8400
  c->r[3]=c->r[3]+0xFFFF9E98u; // 804B8404
  c->r[0]=c->r[0]^0x80000000u; // 804B8408
  {uint32_t ea=c->r[2]+0x00001580u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B840C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B8410
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804B8414
  c->r[4]=R32(c->r[4]+c->r[0]); // 804B8418
  cmps(c,0,(int32_t)c->r[29],0); // 804B841C
  {uint32_t ea=c->r[2]+0x00001588u; c->f[2]=RF64(ea);} // 804B8420
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804B8424
  {uint32_t ea=c->r[2]+0x00001584u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8428
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804B842C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804B8430
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 804B8434
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B8438
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[31]);} // 804B843C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804B8440
  W32(c->r[31]+0x00000028u,c->r[4]); // 804B8444
  W32(c->r[31]+0x00000000u,c->r[3]); // 804B8448
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 804B844C
  W32(c->r[31]+0x00000030u,c->r[29]); // 804B8450
  if (crb(c,2)) { goto L_804B84A4; } // 804B8454
  c->r[30]=0u+0x00000000u; // 804B8458
  c->r[29]=0u+0x00000000u; // 804B845C
  goto L_804B8498; // 804B8460
L_804B8464:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B8464
  c->r[3]=R16(c->r[3]+c->r[29]); // 804B8468
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B846C
  if (!crb(c,2)) { goto L_804B8490; } // 804B8470
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B8474
  c->f[1]=c->f[31]; // 804B8478
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B847C
  c->r[4]=R32(c->r[31]+0x00000030u); // 804B8480
  c->r[3]=c->r[31]+0x0000002Cu; // 804B8484
  c->r[4]=c->r[4]+c->r[0]; // 804B8488
  c->lr=0x804B8490u; f_804B1378(c); // 804B848C
L_804B8490:;
  c->r[29]=c->r[29]+0x00000002u; // 804B8490
  c->r[30]=c->r[30]+0x00000001u; // 804B8494
L_804B8498:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B8498
  cmpu(c,0,c->r[30],c->r[0]); // 804B849C
  if (crb(c,0)) { IRQCHK(c); goto L_804B8464; } // 804B84A0
L_804B84A4:;
  c->r[3]=c->r[31]|c->r[31]; // 804B84A4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B84A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B84AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B84B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B84B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B84B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B84BC
  c->lr=c->r[0]; // 804B84C0
  c->r[1]=c->r[1]+0x00000030u; // 804B84C4
  return; // 804B84C8
}

// fn_804B84CC
void f_804B84CC(Ctx* __restrict c) {
  trace_call(0x804B84CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B84CC
  c->r[0]=c->lr; // 804B84D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B84D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B84D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B84DC
  c->f[3]=c->f[1]; // 804B84E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B84E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B84E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B84EC
  c->r[29]=c->r[3]|c->r[3]; // 804B84F0
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B84F4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B84F8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B84FC
  c->ctr=c->r[12]; // 804B8500
  if (true) { c->lr=0x804B8508u; dispatch(c,c->ctr); } // 804B8504
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B8508
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B850C
  cmps(c,0,(int32_t)c->r[0],0); // 804B8510
  if (crb(c,2)) { goto L_804B8568; } // 804B8514
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B8518
  c->r[31]=0u+0x00000000u; // 804B851C
  c->r[30]=0u+0x00000000u; // 804B8520
  goto L_804B855C; // 804B8524
L_804B8528:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B8528
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B852C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B8530
  if (!crb(c,2)) { goto L_804B8554; } // 804B8534
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B8538
  c->f[1]=c->f[31]; // 804B853C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B8540
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B8544
  c->r[3]=c->r[29]+0x0000002Cu; // 804B8548
  c->r[4]=c->r[4]+c->r[0]; // 804B854C
  c->lr=0x804B8554u; f_804B1378(c); // 804B8550
L_804B8554:;
  c->r[30]=c->r[30]+0x00000002u; // 804B8554
  c->r[31]=c->r[31]+0x00000001u; // 804B8558
L_804B855C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B855C
  cmpu(c,0,c->r[31],c->r[0]); // 804B8560
  if (crb(c,0)) { IRQCHK(c); goto L_804B8528; } // 804B8564
L_804B8568:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B8568
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B856C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B8570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B8574
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B8578
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B857C
  c->lr=c->r[0]; // 804B8580
  c->r[1]=c->r[1]+0x00000030u; // 804B8584
  return; // 804B8588
}

// fn_804B858C
void f_804B858C(Ctx* __restrict c) {
  trace_call(0x804B858Cu);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B858C
  return; // 804B8590
}

// fn_804B8594
void f_804B8594(Ctx* __restrict c) {
  trace_call(0x804B8594u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8594
  c->r[0]=c->lr; // 804B8598
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B859C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B85A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B85A4
  {uint32_t ea=c->r[2]+0x00001580u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B85A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B85AC
  fcmp(c,0,c->f[0],c->f[1]); // 804B85B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B85B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B85B8
  c->r[29]=c->r[3]|c->r[3]; // 804B85BC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B85C0
  if (!crb(c,2)) { goto L_804B8624; } // 804B85C4
  c->r[0]=R32(c->r[3]+0x00000030u); // 804B85C8
  cmps(c,0,(int32_t)c->r[0],0); // 804B85CC
  if (crb(c,2)) { goto L_804B8624; } // 804B85D0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B85D4
  c->r[31]=0u+0x00000000u; // 804B85D8
  c->r[30]=0u+0x00000000u; // 804B85DC
  goto L_804B8618; // 804B85E0
L_804B85E4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B85E4
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B85E8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B85EC
  if (!crb(c,2)) { goto L_804B8610; } // 804B85F0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B85F4
  c->f[1]=c->f[31]; // 804B85F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B85FC
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B8600
  c->r[3]=c->r[29]+0x0000002Cu; // 804B8604
  c->r[4]=c->r[4]+c->r[0]; // 804B8608
  c->lr=0x804B8610u; f_804B1378(c); // 804B860C
L_804B8610:;
  c->r[30]=c->r[30]+0x00000002u; // 804B8610
  c->r[31]=c->r[31]+0x00000001u; // 804B8614
L_804B8618:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B8618
  cmpu(c,0,c->r[31],c->r[0]); // 804B861C
  if (crb(c,0)) { IRQCHK(c); goto L_804B85E4; } // 804B8620
L_804B8624:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B8624
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B8628
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B862C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B8630
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B8634
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B8638
  c->lr=c->r[0]; // 804B863C
  c->r[1]=c->r[1]+0x00000030u; // 804B8640
  return; // 804B8644
}

// fn_804B8648
void f_804B8648(Ctx* __restrict c) {
  trace_call(0x804B8648u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8648
  return; // 804B864C
}

// fn_804B8650
void f_804B8650(Ctx* __restrict c) {
  trace_call(0x804B8650u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8650
  c->r[0]=c->lr; // 804B8654
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B8658
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804B865C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804B8660
  {uint32_t ea=c->r[2]+0x00001580u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B8668
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B866C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B8670
  c->r[29]=c->r[3]|c->r[3]; // 804B8674
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8678
  fcmp(c,0,c->f[0],c->f[1]); // 804B867C
  if (crb(c,2)) { goto L_804B870C; } // 804B8680
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B8684
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8688
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B868C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804B8690
  c->r[12]=R32(c->r[3]+0x00000028u); // 804B8694
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8698
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B869C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804B86A0
  c->ctr=c->r[12]; // 804B86A4
  if (true) { c->lr=0x804B86ACu; dispatch(c,c->ctr); } // 804B86A8
  c->r[0]=R32(c->r[29]+0x00000030u); // 804B86AC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804B86B0
  cmps(c,0,(int32_t)c->r[0],0); // 804B86B4
  if (crb(c,2)) { goto L_804B870C; } // 804B86B8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804B86BC
  c->r[31]=0u+0x00000000u; // 804B86C0
  c->r[30]=0u+0x00000000u; // 804B86C4
  goto L_804B8700; // 804B86C8
L_804B86CC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B86CC
  c->r[3]=R16(c->r[3]+c->r[30]); // 804B86D0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804B86D4
  if (!crb(c,2)) { goto L_804B86F8; } // 804B86D8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804B86DC
  c->f[1]=c->f[31]; // 804B86E0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B86E4
  c->r[4]=R32(c->r[29]+0x00000030u); // 804B86E8
  c->r[3]=c->r[29]+0x0000002Cu; // 804B86EC
  c->r[4]=c->r[4]+c->r[0]; // 804B86F0
  c->lr=0x804B86F8u; f_804B1378(c); // 804B86F4
L_804B86F8:;
  c->r[30]=c->r[30]+0x00000002u; // 804B86F8
  c->r[31]=c->r[31]+0x00000001u; // 804B86FC
L_804B8700:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B8700
  cmpu(c,0,c->r[31],c->r[0]); // 804B8704
  if (crb(c,0)) { IRQCHK(c); goto L_804B86CC; } // 804B8708
L_804B870C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804B870C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B8710
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804B8714
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B8718
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B871C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B8720
  c->lr=c->r[0]; // 804B8724
  c->r[1]=c->r[1]+0x00000030u; // 804B8728
  return; // 804B872C
}

// fn_804B8730
void f_804B8730(Ctx* __restrict c) {
  trace_call(0x804B8730u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8730
  c->r[0]=c->lr; // 804B8734
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B8738
  c->r[11]=c->r[1]+0x00000030u; // 804B873C
  c->lr=0x804B8744u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B8740
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804B8744
  c->r[27]=c->r[3]|c->r[3]; // 804B8748
  c->r[28]=c->r[4]|c->r[4]; // 804B874C
  c->r[30]=0u+0x00000000u; // 804B8750
  c->r[31]=R16(c->r[5]+0x00000022u); // 804B8754
  c->r[29]=0u+0x00000000u; // 804B8758
  cmps(c,0,(int32_t)c->r[31],0); // 804B875C
  if (!crb(c,1)) { goto L_804B87FC; } // 804B8760
  goto L_804B87F0; // 804B8764
L_804B8768:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 804B8768
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B876C
  cmps(c,0,(int32_t)c->r[0],0); // 804B8770
  if (crb(c,2)) { goto L_804B8780; } // 804B8774
  c->r[0]=c->r[3]+c->r[0]; // 804B8778
  goto L_804B8784; // 804B877C
L_804B8780:;
  c->r[0]=0u+0x00000000u; // 804B8780
L_804B8784:;
  cmps(c,0,(int32_t)c->r[0],0); // 804B8784
  if (crb(c,2)) { goto L_804B87B0; } // 804B8788
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 804B878C
  c->r[3]=c->r[0]+c->r[3]; // 804B8790
  c->r[3]=R32(c->r[3]+0x00000024u); // 804B8794
  cmps(c,0,(int32_t)c->r[3],0); // 804B8798
  if (crb(c,2)) { goto L_804B87A8; } // 804B879C
  c->r[5]=c->r[0]+c->r[3]; // 804B87A0
  goto L_804B87B4; // 804B87A4
L_804B87A8:;
  c->r[5]=0u+0x00000000u; // 804B87A8
  goto L_804B87B4; // 804B87AC
L_804B87B0:;
  c->r[5]=0u+0x00000000u; // 804B87B0
L_804B87B4:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804B87B4
  c->r[3]=c->r[28]|c->r[28]; // 804B87B8
  c->r[4]=c->r[1]+0x00000008u; // 804B87BC
  c->r[5]=c->r[0]+c->r[5]; // 804B87C0
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804B87C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B87C8
  c->lr=0x804B87D0u; f_804AC9A4(c); // 804B87CC
  cmps(c,0,(int32_t)c->r[3],0); // 804B87D0
  if (crb(c,2)) { goto L_804B87EC; } // 804B87D4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804B87D8
  c->r[30]=0u+0x00000001u; // 804B87DC
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B87E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804B87E4
  W16(c->r[3]+c->r[0],c->r[29]); // 804B87E8
L_804B87EC:;
  c->r[29]=c->r[29]+0x00000001u; // 804B87EC
L_804B87F0:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804B87F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 804B87F4
  if (crb(c,0)) { IRQCHK(c); goto L_804B8768; } // 804B87F8
L_804B87FC:;
  c->r[3]=c->r[27]|c->r[27]; // 804B87FC
  c->r[4]=0u+0x00000004u; // 804B8800
  c->r[5]=0u+0x00000001u; // 804B8804
  c->lr=0x804B880Cu; f_804BDBC0(c); // 804B8808
  c->r[11]=c->r[1]+0x00000030u; // 804B880C
  c->r[3]=c->r[30]|c->r[30]; // 804B8810
  c->lr=0x804B8818u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B8814
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B8818
  c->lr=c->r[0]; // 804B881C
  c->r[1]=c->r[1]+0x00000030u; // 804B8820
  return; // 804B8824
}

// fn_804B8828
void f_804B8828(Ctx* __restrict c) {
  trace_call(0x804B8828u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8828
  c->r[0]=c->lr; // 804B882C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8830
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B8834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B8838
  c->r[31]=c->r[4]|c->r[4]; // 804B883C
  c->r[6]=R32(c->r[3]+0x00000014u); // 804B8840
  c->r[5]=R16(c->r[6]+c->r[0]); // 804B8844
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 804B8848
  if (crb(c,2)) { goto L_804B8860; } // 804B884C
  c->r[0]=0u+0x00000000u; // 804B8850
  c->r[3]=c->r[31]|c->r[31]; // 804B8854
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B8858
  goto L_804B8888; // 804B885C
L_804B8860:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 804B8860
  cmps(c,0,(int32_t)c->r[6],0); // 804B8864
  if (crb(c,2)) { goto L_804B8878; } // 804B8868
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 804B886C
  c->r[3]=c->r[6]+c->r[0]; // 804B8870
  goto L_804B8888; // 804B8874
L_804B8878:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8878
  c->r[3]=c->r[3]+0x0000002Cu; // 804B887C
  c->lr=0x804B8884u; f_804B1378(c); // 804B8880
  c->r[3]=c->r[31]|c->r[31]; // 804B8884
L_804B8888:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B888C
  c->lr=c->r[0]; // 804B8890
  c->r[1]=c->r[1]+0x00000010u; // 804B8894
  return; // 804B8898
}

// fn_804B889C
void f_804B889C(Ctx* __restrict c) {
  trace_call(0x804B889Cu);
  c->r[5]=0u+0x00010000u; // 804B889C
  c->r[0]=c->r[5]+0x00000002u; // 804B88A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B88A4
  if (crb(c,2)) { goto L_804B88E8; } // 804B88A8
  if (!crb(c,0)) { goto L_804B88BC; } // 804B88AC
  cmps(c,0,(int32_t)c->r[4],8); // 804B88B0
  if (crb(c,2)) { goto L_804B88CC; } // 804B88B4
  return; // 804B88B8
L_804B88BC:;
  c->r[0]=c->r[5]+0x00000004u; // 804B88BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B88C0
  if (!crb(c,0)) return; // 804B88C4
  goto L_804B88DC; // 804B88C8
L_804B88CC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B88CC
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B88D0
  c->ctr=c->r[12]; // 804B88D4
  if (true) { dispatch(c,c->ctr); return; } // 804B88D8
L_804B88DC:;
  c->r[0]=0u+0x00000000u; // 804B88DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B88E0
  return; // 804B88E4
L_804B88E8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B88E8
  return; // 804B88EC
}

// ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtPCQ34nw4r3g3d15TexSrtAnmResult
void f_804B88F0(Ctx* __restrict c) {
  trace_call(0x804B88F0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804B88F0
  c->r[6]=c->r[4]|c->r[4]; // 804B88F4
  c->r[9]=R32(c->r[4]+0x00000000u); // 804B88F8
  c->r[10]=0u+0x0000000Fu; // 804B88FC
  c->r[8]=R32(c->r[5]+0x00000000u); // 804B8900
  c->r[7]=c->r[5]|c->r[5]; // 804B8904
  goto L_804B8978; // 804B8908
L_804B890C:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 804B890C
  if (crb(c,2)) { goto L_804B8964; } // 804B8910
  c->r[0]=rotl(c->r[9],0)&0x00000001u; cr0(c,c->r[0]); // 804B8914
  if (crb(c,2)) { goto L_804B8964; } // 804B8918
  c->r[3]=R32(c->r[4]+0x00000008u); // 804B891C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8920
  W32(c->r[5]+0x00000004u,c->r[3]); // 804B8924
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8928
  c->r[0]=c->r[0]&c->r[10]; // 804B892C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8930
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 804B8934
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8938
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B893C
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8940
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804B8944
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8948
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 804B894C
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[0]);} // 804B8950
  c->r[3]=R32(c->r[5]+0x00000000u); // 804B8954
  c->r[3]=c->r[3]&~c->r[10]; // 804B8958
  c->r[0]=c->r[3]|c->r[0]; // 804B895C
  W32(c->r[5]+0x00000000u,c->r[0]); // 804B8960
L_804B8964:;
  c->r[8]=rotl(c->r[8],28)&0x0FFFFFFFu; // 804B8964
  c->r[9]=rotl(c->r[9],28)&0x0FFFFFFFu; // 804B8968
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 804B896C
  c->r[6]=c->r[6]+0x00000014u; // 804B8970
  c->r[7]=c->r[7]+0x00000014u; // 804B8974
L_804B8978:;
  cmps(c,0,(int32_t)c->r[8],0); // 804B8978
  if (crb(c,2)) return; // 804B897C
  cmps(c,0,(int32_t)c->r[9],0); // 804B8980
  if (!crb(c,2)) { IRQCHK(c); goto L_804B890C; } // 804B8984
  return; // 804B8988
}

// ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult
void f_804B898C(Ctx* __restrict c) {
  trace_call(0x804B898Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B898C
  c->r[0]=c->lr; // 804B8990
  W32(c->r[1]+0x00000074u,c->r[0]); // 804B8994
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804B8998
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804B899C
  c->r[11]=c->r[1]+0x00000060u; // 804B89A0
  c->lr=0x804B89A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B89A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 804B89A8
  c->r[28]=c->r[5]|c->r[5]; // 804B89AC
  c->r[27]=c->r[4]|c->r[4]; // 804B89B0
  c->r[3]=c->r[1]+0x0000000Cu; // 804B89B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804B89B8
  c->r[4]=c->r[28]|c->r[28]; // 804B89BC
  c->lr=0x804B89C4u; f_804B88F0(c); // 804B89C0
  c->r[30]=R32(c->r[28]+0x00000004u); // 804B89C4
  c->r[31]=c->r[28]+0x000000ACu; // 804B89C8
  {uint32_t ea=c->r[2]+0x00001590u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B89CC
  c->r[29]=0u+0x00000008u; // 804B89D0
  goto L_804B8B10; // 804B89D4
L_804B89D8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 804B89D8
  if (crb(c,2)) { goto L_804B8B04; } // 804B89DC
  c->r[5]=c->r[31]|c->r[31]; // 804B89E0
  c->r[3]=c->r[1]+0x00000010u; // 804B89E4
  c->r[6]=rotl(c->r[30],0)&0x0000000Fu; // 804B89E8
  c->r[4]=0u+0x00000001u; // 804B89EC
  c->lr=0x804B89F4u; f_804C4F64(c); // 804B89F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B89F4
  c->f[1]=std::fabs(c->f[0]); // 804B89F8
  fcmp(c,0,c->f[31],c->f[1]); // 804B89FC
  if (!crb(c,0)) { goto L_804B8A08; } // 804B8A00
  goto L_804B8A0C; // 804B8A04
L_804B8A08:;
  c->f[1]=c->f[31]; // 804B8A08
L_804B8A0C:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8A0C
  c->f[2]=std::fabs(c->f[0]); // 804B8A10
  fcmp(c,0,c->f[1],c->f[2]); // 804B8A14
  if (!crb(c,0)) { goto L_804B8A20; } // 804B8A18
  goto L_804B8A24; // 804B8A1C
L_804B8A20:;
  c->f[2]=c->f[1]; // 804B8A20
L_804B8A24:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8A24
  c->f[1]=std::fabs(c->f[0]); // 804B8A28
  fcmp(c,0,c->f[2],c->f[1]); // 804B8A2C
  if (!crb(c,0)) { goto L_804B8A38; } // 804B8A30
  goto L_804B8A3C; // 804B8A34
L_804B8A38:;
  c->f[1]=c->f[2]; // 804B8A38
L_804B8A3C:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8A3C
  c->f[2]=std::fabs(c->f[0]); // 804B8A40
  fcmp(c,0,c->f[1],c->f[2]); // 804B8A44
  if (!crb(c,0)) { goto L_804B8A50; } // 804B8A48
  goto L_804B8A54; // 804B8A4C
L_804B8A50:;
  c->f[2]=c->f[1]; // 804B8A50
L_804B8A54:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8A54
  c->f[1]=std::fabs(c->f[0]); // 804B8A58
  fcmp(c,0,c->f[2],c->f[1]); // 804B8A5C
  if (!crb(c,0)) { goto L_804B8A68; } // 804B8A60
  goto L_804B8A6C; // 804B8A64
L_804B8A68:;
  c->f[1]=c->f[2]; // 804B8A68
L_804B8A6C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8A6C
  c->f[0]=std::fabs(c->f[0]); // 804B8A70
  fcmp(c,0,c->f[1],c->f[0]); // 804B8A74
  if (!crb(c,0)) { goto L_804B8A80; } // 804B8A78
  goto L_804B8A84; // 804B8A7C
L_804B8A80:;
  c->f[0]=c->f[1]; // 804B8A80
L_804B8A84:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804B8A84
  {uint32_t ea=c->r[2]+0x00001598u; c->f[1]=RF64(ea);} // 804B8A88
  c->r[0]=R32(c->r[1]+0x00000008u); // 804B8A8C
  c->r[3]=rotl(c->r[0],9)&0x000000FFu; // 804B8A90
  c->r[0]=c->r[3]+0xFFFFFF82u; // 804B8A94
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804B8A98
  c->r[3]=0u-c->r[28]; // 804B8A9C
  c->lr=0x804B8AA4u; f_803BA394(c); // 804B8AA0
  c->f[6]=c->ps1[6]=S(c->f[1]); // 804B8AA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8AA8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8AAC
  c->r[3]=c->r[27]|c->r[27]; // 804B8AB0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804B8AB4
  c->r[6]=c->r[28]|c->r[28]; // 804B8AB8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 804B8ABC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B8AC0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[6]); // 804B8AC4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8AC8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B8ACC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[6]); // 804B8AD0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[6]); // 804B8AD4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 804B8AD8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 804B8ADC
  c->r[4]=c->r[29]+0xFFFFFFF9u; // 804B8AE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 804B8AE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 804B8AE8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 804B8AEC
  c->r[5]=c->r[1]+0x00000010u; // 804B8AF0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 804B8AF4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804B8AF8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804B8AFC
  c->lr=0x804B8B04u; f_804AF798(c); // 804B8B00
L_804B8B04:;
  c->r[30]=rotl(c->r[30],28)&0x0FFFFFFFu; // 804B8B04
  c->r[31]=c->r[31]+0x00000014u; // 804B8B08
  c->r[29]=c->r[29]+0x00000001u; // 804B8B0C
L_804B8B10:;
  cmps(c,0,(int32_t)c->r[30],0); // 804B8B10
  if (!crb(c,2)) { IRQCHK(c); goto L_804B89D8; } // 804B8B14
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804B8B18
  c->r[11]=c->r[1]+0x00000060u; // 804B8B1C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804B8B20
  c->lr=0x804B8B28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B8B24
  c->r[0]=R32(c->r[1]+0x00000074u); // 804B8B28
  c->lr=c->r[0]; // 804B8B2C
  c->r[1]=c->r[1]+0x00000070u; // 804B8B30
  return; // 804B8B34
}

// fn_804B8B38
void f_804B8B38(Ctx* __restrict c) {
  trace_call(0x804B8B38u);
  c->r[3]=0u+0x806B0000u; // 804B8B38
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8B3C
  c->r[3]=c->r[3]+0xFFFFBC98u; // 804B8B40
  cmpu(c,0,c->r[0],c->r[3]); // 804B8B44
  if (!crb(c,2)) { goto L_804B8B54; } // 804B8B48
  c->r[3]=0u+0x00000001u; // 804B8B4C
  return; // 804B8B50
L_804B8B54:;
  c->r[3]=0u+0x806B0000u; // 804B8B54
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8B58
  c->r[3]=c->r[3]+0xFFFFBC48u; // 804B8B5C
  cmpu(c,0,c->r[0],c->r[3]); // 804B8B60
  if (!crb(c,2)) { goto L_804B8B70; } // 804B8B64
  c->r[3]=0u+0x00000001u; // 804B8B68
  return; // 804B8B6C
L_804B8B70:;
  c->r[3]=0u+0x806B0000u; // 804B8B70
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B8B74
  cmpu(c,0,c->r[0],c->r[3]); // 804B8B78
  if (!crb(c,2)) { goto L_804B8B88; } // 804B8B7C
  c->r[3]=0u+0x00000001u; // 804B8B80
  return; // 804B8B84
L_804B8B88:;
  c->r[3]=0u+0x806B0000u; // 804B8B88
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B8B8C
  c->r[0]=c->r[3]-c->r[0]; // 804B8B90
  c->r[0]=cntlz(c->r[0]); // 804B8B94
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B8B98
  return; // 804B8B9C
}

// fn_804B8BA0
void f_804B8BA0(Ctx* __restrict c) {
  trace_call(0x804B8BA0u);
  c->r[3]=0u+0x806B0000u; // 804B8BA0
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8BA4
  c->r[3]=c->r[3]+0xFFFFBC48u; // 804B8BA8
  cmpu(c,0,c->r[0],c->r[3]); // 804B8BAC
  if (!crb(c,2)) { goto L_804B8BBC; } // 804B8BB0
  c->r[3]=0u+0x00000001u; // 804B8BB4
  return; // 804B8BB8
L_804B8BBC:;
  c->r[3]=0u+0x806B0000u; // 804B8BBC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8BC0
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B8BC4
  cmpu(c,0,c->r[0],c->r[3]); // 804B8BC8
  if (!crb(c,2)) { goto L_804B8BD8; } // 804B8BCC
  c->r[3]=0u+0x00000001u; // 804B8BD0
  return; // 804B8BD4
L_804B8BD8:;
  c->r[3]=0u+0x806B0000u; // 804B8BD8
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B8BDC
  c->r[0]=c->r[3]-c->r[0]; // 804B8BE0
  c->r[0]=cntlz(c->r[0]); // 804B8BE4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B8BE8
  return; // 804B8BEC
}

// fn_804B8BF0
void f_804B8BF0(Ctx* __restrict c) {
  trace_call(0x804B8BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8BF0
  c->r[0]=c->lr; // 804B8BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8BF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8BFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B8C00
  c->ctr=c->r[12]; // 804B8C04
  if (true) { c->lr=0x804B8C0Cu; dispatch(c,c->ctr); } // 804B8C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8C0C
  c->r[3]=c->r[3]+0x00000004u; // 804B8C10
  c->lr=c->r[0]; // 804B8C14
  c->r[1]=c->r[1]+0x00000010u; // 804B8C18
  return; // 804B8C1C
}

// fn_804B8C20
void f_804B8C20(Ctx* __restrict c) {
  trace_call(0x804B8C20u);
  c->r[3]=0u+0x806B0000u; // 804B8C20
  c->r[3]=c->r[3]+0xFFFFBC98u; // 804B8C24
  return; // 804B8C28
}

// fn_804B8C2C
void f_804B8C2C(Ctx* __restrict c) {
  trace_call(0x804B8C2Cu);
  c->r[5]=0u+0x806B0000u; // 804B8C2C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8C30
  c->r[5]=c->r[5]+0xFFFFBC48u; // 804B8C34
  c->r[3]=c->r[5]+0x00000030u; // 804B8C38
  cmpu(c,0,c->r[0],c->r[3]); // 804B8C3C
  if (!crb(c,2)) { goto L_804B8C4C; } // 804B8C40
  c->r[3]=0u+0x00000001u; // 804B8C44
  return; // 804B8C48
L_804B8C4C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804B8C4C
  c->r[0]=c->r[5]+0x00000018u; // 804B8C50
  cmpu(c,0,c->r[4],c->r[0]); // 804B8C54
  if (!crb(c,2)) { goto L_804B8C64; } // 804B8C58
  c->r[3]=0u+0x00000001u; // 804B8C5C
  return; // 804B8C60
L_804B8C64:;
  c->r[0]=c->r[5]+0x00000000u; // 804B8C64
  cmpu(c,0,c->r[4],c->r[0]); // 804B8C68
  if (!crb(c,2)) { goto L_804B8C78; } // 804B8C6C
  c->r[3]=0u+0x00000001u; // 804B8C70
  return; // 804B8C74
L_804B8C78:;
  c->r[3]=0u+0x806B0000u; // 804B8C78
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B8C7C
  cmpu(c,0,c->r[4],c->r[3]); // 804B8C80
  if (!crb(c,2)) { goto L_804B8C90; } // 804B8C84
  c->r[3]=0u+0x00000001u; // 804B8C88
  return; // 804B8C8C
L_804B8C90:;
  c->r[3]=0u+0x806B0000u; // 804B8C90
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B8C94
  c->r[0]=c->r[3]-c->r[4]; // 804B8C98
  c->r[0]=cntlz(c->r[0]); // 804B8C9C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B8CA0
  return; // 804B8CA4
}

// fn_804B8CA8
void f_804B8CA8(Ctx* __restrict c) {
  trace_call(0x804B8CA8u);
  c->r[3]=0u+0x806B0000u; // 804B8CA8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8CAC
  c->r[3]=c->r[3]+0xFFFFBC60u; // 804B8CB0
  cmpu(c,0,c->r[0],c->r[3]); // 804B8CB4
  if (!crb(c,2)) { goto L_804B8CC4; } // 804B8CB8
  c->r[3]=0u+0x00000001u; // 804B8CBC
  return; // 804B8CC0
L_804B8CC4:;
  c->r[3]=0u+0x806B0000u; // 804B8CC4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804B8CC8
  c->r[3]=c->r[3]+0xFFFFBC48u; // 804B8CCC
  cmpu(c,0,c->r[0],c->r[3]); // 804B8CD0
  if (!crb(c,2)) { goto L_804B8CE0; } // 804B8CD4
  c->r[3]=0u+0x00000001u; // 804B8CD8
  return; // 804B8CDC
L_804B8CE0:;
  c->r[3]=0u+0x806B0000u; // 804B8CE0
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804B8CE4
  cmpu(c,0,c->r[0],c->r[3]); // 804B8CE8
  if (!crb(c,2)) { goto L_804B8CF8; } // 804B8CEC
  c->r[3]=0u+0x00000001u; // 804B8CF0
  return; // 804B8CF4
L_804B8CF8:;
  c->r[3]=0u+0x806B0000u; // 804B8CF8
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804B8CFC
  c->r[0]=c->r[3]-c->r[0]; // 804B8D00
  c->r[0]=cntlz(c->r[0]); // 804B8D04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B8D08
  return; // 804B8D0C
}

// fn_804B8D10
void f_804B8D10(Ctx* __restrict c) {
  trace_call(0x804B8D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8D10
  c->r[0]=c->lr; // 804B8D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8D1C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B8D20
  c->ctr=c->r[12]; // 804B8D24
  if (true) { c->lr=0x804B8D2Cu; dispatch(c,c->ctr); } // 804B8D28
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8D2C
  c->r[3]=c->r[3]+0x00000004u; // 804B8D30
  c->lr=c->r[0]; // 804B8D34
  c->r[1]=c->r[1]+0x00000010u; // 804B8D38
  return; // 804B8D3C
}

// fn_804B8D40
void f_804B8D40(Ctx* __restrict c) {
  trace_call(0x804B8D40u);
  c->r[3]=0u+0x806B0000u; // 804B8D40
  c->r[3]=c->r[3]+0xFFFFBC78u; // 804B8D44
  return; // 804B8D48
}

// fn_804B8D4C
void f_804B8D4C(Ctx* __restrict c) {
  trace_call(0x804B8D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8D4C
  c->r[0]=c->lr; // 804B8D50
  cmps(c,0,(int32_t)c->r[3],0); // 804B8D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B8D5C
  c->r[31]=c->r[3]|c->r[3]; // 804B8D60
  if (crb(c,2)) { goto L_804B8D9C; } // 804B8D64
  if (crb(c,2)) { goto L_804B8D9C; } // 804B8D68
  c->r[12]=0u+0x80720000u; // 804B8D6C
  c->r[12]=c->r[12]+0xFFFF9F28u; // 804B8D70
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B8D74
  c->r[12]=R32(c->r[12]+0x00000044u); // 804B8D78
  c->ctr=c->r[12]; // 804B8D7C
  if (true) { c->lr=0x804B8D84u; dispatch(c,c->ctr); } // 804B8D80
  cmps(c,0,(int32_t)c->r[31],0); // 804B8D84
  if (crb(c,2)) { goto L_804B8D9C; } // 804B8D88
  if (crb(c,2)) { goto L_804B8D9C; } // 804B8D8C
  c->r[3]=c->r[31]|c->r[31]; // 804B8D90
  c->r[4]=0u+0x00000000u; // 804B8D94
  c->lr=0x804B8D9Cu; f_804BD9F0(c); // 804B8D98
L_804B8D9C:;
  c->r[3]=c->r[31]|c->r[31]; // 804B8D9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B8DA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8DA4
  c->lr=c->r[0]; // 804B8DA8
  c->r[1]=c->r[1]+0x00000010u; // 804B8DAC
  return; // 804B8DB0
}

// fn_804B8DB4
void f_804B8DB4(Ctx* __restrict c) {
  trace_call(0x804B8DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8DB4
  c->r[0]=c->lr; // 804B8DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8DBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8DC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B8DC4
  c->ctr=c->r[12]; // 804B8DC8
  if (true) { c->lr=0x804B8DD0u; dispatch(c,c->ctr); } // 804B8DCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8DD0
  c->r[3]=c->r[3]+0x00000004u; // 804B8DD4
  c->lr=c->r[0]; // 804B8DD8
  c->r[1]=c->r[1]+0x00000010u; // 804B8DDC
  return; // 804B8DE0
}

// fn_804B8DE4
void f_804B8DE4(Ctx* __restrict c) {
  trace_call(0x804B8DE4u);
  c->r[3]=0u+0x806B0000u; // 804B8DE4
  c->r[3]=c->r[3]+0xFFFFBC60u; // 804B8DE8
  return; // 804B8DEC
}

// fn_804B8DF0
void f_804B8DF0(Ctx* __restrict c) {
  trace_call(0x804B8DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8DF0
  c->r[0]=c->lr; // 804B8DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8DF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8DFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 804B8E00
  c->ctr=c->r[12]; // 804B8E04
  if (true) { c->lr=0x804B8E0Cu; dispatch(c,c->ctr); } // 804B8E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8E0C
  c->r[3]=c->r[3]+0x00000004u; // 804B8E10
  c->lr=c->r[0]; // 804B8E14
  c->r[1]=c->r[1]+0x00000010u; // 804B8E18
  return; // 804B8E1C
}

// fn_804B8E20
void f_804B8E20(Ctx* __restrict c) {
  trace_call(0x804B8E20u);
  c->r[3]=0u+0x806B0000u; // 804B8E20
  c->r[3]=c->r[3]+0xFFFFBC48u; // 804B8E24
  return; // 804B8E28
}

// fn_804B8E2C
void f_804B8E2C(Ctx* __restrict c) {
  trace_call(0x804B8E2Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804B8E2C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804B8E30
  c->r[0]=R16(c->r[3]+c->r[0]); // 804B8E34
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 804B8E38
  c->r[0]=cntlz(c->r[0]); // 804B8E3C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804B8E40
  return; // 804B8E44
}

// fn_804B8E48
void f_804B8E48(Ctx* __restrict c) {
  trace_call(0x804B8E48u);
  c->r[4]=0u+0x00010000u; // 804B8E48
  c->r[7]=0u+0x00000000u; // 804B8E4C
  c->r[5]=c->r[4]+0xFFFF8000u; // 804B8E50
  c->r[6]=0u+0x00000000u; // 804B8E54
  goto L_804B8E6C; // 804B8E58
L_804B8E5C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804B8E5C
  c->r[7]=c->r[7]+0x00000001u; // 804B8E60
  W16(c->r[4]+c->r[6],c->r[5]); // 804B8E64
  c->r[6]=c->r[6]+0x00000002u; // 804B8E68
L_804B8E6C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804B8E6C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B8E70
  if (crb(c,0)) { IRQCHK(c); goto L_804B8E5C; } // 804B8E74
  c->r[4]=0u+0x00000004u; // 804B8E78
  c->r[5]=0u+0x00000000u; // 804B8E7C
  f_804BDBC0(c); return; // 804B8E80
}

// fn_804B8E84
void f_804B8E84(Ctx* __restrict c) {
  trace_call(0x804B8E84u);
  c->r[3]=0u+0x00000000u; // 804B8E84
  return; // 804B8E88
}

// fn_804B8E8C
void f_804B8E8C(Ctx* __restrict c) {
  trace_call(0x804B8E8Cu);
  c->r[3]=0u+0x00000000u; // 804B8E8C
  return; // 804B8E90
}

// fn_804B8E94
void f_804B8E94(Ctx* __restrict c) {
  trace_call(0x804B8E94u);
  return; // 804B8E94
}

// fn_804B8E98
void f_804B8E98(Ctx* __restrict c) {
  trace_call(0x804B8E98u);
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B8E98
  return; // 804B8E9C
}

// fn_804B8EA0
void f_804B8EA0(Ctx* __restrict c) {
  trace_call(0x804B8EA0u);
  return; // 804B8EA0
}

// fn_804B8EA4
void f_804B8EA4(Ctx* __restrict c) {
  trace_call(0x804B8EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8EA4
  c->r[0]=c->lr; // 804B8EA8
  cmps(c,0,(int32_t)c->r[3],0); // 804B8EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B8EB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B8EB4
  c->r[31]=c->r[3]|c->r[3]; // 804B8EB8
  if (crb(c,2)) { goto L_804B8EF0; } // 804B8EBC
  c->r[12]=0u+0x80720000u; // 804B8EC0
  c->r[12]=c->r[12]+0xFFFFA068u; // 804B8EC4
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B8EC8
  c->r[12]=R32(c->r[12]+0x00000044u); // 804B8ECC
  c->ctr=c->r[12]; // 804B8ED0
  if (true) { c->lr=0x804B8ED8u; dispatch(c,c->ctr); } // 804B8ED4
  cmps(c,0,(int32_t)c->r[31],0); // 804B8ED8
  if (crb(c,2)) { goto L_804B8EF0; } // 804B8EDC
  if (crb(c,2)) { goto L_804B8EF0; } // 804B8EE0
  c->r[3]=c->r[31]|c->r[31]; // 804B8EE4
  c->r[4]=0u+0x00000000u; // 804B8EE8
  c->lr=0x804B8EF0u; f_804BD9F0(c); // 804B8EEC
L_804B8EF0:;
  c->r[3]=c->r[31]|c->r[31]; // 804B8EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B8EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B8EF8
  c->lr=c->r[0]; // 804B8EFC
  c->r[1]=c->r[1]+0x00000010u; // 804B8F00
  return; // 804B8F04
}

// fn_804B8F08
void f_804B8F08(Ctx* __restrict c) {
  trace_call(0x804B8F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8F08
  c->r[0]=c->lr; // 804B8F0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B8F10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B8F14
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B8F18
  c->r[30]=c->r[5]|c->r[5]; // 804B8F1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B8F20
  c->r[29]=c->r[4]|c->r[4]; // 804B8F24
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B8F28
  c->r[28]=c->r[3]|c->r[3]; // 804B8F2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B8F30
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B8F34
  c->ctr=c->r[12]; // 804B8F38
  if (true) { c->lr=0x804B8F40u; dispatch(c,c->ctr); } // 804B8F3C
  c->r[31]=c->r[3]|c->r[3]; // 804B8F40
  c->r[6]=0u+0x00000000u; // 804B8F44
  c->r[7]=0u+0x00000000u; // 804B8F48
  c->r[5]=0u+0x00000000u; // 804B8F4C
  c->r[4]=0u+0x00000000u; // 804B8F50
  goto L_804B8F7C; // 804B8F54
L_804B8F58:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 804B8F58
  c->r[0]=R16(c->r[3]+c->r[5]); // 804B8F5C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B8F60
  if (!crb(c,2)) { goto L_804B8F74; } // 804B8F64
  c->r[3]=R32(c->r[28]+0x00000014u); // 804B8F68
  c->r[6]=0u+0x00000001u; // 804B8F6C
  W16(c->r[3]+c->r[5],c->r[4]); // 804B8F70
L_804B8F74:;
  c->r[5]=c->r[5]+0x00000002u; // 804B8F74
  c->r[7]=c->r[7]+0x00000001u; // 804B8F78
L_804B8F7C:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804B8F7C
  cmpu(c,0,c->r[7],c->r[0]); // 804B8F80
  if (crb(c,0)) { IRQCHK(c); goto L_804B8F58; } // 804B8F84
  cmps(c,0,(int32_t)c->r[6],0); // 804B8F88
  if (crb(c,2)) { goto L_804B8FA0; } // 804B8F8C
  c->r[3]=c->r[28]|c->r[28]; // 804B8F90
  c->r[4]=0u+0x00000004u; // 804B8F94
  c->r[5]=0u+0x00000001u; // 804B8F98
  c->lr=0x804B8FA0u; f_804BDBC0(c); // 804B8F9C
L_804B8FA0:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 804B8FA0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804B8FA4
  c->r[4]=0u+0x00010000u; // 804B8FA8
  c->r[3]=c->r[30]|c->r[30]; // 804B8FAC
  W32(c->r[5]+c->r[0],c->r[30]); // 804B8FB0
  c->r[6]=c->r[28]|c->r[28]; // 804B8FB4
  c->r[4]=c->r[4]+0x00000002u; // 804B8FB8
  c->r[5]=0u+0x00000000u; // 804B8FBC
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B8FC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B8FC4
  c->ctr=c->r[12]; // 804B8FC8
  if (true) { c->lr=0x804B8FD0u; dispatch(c,c->ctr); } // 804B8FCC
  c->r[3]=c->r[31]|c->r[31]; // 804B8FD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B8FD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B8FD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B8FDC
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B8FE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B8FE4
  c->lr=c->r[0]; // 804B8FE8
  c->r[1]=c->r[1]+0x00000020u; // 804B8FEC
  return; // 804B8FF0
}

// fn_804B8FF4
void f_804B8FF4(Ctx* __restrict c) {
  trace_call(0x804B8FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B8FF4
  c->r[0]=c->lr; // 804B8FF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B8FFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B9000
  c->r[31]=c->r[3]|c->r[3]; // 804B9004
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B9008
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B900C
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B9010
  W32(c->r[1]+0x00000010u,c->r[28]); // 804B9014
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B9018
  c->r[28]=R32(c->r[5]+c->r[29]); // 804B901C
  cmps(c,0,(int32_t)c->r[28],0); // 804B9020
  if (crb(c,2)) { goto L_804B90E8; } // 804B9024
  c->r[12]=R32(c->r[28]+0x00000000u); // 804B9028
  c->r[30]=0u+0x00010000u; // 804B902C
  c->r[3]=c->r[28]|c->r[28]; // 804B9030
  c->r[6]=c->r[31]|c->r[31]; // 804B9034
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804B9038
  c->r[4]=c->r[30]+0x00000003u; // 804B903C
  c->r[5]=0u+0x00000000u; // 804B9040
  c->ctr=c->r[12]; // 804B9044
  if (true) { c->lr=0x804B904Cu; dispatch(c,c->ctr); } // 804B9048
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B904C
  c->r[0]=0u+0x00000000u; // 804B9050
  c->r[6]=0u+0x00000000u; // 804B9054
  c->r[7]=0u+0x00000000u; // 804B9058
  W32(c->r[3]+c->r[29],c->r[0]); // 804B905C
  c->r[4]=0u+0x00000000u; // 804B9060
  goto L_804B90C4; // 804B9064
L_804B9068:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B9068
  c->r[8]=c->r[30]+0xFFFF8000u; // 804B906C
  c->r[5]=0u+0x00000000u; // 804B9070
  c->ctr=c->r[0]; // 804B9074
  cmps(c,0,(int32_t)c->r[0],0); // 804B9078
  if (!crb(c,1)) { goto L_804B90B4; } // 804B907C
L_804B9080:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B9080
  c->r[3]=R32(c->r[3]+c->r[5]); // 804B9084
  cmps(c,0,(int32_t)c->r[3],0); // 804B9088
  if (crb(c,2)) { goto L_804B90AC; } // 804B908C
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B9090
  c->r[0]=R16(c->r[4]+c->r[0]); // 804B9094
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B9098
  if (!crb(c,2)) { goto L_804B90AC; } // 804B909C
  c->r[6]=0u+0x00000001u; // 804B90A0
  c->r[8]=0u+0x00000000u; // 804B90A4
  goto L_804B90B4; // 804B90A8
L_804B90AC:;
  c->r[5]=c->r[5]+0x00000004u; // 804B90AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B9080; } // 804B90B0
L_804B90B4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B90B4
  c->r[7]=c->r[7]+0x00000001u; // 804B90B8
  W16(c->r[3]+c->r[4],c->r[8]); // 804B90BC
  c->r[4]=c->r[4]+0x00000002u; // 804B90C0
L_804B90C4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B90C4
  cmpu(c,0,c->r[7],c->r[0]); // 804B90C8
  if (crb(c,0)) { IRQCHK(c); goto L_804B9068; } // 804B90CC
  cmps(c,0,(int32_t)c->r[6],0); // 804B90D0
  if (!crb(c,2)) { goto L_804B90E8; } // 804B90D4
  c->r[3]=c->r[31]|c->r[31]; // 804B90D8
  c->r[4]=0u+0x00000004u; // 804B90DC
  c->r[5]=0u+0x00000000u; // 804B90E0
  c->lr=0x804B90E8u; f_804BDBC0(c); // 804B90E4
L_804B90E8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B90E8
  c->r[3]=c->r[28]|c->r[28]; // 804B90EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B90F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B90F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804B90F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B90FC
  c->lr=c->r[0]; // 804B9100
  c->r[1]=c->r[1]+0x00000020u; // 804B9104
  return; // 804B9108
}

// fn_804B910C
void f_804B910C(Ctx* __restrict c) {
  trace_call(0x804B910Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B910C
  c->r[0]=c->lr; // 804B9110
  W32(c->r[1]+0x00000014u,c->r[0]); // 804B9114
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804B9118
  c->r[31]=0u+0x00000000u; // 804B911C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804B9120
  c->r[30]=c->r[3]|c->r[3]; // 804B9124
  goto L_804B9148; // 804B9128
L_804B912C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804B912C
  c->r[3]=c->r[30]|c->r[30]; // 804B9130
  c->r[4]=c->r[31]|c->r[31]; // 804B9134
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B9138
  c->ctr=c->r[12]; // 804B913C
  if (true) { c->lr=0x804B9144u; dispatch(c,c->ctr); } // 804B9140
  c->r[31]=c->r[31]+0x00000001u; // 804B9144
L_804B9148:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 804B9148
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804B914C
  if (crb(c,0)) { IRQCHK(c); goto L_804B912C; } // 804B9150
  c->r[0]=R32(c->r[1]+0x00000014u); // 804B9154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804B9158
  c->r[30]=R32(c->r[1]+0x00000008u); // 804B915C
  c->lr=c->r[0]; // 804B9160
  c->r[1]=c->r[1]+0x00000010u; // 804B9164
  return; // 804B9168
}

// fn_804B916C
void f_804B916C(Ctx* __restrict c) {
  trace_call(0x804B916Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B916C
  c->r[0]=c->lr; // 804B9170
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B9174
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B9178
  c->r[31]=0u+0x00000000u; // 804B917C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B9180
  c->r[30]=0u+0x00000000u; // 804B9184
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B9188
  c->r[29]=c->r[3]|c->r[3]; // 804B918C
  goto L_804B91BC; // 804B9190
L_804B9194:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B9194
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B9198
  cmps(c,0,(int32_t)c->r[3],0); // 804B919C
  if (crb(c,2)) { goto L_804B91B4; } // 804B91A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B91A4
  c->r[12]=R32(c->r[12]+0x00000024u); // 804B91A8
  c->ctr=c->r[12]; // 804B91AC
  if (true) { c->lr=0x804B91B4u; dispatch(c,c->ctr); } // 804B91B0
L_804B91B4:;
  c->r[31]=c->r[31]+0x00000004u; // 804B91B4
  c->r[30]=c->r[30]+0x00000001u; // 804B91B8
L_804B91BC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B91BC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B91C0
  if (crb(c,0)) { IRQCHK(c); goto L_804B9194; } // 804B91C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B91C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B91CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B91D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B91D4
  c->lr=c->r[0]; // 804B91D8
  c->r[1]=c->r[1]+0x00000020u; // 804B91DC
  return; // 804B91E0
}

// fn_804B91E4
void f_804B91E4(Ctx* __restrict c) {
  trace_call(0x804B91E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B91E4
  c->r[0]=c->lr; // 804B91E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B91EC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B91F0
  c->f[31]=c->f[1]; // 804B91F4
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B91F8
  c->r[31]=0u+0x00000000u; // 804B91FC
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B9200
  c->r[30]=0u+0x00000000u; // 804B9204
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B9208
  c->r[29]=c->r[3]|c->r[3]; // 804B920C
  goto L_804B9240; // 804B9210
L_804B9214:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B9214
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B9218
  cmps(c,0,(int32_t)c->r[3],0); // 804B921C
  if (crb(c,2)) { goto L_804B9238; } // 804B9220
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B9224
  c->f[1]=c->f[31]; // 804B9228
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804B922C
  c->ctr=c->r[12]; // 804B9230
  if (true) { c->lr=0x804B9238u; dispatch(c,c->ctr); } // 804B9234
L_804B9238:;
  c->r[31]=c->r[31]+0x00000004u; // 804B9238
  c->r[30]=c->r[30]+0x00000001u; // 804B923C
L_804B9240:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B9240
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B9244
  if (crb(c,0)) { IRQCHK(c); goto L_804B9214; } // 804B9248
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B924C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B9250
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B9254
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B9258
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B925C
  c->lr=c->r[0]; // 804B9260
  c->r[1]=c->r[1]+0x00000020u; // 804B9264
  return; // 804B9268
}

// fn_804B926C
void f_804B926C(Ctx* __restrict c) {
  trace_call(0x804B926Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B926C
  c->r[6]=0u+0x00000000u; // 804B9270
  c->r[5]=0u+0x00000000u; // 804B9274
  c->ctr=c->r[0]; // 804B9278
  cmps(c,0,(int32_t)c->r[0],0); // 804B927C
  if (!crb(c,1)) { goto L_804B92B8; } // 804B9280
L_804B9284:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B9284
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B9288
  cmps(c,0,(int32_t)c->r[0],0); // 804B928C
  if (crb(c,2)) { goto L_804B92AC; } // 804B9290
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B9294
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B9298
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B929C
  c->r[12]=R32(c->r[12]+0x00000020u); // 804B92A0
  c->ctr=c->r[12]; // 804B92A4
  if (true) { dispatch(c,c->ctr); return; } // 804B92A8
L_804B92AC:;
  c->r[5]=c->r[5]+0x00000004u; // 804B92AC
  c->r[6]=c->r[6]+0x00000001u; // 804B92B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B9284; } // 804B92B4
L_804B92B8:;
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B92B8
  return; // 804B92BC
}

// fn_804B92C0
void f_804B92C0(Ctx* __restrict c) {
  trace_call(0x804B92C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B92C0
  c->r[0]=c->lr; // 804B92C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B92C8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804B92CC
  c->f[31]=c->f[1]; // 804B92D0
  W32(c->r[1]+0x00000014u,c->r[31]); // 804B92D4
  c->r[31]=0u+0x00000000u; // 804B92D8
  W32(c->r[1]+0x00000010u,c->r[30]); // 804B92DC
  c->r[30]=0u+0x00000000u; // 804B92E0
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804B92E4
  c->r[29]=c->r[3]|c->r[3]; // 804B92E8
  goto L_804B931C; // 804B92EC
L_804B92F0:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B92F0
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B92F4
  cmps(c,0,(int32_t)c->r[3],0); // 804B92F8
  if (crb(c,2)) { goto L_804B9314; } // 804B92FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B9300
  c->f[1]=c->f[31]; // 804B9304
  c->r[12]=R32(c->r[12]+0x00000028u); // 804B9308
  c->ctr=c->r[12]; // 804B930C
  if (true) { c->lr=0x804B9314u; dispatch(c,c->ctr); } // 804B9310
L_804B9314:;
  c->r[31]=c->r[31]+0x00000004u; // 804B9314
  c->r[30]=c->r[30]+0x00000001u; // 804B9318
L_804B931C:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B931C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B9320
  if (crb(c,0)) { IRQCHK(c); goto L_804B92F0; } // 804B9324
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B9328
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804B932C
  c->r[31]=R32(c->r[1]+0x00000014u); // 804B9330
  c->r[30]=R32(c->r[1]+0x00000010u); // 804B9334
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804B9338
  c->lr=c->r[0]; // 804B933C
  c->r[1]=c->r[1]+0x00000020u; // 804B9340
  return; // 804B9344
}

// fn_804B9348
void f_804B9348(Ctx* __restrict c) {
  trace_call(0x804B9348u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B9348
  c->r[6]=0u+0x00000000u; // 804B934C
  c->r[5]=0u+0x00000000u; // 804B9350
  c->ctr=c->r[0]; // 804B9354
  cmps(c,0,(int32_t)c->r[0],0); // 804B9358
  if (!crb(c,1)) { goto L_804B9394; } // 804B935C
L_804B9360:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804B9360
  c->r[0]=R32(c->r[4]+c->r[5]); // 804B9364
  cmps(c,0,(int32_t)c->r[0],0); // 804B9368
  if (crb(c,2)) { goto L_804B9388; } // 804B936C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804B9370
  c->r[3]=R32(c->r[4]+c->r[0]); // 804B9374
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B9378
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804B937C
  c->ctr=c->r[12]; // 804B9380
  if (true) { dispatch(c,c->ctr); return; } // 804B9384
L_804B9388:;
  c->r[5]=c->r[5]+0x00000004u; // 804B9388
  c->r[6]=c->r[6]+0x00000001u; // 804B938C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B9360; } // 804B9390
L_804B9394:;
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9394
  return; // 804B9398
}

// fn_804B939C
void f_804B939C(Ctx* __restrict c) {
  trace_call(0x804B939Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B939C
  c->r[0]=c->lr; // 804B93A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B93A4
  c->r[11]=c->r[1]+0x00000030u; // 804B93A8
  c->lr=0x804B93B0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B93AC
  c->r[25]=c->r[3]|c->r[3]; // 804B93B0
  c->r[26]=c->r[4]|c->r[4]; // 804B93B4
  c->r[29]=0u+0x00000000u; // 804B93B8
  c->r[28]=0u+0x00000000u; // 804B93BC
  c->r[30]=0u+0x00000000u; // 804B93C0
  c->r[31]=0u+0x00000000u; // 804B93C4
  goto L_804B9454; // 804B93C8
L_804B93CC:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 804B93CC
  c->r[27]=R32(c->r[3]+c->r[30]); // 804B93D0
  cmps(c,0,(int32_t)c->r[27],0); // 804B93D4
  if (crb(c,2)) { goto L_804B944C; } // 804B93D8
  c->r[0]=R32(c->r[26]+0x00000000u); // 804B93DC
  c->r[3]=c->r[27]|c->r[27]; // 804B93E0
  c->r[4]=c->r[1]+0x00000008u; // 804B93E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B93E8
  c->r[12]=R32(c->r[27]+0x00000000u); // 804B93EC
  c->r[12]=R32(c->r[12]+0x00000030u); // 804B93F0
  c->ctr=c->r[12]; // 804B93F4
  if (true) { c->lr=0x804B93FCu; dispatch(c,c->ctr); } // 804B93F8
  cmps(c,0,(int32_t)c->r[29],0); // 804B93FC
  c->r[29]=0u+0x00000000u; // 804B9400
  if (!crb(c,2)) { goto L_804B9410; } // 804B9404
  cmps(c,0,(int32_t)c->r[3],0); // 804B9408
  if (crb(c,2)) { goto L_804B9414; } // 804B940C
L_804B9410:;
  c->r[29]=0u+0x00000001u; // 804B9410
L_804B9414:;
  c->r[5]=0u+0x00000000u; // 804B9414
  c->r[4]=0u+0x00000000u; // 804B9418
  goto L_804B9440; // 804B941C
L_804B9420:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 804B9420
  c->r[0]=R16(c->r[3]+c->r[4]); // 804B9424
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B9428
  if (!crb(c,2)) { goto L_804B9438; } // 804B942C
  c->r[3]=R32(c->r[25]+0x00000014u); // 804B9430
  W16(c->r[3]+c->r[4],c->r[31]); // 804B9434
L_804B9438:;
  c->r[4]=c->r[4]+0x00000002u; // 804B9438
  c->r[5]=c->r[5]+0x00000001u; // 804B943C
L_804B9440:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 804B9440
  cmpu(c,0,c->r[5],c->r[0]); // 804B9444
  if (crb(c,0)) { IRQCHK(c); goto L_804B9420; } // 804B9448
L_804B944C:;
  c->r[30]=c->r[30]+0x00000004u; // 804B944C
  c->r[28]=c->r[28]+0x00000001u; // 804B9450
L_804B9454:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 804B9454
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804B9458
  if (crb(c,0)) { IRQCHK(c); goto L_804B93CC; } // 804B945C
  c->r[3]=c->r[25]|c->r[25]; // 804B9460
  c->r[4]=0u+0x00000004u; // 804B9464
  c->r[5]=0u+0x00000001u; // 804B9468
  c->lr=0x804B9470u; f_804BDBC0(c); // 804B946C
  c->r[11]=c->r[1]+0x00000030u; // 804B9470
  c->r[3]=c->r[29]|c->r[29]; // 804B9474
  c->lr=0x804B947Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B9478
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B947C
  c->lr=c->r[0]; // 804B9480
  c->r[1]=c->r[1]+0x00000030u; // 804B9484
  return; // 804B9488
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_804B948C(Ctx* __restrict c) {
  trace_call(0x804B948Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B948C
  c->r[0]=c->lr; // 804B9490
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B9494
  c->r[11]=c->r[1]+0x00000040u; // 804B9498
  c->lr=0x804B94A0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B949C
  c->r[28]=c->r[3]|c->r[3]; // 804B94A0
  c->r[29]=c->r[4]|c->r[4]; // 804B94A4
  c->r[30]=c->r[5]|c->r[5]; // 804B94A8
  c->r[31]=c->r[6]|c->r[6]; // 804B94AC
  c->r[25]=0u+0x00000000u; // 804B94B0
  c->r[24]=0u+0x00000000u; // 804B94B4
  c->r[26]=0u+0x00000000u; // 804B94B8
  c->r[27]=0u+0x00000000u; // 804B94BC
  goto L_804B9554; // 804B94C0
L_804B94C4:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804B94C4
  c->r[23]=R32(c->r[3]+c->r[26]); // 804B94C8
  cmps(c,0,(int32_t)c->r[23],0); // 804B94CC
  if (crb(c,2)) { goto L_804B954C; } // 804B94D0
  c->r[0]=R32(c->r[29]+0x00000000u); // 804B94D4
  c->r[3]=c->r[23]|c->r[23]; // 804B94D8
  c->r[5]=c->r[30]|c->r[30]; // 804B94DC
  c->r[6]=c->r[31]|c->r[31]; // 804B94E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B94E4
  c->r[4]=c->r[1]+0x00000008u; // 804B94E8
  c->r[12]=R32(c->r[23]+0x00000000u); // 804B94EC
  c->r[12]=R32(c->r[12]+0x00000050u); // 804B94F0
  c->ctr=c->r[12]; // 804B94F4
  if (true) { c->lr=0x804B94FCu; dispatch(c,c->ctr); } // 804B94F8
  cmps(c,0,(int32_t)c->r[25],0); // 804B94FC
  c->r[25]=0u+0x00000000u; // 804B9500
  if (!crb(c,2)) { goto L_804B9510; } // 804B9504
  cmps(c,0,(int32_t)c->r[3],0); // 804B9508
  if (crb(c,2)) { goto L_804B9514; } // 804B950C
L_804B9510:;
  c->r[25]=0u+0x00000001u; // 804B9510
L_804B9514:;
  c->r[5]=0u+0x00000000u; // 804B9514
  c->r[4]=0u+0x00000000u; // 804B9518
  goto L_804B9540; // 804B951C
L_804B9520:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 804B9520
  c->r[0]=R16(c->r[3]+c->r[4]); // 804B9524
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B9528
  if (!crb(c,2)) { goto L_804B9538; } // 804B952C
  c->r[3]=R32(c->r[28]+0x00000014u); // 804B9530
  W16(c->r[3]+c->r[4],c->r[27]); // 804B9534
L_804B9538:;
  c->r[4]=c->r[4]+0x00000002u; // 804B9538
  c->r[5]=c->r[5]+0x00000001u; // 804B953C
L_804B9540:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804B9540
  cmpu(c,0,c->r[5],c->r[0]); // 804B9544
  if (crb(c,0)) { IRQCHK(c); goto L_804B9520; } // 804B9548
L_804B954C:;
  c->r[26]=c->r[26]+0x00000004u; // 804B954C
  c->r[24]=c->r[24]+0x00000001u; // 804B9550
L_804B9554:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 804B9554
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 804B9558
  if (crb(c,0)) { IRQCHK(c); goto L_804B94C4; } // 804B955C
  c->r[3]=c->r[28]|c->r[28]; // 804B9560
  c->r[4]=0u+0x00000004u; // 804B9564
  c->r[5]=0u+0x00000001u; // 804B9568
  c->lr=0x804B9570u; f_804BDBC0(c); // 804B956C
  c->r[11]=c->r[1]+0x00000040u; // 804B9570
  c->r[3]=c->r[25]|c->r[25]; // 804B9574
  c->lr=0x804B957Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B9578
  c->r[0]=R32(c->r[1]+0x00000044u); // 804B957C
  c->lr=c->r[0]; // 804B9580
  c->r[1]=c->r[1]+0x00000040u; // 804B9584
  return; // 804B9588
}

// fn_804B958C
void f_804B958C(Ctx* __restrict c) {
  trace_call(0x804B958Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B958C
  c->r[0]=c->lr; // 804B9590
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B9594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804B9598
  c->r[31]=0u+0x00000000u; // 804B959C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804B95A0
  c->r[30]=0u+0x00000000u; // 804B95A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804B95A8
  c->r[29]=c->r[3]|c->r[3]; // 804B95AC
  goto L_804B95DC; // 804B95B0
L_804B95B4:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804B95B4
  c->r[3]=R32(c->r[3]+c->r[31]); // 804B95B8
  cmps(c,0,(int32_t)c->r[3],0); // 804B95BC
  if (crb(c,2)) { goto L_804B95D4; } // 804B95C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B95C4
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B95C8
  c->ctr=c->r[12]; // 804B95CC
  if (true) { c->lr=0x804B95D4u; dispatch(c,c->ctr); } // 804B95D0
L_804B95D4:;
  c->r[31]=c->r[31]+0x00000004u; // 804B95D4
  c->r[30]=c->r[30]+0x00000001u; // 804B95D8
L_804B95DC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804B95DC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804B95E0
  if (crb(c,0)) { IRQCHK(c); goto L_804B95B4; } // 804B95E4
  c->r[3]=0u+0x00010000u; // 804B95E8
  c->r[5]=0u+0x00000000u; // 804B95EC
  c->r[4]=c->r[3]+0xFFFF8000u; // 804B95F0
  c->r[6]=0u+0x00000000u; // 804B95F4
  goto L_804B960C; // 804B95F8
L_804B95FC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804B95FC
  c->r[5]=c->r[5]+0x00000001u; // 804B9600
  W16(c->r[3]+c->r[6],c->r[4]); // 804B9604
  c->r[6]=c->r[6]+0x00000002u; // 804B9608
L_804B960C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804B960C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804B9610
  if (crb(c,0)) { IRQCHK(c); goto L_804B95FC; } // 804B9614
  c->r[3]=c->r[29]|c->r[29]; // 804B9618
  c->r[4]=0u+0x00000004u; // 804B961C
  c->r[5]=0u+0x00000000u; // 804B9620
  c->lr=0x804B9628u; f_804BDBC0(c); // 804B9624
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B9628
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804B962C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804B9630
  c->r[29]=R32(c->r[1]+0x00000014u); // 804B9634
  c->lr=c->r[0]; // 804B9638
  c->r[1]=c->r[1]+0x00000020u; // 804B963C
  return; // 804B9640
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_804B9644(Ctx* __restrict c) {
  trace_call(0x804B9644u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B9644
  c->r[0]=c->lr; // 804B9648
  W32(c->r[1]+0x00000034u,c->r[0]); // 804B964C
  c->r[11]=c->r[1]+0x00000030u; // 804B9650
  c->lr=0x804B9658u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B9654
  c->r[31]=c->r[3]|c->r[3]; // 804B9658
  c->r[26]=c->r[4]|c->r[4]; // 804B965C
  c->r[27]=c->r[5]|c->r[5]; // 804B9660
  c->r[28]=c->r[6]|c->r[6]; // 804B9664
  c->r[29]=0u+0x00000000u; // 804B9668
  c->r[30]=0u+0x00000000u; // 804B966C
  goto L_804B96B0; // 804B9670
L_804B9674:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B9674
  c->r[3]=R32(c->r[3]+c->r[30]); // 804B9678
  cmps(c,0,(int32_t)c->r[3],0); // 804B967C
  if (crb(c,2)) { goto L_804B96A8; } // 804B9680
  c->r[0]=R32(c->r[26]+0x00000000u); // 804B9684
  c->r[5]=c->r[27]|c->r[27]; // 804B9688
  c->r[6]=c->r[28]|c->r[28]; // 804B968C
  c->r[4]=c->r[1]+0x00000008u; // 804B9690
  W32(c->r[1]+0x00000008u,c->r[0]); // 804B9694
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B9698
  c->r[12]=R32(c->r[12]+0x00000054u); // 804B969C
  c->ctr=c->r[12]; // 804B96A0
  if (true) { c->lr=0x804B96A8u; dispatch(c,c->ctr); } // 804B96A4
L_804B96A8:;
  c->r[30]=c->r[30]+0x00000004u; // 804B96A8
  c->r[29]=c->r[29]+0x00000001u; // 804B96AC
L_804B96B0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B96B0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804B96B4
  if (crb(c,0)) { IRQCHK(c); goto L_804B9674; } // 804B96B8
  c->r[3]=0u+0x00010000u; // 804B96BC
  c->r[5]=0u+0x00000000u; // 804B96C0
  c->r[4]=c->r[3]+0xFFFF8000u; // 804B96C4
  c->r[6]=0u+0x00000000u; // 804B96C8
  goto L_804B96E0; // 804B96CC
L_804B96D0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B96D0
  c->r[5]=c->r[5]+0x00000001u; // 804B96D4
  W16(c->r[3]+c->r[6],c->r[4]); // 804B96D8
  c->r[6]=c->r[6]+0x00000002u; // 804B96DC
L_804B96E0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B96E0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804B96E4
  if (crb(c,0)) { IRQCHK(c); goto L_804B96D0; } // 804B96E8
  c->r[3]=c->r[31]|c->r[31]; // 804B96EC
  c->r[4]=0u+0x00000004u; // 804B96F0
  c->r[5]=0u+0x00000000u; // 804B96F4
  c->lr=0x804B96FCu; f_804BDBC0(c); // 804B96F8
  c->r[7]=0u+0x00000000u; // 804B96FC
  c->r[5]=0u+0x00000000u; // 804B9700
  c->r[4]=0u+0x00000000u; // 804B9704
  goto L_804B975C; // 804B9708
L_804B970C:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804B970C
  c->r[8]=R32(c->r[3]+c->r[5]); // 804B9710
  cmps(c,0,(int32_t)c->r[8],0); // 804B9714
  if (crb(c,2)) { goto L_804B9754; } // 804B9718
  c->r[9]=0u+0x00000000u; // 804B971C
  c->r[6]=0u+0x00000000u; // 804B9720
  goto L_804B9748; // 804B9724
L_804B9728:;
  c->r[3]=R32(c->r[8]+0x00000014u); // 804B9728
  c->r[0]=R16(c->r[3]+c->r[6]); // 804B972C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804B9730
  if (!crb(c,2)) { goto L_804B9740; } // 804B9734
  c->r[3]=R32(c->r[31]+0x00000014u); // 804B9738
  W16(c->r[3]+c->r[6],c->r[4]); // 804B973C
L_804B9740:;
  c->r[6]=c->r[6]+0x00000002u; // 804B9740
  c->r[9]=c->r[9]+0x00000001u; // 804B9744
L_804B9748:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804B9748
  cmpu(c,0,c->r[9],c->r[0]); // 804B974C
  if (crb(c,0)) { IRQCHK(c); goto L_804B9728; } // 804B9750
L_804B9754:;
  c->r[5]=c->r[5]+0x00000004u; // 804B9754
  c->r[7]=c->r[7]+0x00000001u; // 804B9758
L_804B975C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804B975C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804B9760
  if (crb(c,0)) { IRQCHK(c); goto L_804B970C; } // 804B9764
  c->r[11]=c->r[1]+0x00000030u; // 804B9768
  c->lr=0x804B9770u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B976C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804B9770
  c->lr=c->r[0]; // 804B9774
  c->r[1]=c->r[1]+0x00000030u; // 804B9778
  return; // 804B977C
}

// fn_804B9780
void f_804B9780(Ctx* __restrict c) {
  trace_call(0x804B9780u);
  c->r[5]=0u+0x00010000u; // 804B9780
  c->r[0]=c->r[5]+0x00000002u; // 804B9784
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B9788
  if (crb(c,2)) { goto L_804B9808; } // 804B978C
  if (!crb(c,0)) { goto L_804B97A4; } // 804B9790
  c->r[0]=c->r[5]+0x00000001u; // 804B9794
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B9798
  if (!crb(c,0)) { goto L_804B97B4; } // 804B979C
  return; // 804B97A0
L_804B97A4:;
  c->r[0]=c->r[5]+0x00000004u; // 804B97A4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B97A8
  if (!crb(c,0)) return; // 804B97AC
  goto L_804B97FC; // 804B97B0
L_804B97B4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B97B4
  c->r[4]=0u+0x00000000u; // 804B97B8
  c->r[7]=0u+0x00000000u; // 804B97BC
  c->ctr=c->r[0]; // 804B97C0
  cmps(c,0,(int32_t)c->r[0],0); // 804B97C4
  if (!crb(c,1)) return; // 804B97C8
L_804B97CC:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B97CC
  c->r[0]=R32(c->r[5]+c->r[7]); // 804B97D0
  cmpu(c,0,c->r[0],c->r[6]); // 804B97D4
  if (!crb(c,2)) { goto L_804B97EC; } // 804B97D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B97DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 804B97E0
  c->ctr=c->r[12]; // 804B97E4
  if (true) { dispatch(c,c->ctr); return; } // 804B97E8
L_804B97EC:;
  c->r[7]=c->r[7]+0x00000004u; // 804B97EC
  c->r[4]=c->r[4]+0x00000001u; // 804B97F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B97CC; } // 804B97F4
  return; // 804B97F8
L_804B97FC:;
  c->r[0]=0u+0x00000000u; // 804B97FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 804B9800
  return; // 804B9804
L_804B9808:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804B9808
  return; // 804B980C
}

// fn_804B9810
void f_804B9810(Ctx* __restrict c) {
  trace_call(0x804B9810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B9810
  c->r[0]=c->lr; // 804B9814
  W32(c->r[1]+0x00000024u,c->r[0]); // 804B9818
  c->r[11]=c->r[1]+0x00000020u; // 804B981C
  c->lr=0x804B9824u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B9820
  c->r[12]=0u+0x80720000u; // 804B9824
  c->r[31]=0u+0x00000000u; // 804B9828
  c->r[12]=c->r[12]+0xFFFFA0C0u; // 804B982C
  W32(c->r[3]+0x00000004u,c->r[31]); // 804B9830
  c->r[27]=c->r[3]|c->r[3]; // 804B9834
  c->r[28]=c->r[7]|c->r[7]; // 804B9838
  W32(c->r[3]+0x00000008u,c->r[4]); // 804B983C
  c->r[29]=c->r[8]|c->r[8]; // 804B9840
  c->r[30]=c->r[9]|c->r[9]; // 804B9844
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 804B9848
  W32(c->r[3]+0x00000000u,c->r[12]); // 804B984C
  W32(c->r[3]+0x00000010u,c->r[6]); // 804B9850
  W32(c->r[3]+0x00000014u,c->r[5]); // 804B9854
  c->r[12]=R32(c->r[12]+0x00000034u); // 804B9858
  c->ctr=c->r[12]; // 804B985C
  if (true) { c->lr=0x804B9864u; dispatch(c,c->ctr); } // 804B9860
  c->r[3]=0u+0x80720000u; // 804B9864
  W32(c->r[27]+0x00000018u,c->r[29]); // 804B9868
  c->r[3]=c->r[3]+0xFFFFA068u; // 804B986C
  c->r[4]=0u+0x00000000u; // 804B9870
  W32(c->r[27]+0x00000000u,c->r[3]); // 804B9874
  c->r[5]=0u+0x00000000u; // 804B9878
  W32(c->r[27]+0x0000001Cu,c->r[28]); // 804B987C
  goto L_804B9894; // 804B9880
L_804B9884:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 804B9884
  c->r[4]=c->r[4]+0x00000001u; // 804B9888
  W32(c->r[3]+c->r[5],c->r[31]); // 804B988C
  c->r[5]=c->r[5]+0x00000004u; // 804B9890
L_804B9894:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 804B9894
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804B9898
  if (crb(c,0)) { IRQCHK(c); goto L_804B9884; } // 804B989C
  c->r[3]=0u+0x80720000u; // 804B98A0
  W32(c->r[27]+0x00000020u,c->r[30]); // 804B98A4
  c->r[3]=c->r[3]+0xFFFFA010u; // 804B98A8
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B98AC
  W32(c->r[27]+0x00000000u,c->r[3]); // 804B98B0
  c->r[5]=0u+0x00000000u; // 804B98B4
  c->r[4]=0u+0x00000000u; // 804B98B8
  goto L_804B98D0; // 804B98BC
L_804B98C0:;
  c->r[3]=R32(c->r[27]+0x00000020u); // 804B98C0
  c->r[5]=c->r[5]+0x00000001u; // 804B98C4
  {uint32_t ea=c->r[3]+c->r[4]; WF32(ea,c->f[0]);} // 804B98C8
  c->r[4]=c->r[4]+0x00000004u; // 804B98CC
L_804B98D0:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 804B98D0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804B98D4
  if (crb(c,0)) { IRQCHK(c); goto L_804B98C0; } // 804B98D8
  c->r[11]=c->r[1]+0x00000020u; // 804B98DC
  c->r[3]=c->r[27]|c->r[27]; // 804B98E0
  c->lr=0x804B98E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B98E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804B98E8
  c->lr=c->r[0]; // 804B98EC
  c->r[1]=c->r[1]+0x00000020u; // 804B98F0
  return; // 804B98F4
}

// fn_804B98F8
void f_804B98F8(Ctx* __restrict c) {
  trace_call(0x804B98F8u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B98F8
  c->r[0]=c->lr; // 804B98FC
  W32(c->r[1]+0x00000164u,c->r[0]); // 804B9900
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 804B9904
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 804B9908
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 804B990C
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 804B9910
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 804B9914
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 804B9918
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 804B991C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 804B9920
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 804B9924
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 804B9928
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 804B992C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 804B9930
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 804B9934
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 804B9938
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 804B993C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 804B9940
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 804B9944
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 804B9948
  c->r[11]=c->r[1]+0x000000D0u; // 804B994C
  c->lr=0x804B9954u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B9950
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[23]=c->ps1[23]=RF32(ea);} // 804B9954
  c->r[24]=c->r[3]|c->r[3]; // 804B9958
  c->r[0]=R32(c->r[3]+0x00000018u); // 804B995C
  c->r[25]=c->r[4]|c->r[4]; // 804B9960
  c->r[26]=c->r[5]|c->r[5]; // 804B9964
  c->f[0]=c->f[23]; // 804B9968
  c->r[28]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804B996C
  c->r[8]=0u+0x00000000u; // 804B9970
  c->r[9]=0u+0x00000000u; // 804B9974
  c->r[7]=0u+0x00000000u; // 804B9978
  c->ctr=c->r[0]; // 804B997C
  cmps(c,0,(int32_t)c->r[0],0); // 804B9980
  if (!crb(c,1)) { goto L_804B99D4; } // 804B9984
L_804B9988:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804B9988
  c->r[6]=R32(c->r[3]+0x00000020u); // 804B998C
  c->r[5]=R32(c->r[5]+c->r[7]); // 804B9990
  {uint32_t ea=c->r[6]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9994
  cmps(c,0,(int32_t)c->r[5],0); // 804B9998
  if (crb(c,2)) { goto L_804B99CC; } // 804B999C
  fcmp(c,0,c->f[0],c->f[1]); // 804B99A0
  if (crb(c,2)) { goto L_804B99CC; } // 804B99A4
  c->r[0]=R32(c->r[5]+0x00000014u); // 804B99A8
  c->r[0]=R16(c->r[28]+c->r[0]); // 804B99AC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B99B0
  if (!crb(c,2)) { goto L_804B99CC; } // 804B99B4
  cmps(c,0,(int32_t)c->r[8],0); // 804B99B8
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[1]); // 804B99BC
  c->r[9]=c->r[9]+0x00000001u; // 804B99C0
  if (!crb(c,2)) { goto L_804B99CC; } // 804B99C4
  c->r[8]=c->r[5]|c->r[5]; // 804B99C8
L_804B99CC:;
  c->r[7]=c->r[7]+0x00000004u; // 804B99CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804B9988; } // 804B99D0
L_804B99D4:;
  cmps(c,0,(int32_t)c->r[9],0); // 804B99D4
  if (!crb(c,2)) { goto L_804B99EC; } // 804B99D8
  c->r[0]=0u+0x00000000u; // 804B99DC
  c->r[3]=c->r[25]|c->r[25]; // 804B99E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 804B99E4
  goto L_804B9ED8; // 804B99E8
L_804B99EC:;
  cmps(c,0,(int32_t)c->r[9],1); // 804B99EC
  if (!crb(c,2)) { goto L_804B9A14; } // 804B99F0
  c->r[12]=R32(c->r[8]+0x00000000u); // 804B99F4
  c->r[3]=c->r[8]|c->r[8]; // 804B99F8
  c->r[4]=c->r[25]|c->r[25]; // 804B99FC
  c->r[5]=c->r[26]|c->r[26]; // 804B9A00
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B9A04
  c->ctr=c->r[12]; // 804B9A08
  if (true) { c->lr=0x804B9A10u; dispatch(c,c->ctr); } // 804B9A0C
  goto L_804B9ED8; // 804B9A10
L_804B9A14:;
  c->r[3]=c->r[24]|c->r[24]; // 804B9A14
  c->r[4]=0u+0x00000008u; // 804B9A18
  c->lr=0x804B9A20u; f_804BDBE8(c); // 804B9A1C
  c->r[30]=c->r[3]|c->r[3]; // 804B9A20
  c->r[3]=c->r[24]|c->r[24]; // 804B9A24
  c->r[4]=0u+0x00000010u; // 804B9A28
  c->lr=0x804B9A30u; f_804BDBE8(c); // 804B9A2C
  c->f[29]=c->ps1[29]=fres(c->f[23]); // 804B9A30
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[28]=c->ps1[28]=RF32(ea);} // 804B9A34
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9A38
  c->r[31]=c->r[3]|c->r[3]; // 804B9A3C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[28]);} // 804B9A40
  c->r[0]=0u+0xFFFFFFFFu; // 804B9A44
  {double t0=S(c->f[29]+c->f[29]), t1=S(c->ps1[29]+c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 804B9A48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 804B9A4C
  {double t0=S(c->f[29]*c->f[29]), t1=S(c->ps1[29]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 804B9A50
  c->r[3]=c->r[25]+0x0000001Cu; // 804B9A54
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 804B9A58
  c->f[27]=c->f[28]; // 804B9A5C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804B9A60
  c->f[26]=c->f[28]; // 804B9A64
  c->f[25]=c->f[28]; // 804B9A68
  {double t0=S(-std::fma(c->f[23],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[23],c->ps1[1],-c->ps1[2])); c->f[29]=t0; c->ps1[29]=t1;} // 804B9A6C
  W32(c->r[25]+0x00000000u,c->r[0]); // 804B9A70
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[28]);} // 804B9A74
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[28]);} // 804B9A78
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[28]);} // 804B9A7C
  c->lr=0x804B9A84u; f_804E1674(c); // 804B9A80
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 804B9A84
  c->r[27]=0u+0x00000000u; // 804B9A88
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 804B9A8C
  c->r[29]=0u+0x00000000u; // 804B9A90
  goto L_804B9D7C; // 804B9A94
L_804B9A98:;
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 804B9A98
  c->r[4]=R32(c->r[24]+0x00000020u); // 804B9A9C
  c->r[3]=R32(c->r[3]+c->r[29]); // 804B9AA0
  {uint32_t ea=c->r[4]+c->r[29]; c->f[24]=c->ps1[24]=RF32(ea);} // 804B9AA4
  cmps(c,0,(int32_t)c->r[3],0); // 804B9AA8
  if (crb(c,2)) { goto L_804B9D74; } // 804B9AAC
  fcmp(c,0,c->f[30],c->f[24]); // 804B9AB0
  if (crb(c,2)) { goto L_804B9D74; } // 804B9AB4
  c->r[0]=R32(c->r[3]+0x00000014u); // 804B9AB8
  c->r[0]=R16(c->r[28]+c->r[0]); // 804B9ABC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 804B9AC0
  if (!crb(c,2)) { goto L_804B9D74; } // 804B9AC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804B9AC8
  c->r[5]=c->r[26]|c->r[26]; // 804B9ACC
  c->r[4]=c->r[1]+0x0000005Cu; // 804B9AD0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804B9AD4
  c->ctr=c->r[12]; // 804B9AD8
  if (true) { c->lr=0x804B9AE0u; dispatch(c,c->ctr); } // 804B9ADC
  cmps(c,0,(int32_t)c->r[31],0); // 804B9AE0
  c->f[23]=c->ps1[23]=S(c->f[24]*c->f[29]); // 804B9AE4
  c->r[22]=R32(c->r[3]+0x00000000u); // 804B9AE8
  c->r[23]=c->r[3]|c->r[3]; // 804B9AEC
  if (crb(c,2)) { goto L_804B9B60; } // 804B9AF0
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 804B9AF4
  if (!crb(c,2)) { goto L_804B9BCC; } // 804B9AF8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9AFC
  fcmp(c,0,c->f[1],c->f[30]); // 804B9B00
  if (!crb(c,1)) { goto L_804B9B10; } // 804B9B04
  c->lr=0x804B9B0Cu; f_804E100C(c); // 804B9B08
  goto L_804B9B14; // 804B9B0C
L_804B9B10:;
  {uint32_t ea=c->r[2]+0x000015A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B10
L_804B9B14:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 804B9B14
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B18
  fcmp(c,0,c->f[1],c->f[30]); // 804B9B1C
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 804B9B20
  if (!crb(c,1)) { goto L_804B9B30; } // 804B9B24
  c->lr=0x804B9B2Cu; f_804E100C(c); // 804B9B28
  goto L_804B9B34; // 804B9B2C
L_804B9B30:;
  {uint32_t ea=c->r[2]+0x000015A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B30
L_804B9B34:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 804B9B34
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B38
  fcmp(c,0,c->f[1],c->f[30]); // 804B9B3C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 804B9B40
  if (!crb(c,1)) { goto L_804B9B50; } // 804B9B44
  c->lr=0x804B9B4Cu; f_804E100C(c); // 804B9B48
  goto L_804B9B54; // 804B9B4C
L_804B9B50:;
  {uint32_t ea=c->r[2]+0x000015A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B50
L_804B9B54:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 804B9B54
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 804B9B58
  goto L_804B9BCC; // 804B9B5C
L_804B9B60:;
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 804B9B60
  if (!crb(c,2)) { goto L_804B9BA8; } // 804B9B64
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9B68
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9B6C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 804B9B70
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B74
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9B78
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804B9B7C
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 804B9B80
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9B84
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 804B9B88
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804B9B8C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 804B9B90
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9B94
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 804B9B98
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804B9B9C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B9BA0
  goto L_804B9BCC; // 804B9BA4
L_804B9BA8:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9BA8
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9BAC
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9BB0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[23]); // 804B9BB4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 804B9BB8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 804B9BBC
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 804B9BC0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 804B9BC4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 804B9BC8
L_804B9BCC:;
  cmps(c,0,(int32_t)c->r[30],0); // 804B9BCC
  if (crb(c,2)) { goto L_804B9C28; } // 804B9BD0
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 804B9BD4
  if (!crb(c,2)) { goto L_804B9BEC; } // 804B9BD8
  c->r[3]=c->r[1]+0x00000018u; // 804B9BDC
  c->r[4]=c->r[23]+0x0000001Cu; // 804B9BE0
  c->lr=0x804B9BE8u; f_8038400C(c); // 804B9BE4
  goto L_804B9BFC; // 804B9BE8
L_804B9BEC:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 804B9BEC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 804B9BF0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[30]);} // 804B9BF4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 804B9BF8
L_804B9BFC:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[24]); // 804B9BFC
  c->r[3]=c->r[1]+0x00000028u; // 804B9C00
  c->r[5]=c->r[3]|c->r[3]; // 804B9C04
  c->r[4]=c->r[1]+0x00000018u; // 804B9C08
  c->f[0]=c->ps1[0]=fres(c->f[25]); // 804B9C0C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804B9C10
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804B9C14
  {double t0=S(-std::fma(c->f[25],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[25],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 804B9C18
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 804B9C1C
  c->lr=0x804B9C24u; f_8038423C(c); // 804B9C20
  goto L_804B9D24; // 804B9C24
L_804B9C28:;
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 804B9C28
  if (!crb(c,2)) { goto L_804B9CFC; } // 804B9C2C
  cmps(c,0,(int32_t)c->r[27],0); // 804B9C30
  if (!crb(c,2)) { goto L_804B9C80; } // 804B9C34
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C38
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804B9C3C
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C40
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 804B9C44
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C48
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804B9C4C
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C50
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 804B9C54
  {uint32_t ea=c->r[23]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C58
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 804B9C5C
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C60
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 804B9C64
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C68
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 804B9C6C
  {uint32_t ea=c->r[23]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C70
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 804B9C74
  {uint32_t ea=c->r[23]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C78
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 804B9C7C
L_804B9C80:;
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9C80
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9C84
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 804B9C88
  {uint32_t ea=c->r[25]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B9C8C
  {uint32_t ea=c->r[25]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 804B9C90
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9C94
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[1]); // 804B9C98
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9C9C
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9CA0
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[5]);} // 804B9CA4
  {uint32_t ea=c->r[23]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 804B9CA8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[23]); // 804B9CAC
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 804B9CB0
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[4]);} // 804B9CB4
  {uint32_t ea=c->r[23]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 804B9CB8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 804B9CBC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 804B9CC0
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[3]);} // 804B9CC4
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804B9CC8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[23]); // 804B9CCC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804B9CD0
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[2]);} // 804B9CD4
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9CD8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 804B9CDC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804B9CE0
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[1]);} // 804B9CE4
  {uint32_t ea=c->r[23]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9CE8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 804B9CEC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804B9CF0
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 804B9CF4
  goto L_804B9D24; // 804B9CF8
L_804B9CFC:;
  cmps(c,0,(int32_t)c->r[27],0); // 804B9CFC
  if (!crb(c,2)) { goto L_804B9D0C; } // 804B9D00
  c->r[3]=c->r[1]+0x00000038u; // 804B9D04
  c->lr=0x804B9D0Cu; f_804E161C(c); // 804B9D08
L_804B9D0C:;
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9D0C
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9D10
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 804B9D14
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 804B9D18
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[1]);} // 804B9D1C
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 804B9D20
L_804B9D24:;
  c->r[0]=rotl(c->r[22],0)&0x00000040u; cr0(c,c->r[0]); // 804B9D24
  if (!crb(c,2)) { goto L_804B9D68; } // 804B9D28
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9D2C
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9D30
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 804B9D34
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9D38
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9D3C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804B9D40
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 804B9D44
  {uint32_t ea=c->r[23]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9D48
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 804B9D4C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804B9D50
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 804B9D54
  {uint32_t ea=c->r[23]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9D58
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 804B9D5C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804B9D60
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 804B9D64
L_804B9D68:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804B9D68
  c->r[0]=c->r[0]&c->r[22]; // 804B9D6C
  W32(c->r[25]+0x00000000u,c->r[0]); // 804B9D70
L_804B9D74:;
  c->r[29]=c->r[29]+0x00000004u; // 804B9D74
  c->r[27]=c->r[27]+0x00000001u; // 804B9D78
L_804B9D7C:;
  c->r[0]=R32(c->r[24]+0x00000018u); // 804B9D7C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 804B9D80
  if (crb(c,0)) { IRQCHK(c); goto L_804B9A98; } // 804B9D84
  cmps(c,0,(int32_t)c->r[31],0); // 804B9D88
  if (crb(c,2)) { goto L_804B9DB4; } // 804B9D8C
  c->f[1]=c->f[28]; // 804B9D90
  c->lr=0x804B9D98u; f_804E0F80(c); // 804B9D94
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 804B9D98
  c->f[1]=c->f[27]; // 804B9D9C
  c->lr=0x804B9DA4u; f_804E0F80(c); // 804B9DA0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 804B9DA4
  c->f[1]=c->f[26]; // 804B9DA8
  c->lr=0x804B9DB0u; f_804E0F80(c); // 804B9DAC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B9DB0
L_804B9DB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 804B9DB4
  if (crb(c,2)) { goto L_804B9DFC; } // 804B9DB8
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9DBC
  c->r[3]=c->r[25]+0x0000001Cu; // 804B9DC0
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9DC4
  c->r[4]=c->r[1]+0x00000028u; // 804B9DC8
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9DCC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804B9DD0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804B9DD4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804B9DD8
  c->lr=0x804B9DE0u; f_80383664(c); // 804B9DDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804B9DE0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9DE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9DE8
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 804B9DEC
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 804B9DF0
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 804B9DF4
  goto L_804B9EC8; // 804B9DF8
L_804B9DFC:;
  c->r[22]=c->r[25]+0x0000001Cu; // 804B9DFC
  c->r[23]=c->r[25]+0x0000002Cu; // 804B9E00
  c->r[24]=c->r[25]+0x0000003Cu; // 804B9E04
  c->r[3]=c->r[22]|c->r[22]; // 804B9E08
  c->r[4]=c->r[23]|c->r[23]; // 804B9E0C
  c->r[5]=c->r[24]|c->r[24]; // 804B9E10
  c->lr=0x804B9E18u; f_80383DE0(c); // 804B9E14
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 804B9E18
  {uint32_t ea=c->r[22]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9E1C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804B9E20
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E24
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804B9E28
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804B9E2C
  fcmp(c,0,c->f[0],c->f[1]); // 804B9E30
  if (crb(c,2)) { goto L_804B9E54; } // 804B9E34
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 804B9E38
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9E3C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804B9E40
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804B9E44
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804B9E48
  fcmp(c,0,c->f[0],c->f[1]); // 804B9E4C
  if (!crb(c,2)) { goto L_804B9EA0; } // 804B9E50
L_804B9E54:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E54
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[0]);} // 804B9E58
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E5C
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[0]);} // 804B9E60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E64
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[0]);} // 804B9E68
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E6C
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 804B9E70
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E74
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 804B9E78
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E7C
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 804B9E80
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E84
  {uint32_t ea=c->r[25]+0x0000003Cu; WF32(ea,c->f[0]);} // 804B9E88
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E8C
  {uint32_t ea=c->r[25]+0x00000040u; WF32(ea,c->f[0]);} // 804B9E90
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804B9E94
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[0]);} // 804B9E98
  goto L_804B9EC8; // 804B9E9C
L_804B9EA0:;
  c->r[3]=c->r[22]|c->r[22]; // 804B9EA0
  c->r[4]=c->r[22]|c->r[22]; // 804B9EA4
  c->lr=0x804B9EACu; f_80383D38(c); // 804B9EA8
  c->r[3]=c->r[24]|c->r[24]; // 804B9EAC
  c->r[4]=c->r[24]|c->r[24]; // 804B9EB0
  c->lr=0x804B9EB8u; f_80383D38(c); // 804B9EB4
  c->r[3]=c->r[24]|c->r[24]; // 804B9EB8
  c->r[4]=c->r[22]|c->r[22]; // 804B9EBC
  c->r[5]=c->r[23]|c->r[23]; // 804B9EC0
  c->lr=0x804B9EC8u; f_80383DE0(c); // 804B9EC4
L_804B9EC8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804B9EC8
  c->r[3]=c->r[25]|c->r[25]; // 804B9ECC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 804B9ED0
  W32(c->r[25]+0x00000000u,c->r[0]); // 804B9ED4
L_804B9ED8:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 804B9ED8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 804B9EDC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 804B9EE0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 804B9EE4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 804B9EE8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 804B9EEC
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 804B9EF0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 804B9EF4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 804B9EF8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 804B9EFC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 804B9F00
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 804B9F04
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 804B9F08
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 804B9F0C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 804B9F10
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 804B9F14
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 804B9F18
  c->r[11]=c->r[1]+0x000000D0u; // 804B9F1C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 804B9F20
  c->lr=0x804B9F28u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804B9F24
  c->r[0]=R32(c->r[1]+0x00000164u); // 804B9F28
  c->lr=c->r[0]; // 804B9F2C
  c->r[1]=c->r[1]+0x00000160u; // 804B9F30
  return; // 804B9F34
}

// fn_804B9F38
void f_804B9F38(Ctx* __restrict c) {
  trace_call(0x804B9F38u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804B9F38
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B9F3C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 804B9F40
  return; // 804B9F44
}

// fn_804B9F48
void f_804B9F48(Ctx* __restrict c) {
  trace_call(0x804B9F48u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 804B9F48
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804B9F4C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 804B9F50
  return; // 804B9F54
}

// fn_804B9F58
void f_804B9F58(Ctx* __restrict c) {
  trace_call(0x804B9F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804B9F58
  c->r[0]=c->lr; // 804B9F5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804B9F60
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804B9F64
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804B9F68
  c->r[11]=c->r[1]+0x00000030u; // 804B9F6C
  c->lr=0x804B9F74u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804B9F70
  c->r[8]=R32(c->r[5]+0x00000000u); // 804B9F74
  c->r[29]=c->r[3]|c->r[3]; // 804B9F78
  c->r[25]=c->r[4]|c->r[4]; // 804B9F7C
  c->r[30]=c->r[5]|c->r[5]; // 804B9F80
  cmps(c,0,(int32_t)c->r[8],0); // 804B9F84
  c->r[27]=c->r[7]|c->r[7]; // 804B9F88
  if (crb(c,2)) { goto L_804B9F9C; } // 804B9F8C
  c->r[0]=R32(c->r[6]+0x00000000u); // 804B9F90
  cmps(c,0,(int32_t)c->r[0],0); // 804B9F94
  if (!crb(c,2)) { goto L_804B9FA4; } // 804B9F98
L_804B9F9C:;
  c->r[3]=0u+0x00000000u; // 804B9F9C
  goto L_804BA128; // 804B9FA0
L_804B9FA4:;
  c->r[31]=R16(c->r[8]+0x00000022u); // 804B9FA4
  c->r[3]=c->r[6]|c->r[6]; // 804B9FA8
  c->lr=0x804B9FB0u; f_804AC500(c); // 804B9FAC
  c->r[0]=0u-c->r[27]; // 804B9FB0
  c->r[28]=c->r[3]|c->r[3]; // 804B9FB4
  c->r[4]=c->r[0]|c->r[27]; // 804B9FB8
  cmps(c,0,(int32_t)c->r[25],0); // 804B9FBC
  c->r[4]=sraw(c,c->r[4],31); // 804B9FC0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804B9FC4
  c->r[3]=c->r[31]&c->r[4]; // 804B9FC8
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 804B9FCC
  c->r[3]=c->r[26]+c->r[0]; // 804B9FD0
  c->r[4]=c->r[3]+0x00000034u; // 804B9FD4
  if (crb(c,2)) { goto L_804B9FE0; } // 804B9FD8
  W32(c->r[25]+0x00000000u,c->r[4]); // 804B9FDC
L_804B9FE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804B9FE0
  if (!crb(c,2)) { goto L_804B9FF0; } // 804B9FE4
  c->r[3]=0u+0x00000000u; // 804B9FE8
  goto L_804BA128; // 804B9FEC
L_804B9FF0:;
  c->r[3]=c->r[29]|c->r[29]; // 804B9FF0
  c->lr=0x804B9FF8u; f_803C4D08(c); // 804B9FF4
  cmps(c,0,(int32_t)c->r[3],0); // 804B9FF8
  c->r[31]=c->r[3]|c->r[3]; // 804B9FFC
  if (!crb(c,2)) { goto L_804BA00C; } // 804BA000
  c->r[3]=0u+0x00000000u; // 804BA004
  goto L_804BA128; // 804BA008
L_804BA00C:;
  cmps(c,0,(int32_t)c->r[27],0); // 804BA00C
  if (crb(c,2)) { goto L_804BA01C; } // 804BA010
  c->r[27]=c->r[3]+0x00000034u; // 804BA014
  goto L_804BA020; // 804BA018
L_804BA01C:;
  c->r[27]=0u+0x00000000u; // 804BA01C
L_804BA020:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BA020
  c->r[4]=c->r[3]+c->r[26]; // 804BA024
  c->r[5]=c->r[4]+0x00000034u; // 804BA028
  if (crb(c,2)) { goto L_804BA124; } // 804BA02C
  c->r[0]=0u+0x00000000u; // 804BA030
  c->r[4]=0u+0x80720000u; // 804BA034
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BA038
  c->r[4]=c->r[4]+0xFFFFA0C0u; // 804BA03C
  c->r[30]=R32(c->r[30]+0x00000000u); // 804BA040
  W32(c->r[3]+0x00000008u,c->r[29]); // 804BA044
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BA048
  W32(c->r[3]+0x00000000u,c->r[4]); // 804BA04C
  W32(c->r[3]+0x00000010u,c->r[28]); // 804BA050
  W32(c->r[3]+0x00000014u,c->r[5]); // 804BA054
  c->r[3]=c->r[31]|c->r[31]; // 804BA058
  c->r[12]=R32(c->r[31]+0x00000000u); // 804BA05C
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BA060
  c->ctr=c->r[12]; // 804BA064
  if (true) { c->lr=0x804BA06Cu; dispatch(c,c->ctr); } // 804BA068
  c->r[4]=R16(c->r[30]+0x00000020u); // 804BA06C
  c->r[0]=0u+0x43300000u; // 804BA070
  c->r[5]=R32(c->r[30]+0x00000024u); // 804BA074
  c->r[3]=0u+0x80720000u; // 804BA078
  c->r[4]=c->r[4]^0x80000000u; // 804BA07C
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA080
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804BA084
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804BA088
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BA08C
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804BA090
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BA094
  c->r[3]=c->r[3]+0xFFFF9FB8u; // 804BA098
  {uint32_t ea=c->r[2]+0x000015B0u; c->f[3]=RF64(ea);} // 804BA09C
  cmps(c,0,(int32_t)c->r[27],0); // 804BA0A0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 804BA0A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804BA0A8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BA0AC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 804BA0B0
  c->r[0]=R32(c->r[4]+c->r[5]); // 804BA0B4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 804BA0B8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 804BA0BC
  W32(c->r[31]+0x00000028u,c->r[0]); // 804BA0C0
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BA0C4
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 804BA0C8
  W32(c->r[31]+0x00000030u,c->r[27]); // 804BA0CC
  if (crb(c,2)) { goto L_804BA124; } // 804BA0D0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BA0D4
  c->r[28]=0u+0x00000000u; // 804BA0D8
  c->r[27]=0u+0x00000000u; // 804BA0DC
  goto L_804BA118; // 804BA0E0
L_804BA0E4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804BA0E4
  c->r[3]=R16(c->r[3]+c->r[27]); // 804BA0E8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BA0EC
  if (!crb(c,2)) { goto L_804BA110; } // 804BA0F0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BA0F4
  c->f[1]=c->f[31]; // 804BA0F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA0FC
  c->r[4]=R32(c->r[31]+0x00000030u); // 804BA100
  c->r[3]=c->r[31]+0x0000002Cu; // 804BA104
  c->r[4]=c->r[4]+c->r[0]; // 804BA108
  c->lr=0x804BA110u; f_804B2F50(c); // 804BA10C
L_804BA110:;
  c->r[27]=c->r[27]+0x00000002u; // 804BA110
  c->r[28]=c->r[28]+0x00000001u; // 804BA114
L_804BA118:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804BA118
  cmpu(c,0,c->r[28],c->r[0]); // 804BA11C
  if (crb(c,0)) { IRQCHK(c); goto L_804BA0E4; } // 804BA120
L_804BA124:;
  c->r[3]=c->r[31]|c->r[31]; // 804BA124
L_804BA128:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804BA128
  c->r[11]=c->r[1]+0x00000030u; // 804BA12C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804BA130
  c->lr=0x804BA138u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BA134
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BA138
  c->lr=c->r[0]; // 804BA13C
  c->r[1]=c->r[1]+0x00000040u; // 804BA140
  return; // 804BA144
}

// fn_804BA148
void f_804BA148(Ctx* __restrict c) {
  trace_call(0x804BA148u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA148
  c->r[0]=c->lr; // 804BA14C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BA150
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BA154
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BA158
  c->r[12]=0u+0x80720000u; // 804BA15C
  c->r[0]=0u+0x00000000u; // 804BA160
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BA164
  c->r[12]=c->r[12]+0xFFFFA0C0u; // 804BA168
  c->r[31]=c->r[3]|c->r[3]; // 804BA16C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BA170
  c->r[30]=c->r[5]|c->r[5]; // 804BA174
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BA178
  c->r[29]=c->r[8]|c->r[8]; // 804BA17C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BA180
  W32(c->r[3]+0x00000008u,c->r[4]); // 804BA184
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804BA188
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BA18C
  W32(c->r[3]+0x00000010u,c->r[7]); // 804BA190
  W32(c->r[3]+0x00000014u,c->r[6]); // 804BA194
  c->r[12]=R32(c->r[12]+0x00000034u); // 804BA198
  c->ctr=c->r[12]; // 804BA19C
  if (true) { c->lr=0x804BA1A4u; dispatch(c,c->ctr); } // 804BA1A0
  c->r[5]=R32(c->r[30]+0x00000000u); // 804BA1A4
  c->r[0]=0u+0x43300000u; // 804BA1A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BA1AC
  c->r[3]=0u+0x80720000u; // 804BA1B0
  c->r[0]=R16(c->r[5]+0x00000020u); // 804BA1B4
  c->r[4]=c->r[13]+0xFFFF9B50u; // 804BA1B8
  c->r[5]=R32(c->r[5]+0x00000024u); // 804BA1BC
  c->r[3]=c->r[3]+0xFFFF9FB8u; // 804BA1C0
  c->r[0]=c->r[0]^0x80000000u; // 804BA1C4
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BA1C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804BA1CC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804BA1D0
  c->r[4]=R32(c->r[4]+c->r[0]); // 804BA1D4
  cmps(c,0,(int32_t)c->r[29],0); // 804BA1D8
  {uint32_t ea=c->r[2]+0x000015B0u; c->f[2]=RF64(ea);} // 804BA1DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804BA1E0
  {uint32_t ea=c->r[2]+0x000015A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BA1E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804BA1E8
  c->r[0]=R32(c->r[30]+0x00000000u); // 804BA1EC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 804BA1F0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804BA1F4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[31]);} // 804BA1F8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 804BA1FC
  W32(c->r[31]+0x00000028u,c->r[4]); // 804BA200
  W32(c->r[31]+0x00000000u,c->r[3]); // 804BA204
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 804BA208
  W32(c->r[31]+0x00000030u,c->r[29]); // 804BA20C
  if (crb(c,2)) { goto L_804BA260; } // 804BA210
  c->r[30]=0u+0x00000000u; // 804BA214
  c->r[29]=0u+0x00000000u; // 804BA218
  goto L_804BA254; // 804BA21C
L_804BA220:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804BA220
  c->r[3]=R16(c->r[3]+c->r[29]); // 804BA224
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BA228
  if (!crb(c,2)) { goto L_804BA24C; } // 804BA22C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BA230
  c->f[1]=c->f[31]; // 804BA234
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA238
  c->r[4]=R32(c->r[31]+0x00000030u); // 804BA23C
  c->r[3]=c->r[31]+0x0000002Cu; // 804BA240
  c->r[4]=c->r[4]+c->r[0]; // 804BA244
  c->lr=0x804BA24Cu; f_804B2F50(c); // 804BA248
L_804BA24C:;
  c->r[29]=c->r[29]+0x00000002u; // 804BA24C
  c->r[30]=c->r[30]+0x00000001u; // 804BA250
L_804BA254:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804BA254
  cmpu(c,0,c->r[30],c->r[0]); // 804BA258
  if (crb(c,0)) { IRQCHK(c); goto L_804BA220; } // 804BA25C
L_804BA260:;
  c->r[3]=c->r[31]|c->r[31]; // 804BA260
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BA264
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BA268
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BA26C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BA270
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BA274
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BA278
  c->lr=c->r[0]; // 804BA27C
  c->r[1]=c->r[1]+0x00000030u; // 804BA280
  return; // 804BA284
}

// fn_804BA288
void f_804BA288(Ctx* __restrict c) {
  trace_call(0x804BA288u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA288
  c->r[0]=c->lr; // 804BA28C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BA290
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BA294
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BA298
  c->f[3]=c->f[1]; // 804BA29C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BA2A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BA2A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BA2A8
  c->r[29]=c->r[3]|c->r[3]; // 804BA2AC
  c->r[12]=R32(c->r[3]+0x00000028u); // 804BA2B0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA2B4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BA2B8
  c->ctr=c->r[12]; // 804BA2BC
  if (true) { c->lr=0x804BA2C4u; dispatch(c,c->ctr); } // 804BA2C0
  c->r[0]=R32(c->r[29]+0x00000030u); // 804BA2C4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804BA2C8
  cmps(c,0,(int32_t)c->r[0],0); // 804BA2CC
  if (crb(c,2)) { goto L_804BA324; } // 804BA2D0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804BA2D4
  c->r[31]=0u+0x00000000u; // 804BA2D8
  c->r[30]=0u+0x00000000u; // 804BA2DC
  goto L_804BA318; // 804BA2E0
L_804BA2E4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BA2E4
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BA2E8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BA2EC
  if (!crb(c,2)) { goto L_804BA310; } // 804BA2F0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BA2F4
  c->f[1]=c->f[31]; // 804BA2F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA2FC
  c->r[4]=R32(c->r[29]+0x00000030u); // 804BA300
  c->r[3]=c->r[29]+0x0000002Cu; // 804BA304
  c->r[4]=c->r[4]+c->r[0]; // 804BA308
  c->lr=0x804BA310u; f_804B2F50(c); // 804BA30C
L_804BA310:;
  c->r[30]=c->r[30]+0x00000002u; // 804BA310
  c->r[31]=c->r[31]+0x00000001u; // 804BA314
L_804BA318:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BA318
  cmpu(c,0,c->r[31],c->r[0]); // 804BA31C
  if (crb(c,0)) { IRQCHK(c); goto L_804BA2E4; } // 804BA320
L_804BA324:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BA324
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BA328
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BA32C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BA330
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BA334
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BA338
  c->lr=c->r[0]; // 804BA33C
  c->r[1]=c->r[1]+0x00000030u; // 804BA340
  return; // 804BA344
}

// fn_804BA348
void f_804BA348(Ctx* __restrict c) {
  trace_call(0x804BA348u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA348
  return; // 804BA34C
}

// fn_804BA350
void f_804BA350(Ctx* __restrict c) {
  trace_call(0x804BA350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA350
  c->r[0]=c->lr; // 804BA354
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BA358
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BA35C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BA360
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BA364
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BA368
  fcmp(c,0,c->f[0],c->f[1]); // 804BA36C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BA370
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BA374
  c->r[29]=c->r[3]|c->r[3]; // 804BA378
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 804BA37C
  if (!crb(c,2)) { goto L_804BA3E0; } // 804BA380
  c->r[0]=R32(c->r[3]+0x00000030u); // 804BA384
  cmps(c,0,(int32_t)c->r[0],0); // 804BA388
  if (crb(c,2)) { goto L_804BA3E0; } // 804BA38C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 804BA390
  c->r[31]=0u+0x00000000u; // 804BA394
  c->r[30]=0u+0x00000000u; // 804BA398
  goto L_804BA3D4; // 804BA39C
L_804BA3A0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BA3A0
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BA3A4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BA3A8
  if (!crb(c,2)) { goto L_804BA3CC; } // 804BA3AC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BA3B0
  c->f[1]=c->f[31]; // 804BA3B4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA3B8
  c->r[4]=R32(c->r[29]+0x00000030u); // 804BA3BC
  c->r[3]=c->r[29]+0x0000002Cu; // 804BA3C0
  c->r[4]=c->r[4]+c->r[0]; // 804BA3C4
  c->lr=0x804BA3CCu; f_804B2F50(c); // 804BA3C8
L_804BA3CC:;
  c->r[30]=c->r[30]+0x00000002u; // 804BA3CC
  c->r[31]=c->r[31]+0x00000001u; // 804BA3D0
L_804BA3D4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BA3D4
  cmpu(c,0,c->r[31],c->r[0]); // 804BA3D8
  if (crb(c,0)) { IRQCHK(c); goto L_804BA3A0; } // 804BA3DC
L_804BA3E0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BA3E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BA3E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BA3E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BA3EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BA3F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BA3F4
  c->lr=c->r[0]; // 804BA3F8
  c->r[1]=c->r[1]+0x00000030u; // 804BA3FC
  return; // 804BA400
}

// fn_804BA404
void f_804BA404(Ctx* __restrict c) {
  trace_call(0x804BA404u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA404
  return; // 804BA408
}

// fn_804BA40C
void f_804BA40C(Ctx* __restrict c) {
  trace_call(0x804BA40Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA40C
  c->r[0]=c->lr; // 804BA410
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BA414
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804BA418
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804BA41C
  {uint32_t ea=c->r[2]+0x000015A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BA420
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BA424
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BA428
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BA42C
  c->r[29]=c->r[3]|c->r[3]; // 804BA430
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA434
  fcmp(c,0,c->f[0],c->f[1]); // 804BA438
  if (crb(c,2)) { goto L_804BA4C8; } // 804BA43C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804BA440
  {uint32_t ea=c->r[13]+0xFFFFA278u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA444
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804BA448
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 804BA44C
  c->r[12]=R32(c->r[3]+0x00000028u); // 804BA450
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BA454
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 804BA458
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 804BA45C
  c->ctr=c->r[12]; // 804BA460
  if (true) { c->lr=0x804BA468u; dispatch(c,c->ctr); } // 804BA464
  c->r[0]=R32(c->r[29]+0x00000030u); // 804BA468
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 804BA46C
  cmps(c,0,(int32_t)c->r[0],0); // 804BA470
  if (crb(c,2)) { goto L_804BA4C8; } // 804BA474
  c->f[31]=c->ps1[31]=S(c->f[1]); // 804BA478
  c->r[31]=0u+0x00000000u; // 804BA47C
  c->r[30]=0u+0x00000000u; // 804BA480
  goto L_804BA4BC; // 804BA484
L_804BA488:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804BA488
  c->r[3]=R16(c->r[3]+c->r[30]); // 804BA48C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 804BA490
  if (!crb(c,2)) { goto L_804BA4B4; } // 804BA494
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 804BA498
  c->f[1]=c->f[31]; // 804BA49C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA4A0
  c->r[4]=R32(c->r[29]+0x00000030u); // 804BA4A4
  c->r[3]=c->r[29]+0x0000002Cu; // 804BA4A8
  c->r[4]=c->r[4]+c->r[0]; // 804BA4AC
  c->lr=0x804BA4B4u; f_804B2F50(c); // 804BA4B0
L_804BA4B4:;
  c->r[30]=c->r[30]+0x00000002u; // 804BA4B4
  c->r[31]=c->r[31]+0x00000001u; // 804BA4B8
L_804BA4BC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804BA4BC
  cmpu(c,0,c->r[31],c->r[0]); // 804BA4C0
  if (crb(c,0)) { IRQCHK(c); goto L_804BA488; } // 804BA4C4
L_804BA4C8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804BA4C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BA4CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804BA4D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BA4D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BA4D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BA4DC
  c->lr=c->r[0]; // 804BA4E0
  c->r[1]=c->r[1]+0x00000030u; // 804BA4E4
  return; // 804BA4E8
}

// fn_804BA4EC
void f_804BA4EC(Ctx* __restrict c) {
  trace_call(0x804BA4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA4EC
  c->r[0]=c->lr; // 804BA4F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804BA4F4
  c->r[11]=c->r[1]+0x00000030u; // 804BA4F8
  c->lr=0x804BA500u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BA4FC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 804BA500
  c->r[27]=c->r[3]|c->r[3]; // 804BA504
  c->r[28]=c->r[4]|c->r[4]; // 804BA508
  c->r[30]=0u+0x00000000u; // 804BA50C
  c->r[31]=R16(c->r[5]+0x00000022u); // 804BA510
  c->r[29]=0u+0x00000000u; // 804BA514
  cmps(c,0,(int32_t)c->r[31],0); // 804BA518
  if (!crb(c,1)) { goto L_804BA5C4; } // 804BA51C
  goto L_804BA5B8; // 804BA520
L_804BA524:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 804BA524
  c->r[0]=R32(c->r[3]+0x00000010u); // 804BA528
  cmps(c,0,(int32_t)c->r[0],0); // 804BA52C
  if (crb(c,2)) { goto L_804BA53C; } // 804BA530
  c->r[0]=c->r[3]+c->r[0]; // 804BA534
  goto L_804BA540; // 804BA538
L_804BA53C:;
  c->r[0]=0u+0x00000000u; // 804BA53C
L_804BA540:;
  cmps(c,0,(int32_t)c->r[0],0); // 804BA540
  if (crb(c,2)) { goto L_804BA56C; } // 804BA544
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 804BA548
  c->r[3]=c->r[0]+c->r[3]; // 804BA54C
  c->r[3]=R32(c->r[3]+0x00000024u); // 804BA550
  cmps(c,0,(int32_t)c->r[3],0); // 804BA554
  if (crb(c,2)) { goto L_804BA564; } // 804BA558
  c->r[5]=c->r[0]+c->r[3]; // 804BA55C
  goto L_804BA570; // 804BA560
L_804BA564:;
  c->r[5]=0u+0x00000000u; // 804BA564
  goto L_804BA570; // 804BA568
L_804BA56C:;
  c->r[5]=0u+0x00000000u; // 804BA56C
L_804BA570:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804BA570
  c->r[3]=c->r[28]|c->r[28]; // 804BA574
  c->r[4]=c->r[1]+0x00000008u; // 804BA578
  c->r[5]=c->r[0]+c->r[5]; // 804BA57C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 804BA580
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BA584
  c->lr=0x804BA58Cu; f_804AC408(c); // 804BA588
  cmps(c,0,(int32_t)c->r[3],0); // 804BA58C
  if (crb(c,2)) { goto L_804BA5B4; } // 804BA590
  c->r[4]=R32(c->r[27]+0x00000014u); // 804BA594
  if (crb(c,2)) { goto L_804BA5A4; } // 804BA598
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804BA59C
  goto L_804BA5A8; // 804BA5A0
L_804BA5A4:;
  c->r[0]=0u+0x00000000u; // 804BA5A4
L_804BA5A8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804BA5A8
  c->r[30]=0u+0x00000001u; // 804BA5AC
  W16(c->r[4]+c->r[0],c->r[29]); // 804BA5B0
L_804BA5B4:;
  c->r[29]=c->r[29]+0x00000001u; // 804BA5B4
L_804BA5B8:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 804BA5B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 804BA5BC
  if (crb(c,0)) { IRQCHK(c); goto L_804BA524; } // 804BA5C0
L_804BA5C4:;
  c->r[3]=c->r[27]|c->r[27]; // 804BA5C4
  c->r[4]=0u+0x00000004u; // 804BA5C8
  c->r[5]=0u+0x00000001u; // 804BA5CC
  c->lr=0x804BA5D4u; f_804BDBC0(c); // 804BA5D0
  c->r[11]=c->r[1]+0x00000030u; // 804BA5D4
  c->r[3]=c->r[30]|c->r[30]; // 804BA5D8
  c->lr=0x804BA5E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BA5DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804BA5E0
  c->lr=c->r[0]; // 804BA5E4
  c->r[1]=c->r[1]+0x00000030u; // 804BA5E8
  return; // 804BA5EC
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_804BA5F0(Ctx* __restrict c) {
  trace_call(0x804BA5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA5F0
  c->r[0]=c->lr; // 804BA5F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804BA5F8
  c->r[11]=c->r[1]+0x00000040u; // 804BA5FC
  c->lr=0x804BA604u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804BA600
  cmps(c,0,(int32_t)c->r[6],1); // 804BA604
  c->r[28]=c->r[3]|c->r[3]; // 804BA608
  c->r[29]=c->r[4]|c->r[4]; // 804BA60C
  c->r[30]=c->r[5]|c->r[5]; // 804BA610
  c->r[31]=0u+0x00000000u; // 804BA614
  if (crb(c,2)) { goto L_804BA62C; } // 804BA618
  if (!crb(c,0)) { goto L_804BA7BC; } // 804BA61C
  cmps(c,0,(int32_t)c->r[6],0); // 804BA620
  if (!crb(c,0)) { goto L_804BA74C; } // 804BA624
  goto L_804BA7BC; // 804BA628
L_804BA62C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BA62C
  c->r[4]=c->r[30]|c->r[30]; // 804BA630
  c->r[3]=c->r[1]+0x00000018u; // 804BA634
  W32(c->r[1]+0x00000018u,c->r[0]); // 804BA638
  c->lr=0x804BA640u; f_804AC4AC(c); // 804BA63C
  c->r[0]=R32(c->r[3]+0x00000064u); // 804BA640
  cmps(c,0,(int32_t)c->r[0],0); // 804BA644
  if (crb(c,2)) { goto L_804BA654; } // 804BA648
  c->r[4]=c->r[3]+c->r[0]; // 804BA64C
  goto L_804BA694; // 804BA650
L_804BA654:;
  c->r[4]=0u+0x00000000u; // 804BA654
  goto L_804BA694; // 804BA658
L_804BA65C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 804BA65C
  cmps(c,0,(int32_t)c->r[0],0); // 804BA660
  if (crb(c,2)) { goto L_804BA670; } // 804BA664
  c->r[3]=c->r[3]+c->r[0]; // 804BA668
  goto L_804BA674; // 804BA66C
L_804BA670:;
  c->r[3]=0u+0x00000000u; // 804BA670
L_804BA674:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BA674
  if (crb(c,2)) { goto L_804BA69C; } // 804BA678
  c->r[0]=R32(c->r[3]+0x00000064u); // 804BA67C
  cmps(c,0,(int32_t)c->r[0],0); // 804BA680
  if (crb(c,2)) { goto L_804BA690; } // 804BA684
  c->r[4]=c->r[3]+c->r[0]; // 804BA688
  goto L_804BA694; // 804BA68C
L_804BA690:;
  c->r[4]=0u+0x00000000u; // 804BA690
L_804BA694:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BA694
  if (crb(c,2)) { IRQCHK(c); goto L_804BA65C; } // 804BA698
L_804BA69C:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BA69C
  if (crb(c,2)) { goto L_804BA6B8; } // 804BA6A0
  if (crb(c,2)) { goto L_804BA6B0; } // 804BA6A4
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 804BA6A8
  goto L_804BA6C4; // 804BA6AC
L_804BA6B0:;
  c->r[27]=0u+0x00000000u; // 804BA6B0
  goto L_804BA6C4; // 804BA6B4
L_804BA6B8:;
  c->r[3]=c->r[1]+0x00000018u; // 804BA6B8
  c->lr=0x804BA6C0u; f_804AC500(c); // 804BA6BC
  c->r[27]=c->r[3]|c->r[3]; // 804BA6C0
L_804BA6C4:;
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 804BA6C4
  goto L_804BA740; // 804BA6C8
L_804BA6CC:;
  c->r[3]=c->r[29]|c->r[29]; // 804BA6CC
  c->r[4]=c->r[30]|c->r[30]; // 804BA6D0
  c->lr=0x804BA6D8u; f_804AC4AC(c); // 804BA6D4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804BA6D8
  cmps(c,0,(int32_t)c->r[0],0); // 804BA6DC
  if (crb(c,2)) { goto L_804BA6F0; } // 804BA6E0
  c->r[3]=c->r[3]+c->r[0]; // 804BA6E4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 804BA6E8
  goto L_804BA6F4; // 804BA6EC
L_804BA6F0:;
  c->r[0]=0u+0x00000000u; // 804BA6F0
L_804BA6F4:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 804BA6F4
  c->r[3]=R32(c->r[4]+0x00000010u); // 804BA6F8
  cmps(c,0,(int32_t)c->r[3],0); // 804BA6FC
  if (crb(c,2)) { goto L_804BA70C; } // 804BA700
  c->r[5]=c->r[4]+c->r[3]; // 804BA704
  goto L_804BA710; // 804BA708
L_804BA70C:;
  c->r[5]=0u+0x00000000u; // 804BA70C
L_804BA710:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BA710
  c->r[3]=c->r[1]+0x00000010u; // 804BA714
  c->r[4]=c->r[1]+0x00000014u; // 804BA718
  W32(c->r[1]+0x00000010u,c->r[5]); // 804BA71C
  c->lr=0x804BA724u; f_804AA3E4(c); // 804BA720
  cmps(c,0,(int32_t)c->r[3],-1); // 804BA724
  if (crb(c,2)) { goto L_804BA738; } // 804BA728
  c->r[4]=R32(c->r[28]+0x00000014u); // 804BA72C
  c->r[31]=0u+0x00000001u; // 804BA730
  W16(c->r[4]+c->r[26],c->r[3]); // 804BA734
L_804BA738:;
  c->r[26]=c->r[26]+0x00000002u; // 804BA738
  c->r[30]=c->r[30]+0x00000001u; // 804BA73C
L_804BA740:;
  cmpu(c,0,c->r[30],c->r[27]); // 804BA740
  if (crb(c,0)) { IRQCHK(c); goto L_804BA6CC; } // 804BA744
  goto L_804BA7BC; // 804BA748
L_804BA74C:;
  c->r[3]=c->r[29]|c->r[29]; // 804BA74C
  c->r[4]=c->r[30]|c->r[30]; // 804BA750
  c->lr=0x804BA758u; f_804AC4AC(c); // 804BA754
  c->r[0]=R32(c->r[3]+0x00000008u); // 804BA758
  cmps(c,0,(int32_t)c->r[0],0); // 804BA75C
  if (crb(c,2)) { goto L_804BA770; } // 804BA760
  c->r[3]=c->r[3]+c->r[0]; // 804BA764
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 804BA768
  goto L_804BA774; // 804BA76C
L_804BA770:;
  c->r[0]=0u+0x00000000u; // 804BA770
L_804BA774:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 804BA774
  c->r[3]=R32(c->r[4]+0x00000010u); // 804BA778
  cmps(c,0,(int32_t)c->r[3],0); // 804BA77C
  if (crb(c,2)) { goto L_804BA78C; } // 804BA780
  c->r[5]=c->r[4]+c->r[3]; // 804BA784
  goto L_804BA790; // 804BA788
L_804BA78C:;
  c->r[5]=0u+0x00000000u; // 804BA78C
L_804BA790:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804BA790
  c->r[3]=c->r[1]+0x00000008u; // 804BA794
  c->r[4]=c->r[1]+0x0000000Cu; // 804BA798
  W32(c->r[1]+0x00000008u,c->r[5]); // 804BA79C
  c->lr=0x804BA7A4u; f_804AA3E4(c); // 804BA7A0
  cmps(c,0,(int32_t)c->r[3],-1); // 804BA7A4
  if (crb(c,2)) { goto L_804BA7BC; } // 804BA7A8
  c->r[4]=R32(c->r[28]+0x00000014u); // 804BA7AC
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 804BA7B0
  c->r[31]=0u+0x00000001u; // 804BA7B4
  W16(c->r[4]+c->r[0],c->r[3]); // 804BA7B8
L_804BA7BC:;
  c->r[3]=c->r[28]|c->r[28]; // 804BA7BC
  c->r[4]=0u+0x00000004u; // 804BA7C0
  c->r[5]=0u+0x00000001u; // 804BA7C4
  c->lr=0x804BA7CCu; f_804BDBC0(c); // 804BA7C8
  c->r[11]=c->r[1]+0x00000040u; // 804BA7CC
  c->r[3]=c->r[31]|c->r[31]; // 804BA7D0
  c->lr=0x804BA7D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804BA7D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804BA7D8
  c->lr=c->r[0]; // 804BA7DC
  c->r[1]=c->r[1]+0x00000040u; // 804BA7E0
  return; // 804BA7E4
}

// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_804BA7E8(Ctx* __restrict c) {
  trace_call(0x804BA7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA7E8
  c->r[0]=c->lr; // 804BA7EC
  cmps(c,0,(int32_t)c->r[6],1); // 804BA7F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BA7F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BA7F8
  c->r[31]=c->r[5]|c->r[5]; // 804BA7FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BA800
  c->r[30]=c->r[3]|c->r[3]; // 804BA804
  if (crb(c,2)) { goto L_804BA81C; } // 804BA808
  if (!crb(c,0)) { goto L_804BA99C; } // 804BA80C
  cmps(c,0,(int32_t)c->r[6],0); // 804BA810
  if (!crb(c,0)) { goto L_804BA988; } // 804BA814
  goto L_804BA99C; // 804BA818
L_804BA81C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BA81C
  c->r[4]=c->r[31]|c->r[31]; // 804BA820
  c->r[3]=c->r[1]+0x00000008u; // 804BA824
  W32(c->r[1]+0x00000008u,c->r[0]); // 804BA828
  c->lr=0x804BA830u; f_804AC4AC(c); // 804BA82C
  c->r[0]=R32(c->r[3]+0x00000064u); // 804BA830
  cmps(c,0,(int32_t)c->r[0],0); // 804BA834
  if (crb(c,2)) { goto L_804BA844; } // 804BA838
  c->r[4]=c->r[3]+c->r[0]; // 804BA83C
  goto L_804BA884; // 804BA840
L_804BA844:;
  c->r[4]=0u+0x00000000u; // 804BA844
  goto L_804BA884; // 804BA848
L_804BA84C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 804BA84C
  cmps(c,0,(int32_t)c->r[0],0); // 804BA850
  if (crb(c,2)) { goto L_804BA860; } // 804BA854
  c->r[3]=c->r[3]+c->r[0]; // 804BA858
  goto L_804BA864; // 804BA85C
L_804BA860:;
  c->r[3]=0u+0x00000000u; // 804BA860
L_804BA864:;
  cmps(c,0,(int32_t)c->r[3],0); // 804BA864
  if (crb(c,2)) { goto L_804BA88C; } // 804BA868
  c->r[0]=R32(c->r[3]+0x00000064u); // 804BA86C
  cmps(c,0,(int32_t)c->r[0],0); // 804BA870
  if (crb(c,2)) { goto L_804BA880; } // 804BA874
  c->r[4]=c->r[3]+c->r[0]; // 804BA878
  goto L_804BA884; // 804BA87C
L_804BA880:;
  c->r[4]=0u+0x00000000u; // 804BA880
L_804BA884:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BA884
  if (crb(c,2)) { IRQCHK(c); goto L_804BA84C; } // 804BA888
L_804BA88C:;
  cmps(c,0,(int32_t)c->r[4],0); // 804BA88C
  if (crb(c,2)) { goto L_804BA8A8; } // 804BA890
  if (crb(c,2)) { goto L_804BA8A0; } // 804BA894
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 804BA898
  goto L_804BA8B0; // 804BA89C
L_804BA8A0:;
  c->r[3]=0u+0x00000000u; // 804BA8A0
  goto L_804BA8B0; // 804BA8A4
L_804BA8A8:;
  c->r[3]=c->r[1]+0x00000008u; // 804BA8A8
  c->lr=0x804BA8B0u; f_804AC500(c); // 804BA8AC
L_804BA8B0:;
  cmpu(c,1,c->r[31],c->r[3]); // 804BA8B0
  if (!crb(c,4)) { goto L_804BA99C; } // 804BA8B4
  c->r[0]=c->r[3]-c->r[31]; // 804BA8B8
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 804BA8BC
  cmpu(c,0,c->r[0],0x00000008u); // 804BA8C0
  if (!crb(c,1)) { goto L_804BA958; } // 804BA8C4
  if (crb(c,5)) { goto L_804BA958; } // 804BA8C8
  c->r[0]=c->r[6]+0x00000007u; // 804BA8CC
  c->r[4]=0u+0x00010000u; // 804BA8D0
  c->r[0]=c->r[0]-c->r[31]; // 804BA8D4
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 804BA8D8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804BA8DC
  c->r[5]=c->r[4]+0xFFFF8000u; // 804BA8E0
  c->ctr=c->r[0]; // 804BA8E4
  cmpu(c,0,c->r[31],c->r[6]); // 804BA8E8
  if (!crb(c,0)) { goto L_804BA958; } // 804BA8EC
L_804BA8F0:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804BA8F0
  c->r[31]=c->r[31]+0x00000008u; // 804BA8F4
  W16(c->r[4]+c->r[7],c->r[5]); // 804BA8F8
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA8FC
  c->r[4]=c->r[0]+c->r[7]; // 804BA900
  W16(c->r[4]+0x00000002u,c->r[5]); // 804BA904
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA908
  c->r[4]=c->r[0]+c->r[7]; // 804BA90C
  W16(c->r[4]+0x00000004u,c->r[5]); // 804BA910
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA914
  c->r[4]=c->r[0]+c->r[7]; // 804BA918
  W16(c->r[4]+0x00000006u,c->r[5]); // 804BA91C
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA920
  c->r[4]=c->r[0]+c->r[7]; // 804BA924
  W16(c->r[4]+0x00000008u,c->r[5]); // 804BA928
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA92C
  c->r[4]=c->r[0]+c->r[7]; // 804BA930
  W16(c->r[4]+0x0000000Au,c->r[5]); // 804BA934
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA938
  c->r[4]=c->r[0]+c->r[7]; // 804BA93C
  W16(c->r[4]+0x0000000Cu,c->r[5]); // 804BA940
  c->r[0]=R32(c->r[30]+0x00000014u); // 804BA944
  c->r[4]=c->r[0]+c->r[7]; // 804BA948
  c->r[7]=c->r[7]+0x00000010u; // 804BA94C
  W16(c->r[4]+0x0000000Eu,c->r[5]); // 804BA950
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BA8F0; } // 804BA954
L_804BA958:;
  c->r[4]=0u+0x00010000u; // 804BA958
  c->r[0]=c->r[3]-c->r[31]; // 804BA95C
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 804BA960
  c->r[4]=c->r[4]+0xFFFF8000u; // 804BA964
  c->ctr=c->r[0]; // 804BA968
  cmpu(c,0,c->r[31],c->r[3]); // 804BA96C
  if (!crb(c,0)) { goto L_804BA99C; } // 804BA970
L_804BA974:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 804BA974
  W16(c->r[3]+c->r[5],c->r[4]); // 804BA978
  c->r[5]=c->r[5]+0x00000002u; // 804BA97C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BA974; } // 804BA980
  goto L_804BA99C; // 804BA984
L_804BA988:;
  c->r[4]=0u+0x00010000u; // 804BA988
  c->r[3]=R32(c->r[3]+0x00000014u); // 804BA98C
  c->r[4]=c->r[4]+0xFFFF8000u; // 804BA990
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804BA994
  W16(c->r[3]+c->r[0],c->r[4]); // 804BA998
L_804BA99C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BA99C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BA9A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BA9A4
  c->lr=c->r[0]; // 804BA9A8
  c->r[1]=c->r[1]+0x00000020u; // 804BA9AC
  return; // 804BA9B0
}

// fn_804BA9B4
void f_804BA9B4(Ctx* __restrict c) {
  trace_call(0x804BA9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BA9B4
  c->r[0]=c->lr; // 804BA9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BA9BC
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804BA9C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BA9C4
  c->r[31]=c->r[4]|c->r[4]; // 804BA9C8
  c->r[6]=R32(c->r[3]+0x00000014u); // 804BA9CC
  c->r[5]=R16(c->r[6]+c->r[0]); // 804BA9D0
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 804BA9D4
  if (crb(c,2)) { goto L_804BA9EC; } // 804BA9D8
  c->r[0]=0u+0x00000000u; // 804BA9DC
  c->r[3]=c->r[31]|c->r[31]; // 804BA9E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 804BA9E4
  goto L_804BAA14; // 804BA9E8
L_804BA9EC:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 804BA9EC
  cmps(c,0,(int32_t)c->r[6],0); // 804BA9F0
  if (crb(c,2)) { goto L_804BAA04; } // 804BA9F4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 804BA9F8
  c->r[3]=c->r[6]+c->r[0]; // 804BA9FC
  goto L_804BAA14; // 804BAA00
L_804BAA04:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BAA04
  c->r[3]=c->r[3]+0x0000002Cu; // 804BAA08
  c->lr=0x804BAA10u; f_804B2F50(c); // 804BAA0C
  c->r[3]=c->r[31]|c->r[31]; // 804BAA10
L_804BAA14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BAA14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BAA18
  c->lr=c->r[0]; // 804BAA1C
  c->r[1]=c->r[1]+0x00000010u; // 804BAA20
  return; // 804BAA24
}

// fn_804BAA28
void f_804BAA28(Ctx* __restrict c) {
  trace_call(0x804BAA28u);
  c->r[5]=0u+0x00010000u; // 804BAA28
  c->r[0]=c->r[5]+0x00000002u; // 804BAA2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BAA30
  if (crb(c,2)) { goto L_804BAA74; } // 804BAA34
  if (!crb(c,0)) { goto L_804BAA48; } // 804BAA38
  cmps(c,0,(int32_t)c->r[4],8); // 804BAA3C
  if (crb(c,2)) { goto L_804BAA58; } // 804BAA40
  return; // 804BAA44
L_804BAA48:;
  c->r[0]=c->r[5]+0x00000004u; // 804BAA48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804BAA4C
  if (!crb(c,0)) return; // 804BAA50
  goto L_804BAA68; // 804BAA54
L_804BAA58:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BAA58
  c->r[12]=R32(c->r[12]+0x00000024u); // 804BAA5C
  c->ctr=c->r[12]; // 804BAA60
  if (true) { dispatch(c,c->ctr); return; } // 804BAA64
L_804BAA68:;
  c->r[0]=0u+0x00000000u; // 804BAA68
  W32(c->r[3]+0x00000004u,c->r[0]); // 804BAA6C
  return; // 804BAA70
L_804BAA74:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 804BAA74
  return; // 804BAA78
}

// fn_804BAA7C
void f_804BAA7C(Ctx* __restrict c) {
  trace_call(0x804BAA7Cu);
  c->r[3]=0u+0x806B0000u; // 804BAA7C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAA80
  c->r[3]=c->r[3]+0xFFFFBCE8u; // 804BAA84
  cmpu(c,0,c->r[0],c->r[3]); // 804BAA88
  if (!crb(c,2)) { goto L_804BAA98; } // 804BAA8C
  c->r[3]=0u+0x00000001u; // 804BAA90
  return; // 804BAA94
L_804BAA98:;
  c->r[3]=0u+0x806B0000u; // 804BAA98
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAA9C
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 804BAAA0
  cmpu(c,0,c->r[0],c->r[3]); // 804BAAA4
  if (!crb(c,2)) { goto L_804BAAB4; } // 804BAAA8
  c->r[3]=0u+0x00000001u; // 804BAAAC
  return; // 804BAAB0
L_804BAAB4:;
  c->r[3]=0u+0x806B0000u; // 804BAAB4
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BAAB8
  cmpu(c,0,c->r[0],c->r[3]); // 804BAABC
  if (!crb(c,2)) { goto L_804BAACC; } // 804BAAC0
  c->r[3]=0u+0x00000001u; // 804BAAC4
  return; // 804BAAC8
L_804BAACC:;
  c->r[3]=0u+0x806B0000u; // 804BAACC
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BAAD0
  c->r[0]=c->r[3]-c->r[0]; // 804BAAD4
  c->r[0]=cntlz(c->r[0]); // 804BAAD8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BAADC
  return; // 804BAAE0
}

// fn_804BAAE4
void f_804BAAE4(Ctx* __restrict c) {
  trace_call(0x804BAAE4u);
  c->r[3]=0u+0x806B0000u; // 804BAAE4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAAE8
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 804BAAEC
  cmpu(c,0,c->r[0],c->r[3]); // 804BAAF0
  if (!crb(c,2)) { goto L_804BAB00; } // 804BAAF4
  c->r[3]=0u+0x00000001u; // 804BAAF8
  return; // 804BAAFC
L_804BAB00:;
  c->r[3]=0u+0x806B0000u; // 804BAB00
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAB04
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BAB08
  cmpu(c,0,c->r[0],c->r[3]); // 804BAB0C
  if (!crb(c,2)) { goto L_804BAB1C; } // 804BAB10
  c->r[3]=0u+0x00000001u; // 804BAB14
  return; // 804BAB18
L_804BAB1C:;
  c->r[3]=0u+0x806B0000u; // 804BAB1C
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BAB20
  c->r[0]=c->r[3]-c->r[0]; // 804BAB24
  c->r[0]=cntlz(c->r[0]); // 804BAB28
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BAB2C
  return; // 804BAB30
}

// fn_804BAB34
void f_804BAB34(Ctx* __restrict c) {
  trace_call(0x804BAB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAB34
  c->r[0]=c->lr; // 804BAB38
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BAB3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BAB40
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BAB44
  c->ctr=c->r[12]; // 804BAB48
  if (true) { c->lr=0x804BAB50u; dispatch(c,c->ctr); } // 804BAB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BAB50
  c->r[3]=c->r[3]+0x00000004u; // 804BAB54
  c->lr=c->r[0]; // 804BAB58
  c->r[1]=c->r[1]+0x00000010u; // 804BAB5C
  return; // 804BAB60
}

// fn_804BAB64
void f_804BAB64(Ctx* __restrict c) {
  trace_call(0x804BAB64u);
  c->r[3]=0u+0x806B0000u; // 804BAB64
  c->r[3]=c->r[3]+0xFFFFBCE8u; // 804BAB68
  return; // 804BAB6C
}

// fn_804BAB70
void f_804BAB70(Ctx* __restrict c) {
  trace_call(0x804BAB70u);
  c->r[5]=0u+0x806B0000u; // 804BAB70
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAB74
  c->r[5]=c->r[5]+0xFFFFBCB0u; // 804BAB78
  c->r[3]=c->r[5]+0x00000024u; // 804BAB7C
  cmpu(c,0,c->r[0],c->r[3]); // 804BAB80
  if (!crb(c,2)) { goto L_804BAB90; } // 804BAB84
  c->r[3]=0u+0x00000001u; // 804BAB88
  return; // 804BAB8C
L_804BAB90:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804BAB90
  c->r[0]=c->r[5]+0x00000010u; // 804BAB94
  cmpu(c,0,c->r[4],c->r[0]); // 804BAB98
  if (!crb(c,2)) { goto L_804BABA8; } // 804BAB9C
  c->r[3]=0u+0x00000001u; // 804BABA0
  return; // 804BABA4
L_804BABA8:;
  c->r[0]=c->r[5]+0x00000000u; // 804BABA8
  cmpu(c,0,c->r[4],c->r[0]); // 804BABAC
  if (!crb(c,2)) { goto L_804BABBC; } // 804BABB0
  c->r[3]=0u+0x00000001u; // 804BABB4
  return; // 804BABB8
L_804BABBC:;
  c->r[3]=0u+0x806B0000u; // 804BABBC
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BABC0
  cmpu(c,0,c->r[4],c->r[3]); // 804BABC4
  if (!crb(c,2)) { goto L_804BABD4; } // 804BABC8
  c->r[3]=0u+0x00000001u; // 804BABCC
  return; // 804BABD0
L_804BABD4:;
  c->r[3]=0u+0x806B0000u; // 804BABD4
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BABD8
  c->r[0]=c->r[3]-c->r[4]; // 804BABDC
  c->r[0]=cntlz(c->r[0]); // 804BABE0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BABE4
  return; // 804BABE8
}

// fn_804BABEC
void f_804BABEC(Ctx* __restrict c) {
  trace_call(0x804BABECu);
  c->r[3]=0u+0x806B0000u; // 804BABEC
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BABF0
  c->r[3]=c->r[3]+0xFFFFBCC0u; // 804BABF4
  cmpu(c,0,c->r[0],c->r[3]); // 804BABF8
  if (!crb(c,2)) { goto L_804BAC08; } // 804BABFC
  c->r[3]=0u+0x00000001u; // 804BAC00
  return; // 804BAC04
L_804BAC08:;
  c->r[3]=0u+0x806B0000u; // 804BAC08
  c->r[0]=R32(c->r[4]+0x00000000u); // 804BAC0C
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 804BAC10
  cmpu(c,0,c->r[0],c->r[3]); // 804BAC14
  if (!crb(c,2)) { goto L_804BAC24; } // 804BAC18
  c->r[3]=0u+0x00000001u; // 804BAC1C
  return; // 804BAC20
L_804BAC24:;
  c->r[3]=0u+0x806B0000u; // 804BAC24
  c->r[3]=c->r[3]+0xFFFFBD80u; // 804BAC28
  cmpu(c,0,c->r[0],c->r[3]); // 804BAC2C
  if (!crb(c,2)) { goto L_804BAC3C; } // 804BAC30
  c->r[3]=0u+0x00000001u; // 804BAC34
  return; // 804BAC38
L_804BAC3C:;
  c->r[3]=0u+0x806B0000u; // 804BAC3C
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804BAC40
  c->r[0]=c->r[3]-c->r[0]; // 804BAC44
  c->r[0]=cntlz(c->r[0]); // 804BAC48
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BAC4C
  return; // 804BAC50
}

// fn_804BAC54
void f_804BAC54(Ctx* __restrict c) {
  trace_call(0x804BAC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAC54
  c->r[0]=c->lr; // 804BAC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BAC5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BAC60
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BAC64
  c->ctr=c->r[12]; // 804BAC68
  if (true) { c->lr=0x804BAC70u; dispatch(c,c->ctr); } // 804BAC6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BAC70
  c->r[3]=c->r[3]+0x00000004u; // 804BAC74
  c->lr=c->r[0]; // 804BAC78
  c->r[1]=c->r[1]+0x00000010u; // 804BAC7C
  return; // 804BAC80
}

// fn_804BAC84
void f_804BAC84(Ctx* __restrict c) {
  trace_call(0x804BAC84u);
  c->r[3]=0u+0x806B0000u; // 804BAC84
  c->r[3]=c->r[3]+0xFFFFBCD4u; // 804BAC88
  return; // 804BAC8C
}

// fn_804BAC90
void f_804BAC90(Ctx* __restrict c) {
  trace_call(0x804BAC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAC90
  c->r[0]=c->lr; // 804BAC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BAC98
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BAC9C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BACA0
  c->ctr=c->r[12]; // 804BACA4
  if (true) { c->lr=0x804BACACu; dispatch(c,c->ctr); } // 804BACA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BACAC
  c->r[3]=c->r[3]+0x00000004u; // 804BACB0
  c->lr=c->r[0]; // 804BACB4
  c->r[1]=c->r[1]+0x00000010u; // 804BACB8
  return; // 804BACBC
}

// fn_804BACC0
void f_804BACC0(Ctx* __restrict c) {
  trace_call(0x804BACC0u);
  c->r[3]=0u+0x806B0000u; // 804BACC0
  c->r[3]=c->r[3]+0xFFFFBCC0u; // 804BACC4
  return; // 804BACC8
}

// fn_804BACCC
void f_804BACCC(Ctx* __restrict c) {
  trace_call(0x804BACCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BACCC
  c->r[0]=c->lr; // 804BACD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BACD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BACD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 804BACDC
  c->ctr=c->r[12]; // 804BACE0
  if (true) { c->lr=0x804BACE8u; dispatch(c,c->ctr); } // 804BACE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BACE8
  c->r[3]=c->r[3]+0x00000004u; // 804BACEC
  c->lr=c->r[0]; // 804BACF0
  c->r[1]=c->r[1]+0x00000010u; // 804BACF4
  return; // 804BACF8
}

// fn_804BACFC
void f_804BACFC(Ctx* __restrict c) {
  trace_call(0x804BACFCu);
  c->r[3]=0u+0x806B0000u; // 804BACFC
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 804BAD00
  return; // 804BAD04
}

// TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
void f_804BAD08(Ctx* __restrict c) {
  trace_call(0x804BAD08u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804BAD08
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804BAD0C
  c->r[0]=R16(c->r[3]+c->r[0]); // 804BAD10
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 804BAD14
  c->r[0]=cntlz(c->r[0]); // 804BAD18
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804BAD1C
  return; // 804BAD20
}

// fn_804BAD24
void f_804BAD24(Ctx* __restrict c) {
  trace_call(0x804BAD24u);
  c->r[4]=0u+0x00010000u; // 804BAD24
  c->r[7]=0u+0x00000000u; // 804BAD28
  c->r[5]=c->r[4]+0xFFFF8000u; // 804BAD2C
  c->r[6]=0u+0x00000000u; // 804BAD30
  goto L_804BAD48; // 804BAD34
L_804BAD38:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 804BAD38
  c->r[7]=c->r[7]+0x00000001u; // 804BAD3C
  W16(c->r[4]+c->r[6],c->r[5]); // 804BAD40
  c->r[6]=c->r[6]+0x00000002u; // 804BAD44
L_804BAD48:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804BAD48
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804BAD4C
  if (crb(c,0)) { IRQCHK(c); goto L_804BAD38; } // 804BAD50
  c->r[4]=0u+0x00000004u; // 804BAD54
  c->r[5]=0u+0x00000000u; // 804BAD58
  f_804BDBC0(c); return; // 804BAD5C
}

// fn_804BAD60
void f_804BAD60(Ctx* __restrict c) {
  trace_call(0x804BAD60u);
  c->r[3]=0u+0x00000000u; // 804BAD60
  return; // 804BAD64
}

// fn_804BAD68
void f_804BAD68(Ctx* __restrict c) {
  trace_call(0x804BAD68u);
  c->r[3]=0u+0x00000000u; // 804BAD68
  return; // 804BAD6C
}

// fn_804BAD70
void f_804BAD70(Ctx* __restrict c) {
  trace_call(0x804BAD70u);
  return; // 804BAD70
}

// fn_804BAD74
void f_804BAD74(Ctx* __restrict c) {
  trace_call(0x804BAD74u);
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BAD74
  return; // 804BAD78
}

// fn_804BAD7C
void f_804BAD7C(Ctx* __restrict c) {
  trace_call(0x804BAD7Cu);
  return; // 804BAD7C
}

// fn_804BAD80
void f_804BAD80(Ctx* __restrict c) {
  trace_call(0x804BAD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAD80
  c->r[0]=c->lr; // 804BAD84
  cmps(c,0,(int32_t)c->r[3],0); // 804BAD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BAD8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BAD90
  c->r[31]=c->r[3]|c->r[3]; // 804BAD94
  if (crb(c,2)) { goto L_804BADCC; } // 804BAD98
  c->r[12]=0u+0x80720000u; // 804BAD9C
  c->r[12]=c->r[12]+0xFFFFA1B8u; // 804BADA0
  W32(c->r[3]+0x00000000u,c->r[12]); // 804BADA4
  c->r[12]=R32(c->r[12]+0x00000044u); // 804BADA8
  c->ctr=c->r[12]; // 804BADAC
  if (true) { c->lr=0x804BADB4u; dispatch(c,c->ctr); } // 804BADB0
  cmps(c,0,(int32_t)c->r[31],0); // 804BADB4
  if (crb(c,2)) { goto L_804BADCC; } // 804BADB8
  if (crb(c,2)) { goto L_804BADCC; } // 804BADBC
  c->r[3]=c->r[31]|c->r[31]; // 804BADC0
  c->r[4]=0u+0x00000000u; // 804BADC4
  c->lr=0x804BADCCu; f_804BD9F0(c); // 804BADC8
L_804BADCC:;
  c->r[3]=c->r[31]|c->r[31]; // 804BADCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BADD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BADD4
  c->lr=c->r[0]; // 804BADD8
  c->r[1]=c->r[1]+0x00000010u; // 804BADDC
  return; // 804BADE0
}

// fn_804BADE4
void f_804BADE4(Ctx* __restrict c) {
  trace_call(0x804BADE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BADE4
  c->r[0]=c->lr; // 804BADE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BADEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BADF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BADF4
  c->r[30]=c->r[5]|c->r[5]; // 804BADF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BADFC
  c->r[29]=c->r[4]|c->r[4]; // 804BAE00
  W32(c->r[1]+0x00000010u,c->r[28]); // 804BAE04
  c->r[28]=c->r[3]|c->r[3]; // 804BAE08
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BAE0C
  c->r[12]=R32(c->r[12]+0x00000040u); // 804BAE10
  c->ctr=c->r[12]; // 804BAE14
  if (true) { c->lr=0x804BAE1Cu; dispatch(c,c->ctr); } // 804BAE18
  c->r[31]=c->r[3]|c->r[3]; // 804BAE1C
  c->r[6]=0u+0x00000000u; // 804BAE20
  c->r[7]=0u+0x00000000u; // 804BAE24
  c->r[5]=0u+0x00000000u; // 804BAE28
  c->r[4]=0u+0x00000000u; // 804BAE2C
  goto L_804BAE58; // 804BAE30
L_804BAE34:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 804BAE34
  c->r[0]=R16(c->r[3]+c->r[5]); // 804BAE38
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804BAE3C
  if (!crb(c,2)) { goto L_804BAE50; } // 804BAE40
  c->r[3]=R32(c->r[28]+0x00000014u); // 804BAE44
  c->r[6]=0u+0x00000001u; // 804BAE48
  W16(c->r[3]+c->r[5],c->r[4]); // 804BAE4C
L_804BAE50:;
  c->r[5]=c->r[5]+0x00000002u; // 804BAE50
  c->r[7]=c->r[7]+0x00000001u; // 804BAE54
L_804BAE58:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804BAE58
  cmpu(c,0,c->r[7],c->r[0]); // 804BAE5C
  if (crb(c,0)) { IRQCHK(c); goto L_804BAE34; } // 804BAE60
  cmps(c,0,(int32_t)c->r[6],0); // 804BAE64
  if (crb(c,2)) { goto L_804BAE7C; } // 804BAE68
  c->r[3]=c->r[28]|c->r[28]; // 804BAE6C
  c->r[4]=0u+0x00000004u; // 804BAE70
  c->r[5]=0u+0x00000001u; // 804BAE74
  c->lr=0x804BAE7Cu; f_804BDBC0(c); // 804BAE78
L_804BAE7C:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 804BAE7C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804BAE80
  c->r[4]=0u+0x00010000u; // 804BAE84
  c->r[3]=c->r[30]|c->r[30]; // 804BAE88
  W32(c->r[5]+c->r[0],c->r[30]); // 804BAE8C
  c->r[6]=c->r[28]|c->r[28]; // 804BAE90
  c->r[4]=c->r[4]+0x00000002u; // 804BAE94
  c->r[5]=0u+0x00000000u; // 804BAE98
  c->r[12]=R32(c->r[30]+0x00000000u); // 804BAE9C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804BAEA0
  c->ctr=c->r[12]; // 804BAEA4
  if (true) { c->lr=0x804BAEACu; dispatch(c,c->ctr); } // 804BAEA8
  c->r[3]=c->r[31]|c->r[31]; // 804BAEAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BAEB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BAEB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BAEB8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804BAEBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BAEC0
  c->lr=c->r[0]; // 804BAEC4
  c->r[1]=c->r[1]+0x00000020u; // 804BAEC8
  return; // 804BAECC
}

// fn_804BAED0
void f_804BAED0(Ctx* __restrict c) {
  trace_call(0x804BAED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAED0
  c->r[0]=c->lr; // 804BAED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BAED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BAEDC
  c->r[31]=c->r[3]|c->r[3]; // 804BAEE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BAEE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BAEE8
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804BAEEC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804BAEF0
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 804BAEF4
  c->r[28]=R32(c->r[5]+c->r[29]); // 804BAEF8
  cmps(c,0,(int32_t)c->r[28],0); // 804BAEFC
  if (crb(c,2)) { goto L_804BAFC4; } // 804BAF00
  c->r[12]=R32(c->r[28]+0x00000000u); // 804BAF04
  c->r[30]=0u+0x00010000u; // 804BAF08
  c->r[3]=c->r[28]|c->r[28]; // 804BAF0C
  c->r[6]=c->r[31]|c->r[31]; // 804BAF10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804BAF14
  c->r[4]=c->r[30]+0x00000003u; // 804BAF18
  c->r[5]=0u+0x00000000u; // 804BAF1C
  c->ctr=c->r[12]; // 804BAF20
  if (true) { c->lr=0x804BAF28u; dispatch(c,c->ctr); } // 804BAF24
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804BAF28
  c->r[0]=0u+0x00000000u; // 804BAF2C
  c->r[6]=0u+0x00000000u; // 804BAF30
  c->r[7]=0u+0x00000000u; // 804BAF34
  W32(c->r[3]+c->r[29],c->r[0]); // 804BAF38
  c->r[4]=0u+0x00000000u; // 804BAF3C
  goto L_804BAFA0; // 804BAF40
L_804BAF44:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804BAF44
  c->r[8]=c->r[30]+0xFFFF8000u; // 804BAF48
  c->r[5]=0u+0x00000000u; // 804BAF4C
  c->ctr=c->r[0]; // 804BAF50
  cmps(c,0,(int32_t)c->r[0],0); // 804BAF54
  if (!crb(c,1)) { goto L_804BAF90; } // 804BAF58
L_804BAF5C:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804BAF5C
  c->r[3]=R32(c->r[3]+c->r[5]); // 804BAF60
  cmps(c,0,(int32_t)c->r[3],0); // 804BAF64
  if (crb(c,2)) { goto L_804BAF88; } // 804BAF68
  c->r[0]=R32(c->r[3]+0x00000014u); // 804BAF6C
  c->r[0]=R16(c->r[4]+c->r[0]); // 804BAF70
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 804BAF74
  if (!crb(c,2)) { goto L_804BAF88; } // 804BAF78
  c->r[6]=0u+0x00000001u; // 804BAF7C
  c->r[8]=0u+0x00000000u; // 804BAF80
  goto L_804BAF90; // 804BAF84
L_804BAF88:;
  c->r[5]=c->r[5]+0x00000004u; // 804BAF88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BAF5C; } // 804BAF8C
L_804BAF90:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 804BAF90
  c->r[7]=c->r[7]+0x00000001u; // 804BAF94
  W16(c->r[3]+c->r[4],c->r[8]); // 804BAF98
  c->r[4]=c->r[4]+0x00000002u; // 804BAF9C
L_804BAFA0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 804BAFA0
  cmpu(c,0,c->r[7],c->r[0]); // 804BAFA4
  if (crb(c,0)) { IRQCHK(c); goto L_804BAF44; } // 804BAFA8
  cmps(c,0,(int32_t)c->r[6],0); // 804BAFAC
  if (!crb(c,2)) { goto L_804BAFC4; } // 804BAFB0
  c->r[3]=c->r[31]|c->r[31]; // 804BAFB4
  c->r[4]=0u+0x00000004u; // 804BAFB8
  c->r[5]=0u+0x00000000u; // 804BAFBC
  c->lr=0x804BAFC4u; f_804BDBC0(c); // 804BAFC0
L_804BAFC4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BAFC4
  c->r[3]=c->r[28]|c->r[28]; // 804BAFC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BAFCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BAFD0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804BAFD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BAFD8
  c->lr=c->r[0]; // 804BAFDC
  c->r[1]=c->r[1]+0x00000020u; // 804BAFE0
  return; // 804BAFE4
}

// fn_804BAFE8
void f_804BAFE8(Ctx* __restrict c) {
  trace_call(0x804BAFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BAFE8
  c->r[0]=c->lr; // 804BAFEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804BAFF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804BAFF4
  c->r[31]=0u+0x00000000u; // 804BAFF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804BAFFC
  c->r[30]=c->r[3]|c->r[3]; // 804BB000
  goto L_804BB024; // 804BB004
L_804BB008:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804BB008
  c->r[3]=c->r[30]|c->r[30]; // 804BB00C
  c->r[4]=c->r[31]|c->r[31]; // 804BB010
  c->r[12]=R32(c->r[12]+0x00000040u); // 804BB014
  c->ctr=c->r[12]; // 804BB018
  if (true) { c->lr=0x804BB020u; dispatch(c,c->ctr); } // 804BB01C
  c->r[31]=c->r[31]+0x00000001u; // 804BB020
L_804BB024:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 804BB024
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804BB028
  if (crb(c,0)) { IRQCHK(c); goto L_804BB008; } // 804BB02C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804BB030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804BB034
  c->r[30]=R32(c->r[1]+0x00000008u); // 804BB038
  c->lr=c->r[0]; // 804BB03C
  c->r[1]=c->r[1]+0x00000010u; // 804BB040
  return; // 804BB044
}

// fn_804BB048
void f_804BB048(Ctx* __restrict c) {
  trace_call(0x804BB048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB048
  c->r[0]=c->lr; // 804BB04C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BB050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804BB054
  c->r[31]=0u+0x00000000u; // 804BB058
  W32(c->r[1]+0x00000018u,c->r[30]); // 804BB05C
  c->r[30]=0u+0x00000000u; // 804BB060
  W32(c->r[1]+0x00000014u,c->r[29]); // 804BB064
  c->r[29]=c->r[3]|c->r[3]; // 804BB068
  goto L_804BB098; // 804BB06C
L_804BB070:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804BB070
  c->r[3]=R32(c->r[3]+c->r[31]); // 804BB074
  cmps(c,0,(int32_t)c->r[3],0); // 804BB078
  if (crb(c,2)) { goto L_804BB090; } // 804BB07C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB080
  c->r[12]=R32(c->r[12]+0x00000024u); // 804BB084
  c->ctr=c->r[12]; // 804BB088
  if (true) { c->lr=0x804BB090u; dispatch(c,c->ctr); } // 804BB08C
L_804BB090:;
  c->r[31]=c->r[31]+0x00000004u; // 804BB090
  c->r[30]=c->r[30]+0x00000001u; // 804BB094
L_804BB098:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804BB098
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804BB09C
  if (crb(c,0)) { IRQCHK(c); goto L_804BB070; } // 804BB0A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BB0A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804BB0A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804BB0AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804BB0B0
  c->lr=c->r[0]; // 804BB0B4
  c->r[1]=c->r[1]+0x00000020u; // 804BB0B8
  return; // 804BB0BC
}

// fn_804BB0C0
void f_804BB0C0(Ctx* __restrict c) {
  trace_call(0x804BB0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804BB0C0
  c->r[0]=c->lr; // 804BB0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804BB0C8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804BB0CC
  c->f[31]=c->f[1]; // 804BB0D0
  W32(c->r[1]+0x00000014u,c->r[31]); // 804BB0D4
  c->r[31]=0u+0x00000000u; // 804BB0D8
  W32(c->r[1]+0x00000010u,c->r[30]); // 804BB0DC
  c->r[30]=0u+0x00000000u; // 804BB0E0
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 804BB0E4
  c->r[29]=c->r[3]|c->r[3]; // 804BB0E8
  goto L_804BB11C; // 804BB0EC
L_804BB0F0:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804BB0F0
  c->r[3]=R32(c->r[3]+c->r[31]); // 804BB0F4
  cmps(c,0,(int32_t)c->r[3],0); // 804BB0F8
  if (crb(c,2)) { goto L_804BB114; } // 804BB0FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB100
  c->f[1]=c->f[31]; // 804BB104
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804BB108
  c->ctr=c->r[12]; // 804BB10C
  if (true) { c->lr=0x804BB114u; dispatch(c,c->ctr); } // 804BB110
L_804BB114:;
  c->r[31]=c->r[31]+0x00000004u; // 804BB114
  c->r[30]=c->r[30]+0x00000001u; // 804BB118
L_804BB11C:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 804BB11C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804BB120
  if (crb(c,0)) { IRQCHK(c); goto L_804BB0F0; } // 804BB124
  c->r[0]=R32(c->r[1]+0x00000024u); // 804BB128
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804BB12C
  c->r[31]=R32(c->r[1]+0x00000014u); // 804BB130
  c->r[30]=R32(c->r[1]+0x00000010u); // 804BB134
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 804BB138
  c->lr=c->r[0]; // 804BB13C
  c->r[1]=c->r[1]+0x00000020u; // 804BB140
  return; // 804BB144
}

// fn_804BB148
void f_804BB148(Ctx* __restrict c) {
  trace_call(0x804BB148u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804BB148
  c->r[6]=0u+0x00000000u; // 804BB14C
  c->r[5]=0u+0x00000000u; // 804BB150
  c->ctr=c->r[0]; // 804BB154
  cmps(c,0,(int32_t)c->r[0],0); // 804BB158
  if (!crb(c,1)) { goto L_804BB194; } // 804BB15C
L_804BB160:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 804BB160
  c->r[0]=R32(c->r[4]+c->r[5]); // 804BB164
  cmps(c,0,(int32_t)c->r[0],0); // 804BB168
  if (crb(c,2)) { goto L_804BB188; } // 804BB16C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804BB170
  c->r[3]=R32(c->r[4]+c->r[0]); // 804BB174
  c->r[12]=R32(c->r[3]+0x00000000u); // 804BB178
  c->r[12]=R32(c->r[12]+0x00000020u); // 804BB17C
  c->ctr=c->r[12]; // 804BB180
  if (true) { dispatch(c,c->ctr); return; } // 804BB184
L_804BB188:;
  c->r[5]=c->r[5]+0x00000004u; // 804BB188
  c->r[6]=c->r[6]+0x00000001u; // 804BB18C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804BB160; } // 804BB190
L_804BB194:;
  {uint32_t ea=c->r[2]+0x000015B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804BB194
  return; // 804BB198
}

