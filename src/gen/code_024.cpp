#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8017B084
void f_8017B084(Ctx* __restrict c) {
  trace_call(0x8017B084u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B084
  c->r[0]=c->lr; // 8017B088
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017B08C
  c->r[11]=c->r[1]+0x00000030u; // 8017B090
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8017B094
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8017B098
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8017B09C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8017B0A0
  c->lr=0x8017B0A8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017B0A4
  c->r[0]=0u+0x43300000u; // 8017B0A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017B0AC
  c->r[28]=c->r[4]|c->r[4]; // 8017B0B0
  c->r[29]=c->r[5]|c->r[5]; // 8017B0B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017B0B8
  c->r[31]=c->r[3]+0x00000070u; // 8017B0BC
  c->r[30]=c->r[3]+0x0000007Cu; // 8017B0C0
  c->lr=0x8017B0C8u; f_803B220C(c); // 8017B0C4
  c->r[0]=c->r[3]^0x80000000u; // 8017B0C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017B0CC
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B0D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8017B0D4
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B0D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017B0DC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8017B0E0
  c->lr=0x8017B0E8u; f_803B220C(c); // 8017B0E4
  c->r[0]=c->r[3]^0x80000000u; // 8017B0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B0EC
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B0F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8017B0F4
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B0F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017B0FC
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 8017B100
  c->lr=0x8017B108u; f_803B220C(c); // 8017B104
  c->r[0]=c->r[3]^0x80000000u; // 8017B108
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017B10C
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B110
  c->r[3]=c->r[31]|c->r[31]; // 8017B114
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8017B118
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B11C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 8017B120
  {uint32_t ea=c->r[28]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017B124
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B128
  {uint32_t ea=c->r[28]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017B12C
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[0]); // 8017B130
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B134
  {uint32_t ea=c->r[28]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B138
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B13C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[6],c->f[1])); // 8017B140
  c->f[2]=c->ps1[2]=S(std::fma(c->f[4],c->f[30],c->f[2])); // 8017B144
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[31],c->f[0])); // 8017B148
  c->lr=0x8017B150u; f_8005A6D0(c); // 8017B14C
  c->r[3]=0u+0x80760000u; // 8017B150
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B154
  {uint32_t ea=c->r[3]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B158
  c->r[0]=0u+0x00000000u; // 8017B15C
  fcmp(c,0,c->f[1],c->f[0]); // 8017B160
  if (!crb(c,2)) { goto L_8017B18C; } // 8017B164
  c->r[3]=c->r[3]+0xFFFF9C9Cu; // 8017B168
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B16C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B170
  fcmp(c,0,c->f[1],c->f[0]); // 8017B174
  if (!crb(c,2)) { goto L_8017B18C; } // 8017B178
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B17C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B180
  fcmp(c,0,c->f[1],c->f[0]); // 8017B184
  if (crb(c,2)) { goto L_8017B190; } // 8017B188
L_8017B18C:;
  c->r[0]=0u+0x00000001u; // 8017B18C
L_8017B190:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017B190
  if (crb(c,2)) { goto L_8017B26C; } // 8017B194
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 8017B198
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8017B19C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B1A0
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8017B1A4
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8017B1A8
  {uint32_t ea=c->r[2]+0xFFFFBD8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B1AC
  fcmp(c,0,c->f[1],c->f[0]); // 8017B1B0
  c->r[0]=c->cr; // 8017B1B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8017B1B8
  if (!crb(c,2)) { goto L_8017B26C; } // 8017B1BC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B1C0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B1C4
  c->lr=0x8017B1CCu; f_804E1378(c); // 8017B1C8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B1CC
  {uint32_t ea=c->r[2]+0xFFFFBD90u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017B1D0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[0]); // 8017B1D4
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B1D8
  {uint32_t ea=c->r[2]+0xFFFFBD94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B1DC
  c->f[30]=c->ps1[30]=S(c->f[4]*c->f[1]); // 8017B1E0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[2],c->f[3])); // 8017B1E4
  fcmp(c,0,c->f[31],c->f[0]); // 8017B1E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017B1EC
  if (crb(c,2)) { goto L_8017B210; } // 8017B1F0
  c->r[3]=0u+0x806D0000u; // 8017B1F4
  c->r[5]=0u+0x806D0000u; // 8017B1F8
  c->r[3]=c->r[3]+0xFFFFDD24u; // 8017B1FC
  c->r[4]=0u+0x00000273u; // 8017B200
  c->r[5]=c->r[5]+0xFFFFDD00u; // 8017B204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017B208
  c->lr=0x8017B210u; f_80484708(c); // 8017B20C
L_8017B210:;
  {uint32_t ea=c->r[2]+0xFFFFBD94u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B210
  fcmp(c,0,c->f[31],c->f[2]); // 8017B214
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017B218
  if (!crb(c,2)) { goto L_8017B224; } // 8017B21C
  goto L_8017B230; // 8017B220
L_8017B224:;
  c->f[1]=c->f[31]; // 8017B224
  c->lr=0x8017B22Cu; f_804E1098(c); // 8017B228
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 8017B22C
L_8017B230:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B230
  c->f[1]=-c->f[0]; // 8017B234
  c->lr=0x8017B23Cu; f_804E1378(c); // 8017B238
  {uint32_t ea=c->r[2]+0xFFFFBD90u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B23C
  c->r[3]=c->r[31]|c->r[31]; // 8017B240
  {uint32_t ea=c->r[2]+0xFFFFBD98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B244
  c->r[4]=c->r[31]|c->r[31]; // 8017B248
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8017B24C
  c->f[1]=c->f[30]; // 8017B250
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[2]); // 8017B254
  c->lr=0x8017B25Cu; f_8032A978(c); // 8017B258
  c->f[1]=c->f[30]; // 8017B25C
  c->r[3]=c->r[31]|c->r[31]; // 8017B260
  c->r[4]=c->r[31]|c->r[31]; // 8017B264
  c->lr=0x8017B26Cu; f_8032A900(c); // 8017B268
L_8017B26C:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B26C
  c->r[3]=c->r[31]|c->r[31]; // 8017B270
  c->lr=0x8017B278u; f_8017B350(c); // 8017B274
  c->lr=0x8017B27Cu; f_803B220C(c); // 8017B278
  c->r[0]=c->r[3]^0x80000000u; // 8017B27C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B280
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B284
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8017B288
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B28C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017B290
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 8017B294
  c->lr=0x8017B29Cu; f_803B220C(c); // 8017B298
  c->r[0]=c->r[3]^0x80000000u; // 8017B29C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017B2A0
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B2A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8017B2A8
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B2AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017B2B0
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8017B2B4
  c->lr=0x8017B2BCu; f_803B220C(c); // 8017B2B8
  c->r[0]=c->r[3]^0x80000000u; // 8017B2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B2C0
  {uint32_t ea=c->r[2]+0xFFFFBDA0u; c->f[2]=RF64(ea);} // 8017B2C4
  c->r[3]=c->r[30]|c->r[30]; // 8017B2C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8017B2CC
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B2D0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8017B2D4
  {uint32_t ea=c->r[28]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B2D8
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B2DC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8017B2E0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 8017B2E4
  c->f[2]=c->ps1[2]=S(std::fma(c->f[3],c->f[31],c->f[0])); // 8017B2E8
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[30],c->f[0])); // 8017B2EC
  c->lr=0x8017B2F4u; f_8005A6D0(c); // 8017B2F0
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B2F4
  c->r[3]=c->r[30]|c->r[30]; // 8017B2F8
  c->lr=0x8017B300u; f_8017B350(c); // 8017B2FC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B300
  {uint32_t ea=c->r[2]+0xFFFFBD9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B304
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B308
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8017B30C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B310
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8017B314
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8017B318
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 8017B31C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[2]);} // 8017B320
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8017B324
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8017B328
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8017B32C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8017B330
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8017B334
  c->r[11]=c->r[1]+0x00000030u; // 8017B338
  c->lr=0x8017B340u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017B33C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017B340
  c->lr=c->r[0]; // 8017B344
  c->r[1]=c->r[1]+0x00000050u; // 8017B348
  return; // 8017B34C
}

// fn_8017B350
void f_8017B350(Ctx* __restrict c) {
  trace_call(0x8017B350u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B350
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B354
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B358
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8017B35C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8017B360
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8017B364
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8017B368
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8017B36C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8017B370
  return; // 8017B374
}

// fn_8017B378
void f_8017B378(Ctx* __restrict c) {
  trace_call(0x8017B378u);
  {uint32_t ea=c->r[1]+0xFFFFFB50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B378
  c->r[0]=c->lr; // 8017B37C
  W32(c->r[1]+0x000004B4u,c->r[0]); // 8017B380
  c->r[11]=c->r[1]+0x00000490u; // 8017B384
  {uint32_t ea=c->r[1]+0x000004A0u; WF64(ea,c->f[31]);} // 8017B388
  {uint32_t ea=c->r[1]+0x000004A8u; psq_store(c,31,ea,0,0);} // 8017B38C
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[30]);} // 8017B390
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,30,ea,0,0);} // 8017B394
  c->lr=0x8017B39Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017B398
  c->f[30]=c->f[1]; // 8017B39C
  c->r[26]=c->r[3]|c->r[3]; // 8017B3A0
  c->r[27]=c->r[5]|c->r[5]; // 8017B3A4
  c->r[4]=c->r[1]+0x000000F8u; // 8017B3A8
  c->r[30]=0u+0x00000000u; // 8017B3AC
  c->r[3]=c->r[3]+0x00000040u; // 8017B3B0
  c->lr=0x8017B3B8u; f_80382F2C(c); // 8017B3B4
  c->r[31]=0u+0x00000000u; // 8017B3B8
  W8(c->r[1]+0x00000010u,c->r[31]); // 8017B3BC
  c->r[29]=c->r[26]+0x00000040u; // 8017B3C0
  c->r[28]=c->r[26]+0x00000070u; // 8017B3C4
  c->r[3]=c->r[1]+0x00000010u; // 8017B3C8
  c->lr=0x8017B3D0u; f_8004714C(c); // 8017B3CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B3D0
  c->r[3]=c->r[1]+0x0000000Cu; // 8017B3D4
  {uint32_t ea=c->r[2]+0xFFFFBDA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B3D8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B3DC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[2],-c->f[0])); // 8017B3E0
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 8017B3E4
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8017B3E8
  c->lr=0x8017B3F0u; f_8004714C(c); // 8017B3EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B3F0
  c->r[4]=c->r[28]|c->r[28]; // 8017B3F4
  c->r[3]=c->r[1]+0x000000BCu; // 8017B3F8
  c->lr=0x8017B400u; f_8005ED34(c); // 8017B3FC
  W8(c->r[1]+0x00000008u,c->r[31]); // 8017B400
  c->r[3]=c->r[1]+0x00000008u; // 8017B404
  c->lr=0x8017B40Cu; f_8004714C(c); // 8017B408
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B40C
  c->r[3]=c->r[1]+0x000000B0u; // 8017B410
  c->r[4]=c->r[26]+0x0000007Cu; // 8017B414
  c->lr=0x8017B41Cu; f_8005ED34(c); // 8017B418
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B41C
  c->r[3]=c->r[1]+0x000000A4u; // 8017B420
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B424
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B428
  c->lr=0x8017B430u; f_8005FD70(c); // 8017B42C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B430
  c->r[3]=c->r[1]+0x000000C8u; // 8017B434
  {uint32_t ea=c->r[2]+0xFFFFBDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B438
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B43C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017B440
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8017B444
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8017B448
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 8017B44C
  c->lr=0x8017B454u; f_804E18A0(c); // 8017B450
  c->r[3]=c->r[29]|c->r[29]; // 8017B454
  c->r[4]=c->r[1]+0x000000C8u; // 8017B458
  c->lr=0x8017B460u; f_8030DACC(c); // 8017B45C
  c->r[3]=c->r[1]+0x0000008Cu; // 8017B460
  c->r[4]=c->r[1]+0x000000A4u; // 8017B464
  c->r[5]=c->r[1]+0x000000BCu; // 8017B468
  c->lr=0x8017B470u; f_80073ACC(c); // 8017B46C
  c->r[3]=c->r[29]|c->r[29]; // 8017B470
  c->r[4]=c->r[1]+0x0000008Cu; // 8017B474
  c->lr=0x8017B47Cu; f_8005CDC8(c); // 8017B478
  {uint32_t ea=c->r[1]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B47C
  c->r[3]=c->r[1]+0x0000005Cu; // 8017B480
  {uint32_t ea=c->r[1]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B484
  {uint32_t ea=c->r[1]+0x00000124u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B488
  c->lr=0x8017B490u; f_8005FD70(c); // 8017B48C
  c->r[3]=c->r[1]+0x00000068u; // 8017B490
  c->r[4]=c->r[29]|c->r[29]; // 8017B494
  c->lr=0x8017B49Cu; f_80060878(c); // 8017B498
  c->r[3]=c->r[1]+0x00000074u; // 8017B49C
  c->r[4]=c->r[1]+0x00000068u; // 8017B4A0
  c->r[5]=c->r[1]+0x0000005Cu; // 8017B4A4
  c->lr=0x8017B4ACu; f_8005FC60(c); // 8017B4A8
  c->r[3]=c->r[1]+0x00000074u; // 8017B4AC
  c->r[31]=c->r[1]+0x00000080u; // 8017B4B0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8017B4B4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8017B4B8
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B4BC
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 8017B4C0
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8017B4C4
  {uint32_t ea=c->r[2]+0xFFFFBDB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B4C8
  fcmp(c,0,c->f[1],c->f[0]); // 8017B4CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017B4D0
  if (!crb(c,2)) { goto L_8017B4FC; } // 8017B4D4
  {uint32_t ea=c->r[2]+0xFFFFBD94u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B4D8
  c->r[3]=c->r[1]+0x00000014u; // 8017B4DC
  {uint32_t ea=c->r[2]+0xFFFFBDB4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B4E0
  c->f[2]=c->f[1]; // 8017B4E4
  c->lr=0x8017B4ECu; f_8005FD70(c); // 8017B4E8
  c->r[3]=c->r[31]|c->r[31]; // 8017B4EC
  c->r[4]=c->r[1]+0x00000014u; // 8017B4F0
  c->lr=0x8017B4F8u; f_8005CD7C(c); // 8017B4F4
  goto L_8017B510; // 8017B4F8
L_8017B4FC:;
  c->r[4]=c->r[1]+0x00000020u; // 8017B4FC
  c->lr=0x8017B504u; f_80383D38(c); // 8017B500
  c->r[3]=c->r[31]|c->r[31]; // 8017B504
  c->r[4]=c->r[1]+0x00000020u; // 8017B508
  c->lr=0x8017B510u; f_8005CD7C(c); // 8017B50C
L_8017B510:;
  c->f[1]=c->f[30]; // 8017B510
  c->r[4]=c->r[31]|c->r[31]; // 8017B514
  c->r[3]=c->r[1]+0x00000098u; // 8017B518
  c->lr=0x8017B520u; f_8005ED34(c); // 8017B51C
  c->r[0]=0u+0x00000000u; // 8017B520
  W32(c->r[1]+0x00000470u,c->r[0]); // 8017B524
  {uint32_t ea=c->r[1]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B528
  c->r[3]=c->r[1]+0x00000050u; // 8017B52C
  {uint32_t ea=c->r[1]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017B530
  {uint32_t ea=c->r[1]+0x00000124u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017B534
  c->lr=0x8017B53Cu; f_8005FD70(c); // 8017B538
  c->r[3]=c->r[1]+0x00000038u; // 8017B53C
  c->r[4]=c->r[26]+0x00000040u; // 8017B540
  c->lr=0x8017B548u; f_80060878(c); // 8017B544
  c->r[3]=c->r[1]+0x00000044u; // 8017B548
  c->r[4]=c->r[1]+0x00000038u; // 8017B54C
  c->r[5]=c->r[1]+0x00000098u; // 8017B550
  c->lr=0x8017B558u; f_80073ACC(c); // 8017B554
  c->r[3]=0u+0x00110000u; // 8017B558
  c->r[4]=c->r[1]+0x00000050u; // 8017B55C
  c->r[3]=c->r[3]+0x00000010u; // 8017B560
  c->r[5]=c->r[1]+0x00000044u; // 8017B564
  c->r[6]=c->r[1]+0x00000128u; // 8017B568
  c->lr=0x8017B570u; f_8005EBB0(c); // 8017B56C
  c->r[0]=R32(c->r[1]+0x00000470u); // 8017B570
  cmps(c,0,(int32_t)c->r[0],0); // 8017B574
  if (crb(c,2)) { goto L_8017B660; } // 8017B578
  c->r[3]=c->r[1]+0x0000002Cu; // 8017B57C
  c->r[4]=c->r[1]+0x00000150u; // 8017B580
  c->r[5]=c->r[1]+0x00000098u; // 8017B584
  c->lr=0x8017B58Cu; f_8005FC60(c); // 8017B588
  c->r[3]=c->r[26]+0x00000040u; // 8017B58C
  c->r[4]=c->r[1]+0x0000002Cu; // 8017B590
  c->lr=0x8017B598u; f_8005CDC8(c); // 8017B594
  c->r[4]=c->r[27]|c->r[27]; // 8017B598
  c->r[3]=c->r[26]+0x00000040u; // 8017B59C
  c->lr=0x8017B5A4u; f_80382F2C(c); // 8017B5A0
  c->r[4]=0u+0x80760000u; // 8017B5A4
  c->r[3]=c->r[1]+0x0000015Cu; // 8017B5A8
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 8017B5AC
  {uint32_t ea=c->r[2]+0xFFFFBDB8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017B5B0
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,30,ea,0,0);} // 8017B5B4
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 8017B5B8
  {double t0=S(c->f[30]*c->f[0]), t1=S(c->ps1[30]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8017B5BC
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8017B5C0
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[30]); c->f[0]=t0; c->ps1[0]=t1;} // 8017B5C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8017B5C8
  {double t0=S(std::fma(c->f[30],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[30],c->ps1[0],c->ps1[0])); c->f[30]=t0; c->ps1[30]=t1;} // 8017B5CC
  {uint32_t ea=c->r[2]+0xFFFFBDB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B5D0
  fcmp(c,0,c->f[30],c->f[0]); // 8017B5D4
  if (!crb(c,1)) { goto L_8017B5E4; } // 8017B5D8
  c->f[30]=c->f[0]; // 8017B5DC
  goto L_8017B5F4; // 8017B5E0
L_8017B5E4:;
  {uint32_t ea=c->r[2]+0xFFFFBDBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B5E4
  fcmp(c,0,c->f[30],c->f[0]); // 8017B5E8
  if (!crb(c,0)) { goto L_8017B5F4; } // 8017B5EC
  c->f[30]=c->f[0]; // 8017B5F0
L_8017B5F4:;
  {uint32_t ea=c->r[2]+0xFFFFBDB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B5F4
  c->r[0]=0u+0x00000000u; // 8017B5F8
  fcmp(c,0,c->f[30],c->f[0]); // 8017B5FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017B600
  if (!crb(c,2)) { goto L_8017B61C; } // 8017B604
  {uint32_t ea=c->r[2]+0xFFFFBDBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017B608
  fcmp(c,0,c->f[30],c->f[0]); // 8017B60C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017B610
  if (!crb(c,2)) { goto L_8017B61C; } // 8017B614
  c->r[0]=0u+0x00000001u; // 8017B618
L_8017B61C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017B61C
  if (!crb(c,2)) { goto L_8017B640; } // 8017B620
  c->r[3]=0u+0x806D0000u; // 8017B624
  c->r[5]=0u+0x806D0000u; // 8017B628
  c->r[3]=c->r[3]+0xFFFFE414u; // 8017B62C
  c->r[4]=0u+0x000000EFu; // 8017B630
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 8017B634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017B638
  c->lr=0x8017B640u; f_80484708(c); // 8017B63C
L_8017B640:;
  c->f[1]=c->f[30]; // 8017B640
  c->lr=0x8017B648u; f_803BA740(c); // 8017B644
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8017B648
  fcmp(c,0,c->f[0],c->f[31]); // 8017B64C
  c->r[0]=c->cr; // 8017B650
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8017B654
  if (!crb(c,2)) { goto L_8017B660; } // 8017B658
  c->r[30]=0u+0x00000001u; // 8017B65C
L_8017B660:;
  c->r[0]=0u+0x00000000u; // 8017B660
  W32(c->r[1]+0x00000470u,c->r[0]); // 8017B664
  c->r[4]=c->r[27]|c->r[27]; // 8017B668
  c->r[3]=c->r[26]+0x00000040u; // 8017B66C
  c->lr=0x8017B674u; f_80382F2C(c); // 8017B670
  {uint32_t ea=c->r[1]+0x000004A8u; psq_load(c,31,ea,0,0);} // 8017B674
  c->r[3]=c->r[30]|c->r[30]; // 8017B678
  {uint32_t ea=c->r[1]+0x000004A0u; c->f[31]=RF64(ea);} // 8017B67C
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,30,ea,0,0);} // 8017B680
  {uint32_t ea=c->r[1]+0x00000490u; c->f[30]=RF64(ea);} // 8017B684
  c->r[11]=c->r[1]+0x00000490u; // 8017B688
  c->lr=0x8017B690u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017B68C
  c->r[0]=R32(c->r[1]+0x000004B4u); // 8017B690
  c->lr=c->r[0]; // 8017B694
  c->r[1]=c->r[1]+0x000004B0u; // 8017B698
  return; // 8017B69C
}

// fn_8017B6A0
void f_8017B6A0(Ctx* __restrict c) {
  trace_call(0x8017B6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B6A0
  c->r[0]=c->lr; // 8017B6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017B6AC
  c->r[31]=c->r[3]|c->r[3]; // 8017B6B0
  c->lr=0x8017B6B8u; f_8017AD48(c); // 8017B6B4
  c->r[3]=0u+0x806E0000u; // 8017B6B8
  c->r[3]=c->r[3]+0xFFFFFECCu; // 8017B6BC
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017B6C0
  c->r[0]=c->r[3]+0x00000018u; // 8017B6C4
  W32(c->r[31]+0x00000024u,c->r[0]); // 8017B6C8
  c->r[0]=R8(c->r[13]+0xFFFFBD88u); // 8017B6CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017B6D0
  if (!crb(c,2)) { goto L_8017B6F0; } // 8017B6D4
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017B6D8
  c->r[0]=0u+0x00000001u; // 8017B6DC
  W32(c->r[13]+0xFFFFBD84u,c->r[3]); // 8017B6E0
  c->r[3]=c->r[3]+0x00000001u; // 8017B6E4
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017B6E8
  W8(c->r[13]+0xFFFFBD88u,c->r[0]); // 8017B6EC
L_8017B6F0:;
  c->r[0]=R32(c->r[13]+0xFFFFBD84u); // 8017B6F0
  c->r[3]=c->r[31]|c->r[31]; // 8017B6F4
  W32(c->r[31]+0x00000028u,c->r[0]); // 8017B6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017B6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B700
  c->lr=c->r[0]; // 8017B704
  c->r[1]=c->r[1]+0x00000010u; // 8017B708
  return; // 8017B70C
}

// fn_8017B710
void f_8017B710(Ctx* __restrict c) {
  trace_call(0x8017B710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B710
  c->r[0]=c->lr; // 8017B714
  cmps(c,0,(int32_t)c->r[3],0); // 8017B718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B71C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017B720
  c->r[30]=c->r[3]|c->r[3]; // 8017B724
  c->r[31]=c->r[4]|c->r[4]; // 8017B728
  if (crb(c,2)) { goto L_8017B74C; } // 8017B72C
  if (crb(c,2)) { goto L_8017B73C; } // 8017B730
  c->r[4]=0u+0x00000000u; // 8017B734
  c->lr=0x8017B73Cu; f_80053874(c); // 8017B738
L_8017B73C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017B73C
  if (!crb(c,1)) { goto L_8017B74C; } // 8017B740
  c->r[3]=c->r[30]|c->r[30]; // 8017B744
  c->lr=0x8017B74Cu; f_8005328C(c); // 8017B748
L_8017B74C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B74C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017B750
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B754
  c->lr=c->r[0]; // 8017B758
  c->r[1]=c->r[1]+0x00000010u; // 8017B75C
  return; // 8017B760
}

// fn_8017B764
void f_8017B764(Ctx* __restrict c) {
  trace_call(0x8017B764u);
  c->r[3]=R32(c->r[13]+0xFFFF8AD8u); // 8017B764
  return; // 8017B768
}

// fn_8017B76C
void f_8017B76C(Ctx* __restrict c) {
  trace_call(0x8017B76Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B76C
  c->r[0]=c->lr; // 8017B770
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017B778
  c->r[31]=c->r[3]|c->r[3]; // 8017B77C
  c->r[4]=R32(c->r[13]+0xFFFF8AD8u); // 8017B780
  c->lr=0x8017B788u; f_8005C990(c); // 8017B784
  cmps(c,0,(int32_t)c->r[3],0); // 8017B788
  if (!crb(c,0)) { goto L_8017B798; } // 8017B78C
  c->r[3]=0u+0x00000000u; // 8017B790
  goto L_8017B7B0; // 8017B794
L_8017B798:;
  c->r[3]=c->r[31]|c->r[31]; // 8017B798
  c->lr=0x8017B7A0u; f_80061A10(c); // 8017B79C
  c->r[4]=R32(c->r[13]+0xFFFF8AE8u); // 8017B7A0
  c->lr=0x8017B7A8u; f_803B393C(c); // 8017B7A4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8017B7A8
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8017B7AC
L_8017B7B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017B7B4
  c->lr=c->r[0]; // 8017B7B8
  c->r[1]=c->r[1]+0x00000010u; // 8017B7BC
  return; // 8017B7C0
}

// fn_8017B7C4
void f_8017B7C4(Ctx* __restrict c) {
  trace_call(0x8017B7C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B7C4
  c->r[0]=c->lr; // 8017B7C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B7CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017B7D0
  c->r[31]=c->r[3]|c->r[3]; // 8017B7D4
  c->lr=0x8017B7DCu; f_8017AD48(c); // 8017B7D8
  c->r[3]=0u+0x806E0000u; // 8017B7DC
  c->r[3]=c->r[3]+0xFFFFFE80u; // 8017B7E0
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017B7E4
  c->r[0]=c->r[3]+0x00000018u; // 8017B7E8
  W32(c->r[31]+0x00000024u,c->r[0]); // 8017B7EC
  c->r[0]=R8(c->r[13]+0xFFFFBD90u); // 8017B7F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017B7F4
  if (!crb(c,2)) { goto L_8017B814; } // 8017B7F8
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017B7FC
  c->r[0]=0u+0x00000001u; // 8017B800
  W32(c->r[13]+0xFFFFBD8Cu,c->r[3]); // 8017B804
  c->r[3]=c->r[3]+0x00000001u; // 8017B808
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017B80C
  W8(c->r[13]+0xFFFFBD90u,c->r[0]); // 8017B810
L_8017B814:;
  c->r[0]=R32(c->r[13]+0xFFFFBD8Cu); // 8017B814
  c->r[3]=c->r[31]|c->r[31]; // 8017B818
  W32(c->r[31]+0x00000028u,c->r[0]); // 8017B81C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017B820
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B824
  c->lr=c->r[0]; // 8017B828
  c->r[1]=c->r[1]+0x00000010u; // 8017B82C
  return; // 8017B830
}

// fn_8017B834
void f_8017B834(Ctx* __restrict c) {
  trace_call(0x8017B834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B834
  c->r[0]=c->lr; // 8017B838
  cmps(c,0,(int32_t)c->r[3],0); // 8017B83C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B840
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017B844
  c->r[30]=c->r[3]|c->r[3]; // 8017B848
  c->r[31]=c->r[4]|c->r[4]; // 8017B84C
  if (crb(c,2)) { goto L_8017B870; } // 8017B850
  if (crb(c,2)) { goto L_8017B860; } // 8017B854
  c->r[4]=0u+0x00000000u; // 8017B858
  c->lr=0x8017B860u; f_80053874(c); // 8017B85C
L_8017B860:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017B860
  if (!crb(c,1)) { goto L_8017B870; } // 8017B864
  c->r[3]=c->r[30]|c->r[30]; // 8017B868
  c->lr=0x8017B870u; f_8005328C(c); // 8017B86C
L_8017B870:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B870
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017B874
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B878
  c->lr=c->r[0]; // 8017B87C
  c->r[1]=c->r[1]+0x00000010u; // 8017B880
  return; // 8017B884
}

// fn_8017B888
void f_8017B888(Ctx* __restrict c) {
  trace_call(0x8017B888u);
  c->r[3]=R32(c->r[13]+0xFFFF8ADCu); // 8017B888
  return; // 8017B88C
}

// fn_8017B890
void f_8017B890(Ctx* __restrict c) {
  trace_call(0x8017B890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B890
  c->r[0]=c->lr; // 8017B894
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B898
  c->r[4]=R32(c->r[13]+0xFFFF8ADCu); // 8017B89C
  c->lr=0x8017B8A4u; f_8005C990(c); // 8017B8A0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8017B8A4
  c->r[3]=c->r[0]^0x00000001u; // 8017B8A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B8AC
  c->lr=c->r[0]; // 8017B8B0
  c->r[1]=c->r[1]+0x00000010u; // 8017B8B4
  return; // 8017B8B8
}

// fn_8017B8BC
void f_8017B8BC(Ctx* __restrict c) {
  trace_call(0x8017B8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B8BC
  c->r[0]=c->lr; // 8017B8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B8C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017B8C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017B8CC
  c->r[30]=c->r[3]|c->r[3]; // 8017B8D0
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 8017B8D4
  cmps(c,0,(int32_t)c->r[0],0); // 8017B8D8
  if (crb(c,2)) { goto L_8017BA24; } // 8017B8DC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017B8E0
  c->r[3]=R32(c->r[3]+0x00000088u); // 8017B8E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8017B8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8017B8EC
  c->r[31]=c->r[4]+c->r[0]; // 8017B8F0
  if (crb(c,2)) { goto L_8017B92C; } // 8017B8F4
  cmps(c,0,(int32_t)c->r[3],16); // 8017B8F8
  if (crb(c,2)) { goto L_8017B958; } // 8017B8FC
  cmps(c,0,(int32_t)c->r[3],21); // 8017B900
  if (crb(c,2)) { goto L_8017B980; } // 8017B904
  cmps(c,0,(int32_t)c->r[3],22); // 8017B908
  if (crb(c,2)) { goto L_8017B9A4; } // 8017B90C
  cmps(c,0,(int32_t)c->r[3],37); // 8017B910
  if (crb(c,2)) { goto L_8017B9CC; } // 8017B914
  cmps(c,0,(int32_t)c->r[3],38); // 8017B918
  if (crb(c,2)) { goto L_8017B9F0; } // 8017B91C
  cmps(c,0,(int32_t)c->r[3],144); // 8017B920
  if (crb(c,2)) { goto L_8017BA18; } // 8017B924
  goto L_8017BA24; // 8017B928
L_8017B92C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017B92C
  c->r[4]=c->r[30]+0x00000040u; // 8017B930
  c->lr=0x8017B938u; f_80382F2C(c); // 8017B934
  c->r[4]=0u+0x806E0000u; // 8017B938
  c->r[5]=0u+0x80760000u; // 8017B93C
  c->r[3]=c->r[30]|c->r[30]; // 8017B940
  c->r[4]=c->r[4]+0xFFFFFC80u; // 8017B944
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017B948
  c->lr=0x8017B950u; f_8017B084(c); // 8017B94C
  c->r[0]=0u+0x00000010u; // 8017B950
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B954
L_8017B958:;
  c->r[4]=0u+0x806E0000u; // 8017B958
  {uint32_t ea=c->r[13]+0xFFFF8AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B95C
  c->r[3]=c->r[30]|c->r[30]; // 8017B960
  c->r[5]=c->r[31]|c->r[31]; // 8017B964
  c->r[4]=c->r[4]+0xFFFFFC80u; // 8017B968
  c->lr=0x8017B970u; f_8017B378(c); // 8017B96C
  cmps(c,0,(int32_t)c->r[3],0); // 8017B970
  if (crb(c,2)) { goto L_8017BA24; } // 8017B974
  c->r[0]=0u+0x00000015u; // 8017B978
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B97C
L_8017B980:;
  c->r[4]=0u+0x806E0000u; // 8017B980
  c->r[5]=0u+0x80760000u; // 8017B984
  c->r[3]=c->r[30]|c->r[30]; // 8017B988
  c->r[4]=c->r[4]+0xFFFFFCA8u; // 8017B98C
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017B990
  c->lr=0x8017B998u; f_8017B084(c); // 8017B994
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017B998
  c->r[0]=c->r[3]+0x00000001u; // 8017B99C
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B9A0
L_8017B9A4:;
  c->r[4]=0u+0x806E0000u; // 8017B9A4
  {uint32_t ea=c->r[13]+0xFFFF8AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B9A8
  c->r[3]=c->r[30]|c->r[30]; // 8017B9AC
  c->r[5]=c->r[31]|c->r[31]; // 8017B9B0
  c->r[4]=c->r[4]+0xFFFFFCA8u; // 8017B9B4
  c->lr=0x8017B9BCu; f_8017B378(c); // 8017B9B8
  cmps(c,0,(int32_t)c->r[3],0); // 8017B9BC
  if (crb(c,2)) { goto L_8017BA24; } // 8017B9C0
  c->r[0]=0u+0x00000025u; // 8017B9C4
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B9C8
L_8017B9CC:;
  c->r[4]=0u+0x806E0000u; // 8017B9CC
  c->r[5]=0u+0x80760000u; // 8017B9D0
  c->r[3]=c->r[30]|c->r[30]; // 8017B9D4
  c->r[4]=c->r[4]+0xFFFFFCD0u; // 8017B9D8
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017B9DC
  c->lr=0x8017B9E4u; f_8017B084(c); // 8017B9E0
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017B9E4
  c->r[0]=c->r[3]+0x00000001u; // 8017B9E8
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B9EC
L_8017B9F0:;
  c->r[4]=0u+0x806E0000u; // 8017B9F0
  {uint32_t ea=c->r[13]+0xFFFF8AFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B9F4
  c->r[3]=c->r[30]|c->r[30]; // 8017B9F8
  c->r[5]=c->r[31]|c->r[31]; // 8017B9FC
  c->r[4]=c->r[4]+0xFFFFFCD0u; // 8017BA00
  c->lr=0x8017BA08u; f_8017B378(c); // 8017BA04
  cmps(c,0,(int32_t)c->r[3],0); // 8017BA08
  if (crb(c,2)) { goto L_8017BA24; } // 8017BA0C
  c->r[0]=0u+0x00000090u; // 8017BA10
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BA14
L_8017BA18:;
  c->r[4]=c->r[31]|c->r[31]; // 8017BA18
  c->r[3]=c->r[30]+0x00000040u; // 8017BA1C
  c->lr=0x8017BA24u; f_80382F2C(c); // 8017BA20
L_8017BA24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BA24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BA28
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017BA2C
  c->lr=c->r[0]; // 8017BA30
  c->r[1]=c->r[1]+0x00000010u; // 8017BA34
  return; // 8017BA38
}

// fn_8017BA3C
void f_8017BA3C(Ctx* __restrict c) {
  trace_call(0x8017BA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BA3C
  c->r[0]=c->lr; // 8017BA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BA48
  c->r[31]=c->r[3]|c->r[3]; // 8017BA4C
  c->lr=0x8017BA54u; f_8017AD48(c); // 8017BA50
  c->r[3]=0u+0x806E0000u; // 8017BA54
  c->r[3]=c->r[3]+0xFFFFFE34u; // 8017BA58
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017BA5C
  c->r[0]=c->r[3]+0x00000018u; // 8017BA60
  W32(c->r[31]+0x00000024u,c->r[0]); // 8017BA64
  c->r[0]=R8(c->r[13]+0xFFFFBD98u); // 8017BA68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017BA6C
  if (!crb(c,2)) { goto L_8017BA8C; } // 8017BA70
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017BA74
  c->r[0]=0u+0x00000001u; // 8017BA78
  W32(c->r[13]+0xFFFFBD94u,c->r[3]); // 8017BA7C
  c->r[3]=c->r[3]+0x00000001u; // 8017BA80
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017BA84
  W8(c->r[13]+0xFFFFBD98u,c->r[0]); // 8017BA88
L_8017BA8C:;
  c->r[0]=R32(c->r[13]+0xFFFFBD94u); // 8017BA8C
  c->r[3]=c->r[31]|c->r[31]; // 8017BA90
  W32(c->r[31]+0x00000028u,c->r[0]); // 8017BA94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BA9C
  c->lr=c->r[0]; // 8017BAA0
  c->r[1]=c->r[1]+0x00000010u; // 8017BAA4
  return; // 8017BAA8
}

// fn_8017BAAC
void f_8017BAAC(Ctx* __restrict c) {
  trace_call(0x8017BAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BAAC
  c->r[0]=c->lr; // 8017BAB0
  cmps(c,0,(int32_t)c->r[3],0); // 8017BAB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BAB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017BABC
  c->r[30]=c->r[3]|c->r[3]; // 8017BAC0
  c->r[31]=c->r[4]|c->r[4]; // 8017BAC4
  if (crb(c,2)) { goto L_8017BAE8; } // 8017BAC8
  if (crb(c,2)) { goto L_8017BAD8; } // 8017BACC
  c->r[4]=0u+0x00000000u; // 8017BAD0
  c->lr=0x8017BAD8u; f_80053874(c); // 8017BAD4
L_8017BAD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017BAD8
  if (!crb(c,1)) { goto L_8017BAE8; } // 8017BADC
  c->r[3]=c->r[30]|c->r[30]; // 8017BAE0
  c->lr=0x8017BAE8u; f_8005328C(c); // 8017BAE4
L_8017BAE8:;
  c->r[3]=c->r[30]|c->r[30]; // 8017BAE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017BAEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BAF0
  c->lr=c->r[0]; // 8017BAF4
  c->r[1]=c->r[1]+0x00000010u; // 8017BAF8
  return; // 8017BAFC
}

// fn_8017BB00
void f_8017BB00(Ctx* __restrict c) {
  trace_call(0x8017BB00u);
  c->r[3]=R32(c->r[13]+0xFFFF8AE0u); // 8017BB00
  return; // 8017BB04
}

// fn_8017BB08
void f_8017BB08(Ctx* __restrict c) {
  trace_call(0x8017BB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BB08
  c->r[0]=c->lr; // 8017BB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BB10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BB14
  c->r[31]=c->r[3]|c->r[3]; // 8017BB18
  c->r[4]=R32(c->r[13]+0xFFFF8AE0u); // 8017BB1C
  c->lr=0x8017BB24u; f_8005C990(c); // 8017BB20
  cmps(c,0,(int32_t)c->r[3],0); // 8017BB24
  if (!crb(c,0)) { goto L_8017BB34; } // 8017BB28
  c->r[3]=0u+0x00000000u; // 8017BB2C
  goto L_8017BB8C; // 8017BB30
L_8017BB34:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BB34
  c->lr=0x8017BB3Cu; f_80061A10(c); // 8017BB38
  c->r[4]=R32(c->r[13]+0xFFFF8AECu); // 8017BB3C
  c->lr=0x8017BB44u; f_803B393C(c); // 8017BB40
  cmps(c,0,(int32_t)c->r[3],0); // 8017BB44
  if (!crb(c,2)) { goto L_8017BB54; } // 8017BB48
  c->r[3]=0u+0x00000000u; // 8017BB4C
  goto L_8017BB8C; // 8017BB50
L_8017BB54:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BB54
  c->lr=0x8017BB5Cu; f_80061A10(c); // 8017BB58
  c->r[4]=R32(c->r[13]+0xFFFF8AF0u); // 8017BB5C
  c->lr=0x8017BB64u; f_803B393C(c); // 8017BB60
  cmps(c,0,(int32_t)c->r[3],0); // 8017BB64
  if (!crb(c,2)) { goto L_8017BB74; } // 8017BB68
  c->r[3]=0u+0x00000000u; // 8017BB6C
  goto L_8017BB8C; // 8017BB70
L_8017BB74:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BB74
  c->lr=0x8017BB7Cu; f_80061A10(c); // 8017BB78
  c->r[4]=R32(c->r[13]+0xFFFF8AF4u); // 8017BB7C
  c->lr=0x8017BB84u; f_803B393C(c); // 8017BB80
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8017BB84
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8017BB88
L_8017BB8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BB90
  c->lr=c->r[0]; // 8017BB94
  c->r[1]=c->r[1]+0x00000010u; // 8017BB98
  return; // 8017BB9C
}

// fn_8017BBA0
void f_8017BBA0(Ctx* __restrict c) {
  trace_call(0x8017BBA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BBA0
  c->r[0]=c->lr; // 8017BBA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BBA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017BBAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017BBB0
  c->r[30]=c->r[3]|c->r[3]; // 8017BBB4
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 8017BBB8
  cmps(c,0,(int32_t)c->r[0],0); // 8017BBBC
  if (crb(c,2)) { goto L_8017BD28; } // 8017BBC0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017BBC4
  c->r[3]=R32(c->r[3]+0x00000088u); // 8017BBC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8017BBCC
  cmps(c,0,(int32_t)c->r[3],0); // 8017BBD0
  c->r[31]=c->r[4]+c->r[0]; // 8017BBD4
  if (crb(c,2)) { goto L_8017BC10; } // 8017BBD8
  cmps(c,0,(int32_t)c->r[3],16); // 8017BBDC
  if (crb(c,2)) { goto L_8017BC5C; } // 8017BBE0
  cmps(c,0,(int32_t)c->r[3],21); // 8017BBE4
  if (crb(c,2)) { goto L_8017BC84; } // 8017BBE8
  cmps(c,0,(int32_t)c->r[3],22); // 8017BBEC
  if (crb(c,2)) { goto L_8017BCA8; } // 8017BBF0
  cmps(c,0,(int32_t)c->r[3],37); // 8017BBF4
  if (crb(c,2)) { goto L_8017BCD0; } // 8017BBF8
  cmps(c,0,(int32_t)c->r[3],38); // 8017BBFC
  if (crb(c,2)) { goto L_8017BCF4; } // 8017BC00
  cmps(c,0,(int32_t)c->r[3],144); // 8017BC04
  if (crb(c,2)) { goto L_8017BD1C; } // 8017BC08
  goto L_8017BD28; // 8017BC0C
L_8017BC10:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BC10
  c->r[4]=c->r[30]+0x00000040u; // 8017BC14
  c->lr=0x8017BC1Cu; f_80382F2C(c); // 8017BC18
  c->r[3]=c->r[1]+0x00000008u; // 8017BC1C
  c->r[4]=c->r[30]+0x00000040u; // 8017BC20
  c->lr=0x8017BC28u; f_80060F28(c); // 8017BC24
  c->r[3]=c->r[1]+0x00000008u; // 8017BC28
  c->r[5]=0u+0x80760000u; // 8017BC2C
  {uint32_t ea=c->r[13]+0xFFFF8B04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BC30
  c->r[4]=c->r[3]|c->r[3]; // 8017BC34
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BC38
  c->lr=0x8017BC40u; f_8032AB28(c); // 8017BC3C
  c->r[4]=0u+0x806E0000u; // 8017BC40
  c->r[3]=c->r[30]|c->r[30]; // 8017BC44
  c->r[4]=c->r[4]+0xFFFFFCF8u; // 8017BC48
  c->r[5]=c->r[1]+0x00000008u; // 8017BC4C
  c->lr=0x8017BC54u; f_8017B084(c); // 8017BC50
  c->r[0]=0u+0x00000010u; // 8017BC54
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BC58
L_8017BC5C:;
  c->r[4]=0u+0x806E0000u; // 8017BC5C
  {uint32_t ea=c->r[13]+0xFFFF8B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BC60
  c->r[3]=c->r[30]|c->r[30]; // 8017BC64
  c->r[5]=c->r[31]|c->r[31]; // 8017BC68
  c->r[4]=c->r[4]+0xFFFFFCF8u; // 8017BC6C
  c->lr=0x8017BC74u; f_8017B378(c); // 8017BC70
  cmps(c,0,(int32_t)c->r[3],0); // 8017BC74
  if (crb(c,2)) { goto L_8017BD28; } // 8017BC78
  c->r[0]=0u+0x00000015u; // 8017BC7C
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BC80
L_8017BC84:;
  c->r[4]=0u+0x806E0000u; // 8017BC84
  c->r[5]=0u+0x80760000u; // 8017BC88
  c->r[3]=c->r[30]|c->r[30]; // 8017BC8C
  c->r[4]=c->r[4]+0xFFFFFD20u; // 8017BC90
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BC94
  c->lr=0x8017BC9Cu; f_8017B084(c); // 8017BC98
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017BC9C
  c->r[0]=c->r[3]+0x00000001u; // 8017BCA0
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BCA4
L_8017BCA8:;
  c->r[4]=0u+0x806E0000u; // 8017BCA8
  {uint32_t ea=c->r[13]+0xFFFF8B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BCAC
  c->r[3]=c->r[30]|c->r[30]; // 8017BCB0
  c->r[5]=c->r[31]|c->r[31]; // 8017BCB4
  c->r[4]=c->r[4]+0xFFFFFD20u; // 8017BCB8
  c->lr=0x8017BCC0u; f_8017B378(c); // 8017BCBC
  cmps(c,0,(int32_t)c->r[3],0); // 8017BCC0
  if (crb(c,2)) { goto L_8017BD28; } // 8017BCC4
  c->r[0]=0u+0x00000025u; // 8017BCC8
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BCCC
L_8017BCD0:;
  c->r[4]=0u+0x806E0000u; // 8017BCD0
  c->r[5]=0u+0x80760000u; // 8017BCD4
  c->r[3]=c->r[30]|c->r[30]; // 8017BCD8
  c->r[4]=c->r[4]+0xFFFFFD48u; // 8017BCDC
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BCE0
  c->lr=0x8017BCE8u; f_8017B084(c); // 8017BCE4
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017BCE8
  c->r[0]=c->r[3]+0x00000001u; // 8017BCEC
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BCF0
L_8017BCF4:;
  c->r[4]=0u+0x806E0000u; // 8017BCF4
  {uint32_t ea=c->r[13]+0xFFFF8B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BCF8
  c->r[3]=c->r[30]|c->r[30]; // 8017BCFC
  c->r[5]=c->r[31]|c->r[31]; // 8017BD00
  c->r[4]=c->r[4]+0xFFFFFD48u; // 8017BD04
  c->lr=0x8017BD0Cu; f_8017B378(c); // 8017BD08
  cmps(c,0,(int32_t)c->r[3],0); // 8017BD0C
  if (crb(c,2)) { goto L_8017BD28; } // 8017BD10
  c->r[0]=0u+0x00000090u; // 8017BD14
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BD18
L_8017BD1C:;
  c->r[4]=c->r[31]|c->r[31]; // 8017BD1C
  c->r[3]=c->r[30]+0x00000040u; // 8017BD20
  c->lr=0x8017BD28u; f_80382F2C(c); // 8017BD24
L_8017BD28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017BD28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017BD2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017BD30
  c->lr=c->r[0]; // 8017BD34
  c->r[1]=c->r[1]+0x00000020u; // 8017BD38
  return; // 8017BD3C
}

// fn_8017BD40
void f_8017BD40(Ctx* __restrict c) {
  trace_call(0x8017BD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BD40
  c->r[0]=c->lr; // 8017BD44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BD48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BD4C
  c->r[31]=c->r[3]|c->r[3]; // 8017BD50
  c->lr=0x8017BD58u; f_8017AD48(c); // 8017BD54
  c->r[3]=0u+0x806E0000u; // 8017BD58
  c->r[3]=c->r[3]+0xFFFFFDE8u; // 8017BD5C
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017BD60
  c->r[0]=c->r[3]+0x00000018u; // 8017BD64
  W32(c->r[31]+0x00000024u,c->r[0]); // 8017BD68
  c->r[0]=R8(c->r[13]+0xFFFFBDA0u); // 8017BD6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017BD70
  if (!crb(c,2)) { goto L_8017BD90; } // 8017BD74
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017BD78
  c->r[0]=0u+0x00000001u; // 8017BD7C
  W32(c->r[13]+0xFFFFBD9Cu,c->r[3]); // 8017BD80
  c->r[3]=c->r[3]+0x00000001u; // 8017BD84
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017BD88
  W8(c->r[13]+0xFFFFBDA0u,c->r[0]); // 8017BD8C
L_8017BD90:;
  c->r[0]=R32(c->r[13]+0xFFFFBD9Cu); // 8017BD90
  c->r[3]=c->r[31]|c->r[31]; // 8017BD94
  W32(c->r[31]+0x00000028u,c->r[0]); // 8017BD98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BD9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BDA0
  c->lr=c->r[0]; // 8017BDA4
  c->r[1]=c->r[1]+0x00000010u; // 8017BDA8
  return; // 8017BDAC
}

// fn_8017BDB0
void f_8017BDB0(Ctx* __restrict c) {
  trace_call(0x8017BDB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BDB0
  c->r[0]=c->lr; // 8017BDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8017BDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BDBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017BDC0
  c->r[30]=c->r[3]|c->r[3]; // 8017BDC4
  c->r[31]=c->r[4]|c->r[4]; // 8017BDC8
  if (crb(c,2)) { goto L_8017BDEC; } // 8017BDCC
  if (crb(c,2)) { goto L_8017BDDC; } // 8017BDD0
  c->r[4]=0u+0x00000000u; // 8017BDD4
  c->lr=0x8017BDDCu; f_80053874(c); // 8017BDD8
L_8017BDDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017BDDC
  if (!crb(c,1)) { goto L_8017BDEC; } // 8017BDE0
  c->r[3]=c->r[30]|c->r[30]; // 8017BDE4
  c->lr=0x8017BDECu; f_8005328C(c); // 8017BDE8
L_8017BDEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8017BDEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017BDF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BDF4
  c->lr=c->r[0]; // 8017BDF8
  c->r[1]=c->r[1]+0x00000010u; // 8017BDFC
  return; // 8017BE00
}

// fn_8017BE04
void f_8017BE04(Ctx* __restrict c) {
  trace_call(0x8017BE04u);
  c->r[3]=R32(c->r[13]+0xFFFF8AE4u); // 8017BE04
  return; // 8017BE08
}

// fn_8017BE0C
void f_8017BE0C(Ctx* __restrict c) {
  trace_call(0x8017BE0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BE0C
  c->r[0]=c->lr; // 8017BE10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BE14
  c->r[4]=R32(c->r[13]+0xFFFF8AE4u); // 8017BE18
  c->lr=0x8017BE20u; f_8005C990(c); // 8017BE1C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8017BE20
  c->r[3]=c->r[0]^0x00000001u; // 8017BE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BE28
  c->lr=c->r[0]; // 8017BE2C
  c->r[1]=c->r[1]+0x00000010u; // 8017BE30
  return; // 8017BE34
}

// fn_8017BE38
void f_8017BE38(Ctx* __restrict c) {
  trace_call(0x8017BE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BE38
  c->r[0]=c->lr; // 8017BE3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BE40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017BE44
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017BE48
  c->r[30]=c->r[3]|c->r[3]; // 8017BE4C
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 8017BE50
  cmps(c,0,(int32_t)c->r[0],0); // 8017BE54
  if (crb(c,2)) { goto L_8017BFC0; } // 8017BE58
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017BE5C
  c->r[3]=R32(c->r[3]+0x00000088u); // 8017BE60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8017BE64
  cmps(c,0,(int32_t)c->r[3],0); // 8017BE68
  c->r[31]=c->r[4]+c->r[0]; // 8017BE6C
  if (crb(c,2)) { goto L_8017BEA8; } // 8017BE70
  cmps(c,0,(int32_t)c->r[3],16); // 8017BE74
  if (crb(c,2)) { goto L_8017BEF4; } // 8017BE78
  cmps(c,0,(int32_t)c->r[3],21); // 8017BE7C
  if (crb(c,2)) { goto L_8017BF1C; } // 8017BE80
  cmps(c,0,(int32_t)c->r[3],22); // 8017BE84
  if (crb(c,2)) { goto L_8017BF40; } // 8017BE88
  cmps(c,0,(int32_t)c->r[3],37); // 8017BE8C
  if (crb(c,2)) { goto L_8017BF68; } // 8017BE90
  cmps(c,0,(int32_t)c->r[3],38); // 8017BE94
  if (crb(c,2)) { goto L_8017BF8C; } // 8017BE98
  cmps(c,0,(int32_t)c->r[3],144); // 8017BE9C
  if (crb(c,2)) { goto L_8017BFB4; } // 8017BEA0
  goto L_8017BFC0; // 8017BEA4
L_8017BEA8:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BEA8
  c->r[4]=c->r[30]+0x00000040u; // 8017BEAC
  c->lr=0x8017BEB4u; f_80382F2C(c); // 8017BEB0
  c->r[3]=c->r[1]+0x00000008u; // 8017BEB4
  c->r[4]=c->r[30]+0x00000040u; // 8017BEB8
  c->lr=0x8017BEC0u; f_80060F28(c); // 8017BEBC
  c->r[3]=c->r[1]+0x00000008u; // 8017BEC0
  c->r[5]=0u+0x80760000u; // 8017BEC4
  {uint32_t ea=c->r[13]+0xFFFF8B0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BEC8
  c->r[4]=c->r[3]|c->r[3]; // 8017BECC
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BED0
  c->lr=0x8017BED8u; f_8032AB28(c); // 8017BED4
  c->r[4]=0u+0x806E0000u; // 8017BED8
  c->r[3]=c->r[30]|c->r[30]; // 8017BEDC
  c->r[4]=c->r[4]+0xFFFFFD70u; // 8017BEE0
  c->r[5]=c->r[1]+0x00000008u; // 8017BEE4
  c->lr=0x8017BEECu; f_8017B084(c); // 8017BEE8
  c->r[0]=0u+0x00000010u; // 8017BEEC
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BEF0
L_8017BEF4:;
  c->r[4]=0u+0x806E0000u; // 8017BEF4
  {uint32_t ea=c->r[13]+0xFFFF8B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BEF8
  c->r[3]=c->r[30]|c->r[30]; // 8017BEFC
  c->r[5]=c->r[31]|c->r[31]; // 8017BF00
  c->r[4]=c->r[4]+0xFFFFFD70u; // 8017BF04
  c->lr=0x8017BF0Cu; f_8017B378(c); // 8017BF08
  cmps(c,0,(int32_t)c->r[3],0); // 8017BF0C
  if (crb(c,2)) { goto L_8017BFC0; } // 8017BF10
  c->r[0]=0u+0x00000015u; // 8017BF14
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BF18
L_8017BF1C:;
  c->r[4]=0u+0x806E0000u; // 8017BF1C
  c->r[5]=0u+0x80760000u; // 8017BF20
  c->r[3]=c->r[30]|c->r[30]; // 8017BF24
  c->r[4]=c->r[4]+0xFFFFFD98u; // 8017BF28
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BF2C
  c->lr=0x8017BF34u; f_8017B084(c); // 8017BF30
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017BF34
  c->r[0]=c->r[3]+0x00000001u; // 8017BF38
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BF3C
L_8017BF40:;
  c->r[4]=0u+0x806E0000u; // 8017BF40
  {uint32_t ea=c->r[13]+0xFFFF8B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BF44
  c->r[3]=c->r[30]|c->r[30]; // 8017BF48
  c->r[5]=c->r[31]|c->r[31]; // 8017BF4C
  c->r[4]=c->r[4]+0xFFFFFD98u; // 8017BF50
  c->lr=0x8017BF58u; f_8017B378(c); // 8017BF54
  cmps(c,0,(int32_t)c->r[3],0); // 8017BF58
  if (crb(c,2)) { goto L_8017BFC0; } // 8017BF5C
  c->r[0]=0u+0x00000025u; // 8017BF60
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BF64
L_8017BF68:;
  c->r[4]=0u+0x806E0000u; // 8017BF68
  c->r[5]=0u+0x80760000u; // 8017BF6C
  c->r[3]=c->r[30]|c->r[30]; // 8017BF70
  c->r[4]=c->r[4]+0xFFFFFDC0u; // 8017BF74
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017BF78
  c->lr=0x8017BF80u; f_8017B084(c); // 8017BF7C
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017BF80
  c->r[0]=c->r[3]+0x00000001u; // 8017BF84
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BF88
L_8017BF8C:;
  c->r[4]=0u+0x806E0000u; // 8017BF8C
  {uint32_t ea=c->r[13]+0xFFFF8B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017BF90
  c->r[3]=c->r[30]|c->r[30]; // 8017BF94
  c->r[5]=c->r[31]|c->r[31]; // 8017BF98
  c->r[4]=c->r[4]+0xFFFFFDC0u; // 8017BF9C
  c->lr=0x8017BFA4u; f_8017B378(c); // 8017BFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8017BFA4
  if (crb(c,2)) { goto L_8017BFC0; } // 8017BFA8
  c->r[0]=0u+0x00000090u; // 8017BFAC
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017BFB0
L_8017BFB4:;
  c->r[4]=c->r[31]|c->r[31]; // 8017BFB4
  c->r[3]=c->r[30]+0x00000040u; // 8017BFB8
  c->lr=0x8017BFC0u; f_80382F2C(c); // 8017BFBC
L_8017BFC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017BFC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017BFC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017BFC8
  c->lr=c->r[0]; // 8017BFCC
  c->r[1]=c->r[1]+0x00000020u; // 8017BFD0
  return; // 8017BFD4
}

// fn_8017BFD8
void f_8017BFD8(Ctx* __restrict c) {
  trace_call(0x8017BFD8u);
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 8017BFD8
  f_8017AF30(c); return; // 8017BFDC
}

// fn_8017BFE0
void f_8017BFE0(Ctx* __restrict c) {
  trace_call(0x8017BFE0u);
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 8017BFE0
  f_8017AE94(c); return; // 8017BFE4
}

// fn_8017BFE8
void f_8017BFE8(Ctx* __restrict c) {
  trace_call(0x8017BFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BFE8
  c->r[0]=c->lr; // 8017BFEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017BFF0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017BFF4
  c->r[26]=c->r[3]|c->r[3]; // 8017BFF8
  c->r[31]=0u+0x80690000u; // 8017BFFC
  c->r[30]=c->r[26]|c->r[26]; // 8017C000
  c->r[27]=c->r[26]|c->r[26]; // 8017C004
  c->r[29]=c->r[26]|c->r[26]; // 8017C008
  c->r[31]=c->r[31]+0x00001820u; // 8017C00C
  c->lr=0x8017C014u; f_8017CD00(c); // 8017C010
  c->r[4]=0u+0x806D0000u; // 8017C014
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 8017C018
  c->r[0]=0u+0x00000000u; // 8017C01C
  W32(c->r[26]+0x00000000u,c->r[3]); // 8017C020
  c->r[4]=c->r[4]+0x000038C0u; // 8017C024
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 8017C028
  W32(c->r[26]+0x00000004u,c->r[0]); // 8017C02C
  W32(c->r[26]+0x00000008u,c->r[0]); // 8017C030
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 8017C034
  W8(c->r[26]+0x00000010u,c->r[0]); // 8017C038
  W32(c->r[26]+0x00000014u,c->r[0]); // 8017C03C
  W32(c->r[26]+0x00000018u,c->r[0]); // 8017C040
  W32(c->r[26]+0x00000020u,c->r[0]); // 8017C044
  W32(c->r[26]+0x00000024u,c->r[0]); // 8017C048
  if (crb(c,2)) { goto L_8017C054; } // 8017C04C
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 8017C050
L_8017C054:;
  c->lr=0x8017C058u; f_800797AC(c); // 8017C054
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017C058
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 8017C05C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017C060
  if (!crb(c,2)) { goto L_8017C070; } // 8017C064
  c->r[0]=0u+0x00000001u; // 8017C068
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017C06C
L_8017C070:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8017C070
  c->r[5]=0u+0x0000012Cu; // 8017C074
  c->r[4]=c->r[7]+0x00000001u; // 8017C078
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017C07C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017C080
  c->r[6]=c->r[4]-c->r[0]; // 8017C084
  goto L_8017C0D4; // 8017C088
L_8017C08C:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8017C08C
  c->r[4]=c->r[3]+c->r[0]; // 8017C090
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017C094
  cmps(c,0,(int32_t)c->r[0],0); // 8017C098
  if (!crb(c,2)) { goto L_8017C0C4; } // 8017C09C
  W32(c->r[3]+0x00000004u,c->r[6]); // 8017C0A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017C0A4
  W32(c->r[4]+0x00000008u,c->r[0]); // 8017C0A8
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 8017C0AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017C0B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017C0B4
  W32(c->r[1]+0x00000010u,c->r[4]); // 8017C0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017C0BC
  goto L_8017C0F0; // 8017C0C0
L_8017C0C4:;
  c->r[4]=c->r[6]+0x00000001u; // 8017C0C4
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017C0C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017C0CC
  c->r[6]=c->r[4]-c->r[0]; // 8017C0D0
L_8017C0D4:;
  cmpu(c,0,c->r[6],c->r[7]); // 8017C0D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C08C; } // 8017C0D8
  c->r[0]=0u+0x00000000u; // 8017C0DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017C0E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017C0E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017C0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017C0EC
L_8017C0F0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8017C0F0
  c->r[24]=c->r[26]+0x00000028u; // 8017C0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017C0F8
  c->r[3]=c->r[24]|c->r[24]; // 8017C0FC
  W32(c->r[1]+0x00000018u,c->r[4]); // 8017C100
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017C104
  W32(c->r[26]+0x00000020u,c->r[4]); // 8017C108
  W32(c->r[26]+0x00000024u,c->r[0]); // 8017C10C
  c->lr=0x8017C114u; f_800506C0(c); // 8017C110
  cmps(c,0,(int32_t)c->r[24],0); // 8017C114
  c->r[3]=c->r[24]|c->r[24]; // 8017C118
  if (crb(c,2)) { goto L_8017C124; } // 8017C11C
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 8017C120
L_8017C124:;
  c->r[28]=0u+0x00000001u; // 8017C124
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017C128
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 8017C12C
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 8017C130
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C134
  if (!crb(c,2)) { goto L_8017C178; } // 8017C138
  c->r[25]=0u+0x80740000u; // 8017C13C
  c->r[3]=c->r[25]+0x000074BCu; // 8017C140
  c->lr=0x8017C148u; f_800506C0(c); // 8017C144
  c->r[6]=0u+0x806D0000u; // 8017C148
  c->r[4]=0u+0x80060000u; // 8017C14C
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 8017C150
  c->r[3]=c->r[25]+0x000074BCu; // 8017C154
  c->r[0]=c->r[6]+0x00000008u; // 8017C158
  c->r[5]=0u+0x80750000u; // 8017C15C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017C160
  c->r[4]=c->r[4]+0x000057D4u; // 8017C164
  c->r[5]=c->r[5]+0x000049E4u; // 8017C168
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C16C
  c->lr=0x8017C174u; f_803A92B8(c); // 8017C170
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 8017C174
L_8017C178:;
  c->r[3]=0u+0x80740000u; // 8017C178
  c->r[5]=c->r[24]|c->r[24]; // 8017C17C
  c->r[3]=c->r[3]+0x000074BCu; // 8017C180
  c->r[4]=c->r[3]|c->r[3]; // 8017C184
  c->lr=0x8017C18Cu; f_802DDCA8(c); // 8017C188
  c->r[25]=c->r[26]+0x00000038u; // 8017C18C
  c->r[3]=c->r[25]|c->r[25]; // 8017C190
  c->lr=0x8017C198u; f_800506C0(c); // 8017C194
  cmps(c,0,(int32_t)c->r[25],0); // 8017C198
  c->r[0]=c->r[25]|c->r[25]; // 8017C19C
  if (crb(c,2)) { goto L_8017C1A8; } // 8017C1A0
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 8017C1A4
L_8017C1A8:;
  c->r[28]=c->r[26]+0x00000044u; // 8017C1A8
  W32(c->r[25]+0x00000008u,c->r[0]); // 8017C1AC
  c->r[3]=c->r[28]|c->r[28]; // 8017C1B0
  c->lr=0x8017C1B8u; f_800506C0(c); // 8017C1B4
  cmps(c,0,(int32_t)c->r[28],0); // 8017C1B8
  c->r[0]=c->r[28]|c->r[28]; // 8017C1BC
  if (crb(c,2)) { goto L_8017C1C8; } // 8017C1C0
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 8017C1C4
L_8017C1C8:;
  c->r[3]=0u+0x806F0000u; // 8017C1C8
  c->r[25]=0u+0x00000000u; // 8017C1CC
  c->r[3]=c->r[3]+0x00000E80u; // 8017C1D0
  W32(c->r[28]+0x00000008u,c->r[0]); // 8017C1D4
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 8017C1D8
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017C1DC
  W32(c->r[26]+0x00000058u,c->r[25]); // 8017C1E0
  W32(c->r[26]+0x00000064u,c->r[25]); // 8017C1E4
  c->lr=0x8017C1ECu; f_8007BDCC(c); // 8017C1E8
  c->r[0]=c->r[13]+0xFFFF8114u; // 8017C1EC
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 8017C1F0
  W32(c->r[26]+0x000000A0u,c->r[0]); // 8017C1F4
  W32(c->r[26]+0x000000A4u,c->r[25]); // 8017C1F8
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 8017C1FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C200
  if (!crb(c,2)) { goto L_8017C224; } // 8017C204
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017C208
  c->r[0]=0u+0x00000001u; // 8017C20C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017C210
  c->r[3]=c->r[4]+0x00000001u; // 8017C214
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017C218
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 8017C21C
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8017C220
L_8017C224:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 8017C224
  c->r[3]=c->r[13]+0xFFFF8110u; // 8017C228
  c->r[0]=0u+0x00000000u; // 8017C22C
  W32(c->r[26]+0x000000A8u,c->r[4]); // 8017C230
  W32(c->r[26]+0x000000ACu,c->r[3]); // 8017C234
  W32(c->r[26]+0x000000B0u,c->r[0]); // 8017C238
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 8017C23C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C240
  if (!crb(c,2)) { goto L_8017C264; } // 8017C244
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017C248
  c->r[0]=0u+0x00000001u; // 8017C24C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017C250
  c->r[3]=c->r[4]+0x00000001u; // 8017C254
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017C258
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 8017C25C
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 8017C260
L_8017C264:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 8017C264
  c->r[3]=c->r[13]+0xFFFF810Cu; // 8017C268
  c->r[0]=0u+0x00000000u; // 8017C26C
  W32(c->r[26]+0x000000B4u,c->r[4]); // 8017C270
  W32(c->r[26]+0x000000B8u,c->r[3]); // 8017C274
  W32(c->r[26]+0x000000BCu,c->r[0]); // 8017C278
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 8017C27C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C280
  if (!crb(c,2)) { goto L_8017C2A4; } // 8017C284
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017C288
  c->r[0]=0u+0x00000001u; // 8017C28C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017C290
  c->r[3]=c->r[4]+0x00000001u; // 8017C294
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017C298
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 8017C29C
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8017C2A0
L_8017C2A4:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 8017C2A4
  c->r[3]=c->r[13]+0xFFFF8108u; // 8017C2A8
  c->r[0]=0u+0x00000000u; // 8017C2AC
  W32(c->r[26]+0x000000C0u,c->r[4]); // 8017C2B0
  W32(c->r[26]+0x000000C4u,c->r[3]); // 8017C2B4
  W32(c->r[26]+0x000000C8u,c->r[0]); // 8017C2B8
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 8017C2BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C2C0
  if (!crb(c,2)) { goto L_8017C2E4; } // 8017C2C4
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017C2C8
  c->r[0]=0u+0x00000001u; // 8017C2CC
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017C2D0
  c->r[3]=c->r[4]+0x00000001u; // 8017C2D4
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017C2D8
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 8017C2DC
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8017C2E0
L_8017C2E4:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 8017C2E4
  c->r[0]=c->r[13]+0xFFFF8104u; // 8017C2E8
  c->r[25]=0u+0x00000000u; // 8017C2EC
  W32(c->r[26]+0x000000CCu,c->r[3]); // 8017C2F0
  c->r[3]=c->r[26]+0x000000D8u; // 8017C2F4
  W32(c->r[26]+0x000000D0u,c->r[0]); // 8017C2F8
  W32(c->r[26]+0x000000D4u,c->r[25]); // 8017C2FC
  c->lr=0x8017C304u; f_800506C0(c); // 8017C300
  c->r[4]=0u+0x806F0000u; // 8017C304
  c->r[3]=0u+0x00000006u; // 8017C308
  c->r[4]=c->r[4]+0x000007A0u; // 8017C30C
  c->r[28]=c->r[26]+0x000000FCu; // 8017C310
  c->r[0]=c->r[4]+0x00000024u; // 8017C314
  W32(c->r[26]+0x000000E8u,c->r[3]); // 8017C318
  c->r[3]=c->r[28]+0x0000000Cu; // 8017C31C
  W32(c->r[26]+0x000000ECu,c->r[25]); // 8017C320
  W32(c->r[26]+0x000000F8u,c->r[25]); // 8017C324
  W32(c->r[26]+0x000000FCu,c->r[4]); // 8017C328
  W32(c->r[26]+0x00000100u,c->r[0]); // 8017C32C
  c->lr=0x8017C334u; f_800506C0(c); // 8017C330
  c->r[3]=c->r[28]+0x00000018u; // 8017C334
  c->lr=0x8017C33Cu; f_800506C0(c); // 8017C338
  W32(c->r[28]+0x00000024u,c->r[25]); // 8017C33C
  c->r[3]=c->r[28]+0x000000B0u; // 8017C340
  c->lr=0x8017C348u; f_800506C0(c); // 8017C344
  c->r[12]=R32(c->r[28]+0x00000000u); // 8017C348
  c->r[3]=c->r[28]|c->r[28]; // 8017C34C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8017C350
  c->ctr=c->r[12]; // 8017C354
  if (true) { c->lr=0x8017C35Cu; dispatch(c,c->ctr); } // 8017C358
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 8017C35C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C360
  if (!crb(c,2)) { goto L_8017C380; } // 8017C364
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 8017C368
  c->r[0]=0u+0x00000001u; // 8017C36C
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 8017C370
  c->r[3]=c->r[3]+0x00000001u; // 8017C374
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 8017C378
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 8017C37C
L_8017C380:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 8017C380
  c->r[5]=0u+0x806F0000u; // 8017C384
  c->r[5]=c->r[5]+0x000007F8u; // 8017C388
  c->r[0]=0u+0x00000032u; // 8017C38C
  c->r[4]=c->r[5]+0x00000024u; // 8017C390
  W32(c->r[28]+0x00000008u,c->r[3]); // 8017C394
  c->r[6]=0u+0x00000000u; // 8017C398
  c->r[3]=0u+0x00000000u; // 8017C39C
  W32(c->r[28]+0x00000000u,c->r[5]); // 8017C3A0
  W32(c->r[28]+0x00000004u,c->r[4]); // 8017C3A4
  c->ctr=c->r[0]; // 8017C3A8
L_8017C3AC:;
  c->r[4]=c->r[28]+c->r[3]; // 8017C3AC
  c->r[3]=c->r[3]+0x00000004u; // 8017C3B0
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 8017C3B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017C3AC; } // 8017C3B8
  c->r[3]=0u+0x806D0000u; // 8017C3BC
  c->r[7]=0u+0x00000000u; // 8017C3C0
  c->r[3]=c->r[3]+0x00003868u; // 8017C3C4
  c->r[0]=0u+0x0000000Au; // 8017C3C8
  c->r[4]=c->r[3]+0x00000024u; // 8017C3CC
  W32(c->r[28]+0x00000000u,c->r[3]); // 8017C3D0
  c->r[8]=0u+0x00000000u; // 8017C3D4
  c->r[3]=0u+0x00000000u; // 8017C3D8
  W32(c->r[28]+0x00000004u,c->r[4]); // 8017C3DC
  c->r[6]=0u+0xFFFFFFFFu; // 8017C3E0
  W32(c->r[26]+0x00000314u,c->r[7]); // 8017C3E4
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 8017C3E8
  W32(c->r[26]+0x00000054u,c->r[7]); // 8017C3EC
  W32(c->r[26]+0x00000310u,c->r[26]); // 8017C3F0
  c->ctr=c->r[0]; // 8017C3F4
L_8017C3F8:;
  c->r[5]=c->r[26]+c->r[3]; // 8017C3F8
  c->r[4]=c->r[26]+c->r[8]; // 8017C3FC
  W32(c->r[5]+0x00000068u,c->r[6]); // 8017C400
  c->r[8]=c->r[8]+0x00000001u; // 8017C404
  c->r[3]=c->r[3]+0x00000004u; // 8017C408
  W8(c->r[4]+0x00000090u,c->r[7]); // 8017C40C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017C3F8; } // 8017C410
  c->r[24]=c->r[26]+0x00000318u; // 8017C414
  c->r[3]=c->r[24]|c->r[24]; // 8017C418
  c->lr=0x8017C420u; f_800506C0(c); // 8017C41C
  cmps(c,0,(int32_t)c->r[24],0); // 8017C420
  c->r[3]=c->r[24]|c->r[24]; // 8017C424
  if (crb(c,2)) { goto L_8017C430; } // 8017C428
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 8017C42C
L_8017C430:;
  c->r[29]=0u+0x00000001u; // 8017C430
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017C434
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 8017C438
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 8017C43C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C440
  if (!crb(c,2)) { goto L_8017C484; } // 8017C444
  c->r[28]=0u+0x80750000u; // 8017C448
  c->r[3]=c->r[28]+0xFFFF816Cu; // 8017C44C
  c->lr=0x8017C454u; f_800506C0(c); // 8017C450
  c->r[6]=0u+0x806D0000u; // 8017C454
  c->r[4]=0u+0x80080000u; // 8017C458
  c->r[6]=c->r[6]+0x000038D8u; // 8017C45C
  c->r[3]=c->r[28]+0xFFFF816Cu; // 8017C460
  c->r[0]=c->r[6]+0x00000008u; // 8017C464
  c->r[5]=0u+0x80750000u; // 8017C468
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017C46C
  c->r[4]=c->r[4]+0xFFFF9844u; // 8017C470
  c->r[5]=c->r[5]+0x000049D8u; // 8017C474
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C478
  c->lr=0x8017C480u; f_803A92B8(c); // 8017C47C
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 8017C480
L_8017C484:;
  c->r[3]=0u+0x80750000u; // 8017C484
  c->r[5]=c->r[24]|c->r[24]; // 8017C488
  c->r[3]=c->r[3]+0xFFFF816Cu; // 8017C48C
  c->r[4]=c->r[3]|c->r[3]; // 8017C490
  c->lr=0x8017C498u; f_802DDCA8(c); // 8017C494
  c->r[3]=0u+0x806D0000u; // 8017C498
  c->r[0]=0u+0x00000000u; // 8017C49C
  c->r[3]=c->r[3]+0xFFFFD974u; // 8017C4A0
  c->r[5]=0u+0xFFFFFFFFu; // 8017C4A4
  c->r[4]=0u+0x00000001u; // 8017C4A8
  c->r[25]=c->r[26]+0x0000032Cu; // 8017C4AC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017C4B0
  c->r[3]=c->r[25]|c->r[25]; // 8017C4B4
  W32(c->r[26]+0x00000328u,c->r[5]); // 8017C4B8
  W32(c->r[26]+0x000000ECu,c->r[4]); // 8017C4BC
  W32(c->r[26]+0x00000054u,c->r[0]); // 8017C4C0
  W32(c->r[26]+0x00000314u,c->r[0]); // 8017C4C4
  c->lr=0x8017C4CCu; f_800506C0(c); // 8017C4C8
  cmps(c,0,(int32_t)c->r[25],0); // 8017C4CC
  c->r[3]=c->r[25]|c->r[25]; // 8017C4D0
  if (crb(c,2)) { goto L_8017C4DC; } // 8017C4D4
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 8017C4D8
L_8017C4DC:;
  c->r[28]=0u+0x00000001u; // 8017C4DC
  W32(c->r[25]+0x00000008u,c->r[3]); // 8017C4E0
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 8017C4E4
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 8017C4E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C4EC
  if (!crb(c,2)) { goto L_8017C530; } // 8017C4F0
  c->r[27]=0u+0x80730000u; // 8017C4F4
  c->r[3]=c->r[27]+0x000073A8u; // 8017C4F8
  c->lr=0x8017C500u; f_800506C0(c); // 8017C4FC
  c->r[6]=0u+0x806D0000u; // 8017C500
  c->r[4]=0u+0x80050000u; // 8017C504
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 8017C508
  c->r[3]=c->r[27]+0x000073A8u; // 8017C50C
  c->r[0]=c->r[6]+0x00000008u; // 8017C510
  c->r[5]=0u+0x80750000u; // 8017C514
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017C518
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 8017C51C
  c->r[5]=c->r[5]+0x000049CCu; // 8017C520
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C524
  c->lr=0x8017C52Cu; f_803A92B8(c); // 8017C528
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 8017C52C
L_8017C530:;
  c->r[3]=0u+0x80730000u; // 8017C530
  c->r[5]=c->r[25]|c->r[25]; // 8017C534
  c->r[3]=c->r[3]+0x000073A8u; // 8017C538
  c->r[4]=c->r[3]|c->r[3]; // 8017C53C
  c->lr=0x8017C544u; f_802DDCA8(c); // 8017C540
  c->r[25]=c->r[26]+0x0000033Cu; // 8017C544
  c->r[3]=c->r[25]|c->r[25]; // 8017C548
  c->lr=0x8017C550u; f_800506C0(c); // 8017C54C
  cmps(c,0,(int32_t)c->r[25],0); // 8017C550
  c->r[3]=c->r[25]|c->r[25]; // 8017C554
  if (crb(c,2)) { goto L_8017C560; } // 8017C558
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 8017C55C
L_8017C560:;
  c->r[28]=0u+0x00000001u; // 8017C560
  W32(c->r[25]+0x00000008u,c->r[3]); // 8017C564
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 8017C568
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 8017C56C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C570
  if (!crb(c,2)) { goto L_8017C5B4; } // 8017C574
  c->r[27]=0u+0x80750000u; // 8017C578
  c->r[3]=c->r[27]+0xFFFF8158u; // 8017C57C
  c->lr=0x8017C584u; f_800506C0(c); // 8017C580
  c->r[6]=0u+0x806D0000u; // 8017C584
  c->r[4]=0u+0x80080000u; // 8017C588
  c->r[6]=c->r[6]+0x000038F0u; // 8017C58C
  c->r[3]=c->r[27]+0xFFFF8158u; // 8017C590
  c->r[0]=c->r[6]+0x00000008u; // 8017C594
  c->r[5]=0u+0x80750000u; // 8017C598
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017C59C
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8017C5A0
  c->r[5]=c->r[5]+0x000049C0u; // 8017C5A4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C5A8
  c->lr=0x8017C5B0u; f_803A92B8(c); // 8017C5AC
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 8017C5B0
L_8017C5B4:;
  c->r[3]=0u+0x80750000u; // 8017C5B4
  c->r[5]=c->r[25]|c->r[25]; // 8017C5B8
  c->r[3]=c->r[3]+0xFFFF8158u; // 8017C5BC
  c->r[4]=c->r[3]|c->r[3]; // 8017C5C0
  c->lr=0x8017C5C8u; f_802DDCA8(c); // 8017C5C4
  c->r[3]=0u+0x806D0000u; // 8017C5C8
  W32(c->r[26]+0x00000054u,c->r[31]); // 8017C5CC
  c->r[3]=c->r[3]+0x00004AE8u; // 8017C5D0
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017C5D4
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 8017C5D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C5DC
  if (!crb(c,2)) { goto L_8017C5FC; } // 8017C5E0
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8017C5E4
  c->r[0]=0u+0x00000001u; // 8017C5E8
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 8017C5EC
  c->r[3]=c->r[3]+0x00000001u; // 8017C5F0
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8017C5F4
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 8017C5F8
L_8017C5FC:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 8017C5FC
  W32(c->r[26]+0x00000328u,c->r[0]); // 8017C600
  c->r[0]=R8(c->r[13]+0xFFFFCCECu); // 8017C604
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C608
  if (!crb(c,2)) { goto L_8017C628; } // 8017C60C
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 8017C610
  c->r[0]=0u+0x00000001u; // 8017C614
  W32(c->r[13]+0xFFFFCCE8u,c->r[3]); // 8017C618
  c->r[3]=c->r[3]+0x00000001u; // 8017C61C
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 8017C620
  W8(c->r[13]+0xFFFFCCECu,c->r[0]); // 8017C624
L_8017C628:;
  c->r[0]=R32(c->r[13]+0xFFFFCCE8u); // 8017C628
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 8017C62C
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 8017C630
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C634
  if (!crb(c,2)) { goto L_8017C654; } // 8017C638
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 8017C63C
  c->r[0]=0u+0x00000001u; // 8017C640
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 8017C644
  c->r[3]=c->r[3]+0x00000001u; // 8017C648
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 8017C64C
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 8017C650
L_8017C654:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 8017C654
  c->r[5]=0u+0x806D0000u; // 8017C658
  c->r[5]=c->r[5]+0xFFFFE468u; // 8017C65C
  W32(c->r[26]+0x00000350u,c->r[0]); // 8017C660
  c->r[3]=c->r[26]+0x000003B0u; // 8017C664
  c->r[4]=0u+0x00000000u; // 8017C668
  W32(c->r[26]+0x00000400u,c->r[5]); // 8017C66C
  c->r[5]=0u+0x00000050u; // 8017C670
  c->lr=0x8017C678u; f_800043EC(c); // 8017C674
  c->r[4]=0u+0x806D0000u; // 8017C678
  c->r[3]=c->r[26]+0x00000450u; // 8017C67C
  c->r[4]=c->r[4]+0xFFFFE170u; // 8017C680
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 8017C684
  c->r[0]=c->r[4]+0x00000044u; // 8017C688
  W32(c->r[26]+0x00000400u,c->r[0]); // 8017C68C
  c->lr=0x8017C694u; f_8007BDFC(c); // 8017C690
  c->r[3]=c->r[26]+0x000004C4u; // 8017C694
  c->lr=0x8017C69Cu; f_8007BDFC(c); // 8017C698
  c->r[3]=c->r[26]+0x00000538u; // 8017C69C
  c->r[4]=0u+0x00000000u; // 8017C6A0
  c->r[5]=0u+0x00000008u; // 8017C6A4
  c->lr=0x8017C6ACu; f_800043EC(c); // 8017C6A8
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C6AC
  cmps(c,0,(int32_t)c->r[24],0); // 8017C6B0
  if (crb(c,2)) { goto L_8017C6F8; } // 8017C6B4
  c->lr=0x8017C6BCu; f_8017CD00(c); // 8017C6B8
  c->r[27]=c->r[3]|c->r[3]; // 8017C6BC
  c->lr=0x8017C6C4u; f_8007BDCC(c); // 8017C6C0
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 8017C6C4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C6C8
  c->r[5]=0u+0x80180000u; // 8017C6CC
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017C6D0
  c->r[4]=c->r[24]+c->r[4]; // 8017C6D4
  c->r[5]=c->r[5]+0xFFFFCE58u; // 8017C6D8
  c->r[4]=c->r[4]+c->r[0]; // 8017C6DC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C6E0
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C6E4
  cmpu(c,0,c->r[0],0x0000000Cu); // 8017C6E8
  if (!crb(c,0)) { goto L_8017C6F8; } // 8017C6EC
  c->r[0]=0u+0x0000000Cu; // 8017C6F0
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C6F4
L_8017C6F8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C6F8
  cmps(c,0,(int32_t)c->r[24],0); // 8017C6FC
  if (crb(c,2)) { goto L_8017C768; } // 8017C700
  c->lr=0x8017C708u; f_8017CD00(c); // 8017C704
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 8017C708
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C70C
  if (!crb(c,2)) { goto L_8017C730; } // 8017C710
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C714
  c->r[0]=0u+0x00000001u; // 8017C718
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C71C
  c->r[4]=c->r[5]+0x00000001u; // 8017C720
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C724
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 8017C728
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 8017C72C
L_8017C730:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C730
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 8017C734
  c->r[5]=0u+0x80180000u; // 8017C738
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C73C
  c->r[4]=c->r[24]+c->r[4]; // 8017C740
  c->r[5]=c->r[5]+0xFFFFCE54u; // 8017C744
  c->r[4]=c->r[4]+c->r[0]; // 8017C748
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C74C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C750
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C754
  cmpu(c,0,c->r[0],0x00000018u); // 8017C758
  if (!crb(c,0)) { goto L_8017C768; } // 8017C75C
  c->r[0]=0u+0x00000018u; // 8017C760
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C764
L_8017C768:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C768
  cmps(c,0,(int32_t)c->r[24],0); // 8017C76C
  if (crb(c,2)) { goto L_8017C7D8; } // 8017C770
  c->lr=0x8017C778u; f_8017CD00(c); // 8017C774
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 8017C778
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C77C
  if (!crb(c,2)) { goto L_8017C7A0; } // 8017C780
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C784
  c->r[0]=0u+0x00000001u; // 8017C788
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C78C
  c->r[4]=c->r[5]+0x00000001u; // 8017C790
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C794
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 8017C798
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 8017C79C
L_8017C7A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C7A0
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8017C7A4
  c->r[5]=0u+0x80180000u; // 8017C7A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C7AC
  c->r[4]=c->r[24]+c->r[4]; // 8017C7B0
  c->r[5]=c->r[5]+0xFFFFCE50u; // 8017C7B4
  c->r[4]=c->r[4]+c->r[0]; // 8017C7B8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C7BC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C7C0
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C7C4
  cmpu(c,0,c->r[0],0x0000006Cu); // 8017C7C8
  if (!crb(c,0)) { goto L_8017C7D8; } // 8017C7CC
  c->r[0]=0u+0x0000006Cu; // 8017C7D0
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C7D4
L_8017C7D8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C7D8
  cmps(c,0,(int32_t)c->r[24],0); // 8017C7DC
  if (crb(c,2)) { goto L_8017C848; } // 8017C7E0
  c->lr=0x8017C7E8u; f_8017CD00(c); // 8017C7E4
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8017C7E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C7EC
  if (!crb(c,2)) { goto L_8017C810; } // 8017C7F0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C7F4
  c->r[0]=0u+0x00000001u; // 8017C7F8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C7FC
  c->r[4]=c->r[5]+0x00000001u; // 8017C800
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C804
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8017C808
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 8017C80C
L_8017C810:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C810
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 8017C814
  c->r[5]=0u+0x80180000u; // 8017C818
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C81C
  c->r[4]=c->r[24]+c->r[4]; // 8017C820
  c->r[5]=c->r[5]+0xFFFFCE4Cu; // 8017C824
  c->r[4]=c->r[4]+c->r[0]; // 8017C828
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C82C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C830
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C834
  cmpu(c,0,c->r[0],0x0000002Cu); // 8017C838
  if (!crb(c,0)) { goto L_8017C848; } // 8017C83C
  c->r[0]=0u+0x0000002Cu; // 8017C840
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C844
L_8017C848:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C848
  cmps(c,0,(int32_t)c->r[24],0); // 8017C84C
  if (crb(c,2)) { goto L_8017C8B8; } // 8017C850
  c->lr=0x8017C858u; f_8017CD00(c); // 8017C854
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 8017C858
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C85C
  if (!crb(c,2)) { goto L_8017C880; } // 8017C860
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C864
  c->r[0]=0u+0x00000001u; // 8017C868
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C86C
  c->r[4]=c->r[5]+0x00000001u; // 8017C870
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C874
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 8017C878
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 8017C87C
L_8017C880:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C880
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 8017C884
  c->r[5]=0u+0x80180000u; // 8017C888
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C88C
  c->r[4]=c->r[24]+c->r[4]; // 8017C890
  c->r[5]=c->r[5]+0xFFFFCE48u; // 8017C894
  c->r[4]=c->r[4]+c->r[0]; // 8017C898
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C89C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C8A0
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C8A4
  cmpu(c,0,c->r[0],0x00000010u); // 8017C8A8
  if (!crb(c,0)) { goto L_8017C8B8; } // 8017C8AC
  c->r[0]=0u+0x00000010u; // 8017C8B0
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C8B4
L_8017C8B8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C8B8
  cmps(c,0,(int32_t)c->r[24],0); // 8017C8BC
  if (crb(c,2)) { goto L_8017C928; } // 8017C8C0
  c->lr=0x8017C8C8u; f_8017CD00(c); // 8017C8C4
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 8017C8C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C8CC
  if (!crb(c,2)) { goto L_8017C8F0; } // 8017C8D0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C8D4
  c->r[0]=0u+0x00000001u; // 8017C8D8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C8DC
  c->r[4]=c->r[5]+0x00000001u; // 8017C8E0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C8E4
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 8017C8E8
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 8017C8EC
L_8017C8F0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C8F0
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 8017C8F4
  c->r[5]=0u+0x80180000u; // 8017C8F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C8FC
  c->r[4]=c->r[24]+c->r[4]; // 8017C900
  c->r[5]=c->r[5]+0xFFFFCE44u; // 8017C904
  c->r[4]=c->r[4]+c->r[0]; // 8017C908
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C90C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C910
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C914
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017C918
  if (!crb(c,0)) { goto L_8017C928; } // 8017C91C
  c->r[0]=0u+0x0000005Cu; // 8017C920
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C924
L_8017C928:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C928
  cmps(c,0,(int32_t)c->r[24],0); // 8017C92C
  if (crb(c,2)) { goto L_8017C998; } // 8017C930
  c->lr=0x8017C938u; f_8017CD00(c); // 8017C934
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8017C938
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C93C
  if (!crb(c,2)) { goto L_8017C960; } // 8017C940
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C944
  c->r[0]=0u+0x00000001u; // 8017C948
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C94C
  c->r[4]=c->r[5]+0x00000001u; // 8017C950
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C954
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 8017C958
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 8017C95C
L_8017C960:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C960
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 8017C964
  c->r[5]=0u+0x80180000u; // 8017C968
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C96C
  c->r[4]=c->r[24]+c->r[4]; // 8017C970
  c->r[5]=c->r[5]+0xFFFFCE40u; // 8017C974
  c->r[4]=c->r[4]+c->r[0]; // 8017C978
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C97C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C980
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C984
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017C988
  if (!crb(c,0)) { goto L_8017C998; } // 8017C98C
  c->r[0]=0u+0x0000005Cu; // 8017C990
  W32(c->r[24]+c->r[3],c->r[0]); // 8017C994
L_8017C998:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017C998
  cmps(c,0,(int32_t)c->r[24],0); // 8017C99C
  if (crb(c,2)) { goto L_8017CA08; } // 8017C9A0
  c->lr=0x8017C9A8u; f_8017CD00(c); // 8017C9A4
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 8017C9A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017C9AC
  if (!crb(c,2)) { goto L_8017C9D0; } // 8017C9B0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017C9B4
  c->r[0]=0u+0x00000001u; // 8017C9B8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017C9BC
  c->r[4]=c->r[5]+0x00000001u; // 8017C9C0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017C9C4
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 8017C9C8
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 8017C9CC
L_8017C9D0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017C9D0
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 8017C9D4
  c->r[5]=0u+0x80180000u; // 8017C9D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017C9DC
  c->r[4]=c->r[24]+c->r[4]; // 8017C9E0
  c->r[5]=c->r[5]+0xFFFFCE3Cu; // 8017C9E4
  c->r[4]=c->r[4]+c->r[0]; // 8017C9E8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017C9EC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017C9F0
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017C9F4
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017C9F8
  if (!crb(c,0)) { goto L_8017CA08; } // 8017C9FC
  c->r[0]=0u+0x0000005Cu; // 8017CA00
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CA04
L_8017CA08:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8017CA08
  cmps(c,0,(int32_t)c->r[24],0); // 8017CA0C
  if (crb(c,2)) { goto L_8017CA78; } // 8017CA10
  c->lr=0x8017CA18u; f_8017CD00(c); // 8017CA14
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 8017CA18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CA1C
  if (!crb(c,2)) { goto L_8017CA40; } // 8017CA20
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017CA24
  c->r[0]=0u+0x00000001u; // 8017CA28
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017CA2C
  c->r[4]=c->r[5]+0x00000001u; // 8017CA30
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017CA34
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 8017CA38
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 8017CA3C
L_8017CA40:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017CA40
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 8017CA44
  c->r[5]=0u+0x80180000u; // 8017CA48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017CA4C
  c->r[4]=c->r[24]+c->r[4]; // 8017CA50
  c->r[5]=c->r[5]+0xFFFFCE38u; // 8017CA54
  c->r[4]=c->r[4]+c->r[0]; // 8017CA58
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CA5C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CA60
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CA64
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017CA68
  if (!crb(c,0)) { goto L_8017CA78; } // 8017CA6C
  c->r[0]=0u+0x0000005Cu; // 8017CA70
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CA74
L_8017CA78:;
  c->r[3]=c->r[26]|c->r[26]; // 8017CA78
  c->lr=0x8017CA80u; f_8005BBF0(c); // 8017CA7C
  c->r[5]=0u+0x806E0000u; // 8017CA80
  c->r[3]=c->r[26]+0x000005C4u; // 8017CA84
  c->r[5]=c->r[5]+0xFFFFFF68u; // 8017CA88
  W32(c->r[26]+0x0000001Cu,c->r[5]); // 8017CA8C
  c->r[4]=c->r[5]+0x00000044u; // 8017CA90
  c->r[0]=c->r[5]+0x000001F0u; // 8017CA94
  W32(c->r[26]+0x00000400u,c->r[4]); // 8017CA98
  W32(c->r[26]+0x000005C0u,c->r[0]); // 8017CA9C
  c->lr=0x8017CAA4u; f_800E1E14(c); // 8017CAA0
  c->r[3]=c->r[26]+0x0000067Cu; // 8017CAA4
  c->lr=0x8017CAACu; f_80258690(c); // 8017CAA8
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CAAC
  cmps(c,0,(int32_t)c->r[24],0); // 8017CAB0
  if (crb(c,2)) { goto L_8017CB1C; } // 8017CAB4
  c->lr=0x8017CABCu; f_8017CD00(c); // 8017CAB8
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 8017CABC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CAC0
  if (!crb(c,2)) { goto L_8017CAE4; } // 8017CAC4
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8017CAC8
  c->r[0]=0u+0x00000001u; // 8017CACC
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 8017CAD0
  c->r[4]=c->r[5]+0x00000001u; // 8017CAD4
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8017CAD8
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 8017CADC
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 8017CAE0
L_8017CAE4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8017CAE4
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8017CAE8
  c->r[5]=0u+0x80180000u; // 8017CAEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017CAF0
  c->r[4]=c->r[24]+c->r[4]; // 8017CAF4
  c->r[5]=c->r[5]+0xFFFFCE34u; // 8017CAF8
  c->r[4]=c->r[4]+c->r[0]; // 8017CAFC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CB00
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CB04
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CB08
  cmpu(c,0,c->r[0],0x00000010u); // 8017CB0C
  if (!crb(c,0)) { goto L_8017CB1C; } // 8017CB10
  c->r[0]=0u+0x00000010u; // 8017CB14
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CB18
L_8017CB1C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CB1C
  cmps(c,0,(int32_t)c->r[24],0); // 8017CB20
  if (crb(c,2)) { goto L_8017CB68; } // 8017CB24
  c->lr=0x8017CB2Cu; f_8017CD00(c); // 8017CB28
  c->r[27]=c->r[3]|c->r[3]; // 8017CB2C
  c->lr=0x8017CB34u; f_8017CE04(c); // 8017CB30
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CB34
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CB38
  c->r[5]=0u+0x80180000u; // 8017CB3C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CB40
  c->r[4]=c->r[24]+c->r[4]; // 8017CB44
  c->r[5]=c->r[5]+0xFFFFCE00u; // 8017CB48
  c->r[4]=c->r[4]+c->r[0]; // 8017CB4C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CB50
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CB54
  cmpu(c,0,c->r[0],0x00000010u); // 8017CB58
  if (!crb(c,0)) { goto L_8017CB68; } // 8017CB5C
  c->r[0]=0u+0x00000010u; // 8017CB60
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CB64
L_8017CB68:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CB68
  cmps(c,0,(int32_t)c->r[24],0); // 8017CB6C
  if (crb(c,2)) { goto L_8017CBB4; } // 8017CB70
  c->lr=0x8017CB78u; f_8017CD00(c); // 8017CB74
  c->r[27]=c->r[3]|c->r[3]; // 8017CB78
  c->lr=0x8017CB80u; f_8017CDD0(c); // 8017CB7C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CB80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CB84
  c->r[5]=0u+0x80180000u; // 8017CB88
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CB8C
  c->r[4]=c->r[24]+c->r[4]; // 8017CB90
  c->r[5]=c->r[5]+0xFFFFCDCCu; // 8017CB94
  c->r[4]=c->r[4]+c->r[0]; // 8017CB98
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CB9C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CBA0
  cmpu(c,0,c->r[0],0x00000010u); // 8017CBA4
  if (!crb(c,0)) { goto L_8017CBB4; } // 8017CBA8
  c->r[0]=0u+0x00000010u; // 8017CBAC
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CBB0
L_8017CBB4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CBB4
  cmps(c,0,(int32_t)c->r[24],0); // 8017CBB8
  if (crb(c,2)) { goto L_8017CC00; } // 8017CBBC
  c->lr=0x8017CBC4u; f_8017CD00(c); // 8017CBC0
  c->r[27]=c->r[3]|c->r[3]; // 8017CBC4
  c->lr=0x8017CBCCu; f_8017CD9C(c); // 8017CBC8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CBCC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CBD0
  c->r[5]=0u+0x80180000u; // 8017CBD4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CBD8
  c->r[4]=c->r[24]+c->r[4]; // 8017CBDC
  c->r[5]=c->r[5]+0xFFFFCD98u; // 8017CBE0
  c->r[4]=c->r[4]+c->r[0]; // 8017CBE4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CBE8
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CBEC
  cmpu(c,0,c->r[0],0x00000010u); // 8017CBF0
  if (!crb(c,0)) { goto L_8017CC00; } // 8017CBF4
  c->r[0]=0u+0x00000010u; // 8017CBF8
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CBFC
L_8017CC00:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CC00
  cmps(c,0,(int32_t)c->r[24],0); // 8017CC04
  if (crb(c,2)) { goto L_8017CC4C; } // 8017CC08
  c->lr=0x8017CC10u; f_8017CD00(c); // 8017CC0C
  c->r[27]=c->r[3]|c->r[3]; // 8017CC10
  c->lr=0x8017CC18u; f_8017CD68(c); // 8017CC14
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CC18
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CC1C
  c->r[5]=0u+0x80180000u; // 8017CC20
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CC24
  c->r[4]=c->r[24]+c->r[4]; // 8017CC28
  c->r[5]=c->r[5]+0xFFFFCD64u; // 8017CC2C
  c->r[4]=c->r[4]+c->r[0]; // 8017CC30
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CC34
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CC38
  cmpu(c,0,c->r[0],0x00000010u); // 8017CC3C
  if (!crb(c,0)) { goto L_8017CC4C; } // 8017CC40
  c->r[0]=0u+0x00000010u; // 8017CC44
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CC48
L_8017CC4C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CC4C
  cmps(c,0,(int32_t)c->r[24],0); // 8017CC50
  if (crb(c,2)) { goto L_8017CC98; } // 8017CC54
  c->lr=0x8017CC5Cu; f_8017CD00(c); // 8017CC58
  c->r[27]=c->r[3]|c->r[3]; // 8017CC5C
  c->lr=0x8017CC64u; f_8017CD34(c); // 8017CC60
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CC64
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CC68
  c->r[5]=0u+0x80180000u; // 8017CC6C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CC70
  c->r[4]=c->r[24]+c->r[4]; // 8017CC74
  c->r[5]=c->r[5]+0xFFFFCD30u; // 8017CC78
  c->r[4]=c->r[4]+c->r[0]; // 8017CC7C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CC80
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CC84
  cmpu(c,0,c->r[0],0x00000010u); // 8017CC88
  if (!crb(c,0)) { goto L_8017CC98; } // 8017CC8C
  c->r[0]=0u+0x00000010u; // 8017CC90
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CC94
L_8017CC98:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017CC98
  cmps(c,0,(int32_t)c->r[24],0); // 8017CC9C
  if (crb(c,2)) { goto L_8017CCE4; } // 8017CCA0
  c->lr=0x8017CCA8u; f_8017CD00(c); // 8017CCA4
  c->r[27]=c->r[3]|c->r[3]; // 8017CCA8
  c->lr=0x8017CCB0u; f_80062DCC(c); // 8017CCAC
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017CCB0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017CCB4
  c->r[5]=0u+0x80180000u; // 8017CCB8
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017CCBC
  c->r[4]=c->r[24]+c->r[4]; // 8017CCC0
  c->r[5]=c->r[5]+0xFFFFCCFCu; // 8017CCC4
  c->r[4]=c->r[4]+c->r[0]; // 8017CCC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017CCCC
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017CCD0
  cmpu(c,0,c->r[0],0x00000010u); // 8017CCD4
  if (!crb(c,0)) { goto L_8017CCE4; } // 8017CCD8
  c->r[0]=0u+0x00000010u; // 8017CCDC
  W32(c->r[24]+c->r[3],c->r[0]); // 8017CCE0
L_8017CCE4:;
  c->r[3]=c->r[26]|c->r[26]; // 8017CCE4
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017CCE8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017CCEC
  c->lr=c->r[0]; // 8017CCF0
  c->r[1]=c->r[1]+0x00000040u; // 8017CCF4
  return; // 8017CCF8
}

// fn_8017CCFC
void f_8017CCFC(Ctx* __restrict c) {
  trace_call(0x8017CCFCu);
  f_8017E2D8(c); return; // 8017CCFC
}

// fn_8017CD00
void f_8017CD00(Ctx* __restrict c) {
  trace_call(0x8017CD00u);
  c->r[0]=R8(c->r[13]+0xFFFFCCE4u); // 8017CD00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CD04
  if (!crb(c,2)) { goto L_8017CD28; } // 8017CD08
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8017CD0C
  c->r[0]=0u+0x00000001u; // 8017CD10
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 8017CD14
  c->r[3]=c->r[4]+0x00000001u; // 8017CD18
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8017CD1C
  W32(c->r[13]+0xFFFFCCE0u,c->r[4]); // 8017CD20
  W8(c->r[13]+0xFFFFCCE4u,c->r[0]); // 8017CD24
L_8017CD28:;
  c->r[3]=R32(c->r[13]+0xFFFFCCE0u); // 8017CD28
  return; // 8017CD2C
}

// fn_8017CD30
void f_8017CD30(Ctx* __restrict c) {
  trace_call(0x8017CD30u);
  f_8017E0A0(c); return; // 8017CD30
}

// fn_8017CD34
void f_8017CD34(Ctx* __restrict c) {
  trace_call(0x8017CD34u);
  c->r[0]=R8(c->r[13]+0xFFFFCCDCu); // 8017CD34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CD38
  if (!crb(c,2)) { goto L_8017CD5C; } // 8017CD3C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017CD40
  c->r[0]=0u+0x00000001u; // 8017CD44
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017CD48
  c->r[3]=c->r[4]+0x00000001u; // 8017CD4C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017CD50
  W32(c->r[13]+0xFFFFCCD8u,c->r[4]); // 8017CD54
  W8(c->r[13]+0xFFFFCCDCu,c->r[0]); // 8017CD58
L_8017CD5C:;
  c->r[3]=R32(c->r[13]+0xFFFFCCD8u); // 8017CD5C
  return; // 8017CD60
}

// fn_8017CD64
void f_8017CD64(Ctx* __restrict c) {
  trace_call(0x8017CD64u);
  f_8017DF18(c); return; // 8017CD64
}

// fn_8017CD68
void f_8017CD68(Ctx* __restrict c) {
  trace_call(0x8017CD68u);
  c->r[0]=R8(c->r[13]+0xFFFFCCD4u); // 8017CD68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CD6C
  if (!crb(c,2)) { goto L_8017CD90; } // 8017CD70
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017CD74
  c->r[0]=0u+0x00000001u; // 8017CD78
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017CD7C
  c->r[3]=c->r[4]+0x00000001u; // 8017CD80
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017CD84
  W32(c->r[13]+0xFFFFCCD0u,c->r[4]); // 8017CD88
  W8(c->r[13]+0xFFFFCCD4u,c->r[0]); // 8017CD8C
L_8017CD90:;
  c->r[3]=R32(c->r[13]+0xFFFFCCD0u); // 8017CD90
  return; // 8017CD94
}

// fn_8017CD98
void f_8017CD98(Ctx* __restrict c) {
  trace_call(0x8017CD98u);
  f_8017DC74(c); return; // 8017CD98
}

// fn_8017CD9C
void f_8017CD9C(Ctx* __restrict c) {
  trace_call(0x8017CD9Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCCCCu); // 8017CD9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CDA0
  if (!crb(c,2)) { goto L_8017CDC4; } // 8017CDA4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017CDA8
  c->r[0]=0u+0x00000001u; // 8017CDAC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017CDB0
  c->r[3]=c->r[4]+0x00000001u; // 8017CDB4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017CDB8
  W32(c->r[13]+0xFFFFCCC8u,c->r[4]); // 8017CDBC
  W8(c->r[13]+0xFFFFCCCCu,c->r[0]); // 8017CDC0
L_8017CDC4:;
  c->r[3]=R32(c->r[13]+0xFFFFCCC8u); // 8017CDC4
  return; // 8017CDC8
}

// fn_8017CDCC
void f_8017CDCC(Ctx* __restrict c) {
  trace_call(0x8017CDCCu);
  f_8017D940(c); return; // 8017CDCC
}

// fn_8017CDD0
void f_8017CDD0(Ctx* __restrict c) {
  trace_call(0x8017CDD0u);
  c->r[0]=R8(c->r[13]+0xFFFFCCC4u); // 8017CDD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CDD4
  if (!crb(c,2)) { goto L_8017CDF8; } // 8017CDD8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017CDDC
  c->r[0]=0u+0x00000001u; // 8017CDE0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017CDE4
  c->r[3]=c->r[4]+0x00000001u; // 8017CDE8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017CDEC
  W32(c->r[13]+0xFFFFCCC0u,c->r[4]); // 8017CDF0
  W8(c->r[13]+0xFFFFCCC4u,c->r[0]); // 8017CDF4
L_8017CDF8:;
  c->r[3]=R32(c->r[13]+0xFFFFCCC0u); // 8017CDF8
  return; // 8017CDFC
}

// fn_8017CE00
void f_8017CE00(Ctx* __restrict c) {
  trace_call(0x8017CE00u);
  f_8017D718(c); return; // 8017CE00
}

// fn_8017CE04
void f_8017CE04(Ctx* __restrict c) {
  trace_call(0x8017CE04u);
  c->r[0]=R8(c->r[13]+0xFFFFCCBCu); // 8017CE04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017CE08
  if (!crb(c,2)) { goto L_8017CE2C; } // 8017CE0C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017CE10
  c->r[0]=0u+0x00000001u; // 8017CE14
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017CE18
  c->r[3]=c->r[4]+0x00000001u; // 8017CE1C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017CE20
  W32(c->r[13]+0xFFFFCCB8u,c->r[4]); // 8017CE24
  W8(c->r[13]+0xFFFFCCBCu,c->r[0]); // 8017CE28
L_8017CE2C:;
  c->r[3]=R32(c->r[13]+0xFFFFCCB8u); // 8017CE2C
  return; // 8017CE30
}

// fn_8017CE34
void f_8017CE34(Ctx* __restrict c) {
  trace_call(0x8017CE34u);
  f_8017D658(c); return; // 8017CE34
}

// fn_8017CE38
void f_8017CE38(Ctx* __restrict c) {
  trace_call(0x8017CE38u);
  f_8005E338(c); return; // 8017CE38
}

// fn_8017CE3C
void f_8017CE3C(Ctx* __restrict c) {
  trace_call(0x8017CE3Cu);
  f_8005E324(c); return; // 8017CE3C
}

// fn_8017CE40
void f_8017CE40(Ctx* __restrict c) {
  trace_call(0x8017CE40u);
  f_8005E310(c); return; // 8017CE40
}

// fn_8017CE44
void f_8017CE44(Ctx* __restrict c) {
  trace_call(0x8017CE44u);
  f_8005E2FC(c); return; // 8017CE44
}

// fn_8017CE48
void f_8017CE48(Ctx* __restrict c) {
  trace_call(0x8017CE48u);
  f_8005E34C(c); return; // 8017CE48
}

// fn_8017CE4C
void f_8017CE4C(Ctx* __restrict c) {
  trace_call(0x8017CE4Cu);
  f_8005E360(c); return; // 8017CE4C
}

// fn_8017CE50
void f_8017CE50(Ctx* __restrict c) {
  trace_call(0x8017CE50u);
  f_8005D47C(c); return; // 8017CE50
}

// fn_8017CE54
void f_8017CE54(Ctx* __restrict c) {
  trace_call(0x8017CE54u);
  f_8005D468(c); return; // 8017CE54
}

// fn_8017CE58
void f_8017CE58(Ctx* __restrict c) {
  trace_call(0x8017CE58u);
  f_8005BEDC(c); return; // 8017CE58
}

// fn_8017CE5C
void f_8017CE5C(Ctx* __restrict c) {
  trace_call(0x8017CE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CE5C
  c->r[0]=c->lr; // 8017CE60
  cmps(c,0,(int32_t)c->r[3],0); // 8017CE64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017CE68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017CE6C
  c->r[30]=c->r[3]|c->r[3]; // 8017CE70
  c->r[31]=c->r[4]|c->r[4]; // 8017CE74
  if (crb(c,2)) { goto L_8017CEB8; } // 8017CE78
  c->r[4]=0u+0xFFFFFFFFu; // 8017CE7C
  c->r[3]=c->r[3]+0x0000067Cu; // 8017CE80
  c->lr=0x8017CE88u; f_80132EC0(c); // 8017CE84
  c->r[3]=c->r[30]+0x000005C4u; // 8017CE88
  c->r[4]=0u+0xFFFFFFFFu; // 8017CE8C
  c->lr=0x8017CE94u; f_800E1E78(c); // 8017CE90
  cmps(c,0,(int32_t)c->r[30],0); // 8017CE94
  if (crb(c,2)) { goto L_8017CEA8; } // 8017CE98
  c->r[3]=c->r[30]|c->r[30]; // 8017CE9C
  c->r[4]=0u+0x00000000u; // 8017CEA0
  c->lr=0x8017CEA8u; f_8005BD00(c); // 8017CEA4
L_8017CEA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017CEA8
  if (!crb(c,1)) { goto L_8017CEB8; } // 8017CEAC
  c->r[3]=c->r[30]|c->r[30]; // 8017CEB0
  c->lr=0x8017CEB8u; f_8005328C(c); // 8017CEB4
L_8017CEB8:;
  c->r[3]=c->r[30]|c->r[30]; // 8017CEB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017CEBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017CEC0
  c->lr=c->r[0]; // 8017CEC4
  c->r[1]=c->r[1]+0x00000010u; // 8017CEC8
  return; // 8017CECC
}

// fn_8017CED0
void f_8017CED0(Ctx* __restrict c) {
  trace_call(0x8017CED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CED0
  c->r[0]=c->lr; // 8017CED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017CED8
  c->r[11]=c->r[1]+0x00000020u; // 8017CEDC
  c->lr=0x8017CEE4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017CEE0
  c->r[29]=c->r[3]|c->r[3]; // 8017CEE4
  c->r[4]=0u+0x00000000u; // 8017CEE8
  c->lr=0x8017CEF0u; f_8005E814(c); // 8017CEEC
  c->r[3]=R32(c->r[29]+0x00000410u); // 8017CEF0
  c->r[30]=0u+0x80690000u; // 8017CEF4
  c->r[30]=c->r[30]+0x00001820u; // 8017CEF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017CEFC
  c->r[4]=c->r[30]+0x00000001u; // 8017CF00
  c->r[12]=R32(c->r[12]+0x00000060u); // 8017CF04
  c->ctr=c->r[12]; // 8017CF08
  if (true) { c->lr=0x8017CF10u; dispatch(c,c->ctr); } // 8017CF0C
  c->r[3]=R32(c->r[29]+0x00000414u); // 8017CF10
  c->r[4]=c->r[30]+0x00000001u; // 8017CF14
  c->lr=0x8017CF1Cu; f_8034F3E0(c); // 8017CF18
  c->r[3]=c->r[29]+0x000005C4u; // 8017CF1C
  c->r[4]=c->r[29]+0x000000FCu; // 8017CF20
  c->lr=0x8017CF28u; f_800E2088(c); // 8017CF24
  c->r[3]=c->r[29]|c->r[29]; // 8017CF28
  c->lr=0x8017CF30u; f_8006481C(c); // 8017CF2C
  c->r[31]=c->r[3]|c->r[3]; // 8017CF30
  c->r[3]=c->r[29]|c->r[29]; // 8017CF34
  c->lr=0x8017CF3Cu; f_80064AFC(c); // 8017CF38
  c->r[4]=c->r[3]|c->r[3]; // 8017CF3C
  c->r[5]=c->r[31]|c->r[31]; // 8017CF40
  c->r[3]=c->r[29]+0x0000067Cu; // 8017CF44
  c->r[6]=c->r[29]+0x000005C0u; // 8017CF48
  c->lr=0x8017CF50u; f_80258718(c); // 8017CF4C
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017CF50
  c->r[3]=c->r[29]+0x000005C4u; // 8017CF54
  {uint32_t ea=c->r[29]+0x00000674u; WF32(ea,c->f[1]);} // 8017CF58
  c->lr=0x8017CF60u; f_800E21B4(c); // 8017CF5C
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017CF60
  c->r[3]=c->r[29]+0x000005C4u; // 8017CF64
  c->r[4]=0u+0x00000001u; // 8017CF68
  c->lr=0x8017CF70u; f_800E21E8(c); // 8017CF6C
  c->r[4]=0u+0x00010000u; // 8017CF70
  c->r[3]=c->r[29]|c->r[29]; // 8017CF74
  c->r[4]=c->r[4]+0xFFFFDAC0u; // 8017CF78
  c->r[5]=0u+0x00000001u; // 8017CF7C
  c->lr=0x8017CF84u; f_80064744(c); // 8017CF80
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017CF84
  c->r[3]=c->r[29]+0x000005C4u; // 8017CF88
  c->r[4]=c->r[30]+0x00000007u; // 8017CF8C
  c->r[5]=0u+0x00000000u; // 8017CF90
  c->lr=0x8017CF98u; f_800E2300(c); // 8017CF94
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017CF98
  c->r[3]=c->r[29]|c->r[29]; // 8017CF9C
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017CFA0
  c->r[6]=c->r[30]+0x00000018u; // 8017CFA4
  c->r[4]=0u+0x00000002u; // 8017CFA8
  c->r[5]=0u+0x00000000u; // 8017CFAC
  c->lr=0x8017CFB4u; f_80064968(c); // 8017CFB0
  c->r[3]=c->r[29]+0x000000FCu; // 8017CFB4
  c->r[4]=0u+0x00000000u; // 8017CFB8
  c->lr=0x8017CFC0u; f_802E6678(c); // 8017CFBC
  c->r[4]=R32(c->r[29]+0x0000040Cu); // 8017CFC0
  c->r[0]=0u+0x00000001u; // 8017CFC4
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017CFC8
  c->r[3]=c->r[29]|c->r[29]; // 8017CFCC
  W8(c->r[4]+0x00000075u,c->r[0]); // 8017CFD0
  c->r[4]=0u+0x00000038u; // 8017CFD4
  c->r[5]=0u+0x00000001u; // 8017CFD8
  {uint32_t ea=c->r[29]+0x0000066Cu; WF32(ea,c->f[0]);} // 8017CFDC
  W8(c->r[29]+0x00000784u,c->r[0]); // 8017CFE0
  c->lr=0x8017CFE8u; f_800D5F20(c); // 8017CFE4
  c->r[11]=c->r[1]+0x00000020u; // 8017CFE8
  c->lr=0x8017CFF0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017CFEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017CFF0
  c->lr=c->r[0]; // 8017CFF4
  c->r[1]=c->r[1]+0x00000020u; // 8017CFF8
  return; // 8017CFFC
}

// fn_8017D000
void f_8017D000(Ctx* __restrict c) {
  trace_call(0x8017D000u);
  c->r[3]=c->r[3]+0x000005C4u; // 8017D000
  f_800E1F38(c); return; // 8017D004
}

// fn_8017D008
void f_8017D008(Ctx* __restrict c) {
  trace_call(0x8017D008u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D008
  c->r[0]=c->lr; // 8017D00C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017D010
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8017D014
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8017D018
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8017D01C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8017D020
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8017D024
  W32(c->r[1]+0x00000038u,c->r[30]); // 8017D028
  c->r[30]=c->r[3]|c->r[3]; // 8017D02C
  c->lr=0x8017D034u; f_8017D0FC(c); // 8017D030
  {uint32_t ea=c->r[2]+0xFFFFBDC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D034
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D038
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8017D03C
  fcmp(c,0,c->f[1],c->f[0]); // 8017D040
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017D044
  if (!crb(c,2)) { goto L_8017D054; } // 8017D048
  c->r[0]=0u+0x00000000u; // 8017D04C
  W8(c->r[30]+0x00000784u,c->r[0]); // 8017D050
L_8017D054:;
  c->r[31]=0u+0x00000000u; // 8017D054
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8017D058
  c->r[3]=c->r[1]+0x0000000Cu; // 8017D05C
  c->lr=0x8017D064u; f_800462D8(c); // 8017D060
  c->r[4]=R8(c->r[30]+0x00000784u); // 8017D064
  c->lr=0x8017D06Cu; f_800EA1A0(c); // 8017D068
  c->r[5]=R32(c->r[30]+0x00000444u); // 8017D06C
  c->r[3]=c->r[1]+0x00000008u; // 8017D070
  c->r[4]=R32(c->r[30]+0x0000044Cu); // 8017D074
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017D078
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8017D07C
  W8(c->r[1]+0x00000008u,c->r[31]); // 8017D080
  c->lr=0x8017D088u; f_800462D8(c); // 8017D084
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 8017D088
  c->r[4]=0u+0x43300000u; // 8017D08C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 8017D090
  W32(c->r[1]+0x00000018u,c->r[4]); // 8017D094
  {uint32_t ea=c->r[2]+0xFFFFBDD0u; c->f[2]=RF64(ea);} // 8017D098
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 8017D09C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8017D0A0
  c->r[5]=R32(c->r[1]+0x00000014u); // 8017D0A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017D0A8
  c->r[5]=c->r[5]^0x80000000u; // 8017D0AC
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8017D0B0
  c->r[0]=c->r[0]^0x80000000u; // 8017D0B4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8017D0B8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017D0BC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8017D0C0
  W32(c->r[1]+0x00000028u,c->r[4]); // 8017D0C4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8017D0C8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8017D0CC
  c->lr=0x8017D0D4u; f_800EA1BC(c); // 8017D0D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8017D0D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8017D0D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8017D0DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8017D0E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8017D0E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8017D0E8
  c->r[30]=R32(c->r[1]+0x00000038u); // 8017D0EC
  c->lr=c->r[0]; // 8017D0F0
  c->r[1]=c->r[1]+0x00000060u; // 8017D0F4
  return; // 8017D0F8
}

// fn_8017D0FC
void f_8017D0FC(Ctx* __restrict c) {
  trace_call(0x8017D0FCu);
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 8017D0FC
  c->r[3]=R32(c->r[3]+0x00000444u); // 8017D100
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017D104
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D108
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D10C
  fcmp(c,0,c->f[3],c->f[0]); // 8017D110
  if (!crb(c,0)) { goto L_8017D120; } // 8017D114
  c->f[3]=c->f[0]; // 8017D118
  goto L_8017D12C; // 8017D11C
L_8017D120:;
  fcmp(c,0,c->f[3],c->f[2]); // 8017D120
  if (!crb(c,1)) { goto L_8017D12C; } // 8017D124
  c->f[3]=c->f[2]; // 8017D128
L_8017D12C:;
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D12C
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D130
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8017D134
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8017D138
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8017D13C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8017D140
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8017D144
  return; // 8017D148
}

// fn_8017D14C
void f_8017D14C(Ctx* __restrict c) {
  trace_call(0x8017D14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D14C
  c->r[0]=c->lr; // 8017D150
  c->r[4]=0u+0x80690000u; // 8017D154
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017D158
  c->r[4]=c->r[4]+0x00001820u; // 8017D15C
  c->r[4]=c->r[4]+0x00000030u; // 8017D160
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8017D164
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8017D168
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017D16C
  c->r[30]=c->r[3]|c->r[3]; // 8017D170
  c->r[3]=c->r[3]+0x0000067Cu; // 8017D174
  c->lr=0x8017D17Cu; f_80258A74(c); // 8017D178
  c->r[3]=R32(c->r[30]+0x00000354u); // 8017D17C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D180
  if (!crb(c,2)) { goto L_8017D190; } // 8017D184
  c->r[31]=0u+0x00000000u; // 8017D188
  goto L_8017D19C; // 8017D18C
L_8017D190:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017D190
  c->r[0]=sraw(c,c->r[3],31); // 8017D194
  c->r[31]=c->r[3]&~c->r[0]; // 8017D198
L_8017D19C:;
  c->r[3]=R32(c->r[30]+0x00000404u); // 8017D19C
  c->lr=0x8017D1A4u; f_802EA4B0(c); // 8017D1A0
  c->f[30]=c->f[1]; // 8017D1A4
  c->r[3]=c->r[30]+0x000005C4u; // 8017D1A8
  c->lr=0x8017D1B0u; f_800E2A98(c); // 8017D1AC
  c->f[31]=c->f[1]; // 8017D1B0
  c->r[3]=c->r[30]+0x000005C4u; // 8017D1B4
  c->lr=0x8017D1BCu; f_800E2090(c); // 8017D1B8
  c->f[1]=c->f[30]; // 8017D1BC
  c->r[5]=c->r[3]|c->r[3]; // 8017D1C0
  c->f[2]=c->f[31]; // 8017D1C4
  c->r[4]=c->r[31]|c->r[31]; // 8017D1C8
  c->r[3]=c->r[30]+0x0000067Cu; // 8017D1CC
  c->lr=0x8017D1D4u; f_802588C4(c); // 8017D1D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8017D1D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8017D1D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017D1DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017D1E0
  c->lr=c->r[0]; // 8017D1E4
  c->r[1]=c->r[1]+0x00000020u; // 8017D1E8
  return; // 8017D1EC
}

// fn_8017D1F0
void f_8017D1F0(Ctx* __restrict c) {
  trace_call(0x8017D1F0u);
  return; // 8017D1F0
}

// fn_8017D1F4
void f_8017D1F4(Ctx* __restrict c) {
  trace_call(0x8017D1F4u);
  return; // 8017D1F4
}

// fn_8017D1F8
void f_8017D1F8(Ctx* __restrict c) {
  trace_call(0x8017D1F8u);
  return; // 8017D1F8
}

// fn_8017D1FC
void f_8017D1FC(Ctx* __restrict c) {
  trace_call(0x8017D1FCu);
  return; // 8017D1FC
}

// fn_8017D200
void f_8017D200(Ctx* __restrict c) {
  trace_call(0x8017D200u);
  c->r[0]=R32(c->r[4]+0x00000044u); // 8017D200
  cmps(c,0,(int32_t)c->r[0],0); // 8017D204
  if (crb(c,2)) { goto L_8017D224; } // 8017D208
  {uint32_t ea=c->r[4]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D20C
  {uint32_t ea=c->r[2]+0xFFFFBDD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D210
  {uint32_t ea=c->r[3]+0x00000674u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D214
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 8017D218
  {uint32_t ea=c->r[3]+0x00000674u; WF32(ea,c->f[0]);} // 8017D21C
  goto L_8017D234; // 8017D220
L_8017D224:;
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D224
  {uint32_t ea=c->r[3]+0x00000674u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D228
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8017D22C
  {uint32_t ea=c->r[3]+0x00000674u; WF32(ea,c->f[0]);} // 8017D230
L_8017D234:;
  f_8017D364(c); return; // 8017D234
}

// fn_8017D238
void f_8017D238(Ctx* __restrict c) {
  trace_call(0x8017D238u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D238
  c->r[0]=c->lr; // 8017D23C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D240
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8017D244
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8017D248
  c->f[31]=c->f[2]; // 8017D24C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8017D250
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8017D254
  c->f[30]=c->f[1]; // 8017D258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017D25C
  c->r[31]=c->r[3]|c->r[3]; // 8017D260
  c->r[3]=c->r[3]+0x000005C4u; // 8017D264
  c->lr=0x8017D26Cu; f_800E2B50(c); // 8017D268
  cmps(c,0,(int32_t)c->r[3],0); // 8017D26C
  if (crb(c,2)) { goto L_8017D2B4; } // 8017D270
  c->r[0]=0u+0x00000000u; // 8017D274
  W8(c->r[1]+0x00000010u,c->r[0]); // 8017D278
  c->r[3]=c->r[1]+0x00000010u; // 8017D27C
  c->lr=0x8017D284u; f_80046EFC(c); // 8017D280
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 8017D284
  {uint32_t ea=c->r[2]+0xFFFFBDDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D288
  {uint32_t ea=c->r[2]+0xFFFFBDE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D28C
  c->r[4]=0u+0x00000000u; // 8017D290
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017D294
  c->r[5]=0u+0x00000000u; // 8017D298
  c->f[3]=c->f[2]; // 8017D29C
  c->r[6]=0u+0x00000000u; // 8017D2A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8017D2A4
  c->r[7]=0u+0x00000000u; // 8017D2A8
  c->r[8]=0u+0xFFFFFFFFu; // 8017D2AC
  c->lr=0x8017D2B4u; f_8011A9B4(c); // 8017D2B0
L_8017D2B4:;
  c->r[3]=c->r[31]+0x000005C4u; // 8017D2B4
  c->lr=0x8017D2BCu; f_800E2A98(c); // 8017D2B8
  fcmp(c,0,c->f[1],c->f[30]); // 8017D2BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017D2C0
  if (!crb(c,2)) { goto L_8017D304; } // 8017D2C4
  c->r[3]=c->r[31]+0x000005C4u; // 8017D2C8
  c->lr=0x8017D2D0u; f_800E2A98(c); // 8017D2CC
  fcmp(c,0,c->f[1],c->f[31]); // 8017D2D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017D2D4
  if (!crb(c,2)) { goto L_8017D304; } // 8017D2D8
  c->r[0]=0u+0x00000000u; // 8017D2DC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8017D2E0
  c->r[3]=c->r[1]+0x0000000Cu; // 8017D2E4
  c->lr=0x8017D2ECu; f_80046EFC(c); // 8017D2E8
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017D2EC
  c->lr=0x8017D2F4u; f_8011AC88(c); // 8017D2F0
  cmps(c,0,(int32_t)c->r[3],2); // 8017D2F4
  if (!crb(c,2)) { goto L_8017D33C; } // 8017D2F8
  c->r[3]=0u+0x00000002u; // 8017D2FC
  goto L_8017D340; // 8017D300
L_8017D304:;
  c->r[3]=c->r[31]+0x000005C4u; // 8017D304
  c->lr=0x8017D30Cu; f_800E2A98(c); // 8017D308
  fcmp(c,0,c->f[1],c->f[31]); // 8017D30C
  if (!crb(c,1)) { goto L_8017D33C; } // 8017D310
  c->r[0]=0u+0x00000000u; // 8017D314
  W8(c->r[1]+0x00000008u,c->r[0]); // 8017D318
  c->r[3]=c->r[1]+0x00000008u; // 8017D31C
  c->lr=0x8017D324u; f_80046EFC(c); // 8017D320
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017D324
  c->lr=0x8017D32Cu; f_8011ABE4(c); // 8017D328
  cmps(c,0,(int32_t)c->r[3],1); // 8017D32C
  if (crb(c,2)) { goto L_8017D33C; } // 8017D330
  c->r[3]=0u+0x00000003u; // 8017D334
  goto L_8017D340; // 8017D338
L_8017D33C:;
  c->r[3]=0u+0x00000000u; // 8017D33C
L_8017D340:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017D340
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8017D344
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8017D348
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8017D34C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8017D350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017D354
  c->lr=c->r[0]; // 8017D358
  c->r[1]=c->r[1]+0x00000040u; // 8017D35C
  return; // 8017D360
}

// fn_8017D364
void f_8017D364(Ctx* __restrict c) {
  trace_call(0x8017D364u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D364
  c->r[0]=c->lr; // 8017D368
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D36C
  c->r[11]=c->r[1]+0x00000040u; // 8017D370
  c->lr=0x8017D378u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017D374
  c->r[31]=c->r[1]|c->r[1]; // 8017D378
  c->r[28]=c->r[3]|c->r[3]; // 8017D37C
  c->lr=0x8017D384u; f_800FA310(c); // 8017D380
  cmps(c,0,(int32_t)c->r[3],0); // 8017D384
  if (!crb(c,2)) { goto L_8017D44C; } // 8017D388
  c->r[3]=c->r[28]|c->r[28]; // 8017D38C
  c->lr=0x8017D394u; f_8017D46C(c); // 8017D390
  cmps(c,0,(int32_t)c->r[3],0); // 8017D394
  if (crb(c,2)) { goto L_8017D44C; } // 8017D398
  c->r[30]=0u+0x00010000u; // 8017D39C
  c->r[3]=c->r[28]+0x00000354u; // 8017D3A0
  c->r[4]=c->r[30]+0xFFFFDADEu; // 8017D3A4
  c->lr=0x8017D3ACu; f_800667BC(c); // 8017D3A8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3AC
  if (!crb(c,2)) { goto L_8017D3C8; } // 8017D3B0
  c->r[3]=c->r[28]+0x00000354u; // 8017D3B4
  c->r[4]=c->r[30]+0xFFFFDAE8u; // 8017D3B8
  c->lr=0x8017D3C0u; f_800667BC(c); // 8017D3BC
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3C0
  if (crb(c,2)) { goto L_8017D44C; } // 8017D3C4
L_8017D3C8:;
  c->r[3]=R32(c->r[28]+0x0000044Cu); // 8017D3C8
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D3CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D3D0
  fcmp(c,0,c->f[1],c->f[0]); // 8017D3D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017D3D8
  if (!crb(c,2)) { goto L_8017D44C; } // 8017D3DC
  c->lr=0x8017D3E4u; f_80062DCC(c); // 8017D3E0
  c->r[4]=c->r[3]|c->r[3]; // 8017D3E4
  c->r[3]=c->r[28]|c->r[28]; // 8017D3E8
  c->lr=0x8017D3F0u; f_80062F4C(c); // 8017D3EC
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017D3F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017D3F4
  c->r[3]=c->r[28]+c->r[0]; // 8017D3F8
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017D3FC
  cmps(c,0,(int32_t)c->r[29],0); // 8017D400
  if (crb(c,2)) { goto L_8017D42C; } // 8017D404
  c->r[30]=0u+0x00000000u; // 8017D408
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017D40C
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017D410
  c->lr=0x8017D418u; f_80062DCC(c); // 8017D414
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017D418
  c->r[0]=c->r[13]+0xFFFF80C8u; // 8017D41C
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017D420
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017D424
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017D428
L_8017D42C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017D42C
  c->r[0]=0u+0x00000000u; // 8017D430
  c->r[3]=c->r[28]|c->r[28]; // 8017D434
  c->r[4]=c->r[29]|c->r[29]; // 8017D438
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017D43C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017D440
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017D444
  c->lr=0x8017D44Cu; f_8006306C(c); // 8017D448
L_8017D44C:;
  c->r[10]=c->r[31]|c->r[31]; // 8017D44C
  c->r[11]=c->r[10]+0x00000040u; // 8017D450
  c->lr=0x8017D458u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017D454
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017D458
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017D45C
  c->r[1]=c->r[10]|c->r[10]; // 8017D460
  c->lr=c->r[0]; // 8017D464
  return; // 8017D468
}

// fn_8017D46C
void f_8017D46C(Ctx* __restrict c) {
  trace_call(0x8017D46Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D46C
  c->r[0]=c->lr; // 8017D470
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017D474
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D478
  cmps(c,0,(int32_t)c->r[3],0); // 8017D47C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017D480
  c->r[31]=0u+0x00000000u; // 8017D484
  if (crb(c,2)) { goto L_8017D4A0; } // 8017D488
  c->r[30]=R32(c->r[3]+0x00000000u); // 8017D48C
  c->lr=0x8017D494u; f_8017CD34(c); // 8017D490
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8017D494
  if (!crb(c,2)) { goto L_8017D4A0; } // 8017D498
  c->r[31]=0u+0x00000001u; // 8017D49C
L_8017D4A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8017D4A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017D4A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D4A8
  c->lr=c->r[0]; // 8017D4AC
  c->r[1]=c->r[1]+0x00000010u; // 8017D4B0
  return; // 8017D4B4
}

// fn_8017D4B8
void f_8017D4B8(Ctx* __restrict c) {
  trace_call(0x8017D4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D4B8
  c->r[0]=c->lr; // 8017D4BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D4C0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8017D4C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8017D4C8
  c->f[31]=c->f[4]; // 8017D4CC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8017D4D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8017D4D4
  c->f[30]=c->f[3]; // 8017D4D8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 8017D4DC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 8017D4E0
  c->f[29]=c->f[2]; // 8017D4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D4E8
  c->r[31]=c->r[3]|c->r[3]; // 8017D4EC
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017D4F0
  c->lr=0x8017D4F8u; f_802EA5A4(c); // 8017D4F4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D4F8
  if (crb(c,2)) { goto L_8017D51C; } // 8017D4FC
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8017D500
  c->r[0]=0u+0x00000000u; // 8017D504
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D508
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D50C
  {uint32_t ea=c->r[31]+0x00000670u; WF32(ea,c->f[1]);} // 8017D510
  {uint32_t ea=c->r[31]+0x00000674u; WF32(ea,c->f[0]);} // 8017D514
  W8(c->r[31]+0x00000678u,c->r[0]); // 8017D518
L_8017D51C:;
  c->f[1]=c->f[29]; // 8017D51C
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017D520
  c->lr=0x8017D528u; f_802EA5A4(c); // 8017D524
  cmps(c,0,(int32_t)c->r[3],0); // 8017D528
  if (crb(c,2)) { goto L_8017D548; } // 8017D52C
  {uint32_t ea=c->r[31]+0x00000674u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D530
  fcmp(c,0,c->f[0],c->f[31]); // 8017D534
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017D538
  if (!crb(c,2)) { goto L_8017D548; } // 8017D53C
  c->r[0]=0u+0x00000001u; // 8017D540
  W8(c->r[31]+0x00000678u,c->r[0]); // 8017D544
L_8017D548:;
  c->f[1]=c->f[30]; // 8017D548
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017D54C
  c->lr=0x8017D554u; f_802EA5A4(c); // 8017D550
  cmps(c,0,(int32_t)c->r[3],0); // 8017D554
  if (crb(c,2)) { goto L_8017D564; } // 8017D558
  c->r[3]=R8(c->r[31]+0x00000678u); // 8017D55C
  goto L_8017D568; // 8017D560
L_8017D564:;
  c->r[3]=0u+0x00000000u; // 8017D564
L_8017D568:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017D568
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8017D56C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8017D570
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8017D574
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8017D578
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 8017D57C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 8017D580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D584
  c->lr=c->r[0]; // 8017D588
  c->r[1]=c->r[1]+0x00000040u; // 8017D58C
  return; // 8017D590
}

// fn_8017D594
void f_8017D594(Ctx* __restrict c) {
  trace_call(0x8017D594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D594
  c->r[0]=c->lr; // 8017D598
  c->r[5]=0u+0x80690000u; // 8017D59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D5A0
  c->r[5]=c->r[5]+0x00001820u; // 8017D5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D5A8
  c->r[31]=c->r[4]|c->r[4]; // 8017D5AC
  c->r[4]=c->r[5]+0x00000038u; // 8017D5B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017D5B4
  c->r[30]=c->r[3]|c->r[3]; // 8017D5B8
  c->r[3]=c->r[31]|c->r[31]; // 8017D5BC
  c->lr=0x8017D5C4u; f_803B4278(c); // 8017D5C0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5C4
  if (crb(c,2)) { goto L_8017D5FC; } // 8017D5C8
  c->r[3]=c->r[30]|c->r[30]; // 8017D5CC
  c->lr=0x8017D5D4u; f_8017D46C(c); // 8017D5D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5D4
  if (crb(c,2)) { goto L_8017D5FC; } // 8017D5D8
  c->r[3]=c->r[31]|c->r[31]; // 8017D5DC
  c->lr=0x8017D5E4u; f_803B5690(c); // 8017D5E0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8017D5E4
  {uint32_t ea=c->r[30]+0x0000066Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017D5E8
  fcmp(c,0,c->f[0],c->f[1]); // 8017D5EC
  if (!crb(c,1)) { goto L_8017D5FC; } // 8017D5F0
  c->r[3]=0u+0x00000001u; // 8017D5F4
  goto L_8017D600; // 8017D5F8
L_8017D5FC:;
  c->r[3]=0u+0x00000000u; // 8017D5FC
L_8017D600:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D604
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017D608
  c->lr=c->r[0]; // 8017D60C
  c->r[1]=c->r[1]+0x00000010u; // 8017D610
  return; // 8017D614
}

// fn_8017D618
void f_8017D618(Ctx* __restrict c) {
  trace_call(0x8017D618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D618
  c->r[0]=c->lr; // 8017D61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D620
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 8017D624
  c->r[0]=R32(c->r[4]+0x000000C4u); // 8017D628
  c->r[0]=rotl(c->r[0],8)&0x00000001u; cr0(c,c->r[0]); // 8017D62C
  if (crb(c,2)) { goto L_8017D63C; } // 8017D630
  c->r[3]=0u+0x00000000u; // 8017D634
  goto L_8017D648; // 8017D638
L_8017D63C:;
  c->lr=0x8017D640u; f_800FA310(c); // 8017D63C
  c->r[0]=cntlz(c->r[3]); // 8017D640
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017D644
L_8017D648:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D648
  c->lr=c->r[0]; // 8017D64C
  c->r[1]=c->r[1]+0x00000010u; // 8017D650
  return; // 8017D654
}

// fn_8017D658
void f_8017D658(Ctx* __restrict c) {
  trace_call(0x8017D658u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D658
  c->r[0]=c->lr; // 8017D65C
  c->r[4]=0u+0x00000000u; // 8017D660
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D664
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017D668
  c->r[31]=c->r[1]|c->r[1]; // 8017D66C
  c->r[28]=c->r[3]|c->r[3]; // 8017D670
  c->r[5]=R32(c->r[3]+0x00000434u); // 8017D674
  c->r[3]=c->r[5]+0x00000030u; // 8017D678
  c->lr=0x8017D680u; f_802D94E8(c); // 8017D67C
  c->r[3]=c->r[28]|c->r[28]; // 8017D680
  c->r[4]=0u+0x00000001u; // 8017D684
  c->r[5]=0u+0x00000000u; // 8017D688
  c->lr=0x8017D690u; f_8005EF48(c); // 8017D68C
  c->lr=0x8017D694u; f_8017CE04(c); // 8017D690
  c->r[4]=c->r[3]|c->r[3]; // 8017D694
  c->r[3]=c->r[28]|c->r[28]; // 8017D698
  c->lr=0x8017D6A0u; f_80062F4C(c); // 8017D69C
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017D6A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017D6A4
  c->r[3]=c->r[28]+c->r[0]; // 8017D6A8
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017D6AC
  cmps(c,0,(int32_t)c->r[29],0); // 8017D6B0
  if (crb(c,2)) { goto L_8017D6DC; } // 8017D6B4
  c->r[30]=0u+0x00000000u; // 8017D6B8
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017D6BC
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017D6C0
  c->lr=0x8017D6C8u; f_8017CE04(c); // 8017D6C4
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017D6C8
  c->r[0]=c->r[13]+0xFFFF8B28u; // 8017D6CC
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017D6D0
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017D6D4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017D6D8
L_8017D6DC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017D6DC
  c->r[0]=0u+0x00000000u; // 8017D6E0
  c->r[3]=c->r[28]|c->r[28]; // 8017D6E4
  c->r[4]=c->r[29]|c->r[29]; // 8017D6E8
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017D6EC
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017D6F0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017D6F4
  c->lr=0x8017D6FCu; f_8006306C(c); // 8017D6F8
  c->r[10]=c->r[31]|c->r[31]; // 8017D6FC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017D700
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017D704
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017D708
  c->r[1]=c->r[10]|c->r[10]; // 8017D70C
  c->lr=c->r[0]; // 8017D710
  return; // 8017D714
}

// fn_8017D718
void f_8017D718(Ctx* __restrict c) {
  trace_call(0x8017D718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D718
  c->r[0]=c->lr; // 8017D71C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D724
  c->r[31]=c->r[4]|c->r[4]; // 8017D728
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017D72C
  c->r[30]=c->r[3]|c->r[3]; // 8017D730
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017D734
  cmps(c,0,(int32_t)c->r[5],0); // 8017D738
  if (crb(c,2)) { goto L_8017D748; } // 8017D73C
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017D740
  goto L_8017D74C; // 8017D744
L_8017D748:;
  c->r[0]=0u+0x00000000u; // 8017D748
L_8017D74C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017D74C
  if (!crb(c,2)) { goto L_8017D75C; } // 8017D750
  c->r[0]=0u+0x00000003u; // 8017D754
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8017D758
L_8017D75C:;
  c->r[4]=0u+0x80690000u; // 8017D75C
  c->r[3]=c->r[3]+0x000005C4u; // 8017D760
  c->r[4]=c->r[4]+0x00001820u; // 8017D764
  c->r[4]=c->r[4]+0x00000007u; // 8017D768
  c->lr=0x8017D770u; f_800E2ACC(c); // 8017D76C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D770
  if (crb(c,2)) { goto L_8017D86C; } // 8017D774
  {uint32_t ea=c->r[2]+0xFFFFBDE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D778
  c->r[3]=c->r[30]+0x000005C4u; // 8017D77C
  c->lr=0x8017D784u; f_800E2B50(c); // 8017D780
  cmps(c,0,(int32_t)c->r[3],0); // 8017D784
  if (crb(c,2)) { goto L_8017D7B8; } // 8017D788
  c->r[5]=R32(c->r[30]+0x0000040Cu); // 8017D78C
  c->r[0]=0u+0x00000000u; // 8017D790
  c->r[3]=c->r[30]+0x000000FCu; // 8017D794
  c->r[4]=0u+0x00000001u; // 8017D798
  W8(c->r[5]+0x00000075u,c->r[0]); // 8017D79C
  c->lr=0x8017D7A4u; f_802E6678(c); // 8017D7A0
  c->r[4]=0u+0x00010000u; // 8017D7A4
  c->r[3]=c->r[30]|c->r[30]; // 8017D7A8
  c->r[4]=c->r[4]+0xFFFFDACAu; // 8017D7AC
  c->r[5]=0u+0x00000001u; // 8017D7B0
  c->lr=0x8017D7B8u; f_80064744(c); // 8017D7B4
L_8017D7B8:;
  {uint32_t ea=c->r[2]+0xFFFFBDE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D7B8
  c->r[3]=c->r[30]|c->r[30]; // 8017D7BC
  {uint32_t ea=c->r[2]+0xFFFFBDECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D7C0
  c->lr=0x8017D7C8u; f_8017D238(c); // 8017D7C4
  cmps(c,0,(int32_t)c->r[3],2); // 8017D7C8
  if (!crb(c,2)) { goto L_8017D7D8; } // 8017D7CC
  c->r[0]=0u+0x00000002u; // 8017D7D0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017D7D4
L_8017D7D8:;
  {uint32_t ea=c->r[2]+0xFFFFBDF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D7D8
  c->r[3]=c->r[30]+0x000005C4u; // 8017D7DC
  c->lr=0x8017D7E4u; f_800E2B50(c); // 8017D7E0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D7E4
  if (crb(c,2)) { goto L_8017D81C; } // 8017D7E8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017D7EC
  cmps(c,0,(int32_t)c->r[0],2); // 8017D7F0
  if (!crb(c,2)) { goto L_8017D81C; } // 8017D7F4
  c->r[4]=0u+0x80690000u; // 8017D7F8
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D7FC
  c->r[4]=c->r[4]+0x00001820u; // 8017D800
  c->r[3]=c->r[30]+0x000005C4u; // 8017D804
  c->r[4]=c->r[4]+0x0000003Du; // 8017D808
  c->r[5]=0u+0x00000000u; // 8017D80C
  c->lr=0x8017D814u; f_800E2300(c); // 8017D810
  c->r[3]=c->r[30]|c->r[30]; // 8017D814
  c->lr=0x8017D81Cu; f_8017D89C(c); // 8017D818
L_8017D81C:;
  {uint32_t ea=c->r[2]+0xFFFFBDF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D81C
  c->r[3]=c->r[30]+0x000005C4u; // 8017D820
  c->lr=0x8017D828u; f_800E2B50(c); // 8017D824
  cmps(c,0,(int32_t)c->r[3],0); // 8017D828
  if (crb(c,2)) { goto L_8017D850; } // 8017D82C
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017D830
  c->r[4]=0u+0x00000001u; // 8017D834
  c->r[3]=c->r[3]+0x00000030u; // 8017D838
  c->lr=0x8017D840u; f_802D94E8(c); // 8017D83C
  c->r[3]=c->r[30]|c->r[30]; // 8017D840
  c->r[4]=0u+0x00000000u; // 8017D844
  c->r[5]=0u+0xFFFFFFFFu; // 8017D848
  c->lr=0x8017D850u; f_80062194(c); // 8017D84C
L_8017D850:;
  {uint32_t ea=c->r[2]+0xFFFFBDF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D850
  c->r[3]=c->r[30]+0x000005C4u; // 8017D854
  c->lr=0x8017D85Cu; f_800E2B50(c); // 8017D858
  cmps(c,0,(int32_t)c->r[3],0); // 8017D85C
  if (crb(c,2)) { goto L_8017D86C; } // 8017D860
  c->r[3]=c->r[30]|c->r[30]; // 8017D864
  c->lr=0x8017D86Cu; f_8017D89C(c); // 8017D868
L_8017D86C:;
  c->r[3]=c->r[30]+0x000005C4u; // 8017D86C
  c->lr=0x8017D874u; f_800E2B1C(c); // 8017D870
  cmps(c,0,(int32_t)c->r[3],0); // 8017D874
  if (crb(c,2)) { goto L_8017D884; } // 8017D878
  c->r[3]=c->r[30]|c->r[30]; // 8017D87C
  c->lr=0x8017D884u; f_8017D89C(c); // 8017D880
L_8017D884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D888
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017D88C
  c->lr=c->r[0]; // 8017D890
  c->r[1]=c->r[1]+0x00000010u; // 8017D894
  return; // 8017D898
}

// fn_8017D89C
void f_8017D89C(Ctx* __restrict c) {
  trace_call(0x8017D89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D89C
  c->r[0]=c->lr; // 8017D8A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D8A4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017D8A8
  c->r[31]=c->r[1]|c->r[1]; // 8017D8AC
  c->r[28]=c->r[3]|c->r[3]; // 8017D8B0
  c->lr=0x8017D8B8u; f_8017CDD0(c); // 8017D8B4
  c->r[4]=c->r[3]|c->r[3]; // 8017D8B8
  c->r[3]=c->r[28]|c->r[28]; // 8017D8BC
  c->lr=0x8017D8C4u; f_80062F4C(c); // 8017D8C0
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017D8C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017D8C8
  c->r[3]=c->r[28]+c->r[0]; // 8017D8CC
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017D8D0
  cmps(c,0,(int32_t)c->r[29],0); // 8017D8D4
  if (crb(c,2)) { goto L_8017D900; } // 8017D8D8
  c->r[30]=0u+0x00000000u; // 8017D8DC
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017D8E0
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017D8E4
  c->lr=0x8017D8ECu; f_8017CDD0(c); // 8017D8E8
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017D8EC
  c->r[0]=c->r[13]+0xFFFF8B24u; // 8017D8F0
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017D8F4
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017D8F8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017D8FC
L_8017D900:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017D900
  c->r[0]=0u+0x00000000u; // 8017D904
  c->r[3]=c->r[28]|c->r[28]; // 8017D908
  c->r[4]=c->r[29]|c->r[29]; // 8017D90C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017D910
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017D914
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017D918
  c->lr=0x8017D920u; f_8006306C(c); // 8017D91C
  c->r[10]=c->r[31]|c->r[31]; // 8017D920
  c->r[3]=c->r[29]|c->r[29]; // 8017D924
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017D928
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017D92C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017D930
  c->r[1]=c->r[10]|c->r[10]; // 8017D934
  c->lr=c->r[0]; // 8017D938
  return; // 8017D93C
}

// fn_8017D940
void f_8017D940(Ctx* __restrict c) {
  trace_call(0x8017D940u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D940
  c->r[0]=c->lr; // 8017D944
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017D948
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8017D94C
  c->r[31]=c->r[4]|c->r[4]; // 8017D950
  W32(c->r[1]+0x00000038u,c->r[30]); // 8017D954
  c->r[30]=c->r[3]|c->r[3]; // 8017D958
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017D95C
  cmps(c,0,(int32_t)c->r[5],0); // 8017D960
  if (crb(c,2)) { goto L_8017D970; } // 8017D964
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017D968
  goto L_8017D974; // 8017D96C
L_8017D970:;
  c->r[0]=0u+0x00000000u; // 8017D970
L_8017D974:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017D974
  if (!crb(c,2)) { goto L_8017D9E0; } // 8017D978
  c->r[4]=0u+0x00010000u; // 8017D97C
  c->r[3]=c->r[30]|c->r[30]; // 8017D980
  c->r[4]=c->r[4]+0xFFFFDAD4u; // 8017D984
  c->r[5]=0u+0x00000001u; // 8017D988
  c->lr=0x8017D990u; f_80064744(c); // 8017D98C
  c->r[3]=c->r[1]+0x00000008u; // 8017D990
  c->lr=0x8017D998u; f_80382F00(c); // 8017D994
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D998
  c->r[3]=c->r[1]+0x00000008u; // 8017D99C
  {uint32_t ea=c->r[2]+0xFFFFBDFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D9A0
  c->f[3]=c->f[1]; // 8017D9A4
  c->lr=0x8017D9ACu; f_804E18A0(c); // 8017D9A8
  {uint32_t ea=c->r[2]+0xFFFFBE00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D9AC
  c->r[3]=c->r[1]+0x00000008u; // 8017D9B0
  {uint32_t ea=c->r[2]+0xFFFFBDC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017D9B4
  {uint32_t ea=c->r[2]+0xFFFFBE04u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017D9B8
  c->lr=0x8017D9C0u; f_8007E8A8(c); // 8017D9BC
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017D9C0
  c->r[3]=c->r[30]|c->r[30]; // 8017D9C4
  c->r[4]=c->r[1]+0x00000008u; // 8017D9C8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8017D9CC
  c->ctr=c->r[12]; // 8017D9D0
  if (true) { c->lr=0x8017D9D8u; dispatch(c,c->ctr); } // 8017D9D4
  c->r[0]=0u+0x00000000u; // 8017D9D8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017D9DC
L_8017D9E0:;
  c->r[3]=c->r[30]+0x00000354u; // 8017D9E0
  c->lr=0x8017D9E8u; f_800667AC(c); // 8017D9E4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D9E8
  if (crb(c,2)) { goto L_8017DA38; } // 8017D9EC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017D9F0
  cmps(c,0,(int32_t)c->r[0],0); // 8017D9F4
  if (!crb(c,2)) { goto L_8017DA1C; } // 8017D9F8
  c->r[0]=0u+0x00000001u; // 8017D9FC
  c->r[4]=0u+0x00010000u; // 8017DA00
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017DA04
  c->r[3]=c->r[30]|c->r[30]; // 8017DA08
  c->r[4]=c->r[4]+0xFFFFDADEu; // 8017DA0C
  c->r[5]=0u+0x00000001u; // 8017DA10
  c->lr=0x8017DA18u; f_80064744(c); // 8017DA14
  goto L_8017DA38; // 8017DA18
L_8017DA1C:;
  c->r[0]=0u+0x00000000u; // 8017DA1C
  c->r[4]=0u+0x00010000u; // 8017DA20
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017DA24
  c->r[3]=c->r[30]|c->r[30]; // 8017DA28
  c->r[4]=c->r[4]+0xFFFFDAE8u; // 8017DA2C
  c->r[5]=0u+0x00000001u; // 8017DA30
  c->lr=0x8017DA38u; f_80064744(c); // 8017DA34
L_8017DA38:;
  c->r[31]=0u+0x00010000u; // 8017DA38
  c->r[3]=c->r[30]+0x00000354u; // 8017DA3C
  c->r[4]=c->r[31]+0xFFFFDADEu; // 8017DA40
  c->lr=0x8017DA48u; f_800667BC(c); // 8017DA44
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA48
  if (crb(c,2)) { goto L_8017DAF8; } // 8017DA4C
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017DA50
  c->r[4]=0u+0x00000003u; // 8017DA54
  c->r[3]=c->r[3]+0x00000030u; // 8017DA58
  c->lr=0x8017DA60u; f_802D94E8(c); // 8017DA5C
  c->f[4]=c->f[1]; // 8017DA60
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DA64
  {uint32_t ea=c->r[2]+0xFFFFBE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017DA68
  c->r[3]=c->r[30]|c->r[30]; // 8017DA6C
  {uint32_t ea=c->r[2]+0xFFFFBE0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017DA70
  c->lr=0x8017DA78u; f_8017D4B8(c); // 8017DA74
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA78
  if (crb(c,2)) { goto L_8017DAC4; } // 8017DA7C
  c->r[3]=c->r[30]|c->r[30]; // 8017DA80
  c->lr=0x8017DA88u; f_8017D0FC(c); // 8017DA84
  {uint32_t ea=c->r[2]+0xFFFFBE10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017DA88
  fcmp(c,0,c->f[1],c->f[0]); // 8017DA8C
  if (!crb(c,0)) { goto L_8017DAB0; } // 8017DA90
  c->r[3]=c->r[30]|c->r[30]; // 8017DA94
  c->lr=0x8017DA9Cu; f_8017DBD0(c); // 8017DA98
  c->r[3]=c->r[30]|c->r[30]; // 8017DA9C
  c->r[4]=c->r[31]+0xFFFFDAE0u; // 8017DAA0
  c->r[5]=0u+0x00000001u; // 8017DAA4
  c->lr=0x8017DAACu; f_80064744(c); // 8017DAA8
  goto L_8017DAF8; // 8017DAAC
L_8017DAB0:;
  c->r[3]=c->r[30]|c->r[30]; // 8017DAB0
  c->r[4]=c->r[31]+0xFFFFDADFu; // 8017DAB4
  c->r[5]=0u+0x00000001u; // 8017DAB8
  c->lr=0x8017DAC0u; f_80064744(c); // 8017DABC
  goto L_8017DAF8; // 8017DAC0
L_8017DAC4:;
  c->r[3]=R32(c->r[30]+0x00000404u); // 8017DAC4
  {uint32_t ea=c->r[2]+0xFFFFBE14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DAC8
  c->lr=0x8017DAD0u; f_802EA5A4(c); // 8017DACC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DAD0
  if (crb(c,2)) { goto L_8017DAF8; } // 8017DAD4
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017DAD8
  c->r[4]=0u+0x00000002u; // 8017DADC
  c->r[3]=c->r[3]+0x00000030u; // 8017DAE0
  c->lr=0x8017DAE8u; f_802D94E8(c); // 8017DAE4
  c->r[3]=c->r[30]|c->r[30]; // 8017DAE8
  c->r[4]=0u+0x00000000u; // 8017DAEC
  c->r[5]=0u+0xFFFFFFFFu; // 8017DAF0
  c->lr=0x8017DAF8u; f_80062194(c); // 8017DAF4
L_8017DAF8:;
  c->r[31]=0u+0x00010000u; // 8017DAF8
  c->r[3]=c->r[30]+0x00000354u; // 8017DAFC
  c->r[4]=c->r[31]+0xFFFFDAE8u; // 8017DB00
  c->lr=0x8017DB08u; f_800667BC(c); // 8017DB04
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB08
  if (crb(c,2)) { goto L_8017DBB8; } // 8017DB0C
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017DB10
  c->r[4]=0u+0x00000005u; // 8017DB14
  c->r[3]=c->r[3]+0x00000030u; // 8017DB18
  c->lr=0x8017DB20u; f_802D94E8(c); // 8017DB1C
  c->f[4]=c->f[1]; // 8017DB20
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DB24
  {uint32_t ea=c->r[2]+0xFFFFBE18u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017DB28
  c->r[3]=c->r[30]|c->r[30]; // 8017DB2C
  {uint32_t ea=c->r[2]+0xFFFFBDE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017DB30
  c->lr=0x8017DB38u; f_8017D4B8(c); // 8017DB34
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB38
  if (crb(c,2)) { goto L_8017DB84; } // 8017DB3C
  c->r[3]=c->r[30]|c->r[30]; // 8017DB40
  c->lr=0x8017DB48u; f_8017D0FC(c); // 8017DB44
  {uint32_t ea=c->r[2]+0xFFFFBE10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017DB48
  fcmp(c,0,c->f[1],c->f[0]); // 8017DB4C
  if (!crb(c,0)) { goto L_8017DB70; } // 8017DB50
  c->r[3]=c->r[30]|c->r[30]; // 8017DB54
  c->lr=0x8017DB5Cu; f_8017DBD0(c); // 8017DB58
  c->r[3]=c->r[30]|c->r[30]; // 8017DB5C
  c->r[4]=c->r[31]+0xFFFFDAEAu; // 8017DB60
  c->r[5]=0u+0x00000001u; // 8017DB64
  c->lr=0x8017DB6Cu; f_80064744(c); // 8017DB68
  goto L_8017DBB8; // 8017DB6C
L_8017DB70:;
  c->r[3]=c->r[30]|c->r[30]; // 8017DB70
  c->r[4]=c->r[31]+0xFFFFDAE9u; // 8017DB74
  c->r[5]=0u+0x00000001u; // 8017DB78
  c->lr=0x8017DB80u; f_80064744(c); // 8017DB7C
  goto L_8017DBB8; // 8017DB80
L_8017DB84:;
  c->r[3]=R32(c->r[30]+0x00000404u); // 8017DB84
  {uint32_t ea=c->r[2]+0xFFFFBE1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DB88
  c->lr=0x8017DB90u; f_802EA5A4(c); // 8017DB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB90
  if (crb(c,2)) { goto L_8017DBB8; } // 8017DB94
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017DB98
  c->r[4]=0u+0x00000004u; // 8017DB9C
  c->r[3]=c->r[3]+0x00000030u; // 8017DBA0
  c->lr=0x8017DBA8u; f_802D94E8(c); // 8017DBA4
  c->r[3]=c->r[30]|c->r[30]; // 8017DBA8
  c->r[4]=0u+0x00000000u; // 8017DBAC
  c->r[5]=0u+0xFFFFFFFFu; // 8017DBB0
  c->lr=0x8017DBB8u; f_80062194(c); // 8017DBB4
L_8017DBB8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017DBB8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8017DBBC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8017DBC0
  c->lr=c->r[0]; // 8017DBC4
  c->r[1]=c->r[1]+0x00000040u; // 8017DBC8
  return; // 8017DBCC
}

// fn_8017DBD0
void f_8017DBD0(Ctx* __restrict c) {
  trace_call(0x8017DBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DBD0
  c->r[0]=c->lr; // 8017DBD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017DBD8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017DBDC
  c->r[31]=c->r[1]|c->r[1]; // 8017DBE0
  c->r[28]=c->r[3]|c->r[3]; // 8017DBE4
  c->lr=0x8017DBECu; f_8017CD9C(c); // 8017DBE8
  c->r[4]=c->r[3]|c->r[3]; // 8017DBEC
  c->r[3]=c->r[28]|c->r[28]; // 8017DBF0
  c->lr=0x8017DBF8u; f_80062F4C(c); // 8017DBF4
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017DBF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017DBFC
  c->r[3]=c->r[28]+c->r[0]; // 8017DC00
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017DC04
  cmps(c,0,(int32_t)c->r[29],0); // 8017DC08
  if (crb(c,2)) { goto L_8017DC34; } // 8017DC0C
  c->r[30]=0u+0x00000000u; // 8017DC10
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017DC14
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017DC18
  c->lr=0x8017DC20u; f_8017CD9C(c); // 8017DC1C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017DC20
  c->r[0]=c->r[13]+0xFFFF8B20u; // 8017DC24
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017DC28
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017DC2C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017DC30
L_8017DC34:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017DC34
  c->r[0]=0u+0x00000000u; // 8017DC38
  c->r[3]=c->r[28]|c->r[28]; // 8017DC3C
  c->r[4]=c->r[29]|c->r[29]; // 8017DC40
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017DC44
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017DC48
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017DC4C
  c->lr=0x8017DC54u; f_8006306C(c); // 8017DC50
  c->r[10]=c->r[31]|c->r[31]; // 8017DC54
  c->r[3]=c->r[29]|c->r[29]; // 8017DC58
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017DC5C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017DC60
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017DC64
  c->r[1]=c->r[10]|c->r[10]; // 8017DC68
  c->lr=c->r[0]; // 8017DC6C
  return; // 8017DC70
}

// fn_8017DC74
void f_8017DC74(Ctx* __restrict c) {
  trace_call(0x8017DC74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DC74
  c->r[0]=c->lr; // 8017DC78
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017DC7C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8017DC80
  c->r[31]=c->r[4]|c->r[4]; // 8017DC84
  W32(c->r[1]+0x00000038u,c->r[30]); // 8017DC88
  c->r[30]=c->r[3]|c->r[3]; // 8017DC8C
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017DC90
  cmps(c,0,(int32_t)c->r[5],0); // 8017DC94
  if (crb(c,2)) { goto L_8017DCA4; } // 8017DC98
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017DC9C
  goto L_8017DCA8; // 8017DCA0
L_8017DCA4:;
  c->r[0]=0u+0x00000000u; // 8017DCA4
L_8017DCA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017DCA8
  if (!crb(c,2)) { goto L_8017DCC0; } // 8017DCAC
  c->r[0]=0u+0x00000003u; // 8017DCB0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8017DCB4
  c->r[0]=0u+0x00000000u; // 8017DCB8
  W32(c->r[3]+0x0000055Cu,c->r[0]); // 8017DCBC
L_8017DCC0:;
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8017DCC0
  cmps(c,0,(int32_t)c->r[0],0); // 8017DCC4
  if (!crb(c,2)) { goto L_8017DD18; } // 8017DCC8
  c->r[3]=c->r[3]+0x00000354u; // 8017DCCC
  c->lr=0x8017DCD4u; f_800667AC(c); // 8017DCD0
  cmps(c,0,(int32_t)c->r[3],0); // 8017DCD4
  if (crb(c,2)) { goto L_8017DE5C; } // 8017DCD8
  c->r[4]=0u+0x00010000u; // 8017DCDC
  c->r[3]=c->r[30]|c->r[30]; // 8017DCE0
  c->r[4]=c->r[4]+0xFFFFDAFCu; // 8017DCE4
  c->r[5]=0u+0x00000001u; // 8017DCE8
  c->lr=0x8017DCF0u; f_80064744(c); // 8017DCEC
  c->r[4]=0u+0x80690000u; // 8017DCF0
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DCF4
  c->r[4]=c->r[4]+0x00001820u; // 8017DCF8
  c->r[3]=c->r[30]+0x000005C4u; // 8017DCFC
  c->r[4]=c->r[4]+0x0000004Eu; // 8017DD00
  c->r[5]=0u+0x00000000u; // 8017DD04
  c->lr=0x8017DD0Cu; f_800E2300(c); // 8017DD08
  c->r[0]=0u+0x00000001u; // 8017DD0C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8017DD10
  goto L_8017DE5C; // 8017DD14
L_8017DD18:;
  c->r[4]=0u+0x80690000u; // 8017DD18
  c->r[3]=c->r[3]+0x000005C4u; // 8017DD1C
  c->r[4]=c->r[4]+0x00001820u; // 8017DD20
  c->r[4]=c->r[4]+0x0000004Eu; // 8017DD24
  c->lr=0x8017DD2Cu; f_800E2ACC(c); // 8017DD28
  cmps(c,0,(int32_t)c->r[3],0); // 8017DD2C
  if (crb(c,2)) { goto L_8017DE5C; } // 8017DD30
  {uint32_t ea=c->r[2]+0xFFFFBE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DD34
  c->r[3]=c->r[30]+0x000005C4u; // 8017DD38
  c->lr=0x8017DD40u; f_800E2B50(c); // 8017DD3C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DD40
  if (crb(c,2)) { goto L_8017DDA4; } // 8017DD44
  c->r[4]=0u+0x00010000u; // 8017DD48
  c->r[3]=c->r[30]|c->r[30]; // 8017DD4C
  c->r[4]=c->r[4]+0xFFFFDB01u; // 8017DD50
  c->r[5]=0u+0x00000001u; // 8017DD54
  c->lr=0x8017DD5Cu; f_80064744(c); // 8017DD58
  c->r[3]=c->r[1]+0x00000008u; // 8017DD5C
  c->lr=0x8017DD64u; f_80382F00(c); // 8017DD60
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DD64
  c->r[3]=c->r[1]+0x00000008u; // 8017DD68
  {uint32_t ea=c->r[2]+0xFFFFBE24u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017DD6C
  c->f[3]=c->f[1]; // 8017DD70
  c->lr=0x8017DD78u; f_804E18A0(c); // 8017DD74
  {uint32_t ea=c->r[2]+0xFFFFBE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DD78
  c->r[3]=c->r[1]+0x00000008u; // 8017DD7C
  {uint32_t ea=c->r[2]+0xFFFFBE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017DD80
  {uint32_t ea=c->r[2]+0xFFFFBE30u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017DD84
  c->lr=0x8017DD8Cu; f_8007E8A8(c); // 8017DD88
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017DD8C
  c->r[3]=c->r[30]|c->r[30]; // 8017DD90
  c->r[4]=c->r[1]+0x00000008u; // 8017DD94
  c->r[12]=R32(c->r[12]+0x00000020u); // 8017DD98
  c->ctr=c->r[12]; // 8017DD9C
  if (true) { c->lr=0x8017DDA4u; dispatch(c,c->ctr); } // 8017DDA0
L_8017DDA4:;
  {uint32_t ea=c->r[2]+0xFFFFBE34u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DDA4
  c->r[3]=c->r[30]|c->r[30]; // 8017DDA8
  {uint32_t ea=c->r[2]+0xFFFFBE38u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017DDAC
  c->lr=0x8017DDB4u; f_8017D238(c); // 8017DDB0
  cmps(c,0,(int32_t)c->r[3],2); // 8017DDB4
  if (!crb(c,2)) { goto L_8017DDC4; } // 8017DDB8
  c->r[0]=0u+0x00000002u; // 8017DDBC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017DDC0
L_8017DDC4:;
  {uint32_t ea=c->r[2]+0xFFFFBE38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DDC4
  c->r[3]=c->r[30]+0x000005C4u; // 8017DDC8
  c->lr=0x8017DDD0u; f_800E2B50(c); // 8017DDCC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DDD0
  if (crb(c,2)) { goto L_8017DE0C; } // 8017DDD4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017DDD8
  cmps(c,0,(int32_t)c->r[0],2); // 8017DDDC
  if (!crb(c,2)) { goto L_8017DE0C; } // 8017DDE0
  c->r[3]=c->r[30]|c->r[30]; // 8017DDE4
  c->lr=0x8017DDECu; f_8017DE74(c); // 8017DDE8
  c->r[4]=0u+0x80690000u; // 8017DDEC
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DDF0
  c->r[4]=c->r[4]+0x00001820u; // 8017DDF4
  c->r[3]=c->r[30]+0x000005C4u; // 8017DDF8
  c->r[4]=c->r[4]+0x0000005Fu; // 8017DDFC
  c->r[5]=0u+0x00000000u; // 8017DE00
  c->lr=0x8017DE08u; f_800E2300(c); // 8017DE04
  goto L_8017DE5C; // 8017DE08
L_8017DE0C:;
  {uint32_t ea=c->r[2]+0xFFFFBE3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DE0C
  c->r[3]=c->r[30]+0x000005C4u; // 8017DE10
  c->lr=0x8017DE18u; f_800E2B50(c); // 8017DE14
  cmps(c,0,(int32_t)c->r[3],0); // 8017DE18
  if (crb(c,2)) { goto L_8017DE44; } // 8017DE1C
  c->r[3]=R32(c->r[30]+0x00000434u); // 8017DE20
  c->r[4]=0u+0x00000006u; // 8017DE24
  c->r[3]=c->r[3]+0x00000030u; // 8017DE28
  c->lr=0x8017DE30u; f_802D94E8(c); // 8017DE2C
  c->r[3]=c->r[30]|c->r[30]; // 8017DE30
  c->r[4]=0u+0x00000000u; // 8017DE34
  c->r[5]=0u+0xFFFFFFFFu; // 8017DE38
  c->lr=0x8017DE40u; f_80062194(c); // 8017DE3C
  goto L_8017DE5C; // 8017DE40
L_8017DE44:;
  c->r[3]=c->r[30]+0x000005C4u; // 8017DE44
  c->lr=0x8017DE4Cu; f_800E2B1C(c); // 8017DE48
  cmps(c,0,(int32_t)c->r[3],0); // 8017DE4C
  if (crb(c,2)) { goto L_8017DE5C; } // 8017DE50
  c->r[3]=c->r[30]|c->r[30]; // 8017DE54
  c->lr=0x8017DE5Cu; f_8017DE74(c); // 8017DE58
L_8017DE5C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017DE5C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8017DE60
  c->r[30]=R32(c->r[1]+0x00000038u); // 8017DE64
  c->lr=c->r[0]; // 8017DE68
  c->r[1]=c->r[1]+0x00000040u; // 8017DE6C
  return; // 8017DE70
}

// fn_8017DE74
void f_8017DE74(Ctx* __restrict c) {
  trace_call(0x8017DE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DE74
  c->r[0]=c->lr; // 8017DE78
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017DE7C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017DE80
  c->r[31]=c->r[1]|c->r[1]; // 8017DE84
  c->r[28]=c->r[3]|c->r[3]; // 8017DE88
  c->lr=0x8017DE90u; f_8017CD68(c); // 8017DE8C
  c->r[4]=c->r[3]|c->r[3]; // 8017DE90
  c->r[3]=c->r[28]|c->r[28]; // 8017DE94
  c->lr=0x8017DE9Cu; f_80062F4C(c); // 8017DE98
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017DE9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017DEA0
  c->r[3]=c->r[28]+c->r[0]; // 8017DEA4
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017DEA8
  cmps(c,0,(int32_t)c->r[29],0); // 8017DEAC
  if (crb(c,2)) { goto L_8017DED8; } // 8017DEB0
  c->r[30]=0u+0x00000000u; // 8017DEB4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017DEB8
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017DEBC
  c->lr=0x8017DEC4u; f_8017CD68(c); // 8017DEC0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017DEC4
  c->r[0]=c->r[13]+0xFFFF8B1Cu; // 8017DEC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017DECC
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017DED0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017DED4
L_8017DED8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017DED8
  c->r[0]=0u+0x00000000u; // 8017DEDC
  c->r[3]=c->r[28]|c->r[28]; // 8017DEE0
  c->r[4]=c->r[29]|c->r[29]; // 8017DEE4
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017DEE8
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017DEEC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017DEF0
  c->lr=0x8017DEF8u; f_8006306C(c); // 8017DEF4
  c->r[10]=c->r[31]|c->r[31]; // 8017DEF8
  c->r[3]=c->r[29]|c->r[29]; // 8017DEFC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017DF00
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017DF04
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017DF08
  c->r[1]=c->r[10]|c->r[10]; // 8017DF0C
  c->lr=c->r[0]; // 8017DF10
  return; // 8017DF14
}

// fn_8017DF18
void f_8017DF18(Ctx* __restrict c) {
  trace_call(0x8017DF18u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DF18
  c->r[0]=c->lr; // 8017DF1C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017DF20
  c->r[11]=c->r[1]+0x00000070u; // 8017DF24
  c->lr=0x8017DF2Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017DF28
  c->r[31]=c->r[1]|c->r[1]; // 8017DF2C
  c->r[30]=0u+0x00010000u; // 8017DF30
  c->r[28]=c->r[3]|c->r[3]; // 8017DF34
  c->r[3]=c->r[3]+0x00000354u; // 8017DF38
  c->r[4]=c->r[30]+0xFFFFDB01u; // 8017DF3C
  c->lr=0x8017DF44u; f_800667BC(c); // 8017DF40
  cmps(c,0,(int32_t)c->r[3],0); // 8017DF44
  if (crb(c,2)) { goto L_8017DF88; } // 8017DF48
  c->r[3]=c->r[28]+0x00000354u; // 8017DF4C
  c->lr=0x8017DF54u; f_800667AC(c); // 8017DF50
  cmps(c,0,(int32_t)c->r[3],0); // 8017DF54
  if (crb(c,2)) { goto L_8017DF88; } // 8017DF58
  c->r[3]=c->r[28]|c->r[28]; // 8017DF5C
  c->r[4]=c->r[30]+0xFFFFDB06u; // 8017DF60
  c->r[5]=0u+0x00000001u; // 8017DF64
  c->lr=0x8017DF6Cu; f_80064744(c); // 8017DF68
  c->r[4]=0u+0x80690000u; // 8017DF6C
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DF70
  c->r[4]=c->r[4]+0x00001820u; // 8017DF74
  c->r[3]=c->r[28]+0x000005C4u; // 8017DF78
  c->r[4]=c->r[4]+0x00000070u; // 8017DF7C
  c->r[5]=0u+0x00000000u; // 8017DF80
  c->lr=0x8017DF88u; f_800E2300(c); // 8017DF84
L_8017DF88:;
  c->r[4]=0u+0x80690000u; // 8017DF88
  c->r[3]=c->r[28]+0x000005C4u; // 8017DF8C
  c->r[4]=c->r[4]+0x00001820u; // 8017DF90
  c->r[4]=c->r[4]+0x00000070u; // 8017DF94
  c->lr=0x8017DF9Cu; f_800E2ACC(c); // 8017DF98
  cmps(c,0,(int32_t)c->r[3],0); // 8017DF9C
  if (crb(c,2)) { goto L_8017E080; } // 8017DFA0
  {uint32_t ea=c->r[2]+0xFFFFBE40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DFA4
  c->r[3]=c->r[28]+0x000005C4u; // 8017DFA8
  c->lr=0x8017DFB0u; f_800E2B50(c); // 8017DFAC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DFB0
  if (crb(c,2)) { goto L_8017E080; } // 8017DFB4
  c->r[4]=0u+0x00010000u; // 8017DFB8
  c->r[3]=c->r[28]|c->r[28]; // 8017DFBC
  c->r[4]=c->r[4]+0xFFFFDB0Bu; // 8017DFC0
  c->r[5]=0u+0x00000001u; // 8017DFC4
  c->lr=0x8017DFCCu; f_80064744(c); // 8017DFC8
  c->lr=0x8017DFD0u; f_8017CD34(c); // 8017DFCC
  c->r[4]=c->r[3]|c->r[3]; // 8017DFD0
  c->r[3]=c->r[28]|c->r[28]; // 8017DFD4
  c->lr=0x8017DFDCu; f_80062F4C(c); // 8017DFD8
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017DFDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017DFE0
  c->r[3]=c->r[28]+c->r[0]; // 8017DFE4
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017DFE8
  cmps(c,0,(int32_t)c->r[29],0); // 8017DFEC
  if (crb(c,2)) { goto L_8017E018; } // 8017DFF0
  c->r[30]=0u+0x00000000u; // 8017DFF4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017DFF8
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017DFFC
  c->lr=0x8017E004u; f_8017CD34(c); // 8017E000
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017E004
  c->r[0]=c->r[13]+0xFFFF8B18u; // 8017E008
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017E00C
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017E010
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017E014
L_8017E018:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017E018
  c->r[0]=0u+0x00000000u; // 8017E01C
  c->r[3]=c->r[28]|c->r[28]; // 8017E020
  c->r[4]=c->r[29]|c->r[29]; // 8017E024
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017E028
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017E02C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017E030
  c->lr=0x8017E038u; f_8006306C(c); // 8017E034
  c->r[3]=c->r[31]+0x00000028u; // 8017E038
  c->lr=0x8017E040u; f_80382F00(c); // 8017E03C
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E040
  c->r[3]=c->r[31]+0x00000028u; // 8017E044
  {uint32_t ea=c->r[2]+0xFFFFBE44u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017E048
  c->f[3]=c->f[1]; // 8017E04C
  c->lr=0x8017E054u; f_804E18A0(c); // 8017E050
  {uint32_t ea=c->r[2]+0xFFFFBE48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E054
  c->r[3]=c->r[31]+0x00000028u; // 8017E058
  {uint32_t ea=c->r[2]+0xFFFFBE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017E05C
  {uint32_t ea=c->r[2]+0xFFFFBE30u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017E060
  c->lr=0x8017E068u; f_8007E8A8(c); // 8017E064
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8017E068
  c->r[3]=c->r[28]|c->r[28]; // 8017E06C
  c->r[4]=c->r[31]+0x00000028u; // 8017E070
  c->r[12]=R32(c->r[12]+0x00000020u); // 8017E074
  c->ctr=c->r[12]; // 8017E078
  if (true) { c->lr=0x8017E080u; dispatch(c,c->ctr); } // 8017E07C
L_8017E080:;
  c->r[10]=c->r[31]|c->r[31]; // 8017E080
  c->r[11]=c->r[10]+0x00000070u; // 8017E084
  c->lr=0x8017E08Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E088
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017E08C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017E090
  c->r[1]=c->r[10]|c->r[10]; // 8017E094
  c->lr=c->r[0]; // 8017E098
  return; // 8017E09C
}

// fn_8017E0A0
void f_8017E0A0(Ctx* __restrict c) {
  trace_call(0x8017E0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E0A0
  c->r[0]=c->lr; // 8017E0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E0A8
  c->r[11]=c->r[1]+0x00000020u; // 8017E0AC
  c->lr=0x8017E0B4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E0B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017E0B4
  c->r[31]=c->r[3]|c->r[3]; // 8017E0B8
  c->r[29]=c->r[4]|c->r[4]; // 8017E0BC
  cmps(c,0,(int32_t)c->r[5],0); // 8017E0C0
  if (crb(c,2)) { goto L_8017E0D0; } // 8017E0C4
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017E0C8
  goto L_8017E0D4; // 8017E0CC
L_8017E0D0:;
  c->r[0]=0u+0x00000000u; // 8017E0D0
L_8017E0D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017E0D4
  if (!crb(c,2)) { goto L_8017E0EC; } // 8017E0D8
  c->r[0]=0u+0x00000000u; // 8017E0DC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8017E0E0
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017E0E4
  {uint32_t ea=c->r[3]+0x0000066Cu; WF32(ea,c->f[0]);} // 8017E0E8
L_8017E0EC:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 8017E0EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E0F0
  if (!crb(c,2)) { goto L_8017E130; } // 8017E0F4
  c->r[30]=0u+0x80730000u; // 8017E0F8
  c->r[3]=c->r[30]+0x00006D10u; // 8017E0FC
  c->lr=0x8017E104u; f_802D8298(c); // 8017E100
  c->r[3]=0u+0x806D0000u; // 8017E104
  c->r[4]=0u+0x80050000u; // 8017E108
  c->r[3]=c->r[3]+0xFFFFC220u; // 8017E10C
  c->r[5]=0u+0x80750000u; // 8017E110
  W32(c->r[30]+0x00006D10u,c->r[3]); // 8017E114
  c->r[3]=c->r[30]+0x00006D10u; // 8017E118
  c->r[4]=c->r[4]+0xFFFF9D40u; // 8017E11C
  c->r[5]=c->r[5]+0x000049F0u; // 8017E120
  c->lr=0x8017E128u; f_803A92B8(c); // 8017E124
  c->r[0]=0u+0x00000001u; // 8017E128
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 8017E12C
L_8017E130:;
  c->r[4]=0u+0x80730000u; // 8017E130
  {uint32_t ea=c->r[31]+0x0000066Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017E134
  c->r[4]=c->r[4]+0x00006D10u; // 8017E138
  c->r[3]=c->r[31]+0x00000354u; // 8017E13C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E140
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8017E144
  {uint32_t ea=c->r[31]+0x0000066Cu; WF32(ea,c->f[0]);} // 8017E148
  c->lr=0x8017E150u; f_800667AC(c); // 8017E14C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E150
  if (crb(c,2)) { goto L_8017E1A0; } // 8017E154
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8017E158
  cmps(c,0,(int32_t)c->r[0],0); // 8017E15C
  if (!crb(c,2)) { goto L_8017E184; } // 8017E160
  c->r[0]=0u+0x00000001u; // 8017E164
  c->r[4]=0u+0x00010000u; // 8017E168
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8017E16C
  c->r[3]=c->r[31]|c->r[31]; // 8017E170
  c->r[4]=c->r[4]+0xFFFFDADEu; // 8017E174
  c->r[5]=0u+0x00000001u; // 8017E178
  c->lr=0x8017E180u; f_80064744(c); // 8017E17C
  goto L_8017E1A0; // 8017E180
L_8017E184:;
  c->r[0]=0u+0x00000000u; // 8017E184
  c->r[4]=0u+0x00010000u; // 8017E188
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8017E18C
  c->r[3]=c->r[31]|c->r[31]; // 8017E190
  c->r[4]=c->r[4]+0xFFFFDAE8u; // 8017E194
  c->r[5]=0u+0x00000001u; // 8017E198
  c->lr=0x8017E1A0u; f_80064744(c); // 8017E19C
L_8017E1A0:;
  c->r[30]=0u+0x00010000u; // 8017E1A0
  c->r[3]=c->r[31]+0x00000354u; // 8017E1A4
  c->r[4]=c->r[30]+0xFFFFDADEu; // 8017E1A8
  c->lr=0x8017E1B0u; f_800667BC(c); // 8017E1AC
  cmps(c,0,(int32_t)c->r[3],0); // 8017E1B0
  if (crb(c,2)) { goto L_8017E230; } // 8017E1B4
  c->r[3]=R32(c->r[31]+0x00000434u); // 8017E1B8
  c->r[4]=0u+0x00000003u; // 8017E1BC
  c->r[3]=c->r[3]+0x00000030u; // 8017E1C0
  c->lr=0x8017E1C8u; f_802D94E8(c); // 8017E1C4
  c->f[4]=c->f[1]; // 8017E1C8
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E1CC
  {uint32_t ea=c->r[2]+0xFFFFBE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017E1D0
  c->r[3]=c->r[31]|c->r[31]; // 8017E1D4
  {uint32_t ea=c->r[2]+0xFFFFBE0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017E1D8
  c->lr=0x8017E1E0u; f_8017D4B8(c); // 8017E1DC
  cmps(c,0,(int32_t)c->r[3],0); // 8017E1E0
  if (crb(c,2)) { goto L_8017E1FC; } // 8017E1E4
  c->r[3]=c->r[31]|c->r[31]; // 8017E1E8
  c->r[4]=c->r[30]+0xFFFFDADFu; // 8017E1EC
  c->r[5]=0u+0x00000001u; // 8017E1F0
  c->lr=0x8017E1F8u; f_80064744(c); // 8017E1F4
  goto L_8017E230; // 8017E1F8
L_8017E1FC:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017E1FC
  {uint32_t ea=c->r[2]+0xFFFFBE14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E200
  c->lr=0x8017E208u; f_802EA5A4(c); // 8017E204
  cmps(c,0,(int32_t)c->r[3],0); // 8017E208
  if (crb(c,2)) { goto L_8017E230; } // 8017E20C
  c->r[3]=R32(c->r[31]+0x00000434u); // 8017E210
  c->r[4]=0u+0x00000002u; // 8017E214
  c->r[3]=c->r[3]+0x00000030u; // 8017E218
  c->lr=0x8017E220u; f_802D94E8(c); // 8017E21C
  c->r[3]=c->r[31]|c->r[31]; // 8017E220
  c->r[4]=0u+0x00000000u; // 8017E224
  c->r[5]=0u+0xFFFFFFFFu; // 8017E228
  c->lr=0x8017E230u; f_80062194(c); // 8017E22C
L_8017E230:;
  c->r[30]=0u+0x00010000u; // 8017E230
  c->r[3]=c->r[31]+0x00000354u; // 8017E234
  c->r[4]=c->r[30]+0xFFFFDAE8u; // 8017E238
  c->lr=0x8017E240u; f_800667BC(c); // 8017E23C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E240
  if (crb(c,2)) { goto L_8017E2C0; } // 8017E244
  c->r[3]=R32(c->r[31]+0x00000434u); // 8017E248
  c->r[4]=0u+0x00000005u; // 8017E24C
  c->r[3]=c->r[3]+0x00000030u; // 8017E250
  c->lr=0x8017E258u; f_802D94E8(c); // 8017E254
  c->f[4]=c->f[1]; // 8017E258
  {uint32_t ea=c->r[2]+0xFFFFBDC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E25C
  {uint32_t ea=c->r[2]+0xFFFFBE18u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017E260
  c->r[3]=c->r[31]|c->r[31]; // 8017E264
  {uint32_t ea=c->r[2]+0xFFFFBDE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017E268
  c->lr=0x8017E270u; f_8017D4B8(c); // 8017E26C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E270
  if (crb(c,2)) { goto L_8017E28C; } // 8017E274
  c->r[3]=c->r[31]|c->r[31]; // 8017E278
  c->r[4]=c->r[30]+0xFFFFDAE9u; // 8017E27C
  c->r[5]=0u+0x00000001u; // 8017E280
  c->lr=0x8017E288u; f_80064744(c); // 8017E284
  goto L_8017E2C0; // 8017E288
L_8017E28C:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017E28C
  {uint32_t ea=c->r[2]+0xFFFFBE1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E290
  c->lr=0x8017E298u; f_802EA5A4(c); // 8017E294
  cmps(c,0,(int32_t)c->r[3],0); // 8017E298
  if (crb(c,2)) { goto L_8017E2C0; } // 8017E29C
  c->r[3]=R32(c->r[31]+0x00000434u); // 8017E2A0
  c->r[4]=0u+0x00000004u; // 8017E2A4
  c->r[3]=c->r[3]+0x00000030u; // 8017E2A8
  c->lr=0x8017E2B0u; f_802D94E8(c); // 8017E2AC
  c->r[3]=c->r[31]|c->r[31]; // 8017E2B0
  c->r[4]=0u+0x00000000u; // 8017E2B4
  c->r[5]=0u+0xFFFFFFFFu; // 8017E2B8
  c->lr=0x8017E2C0u; f_80062194(c); // 8017E2BC
L_8017E2C0:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E2C0
  c->lr=0x8017E2C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E2C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E2C8
  c->lr=c->r[0]; // 8017E2CC
  c->r[1]=c->r[1]+0x00000020u; // 8017E2D0
  return; // 8017E2D4
}

// fn_8017E2D8
void f_8017E2D8(Ctx* __restrict c) {
  trace_call(0x8017E2D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E2D8
  c->r[0]=c->lr; // 8017E2DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E2E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8017E2E4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8017E2E8
  c->r[30]=c->r[3]|c->r[3]; // 8017E2EC
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017E2F0
  cmps(c,0,(int32_t)c->r[4],0); // 8017E2F4
  if (crb(c,2)) { goto L_8017E304; } // 8017E2F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017E2FC
  goto L_8017E308; // 8017E300
L_8017E304:;
  c->r[0]=0u+0x00000000u; // 8017E304
L_8017E308:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017E308
  if (!crb(c,2)) { goto L_8017E398; } // 8017E30C
  c->r[31]=0u+0x00000000u; // 8017E310
  W8(c->r[3]+0x00000784u,c->r[31]); // 8017E314
  c->r[7]=R32(c->r[3]+0x00000504u); // 8017E318
  c->r[4]=c->r[1]+0x00000008u; // 8017E31C
  c->r[0]=R32(c->r[3]+0x00000508u); // 8017E320
  c->r[3]=c->r[30]|c->r[30]; // 8017E324
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E328
  c->r[5]=0u+0x00000021u; // 8017E32C
  c->r[6]=0u+0x00000000u; // 8017E330
  W32(c->r[1]+0x00000008u,c->r[7]); // 8017E334
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017E338
  c->r[12]=R32(c->r[12]+0x000001A0u); // 8017E33C
  c->ctr=c->r[12]; // 8017E340
  if (true) { c->lr=0x8017E348u; dispatch(c,c->ctr); } // 8017E344
  c->r[4]=0u+0x00010000u; // 8017E348
  c->r[3]=c->r[30]|c->r[30]; // 8017E34C
  c->r[4]=c->r[4]+0xFFFFDB10u; // 8017E350
  c->r[5]=0u+0x00000001u; // 8017E354
  c->lr=0x8017E35Cu; f_80064744(c); // 8017E358
  c->r[4]=0u+0x80690000u; // 8017E35C
  W32(c->r[30]+0x00000780u,c->r[31]); // 8017E360
  c->r[4]=c->r[4]+0x00001820u; // 8017E364
  c->r[3]=c->r[30]+0x000000FCu; // 8017E368
  c->r[4]=c->r[4]+0x00000081u; // 8017E36C
  c->lr=0x8017E374u; f_802E6F14(c); // 8017E370
  c->r[4]=c->r[3]|c->r[3]; // 8017E374
  c->r[3]=c->r[1]+0x0000001Cu; // 8017E378
  c->lr=0x8017E380u; f_80060878(c); // 8017E37C
  c->lr=0x8017E384u; f_8033FE4C(c); // 8017E380
  c->lr=0x8017E388u; f_8007FF5C(c); // 8017E384
  {uint32_t ea=c->r[2]+0xFFFFBDC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E388
  c->r[4]=c->r[1]+0x0000001Cu; // 8017E38C
  c->r[5]=0u+0x00000007u; // 8017E390
  c->lr=0x8017E398u; f_803676A8(c); // 8017E394
L_8017E398:;
  c->r[4]=0u+0x80690000u; // 8017E398
  c->r[3]=c->r[30]+0x000000FCu; // 8017E39C
  c->r[4]=c->r[4]+0x00001820u; // 8017E3A0
  c->r[4]=c->r[4]+0x00000081u; // 8017E3A4
  c->lr=0x8017E3ACu; f_802E6F14(c); // 8017E3A8
  c->r[4]=c->r[3]|c->r[3]; // 8017E3AC
  c->r[3]=c->r[1]+0x00000010u; // 8017E3B0
  c->lr=0x8017E3B8u; f_80060878(c); // 8017E3B4
  c->lr=0x8017E3BCu; f_8033FE4C(c); // 8017E3B8
  c->lr=0x8017E3C0u; f_8007FF5C(c); // 8017E3BC
  {uint32_t ea=c->r[2]+0xFFFFBE4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E3C0
  c->r[4]=c->r[1]+0x00000010u; // 8017E3C4
  c->lr=0x8017E3CCu; f_80367A20(c); // 8017E3C8
  c->r[3]=c->r[30]+0x00000354u; // 8017E3CC
  c->lr=0x8017E3D4u; f_800667AC(c); // 8017E3D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017E3D4
  if (crb(c,2)) { goto L_8017E3F4; } // 8017E3D8
  c->r[3]=c->r[30]|c->r[30]; // 8017E3DC
  c->lr=0x8017E3E4u; f_8005E00C(c); // 8017E3E0
  c->r[3]=c->r[30]|c->r[30]; // 8017E3E4
  c->r[4]=0u+0x00000016u; // 8017E3E8
  c->r[5]=0u+0x00000001u; // 8017E3EC
  c->lr=0x8017E3F4u; f_800D5F20(c); // 8017E3F0
L_8017E3F4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017E3F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8017E3F8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8017E3FC
  c->lr=c->r[0]; // 8017E400
  c->r[1]=c->r[1]+0x00000030u; // 8017E404
  return; // 8017E408
}

// fn_8017E40C
void f_8017E40C(Ctx* __restrict c) {
  trace_call(0x8017E40Cu);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 8017E40C
  f_8017CE5C(c); return; // 8017E410
}

// fn_8017E414
void f_8017E414(Ctx* __restrict c) {
  trace_call(0x8017E414u);
  c->r[3]=c->r[3]+0xFFFFFA40u; // 8017E414
  f_8017D594(c); return; // 8017E418
}

// fn_8017E41C
void f_8017E41C(Ctx* __restrict c) {
  trace_call(0x8017E41Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E41C
  c->r[0]=c->lr; // 8017E420
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017E424
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017E428
  c->r[25]=c->r[3]|c->r[3]; // 8017E42C
  c->r[30]=0u+0x80690000u; // 8017E430
  c->r[31]=c->r[25]|c->r[25]; // 8017E434
  c->r[29]=c->r[25]|c->r[25]; // 8017E438
  c->r[26]=c->r[25]|c->r[25]; // 8017E43C
  c->r[28]=c->r[25]|c->r[25]; // 8017E440
  c->r[30]=c->r[30]+0x000018B8u; // 8017E444
  c->lr=0x8017E44Cu; f_8017F1BC(c); // 8017E448
  c->r[4]=0u+0x806D0000u; // 8017E44C
  c->r[27]=addc(c,c->r[25],0x00000020u,0); cr0(c,c->r[27]); // 8017E450
  c->r[0]=0u+0x00000000u; // 8017E454
  W32(c->r[25]+0x00000000u,c->r[3]); // 8017E458
  c->r[4]=c->r[4]+0x000038C0u; // 8017E45C
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 8017E460
  W32(c->r[25]+0x00000004u,c->r[0]); // 8017E464
  W32(c->r[25]+0x00000008u,c->r[0]); // 8017E468
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 8017E46C
  W8(c->r[25]+0x00000010u,c->r[0]); // 8017E470
  W32(c->r[25]+0x00000014u,c->r[0]); // 8017E474
  W32(c->r[25]+0x00000018u,c->r[0]); // 8017E478
  W32(c->r[25]+0x00000020u,c->r[0]); // 8017E47C
  W32(c->r[25]+0x00000024u,c->r[0]); // 8017E480
  if (crb(c,2)) { goto L_8017E48C; } // 8017E484
  c->r[27]=c->r[27]+0xFFFFFFE0u; // 8017E488
L_8017E48C:;
  c->lr=0x8017E490u; f_800797AC(c); // 8017E48C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017E490
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 8017E494
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017E498
  if (!crb(c,2)) { goto L_8017E4A8; } // 8017E49C
  c->r[0]=0u+0x00000001u; // 8017E4A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017E4A4
L_8017E4A8:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8017E4A8
  c->r[5]=0u+0x0000012Cu; // 8017E4AC
  c->r[4]=c->r[7]+0x00000001u; // 8017E4B0
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017E4B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017E4B8
  c->r[6]=c->r[4]-c->r[0]; // 8017E4BC
  goto L_8017E50C; // 8017E4C0
L_8017E4C4:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8017E4C4
  c->r[4]=c->r[3]+c->r[0]; // 8017E4C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017E4CC
  cmps(c,0,(int32_t)c->r[0],0); // 8017E4D0
  if (!crb(c,2)) { goto L_8017E4FC; } // 8017E4D4
  W32(c->r[3]+0x00000004u,c->r[6]); // 8017E4D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017E4DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 8017E4E0
  W32(c->r[4]+0x0000000Cu,c->r[27]); // 8017E4E4
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017E4E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017E4EC
  W32(c->r[1]+0x00000010u,c->r[4]); // 8017E4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E4F4
  goto L_8017E528; // 8017E4F8
L_8017E4FC:;
  c->r[4]=c->r[6]+0x00000001u; // 8017E4FC
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017E500
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017E504
  c->r[6]=c->r[4]-c->r[0]; // 8017E508
L_8017E50C:;
  cmpu(c,0,c->r[6],c->r[7]); // 8017E50C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017E4C4; } // 8017E510
  c->r[0]=0u+0x00000000u; // 8017E514
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E518
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E51C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E520
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E524
L_8017E528:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8017E528
  c->r[23]=c->r[25]+0x00000028u; // 8017E52C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017E530
  c->r[3]=c->r[23]|c->r[23]; // 8017E534
  W32(c->r[1]+0x00000018u,c->r[4]); // 8017E538
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E53C
  W32(c->r[25]+0x00000020u,c->r[4]); // 8017E540
  W32(c->r[25]+0x00000024u,c->r[0]); // 8017E544
  c->lr=0x8017E54Cu; f_800506C0(c); // 8017E548
  cmps(c,0,(int32_t)c->r[23],0); // 8017E54C
  c->r[3]=c->r[23]|c->r[23]; // 8017E550
  if (crb(c,2)) { goto L_8017E55C; } // 8017E554
  c->r[3]=c->r[23]+0xFFFFFFD8u; // 8017E558
L_8017E55C:;
  c->r[27]=0u+0x00000001u; // 8017E55C
  W32(c->r[23]+0x00000008u,c->r[3]); // 8017E560
  W8(c->r[23]+0x0000000Cu,c->r[27]); // 8017E564
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 8017E568
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E56C
  if (!crb(c,2)) { goto L_8017E5B0; } // 8017E570
  c->r[24]=0u+0x80740000u; // 8017E574
  c->r[3]=c->r[24]+0x000074BCu; // 8017E578
  c->lr=0x8017E580u; f_800506C0(c); // 8017E57C
  c->r[6]=0u+0x806D0000u; // 8017E580
  c->r[4]=0u+0x80060000u; // 8017E584
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 8017E588
  c->r[3]=c->r[24]+0x000074BCu; // 8017E58C
  c->r[0]=c->r[6]+0x00000008u; // 8017E590
  c->r[5]=0u+0x80750000u; // 8017E594
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017E598
  c->r[4]=c->r[4]+0x000057D4u; // 8017E59C
  c->r[5]=c->r[5]+0x00004A48u; // 8017E5A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017E5A4
  c->lr=0x8017E5ACu; f_803A92B8(c); // 8017E5A8
  W8(c->r[13]+0xFFFFBE09u,c->r[27]); // 8017E5AC
L_8017E5B0:;
  c->r[3]=0u+0x80740000u; // 8017E5B0
  c->r[5]=c->r[23]|c->r[23]; // 8017E5B4
  c->r[3]=c->r[3]+0x000074BCu; // 8017E5B8
  c->r[4]=c->r[3]|c->r[3]; // 8017E5BC
  c->lr=0x8017E5C4u; f_802DDCA8(c); // 8017E5C0
  c->r[24]=c->r[25]+0x00000038u; // 8017E5C4
  c->r[3]=c->r[24]|c->r[24]; // 8017E5C8
  c->lr=0x8017E5D0u; f_800506C0(c); // 8017E5CC
  cmps(c,0,(int32_t)c->r[24],0); // 8017E5D0
  c->r[0]=c->r[24]|c->r[24]; // 8017E5D4
  if (crb(c,2)) { goto L_8017E5E0; } // 8017E5D8
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 8017E5DC
L_8017E5E0:;
  c->r[27]=c->r[25]+0x00000044u; // 8017E5E0
  W32(c->r[24]+0x00000008u,c->r[0]); // 8017E5E4
  c->r[3]=c->r[27]|c->r[27]; // 8017E5E8
  c->lr=0x8017E5F0u; f_800506C0(c); // 8017E5EC
  cmps(c,0,(int32_t)c->r[27],0); // 8017E5F0
  c->r[0]=c->r[27]|c->r[27]; // 8017E5F4
  if (crb(c,2)) { goto L_8017E600; } // 8017E5F8
  c->r[0]=c->r[27]+0xFFFFFFBCu; // 8017E5FC
L_8017E600:;
  c->r[3]=0u+0x806F0000u; // 8017E600
  c->r[24]=0u+0x00000000u; // 8017E604
  c->r[3]=c->r[3]+0x00000E80u; // 8017E608
  W32(c->r[27]+0x00000008u,c->r[0]); // 8017E60C
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 8017E610
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8017E614
  W32(c->r[25]+0x00000058u,c->r[24]); // 8017E618
  W32(c->r[25]+0x00000064u,c->r[24]); // 8017E61C
  c->lr=0x8017E624u; f_8007BDCC(c); // 8017E620
  c->r[0]=c->r[13]+0xFFFF8114u; // 8017E624
  W32(c->r[25]+0x0000009Cu,c->r[3]); // 8017E628
  W32(c->r[25]+0x000000A0u,c->r[0]); // 8017E62C
  W32(c->r[25]+0x000000A4u,c->r[24]); // 8017E630
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 8017E634
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E638
  if (!crb(c,2)) { goto L_8017E65C; } // 8017E63C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017E640
  c->r[0]=0u+0x00000001u; // 8017E644
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017E648
  c->r[3]=c->r[4]+0x00000001u; // 8017E64C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017E650
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 8017E654
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8017E658
L_8017E65C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 8017E65C
  c->r[3]=c->r[13]+0xFFFF8110u; // 8017E660
  c->r[0]=0u+0x00000000u; // 8017E664
  W32(c->r[25]+0x000000A8u,c->r[4]); // 8017E668
  W32(c->r[25]+0x000000ACu,c->r[3]); // 8017E66C
  W32(c->r[25]+0x000000B0u,c->r[0]); // 8017E670
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 8017E674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E678
  if (!crb(c,2)) { goto L_8017E69C; } // 8017E67C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017E680
  c->r[0]=0u+0x00000001u; // 8017E684
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017E688
  c->r[3]=c->r[4]+0x00000001u; // 8017E68C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017E690
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 8017E694
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 8017E698
L_8017E69C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 8017E69C
  c->r[3]=c->r[13]+0xFFFF810Cu; // 8017E6A0
  c->r[0]=0u+0x00000000u; // 8017E6A4
  W32(c->r[25]+0x000000B4u,c->r[4]); // 8017E6A8
  W32(c->r[25]+0x000000B8u,c->r[3]); // 8017E6AC
  W32(c->r[25]+0x000000BCu,c->r[0]); // 8017E6B0
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 8017E6B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E6B8
  if (!crb(c,2)) { goto L_8017E6DC; } // 8017E6BC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017E6C0
  c->r[0]=0u+0x00000001u; // 8017E6C4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017E6C8
  c->r[3]=c->r[4]+0x00000001u; // 8017E6CC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017E6D0
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 8017E6D4
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8017E6D8
L_8017E6DC:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 8017E6DC
  c->r[3]=c->r[13]+0xFFFF8108u; // 8017E6E0
  c->r[0]=0u+0x00000000u; // 8017E6E4
  W32(c->r[25]+0x000000C0u,c->r[4]); // 8017E6E8
  W32(c->r[25]+0x000000C4u,c->r[3]); // 8017E6EC
  W32(c->r[25]+0x000000C8u,c->r[0]); // 8017E6F0
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 8017E6F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E6F8
  if (!crb(c,2)) { goto L_8017E71C; } // 8017E6FC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017E700
  c->r[0]=0u+0x00000001u; // 8017E704
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017E708
  c->r[3]=c->r[4]+0x00000001u; // 8017E70C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017E710
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 8017E714
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8017E718
L_8017E71C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 8017E71C
  c->r[0]=c->r[13]+0xFFFF8104u; // 8017E720
  c->r[24]=0u+0x00000000u; // 8017E724
  W32(c->r[25]+0x000000CCu,c->r[3]); // 8017E728
  c->r[3]=c->r[25]+0x000000D8u; // 8017E72C
  W32(c->r[25]+0x000000D0u,c->r[0]); // 8017E730
  W32(c->r[25]+0x000000D4u,c->r[24]); // 8017E734
  c->lr=0x8017E73Cu; f_800506C0(c); // 8017E738
  c->r[4]=0u+0x806F0000u; // 8017E73C
  c->r[3]=0u+0x00000006u; // 8017E740
  c->r[4]=c->r[4]+0x000007A0u; // 8017E744
  c->r[27]=c->r[25]+0x000000FCu; // 8017E748
  c->r[0]=c->r[4]+0x00000024u; // 8017E74C
  W32(c->r[25]+0x000000E8u,c->r[3]); // 8017E750
  c->r[3]=c->r[27]+0x0000000Cu; // 8017E754
  W32(c->r[25]+0x000000ECu,c->r[24]); // 8017E758
  W32(c->r[25]+0x000000F8u,c->r[24]); // 8017E75C
  W32(c->r[25]+0x000000FCu,c->r[4]); // 8017E760
  W32(c->r[25]+0x00000100u,c->r[0]); // 8017E764
  c->lr=0x8017E76Cu; f_800506C0(c); // 8017E768
  c->r[3]=c->r[27]+0x00000018u; // 8017E76C
  c->lr=0x8017E774u; f_800506C0(c); // 8017E770
  W32(c->r[27]+0x00000024u,c->r[24]); // 8017E774
  c->r[3]=c->r[27]+0x000000B0u; // 8017E778
  c->lr=0x8017E780u; f_800506C0(c); // 8017E77C
  c->r[12]=R32(c->r[27]+0x00000000u); // 8017E780
  c->r[3]=c->r[27]|c->r[27]; // 8017E784
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8017E788
  c->ctr=c->r[12]; // 8017E78C
  if (true) { c->lr=0x8017E794u; dispatch(c,c->ctr); } // 8017E790
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 8017E794
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E798
  if (!crb(c,2)) { goto L_8017E7B8; } // 8017E79C
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 8017E7A0
  c->r[0]=0u+0x00000001u; // 8017E7A4
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 8017E7A8
  c->r[3]=c->r[3]+0x00000001u; // 8017E7AC
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 8017E7B0
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 8017E7B4
L_8017E7B8:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 8017E7B8
  c->r[5]=0u+0x806F0000u; // 8017E7BC
  c->r[5]=c->r[5]+0x000007F8u; // 8017E7C0
  c->r[0]=0u+0x00000032u; // 8017E7C4
  c->r[4]=c->r[5]+0x00000024u; // 8017E7C8
  W32(c->r[27]+0x00000008u,c->r[3]); // 8017E7CC
  c->r[6]=0u+0x00000000u; // 8017E7D0
  c->r[3]=0u+0x00000000u; // 8017E7D4
  W32(c->r[27]+0x00000000u,c->r[5]); // 8017E7D8
  W32(c->r[27]+0x00000004u,c->r[4]); // 8017E7DC
  c->ctr=c->r[0]; // 8017E7E0
L_8017E7E4:;
  c->r[4]=c->r[27]+c->r[3]; // 8017E7E4
  c->r[3]=c->r[3]+0x00000004u; // 8017E7E8
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 8017E7EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017E7E4; } // 8017E7F0
  c->r[3]=0u+0x806D0000u; // 8017E7F4
  c->r[7]=0u+0x00000000u; // 8017E7F8
  c->r[3]=c->r[3]+0x00003868u; // 8017E7FC
  c->r[0]=0u+0x0000000Au; // 8017E800
  c->r[4]=c->r[3]+0x00000024u; // 8017E804
  W32(c->r[27]+0x00000000u,c->r[3]); // 8017E808
  c->r[8]=0u+0x00000000u; // 8017E80C
  c->r[3]=0u+0x00000000u; // 8017E810
  W32(c->r[27]+0x00000004u,c->r[4]); // 8017E814
  c->r[6]=0u+0xFFFFFFFFu; // 8017E818
  W32(c->r[25]+0x00000314u,c->r[7]); // 8017E81C
  W8(c->r[25]+0x0000005Cu,c->r[7]); // 8017E820
  W32(c->r[25]+0x00000054u,c->r[7]); // 8017E824
  W32(c->r[25]+0x00000310u,c->r[25]); // 8017E828
  c->ctr=c->r[0]; // 8017E82C
L_8017E830:;
  c->r[5]=c->r[25]+c->r[3]; // 8017E830
  c->r[4]=c->r[25]+c->r[8]; // 8017E834
  W32(c->r[5]+0x00000068u,c->r[6]); // 8017E838
  c->r[8]=c->r[8]+0x00000001u; // 8017E83C
  c->r[3]=c->r[3]+0x00000004u; // 8017E840
  W8(c->r[4]+0x00000090u,c->r[7]); // 8017E844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017E830; } // 8017E848
  c->r[23]=c->r[25]+0x00000318u; // 8017E84C
  c->r[3]=c->r[23]|c->r[23]; // 8017E850
  c->lr=0x8017E858u; f_800506C0(c); // 8017E854
  cmps(c,0,(int32_t)c->r[23],0); // 8017E858
  c->r[3]=c->r[23]|c->r[23]; // 8017E85C
  if (crb(c,2)) { goto L_8017E868; } // 8017E860
  c->r[3]=c->r[23]+0xFFFFFCE8u; // 8017E864
L_8017E868:;
  c->r[28]=0u+0x00000001u; // 8017E868
  W32(c->r[23]+0x00000008u,c->r[3]); // 8017E86C
  W8(c->r[23]+0x0000000Cu,c->r[28]); // 8017E870
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 8017E874
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E878
  if (!crb(c,2)) { goto L_8017E8BC; } // 8017E87C
  c->r[27]=0u+0x80750000u; // 8017E880
  c->r[3]=c->r[27]+0xFFFF816Cu; // 8017E884
  c->lr=0x8017E88Cu; f_800506C0(c); // 8017E888
  c->r[6]=0u+0x806D0000u; // 8017E88C
  c->r[4]=0u+0x80080000u; // 8017E890
  c->r[6]=c->r[6]+0x000038D8u; // 8017E894
  c->r[3]=c->r[27]+0xFFFF816Cu; // 8017E898
  c->r[0]=c->r[6]+0x00000008u; // 8017E89C
  c->r[5]=0u+0x80750000u; // 8017E8A0
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017E8A4
  c->r[4]=c->r[4]+0xFFFF9844u; // 8017E8A8
  c->r[5]=c->r[5]+0x00004A3Cu; // 8017E8AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017E8B0
  c->lr=0x8017E8B8u; f_803A92B8(c); // 8017E8B4
  W8(c->r[13]+0xFFFFBE9Eu,c->r[28]); // 8017E8B8
L_8017E8BC:;
  c->r[3]=0u+0x80750000u; // 8017E8BC
  c->r[5]=c->r[23]|c->r[23]; // 8017E8C0
  c->r[3]=c->r[3]+0xFFFF816Cu; // 8017E8C4
  c->r[4]=c->r[3]|c->r[3]; // 8017E8C8
  c->lr=0x8017E8D0u; f_802DDCA8(c); // 8017E8CC
  c->r[3]=0u+0x806D0000u; // 8017E8D0
  c->r[0]=0u+0x00000000u; // 8017E8D4
  c->r[3]=c->r[3]+0xFFFFD974u; // 8017E8D8
  c->r[5]=0u+0xFFFFFFFFu; // 8017E8DC
  c->r[4]=0u+0x00000001u; // 8017E8E0
  c->r[24]=c->r[25]+0x0000032Cu; // 8017E8E4
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8017E8E8
  c->r[3]=c->r[24]|c->r[24]; // 8017E8EC
  W32(c->r[25]+0x00000328u,c->r[5]); // 8017E8F0
  W32(c->r[25]+0x000000ECu,c->r[4]); // 8017E8F4
  W32(c->r[25]+0x00000054u,c->r[0]); // 8017E8F8
  W32(c->r[25]+0x00000314u,c->r[0]); // 8017E8FC
  c->lr=0x8017E904u; f_800506C0(c); // 8017E900
  cmps(c,0,(int32_t)c->r[24],0); // 8017E904
  c->r[3]=c->r[24]|c->r[24]; // 8017E908
  if (crb(c,2)) { goto L_8017E914; } // 8017E90C
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 8017E910
L_8017E914:;
  c->r[27]=0u+0x00000001u; // 8017E914
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017E918
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8017E91C
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 8017E920
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E924
  if (!crb(c,2)) { goto L_8017E968; } // 8017E928
  c->r[26]=0u+0x80730000u; // 8017E92C
  c->r[3]=c->r[26]+0x000073A8u; // 8017E930
  c->lr=0x8017E938u; f_800506C0(c); // 8017E934
  c->r[6]=0u+0x806D0000u; // 8017E938
  c->r[4]=0u+0x80050000u; // 8017E93C
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 8017E940
  c->r[3]=c->r[26]+0x000073A8u; // 8017E944
  c->r[0]=c->r[6]+0x00000008u; // 8017E948
  c->r[5]=0u+0x80750000u; // 8017E94C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017E950
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 8017E954
  c->r[5]=c->r[5]+0x00004A30u; // 8017E958
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017E95C
  c->lr=0x8017E964u; f_803A92B8(c); // 8017E960
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 8017E964
L_8017E968:;
  c->r[3]=0u+0x80730000u; // 8017E968
  c->r[5]=c->r[24]|c->r[24]; // 8017E96C
  c->r[3]=c->r[3]+0x000073A8u; // 8017E970
  c->r[4]=c->r[3]|c->r[3]; // 8017E974
  c->lr=0x8017E97Cu; f_802DDCA8(c); // 8017E978
  c->r[24]=c->r[25]+0x0000033Cu; // 8017E97C
  c->r[3]=c->r[24]|c->r[24]; // 8017E980
  c->lr=0x8017E988u; f_800506C0(c); // 8017E984
  cmps(c,0,(int32_t)c->r[24],0); // 8017E988
  c->r[3]=c->r[24]|c->r[24]; // 8017E98C
  if (crb(c,2)) { goto L_8017E998; } // 8017E990
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 8017E994
L_8017E998:;
  c->r[27]=0u+0x00000001u; // 8017E998
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017E99C
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8017E9A0
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 8017E9A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017E9A8
  if (!crb(c,2)) { goto L_8017E9EC; } // 8017E9AC
  c->r[26]=0u+0x80750000u; // 8017E9B0
  c->r[3]=c->r[26]+0xFFFF8158u; // 8017E9B4
  c->lr=0x8017E9BCu; f_800506C0(c); // 8017E9B8
  c->r[6]=0u+0x806D0000u; // 8017E9BC
  c->r[4]=0u+0x80080000u; // 8017E9C0
  c->r[6]=c->r[6]+0x000038F0u; // 8017E9C4
  c->r[3]=c->r[26]+0xFFFF8158u; // 8017E9C8
  c->r[0]=c->r[6]+0x00000008u; // 8017E9CC
  c->r[5]=0u+0x80750000u; // 8017E9D0
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017E9D4
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8017E9D8
  c->r[5]=c->r[5]+0x00004A24u; // 8017E9DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017E9E0
  c->lr=0x8017E9E8u; f_803A92B8(c); // 8017E9E4
  W8(c->r[13]+0xFFFFBE9Du,c->r[27]); // 8017E9E8
L_8017E9EC:;
  c->r[3]=0u+0x80750000u; // 8017E9EC
  c->r[5]=c->r[24]|c->r[24]; // 8017E9F0
  c->r[3]=c->r[3]+0xFFFF8158u; // 8017E9F4
  c->r[4]=c->r[3]|c->r[3]; // 8017E9F8
  c->lr=0x8017EA00u; f_802DDCA8(c); // 8017E9FC
  c->r[3]=0u+0x806D0000u; // 8017EA00
  W32(c->r[25]+0x00000054u,c->r[30]); // 8017EA04
  c->r[3]=c->r[3]+0x00004AE8u; // 8017EA08
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8017EA0C
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 8017EA10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EA14
  if (!crb(c,2)) { goto L_8017EA34; } // 8017EA18
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8017EA1C
  c->r[0]=0u+0x00000001u; // 8017EA20
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 8017EA24
  c->r[3]=c->r[3]+0x00000001u; // 8017EA28
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8017EA2C
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 8017EA30
L_8017EA34:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 8017EA34
  W32(c->r[25]+0x00000328u,c->r[0]); // 8017EA38
  c->r[0]=R8(c->r[13]+0xFFFFCD0Cu); // 8017EA3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EA40
  if (!crb(c,2)) { goto L_8017EA60; } // 8017EA44
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 8017EA48
  c->r[0]=0u+0x00000001u; // 8017EA4C
  W32(c->r[13]+0xFFFFCD08u,c->r[3]); // 8017EA50
  c->r[3]=c->r[3]+0x00000001u; // 8017EA54
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 8017EA58
  W8(c->r[13]+0xFFFFCD0Cu,c->r[0]); // 8017EA5C
L_8017EA60:;
  c->r[0]=R32(c->r[13]+0xFFFFCD08u); // 8017EA60
  W32(c->r[25]+0x0000034Cu,c->r[0]); // 8017EA64
  c->r[0]=R8(c->r[13]+0xFFFFCD04u); // 8017EA68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EA6C
  if (!crb(c,2)) { goto L_8017EA8C; } // 8017EA70
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 8017EA74
  c->r[0]=0u+0x00000001u; // 8017EA78
  W32(c->r[13]+0xFFFFCD00u,c->r[3]); // 8017EA7C
  c->r[3]=c->r[3]+0x00000001u; // 8017EA80
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 8017EA84
  W8(c->r[13]+0xFFFFCD04u,c->r[0]); // 8017EA88
L_8017EA8C:;
  c->r[0]=R32(c->r[13]+0xFFFFCD00u); // 8017EA8C
  c->r[5]=0u+0x806D0000u; // 8017EA90
  c->r[5]=c->r[5]+0xFFFFE468u; // 8017EA94
  W32(c->r[25]+0x00000350u,c->r[0]); // 8017EA98
  c->r[3]=c->r[25]+0x000003B0u; // 8017EA9C
  c->r[4]=0u+0x00000000u; // 8017EAA0
  W32(c->r[25]+0x00000400u,c->r[5]); // 8017EAA4
  c->r[5]=0u+0x00000050u; // 8017EAA8
  c->lr=0x8017EAB0u; f_800043EC(c); // 8017EAAC
  c->r[4]=0u+0x806D0000u; // 8017EAB0
  c->r[3]=c->r[25]+0x00000450u; // 8017EAB4
  c->r[4]=c->r[4]+0xFFFFE170u; // 8017EAB8
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 8017EABC
  c->r[0]=c->r[4]+0x00000044u; // 8017EAC0
  W32(c->r[25]+0x00000400u,c->r[0]); // 8017EAC4
  c->lr=0x8017EACCu; f_8007BDFC(c); // 8017EAC8
  c->r[3]=c->r[25]+0x000004C4u; // 8017EACC
  c->lr=0x8017EAD4u; f_8007BDFC(c); // 8017EAD0
  c->r[3]=c->r[25]+0x00000538u; // 8017EAD4
  c->r[4]=0u+0x00000000u; // 8017EAD8
  c->r[5]=0u+0x00000008u; // 8017EADC
  c->lr=0x8017EAE4u; f_800043EC(c); // 8017EAE0
  c->r[23]=R32(c->r[13]+0xFFFFDBDCu); // 8017EAE4
  cmps(c,0,(int32_t)c->r[23],0); // 8017EAE8
  if (crb(c,2)) { goto L_8017EB30; } // 8017EAEC
  c->lr=0x8017EAF4u; f_8017F1BC(c); // 8017EAF0
  c->r[26]=c->r[3]|c->r[3]; // 8017EAF4
  c->lr=0x8017EAFCu; f_8007BDCC(c); // 8017EAF8
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 8017EAFC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EB00
  c->r[5]=0u+0x80180000u; // 8017EB04
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8017EB08
  c->r[4]=c->r[23]+c->r[4]; // 8017EB0C
  c->r[5]=c->r[5]+0xFFFFF248u; // 8017EB10
  c->r[4]=c->r[4]+c->r[0]; // 8017EB14
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EB18
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017EB1C
  cmpu(c,0,c->r[0],0x0000000Cu); // 8017EB20
  if (!crb(c,0)) { goto L_8017EB30; } // 8017EB24
  c->r[0]=0u+0x0000000Cu; // 8017EB28
  W32(c->r[23]+c->r[3],c->r[0]); // 8017EB2C
L_8017EB30:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EB30
  cmps(c,0,(int32_t)c->r[26],0); // 8017EB34
  if (crb(c,2)) { goto L_8017EBA0; } // 8017EB38
  c->lr=0x8017EB40u; f_8017F1BC(c); // 8017EB3C
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 8017EB40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EB44
  if (!crb(c,2)) { goto L_8017EB68; } // 8017EB48
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EB4C
  c->r[0]=0u+0x00000001u; // 8017EB50
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017EB54
  c->r[4]=c->r[5]+0x00000001u; // 8017EB58
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017EB5C
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 8017EB60
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 8017EB64
L_8017EB68:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017EB68
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 8017EB6C
  c->r[5]=0u+0x80180000u; // 8017EB70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EB74
  c->r[4]=c->r[26]+c->r[4]; // 8017EB78
  c->r[5]=c->r[5]+0xFFFFF244u; // 8017EB7C
  c->r[4]=c->r[4]+c->r[0]; // 8017EB80
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EB84
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EB88
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EB8C
  cmpu(c,0,c->r[0],0x00000018u); // 8017EB90
  if (!crb(c,0)) { goto L_8017EBA0; } // 8017EB94
  c->r[0]=0u+0x00000018u; // 8017EB98
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EB9C
L_8017EBA0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EBA0
  cmps(c,0,(int32_t)c->r[26],0); // 8017EBA4
  if (crb(c,2)) { goto L_8017EC10; } // 8017EBA8
  c->lr=0x8017EBB0u; f_8017F1BC(c); // 8017EBAC
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 8017EBB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EBB4
  if (!crb(c,2)) { goto L_8017EBD8; } // 8017EBB8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EBBC
  c->r[0]=0u+0x00000001u; // 8017EBC0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017EBC4
  c->r[4]=c->r[5]+0x00000001u; // 8017EBC8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017EBCC
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 8017EBD0
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 8017EBD4
L_8017EBD8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017EBD8
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8017EBDC
  c->r[5]=0u+0x80180000u; // 8017EBE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EBE4
  c->r[4]=c->r[26]+c->r[4]; // 8017EBE8
  c->r[5]=c->r[5]+0xFFFFF240u; // 8017EBEC
  c->r[4]=c->r[4]+c->r[0]; // 8017EBF0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EBF4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EBF8
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EBFC
  cmpu(c,0,c->r[0],0x0000006Cu); // 8017EC00
  if (!crb(c,0)) { goto L_8017EC10; } // 8017EC04
  c->r[0]=0u+0x0000006Cu; // 8017EC08
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EC0C
L_8017EC10:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EC10
  cmps(c,0,(int32_t)c->r[26],0); // 8017EC14
  if (crb(c,2)) { goto L_8017EC80; } // 8017EC18
  c->lr=0x8017EC20u; f_8017F1BC(c); // 8017EC1C
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8017EC20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EC24
  if (!crb(c,2)) { goto L_8017EC48; } // 8017EC28
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EC2C
  c->r[0]=0u+0x00000001u; // 8017EC30
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017EC34
  c->r[4]=c->r[5]+0x00000001u; // 8017EC38
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017EC3C
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8017EC40
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 8017EC44
L_8017EC48:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017EC48
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 8017EC4C
  c->r[5]=0u+0x80180000u; // 8017EC50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EC54
  c->r[4]=c->r[26]+c->r[4]; // 8017EC58
  c->r[5]=c->r[5]+0xFFFFF23Cu; // 8017EC5C
  c->r[4]=c->r[4]+c->r[0]; // 8017EC60
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EC64
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EC68
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EC6C
  cmpu(c,0,c->r[0],0x0000002Cu); // 8017EC70
  if (!crb(c,0)) { goto L_8017EC80; } // 8017EC74
  c->r[0]=0u+0x0000002Cu; // 8017EC78
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EC7C
L_8017EC80:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EC80
  cmps(c,0,(int32_t)c->r[26],0); // 8017EC84
  if (crb(c,2)) { goto L_8017ECF0; } // 8017EC88
  c->lr=0x8017EC90u; f_8017F1BC(c); // 8017EC8C
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 8017EC90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EC94
  if (!crb(c,2)) { goto L_8017ECB8; } // 8017EC98
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EC9C
  c->r[0]=0u+0x00000001u; // 8017ECA0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017ECA4
  c->r[4]=c->r[5]+0x00000001u; // 8017ECA8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017ECAC
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 8017ECB0
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 8017ECB4
L_8017ECB8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017ECB8
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 8017ECBC
  c->r[5]=0u+0x80180000u; // 8017ECC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017ECC4
  c->r[4]=c->r[26]+c->r[4]; // 8017ECC8
  c->r[5]=c->r[5]+0xFFFFF238u; // 8017ECCC
  c->r[4]=c->r[4]+c->r[0]; // 8017ECD0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017ECD4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017ECD8
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017ECDC
  cmpu(c,0,c->r[0],0x00000010u); // 8017ECE0
  if (!crb(c,0)) { goto L_8017ECF0; } // 8017ECE4
  c->r[0]=0u+0x00000010u; // 8017ECE8
  W32(c->r[26]+c->r[3],c->r[0]); // 8017ECEC
L_8017ECF0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017ECF0
  cmps(c,0,(int32_t)c->r[26],0); // 8017ECF4
  if (crb(c,2)) { goto L_8017ED60; } // 8017ECF8
  c->lr=0x8017ED00u; f_8017F1BC(c); // 8017ECFC
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 8017ED00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017ED04
  if (!crb(c,2)) { goto L_8017ED28; } // 8017ED08
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017ED0C
  c->r[0]=0u+0x00000001u; // 8017ED10
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017ED14
  c->r[4]=c->r[5]+0x00000001u; // 8017ED18
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017ED1C
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 8017ED20
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 8017ED24
L_8017ED28:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017ED28
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 8017ED2C
  c->r[5]=0u+0x80180000u; // 8017ED30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017ED34
  c->r[4]=c->r[26]+c->r[4]; // 8017ED38
  c->r[5]=c->r[5]+0xFFFFF234u; // 8017ED3C
  c->r[4]=c->r[4]+c->r[0]; // 8017ED40
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017ED44
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017ED48
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017ED4C
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017ED50
  if (!crb(c,0)) { goto L_8017ED60; } // 8017ED54
  c->r[0]=0u+0x0000005Cu; // 8017ED58
  W32(c->r[26]+c->r[3],c->r[0]); // 8017ED5C
L_8017ED60:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017ED60
  cmps(c,0,(int32_t)c->r[26],0); // 8017ED64
  if (crb(c,2)) { goto L_8017EDD0; } // 8017ED68
  c->lr=0x8017ED70u; f_8017F1BC(c); // 8017ED6C
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8017ED70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017ED74
  if (!crb(c,2)) { goto L_8017ED98; } // 8017ED78
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017ED7C
  c->r[0]=0u+0x00000001u; // 8017ED80
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017ED84
  c->r[4]=c->r[5]+0x00000001u; // 8017ED88
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017ED8C
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 8017ED90
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 8017ED94
L_8017ED98:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017ED98
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 8017ED9C
  c->r[5]=0u+0x80180000u; // 8017EDA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EDA4
  c->r[4]=c->r[26]+c->r[4]; // 8017EDA8
  c->r[5]=c->r[5]+0xFFFFF230u; // 8017EDAC
  c->r[4]=c->r[4]+c->r[0]; // 8017EDB0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EDB4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EDB8
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EDBC
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017EDC0
  if (!crb(c,0)) { goto L_8017EDD0; } // 8017EDC4
  c->r[0]=0u+0x0000005Cu; // 8017EDC8
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EDCC
L_8017EDD0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EDD0
  cmps(c,0,(int32_t)c->r[26],0); // 8017EDD4
  if (crb(c,2)) { goto L_8017EE40; } // 8017EDD8
  c->lr=0x8017EDE0u; f_8017F1BC(c); // 8017EDDC
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 8017EDE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EDE4
  if (!crb(c,2)) { goto L_8017EE08; } // 8017EDE8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EDEC
  c->r[0]=0u+0x00000001u; // 8017EDF0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017EDF4
  c->r[4]=c->r[5]+0x00000001u; // 8017EDF8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017EDFC
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 8017EE00
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 8017EE04
L_8017EE08:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017EE08
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 8017EE0C
  c->r[5]=0u+0x80180000u; // 8017EE10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EE14
  c->r[4]=c->r[26]+c->r[4]; // 8017EE18
  c->r[5]=c->r[5]+0xFFFFF22Cu; // 8017EE1C
  c->r[4]=c->r[4]+c->r[0]; // 8017EE20
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EE24
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EE28
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EE2C
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017EE30
  if (!crb(c,0)) { goto L_8017EE40; } // 8017EE34
  c->r[0]=0u+0x0000005Cu; // 8017EE38
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EE3C
L_8017EE40:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017EE40
  cmps(c,0,(int32_t)c->r[26],0); // 8017EE44
  if (crb(c,2)) { goto L_8017EEB0; } // 8017EE48
  c->lr=0x8017EE50u; f_8017F1BC(c); // 8017EE4C
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 8017EE50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EE54
  if (!crb(c,2)) { goto L_8017EE78; } // 8017EE58
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017EE5C
  c->r[0]=0u+0x00000001u; // 8017EE60
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8017EE64
  c->r[4]=c->r[5]+0x00000001u; // 8017EE68
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017EE6C
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 8017EE70
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 8017EE74
L_8017EE78:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8017EE78
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 8017EE7C
  c->r[5]=0u+0x80180000u; // 8017EE80
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EE84
  c->r[4]=c->r[26]+c->r[4]; // 8017EE88
  c->r[5]=c->r[5]+0xFFFFF228u; // 8017EE8C
  c->r[4]=c->r[4]+c->r[0]; // 8017EE90
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EE94
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EE98
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017EE9C
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017EEA0
  if (!crb(c,0)) { goto L_8017EEB0; } // 8017EEA4
  c->r[0]=0u+0x0000005Cu; // 8017EEA8
  W32(c->r[26]+c->r[3],c->r[0]); // 8017EEAC
L_8017EEB0:;
  c->r[3]=c->r[25]|c->r[25]; // 8017EEB0
  c->lr=0x8017EEB8u; f_8005BBF0(c); // 8017EEB4
  c->r[24]=c->r[25]+0x000005C0u; // 8017EEB8
  c->r[3]=c->r[24]|c->r[24]; // 8017EEBC
  c->lr=0x8017EEC4u; f_800506C0(c); // 8017EEC0
  cmps(c,0,(int32_t)c->r[24],0); // 8017EEC4
  c->r[3]=c->r[24]|c->r[24]; // 8017EEC8
  if (crb(c,2)) { goto L_8017EED4; } // 8017EECC
  c->r[3]=c->r[24]+0xFFFFFA40u; // 8017EED0
L_8017EED4:;
  c->r[27]=0u+0x00000001u; // 8017EED4
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017EED8
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8017EEDC
  c->r[0]=R8(c->r[13]+0xFFFFCA3Du); // 8017EEE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EEE4
  if (!crb(c,2)) { goto L_8017EF28; } // 8017EEE8
  c->r[26]=0u+0x80750000u; // 8017EEEC
  c->r[3]=c->r[26]+0x00004844u; // 8017EEF0
  c->lr=0x8017EEF8u; f_800506C0(c); // 8017EEF4
  c->r[6]=0u+0x806E0000u; // 8017EEF8
  c->r[4]=0u+0x80160000u; // 8017EEFC
  c->r[6]=c->r[6]+0xFFFFE970u; // 8017EF00
  c->r[3]=c->r[26]+0x00004844u; // 8017EF04
  c->r[0]=c->r[6]+0x00000008u; // 8017EF08
  c->r[5]=0u+0x80750000u; // 8017EF0C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017EF10
  c->r[4]=c->r[4]+0x00002A4Cu; // 8017EF14
  c->r[5]=c->r[5]+0x00004A18u; // 8017EF18
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017EF1C
  c->lr=0x8017EF24u; f_803A92B8(c); // 8017EF20
  W8(c->r[13]+0xFFFFCA3Du,c->r[27]); // 8017EF24
L_8017EF28:;
  c->r[3]=0u+0x80750000u; // 8017EF28
  c->r[5]=c->r[24]|c->r[24]; // 8017EF2C
  c->r[3]=c->r[3]+0x00004844u; // 8017EF30
  c->r[4]=c->r[3]|c->r[3]; // 8017EF34
  c->lr=0x8017EF3Cu; f_802DDCA8(c); // 8017EF38
  c->r[3]=0u+0x806E0000u; // 8017EF3C
  c->r[0]=0u+0x00000000u; // 8017EF40
  c->r[3]=c->r[3]+0x00000170u; // 8017EF44
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8017EF48
  c->r[4]=c->r[3]+0x00000044u; // 8017EF4C
  W32(c->r[25]+0x00000400u,c->r[4]); // 8017EF50
  c->r[3]=c->r[25]+0x000005F8u; // 8017EF54
  W32(c->r[25]+0x000005D0u,c->r[0]); // 8017EF58
  W32(c->r[25]+0x000005D4u,c->r[0]); // 8017EF5C
  c->lr=0x8017EF64u; f_803209E8(c); // 8017EF60
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8017EF64
  cmps(c,0,(int32_t)c->r[23],0); // 8017EF68
  if (crb(c,2)) { goto L_8017EFD4; } // 8017EF6C
  c->lr=0x8017EF74u; f_8017F1BC(c); // 8017EF70
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 8017EF74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017EF78
  if (!crb(c,2)) { goto L_8017EF9C; } // 8017EF7C
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8017EF80
  c->r[0]=0u+0x00000001u; // 8017EF84
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 8017EF88
  c->r[4]=c->r[5]+0x00000001u; // 8017EF8C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8017EF90
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 8017EF94
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 8017EF98
L_8017EF9C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8017EF9C
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8017EFA0
  c->r[5]=0u+0x80180000u; // 8017EFA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017EFA8
  c->r[4]=c->r[23]+c->r[4]; // 8017EFAC
  c->r[5]=c->r[5]+0xFFFFF224u; // 8017EFB0
  c->r[4]=c->r[4]+c->r[0]; // 8017EFB4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EFB8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017EFBC
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017EFC0
  cmpu(c,0,c->r[0],0x00000010u); // 8017EFC4
  if (!crb(c,0)) { goto L_8017EFD4; } // 8017EFC8
  c->r[0]=0u+0x00000010u; // 8017EFCC
  W32(c->r[23]+c->r[3],c->r[0]); // 8017EFD0
L_8017EFD4:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8017EFD4
  cmps(c,0,(int32_t)c->r[23],0); // 8017EFD8
  if (crb(c,2)) { goto L_8017F020; } // 8017EFDC
  c->lr=0x8017EFE4u; f_8017F1BC(c); // 8017EFE0
  c->r[26]=c->r[3]|c->r[3]; // 8017EFE4
  c->lr=0x8017EFECu; f_80062EBC(c); // 8017EFE8
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8017EFEC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017EFF0
  c->r[5]=0u+0x80180000u; // 8017EFF4
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8017EFF8
  c->r[4]=c->r[23]+c->r[4]; // 8017EFFC
  c->r[5]=c->r[5]+0xFFFFF220u; // 8017F000
  c->r[4]=c->r[4]+c->r[0]; // 8017F004
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017F008
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017F00C
  cmpu(c,0,c->r[0],0x00000010u); // 8017F010
  if (!crb(c,0)) { goto L_8017F020; } // 8017F014
  c->r[0]=0u+0x00000010u; // 8017F018
  W32(c->r[23]+c->r[3],c->r[0]); // 8017F01C
L_8017F020:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8017F020
  cmps(c,0,(int32_t)c->r[23],0); // 8017F024
  if (crb(c,2)) { goto L_8017F06C; } // 8017F028
  c->lr=0x8017F030u; f_8017F1BC(c); // 8017F02C
  c->r[26]=c->r[3]|c->r[3]; // 8017F030
  c->lr=0x8017F038u; f_8017F1F0(c); // 8017F034
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8017F038
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017F03C
  c->r[5]=0u+0x80180000u; // 8017F040
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8017F044
  c->r[4]=c->r[23]+c->r[4]; // 8017F048
  c->r[5]=c->r[5]+0xFFFFF1ECu; // 8017F04C
  c->r[4]=c->r[4]+c->r[0]; // 8017F050
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017F054
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017F058
  cmpu(c,0,c->r[0],0x00000010u); // 8017F05C
  if (!crb(c,0)) { goto L_8017F06C; } // 8017F060
  c->r[0]=0u+0x00000010u; // 8017F064
  W32(c->r[23]+c->r[3],c->r[0]); // 8017F068
L_8017F06C:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8017F06C
  cmps(c,0,(int32_t)c->r[23],0); // 8017F070
  if (crb(c,2)) { goto L_8017F0B8; } // 8017F074
  c->lr=0x8017F07Cu; f_8017F1BC(c); // 8017F078
  c->r[26]=c->r[3]|c->r[3]; // 8017F07C
  c->lr=0x8017F084u; f_80062DCC(c); // 8017F080
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8017F084
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017F088
  c->r[5]=0u+0x80180000u; // 8017F08C
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8017F090
  c->r[4]=c->r[23]+c->r[4]; // 8017F094
  c->r[5]=c->r[5]+0xFFFFF1B8u; // 8017F098
  c->r[4]=c->r[4]+c->r[0]; // 8017F09C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017F0A0
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017F0A4
  cmpu(c,0,c->r[0],0x00000010u); // 8017F0A8
  if (!crb(c,0)) { goto L_8017F0B8; } // 8017F0AC
  c->r[0]=0u+0x00000010u; // 8017F0B0
  W32(c->r[23]+c->r[3],c->r[0]); // 8017F0B4
L_8017F0B8:;
  c->r[0]=0u+0x00000000u; // 8017F0B8
  W32(c->r[25]+0x000005DCu,c->r[0]); // 8017F0BC
  c->r[3]=c->r[25]|c->r[25]; // 8017F0C0
  W8(c->r[25]+0x000005D8u,c->r[0]); // 8017F0C4
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F0C8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017F0CC
  c->lr=c->r[0]; // 8017F0D0
  c->r[1]=c->r[1]+0x00000050u; // 8017F0D4
  return; // 8017F0D8
}

// dtor_8017F0DC
void f_8017F0DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F0DC
  c->r[0]=c->lr; // 8017F0E0
  cmps(c,0,(int32_t)c->r[3],0); // 8017F0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F0E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F0EC
  c->r[30]=c->r[3]|c->r[3]; // 8017F0F0
  c->r[31]=c->r[4]|c->r[4]; // 8017F0F4
  if (crb(c,2)) { goto L_8017F124; } // 8017F0F8
  c->r[4]=0u+0x00000000u; // 8017F0FC
  c->r[3]=c->r[3]+0x000005C0u; // 8017F100
  c->lr=0x8017F108u; f_8017F13C(c); // 8017F104
  c->r[3]=c->r[30]|c->r[30]; // 8017F108
  c->r[4]=0u+0x00000000u; // 8017F10C
  c->lr=0x8017F114u; f_8005BD00(c); // 8017F110
  cmps(c,0,(int32_t)c->r[31],0); // 8017F114
  if (!crb(c,1)) { goto L_8017F124; } // 8017F118
  c->r[3]=c->r[30]|c->r[30]; // 8017F11C
  c->lr=0x8017F124u; f_8005328C(c); // 8017F120
L_8017F124:;
  c->r[3]=c->r[30]|c->r[30]; // 8017F124
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F128
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F12C
  c->lr=c->r[0]; // 8017F130
  c->r[1]=c->r[1]+0x00000010u; // 8017F134
  return; // 8017F138
}

// dtor_8017F13C
void f_8017F13C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F13C
  c->r[0]=c->lr; // 8017F140
  cmps(c,0,(int32_t)c->r[3],0); // 8017F144
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F14C
  c->r[31]=c->r[3]|c->r[3]; // 8017F150
  if (crb(c,2)) { goto L_8017F164; } // 8017F154
  if (crb(c,2)) { goto L_8017F164; } // 8017F158
  c->r[4]=0u+0x00000000u; // 8017F15C
  c->lr=0x8017F164u; f_800455D8(c); // 8017F160
L_8017F164:;
  c->r[3]=c->r[31]|c->r[31]; // 8017F164
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F168
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F16C
  c->lr=c->r[0]; // 8017F170
  c->r[1]=c->r[1]+0x00000010u; // 8017F174
  return; // 8017F178
}

// dtor_8017F17C
void f_8017F17C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F17C
  c->r[0]=c->lr; // 8017F180
  cmps(c,0,(int32_t)c->r[3],0); // 8017F184
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F18C
  c->r[31]=c->r[3]|c->r[3]; // 8017F190
  if (crb(c,2)) { goto L_8017F1A0; } // 8017F194
  c->r[4]=0u+0x00000000u; // 8017F198
  c->lr=0x8017F1A0u; f_800455D8(c); // 8017F19C
L_8017F1A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8017F1A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F1A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F1A8
  c->lr=c->r[0]; // 8017F1AC
  c->r[1]=c->r[1]+0x00000010u; // 8017F1B0
  return; // 8017F1B4
}

// fn_8017F1B8
void f_8017F1B8(Ctx* __restrict c) {
  trace_call(0x8017F1B8u);
  f_8031749C(c); return; // 8017F1B8
}

// fn_8017F1BC
void f_8017F1BC(Ctx* __restrict c) {
  trace_call(0x8017F1BCu);
  c->r[0]=R8(c->r[13]+0xFFFFCCFCu); // 8017F1BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017F1C0
  if (!crb(c,2)) { goto L_8017F1E4; } // 8017F1C4
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8017F1C8
  c->r[0]=0u+0x00000001u; // 8017F1CC
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 8017F1D0
  c->r[3]=c->r[4]+0x00000001u; // 8017F1D4
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8017F1D8
  W32(c->r[13]+0xFFFFCCF8u,c->r[4]); // 8017F1DC
  W8(c->r[13]+0xFFFFCCFCu,c->r[0]); // 8017F1E0
L_8017F1E4:;
  c->r[3]=R32(c->r[13]+0xFFFFCCF8u); // 8017F1E4
  return; // 8017F1E8
}

// fn_8017F1EC
void f_8017F1EC(Ctx* __restrict c) {
  trace_call(0x8017F1ECu);
  f_8017F7AC(c); return; // 8017F1EC
}

// fn_8017F1F0
void f_8017F1F0(Ctx* __restrict c) {
  trace_call(0x8017F1F0u);
  c->r[0]=R8(c->r[13]+0xFFFFCCF4u); // 8017F1F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017F1F4
  if (!crb(c,2)) { goto L_8017F218; } // 8017F1F8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017F1FC
  c->r[0]=0u+0x00000001u; // 8017F200
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017F204
  c->r[3]=c->r[4]+0x00000001u; // 8017F208
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017F20C
  W32(c->r[13]+0xFFFFCCF0u,c->r[4]); // 8017F210
  W8(c->r[13]+0xFFFFCCF4u,c->r[0]); // 8017F214
L_8017F218:;
  c->r[3]=R32(c->r[13]+0xFFFFCCF0u); // 8017F218
  return; // 8017F21C
}

// fn_8017F220
void f_8017F220(Ctx* __restrict c) {
  trace_call(0x8017F220u);
  f_8017F550(c); return; // 8017F220
}

// fn_8017F224
void f_8017F224(Ctx* __restrict c) {
  trace_call(0x8017F224u);
  f_8017F4A4(c); return; // 8017F224
}

// fn_8017F228
void f_8017F228(Ctx* __restrict c) {
  trace_call(0x8017F228u);
  f_8005E338(c); return; // 8017F228
}

// fn_8017F22C
void f_8017F22C(Ctx* __restrict c) {
  trace_call(0x8017F22Cu);
  f_8005E324(c); return; // 8017F22C
}

// fn_8017F230
void f_8017F230(Ctx* __restrict c) {
  trace_call(0x8017F230u);
  f_8005E310(c); return; // 8017F230
}

// fn_8017F234
void f_8017F234(Ctx* __restrict c) {
  trace_call(0x8017F234u);
  f_8005E2FC(c); return; // 8017F234
}

// fn_8017F238
void f_8017F238(Ctx* __restrict c) {
  trace_call(0x8017F238u);
  f_8005E34C(c); return; // 8017F238
}

// fn_8017F23C
void f_8017F23C(Ctx* __restrict c) {
  trace_call(0x8017F23Cu);
  f_8005E360(c); return; // 8017F23C
}

// fn_8017F240
void f_8017F240(Ctx* __restrict c) {
  trace_call(0x8017F240u);
  f_8005D47C(c); return; // 8017F240
}

// fn_8017F244
void f_8017F244(Ctx* __restrict c) {
  trace_call(0x8017F244u);
  f_8005D468(c); return; // 8017F244
}

// fn_8017F248
void f_8017F248(Ctx* __restrict c) {
  trace_call(0x8017F248u);
  f_8005BEDC(c); return; // 8017F248
}

// fn_8017F24C
void f_8017F24C(Ctx* __restrict c) {
  trace_call(0x8017F24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F24C
  c->r[0]=c->lr; // 8017F250
  cmps(c,0,(int32_t)c->r[3],0); // 8017F254
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F258
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F25C
  c->r[30]=c->r[3]|c->r[3]; // 8017F260
  c->r[31]=c->r[4]|c->r[4]; // 8017F264
  if (crb(c,2)) { goto L_8017F2A8; } // 8017F268
  c->r[5]=0u+0x806E0000u; // 8017F26C
  c->r[4]=0u+0x00000001u; // 8017F270
  c->r[5]=c->r[5]+0x00000170u; // 8017F274
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8017F278
  c->r[0]=c->r[5]+0x00000044u; // 8017F27C
  W32(c->r[3]+0x00000400u,c->r[0]); // 8017F280
  c->r[3]=c->r[3]+0x000005F8u; // 8017F284
  c->lr=0x8017F28Cu; f_80320C3C(c); // 8017F288
  c->r[3]=c->r[30]|c->r[30]; // 8017F28C
  c->r[4]=0u+0x00000000u; // 8017F290
  c->lr=0x8017F298u; f_8017F0DC(c); // 8017F294
  cmps(c,0,(int32_t)c->r[31],0); // 8017F298
  if (!crb(c,1)) { goto L_8017F2A8; } // 8017F29C
  c->r[3]=c->r[30]|c->r[30]; // 8017F2A0
  c->lr=0x8017F2A8u; f_8005328C(c); // 8017F2A4
L_8017F2A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8017F2A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F2B0
  c->lr=c->r[0]; // 8017F2B4
  c->r[1]=c->r[1]+0x00000010u; // 8017F2B8
  return; // 8017F2BC
}

// fn_8017F2C0
void f_8017F2C0(Ctx* __restrict c) {
  trace_call(0x8017F2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F2C0
  c->r[0]=c->lr; // 8017F2C4
  c->r[4]=0u+0x00000000u; // 8017F2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F2CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F2D0
  c->r[31]=c->r[3]|c->r[3]; // 8017F2D4
  c->lr=0x8017F2DCu; f_8005E814(c); // 8017F2D8
  c->r[3]=c->r[31]|c->r[31]; // 8017F2DC
  c->r[4]=0u+0x00000000u; // 8017F2E0
  c->lr=0x8017F2E8u; f_8005EE88(c); // 8017F2E4
  c->r[3]=c->r[31]|c->r[31]; // 8017F2E8
  c->lr=0x8017F2F0u; f_800608BC(c); // 8017F2EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F2F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F2F4
  c->lr=c->r[0]; // 8017F2F8
  c->r[1]=c->r[1]+0x00000010u; // 8017F2FC
  return; // 8017F300
}

// fn_8017F304
void f_8017F304(Ctx* __restrict c) {
  trace_call(0x8017F304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F304
  c->r[0]=c->lr; // 8017F308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F310
  c->r[31]=c->r[3]|c->r[3]; // 8017F314
  c->r[0]=R8(c->r[3]+0x000005D8u); // 8017F318
  cmps(c,0,(int32_t)c->r[0],0); // 8017F31C
  if (crb(c,2)) { goto L_8017F338; } // 8017F320
  c->lr=0x8017F328u; f_8017F91C(c); // 8017F324
  cmps(c,0,(int32_t)c->r[3],0); // 8017F328
  if (!crb(c,2)) { goto L_8017F338; } // 8017F32C
  c->r[3]=c->r[31]|c->r[31]; // 8017F330
  c->lr=0x8017F338u; f_8031749C(c); // 8017F334
L_8017F338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F33C
  c->lr=c->r[0]; // 8017F340
  c->r[1]=c->r[1]+0x00000010u; // 8017F344
  return; // 8017F348
}

// fn_8017F34C
void f_8017F34C(Ctx* __restrict c) {
  trace_call(0x8017F34Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F34C
  c->r[0]=c->lr; // 8017F350
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F358
  c->r[31]=c->r[3]|c->r[3]; // 8017F35C
  c->r[3]=c->r[3]+0x000005F8u; // 8017F360
  c->lr=0x8017F368u; f_80320BEC(c); // 8017F364
  cmps(c,0,(int32_t)c->r[3],0); // 8017F368
  if (crb(c,2)) { goto L_8017F390; } // 8017F36C
  c->r[3]=c->r[31]+0x000001B8u; // 8017F370
  c->r[4]=c->r[31]+0x000005F8u; // 8017F374
  c->lr=0x8017F37Cu; f_80382F2C(c); // 8017F378
  c->r[12]=R32(c->r[31]+0x00000630u); // 8017F37C
  c->r[3]=c->r[31]+0x000005F8u; // 8017F380
  c->r[12]=R32(c->r[12]+0x00000008u); // 8017F384
  c->ctr=c->r[12]; // 8017F388
  if (true) { c->lr=0x8017F390u; dispatch(c,c->ctr); } // 8017F38C
L_8017F390:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F390
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F394
  c->lr=c->r[0]; // 8017F398
  c->r[1]=c->r[1]+0x00000010u; // 8017F39C
  return; // 8017F3A0
}

// fn_8017F3A4
void f_8017F3A4(Ctx* __restrict c) {
  trace_call(0x8017F3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F3A4
  c->r[0]=c->lr; // 8017F3A8
  c->r[4]=0u+0x00000000u; // 8017F3AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017F3B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F3B4
  c->r[31]=c->r[1]|c->r[1]; // 8017F3B8
  c->r[28]=c->r[3]|c->r[3]; // 8017F3BC
  W8(c->r[1]+0x0000000Cu,c->r[4]); // 8017F3C0
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 8017F3C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017F3C8
  if (!crb(c,2)) { goto L_8017F410; } // 8017F3CC
  c->r[30]=0u+0x80730000u; // 8017F3D0
  c->r[3]=c->r[30]+0x00006378u; // 8017F3D4
  c->lr=0x8017F3DCu; f_800B0D5C(c); // 8017F3D8
  c->r[6]=0u+0x806D0000u; // 8017F3DC
  c->r[4]=0u+0x80050000u; // 8017F3E0
  c->r[6]=c->r[6]+0xFFFFC340u; // 8017F3E4
  c->r[3]=c->r[30]+0x00006378u; // 8017F3E8
  c->r[0]=c->r[6]+0x00000028u; // 8017F3EC
  c->r[5]=0u+0x80750000u; // 8017F3F0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 8017F3F4
  c->r[4]=c->r[4]+0xFFFF9F20u; // 8017F3F8
  c->r[5]=c->r[5]+0x00004A0Cu; // 8017F3FC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8017F400
  c->lr=0x8017F408u; f_803A92B8(c); // 8017F404
  c->r[0]=0u+0x00000001u; // 8017F408
  W8(c->r[13]+0xFFFFBB88u,c->r[0]); // 8017F40C
L_8017F410:;
  c->r[3]=0u+0x80730000u; // 8017F410
  c->r[3]=c->r[3]+0x00006378u; // 8017F414
  c->lr=0x8017F41Cu; f_800B2824(c); // 8017F418
  c->lr=0x8017F420u; f_80062DCC(c); // 8017F41C
  c->r[4]=c->r[3]|c->r[3]; // 8017F420
  c->r[3]=c->r[28]|c->r[28]; // 8017F424
  c->lr=0x8017F42Cu; f_80062F4C(c); // 8017F428
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017F42C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017F430
  c->r[3]=c->r[28]+c->r[0]; // 8017F434
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017F438
  cmps(c,0,(int32_t)c->r[29],0); // 8017F43C
  if (crb(c,2)) { goto L_8017F468; } // 8017F440
  c->r[30]=0u+0x00000000u; // 8017F444
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017F448
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017F44C
  c->lr=0x8017F454u; f_80062DCC(c); // 8017F450
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017F454
  c->r[0]=c->r[13]+0xFFFF80C8u; // 8017F458
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017F45C
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017F460
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017F464
L_8017F468:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017F468
  c->r[0]=0u+0x00000000u; // 8017F46C
  c->r[3]=c->r[28]|c->r[28]; // 8017F470
  c->r[4]=c->r[29]|c->r[29]; // 8017F474
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F478
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017F47C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017F480
  c->lr=0x8017F488u; f_8006306C(c); // 8017F484
  c->r[10]=c->r[31]|c->r[31]; // 8017F488
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F48C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017F490
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017F494
  c->r[1]=c->r[10]|c->r[10]; // 8017F498
  c->lr=c->r[0]; // 8017F49C
  return; // 8017F4A0
}

// fn_8017F4A4
void f_8017F4A4(Ctx* __restrict c) {
  trace_call(0x8017F4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F4A4
  c->r[0]=c->lr; // 8017F4A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017F4AC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F4B0
  c->r[31]=c->r[1]|c->r[1]; // 8017F4B4
  c->r[28]=c->r[3]|c->r[3]; // 8017F4B8
  c->lr=0x8017F4C0u; f_80062EBC(c); // 8017F4BC
  c->r[4]=c->r[3]|c->r[3]; // 8017F4C0
  c->r[3]=c->r[28]|c->r[28]; // 8017F4C4
  c->lr=0x8017F4CCu; f_80062F4C(c); // 8017F4C8
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017F4CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017F4D0
  c->r[3]=c->r[28]+c->r[0]; // 8017F4D4
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017F4D8
  cmps(c,0,(int32_t)c->r[29],0); // 8017F4DC
  if (crb(c,2)) { goto L_8017F508; } // 8017F4E0
  c->r[30]=0u+0x00000000u; // 8017F4E4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017F4E8
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017F4EC
  c->lr=0x8017F4F4u; f_80062EBC(c); // 8017F4F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017F4F4
  c->r[0]=c->r[13]+0xFFFF80D8u; // 8017F4F8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017F4FC
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017F500
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017F504
L_8017F508:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017F508
  c->r[0]=0u+0x00000000u; // 8017F50C
  c->r[3]=c->r[28]|c->r[28]; // 8017F510
  c->r[4]=c->r[29]|c->r[29]; // 8017F514
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F518
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017F51C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017F520
  c->lr=0x8017F528u; f_8006306C(c); // 8017F524
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8017F528
  c->r[10]=c->r[31]|c->r[31]; // 8017F52C
  c->r[0]=c->r[0]|0x40000000u; // 8017F530
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8017F534
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F538
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017F53C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017F540
  c->r[1]=c->r[10]|c->r[10]; // 8017F544
  c->lr=c->r[0]; // 8017F548
  return; // 8017F54C
}

// fn_8017F550
void f_8017F550(Ctx* __restrict c) {
  trace_call(0x8017F550u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F550
  c->r[0]=c->lr; // 8017F554
  W32(c->r[1]+0x00000104u,c->r[0]); // 8017F558
  c->r[11]=c->r[1]+0x000000F0u; // 8017F55C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 8017F560
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 8017F564
  c->lr=0x8017F56Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017F568
  c->r[31]=c->r[1]|c->r[1]; // 8017F56C
  c->r[30]=c->r[3]|c->r[3]; // 8017F570
  c->lr=0x8017F578u; f_8017F91C(c); // 8017F574
  cmps(c,0,(int32_t)c->r[3],0); // 8017F578
  if (crb(c,2)) { goto L_8017F784; } // 8017F57C
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 8017F580
  cmps(c,0,(int32_t)c->r[0],0); // 8017F584
  if (crb(c,2)) { goto L_8017F5A0; } // 8017F588
  cmps(c,0,(int32_t)c->r[0],336); // 8017F58C
  if (crb(c,2)) { goto L_8017F5A8; } // 8017F590
  cmps(c,0,(int32_t)c->r[0],337); // 8017F594
  if (crb(c,2)) { goto L_8017F660; } // 8017F598
  goto L_8017F76C; // 8017F59C
L_8017F5A0:;
  c->r[0]=0u+0x00000150u; // 8017F5A0
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8017F5A4
L_8017F5A8:;
  c->lr=0x8017F5ACu; f_803B220C(c); // 8017F5A8
  c->r[0]=c->r[3]^0x80000000u; // 8017F5AC
  c->r[29]=0u+0x43300000u; // 8017F5B0
  W32(c->r[31]+0x000000D4u,c->r[0]); // 8017F5B4
  {uint32_t ea=c->r[2]+0xFFFFBE80u; c->f[1]=RF64(ea);} // 8017F5B8
  W32(c->r[31]+0x000000D0u,c->r[29]); // 8017F5BC
  {uint32_t ea=c->r[2]+0xFFFFBE60u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017F5C0
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[0]=RF64(ea);} // 8017F5C4
  {uint32_t ea=c->r[2]+0xFFFFBE68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017F5C8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 8017F5CC
  {uint32_t ea=c->r[2]+0xFFFFBE64u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F5D0
  {uint32_t ea=c->r[2]+0xFFFFBE6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017F5D4
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 8017F5D8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 8017F5DC
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 8017F5E0
  c->lr=0x8017F5E8u; f_803B220C(c); // 8017F5E4
  c->r[0]=c->r[3]^0x80000000u; // 8017F5E8
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8017F5EC
  {uint32_t ea=c->r[2]+0xFFFFBE80u; c->f[1]=RF64(ea);} // 8017F5F0
  c->f[2]=c->f[31]; // 8017F5F4
  W32(c->r[31]+0x000000D8u,c->r[29]); // 8017F5F8
  c->r[3]=c->r[31]+0x00000030u; // 8017F5FC
  {uint32_t ea=c->r[2]+0xFFFFBE60u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017F600
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=RF64(ea);} // 8017F604
  {uint32_t ea=c->r[2]+0xFFFFBE70u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017F608
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8017F60C
  {uint32_t ea=c->r[2]+0xFFFFBE6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017F610
  {uint32_t ea=c->r[2]+0xFFFFBE74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F614
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[4]); // 8017F618
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[4],c->f[0])); // 8017F61C
  c->lr=0x8017F624u; f_80064550(c); // 8017F620
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017F624
  c->r[4]=c->r[30]|c->r[30]; // 8017F628
  c->r[3]=c->r[31]+0x0000003Cu; // 8017F62C
  c->r[12]=R32(c->r[12]+0x00000134u); // 8017F630
  c->ctr=c->r[12]; // 8017F634
  if (true) { c->lr=0x8017F63Cu; dispatch(c,c->ctr); } // 8017F638
  c->r[4]=c->r[31]+0x0000003Cu; // 8017F63C
  c->r[5]=c->r[31]+0x00000030u; // 8017F640
  c->r[6]=c->r[30]+0x000005ECu; // 8017F644
  c->r[7]=c->r[30]+0x000005E0u; // 8017F648
  c->r[3]=c->r[2]+0xFFFFBE58u; // 8017F64C
  c->lr=0x8017F654u; f_80110F48(c); // 8017F650
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8017F654
  c->r[0]=c->r[3]+0x00000001u; // 8017F658
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8017F65C
L_8017F660:;
  c->r[3]=c->r[30]+0x000001B8u; // 8017F660
  c->r[4]=c->r[31]+0x000000A0u; // 8017F664
  c->lr=0x8017F66Cu; f_80382F2C(c); // 8017F668
  {uint32_t ea=c->r[2]+0xFFFFBE74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F66C
  c->r[3]=c->r[31]+0x00000070u; // 8017F670
  {uint32_t ea=c->r[2]+0xFFFFBE6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017F674
  c->r[4]=0u+0x00000001u; // 8017F678
  {uint32_t ea=c->r[2]+0xFFFFBE78u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017F67C
  c->lr=0x8017F684u; f_80064240(c); // 8017F680
  c->r[4]=c->r[31]+0x000000A0u; // 8017F684
  c->r[5]=c->r[30]+0x000005ECu; // 8017F688
  c->r[6]=c->r[30]+0x000005E0u; // 8017F68C
  c->r[3]=c->r[2]+0xFFFFBE58u; // 8017F690
  c->lr=0x8017F698u; f_80111024(c); // 8017F694
  c->r[3]=c->r[31]+0x0000000Cu; // 8017F698
  c->r[4]=c->r[31]+0x00000070u; // 8017F69C
  c->lr=0x8017F6A4u; f_80060878(c); // 8017F6A0
  c->r[3]=c->r[31]+0x00000018u; // 8017F6A4
  c->r[4]=c->r[31]+0x000000A0u; // 8017F6A8
  c->lr=0x8017F6B0u; f_80060878(c); // 8017F6AC
  c->r[3]=c->r[31]+0x00000024u; // 8017F6B0
  c->r[4]=c->r[30]+0x0000058Cu; // 8017F6B4
  c->lr=0x8017F6BCu; f_80060878(c); // 8017F6B8
  {uint32_t ea=c->r[2]+0xFFFFBE74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F6BC
  c->r[3]=c->r[31]+0x00000024u; // 8017F6C0
  c->r[4]=c->r[31]+0x00000018u; // 8017F6C4
  c->r[5]=c->r[31]+0x0000000Cu; // 8017F6C8
  c->r[6]=c->r[31]+0x00000048u; // 8017F6CC
  c->lr=0x8017F6D4u; f_80064590(c); // 8017F6D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017F6D4
  if (crb(c,2)) { goto L_8017F754; } // 8017F6D8
  c->r[3]=c->r[30]+0x000005F8u; // 8017F6DC
  c->r[4]=0u+0x00000001u; // 8017F6E0
  c->lr=0x8017F6E8u; f_80320C3C(c); // 8017F6E4
  c->lr=0x8017F6ECu; f_8017F1F0(c); // 8017F6E8
  c->r[4]=c->r[3]|c->r[3]; // 8017F6EC
  c->r[3]=c->r[30]|c->r[30]; // 8017F6F0
  c->lr=0x8017F6F8u; f_80062F4C(c); // 8017F6F4
  c->r[0]=R8(c->r[30]+0x00000010u); // 8017F6F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017F6FC
  c->r[3]=c->r[30]+c->r[0]; // 8017F700
  c->r[28]=R32(c->r[3]+0x00000014u); // 8017F704
  cmps(c,0,(int32_t)c->r[28],0); // 8017F708
  if (crb(c,2)) { goto L_8017F734; } // 8017F70C
  c->r[29]=0u+0x00000000u; // 8017F710
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 8017F714
  W8(c->r[31]+0x00000008u,c->r[29]); // 8017F718
  c->lr=0x8017F720u; f_8017F1F0(c); // 8017F71C
  W32(c->r[28]+0x00000000u,c->r[3]); // 8017F720
  c->r[0]=c->r[13]+0xFFFF8B38u; // 8017F724
  W32(c->r[28]+0x00000004u,c->r[0]); // 8017F728
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017F72C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8017F730
L_8017F734:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8017F734
  c->r[0]=0u+0x00000000u; // 8017F738
  c->r[3]=c->r[30]|c->r[30]; // 8017F73C
  c->r[4]=c->r[28]|c->r[28]; // 8017F740
  W32(c->r[28]+0x00000008u,c->r[0]); // 8017F744
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017F748
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017F74C
  c->lr=0x8017F754u; f_8006306C(c); // 8017F750
L_8017F754:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017F754
  c->r[3]=c->r[30]|c->r[30]; // 8017F758
  c->r[4]=c->r[31]+0x000000A0u; // 8017F75C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8017F760
  c->ctr=c->r[12]; // 8017F764
  if (true) { c->lr=0x8017F76Cu; dispatch(c,c->ctr); } // 8017F768
L_8017F76C:;
  {uint32_t ea=c->r[30]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F76C
  {uint32_t ea=c->r[2]+0xFFFFBE7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017F770
  fcmp(c,0,c->f[1],c->f[0]); // 8017F774
  if (!crb(c,1)) { goto L_8017F784; } // 8017F778
  c->r[3]=c->r[30]|c->r[30]; // 8017F77C
  c->lr=0x8017F784u; f_8031749C(c); // 8017F780
L_8017F784:;
  c->r[10]=c->r[31]|c->r[31]; // 8017F784
  c->r[11]=c->r[10]+0x000000F0u; // 8017F788
  {uint32_t ea=c->r[10]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8017F78C
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[31]=RF64(ea);} // 8017F790
  c->lr=0x8017F798u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F794
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017F798
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017F79C
  c->r[1]=c->r[10]|c->r[10]; // 8017F7A0
  c->lr=c->r[0]; // 8017F7A4
  return; // 8017F7A8
}

// fn_8017F7AC
void f_8017F7AC(Ctx* __restrict c) {
  trace_call(0x8017F7ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F7AC
  c->r[0]=c->lr; // 8017F7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F7B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F7B8
  c->r[31]=c->r[3]|c->r[3]; // 8017F7BC
  c->lr=0x8017F7C4u; f_8017F91C(c); // 8017F7C0
  cmps(c,0,(int32_t)c->r[3],0); // 8017F7C4
  if (crb(c,2)) { goto L_8017F7F4; } // 8017F7C8
  c->lr=0x8017F7D0u; f_800797AC(c); // 8017F7CC
  c->r[0]=R32(c->r[31]+0x000005D4u); // 8017F7D0
  c->r[5]=0u+0x00000001u; // 8017F7D4
  c->r[4]=R32(c->r[31]+0x000005DCu); // 8017F7D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8017F7DC
  c->r[3]=c->r[3]+c->r[0]; // 8017F7E0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8017F7E4
  c->lr=0x8017F7ECu; f_80062748(c); // 8017F7E8
  c->r[3]=c->r[31]|c->r[31]; // 8017F7EC
  c->lr=0x8017F7F4u; f_8031749C(c); // 8017F7F0
L_8017F7F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F7F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F7F8
  c->lr=c->r[0]; // 8017F7FC
  c->r[1]=c->r[1]+0x00000010u; // 8017F800
  return; // 8017F804
}

// fn_8017F808
void f_8017F808(Ctx* __restrict c) {
  trace_call(0x8017F808u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F808
  c->r[0]=c->lr; // 8017F80C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017F810
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F814
  c->r[30]=0u+0x00000001u; // 8017F818
  c->r[28]=c->r[6]|c->r[6]; // 8017F81C
  c->r[27]=c->r[3]|c->r[3]; // 8017F820
  c->r[29]=c->r[7]|c->r[7]; // 8017F824
  W8(c->r[3]+0x000005D8u,c->r[30]); // 8017F828
  c->r[6]=R32(c->r[4]+0x00000020u); // 8017F82C
  c->r[4]=R32(c->r[4]+0x00000024u); // 8017F830
  W32(c->r[3]+0x000005D4u,c->r[4]); // 8017F834
  W32(c->r[3]+0x000005D0u,c->r[6]); // 8017F838
  W32(c->r[3]+0x000005DCu,c->r[5]); // 8017F83C
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 8017F840
  W32(c->r[1]+0x00000008u,c->r[6]); // 8017F844
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017F848
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8017F84C
  if (!crb(c,2)) { goto L_8017F87C; } // 8017F850
  c->r[31]=0u+0x80730000u; // 8017F854
  c->r[3]=c->r[31]+0x00002598u; // 8017F858
  c->lr=0x8017F860u; f_80321014(c); // 8017F85C
  c->r[4]=0u+0x80320000u; // 8017F860
  c->r[5]=0u+0x80750000u; // 8017F864
  c->r[3]=c->r[31]+0x00002598u; // 8017F868
  c->r[4]=c->r[4]+0x0000116Cu; // 8017F86C
  c->r[5]=c->r[5]+0x00004A00u; // 8017F870
  c->lr=0x8017F878u; f_803A92B8(c); // 8017F874
  W8(c->r[13]+0xFFFFBB5Cu,c->r[30]); // 8017F878
L_8017F87C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8017F87C
  c->r[4]=0u+0x80730000u; // 8017F880
  c->r[4]=c->r[4]+0x00002598u; // 8017F884
  c->r[3]=c->r[1]+0x00000010u; // 8017F888
  if (crb(c,2)) { goto L_8017F898; } // 8017F88C
  c->r[5]=c->r[28]|c->r[28]; // 8017F890
  goto L_8017F89C; // 8017F894
L_8017F898:;
  c->r[5]=R32(c->r[13]+0xFFFF8B30u); // 8017F898
L_8017F89C:;
  c->r[6]=0u+0x00000001u; // 8017F89C
  c->lr=0x8017F8A4u; f_80321B90(c); // 8017F8A0
  c->r[3]=c->r[1]+0x00000010u; // 8017F8A4
  c->r[4]=c->r[27]+0x000005F8u; // 8017F8A8
  c->lr=0x8017F8B0u; f_80382F2C(c); // 8017F8AC
  c->r[3]=c->r[27]+0x00000628u; // 8017F8B0
  c->r[4]=c->r[1]+0x00000040u; // 8017F8B4
  c->lr=0x8017F8BCu; f_80495690(c); // 8017F8B8
  c->r[3]=c->r[27]+0x000005F8u; // 8017F8BC
  c->lr=0x8017F8C4u; f_80320BEC(c); // 8017F8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8017F8C4
  if (crb(c,2)) { goto L_8017F8EC; } // 8017F8C8
  c->r[3]=c->r[27]+0x000001B8u; // 8017F8CC
  c->r[4]=c->r[27]+0x000005F8u; // 8017F8D0
  c->lr=0x8017F8D8u; f_80382F2C(c); // 8017F8D4
  c->r[12]=R32(c->r[27]+0x00000630u); // 8017F8D8
  c->r[3]=c->r[27]+0x000005F8u; // 8017F8DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8017F8E0
  c->ctr=c->r[12]; // 8017F8E4
  if (true) { c->lr=0x8017F8ECu; dispatch(c,c->ctr); } // 8017F8E8
L_8017F8EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017F8EC
  c->r[3]=c->r[27]+0x00000634u; // 8017F8F0
  if (crb(c,2)) { goto L_8017F900; } // 8017F8F4
  c->r[4]=c->r[29]|c->r[29]; // 8017F8F8
  goto L_8017F904; // 8017F8FC
L_8017F900:;
  c->r[4]=R32(c->r[13]+0xFFFF8B34u); // 8017F900
L_8017F904:;
  c->lr=0x8017F908u; f_803B37C0(c); // 8017F904
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F908
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017F90C
  c->lr=c->r[0]; // 8017F910
  c->r[1]=c->r[1]+0x00000070u; // 8017F914
  return; // 8017F918
}

// fn_8017F91C
void f_8017F91C(Ctx* __restrict c) {
  trace_call(0x8017F91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F91C
  c->r[0]=c->lr; // 8017F920
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F924
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8017F928
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F92C
  c->r[30]=c->r[3]|c->r[3]; // 8017F930
  cmps(c,0,(int32_t)c->r[0],0); // 8017F934
  c->r[31]=0u+0x00000000u; // 8017F938
  if (crb(c,2)) { goto L_8017F964; } // 8017F93C
  c->lr=0x8017F944u; f_800797AC(c); // 8017F940
  c->r[0]=R32(c->r[30]+0x000005D4u); // 8017F944
  c->r[4]=R32(c->r[30]+0x000005D0u); // 8017F948
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8017F94C
  c->r[3]=c->r[3]+c->r[0]; // 8017F950
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017F954
  cmpu(c,0,c->r[4],c->r[0]); // 8017F958
  if (!crb(c,2)) { goto L_8017F964; } // 8017F95C
  c->r[31]=0u+0x00000001u; // 8017F960
L_8017F964:;
  c->r[0]=addc(c,c->r[31],0xFFFFFFFFu,0); // 8017F964
  c->r[3]=addc(c,~c->r[0],c->r[31],c->xer_ca); // 8017F968
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017F96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F970
  c->lr=c->r[0]; // 8017F974
  c->r[1]=c->r[1]+0x00000010u; // 8017F978
  return; // 8017F97C
}

// fn_8017F980
void f_8017F980(Ctx* __restrict c) {
  trace_call(0x8017F980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F980
  c->r[0]=c->lr; // 8017F984
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F988
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F98C
  c->r[31]=c->r[3]|c->r[3]; // 8017F990
  c->r[3]=c->r[1]+0x00000008u; // 8017F994
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8017F998
  c->r[4]=c->r[31]|c->r[31]; // 8017F99C
  c->r[12]=R32(c->r[12]+0x00000134u); // 8017F9A0
  c->ctr=c->r[12]; // 8017F9A4
  if (true) { c->lr=0x8017F9ACu; dispatch(c,c->ctr); } // 8017F9A8
  c->r[6]=0u+0x80760000u; // 8017F9AC
  {uint32_t ea=c->r[2]+0xFFFFBE78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017F9B0
  c->r[3]=c->r[31]|c->r[31]; // 8017F9B4
  c->r[4]=c->r[31]+0x00000634u; // 8017F9B8
  c->r[5]=c->r[1]+0x00000008u; // 8017F9BC
  c->r[6]=c->r[6]+0xFFFF9CA8u; // 8017F9C0
  c->lr=0x8017F9C8u; f_8005FA84(c); // 8017F9C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F9C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017F9CC
  c->lr=c->r[0]; // 8017F9D0
  c->r[1]=c->r[1]+0x00000020u; // 8017F9D4
  return; // 8017F9D8
}

// fn_8017F9DC
void f_8017F9DC(Ctx* __restrict c) {
  trace_call(0x8017F9DCu);
  c->r[3]=0u+0x00000000u; // 8017F9DC
  return; // 8017F9E0
}

// fn_8017F9E4
void f_8017F9E4(Ctx* __restrict c) {
  trace_call(0x8017F9E4u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 8017F9E4
  f_8017F24C(c); return; // 8017F9E8
}

// fn_8017F9EC
void f_8017F9EC(Ctx* __restrict c) {
  trace_call(0x8017F9ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F9EC
  c->r[0]=c->lr; // 8017F9F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017F9F4
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017F9F8
  c->r[26]=c->r[3]|c->r[3]; // 8017F9FC
  c->r[31]=0u+0x80690000u; // 8017FA00
  c->r[30]=c->r[26]|c->r[26]; // 8017FA04
  c->r[27]=c->r[26]|c->r[26]; // 8017FA08
  c->r[29]=c->r[26]|c->r[26]; // 8017FA0C
  c->r[31]=c->r[31]+0x000018CCu; // 8017FA10
  c->lr=0x8017FA18u; f_801806D8(c); // 8017FA14
  c->r[4]=0u+0x806D0000u; // 8017FA18
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 8017FA1C
  c->r[0]=0u+0x00000000u; // 8017FA20
  W32(c->r[26]+0x00000000u,c->r[3]); // 8017FA24
  c->r[4]=c->r[4]+0x000038C0u; // 8017FA28
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 8017FA2C
  W32(c->r[26]+0x00000004u,c->r[0]); // 8017FA30
  W32(c->r[26]+0x00000008u,c->r[0]); // 8017FA34
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 8017FA38
  W8(c->r[26]+0x00000010u,c->r[0]); // 8017FA3C
  W32(c->r[26]+0x00000014u,c->r[0]); // 8017FA40
  W32(c->r[26]+0x00000018u,c->r[0]); // 8017FA44
  W32(c->r[26]+0x00000020u,c->r[0]); // 8017FA48
  W32(c->r[26]+0x00000024u,c->r[0]); // 8017FA4C
  if (crb(c,2)) { goto L_8017FA58; } // 8017FA50
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 8017FA54
L_8017FA58:;
  c->lr=0x8017FA5Cu; f_800797AC(c); // 8017FA58
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017FA5C
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 8017FA60
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017FA64
  if (!crb(c,2)) { goto L_8017FA74; } // 8017FA68
  c->r[0]=0u+0x00000001u; // 8017FA6C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017FA70
L_8017FA74:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8017FA74
  c->r[5]=0u+0x0000012Cu; // 8017FA78
  c->r[4]=c->r[7]+0x00000001u; // 8017FA7C
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017FA80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017FA84
  c->r[6]=c->r[4]-c->r[0]; // 8017FA88
  goto L_8017FAD8; // 8017FA8C
L_8017FA90:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8017FA90
  c->r[4]=c->r[3]+c->r[0]; // 8017FA94
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017FA98
  cmps(c,0,(int32_t)c->r[0],0); // 8017FA9C
  if (!crb(c,2)) { goto L_8017FAC8; } // 8017FAA0
  W32(c->r[3]+0x00000004u,c->r[6]); // 8017FAA4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017FAA8
  W32(c->r[4]+0x00000008u,c->r[0]); // 8017FAAC
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 8017FAB0
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017FAB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017FAB8
  W32(c->r[1]+0x00000010u,c->r[4]); // 8017FABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FAC0
  goto L_8017FAF4; // 8017FAC4
L_8017FAC8:;
  c->r[4]=c->r[6]+0x00000001u; // 8017FAC8
  c->r[0]=divwu(c->r[4],c->r[5]); // 8017FACC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8017FAD0
  c->r[6]=c->r[4]-c->r[0]; // 8017FAD4
L_8017FAD8:;
  cmpu(c,0,c->r[6],c->r[7]); // 8017FAD8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017FA90; } // 8017FADC
  c->r[0]=0u+0x00000000u; // 8017FAE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017FAE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017FAE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017FAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FAF0
L_8017FAF4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8017FAF4
  c->r[24]=c->r[26]+0x00000028u; // 8017FAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017FAFC
  c->r[3]=c->r[24]|c->r[24]; // 8017FB00
  W32(c->r[1]+0x00000018u,c->r[4]); // 8017FB04
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017FB08
  W32(c->r[26]+0x00000020u,c->r[4]); // 8017FB0C
  W32(c->r[26]+0x00000024u,c->r[0]); // 8017FB10
  c->lr=0x8017FB18u; f_800506C0(c); // 8017FB14
  cmps(c,0,(int32_t)c->r[24],0); // 8017FB18
  c->r[3]=c->r[24]|c->r[24]; // 8017FB1C
  if (crb(c,2)) { goto L_8017FB28; } // 8017FB20
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 8017FB24
L_8017FB28:;
  c->r[28]=0u+0x00000001u; // 8017FB28
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017FB2C
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 8017FB30
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 8017FB34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FB38
  if (!crb(c,2)) { goto L_8017FB7C; } // 8017FB3C
  c->r[25]=0u+0x80740000u; // 8017FB40
  c->r[3]=c->r[25]+0x000074BCu; // 8017FB44
  c->lr=0x8017FB4Cu; f_800506C0(c); // 8017FB48
  c->r[6]=0u+0x806D0000u; // 8017FB4C
  c->r[4]=0u+0x80060000u; // 8017FB50
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 8017FB54
  c->r[3]=c->r[25]+0x000074BCu; // 8017FB58
  c->r[0]=c->r[6]+0x00000008u; // 8017FB5C
  c->r[5]=0u+0x80750000u; // 8017FB60
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017FB64
  c->r[4]=c->r[4]+0x000057D4u; // 8017FB68
  c->r[5]=c->r[5]+0x00004A88u; // 8017FB6C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017FB70
  c->lr=0x8017FB78u; f_803A92B8(c); // 8017FB74
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 8017FB78
L_8017FB7C:;
  c->r[3]=0u+0x80740000u; // 8017FB7C
  c->r[5]=c->r[24]|c->r[24]; // 8017FB80
  c->r[3]=c->r[3]+0x000074BCu; // 8017FB84
  c->r[4]=c->r[3]|c->r[3]; // 8017FB88
  c->lr=0x8017FB90u; f_802DDCA8(c); // 8017FB8C
  c->r[25]=c->r[26]+0x00000038u; // 8017FB90
  c->r[3]=c->r[25]|c->r[25]; // 8017FB94
  c->lr=0x8017FB9Cu; f_800506C0(c); // 8017FB98
  cmps(c,0,(int32_t)c->r[25],0); // 8017FB9C
  c->r[0]=c->r[25]|c->r[25]; // 8017FBA0
  if (crb(c,2)) { goto L_8017FBAC; } // 8017FBA4
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 8017FBA8
L_8017FBAC:;
  c->r[28]=c->r[26]+0x00000044u; // 8017FBAC
  W32(c->r[25]+0x00000008u,c->r[0]); // 8017FBB0
  c->r[3]=c->r[28]|c->r[28]; // 8017FBB4
  c->lr=0x8017FBBCu; f_800506C0(c); // 8017FBB8
  cmps(c,0,(int32_t)c->r[28],0); // 8017FBBC
  c->r[0]=c->r[28]|c->r[28]; // 8017FBC0
  if (crb(c,2)) { goto L_8017FBCC; } // 8017FBC4
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 8017FBC8
L_8017FBCC:;
  c->r[3]=0u+0x806F0000u; // 8017FBCC
  c->r[25]=0u+0x00000000u; // 8017FBD0
  c->r[3]=c->r[3]+0x00000E80u; // 8017FBD4
  W32(c->r[28]+0x00000008u,c->r[0]); // 8017FBD8
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 8017FBDC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017FBE0
  W32(c->r[26]+0x00000058u,c->r[25]); // 8017FBE4
  W32(c->r[26]+0x00000064u,c->r[25]); // 8017FBE8
  c->lr=0x8017FBF0u; f_8007BDCC(c); // 8017FBEC
  c->r[0]=c->r[13]+0xFFFF8114u; // 8017FBF0
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 8017FBF4
  W32(c->r[26]+0x000000A0u,c->r[0]); // 8017FBF8
  W32(c->r[26]+0x000000A4u,c->r[25]); // 8017FBFC
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 8017FC00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FC04
  if (!crb(c,2)) { goto L_8017FC28; } // 8017FC08
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017FC0C
  c->r[0]=0u+0x00000001u; // 8017FC10
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017FC14
  c->r[3]=c->r[4]+0x00000001u; // 8017FC18
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017FC1C
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 8017FC20
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8017FC24
L_8017FC28:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 8017FC28
  c->r[3]=c->r[13]+0xFFFF8110u; // 8017FC2C
  c->r[0]=0u+0x00000000u; // 8017FC30
  W32(c->r[26]+0x000000A8u,c->r[4]); // 8017FC34
  W32(c->r[26]+0x000000ACu,c->r[3]); // 8017FC38
  W32(c->r[26]+0x000000B0u,c->r[0]); // 8017FC3C
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 8017FC40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FC44
  if (!crb(c,2)) { goto L_8017FC68; } // 8017FC48
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017FC4C
  c->r[0]=0u+0x00000001u; // 8017FC50
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017FC54
  c->r[3]=c->r[4]+0x00000001u; // 8017FC58
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017FC5C
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 8017FC60
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 8017FC64
L_8017FC68:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 8017FC68
  c->r[3]=c->r[13]+0xFFFF810Cu; // 8017FC6C
  c->r[0]=0u+0x00000000u; // 8017FC70
  W32(c->r[26]+0x000000B4u,c->r[4]); // 8017FC74
  W32(c->r[26]+0x000000B8u,c->r[3]); // 8017FC78
  W32(c->r[26]+0x000000BCu,c->r[0]); // 8017FC7C
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 8017FC80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FC84
  if (!crb(c,2)) { goto L_8017FCA8; } // 8017FC88
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017FC8C
  c->r[0]=0u+0x00000001u; // 8017FC90
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017FC94
  c->r[3]=c->r[4]+0x00000001u; // 8017FC98
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017FC9C
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 8017FCA0
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8017FCA4
L_8017FCA8:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 8017FCA8
  c->r[3]=c->r[13]+0xFFFF8108u; // 8017FCAC
  c->r[0]=0u+0x00000000u; // 8017FCB0
  W32(c->r[26]+0x000000C0u,c->r[4]); // 8017FCB4
  W32(c->r[26]+0x000000C4u,c->r[3]); // 8017FCB8
  W32(c->r[26]+0x000000C8u,c->r[0]); // 8017FCBC
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 8017FCC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FCC4
  if (!crb(c,2)) { goto L_8017FCE8; } // 8017FCC8
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8017FCCC
  c->r[0]=0u+0x00000001u; // 8017FCD0
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017FCD4
  c->r[3]=c->r[4]+0x00000001u; // 8017FCD8
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8017FCDC
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 8017FCE0
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8017FCE4
L_8017FCE8:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 8017FCE8
  c->r[0]=c->r[13]+0xFFFF8104u; // 8017FCEC
  c->r[25]=0u+0x00000000u; // 8017FCF0
  W32(c->r[26]+0x000000CCu,c->r[3]); // 8017FCF4
  c->r[3]=c->r[26]+0x000000D8u; // 8017FCF8
  W32(c->r[26]+0x000000D0u,c->r[0]); // 8017FCFC
  W32(c->r[26]+0x000000D4u,c->r[25]); // 8017FD00
  c->lr=0x8017FD08u; f_800506C0(c); // 8017FD04
  c->r[4]=0u+0x806F0000u; // 8017FD08
  c->r[3]=0u+0x00000006u; // 8017FD0C
  c->r[4]=c->r[4]+0x000007A0u; // 8017FD10
  c->r[28]=c->r[26]+0x000000FCu; // 8017FD14
  c->r[0]=c->r[4]+0x00000024u; // 8017FD18
  W32(c->r[26]+0x000000E8u,c->r[3]); // 8017FD1C
  c->r[3]=c->r[28]+0x0000000Cu; // 8017FD20
  W32(c->r[26]+0x000000ECu,c->r[25]); // 8017FD24
  W32(c->r[26]+0x000000F8u,c->r[25]); // 8017FD28
  W32(c->r[26]+0x000000FCu,c->r[4]); // 8017FD2C
  W32(c->r[26]+0x00000100u,c->r[0]); // 8017FD30
  c->lr=0x8017FD38u; f_800506C0(c); // 8017FD34
  c->r[3]=c->r[28]+0x00000018u; // 8017FD38
  c->lr=0x8017FD40u; f_800506C0(c); // 8017FD3C
  W32(c->r[28]+0x00000024u,c->r[25]); // 8017FD40
  c->r[3]=c->r[28]+0x000000B0u; // 8017FD44
  c->lr=0x8017FD4Cu; f_800506C0(c); // 8017FD48
  c->r[12]=R32(c->r[28]+0x00000000u); // 8017FD4C
  c->r[3]=c->r[28]|c->r[28]; // 8017FD50
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8017FD54
  c->ctr=c->r[12]; // 8017FD58
  if (true) { c->lr=0x8017FD60u; dispatch(c,c->ctr); } // 8017FD5C
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 8017FD60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FD64
  if (!crb(c,2)) { goto L_8017FD84; } // 8017FD68
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 8017FD6C
  c->r[0]=0u+0x00000001u; // 8017FD70
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 8017FD74
  c->r[3]=c->r[3]+0x00000001u; // 8017FD78
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 8017FD7C
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 8017FD80
L_8017FD84:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 8017FD84
  c->r[5]=0u+0x806F0000u; // 8017FD88
  c->r[5]=c->r[5]+0x000007F8u; // 8017FD8C
  c->r[0]=0u+0x00000032u; // 8017FD90
  c->r[4]=c->r[5]+0x00000024u; // 8017FD94
  W32(c->r[28]+0x00000008u,c->r[3]); // 8017FD98
  c->r[6]=0u+0x00000000u; // 8017FD9C
  c->r[3]=0u+0x00000000u; // 8017FDA0
  W32(c->r[28]+0x00000000u,c->r[5]); // 8017FDA4
  W32(c->r[28]+0x00000004u,c->r[4]); // 8017FDA8
  c->ctr=c->r[0]; // 8017FDAC
L_8017FDB0:;
  c->r[4]=c->r[28]+c->r[3]; // 8017FDB0
  c->r[3]=c->r[3]+0x00000004u; // 8017FDB4
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 8017FDB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017FDB0; } // 8017FDBC
  c->r[3]=0u+0x806D0000u; // 8017FDC0
  c->r[7]=0u+0x00000000u; // 8017FDC4
  c->r[3]=c->r[3]+0x00003868u; // 8017FDC8
  c->r[0]=0u+0x0000000Au; // 8017FDCC
  c->r[4]=c->r[3]+0x00000024u; // 8017FDD0
  W32(c->r[28]+0x00000000u,c->r[3]); // 8017FDD4
  c->r[8]=0u+0x00000000u; // 8017FDD8
  c->r[3]=0u+0x00000000u; // 8017FDDC
  W32(c->r[28]+0x00000004u,c->r[4]); // 8017FDE0
  c->r[6]=0u+0xFFFFFFFFu; // 8017FDE4
  W32(c->r[26]+0x00000314u,c->r[7]); // 8017FDE8
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 8017FDEC
  W32(c->r[26]+0x00000054u,c->r[7]); // 8017FDF0
  W32(c->r[26]+0x00000310u,c->r[26]); // 8017FDF4
  c->ctr=c->r[0]; // 8017FDF8
L_8017FDFC:;
  c->r[5]=c->r[26]+c->r[3]; // 8017FDFC
  c->r[4]=c->r[26]+c->r[8]; // 8017FE00
  W32(c->r[5]+0x00000068u,c->r[6]); // 8017FE04
  c->r[8]=c->r[8]+0x00000001u; // 8017FE08
  c->r[3]=c->r[3]+0x00000004u; // 8017FE0C
  W8(c->r[4]+0x00000090u,c->r[7]); // 8017FE10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017FDFC; } // 8017FE14
  c->r[24]=c->r[26]+0x00000318u; // 8017FE18
  c->r[3]=c->r[24]|c->r[24]; // 8017FE1C
  c->lr=0x8017FE24u; f_800506C0(c); // 8017FE20
  cmps(c,0,(int32_t)c->r[24],0); // 8017FE24
  c->r[3]=c->r[24]|c->r[24]; // 8017FE28
  if (crb(c,2)) { goto L_8017FE34; } // 8017FE2C
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 8017FE30
L_8017FE34:;
  c->r[29]=0u+0x00000001u; // 8017FE34
  W32(c->r[24]+0x00000008u,c->r[3]); // 8017FE38
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 8017FE3C
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 8017FE40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FE44
  if (!crb(c,2)) { goto L_8017FE88; } // 8017FE48
  c->r[28]=0u+0x80750000u; // 8017FE4C
  c->r[3]=c->r[28]+0xFFFF816Cu; // 8017FE50
  c->lr=0x8017FE58u; f_800506C0(c); // 8017FE54
  c->r[6]=0u+0x806D0000u; // 8017FE58
  c->r[4]=0u+0x80080000u; // 8017FE5C
  c->r[6]=c->r[6]+0x000038D8u; // 8017FE60
  c->r[3]=c->r[28]+0xFFFF816Cu; // 8017FE64
  c->r[0]=c->r[6]+0x00000008u; // 8017FE68
  c->r[5]=0u+0x80750000u; // 8017FE6C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017FE70
  c->r[4]=c->r[4]+0xFFFF9844u; // 8017FE74
  c->r[5]=c->r[5]+0x00004A7Cu; // 8017FE78
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017FE7C
  c->lr=0x8017FE84u; f_803A92B8(c); // 8017FE80
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 8017FE84
L_8017FE88:;
  c->r[3]=0u+0x80750000u; // 8017FE88
  c->r[5]=c->r[24]|c->r[24]; // 8017FE8C
  c->r[3]=c->r[3]+0xFFFF816Cu; // 8017FE90
  c->r[4]=c->r[3]|c->r[3]; // 8017FE94
  c->lr=0x8017FE9Cu; f_802DDCA8(c); // 8017FE98
  c->r[3]=0u+0x806D0000u; // 8017FE9C
  c->r[0]=0u+0x00000000u; // 8017FEA0
  c->r[3]=c->r[3]+0xFFFFD974u; // 8017FEA4
  c->r[5]=0u+0xFFFFFFFFu; // 8017FEA8
  c->r[4]=0u+0x00000001u; // 8017FEAC
  c->r[25]=c->r[26]+0x0000032Cu; // 8017FEB0
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017FEB4
  c->r[3]=c->r[25]|c->r[25]; // 8017FEB8
  W32(c->r[26]+0x00000328u,c->r[5]); // 8017FEBC
  W32(c->r[26]+0x000000ECu,c->r[4]); // 8017FEC0
  W32(c->r[26]+0x00000054u,c->r[0]); // 8017FEC4
  W32(c->r[26]+0x00000314u,c->r[0]); // 8017FEC8
  c->lr=0x8017FED0u; f_800506C0(c); // 8017FECC
  cmps(c,0,(int32_t)c->r[25],0); // 8017FED0
  c->r[3]=c->r[25]|c->r[25]; // 8017FED4
  if (crb(c,2)) { goto L_8017FEE0; } // 8017FED8
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 8017FEDC
L_8017FEE0:;
  c->r[28]=0u+0x00000001u; // 8017FEE0
  W32(c->r[25]+0x00000008u,c->r[3]); // 8017FEE4
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 8017FEE8
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 8017FEEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FEF0
  if (!crb(c,2)) { goto L_8017FF34; } // 8017FEF4
  c->r[27]=0u+0x80730000u; // 8017FEF8
  c->r[3]=c->r[27]+0x000073A8u; // 8017FEFC
  c->lr=0x8017FF04u; f_800506C0(c); // 8017FF00
  c->r[6]=0u+0x806D0000u; // 8017FF04
  c->r[4]=0u+0x80050000u; // 8017FF08
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 8017FF0C
  c->r[3]=c->r[27]+0x000073A8u; // 8017FF10
  c->r[0]=c->r[6]+0x00000008u; // 8017FF14
  c->r[5]=0u+0x80750000u; // 8017FF18
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017FF1C
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 8017FF20
  c->r[5]=c->r[5]+0x00004A70u; // 8017FF24
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017FF28
  c->lr=0x8017FF30u; f_803A92B8(c); // 8017FF2C
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 8017FF30
L_8017FF34:;
  c->r[3]=0u+0x80730000u; // 8017FF34
  c->r[5]=c->r[25]|c->r[25]; // 8017FF38
  c->r[3]=c->r[3]+0x000073A8u; // 8017FF3C
  c->r[4]=c->r[3]|c->r[3]; // 8017FF40
  c->lr=0x8017FF48u; f_802DDCA8(c); // 8017FF44
  c->r[25]=c->r[26]+0x0000033Cu; // 8017FF48
  c->r[3]=c->r[25]|c->r[25]; // 8017FF4C
  c->lr=0x8017FF54u; f_800506C0(c); // 8017FF50
  cmps(c,0,(int32_t)c->r[25],0); // 8017FF54
  c->r[3]=c->r[25]|c->r[25]; // 8017FF58
  if (crb(c,2)) { goto L_8017FF64; } // 8017FF5C
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 8017FF60
L_8017FF64:;
  c->r[28]=0u+0x00000001u; // 8017FF64
  W32(c->r[25]+0x00000008u,c->r[3]); // 8017FF68
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 8017FF6C
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 8017FF70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FF74
  if (!crb(c,2)) { goto L_8017FFB8; } // 8017FF78
  c->r[27]=0u+0x80750000u; // 8017FF7C
  c->r[3]=c->r[27]+0xFFFF8158u; // 8017FF80
  c->lr=0x8017FF88u; f_800506C0(c); // 8017FF84
  c->r[6]=0u+0x806D0000u; // 8017FF88
  c->r[4]=0u+0x80080000u; // 8017FF8C
  c->r[6]=c->r[6]+0x000038F0u; // 8017FF90
  c->r[3]=c->r[27]+0xFFFF8158u; // 8017FF94
  c->r[0]=c->r[6]+0x00000008u; // 8017FF98
  c->r[5]=0u+0x80750000u; // 8017FF9C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017FFA0
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8017FFA4
  c->r[5]=c->r[5]+0x00004A64u; // 8017FFA8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017FFAC
  c->lr=0x8017FFB4u; f_803A92B8(c); // 8017FFB0
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 8017FFB4
L_8017FFB8:;
  c->r[3]=0u+0x80750000u; // 8017FFB8
  c->r[5]=c->r[25]|c->r[25]; // 8017FFBC
  c->r[3]=c->r[3]+0xFFFF8158u; // 8017FFC0
  c->r[4]=c->r[3]|c->r[3]; // 8017FFC4
  c->lr=0x8017FFCCu; f_802DDCA8(c); // 8017FFC8
  c->r[3]=0u+0x806D0000u; // 8017FFCC
  W32(c->r[26]+0x00000054u,c->r[31]); // 8017FFD0
  c->r[3]=c->r[3]+0x00004AE8u; // 8017FFD4
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 8017FFD8
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 8017FFDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FFE0
  if (!crb(c,2)) { goto L_80180000; } // 8017FFE4
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8017FFE8
  c->r[0]=0u+0x00000001u; // 8017FFEC
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 8017FFF0
  c->r[3]=c->r[3]+0x00000001u; // 8017FFF4
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8017FFF8
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 8017FFFC
L_80180000:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80180000
  W32(c->r[26]+0x00000328u,c->r[0]); // 80180004
  c->r[0]=R8(c->r[13]+0xFFFFCD44u); // 80180008
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018000C
  if (!crb(c,2)) { goto L_8018002C; } // 80180010
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 80180014
  c->r[0]=0u+0x00000001u; // 80180018
  W32(c->r[13]+0xFFFFCD40u,c->r[3]); // 8018001C
  c->r[3]=c->r[3]+0x00000001u; // 80180020
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80180024
  W8(c->r[13]+0xFFFFCD44u,c->r[0]); // 80180028
L_8018002C:;
  c->r[0]=R32(c->r[13]+0xFFFFCD40u); // 8018002C
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 80180030
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 80180034
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180038
  if (!crb(c,2)) { goto L_80180058; } // 8018003C
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 80180040
  c->r[0]=0u+0x00000001u; // 80180044
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 80180048
  c->r[3]=c->r[3]+0x00000001u; // 8018004C
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 80180050
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 80180054
L_80180058:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 80180058
  c->r[5]=0u+0x806D0000u; // 8018005C
  c->r[5]=c->r[5]+0xFFFFE468u; // 80180060
  W32(c->r[26]+0x00000350u,c->r[0]); // 80180064
  c->r[3]=c->r[26]+0x000003B0u; // 80180068
  c->r[4]=0u+0x00000000u; // 8018006C
  W32(c->r[26]+0x00000400u,c->r[5]); // 80180070
  c->r[5]=0u+0x00000050u; // 80180074
  c->lr=0x8018007Cu; f_800043EC(c); // 80180078
  c->r[4]=0u+0x806D0000u; // 8018007C
  c->r[3]=c->r[26]+0x00000450u; // 80180080
  c->r[4]=c->r[4]+0xFFFFE170u; // 80180084
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80180088
  c->r[0]=c->r[4]+0x00000044u; // 8018008C
  W32(c->r[26]+0x00000400u,c->r[0]); // 80180090
  c->lr=0x80180098u; f_8007BDFC(c); // 80180094
  c->r[3]=c->r[26]+0x000004C4u; // 80180098
  c->lr=0x801800A0u; f_8007BDFC(c); // 8018009C
  c->r[3]=c->r[26]+0x00000538u; // 801800A0
  c->r[4]=0u+0x00000000u; // 801800A4
  c->r[5]=0u+0x00000008u; // 801800A8
  c->lr=0x801800B0u; f_800043EC(c); // 801800AC
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801800B0
  cmps(c,0,(int32_t)c->r[24],0); // 801800B4
  if (crb(c,2)) { goto L_801800FC; } // 801800B8
  c->lr=0x801800C0u; f_801806D8(c); // 801800BC
  c->r[27]=c->r[3]|c->r[3]; // 801800C0
  c->lr=0x801800C8u; f_8007BDCC(c); // 801800C4
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 801800C8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801800CC
  c->r[5]=0u+0x80180000u; // 801800D0
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801800D4
  c->r[4]=c->r[24]+c->r[4]; // 801800D8
  c->r[5]=c->r[5]+0x000007FCu; // 801800DC
  c->r[4]=c->r[4]+c->r[0]; // 801800E0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801800E4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801800E8
  cmpu(c,0,c->r[0],0x0000000Cu); // 801800EC
  if (!crb(c,0)) { goto L_801800FC; } // 801800F0
  c->r[0]=0u+0x0000000Cu; // 801800F4
  W32(c->r[24]+c->r[3],c->r[0]); // 801800F8
L_801800FC:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801800FC
  cmps(c,0,(int32_t)c->r[24],0); // 80180100
  if (crb(c,2)) { goto L_8018016C; } // 80180104
  c->lr=0x8018010Cu; f_801806D8(c); // 80180108
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 8018010C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180110
  if (!crb(c,2)) { goto L_80180134; } // 80180114
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80180118
  c->r[0]=0u+0x00000001u; // 8018011C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180120
  c->r[4]=c->r[5]+0x00000001u; // 80180124
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180128
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 8018012C
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80180130
L_80180134:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80180134
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 80180138
  c->r[5]=0u+0x80180000u; // 8018013C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180140
  c->r[4]=c->r[24]+c->r[4]; // 80180144
  c->r[5]=c->r[5]+0x000007F8u; // 80180148
  c->r[4]=c->r[4]+c->r[0]; // 8018014C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180150
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180154
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180158
  cmpu(c,0,c->r[0],0x00000018u); // 8018015C
  if (!crb(c,0)) { goto L_8018016C; } // 80180160
  c->r[0]=0u+0x00000018u; // 80180164
  W32(c->r[24]+c->r[3],c->r[0]); // 80180168
L_8018016C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8018016C
  cmps(c,0,(int32_t)c->r[24],0); // 80180170
  if (crb(c,2)) { goto L_801801DC; } // 80180174
  c->lr=0x8018017Cu; f_801806D8(c); // 80180178
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 8018017C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180180
  if (!crb(c,2)) { goto L_801801A4; } // 80180184
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80180188
  c->r[0]=0u+0x00000001u; // 8018018C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180190
  c->r[4]=c->r[5]+0x00000001u; // 80180194
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180198
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 8018019C
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 801801A0
L_801801A4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801801A4
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 801801A8
  c->r[5]=0u+0x80180000u; // 801801AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801801B0
  c->r[4]=c->r[24]+c->r[4]; // 801801B4
  c->r[5]=c->r[5]+0x000007F4u; // 801801B8
  c->r[4]=c->r[4]+c->r[0]; // 801801BC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801801C0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801801C4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801801C8
  cmpu(c,0,c->r[0],0x0000006Cu); // 801801CC
  if (!crb(c,0)) { goto L_801801DC; } // 801801D0
  c->r[0]=0u+0x0000006Cu; // 801801D4
  W32(c->r[24]+c->r[3],c->r[0]); // 801801D8
L_801801DC:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801801DC
  cmps(c,0,(int32_t)c->r[24],0); // 801801E0
  if (crb(c,2)) { goto L_8018024C; } // 801801E4
  c->lr=0x801801ECu; f_801806D8(c); // 801801E8
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801801EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801801F0
  if (!crb(c,2)) { goto L_80180214; } // 801801F4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801801F8
  c->r[0]=0u+0x00000001u; // 801801FC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180200
  c->r[4]=c->r[5]+0x00000001u; // 80180204
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180208
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8018020C
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80180210
L_80180214:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80180214
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80180218
  c->r[5]=0u+0x80180000u; // 8018021C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180220
  c->r[4]=c->r[24]+c->r[4]; // 80180224
  c->r[5]=c->r[5]+0x000007F0u; // 80180228
  c->r[4]=c->r[4]+c->r[0]; // 8018022C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180230
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180234
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180238
  cmpu(c,0,c->r[0],0x0000002Cu); // 8018023C
  if (!crb(c,0)) { goto L_8018024C; } // 80180240
  c->r[0]=0u+0x0000002Cu; // 80180244
  W32(c->r[24]+c->r[3],c->r[0]); // 80180248
L_8018024C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8018024C
  cmps(c,0,(int32_t)c->r[24],0); // 80180250
  if (crb(c,2)) { goto L_801802BC; } // 80180254
  c->lr=0x8018025Cu; f_801806D8(c); // 80180258
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 8018025C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180260
  if (!crb(c,2)) { goto L_80180284; } // 80180264
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80180268
  c->r[0]=0u+0x00000001u; // 8018026C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180270
  c->r[4]=c->r[5]+0x00000001u; // 80180274
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180278
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 8018027C
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 80180280
L_80180284:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80180284
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 80180288
  c->r[5]=0u+0x80180000u; // 8018028C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180290
  c->r[4]=c->r[24]+c->r[4]; // 80180294
  c->r[5]=c->r[5]+0x000007ECu; // 80180298
  c->r[4]=c->r[4]+c->r[0]; // 8018029C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801802A0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801802A4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801802A8
  cmpu(c,0,c->r[0],0x00000010u); // 801802AC
  if (!crb(c,0)) { goto L_801802BC; } // 801802B0
  c->r[0]=0u+0x00000010u; // 801802B4
  W32(c->r[24]+c->r[3],c->r[0]); // 801802B8
L_801802BC:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801802BC
  cmps(c,0,(int32_t)c->r[24],0); // 801802C0
  if (crb(c,2)) { goto L_8018032C; } // 801802C4
  c->lr=0x801802CCu; f_801806D8(c); // 801802C8
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801802CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801802D0
  if (!crb(c,2)) { goto L_801802F4; } // 801802D4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801802D8
  c->r[0]=0u+0x00000001u; // 801802DC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801802E0
  c->r[4]=c->r[5]+0x00000001u; // 801802E4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801802E8
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801802EC
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801802F0
L_801802F4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801802F4
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801802F8
  c->r[5]=0u+0x80180000u; // 801802FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180300
  c->r[4]=c->r[24]+c->r[4]; // 80180304
  c->r[5]=c->r[5]+0x000007E8u; // 80180308
  c->r[4]=c->r[4]+c->r[0]; // 8018030C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180310
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180314
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180318
  cmpu(c,0,c->r[0],0x0000005Cu); // 8018031C
  if (!crb(c,0)) { goto L_8018032C; } // 80180320
  c->r[0]=0u+0x0000005Cu; // 80180324
  W32(c->r[24]+c->r[3],c->r[0]); // 80180328
L_8018032C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8018032C
  cmps(c,0,(int32_t)c->r[24],0); // 80180330
  if (crb(c,2)) { goto L_8018039C; } // 80180334
  c->lr=0x8018033Cu; f_801806D8(c); // 80180338
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8018033C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180340
  if (!crb(c,2)) { goto L_80180364; } // 80180344
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80180348
  c->r[0]=0u+0x00000001u; // 8018034C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180350
  c->r[4]=c->r[5]+0x00000001u; // 80180354
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180358
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 8018035C
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 80180360
L_80180364:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80180364
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 80180368
  c->r[5]=0u+0x80180000u; // 8018036C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180370
  c->r[4]=c->r[24]+c->r[4]; // 80180374
  c->r[5]=c->r[5]+0x000007E4u; // 80180378
  c->r[4]=c->r[4]+c->r[0]; // 8018037C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180380
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180384
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180388
  cmpu(c,0,c->r[0],0x0000005Cu); // 8018038C
  if (!crb(c,0)) { goto L_8018039C; } // 80180390
  c->r[0]=0u+0x0000005Cu; // 80180394
  W32(c->r[24]+c->r[3],c->r[0]); // 80180398
L_8018039C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8018039C
  cmps(c,0,(int32_t)c->r[24],0); // 801803A0
  if (crb(c,2)) { goto L_8018040C; } // 801803A4
  c->lr=0x801803ACu; f_801806D8(c); // 801803A8
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801803AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801803B0
  if (!crb(c,2)) { goto L_801803D4; } // 801803B4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801803B8
  c->r[0]=0u+0x00000001u; // 801803BC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801803C0
  c->r[4]=c->r[5]+0x00000001u; // 801803C4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801803C8
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801803CC
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801803D0
L_801803D4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801803D4
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801803D8
  c->r[5]=0u+0x80180000u; // 801803DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801803E0
  c->r[4]=c->r[24]+c->r[4]; // 801803E4
  c->r[5]=c->r[5]+0x000007E0u; // 801803E8
  c->r[4]=c->r[4]+c->r[0]; // 801803EC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801803F0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801803F4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801803F8
  cmpu(c,0,c->r[0],0x0000005Cu); // 801803FC
  if (!crb(c,0)) { goto L_8018040C; } // 80180400
  c->r[0]=0u+0x0000005Cu; // 80180404
  W32(c->r[24]+c->r[3],c->r[0]); // 80180408
L_8018040C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8018040C
  cmps(c,0,(int32_t)c->r[24],0); // 80180410
  if (crb(c,2)) { goto L_8018047C; } // 80180414
  c->lr=0x8018041Cu; f_801806D8(c); // 80180418
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 8018041C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180420
  if (!crb(c,2)) { goto L_80180444; } // 80180424
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80180428
  c->r[0]=0u+0x00000001u; // 8018042C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80180430
  c->r[4]=c->r[5]+0x00000001u; // 80180434
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80180438
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 8018043C
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80180440
L_80180444:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80180444
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 80180448
  c->r[5]=0u+0x80180000u; // 8018044C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180450
  c->r[4]=c->r[24]+c->r[4]; // 80180454
  c->r[5]=c->r[5]+0x000007DCu; // 80180458
  c->r[4]=c->r[4]+c->r[0]; // 8018045C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180460
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180464
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180468
  cmpu(c,0,c->r[0],0x0000005Cu); // 8018046C
  if (!crb(c,0)) { goto L_8018047C; } // 80180470
  c->r[0]=0u+0x0000005Cu; // 80180474
  W32(c->r[24]+c->r[3],c->r[0]); // 80180478
L_8018047C:;
  c->r[3]=c->r[26]|c->r[26]; // 8018047C
  c->lr=0x80180484u; f_8005BBF0(c); // 80180480
  c->r[4]=0u+0x806E0000u; // 80180484
  c->r[3]=c->r[26]+0x000005CCu; // 80180488
  c->r[4]=c->r[4]+0x00000360u; // 8018048C
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80180490
  c->r[0]=c->r[4]+0x00000044u; // 80180494
  W32(c->r[26]+0x00000400u,c->r[0]); // 80180498
  c->lr=0x801804A0u; f_800A7AB8(c); // 8018049C
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801804A0
  cmps(c,0,(int32_t)c->r[24],0); // 801804A4
  if (crb(c,2)) { goto L_80180510; } // 801804A8
  c->lr=0x801804B0u; f_801806D8(c); // 801804AC
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 801804B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801804B4
  if (!crb(c,2)) { goto L_801804D8; } // 801804B8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 801804BC
  c->r[0]=0u+0x00000001u; // 801804C0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 801804C4
  c->r[4]=c->r[5]+0x00000001u; // 801804C8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 801804CC
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 801804D0
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 801804D4
L_801804D8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 801804D8
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 801804DC
  c->r[5]=0u+0x80180000u; // 801804E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801804E4
  c->r[4]=c->r[24]+c->r[4]; // 801804E8
  c->r[5]=c->r[5]+0x000007D8u; // 801804EC
  c->r[4]=c->r[4]+c->r[0]; // 801804F0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801804F4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801804F8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801804FC
  cmpu(c,0,c->r[0],0x00000010u); // 80180500
  if (!crb(c,0)) { goto L_80180510; } // 80180504
  c->r[0]=0u+0x00000010u; // 80180508
  W32(c->r[24]+c->r[3],c->r[0]); // 8018050C
L_80180510:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80180510
  cmps(c,0,(int32_t)c->r[24],0); // 80180514
  if (crb(c,2)) { goto L_8018055C; } // 80180518
  c->lr=0x80180520u; f_801806D8(c); // 8018051C
  c->r[27]=c->r[3]|c->r[3]; // 80180520
  c->lr=0x80180528u; f_801807A8(c); // 80180524
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80180528
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018052C
  c->r[5]=0u+0x80180000u; // 80180530
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80180534
  c->r[4]=c->r[24]+c->r[4]; // 80180538
  c->r[5]=c->r[5]+0x000007A4u; // 8018053C
  c->r[4]=c->r[4]+c->r[0]; // 80180540
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180544
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180548
  cmpu(c,0,c->r[0],0x00000010u); // 8018054C
  if (!crb(c,0)) { goto L_8018055C; } // 80180550
  c->r[0]=0u+0x00000010u; // 80180554
  W32(c->r[24]+c->r[3],c->r[0]); // 80180558
L_8018055C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8018055C
  cmps(c,0,(int32_t)c->r[24],0); // 80180560
  if (crb(c,2)) { goto L_801805A8; } // 80180564
  c->lr=0x8018056Cu; f_801806D8(c); // 80180568
  c->r[27]=c->r[3]|c->r[3]; // 8018056C
  c->lr=0x80180574u; f_80180774(c); // 80180570
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80180574
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180578
  c->r[5]=0u+0x80180000u; // 8018057C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80180580
  c->r[4]=c->r[24]+c->r[4]; // 80180584
  c->r[5]=c->r[5]+0x00000770u; // 80180588
  c->r[4]=c->r[4]+c->r[0]; // 8018058C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180590
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180594
  cmpu(c,0,c->r[0],0x00000014u); // 80180598
  if (!crb(c,0)) { goto L_801805A8; } // 8018059C
  c->r[0]=0u+0x00000014u; // 801805A0
  W32(c->r[24]+c->r[3],c->r[0]); // 801805A4
L_801805A8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801805A8
  cmps(c,0,(int32_t)c->r[24],0); // 801805AC
  if (crb(c,2)) { goto L_801805F4; } // 801805B0
  c->lr=0x801805B8u; f_801806D8(c); // 801805B4
  c->r[27]=c->r[3]|c->r[3]; // 801805B8
  c->lr=0x801805C0u; f_80180740(c); // 801805BC
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801805C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801805C4
  c->r[5]=0u+0x80180000u; // 801805C8
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801805CC
  c->r[4]=c->r[24]+c->r[4]; // 801805D0
  c->r[5]=c->r[5]+0x0000073Cu; // 801805D4
  c->r[4]=c->r[4]+c->r[0]; // 801805D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801805DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801805E0
  cmpu(c,0,c->r[0],0x00000014u); // 801805E4
  if (!crb(c,0)) { goto L_801805F4; } // 801805E8
  c->r[0]=0u+0x00000014u; // 801805EC
  W32(c->r[24]+c->r[3],c->r[0]); // 801805F0
L_801805F4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801805F4
  cmps(c,0,(int32_t)c->r[24],0); // 801805F8
  if (crb(c,2)) { goto L_80180640; } // 801805FC
  c->lr=0x80180604u; f_801806D8(c); // 80180600
  c->r[27]=c->r[3]|c->r[3]; // 80180604
  c->lr=0x8018060Cu; f_8018070C(c); // 80180608
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8018060C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180610
  c->r[5]=0u+0x80180000u; // 80180614
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80180618
  c->r[4]=c->r[24]+c->r[4]; // 8018061C
  c->r[5]=c->r[5]+0x00000708u; // 80180620
  c->r[4]=c->r[4]+c->r[0]; // 80180624
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180628
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018062C
  cmpu(c,0,c->r[0],0x00000010u); // 80180630
  if (!crb(c,0)) { goto L_80180640; } // 80180634
  c->r[0]=0u+0x00000010u; // 80180638
  W32(c->r[24]+c->r[3],c->r[0]); // 8018063C
L_80180640:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80180640
  cmps(c,0,(int32_t)c->r[24],0); // 80180644
  if (crb(c,2)) { goto L_8018068C; } // 80180648
  c->lr=0x80180650u; f_801806D8(c); // 8018064C
  c->r[27]=c->r[3]|c->r[3]; // 80180650
  c->lr=0x80180658u; f_801806A8(c); // 80180654
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80180658
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018065C
  c->r[5]=0u+0x80180000u; // 80180660
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80180664
  c->r[4]=c->r[24]+c->r[4]; // 80180668
  c->r[5]=c->r[5]+0x000006A4u; // 8018066C
  c->r[4]=c->r[4]+c->r[0]; // 80180670
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80180674
  c->r[0]=R32(c->r[24]+c->r[3]); // 80180678
  cmpu(c,0,c->r[0],0x00000014u); // 8018067C
  if (!crb(c,0)) { goto L_8018068C; } // 80180680
  c->r[0]=0u+0x00000014u; // 80180684
  W32(c->r[24]+c->r[3],c->r[0]); // 80180688
L_8018068C:;
  c->r[3]=c->r[26]|c->r[26]; // 8018068C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80180690
  c->r[0]=R32(c->r[1]+0x00000044u); // 80180694
  c->lr=c->r[0]; // 80180698
  c->r[1]=c->r[1]+0x00000040u; // 8018069C
  return; // 801806A0
}

// fn_801806A4
void f_801806A4(Ctx* __restrict c) {
  trace_call(0x801806A4u);
  f_80181048(c); return; // 801806A4
}

// fn_801806A8
void f_801806A8(Ctx* __restrict c) {
  trace_call(0x801806A8u);
  c->r[0]=R8(c->r[13]+0xFFFFCD34u); // 801806A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801806AC
  if (!crb(c,2)) { goto L_801806D0; } // 801806B0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801806B4
  c->r[0]=0u+0x00000001u; // 801806B8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801806BC
  c->r[3]=c->r[4]+0x00000001u; // 801806C0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801806C4
  W32(c->r[13]+0xFFFFCD30u,c->r[4]); // 801806C8
  W8(c->r[13]+0xFFFFCD34u,c->r[0]); // 801806CC
L_801806D0:;
  c->r[3]=R32(c->r[13]+0xFFFFCD30u); // 801806D0
  return; // 801806D4
}

// fn_801806D8
void f_801806D8(Ctx* __restrict c) {
  trace_call(0x801806D8u);
  c->r[0]=R8(c->r[13]+0xFFFFCD3Cu); // 801806D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801806DC
  if (!crb(c,2)) { goto L_80180700; } // 801806E0
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801806E4
  c->r[0]=0u+0x00000001u; // 801806E8
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801806EC
  c->r[3]=c->r[4]+0x00000001u; // 801806F0
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801806F4
  W32(c->r[13]+0xFFFFCD38u,c->r[4]); // 801806F8
  W8(c->r[13]+0xFFFFCD3Cu,c->r[0]); // 801806FC
L_80180700:;
  c->r[3]=R32(c->r[13]+0xFFFFCD38u); // 80180700
  return; // 80180704
}

// fn_80180708
void f_80180708(Ctx* __restrict c) {
  trace_call(0x80180708u);
  f_80180F20(c); return; // 80180708
}

// fn_8018070C
void f_8018070C(Ctx* __restrict c) {
  trace_call(0x8018070Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCD2Cu); // 8018070C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180710
  if (!crb(c,2)) { goto L_80180734; } // 80180714
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80180718
  c->r[0]=0u+0x00000001u; // 8018071C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80180720
  c->r[3]=c->r[4]+0x00000001u; // 80180724
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80180728
  W32(c->r[13]+0xFFFFCD28u,c->r[4]); // 8018072C
  W8(c->r[13]+0xFFFFCD2Cu,c->r[0]); // 80180730
L_80180734:;
  c->r[3]=R32(c->r[13]+0xFFFFCD28u); // 80180734
  return; // 80180738
}

// fn_8018073C
void f_8018073C(Ctx* __restrict c) {
  trace_call(0x8018073Cu);
  f_80180E24(c); return; // 8018073C
}

// fn_80180740
void f_80180740(Ctx* __restrict c) {
  trace_call(0x80180740u);
  c->r[0]=R8(c->r[13]+0xFFFFCD24u); // 80180740
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180744
  if (!crb(c,2)) { goto L_80180768; } // 80180748
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8018074C
  c->r[0]=0u+0x00000001u; // 80180750
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80180754
  c->r[3]=c->r[4]+0x00000001u; // 80180758
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8018075C
  W32(c->r[13]+0xFFFFCD20u,c->r[4]); // 80180760
  W8(c->r[13]+0xFFFFCD24u,c->r[0]); // 80180764
L_80180768:;
  c->r[3]=R32(c->r[13]+0xFFFFCD20u); // 80180768
  return; // 8018076C
}

// fn_80180770
void f_80180770(Ctx* __restrict c) {
  trace_call(0x80180770u);
  f_80180BC4(c); return; // 80180770
}

// fn_80180774
void f_80180774(Ctx* __restrict c) {
  trace_call(0x80180774u);
  c->r[0]=R8(c->r[13]+0xFFFFCD1Cu); // 80180774
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180778
  if (!crb(c,2)) { goto L_8018079C; } // 8018077C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80180780
  c->r[0]=0u+0x00000001u; // 80180784
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80180788
  c->r[3]=c->r[4]+0x00000001u; // 8018078C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80180790
  W32(c->r[13]+0xFFFFCD18u,c->r[4]); // 80180794
  W8(c->r[13]+0xFFFFCD1Cu,c->r[0]); // 80180798
L_8018079C:;
  c->r[3]=R32(c->r[13]+0xFFFFCD18u); // 8018079C
  return; // 801807A0
}

// fn_801807A4
void f_801807A4(Ctx* __restrict c) {
  trace_call(0x801807A4u);
  f_80180B64(c); return; // 801807A4
}

// fn_801807A8
void f_801807A8(Ctx* __restrict c) {
  trace_call(0x801807A8u);
  c->r[0]=R8(c->r[13]+0xFFFFCD14u); // 801807A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801807AC
  if (!crb(c,2)) { goto L_801807D0; } // 801807B0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801807B4
  c->r[0]=0u+0x00000001u; // 801807B8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801807BC
  c->r[3]=c->r[4]+0x00000001u; // 801807C0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801807C4
  W32(c->r[13]+0xFFFFCD10u,c->r[4]); // 801807C8
  W8(c->r[13]+0xFFFFCD14u,c->r[0]); // 801807CC
L_801807D0:;
  c->r[3]=R32(c->r[13]+0xFFFFCD10u); // 801807D0
  return; // 801807D4
}

// fn_801807D8
void f_801807D8(Ctx* __restrict c) {
  trace_call(0x801807D8u);
  f_80180A2C(c); return; // 801807D8
}

// fn_801807DC
void f_801807DC(Ctx* __restrict c) {
  trace_call(0x801807DCu);
  f_8005E338(c); return; // 801807DC
}

// fn_801807E0
void f_801807E0(Ctx* __restrict c) {
  trace_call(0x801807E0u);
  f_8005E324(c); return; // 801807E0
}

// fn_801807E4
void f_801807E4(Ctx* __restrict c) {
  trace_call(0x801807E4u);
  f_8005E310(c); return; // 801807E4
}

// fn_801807E8
void f_801807E8(Ctx* __restrict c) {
  trace_call(0x801807E8u);
  f_8005E2FC(c); return; // 801807E8
}

// fn_801807EC
void f_801807EC(Ctx* __restrict c) {
  trace_call(0x801807ECu);
  f_8005E34C(c); return; // 801807EC
}

// fn_801807F0
void f_801807F0(Ctx* __restrict c) {
  trace_call(0x801807F0u);
  f_8005E360(c); return; // 801807F0
}

// fn_801807F4
void f_801807F4(Ctx* __restrict c) {
  trace_call(0x801807F4u);
  f_8005D47C(c); return; // 801807F4
}

// fn_801807F8
void f_801807F8(Ctx* __restrict c) {
  trace_call(0x801807F8u);
  f_8005D468(c); return; // 801807F8
}

// fn_801807FC
void f_801807FC(Ctx* __restrict c) {
  trace_call(0x801807FCu);
  f_8005BEDC(c); return; // 801807FC
}

// fn_80180800
void f_80180800(Ctx* __restrict c) {
  trace_call(0x80180800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180800
  c->r[0]=c->lr; // 80180804
  cmps(c,0,(int32_t)c->r[3],0); // 80180808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018080C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180810
  c->r[30]=c->r[3]|c->r[3]; // 80180814
  c->r[31]=c->r[4]|c->r[4]; // 80180818
  if (crb(c,2)) { goto L_8018083C; } // 8018081C
  if (crb(c,2)) { goto L_8018082C; } // 80180820
  c->r[4]=0u+0x00000000u; // 80180824
  c->lr=0x8018082Cu; f_8005BD00(c); // 80180828
L_8018082C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018082C
  if (!crb(c,1)) { goto L_8018083C; } // 80180830
  c->r[3]=c->r[30]|c->r[30]; // 80180834
  c->lr=0x8018083Cu; f_8005328C(c); // 80180838
L_8018083C:;
  c->r[3]=c->r[30]|c->r[30]; // 8018083C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80180840
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180844
  c->lr=c->r[0]; // 80180848
  c->r[1]=c->r[1]+0x00000010u; // 8018084C
  return; // 80180850
}

// fn_80180854
void f_80180854(Ctx* __restrict c) {
  trace_call(0x80180854u);
  return; // 80180854
}

// fn_80180858
void f_80180858(Ctx* __restrict c) {
  trace_call(0x80180858u);
  f_80181464(c); return; // 80180858
}

// fn_8018085C
void f_8018085C(Ctx* __restrict c) {
  trace_call(0x8018085Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018085C
  c->r[0]=c->lr; // 80180860
  W32(c->r[1]+0x00000044u,c->r[0]); // 80180864
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180868
  c->r[31]=c->r[1]|c->r[1]; // 8018086C
  c->r[28]=c->r[3]|c->r[3]; // 80180870
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80180874
  c->r[12]=R32(c->r[12]+0x00000110u); // 80180878
  c->ctr=c->r[12]; // 8018087C
  if (true) { c->lr=0x80180884u; dispatch(c,c->ctr); } // 80180880
  cmps(c,0,(int32_t)c->r[3],0); // 80180884
  if (crb(c,2)) { goto L_80180968; } // 80180888
  c->r[3]=R32(c->r[28]+0x00000004u); // 8018088C
  cmps(c,0,(int32_t)c->r[3],0); // 80180890
  if (crb(c,2)) { goto L_801808A0; } // 80180894
  c->r[29]=R32(c->r[3]+0x00000000u); // 80180898
  goto L_801808A4; // 8018089C
L_801808A0:;
  c->r[29]=0u+0xFFFFFFFFu; // 801808A0
L_801808A4:;
  c->lr=0x801808A8u; f_80180774(c); // 801808A4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801808A8
  if (!crb(c,2)) { goto L_8018094C; } // 801808AC
  c->r[3]=R32(c->r[28]+0x0000044Cu); // 801808B0
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 801808B4
  cmps(c,0,(int32_t)c->r[0],4); // 801808B8
  if (!crb(c,2)) { goto L_80180930; } // 801808BC
  c->lr=0x801808C4u; f_8018070C(c); // 801808C0
  c->r[4]=c->r[3]|c->r[3]; // 801808C4
  c->r[3]=c->r[28]|c->r[28]; // 801808C8
  c->lr=0x801808D0u; f_80062F4C(c); // 801808CC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801808D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801808D4
  c->r[3]=c->r[28]+c->r[0]; // 801808D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801808DC
  cmps(c,0,(int32_t)c->r[29],0); // 801808E0
  if (crb(c,2)) { goto L_8018090C; } // 801808E4
  c->r[30]=0u+0x00000000u; // 801808E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801808EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801808F0
  c->lr=0x801808F8u; f_8018070C(c); // 801808F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801808F8
  c->r[0]=c->r[13]+0xFFFF8B44u; // 801808FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80180900
  W32(c->r[29]+0x00000008u,c->r[30]); // 80180904
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80180908
L_8018090C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8018090C
  c->r[0]=0u+0x00000000u; // 80180910
  c->r[3]=c->r[28]|c->r[28]; // 80180914
  c->r[4]=c->r[29]|c->r[29]; // 80180918
  W32(c->r[29]+0x00000008u,c->r[0]); // 8018091C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80180920
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80180924
  c->lr=0x8018092Cu; f_8006306C(c); // 80180928
  goto L_80180968; // 8018092C
L_80180930:;
  c->r[3]=c->r[28]|c->r[28]; // 80180930
  c->lr=0x80180938u; f_801814DC(c); // 80180934
  c->r[30]=c->r[3]|c->r[3]; // 80180938
  c->r[3]=c->r[28]|c->r[28]; // 8018093C
  c->lr=0x80180944u; f_80180984(c); // 80180940
  W32(c->r[3]+0x00000010u,c->r[30]); // 80180944
  goto L_80180968; // 80180948
L_8018094C:;
  c->lr=0x80180950u; f_80180740(c); // 8018094C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80180950
  if (!crb(c,2)) { goto L_80180968; } // 80180954
  c->r[3]=c->r[28]|c->r[28]; // 80180958
  c->lr=0x80180960u; f_80180984(c); // 8018095C
  c->r[0]=0u+0x00006541u; // 80180960
  W32(c->r[3]+0x00000010u,c->r[0]); // 80180964
L_80180968:;
  c->r[10]=c->r[31]|c->r[31]; // 80180968
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018096C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80180970
  c->r[0]=R32(c->r[10]+0x00000004u); // 80180974
  c->r[1]=c->r[10]|c->r[10]; // 80180978
  c->lr=c->r[0]; // 8018097C
  return; // 80180980
}

// fn_80180984
void f_80180984(Ctx* __restrict c) {
  trace_call(0x80180984u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180984
  c->r[0]=c->lr; // 80180988
  W32(c->r[1]+0x00000044u,c->r[0]); // 8018098C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180990
  c->r[31]=c->r[1]|c->r[1]; // 80180994
  c->r[28]=c->r[3]|c->r[3]; // 80180998
  c->lr=0x801809A0u; f_801806A8(c); // 8018099C
  c->r[4]=c->r[3]|c->r[3]; // 801809A0
  c->r[3]=c->r[28]|c->r[28]; // 801809A4
  c->lr=0x801809ACu; f_80062F4C(c); // 801809A8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801809AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801809B0
  c->r[3]=c->r[28]+c->r[0]; // 801809B4
  c->r[29]=R32(c->r[3]+0x00000014u); // 801809B8
  cmps(c,0,(int32_t)c->r[29],0); // 801809BC
  if (crb(c,2)) { goto L_801809EC; } // 801809C0
  c->r[30]=0u+0x00000000u; // 801809C4
  W32(c->r[31]+0x00000024u,c->r[1]); // 801809C8
  W8(c->r[31]+0x00000008u,c->r[30]); // 801809CC
  c->lr=0x801809D4u; f_801806A8(c); // 801809D0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801809D4
  c->r[0]=c->r[13]+0xFFFF8B40u; // 801809D8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801809DC
  W32(c->r[29]+0x00000008u,c->r[30]); // 801809E0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801809E4
  W32(c->r[29]+0x00000010u,c->r[30]); // 801809E8
L_801809EC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801809EC
  c->r[0]=0u+0x00000000u; // 801809F0
  c->r[3]=c->r[28]|c->r[28]; // 801809F4
  c->r[4]=c->r[29]|c->r[29]; // 801809F8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801809FC
  c->r[0]=R32(c->r[28]+0x00000004u); // 80180A00
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80180A04
  c->lr=0x80180A0Cu; f_8006306C(c); // 80180A08
  c->r[10]=c->r[31]|c->r[31]; // 80180A0C
  c->r[3]=c->r[29]|c->r[29]; // 80180A10
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80180A14
  c->r[10]=R32(c->r[1]+0x00000000u); // 80180A18
  c->r[0]=R32(c->r[10]+0x00000004u); // 80180A1C
  c->r[1]=c->r[10]|c->r[10]; // 80180A20
  c->lr=c->r[0]; // 80180A24
  return; // 80180A28
}

// fn_80180A2C
void f_80180A2C(Ctx* __restrict c) {
  trace_call(0x80180A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180A2C
  c->r[0]=c->lr; // 80180A30
  {uint32_t ea=c->r[2]+0xFFFFBE88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80180A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80180A40
  c->r[30]=c->r[3]|c->r[3]; // 80180A44
  c->r[4]=R32(c->r[3]+0x00000444u); // 80180A48
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80180A4C
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80180A50
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80180A54
  c->lr=0x80180A5Cu; f_8005EAA0(c); // 80180A58
  {uint32_t ea=c->r[2]+0xFFFFBE8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80180A5C
  c->r[31]=c->r[3]|c->r[3]; // 80180A60
  c->lr=0x80180A68u; f_80101528(c); // 80180A64
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80180A68
  c->r[3]=c->r[31]|c->r[31]; // 80180A6C
  {uint32_t ea=c->r[2]+0xFFFFBE94u; c->f[2]=c->ps1[2]=RF32(ea);} // 80180A70
  c->lr=0x80180A78u; f_80101538(c); // 80180A74
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80180A78
  c->r[3]=c->r[31]|c->r[31]; // 80180A7C
  {uint32_t ea=c->r[2]+0xFFFFBE8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80180A80
  c->lr=0x80180A88u; f_80101544(c); // 80180A84
  c->r[3]=c->r[30]|c->r[30]; // 80180A88
  c->r[4]=0u+0x00000000u; // 80180A8C
  c->lr=0x80180A94u; f_8005EE88(c); // 80180A90
  c->r[3]=c->r[30]|c->r[30]; // 80180A94
  c->r[4]=0u+0x00000000u; // 80180A98
  c->lr=0x80180AA0u; f_8005E814(c); // 80180A9C
  c->r[3]=c->r[30]|c->r[30]; // 80180AA0
  c->lr=0x80180AA8u; f_80180AC0(c); // 80180AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180AA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180AAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80180AB0
  c->lr=c->r[0]; // 80180AB4
  c->r[1]=c->r[1]+0x00000010u; // 80180AB8
  return; // 80180ABC
}

// fn_80180AC0
void f_80180AC0(Ctx* __restrict c) {
  trace_call(0x80180AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180AC0
  c->r[0]=c->lr; // 80180AC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80180AC8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180ACC
  c->r[31]=c->r[1]|c->r[1]; // 80180AD0
  c->r[28]=c->r[3]|c->r[3]; // 80180AD4
  c->lr=0x80180ADCu; f_801807A8(c); // 80180AD8
  c->r[4]=c->r[3]|c->r[3]; // 80180ADC
  c->r[3]=c->r[28]|c->r[28]; // 80180AE0
  c->lr=0x80180AE8u; f_80062F4C(c); // 80180AE4
  c->r[0]=R8(c->r[28]+0x00000010u); // 80180AE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80180AEC
  c->r[3]=c->r[28]+c->r[0]; // 80180AF0
  c->r[29]=R32(c->r[3]+0x00000014u); // 80180AF4
  cmps(c,0,(int32_t)c->r[29],0); // 80180AF8
  if (crb(c,2)) { goto L_80180B24; } // 80180AFC
  c->r[30]=0u+0x00000000u; // 80180B00
  W32(c->r[31]+0x00000024u,c->r[1]); // 80180B04
  W8(c->r[31]+0x00000008u,c->r[30]); // 80180B08
  c->lr=0x80180B10u; f_801807A8(c); // 80180B0C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80180B10
  c->r[0]=c->r[13]+0xFFFF8B50u; // 80180B14
  W32(c->r[29]+0x00000004u,c->r[0]); // 80180B18
  W32(c->r[29]+0x00000008u,c->r[30]); // 80180B1C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80180B20
L_80180B24:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80180B24
  c->r[0]=0u+0x00000000u; // 80180B28
  c->r[3]=c->r[28]|c->r[28]; // 80180B2C
  c->r[4]=c->r[29]|c->r[29]; // 80180B30
  W32(c->r[29]+0x00000008u,c->r[0]); // 80180B34
  c->r[0]=R32(c->r[28]+0x00000004u); // 80180B38
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80180B3C
  c->lr=0x80180B44u; f_8006306C(c); // 80180B40
  c->r[10]=c->r[31]|c->r[31]; // 80180B44
  c->r[3]=c->r[29]|c->r[29]; // 80180B48
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80180B4C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80180B50
  c->r[0]=R32(c->r[10]+0x00000004u); // 80180B54
  c->r[1]=c->r[10]|c->r[10]; // 80180B58
  c->lr=c->r[0]; // 80180B5C
  return; // 80180B60
}

// fn_80180B64
void f_80180B64(Ctx* __restrict c) {
  trace_call(0x80180B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180B64
  c->r[0]=c->lr; // 80180B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180B70
  c->r[31]=c->r[3]|c->r[3]; // 80180B74
  c->r[4]=R32(c->r[3]+0x00000004u); // 80180B78
  cmps(c,0,(int32_t)c->r[4],0); // 80180B7C
  if (crb(c,2)) { goto L_80180B8C; } // 80180B80
  c->r[0]=R32(c->r[4]+0x00000008u); // 80180B84
  goto L_80180B90; // 80180B88
L_80180B8C:;
  c->r[0]=0u+0x00000000u; // 80180B8C
L_80180B90:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180B90
  if (!crb(c,2)) { goto L_80180BB0; } // 80180B94
  c->r[3]=c->r[31]|c->r[31]; // 80180B98
  c->r[4]=0u+0x00000000u; // 80180B9C
  c->r[5]=0u+0x00000001u; // 80180BA0
  c->lr=0x80180BA8u; f_80064744(c); // 80180BA4
  c->r[3]=c->r[31]|c->r[31]; // 80180BA8
  c->lr=0x80180BB0u; f_8018172C(c); // 80180BAC
L_80180BB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180BB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180BB4
  c->lr=c->r[0]; // 80180BB8
  c->r[1]=c->r[1]+0x00000010u; // 80180BBC
  return; // 80180BC0
}

// fn_80180BC4
void f_80180BC4(Ctx* __restrict c) {
  trace_call(0x80180BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180BC4
  c->r[0]=c->lr; // 80180BC8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80180BCC
  c->r[11]=c->r[1]+0x00000060u; // 80180BD0
  c->lr=0x80180BD8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80180BD4
  c->r[5]=R32(c->r[3]+0x00000004u); // 80180BD8
  c->r[31]=c->r[3]|c->r[3]; // 80180BDC
  c->r[28]=c->r[4]|c->r[4]; // 80180BE0
  cmps(c,0,(int32_t)c->r[5],0); // 80180BE4
  if (crb(c,2)) { goto L_80180BF4; } // 80180BE8
  c->r[0]=R32(c->r[5]+0x00000008u); // 80180BEC
  goto L_80180BF8; // 80180BF0
L_80180BF4:;
  c->r[0]=0u+0x00000000u; // 80180BF4
L_80180BF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180BF8
  if (!crb(c,2)) { goto L_80180C5C; } // 80180BFC
  c->r[4]=0u+0x00000001u; // 80180C00
  c->r[3]=c->r[3]+0x000000FCu; // 80180C04
  c->lr=0x80180C0Cu; f_802E6678(c); // 80180C08
  c->r[3]=c->r[31]|c->r[31]; // 80180C0C
  c->r[4]=0u+0x00000000u; // 80180C10
  c->lr=0x80180C18u; f_80181204(c); // 80180C14
  c->r[0]=R32(c->r[28]+0x00000010u); // 80180C18
  cmps(c,0,(int32_t)c->r[0],0); // 80180C1C
  if (crb(c,2)) { goto L_80180C38; } // 80180C20
  cmps(c,0,(int32_t)c->r[0],1); // 80180C24
  if (crb(c,2)) { goto L_80180C40; } // 80180C28
  cmps(c,0,(int32_t)c->r[0],2); // 80180C2C
  if (crb(c,2)) { goto L_80180C48; } // 80180C30
  goto L_80180C4C; // 80180C34
L_80180C38:;
  c->r[29]=0u+0x0000652Cu; // 80180C38
  goto L_80180C4C; // 80180C3C
L_80180C40:;
  c->r[29]=0u+0x0000652Du; // 80180C40
  goto L_80180C4C; // 80180C44
L_80180C48:;
  c->r[29]=0u+0x0000652Fu; // 80180C48
L_80180C4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80180C4C
  c->r[4]=c->r[29]|c->r[29]; // 80180C50
  c->r[5]=0u+0x00000001u; // 80180C54
  c->lr=0x80180C5Cu; f_80064744(c); // 80180C58
L_80180C5C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80180C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80180C60
  if (crb(c,2)) { goto L_80180C70; } // 80180C64
  c->r[0]=R32(c->r[3]+0x00000008u); // 80180C68
  goto L_80180C74; // 80180C6C
L_80180C70:;
  c->r[0]=0u+0x00000000u; // 80180C70
L_80180C74:;
  cmps(c,0,(int32_t)c->r[0],1); // 80180C74
  if (!crb(c,2)) { goto L_80180C94; } // 80180C78
  c->r[3]=c->r[31]|c->r[31]; // 80180C7C
  c->r[4]=0u+0x00000001u; // 80180C80
  c->lr=0x80180C88u; f_8005E814(c); // 80180C84
  c->r[3]=c->r[31]|c->r[31]; // 80180C88
  c->r[4]=0u+0x00000000u; // 80180C8C
  c->lr=0x80180C94u; f_8005EA70(c); // 80180C90
L_80180C94:;
  c->r[3]=c->r[31]+0x00000354u; // 80180C94
  c->lr=0x80180C9Cu; f_800C9374(c); // 80180C98
  c->r[0]=c->r[3]+0xFFFF9ACAu; // 80180C9C
  c->r[29]=c->r[3]|c->r[3]; // 80180CA0
  cmpu(c,0,c->r[0],0x00000002u); // 80180CA4
  if (!crb(c,1)) { goto L_80180D58; } // 80180CA8
  c->r[0]=c->r[3]+0xFFFF9AD4u; // 80180CAC
  cmpu(c,0,c->r[0],0x00000001u); // 80180CB0
  if (!crb(c,1)) { goto L_80180CC0; } // 80180CB4
  cmps(c,0,(int32_t)c->r[3],25903); // 80180CB8
  if (!crb(c,2)) { goto L_80180D9C; } // 80180CBC
L_80180CC0:;
  {uint32_t ea=c->r[2]+0xFFFFBE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80180CC0
  c->r[3]=c->r[31]|c->r[31]; // 80180CC4
  c->lr=0x80180CCCu; f_80064A68(c); // 80180CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80180CCC
  if (crb(c,2)) { goto L_80180D9C; } // 80180CD0
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 80180CD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180CD8
  if (!crb(c,2)) { goto L_80180D0C; } // 80180CDC
  c->r[30]=0u+0x80730000u; // 80180CE0
  c->r[3]=c->r[30]+0x00002598u; // 80180CE4
  c->lr=0x80180CECu; f_80321014(c); // 80180CE8
  c->r[4]=0u+0x80320000u; // 80180CEC
  c->r[5]=0u+0x80750000u; // 80180CF0
  c->r[3]=c->r[30]+0x00002598u; // 80180CF4
  c->r[4]=c->r[4]+0x0000116Cu; // 80180CF8
  c->r[5]=c->r[5]+0x00004A58u; // 80180CFC
  c->lr=0x80180D04u; f_803A92B8(c); // 80180D00
  c->r[0]=0u+0x00000001u; // 80180D04
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 80180D08
L_80180D0C:;
  c->r[5]=0u+0x80690000u; // 80180D0C
  c->r[4]=0u+0x80730000u; // 80180D10
  c->r[5]=c->r[5]+0x000018CCu; // 80180D14
  c->r[3]=c->r[1]+0x00000008u; // 80180D18
  c->r[4]=c->r[4]+0x00002598u; // 80180D1C
  c->r[6]=0u+0x00000001u; // 80180D20
  c->r[5]=c->r[5]+0x00000001u; // 80180D24
  c->lr=0x80180D2Cu; f_80321B90(c); // 80180D28
  c->r[3]=c->r[31]+0x000001B8u; // 80180D2C
  c->r[4]=c->r[1]+0x00000008u; // 80180D30
  c->lr=0x80180D38u; f_80382F2C(c); // 80180D34
  c->r[12]=R32(c->r[1]+0x00000040u); // 80180D38
  c->r[3]=c->r[1]+0x00000008u; // 80180D3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80180D40
  c->ctr=c->r[12]; // 80180D44
  if (true) { c->lr=0x80180D4Cu; dispatch(c,c->ctr); } // 80180D48
  c->r[3]=c->r[1]+0x00000008u; // 80180D4C
  c->lr=0x80180D54u; f_80320A28(c); // 80180D50
  goto L_80180D9C; // 80180D54
L_80180D58:;
  c->r[0]=R8(c->r[31]+0x000005E5u); // 80180D58
  cmps(c,0,(int32_t)c->r[0],0); // 80180D5C
  if (crb(c,2)) { goto L_80180D9C; } // 80180D60
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80180D64
  c->r[3]=c->r[31]|c->r[31]; // 80180D68
  c->r[12]=R32(c->r[12]+0x00000114u); // 80180D6C
  c->ctr=c->r[12]; // 80180D70
  if (true) { c->lr=0x80180D78u; dispatch(c,c->ctr); } // 80180D74
  cmps(c,0,(int32_t)c->r[3],0); // 80180D78
  if (crb(c,2)) { goto L_80180D9C; } // 80180D7C
  c->r[3]=c->r[31]|c->r[31]; // 80180D80
  c->r[4]=0u+0x00000001u; // 80180D84
  c->r[5]=0u+0x00000000u; // 80180D88
  c->lr=0x80180D90u; f_80062748(c); // 80180D8C
  {uint32_t ea=c->r[2]+0xFFFFBE8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80180D90
  c->r[3]=c->r[31]|c->r[31]; // 80180D94
  c->lr=0x80180D9Cu; f_80181444(c); // 80180D98
L_80180D9C:;
  c->r[3]=c->r[31]+0x00000354u; // 80180D9C
  c->lr=0x80180DA4u; f_800667AC(c); // 80180DA0
  cmps(c,0,(int32_t)c->r[3],0); // 80180DA4
  if (crb(c,2)) { goto L_80180E0C; } // 80180DA8
  c->r[0]=c->r[29]+0xFFFF9AD4u; // 80180DAC
  cmpu(c,0,c->r[0],0x00000001u); // 80180DB0
  if (!crb(c,1)) { goto L_80180DC0; } // 80180DB4
  cmps(c,0,(int32_t)c->r[29],25903); // 80180DB8
  if (!crb(c,2)) { goto L_80180E0C; } // 80180DBC
L_80180DC0:;
  cmps(c,0,(int32_t)c->r[29],25900); // 80180DC0
  if (crb(c,2)) { goto L_80180DDC; } // 80180DC4
  cmps(c,0,(int32_t)c->r[29],25901); // 80180DC8
  if (crb(c,2)) { goto L_80180DE4; } // 80180DCC
  cmps(c,0,(int32_t)c->r[29],25903); // 80180DD0
  if (crb(c,2)) { goto L_80180DEC; } // 80180DD4
  goto L_80180DF0; // 80180DD8
L_80180DDC:;
  c->r[28]=0u+0x00006536u; // 80180DDC
  goto L_80180DF0; // 80180DE0
L_80180DE4:;
  c->r[28]=0u+0x00006537u; // 80180DE4
  goto L_80180DF0; // 80180DE8
L_80180DEC:;
  c->r[28]=0u+0x00006538u; // 80180DEC
L_80180DF0:;
  c->r[3]=c->r[31]|c->r[31]; // 80180DF0
  c->r[4]=c->r[28]|c->r[28]; // 80180DF4
  c->r[5]=0u+0x00000001u; // 80180DF8
  c->lr=0x80180E00u; f_80064744(c); // 80180DFC
  {uint32_t ea=c->r[2]+0xFFFFBE8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80180E00
  c->r[3]=c->r[31]|c->r[31]; // 80180E04
  c->lr=0x80180E0Cu; f_80181444(c); // 80180E08
L_80180E0C:;
  c->r[11]=c->r[1]+0x00000060u; // 80180E0C
  c->lr=0x80180E14u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80180E10
  c->r[0]=R32(c->r[1]+0x00000064u); // 80180E14
  c->lr=c->r[0]; // 80180E18
  c->r[1]=c->r[1]+0x00000060u; // 80180E1C
  return; // 80180E20
}

// fn_80180E24
void f_80180E24(Ctx* __restrict c) {
  trace_call(0x80180E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180E24
  c->r[0]=c->lr; // 80180E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180E2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180E30
  c->r[30]=c->r[3]|c->r[3]; // 80180E34
  c->r[31]=c->r[4]|c->r[4]; // 80180E38
  c->r[5]=R32(c->r[3]+0x00000004u); // 80180E3C
  cmps(c,0,(int32_t)c->r[5],0); // 80180E40
  if (crb(c,2)) { goto L_80180E50; } // 80180E44
  c->r[0]=R32(c->r[5]+0x00000008u); // 80180E48
  goto L_80180E54; // 80180E4C
L_80180E50:;
  c->r[0]=0u+0x00000000u; // 80180E50
L_80180E54:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180E54
  if (!crb(c,2)) { goto L_80180EF4; } // 80180E58
  c->r[4]=0u+0x00000001u; // 80180E5C
  c->r[3]=c->r[3]+0x000000FCu; // 80180E60
  c->lr=0x80180E68u; f_802E6678(c); // 80180E64
  c->r[0]=R32(c->r[31]+0x00000010u); // 80180E68
  cmps(c,0,(int32_t)c->r[0],0); // 80180E6C
  if (crb(c,2)) { goto L_80180E98; } // 80180E70
  cmps(c,0,(int32_t)c->r[0],1); // 80180E74
  if (crb(c,2)) { goto L_80180EA8; } // 80180E78
  cmps(c,0,(int32_t)c->r[0],2); // 80180E7C
  if (crb(c,2)) { goto L_80180EB8; } // 80180E80
  cmps(c,0,(int32_t)c->r[0],3); // 80180E84
  if (crb(c,2)) { goto L_80180EC8; } // 80180E88
  cmps(c,0,(int32_t)c->r[0],4); // 80180E8C
  if (crb(c,2)) { goto L_80180ED8; } // 80180E90
  goto L_80180EE4; // 80180E94
L_80180E98:;
  c->r[3]=c->r[30]|c->r[30]; // 80180E98
  c->r[4]=0u+0x00000001u; // 80180E9C
  c->lr=0x80180EA4u; f_80181204(c); // 80180EA0
  goto L_80180EE4; // 80180EA4
L_80180EA8:;
  c->r[3]=c->r[30]|c->r[30]; // 80180EA8
  c->r[4]=0u+0x00000002u; // 80180EAC
  c->lr=0x80180EB4u; f_80181204(c); // 80180EB0
  goto L_80180EE4; // 80180EB4
L_80180EB8:;
  c->r[3]=c->r[30]|c->r[30]; // 80180EB8
  c->r[4]=0u+0x00000003u; // 80180EBC
  c->lr=0x80180EC4u; f_80181204(c); // 80180EC0
  goto L_80180EE4; // 80180EC4
L_80180EC8:;
  c->r[3]=c->r[30]|c->r[30]; // 80180EC8
  c->r[4]=0u+0x00000004u; // 80180ECC
  c->lr=0x80180ED4u; f_80181204(c); // 80180ED0
  goto L_80180EE4; // 80180ED4
L_80180ED8:;
  c->r[3]=c->r[30]|c->r[30]; // 80180ED8
  c->r[4]=0u+0x00000005u; // 80180EDC
  c->lr=0x80180EE4u; f_80181204(c); // 80180EE0
L_80180EE4:;
  c->r[3]=c->r[30]|c->r[30]; // 80180EE4
  c->r[4]=0u+0x00006540u; // 80180EE8
  c->r[5]=0u+0x00000001u; // 80180EEC
  c->lr=0x80180EF4u; f_80064744(c); // 80180EF0
L_80180EF4:;
  c->r[3]=c->r[30]+0x00000354u; // 80180EF4
  c->lr=0x80180EFCu; f_800667AC(c); // 80180EF8
  cmps(c,0,(int32_t)c->r[3],0); // 80180EFC
  if (crb(c,2)) { goto L_80180F0C; } // 80180F00
  c->r[3]=c->r[30]|c->r[30]; // 80180F04
  c->lr=0x80180F0Cu; f_80180AC0(c); // 80180F08
L_80180F0C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80180F0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180F10
  c->lr=c->r[0]; // 80180F14
  c->r[1]=c->r[1]+0x00000010u; // 80180F18
  return; // 80180F1C
}

// fn_80180F20
void f_80180F20(Ctx* __restrict c) {
  trace_call(0x80180F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180F20
  c->r[0]=c->lr; // 80180F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180F28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80180F2C
  c->r[30]=c->r[3]|c->r[3]; // 80180F30
  c->r[4]=R32(c->r[3]+0x00000004u); // 80180F34
  cmps(c,0,(int32_t)c->r[4],0); // 80180F38
  if (crb(c,2)) { goto L_80180F48; } // 80180F3C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80180F40
  goto L_80180F4C; // 80180F44
L_80180F48:;
  c->r[0]=0u+0x00000000u; // 80180F48
L_80180F4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180F4C
  if (!crb(c,2)) { goto L_80180F88; } // 80180F50
  c->r[3]=c->r[30]|c->r[30]; // 80180F54
  c->r[4]=0u+0x00006284u; // 80180F58
  c->r[5]=0u+0x00000001u; // 80180F5C
  c->lr=0x80180F64u; f_80064744(c); // 80180F60
  c->r[3]=c->r[30]|c->r[30]; // 80180F64
  c->r[4]=0u+0x00000000u; // 80180F68
  c->lr=0x80180F70u; f_8005EA70(c); // 80180F6C
  c->r[3]=c->r[30]|c->r[30]; // 80180F70
  c->r[4]=0u+0x00000016u; // 80180F74
  c->r[5]=0u+0x00000001u; // 80180F78
  c->lr=0x80180F80u; f_800D5F20(c); // 80180F7C
  c->r[3]=c->r[30]|c->r[30]; // 80180F80
  c->lr=0x80180F88u; f_8005E00C(c); // 80180F84
L_80180F88:;
  c->r[3]=c->r[30]+0x00000354u; // 80180F88
  c->lr=0x80180F90u; f_800C9374(c); // 80180F8C
  cmps(c,0,(int32_t)c->r[3],25221); // 80180F90
  c->r[31]=c->r[3]|c->r[3]; // 80180F94
  if (!crb(c,2)) { goto L_80180FD0; } // 80180F98
  c->r[3]=c->r[30]|c->r[30]; // 80180F9C
  c->lr=0x80180FA4u; f_8018162C(c); // 80180FA0
  c->r[3]=c->r[30]|c->r[30]; // 80180FA4
  c->lr=0x80180FACu; f_8005EA80(c); // 80180FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80180FAC
  if (crb(c,2)) { goto L_80180FD0; } // 80180FB0
  c->r[3]=c->r[30]|c->r[30]; // 80180FB4
  c->r[4]=0u+0x00006286u; // 80180FB8
  c->r[5]=0u+0x00000001u; // 80180FBC
  c->lr=0x80180FC4u; f_80064744(c); // 80180FC0
  c->r[3]=c->r[30]|c->r[30]; // 80180FC4
  c->r[4]=0u+0x00000001u; // 80180FC8
  c->lr=0x80180FD0u; f_8005EA70(c); // 80180FCC
L_80180FD0:;
  c->r[3]=c->r[30]+0x00000354u; // 80180FD0
  c->lr=0x80180FD8u; f_800667AC(c); // 80180FD4
  cmps(c,0,(int32_t)c->r[3],0); // 80180FD8
  if (crb(c,2)) { goto L_80181034; } // 80180FDC
  cmps(c,0,(int32_t)c->r[31],25220); // 80180FE0
  if (crb(c,2)) { goto L_80180FFC; } // 80180FE4
  cmps(c,0,(int32_t)c->r[31],25222); // 80180FE8
  if (crb(c,2)) { goto L_80181018; } // 80180FEC
  cmps(c,0,(int32_t)c->r[31],25311); // 80180FF0
  if (crb(c,2)) { goto L_8018102C; } // 80180FF4
  goto L_80181034; // 80180FF8
L_80180FFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80180FFC
  c->r[4]=0u+0x00006285u; // 80181000
  c->r[5]=0u+0x00000001u; // 80181004
  c->lr=0x8018100Cu; f_80064744(c); // 80181008
  c->r[3]=c->r[30]|c->r[30]; // 8018100C
  c->lr=0x80181014u; f_80181534(c); // 80181010
  goto L_80181034; // 80181014
L_80181018:;
  c->r[3]=c->r[30]|c->r[30]; // 80181018
  c->r[4]=0u+0x000062DFu; // 8018101C
  c->r[5]=0u+0x00000001u; // 80181020
  c->lr=0x80181028u; f_80064744(c); // 80181024
  goto L_80181034; // 80181028
L_8018102C:;
  c->r[3]=c->r[30]|c->r[30]; // 8018102C
  c->lr=0x80181034u; f_80180AC0(c); // 80181030
L_80181034:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80181034
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181038
  c->lr=c->r[0]; // 8018103C
  c->r[1]=c->r[1]+0x00000010u; // 80181040
  return; // 80181044
}

// fn_80181048
void f_80181048(Ctx* __restrict c) {
  trace_call(0x80181048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181048
  c->r[0]=c->lr; // 8018104C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181050
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80181054
  c->r[30]=c->r[3]|c->r[3]; // 80181058
  c->r[31]=c->r[4]|c->r[4]; // 8018105C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80181060
  cmps(c,0,(int32_t)c->r[5],0); // 80181064
  if (crb(c,2)) { goto L_80181074; } // 80181068
  c->r[0]=R32(c->r[5]+0x00000008u); // 8018106C
  goto L_80181078; // 80181070
L_80181074:;
  c->r[0]=0u+0x00000000u; // 80181074
L_80181078:;
  cmps(c,0,(int32_t)c->r[0],0); // 80181078
  if (!crb(c,2)) { goto L_801810C4; } // 8018107C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80181080
  c->r[3]=c->r[30]|c->r[30]; // 80181084
  c->r[5]=0u+0x00000001u; // 80181088
  c->lr=0x80181090u; f_80064744(c); // 8018108C
  c->r[0]=R32(c->r[31]+0x00000010u); // 80181090
  cmps(c,0,(int32_t)c->r[0],25921); // 80181094
  if (!crb(c,2)) { goto L_801810AC; } // 80181098
  c->r[3]=c->r[30]|c->r[30]; // 8018109C
  c->r[4]=0u+0x00000016u; // 801810A0
  c->r[5]=0u+0x00000001u; // 801810A4
  c->lr=0x801810ACu; f_800D5F20(c); // 801810A8
L_801810AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801810AC
  c->r[4]=0u+0x00000016u; // 801810B0
  c->r[5]=0u+0x00000001u; // 801810B4
  c->lr=0x801810BCu; f_800D5F20(c); // 801810B8
  c->r[3]=c->r[30]|c->r[30]; // 801810BC
  c->lr=0x801810C4u; f_8005E00C(c); // 801810C0
L_801810C4:;
  c->r[3]=c->r[30]+0x00000354u; // 801810C4
  c->lr=0x801810CCu; f_800667AC(c); // 801810C8
  cmps(c,0,(int32_t)c->r[3],0); // 801810CC
  if (crb(c,2)) { goto L_8018115C; } // 801810D0
  c->r[3]=c->r[30]+0x00000354u; // 801810D4
  c->lr=0x801810DCu; f_800C9374(c); // 801810D8
  c->r[0]=c->r[3]+0xFFFF9D22u; // 801810DC
  cmpu(c,0,c->r[0],0x00000001u); // 801810E0
  if (!crb(c,1)) { goto L_80181154; } // 801810E4
  cmps(c,0,(int32_t)c->r[3],25300); // 801810E8
  if (crb(c,2)) { goto L_8018110C; } // 801810EC
  cmps(c,0,(int32_t)c->r[3],25210); // 801810F0
  if (crb(c,2)) { goto L_8018110C; } // 801810F4
  cmps(c,0,(int32_t)c->r[3],25211); // 801810F8
  if (crb(c,2)) { goto L_80181130; } // 801810FC
  cmps(c,0,(int32_t)c->r[3],25921); // 80181100
  if (crb(c,2)) { goto L_80181154; } // 80181104
  goto L_8018115C; // 80181108
L_8018110C:;
  c->r[3]=c->r[30]|c->r[30]; // 8018110C
  c->r[4]=0u+0x000062DEu; // 80181110
  c->r[5]=0u+0x00000001u; // 80181114
  c->lr=0x8018111Cu; f_80064744(c); // 80181118
  c->r[3]=c->r[30]|c->r[30]; // 8018111C
  c->r[4]=0u+0x00000016u; // 80181120
  c->r[5]=0u+0x00000001u; // 80181124
  c->lr=0x8018112Cu; f_800D5F20(c); // 80181128
  goto L_8018115C; // 8018112C
L_80181130:;
  c->r[3]=c->r[30]|c->r[30]; // 80181130
  c->r[4]=0u+0x000062DFu; // 80181134
  c->r[5]=0u+0x00000001u; // 80181138
  c->lr=0x80181140u; f_80064744(c); // 8018113C
  c->r[3]=c->r[30]|c->r[30]; // 80181140
  c->r[4]=0u+0x00000016u; // 80181144
  c->r[5]=0u+0x00000001u; // 80181148
  c->lr=0x80181150u; f_800D5F20(c); // 8018114C
  goto L_8018115C; // 80181150
L_80181154:;
  c->r[3]=c->r[30]|c->r[30]; // 80181154
  c->lr=0x8018115Cu; f_80180AC0(c); // 80181158
L_8018115C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018115C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181160
  c->lr=c->r[0]; // 80181164
  c->r[1]=c->r[1]+0x00000010u; // 80181168
  return; // 8018116C
}

// fn_80181170
void f_80181170(Ctx* __restrict c) {
  trace_call(0x80181170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181170
  c->r[0]=c->lr; // 80181174
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 80181178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018117C
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181180
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181184
  fcmp(c,0,c->f[1],c->f[0]); // 80181188
  if (crb(c,1)) { goto L_80181198; } // 8018118C
  c->r[3]=0u+0x00000000u; // 80181190
  goto L_801811F4; // 80181194
L_80181198:;
  c->lr=0x8018119Cu; f_8033FE4C(c); // 80181198
  c->r[0]=R8(c->r[13]+0xFFFFBB74u); // 8018119C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801811A0
  if (!crb(c,2)) { goto L_801811C0; } // 801811A4
  c->r[4]=R32(c->r[13]+0xFFFFBB58u); // 801811A8
  c->r[0]=0u+0x00000001u; // 801811AC
  W32(c->r[13]+0xFFFFBB70u,c->r[4]); // 801811B0
  c->r[4]=c->r[4]+0x00000001u; // 801811B4
  W32(c->r[13]+0xFFFFBB58u,c->r[4]); // 801811B8
  W8(c->r[13]+0xFFFFBB74u,c->r[0]); // 801811BC
L_801811C0:;
  c->r[0]=R32(c->r[13]+0xFFFFBB70u); // 801811C0
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801811C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801811C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801811CC
  c->r[3]=R32(c->r[3]+0x00000008u); // 801811D0
  c->r[3]=c->r[3]+0x00000078u; // 801811D4
  c->lr=0x801811DCu; f_803315E0(c); // 801811D8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801811DC
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801811E0
  if (crb(c,2)) { goto L_801811F0; } // 801811E4
  c->r[3]=0u+0x00000000u; // 801811E8
  goto L_801811F4; // 801811EC
L_801811F0:;
  c->r[3]=0u+0x00000001u; // 801811F0
L_801811F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801811F4
  c->lr=c->r[0]; // 801811F8
  c->r[1]=c->r[1]+0x00000010u; // 801811FC
  return; // 80181200
}

// fn_80181204
void f_80181204(Ctx* __restrict c) {
  trace_call(0x80181204u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181204
  c->r[0]=c->lr; // 80181208
  cmps(c,0,(int32_t)c->r[4],0); // 8018120C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80181210
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80181214
  c->r[31]=c->r[3]|c->r[3]; // 80181218
  if (crb(c,2)) { goto L_80181254; } // 8018121C
  cmps(c,0,(int32_t)c->r[4],1); // 80181220
  if (crb(c,2)) { goto L_80181284; } // 80181224
  cmps(c,0,(int32_t)c->r[4],2); // 80181228
  if (crb(c,2)) { goto L_801812B4; } // 8018122C
  cmps(c,0,(int32_t)c->r[4],3); // 80181230
  if (crb(c,2)) { goto L_801812E4; } // 80181234
  cmps(c,0,(int32_t)c->r[4],4); // 80181238
  if (crb(c,2)) { goto L_80181314; } // 8018123C
  cmps(c,0,(int32_t)c->r[4],5); // 80181240
  if (crb(c,2)) { goto L_80181344; } // 80181244
  cmps(c,0,(int32_t)c->r[4],6); // 80181248
  if (crb(c,2)) { goto L_80181374; } // 8018124C
  goto L_801813A0; // 80181250
L_80181254:;
  {uint32_t ea=c->r[2]+0xFFFFBE9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80181254
  c->r[3]=c->r[1]+0x00000050u; // 80181258
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018125C
  {uint32_t ea=c->r[2]+0xFFFFBEA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181260
  c->lr=0x80181268u; f_8005FD70(c); // 80181264
  c->r[4]=c->r[3]|c->r[3]; // 80181268
  c->r[3]=c->r[31]+0x000001B8u; // 8018126C
  c->lr=0x80181274u; f_8005CDC8(c); // 80181270
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181274
  c->r[3]=c->r[31]|c->r[31]; // 80181278
  c->lr=0x80181280u; f_801813B4(c); // 8018127C
  goto L_801813A0; // 80181280
L_80181284:;
  {uint32_t ea=c->r[2]+0xFFFFBEA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181284
  c->r[3]=c->r[1]+0x00000044u; // 80181288
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018128C
  {uint32_t ea=c->r[2]+0xFFFFBEACu; c->f[3]=c->ps1[3]=RF32(ea);} // 80181290
  c->lr=0x80181298u; f_8005FD70(c); // 80181294
  c->r[4]=c->r[3]|c->r[3]; // 80181298
  c->r[3]=c->r[31]+0x000001B8u; // 8018129C
  c->lr=0x801812A4u; f_8005CDC8(c); // 801812A0
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801812A4
  c->r[3]=c->r[31]|c->r[31]; // 801812A8
  c->lr=0x801812B0u; f_801813B4(c); // 801812AC
  goto L_801813A0; // 801812B0
L_801812B4:;
  {uint32_t ea=c->r[2]+0xFFFFBEB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801812B4
  c->r[3]=c->r[1]+0x00000038u; // 801812B8
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801812BC
  {uint32_t ea=c->r[2]+0xFFFFBEB4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801812C0
  c->lr=0x801812C8u; f_8005FD70(c); // 801812C4
  c->r[4]=c->r[3]|c->r[3]; // 801812C8
  c->r[3]=c->r[31]+0x000001B8u; // 801812CC
  c->lr=0x801812D4u; f_8005CDC8(c); // 801812D0
  {uint32_t ea=c->r[2]+0xFFFFBEB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801812D4
  c->r[3]=c->r[31]|c->r[31]; // 801812D8
  c->lr=0x801812E0u; f_801813B4(c); // 801812DC
  goto L_801813A0; // 801812E0
L_801812E4:;
  {uint32_t ea=c->r[2]+0xFFFFBEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801812E4
  c->r[3]=c->r[1]+0x0000002Cu; // 801812E8
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801812EC
  {uint32_t ea=c->r[2]+0xFFFFBEC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801812F0
  c->lr=0x801812F8u; f_8005FD70(c); // 801812F4
  c->r[4]=c->r[3]|c->r[3]; // 801812F8
  c->r[3]=c->r[31]+0x000001B8u; // 801812FC
  c->lr=0x80181304u; f_8005CDC8(c); // 80181300
  {uint32_t ea=c->r[2]+0xFFFFBEC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181304
  c->r[3]=c->r[31]|c->r[31]; // 80181308
  c->lr=0x80181310u; f_801813B4(c); // 8018130C
  goto L_801813A0; // 80181310
L_80181314:;
  {uint32_t ea=c->r[2]+0xFFFFBEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181314
  c->r[3]=c->r[1]+0x00000020u; // 80181318
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018131C
  {uint32_t ea=c->r[2]+0xFFFFBEB4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181320
  c->lr=0x80181328u; f_8005FD70(c); // 80181324
  c->r[4]=c->r[3]|c->r[3]; // 80181328
  c->r[3]=c->r[31]+0x000001B8u; // 8018132C
  c->lr=0x80181334u; f_8005CDC8(c); // 80181330
  {uint32_t ea=c->r[2]+0xFFFFBECCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80181334
  c->r[3]=c->r[31]|c->r[31]; // 80181338
  c->lr=0x80181340u; f_801813B4(c); // 8018133C
  goto L_801813A0; // 80181340
L_80181344:;
  {uint32_t ea=c->r[2]+0xFFFFBED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181344
  c->r[3]=c->r[1]+0x00000014u; // 80181348
  {uint32_t ea=c->r[2]+0xFFFFBEA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018134C
  {uint32_t ea=c->r[2]+0xFFFFBED4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181350
  c->lr=0x80181358u; f_8005FD70(c); // 80181354
  c->r[4]=c->r[3]|c->r[3]; // 80181358
  c->r[3]=c->r[31]+0x000001B8u; // 8018135C
  c->lr=0x80181364u; f_8005CDC8(c); // 80181360
  {uint32_t ea=c->r[2]+0xFFFFBED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181364
  c->r[3]=c->r[31]|c->r[31]; // 80181368
  c->lr=0x80181370u; f_801813B4(c); // 8018136C
  goto L_801813A0; // 80181370
L_80181374:;
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181374
  c->r[3]=c->r[1]+0x00000008u; // 80181378
  c->f[2]=c->f[1]; // 8018137C
  c->f[3]=c->f[1]; // 80181380
  c->lr=0x80181388u; f_8005FD70(c); // 80181384
  c->r[4]=c->r[3]|c->r[3]; // 80181388
  c->r[3]=c->r[31]+0x000001B8u; // 8018138C
  c->lr=0x80181394u; f_8005CDC8(c); // 80181390
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181394
  c->r[3]=c->r[31]|c->r[31]; // 80181398
  c->lr=0x801813A0u; f_801813B4(c); // 8018139C
L_801813A0:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801813A0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801813A4
  c->lr=c->r[0]; // 801813A8
  c->r[1]=c->r[1]+0x00000070u; // 801813AC
  return; // 801813B0
}

// fn_801813B4
void f_801813B4(Ctx* __restrict c) {
  trace_call(0x801813B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801813B4
  c->r[0]=c->lr; // 801813B8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801813BC
  c->r[4]=c->r[1]+0x00000018u; // 801813C0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801813C4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801813C8
  c->f[31]=c->f[1]; // 801813CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801813D0
  c->r[31]=c->r[3]|c->r[3]; // 801813D4
  c->r[3]=c->r[3]+0x000001B8u; // 801813D8
  c->lr=0x801813E0u; f_80382F2C(c); // 801813DC
  {uint32_t ea=c->r[2]+0xFFFFBEDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801813E0
  c->r[3]=c->r[31]+0x000001B8u; // 801813E4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 801813E8
  c->lr=0x801813F0u; f_80382F00(c); // 801813EC
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801813F0
  c->r[3]=c->r[31]+0x000001B8u; // 801813F4
  {uint32_t ea=c->r[2]+0xFFFFBEE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801813F8
  c->f[3]=c->f[1]; // 801813FC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 80181400
  c->lr=0x80181408u; f_804E18A0(c); // 80181404
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181408
  c->r[3]=c->r[1]+0x00000008u; // 8018140C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181410
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181414
  c->lr=0x8018141Cu; f_8005FD70(c); // 80181418
  c->r[3]=c->r[31]+0x000001B8u; // 8018141C
  c->r[4]=c->r[1]+0x00000008u; // 80181420
  c->lr=0x80181428u; f_8005CDC8(c); // 80181424
  c->r[0]=R32(c->r[1]+0x00000064u); // 80181428
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8018142C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80181430
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80181434
  c->lr=c->r[0]; // 80181438
  c->r[1]=c->r[1]+0x00000060u; // 8018143C
  return; // 80181440
}

// fn_80181444
void f_80181444(Ctx* __restrict c) {
  trace_call(0x80181444u);
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181444
  c->r[4]=0u+0x00000001u; // 80181448
  c->r[0]=0u+0x00000000u; // 8018144C
  {uint32_t ea=c->r[3]+0x000005DCu; WF32(ea,c->f[0]);} // 80181450
  {uint32_t ea=c->r[3]+0x000005E0u; WF32(ea,c->f[1]);} // 80181454
  W8(c->r[3]+0x000005E4u,c->r[4]); // 80181458
  W8(c->r[3]+0x000005E5u,c->r[0]); // 8018145C
  return; // 80181460
}

// fn_80181464
void f_80181464(Ctx* __restrict c) {
  trace_call(0x80181464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181464
  c->r[0]=c->lr; // 80181468
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018146C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80181470
  W32(c->r[1]+0x00000018u,c->r[30]); // 80181474
  c->r[30]=c->r[3]|c->r[3]; // 80181478
  c->r[0]=R8(c->r[3]+0x000005E4u); // 8018147C
  cmps(c,0,(int32_t)c->r[0],0); // 80181480
  if (crb(c,2)) { goto L_801814C4; } // 80181484
  c->r[31]=0u+0x00000000u; // 80181488
  W8(c->r[1]+0x00000008u,c->r[31]); // 8018148C
  c->r[3]=c->r[1]+0x00000008u; // 80181490
  c->lr=0x80181498u; f_8004714C(c); // 80181494
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181498
  {uint32_t ea=c->r[30]+0x000005DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018149C
  {uint32_t ea=c->r[30]+0x000005E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801814A0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801814A4
  {uint32_t ea=c->r[30]+0x000005DCu; WF32(ea,c->f[1]);} // 801814A8
  fcmp(c,0,c->f[0],c->f[1]); // 801814AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801814B0
  if (!crb(c,2)) { goto L_801814C4; } // 801814B4
  c->r[0]=0u+0x00000001u; // 801814B8
  W8(c->r[30]+0x000005E5u,c->r[0]); // 801814BC
  W8(c->r[30]+0x000005E4u,c->r[31]); // 801814C0
L_801814C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801814C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801814C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801814CC
  c->lr=c->r[0]; // 801814D0
  c->r[1]=c->r[1]+0x00000020u; // 801814D4
  return; // 801814D8
}

// fn_801814DC
void f_801814DC(Ctx* __restrict c) {
  trace_call(0x801814DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801814DC
  c->r[0]=c->lr; // 801814E0
  c->r[5]=0u+0x80690000u; // 801814E4
  {uint32_t ea=c->r[5]+0x000018C0u; c->r[4]=R32(ea); c->r[5]=ea;} // 801814E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801814EC
  c->r[3]=R32(c->r[5]+0x00000004u); // 801814F0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801814F4
  W32(c->r[1]+0x00000008u,c->r[4]); // 801814F8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801814FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80181500
  c->lr=0x80181508u; f_803B220C(c); // 80181504
  c->r[5]=0u+0x00000003u; // 80181508
  c->r[4]=c->r[1]+0x00000008u; // 8018150C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 80181510
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80181514
  c->r[0]=c->r[3]-c->r[0]; // 80181518
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018151C
  c->r[3]=R32(c->r[4]+c->r[0]); // 80181520
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181524
  c->lr=c->r[0]; // 80181528
  c->r[1]=c->r[1]+0x00000020u; // 8018152C
  return; // 80181530
}

// fn_80181534
void f_80181534(Ctx* __restrict c) {
  trace_call(0x80181534u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181534
  c->r[0]=c->lr; // 80181538
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8018153C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80181540
  c->r[31]=c->r[3]|c->r[3]; // 80181544
  c->r[3]=c->r[3]+0x000005CCu; // 80181548
  c->lr=0x80181550u; f_800A7AE8(c); // 8018154C
  {uint32_t ea=c->r[2]+0xFFFFBEE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181550
  c->r[3]=c->r[31]+0x000005CCu; // 80181554
  {uint32_t ea=c->r[2]+0xFFFFBEE8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181558
  c->f[2]=c->f[1]; // 8018155C
  c->lr=0x80181564u; f_800A7B08(c); // 80181560
  c->r[3]=c->r[31]+0x000001B8u; // 80181564
  c->r[4]=c->r[1]+0x00000068u; // 80181568
  c->lr=0x80181570u; f_80382F2C(c); // 8018156C
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181570
  c->r[3]=c->r[1]+0x00000038u; // 80181574
  {uint32_t ea=c->r[2]+0xFFFFBEECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80181578
  c->f[3]=c->f[1]; // 8018157C
  c->lr=0x80181584u; f_804E18A0(c); // 80181580
  c->r[3]=c->r[1]+0x00000068u; // 80181584
  c->r[4]=c->r[1]+0x00000038u; // 80181588
  c->r[5]=c->r[3]|c->r[3]; // 8018158C
  c->lr=0x80181594u; f_8030DA28(c); // 80181590
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181594
  c->r[3]=c->r[1]+0x0000002Cu; // 80181598
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018159C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=c->ps1[3]=RF32(ea);} // 801815A0
  c->lr=0x801815A8u; f_8005FD70(c); // 801815A4
  c->r[3]=c->r[1]+0x0000002Cu; // 801815A8
  c->r[5]=0u+0x806A0000u; // 801815AC
  c->r[4]=c->r[3]|c->r[3]; // 801815B0
  c->r[5]=c->r[5]+0x00000AA8u; // 801815B4
  c->lr=0x801815BCu; f_8030E0BC(c); // 801815B8
  {uint32_t ea=c->r[2]+0xFFFFBE8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801815BC
  c->r[3]=c->r[1]+0x0000002Cu; // 801815C0
  c->r[4]=c->r[1]+0x00000008u; // 801815C4
  {double t0=S(fres(c->f[0])), t1=S(fres(c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801815C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801815CC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801815D0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801815D4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 801815D8
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801815DC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801815E0
  c->r[3]=c->r[1]+0x00000020u; // 801815E4
  c->lr=0x801815ECu; f_8005CD7C(c); // 801815E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801815EC
  c->r[3]=c->r[1]+0x00000014u; // 801815F0
  {uint32_t ea=c->r[2]+0xFFFFBEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801815F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801815F8
  c->lr=0x80181600u; f_8005FD70(c); // 801815FC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181600
  {uint32_t ea=c->r[31]+0x000005C0u; WF32(ea,c->f[0]);} // 80181604
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181608
  {uint32_t ea=c->r[31]+0x000005C4u; WF32(ea,c->f[0]);} // 8018160C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80181610
  {uint32_t ea=c->r[31]+0x000005C8u; WF32(ea,c->f[0]);} // 80181614
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80181618
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8018161C
  c->lr=c->r[0]; // 80181620
  c->r[1]=c->r[1]+0x000000A0u; // 80181624
  return; // 80181628
}

// fn_8018162C
void f_8018162C(Ctx* __restrict c) {
  trace_call(0x8018162Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018162C
  c->r[0]=c->lr; // 80181630
  W32(c->r[1]+0x00000094u,c->r[0]); // 80181634
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80181638
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8018163C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80181640
  W32(c->r[1]+0x00000078u,c->r[30]); // 80181644
  c->r[30]=c->r[3]|c->r[3]; // 80181648
  c->r[3]=c->r[3]+0x000005CCu; // 8018164C
  c->lr=0x80181654u; f_800A7B64(c); // 80181650
  c->r[4]=c->r[30]|c->r[30]; // 80181654
  c->r[3]=c->r[1]+0x00000030u; // 80181658
  c->lr=0x80181660u; f_80061A48(c); // 8018165C
  c->r[0]=0u+0x00000000u; // 80181660
  W8(c->r[1]+0x00000008u,c->r[0]); // 80181664
  c->r[3]=c->r[1]+0x00000008u; // 80181668
  c->lr=0x80181670u; f_8004714C(c); // 8018166C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 80181670
  c->r[3]=c->r[30]+0x000005CCu; // 80181674
  c->lr=0x8018167Cu; f_800A7BEC(c); // 80181678
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 8018167C
  c->r[4]=c->r[1]+0x0000000Cu; // 80181680
  {uint32_t ea=c->r[30]+0x000005C0u; psq_load(c,0,ea,0,0);} // 80181684
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80181688
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8018168C
  {uint32_t ea=c->r[30]+0x000005C8u; psq_load(c,0,ea,1,0);} // 80181690
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80181694
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80181698
  c->r[3]=c->r[1]+0x00000024u; // 8018169C
  c->lr=0x801816A4u; f_8005CD7C(c); // 801816A0
  c->r[3]=c->r[1]+0x00000024u; // 801816A4
  c->r[4]=c->r[1]+0x00000030u; // 801816A8
  c->r[31]=c->r[1]+0x00000018u; // 801816AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801816B0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801816B4
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801816B8
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 801816BC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 801816C0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 801816C4
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801816C8
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 801816CC
  c->r[3]=c->r[30]+0x000001B8u; // 801816D0
  c->r[4]=c->r[1]+0x00000040u; // 801816D4
  c->lr=0x801816DCu; f_80382F2C(c); // 801816D8
  c->r[4]=c->r[31]|c->r[31]; // 801816DC
  c->r[3]=c->r[1]+0x00000040u; // 801816E0
  c->lr=0x801816E8u; f_8005CDC8(c); // 801816E4
  c->r[3]=c->r[30]+0x000000FCu; // 801816E8
  c->r[4]=c->r[1]+0x00000040u; // 801816EC
  c->lr=0x801816F4u; f_80078164(c); // 801816F0
  c->r[0]=R32(c->r[1]+0x00000094u); // 801816F4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801816F8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801816FC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80181700
  c->r[30]=R32(c->r[1]+0x00000078u); // 80181704
  c->lr=c->r[0]; // 80181708
  c->r[1]=c->r[1]+0x00000090u; // 8018170C
  return; // 80181710
}

// fn_80181714
void f_80181714(Ctx* __restrict c) {
  trace_call(0x80181714u);
  c->r[6]=R32(c->r[3]+0x0000044Cu); // 80181714
  c->r[4]=0u+0x00000016u; // 80181718
  {uint32_t ea=c->r[2]+0xFFFFBE88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018171C
  c->r[5]=0u+0x00000000u; // 80181720
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80181724
  f_800D5F20(c); return; // 80181728
}

// fn_8018172C
void f_8018172C(Ctx* __restrict c) {
  trace_call(0x8018172Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018172C
  c->r[0]=c->lr; // 80181730
  {uint32_t ea=c->r[2]+0xFFFFBE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181734
  c->r[4]=0u+0x00000016u; // 80181738
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018173C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181740
  c->r[31]=c->r[3]|c->r[3]; // 80181744
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80181748
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 8018174C
  c->r[5]=0u+0x00000001u; // 80181750
  c->lr=0x80181758u; f_800D5F20(c); // 80181754
  c->r[3]=c->r[31]+0x000000FCu; // 80181758
  c->r[4]=0u+0x00000000u; // 8018175C
  c->lr=0x80181764u; f_802E6678(c); // 80181760
  c->r[3]=c->r[31]|c->r[31]; // 80181764
  c->r[4]=0u+0x00000000u; // 80181768
  c->lr=0x80181770u; f_8005E814(c); // 8018176C
  c->r[3]=c->r[31]|c->r[31]; // 80181770
  c->r[4]=0u+0x00000006u; // 80181774
  c->lr=0x8018177Cu; f_80181204(c); // 80181778
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018177C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80181780
  c->lr=c->r[0]; // 80181784
  c->r[1]=c->r[1]+0x00000010u; // 80181788
  return; // 8018178C
}

// fn_80181790
void f_80181790(Ctx* __restrict c) {
  trace_call(0x80181790u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181790
  c->r[0]=c->lr; // 80181794
  W32(c->r[1]+0x00000044u,c->r[0]); // 80181798
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018179C
  c->r[31]=c->r[1]|c->r[1]; // 801817A0
  c->r[27]=c->r[3]|c->r[3]; // 801817A4
  c->r[28]=c->r[4]|c->r[4]; // 801817A8
  c->lr=0x801817B0u; f_80180774(c); // 801817AC
  c->r[4]=c->r[3]|c->r[3]; // 801817B0
  c->r[3]=c->r[27]|c->r[27]; // 801817B4
  c->lr=0x801817BCu; f_80062F4C(c); // 801817B8
  c->r[0]=R8(c->r[27]+0x00000010u); // 801817BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801817C0
  c->r[3]=c->r[27]+c->r[0]; // 801817C4
  c->r[29]=R32(c->r[3]+0x00000014u); // 801817C8
  cmps(c,0,(int32_t)c->r[29],0); // 801817CC
  if (crb(c,2)) { goto L_80181800; } // 801817D0
  c->r[30]=0u+0x00000000u; // 801817D4
  W32(c->r[31]+0x00000024u,c->r[1]); // 801817D8
  W8(c->r[31]+0x00000008u,c->r[30]); // 801817DC
  c->lr=0x801817E4u; f_80180774(c); // 801817E0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801817E4
  c->r[3]=c->r[13]+0xFFFF8B4Cu; // 801817E8
  c->r[0]=0u+0xFFFFFFFFu; // 801817EC
  W32(c->r[29]+0x00000004u,c->r[3]); // 801817F0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801817F4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801817F8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801817FC
L_80181800:;
  W32(c->r[27]+0x00000008u,c->r[29]); // 80181800
  c->r[0]=0u+0x00000000u; // 80181804
  c->r[3]=c->r[27]|c->r[27]; // 80181808
  c->r[4]=c->r[29]|c->r[29]; // 8018180C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80181810
  c->r[0]=R32(c->r[27]+0x00000004u); // 80181814
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80181818
  c->lr=0x80181820u; f_8006306C(c); // 8018181C
  W32(c->r[29]+0x00000010u,c->r[28]); // 80181820
  c->r[10]=c->r[31]|c->r[31]; // 80181824
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80181828
  c->r[10]=R32(c->r[1]+0x00000000u); // 8018182C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80181830
  c->r[1]=c->r[10]|c->r[10]; // 80181834
  c->lr=c->r[0]; // 80181838
  return; // 8018183C
}

// fn_80181840
void f_80181840(Ctx* __restrict c) {
  trace_call(0x80181840u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181840
  c->r[0]=c->lr; // 80181844
  W32(c->r[1]+0x00000044u,c->r[0]); // 80181848
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018184C
  c->r[31]=c->r[1]|c->r[1]; // 80181850
  c->r[27]=c->r[3]|c->r[3]; // 80181854
  c->r[28]=c->r[4]|c->r[4]; // 80181858
  c->lr=0x80181860u; f_80180740(c); // 8018185C
  c->r[4]=c->r[3]|c->r[3]; // 80181860
  c->r[3]=c->r[27]|c->r[27]; // 80181864
  c->lr=0x8018186Cu; f_80062F4C(c); // 80181868
  c->r[0]=R8(c->r[27]+0x00000010u); // 8018186C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181870
  c->r[3]=c->r[27]+c->r[0]; // 80181874
  c->r[29]=R32(c->r[3]+0x00000014u); // 80181878
  cmps(c,0,(int32_t)c->r[29],0); // 8018187C
  if (crb(c,2)) { goto L_801818B0; } // 80181880
  c->r[30]=0u+0x00000000u; // 80181884
  W32(c->r[31]+0x00000024u,c->r[1]); // 80181888
  W8(c->r[31]+0x00000008u,c->r[30]); // 8018188C
  c->lr=0x80181894u; f_80180740(c); // 80181890
  W32(c->r[29]+0x00000000u,c->r[3]); // 80181894
  c->r[3]=c->r[13]+0xFFFF8B48u; // 80181898
  c->r[0]=0u+0xFFFFFFFFu; // 8018189C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801818A0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801818A4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801818A8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801818AC
L_801818B0:;
  W32(c->r[27]+0x00000008u,c->r[29]); // 801818B0
  c->r[0]=0u+0x00000000u; // 801818B4
  c->r[3]=c->r[27]|c->r[27]; // 801818B8
  c->r[4]=c->r[29]|c->r[29]; // 801818BC
  W32(c->r[29]+0x00000008u,c->r[0]); // 801818C0
  c->r[0]=R32(c->r[27]+0x00000004u); // 801818C4
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 801818C8
  c->lr=0x801818D0u; f_8006306C(c); // 801818CC
  W32(c->r[29]+0x00000010u,c->r[28]); // 801818D0
  c->r[10]=c->r[31]|c->r[31]; // 801818D4
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801818D8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801818DC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801818E0
  c->r[1]=c->r[10]|c->r[10]; // 801818E4
  c->lr=c->r[0]; // 801818E8
  return; // 801818EC
}

// fn_801818F0
void f_801818F0(Ctx* __restrict c) {
  trace_call(0x801818F0u);
  return; // 801818F0
}

// fn_801818F4
void f_801818F4(Ctx* __restrict c) {
  trace_call(0x801818F4u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 801818F4
  f_80180800(c); return; // 801818F8
}

// fn_801818FC
void f_801818FC(Ctx* __restrict c) {
  trace_call(0x801818FCu);
  c->r[0]=0u+0x00000003u; // 801818FC
  c->r[4]=0u+0x00000000u; // 80181900
  c->r[5]=0u+0xFFFFFFFFu; // 80181904
  c->ctr=c->r[0]; // 80181908
L_8018190C:;
  W32(c->r[3]+c->r[4],c->r[5]); // 8018190C
  c->r[4]=c->r[4]+0x00000004u; // 80181910
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018190C; } // 80181914
  c->r[0]=0u+0x00000005u; // 80181918
  c->r[4]=0u+0x00000000u; // 8018191C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80181920
  c->r[4]=0u+0x00000000u; // 80181924
  c->r[6]=0u+0xFFFFFFFFu; // 80181928
  c->ctr=c->r[0]; // 8018192C
L_80181930:;
  c->r[5]=c->r[3]+c->r[4]; // 80181930
  c->r[4]=c->r[4]+0x00000004u; // 80181934
  W32(c->r[5]+0x00000010u,c->r[6]); // 80181938
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181930; } // 8018193C
  c->r[0]=0u+0x00000000u; // 80181940
  W32(c->r[3]+0x00000024u,c->r[0]); // 80181944
  return; // 80181948
}

// fn_8018194C
void f_8018194C(Ctx* __restrict c) {
  trace_call(0x8018194Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018194C
  c->r[0]=c->lr; // 80181950
  c->r[6]=0u+0x80690000u; // 80181954
  {uint32_t ea=c->r[6]+0x000018E0u; c->r[5]=R32(ea); c->r[6]=ea;} // 80181958
  W32(c->r[1]+0x00000044u,c->r[0]); // 8018195C
  c->r[4]=R32(c->r[6]+0x00000004u); // 80181960
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80181964
  c->r[30]=0u+0x00000000u; // 80181968
  c->r[31]=c->r[3]|c->r[3]; // 8018196C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80181970
  W32(c->r[1]+0x00000020u,c->r[4]); // 80181974
  c->r[0]=R32(c->r[3]+0x00000000u); // 80181978
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8018197C
  cmps(c,0,(int32_t)c->r[0],-1); // 80181980
  c->r[0]=R32(c->r[6]+0x00000008u); // 80181984
  W32(c->r[1]+0x00000024u,c->r[0]); // 80181988
  if (!crb(c,2)) { goto L_80181A14; } // 8018198C
  c->lr=0x80181994u; f_803B220C(c); // 80181990
  c->r[7]=0u+0x00000003u; // 80181994
  c->r[6]=c->r[1]+0x0000001Cu; // 80181998
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[7]); // 8018199C
  c->r[5]=c->r[1]+0x00000008u; // 801819A0
  c->r[29]=0u+0x00000000u; // 801819A4
  c->r[4]=0u+0x00000000u; // 801819A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 801819AC
  c->r[0]=c->r[3]-c->r[0]; // 801819B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801819B4
  c->r[0]=R32(c->r[6]+c->r[0]); // 801819B8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801819BC
  c->ctr=c->r[7]; // 801819C0
L_801819C4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801819C4
  c->r[0]=R32(c->r[6]+c->r[30]); // 801819C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801819CC
  if (crb(c,2)) { goto L_801819E0; } // 801819D0
  W32(c->r[5]+c->r[4],c->r[0]); // 801819D4
  c->r[29]=c->r[29]+0x00000001u; // 801819D8
  c->r[4]=c->r[4]+0x00000004u; // 801819DC
L_801819E0:;
  cmpu(c,0,c->r[29],0x00000002u); // 801819E0
  if (!crb(c,0)) { goto L_801819F0; } // 801819E4
  c->r[30]=c->r[30]+0x00000004u; // 801819E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801819C4; } // 801819EC
L_801819F0:;
  c->lr=0x801819F4u; f_803B220C(c); // 801819F0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 801819F4
  c->r[4]=c->r[1]+0x00000008u; // 801819F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 801819FC
  c->r[0]=c->r[3]-c->r[0]; // 80181A00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181A04
  c->r[0]=R32(c->r[4]+c->r[0]); // 80181A08
  W32(c->r[31]+0x00000004u,c->r[0]); // 80181A0C
  goto L_80181B0C; // 80181A10
L_80181A14:;
  c->r[0]=0u+0x00000003u; // 80181A14
  c->r[5]=c->r[1]+0x00000010u; // 80181A18
  c->r[4]=0u+0x00000000u; // 80181A1C
  c->ctr=c->r[0]; // 80181A20
L_80181A24:;
  c->r[0]=R32(c->r[3]+c->r[4]); // 80181A24
  W32(c->r[5]+c->r[4],c->r[0]); // 80181A28
  c->r[4]=c->r[4]+0x00000004u; // 80181A2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181A24; } // 80181A30
  c->r[0]=0u+0x00000003u; // 80181A34
  c->r[5]=c->r[1]+0x00000008u; // 80181A38
  c->r[7]=c->r[1]+0x0000001Cu; // 80181A3C
  c->r[6]=R32(c->r[1]+0x00000010u); // 80181A40
  c->r[4]=0u+0x00000000u; // 80181A44
  c->r[30]=0u+0x00000000u; // 80181A48
  c->r[3]=0u+0x00000000u; // 80181A4C
  c->ctr=c->r[0]; // 80181A50
L_80181A54:;
  c->r[0]=R32(c->r[7]+c->r[4]); // 80181A54
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80181A58
  if (crb(c,2)) { goto L_80181A6C; } // 80181A5C
  W32(c->r[5]+c->r[3],c->r[0]); // 80181A60
  c->r[30]=c->r[30]+0x00000001u; // 80181A64
  c->r[3]=c->r[3]+0x00000004u; // 80181A68
L_80181A6C:;
  cmpu(c,0,c->r[30],0x00000002u); // 80181A6C
  if (!crb(c,0)) { goto L_80181A7C; } // 80181A70
  c->r[4]=c->r[4]+0x00000004u; // 80181A74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181A54; } // 80181A78
L_80181A7C:;
  c->lr=0x80181A80u; f_803B220C(c); // 80181A7C
  c->r[4]=divw((int32_t)c->r[3],(int32_t)c->r[30]); // 80181A80
  c->r[6]=c->r[1]+0x00000008u; // 80181A84
  c->r[0]=0u+0x00000003u; // 80181A88
  c->r[8]=R32(c->r[1]+0x00000014u); // 80181A8C
  c->r[9]=c->r[1]+0x0000001Cu; // 80181A90
  c->r[5]=0u+0x00000000u; // 80181A94
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[30]); // 80181A98
  c->r[30]=0u+0x00000000u; // 80181A9C
  c->r[4]=0u+0x00000000u; // 80181AA0
  c->r[3]=c->r[3]-c->r[7]; // 80181AA4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80181AA8
  c->r[3]=R32(c->r[6]+c->r[3]); // 80181AAC
  W32(c->r[31]+0x00000000u,c->r[3]); // 80181AB0
  c->ctr=c->r[0]; // 80181AB4
L_80181AB8:;
  c->r[3]=R32(c->r[9]+c->r[5]); // 80181AB8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 80181ABC
  if (crb(c,2)) { goto L_80181ADC; } // 80181AC0
  c->r[0]=R32(c->r[31]+0x00000000u); // 80181AC4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80181AC8
  if (crb(c,2)) { goto L_80181ADC; } // 80181ACC
  W32(c->r[6]+c->r[4],c->r[3]); // 80181AD0
  c->r[30]=c->r[30]+0x00000001u; // 80181AD4
  c->r[4]=c->r[4]+0x00000004u; // 80181AD8
L_80181ADC:;
  cmpu(c,0,c->r[30],0x00000002u); // 80181ADC
  if (!crb(c,0)) { goto L_80181AEC; } // 80181AE0
  c->r[5]=c->r[5]+0x00000004u; // 80181AE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181AB8; } // 80181AE8
L_80181AEC:;
  c->lr=0x80181AF0u; f_803B220C(c); // 80181AEC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[30]); // 80181AF0
  c->r[4]=c->r[1]+0x00000008u; // 80181AF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 80181AF8
  c->r[0]=c->r[3]-c->r[0]; // 80181AFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181B00
  c->r[0]=R32(c->r[4]+c->r[0]); // 80181B04
  W32(c->r[31]+0x00000004u,c->r[0]); // 80181B08
L_80181B0C:;
  c->r[0]=0u+0x00000003u; // 80181B0C
  c->r[4]=c->r[1]+0x0000001Cu; // 80181B10
  c->r[3]=0u+0x00000000u; // 80181B14
  c->ctr=c->r[0]; // 80181B18
L_80181B1C:;
  c->r[5]=R32(c->r[4]+c->r[3]); // 80181B1C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80181B20
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181B24
  if (crb(c,2)) { goto L_80181B40; } // 80181B28
  c->r[0]=R32(c->r[31]+0x00000004u); // 80181B2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181B30
  if (crb(c,2)) { goto L_80181B40; } // 80181B34
  W32(c->r[31]+0x00000008u,c->r[5]); // 80181B38
  goto L_80181B48; // 80181B3C
L_80181B40:;
  c->r[3]=c->r[3]+0x00000004u; // 80181B40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181B1C; } // 80181B44
L_80181B48:;
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80181B48
  c->r[0]=R32(c->r[1]+0x00000044u); // 80181B4C
  c->lr=c->r[0]; // 80181B50
  c->r[1]=c->r[1]+0x00000040u; // 80181B54
  return; // 80181B58
}

// fn_80181B5C
void f_80181B5C(Ctx* __restrict c) {
  trace_call(0x80181B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181B5C
  c->r[0]=c->lr; // 80181B60
  c->r[5]=0u+0x80690000u; // 80181B64
  W32(c->r[1]+0x00000054u,c->r[0]); // 80181B68
  c->r[5]=c->r[5]+0x000018ECu; // 80181B6C
  c->r[0]=0u+0x00000002u; // 80181B70
  c->r[6]=c->r[1]+0x00000028u; // 80181B74
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80181B78
  c->r[30]=c->r[3]|c->r[3]; // 80181B7C
  c->r[31]=c->r[4]|c->r[4]; // 80181B80
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80181B84
  c->ctr=c->r[0]; // 80181B88
L_80181B8C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80181B8C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80181B90
  W32(c->r[6]+0x00000004u,c->r[4]); // 80181B94
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80181B98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181B8C; } // 80181B9C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80181BA0
  c->r[29]=0u+0x00000000u; // 80181BA4
  W32(c->r[6]+0x00000004u,c->r[0]); // 80181BA8
  c->r[0]=R32(c->r[3]+0x00000010u); // 80181BAC
  W32(c->r[3]+0x00000024u,c->r[29]); // 80181BB0
  cmps(c,0,(int32_t)c->r[0],-1); // 80181BB4
  if (!crb(c,2)) { goto L_80181D50; } // 80181BB8
  c->lr=0x80181BC0u; f_803B220C(c); // 80181BBC
  c->r[4]=0u+0x00000005u; // 80181BC0
  c->r[6]=c->r[1]+0x0000002Cu; // 80181BC4
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80181BC8
  cmps(c,0,(int32_t)c->r[31],1); // 80181BCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80181BD0
  c->r[0]=c->r[3]-c->r[0]; // 80181BD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181BD8
  c->r[0]=R32(c->r[6]+c->r[0]); // 80181BDC
  W32(c->r[30]+0x00000010u,c->r[0]); // 80181BE0
  if (!crb(c,1)) { goto L_80181FC4; } // 80181BE4
  c->r[0]=0u+0x00000005u; // 80181BE8
  c->r[4]=c->r[1]+0x00000008u; // 80181BEC
  c->r[28]=0u+0x00000000u; // 80181BF0
  c->r[3]=0u+0x00000000u; // 80181BF4
  c->ctr=c->r[0]; // 80181BF8
L_80181BFC:;
  c->r[5]=R32(c->r[30]+0x00000010u); // 80181BFC
  c->r[0]=R32(c->r[6]+c->r[29]); // 80181C00
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80181C04
  if (crb(c,2)) { goto L_80181C18; } // 80181C08
  W32(c->r[4]+c->r[3],c->r[0]); // 80181C0C
  c->r[28]=c->r[28]+0x00000001u; // 80181C10
  c->r[3]=c->r[3]+0x00000004u; // 80181C14
L_80181C18:;
  cmpu(c,0,c->r[28],0x00000004u); // 80181C18
  if (!crb(c,0)) { goto L_80181C28; } // 80181C1C
  c->r[29]=c->r[29]+0x00000004u; // 80181C20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181BFC; } // 80181C24
L_80181C28:;
  c->lr=0x80181C2Cu; f_803B220C(c); // 80181C28
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[28]); // 80181C2C
  c->r[5]=c->r[1]+0x00000008u; // 80181C30
  cmps(c,0,(int32_t)c->r[31],2); // 80181C34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 80181C38
  c->r[0]=c->r[3]-c->r[0]; // 80181C3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181C40
  c->r[0]=R32(c->r[5]+c->r[0]); // 80181C44
  W32(c->r[30]+0x00000014u,c->r[0]); // 80181C48
  if (!crb(c,1)) { goto L_80181FC4; } // 80181C4C
  c->r[0]=0u+0x00000005u; // 80181C50
  c->r[6]=c->r[1]+0x0000002Cu; // 80181C54
  c->r[4]=0u+0x00000000u; // 80181C58
  c->r[29]=0u+0x00000000u; // 80181C5C
  c->r[3]=0u+0x00000000u; // 80181C60
  c->ctr=c->r[0]; // 80181C64
L_80181C68:;
  c->r[7]=R32(c->r[6]+c->r[4]); // 80181C68
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181C6C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80181C70
  if (crb(c,2)) { goto L_80181C90; } // 80181C74
  c->r[0]=R32(c->r[30]+0x00000014u); // 80181C78
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80181C7C
  if (crb(c,2)) { goto L_80181C90; } // 80181C80
  W32(c->r[5]+c->r[3],c->r[7]); // 80181C84
  c->r[29]=c->r[29]+0x00000001u; // 80181C88
  c->r[3]=c->r[3]+0x00000004u; // 80181C8C
L_80181C90:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181C90
  if (!crb(c,0)) { goto L_80181CA0; } // 80181C94
  c->r[4]=c->r[4]+0x00000004u; // 80181C98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181C68; } // 80181C9C
L_80181CA0:;
  c->lr=0x80181CA4u; f_803B220C(c); // 80181CA0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181CA4
  c->r[5]=c->r[1]+0x00000008u; // 80181CA8
  cmps(c,0,(int32_t)c->r[31],3); // 80181CAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181CB0
  c->r[0]=c->r[3]-c->r[0]; // 80181CB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181CB8
  c->r[0]=R32(c->r[5]+c->r[0]); // 80181CBC
  W32(c->r[30]+0x00000018u,c->r[0]); // 80181CC0
  if (!crb(c,1)) { goto L_80181FC4; } // 80181CC4
  c->r[0]=0u+0x00000005u; // 80181CC8
  c->r[6]=c->r[1]+0x0000002Cu; // 80181CCC
  c->r[4]=0u+0x00000000u; // 80181CD0
  c->r[29]=0u+0x00000000u; // 80181CD4
  c->r[3]=0u+0x00000000u; // 80181CD8
  c->ctr=c->r[0]; // 80181CDC
L_80181CE0:;
  c->r[7]=R32(c->r[6]+c->r[4]); // 80181CE0
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181CE4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80181CE8
  if (crb(c,2)) { goto L_80181D14; } // 80181CEC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80181CF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80181CF4
  if (crb(c,2)) { goto L_80181D14; } // 80181CF8
  c->r[0]=R32(c->r[30]+0x00000018u); // 80181CFC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80181D00
  if (crb(c,2)) { goto L_80181D14; } // 80181D04
  W32(c->r[5]+c->r[3],c->r[7]); // 80181D08
  c->r[29]=c->r[29]+0x00000001u; // 80181D0C
  c->r[3]=c->r[3]+0x00000004u; // 80181D10
L_80181D14:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181D14
  if (!crb(c,0)) { goto L_80181D24; } // 80181D18
  c->r[4]=c->r[4]+0x00000004u; // 80181D1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181CE0; } // 80181D20
L_80181D24:;
  c->lr=0x80181D28u; f_803B220C(c); // 80181D24
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181D28
  c->r[4]=c->r[1]+0x00000008u; // 80181D2C
  cmps(c,0,(int32_t)c->r[31],4); // 80181D30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181D34
  c->r[0]=c->r[3]-c->r[0]; // 80181D38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181D3C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80181D40
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80181D44
  if (crb(c,1)) { goto L_80181F70; } // 80181D48
  goto L_80181FC4; // 80181D4C
L_80181D50:;
  c->r[0]=0u+0x00000005u; // 80181D50
  c->r[5]=c->r[1]+0x00000018u; // 80181D54
  c->r[4]=0u+0x00000000u; // 80181D58
  c->ctr=c->r[0]; // 80181D5C
L_80181D60:;
  c->r[6]=c->r[3]+c->r[4]; // 80181D60
  c->r[0]=R32(c->r[6]+0x00000010u); // 80181D64
  W32(c->r[5]+c->r[4],c->r[0]); // 80181D68
  c->r[4]=c->r[4]+0x00000004u; // 80181D6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181D60; } // 80181D70
  c->r[0]=0u+0x00000005u; // 80181D74
  c->r[5]=c->r[1]+0x00000008u; // 80181D78
  c->r[7]=c->r[1]+0x0000002Cu; // 80181D7C
  c->r[6]=R32(c->r[1]+0x00000018u); // 80181D80
  c->r[4]=0u+0x00000000u; // 80181D84
  c->r[29]=0u+0x00000000u; // 80181D88
  c->r[3]=0u+0x00000000u; // 80181D8C
  c->ctr=c->r[0]; // 80181D90
L_80181D94:;
  c->r[0]=R32(c->r[7]+c->r[4]); // 80181D94
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80181D98
  if (crb(c,2)) { goto L_80181DAC; } // 80181D9C
  W32(c->r[5]+c->r[3],c->r[0]); // 80181DA0
  c->r[29]=c->r[29]+0x00000001u; // 80181DA4
  c->r[3]=c->r[3]+0x00000004u; // 80181DA8
L_80181DAC:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181DAC
  if (!crb(c,0)) { goto L_80181DBC; } // 80181DB0
  c->r[4]=c->r[4]+0x00000004u; // 80181DB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181D94; } // 80181DB8
L_80181DBC:;
  c->lr=0x80181DC0u; f_803B220C(c); // 80181DBC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181DC0
  c->r[5]=c->r[1]+0x00000008u; // 80181DC4
  cmps(c,0,(int32_t)c->r[31],1); // 80181DC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181DCC
  c->r[0]=c->r[3]-c->r[0]; // 80181DD0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181DD4
  c->r[0]=R32(c->r[5]+c->r[0]); // 80181DD8
  W32(c->r[30]+0x00000010u,c->r[0]); // 80181DDC
  if (!crb(c,1)) { goto L_80181FC4; } // 80181DE0
  c->r[0]=0u+0x00000005u; // 80181DE4
  c->r[7]=c->r[1]+0x0000002Cu; // 80181DE8
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 80181DEC
  c->r[4]=0u+0x00000000u; // 80181DF0
  c->r[29]=0u+0x00000000u; // 80181DF4
  c->r[3]=0u+0x00000000u; // 80181DF8
  c->ctr=c->r[0]; // 80181DFC
L_80181E00:;
  c->r[8]=R32(c->r[7]+c->r[4]); // 80181E00
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181E04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181E08
  if (crb(c,2)) { goto L_80181E24; } // 80181E0C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[8]); // 80181E10
  if (crb(c,2)) { goto L_80181E24; } // 80181E14
  W32(c->r[5]+c->r[3],c->r[8]); // 80181E18
  c->r[29]=c->r[29]+0x00000001u; // 80181E1C
  c->r[3]=c->r[3]+0x00000004u; // 80181E20
L_80181E24:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181E24
  if (!crb(c,0)) { goto L_80181E34; } // 80181E28
  c->r[4]=c->r[4]+0x00000004u; // 80181E2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181E00; } // 80181E30
L_80181E34:;
  c->lr=0x80181E38u; f_803B220C(c); // 80181E34
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181E38
  c->r[5]=c->r[1]+0x00000008u; // 80181E3C
  cmps(c,0,(int32_t)c->r[31],2); // 80181E40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181E44
  c->r[0]=c->r[3]-c->r[0]; // 80181E48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181E4C
  c->r[0]=R32(c->r[5]+c->r[0]); // 80181E50
  W32(c->r[30]+0x00000014u,c->r[0]); // 80181E54
  if (!crb(c,1)) { goto L_80181FC4; } // 80181E58
  c->r[0]=0u+0x00000005u; // 80181E5C
  c->r[7]=c->r[1]+0x0000002Cu; // 80181E60
  c->r[6]=R32(c->r[1]+0x00000020u); // 80181E64
  c->r[4]=0u+0x00000000u; // 80181E68
  c->r[29]=0u+0x00000000u; // 80181E6C
  c->r[3]=0u+0x00000000u; // 80181E70
  c->ctr=c->r[0]; // 80181E74
L_80181E78:;
  c->r[8]=R32(c->r[7]+c->r[4]); // 80181E78
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181E7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181E80
  if (crb(c,2)) { goto L_80181EA8; } // 80181E84
  c->r[0]=R32(c->r[30]+0x00000014u); // 80181E88
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181E8C
  if (crb(c,2)) { goto L_80181EA8; } // 80181E90
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[8]); // 80181E94
  if (crb(c,2)) { goto L_80181EA8; } // 80181E98
  W32(c->r[5]+c->r[3],c->r[8]); // 80181E9C
  c->r[29]=c->r[29]+0x00000001u; // 80181EA0
  c->r[3]=c->r[3]+0x00000004u; // 80181EA4
L_80181EA8:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181EA8
  if (!crb(c,0)) { goto L_80181EB8; } // 80181EAC
  c->r[4]=c->r[4]+0x00000004u; // 80181EB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181E78; } // 80181EB4
L_80181EB8:;
  c->lr=0x80181EBCu; f_803B220C(c); // 80181EB8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181EBC
  c->r[5]=c->r[1]+0x00000008u; // 80181EC0
  cmps(c,0,(int32_t)c->r[31],3); // 80181EC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181EC8
  c->r[0]=c->r[3]-c->r[0]; // 80181ECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181ED0
  c->r[0]=R32(c->r[5]+c->r[0]); // 80181ED4
  W32(c->r[30]+0x00000018u,c->r[0]); // 80181ED8
  if (!crb(c,1)) { goto L_80181FC4; } // 80181EDC
  c->r[0]=0u+0x00000005u; // 80181EE0
  c->r[7]=c->r[1]+0x0000002Cu; // 80181EE4
  c->r[6]=R32(c->r[1]+0x00000024u); // 80181EE8
  c->r[4]=0u+0x00000000u; // 80181EEC
  c->r[29]=0u+0x00000000u; // 80181EF0
  c->r[3]=0u+0x00000000u; // 80181EF4
  c->ctr=c->r[0]; // 80181EF8
L_80181EFC:;
  c->r[8]=R32(c->r[7]+c->r[4]); // 80181EFC
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181F00
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181F04
  if (crb(c,2)) { goto L_80181F38; } // 80181F08
  c->r[0]=R32(c->r[30]+0x00000014u); // 80181F0C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181F10
  if (crb(c,2)) { goto L_80181F38; } // 80181F14
  c->r[0]=R32(c->r[30]+0x00000018u); // 80181F18
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 80181F1C
  if (crb(c,2)) { goto L_80181F38; } // 80181F20
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[8]); // 80181F24
  if (crb(c,2)) { goto L_80181F38; } // 80181F28
  W32(c->r[5]+c->r[3],c->r[8]); // 80181F2C
  c->r[29]=c->r[29]+0x00000001u; // 80181F30
  c->r[3]=c->r[3]+0x00000004u; // 80181F34
L_80181F38:;
  cmpu(c,0,c->r[29],0x00000004u); // 80181F38
  if (!crb(c,0)) { goto L_80181F48; } // 80181F3C
  c->r[4]=c->r[4]+0x00000004u; // 80181F40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181EFC; } // 80181F44
L_80181F48:;
  c->lr=0x80181F4Cu; f_803B220C(c); // 80181F48
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 80181F4C
  c->r[4]=c->r[1]+0x00000008u; // 80181F50
  cmps(c,0,(int32_t)c->r[31],4); // 80181F54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80181F58
  c->r[0]=c->r[3]-c->r[0]; // 80181F5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181F60
  c->r[0]=R32(c->r[4]+c->r[0]); // 80181F64
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80181F68
  if (!crb(c,1)) { goto L_80181FC4; } // 80181F6C
L_80181F70:;
  c->r[0]=0u+0x00000005u; // 80181F70
  c->r[4]=c->r[1]+0x0000002Cu; // 80181F74
  c->r[3]=0u+0x00000000u; // 80181F78
  c->ctr=c->r[0]; // 80181F7C
L_80181F80:;
  c->r[5]=R32(c->r[4]+c->r[3]); // 80181F80
  c->r[0]=R32(c->r[30]+0x00000010u); // 80181F84
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181F88
  if (crb(c,2)) { goto L_80181FBC; } // 80181F8C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80181F90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181F94
  if (crb(c,2)) { goto L_80181FBC; } // 80181F98
  c->r[0]=R32(c->r[30]+0x00000018u); // 80181F9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181FA0
  if (crb(c,2)) { goto L_80181FBC; } // 80181FA4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80181FA8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80181FAC
  if (crb(c,2)) { goto L_80181FBC; } // 80181FB0
  W32(c->r[30]+0x00000020u,c->r[5]); // 80181FB4
  goto L_80181FC4; // 80181FB8
L_80181FBC:;
  c->r[3]=c->r[3]+0x00000004u; // 80181FBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181F80; } // 80181FC0
L_80181FC4:;
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80181FC4
  c->r[0]=R32(c->r[1]+0x00000054u); // 80181FC8
  c->lr=c->r[0]; // 80181FCC
  c->r[1]=c->r[1]+0x00000050u; // 80181FD0
  return; // 80181FD4
}

// fn_80181FD8
void f_80181FD8(Ctx* __restrict c) {
  trace_call(0x80181FD8u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80181FD8
  cmps(c,0,(int32_t)c->r[4],3); // 80181FDC
  if (crb(c,0)) { goto L_80181FEC; } // 80181FE0
  c->r[3]=0u+0xFFFFFFFFu; // 80181FE4
  return; // 80181FE8
L_80181FEC:;
  c->r[0]=c->r[4]+0x00000001u; // 80181FEC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80181FF0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80181FF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80181FF8
  return; // 80181FFC
}

// fn_80182000
void f_80182000(Ctx* __restrict c) {
  trace_call(0x80182000u);
  c->r[5]=R32(c->r[3]+0x00000024u); // 80182000
  cmps(c,0,(int32_t)c->r[5],5); // 80182004
  if (crb(c,0)) { goto L_80182014; } // 80182008
  c->r[3]=0u+0xFFFFFFFFu; // 8018200C
  return; // 80182010
L_80182014:;
  c->r[4]=c->r[5]+0x00000001u; // 80182014
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80182018
  W32(c->r[3]+0x00000024u,c->r[4]); // 8018201C
  c->r[3]=c->r[3]+c->r[0]; // 80182020
  c->r[3]=R32(c->r[3]+0x00000010u); // 80182024
  return; // 80182028
}

// fn_8018202C
void f_8018202C(Ctx* __restrict c) {
  trace_call(0x8018202Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018202C
  c->r[0]=c->lr; // 80182030
  W32(c->r[1]+0x00000024u,c->r[0]); // 80182034
  c->r[11]=c->r[1]+0x00000020u; // 80182038
  c->lr=0x80182040u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018203C
  c->r[0]=0u+0x00000000u; // 80182040
  c->r[5]=0u+0x80690000u; // 80182044
  W8(c->r[1]+0x00000008u,c->r[0]); // 80182048
  c->r[29]=c->r[3]|c->r[3]; // 8018204C
  c->r[4]=c->r[1]+0x00000008u; // 80182050
  c->r[5]=c->r[5]+0x00002220u; // 80182054
  c->lr=0x8018205Cu; f_80182CD4(c); // 80182058
  c->r[3]=c->r[29]+0x000005C0u; // 8018205C
  c->lr=0x80182064u; f_80134210(c); // 80182060
  c->r[5]=0u+0x806E0000u; // 80182064
  c->r[3]=c->r[29]+0x000005C4u; // 80182068
  c->r[5]=c->r[5]+0x00000550u; // 8018206C
  W32(c->r[29]+0x0000001Cu,c->r[5]); // 80182070
  c->r[4]=c->r[5]+0x00000044u; // 80182074
  c->r[0]=c->r[5]+0x000001F0u; // 80182078
  W32(c->r[29]+0x00000400u,c->r[4]); // 8018207C
  W32(c->r[29]+0x000005C0u,c->r[0]); // 80182080
  c->lr=0x80182088u; f_8018218C(c); // 80182084
  c->r[3]=c->r[29]+0x000005D4u; // 80182088
  c->lr=0x80182090u; f_800E1E14(c); // 8018208C
  c->r[3]=c->r[29]+0x00000678u; // 80182090
  c->lr=0x80182098u; f_80258690(c); // 80182094
  c->r[3]=c->r[29]+0x000007B0u; // 80182098
  c->lr=0x801820A0u; f_801821A8(c); // 8018209C
  c->r[30]=c->r[29]+0x000007D8u; // 801820A0
  c->r[31]=c->r[29]+0x00000800u; // 801820A4
L_801820A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801820A8
  c->lr=0x801820B0u; f_800C3A64(c); // 801820AC
  c->r[30]=c->r[30]+0x00000008u; // 801820B0
  cmpu(c,0,c->r[30],c->r[31]); // 801820B4
  if (crb(c,0)) { IRQCHK(c); goto L_801820A8; } // 801820B8
  c->r[3]=c->r[29]+0x00000818u; // 801820BC
  c->lr=0x801820C4u; f_800C3A64(c); // 801820C0
  c->lr=0x801820C8u; f_80182C3C(c); // 801820C4
  c->lr=0x801820CCu; f_80182B98(c); // 801820C8
  c->lr=0x801820D0u; f_80182AF4(c); // 801820CC
  c->lr=0x801820D4u; f_80182A50(c); // 801820D0
  c->lr=0x801820D8u; f_801829AC(c); // 801820D4
  c->lr=0x801820DCu; f_80182914(c); // 801820D8
  c->lr=0x801820E0u; f_80182870(c); // 801820DC
  c->lr=0x801820E4u; f_801827CC(c); // 801820E0
  c->lr=0x801820E8u; f_80182728(c); // 801820E4
  c->lr=0x801820ECu; f_80182684(c); // 801820E8
  c->lr=0x801820F0u; f_801825E0(c); // 801820EC
  c->lr=0x801820F4u; f_8018253C(c); // 801820F0
  c->lr=0x801820F8u; f_80182498(c); // 801820F4
  c->lr=0x801820FCu; f_801823F4(c); // 801820F8
  c->lr=0x80182100u; f_80182350(c); // 801820FC
  c->lr=0x80182104u; f_801822AC(c); // 80182100
  c->lr=0x80182108u; f_801821D8(c); // 80182104
  c->r[0]=0u+0x00000003u; // 80182108
  c->r[5]=0u+0x00000000u; // 8018210C
  c->r[3]=0u+0x00000001u; // 80182110
  W8(c->r[29]+0x00000784u,c->r[3]); // 80182114
  c->r[4]=0u+0xFFFFFFFFu; // 80182118
  W8(c->r[29]+0x00000785u,c->r[5]); // 8018211C
  W32(c->r[29]+0x00000788u,c->r[5]); // 80182120
  c->ctr=c->r[0]; // 80182124
L_80182128:;
  c->r[3]=c->r[29]+c->r[5]; // 80182128
  c->r[5]=c->r[5]+0x00000004u; // 8018212C
  W32(c->r[3]+0x0000078Cu,c->r[4]); // 80182130
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80182128; } // 80182134
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182138
  c->r[0]=0u+0x00000000u; // 8018213C
  {uint32_t ea=c->r[29]+0x00000798u; WF32(ea,c->f[0]);} // 80182140
  c->r[11]=c->r[1]+0x00000020u; // 80182144
  c->r[3]=c->r[29]|c->r[29]; // 80182148
  W8(c->r[29]+0x0000079Cu,c->r[0]); // 8018214C
  W8(c->r[29]+0x000007A8u,c->r[0]); // 80182150
  W8(c->r[29]+0x000007A9u,c->r[0]); // 80182154
  W32(c->r[29]+0x00000800u,c->r[0]); // 80182158
  W32(c->r[29]+0x00000804u,c->r[0]); // 8018215C
  W8(c->r[29]+0x00000808u,c->r[0]); // 80182160
  W8(c->r[29]+0x00000809u,c->r[0]); // 80182164
  {uint32_t ea=c->r[29]+0x0000080Cu; WF32(ea,c->f[0]);} // 80182168
  {uint32_t ea=c->r[29]+0x00000810u; WF32(ea,c->f[0]);} // 8018216C
  W8(c->r[29]+0x00000814u,c->r[0]); // 80182170
  W8(c->r[29]+0x00000815u,c->r[0]); // 80182174
  c->lr=0x8018217Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80182178
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018217C
  c->lr=c->r[0]; // 80182180
  c->r[1]=c->r[1]+0x00000020u; // 80182184
  return; // 80182188
}

// fn_8018218C
void f_8018218C(Ctx* __restrict c) {
  trace_call(0x8018218Cu);
  c->r[4]=0u+0xFFFFFFFFu; // 8018218C
  c->r[0]=0u+0x00000000u; // 80182190
  W32(c->r[3]+0x00000000u,c->r[4]); // 80182194
  W32(c->r[3]+0x00000004u,c->r[4]); // 80182198
  W32(c->r[3]+0x00000008u,c->r[0]); // 8018219C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801821A0
  return; // 801821A4
}

// fn_801821A8
void f_801821A8(Ctx* __restrict c) {
  trace_call(0x801821A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801821A8
  c->r[0]=c->lr; // 801821AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801821B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801821B4
  c->r[31]=c->r[3]|c->r[3]; // 801821B8
  c->lr=0x801821C0u; f_801818FC(c); // 801821BC
  c->r[3]=c->r[31]|c->r[31]; // 801821C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801821C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801821C8
  c->lr=c->r[0]; // 801821CC
  c->r[1]=c->r[1]+0x00000010u; // 801821D0
  return; // 801821D4
}

// fn_801821D8
void f_801821D8(Ctx* __restrict c) {
  trace_call(0x801821D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801821D8
  c->r[0]=c->lr; // 801821DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801821E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801821E4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801821E8
  cmps(c,0,(int32_t)c->r[30],0); // 801821EC
  if (crb(c,2)) { goto L_80182234; } // 801821F0
  c->lr=0x801821F8u; f_8018227C(c); // 801821F4
  c->r[31]=c->r[3]|c->r[3]; // 801821F8
  c->lr=0x80182200u; f_8018224C(c); // 801821FC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182200
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182204
  c->r[5]=0u+0x80180000u; // 80182208
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8018220C
  c->r[4]=c->r[30]+c->r[4]; // 80182210
  c->r[5]=c->r[5]+0x00002248u; // 80182214
  c->r[4]=c->r[4]+c->r[0]; // 80182218
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018221C
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182220
  cmpu(c,0,c->r[0],0x00000010u); // 80182224
  if (!crb(c,0)) { goto L_80182234; } // 80182228
  c->r[0]=0u+0x00000010u; // 8018222C
  W32(c->r[30]+c->r[3],c->r[0]); // 80182230
L_80182234:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182234
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182238
  c->lr=c->r[0]; // 8018223C
  c->r[1]=c->r[1]+0x00000010u; // 80182240
  return; // 80182244
}

// fn_80182248
void f_80182248(Ctx* __restrict c) {
  trace_call(0x80182248u);
  f_80185934(c); return; // 80182248
}

// fn_8018224C
void f_8018224C(Ctx* __restrict c) {
  trace_call(0x8018224Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCDBCu); // 8018224C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182250
  if (!crb(c,2)) { goto L_80182274; } // 80182254
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182258
  c->r[0]=0u+0x00000001u; // 8018225C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182260
  c->r[3]=c->r[4]+0x00000001u; // 80182264
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182268
  W32(c->r[13]+0xFFFFCDB8u,c->r[4]); // 8018226C
  W8(c->r[13]+0xFFFFCDBCu,c->r[0]); // 80182270
L_80182274:;
  c->r[3]=R32(c->r[13]+0xFFFFCDB8u); // 80182274
  return; // 80182278
}

// fn_8018227C
void f_8018227C(Ctx* __restrict c) {
  trace_call(0x8018227Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCDCCu); // 8018227C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182280
  if (!crb(c,2)) { goto L_801822A4; } // 80182284
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 80182288
  c->r[0]=0u+0x00000001u; // 8018228C
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80182290
  c->r[3]=c->r[4]+0x00000001u; // 80182294
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 80182298
  W32(c->r[13]+0xFFFFCDC8u,c->r[4]); // 8018229C
  W8(c->r[13]+0xFFFFCDCCu,c->r[0]); // 801822A0
L_801822A4:;
  c->r[3]=R32(c->r[13]+0xFFFFCDC8u); // 801822A4
  return; // 801822A8
}

// fn_801822AC
void f_801822AC(Ctx* __restrict c) {
  trace_call(0x801822ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801822AC
  c->r[0]=c->lr; // 801822B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801822B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801822B8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801822BC
  cmps(c,0,(int32_t)c->r[30],0); // 801822C0
  if (crb(c,2)) { goto L_80182308; } // 801822C4
  c->lr=0x801822CCu; f_8018227C(c); // 801822C8
  c->r[31]=c->r[3]|c->r[3]; // 801822CC
  c->lr=0x801822D4u; f_80182320(c); // 801822D0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801822D4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801822D8
  c->r[5]=0u+0x80180000u; // 801822DC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801822E0
  c->r[4]=c->r[30]+c->r[4]; // 801822E4
  c->r[5]=c->r[5]+0x0000231Cu; // 801822E8
  c->r[4]=c->r[4]+c->r[0]; // 801822EC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801822F0
  c->r[0]=R32(c->r[30]+c->r[3]); // 801822F4
  cmpu(c,0,c->r[0],0x00000010u); // 801822F8
  if (!crb(c,0)) { goto L_80182308; } // 801822FC
  c->r[0]=0u+0x00000010u; // 80182300
  W32(c->r[30]+c->r[3],c->r[0]); // 80182304
L_80182308:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018230C
  c->lr=c->r[0]; // 80182310
  c->r[1]=c->r[1]+0x00000010u; // 80182314
  return; // 80182318
}

// fn_8018231C
void f_8018231C(Ctx* __restrict c) {
  trace_call(0x8018231Cu);
  f_801859AC(c); return; // 8018231C
}

// fn_80182320
void f_80182320(Ctx* __restrict c) {
  trace_call(0x80182320u);
  c->r[0]=R8(c->r[13]+0xFFFFCDC4u); // 80182320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182324
  if (!crb(c,2)) { goto L_80182348; } // 80182328
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8018232C
  c->r[0]=0u+0x00000001u; // 80182330
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182334
  c->r[3]=c->r[4]+0x00000001u; // 80182338
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8018233C
  W32(c->r[13]+0xFFFFCDC0u,c->r[4]); // 80182340
  W8(c->r[13]+0xFFFFCDC4u,c->r[0]); // 80182344
L_80182348:;
  c->r[3]=R32(c->r[13]+0xFFFFCDC0u); // 80182348
  return; // 8018234C
}

// fn_80182350
void f_80182350(Ctx* __restrict c) {
  trace_call(0x80182350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182350
  c->r[0]=c->lr; // 80182354
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182358
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018235C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182360
  cmps(c,0,(int32_t)c->r[30],0); // 80182364
  if (crb(c,2)) { goto L_801823AC; } // 80182368
  c->lr=0x80182370u; f_8018227C(c); // 8018236C
  c->r[31]=c->r[3]|c->r[3]; // 80182370
  c->lr=0x80182378u; f_801823C4(c); // 80182374
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182378
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018237C
  c->r[5]=0u+0x80180000u; // 80182380
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182384
  c->r[4]=c->r[30]+c->r[4]; // 80182388
  c->r[5]=c->r[5]+0x000023C0u; // 8018238C
  c->r[4]=c->r[4]+c->r[0]; // 80182390
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182394
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182398
  cmpu(c,0,c->r[0],0x00000010u); // 8018239C
  if (!crb(c,0)) { goto L_801823AC; } // 801823A0
  c->r[0]=0u+0x00000010u; // 801823A4
  W32(c->r[30]+c->r[3],c->r[0]); // 801823A8
L_801823AC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801823AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801823B0
  c->lr=c->r[0]; // 801823B4
  c->r[1]=c->r[1]+0x00000010u; // 801823B8
  return; // 801823BC
}

// fn_801823C0
void f_801823C0(Ctx* __restrict c) {
  trace_call(0x801823C0u);
  f_8018575C(c); return; // 801823C0
}

// fn_801823C4
void f_801823C4(Ctx* __restrict c) {
  trace_call(0x801823C4u);
  c->r[0]=R8(c->r[13]+0xFFFFCDB4u); // 801823C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801823C8
  if (!crb(c,2)) { goto L_801823EC; } // 801823CC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801823D0
  c->r[0]=0u+0x00000001u; // 801823D4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801823D8
  c->r[3]=c->r[4]+0x00000001u; // 801823DC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801823E0
  W32(c->r[13]+0xFFFFCDB0u,c->r[4]); // 801823E4
  W8(c->r[13]+0xFFFFCDB4u,c->r[0]); // 801823E8
L_801823EC:;
  c->r[3]=R32(c->r[13]+0xFFFFCDB0u); // 801823EC
  return; // 801823F0
}

// fn_801823F4
void f_801823F4(Ctx* __restrict c) {
  trace_call(0x801823F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801823F4
  c->r[0]=c->lr; // 801823F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801823FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182400
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182404
  cmps(c,0,(int32_t)c->r[30],0); // 80182408
  if (crb(c,2)) { goto L_80182450; } // 8018240C
  c->lr=0x80182414u; f_8018227C(c); // 80182410
  c->r[31]=c->r[3]|c->r[3]; // 80182414
  c->lr=0x8018241Cu; f_80182468(c); // 80182418
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 8018241C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182420
  c->r[5]=0u+0x80180000u; // 80182424
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182428
  c->r[4]=c->r[30]+c->r[4]; // 8018242C
  c->r[5]=c->r[5]+0x00002464u; // 80182430
  c->r[4]=c->r[4]+c->r[0]; // 80182434
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182438
  c->r[0]=R32(c->r[30]+c->r[3]); // 8018243C
  cmpu(c,0,c->r[0],0x00000010u); // 80182440
  if (!crb(c,0)) { goto L_80182450; } // 80182444
  c->r[0]=0u+0x00000010u; // 80182448
  W32(c->r[30]+c->r[3],c->r[0]); // 8018244C
L_80182450:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182450
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182454
  c->lr=c->r[0]; // 80182458
  c->r[1]=c->r[1]+0x00000010u; // 8018245C
  return; // 80182460
}

// fn_80182464
void f_80182464(Ctx* __restrict c) {
  trace_call(0x80182464u);
  f_8018566C(c); return; // 80182464
}

// fn_80182468
void f_80182468(Ctx* __restrict c) {
  trace_call(0x80182468u);
  c->r[0]=R8(c->r[13]+0xFFFFCDACu); // 80182468
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018246C
  if (!crb(c,2)) { goto L_80182490; } // 80182470
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182474
  c->r[0]=0u+0x00000001u; // 80182478
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8018247C
  c->r[3]=c->r[4]+0x00000001u; // 80182480
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182484
  W32(c->r[13]+0xFFFFCDA8u,c->r[4]); // 80182488
  W8(c->r[13]+0xFFFFCDACu,c->r[0]); // 8018248C
L_80182490:;
  c->r[3]=R32(c->r[13]+0xFFFFCDA8u); // 80182490
  return; // 80182494
}

// fn_80182498
void f_80182498(Ctx* __restrict c) {
  trace_call(0x80182498u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182498
  c->r[0]=c->lr; // 8018249C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801824A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801824A4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801824A8
  cmps(c,0,(int32_t)c->r[30],0); // 801824AC
  if (crb(c,2)) { goto L_801824F4; } // 801824B0
  c->lr=0x801824B8u; f_8018227C(c); // 801824B4
  c->r[31]=c->r[3]|c->r[3]; // 801824B8
  c->lr=0x801824C0u; f_8018250C(c); // 801824BC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801824C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801824C4
  c->r[5]=0u+0x80180000u; // 801824C8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801824CC
  c->r[4]=c->r[30]+c->r[4]; // 801824D0
  c->r[5]=c->r[5]+0x00002508u; // 801824D4
  c->r[4]=c->r[4]+c->r[0]; // 801824D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801824DC
  c->r[0]=R32(c->r[30]+c->r[3]); // 801824E0
  cmpu(c,0,c->r[0],0x00000010u); // 801824E4
  if (!crb(c,0)) { goto L_801824F4; } // 801824E8
  c->r[0]=0u+0x00000010u; // 801824EC
  W32(c->r[30]+c->r[3],c->r[0]); // 801824F0
L_801824F4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801824F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801824F8
  c->lr=c->r[0]; // 801824FC
  c->r[1]=c->r[1]+0x00000010u; // 80182500
  return; // 80182504
}

// fn_80182508
void f_80182508(Ctx* __restrict c) {
  trace_call(0x80182508u);
  f_80185454(c); return; // 80182508
}

// fn_8018250C
void f_8018250C(Ctx* __restrict c) {
  trace_call(0x8018250Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCDA4u); // 8018250C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182510
  if (!crb(c,2)) { goto L_80182534; } // 80182514
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182518
  c->r[0]=0u+0x00000001u; // 8018251C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182520
  c->r[3]=c->r[4]+0x00000001u; // 80182524
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182528
  W32(c->r[13]+0xFFFFCDA0u,c->r[4]); // 8018252C
  W8(c->r[13]+0xFFFFCDA4u,c->r[0]); // 80182530
L_80182534:;
  c->r[3]=R32(c->r[13]+0xFFFFCDA0u); // 80182534
  return; // 80182538
}

// fn_8018253C
void f_8018253C(Ctx* __restrict c) {
  trace_call(0x8018253Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018253C
  c->r[0]=c->lr; // 80182540
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182544
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182548
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 8018254C
  cmps(c,0,(int32_t)c->r[30],0); // 80182550
  if (crb(c,2)) { goto L_80182598; } // 80182554
  c->lr=0x8018255Cu; f_8018227C(c); // 80182558
  c->r[31]=c->r[3]|c->r[3]; // 8018255C
  c->lr=0x80182564u; f_801825B0(c); // 80182560
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182564
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182568
  c->r[5]=0u+0x80180000u; // 8018256C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182570
  c->r[4]=c->r[30]+c->r[4]; // 80182574
  c->r[5]=c->r[5]+0x000025ACu; // 80182578
  c->r[4]=c->r[4]+c->r[0]; // 8018257C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182580
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182584
  cmpu(c,0,c->r[0],0x00000010u); // 80182588
  if (!crb(c,0)) { goto L_80182598; } // 8018258C
  c->r[0]=0u+0x00000010u; // 80182590
  W32(c->r[30]+c->r[3],c->r[0]); // 80182594
L_80182598:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018259C
  c->lr=c->r[0]; // 801825A0
  c->r[1]=c->r[1]+0x00000010u; // 801825A4
  return; // 801825A8
}

// fn_801825AC
void f_801825AC(Ctx* __restrict c) {
  trace_call(0x801825ACu);
  f_80185230(c); return; // 801825AC
}

// fn_801825B0
void f_801825B0(Ctx* __restrict c) {
  trace_call(0x801825B0u);
  c->r[0]=R8(c->r[13]+0xFFFFCD9Cu); // 801825B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801825B4
  if (!crb(c,2)) { goto L_801825D8; } // 801825B8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801825BC
  c->r[0]=0u+0x00000001u; // 801825C0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801825C4
  c->r[3]=c->r[4]+0x00000001u; // 801825C8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801825CC
  W32(c->r[13]+0xFFFFCD98u,c->r[4]); // 801825D0
  W8(c->r[13]+0xFFFFCD9Cu,c->r[0]); // 801825D4
L_801825D8:;
  c->r[3]=R32(c->r[13]+0xFFFFCD98u); // 801825D8
  return; // 801825DC
}

// fn_801825E0
void f_801825E0(Ctx* __restrict c) {
  trace_call(0x801825E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801825E0
  c->r[0]=c->lr; // 801825E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801825E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801825EC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801825F0
  cmps(c,0,(int32_t)c->r[30],0); // 801825F4
  if (crb(c,2)) { goto L_8018263C; } // 801825F8
  c->lr=0x80182600u; f_8018227C(c); // 801825FC
  c->r[31]=c->r[3]|c->r[3]; // 80182600
  c->lr=0x80182608u; f_80182654(c); // 80182604
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182608
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018260C
  c->r[5]=0u+0x80180000u; // 80182610
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182614
  c->r[4]=c->r[30]+c->r[4]; // 80182618
  c->r[5]=c->r[5]+0x00002650u; // 8018261C
  c->r[4]=c->r[4]+c->r[0]; // 80182620
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182624
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182628
  cmpu(c,0,c->r[0],0x00000010u); // 8018262C
  if (!crb(c,0)) { goto L_8018263C; } // 80182630
  c->r[0]=0u+0x00000010u; // 80182634
  W32(c->r[30]+c->r[3],c->r[0]); // 80182638
L_8018263C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018263C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182640
  c->lr=c->r[0]; // 80182644
  c->r[1]=c->r[1]+0x00000010u; // 80182648
  return; // 8018264C
}

// fn_80182650
void f_80182650(Ctx* __restrict c) {
  trace_call(0x80182650u);
  f_8018509C(c); return; // 80182650
}

// fn_80182654
void f_80182654(Ctx* __restrict c) {
  trace_call(0x80182654u);
  c->r[0]=R8(c->r[13]+0xFFFFCD94u); // 80182654
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182658
  if (!crb(c,2)) { goto L_8018267C; } // 8018265C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182660
  c->r[0]=0u+0x00000001u; // 80182664
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182668
  c->r[3]=c->r[4]+0x00000001u; // 8018266C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182670
  W32(c->r[13]+0xFFFFCD90u,c->r[4]); // 80182674
  W8(c->r[13]+0xFFFFCD94u,c->r[0]); // 80182678
L_8018267C:;
  c->r[3]=R32(c->r[13]+0xFFFFCD90u); // 8018267C
  return; // 80182680
}

// fn_80182684
void f_80182684(Ctx* __restrict c) {
  trace_call(0x80182684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182684
  c->r[0]=c->lr; // 80182688
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018268C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182690
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182694
  cmps(c,0,(int32_t)c->r[30],0); // 80182698
  if (crb(c,2)) { goto L_801826E0; } // 8018269C
  c->lr=0x801826A4u; f_8018227C(c); // 801826A0
  c->r[31]=c->r[3]|c->r[3]; // 801826A4
  c->lr=0x801826ACu; f_801826F8(c); // 801826A8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801826AC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801826B0
  c->r[5]=0u+0x80180000u; // 801826B4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801826B8
  c->r[4]=c->r[30]+c->r[4]; // 801826BC
  c->r[5]=c->r[5]+0x000026F4u; // 801826C0
  c->r[4]=c->r[4]+c->r[0]; // 801826C4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801826C8
  c->r[0]=R32(c->r[30]+c->r[3]); // 801826CC
  cmpu(c,0,c->r[0],0x00000010u); // 801826D0
  if (!crb(c,0)) { goto L_801826E0; } // 801826D4
  c->r[0]=0u+0x00000010u; // 801826D8
  W32(c->r[30]+c->r[3],c->r[0]); // 801826DC
L_801826E0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801826E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801826E4
  c->lr=c->r[0]; // 801826E8
  c->r[1]=c->r[1]+0x00000010u; // 801826EC
  return; // 801826F0
}

// fn_801826F4
void f_801826F4(Ctx* __restrict c) {
  trace_call(0x801826F4u);
  f_80184DAC(c); return; // 801826F4
}

// fn_801826F8
void f_801826F8(Ctx* __restrict c) {
  trace_call(0x801826F8u);
  c->r[0]=R8(c->r[13]+0xFFFFCD8Cu); // 801826F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801826FC
  if (!crb(c,2)) { goto L_80182720; } // 80182700
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182704
  c->r[0]=0u+0x00000001u; // 80182708
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8018270C
  c->r[3]=c->r[4]+0x00000001u; // 80182710
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182714
  W32(c->r[13]+0xFFFFCD88u,c->r[4]); // 80182718
  W8(c->r[13]+0xFFFFCD8Cu,c->r[0]); // 8018271C
L_80182720:;
  c->r[3]=R32(c->r[13]+0xFFFFCD88u); // 80182720
  return; // 80182724
}

// fn_80182728
void f_80182728(Ctx* __restrict c) {
  trace_call(0x80182728u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182728
  c->r[0]=c->lr; // 8018272C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182730
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182734
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182738
  cmps(c,0,(int32_t)c->r[30],0); // 8018273C
  if (crb(c,2)) { goto L_80182784; } // 80182740
  c->lr=0x80182748u; f_8018227C(c); // 80182744
  c->r[31]=c->r[3]|c->r[3]; // 80182748
  c->lr=0x80182750u; f_8018279C(c); // 8018274C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182750
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182754
  c->r[5]=0u+0x80180000u; // 80182758
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8018275C
  c->r[4]=c->r[30]+c->r[4]; // 80182760
  c->r[5]=c->r[5]+0x00002798u; // 80182764
  c->r[4]=c->r[4]+c->r[0]; // 80182768
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018276C
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182770
  cmpu(c,0,c->r[0],0x00000010u); // 80182774
  if (!crb(c,0)) { goto L_80182784; } // 80182778
  c->r[0]=0u+0x00000010u; // 8018277C
  W32(c->r[30]+c->r[3],c->r[0]); // 80182780
L_80182784:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182784
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182788
  c->lr=c->r[0]; // 8018278C
  c->r[1]=c->r[1]+0x00000010u; // 80182790
  return; // 80182794
}

// fn_80182798
void f_80182798(Ctx* __restrict c) {
  trace_call(0x80182798u);
  f_80184BFC(c); return; // 80182798
}

// fn_8018279C
void f_8018279C(Ctx* __restrict c) {
  trace_call(0x8018279Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCD84u); // 8018279C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801827A0
  if (!crb(c,2)) { goto L_801827C4; } // 801827A4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801827A8
  c->r[0]=0u+0x00000001u; // 801827AC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801827B0
  c->r[3]=c->r[4]+0x00000001u; // 801827B4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801827B8
  W32(c->r[13]+0xFFFFCD80u,c->r[4]); // 801827BC
  W8(c->r[13]+0xFFFFCD84u,c->r[0]); // 801827C0
L_801827C4:;
  c->r[3]=R32(c->r[13]+0xFFFFCD80u); // 801827C4
  return; // 801827C8
}

// fn_801827CC
void f_801827CC(Ctx* __restrict c) {
  trace_call(0x801827CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801827CC
  c->r[0]=c->lr; // 801827D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801827D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801827D8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801827DC
  cmps(c,0,(int32_t)c->r[30],0); // 801827E0
  if (crb(c,2)) { goto L_80182828; } // 801827E4
  c->lr=0x801827ECu; f_8018227C(c); // 801827E8
  c->r[31]=c->r[3]|c->r[3]; // 801827EC
  c->lr=0x801827F4u; f_80182840(c); // 801827F0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801827F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801827F8
  c->r[5]=0u+0x80180000u; // 801827FC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182800
  c->r[4]=c->r[30]+c->r[4]; // 80182804
  c->r[5]=c->r[5]+0x0000283Cu; // 80182808
  c->r[4]=c->r[4]+c->r[0]; // 8018280C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182810
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182814
  cmpu(c,0,c->r[0],0x00000010u); // 80182818
  if (!crb(c,0)) { goto L_80182828; } // 8018281C
  c->r[0]=0u+0x00000010u; // 80182820
  W32(c->r[30]+c->r[3],c->r[0]); // 80182824
L_80182828:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182828
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018282C
  c->lr=c->r[0]; // 80182830
  c->r[1]=c->r[1]+0x00000010u; // 80182834
  return; // 80182838
}

// fn_8018283C
void f_8018283C(Ctx* __restrict c) {
  trace_call(0x8018283Cu);
  f_80184A10(c); return; // 8018283C
}

// fn_80182840
void f_80182840(Ctx* __restrict c) {
  trace_call(0x80182840u);
  c->r[0]=R8(c->r[13]+0xFFFFCD7Cu); // 80182840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182844
  if (!crb(c,2)) { goto L_80182868; } // 80182848
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8018284C
  c->r[0]=0u+0x00000001u; // 80182850
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182854
  c->r[3]=c->r[4]+0x00000001u; // 80182858
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8018285C
  W32(c->r[13]+0xFFFFCD78u,c->r[4]); // 80182860
  W8(c->r[13]+0xFFFFCD7Cu,c->r[0]); // 80182864
L_80182868:;
  c->r[3]=R32(c->r[13]+0xFFFFCD78u); // 80182868
  return; // 8018286C
}

// fn_80182870
void f_80182870(Ctx* __restrict c) {
  trace_call(0x80182870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182870
  c->r[0]=c->lr; // 80182874
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182878
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018287C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182880
  cmps(c,0,(int32_t)c->r[30],0); // 80182884
  if (crb(c,2)) { goto L_801828CC; } // 80182888
  c->lr=0x80182890u; f_8018227C(c); // 8018288C
  c->r[31]=c->r[3]|c->r[3]; // 80182890
  c->lr=0x80182898u; f_801828E4(c); // 80182894
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182898
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018289C
  c->r[5]=0u+0x80180000u; // 801828A0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801828A4
  c->r[4]=c->r[30]+c->r[4]; // 801828A8
  c->r[5]=c->r[5]+0x000028E0u; // 801828AC
  c->r[4]=c->r[4]+c->r[0]; // 801828B0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801828B4
  c->r[0]=R32(c->r[30]+c->r[3]); // 801828B8
  cmpu(c,0,c->r[0],0x00000010u); // 801828BC
  if (!crb(c,0)) { goto L_801828CC; } // 801828C0
  c->r[0]=0u+0x00000010u; // 801828C4
  W32(c->r[30]+c->r[3],c->r[0]); // 801828C8
L_801828CC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801828CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801828D0
  c->lr=c->r[0]; // 801828D4
  c->r[1]=c->r[1]+0x00000010u; // 801828D8
  return; // 801828DC
}

// fn_801828E0
void f_801828E0(Ctx* __restrict c) {
  trace_call(0x801828E0u);
  f_801848B0(c); return; // 801828E0
}

// fn_801828E4
void f_801828E4(Ctx* __restrict c) {
  trace_call(0x801828E4u);
  c->r[0]=R8(c->r[13]+0xFFFFCD74u); // 801828E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801828E8
  if (!crb(c,2)) { goto L_8018290C; } // 801828EC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801828F0
  c->r[0]=0u+0x00000001u; // 801828F4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801828F8
  c->r[3]=c->r[4]+0x00000001u; // 801828FC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182900
  W32(c->r[13]+0xFFFFCD70u,c->r[4]); // 80182904
  W8(c->r[13]+0xFFFFCD74u,c->r[0]); // 80182908
L_8018290C:;
  c->r[3]=R32(c->r[13]+0xFFFFCD70u); // 8018290C
  return; // 80182910
}

// fn_80182914
void f_80182914(Ctx* __restrict c) {
  trace_call(0x80182914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182914
  c->r[0]=c->lr; // 80182918
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018291C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182920
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 80182924
  cmps(c,0,(int32_t)c->r[31],0); // 80182928
  if (crb(c,2)) { goto L_80182994; } // 8018292C
  c->lr=0x80182934u; f_8018227C(c); // 80182930
  c->r[0]=R8(c->r[13]+0xFFFFCD6Cu); // 80182934
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182938
  if (!crb(c,2)) { goto L_8018295C; } // 8018293C
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80182940
  c->r[0]=0u+0x00000001u; // 80182944
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80182948
  c->r[4]=c->r[5]+0x00000001u; // 8018294C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80182950
  W32(c->r[13]+0xFFFFCD68u,c->r[5]); // 80182954
  W8(c->r[13]+0xFFFFCD6Cu,c->r[0]); // 80182958
L_8018295C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8018295C
  c->r[0]=R32(c->r[13]+0xFFFFCD68u); // 80182960
  c->r[5]=0u+0x80180000u; // 80182964
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80182968
  c->r[4]=c->r[31]+c->r[4]; // 8018296C
  c->r[5]=c->r[5]+0x000029A8u; // 80182970
  c->r[4]=c->r[4]+c->r[0]; // 80182974
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182978
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018297C
  c->r[0]=R32(c->r[31]+c->r[3]); // 80182980
  cmpu(c,0,c->r[0],0x00000010u); // 80182984
  if (!crb(c,0)) { goto L_80182994; } // 80182988
  c->r[0]=0u+0x00000010u; // 8018298C
  W32(c->r[31]+c->r[3],c->r[0]); // 80182990
L_80182994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182998
  c->lr=c->r[0]; // 8018299C
  c->r[1]=c->r[1]+0x00000010u; // 801829A0
  return; // 801829A4
}

// fn_801829A8
void f_801829A8(Ctx* __restrict c) {
  trace_call(0x801829A8u);
  f_801847A4(c); return; // 801829A8
}

// fn_801829AC
void f_801829AC(Ctx* __restrict c) {
  trace_call(0x801829ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801829AC
  c->r[0]=c->lr; // 801829B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801829B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801829B8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801829BC
  cmps(c,0,(int32_t)c->r[30],0); // 801829C0
  if (crb(c,2)) { goto L_80182A08; } // 801829C4
  c->lr=0x801829CCu; f_8018227C(c); // 801829C8
  c->r[31]=c->r[3]|c->r[3]; // 801829CC
  c->lr=0x801829D4u; f_80182A20(c); // 801829D0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801829D4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801829D8
  c->r[5]=0u+0x80180000u; // 801829DC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801829E0
  c->r[4]=c->r[30]+c->r[4]; // 801829E4
  c->r[5]=c->r[5]+0x00002A1Cu; // 801829E8
  c->r[4]=c->r[4]+c->r[0]; // 801829EC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801829F0
  c->r[0]=R32(c->r[30]+c->r[3]); // 801829F4
  cmpu(c,0,c->r[0],0x00000010u); // 801829F8
  if (!crb(c,0)) { goto L_80182A08; } // 801829FC
  c->r[0]=0u+0x00000010u; // 80182A00
  W32(c->r[30]+c->r[3],c->r[0]); // 80182A04
L_80182A08:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182A0C
  c->lr=c->r[0]; // 80182A10
  c->r[1]=c->r[1]+0x00000010u; // 80182A14
  return; // 80182A18
}

// fn_80182A1C
void f_80182A1C(Ctx* __restrict c) {
  trace_call(0x80182A1Cu);
  f_80184690(c); return; // 80182A1C
}

// fn_80182A20
void f_80182A20(Ctx* __restrict c) {
  trace_call(0x80182A20u);
  c->r[0]=R8(c->r[13]+0xFFFFCD64u); // 80182A20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182A24
  if (!crb(c,2)) { goto L_80182A48; } // 80182A28
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182A2C
  c->r[0]=0u+0x00000001u; // 80182A30
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182A34
  c->r[3]=c->r[4]+0x00000001u; // 80182A38
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182A3C
  W32(c->r[13]+0xFFFFCD60u,c->r[4]); // 80182A40
  W8(c->r[13]+0xFFFFCD64u,c->r[0]); // 80182A44
L_80182A48:;
  c->r[3]=R32(c->r[13]+0xFFFFCD60u); // 80182A48
  return; // 80182A4C
}

// fn_80182A50
void f_80182A50(Ctx* __restrict c) {
  trace_call(0x80182A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182A50
  c->r[0]=c->lr; // 80182A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182A58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182A5C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182A60
  cmps(c,0,(int32_t)c->r[30],0); // 80182A64
  if (crb(c,2)) { goto L_80182AAC; } // 80182A68
  c->lr=0x80182A70u; f_8018227C(c); // 80182A6C
  c->r[31]=c->r[3]|c->r[3]; // 80182A70
  c->lr=0x80182A78u; f_80182AC4(c); // 80182A74
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182A78
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182A7C
  c->r[5]=0u+0x80180000u; // 80182A80
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182A84
  c->r[4]=c->r[30]+c->r[4]; // 80182A88
  c->r[5]=c->r[5]+0x00002AC0u; // 80182A8C
  c->r[4]=c->r[4]+c->r[0]; // 80182A90
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182A94
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182A98
  cmpu(c,0,c->r[0],0x00000010u); // 80182A9C
  if (!crb(c,0)) { goto L_80182AAC; } // 80182AA0
  c->r[0]=0u+0x00000010u; // 80182AA4
  W32(c->r[30]+c->r[3],c->r[0]); // 80182AA8
L_80182AAC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182AAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182AB0
  c->lr=c->r[0]; // 80182AB4
  c->r[1]=c->r[1]+0x00000010u; // 80182AB8
  return; // 80182ABC
}

// fn_80182AC0
void f_80182AC0(Ctx* __restrict c) {
  trace_call(0x80182AC0u);
  f_801845CC(c); return; // 80182AC0
}

// fn_80182AC4
void f_80182AC4(Ctx* __restrict c) {
  trace_call(0x80182AC4u);
  c->r[0]=R8(c->r[13]+0xFFFFCD5Cu); // 80182AC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182AC8
  if (!crb(c,2)) { goto L_80182AEC; } // 80182ACC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182AD0
  c->r[0]=0u+0x00000001u; // 80182AD4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182AD8
  c->r[3]=c->r[4]+0x00000001u; // 80182ADC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182AE0
  W32(c->r[13]+0xFFFFCD58u,c->r[4]); // 80182AE4
  W8(c->r[13]+0xFFFFCD5Cu,c->r[0]); // 80182AE8
L_80182AEC:;
  c->r[3]=R32(c->r[13]+0xFFFFCD58u); // 80182AEC
  return; // 80182AF0
}

// fn_80182AF4
void f_80182AF4(Ctx* __restrict c) {
  trace_call(0x80182AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182AF4
  c->r[0]=c->lr; // 80182AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182AFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182B00
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182B04
  cmps(c,0,(int32_t)c->r[30],0); // 80182B08
  if (crb(c,2)) { goto L_80182B50; } // 80182B0C
  c->lr=0x80182B14u; f_8018227C(c); // 80182B10
  c->r[31]=c->r[3]|c->r[3]; // 80182B14
  c->lr=0x80182B1Cu; f_80182B68(c); // 80182B18
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182B1C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182B20
  c->r[5]=0u+0x80180000u; // 80182B24
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182B28
  c->r[4]=c->r[30]+c->r[4]; // 80182B2C
  c->r[5]=c->r[5]+0x00002B64u; // 80182B30
  c->r[4]=c->r[4]+c->r[0]; // 80182B34
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182B38
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182B3C
  cmpu(c,0,c->r[0],0x00000010u); // 80182B40
  if (!crb(c,0)) { goto L_80182B50; } // 80182B44
  c->r[0]=0u+0x00000010u; // 80182B48
  W32(c->r[30]+c->r[3],c->r[0]); // 80182B4C
L_80182B50:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182B50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182B54
  c->lr=c->r[0]; // 80182B58
  c->r[1]=c->r[1]+0x00000010u; // 80182B5C
  return; // 80182B60
}

// fn_80182B64
void f_80182B64(Ctx* __restrict c) {
  trace_call(0x80182B64u);
  f_801844FC(c); return; // 80182B64
}

// fn_80182B68
void f_80182B68(Ctx* __restrict c) {
  trace_call(0x80182B68u);
  c->r[0]=R8(c->r[13]+0xFFFFCD54u); // 80182B68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182B6C
  if (!crb(c,2)) { goto L_80182B90; } // 80182B70
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182B74
  c->r[0]=0u+0x00000001u; // 80182B78
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182B7C
  c->r[3]=c->r[4]+0x00000001u; // 80182B80
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182B84
  W32(c->r[13]+0xFFFFCD50u,c->r[4]); // 80182B88
  W8(c->r[13]+0xFFFFCD54u,c->r[0]); // 80182B8C
L_80182B90:;
  c->r[3]=R32(c->r[13]+0xFFFFCD50u); // 80182B90
  return; // 80182B94
}

// fn_80182B98
void f_80182B98(Ctx* __restrict c) {
  trace_call(0x80182B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182B98
  c->r[0]=c->lr; // 80182B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182BA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182BA4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80182BA8
  cmps(c,0,(int32_t)c->r[30],0); // 80182BAC
  if (crb(c,2)) { goto L_80182BF4; } // 80182BB0
  c->lr=0x80182BB8u; f_8018227C(c); // 80182BB4
  c->r[31]=c->r[3]|c->r[3]; // 80182BB8
  c->lr=0x80182BC0u; f_80182C0C(c); // 80182BBC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80182BC0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182BC4
  c->r[5]=0u+0x80180000u; // 80182BC8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182BCC
  c->r[4]=c->r[30]+c->r[4]; // 80182BD0
  c->r[5]=c->r[5]+0x00002C08u; // 80182BD4
  c->r[4]=c->r[4]+c->r[0]; // 80182BD8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182BDC
  c->r[0]=R32(c->r[30]+c->r[3]); // 80182BE0
  cmpu(c,0,c->r[0],0x00000010u); // 80182BE4
  if (!crb(c,0)) { goto L_80182BF4; } // 80182BE8
  c->r[0]=0u+0x00000010u; // 80182BEC
  W32(c->r[30]+c->r[3],c->r[0]); // 80182BF0
L_80182BF4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80182BF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182BF8
  c->lr=c->r[0]; // 80182BFC
  c->r[1]=c->r[1]+0x00000010u; // 80182C00
  return; // 80182C04
}

// fn_80182C08
void f_80182C08(Ctx* __restrict c) {
  trace_call(0x80182C08u);
  f_801842D8(c); return; // 80182C08
}

// fn_80182C0C
void f_80182C0C(Ctx* __restrict c) {
  trace_call(0x80182C0Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCD4Cu); // 80182C0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182C10
  if (!crb(c,2)) { goto L_80182C34; } // 80182C14
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80182C18
  c->r[0]=0u+0x00000001u; // 80182C1C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80182C20
  c->r[3]=c->r[4]+0x00000001u; // 80182C24
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80182C28
  W32(c->r[13]+0xFFFFCD48u,c->r[4]); // 80182C2C
  W8(c->r[13]+0xFFFFCD4Cu,c->r[0]); // 80182C30
L_80182C34:;
  c->r[3]=R32(c->r[13]+0xFFFFCD48u); // 80182C34
  return; // 80182C38
}

// fn_80182C3C
void f_80182C3C(Ctx* __restrict c) {
  trace_call(0x80182C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182C3C
  c->r[0]=c->lr; // 80182C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182C44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182C48
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 80182C4C
  cmps(c,0,(int32_t)c->r[31],0); // 80182C50
  if (crb(c,2)) { goto L_80182CBC; } // 80182C54
  c->lr=0x80182C5Cu; f_8018227C(c); // 80182C58
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80182C5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182C60
  if (!crb(c,2)) { goto L_80182C84; } // 80182C64
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80182C68
  c->r[0]=0u+0x00000001u; // 80182C6C
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80182C70
  c->r[4]=c->r[5]+0x00000001u; // 80182C74
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80182C78
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80182C7C
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80182C80
L_80182C84:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80182C84
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 80182C88
  c->r[5]=0u+0x80180000u; // 80182C8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80182C90
  c->r[4]=c->r[31]+c->r[4]; // 80182C94
  c->r[5]=c->r[5]+0x00002CD0u; // 80182C98
  c->r[4]=c->r[4]+c->r[0]; // 80182C9C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182CA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80182CA4
  c->r[0]=R32(c->r[31]+c->r[3]); // 80182CA8
  cmpu(c,0,c->r[0],0x00000010u); // 80182CAC
  if (!crb(c,0)) { goto L_80182CBC; } // 80182CB0
  c->r[0]=0u+0x00000010u; // 80182CB4
  W32(c->r[31]+c->r[3],c->r[0]); // 80182CB8
L_80182CBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182CC0
  c->lr=c->r[0]; // 80182CC4
  c->r[1]=c->r[1]+0x00000010u; // 80182CC8
  return; // 80182CCC
}

// fn_80182CD0
void f_80182CD0(Ctx* __restrict c) {
  trace_call(0x80182CD0u);
  f_8018415C(c); return; // 80182CD0
}

// fn_80182CD4
void f_80182CD4(Ctx* __restrict c) {
  trace_call(0x80182CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182CD4
  c->r[0]=c->lr; // 80182CD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80182CDC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80182CE0
  c->r[27]=c->r[3]|c->r[3]; // 80182CE4
  c->r[26]=c->r[5]|c->r[5]; // 80182CE8
  c->r[31]=c->r[27]|c->r[27]; // 80182CEC
  c->r[30]=c->r[27]|c->r[27]; // 80182CF0
  c->r[28]=c->r[27]|c->r[27]; // 80182CF4
  c->lr=0x80182CFCu; f_8018227C(c); // 80182CF8
  c->r[4]=0u+0x806D0000u; // 80182CFC
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 80182D00
  c->r[0]=0u+0x00000000u; // 80182D04
  W32(c->r[27]+0x00000000u,c->r[3]); // 80182D08
  c->r[4]=c->r[4]+0x000038C0u; // 80182D0C
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80182D10
  W32(c->r[27]+0x00000004u,c->r[0]); // 80182D14
  W32(c->r[27]+0x00000008u,c->r[0]); // 80182D18
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80182D1C
  W8(c->r[27]+0x00000010u,c->r[0]); // 80182D20
  W32(c->r[27]+0x00000014u,c->r[0]); // 80182D24
  W32(c->r[27]+0x00000018u,c->r[0]); // 80182D28
  W32(c->r[27]+0x00000020u,c->r[0]); // 80182D2C
  W32(c->r[27]+0x00000024u,c->r[0]); // 80182D30
  if (crb(c,2)) { goto L_80182D3C; } // 80182D34
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 80182D38
L_80182D3C:;
  c->lr=0x80182D40u; f_800797AC(c); // 80182D3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80182D40
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 80182D44
  W32(c->r[3]+0x00000000u,c->r[0]); // 80182D48
  if (!crb(c,2)) { goto L_80182D58; } // 80182D4C
  c->r[0]=0u+0x00000001u; // 80182D50
  W32(c->r[3]+0x00000000u,c->r[0]); // 80182D54
L_80182D58:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 80182D58
  c->r[5]=0u+0x0000012Cu; // 80182D5C
  c->r[4]=c->r[6]+0x00000001u; // 80182D60
  c->r[0]=divwu(c->r[4],c->r[5]); // 80182D64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80182D68
  c->r[7]=c->r[4]-c->r[0]; // 80182D6C
  goto L_80182DBC; // 80182D70
L_80182D74:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80182D74
  c->r[4]=c->r[3]+c->r[0]; // 80182D78
  c->r[0]=R32(c->r[4]+0x00000008u); // 80182D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80182D80
  if (!crb(c,2)) { goto L_80182DAC; } // 80182D84
  W32(c->r[3]+0x00000004u,c->r[7]); // 80182D88
  c->r[0]=R32(c->r[3]+0x00000000u); // 80182D8C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80182D90
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80182D94
  c->r[4]=R32(c->r[3]+0x00000000u); // 80182D98
  c->r[0]=R32(c->r[3]+0x00000004u); // 80182D9C
  W32(c->r[1]+0x00000010u,c->r[4]); // 80182DA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182DA4
  goto L_80182DD8; // 80182DA8
L_80182DAC:;
  c->r[4]=c->r[7]+0x00000001u; // 80182DAC
  c->r[0]=divwu(c->r[4],c->r[5]); // 80182DB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80182DB4
  c->r[7]=c->r[4]-c->r[0]; // 80182DB8
L_80182DBC:;
  cmpu(c,0,c->r[7],c->r[6]); // 80182DBC
  if (!crb(c,2)) { IRQCHK(c); goto L_80182D74; } // 80182DC0
  c->r[0]=0u+0x00000000u; // 80182DC4
  W32(c->r[1]+0x00000018u,c->r[0]); // 80182DC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80182DCC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80182DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182DD4
L_80182DD8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 80182DD8
  c->r[24]=c->r[27]+0x00000028u; // 80182DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182DE0
  c->r[3]=c->r[24]|c->r[24]; // 80182DE4
  W32(c->r[1]+0x00000008u,c->r[4]); // 80182DE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80182DEC
  W32(c->r[27]+0x00000020u,c->r[4]); // 80182DF0
  W32(c->r[27]+0x00000024u,c->r[0]); // 80182DF4
  c->lr=0x80182DFCu; f_800506C0(c); // 80182DF8
  cmps(c,0,(int32_t)c->r[24],0); // 80182DFC
  c->r[3]=c->r[24]|c->r[24]; // 80182E00
  if (crb(c,2)) { goto L_80182E0C; } // 80182E04
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 80182E08
L_80182E0C:;
  c->r[29]=0u+0x00000001u; // 80182E0C
  W32(c->r[24]+0x00000008u,c->r[3]); // 80182E10
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 80182E14
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 80182E18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182E1C
  if (!crb(c,2)) { goto L_80182E60; } // 80182E20
  c->r[25]=0u+0x80740000u; // 80182E24
  c->r[3]=c->r[25]+0x000074BCu; // 80182E28
  c->lr=0x80182E30u; f_800506C0(c); // 80182E2C
  c->r[6]=0u+0x806D0000u; // 80182E30
  c->r[4]=0u+0x80060000u; // 80182E34
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 80182E38
  c->r[3]=c->r[25]+0x000074BCu; // 80182E3C
  c->r[0]=c->r[6]+0x00000008u; // 80182E40
  c->r[5]=0u+0x80750000u; // 80182E44
  W32(c->r[3]+0x00000010u,c->r[6]); // 80182E48
  c->r[4]=c->r[4]+0x000057D4u; // 80182E4C
  c->r[5]=c->r[5]+0x00004AD4u; // 80182E50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80182E54
  c->lr=0x80182E5Cu; f_803A92B8(c); // 80182E58
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 80182E5C
L_80182E60:;
  c->r[3]=0u+0x80740000u; // 80182E60
  c->r[5]=c->r[24]|c->r[24]; // 80182E64
  c->r[3]=c->r[3]+0x000074BCu; // 80182E68
  c->r[4]=c->r[3]|c->r[3]; // 80182E6C
  c->lr=0x80182E74u; f_802DDCA8(c); // 80182E70
  c->r[24]=c->r[27]+0x00000038u; // 80182E74
  c->r[3]=c->r[24]|c->r[24]; // 80182E78
  c->lr=0x80182E80u; f_800506C0(c); // 80182E7C
  cmps(c,0,(int32_t)c->r[24],0); // 80182E80
  c->r[0]=c->r[24]|c->r[24]; // 80182E84
  if (crb(c,2)) { goto L_80182E90; } // 80182E88
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 80182E8C
L_80182E90:;
  c->r[29]=c->r[27]+0x00000044u; // 80182E90
  W32(c->r[24]+0x00000008u,c->r[0]); // 80182E94
  c->r[3]=c->r[29]|c->r[29]; // 80182E98
  c->lr=0x80182EA0u; f_800506C0(c); // 80182E9C
  cmps(c,0,(int32_t)c->r[29],0); // 80182EA0
  c->r[0]=c->r[29]|c->r[29]; // 80182EA4
  if (crb(c,2)) { goto L_80182EB0; } // 80182EA8
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 80182EAC
L_80182EB0:;
  c->r[3]=0u+0x806F0000u; // 80182EB0
  c->r[25]=0u+0x00000000u; // 80182EB4
  c->r[3]=c->r[3]+0x00000E80u; // 80182EB8
  W32(c->r[29]+0x00000008u,c->r[0]); // 80182EBC
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 80182EC0
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80182EC4
  W32(c->r[27]+0x00000058u,c->r[25]); // 80182EC8
  W32(c->r[27]+0x00000064u,c->r[25]); // 80182ECC
  c->lr=0x80182ED4u; f_8007BDCC(c); // 80182ED0
  c->r[0]=c->r[13]+0xFFFF8114u; // 80182ED4
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 80182ED8
  W32(c->r[27]+0x000000A0u,c->r[0]); // 80182EDC
  W32(c->r[27]+0x000000A4u,c->r[25]); // 80182EE0
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80182EE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182EE8
  if (!crb(c,2)) { goto L_80182F0C; } // 80182EEC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80182EF0
  c->r[0]=0u+0x00000001u; // 80182EF4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80182EF8
  c->r[3]=c->r[4]+0x00000001u; // 80182EFC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80182F00
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80182F04
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 80182F08
L_80182F0C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 80182F0C
  c->r[3]=c->r[13]+0xFFFF8110u; // 80182F10
  c->r[0]=0u+0x00000000u; // 80182F14
  W32(c->r[27]+0x000000A8u,c->r[4]); // 80182F18
  W32(c->r[27]+0x000000ACu,c->r[3]); // 80182F1C
  W32(c->r[27]+0x000000B0u,c->r[0]); // 80182F20
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 80182F24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182F28
  if (!crb(c,2)) { goto L_80182F4C; } // 80182F2C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80182F30
  c->r[0]=0u+0x00000001u; // 80182F34
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80182F38
  c->r[3]=c->r[4]+0x00000001u; // 80182F3C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80182F40
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 80182F44
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 80182F48
L_80182F4C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 80182F4C
  c->r[3]=c->r[13]+0xFFFF810Cu; // 80182F50
  c->r[0]=0u+0x00000000u; // 80182F54
  W32(c->r[27]+0x000000B4u,c->r[4]); // 80182F58
  W32(c->r[27]+0x000000B8u,c->r[3]); // 80182F5C
  W32(c->r[27]+0x000000BCu,c->r[0]); // 80182F60
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 80182F64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182F68
  if (!crb(c,2)) { goto L_80182F8C; } // 80182F6C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80182F70
  c->r[0]=0u+0x00000001u; // 80182F74
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80182F78
  c->r[3]=c->r[4]+0x00000001u; // 80182F7C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80182F80
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80182F84
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 80182F88
L_80182F8C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80182F8C
  c->r[3]=c->r[13]+0xFFFF8108u; // 80182F90
  c->r[0]=0u+0x00000000u; // 80182F94
  W32(c->r[27]+0x000000C0u,c->r[4]); // 80182F98
  W32(c->r[27]+0x000000C4u,c->r[3]); // 80182F9C
  W32(c->r[27]+0x000000C8u,c->r[0]); // 80182FA0
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80182FA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80182FA8
  if (!crb(c,2)) { goto L_80182FCC; } // 80182FAC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80182FB0
  c->r[0]=0u+0x00000001u; // 80182FB4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80182FB8
  c->r[3]=c->r[4]+0x00000001u; // 80182FBC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80182FC0
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80182FC4
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 80182FC8
L_80182FCC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80182FCC
  c->r[0]=c->r[13]+0xFFFF8104u; // 80182FD0
  c->r[25]=0u+0x00000000u; // 80182FD4
  W32(c->r[27]+0x000000CCu,c->r[3]); // 80182FD8
  c->r[3]=c->r[27]+0x000000D8u; // 80182FDC
  W32(c->r[27]+0x000000D0u,c->r[0]); // 80182FE0
  W32(c->r[27]+0x000000D4u,c->r[25]); // 80182FE4
  c->lr=0x80182FECu; f_800506C0(c); // 80182FE8
  c->r[4]=0u+0x806F0000u; // 80182FEC
  c->r[3]=0u+0x00000006u; // 80182FF0
  c->r[4]=c->r[4]+0x000007A0u; // 80182FF4
  c->r[29]=c->r[27]+0x000000FCu; // 80182FF8
  c->r[0]=c->r[4]+0x00000024u; // 80182FFC
  W32(c->r[27]+0x000000E8u,c->r[3]); // 80183000
  c->r[3]=c->r[29]+0x0000000Cu; // 80183004
  W32(c->r[27]+0x000000ECu,c->r[25]); // 80183008
  W32(c->r[27]+0x000000F8u,c->r[25]); // 8018300C
  W32(c->r[27]+0x000000FCu,c->r[4]); // 80183010
  W32(c->r[27]+0x00000100u,c->r[0]); // 80183014
  c->lr=0x8018301Cu; f_800506C0(c); // 80183018
  c->r[3]=c->r[29]+0x00000018u; // 8018301C
  c->lr=0x80183024u; f_800506C0(c); // 80183020
  W32(c->r[29]+0x00000024u,c->r[25]); // 80183024
  c->r[3]=c->r[29]+0x000000B0u; // 80183028
  c->lr=0x80183030u; f_800506C0(c); // 8018302C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80183030
  c->r[3]=c->r[29]|c->r[29]; // 80183034
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80183038
  c->ctr=c->r[12]; // 8018303C
  if (true) { c->lr=0x80183044u; dispatch(c,c->ctr); } // 80183040
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 80183044
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183048
  if (!crb(c,2)) { goto L_80183068; } // 8018304C
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 80183050
  c->r[0]=0u+0x00000001u; // 80183054
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 80183058
  c->r[3]=c->r[3]+0x00000001u; // 8018305C
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 80183060
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 80183064
L_80183068:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 80183068
  c->r[5]=0u+0x806F0000u; // 8018306C
  c->r[5]=c->r[5]+0x000007F8u; // 80183070
  c->r[0]=0u+0x00000032u; // 80183074
  c->r[4]=c->r[5]+0x00000024u; // 80183078
  W32(c->r[29]+0x00000008u,c->r[3]); // 8018307C
  c->r[6]=0u+0x00000000u; // 80183080
  c->r[3]=0u+0x00000000u; // 80183084
  W32(c->r[29]+0x00000000u,c->r[5]); // 80183088
  W32(c->r[29]+0x00000004u,c->r[4]); // 8018308C
  c->ctr=c->r[0]; // 80183090
L_80183094:;
  c->r[4]=c->r[29]+c->r[3]; // 80183094
  c->r[3]=c->r[3]+0x00000004u; // 80183098
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 8018309C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80183094; } // 801830A0
  c->r[3]=0u+0x806D0000u; // 801830A4
  c->r[7]=0u+0x00000000u; // 801830A8
  c->r[3]=c->r[3]+0x00003868u; // 801830AC
  c->r[0]=0u+0x0000000Au; // 801830B0
  c->r[4]=c->r[3]+0x00000024u; // 801830B4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801830B8
  c->r[8]=0u+0x00000000u; // 801830BC
  c->r[3]=0u+0x00000000u; // 801830C0
  W32(c->r[29]+0x00000004u,c->r[4]); // 801830C4
  c->r[6]=0u+0xFFFFFFFFu; // 801830C8
  W32(c->r[27]+0x00000314u,c->r[7]); // 801830CC
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 801830D0
  W32(c->r[27]+0x00000054u,c->r[7]); // 801830D4
  W32(c->r[27]+0x00000310u,c->r[27]); // 801830D8
  c->ctr=c->r[0]; // 801830DC
L_801830E0:;
  c->r[5]=c->r[27]+c->r[3]; // 801830E0
  c->r[4]=c->r[27]+c->r[8]; // 801830E4
  W32(c->r[5]+0x00000068u,c->r[6]); // 801830E8
  c->r[8]=c->r[8]+0x00000001u; // 801830EC
  c->r[3]=c->r[3]+0x00000004u; // 801830F0
  W8(c->r[4]+0x00000090u,c->r[7]); // 801830F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801830E0; } // 801830F8
  c->r[25]=c->r[27]+0x00000318u; // 801830FC
  c->r[3]=c->r[25]|c->r[25]; // 80183100
  c->lr=0x80183108u; f_800506C0(c); // 80183104
  cmps(c,0,(int32_t)c->r[25],0); // 80183108
  c->r[3]=c->r[25]|c->r[25]; // 8018310C
  if (crb(c,2)) { goto L_80183118; } // 80183110
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 80183114
L_80183118:;
  c->r[29]=0u+0x00000001u; // 80183118
  W32(c->r[25]+0x00000008u,c->r[3]); // 8018311C
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 80183120
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 80183124
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183128
  if (!crb(c,2)) { goto L_8018316C; } // 8018312C
  c->r[28]=0u+0x80750000u; // 80183130
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80183134
  c->lr=0x8018313Cu; f_800506C0(c); // 80183138
  c->r[6]=0u+0x806D0000u; // 8018313C
  c->r[4]=0u+0x80080000u; // 80183140
  c->r[6]=c->r[6]+0x000038D8u; // 80183144
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80183148
  c->r[0]=c->r[6]+0x00000008u; // 8018314C
  c->r[5]=0u+0x80750000u; // 80183150
  W32(c->r[3]+0x00000010u,c->r[6]); // 80183154
  c->r[4]=c->r[4]+0xFFFF9844u; // 80183158
  c->r[5]=c->r[5]+0x00004ABCu; // 8018315C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80183160
  c->lr=0x80183168u; f_803A92B8(c); // 80183164
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 80183168
L_8018316C:;
  c->r[3]=0u+0x80750000u; // 8018316C
  c->r[5]=c->r[25]|c->r[25]; // 80183170
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80183174
  c->r[4]=c->r[3]|c->r[3]; // 80183178
  c->lr=0x80183180u; f_802DDCA8(c); // 8018317C
  c->r[3]=0u+0x806D0000u; // 80183180
  c->r[0]=0u+0x00000000u; // 80183184
  c->r[3]=c->r[3]+0xFFFFD974u; // 80183188
  c->r[5]=0u+0xFFFFFFFFu; // 8018318C
  c->r[4]=0u+0x00000001u; // 80183190
  c->r[24]=c->r[27]+0x0000032Cu; // 80183194
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80183198
  c->r[3]=c->r[24]|c->r[24]; // 8018319C
  W32(c->r[27]+0x00000328u,c->r[5]); // 801831A0
  W32(c->r[27]+0x000000ECu,c->r[4]); // 801831A4
  W32(c->r[27]+0x00000054u,c->r[0]); // 801831A8
  W32(c->r[27]+0x00000314u,c->r[0]); // 801831AC
  c->lr=0x801831B4u; f_800506C0(c); // 801831B0
  cmps(c,0,(int32_t)c->r[24],0); // 801831B4
  c->r[3]=c->r[24]|c->r[24]; // 801831B8
  if (crb(c,2)) { goto L_801831C4; } // 801831BC
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 801831C0
L_801831C4:;
  c->r[29]=0u+0x00000001u; // 801831C4
  W32(c->r[24]+0x00000008u,c->r[3]); // 801831C8
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801831CC
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801831D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801831D4
  if (!crb(c,2)) { goto L_80183218; } // 801831D8
  c->r[28]=0u+0x80730000u; // 801831DC
  c->r[3]=c->r[28]+0x000073A8u; // 801831E0
  c->lr=0x801831E8u; f_800506C0(c); // 801831E4
  c->r[6]=0u+0x806D0000u; // 801831E8
  c->r[4]=0u+0x80050000u; // 801831EC
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801831F0
  c->r[3]=c->r[28]+0x000073A8u; // 801831F4
  c->r[0]=c->r[6]+0x00000008u; // 801831F8
  c->r[5]=0u+0x80750000u; // 801831FC
  W32(c->r[3]+0x00000010u,c->r[6]); // 80183200
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80183204
  c->r[5]=c->r[5]+0x00004AB0u; // 80183208
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8018320C
  c->lr=0x80183214u; f_803A92B8(c); // 80183210
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 80183214
L_80183218:;
  c->r[3]=0u+0x80730000u; // 80183218
  c->r[5]=c->r[24]|c->r[24]; // 8018321C
  c->r[3]=c->r[3]+0x000073A8u; // 80183220
  c->r[4]=c->r[3]|c->r[3]; // 80183224
  c->lr=0x8018322Cu; f_802DDCA8(c); // 80183228
  c->r[24]=c->r[27]+0x0000033Cu; // 8018322C
  c->r[3]=c->r[24]|c->r[24]; // 80183230
  c->lr=0x80183238u; f_800506C0(c); // 80183234
  cmps(c,0,(int32_t)c->r[24],0); // 80183238
  c->r[3]=c->r[24]|c->r[24]; // 8018323C
  if (crb(c,2)) { goto L_80183248; } // 80183240
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 80183244
L_80183248:;
  c->r[29]=0u+0x00000001u; // 80183248
  W32(c->r[24]+0x00000008u,c->r[3]); // 8018324C
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 80183250
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 80183254
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183258
  if (!crb(c,2)) { goto L_8018329C; } // 8018325C
  c->r[28]=0u+0x80750000u; // 80183260
  c->r[3]=c->r[28]+0xFFFF8158u; // 80183264
  c->lr=0x8018326Cu; f_800506C0(c); // 80183268
  c->r[6]=0u+0x806D0000u; // 8018326C
  c->r[4]=0u+0x80080000u; // 80183270
  c->r[6]=c->r[6]+0x000038F0u; // 80183274
  c->r[3]=c->r[28]+0xFFFF8158u; // 80183278
  c->r[0]=c->r[6]+0x00000008u; // 8018327C
  c->r[5]=0u+0x80750000u; // 80183280
  W32(c->r[3]+0x00000010u,c->r[6]); // 80183284
  c->r[4]=c->r[4]+0xFFFF98C0u; // 80183288
  c->r[5]=c->r[5]+0x00004AA4u; // 8018328C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80183290
  c->lr=0x80183298u; f_803A92B8(c); // 80183294
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 80183298
L_8018329C:;
  c->r[3]=0u+0x80750000u; // 8018329C
  c->r[5]=c->r[24]|c->r[24]; // 801832A0
  c->r[3]=c->r[3]+0xFFFF8158u; // 801832A4
  c->r[4]=c->r[3]|c->r[3]; // 801832A8
  c->lr=0x801832B0u; f_802DDCA8(c); // 801832AC
  c->r[3]=0u+0x806D0000u; // 801832B0
  W32(c->r[27]+0x00000054u,c->r[26]); // 801832B4
  c->r[3]=c->r[3]+0x00004AE8u; // 801832B8
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 801832BC
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 801832C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801832C4
  if (!crb(c,2)) { goto L_801832E4; } // 801832C8
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801832CC
  c->r[0]=0u+0x00000001u; // 801832D0
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 801832D4
  c->r[3]=c->r[3]+0x00000001u; // 801832D8
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801832DC
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 801832E0
L_801832E4:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 801832E4
  W32(c->r[27]+0x00000328u,c->r[0]); // 801832E8
  c->r[0]=R8(c->r[13]+0xFFFFCDD4u); // 801832EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801832F0
  if (!crb(c,2)) { goto L_80183310; } // 801832F4
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 801832F8
  c->r[0]=0u+0x00000001u; // 801832FC
  W32(c->r[13]+0xFFFFCDD0u,c->r[3]); // 80183300
  c->r[3]=c->r[3]+0x00000001u; // 80183304
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80183308
  W8(c->r[13]+0xFFFFCDD4u,c->r[0]); // 8018330C
L_80183310:;
  c->r[0]=R32(c->r[13]+0xFFFFCDD0u); // 80183310
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 80183314
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 80183318
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018331C
  if (!crb(c,2)) { goto L_8018333C; } // 80183320
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 80183324
  c->r[0]=0u+0x00000001u; // 80183328
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 8018332C
  c->r[3]=c->r[3]+0x00000001u; // 80183330
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 80183334
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 80183338
L_8018333C:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 8018333C
  c->r[5]=0u+0x806D0000u; // 80183340
  c->r[5]=c->r[5]+0xFFFFE468u; // 80183344
  W32(c->r[27]+0x00000350u,c->r[0]); // 80183348
  c->r[3]=c->r[27]+0x000003B0u; // 8018334C
  c->r[4]=0u+0x00000000u; // 80183350
  W32(c->r[27]+0x00000400u,c->r[5]); // 80183354
  c->r[5]=0u+0x00000050u; // 80183358
  c->lr=0x80183360u; f_800043EC(c); // 8018335C
  c->r[4]=0u+0x806D0000u; // 80183360
  c->r[3]=c->r[27]+0x00000450u; // 80183364
  c->r[4]=c->r[4]+0xFFFFE170u; // 80183368
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 8018336C
  c->r[0]=c->r[4]+0x00000044u; // 80183370
  W32(c->r[27]+0x00000400u,c->r[0]); // 80183374
  c->lr=0x8018337Cu; f_8007BDFC(c); // 80183378
  c->r[3]=c->r[27]+0x000004C4u; // 8018337C
  c->lr=0x80183384u; f_8007BDFC(c); // 80183380
  c->r[3]=c->r[27]+0x00000538u; // 80183384
  c->r[4]=0u+0x00000000u; // 80183388
  c->r[5]=0u+0x00000008u; // 8018338C
  c->lr=0x80183394u; f_800043EC(c); // 80183390
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80183394
  cmps(c,0,(int32_t)c->r[24],0); // 80183398
  if (crb(c,2)) { goto L_801833E0; } // 8018339C
  c->lr=0x801833A4u; f_8018227C(c); // 801833A0
  c->r[26]=c->r[3]|c->r[3]; // 801833A4
  c->lr=0x801833ACu; f_8007BDCC(c); // 801833A8
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 801833AC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801833B0
  c->r[5]=0u+0x80180000u; // 801833B4
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801833B8
  c->r[4]=c->r[24]+c->r[4]; // 801833BC
  c->r[5]=c->r[5]+0x000037B4u; // 801833C0
  c->r[4]=c->r[4]+c->r[0]; // 801833C4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801833C8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801833CC
  cmpu(c,0,c->r[0],0x0000000Cu); // 801833D0
  if (!crb(c,0)) { goto L_801833E0; } // 801833D4
  c->r[0]=0u+0x0000000Cu; // 801833D8
  W32(c->r[24]+c->r[3],c->r[0]); // 801833DC
L_801833E0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801833E0
  cmps(c,0,(int32_t)c->r[24],0); // 801833E4
  if (crb(c,2)) { goto L_80183450; } // 801833E8
  c->lr=0x801833F0u; f_8018227C(c); // 801833EC
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 801833F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801833F4
  if (!crb(c,2)) { goto L_80183418; } // 801833F8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801833FC
  c->r[0]=0u+0x00000001u; // 80183400
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80183404
  c->r[4]=c->r[5]+0x00000001u; // 80183408
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018340C
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 80183410
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80183414
L_80183418:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80183418
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 8018341C
  c->r[5]=0u+0x80180000u; // 80183420
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183424
  c->r[4]=c->r[24]+c->r[4]; // 80183428
  c->r[5]=c->r[5]+0x000037B0u; // 8018342C
  c->r[4]=c->r[4]+c->r[0]; // 80183430
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183434
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80183438
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018343C
  cmpu(c,0,c->r[0],0x00000018u); // 80183440
  if (!crb(c,0)) { goto L_80183450; } // 80183444
  c->r[0]=0u+0x00000018u; // 80183448
  W32(c->r[24]+c->r[3],c->r[0]); // 8018344C
L_80183450:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80183450
  cmps(c,0,(int32_t)c->r[24],0); // 80183454
  if (crb(c,2)) { goto L_801834C0; } // 80183458
  c->lr=0x80183460u; f_8018227C(c); // 8018345C
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 80183460
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183464
  if (!crb(c,2)) { goto L_80183488; } // 80183468
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018346C
  c->r[0]=0u+0x00000001u; // 80183470
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80183474
  c->r[4]=c->r[5]+0x00000001u; // 80183478
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018347C
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80183480
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80183484
L_80183488:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80183488
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8018348C
  c->r[5]=0u+0x80180000u; // 80183490
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183494
  c->r[4]=c->r[24]+c->r[4]; // 80183498
  c->r[5]=c->r[5]+0x000037ACu; // 8018349C
  c->r[4]=c->r[4]+c->r[0]; // 801834A0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801834A4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801834A8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801834AC
  cmpu(c,0,c->r[0],0x0000006Cu); // 801834B0
  if (!crb(c,0)) { goto L_801834C0; } // 801834B4
  c->r[0]=0u+0x0000006Cu; // 801834B8
  W32(c->r[24]+c->r[3],c->r[0]); // 801834BC
L_801834C0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801834C0
  cmps(c,0,(int32_t)c->r[24],0); // 801834C4
  if (crb(c,2)) { goto L_80183530; } // 801834C8
  c->lr=0x801834D0u; f_8018227C(c); // 801834CC
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801834D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801834D4
  if (!crb(c,2)) { goto L_801834F8; } // 801834D8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801834DC
  c->r[0]=0u+0x00000001u; // 801834E0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801834E4
  c->r[4]=c->r[5]+0x00000001u; // 801834E8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801834EC
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 801834F0
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 801834F4
L_801834F8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801834F8
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 801834FC
  c->r[5]=0u+0x80180000u; // 80183500
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183504
  c->r[4]=c->r[24]+c->r[4]; // 80183508
  c->r[5]=c->r[5]+0x000037A8u; // 8018350C
  c->r[4]=c->r[4]+c->r[0]; // 80183510
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183514
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80183518
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018351C
  cmpu(c,0,c->r[0],0x0000002Cu); // 80183520
  if (!crb(c,0)) { goto L_80183530; } // 80183524
  c->r[0]=0u+0x0000002Cu; // 80183528
  W32(c->r[24]+c->r[3],c->r[0]); // 8018352C
L_80183530:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80183530
  cmps(c,0,(int32_t)c->r[24],0); // 80183534
  if (crb(c,2)) { goto L_801835A0; } // 80183538
  c->lr=0x80183540u; f_8018227C(c); // 8018353C
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 80183540
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183544
  if (!crb(c,2)) { goto L_80183568; } // 80183548
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018354C
  c->r[0]=0u+0x00000001u; // 80183550
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80183554
  c->r[4]=c->r[5]+0x00000001u; // 80183558
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018355C
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 80183560
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 80183564
L_80183568:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80183568
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 8018356C
  c->r[5]=0u+0x80180000u; // 80183570
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183574
  c->r[4]=c->r[24]+c->r[4]; // 80183578
  c->r[5]=c->r[5]+0x000037A4u; // 8018357C
  c->r[4]=c->r[4]+c->r[0]; // 80183580
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183584
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80183588
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018358C
  cmpu(c,0,c->r[0],0x00000010u); // 80183590
  if (!crb(c,0)) { goto L_801835A0; } // 80183594
  c->r[0]=0u+0x00000010u; // 80183598
  W32(c->r[24]+c->r[3],c->r[0]); // 8018359C
L_801835A0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801835A0
  cmps(c,0,(int32_t)c->r[24],0); // 801835A4
  if (crb(c,2)) { goto L_80183610; } // 801835A8
  c->lr=0x801835B0u; f_8018227C(c); // 801835AC
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801835B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801835B4
  if (!crb(c,2)) { goto L_801835D8; } // 801835B8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801835BC
  c->r[0]=0u+0x00000001u; // 801835C0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801835C4
  c->r[4]=c->r[5]+0x00000001u; // 801835C8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801835CC
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801835D0
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801835D4
L_801835D8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801835D8
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801835DC
  c->r[5]=0u+0x80180000u; // 801835E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801835E4
  c->r[4]=c->r[24]+c->r[4]; // 801835E8
  c->r[5]=c->r[5]+0x000037A0u; // 801835EC
  c->r[4]=c->r[4]+c->r[0]; // 801835F0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801835F4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801835F8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801835FC
  cmpu(c,0,c->r[0],0x0000005Cu); // 80183600
  if (!crb(c,0)) { goto L_80183610; } // 80183604
  c->r[0]=0u+0x0000005Cu; // 80183608
  W32(c->r[24]+c->r[3],c->r[0]); // 8018360C
L_80183610:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80183610
  cmps(c,0,(int32_t)c->r[24],0); // 80183614
  if (crb(c,2)) { goto L_80183680; } // 80183618
  c->lr=0x80183620u; f_8018227C(c); // 8018361C
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 80183620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183624
  if (!crb(c,2)) { goto L_80183648; } // 80183628
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018362C
  c->r[0]=0u+0x00000001u; // 80183630
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80183634
  c->r[4]=c->r[5]+0x00000001u; // 80183638
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018363C
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 80183640
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 80183644
L_80183648:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80183648
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 8018364C
  c->r[5]=0u+0x80180000u; // 80183650
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183654
  c->r[4]=c->r[24]+c->r[4]; // 80183658
  c->r[5]=c->r[5]+0x0000379Cu; // 8018365C
  c->r[4]=c->r[4]+c->r[0]; // 80183660
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183664
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80183668
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018366C
  cmpu(c,0,c->r[0],0x0000005Cu); // 80183670
  if (!crb(c,0)) { goto L_80183680; } // 80183674
  c->r[0]=0u+0x0000005Cu; // 80183678
  W32(c->r[24]+c->r[3],c->r[0]); // 8018367C
L_80183680:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80183680
  cmps(c,0,(int32_t)c->r[24],0); // 80183684
  if (crb(c,2)) { goto L_801836F0; } // 80183688
  c->lr=0x80183690u; f_8018227C(c); // 8018368C
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 80183690
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183694
  if (!crb(c,2)) { goto L_801836B8; } // 80183698
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018369C
  c->r[0]=0u+0x00000001u; // 801836A0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801836A4
  c->r[4]=c->r[5]+0x00000001u; // 801836A8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801836AC
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801836B0
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801836B4
L_801836B8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801836B8
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801836BC
  c->r[5]=0u+0x80180000u; // 801836C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801836C4
  c->r[4]=c->r[24]+c->r[4]; // 801836C8
  c->r[5]=c->r[5]+0x00003798u; // 801836CC
  c->r[4]=c->r[4]+c->r[0]; // 801836D0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801836D4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801836D8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801836DC
  cmpu(c,0,c->r[0],0x0000005Cu); // 801836E0
  if (!crb(c,0)) { goto L_801836F0; } // 801836E4
  c->r[0]=0u+0x0000005Cu; // 801836E8
  W32(c->r[24]+c->r[3],c->r[0]); // 801836EC
L_801836F0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801836F0
  cmps(c,0,(int32_t)c->r[24],0); // 801836F4
  if (crb(c,2)) { goto L_80183760; } // 801836F8
  c->lr=0x80183700u; f_8018227C(c); // 801836FC
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80183700
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183704
  if (!crb(c,2)) { goto L_80183728; } // 80183708
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018370C
  c->r[0]=0u+0x00000001u; // 80183710
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80183714
  c->r[4]=c->r[5]+0x00000001u; // 80183718
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018371C
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 80183720
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80183724
L_80183728:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80183728
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 8018372C
  c->r[5]=0u+0x80180000u; // 80183730
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80183734
  c->r[4]=c->r[24]+c->r[4]; // 80183738
  c->r[5]=c->r[5]+0x00003794u; // 8018373C
  c->r[4]=c->r[4]+c->r[0]; // 80183740
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183744
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80183748
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018374C
  cmpu(c,0,c->r[0],0x0000005Cu); // 80183750
  if (!crb(c,0)) { goto L_80183760; } // 80183754
  c->r[0]=0u+0x0000005Cu; // 80183758
  W32(c->r[24]+c->r[3],c->r[0]); // 8018375C
L_80183760:;
  c->r[3]=c->r[27]|c->r[27]; // 80183760
  c->lr=0x80183768u; f_8005BBF0(c); // 80183764
  c->r[4]=0u+0x806E0000u; // 80183768
  c->r[3]=c->r[27]|c->r[27]; // 8018376C
  c->r[4]=c->r[4]+0xFFFFC028u; // 80183770
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80183774
  c->r[0]=c->r[4]+0x00000044u; // 80183778
  W32(c->r[27]+0x00000400u,c->r[0]); // 8018377C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80183780
  c->r[0]=R32(c->r[1]+0x00000044u); // 80183784
  c->lr=c->r[0]; // 80183788
  c->r[1]=c->r[1]+0x00000040u; // 8018378C
  return; // 80183790
}

// fn_80183794
void f_80183794(Ctx* __restrict c) {
  trace_call(0x80183794u);
  f_8005E338(c); return; // 80183794
}

// fn_80183798
void f_80183798(Ctx* __restrict c) {
  trace_call(0x80183798u);
  f_8005E324(c); return; // 80183798
}

// fn_8018379C
void f_8018379C(Ctx* __restrict c) {
  trace_call(0x8018379Cu);
  f_8005E310(c); return; // 8018379C
}

// fn_801837A0
void f_801837A0(Ctx* __restrict c) {
  trace_call(0x801837A0u);
  f_8005E2FC(c); return; // 801837A0
}

// fn_801837A4
void f_801837A4(Ctx* __restrict c) {
  trace_call(0x801837A4u);
  f_8005E34C(c); return; // 801837A4
}

// fn_801837A8
void f_801837A8(Ctx* __restrict c) {
  trace_call(0x801837A8u);
  f_8005E360(c); return; // 801837A8
}

// fn_801837AC
void f_801837AC(Ctx* __restrict c) {
  trace_call(0x801837ACu);
  f_8005D47C(c); return; // 801837AC
}

// fn_801837B0
void f_801837B0(Ctx* __restrict c) {
  trace_call(0x801837B0u);
  f_8005D468(c); return; // 801837B0
}

// fn_801837B4
void f_801837B4(Ctx* __restrict c) {
  trace_call(0x801837B4u);
  f_8005BEDC(c); return; // 801837B4
}

// fn_801837B8
void f_801837B8(Ctx* __restrict c) {
  trace_call(0x801837B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801837B8
  c->r[0]=c->lr; // 801837BC
  cmps(c,0,(int32_t)c->r[3],0); // 801837C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801837C4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801837C8
  c->r[27]=c->r[3]|c->r[3]; // 801837CC
  c->r[28]=c->r[4]|c->r[4]; // 801837D0
  if (crb(c,2)) { goto L_801838A0; } // 801837D4
  c->r[5]=0u+0x806E0000u; // 801837D8
  c->r[29]=0u+0x00000000u; // 801837DC
  c->r[5]=c->r[5]+0x00000550u; // 801837E0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801837E4
  c->r[4]=c->r[5]+0x00000044u; // 801837E8
  c->r[31]=0u+0x00000000u; // 801837EC
  c->r[0]=c->r[5]+0x000001F0u; // 801837F0
  W32(c->r[3]+0x00000400u,c->r[4]); // 801837F4
  W32(c->r[3]+0x000005C0u,c->r[0]); // 801837F8
L_801837FC:;
  c->r[3]=c->r[27]+c->r[31]; // 801837FC
  c->r[30]=c->r[3]+0x000007D8u; // 80183800
  c->r[3]=c->r[30]|c->r[30]; // 80183804
  c->lr=0x8018380Cu; f_800655F4(c); // 80183808
  cmps(c,0,(int32_t)c->r[3],0); // 8018380C
  if (crb(c,2)) { goto L_80183820; } // 80183810
  c->r[3]=c->r[30]|c->r[30]; // 80183814
  c->lr=0x8018381Cu; f_8007ECBC(c); // 80183818
  c->lr=0x80183820u; f_8031749C(c); // 8018381C
L_80183820:;
  c->r[29]=c->r[29]+0x00000001u; // 80183820
  c->r[31]=c->r[31]+0x00000008u; // 80183824
  cmps(c,0,(int32_t)c->r[29],5); // 80183828
  if (crb(c,0)) { IRQCHK(c); goto L_801837FC; } // 8018382C
  c->r[3]=c->r[27]+0x00000818u; // 80183830
  c->lr=0x80183838u; f_800655F4(c); // 80183834
  cmps(c,0,(int32_t)c->r[3],0); // 80183838
  if (crb(c,2)) { goto L_8018384C; } // 8018383C
  c->r[3]=c->r[27]+0x00000818u; // 80183840
  c->lr=0x80183848u; f_8007ECBC(c); // 80183844
  c->lr=0x8018384Cu; f_8031749C(c); // 80183848
L_8018384C:;
  c->r[0]=0u+0x00000000u; // 8018384C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183850
  c->r[3]=c->r[1]+0x00000008u; // 80183854
  c->lr=0x8018385Cu; f_800462D8(c); // 80183858
  c->r[4]=0u+0x00000000u; // 8018385C
  c->lr=0x80183864u; f_800EA1A0(c); // 80183860
  c->r[3]=c->r[27]+0x00000678u; // 80183864
  c->r[4]=0u+0xFFFFFFFFu; // 80183868
  c->lr=0x80183870u; f_80132EC0(c); // 8018386C
  c->r[3]=c->r[27]+0x000005D4u; // 80183870
  c->r[4]=0u+0xFFFFFFFFu; // 80183874
  c->lr=0x8018387Cu; f_800E1E78(c); // 80183878
  cmps(c,0,(int32_t)c->r[27],0); // 8018387C
  if (crb(c,2)) { goto L_80183890; } // 80183880
  c->r[3]=c->r[27]|c->r[27]; // 80183884
  c->r[4]=0u+0x00000000u; // 80183888
  c->lr=0x80183890u; f_8005BD00(c); // 8018388C
L_80183890:;
  cmps(c,0,(int32_t)c->r[28],0); // 80183890
  if (!crb(c,1)) { goto L_801838A0; } // 80183894
  c->r[3]=c->r[27]|c->r[27]; // 80183898
  c->lr=0x801838A0u; f_8005328C(c); // 8018389C
L_801838A0:;
  c->r[3]=c->r[27]|c->r[27]; // 801838A0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801838A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801838A8
  c->lr=c->r[0]; // 801838AC
  c->r[1]=c->r[1]+0x00000030u; // 801838B0
  return; // 801838B4
}

// fn_801838B8
void f_801838B8(Ctx* __restrict c) {
  trace_call(0x801838B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801838B8
  c->r[0]=c->lr; // 801838BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801838C0
  c->r[11]=c->r[1]+0x00000030u; // 801838C4
  c->lr=0x801838CCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801838C8
  c->r[29]=c->r[3]|c->r[3]; // 801838CC
  c->r[3]=c->r[3]+0x000005D4u; // 801838D0
  c->r[4]=c->r[29]+0x000000FCu; // 801838D4
  c->lr=0x801838DCu; f_800E2088(c); // 801838D8
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801838DC
  c->r[3]=c->r[29]+0x000005D4u; // 801838E0
  c->lr=0x801838E8u; f_800E21B4(c); // 801838E4
  c->r[3]=c->r[29]|c->r[29]; // 801838E8
  c->lr=0x801838F0u; f_8006481C(c); // 801838EC
  c->r[28]=c->r[3]|c->r[3]; // 801838F0
  c->r[3]=c->r[29]|c->r[29]; // 801838F4
  c->lr=0x801838FCu; f_80064AFC(c); // 801838F8
  c->r[4]=c->r[3]|c->r[3]; // 801838FC
  c->r[5]=c->r[28]|c->r[28]; // 80183900
  c->r[3]=c->r[29]+0x00000678u; // 80183904
  c->r[6]=c->r[29]+0x000005C0u; // 80183908
  c->lr=0x80183910u; f_80258718(c); // 8018390C
  c->r[28]=0u+0x80690000u; // 80183910
  c->r[27]=0u+0x00000000u; // 80183914
  c->r[28]=c->r[28]+0x00002220u; // 80183918
  c->r[30]=0u+0x00000000u; // 8018391C
L_80183920:;
  c->lr=0x80183924u; f_80067D60(c); // 80183920
  c->r[3]=R32(c->r[3]+0x00000004u); // 80183924
  c->r[4]=c->r[28]+0x00000001u; // 80183928
  c->r[5]=0u+0x00000000u; // 8018392C
  c->lr=0x80183934u; f_8006951C(c); // 80183930
  cmps(c,0,(int32_t)c->r[3],0); // 80183934
  if (crb(c,2)) { goto L_80183940; } // 80183938
  c->r[3]=c->r[3]+0x00000020u; // 8018393C
L_80183940:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80183940
  c->r[4]=c->r[29]+c->r[30]; // 80183944
  c->r[0]=R32(c->r[3]+0x00000004u); // 80183948
  c->r[31]=c->r[4]+0x000007D8u; // 8018394C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183950
  c->r[3]=c->r[31]|c->r[31]; // 80183954
  c->r[4]=c->r[1]+0x00000010u; // 80183958
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018395C
  c->lr=0x80183964u; f_80053568(c); // 80183960
  c->r[3]=c->r[31]|c->r[31]; // 80183964
  c->lr=0x8018396Cu; f_8007ECBC(c); // 80183968
  c->lr=0x80183970u; f_8018172C(c); // 8018396C
  c->r[27]=c->r[27]+0x00000001u; // 80183970
  c->r[30]=c->r[30]+0x00000008u; // 80183974
  cmps(c,0,(int32_t)c->r[27],5); // 80183978
  if (crb(c,0)) { IRQCHK(c); goto L_80183920; } // 8018397C
  c->r[0]=R8(c->r[13]+0xFFFFBC0Au); // 80183980
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183984
  if (!crb(c,2)) { goto L_801839CC; } // 80183988
  c->r[28]=0u+0x80740000u; // 8018398C
  c->r[3]=c->r[28]+0x000047D8u; // 80183990
  c->lr=0x80183998u; f_80317EFC(c); // 80183994
  c->r[6]=0u+0x806D0000u; // 80183998
  c->r[4]=0u+0x80050000u; // 8018399C
  c->r[6]=c->r[6]+0xFFFFCA68u; // 801839A0
  c->r[3]=c->r[28]+0x000047D8u; // 801839A4
  c->r[0]=c->r[6]+0x00000028u; // 801839A8
  c->r[5]=0u+0x80750000u; // 801839AC
  W32(c->r[3]+0x000000A4u,c->r[6]); // 801839B0
  c->r[4]=c->r[4]+0x0000074Cu; // 801839B4
  c->r[5]=c->r[5]+0x00004AC8u; // 801839B8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801839BC
  c->lr=0x801839C4u; f_803A92B8(c); // 801839C0
  c->r[0]=0u+0x00000001u; // 801839C4
  W8(c->r[13]+0xFFFFBC0Au,c->r[0]); // 801839C8
L_801839CC:;
  c->r[3]=0u+0x80690000u; // 801839CC
  c->r[31]=0u+0x80740000u; // 801839D0
  c->r[3]=c->r[3]+0x00002220u; // 801839D4
  c->r[4]=0u+0x80740000u; // 801839D8
  c->r[30]=c->r[3]+0x0000000Au; // 801839DC
  c->r[0]=0u+0x00000005u; // 801839E0
  c->r[31]=c->r[31]+0x000047D8u; // 801839E4
  c->r[4]=c->r[4]+0x00005180u; // 801839E8
  c->r[3]=0u+0x00000000u; // 801839EC
  c->ctr=c->r[0]; // 801839F0
L_801839F4:;
  c->r[5]=c->r[31]+c->r[3]; // 801839F4
  c->r[0]=R32(c->r[5]+0x000000ACu); // 801839F8
  cmps(c,0,(int32_t)c->r[0],0); // 801839FC
  if (!crb(c,2)) { goto L_80183A14; } // 80183A00
  c->r[3]=0u+0x80740000u; // 80183A04
  c->r[3]=c->r[3]+0x00005180u; // 80183A08
  W32(c->r[5]+0x000000ACu,c->r[3]); // 80183A0C
  goto L_80183A24; // 80183A10
L_80183A14:;
  cmpu(c,0,c->r[0],c->r[4]); // 80183A14
  if (crb(c,2)) { goto L_80183A24; } // 80183A18
  c->r[3]=c->r[3]+0x00000004u; // 80183A1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801839F4; } // 80183A20
L_80183A24:;
  c->r[0]=R8(c->r[13]+0xFFFFBC30u); // 80183A24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80183A28
  if (!crb(c,2)) { goto L_80183A74; } // 80183A2C
  c->r[28]=0u+0x80740000u; // 80183A30
  c->r[3]=c->r[28]+0x00004D40u; // 80183A34
  c->lr=0x80183A3Cu; f_800506C0(c); // 80183A38
  c->r[3]=c->r[28]+0x00004D40u; // 80183A3C
  c->r[0]=0u+0x00000000u; // 80183A40
  c->r[4]=0u+0x80040000u; // 80183A44
  c->r[5]=0u+0x80750000u; // 80183A48
  W32(c->r[3]+0x00000008u,c->r[3]); // 80183A4C
  c->r[4]=c->r[4]+0x000055F4u; // 80183A50
  c->r[5]=c->r[5]+0x00004A98u; // 80183A54
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80183A58
  W32(c->r[3]+0x00000014u,c->r[0]); // 80183A5C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80183A60
  W32(c->r[3]+0x00000028u,c->r[0]); // 80183A64
  c->lr=0x80183A6Cu; f_803A92B8(c); // 80183A68
  c->r[0]=0u+0x00000001u; // 80183A6C
  W8(c->r[13]+0xFFFFBC30u,c->r[0]); // 80183A70
L_80183A74:;
  c->r[4]=0u+0x80740000u; // 80183A74
  c->r[4]=c->r[4]+0x00004D40u; // 80183A78
  c->r[3]=R32(c->r[4]+0x00000028u); // 80183A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80183A80
  if (crb(c,2)) { goto L_80183AA4; } // 80183A84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80183A88
  c->r[4]=0u+0x000003E4u; // 80183A8C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80183A90
  c->ctr=c->r[12]; // 80183A94
  if (true) { c->lr=0x80183A9Cu; dispatch(c,c->ctr); } // 80183A98
  c->r[28]=c->r[3]|c->r[3]; // 80183A9C
  goto L_80183AB4; // 80183AA0
L_80183AA4:;
  c->r[3]=c->r[4]+0x00000018u; // 80183AA4
  c->r[4]=0u+0x000003E4u; // 80183AA8
  c->lr=0x80183AB0u; f_803C4D08(c); // 80183AAC
  c->r[28]=c->r[3]|c->r[3]; // 80183AB0
L_80183AB4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80183AB4
  if (crb(c,2)) { goto L_80183AC4; } // 80183AB8
  c->r[3]=c->r[28]|c->r[28]; // 80183ABC
  c->lr=0x80183AC4u; f_80186F10(c); // 80183AC0
L_80183AC4:;
  c->r[0]=0u+0x00000F7Du; // 80183AC4
  W32(c->r[28]+0x000000F4u,c->r[0]); // 80183AC8
  c->r[0]=0u+0x00000000u; // 80183ACC
  c->r[3]=0u+0x80740000u; // 80183AD0
  W32(c->r[28]+0x000000F8u,c->r[0]); // 80183AD4
  c->r[3]=c->r[3]+0x00005180u; // 80183AD8
  c->r[0]=c->r[31]+0x000000D8u; // 80183ADC
  cmps(c,0,(int32_t)c->r[28],0); // 80183AE0
  c->r[0]=c->r[3]-c->r[0]; // 80183AE4
  W32(c->r[28]+0x00000060u,c->r[3]); // 80183AE8
  c->r[0]=cntlz(c->r[0]); // 80183AEC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80183AF0
  W8(c->r[28]+0x0000005Cu,c->r[0]); // 80183AF4
  if (crb(c,2)) { goto L_80183B3C; } // 80183AF8
  c->r[6]=R8(c->r[31]+0x000000D4u); // 80183AFC
  c->r[3]=c->r[31]|c->r[31]; // 80183B00
  c->r[4]=c->r[30]|c->r[30]; // 80183B04
  c->r[5]=c->r[28]|c->r[28]; // 80183B08
  c->lr=0x80183B10u; f_80318C10(c); // 80183B0C
  cmps(c,0,(int32_t)c->r[3],0); // 80183B10
  if (!crb(c,2)) { goto L_80183B3C; } // 80183B14
  cmps(c,0,(int32_t)c->r[28],0); // 80183B18
  if (crb(c,2)) { goto L_80183B38; } // 80183B1C
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 80183B20
  c->r[3]=c->r[28]|c->r[28]; // 80183B24
  c->r[4]=0u+0x00000001u; // 80183B28
  c->r[12]=R32(c->r[12]+0x00000008u); // 80183B2C
  c->ctr=c->r[12]; // 80183B30
  if (true) { c->lr=0x80183B38u; dispatch(c,c->ctr); } // 80183B34
L_80183B38:;
  c->r[28]=0u+0x00000000u; // 80183B38
L_80183B3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 80183B3C
  if (crb(c,2)) { goto L_80183B48; } // 80183B40
  c->r[28]=c->r[28]+0x00000020u; // 80183B44
L_80183B48:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 80183B48
  c->r[3]=c->r[29]+0x00000818u; // 80183B4C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80183B50
  c->r[4]=c->r[1]+0x00000008u; // 80183B54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80183B58
  W32(c->r[1]+0x00000008u,c->r[5]); // 80183B5C
  c->lr=0x80183B64u; f_80053568(c); // 80183B60
  c->r[11]=c->r[1]+0x00000030u; // 80183B64
  c->lr=0x80183B6Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80183B68
  c->r[0]=R32(c->r[1]+0x00000034u); // 80183B6C
  c->lr=c->r[0]; // 80183B70
  c->r[1]=c->r[1]+0x00000030u; // 80183B74
  return; // 80183B78
}

// fn_80183B7C
void f_80183B7C(Ctx* __restrict c) {
  trace_call(0x80183B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183B7C
  c->r[0]=c->lr; // 80183B80
  W32(c->r[1]+0x00000064u,c->r[0]); // 80183B84
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80183B88
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80183B8C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80183B90
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80183B94
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80183B98
  W32(c->r[1]+0x00000038u,c->r[30]); // 80183B9C
  c->r[30]=c->r[3]|c->r[3]; // 80183BA0
  c->r[3]=c->r[3]+0x000005D4u; // 80183BA4
  c->lr=0x80183BACu; f_800E1F38(c); // 80183BA8
  c->r[3]=R32(c->r[30]+0x00000404u); // 80183BAC
  c->lr=0x80183BB4u; f_802EA4B0(c); // 80183BB0
  c->f[30]=c->f[1]; // 80183BB4
  c->r[3]=c->r[30]+0x000005D4u; // 80183BB8
  c->lr=0x80183BC0u; f_800E2A98(c); // 80183BBC
  c->f[31]=c->f[1]; // 80183BC0
  c->r[3]=c->r[30]+0x000005D4u; // 80183BC4
  c->lr=0x80183BCCu; f_800E2090(c); // 80183BC8
  c->r[31]=c->r[3]|c->r[3]; // 80183BCC
  c->r[3]=c->r[30]+0x00000354u; // 80183BD0
  c->lr=0x80183BD8u; f_800C9374(c); // 80183BD4
  c->f[1]=c->f[30]; // 80183BD8
  c->r[4]=c->r[3]|c->r[3]; // 80183BDC
  c->f[2]=c->f[31]; // 80183BE0
  c->r[5]=c->r[31]|c->r[31]; // 80183BE4
  c->r[3]=c->r[30]+0x00000678u; // 80183BE8
  c->lr=0x80183BF0u; f_802588C4(c); // 80183BEC
  c->r[3]=c->r[30]|c->r[30]; // 80183BF0
  c->lr=0x80183BF8u; f_80185BE0(c); // 80183BF4
  c->r[3]=c->r[30]|c->r[30]; // 80183BF8
  c->lr=0x80183C00u; f_801861A8(c); // 80183BFC
  c->r[3]=c->r[30]|c->r[30]; // 80183C00
  c->lr=0x80183C08u; f_80185C44(c); // 80183C04
  c->r[3]=c->r[30]|c->r[30]; // 80183C08
  c->lr=0x80183C10u; f_80185DBC(c); // 80183C0C
  c->r[3]=c->r[30]|c->r[30]; // 80183C10
  c->lr=0x80183C18u; f_801863A0(c); // 80183C14
  c->r[3]=c->r[30]|c->r[30]; // 80183C18
  c->lr=0x80183C20u; f_80186418(c); // 80183C1C
  c->r[5]=R32(c->r[30]+0x00000444u); // 80183C20
  c->r[0]=0u+0x00000000u; // 80183C24
  c->r[4]=R32(c->r[30]+0x0000044Cu); // 80183C28
  c->r[3]=c->r[1]+0x00000008u; // 80183C2C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80183C30
  {uint32_t ea=c->r[4]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80183C34
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183C38
  c->lr=0x80183C40u; f_800462D8(c); // 80183C3C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 80183C40
  c->r[4]=0u+0x43300000u; // 80183C44
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 80183C48
  W32(c->r[1]+0x00000018u,c->r[4]); // 80183C4C
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[2]=RF64(ea);} // 80183C50
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 80183C54
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80183C58
  c->r[5]=R32(c->r[1]+0x00000014u); // 80183C5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80183C60
  c->r[5]=c->r[5]^0x80000000u; // 80183C64
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80183C68
  c->r[0]=c->r[0]^0x80000000u; // 80183C6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80183C70
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80183C74
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80183C78
  W32(c->r[1]+0x00000028u,c->r[4]); // 80183C7C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80183C80
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80183C84
  c->lr=0x80183C8Cu; f_800EA1BC(c); // 80183C88
  c->r[0]=R32(c->r[1]+0x00000064u); // 80183C8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80183C90
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80183C94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80183C98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80183C9C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80183CA0
  c->r[30]=R32(c->r[1]+0x00000038u); // 80183CA4
  c->lr=c->r[0]; // 80183CA8
  c->r[1]=c->r[1]+0x00000060u; // 80183CAC
  return; // 80183CB0
}

// fn_80183CB4
void f_80183CB4(Ctx* __restrict c) {
  trace_call(0x80183CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183CB4
  c->r[0]=c->lr; // 80183CB8
  W32(c->r[1]+0x00000094u,c->r[0]); // 80183CBC
  c->r[11]=c->r[1]+0x00000090u; // 80183CC0
  c->lr=0x80183CC8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80183CC4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80183CC8
  c->r[30]=c->r[3]|c->r[3]; // 80183CCC
  c->r[12]=R32(c->r[12]+0x00000110u); // 80183CD0
  c->ctr=c->r[12]; // 80183CD4
  if (true) { c->lr=0x80183CDCu; dispatch(c,c->ctr); } // 80183CD8
  cmps(c,0,(int32_t)c->r[3],0); // 80183CDC
  if (crb(c,2)) { goto L_80183FD0; } // 80183CE0
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80183CE4
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80183CE8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183CEC
  fcmp(c,0,c->f[1],c->f[0]); // 80183CF0
  if (crb(c,1)) { goto L_80183D20; } // 80183CF4
  c->r[0]=0u+0x00000000u; // 80183CF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183CFC
  c->r[3]=c->r[1]+0x00000008u; // 80183D00
  c->lr=0x80183D08u; f_800462D8(c); // 80183D04
  c->r[4]=0u+0x00000000u; // 80183D08
  c->lr=0x80183D10u; f_800EA1A0(c); // 80183D0C
  c->r[3]=c->r[30]|c->r[30]; // 80183D10
  c->r[4]=0u+0x00000003u; // 80183D14
  c->lr=0x80183D1Cu; f_801864A0(c); // 80183D18
  goto L_80183FD0; // 80183D1C
L_80183D20:;
  c->r[0]=R32(c->r[30]+0x00000450u); // 80183D20
  c->r[3]=c->r[1]+0x00000014u; // 80183D24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80183D28
  c->r[4]=c->r[30]+0x00000458u; // 80183D2C
  c->r[0]=R32(c->r[30]+0x00000454u); // 80183D30
  W32(c->r[1]+0x00000010u,c->r[0]); // 80183D34
  c->lr=0x80183D3Cu; f_8005CD7C(c); // 80183D38
  c->r[3]=c->r[1]+0x00000020u; // 80183D3C
  c->r[4]=c->r[30]+0x00000464u; // 80183D40
  c->lr=0x80183D48u; f_8005CD7C(c); // 80183D44
  c->r[3]=c->r[1]+0x0000002Cu; // 80183D48
  c->r[4]=c->r[30]+0x00000470u; // 80183D4C
  c->lr=0x80183D54u; f_8005CD7C(c); // 80183D50
  c->r[0]=R32(c->r[30]+0x0000047Cu); // 80183D54
  W32(c->r[1]+0x00000038u,c->r[0]); // 80183D58
  c->r[31]=R32(c->r[30]+0x00000480u); // 80183D5C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80183D60
  cmps(c,0,(int32_t)c->r[31],17); // 80183D64
  c->r[0]=R32(c->r[30]+0x00000484u); // 80183D68
  W32(c->r[1]+0x00000040u,c->r[0]); // 80183D6C
  c->r[0]=R32(c->r[30]+0x00000488u); // 80183D70
  W32(c->r[1]+0x00000044u,c->r[0]); // 80183D74
  c->r[0]=R8(c->r[30]+0x0000048Cu); // 80183D78
  W8(c->r[1]+0x00000048u,c->r[0]); // 80183D7C
  c->r[0]=R32(c->r[30]+0x00000490u); // 80183D80
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80183D84
  c->r[0]=R32(c->r[30]+0x00000494u); // 80183D88
  W32(c->r[1]+0x00000050u,c->r[0]); // 80183D8C
  c->r[0]=R32(c->r[30]+0x00000498u); // 80183D90
  W32(c->r[1]+0x00000054u,c->r[0]); // 80183D94
  {uint32_t ea=c->r[30]+0x0000049Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183D98
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80183D9C
  {uint32_t ea=c->r[30]+0x000004A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80183DA0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80183DA4
  c->r[0]=R32(c->r[30]+0x000004A4u); // 80183DA8
  W32(c->r[1]+0x00000060u,c->r[0]); // 80183DAC
  c->r[0]=R32(c->r[30]+0x000004A8u); // 80183DB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 80183DB4
  c->r[0]=R32(c->r[30]+0x000004ACu); // 80183DB8
  W32(c->r[1]+0x00000068u,c->r[0]); // 80183DBC
  {uint32_t ea=c->r[30]+0x000004B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80183DC0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80183DC4
  c->r[0]=R32(c->r[30]+0x000004B4u); // 80183DC8
  W32(c->r[1]+0x00000070u,c->r[0]); // 80183DCC
  c->r[3]=R32(c->r[30]+0x000004B8u); // 80183DD0
  c->r[0]=R32(c->r[30]+0x000004BCu); // 80183DD4
  W32(c->r[1]+0x00000078u,c->r[0]); // 80183DD8
  W32(c->r[1]+0x00000074u,c->r[3]); // 80183DDC
  c->r[0]=R8(c->r[30]+0x000004C0u); // 80183DE0
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 80183DE4
  c->r[0]=R8(c->r[30]+0x000004C1u); // 80183DE8
  W8(c->r[1]+0x0000007Du,c->r[0]); // 80183DEC
  c->r[0]=R8(c->r[30]+0x000004C2u); // 80183DF0
  W8(c->r[1]+0x0000007Eu,c->r[0]); // 80183DF4
  c->r[0]=R8(c->r[30]+0x000004C3u); // 80183DF8
  W8(c->r[1]+0x0000007Fu,c->r[0]); // 80183DFC
  if (!crb(c,2)) { goto L_80183E30; } // 80183E00
  c->r[3]=c->r[30]|c->r[30]; // 80183E04
  c->r[4]=0u+0x00000001u; // 80183E08
  c->lr=0x80183E10u; f_80185B4C(c); // 80183E0C
  cmps(c,0,(int32_t)c->r[3],0); // 80183E10
  if (!crb(c,2)) { goto L_80183E30; } // 80183E14
  c->r[3]=c->r[30]|c->r[30]; // 80183E18
  c->r[4]=0u+0x00000002u; // 80183E1C
  c->lr=0x80183E24u; f_80185B10(c); // 80183E20
  c->r[3]=c->r[30]|c->r[30]; // 80183E24
  c->r[4]=0u+0x00000001u; // 80183E28
  c->lr=0x80183E30u; f_80185A30(c); // 80183E2C
L_80183E30:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80183E30
  cmps(c,0,(int32_t)c->r[3],0); // 80183E34
  if (crb(c,2)) { goto L_80183E44; } // 80183E38
  c->r[29]=R32(c->r[3]+0x00000000u); // 80183E3C
  goto L_80183E48; // 80183E40
L_80183E44:;
  c->r[29]=0u+0xFFFFFFFFu; // 80183E44
L_80183E48:;
  c->lr=0x80183E4Cu; f_8018279C(c); // 80183E48
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183E4C
  if (!crb(c,2)) { goto L_80183E88; } // 80183E50
  {uint32_t ea=c->r[2]+0xFFFFBF08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183E54
  c->r[3]=c->r[30]+0x000005D4u; // 80183E58
  {uint32_t ea=c->r[2]+0xFFFFBF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80183E5C
  c->lr=0x80183E64u; f_800E2B94(c); // 80183E60
  cmps(c,0,(int32_t)c->r[3],0); // 80183E64
  if (crb(c,2)) { goto L_80183FD0; } // 80183E68
  cmps(c,0,(int32_t)c->r[31],6); // 80183E6C
  if (!crb(c,2)) { goto L_80183FD0; } // 80183E70
  {uint32_t ea=c->r[30]+0x00000780u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183E74
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183E78
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80183E7C
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80183E80
  goto L_80183FD0; // 80183E84
L_80183E88:;
  c->lr=0x80183E8Cu; f_801826F8(c); // 80183E88
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183E8C
  if (!crb(c,2)) { goto L_80183F1C; } // 80183E90
  c->r[3]=c->r[30]+0x00000354u; // 80183E94
  c->lr=0x80183E9Cu; f_800C9374(c); // 80183E98
  c->r[0]=c->r[3]+0x00000000u; // 80183E9C
  cmpu(c,0,c->r[0],0x0000C3B4u); // 80183EA0
  if (crb(c,2)) { goto L_80183EB4; } // 80183EA4
  cmpu(c,0,c->r[0],0x0000C3DCu); // 80183EA8
  if (crb(c,2)) { goto L_80183EE8; } // 80183EAC
  goto L_80183FD0; // 80183EB0
L_80183EB4:;
  {uint32_t ea=c->r[2]+0xFFFFBF08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183EB4
  c->r[3]=c->r[30]+0x000005D4u; // 80183EB8
  {uint32_t ea=c->r[2]+0xFFFFBF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80183EBC
  c->lr=0x80183EC4u; f_800E2B94(c); // 80183EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80183EC4
  if (crb(c,2)) { goto L_80183FD0; } // 80183EC8
  cmps(c,0,(int32_t)c->r[31],6); // 80183ECC
  if (!crb(c,2)) { goto L_80183FD0; } // 80183ED0
  {uint32_t ea=c->r[30]+0x00000780u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183ED4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183ED8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80183EDC
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80183EE0
  goto L_80183FD0; // 80183EE4
L_80183EE8:;
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183EE8
  c->r[3]=c->r[30]+0x000005D4u; // 80183EEC
  {uint32_t ea=c->r[2]+0xFFFFBF10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80183EF0
  c->lr=0x80183EF8u; f_800E2B94(c); // 80183EF4
  cmps(c,0,(int32_t)c->r[3],0); // 80183EF8
  if (crb(c,2)) { goto L_80183FD0; } // 80183EFC
  cmps(c,0,(int32_t)c->r[31],6); // 80183F00
  if (!crb(c,2)) { goto L_80183FD0; } // 80183F04
  {uint32_t ea=c->r[30]+0x00000780u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F08
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183F0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80183F10
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80183F14
  goto L_80183FD0; // 80183F18
L_80183F1C:;
  c->lr=0x80183F20u; f_80182654(c); // 80183F1C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183F20
  if (!crb(c,2)) { goto L_80183F5C; } // 80183F24
  {uint32_t ea=c->r[2]+0xFFFFBF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F28
  c->r[3]=c->r[30]+0x000005D4u; // 80183F2C
  {uint32_t ea=c->r[2]+0xFFFFBF18u; c->f[2]=c->ps1[2]=RF32(ea);} // 80183F30
  c->lr=0x80183F38u; f_800E2B94(c); // 80183F34
  cmps(c,0,(int32_t)c->r[3],0); // 80183F38
  if (crb(c,2)) { goto L_80183FD0; } // 80183F3C
  cmps(c,0,(int32_t)c->r[31],2); // 80183F40
  if (!crb(c,2)) { goto L_80183FD0; } // 80183F44
  {uint32_t ea=c->r[30]+0x00000780u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F48
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183F4C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80183F50
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80183F54
  goto L_80183FD0; // 80183F58
L_80183F5C:;
  c->lr=0x80183F60u; f_801828E4(c); // 80183F5C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183F60
  if (!crb(c,2)) { goto L_80183F9C; } // 80183F64
  {uint32_t ea=c->r[2]+0xFFFFBF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F68
  c->r[3]=c->r[30]+0x000005D4u; // 80183F6C
  {uint32_t ea=c->r[2]+0xFFFFBF20u; c->f[2]=c->ps1[2]=RF32(ea);} // 80183F70
  c->lr=0x80183F78u; f_800E2B94(c); // 80183F74
  cmps(c,0,(int32_t)c->r[3],0); // 80183F78
  if (crb(c,2)) { goto L_80183FD0; } // 80183F7C
  cmps(c,0,(int32_t)c->r[31],17); // 80183F80
  if (!crb(c,2)) { goto L_80183FD0; } // 80183F84
  {uint32_t ea=c->r[30]+0x00000780u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F88
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80183F8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80183F90
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80183F94
  goto L_80183FD0; // 80183F98
L_80183F9C:;
  c->lr=0x80183FA0u; f_80182B68(c); // 80183F9C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183FA0
  if (crb(c,2)) { goto L_80183FB4; } // 80183FA4
  c->lr=0x80183FACu; f_80182AC4(c); // 80183FA8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80183FAC
  if (!crb(c,2)) { goto L_80183FD0; } // 80183FB0
L_80183FB4:;
  cmps(c,0,(int32_t)c->r[31],17); // 80183FB4
  if (crb(c,2)) { goto L_80183FC4; } // 80183FB8
  cmps(c,0,(int32_t)c->r[31],2); // 80183FBC
  if (!crb(c,2)) { goto L_80183FD0; } // 80183FC0
L_80183FC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80183FC4
  c->r[4]=0u+0x00000002u; // 80183FC8
  c->lr=0x80183FD0u; f_801864A0(c); // 80183FCC
L_80183FD0:;
  c->r[11]=c->r[1]+0x00000090u; // 80183FD0
  c->lr=0x80183FD8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80183FD4
  c->r[0]=R32(c->r[1]+0x00000094u); // 80183FD8
  c->lr=c->r[0]; // 80183FDC
  c->r[1]=c->r[1]+0x00000090u; // 80183FE0
  return; // 80183FE4
}

// fn_80183FE8
void f_80183FE8(Ctx* __restrict c) {
  trace_call(0x80183FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183FE8
  c->r[0]=c->lr; // 80183FEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80183FF0
  c->r[11]=c->r[1]+0x00000020u; // 80183FF4
  c->lr=0x80183FFCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80183FF8
  c->r[31]=0u+0x80690000u; // 80183FFC
  c->r[30]=c->r[4]|c->r[4]; // 80184000
  c->r[31]=c->r[31]+0x00002220u; // 80184004
  c->r[29]=c->r[3]|c->r[3]; // 80184008
  c->r[3]=c->r[30]|c->r[30]; // 8018400C
  c->r[4]=c->r[31]+0x0000001Du; // 80184010
  c->lr=0x80184018u; f_8007CA34(c); // 80184014
  cmps(c,0,(int32_t)c->r[3],0); // 80184018
  if (!crb(c,2)) { goto L_8018405C; } // 8018401C
  c->r[3]=c->r[30]|c->r[30]; // 80184020
  c->r[4]=c->r[31]+0x0000002Fu; // 80184024
  c->lr=0x8018402Cu; f_8007CA34(c); // 80184028
  cmps(c,0,(int32_t)c->r[3],0); // 8018402C
  if (!crb(c,2)) { goto L_8018405C; } // 80184030
  c->r[3]=c->r[30]|c->r[30]; // 80184034
  c->r[4]=c->r[31]+0x00000041u; // 80184038
  c->lr=0x80184040u; f_8007CA34(c); // 8018403C
  cmps(c,0,(int32_t)c->r[3],0); // 80184040
  if (!crb(c,2)) { goto L_8018405C; } // 80184044
  c->r[3]=c->r[30]|c->r[30]; // 80184048
  c->r[4]=c->r[31]+0x00000053u; // 8018404C
  c->lr=0x80184054u; f_8007CA34(c); // 80184050
  cmps(c,0,(int32_t)c->r[3],0); // 80184054
  if (crb(c,2)) { goto L_80184078; } // 80184058
L_8018405C:;
  {uint32_t ea=c->r[2]+0xFFFFBF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018405C
  {uint32_t ea=c->r[29]+0x00000798u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184060
  fcmp(c,0,c->f[1],c->f[0]); // 80184064
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80184068
  if (!crb(c,2)) { goto L_80184140; } // 8018406C
  c->r[3]=0u+0x00000001u; // 80184070
  goto L_80184144; // 80184074
L_80184078:;
  c->r[3]=c->r[30]|c->r[30]; // 80184078
  c->r[4]=c->r[31]+0x00000065u; // 8018407C
  c->lr=0x80184084u; f_8007CA34(c); // 80184080
  cmps(c,0,(int32_t)c->r[3],0); // 80184084
  if (!crb(c,2)) { goto L_801840C8; } // 80184088
  c->r[3]=c->r[30]|c->r[30]; // 8018408C
  c->r[4]=c->r[31]+0x00000084u; // 80184090
  c->lr=0x80184098u; f_8007CA34(c); // 80184094
  cmps(c,0,(int32_t)c->r[3],0); // 80184098
  if (!crb(c,2)) { goto L_801840C8; } // 8018409C
  c->r[3]=c->r[30]|c->r[30]; // 801840A0
  c->r[4]=c->r[31]+0x000000A3u; // 801840A4
  c->lr=0x801840ACu; f_8007CA34(c); // 801840A8
  cmps(c,0,(int32_t)c->r[3],0); // 801840AC
  if (!crb(c,2)) { goto L_801840C8; } // 801840B0
  c->r[3]=c->r[30]|c->r[30]; // 801840B4
  c->r[4]=c->r[31]+0x000000C2u; // 801840B8
  c->lr=0x801840C0u; f_8007CA34(c); // 801840BC
  cmps(c,0,(int32_t)c->r[3],0); // 801840C0
  if (crb(c,2)) { goto L_801840DC; } // 801840C4
L_801840C8:;
  c->r[0]=R32(c->r[29]+0x00000788u); // 801840C8
  cmps(c,0,(int32_t)c->r[0],1); // 801840CC
  if (!crb(c,2)) { goto L_80184140; } // 801840D0
  c->r[3]=0u+0x00000001u; // 801840D4
  goto L_80184144; // 801840D8
L_801840DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801840DC
  c->r[4]=c->r[31]+0x000000E1u; // 801840E0
  c->lr=0x801840E8u; f_8007CA34(c); // 801840E4
  cmps(c,0,(int32_t)c->r[3],0); // 801840E8
  if (!crb(c,2)) { goto L_8018412C; } // 801840EC
  c->r[3]=c->r[30]|c->r[30]; // 801840F0
  c->r[4]=c->r[31]+0x00000100u; // 801840F4
  c->lr=0x801840FCu; f_8007CA34(c); // 801840F8
  cmps(c,0,(int32_t)c->r[3],0); // 801840FC
  if (!crb(c,2)) { goto L_8018412C; } // 80184100
  c->r[3]=c->r[30]|c->r[30]; // 80184104
  c->r[4]=c->r[31]+0x0000011Fu; // 80184108
  c->lr=0x80184110u; f_8007CA34(c); // 8018410C
  cmps(c,0,(int32_t)c->r[3],0); // 80184110
  if (!crb(c,2)) { goto L_8018412C; } // 80184114
  c->r[3]=c->r[30]|c->r[30]; // 80184118
  c->r[4]=c->r[31]+0x0000013Eu; // 8018411C
  c->lr=0x80184124u; f_8007CA34(c); // 80184120
  cmps(c,0,(int32_t)c->r[3],0); // 80184124
  if (crb(c,2)) { goto L_80184140; } // 80184128
L_8018412C:;
  c->r[0]=R32(c->r[29]+0x00000788u); // 8018412C
  cmps(c,0,(int32_t)c->r[0],2); // 80184130
  if (crb(c,0)) { goto L_80184140; } // 80184134
  c->r[3]=0u+0x00000001u; // 80184138
  goto L_80184144; // 8018413C
L_80184140:;
  c->r[3]=0u+0x00000000u; // 80184140
L_80184144:;
  c->r[11]=c->r[1]+0x00000020u; // 80184144
  c->lr=0x8018414Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80184148
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018414C
  c->lr=c->r[0]; // 80184150
  c->r[1]=c->r[1]+0x00000020u; // 80184154
  return; // 80184158
}

// fn_8018415C
void f_8018415C(Ctx* __restrict c) {
  trace_call(0x8018415Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018415C
  c->r[0]=c->lr; // 80184160
  W32(c->r[1]+0x00000054u,c->r[0]); // 80184164
  c->r[11]=c->r[1]+0x00000050u; // 80184168
  c->lr=0x80184170u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018416C
  c->r[31]=c->r[1]|c->r[1]; // 80184170
  c->r[5]=R32(c->r[3]+0x00000434u); // 80184174
  c->r[30]=c->r[3]|c->r[3]; // 80184178
  c->r[4]=0u+0x00000000u; // 8018417C
  c->r[3]=c->r[5]+0x00000030u; // 80184180
  c->lr=0x80184188u; f_802D94E8(c); // 80184184
  c->r[5]=R32(c->r[30]+0x00000444u); // 80184188
  c->r[3]=c->r[30]|c->r[30]; // 8018418C
  c->r[4]=0u+0x00000000u; // 80184190
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80184194
  c->r[6]=R32(c->r[30]+0x00000444u); // 80184198
  c->r[5]=R32(c->r[30]+0x0000044Cu); // 8018419C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801841A0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801841A4
  c->lr=0x801841ACu; f_80186CC4(c); // 801841A8
  c->r[3]=c->r[30]|c->r[30]; // 801841AC
  c->r[4]=0u+0x00000000u; // 801841B0
  c->lr=0x801841B8u; f_80185A30(c); // 801841B4
  c->r[3]=c->r[30]|c->r[30]; // 801841B8
  c->r[4]=0u+0x00000002u; // 801841BC
  c->lr=0x801841C4u; f_80185A30(c); // 801841C0
  c->r[4]=0u+0x80690000u; // 801841C4
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801841C8
  c->r[4]=c->r[4]+0x00002220u; // 801841CC
  c->r[3]=c->r[30]+0x000005D4u; // 801841D0
  c->r[4]=c->r[4]+0x0000015Du; // 801841D4
  c->r[5]=0u+0x00000000u; // 801841D8
  c->lr=0x801841E0u; f_800E277C(c); // 801841DC
  c->r[3]=c->r[30]|c->r[30]; // 801841E0
  c->r[4]=0u+0x00000000u; // 801841E4
  c->lr=0x801841ECu; f_8005EE88(c); // 801841E8
  c->r[3]=c->r[30]|c->r[30]; // 801841EC
  c->r[4]=0u+0x00000000u; // 801841F0
  c->lr=0x801841F8u; f_8005E814(c); // 801841F4
  c->r[3]=c->r[30]+0x00000818u; // 801841F8
  c->lr=0x80184200u; f_8007ECBC(c); // 801841FC
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184200
  c->r[28]=c->r[3]|c->r[3]; // 80184204
  c->r[3]=c->r[31]+0x0000000Cu; // 80184208
  c->f[2]=c->f[1]; // 8018420C
  c->f[3]=c->f[1]; // 80184210
  c->lr=0x80184218u; f_8005FD70(c); // 80184214
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80184218
  c->r[29]=c->r[3]|c->r[3]; // 8018421C
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184220
  c->r[3]=c->r[31]+0x00000018u; // 80184224
  {uint32_t ea=c->r[2]+0xFFFFBF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80184228
  c->lr=0x80184230u; f_8005FD70(c); // 8018422C
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 80184230
  c->r[4]=c->r[3]|c->r[3]; // 80184234
  c->r[3]=c->r[28]|c->r[28]; // 80184238
  c->r[5]=c->r[29]|c->r[29]; // 8018423C
  c->r[12]=R32(c->r[12]+0x00000080u); // 80184240
  c->ctr=c->r[12]; // 80184244
  if (true) { c->lr=0x8018424Cu; dispatch(c,c->ctr); } // 80184248
  c->lr=0x80184250u; f_80182C0C(c); // 8018424C
  c->r[4]=c->r[3]|c->r[3]; // 80184250
  c->r[3]=c->r[30]|c->r[30]; // 80184254
  c->lr=0x8018425Cu; f_80062F4C(c); // 80184258
  c->r[0]=R8(c->r[30]+0x00000010u); // 8018425C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80184260
  c->r[3]=c->r[30]+c->r[0]; // 80184264
  c->r[28]=R32(c->r[3]+0x00000014u); // 80184268
  cmps(c,0,(int32_t)c->r[28],0); // 8018426C
  if (crb(c,2)) { goto L_80184298; } // 80184270
  c->r[29]=0u+0x00000000u; // 80184274
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 80184278
  W8(c->r[31]+0x00000008u,c->r[29]); // 8018427C
  c->lr=0x80184284u; f_80182C0C(c); // 80184280
  W32(c->r[28]+0x00000000u,c->r[3]); // 80184284
  c->r[0]=c->r[13]+0xFFFF8B90u; // 80184288
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018428C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80184290
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80184294
L_80184298:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80184298
  c->r[0]=0u+0x00000000u; // 8018429C
  c->r[3]=c->r[30]|c->r[30]; // 801842A0
  c->r[4]=c->r[28]|c->r[28]; // 801842A4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801842A8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801842AC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801842B0
  c->lr=0x801842B8u; f_8006306C(c); // 801842B4
  c->r[10]=c->r[31]|c->r[31]; // 801842B8
  c->r[11]=c->r[10]+0x00000050u; // 801842BC
  c->lr=0x801842C4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801842C0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801842C4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801842C8
  c->r[1]=c->r[10]|c->r[10]; // 801842CC
  c->lr=c->r[0]; // 801842D0
  return; // 801842D4
}

// fn_801842D8
void f_801842D8(Ctx* __restrict c) {
  trace_call(0x801842D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801842D8
  c->r[0]=c->lr; // 801842DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801842E0
  c->r[11]=c->r[1]+0x00000020u; // 801842E4
  c->lr=0x801842ECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801842E8
  c->r[5]=R32(c->r[3]+0x00000004u); // 801842EC
  c->r[4]=0u+0x80690000u; // 801842F0
  c->r[4]=c->r[4]+0x00002220u; // 801842F4
  c->r[29]=c->r[3]|c->r[3]; // 801842F8
  cmps(c,0,(int32_t)c->r[5],0); // 801842FC
  c->r[31]=c->r[4]+0x0000016Du; // 80184300
  c->r[30]=c->r[4]+0x0000017Cu; // 80184304
  if (crb(c,2)) { goto L_80184314; } // 80184308
  c->r[0]=R32(c->r[5]+0x00000008u); // 8018430C
  goto L_80184318; // 80184310
L_80184314:;
  c->r[0]=0u+0x00000000u; // 80184314
L_80184318:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184318
  if (!crb(c,2)) { goto L_8018438C; } // 8018431C
  c->r[4]=0u+0x00010000u; // 80184320
  c->r[3]=c->r[29]|c->r[29]; // 80184324
  c->r[4]=c->r[4]+0xFFFFC486u; // 80184328
  c->r[5]=0u+0x00000001u; // 8018432C
  c->lr=0x80184334u; f_80064744(c); // 80184330
  c->r[3]=c->r[29]+0x00000818u; // 80184334
  c->lr=0x8018433Cu; f_8007ECBC(c); // 80184338
  c->r[4]=0u+0x80690000u; // 8018433C
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184340
  c->r[4]=c->r[4]+0x00002220u; // 80184344
  {uint32_t ea=c->r[2]+0xFFFFBF38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184348
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[3]=c->ps1[3]=RF32(ea);} // 8018434C
  c->r[4]=c->r[4]+0x0000018Bu; // 80184350
  c->lr=0x80184358u; f_800FD198(c); // 80184354
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184358
  c->r[4]=c->r[31]|c->r[31]; // 8018435C
  c->r[3]=c->r[29]+0x000005D4u; // 80184360
  c->r[5]=0u+0x00000000u; // 80184364
  c->lr=0x8018436Cu; f_800E2300(c); // 80184368
  {uint32_t ea=c->r[2]+0xFFFFBF3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018436C
  c->r[3]=c->r[29]|c->r[29]; // 80184370
  {uint32_t ea=c->r[2]+0xFFFFBF40u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184374
  c->lr=0x8018437Cu; f_80185C98(c); // 80184378
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018437C
  c->r[0]=0u+0x00000001u; // 80184380
  {uint32_t ea=c->r[29]+0x00000798u; WF32(ea,c->f[0]);} // 80184384
  W8(c->r[29]+0x0000079Cu,c->r[0]); // 80184388
L_8018438C:;
  c->r[0]=R32(c->r[29]+0x000007ACu); // 8018438C
  cmps(c,0,(int32_t)c->r[0],2); // 80184390
  if (crb(c,2)) { goto L_801843A4; } // 80184394
  cmps(c,0,(int32_t)c->r[0],3); // 80184398
  if (crb(c,2)) { goto L_801843E4; } // 8018439C
  goto L_80184408; // 801843A0
L_801843A4:;
  c->r[4]=c->r[31]|c->r[31]; // 801843A4
  c->r[3]=c->r[29]+0x000005D4u; // 801843A8
  c->lr=0x801843B0u; f_800E2ACC(c); // 801843AC
  cmps(c,0,(int32_t)c->r[3],0); // 801843B0
  if (crb(c,2)) { goto L_80184408; } // 801843B4
  {uint32_t ea=c->r[2]+0xFFFFBF20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801843B8
  c->r[3]=c->r[29]+0x000005D4u; // 801843BC
  c->lr=0x801843C4u; f_800E2B50(c); // 801843C0
  cmps(c,0,(int32_t)c->r[3],0); // 801843C4
  if (crb(c,2)) { goto L_80184408; } // 801843C8
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801843CC
  c->r[4]=c->r[30]|c->r[30]; // 801843D0
  c->r[3]=c->r[29]+0x000005D4u; // 801843D4
  c->r[5]=0u+0x00000000u; // 801843D8
  c->lr=0x801843E0u; f_800E2300(c); // 801843DC
  goto L_80184408; // 801843E0
L_801843E4:;
  {uint32_t ea=c->r[2]+0xFFFFBF44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801843E4
  c->r[3]=c->r[29]+0x000005D4u; // 801843E8
  c->lr=0x801843F0u; f_800E2B50(c); // 801843EC
  cmps(c,0,(int32_t)c->r[3],0); // 801843F0
  if (crb(c,2)) { goto L_80184408; } // 801843F4
  c->r[3]=c->r[29]|c->r[29]; // 801843F8
  c->r[4]=0u+0x00000001u; // 801843FC
  c->r[5]=0u+0x00000000u; // 80184400
  c->lr=0x80184408u; f_80062748(c); // 80184404
L_80184408:;
  c->r[4]=c->r[31]|c->r[31]; // 80184408
  c->r[3]=c->r[29]+0x000005D4u; // 8018440C
  c->lr=0x80184414u; f_800E2ACC(c); // 80184410
  cmps(c,0,(int32_t)c->r[3],0); // 80184414
  if (crb(c,2)) { goto L_8018444C; } // 80184418
  {uint32_t ea=c->r[2]+0xFFFFBF48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018441C
  c->r[3]=c->r[29]+0x000005D4u; // 80184420
  c->lr=0x80184428u; f_800E2B50(c); // 80184424
  cmps(c,0,(int32_t)c->r[3],0); // 80184428
  if (crb(c,2)) { goto L_8018448C; } // 8018442C
  c->r[0]=0u+0x00000000u; // 80184430
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80184434
  c->r[3]=c->r[1]+0x0000000Cu; // 80184438
  c->lr=0x80184440u; f_800462D8(c); // 8018443C
  c->r[4]=0u+0x00000001u; // 80184440
  c->lr=0x80184448u; f_800EA1A0(c); // 80184444
  goto L_8018448C; // 80184448
L_8018444C:;
  c->r[4]=c->r[30]|c->r[30]; // 8018444C
  c->r[3]=c->r[29]+0x000005D4u; // 80184450
  c->lr=0x80184458u; f_800E2ACC(c); // 80184454
  cmps(c,0,(int32_t)c->r[3],0); // 80184458
  if (crb(c,2)) { goto L_8018448C; } // 8018445C
  {uint32_t ea=c->r[2]+0xFFFFBF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184460
  c->r[3]=c->r[29]+0x000005D4u; // 80184464
  c->lr=0x8018446Cu; f_800E2B50(c); // 80184468
  cmps(c,0,(int32_t)c->r[3],0); // 8018446C
  if (crb(c,2)) { goto L_8018448C; } // 80184470
  c->r[0]=0u+0x00000000u; // 80184474
  W8(c->r[1]+0x00000008u,c->r[0]); // 80184478
  c->r[3]=c->r[1]+0x00000008u; // 8018447C
  c->lr=0x80184484u; f_800462D8(c); // 80184480
  c->r[4]=0u+0x00000001u; // 80184484
  c->lr=0x8018448Cu; f_800EA1A0(c); // 80184488
L_8018448C:;
  c->r[3]=c->r[29]+0x00000354u; // 8018448C
  c->lr=0x80184494u; f_800667AC(c); // 80184490
  cmps(c,0,(int32_t)c->r[3],0); // 80184494
  if (crb(c,2)) { goto L_801844C8; } // 80184498
  c->r[3]=c->r[29]+0x00000354u; // 8018449C
  c->lr=0x801844A4u; f_800C9374(c); // 801844A0
  c->r[0]=c->r[3]+0x00000000u; // 801844A4
  cmpu(c,0,c->r[0],0x0000C486u); // 801844A8
  if (!crb(c,2)) { goto L_801844C8; } // 801844AC
  c->r[3]=c->r[29]|c->r[29]; // 801844B0
  c->lr=0x801844B8u; f_80186EBC(c); // 801844B4
  c->r[4]=c->r[3]|c->r[3]; // 801844B8
  c->r[3]=c->r[29]|c->r[29]; // 801844BC
  c->r[5]=0u+0x00000001u; // 801844C0
  c->lr=0x801844C8u; f_80064744(c); // 801844C4
L_801844C8:;
  c->r[3]=c->r[29]+0x000005D4u; // 801844C8
  c->lr=0x801844D0u; f_800E2B1C(c); // 801844CC
  cmps(c,0,(int32_t)c->r[3],0); // 801844D0
  if (crb(c,2)) { goto L_801844E4; } // 801844D4
  c->r[3]=c->r[29]|c->r[29]; // 801844D8
  c->r[4]=0u+0xFFFFFFFFu; // 801844DC
  c->lr=0x801844E4u; f_801864A0(c); // 801844E0
L_801844E4:;
  c->r[11]=c->r[1]+0x00000020u; // 801844E4
  c->lr=0x801844ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801844E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801844EC
  c->lr=c->r[0]; // 801844F0
  c->r[1]=c->r[1]+0x00000020u; // 801844F4
  return; // 801844F8
}

// fn_801844FC
void f_801844FC(Ctx* __restrict c) {
  trace_call(0x801844FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801844FC
  c->r[0]=c->lr; // 80184500
  W32(c->r[1]+0x00000024u,c->r[0]); // 80184504
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80184508
  c->r[31]=c->r[3]|c->r[3]; // 8018450C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80184510
  cmps(c,0,(int32_t)c->r[4],0); // 80184514
  if (crb(c,2)) { goto L_80184524; } // 80184518
  c->r[0]=R32(c->r[4]+0x00000008u); // 8018451C
  goto L_80184528; // 80184520
L_80184524:;
  c->r[0]=0u+0x00000000u; // 80184524
L_80184528:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184528
  if (!crb(c,2)) { goto L_80184598; } // 8018452C
  c->r[3]=c->r[31]|c->r[31]; // 80184530
  c->lr=0x80184538u; f_80186EBC(c); // 80184534
  c->r[4]=c->r[3]|c->r[3]; // 80184538
  c->r[3]=c->r[31]|c->r[31]; // 8018453C
  c->r[5]=0u+0x00000001u; // 80184540
  c->lr=0x80184548u; f_80064744(c); // 80184544
  c->r[4]=0u+0x80690000u; // 80184548
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018454C
  c->r[4]=c->r[4]+0x00002220u; // 80184550
  c->r[3]=c->r[31]+0x000005D4u; // 80184554
  c->r[4]=c->r[4]+0x000001A2u; // 80184558
  c->r[5]=0u+0x00000000u; // 8018455C
  c->lr=0x80184564u; f_800E2300(c); // 80184560
  c->lr=0x80184568u; f_803B220C(c); // 80184564
  c->r[3]=c->r[3]^0x80000000u; // 80184568
  c->r[0]=0u+0x43300000u; // 8018456C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80184570
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[3]=RF64(ea);} // 80184574
  W32(c->r[1]+0x00000008u,c->r[0]); // 80184578
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018457C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80184580
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184584
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80184588
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8018458C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 80184590
  {uint32_t ea=c->r[31]+0x0000055Cu; WF32(ea,c->f[0]);} // 80184594
L_80184598:;
  {uint32_t ea=c->r[31]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80184598
  {uint32_t ea=c->r[31]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018459C
  fcmp(c,0,c->f[0],c->f[1]); // 801845A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801845A4
  if (!crb(c,2)) { goto L_801845B8; } // 801845A8
  c->r[3]=c->r[31]|c->r[31]; // 801845AC
  c->r[4]=0u+0xFFFFFFFFu; // 801845B0
  c->lr=0x801845B8u; f_801864A0(c); // 801845B4
L_801845B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801845B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801845BC
  c->lr=c->r[0]; // 801845C0
  c->r[1]=c->r[1]+0x00000020u; // 801845C4
  return; // 801845C8
}

// fn_801845CC
void f_801845CC(Ctx* __restrict c) {
  trace_call(0x801845CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801845CC
  c->r[0]=c->lr; // 801845D0
  c->r[4]=0u+0x80690000u; // 801845D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801845D8
  c->r[4]=c->r[4]+0x00001900u; // 801845DC
  c->r[0]=0u+0x00000010u; // 801845E0
  c->r[6]=c->r[1]+0x00000004u; // 801845E4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801845E8
  c->r[31]=c->r[3]|c->r[3]; // 801845EC
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801845F0
  c->ctr=c->r[0]; // 801845F4
L_801845F8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801845F8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801845FC
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184600
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184604
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801845F8; } // 80184608
  c->r[3]=R32(c->r[3]+0x00000004u); // 8018460C
  cmps(c,0,(int32_t)c->r[3],0); // 80184610
  if (crb(c,2)) { goto L_80184620; } // 80184614
  c->r[0]=R32(c->r[3]+0x00000008u); // 80184618
  goto L_80184624; // 8018461C
L_80184620:;
  c->r[0]=0u+0x00000000u; // 80184620
L_80184624:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184624
  if (!crb(c,2)) { goto L_80184660; } // 80184628
  c->r[4]=0u+0x00010000u; // 8018462C
  c->r[3]=c->r[31]|c->r[31]; // 80184630
  c->r[4]=c->r[4]+0xFFFFC35Au; // 80184634
  c->r[5]=0u+0x00000001u; // 80184638
  c->lr=0x80184640u; f_80064744(c); // 8018463C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184640
  c->r[4]=c->r[1]+0x00000008u; // 80184644
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184648
  c->r[3]=c->r[31]+0x000005D4u; // 8018464C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184650
  c->r[5]=0u+0x00000000u; // 80184654
  c->r[4]=c->r[4]+c->r[0]; // 80184658
  c->lr=0x80184660u; f_800E2300(c); // 8018465C
L_80184660:;
  c->r[3]=c->r[31]+0x00000354u; // 80184660
  c->lr=0x80184668u; f_800667AC(c); // 80184664
  cmps(c,0,(int32_t)c->r[3],0); // 80184668
  if (crb(c,2)) { goto L_8018467C; } // 8018466C
  c->r[3]=c->r[31]|c->r[31]; // 80184670
  c->r[4]=0u+0xFFFFFFFFu; // 80184674
  c->lr=0x8018467Cu; f_801864A0(c); // 80184678
L_8018467C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018467C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80184680
  c->lr=c->r[0]; // 80184684
  c->r[1]=c->r[1]+0x00000090u; // 80184688
  return; // 8018468C
}

// fn_80184690
void f_80184690(Ctx* __restrict c) {
  trace_call(0x80184690u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184690
  c->r[0]=c->lr; // 80184694
  c->r[4]=0u+0x80690000u; // 80184698
  W32(c->r[1]+0x00000094u,c->r[0]); // 8018469C
  c->r[4]=c->r[4]+0x00001980u; // 801846A0
  c->r[0]=0u+0x00000010u; // 801846A4
  c->r[6]=c->r[1]+0x00000004u; // 801846A8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801846AC
  c->r[31]=c->r[3]|c->r[3]; // 801846B0
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801846B4
  c->ctr=c->r[0]; // 801846B8
L_801846BC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801846BC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801846C0
  W32(c->r[6]+0x00000004u,c->r[4]); // 801846C4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801846C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801846BC; } // 801846CC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801846D0
  cmps(c,0,(int32_t)c->r[3],0); // 801846D4
  if (crb(c,2)) { goto L_801846E4; } // 801846D8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801846DC
  goto L_801846E8; // 801846E0
L_801846E4:;
  c->r[0]=0u+0x00000000u; // 801846E4
L_801846E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801846E8
  if (!crb(c,2)) { goto L_80184728; } // 801846EC
  c->r[3]=c->r[31]|c->r[31]; // 801846F0
  c->lr=0x801846F8u; f_80186EBC(c); // 801846F4
  c->r[4]=c->r[3]|c->r[3]; // 801846F8
  c->r[3]=c->r[31]|c->r[31]; // 801846FC
  c->r[5]=0u+0x00000001u; // 80184700
  c->lr=0x80184708u; f_80064744(c); // 80184704
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184708
  c->r[4]=c->r[1]+0x00000008u; // 8018470C
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184710
  c->r[3]=c->r[31]+0x000005D4u; // 80184714
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184718
  c->r[5]=0u+0x00000000u; // 8018471C
  c->r[4]=c->r[4]+c->r[0]; // 80184720
  c->lr=0x80184728u; f_800E2300(c); // 80184724
L_80184728:;
  {uint32_t ea=c->r[2]+0xFFFFBF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80184728
  c->r[3]=c->r[31]+0x000005D4u; // 8018472C
  c->lr=0x80184734u; f_800E2B50(c); // 80184730
  cmps(c,0,(int32_t)c->r[3],0); // 80184734
  if (crb(c,2)) { goto L_80184750; } // 80184738
  c->r[4]=0u+0x00010000u; // 8018473C
  c->r[3]=c->r[31]|c->r[31]; // 80184740
  c->r[4]=c->r[4]+0xFFFFC365u; // 80184744
  c->r[5]=0u+0x00000001u; // 80184748
  c->lr=0x80184750u; f_80064744(c); // 8018474C
L_80184750:;
  c->r[3]=c->r[31]+0x00000354u; // 80184750
  c->lr=0x80184758u; f_800C9374(c); // 80184754
  c->r[0]=c->r[3]+0x00000000u; // 80184758
  cmpu(c,0,c->r[0],0x0000C365u); // 8018475C
  if (!crb(c,2)) { goto L_80184790; } // 80184760
  c->r[3]=c->r[31]+0x00000354u; // 80184764
  c->lr=0x8018476Cu; f_800667AC(c); // 80184768
  cmps(c,0,(int32_t)c->r[3],0); // 8018476C
  if (crb(c,2)) { goto L_80184790; } // 80184770
  c->r[0]=0u+0x00000000u; // 80184774
  W8(c->r[31]+0x00000785u,c->r[0]); // 80184778
  c->r[3]=c->r[31]|c->r[31]; // 8018477C
  c->lr=0x80184784u; f_80186B78(c); // 80184780
  c->r[3]=c->r[31]|c->r[31]; // 80184784
  c->r[4]=0u+0xFFFFFFFFu; // 80184788
  c->lr=0x80184790u; f_801864A0(c); // 8018478C
L_80184790:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80184790
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80184794
  c->lr=c->r[0]; // 80184798
  c->r[1]=c->r[1]+0x00000090u; // 8018479C
  return; // 801847A0
}

// fn_801847A4
void f_801847A4(Ctx* __restrict c) {
  trace_call(0x801847A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801847A4
  c->r[0]=c->lr; // 801847A8
  c->r[4]=0u+0x80690000u; // 801847AC
  W32(c->r[1]+0x00000094u,c->r[0]); // 801847B0
  c->r[4]=c->r[4]+0x00001A00u; // 801847B4
  c->r[0]=0u+0x00000010u; // 801847B8
  c->r[6]=c->r[1]+0x00000004u; // 801847BC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801847C0
  c->r[31]=c->r[3]|c->r[3]; // 801847C4
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801847C8
  c->ctr=c->r[0]; // 801847CC
L_801847D0:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801847D0
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801847D4
  W32(c->r[6]+0x00000004u,c->r[4]); // 801847D8
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801847DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801847D0; } // 801847E0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801847E4
  cmps(c,0,(int32_t)c->r[3],0); // 801847E8
  if (crb(c,2)) { goto L_801847F8; } // 801847EC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801847F0
  goto L_801847FC; // 801847F4
L_801847F8:;
  c->r[0]=0u+0x00000000u; // 801847F8
L_801847FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801847FC
  if (!crb(c,2)) { goto L_8018483C; } // 80184800
  c->r[3]=c->r[31]|c->r[31]; // 80184804
  c->lr=0x8018480Cu; f_80186EBC(c); // 80184808
  c->r[4]=c->r[3]|c->r[3]; // 8018480C
  c->r[3]=c->r[31]|c->r[31]; // 80184810
  c->r[5]=0u+0x00000001u; // 80184814
  c->lr=0x8018481Cu; f_80064744(c); // 80184818
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 8018481C
  c->r[4]=c->r[1]+0x00000008u; // 80184820
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184824
  c->r[3]=c->r[31]+0x000005D4u; // 80184828
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018482C
  c->r[5]=0u+0x00000000u; // 80184830
  c->r[4]=c->r[4]+c->r[0]; // 80184834
  c->lr=0x8018483Cu; f_800E2300(c); // 80184838
L_8018483C:;
  {uint32_t ea=c->r[2]+0xFFFFBF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018483C
  c->r[3]=c->r[31]+0x000005D4u; // 80184840
  c->lr=0x80184848u; f_800E2B50(c); // 80184844
  cmps(c,0,(int32_t)c->r[3],0); // 80184848
  if (crb(c,2)) { goto L_80184864; } // 8018484C
  c->r[4]=0u+0x00010000u; // 80184850
  c->r[3]=c->r[31]|c->r[31]; // 80184854
  c->r[4]=c->r[4]+0xFFFFC364u; // 80184858
  c->r[5]=0u+0x00000001u; // 8018485C
  c->lr=0x80184864u; f_80064744(c); // 80184860
L_80184864:;
  c->r[3]=c->r[31]+0x00000354u; // 80184864
  c->lr=0x8018486Cu; f_800C9374(c); // 80184868
  c->r[0]=c->r[3]+0x00000000u; // 8018486C
  cmpu(c,0,c->r[0],0x0000C364u); // 80184870
  if (!crb(c,2)) { goto L_8018489C; } // 80184874
  c->r[3]=c->r[31]+0x00000354u; // 80184878
  c->lr=0x80184880u; f_800667AC(c); // 8018487C
  cmps(c,0,(int32_t)c->r[3],0); // 80184880
  if (crb(c,2)) { goto L_8018489C; } // 80184884
  c->r[3]=c->r[31]|c->r[31]; // 80184888
  c->lr=0x80184890u; f_80186BD0(c); // 8018488C
  c->r[3]=c->r[31]|c->r[31]; // 80184890
  c->r[4]=0u+0xFFFFFFFFu; // 80184894
  c->lr=0x8018489Cu; f_801864A0(c); // 80184898
L_8018489C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018489C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801848A0
  c->lr=c->r[0]; // 801848A4
  c->r[1]=c->r[1]+0x00000090u; // 801848A8
  return; // 801848AC
}

// fn_801848B0
void f_801848B0(Ctx* __restrict c) {
  trace_call(0x801848B0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801848B0
  c->r[0]=c->lr; // 801848B4
  c->r[4]=0u+0x80690000u; // 801848B8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801848BC
  c->r[4]=c->r[4]+0x00001A80u; // 801848C0
  c->r[0]=0u+0x00000010u; // 801848C4
  c->r[6]=c->r[1]+0x00000084u; // 801848C8
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801848CC
  c->r[31]=c->r[3]|c->r[3]; // 801848D0
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801848D4
  c->ctr=c->r[0]; // 801848D8
L_801848DC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801848DC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801848E0
  W32(c->r[6]+0x00000004u,c->r[4]); // 801848E4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801848E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801848DC; } // 801848EC
  c->r[4]=0u+0x80690000u; // 801848F0
  c->r[0]=0u+0x00000010u; // 801848F4
  c->r[4]=c->r[4]+0x00001B00u; // 801848F8
  c->r[6]=c->r[1]+0x00000004u; // 801848FC
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184900
  c->ctr=c->r[0]; // 80184904
L_80184908:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184908
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8018490C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184910
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184908; } // 80184918
  c->r[3]=R32(c->r[3]+0x00000004u); // 8018491C
  cmps(c,0,(int32_t)c->r[3],0); // 80184920
  if (crb(c,2)) { goto L_80184930; } // 80184924
  c->r[0]=R32(c->r[3]+0x00000008u); // 80184928
  goto L_80184934; // 8018492C
L_80184930:;
  c->r[0]=0u+0x00000000u; // 80184930
L_80184934:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184934
  if (!crb(c,2)) { goto L_80184978; } // 80184938
  c->r[4]=0u+0x00010000u; // 8018493C
  c->r[3]=c->r[31]|c->r[31]; // 80184940
  c->r[4]=c->r[4]+0xFFFFC3F0u; // 80184944
  c->r[5]=0u+0x00000001u; // 80184948
  c->lr=0x80184950u; f_80064744(c); // 8018494C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184950
  c->r[4]=c->r[1]+0x00000088u; // 80184954
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184958
  c->r[3]=c->r[31]+0x000005D4u; // 8018495C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184960
  c->r[5]=0u+0x00000000u; // 80184964
  c->r[4]=c->r[4]+c->r[0]; // 80184968
  c->lr=0x80184970u; f_800E2300(c); // 8018496C
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184970
  {uint32_t ea=c->r[31]+0x00000780u; WF32(ea,c->f[0]);} // 80184974
L_80184978:;
  c->r[3]=c->r[31]+0x00000354u; // 80184978
  c->lr=0x80184980u; f_800C9374(c); // 8018497C
  c->r[0]=c->r[3]+0x00000000u; // 80184980
  cmpu(c,0,c->r[0],0x0000C3F0u); // 80184984
  if (!crb(c,2)) { goto L_801849E0; } // 80184988
  c->r[3]=R32(c->r[31]+0x00000434u); // 8018498C
  c->r[4]=0u+0x00000004u; // 80184990
  c->r[3]=c->r[3]+0x00000030u; // 80184994
  c->lr=0x8018499Cu; f_802D94E8(c); // 80184998
  {uint32_t ea=c->r[31]+0x00000780u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018499C
  fcmp(c,0,c->f[1],c->f[0]); // 801849A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801849A4
  if (!crb(c,2)) { goto L_801849E0; } // 801849A8
  c->r[4]=0u+0x00010000u; // 801849AC
  c->r[3]=c->r[31]|c->r[31]; // 801849B0
  c->r[4]=c->r[4]+0xFFFFC3F1u; // 801849B4
  c->r[5]=0u+0x00000001u; // 801849B8
  c->lr=0x801849C0u; f_80064744(c); // 801849BC
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801849C0
  c->r[4]=c->r[1]+0x00000008u; // 801849C4
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801849C8
  c->r[3]=c->r[31]+0x000005D4u; // 801849CC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801849D0
  c->r[5]=0u+0x00000000u; // 801849D4
  c->r[4]=c->r[4]+c->r[0]; // 801849D8
  c->lr=0x801849E0u; f_800E2300(c); // 801849DC
L_801849E0:;
  c->r[3]=c->r[31]+0x00000354u; // 801849E0
  c->lr=0x801849E8u; f_800667AC(c); // 801849E4
  cmps(c,0,(int32_t)c->r[3],0); // 801849E8
  if (crb(c,2)) { goto L_801849FC; } // 801849EC
  c->r[3]=c->r[31]|c->r[31]; // 801849F0
  c->r[4]=0u+0xFFFFFFFFu; // 801849F4
  c->lr=0x801849FCu; f_801864A0(c); // 801849F8
L_801849FC:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801849FC
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80184A00
  c->lr=c->r[0]; // 80184A04
  c->r[1]=c->r[1]+0x00000110u; // 80184A08
  return; // 80184A0C
}

// fn_80184A10
void f_80184A10(Ctx* __restrict c) {
  trace_call(0x80184A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184A10
  c->r[0]=c->lr; // 80184A14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80184A18
  c->r[11]=c->r[1]+0x00000020u; // 80184A1C
  c->lr=0x80184A24u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80184A20
  c->r[5]=R32(c->r[3]+0x00000004u); // 80184A24
  c->r[4]=0u+0x80690000u; // 80184A28
  c->r[4]=c->r[4]+0x00002220u; // 80184A2C
  c->r[28]=c->r[3]|c->r[3]; // 80184A30
  cmps(c,0,(int32_t)c->r[5],0); // 80184A34
  c->r[30]=c->r[4]+0x000001B1u; // 80184A38
  c->r[29]=c->r[4]+0x000001C0u; // 80184A3C
  if (crb(c,2)) { goto L_80184A4C; } // 80184A40
  c->r[0]=R32(c->r[5]+0x00000008u); // 80184A44
  goto L_80184A50; // 80184A48
L_80184A4C:;
  c->r[0]=0u+0x00000000u; // 80184A4C
L_80184A50:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184A50
  if (!crb(c,2)) { goto L_80184A94; } // 80184A54
  c->r[4]=0u+0x00010000u; // 80184A58
  c->r[3]=c->r[28]|c->r[28]; // 80184A5C
  c->r[4]=c->r[4]+0xFFFFC3E6u; // 80184A60
  c->r[5]=0u+0x00000001u; // 80184A64
  c->lr=0x80184A6Cu; f_80064744(c); // 80184A68
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184A6C
  c->r[4]=c->r[30]|c->r[30]; // 80184A70
  c->r[3]=c->r[28]+0x000005D4u; // 80184A74
  c->r[5]=0u+0x00000000u; // 80184A78
  c->lr=0x80184A80u; f_800E2300(c); // 80184A7C
  c->r[3]=c->r[28]|c->r[28]; // 80184A80
  c->r[4]=0u+0x00000003u; // 80184A84
  c->lr=0x80184A8Cu; f_801860DC(c); // 80184A88
  c->r[3]=c->r[28]+0x000007B0u; // 80184A8C
  c->lr=0x80184A94u; f_8018194C(c); // 80184A90
L_80184A94:;
  c->r[3]=c->r[28]+0x00000354u; // 80184A94
  c->lr=0x80184A9Cu; f_800C9374(c); // 80184A98
  c->r[4]=c->r[3]+0xFFFF0000u; // 80184A9C
  c->r[31]=c->r[3]|c->r[3]; // 80184AA0
  c->r[0]=c->r[4]+0x00003CB0u; // 80184AA4
  cmpu(c,0,c->r[0],0x00000001u); // 80184AA8
  if (crb(c,1)) { goto L_80184AC8; } // 80184AAC
  c->r[0]=R8(c->r[28]+0x00000809u); // 80184AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80184AB4
  if (crb(c,2)) { goto L_80184AC8; } // 80184AB8
  c->r[3]=c->r[28]|c->r[28]; // 80184ABC
  c->r[4]=0u+0xFFFFFFFFu; // 80184AC0
  c->lr=0x80184AC8u; f_801864A0(c); // 80184AC4
L_80184AC8:;
  c->r[0]=c->r[31]+0x00000000u; // 80184AC8
  cmpu(c,0,c->r[0],0x0000C3E6u); // 80184ACC
  if (!crb(c,2)) { goto L_80184B78; } // 80184AD0
  {uint32_t ea=c->r[2]+0xFFFFBF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184AD4
  c->r[3]=c->r[28]|c->r[28]; // 80184AD8
  c->lr=0x80184AE0u; f_80064A68(c); // 80184ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80184AE0
  if (crb(c,2)) { goto L_80184B0C; } // 80184AE4
  c->r[3]=c->r[28]+0x000007D8u; // 80184AE8
  c->lr=0x80184AF0u; f_8007ECBC(c); // 80184AEC
  c->r[30]=c->r[3]|c->r[3]; // 80184AF0
  c->r[3]=c->r[28]+0x000007B0u; // 80184AF4
  c->lr=0x80184AFCu; f_80181FD8(c); // 80184AF8
  c->r[4]=c->r[3]|c->r[3]; // 80184AFC
  c->r[3]=c->r[30]|c->r[30]; // 80184B00
  c->lr=0x80184B08u; f_80181790(c); // 80184B04
  goto L_80184B78; // 80184B08
L_80184B0C:;
  {uint32_t ea=c->r[2]+0xFFFFBF54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184B0C
  c->r[3]=c->r[28]|c->r[28]; // 80184B10
  c->lr=0x80184B18u; f_80064A68(c); // 80184B14
  cmps(c,0,(int32_t)c->r[3],0); // 80184B18
  if (crb(c,2)) { goto L_80184B44; } // 80184B1C
  c->r[3]=c->r[28]+0x000007E0u; // 80184B20
  c->lr=0x80184B28u; f_8007ECBC(c); // 80184B24
  c->r[30]=c->r[3]|c->r[3]; // 80184B28
  c->r[3]=c->r[28]+0x000007B0u; // 80184B2C
  c->lr=0x80184B34u; f_80181FD8(c); // 80184B30
  c->r[4]=c->r[3]|c->r[3]; // 80184B34
  c->r[3]=c->r[30]|c->r[30]; // 80184B38
  c->lr=0x80184B40u; f_80181790(c); // 80184B3C
  goto L_80184B78; // 80184B40
L_80184B44:;
  {uint32_t ea=c->r[2]+0xFFFFBF58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184B44
  c->r[3]=c->r[28]|c->r[28]; // 80184B48
  c->lr=0x80184B50u; f_80064A68(c); // 80184B4C
  cmps(c,0,(int32_t)c->r[3],0); // 80184B50
  if (crb(c,2)) { goto L_80184B78; } // 80184B54
  c->r[3]=c->r[28]+0x000007E8u; // 80184B58
  c->lr=0x80184B60u; f_8007ECBC(c); // 80184B5C
  c->r[30]=c->r[3]|c->r[3]; // 80184B60
  c->r[3]=c->r[28]+0x000007B0u; // 80184B64
  c->lr=0x80184B6Cu; f_80181FD8(c); // 80184B68
  c->r[4]=c->r[3]|c->r[3]; // 80184B6C
  c->r[3]=c->r[30]|c->r[30]; // 80184B70
  c->lr=0x80184B78u; f_80181790(c); // 80184B74
L_80184B78:;
  c->r[3]=c->r[28]+0x00000354u; // 80184B78
  c->lr=0x80184B80u; f_800667AC(c); // 80184B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80184B80
  if (crb(c,2)) { goto L_80184BE4; } // 80184B84
  c->r[0]=c->r[31]+0x00000000u; // 80184B88
  cmpu(c,0,c->r[0],0x0000C3E6u); // 80184B8C
  if (crb(c,2)) { goto L_80184BA0; } // 80184B90
  cmpu(c,0,c->r[0],0x0000C3E7u); // 80184B94
  if (crb(c,2)) { goto L_80184BCC; } // 80184B98
  goto L_80184BE4; // 80184B9C
L_80184BA0:;
  c->r[4]=0u+0x00010000u; // 80184BA0
  c->r[3]=c->r[28]|c->r[28]; // 80184BA4
  c->r[4]=c->r[4]+0xFFFFC3E7u; // 80184BA8
  c->r[5]=0u+0x00000001u; // 80184BAC
  c->lr=0x80184BB4u; f_80064744(c); // 80184BB0
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184BB4
  c->r[4]=c->r[29]|c->r[29]; // 80184BB8
  c->r[3]=c->r[28]+0x000005D4u; // 80184BBC
  c->r[5]=0u+0x00000000u; // 80184BC0
  c->lr=0x80184BC8u; f_800E2300(c); // 80184BC4
  goto L_80184BE4; // 80184BC8
L_80184BCC:;
  c->r[3]=c->r[28]|c->r[28]; // 80184BCC
  c->lr=0x80184BD4u; f_80186EBC(c); // 80184BD0
  c->r[4]=c->r[3]|c->r[3]; // 80184BD4
  c->r[3]=c->r[28]|c->r[28]; // 80184BD8
  c->r[5]=0u+0x00000001u; // 80184BDC
  c->lr=0x80184BE4u; f_80064744(c); // 80184BE0
L_80184BE4:;
  c->r[11]=c->r[1]+0x00000020u; // 80184BE4
  c->lr=0x80184BECu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80184BE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80184BEC
  c->lr=c->r[0]; // 80184BF0
  c->r[1]=c->r[1]+0x00000020u; // 80184BF4
  return; // 80184BF8
}

// fn_80184BFC
void f_80184BFC(Ctx* __restrict c) {
  trace_call(0x80184BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184BFC
  c->r[0]=c->lr; // 80184C00
  c->r[4]=0u+0x80690000u; // 80184C04
  W32(c->r[1]+0x00000114u,c->r[0]); // 80184C08
  c->r[4]=c->r[4]+0x00001B80u; // 80184C0C
  c->r[0]=0u+0x00000010u; // 80184C10
  c->r[6]=c->r[1]+0x00000084u; // 80184C14
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 80184C18
  c->r[31]=c->r[3]|c->r[3]; // 80184C1C
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184C20
  c->ctr=c->r[0]; // 80184C24
L_80184C28:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184C28
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184C2C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184C30
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184C34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184C28; } // 80184C38
  c->r[4]=0u+0x80690000u; // 80184C3C
  c->r[0]=0u+0x00000010u; // 80184C40
  c->r[4]=c->r[4]+0x00001C00u; // 80184C44
  c->r[6]=c->r[1]+0x00000004u; // 80184C48
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184C4C
  c->ctr=c->r[0]; // 80184C50
L_80184C54:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184C54
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184C58
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184C5C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184C60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184C54; } // 80184C64
  c->r[3]=R32(c->r[3]+0x00000004u); // 80184C68
  cmps(c,0,(int32_t)c->r[3],0); // 80184C6C
  if (crb(c,2)) { goto L_80184C7C; } // 80184C70
  c->r[0]=R32(c->r[3]+0x00000008u); // 80184C74
  goto L_80184C80; // 80184C78
L_80184C7C:;
  c->r[0]=0u+0x00000000u; // 80184C7C
L_80184C80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184C80
  if (!crb(c,2)) { goto L_80184CC4; } // 80184C84
  c->r[4]=0u+0x00010000u; // 80184C88
  c->r[3]=c->r[31]|c->r[31]; // 80184C8C
  c->r[4]=c->r[4]+0xFFFFC3B4u; // 80184C90
  c->r[5]=0u+0x00000001u; // 80184C94
  c->lr=0x80184C9Cu; f_80064744(c); // 80184C98
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184C9C
  c->r[4]=c->r[1]+0x00000088u; // 80184CA0
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184CA4
  c->r[3]=c->r[31]+0x000005D4u; // 80184CA8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184CAC
  c->r[5]=0u+0x00000000u; // 80184CB0
  c->r[4]=c->r[4]+c->r[0]; // 80184CB4
  c->lr=0x80184CBCu; f_800E2300(c); // 80184CB8
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184CBC
  {uint32_t ea=c->r[31]+0x00000780u; WF32(ea,c->f[0]);} // 80184CC0
L_80184CC4:;
  c->r[3]=c->r[31]+0x00000354u; // 80184CC4
  c->lr=0x80184CCCu; f_800C9374(c); // 80184CC8
  c->r[0]=c->r[3]+0x00000000u; // 80184CCC
  cmpu(c,0,c->r[0],0x0000C3B4u); // 80184CD0
  if (!crb(c,2)) { goto L_80184D7C; } // 80184CD4
  {uint32_t ea=c->r[2]+0xFFFFBF5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80184CD8
  c->r[3]=c->r[31]|c->r[31]; // 80184CDC
  c->lr=0x80184CE4u; f_80064A68(c); // 80184CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80184CE4
  if (crb(c,2)) { goto L_80184D44; } // 80184CE8
  c->r[3]=R32(c->r[31]+0x00000434u); // 80184CEC
  c->r[4]=0u+0x00000001u; // 80184CF0
  c->r[3]=c->r[3]+0x00000030u; // 80184CF4
  c->lr=0x80184CFCu; f_802D94E8(c); // 80184CF8
  {uint32_t ea=c->r[31]+0x00000780u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184CFC
  fcmp(c,0,c->f[1],c->f[0]); // 80184D00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80184D04
  if (!crb(c,2)) { goto L_80184D44; } // 80184D08
  c->r[4]=0u+0x00010000u; // 80184D0C
  c->r[3]=c->r[31]|c->r[31]; // 80184D10
  c->r[4]=c->r[4]+0xFFFFC3B5u; // 80184D14
  c->r[5]=0u+0x00000001u; // 80184D18
  c->lr=0x80184D20u; f_80064744(c); // 80184D1C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184D20
  c->r[4]=c->r[1]+0x00000008u; // 80184D24
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184D28
  c->r[3]=c->r[31]+0x000005D4u; // 80184D2C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184D30
  c->r[5]=0u+0x00000000u; // 80184D34
  c->r[4]=c->r[4]+c->r[0]; // 80184D38
  c->lr=0x80184D40u; f_800E2300(c); // 80184D3C
  goto L_80184D7C; // 80184D40
L_80184D44:;
  {uint32_t ea=c->r[2]+0xFFFFBF60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184D44
  c->r[3]=c->r[31]|c->r[31]; // 80184D48
  c->lr=0x80184D50u; f_80064A68(c); // 80184D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80184D50
  if (crb(c,2)) { goto L_80184D7C; } // 80184D54
  c->r[3]=c->r[31]|c->r[31]; // 80184D58
  c->r[4]=0u+0x00000002u; // 80184D5C
  c->r[5]=0u+0x00000000u; // 80184D60
  c->lr=0x80184D68u; f_80062748(c); // 80184D64
  c->r[0]=R8(c->r[31]+0x00000784u); // 80184D68
  cmps(c,0,(int32_t)c->r[0],0); // 80184D6C
  if (!crb(c,2)) { goto L_80184D7C; } // 80184D70
  c->r[0]=0u+0x00000001u; // 80184D74
  W8(c->r[31]+0x00000785u,c->r[0]); // 80184D78
L_80184D7C:;
  c->r[3]=c->r[31]+0x00000354u; // 80184D7C
  c->lr=0x80184D84u; f_800667AC(c); // 80184D80
  cmps(c,0,(int32_t)c->r[3],0); // 80184D84
  if (crb(c,2)) { goto L_80184D98; } // 80184D88
  c->r[3]=c->r[31]|c->r[31]; // 80184D8C
  c->r[4]=0u+0xFFFFFFFFu; // 80184D90
  c->lr=0x80184D98u; f_801864A0(c); // 80184D94
L_80184D98:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 80184D98
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80184D9C
  c->lr=c->r[0]; // 80184DA0
  c->r[1]=c->r[1]+0x00000110u; // 80184DA4
  return; // 80184DA8
}

// fn_80184DAC
void f_80184DAC(Ctx* __restrict c) {
  trace_call(0x80184DACu);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184DAC
  c->r[0]=c->lr; // 80184DB0
  c->r[7]=0u+0x80690000u; // 80184DB4
  W32(c->r[1]+0x00000214u,c->r[0]); // 80184DB8
  c->r[7]=c->r[7]+0x000018E0u; // 80184DBC
  c->r[4]=c->r[7]+0x000003A0u; // 80184DC0
  c->r[0]=0u+0x00000010u; // 80184DC4
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 80184DC8
  c->r[31]=c->r[3]|c->r[3]; // 80184DCC
  c->r[6]=c->r[1]+0x00000184u; // 80184DD0
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184DD4
  c->ctr=c->r[0]; // 80184DD8
L_80184DDC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184DDC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184DE0
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184DE4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184DE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184DDC; } // 80184DEC
  c->r[4]=c->r[7]+0x00000420u; // 80184DF0
  c->r[0]=0u+0x00000010u; // 80184DF4
  c->r[6]=c->r[1]+0x00000104u; // 80184DF8
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184DFC
  c->ctr=c->r[0]; // 80184E00
L_80184E04:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184E04
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184E08
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184E0C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184E10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184E04; } // 80184E14
  c->r[4]=c->r[7]+0x000004A0u; // 80184E18
  c->r[0]=0u+0x00000010u; // 80184E1C
  c->r[6]=c->r[1]+0x00000084u; // 80184E20
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184E24
  c->ctr=c->r[0]; // 80184E28
L_80184E2C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184E2C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184E30
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184E34
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184E38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184E2C; } // 80184E3C
  c->r[4]=c->r[7]+0x00000520u; // 80184E40
  c->r[0]=0u+0x00000010u; // 80184E44
  c->r[6]=c->r[1]+0x00000004u; // 80184E48
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80184E4C
  c->ctr=c->r[0]; // 80184E50
L_80184E54:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80184E54
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80184E58
  W32(c->r[6]+0x00000004u,c->r[4]); // 80184E5C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80184E60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80184E54; } // 80184E64
  c->r[3]=R32(c->r[3]+0x00000004u); // 80184E68
  cmps(c,0,(int32_t)c->r[3],0); // 80184E6C
  if (crb(c,2)) { goto L_80184E7C; } // 80184E70
  c->r[0]=R32(c->r[3]+0x00000008u); // 80184E74
  goto L_80184E80; // 80184E78
L_80184E7C:;
  c->r[0]=0u+0x00000000u; // 80184E7C
L_80184E80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184E80
  if (!crb(c,2)) { goto L_80184EC4; } // 80184E84
  c->r[4]=0u+0x00010000u; // 80184E88
  c->r[3]=c->r[31]|c->r[31]; // 80184E8C
  c->r[4]=c->r[4]+0xFFFFC3B4u; // 80184E90
  c->r[5]=0u+0x00000001u; // 80184E94
  c->lr=0x80184E9Cu; f_80064744(c); // 80184E98
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184E9C
  c->r[4]=c->r[1]+0x00000188u; // 80184EA0
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184EA4
  c->r[3]=c->r[31]+0x000005D4u; // 80184EA8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184EAC
  c->r[5]=0u+0x00000000u; // 80184EB0
  c->r[4]=c->r[4]+c->r[0]; // 80184EB4
  c->lr=0x80184EBCu; f_800E2300(c); // 80184EB8
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184EBC
  {uint32_t ea=c->r[31]+0x00000780u; WF32(ea,c->f[0]);} // 80184EC0
L_80184EC4:;
  c->r[3]=c->r[31]+0x00000354u; // 80184EC4
  c->lr=0x80184ECCu; f_800C9374(c); // 80184EC8
  c->r[0]=c->r[3]+0x00000000u; // 80184ECC
  cmpu(c,0,c->r[0],0x0000C3B4u); // 80184ED0
  if (crb(c,2)) { goto L_80184EE4; } // 80184ED4
  cmpu(c,0,c->r[0],0x0000C3DCu); // 80184ED8
  if (crb(c,2)) { goto L_80184FD4; } // 80184EDC
  goto L_8018506C; // 80184EE0
L_80184EE4:;
  {uint32_t ea=c->r[2]+0xFFFFBF5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80184EE4
  c->r[3]=c->r[31]|c->r[31]; // 80184EE8
  c->lr=0x80184EF0u; f_80064A68(c); // 80184EEC
  cmps(c,0,(int32_t)c->r[3],0); // 80184EF0
  if (crb(c,2)) { goto L_80184F50; } // 80184EF4
  c->r[3]=R32(c->r[31]+0x00000434u); // 80184EF8
  c->r[4]=0u+0x00000001u; // 80184EFC
  c->r[3]=c->r[3]+0x00000030u; // 80184F00
  c->lr=0x80184F08u; f_802D94E8(c); // 80184F04
  {uint32_t ea=c->r[31]+0x00000780u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184F08
  fcmp(c,0,c->f[1],c->f[0]); // 80184F0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80184F10
  if (!crb(c,2)) { goto L_80184F50; } // 80184F14
  c->r[4]=0u+0x00010000u; // 80184F18
  c->r[3]=c->r[31]|c->r[31]; // 80184F1C
  c->r[4]=c->r[4]+0xFFFFC3B5u; // 80184F20
  c->r[5]=0u+0x00000001u; // 80184F24
  c->lr=0x80184F2Cu; f_80064744(c); // 80184F28
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184F2C
  c->r[4]=c->r[1]+0x00000108u; // 80184F30
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184F34
  c->r[3]=c->r[31]+0x000005D4u; // 80184F38
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184F3C
  c->r[5]=0u+0x00000000u; // 80184F40
  c->r[4]=c->r[4]+c->r[0]; // 80184F44
  c->lr=0x80184F4Cu; f_800E2300(c); // 80184F48
  goto L_8018506C; // 80184F4C
L_80184F50:;
  {uint32_t ea=c->r[2]+0xFFFFBF60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184F50
  c->r[3]=c->r[31]|c->r[31]; // 80184F54
  c->lr=0x80184F5Cu; f_80064A68(c); // 80184F58
  cmps(c,0,(int32_t)c->r[3],0); // 80184F5C
  if (crb(c,2)) { goto L_80184F80; } // 80184F60
  c->r[3]=c->r[31]|c->r[31]; // 80184F64
  c->r[4]=0u+0x00000002u; // 80184F68
  c->r[5]=0u+0x00000000u; // 80184F6C
  c->lr=0x80184F74u; f_80062748(c); // 80184F70
  c->r[0]=0u+0x00000001u; // 80184F74
  W8(c->r[31]+0x00000785u,c->r[0]); // 80184F78
  goto L_8018506C; // 80184F7C
L_80184F80:;
  {uint32_t ea=c->r[2]+0xFFFFBF64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184F80
  c->r[3]=c->r[31]|c->r[31]; // 80184F84
  c->lr=0x80184F8Cu; f_80064A68(c); // 80184F88
  cmps(c,0,(int32_t)c->r[3],0); // 80184F8C
  if (crb(c,2)) { goto L_8018506C; } // 80184F90
  c->r[4]=0u+0x00010000u; // 80184F94
  c->r[3]=c->r[31]|c->r[31]; // 80184F98
  c->r[4]=c->r[4]+0xFFFFC3DCu; // 80184F9C
  c->r[5]=0u+0x00000001u; // 80184FA0
  c->lr=0x80184FA8u; f_80064744(c); // 80184FA4
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80184FA8
  c->r[4]=c->r[1]+0x00000088u; // 80184FAC
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184FB0
  c->r[3]=c->r[31]+0x000005D4u; // 80184FB4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184FB8
  c->r[5]=0u+0x00000000u; // 80184FBC
  c->r[4]=c->r[4]+c->r[0]; // 80184FC0
  c->lr=0x80184FC8u; f_800E2300(c); // 80184FC4
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184FC8
  {uint32_t ea=c->r[31]+0x00000780u; WF32(ea,c->f[0]);} // 80184FCC
  goto L_8018506C; // 80184FD0
L_80184FD4:;
  {uint32_t ea=c->r[2]+0xFFFFBF68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184FD4
  c->r[3]=c->r[31]|c->r[31]; // 80184FD8
  c->lr=0x80184FE0u; f_80064A68(c); // 80184FDC
  cmps(c,0,(int32_t)c->r[3],0); // 80184FE0
  if (crb(c,2)) { goto L_80185040; } // 80184FE4
  c->r[3]=R32(c->r[31]+0x00000434u); // 80184FE8
  c->r[4]=0u+0x00000002u; // 80184FEC
  c->r[3]=c->r[3]+0x00000030u; // 80184FF0
  c->lr=0x80184FF8u; f_802D94E8(c); // 80184FF4
  {uint32_t ea=c->r[31]+0x00000780u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184FF8
  fcmp(c,0,c->f[1],c->f[0]); // 80184FFC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80185000
  if (!crb(c,2)) { goto L_80185040; } // 80185004
  c->r[4]=0u+0x00010000u; // 80185008
  c->r[3]=c->r[31]|c->r[31]; // 8018500C
  c->r[4]=c->r[4]+0xFFFFC3DDu; // 80185010
  c->r[5]=0u+0x00000001u; // 80185014
  c->lr=0x8018501Cu; f_80064744(c); // 80185018
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 8018501C
  c->r[4]=c->r[1]+0x00000008u; // 80185020
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185024
  c->r[3]=c->r[31]+0x000005D4u; // 80185028
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018502C
  c->r[5]=0u+0x00000000u; // 80185030
  c->r[4]=c->r[4]+c->r[0]; // 80185034
  c->lr=0x8018503Cu; f_800E2300(c); // 80185038
  goto L_8018506C; // 8018503C
L_80185040:;
  {uint32_t ea=c->r[2]+0xFFFFBF6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80185040
  c->r[3]=c->r[31]|c->r[31]; // 80185044
  c->lr=0x8018504Cu; f_80064A68(c); // 80185048
  cmps(c,0,(int32_t)c->r[3],0); // 8018504C
  if (crb(c,2)) { goto L_8018506C; } // 80185050
  c->r[3]=c->r[31]|c->r[31]; // 80185054
  c->r[4]=0u+0x00000003u; // 80185058
  c->r[5]=0u+0x00000000u; // 8018505C
  c->lr=0x80185064u; f_80062748(c); // 80185060
  c->r[0]=0u+0x00000001u; // 80185064
  W8(c->r[31]+0x00000785u,c->r[0]); // 80185068
L_8018506C:;
  c->r[3]=c->r[31]+0x00000354u; // 8018506C
  c->lr=0x80185074u; f_800667AC(c); // 80185070
  cmps(c,0,(int32_t)c->r[3],0); // 80185074
  if (crb(c,2)) { goto L_80185088; } // 80185078
  c->r[3]=c->r[31]|c->r[31]; // 8018507C
  c->r[4]=0u+0xFFFFFFFFu; // 80185080
  c->lr=0x80185088u; f_801864A0(c); // 80185084
L_80185088:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 80185088
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 8018508C
  c->lr=c->r[0]; // 80185090
  c->r[1]=c->r[1]+0x00000210u; // 80185094
  return; // 80185098
}

// fn_8018509C
void f_8018509C(Ctx* __restrict c) {
  trace_call(0x8018509Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018509C
  c->r[0]=c->lr; // 801850A0
  c->r[4]=0u+0x80690000u; // 801850A4
  W32(c->r[1]+0x00000114u,c->r[0]); // 801850A8
  c->r[4]=c->r[4]+0x00001E80u; // 801850AC
  c->r[0]=0u+0x00000010u; // 801850B0
  c->r[6]=c->r[1]+0x00000084u; // 801850B4
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801850B8
  c->r[31]=c->r[3]|c->r[3]; // 801850BC
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801850C0
  c->ctr=c->r[0]; // 801850C4
L_801850C8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801850C8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801850CC
  W32(c->r[6]+0x00000004u,c->r[4]); // 801850D0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801850D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801850C8; } // 801850D8
  c->r[4]=0u+0x80690000u; // 801850DC
  c->r[0]=0u+0x00000010u; // 801850E0
  c->r[4]=c->r[4]+0x00001F00u; // 801850E4
  c->r[6]=c->r[1]+0x00000004u; // 801850E8
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801850EC
  c->ctr=c->r[0]; // 801850F0
L_801850F4:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801850F4
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801850F8
  W32(c->r[6]+0x00000004u,c->r[4]); // 801850FC
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80185100
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801850F4; } // 80185104
  c->r[3]=R32(c->r[3]+0x00000004u); // 80185108
  cmps(c,0,(int32_t)c->r[3],0); // 8018510C
  if (crb(c,2)) { goto L_8018511C; } // 80185110
  c->r[0]=R32(c->r[3]+0x00000008u); // 80185114
  goto L_80185120; // 80185118
L_8018511C:;
  c->r[0]=0u+0x00000000u; // 8018511C
L_80185120:;
  cmps(c,0,(int32_t)c->r[0],0); // 80185120
  if (!crb(c,2)) { goto L_80185170; } // 80185124
  c->r[4]=0u+0x00010000u; // 80185128
  c->r[3]=c->r[31]|c->r[31]; // 8018512C
  c->r[4]=c->r[4]+0xFFFFC3BEu; // 80185130
  c->r[5]=0u+0x00000001u; // 80185134
  c->lr=0x8018513Cu; f_80064744(c); // 80185138
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 8018513C
  c->r[4]=c->r[1]+0x00000088u; // 80185140
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185144
  c->r[3]=c->r[31]+0x000005D4u; // 80185148
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018514C
  c->r[5]=0u+0x00000000u; // 80185150
  c->r[4]=c->r[4]+c->r[0]; // 80185154
  c->lr=0x8018515Cu; f_800E2300(c); // 80185158
  c->r[3]=R32(c->r[31]+0x00000788u); // 8018515C
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80185160
  c->r[0]=c->r[3]+0x00000001u; // 80185164
  {uint32_t ea=c->r[31]+0x00000780u; WF32(ea,c->f[0]);} // 80185168
  W32(c->r[31]+0x00000788u,c->r[0]); // 8018516C
L_80185170:;
  c->r[3]=c->r[31]+0x00000354u; // 80185170
  c->lr=0x80185178u; f_800C9374(c); // 80185174
  c->r[0]=c->r[3]+0x00000000u; // 80185178
  cmpu(c,0,c->r[0],0x0000C3BEu); // 8018517C
  if (!crb(c,2)) { goto L_80185200; } // 80185180
  c->r[3]=R32(c->r[31]+0x00000434u); // 80185184
  c->r[4]=0u+0x00000003u; // 80185188
  c->r[3]=c->r[3]+0x00000030u; // 8018518C
  c->lr=0x80185194u; f_802D94E8(c); // 80185190
  {uint32_t ea=c->r[31]+0x00000780u; c->f[0]=c->ps1[0]=RF32(ea);} // 80185194
  fcmp(c,0,c->f[1],c->f[0]); // 80185198
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8018519C
  if (!crb(c,2)) { goto L_801851DC; } // 801851A0
  c->r[4]=0u+0x00010000u; // 801851A4
  c->r[3]=c->r[31]|c->r[31]; // 801851A8
  c->r[4]=c->r[4]+0xFFFFC3BFu; // 801851AC
  c->r[5]=0u+0x00000001u; // 801851B0
  c->lr=0x801851B8u; f_80064744(c); // 801851B4
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801851B8
  c->r[4]=c->r[1]+0x00000008u; // 801851BC
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801851C0
  c->r[3]=c->r[31]+0x000005D4u; // 801851C4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801851C8
  c->r[5]=0u+0x00000000u; // 801851CC
  c->r[4]=c->r[4]+c->r[0]; // 801851D0
  c->lr=0x801851D8u; f_800E2300(c); // 801851D4
  goto L_80185200; // 801851D8
L_801851DC:;
  {uint32_t ea=c->r[2]+0xFFFFBF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 801851DC
  c->r[3]=c->r[31]|c->r[31]; // 801851E0
  c->lr=0x801851E8u; f_80064A68(c); // 801851E4
  cmps(c,0,(int32_t)c->r[3],0); // 801851E8
  if (crb(c,2)) { goto L_80185200; } // 801851EC
  c->r[3]=c->r[31]|c->r[31]; // 801851F0
  c->r[4]=0u+0x00000004u; // 801851F4
  c->r[5]=0u+0x00000000u; // 801851F8
  c->lr=0x80185200u; f_80062748(c); // 801851FC
L_80185200:;
  c->r[3]=c->r[31]+0x00000354u; // 80185200
  c->lr=0x80185208u; f_800667AC(c); // 80185204
  cmps(c,0,(int32_t)c->r[3],0); // 80185208
  if (crb(c,2)) { goto L_8018521C; } // 8018520C
  c->r[3]=c->r[31]|c->r[31]; // 80185210
  c->r[4]=0u+0xFFFFFFFFu; // 80185214
  c->lr=0x8018521Cu; f_801864A0(c); // 80185218
L_8018521C:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 8018521C
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80185220
  c->lr=c->r[0]; // 80185224
  c->r[1]=c->r[1]+0x00000110u; // 80185228
  return; // 8018522C
}

// fn_80185230
void f_80185230(Ctx* __restrict c) {
  trace_call(0x80185230u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185230
  c->r[0]=c->lr; // 80185234
  c->r[4]=0u+0x80690000u; // 80185238
  W32(c->r[1]+0x00000114u,c->r[0]); // 8018523C
  c->r[4]=c->r[4]+0x00001F80u; // 80185240
  c->r[0]=0u+0x00000010u; // 80185244
  c->r[6]=c->r[1]+0x00000084u; // 80185248
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 8018524C
  c->r[31]=c->r[3]|c->r[3]; // 80185250
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80185254
  c->ctr=c->r[0]; // 80185258
L_8018525C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8018525C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80185260
  W32(c->r[6]+0x00000004u,c->r[4]); // 80185264
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80185268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018525C; } // 8018526C
  c->r[4]=0u+0x80690000u; // 80185270
  c->r[0]=0u+0x00000010u; // 80185274
  c->r[4]=c->r[4]+0x00002000u; // 80185278
  c->r[6]=c->r[1]+0x00000004u; // 8018527C
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80185280
  c->ctr=c->r[0]; // 80185284
L_80185288:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80185288
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8018528C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80185290
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80185294
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80185288; } // 80185298
  c->r[3]=R32(c->r[3]+0x00000004u); // 8018529C
  cmps(c,0,(int32_t)c->r[3],0); // 801852A0
  if (crb(c,2)) { goto L_801852B0; } // 801852A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801852A8
  goto L_801852B4; // 801852AC
L_801852B0:;
  c->r[0]=0u+0x00000000u; // 801852B0
L_801852B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801852B4
  if (!crb(c,2)) { goto L_80185300; } // 801852B8
  c->r[4]=0u+0x00010000u; // 801852BC
  c->r[3]=c->r[31]|c->r[31]; // 801852C0
  c->r[4]=c->r[4]+0xFFFFC3C8u; // 801852C4
  c->r[5]=0u+0x00000001u; // 801852C8
  c->lr=0x801852D0u; f_80064744(c); // 801852CC
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801852D0
  c->r[4]=c->r[1]+0x00000008u; // 801852D4
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801852D8
  c->r[3]=c->r[31]+0x000005D4u; // 801852DC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801852E0
  c->r[5]=0u+0x00000000u; // 801852E4
  c->r[4]=c->r[4]+c->r[0]; // 801852E8
  c->lr=0x801852F0u; f_800E2300(c); // 801852EC
  {uint32_t ea=c->r[2]+0xFFFFBF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 801852F0
  c->r[3]=c->r[31]|c->r[31]; // 801852F4
  {uint32_t ea=c->r[2]+0xFFFFBF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 801852F8
  c->lr=0x80185300u; f_80185C98(c); // 801852FC
L_80185300:;
  c->r[0]=R32(c->r[31]+0x000007ACu); // 80185300
  cmps(c,0,(int32_t)c->r[0],2); // 80185304
  if (crb(c,2)) { goto L_80185318; } // 80185308
  cmps(c,0,(int32_t)c->r[0],3); // 8018530C
  if (crb(c,2)) { goto L_801853C8; } // 80185310
  goto L_80185440; // 80185314
L_80185318:;
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185318
  c->r[4]=c->r[1]+0x00000008u; // 8018531C
  c->r[3]=c->r[31]+0x000005D4u; // 80185320
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80185324
  c->r[4]=c->r[4]+c->r[0]; // 80185328
  c->lr=0x80185330u; f_800E2ACC(c); // 8018532C
  cmps(c,0,(int32_t)c->r[3],0); // 80185330
  if (crb(c,2)) { goto L_80185370; } // 80185334
  {uint32_t ea=c->r[2]+0xFFFFBF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185338
  c->r[3]=c->r[31]+0x000005D4u; // 8018533C
  c->lr=0x80185344u; f_800E2B50(c); // 80185340
  cmps(c,0,(int32_t)c->r[3],0); // 80185344
  if (crb(c,2)) { goto L_80185440; } // 80185348
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 8018534C
  c->r[4]=c->r[1]+0x00000088u; // 80185350
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185354
  c->r[3]=c->r[31]+0x000005D4u; // 80185358
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018535C
  c->r[5]=0u+0x00000000u; // 80185360
  c->r[4]=c->r[4]+c->r[0]; // 80185364
  c->lr=0x8018536Cu; f_800E2300(c); // 80185368
  goto L_80185440; // 8018536C
L_80185370:;
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185370
  c->r[4]=c->r[1]+0x00000088u; // 80185374
  c->r[3]=c->r[31]+0x000005D4u; // 80185378
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018537C
  c->r[4]=c->r[4]+c->r[0]; // 80185380
  c->lr=0x80185388u; f_800E2ACC(c); // 80185384
  cmps(c,0,(int32_t)c->r[3],0); // 80185388
  if (crb(c,2)) { goto L_80185440; } // 8018538C
  c->r[3]=c->r[31]+0x000005D4u; // 80185390
  c->lr=0x80185398u; f_800E2B1C(c); // 80185394
  cmps(c,0,(int32_t)c->r[3],0); // 80185398
  if (crb(c,2)) { goto L_80185440; } // 8018539C
  c->r[3]=c->r[31]+0x00000354u; // 801853A0
  c->lr=0x801853A8u; f_800667AC(c); // 801853A4
  cmps(c,0,(int32_t)c->r[3],0); // 801853A8
  if (crb(c,2)) { goto L_80185440; } // 801853AC
  c->r[3]=c->r[31]|c->r[31]; // 801853B0
  c->lr=0x801853B8u; f_80186BD0(c); // 801853B4
  c->r[3]=c->r[31]|c->r[31]; // 801853B8
  c->r[4]=0u+0x00000001u; // 801853BC
  c->lr=0x801853C4u; f_801864A0(c); // 801853C0
  goto L_80185440; // 801853C4
L_801853C8:;
  {uint32_t ea=c->r[2]+0xFFFFBF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801853C8
  c->r[3]=c->r[31]|c->r[31]; // 801853CC
  c->lr=0x801853D4u; f_80064A68(c); // 801853D0
  cmps(c,0,(int32_t)c->r[3],0); // 801853D4
  if (crb(c,2)) { goto L_801853F0; } // 801853D8
  c->r[3]=c->r[31]|c->r[31]; // 801853DC
  c->r[4]=0u+0x00000005u; // 801853E0
  c->r[5]=0u+0x00000000u; // 801853E4
  c->lr=0x801853ECu; f_80062748(c); // 801853E8
  goto L_80185440; // 801853EC
L_801853F0:;
  c->r[3]=c->r[31]+0x000005D4u; // 801853F0
  c->lr=0x801853F8u; f_800E2B1C(c); // 801853F4
  cmps(c,0,(int32_t)c->r[3],0); // 801853F8
  if (crb(c,2)) { goto L_80185440; } // 801853FC
  c->r[3]=c->r[31]+0x00000354u; // 80185400
  c->lr=0x80185408u; f_800667AC(c); // 80185404
  cmps(c,0,(int32_t)c->r[3],0); // 80185408
  if (crb(c,2)) { goto L_80185440; } // 8018540C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185410
  cmps(c,0,(int32_t)c->r[0],2); // 80185414
  if (!crb(c,2)) { goto L_8018542C; } // 80185418
  c->r[3]=c->r[31]|c->r[31]; // 8018541C
  c->r[4]=0u+0x00000004u; // 80185420
  c->lr=0x80185428u; f_801864A0(c); // 80185424
  goto L_80185440; // 80185428
L_8018542C:;
  c->r[0]=0u+0x00000001u; // 8018542C
  W8(c->r[31]+0x00000785u,c->r[0]); // 80185430
  c->r[3]=c->r[31]|c->r[31]; // 80185434
  c->r[4]=0u+0xFFFFFFFFu; // 80185438
  c->lr=0x80185440u; f_801864A0(c); // 8018543C
L_80185440:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 80185440
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80185444
  c->lr=c->r[0]; // 80185448
  c->r[1]=c->r[1]+0x00000110u; // 8018544C
  return; // 80185450
}

// fn_80185454
void f_80185454(Ctx* __restrict c) {
  trace_call(0x80185454u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185454
  c->r[0]=c->lr; // 80185458
  c->r[7]=0u+0x80690000u; // 8018545C
  W32(c->r[1]+0x00000124u,c->r[0]); // 80185460
  c->r[7]=c->r[7]+0x000018E0u; // 80185464
  c->r[4]=c->r[7]+0x000007A0u; // 80185468
  c->r[0]=0u+0x00000010u; // 8018546C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 80185470
  c->r[31]=c->r[3]|c->r[3]; // 80185474
  c->r[6]=c->r[1]+0x00000094u; // 80185478
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 8018547C
  c->ctr=c->r[0]; // 80185480
L_80185484:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80185484
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80185488
  W32(c->r[6]+0x00000004u,c->r[4]); // 8018548C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80185490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80185484; } // 80185494
  c->r[4]=c->r[7]+0x00000820u; // 80185498
  c->r[0]=0u+0x00000010u; // 8018549C
  c->r[6]=c->r[1]+0x00000014u; // 801854A0
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801854A4
  c->ctr=c->r[0]; // 801854A8
L_801854AC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801854AC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801854B0
  W32(c->r[6]+0x00000004u,c->r[4]); // 801854B4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801854B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801854AC; } // 801854BC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801854C0
  cmps(c,0,(int32_t)c->r[3],0); // 801854C4
  if (crb(c,2)) { goto L_801854D4; } // 801854C8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801854CC
  goto L_801854D8; // 801854D0
L_801854D4:;
  c->r[0]=0u+0x00000000u; // 801854D4
L_801854D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801854D8
  if (!crb(c,2)) { goto L_80185550; } // 801854DC
  c->r[5]=c->r[7]+0x000008A0u; // 801854E0
  c->r[9]=R32(c->r[7]+0x000008A0u); // 801854E4
  c->r[8]=R32(c->r[5]+0x00000004u); // 801854E8
  c->r[4]=c->r[1]+0x00000008u; // 801854EC
  c->r[7]=R32(c->r[5]+0x00000008u); // 801854F0
  c->r[3]=c->r[31]|c->r[31]; // 801854F4
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 801854F8
  c->r[5]=0u+0x00000001u; // 801854FC
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185500
  W32(c->r[1]+0x00000008u,c->r[9]); // 80185504
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80185508
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8018550C
  W32(c->r[1]+0x00000010u,c->r[7]); // 80185510
  W32(c->r[1]+0x00000014u,c->r[6]); // 80185514
  c->r[4]=R32(c->r[4]+c->r[0]); // 80185518
  c->lr=0x80185520u; f_80064744(c); // 8018551C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185520
  c->r[4]=c->r[1]+0x00000098u; // 80185524
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185528
  c->r[3]=c->r[31]+0x000005D4u; // 8018552C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80185530
  c->r[5]=0u+0x00000000u; // 80185534
  c->r[4]=c->r[4]+c->r[0]; // 80185538
  c->lr=0x80185540u; f_800E2300(c); // 8018553C
  {uint32_t ea=c->r[2]+0xFFFFBF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185540
  c->r[3]=c->r[31]|c->r[31]; // 80185544
  {uint32_t ea=c->r[2]+0xFFFFBF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80185548
  c->lr=0x80185550u; f_80185C98(c); // 8018554C
L_80185550:;
  c->r[0]=R32(c->r[31]+0x000007ACu); // 80185550
  cmps(c,0,(int32_t)c->r[0],2); // 80185554
  if (crb(c,2)) { goto L_80185568; } // 80185558
  cmps(c,0,(int32_t)c->r[0],3); // 8018555C
  if (crb(c,2)) { goto L_8018562C; } // 80185560
  goto L_80185658; // 80185564
L_80185568:;
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80185568
  c->r[4]=c->r[1]+0x00000098u; // 8018556C
  c->r[3]=c->r[31]+0x000005D4u; // 80185570
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80185574
  c->r[4]=c->r[4]+c->r[0]; // 80185578
  c->lr=0x80185580u; f_800E2ACC(c); // 8018557C
  cmps(c,0,(int32_t)c->r[3],0); // 80185580
  if (crb(c,2)) { goto L_801855D4; } // 80185584
  {uint32_t ea=c->r[2]+0xFFFFBF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185588
  c->r[3]=c->r[31]+0x000005D4u; // 8018558C
  c->lr=0x80185594u; f_800E2B50(c); // 80185590
  cmps(c,0,(int32_t)c->r[3],0); // 80185594
  if (crb(c,2)) { goto L_80185658; } // 80185598
  c->r[4]=0u+0x00010000u; // 8018559C
  c->r[3]=c->r[31]|c->r[31]; // 801855A0
  c->r[4]=c->r[4]+0xFFFFC3D3u; // 801855A4
  c->r[5]=0u+0x00000001u; // 801855A8
  c->lr=0x801855B0u; f_80064744(c); // 801855AC
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801855B0
  c->r[4]=c->r[1]+0x00000018u; // 801855B4
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801855B8
  c->r[3]=c->r[31]+0x000005D4u; // 801855BC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801855C0
  c->r[5]=0u+0x00000000u; // 801855C4
  c->r[4]=c->r[4]+c->r[0]; // 801855C8
  c->lr=0x801855D0u; f_800E2300(c); // 801855CC
  goto L_80185658; // 801855D0
L_801855D4:;
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801855D4
  c->r[4]=c->r[1]+0x00000018u; // 801855D8
  c->r[3]=c->r[31]+0x000005D4u; // 801855DC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801855E0
  c->r[4]=c->r[4]+c->r[0]; // 801855E4
  c->lr=0x801855ECu; f_800E2ACC(c); // 801855E8
  cmps(c,0,(int32_t)c->r[3],0); // 801855EC
  if (crb(c,2)) { goto L_80185658; } // 801855F0
  c->r[3]=c->r[31]+0x000005D4u; // 801855F4
  c->lr=0x801855FCu; f_800E2B1C(c); // 801855F8
  cmps(c,0,(int32_t)c->r[3],0); // 801855FC
  if (crb(c,2)) { goto L_80185658; } // 80185600
  c->r[3]=c->r[31]+0x00000354u; // 80185604
  c->lr=0x8018560Cu; f_800667AC(c); // 80185608
  cmps(c,0,(int32_t)c->r[3],0); // 8018560C
  if (crb(c,2)) { goto L_80185658; } // 80185610
  c->r[3]=c->r[31]|c->r[31]; // 80185614
  c->lr=0x8018561Cu; f_80186BD0(c); // 80185618
  c->r[3]=c->r[31]|c->r[31]; // 8018561C
  c->r[4]=0u+0x00000001u; // 80185620
  c->lr=0x80185628u; f_801864A0(c); // 80185624
  goto L_80185658; // 80185628
L_8018562C:;
  c->r[3]=c->r[31]+0x000005D4u; // 8018562C
  c->lr=0x80185634u; f_800E2B1C(c); // 80185630
  cmps(c,0,(int32_t)c->r[3],0); // 80185634
  if (crb(c,2)) { goto L_80185658; } // 80185638
  c->r[3]=c->r[31]+0x00000354u; // 8018563C
  c->lr=0x80185644u; f_800667AC(c); // 80185640
  cmps(c,0,(int32_t)c->r[3],0); // 80185644
  if (crb(c,2)) { goto L_80185658; } // 80185648
  c->r[3]=c->r[31]|c->r[31]; // 8018564C
  c->r[4]=0u+0x00000004u; // 80185650
  c->lr=0x80185658u; f_801864A0(c); // 80185654
L_80185658:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 80185658
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8018565C
  c->lr=c->r[0]; // 80185660
  c->r[1]=c->r[1]+0x00000120u; // 80185664
  return; // 80185668
}

// fn_8018566C
void f_8018566C(Ctx* __restrict c) {
  trace_call(0x8018566Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018566C
  c->r[0]=c->lr; // 80185670
  c->r[4]=0u+0x80690000u; // 80185674
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80185678
  c->r[4]=c->r[4]+0x00002190u; // 8018567C
  c->r[0]=0u+0x00000010u; // 80185680
  c->r[6]=c->r[1]+0x00000014u; // 80185684
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80185688
  c->r[31]=c->r[3]|c->r[3]; // 8018568C
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80185690
  c->ctr=c->r[0]; // 80185694
L_80185698:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80185698
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8018569C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801856A0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801856A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80185698; } // 801856A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801856AC
  cmps(c,0,(int32_t)c->r[3],0); // 801856B0
  if (crb(c,2)) { goto L_801856C0; } // 801856B4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801856B8
  goto L_801856C4; // 801856BC
L_801856C0:;
  c->r[0]=0u+0x00000000u; // 801856C0
L_801856C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801856C4
  if (!crb(c,2)) { goto L_8018572C; } // 801856C8
  c->r[6]=0u+0x80690000u; // 801856CC
  {uint32_t ea=c->r[6]+0x00002210u; c->r[9]=R32(ea); c->r[6]=ea;} // 801856D0
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 801856D4
  c->r[4]=c->r[1]+0x00000008u; // 801856D8
  c->r[8]=R32(c->r[6]+0x00000004u); // 801856DC
  c->r[3]=c->r[31]|c->r[31]; // 801856E0
  c->r[7]=R32(c->r[6]+0x00000008u); // 801856E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801856E8
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801856EC
  c->r[5]=0u+0x00000001u; // 801856F0
  W32(c->r[1]+0x00000008u,c->r[9]); // 801856F4
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801856F8
  W32(c->r[1]+0x00000010u,c->r[7]); // 801856FC
  W32(c->r[1]+0x00000014u,c->r[6]); // 80185700
  c->r[4]=R32(c->r[4]+c->r[0]); // 80185704
  c->lr=0x8018570Cu; f_80064744(c); // 80185708
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 8018570C
  c->r[4]=c->r[1]+0x00000018u; // 80185710
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185714
  c->r[3]=c->r[31]+0x000005D4u; // 80185718
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8018571C
  c->r[5]=0u+0x00000000u; // 80185720
  c->r[4]=c->r[4]+c->r[0]; // 80185724
  c->lr=0x8018572Cu; f_800E2300(c); // 80185728
L_8018572C:;
  c->r[3]=c->r[31]+0x000005D4u; // 8018572C
  c->lr=0x80185734u; f_800E2B1C(c); // 80185730
  cmps(c,0,(int32_t)c->r[3],0); // 80185734
  if (crb(c,2)) { goto L_80185748; } // 80185738
  c->r[3]=c->r[31]|c->r[31]; // 8018573C
  c->r[4]=0u+0x00000004u; // 80185740
  c->lr=0x80185748u; f_801864A0(c); // 80185744
L_80185748:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80185748
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8018574C
  c->lr=c->r[0]; // 80185750
  c->r[1]=c->r[1]+0x000000A0u; // 80185754
  return; // 80185758
}

// fn_8018575C
void f_8018575C(Ctx* __restrict c) {
  trace_call(0x8018575Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018575C
  c->r[0]=c->lr; // 80185760
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185764
  c->r[11]=c->r[1]+0x00000020u; // 80185768
  c->lr=0x80185770u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018576C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80185770
  c->r[4]=0u+0x80690000u; // 80185774
  c->r[4]=c->r[4]+0x00002220u; // 80185778
  c->r[30]=c->r[3]|c->r[3]; // 8018577C
  cmps(c,0,(int32_t)c->r[5],0); // 80185780
  c->r[31]=c->r[4]+0x000001CFu; // 80185784
  if (crb(c,2)) { goto L_80185794; } // 80185788
  c->r[0]=R32(c->r[5]+0x00000008u); // 8018578C
  goto L_80185798; // 80185790
L_80185794:;
  c->r[0]=0u+0x00000000u; // 80185794
L_80185798:;
  cmps(c,0,(int32_t)c->r[0],0); // 80185798
  if (!crb(c,2)) { goto L_8018580C; } // 8018579C
  c->r[3]=c->r[30]|c->r[30]; // 801857A0
  c->lr=0x801857A8u; f_80186EBC(c); // 801857A4
  c->r[4]=c->r[3]|c->r[3]; // 801857A8
  c->r[3]=c->r[30]|c->r[30]; // 801857AC
  c->r[5]=0u+0x00000001u; // 801857B0
  c->lr=0x801857B8u; f_80064744(c); // 801857B4
  c->r[3]=c->r[30]|c->r[30]; // 801857B8
  c->r[4]=0u+0x00000004u; // 801857BC
  c->lr=0x801857C4u; f_80186CC4(c); // 801857C0
  c->lr=0x801857C8u; f_803B220C(c); // 801857C4
  c->r[5]=c->r[3]|c->r[3]; // 801857C8
  c->r[4]=0u+0x00000003u; // 801857CC
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 801857D0
  c->r[3]=c->r[30]|c->r[30]; // 801857D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801857D8
  c->r[4]=c->r[5]-c->r[0]; // 801857DC
  c->r[4]=c->r[4]+0x00000003u; // 801857E0
  c->lr=0x801857E8u; f_801860DC(c); // 801857E4
  c->r[4]=R32(c->r[30]+0x00000800u); // 801857E8
  c->r[3]=c->r[30]+0x000007B0u; // 801857EC
  c->lr=0x801857F4u; f_80181B5C(c); // 801857F0
  c->r[3]=c->r[30]|c->r[30]; // 801857F4
  c->lr=0x801857FCu; f_8018623C(c); // 801857F8
  c->r[3]=c->r[30]|c->r[30]; // 801857FC
  c->lr=0x80185804u; f_80186380(c); // 80185800
  c->r[0]=0u+0x00000000u; // 80185804
  W32(c->r[30]+0x00000804u,c->r[0]); // 80185808
L_8018580C:;
  c->r[0]=R8(c->r[30]+0x00000815u); // 8018580C
  cmps(c,0,(int32_t)c->r[0],0); // 80185810
  if (crb(c,2)) { goto L_80185878; } // 80185814
  c->r[3]=R32(c->r[30]+0x00000804u); // 80185818
  c->r[0]=R32(c->r[30]+0x00000800u); // 8018581C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80185820
  if (!crb(c,0)) { goto L_80185878; } // 80185824
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80185828
  c->r[3]=c->r[30]+c->r[0]; // 8018582C
  c->r[3]=c->r[3]+0x000007D8u; // 80185830
  c->lr=0x80185838u; f_8007ECBC(c); // 80185834
  c->r[29]=c->r[3]|c->r[3]; // 80185838
  c->r[3]=c->r[30]+0x000007B0u; // 8018583C
  c->lr=0x80185844u; f_80182000(c); // 80185840
  c->r[4]=c->r[3]|c->r[3]; // 80185844
  c->r[3]=c->r[29]|c->r[29]; // 80185848
  c->lr=0x80185850u; f_80181840(c); // 8018584C
  c->r[3]=R32(c->r[30]+0x00000804u); // 80185850
  c->r[0]=R32(c->r[30]+0x00000800u); // 80185854
  c->r[3]=c->r[3]+0x00000001u; // 80185858
  W32(c->r[30]+0x00000804u,c->r[3]); // 8018585C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80185860
  if (!crb(c,0)) { goto L_80185878; } // 80185864
  c->r[3]=c->r[30]|c->r[30]; // 80185868
  c->lr=0x80185870u; f_8018623C(c); // 8018586C
  c->r[3]=c->r[30]|c->r[30]; // 80185870
  c->lr=0x80185878u; f_80186380(c); // 80185874
L_80185878:;
  c->r[0]=R8(c->r[30]+0x00000809u); // 80185878
  cmps(c,0,(int32_t)c->r[0],0); // 8018587C
  if (crb(c,2)) { goto L_8018591C; } // 80185880
  c->r[4]=c->r[31]|c->r[31]; // 80185884
  c->r[3]=c->r[30]+0x000005D4u; // 80185888
  c->lr=0x80185890u; f_800E2ACC(c); // 8018588C
  cmps(c,0,(int32_t)c->r[3],0); // 80185890
  if (!crb(c,2)) { goto L_801858B0; } // 80185894
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185898
  c->r[4]=c->r[31]|c->r[31]; // 8018589C
  c->r[3]=c->r[30]+0x000005D4u; // 801858A0
  c->r[5]=0u+0x00000000u; // 801858A4
  c->lr=0x801858ACu; f_800E2300(c); // 801858A8
  goto L_8018591C; // 801858AC
L_801858B0:;
  c->r[3]=c->r[30]+0x000005D4u; // 801858B0
  c->lr=0x801858B8u; f_800E2B1C(c); // 801858B4
  cmps(c,0,(int32_t)c->r[3],0); // 801858B8
  if (crb(c,2)) { goto L_8018591C; } // 801858BC
  c->lr=0x801858C4u; f_8033FE4C(c); // 801858C0
  c->r[0]=R8(c->r[13]+0xFFFFBB74u); // 801858C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801858C8
  if (!crb(c,2)) { goto L_801858E8; } // 801858CC
  c->r[4]=R32(c->r[13]+0xFFFFBB58u); // 801858D0
  c->r[0]=0u+0x00000001u; // 801858D4
  W32(c->r[13]+0xFFFFBB70u,c->r[4]); // 801858D8
  c->r[4]=c->r[4]+0x00000001u; // 801858DC
  W32(c->r[13]+0xFFFFBB58u,c->r[4]); // 801858E0
  W8(c->r[13]+0xFFFFBB74u,c->r[0]); // 801858E4
L_801858E8:;
  c->r[0]=R32(c->r[13]+0xFFFFBB70u); // 801858E8
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801858EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801858F0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801858F4
  c->r[3]=R32(c->r[3]+0x00000008u); // 801858F8
  c->r[3]=c->r[3]+0x00000078u; // 801858FC
  c->lr=0x80185904u; f_803315E0(c); // 80185900
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80185904
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 80185908
  if (!crb(c,2)) { goto L_8018591C; } // 8018590C
  c->r[3]=c->r[30]|c->r[30]; // 80185910
  c->r[4]=0u+0x00000005u; // 80185914
  c->lr=0x8018591Cu; f_801864A0(c); // 80185918
L_8018591C:;
  c->r[11]=c->r[1]+0x00000020u; // 8018591C
  c->lr=0x80185924u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80185920
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185924
  c->lr=c->r[0]; // 80185928
  c->r[1]=c->r[1]+0x00000020u; // 8018592C
  return; // 80185930
}

// fn_80185934
void f_80185934(Ctx* __restrict c) {
  trace_call(0x80185934u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185934
  c->r[0]=c->lr; // 80185938
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018593C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185940
  c->r[31]=c->r[3]|c->r[3]; // 80185944
  c->r[4]=R32(c->r[3]+0x00000004u); // 80185948
  cmps(c,0,(int32_t)c->r[4],0); // 8018594C
  if (crb(c,2)) { goto L_8018595C; } // 80185950
  c->r[0]=R32(c->r[4]+0x00000008u); // 80185954
  goto L_80185960; // 80185958
L_8018595C:;
  c->r[0]=0u+0x00000000u; // 8018595C
L_80185960:;
  cmps(c,0,(int32_t)c->r[0],0); // 80185960
  if (!crb(c,2)) { goto L_8018597C; } // 80185964
  c->r[4]=0u+0x00010000u; // 80185968
  c->r[3]=c->r[31]|c->r[31]; // 8018596C
  c->r[4]=c->r[4]+0xFFFFC382u; // 80185970
  c->r[5]=0u+0x00000001u; // 80185974
  c->lr=0x8018597Cu; f_80064744(c); // 80185978
L_8018597C:;
  c->r[3]=c->r[31]+0x00000354u; // 8018597C
  c->lr=0x80185984u; f_800667AC(c); // 80185980
  cmps(c,0,(int32_t)c->r[3],0); // 80185984
  if (crb(c,2)) { goto L_80185998; } // 80185988
  c->r[3]=c->r[31]|c->r[31]; // 8018598C
  c->r[4]=0u+0xFFFFFFFFu; // 80185990
  c->lr=0x80185998u; f_801864A0(c); // 80185994
L_80185998:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018599C
  c->lr=c->r[0]; // 801859A0
  c->r[1]=c->r[1]+0x00000010u; // 801859A4
  return; // 801859A8
}

// fn_801859AC
void f_801859AC(Ctx* __restrict c) {
  trace_call(0x801859ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801859AC
  c->r[0]=c->lr; // 801859B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801859B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801859B8
  c->r[31]=c->r[3]|c->r[3]; // 801859BC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801859C0
  cmps(c,0,(int32_t)c->r[4],0); // 801859C4
  if (crb(c,2)) { goto L_801859D4; } // 801859C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801859CC
  goto L_801859D8; // 801859D0
L_801859D4:;
  c->r[0]=0u+0x00000000u; // 801859D4
L_801859D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801859D8
  if (!crb(c,2)) { goto L_80185A1C; } // 801859DC
  c->r[3]=c->r[31]|c->r[31]; // 801859E0
  c->lr=0x801859E8u; f_80186488(c); // 801859E4
  c->r[3]=c->r[31]+0x000005D4u; // 801859E8
  c->r[4]=0u+0x00000000u; // 801859EC
  c->lr=0x801859F4u; f_800E2960(c); // 801859F0
  c->r[3]=c->r[31]|c->r[31]; // 801859F4
  c->lr=0x801859FCu; f_80186144(c); // 801859F8
  c->r[3]=c->r[31]|c->r[31]; // 801859FC
  c->lr=0x80185A04u; f_80185D70(c); // 80185A00
  c->r[0]=0u+0x00000000u; // 80185A04
  W8(c->r[1]+0x00000008u,c->r[0]); // 80185A08
  c->r[3]=c->r[1]+0x00000008u; // 80185A0C
  c->lr=0x80185A14u; f_800462D8(c); // 80185A10
  c->r[4]=0u+0x00000000u; // 80185A14
  c->lr=0x80185A1Cu; f_800EA1A0(c); // 80185A18
L_80185A1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185A1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185A20
  c->lr=c->r[0]; // 80185A24
  c->r[1]=c->r[1]+0x00000020u; // 80185A28
  return; // 80185A2C
}

// fn_80185A30
void f_80185A30(Ctx* __restrict c) {
  trace_call(0x80185A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185A30
  c->r[0]=c->lr; // 80185A34
  cmps(c,0,(int32_t)c->r[4],0); // 80185A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185A40
  c->r[31]=c->r[4]|c->r[4]; // 80185A44
  W32(c->r[1]+0x00000008u,c->r[30]); // 80185A48
  c->r[30]=c->r[3]|c->r[3]; // 80185A4C
  if (crb(c,2)) { goto L_80185A68; } // 80185A50
  cmps(c,0,(int32_t)c->r[4],1); // 80185A54
  if (crb(c,2)) { goto L_80185A98; } // 80185A58
  cmps(c,0,(int32_t)c->r[4],2); // 80185A5C
  if (crb(c,2)) { goto L_80185AC8; } // 80185A60
  goto L_80185AF8; // 80185A64
L_80185A68:;
  c->r[4]=0u+0x80690000u; // 80185A68
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185A6C
  c->r[4]=c->r[4]+0x00002220u; // 80185A70
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80185A74
  c->r[6]=c->r[4]+0x000001DEu; // 80185A78
  c->r[5]=0u+0x00000000u; // 80185A7C
  c->r[4]=0u+0x00000002u; // 80185A80
  c->lr=0x80185A88u; f_80064968(c); // 80185A84
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80185A88
  c->r[4]=c->r[30]+c->r[0]; // 80185A8C
  W32(c->r[4]+0x0000078Cu,c->r[3]); // 80185A90
  goto L_80185AF8; // 80185A94
L_80185A98:;
  c->r[4]=0u+0x80690000u; // 80185A98
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185A9C
  c->r[4]=c->r[4]+0x00002220u; // 80185AA0
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80185AA4
  c->r[6]=c->r[4]+0x000001E9u; // 80185AA8
  c->r[5]=0u+0x00000001u; // 80185AAC
  c->r[4]=0u+0x00000002u; // 80185AB0
  c->lr=0x80185AB8u; f_80064968(c); // 80185AB4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80185AB8
  c->r[4]=c->r[30]+c->r[0]; // 80185ABC
  W32(c->r[4]+0x0000078Cu,c->r[3]); // 80185AC0
  goto L_80185AF8; // 80185AC4
L_80185AC8:;
  c->r[5]=0u+0x80690000u; // 80185AC8
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185ACC
  c->r[5]=c->r[5]+0x00002220u; // 80185AD0
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80185AD4
  c->r[6]=c->r[5]+0x000001F9u; // 80185AD8
  c->r[4]=0u+0x00000000u; // 80185ADC
  c->r[7]=c->r[5]+0x00000206u; // 80185AE0
  c->r[5]=0u+0x00000001u; // 80185AE4
  c->lr=0x80185AECu; f_80064970(c); // 80185AE8
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80185AEC
  c->r[4]=c->r[30]+c->r[0]; // 80185AF0
  W32(c->r[4]+0x0000078Cu,c->r[3]); // 80185AF4
L_80185AF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185AFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80185B00
  c->lr=c->r[0]; // 80185B04
  c->r[1]=c->r[1]+0x00000010u; // 80185B08
  return; // 80185B0C
}

// fn_80185B10
void f_80185B10(Ctx* __restrict c) {
  trace_call(0x80185B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185B10
  c->r[0]=c->lr; // 80185B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185B18
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80185B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185B20
  c->r[31]=c->r[3]+c->r[0]; // 80185B24
  c->r[4]=R32(c->r[31]+0x0000078Cu); // 80185B28
  c->lr=0x80185B30u; f_80064A04(c); // 80185B2C
  c->r[0]=0u+0xFFFFFFFFu; // 80185B30
  W32(c->r[31]+0x0000078Cu,c->r[0]); // 80185B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185B3C
  c->lr=c->r[0]; // 80185B40
  c->r[1]=c->r[1]+0x00000010u; // 80185B44
  return; // 80185B48
}

// fn_80185B4C
void f_80185B4C(Ctx* __restrict c) {
  trace_call(0x80185B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185B4C
  c->r[0]=c->lr; // 80185B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185B54
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80185B58
  c->r[4]=c->r[3]+c->r[0]; // 80185B5C
  c->r[4]=R32(c->r[4]+0x0000078Cu); // 80185B60
  cmps(c,0,(int32_t)c->r[4],-1); // 80185B64
  if (!crb(c,2)) { goto L_80185B74; } // 80185B68
  c->r[3]=0u+0x00000000u; // 80185B6C
  goto L_80185B80; // 80185B70
L_80185B74:;
  c->lr=0x80185B78u; f_80064A58(c); // 80185B74
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80185B78
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80185B7C
L_80185B80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185B80
  c->lr=c->r[0]; // 80185B84
  c->r[1]=c->r[1]+0x00000010u; // 80185B88
  return; // 80185B8C
}

// fn_80185B90
void f_80185B90(Ctx* __restrict c) {
  trace_call(0x80185B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185B90
  c->r[0]=c->lr; // 80185B94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185B98
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80185B9C
  c->r[4]=c->r[3]+c->r[0]; // 80185BA0
  c->r[4]=R32(c->r[4]+0x0000078Cu); // 80185BA4
  cmps(c,0,(int32_t)c->r[4],-1); // 80185BA8
  if (!crb(c,2)) { goto L_80185BB8; } // 80185BAC
  c->r[3]=0u+0x00000000u; // 80185BB0
  goto L_80185BD0; // 80185BB4
L_80185BB8:;
  c->lr=0x80185BBCu; f_80064A58(c); // 80185BB8
  cmps(c,0,(int32_t)c->r[3],0); // 80185BBC
  if (!crb(c,2)) { goto L_80185BCC; } // 80185BC0
  c->r[3]=0u+0x00000000u; // 80185BC4
  goto L_80185BD0; // 80185BC8
L_80185BCC:;
  c->lr=0x80185BD0u; f_802ECDA0(c); // 80185BCC
L_80185BD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185BD0
  c->lr=c->r[0]; // 80185BD4
  c->r[1]=c->r[1]+0x00000010u; // 80185BD8
  return; // 80185BDC
}

// fn_80185BE0
void f_80185BE0(Ctx* __restrict c) {
  trace_call(0x80185BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185BE0
  c->r[0]=c->lr; // 80185BE4
  c->r[4]=0u+0x00000001u; // 80185BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185BF0
  c->r[31]=c->r[3]|c->r[3]; // 80185BF4
  c->lr=0x80185BFCu; f_80185B4C(c); // 80185BF8
  cmps(c,0,(int32_t)c->r[3],0); // 80185BFC
  if (crb(c,2)) { goto L_80185C30; } // 80185C00
  c->r[3]=c->r[31]|c->r[31]; // 80185C04
  c->r[4]=0u+0x00000001u; // 80185C08
  c->lr=0x80185C10u; f_80185B90(c); // 80185C0C
  cmps(c,0,(int32_t)c->r[3],0); // 80185C10
  if (crb(c,2)) { goto L_80185C30; } // 80185C14
  c->r[3]=c->r[31]|c->r[31]; // 80185C18
  c->r[4]=0u+0x00000001u; // 80185C1C
  c->lr=0x80185C24u; f_80185B10(c); // 80185C20
  c->r[3]=c->r[31]|c->r[31]; // 80185C24
  c->r[4]=0u+0x00000002u; // 80185C28
  c->lr=0x80185C30u; f_80185A30(c); // 80185C2C
L_80185C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185C34
  c->lr=c->r[0]; // 80185C38
  c->r[1]=c->r[1]+0x00000010u; // 80185C3C
  return; // 80185C40
}

// fn_80185C44
void f_80185C44(Ctx* __restrict c) {
  trace_call(0x80185C44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185C44
  c->r[0]=c->lr; // 80185C48
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185C4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185C50
  c->r[31]=c->r[3]|c->r[3]; // 80185C54
  c->r[0]=R8(c->r[3]+0x0000079Cu); // 80185C58
  cmps(c,0,(int32_t)c->r[0],0); // 80185C5C
  if (crb(c,2)) { goto L_80185C84; } // 80185C60
  c->r[0]=0u+0x00000000u; // 80185C64
  W8(c->r[1]+0x00000008u,c->r[0]); // 80185C68
  c->r[3]=c->r[1]+0x00000008u; // 80185C6C
  c->lr=0x80185C74u; f_8004714C(c); // 80185C70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185C74
  {uint32_t ea=c->r[31]+0x00000798u; c->f[0]=c->ps1[0]=RF32(ea);} // 80185C78
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80185C7C
  {uint32_t ea=c->r[31]+0x00000798u; WF32(ea,c->f[0]);} // 80185C80
L_80185C84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185C84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185C88
  c->lr=c->r[0]; // 80185C8C
  c->r[1]=c->r[1]+0x00000020u; // 80185C90
  return; // 80185C94
}

// fn_80185C98
void f_80185C98(Ctx* __restrict c) {
  trace_call(0x80185C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185C98
  c->r[0]=c->lr; // 80185C9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80185CA0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80185CA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80185CA8
  c->f[31]=c->f[2]; // 80185CAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80185CB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80185CB4
  c->f[30]=c->f[1]; // 80185CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185CBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80185CC0
  c->r[30]=c->r[3]|c->r[3]; // 80185CC4
  {uint32_t ea=c->r[3]+0x000007A0u; WF32(ea,c->f[1]);} // 80185CC8
  c->r[0]=R8(c->r[13]+0xFFFFBB9Au); // 80185CCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80185CD0
  if (!crb(c,2)) { goto L_80185D10; } // 80185CD4
  c->r[31]=0u+0x80730000u; // 80185CD8
  c->r[3]=c->r[31]+0x000069F8u; // 80185CDC
  c->lr=0x80185CE4u; f_80299654(c); // 80185CE0
  c->r[3]=0u+0x806D0000u; // 80185CE4
  c->r[4]=0u+0x80050000u; // 80185CE8
  c->r[3]=c->r[3]+0xFFFFC230u; // 80185CEC
  c->r[5]=0u+0x80750000u; // 80185CF0
  W32(c->r[31]+0x000069F8u,c->r[3]); // 80185CF4
  c->r[3]=c->r[31]+0x000069F8u; // 80185CF8
  c->r[4]=c->r[4]+0xFFFF9D7Cu; // 80185CFC
  c->r[5]=c->r[5]+0x00004AE0u; // 80185D00
  c->lr=0x80185D08u; f_803A92B8(c); // 80185D04
  c->r[0]=0u+0x00000001u; // 80185D08
  W8(c->r[13]+0xFFFFBB9Au,c->r[0]); // 80185D0C
L_80185D10:;
  c->r[3]=0u+0x80730000u; // 80185D10
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185D14
  c->r[3]=c->r[3]+0x000069F8u; // 80185D18
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 80185D1C
  {uint32_t ea=c->r[3]+0x00000258u; c->f[0]=c->ps1[0]=RF32(ea);} // 80185D20
  c->r[0]=0u+0x00000000u; // 80185D24
  c->r[3]=0u+0x00000001u; // 80185D28
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80185D2C
  W8(c->r[30]+0x000007A8u,c->r[3]); // 80185D30
  W8(c->r[30]+0x000007A9u,c->r[0]); // 80185D34
  W32(c->r[30]+0x000007ACu,c->r[0]); // 80185D38
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80185D3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80185D40
  {uint32_t ea=c->r[30]+0x000007A4u; WF32(ea,c->f[0]);} // 80185D44
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80185D48
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80185D4C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80185D50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80185D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185D58
  c->r[30]=R32(c->r[1]+0x00000008u); // 80185D5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80185D60
  c->lr=c->r[0]; // 80185D64
  c->r[1]=c->r[1]+0x00000030u; // 80185D68
  return; // 80185D6C
}

// fn_80185D70
void f_80185D70(Ctx* __restrict c) {
  trace_call(0x80185D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185D70
  c->r[0]=c->lr; // 80185D74
  c->r[4]=0u+0x00000001u; // 80185D78
  c->r[5]=0u+0x00000000u; // 80185D7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185D80
  c->r[0]=0u+0x00000003u; // 80185D84
  W8(c->r[3]+0x000007A9u,c->r[4]); // 80185D88
  W32(c->r[3]+0x000007ACu,c->r[0]); // 80185D8C
  W8(c->r[3]+0x000007A8u,c->r[5]); // 80185D90
  c->r[3]=c->r[1]+0x00000008u; // 80185D94
  W8(c->r[1]+0x00000008u,c->r[5]); // 80185D98
  c->lr=0x80185DA0u; f_80046EFC(c); // 80185D9C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80185DA0
  c->r[4]=0u+0x00000000u; // 80185DA4
  c->lr=0x80185DACu; f_8011AB74(c); // 80185DA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185DAC
  c->lr=c->r[0]; // 80185DB0
  c->r[1]=c->r[1]+0x00000010u; // 80185DB4
  return; // 80185DB8
}

// fn_80185DBC
void f_80185DBC(Ctx* __restrict c) {
  trace_call(0x80185DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185DBC
  c->r[0]=c->lr; // 80185DC0
  c->r[4]=0u+0x00000016u; // 80185DC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185DC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185DCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80185DD0
  c->r[30]=c->r[3]|c->r[3]; // 80185DD4
  c->lr=0x80185DDCu; f_800D5F00(c); // 80185DD8
  cmps(c,0,(int32_t)c->r[3],0); // 80185DDC
  if (!crb(c,2)) { goto L_80185E88; } // 80185DE0
  c->r[0]=R8(c->r[30]+0x000007A8u); // 80185DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80185DE8
  if (crb(c,2)) { goto L_80185E88; } // 80185DEC
  c->r[0]=R8(c->r[30]+0x000007A9u); // 80185DF0
  cmps(c,0,(int32_t)c->r[0],0); // 80185DF4
  if (!crb(c,2)) { goto L_80185E50; } // 80185DF8
  {uint32_t ea=c->r[30]+0x000007A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185DFC
  c->r[3]=c->r[30]+0x000005D4u; // 80185E00
  c->lr=0x80185E08u; f_800E2B50(c); // 80185E04
  cmps(c,0,(int32_t)c->r[3],0); // 80185E08
  if (crb(c,2)) { goto L_80185E50; } // 80185E0C
  c->r[0]=0u+0x00000000u; // 80185E10
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80185E14
  c->r[3]=c->r[1]+0x0000000Cu; // 80185E18
  c->lr=0x80185E20u; f_80046EFC(c); // 80185E1C
  {uint32_t ea=c->r[2]+0xFFFFBF7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80185E20
  c->r[4]=0u+0x00000000u; // 80185E24
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80185E28
  c->r[5]=0u+0x00000000u; // 80185E2C
  c->f[3]=c->f[2]; // 80185E30
  {uint32_t ea=c->r[30]+0x000007A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80185E34
  c->r[6]=0u+0x00000000u; // 80185E38
  c->r[7]=0u+0x00000000u; // 80185E3C
  c->r[8]=0u+0xFFFFFFFFu; // 80185E40
  c->lr=0x80185E48u; f_8011A9B4(c); // 80185E44
  c->r[0]=0u+0x00000001u; // 80185E48
  W8(c->r[30]+0x000007A9u,c->r[0]); // 80185E4C
L_80185E50:;
  c->r[0]=R8(c->r[30]+0x000007A9u); // 80185E50
  cmps(c,0,(int32_t)c->r[0],0); // 80185E54
  if (crb(c,2)) { goto L_80185E88; } // 80185E58
  c->r[31]=0u+0x00000000u; // 80185E5C
  W8(c->r[1]+0x00000008u,c->r[31]); // 80185E60
  c->r[3]=c->r[1]+0x00000008u; // 80185E64
  c->lr=0x80185E6Cu; f_80046EFC(c); // 80185E68
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80185E6C
  c->lr=0x80185E74u; f_8011AC88(c); // 80185E70
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80185E74
  W32(c->r[30]+0x000007ACu,c->r[3]); // 80185E78
  cmpu(c,0,c->r[0],0x00000001u); // 80185E7C
  if (crb(c,1)) { goto L_80185E88; } // 80185E80
  W8(c->r[30]+0x000007A8u,c->r[31]); // 80185E84
L_80185E88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185E88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185E8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80185E90
  c->lr=c->r[0]; // 80185E94
  c->r[1]=c->r[1]+0x00000020u; // 80185E98
  return; // 80185E9C
}

// fn_80185EA0
void f_80185EA0(Ctx* __restrict c) {
  trace_call(0x80185EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185EA0
  c->r[0]=c->lr; // 80185EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185EA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80185EAC
  c->r[30]=c->r[3]|c->r[3]; // 80185EB0
  c->r[31]=0u+0xFFFFFFFFu; // 80185EB4
  c->r[0]=R8(c->r[3]+0x00000784u); // 80185EB8
  cmps(c,0,(int32_t)c->r[0],0); // 80185EBC
  if (crb(c,2)) { goto L_80185ECC; } // 80185EC0
  c->r[31]=0u+0x00000000u; // 80185EC4
  goto L_80185F90; // 80185EC8
L_80185ECC:;
  c->lr=0x80185ED0u; f_80186C54(c); // 80185ECC
  c->r[0]=R32(c->r[30]+0x0000077Cu); // 80185ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80185ED4
  if (crb(c,2)) { goto L_80185EF8; } // 80185ED8
  cmps(c,0,(int32_t)c->r[0],1); // 80185EDC
  if (crb(c,2)) { goto L_80185F2C; } // 80185EE0
  cmps(c,0,(int32_t)c->r[0],3); // 80185EE4
  if (crb(c,2)) { goto L_80185F2C; } // 80185EE8
  cmps(c,0,(int32_t)c->r[0],2); // 80185EEC
  if (crb(c,2)) { goto L_80185F60; } // 80185EF0
  goto L_80185F90; // 80185EF4
L_80185EF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80185EF8
  if (crb(c,2)) { goto L_80185F14; } // 80185EFC
  cmps(c,0,(int32_t)c->r[3],1); // 80185F00
  if (crb(c,2)) { goto L_80185F1C; } // 80185F04
  cmps(c,0,(int32_t)c->r[3],2); // 80185F08
  if (crb(c,2)) { goto L_80185F24; } // 80185F0C
  goto L_80185F90; // 80185F10
L_80185F14:;
  c->r[31]=0u+0x00000001u; // 80185F14
  goto L_80185F90; // 80185F18
L_80185F1C:;
  c->r[31]=0u+0x00000002u; // 80185F1C
  goto L_80185F90; // 80185F20
L_80185F24:;
  c->r[31]=0u+0x00000003u; // 80185F24
  goto L_80185F90; // 80185F28
L_80185F2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80185F2C
  if (crb(c,2)) { goto L_80185F48; } // 80185F30
  cmps(c,0,(int32_t)c->r[3],1); // 80185F34
  if (crb(c,2)) { goto L_80185F50; } // 80185F38
  cmps(c,0,(int32_t)c->r[3],2); // 80185F3C
  if (crb(c,2)) { goto L_80185F58; } // 80185F40
  goto L_80185F90; // 80185F44
L_80185F48:;
  c->r[31]=0u+0x00000004u; // 80185F48
  goto L_80185F90; // 80185F4C
L_80185F50:;
  c->r[31]=0u+0x00000005u; // 80185F50
  goto L_80185F90; // 80185F54
L_80185F58:;
  c->r[31]=0u+0x00000006u; // 80185F58
  goto L_80185F90; // 80185F5C
L_80185F60:;
  cmps(c,0,(int32_t)c->r[3],0); // 80185F60
  if (crb(c,2)) { goto L_80185F7C; } // 80185F64
  cmps(c,0,(int32_t)c->r[3],1); // 80185F68
  if (crb(c,2)) { goto L_80185F84; } // 80185F6C
  cmps(c,0,(int32_t)c->r[3],2); // 80185F70
  if (crb(c,2)) { goto L_80185F8C; } // 80185F74
  goto L_80185F90; // 80185F78
L_80185F7C:;
  c->r[31]=0u+0x00000007u; // 80185F7C
  goto L_80185F90; // 80185F80
L_80185F84:;
  c->r[31]=0u+0x00000008u; // 80185F84
  goto L_80185F90; // 80185F88
L_80185F8C:;
  c->r[31]=0u+0x00000009u; // 80185F8C
L_80185F90:;
  c->r[3]=c->r[31]|c->r[31]; // 80185F90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80185F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185F98
  c->lr=c->r[0]; // 80185F9C
  c->r[1]=c->r[1]+0x00000010u; // 80185FA0
  return; // 80185FA4
}

// fn_80185FA8
void f_80185FA8(Ctx* __restrict c) {
  trace_call(0x80185FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185FA8
  c->r[0]=c->lr; // 80185FAC
  W32(c->r[1]+0x00000064u,c->r[0]); // 80185FB0
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80185FB4
  c->r[31]=c->r[3]|c->r[3]; // 80185FB8
  c->lr=0x80185FC0u; f_80185EA0(c); // 80185FBC
  c->r[4]=c->r[3]|c->r[3]; // 80185FC0
  c->r[3]=R32(c->r[31]+0x00000434u); // 80185FC4
  c->lr=0x80185FCCu; f_800FE038(c); // 80185FC8
  c->r[3]=c->r[31]|c->r[31]; // 80185FCC
  c->lr=0x80185FD4u; f_80186C54(c); // 80185FD0
  c->r[29]=c->r[3]|c->r[3]; // 80185FD4
  c->r[3]=R32(c->r[31]+0x00000434u); // 80185FD8
  c->lr=0x80185FE0u; f_800FE6EC(c); // 80185FDC
  c->r[4]=R32(c->r[31]+0x0000077Cu); // 80185FE0
  c->r[30]=c->r[3]|c->r[3]; // 80185FE4
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80185FE8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80185FEC
  if (crb(c,2)) { goto L_80186024; } // 80185FF0
  c->r[0]=0u+0x00000000u; // 80185FF4
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80185FF8
  c->r[4]=R32(c->r[31]+0x00000434u); // 80185FFC
  c->r[3]=c->r[1]+0x00000030u; // 80186000
  c->r[5]=0u+0x00000000u; // 80186004
  c->lr=0x8018600Cu; f_800FE734(c); // 80186008
  c->r[3]=R32(c->r[1]+0x00000030u); // 8018600C
  c->r[0]=R32(c->r[31]+0x0000077Cu); // 80186010
  W32(c->r[31]+0x000005C4u,c->r[3]); // 80186014
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80186018
  W32(c->r[31]+0x000005CCu,c->r[29]); // 8018601C
  goto L_801860B0; // 80186020
L_80186024:;
  c->r[0]=R32(c->r[31]+0x000005CCu); // 80186024
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80186028
  if (crb(c,2)) { goto L_80186040; } // 8018602C
  c->r[0]=0u+0x00000000u; // 80186030
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80186034
  W32(c->r[31]+0x000005CCu,c->r[29]); // 80186038
  goto L_8018605C; // 8018603C
L_80186040:;
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80186040
  c->r[0]=c->r[4]+0x00000001u; // 80186044
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80186048
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018604C
  if (crb(c,1)) { goto L_8018605C; } // 80186050
  c->r[0]=0u+0x00000000u; // 80186054
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80186058
L_8018605C:;
  c->r[4]=R32(c->r[31]+0x00000434u); // 8018605C
  c->r[3]=c->r[1]+0x0000001Cu; // 80186060
  c->r[5]=R32(c->r[31]+0x000005D0u); // 80186064
  c->lr=0x8018606Cu; f_800FE734(c); // 80186068
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8018606C
  c->r[0]=R32(c->r[31]+0x000005C4u); // 80186070
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80186074
  if (!crb(c,2)) { goto L_80186098; } // 80186078
  c->r[3]=R32(c->r[31]+0x000005D0u); // 8018607C
  c->r[0]=c->r[3]+0x00000001u; // 80186080
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80186084
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80186088
  if (crb(c,1)) { goto L_80186098; } // 8018608C
  c->r[0]=0u+0x00000000u; // 80186090
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80186094
L_80186098:;
  c->r[4]=R32(c->r[31]+0x00000434u); // 80186098
  c->r[3]=c->r[1]+0x00000008u; // 8018609C
  c->r[5]=R32(c->r[31]+0x000005D0u); // 801860A0
  c->lr=0x801860A8u; f_800FE734(c); // 801860A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801860A8
  W32(c->r[31]+0x000005C4u,c->r[0]); // 801860AC
L_801860B0:;
  c->r[0]=R32(c->r[31]+0x000005C4u); // 801860B0
  cmps(c,0,(int32_t)c->r[0],6); // 801860B4
  if (!crb(c,2)) { goto L_801860C4; } // 801860B8
  c->r[0]=0u+0x00000000u; // 801860BC
  W8(c->r[31]+0x00000784u,c->r[0]); // 801860C0
L_801860C4:;
  c->r[3]=R32(c->r[31]+0x000005C4u); // 801860C4
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801860C8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801860CC
  c->lr=c->r[0]; // 801860D0
  c->r[1]=c->r[1]+0x00000060u; // 801860D4
  return; // 801860D8
}

// fn_801860DC
void f_801860DC(Ctx* __restrict c) {
  trace_call(0x801860DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801860DC
  c->r[0]=c->lr; // 801860E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801860E4
  c->r[0]=0u+0x00000001u; // 801860E8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801860EC
  c->r[31]=0u+0x00000000u; // 801860F0
  c->r[29]=c->r[3]|c->r[3]; // 801860F4
  c->r[30]=0u+0x00000000u; // 801860F8
  W32(c->r[3]+0x00000800u,c->r[4]); // 801860FC
  W8(c->r[3]+0x00000808u,c->r[0]); // 80186100
  W8(c->r[3]+0x00000809u,c->r[31]); // 80186104
  goto L_80186124; // 80186108
L_8018610C:;
  c->r[3]=c->r[29]+c->r[31]; // 8018610C
  c->r[3]=c->r[3]+0x000007D8u; // 80186110
  c->lr=0x80186118u; f_8007ECBC(c); // 80186114
  c->lr=0x8018611Cu; f_80181714(c); // 80186118
  c->r[30]=c->r[30]+0x00000001u; // 8018611C
  c->r[31]=c->r[31]+0x00000008u; // 80186120
L_80186124:;
  c->r[0]=R32(c->r[29]+0x00000800u); // 80186124
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80186128
  if (crb(c,0)) { IRQCHK(c); goto L_8018610C; } // 8018612C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80186130
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186134
  c->lr=c->r[0]; // 80186138
  c->r[1]=c->r[1]+0x00000020u; // 8018613C
  return; // 80186140
}

// fn_80186144
void f_80186144(Ctx* __restrict c) {
  trace_call(0x80186144u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186144
  c->r[0]=c->lr; // 80186148
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018614C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80186150
  c->r[31]=0u+0x00000000u; // 80186154
  c->r[29]=c->r[3]|c->r[3]; // 80186158
  c->r[30]=0u+0x00000000u; // 8018615C
  W32(c->r[3]+0x00000800u,c->r[31]); // 80186160
  W8(c->r[3]+0x00000808u,c->r[31]); // 80186164
  W8(c->r[3]+0x00000809u,c->r[31]); // 80186168
  goto L_80186188; // 8018616C
L_80186170:;
  c->r[3]=c->r[29]+c->r[31]; // 80186170
  c->r[3]=c->r[3]+0x000007D8u; // 80186174
  c->lr=0x8018617Cu; f_8007ECBC(c); // 80186178
  c->lr=0x80186180u; f_8018172C(c); // 8018617C
  c->r[30]=c->r[30]+0x00000001u; // 80186180
  c->r[31]=c->r[31]+0x00000008u; // 80186184
L_80186188:;
  c->r[0]=R32(c->r[29]+0x00000800u); // 80186188
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8018618C
  if (crb(c,0)) { IRQCHK(c); goto L_80186170; } // 80186190
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80186194
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186198
  c->lr=c->r[0]; // 8018619C
  c->r[1]=c->r[1]+0x00000020u; // 801861A0
  return; // 801861A4
}

// fn_801861A8
void f_801861A8(Ctx* __restrict c) {
  trace_call(0x801861A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801861A8
  c->r[0]=c->lr; // 801861AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801861B0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801861B4
  c->r[28]=c->r[3]|c->r[3]; // 801861B8
  c->r[0]=R8(c->r[3]+0x00000808u); // 801861BC
  cmps(c,0,(int32_t)c->r[0],0); // 801861C0
  if (crb(c,2)) { goto L_80186228; } // 801861C4
  c->r[30]=0u+0x00000000u; // 801861C8
  c->r[29]=0u+0x00000000u; // 801861CC
  c->r[31]=0u+0x00000000u; // 801861D0
  goto L_80186200; // 801861D4
L_801861D8:;
  c->r[3]=c->r[28]+c->r[31]; // 801861D8
  c->r[3]=c->r[3]+0x000007D8u; // 801861DC
  c->lr=0x801861E4u; f_8007ECBC(c); // 801861E0
  c->r[4]=0u+0x00000016u; // 801861E4
  c->lr=0x801861ECu; f_800D5F00(c); // 801861E8
  cmps(c,0,(int32_t)c->r[3],0); // 801861EC
  if (crb(c,2)) { goto L_801861F8; } // 801861F0
  c->r[30]=c->r[30]+0x00000001u; // 801861F4
L_801861F8:;
  c->r[29]=c->r[29]+0x00000001u; // 801861F8
  c->r[31]=c->r[31]+0x00000008u; // 801861FC
L_80186200:;
  c->r[0]=R32(c->r[28]+0x00000800u); // 80186200
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80186204
  if (crb(c,0)) { IRQCHK(c); goto L_801861D8; } // 80186208
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8018620C
  if (crb(c,1)) { goto L_80186228; } // 80186210
  c->r[0]=0u+0x00000000u; // 80186214
  c->r[3]=0u+0x00000001u; // 80186218
  W8(c->r[28]+0x00000809u,c->r[3]); // 8018621C
  W8(c->r[28]+0x00000808u,c->r[0]); // 80186220
  W32(c->r[28]+0x00000800u,c->r[0]); // 80186224
L_80186228:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80186228
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018622C
  c->lr=c->r[0]; // 80186230
  c->r[1]=c->r[1]+0x00000020u; // 80186234
  return; // 80186238
}

// fn_8018623C
void f_8018623C(Ctx* __restrict c) {
  trace_call(0x8018623Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018623C
  c->r[0]=c->lr; // 80186240
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186244
  W32(c->r[1]+0x00000024u,c->r[0]); // 80186248
  c->r[0]=0u+0x43300000u; // 8018624C
  c->r[3]=R32(c->r[3]+0x00000800u); // 80186250
  W32(c->r[1]+0x00000008u,c->r[0]); // 80186254
  cmps(c,0,(int32_t)c->r[3],1); // 80186258
  W32(c->r[1]+0x00000010u,c->r[0]); // 8018625C
  if (crb(c,2)) { goto L_80186288; } // 80186260
  cmps(c,0,(int32_t)c->r[3],2); // 80186264
  if (crb(c,2)) { goto L_801862B8; } // 80186268
  cmps(c,0,(int32_t)c->r[3],3); // 8018626C
  if (crb(c,2)) { goto L_801862E8; } // 80186270
  cmps(c,0,(int32_t)c->r[3],4); // 80186274
  if (crb(c,2)) { goto L_80186318; } // 80186278
  cmps(c,0,(int32_t)c->r[3],5); // 8018627C
  if (crb(c,2)) { goto L_80186348; } // 80186280
  goto L_80186370; // 80186284
L_80186288:;
  c->lr=0x8018628Cu; f_803B220C(c); // 80186288
  c->r[0]=c->r[3]^0x80000000u; // 8018628C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80186290
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[1]=RF64(ea);} // 80186294
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80186298
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8018629C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801862A0
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801862A4
  {uint32_t ea=c->r[2]+0xFFFFBF80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801862A8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801862AC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801862B0
  goto L_80186370; // 801862B4
L_801862B8:;
  c->lr=0x801862BCu; f_803B220C(c); // 801862B8
  c->r[0]=c->r[3]^0x80000000u; // 801862BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801862C0
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[1]=RF64(ea);} // 801862C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801862C8
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801862CC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801862D0
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801862D4
  {uint32_t ea=c->r[2]+0xFFFFBF88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801862D8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801862DC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801862E0
  goto L_80186370; // 801862E4
L_801862E8:;
  c->lr=0x801862ECu; f_803B220C(c); // 801862E8
  c->r[0]=c->r[3]^0x80000000u; // 801862EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801862F0
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[1]=RF64(ea);} // 801862F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801862F8
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801862FC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80186300
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186304
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186308
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8018630C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80186310
  goto L_80186370; // 80186314
L_80186318:;
  c->lr=0x8018631Cu; f_803B220C(c); // 80186318
  c->r[0]=c->r[3]^0x80000000u; // 8018631C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186320
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[1]=RF64(ea);} // 80186324
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80186328
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8018632C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80186330
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186334
  {uint32_t ea=c->r[2]+0xFFFFBF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186338
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8018633C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80186340
  goto L_80186370; // 80186344
L_80186348:;
  c->lr=0x8018634Cu; f_803B220C(c); // 80186348
  c->r[0]=c->r[3]^0x80000000u; // 8018634C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80186350
  {uint32_t ea=c->r[2]+0xFFFFBF00u; c->f[2]=RF64(ea);} // 80186354
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80186358
  {uint32_t ea=c->r[2]+0xFFFFBF4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018635C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80186360
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186364
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80186368
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 8018636C
L_80186370:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186370
  c->lr=c->r[0]; // 80186374
  c->r[1]=c->r[1]+0x00000020u; // 80186378
  return; // 8018637C
}

// fn_80186380
void f_80186380(Ctx* __restrict c) {
  trace_call(0x80186380u);
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186380
  c->r[4]=0u+0x00000001u; // 80186384
  c->r[0]=0u+0x00000000u; // 80186388
  {uint32_t ea=c->r[3]+0x0000080Cu; WF32(ea,c->f[0]);} // 8018638C
  {uint32_t ea=c->r[3]+0x00000810u; WF32(ea,c->f[1]);} // 80186390
  W8(c->r[3]+0x00000814u,c->r[4]); // 80186394
  W8(c->r[3]+0x00000815u,c->r[0]); // 80186398
  return; // 8018639C
}

// fn_801863A0
void f_801863A0(Ctx* __restrict c) {
  trace_call(0x801863A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801863A0
  c->r[0]=c->lr; // 801863A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801863A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801863AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801863B0
  c->r[30]=c->r[3]|c->r[3]; // 801863B4
  c->r[0]=R8(c->r[3]+0x00000814u); // 801863B8
  cmps(c,0,(int32_t)c->r[0],0); // 801863BC
  if (crb(c,2)) { goto L_80186400; } // 801863C0
  c->r[31]=0u+0x00000000u; // 801863C4
  W8(c->r[1]+0x00000008u,c->r[31]); // 801863C8
  c->r[3]=c->r[1]+0x00000008u; // 801863CC
  c->lr=0x801863D4u; f_8004714C(c); // 801863D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801863D4
  {uint32_t ea=c->r[30]+0x0000080Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801863D8
  {uint32_t ea=c->r[30]+0x00000810u; c->f[0]=c->ps1[0]=RF32(ea);} // 801863DC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801863E0
  {uint32_t ea=c->r[30]+0x0000080Cu; WF32(ea,c->f[1]);} // 801863E4
  fcmp(c,0,c->f[0],c->f[1]); // 801863E8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801863EC
  if (!crb(c,2)) { goto L_80186400; } // 801863F0
  c->r[0]=0u+0x00000001u; // 801863F4
  W8(c->r[30]+0x00000815u,c->r[0]); // 801863F8
  W8(c->r[30]+0x00000814u,c->r[31]); // 801863FC
L_80186400:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186400
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80186404
  c->r[30]=R32(c->r[1]+0x00000018u); // 80186408
  c->lr=c->r[0]; // 8018640C
  c->r[1]=c->r[1]+0x00000020u; // 80186410
  return; // 80186414
}

// fn_80186418
void f_80186418(Ctx* __restrict c) {
  trace_call(0x80186418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186418
  c->r[0]=c->lr; // 8018641C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186420
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80186424
  W32(c->r[1]+0x00000008u,c->r[30]); // 80186428
  c->r[30]=c->r[3]|c->r[3]; // 8018642C
  c->lr=0x80186434u; f_80186C28(c); // 80186430
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186434
  fcmp(c,0,c->f[0],c->f[1]); // 80186438
  if (!crb(c,0)) { goto L_80186470; } // 8018643C
  {uint32_t ea=c->r[2]+0xFFFFBF1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186440
  fcmp(c,0,c->f[1],c->f[0]); // 80186444
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80186448
  if (!crb(c,2)) { goto L_80186470; } // 8018644C
  c->r[31]=0u+0x80690000u; // 80186450
  c->r[3]=c->r[30]+0x00000678u; // 80186454
  c->r[31]=c->r[31]+0x00002220u; // 80186458
  c->r[4]=c->r[31]+0x00000211u; // 8018645C
  c->lr=0x80186464u; f_80258A74(c); // 80186460
  c->r[3]=c->r[30]+0x00000678u; // 80186464
  c->r[4]=c->r[31]+0x00000220u; // 80186468
  c->lr=0x80186470u; f_80258A74(c); // 8018646C
L_80186470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80186470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80186474
  c->r[30]=R32(c->r[1]+0x00000008u); // 80186478
  c->lr=c->r[0]; // 8018647C
  c->r[1]=c->r[1]+0x00000010u; // 80186480
  return; // 80186484
}

// fn_80186488
void f_80186488(Ctx* __restrict c) {
  trace_call(0x80186488u);
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80186488
  c->r[0]=R32(c->r[5]+0x000000C4u); // 8018648C
  c->r[4]=rotl(c->r[0],0)&0xFFBFFFFFu; // 80186490
  c->r[0]=c->r[4]+0x00400000u; // 80186494
  W32(c->r[5]+0x000000C4u,c->r[0]); // 80186498
  f_8005E00C(c); return; // 8018649C
}

// fn_801864A0
void f_801864A0(Ctx* __restrict c) {
  trace_call(0x801864A0u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801864A0
  c->r[0]=c->lr; // 801864A4
  cmps(c,0,(int32_t)c->r[4],-1); // 801864A8
  W32(c->r[1]+0x000001A4u,c->r[0]); // 801864AC
  {uint32_t ea=c->r[1]+0x00000190u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801864B0
  c->r[31]=c->r[1]|c->r[1]; // 801864B4
  c->r[30]=c->r[3]|c->r[3]; // 801864B8
  if (!crb(c,2)) { goto L_8018688C; } // 801864BC
  c->r[0]=R8(c->r[3]+0x00000785u); // 801864C0
  cmps(c,0,(int32_t)c->r[0],0); // 801864C4
  if (crb(c,2)) { goto L_8018653C; } // 801864C8
  c->lr=0x801864D0u; f_80182A20(c); // 801864CC
  c->r[4]=c->r[3]|c->r[3]; // 801864D0
  c->r[3]=c->r[30]|c->r[30]; // 801864D4
  c->lr=0x801864DCu; f_80062F4C(c); // 801864D8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801864DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801864E0
  c->r[3]=c->r[30]+c->r[0]; // 801864E4
  c->r[28]=R32(c->r[3]+0x00000014u); // 801864E8
  cmps(c,0,(int32_t)c->r[28],0); // 801864EC
  if (crb(c,2)) { goto L_80186518; } // 801864F0
  c->r[29]=0u+0x00000000u; // 801864F4
  W32(c->r[31]+0x0000018Cu,c->r[1]); // 801864F8
  W8(c->r[31]+0x0000003Cu,c->r[29]); // 801864FC
  c->lr=0x80186504u; f_80182A20(c); // 80186500
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186504
  c->r[0]=c->r[13]+0xFFFF8B84u; // 80186508
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018650C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186510
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186514
L_80186518:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186518
  c->r[0]=0u+0x00000000u; // 8018651C
  c->r[3]=c->r[30]|c->r[30]; // 80186520
  c->r[4]=c->r[28]|c->r[28]; // 80186524
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186528
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018652C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186530
  c->lr=0x80186538u; f_8006306C(c); // 80186534
  goto L_80186B5C; // 80186538
L_8018653C:;
  c->lr=0x80186540u; f_80185FA8(c); // 8018653C
  cmps(c,0,(int32_t)c->r[3],0); // 80186540
  if (crb(c,2)) { goto L_8018657C; } // 80186544
  cmps(c,0,(int32_t)c->r[3],1); // 80186548
  if (crb(c,2)) { goto L_801865EC; } // 8018654C
  cmps(c,0,(int32_t)c->r[3],2); // 80186550
  if (crb(c,2)) { goto L_8018665C; } // 80186554
  cmps(c,0,(int32_t)c->r[3],3); // 80186558
  if (crb(c,2)) { goto L_801866CC; } // 8018655C
  cmps(c,0,(int32_t)c->r[3],4); // 80186560
  if (crb(c,2)) { goto L_8018673C; } // 80186564
  cmps(c,0,(int32_t)c->r[3],5); // 80186568
  if (crb(c,2)) { goto L_801867AC; } // 8018656C
  cmps(c,0,(int32_t)c->r[3],6); // 80186570
  if (crb(c,2)) { goto L_8018681C; } // 80186574
  goto L_80186B5C; // 80186578
L_8018657C:;
  c->lr=0x80186580u; f_80182AC4(c); // 8018657C
  c->r[4]=c->r[3]|c->r[3]; // 80186580
  c->r[3]=c->r[30]|c->r[30]; // 80186584
  c->lr=0x8018658Cu; f_80062F4C(c); // 80186588
  c->r[0]=R8(c->r[30]+0x00000010u); // 8018658C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186590
  c->r[3]=c->r[30]+c->r[0]; // 80186594
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186598
  cmps(c,0,(int32_t)c->r[28],0); // 8018659C
  if (crb(c,2)) { goto L_801865C8; } // 801865A0
  c->r[29]=0u+0x00000000u; // 801865A4
  W32(c->r[31]+0x00000174u,c->r[1]); // 801865A8
  W8(c->r[31]+0x00000038u,c->r[29]); // 801865AC
  c->lr=0x801865B4u; f_80182AC4(c); // 801865B0
  W32(c->r[28]+0x00000000u,c->r[3]); // 801865B4
  c->r[0]=c->r[13]+0xFFFF8B88u; // 801865B8
  W32(c->r[28]+0x00000004u,c->r[0]); // 801865BC
  W32(c->r[28]+0x00000008u,c->r[29]); // 801865C0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801865C4
L_801865C8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801865C8
  c->r[0]=0u+0x00000000u; // 801865CC
  c->r[3]=c->r[30]|c->r[30]; // 801865D0
  c->r[4]=c->r[28]|c->r[28]; // 801865D4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801865D8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801865DC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801865E0
  c->lr=0x801865E8u; f_8006306C(c); // 801865E4
  goto L_80186B5C; // 801865E8
L_801865EC:;
  c->lr=0x801865F0u; f_8018279C(c); // 801865EC
  c->r[4]=c->r[3]|c->r[3]; // 801865F0
  c->r[3]=c->r[30]|c->r[30]; // 801865F4
  c->lr=0x801865FCu; f_80062F4C(c); // 801865F8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801865FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186600
  c->r[3]=c->r[30]+c->r[0]; // 80186604
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186608
  cmps(c,0,(int32_t)c->r[28],0); // 8018660C
  if (crb(c,2)) { goto L_80186638; } // 80186610
  c->r[29]=0u+0x00000000u; // 80186614
  W32(c->r[31]+0x0000015Cu,c->r[1]); // 80186618
  W8(c->r[31]+0x00000034u,c->r[29]); // 8018661C
  c->lr=0x80186624u; f_8018279C(c); // 80186620
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186624
  c->r[0]=c->r[13]+0xFFFF8B78u; // 80186628
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018662C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186630
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186634
L_80186638:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186638
  c->r[0]=0u+0x00000000u; // 8018663C
  c->r[3]=c->r[30]|c->r[30]; // 80186640
  c->r[4]=c->r[28]|c->r[28]; // 80186644
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186648
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018664C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186650
  c->lr=0x80186658u; f_8006306C(c); // 80186654
  goto L_80186B5C; // 80186658
L_8018665C:;
  c->lr=0x80186660u; f_801826F8(c); // 8018665C
  c->r[4]=c->r[3]|c->r[3]; // 80186660
  c->r[3]=c->r[30]|c->r[30]; // 80186664
  c->lr=0x8018666Cu; f_80062F4C(c); // 80186668
  c->r[0]=R8(c->r[30]+0x00000010u); // 8018666C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186670
  c->r[3]=c->r[30]+c->r[0]; // 80186674
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186678
  cmps(c,0,(int32_t)c->r[28],0); // 8018667C
  if (crb(c,2)) { goto L_801866A8; } // 80186680
  c->r[29]=0u+0x00000000u; // 80186684
  W32(c->r[31]+0x00000144u,c->r[1]); // 80186688
  W8(c->r[31]+0x00000030u,c->r[29]); // 8018668C
  c->lr=0x80186694u; f_801826F8(c); // 80186690
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186694
  c->r[0]=c->r[13]+0xFFFF8B74u; // 80186698
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018669C
  W32(c->r[28]+0x00000008u,c->r[29]); // 801866A0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801866A4
L_801866A8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801866A8
  c->r[0]=0u+0x00000000u; // 801866AC
  c->r[3]=c->r[30]|c->r[30]; // 801866B0
  c->r[4]=c->r[28]|c->r[28]; // 801866B4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801866B8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801866BC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801866C0
  c->lr=0x801866C8u; f_8006306C(c); // 801866C4
  goto L_80186B5C; // 801866C8
L_801866CC:;
  c->lr=0x801866D0u; f_80182654(c); // 801866CC
  c->r[4]=c->r[3]|c->r[3]; // 801866D0
  c->r[3]=c->r[30]|c->r[30]; // 801866D4
  c->lr=0x801866DCu; f_80062F4C(c); // 801866D8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801866DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801866E0
  c->r[3]=c->r[30]+c->r[0]; // 801866E4
  c->r[28]=R32(c->r[3]+0x00000014u); // 801866E8
  cmps(c,0,(int32_t)c->r[28],0); // 801866EC
  if (crb(c,2)) { goto L_80186718; } // 801866F0
  c->r[29]=0u+0x00000000u; // 801866F4
  W32(c->r[31]+0x0000012Cu,c->r[1]); // 801866F8
  W8(c->r[31]+0x0000002Cu,c->r[29]); // 801866FC
  c->lr=0x80186704u; f_80182654(c); // 80186700
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186704
  c->r[0]=c->r[13]+0xFFFF8B70u; // 80186708
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018670C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186710
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186714
L_80186718:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186718
  c->r[0]=0u+0x00000000u; // 8018671C
  c->r[3]=c->r[30]|c->r[30]; // 80186720
  c->r[4]=c->r[28]|c->r[28]; // 80186724
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186728
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018672C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186730
  c->lr=0x80186738u; f_8006306C(c); // 80186734
  goto L_80186B5C; // 80186738
L_8018673C:;
  c->lr=0x80186740u; f_801825B0(c); // 8018673C
  c->r[4]=c->r[3]|c->r[3]; // 80186740
  c->r[3]=c->r[30]|c->r[30]; // 80186744
  c->lr=0x8018674Cu; f_80062F4C(c); // 80186748
  c->r[0]=R8(c->r[30]+0x00000010u); // 8018674C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186750
  c->r[3]=c->r[30]+c->r[0]; // 80186754
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186758
  cmps(c,0,(int32_t)c->r[28],0); // 8018675C
  if (crb(c,2)) { goto L_80186788; } // 80186760
  c->r[29]=0u+0x00000000u; // 80186764
  W32(c->r[31]+0x00000114u,c->r[1]); // 80186768
  W8(c->r[31]+0x00000028u,c->r[29]); // 8018676C
  c->lr=0x80186774u; f_801825B0(c); // 80186770
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186774
  c->r[0]=c->r[13]+0xFFFF8B6Cu; // 80186778
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018677C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186780
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186784
L_80186788:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186788
  c->r[0]=0u+0x00000000u; // 8018678C
  c->r[3]=c->r[30]|c->r[30]; // 80186790
  c->r[4]=c->r[28]|c->r[28]; // 80186794
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186798
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018679C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801867A0
  c->lr=0x801867A8u; f_8006306C(c); // 801867A4
  goto L_80186B5C; // 801867A8
L_801867AC:;
  c->lr=0x801867B0u; f_8018250C(c); // 801867AC
  c->r[4]=c->r[3]|c->r[3]; // 801867B0
  c->r[3]=c->r[30]|c->r[30]; // 801867B4
  c->lr=0x801867BCu; f_80062F4C(c); // 801867B8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801867BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801867C0
  c->r[3]=c->r[30]+c->r[0]; // 801867C4
  c->r[28]=R32(c->r[3]+0x00000014u); // 801867C8
  cmps(c,0,(int32_t)c->r[28],0); // 801867CC
  if (crb(c,2)) { goto L_801867F8; } // 801867D0
  c->r[29]=0u+0x00000000u; // 801867D4
  W32(c->r[31]+0x000000FCu,c->r[1]); // 801867D8
  W8(c->r[31]+0x00000024u,c->r[29]); // 801867DC
  c->lr=0x801867E4u; f_8018250C(c); // 801867E0
  W32(c->r[28]+0x00000000u,c->r[3]); // 801867E4
  c->r[0]=c->r[13]+0xFFFF8B68u; // 801867E8
  W32(c->r[28]+0x00000004u,c->r[0]); // 801867EC
  W32(c->r[28]+0x00000008u,c->r[29]); // 801867F0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801867F4
L_801867F8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801867F8
  c->r[0]=0u+0x00000000u; // 801867FC
  c->r[3]=c->r[30]|c->r[30]; // 80186800
  c->r[4]=c->r[28]|c->r[28]; // 80186804
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186808
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018680C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186810
  c->lr=0x80186818u; f_8006306C(c); // 80186814
  goto L_80186B5C; // 80186818
L_8018681C:;
  c->lr=0x80186820u; f_80182468(c); // 8018681C
  c->r[4]=c->r[3]|c->r[3]; // 80186820
  c->r[3]=c->r[30]|c->r[30]; // 80186824
  c->lr=0x8018682Cu; f_80062F4C(c); // 80186828
  c->r[0]=R8(c->r[30]+0x00000010u); // 8018682C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186830
  c->r[3]=c->r[30]+c->r[0]; // 80186834
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186838
  cmps(c,0,(int32_t)c->r[28],0); // 8018683C
  if (crb(c,2)) { goto L_80186868; } // 80186840
  c->r[29]=0u+0x00000000u; // 80186844
  W32(c->r[31]+0x000000E4u,c->r[1]); // 80186848
  W8(c->r[31]+0x00000020u,c->r[29]); // 8018684C
  c->lr=0x80186854u; f_80182468(c); // 80186850
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186854
  c->r[0]=c->r[13]+0xFFFF8B64u; // 80186858
  W32(c->r[28]+0x00000004u,c->r[0]); // 8018685C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186860
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186864
L_80186868:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186868
  c->r[0]=0u+0x00000000u; // 8018686C
  c->r[3]=c->r[30]|c->r[30]; // 80186870
  c->r[4]=c->r[28]|c->r[28]; // 80186874
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186878
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018687C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186880
  c->lr=0x80186888u; f_8006306C(c); // 80186884
  goto L_80186B5C; // 80186888
L_8018688C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018688C
  if (crb(c,2)) { goto L_801868C0; } // 80186890
  cmps(c,0,(int32_t)c->r[4],1); // 80186894
  if (crb(c,2)) { goto L_80186930; } // 80186898
  cmps(c,0,(int32_t)c->r[4],2); // 8018689C
  if (crb(c,2)) { goto L_801869A0; } // 801868A0
  cmps(c,0,(int32_t)c->r[4],3); // 801868A4
  if (crb(c,2)) { goto L_80186A10; } // 801868A8
  cmps(c,0,(int32_t)c->r[4],4); // 801868AC
  if (crb(c,2)) { goto L_80186A80; } // 801868B0
  cmps(c,0,(int32_t)c->r[4],5); // 801868B4
  if (crb(c,2)) { goto L_80186AF0; } // 801868B8
  goto L_80186B5C; // 801868BC
L_801868C0:;
  c->lr=0x801868C4u; f_80182B68(c); // 801868C0
  c->r[4]=c->r[3]|c->r[3]; // 801868C4
  c->r[3]=c->r[30]|c->r[30]; // 801868C8
  c->lr=0x801868D0u; f_80062F4C(c); // 801868CC
  c->r[0]=R8(c->r[30]+0x00000010u); // 801868D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801868D4
  c->r[3]=c->r[30]+c->r[0]; // 801868D8
  c->r[28]=R32(c->r[3]+0x00000014u); // 801868DC
  cmps(c,0,(int32_t)c->r[28],0); // 801868E0
  if (crb(c,2)) { goto L_8018690C; } // 801868E4
  c->r[29]=0u+0x00000000u; // 801868E8
  W32(c->r[31]+0x000000CCu,c->r[1]); // 801868EC
  W8(c->r[31]+0x0000001Cu,c->r[29]); // 801868F0
  c->lr=0x801868F8u; f_80182B68(c); // 801868F4
  W32(c->r[28]+0x00000000u,c->r[3]); // 801868F8
  c->r[0]=c->r[13]+0xFFFF8B8Cu; // 801868FC
  W32(c->r[28]+0x00000004u,c->r[0]); // 80186900
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186904
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186908
L_8018690C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8018690C
  c->r[0]=0u+0x00000000u; // 80186910
  c->r[3]=c->r[30]|c->r[30]; // 80186914
  c->r[4]=c->r[28]|c->r[28]; // 80186918
  W32(c->r[28]+0x00000008u,c->r[0]); // 8018691C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186920
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186924
  c->lr=0x8018692Cu; f_8006306C(c); // 80186928
  goto L_80186B5C; // 8018692C
L_80186930:;
  c->lr=0x80186934u; f_801828E4(c); // 80186930
  c->r[4]=c->r[3]|c->r[3]; // 80186934
  c->r[3]=c->r[30]|c->r[30]; // 80186938
  c->lr=0x80186940u; f_80062F4C(c); // 8018693C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80186940
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186944
  c->r[3]=c->r[30]+c->r[0]; // 80186948
  c->r[28]=R32(c->r[3]+0x00000014u); // 8018694C
  cmps(c,0,(int32_t)c->r[28],0); // 80186950
  if (crb(c,2)) { goto L_8018697C; } // 80186954
  c->r[29]=0u+0x00000000u; // 80186958
  W32(c->r[31]+0x000000B4u,c->r[1]); // 8018695C
  W8(c->r[31]+0x00000018u,c->r[29]); // 80186960
  c->lr=0x80186968u; f_801828E4(c); // 80186964
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186968
  c->r[0]=c->r[13]+0xFFFF8B80u; // 8018696C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80186970
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186974
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186978
L_8018697C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8018697C
  c->r[0]=0u+0x00000000u; // 80186980
  c->r[3]=c->r[30]|c->r[30]; // 80186984
  c->r[4]=c->r[28]|c->r[28]; // 80186988
  W32(c->r[28]+0x00000008u,c->r[0]); // 8018698C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186990
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186994
  c->lr=0x8018699Cu; f_8006306C(c); // 80186998
  goto L_80186B5C; // 8018699C
L_801869A0:;
  c->lr=0x801869A4u; f_8018224C(c); // 801869A0
  c->r[4]=c->r[3]|c->r[3]; // 801869A4
  c->r[3]=c->r[30]|c->r[30]; // 801869A8
  c->lr=0x801869B0u; f_80062F4C(c); // 801869AC
  c->r[0]=R8(c->r[30]+0x00000010u); // 801869B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801869B4
  c->r[3]=c->r[30]+c->r[0]; // 801869B8
  c->r[28]=R32(c->r[3]+0x00000014u); // 801869BC
  cmps(c,0,(int32_t)c->r[28],0); // 801869C0
  if (crb(c,2)) { goto L_801869EC; } // 801869C4
  c->r[29]=0u+0x00000000u; // 801869C8
  W32(c->r[31]+0x0000009Cu,c->r[1]); // 801869CC
  W8(c->r[31]+0x00000014u,c->r[29]); // 801869D0
  c->lr=0x801869D8u; f_8018224C(c); // 801869D4
  W32(c->r[28]+0x00000000u,c->r[3]); // 801869D8
  c->r[0]=c->r[13]+0xFFFF8B5Cu; // 801869DC
  W32(c->r[28]+0x00000004u,c->r[0]); // 801869E0
  W32(c->r[28]+0x00000008u,c->r[29]); // 801869E4
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801869E8
L_801869EC:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801869EC
  c->r[0]=0u+0x00000000u; // 801869F0
  c->r[3]=c->r[30]|c->r[30]; // 801869F4
  c->r[4]=c->r[28]|c->r[28]; // 801869F8
  W32(c->r[28]+0x00000008u,c->r[0]); // 801869FC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186A00
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186A04
  c->lr=0x80186A0Cu; f_8006306C(c); // 80186A08
  goto L_80186B5C; // 80186A0C
L_80186A10:;
  c->lr=0x80186A14u; f_80182320(c); // 80186A10
  c->r[4]=c->r[3]|c->r[3]; // 80186A14
  c->r[3]=c->r[30]|c->r[30]; // 80186A18
  c->lr=0x80186A20u; f_80062F4C(c); // 80186A1C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80186A20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186A24
  c->r[3]=c->r[30]+c->r[0]; // 80186A28
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186A2C
  cmps(c,0,(int32_t)c->r[28],0); // 80186A30
  if (crb(c,2)) { goto L_80186A5C; } // 80186A34
  c->r[29]=0u+0x00000000u; // 80186A38
  W32(c->r[31]+0x00000084u,c->r[1]); // 80186A3C
  W8(c->r[31]+0x00000010u,c->r[29]); // 80186A40
  c->lr=0x80186A48u; f_80182320(c); // 80186A44
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186A48
  c->r[0]=c->r[13]+0xFFFF8B58u; // 80186A4C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80186A50
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186A54
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186A58
L_80186A5C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186A5C
  c->r[0]=0u+0x00000000u; // 80186A60
  c->r[3]=c->r[30]|c->r[30]; // 80186A64
  c->r[4]=c->r[28]|c->r[28]; // 80186A68
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186A6C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186A70
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186A74
  c->lr=0x80186A7Cu; f_8006306C(c); // 80186A78
  goto L_80186B5C; // 80186A7C
L_80186A80:;
  c->lr=0x80186A84u; f_801823C4(c); // 80186A80
  c->r[4]=c->r[3]|c->r[3]; // 80186A84
  c->r[3]=c->r[30]|c->r[30]; // 80186A88
  c->lr=0x80186A90u; f_80062F4C(c); // 80186A8C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80186A90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186A94
  c->r[3]=c->r[30]+c->r[0]; // 80186A98
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186A9C
  cmps(c,0,(int32_t)c->r[28],0); // 80186AA0
  if (crb(c,2)) { goto L_80186ACC; } // 80186AA4
  c->r[29]=0u+0x00000000u; // 80186AA8
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 80186AAC
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 80186AB0
  c->lr=0x80186AB8u; f_801823C4(c); // 80186AB4
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186AB8
  c->r[0]=c->r[13]+0xFFFF8B60u; // 80186ABC
  W32(c->r[28]+0x00000004u,c->r[0]); // 80186AC0
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186AC4
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186AC8
L_80186ACC:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186ACC
  c->r[0]=0u+0x00000000u; // 80186AD0
  c->r[3]=c->r[30]|c->r[30]; // 80186AD4
  c->r[4]=c->r[28]|c->r[28]; // 80186AD8
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186ADC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186AE0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186AE4
  c->lr=0x80186AECu; f_8006306C(c); // 80186AE8
  goto L_80186B5C; // 80186AEC
L_80186AF0:;
  c->lr=0x80186AF4u; f_80182840(c); // 80186AF0
  c->r[4]=c->r[3]|c->r[3]; // 80186AF4
  c->r[3]=c->r[30]|c->r[30]; // 80186AF8
  c->lr=0x80186B00u; f_80062F4C(c); // 80186AFC
  c->r[0]=R8(c->r[30]+0x00000010u); // 80186B00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186B04
  c->r[3]=c->r[30]+c->r[0]; // 80186B08
  c->r[28]=R32(c->r[3]+0x00000014u); // 80186B0C
  cmps(c,0,(int32_t)c->r[28],0); // 80186B10
  if (crb(c,2)) { goto L_80186B3C; } // 80186B14
  c->r[29]=0u+0x00000000u; // 80186B18
  W32(c->r[31]+0x00000054u,c->r[1]); // 80186B1C
  W8(c->r[31]+0x00000008u,c->r[29]); // 80186B20
  c->lr=0x80186B28u; f_80182840(c); // 80186B24
  W32(c->r[28]+0x00000000u,c->r[3]); // 80186B28
  c->r[0]=c->r[13]+0xFFFF8B7Cu; // 80186B2C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80186B30
  W32(c->r[28]+0x00000008u,c->r[29]); // 80186B34
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80186B38
L_80186B3C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80186B3C
  c->r[0]=0u+0x00000000u; // 80186B40
  c->r[3]=c->r[30]|c->r[30]; // 80186B44
  c->r[4]=c->r[28]|c->r[28]; // 80186B48
  W32(c->r[28]+0x00000008u,c->r[0]); // 80186B4C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80186B50
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80186B54
  c->lr=0x80186B5Cu; f_8006306C(c); // 80186B58
L_80186B5C:;
  c->r[10]=c->r[31]|c->r[31]; // 80186B5C
  {uint32_t ea=c->r[10]+0x00000190u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80186B60
  c->r[10]=R32(c->r[1]+0x00000000u); // 80186B64
  c->r[0]=R32(c->r[10]+0x00000004u); // 80186B68
  c->r[1]=c->r[10]|c->r[10]; // 80186B6C
  c->lr=c->r[0]; // 80186B70
  return; // 80186B74
}

// fn_80186B78
void f_80186B78(Ctx* __restrict c) {
  trace_call(0x80186B78u);
  c->r[0]=R32(c->r[3]+0x0000077Cu); // 80186B78
  cmps(c,0,(int32_t)c->r[0],0); // 80186B7C
  if (crb(c,2)) { goto L_80186BA0; } // 80186B80
  cmps(c,0,(int32_t)c->r[0],1); // 80186B84
  if (crb(c,2)) { goto L_80186BAC; } // 80186B88
  cmps(c,0,(int32_t)c->r[0],2); // 80186B8C
  if (crb(c,2)) { goto L_80186BB8; } // 80186B90
  cmps(c,0,(int32_t)c->r[0],3); // 80186B94
  if (crb(c,2)) { goto L_80186BC4; } // 80186B98
  return; // 80186B9C
L_80186BA0:;
  c->r[0]=0u+0x00000003u; // 80186BA0
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186BA4
  return; // 80186BA8
L_80186BAC:;
  c->r[0]=0u+0x00000000u; // 80186BAC
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186BB0
  return; // 80186BB4
L_80186BB8:;
  c->r[0]=0u+0x00000001u; // 80186BB8
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186BBC
  return; // 80186BC0
L_80186BC4:;
  c->r[0]=0u+0x00000002u; // 80186BC4
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186BC8
  return; // 80186BCC
}

// fn_80186BD0
void f_80186BD0(Ctx* __restrict c) {
  trace_call(0x80186BD0u);
  c->r[0]=R32(c->r[3]+0x0000077Cu); // 80186BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80186BD4
  if (crb(c,2)) { goto L_80186BF8; } // 80186BD8
  cmps(c,0,(int32_t)c->r[0],1); // 80186BDC
  if (crb(c,2)) { goto L_80186C04; } // 80186BE0
  cmps(c,0,(int32_t)c->r[0],2); // 80186BE4
  if (crb(c,2)) { goto L_80186C10; } // 80186BE8
  cmps(c,0,(int32_t)c->r[0],3); // 80186BEC
  if (crb(c,2)) { goto L_80186C1C; } // 80186BF0
  return; // 80186BF4
L_80186BF8:;
  c->r[0]=0u+0x00000001u; // 80186BF8
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186BFC
  return; // 80186C00
L_80186C04:;
  c->r[0]=0u+0x00000002u; // 80186C04
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186C08
  return; // 80186C0C
L_80186C10:;
  c->r[0]=0u+0x00000003u; // 80186C10
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186C14
  return; // 80186C18
L_80186C1C:;
  c->r[0]=0u+0x00000000u; // 80186C1C
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80186C20
  return; // 80186C24
}

// fn_80186C28
void f_80186C28(Ctx* __restrict c) {
  trace_call(0x80186C28u);
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80186C28
  c->r[3]=R32(c->r[3]+0x00000444u); // 80186C2C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186C30
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186C34
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C38
  fcmp(c,0,c->f[1],c->f[2]); // 80186C3C
  if (!crb(c,0)) return; // 80186C40
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 80186C44
  {uint32_t ea=c->r[2]+0xFFFFBF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80186C4C
  return; // 80186C50
}

// fn_80186C54
void f_80186C54(Ctx* __restrict c) {
  trace_call(0x80186C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186C54
  c->r[0]=c->lr; // 80186C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186C5C
  c->lr=0x80186C64u; f_80186C28(c); // 80186C60
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C64
  fcmp(c,0,c->f[0],c->f[1]); // 80186C68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80186C6C
  if (!crb(c,2)) { goto L_80186C8C; } // 80186C70
  {uint32_t ea=c->r[2]+0xFFFFBF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C74
  fcmp(c,0,c->f[1],c->f[0]); // 80186C78
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80186C7C
  if (!crb(c,2)) { goto L_80186C8C; } // 80186C80
  c->r[3]=0u+0x00000000u; // 80186C84
  goto L_80186CB4; // 80186C88
L_80186C8C:;
  {uint32_t ea=c->r[2]+0xFFFFBF98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C8C
  fcmp(c,0,c->f[0],c->f[1]); // 80186C90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80186C94
  if (!crb(c,2)) { goto L_80186CB0; } // 80186C98
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186C9C
  fcmp(c,0,c->f[1],c->f[0]); // 80186CA0
  if (!crb(c,0)) { goto L_80186CB0; } // 80186CA4
  c->r[3]=0u+0x00000001u; // 80186CA8
  goto L_80186CB4; // 80186CAC
L_80186CB0:;
  c->r[3]=0u+0x00000002u; // 80186CB0
L_80186CB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80186CB4
  c->lr=c->r[0]; // 80186CB8
  c->r[1]=c->r[1]+0x00000010u; // 80186CBC
  return; // 80186CC0
}

// fn_80186CC4
void f_80186CC4(Ctx* __restrict c) {
  trace_call(0x80186CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186CC4
  c->r[0]=c->lr; // 80186CC8
  cmps(c,0,(int32_t)c->r[4],0); // 80186CCC
  W32(c->r[1]+0x00000054u,c->r[0]); // 80186CD0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80186CD4
  c->r[31]=c->r[3]|c->r[3]; // 80186CD8
  if (crb(c,2)) { goto L_80186D04; } // 80186CDC
  cmps(c,0,(int32_t)c->r[4],1); // 80186CE0
  if (crb(c,2)) { goto L_80186D3C; } // 80186CE4
  cmps(c,0,(int32_t)c->r[4],2); // 80186CE8
  if (crb(c,2)) { goto L_80186D74; } // 80186CEC
  cmps(c,0,(int32_t)c->r[4],3); // 80186CF0
  if (crb(c,2)) { goto L_80186DAC; } // 80186CF4
  cmps(c,0,(int32_t)c->r[4],4); // 80186CF8
  if (crb(c,2)) { goto L_80186DE4; } // 80186CFC
  goto L_80186E18; // 80186D00
L_80186D04:;
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D04
  c->r[3]=c->r[1]+0x00000038u; // 80186D08
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186D0C
  {uint32_t ea=c->r[2]+0xFFFFBF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186D10
  c->lr=0x80186D18u; f_8005FD70(c); // 80186D14
  c->r[4]=c->r[3]|c->r[3]; // 80186D18
  c->r[3]=c->r[31]+0x000001B8u; // 80186D1C
  c->lr=0x80186D24u; f_8005CDC8(c); // 80186D20
  {uint32_t ea=c->r[2]+0xFFFFBF9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D24
  c->r[3]=c->r[31]|c->r[31]; // 80186D28
  c->lr=0x80186D30u; f_80186E2C(c); // 80186D2C
  c->r[0]=0u+0x00000000u; // 80186D30
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80186D34
  goto L_80186E18; // 80186D38
L_80186D3C:;
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D3C
  c->r[3]=c->r[1]+0x0000002Cu; // 80186D40
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186D44
  {uint32_t ea=c->r[2]+0xFFFFBF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186D48
  c->lr=0x80186D50u; f_8005FD70(c); // 80186D4C
  c->r[4]=c->r[3]|c->r[3]; // 80186D50
  c->r[3]=c->r[31]+0x000001B8u; // 80186D54
  c->lr=0x80186D5Cu; f_8005CDC8(c); // 80186D58
  {uint32_t ea=c->r[2]+0xFFFFBFA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D5C
  c->r[3]=c->r[31]|c->r[31]; // 80186D60
  c->lr=0x80186D68u; f_80186E2C(c); // 80186D64
  c->r[0]=0u+0x00000001u; // 80186D68
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80186D6C
  goto L_80186E18; // 80186D70
L_80186D74:;
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D74
  c->r[3]=c->r[1]+0x00000020u; // 80186D78
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186D7C
  {uint32_t ea=c->r[2]+0xFFFFBF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186D80
  c->lr=0x80186D88u; f_8005FD70(c); // 80186D84
  c->r[4]=c->r[3]|c->r[3]; // 80186D88
  c->r[3]=c->r[31]+0x000001B8u; // 80186D8C
  c->lr=0x80186D94u; f_8005CDC8(c); // 80186D90
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186D94
  c->r[3]=c->r[31]|c->r[31]; // 80186D98
  c->lr=0x80186DA0u; f_80186E2C(c); // 80186D9C
  c->r[0]=0u+0x00000002u; // 80186DA0
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80186DA4
  goto L_80186E18; // 80186DA8
L_80186DAC:;
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186DAC
  c->r[3]=c->r[1]+0x00000014u; // 80186DB0
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186DB4
  {uint32_t ea=c->r[2]+0xFFFFBF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186DB8
  c->lr=0x80186DC0u; f_8005FD70(c); // 80186DBC
  c->r[4]=c->r[3]|c->r[3]; // 80186DC0
  c->r[3]=c->r[31]+0x000001B8u; // 80186DC4
  c->lr=0x80186DCCu; f_8005CDC8(c); // 80186DC8
  {uint32_t ea=c->r[2]+0xFFFFBF20u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186DCC
  c->r[3]=c->r[31]|c->r[31]; // 80186DD0
  c->lr=0x80186DD8u; f_80186E2C(c); // 80186DD4
  c->r[0]=0u+0x00000003u; // 80186DD8
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80186DDC
  goto L_80186E18; // 80186DE0
L_80186DE4:;
  {uint32_t ea=c->r[2]+0xFFFFBF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80186DE4
  c->r[3]=c->r[1]+0x00000008u; // 80186DE8
  {uint32_t ea=c->r[2]+0xFFFFBF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186DEC
  {uint32_t ea=c->r[2]+0xFFFFBFA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186DF0
  c->lr=0x80186DF8u; f_8005FD70(c); // 80186DF4
  c->r[4]=c->r[3]|c->r[3]; // 80186DF8
  c->r[3]=c->r[31]+0x000001B8u; // 80186DFC
  c->lr=0x80186E04u; f_8005CDC8(c); // 80186E00
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186E04
  c->r[3]=c->r[31]|c->r[31]; // 80186E08
  c->lr=0x80186E10u; f_80186E2C(c); // 80186E0C
  c->r[0]=0u+0x00000002u; // 80186E10
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80186E14
L_80186E18:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80186E18
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80186E1C
  c->lr=c->r[0]; // 80186E20
  c->r[1]=c->r[1]+0x00000050u; // 80186E24
  return; // 80186E28
}

// fn_80186E2C
void f_80186E2C(Ctx* __restrict c) {
  trace_call(0x80186E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186E2C
  c->r[0]=c->lr; // 80186E30
  W32(c->r[1]+0x00000064u,c->r[0]); // 80186E34
  c->r[4]=c->r[1]+0x00000018u; // 80186E38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80186E3C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80186E40
  c->f[31]=c->f[1]; // 80186E44
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80186E48
  c->r[31]=c->r[3]|c->r[3]; // 80186E4C
  c->r[3]=c->r[3]+0x000001B8u; // 80186E50
  c->lr=0x80186E58u; f_80382F2C(c); // 80186E54
  {uint32_t ea=c->r[2]+0xFFFFBFA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E58
  c->r[3]=c->r[31]+0x000001B8u; // 80186E5C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 80186E60
  c->lr=0x80186E68u; f_80382F00(c); // 80186E64
  {uint32_t ea=c->r[2]+0xFFFFBEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186E68
  c->r[3]=c->r[31]+0x000001B8u; // 80186E6C
  {uint32_t ea=c->r[2]+0xFFFFBFACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E70
  c->f[3]=c->f[1]; // 80186E74
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 80186E78
  c->lr=0x80186E80u; f_804E18A0(c); // 80186E7C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80186E80
  c->r[3]=c->r[1]+0x00000008u; // 80186E84
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80186E88
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 80186E8C
  c->lr=0x80186E94u; f_8005FD70(c); // 80186E90
  c->r[3]=c->r[31]+0x000001B8u; // 80186E94
  c->r[4]=c->r[1]+0x00000008u; // 80186E98
  c->lr=0x80186EA0u; f_8005CDC8(c); // 80186E9C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80186EA0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80186EA4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80186EA8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80186EAC
  c->lr=c->r[0]; // 80186EB0
  c->r[1]=c->r[1]+0x00000060u; // 80186EB4
  return; // 80186EB8
}

// fn_80186EBC
void f_80186EBC(Ctx* __restrict c) {
  trace_call(0x80186EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186EBC
  c->r[0]=c->lr; // 80186EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186EC4
  c->lr=0x80186ECCu; f_80186C28(c); // 80186EC8
  {uint32_t ea=c->r[2]+0xFFFFBFB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186ECC
  fcmp(c,0,c->f[0],c->f[1]); // 80186ED0
  if (!crb(c,0)) { goto L_80186EE4; } // 80186ED4
  c->r[3]=0u+0x00010000u; // 80186ED8
  c->r[3]=c->r[3]+0xFFFFC350u; // 80186EDC
  goto L_80186EEC; // 80186EE0
L_80186EE4:;
  c->r[3]=0u+0x00010000u; // 80186EE4
  c->r[3]=c->r[3]+0xFFFFC351u; // 80186EE8
L_80186EEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80186EEC
  c->lr=c->r[0]; // 80186EF0
  c->r[1]=c->r[1]+0x00000010u; // 80186EF4
  return; // 80186EF8
}

// fn_80186EFC
void f_80186EFC(Ctx* __restrict c) {
  trace_call(0x80186EFCu);
  return; // 80186EFC
}

// fn_80186F00
void f_80186F00(Ctx* __restrict c) {
  trace_call(0x80186F00u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80186F00
  f_801837B8(c); return; // 80186F04
}

// fn_80186F08
void f_80186F08(Ctx* __restrict c) {
  trace_call(0x80186F08u);
  c->r[3]=c->r[3]+0xFFFFFA40u; // 80186F08
  f_80183FE8(c); return; // 80186F0C
}

// fn_80186F10
void f_80186F10(Ctx* __restrict c) {
  trace_call(0x80186F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186F10
  c->r[0]=c->lr; // 80186F14
  W32(c->r[1]+0x00000044u,c->r[0]); // 80186F18
  c->r[11]=c->r[1]+0x00000040u; // 80186F1C
  c->lr=0x80186F24u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186F20
  c->r[27]=c->r[3]|c->r[3]; // 80186F24
  c->r[31]=0u+0x80690000u; // 80186F28
  c->r[28]=c->r[27]|c->r[27]; // 80186F2C
  c->r[30]=c->r[27]|c->r[27]; // 80186F30
  c->r[31]=c->r[31]+0x00002450u; // 80186F34
  c->lr=0x80186F3Cu; f_801878A4(c); // 80186F38
  c->r[4]=0u+0x806D0000u; // 80186F3C
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 80186F40
  c->r[0]=0u+0x00000000u; // 80186F44
  W32(c->r[27]+0x00000000u,c->r[3]); // 80186F48
  c->r[4]=c->r[4]+0x000038C0u; // 80186F4C
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80186F50
  W32(c->r[27]+0x00000004u,c->r[0]); // 80186F54
  W32(c->r[27]+0x00000008u,c->r[0]); // 80186F58
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80186F5C
  W8(c->r[27]+0x00000010u,c->r[0]); // 80186F60
  W32(c->r[27]+0x00000014u,c->r[0]); // 80186F64
  W32(c->r[27]+0x00000018u,c->r[0]); // 80186F68
  W32(c->r[27]+0x00000020u,c->r[0]); // 80186F6C
  W32(c->r[27]+0x00000024u,c->r[0]); // 80186F70
  if (crb(c,2)) { goto L_80186F7C; } // 80186F74
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 80186F78
L_80186F7C:;
  c->lr=0x80186F80u; f_800797AC(c); // 80186F7C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80186F80
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 80186F84
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186F88
  if (!crb(c,2)) { goto L_80186F98; } // 80186F8C
  c->r[0]=0u+0x00000001u; // 80186F90
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186F94
L_80186F98:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 80186F98
  c->r[5]=0u+0x0000012Cu; // 80186F9C
  c->r[4]=c->r[7]+0x00000001u; // 80186FA0
  c->r[0]=divwu(c->r[4],c->r[5]); // 80186FA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80186FA8
  c->r[6]=c->r[4]-c->r[0]; // 80186FAC
  goto L_80186FFC; // 80186FB0
L_80186FB4:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80186FB4
  c->r[4]=c->r[3]+c->r[0]; // 80186FB8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80186FBC
  cmps(c,0,(int32_t)c->r[0],0); // 80186FC0
  if (!crb(c,2)) { goto L_80186FEC; } // 80186FC4
  W32(c->r[3]+0x00000004u,c->r[6]); // 80186FC8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80186FCC
  W32(c->r[4]+0x00000008u,c->r[0]); // 80186FD0
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80186FD4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80186FD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80186FDC
  W32(c->r[1]+0x00000010u,c->r[4]); // 80186FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186FE4
  goto L_80187018; // 80186FE8
L_80186FEC:;
  c->r[4]=c->r[6]+0x00000001u; // 80186FEC
  c->r[0]=divwu(c->r[4],c->r[5]); // 80186FF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80186FF4
  c->r[6]=c->r[4]-c->r[0]; // 80186FF8
L_80186FFC:;
  cmpu(c,0,c->r[6],c->r[7]); // 80186FFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80186FB4; } // 80187000
  c->r[0]=0u+0x00000000u; // 80187004
  W32(c->r[1]+0x00000008u,c->r[0]); // 80187008
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018700C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80187010
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187014
L_80187018:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 80187018
  c->r[25]=c->r[27]+0x00000028u; // 8018701C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80187020
  c->r[3]=c->r[25]|c->r[25]; // 80187024
  W32(c->r[1]+0x00000018u,c->r[4]); // 80187028
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8018702C
  W32(c->r[27]+0x00000020u,c->r[4]); // 80187030
  W32(c->r[27]+0x00000024u,c->r[0]); // 80187034
  c->lr=0x8018703Cu; f_800506C0(c); // 80187038
  cmps(c,0,(int32_t)c->r[25],0); // 8018703C
  c->r[3]=c->r[25]|c->r[25]; // 80187040
  if (crb(c,2)) { goto L_8018704C; } // 80187044
  c->r[3]=c->r[25]+0xFFFFFFD8u; // 80187048
L_8018704C:;
  c->r[29]=0u+0x00000001u; // 8018704C
  W32(c->r[25]+0x00000008u,c->r[3]); // 80187050
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 80187054
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 80187058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018705C
  if (!crb(c,2)) { goto L_801870A0; } // 80187060
  c->r[26]=0u+0x80740000u; // 80187064
  c->r[3]=c->r[26]+0x000074BCu; // 80187068
  c->lr=0x80187070u; f_800506C0(c); // 8018706C
  c->r[6]=0u+0x806D0000u; // 80187070
  c->r[4]=0u+0x80060000u; // 80187074
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 80187078
  c->r[3]=c->r[26]+0x000074BCu; // 8018707C
  c->r[0]=c->r[6]+0x00000008u; // 80187080
  c->r[5]=0u+0x80750000u; // 80187084
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187088
  c->r[4]=c->r[4]+0x000057D4u; // 8018708C
  c->r[5]=c->r[5]+0x00004B14u; // 80187090
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187094
  c->lr=0x8018709Cu; f_803A92B8(c); // 80187098
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 8018709C
L_801870A0:;
  c->r[3]=0u+0x80740000u; // 801870A0
  c->r[5]=c->r[25]|c->r[25]; // 801870A4
  c->r[3]=c->r[3]+0x000074BCu; // 801870A8
  c->r[4]=c->r[3]|c->r[3]; // 801870AC
  c->lr=0x801870B4u; f_802DDCA8(c); // 801870B0
  c->r[26]=c->r[27]+0x00000038u; // 801870B4
  c->r[3]=c->r[26]|c->r[26]; // 801870B8
  c->lr=0x801870C0u; f_800506C0(c); // 801870BC
  cmps(c,0,(int32_t)c->r[26],0); // 801870C0
  c->r[0]=c->r[26]|c->r[26]; // 801870C4
  if (crb(c,2)) { goto L_801870D0; } // 801870C8
  c->r[0]=c->r[26]+0xFFFFFFC8u; // 801870CC
L_801870D0:;
  c->r[29]=c->r[27]+0x00000044u; // 801870D0
  W32(c->r[26]+0x00000008u,c->r[0]); // 801870D4
  c->r[3]=c->r[29]|c->r[29]; // 801870D8
  c->lr=0x801870E0u; f_800506C0(c); // 801870DC
  cmps(c,0,(int32_t)c->r[29],0); // 801870E0
  c->r[0]=c->r[29]|c->r[29]; // 801870E4
  if (crb(c,2)) { goto L_801870F0; } // 801870E8
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 801870EC
L_801870F0:;
  c->r[3]=0u+0x806F0000u; // 801870F0
  c->r[26]=0u+0x00000000u; // 801870F4
  c->r[3]=c->r[3]+0x00000E80u; // 801870F8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801870FC
  W8(c->r[29]+0x0000000Cu,c->r[26]); // 80187100
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80187104
  W32(c->r[27]+0x00000058u,c->r[26]); // 80187108
  W32(c->r[27]+0x00000064u,c->r[26]); // 8018710C
  c->lr=0x80187114u; f_8007BDCC(c); // 80187110
  c->r[0]=c->r[13]+0xFFFF8114u; // 80187114
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 80187118
  W32(c->r[27]+0x000000A0u,c->r[0]); // 8018711C
  W32(c->r[27]+0x000000A4u,c->r[26]); // 80187120
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80187124
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187128
  if (!crb(c,2)) { goto L_8018714C; } // 8018712C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80187130
  c->r[0]=0u+0x00000001u; // 80187134
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80187138
  c->r[3]=c->r[4]+0x00000001u; // 8018713C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80187140
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80187144
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 80187148
L_8018714C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE50u); // 8018714C
  c->r[0]=c->r[13]+0xFFFF8110u; // 80187150
  c->r[26]=0u+0x00000000u; // 80187154
  W32(c->r[27]+0x000000A8u,c->r[3]); // 80187158
  W32(c->r[27]+0x000000ACu,c->r[0]); // 8018715C
  W32(c->r[27]+0x000000B0u,c->r[26]); // 80187160
  c->lr=0x80187168u; f_80076D18(c); // 80187164
  c->r[0]=c->r[13]+0xFFFF810Cu; // 80187168
  W32(c->r[27]+0x000000B4u,c->r[3]); // 8018716C
  W32(c->r[27]+0x000000B8u,c->r[0]); // 80187170
  W32(c->r[27]+0x000000BCu,c->r[26]); // 80187174
  c->lr=0x8018717Cu; f_80076CB0(c); // 80187178
  c->r[0]=c->r[13]+0xFFFF8108u; // 8018717C
  W32(c->r[27]+0x000000C0u,c->r[3]); // 80187180
  W32(c->r[27]+0x000000C4u,c->r[0]); // 80187184
  W32(c->r[27]+0x000000C8u,c->r[26]); // 80187188
  c->lr=0x80187190u; f_80076CE4(c); // 8018718C
  W32(c->r[27]+0x000000CCu,c->r[3]); // 80187190
  c->r[0]=c->r[13]+0xFFFF8104u; // 80187194
  c->r[3]=c->r[27]+0x000000D8u; // 80187198
  W32(c->r[27]+0x000000D0u,c->r[0]); // 8018719C
  W32(c->r[27]+0x000000D4u,c->r[26]); // 801871A0
  c->lr=0x801871A8u; f_800506C0(c); // 801871A4
  c->r[4]=0u+0x806F0000u; // 801871A8
  c->r[3]=0u+0x00000006u; // 801871AC
  c->r[4]=c->r[4]+0x000007A0u; // 801871B0
  c->r[29]=c->r[27]+0x000000FCu; // 801871B4
  c->r[0]=c->r[4]+0x00000024u; // 801871B8
  W32(c->r[27]+0x000000E8u,c->r[3]); // 801871BC
  c->r[3]=c->r[29]+0x0000000Cu; // 801871C0
  W32(c->r[27]+0x000000ECu,c->r[26]); // 801871C4
  W32(c->r[27]+0x000000F8u,c->r[26]); // 801871C8
  W32(c->r[27]+0x000000FCu,c->r[4]); // 801871CC
  W32(c->r[27]+0x00000100u,c->r[0]); // 801871D0
  c->lr=0x801871D8u; f_800506C0(c); // 801871D4
  c->r[3]=c->r[29]+0x00000018u; // 801871D8
  c->lr=0x801871E0u; f_800506C0(c); // 801871DC
  W32(c->r[29]+0x00000024u,c->r[26]); // 801871E0
  c->r[3]=c->r[29]+0x000000B0u; // 801871E4
  c->lr=0x801871ECu; f_800506C0(c); // 801871E8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801871EC
  c->r[3]=c->r[29]|c->r[29]; // 801871F0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801871F4
  c->ctr=c->r[12]; // 801871F8
  if (true) { c->lr=0x80187200u; dispatch(c,c->ctr); } // 801871FC
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 80187200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187204
  if (!crb(c,2)) { goto L_80187224; } // 80187208
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 8018720C
  c->r[0]=0u+0x00000001u; // 80187210
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 80187214
  c->r[3]=c->r[3]+0x00000001u; // 80187218
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 8018721C
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 80187220
L_80187224:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 80187224
  c->r[5]=0u+0x806F0000u; // 80187228
  c->r[5]=c->r[5]+0x000007F8u; // 8018722C
  c->r[0]=0u+0x00000032u; // 80187230
  c->r[4]=c->r[5]+0x00000024u; // 80187234
  W32(c->r[29]+0x00000008u,c->r[3]); // 80187238
  c->r[6]=0u+0x00000000u; // 8018723C
  c->r[3]=0u+0x00000000u; // 80187240
  W32(c->r[29]+0x00000000u,c->r[5]); // 80187244
  W32(c->r[29]+0x00000004u,c->r[4]); // 80187248
  c->ctr=c->r[0]; // 8018724C
L_80187250:;
  c->r[4]=c->r[29]+c->r[3]; // 80187250
  c->r[3]=c->r[3]+0x00000004u; // 80187254
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80187258
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187250; } // 8018725C
  c->r[3]=0u+0x806D0000u; // 80187260
  c->r[7]=0u+0x00000000u; // 80187264
  c->r[3]=c->r[3]+0x00003868u; // 80187268
  c->r[0]=0u+0x0000000Au; // 8018726C
  c->r[4]=c->r[3]+0x00000024u; // 80187270
  W32(c->r[29]+0x00000000u,c->r[3]); // 80187274
  c->r[8]=0u+0x00000000u; // 80187278
  c->r[3]=0u+0x00000000u; // 8018727C
  W32(c->r[29]+0x00000004u,c->r[4]); // 80187280
  c->r[6]=0u+0xFFFFFFFFu; // 80187284
  W32(c->r[27]+0x00000314u,c->r[7]); // 80187288
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 8018728C
  W32(c->r[27]+0x00000054u,c->r[7]); // 80187290
  W32(c->r[27]+0x00000310u,c->r[27]); // 80187294
  c->ctr=c->r[0]; // 80187298
L_8018729C:;
  c->r[5]=c->r[27]+c->r[3]; // 8018729C
  c->r[4]=c->r[27]+c->r[8]; // 801872A0
  W32(c->r[5]+0x00000068u,c->r[6]); // 801872A4
  c->r[8]=c->r[8]+0x00000001u; // 801872A8
  c->r[3]=c->r[3]+0x00000004u; // 801872AC
  W8(c->r[4]+0x00000090u,c->r[7]); // 801872B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018729C; } // 801872B4
  c->r[25]=c->r[27]+0x00000318u; // 801872B8
  c->r[3]=c->r[25]|c->r[25]; // 801872BC
  c->lr=0x801872C4u; f_800506C0(c); // 801872C0
  cmps(c,0,(int32_t)c->r[25],0); // 801872C4
  c->r[3]=c->r[25]|c->r[25]; // 801872C8
  if (crb(c,2)) { goto L_801872D4; } // 801872CC
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 801872D0
L_801872D4:;
  c->r[30]=0u+0x00000001u; // 801872D4
  W32(c->r[25]+0x00000008u,c->r[3]); // 801872D8
  W8(c->r[25]+0x0000000Cu,c->r[30]); // 801872DC
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 801872E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801872E4
  if (!crb(c,2)) { goto L_80187328; } // 801872E8
  c->r[29]=0u+0x80750000u; // 801872EC
  c->r[3]=c->r[29]+0xFFFF816Cu; // 801872F0
  c->lr=0x801872F8u; f_800506C0(c); // 801872F4
  c->r[6]=0u+0x806D0000u; // 801872F8
  c->r[4]=0u+0x80080000u; // 801872FC
  c->r[6]=c->r[6]+0x000038D8u; // 80187300
  c->r[3]=c->r[29]+0xFFFF816Cu; // 80187304
  c->r[0]=c->r[6]+0x00000008u; // 80187308
  c->r[5]=0u+0x80750000u; // 8018730C
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187310
  c->r[4]=c->r[4]+0xFFFF9844u; // 80187314
  c->r[5]=c->r[5]+0x00004B08u; // 80187318
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8018731C
  c->lr=0x80187324u; f_803A92B8(c); // 80187320
  W8(c->r[13]+0xFFFFBE9Eu,c->r[30]); // 80187324
L_80187328:;
  c->r[3]=0u+0x80750000u; // 80187328
  c->r[5]=c->r[25]|c->r[25]; // 8018732C
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80187330
  c->r[4]=c->r[3]|c->r[3]; // 80187334
  c->lr=0x8018733Cu; f_802DDCA8(c); // 80187338
  c->r[3]=0u+0x806D0000u; // 8018733C
  c->r[28]=0u+0x00000000u; // 80187340
  c->r[3]=c->r[3]+0xFFFFD974u; // 80187344
  c->r[4]=0u+0xFFFFFFFFu; // 80187348
  c->r[0]=0u+0x00000001u; // 8018734C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80187350
  c->r[3]=c->r[27]+0x0000032Cu; // 80187354
  W32(c->r[27]+0x00000328u,c->r[4]); // 80187358
  W32(c->r[27]+0x000000ECu,c->r[0]); // 8018735C
  W32(c->r[27]+0x00000054u,c->r[28]); // 80187360
  W32(c->r[27]+0x00000314u,c->r[28]); // 80187364
  c->lr=0x8018736Cu; f_800E6AB0(c); // 80187368
  c->r[3]=0u+0x806D0000u; // 8018736C
  c->r[4]=0u+0x806D0000u; // 80187370
  c->r[3]=c->r[3]+0xFFFFD908u; // 80187374
  c->r[26]=c->r[27]+0x00000378u; // 80187378
  c->r[0]=c->r[3]+0x00000044u; // 8018737C
  c->r[4]=c->r[4]+0xFFFFE0C0u; // 80187380
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80187384
  c->r[3]=c->r[26]|c->r[26]; // 80187388
  W32(c->r[27]+0x00000330u,c->r[0]); // 8018738C
  W32(c->r[27]+0x00000338u,c->r[28]); // 80187390
  W32(c->r[27]+0x0000033Cu,c->r[28]); // 80187394
  W32(c->r[27]+0x00000340u,c->r[28]); // 80187398
  W32(c->r[27]+0x00000374u,c->r[4]); // 8018739C
  c->lr=0x801873A4u; f_800506C0(c); // 801873A0
  cmps(c,0,(int32_t)c->r[26],0); // 801873A4
  c->r[0]=c->r[26]|c->r[26]; // 801873A8
  if (crb(c,2)) { goto L_801873B4; } // 801873AC
  c->r[0]=c->r[26]+0xFFFFFFFCu; // 801873B0
L_801873B4:;
  c->r[28]=c->r[27]+0x00000384u; // 801873B4
  W32(c->r[26]+0x00000008u,c->r[0]); // 801873B8
  c->r[3]=c->r[28]|c->r[28]; // 801873BC
  c->lr=0x801873C4u; f_800506C0(c); // 801873C0
  cmps(c,0,(int32_t)c->r[28],0); // 801873C4
  c->r[0]=c->r[28]|c->r[28]; // 801873C8
  if (crb(c,2)) { goto L_801873D4; } // 801873CC
  c->r[0]=c->r[28]+0xFFFFFFF0u; // 801873D0
L_801873D4:;
  W32(c->r[28]+0x00000008u,c->r[0]); // 801873D4
  c->r[3]=c->r[27]+0x00000394u; // 801873D8
  c->lr=0x801873E0u; f_800E6AB0(c); // 801873DC
  c->r[3]=0u+0x806D0000u; // 801873E0
  c->r[3]=c->r[3]+0xFFFFE058u; // 801873E4
  W32(c->r[27]+0x00000374u,c->r[3]); // 801873E8
  c->r[0]=c->r[3]+0x00000018u; // 801873EC
  W32(c->r[27]+0x00000398u,c->r[0]); // 801873F0
  c->r[0]=R8(c->r[13]+0xFFFFC3DCu); // 801873F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801873F8
  if (!crb(c,2)) { goto L_80187418; } // 801873FC
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 80187400
  c->r[0]=0u+0x00000001u; // 80187404
  W32(c->r[13]+0xFFFFC3D8u,c->r[3]); // 80187408
  c->r[3]=c->r[3]+0x00000001u; // 8018740C
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 80187410
  W8(c->r[13]+0xFFFFC3DCu,c->r[0]); // 80187414
L_80187418:;
  c->r[3]=R32(c->r[13]+0xFFFFC3D8u); // 80187418
  c->r[0]=0u+0x00000000u; // 8018741C
  W32(c->r[27]+0x0000039Cu,c->r[3]); // 80187420
  c->r[4]=0u+0x00000001u; // 80187424
  c->r[3]=R32(c->r[13]+0xFFFF84DCu); // 80187428
  W32(c->r[27]+0x000003A0u,c->r[3]); // 8018742C
  W32(c->r[27]+0x00000390u,c->r[0]); // 80187430
  W8(c->r[27]+0x000003A8u,c->r[4]); // 80187434
  W32(c->r[27]+0x00000054u,c->r[31]); // 80187438
  c->r[0]=R8(c->r[13]+0xFFFFC3D4u); // 8018743C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187440
  if (!crb(c,2)) { goto L_8018745C; } // 80187444
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80187448
  W32(c->r[13]+0xFFFFC3D0u,c->r[3]); // 8018744C
  c->r[0]=c->r[3]+0x00000001u; // 80187450
  W32(c->r[13]+0xFFFFBC48u,c->r[0]); // 80187454
  W8(c->r[13]+0xFFFFC3D4u,c->r[4]); // 80187458
L_8018745C:;
  c->r[3]=R32(c->r[13]+0xFFFFC3D0u); // 8018745C
  c->r[0]=0u+0x00000000u; // 80187460
  c->r[25]=c->r[27]+0x000003ACu; // 80187464
  W32(c->r[27]+0x00000328u,c->r[3]); // 80187468
  c->r[3]=c->r[25]|c->r[25]; // 8018746C
  W8(c->r[27]+0x00000334u,c->r[0]); // 80187470
  c->lr=0x80187478u; f_800506C0(c); // 80187474
  cmps(c,0,(int32_t)c->r[25],0); // 80187478
  c->r[3]=c->r[25]|c->r[25]; // 8018747C
  if (crb(c,2)) { goto L_80187488; } // 80187480
  c->r[3]=c->r[25]+0xFFFFFC54u; // 80187484
L_80187488:;
  c->r[29]=0u+0x00000001u; // 80187488
  W32(c->r[25]+0x00000008u,c->r[3]); // 8018748C
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 80187490
  c->r[0]=R8(c->r[13]+0xFFFFBFCEu); // 80187494
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187498
  if (!crb(c,2)) { goto L_801874DC; } // 8018749C
  c->r[28]=0u+0x80750000u; // 801874A0
  c->r[3]=c->r[28]+0xFFFF8290u; // 801874A4
  c->lr=0x801874ACu; f_800506C0(c); // 801874A8
  c->r[6]=0u+0x806D0000u; // 801874AC
  c->r[4]=0u+0x80080000u; // 801874B0
  c->r[6]=c->r[6]+0x00004DC0u; // 801874B4
  c->r[3]=c->r[28]+0xFFFF8290u; // 801874B8
  c->r[0]=c->r[6]+0x00000008u; // 801874BC
  c->r[5]=0u+0x80750000u; // 801874C0
  W32(c->r[3]+0x00000010u,c->r[6]); // 801874C4
  c->r[4]=c->r[4]+0x00004A70u; // 801874C8
  c->r[5]=c->r[5]+0x00004AF0u; // 801874CC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801874D0
  c->lr=0x801874D8u; f_803A92B8(c); // 801874D4
  W8(c->r[13]+0xFFFFBFCEu,c->r[29]); // 801874D8
L_801874DC:;
  c->r[3]=0u+0x80750000u; // 801874DC
  c->r[5]=c->r[25]|c->r[25]; // 801874E0
  c->r[3]=c->r[3]+0xFFFF8290u; // 801874E4
  c->r[4]=c->r[3]|c->r[3]; // 801874E8
  c->lr=0x801874F0u; f_802DDCA8(c); // 801874EC
  c->r[25]=c->r[27]+0x000003BCu; // 801874F0
  c->r[3]=c->r[25]|c->r[25]; // 801874F4
  c->lr=0x801874FCu; f_800506C0(c); // 801874F8
  cmps(c,0,(int32_t)c->r[25],0); // 801874FC
  c->r[3]=c->r[25]|c->r[25]; // 80187500
  if (crb(c,2)) { goto L_8018750C; } // 80187504
  c->r[3]=c->r[25]+0xFFFFFC44u; // 80187508
L_8018750C:;
  c->r[29]=0u+0x00000001u; // 8018750C
  W32(c->r[25]+0x00000008u,c->r[3]); // 80187510
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 80187514
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 80187518
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018751C
  if (!crb(c,2)) { goto L_80187560; } // 80187520
  c->r[28]=0u+0x80750000u; // 80187524
  c->r[3]=c->r[28]+0xFFFF8158u; // 80187528
  c->lr=0x80187530u; f_800506C0(c); // 8018752C
  c->r[6]=0u+0x806D0000u; // 80187530
  c->r[4]=0u+0x80080000u; // 80187534
  c->r[6]=c->r[6]+0x000038F0u; // 80187538
  c->r[3]=c->r[28]+0xFFFF8158u; // 8018753C
  c->r[0]=c->r[6]+0x00000008u; // 80187540
  c->r[5]=0u+0x80750000u; // 80187544
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187548
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8018754C
  c->r[5]=c->r[5]+0x00004AFCu; // 80187550
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187554
  c->lr=0x8018755Cu; f_803A92B8(c); // 80187558
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 8018755C
L_80187560:;
  c->r[3]=0u+0x80750000u; // 80187560
  c->r[5]=c->r[25]|c->r[25]; // 80187564
  c->r[3]=c->r[3]+0xFFFF8158u; // 80187568
  c->r[4]=c->r[3]|c->r[3]; // 8018756C
  c->lr=0x80187574u; f_802DDCA8(c); // 80187570
  c->r[5]=0u+0x806D0000u; // 80187574
  {uint32_t ea=c->r[2]+0xFFFFBFB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80187578
  c->r[5]=c->r[5]+0x00007F8Cu; // 8018757C
  c->r[3]=0u+0xFFFFFFFFu; // 80187580
  c->r[4]=c->r[5]+0x00000044u; // 80187584
  c->r[0]=0u+0x00000000u; // 80187588
  W32(c->r[27]+0x0000001Cu,c->r[5]); // 8018758C
  W32(c->r[27]+0x00000330u,c->r[4]); // 80187590
  W32(c->r[27]+0x000003CCu,c->r[3]); // 80187594
  {uint32_t ea=c->r[27]+0x000003D4u; WF32(ea,c->f[0]);} // 80187598
  W8(c->r[27]+0x000003D8u,c->r[0]); // 8018759C
  W32(c->r[27]+0x00000054u,c->r[31]); // 801875A0
  {uint32_t ea=c->r[27]+0x000003D0u; WF32(ea,c->f[0]);} // 801875A4
  c->r[0]=R8(c->r[13]+0xFFFFC3CCu); // 801875A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801875AC
  if (!crb(c,2)) { goto L_801875CC; } // 801875B0
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801875B4
  c->r[0]=0u+0x00000001u; // 801875B8
  W32(c->r[13]+0xFFFFC3C8u,c->r[3]); // 801875BC
  c->r[3]=c->r[3]+0x00000001u; // 801875C0
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801875C4
  W8(c->r[13]+0xFFFFC3CCu,c->r[0]); // 801875C8
L_801875CC:;
  c->r[5]=R32(c->r[13]+0xFFFFC3C8u); // 801875CC
  c->r[4]=0u+0x806E0000u; // 801875D0
  c->r[4]=c->r[4]+0xFFFF8C38u; // 801875D4
  c->r[0]=0u+0x00000001u; // 801875D8
  c->r[3]=c->r[4]+0x00000044u; // 801875DC
  W32(c->r[27]+0x00000328u,c->r[5]); // 801875E0
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 801875E4
  W32(c->r[27]+0x00000330u,c->r[3]); // 801875E8
  W8(c->r[27]+0x000003E0u,c->r[0]); // 801875EC
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 801875F0
  cmps(c,0,(int32_t)c->r[25],0); // 801875F4
  if (crb(c,2)) { goto L_8018763C; } // 801875F8
  c->lr=0x80187600u; f_801878A4(c); // 801875FC
  c->r[28]=c->r[3]|c->r[3]; // 80187600
  c->lr=0x80187608u; f_8007BDCC(c); // 80187604
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 80187608
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018760C
  c->r[5]=0u+0x80180000u; // 80187610
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80187614
  c->r[4]=c->r[25]+c->r[4]; // 80187618
  c->r[5]=c->r[5]+0x000078E8u; // 8018761C
  c->r[4]=c->r[4]+c->r[0]; // 80187620
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80187624
  c->r[0]=R32(c->r[25]+c->r[3]); // 80187628
  cmpu(c,0,c->r[0],0x0000000Cu); // 8018762C
  if (!crb(c,0)) { goto L_8018763C; } // 80187630
  c->r[0]=0u+0x0000000Cu; // 80187634
  W32(c->r[25]+c->r[3],c->r[0]); // 80187638
L_8018763C:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 8018763C
  cmps(c,0,(int32_t)c->r[25],0); // 80187640
  if (crb(c,2)) { goto L_80187688; } // 80187644
  c->lr=0x8018764Cu; f_801878A4(c); // 80187648
  c->r[28]=c->r[3]|c->r[3]; // 8018764C
  c->lr=0x80187654u; f_80076D18(c); // 80187650
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 80187654
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80187658
  c->r[5]=0u+0x80180000u; // 8018765C
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80187660
  c->r[4]=c->r[25]+c->r[4]; // 80187664
  c->r[5]=c->r[5]+0x000078E4u; // 80187668
  c->r[4]=c->r[4]+c->r[0]; // 8018766C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80187670
  c->r[0]=R32(c->r[25]+c->r[3]); // 80187674
  cmpu(c,0,c->r[0],0x0000000Cu); // 80187678
  if (!crb(c,0)) { goto L_80187688; } // 8018767C
  c->r[0]=0u+0x0000000Cu; // 80187680
  W32(c->r[25]+c->r[3],c->r[0]); // 80187684
L_80187688:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 80187688
  cmps(c,0,(int32_t)c->r[25],0); // 8018768C
  if (crb(c,2)) { goto L_801876D4; } // 80187690
  c->lr=0x80187698u; f_801878A4(c); // 80187694
  c->r[28]=c->r[3]|c->r[3]; // 80187698
  c->lr=0x801876A0u; f_80076CB0(c); // 8018769C
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 801876A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801876A4
  c->r[5]=0u+0x80180000u; // 801876A8
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801876AC
  c->r[4]=c->r[25]+c->r[4]; // 801876B0
  c->r[5]=c->r[5]+0x000078E0u; // 801876B4
  c->r[4]=c->r[4]+c->r[0]; // 801876B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801876BC
  c->r[0]=R32(c->r[25]+c->r[3]); // 801876C0
  cmpu(c,0,c->r[0],0x0000000Cu); // 801876C4
  if (!crb(c,0)) { goto L_801876D4; } // 801876C8
  c->r[0]=0u+0x0000000Cu; // 801876CC
  W32(c->r[25]+c->r[3],c->r[0]); // 801876D0
L_801876D4:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 801876D4
  cmps(c,0,(int32_t)c->r[25],0); // 801876D8
  if (crb(c,2)) { goto L_80187720; } // 801876DC
  c->lr=0x801876E4u; f_801878A4(c); // 801876E0
  c->r[28]=c->r[3]|c->r[3]; // 801876E4
  c->lr=0x801876ECu; f_80076CE4(c); // 801876E8
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 801876EC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801876F0
  c->r[5]=0u+0x80180000u; // 801876F4
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801876F8
  c->r[4]=c->r[25]+c->r[4]; // 801876FC
  c->r[5]=c->r[5]+0x000078DCu; // 80187700
  c->r[4]=c->r[4]+c->r[0]; // 80187704
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80187708
  c->r[0]=R32(c->r[25]+c->r[3]); // 8018770C
  cmpu(c,0,c->r[0],0x0000000Cu); // 80187710
  if (!crb(c,0)) { goto L_80187720; } // 80187714
  c->r[0]=0u+0x0000000Cu; // 80187718
  W32(c->r[25]+c->r[3],c->r[0]); // 8018771C
L_80187720:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 80187720
  cmps(c,0,(int32_t)c->r[25],0); // 80187724
  if (crb(c,2)) { goto L_80187790; } // 80187728
  c->lr=0x80187730u; f_801878A4(c); // 8018772C
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 80187730
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187734
  if (!crb(c,2)) { goto L_80187758; } // 80187738
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8018773C
  c->r[0]=0u+0x00000001u; // 80187740
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80187744
  c->r[4]=c->r[5]+0x00000001u; // 80187748
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8018774C
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80187750
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80187754
L_80187758:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80187758
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8018775C
  c->r[5]=0u+0x80180000u; // 80187760
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187764
  c->r[4]=c->r[25]+c->r[4]; // 80187768
  c->r[5]=c->r[5]+0x000078D8u; // 8018776C
  c->r[4]=c->r[4]+c->r[0]; // 80187770
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80187774
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80187778
  c->r[0]=R32(c->r[25]+c->r[3]); // 8018777C
  cmpu(c,0,c->r[0],0x0000006Cu); // 80187780
  if (!crb(c,0)) { goto L_80187790; } // 80187784
  c->r[0]=0u+0x0000006Cu; // 80187788
  W32(c->r[25]+c->r[3],c->r[0]); // 8018778C
L_80187790:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 80187790
  cmps(c,0,(int32_t)c->r[25],0); // 80187794
  if (crb(c,2)) { goto L_80187800; } // 80187798
  c->lr=0x801877A0u; f_801878A4(c); // 8018779C
  c->r[0]=R8(c->r[13]+0xFFFFC3B4u); // 801877A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801877A4
  if (!crb(c,2)) { goto L_801877C8; } // 801877A8
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801877AC
  c->r[0]=0u+0x00000001u; // 801877B0
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801877B4
  c->r[4]=c->r[5]+0x00000001u; // 801877B8
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801877BC
  W32(c->r[13]+0xFFFFC3B0u,c->r[5]); // 801877C0
  W8(c->r[13]+0xFFFFC3B4u,c->r[0]); // 801877C4
L_801877C8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801877C8
  c->r[0]=R32(c->r[13]+0xFFFFC3B0u); // 801877CC
  c->r[5]=0u+0x80180000u; // 801877D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801877D4
  c->r[4]=c->r[25]+c->r[4]; // 801877D8
  c->r[5]=c->r[5]+0x000078D4u; // 801877DC
  c->r[4]=c->r[4]+c->r[0]; // 801877E0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801877E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801877E8
  c->r[0]=R32(c->r[25]+c->r[3]); // 801877EC
  cmpu(c,0,c->r[0],0x0000000Cu); // 801877F0
  if (!crb(c,0)) { goto L_80187800; } // 801877F4
  c->r[0]=0u+0x0000000Cu; // 801877F8
  W32(c->r[25]+c->r[3],c->r[0]); // 801877FC
L_80187800:;
  c->r[3]=0u+0x806E0000u; // 80187800
  c->r[3]=c->r[3]+0x00000758u; // 80187804
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80187808
  c->r[0]=c->r[3]+0x00000044u; // 8018780C
  W32(c->r[27]+0x00000330u,c->r[0]); // 80187810
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 80187814
  cmps(c,0,(int32_t)c->r[25],0); // 80187818
  if (crb(c,2)) { goto L_80187884; } // 8018781C
  c->lr=0x80187824u; f_801878A4(c); // 80187820
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80187824
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187828
  if (!crb(c,2)) { goto L_8018784C; } // 8018782C
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80187830
  c->r[0]=0u+0x00000001u; // 80187834
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80187838
  c->r[4]=c->r[5]+0x00000001u; // 8018783C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80187840
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80187844
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80187848
L_8018784C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8018784C
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 80187850
  c->r[5]=0u+0x80180000u; // 80187854
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187858
  c->r[4]=c->r[25]+c->r[4]; // 8018785C
  c->r[5]=c->r[5]+0x000078A0u; // 80187860
  c->r[4]=c->r[4]+c->r[0]; // 80187864
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80187868
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018786C
  c->r[0]=R32(c->r[25]+c->r[3]); // 80187870
  cmpu(c,0,c->r[0],0x00000010u); // 80187874
  if (!crb(c,0)) { goto L_80187884; } // 80187878
  c->r[0]=0u+0x00000010u; // 8018787C
  W32(c->r[25]+c->r[3],c->r[0]); // 80187880
L_80187884:;
  c->r[11]=c->r[1]+0x00000040u; // 80187884
  c->r[3]=c->r[27]|c->r[27]; // 80187888
  c->lr=0x80187890u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018788C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80187890
  c->lr=c->r[0]; // 80187894
  c->r[1]=c->r[1]+0x00000040u; // 80187898
  return; // 8018789C
}

// fn_801878A0
void f_801878A0(Ctx* __restrict c) {
  trace_call(0x801878A0u);
  return; // 801878A0
}

// fn_801878A4
void f_801878A4(Ctx* __restrict c) {
  trace_call(0x801878A4u);
  c->r[0]=R8(c->r[13]+0xFFFFCDDCu); // 801878A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801878A8
  if (!crb(c,2)) { goto L_801878CC; } // 801878AC
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801878B0
  c->r[0]=0u+0x00000001u; // 801878B4
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801878B8
  c->r[3]=c->r[4]+0x00000001u; // 801878BC
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801878C0
  W32(c->r[13]+0xFFFFCDD8u,c->r[4]); // 801878C4
  W8(c->r[13]+0xFFFFCDDCu,c->r[0]); // 801878C8
L_801878CC:;
  c->r[3]=R32(c->r[13]+0xFFFFCDD8u); // 801878CC
  return; // 801878D0
}

// fn_801878D4
void f_801878D4(Ctx* __restrict c) {
  trace_call(0x801878D4u);
  f_800FD008(c); return; // 801878D4
}

// fn_801878D8
void f_801878D8(Ctx* __restrict c) {
  trace_call(0x801878D8u);
  f_800FCE88(c); return; // 801878D8
}

// fn_801878DC
void f_801878DC(Ctx* __restrict c) {
  trace_call(0x801878DCu);
  f_800FCE74(c); return; // 801878DC
}

// fn_801878E0
void f_801878E0(Ctx* __restrict c) {
  trace_call(0x801878E0u);
  f_800FCE60(c); return; // 801878E0
}

// fn_801878E4
void f_801878E4(Ctx* __restrict c) {
  trace_call(0x801878E4u);
  f_800FCE4C(c); return; // 801878E4
}

// fn_801878E8
void f_801878E8(Ctx* __restrict c) {
  trace_call(0x801878E8u);
  f_800FCC5C(c); return; // 801878E8
}

// fn_801878EC
void f_801878EC(Ctx* __restrict c) {
  trace_call(0x801878ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801878EC
  c->r[0]=c->lr; // 801878F0
  cmps(c,0,(int32_t)c->r[3],0); // 801878F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801878F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801878FC
  c->r[30]=c->r[3]|c->r[3]; // 80187900
  c->r[31]=c->r[4]|c->r[4]; // 80187904
  if (crb(c,2)) { goto L_80187924; } // 80187908
  c->r[4]=0u+0x00000000u; // 8018790C
  c->lr=0x80187914u; f_800FCC0C(c); // 80187910
  cmps(c,0,(int32_t)c->r[31],0); // 80187914
  if (!crb(c,1)) { goto L_80187924; } // 80187918
  c->r[3]=c->r[30]|c->r[30]; // 8018791C
  c->lr=0x80187924u; f_8005328C(c); // 80187920
L_80187924:;
  c->r[3]=c->r[30]|c->r[30]; // 80187924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80187928
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018792C
  c->lr=c->r[0]; // 80187930
  c->r[1]=c->r[1]+0x00000010u; // 80187934
  return; // 80187938
}

// fn_8018793C
void f_8018793C(Ctx* __restrict c) {
  trace_call(0x8018793Cu);
  return; // 8018793C
}

// fn_80187940
void f_80187940(Ctx* __restrict c) {
  trace_call(0x80187940u);
  return; // 80187940
}

// fn_80187944
void f_80187944(Ctx* __restrict c) {
  trace_call(0x80187944u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187944
  c->r[0]=c->lr; // 80187948
  W32(c->r[1]+0x00000044u,c->r[0]); // 8018794C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80187950
  c->r[26]=c->r[3]|c->r[3]; // 80187954
  c->r[31]=0u+0x80690000u; // 80187958
  c->r[30]=c->r[26]|c->r[26]; // 8018795C
  c->r[27]=c->r[26]|c->r[26]; // 80187960
  c->r[29]=c->r[26]|c->r[26]; // 80187964
  c->r[31]=c->r[31]+0x00002458u; // 80187968
  c->lr=0x80187970u; f_80188680(c); // 8018796C
  c->r[4]=0u+0x806D0000u; // 80187970
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 80187974
  c->r[0]=0u+0x00000000u; // 80187978
  W32(c->r[26]+0x00000000u,c->r[3]); // 8018797C
  c->r[4]=c->r[4]+0x000038C0u; // 80187980
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80187984
  W32(c->r[26]+0x00000004u,c->r[0]); // 80187988
  W32(c->r[26]+0x00000008u,c->r[0]); // 8018798C
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 80187990
  W8(c->r[26]+0x00000010u,c->r[0]); // 80187994
  W32(c->r[26]+0x00000014u,c->r[0]); // 80187998
  W32(c->r[26]+0x00000018u,c->r[0]); // 8018799C
  W32(c->r[26]+0x00000020u,c->r[0]); // 801879A0
  W32(c->r[26]+0x00000024u,c->r[0]); // 801879A4
  if (crb(c,2)) { goto L_801879B0; } // 801879A8
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 801879AC
L_801879B0:;
  c->lr=0x801879B4u; f_800797AC(c); // 801879B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801879B4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 801879B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801879BC
  if (!crb(c,2)) { goto L_801879CC; } // 801879C0
  c->r[0]=0u+0x00000001u; // 801879C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801879C8
L_801879CC:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 801879CC
  c->r[5]=0u+0x0000012Cu; // 801879D0
  c->r[4]=c->r[7]+0x00000001u; // 801879D4
  c->r[0]=divwu(c->r[4],c->r[5]); // 801879D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801879DC
  c->r[6]=c->r[4]-c->r[0]; // 801879E0
  goto L_80187A30; // 801879E4
L_801879E8:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801879E8
  c->r[4]=c->r[3]+c->r[0]; // 801879EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801879F0
  cmps(c,0,(int32_t)c->r[0],0); // 801879F4
  if (!crb(c,2)) { goto L_80187A20; } // 801879F8
  W32(c->r[3]+0x00000004u,c->r[6]); // 801879FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80187A00
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187A04
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 80187A08
  c->r[4]=R32(c->r[3]+0x00000000u); // 80187A0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80187A10
  W32(c->r[1]+0x00000010u,c->r[4]); // 80187A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187A18
  goto L_80187A4C; // 80187A1C
L_80187A20:;
  c->r[4]=c->r[6]+0x00000001u; // 80187A20
  c->r[0]=divwu(c->r[4],c->r[5]); // 80187A24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80187A28
  c->r[6]=c->r[4]-c->r[0]; // 80187A2C
L_80187A30:;
  cmpu(c,0,c->r[6],c->r[7]); // 80187A30
  if (!crb(c,2)) { IRQCHK(c); goto L_801879E8; } // 80187A34
  c->r[0]=0u+0x00000000u; // 80187A38
  W32(c->r[1]+0x00000008u,c->r[0]); // 80187A3C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80187A40
  W32(c->r[1]+0x00000010u,c->r[0]); // 80187A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187A48
L_80187A4C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 80187A4C
  c->r[24]=c->r[26]+0x00000028u; // 80187A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80187A54
  c->r[3]=c->r[24]|c->r[24]; // 80187A58
  W32(c->r[1]+0x00000018u,c->r[4]); // 80187A5C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80187A60
  W32(c->r[26]+0x00000020u,c->r[4]); // 80187A64
  W32(c->r[26]+0x00000024u,c->r[0]); // 80187A68
  c->lr=0x80187A70u; f_800506C0(c); // 80187A6C
  cmps(c,0,(int32_t)c->r[24],0); // 80187A70
  c->r[3]=c->r[24]|c->r[24]; // 80187A74
  if (crb(c,2)) { goto L_80187A80; } // 80187A78
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 80187A7C
L_80187A80:;
  c->r[28]=0u+0x00000001u; // 80187A80
  W32(c->r[24]+0x00000008u,c->r[3]); // 80187A84
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 80187A88
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 80187A8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187A90
  if (!crb(c,2)) { goto L_80187AD4; } // 80187A94
  c->r[25]=0u+0x80740000u; // 80187A98
  c->r[3]=c->r[25]+0x000074BCu; // 80187A9C
  c->lr=0x80187AA4u; f_800506C0(c); // 80187AA0
  c->r[6]=0u+0x806D0000u; // 80187AA4
  c->r[4]=0u+0x80060000u; // 80187AA8
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 80187AAC
  c->r[3]=c->r[25]+0x000074BCu; // 80187AB0
  c->r[0]=c->r[6]+0x00000008u; // 80187AB4
  c->r[5]=0u+0x80750000u; // 80187AB8
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187ABC
  c->r[4]=c->r[4]+0x000057D4u; // 80187AC0
  c->r[5]=c->r[5]+0x00004B74u; // 80187AC4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187AC8
  c->lr=0x80187AD0u; f_803A92B8(c); // 80187ACC
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 80187AD0
L_80187AD4:;
  c->r[3]=0u+0x80740000u; // 80187AD4
  c->r[5]=c->r[24]|c->r[24]; // 80187AD8
  c->r[3]=c->r[3]+0x000074BCu; // 80187ADC
  c->r[4]=c->r[3]|c->r[3]; // 80187AE0
  c->lr=0x80187AE8u; f_802DDCA8(c); // 80187AE4
  c->r[25]=c->r[26]+0x00000038u; // 80187AE8
  c->r[3]=c->r[25]|c->r[25]; // 80187AEC
  c->lr=0x80187AF4u; f_800506C0(c); // 80187AF0
  cmps(c,0,(int32_t)c->r[25],0); // 80187AF4
  c->r[0]=c->r[25]|c->r[25]; // 80187AF8
  if (crb(c,2)) { goto L_80187B04; } // 80187AFC
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 80187B00
L_80187B04:;
  c->r[28]=c->r[26]+0x00000044u; // 80187B04
  W32(c->r[25]+0x00000008u,c->r[0]); // 80187B08
  c->r[3]=c->r[28]|c->r[28]; // 80187B0C
  c->lr=0x80187B14u; f_800506C0(c); // 80187B10
  cmps(c,0,(int32_t)c->r[28],0); // 80187B14
  c->r[0]=c->r[28]|c->r[28]; // 80187B18
  if (crb(c,2)) { goto L_80187B24; } // 80187B1C
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 80187B20
L_80187B24:;
  c->r[3]=0u+0x806F0000u; // 80187B24
  c->r[25]=0u+0x00000000u; // 80187B28
  c->r[3]=c->r[3]+0x00000E80u; // 80187B2C
  W32(c->r[28]+0x00000008u,c->r[0]); // 80187B30
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 80187B34
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80187B38
  W32(c->r[26]+0x00000058u,c->r[25]); // 80187B3C
  W32(c->r[26]+0x00000064u,c->r[25]); // 80187B40
  c->lr=0x80187B48u; f_8007BDCC(c); // 80187B44
  c->r[0]=c->r[13]+0xFFFF8114u; // 80187B48
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 80187B4C
  W32(c->r[26]+0x000000A0u,c->r[0]); // 80187B50
  W32(c->r[26]+0x000000A4u,c->r[25]); // 80187B54
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80187B58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187B5C
  if (!crb(c,2)) { goto L_80187B80; } // 80187B60
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80187B64
  c->r[0]=0u+0x00000001u; // 80187B68
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80187B6C
  c->r[3]=c->r[4]+0x00000001u; // 80187B70
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80187B74
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80187B78
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 80187B7C
L_80187B80:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 80187B80
  c->r[3]=c->r[13]+0xFFFF8110u; // 80187B84
  c->r[0]=0u+0x00000000u; // 80187B88
  W32(c->r[26]+0x000000A8u,c->r[4]); // 80187B8C
  W32(c->r[26]+0x000000ACu,c->r[3]); // 80187B90
  W32(c->r[26]+0x000000B0u,c->r[0]); // 80187B94
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 80187B98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187B9C
  if (!crb(c,2)) { goto L_80187BC0; } // 80187BA0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80187BA4
  c->r[0]=0u+0x00000001u; // 80187BA8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80187BAC
  c->r[3]=c->r[4]+0x00000001u; // 80187BB0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80187BB4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 80187BB8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 80187BBC
L_80187BC0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 80187BC0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 80187BC4
  c->r[0]=0u+0x00000000u; // 80187BC8
  W32(c->r[26]+0x000000B4u,c->r[4]); // 80187BCC
  W32(c->r[26]+0x000000B8u,c->r[3]); // 80187BD0
  W32(c->r[26]+0x000000BCu,c->r[0]); // 80187BD4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 80187BD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187BDC
  if (!crb(c,2)) { goto L_80187C00; } // 80187BE0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80187BE4
  c->r[0]=0u+0x00000001u; // 80187BE8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80187BEC
  c->r[3]=c->r[4]+0x00000001u; // 80187BF0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80187BF4
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80187BF8
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 80187BFC
L_80187C00:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80187C00
  c->r[3]=c->r[13]+0xFFFF8108u; // 80187C04
  c->r[0]=0u+0x00000000u; // 80187C08
  W32(c->r[26]+0x000000C0u,c->r[4]); // 80187C0C
  W32(c->r[26]+0x000000C4u,c->r[3]); // 80187C10
  W32(c->r[26]+0x000000C8u,c->r[0]); // 80187C14
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80187C18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187C1C
  if (!crb(c,2)) { goto L_80187C40; } // 80187C20
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80187C24
  c->r[0]=0u+0x00000001u; // 80187C28
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80187C2C
  c->r[3]=c->r[4]+0x00000001u; // 80187C30
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80187C34
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80187C38
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 80187C3C
L_80187C40:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80187C40
  c->r[0]=c->r[13]+0xFFFF8104u; // 80187C44
  c->r[25]=0u+0x00000000u; // 80187C48
  W32(c->r[26]+0x000000CCu,c->r[3]); // 80187C4C
  c->r[3]=c->r[26]+0x000000D8u; // 80187C50
  W32(c->r[26]+0x000000D0u,c->r[0]); // 80187C54
  W32(c->r[26]+0x000000D4u,c->r[25]); // 80187C58
  c->lr=0x80187C60u; f_800506C0(c); // 80187C5C
  c->r[4]=0u+0x806F0000u; // 80187C60
  c->r[3]=0u+0x00000006u; // 80187C64
  c->r[4]=c->r[4]+0x000007A0u; // 80187C68
  c->r[28]=c->r[26]+0x000000FCu; // 80187C6C
  c->r[0]=c->r[4]+0x00000024u; // 80187C70
  W32(c->r[26]+0x000000E8u,c->r[3]); // 80187C74
  c->r[3]=c->r[28]+0x0000000Cu; // 80187C78
  W32(c->r[26]+0x000000ECu,c->r[25]); // 80187C7C
  W32(c->r[26]+0x000000F8u,c->r[25]); // 80187C80
  W32(c->r[26]+0x000000FCu,c->r[4]); // 80187C84
  W32(c->r[26]+0x00000100u,c->r[0]); // 80187C88
  c->lr=0x80187C90u; f_800506C0(c); // 80187C8C
  c->r[3]=c->r[28]+0x00000018u; // 80187C90
  c->lr=0x80187C98u; f_800506C0(c); // 80187C94
  W32(c->r[28]+0x00000024u,c->r[25]); // 80187C98
  c->r[3]=c->r[28]+0x000000B0u; // 80187C9C
  c->lr=0x80187CA4u; f_800506C0(c); // 80187CA0
  c->r[12]=R32(c->r[28]+0x00000000u); // 80187CA4
  c->r[3]=c->r[28]|c->r[28]; // 80187CA8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80187CAC
  c->ctr=c->r[12]; // 80187CB0
  if (true) { c->lr=0x80187CB8u; dispatch(c,c->ctr); } // 80187CB4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 80187CB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187CBC
  if (!crb(c,2)) { goto L_80187CDC; } // 80187CC0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 80187CC4
  c->r[0]=0u+0x00000001u; // 80187CC8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 80187CCC
  c->r[3]=c->r[3]+0x00000001u; // 80187CD0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 80187CD4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 80187CD8
L_80187CDC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 80187CDC
  c->r[5]=0u+0x806F0000u; // 80187CE0
  c->r[5]=c->r[5]+0x000007F8u; // 80187CE4
  c->r[0]=0u+0x00000032u; // 80187CE8
  c->r[4]=c->r[5]+0x00000024u; // 80187CEC
  W32(c->r[28]+0x00000008u,c->r[3]); // 80187CF0
  c->r[6]=0u+0x00000000u; // 80187CF4
  c->r[3]=0u+0x00000000u; // 80187CF8
  W32(c->r[28]+0x00000000u,c->r[5]); // 80187CFC
  W32(c->r[28]+0x00000004u,c->r[4]); // 80187D00
  c->ctr=c->r[0]; // 80187D04
L_80187D08:;
  c->r[4]=c->r[28]+c->r[3]; // 80187D08
  c->r[3]=c->r[3]+0x00000004u; // 80187D0C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80187D10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187D08; } // 80187D14
  c->r[3]=0u+0x806D0000u; // 80187D18
  c->r[7]=0u+0x00000000u; // 80187D1C
  c->r[3]=c->r[3]+0x00003868u; // 80187D20
  c->r[0]=0u+0x0000000Au; // 80187D24
  c->r[4]=c->r[3]+0x00000024u; // 80187D28
  W32(c->r[28]+0x00000000u,c->r[3]); // 80187D2C
  c->r[8]=0u+0x00000000u; // 80187D30
  c->r[3]=0u+0x00000000u; // 80187D34
  W32(c->r[28]+0x00000004u,c->r[4]); // 80187D38
  c->r[6]=0u+0xFFFFFFFFu; // 80187D3C
  W32(c->r[26]+0x00000314u,c->r[7]); // 80187D40
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 80187D44
  W32(c->r[26]+0x00000054u,c->r[7]); // 80187D48
  W32(c->r[26]+0x00000310u,c->r[26]); // 80187D4C
  c->ctr=c->r[0]; // 80187D50
L_80187D54:;
  c->r[5]=c->r[26]+c->r[3]; // 80187D54
  c->r[4]=c->r[26]+c->r[8]; // 80187D58
  W32(c->r[5]+0x00000068u,c->r[6]); // 80187D5C
  c->r[8]=c->r[8]+0x00000001u; // 80187D60
  c->r[3]=c->r[3]+0x00000004u; // 80187D64
  W8(c->r[4]+0x00000090u,c->r[7]); // 80187D68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187D54; } // 80187D6C
  c->r[24]=c->r[26]+0x00000318u; // 80187D70
  c->r[3]=c->r[24]|c->r[24]; // 80187D74
  c->lr=0x80187D7Cu; f_800506C0(c); // 80187D78
  cmps(c,0,(int32_t)c->r[24],0); // 80187D7C
  c->r[3]=c->r[24]|c->r[24]; // 80187D80
  if (crb(c,2)) { goto L_80187D8C; } // 80187D84
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 80187D88
L_80187D8C:;
  c->r[29]=0u+0x00000001u; // 80187D8C
  W32(c->r[24]+0x00000008u,c->r[3]); // 80187D90
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 80187D94
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 80187D98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187D9C
  if (!crb(c,2)) { goto L_80187DE0; } // 80187DA0
  c->r[28]=0u+0x80750000u; // 80187DA4
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80187DA8
  c->lr=0x80187DB0u; f_800506C0(c); // 80187DAC
  c->r[6]=0u+0x806D0000u; // 80187DB0
  c->r[4]=0u+0x80080000u; // 80187DB4
  c->r[6]=c->r[6]+0x000038D8u; // 80187DB8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80187DBC
  c->r[0]=c->r[6]+0x00000008u; // 80187DC0
  c->r[5]=0u+0x80750000u; // 80187DC4
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187DC8
  c->r[4]=c->r[4]+0xFFFF9844u; // 80187DCC
  c->r[5]=c->r[5]+0x00004B68u; // 80187DD0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187DD4
  c->lr=0x80187DDCu; f_803A92B8(c); // 80187DD8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 80187DDC
L_80187DE0:;
  c->r[3]=0u+0x80750000u; // 80187DE0
  c->r[5]=c->r[24]|c->r[24]; // 80187DE4
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80187DE8
  c->r[4]=c->r[3]|c->r[3]; // 80187DEC
  c->lr=0x80187DF4u; f_802DDCA8(c); // 80187DF0
  c->r[3]=0u+0x806D0000u; // 80187DF4
  c->r[0]=0u+0x00000000u; // 80187DF8
  c->r[3]=c->r[3]+0xFFFFD974u; // 80187DFC
  c->r[5]=0u+0xFFFFFFFFu; // 80187E00
  c->r[4]=0u+0x00000001u; // 80187E04
  c->r[25]=c->r[26]+0x0000032Cu; // 80187E08
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80187E0C
  c->r[3]=c->r[25]|c->r[25]; // 80187E10
  W32(c->r[26]+0x00000328u,c->r[5]); // 80187E14
  W32(c->r[26]+0x000000ECu,c->r[4]); // 80187E18
  W32(c->r[26]+0x00000054u,c->r[0]); // 80187E1C
  W32(c->r[26]+0x00000314u,c->r[0]); // 80187E20
  c->lr=0x80187E28u; f_800506C0(c); // 80187E24
  cmps(c,0,(int32_t)c->r[25],0); // 80187E28
  c->r[3]=c->r[25]|c->r[25]; // 80187E2C
  if (crb(c,2)) { goto L_80187E38; } // 80187E30
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 80187E34
L_80187E38:;
  c->r[28]=0u+0x00000001u; // 80187E38
  W32(c->r[25]+0x00000008u,c->r[3]); // 80187E3C
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80187E40
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 80187E44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187E48
  if (!crb(c,2)) { goto L_80187E8C; } // 80187E4C
  c->r[27]=0u+0x80730000u; // 80187E50
  c->r[3]=c->r[27]+0x000073A8u; // 80187E54
  c->lr=0x80187E5Cu; f_800506C0(c); // 80187E58
  c->r[6]=0u+0x806D0000u; // 80187E5C
  c->r[4]=0u+0x80050000u; // 80187E60
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 80187E64
  c->r[3]=c->r[27]+0x000073A8u; // 80187E68
  c->r[0]=c->r[6]+0x00000008u; // 80187E6C
  c->r[5]=0u+0x80750000u; // 80187E70
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187E74
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80187E78
  c->r[5]=c->r[5]+0x00004B5Cu; // 80187E7C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187E80
  c->lr=0x80187E88u; f_803A92B8(c); // 80187E84
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 80187E88
L_80187E8C:;
  c->r[3]=0u+0x80730000u; // 80187E8C
  c->r[5]=c->r[25]|c->r[25]; // 80187E90
  c->r[3]=c->r[3]+0x000073A8u; // 80187E94
  c->r[4]=c->r[3]|c->r[3]; // 80187E98
  c->lr=0x80187EA0u; f_802DDCA8(c); // 80187E9C
  c->r[25]=c->r[26]+0x0000033Cu; // 80187EA0
  c->r[3]=c->r[25]|c->r[25]; // 80187EA4
  c->lr=0x80187EACu; f_800506C0(c); // 80187EA8
  cmps(c,0,(int32_t)c->r[25],0); // 80187EAC
  c->r[3]=c->r[25]|c->r[25]; // 80187EB0
  if (crb(c,2)) { goto L_80187EBC; } // 80187EB4
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 80187EB8
L_80187EBC:;
  c->r[28]=0u+0x00000001u; // 80187EBC
  W32(c->r[25]+0x00000008u,c->r[3]); // 80187EC0
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80187EC4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 80187EC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187ECC
  if (!crb(c,2)) { goto L_80187F10; } // 80187ED0
  c->r[27]=0u+0x80750000u; // 80187ED4
  c->r[3]=c->r[27]+0xFFFF8158u; // 80187ED8
  c->lr=0x80187EE0u; f_800506C0(c); // 80187EDC
  c->r[6]=0u+0x806D0000u; // 80187EE0
  c->r[4]=0u+0x80080000u; // 80187EE4
  c->r[6]=c->r[6]+0x000038F0u; // 80187EE8
  c->r[3]=c->r[27]+0xFFFF8158u; // 80187EEC
  c->r[0]=c->r[6]+0x00000008u; // 80187EF0
  c->r[5]=0u+0x80750000u; // 80187EF4
  W32(c->r[3]+0x00000010u,c->r[6]); // 80187EF8
  c->r[4]=c->r[4]+0xFFFF98C0u; // 80187EFC
  c->r[5]=c->r[5]+0x00004B50u; // 80187F00
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80187F04
  c->lr=0x80187F0Cu; f_803A92B8(c); // 80187F08
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 80187F0C
L_80187F10:;
  c->r[3]=0u+0x80750000u; // 80187F10
  c->r[5]=c->r[25]|c->r[25]; // 80187F14
  c->r[3]=c->r[3]+0xFFFF8158u; // 80187F18
  c->r[4]=c->r[3]|c->r[3]; // 80187F1C
  c->lr=0x80187F24u; f_802DDCA8(c); // 80187F20
  c->r[3]=0u+0x806D0000u; // 80187F24
  W32(c->r[26]+0x00000054u,c->r[31]); // 80187F28
  c->r[3]=c->r[3]+0x00004AE8u; // 80187F2C
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80187F30
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80187F34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187F38
  if (!crb(c,2)) { goto L_80187F58; } // 80187F3C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80187F40
  c->r[0]=0u+0x00000001u; // 80187F44
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80187F48
  c->r[3]=c->r[3]+0x00000001u; // 80187F4C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 80187F50
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80187F54
L_80187F58:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80187F58
  W32(c->r[26]+0x00000328u,c->r[0]); // 80187F5C
  c->r[0]=R8(c->r[13]+0xFFFFCDF4u); // 80187F60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187F64
  if (!crb(c,2)) { goto L_80187F84; } // 80187F68
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 80187F6C
  c->r[0]=0u+0x00000001u; // 80187F70
  W32(c->r[13]+0xFFFFCDF0u,c->r[3]); // 80187F74
  c->r[3]=c->r[3]+0x00000001u; // 80187F78
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80187F7C
  W8(c->r[13]+0xFFFFCDF4u,c->r[0]); // 80187F80
L_80187F84:;
  c->r[0]=R32(c->r[13]+0xFFFFCDF0u); // 80187F84
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 80187F88
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 80187F8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80187F90
  if (!crb(c,2)) { goto L_80187FB0; } // 80187F94
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 80187F98
  c->r[0]=0u+0x00000001u; // 80187F9C
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 80187FA0
  c->r[3]=c->r[3]+0x00000001u; // 80187FA4
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 80187FA8
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 80187FAC
L_80187FB0:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 80187FB0
  c->r[5]=0u+0x806D0000u; // 80187FB4
  c->r[5]=c->r[5]+0xFFFFE468u; // 80187FB8
  W32(c->r[26]+0x00000350u,c->r[0]); // 80187FBC
  c->r[3]=c->r[26]+0x000003B0u; // 80187FC0
  c->r[4]=0u+0x00000000u; // 80187FC4
  W32(c->r[26]+0x00000400u,c->r[5]); // 80187FC8
  c->r[5]=0u+0x00000050u; // 80187FCC
  c->lr=0x80187FD4u; f_800043EC(c); // 80187FD0
  c->r[4]=0u+0x806D0000u; // 80187FD4
  c->r[3]=c->r[26]+0x00000450u; // 80187FD8
  c->r[4]=c->r[4]+0xFFFFE170u; // 80187FDC
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80187FE0
  c->r[0]=c->r[4]+0x00000044u; // 80187FE4
  W32(c->r[26]+0x00000400u,c->r[0]); // 80187FE8
  c->lr=0x80187FF0u; f_8007BDFC(c); // 80187FEC
  c->r[3]=c->r[26]+0x000004C4u; // 80187FF0
  c->lr=0x80187FF8u; f_8007BDFC(c); // 80187FF4
  c->r[3]=c->r[26]+0x00000538u; // 80187FF8
  c->r[4]=0u+0x00000000u; // 80187FFC
  c->r[5]=0u+0x00000008u; // 80188000
  c->lr=0x80188008u; f_800043EC(c); // 80188004
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188008
  cmps(c,0,(int32_t)c->r[24],0); // 8018800C
  if (crb(c,2)) { goto L_80188054; } // 80188010
  c->lr=0x80188018u; f_80188680(c); // 80188014
  c->r[27]=c->r[3]|c->r[3]; // 80188018
  c->lr=0x80188020u; f_8007BDCC(c); // 8018801C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 80188020
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188024
  c->r[5]=0u+0x80190000u; // 80188028
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8018802C
  c->r[4]=c->r[24]+c->r[4]; // 80188030
  c->r[5]=c->r[5]+0xFFFF8714u; // 80188034
  c->r[4]=c->r[4]+c->r[0]; // 80188038
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018803C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188040
  cmpu(c,0,c->r[0],0x0000000Cu); // 80188044
  if (!crb(c,0)) { goto L_80188054; } // 80188048
  c->r[0]=0u+0x0000000Cu; // 8018804C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188050
L_80188054:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188054
  cmps(c,0,(int32_t)c->r[24],0); // 80188058
  if (crb(c,2)) { goto L_801880C4; } // 8018805C
  c->lr=0x80188064u; f_80188680(c); // 80188060
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80188064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188068
  if (!crb(c,2)) { goto L_8018808C; } // 8018806C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80188070
  c->r[0]=0u+0x00000001u; // 80188074
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80188078
  c->r[4]=c->r[5]+0x00000001u; // 8018807C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80188080
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 80188084
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80188088
L_8018808C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8018808C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 80188090
  c->r[5]=0u+0x80190000u; // 80188094
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188098
  c->r[4]=c->r[24]+c->r[4]; // 8018809C
  c->r[5]=c->r[5]+0xFFFF8710u; // 801880A0
  c->r[4]=c->r[4]+c->r[0]; // 801880A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801880A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801880AC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801880B0
  cmpu(c,0,c->r[0],0x00000018u); // 801880B4
  if (!crb(c,0)) { goto L_801880C4; } // 801880B8
  c->r[0]=0u+0x00000018u; // 801880BC
  W32(c->r[24]+c->r[3],c->r[0]); // 801880C0
L_801880C4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801880C4
  cmps(c,0,(int32_t)c->r[24],0); // 801880C8
  if (crb(c,2)) { goto L_80188134; } // 801880CC
  c->lr=0x801880D4u; f_80188680(c); // 801880D0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 801880D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801880D8
  if (!crb(c,2)) { goto L_801880FC; } // 801880DC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801880E0
  c->r[0]=0u+0x00000001u; // 801880E4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801880E8
  c->r[4]=c->r[5]+0x00000001u; // 801880EC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801880F0
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 801880F4
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 801880F8
L_801880FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801880FC
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 80188100
  c->r[5]=0u+0x80190000u; // 80188104
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188108
  c->r[4]=c->r[24]+c->r[4]; // 8018810C
  c->r[5]=c->r[5]+0xFFFF870Cu; // 80188110
  c->r[4]=c->r[4]+c->r[0]; // 80188114
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188118
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018811C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188120
  cmpu(c,0,c->r[0],0x0000006Cu); // 80188124
  if (!crb(c,0)) { goto L_80188134; } // 80188128
  c->r[0]=0u+0x0000006Cu; // 8018812C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188130
L_80188134:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188134
  cmps(c,0,(int32_t)c->r[24],0); // 80188138
  if (crb(c,2)) { goto L_801881A4; } // 8018813C
  c->lr=0x80188144u; f_80188680(c); // 80188140
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 80188144
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188148
  if (!crb(c,2)) { goto L_8018816C; } // 8018814C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80188150
  c->r[0]=0u+0x00000001u; // 80188154
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80188158
  c->r[4]=c->r[5]+0x00000001u; // 8018815C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80188160
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 80188164
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80188168
L_8018816C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8018816C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80188170
  c->r[5]=0u+0x80190000u; // 80188174
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188178
  c->r[4]=c->r[24]+c->r[4]; // 8018817C
  c->r[5]=c->r[5]+0xFFFF8708u; // 80188180
  c->r[4]=c->r[4]+c->r[0]; // 80188184
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188188
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018818C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188190
  cmpu(c,0,c->r[0],0x0000002Cu); // 80188194
  if (!crb(c,0)) { goto L_801881A4; } // 80188198
  c->r[0]=0u+0x0000002Cu; // 8018819C
  W32(c->r[24]+c->r[3],c->r[0]); // 801881A0
L_801881A4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801881A4
  cmps(c,0,(int32_t)c->r[24],0); // 801881A8
  if (crb(c,2)) { goto L_80188214; } // 801881AC
  c->lr=0x801881B4u; f_80188680(c); // 801881B0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801881B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801881B8
  if (!crb(c,2)) { goto L_801881DC; } // 801881BC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801881C0
  c->r[0]=0u+0x00000001u; // 801881C4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801881C8
  c->r[4]=c->r[5]+0x00000001u; // 801881CC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801881D0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801881D4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801881D8
L_801881DC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801881DC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801881E0
  c->r[5]=0u+0x80190000u; // 801881E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801881E8
  c->r[4]=c->r[24]+c->r[4]; // 801881EC
  c->r[5]=c->r[5]+0xFFFF8704u; // 801881F0
  c->r[4]=c->r[4]+c->r[0]; // 801881F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801881F8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801881FC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188200
  cmpu(c,0,c->r[0],0x00000010u); // 80188204
  if (!crb(c,0)) { goto L_80188214; } // 80188208
  c->r[0]=0u+0x00000010u; // 8018820C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188210
L_80188214:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188214
  cmps(c,0,(int32_t)c->r[24],0); // 80188218
  if (crb(c,2)) { goto L_80188284; } // 8018821C
  c->lr=0x80188224u; f_80188680(c); // 80188220
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 80188224
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188228
  if (!crb(c,2)) { goto L_8018824C; } // 8018822C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80188230
  c->r[0]=0u+0x00000001u; // 80188234
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80188238
  c->r[4]=c->r[5]+0x00000001u; // 8018823C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80188240
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 80188244
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 80188248
L_8018824C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8018824C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 80188250
  c->r[5]=0u+0x80190000u; // 80188254
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188258
  c->r[4]=c->r[24]+c->r[4]; // 8018825C
  c->r[5]=c->r[5]+0xFFFF8700u; // 80188260
  c->r[4]=c->r[4]+c->r[0]; // 80188264
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188268
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018826C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188270
  cmpu(c,0,c->r[0],0x0000005Cu); // 80188274
  if (!crb(c,0)) { goto L_80188284; } // 80188278
  c->r[0]=0u+0x0000005Cu; // 8018827C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188280
L_80188284:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188284
  cmps(c,0,(int32_t)c->r[24],0); // 80188288
  if (crb(c,2)) { goto L_801882F4; } // 8018828C
  c->lr=0x80188294u; f_80188680(c); // 80188290
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 80188294
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188298
  if (!crb(c,2)) { goto L_801882BC; } // 8018829C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801882A0
  c->r[0]=0u+0x00000001u; // 801882A4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801882A8
  c->r[4]=c->r[5]+0x00000001u; // 801882AC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801882B0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801882B4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801882B8
L_801882BC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801882BC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801882C0
  c->r[5]=0u+0x80190000u; // 801882C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801882C8
  c->r[4]=c->r[24]+c->r[4]; // 801882CC
  c->r[5]=c->r[5]+0xFFFF86FCu; // 801882D0
  c->r[4]=c->r[4]+c->r[0]; // 801882D4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801882D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801882DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801882E0
  cmpu(c,0,c->r[0],0x0000005Cu); // 801882E4
  if (!crb(c,0)) { goto L_801882F4; } // 801882E8
  c->r[0]=0u+0x0000005Cu; // 801882EC
  W32(c->r[24]+c->r[3],c->r[0]); // 801882F0
L_801882F4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801882F4
  cmps(c,0,(int32_t)c->r[24],0); // 801882F8
  if (crb(c,2)) { goto L_80188364; } // 801882FC
  c->lr=0x80188304u; f_80188680(c); // 80188300
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 80188304
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188308
  if (!crb(c,2)) { goto L_8018832C; } // 8018830C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80188310
  c->r[0]=0u+0x00000001u; // 80188314
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80188318
  c->r[4]=c->r[5]+0x00000001u; // 8018831C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80188320
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 80188324
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 80188328
L_8018832C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8018832C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 80188330
  c->r[5]=0u+0x80190000u; // 80188334
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188338
  c->r[4]=c->r[24]+c->r[4]; // 8018833C
  c->r[5]=c->r[5]+0xFFFF86F8u; // 80188340
  c->r[4]=c->r[4]+c->r[0]; // 80188344
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188348
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018834C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188350
  cmpu(c,0,c->r[0],0x0000005Cu); // 80188354
  if (!crb(c,0)) { goto L_80188364; } // 80188358
  c->r[0]=0u+0x0000005Cu; // 8018835C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188360
L_80188364:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80188364
  cmps(c,0,(int32_t)c->r[24],0); // 80188368
  if (crb(c,2)) { goto L_801883D4; } // 8018836C
  c->lr=0x80188374u; f_80188680(c); // 80188370
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80188374
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188378
  if (!crb(c,2)) { goto L_8018839C; } // 8018837C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80188380
  c->r[0]=0u+0x00000001u; // 80188384
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80188388
  c->r[4]=c->r[5]+0x00000001u; // 8018838C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80188390
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 80188394
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80188398
L_8018839C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8018839C
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 801883A0
  c->r[5]=0u+0x80190000u; // 801883A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801883A8
  c->r[4]=c->r[24]+c->r[4]; // 801883AC
  c->r[5]=c->r[5]+0xFFFF86F4u; // 801883B0
  c->r[4]=c->r[4]+c->r[0]; // 801883B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801883B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801883BC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801883C0
  cmpu(c,0,c->r[0],0x0000005Cu); // 801883C4
  if (!crb(c,0)) { goto L_801883D4; } // 801883C8
  c->r[0]=0u+0x0000005Cu; // 801883CC
  W32(c->r[24]+c->r[3],c->r[0]); // 801883D0
L_801883D4:;
  c->r[3]=c->r[26]|c->r[26]; // 801883D4
  c->lr=0x801883DCu; f_8005BBF0(c); // 801883D8
  c->r[3]=0u+0x806E0000u; // 801883DC
  c->r[4]=0u+0x80190000u; // 801883E0
  c->r[3]=c->r[3]+0x00000800u; // 801883E4
  c->r[5]=0u+0x80190000u; // 801883E8
  c->r[0]=c->r[3]+0x00000044u; // 801883EC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 801883F0
  c->r[3]=c->r[26]+0x000005C0u; // 801883F4
  c->r[4]=c->r[4]+0xFFFF8638u; // 801883F8
  W32(c->r[26]+0x00000400u,c->r[0]); // 801883FC
  c->r[5]=c->r[5]+0xFFFF8718u; // 80188400
  c->r[6]=0u+0x0000011Cu; // 80188404
  c->r[7]=0u+0x00000006u; // 80188408
  c->lr=0x80188410u; f_803A9830(c); // 8018840C
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80188410
  cmps(c,0,(int32_t)c->r[24],0); // 80188414
  if (crb(c,2)) { goto L_80188480; } // 80188418
  c->lr=0x80188420u; f_80188680(c); // 8018841C
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80188420
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188424
  if (!crb(c,2)) { goto L_80188448; } // 80188428
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8018842C
  c->r[0]=0u+0x00000001u; // 80188430
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80188434
  c->r[4]=c->r[5]+0x00000001u; // 80188438
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8018843C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80188440
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80188444
L_80188448:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80188448
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8018844C
  c->r[5]=0u+0x80190000u; // 80188450
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80188454
  c->r[4]=c->r[24]+c->r[4]; // 80188458
  c->r[5]=c->r[5]+0xFFFF86F0u; // 8018845C
  c->r[4]=c->r[4]+c->r[0]; // 80188460
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188464
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80188468
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018846C
  cmpu(c,0,c->r[0],0x00000010u); // 80188470
  if (!crb(c,0)) { goto L_80188480; } // 80188474
  c->r[0]=0u+0x00000010u; // 80188478
  W32(c->r[24]+c->r[3],c->r[0]); // 8018847C
L_80188480:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80188480
  cmps(c,0,(int32_t)c->r[24],0); // 80188484
  if (crb(c,2)) { goto L_801884CC; } // 80188488
  c->lr=0x80188490u; f_80188680(c); // 8018848C
  c->r[27]=c->r[3]|c->r[3]; // 80188490
  c->lr=0x80188498u; f_800E6A20(c); // 80188494
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80188498
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018849C
  c->r[5]=0u+0x80190000u; // 801884A0
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801884A4
  c->r[4]=c->r[24]+c->r[4]; // 801884A8
  c->r[5]=c->r[5]+0xFFFF86ECu; // 801884AC
  c->r[4]=c->r[4]+c->r[0]; // 801884B0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801884B4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801884B8
  cmpu(c,0,c->r[0],0x00000010u); // 801884BC
  if (!crb(c,0)) { goto L_801884CC; } // 801884C0
  c->r[0]=0u+0x00000010u; // 801884C4
  W32(c->r[24]+c->r[3],c->r[0]); // 801884C8
L_801884CC:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801884CC
  cmps(c,0,(int32_t)c->r[24],0); // 801884D0
  if (crb(c,2)) { goto L_80188518; } // 801884D4
  c->lr=0x801884DCu; f_80188680(c); // 801884D8
  c->r[27]=c->r[3]|c->r[3]; // 801884DC
  c->lr=0x801884E4u; f_80062EBC(c); // 801884E0
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801884E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801884E8
  c->r[5]=0u+0x80190000u; // 801884EC
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801884F0
  c->r[4]=c->r[24]+c->r[4]; // 801884F4
  c->r[5]=c->r[5]+0xFFFF86E8u; // 801884F8
  c->r[4]=c->r[4]+c->r[0]; // 801884FC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80188500
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188504
  cmpu(c,0,c->r[0],0x00000010u); // 80188508
  if (!crb(c,0)) { goto L_80188518; } // 8018850C
  c->r[0]=0u+0x00000010u; // 80188510
  W32(c->r[24]+c->r[3],c->r[0]); // 80188514
L_80188518:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80188518
  cmps(c,0,(int32_t)c->r[24],0); // 8018851C
  if (crb(c,2)) { goto L_80188564; } // 80188520
  c->lr=0x80188528u; f_80188680(c); // 80188524
  c->r[27]=c->r[3]|c->r[3]; // 80188528
  c->lr=0x80188530u; f_801886B8(c); // 8018852C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80188530
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80188534
  c->r[5]=0u+0x80190000u; // 80188538
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8018853C
  c->r[4]=c->r[24]+c->r[4]; // 80188540
  c->r[5]=c->r[5]+0xFFFF86B4u; // 80188544
  c->r[4]=c->r[4]+c->r[0]; // 80188548
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8018854C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80188550
  cmpu(c,0,c->r[0],0x00000010u); // 80188554
  if (!crb(c,0)) { goto L_80188564; } // 80188558
  c->r[0]=0u+0x00000010u; // 8018855C
  W32(c->r[24]+c->r[3],c->r[0]); // 80188560
L_80188564:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80188564
  cmps(c,0,(int32_t)c->r[24],0); // 80188568
  if (crb(c,2)) { goto L_801885D4; } // 8018856C
  c->lr=0x80188574u; f_80188680(c); // 80188570
  c->r[0]=R8(c->r[13]+0xFFFFBD10u); // 80188574
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188578
  if (!crb(c,2)) { goto L_8018859C; } // 8018857C
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80188580
  c->r[0]=0u+0x00000001u; // 80188584
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80188588
  c->r[4]=c->r[5]+0x00000001u; // 8018858C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80188590
  W32(c->r[13]+0xFFFFBD0Cu,c->r[5]); // 80188594
  W8(c->r[13]+0xFFFFBD10u,c->r[0]); // 80188598
L_8018859C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8018859C
  c->r[0]=R32(c->r[13]+0xFFFFBD0Cu); // 801885A0
  c->r[5]=0u+0x80190000u; // 801885A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801885A8
  c->r[4]=c->r[24]+c->r[4]; // 801885AC
  c->r[5]=c->r[5]+0xFFFF86B0u; // 801885B0
  c->r[4]=c->r[4]+c->r[0]; // 801885B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801885B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801885BC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801885C0
  cmpu(c,0,c->r[0],0x00000010u); // 801885C4
  if (!crb(c,0)) { goto L_801885D4; } // 801885C8
  c->r[0]=0u+0x00000010u; // 801885CC
  W32(c->r[24]+c->r[3],c->r[0]); // 801885D0
L_801885D4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801885D4
  cmps(c,0,(int32_t)c->r[24],0); // 801885D8
  if (crb(c,2)) { goto L_80188620; } // 801885DC
  c->lr=0x801885E4u; f_80188680(c); // 801885E0
  c->r[27]=c->r[3]|c->r[3]; // 801885E4
  c->lr=0x801885ECu; f_80062DCC(c); // 801885E8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801885EC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801885F0
  c->r[5]=0u+0x80190000u; // 801885F4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801885F8
  c->r[4]=c->r[24]+c->r[4]; // 801885FC
  c->r[5]=c->r[5]+0xFFFF867Cu; // 80188600
  c->r[4]=c->r[4]+c->r[0]; // 80188604
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80188608
  c->r[0]=R32(c->r[24]+c->r[3]); // 8018860C
  cmpu(c,0,c->r[0],0x00000010u); // 80188610
  if (!crb(c,0)) { goto L_80188620; } // 80188614
  c->r[0]=0u+0x00000010u; // 80188618
  W32(c->r[24]+c->r[3],c->r[0]); // 8018861C
L_80188620:;
  c->r[3]=c->r[26]|c->r[26]; // 80188620
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80188624
  c->r[0]=R32(c->r[1]+0x00000044u); // 80188628
  c->lr=c->r[0]; // 8018862C
  c->r[1]=c->r[1]+0x00000040u; // 80188630
  return; // 80188634
}

// fn_80188638
void f_80188638(Ctx* __restrict c) {
  trace_call(0x80188638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188638
  c->r[0]=c->lr; // 8018863C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188640
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80188644
  c->r[31]=0u+0x00000000u; // 80188648
  c->r[30]=c->r[3]|c->r[3]; // 8018864C
  W32(c->r[3]+0x00000000u,c->r[31]); // 80188650
  c->r[3]=c->r[3]+0x00000040u; // 80188654
  c->lr=0x8018865Cu; f_802EE7E4(c); // 80188658
  W8(c->r[30]+0x00000118u,c->r[31]); // 8018865C
  c->r[3]=c->r[30]|c->r[30]; // 80188660
  W8(c->r[30]+0x0000011Au,c->r[31]); // 80188664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80188668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018866C
  c->lr=c->r[0]; // 80188670
  c->r[1]=c->r[1]+0x00000010u; // 80188674
  return; // 80188678
}

// fn_8018867C
void f_8018867C(Ctx* __restrict c) {
  trace_call(0x8018867Cu);
  f_80189DAC(c); return; // 8018867C
}

// fn_80188680
void f_80188680(Ctx* __restrict c) {
  trace_call(0x80188680u);
  c->r[0]=R8(c->r[13]+0xFFFFCDECu); // 80188680
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80188684
  if (!crb(c,2)) { goto L_801886A8; } // 80188688
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8018868C
  c->r[0]=0u+0x00000001u; // 80188690
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80188694
  c->r[3]=c->r[4]+0x00000001u; // 80188698
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8018869C
  W32(c->r[13]+0xFFFFCDE8u,c->r[4]); // 801886A0
  W8(c->r[13]+0xFFFFCDECu,c->r[0]); // 801886A4
L_801886A8:;
  c->r[3]=R32(c->r[13]+0xFFFFCDE8u); // 801886A8
  return; // 801886AC
}

// fn_801886B0
void f_801886B0(Ctx* __restrict c) {
  trace_call(0x801886B0u);
  return; // 801886B0
}

// fn_801886B4
void f_801886B4(Ctx* __restrict c) {
  trace_call(0x801886B4u);
  f_801899E0(c); return; // 801886B4
}

// fn_801886B8
void f_801886B8(Ctx* __restrict c) {
  trace_call(0x801886B8u);
  c->r[0]=R8(c->r[13]+0xFFFFCDE4u); // 801886B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801886BC
  if (!crb(c,2)) { goto L_801886E0; } // 801886C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801886C4
  c->r[0]=0u+0x00000001u; // 801886C8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801886CC
  c->r[3]=c->r[4]+0x00000001u; // 801886D0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801886D4
  W32(c->r[13]+0xFFFFCDE0u,c->r[4]); // 801886D8
  W8(c->r[13]+0xFFFFCDE4u,c->r[0]); // 801886DC
L_801886E0:;
  c->r[3]=R32(c->r[13]+0xFFFFCDE0u); // 801886E0
  return; // 801886E4
}

// fn_801886E8
void f_801886E8(Ctx* __restrict c) {
  trace_call(0x801886E8u);
  f_801894D4(c); return; // 801886E8
}

// fn_801886EC
void f_801886EC(Ctx* __restrict c) {
  trace_call(0x801886ECu);
  f_801890EC(c); return; // 801886EC
}

// fn_801886F0
void f_801886F0(Ctx* __restrict c) {
  trace_call(0x801886F0u);
  f_80188D64(c); return; // 801886F0
}

// fn_801886F4
void f_801886F4(Ctx* __restrict c) {
  trace_call(0x801886F4u);
  f_8005E338(c); return; // 801886F4
}

// fn_801886F8
void f_801886F8(Ctx* __restrict c) {
  trace_call(0x801886F8u);
  f_8005E324(c); return; // 801886F8
}

