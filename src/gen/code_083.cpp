#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_805A3CAC
void f_805A3CAC(Ctx* __restrict c) {
  trace_call(0x805A3CACu);
  c->r[3]=0u+0x00000002u; // 805A3CAC
  return; // 805A3CB0
}

// fn_805A3CB4
void f_805A3CB4(Ctx* __restrict c) {
  trace_call(0x805A3CB4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A3CB4
  c->r[12]=c->r[1]|c->r[1]; // 805A3CB8
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A3CBC
  c->r[9]=c->r[4]+0x00000160u; // 805A3CC0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A3CC4
  c->r[6]=c->r[3]+0x00000020u; // 805A3CC8
  c->r[8]=c->r[4]+0x00000140u; // 805A3CCC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 805A3CD0
  {uint32_t ea=c->r[4]+0x00000160u; psq_load(c,0,ea,0,0);} // 805A3CD4
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A3CD8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 805A3CDC
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A3CE0
  {uint32_t ea=c->r[4]+0x00000140u; psq_load(c,0,ea,0,0);} // 805A3CE4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,4,ea,0,0);} // 805A3CE8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A3CEC
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3CF0
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805A3CF4
  {uint32_t ea=c->r[4]+0x00000190u; c->f[8]=c->ps1[8]=RF32(ea);} // 805A3CF8
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805A3CFC
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3D00
  {double t0=S(c->f[4]-c->f[0]), t1=S(c->ps1[4]-c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A3D04
  {uint32_t ea=c->r[3]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A3D08
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[5])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[5])); c->f[7]=t0; c->ps1[7]=t1;} // 805A3D0C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A3D10
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 805A3D14
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 805A3D18
  {double t0=S(c->f[7]+c->ps1[7]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A3D1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,4,ea,0,0);} // 805A3D20
  {double t0=S(std::fma(c->f[4],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[4],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 805A3D24
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,3,ea,0,0);} // 805A3D28
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[7]); // 805A3D2C
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 805A3D30
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,2,ea,0,0);} // 805A3D34
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 805A3D38
  fcmp(c,0,c->f[5],c->f[0]); // 805A3D3C
  if (!crb(c,0)) { goto L_805A3D5C; } // 805A3D40
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A3D44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 805A3D48
  fcmp(c,0,c->f[1],c->f[0]); // 805A3D4C
  if (!crb(c,0)) { goto L_805A3D5C; } // 805A3D50
  c->r[3]=0u+0x01000000u; // 805A3D54
  goto L_805A3D80; // 805A3D58
L_805A3D5C:;
  {uint32_t ea=0u+c->r[8]; psq_load(c,0,ea,0,0);} // 805A3D5C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A3D60
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3D64
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A3D68
  {uint32_t ea=0u+c->r[9]; psq_load(c,0,ea,0,0);} // 805A3D6C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A3D70
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3D74
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A3D78
  c->r[3]=0u+0x00000000u; // 805A3D7C
L_805A3D80:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A3D80
  c->r[1]=c->r[10]|c->r[10]; // 805A3D84
  return; // 805A3D88
}

// fn_805A3D8C
void f_805A3D8C(Ctx* __restrict c) {
  trace_call(0x805A3D8Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A3D8C
  c->r[12]=c->r[1]|c->r[1]; // 805A3D90
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A3D94
  c->r[9]=c->r[4]+0x00000160u; // 805A3D98
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A3D9C
  c->r[6]=c->r[3]+0x00000040u; // 805A3DA0
  c->r[8]=c->r[4]+0x00000140u; // 805A3DA4
  {uint32_t ea=c->r[3]+0x00000040u; psq_load(c,1,ea,0,0);} // 805A3DA8
  {uint32_t ea=c->r[4]+0x00000160u; psq_load(c,0,ea,0,0);} // 805A3DAC
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A3DB0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 805A3DB4
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 805A3DB8
  {uint32_t ea=c->r[4]+0x00000140u; psq_load(c,0,ea,0,0);} // 805A3DBC
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,4,ea,0,0);} // 805A3DC0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A3DC4
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3DC8
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805A3DCC
  {uint32_t ea=c->r[4]+0x00000190u; c->f[8]=c->ps1[8]=RF32(ea);} // 805A3DD0
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805A3DD4
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3DD8
  {double t0=S(c->f[4]-c->f[0]), t1=S(c->ps1[4]-c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A3DDC
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A3DE0
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[5])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[5])); c->f[7]=t0; c->ps1[7]=t1;} // 805A3DE4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A3DE8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 805A3DEC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 805A3DF0
  {double t0=S(c->f[7]+c->ps1[7]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A3DF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,4,ea,0,0);} // 805A3DF8
  {double t0=S(std::fma(c->f[4],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[4],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 805A3DFC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,3,ea,0,0);} // 805A3E00
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[7]); // 805A3E04
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 805A3E08
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,2,ea,0,0);} // 805A3E0C
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 805A3E10
  fcmp(c,0,c->f[5],c->f[0]); // 805A3E14
  if (!crb(c,0)) { goto L_805A3E34; } // 805A3E18
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A3E1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 805A3E20
  fcmp(c,0,c->f[1],c->f[0]); // 805A3E24
  if (!crb(c,0)) { goto L_805A3E34; } // 805A3E28
  c->r[3]=0u+0x01000000u; // 805A3E2C
  goto L_805A3E58; // 805A3E30
L_805A3E34:;
  {uint32_t ea=0u+c->r[8]; psq_load(c,0,ea,0,0);} // 805A3E34
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A3E38
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3E3C
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 805A3E40
  {uint32_t ea=0u+c->r[9]; psq_load(c,0,ea,0,0);} // 805A3E44
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A3E48
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A3E4C
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 805A3E50
  c->r[3]=0u+0x00000000u; // 805A3E54
L_805A3E58:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A3E58
  c->r[1]=c->r[10]|c->r[10]; // 805A3E5C
  return; // 805A3E60
}

// fn_805A3E64
void f_805A3E64(Ctx* __restrict c) {
  trace_call(0x805A3E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A3E64
  c->r[0]=c->lr; // 805A3E68
  cmps(c,0,(int32_t)c->r[3],0); // 805A3E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A3E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A3E74
  c->r[31]=c->r[3]|c->r[3]; // 805A3E78
  if (crb(c,2)) { goto L_805A3E9C; } // 805A3E7C
  cmps(c,0,(int32_t)c->r[4],0); // 805A3E80
  if (!crb(c,1)) { goto L_805A3E9C; } // 805A3E84
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A3E88
  c->r[4]=c->r[31]|c->r[31]; // 805A3E8C
  c->r[5]=R16(c->r[31]+0x00000004u); // 805A3E90
  c->r[6]=0u+0x0000002Cu; // 805A3E94
  c->lr=0x805A3E9Cu; f_8062C630(c); // 805A3E98
L_805A3E9C:;
  c->r[3]=c->r[31]|c->r[31]; // 805A3E9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A3EA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A3EA4
  c->lr=c->r[0]; // 805A3EA8
  c->r[1]=c->r[1]+0x00000010u; // 805A3EAC
  return; // 805A3EB0
}

// fn_805A3EB4
void f_805A3EB4(Ctx* __restrict c) {
  trace_call(0x805A3EB4u);
  return; // 805A3EB4
}

// fn_805A3EB8
void f_805A3EB8(Ctx* __restrict c) {
  trace_call(0x805A3EB8u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A3EB8
  if (crb(c,2)) return; // 805A3EBC
  c->r[4]=0u+0x80720000u; // 805A3EC0
  c->r[4]=c->r[4]+0x000021C0u; // 805A3EC4
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A3EC8
  return; // 805A3ECC
}

// fn_805A3ED0
void f_805A3ED0(Ctx* __restrict c) {
  trace_call(0x805A3ED0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A3ED0
  c->r[4]=0u+0xFFFFFFFFu; // 805A3ED4
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A3ED8
  c->ctr=c->r[12]; // 805A3EDC
  if (true) { dispatch(c,c->ctr); return; } // 805A3EE0
}

// fn_805A3EE4
void f_805A3EE4(Ctx* __restrict c) {
  trace_call(0x805A3EE4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A3EE4
  c->r[12]=c->r[1]|c->r[1]; // 805A3EE8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 805A3EEC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A3EF0
  c->r[0]=c->lr; // 805A3EF4
  c->r[3]=0u+0x806C0000u; // 805A3EF8
  c->r[5]=0u+0x00000000u; // 805A3EFC
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A3F00
  c->r[3]=c->r[3]+0xFFFFD940u; // 805A3F04
  c->r[0]=0u+0x00000002u; // 805A3F08
  c->r[6]=0u+0x00000020u; // 805A3F0C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A3F10
  c->r[31]=0u+0x806C0000u; // 805A3F14
  c->r[31]=c->r[31]+0xFFFFDA18u; // 805A3F18
  c->r[7]=0u+0x00000000u; // 805A3F1C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A3F20
  c->r[30]=0u+0x00000000u; // 805A3F24
  c->r[4]=c->r[31]+0x000000B2u; // 805A3F28
  c->r[8]=0u+0x00000000u; // 805A3F2C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805A3F30
  c->r[29]=0u+0x80860000u; // 805A3F34
  c->r[29]=c->r[29]+0xFFFFD8E0u; // 805A3F38
  c->r[9]=0u+0x00000000u; // 805A3F3C
  W32(c->r[1]+0x00000008u,c->r[3]); // 805A3F40
  c->r[3]=c->r[29]+0x00000000u; // 805A3F44
  c->r[10]=0u+0x00000000u; // 805A3F48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805A3F4C
  W32(c->r[1]+0x00000010u,c->r[30]); // 805A3F50
  W32(c->r[1]+0x00000014u,c->r[30]); // 805A3F54
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A3F58
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805A3F5C
  c->lr=0x805A3F64u; f_8062E0DC(c); // 805A3F60
  c->r[6]=c->r[29]+0x00000030u; // 805A3F64
  c->r[3]=0u+0x805A0000u; // 805A3F68
  c->r[0]=c->r[31]+0x000000B2u; // 805A3F6C
  W32(c->r[29]+0x00000030u,c->r[0]); // 805A3F70
  c->r[3]=c->r[3]+0x00003EB4u; // 805A3F74
  c->r[8]=0u+0x806C0000u; // 805A3F78
  W32(c->r[6]+0x00000008u,c->r[3]); // 805A3F7C
  c->r[8]=c->r[8]+0xFFFFD970u; // 805A3F80
  c->r[5]=0u+0x80860000u; // 805A3F84
  c->r[0]=0u+0x00000007u; // 805A3F88
  W32(c->r[6]+0x00000004u,c->r[30]); // 805A3F8C
  c->r[3]=c->r[29]+0x00000040u; // 805A3F90
  c->r[4]=c->r[31]+0x000000D7u; // 805A3F94
  c->r[5]=c->r[5]+0xFFFFD8B0u; // 805A3F98
  W32(c->r[6]+0x0000000Cu,c->r[30]); // 805A3F9C
  c->r[6]=0u+0x00000070u; // 805A3FA0
  c->r[7]=0u+0x00000000u; // 805A3FA4
  c->r[9]=0u+0x00000000u; // 805A3FA8
  W32(c->r[1]+0x00000008u,c->r[8]); // 805A3FAC
  c->r[8]=0u+0x00000000u; // 805A3FB0
  c->r[10]=0u+0x00000000u; // 805A3FB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805A3FB8
  W32(c->r[1]+0x00000010u,c->r[30]); // 805A3FBC
  W32(c->r[1]+0x00000014u,c->r[30]); // 805A3FC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A3FC4
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805A3FC8
  c->lr=0x805A3FD0u; f_8062E0DC(c); // 805A3FCC
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A3FD0
  if (crb(c,2)) { goto L_805A3FE4; } // 805A3FD4
  c->r[3]=0u+0x80720000u; // 805A3FD8
  c->r[3]=c->r[3]+0x000021C0u; // 805A3FDC
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A3FE0
L_805A3FE4:;
  c->r[4]=0u+0x806C0000u; // 805A3FE4
  c->r[5]=0u+0x805A0000u; // 805A3FE8
  c->r[4]=c->r[4]+0xFFFFDA18u; // 805A3FEC
  c->r[3]=0u+0x805A0000u; // 805A3FF0
  c->r[6]=c->r[4]+0x000000D7u; // 805A3FF4
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A3FF8
  c->r[4]=c->r[29]+0x00000070u; // 805A3FFC
  c->r[5]=c->r[5]+0x00003EB8u; // 805A4000
  c->r[3]=c->r[3]+0x00003ED0u; // 805A4004
  W32(c->r[29]+0x00000070u,c->r[6]); // 805A4008
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A400C
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A4010
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A4014
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4018
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A401C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A4020
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805A4024
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A4028
  c->lr=c->r[0]; // 805A402C
  c->r[1]=c->r[10]|c->r[10]; // 805A4030
  return; // 805A4034
}

// fn_805A4038
void f_805A4038(Ctx* __restrict c) {
  trace_call(0x805A4038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4038
  c->r[0]=c->lr; // 805A403C
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A4040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A4044
  c->r[31]=c->r[3]|c->r[3]; // 805A4048
  c->lr=0x805A4050u; f_805A41DC(c); // 805A404C
  c->r[3]=0u+0x80720000u; // 805A4050
  c->r[0]=0u+0x00000008u; // 805A4054
  c->r[3]=c->r[3]+0x00001DB8u; // 805A4058
  W32(c->r[31]+0x00000000u,c->r[3]); // 805A405C
  c->r[3]=c->r[31]|c->r[31]; // 805A4060
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A4064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A4068
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A406C
  c->lr=c->r[0]; // 805A4070
  c->r[1]=c->r[1]+0x00000010u; // 805A4074
  return; // 805A4078
}

// fn_805A407C
void f_805A407C(Ctx* __restrict c) {
  trace_call(0x805A407Cu);
  c->r[6]=0u+0x80720000u; // 805A407C
  {uint32_t ea=c->r[6]+0x00002210u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A4080
  c->r[7]=0u+0x80860000u; // 805A4084
  {uint32_t ea=c->r[7]+0xFFFFD960u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A4088
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A408C
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A4090
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A4094
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A4098
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A409C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A40A0
  return; // 805A40A4
}

// fn_805A40A8
void f_805A40A8(Ctx* __restrict c) {
  trace_call(0x805A40A8u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A40A8
  if (crb(c,2)) return; // 805A40AC
  c->r[5]=0u+0x80720000u; // 805A40B0
  cmps(c,0,(int32_t)c->r[4],0); // 805A40B4
  c->r[5]=c->r[5]+0x00002580u; // 805A40B8
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A40BC
  if (crb(c,2)) { goto L_805A40D0; } // 805A40C0
  c->r[0]=R32(c->r[13]+0xFFFFABA8u); // 805A40C4
  c->r[0]=sraw(c,c->r[0],16); // 805A40C8
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A40CC
L_805A40D0:;
  c->r[4]=0u+0x80720000u; // 805A40D0
  c->r[4]=c->r[4]+0x00001DB8u; // 805A40D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A40D8
  return; // 805A40DC
}

// fn_805A40E0
void f_805A40E0(Ctx* __restrict c) {
  trace_call(0x805A40E0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A40E0
  c->r[4]=0u+0xFFFFFFFFu; // 805A40E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A40E8
  c->ctr=c->r[12]; // 805A40EC
  if (true) { dispatch(c,c->ctr); return; } // 805A40F0
}

// fn_805A40F4
void f_805A40F4(Ctx* __restrict c) {
  trace_call(0x805A40F4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A40F4
  c->r[12]=c->r[1]|c->r[1]; // 805A40F8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A40FC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4100
  c->r[0]=c->lr; // 805A4104
  c->r[3]=0u+0x80860000u; // 805A4108
  c->r[4]=0u+0x806C0000u; // 805A410C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A4110
  c->r[5]=0u+0x80860000u; // 805A4114
  c->r[3]=c->r[3]+0xFFFFD970u; // 805A4118
  c->r[4]=c->r[4]+0xFFFFDB10u; // 805A411C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A4120
  c->r[31]=0u+0x00000000u; // 805A4124
  c->r[5]=c->r[5]+0xFFFFD9C0u; // 805A4128
  c->r[6]=0u+0x00000120u; // 805A412C
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A4130
  c->r[7]=0u+0x00000000u; // 805A4134
  c->r[8]=0u+0x00000000u; // 805A4138
  c->r[9]=0u+0x00000000u; // 805A413C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A4140
  c->r[10]=0u+0x00000000u; // 805A4144
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A4148
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A414C
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A4150
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A4154
  c->lr=0x805A415Cu; f_8062E0DC(c); // 805A4158
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A415C
  if (crb(c,2)) { goto L_805A4190; } // 805A4160
  c->r[3]=0u+0x80720000u; // 805A4164
  cmps(c,0,(int32_t)c->r[31],0); // 805A4168
  c->r[3]=c->r[3]+0x00002580u; // 805A416C
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A4170
  if (crb(c,2)) { goto L_805A4184; } // 805A4174
  c->r[0]=R32(c->r[13]+0xFFFFABA8u); // 805A4178
  c->r[0]=sraw(c,c->r[0],16); // 805A417C
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A4180
L_805A4184:;
  c->r[3]=0u+0x80720000u; // 805A4184
  c->r[3]=c->r[3]+0x00001DB8u; // 805A4188
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A418C
L_805A4190:;
  c->r[6]=0u+0x80860000u; // 805A4190
  c->r[7]=0u+0x806C0000u; // 805A4194
  c->r[5]=0u+0x805A0000u; // 805A4198
  c->r[3]=0u+0x805A0000u; // 805A419C
  c->r[7]=c->r[7]+0xFFFFDB10u; // 805A41A0
  c->r[4]=c->r[6]+0xFFFFD9A0u; // 805A41A4
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A41A8
  c->r[5]=c->r[5]+0x000040A8u; // 805A41AC
  c->r[3]=c->r[3]+0x000040E0u; // 805A41B0
  W32(c->r[6]+0xFFFFD9A0u,c->r[7]); // 805A41B4
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A41B8
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A41BC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A41C0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A41C4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A41C8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A41CC
  c->lr=c->r[0]; // 805A41D0
  c->r[1]=c->r[10]|c->r[10]; // 805A41D4
  return; // 805A41D8
}

// fn_805A41DC
void f_805A41DC(Ctx* __restrict c) {
  trace_call(0x805A41DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A41DC
  c->r[0]=c->lr; // 805A41E0
  c->r[6]=0u+0x00000000u; // 805A41E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A41E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A41EC
  c->r[31]=c->r[3]|c->r[3]; // 805A41F0
  c->lr=0x805A41F8u; f_805A8CA0(c); // 805A41F4
  {uint32_t ea=c->r[2]+0x000027D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A41F8
  c->r[3]=0u+0x80720000u; // 805A41FC
  c->r[3]=c->r[3]+0x00002230u; // 805A4200
  c->r[0]=0u+0x00000004u; // 805A4204
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4208
  W32(c->r[31]+0x00000000u,c->r[3]); // 805A420C
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4210
  c->r[3]=c->r[31]|c->r[31]; // 805A4214
  {uint32_t ea=c->r[31]+0x000000C0u; psq_store(c,1,ea,0,0);} // 805A4218
  {uint32_t ea=c->r[31]+0x000000C8u; psq_store(c,0,ea,0,0);} // 805A421C
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A4220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A4224
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A4228
  c->lr=c->r[0]; // 805A422C
  c->r[1]=c->r[1]+0x00000010u; // 805A4230
  return; // 805A4234
}

// fn_805A4238
void f_805A4238(Ctx* __restrict c) {
  trace_call(0x805A4238u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4238
  c->r[0]=c->r[2]+0x000027E0u; // 805A423C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFC0u,1); // 805A4240
  c->r[12]=c->r[1]|c->r[1]; // 805A4244
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4248
  c->r[10]=c->r[4]+0x00000020u; // 805A424C
  {uint32_t ea=0u+c->r[0]; psq_load(c,4,ea,0,0);} // 805A4250
  c->r[0]=c->r[2]+0x000027E8u; // 805A4254
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,3,ea,0,0); c->r[3]=ea;} // 805A4258
  c->r[8]=c->r[1]+0x00000020u; // 805A425C
  {uint32_t ea=0u+c->r[0]; psq_load(c,5,ea,0,0);} // 805A4260
  c->r[9]=c->r[4]+0x00000010u; // 805A4264
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4268
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A426C
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,4,ea,0,0);} // 805A4270
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4274
  {double t0=S((c->f[2]>=0.0)?c->f[4]:c->f[3]), t1=S((c->ps1[2]>=0.0)?c->ps1[4]:c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4278
  {uint32_t ea=c->r[2]+0x000027D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A427C
  {uint32_t ea=0u+c->r[4]; psq_store(c,5,ea,0,0);} // 805A4280
  {double t0=S((c->f[0]>=0.0)?c->f[4]:c->f[1]), t1=S((c->ps1[0]>=0.0)?c->ps1[4]:c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4284
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,2,ea,0,0);} // 805A4288
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A428C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A4290
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4294
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4298
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 805A429C
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A42A0
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A42A4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A42A8
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A42AC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,5,ea,0,0);} // 805A42B0
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 805A42B4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 805A42B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,4,ea,0,0);} // 805A42BC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A42C0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,5,ea,0,0);} // 805A42C4
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A42C8
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 805A42CC
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A42D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A42D4
  c->r[1]=c->r[10]|c->r[10]; // 805A42D8
  return; // 805A42DC
}

// fn_805A42E0
void f_805A42E0(Ctx* __restrict c) {
  trace_call(0x805A42E0u);
  {uint32_t ea=c->r[2]+0x000027D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A42E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A42E4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A42E8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[2]); // 805A42EC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A42F0
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A42F4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 805A42F8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 805A42FC
  {double t0=S(c->f[4]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4300
  {double t0=S(c->f[3]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4304
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 805A4308
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,1,ea,0,0);} // 805A430C
  return; // 805A4310
}

// fn_805A4314
void f_805A4314(Ctx* __restrict c) {
  trace_call(0x805A4314u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4314
  c->r[0]=c->r[2]+0x000027E8u; // 805A4318
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A431C
  c->r[12]=c->r[1]|c->r[1]; // 805A4320
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4324
  c->r[7]=c->r[4]+0x00000020u; // 805A4328
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A432C
  c->r[6]=c->r[4]+0x00000010u; // 805A4330
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4334
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A4338
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A433C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4340
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A4344
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4348
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A434C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4350
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4354
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A4358
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 805A435C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 805A4360
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[3]);} // 805A4364
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A4368
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A436C
  c->r[1]=c->r[10]|c->r[10]; // 805A4370
  return; // 805A4374
}

// fn_805A4378
void f_805A4378(Ctx* __restrict c) {
  trace_call(0x805A4378u);
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 805A4378
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A437C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4380
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4384
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4388
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A438C
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,2,ea,0,0);} // 805A4390
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 805A4394
  return; // 805A4398
}

// fn_805A439C
void f_805A439C(Ctx* __restrict c) {
  trace_call(0x805A439Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A439C
  c->r[12]=c->r[1]|c->r[1]; // 805A43A0
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 805A43A4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A43A8
  c->r[0]=c->lr; // 805A43AC
  c->r[9]=c->r[3]|c->r[3]; // 805A43B0
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A43B4
  c->r[5]=c->r[9]+0x00000010u; // 805A43B8
  c->r[6]=c->r[9]+0x00000020u; // 805A43BC
  c->r[7]=c->r[1]+0x00000040u; // 805A43C0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A43C4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A43C8
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805A43CC
  c->r[29]=c->r[9]+0x00000030u; // 805A43D0
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A43D4
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A43D8
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A43DC
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A43E0
  {uint32_t ea=c->r[9]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A43E4
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A43E8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A43EC
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A43F0
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A43F4
  c->r[3]=c->r[4]|c->r[4]; // 805A43F8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A43FC
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,2,ea,0,0);} // 805A4400
  c->r[4]=c->r[7]|c->r[7]; // 805A4404
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,1,ea,0,0);} // 805A4408
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,0,ea,0,0);} // 805A440C
  {uint32_t ea=c->r[9]+0x00000020u; psq_load(c,1,ea,0,0);} // 805A4410
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A4414
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4418
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,2,ea,0,0);} // 805A441C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4420
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,1,ea,0,0);} // 805A4424
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,0,ea,0,0);} // 805A4428
  {uint32_t ea=c->r[9]+0x00000030u; psq_load(c,1,ea,0,0);} // 805A442C
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A4430
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4434
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,3,ea,0,0);} // 805A4438
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A443C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,3,ea,0,0);} // 805A4440
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,4,ea,0,0);} // 805A4444
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,4,ea,0,0);} // 805A4448
  {uint32_t ea=c->r[1]+0x00000060u; psq_store(c,1,ea,0,0);} // 805A444C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,0,ea,0,0);} // 805A4450
  c->lr=0x805A4458u; f_80627F0C(c); // 805A4454
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4458
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A445C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A4460
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A4464
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805A4468
  c->lr=c->r[0]; // 805A446C
  c->r[1]=c->r[10]|c->r[10]; // 805A4470
  return; // 805A4474
}

// fn_805A4478
void f_805A4478(Ctx* __restrict c) {
  trace_call(0x805A4478u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4478
  c->r[12]=c->r[1]|c->r[1]; // 805A447C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFC0u,1); // 805A4480
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4484
  c->r[0]=c->lr; // 805A4488
  c->r[5]=c->r[3]+0x000000C0u; // 805A448C
  c->r[11]=c->r[4]+0x00000020u; // 805A4490
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A4494
  c->r[0]=c->r[2]+0x000027E0u; // 805A4498
  {uint32_t ea=0u+c->r[0]; psq_load(c,4,ea,0,0);} // 805A449C
  c->r[0]=c->r[2]+0x000027E8u; // 805A44A0
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,3,ea,0,0);} // 805A44A4
  c->r[9]=c->r[1]+0x00000020u; // 805A44A8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A44AC
  c->r[10]=c->r[4]+0x00000010u; // 805A44B0
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A44B4
  {uint32_t ea=0u+c->r[0]; psq_load(c,5,ea,0,0);} // 805A44B8
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A44BC
  {uint32_t ea=0u+c->r[4]; psq_store(c,5,ea,0,0);} // 805A44C0
  {double t0=S((c->f[2]>=0.0)?c->f[4]:c->f[3]), t1=S((c->ps1[2]>=0.0)?c->ps1[4]:c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A44C4
  {uint32_t ea=c->r[2]+0x000027D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A44C8
  {double t0=S((c->f[0]>=0.0)?c->f[4]:c->f[1]), t1=S((c->ps1[0]>=0.0)?c->ps1[4]:c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A44CC
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A44D0
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,2,ea,0,0);} // 805A44D4
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A44D8
  c->r[9]=c->r[4]|c->r[4]; // 805A44DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A44E0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A44E4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A44E8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 805A44EC
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A44F0
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,4,ea,0,0);} // 805A44F4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,4,ea,0,0);} // 805A44F8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A44FC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,5,ea,0,0);} // 805A4500
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 805A4504
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A4508
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,5,ea,0,0);} // 805A450C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,5,ea,0,0);} // 805A4510
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 805A4514
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A4518
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 805A451C
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A4520
  c->r[4]=c->r[3]+0x00000010u; // 805A4524
  c->r[3]=c->r[9]|c->r[9]; // 805A4528
  c->lr=0x805A4530u; f_80627E30(c); // 805A452C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4530
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A4534
  c->lr=c->r[0]; // 805A4538
  c->r[1]=c->r[10]|c->r[10]; // 805A453C
  return; // 805A4540
}

// fn_805A4544
void f_805A4544(Ctx* __restrict c) {
  trace_call(0x805A4544u);
  {uint32_t ea=c->r[2]+0x000027D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4544
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A4548
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 805A454C
  c->r[12]=R32(c->r[12]+0x00000018u); // 805A4550
  c->ctr=c->r[12]; // 805A4554
  if (true) { dispatch(c,c->ctr); return; } // 805A4558
}

// fn_805A455C
void f_805A455C(Ctx* __restrict c) {
  trace_call(0x805A455Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A455C
  {uint32_t ea=0u+c->r[4]; psq_load(c,4,ea,0,0);} // 805A4560
  c->r[11]=addc(c,~c->r[11],0xFFFFFF50u,1); // 805A4564
  c->r[12]=c->r[1]|c->r[1]; // 805A4568
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A456C
  c->r[8]=c->r[3]+0x00000060u; // 805A4570
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 805A4574
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 805A4578
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A457C
  c->r[11]=c->r[3]+0x00000010u; // 805A4580
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4584
  {double t0=S(c->f[5]), t1=S(c->f[5]); c->f[5]=t0; c->ps1[5]=t1;} // 805A4588
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A458C
  c->r[6]=c->r[3]+0x000000D0u; // 805A4590
  c->r[9]=c->r[1]+0x00000040u; // 805A4594
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805A4598
  c->r[7]=0u+0x00000008u; // 805A459C
  c->r[10]=c->r[1]+0x00000030u; // 805A45A0
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805A45A4
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805A45A8
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805A45AC
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 805A45B0
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 805A45B4
  W32(c->r[12]+0xFFFFFFBCu,c->r[31]); // 805A45B8
  c->r[12]=c->r[11]+0x00000010u; // 805A45BC
  c->r[31]=c->r[11]+0x00000020u; // 805A45C0
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A45C4
  {uint32_t ea=c->r[11]+0x00000010u; psq_load(c,31,ea,0,0);} // 805A45C8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A45CC
  {uint32_t ea=0u+c->r[5]; psq_load(c,1,ea,0,0);} // 805A45D0
  {uint32_t ea=c->r[11]+0x00000020u; psq_load(c,12,ea,0,0);} // 805A45D4
  {double t0=c->f[31], t1=c->ps1[31]; c->f[9]=t0; c->ps1[9]=t1;} // 805A45D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,0,ea,0,0);} // 805A45DC
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A45E0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A45E4
  {double t0=c->f[12], t1=c->ps1[12]; c->f[10]=t0; c->ps1[10]=t1;} // 805A45E8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A45EC
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,29,ea,0,0);} // 805A45F0
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A45F4
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[28]=c->ps1[28]=RF32(ea);} // 805A45F8
  {double t0=S(c->ps1[29]), t1=S(c->ps1[31]); c->f[31]=t0; c->ps1[31]=t1;} // 805A45FC
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4600
  {double t0=S(c->f[4]*c->f[2]), t1=S(c->ps1[4]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4604
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,0,ea,0,0);} // 805A4608
  {double t0=S(c->f[29]), t1=S(c->f[9]); c->f[29]=t0; c->ps1[29]=t1;} // 805A460C
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,30,ea,0,0);} // 805A4610
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,13,ea,0,0);} // 805A4614
  {double t0=S(std::fma(c->f[0],c->f[5],-c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[5],-c->ps1[2])); c->f[6]=t0; c->ps1[6]=t1;} // 805A4618
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[1])); c->f[5]=t0; c->ps1[5]=t1;} // 805A461C
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A4620
  {double t0=S(c->f[30]), t1=S(c->f[13]); c->f[12]=t0; c->ps1[12]=t1;} // 805A4624
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4628
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A462C
  {double t0=S(c->ps1[5]), t1=S(c->f[6]); c->f[7]=t0; c->ps1[7]=t1;} // 805A4630
  {double t0=S(c->f[28]), t1=S(c->f[28]); c->f[5]=t0; c->ps1[5]=t1;} // 805A4634
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,11,ea,0,0);} // 805A4638
  {double t0=S(c->ps1[10]), t1=S(c->f[10]); c->f[13]=t0; c->ps1[13]=t1;} // 805A463C
  {double t0=-c->f[7], t1=-c->ps1[7]; c->f[7]=t0; c->ps1[7]=t1;} // 805A4640
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4644
  {double t0=S(std::fma(c->f[3],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[3],c->ps1[5],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4648
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,7,ea,0,0);} // 805A464C
  {double t0=S(c->ps1[6]), t1=S(c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 805A4650
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A4654
  {uint32_t ea=c->r[1]+0x00000048u; c->f[8]=c->ps1[8]=RF32(ea);} // 805A4658
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A465C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4660
  {double t0=S(c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4664
  {double t0=S(c->f[8]), t1=S(c->f[8]); c->f[8]=t0; c->ps1[8]=t1;} // 805A4668
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,4,ea,0,0);} // 805A466C
  {double t0=S(c->f[29]*c->f[2]), t1=S(c->ps1[29]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4670
  {double t0=S(c->f[10]*c->f[2]), t1=S(c->ps1[10]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4674
  {double t0=S(std::fma(c->f[31],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4678
  {double t0=S(std::fma(c->f[13],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[13],c->ps1[1],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A467C
  {double t0=S(std::fma(c->f[12],c->f[8],c->f[0])), t1=S(std::fma(c->ps1[12],c->ps1[8],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4680
  {double t0=S(std::fma(c->f[11],c->f[8],c->f[2])), t1=S(std::fma(c->ps1[11],c->ps1[8],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A4684
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A4688
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,1,ea,0,0);} // 805A468C
  c->r[8]=c->r[1]+0x00000010u; // 805A4690
  {uint32_t ea=c->r[3]+0x000000C8u; psq_load(c,3,ea,0,0);} // 805A4694
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4698
  {uint32_t ea=c->r[12]+c->r[7]; psq_load(c,6,ea,0,0);} // 805A469C
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A46A0
  {uint32_t ea=0u+c->r[11]; psq_load(c,3,ea,0,0);} // 805A46A4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A46A8
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 805A46AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A46B0
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[8]=t0; c->ps1[8]=t1;} // 805A46B4
  {uint32_t ea=c->r[3]+0x000000E8u; psq_load(c,0,ea,0,0);} // 805A46B8
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->f[4]); c->f[5]=t0; c->ps1[5]=t1;} // 805A46BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[7]=c->ps1[7]=RF32(ea);} // 805A46C0
  {double t0=S(c->f[30]*c->f[4]), t1=S(c->ps1[30]*c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A46C4
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,3,ea,0,0);} // 805A46C8
  {double t0=S(c->f[7]), t1=S(c->f[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A46CC
  {uint32_t ea=c->r[10]+c->r[7]; psq_store(c,2,ea,0,0);} // 805A46D0
  {double t0=S(std::fma(c->f[9],c->f[8],c->f[5])), t1=S(std::fma(c->ps1[9],c->ps1[8],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A46D4
  {double t0=S(std::fma(c->f[6],c->f[8],c->f[4])), t1=S(std::fma(c->ps1[6],c->ps1[8],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A46D8
  {double t0=S(std::fma(c->f[10],c->f[7],c->f[5])), t1=S(std::fma(c->ps1[10],c->ps1[7],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A46DC
  {double t0=S(std::fma(c->f[11],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[11],c->ps1[7],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A46E0
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A46E4
  {double t0=S(c->f[3]+c->f[5]), t1=S(c->ps1[3]+c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805A46E8
  {double t0=S(c->f[0]+c->f[4]), t1=S(c->ps1[0]+c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805A46EC
  {uint32_t ea=c->r[8]+c->r[7]; psq_store(c,4,ea,0,0);} // 805A46F0
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A46F4
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A46F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A46FC
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A4700
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A4704
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805A4708
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805A470C
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805A4710
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805A4714
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 805A4718
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 805A471C
  c->r[31]=R32(c->r[10]+0xFFFFFFBCu); // 805A4720
  c->r[1]=c->r[10]|c->r[10]; // 805A4724
  return; // 805A4728
}

// fn_805A472C
void f_805A472C(Ctx* __restrict c) {
  trace_call(0x805A472Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A472C
  c->r[12]=c->r[1]|c->r[1]; // 805A4730
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 805A4734
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4738
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A473C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A4740
  c->r[8]=c->r[3]+0x00000010u; // 805A4744
  {uint32_t ea=0u+c->r[4]; psq_load(c,0,ea,0,0);} // 805A4748
  {uint32_t ea=c->r[8]+0x00000010u; psq_load(c,9,ea,0,0);} // 805A474C
  c->r[9]=c->r[8]+0x00000010u; // 805A4750
  {double t0=S(c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4754
  {uint32_t ea=c->r[8]+0x00000020u; psq_load(c,7,ea,0,0);} // 805A4758
  {double t0=c->f[9], t1=c->ps1[9]; c->f[4]=t0; c->ps1[4]=t1;} // 805A475C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 805A4760
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A4764
  c->r[10]=c->r[8]+0x00000020u; // 805A4768
  {double t0=S(c->ps1[2]), t1=S(c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 805A476C
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,10,ea,0,0);} // 805A4770
  {double t0=S(c->f[2]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4774
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,8,ea,0,0);} // 805A4778
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A477C
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,12,ea,0,0);} // 805A4780
  {double t0=c->f[7], t1=c->ps1[7]; c->f[5]=t0; c->ps1[5]=t1;} // 805A4784
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A4788
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805A478C
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,11,ea,0,0);} // 805A4790
  {double t0=S(c->f[10]), t1=S(c->f[8]); c->f[7]=t0; c->ps1[7]=t1;} // 805A4794
  c->r[8]=c->r[1]+0x00000030u; // 805A4798
  {double t0=S(std::fma(c->f[9],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[9],c->ps1[1],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A479C
  {uint32_t ea=c->r[3]+0x000000C8u; psq_load(c,9,ea,0,0);} // 805A47A0
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A47A4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,13,ea,0,0);} // 805A47A8
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[8]=t0; c->ps1[8]=t1;} // 805A47AC
  c->r[9]=c->r[1]+0x00000010u; // 805A47B0
  {double t0=S(std::fma(c->f[7],c->f[3],c->f[2])), t1=S(std::fma(c->ps1[7],c->ps1[3],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A47B4
  {uint32_t ea=c->r[3]+0x000000E8u; psq_load(c,7,ea,0,0);} // 805A47B8
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A47BC
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,2,ea,0,0);} // 805A47C0
  {double t0=S(std::fma(c->f[8],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[8],c->ps1[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A47C4
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,8,ea,0,0);} // 805A47C8
  {double t0=S(c->f[11]*c->f[2]), t1=S(c->ps1[11]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A47CC
  {double t0=S(std::fma(c->f[6],c->f[3],c->f[0])), t1=S(std::fma(c->ps1[6],c->ps1[3],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A47D0
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A47D4
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 805A47D8
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A47DC
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 805A47E0
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A47E4
  {double t0=S(c->f[13]*c->f[2]), t1=S(c->ps1[13]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A47E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A47EC
  {double t0=S(c->f[10]*c->f[2]), t1=S(c->ps1[10]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A47F0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 805A47F4
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A47F8
  {double t0=S(std::fma(c->f[12],c->f[3],c->f[2])), t1=S(std::fma(c->ps1[12],c->ps1[3],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A47FC
  {double t0=S(c->f[31]), t1=S(c->f[31]); c->f[31]=t0; c->ps1[31]=t1;} // 805A4800
  {double t0=S(std::fma(c->f[6],c->f[31],c->f[2])), t1=S(std::fma(c->ps1[6],c->ps1[31],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A4804
  {double t0=S(std::fma(c->f[5],c->f[31],c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[31],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4808
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A480C
  {double t0=S(c->f[7]+c->f[2]), t1=S(c->ps1[7]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4810
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A4814
  {double t0=S(c->f[8]+c->f[1]), t1=S(c->ps1[8]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4818
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A481C
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A4820
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4824
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A4828
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A482C
  c->r[1]=c->r[10]|c->r[10]; // 805A4830
  return; // 805A4834
}

// fn_805A4838
void f_805A4838(Ctx* __restrict c) {
  trace_call(0x805A4838u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4838
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A483C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4840
  c->r[12]=c->r[1]|c->r[1]; // 805A4844
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4848
  c->r[5]=c->r[3]+0x000000D0u; // 805A484C
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A4850
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4854
  c->r[4]=c->r[1]+0x00000010u; // 805A4858
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 805A485C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4860
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4864
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,4,ea,0,0);} // 805A4868
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805A486C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4870
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A4874
  {double t0=S(std::fma(c->f[1],c->f[5],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[5],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4878
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A487C
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4880
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A4884
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4888
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A488C
  c->r[1]=c->r[10]|c->r[10]; // 805A4890
  return; // 805A4894
}

// fn_805A4898
void f_805A4898(Ctx* __restrict c) {
  trace_call(0x805A4898u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4898
  c->r[12]=c->r[1]|c->r[1]; // 805A489C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A48A0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A48A4
  c->r[0]=c->lr; // 805A48A8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A48AC
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A48B0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A48B4
  c->r[6]=c->r[1]+0x00000010u; // 805A48B8
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A48BC
  c->r[4]=c->r[6]|c->r[6]; // 805A48C0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A48C4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A48C8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A48CC
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A48D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A48D4
  c->r[12]=R32(c->r[12]+0x00000058u); // 805A48D8
  c->ctr=c->r[12]; // 805A48DC
  if (true) { c->lr=0x805A48E4u; dispatch(c,c->ctr); } // 805A48E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A48E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A48E8
  c->lr=c->r[0]; // 805A48EC
  c->r[1]=c->r[10]|c->r[10]; // 805A48F0
  return; // 805A48F4
}

// fn_805A48F8
void f_805A48F8(Ctx* __restrict c) {
  trace_call(0x805A48F8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A48F8
  c->r[12]=c->r[1]|c->r[1]; // 805A48FC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4900
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4904
  c->r[0]=c->lr; // 805A4908
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A490C
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A4910
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4914
  c->r[5]=c->r[1]+0x00000010u; // 805A4918
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A491C
  c->r[4]=c->r[5]|c->r[5]; // 805A4920
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4924
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4928
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A492C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4930
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A4934
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 805A4938
  c->ctr=c->r[12]; // 805A493C
  if (true) { c->lr=0x805A4944u; dispatch(c,c->ctr); } // 805A4940
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4944
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A4948
  c->lr=c->r[0]; // 805A494C
  c->r[1]=c->r[10]|c->r[10]; // 805A4950
  return; // 805A4954
}

// fn_805A4958
void f_805A4958(Ctx* __restrict c) {
  trace_call(0x805A4958u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4958
  {uint32_t ea=0u+c->r[5]; psq_load(c,5,ea,0,0);} // 805A495C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 805A4960
  c->r[12]=c->r[1]|c->r[1]; // 805A4964
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4968
  c->r[9]=c->r[3]+0x00000060u; // 805A496C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A4970
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 805A4974
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A4978
  c->r[8]=c->r[3]+0x000000E0u; // 805A497C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4980
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A4984
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A4988
  c->r[31]=c->r[3]+0x00000010u; // 805A498C
  c->r[11]=c->r[3]+0x000000D0u; // 805A4990
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805A4994
  c->r[30]=c->r[31]+0x00000010u; // 805A4998
  c->r[29]=c->r[31]+0x00000020u; // 805A499C
  c->r[12]=c->r[1]+0x00000020u; // 805A49A0
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A49A4
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,8,ea,0,0);} // 805A49A8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A49AC
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A49B0
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,7,ea,0,0);} // 805A49B4
  {double t0=S(c->f[8]*c->f[5]), t1=S(c->ps1[8]*c->ps1[5]); c->f[8]=t0; c->ps1[8]=t1;} // 805A49B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,0,ea,0,0);} // 805A49BC
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A49C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A49C4
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A49C8
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A49CC
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A49D0
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A49D4
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A49D8
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A49DC
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,5,ea,0,0);} // 805A49E0
  c->r[11]=c->r[1]+0x00000040u; // 805A49E4
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A49E8
  {double t0=S(std::fma(c->f[0],c->f[4],-c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[4],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A49EC
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,0,0);} // 805A49F0
  {double t0=S(std::fma(c->f[5],c->f[4],c->f[8])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[8])); c->f[3]=t0; c->ps1[3]=t1;} // 805A49F4
  {double t0=S(c->ps1[1]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A49F8
  {double t0=S(c->f[3]+c->ps1[8]), t1=S(c->ps1[8]); c->f[3]=t0; c->ps1[3]=t1;} // 805A49FC
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 805A4A00
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A4A04
  {double t0=S(c->ps1[2]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4A08
  {uint32_t ea=c->r[1]+0x00000048u; c->f[9]=c->ps1[9]=RF32(ea);} // 805A4A0C
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A4A10
  {double t0=S(c->f[0]*c->f[7]), t1=S(c->ps1[0]*c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4A14
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 805A4A18
  {double t0=S(c->ps1[0]), t1=S(c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 805A4A1C
  {double t0=S(std::fma(c->f[1],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[2])); c->f[7]=t0; c->ps1[7]=t1;} // 805A4A20
  {double t0=S(c->f[9]), t1=S(c->f[9]); c->f[9]=t0; c->ps1[9]=t1;} // 805A4A24
  {double t0=S(c->f[7]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4A28
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 805A4A2C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 805A4A30
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,10,ea,0,0);} // 805A4A34
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,6,ea,0,0);} // 805A4A38
  {double t0=c->f[10], t1=c->ps1[10]; c->f[0]=t0; c->ps1[0]=t1;} // 805A4A3C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,4,ea,0,0);} // 805A4A40
  {double t0=c->f[6], t1=c->ps1[6]; c->f[1]=t0; c->ps1[1]=t1;} // 805A4A44
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4A48
  {double t0=S(c->ps1[4]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 805A4A4C
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,7,ea,0,0);} // 805A4A50
  {double t0=S(c->f[4]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A4A54
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4A58
  {double t0=S(c->f[3]), t1=S(c->f[7]); c->f[6]=t0; c->ps1[6]=t1;} // 805A4A5C
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,12,ea,0,0);} // 805A4A60
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[7]=t0; c->ps1[7]=t1;} // 805A4A64
  {uint32_t ea=c->r[3]+0x000000C8u; psq_load(c,11,ea,0,0);} // 805A4A68
  {double t0=S(c->f[4]*c->f[8]), t1=S(c->ps1[4]*c->f[8]); c->f[4]=t0; c->ps1[4]=t1;} // 805A4A6C
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4A70
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->f[8]); c->f[3]=t0; c->ps1[3]=t1;} // 805A4A74
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[4])), t1=S(std::fma(c->ps1[10],c->ps1[5],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A4A78
  {double t0=S(std::fma(c->f[7],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[7],c->ps1[5],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A4A7C
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[4])), t1=S(std::fma(c->ps1[6],c->ps1[9],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A4A80
  {double t0=S(std::fma(c->f[2],c->f[9],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[9],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A4A84
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,4,ea,0,0);} // 805A4A88
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->ps1[12]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4A8C
  {double t0=S(c->f[3]*c->f[11]), t1=S(c->ps1[3]*c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4A90
  {uint32_t ea=c->r[12]+0x00000008u; psq_store(c,3,ea,0,0);} // 805A4A94
  {double t0=S(c->f[4]*c->f[2]), t1=S(c->ps1[4]*c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 805A4A98
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,0,0);} // 805A4A9C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,0,0);} // 805A4AA0
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4AA4
  {double t0=S(c->f[1]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4AA8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 805A4AAC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 805A4AB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4AB4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A4AB8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A4ABC
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805A4AC0
  c->r[1]=c->r[10]|c->r[10]; // 805A4AC4
  return; // 805A4AC8
}

// fn_805A4ACC
void f_805A4ACC(Ctx* __restrict c) {
  trace_call(0x805A4ACCu);
  c->r[6]=0u+0x80720000u; // 805A4ACC
  {uint32_t ea=c->r[6]+0x00002220u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A4AD0
  c->r[7]=0u+0x80860000u; // 805A4AD4
  {uint32_t ea=c->r[7]+0xFFFFD9B0u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A4AD8
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A4ADC
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A4AE0
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A4AE4
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A4AE8
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A4AEC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A4AF0
  return; // 805A4AF4
}

// fn_805A4AF8
void f_805A4AF8(Ctx* __restrict c) {
  trace_call(0x805A4AF8u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A4AF8
  if (crb(c,2)) return; // 805A4AFC
  c->r[5]=0u+0x80720000u; // 805A4B00
  cmps(c,0,(int32_t)c->r[4],0); // 805A4B04
  c->r[5]=c->r[5]+0x00002580u; // 805A4B08
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A4B0C
  if (crb(c,2)) { goto L_805A4B20; } // 805A4B10
  c->r[0]=R32(c->r[13]+0xFFFFABB0u); // 805A4B14
  c->r[0]=sraw(c,c->r[0],16); // 805A4B18
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A4B1C
L_805A4B20:;
  c->r[4]=0u+0x80720000u; // 805A4B20
  c->r[4]=c->r[4]+0x00002230u; // 805A4B24
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A4B28
  return; // 805A4B2C
}

// fn_805A4B30
void f_805A4B30(Ctx* __restrict c) {
  trace_call(0x805A4B30u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A4B30
  c->r[4]=0u+0xFFFFFFFFu; // 805A4B34
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A4B38
  c->ctr=c->r[12]; // 805A4B3C
  if (true) { dispatch(c,c->ctr); return; } // 805A4B40
}

// fn_805A4B44
void f_805A4B44(Ctx* __restrict c) {
  trace_call(0x805A4B44u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4B44
  c->r[12]=c->r[1]|c->r[1]; // 805A4B48
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A4B4C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4B50
  c->r[0]=c->lr; // 805A4B54
  c->r[3]=0u+0x80860000u; // 805A4B58
  c->r[4]=0u+0x806C0000u; // 805A4B5C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A4B60
  c->r[5]=0u+0x80860000u; // 805A4B64
  c->r[3]=c->r[3]+0xFFFFD9C0u; // 805A4B68
  c->r[4]=c->r[4]+0xFFFFDB28u; // 805A4B6C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A4B70
  c->r[31]=0u+0x00000000u; // 805A4B74
  c->r[5]=c->r[5]+0xFFFFDC30u; // 805A4B78
  c->r[6]=0u+0x00000120u; // 805A4B7C
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A4B80
  c->r[7]=0u+0x00000000u; // 805A4B84
  c->r[8]=0u+0x00000000u; // 805A4B88
  c->r[9]=0u+0x00000000u; // 805A4B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A4B90
  c->r[10]=0u+0x00000000u; // 805A4B94
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A4B98
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A4B9C
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A4BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A4BA4
  c->lr=0x805A4BACu; f_8062E0DC(c); // 805A4BA8
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A4BAC
  if (crb(c,2)) { goto L_805A4BE0; } // 805A4BB0
  c->r[3]=0u+0x80720000u; // 805A4BB4
  cmps(c,0,(int32_t)c->r[31],0); // 805A4BB8
  c->r[3]=c->r[3]+0x00002580u; // 805A4BBC
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A4BC0
  if (crb(c,2)) { goto L_805A4BD4; } // 805A4BC4
  c->r[0]=R32(c->r[13]+0xFFFFABB0u); // 805A4BC8
  c->r[0]=sraw(c,c->r[0],16); // 805A4BCC
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A4BD0
L_805A4BD4:;
  c->r[3]=0u+0x80720000u; // 805A4BD4
  c->r[3]=c->r[3]+0x00002230u; // 805A4BD8
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A4BDC
L_805A4BE0:;
  c->r[6]=0u+0x80860000u; // 805A4BE0
  c->r[7]=0u+0x806C0000u; // 805A4BE4
  c->r[5]=0u+0x805A0000u; // 805A4BE8
  c->r[3]=0u+0x805A0000u; // 805A4BEC
  c->r[7]=c->r[7]+0xFFFFDB28u; // 805A4BF0
  c->r[4]=c->r[6]+0xFFFFD9F0u; // 805A4BF4
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A4BF8
  c->r[5]=c->r[5]+0x00004AF8u; // 805A4BFC
  c->r[3]=c->r[3]+0x00004B30u; // 805A4C00
  W32(c->r[6]+0xFFFFD9F0u,c->r[7]); // 805A4C04
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A4C08
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A4C0C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A4C10
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4C14
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A4C18
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A4C1C
  c->lr=c->r[0]; // 805A4C20
  c->r[1]=c->r[10]|c->r[10]; // 805A4C24
  return; // 805A4C28
}

// fn_805A4C2C
void f_805A4C2C(Ctx* __restrict c) {
  trace_call(0x805A4C2Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4C2C
  c->r[0]=c->r[2]+0x000027F8u; // 805A4C30
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4C34
  c->r[12]=c->r[1]|c->r[1]; // 805A4C38
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4C3C
  c->r[7]=c->r[4]+0x00000020u; // 805A4C40
  {uint32_t ea=0u+c->r[0]; psq_load(c,2,ea,0,0);} // 805A4C44
  c->r[6]=c->r[4]+0x00000010u; // 805A4C48
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4C4C
  {uint32_t ea=c->r[2]+0x000027F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4C50
  {uint32_t ea=0u+c->r[4]; psq_store(c,2,ea,0,0);} // 805A4C54
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 805A4C58
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 805A4C5C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4C60
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4C64
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4C68
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,2,ea,0,0);} // 805A4C6C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 805A4C70
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 805A4C74
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A4C78
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,0,0);} // 805A4C7C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,2,ea,0,0);} // 805A4C80
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4C84
  c->r[1]=c->r[10]|c->r[10]; // 805A4C88
  return; // 805A4C8C
}

// fn_805A4C90
void f_805A4C90(Ctx* __restrict c) {
  trace_call(0x805A4C90u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4C90
  c->r[0]=c->r[2]+0x000027F8u; // 805A4C94
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4C98
  c->r[12]=c->r[1]|c->r[1]; // 805A4C9C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4CA0
  c->r[7]=c->r[4]+0x00000020u; // 805A4CA4
  {uint32_t ea=0u+c->r[0]; psq_load(c,2,ea,0,0);} // 805A4CA8
  c->r[6]=c->r[4]+0x00000010u; // 805A4CAC
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4CB0
  {uint32_t ea=c->r[2]+0x000027F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4CB4
  {uint32_t ea=0u+c->r[4]; psq_store(c,2,ea,0,0);} // 805A4CB8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 805A4CBC
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 805A4CC0
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4CC4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4CC8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4CCC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,2,ea,0,0);} // 805A4CD0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 805A4CD4
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 805A4CD8
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A4CDC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,0,0);} // 805A4CE0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,2,ea,0,0);} // 805A4CE4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4CE8
  c->r[1]=c->r[10]|c->r[10]; // 805A4CEC
  return; // 805A4CF0
}

// fn_805A4CF4
void f_805A4CF4(Ctx* __restrict c) {
  trace_call(0x805A4CF4u);
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4CF4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A4CF8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4CFC
  fcmp(c,0,c->f[2],c->f[0]); // 805A4D00
  if (!crb(c,1)) { goto L_805A4D0C; } // 805A4D04
  goto L_805A4D10; // 805A4D08
L_805A4D0C:;
  c->f[2]=c->f[0]; // 805A4D0C
L_805A4D10:;
  fcmp(c,0,c->f[2],c->f[1]); // 805A4D10
  if (!crb(c,1)) { goto L_805A4D1C; } // 805A4D14
  goto L_805A4D20; // 805A4D18
L_805A4D1C:;
  c->f[2]=c->f[1]; // 805A4D1C
L_805A4D20:;
  {uint32_t ea=c->r[2]+0x00002800u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4D20
  fcmp(c,0,c->f[2],c->f[0]); // 805A4D24
  if (!crb(c,1)) { goto L_805A4D34; } // 805A4D28
  {uint32_t ea=c->r[2]+0x000027F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4D2C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 805A4D30
L_805A4D34:;
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 805A4D34
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 805A4D38
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 805A4D3C
  return; // 805A4D40
}

// fn_805A4D44
void f_805A4D44(Ctx* __restrict c) {
  trace_call(0x805A4D44u);
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A4D44
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A4D48
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4D4C
  fcmp(c,0,c->f[2],c->f[0]); // 805A4D50
  if (!crb(c,0)) { goto L_805A4D5C; } // 805A4D54
  goto L_805A4D60; // 805A4D58
L_805A4D5C:;
  c->f[2]=c->f[0]; // 805A4D5C
L_805A4D60:;
  fcmp(c,0,c->f[2],c->f[1]); // 805A4D60
  if (!crb(c,0)) { goto L_805A4D6C; } // 805A4D64
  goto L_805A4D70; // 805A4D68
L_805A4D6C:;
  c->f[2]=c->f[1]; // 805A4D6C
L_805A4D70:;
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 805A4D70
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[2]);} // 805A4D74
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 805A4D78
  return; // 805A4D7C
}

// fn_805A4D80
void f_805A4D80(Ctx* __restrict c) {
  trace_call(0x805A4D80u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4D80
  c->r[0]=c->r[2]+0x000027F8u; // 805A4D84
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4D88
  c->r[12]=c->r[1]|c->r[1]; // 805A4D8C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4D90
  c->r[7]=c->r[4]+0x00000020u; // 805A4D94
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A4D98
  c->r[6]=c->r[4]+0x00000010u; // 805A4D9C
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4DA0
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4DA4
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A4DA8
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4DAC
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4DB0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4DB4
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4DB8
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A4DBC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 805A4DC0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A4DC4
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 805A4DC8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A4DCC
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4DD0
  c->r[1]=c->r[10]|c->r[10]; // 805A4DD4
  return; // 805A4DD8
}

// fn_805A4DDC
void f_805A4DDC(Ctx* __restrict c) {
  trace_call(0x805A4DDCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4DDC
  c->r[0]=c->r[2]+0x000027F8u; // 805A4DE0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4DE4
  c->r[12]=c->r[1]|c->r[1]; // 805A4DE8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4DEC
  c->r[7]=c->r[4]+0x00000020u; // 805A4DF0
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A4DF4
  c->r[6]=c->r[4]+0x00000010u; // 805A4DF8
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A4DFC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4E00
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A4E04
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4E08
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4E0C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4E10
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4E14
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A4E18
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 805A4E1C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A4E20
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 805A4E24
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A4E28
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4E2C
  c->r[1]=c->r[10]|c->r[10]; // 805A4E30
  return; // 805A4E34
}

// fn_805A4E38
void f_805A4E38(Ctx* __restrict c) {
  trace_call(0x805A4E38u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4E38
  {uint32_t ea=0u+c->r[4]; psq_load(c,4,ea,0,0);} // 805A4E3C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A4E40
  c->r[12]=c->r[1]|c->r[1]; // 805A4E44
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4E48
  c->r[10]=c->r[3]+0x00000060u; // 805A4E4C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 805A4E50
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805A4E54
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4E58
  c->r[7]=c->r[3]+0x000000D0u; // 805A4E5C
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A4E60
  {double t0=S(c->f[9]), t1=S(c->f[9]); c->f[9]=t0; c->ps1[9]=t1;} // 805A4E64
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 805A4E68
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4E6C
  {uint32_t ea=0u+c->r[5]; psq_load(c,1,ea,0,0);} // 805A4E70
  {double t0=S(c->f[5]), t1=S(c->f[5]); c->f[5]=t0; c->ps1[5]=t1;} // 805A4E74
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,2,ea,0,0);} // 805A4E78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A4E7C
  c->r[9]=c->r[3]+0x000000C0u; // 805A4E80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A4E84
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A4E88
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A4E8C
  c->r[8]=c->r[3]+0x000000E0u; // 805A4E90
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A4E94
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,2,ea,0,0);} // 805A4E98
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4E9C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4EA0
  c->r[5]=c->r[1]+0x00000010u; // 805A4EA4
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[7]=t0; c->ps1[7]=t1;} // 805A4EA8
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 805A4EAC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4EB0
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A4EB4
  {double t0=S(std::fma(c->f[0],c->f[9],-c->f[7])), t1=S(std::fma(c->ps1[0],c->ps1[9],-c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 805A4EB8
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,11,ea,0,0);} // 805A4EBC
  {double t0=S(std::fma(c->f[0],c->f[8],-c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[8],-c->ps1[6])); c->f[4]=t0; c->ps1[4]=t1;} // 805A4EC0
  {double t0=S(std::fma(c->f[3],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[5],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4EC4
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,10,ea,0,0);} // 805A4EC8
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,9,ea,0,0);} // 805A4ECC
  {double t0=S(c->ps1[4]), t1=S(c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805A4ED0
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A4ED4
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A4ED8
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 805A4EDC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A4EE0
  {double t0=S(c->ps1[7]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4EE4
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[6])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4EE8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A4EEC
  {double t0=S(std::fma(c->f[11],c->f[0],c->f[10])), t1=S(std::fma(c->ps1[11],c->ps1[0],c->ps1[10])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4EF0
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A4EF4
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 805A4EF8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4EFC
  c->r[1]=c->r[10]|c->r[10]; // 805A4F00
  return; // 805A4F04
}

// fn_805A4F08
void f_805A4F08(Ctx* __restrict c) {
  trace_call(0x805A4F08u);
  c->r[5]=c->r[3]+0x000000C0u; // 805A4F08
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,2,ea,0,0);} // 805A4F0C
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A4F10
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,0,ea,0,0); c->r[3]=ea;} // 805A4F14
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4F18
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4F1C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4F20
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A4F24
  {uint32_t ea=0u+c->r[3]; psq_store(c,0,ea,0,0);} // 805A4F28
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4F2C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4F30
  return; // 805A4F34
}

// fn_805A4F38
void f_805A4F38(Ctx* __restrict c) {
  trace_call(0x805A4F38u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4F38
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A4F3C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4F40
  c->r[12]=c->r[1]|c->r[1]; // 805A4F44
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4F48
  c->r[5]=c->r[3]+0x000000D0u; // 805A4F4C
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A4F50
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4F54
  c->r[4]=c->r[1]+0x00000010u; // 805A4F58
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 805A4F5C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4F60
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4F64
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,4,ea,0,0);} // 805A4F68
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805A4F6C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A4F70
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A4F74
  {double t0=S(std::fma(c->f[1],c->f[5],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[5],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 805A4F78
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4F7C
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 805A4F80
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A4F84
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4F88
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4F8C
  c->r[1]=c->r[10]|c->r[10]; // 805A4F90
  return; // 805A4F94
}

// fn_805A4F98
void f_805A4F98(Ctx* __restrict c) {
  trace_call(0x805A4F98u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4F98
  c->r[12]=c->r[1]|c->r[1]; // 805A4F9C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A4FA0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A4FA4
  c->r[0]=c->lr; // 805A4FA8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A4FAC
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A4FB0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A4FB4
  c->r[6]=c->r[1]+0x00000010u; // 805A4FB8
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A4FBC
  c->r[4]=c->r[6]|c->r[6]; // 805A4FC0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A4FC4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A4FC8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A4FCC
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A4FD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A4FD4
  c->r[12]=R32(c->r[12]+0x00000058u); // 805A4FD8
  c->ctr=c->r[12]; // 805A4FDC
  if (true) { c->lr=0x805A4FE4u; dispatch(c,c->ctr); } // 805A4FE0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A4FE4
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A4FE8
  c->lr=c->r[0]; // 805A4FEC
  c->r[1]=c->r[10]|c->r[10]; // 805A4FF0
  return; // 805A4FF4
}

// fn_805A4FF8
void f_805A4FF8(Ctx* __restrict c) {
  trace_call(0x805A4FF8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A4FF8
  c->r[12]=c->r[1]|c->r[1]; // 805A4FFC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5000
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5004
  c->r[0]=c->lr; // 805A5008
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A500C
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A5010
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A5014
  c->r[5]=c->r[1]+0x00000010u; // 805A5018
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A501C
  c->r[4]=c->r[5]|c->r[5]; // 805A5020
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5024
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5028
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A502C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5030
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A5034
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 805A5038
  c->ctr=c->r[12]; // 805A503C
  if (true) { c->lr=0x805A5044u; dispatch(c,c->ctr); } // 805A5040
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5044
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A5048
  c->lr=c->r[0]; // 805A504C
  c->r[1]=c->r[10]|c->r[10]; // 805A5050
  return; // 805A5054
}

// fn_805A5058
void f_805A5058(Ctx* __restrict c) {
  trace_call(0x805A5058u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5058
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A505C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A5060
  c->r[12]=c->r[1]|c->r[1]; // 805A5064
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5068
  c->r[11]=c->r[3]+0x00000060u; // 805A506C
  c->r[9]=c->r[3]+0x000000E0u; // 805A5070
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5074
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5078
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A507C
  {uint32_t ea=0u+c->r[4]; psq_load(c,2,ea,0,0);} // 805A5080
  c->r[10]=c->r[3]+0x000000D0u; // 805A5084
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5088
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,1,ea,0,0);} // 805A508C
  {uint32_t ea=0u+c->r[5]; psq_load(c,5,ea,0,0);} // 805A5090
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5094
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5098
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,8,ea,0,0);} // 805A509C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A50A0
  c->r[4]=c->r[1]+0x00000020u; // 805A50A4
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A50A8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A50AC
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A50B0
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,7,ea,0,0);} // 805A50B4
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 805A50B8
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A50BC
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->f[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805A50C0
  {double t0=S(std::fma(c->f[5],c->f[4],-c->f[2])), t1=S(std::fma(c->ps1[5],c->ps1[4],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A50C4
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,4,ea,0,0);} // 805A50C8
  {double t0=S(c->f[8]*c->f[5]), t1=S(c->ps1[8]*c->ps1[5]); c->f[8]=t0; c->ps1[8]=t1;} // 805A50CC
  {double t0=S(std::fma(c->f[5],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[3],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A50D0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A50D4
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[8])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[8])); c->f[3]=t0; c->ps1[3]=t1;} // 805A50D8
  {double t0=S(c->ps1[1]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A50DC
  {double t0=S(c->f[3]+c->ps1[8]), t1=S(c->ps1[8]); c->f[3]=t0; c->ps1[3]=t1;} // 805A50E0
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 805A50E4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A50E8
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A50EC
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A50F0
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 805A50F4
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[6],c->ps1[1])); c->f[7]=t0; c->ps1[7]=t1;} // 805A50F8
  {double t0=S(c->f[7]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A50FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 805A5100
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 805A5104
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5108
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 805A510C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5110
  c->r[1]=c->r[10]|c->r[10]; // 805A5114
  return; // 805A5118
}

// fn_805A511C
void f_805A511C(Ctx* __restrict c) {
  trace_call(0x805A511Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A511C
  c->r[0]=c->lr; // 805A5120
  cmps(c,0,(int32_t)c->r[3],0); // 805A5124
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A5128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A512C
  c->r[31]=c->r[3]|c->r[3]; // 805A5130
  if (crb(c,2)) { goto L_805A5154; } // 805A5134
  cmps(c,0,(int32_t)c->r[4],0); // 805A5138
  if (!crb(c,1)) { goto L_805A5154; } // 805A513C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A5140
  c->r[4]=c->r[31]|c->r[31]; // 805A5144
  c->r[5]=R16(c->r[31]+0x00000004u); // 805A5148
  c->r[6]=0u+0x0000002Fu; // 805A514C
  c->lr=0x805A5154u; f_8062C630(c); // 805A5150
L_805A5154:;
  c->r[3]=c->r[31]|c->r[31]; // 805A5154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A5158
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A515C
  c->lr=c->r[0]; // 805A5160
  c->r[1]=c->r[1]+0x00000010u; // 805A5164
  return; // 805A5168
}

// fn_805A516C
void f_805A516C(Ctx* __restrict c) {
  trace_call(0x805A516Cu);
  c->r[6]=0u+0x80720000u; // 805A516C
  {uint32_t ea=c->r[6]+0x000022A0u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A5170
  c->r[7]=0u+0x80860000u; // 805A5174
  {uint32_t ea=c->r[7]+0xFFFFDA00u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A5178
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A517C
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A5180
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A5184
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A5188
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A518C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A5190
  return; // 805A5194
}

// fn_805A5198
void f_805A5198(Ctx* __restrict c) {
  trace_call(0x805A5198u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A5198
  if (crb(c,2)) return; // 805A519C
  c->r[5]=0u+0x80720000u; // 805A51A0
  cmps(c,0,(int32_t)c->r[4],0); // 805A51A4
  c->r[5]=c->r[5]+0x00002580u; // 805A51A8
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A51AC
  if (crb(c,2)) { goto L_805A51C0; } // 805A51B0
  c->r[0]=R32(c->r[13]+0xFFFFABC0u); // 805A51B4
  c->r[0]=sraw(c,c->r[0],16); // 805A51B8
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A51BC
L_805A51C0:;
  c->r[4]=0u+0x80720000u; // 805A51C0
  c->r[4]=c->r[4]+0x000022B0u; // 805A51C4
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A51C8
  return; // 805A51CC
}

// fn_805A51D0
void f_805A51D0(Ctx* __restrict c) {
  trace_call(0x805A51D0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A51D0
  c->r[4]=0u+0xFFFFFFFFu; // 805A51D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A51D8
  c->ctr=c->r[12]; // 805A51DC
  if (true) { dispatch(c,c->ctr); return; } // 805A51E0
}

// fn_805A51E4
void f_805A51E4(Ctx* __restrict c) {
  trace_call(0x805A51E4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A51E4
  c->r[12]=c->r[1]|c->r[1]; // 805A51E8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A51EC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A51F0
  c->r[0]=c->lr; // 805A51F4
  c->r[3]=0u+0x80860000u; // 805A51F8
  c->r[4]=0u+0x806C0000u; // 805A51FC
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A5200
  c->r[5]=0u+0x80860000u; // 805A5204
  c->r[3]=c->r[3]+0xFFFFDA10u; // 805A5208
  c->r[4]=c->r[4]+0xFFFFDB50u; // 805A520C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A5210
  c->r[31]=0u+0x00000000u; // 805A5214
  c->r[5]=c->r[5]+0xFFFFDC30u; // 805A5218
  c->r[6]=0u+0x00000120u; // 805A521C
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A5220
  c->r[7]=0u+0x00000000u; // 805A5224
  c->r[8]=0u+0x00000000u; // 805A5228
  c->r[9]=0u+0x00000000u; // 805A522C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A5230
  c->r[10]=0u+0x00000000u; // 805A5234
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A5238
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A523C
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A5240
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A5244
  c->lr=0x805A524Cu; f_8062E0DC(c); // 805A5248
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A524C
  if (crb(c,2)) { goto L_805A5280; } // 805A5250
  c->r[3]=0u+0x80720000u; // 805A5254
  cmps(c,0,(int32_t)c->r[31],0); // 805A5258
  c->r[3]=c->r[3]+0x00002580u; // 805A525C
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A5260
  if (crb(c,2)) { goto L_805A5274; } // 805A5264
  c->r[0]=R32(c->r[13]+0xFFFFABC0u); // 805A5268
  c->r[0]=sraw(c,c->r[0],16); // 805A526C
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A5270
L_805A5274:;
  c->r[3]=0u+0x80720000u; // 805A5274
  c->r[3]=c->r[3]+0x000022B0u; // 805A5278
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A527C
L_805A5280:;
  c->r[6]=0u+0x80860000u; // 805A5280
  c->r[7]=0u+0x806C0000u; // 805A5284
  c->r[5]=0u+0x805A0000u; // 805A5288
  c->r[3]=0u+0x805A0000u; // 805A528C
  c->r[7]=c->r[7]+0xFFFFDB50u; // 805A5290
  c->r[4]=c->r[6]+0xFFFFDA40u; // 805A5294
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A5298
  c->r[5]=c->r[5]+0x00005198u; // 805A529C
  c->r[3]=c->r[3]+0x000051D0u; // 805A52A0
  W32(c->r[6]+0xFFFFDA40u,c->r[7]); // 805A52A4
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A52A8
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A52AC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A52B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A52B4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A52B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A52BC
  c->lr=c->r[0]; // 805A52C0
  c->r[1]=c->r[10]|c->r[10]; // 805A52C4
  return; // 805A52C8
}

// fn_805A52CC
void f_805A52CC(Ctx* __restrict c) {
  trace_call(0x805A52CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A52CC
  c->r[0]=c->lr; // 805A52D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A52D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A52D8
  c->r[31]=c->r[3]|c->r[3]; // 805A52DC
  c->lr=0x805A52E4u; f_805A55D4(c); // 805A52E0
  c->r[3]=0u+0x80720000u; // 805A52E4
  c->r[0]=0u+0x00000007u; // 805A52E8
  c->r[3]=c->r[3]+0x00002340u; // 805A52EC
  W32(c->r[31]+0x00000000u,c->r[3]); // 805A52F0
  c->r[3]=c->r[31]|c->r[31]; // 805A52F4
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A52F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A52FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A5300
  c->lr=c->r[0]; // 805A5304
  c->r[1]=c->r[1]+0x00000010u; // 805A5308
  return; // 805A530C
}

// fn_805A5310
void f_805A5310(Ctx* __restrict c) {
  trace_call(0x805A5310u);
  return; // 805A5310
}

// fn_805A5314
void f_805A5314(Ctx* __restrict c) {
  trace_call(0x805A5314u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5314
  c->r[0]=c->lr; // 805A5318
  W32(c->r[1]+0x00000034u,c->r[0]); // 805A531C
  c->r[11]=c->r[1]+0x00000030u; // 805A5320
  c->lr=0x805A5328u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805A5324
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,0,ea,0,0);} // 805A5328
  c->r[0]=c->r[2]+0x00002808u; // 805A532C
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5330
  c->r[7]=c->r[3]+0x00000010u; // 805A5334
  c->r[10]=c->r[3]+0x00000020u; // 805A5338
  c->r[23]=c->r[3]+0x00000030u; // 805A533C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5340
  c->r[11]=c->r[1]+0x00000030u; // 805A5344
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5348
  {uint32_t ea=0u+c->r[0]; psq_load(c,1,ea,0,0);} // 805A534C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 805A5350
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A5354
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5358
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A535C
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,0,ea,0,0);} // 805A5360
  {uint32_t ea=c->r[4]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A5364
  {uint32_t ea=c->r[23]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5368
  {uint32_t ea=c->r[4]+0x00000038u; psq_store(c,0,ea,0,0);} // 805A536C
  {uint32_t ea=c->r[3]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A5370
  {uint32_t ea=c->r[4]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A5374
  {uint32_t ea=c->r[3]+0x00000048u; psq_load(c,0,ea,0,0);} // 805A5378
  {uint32_t ea=c->r[4]+0x00000048u; psq_store(c,0,ea,0,0);} // 805A537C
  {uint32_t ea=c->r[3]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A5380
  {uint32_t ea=c->r[4]+0x00000050u; psq_store(c,0,ea,0,0);} // 805A5384
  {uint32_t ea=c->r[3]+0x00000058u; psq_load(c,0,ea,0,0);} // 805A5388
  {uint32_t ea=c->r[4]+0x00000058u; psq_store(c,0,ea,0,0);} // 805A538C
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A5390
  {uint32_t ea=c->r[4]+0x00000060u; psq_store(c,0,ea,0,0);} // 805A5394
  {uint32_t ea=c->r[3]+0x00000068u; psq_load(c,0,ea,0,0);} // 805A5398
  {uint32_t ea=c->r[4]+0x00000068u; psq_store(c,0,ea,0,0);} // 805A539C
  {uint32_t ea=c->r[3]+0x00000070u; psq_load(c,0,ea,0,0);} // 805A53A0
  {uint32_t ea=c->r[4]+0x00000070u; psq_store(c,0,ea,0,0);} // 805A53A4
  {uint32_t ea=c->r[3]+0x00000078u; psq_load(c,0,ea,0,0);} // 805A53A8
  {uint32_t ea=c->r[4]+0x00000078u; psq_store(c,0,ea,0,0);} // 805A53AC
  {uint32_t ea=c->r[3]+0x00000080u; psq_load(c,0,ea,0,0);} // 805A53B0
  {uint32_t ea=c->r[4]+0x00000080u; psq_store(c,0,ea,0,0);} // 805A53B4
  {uint32_t ea=c->r[3]+0x00000088u; psq_load(c,0,ea,0,0);} // 805A53B8
  {uint32_t ea=c->r[4]+0x00000088u; psq_store(c,0,ea,0,0);} // 805A53BC
  {uint32_t ea=c->r[3]+0x00000090u; psq_load(c,0,ea,0,0);} // 805A53C0
  {uint32_t ea=c->r[4]+0x00000090u; psq_store(c,0,ea,0,0);} // 805A53C4
  {uint32_t ea=c->r[3]+0x00000098u; psq_load(c,0,ea,0,0);} // 805A53C8
  {uint32_t ea=c->r[4]+0x00000098u; psq_store(c,0,ea,0,0);} // 805A53CC
  {uint32_t ea=c->r[3]+0x000000A0u; psq_load(c,0,ea,0,0);} // 805A53D0
  {uint32_t ea=c->r[4]+0x000000A0u; psq_store(c,0,ea,0,0);} // 805A53D4
  {uint32_t ea=c->r[3]+0x000000A8u; psq_load(c,0,ea,0,0);} // 805A53D8
  {uint32_t ea=c->r[4]+0x000000A8u; psq_store(c,0,ea,0,0);} // 805A53DC
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A53E0
  {uint32_t ea=c->r[4]+0x000000B0u; WF32(ea,c->f[0]);} // 805A53E4
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A53E8
  {uint32_t ea=c->r[4]+0x000000B4u; WF32(ea,c->f[0]);} // 805A53EC
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A53F0
  {uint32_t ea=c->r[4]+0x000000B8u; WF32(ea,c->f[0]);} // 805A53F4
  c->r[8]=R8(c->r[3]+0x000000BCu); // 805A53F8
  W8(c->r[4]+0x000000BCu,c->r[8]); // 805A53FC
  c->r[8]=R8(c->r[3]+0x000000BDu); // 805A5400
  W8(c->r[4]+0x000000BDu,c->r[8]); // 805A5404
  c->r[3]=R8(c->r[3]+0x000000BEu); // 805A5408
  W8(c->r[4]+0x000000BEu,c->r[3]); // 805A540C
  {uint32_t ea=c->r[4]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A5410
  {uint32_t ea=c->r[4]+0x000000D8u; psq_store(c,1,ea,0,0);} // 805A5414
  {uint32_t ea=c->r[4]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A5418
  {uint32_t ea=c->r[4]+0x000000E8u; psq_store(c,1,ea,0,0);} // 805A541C
  c->lr=0x805A5424u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805A5420
  c->r[0]=R32(c->r[1]+0x00000034u); // 805A5424
  c->lr=c->r[0]; // 805A5428
  c->r[1]=c->r[1]+0x00000030u; // 805A542C
  return; // 805A5430
}

// fn_805A5434
void f_805A5434(Ctx* __restrict c) {
  trace_call(0x805A5434u);
  return; // 805A5434
}

// fn_805A5438
void f_805A5438(Ctx* __restrict c) {
  trace_call(0x805A5438u);
  return; // 805A5438
}

// fn_805A543C
void f_805A543C(Ctx* __restrict c) {
  trace_call(0x805A543Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A543C
  c->r[0]=c->lr; // 805A5440
  cmps(c,0,(int32_t)c->r[3],0); // 805A5444
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A5448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A544C
  c->r[31]=c->r[4]|c->r[4]; // 805A5450
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A5454
  c->r[30]=c->r[3]|c->r[3]; // 805A5458
  if (crb(c,2)) { goto L_805A5484; } // 805A545C
  c->r[4]=0u+0x00000000u; // 805A5460
  c->lr=0x805A5468u; f_805A5638(c); // 805A5464
  cmps(c,0,(int32_t)c->r[31],0); // 805A5468
  if (!crb(c,1)) { goto L_805A5484; } // 805A546C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A5470
  c->r[4]=c->r[30]|c->r[30]; // 805A5474
  c->r[5]=R16(c->r[30]+0x00000004u); // 805A5478
  c->r[6]=0u+0x0000002Fu; // 805A547C
  c->lr=0x805A5484u; f_8062C630(c); // 805A5480
L_805A5484:;
  c->r[3]=c->r[30]|c->r[30]; // 805A5484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A5488
  c->r[30]=R32(c->r[1]+0x00000008u); // 805A548C
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A5490
  c->lr=c->r[0]; // 805A5494
  c->r[1]=c->r[1]+0x00000010u; // 805A5498
  return; // 805A549C
}

// fn_805A54A0
void f_805A54A0(Ctx* __restrict c) {
  trace_call(0x805A54A0u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A54A0
  if (crb(c,2)) return; // 805A54A4
  c->r[5]=0u+0x80720000u; // 805A54A8
  cmps(c,0,(int32_t)c->r[4],0); // 805A54AC
  c->r[5]=c->r[5]+0x00002580u; // 805A54B0
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A54B4
  if (crb(c,2)) { goto L_805A54C8; } // 805A54B8
  c->r[0]=R32(c->r[13]+0xFFFFABD0u); // 805A54BC
  c->r[0]=sraw(c,c->r[0],16); // 805A54C0
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A54C4
L_805A54C8:;
  c->r[4]=0u+0x80720000u; // 805A54C8
  c->r[4]=c->r[4]+0x00002340u; // 805A54CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A54D0
  return; // 805A54D4
}

// fn_805A54D8
void f_805A54D8(Ctx* __restrict c) {
  trace_call(0x805A54D8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A54D8
  c->r[4]=0u+0xFFFFFFFFu; // 805A54DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A54E0
  c->ctr=c->r[12]; // 805A54E4
  if (true) { dispatch(c,c->ctr); return; } // 805A54E8
}

// fn_805A54EC
void f_805A54EC(Ctx* __restrict c) {
  trace_call(0x805A54ECu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A54EC
  c->r[12]=c->r[1]|c->r[1]; // 805A54F0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A54F4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A54F8
  c->r[0]=c->lr; // 805A54FC
  c->r[3]=0u+0x80860000u; // 805A5500
  c->r[4]=0u+0x806C0000u; // 805A5504
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A5508
  c->r[5]=0u+0x80860000u; // 805A550C
  c->r[3]=c->r[3]+0xFFFFDA50u; // 805A5510
  c->r[4]=c->r[4]+0xFFFFDB80u; // 805A5514
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A5518
  c->r[31]=0u+0x00000000u; // 805A551C
  c->r[5]=c->r[5]+0xFFFFDAA0u; // 805A5520
  c->r[6]=0u+0x00000120u; // 805A5524
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A5528
  c->r[7]=0u+0x00000000u; // 805A552C
  c->r[8]=0u+0x00000000u; // 805A5530
  c->r[9]=0u+0x00000000u; // 805A5534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A5538
  c->r[10]=0u+0x00000000u; // 805A553C
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A5540
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A5544
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A5548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A554C
  c->lr=0x805A5554u; f_8062E0DC(c); // 805A5550
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A5554
  if (crb(c,2)) { goto L_805A5588; } // 805A5558
  c->r[3]=0u+0x80720000u; // 805A555C
  cmps(c,0,(int32_t)c->r[31],0); // 805A5560
  c->r[3]=c->r[3]+0x00002580u; // 805A5564
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A5568
  if (crb(c,2)) { goto L_805A557C; } // 805A556C
  c->r[0]=R32(c->r[13]+0xFFFFABD0u); // 805A5570
  c->r[0]=sraw(c,c->r[0],16); // 805A5574
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A5578
L_805A557C:;
  c->r[3]=0u+0x80720000u; // 805A557C
  c->r[3]=c->r[3]+0x00002340u; // 805A5580
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A5584
L_805A5588:;
  c->r[6]=0u+0x80860000u; // 805A5588
  c->r[7]=0u+0x806C0000u; // 805A558C
  c->r[5]=0u+0x805A0000u; // 805A5590
  c->r[3]=0u+0x805A0000u; // 805A5594
  c->r[7]=c->r[7]+0xFFFFDB80u; // 805A5598
  c->r[4]=c->r[6]+0xFFFFDA80u; // 805A559C
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A55A0
  c->r[5]=c->r[5]+0x000054A0u; // 805A55A4
  c->r[3]=c->r[3]+0x000054D8u; // 805A55A8
  W32(c->r[6]+0xFFFFDA80u,c->r[7]); // 805A55AC
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A55B0
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A55B4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A55B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A55BC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A55C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A55C4
  c->lr=c->r[0]; // 805A55C8
  c->r[1]=c->r[10]|c->r[10]; // 805A55CC
  return; // 805A55D0
}

// fn_805A55D4
void f_805A55D4(Ctx* __restrict c) {
  trace_call(0x805A55D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A55D4
  c->r[0]=c->lr; // 805A55D8
  c->r[6]=0u+0x00000000u; // 805A55DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A55E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A55E4
  c->r[31]=c->r[3]|c->r[3]; // 805A55E8
  c->lr=0x805A55F0u; f_805A8CA0(c); // 805A55EC
  c->r[0]=c->r[2]+0x00002810u; // 805A55F0
  c->r[6]=0u+0x00000000u; // 805A55F4
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A55F8
  c->r[3]=0u+0x80720000u; // 805A55FC
  c->r[3]=c->r[3]+0x000023F0u; // 805A5600
  c->r[0]=0u+0x00000006u; // 805A5604
  W32(c->r[31]+0x00000000u,c->r[3]); // 805A5608
  c->r[3]=c->r[31]|c->r[31]; // 805A560C
  W32(c->r[31]+0x00000118u,c->r[6]); // 805A5610
  W16(c->r[31]+0x0000011Cu,c->r[6]); // 805A5614
  {uint32_t ea=c->r[31]+0x000000C0u; psq_store(c,0,ea,0,0);} // 805A5618
  {uint32_t ea=c->r[31]+0x000000C8u; psq_store(c,0,ea,0,0);} // 805A561C
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A5620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A5624
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A5628
  c->lr=c->r[0]; // 805A562C
  c->r[1]=c->r[1]+0x00000010u; // 805A5630
  return; // 805A5634
}

// fn_805A5638
void f_805A5638(Ctx* __restrict c) {
  trace_call(0x805A5638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5638
  c->r[0]=c->lr; // 805A563C
  cmps(c,0,(int32_t)c->r[3],0); // 805A5640
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A5644
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A5648
  c->r[31]=c->r[4]|c->r[4]; // 805A564C
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A5650
  c->r[30]=c->r[3]|c->r[3]; // 805A5654
  if (crb(c,2)) { goto L_805A5698; } // 805A5658
  c->r[0]=R32(c->r[3]+0x00000118u); // 805A565C
  c->r[4]=0u+0x80720000u; // 805A5660
  c->r[4]=c->r[4]+0x000023F0u; // 805A5664
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A5668
  cmps(c,0,(int32_t)c->r[0],0); // 805A566C
  if (crb(c,2)) { goto L_805A567C; } // 805A5670
  c->r[3]=c->r[0]|c->r[0]; // 805A5674
  c->lr=0x805A567Cu; f_8062D488(c); // 805A5678
L_805A567C:;
  cmps(c,0,(int32_t)c->r[31],0); // 805A567C
  if (!crb(c,1)) { goto L_805A5698; } // 805A5680
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A5684
  c->r[4]=c->r[30]|c->r[30]; // 805A5688
  c->r[5]=R16(c->r[30]+0x00000004u); // 805A568C
  c->r[6]=0u+0x0000002Fu; // 805A5690
  c->lr=0x805A5698u; f_8062C630(c); // 805A5694
L_805A5698:;
  c->r[3]=c->r[30]|c->r[30]; // 805A5698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A569C
  c->r[30]=R32(c->r[1]+0x00000008u); // 805A56A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A56A4
  c->lr=c->r[0]; // 805A56A8
  c->r[1]=c->r[1]+0x00000010u; // 805A56AC
  return; // 805A56B0
}

// fn_805A56B4
void f_805A56B4(Ctx* __restrict c) {
  trace_call(0x805A56B4u);
  return; // 805A56B4
}

// fn_805A56B8
void f_805A56B8(Ctx* __restrict c) {
  trace_call(0x805A56B8u);
  return; // 805A56B8
}

// fn_805A56BC
void f_805A56BC(Ctx* __restrict c) {
  trace_call(0x805A56BCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A56BC
  c->r[0]=c->r[2]+0x00002810u; // 805A56C0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A56C4
  c->r[12]=c->r[1]|c->r[1]; // 805A56C8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A56CC
  c->r[6]=c->r[4]+0x00000010u; // 805A56D0
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A56D4
  c->r[7]=c->r[4]+0x00000020u; // 805A56D8
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A56DC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A56E0
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A56E4
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A56E8
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A56EC
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A56F0
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A56F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A56F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A56FC
  c->r[1]=c->r[10]|c->r[10]; // 805A5700
  return; // 805A5704
}

// fn_805A5708
void f_805A5708(Ctx* __restrict c) {
  trace_call(0x805A5708u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5708
  c->r[0]=c->r[2]+0x00002810u; // 805A570C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5710
  c->r[12]=c->r[1]|c->r[1]; // 805A5714
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5718
  c->r[6]=c->r[4]+0x00000010u; // 805A571C
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A5720
  c->r[7]=c->r[4]+0x00000020u; // 805A5724
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A5728
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A572C
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5730
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5734
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A5738
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A573C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5740
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5744
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5748
  c->r[1]=c->r[10]|c->r[10]; // 805A574C
  return; // 805A5750
}

// fn_805A5754
void f_805A5754(Ctx* __restrict c) {
  trace_call(0x805A5754u);
  return; // 805A5754
}

// fn_805A5758
void f_805A5758(Ctx* __restrict c) {
  trace_call(0x805A5758u);
  return; // 805A5758
}

// fn_805A575C
void f_805A575C(Ctx* __restrict c) {
  trace_call(0x805A575Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A575C
  c->r[0]=c->r[2]+0x00002810u; // 805A5760
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5764
  c->r[12]=c->r[1]|c->r[1]; // 805A5768
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A576C
  c->r[6]=c->r[4]+0x00000010u; // 805A5770
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A5774
  c->r[7]=c->r[4]+0x00000020u; // 805A5778
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A577C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5780
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5784
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5788
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A578C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5790
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5794
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5798
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A579C
  c->r[1]=c->r[10]|c->r[10]; // 805A57A0
  return; // 805A57A4
}

// fn_805A57A8
void f_805A57A8(Ctx* __restrict c) {
  trace_call(0x805A57A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A57A8
  c->r[0]=c->r[2]+0x00002810u; // 805A57AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A57B0
  c->r[12]=c->r[1]|c->r[1]; // 805A57B4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A57B8
  c->r[6]=c->r[4]+0x00000010u; // 805A57BC
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A57C0
  c->r[7]=c->r[4]+0x00000020u; // 805A57C4
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A57C8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A57CC
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A57D0
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A57D4
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A57D8
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A57DC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A57E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A57E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A57E8
  c->r[1]=c->r[10]|c->r[10]; // 805A57EC
  return; // 805A57F0
}

// fn_805A57F4
void f_805A57F4(Ctx* __restrict c) {
  trace_call(0x805A57F4u);
  return; // 805A57F4
}

// fn_805A57F8
void f_805A57F8(Ctx* __restrict c) {
  trace_call(0x805A57F8u);
  return; // 805A57F8
}

// fn_805A57FC
void f_805A57FC(Ctx* __restrict c) {
  trace_call(0x805A57FCu);
  return; // 805A57FC
}

// fn_805A5800
void f_805A5800(Ctx* __restrict c) {
  trace_call(0x805A5800u);
  return; // 805A5800
}

// fn_805A5804
void f_805A5804(Ctx* __restrict c) {
  trace_call(0x805A5804u);
  return; // 805A5804
}

// fn_805A5808
void f_805A5808(Ctx* __restrict c) {
  trace_call(0x805A5808u);
  return; // 805A5808
}

// fn_805A580C
void f_805A580C(Ctx* __restrict c) {
  trace_call(0x805A580Cu);
  return; // 805A580C
}

// fn_805A5810
void f_805A5810(Ctx* __restrict c) {
  trace_call(0x805A5810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5810
  c->r[0]=c->lr; // 805A5814
  cmps(c,0,(int32_t)c->r[4],0); // 805A5818
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A581C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A5820
  c->r[31]=c->r[4]|c->r[4]; // 805A5824
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A5828
  c->r[30]=c->r[3]|c->r[3]; // 805A582C
  if (crb(c,2)) { goto L_805A583C; } // 805A5830
  c->r[3]=c->r[31]|c->r[31]; // 805A5834
  c->lr=0x805A583Cu; f_8062D410(c); // 805A5838
L_805A583C:;
  c->r[3]=R32(c->r[30]+0x00000118u); // 805A583C
  cmps(c,0,(int32_t)c->r[3],0); // 805A5840
  if (crb(c,2)) { goto L_805A584C; } // 805A5844
  c->lr=0x805A584Cu; f_8062D488(c); // 805A5848
L_805A584C:;
  W32(c->r[30]+0x00000118u,c->r[31]); // 805A584C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A5850
  c->r[30]=R32(c->r[1]+0x00000008u); // 805A5854
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A5858
  c->lr=c->r[0]; // 805A585C
  c->r[1]=c->r[1]+0x00000010u; // 805A5860
  return; // 805A5864
}

// fn_805A5868
void f_805A5868(Ctx* __restrict c) {
  trace_call(0x805A5868u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5868
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A586C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A5870
  c->r[12]=c->r[1]|c->r[1]; // 805A5874
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5878
  c->r[9]=c->r[3]+0x000000E0u; // 805A587C
  c->r[11]=c->r[3]+0x00000060u; // 805A5880
  c->r[10]=c->r[3]+0x000000D0u; // 805A5884
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5888
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A588C
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5890
  {uint32_t ea=0u+c->r[4]; psq_load(c,2,ea,0,0);} // 805A5894
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5898
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,1,ea,0,0);} // 805A589C
  {uint32_t ea=0u+c->r[5]; psq_load(c,5,ea,0,0);} // 805A58A0
  c->r[3]=c->r[1]+0x00000020u; // 805A58A4
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A58A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A58AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A58B0
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A58B4
  {uint32_t ea=0u+c->r[10]; psq_load(c,9,ea,0,0);} // 805A58B8
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A58BC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A58C0
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 805A58C4
  {uint32_t ea=0u+c->r[9]; psq_load(c,7,ea,0,0);} // 805A58C8
  {double t0=S(c->f[1]*c->f[5]), t1=S(c->ps1[1]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805A58CC
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A58D0
  {double t0=S(std::fma(c->f[5],c->f[3],-c->f[2])), t1=S(std::fma(c->ps1[5],c->ps1[3],-c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 805A58D4
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,8,ea,0,0);} // 805A58D8
  {double t0=S(c->f[9]*c->f[5]), t1=S(c->ps1[9]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 805A58DC
  {double t0=S(std::fma(c->f[5],c->f[4],-c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[4],-c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 805A58E0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,0,0);} // 805A58E4
  {uint32_t ea=c->r[2]+0x00002818u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A58E8
  {double t0=S(c->ps1[2]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A58EC
  {double t0=S(std::fma(c->f[8],c->f[4],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[9])); c->f[4]=t0; c->ps1[4]=t1;} // 805A58F0
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 805A58F4
  {double t0=S(c->f[4]+c->ps1[9]), t1=S(c->ps1[9]); c->f[4]=t0; c->ps1[4]=t1;} // 805A58F8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A58FC
  {double t0=S(c->ps1[3]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5900
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A5904
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5908
  {double t0=S(std::fma(c->f[2],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[6],c->ps1[1])); c->f[7]=t0; c->ps1[7]=t1;} // 805A590C
  {double t0=S(c->f[7]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5910
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 805A5914
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 805A5918
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 805A591C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5920
  c->r[1]=c->r[10]|c->r[10]; // 805A5924
  return; // 805A5928
}

// fn_805A592C
void f_805A592C(Ctx* __restrict c) {
  trace_call(0x805A592Cu);
  c->r[6]=0u+0x80720000u; // 805A592C
  {uint32_t ea=c->r[6]+0x000023E0u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A5930
  c->r[7]=0u+0x80860000u; // 805A5934
  {uint32_t ea=c->r[7]+0xFFFFDA90u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A5938
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A593C
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A5940
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A5944
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A5948
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A594C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A5950
  return; // 805A5954
}

// fn_805A5958
void f_805A5958(Ctx* __restrict c) {
  trace_call(0x805A5958u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A5958
  if (crb(c,2)) return; // 805A595C
  c->r[5]=0u+0x80720000u; // 805A5960
  cmps(c,0,(int32_t)c->r[4],0); // 805A5964
  c->r[5]=c->r[5]+0x00002580u; // 805A5968
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A596C
  if (crb(c,2)) { goto L_805A5980; } // 805A5970
  c->r[0]=R32(c->r[13]+0xFFFFABD8u); // 805A5974
  c->r[0]=sraw(c,c->r[0],16); // 805A5978
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A597C
L_805A5980:;
  c->r[4]=0u+0x80720000u; // 805A5980
  c->r[4]=c->r[4]+0x000023F0u; // 805A5984
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A5988
  return; // 805A598C
}

// fn_805A5990
void f_805A5990(Ctx* __restrict c) {
  trace_call(0x805A5990u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A5990
  c->r[4]=0u+0xFFFFFFFFu; // 805A5994
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A5998
  c->ctr=c->r[12]; // 805A599C
  if (true) { dispatch(c,c->ctr); return; } // 805A59A0
}

// fn_805A59A4
void f_805A59A4(Ctx* __restrict c) {
  trace_call(0x805A59A4u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A59A4
  if (crb(c,2)) return; // 805A59A8
  c->r[5]=0u+0x80720000u; // 805A59AC
  cmps(c,0,(int32_t)c->r[4],0); // 805A59B0
  c->r[5]=c->r[5]+0x00002580u; // 805A59B4
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A59B8
  if (crb(c,2)) { goto L_805A59CC; } // 805A59BC
  c->r[0]=R32(c->r[13]+0xFFFFABD8u); // 805A59C0
  c->r[0]=sraw(c,c->r[0],16); // 805A59C4
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A59C8
L_805A59CC:;
  c->r[4]=0u+0x80720000u; // 805A59CC
  c->r[4]=c->r[4]+0x00001FF0u; // 805A59D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A59D4
  return; // 805A59D8
}

// fn_805A59DC
void f_805A59DC(Ctx* __restrict c) {
  trace_call(0x805A59DCu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A59DC
  c->r[4]=0u+0xFFFFFFFFu; // 805A59E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A59E4
  c->ctr=c->r[12]; // 805A59E8
  if (true) { dispatch(c,c->ctr); return; } // 805A59EC
}

// fn_805A59F0
void f_805A59F0(Ctx* __restrict c) {
  trace_call(0x805A59F0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A59F0
  c->r[12]=c->r[1]|c->r[1]; // 805A59F4
  c->r[11]=addc(c,~c->r[11],0xFFFFFD90u,1); // 805A59F8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A59FC
  c->r[0]=c->lr; // 805A5A00
  c->r[4]=0u+0x806C0000u; // 805A5A04
  c->r[5]=0u+0x80860000u; // 805A5A08
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A5A0C
  c->r[4]=c->r[4]+0xFFFFDB98u; // 805A5A10
  c->r[5]=c->r[5]+0xFFFFDC30u; // 805A5A14
  c->r[6]=0u+0x00000120u; // 805A5A18
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A5A1C
  c->r[31]=0u+0x80860000u; // 805A5A20
  c->r[31]=c->r[31]+0xFFFFDAA0u; // 805A5A24
  c->r[7]=0u+0x00000000u; // 805A5A28
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A5A2C
  c->r[30]=0u+0x00000000u; // 805A5A30
  c->r[3]=c->r[31]+0x00000000u; // 805A5A34
  c->r[8]=0u+0x00000000u; // 805A5A38
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A5A3C
  c->r[9]=0u+0x00000000u; // 805A5A40
  c->r[10]=0u+0x00000000u; // 805A5A44
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 805A5A48
  W32(c->r[1]+0x00000010u,c->r[30]); // 805A5A4C
  W32(c->r[1]+0x00000014u,c->r[30]); // 805A5A50
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A5A54
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805A5A58
  c->lr=0x805A5A60u; f_8062E0DC(c); // 805A5A5C
  c->r[0]=addc(c,c->r[1],0x00000140u,0); cr0(c,c->r[0]); // 805A5A60
  if (crb(c,2)) { goto L_805A5A94; } // 805A5A64
  c->r[3]=0u+0x80720000u; // 805A5A68
  cmps(c,0,(int32_t)c->r[30],0); // 805A5A6C
  c->r[3]=c->r[3]+0x00002580u; // 805A5A70
  W32(c->r[1]+0x00000140u,c->r[3]); // 805A5A74
  if (crb(c,2)) { goto L_805A5A88; } // 805A5A78
  c->r[0]=R32(c->r[13]+0xFFFFABD8u); // 805A5A7C
  c->r[0]=sraw(c,c->r[0],16); // 805A5A80
  W16(c->r[1]+0x0000025Eu,c->r[0]); // 805A5A84
L_805A5A88:;
  c->r[3]=0u+0x80720000u; // 805A5A88
  c->r[3]=c->r[3]+0x000023F0u; // 805A5A8C
  W32(c->r[1]+0x00000140u,c->r[3]); // 805A5A90
L_805A5A94:;
  c->r[4]=0u+0x806C0000u; // 805A5A94
  c->r[5]=0u+0x805A0000u; // 805A5A98
  c->r[8]=0u+0x805A0000u; // 805A5A9C
  c->r[11]=c->r[31]+0x00000030u; // 805A5AA0
  c->r[0]=R32(c->r[1]+0x00000140u); // 805A5AA4
  c->r[4]=c->r[4]+0xFFFFDB98u; // 805A5AA8
  c->r[5]=c->r[5]+0x00005958u; // 805A5AAC
  c->r[8]=c->r[8]+0x00005990u; // 805A5AB0
  W32(c->r[31]+0x00000030u,c->r[4]); // 805A5AB4
  c->r[30]=0u+0x00000000u; // 805A5AB8
  c->r[3]=c->r[31]+0x00000040u; // 805A5ABC
  c->r[4]=c->r[4]+0x00000018u; // 805A5AC0
  W32(c->r[11]+0x00000004u,c->r[5]); // 805A5AC4
  c->r[5]=c->r[31]+0x00000000u; // 805A5AC8
  c->r[6]=0u+0x00000120u; // 805A5ACC
  c->r[7]=0u+0x00000000u; // 805A5AD0
  W32(c->r[11]+0x00000008u,c->r[8]); // 805A5AD4
  c->r[8]=0u+0x00000000u; // 805A5AD8
  c->r[9]=0u+0x00000000u; // 805A5ADC
  c->r[10]=0u+0x00000000u; // 805A5AE0
  W32(c->r[11]+0x0000000Cu,c->r[0]); // 805A5AE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A5AE8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 805A5AEC
  W32(c->r[1]+0x00000010u,c->r[30]); // 805A5AF0
  W32(c->r[1]+0x00000014u,c->r[30]); // 805A5AF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A5AF8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805A5AFC
  c->lr=0x805A5B04u; f_8062E0DC(c); // 805A5B00
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A5B04
  if (crb(c,2)) { goto L_805A5B38; } // 805A5B08
  c->r[3]=0u+0x80720000u; // 805A5B0C
  cmps(c,0,(int32_t)c->r[30],0); // 805A5B10
  c->r[3]=c->r[3]+0x00002580u; // 805A5B14
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A5B18
  if (crb(c,2)) { goto L_805A5B2C; } // 805A5B1C
  c->r[0]=R32(c->r[13]+0xFFFFABD8u); // 805A5B20
  c->r[0]=sraw(c,c->r[0],16); // 805A5B24
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A5B28
L_805A5B2C:;
  c->r[3]=0u+0x80720000u; // 805A5B2C
  c->r[3]=c->r[3]+0x00001FF0u; // 805A5B30
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A5B34
L_805A5B38:;
  c->r[4]=0u+0x806C0000u; // 805A5B38
  c->r[5]=0u+0x805A0000u; // 805A5B3C
  c->r[4]=c->r[4]+0xFFFFDB98u; // 805A5B40
  c->r[3]=0u+0x805A0000u; // 805A5B44
  c->r[6]=c->r[4]+0x00000018u; // 805A5B48
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A5B4C
  c->r[4]=c->r[31]+0x00000070u; // 805A5B50
  c->r[5]=c->r[5]+0x000059A4u; // 805A5B54
  c->r[3]=c->r[3]+0x000059DCu; // 805A5B58
  W32(c->r[31]+0x00000070u,c->r[6]); // 805A5B5C
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A5B60
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A5B64
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A5B68
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5B6C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A5B70
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A5B74
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A5B78
  c->lr=c->r[0]; // 805A5B7C
  c->r[1]=c->r[10]|c->r[10]; // 805A5B80
  return; // 805A5B84
}

// fn_805A5B88
void f_805A5B88(Ctx* __restrict c) {
  trace_call(0x805A5B88u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5B88
  c->r[12]=c->r[1]|c->r[1]; // 805A5B8C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5B90
  {uint32_t ea=c->r[2]+0x00002820u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A5B94
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5B98
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5B9C
  fcmp(c,0,c->f[2],c->f[0]); // 805A5BA0
  if (!crb(c,1)) { goto L_805A5BAC; } // 805A5BA4
  goto L_805A5BB0; // 805A5BA8
L_805A5BAC:;
  c->f[2]=c->f[0]; // 805A5BAC
L_805A5BB0:;
  {uint32_t ea=c->r[2]+0x00002824u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5BB0
  c->r[0]=c->r[2]+0x00002828u; // 805A5BB4
  {uint32_t ea=0u+c->r[0]; psq_load(c,1,ea,0,0);} // 805A5BB8
  c->r[7]=c->r[4]+0x00000020u; // 805A5BBC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 805A5BC0
  {uint32_t ea=0u+c->r[4]; psq_store(c,1,ea,0,0);} // 805A5BC4
  c->r[6]=c->r[4]+0x00000010u; // 805A5BC8
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5BCC
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5BD0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5BD4
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5BD8
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A5BDC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 805A5BE0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 805A5BE4
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A5BE8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5BEC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,0,0);} // 805A5BF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5BF4
  c->r[1]=c->r[10]|c->r[10]; // 805A5BF8
  return; // 805A5BFC
}

// fn_805A5C00
void f_805A5C00(Ctx* __restrict c) {
  trace_call(0x805A5C00u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5C00
  c->r[12]=c->r[1]|c->r[1]; // 805A5C04
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5C08
  {uint32_t ea=c->r[2]+0x00002820u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A5C0C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5C10
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5C14
  fcmp(c,0,c->f[2],c->f[0]); // 805A5C18
  if (!crb(c,1)) { goto L_805A5C24; } // 805A5C1C
  goto L_805A5C28; // 805A5C20
L_805A5C24:;
  c->f[2]=c->f[0]; // 805A5C24
L_805A5C28:;
  {uint32_t ea=c->r[2]+0x00002824u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5C28
  c->r[0]=c->r[2]+0x00002828u; // 805A5C2C
  {uint32_t ea=0u+c->r[0]; psq_load(c,1,ea,0,0);} // 805A5C30
  c->r[7]=c->r[4]+0x00000020u; // 805A5C34
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 805A5C38
  {uint32_t ea=0u+c->r[4]; psq_store(c,1,ea,0,0);} // 805A5C3C
  c->r[6]=c->r[4]+0x00000010u; // 805A5C40
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5C44
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5C48
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5C4C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5C50
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A5C54
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 805A5C58
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 805A5C5C
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 805A5C60
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5C64
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,0,0);} // 805A5C68
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5C6C
  c->r[1]=c->r[10]|c->r[10]; // 805A5C70
  return; // 805A5C74
}

// fn_805A5C78
void f_805A5C78(Ctx* __restrict c) {
  trace_call(0x805A5C78u);
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5C78
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A5C7C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A5C80
  fcmp(c,0,c->f[2],c->f[0]); // 805A5C84
  if (!crb(c,1)) { goto L_805A5C90; } // 805A5C88
  goto L_805A5C94; // 805A5C8C
L_805A5C90:;
  c->f[2]=c->f[0]; // 805A5C90
L_805A5C94:;
  fcmp(c,0,c->f[2],c->f[1]); // 805A5C94
  if (!crb(c,1)) { goto L_805A5CA0; } // 805A5C98
  goto L_805A5CA4; // 805A5C9C
L_805A5CA0:;
  c->f[2]=c->f[1]; // 805A5CA0
L_805A5CA4:;
  {uint32_t ea=c->r[2]+0x00002830u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5CA4
  fcmp(c,0,c->f[2],c->f[0]); // 805A5CA8
  if (!crb(c,1)) { goto L_805A5CB8; } // 805A5CAC
  {uint32_t ea=c->r[2]+0x00002824u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5CB0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 805A5CB4
L_805A5CB8:;
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 805A5CB8
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 805A5CBC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 805A5CC0
  return; // 805A5CC4
}

// fn_805A5CC8
void f_805A5CC8(Ctx* __restrict c) {
  trace_call(0x805A5CC8u);
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A5CC8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A5CCC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A5CD0
  fcmp(c,0,c->f[2],c->f[0]); // 805A5CD4
  if (!crb(c,0)) { goto L_805A5CE0; } // 805A5CD8
  goto L_805A5CE4; // 805A5CDC
L_805A5CE0:;
  c->f[2]=c->f[0]; // 805A5CE0
L_805A5CE4:;
  fcmp(c,0,c->f[2],c->f[1]); // 805A5CE4
  if (!crb(c,0)) { goto L_805A5CF0; } // 805A5CE8
  goto L_805A5CF4; // 805A5CEC
L_805A5CF0:;
  c->f[2]=c->f[1]; // 805A5CF0
L_805A5CF4:;
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 805A5CF4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[2]);} // 805A5CF8
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 805A5CFC
  return; // 805A5D00
}

// fn_805A5D04
void f_805A5D04(Ctx* __restrict c) {
  trace_call(0x805A5D04u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5D04
  c->r[0]=c->r[2]+0x00002828u; // 805A5D08
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5D0C
  c->r[12]=c->r[1]|c->r[1]; // 805A5D10
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5D14
  c->r[7]=c->r[4]+0x00000020u; // 805A5D18
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A5D1C
  c->r[6]=c->r[4]+0x00000010u; // 805A5D20
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A5D24
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5D28
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A5D2C
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5D30
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D34
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D38
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D3C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A5D40
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 805A5D44
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A5D48
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 805A5D4C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5D50
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5D54
  c->r[1]=c->r[10]|c->r[10]; // 805A5D58
  return; // 805A5D5C
}

// fn_805A5D60
void f_805A5D60(Ctx* __restrict c) {
  trace_call(0x805A5D60u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5D60
  c->r[0]=c->r[2]+0x00002828u; // 805A5D64
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5D68
  c->r[12]=c->r[1]|c->r[1]; // 805A5D6C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5D70
  c->r[7]=c->r[4]+0x00000020u; // 805A5D74
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A5D78
  c->r[6]=c->r[4]+0x00000010u; // 805A5D7C
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A5D80
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5D84
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A5D88
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5D8C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D90
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D94
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5D98
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A5D9C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 805A5DA0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 805A5DA4
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 805A5DA8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A5DAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5DB0
  c->r[1]=c->r[10]|c->r[10]; // 805A5DB4
  return; // 805A5DB8
}

// fn_805A5DBC
void f_805A5DBC(Ctx* __restrict c) {
  trace_call(0x805A5DBCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5DBC
  {uint32_t ea=0u+c->r[4]; psq_load(c,4,ea,0,0);} // 805A5DC0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A5DC4
  c->r[12]=c->r[1]|c->r[1]; // 805A5DC8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5DCC
  c->r[10]=c->r[3]+0x00000060u; // 805A5DD0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 805A5DD4
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805A5DD8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5DDC
  c->r[7]=c->r[3]+0x000000D0u; // 805A5DE0
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5DE4
  {double t0=S(c->f[9]), t1=S(c->f[9]); c->f[9]=t0; c->ps1[9]=t1;} // 805A5DE8
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 805A5DEC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5DF0
  {uint32_t ea=0u+c->r[5]; psq_load(c,1,ea,0,0);} // 805A5DF4
  {double t0=S(c->f[5]), t1=S(c->f[5]); c->f[5]=t0; c->ps1[5]=t1;} // 805A5DF8
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,2,ea,0,0);} // 805A5DFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A5E00
  c->r[9]=c->r[3]+0x000000C0u; // 805A5E04
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A5E08
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A5E0C
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A5E10
  c->r[8]=c->r[3]+0x000000E0u; // 805A5E14
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A5E18
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,2,ea,0,0);} // 805A5E1C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5E20
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5E24
  c->r[5]=c->r[1]+0x00000010u; // 805A5E28
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[7]=t0; c->ps1[7]=t1;} // 805A5E2C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 805A5E30
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A5E34
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A5E38
  {double t0=S(std::fma(c->f[0],c->f[9],-c->f[7])), t1=S(std::fma(c->ps1[0],c->ps1[9],-c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 805A5E3C
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,11,ea,0,0);} // 805A5E40
  {double t0=S(std::fma(c->f[0],c->f[8],-c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[8],-c->ps1[6])); c->f[4]=t0; c->ps1[4]=t1;} // 805A5E44
  {double t0=S(std::fma(c->f[3],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[5],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A5E48
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,10,ea,0,0);} // 805A5E4C
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,9,ea,0,0);} // 805A5E50
  {double t0=S(c->ps1[4]), t1=S(c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805A5E54
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A5E58
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5E5C
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 805A5E60
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,0,0);} // 805A5E64
  {double t0=S(c->ps1[7]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5E68
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[6])); c->f[1]=t0; c->ps1[1]=t1;} // 805A5E6C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A5E70
  {double t0=S(std::fma(c->f[11],c->f[0],c->f[10])), t1=S(std::fma(c->ps1[11],c->ps1[0],c->ps1[10])); c->f[0]=t0; c->ps1[0]=t1;} // 805A5E74
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,1,ea,0,0);} // 805A5E78
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 805A5E7C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5E80
  c->r[1]=c->r[10]|c->r[10]; // 805A5E84
  return; // 805A5E88
}

// fn_805A5E8C
void f_805A5E8C(Ctx* __restrict c) {
  trace_call(0x805A5E8Cu);
  c->r[5]=c->r[3]+0x000000C0u; // 805A5E8C
  {uint32_t ea=c->r[3]+0x000000C0u; psq_load(c,2,ea,0,0);} // 805A5E90
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A5E94
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,0,ea,0,0); c->r[3]=ea;} // 805A5E98
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A5E9C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A5EA0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A5EA4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5EA8
  {uint32_t ea=0u+c->r[3]; psq_store(c,0,ea,0,0);} // 805A5EAC
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A5EB0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5EB4
  return; // 805A5EB8
}

// fn_805A5EBC
void f_805A5EBC(Ctx* __restrict c) {
  trace_call(0x805A5EBCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5EBC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A5EC0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5EC4
  c->r[12]=c->r[1]|c->r[1]; // 805A5EC8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5ECC
  c->r[5]=c->r[3]+0x000000D0u; // 805A5ED0
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A5ED4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A5ED8
  c->r[4]=c->r[1]+0x00000010u; // 805A5EDC
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 805A5EE0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5EE4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5EE8
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,4,ea,0,0);} // 805A5EEC
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805A5EF0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A5EF4
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5EF8
  {double t0=S(std::fma(c->f[1],c->f[5],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[5],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 805A5EFC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5F00
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 805A5F04
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A5F08
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5F0C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5F10
  c->r[1]=c->r[10]|c->r[10]; // 805A5F14
  return; // 805A5F18
}

// fn_805A5F1C
void f_805A5F1C(Ctx* __restrict c) {
  trace_call(0x805A5F1Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5F1C
  c->r[12]=c->r[1]|c->r[1]; // 805A5F20
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5F24
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5F28
  c->r[0]=c->lr; // 805A5F2C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A5F30
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A5F34
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A5F38
  c->r[6]=c->r[1]+0x00000010u; // 805A5F3C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A5F40
  c->r[4]=c->r[6]|c->r[6]; // 805A5F44
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5F48
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5F4C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5F50
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5F54
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A5F58
  c->r[12]=R32(c->r[12]+0x00000058u); // 805A5F5C
  c->ctr=c->r[12]; // 805A5F60
  if (true) { c->lr=0x805A5F68u; dispatch(c,c->ctr); } // 805A5F64
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5F68
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A5F6C
  c->lr=c->r[0]; // 805A5F70
  c->r[1]=c->r[10]|c->r[10]; // 805A5F74
  return; // 805A5F78
}

// fn_805A5F7C
void f_805A5F7C(Ctx* __restrict c) {
  trace_call(0x805A5F7Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5F7C
  c->r[12]=c->r[1]|c->r[1]; // 805A5F80
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A5F84
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5F88
  c->r[0]=c->lr; // 805A5F8C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805A5F90
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A5F94
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A5F98
  c->r[5]=c->r[1]+0x00000010u; // 805A5F9C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A5FA0
  c->r[4]=c->r[5]|c->r[5]; // 805A5FA4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A5FA8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A5FAC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A5FB0
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A5FB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A5FB8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 805A5FBC
  c->ctr=c->r[12]; // 805A5FC0
  if (true) { c->lr=0x805A5FC8u; dispatch(c,c->ctr); } // 805A5FC4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A5FC8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A5FCC
  c->lr=c->r[0]; // 805A5FD0
  c->r[1]=c->r[10]|c->r[10]; // 805A5FD4
  return; // 805A5FD8
}

// fn_805A5FDC
void f_805A5FDC(Ctx* __restrict c) {
  trace_call(0x805A5FDCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A5FDC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A5FE0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A5FE4
  c->r[12]=c->r[1]|c->r[1]; // 805A5FE8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A5FEC
  c->r[11]=c->r[3]+0x00000060u; // 805A5FF0
  c->r[9]=c->r[3]+0x000000E0u; // 805A5FF4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A5FF8
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A5FFC
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A6000
  {uint32_t ea=0u+c->r[4]; psq_load(c,2,ea,0,0);} // 805A6004
  c->r[10]=c->r[3]+0x000000D0u; // 805A6008
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A600C
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,1,ea,0,0);} // 805A6010
  {uint32_t ea=0u+c->r[5]; psq_load(c,5,ea,0,0);} // 805A6014
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A6018
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A601C
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,8,ea,0,0);} // 805A6020
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A6024
  c->r[4]=c->r[1]+0x00000010u; // 805A6028
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805A602C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A6030
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A6034
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,7,ea,0,0);} // 805A6038
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 805A603C
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A6040
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->f[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6044
  {double t0=S(std::fma(c->f[5],c->f[4],-c->f[2])), t1=S(std::fma(c->ps1[5],c->ps1[4],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A6048
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,4,ea,0,0);} // 805A604C
  {double t0=S(c->f[8]*c->f[5]), t1=S(c->ps1[8]*c->ps1[5]); c->f[8]=t0; c->ps1[8]=t1;} // 805A6050
  {double t0=S(std::fma(c->f[5],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[3],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6054
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A6058
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[8])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[8])); c->f[3]=t0; c->ps1[3]=t1;} // 805A605C
  {double t0=S(c->ps1[1]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6060
  {double t0=S(c->f[3]+c->ps1[8]), t1=S(c->ps1[8]); c->f[3]=t0; c->ps1[3]=t1;} // 805A6064
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 805A6068
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A606C
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6070
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A6074
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805A6078
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 805A607C
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[6],c->ps1[2])); c->f[7]=t0; c->ps1[7]=t1;} // 805A6080
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6084
  {double t0=S(c->f[7]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6088
  {double t0=S(c->f[1]+c->ps1[4]), t1=S(c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A608C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 805A6090
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 805A6094
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A6098
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A609C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 805A60A0
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 805A60A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A60A8
  c->r[1]=c->r[10]|c->r[10]; // 805A60AC
  return; // 805A60B0
}

// fn_805A60B4
void f_805A60B4(Ctx* __restrict c) {
  trace_call(0x805A60B4u);
  c->r[6]=0u+0x80720000u; // 805A60B4
  {uint32_t ea=c->r[6]+0x00002470u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A60B8
  c->r[7]=0u+0x80860000u; // 805A60BC
  {uint32_t ea=c->r[7]+0xFFFFDB20u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A60C0
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A60C4
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A60C8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A60CC
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A60D0
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A60D4
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A60D8
  return; // 805A60DC
}

// fn_805A60E0
void f_805A60E0(Ctx* __restrict c) {
  trace_call(0x805A60E0u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A60E0
  if (crb(c,2)) return; // 805A60E4
  c->r[5]=0u+0x80720000u; // 805A60E8
  cmps(c,0,(int32_t)c->r[4],0); // 805A60EC
  c->r[5]=c->r[5]+0x00002580u; // 805A60F0
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A60F4
  if (crb(c,2)) { goto L_805A6108; } // 805A60F8
  c->r[0]=R32(c->r[13]+0xFFFFABE0u); // 805A60FC
  c->r[0]=sraw(c,c->r[0],16); // 805A6100
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A6104
L_805A6108:;
  c->r[4]=0u+0x80720000u; // 805A6108
  c->r[4]=c->r[4]+0x00002480u; // 805A610C
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A6110
  return; // 805A6114
}

// fn_805A6118
void f_805A6118(Ctx* __restrict c) {
  trace_call(0x805A6118u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A6118
  c->r[4]=0u+0xFFFFFFFFu; // 805A611C
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A6120
  c->ctr=c->r[12]; // 805A6124
  if (true) { dispatch(c,c->ctr); return; } // 805A6128
}

// fn_805A612C
void f_805A612C(Ctx* __restrict c) {
  trace_call(0x805A612Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A612C
  c->r[12]=c->r[1]|c->r[1]; // 805A6130
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A6134
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6138
  c->r[0]=c->lr; // 805A613C
  c->r[3]=0u+0x80860000u; // 805A6140
  c->r[4]=0u+0x806C0000u; // 805A6144
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A6148
  c->r[5]=0u+0x80860000u; // 805A614C
  c->r[3]=c->r[3]+0xFFFFDB30u; // 805A6150
  c->r[4]=c->r[4]+0xFFFFDBC8u; // 805A6154
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A6158
  c->r[31]=0u+0x00000000u; // 805A615C
  c->r[5]=c->r[5]+0xFFFFDC30u; // 805A6160
  c->r[6]=0u+0x00000120u; // 805A6164
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A6168
  c->r[7]=0u+0x00000000u; // 805A616C
  c->r[8]=0u+0x00000000u; // 805A6170
  c->r[9]=0u+0x00000000u; // 805A6174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A6178
  c->r[10]=0u+0x00000000u; // 805A617C
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A6180
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A6184
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A6188
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A618C
  c->lr=0x805A6194u; f_8062E0DC(c); // 805A6190
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A6194
  if (crb(c,2)) { goto L_805A61C8; } // 805A6198
  c->r[3]=0u+0x80720000u; // 805A619C
  cmps(c,0,(int32_t)c->r[31],0); // 805A61A0
  c->r[3]=c->r[3]+0x00002580u; // 805A61A4
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A61A8
  if (crb(c,2)) { goto L_805A61BC; } // 805A61AC
  c->r[0]=R32(c->r[13]+0xFFFFABE0u); // 805A61B0
  c->r[0]=sraw(c,c->r[0],16); // 805A61B4
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A61B8
L_805A61BC:;
  c->r[3]=0u+0x80720000u; // 805A61BC
  c->r[3]=c->r[3]+0x00002480u; // 805A61C0
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A61C4
L_805A61C8:;
  c->r[6]=0u+0x80860000u; // 805A61C8
  c->r[7]=0u+0x806C0000u; // 805A61CC
  c->r[5]=0u+0x805A0000u; // 805A61D0
  c->r[3]=0u+0x805A0000u; // 805A61D4
  c->r[7]=c->r[7]+0xFFFFDBC8u; // 805A61D8
  c->r[4]=c->r[6]+0xFFFFDB60u; // 805A61DC
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A61E0
  c->r[5]=c->r[5]+0x000060E0u; // 805A61E4
  c->r[3]=c->r[3]+0x00006118u; // 805A61E8
  W32(c->r[6]+0xFFFFDB60u,c->r[7]); // 805A61EC
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A61F0
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A61F4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A61F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A61FC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A6200
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A6204
  c->lr=c->r[0]; // 805A6208
  c->r[1]=c->r[10]|c->r[10]; // 805A620C
  return; // 805A6210
}

// fn_805A6214
void f_805A6214(Ctx* __restrict c) {
  trace_call(0x805A6214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6214
  c->r[0]=c->lr; // 805A6218
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A621C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A6220
  c->r[31]=c->r[3]|c->r[3]; // 805A6224
  c->lr=0x805A622Cu; f_805A41DC(c); // 805A6228
  c->r[3]=0u+0x80720000u; // 805A622C
  c->r[0]=0u+0x00000005u; // 805A6230
  c->r[3]=c->r[3]+0x00001E50u; // 805A6234
  W32(c->r[31]+0x00000000u,c->r[3]); // 805A6238
  c->r[3]=c->r[31]|c->r[31]; // 805A623C
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A6240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A6244
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A6248
  c->lr=c->r[0]; // 805A624C
  c->r[1]=c->r[1]+0x00000010u; // 805A6250
  return; // 805A6254
}

// fn_805A6258
void f_805A6258(Ctx* __restrict c) {
  trace_call(0x805A6258u);
  c->r[6]=0u+0x80720000u; // 805A6258
  {uint32_t ea=c->r[6]+0x000024F0u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A625C
  c->r[7]=0u+0x80860000u; // 805A6260
  {uint32_t ea=c->r[7]+0xFFFFDB70u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A6264
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A6268
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A626C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A6270
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A6274
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A6278
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A627C
  return; // 805A6280
}

// fn_805A6284
void f_805A6284(Ctx* __restrict c) {
  trace_call(0x805A6284u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A6284
  if (crb(c,2)) return; // 805A6288
  c->r[5]=0u+0x80720000u; // 805A628C
  cmps(c,0,(int32_t)c->r[4],0); // 805A6290
  c->r[5]=c->r[5]+0x00002580u; // 805A6294
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A6298
  if (crb(c,2)) { goto L_805A62AC; } // 805A629C
  c->r[0]=R32(c->r[13]+0xFFFFABE8u); // 805A62A0
  c->r[0]=sraw(c,c->r[0],16); // 805A62A4
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A62A8
L_805A62AC:;
  c->r[4]=0u+0x80720000u; // 805A62AC
  c->r[4]=c->r[4]+0x00001E50u; // 805A62B0
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A62B4
  return; // 805A62B8
}

// fn_805A62BC
void f_805A62BC(Ctx* __restrict c) {
  trace_call(0x805A62BCu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A62BC
  c->r[4]=0u+0xFFFFFFFFu; // 805A62C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A62C4
  c->ctr=c->r[12]; // 805A62C8
  if (true) { dispatch(c,c->ctr); return; } // 805A62CC
}

// fn_805A62D0
void f_805A62D0(Ctx* __restrict c) {
  trace_call(0x805A62D0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A62D0
  c->r[12]=c->r[1]|c->r[1]; // 805A62D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A62D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A62DC
  c->r[0]=c->lr; // 805A62E0
  c->r[3]=0u+0x80860000u; // 805A62E4
  c->r[4]=0u+0x806C0000u; // 805A62E8
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A62EC
  c->r[5]=0u+0x80860000u; // 805A62F0
  c->r[3]=c->r[3]+0xFFFFDB80u; // 805A62F4
  c->r[4]=c->r[4]+0xFFFFDBD8u; // 805A62F8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A62FC
  c->r[31]=0u+0x00000000u; // 805A6300
  c->r[5]=c->r[5]+0xFFFFD9C0u; // 805A6304
  c->r[6]=0u+0x00000120u; // 805A6308
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A630C
  c->r[7]=0u+0x00000000u; // 805A6310
  c->r[8]=0u+0x00000000u; // 805A6314
  c->r[9]=0u+0x00000000u; // 805A6318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A631C
  c->r[10]=0u+0x00000000u; // 805A6320
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A6324
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A6328
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A632C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A6330
  c->lr=0x805A6338u; f_8062E0DC(c); // 805A6334
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A6338
  if (crb(c,2)) { goto L_805A636C; } // 805A633C
  c->r[3]=0u+0x80720000u; // 805A6340
  cmps(c,0,(int32_t)c->r[31],0); // 805A6344
  c->r[3]=c->r[3]+0x00002580u; // 805A6348
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A634C
  if (crb(c,2)) { goto L_805A6360; } // 805A6350
  c->r[0]=R32(c->r[13]+0xFFFFABE8u); // 805A6354
  c->r[0]=sraw(c,c->r[0],16); // 805A6358
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A635C
L_805A6360:;
  c->r[3]=0u+0x80720000u; // 805A6360
  c->r[3]=c->r[3]+0x00001E50u; // 805A6364
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A6368
L_805A636C:;
  c->r[6]=0u+0x80860000u; // 805A636C
  c->r[7]=0u+0x806C0000u; // 805A6370
  c->r[5]=0u+0x805A0000u; // 805A6374
  c->r[3]=0u+0x805A0000u; // 805A6378
  c->r[7]=c->r[7]+0xFFFFDBD8u; // 805A637C
  c->r[4]=c->r[6]+0xFFFFDBB0u; // 805A6380
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A6384
  c->r[5]=c->r[5]+0x00006284u; // 805A6388
  c->r[3]=c->r[3]+0x000062BCu; // 805A638C
  W32(c->r[6]+0xFFFFDBB0u,c->r[7]); // 805A6390
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A6394
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A6398
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A639C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A63A0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A63A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A63A8
  c->lr=c->r[0]; // 805A63AC
  c->r[1]=c->r[10]|c->r[10]; // 805A63B0
  return; // 805A63B4
}

// fn_805A63B8
void f_805A63B8(Ctx* __restrict c) {
  trace_call(0x805A63B8u);
  cmps(c,0,(int32_t)c->r[3],0); // 805A63B8
  if (crb(c,2)) return; // 805A63BC
  c->r[5]=0u+0x80720000u; // 805A63C0
  cmps(c,0,(int32_t)c->r[4],0); // 805A63C4
  c->r[5]=c->r[5]+0x00002580u; // 805A63C8
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A63CC
  if (crb(c,2)) { goto L_805A63E0; } // 805A63D0
  c->r[0]=R32(c->r[13]+0xFFFFABF0u); // 805A63D4
  c->r[0]=sraw(c,c->r[0],16); // 805A63D8
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 805A63DC
L_805A63E0:;
  c->r[4]=0u+0x80720000u; // 805A63E0
  c->r[4]=c->r[4]+0x00001F00u; // 805A63E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 805A63E8
  return; // 805A63EC
}

// fn_805A63F0
void f_805A63F0(Ctx* __restrict c) {
  trace_call(0x805A63F0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A63F0
  c->r[4]=0u+0xFFFFFFFFu; // 805A63F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A63F8
  c->ctr=c->r[12]; // 805A63FC
  if (true) { dispatch(c,c->ctr); return; } // 805A6400
}

// fn_805A6404
void f_805A6404(Ctx* __restrict c) {
  trace_call(0x805A6404u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A6404
  c->r[12]=c->r[1]|c->r[1]; // 805A6408
  c->r[11]=addc(c,~c->r[11],0xFFFFFEB0u,1); // 805A640C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6410
  c->r[0]=c->lr; // 805A6414
  c->r[3]=0u+0x80860000u; // 805A6418
  c->r[4]=0u+0x806C0000u; // 805A641C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A6420
  c->r[5]=0u+0x80860000u; // 805A6424
  c->r[3]=c->r[3]+0xFFFFDBC0u; // 805A6428
  c->r[4]=c->r[4]+0xFFFFDBF0u; // 805A642C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A6430
  c->r[31]=0u+0x00000000u; // 805A6434
  c->r[5]=c->r[5]+0xFFFFDB30u; // 805A6438
  c->r[6]=0u+0x00000120u; // 805A643C
  W32(c->r[1]+0x00000008u,c->r[31]); // 805A6440
  c->r[7]=0u+0x00000000u; // 805A6444
  c->r[8]=0u+0x00000000u; // 805A6448
  c->r[9]=0u+0x00000000u; // 805A644C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A6450
  c->r[10]=0u+0x00000000u; // 805A6454
  W32(c->r[1]+0x00000010u,c->r[31]); // 805A6458
  W32(c->r[1]+0x00000014u,c->r[31]); // 805A645C
  W32(c->r[1]+0x00000018u,c->r[31]); // 805A6460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A6464
  c->lr=0x805A646Cu; f_8062E0DC(c); // 805A6468
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805A646C
  if (crb(c,2)) { goto L_805A64A0; } // 805A6470
  c->r[3]=0u+0x80720000u; // 805A6474
  cmps(c,0,(int32_t)c->r[31],0); // 805A6478
  c->r[3]=c->r[3]+0x00002580u; // 805A647C
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A6480
  if (crb(c,2)) { goto L_805A6494; } // 805A6484
  c->r[0]=R32(c->r[13]+0xFFFFABF0u); // 805A6488
  c->r[0]=sraw(c,c->r[0],16); // 805A648C
  W16(c->r[1]+0x0000013Eu,c->r[0]); // 805A6490
L_805A6494:;
  c->r[3]=0u+0x80720000u; // 805A6494
  c->r[3]=c->r[3]+0x00001F00u; // 805A6498
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A649C
L_805A64A0:;
  c->r[6]=0u+0x80860000u; // 805A64A0
  c->r[7]=0u+0x806C0000u; // 805A64A4
  c->r[5]=0u+0x805A0000u; // 805A64A8
  c->r[3]=0u+0x805A0000u; // 805A64AC
  c->r[7]=c->r[7]+0xFFFFDBF0u; // 805A64B0
  c->r[4]=c->r[6]+0xFFFFDBF0u; // 805A64B4
  c->r[0]=R32(c->r[1]+0x00000020u); // 805A64B8
  c->r[5]=c->r[5]+0x000063B8u; // 805A64BC
  c->r[3]=c->r[3]+0x000063F0u; // 805A64C0
  W32(c->r[6]+0xFFFFDBF0u,c->r[7]); // 805A64C4
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A64C8
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A64CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A64D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A64D4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A64D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A64DC
  c->lr=c->r[0]; // 805A64E0
  c->r[1]=c->r[10]|c->r[10]; // 805A64E4
  return; // 805A64E8
}

// fn_805A64EC
void f_805A64EC(Ctx* __restrict c) {
  trace_call(0x805A64ECu);
  c->r[3]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 805A64EC
  {uint32_t ea=c->r[2]+0x00002838u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A64F0
  {uint32_t ea=c->r[2]+0x0000283Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A64F4
  c->r[5]=0u+0x00000008u; // 805A64F8
  {uint32_t ea=c->r[2]+0x00002840u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A64FC
  c->r[0]=c->r[3]+0x00000001u; // 805A6500
  c->ctr=c->r[0]; // 805A6504
  if (crb(c,0)) { goto L_805A65A8; } // 805A6508
L_805A650C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 805A650C
  c->r[8]=c->r[0]+c->r[6]; // 805A6510
  {uint32_t ea=c->r[8]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A6514
  fcmp(c,0,c->f[3],c->f[0]); // 805A6518
  if (!crb(c,0)) { goto L_805A6524; } // 805A651C
  c->f[0]=c->f[3]; // 805A6520
L_805A6524:;
  {uint32_t ea=c->r[8]+0x000000D0u; psq_load(c,5,ea,0,0);} // 805A6524
  c->r[3]=c->r[8]+0x000000D0u; // 805A6528
  {uint32_t ea=c->r[8]+0x000000E0u; psq_load(c,7,ea,0,0);} // 805A652C
  c->r[7]=c->r[8]+0x000000E0u; // 805A6530
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 805A6534
  {uint32_t ea=c->r[3]+c->r[5]; psq_load(c,4,ea,0,0);} // 805A6538
  {double t0=S(c->f[7]*c->f[7]), t1=S(c->ps1[7]*c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A653C
  {uint32_t ea=c->r[7]+c->r[5]; psq_load(c,6,ea,0,0);} // 805A6540
  c->r[3]=R16(c->r[8]+0x0000000Au); // 805A6544
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 805A6548
  {double t0=S(std::fma(c->f[4],c->f[4],c->f[5])), t1=S(std::fma(c->ps1[4],c->ps1[4],c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 805A654C
  c->r[0]=R16(c->r[8]+0x0000000Cu); // 805A6550
  {double t0=S(std::fma(c->f[6],c->f[6],c->f[7])), t1=S(std::fma(c->ps1[6],c->ps1[6],c->ps1[7])); c->f[6]=t0; c->ps1[6]=t1;} // 805A6554
  c->r[3]=rotl(c->r[3],0)&0x0000007Fu; // 805A6558
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 805A655C
  {double t0=S(c->f[4]+c->ps1[5]), t1=S(c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 805A6560
  {double t0=S(c->f[6]+c->ps1[7]), t1=S(c->ps1[7]); c->f[5]=t0; c->ps1[5]=t1;} // 805A6564
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805A6568
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[0],c->f[4])); // 805A656C
  c->f[4]=c->ps1[4]=S(std::fma(c->f[2],c->f[0],-c->f[1])); // 805A6570
  if (!crb(c,1)) { goto L_805A658C; } // 805A6574
  {uint32_t ea=c->r[8]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A6578
  fcmp(c,0,c->f[4],c->f[0]); // 805A657C
  if (!crb(c,1)) { goto L_805A65A0; } // 805A6580
  c->r[3]=0u+0x00000000u; // 805A6584
  return; // 805A6588
L_805A658C:;
  {uint32_t ea=c->r[8]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A658C
  fcmp(c,0,c->f[4],c->f[0]); // 805A6590
  if (!crb(c,1)) { goto L_805A65A0; } // 805A6594
  c->r[3]=0u+0x00000000u; // 805A6598
  return; // 805A659C
L_805A65A0:;
  c->r[4]=c->r[4]+0x00000004u; // 805A65A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A650C; } // 805A65A4
L_805A65A8:;
  c->r[3]=0u+0x00000001u; // 805A65A8
  return; // 805A65AC
}

// fn_805A65B0
void f_805A65B0(Ctx* __restrict c) {
  trace_call(0x805A65B0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A65B0
  c->r[12]=c->r[1]|c->r[1]; // 805A65B4
  c->r[11]=addc(c,~c->r[11],0xFFFFFED0u,1); // 805A65B8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A65BC
  c->r[0]=c->lr; // 805A65C0
  c->r[11]=c->r[12]+0xFFFFFF70u; // 805A65C4
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A65C8
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A65CC
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A65D0
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805A65D4
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805A65D8
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805A65DC
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805A65E0
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 805A65E4
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 805A65E8
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 805A65EC
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 805A65F0
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 805A65F4
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 805A65F8
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 805A65FC
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 805A6600
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 805A6604
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 805A6608
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 805A660C
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 805A6610
  c->lr=0x805A6618u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805A6614
  {uint32_t ea=c->r[2]+0x00002858u; c->f[25]=c->ps1[25]=RF32(ea);} // 805A6618
  c->r[27]=c->r[3]|c->r[3]; // 805A661C
  {uint32_t ea=c->r[2]+0x00002850u; c->f[26]=c->ps1[26]=RF32(ea);} // 805A6620
  c->r[28]=c->r[4]|c->r[4]; // 805A6624
  {uint32_t ea=c->r[2]+0x00002838u; c->f[27]=c->ps1[27]=RF32(ea);} // 805A6628
  c->r[29]=c->r[6]|c->r[6]; // 805A662C
  {uint32_t ea=c->r[2]+0x00002854u; c->f[28]=c->ps1[28]=RF32(ea);} // 805A6630
  c->r[30]=c->r[5]+0xFFFFFFFFu; // 805A6634
  {uint32_t ea=c->r[2]+0x00002844u; c->f[31]=c->ps1[31]=RF32(ea);} // 805A6638
  c->r[25]=0u+0x80860000u; // 805A663C
  {uint32_t ea=c->r[2]+0x00002848u; c->f[23]=c->ps1[23]=RF32(ea);} // 805A6640
  {uint32_t ea=c->r[2]+0x0000285Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 805A6644
  goto L_805A69A8; // 805A6648
L_805A664C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 805A664C
  c->r[31]=c->r[0]+c->r[29]; // 805A6650
  c->r[4]=R8(c->r[31]+0x00000008u); // 805A6654
  c->r[3]=addc(c,~c->r[4],0x00000007u,1); // 805A6658
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 805A665C
  c->r[0]=c->r[3]|c->r[0]; // 805A6660
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805A6664
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805A6668
  if (crb(c,2)) { goto L_805A69A0; } // 805A666C
  c->r[3]=c->r[1]+0x00000030u; // 805A6670
  c->r[4]=c->r[31]+0x000000D0u; // 805A6674
  c->lr=0x805A667Cu; f_8053BCAC(c); // 805A6678
  c->r[3]=c->r[1]+0x00000040u; // 805A667C
  c->r[4]=c->r[31]+0x000000E0u; // 805A6680
  c->lr=0x805A6688u; f_8053BCAC(c); // 805A6684
  c->r[3]=c->r[1]+0x00000050u; // 805A6688
  c->lr=0x805A6690u; f_805A6C28(c); // 805A668C
  c->r[4]=c->r[25]+0xFFFFDC00u; // 805A6690
  c->lr=0x805A6698u; f_805A6C14(c); // 805A6694
  c->r[3]=c->r[1]+0x00000040u; // 805A6698
  c->r[4]=c->r[1]+0x00000050u; // 805A669C
  c->lr=0x805A66A4u; f_8052B720(c); // 805A66A0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 805A66A4
  c->r[3]=c->r[1]+0x00000030u; // 805A66A8
  c->r[4]=c->r[1]+0x00000050u; // 805A66AC
  c->lr=0x805A66B4u; f_8052B720(c); // 805A66B0
  W32(c->r[1]+0x00000018u,c->r[3]); // 805A66B4
  c->r[3]=c->r[1]+0x0000001Cu; // 805A66B8
  c->lr=0x805A66C0u; f_80585D8C(c); // 805A66BC
  c->r[26]=c->r[3]|c->r[3]; // 805A66C0
  c->r[3]=c->r[1]+0x00000018u; // 805A66C4
  c->lr=0x805A66CCu; f_80585D8C(c); // 805A66C8
  c->r[24]=c->r[3]&c->r[26]; // 805A66CC
  c->r[3]=c->r[31]+0x000000E0u; // 805A66D0
  c->r[4]=c->r[3]|c->r[3]; // 805A66D4
  c->lr=0x805A66DCu; f_8052BAE8(c); // 805A66D8
  W32(c->r[1]+0x00000024u,c->r[3]); // 805A66DC
  c->r[3]=c->r[31]+0x000000D0u; // 805A66E0
  c->r[4]=c->r[3]|c->r[3]; // 805A66E4
  c->lr=0x805A66ECu; f_8052BAE8(c); // 805A66E8
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A66EC
  c->r[3]=c->r[1]+0x00000024u; // 805A66F0
  c->lr=0x805A66F8u; f_80585D8C(c); // 805A66F4
  c->r[26]=c->r[3]|c->r[3]; // 805A66F8
  c->r[3]=c->r[1]+0x00000020u; // 805A66FC
  c->lr=0x805A6704u; f_80585D8C(c); // 805A6700
  c->r[0]=c->r[3]&c->r[26]; // 805A6704
  c->r[24]=c->r[24]&c->r[0]; // 805A6708
  c->r[0]=rotl(c->r[24],0)&0x0000000Eu; // 805A670C
  cmps(c,0,(int32_t)c->r[0],14); // 805A6710
  if (crb(c,2)) { goto L_805A6748; } // 805A6714
  c->lr=0x805A671Cu; f_80576004(c); // 805A6718
  c->r[4]=0u+0x00000000u; // 805A671C
  c->lr=0x805A6724u; f_8053BADC(c); // 805A6720
  c->r[4]=c->r[3]|c->r[3]; // 805A6724
  c->r[3]=c->r[31]+0x000000D0u; // 805A6728
  c->lr=0x805A6730u; f_8052BCBC(c); // 805A672C
  c->lr=0x805A6734u; f_80576004(c); // 805A6730
  c->r[4]=0u+0x00000000u; // 805A6734
  c->lr=0x805A673Cu; f_8053BADC(c); // 805A6738
  c->r[4]=c->r[3]|c->r[3]; // 805A673C
  c->r[3]=c->r[31]+0x000000E0u; // 805A6740
  c->lr=0x805A6748u; f_8052BCBC(c); // 805A6744
L_805A6748:;
  c->r[3]=c->r[31]+0x00000010u; // 805A6748
  c->lr=0x805A6750u; f_805A6C0C(c); // 805A674C
  c->r[26]=c->r[3]|c->r[3]; // 805A6750
  c->r[3]=c->r[31]+0x00000010u; // 805A6754
  c->lr=0x805A675Cu; f_805A6C0C(c); // 805A6758
  c->r[4]=c->r[26]+0x00000010u; // 805A675C
  c->lr=0x805A6764u; f_8052BCBC(c); // 805A6760
  c->r[3]=c->r[27]|c->r[27]; // 805A6764
  c->lr=0x805A676Cu; f_8052F4AC(c); // 805A6768
  c->f[24]=c->f[1]; // 805A676C
  c->r[3]=c->r[31]+0x00000010u; // 805A6770
  c->lr=0x805A6778u; f_805A6C0C(c); // 805A6774
  c->r[4]=0u+0x00000003u; // 805A6778
  c->lr=0x805A6780u; f_8053BAE8(c); // 805A677C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[24]);} // 805A6780
  c->r[3]=c->r[31]+0x000000D0u; // 805A6784
  c->lr=0x805A678Cu; f_8053D124(c); // 805A6788
  c->f[30]=c->f[1]; // 805A678C
  c->r[3]=c->r[31]+0x000000BCu; // 805A6790
  c->lr=0x805A6798u; f_805A6BF4(c); // 805A6794
  c->f[24]=c->f[1]; // 805A6798
  c->r[3]=c->r[31]+0x000000BCu; // 805A679C
  c->lr=0x805A67A4u; f_805A6BF4(c); // 805A67A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[24]); // 805A67A4
  fcmp(c,0,c->f[30],c->f[0]); // 805A67A8
  if (!crb(c,1)) { goto L_805A67D8; } // 805A67AC
  c->f[1]=c->f[30]; // 805A67B0
  c->lr=0x805A67B8u; f_80587A48(c); // 805A67B4
  c->f[24]=c->f[1]; // 805A67B8
  c->r[3]=c->r[31]+0x000000BCu; // 805A67BC
  c->lr=0x805A67C4u; f_805A6BF4(c); // 805A67C0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[24]); // 805A67C4
  c->r[3]=c->r[31]+0x000000D0u; // 805A67C8
  c->r[4]=c->r[1]+0x00000010u; // 805A67CC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 805A67D0
  c->lr=0x805A67D8u; f_80579C6C(c); // 805A67D4
L_805A67D8:;
  c->r[3]=c->r[27]+0x00000008u; // 805A67D8
  c->lr=0x805A67E0u; f_80579E50(c); // 805A67DC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 805A67E0
  c->r[3]=c->r[31]+0x00000010u; // 805A67E4
  c->lr=0x805A67ECu; f_805A6C0C(c); // 805A67E8
  c->r[3]=c->r[3]+0x00000010u; // 805A67EC
  c->r[4]=c->r[1]+0x00000028u; // 805A67F0
  c->r[5]=c->r[31]+0x000000D0u; // 805A67F4
  c->lr=0x805A67FCu; f_80532898(c); // 805A67F8
  c->r[3]=c->r[27]+0x0000000Cu; // 805A67FC
  c->lr=0x805A6804u; f_8052F4AC(c); // 805A6800
  c->f[24]=c->f[1]; // 805A6804
  c->r[3]=c->r[31]+0x00000010u; // 805A6808
  c->lr=0x805A6810u; f_805A6C0C(c); // 805A680C
  c->r[4]=0u+0x00000003u; // 805A6810
  c->r[3]=c->r[3]+0x00000010u; // 805A6814
  c->lr=0x805A681Cu; f_8053BAE8(c); // 805A6818
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[24]);} // 805A681C
  c->r[3]=c->r[31]+0x00000010u; // 805A6820
  c->lr=0x805A6828u; f_805A6C0C(c); // 805A6824
  c->r[4]=c->r[3]|c->r[3]; // 805A6828
  c->r[3]=c->r[1]+0x00000060u; // 805A682C
  c->r[4]=c->r[4]+0x00000030u; // 805A6830
  c->lr=0x805A6838u; f_8035CF74(c); // 805A6834
  c->r[3]=c->r[31]+0x00000010u; // 805A6838
  c->lr=0x805A6840u; f_805A6C0C(c); // 805A683C
  c->r[3]=c->r[3]+0x00000020u; // 805A6840
  c->r[4]=c->r[1]+0x00000060u; // 805A6844
  c->lr=0x805A684Cu; f_805A6BE0(c); // 805A6848
  c->r[3]=c->r[1]+0x00000070u; // 805A684C
  c->lr=0x805A6854u; f_805A6BDC(c); // 805A6850
  c->r[3]=c->r[27]+0x00000008u; // 805A6854
  c->lr=0x805A685Cu; f_8052F4AC(c); // 805A6858
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 805A685C
  c->r[3]=c->r[1]+0x00000070u; // 805A6860
  c->r[4]=c->r[1]+0x0000002Cu; // 805A6864
  c->r[5]=c->r[31]+0x000000E0u; // 805A6868
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 805A686C
  c->lr=0x805A6874u; f_80532734(c); // 805A6870
  c->r[3]=c->r[1]+0x00000070u; // 805A6874
  c->lr=0x805A687Cu; f_8053D124(c); // 805A6878
  c->f[30]=c->ps1[30]=S(c->f[23]*c->f[1]); // 805A687C
  c->r[3]=c->r[31]+0x000000BDu; // 805A6880
  c->lr=0x805A6888u; f_805A6BF4(c); // 805A6884
  c->f[24]=c->f[1]; // 805A6888
  c->r[3]=c->r[27]+0x00000008u; // 805A688C
  c->lr=0x805A6894u; f_80579E50(c); // 805A6890
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[24]); // 805A6894
  {uint32_t ea=c->r[2]+0x0000284Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805A6898
  c->lr=0x805A68A0u; f_80585D7C(c); // 805A689C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 805A68A0
  c->f[24]=c->f[1]; // 805A68A4
  fcmp(c,0,c->f[30],c->f[0]); // 805A68A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 805A68AC
  if (!crb(c,2)) { goto L_805A68DC; } // 805A68B0
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[30]); // 805A68B4
  c->r[3]=c->r[1]+0x00000070u; // 805A68B8
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[26],c->f[30],-c->f[27])); // 805A68BC
  c->r[4]=0u+0x00000003u; // 805A68C0
  c->f[1]=c->ps1[1]=S(c->f[25]*c->f[30]); // 805A68C4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[2],-c->f[0])); // 805A68C8
  c->f[24]=c->ps1[24]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A68CC
  c->lr=0x805A68D4u; f_8053BAE8(c); // 805A68D0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[24]);} // 805A68D4
  goto L_805A692C; // 805A68D8
L_805A68DC:;
  c->f[1]=c->f[30]; // 805A68DC
  c->lr=0x805A68E4u; f_80587A48(c); // 805A68E0
  c->f[0]=c->ps1[0]=S(c->f[24]*c->f[1]); // 805A68E4
  c->r[3]=c->r[31]+0x000000E0u; // 805A68E8
  c->r[4]=c->r[1]+0x00000014u; // 805A68EC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805A68F0
  c->lr=0x805A68F8u; f_80579C6C(c); // 805A68F4
  c->r[3]=c->r[1]+0x00000070u; // 805A68F8
  c->r[4]=c->r[1]+0x00000014u; // 805A68FC
  c->lr=0x805A6904u; f_80579C6C(c); // 805A6900
  c->f[30]=c->ps1[30]=S(c->f[24]*c->f[24]); // 805A6904
  c->r[3]=c->r[1]+0x00000070u; // 805A6908
  c->r[4]=0u+0x00000003u; // 805A690C
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[30]); // 805A6910
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[26],c->f[30],-c->f[27])); // 805A6914
  c->f[1]=c->ps1[1]=S(c->f[25]*c->f[30]); // 805A6918
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[2],-c->f[0])); // 805A691C
  c->f[24]=c->ps1[24]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A6920
  c->lr=0x805A6928u; f_8053BAE8(c); // 805A6924
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[24]);} // 805A6928
L_805A692C:;
  c->r[3]=c->r[1]+0x00000060u; // 805A692C
  c->r[4]=c->r[1]+0x00000070u; // 805A6930
  c->r[5]=c->r[3]|c->r[3]; // 805A6934
  c->lr=0x805A693Cu; f_805A6B38(c); // 805A6938
  c->r[3]=c->r[1]+0x00000060u; // 805A693C
  c->lr=0x805A6944u; f_805A6ADC(c); // 805A6940
  c->r[4]=c->r[1]+0x00000070u; // 805A6944
  c->r[3]=c->r[31]+0x000000A0u; // 805A6948
  c->r[5]=c->r[4]|c->r[4]; // 805A694C
  c->lr=0x805A6954u; f_80532910(c); // 805A6950
  c->f[1]=c->f[30]; // 805A6954
  c->lr=0x805A695Cu; f_8053D0E4(c); // 805A6958
  c->f[24]=c->ps1[24]=S(c->f[29]*c->f[1]); // 805A695C
  c->r[3]=c->r[31]+0x000000A0u; // 805A6960
  c->r[4]=0u+0x00000003u; // 805A6964
  c->lr=0x805A696Cu; f_8053BAE8(c); // 805A6968
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[24]);} // 805A696C
  c->r[3]=c->r[31]+0x00000010u; // 805A6970
  c->lr=0x805A6978u; f_805A6C0C(c); // 805A6974
  c->r[3]=c->r[3]+0x00000030u; // 805A6978
  c->r[4]=c->r[1]+0x00000060u; // 805A697C
  c->lr=0x805A6984u; f_805A6BE0(c); // 805A6980
  c->r[3]=c->r[31]+0x00000010u; // 805A6984
  c->lr=0x805A698Cu; f_805A6AD8(c); // 805A6988
  c->r[26]=c->r[3]|c->r[3]; // 805A698C
  c->r[3]=c->r[31]+0x00000010u; // 805A6990
  c->lr=0x805A6998u; f_805A6C0C(c); // 805A6994
  c->r[4]=c->r[26]|c->r[26]; // 805A6998
  c->lr=0x805A69A0u; f_805A6A14(c); // 805A699C
L_805A69A0:;
  c->r[28]=c->r[28]+0x00000004u; // 805A69A0
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805A69A4
L_805A69A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 805A69A8
  if (!crb(c,0)) { IRQCHK(c); goto L_805A664C; } // 805A69AC
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A69B0
  c->r[11]=c->r[10]+0xFFFFFF70u; // 805A69B4
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A69B8
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A69BC
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805A69C0
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805A69C4
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805A69C8
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805A69CC
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 805A69D0
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 805A69D4
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 805A69D8
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 805A69DC
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 805A69E0
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 805A69E4
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 805A69E8
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 805A69EC
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 805A69F0
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 805A69F4
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 805A69F8
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 805A69FC
  c->lr=0x805A6A04u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805A6A00
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A6A04
  c->lr=c->r[0]; // 805A6A08
  c->r[1]=c->r[10]|c->r[10]; // 805A6A0C
  return; // 805A6A10
}

// fn_805A6A14
void f_805A6A14(Ctx* __restrict c) {
  trace_call(0x805A6A14u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A6A14
  c->r[12]=c->r[1]|c->r[1]; // 805A6A18
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805A6A1C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6A20
  c->r[0]=c->lr; // 805A6A24
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A6A28
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A6A2C
  c->r[31]=c->r[4]|c->r[4]; // 805A6A30
  c->r[4]=c->r[3]+0x00000030u; // 805A6A34
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A6A38
  c->r[30]=c->r[3]|c->r[3]; // 805A6A3C
  c->r[3]=c->r[31]|c->r[31]; // 805A6A40
  c->lr=0x805A6A48u; f_80629174(c); // 805A6A44
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,2,ea,0,0);} // 805A6A48
  c->r[5]=c->r[31]+0x00000010u; // 805A6A4C
  {uint32_t ea=c->r[30]+0x00000048u; c->f[6]=c->ps1[6]=RF32(ea);} // 805A6A50
  c->r[6]=c->r[31]+0x00000020u; // 805A6A54
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[7]=t0; c->ps1[7]=t1;} // 805A6A58
  {uint32_t ea=0u+c->r[31]; psq_load(c,1,ea,0,0);} // 805A6A5C
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A6A60
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A6A64
  {double t0=S(c->f[6]), t1=S(c->f[6]); c->f[6]=t0; c->ps1[6]=t1;} // 805A6A68
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,3,ea,0,0);} // 805A6A6C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[5]=t0; c->ps1[5]=t1;} // 805A6A70
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A6A74
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 805A6A78
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A6A7C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A6A80
  c->r[5]=c->r[31]+0x00000030u; // 805A6A84
  {double t0=S(std::fma(c->f[1],c->f[7],c->f[5])), t1=S(std::fma(c->ps1[1],c->ps1[7],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A6A88
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A6A8C
  {double t0=S(std::fma(c->f[0],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[7],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A6A90
  {uint32_t ea=c->r[30]+0x00000018u; psq_load(c,0,ea,0,0);} // 805A6A94
  c->r[3]=c->r[1]+0x00000010u; // 805A6A98
  {double t0=S(std::fma(c->f[3],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A6A9C
  {double t0=S(std::fma(c->f[2],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805A6AA0
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,5,ea,0,0);} // 805A6AA4
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6AA8
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6AAC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,0,0);} // 805A6AB0
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,1,ea,0,0);} // 805A6AB4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6AB8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A6ABC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A6AC0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A6AC4
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A6AC8
  c->lr=c->r[0]; // 805A6ACC
  c->r[1]=c->r[10]|c->r[10]; // 805A6AD0
  return; // 805A6AD4
}

// fn_805A6AD8
void f_805A6AD8(Ctx* __restrict c) {
  trace_call(0x805A6AD8u);
  return; // 805A6AD8
}

// fn_805A6ADC
void f_805A6ADC(Ctx* __restrict c) {
  trace_call(0x805A6ADCu);
  {uint32_t ea=0u+c->r[3]; psq_load(c,4,ea,0,0);} // 805A6ADC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A6AE0
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A6AE4
  {uint32_t ea=c->r[2]+0x00002838u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A6AE8
  {uint32_t ea=c->r[2]+0x00002844u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A6AEC
  {uint32_t ea=c->r[2]+0x00002860u; c->f[0]=RF64(ea);} // 805A6AF0
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 805A6AF4
  {uint32_t ea=0u+c->r[3]; psq_load(c,5,ea,0,0);} // 805A6AF8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 805A6AFC
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[7]=t0; c->ps1[7]=t1;} // 805A6B00
  c->f[6]=frsqrte(c->f[7]); // 805A6B04
  c->f[6]=c->ps1[6]=S(c->f[6]); // 805A6B08
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[6]); // 805A6B0C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 805A6B10
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[7],c->f[3],-c->f[2])); // 805A6B14
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[6])); // 805A6B18
  c->f[0]=(c->f[1]>=0.0)?c->f[1]:c->f[0]; // 805A6B1C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A6B20
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6B24
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6B28
  {uint32_t ea=0u+c->r[3]; psq_store(c,1,ea,0,0);} // 805A6B2C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6B30
  return; // 805A6B34
}

// fn_805A6B38
void f_805A6B38(Ctx* __restrict c) {
  trace_call(0x805A6B38u);
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A6B38
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A6B3C
  {uint32_t ea=0u+c->r[5]; psq_load(c,4,ea,0,0);} // 805A6B40
  c->r[11]=addc(c,~c->r[11],0xFFFFFFE0u,1); // 805A6B44
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6B48
  {uint32_t ea=0u+c->r[4]; psq_load(c,5,ea,0,0);} // 805A6B4C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A6B50
  c->r[12]=c->r[1]|c->r[1]; // 805A6B54
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6B58
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A6B5C
  {double t0=S(c->f[4]*c->f[5]), t1=S(c->ps1[4]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6B60
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 805A6B64
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A6B68
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,6,ea,0,0);} // 805A6B6C
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6B70
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 805A6B74
  {double t0=S(std::fma(c->f[5],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6B78
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 805A6B7C
  {double t0=S(std::fma(c->f[5],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[3],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6B80
  c->r[6]=c->r[1]+0x00000010u; // 805A6B84
  {double t0=S(c->f[5]*c->f[4]), t1=S(c->ps1[5]*c->ps1[4]); c->f[9]=t0; c->ps1[9]=t1;} // 805A6B88
  {double t0=S(c->f[10]), t1=S(c->f[10]); c->f[2]=t0; c->ps1[2]=t1;} // 805A6B8C
  {double t0=S(c->ps1[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6B90
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[9])), t1=S(std::fma(c->ps1[7],c->ps1[6],c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 805A6B94
  {double t0=S(c->f[11]), t1=S(c->f[11]); c->f[3]=t0; c->ps1[3]=t1;} // 805A6B98
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 805A6B9C
  {double t0=S(c->f[8]+c->ps1[9]), t1=S(c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 805A6BA0
  {double t0=S(c->ps1[1]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6BA4
  {double t0=S(std::fma(c->f[6],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[6],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6BA8
  c->f[6]=c->ps1[6]=S(std::fma(c->f[10],c->f[11],-c->f[8])); // 805A6BAC
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6BB0
  {double t0=S(std::fma(c->f[7],c->f[3],c->f[0])), t1=S(std::fma(c->ps1[7],c->ps1[3],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6BB4
  {double t0=S(std::fma(c->f[5],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[3],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6BB8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6BBC
  {uint32_t ea=0u+c->r[3]; psq_store(c,1,ea,0,0);} // 805A6BC0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 805A6BC4
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A6BC8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6BCC
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A6BD0
  c->r[1]=c->r[10]|c->r[10]; // 805A6BD4
  return; // 805A6BD8
}

// fn_805A6BDC
void f_805A6BDC(Ctx* __restrict c) {
  trace_call(0x805A6BDCu);
  return; // 805A6BDC
}

// fn_805A6BE0
void f_805A6BE0(Ctx* __restrict c) {
  trace_call(0x805A6BE0u);
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A6BE0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A6BE4
  {uint32_t ea=0u+c->r[3]; psq_store(c,1,ea,0,0);} // 805A6BE8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6BEC
  return; // 805A6BF0
}

// fn_805A6BF4
void f_805A6BF4(Ctx* __restrict c) {
  trace_call(0x805A6BF4u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 805A6BF4
  c->r[3]=0u+0x806D0000u; // 805A6BF8
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 805A6BFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A6C00
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 805A6C04
  return; // 805A6C08
}

// fn_805A6C0C
void f_805A6C0C(Ctx* __restrict c) {
  trace_call(0x805A6C0Cu);
  c->r[3]=c->r[3]+0x00000040u; // 805A6C0C
  return; // 805A6C10
}

// fn_805A6C14
void f_805A6C14(Ctx* __restrict c) {
  trace_call(0x805A6C14u);
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A6C14
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A6C18
  {uint32_t ea=0u+c->r[3]; psq_store(c,1,ea,0,0);} // 805A6C1C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A6C20
  return; // 805A6C24
}

// fn_805A6C28
void f_805A6C28(Ctx* __restrict c) {
  trace_call(0x805A6C28u);
  return; // 805A6C28
}

// fn_805A6C2C
void f_805A6C2C(Ctx* __restrict c) {
  trace_call(0x805A6C2Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A6C2C
  c->r[12]=c->r[1]|c->r[1]; // 805A6C30
  c->r[11]=addc(c,~c->r[11],0xFFFFFD60u,1); // 805A6C34
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A6C38
  c->r[0]=c->lr; // 805A6C3C
  c->r[11]=c->r[12]+0xFFFFFF40u; // 805A6C40
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A6C44
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A6C48
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A6C4C
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805A6C50
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805A6C54
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805A6C58
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805A6C5C
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 805A6C60
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 805A6C64
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 805A6C68
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 805A6C6C
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 805A6C70
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 805A6C74
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 805A6C78
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 805A6C7C
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 805A6C80
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 805A6C84
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 805A6C88
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 805A6C8C
  {uint32_t ea=c->r[12]+0xFFFFFF60u; WF64(ea,c->f[22]);} // 805A6C90
  {uint32_t ea=c->r[12]+0xFFFFFF68u; psq_store(c,22,ea,0,0);} // 805A6C94
  {uint32_t ea=c->r[12]+0xFFFFFF50u; WF64(ea,c->f[21]);} // 805A6C98
  {uint32_t ea=c->r[12]+0xFFFFFF58u; psq_store(c,21,ea,0,0);} // 805A6C9C
  {uint32_t ea=c->r[12]+0xFFFFFF40u; WF64(ea,c->f[20]);} // 805A6CA0
  {uint32_t ea=c->r[12]+0xFFFFFF48u; psq_store(c,20,ea,0,0);} // 805A6CA4
  c->lr=0x805A6CACu; f_803A9BD0(c); // 805A6CA8
  c->r[10]=0u+0x806D0000u; // 805A6CAC
  c->r[9]=0u+0x80860000u; // 805A6CB0
  c->r[11]=0u+0x80000000u; // 805A6CB4
  {uint32_t ea=c->r[2]+0x00002868u; c->f[24]=c->ps1[24]=RF32(ea);} // 805A6CB8
  {uint32_t ea=c->r[2]+0x00002858u; c->f[27]=c->ps1[27]=RF32(ea);} // 805A6CBC
  c->r[15]=c->r[3]|c->r[3]; // 805A6CC0
  {uint32_t ea=c->r[2]+0x00002850u; c->f[28]=c->ps1[28]=RF32(ea);} // 805A6CC4
  c->r[16]=c->r[4]|c->r[4]; // 805A6CC8
  {uint32_t ea=c->r[2]+0x00002838u; c->f[29]=c->ps1[29]=RF32(ea);} // 805A6CCC
  c->r[17]=c->r[5]|c->r[5]; // 805A6CD0
  {uint32_t ea=c->r[2]+0x00002854u; c->f[30]=c->ps1[30]=RF32(ea);} // 805A6CD4
  c->r[18]=c->r[6]|c->r[6]; // 805A6CD8
  {uint32_t ea=c->r[2]+0x00002844u; c->f[25]=c->ps1[25]=RF32(ea);} // 805A6CDC
  c->r[19]=c->r[8]|c->r[8]; // 805A6CE0
  {uint32_t ea=c->r[2]+0x00002848u; c->f[26]=c->ps1[26]=RF32(ea);} // 805A6CE4
  c->r[22]=c->r[11]+0xFFFFFFFFu; // 805A6CE8
  {uint32_t ea=c->r[2]+0x0000285Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 805A6CEC
  c->r[21]=c->r[7]+0xFFFFFFFFu; // 805A6CF0
  c->r[29]=c->r[1]+0x00000170u; // 805A6CF4
  c->r[28]=c->r[1]+0x00000150u; // 805A6CF8
  c->r[14]=c->r[10]+0xFFFFBBA0u; // 805A6CFC
  c->r[23]=c->r[9]+0x00000070u; // 805A6D00
  c->r[30]=0u+0x00000008u; // 805A6D04
  goto L_805A79D8; // 805A6D08
L_805A6D0C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 805A6D0C
  c->r[20]=c->r[0]+c->r[19]; // 805A6D10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[20]+0x0000011Eu); // 805A6D14
  c->r[3]=R8(c->r[20]+0x00000008u); // 805A6D18
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 805A6D1C
  W32(c->r[1]+0x00000068u,c->r[0]); // 805A6D20
  cmps(c,0,(int32_t)c->r[3],8); // 805A6D24
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A6D28
  if (crb(c,2)) { goto L_805A6D50; } // 805A6D2C
  if (!crb(c,0)) { goto L_805A6D44; } // 805A6D30
  cmps(c,0,(int32_t)c->r[3],6); // 805A6D34
  if (crb(c,2)) { goto L_805A7430; } // 805A6D38
  if (!crb(c,0)) { goto L_805A79D0; } // 805A6D3C
  goto L_805A739C; // 805A6D40
L_805A6D44:;
  cmps(c,0,(int32_t)c->r[3],10); // 805A6D44
  if (!crb(c,0)) { goto L_805A739C; } // 805A6D48
  goto L_805A73C4; // 805A6D4C
L_805A6D50:;
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A6D50
  c->r[3]=c->r[20]+0x000000D0u; // 805A6D54
  {uint32_t ea=0u+c->r[17]; psq_load(c,3,ea,0,0);} // 805A6D58
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,0,ea,0,0);} // 805A6D5C
  {uint32_t ea=c->r[17]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A6D60
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,1,ea,0,0);} // 805A6D64
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6D68
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,0,ea,0,0);} // 805A6D6C
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6D70
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A6D74
  {uint32_t ea=c->r[16]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A6D78
  {uint32_t ea=c->r[20]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A6D7C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[29])); // 805A6D80
  fcmp(c,0,c->f[24],c->f[0]); // 805A6D84
  if (!crb(c,1)) { goto L_805A6D90; } // 805A6D88
  c->f[0]=c->f[24]; // 805A6D8C
L_805A6D90:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A6D90
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A6D94
  c->r[3]=c->r[20]+0x000000D0u; // 805A6D98
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A6D9C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6DA0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6DA4
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A6DA8
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A6DAC
  {uint32_t ea=c->r[20]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A6DB0
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[29])); // 805A6DB4
  fcmp(c,0,c->f[24],c->f[0]); // 805A6DB8
  if (!crb(c,1)) { goto L_805A6DC4; } // 805A6DBC
  c->f[0]=c->f[24]; // 805A6DC0
L_805A6DC4:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A6DC4
  c->r[4]=c->r[20]+0x00000010u; // 805A6DC8
  {uint32_t ea=c->r[20]+0x000000E0u; psq_load(c,1,ea,0,0);} // 805A6DCC
  c->r[6]=c->r[20]+0x000000E0u; // 805A6DD0
  c->r[0]=c->r[2]+0x00002870u; // 805A6DD4
  {uint32_t ea=c->r[6]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A6DD8
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6DDC
  c->r[8]=c->r[4]+0x00000010u; // 805A6DE0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6DE4
  c->r[9]=c->r[4]+0x00000020u; // 805A6DE8
  {uint32_t ea=c->r[20]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A6DEC
  c->r[7]=c->r[20]+0x000000C0u; // 805A6DF0
  {uint32_t ea=c->r[6]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A6DF4
  c->r[6]=c->r[1]+0x00000160u; // 805A6DF8
  {uint32_t ea=0u+c->r[0]; psq_load(c,3,ea,0,0);} // 805A6DFC
  c->r[5]=c->r[29]|c->r[29]; // 805A6E00
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,9,ea,0,0);} // 805A6E04
  c->r[3]=c->r[1]+0x00000180u; // 805A6E08
  {uint32_t ea=c->r[20]+0x000000E0u; psq_load(c,1,ea,0,0);} // 805A6E0C
  {double t0=c->f[9], t1=c->ps1[9]; c->f[2]=t0; c->ps1[2]=t1;} // 805A6E10
  {uint32_t ea=c->r[20]+0x00000010u; psq_load(c,6,ea,0,0);} // 805A6E14
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6E18
  {uint32_t ea=c->r[20]+0x000000E8u; c->f[23]=c->ps1[23]=RF32(ea);} // 805A6E1C
  {double t0=S(c->ps1[6]), t1=S(c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 805A6E20
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,7,ea,0,0);} // 805A6E24
  {double t0=S(c->f[6]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805A6E28
  {uint32_t ea=c->r[4]+c->r[30]; psq_load(c,5,ea,0,0);} // 805A6E2C
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6E30
  {uint32_t ea=c->r[8]+c->r[30]; psq_load(c,8,ea,0,0);} // 805A6E34
  {double t0=c->f[7], t1=c->ps1[7]; c->f[2]=t0; c->ps1[2]=t1;} // 805A6E38
  {uint32_t ea=c->r[9]+c->r[30]; psq_load(c,4,ea,0,0);} // 805A6E3C
  {double t0=S(c->f[5]), t1=S(c->f[8]); c->f[7]=t0; c->ps1[7]=t1;} // 805A6E40
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 805A6E44
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[8]=t0; c->ps1[8]=t1;} // 805A6E48
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[5]=t0; c->ps1[5]=t1;} // 805A6E4C
  {double t0=S(c->f[23]), t1=S(c->f[23]); c->f[23]=t0; c->ps1[23]=t1;} // 805A6E50
  {double t0=S(std::fma(c->f[9],c->f[0],c->f[6])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 805A6E54
  {double t0=S(std::fma(c->f[8],c->f[0],c->f[5])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A6E58
  {double t0=S(std::fma(c->f[7],c->f[23],c->f[6])), t1=S(std::fma(c->ps1[7],c->ps1[23],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 805A6E5C
  {double t0=S(std::fma(c->f[4],c->f[23],c->f[5])), t1=S(std::fma(c->ps1[4],c->ps1[23],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805A6E60
  {uint32_t ea=0u+c->r[29]; psq_store(c,6,ea,0,0);} // 805A6E64
  {uint32_t ea=c->r[29]+c->r[30]; psq_store(c,5,ea,0,0);} // 805A6E68
  {uint32_t ea=c->r[20]+0x000000C0u; psq_load(c,2,ea,0,0);} // 805A6E6C
  {uint32_t ea=c->r[7]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A6E70
  {double t0=S(fres(c->f[2])), t1=S(fres(c->ps1[2])); c->f[4]=t0; c->ps1[4]=t1;} // 805A6E74
  {double t0=S(fres(c->f[0])), t1=S(fres(c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 805A6E78
  {double t0=S(-std::fma(c->f[4],c->f[2],-c->f[3])), t1=S(-std::fma(c->ps1[4],c->ps1[2],-c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 805A6E7C
  {double t0=S(-std::fma(c->f[1],c->f[0],-c->f[3])), t1=S(-std::fma(c->ps1[1],c->ps1[0],-c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 805A6E80
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 805A6E84
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 805A6E88
  {uint32_t ea=c->r[1]+0x00000160u; psq_store(c,3,ea,0,0);} // 805A6E8C
  {double t0=S(c->f[6]*c->f[3]), t1=S(c->ps1[6]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 805A6E90
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A6E94
  {uint32_t ea=c->r[6]+c->r[30]; psq_store(c,2,ea,0,0);} // 805A6E98
  {uint32_t ea=0u+c->r[29]; psq_store(c,1,ea,0,0);} // 805A6E9C
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,0,ea,0,0);} // 805A6EA0
  c->lr=0x805A6EA8u; f_8062AD3C(c); // 805A6EA4
  c->r[3]=c->r[1]+0x00000100u; // 805A6EA8
  c->r[4]=c->r[20]+0x000000D0u; // 805A6EAC
  c->lr=0x805A6EB4u; f_8053BCAC(c); // 805A6EB0
  c->r[3]=c->r[1]+0x00000110u; // 805A6EB4
  c->r[4]=c->r[20]+0x000000E0u; // 805A6EB8
  c->lr=0x805A6EC0u; f_8053BCAC(c); // 805A6EBC
  c->r[3]=c->r[1]+0x00000120u; // 805A6EC0
  c->lr=0x805A6EC8u; f_805A6C28(c); // 805A6EC4
  c->r[4]=0u+0x80860000u; // 805A6EC8
  c->r[4]=c->r[4]+0xFFFFDC00u; // 805A6ECC
  c->lr=0x805A6ED4u; f_805A6C14(c); // 805A6ED0
  c->r[3]=c->r[1]+0x00000110u; // 805A6ED4
  c->r[4]=c->r[1]+0x00000120u; // 805A6ED8
  c->lr=0x805A6EE0u; f_8052B720(c); // 805A6EDC
  W32(c->r[1]+0x00000054u,c->r[3]); // 805A6EE0
  c->r[3]=c->r[1]+0x00000100u; // 805A6EE4
  c->r[4]=c->r[1]+0x00000120u; // 805A6EE8
  c->lr=0x805A6EF0u; f_8052B720(c); // 805A6EEC
  W32(c->r[1]+0x00000050u,c->r[3]); // 805A6EF0
  c->r[3]=c->r[1]+0x00000054u; // 805A6EF4
  c->lr=0x805A6EFCu; f_80585D8C(c); // 805A6EF8
  c->r[24]=c->r[3]|c->r[3]; // 805A6EFC
  c->r[3]=c->r[1]+0x00000050u; // 805A6F00
  c->lr=0x805A6F08u; f_80585D8C(c); // 805A6F04
  c->r[25]=c->r[3]&c->r[24]; // 805A6F08
  c->r[3]=c->r[20]+0x000000E0u; // 805A6F0C
  c->r[4]=c->r[3]|c->r[3]; // 805A6F10
  c->lr=0x805A6F18u; f_8052BAE8(c); // 805A6F14
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 805A6F18
  c->r[3]=c->r[20]+0x000000D0u; // 805A6F1C
  c->r[4]=c->r[3]|c->r[3]; // 805A6F20
  c->lr=0x805A6F28u; f_8052BAE8(c); // 805A6F24
  W32(c->r[1]+0x00000058u,c->r[3]); // 805A6F28
  c->r[3]=c->r[1]+0x0000005Cu; // 805A6F2C
  c->lr=0x805A6F34u; f_80585D8C(c); // 805A6F30
  c->r[24]=c->r[3]|c->r[3]; // 805A6F34
  c->r[3]=c->r[1]+0x00000058u; // 805A6F38
  c->lr=0x805A6F40u; f_80585D8C(c); // 805A6F3C
  c->r[0]=c->r[3]&c->r[24]; // 805A6F40
  c->r[25]=c->r[25]&c->r[0]; // 805A6F44
  c->r[0]=rotl(c->r[25],0)&0x0000000Eu; // 805A6F48
  cmps(c,0,(int32_t)c->r[0],14); // 805A6F4C
  if (crb(c,2)) { goto L_805A6F84; } // 805A6F50
  c->lr=0x805A6F58u; f_80576004(c); // 805A6F54
  c->r[4]=0u+0x00000000u; // 805A6F58
  c->lr=0x805A6F60u; f_8053BADC(c); // 805A6F5C
  c->r[4]=c->r[3]|c->r[3]; // 805A6F60
  c->r[3]=c->r[20]+0x000000D0u; // 805A6F64
  c->lr=0x805A6F6Cu; f_8052BCBC(c); // 805A6F68
  c->lr=0x805A6F70u; f_80576004(c); // 805A6F6C
  c->r[4]=0u+0x00000000u; // 805A6F70
  c->lr=0x805A6F78u; f_8053BADC(c); // 805A6F74
  c->r[4]=c->r[3]|c->r[3]; // 805A6F78
  c->r[3]=c->r[20]+0x000000E0u; // 805A6F7C
  c->lr=0x805A6F84u; f_8052BCBC(c); // 805A6F80
L_805A6F84:;
  c->r[3]=c->r[20]+0x00000010u; // 805A6F84
  c->lr=0x805A6F8Cu; f_805A6C0C(c); // 805A6F88
  c->r[24]=c->r[3]|c->r[3]; // 805A6F8C
  c->r[3]=c->r[20]+0x00000010u; // 805A6F90
  c->lr=0x805A6F98u; f_805A6C0C(c); // 805A6F94
  c->r[4]=c->r[24]+0x00000010u; // 805A6F98
  c->lr=0x805A6FA0u; f_8052BCBC(c); // 805A6F9C
  c->r[3]=c->r[16]|c->r[16]; // 805A6FA0
  c->lr=0x805A6FA8u; f_8052F4AC(c); // 805A6FA4
  c->f[20]=c->f[1]; // 805A6FA8
  c->r[3]=c->r[20]+0x00000010u; // 805A6FAC
  c->lr=0x805A6FB4u; f_805A6C0C(c); // 805A6FB0
  c->r[4]=0u+0x00000003u; // 805A6FB4
  c->lr=0x805A6FBCu; f_8053BAE8(c); // 805A6FB8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A6FBC
  c->r[3]=c->r[20]+0x000000D0u; // 805A6FC0
  c->lr=0x805A6FC8u; f_8053D124(c); // 805A6FC4
  c->f[21]=c->f[1]; // 805A6FC8
  c->r[3]=c->r[20]+0x000000BCu; // 805A6FCC
  c->lr=0x805A6FD4u; f_805A6BF4(c); // 805A6FD0
  c->f[20]=c->f[1]; // 805A6FD4
  c->r[3]=c->r[20]+0x000000BCu; // 805A6FD8
  c->lr=0x805A6FE0u; f_805A6BF4(c); // 805A6FDC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[20]); // 805A6FE0
  fcmp(c,0,c->f[21],c->f[0]); // 805A6FE4
  if (!crb(c,1)) { goto L_805A7014; } // 805A6FE8
  c->f[1]=c->f[21]; // 805A6FEC
  c->lr=0x805A6FF4u; f_80587A48(c); // 805A6FF0
  c->f[20]=c->f[1]; // 805A6FF4
  c->r[3]=c->r[20]+0x000000BCu; // 805A6FF8
  c->lr=0x805A7000u; f_805A6BF4(c); // 805A6FFC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[20]); // 805A7000
  c->r[3]=c->r[20]+0x000000D0u; // 805A7004
  c->r[4]=c->r[1]+0x00000048u; // 805A7008
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 805A700C
  c->lr=0x805A7014u; f_80579C6C(c); // 805A7010
L_805A7014:;
  c->r[3]=c->r[16]+0x00000008u; // 805A7014
  c->lr=0x805A701Cu; f_80579E50(c); // 805A7018
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 805A701C
  c->r[3]=c->r[20]+0x00000010u; // 805A7020
  c->lr=0x805A7028u; f_805A6C0C(c); // 805A7024
  c->r[4]=c->r[1]+0x00000060u; // 805A7028
  c->r[5]=c->r[20]+0x000000D0u; // 805A702C
  c->r[3]=c->r[3]+0x00000010u; // 805A7030
  c->lr=0x805A7038u; f_80532898(c); // 805A7034
  c->r[3]=c->r[16]+0x0000000Cu; // 805A7038
  c->lr=0x805A7040u; f_8052F4AC(c); // 805A703C
  c->f[20]=c->f[1]; // 805A7040
  c->r[3]=c->r[20]+0x00000010u; // 805A7044
  c->lr=0x805A704Cu; f_805A6C0C(c); // 805A7048
  c->r[4]=0u+0x00000003u; // 805A704C
  c->r[3]=c->r[3]+0x00000010u; // 805A7050
  c->lr=0x805A7058u; f_8053BAE8(c); // 805A7054
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7058
  c->r[3]=c->r[20]+0x00000010u; // 805A705C
  c->lr=0x805A7064u; f_805A6C0C(c); // 805A7060
  c->r[4]=c->r[3]|c->r[3]; // 805A7064
  c->r[3]=c->r[1]+0x00000130u; // 805A7068
  c->r[4]=c->r[4]+0x00000030u; // 805A706C
  c->lr=0x805A7074u; f_8035CF74(c); // 805A7070
  c->r[3]=c->r[20]+0x00000010u; // 805A7074
  c->lr=0x805A707Cu; f_805A6C0C(c); // 805A7078
  c->r[3]=c->r[3]+0x00000020u; // 805A707C
  c->r[4]=c->r[1]+0x00000130u; // 805A7080
  c->lr=0x805A7088u; f_805A6BE0(c); // 805A7084
  c->r[3]=c->r[1]+0x00000140u; // 805A7088
  c->lr=0x805A7090u; f_805A6BDC(c); // 805A708C
  c->r[3]=c->r[16]+0x00000008u; // 805A7090
  c->lr=0x805A7098u; f_8052F4AC(c); // 805A7094
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[1]); // 805A7098
  c->r[4]=c->r[1]+0x00000064u; // 805A709C
  c->r[3]=c->r[1]+0x00000140u; // 805A70A0
  c->r[5]=c->r[20]+0x000000E0u; // 805A70A4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 805A70A8
  c->lr=0x805A70B0u; f_80532734(c); // 805A70AC
  c->r[3]=c->r[1]+0x00000140u; // 805A70B0
  c->lr=0x805A70B8u; f_8053D124(c); // 805A70B4
  c->f[21]=c->ps1[21]=S(c->f[26]*c->f[1]); // 805A70B8
  c->r[3]=c->r[20]+0x000000BDu; // 805A70BC
  c->lr=0x805A70C4u; f_805A6BF4(c); // 805A70C0
  c->f[20]=c->f[1]; // 805A70C4
  c->r[3]=c->r[16]+0x00000008u; // 805A70C8
  c->lr=0x805A70D0u; f_80579E50(c); // 805A70CC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[20]); // 805A70D0
  {uint32_t ea=c->r[2]+0x0000284Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805A70D4
  c->lr=0x805A70DCu; f_80585D7C(c); // 805A70D8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 805A70DC
  c->f[20]=c->f[1]; // 805A70E0
  fcmp(c,0,c->f[21],c->f[0]); // 805A70E4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 805A70E8
  if (!crb(c,2)) { goto L_805A7118; } // 805A70EC
  c->f[2]=c->ps1[2]=S(c->f[21]*c->f[21]); // 805A70F0
  c->r[3]=c->r[1]+0x00000140u; // 805A70F4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[21],-c->f[29])); // 805A70F8
  c->r[4]=0u+0x00000003u; // 805A70FC
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[21]); // 805A7100
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A7104
  c->f[20]=c->ps1[20]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A7108
  c->lr=0x805A7110u; f_8053BAE8(c); // 805A710C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7110
  goto L_805A7168; // 805A7114
L_805A7118:;
  c->f[1]=c->f[21]; // 805A7118
  c->lr=0x805A7120u; f_80587A48(c); // 805A711C
  c->f[0]=c->ps1[0]=S(c->f[20]*c->f[1]); // 805A7120
  c->r[3]=c->r[20]+0x000000E0u; // 805A7124
  c->r[4]=c->r[1]+0x0000004Cu; // 805A7128
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 805A712C
  c->lr=0x805A7134u; f_80579C6C(c); // 805A7130
  c->r[3]=c->r[1]+0x00000140u; // 805A7134
  c->r[4]=c->r[1]+0x0000004Cu; // 805A7138
  c->lr=0x805A7140u; f_80579C6C(c); // 805A713C
  c->f[21]=c->ps1[21]=S(c->f[20]*c->f[20]); // 805A7140
  c->r[3]=c->r[1]+0x00000140u; // 805A7144
  c->r[4]=0u+0x00000003u; // 805A7148
  c->f[2]=c->ps1[2]=S(c->f[21]*c->f[21]); // 805A714C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[21],-c->f[29])); // 805A7150
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[21]); // 805A7154
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A7158
  c->f[20]=c->ps1[20]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A715C
  c->lr=0x805A7164u; f_8053BAE8(c); // 805A7160
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7164
L_805A7168:;
  c->r[3]=c->r[1]+0x00000130u; // 805A7168
  c->r[4]=c->r[1]+0x00000140u; // 805A716C
  c->r[5]=c->r[3]|c->r[3]; // 805A7170
  c->lr=0x805A7178u; f_805A6B38(c); // 805A7174
  c->r[3]=c->r[1]+0x00000130u; // 805A7178
  c->lr=0x805A7180u; f_805A6ADC(c); // 805A717C
  c->r[4]=c->r[1]+0x00000140u; // 805A7180
  c->r[3]=c->r[20]+0x000000A0u; // 805A7184
  c->r[5]=c->r[4]|c->r[4]; // 805A7188
  c->lr=0x805A7190u; f_80532910(c); // 805A718C
  c->f[1]=c->f[21]; // 805A7190
  c->lr=0x805A7198u; f_8053D0E4(c); // 805A7194
  c->f[20]=c->ps1[20]=S(c->f[31]*c->f[1]); // 805A7198
  c->r[3]=c->r[20]+0x000000A0u; // 805A719C
  c->r[4]=0u+0x00000003u; // 805A71A0
  c->lr=0x805A71A8u; f_8053BAE8(c); // 805A71A4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A71A8
  c->r[3]=c->r[20]+0x00000010u; // 805A71AC
  c->lr=0x805A71B4u; f_805A6C0C(c); // 805A71B0
  c->r[3]=c->r[3]+0x00000030u; // 805A71B4
  c->r[4]=c->r[1]+0x00000130u; // 805A71B8
  c->lr=0x805A71C0u; f_805A6BE0(c); // 805A71BC
  c->r[3]=c->r[20]+0x00000010u; // 805A71C0
  c->lr=0x805A71C8u; f_805A6AD8(c); // 805A71C4
  c->r[24]=c->r[3]|c->r[3]; // 805A71C8
  c->r[3]=c->r[20]+0x00000010u; // 805A71CC
  c->lr=0x805A71D4u; f_805A6C0C(c); // 805A71D0
  c->r[4]=c->r[24]|c->r[24]; // 805A71D4
  c->lr=0x805A71DCu; f_805A6A14(c); // 805A71D8
  c->r[4]=c->r[20]+0x00000010u; // 805A71DC
  {uint32_t ea=c->r[1]+0x00000180u; psq_load(c,1,ea,0,0);} // 805A71E0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,7,ea,0,0);} // 805A71E4
  c->r[3]=c->r[4]+0x00000010u; // 805A71E8
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A71EC
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,6,ea,0,0);} // 805A71F0
  {double t0=c->f[7], t1=c->ps1[7]; c->f[2]=t0; c->ps1[2]=t1;} // 805A71F4
  {uint32_t ea=c->r[20]+0x00000010u; psq_load(c,3,ea,0,0);} // 805A71F8
  {uint32_t ea=c->r[1]+0x00000188u; c->f[22]=c->ps1[22]=RF32(ea);} // 805A71FC
  c->r[5]=c->r[4]+0x00000020u; // 805A7200
  {double t0=S(c->ps1[3]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A7204
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 805A7208
  {double t0=S(c->f[3]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805A720C
  {uint32_t ea=c->r[5]+c->r[30]; psq_load(c,4,ea,0,0);} // 805A7210
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7214
  {uint32_t ea=c->r[4]+c->r[30]; psq_load(c,8,ea,0,0);} // 805A7218
  {double t0=c->f[5], t1=c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 805A721C
  c->r[5]=c->r[28]|c->r[28]; // 805A7220
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[3]=t0; c->ps1[3]=t1;} // 805A7224
  c->r[3]=c->r[20]+0x000000E0u; // 805A7228
  {double t0=S(c->f[8]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 805A722C
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805A7230
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 805A7234
  {double t0=S(c->f[22]), t1=S(c->f[22]); c->f[22]=t0; c->ps1[22]=t1;} // 805A7238
  {double t0=S(std::fma(c->f[7],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[7],c->ps1[0],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A723C
  {double t0=S(std::fma(c->f[6],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[6],c->ps1[0],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A7240
  {double t0=S(std::fma(c->f[5],c->f[22],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[22],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A7244
  {double t0=S(std::fma(c->f[4],c->f[22],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[22],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A7248
  {uint32_t ea=0u+c->r[28]; psq_store(c,3,ea,0,0);} // 805A724C
  {uint32_t ea=c->r[28]+c->r[30]; psq_store(c,2,ea,0,0);} // 805A7250
  {uint32_t ea=c->r[20]+0x000000C0u; psq_load(c,1,ea,0,0);} // 805A7254
  {uint32_t ea=c->r[20]+0x000000C8u; psq_load(c,0,ea,0,0);} // 805A7258
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A725C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7260
  {uint32_t ea=0u+c->r[28]; psq_store(c,1,ea,0,0);} // 805A7264
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,0,ea,0,0);} // 805A7268
  c->lr=0x805A7270u; f_8062AD3C(c); // 805A726C
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A7270
  c->r[3]=c->r[20]+0x000000D0u; // 805A7274
  {uint32_t ea=c->r[20]+0x000000E0u; psq_load(c,3,ea,0,0);} // 805A7278
  c->r[4]=c->r[20]+0x000000E0u; // 805A727C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7280
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A7284
  c->r[0]=R8(c->r[20]+0x000000BCu); // 805A7288
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A728C
  {uint32_t ea=c->r[4]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A7290
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A7294
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A7298
  c->r[0]=R8(c->r[20]+0x000000BDu); // 805A729C
  {uint32_t ea=c->r[14]+c->r[3]; c->f[4]=c->ps1[4]=RF32(ea);} // 805A72A0
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 805A72A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A72A8
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 805A72AC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 805A72B0
  {uint32_t ea=c->r[14]+c->r[0]; c->f[5]=c->ps1[5]=RF32(ea);} // 805A72B4
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[3]); c->f[7]=t0; c->ps1[7]=t1;} // 805A72B8
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[5]); // 805A72BC
  fcmp(c,0,c->f[6],c->f[0]); // 805A72C0
  if (crb(c,1)) { goto L_805A72D0; } // 805A72C4
  fcmp(c,0,c->f[6],c->f[6]); // 805A72C8
  if (crb(c,2)) { goto L_805A732C; } // 805A72CC
L_805A72D0:;
  c->f[3]=frsqrte(c->f[6]); // 805A72D0
  c->r[0]=R8(c->r[20]+0x000000BCu); // 805A72D4
  c->r[3]=c->r[20]+0x000000D0u; // 805A72D8
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,5,ea,0,0);} // 805A72DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A72E0
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,4,ea,0,0);} // 805A72E4
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805A72E8
  {uint32_t ea=c->r[14]+c->r[0]; c->f[8]=c->ps1[8]=RF32(ea);} // 805A72EC
  fcmp(c,0,c->f[6],c->f[6]); // 805A72F0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 805A72F4
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[3]); // 805A72F8
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[6],c->f[1],-c->f[29])); // 805A72FC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[3])); // 805A7300
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 805A7304
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7308
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A730C
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A7310
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A7314
  if (crb(c,2)) { goto L_805A732C; } // 805A7318
  {uint32_t ea=0u+c->r[23]; psq_load(c,0,ea,0,0);} // 805A731C
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,0,ea,0,0);} // 805A7320
  {uint32_t ea=c->r[23]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A7324
  {uint32_t ea=c->r[20]+0x000000D8u; psq_store(c,0,ea,0,0);} // 805A7328
L_805A732C:;
  fcmp(c,0,c->f[7],c->f[2]); // 805A732C
  if (crb(c,1)) { goto L_805A733C; } // 805A7330
  fcmp(c,0,c->f[7],c->f[7]); // 805A7334
  if (crb(c,2)) { goto L_805A7764; } // 805A7338
L_805A733C:;
  c->f[2]=frsqrte(c->f[7]); // 805A733C
  c->r[0]=R8(c->r[20]+0x000000BDu); // 805A7340
  c->r[3]=c->r[20]+0x000000E0u; // 805A7344
  {uint32_t ea=c->r[20]+0x000000E0u; psq_load(c,4,ea,0,0);} // 805A7348
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A734C
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,3,ea,0,0);} // 805A7350
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805A7354
  {uint32_t ea=c->r[14]+c->r[0]; c->f[5]=c->ps1[5]=RF32(ea);} // 805A7358
  fcmp(c,0,c->f[7],c->f[7]); // 805A735C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 805A7360
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[2]); // 805A7364
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[7],c->f[1],-c->f[29])); // 805A7368
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 805A736C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 805A7370
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7374
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7378
  {uint32_t ea=c->r[20]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A737C
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A7380
  if (crb(c,2)) { goto L_805A7764; } // 805A7384
  {uint32_t ea=0u+c->r[23]; psq_load(c,0,ea,0,0);} // 805A7388
  {uint32_t ea=c->r[20]+0x000000E0u; psq_store(c,0,ea,0,0);} // 805A738C
  {uint32_t ea=c->r[23]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A7390
  {uint32_t ea=c->r[20]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A7394
  goto L_805A7764; // 805A7398
L_805A739C:;
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A739C
  c->r[3]=c->r[20]+0x000000D0u; // 805A73A0
  {uint32_t ea=0u+c->r[17]; psq_load(c,3,ea,0,0);} // 805A73A4
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,0,ea,0,0);} // 805A73A8
  {uint32_t ea=c->r[17]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A73AC
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,1,ea,0,0);} // 805A73B0
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A73B4
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,0,ea,0,0);} // 805A73B8
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A73BC
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A73C0
L_805A73C4:;
  {uint32_t ea=c->r[16]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A73C4
  {uint32_t ea=c->r[20]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A73C8
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[29])); // 805A73CC
  fcmp(c,0,c->f[24],c->f[0]); // 805A73D0
  if (!crb(c,1)) { goto L_805A73DC; } // 805A73D4
  c->f[0]=c->f[24]; // 805A73D8
L_805A73DC:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A73DC
  {uint32_t ea=c->r[20]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A73E0
  c->r[3]=c->r[20]+0x000000D0u; // 805A73E4
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A73E8
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A73EC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A73F0
  {uint32_t ea=c->r[20]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A73F4
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A73F8
  {uint32_t ea=c->r[20]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A73FC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[29])); // 805A7400
  fcmp(c,0,c->f[24],c->f[0]); // 805A7404
  if (!crb(c,1)) { goto L_805A7410; } // 805A7408
  c->f[0]=c->f[24]; // 805A740C
L_805A7410:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A7410
  {uint32_t ea=c->r[20]+0x000000E0u; psq_load(c,1,ea,0,0);} // 805A7414
  c->r[3]=c->r[20]+0x000000E0u; // 805A7418
  {uint32_t ea=c->r[3]+c->r[30]; psq_load(c,2,ea,0,0);} // 805A741C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7420
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7424
  {uint32_t ea=c->r[20]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A7428
  {uint32_t ea=c->r[3]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A742C
L_805A7430:;
  c->r[3]=c->r[1]+0x000000B0u; // 805A7430
  c->r[4]=c->r[20]+0x000000D0u; // 805A7434
  c->lr=0x805A743Cu; f_8053BCAC(c); // 805A7438
  c->r[3]=c->r[1]+0x000000C0u; // 805A743C
  c->r[4]=c->r[20]+0x000000E0u; // 805A7440
  c->lr=0x805A7448u; f_8053BCAC(c); // 805A7444
  c->r[3]=c->r[1]+0x000000D0u; // 805A7448
  c->lr=0x805A7450u; f_805A6C28(c); // 805A744C
  c->r[4]=0u+0x80860000u; // 805A7450
  c->r[4]=c->r[4]+0xFFFFDC00u; // 805A7454
  c->lr=0x805A745Cu; f_805A6C14(c); // 805A7458
  c->r[3]=c->r[1]+0x000000C0u; // 805A745C
  c->r[4]=c->r[1]+0x000000D0u; // 805A7460
  c->lr=0x805A7468u; f_8052B720(c); // 805A7464
  W32(c->r[1]+0x00000034u,c->r[3]); // 805A7468
  c->r[3]=c->r[1]+0x000000B0u; // 805A746C
  c->r[4]=c->r[1]+0x000000D0u; // 805A7470
  c->lr=0x805A7478u; f_8052B720(c); // 805A7474
  W32(c->r[1]+0x00000030u,c->r[3]); // 805A7478
  c->r[3]=c->r[1]+0x00000034u; // 805A747C
  c->lr=0x805A7484u; f_80585D8C(c); // 805A7480
  c->r[24]=c->r[3]|c->r[3]; // 805A7484
  c->r[3]=c->r[1]+0x00000030u; // 805A7488
  c->lr=0x805A7490u; f_80585D8C(c); // 805A748C
  c->r[25]=c->r[3]&c->r[24]; // 805A7490
  c->r[3]=c->r[20]+0x000000E0u; // 805A7494
  c->r[4]=c->r[3]|c->r[3]; // 805A7498
  c->lr=0x805A74A0u; f_8052BAE8(c); // 805A749C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 805A74A0
  c->r[3]=c->r[20]+0x000000D0u; // 805A74A4
  c->r[4]=c->r[3]|c->r[3]; // 805A74A8
  c->lr=0x805A74B0u; f_8052BAE8(c); // 805A74AC
  W32(c->r[1]+0x00000038u,c->r[3]); // 805A74B0
  c->r[3]=c->r[1]+0x0000003Cu; // 805A74B4
  c->lr=0x805A74BCu; f_80585D8C(c); // 805A74B8
  c->r[24]=c->r[3]|c->r[3]; // 805A74BC
  c->r[3]=c->r[1]+0x00000038u; // 805A74C0
  c->lr=0x805A74C8u; f_80585D8C(c); // 805A74C4
  c->r[0]=c->r[3]&c->r[24]; // 805A74C8
  c->r[25]=c->r[25]&c->r[0]; // 805A74CC
  c->r[0]=rotl(c->r[25],0)&0x0000000Eu; // 805A74D0
  cmps(c,0,(int32_t)c->r[0],14); // 805A74D4
  if (crb(c,2)) { goto L_805A750C; } // 805A74D8
  c->lr=0x805A74E0u; f_80576004(c); // 805A74DC
  c->r[4]=0u+0x00000000u; // 805A74E0
  c->lr=0x805A74E8u; f_8053BADC(c); // 805A74E4
  c->r[4]=c->r[3]|c->r[3]; // 805A74E8
  c->r[3]=c->r[20]+0x000000D0u; // 805A74EC
  c->lr=0x805A74F4u; f_8052BCBC(c); // 805A74F0
  c->lr=0x805A74F8u; f_80576004(c); // 805A74F4
  c->r[4]=0u+0x00000000u; // 805A74F8
  c->lr=0x805A7500u; f_8053BADC(c); // 805A74FC
  c->r[4]=c->r[3]|c->r[3]; // 805A7500
  c->r[3]=c->r[20]+0x000000E0u; // 805A7504
  c->lr=0x805A750Cu; f_8052BCBC(c); // 805A7508
L_805A750C:;
  c->r[3]=c->r[20]+0x00000010u; // 805A750C
  c->lr=0x805A7514u; f_805A6C0C(c); // 805A7510
  c->r[24]=c->r[3]|c->r[3]; // 805A7514
  c->r[3]=c->r[20]+0x00000010u; // 805A7518
  c->lr=0x805A7520u; f_805A6C0C(c); // 805A751C
  c->r[4]=c->r[24]+0x00000010u; // 805A7520
  c->lr=0x805A7528u; f_8052BCBC(c); // 805A7524
  c->r[3]=c->r[16]|c->r[16]; // 805A7528
  c->lr=0x805A7530u; f_8052F4AC(c); // 805A752C
  c->f[20]=c->f[1]; // 805A7530
  c->r[3]=c->r[20]+0x00000010u; // 805A7534
  c->lr=0x805A753Cu; f_805A6C0C(c); // 805A7538
  c->r[4]=0u+0x00000003u; // 805A753C
  c->lr=0x805A7544u; f_8053BAE8(c); // 805A7540
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7544
  c->r[3]=c->r[20]+0x000000D0u; // 805A7548
  c->lr=0x805A7550u; f_8053D124(c); // 805A754C
  c->f[21]=c->f[1]; // 805A7550
  c->r[3]=c->r[20]+0x000000BCu; // 805A7554
  c->lr=0x805A755Cu; f_805A6BF4(c); // 805A7558
  c->f[20]=c->f[1]; // 805A755C
  c->r[3]=c->r[20]+0x000000BCu; // 805A7560
  c->lr=0x805A7568u; f_805A6BF4(c); // 805A7564
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[20]); // 805A7568
  fcmp(c,0,c->f[21],c->f[0]); // 805A756C
  if (!crb(c,1)) { goto L_805A759C; } // 805A7570
  c->f[1]=c->f[21]; // 805A7574
  c->lr=0x805A757Cu; f_80587A48(c); // 805A7578
  c->f[20]=c->f[1]; // 805A757C
  c->r[3]=c->r[20]+0x000000BCu; // 805A7580
  c->lr=0x805A7588u; f_805A6BF4(c); // 805A7584
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[20]); // 805A7588
  c->r[3]=c->r[20]+0x000000D0u; // 805A758C
  c->r[4]=c->r[1]+0x00000028u; // 805A7590
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 805A7594
  c->lr=0x805A759Cu; f_80579C6C(c); // 805A7598
L_805A759C:;
  c->r[3]=c->r[16]+0x00000008u; // 805A759C
  c->lr=0x805A75A4u; f_80579E50(c); // 805A75A0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 805A75A4
  c->r[3]=c->r[20]+0x00000010u; // 805A75A8
  c->lr=0x805A75B0u; f_805A6C0C(c); // 805A75AC
  c->r[4]=c->r[1]+0x00000040u; // 805A75B0
  c->r[5]=c->r[20]+0x000000D0u; // 805A75B4
  c->r[3]=c->r[3]+0x00000010u; // 805A75B8
  c->lr=0x805A75C0u; f_80532898(c); // 805A75BC
  c->r[3]=c->r[16]+0x0000000Cu; // 805A75C0
  c->lr=0x805A75C8u; f_8052F4AC(c); // 805A75C4
  c->f[20]=c->f[1]; // 805A75C8
  c->r[3]=c->r[20]+0x00000010u; // 805A75CC
  c->lr=0x805A75D4u; f_805A6C0C(c); // 805A75D0
  c->r[4]=0u+0x00000003u; // 805A75D4
  c->r[3]=c->r[3]+0x00000010u; // 805A75D8
  c->lr=0x805A75E0u; f_8053BAE8(c); // 805A75DC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A75E0
  c->r[3]=c->r[20]+0x00000010u; // 805A75E4
  c->lr=0x805A75ECu; f_805A6C0C(c); // 805A75E8
  c->r[4]=c->r[3]|c->r[3]; // 805A75EC
  c->r[3]=c->r[1]+0x000000E0u; // 805A75F0
  c->r[4]=c->r[4]+0x00000030u; // 805A75F4
  c->lr=0x805A75FCu; f_8035CF74(c); // 805A75F8
  c->r[3]=c->r[20]+0x00000010u; // 805A75FC
  c->lr=0x805A7604u; f_805A6C0C(c); // 805A7600
  c->r[3]=c->r[3]+0x00000020u; // 805A7604
  c->r[4]=c->r[1]+0x000000E0u; // 805A7608
  c->lr=0x805A7610u; f_805A6BE0(c); // 805A760C
  c->r[3]=c->r[1]+0x000000F0u; // 805A7610
  c->lr=0x805A7618u; f_805A6BDC(c); // 805A7614
  c->r[3]=c->r[16]+0x00000008u; // 805A7618
  c->lr=0x805A7620u; f_8052F4AC(c); // 805A761C
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[1]); // 805A7620
  c->r[4]=c->r[1]+0x00000044u; // 805A7624
  c->r[3]=c->r[1]+0x000000F0u; // 805A7628
  c->r[5]=c->r[20]+0x000000E0u; // 805A762C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 805A7630
  c->lr=0x805A7638u; f_80532734(c); // 805A7634
  c->r[3]=c->r[1]+0x000000F0u; // 805A7638
  c->lr=0x805A7640u; f_8053D124(c); // 805A763C
  c->f[21]=c->ps1[21]=S(c->f[26]*c->f[1]); // 805A7640
  c->r[3]=c->r[20]+0x000000BDu; // 805A7644
  c->lr=0x805A764Cu; f_805A6BF4(c); // 805A7648
  c->f[20]=c->f[1]; // 805A764C
  c->r[3]=c->r[16]+0x00000008u; // 805A7650
  c->lr=0x805A7658u; f_80579E50(c); // 805A7654
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[20]); // 805A7658
  {uint32_t ea=c->r[2]+0x0000284Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805A765C
  c->lr=0x805A7664u; f_80585D7C(c); // 805A7660
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 805A7664
  c->f[20]=c->f[1]; // 805A7668
  fcmp(c,0,c->f[21],c->f[0]); // 805A766C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 805A7670
  if (!crb(c,2)) { goto L_805A76A0; } // 805A7674
  c->f[2]=c->ps1[2]=S(c->f[21]*c->f[21]); // 805A7678
  c->r[3]=c->r[1]+0x000000F0u; // 805A767C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[21],-c->f[29])); // 805A7680
  c->r[4]=0u+0x00000003u; // 805A7684
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[21]); // 805A7688
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A768C
  c->f[20]=c->ps1[20]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A7690
  c->lr=0x805A7698u; f_8053BAE8(c); // 805A7694
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7698
  goto L_805A76F0; // 805A769C
L_805A76A0:;
  c->f[1]=c->f[21]; // 805A76A0
  c->lr=0x805A76A8u; f_80587A48(c); // 805A76A4
  c->f[0]=c->ps1[0]=S(c->f[20]*c->f[1]); // 805A76A8
  c->r[3]=c->r[20]+0x000000E0u; // 805A76AC
  c->r[4]=c->r[1]+0x0000002Cu; // 805A76B0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 805A76B4
  c->lr=0x805A76BCu; f_80579C6C(c); // 805A76B8
  c->r[3]=c->r[1]+0x000000F0u; // 805A76BC
  c->r[4]=c->r[1]+0x0000002Cu; // 805A76C0
  c->lr=0x805A76C8u; f_80579C6C(c); // 805A76C4
  c->f[21]=c->ps1[21]=S(c->f[20]*c->f[20]); // 805A76C8
  c->r[3]=c->r[1]+0x000000F0u; // 805A76CC
  c->r[4]=0u+0x00000003u; // 805A76D0
  c->f[2]=c->ps1[2]=S(c->f[21]*c->f[21]); // 805A76D4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[21],-c->f[29])); // 805A76D8
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[21]); // 805A76DC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A76E0
  c->f[20]=c->ps1[20]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A76E4
  c->lr=0x805A76ECu; f_8053BAE8(c); // 805A76E8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A76EC
L_805A76F0:;
  c->r[3]=c->r[1]+0x000000E0u; // 805A76F0
  c->r[4]=c->r[1]+0x000000F0u; // 805A76F4
  c->r[5]=c->r[3]|c->r[3]; // 805A76F8
  c->lr=0x805A7700u; f_805A6B38(c); // 805A76FC
  c->r[3]=c->r[1]+0x000000E0u; // 805A7700
  c->lr=0x805A7708u; f_805A6ADC(c); // 805A7704
  c->r[4]=c->r[1]+0x000000F0u; // 805A7708
  c->r[3]=c->r[20]+0x000000A0u; // 805A770C
  c->r[5]=c->r[4]|c->r[4]; // 805A7710
  c->lr=0x805A7718u; f_80532910(c); // 805A7714
  c->f[1]=c->f[21]; // 805A7718
  c->lr=0x805A7720u; f_8053D0E4(c); // 805A771C
  c->f[20]=c->ps1[20]=S(c->f[31]*c->f[1]); // 805A7720
  c->r[3]=c->r[20]+0x000000A0u; // 805A7724
  c->r[4]=0u+0x00000003u; // 805A7728
  c->lr=0x805A7730u; f_8053BAE8(c); // 805A772C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[20]);} // 805A7730
  c->r[3]=c->r[20]+0x00000010u; // 805A7734
  c->lr=0x805A773Cu; f_805A6C0C(c); // 805A7738
  c->r[3]=c->r[3]+0x00000030u; // 805A773C
  c->r[4]=c->r[1]+0x000000E0u; // 805A7740
  c->lr=0x805A7748u; f_805A6BE0(c); // 805A7744
  c->r[3]=c->r[20]+0x00000010u; // 805A7748
  c->lr=0x805A7750u; f_805A6AD8(c); // 805A774C
  c->r[24]=c->r[3]|c->r[3]; // 805A7750
  c->r[3]=c->r[20]+0x00000010u; // 805A7754
  c->lr=0x805A775Cu; f_805A6C0C(c); // 805A7758
  c->r[4]=c->r[24]|c->r[24]; // 805A775C
  c->lr=0x805A7764u; f_805A6A14(c); // 805A7760
L_805A7764:;
  c->r[3]=c->r[20]|c->r[20]; // 805A7764
  c->r[4]=0u+0x00000000u; // 805A7768
  c->lr=0x805A7770u; f_805A7BD4(c); // 805A776C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 805A7770
  c->r[3]=c->r[1]+0x0000001Cu; // 805A7774
  c->lr=0x805A777Cu; f_805A7BD0(c); // 805A7778
  c->r[3]=c->r[20]|c->r[20]; // 805A777C
  c->r[4]=0u+0x00000001u; // 805A7780
  c->lr=0x805A7788u; f_805A7BD4(c); // 805A7784
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A7788
  c->r[3]=c->r[1]+0x00000020u; // 805A778C
  c->lr=0x805A7794u; f_805A7BD0(c); // 805A7790
  c->r[0]=R8(c->r[20]+0x00000009u); // 805A7794
  c->r[3]=c->r[1]+0x00000010u; // 805A7798
  W32(c->r[1]+0x00000010u,c->r[0]); // 805A779C
  c->lr=0x805A77A4u; f_805A7BCC(c); // 805A77A0
  c->r[3]=R32(c->r[1]+0x00000010u); // 805A77A4
  c->r[0]=c->r[3]+0x00000001u; // 805A77A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 805A77AC
  W8(c->r[20]+0x00000009u,c->r[0]); // 805A77B0
  c->r[3]=R32(c->r[1]+0x00000010u); // 805A77B4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 805A77B8
  if (!crb(c,2)) { goto L_805A799C; } // 805A77BC
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; cr0(c,c->r[0]); // 805A77C0
  if (crb(c,2)) { goto L_805A77D4; } // 805A77C4
  c->r[0]=0u+0x00000000u; // 805A77C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A77CC
  goto L_805A77F8; // 805A77D0
L_805A77D4:;
  cmpu(c,0,c->r[3],0x00000100u); // 805A77D4
  if (!crb(c,2)) { goto L_805A77E8; } // 805A77D8
  c->r[0]=0u+0x000000FFu; // 805A77DC
  W8(c->r[20]+0x00000009u,c->r[0]); // 805A77E0
  goto L_805A799C; // 805A77E4
L_805A77E8:;
  c->r[0]=0u+0x00000000u; // 805A77E8
  W8(c->r[20]+0x00000009u,c->r[0]); // 805A77EC
  c->r[0]=0u+0x00000001u; // 805A77F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A77F4
L_805A77F8:;
  {uint32_t ea=c->r[2]+0x00002838u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A77F8
  {uint32_t ea=c->r[20]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A77FC
  c->lr=0x805A7804u; f_80585D7C(c); // 805A7800
  c->r[3]=c->r[20]|c->r[20]; // 805A7804
  c->lr=0x805A780Cu; f_805A7B94(c); // 805A7808
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A780C
  c->r[4]=0u+0x00000003u; // 805A7810
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 805A7814
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805A7818
  c->r[3]=c->r[20]+c->r[0]; // 805A781C
  c->r[3]=c->r[3]+0x000000F0u; // 805A7820
  c->lr=0x805A7828u; f_8053BAE8(c); // 805A7824
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A7828
  c->r[24]=c->r[3]|c->r[3]; // 805A782C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A7830
  c->lr=0x805A7838u; f_8057B878(c); // 805A7834
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[1]);} // 805A7838
  c->r[3]=c->r[1]+0x00000018u; // 805A783C
  c->lr=0x805A7844u; f_805A7B90(c); // 805A7840
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A7844
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805A7848
  c->r[3]=c->r[20]+c->r[0]; // 805A784C
  c->r[24]=c->r[3]+0x000000F0u; // 805A7850
  c->r[3]=c->r[24]|c->r[24]; // 805A7854
  c->lr=0x805A785Cu; f_80585D94(c); // 805A7858
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A785C
  c->r[3]=c->r[20]+0x00000010u; // 805A7860
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A7864
  c->r[31]=c->r[20]+c->r[0]; // 805A7868
  c->lr=0x805A7870u; f_805A6C0C(c); // 805A786C
  c->r[4]=R8(c->r[20]+0x000000BEu); // 805A7870
  c->r[25]=c->r[3]+0x00000010u; // 805A7874
  c->r[26]=c->r[3]+0x00000030u; // 805A7878
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A787C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 805A7880
  c->r[4]=c->r[24]|c->r[24]; // 805A7884
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A7888
  c->r[5]=c->r[25]|c->r[25]; // 805A788C
  c->r[6]=c->r[15]+c->r[3]; // 805A7890
  c->r[27]=c->r[6]+0x00000064u; // 805A7894
  c->r[3]=c->r[1]+0x00000070u; // 805A7898
  c->r[6]=c->r[27]+c->r[0]; // 805A789C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[20]=c->ps1[20]=RF32(ea);} // 805A78A0
  c->lr=0x805A78A8u; f_8052C95C(c); // 805A78A4
  c->r[3]=c->r[1]+0x00000070u; // 805A78A8
  c->lr=0x805A78B0u; f_8053D124(c); // 805A78AC
  fcmp(c,0,c->f[1],c->f[20]); // 805A78B0
  if (crb(c,1)) { goto L_805A793C; } // 805A78B4
  c->r[3]=c->r[1]+0x00000080u; // 805A78B8
  c->lr=0x805A78C0u; f_805A6BDC(c); // 805A78BC
  c->r[3]=R32(c->r[31]+0x00000110u); // 805A78C0
  c->r[4]=c->r[1]+0x00000080u; // 805A78C4
  c->lr=0x805A78CCu; f_805A7AF0(c); // 805A78C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A78CC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 805A78D0
  c->r[3]=c->r[27]+c->r[0]; // 805A78D4
  c->r[3]=c->r[3]+0x00000018u; // 805A78D8
  c->lr=0x805A78E0u; f_805A7AD4(c); // 805A78DC
  c->f[21]=c->f[1]; // 805A78E0
  c->r[5]=c->r[26]|c->r[26]; // 805A78E4
  c->r[3]=c->r[1]+0x00000090u; // 805A78E8
  c->r[4]=c->r[1]+0x00000080u; // 805A78EC
  c->lr=0x805A78F4u; f_8052C95C(c); // 805A78F0
  c->r[3]=c->r[1]+0x00000090u; // 805A78F4
  c->lr=0x805A78FCu; f_805A7ABC(c); // 805A78F8
  fcmp(c,0,c->f[1],c->f[21]); // 805A78FC
  if (crb(c,1)) { goto L_805A793C; } // 805A7900
  c->r[4]=R32(c->r[1]+0x00000014u); // 805A7904
  c->r[3]=c->r[20]|c->r[20]; // 805A7908
  c->r[5]=c->r[15]+c->r[4]; // 805A790C
  c->r[5]=R8(c->r[5]+0x00000125u); // 805A7910
  c->lr=0x805A7918u; f_805A7A8C(c); // 805A7914
  c->r[3]=c->r[1]+0x00000014u; // 805A7918
  c->lr=0x805A7920u; f_805A7BD0(c); // 805A791C
  c->r[4]=R32(c->r[1]+0x00000014u); // 805A7920
  c->r[3]=c->r[20]|c->r[20]; // 805A7924
  c->lr=0x805A792Cu; f_805A7BD4(c); // 805A7928
  W32(c->r[1]+0x00000024u,c->r[3]); // 805A792C
  c->r[3]=c->r[1]+0x00000024u; // 805A7930
  c->lr=0x805A7938u; f_805A7BD0(c); // 805A7934
  goto L_805A799C; // 805A7938
L_805A793C:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 805A793C
  c->r[3]=c->r[20]|c->r[20]; // 805A7940
  c->r[5]=c->r[15]+c->r[4]; // 805A7944
  c->r[5]=R8(c->r[5]+0x00000125u); // 805A7948
  c->lr=0x805A7950u; f_805A7A70(c); // 805A794C
  c->r[5]=R32(c->r[25]+0x00000000u); // 805A7950
  c->r[3]=c->r[1]+0x000000A0u; // 805A7954
  c->r[0]=R32(c->r[25]+0x00000004u); // 805A7958
  c->r[4]=0u+0x00000003u; // 805A795C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 805A7960
  W32(c->r[1]+0x000000A0u,c->r[5]); // 805A7964
  c->r[5]=R32(c->r[25]+0x00000008u); // 805A7968
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 805A796C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 805A7970
  W32(c->r[1]+0x000000A8u,c->r[5]); // 805A7974
  c->lr=0x805A797Cu; f_805A7A60(c); // 805A7978
  c->r[3]=c->r[24]|c->r[24]; // 805A797C
  c->r[4]=c->r[1]+0x000000A0u; // 805A7980
  c->lr=0x805A7988u; f_8052BCBC(c); // 805A7984
  c->r[3]=c->r[24]|c->r[24]; // 805A7988
  c->lr=0x805A7990u; f_80585D94(c); // 805A798C
  c->r[3]=c->r[26]|c->r[26]; // 805A7990
  c->lr=0x805A7998u; f_8062AE10(c); // 805A7994
  W32(c->r[31]+0x00000110u,c->r[3]); // 805A7998
L_805A799C:;
  c->r[3]=c->r[20]|c->r[20]; // 805A799C
  c->r[4]=0u+0x00000001u; // 805A79A0
  c->lr=0x805A79A8u; f_805A7BD4(c); // 805A79A4
  c->r[24]=c->r[3]|c->r[3]; // 805A79A8
  c->r[3]=c->r[20]|c->r[20]; // 805A79AC
  c->r[4]=0u+0x00000000u; // 805A79B0
  c->lr=0x805A79B8u; f_805A7BD4(c); // 805A79B4
  c->r[4]=c->r[24]|c->r[24]; // 805A79B8
  c->lr=0x805A79C0u; f_80580800(c); // 805A79BC
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[3]); // 805A79C0
  if (!crb(c,0)) { goto L_805A79CC; } // 805A79C4
  goto L_805A79D0; // 805A79C8
L_805A79CC:;
  c->r[22]=c->r[3]|c->r[3]; // 805A79CC
L_805A79D0:;
  c->r[18]=c->r[18]+0x00000004u; // 805A79D0
  c->r[21]=c->r[21]+0xFFFFFFFFu; // 805A79D4
L_805A79D8:;
  cmps(c,0,(int32_t)c->r[21],0); // 805A79D8
  if (!crb(c,0)) { IRQCHK(c); goto L_805A6D0C; } // 805A79DC
  c->r[3]=c->r[22]|c->r[22]; // 805A79E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A79E4
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A79E8
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A79EC
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805A79F0
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805A79F4
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805A79F8
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805A79FC
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 805A7A00
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 805A7A04
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 805A7A08
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 805A7A0C
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 805A7A10
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 805A7A14
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 805A7A18
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 805A7A1C
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 805A7A20
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 805A7A24
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 805A7A28
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 805A7A2C
  {uint32_t ea=c->r[10]+0xFFFFFF68u; psq_load(c,22,ea,0,0);} // 805A7A30
  {uint32_t ea=c->r[10]+0xFFFFFF60u; c->f[22]=RF64(ea);} // 805A7A34
  {uint32_t ea=c->r[10]+0xFFFFFF58u; psq_load(c,21,ea,0,0);} // 805A7A38
  {uint32_t ea=c->r[10]+0xFFFFFF50u; c->f[21]=RF64(ea);} // 805A7A3C
  {uint32_t ea=c->r[10]+0xFFFFFF48u; psq_load(c,20,ea,0,0);} // 805A7A40
  {uint32_t ea=c->r[10]+0xFFFFFF40u; c->f[20]=RF64(ea);} // 805A7A44
  c->r[11]=c->r[10]+0xFFFFFF40u; // 805A7A48
  c->lr=0x805A7A50u; f_803A9C1C(c); // 805A7A4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A7A50
  c->lr=c->r[0]; // 805A7A54
  c->r[1]=c->r[10]|c->r[10]; // 805A7A58
  return; // 805A7A5C
}

// fn_805A7A60
void f_805A7A60(Ctx* __restrict c) {
  trace_call(0x805A7A60u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A7A60
  {uint32_t ea=c->r[2]+0x00002868u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7A64
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 805A7A68
  return; // 805A7A6C
}

// fn_805A7A70
void f_805A7A70(Ctx* __restrict c) {
  trace_call(0x805A7A70u);
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 805A7A70
  c->r[4]=rotl(c->r[5],14)&0xFFFFC000u; // 805A7A74
  c->r[3]=c->r[3]+c->r[0]; // 805A7A78
  c->r[0]=R16(c->r[3]+0x0000000Au); // 805A7A7C
  c->r[4]=(rotl(c->r[0],7)&0x00003F80u)|(c->r[4]&~0x00003F80u); // 805A7A80
  W16(c->r[3]+0x0000000Au,c->r[4]); // 805A7A84
  return; // 805A7A88
}

// fn_805A7A8C
void f_805A7A8C(Ctx* __restrict c) {
  trace_call(0x805A7A8Cu);
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 805A7A8C
  c->r[6]=c->r[3]+c->r[0]; // 805A7A90
  c->r[4]=R16(c->r[6]+0x0000000Au); // 805A7A94
  c->r[4]=rotl(c->r[4],0)&0x0000007Fu; // 805A7A98
  c->r[3]=sraw(c,c->r[4],6); // 805A7A9C
  c->r[0]=c->r[4]+0x00000001u; // 805A7AA0
  c->r[4]=rotl(c->r[4],7)&0xFFFFFF80u; // 805A7AA4
  c->r[4]=(rotl(c->r[5],14)&0xFFFFC000u)|(c->r[4]&~0xFFFFC000u); // 805A7AA8
  c->r[0]=c->r[0]-c->r[3]; // 805A7AAC
  c->r[0]=c->r[4]|c->r[0]; // 805A7AB0
  W16(c->r[6]+0x0000000Au,c->r[0]); // 805A7AB4
  return; // 805A7AB8
}

// fn_805A7ABC
void f_805A7ABC(Ctx* __restrict c) {
  trace_call(0x805A7ABCu);
  {uint32_t ea=0u+c->r[3]; psq_load(c,1,ea,0,0);} // 805A7ABC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A7AC0
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7AC4
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A7AC8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7ACC
  return; // 805A7AD0
}

// fn_805A7AD4
void f_805A7AD4(Ctx* __restrict c) {
  trace_call(0x805A7AD4u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 805A7AD4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A7AD8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 805A7ADC
  W32(c->r[1]+0x00000008u,c->r[0]); // 805A7AE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A7AE4
  c->r[1]=c->r[1]+0x00000010u; // 805A7AE8
  return; // 805A7AEC
}

// fn_805A7AF0
void f_805A7AF0(Ctx* __restrict c) {
  trace_call(0x805A7AF0u);
  c->r[6]=rotl(c->r[3],0)&0x000000FFu; // 805A7AF0
  c->r[5]=rotl(c->r[3],24)&0x000000FFu; // 805A7AF4
  c->r[6]=c->r[6]+0xFFFFFF80u; // 805A7AF8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A7AFC
  c->r[7]=0u+0x43300000u; // 805A7B00
  c->r[0]=c->r[5]+0xFFFFFF80u; // 805A7B04
  c->r[6]=c->r[6]^0x80000000u; // 805A7B08
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 805A7B0C
  c->r[5]=rotl(c->r[3],16)&0x000000FFu; // 805A7B10
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 805A7B14
  c->r[6]=c->r[0]^0x80000000u; // 805A7B18
  W32(c->r[1]+0x00000008u,c->r[7]); // 805A7B1C
  c->r[0]=c->r[3]+0xFFFFFF80u; // 805A7B20
  c->r[5]=c->r[5]+0xFFFFFF80u; // 805A7B24
  W32(c->r[1]+0x00000010u,c->r[7]); // 805A7B28
  c->r[3]=c->r[5]^0x80000000u; // 805A7B2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 805A7B30
  c->r[0]=c->r[0]^0x80000000u; // 805A7B34
  W32(c->r[1]+0x00000014u,c->r[6]); // 805A7B38
  {uint32_t ea=c->r[2]+0x00002880u; c->f[5]=RF64(ea);} // 805A7B3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 805A7B40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 805A7B44
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[5]); // 805A7B48
  {uint32_t ea=c->r[2]+0x00002878u; c->f[4]=c->ps1[4]=RF32(ea);} // 805A7B4C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 805A7B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A7B54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 805A7B58
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 805A7B5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 805A7B60
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 805A7B64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 805A7B68
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 805A7B6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 805A7B70
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[2]);} // 805A7B74
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 805A7B78
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 805A7B7C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 805A7B80
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 805A7B84
  c->r[1]=c->r[1]+0x00000020u; // 805A7B88
  return; // 805A7B8C
}

// fn_805A7B90
void f_805A7B90(Ctx* __restrict c) {
  trace_call(0x805A7B90u);
  return; // 805A7B90
}

// fn_805A7B94
void f_805A7B94(Ctx* __restrict c) {
  trace_call(0x805A7B94u);
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,2,ea,0,0);} // 805A7B94
  c->r[4]=c->r[3]+0x000000D0u; // 805A7B98
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,4,ea,0,0); c->r[3]=ea;} // 805A7B9C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 805A7BA0
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A7BA4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 805A7BA8
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805A7BAC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 805A7BB0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 805A7BB4
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 805A7BB8
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7BBC
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805A7BC0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 805A7BC4
  return; // 805A7BC8
}

// fn_805A7BCC
void f_805A7BCC(Ctx* __restrict c) {
  trace_call(0x805A7BCCu);
  return; // 805A7BCC
}

// fn_805A7BD0
void f_805A7BD0(Ctx* __restrict c) {
  trace_call(0x805A7BD0u);
  return; // 805A7BD0
}

// fn_805A7BD4
void f_805A7BD4(Ctx* __restrict c) {
  trace_call(0x805A7BD4u);
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 805A7BD4
  c->r[3]=c->r[3]+c->r[0]; // 805A7BD8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 805A7BDC
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 805A7BE0
  return; // 805A7BE4
}

// fn_805A7BE8
void f_805A7BE8(Ctx* __restrict c) {
  trace_call(0x805A7BE8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A7BE8
  c->r[12]=c->r[1]|c->r[1]; // 805A7BEC
  c->r[11]=addc(c,~c->r[11],0xFFFFFF30u,1); // 805A7BF0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A7BF4
  c->r[0]=c->lr; // 805A7BF8
  c->r[11]=c->r[12]+0xFFFFFFD0u; // 805A7BFC
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A7C00
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A7C04
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A7C08
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805A7C0C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805A7C10
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805A7C14
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805A7C18
  c->lr=0x805A7C20u; f_803A9BD0(c); // 805A7C1C
  {uint32_t ea=c->r[2]+0x00002868u; c->f[31]=c->ps1[31]=RF32(ea);} // 805A7C20
  c->r[15]=c->r[3]|c->r[3]; // 805A7C24
  {uint32_t ea=c->r[2]+0x00002838u; c->f[30]=c->ps1[30]=RF32(ea);} // 805A7C28
  c->r[16]=c->r[4]|c->r[4]; // 805A7C2C
  c->r[14]=c->r[6]|c->r[6]; // 805A7C30
  c->r[17]=c->r[7]|c->r[7]; // 805A7C34
  c->r[19]=c->r[5]+0xFFFFFFFFu; // 805A7C38
  c->r[30]=c->r[2]+0x00002888u; // 805A7C3C
  c->r[20]=0u+0x00000008u; // 805A7C40
  c->r[21]=0u+0x00000000u; // 805A7C44
  c->r[22]=0u+0x00000030u; // 805A7C48
  c->r[23]=0u+0x00000038u; // 805A7C4C
  c->r[24]=0u+0x000000D0u; // 805A7C50
  c->r[25]=0u+0x00000010u; // 805A7C54
  c->r[26]=0u+0x000000D8u; // 805A7C58
  c->r[27]=0u+0x00000018u; // 805A7C5C
  c->r[28]=0u+0x00000020u; // 805A7C60
  c->r[29]=0u+0x00000028u; // 805A7C64
  c->r[31]=0u+0x00000001u; // 805A7C68
  goto L_805A806C; // 805A7C6C
L_805A7C70:;
  c->r[0]=R32(c->r[16]+0x00000000u); // 805A7C70
  c->r[18]=c->r[0]+c->r[14]; // 805A7C74
  c->r[0]=R8(c->r[18]+0x00000008u); // 805A7C78
  cmpu(c,0,c->r[0],0x00000009u); // 805A7C7C
  if (crb(c,1)) { goto L_805A8060; } // 805A7C80
  c->r[3]=0u+0x80720000u; // 805A7C84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A7C88
  c->r[3]=c->r[3]+0x00002520u; // 805A7C8C
  c->r[3]=R32(c->r[3]+c->r[0]); // 805A7C90
  c->ctr=c->r[3]; // 805A7C94
  if (true) { switch (c->ctr) { case 0x805A7C9Cu: goto L_805A7C9C; case 0x805A7E08u: goto L_805A7E08; case 0x805A7E14u: goto L_805A7E14; case 0x805A7F64u: goto L_805A7F64; case 0x805A7FC8u: goto L_805A7FC8; case 0x805A8060u: goto L_805A8060; default: break; } dispatch(c,c->ctr); return; } // 805A7C98
L_805A7C9C:;
  {uint32_t ea=c->r[15]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A7C9C
  {uint32_t ea=c->r[18]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7CA0
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[30])); // 805A7CA4
  fcmp(c,0,c->f[31],c->f[0]); // 805A7CA8
  if (!crb(c,1)) { goto L_805A7CB4; } // 805A7CAC
  c->f[0]=c->f[31]; // 805A7CB0
L_805A7CB4:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A7CB4
  {uint32_t ea=c->r[18]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A7CB8
  c->r[3]=c->r[18]+0x000000D0u; // 805A7CBC
  {uint32_t ea=c->r[3]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7CC0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7CC4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7CC8
  {uint32_t ea=c->r[18]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A7CCC
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7CD0
  {uint32_t ea=c->r[18]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7CD4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[30])); // 805A7CD8
  fcmp(c,0,c->f[31],c->f[0]); // 805A7CDC
  if (!crb(c,1)) { goto L_805A7CE8; } // 805A7CE0
  c->f[0]=c->f[31]; // 805A7CE4
L_805A7CE8:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A7CE8
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,1,ea,0,0);} // 805A7CEC
  c->r[5]=c->r[18]+0x000000E0u; // 805A7CF0
  c->r[4]=c->r[18]+0x00000010u; // 805A7CF4
  {uint32_t ea=c->r[5]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7CF8
  c->r[3]=c->r[17]+0x00000050u; // 805A7CFC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7D00
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7D04
  {uint32_t ea=c->r[18]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A7D08
  {uint32_t ea=c->r[5]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7D0C
  c->lr=0x805A7D14u; f_80627D2C(c); // 805A7D10
  W8(c->r[17]+0x00000000u,c->r[21]); // 805A7D14
  c->r[6]=c->r[17]+0x00000050u; // 805A7D18
  {uint32_t ea=c->r[15]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A7D1C
  c->r[8]=c->r[18]+0x00000050u; // 805A7D20
  {uint32_t ea=c->r[18]+0x000000C0u; psq_load(c,0,ea,0,0);} // 805A7D24
  c->r[4]=c->r[18]+0x00000060u; // 805A7D28
  {uint32_t ea=c->r[17]+c->r[22]; psq_store(c,0,ea,0,0);} // 805A7D2C
  c->r[3]=c->r[17]+0x00000040u; // 805A7D30
  c->r[9]=c->r[6]+0x00000010u; // 805A7D34
  c->r[10]=c->r[6]+0x00000020u; // 805A7D38
  {uint32_t ea=c->r[18]+0x000000C8u; psq_load(c,0,ea,0,0);} // 805A7D3C
  c->r[5]=c->r[17]+0x00000020u; // 805A7D40
  {uint32_t ea=c->r[17]+c->r[23]; psq_store(c,0,ea,0,0);} // 805A7D44
  {uint32_t ea=c->r[18]+c->r[24]; psq_load(c,0,ea,0,0);} // 805A7D48
  {uint32_t ea=c->r[17]+c->r[25]; psq_store(c,0,ea,0,0);} // 805A7D4C
  {uint32_t ea=c->r[18]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A7D50
  {uint32_t ea=c->r[17]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A7D54
  {uint32_t ea=c->r[18]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7D58
  {uint32_t ea=c->r[18]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A7D5C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 805A7D60
  {uint32_t ea=c->r[18]+0x00000050u; psq_load(c,3,ea,0,0);} // 805A7D64
  {uint32_t ea=c->r[8]+c->r[20]; psq_load(c,4,ea,0,0);} // 805A7D68
  {uint32_t ea=c->r[18]+0x00000060u; psq_load(c,1,ea,0,0);} // 805A7D6C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805A7D70
  {uint32_t ea=c->r[4]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7D74
  c->f[5]=c->ps1[5]=S(c->f[30]-c->f[0]); // 805A7D78
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 805A7D7C
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 805A7D80
  {double t0=S(c->f[4]*c->f[5]), t1=S(c->ps1[4]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7D84
  {double t0=S(std::fma(c->f[6],c->f[1],c->f[3])), t1=S(std::fma(c->ps1[6],c->ps1[1],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 805A7D88
  {double t0=S(std::fma(c->f[6],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[6],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A7D8C
  {uint32_t ea=c->r[17]+0x00000040u; psq_store(c,1,ea,0,0);} // 805A7D90
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7D94
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,2,ea,0,0);} // 805A7D98
  {uint32_t ea=c->r[18]+0x000000E8u; c->f[29]=c->ps1[29]=RF32(ea);} // 805A7D9C
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805A7DA0
  {uint32_t ea=c->r[17]+0x00000050u; psq_load(c,1,ea,0,0);} // 805A7DA4
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A7DA8
  {uint32_t ea=c->r[6]+c->r[20]; psq_load(c,0,ea,0,0);} // 805A7DAC
  {uint32_t ea=c->r[6]+0x00000010u; psq_load(c,5,ea,0,0);} // 805A7DB0
  {double t0=S(c->f[29]), t1=S(c->f[29]); c->f[29]=t0; c->ps1[29]=t1;} // 805A7DB4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805A7DB8
  {uint32_t ea=c->r[9]+c->r[20]; psq_load(c,4,ea,0,0);} // 805A7DBC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A7DC0
  {uint32_t ea=c->r[6]+0x00000020u; psq_load(c,1,ea,0,0);} // 805A7DC4
  {uint32_t ea=c->r[10]+c->r[20]; psq_load(c,0,ea,0,0);} // 805A7DC8
  {double t0=S(std::fma(c->f[5],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A7DCC
  {double t0=S(std::fma(c->f[4],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A7DD0
  {double t0=S(std::fma(c->f[1],c->f[29],c->f[3])), t1=S(std::fma(c->ps1[1],c->ps1[29],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A7DD4
  {double t0=S(std::fma(c->f[0],c->f[29],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[29],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A7DD8
  {uint32_t ea=c->r[17]+0x00000020u; psq_store(c,3,ea,0,0);} // 805A7DDC
  {uint32_t ea=c->r[5]+c->r[20]; psq_store(c,2,ea,0,0);} // 805A7DE0
  W8(c->r[17]+0x00000001u,c->r[21]); // 805A7DE4
  c->r[0]=R8(c->r[18]+0x000000BEu); // 805A7DE8
  W32(c->r[17]+0x00000004u,c->r[0]); // 805A7DEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[18]+0x0000011Eu); // 805A7DF0
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 805A7DF4
  W32(c->r[1]+0x00000018u,c->r[0]); // 805A7DF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7DFC
  {uint32_t ea=c->r[17]+0x00000008u; WF32(ea,c->f[0]);} // 805A7E00
  goto L_805A8060; // 805A7E04
L_805A7E08:;
  c->r[0]=0u+0x00000002u; // 805A7E08
  W8(c->r[17]+0x00000000u,c->r[0]); // 805A7E0C
  goto L_805A7E18; // 805A7E10
L_805A7E14:;
  W8(c->r[17]+0x00000000u,c->r[21]); // 805A7E14
L_805A7E18:;
  {uint32_t ea=c->r[15]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A7E18
  {uint32_t ea=c->r[18]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7E1C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[30])); // 805A7E20
  fcmp(c,0,c->f[31],c->f[0]); // 805A7E24
  if (!crb(c,1)) { goto L_805A7E30; } // 805A7E28
  c->f[0]=c->f[31]; // 805A7E2C
L_805A7E30:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A7E30
  {uint32_t ea=c->r[18]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A7E34
  c->r[3]=c->r[18]+0x000000D0u; // 805A7E38
  {uint32_t ea=c->r[3]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7E3C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7E40
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7E44
  {uint32_t ea=c->r[18]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A7E48
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7E4C
  {uint32_t ea=c->r[18]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7E50
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[3],c->f[0],-c->f[30])); // 805A7E54
  fcmp(c,0,c->f[31],c->f[0]); // 805A7E58
  if (!crb(c,1)) { goto L_805A7E64; } // 805A7E5C
  c->f[0]=c->f[31]; // 805A7E60
L_805A7E64:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805A7E64
  {uint32_t ea=0u+c->r[30]; psq_load(c,7,ea,0,0);} // 805A7E68
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,1,ea,0,0);} // 805A7E6C
  c->r[4]=c->r[18]+0x000000E0u; // 805A7E70
  c->r[3]=c->r[17]+0x00000050u; // 805A7E74
  {uint32_t ea=c->r[4]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7E78
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A7E7C
  {uint32_t ea=c->r[15]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 805A7E80
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7E84
  c->r[8]=c->r[18]+0x00000050u; // 805A7E88
  {uint32_t ea=c->r[18]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A7E8C
  c->r[7]=c->r[18]+0x00000060u; // 805A7E90
  {uint32_t ea=c->r[4]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7E94
  c->r[6]=c->r[17]+0x00000040u; // 805A7E98
  c->r[4]=c->r[3]+0x00000010u; // 805A7E9C
  c->r[5]=c->r[3]+0x00000020u; // 805A7EA0
  {uint32_t ea=c->r[18]+0x000000C0u; psq_load(c,0,ea,0,0);} // 805A7EA4
  {uint32_t ea=c->r[17]+c->r[22]; psq_store(c,0,ea,0,0);} // 805A7EA8
  {uint32_t ea=c->r[18]+0x000000C8u; psq_load(c,0,ea,0,0);} // 805A7EAC
  {uint32_t ea=c->r[17]+c->r[23]; psq_store(c,0,ea,0,0);} // 805A7EB0
  {uint32_t ea=c->r[18]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7EB4
  {uint32_t ea=c->r[18]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A7EB8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 805A7EBC
  {uint32_t ea=c->r[18]+0x00000050u; psq_load(c,3,ea,0,0);} // 805A7EC0
  {uint32_t ea=c->r[8]+c->r[20]; psq_load(c,4,ea,0,0);} // 805A7EC4
  {uint32_t ea=c->r[18]+0x00000060u; psq_load(c,1,ea,0,0);} // 805A7EC8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805A7ECC
  {uint32_t ea=c->r[7]+c->r[20]; psq_load(c,2,ea,0,0);} // 805A7ED0
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,7,ea,0,0);} // 805A7ED4
  c->f[5]=c->ps1[5]=S(c->f[30]-c->f[0]); // 805A7ED8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,7,ea,0,0);} // 805A7EDC
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 805A7EE0
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 805A7EE4
  {double t0=S(c->f[4]*c->f[5]), t1=S(c->ps1[4]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805A7EE8
  {double t0=S(std::fma(c->f[6],c->f[1],c->f[3])), t1=S(std::fma(c->ps1[6],c->ps1[1],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 805A7EEC
  {double t0=S(std::fma(c->f[6],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[6],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A7EF0
  {uint32_t ea=c->r[17]+0x00000040u; psq_store(c,1,ea,0,0);} // 805A7EF4
  {uint32_t ea=c->r[6]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7EF8
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,0,ea,0,0);} // 805A7EFC
  {uint32_t ea=c->r[17]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A7F00
  {uint32_t ea=c->r[18]+0x000000E8u; psq_load(c,0,ea,0,0);} // 805A7F04
  {uint32_t ea=c->r[17]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A7F08
  {uint32_t ea=c->r[18]+c->r[24]; psq_load(c,0,ea,0,0);} // 805A7F0C
  {uint32_t ea=c->r[17]+c->r[25]; psq_store(c,0,ea,0,0);} // 805A7F10
  {uint32_t ea=c->r[18]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A7F14
  {uint32_t ea=c->r[17]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A7F18
  {uint32_t ea=c->r[17]+0x00000050u; psq_store(c,7,ea,0,0);} // 805A7F1C
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,7,ea,0,0);} // 805A7F20
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,7,ea,0,0);} // 805A7F24
  {uint32_t ea=c->r[4]+c->r[20]; psq_store(c,7,ea,0,0);} // 805A7F28
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,7,ea,0,0);} // 805A7F2C
  {uint32_t ea=c->r[5]+c->r[20]; psq_store(c,7,ea,0,0);} // 805A7F30
  {uint32_t ea=c->r[17]+0x00000050u; WF32(ea,c->f[30]);} // 805A7F34
  {uint32_t ea=c->r[17]+0x00000064u; WF32(ea,c->f[30]);} // 805A7F38
  {uint32_t ea=c->r[17]+0x00000078u; WF32(ea,c->f[30]);} // 805A7F3C
  W8(c->r[17]+0x00000001u,c->r[31]); // 805A7F40
  c->r[0]=R8(c->r[18]+0x000000BEu); // 805A7F44
  W32(c->r[17]+0x00000004u,c->r[0]); // 805A7F48
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[18]+0x0000011Eu); // 805A7F4C
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 805A7F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A7F54
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A7F58
  {uint32_t ea=c->r[17]+0x00000008u; WF32(ea,c->f[0]);} // 805A7F5C
  goto L_805A8060; // 805A7F60
L_805A7F64:;
  W8(c->r[17]+0x00000000u,c->r[31]); // 805A7F64
  c->r[3]=c->r[17]+0x00000050u; // 805A7F68
  {uint32_t ea=0u+c->r[30]; psq_load(c,0,ea,0,0);} // 805A7F6C
  c->r[4]=c->r[17]+0x00000040u; // 805A7F70
  W8(c->r[17]+0x00000001u,c->r[31]); // 805A7F74
  c->r[5]=c->r[3]+0x00000010u; // 805A7F78
  c->r[6]=c->r[3]+0x00000020u; // 805A7F7C
  {uint32_t ea=c->r[17]+0x00000008u; WF32(ea,c->f[31]);} // 805A7F80
  {uint32_t ea=c->r[17]+c->r[22]; psq_store(c,0,ea,0,0);} // 805A7F84
  {uint32_t ea=c->r[17]+c->r[23]; psq_store(c,0,ea,0,0);} // 805A7F88
  {uint32_t ea=c->r[17]+c->r[25]; psq_store(c,0,ea,0,0);} // 805A7F8C
  {uint32_t ea=c->r[17]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A7F90
  {uint32_t ea=c->r[17]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A7F94
  {uint32_t ea=c->r[17]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A7F98
  {uint32_t ea=c->r[17]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A7F9C
  {uint32_t ea=c->r[4]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7FA0
  {uint32_t ea=c->r[17]+0x00000050u; psq_store(c,0,ea,0,0);} // 805A7FA4
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7FA8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A7FAC
  {uint32_t ea=c->r[5]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7FB0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A7FB4
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A7FB8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,0,ea,0,0);} // 805A7FBC
  {uint32_t ea=c->r[6]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7FC0
  goto L_805A8060; // 805A7FC4
L_805A7FC8:;
  W8(c->r[17]+0x00000000u,c->r[31]); // 805A7FC8
  c->r[3]=c->r[17]+0x00000050u; // 805A7FCC
  {uint32_t ea=0u+c->r[30]; psq_load(c,1,ea,0,0);} // 805A7FD0
  c->r[4]=c->r[18]+0x00000060u; // 805A7FD4
  {uint32_t ea=c->r[17]+c->r[22]; psq_store(c,1,ea,0,0);} // 805A7FD8
  c->r[5]=c->r[17]+0x00000040u; // 805A7FDC
  c->r[6]=c->r[3]+0x00000010u; // 805A7FE0
  c->r[7]=c->r[3]+0x00000020u; // 805A7FE4
  {uint32_t ea=c->r[17]+c->r[23]; psq_store(c,1,ea,0,0);} // 805A7FE8
  {uint32_t ea=c->r[18]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A7FEC
  {uint32_t ea=c->r[17]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A7FF0
  {uint32_t ea=c->r[4]+c->r[20]; psq_load(c,0,ea,0,0);} // 805A7FF4
  {uint32_t ea=c->r[5]+c->r[20]; psq_store(c,0,ea,0,0);} // 805A7FF8
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,0,ea,0,0);} // 805A7FFC
  {uint32_t ea=c->r[17]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A8000
  {uint32_t ea=c->r[18]+0x000000E8u; psq_load(c,0,ea,0,0);} // 805A8004
  {uint32_t ea=c->r[17]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A8008
  {uint32_t ea=c->r[18]+c->r[24]; psq_load(c,0,ea,0,0);} // 805A800C
  {uint32_t ea=c->r[17]+c->r[25]; psq_store(c,0,ea,0,0);} // 805A8010
  {uint32_t ea=c->r[18]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A8014
  {uint32_t ea=c->r[17]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A8018
  {uint32_t ea=c->r[17]+0x00000050u; psq_store(c,1,ea,0,0);} // 805A801C
  {uint32_t ea=c->r[3]+c->r[20]; psq_store(c,1,ea,0,0);} // 805A8020
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 805A8024
  {uint32_t ea=c->r[6]+c->r[20]; psq_store(c,1,ea,0,0);} // 805A8028
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A802C
  {uint32_t ea=c->r[7]+c->r[20]; psq_store(c,1,ea,0,0);} // 805A8030
  {uint32_t ea=c->r[17]+0x00000050u; WF32(ea,c->f[30]);} // 805A8034
  {uint32_t ea=c->r[17]+0x00000064u; WF32(ea,c->f[30]);} // 805A8038
  {uint32_t ea=c->r[17]+0x00000078u; WF32(ea,c->f[30]);} // 805A803C
  W8(c->r[17]+0x00000001u,c->r[31]); // 805A8040
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[18]+0x0000011Eu); // 805A8044
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805A8048
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 805A804C
  W32(c->r[1]+0x00000010u,c->r[0]); // 805A8050
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8054
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,0,0);} // 805A8058
  {uint32_t ea=c->r[17]+0x00000008u; WF32(ea,c->f[0]);} // 805A805C
L_805A8060:;
  c->r[16]=c->r[16]+0x00000004u; // 805A8060
  c->r[17]=c->r[17]+0x00000080u; // 805A8064
  c->r[19]=c->r[19]+0xFFFFFFFFu; // 805A8068
L_805A806C:;
  cmps(c,0,(int32_t)c->r[19],0); // 805A806C
  if (!crb(c,0)) { IRQCHK(c); goto L_805A7C70; } // 805A8070
  c->r[3]=c->r[17]|c->r[17]; // 805A8074
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A8078
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A807C
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A8080
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805A8084
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805A8088
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805A808C
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805A8090
  c->r[11]=c->r[10]+0xFFFFFFD0u; // 805A8094
  c->lr=0x805A809Cu; f_803A9C1C(c); // 805A8098
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A809C
  c->lr=c->r[0]; // 805A80A0
  c->r[1]=c->r[10]|c->r[10]; // 805A80A4
  return; // 805A80A8
}

// fn_805A80AC
void f_805A80AC(Ctx* __restrict c) {
  trace_call(0x805A80ACu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A80AC
  c->r[12]=c->r[1]|c->r[1]; // 805A80B0
  c->r[11]=addc(c,~c->r[11],0xFFFFFDC0u,1); // 805A80B4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A80B8
  c->r[0]=c->lr; // 805A80BC
  c->r[11]=c->r[12]+0xFFFFFF50u; // 805A80C0
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A80C4
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805A80C8
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805A80CC
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805A80D0
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805A80D4
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805A80D8
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805A80DC
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 805A80E0
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 805A80E4
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 805A80E8
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 805A80EC
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 805A80F0
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 805A80F4
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 805A80F8
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 805A80FC
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 805A8100
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 805A8104
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 805A8108
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 805A810C
  {uint32_t ea=c->r[12]+0xFFFFFF60u; WF64(ea,c->f[22]);} // 805A8110
  {uint32_t ea=c->r[12]+0xFFFFFF68u; psq_store(c,22,ea,0,0);} // 805A8114
  {uint32_t ea=c->r[12]+0xFFFFFF50u; WF64(ea,c->f[21]);} // 805A8118
  {uint32_t ea=c->r[12]+0xFFFFFF58u; psq_store(c,21,ea,0,0);} // 805A811C
  c->lr=0x805A8124u; f_803A9BD0(c); // 805A8120
  c->r[9]=0u+0x80000000u; // 805A8124
  {uint32_t ea=c->r[2]+0x00002858u; c->f[27]=c->ps1[27]=RF32(ea);} // 805A8128
  {uint32_t ea=c->r[2]+0x00002850u; c->f[28]=c->ps1[28]=RF32(ea);} // 805A812C
  c->r[15]=c->r[3]|c->r[3]; // 805A8130
  {uint32_t ea=c->r[2]+0x00002838u; c->f[29]=c->ps1[29]=RF32(ea);} // 805A8134
  c->r[16]=c->r[4]|c->r[4]; // 805A8138
  {uint32_t ea=c->r[2]+0x00002854u; c->f[30]=c->ps1[30]=RF32(ea);} // 805A813C
  c->r[21]=c->r[5]|c->r[5]; // 805A8140
  {uint32_t ea=c->r[2]+0x00002844u; c->f[25]=c->ps1[25]=RF32(ea);} // 805A8144
  c->r[17]=c->r[6]|c->r[6]; // 805A8148
  {uint32_t ea=c->r[2]+0x00002848u; c->f[26]=c->ps1[26]=RF32(ea);} // 805A814C
  c->r[20]=c->r[9]+0xFFFFFFFFu; // 805A8150
  W32(c->r[1]+0x00000010u,c->r[8]); // 805A8154
  c->r[19]=c->r[7]+0xFFFFFFFFu; // 805A8158
  {uint32_t ea=c->r[2]+0x0000285Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 805A815C
  c->r[14]=c->r[1]+0x00000130u; // 805A8160
  c->r[26]=0u+0x00000008u; // 805A8164
  c->r[27]=0u+0x000000D0u; // 805A8168
  c->r[28]=0u+0x000000D8u; // 805A816C
  c->r[29]=0u+0x000000E0u; // 805A8170
  c->r[30]=0u+0x000000E8u; // 805A8174
  goto L_805A8BCC; // 805A8178
L_805A817C:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 805A817C
  c->r[0]=R32(c->r[1]+0x00000010u); // 805A8180
  c->r[18]=c->r[3]+c->r[0]; // 805A8184
  c->r[0]=R8(c->r[18]+0x00000008u); // 805A8188
  cmpu(c,0,c->r[0],0x00000009u); // 805A818C
  if (crb(c,1)) { goto L_805A8718; } // 805A8190
  c->r[3]=0u+0x80720000u; // 805A8194
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A8198
  c->r[3]=c->r[3]+0x00002548u; // 805A819C
  c->r[3]=R32(c->r[3]+c->r[0]); // 805A81A0
  c->ctr=c->r[3]; // 805A81A4
  if (true) { switch (c->ctr) { case 0x805A81ACu: goto L_805A81AC; case 0x805A8234u: goto L_805A8234; case 0x805A82C4u: goto L_805A82C4; case 0x805A830Cu: goto L_805A830C; case 0x805A8358u: goto L_805A8358; case 0x805A839Cu: goto L_805A839C; case 0x805A8718u: goto L_805A8718; default: break; } dispatch(c,c->ctr); return; } // 805A81A8
L_805A81AC:;
  c->r[6]=R32(c->r[21]+0x00000020u); // 805A81AC
  c->r[7]=c->r[18]+0x000000C0u; // 805A81B0
  c->r[0]=R32(c->r[21]+0x00000024u); // 805A81B4
  c->r[5]=c->r[1]+0x00000100u; // 805A81B8
  W32(c->r[1]+0x00000104u,c->r[0]); // 805A81BC
  c->r[0]=c->r[2]+0x00002870u; // 805A81C0
  {uint32_t ea=0u+c->r[0]; psq_load(c,3,ea,0,0);} // 805A81C4
  c->r[4]=c->r[18]+0x00000010u; // 805A81C8
  W32(c->r[1]+0x00000100u,c->r[6]); // 805A81CC
  c->r[3]=c->r[1]+0x00000110u; // 805A81D0
  c->r[6]=R32(c->r[21]+0x00000028u); // 805A81D4
  c->r[0]=R32(c->r[21]+0x0000002Cu); // 805A81D8
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 805A81DC
  c->r[0]=c->r[5]|c->r[5]; // 805A81E0
  {uint32_t ea=0u+c->r[0]; psq_load(c,6,ea,0,0);} // 805A81E4
  c->r[0]=c->r[5]|c->r[5]; // 805A81E8
  W32(c->r[1]+0x00000108u,c->r[6]); // 805A81EC
  c->r[6]=c->r[1]+0x000000F0u; // 805A81F0
  {uint32_t ea=c->r[18]+0x000000C0u; psq_load(c,2,ea,0,0);} // 805A81F4
  {uint32_t ea=c->r[7]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A81F8
  {double t0=S(fres(c->f[2])), t1=S(fres(c->ps1[2])); c->f[4]=t0; c->ps1[4]=t1;} // 805A81FC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,5,ea,0,0);} // 805A8200
  {double t0=S(fres(c->f[0])), t1=S(fres(c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 805A8204
  {double t0=S(-std::fma(c->f[4],c->f[2],-c->f[3])), t1=S(-std::fma(c->ps1[4],c->ps1[2],-c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 805A8208
  {double t0=S(-std::fma(c->f[1],c->f[0],-c->f[3])), t1=S(-std::fma(c->ps1[1],c->ps1[0],-c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 805A820C
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 805A8210
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 805A8214
  {uint32_t ea=c->r[1]+0x000000F0u; psq_store(c,3,ea,0,0);} // 805A8218
  {double t0=S(c->f[6]*c->f[3]), t1=S(c->ps1[6]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 805A821C
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805A8220
  {uint32_t ea=c->r[6]+c->r[26]; psq_store(c,2,ea,0,0);} // 805A8224
  {uint32_t ea=0u+c->r[0]; psq_store(c,1,ea,0,0);} // 805A8228
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,0,ea,0,0);} // 805A822C
  c->lr=0x805A8234u; f_8062AD3C(c); // 805A8230
L_805A8234:;
  {uint32_t ea=c->r[21]+0x00000010u; psq_load(c,0,ea,0,0);} // 805A8234
  c->r[4]=c->r[18]+0x00000010u; // 805A8238
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A823C
  c->r[8]=c->r[4]+0x00000010u; // 805A8240
  c->r[9]=c->r[4]+0x00000020u; // 805A8244
  c->r[6]=c->r[18]+0x000000E0u; // 805A8248
  {uint32_t ea=c->r[21]+0x00000018u; psq_load(c,0,ea,0,0);} // 805A824C
  c->r[10]=c->r[21]+0x00000040u; // 805A8250
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A8254
  c->r[5]=c->r[21]+0x00000050u; // 805A8258
  c->r[3]=c->r[1]+0x00000120u; // 805A825C
  {uint32_t ea=c->r[21]+0x00000020u; psq_load(c,2,ea,0,0);} // 805A8260
  {uint32_t ea=c->r[21]+0x00000028u; c->f[24]=c->ps1[24]=RF32(ea);} // 805A8264
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805A8268
  {uint32_t ea=c->r[18]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A826C
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A8270
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A8274
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,5,ea,0,0);} // 805A8278
  {double t0=S(c->f[24]), t1=S(c->f[24]); c->f[24]=t0; c->ps1[24]=t1;} // 805A827C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805A8280
  {uint32_t ea=c->r[8]+c->r[26]; psq_load(c,4,ea,0,0);} // 805A8284
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805A8288
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 805A828C
  {uint32_t ea=c->r[9]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A8290
  {double t0=S(std::fma(c->f[5],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A8294
  {double t0=S(std::fma(c->f[4],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A8298
  {double t0=S(std::fma(c->f[1],c->f[24],c->f[3])), t1=S(std::fma(c->ps1[1],c->ps1[24],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A829C
  {double t0=S(std::fma(c->f[0],c->f[24],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[24],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A82A0
  {uint32_t ea=c->r[18]+0x000000E0u; psq_store(c,3,ea,0,0);} // 805A82A4
  {uint32_t ea=c->r[6]+c->r[26]; psq_store(c,2,ea,0,0);} // 805A82A8
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A82AC
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 805A82B0
  {uint32_t ea=c->r[10]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A82B4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,0,ea,0,0);} // 805A82B8
  c->lr=0x805A82C0u; f_8062AD3C(c); // 805A82BC
  goto L_805A83E4; // 805A82C0
L_805A82C4:;
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A82C4
  c->r[6]=c->r[21]+0x00000040u; // 805A82C8
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A82CC
  c->r[5]=c->r[21]+0x00000050u; // 805A82D0
  c->r[4]=c->r[18]+0x00000010u; // 805A82D4
  c->r[3]=c->r[1]+0x00000120u; // 805A82D8
  {uint32_t ea=c->r[6]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A82DC
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A82E0
  {uint32_t ea=c->r[21]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A82E4
  {uint32_t ea=c->r[18]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A82E8
  {uint32_t ea=c->r[5]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A82EC
  {uint32_t ea=c->r[18]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A82F0
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A82F4
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 805A82F8
  {uint32_t ea=c->r[6]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A82FC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,0,ea,0,0);} // 805A8300
  c->lr=0x805A8308u; f_8062AD3C(c); // 805A8304
  goto L_805A83E4; // 805A8308
L_805A830C:;
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A830C
  c->r[3]=c->r[21]+0x00000040u; // 805A8310
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A8314
  c->r[4]=c->r[21]+0x00000050u; // 805A8318
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A831C
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A8320
  {uint32_t ea=c->r[21]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A8324
  {uint32_t ea=c->r[18]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A8328
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A832C
  {uint32_t ea=c->r[18]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A8330
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A8334
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 805A8338
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A833C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,0,ea,0,0);} // 805A8340
  {uint32_t ea=c->r[21]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A8344
  {uint32_t ea=c->r[1]+0x00000120u; psq_store(c,0,ea,0,0);} // 805A8348
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A834C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,0,ea,0,0);} // 805A8350
  goto L_805A83E4; // 805A8354
L_805A8358:;
  {uint32_t ea=c->r[18]+c->r[27]; psq_load(c,0,ea,0,0);} // 805A8358
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A835C
  {uint32_t ea=c->r[18]+c->r[28]; psq_load(c,0,ea,0,0);} // 805A8360
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A8364
  {uint32_t ea=c->r[18]+c->r[29]; psq_load(c,0,ea,0,0);} // 805A8368
  {uint32_t ea=c->r[18]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A836C
  {uint32_t ea=c->r[18]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A8370
  {uint32_t ea=c->r[18]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A8374
  {uint32_t ea=c->r[18]+c->r[27]; psq_load(c,0,ea,0,0);} // 805A8378
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 805A837C
  {uint32_t ea=c->r[18]+c->r[28]; psq_load(c,0,ea,0,0);} // 805A8380
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,0,ea,0,0);} // 805A8384
  {uint32_t ea=c->r[18]+c->r[29]; psq_load(c,0,ea,0,0);} // 805A8388
  {uint32_t ea=c->r[1]+0x00000120u; psq_store(c,0,ea,0,0);} // 805A838C
  {uint32_t ea=c->r[18]+c->r[30]; psq_load(c,0,ea,0,0);} // 805A8390
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,0,ea,0,0);} // 805A8394
  goto L_805A83E4; // 805A8398
L_805A839C:;
  {uint32_t ea=c->r[21]+0x00000010u; psq_load(c,0,ea,0,0);} // 805A839C
  c->r[3]=c->r[21]+0x00000040u; // 805A83A0
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A83A4
  c->r[4]=c->r[21]+0x00000050u; // 805A83A8
  {uint32_t ea=c->r[21]+0x00000018u; psq_load(c,0,ea,0,0);} // 805A83AC
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A83B0
  {uint32_t ea=c->r[21]+0x00000020u; psq_load(c,0,ea,0,0);} // 805A83B4
  {uint32_t ea=c->r[18]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A83B8
  {uint32_t ea=c->r[21]+0x00000028u; psq_load(c,0,ea,0,0);} // 805A83BC
  {uint32_t ea=c->r[18]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A83C0
  {uint32_t ea=c->r[21]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A83C4
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 805A83C8
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A83CC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,0,ea,0,0);} // 805A83D0
  {uint32_t ea=c->r[21]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A83D4
  {uint32_t ea=c->r[1]+0x00000120u; psq_store(c,0,ea,0,0);} // 805A83D8
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A83DC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,0,ea,0,0);} // 805A83E0
L_805A83E4:;
  c->r[3]=c->r[1]+0x00000090u; // 805A83E4
  c->r[4]=c->r[1]+0x00000130u; // 805A83E8
  c->lr=0x805A83F0u; f_8053BCAC(c); // 805A83EC
  c->r[3]=c->r[1]+0x000000A0u; // 805A83F0
  c->r[4]=c->r[1]+0x00000120u; // 805A83F4
  c->lr=0x805A83FCu; f_8053BCAC(c); // 805A83F8
  c->r[3]=c->r[1]+0x000000B0u; // 805A83FC
  c->lr=0x805A8404u; f_805A6C28(c); // 805A8400
  c->r[4]=0u+0x80860000u; // 805A8404
  c->r[4]=c->r[4]+0xFFFFDC00u; // 805A8408
  c->lr=0x805A8410u; f_805A6C14(c); // 805A840C
  c->r[3]=c->r[1]+0x000000A0u; // 805A8410
  c->r[4]=c->r[1]+0x000000B0u; // 805A8414
  c->lr=0x805A841Cu; f_8052B720(c); // 805A8418
  W32(c->r[1]+0x00000038u,c->r[3]); // 805A841C
  c->r[3]=c->r[1]+0x00000090u; // 805A8420
  c->r[4]=c->r[1]+0x000000B0u; // 805A8424
  c->lr=0x805A842Cu; f_8052B720(c); // 805A8428
  W32(c->r[1]+0x00000034u,c->r[3]); // 805A842C
  c->r[3]=c->r[1]+0x00000038u; // 805A8430
  c->lr=0x805A8438u; f_80585D8C(c); // 805A8434
  c->r[22]=c->r[3]|c->r[3]; // 805A8438
  c->r[3]=c->r[1]+0x00000034u; // 805A843C
  c->lr=0x805A8444u; f_80585D8C(c); // 805A8440
  c->r[23]=c->r[3]&c->r[22]; // 805A8444
  c->r[3]=c->r[1]+0x00000120u; // 805A8448
  c->r[4]=c->r[3]|c->r[3]; // 805A844C
  c->lr=0x805A8454u; f_8052BAE8(c); // 805A8450
  W32(c->r[1]+0x00000040u,c->r[3]); // 805A8454
  c->r[3]=c->r[1]+0x00000130u; // 805A8458
  c->r[4]=c->r[3]|c->r[3]; // 805A845C
  c->lr=0x805A8464u; f_8052BAE8(c); // 805A8460
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 805A8464
  c->r[3]=c->r[1]+0x00000040u; // 805A8468
  c->lr=0x805A8470u; f_80585D8C(c); // 805A846C
  c->r[22]=c->r[3]|c->r[3]; // 805A8470
  c->r[3]=c->r[1]+0x0000003Cu; // 805A8474
  c->lr=0x805A847Cu; f_80585D8C(c); // 805A8478
  c->r[0]=c->r[3]&c->r[22]; // 805A847C
  c->r[23]=c->r[23]&c->r[0]; // 805A8480
  c->r[0]=rotl(c->r[23],0)&0x0000000Eu; // 805A8484
  cmps(c,0,(int32_t)c->r[0],14); // 805A8488
  if (crb(c,2)) { goto L_805A84C0; } // 805A848C
  c->lr=0x805A8494u; f_80576004(c); // 805A8490
  c->r[4]=0u+0x00000000u; // 805A8494
  c->lr=0x805A849Cu; f_8053BADC(c); // 805A8498
  c->r[4]=c->r[3]|c->r[3]; // 805A849C
  c->r[3]=c->r[1]+0x00000130u; // 805A84A0
  c->lr=0x805A84A8u; f_8052BCBC(c); // 805A84A4
  c->lr=0x805A84ACu; f_80576004(c); // 805A84A8
  c->r[4]=0u+0x00000000u; // 805A84AC
  c->lr=0x805A84B4u; f_8053BADC(c); // 805A84B0
  c->r[4]=c->r[3]|c->r[3]; // 805A84B4
  c->r[3]=c->r[1]+0x00000120u; // 805A84B8
  c->lr=0x805A84C0u; f_8052BCBC(c); // 805A84BC
L_805A84C0:;
  c->r[3]=c->r[18]+0x00000010u; // 805A84C0
  c->lr=0x805A84C8u; f_805A6C0C(c); // 805A84C4
  c->r[22]=c->r[3]|c->r[3]; // 805A84C8
  c->r[3]=c->r[18]+0x00000010u; // 805A84CC
  c->lr=0x805A84D4u; f_805A6C0C(c); // 805A84D0
  c->r[4]=c->r[22]+0x00000010u; // 805A84D4
  c->lr=0x805A84DCu; f_8052BCBC(c); // 805A84D8
  c->r[3]=c->r[16]|c->r[16]; // 805A84DC
  c->lr=0x805A84E4u; f_8052F4AC(c); // 805A84E0
  c->f[21]=c->f[1]; // 805A84E4
  c->r[3]=c->r[18]+0x00000010u; // 805A84E8
  c->lr=0x805A84F0u; f_805A6C0C(c); // 805A84EC
  c->r[4]=0u+0x00000003u; // 805A84F0
  c->lr=0x805A84F8u; f_8053BAE8(c); // 805A84F4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[21]);} // 805A84F8
  c->r[3]=c->r[1]+0x00000130u; // 805A84FC
  c->lr=0x805A8504u; f_8053D124(c); // 805A8500
  c->f[22]=c->f[1]; // 805A8504
  c->r[3]=c->r[18]+0x000000BCu; // 805A8508
  c->lr=0x805A8510u; f_805A6BF4(c); // 805A850C
  c->f[21]=c->f[1]; // 805A8510
  c->r[3]=c->r[18]+0x000000BCu; // 805A8514
  c->lr=0x805A851Cu; f_805A6BF4(c); // 805A8518
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[21]); // 805A851C
  fcmp(c,0,c->f[22],c->f[0]); // 805A8520
  if (!crb(c,1)) { goto L_805A8550; } // 805A8524
  c->f[1]=c->f[22]; // 805A8528
  c->lr=0x805A8530u; f_80587A48(c); // 805A852C
  c->f[21]=c->f[1]; // 805A8530
  c->r[3]=c->r[18]+0x000000BCu; // 805A8534
  c->lr=0x805A853Cu; f_805A6BF4(c); // 805A8538
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[21]); // 805A853C
  c->r[3]=c->r[1]+0x00000130u; // 805A8540
  c->r[4]=c->r[1]+0x0000002Cu; // 805A8544
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 805A8548
  c->lr=0x805A8550u; f_80579C6C(c); // 805A854C
L_805A8550:;
  c->r[3]=c->r[16]+0x00000008u; // 805A8550
  c->lr=0x805A8558u; f_80579E50(c); // 805A8554
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 805A8558
  c->r[3]=c->r[18]+0x00000010u; // 805A855C
  c->lr=0x805A8564u; f_805A6C0C(c); // 805A8560
  c->r[4]=c->r[1]+0x00000044u; // 805A8564
  c->r[5]=c->r[1]+0x00000130u; // 805A8568
  c->r[3]=c->r[3]+0x00000010u; // 805A856C
  c->lr=0x805A8574u; f_80532898(c); // 805A8570
  c->r[3]=c->r[16]+0x0000000Cu; // 805A8574
  c->lr=0x805A857Cu; f_8052F4AC(c); // 805A8578
  c->f[21]=c->f[1]; // 805A857C
  c->r[3]=c->r[18]+0x00000010u; // 805A8580
  c->lr=0x805A8588u; f_805A6C0C(c); // 805A8584
  c->r[4]=0u+0x00000003u; // 805A8588
  c->r[3]=c->r[3]+0x00000010u; // 805A858C
  c->lr=0x805A8594u; f_8053BAE8(c); // 805A8590
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[21]);} // 805A8594
  c->r[3]=c->r[18]+0x00000010u; // 805A8598
  c->lr=0x805A85A0u; f_805A6C0C(c); // 805A859C
  c->r[4]=c->r[3]|c->r[3]; // 805A85A0
  c->r[3]=c->r[1]+0x000000C0u; // 805A85A4
  c->r[4]=c->r[4]+0x00000030u; // 805A85A8
  c->lr=0x805A85B0u; f_8035CF74(c); // 805A85AC
  c->r[3]=c->r[18]+0x00000010u; // 805A85B0
  c->lr=0x805A85B8u; f_805A6C0C(c); // 805A85B4
  c->r[3]=c->r[3]+0x00000020u; // 805A85B8
  c->r[4]=c->r[1]+0x000000C0u; // 805A85BC
  c->lr=0x805A85C4u; f_805A6BE0(c); // 805A85C0
  c->r[3]=c->r[1]+0x000000D0u; // 805A85C4
  c->lr=0x805A85CCu; f_805A6BDC(c); // 805A85C8
  c->r[3]=c->r[16]+0x00000008u; // 805A85CC
  c->lr=0x805A85D4u; f_8052F4AC(c); // 805A85D0
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[1]); // 805A85D4
  c->r[4]=c->r[1]+0x00000048u; // 805A85D8
  c->r[3]=c->r[1]+0x000000D0u; // 805A85DC
  c->r[5]=c->r[1]+0x00000120u; // 805A85E0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 805A85E4
  c->lr=0x805A85ECu; f_80532734(c); // 805A85E8
  c->r[3]=c->r[1]+0x000000D0u; // 805A85EC
  c->lr=0x805A85F4u; f_8053D124(c); // 805A85F0
  c->f[22]=c->ps1[22]=S(c->f[26]*c->f[1]); // 805A85F4
  c->r[3]=c->r[18]+0x000000BDu; // 805A85F8
  c->lr=0x805A8600u; f_805A6BF4(c); // 805A85FC
  c->f[21]=c->f[1]; // 805A8600
  c->r[3]=c->r[16]+0x00000008u; // 805A8604
  c->lr=0x805A860Cu; f_80579E50(c); // 805A8608
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[21]); // 805A860C
  {uint32_t ea=c->r[2]+0x0000284Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805A8610
  c->lr=0x805A8618u; f_80585D7C(c); // 805A8614
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 805A8618
  c->f[21]=c->f[1]; // 805A861C
  fcmp(c,0,c->f[22],c->f[0]); // 805A8620
  setcrb(c,2,crb(c,0)|crb(c,2)); // 805A8624
  if (!crb(c,2)) { goto L_805A8654; } // 805A8628
  c->f[2]=c->ps1[2]=S(c->f[22]*c->f[22]); // 805A862C
  c->r[3]=c->r[1]+0x000000D0u; // 805A8630
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[22],-c->f[29])); // 805A8634
  c->r[4]=0u+0x00000003u; // 805A8638
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[22]); // 805A863C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A8640
  c->f[21]=c->ps1[21]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A8644
  c->lr=0x805A864Cu; f_8053BAE8(c); // 805A8648
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[21]);} // 805A864C
  goto L_805A86A4; // 805A8650
L_805A8654:;
  c->f[1]=c->f[22]; // 805A8654
  c->lr=0x805A865Cu; f_80587A48(c); // 805A8658
  c->f[0]=c->ps1[0]=S(c->f[21]*c->f[1]); // 805A865C
  c->r[3]=c->r[1]+0x00000120u; // 805A8660
  c->r[4]=c->r[1]+0x00000030u; // 805A8664
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 805A8668
  c->lr=0x805A8670u; f_80579C6C(c); // 805A866C
  c->r[3]=c->r[1]+0x000000D0u; // 805A8670
  c->r[4]=c->r[1]+0x00000030u; // 805A8674
  c->lr=0x805A867Cu; f_80579C6C(c); // 805A8678
  c->f[22]=c->ps1[22]=S(c->f[21]*c->f[21]); // 805A867C
  c->r[3]=c->r[1]+0x000000D0u; // 805A8680
  c->r[4]=0u+0x00000003u; // 805A8684
  c->f[2]=c->ps1[2]=S(c->f[22]*c->f[22]); // 805A8688
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[28],c->f[22],-c->f[29])); // 805A868C
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[22]); // 805A8690
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[2],-c->f[0])); // 805A8694
  c->f[21]=c->ps1[21]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 805A8698
  c->lr=0x805A86A0u; f_8053BAE8(c); // 805A869C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[21]);} // 805A86A0
L_805A86A4:;
  c->r[3]=c->r[1]+0x000000C0u; // 805A86A4
  c->r[4]=c->r[1]+0x000000D0u; // 805A86A8
  c->r[5]=c->r[3]|c->r[3]; // 805A86AC
  c->lr=0x805A86B4u; f_805A6B38(c); // 805A86B0
  c->r[3]=c->r[1]+0x000000C0u; // 805A86B4
  c->lr=0x805A86BCu; f_805A6ADC(c); // 805A86B8
  c->r[4]=c->r[1]+0x000000D0u; // 805A86BC
  c->r[3]=c->r[18]+0x000000A0u; // 805A86C0
  c->r[5]=c->r[4]|c->r[4]; // 805A86C4
  c->lr=0x805A86CCu; f_80532910(c); // 805A86C8
  c->f[1]=c->f[22]; // 805A86CC
  c->lr=0x805A86D4u; f_8053D0E4(c); // 805A86D0
  c->f[21]=c->ps1[21]=S(c->f[31]*c->f[1]); // 805A86D4
  c->r[3]=c->r[18]+0x000000A0u; // 805A86D8
  c->r[4]=0u+0x00000003u; // 805A86DC
  c->lr=0x805A86E4u; f_8053BAE8(c); // 805A86E0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[21]);} // 805A86E4
  c->r[3]=c->r[18]+0x00000010u; // 805A86E8
  c->lr=0x805A86F0u; f_805A6C0C(c); // 805A86EC
  c->r[3]=c->r[3]+0x00000030u; // 805A86F0
  c->r[4]=c->r[1]+0x000000C0u; // 805A86F4
  c->lr=0x805A86FCu; f_805A6BE0(c); // 805A86F8
  c->r[3]=c->r[18]+0x00000010u; // 805A86FC
  c->lr=0x805A8704u; f_805A6AD8(c); // 805A8700
  c->r[22]=c->r[3]|c->r[3]; // 805A8704
  c->r[3]=c->r[18]+0x00000010u; // 805A8708
  c->lr=0x805A8710u; f_805A6C0C(c); // 805A870C
  c->r[4]=c->r[22]|c->r[22]; // 805A8710
  c->lr=0x805A8718u; f_805A6A14(c); // 805A8714
L_805A8718:;
  c->r[3]=R8(c->r[18]+0x00000008u); // 805A8718
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 805A871C
  c->r[0]=cntlz(c->r[0]); // 805A8720
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 805A8724
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805A8728
  c->r[0]=0u-c->r[3]; // 805A872C
  c->r[0]=c->r[0]|c->r[3]; // 805A8730
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805A8734
  if (crb(c,2)) { goto L_805A87EC; } // 805A8738
  {uint32_t ea=c->r[21]+0x00000010u; psq_load(c,0,ea,0,0);} // 805A873C
  c->r[4]=c->r[18]+0x00000010u; // 805A8740
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A8744
  c->r[5]=c->r[1]+0x000000E0u; // 805A8748
  c->r[6]=c->r[4]+0x00000010u; // 805A874C
  c->r[7]=c->r[4]+0x00000020u; // 805A8750
  {uint32_t ea=c->r[21]+0x00000018u; psq_load(c,0,ea,0,0);} // 805A8754
  c->r[0]=c->r[5]|c->r[5]; // 805A8758
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A875C
  c->r[3]=c->r[18]+0x000000E0u; // 805A8760
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,7,ea,0,0);} // 805A8764
  {uint32_t ea=c->r[1]+0x00000110u; psq_load(c,1,ea,0,0);} // 805A8768
  {double t0=c->f[7], t1=c->ps1[7]; c->f[2]=t0; c->ps1[2]=t1;} // 805A876C
  {uint32_t ea=c->r[18]+0x00000010u; psq_load(c,3,ea,0,0);} // 805A8770
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805A8774
  {uint32_t ea=c->r[6]+c->r[26]; psq_load(c,6,ea,0,0);} // 805A8778
  {double t0=S(c->ps1[3]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 805A877C
  {uint32_t ea=c->r[1]+0x00000118u; c->f[23]=c->ps1[23]=RF32(ea);} // 805A8780
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 805A8784
  {double t0=S(c->f[3]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805A8788
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A878C
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,8,ea,0,0);} // 805A8790
  {double t0=c->f[5], t1=c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 805A8794
  {uint32_t ea=c->r[7]+c->r[26]; psq_load(c,4,ea,0,0);} // 805A8798
  {double t0=S(c->f[8]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 805A879C
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[3]=t0; c->ps1[3]=t1;} // 805A87A0
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805A87A4
  c->r[6]=c->r[5]|c->r[5]; // 805A87A8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 805A87AC
  {double t0=S(c->f[23]), t1=S(c->f[23]); c->f[23]=t0; c->ps1[23]=t1;} // 805A87B0
  {double t0=S(std::fma(c->f[7],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[7],c->ps1[0],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A87B4
  {double t0=S(std::fma(c->f[6],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[6],c->ps1[0],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A87B8
  {double t0=S(std::fma(c->f[5],c->f[23],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[23],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805A87BC
  {double t0=S(std::fma(c->f[4],c->f[23],c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[23],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805A87C0
  {uint32_t ea=0u+c->r[0]; psq_store(c,3,ea,0,0);} // 805A87C4
  c->r[0]=c->r[5]|c->r[5]; // 805A87C8
  {uint32_t ea=c->r[6]+c->r[26]; psq_store(c,2,ea,0,0);} // 805A87CC
  {uint32_t ea=c->r[18]+0x000000C0u; psq_load(c,1,ea,0,0);} // 805A87D0
  {uint32_t ea=c->r[18]+0x000000C8u; psq_load(c,0,ea,0,0);} // 805A87D4
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A87D8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A87DC
  {uint32_t ea=0u+c->r[0]; psq_store(c,1,ea,0,0);} // 805A87E0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A87E4
  c->lr=0x805A87ECu; f_8062AD3C(c); // 805A87E8
L_805A87EC:;
  {uint32_t ea=c->r[18]+0x000000D0u; psq_load(c,1,ea,0,0);} // 805A87EC
  c->r[3]=c->r[18]+0x000000D0u; // 805A87F0
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,3,ea,0,0);} // 805A87F4
  c->r[4]=c->r[18]+0x000000E0u; // 805A87F8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805A87FC
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A8800
  c->r[0]=R8(c->r[18]+0x000000BCu); // 805A8804
  c->r[3]=0u+0x806D0000u; // 805A8808
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,2,ea,0,0);} // 805A880C
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805A8810
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 805A8814
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A8818
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 805A881C
  c->r[0]=R8(c->r[18]+0x000000BDu); // 805A8820
  {uint32_t ea=c->r[3]+c->r[4]; c->f[4]=c->ps1[4]=RF32(ea);} // 805A8824
  c->r[3]=0u+0x806D0000u; // 805A8828
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 805A882C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A8830
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 805A8834
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 805A8838
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 805A883C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[5]=c->ps1[5]=RF32(ea);} // 805A8840
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[3]); c->f[7]=t0; c->ps1[7]=t1;} // 805A8844
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[5]); // 805A8848
  fcmp(c,0,c->f[6],c->f[0]); // 805A884C
  if (crb(c,1)) { goto L_805A885C; } // 805A8850
  fcmp(c,0,c->f[6],c->f[6]); // 805A8854
  if (crb(c,2)) { goto L_805A88D0; } // 805A8858
L_805A885C:;
  c->f[3]=frsqrte(c->f[6]); // 805A885C
  c->r[0]=R8(c->r[18]+0x000000BCu); // 805A8860
  c->r[3]=0u+0x806D0000u; // 805A8864
  c->r[4]=c->r[18]+0x000000D0u; // 805A8868
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A886C
  {uint32_t ea=c->r[18]+0x000000D0u; psq_load(c,5,ea,0,0);} // 805A8870
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805A8874
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 805A8878
  {uint32_t ea=c->r[3]+c->r[0]; c->f[8]=c->ps1[8]=RF32(ea);} // 805A887C
  fcmp(c,0,c->f[6],c->f[6]); // 805A8880
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,4,ea,0,0);} // 805A8884
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 805A8888
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[3]); // 805A888C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[6],c->f[1],-c->f[29])); // 805A8890
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[3])); // 805A8894
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 805A8898
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A889C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A88A0
  {uint32_t ea=c->r[18]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A88A4
  {uint32_t ea=c->r[4]+c->r[26]; psq_store(c,0,ea,0,0);} // 805A88A8
  if (crb(c,2)) { goto L_805A88D0; } // 805A88AC
  c->r[3]=0u+0x80860000u; // 805A88B0
  c->r[3]=c->r[3]+0x00000070u; // 805A88B4
  {uint32_t ea=0u+c->r[3]; psq_load(c,0,ea,0,0);} // 805A88B8
  c->r[3]=0u+0x80860000u; // 805A88BC
  {uint32_t ea=c->r[18]+c->r[27]; psq_store(c,0,ea,0,0);} // 805A88C0
  c->r[3]=c->r[3]+0x00000070u; // 805A88C4
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A88C8
  {uint32_t ea=c->r[18]+c->r[28]; psq_store(c,0,ea,0,0);} // 805A88CC
L_805A88D0:;
  fcmp(c,0,c->f[7],c->f[2]); // 805A88D0
  if (crb(c,1)) { goto L_805A88E0; } // 805A88D4
  fcmp(c,0,c->f[7],c->f[7]); // 805A88D8
  if (crb(c,2)) { goto L_805A8954; } // 805A88DC
L_805A88E0:;
  c->f[2]=frsqrte(c->f[7]); // 805A88E0
  c->r[0]=R8(c->r[18]+0x000000BDu); // 805A88E4
  c->r[3]=0u+0x806D0000u; // 805A88E8
  c->r[4]=c->r[18]+0x000000E0u; // 805A88EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A88F0
  {uint32_t ea=c->r[18]+0x000000E0u; psq_load(c,4,ea,0,0);} // 805A88F4
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805A88F8
  c->r[3]=c->r[3]+0xFFFFBBA0u; // 805A88FC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[5]=c->ps1[5]=RF32(ea);} // 805A8900
  fcmp(c,0,c->f[7],c->f[7]); // 805A8904
  {uint32_t ea=c->r[4]+c->r[26]; psq_load(c,3,ea,0,0);} // 805A8908
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 805A890C
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[2]); // 805A8910
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[7],c->f[1],-c->f[29])); // 805A8914
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 805A8918
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 805A891C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805A8920
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805A8924
  {uint32_t ea=c->r[18]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A8928
  {uint32_t ea=c->r[4]+c->r[26]; psq_store(c,0,ea,0,0);} // 805A892C
  if (crb(c,2)) { goto L_805A8954; } // 805A8930
  c->r[3]=0u+0x80860000u; // 805A8934
  c->r[3]=c->r[3]+0x00000070u; // 805A8938
  {uint32_t ea=0u+c->r[3]; psq_load(c,0,ea,0,0);} // 805A893C
  c->r[3]=0u+0x80860000u; // 805A8940
  {uint32_t ea=c->r[18]+c->r[29]; psq_store(c,0,ea,0,0);} // 805A8944
  c->r[3]=c->r[3]+0x00000070u; // 805A8948
  {uint32_t ea=c->r[3]+c->r[26]; psq_load(c,0,ea,0,0);} // 805A894C
  {uint32_t ea=c->r[18]+c->r[30]; psq_store(c,0,ea,0,0);} // 805A8950
L_805A8954:;
  c->r[3]=c->r[18]|c->r[18]; // 805A8954
  c->r[4]=0u+0x00000000u; // 805A8958
  c->lr=0x805A8960u; f_805A7BD4(c); // 805A895C
  W32(c->r[1]+0x00000020u,c->r[3]); // 805A8960
  c->r[3]=c->r[1]+0x00000020u; // 805A8964
  c->lr=0x805A896Cu; f_805A7BD0(c); // 805A8968
  c->r[3]=c->r[18]|c->r[18]; // 805A896C
  c->r[4]=0u+0x00000001u; // 805A8970
  c->lr=0x805A8978u; f_805A7BD4(c); // 805A8974
  W32(c->r[1]+0x00000024u,c->r[3]); // 805A8978
  c->r[3]=c->r[1]+0x00000024u; // 805A897C
  c->lr=0x805A8984u; f_805A7BD0(c); // 805A8980
  c->r[0]=R8(c->r[18]+0x00000009u); // 805A8984
  c->r[3]=c->r[1]+0x00000014u; // 805A8988
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A898C
  c->lr=0x805A8994u; f_805A7BCC(c); // 805A8990
  c->r[3]=R32(c->r[1]+0x00000014u); // 805A8994
  c->r[0]=c->r[3]+0x00000001u; // 805A8998
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A899C
  W8(c->r[18]+0x00000009u,c->r[0]); // 805A89A0
  c->r[3]=R32(c->r[1]+0x00000014u); // 805A89A4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 805A89A8
  if (!crb(c,2)) { goto L_805A8B8C; } // 805A89AC
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; cr0(c,c->r[0]); // 805A89B0
  if (crb(c,2)) { goto L_805A89C4; } // 805A89B4
  c->r[0]=0u+0x00000000u; // 805A89B8
  W32(c->r[1]+0x00000018u,c->r[0]); // 805A89BC
  goto L_805A89E8; // 805A89C0
L_805A89C4:;
  cmpu(c,0,c->r[3],0x00000100u); // 805A89C4
  if (!crb(c,2)) { goto L_805A89D8; } // 805A89C8
  c->r[0]=0u+0x000000FFu; // 805A89CC
  W8(c->r[18]+0x00000009u,c->r[0]); // 805A89D0
  goto L_805A8B8C; // 805A89D4
L_805A89D8:;
  c->r[0]=0u+0x00000000u; // 805A89D8
  W8(c->r[18]+0x00000009u,c->r[0]); // 805A89DC
  c->r[0]=0u+0x00000001u; // 805A89E0
  W32(c->r[1]+0x00000018u,c->r[0]); // 805A89E4
L_805A89E8:;
  {uint32_t ea=c->r[2]+0x00002838u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A89E8
  {uint32_t ea=c->r[18]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 805A89EC
  c->lr=0x805A89F4u; f_80585D7C(c); // 805A89F0
  c->r[3]=c->r[18]|c->r[18]; // 805A89F4
  c->lr=0x805A89FCu; f_805A7B94(c); // 805A89F8
  c->r[0]=R32(c->r[1]+0x00000018u); // 805A89FC
  c->r[4]=0u+0x00000003u; // 805A8A00
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 805A8A04
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805A8A08
  c->r[3]=c->r[18]+c->r[0]; // 805A8A0C
  c->r[3]=c->r[3]+0x000000F0u; // 805A8A10
  c->lr=0x805A8A18u; f_8053BAE8(c); // 805A8A14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A8A18
  c->r[22]=c->r[3]|c->r[3]; // 805A8A1C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A8A20
  c->lr=0x805A8A28u; f_8057B878(c); // 805A8A24
  {uint32_t ea=c->r[22]+0x00000000u; WF32(ea,c->f[1]);} // 805A8A28
  c->r[3]=c->r[1]+0x0000001Cu; // 805A8A2C
  c->lr=0x805A8A34u; f_805A7B90(c); // 805A8A30
  c->r[0]=R32(c->r[1]+0x00000018u); // 805A8A34
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805A8A38
  c->r[3]=c->r[18]+c->r[0]; // 805A8A3C
  c->r[22]=c->r[3]+0x000000F0u; // 805A8A40
  c->r[3]=c->r[22]|c->r[22]; // 805A8A44
  c->lr=0x805A8A4Cu; f_80585D94(c); // 805A8A48
  c->r[0]=R32(c->r[1]+0x00000018u); // 805A8A4C
  c->r[3]=c->r[18]+0x00000010u; // 805A8A50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A8A54
  c->r[31]=c->r[18]+c->r[0]; // 805A8A58
  c->lr=0x805A8A60u; f_805A6C0C(c); // 805A8A5C
  c->r[4]=R8(c->r[18]+0x000000BEu); // 805A8A60
  c->r[23]=c->r[3]+0x00000010u; // 805A8A64
  c->r[24]=c->r[3]+0x00000030u; // 805A8A68
  c->r[0]=R32(c->r[1]+0x00000018u); // 805A8A6C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 805A8A70
  c->r[4]=c->r[22]|c->r[22]; // 805A8A74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A8A78
  c->r[5]=c->r[23]|c->r[23]; // 805A8A7C
  c->r[6]=c->r[15]+c->r[3]; // 805A8A80
  c->r[25]=c->r[6]+0x00000064u; // 805A8A84
  c->r[3]=c->r[1]+0x00000050u; // 805A8A88
  c->r[6]=c->r[25]+c->r[0]; // 805A8A8C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[21]=c->ps1[21]=RF32(ea);} // 805A8A90
  c->lr=0x805A8A98u; f_8052C95C(c); // 805A8A94
  c->r[3]=c->r[1]+0x00000050u; // 805A8A98
  c->lr=0x805A8AA0u; f_8053D124(c); // 805A8A9C
  fcmp(c,0,c->f[1],c->f[21]); // 805A8AA0
  if (crb(c,1)) { goto L_805A8B2C; } // 805A8AA4
  c->r[3]=c->r[1]+0x00000060u; // 805A8AA8
  c->lr=0x805A8AB0u; f_805A6BDC(c); // 805A8AAC
  c->r[3]=R32(c->r[31]+0x00000110u); // 805A8AB0
  c->r[4]=c->r[1]+0x00000060u; // 805A8AB4
  c->lr=0x805A8ABCu; f_805A7AF0(c); // 805A8AB8
  c->r[0]=R32(c->r[1]+0x00000018u); // 805A8ABC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 805A8AC0
  c->r[3]=c->r[25]+c->r[0]; // 805A8AC4
  c->r[3]=c->r[3]+0x00000018u; // 805A8AC8
  c->lr=0x805A8AD0u; f_805A7AD4(c); // 805A8ACC
  c->f[22]=c->f[1]; // 805A8AD0
  c->r[5]=c->r[24]|c->r[24]; // 805A8AD4
  c->r[3]=c->r[1]+0x00000070u; // 805A8AD8
  c->r[4]=c->r[1]+0x00000060u; // 805A8ADC
  c->lr=0x805A8AE4u; f_8052C95C(c); // 805A8AE0
  c->r[3]=c->r[1]+0x00000070u; // 805A8AE4
  c->lr=0x805A8AECu; f_805A7ABC(c); // 805A8AE8
  fcmp(c,0,c->f[1],c->f[22]); // 805A8AEC
  if (crb(c,1)) { goto L_805A8B2C; } // 805A8AF0
  c->r[4]=R32(c->r[1]+0x00000018u); // 805A8AF4
  c->r[3]=c->r[18]|c->r[18]; // 805A8AF8
  c->r[5]=c->r[15]+c->r[4]; // 805A8AFC
  c->r[5]=R8(c->r[5]+0x00000125u); // 805A8B00
  c->lr=0x805A8B08u; f_805A7A8C(c); // 805A8B04
  c->r[3]=c->r[1]+0x00000018u; // 805A8B08
  c->lr=0x805A8B10u; f_805A7BD0(c); // 805A8B0C
  c->r[4]=R32(c->r[1]+0x00000018u); // 805A8B10
  c->r[3]=c->r[18]|c->r[18]; // 805A8B14
  c->lr=0x805A8B1Cu; f_805A7BD4(c); // 805A8B18
  W32(c->r[1]+0x00000028u,c->r[3]); // 805A8B1C
  c->r[3]=c->r[1]+0x00000028u; // 805A8B20
  c->lr=0x805A8B28u; f_805A7BD0(c); // 805A8B24
  goto L_805A8B8C; // 805A8B28
L_805A8B2C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 805A8B2C
  c->r[3]=c->r[18]|c->r[18]; // 805A8B30
  c->r[5]=c->r[15]+c->r[4]; // 805A8B34
  c->r[5]=R8(c->r[5]+0x00000125u); // 805A8B38
  c->lr=0x805A8B40u; f_805A7A70(c); // 805A8B3C
  c->r[5]=R32(c->r[23]+0x00000000u); // 805A8B40
  c->r[3]=c->r[1]+0x00000080u; // 805A8B44
  c->r[0]=R32(c->r[23]+0x00000004u); // 805A8B48
  c->r[4]=0u+0x00000003u; // 805A8B4C
  W32(c->r[1]+0x00000084u,c->r[0]); // 805A8B50
  W32(c->r[1]+0x00000080u,c->r[5]); // 805A8B54
  c->r[5]=R32(c->r[23]+0x00000008u); // 805A8B58
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 805A8B5C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 805A8B60
  W32(c->r[1]+0x00000088u,c->r[5]); // 805A8B64
  c->lr=0x805A8B6Cu; f_805A7A60(c); // 805A8B68
  c->r[3]=c->r[22]|c->r[22]; // 805A8B6C
  c->r[4]=c->r[1]+0x00000080u; // 805A8B70
  c->lr=0x805A8B78u; f_8052BCBC(c); // 805A8B74
  c->r[3]=c->r[22]|c->r[22]; // 805A8B78
  c->lr=0x805A8B80u; f_80585D94(c); // 805A8B7C
  c->r[3]=c->r[24]|c->r[24]; // 805A8B80
  c->lr=0x805A8B88u; f_8062AE10(c); // 805A8B84
  W32(c->r[31]+0x00000110u,c->r[3]); // 805A8B88
L_805A8B8C:;
  c->r[3]=c->r[18]|c->r[18]; // 805A8B8C
  c->r[4]=0u+0x00000001u; // 805A8B90
  c->lr=0x805A8B98u; f_805A7BD4(c); // 805A8B94
  c->r[22]=c->r[3]|c->r[3]; // 805A8B98
  c->r[3]=c->r[18]|c->r[18]; // 805A8B9C
  c->r[4]=0u+0x00000000u; // 805A8BA0
  c->lr=0x805A8BA8u; f_805A7BD4(c); // 805A8BA4
  c->r[4]=c->r[22]|c->r[22]; // 805A8BA8
  c->lr=0x805A8BB0u; f_80580800(c); // 805A8BAC
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[3]); // 805A8BB0
  if (!crb(c,0)) { goto L_805A8BBC; } // 805A8BB4
  goto L_805A8BC0; // 805A8BB8
L_805A8BBC:;
  c->r[20]=c->r[3]|c->r[3]; // 805A8BBC
L_805A8BC0:;
  c->r[17]=c->r[17]+0x00000004u; // 805A8BC0
  c->r[21]=c->r[21]+0x00000080u; // 805A8BC4
  c->r[19]=c->r[19]+0xFFFFFFFFu; // 805A8BC8
L_805A8BCC:;
  cmps(c,0,(int32_t)c->r[19],0); // 805A8BCC
  if (!crb(c,0)) { IRQCHK(c); goto L_805A817C; } // 805A8BD0
  c->r[3]=c->r[20]|c->r[20]; // 805A8BD4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A8BD8
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805A8BDC
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805A8BE0
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805A8BE4
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805A8BE8
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805A8BEC
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805A8BF0
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 805A8BF4
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 805A8BF8
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 805A8BFC
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 805A8C00
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 805A8C04
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 805A8C08
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 805A8C0C
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 805A8C10
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 805A8C14
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 805A8C18
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 805A8C1C
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 805A8C20
  {uint32_t ea=c->r[10]+0xFFFFFF68u; psq_load(c,22,ea,0,0);} // 805A8C24
  {uint32_t ea=c->r[10]+0xFFFFFF60u; c->f[22]=RF64(ea);} // 805A8C28
  {uint32_t ea=c->r[10]+0xFFFFFF58u; psq_load(c,21,ea,0,0);} // 805A8C2C
  {uint32_t ea=c->r[10]+0xFFFFFF50u; c->f[21]=RF64(ea);} // 805A8C30
  c->r[11]=c->r[10]+0xFFFFFF50u; // 805A8C34
  c->lr=0x805A8C3Cu; f_803A9C1C(c); // 805A8C38
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A8C3C
  c->lr=c->r[0]; // 805A8C40
  c->r[1]=c->r[10]|c->r[10]; // 805A8C44
  return; // 805A8C48
}

// fn_805A8C4C
void f_805A8C4C(Ctx* __restrict c) {
  trace_call(0x805A8C4Cu);
  c->r[3]=0u+0x80720000u; // 805A8C4C
  {uint32_t ea=c->r[3]+0x00002500u; c->r[11]=R32(ea); c->r[3]=ea;} // 805A8C50
  c->r[6]=0u+0x80720000u; // 805A8C54
  {uint32_t ea=c->r[6]+0x00002510u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A8C58
  c->r[12]=0u+0x80860000u; // 805A8C5C
  c->r[7]=0u+0x80860000u; // 805A8C60
  {uint32_t ea=c->r[12]+0xFFFFDC00u; W32(ea,c->r[11]); c->r[12]=ea;} // 805A8C64
  c->r[10]=R32(c->r[3]+0x00000004u); // 805A8C68
  c->r[9]=R32(c->r[3]+0x00000008u); // 805A8C6C
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 805A8C70
  {uint32_t ea=c->r[7]+0xFFFFDC10u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A8C74
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A8C78
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A8C7C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A8C80
  W32(c->r[12]+0x00000004u,c->r[10]); // 805A8C84
  W32(c->r[12]+0x00000008u,c->r[9]); // 805A8C88
  W32(c->r[12]+0x0000000Cu,c->r[8]); // 805A8C8C
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A8C90
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A8C94
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A8C98
  return; // 805A8C9C
}

// fn_805A8CA0
void f_805A8CA0(Ctx* __restrict c) {
  trace_call(0x805A8CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A8CA0
  c->r[0]=c->lr; // 805A8CA4
  c->r[10]=0u+0x80720000u; // 805A8CA8
  c->r[11]=0u+0x00000001u; // 805A8CAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A8CB0
  c->r[0]=c->r[2]+0x00002890u; // 805A8CB4
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A8CB8
  c->r[10]=c->r[10]+0x00002580u; // 805A8CBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A8CC0
  c->r[31]=c->r[3]|c->r[3]; // 805A8CC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A8CC8
  c->r[30]=c->r[6]|c->r[6]; // 805A8CCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A8CD0
  c->r[29]=c->r[4]|c->r[4]; // 805A8CD4
  W16(c->r[3]+0x00000006u,c->r[11]); // 805A8CD8
  W32(c->r[3]+0x00000000u,c->r[10]); // 805A8CDC
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 805A8CE0
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 805A8CE4
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 805A8CE8
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A8CEC
  c->r[3]=c->r[3]+0x00000010u; // 805A8CF0
  c->lr=0x805A8CF8u; f_80636944(c); // 805A8CF4
  {uint32_t ea=c->r[2]+0x00002898u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8CF8
  cmps(c,0,(int32_t)c->r[30],0); // 805A8CFC
  c->r[0]=0u+0x00000000u; // 805A8D00
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 805A8D04
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 805A8D08
  W8(c->r[31]+0x00000008u,c->r[0]); // 805A8D0C
  if (crb(c,2)) { goto L_805A8D30; } // 805A8D10
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8D14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 805A8D18
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 805A8D1C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 805A8D20
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 805A8D24
  W8(c->r[31]+0x00000009u,c->r[0]); // 805A8D28
  goto L_805A8D38; // 805A8D2C
L_805A8D30:;
  c->r[0]=0u+0x000000FFu; // 805A8D30
  W8(c->r[31]+0x00000009u,c->r[0]); // 805A8D34
L_805A8D38:;
  c->r[0]=c->r[2]+0x00002890u; // 805A8D38
  c->r[7]=0u+0x00000000u; // 805A8D3C
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 805A8D40
  c->r[3]=c->r[31]|c->r[31]; // 805A8D44
  W16(c->r[31]+0x0000000Au,c->r[7]); // 805A8D48
  W16(c->r[31]+0x0000000Cu,c->r[7]); // 805A8D4C
  {uint32_t ea=c->r[31]+0x000000F0u; psq_store(c,0,ea,0,0);} // 805A8D50
  {uint32_t ea=c->r[31]+0x000000F8u; psq_store(c,0,ea,0,0);} // 805A8D54
  {uint32_t ea=c->r[31]+0x00000100u; psq_store(c,0,ea,0,0);} // 805A8D58
  {uint32_t ea=c->r[31]+0x00000108u; psq_store(c,0,ea,0,0);} // 805A8D5C
  W32(c->r[31]+0x00000110u,c->r[7]); // 805A8D60
  W32(c->r[31]+0x00000114u,c->r[7]); // 805A8D64
  c->r[0]=R32(c->r[13]+0xFFFFABF8u); // 805A8D68
  c->r[0]=sraw(c,c->r[0],16); // 805A8D6C
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 805A8D70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A8D74
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A8D78
  c->r[29]=R32(c->r[1]+0x00000014u); // 805A8D7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A8D80
  c->lr=c->r[0]; // 805A8D84
  c->r[1]=c->r[1]+0x00000020u; // 805A8D88
  return; // 805A8D8C
}

// fn_805A8D90
void f_805A8D90(Ctx* __restrict c) {
  trace_call(0x805A8D90u);
  {uint32_t ea=c->r[2]+0x00002898u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8D90
  fcmp(c,0,c->f[0],c->f[1]); // 805A8D94
  if (!crb(c,2)) { goto L_805A8DA4; } // 805A8D98
  c->f[1]=c->f[0]; // 805A8D9C
  goto L_805A8DAC; // 805A8DA0
L_805A8DA4:;
  {uint32_t ea=c->r[2]+0x0000289Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8DA4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 805A8DA8
L_805A8DAC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A8DAC
  c->r[12]=R32(c->r[12]+0x00000018u); // 805A8DB0
  c->ctr=c->r[12]; // 805A8DB4
  if (true) { dispatch(c,c->ctr); return; } // 805A8DB8
}

// fn_805A8DBC
void f_805A8DBC(Ctx* __restrict c) {
  trace_call(0x805A8DBCu);
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 805A8DBC
  {uint32_t ea=c->r[2]+0x00002898u; c->f[1]=c->ps1[1]=RF32(ea);} // 805A8DC0
  fcmp(c,0,c->f[1],c->f[2]); // 805A8DC4
  if (crb(c,2)) return; // 805A8DC8
  {uint32_t ea=c->r[2]+0x0000289Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8DCC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 805A8DD0
  return; // 805A8DD4
}

// fn_805A8DD8
void f_805A8DD8(Ctx* __restrict c) {
  trace_call(0x805A8DD8u);
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 805A8DD8
  return; // 805A8DDC
}

// fn_805A8DE0
void f_805A8DE0(Ctx* __restrict c) {
  trace_call(0x805A8DE0u);
  c->r[5]=c->r[3]|c->r[3]; // 805A8DE0
  c->r[3]=c->r[4]|c->r[4]; // 805A8DE4
  c->r[4]=c->r[5]+0x00000010u; // 805A8DE8
  f_8062AA00(c); return; // 805A8DEC
}

// fn_805A8DF0
void f_805A8DF0(Ctx* __restrict c) {
  trace_call(0x805A8DF0u);
  c->r[5]=c->r[3]|c->r[3]; // 805A8DF0
  c->r[3]=c->r[4]|c->r[4]; // 805A8DF4
  c->r[4]=c->r[5]+0x00000010u; // 805A8DF8
  f_8062A808(c); return; // 805A8DFC
}

// fn_805A8E00
void f_805A8E00(Ctx* __restrict c) {
  trace_call(0x805A8E00u);
  c->r[5]=c->r[3]|c->r[3]; // 805A8E00
  c->r[3]=c->r[4]|c->r[4]; // 805A8E04
  c->r[4]=c->r[5]+0x00000010u; // 805A8E08
  f_8062A8E0(c); return; // 805A8E0C
}

// fn_805A8E10
void f_805A8E10(Ctx* __restrict c) {
  trace_call(0x805A8E10u);
  c->r[6]=c->r[3]|c->r[3]; // 805A8E10
  c->r[3]=c->r[4]|c->r[4]; // 805A8E14
  c->r[4]=c->r[5]|c->r[5]; // 805A8E18
  c->r[5]=c->r[6]+0x00000010u; // 805A8E1C
  f_8062A59C(c); return; // 805A8E20
}

// fn_805A8E24
void f_805A8E24(Ctx* __restrict c) {
  trace_call(0x805A8E24u);
  c->r[5]=c->r[3]|c->r[3]; // 805A8E24
  c->r[3]=c->r[4]|c->r[4]; // 805A8E28
  c->r[4]=c->r[5]+0x00000010u; // 805A8E2C
  f_8062A6B8(c); return; // 805A8E30
}

// fn_805A8E34
void f_805A8E34(Ctx* __restrict c) {
  trace_call(0x805A8E34u);
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A8E34
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8E38
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,1,ea,0,0);} // 805A8E3C
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 805A8E40
  return; // 805A8E44
}

// fn_805A8E48
void f_805A8E48(Ctx* __restrict c) {
  trace_call(0x805A8E48u);
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805A8E48
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8E4C
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,1,ea,0,0);} // 805A8E50
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A8E54
  return; // 805A8E58
}

// fn_805A8E5C
void f_805A8E5C(Ctx* __restrict c) {
  trace_call(0x805A8E5Cu);
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8E5C
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,1,ea,0,0); c->r[3]=ea;} // 805A8E60
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805A8E64
  {uint32_t ea=0u+c->r[4]; psq_load(c,3,ea,0,0);} // 805A8E68
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A8E6C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8E70
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[4],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805A8E74
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805A8E78
  {uint32_t ea=0u+c->r[3]; psq_store(c,1,ea,0,0);} // 805A8E7C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A8E80
  return; // 805A8E84
}

// fn_805A8E88
void f_805A8E88(Ctx* __restrict c) {
  trace_call(0x805A8E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A8E88
  c->r[0]=c->lr; // 805A8E8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 805A8E90
  c->r[11]=c->r[1]+0x00000030u; // 805A8E94
  c->lr=0x805A8E9Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805A8E98
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,0,ea,0,0);} // 805A8E9C
  c->r[5]=c->r[3]+0x00000010u; // 805A8EA0
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A8EA4
  c->r[10]=c->r[3]+0x00000020u; // 805A8EA8
  c->r[23]=c->r[3]+0x00000030u; // 805A8EAC
  c->r[11]=c->r[1]+0x00000030u; // 805A8EB0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8EB4
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A8EB8
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 805A8EBC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 805A8EC0
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8EC4
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,0,ea,0,0);} // 805A8EC8
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,0,ea,0,0);} // 805A8ECC
  {uint32_t ea=c->r[4]+0x00000030u; psq_store(c,0,ea,0,0);} // 805A8ED0
  {uint32_t ea=c->r[23]+0x00000008u; psq_load(c,0,ea,0,0);} // 805A8ED4
  {uint32_t ea=c->r[4]+0x00000038u; psq_store(c,0,ea,0,0);} // 805A8ED8
  {uint32_t ea=c->r[3]+0x00000040u; psq_load(c,0,ea,0,0);} // 805A8EDC
  {uint32_t ea=c->r[4]+0x00000040u; psq_store(c,0,ea,0,0);} // 805A8EE0
  {uint32_t ea=c->r[3]+0x00000048u; psq_load(c,0,ea,0,0);} // 805A8EE4
  {uint32_t ea=c->r[4]+0x00000048u; psq_store(c,0,ea,0,0);} // 805A8EE8
  {uint32_t ea=c->r[3]+0x00000050u; psq_load(c,0,ea,0,0);} // 805A8EEC
  {uint32_t ea=c->r[4]+0x00000050u; psq_store(c,0,ea,0,0);} // 805A8EF0
  {uint32_t ea=c->r[3]+0x00000058u; psq_load(c,0,ea,0,0);} // 805A8EF4
  {uint32_t ea=c->r[4]+0x00000058u; psq_store(c,0,ea,0,0);} // 805A8EF8
  {uint32_t ea=c->r[3]+0x00000060u; psq_load(c,0,ea,0,0);} // 805A8EFC
  {uint32_t ea=c->r[4]+0x00000060u; psq_store(c,0,ea,0,0);} // 805A8F00
  {uint32_t ea=c->r[3]+0x00000068u; psq_load(c,0,ea,0,0);} // 805A8F04
  {uint32_t ea=c->r[4]+0x00000068u; psq_store(c,0,ea,0,0);} // 805A8F08
  {uint32_t ea=c->r[3]+0x00000070u; psq_load(c,0,ea,0,0);} // 805A8F0C
  {uint32_t ea=c->r[4]+0x00000070u; psq_store(c,0,ea,0,0);} // 805A8F10
  {uint32_t ea=c->r[3]+0x00000078u; psq_load(c,0,ea,0,0);} // 805A8F14
  {uint32_t ea=c->r[4]+0x00000078u; psq_store(c,0,ea,0,0);} // 805A8F18
  {uint32_t ea=c->r[3]+0x00000080u; psq_load(c,0,ea,0,0);} // 805A8F1C
  {uint32_t ea=c->r[4]+0x00000080u; psq_store(c,0,ea,0,0);} // 805A8F20
  {uint32_t ea=c->r[3]+0x00000088u; psq_load(c,0,ea,0,0);} // 805A8F24
  {uint32_t ea=c->r[4]+0x00000088u; psq_store(c,0,ea,0,0);} // 805A8F28
  {uint32_t ea=c->r[3]+0x00000090u; psq_load(c,0,ea,0,0);} // 805A8F2C
  {uint32_t ea=c->r[4]+0x00000090u; psq_store(c,0,ea,0,0);} // 805A8F30
  {uint32_t ea=c->r[3]+0x00000098u; psq_load(c,0,ea,0,0);} // 805A8F34
  {uint32_t ea=c->r[4]+0x00000098u; psq_store(c,0,ea,0,0);} // 805A8F38
  {uint32_t ea=c->r[3]+0x000000A0u; psq_load(c,0,ea,0,0);} // 805A8F3C
  {uint32_t ea=c->r[4]+0x000000A0u; psq_store(c,0,ea,0,0);} // 805A8F40
  {uint32_t ea=c->r[3]+0x000000A8u; psq_load(c,0,ea,0,0);} // 805A8F44
  {uint32_t ea=c->r[4]+0x000000A8u; psq_store(c,0,ea,0,0);} // 805A8F48
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8F4C
  {uint32_t ea=c->r[4]+0x000000B0u; WF32(ea,c->f[0]);} // 805A8F50
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8F54
  {uint32_t ea=c->r[4]+0x000000B4u; WF32(ea,c->f[0]);} // 805A8F58
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805A8F5C
  {uint32_t ea=c->r[4]+0x000000B8u; WF32(ea,c->f[0]);} // 805A8F60
  c->r[8]=R8(c->r[3]+0x000000BCu); // 805A8F64
  W8(c->r[4]+0x000000BCu,c->r[8]); // 805A8F68
  c->r[8]=R8(c->r[3]+0x000000BDu); // 805A8F6C
  W8(c->r[4]+0x000000BDu,c->r[8]); // 805A8F70
  c->r[8]=R8(c->r[3]+0x000000BEu); // 805A8F74
  W8(c->r[4]+0x000000BEu,c->r[8]); // 805A8F78
  {uint32_t ea=c->r[3]+0x000000D0u; psq_load(c,0,ea,0,0);} // 805A8F7C
  {uint32_t ea=c->r[4]+0x000000D0u; psq_store(c,0,ea,0,0);} // 805A8F80
  {uint32_t ea=c->r[3]+0x000000D8u; psq_load(c,0,ea,0,0);} // 805A8F84
  {uint32_t ea=c->r[4]+0x000000D8u; psq_store(c,0,ea,0,0);} // 805A8F88
  {uint32_t ea=c->r[3]+0x000000E0u; psq_load(c,0,ea,0,0);} // 805A8F8C
  {uint32_t ea=c->r[4]+0x000000E0u; psq_store(c,0,ea,0,0);} // 805A8F90
  {uint32_t ea=c->r[3]+0x000000E8u; psq_load(c,0,ea,0,0);} // 805A8F94
  {uint32_t ea=c->r[4]+0x000000E8u; psq_store(c,0,ea,0,0);} // 805A8F98
  c->r[0]=R8(c->r[3]+0x00000009u); // 805A8F9C
  W8(c->r[4]+0x00000009u,c->r[0]); // 805A8FA0
  c->lr=0x805A8FA8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805A8FA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 805A8FA8
  c->lr=c->r[0]; // 805A8FAC
  c->r[1]=c->r[1]+0x00000030u; // 805A8FB0
  return; // 805A8FB4
}

// fn_805A8FB8
void f_805A8FB8(Ctx* __restrict c) {
  trace_call(0x805A8FB8u);
  W8(c->r[3]+0x000000BEu,c->r[4]); // 805A8FB8
  return; // 805A8FBC
}

// fn_805A8FC0
void f_805A8FC0(Ctx* __restrict c) {
  trace_call(0x805A8FC0u);
  c->r[6]=0u+0x80720000u; // 805A8FC0
  {uint32_t ea=c->r[6]+0x00002570u; c->r[5]=R32(ea); c->r[6]=ea;} // 805A8FC4
  c->r[7]=0u+0x80860000u; // 805A8FC8
  {uint32_t ea=c->r[7]+0xFFFFDC20u; W32(ea,c->r[5]); c->r[7]=ea;} // 805A8FCC
  c->r[4]=R32(c->r[6]+0x00000004u); // 805A8FD0
  c->r[3]=R32(c->r[6]+0x00000008u); // 805A8FD4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A8FD8
  W32(c->r[7]+0x00000004u,c->r[4]); // 805A8FDC
  W32(c->r[7]+0x00000008u,c->r[3]); // 805A8FE0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805A8FE4
  return; // 805A8FE8
}

// fn_805A8FEC
void f_805A8FEC(Ctx* __restrict c) {
  trace_call(0x805A8FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A8FEC
  c->r[0]=c->lr; // 805A8FF0
  c->r[11]=0u+0x80720000u; // 805A8FF4
  c->r[4]=0u+0x806C0000u; // 805A8FF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A8FFC
  c->r[4]=c->r[4]+0xFFFFDC88u; // 805A9000
  c->r[3]=0u+0x80860000u; // 805A9004
  c->r[5]=0u+0x80860000u; // 805A9008
  c->r[12]=R32(c->r[13]+0xFFFFAC00u); // 805A900C
  c->r[11]=c->r[11]+0x000025F0u; // 805A9010
  c->r[9]=0u+0x806C0000u; // 805A9014
  c->r[0]=0u+0x0000000Cu; // 805A9018
  W32(c->r[1]+0x00000008u,c->r[11]); // 805A901C
  c->r[7]=0u+0x00000000u; // 805A9020
  c->r[3]=c->r[3]+0xFFFFDC30u; // 805A9024
  c->r[4]=c->r[4]+0x000000E6u; // 805A9028
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805A902C
  c->r[0]=0u+0x00000001u; // 805A9030
  c->r[5]=c->r[5]+0x000003A0u; // 805A9034
  c->r[9]=c->r[9]+0xFFFFDC68u; // 805A9038
  W32(c->r[1]+0x00000010u,c->r[7]); // 805A903C
  c->r[6]=0u+0x00000120u; // 805A9040
  c->r[8]=0u+0x00000000u; // 805A9044
  c->r[10]=0u+0x00000001u; // 805A9048
  W32(c->r[1]+0x00000014u,c->r[7]); // 805A904C
  W32(c->r[1]+0x00000018u,c->r[7]); // 805A9050
  c->r[7]=0u+0x00000000u; // 805A9054
  W32(c->r[11]+0x00000008u,c->r[12]); // 805A9058
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 805A905C
  c->lr=0x805A9064u; f_8062E0DC(c); // 805A9060
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A9064
  c->lr=c->r[0]; // 805A9068
  c->r[1]=c->r[1]+0x00000020u; // 805A906C
  return; // 805A9070
}

// fn_805A9074
void f_805A9074(Ctx* __restrict c) {
  trace_call(0x805A9074u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9074
  c->r[0]=c->lr; // 805A9078
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A907C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A9080
  c->r[31]=c->r[3]|c->r[3]; // 805A9084
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9088
  c->r[30]=c->r[5]|c->r[5]; // 805A908C
  c->r[5]=0u+0x00000002u; // 805A9090
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A9094
  c->r[29]=c->r[4]|c->r[4]; // 805A9098
  c->r[4]=0u+0x00000000u; // 805A909C
  c->lr=0x805A90A4u; f_805C5570(c); // 805A90A0
  c->r[7]=0u+0x80000000u; // 805A90A4
  c->r[8]=0u+0x00000000u; // 805A90A8
  c->r[5]=c->r[31]+0x00000010u; // 805A90AC
  c->r[6]=0u+0x80720000u; // 805A90B0
  {uint32_t ea=0u+c->r[29]; psq_load(c,3,ea,0,0);} // 805A90B4
  c->r[9]=c->r[31]-c->r[5]; // 805A90B8
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,0,0);} // 805A90BC
  c->r[6]=c->r[6]+0x00002710u; // 805A90C0
  {uint32_t ea=c->r[29]+0x00000010u; psq_load(c,1,ea,0,0);} // 805A90C4
  c->r[10]=rotl(c->r[7],0)&0x3FFFFFFFu; cr0(c,c->r[10]); // 805A90C8
  {uint32_t ea=c->r[29]+0x00000018u; psq_load(c,0,ea,0,0);} // 805A90CC
  W32(c->r[31]+0x00000088u,c->r[8]); // 805A90D0
  W32(c->r[31]+0x0000008Cu,c->r[8]); // 805A90D4
  W32(c->r[31]+0x00000090u,c->r[7]); // 805A90D8
  W32(c->r[31]+0x00000094u,c->r[8]); // 805A90DC
  W32(c->r[31]+0x00000098u,c->r[8]); // 805A90E0
  W32(c->r[31]+0x0000009Cu,c->r[7]); // 805A90E4
  W8(c->r[31]+0x00000020u,c->r[9]); // 805A90E8
  W32(c->r[31]+0x00000000u,c->r[6]); // 805A90EC
  W32(c->r[31]+0x000000C0u,c->r[8]); // 805A90F0
  W32(c->r[31]+0x000000C4u,c->r[8]); // 805A90F4
  W32(c->r[31]+0x000000C8u,c->r[7]); // 805A90F8
  W8(c->r[31]+0x000000CCu,c->r[8]); // 805A90FC
  {uint32_t ea=c->r[31]+0x000000A0u; psq_store(c,3,ea,0,0);} // 805A9100
  {uint32_t ea=c->r[31]+0x000000A8u; psq_store(c,2,ea,0,0);} // 805A9104
  {uint32_t ea=c->r[31]+0x000000B0u; psq_store(c,1,ea,0,0);} // 805A9108
  {uint32_t ea=c->r[31]+0x000000B8u; psq_store(c,0,ea,0,0);} // 805A910C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 805A9110
  if (crb(c,2)) { goto L_805A9120; } // 805A9114
  cmps(c,0,(int32_t)c->r[8],0); // 805A9118
  if (crb(c,2)) { goto L_805A914C; } // 805A911C
L_805A9120:;
  c->r[4]=c->r[10]+0x00000001u; // 805A9120
  cmps(c,0,(int32_t)c->r[4],4); // 805A9124
  if (!crb(c,0)) { goto L_805A9130; } // 805A9128
  c->r[4]=0u+0x00000004u; // 805A912C
L_805A9130:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 805A9130
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805A9134
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 805A9138
  if (!crb(c,0)) { goto L_805A914C; } // 805A913C
  c->r[3]=c->r[31]+0x000000C0u; // 805A9140
  c->r[5]=0u+0x00000004u; // 805A9144
  c->lr=0x805A914Cu; f_806239C0(c); // 805A9148
L_805A914C:;
  c->r[3]=c->r[31]|c->r[31]; // 805A914C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A9150
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A9154
  c->r[29]=R32(c->r[1]+0x00000014u); // 805A9158
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A915C
  c->lr=c->r[0]; // 805A9160
  c->r[1]=c->r[1]+0x00000020u; // 805A9164
  return; // 805A9168
}

// fn_805A916C
void f_805A916C(Ctx* __restrict c) {
  trace_call(0x805A916Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A916C
  c->r[0]=c->lr; // 805A9170
  cmps(c,0,(int32_t)c->r[3],0); // 805A9174
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A9178
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A917C
  c->r[31]=c->r[4]|c->r[4]; // 805A9180
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A9184
  c->r[30]=c->r[3]|c->r[3]; // 805A9188
  if (crb(c,2)) { goto L_805A91E4; } // 805A918C
  c->r[0]=addc(c,c->r[3],0x000000C0u,0); cr0(c,c->r[0]); // 805A9190
  if (crb(c,2)) { goto L_805A91BC; } // 805A9194
  c->r[0]=R32(c->r[3]+0x000000C8u); // 805A9198
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A919C
  if (!crb(c,2)) { goto L_805A91BC; } // 805A91A0
  c->r[0]=R32(c->r[3]+0x000000C8u); // 805A91A4
  c->r[6]=0u+0x00000018u; // 805A91A8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A91AC
  c->r[4]=R32(c->r[30]+0x000000C0u); // 805A91B0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A91B4
  c->lr=0x805A91BCu; f_8062C630(c); // 805A91B8
L_805A91BC:;
  c->r[3]=c->r[30]|c->r[30]; // 805A91BC
  c->r[4]=0u+0x00000000u; // 805A91C0
  c->lr=0x805A91C8u; f_805ABD54(c); // 805A91C4
  cmps(c,0,(int32_t)c->r[31],0); // 805A91C8
  if (!crb(c,1)) { goto L_805A91E4; } // 805A91CC
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A91D0
  c->r[4]=c->r[30]|c->r[30]; // 805A91D4
  c->r[5]=R16(c->r[30]+0x00000004u); // 805A91D8
  c->r[6]=0u+0x00000032u; // 805A91DC
  c->lr=0x805A91E4u; f_8062C630(c); // 805A91E0
L_805A91E4:;
  c->r[3]=c->r[30]|c->r[30]; // 805A91E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A91E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 805A91EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A91F0
  c->lr=c->r[0]; // 805A91F4
  c->r[1]=c->r[1]+0x00000010u; // 805A91F8
  return; // 805A91FC
}

// fn_805A9200
void f_805A9200(Ctx* __restrict c) {
  trace_call(0x805A9200u);
  c->r[3]=0u+0x00000000u; // 805A9200
  return; // 805A9204
}

// fn_805A9208
void f_805A9208(Ctx* __restrict c) {
  trace_call(0x805A9208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9208
  c->r[0]=c->lr; // 805A920C
  c->r[4]=0u+0x000000D0u; // 805A9210
  c->r[5]=0u+0x00000032u; // 805A9214
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A921C
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9220
  c->r[30]=c->r[3]|c->r[3]; // 805A9224
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A9228
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A922C
  c->lr=0x805A9234u; f_8062C34C(c); // 805A9230
  cmps(c,0,(int32_t)c->r[3],0); // 805A9234
  c->r[0]=0u+0x000000D0u; // 805A9238
  W16(c->r[3]+0x00000004u,c->r[0]); // 805A923C
  c->r[31]=c->r[3]|c->r[3]; // 805A9240
  if (crb(c,2)) { goto L_805A9308; } // 805A9244
  c->r[29]=R32(c->r[30]+0x0000002Cu); // 805A9248
  c->r[4]=0u+0x00000000u; // 805A924C
  c->r[5]=0u+0x00000002u; // 805A9250
  c->lr=0x805A9258u; f_805C5570(c); // 805A9254
  c->r[8]=0u+0x00000000u; // 805A9258
  W32(c->r[31]+0x00000088u,c->r[8]); // 805A925C
  c->r[0]=c->r[31]+0x00000010u; // 805A9260
  c->r[6]=0u+0x80720000u; // 805A9264
  W32(c->r[31]+0x0000008Cu,c->r[8]); // 805A9268
  c->r[7]=0u+0x80000000u; // 805A926C
  c->r[9]=c->r[31]-c->r[0]; // 805A9270
  c->r[6]=c->r[6]+0x00002710u; // 805A9274
  W32(c->r[31]+0x00000090u,c->r[7]); // 805A9278
  W32(c->r[31]+0x00000094u,c->r[8]); // 805A927C
  W32(c->r[31]+0x00000098u,c->r[8]); // 805A9280
  W32(c->r[31]+0x0000009Cu,c->r[7]); // 805A9284
  W8(c->r[31]+0x00000020u,c->r[9]); // 805A9288
  W32(c->r[31]+0x00000000u,c->r[6]); // 805A928C
  W32(c->r[31]+0x000000C0u,c->r[8]); // 805A9290
  W32(c->r[31]+0x000000C4u,c->r[8]); // 805A9294
  W32(c->r[31]+0x000000C8u,c->r[7]); // 805A9298
  W8(c->r[31]+0x000000CCu,c->r[8]); // 805A929C
  {uint32_t ea=c->r[30]+0x000000A0u; psq_load(c,0,ea,0,0);} // 805A92A0
  {uint32_t ea=c->r[31]+0x000000A0u; psq_store(c,0,ea,0,0);} // 805A92A4
  {uint32_t ea=c->r[30]+0x000000A8u; psq_load(c,0,ea,0,0);} // 805A92A8
  {uint32_t ea=c->r[31]+0x000000A8u; psq_store(c,0,ea,0,0);} // 805A92AC
  {uint32_t ea=c->r[30]+0x000000B0u; psq_load(c,0,ea,0,0);} // 805A92B0
  {uint32_t ea=c->r[31]+0x000000B0u; psq_store(c,0,ea,0,0);} // 805A92B4
  {uint32_t ea=c->r[30]+0x000000B8u; psq_load(c,0,ea,0,0);} // 805A92B8
  {uint32_t ea=c->r[31]+0x000000B8u; psq_store(c,0,ea,0,0);} // 805A92BC
  W32(c->r[31]+0x0000002Cu,c->r[29]); // 805A92C0
  c->r[0]=R32(c->r[31]+0x000000C8u); // 805A92C4
  c->r[4]=R32(c->r[31]+0x000000C0u); // 805A92C8
  c->r[3]=rotl(c->r[0],0)&0x3FFFFFFFu; cr0(c,c->r[3]); // 805A92CC
  if (crb(c,2)) { goto L_805A92DC; } // 805A92D0
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 805A92D4
  if (crb(c,2)) { goto L_805A9308; } // 805A92D8
L_805A92DC:;
  c->r[4]=c->r[3]+0x00000001u; // 805A92DC
  cmps(c,0,(int32_t)c->r[4],4); // 805A92E0
  if (!crb(c,0)) { goto L_805A92EC; } // 805A92E4
  c->r[4]=0u+0x00000004u; // 805A92E8
L_805A92EC:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 805A92EC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805A92F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 805A92F4
  if (!crb(c,0)) { goto L_805A9308; } // 805A92F8
  c->r[3]=c->r[31]+0x000000C0u; // 805A92FC
  c->r[5]=0u+0x00000004u; // 805A9300
  c->lr=0x805A9308u; f_806239C0(c); // 805A9304
L_805A9308:;
  c->r[4]=R32(c->r[31]+0x00000090u); // 805A9308
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805A930C
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 805A9310
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805A9314
  if (!crb(c,0)) { goto L_805A9368; } // 805A9318
  c->r[0]=R32(c->r[31]+0x00000090u); // 805A931C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A9320
  if (!crb(c,2)) { goto L_805A933C; } // 805A9324
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A9328
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A932C
  c->r[4]=R32(c->r[31]+0x00000088u); // 805A9330
  c->r[6]=0u+0x00000018u; // 805A9334
  c->lr=0x805A933Cu; f_8062C630(c); // 805A9338
L_805A933C:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805A933C
  c->r[5]=0u+0x00000018u; // 805A9340
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9344
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A9348
  c->lr=0x805A9350u; f_8062C34C(c); // 805A934C
  W32(c->r[31]+0x00000088u,c->r[3]); // 805A9350
  c->r[0]=R32(c->r[31]+0x00000090u); // 805A9354
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 805A9358
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805A935C
  c->r[0]=c->r[3]|c->r[0]; // 805A9360
  W32(c->r[31]+0x00000090u,c->r[0]); // 805A9364
L_805A9368:;
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 805A9368
  c->r[3]=0u+0x00000000u; // 805A936C
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 805A9370
  cmps(c,0,(int32_t)c->r[4],0); // 805A9374
  c->r[6]=R32(c->r[30]+0x00000088u); // 805A9378
  c->r[5]=R32(c->r[31]+0x00000088u); // 805A937C
  if (!crb(c,1)) { goto L_805A9410; } // 805A9380
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 805A9384
  c->ctr=c->r[0]; // 805A9388
  if (crb(c,2)) { goto L_805A93FC; } // 805A938C
L_805A9390:;
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A9390
  W32(c->r[5]+c->r[3],c->r[0]); // 805A9394
  c->r[3]=c->r[3]+0x00000004u; // 805A9398
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A939C
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93A0
  c->r[3]=c->r[3]+0x00000004u; // 805A93A4
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93A8
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93AC
  c->r[3]=c->r[3]+0x00000004u; // 805A93B0
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93B4
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93B8
  c->r[3]=c->r[3]+0x00000004u; // 805A93BC
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93C0
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93C4
  c->r[3]=c->r[3]+0x00000004u; // 805A93C8
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93CC
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93D0
  c->r[3]=c->r[3]+0x00000004u; // 805A93D4
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93D8
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93DC
  c->r[3]=c->r[3]+0x00000004u; // 805A93E0
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A93E4
  W32(c->r[5]+c->r[3],c->r[0]); // 805A93E8
  c->r[3]=c->r[3]+0x00000004u; // 805A93EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A9390; } // 805A93F0
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 805A93F4
  if (crb(c,2)) { goto L_805A9410; } // 805A93F8
L_805A93FC:;
  c->ctr=c->r[4]; // 805A93FC
L_805A9400:;
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A9400
  W32(c->r[5]+c->r[3],c->r[0]); // 805A9404
  c->r[3]=c->r[3]+0x00000004u; // 805A9408
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A9400; } // 805A940C
L_805A9410:;
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 805A9410
  c->r[0]=R32(c->r[30]+0x00000098u); // 805A9414
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 805A9418
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805A941C
  if (!crb(c,0)) { goto L_805A9470; } // 805A9420
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805A9424
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A9428
  if (!crb(c,2)) { goto L_805A9444; } // 805A942C
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A9430
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9434
  c->r[4]=R32(c->r[31]+0x00000094u); // 805A9438
  c->r[6]=0u+0x00000018u; // 805A943C
  c->lr=0x805A9444u; f_8062C630(c); // 805A9440
L_805A9444:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 805A9444
  c->r[5]=0u+0x00000018u; // 805A9448
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A944C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A9450
  c->lr=0x805A9458u; f_8062C34C(c); // 805A9454
  W32(c->r[31]+0x00000094u,c->r[3]); // 805A9458
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805A945C
  c->r[3]=R32(c->r[30]+0x00000098u); // 805A9460
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805A9464
  c->r[0]=c->r[3]|c->r[0]; // 805A9468
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805A946C
L_805A9470:;
  c->r[4]=R32(c->r[30]+0x00000098u); // 805A9470
  c->r[3]=0u+0x00000000u; // 805A9474
  W32(c->r[31]+0x00000098u,c->r[4]); // 805A9478
  cmps(c,0,(int32_t)c->r[4],0); // 805A947C
  c->r[6]=R32(c->r[30]+0x00000094u); // 805A9480
  c->r[5]=R32(c->r[31]+0x00000094u); // 805A9484
  if (!crb(c,1)) { goto L_805A9518; } // 805A9488
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 805A948C
  c->ctr=c->r[0]; // 805A9490
  if (crb(c,2)) { goto L_805A9504; } // 805A9494
L_805A9498:;
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A9498
  W32(c->r[5]+c->r[3],c->r[0]); // 805A949C
  c->r[3]=c->r[3]+0x00000004u; // 805A94A0
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94A4
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94A8
  c->r[3]=c->r[3]+0x00000004u; // 805A94AC
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94B0
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94B4
  c->r[3]=c->r[3]+0x00000004u; // 805A94B8
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94BC
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94C0
  c->r[3]=c->r[3]+0x00000004u; // 805A94C4
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94C8
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94CC
  c->r[3]=c->r[3]+0x00000004u; // 805A94D0
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94D4
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94D8
  c->r[3]=c->r[3]+0x00000004u; // 805A94DC
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94E0
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94E4
  c->r[3]=c->r[3]+0x00000004u; // 805A94E8
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A94EC
  W32(c->r[5]+c->r[3],c->r[0]); // 805A94F0
  c->r[3]=c->r[3]+0x00000004u; // 805A94F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A9498; } // 805A94F8
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 805A94FC
  if (crb(c,2)) { goto L_805A9518; } // 805A9500
L_805A9504:;
  c->ctr=c->r[4]; // 805A9504
L_805A9508:;
  c->r[0]=R32(c->r[6]+c->r[3]); // 805A9508
  W32(c->r[5]+c->r[3],c->r[0]); // 805A950C
  c->r[3]=c->r[3]+0x00000004u; // 805A9510
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A9508; } // 805A9514
L_805A9518:;
  c->r[4]=R32(c->r[31]+0x00000080u); // 805A9518
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805A951C
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 805A9520
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805A9524
  if (!crb(c,0)) { goto L_805A9578; } // 805A9528
  c->r[0]=R32(c->r[31]+0x00000080u); // 805A952C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A9530
  if (!crb(c,2)) { goto L_805A954C; } // 805A9534
  c->r[5]=rotl(c->r[4],4)&0xFFFFFFF0u; // 805A9538
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A953C
  c->r[4]=R32(c->r[31]+0x00000078u); // 805A9540
  c->r[6]=0u+0x00000018u; // 805A9544
  c->lr=0x805A954Cu; f_8062C630(c); // 805A9548
L_805A954C:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805A954C
  c->r[5]=0u+0x00000018u; // 805A9550
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9554
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805A9558
  c->lr=0x805A9560u; f_8062C34C(c); // 805A955C
  W32(c->r[31]+0x00000078u,c->r[3]); // 805A9560
  c->r[0]=R32(c->r[31]+0x00000080u); // 805A9564
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 805A9568
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805A956C
  c->r[0]=c->r[3]|c->r[0]; // 805A9570
  W32(c->r[31]+0x00000080u,c->r[0]); // 805A9574
L_805A9578:;
  c->r[7]=R32(c->r[30]+0x0000007Cu); // 805A9578
  c->r[3]=0u+0x00000000u; // 805A957C
  W32(c->r[31]+0x0000007Cu,c->r[7]); // 805A9580
  cmps(c,0,(int32_t)c->r[7],0); // 805A9584
  c->r[9]=R32(c->r[30]+0x00000078u); // 805A9588
  c->r[8]=R32(c->r[31]+0x00000078u); // 805A958C
  if (!crb(c,1)) { goto L_805A9690; } // 805A9590
  c->r[0]=rotl(c->r[7],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 805A9594
  c->ctr=c->r[0]; // 805A9598
  if (crb(c,2)) { goto L_805A965C; } // 805A959C
L_805A95A0:;
  c->r[0]=R32(c->r[9]+c->r[3]); // 805A95A0
  c->r[6]=c->r[9]+c->r[3]; // 805A95A4
  W32(c->r[8]+c->r[3],c->r[0]); // 805A95A8
  c->r[5]=c->r[8]+c->r[3]; // 805A95AC
  c->r[3]=c->r[3]+0x00000010u; // 805A95B0
  c->r[0]=R32(c->r[6]+0x00000004u); // 805A95B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 805A95B8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A95BC
  c->r[4]=R32(c->r[6]+0x00000008u); // 805A95C0
  c->r[6]=c->r[9]+c->r[3]; // 805A95C4
  W32(c->r[5]+0x00000008u,c->r[4]); // 805A95C8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 805A95CC
  c->r[5]=c->r[8]+c->r[3]; // 805A95D0
  c->r[0]=R32(c->r[9]+c->r[3]); // 805A95D4
  W32(c->r[8]+c->r[3],c->r[0]); // 805A95D8
  c->r[3]=c->r[3]+0x00000010u; // 805A95DC
  c->r[0]=R32(c->r[6]+0x00000004u); // 805A95E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 805A95E4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A95E8
  c->r[4]=R32(c->r[6]+0x00000008u); // 805A95EC
  c->r[6]=c->r[9]+c->r[3]; // 805A95F0
  W32(c->r[5]+0x00000008u,c->r[4]); // 805A95F4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 805A95F8
  c->r[5]=c->r[8]+c->r[3]; // 805A95FC
  c->r[0]=R32(c->r[9]+c->r[3]); // 805A9600
  W32(c->r[8]+c->r[3],c->r[0]); // 805A9604
  c->r[3]=c->r[3]+0x00000010u; // 805A9608
  c->r[0]=R32(c->r[6]+0x00000004u); // 805A960C
  W32(c->r[5]+0x00000004u,c->r[0]); // 805A9610
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A9614
  c->r[4]=R32(c->r[6]+0x00000008u); // 805A9618
  c->r[6]=c->r[9]+c->r[3]; // 805A961C
  W32(c->r[5]+0x00000008u,c->r[4]); // 805A9620
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 805A9624
  c->r[5]=c->r[8]+c->r[3]; // 805A9628
  c->r[0]=R32(c->r[9]+c->r[3]); // 805A962C
  W32(c->r[8]+c->r[3],c->r[0]); // 805A9630
  c->r[3]=c->r[3]+0x00000010u; // 805A9634
  c->r[0]=R32(c->r[6]+0x00000004u); // 805A9638
  W32(c->r[5]+0x00000004u,c->r[0]); // 805A963C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A9640
  c->r[4]=R32(c->r[6]+0x00000008u); // 805A9644
  W32(c->r[5]+0x00000008u,c->r[4]); // 805A9648
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 805A964C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A95A0; } // 805A9650
  c->r[7]=c->r[7]&0x00000003u; cr0(c,c->r[7]); // 805A9654
  if (crb(c,2)) { goto L_805A9690; } // 805A9658
L_805A965C:;
  c->ctr=c->r[7]; // 805A965C
L_805A9660:;
  c->r[0]=R32(c->r[9]+c->r[3]); // 805A9660
  c->r[6]=c->r[9]+c->r[3]; // 805A9664
  W32(c->r[8]+c->r[3],c->r[0]); // 805A9668
  c->r[5]=c->r[8]+c->r[3]; // 805A966C
  c->r[3]=c->r[3]+0x00000010u; // 805A9670
  c->r[0]=R32(c->r[6]+0x00000004u); // 805A9674
  W32(c->r[5]+0x00000004u,c->r[0]); // 805A9678
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805A967C
  c->r[4]=R32(c->r[6]+0x00000008u); // 805A9680
  W32(c->r[5]+0x00000008u,c->r[4]); // 805A9684
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 805A9688
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A9660; } // 805A968C
L_805A9690:;
  c->r[3]=c->r[31]|c->r[31]; // 805A9690
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A9694
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A9698
  c->r[29]=R32(c->r[1]+0x00000014u); // 805A969C
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A96A0
  c->lr=c->r[0]; // 805A96A4
  c->r[1]=c->r[1]+0x00000020u; // 805A96A8
  return; // 805A96AC
}

// fn_805A96B0
void f_805A96B0(Ctx* __restrict c) {
  trace_call(0x805A96B0u);
  {uint32_t ea=c->r[3]+0x000000A0u; psq_load(c,0,ea,0,0);} // 805A96B0
  {uint32_t ea=0u+c->r[4]; psq_store(c,0,ea,0,0);} // 805A96B4
  {uint32_t ea=c->r[3]+0x000000A8u; psq_load(c,0,ea,0,0);} // 805A96B8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 805A96BC
  {uint32_t ea=c->r[3]+0x000000B0u; psq_load(c,0,ea,0,0);} // 805A96C0
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,0,ea,0,0);} // 805A96C4
  {uint32_t ea=c->r[3]+0x000000B8u; psq_load(c,0,ea,0,0);} // 805A96C8
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,0,ea,0,0);} // 805A96CC
  return; // 805A96D0
}

// fn_805A96D4
void f_805A96D4(Ctx* __restrict c) {
  trace_call(0x805A96D4u);
  c->r[0]=R32(c->r[3]+0x000000C4u); // 805A96D4
  c->r[6]=0u+0x00000000u; // 805A96D8
  c->ctr=c->r[0]; // 805A96DC
  cmps(c,0,(int32_t)c->r[0],0); // 805A96E0
  if (!crb(c,1)) { goto L_805A9708; } // 805A96E4
L_805A96E8:;
  c->r[5]=R32(c->r[3]+0x000000C0u); // 805A96E8
  c->r[0]=R32(c->r[5]+c->r[6]); // 805A96EC
  cmpu(c,0,c->r[0],c->r[4]); // 805A96F0
  if (!crb(c,2)) { goto L_805A9700; } // 805A96F4
  c->r[3]=0u+0x01000000u; // 805A96F8
  return; // 805A96FC
L_805A9700:;
  c->r[6]=c->r[6]+0x00000004u; // 805A9700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A96E8; } // 805A9704
L_805A9708:;
  c->r[3]=0u+0x00000000u; // 805A9708
  return; // 805A970C
}

// fn_805A9710
void f_805A9710(Ctx* __restrict c) {
  trace_call(0x805A9710u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9710
  c->r[0]=c->lr; // 805A9714
  W32(c->r[1]+0x00000034u,c->r[0]); // 805A9718
  c->r[0]=0u+0x00000000u; // 805A971C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805A9720
  W32(c->r[1]+0x00000028u,c->r[30]); // 805A9724
  W32(c->r[1]+0x00000024u,c->r[29]); // 805A9728
  c->r[29]=c->r[4]|c->r[4]; // 805A972C
  W32(c->r[1]+0x00000020u,c->r[28]); // 805A9730
  c->r[28]=c->r[3]|c->r[3]; // 805A9734
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 805A9738
  W32(c->r[1]+0x00000008u,c->r[3]); // 805A973C
  W32(c->r[1]+0x00000010u,c->r[0]); // 805A9740
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805A9744
  c->r[31]=c->r[3]+0xFFFFFFFFu; // 805A9748
  c->r[30]=rotl(c->r[31],2)&0xFFFFFFFCu; // 805A974C
  goto L_805A9780; // 805A9750
L_805A9754:;
  c->r[3]=R32(c->r[28]+0x00000088u); // 805A9754
  c->r[3]=R32(c->r[3]+c->r[30]); // 805A9758
  cmps(c,0,(int32_t)c->r[3],0); // 805A975C
  if (crb(c,2)) { goto L_805A9778; } // 805A9760
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A9764
  c->r[4]=c->r[1]+0x00000008u; // 805A9768
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A976C
  c->ctr=c->r[12]; // 805A9770
  if (true) { c->lr=0x805A9778u; dispatch(c,c->ctr); } // 805A9774
L_805A9778:;
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 805A9778
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 805A977C
L_805A9780:;
  cmps(c,0,(int32_t)c->r[31],0); // 805A9780
  if (!crb(c,0)) { IRQCHK(c); goto L_805A9754; } // 805A9784
  c->r[0]=R32(c->r[1]+0x00000010u); // 805A9788
  cmps(c,0,(int32_t)c->r[0],0); // 805A978C
  if (!crb(c,2)) { goto L_805A97D4; } // 805A9790
  c->r[0]=R32(c->r[28]+0x000000C8u); // 805A9794
  c->r[3]=R32(c->r[28]+0x000000C4u); // 805A9798
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805A979C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805A97A0
  if (!crb(c,2)) { goto L_805A97B4; } // 805A97A4
  c->r[3]=c->r[28]+0x000000C0u; // 805A97A8
  c->r[4]=0u+0x00000004u; // 805A97AC
  c->lr=0x805A97B4u; f_80623A68(c); // 805A97B0
L_805A97B4:;
  c->r[4]=R32(c->r[28]+0x000000C4u); // 805A97B4
  c->r[0]=0u+0x00000001u; // 805A97B8
  c->r[5]=R32(c->r[28]+0x000000C0u); // 805A97BC
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A97C0
  c->r[4]=c->r[4]+0x00000001u; // 805A97C4
  W32(c->r[5]+c->r[3],c->r[29]); // 805A97C8
  W32(c->r[28]+0x000000C4u,c->r[4]); // 805A97CC
  W8(c->r[28]+0x000000CCu,c->r[0]); // 805A97D0
L_805A97D4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805A97D4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805A97D8
  c->r[30]=R32(c->r[1]+0x00000028u); // 805A97DC
  c->r[29]=R32(c->r[1]+0x00000024u); // 805A97E0
  c->r[28]=R32(c->r[1]+0x00000020u); // 805A97E4
  c->lr=c->r[0]; // 805A97E8
  c->r[1]=c->r[1]+0x00000030u; // 805A97EC
  return; // 805A97F0
}

// fn_805A97F4
void f_805A97F4(Ctx* __restrict c) {
  trace_call(0x805A97F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A97F4
  c->r[0]=c->lr; // 805A97F8
  c->r[6]=0u+0x00000000u; // 805A97FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 805A9800
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805A9804
  c->r[31]=c->r[3]|c->r[3]; // 805A9808
  W32(c->r[1]+0x00000028u,c->r[30]); // 805A980C
  c->r[30]=0u+0x00000000u; // 805A9810
  W32(c->r[1]+0x00000024u,c->r[29]); // 805A9814
  W32(c->r[1]+0x00000020u,c->r[28]); // 805A9818
  c->r[0]=R32(c->r[3]+0x000000C4u); // 805A981C
  c->ctr=c->r[0]; // 805A9820
  cmps(c,0,(int32_t)c->r[0],0); // 805A9824
  if (!crb(c,1)) { goto L_805A984C; } // 805A9828
L_805A982C:;
  c->r[5]=R32(c->r[3]+0x000000C0u); // 805A982C
  c->r[0]=R32(c->r[5]+c->r[6]); // 805A9830
  cmpu(c,0,c->r[0],c->r[4]); // 805A9834
  if (!crb(c,2)) { goto L_805A9840; } // 805A9838
  goto L_805A9850; // 805A983C
L_805A9840:;
  c->r[6]=c->r[6]+0x00000004u; // 805A9840
  c->r[30]=c->r[30]+0x00000001u; // 805A9844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805A982C; } // 805A9848
L_805A984C:;
  c->r[30]=0u+0xFFFFFFFFu; // 805A984C
L_805A9850:;
  c->r[0]=rotl(c->r[30],1)&0x00000001u; // 805A9850
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 805A9854
  c->r[0]=c->r[0]^0x00000001u; // 805A9858
  W32(c->r[1]+0x00000008u,c->r[3]); // 805A985C
  W8(c->r[1]+0x00000010u,c->r[0]); // 805A9860
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805A9864
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 805A9868
  c->r[28]=rotl(c->r[29],2)&0xFFFFFFFCu; // 805A986C
  goto L_805A98A0; // 805A9870
L_805A9874:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 805A9874
  c->r[3]=R32(c->r[3]+c->r[28]); // 805A9878
  cmps(c,0,(int32_t)c->r[3],0); // 805A987C
  if (crb(c,2)) { goto L_805A9898; } // 805A9880
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A9884
  c->r[4]=c->r[1]+0x00000008u; // 805A9888
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805A988C
  c->ctr=c->r[12]; // 805A9890
  if (true) { c->lr=0x805A9898u; dispatch(c,c->ctr); } // 805A9894
L_805A9898:;
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 805A9898
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 805A989C
L_805A98A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 805A98A0
  if (!crb(c,0)) { IRQCHK(c); goto L_805A9874; } // 805A98A4
  cmps(c,0,(int32_t)c->r[30],0); // 805A98A8
  if (crb(c,0)) { goto L_805A98D8; } // 805A98AC
  c->r[4]=R32(c->r[31]+0x000000C4u); // 805A98B0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 805A98B4
  c->r[5]=R32(c->r[31]+0x000000C0u); // 805A98B8
  c->r[0]=0u+0x00000001u; // 805A98BC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 805A98C0
  W32(c->r[31]+0x000000C4u,c->r[4]); // 805A98C4
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A98C8
  c->r[4]=R32(c->r[5]+c->r[4]); // 805A98CC
  W32(c->r[5]+c->r[3],c->r[4]); // 805A98D0
  W8(c->r[31]+0x000000CCu,c->r[0]); // 805A98D4
L_805A98D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805A98D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805A98DC
  c->r[30]=R32(c->r[1]+0x00000028u); // 805A98E0
  c->r[29]=R32(c->r[1]+0x00000024u); // 805A98E4
  c->r[28]=R32(c->r[1]+0x00000020u); // 805A98E8
  c->lr=c->r[0]; // 805A98EC
  c->r[1]=c->r[1]+0x00000030u; // 805A98F0
  return; // 805A98F4
}

// fn_805A98F8
void f_805A98F8(Ctx* __restrict c) {
  trace_call(0x805A98F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A98F8
  c->r[0]=c->lr; // 805A98FC
  c->r[5]=0u+0x806C0000u; // 805A9900
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9904
  c->r[5]=c->r[5]+0xFFFFDE80u; // 805A9908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A990C
  c->r[31]=c->r[5]+0x0000002Cu; // 805A9910
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9914
  c->r[30]=c->r[4]|c->r[4]; // 805A9918
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A991C
  c->r[29]=c->r[3]|c->r[3]; // 805A9920
  c->r[6]=R32(c->r[3]+0x000000C8u); // 805A9924
  c->r[0]=rotl(c->r[6],0)&0x80000000u; cr0(c,c->r[0]); // 805A9928
  if (!crb(c,2)) { goto L_805A9964; } // 805A992C
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 805A9930
  c->lr=0x805A9938u; f_80627B94(c); // 805A9934
  c->r[12]=R32(c->r[30]+0x00000000u); // 805A9938
  c->r[8]=c->r[3]|c->r[3]; // 805A993C
  c->r[0]=R32(c->r[29]+0x000000C4u); // 805A9940
  c->r[3]=c->r[30]|c->r[30]; // 805A9944
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805A9948
  c->r[5]=c->r[31]|c->r[31]; // 805A994C
  c->r[4]=0u+0x00000003u; // 805A9950
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A9954
  c->r[6]=R32(c->r[29]+0x000000C0u); // 805A9958
  c->ctr=c->r[12]; // 805A995C
  if (true) { c->lr=0x805A9964u; dispatch(c,c->ctr); } // 805A9960
L_805A9964:;
  c->r[5]=0u+0x80860000u; // 805A9964
  c->r[3]=c->r[29]|c->r[29]; // 805A9968
  c->r[4]=c->r[30]|c->r[30]; // 805A996C
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 805A9970
  c->lr=0x805A9978u; f_805ABF00(c); // 805A9974
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A9978
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A997C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A9980
  c->r[29]=R32(c->r[1]+0x00000014u); // 805A9984
  c->lr=c->r[0]; // 805A9988
  c->r[1]=c->r[1]+0x00000020u; // 805A998C
  return; // 805A9990
}

// fn_805A9994
void f_805A9994(Ctx* __restrict c) {
  trace_call(0x805A9994u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9994
  c->r[0]=c->lr; // 805A9998
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A999C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A99A0
  c->r[31]=c->r[3]|c->r[3]; // 805A99A4
  c->r[0]=R32(c->r[3]+0x000000C4u); // 805A99A8
  cmps(c,0,(int32_t)c->r[0],0); // 805A99AC
  if (!crb(c,2)) { goto L_805A99F4; } // 805A99B0
  c->r[0]=R32(c->r[3]+0x000000C8u); // 805A99B4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A99B8
  if (!crb(c,2)) { goto L_805A99D8; } // 805A99BC
  c->r[0]=R32(c->r[31]+0x000000C8u); // 805A99C0
  c->r[6]=0u+0x00000018u; // 805A99C4
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A99C8
  c->r[4]=R32(c->r[31]+0x000000C0u); // 805A99CC
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805A99D0
  c->lr=0x805A99D8u; f_8062C630(c); // 805A99D4
L_805A99D8:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 805A99D8
  c->r[3]=0u+0x00000000u; // 805A99DC
  W32(c->r[31]+0x000000C0u,c->r[3]); // 805A99E0
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805A99E4
  c->r[0]=c->r[0]|0x80000000u; // 805A99E8
  W32(c->r[31]+0x000000C4u,c->r[3]); // 805A99EC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 805A99F0
L_805A99F4:;
  c->r[3]=c->r[31]|c->r[31]; // 805A99F4
  c->lr=0x805A99FCu; f_805ABFDC(c); // 805A99F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A99FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A9A00
  c->lr=c->r[0]; // 805A9A04
  c->r[1]=c->r[1]+0x00000010u; // 805A9A08
  return; // 805A9A0C
}

// fn_805A9A10
void f_805A9A10(Ctx* __restrict c) {
  trace_call(0x805A9A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9A10
  c->r[0]=c->lr; // 805A9A14
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9A18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A9A1C
  c->r[31]=c->r[3]|c->r[3]; // 805A9A20
  c->r[0]=R8(c->r[3]+0x000000CCu); // 805A9A24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805A9A28
  if (crb(c,2)) { goto L_805A9A60; } // 805A9A2C
  c->r[4]=R32(c->r[3]+0x000000C4u); // 805A9A30
  c->r[3]=R32(c->r[3]+0x000000C0u); // 805A9A34
  cmps(c,0,(int32_t)c->r[4],1); // 805A9A38
  if (!crb(c,1)) { goto L_805A9A58; } // 805A9A3C
  c->r[0]=0u+0x00000000u; // 805A9A40
  W8(c->r[1]+0x00000008u,c->r[0]); // 805A9A44
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 805A9A48
  c->r[6]=c->r[1]+0x00000008u; // 805A9A4C
  c->r[4]=0u+0x00000000u; // 805A9A50
  c->lr=0x805A9A58u; f_805A9A74(c); // 805A9A54
L_805A9A58:;
  c->r[0]=0u+0x00000000u; // 805A9A58
  W8(c->r[31]+0x000000CCu,c->r[0]); // 805A9A5C
L_805A9A60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A9A60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A9A64
  c->lr=c->r[0]; // 805A9A68
  c->r[1]=c->r[1]+0x00000020u; // 805A9A6C
  return; // 805A9A70
}

// fn_805A9A74
void f_805A9A74(Ctx* __restrict c) {
  trace_call(0x805A9A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9A74
  c->r[0]=c->lr; // 805A9A78
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9A7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A9A80
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9A84
  c->r[30]=c->r[6]|c->r[6]; // 805A9A88
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A9A8C
  c->r[29]=c->r[5]|c->r[5]; // 805A9A90
  W32(c->r[1]+0x00000010u,c->r[28]); // 805A9A94
  c->r[28]=c->r[3]|c->r[3]; // 805A9A98
L_805A9A9C:;
  c->r[0]=c->r[4]+c->r[29]; // 805A9A9C
  c->r[5]=c->r[29]|c->r[29]; // 805A9AA0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 805A9AA4
  c->r[31]=c->r[4]|c->r[4]; // 805A9AA8
  c->r[3]=R32(c->r[28]+c->r[0]); // 805A9AAC
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A9AB0
  goto L_805A9AC0; // 805A9AB4
L_805A9AB8:;
  c->r[31]=c->r[31]+0x00000001u; // 805A9AB8
  c->r[6]=c->r[6]+0x00000004u; // 805A9ABC
L_805A9AC0:;
  c->r[8]=R32(c->r[28]+c->r[6]); // 805A9AC0
  c->r[7]=R32(c->r[3]+0x00000014u); // 805A9AC4
  c->r[0]=R32(c->r[8]+0x00000014u); // 805A9AC8
  c->r[0]=c->r[7]^c->r[0]; // 805A9ACC
  c->r[0]=cntlz(c->r[0]); // 805A9AD0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]<<((c->r[0])&31)); // 805A9AD4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805A9AD8
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805A9ADC
  c->r[0]=0u-c->r[7]; // 805A9AE0
  c->r[0]=c->r[0]|c->r[7]; // 805A9AE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805A9AE8
  if (!crb(c,2)) { IRQCHK(c); goto L_805A9AB8; } // 805A9AEC
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 805A9AF0
  goto L_805A9B00; // 805A9AF4
L_805A9AF8:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805A9AF8
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 805A9AFC
L_805A9B00:;
  c->r[9]=R32(c->r[28]+c->r[7]); // 805A9B00
  c->r[0]=R32(c->r[3]+0x00000014u); // 805A9B04
  c->r[8]=R32(c->r[9]+0x00000014u); // 805A9B08
  c->r[0]=c->r[8]^c->r[0]; // 805A9B0C
  c->r[0]=cntlz(c->r[0]); // 805A9B10
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 805A9B14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805A9B18
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805A9B1C
  c->r[0]=0u-c->r[8]; // 805A9B20
  c->r[0]=c->r[0]|c->r[8]; // 805A9B24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805A9B28
  if (!crb(c,2)) { IRQCHK(c); goto L_805A9AF8; } // 805A9B2C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 805A9B30
  if (crb(c,0)) { goto L_805A9B54; } // 805A9B34
  if (crb(c,2)) { goto L_805A9B48; } // 805A9B38
  c->r[0]=R32(c->r[28]+c->r[6]); // 805A9B3C
  W32(c->r[28]+c->r[7],c->r[0]); // 805A9B40
  W32(c->r[28]+c->r[6],c->r[9]); // 805A9B44
L_805A9B48:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805A9B48
  c->r[31]=c->r[31]+0x00000001u; // 805A9B4C
  c->r[6]=c->r[6]+0x00000004u; // 805A9B50
L_805A9B54:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[5]); // 805A9B54
  if (!crb(c,1)) { IRQCHK(c); goto L_805A9AC0; } // 805A9B58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 805A9B5C
  if (!crb(c,0)) { goto L_805A9B78; } // 805A9B60
  c->r[0]=R8(c->r[30]+0x00000000u); // 805A9B64
  c->r[3]=c->r[28]|c->r[28]; // 805A9B68
  W8(c->r[1]+0x00000008u,c->r[0]); // 805A9B6C
  c->r[6]=c->r[1]+0x00000008u; // 805A9B70
  c->lr=0x805A9B78u; f_805A9A74(c); // 805A9B74
L_805A9B78:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[29]); // 805A9B78
  if (!crb(c,0)) { goto L_805A9B88; } // 805A9B7C
  c->r[4]=c->r[31]|c->r[31]; // 805A9B80
  IRQCHK(c); goto L_805A9A9C; // 805A9B84
L_805A9B88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A9B88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A9B8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A9B90
  c->r[29]=R32(c->r[1]+0x00000014u); // 805A9B94
  c->r[28]=R32(c->r[1]+0x00000010u); // 805A9B98
  c->lr=c->r[0]; // 805A9B9C
  c->r[1]=c->r[1]+0x00000020u; // 805A9BA0
  return; // 805A9BA4
}

// fn_805A9BA8
void f_805A9BA8(Ctx* __restrict c) {
  trace_call(0x805A9BA8u);
  c->r[3]=0u+0x00000000u; // 805A9BA8
  return; // 805A9BAC
}

// fn_805A9BB0
void f_805A9BB0(Ctx* __restrict c) {
  trace_call(0x805A9BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9BB0
  c->r[0]=c->lr; // 805A9BB4
  cmps(c,0,(int32_t)c->r[3],0); // 805A9BB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9BBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A9BC0
  c->r[31]=c->r[4]|c->r[4]; // 805A9BC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9BC8
  c->r[30]=c->r[3]|c->r[3]; // 805A9BCC
  if (crb(c,2)) { goto L_805A9C58; } // 805A9BD0
  W32(c->r[1]+0x00000008u,c->r[4]); // 805A9BD4
  c->r[4]=c->r[1]+0x00000008u; // 805A9BD8
  c->lr=0x805A9BE0u; f_805C54E4(c); // 805A9BDC
  c->r[3]=0u+0x80720000u; // 805A9BE0
  cmps(c,0,(int32_t)c->r[31],0); // 805A9BE4
  c->r[4]=0u+0x00000000u; // 805A9BE8
  c->r[0]=0u+0x80000000u; // 805A9BEC
  c->r[3]=c->r[3]+0x00002710u; // 805A9BF0
  W32(c->r[30]+0x00000088u,c->r[4]); // 805A9BF4
  W32(c->r[30]+0x0000008Cu,c->r[4]); // 805A9BF8
  W32(c->r[30]+0x00000090u,c->r[0]); // 805A9BFC
  W32(c->r[30]+0x00000094u,c->r[4]); // 805A9C00
  W32(c->r[30]+0x00000098u,c->r[4]); // 805A9C04
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 805A9C08
  W32(c->r[30]+0x00000000u,c->r[3]); // 805A9C0C
  W32(c->r[30]+0x000000C0u,c->r[4]); // 805A9C10
  W32(c->r[30]+0x000000C4u,c->r[4]); // 805A9C14
  W32(c->r[30]+0x000000C8u,c->r[0]); // 805A9C18
  if (crb(c,2)) { goto L_805A9C58; } // 805A9C1C
  c->r[3]=rotl(c->r[0],0)&0x3FFFFFFFu; cr0(c,c->r[3]); // 805A9C20
  if (crb(c,2)) { goto L_805A9C30; } // 805A9C24
  cmps(c,0,(int32_t)c->r[4],0); // 805A9C28
  if (crb(c,2)) { goto L_805A9C58; } // 805A9C2C
L_805A9C30:;
  c->r[0]=c->r[3]+0x00000001u; // 805A9C30
  c->r[4]=0u+0x00000004u; // 805A9C34
  cmps(c,0,(int32_t)c->r[0],4); // 805A9C38
  if (crb(c,0)) { goto L_805A9C44; } // 805A9C3C
  c->r[4]=c->r[0]|c->r[0]; // 805A9C40
L_805A9C44:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 805A9C44
  if (!crb(c,0)) { goto L_805A9C58; } // 805A9C48
  c->r[3]=c->r[30]+0x000000C0u; // 805A9C4C
  c->r[5]=0u+0x00000004u; // 805A9C50
  c->lr=0x805A9C58u; f_806239C0(c); // 805A9C54
L_805A9C58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805A9C58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805A9C5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805A9C60
  c->lr=c->r[0]; // 805A9C64
  c->r[1]=c->r[1]+0x00000020u; // 805A9C68
  return; // 805A9C6C
}

// fn_805A9C70
void f_805A9C70(Ctx* __restrict c) {
  trace_call(0x805A9C70u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A9C70
  c->r[4]=0u+0xFFFFFFFFu; // 805A9C74
  c->r[12]=R32(c->r[12]+0x00000008u); // 805A9C78
  c->ctr=c->r[12]; // 805A9C7C
  if (true) { dispatch(c,c->ctr); return; } // 805A9C80
}

// fn_805A9C84
void f_805A9C84(Ctx* __restrict c) {
  trace_call(0x805A9C84u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805A9C84
  c->r[12]=c->r[1]|c->r[1]; // 805A9C88
  c->r[11]=addc(c,~c->r[11],0xFFFFFEF0u,1); // 805A9C8C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9C90
  c->r[0]=c->lr; // 805A9C94
  c->r[3]=0u+0x806C0000u; // 805A9C98
  c->r[4]=0u+0x806C0000u; // 805A9C9C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805A9CA0
  c->r[4]=c->r[4]+0xFFFFDF08u; // 805A9CA4
  c->r[5]=0u+0x80860000u; // 805A9CA8
  c->r[3]=c->r[3]+0xFFFFDEC0u; // 805A9CAC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805A9CB0
  c->r[0]=0u+0x00000003u; // 805A9CB4
  c->r[4]=c->r[4]+0x00000027u; // 805A9CB8
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 805A9CBC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805A9CC0
  c->r[30]=0u+0x00000000u; // 805A9CC4
  c->r[6]=0u+0x000000D0u; // 805A9CC8
  c->r[7]=0u+0x00000000u; // 805A9CCC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805A9CD0
  c->r[8]=0u+0x00000000u; // 805A9CD4
  c->r[9]=0u+0x00000000u; // 805A9CD8
  c->r[10]=0u+0x00000000u; // 805A9CDC
  W32(c->r[1]+0x00000008u,c->r[3]); // 805A9CE0
  c->r[3]=0u+0x80860000u; // 805A9CE4
  c->r[3]=c->r[3]+0xFFFFDC60u; // 805A9CE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805A9CEC
  W32(c->r[1]+0x00000010u,c->r[30]); // 805A9CF0
  W32(c->r[1]+0x00000014u,c->r[30]); // 805A9CF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9CF8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805A9CFC
  c->lr=0x805A9D04u; f_8062E0DC(c); // 805A9D00
  c->r[29]=addc(c,c->r[1],0x00000030u,0); cr0(c,c->r[29]); // 805A9D04
  if (crb(c,2)) { goto L_805A9D94; } // 805A9D08
  W32(c->r[1]+0x00000020u,c->r[30]); // 805A9D0C
  c->r[3]=c->r[29]|c->r[29]; // 805A9D10
  c->r[4]=c->r[1]+0x00000020u; // 805A9D14
  c->r[31]=0u+0x00000000u; // 805A9D18
  c->lr=0x805A9D20u; f_805C54E4(c); // 805A9D1C
  c->r[3]=0u+0x80720000u; // 805A9D20
  cmps(c,0,(int32_t)c->r[31],0); // 805A9D24
  c->r[0]=0u+0x80000000u; // 805A9D28
  W32(c->r[1]+0x000000B8u,c->r[30]); // 805A9D2C
  c->r[3]=c->r[3]+0x00002710u; // 805A9D30
  W32(c->r[1]+0x000000BCu,c->r[30]); // 805A9D34
  W32(c->r[1]+0x000000C0u,c->r[0]); // 805A9D38
  W32(c->r[1]+0x000000C4u,c->r[30]); // 805A9D3C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 805A9D40
  W32(c->r[1]+0x000000CCu,c->r[0]); // 805A9D44
  W32(c->r[1]+0x00000030u,c->r[3]); // 805A9D48
  W32(c->r[1]+0x000000F0u,c->r[30]); // 805A9D4C
  W32(c->r[1]+0x000000F4u,c->r[30]); // 805A9D50
  W32(c->r[1]+0x000000F8u,c->r[0]); // 805A9D54
  if (crb(c,2)) { goto L_805A9D94; } // 805A9D58
  c->r[3]=rotl(c->r[0],0)&0x3FFFFFFFu; cr0(c,c->r[3]); // 805A9D5C
  if (crb(c,2)) { goto L_805A9D6C; } // 805A9D60
  cmps(c,0,(int32_t)c->r[30],0); // 805A9D64
  if (crb(c,2)) { goto L_805A9D94; } // 805A9D68
L_805A9D6C:;
  c->r[0]=c->r[3]+0x00000001u; // 805A9D6C
  c->r[4]=0u+0x00000004u; // 805A9D70
  cmps(c,0,(int32_t)c->r[0],4); // 805A9D74
  if (crb(c,0)) { goto L_805A9D80; } // 805A9D78
  c->r[4]=c->r[0]|c->r[0]; // 805A9D7C
L_805A9D80:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 805A9D80
  if (!crb(c,0)) { goto L_805A9D94; } // 805A9D84
  c->r[3]=c->r[29]+0x000000C0u; // 805A9D88
  c->r[5]=0u+0x00000004u; // 805A9D8C
  c->lr=0x805A9D94u; f_806239C0(c); // 805A9D90
L_805A9D94:;
  c->r[7]=0u+0x806C0000u; // 805A9D94
  c->r[6]=0u+0x80860000u; // 805A9D98
  c->r[7]=c->r[7]+0xFFFFDF08u; // 805A9D9C
  c->r[5]=0u+0x805B0000u; // 805A9DA0
  c->r[3]=0u+0x805B0000u; // 805A9DA4
  c->r[4]=c->r[6]+0xFFFFDC90u; // 805A9DA8
  c->r[0]=R32(c->r[1]+0x00000030u); // 805A9DAC
  c->r[7]=c->r[7]+0x00000027u; // 805A9DB0
  c->r[5]=c->r[5]+0xFFFF9BB0u; // 805A9DB4
  c->r[3]=c->r[3]+0xFFFF9C70u; // 805A9DB8
  W32(c->r[6]+0xFFFFDC90u,c->r[7]); // 805A9DBC
  W32(c->r[4]+0x00000004u,c->r[5]); // 805A9DC0
  W32(c->r[4]+0x00000008u,c->r[3]); // 805A9DC4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805A9DC8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805A9DCC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805A9DD0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805A9DD4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805A9DD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805A9DDC
  c->lr=c->r[0]; // 805A9DE0
  c->r[1]=c->r[10]|c->r[10]; // 805A9DE4
  return; // 805A9DE8
}

// fn_805A9DEC
void f_805A9DEC(Ctx* __restrict c) {
  trace_call(0x805A9DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9DEC
  c->r[0]=c->lr; // 805A9DF0
  cmps(c,0,(int32_t)c->r[3],0); // 805A9DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 805A9DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805A9DFC
  c->r[31]=c->r[4]|c->r[4]; // 805A9E00
  W32(c->r[1]+0x00000008u,c->r[30]); // 805A9E04
  c->r[30]=c->r[3]|c->r[3]; // 805A9E08
  if (crb(c,2)) { goto L_805A9E34; } // 805A9E0C
  c->r[4]=0u+0x00000000u; // 805A9E10
  c->lr=0x805A9E18u; f_805ABD54(c); // 805A9E14
  cmps(c,0,(int32_t)c->r[31],0); // 805A9E18
  if (!crb(c,1)) { goto L_805A9E34; } // 805A9E1C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9E20
  c->r[4]=c->r[30]|c->r[30]; // 805A9E24
  c->r[5]=R16(c->r[30]+0x00000004u); // 805A9E28
  c->r[6]=0u+0x00000032u; // 805A9E2C
  c->lr=0x805A9E34u; f_8062C630(c); // 805A9E30
L_805A9E34:;
  c->r[3]=c->r[30]|c->r[30]; // 805A9E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805A9E38
  c->r[30]=R32(c->r[1]+0x00000008u); // 805A9E3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 805A9E40
  c->lr=c->r[0]; // 805A9E44
  c->r[1]=c->r[1]+0x00000010u; // 805A9E48
  return; // 805A9E4C
}

// fn_805A9E50
void f_805A9E50(Ctx* __restrict c) {
  trace_call(0x805A9E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9E50
  c->r[0]=c->lr; // 805A9E54
  cmps(c,0,(int32_t)c->r[3],0); // 805A9E58
  W32(c->r[1]+0x00000034u,c->r[0]); // 805A9E5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805A9E60
  W32(c->r[1]+0x00000028u,c->r[30]); // 805A9E64
  W32(c->r[1]+0x00000024u,c->r[29]); // 805A9E68
  c->r[29]=c->r[4]|c->r[4]; // 805A9E6C
  W32(c->r[1]+0x00000020u,c->r[28]); // 805A9E70
  c->r[28]=c->r[3]|c->r[3]; // 805A9E74
  if (crb(c,2)) { goto L_805A9F3C; } // 805A9E78
  c->r[5]=0u+0x80720000u; // 805A9E7C
  c->r[4]=0u+0x80720000u; // 805A9E80
  c->r[5]=c->r[5]+0x00002778u; // 805A9E84
  W32(c->r[3]+0x00000000u,c->r[5]); // 805A9E88
  c->r[4]=c->r[4]+0x00000510u; // 805A9E8C
  c->r[0]=0u+0x00000001u; // 805A9E90
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 805A9E94
  W32(c->r[1]+0x00000008u,c->r[4]); // 805A9E98
  c->r[3]=R32(c->r[3]+0x00000154u); // 805A9E9C
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805A9EA0
  c->r[31]=rotl(c->r[30],3)&0xFFFFFFF8u; // 805A9EA4
  goto L_805A9ED0; // 805A9EA8
L_805A9EAC:;
  c->r[3]=R32(c->r[28]+0x00000150u); // 805A9EAC
  c->r[4]=c->r[1]+0x00000008u; // 805A9EB0
  c->r[3]=R32(c->r[3]+c->r[31]); // 805A9EB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 805A9EB8
  c->r[12]=R32(c->r[12]+0x00000024u); // 805A9EBC
  c->ctr=c->r[12]; // 805A9EC0
  if (true) { c->lr=0x805A9EC8u; dispatch(c,c->ctr); } // 805A9EC4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805A9EC8
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 805A9ECC
L_805A9ED0:;
  cmps(c,0,(int32_t)c->r[30],0); // 805A9ED0
  if (!crb(c,0)) { IRQCHK(c); goto L_805A9EAC; } // 805A9ED4
  c->r[0]=addc(c,c->r[28],0x00000150u,0); cr0(c,c->r[0]); // 805A9ED8
  c->r[0]=0u+0x00000000u; // 805A9EDC
  W32(c->r[28]+0x00000154u,c->r[0]); // 805A9EE0
  if (crb(c,2)) { goto L_805A9F0C; } // 805A9EE4
  c->r[0]=R32(c->r[28]+0x00000158u); // 805A9EE8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A9EEC
  if (!crb(c,2)) { goto L_805A9F0C; } // 805A9EF0
  c->r[0]=R32(c->r[28]+0x00000158u); // 805A9EF4
  c->r[6]=0u+0x00000018u; // 805A9EF8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9EFC
  c->r[4]=R32(c->r[28]+0x00000150u); // 805A9F00
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805A9F04
  c->lr=0x805A9F0Cu; f_8062C630(c); // 805A9F08
L_805A9F0C:;
  cmps(c,0,(int32_t)c->r[28],0); // 805A9F0C
  if (crb(c,2)) { goto L_805A9F20; } // 805A9F10
  c->r[3]=c->r[28]|c->r[28]; // 805A9F14
  c->r[4]=0u+0x00000000u; // 805A9F18
  c->lr=0x805A9F20u; f_805ABD54(c); // 805A9F1C
L_805A9F20:;
  cmps(c,0,(int32_t)c->r[29],0); // 805A9F20
  if (!crb(c,1)) { goto L_805A9F3C; } // 805A9F24
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9F28
  c->r[4]=c->r[28]|c->r[28]; // 805A9F2C
  c->r[5]=R16(c->r[28]+0x00000004u); // 805A9F30
  c->r[6]=0u+0x00000032u; // 805A9F34
  c->lr=0x805A9F3Cu; f_8062C630(c); // 805A9F38
L_805A9F3C:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805A9F3C
  c->r[3]=c->r[28]|c->r[28]; // 805A9F40
  c->r[30]=R32(c->r[1]+0x00000028u); // 805A9F44
  c->r[29]=R32(c->r[1]+0x00000024u); // 805A9F48
  c->r[28]=R32(c->r[1]+0x00000020u); // 805A9F4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 805A9F50
  c->lr=c->r[0]; // 805A9F54
  c->r[1]=c->r[1]+0x00000030u; // 805A9F58
  return; // 805A9F5C
}

// fn_805A9F60
void f_805A9F60(Ctx* __restrict c) {
  trace_call(0x805A9F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805A9F60
  c->r[0]=c->lr; // 805A9F64
  c->r[4]=0u+0x00000160u; // 805A9F68
  c->r[5]=0u+0x00000032u; // 805A9F6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 805A9F70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805A9F74
  W32(c->r[1]+0x00000018u,c->r[30]); // 805A9F78
  c->r[30]=c->r[3]|c->r[3]; // 805A9F7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 805A9F80
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9F84
  c->lr=0x805A9F8Cu; f_8062C34C(c); // 805A9F88
  cmps(c,0,(int32_t)c->r[3],0); // 805A9F8C
  c->r[0]=0u+0x00000160u; // 805A9F90
  W16(c->r[3]+0x00000004u,c->r[0]); // 805A9F94
  c->r[31]=c->r[3]|c->r[3]; // 805A9F98
  if (crb(c,2)) { goto L_805A9FD8; } // 805A9F9C
  c->r[29]=R32(c->r[30]+0x0000002Cu); // 805A9FA0
  c->r[5]=c->r[30]+0x000000A0u; // 805A9FA4
  c->r[4]=R32(c->r[30]+0x00000010u); // 805A9FA8
  c->lr=0x805A9FB0u; f_805AC318(c); // 805A9FAC
  c->r[4]=0u+0x80720000u; // 805A9FB0
  c->r[3]=0u+0x00000000u; // 805A9FB4
  c->r[4]=c->r[4]+0x00002778u; // 805A9FB8
  W32(c->r[31]+0x00000000u,c->r[4]); // 805A9FBC
  c->r[0]=0u+0x80000000u; // 805A9FC0
  W32(c->r[31]+0x00000150u,c->r[3]); // 805A9FC4
  W32(c->r[31]+0x00000154u,c->r[3]); // 805A9FC8
  W32(c->r[31]+0x00000158u,c->r[0]); // 805A9FCC
  W8(c->r[31]+0x0000015Cu,c->r[3]); // 805A9FD0
  W32(c->r[31]+0x0000002Cu,c->r[29]); // 805A9FD4
L_805A9FD8:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 805A9FD8
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805A9FDC
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805A9FE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805A9FE4
  if (!crb(c,0)) { goto L_805AA038; } // 805A9FE8
  c->r[0]=R32(c->r[31]+0x00000090u); // 805A9FEC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805A9FF0
  if (!crb(c,2)) { goto L_805AA00C; } // 805A9FF4
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805A9FF8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805A9FFC
  c->r[4]=R32(c->r[31]+0x00000088u); // 805AA000
  c->r[6]=0u+0x00000018u; // 805AA004
  c->lr=0x805AA00Cu; f_8062C630(c); // 805AA008
L_805AA00C:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805AA00C
  c->r[5]=0u+0x00000018u; // 805AA010
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AA014
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AA018
  c->lr=0x805AA020u; f_8062C34C(c); // 805AA01C
  W32(c->r[31]+0x00000088u,c->r[3]); // 805AA020
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AA024
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 805AA028
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AA02C
  c->r[0]=c->r[3]|c->r[0]; // 805AA030
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AA034
L_805AA038:;
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 805AA038
  c->r[7]=0u+0x00000000u; // 805AA03C
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 805AA040
  cmps(c,1,(int32_t)c->r[4],0); // 805AA044
  c->r[6]=R32(c->r[30]+0x00000088u); // 805AA048
  c->r[5]=R32(c->r[31]+0x00000088u); // 805AA04C
  if (!crb(c,5)) { goto L_805AA120; } // 805AA050
  cmps(c,0,(int32_t)c->r[4],8); // 805AA054
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 805AA058
  if (!crb(c,1)) { goto L_805AA0F0; } // 805AA05C
  c->r[9]=0u+0x00000000u; // 805AA060
  if (crb(c,4)) { goto L_805AA07C; } // 805AA064
  c->r[3]=0u+0x80000000u; // 805AA068
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 805AA06C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AA070
  if (crb(c,1)) { goto L_805AA07C; } // 805AA074
  c->r[9]=0u+0x00000001u; // 805AA078
L_805AA07C:;
  cmps(c,0,(int32_t)c->r[9],0); // 805AA07C
  if (crb(c,2)) { goto L_805AA0F0; } // 805AA080
  c->r[0]=c->r[8]+0x00000007u; // 805AA084
  c->r[3]=c->r[6]|c->r[6]; // 805AA088
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 805AA08C
  c->r[9]=c->r[5]|c->r[5]; // 805AA090
  c->ctr=c->r[0]; // 805AA094
  cmps(c,0,(int32_t)c->r[8],0); // 805AA098
  if (!crb(c,1)) { goto L_805AA0F0; } // 805AA09C
L_805AA0A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AA0A0
  c->r[7]=c->r[7]+0x00000008u; // 805AA0A4
  W32(c->r[9]+0x00000000u,c->r[0]); // 805AA0A8
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AA0AC
  W32(c->r[9]+0x00000004u,c->r[0]); // 805AA0B0
  c->r[0]=R32(c->r[3]+0x00000008u); // 805AA0B4
  W32(c->r[9]+0x00000008u,c->r[0]); // 805AA0B8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 805AA0BC
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 805AA0C0
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AA0C4
  W32(c->r[9]+0x00000010u,c->r[0]); // 805AA0C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 805AA0CC
  W32(c->r[9]+0x00000014u,c->r[0]); // 805AA0D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AA0D4
  W32(c->r[9]+0x00000018u,c->r[0]); // 805AA0D8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AA0DC
  c->r[3]=c->r[3]+0x00000020u; // 805AA0E0
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 805AA0E4
  c->r[9]=c->r[9]+0x00000020u; // 805AA0E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA0A0; } // 805AA0EC
L_805AA0F0:;
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 805AA0F0
  c->r[0]=c->r[4]-c->r[7]; // 805AA0F4
  c->r[3]=c->r[6]+c->r[8]; // 805AA0F8
  c->r[5]=c->r[5]+c->r[8]; // 805AA0FC
  c->ctr=c->r[0]; // 805AA100
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 805AA104
  if (!crb(c,0)) { goto L_805AA120; } // 805AA108
L_805AA10C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AA10C
  c->r[3]=c->r[3]+0x00000004u; // 805AA110
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AA114
  c->r[5]=c->r[5]+0x00000004u; // 805AA118
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA10C; } // 805AA11C
L_805AA120:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 805AA120
  c->r[0]=R32(c->r[30]+0x00000098u); // 805AA124
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AA128
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AA12C
  if (!crb(c,0)) { goto L_805AA180; } // 805AA130
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AA134
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AA138
  if (!crb(c,2)) { goto L_805AA154; } // 805AA13C
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AA140
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AA144
  c->r[4]=R32(c->r[31]+0x00000094u); // 805AA148
  c->r[6]=0u+0x00000018u; // 805AA14C
  c->lr=0x805AA154u; f_8062C630(c); // 805AA150
L_805AA154:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 805AA154
  c->r[5]=0u+0x00000018u; // 805AA158
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AA15C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AA160
  c->lr=0x805AA168u; f_8062C34C(c); // 805AA164
  W32(c->r[31]+0x00000094u,c->r[3]); // 805AA168
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AA16C
  c->r[3]=R32(c->r[30]+0x00000098u); // 805AA170
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AA174
  c->r[0]=c->r[3]|c->r[0]; // 805AA178
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805AA17C
L_805AA180:;
  c->r[4]=R32(c->r[30]+0x00000098u); // 805AA180
  c->r[7]=0u+0x00000000u; // 805AA184
  W32(c->r[31]+0x00000098u,c->r[4]); // 805AA188
  cmps(c,1,(int32_t)c->r[4],0); // 805AA18C
  c->r[6]=R32(c->r[30]+0x00000094u); // 805AA190
  c->r[5]=R32(c->r[31]+0x00000094u); // 805AA194
  if (!crb(c,5)) { goto L_805AA268; } // 805AA198
  cmps(c,0,(int32_t)c->r[4],8); // 805AA19C
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 805AA1A0
  if (!crb(c,1)) { goto L_805AA238; } // 805AA1A4
  c->r[9]=0u+0x00000000u; // 805AA1A8
  if (crb(c,4)) { goto L_805AA1C4; } // 805AA1AC
  c->r[3]=0u+0x80000000u; // 805AA1B0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 805AA1B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AA1B8
  if (crb(c,1)) { goto L_805AA1C4; } // 805AA1BC
  c->r[9]=0u+0x00000001u; // 805AA1C0
L_805AA1C4:;
  cmps(c,0,(int32_t)c->r[9],0); // 805AA1C4
  if (crb(c,2)) { goto L_805AA238; } // 805AA1C8
  c->r[0]=c->r[8]+0x00000007u; // 805AA1CC
  c->r[3]=c->r[6]|c->r[6]; // 805AA1D0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 805AA1D4
  c->r[9]=c->r[5]|c->r[5]; // 805AA1D8
  c->ctr=c->r[0]; // 805AA1DC
  cmps(c,0,(int32_t)c->r[8],0); // 805AA1E0
  if (!crb(c,1)) { goto L_805AA238; } // 805AA1E4
L_805AA1E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AA1E8
  c->r[7]=c->r[7]+0x00000008u; // 805AA1EC
  W32(c->r[9]+0x00000000u,c->r[0]); // 805AA1F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AA1F4
  W32(c->r[9]+0x00000004u,c->r[0]); // 805AA1F8
  c->r[0]=R32(c->r[3]+0x00000008u); // 805AA1FC
  W32(c->r[9]+0x00000008u,c->r[0]); // 805AA200
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 805AA204
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 805AA208
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AA20C
  W32(c->r[9]+0x00000010u,c->r[0]); // 805AA210
  c->r[0]=R32(c->r[3]+0x00000014u); // 805AA214
  W32(c->r[9]+0x00000014u,c->r[0]); // 805AA218
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AA21C
  W32(c->r[9]+0x00000018u,c->r[0]); // 805AA220
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AA224
  c->r[3]=c->r[3]+0x00000020u; // 805AA228
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 805AA22C
  c->r[9]=c->r[9]+0x00000020u; // 805AA230
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA1E8; } // 805AA234
L_805AA238:;
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 805AA238
  c->r[0]=c->r[4]-c->r[7]; // 805AA23C
  c->r[3]=c->r[6]+c->r[8]; // 805AA240
  c->r[5]=c->r[5]+c->r[8]; // 805AA244
  c->ctr=c->r[0]; // 805AA248
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 805AA24C
  if (!crb(c,0)) { goto L_805AA268; } // 805AA250
L_805AA254:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AA254
  c->r[3]=c->r[3]+0x00000004u; // 805AA258
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AA25C
  c->r[5]=c->r[5]+0x00000004u; // 805AA260
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA254; } // 805AA264
L_805AA268:;
  c->r[3]=R32(c->r[31]+0x00000080u); // 805AA268
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805AA26C
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AA270
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AA274
  if (!crb(c,0)) { goto L_805AA2C8; } // 805AA278
  c->r[0]=R32(c->r[31]+0x00000080u); // 805AA27C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AA280
  if (!crb(c,2)) { goto L_805AA29C; } // 805AA284
  c->r[5]=rotl(c->r[4],4)&0xFFFFFFF0u; // 805AA288
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AA28C
  c->r[4]=R32(c->r[31]+0x00000078u); // 805AA290
  c->r[6]=0u+0x00000018u; // 805AA294
  c->lr=0x805AA29Cu; f_8062C630(c); // 805AA298
L_805AA29C:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805AA29C
  c->r[5]=0u+0x00000018u; // 805AA2A0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AA2A4
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805AA2A8
  c->lr=0x805AA2B0u; f_8062C34C(c); // 805AA2AC
  W32(c->r[31]+0x00000078u,c->r[3]); // 805AA2B0
  c->r[0]=R32(c->r[31]+0x00000080u); // 805AA2B4
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 805AA2B8
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AA2BC
  c->r[0]=c->r[3]|c->r[0]; // 805AA2C0
  W32(c->r[31]+0x00000080u,c->r[0]); // 805AA2C4
L_805AA2C8:;
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 805AA2C8
  c->r[5]=0u+0x00000000u; // 805AA2CC
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 805AA2D0
  cmps(c,1,(int32_t)c->r[3],0); // 805AA2D4
  c->r[4]=R32(c->r[30]+0x00000078u); // 805AA2D8
  c->r[0]=R32(c->r[31]+0x00000078u); // 805AA2DC
  if (!crb(c,5)) { goto L_805AA488; } // 805AA2E0
  cmps(c,0,(int32_t)c->r[3],8); // 805AA2E4
  c->r[9]=c->r[3]+0xFFFFFFF8u; // 805AA2E8
  if (!crb(c,1)) { goto L_805AA440; } // 805AA2EC
  c->r[7]=0u+0x00000000u; // 805AA2F0
  if (crb(c,4)) { goto L_805AA30C; } // 805AA2F4
  c->r[6]=0u+0x80000000u; // 805AA2F8
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 805AA2FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 805AA300
  if (crb(c,1)) { goto L_805AA30C; } // 805AA304
  c->r[7]=0u+0x00000001u; // 805AA308
L_805AA30C:;
  cmps(c,0,(int32_t)c->r[7],0); // 805AA30C
  if (crb(c,2)) { goto L_805AA440; } // 805AA310
  c->r[8]=c->r[9]+0x00000007u; // 805AA314
  c->r[6]=c->r[4]|c->r[4]; // 805AA318
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 805AA31C
  c->r[7]=c->r[0]|c->r[0]; // 805AA320
  c->ctr=c->r[8]; // 805AA324
  cmps(c,0,(int32_t)c->r[9],0); // 805AA328
  if (!crb(c,1)) { goto L_805AA440; } // 805AA32C
L_805AA330:;
  c->r[8]=R32(c->r[6]+0x00000000u); // 805AA330
  c->r[5]=c->r[5]+0x00000008u; // 805AA334
  W32(c->r[7]+0x00000000u,c->r[8]); // 805AA338
  c->r[8]=R32(c->r[6]+0x00000004u); // 805AA33C
  W32(c->r[7]+0x00000004u,c->r[8]); // 805AA340
  c->r[8]=R32(c->r[6]+0x0000000Cu); // 805AA344
  c->r[9]=R32(c->r[6]+0x00000008u); // 805AA348
  W32(c->r[7]+0x00000008u,c->r[9]); // 805AA34C
  W32(c->r[7]+0x0000000Cu,c->r[8]); // 805AA350
  c->r[8]=R32(c->r[6]+0x00000010u); // 805AA354
  W32(c->r[7]+0x00000010u,c->r[8]); // 805AA358
  c->r[8]=R32(c->r[6]+0x00000014u); // 805AA35C
  W32(c->r[7]+0x00000014u,c->r[8]); // 805AA360
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 805AA364
  c->r[9]=R32(c->r[6]+0x00000018u); // 805AA368
  W32(c->r[7]+0x00000018u,c->r[9]); // 805AA36C
  W32(c->r[7]+0x0000001Cu,c->r[8]); // 805AA370
  c->r[8]=R32(c->r[6]+0x00000020u); // 805AA374
  W32(c->r[7]+0x00000020u,c->r[8]); // 805AA378
  c->r[8]=R32(c->r[6]+0x00000024u); // 805AA37C
  W32(c->r[7]+0x00000024u,c->r[8]); // 805AA380
  c->r[8]=R32(c->r[6]+0x0000002Cu); // 805AA384
  c->r[9]=R32(c->r[6]+0x00000028u); // 805AA388
  W32(c->r[7]+0x00000028u,c->r[9]); // 805AA38C
  W32(c->r[7]+0x0000002Cu,c->r[8]); // 805AA390
  c->r[8]=R32(c->r[6]+0x00000030u); // 805AA394
  W32(c->r[7]+0x00000030u,c->r[8]); // 805AA398
  c->r[8]=R32(c->r[6]+0x00000034u); // 805AA39C
  W32(c->r[7]+0x00000034u,c->r[8]); // 805AA3A0
  c->r[8]=R32(c->r[6]+0x0000003Cu); // 805AA3A4
  c->r[9]=R32(c->r[6]+0x00000038u); // 805AA3A8
  W32(c->r[7]+0x00000038u,c->r[9]); // 805AA3AC
  W32(c->r[7]+0x0000003Cu,c->r[8]); // 805AA3B0
  c->r[8]=R32(c->r[6]+0x00000040u); // 805AA3B4
  W32(c->r[7]+0x00000040u,c->r[8]); // 805AA3B8
  c->r[8]=R32(c->r[6]+0x00000044u); // 805AA3BC
  W32(c->r[7]+0x00000044u,c->r[8]); // 805AA3C0
  c->r[8]=R32(c->r[6]+0x0000004Cu); // 805AA3C4
  c->r[9]=R32(c->r[6]+0x00000048u); // 805AA3C8
  W32(c->r[7]+0x00000048u,c->r[9]); // 805AA3CC
  W32(c->r[7]+0x0000004Cu,c->r[8]); // 805AA3D0
  c->r[8]=R32(c->r[6]+0x00000050u); // 805AA3D4
  W32(c->r[7]+0x00000050u,c->r[8]); // 805AA3D8
  c->r[8]=R32(c->r[6]+0x00000054u); // 805AA3DC
  W32(c->r[7]+0x00000054u,c->r[8]); // 805AA3E0
  c->r[8]=R32(c->r[6]+0x0000005Cu); // 805AA3E4
  c->r[9]=R32(c->r[6]+0x00000058u); // 805AA3E8
  W32(c->r[7]+0x00000058u,c->r[9]); // 805AA3EC
  W32(c->r[7]+0x0000005Cu,c->r[8]); // 805AA3F0
  c->r[8]=R32(c->r[6]+0x00000060u); // 805AA3F4
  W32(c->r[7]+0x00000060u,c->r[8]); // 805AA3F8
  c->r[8]=R32(c->r[6]+0x00000064u); // 805AA3FC
  W32(c->r[7]+0x00000064u,c->r[8]); // 805AA400
  c->r[8]=R32(c->r[6]+0x0000006Cu); // 805AA404
  c->r[9]=R32(c->r[6]+0x00000068u); // 805AA408
  W32(c->r[7]+0x00000068u,c->r[9]); // 805AA40C
  W32(c->r[7]+0x0000006Cu,c->r[8]); // 805AA410
  c->r[8]=R32(c->r[6]+0x00000070u); // 805AA414
  W32(c->r[7]+0x00000070u,c->r[8]); // 805AA418
  c->r[8]=R32(c->r[6]+0x00000074u); // 805AA41C
  W32(c->r[7]+0x00000074u,c->r[8]); // 805AA420
  c->r[8]=R32(c->r[6]+0x0000007Cu); // 805AA424
  c->r[9]=R32(c->r[6]+0x00000078u); // 805AA428
  c->r[6]=c->r[6]+0x00000080u; // 805AA42C
  W32(c->r[7]+0x00000078u,c->r[9]); // 805AA430
  W32(c->r[7]+0x0000007Cu,c->r[8]); // 805AA434
  c->r[7]=c->r[7]+0x00000080u; // 805AA438
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA330; } // 805AA43C
L_805AA440:;
  c->r[7]=rotl(c->r[5],4)&0xFFFFFFF0u; // 805AA440
  c->r[6]=c->r[3]-c->r[5]; // 805AA444
  c->r[4]=c->r[4]+c->r[7]; // 805AA448
  c->r[7]=c->r[0]+c->r[7]; // 805AA44C
  c->ctr=c->r[6]; // 805AA450
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 805AA454
  if (!crb(c,0)) { goto L_805AA488; } // 805AA458
L_805AA45C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 805AA45C
  W32(c->r[7]+0x00000000u,c->r[0]); // 805AA460
  c->r[0]=R32(c->r[4]+0x00000004u); // 805AA464
  W32(c->r[7]+0x00000004u,c->r[0]); // 805AA468
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 805AA46C
  c->r[3]=R32(c->r[4]+0x00000008u); // 805AA470
  c->r[4]=c->r[4]+0x00000010u; // 805AA474
  W32(c->r[7]+0x00000008u,c->r[3]); // 805AA478
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AA47C
  c->r[7]=c->r[7]+0x00000010u; // 805AA480
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA45C; } // 805AA484
L_805AA488:;
  c->r[3]=c->r[31]|c->r[31]; // 805AA488
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AA48C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AA490
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AA494
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AA498
  c->lr=c->r[0]; // 805AA49C
  c->r[1]=c->r[1]+0x00000020u; // 805AA4A0
  return; // 805AA4A4
}

// fn_805AA4A8
void f_805AA4A8(Ctx* __restrict c) {
  trace_call(0x805AA4A8u);
  c->r[3]=0u+0x00000002u; // 805AA4A8
  return; // 805AA4AC
}

// fn_805AA4B0
void f_805AA4B0(Ctx* __restrict c) {
  trace_call(0x805AA4B0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AA4B0
  c->r[12]=c->r[1]|c->r[1]; // 805AA4B4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEF0u,1); // 805AA4B8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AA4BC
  c->r[0]=c->lr; // 805AA4C0
  c->r[11]=c->r[12]|c->r[12]; // 805AA4C4
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AA4C8
  c->lr=0x805AA4D0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805AA4CC
  c->r[8]=c->r[3]+0x000000A0u; // 805AA4D0
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805AA4D4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805AA4D8
  c->r[23]=c->r[4]|c->r[4]; // 805AA4DC
  {uint32_t ea=c->r[8]+0x00000030u; psq_store(c,1,ea,0,0);} // 805AA4E0
  c->r[26]=c->r[6]|c->r[6]; // 805AA4E4
  c->r[4]=R32(c->r[3]+0x00000008u); // 805AA4E8
  c->r[24]=c->r[3]|c->r[3]; // 805AA4EC
  {uint32_t ea=c->r[8]+0x00000038u; psq_store(c,0,ea,0,0);} // 805AA4F0
  c->r[29]=0u+0x00000008u; // 805AA4F4
  c->r[3]=R32(c->r[3]+0x00000010u); // 805AA4F8
  c->r[28]=0u+0x00000030u; // 805AA4FC
  c->r[6]=R32(c->r[4]+0x00000074u); // 805AA500
  c->r[30]=0u+0x00000038u; // 805AA504
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AA508
  c->r[25]=c->r[5]|c->r[5]; // 805AA50C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AA510
  c->r[27]=c->r[7]|c->r[7]; // 805AA514
  {uint32_t ea=c->r[2]+0x000028B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AA518
  c->r[4]=c->r[8]|c->r[8]; // 805AA51C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AA520
  c->r[5]=c->r[1]+0x00000050u; // 805AA524
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AA528
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 805AA52C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 805AA530
  c->ctr=c->r[12]; // 805AA534
  if (true) { c->lr=0x805AA53Cu; dispatch(c,c->ctr); } // 805AA538
  {uint32_t ea=0u+c->r[25]; psq_load(c,3,ea,0,0);} // 805AA53C
  c->r[0]=c->r[2]+0x000028B8u; // 805AA540
  {uint32_t ea=0u+c->r[23]; psq_load(c,2,ea,0,0);} // 805AA544
  c->r[9]=c->r[1]+0x00000020u; // 805AA548
  {uint32_t ea=c->r[23]+c->r[29]; psq_load(c,0,ea,0,0);} // 805AA54C
  c->r[10]=c->r[1]+0x00000010u; // 805AA550
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 805AA554
  {uint32_t ea=0u+c->r[0]; psq_load(c,6,ea,0,0);} // 805AA558
  {uint32_t ea=c->r[25]+c->r[29]; psq_load(c,1,ea,0,0);} // 805AA55C
  c->r[4]=c->r[1]+0x00000050u; // 805AA560
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,2,ea,0,0);} // 805AA564
  c->r[23]=c->r[1]+0x00000040u; // 805AA568
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805AA56C
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,5,ea,0,0);} // 805AA570
  {double t0=S(c->f[5]-c->f[6]), t1=S(c->ps1[5]-c->ps1[6]); c->f[1]=t0; c->ps1[1]=t1;} // 805AA574
  c->r[31]=c->r[1]+0x00000048u; // 805AA578
  {double t0=S(c->f[6]-c->f[5]), t1=S(c->ps1[6]-c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 805AA57C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,4,ea,0,0);} // 805AA580
  {double t0=S((c->f[1]>=0.0)?c->f[6]:c->f[5]), t1=S((c->ps1[1]>=0.0)?c->ps1[6]:c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805AA584
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,6,ea,0,0);} // 805AA588
  {double t0=S(c->f[4]-c->f[6]), t1=S(c->ps1[4]-c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 805AA58C
  c->r[3]=c->r[24]|c->r[24]; // 805AA590
  {double t0=S(c->f[6]-c->f[4]), t1=S(c->ps1[6]-c->ps1[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805AA594
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805AA598
  {double t0=S((c->f[0]>=0.0)?c->f[6]:c->f[4]), t1=S((c->ps1[0]>=0.0)?c->ps1[6]:c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 805AA59C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,0,ea,0,0);} // 805AA5A0
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 805AA5A4
  {uint32_t ea=c->r[1]+0x00000060u; psq_load(c,1,ea,0,0);} // 805AA5A8
  {double t0=S((c->f[8]>=0.0)?c->f[6]:c->f[4]), t1=S((c->ps1[8]>=0.0)?c->ps1[6]:c->ps1[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805AA5AC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,6,ea,0,0);} // 805AA5B0
  {double t0=S(c->f[0]+c->f[7]), t1=S(c->ps1[0]+c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805AA5B4
  {uint32_t ea=c->r[9]+c->r[29]; psq_store(c,7,ea,0,0);} // 805AA5B8
  {double t0=S((c->f[9]>=0.0)?c->f[6]:c->f[5]), t1=S((c->ps1[9]>=0.0)?c->ps1[6]:c->ps1[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805AA5BC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,9,ea,0,0);} // 805AA5C0
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,3,ea,0,0);} // 805AA5C4
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805AA5C8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805AA5CC
  {double t0=S(c->f[9]+c->f[8]), t1=S(c->ps1[9]+c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 805AA5D0
  {uint32_t ea=c->r[10]+c->r[29]; psq_store(c,8,ea,0,0);} // 805AA5D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,2,ea,0,0);} // 805AA5D8
  {uint32_t ea=c->r[1]+0x00000060u; psq_store(c,1,ea,0,0);} // 805AA5DC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,0,ea,0,0);} // 805AA5E0
  c->lr=0x805AA5E8u; f_805AB654(c); // 805AA5E4
  {uint32_t ea=c->r[2]+0x000028C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AA5E8
  c->r[9]=c->r[1]+0x00000070u; // 805AA5EC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 805AA5F0
  {uint32_t ea=0u+c->r[23]; psq_load(c,6,ea,0,0);} // 805AA5F4
  c->r[3]=R32(c->r[24]+0x00000008u); // 805AA5F8
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[2]=t0; c->ps1[2]=t1;} // 805AA5FC
  {uint32_t ea=c->r[23]+c->r[29]; psq_load(c,0,ea,0,0);} // 805AA600
  c->r[10]=R32(c->r[3]+0x00000074u); // 805AA604
  {uint32_t ea=c->r[2]+0x000028C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 805AA608
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 805AA60C
  c->r[0]=R32(c->r[10]+0x00000000u); // 805AA610
  W32(c->r[1]+0x00000070u,c->r[0]); // 805AA614
  {uint32_t ea=c->r[2]+0x000028B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AA618
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 805AA61C
  c->r[8]=R32(c->r[10]+0x00000004u); // 805AA620
  W32(c->r[1]+0x00000074u,c->r[8]); // 805AA624
  {uint32_t ea=c->r[2]+0x000028C8u; c->f[2]=RF64(ea);} // 805AA628
  c->f[9]=frsqrte(c->f[8]); // 805AA62C
  c->r[8]=R32(c->r[10]+0x00000008u); // 805AA630
  W32(c->r[1]+0x00000078u,c->r[8]); // 805AA634
  {uint32_t ea=c->r[13]+0xFFFFAFB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AA638
  c->f[9]=c->ps1[9]=S(c->f[9]); // 805AA63C
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 805AA640
  W32(c->r[1]+0x0000007Cu,c->r[8]); // 805AA644
  {uint32_t ea=c->r[25]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 805AA648
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[9]); // 805AA64C
  c->r[8]=R32(c->r[10]+0x00000010u); // 805AA650
  W32(c->r[1]+0x00000080u,c->r[8]); // 805AA654
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[9]); // 805AA658
  {uint32_t ea=0u+c->r[31]; psq_load(c,5,ea,0,0);} // 805AA65C
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[8],c->f[4],-c->f[3])); // 805AA660
  {uint32_t ea=c->r[10]+0x00000020u; psq_load(c,4,ea,0,0);} // 805AA664
  {uint32_t ea=c->r[9]+0x00000020u; psq_store(c,4,ea,0,0);} // 805AA668
  c->f[4]=c->ps1[4]=S(std::fma(c->f[3],c->f[0],c->f[9])); // 805AA66C
  {uint32_t ea=c->r[25]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AA670
  {uint32_t ea=c->r[10]+0x00000028u; psq_load(c,3,ea,0,0);} // 805AA674
  {uint32_t ea=c->r[9]+0x00000028u; psq_store(c,3,ea,0,0);} // 805AA678
  c->f[3]=(c->f[4]>=0.0)?c->f[4]:c->f[2]; // 805AA67C
  {uint32_t ea=c->r[10]+c->r[28]; psq_load(c,2,ea,0,0);} // 805AA680
  {uint32_t ea=c->r[9]+c->r[28]; psq_store(c,2,ea,0,0);} // 805AA684
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805AA688
  {uint32_t ea=c->r[10]+c->r[30]; psq_load(c,2,ea,0,0);} // 805AA68C
  {uint32_t ea=c->r[9]+c->r[30]; psq_store(c,2,ea,0,0);} // 805AA690
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[3]); // 805AA694
  {uint32_t ea=c->r[10]+0x00000040u; psq_load(c,3,ea,0,0);} // 805AA698
  {uint32_t ea=c->r[9]+0x00000040u; psq_store(c,3,ea,0,0);} // 805AA69C
  c->f[2]=(c->f[8]>=0.0)?c->f[2]:c->f[1]; // 805AA6A0
  {uint32_t ea=c->r[10]+0x00000048u; psq_load(c,1,ea,0,0);} // 805AA6A4
  {uint32_t ea=c->r[9]+0x00000048u; psq_store(c,1,ea,0,0);} // 805AA6A8
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805AA6AC
  c->r[4]=R32(c->r[10]+0x0000006Cu); // 805AA6B0
  W32(c->r[1]+0x000000D8u,c->r[4]); // 805AA6B4
  {uint32_t ea=c->r[1]+0x000000C0u; psq_store(c,6,ea,0,0);} // 805AA6B8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,5,ea,0,0);} // 805AA6BC
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[2]);} // 805AA6C0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[7]);} // 805AA6C4
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 805AA6C8
  c->r[3]=R32(c->r[24]+0x00000154u); // 805AA6CC
  c->r[23]=c->r[3]+0xFFFFFFFFu; // 805AA6D0
  c->r[25]=rotl(c->r[23],3)&0xFFFFFFF8u; // 805AA6D4
  goto L_805AA714; // 805AA6D8
L_805AA6DC:;
  c->r[0]=R32(c->r[24]+0x00000150u); // 805AA6DC
  c->r[7]=c->r[26]|c->r[26]; // 805AA6E0
  c->r[8]=c->r[27]|c->r[27]; // 805AA6E4
  c->r[4]=c->r[24]+0x00000010u; // 805AA6E8
  c->r[3]=R32(c->r[25]+c->r[0]); // 805AA6EC
  c->r[5]=c->r[0]+c->r[25]; // 805AA6F0
  c->r[6]=c->r[1]+0x00000070u; // 805AA6F4
  c->r[5]=R32(c->r[5]+0x00000004u); // 805AA6F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AA6FC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AA700
  c->ctr=c->r[12]; // 805AA704
  if (true) { c->lr=0x805AA70Cu; dispatch(c,c->ctr); } // 805AA708
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 805AA70C
  c->r[25]=c->r[25]+0xFFFFFFF8u; // 805AA710
L_805AA714:;
  cmps(c,0,(int32_t)c->r[23],0); // 805AA714
  if (!crb(c,0)) { IRQCHK(c); goto L_805AA6DC; } // 805AA718
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AA71C
  c->r[11]=c->r[10]|c->r[10]; // 805AA720
  c->lr=0x805AA728u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805AA724
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AA728
  c->lr=c->r[0]; // 805AA72C
  c->r[1]=c->r[10]|c->r[10]; // 805AA730
  return; // 805AA734
}

// fn_805AA738
void f_805AA738(Ctx* __restrict c) {
  trace_call(0x805AA738u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AA738
  c->r[0]=c->lr; // 805AA73C
  c->r[12]=c->r[3]+0x000000A0u; // 805AA740
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AA744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AA748
  c->r[31]=c->r[4]+0x00000010u; // 805AA74C
  W32(c->r[1]+0x00000008u,c->r[30]); // 805AA750
  c->r[30]=c->r[4]+0x00000020u; // 805AA754
  {uint32_t ea=0u+c->r[4]; psq_load(c,0,ea,0,0);} // 805AA758
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 805AA75C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805AA760
  {uint32_t ea=c->r[12]+0x00000008u; psq_store(c,0,ea,0,0);} // 805AA764
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 805AA768
  {uint32_t ea=c->r[12]+0x00000010u; psq_store(c,0,ea,0,0);} // 805AA76C
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,0,ea,0,0);} // 805AA770
  {uint32_t ea=c->r[12]+0x00000018u; psq_store(c,0,ea,0,0);} // 805AA774
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 805AA778
  c->r[4]=c->r[4]+0x00000030u; // 805AA77C
  {uint32_t ea=c->r[12]+0x00000020u; psq_store(c,0,ea,0,0);} // 805AA780
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 805AA784
  {uint32_t ea=c->r[12]+0x00000028u; psq_store(c,0,ea,0,0);} // 805AA788
  c->lr=0x805AA790u; f_805AA4B0(c); // 805AA78C
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AA790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AA794
  c->r[30]=R32(c->r[1]+0x00000008u); // 805AA798
  c->lr=c->r[0]; // 805AA79C
  c->r[1]=c->r[1]+0x00000010u; // 805AA7A0
  return; // 805AA7A4
}

// fn_805AA7A8
void f_805AA7A8(Ctx* __restrict c) {
  trace_call(0x805AA7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AA7A8
  c->r[0]=c->lr; // 805AA7AC
  cmps(c,0,(int32_t)c->r[5],0); // 805AA7B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AA7B4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805AA7B8
  c->r[27]=c->r[3]|c->r[3]; // 805AA7BC
  c->r[28]=c->r[4]|c->r[4]; // 805AA7C0
  c->r[29]=c->r[5]|c->r[5]; // 805AA7C4
  if (!crb(c,2)) { goto L_805AA7D4; } // 805AA7C8
  c->r[4]=R32(c->r[3]+0x00000008u); // 805AA7CC
  c->r[29]=R32(c->r[4]+0x00000074u); // 805AA7D0
L_805AA7D4:;
  c->r[3]=R32(c->r[3]+0x00000154u); // 805AA7D4
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AA7D8
  c->r[31]=rotl(c->r[30],3)&0xFFFFFFF8u; // 805AA7DC
  goto L_805AA818; // 805AA7E0
L_805AA7E4:;
  c->r[0]=R32(c->r[27]+0x00000150u); // 805AA7E4
  c->r[6]=c->r[29]|c->r[29]; // 805AA7E8
  c->r[7]=c->r[28]|c->r[28]; // 805AA7EC
  c->r[4]=c->r[27]+0x00000010u; // 805AA7F0
  c->r[3]=R32(c->r[31]+c->r[0]); // 805AA7F4
  c->r[5]=c->r[0]+c->r[31]; // 805AA7F8
  c->r[5]=R32(c->r[5]+0x00000004u); // 805AA7FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AA800
  c->r[12]=R32(c->r[12]+0x00000018u); // 805AA804
  c->ctr=c->r[12]; // 805AA808
  if (true) { c->lr=0x805AA810u; dispatch(c,c->ctr); } // 805AA80C
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 805AA810
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AA814
L_805AA818:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AA818
  if (!crb(c,0)) { IRQCHK(c); goto L_805AA7E4; } // 805AA81C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805AA820
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AA824
  c->lr=c->r[0]; // 805AA828
  c->r[1]=c->r[1]+0x00000020u; // 805AA82C
  return; // 805AA830
}

// fn_805AA834
void f_805AA834(Ctx* __restrict c) {
  trace_call(0x805AA834u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AA834
  c->r[0]=c->lr; // 805AA838
  cmps(c,0,(int32_t)c->r[5],0); // 805AA83C
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AA840
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805AA844
  c->r[27]=c->r[3]|c->r[3]; // 805AA848
  c->r[28]=c->r[4]|c->r[4]; // 805AA84C
  c->r[29]=c->r[5]|c->r[5]; // 805AA850
  if (!crb(c,2)) { goto L_805AA860; } // 805AA854
  c->r[4]=R32(c->r[3]+0x00000008u); // 805AA858
  c->r[29]=R32(c->r[4]+0x00000074u); // 805AA85C
L_805AA860:;
  c->r[3]=R32(c->r[3]+0x00000154u); // 805AA860
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AA864
  c->r[31]=rotl(c->r[30],3)&0xFFFFFFF8u; // 805AA868
  goto L_805AA8B0; // 805AA86C
L_805AA870:;
  c->r[0]=R32(c->r[27]+0x00000150u); // 805AA870
  c->r[6]=c->r[29]|c->r[29]; // 805AA874
  c->r[7]=c->r[28]|c->r[28]; // 805AA878
  c->r[4]=c->r[27]+0x00000010u; // 805AA87C
  c->r[3]=R32(c->r[31]+c->r[0]); // 805AA880
  c->r[5]=c->r[0]+c->r[31]; // 805AA884
  c->r[5]=R32(c->r[5]+0x00000004u); // 805AA888
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AA88C
  c->r[12]=R32(c->r[12]+0x00000014u); // 805AA890
  c->ctr=c->r[12]; // 805AA894
  if (true) { c->lr=0x805AA89Cu; dispatch(c,c->ctr); } // 805AA898
  c->r[0]=R8(c->r[28]+0x00000004u); // 805AA89C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AA8A0
  if (!crb(c,2)) { goto L_805AA8B8; } // 805AA8A4
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 805AA8A8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AA8AC
L_805AA8B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AA8B0
  if (!crb(c,0)) { IRQCHK(c); goto L_805AA870; } // 805AA8B4
L_805AA8B8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805AA8B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AA8BC
  c->lr=c->r[0]; // 805AA8C0
  c->r[1]=c->r[1]+0x00000020u; // 805AA8C4
  return; // 805AA8C8
}

// fn_805AA8CC
void f_805AA8CC(Ctx* __restrict c) {
  trace_call(0x805AA8CCu);
  c->r[0]=R32(c->r[3]+0x00000154u); // 805AA8CC
  c->r[6]=0u+0x00000000u; // 805AA8D0
  c->ctr=c->r[0]; // 805AA8D4
  cmps(c,0,(int32_t)c->r[0],0); // 805AA8D8
  if (!crb(c,1)) { goto L_805AA904; } // 805AA8DC
L_805AA8E0:;
  c->r[0]=R32(c->r[3]+0x00000150u); // 805AA8E0
  c->r[5]=c->r[0]+c->r[6]; // 805AA8E4
  c->r[0]=R32(c->r[5]+0x00000004u); // 805AA8E8
  cmpu(c,0,c->r[0],c->r[4]); // 805AA8EC
  if (!crb(c,2)) { goto L_805AA8FC; } // 805AA8F0
  c->r[3]=0u+0x01000000u; // 805AA8F4
  return; // 805AA8F8
L_805AA8FC:;
  c->r[6]=c->r[6]+0x00000008u; // 805AA8FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AA8E0; } // 805AA900
L_805AA904:;
  c->r[3]=0u+0x00000000u; // 805AA904
  return; // 805AA908
}

// fn_805AA90C
void f_805AA90C(Ctx* __restrict c) {
  trace_call(0x805AA90Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AA90C
  c->r[12]=c->r[1]|c->r[1]; // 805AA910
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 805AA914
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AA918
  c->r[0]=c->lr; // 805AA91C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AA920
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AA924
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AA928
  c->r[30]=c->r[4]|c->r[4]; // 805AA92C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AA930
  c->r[29]=c->r[3]|c->r[3]; // 805AA934
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 805AA938
  c->r[0]=R32(c->r[4]+0x00000000u); // 805AA93C
  cmps(c,0,(int32_t)c->r[0],0); // 805AA940
  if (crb(c,2)) { goto L_805AAB24; } // 805AA944
  c->r[0]=0u+0x00000000u; // 805AA948
  W32(c->r[1]+0x00000014u,c->r[4]); // 805AA94C
  W32(c->r[1]+0x00000010u,c->r[3]); // 805AA950
  W32(c->r[1]+0x00000018u,c->r[0]); // 805AA954
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AA958
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 805AA95C
  c->r[31]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805AA960
  goto L_805AA994; // 805AA964
L_805AA968:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 805AA968
  c->r[3]=R32(c->r[3]+c->r[31]); // 805AA96C
  cmps(c,0,(int32_t)c->r[3],0); // 805AA970
  if (crb(c,2)) { goto L_805AA98C; } // 805AA974
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AA978
  c->r[4]=c->r[1]+0x00000010u; // 805AA97C
  c->r[12]=R32(c->r[12]+0x00000008u); // 805AA980
  c->ctr=c->r[12]; // 805AA984
  if (true) { c->lr=0x805AA98Cu; dispatch(c,c->ctr); } // 805AA988
L_805AA98C:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805AA98C
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 805AA990
L_805AA994:;
  cmps(c,0,(int32_t)c->r[28],0); // 805AA994
  if (!crb(c,0)) { IRQCHK(c); goto L_805AA968; } // 805AA998
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AA99C
  cmps(c,0,(int32_t)c->r[0],0); // 805AA9A0
  if (!crb(c,2)) { goto L_805AAB24; } // 805AA9A4
  c->r[3]=R32(c->r[29]+0x00000158u); // 805AA9A8
  c->r[0]=R32(c->r[29]+0x00000154u); // 805AA9AC
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AA9B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 805AA9B4
  if (!crb(c,2)) { goto L_805AA9C8; } // 805AA9B8
  c->r[3]=c->r[29]+0x00000150u; // 805AA9BC
  c->r[4]=0u+0x00000008u; // 805AA9C0
  c->lr=0x805AA9C8u; f_80623A68(c); // 805AA9C4
L_805AA9C8:;
  c->r[4]=R32(c->r[29]+0x00000154u); // 805AA9C8
  c->r[0]=0u+0x00000000u; // 805AA9CC
  c->r[6]=R32(c->r[29]+0x00000008u); // 805AA9D0
  c->r[3]=c->r[4]+0x00000001u; // 805AA9D4
  W32(c->r[29]+0x00000154u,c->r[3]); // 805AA9D8
  c->r[5]=R32(c->r[29]+0x00000150u); // 805AA9DC
  c->r[3]=rotl(c->r[4],3)&0xFFFFFFF8u; // 805AA9E0
  c->r[6]=R32(c->r[6]+0x00000074u); // 805AA9E4
  c->r[31]=c->r[5]+c->r[3]; // 805AA9E8
  c->r[7]=R32(c->r[6]+0x00000000u); // 805AA9EC
  W32(c->r[1]+0x00000020u,c->r[7]); // 805AA9F0
  c->r[5]=c->r[7]+0x00001B60u; // 805AA9F4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AA9F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 805AA9FC
  c->r[3]=R32(c->r[6]+0x00000008u); // 805AAA00
  W32(c->r[1]+0x00000028u,c->r[3]); // 805AAA04
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 805AAA08
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 805AAA0C
  c->r[3]=R32(c->r[6]+0x00000010u); // 805AAA10
  W32(c->r[1]+0x00000030u,c->r[3]); // 805AAA14
  c->r[4]=R32(c->r[6]+0x00000020u); // 805AAA18
  c->r[3]=R32(c->r[6]+0x00000024u); // 805AAA1C
  W32(c->r[1]+0x00000044u,c->r[3]); // 805AAA20
  W32(c->r[1]+0x00000040u,c->r[4]); // 805AAA24
  c->r[4]=R32(c->r[6]+0x00000028u); // 805AAA28
  c->r[3]=R32(c->r[6]+0x0000002Cu); // 805AAA2C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 805AAA30
  W32(c->r[1]+0x00000048u,c->r[4]); // 805AAA34
  c->r[4]=R32(c->r[6]+0x00000030u); // 805AAA38
  c->r[3]=R32(c->r[6]+0x00000034u); // 805AAA3C
  W32(c->r[1]+0x00000054u,c->r[3]); // 805AAA40
  W32(c->r[1]+0x00000050u,c->r[4]); // 805AAA44
  c->r[4]=R32(c->r[6]+0x00000038u); // 805AAA48
  c->r[3]=R32(c->r[6]+0x0000003Cu); // 805AAA4C
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 805AAA50
  W32(c->r[1]+0x00000058u,c->r[4]); // 805AAA54
  c->r[4]=R32(c->r[6]+0x00000040u); // 805AAA58
  c->r[3]=R32(c->r[6]+0x00000044u); // 805AAA5C
  W32(c->r[1]+0x00000064u,c->r[3]); // 805AAA60
  W32(c->r[1]+0x00000060u,c->r[4]); // 805AAA64
  c->r[4]=R32(c->r[6]+0x00000048u); // 805AAA68
  c->r[3]=R32(c->r[6]+0x0000004Cu); // 805AAA6C
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 805AAA70
  W32(c->r[1]+0x00000068u,c->r[4]); // 805AAA74
  {uint32_t ea=c->r[6]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AAA78
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 805AAA7C
  {uint32_t ea=c->r[6]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AAA80
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 805AAA84
  {uint32_t ea=c->r[6]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AAA88
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 805AAA8C
  {uint32_t ea=c->r[6]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AAA90
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 805AAA94
  c->r[3]=R32(c->r[6]+0x00000060u); // 805AAA98
  W32(c->r[1]+0x00000080u,c->r[3]); // 805AAA9C
  c->r[3]=R32(c->r[6]+0x00000064u); // 805AAAA0
  W32(c->r[1]+0x00000084u,c->r[3]); // 805AAAA4
  c->r[3]=R8(c->r[6]+0x00000068u); // 805AAAA8
  W8(c->r[1]+0x00000088u,c->r[3]); // 805AAAAC
  c->r[3]=R8(c->r[6]+0x00000069u); // 805AAAB0
  W8(c->r[1]+0x00000089u,c->r[3]); // 805AAAB4
  c->r[3]=R32(c->r[6]+0x0000006Cu); // 805AAAB8
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 805AAABC
  W32(c->r[1]+0x00000080u,c->r[5]); // 805AAAC0
  W32(c->r[1]+0x00000030u,c->r[0]); // 805AAAC4
  c->r[3]=R32(c->r[29]+0x00000010u); // 805AAAC8
  c->r[4]=R32(c->r[30]+0x00000000u); // 805AAACC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 805AAAD0
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 805AAAD4
  goto L_805AAAE0; // 805AAAD8
  goto L_805AAAE4; // 805AAADC
L_805AAAE0:;
  c->r[5]=c->r[7]+0x000001A0u; // 805AAAE0
L_805AAAE4:;
  c->r[3]=rotl(c->r[0],5)&0xFFFFFFE0u; // 805AAAE4
  c->r[0]=c->r[4]+c->r[5]; // 805AAAE8
  c->r[0]=R8(c->r[3]+c->r[0]); // 805AAAEC
  c->r[4]=c->r[30]|c->r[30]; // 805AAAF0
  c->r[3]=c->r[29]+0x00000010u; // 805AAAF4
  c->r[5]=c->r[1]+0x00000020u; // 805AAAF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 805AAAFC
  c->r[6]=0u+0x00000000u; // 805AAB00
  c->r[7]=c->r[7]+c->r[0]; // 805AAB04
  c->r[12]=R32(c->r[7]+0x000009A0u); // 805AAB08
  c->ctr=c->r[12]; // 805AAB0C
  if (true) { c->lr=0x805AAB14u; dispatch(c,c->ctr); } // 805AAB10
  W32(c->r[31]+0x00000000u,c->r[3]); // 805AAB14
  c->r[0]=0u+0x00000001u; // 805AAB18
  W32(c->r[31]+0x00000004u,c->r[30]); // 805AAB1C
  W8(c->r[29]+0x0000015Cu,c->r[0]); // 805AAB20
L_805AAB24:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AAB24
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AAB28
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AAB2C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AAB30
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805AAB34
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 805AAB38
  c->lr=c->r[0]; // 805AAB3C
  c->r[1]=c->r[10]|c->r[10]; // 805AAB40
  return; // 805AAB44
}

// fn_805AAB48
void f_805AAB48(Ctx* __restrict c) {
  trace_call(0x805AAB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AAB48
  c->r[0]=c->lr; // 805AAB4C
  c->r[5]=0u+0x80720000u; // 805AAB50
  W32(c->r[1]+0x00000054u,c->r[0]); // 805AAB54
  c->r[0]=0u+0x00000001u; // 805AAB58
  c->r[5]=c->r[5]+0x00000510u; // 805AAB5C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 805AAB60
  c->r[31]=c->r[3]|c->r[3]; // 805AAB64
  W32(c->r[1]+0x00000048u,c->r[30]); // 805AAB68
  W32(c->r[1]+0x00000044u,c->r[29]); // 805AAB6C
  W32(c->r[1]+0x00000040u,c->r[28]); // 805AAB70
  W16(c->r[1]+0x00000026u,c->r[0]); // 805AAB74
  W32(c->r[1]+0x00000020u,c->r[5]); // 805AAB78
  c->r[0]=R32(c->r[4]+0x00000000u); // 805AAB7C
  cmps(c,0,(int32_t)c->r[0],0); // 805AAB80
  if (crb(c,2)) { goto L_805AACC4; } // 805AAB84
  c->r[5]=R32(c->r[3]+0x00000154u); // 805AAB88
  c->r[28]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[28]); // 805AAB8C
  c->r[0]=c->r[28]+0x00000001u; // 805AAB90
  c->r[6]=rotl(c->r[28],3)&0xFFFFFFF8u; // 805AAB94
  c->ctr=c->r[0]; // 805AAB98
  if (crb(c,0)) { goto L_805AAC70; } // 805AAB9C
L_805AABA0:;
  c->r[0]=R32(c->r[3]+0x00000150u); // 805AABA0
  c->r[5]=c->r[0]+c->r[6]; // 805AABA4
  c->r[0]=R32(c->r[5]+0x00000004u); // 805AABA8
  cmpu(c,0,c->r[0],c->r[4]); // 805AABAC
  if (!crb(c,2)) { goto L_805AAC64; } // 805AABB0
  c->r[0]=0u+0x00000001u; // 805AABB4
  W32(c->r[1]+0x00000018u,c->r[4]); // 805AABB8
  W32(c->r[1]+0x00000014u,c->r[3]); // 805AABBC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 805AABC0
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AABC4
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AABC8
  c->r[29]=rotl(c->r[30],2)&0xFFFFFFFCu; // 805AABCC
  goto L_805AAC00; // 805AABD0
L_805AABD4:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 805AABD4
  c->r[3]=R32(c->r[3]+c->r[29]); // 805AABD8
  cmps(c,0,(int32_t)c->r[3],0); // 805AABDC
  if (crb(c,2)) { goto L_805AABF8; } // 805AABE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AABE4
  c->r[4]=c->r[1]+0x00000014u; // 805AABE8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AABEC
  c->ctr=c->r[12]; // 805AABF0
  if (true) { c->lr=0x805AABF8u; dispatch(c,c->ctr); } // 805AABF4
L_805AABF8:;
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 805AABF8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AABFC
L_805AAC00:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AAC00
  if (!crb(c,0)) { IRQCHK(c); goto L_805AABD4; } // 805AAC04
  c->r[3]=R32(c->r[31]+0x00000150u); // 805AAC08
  c->r[29]=rotl(c->r[28],3)&0xFFFFFFF8u; // 805AAC0C
  c->r[3]=R32(c->r[3]+c->r[29]); // 805AAC10
  cmps(c,0,(int32_t)c->r[3],0); // 805AAC14
  if (crb(c,2)) { goto L_805AAC30; } // 805AAC18
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AAC1C
  c->r[4]=c->r[1]+0x00000020u; // 805AAC20
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AAC24
  c->ctr=c->r[12]; // 805AAC28
  if (true) { c->lr=0x805AAC30u; dispatch(c,c->ctr); } // 805AAC2C
L_805AAC30:;
  c->r[3]=R32(c->r[31]+0x00000154u); // 805AAC30
  c->r[0]=0u+0x00000001u; // 805AAC34
  c->r[5]=R32(c->r[31]+0x00000150u); // 805AAC38
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 805AAC3C
  W32(c->r[31]+0x00000154u,c->r[3]); // 805AAC40
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 805AAC44
  c->r[4]=c->r[5]+c->r[29]; // 805AAC48
  {uint32_t ea=c->r[5]+c->r[3]; c->r[3]=R32(ea); c->r[5]=ea;} // 805AAC4C
  W32(c->r[4]+0x00000000u,c->r[3]); // 805AAC50
  c->r[3]=R32(c->r[5]+0x00000004u); // 805AAC54
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AAC58
  W8(c->r[31]+0x0000015Cu,c->r[0]); // 805AAC5C
  goto L_805AACC4; // 805AAC60
L_805AAC64:;
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 805AAC64
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805AAC68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AABA0; } // 805AAC6C
L_805AAC70:;
  c->r[0]=0u+0x00000000u; // 805AAC70
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 805AAC74
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AAC78
  W8(c->r[1]+0x00000010u,c->r[0]); // 805AAC7C
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AAC80
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AAC84
  c->r[29]=rotl(c->r[30],2)&0xFFFFFFFCu; // 805AAC88
  goto L_805AACBC; // 805AAC8C
L_805AAC90:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 805AAC90
  c->r[3]=R32(c->r[3]+c->r[29]); // 805AAC94
  cmps(c,0,(int32_t)c->r[3],0); // 805AAC98
  if (crb(c,2)) { goto L_805AACB4; } // 805AAC9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AACA0
  c->r[4]=c->r[1]+0x00000008u; // 805AACA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AACA8
  c->ctr=c->r[12]; // 805AACAC
  if (true) { c->lr=0x805AACB4u; dispatch(c,c->ctr); } // 805AACB0
L_805AACB4:;
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 805AACB4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AACB8
L_805AACBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AACBC
  if (!crb(c,0)) { IRQCHK(c); goto L_805AAC90; } // 805AACC0
L_805AACC4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 805AACC4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 805AACC8
  c->r[30]=R32(c->r[1]+0x00000048u); // 805AACCC
  c->r[29]=R32(c->r[1]+0x00000044u); // 805AACD0
  c->r[28]=R32(c->r[1]+0x00000040u); // 805AACD4
  c->lr=c->r[0]; // 805AACD8
  c->r[1]=c->r[1]+0x00000050u; // 805AACDC
  return; // 805AACE0
}

// fn_805AACE4
void f_805AACE4(Ctx* __restrict c) {
  trace_call(0x805AACE4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AACE4
  c->r[12]=c->r[1]|c->r[1]; // 805AACE8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 805AACEC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AACF0
  c->r[0]=c->lr; // 805AACF4
  c->r[4]=0u+0x80720000u; // 805AACF8
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AACFC
  c->r[4]=c->r[4]+0x00000510u; // 805AAD00
  c->r[0]=0u+0x00000001u; // 805AAD04
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AAD08
  c->r[31]=0u+0x00000000u; // 805AAD0C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AAD10
  c->r[30]=0u+0x00000000u; // 805AAD14
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AAD18
  c->r[29]=c->r[3]|c->r[3]; // 805AAD1C
  c->r[5]=R32(c->r[3]+0x00000008u); // 805AAD20
  c->r[6]=R32(c->r[5]+0x00000074u); // 805AAD24
  c->r[3]=R32(c->r[6]+0x00000000u); // 805AAD28
  W32(c->r[1]+0x00000030u,c->r[3]); // 805AAD2C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AAD30
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 805AAD34
  c->r[3]=R32(c->r[6]+0x00000008u); // 805AAD38
  W32(c->r[1]+0x00000038u,c->r[3]); // 805AAD3C
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 805AAD40
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 805AAD44
  c->r[3]=R32(c->r[6]+0x00000010u); // 805AAD48
  W32(c->r[1]+0x00000040u,c->r[3]); // 805AAD4C
  c->r[5]=R32(c->r[6]+0x00000020u); // 805AAD50
  c->r[3]=R32(c->r[6]+0x00000024u); // 805AAD54
  W32(c->r[1]+0x00000054u,c->r[3]); // 805AAD58
  W32(c->r[1]+0x00000050u,c->r[5]); // 805AAD5C
  c->r[5]=R32(c->r[6]+0x00000028u); // 805AAD60
  c->r[3]=R32(c->r[6]+0x0000002Cu); // 805AAD64
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 805AAD68
  W32(c->r[1]+0x00000058u,c->r[5]); // 805AAD6C
  c->r[5]=R32(c->r[6]+0x00000030u); // 805AAD70
  c->r[3]=R32(c->r[6]+0x00000034u); // 805AAD74
  W32(c->r[1]+0x00000064u,c->r[3]); // 805AAD78
  W32(c->r[1]+0x00000060u,c->r[5]); // 805AAD7C
  c->r[5]=R32(c->r[6]+0x00000038u); // 805AAD80
  c->r[3]=R32(c->r[6]+0x0000003Cu); // 805AAD84
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 805AAD88
  W32(c->r[1]+0x00000068u,c->r[5]); // 805AAD8C
  c->r[5]=R32(c->r[6]+0x00000040u); // 805AAD90
  c->r[3]=R32(c->r[6]+0x00000044u); // 805AAD94
  W32(c->r[1]+0x00000074u,c->r[3]); // 805AAD98
  W32(c->r[1]+0x00000070u,c->r[5]); // 805AAD9C
  c->r[5]=R32(c->r[6]+0x00000048u); // 805AADA0
  c->r[3]=R32(c->r[6]+0x0000004Cu); // 805AADA4
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 805AADA8
  W32(c->r[1]+0x00000078u,c->r[5]); // 805AADAC
  W16(c->r[1]+0x00000016u,c->r[0]); // 805AADB0
  W32(c->r[1]+0x00000010u,c->r[4]); // 805AADB4
  goto L_805AADF0; // 805AADB8
L_805AADBC:;
  c->r[0]=R32(c->r[29]+0x00000150u); // 805AADBC
  c->r[4]=c->r[29]+0x00000010u; // 805AADC0
  c->r[6]=c->r[1]+0x00000030u; // 805AADC4
  c->r[7]=c->r[1]+0x00000010u; // 805AADC8
  c->r[3]=R32(c->r[31]+c->r[0]); // 805AADCC
  c->r[5]=c->r[0]+c->r[31]; // 805AADD0
  c->r[5]=R32(c->r[5]+0x00000004u); // 805AADD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AADD8
  c->r[12]=R32(c->r[12]+0x00000028u); // 805AADDC
  c->ctr=c->r[12]; // 805AADE0
  if (true) { c->lr=0x805AADE8u; dispatch(c,c->ctr); } // 805AADE4
  c->r[31]=c->r[31]+0x00000008u; // 805AADE8
  c->r[30]=c->r[30]+0x00000001u; // 805AADEC
L_805AADF0:;
  c->r[0]=R32(c->r[29]+0x00000154u); // 805AADF0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 805AADF4
  if (crb(c,0)) { IRQCHK(c); goto L_805AADBC; } // 805AADF8
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AADFC
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AAE00
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AAE04
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AAE08
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805AAE0C
  c->lr=c->r[0]; // 805AAE10
  c->r[1]=c->r[10]|c->r[10]; // 805AAE14
  return; // 805AAE18
}

// fn_805AAE1C
void f_805AAE1C(Ctx* __restrict c) {
  trace_call(0x805AAE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AAE1C
  c->r[0]=c->lr; // 805AAE20
  c->r[5]=0u+0x80860000u; // 805AAE24
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AAE28
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 805AAE2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AAE30
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AAE34
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AAE38
  c->r[29]=c->r[4]|c->r[4]; // 805AAE3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 805AAE40
  c->r[28]=c->r[3]|c->r[3]; // 805AAE44
  c->lr=0x805AAE4Cu; f_805ABF00(c); // 805AAE48
  c->r[3]=R32(c->r[28]+0x00000158u); // 805AAE4C
  c->r[31]=0u+0x806C0000u; // 805AAE50
  c->r[31]=c->r[31]+0xFFFFDF58u; // 805AAE54
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 805AAE58
  if (!crb(c,2)) { goto L_805AAE94; } // 805AAE5C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 805AAE60
  c->lr=0x805AAE68u; f_80627B94(c); // 805AAE64
  c->r[12]=R32(c->r[29]+0x00000000u); // 805AAE68
  c->r[8]=c->r[3]|c->r[3]; // 805AAE6C
  c->r[0]=R32(c->r[28]+0x00000154u); // 805AAE70
  c->r[3]=c->r[29]|c->r[29]; // 805AAE74
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AAE78
  c->r[5]=c->r[31]|c->r[31]; // 805AAE7C
  c->r[4]=0u+0x00000003u; // 805AAE80
  c->r[7]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AAE84
  c->r[6]=R32(c->r[28]+0x00000150u); // 805AAE88
  c->ctr=c->r[12]; // 805AAE8C
  if (true) { c->lr=0x805AAE94u; dispatch(c,c->ctr); } // 805AAE90
L_805AAE94:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 805AAE94
  c->r[4]=0u+0x806C0000u; // 805AAE98
  c->r[4]=c->r[4]+0xFFFFDF58u; // 805AAE9C
  c->r[3]=c->r[29]|c->r[29]; // 805AAEA0
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AAEA4
  c->r[4]=c->r[4]+0x00000009u; // 805AAEA8
  c->ctr=c->r[12]; // 805AAEAC
  if (true) { c->lr=0x805AAEB4u; dispatch(c,c->ctr); } // 805AAEB0
  c->r[30]=0u+0x00000000u; // 805AAEB4
  c->r[31]=0u+0x00000000u; // 805AAEB8
  goto L_805AAEEC; // 805AAEBC
L_805AAEC0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 805AAEC0
  c->r[3]=c->r[29]|c->r[29]; // 805AAEC4
  c->r[5]=R32(c->r[28]+0x00000150u); // 805AAEC8
  c->r[4]=0u+0x00000000u; // 805AAECC
  c->r[12]=R32(c->r[12]+0x00000014u); // 805AAED0
  c->r[6]=0u+0x00000000u; // 805AAED4
  c->r[5]=R32(c->r[5]+c->r[31]); // 805AAED8
  c->ctr=c->r[12]; // 805AAEDC
  if (true) { c->lr=0x805AAEE4u; dispatch(c,c->ctr); } // 805AAEE0
  c->r[31]=c->r[31]+0x00000008u; // 805AAEE4
  c->r[30]=c->r[30]+0x00000001u; // 805AAEE8
L_805AAEEC:;
  c->r[0]=R32(c->r[28]+0x00000154u); // 805AAEEC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 805AAEF0
  if (crb(c,0)) { IRQCHK(c); goto L_805AAEC0; } // 805AAEF4
  c->r[12]=R32(c->r[29]+0x00000000u); // 805AAEF8
  c->r[3]=c->r[29]|c->r[29]; // 805AAEFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AAF00
  c->ctr=c->r[12]; // 805AAF04
  if (true) { c->lr=0x805AAF0Cu; dispatch(c,c->ctr); } // 805AAF08
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AAF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AAF10
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AAF14
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AAF18
  c->r[28]=R32(c->r[1]+0x00000010u); // 805AAF1C
  c->lr=c->r[0]; // 805AAF20
  c->r[1]=c->r[1]+0x00000020u; // 805AAF24
  return; // 805AAF28
}

// fn_805AAF2C
void f_805AAF2C(Ctx* __restrict c) {
  trace_call(0x805AAF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AAF2C
  c->r[0]=c->lr; // 805AAF30
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AAF34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AAF38
  c->r[31]=c->r[3]|c->r[3]; // 805AAF3C
  c->r[0]=R32(c->r[3]+0x00000154u); // 805AAF40
  cmps(c,0,(int32_t)c->r[0],0); // 805AAF44
  if (!crb(c,2)) { goto L_805AAF8C; } // 805AAF48
  c->r[0]=R32(c->r[3]+0x00000158u); // 805AAF4C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AAF50
  if (!crb(c,2)) { goto L_805AAF70; } // 805AAF54
  c->r[0]=R32(c->r[31]+0x00000158u); // 805AAF58
  c->r[6]=0u+0x00000018u; // 805AAF5C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AAF60
  c->r[4]=R32(c->r[31]+0x00000150u); // 805AAF64
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AAF68
  c->lr=0x805AAF70u; f_8062C630(c); // 805AAF6C
L_805AAF70:;
  c->r[0]=R32(c->r[31]+0x00000158u); // 805AAF70
  c->r[3]=0u+0x00000000u; // 805AAF74
  W32(c->r[31]+0x00000150u,c->r[3]); // 805AAF78
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AAF7C
  c->r[0]=c->r[0]|0x80000000u; // 805AAF80
  W32(c->r[31]+0x00000154u,c->r[3]); // 805AAF84
  W32(c->r[31]+0x00000158u,c->r[0]); // 805AAF88
L_805AAF8C:;
  c->r[3]=c->r[31]|c->r[31]; // 805AAF8C
  c->lr=0x805AAF94u; f_805AC400(c); // 805AAF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AAF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AAF98
  c->lr=c->r[0]; // 805AAF9C
  c->r[1]=c->r[1]+0x00000010u; // 805AAFA0
  return; // 805AAFA4
}

// fn_805AAFA8
void f_805AAFA8(Ctx* __restrict c) {
  trace_call(0x805AAFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AAFA8
  c->r[0]=c->lr; // 805AAFAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AAFB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AAFB4
  c->r[31]=c->r[3]|c->r[3]; // 805AAFB8
  c->r[0]=R8(c->r[3]+0x0000015Cu); // 805AAFBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AAFC0
  if (crb(c,2)) { goto L_805AAFF8; } // 805AAFC4
  c->r[4]=R32(c->r[3]+0x00000154u); // 805AAFC8
  c->r[3]=R32(c->r[3]+0x00000150u); // 805AAFCC
  cmps(c,0,(int32_t)c->r[4],1); // 805AAFD0
  if (!crb(c,1)) { goto L_805AAFF0; } // 805AAFD4
  c->r[0]=0u+0x00000000u; // 805AAFD8
  W8(c->r[1]+0x00000008u,c->r[0]); // 805AAFDC
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 805AAFE0
  c->r[6]=c->r[1]+0x00000008u; // 805AAFE4
  c->r[4]=0u+0x00000000u; // 805AAFE8
  c->lr=0x805AAFF0u; f_805AB00C(c); // 805AAFEC
L_805AAFF0:;
  c->r[0]=0u+0x00000000u; // 805AAFF0
  W8(c->r[31]+0x0000015Cu,c->r[0]); // 805AAFF4
L_805AAFF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AAFF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AAFFC
  c->lr=c->r[0]; // 805AB000
  c->r[1]=c->r[1]+0x00000020u; // 805AB004
  return; // 805AB008
}

// fn_805AB00C
void f_805AB00C(Ctx* __restrict c) {
  trace_call(0x805AB00Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AB00C
  c->r[12]=c->r[1]|c->r[1]; // 805AB010
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 805AB014
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB018
  c->r[0]=c->lr; // 805AB01C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AB020
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AB024
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AB028
  c->r[30]=c->r[6]|c->r[6]; // 805AB02C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AB030
  c->r[29]=c->r[5]|c->r[5]; // 805AB034
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 805AB038
  c->r[28]=c->r[3]|c->r[3]; // 805AB03C
L_805AB040:;
  c->r[0]=c->r[4]+c->r[29]; // 805AB040
  c->r[5]=c->r[29]|c->r[29]; // 805AB044
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFF8u; // 805AB048
  c->r[31]=c->r[4]|c->r[4]; // 805AB04C
  c->r[3]=c->r[28]+c->r[0]; // 805AB050
  c->r[0]=R32(c->r[28]+c->r[0]); // 805AB054
  c->r[3]=R32(c->r[3]+0x00000004u); // 805AB058
  c->r[6]=rotl(c->r[4],3)&0xFFFFFFF8u; // 805AB05C
  W32(c->r[1]+0x00000030u,c->r[0]); // 805AB060
  W32(c->r[1]+0x00000034u,c->r[3]); // 805AB064
  goto L_805AB074; // 805AB068
L_805AB06C:;
  c->r[31]=c->r[31]+0x00000001u; // 805AB06C
  c->r[6]=c->r[6]+0x00000008u; // 805AB070
L_805AB074:;
  c->r[8]=c->r[28]+c->r[6]; // 805AB074
  c->r[7]=R32(c->r[3]+0x00000014u); // 805AB078
  c->r[8]=R32(c->r[8]+0x00000004u); // 805AB07C
  c->r[0]=R32(c->r[8]+0x00000014u); // 805AB080
  c->r[0]=c->r[7]^c->r[0]; // 805AB084
  c->r[0]=cntlz(c->r[0]); // 805AB088
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]<<((c->r[0])&31)); // 805AB08C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AB090
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AB094
  c->r[0]=0u-c->r[7]; // 805AB098
  c->r[0]=c->r[0]|c->r[7]; // 805AB09C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AB0A0
  if (!crb(c,2)) { IRQCHK(c); goto L_805AB06C; } // 805AB0A4
  c->r[10]=R32(c->r[1]+0x00000034u); // 805AB0A8
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFF8u; // 805AB0AC
  goto L_805AB0BC; // 805AB0B0
L_805AB0B4:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805AB0B4
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 805AB0B8
L_805AB0BC:;
  c->r[9]=c->r[28]+c->r[7]; // 805AB0BC
  c->r[0]=R32(c->r[10]+0x00000014u); // 805AB0C0
  c->r[8]=R32(c->r[9]+0x00000004u); // 805AB0C4
  c->r[8]=R32(c->r[8]+0x00000014u); // 805AB0C8
  c->r[0]=c->r[8]^c->r[0]; // 805AB0CC
  c->r[0]=cntlz(c->r[0]); // 805AB0D0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 805AB0D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AB0D8
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AB0DC
  c->r[0]=0u-c->r[8]; // 805AB0E0
  c->r[0]=c->r[0]|c->r[8]; // 805AB0E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AB0E8
  if (!crb(c,2)) { IRQCHK(c); goto L_805AB0B4; } // 805AB0EC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 805AB0F0
  if (crb(c,0)) { goto L_805AB134; } // 805AB0F4
  if (crb(c,2)) { goto L_805AB128; } // 805AB0F8
  c->r[8]=R32(c->r[9]+0x00000000u); // 805AB0FC
  c->r[10]=c->r[28]+c->r[6]; // 805AB100
  c->r[7]=R32(c->r[9]+0x00000004u); // 805AB104
  c->r[0]=R32(c->r[28]+c->r[6]); // 805AB108
  W32(c->r[9]+0x00000000u,c->r[0]); // 805AB10C
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AB110
  W32(c->r[9]+0x00000004u,c->r[0]); // 805AB114
  W32(c->r[28]+c->r[6],c->r[8]); // 805AB118
  W32(c->r[1]+0x00000020u,c->r[8]); // 805AB11C
  W32(c->r[1]+0x00000024u,c->r[7]); // 805AB120
  W32(c->r[10]+0x00000004u,c->r[7]); // 805AB124
L_805AB128:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805AB128
  c->r[31]=c->r[31]+0x00000001u; // 805AB12C
  c->r[6]=c->r[6]+0x00000008u; // 805AB130
L_805AB134:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[5]); // 805AB134
  if (!crb(c,1)) { IRQCHK(c); goto L_805AB074; } // 805AB138
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 805AB13C
  if (!crb(c,0)) { goto L_805AB158; } // 805AB140
  c->r[0]=R8(c->r[30]+0x00000000u); // 805AB144
  c->r[3]=c->r[28]|c->r[28]; // 805AB148
  W8(c->r[1]+0x00000010u,c->r[0]); // 805AB14C
  c->r[6]=c->r[1]+0x00000010u; // 805AB150
  c->lr=0x805AB158u; f_805AB00C(c); // 805AB154
L_805AB158:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[29]); // 805AB158
  if (!crb(c,0)) { goto L_805AB168; } // 805AB15C
  c->r[4]=c->r[31]|c->r[31]; // 805AB160
  IRQCHK(c); goto L_805AB040; // 805AB164
L_805AB168:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AB168
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AB16C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AB170
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AB174
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805AB178
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 805AB17C
  c->lr=c->r[0]; // 805AB180
  c->r[1]=c->r[10]|c->r[10]; // 805AB184
  return; // 805AB188
}

// fn_805AB18C
void f_805AB18C(Ctx* __restrict c) {
  trace_call(0x805AB18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB18C
  c->r[0]=c->lr; // 805AB190
  cmps(c,0,(int32_t)c->r[3],0); // 805AB194
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AB198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AB19C
  c->r[31]=c->r[3]|c->r[3]; // 805AB1A0
  if (crb(c,2)) { goto L_805AB1EC; } // 805AB1A4
  W32(c->r[1]+0x00000008u,c->r[4]); // 805AB1A8
  c->r[4]=c->r[1]+0x00000008u; // 805AB1AC
  c->lr=0x805AB1B4u; f_805C54E4(c); // 805AB1B0
  c->r[3]=0u+0x80720000u; // 805AB1B4
  c->r[4]=0u+0x00000000u; // 805AB1B8
  c->r[0]=0u+0x80000000u; // 805AB1BC
  W32(c->r[31]+0x00000088u,c->r[4]); // 805AB1C0
  c->r[3]=c->r[3]+0x00002778u; // 805AB1C4
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 805AB1C8
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AB1CC
  W32(c->r[31]+0x00000094u,c->r[4]); // 805AB1D0
  W32(c->r[31]+0x00000098u,c->r[4]); // 805AB1D4
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805AB1D8
  W32(c->r[31]+0x00000000u,c->r[3]); // 805AB1DC
  W32(c->r[31]+0x00000150u,c->r[4]); // 805AB1E0
  W32(c->r[31]+0x00000154u,c->r[4]); // 805AB1E4
  W32(c->r[31]+0x00000158u,c->r[0]); // 805AB1E8
L_805AB1EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AB1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AB1F0
  c->lr=c->r[0]; // 805AB1F4
  c->r[1]=c->r[1]+0x00000020u; // 805AB1F8
  return; // 805AB1FC
}

// fn_805AB200
void f_805AB200(Ctx* __restrict c) {
  trace_call(0x805AB200u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB200
  c->r[4]=0u+0xFFFFFFFFu; // 805AB204
  c->r[12]=R32(c->r[12]+0x00000008u); // 805AB208
  c->ctr=c->r[12]; // 805AB20C
  if (true) { dispatch(c,c->ctr); return; } // 805AB210
}

// fn_805AB214
void f_805AB214(Ctx* __restrict c) {
  trace_call(0x805AB214u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AB214
  c->r[12]=c->r[1]|c->r[1]; // 805AB218
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 805AB21C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB220
  c->r[0]=c->lr; // 805AB224
  c->r[3]=0u+0x806C0000u; // 805AB228
  c->r[4]=0u+0x806C0000u; // 805AB22C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AB230
  c->r[4]=c->r[4]+0xFFFFDF98u; // 805AB234
  c->r[5]=0u+0x80860000u; // 805AB238
  c->r[3]=c->r[3]+0xFFFFDF68u; // 805AB23C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AB240
  c->r[0]=0u+0x00000002u; // 805AB244
  c->r[31]=0u+0x00000000u; // 805AB248
  c->r[4]=c->r[4]+0x0000001Cu; // 805AB24C
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AB250
  c->r[3]=0u+0x80860000u; // 805AB254
  c->r[3]=c->r[3]+0xFFFFDCA0u; // 805AB258
  c->r[5]=c->r[5]+0xFFFFDD20u; // 805AB25C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AB260
  c->r[6]=0u+0x00000160u; // 805AB264
  c->r[7]=0u+0x00000000u; // 805AB268
  c->r[8]=0u+0x00000000u; // 805AB26C
  W32(c->r[1]+0x00000010u,c->r[31]); // 805AB270
  c->r[9]=0u+0x00000000u; // 805AB274
  c->r[10]=0u+0x00000000u; // 805AB278
  W32(c->r[1]+0x00000014u,c->r[31]); // 805AB27C
  W32(c->r[1]+0x00000018u,c->r[31]); // 805AB280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AB284
  c->lr=0x805AB28Cu; f_8062E0DC(c); // 805AB288
  c->r[3]=addc(c,c->r[1],0x00000030u,0); cr0(c,c->r[3]); // 805AB28C
  if (crb(c,2)) { goto L_805AB2D4; } // 805AB290
  W32(c->r[1]+0x00000020u,c->r[31]); // 805AB294
  c->r[4]=c->r[1]+0x00000020u; // 805AB298
  c->lr=0x805AB2A0u; f_805C54E4(c); // 805AB29C
  c->r[3]=0u+0x80720000u; // 805AB2A0
  c->r[0]=0u+0x80000000u; // 805AB2A4
  c->r[3]=c->r[3]+0x00002778u; // 805AB2A8
  W32(c->r[1]+0x000000B8u,c->r[31]); // 805AB2AC
  W32(c->r[1]+0x000000BCu,c->r[31]); // 805AB2B0
  W32(c->r[1]+0x000000C0u,c->r[0]); // 805AB2B4
  W32(c->r[1]+0x000000C4u,c->r[31]); // 805AB2B8
  W32(c->r[1]+0x000000C8u,c->r[31]); // 805AB2BC
  W32(c->r[1]+0x000000CCu,c->r[0]); // 805AB2C0
  W32(c->r[1]+0x00000030u,c->r[3]); // 805AB2C4
  W32(c->r[1]+0x00000180u,c->r[31]); // 805AB2C8
  W32(c->r[1]+0x00000184u,c->r[31]); // 805AB2CC
  W32(c->r[1]+0x00000188u,c->r[0]); // 805AB2D0
L_805AB2D4:;
  c->r[7]=0u+0x806C0000u; // 805AB2D4
  c->r[6]=0u+0x80860000u; // 805AB2D8
  c->r[7]=c->r[7]+0xFFFFDF98u; // 805AB2DC
  c->r[5]=0u+0x805B0000u; // 805AB2E0
  c->r[3]=0u+0x805B0000u; // 805AB2E4
  c->r[4]=c->r[6]+0xFFFFDCD0u; // 805AB2E8
  c->r[0]=R32(c->r[1]+0x00000030u); // 805AB2EC
  c->r[7]=c->r[7]+0x0000001Cu; // 805AB2F0
  c->r[5]=c->r[5]+0xFFFFB18Cu; // 805AB2F4
  c->r[3]=c->r[3]+0xFFFFB200u; // 805AB2F8
  W32(c->r[6]+0xFFFFDCD0u,c->r[7]); // 805AB2FC
  W32(c->r[4]+0x00000004u,c->r[5]); // 805AB300
  W32(c->r[4]+0x00000008u,c->r[3]); // 805AB304
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805AB308
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AB30C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AB310
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AB314
  c->lr=c->r[0]; // 805AB318
  c->r[1]=c->r[10]|c->r[10]; // 805AB31C
  return; // 805AB320
}

// fn_805AB324
void f_805AB324(Ctx* __restrict c) {
  trace_call(0x805AB324u);
  return; // 805AB324
}

// fn_805AB328
void f_805AB328(Ctx* __restrict c) {
  trace_call(0x805AB328u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB328
  c->r[0]=c->lr; // 805AB32C
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AB330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AB334
  c->r[31]=c->r[3]|c->r[3]; // 805AB338
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AB33C
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AB340
  c->r[4]=R32(c->r[3]+0x00000098u); // 805AB344
  c->r[29]=c->r[4]+0xFFFFFFFFu; // 805AB348
  c->r[30]=rotl(c->r[29],2)&0xFFFFFFFCu; // 805AB34C
  goto L_805AB380; // 805AB350
L_805AB354:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB354
  c->r[3]=R32(c->r[3]+c->r[30]); // 805AB358
  cmps(c,0,(int32_t)c->r[3],0); // 805AB35C
  if (crb(c,2)) { goto L_805AB378; } // 805AB360
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB364
  c->r[4]=c->r[31]|c->r[31]; // 805AB368
  c->r[12]=R32(c->r[12]+0x00000010u); // 805AB36C
  c->ctr=c->r[12]; // 805AB370
  if (true) { c->lr=0x805AB378u; dispatch(c,c->ctr); } // 805AB374
L_805AB378:;
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 805AB378
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 805AB37C
L_805AB380:;
  cmps(c,0,(int32_t)c->r[29],0); // 805AB380
  if (!crb(c,0)) { IRQCHK(c); goto L_805AB354; } // 805AB384
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB388
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 805AB38C
  c->r[0]=c->r[4]+0x00000001u; // 805AB390
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB394
  c->ctr=c->r[0]; // 805AB398
  if (crb(c,0)) { goto L_805AB3F8; } // 805AB39C
L_805AB3A0:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB3A0
  c->r[0]=R32(c->r[3]+c->r[6]); // 805AB3A4
  cmps(c,0,(int32_t)c->r[0],0); // 805AB3A8
  if (!crb(c,2)) { goto L_805AB3EC; } // 805AB3AC
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB3B0
  c->r[5]=c->r[4]|c->r[4]; // 805AB3B4
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB3B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 805AB3BC
  W32(c->r[31]+0x00000098u,c->r[0]); // 805AB3C0
  goto L_805AB3E0; // 805AB3C4
L_805AB3C8:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 805AB3C8
  c->r[5]=c->r[5]+0x00000001u; // 805AB3CC
  c->r[3]=c->r[0]+c->r[7]; // 805AB3D0
  c->r[7]=c->r[7]+0x00000004u; // 805AB3D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AB3D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 805AB3DC
L_805AB3E0:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 805AB3E0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805AB3E4
  if (crb(c,0)) { IRQCHK(c); goto L_805AB3C8; } // 805AB3E8
L_805AB3EC:;
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 805AB3EC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 805AB3F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AB3A0; } // 805AB3F4
L_805AB3F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AB3F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AB3FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AB400
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AB404
  c->lr=c->r[0]; // 805AB408
  c->r[1]=c->r[1]+0x00000020u; // 805AB40C
  return; // 805AB410
}

// fn_805AB414
void f_805AB414(Ctx* __restrict c) {
  trace_call(0x805AB414u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB414
  c->r[0]=c->lr; // 805AB418
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AB41C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AB420
  c->r[31]=c->r[3]|c->r[3]; // 805AB424
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AB428
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AB42C
  c->r[4]=R32(c->r[3]+0x00000098u); // 805AB430
  c->r[29]=c->r[4]+0xFFFFFFFFu; // 805AB434
  c->r[30]=rotl(c->r[29],2)&0xFFFFFFFCu; // 805AB438
  goto L_805AB46C; // 805AB43C
L_805AB440:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB440
  c->r[3]=R32(c->r[3]+c->r[30]); // 805AB444
  cmps(c,0,(int32_t)c->r[3],0); // 805AB448
  if (crb(c,2)) { goto L_805AB464; } // 805AB44C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB450
  c->r[4]=c->r[31]|c->r[31]; // 805AB454
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AB458
  c->ctr=c->r[12]; // 805AB45C
  if (true) { c->lr=0x805AB464u; dispatch(c,c->ctr); } // 805AB460
L_805AB464:;
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 805AB464
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 805AB468
L_805AB46C:;
  cmps(c,0,(int32_t)c->r[29],0); // 805AB46C
  if (!crb(c,0)) { IRQCHK(c); goto L_805AB440; } // 805AB470
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB474
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 805AB478
  c->r[0]=c->r[4]+0x00000001u; // 805AB47C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB480
  c->ctr=c->r[0]; // 805AB484
  if (crb(c,0)) { goto L_805AB4E4; } // 805AB488
L_805AB48C:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB48C
  c->r[0]=R32(c->r[3]+c->r[6]); // 805AB490
  cmps(c,0,(int32_t)c->r[0],0); // 805AB494
  if (!crb(c,2)) { goto L_805AB4D8; } // 805AB498
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB49C
  c->r[5]=c->r[4]|c->r[4]; // 805AB4A0
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB4A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 805AB4A8
  W32(c->r[31]+0x00000098u,c->r[0]); // 805AB4AC
  goto L_805AB4CC; // 805AB4B0
L_805AB4B4:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 805AB4B4
  c->r[5]=c->r[5]+0x00000001u; // 805AB4B8
  c->r[3]=c->r[0]+c->r[7]; // 805AB4BC
  c->r[7]=c->r[7]+0x00000004u; // 805AB4C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AB4C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 805AB4C8
L_805AB4CC:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 805AB4CC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805AB4D0
  if (crb(c,0)) { IRQCHK(c); goto L_805AB4B4; } // 805AB4D4
L_805AB4D8:;
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 805AB4D8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 805AB4DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AB48C; } // 805AB4E0
L_805AB4E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AB4E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AB4E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AB4EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AB4F0
  c->lr=c->r[0]; // 805AB4F4
  c->r[1]=c->r[1]+0x00000020u; // 805AB4F8
  return; // 805AB4FC
}

// fn_805AB500
void f_805AB500(Ctx* __restrict c) {
  trace_call(0x805AB500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB500
  c->r[0]=c->lr; // 805AB504
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AB508
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AB50C
  c->r[31]=c->r[3]|c->r[3]; // 805AB510
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AB514
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AB518
  c->r[4]=R32(c->r[3]+0x00000098u); // 805AB51C
  c->r[29]=c->r[4]+0xFFFFFFFFu; // 805AB520
  c->r[30]=rotl(c->r[29],2)&0xFFFFFFFCu; // 805AB524
  goto L_805AB558; // 805AB528
L_805AB52C:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB52C
  c->r[3]=R32(c->r[3]+c->r[30]); // 805AB530
  cmps(c,0,(int32_t)c->r[3],0); // 805AB534
  if (crb(c,2)) { goto L_805AB550; } // 805AB538
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB53C
  c->r[4]=c->r[31]|c->r[31]; // 805AB540
  c->r[12]=R32(c->r[12]+0x00000014u); // 805AB544
  c->ctr=c->r[12]; // 805AB548
  if (true) { c->lr=0x805AB550u; dispatch(c,c->ctr); } // 805AB54C
L_805AB550:;
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 805AB550
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 805AB554
L_805AB558:;
  cmps(c,0,(int32_t)c->r[29],0); // 805AB558
  if (!crb(c,0)) { IRQCHK(c); goto L_805AB52C; } // 805AB55C
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB560
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 805AB564
  c->r[0]=c->r[4]+0x00000001u; // 805AB568
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB56C
  c->ctr=c->r[0]; // 805AB570
  if (crb(c,0)) { goto L_805AB5D0; } // 805AB574
L_805AB578:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 805AB578
  c->r[0]=R32(c->r[3]+c->r[6]); // 805AB57C
  cmps(c,0,(int32_t)c->r[0],0); // 805AB580
  if (!crb(c,2)) { goto L_805AB5C4; } // 805AB584
  c->r[3]=R32(c->r[31]+0x00000098u); // 805AB588
  c->r[5]=c->r[4]|c->r[4]; // 805AB58C
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AB590
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 805AB594
  W32(c->r[31]+0x00000098u,c->r[0]); // 805AB598
  goto L_805AB5B8; // 805AB59C
L_805AB5A0:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 805AB5A0
  c->r[5]=c->r[5]+0x00000001u; // 805AB5A4
  c->r[3]=c->r[0]+c->r[7]; // 805AB5A8
  c->r[7]=c->r[7]+0x00000004u; // 805AB5AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AB5B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 805AB5B4
L_805AB5B8:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 805AB5B8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805AB5BC
  if (crb(c,0)) { IRQCHK(c); goto L_805AB5A0; } // 805AB5C0
L_805AB5C4:;
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 805AB5C4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 805AB5C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AB578; } // 805AB5CC
L_805AB5D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AB5D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AB5D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AB5D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AB5DC
  c->lr=c->r[0]; // 805AB5E0
  c->r[1]=c->r[1]+0x00000020u; // 805AB5E4
  return; // 805AB5E8
}

// fn_805AB5EC
void f_805AB5EC(Ctx* __restrict c) {
  trace_call(0x805AB5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB5EC
  c->r[0]=c->lr; // 805AB5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AB5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AB5F8
  c->r[31]=c->r[4]|c->r[4]; // 805AB5FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 805AB600
  c->r[30]=c->r[3]|c->r[3]; // 805AB604
  c->r[0]=R32(c->r[4]+0x00000008u); // 805AB608
  cmps(c,0,(int32_t)c->r[0],0); // 805AB60C
  if (crb(c,2)) { goto L_805AB63C; } // 805AB610
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB614
  c->r[12]=R32(c->r[12]+0x00000010u); // 805AB618
  c->ctr=c->r[12]; // 805AB61C
  if (true) { c->lr=0x805AB624u; dispatch(c,c->ctr); } // 805AB620
  c->r[12]=R32(c->r[30]+0x00000000u); // 805AB624
  c->r[3]=c->r[30]|c->r[30]; // 805AB628
  c->r[4]=c->r[31]|c->r[31]; // 805AB62C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AB630
  c->ctr=c->r[12]; // 805AB634
  if (true) { c->lr=0x805AB63Cu; dispatch(c,c->ctr); } // 805AB638
L_805AB63C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AB63C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AB640
  c->r[30]=R32(c->r[1]+0x00000008u); // 805AB644
  c->lr=c->r[0]; // 805AB648
  c->r[1]=c->r[1]+0x00000010u; // 805AB64C
  return; // 805AB650
}

// fn_805AB654
void f_805AB654(Ctx* __restrict c) {
  trace_call(0x805AB654u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AB654
  c->r[0]=c->lr; // 805AB658
  W32(c->r[1]+0x00000054u,c->r[0]); // 805AB65C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 805AB660
  c->r[31]=c->r[4]|c->r[4]; // 805AB664
  W32(c->r[1]+0x00000048u,c->r[30]); // 805AB668
  c->r[30]=c->r[3]|c->r[3]; // 805AB66C
  W32(c->r[1]+0x00000044u,c->r[29]); // 805AB670
  c->r[7]=R32(c->r[3]+0x00000008u); // 805AB674
  cmps(c,0,(int32_t)c->r[7],0); // 805AB678
  if (crb(c,2)) { goto L_805ABA08; } // 805AB67C
  c->r[5]=R32(c->r[7]+0x00000090u); // 805AB680
  c->r[0]=R32(c->r[7]+0x00000094u); // 805AB684
  c->r[0]=c->r[5]+c->r[0]; cr0(c,c->r[0]); // 805AB688
  if (crb(c,2)) { goto L_805AB6B0; } // 805AB68C
  W32(c->r[1]+0x00000034u,c->r[3]); // 805AB690
  c->r[0]=0u+0x00000011u; // 805AB694
  c->r[3]=c->r[7]|c->r[7]; // 805AB698
  W32(c->r[1]+0x00000038u,c->r[4]); // 805AB69C
  c->r[4]=c->r[1]+0x00000030u; // 805AB6A0
  W8(c->r[1]+0x00000030u,c->r[0]); // 805AB6A4
  c->lr=0x805AB6ACu; f_805C4D54(c); // 805AB6A8
  goto L_805ABA08; // 805AB6AC
L_805AB6B0:;
  c->r[4]=R32(c->r[7]+0x00000090u); // 805AB6B0
  c->r[6]=0u+0x00000000u; // 805AB6B4
  c->r[5]=0u+0x80000000u; // 805AB6B8
  c->r[0]=c->r[4]+0x00000001u; // 805AB6BC
  W32(c->r[7]+0x00000090u,c->r[0]); // 805AB6C0
  c->r[4]=R32(c->r[3]+0x00000008u); // 805AB6C4
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB6C8
  c->r[29]=R32(c->r[4]+0x0000031Cu); // 805AB6CC
  W32(c->r[1]+0x00000020u,c->r[6]); // 805AB6D0
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 805AB6D4
  c->r[0]=c->r[4]+0x00000010u; // 805AB6D8
  W32(c->r[1]+0x00000024u,c->r[6]); // 805AB6DC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AB6E0
  W32(c->r[1]+0x00000028u,c->r[5]); // 805AB6E4
  c->r[7]=R32(c->r[3]+0x00000010u); // 805AB6E8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AB6EC
  c->r[5]=c->r[7]+c->r[4]; // 805AB6F0
  cmpu(c,0,c->r[5],c->r[0]); // 805AB6F4
  if (crb(c,1)) { goto L_805AB704; } // 805AB6F8
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AB6FC
  goto L_805AB718; // 805AB700
L_805AB704:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB704
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AB708
  c->ctr=c->r[12]; // 805AB70C
  if (true) { c->lr=0x805AB714u; dispatch(c,c->ctr); } // 805AB710
  c->r[7]=c->r[3]|c->r[3]; // 805AB714
L_805AB718:;
  c->r[0]=c->r[29]|0x80000000u; // 805AB718
  W32(c->r[1]+0x00000020u,c->r[7]); // 805AB71C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB720
  c->r[6]=0u+0x00000000u; // 805AB724
  W32(c->r[1]+0x00000028u,c->r[0]); // 805AB728
  c->r[5]=0u+0x80000000u; // 805AB72C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 805AB730
  c->r[4]=R32(c->r[30]+0x00000008u); // 805AB734
  c->r[29]=R32(c->r[4]+0x0000031Cu); // 805AB738
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 805AB73C
  W32(c->r[1]+0x00000010u,c->r[6]); // 805AB740
  c->r[0]=c->r[4]+0x00000010u; // 805AB744
  W32(c->r[1]+0x00000014u,c->r[6]); // 805AB748
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AB74C
  W32(c->r[1]+0x00000018u,c->r[5]); // 805AB750
  c->r[6]=R32(c->r[3]+0x00000010u); // 805AB754
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AB758
  c->r[5]=c->r[6]+c->r[4]; // 805AB75C
  cmpu(c,0,c->r[5],c->r[0]); // 805AB760
  if (crb(c,1)) { goto L_805AB770; } // 805AB764
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AB768
  goto L_805AB784; // 805AB76C
L_805AB770:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB770
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AB774
  c->ctr=c->r[12]; // 805AB778
  if (true) { c->lr=0x805AB780u; dispatch(c,c->ctr); } // 805AB77C
  c->r[6]=c->r[3]|c->r[3]; // 805AB780
L_805AB784:;
  c->r[0]=c->r[29]|0x80000000u; // 805AB784
  c->r[3]=c->r[30]+0x00000024u; // 805AB788
  W32(c->r[1]+0x00000010u,c->r[6]); // 805AB78C
  W32(c->r[1]+0x00000018u,c->r[0]); // 805AB790
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 805AB794
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AB798
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB79C
  c->r[3]=R32(c->r[3]+0x00000054u); // 805AB7A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AB7A4
  cmps(c,0,(int32_t)c->r[0],0); // 805AB7A8
  if (crb(c,2)) { goto L_805AB7B4; } // 805AB7AC
  c->lr=0x805AB7B4u; f_805E2504(c); // 805AB7B0
L_805AB7B4:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB7B4
  c->r[5]=c->r[31]|c->r[31]; // 805AB7B8
  c->r[4]=c->r[1]+0x00000008u; // 805AB7BC
  c->r[7]=c->r[1]+0x00000020u; // 805AB7C0
  c->r[3]=R32(c->r[3]+0x00000054u); // 805AB7C4
  c->r[8]=c->r[1]+0x00000010u; // 805AB7C8
  c->r[6]=0u+0x00000001u; // 805AB7CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB7D0
  c->r[12]=R32(c->r[12]+0x00000030u); // 805AB7D4
  c->ctr=c->r[12]; // 805AB7D8
  if (true) { c->lr=0x805AB7E0u; dispatch(c,c->ctr); } // 805AB7DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AB7E0
  cmps(c,0,(int32_t)c->r[0],0); // 805AB7E4
  if (!crb(c,2)) { goto L_805AB7F8; } // 805AB7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AB7EC
  cmps(c,0,(int32_t)c->r[0],0); // 805AB7F0
  if (crb(c,2)) { goto L_805AB8B4; } // 805AB7F4
L_805AB7F8:;
  c->r[3]=c->r[1]+0x00000020u; // 805AB7F8
  c->r[4]=c->r[1]+0x00000010u; // 805AB7FC
  c->lr=0x805AB804u; f_80551730(c); // 805AB800
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB804
  c->r[5]=R32(c->r[1]+0x00000014u); // 805AB808
  c->r[4]=R32(c->r[1]+0x00000010u); // 805AB80C
  c->r[3]=R32(c->r[3]+0x00000060u); // 805AB810
  c->lr=0x805AB818u; f_805516A4(c); // 805AB814
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB818
  c->r[6]=R32(c->r[3]+0x00000078u); // 805AB81C
  cmps(c,0,(int32_t)c->r[6],0); // 805AB820
  if (crb(c,2)) { goto L_805AB82C; } // 805AB824
  c->r[6]=c->r[6]+0x00000008u; // 805AB828
L_805AB82C:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB82C
  c->r[5]=R32(c->r[1]+0x00000024u); // 805AB830
  c->r[4]=R32(c->r[1]+0x00000020u); // 805AB834
  c->r[3]=R32(c->r[3]+0x00000060u); // 805AB838
  c->lr=0x805AB840u; f_805515CC(c); // 805AB83C
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 805AB840
  c->r[6]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 805AB844
  c->r[0]=c->r[6]+0x00000001u; // 805AB848
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 805AB84C
  c->ctr=c->r[0]; // 805AB850
  if (crb(c,0)) { goto L_805AB8B4; } // 805AB854
L_805AB858:;
  c->r[4]=R32(c->r[30]+0x00000088u); // 805AB858
  c->r[0]=R32(c->r[4]+c->r[3]); // 805AB85C
  cmps(c,0,(int32_t)c->r[0],0); // 805AB860
  if (!crb(c,2)) { goto L_805AB8A8; } // 805AB864
  c->r[5]=R32(c->r[30]+0x0000008Cu); // 805AB868
  c->r[7]=c->r[6]|c->r[6]; // 805AB86C
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 805AB870
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 805AB874
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 805AB878
  goto L_805AB89C; // 805AB87C
L_805AB880:;
  c->r[0]=c->r[7]+0x00000001u; // 805AB880
  c->r[5]=R32(c->r[30]+0x00000088u); // 805AB884
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AB888
  c->r[7]=c->r[7]+0x00000001u; // 805AB88C
  c->r[0]=R32(c->r[5]+c->r[0]); // 805AB890
  W32(c->r[5]+c->r[4],c->r[0]); // 805AB894
  c->r[4]=c->r[4]+0x00000004u; // 805AB898
L_805AB89C:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805AB89C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 805AB8A0
  if (crb(c,0)) { IRQCHK(c); goto L_805AB880; } // 805AB8A4
L_805AB8A8:;
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 805AB8A8
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 805AB8AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AB858; } // 805AB8B0
L_805AB8B4:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB8B4
  c->r[3]=R32(c->r[3]+0x00000054u); // 805AB8B8
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AB8BC
  cmps(c,0,(int32_t)c->r[0],0); // 805AB8C0
  if (crb(c,2)) { goto L_805AB8CC; } // 805AB8C4
  c->lr=0x805AB8CCu; f_805E2508(c); // 805AB8C8
L_805AB8CC:;
  c->r[3]=c->r[30]|c->r[30]; // 805AB8CC
  c->r[4]=c->r[31]|c->r[31]; // 805AB8D0
  c->lr=0x805AB8D8u; f_805ABA24(c); // 805AB8D4
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AB8D8
  c->r[3]=R32(c->r[3]+0x00000058u); // 805AB8DC
  cmps(c,0,(int32_t)c->r[3],0); // 805AB8E0
  if (crb(c,2)) { goto L_805AB8F0; } // 805AB8E4
  c->r[0]=0u+0x00000001u; // 805AB8E8
  W8(c->r[3]+0x00000018u,c->r[0]); // 805AB8EC
L_805AB8F0:;
  c->r[29]=R32(c->r[30]+0x00000008u); // 805AB8F0
  c->r[0]=R32(c->r[29]+0x00000090u); // 805AB8F4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AB8F8
  W32(c->r[29]+0x00000090u,c->r[0]); // 805AB8FC
  if (!crb(c,2)) { goto L_805AB950; } // 805AB900
  c->r[0]=R8(c->r[29]+0x00000098u); // 805AB904
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AB908
  c->r[0]=0u-c->r[3]; // 805AB90C
  c->r[0]=c->r[0]|c->r[3]; // 805AB910
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AB914
  if (!crb(c,2)) { goto L_805AB950; } // 805AB918
  c->r[0]=R32(c->r[29]+0x00000088u); // 805AB91C
  cmps(c,0,(int32_t)c->r[0],0); // 805AB920
  if (crb(c,2)) { goto L_805AB930; } // 805AB924
  c->r[3]=c->r[29]|c->r[29]; // 805AB928
  c->lr=0x805AB930u; f_805C4D34(c); // 805AB92C
L_805AB930:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 805AB930
  cmps(c,0,(int32_t)c->r[0],1); // 805AB934
  if (!crb(c,2)) { goto L_805AB950; } // 805AB938
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 805AB93C
  cmps(c,0,(int32_t)c->r[0],0); // 805AB940
  if (crb(c,2)) { goto L_805AB950; } // 805AB944
  c->r[3]=c->r[29]|c->r[29]; // 805AB948
  c->lr=0x805AB950u; f_805C4D44(c); // 805AB94C
L_805AB950:;
  c->r[29]=addc(c,c->r[1],0x00000010u,0); cr0(c,c->r[29]); // 805AB950
  if (crb(c,2)) { goto L_805AB9AC; } // 805AB954
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB958
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 805AB95C
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AB960
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AB964
  cmpu(c,0,c->r[4],c->r[0]); // 805AB968
  if (!crb(c,2)) { goto L_805AB980; } // 805AB96C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB970
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AB974
  c->ctr=c->r[12]; // 805AB978
  if (true) { c->lr=0x805AB980u; dispatch(c,c->ctr); } // 805AB97C
L_805AB980:;
  cmps(c,0,(int32_t)c->r[29],0); // 805AB980
  if (crb(c,2)) { goto L_805AB9AC; } // 805AB984
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AB988
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AB98C
  if (!crb(c,2)) { goto L_805AB9AC; } // 805AB990
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AB994
  c->r[6]=0u+0x00000018u; // 805AB998
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB99C
  c->r[4]=R32(c->r[1]+0x00000010u); // 805AB9A0
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AB9A4
  c->lr=0x805AB9ACu; f_8062C630(c); // 805AB9A8
L_805AB9AC:;
  c->r[29]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[29]); // 805AB9AC
  if (crb(c,2)) { goto L_805ABA08; } // 805AB9B0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB9B4
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 805AB9B8
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AB9BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AB9C0
  cmpu(c,0,c->r[4],c->r[0]); // 805AB9C4
  if (!crb(c,2)) { goto L_805AB9DC; } // 805AB9C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AB9CC
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AB9D0
  c->ctr=c->r[12]; // 805AB9D4
  if (true) { c->lr=0x805AB9DCu; dispatch(c,c->ctr); } // 805AB9D8
L_805AB9DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 805AB9DC
  if (crb(c,2)) { goto L_805ABA08; } // 805AB9E0
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AB9E4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AB9E8
  if (!crb(c,2)) { goto L_805ABA08; } // 805AB9EC
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AB9F0
  c->r[6]=0u+0x00000018u; // 805AB9F4
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AB9F8
  c->r[4]=R32(c->r[1]+0x00000020u); // 805AB9FC
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805ABA00
  c->lr=0x805ABA08u; f_8062C630(c); // 805ABA04
L_805ABA08:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 805ABA08
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 805ABA0C
  c->r[30]=R32(c->r[1]+0x00000048u); // 805ABA10
  c->r[29]=R32(c->r[1]+0x00000044u); // 805ABA14
  c->lr=c->r[0]; // 805ABA18
  c->r[1]=c->r[1]+0x00000050u; // 805ABA1C
  return; // 805ABA20
}

// fn_805ABA24
void f_805ABA24(Ctx* __restrict c) {
  trace_call(0x805ABA24u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805ABA24
  c->r[10]=0u+0x80860000u; // 805ABA28
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 805ABA2C
  c->r[12]=c->r[1]|c->r[1]; // 805ABA30
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805ABA34
  c->r[10]=c->r[10]+0x00000140u; // 805ABA38
  {uint32_t ea=0u+c->r[4]; psq_load(c,3,ea,0,0);} // 805ABA3C
  c->r[9]=0u+0x00000008u; // 805ABA40
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805ABA44
  c->r[8]=0u+0x00000040u; // 805ABA48
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 805ABA4C
  c->r[7]=0u+0x00000048u; // 805ABA50
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805ABA54
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805ABA58
  c->r[12]=0u+0x80860000u; // 805ABA5C
  c->r[12]=c->r[12]+0x00000120u; // 805ABA60
  c->r[5]=R32(c->r[3]+0x00000008u); // 805ABA64
  {uint32_t ea=0u+c->r[10]; psq_load(c,4,ea,0,0);} // 805ABA68
  c->r[31]=R32(c->r[5]+0x00000074u); // 805ABA6C
  c->r[5]=c->r[1]+0x00000020u; // 805ABA70
  {uint32_t ea=0u+c->r[12]; psq_load(c,7,ea,0,0);} // 805ABA74
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,1,ea,0,0);} // 805ABA78
  {uint32_t ea=c->r[31]+0x00000028u; psq_load(c,0,ea,0,0);} // 805ABA7C
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABA80
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,3,ea,0,0);} // 805ABA84
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABA88
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,2,ea,0,0);} // 805ABA8C
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,4,ea,0,0);} // 805ABA90
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABA94
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABA98
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,3,ea,0,0);} // 805ABA9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,3,ea,0,0);} // 805ABAA0
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 805ABAA4
  {double t0=S(c->f[3]-c->f[0]), t1=S(c->ps1[3]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805ABAA8
  {double t0=S((c->f[5]>=0.0)?c->f[1]:c->f[4]), t1=S((c->ps1[5]>=0.0)?c->ps1[1]:c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABAAC
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,5,ea,0,0);} // 805ABAB0
  {double t0=S((c->f[2]>=0.0)?c->f[0]:c->f[3]), t1=S((c->ps1[2]>=0.0)?c->ps1[0]:c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABAB4
  {double t0=S(c->f[1]-c->f[7]), t1=S(c->ps1[1]-c->ps1[7]); c->f[6]=t0; c->ps1[6]=t1;} // 805ABAB8
  {double t0=S(c->f[0]-c->f[5]), t1=S(c->ps1[0]-c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 805ABABC
  {double t0=S((c->f[6]>=0.0)?c->f[1]:c->f[7]), t1=S((c->ps1[6]>=0.0)?c->ps1[1]:c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABAC0
  {double t0=S((c->f[2]>=0.0)?c->f[0]:c->f[5]), t1=S((c->ps1[2]>=0.0)?c->ps1[0]:c->ps1[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABAC4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805ABAC8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 805ABACC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ABAD0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ABAD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 805ABAD8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 805ABADC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 805ABAE0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 805ABAE4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 805ABAE8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 805ABAEC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 805ABAF0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 805ABAF4
  c->r[10]=R32(c->r[1]+0x00000044u); // 805ABAF8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 805ABAFC
  c->r[30]=R32(c->r[1]+0x0000004Cu); // 805ABB00
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 805ABB04
  c->r[29]=R32(c->r[1]+0x00000054u); // 805ABB08
  W32(c->r[3]+0x00000030u,c->r[10]); // 805ABB0C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 805ABB10
  W32(c->r[3]+0x00000034u,c->r[30]); // 805ABB14
  W32(c->r[3]+0x00000038u,c->r[29]); // 805ABB18
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 805ABB1C
  c->r[11]=c->r[10]-c->r[10]; // 805ABB20
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,5,ea,0,0);} // 805ABB24
  c->r[5]=c->r[1]+0x00000010u; // 805ABB28
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,1,ea,0,0);} // 805ABB2C
  c->r[10]=c->r[30]-c->r[30]; // 805ABB30
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,2,ea,0,0);} // 805ABB34
  c->r[6]=c->r[29]-c->r[29]; // 805ABB38
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,0,ea,0,0);} // 805ABB3C
  {double t0=S(c->f[5]+c->f[1]), t1=S(c->ps1[5]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABB40
  {uint32_t ea=c->r[31]+c->r[8]; psq_load(c,5,ea,0,0);} // 805ABB44
  c->r[4]=c->r[11]|c->r[10]; // 805ABB48
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABB4C
  {uint32_t ea=c->r[31]+c->r[7]; psq_load(c,2,ea,0,0);} // 805ABB50
  {double t0=S(c->f[1]*c->f[5]), t1=S(c->ps1[1]*c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABB54
  {uint32_t ea=0u+c->r[12]; psq_load(c,7,ea,0,0);} // 805ABB58
  c->r[7]=0u+0x00000000u; // 805ABB5C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABB60
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 805ABB64
  {uint32_t ea=c->r[12]+c->r[9]; psq_load(c,6,ea,0,0);} // 805ABB68
  {double t0=S(c->f[3]-c->f[0]), t1=S(c->ps1[3]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805ABB6C
  {double t0=S((c->f[5]>=0.0)?c->f[1]:c->f[4]), t1=S((c->ps1[5]>=0.0)?c->ps1[1]:c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABB70
  {double t0=S((c->f[2]>=0.0)?c->f[0]:c->f[3]), t1=S((c->ps1[2]>=0.0)?c->ps1[0]:c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABB74
  {double t0=S(c->f[1]-c->f[7]), t1=S(c->ps1[1]-c->ps1[7]); c->f[3]=t0; c->ps1[3]=t1;} // 805ABB78
  {double t0=S(c->f[0]-c->f[6]), t1=S(c->ps1[0]-c->ps1[6]); c->f[2]=t0; c->ps1[2]=t1;} // 805ABB7C
  {double t0=S((c->f[3]>=0.0)?c->f[1]:c->f[7]), t1=S((c->ps1[3]>=0.0)?c->ps1[1]:c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 805ABB80
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,0,0);} // 805ABB84
  {double t0=S((c->f[2]>=0.0)?c->f[0]:c->f[6]), t1=S((c->ps1[2]>=0.0)?c->ps1[0]:c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 805ABB88
  {uint32_t ea=c->r[5]+c->r[9]; psq_store(c,0,ea,0,0);} // 805ABB8C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ABB90
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ABB94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 805ABB98
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 805ABB9C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 805ABBA0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 805ABBA4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 805ABBA8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 805ABBAC
  c->r[12]=R32(c->r[1]+0x00000064u); // 805ABBB0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 805ABBB4
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[2]);} // 805ABBB8
  c->r[5]=c->r[12]-c->r[12]; // 805ABBBC
  c->r[29]=R32(c->r[1]+0x0000006Cu); // 805ABBC0
  c->r[0]=c->r[6]|c->r[5]; // 805ABBC4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[1]);} // 805ABBC8
  c->r[0]=c->r[4]|c->r[0]; // 805ABBCC
  c->r[9]=c->r[29]-c->r[29]; // 805ABBD0
  c->r[30]=R32(c->r[1]+0x00000074u); // 805ABBD4
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 805ABBD8
  c->r[8]=c->r[30]-c->r[30]; // 805ABBDC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 805ABBE0
  c->r[4]=c->r[9]|c->r[8]; // 805ABBE4
  W32(c->r[3]+0x00000040u,c->r[12]); // 805ABBE8
  c->r[0]=c->r[4]|c->r[0]; // 805ABBEC
  W32(c->r[3]+0x00000044u,c->r[29]); // 805ABBF0
  W32(c->r[3]+0x00000048u,c->r[30]); // 805ABBF4
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 805ABBF8
  goto L_805ABC08; // 805ABBFC
L_805ABC00:;
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 805ABC00
  c->r[7]=c->r[7]+0x00000004u; // 805ABC04
L_805ABC08:;
  cmps(c,0,(int32_t)c->r[0],2048); // 805ABC08
  if (!crb(c,0)) { IRQCHK(c); goto L_805ABC00; } // 805ABC0C
  goto L_805ABC1C; // 805ABC10
L_805ABC14:;
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 805ABC14
  c->r[7]=c->r[7]+0x00000001u; // 805ABC18
L_805ABC1C:;
  cmps(c,0,(int32_t)c->r[0],256); // 805ABC1C
  if (!crb(c,0)) { IRQCHK(c); goto L_805ABC14; } // 805ABC20
  c->r[4]=sraw(c,c->r[11],(c->r[7])&63); // 805ABC24
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 805ABC28
  c->r[0]=sraw(c,c->r[10],(c->r[7])&63); // 805ABC2C
  c->r[6]=sraw(c,c->r[6],(c->r[7])&63); // 805ABC30
  W8(c->r[3]+0x0000003Fu,c->r[7]); // 805ABC34
  c->r[5]=sraw(c,c->r[5],(c->r[7])&63); // 805ABC38
  c->r[4]=sraw(c,c->r[9],(c->r[7])&63); // 805ABC3C
  W8(c->r[3]+0x0000003Du,c->r[0]); // 805ABC40
  c->r[0]=sraw(c,c->r[8],(c->r[7])&63); // 805ABC44
  W8(c->r[3]+0x0000003Eu,c->r[6]); // 805ABC48
  W8(c->r[3]+0x0000004Cu,c->r[5]); // 805ABC4C
  W8(c->r[3]+0x0000004Du,c->r[4]); // 805ABC50
  W8(c->r[3]+0x0000004Eu,c->r[0]); // 805ABC54
  c->r[10]=R32(c->r[1]+0x00000000u); // 805ABC58
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805ABC5C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805ABC60
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805ABC64
  c->r[1]=c->r[10]|c->r[10]; // 805ABC68
  return; // 805ABC6C
}

// fn_805ABC70
void f_805ABC70(Ctx* __restrict c) {
  trace_call(0x805ABC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ABC70
  c->r[0]=c->lr; // 805ABC74
  W32(c->r[1]+0x00000014u,c->r[0]); // 805ABC78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805ABC7C
  c->r[31]=c->r[4]|c->r[4]; // 805ABC80
  W32(c->r[1]+0x00000008u,c->r[30]); // 805ABC84
  c->r[30]=c->r[3]|c->r[3]; // 805ABC88
  c->r[0]=R32(c->r[3]+0x00000090u); // 805ABC8C
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 805ABC90
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805ABC94
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805ABC98
  if (!crb(c,2)) { goto L_805ABCAC; } // 805ABC9C
  c->r[4]=0u+0x00000004u; // 805ABCA0
  c->r[3]=c->r[3]+0x00000088u; // 805ABCA4
  c->lr=0x805ABCACu; f_80623A68(c); // 805ABCA8
L_805ABCAC:;
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 805ABCAC
  c->r[4]=R32(c->r[30]+0x00000088u); // 805ABCB0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805ABCB4
  c->r[3]=c->r[3]+0x00000001u; // 805ABCB8
  W32(c->r[4]+c->r[0],c->r[31]); // 805ABCBC
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 805ABCC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805ABCC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 805ABCC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 805ABCCC
  c->lr=c->r[0]; // 805ABCD0
  c->r[1]=c->r[1]+0x00000010u; // 805ABCD4
  return; // 805ABCD8
}

// fn_805ABCDC
void f_805ABCDC(Ctx* __restrict c) {
  trace_call(0x805ABCDCu);
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 805ABCDC
  c->r[6]=0u+0x00000000u; // 805ABCE0
  c->r[7]=0u+0x00000000u; // 805ABCE4
  c->ctr=c->r[0]; // 805ABCE8
  cmps(c,0,(int32_t)c->r[0],0); // 805ABCEC
  if (!crb(c,1)) { goto L_805ABD14; } // 805ABCF0
L_805ABCF4:;
  c->r[5]=R32(c->r[3]+0x00000088u); // 805ABCF4
  c->r[0]=R32(c->r[5]+c->r[7]); // 805ABCF8
  cmpu(c,0,c->r[0],c->r[4]); // 805ABCFC
  if (!crb(c,2)) { goto L_805ABD08; } // 805ABD00
  goto L_805ABD18; // 805ABD04
L_805ABD08:;
  c->r[7]=c->r[7]+0x00000004u; // 805ABD08
  c->r[6]=c->r[6]+0x00000001u; // 805ABD0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805ABCF4; } // 805ABD10
L_805ABD14:;
  c->r[6]=0u+0xFFFFFFFFu; // 805ABD14
L_805ABD18:;
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 805ABD18
  c->r[5]=rotl(c->r[6],2)&0xFFFFFFFCu; // 805ABD1C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 805ABD20
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 805ABD24
  goto L_805ABD44; // 805ABD28
L_805ABD2C:;
  c->r[0]=R32(c->r[3]+0x00000088u); // 805ABD2C
  c->r[6]=c->r[6]+0x00000001u; // 805ABD30
  c->r[4]=c->r[0]+c->r[5]; // 805ABD34
  c->r[5]=c->r[5]+0x00000004u; // 805ABD38
  c->r[0]=R32(c->r[4]+0x00000004u); // 805ABD3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 805ABD40
L_805ABD44:;
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 805ABD44
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 805ABD48
  if (crb(c,0)) { IRQCHK(c); goto L_805ABD2C; } // 805ABD4C
  return; // 805ABD50
}

// fn_805ABD54
void f_805ABD54(Ctx* __restrict c) {
  trace_call(0x805ABD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ABD54
  c->r[0]=c->lr; // 805ABD58
  cmps(c,0,(int32_t)c->r[3],0); // 805ABD5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ABD60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805ABD64
  c->r[31]=c->r[4]|c->r[4]; // 805ABD68
  W32(c->r[1]+0x00000018u,c->r[30]); // 805ABD6C
  c->r[30]=c->r[3]|c->r[3]; // 805ABD70
  W32(c->r[1]+0x00000014u,c->r[29]); // 805ABD74
  W32(c->r[1]+0x00000010u,c->r[28]); // 805ABD78
  if (crb(c,2)) { goto L_805ABEDC; } // 805ABD7C
  c->r[5]=R32(c->r[3]+0x00000098u); // 805ABD80
  c->r[4]=0u+0x80720000u; // 805ABD84
  c->r[4]=c->r[4]+0x00002810u; // 805ABD88
  W32(c->r[3]+0x00000000u,c->r[4]); // 805ABD8C
  c->r[28]=c->r[5]+0xFFFFFFFFu; // 805ABD90
  c->r[29]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805ABD94
  goto L_805ABDC8; // 805ABD98
L_805ABD9C:;
  c->r[3]=R32(c->r[30]+0x00000094u); // 805ABD9C
  c->r[3]=R32(c->r[3]+c->r[29]); // 805ABDA0
  cmps(c,0,(int32_t)c->r[3],0); // 805ABDA4
  if (crb(c,2)) { goto L_805ABDC0; } // 805ABDA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805ABDAC
  c->r[4]=c->r[30]|c->r[30]; // 805ABDB0
  c->r[12]=R32(c->r[12]+0x00000018u); // 805ABDB4
  c->ctr=c->r[12]; // 805ABDB8
  if (true) { c->lr=0x805ABDC0u; dispatch(c,c->ctr); } // 805ABDBC
L_805ABDC0:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805ABDC0
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 805ABDC4
L_805ABDC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 805ABDC8
  if (!crb(c,0)) { IRQCHK(c); goto L_805ABD9C; } // 805ABDCC
  c->r[0]=addc(c,c->r[30],0x00000094u,0); cr0(c,c->r[0]); // 805ABDD0
  if (crb(c,2)) { goto L_805ABDFC; } // 805ABDD4
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 805ABDD8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805ABDDC
  if (!crb(c,2)) { goto L_805ABDFC; } // 805ABDE0
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 805ABDE4
  c->r[6]=0u+0x00000018u; // 805ABDE8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ABDEC
  c->r[4]=R32(c->r[30]+0x00000094u); // 805ABDF0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805ABDF4
  c->lr=0x805ABDFCu; f_8062C630(c); // 805ABDF8
L_805ABDFC:;
  c->r[0]=addc(c,c->r[30],0x00000088u,0); cr0(c,c->r[0]); // 805ABDFC
  if (crb(c,2)) { goto L_805ABE28; } // 805ABE00
  c->r[0]=R32(c->r[30]+0x00000090u); // 805ABE04
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805ABE08
  if (!crb(c,2)) { goto L_805ABE28; } // 805ABE0C
  c->r[0]=R32(c->r[30]+0x00000090u); // 805ABE10
  c->r[6]=0u+0x00000018u; // 805ABE14
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ABE18
  c->r[4]=R32(c->r[30]+0x00000088u); // 805ABE1C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805ABE20
  c->lr=0x805ABE28u; f_8062C630(c); // 805ABE24
L_805ABE28:;
  cmps(c,0,(int32_t)c->r[30],0); // 805ABE28
  if (crb(c,2)) { goto L_805ABEC0; } // 805ABE2C
  c->r[3]=R32(c->r[30]+0x00000010u); // 805ABE30
  c->r[4]=0u+0x80720000u; // 805ABE34
  c->r[4]=c->r[4]+0x00003438u; // 805ABE38
  W32(c->r[30]+0x00000000u,c->r[4]); // 805ABE3C
  cmps(c,0,(int32_t)c->r[3],0); // 805ABE40
  if (crb(c,2)) { goto L_805ABE4C; } // 805ABE44
  c->lr=0x805ABE4Cu; f_8062D488(c); // 805ABE48
L_805ABE4C:;
  c->r[3]=R32(c->r[30]+0x00000084u); // 805ABE4C
  cmps(c,0,(int32_t)c->r[3],0); // 805ABE50
  if (crb(c,2)) { goto L_805ABE5C; } // 805ABE54
  c->lr=0x805ABE5Cu; f_8062D488(c); // 805ABE58
L_805ABE5C:;
  c->r[0]=addc(c,c->r[30],0x00000078u,0); cr0(c,c->r[0]); // 805ABE5C
  if (crb(c,2)) { goto L_805ABE88; } // 805ABE60
  c->r[0]=R32(c->r[30]+0x00000080u); // 805ABE64
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805ABE68
  if (!crb(c,2)) { goto L_805ABE88; } // 805ABE6C
  c->r[0]=R32(c->r[30]+0x00000080u); // 805ABE70
  c->r[6]=0u+0x00000018u; // 805ABE74
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ABE78
  c->r[4]=R32(c->r[30]+0x00000078u); // 805ABE7C
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805ABE80
  c->lr=0x805ABE88u; f_8062C630(c); // 805ABE84
L_805ABE88:;
  c->r[4]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[4]); // 805ABE88
  if (crb(c,2)) { goto L_805ABEBC; } // 805ABE8C
  c->r[0]=addc(c,c->r[4],0x00000050u,0); cr0(c,c->r[0]); // 805ABE90
  if (crb(c,2)) { goto L_805ABEBC; } // 805ABE94
  c->r[0]=R32(c->r[4]+0x00000058u); // 805ABE98
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805ABE9C
  if (!crb(c,2)) { goto L_805ABEBC; } // 805ABEA0
  c->r[0]=R32(c->r[4]+0x00000058u); // 805ABEA4
  c->r[6]=0u+0x00000018u; // 805ABEA8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ABEAC
  c->r[4]=R32(c->r[4]+0x00000050u); // 805ABEB0
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805ABEB4
  c->lr=0x805ABEBCu; f_8062C630(c); // 805ABEB8
L_805ABEBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 805ABEBC
L_805ABEC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 805ABEC0
  if (!crb(c,1)) { goto L_805ABEDC; } // 805ABEC4
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ABEC8
  c->r[4]=c->r[30]|c->r[30]; // 805ABECC
  c->r[5]=R16(c->r[30]+0x00000004u); // 805ABED0
  c->r[6]=0u+0x00000032u; // 805ABED4
  c->lr=0x805ABEDCu; f_8062C630(c); // 805ABED8
L_805ABEDC:;
  c->r[3]=c->r[30]|c->r[30]; // 805ABEDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805ABEE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 805ABEE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 805ABEE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 805ABEEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ABEF0
  c->lr=c->r[0]; // 805ABEF4
  c->r[1]=c->r[1]+0x00000020u; // 805ABEF8
  return; // 805ABEFC
}

// fn_805ABF00
void f_805ABF00(Ctx* __restrict c) {
  trace_call(0x805ABF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ABF00
  c->r[0]=c->lr; // 805ABF04
  c->r[5]=0u+0x80860000u; // 805ABF08
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ABF0C
  c->r[5]=c->r[5]+0xFFFFDFA0u; // 805ABF10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805ABF14
  W32(c->r[1]+0x00000018u,c->r[30]); // 805ABF18
  c->r[30]=c->r[4]|c->r[4]; // 805ABF1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 805ABF20
  c->r[29]=c->r[3]|c->r[3]; // 805ABF24
  c->lr=0x805ABF2Cu; f_805C5688(c); // 805ABF28
  c->r[3]=R32(c->r[29]+0x00000090u); // 805ABF2C
  c->r[31]=0u+0x806C0000u; // 805ABF30
  c->r[31]=c->r[31]+0xFFFFDFD0u; // 805ABF34
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 805ABF38
  if (!crb(c,2)) { goto L_805ABF74; } // 805ABF3C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805ABF40
  c->lr=0x805ABF48u; f_80627B94(c); // 805ABF44
  c->r[12]=R32(c->r[30]+0x00000000u); // 805ABF48
  c->r[8]=c->r[3]|c->r[3]; // 805ABF4C
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 805ABF50
  c->r[3]=c->r[30]|c->r[30]; // 805ABF54
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805ABF58
  c->r[5]=c->r[31]|c->r[31]; // 805ABF5C
  c->r[4]=0u+0x00000003u; // 805ABF60
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805ABF64
  c->r[6]=R32(c->r[29]+0x00000088u); // 805ABF68
  c->ctr=c->r[12]; // 805ABF6C
  if (true) { c->lr=0x805ABF74u; dispatch(c,c->ctr); } // 805ABF70
L_805ABF74:;
  c->r[4]=R32(c->r[29]+0x0000009Cu); // 805ABF74
  c->r[3]=0u+0x806C0000u; // 805ABF78
  c->r[3]=c->r[3]+0xFFFFDFD0u; // 805ABF7C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 805ABF80
  c->r[31]=c->r[3]+0x0000000Du; // 805ABF84
  if (!crb(c,2)) { goto L_805ABFC0; } // 805ABF88
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805ABF8C
  c->lr=0x805ABF94u; f_80627B94(c); // 805ABF90
  c->r[12]=R32(c->r[30]+0x00000000u); // 805ABF94
  c->r[8]=c->r[3]|c->r[3]; // 805ABF98
  c->r[0]=R32(c->r[29]+0x00000098u); // 805ABF9C
  c->r[3]=c->r[30]|c->r[30]; // 805ABFA0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805ABFA4
  c->r[5]=c->r[31]|c->r[31]; // 805ABFA8
  c->r[4]=0u+0x00000003u; // 805ABFAC
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805ABFB0
  c->r[6]=R32(c->r[29]+0x00000094u); // 805ABFB4
  c->ctr=c->r[12]; // 805ABFB8
  if (true) { c->lr=0x805ABFC0u; dispatch(c,c->ctr); } // 805ABFBC
L_805ABFC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ABFC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805ABFC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 805ABFC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 805ABFCC
  c->lr=c->r[0]; // 805ABFD0
  c->r[1]=c->r[1]+0x00000020u; // 805ABFD4
  return; // 805ABFD8
}

// fn_805ABFDC
void f_805ABFDC(Ctx* __restrict c) {
  trace_call(0x805ABFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ABFDC
  c->r[0]=c->lr; // 805ABFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 805ABFE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805ABFE8
  c->r[31]=c->r[3]|c->r[3]; // 805ABFEC
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 805ABFF0
  cmps(c,0,(int32_t)c->r[0],0); // 805ABFF4
  if (!crb(c,2)) { goto L_805AC03C; } // 805ABFF8
  c->r[0]=R32(c->r[3]+0x00000090u); // 805ABFFC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC000
  if (!crb(c,2)) { goto L_805AC020; } // 805AC004
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AC008
  c->r[6]=0u+0x00000018u; // 805AC00C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC010
  c->r[4]=R32(c->r[31]+0x00000088u); // 805AC014
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AC018
  c->lr=0x805AC020u; f_8062C630(c); // 805AC01C
L_805AC020:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AC020
  c->r[3]=0u+0x00000000u; // 805AC024
  W32(c->r[31]+0x00000088u,c->r[3]); // 805AC028
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AC02C
  c->r[0]=c->r[0]|0x80000000u; // 805AC030
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 805AC034
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AC038
L_805AC03C:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 805AC03C
  cmps(c,0,(int32_t)c->r[0],0); // 805AC040
  if (!crb(c,2)) { goto L_805AC088; } // 805AC044
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AC048
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC04C
  if (!crb(c,2)) { goto L_805AC06C; } // 805AC050
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AC054
  c->r[6]=0u+0x00000018u; // 805AC058
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC05C
  c->r[4]=R32(c->r[31]+0x00000094u); // 805AC060
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AC064
  c->lr=0x805AC06Cu; f_8062C630(c); // 805AC068
L_805AC06C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AC06C
  c->r[3]=0u+0x00000000u; // 805AC070
  W32(c->r[31]+0x00000094u,c->r[3]); // 805AC074
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AC078
  c->r[0]=c->r[0]|0x80000000u; // 805AC07C
  W32(c->r[31]+0x00000098u,c->r[3]); // 805AC080
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805AC084
L_805AC088:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AC088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AC08C
  c->lr=c->r[0]; // 805AC090
  c->r[1]=c->r[1]+0x00000010u; // 805AC094
  return; // 805AC098
}

// fn_805AC09C
void f_805AC09C(Ctx* __restrict c) {
  trace_call(0x805AC09Cu);
  c->r[6]=0u+0x80720000u; // 805AC09C
  {uint32_t ea=c->r[6]+0x00002800u; c->r[5]=R32(ea); c->r[6]=ea;} // 805AC0A0
  c->r[7]=0u+0x80860000u; // 805AC0A4
  {uint32_t ea=c->r[7]+0xFFFFDCE0u; W32(ea,c->r[5]); c->r[7]=ea;} // 805AC0A8
  c->r[4]=R32(c->r[6]+0x00000004u); // 805AC0AC
  c->r[3]=R32(c->r[6]+0x00000008u); // 805AC0B0
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805AC0B4
  W32(c->r[7]+0x00000004u,c->r[4]); // 805AC0B8
  W32(c->r[7]+0x00000008u,c->r[3]); // 805AC0BC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AC0C0
  return; // 805AC0C4
}

// fn_805AC0C8
void f_805AC0C8(Ctx* __restrict c) {
  trace_call(0x805AC0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC0C8
  c->r[0]=c->lr; // 805AC0CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC0D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AC0D4
  c->r[31]=c->r[4]|c->r[4]; // 805AC0D8
  c->r[3]=R32(c->r[4]+0x00000000u); // 805AC0DC
  c->r[0]=R8(c->r[3]+0x00000004u); // 805AC0E0
  cmps(c,0,(int32_t)c->r[0],2); // 805AC0E4
  if (!crb(c,2)) { goto L_805AC120; } // 805AC0E8
  c->r[0]=R8(c->r[3]+0x00000005u); // 805AC0EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 805AC0F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC0F4
  c->r[5]=c->r[3]+c->r[0]; // 805AC0F8
  c->r[0]=R8(c->r[4]+0x00000005u); // 805AC0FC
  c->r[3]=R8(c->r[5]+0x00000010u); // 805AC100
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC104
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC108
  {uint32_t ea=c->r[3]+c->r[5]; c->r[12]=R32(ea); c->r[3]=ea;} // 805AC10C
  c->r[4]=c->r[4]+c->r[0]; // 805AC110
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AC114
  c->ctr=c->r[12]; // 805AC118
  if (true) { c->lr=0x805AC120u; dispatch(c,c->ctr); } // 805AC11C
L_805AC120:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 805AC120
  c->r[0]=R8(c->r[3]+0x00000004u); // 805AC124
  cmps(c,0,(int32_t)c->r[0],2); // 805AC128
  if (!crb(c,2)) { goto L_805AC16C; } // 805AC12C
  c->r[5]=R32(c->r[31]+0x00000004u); // 805AC130
  c->r[4]=R32(c->r[31]+0x00000000u); // 805AC134
  c->r[3]=R8(c->r[5]+0x00000005u); // 805AC138
  c->r[0]=R8(c->r[4]+0x00000005u); // 805AC13C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC140
  c->r[5]=c->r[5]+c->r[3]; // 805AC144
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC148
  c->r[3]=R8(c->r[5]+0x00000010u); // 805AC14C
  c->r[4]=c->r[4]+c->r[0]; // 805AC150
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC154
  c->r[12]=R32(c->r[5]+c->r[0]); // 805AC158
  c->r[3]=c->r[5]+c->r[0]; // 805AC15C
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AC160
  c->ctr=c->r[12]; // 805AC164
  if (true) { c->lr=0x805AC16Cu; dispatch(c,c->ctr); } // 805AC168
L_805AC16C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AC16C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AC170
  c->lr=c->r[0]; // 805AC174
  c->r[1]=c->r[1]+0x00000010u; // 805AC178
  return; // 805AC17C
}

// fn_805AC180
void f_805AC180(Ctx* __restrict c) {
  trace_call(0x805AC180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC180
  c->r[0]=c->lr; // 805AC184
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AC18C
  c->r[31]=c->r[4]|c->r[4]; // 805AC190
  c->r[3]=R32(c->r[4]+0x00000000u); // 805AC194
  c->r[0]=R8(c->r[3]+0x00000004u); // 805AC198
  cmps(c,0,(int32_t)c->r[0],2); // 805AC19C
  if (!crb(c,2)) { goto L_805AC1D8; } // 805AC1A0
  c->r[0]=R8(c->r[3]+0x00000005u); // 805AC1A4
  c->r[4]=R32(c->r[4]+0x00000004u); // 805AC1A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC1AC
  c->r[5]=c->r[3]+c->r[0]; // 805AC1B0
  c->r[0]=R8(c->r[4]+0x00000005u); // 805AC1B4
  c->r[3]=R8(c->r[5]+0x00000010u); // 805AC1B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC1BC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC1C0
  {uint32_t ea=c->r[3]+c->r[5]; c->r[12]=R32(ea); c->r[3]=ea;} // 805AC1C4
  c->r[4]=c->r[4]+c->r[0]; // 805AC1C8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 805AC1CC
  c->ctr=c->r[12]; // 805AC1D0
  if (true) { c->lr=0x805AC1D8u; dispatch(c,c->ctr); } // 805AC1D4
L_805AC1D8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 805AC1D8
  c->r[0]=R8(c->r[3]+0x00000004u); // 805AC1DC
  cmps(c,0,(int32_t)c->r[0],2); // 805AC1E0
  if (!crb(c,2)) { goto L_805AC224; } // 805AC1E4
  c->r[5]=R32(c->r[31]+0x00000004u); // 805AC1E8
  c->r[4]=R32(c->r[31]+0x00000000u); // 805AC1EC
  c->r[3]=R8(c->r[5]+0x00000005u); // 805AC1F0
  c->r[0]=R8(c->r[4]+0x00000005u); // 805AC1F4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC1F8
  c->r[5]=c->r[5]+c->r[3]; // 805AC1FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AC200
  c->r[3]=R8(c->r[5]+0x00000010u); // 805AC204
  c->r[4]=c->r[4]+c->r[0]; // 805AC208
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805AC20C
  c->r[12]=R32(c->r[5]+c->r[0]); // 805AC210
  c->r[3]=c->r[5]+c->r[0]; // 805AC214
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 805AC218
  c->ctr=c->r[12]; // 805AC21C
  if (true) { c->lr=0x805AC224u; dispatch(c,c->ctr); } // 805AC220
L_805AC224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AC224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AC228
  c->lr=c->r[0]; // 805AC22C
  c->r[1]=c->r[1]+0x00000010u; // 805AC230
  return; // 805AC234
}

// fn_805AC238
void f_805AC238(Ctx* __restrict c) {
  trace_call(0x805AC238u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC238
  c->r[0]=c->lr; // 805AC23C
  cmps(c,0,(int32_t)c->r[3],0); // 805AC240
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AC248
  c->r[31]=c->r[3]|c->r[3]; // 805AC24C
  if (crb(c,2)) { goto L_805AC270; } // 805AC250
  cmps(c,0,(int32_t)c->r[4],0); // 805AC254
  if (!crb(c,1)) { goto L_805AC270; } // 805AC258
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC25C
  c->r[4]=c->r[31]|c->r[31]; // 805AC260
  c->r[5]=R16(c->r[31]+0x00000004u); // 805AC264
  c->r[6]=0u+0x00000004u; // 805AC268
  c->lr=0x805AC270u; f_8062C630(c); // 805AC26C
L_805AC270:;
  c->r[3]=c->r[31]|c->r[31]; // 805AC270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AC274
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AC278
  c->lr=c->r[0]; // 805AC27C
  c->r[1]=c->r[1]+0x00000010u; // 805AC280
  return; // 805AC284
}

// fn_805AC288
void f_805AC288(Ctx* __restrict c) {
  trace_call(0x805AC288u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805AC288
  f_805AC180(c); return; // 805AC28C
}

// fn_805AC290
void f_805AC290(Ctx* __restrict c) {
  trace_call(0x805AC290u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805AC290
  f_805AC0C8(c); return; // 805AC294
}

// fn_805AC298
void f_805AC298(Ctx* __restrict c) {
  trace_call(0x805AC298u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805AC298
  f_805AC238(c); return; // 805AC29C
}

// fn_805AC2A0
void f_805AC2A0(Ctx* __restrict c) {
  trace_call(0x805AC2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC2A0
  c->r[0]=c->lr; // 805AC2A4
  c->r[3]=0u+0x806C0000u; // 805AC2A8
  c->r[4]=0u+0x806C0000u; // 805AC2AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AC2B0
  c->r[3]=c->r[3]+0xFFFFE010u; // 805AC2B4
  c->r[4]=c->r[4]+0xFFFFE040u; // 805AC2B8
  c->r[5]=0u+0x80860000u; // 805AC2BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AC2C0
  c->r[0]=0u+0x00000002u; // 805AC2C4
  c->r[3]=0u+0x80860000u; // 805AC2C8
  c->r[4]=c->r[4]+0x00000022u; // 805AC2CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AC2D0
  c->r[0]=0u+0x00000000u; // 805AC2D4
  c->r[3]=c->r[3]+0xFFFFDCF0u; // 805AC2D8
  c->r[5]=c->r[5]+0xFFFFDFA0u; // 805AC2DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 805AC2E0
  c->r[6]=0u+0x000000A0u; // 805AC2E4
  c->r[7]=0u+0x00000000u; // 805AC2E8
  c->r[8]=0u+0x00000000u; // 805AC2EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC2F0
  c->r[9]=0u+0x00000000u; // 805AC2F4
  c->r[10]=0u+0x00000000u; // 805AC2F8
  W32(c->r[1]+0x00000018u,c->r[0]); // 805AC2FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 805AC300
  c->lr=0x805AC308u; f_8062E0DC(c); // 805AC304
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AC308
  c->lr=c->r[0]; // 805AC30C
  c->r[1]=c->r[1]+0x00000020u; // 805AC310
  return; // 805AC314
}

// fn_805AC318
void f_805AC318(Ctx* __restrict c) {
  trace_call(0x805AC318u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AC318
  c->r[12]=c->r[1]|c->r[1]; // 805AC31C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805AC320
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC324
  c->r[0]=c->lr; // 805AC328
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AC32C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AC330
  c->r[31]=c->r[5]|c->r[5]; // 805AC334
  c->r[5]=0u+0x00000002u; // 805AC338
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AC33C
  c->r[30]=c->r[3]|c->r[3]; // 805AC340
  c->lr=0x805AC348u; f_805C5570(c); // 805AC344
  c->r[0]=c->r[30]+0x00000010u; // 805AC348
  c->r[5]=0u+0x80720000u; // 805AC34C
  c->r[7]=0u+0x00000000u; // 805AC350
  c->r[6]=0u+0x80000000u; // 805AC354
  c->r[0]=c->r[30]-c->r[0]; // 805AC358
  c->r[5]=c->r[5]+0x000028A0u; // 805AC35C
  W32(c->r[30]+0x00000088u,c->r[7]); // 805AC360
  c->r[4]=c->r[31]|c->r[31]; // 805AC364
  c->r[3]=c->r[1]+0x00000010u; // 805AC368
  W32(c->r[30]+0x0000008Cu,c->r[7]); // 805AC36C
  W32(c->r[30]+0x00000090u,c->r[6]); // 805AC370
  W32(c->r[30]+0x00000094u,c->r[7]); // 805AC374
  W32(c->r[30]+0x00000098u,c->r[7]); // 805AC378
  W32(c->r[30]+0x0000009Cu,c->r[6]); // 805AC37C
  W8(c->r[30]+0x00000020u,c->r[0]); // 805AC380
  W32(c->r[30]+0x00000000u,c->r[5]); // 805AC384
  c->lr=0x805AC38Cu; f_80629A50(c); // 805AC388
  c->r[3]=c->r[30]+0x000000A0u; // 805AC38C
  c->r[4]=c->r[31]+0x00000030u; // 805AC390
  c->r[5]=c->r[1]+0x00000010u; // 805AC394
  c->lr=0x805AC39Cu; f_80636944(c); // 805AC398
  c->r[0]=c->r[30]+0x000000A0u; // 805AC39C
  W32(c->r[30]+0x00000018u,c->r[0]); // 805AC3A0
  c->r[3]=c->r[30]|c->r[30]; // 805AC3A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AC3A8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AC3AC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AC3B0
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AC3B4
  c->lr=c->r[0]; // 805AC3B8
  c->r[1]=c->r[10]|c->r[10]; // 805AC3BC
  return; // 805AC3C0
}

// fn_805AC3C4
void f_805AC3C4(Ctx* __restrict c) {
  trace_call(0x805AC3C4u);
  c->r[3]=c->r[3]+0x000000A0u; // 805AC3C4
  return; // 805AC3C8
}

// fn_805AC3CC
void f_805AC3CC(Ctx* __restrict c) {
  trace_call(0x805AC3CCu);
  c->r[6]=R32(c->r[3]+0x00000008u); // 805AC3CC
  c->r[7]=c->r[3]|c->r[3]; // 805AC3D0
  c->r[3]=R32(c->r[3]+0x00000010u); // 805AC3D4
  c->r[5]=c->r[4]|c->r[4]; // 805AC3D8
  c->r[6]=R32(c->r[6]+0x00000074u); // 805AC3DC
  c->r[4]=c->r[7]+0x000000A0u; // 805AC3E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AC3E4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AC3E8
  {uint32_t ea=c->r[2]+0x000028D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AC3EC
  c->r[12]=R32(c->r[12]+0x00000024u); // 805AC3F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 805AC3F4
  c->ctr=c->r[12]; // 805AC3F8
  if (true) { dispatch(c,c->ctr); return; } // 805AC3FC
}

// fn_805AC400
void f_805AC400(Ctx* __restrict c) {
  trace_call(0x805AC400u);
  f_805ABFDC(c); return; // 805AC400
}

// fn_805AC404
void f_805AC404(Ctx* __restrict c) {
  trace_call(0x805AC404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC404
  c->r[0]=c->lr; // 805AC408
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AC40C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AC410
  c->r[31]=c->r[4]|c->r[4]; // 805AC414
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AC418
  c->r[30]=c->r[3]|c->r[3]; // 805AC41C
  c->r[6]=R32(c->r[3]+0x00000008u); // 805AC420
  cmps(c,0,(int32_t)c->r[6],0); // 805AC424
  if (crb(c,2)) { goto L_805AC45C; } // 805AC428
  c->r[0]=R32(c->r[6]+0x00000090u); // 805AC42C
  cmps(c,0,(int32_t)c->r[0],0); // 805AC430
  if (crb(c,2)) { goto L_805AC45C; } // 805AC434
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 805AC438
  c->r[0]=0u+0x00000005u; // 805AC43C
  c->r[3]=c->r[6]|c->r[6]; // 805AC440
  W32(c->r[1]+0x00000010u,c->r[4]); // 805AC444
  c->r[4]=c->r[1]+0x00000008u; // 805AC448
  W8(c->r[1]+0x00000008u,c->r[0]); // 805AC44C
  c->lr=0x805AC454u; f_805C4D54(c); // 805AC450
  c->r[3]=0u+0x00000000u; // 805AC454
  goto L_805AC520; // 805AC458
L_805AC45C:;
  cmps(c,0,(int32_t)c->r[6],0); // 805AC45C
  if (crb(c,2)) { goto L_805AC47C; } // 805AC460
  c->r[5]=R32(c->r[6]+0x00000090u); // 805AC464
  c->r[4]=c->r[30]|c->r[30]; // 805AC468
  c->r[0]=c->r[5]+0x00000001u; // 805AC46C
  W32(c->r[6]+0x00000090u,c->r[0]); // 805AC470
  c->r[3]=R32(c->r[3]+0x00000008u); // 805AC474
  c->lr=0x805AC47Cu; f_805B88E4(c); // 805AC478
L_805AC47C:;
  c->r[3]=c->r[31]|c->r[31]; // 805AC47C
  c->lr=0x805AC484u; f_8062D410(c); // 805AC480
  c->r[3]=R32(c->r[30]+0x00000010u); // 805AC484
  cmps(c,0,(int32_t)c->r[3],0); // 805AC488
  if (crb(c,2)) { goto L_805AC494; } // 805AC48C
  c->lr=0x805AC494u; f_8062D488(c); // 805AC490
L_805AC494:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AC494
  W32(c->r[30]+0x00000010u,c->r[31]); // 805AC498
  cmps(c,0,(int32_t)c->r[3],0); // 805AC49C
  if (crb(c,2)) { goto L_805AC4AC; } // 805AC4A0
  c->r[4]=c->r[30]|c->r[30]; // 805AC4A4
  c->lr=0x805AC4ACu; f_805B3A0C(c); // 805AC4A8
L_805AC4AC:;
  c->r[3]=c->r[30]|c->r[30]; // 805AC4AC
  c->lr=0x805AC4B4u; f_805AB500(c); // 805AC4B0
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AC4B4
  cmps(c,0,(int32_t)c->r[3],0); // 805AC4B8
  if (crb(c,2)) { goto L_805AC51C; } // 805AC4BC
  c->r[4]=c->r[30]|c->r[30]; // 805AC4C0
  c->lr=0x805AC4C8u; f_805B8424(c); // 805AC4C4
  c->r[31]=R32(c->r[30]+0x00000008u); // 805AC4C8
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AC4CC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AC4D0
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AC4D4
  if (!crb(c,2)) { goto L_805AC51C; } // 805AC4D8
  c->r[0]=R8(c->r[31]+0x00000098u); // 805AC4DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AC4E0
  if (!crb(c,2)) { goto L_805AC51C; } // 805AC4E4
  c->r[0]=R32(c->r[31]+0x00000088u); // 805AC4E8
  cmps(c,0,(int32_t)c->r[0],0); // 805AC4EC
  if (crb(c,2)) { goto L_805AC4FC; } // 805AC4F0
  c->r[3]=c->r[31]|c->r[31]; // 805AC4F4
  c->lr=0x805AC4FCu; f_805C4D34(c); // 805AC4F8
L_805AC4FC:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 805AC4FC
  cmps(c,0,(int32_t)c->r[0],1); // 805AC500
  if (!crb(c,2)) { goto L_805AC51C; } // 805AC504
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 805AC508
  cmps(c,0,(int32_t)c->r[0],0); // 805AC50C
  if (crb(c,2)) { goto L_805AC51C; } // 805AC510
  c->r[3]=c->r[31]|c->r[31]; // 805AC514
  c->lr=0x805AC51Cu; f_805C4D44(c); // 805AC518
L_805AC51C:;
  c->r[3]=0u+0x00000001u; // 805AC51C
L_805AC520:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AC520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AC524
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AC528
  c->lr=c->r[0]; // 805AC52C
  c->r[1]=c->r[1]+0x00000020u; // 805AC530
  return; // 805AC534
}

// fn_805AC538
void f_805AC538(Ctx* __restrict c) {
  trace_call(0x805AC538u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC538
  c->r[0]=c->lr; // 805AC53C
  c->r[3]=0u+0x806C0000u; // 805AC540
  c->r[4]=0u+0x806C0000u; // 805AC544
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AC548
  c->r[3]=c->r[3]+0xFFFFE070u; // 805AC54C
  c->r[4]=c->r[4]+0xFFFFE088u; // 805AC550
  c->r[5]=0u+0x80860000u; // 805AC554
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AC558
  c->r[0]=0u+0x00000001u; // 805AC55C
  c->r[3]=0u+0x80860000u; // 805AC560
  c->r[4]=c->r[4]+0x0000000Cu; // 805AC564
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AC568
  c->r[0]=0u+0x00000000u; // 805AC56C
  c->r[3]=c->r[3]+0xFFFFDD20u; // 805AC570
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 805AC574
  W32(c->r[1]+0x00000010u,c->r[0]); // 805AC578
  c->r[6]=0u+0x00000150u; // 805AC57C
  c->r[7]=0u+0x00000000u; // 805AC580
  c->r[8]=0u+0x00000000u; // 805AC584
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC588
  c->r[9]=0u+0x00000000u; // 805AC58C
  c->r[10]=0u+0x00000000u; // 805AC590
  W32(c->r[1]+0x00000018u,c->r[0]); // 805AC594
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 805AC598
  c->lr=0x805AC5A0u; f_8062E0DC(c); // 805AC59C
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AC5A0
  c->lr=c->r[0]; // 805AC5A4
  c->r[1]=c->r[1]+0x00000020u; // 805AC5A8
  return; // 805AC5AC
}

// fn_805AC5B0
void f_805AC5B0(Ctx* __restrict c) {
  trace_call(0x805AC5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC5B0
  c->r[0]=c->lr; // 805AC5B4
  cmps(c,0,(int32_t)c->r[3],0); // 805AC5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AC5BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AC5C0
  c->r[31]=c->r[4]|c->r[4]; // 805AC5C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 805AC5C8
  c->r[30]=c->r[3]|c->r[3]; // 805AC5CC
  if (crb(c,2)) { goto L_805AC630; } // 805AC5D0
  c->r[0]=addc(c,c->r[3],0x00000150u,0); cr0(c,c->r[0]); // 805AC5D4
  if (crb(c,2)) { goto L_805AC600; } // 805AC5D8
  c->r[0]=R32(c->r[3]+0x00000158u); // 805AC5DC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC5E0
  if (!crb(c,2)) { goto L_805AC600; } // 805AC5E4
  c->r[0]=R32(c->r[3]+0x00000158u); // 805AC5E8
  c->r[6]=0u+0x00000018u; // 805AC5EC
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC5F0
  c->r[4]=R32(c->r[30]+0x00000150u); // 805AC5F4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AC5F8
  c->lr=0x805AC600u; f_8062C630(c); // 805AC5FC
L_805AC600:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AC600
  if (crb(c,2)) { goto L_805AC614; } // 805AC604
  c->r[3]=c->r[30]|c->r[30]; // 805AC608
  c->r[4]=0u+0x00000000u; // 805AC60C
  c->lr=0x805AC614u; f_805ABD54(c); // 805AC610
L_805AC614:;
  cmps(c,0,(int32_t)c->r[31],0); // 805AC614
  if (!crb(c,1)) { goto L_805AC630; } // 805AC618
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC61C
  c->r[4]=c->r[30]|c->r[30]; // 805AC620
  c->r[5]=R16(c->r[30]+0x00000004u); // 805AC624
  c->r[6]=0u+0x00000032u; // 805AC628
  c->lr=0x805AC630u; f_8062C630(c); // 805AC62C
L_805AC630:;
  c->r[3]=c->r[30]|c->r[30]; // 805AC630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AC634
  c->r[30]=R32(c->r[1]+0x00000008u); // 805AC638
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AC63C
  c->lr=c->r[0]; // 805AC640
  c->r[1]=c->r[1]+0x00000010u; // 805AC644
  return; // 805AC648
}

// fn_805AC64C
void f_805AC64C(Ctx* __restrict c) {
  trace_call(0x805AC64Cu);
  c->r[3]=0u+0x00000001u; // 805AC64C
  return; // 805AC650
}

// fn_805AC654
void f_805AC654(Ctx* __restrict c) {
  trace_call(0x805AC654u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AC654
  c->r[0]=c->lr; // 805AC658
  c->r[4]=0u+0x00000160u; // 805AC65C
  c->r[5]=0u+0x00000032u; // 805AC660
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AC664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AC668
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AC66C
  c->r[30]=c->r[3]|c->r[3]; // 805AC670
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AC674
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC678
  c->lr=0x805AC680u; f_8062C34C(c); // 805AC67C
  cmps(c,0,(int32_t)c->r[3],0); // 805AC680
  c->r[0]=0u+0x00000160u; // 805AC684
  W16(c->r[3]+0x00000004u,c->r[0]); // 805AC688
  c->r[31]=c->r[3]|c->r[3]; // 805AC68C
  if (crb(c,2)) { goto L_805AC6CC; } // 805AC690
  c->r[29]=R32(c->r[30]+0x0000002Cu); // 805AC694
  c->r[5]=c->r[30]+0x000000A0u; // 805AC698
  c->r[4]=R32(c->r[30]+0x00000010u); // 805AC69C
  c->lr=0x805AC6A4u; f_805AC318(c); // 805AC6A0
  c->r[4]=0u+0x80720000u; // 805AC6A4
  c->r[3]=0u+0x00000000u; // 805AC6A8
  c->r[4]=c->r[4]+0x000028F0u; // 805AC6AC
  W32(c->r[31]+0x00000000u,c->r[4]); // 805AC6B0
  c->r[0]=0u+0x80000000u; // 805AC6B4
  W32(c->r[31]+0x00000150u,c->r[3]); // 805AC6B8
  W32(c->r[31]+0x00000154u,c->r[3]); // 805AC6BC
  W32(c->r[31]+0x00000158u,c->r[0]); // 805AC6C0
  W8(c->r[31]+0x0000015Cu,c->r[3]); // 805AC6C4
  W32(c->r[31]+0x0000002Cu,c->r[29]); // 805AC6C8
L_805AC6CC:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 805AC6CC
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805AC6D0
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AC6D4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AC6D8
  if (!crb(c,0)) { goto L_805AC72C; } // 805AC6DC
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AC6E0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC6E4
  if (!crb(c,2)) { goto L_805AC700; } // 805AC6E8
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AC6EC
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC6F0
  c->r[4]=R32(c->r[31]+0x00000088u); // 805AC6F4
  c->r[6]=0u+0x00000018u; // 805AC6F8
  c->lr=0x805AC700u; f_8062C630(c); // 805AC6FC
L_805AC700:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805AC700
  c->r[5]=0u+0x00000018u; // 805AC704
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC708
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AC70C
  c->lr=0x805AC714u; f_8062C34C(c); // 805AC710
  W32(c->r[31]+0x00000088u,c->r[3]); // 805AC714
  c->r[0]=R32(c->r[31]+0x00000090u); // 805AC718
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 805AC71C
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AC720
  c->r[0]=c->r[3]|c->r[0]; // 805AC724
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AC728
L_805AC72C:;
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 805AC72C
  c->r[7]=0u+0x00000000u; // 805AC730
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 805AC734
  cmps(c,1,(int32_t)c->r[4],0); // 805AC738
  c->r[6]=R32(c->r[30]+0x00000088u); // 805AC73C
  c->r[5]=R32(c->r[31]+0x00000088u); // 805AC740
  if (!crb(c,5)) { goto L_805AC814; } // 805AC744
  cmps(c,0,(int32_t)c->r[4],8); // 805AC748
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 805AC74C
  if (!crb(c,1)) { goto L_805AC7E4; } // 805AC750
  c->r[9]=0u+0x00000000u; // 805AC754
  if (crb(c,4)) { goto L_805AC770; } // 805AC758
  c->r[3]=0u+0x80000000u; // 805AC75C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 805AC760
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AC764
  if (crb(c,1)) { goto L_805AC770; } // 805AC768
  c->r[9]=0u+0x00000001u; // 805AC76C
L_805AC770:;
  cmps(c,0,(int32_t)c->r[9],0); // 805AC770
  if (crb(c,2)) { goto L_805AC7E4; } // 805AC774
  c->r[0]=c->r[8]+0x00000007u; // 805AC778
  c->r[3]=c->r[6]|c->r[6]; // 805AC77C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 805AC780
  c->r[9]=c->r[5]|c->r[5]; // 805AC784
  c->ctr=c->r[0]; // 805AC788
  cmps(c,0,(int32_t)c->r[8],0); // 805AC78C
  if (!crb(c,1)) { goto L_805AC7E4; } // 805AC790
L_805AC794:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AC794
  c->r[7]=c->r[7]+0x00000008u; // 805AC798
  W32(c->r[9]+0x00000000u,c->r[0]); // 805AC79C
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AC7A0
  W32(c->r[9]+0x00000004u,c->r[0]); // 805AC7A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 805AC7A8
  W32(c->r[9]+0x00000008u,c->r[0]); // 805AC7AC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 805AC7B0
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 805AC7B4
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AC7B8
  W32(c->r[9]+0x00000010u,c->r[0]); // 805AC7BC
  c->r[0]=R32(c->r[3]+0x00000014u); // 805AC7C0
  W32(c->r[9]+0x00000014u,c->r[0]); // 805AC7C4
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AC7C8
  W32(c->r[9]+0x00000018u,c->r[0]); // 805AC7CC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AC7D0
  c->r[3]=c->r[3]+0x00000020u; // 805AC7D4
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 805AC7D8
  c->r[9]=c->r[9]+0x00000020u; // 805AC7DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AC794; } // 805AC7E0
L_805AC7E4:;
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 805AC7E4
  c->r[0]=c->r[4]-c->r[7]; // 805AC7E8
  c->r[3]=c->r[6]+c->r[8]; // 805AC7EC
  c->r[5]=c->r[5]+c->r[8]; // 805AC7F0
  c->ctr=c->r[0]; // 805AC7F4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 805AC7F8
  if (!crb(c,0)) { goto L_805AC814; } // 805AC7FC
L_805AC800:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AC800
  c->r[3]=c->r[3]+0x00000004u; // 805AC804
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AC808
  c->r[5]=c->r[5]+0x00000004u; // 805AC80C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AC800; } // 805AC810
L_805AC814:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 805AC814
  c->r[0]=R32(c->r[30]+0x00000098u); // 805AC818
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AC81C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AC820
  if (!crb(c,0)) { goto L_805AC874; } // 805AC824
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AC828
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC82C
  if (!crb(c,2)) { goto L_805AC848; } // 805AC830
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AC834
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC838
  c->r[4]=R32(c->r[31]+0x00000094u); // 805AC83C
  c->r[6]=0u+0x00000018u; // 805AC840
  c->lr=0x805AC848u; f_8062C630(c); // 805AC844
L_805AC848:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 805AC848
  c->r[5]=0u+0x00000018u; // 805AC84C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC850
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AC854
  c->lr=0x805AC85Cu; f_8062C34C(c); // 805AC858
  W32(c->r[31]+0x00000094u,c->r[3]); // 805AC85C
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 805AC860
  c->r[3]=R32(c->r[30]+0x00000098u); // 805AC864
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AC868
  c->r[0]=c->r[3]|c->r[0]; // 805AC86C
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805AC870
L_805AC874:;
  c->r[4]=R32(c->r[30]+0x00000098u); // 805AC874
  c->r[7]=0u+0x00000000u; // 805AC878
  W32(c->r[31]+0x00000098u,c->r[4]); // 805AC87C
  cmps(c,1,(int32_t)c->r[4],0); // 805AC880
  c->r[6]=R32(c->r[30]+0x00000094u); // 805AC884
  c->r[5]=R32(c->r[31]+0x00000094u); // 805AC888
  if (!crb(c,5)) { goto L_805AC95C; } // 805AC88C
  cmps(c,0,(int32_t)c->r[4],8); // 805AC890
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 805AC894
  if (!crb(c,1)) { goto L_805AC92C; } // 805AC898
  c->r[9]=0u+0x00000000u; // 805AC89C
  if (crb(c,4)) { goto L_805AC8B8; } // 805AC8A0
  c->r[3]=0u+0x80000000u; // 805AC8A4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 805AC8A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AC8AC
  if (crb(c,1)) { goto L_805AC8B8; } // 805AC8B0
  c->r[9]=0u+0x00000001u; // 805AC8B4
L_805AC8B8:;
  cmps(c,0,(int32_t)c->r[9],0); // 805AC8B8
  if (crb(c,2)) { goto L_805AC92C; } // 805AC8BC
  c->r[0]=c->r[8]+0x00000007u; // 805AC8C0
  c->r[3]=c->r[6]|c->r[6]; // 805AC8C4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 805AC8C8
  c->r[9]=c->r[5]|c->r[5]; // 805AC8CC
  c->ctr=c->r[0]; // 805AC8D0
  cmps(c,0,(int32_t)c->r[8],0); // 805AC8D4
  if (!crb(c,1)) { goto L_805AC92C; } // 805AC8D8
L_805AC8DC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AC8DC
  c->r[7]=c->r[7]+0x00000008u; // 805AC8E0
  W32(c->r[9]+0x00000000u,c->r[0]); // 805AC8E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AC8E8
  W32(c->r[9]+0x00000004u,c->r[0]); // 805AC8EC
  c->r[0]=R32(c->r[3]+0x00000008u); // 805AC8F0
  W32(c->r[9]+0x00000008u,c->r[0]); // 805AC8F4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 805AC8F8
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 805AC8FC
  c->r[0]=R32(c->r[3]+0x00000010u); // 805AC900
  W32(c->r[9]+0x00000010u,c->r[0]); // 805AC904
  c->r[0]=R32(c->r[3]+0x00000014u); // 805AC908
  W32(c->r[9]+0x00000014u,c->r[0]); // 805AC90C
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AC910
  W32(c->r[9]+0x00000018u,c->r[0]); // 805AC914
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AC918
  c->r[3]=c->r[3]+0x00000020u; // 805AC91C
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 805AC920
  c->r[9]=c->r[9]+0x00000020u; // 805AC924
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AC8DC; } // 805AC928
L_805AC92C:;
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 805AC92C
  c->r[0]=c->r[4]-c->r[7]; // 805AC930
  c->r[3]=c->r[6]+c->r[8]; // 805AC934
  c->r[5]=c->r[5]+c->r[8]; // 805AC938
  c->ctr=c->r[0]; // 805AC93C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 805AC940
  if (!crb(c,0)) { goto L_805AC95C; } // 805AC944
L_805AC948:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 805AC948
  c->r[3]=c->r[3]+0x00000004u; // 805AC94C
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AC950
  c->r[5]=c->r[5]+0x00000004u; // 805AC954
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AC948; } // 805AC958
L_805AC95C:;
  c->r[3]=R32(c->r[31]+0x00000080u); // 805AC95C
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805AC960
  c->r[4]=rotl(c->r[3],0)&0x3FFFFFFFu; // 805AC964
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805AC968
  if (!crb(c,0)) { goto L_805AC9BC; } // 805AC96C
  c->r[0]=R32(c->r[31]+0x00000080u); // 805AC970
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AC974
  if (!crb(c,2)) { goto L_805AC990; } // 805AC978
  c->r[5]=rotl(c->r[4],4)&0xFFFFFFF0u; // 805AC97C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC980
  c->r[4]=R32(c->r[31]+0x00000078u); // 805AC984
  c->r[6]=0u+0x00000018u; // 805AC988
  c->lr=0x805AC990u; f_8062C630(c); // 805AC98C
L_805AC990:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 805AC990
  c->r[5]=0u+0x00000018u; // 805AC994
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AC998
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 805AC99C
  c->lr=0x805AC9A4u; f_8062C34C(c); // 805AC9A0
  W32(c->r[31]+0x00000078u,c->r[3]); // 805AC9A4
  c->r[0]=R32(c->r[31]+0x00000080u); // 805AC9A8
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 805AC9AC
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AC9B0
  c->r[0]=c->r[3]|c->r[0]; // 805AC9B4
  W32(c->r[31]+0x00000080u,c->r[0]); // 805AC9B8
L_805AC9BC:;
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 805AC9BC
  c->r[5]=0u+0x00000000u; // 805AC9C0
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 805AC9C4
  cmps(c,1,(int32_t)c->r[3],0); // 805AC9C8
  c->r[4]=R32(c->r[30]+0x00000078u); // 805AC9CC
  c->r[0]=R32(c->r[31]+0x00000078u); // 805AC9D0
  if (!crb(c,5)) { goto L_805ACB7C; } // 805AC9D4
  cmps(c,0,(int32_t)c->r[3],8); // 805AC9D8
  c->r[9]=c->r[3]+0xFFFFFFF8u; // 805AC9DC
  if (!crb(c,1)) { goto L_805ACB34; } // 805AC9E0
  c->r[7]=0u+0x00000000u; // 805AC9E4
  if (crb(c,4)) { goto L_805ACA00; } // 805AC9E8
  c->r[6]=0u+0x80000000u; // 805AC9EC
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 805AC9F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 805AC9F4
  if (crb(c,1)) { goto L_805ACA00; } // 805AC9F8
  c->r[7]=0u+0x00000001u; // 805AC9FC
L_805ACA00:;
  cmps(c,0,(int32_t)c->r[7],0); // 805ACA00
  if (crb(c,2)) { goto L_805ACB34; } // 805ACA04
  c->r[8]=c->r[9]+0x00000007u; // 805ACA08
  c->r[6]=c->r[4]|c->r[4]; // 805ACA0C
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 805ACA10
  c->r[7]=c->r[0]|c->r[0]; // 805ACA14
  c->ctr=c->r[8]; // 805ACA18
  cmps(c,0,(int32_t)c->r[9],0); // 805ACA1C
  if (!crb(c,1)) { goto L_805ACB34; } // 805ACA20
L_805ACA24:;
  c->r[8]=R32(c->r[6]+0x00000000u); // 805ACA24
  c->r[5]=c->r[5]+0x00000008u; // 805ACA28
  W32(c->r[7]+0x00000000u,c->r[8]); // 805ACA2C
  c->r[8]=R32(c->r[6]+0x00000004u); // 805ACA30
  W32(c->r[7]+0x00000004u,c->r[8]); // 805ACA34
  c->r[8]=R32(c->r[6]+0x0000000Cu); // 805ACA38
  c->r[9]=R32(c->r[6]+0x00000008u); // 805ACA3C
  W32(c->r[7]+0x00000008u,c->r[9]); // 805ACA40
  W32(c->r[7]+0x0000000Cu,c->r[8]); // 805ACA44
  c->r[8]=R32(c->r[6]+0x00000010u); // 805ACA48
  W32(c->r[7]+0x00000010u,c->r[8]); // 805ACA4C
  c->r[8]=R32(c->r[6]+0x00000014u); // 805ACA50
  W32(c->r[7]+0x00000014u,c->r[8]); // 805ACA54
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 805ACA58
  c->r[9]=R32(c->r[6]+0x00000018u); // 805ACA5C
  W32(c->r[7]+0x00000018u,c->r[9]); // 805ACA60
  W32(c->r[7]+0x0000001Cu,c->r[8]); // 805ACA64
  c->r[8]=R32(c->r[6]+0x00000020u); // 805ACA68
  W32(c->r[7]+0x00000020u,c->r[8]); // 805ACA6C
  c->r[8]=R32(c->r[6]+0x00000024u); // 805ACA70
  W32(c->r[7]+0x00000024u,c->r[8]); // 805ACA74
  c->r[8]=R32(c->r[6]+0x0000002Cu); // 805ACA78
  c->r[9]=R32(c->r[6]+0x00000028u); // 805ACA7C
  W32(c->r[7]+0x00000028u,c->r[9]); // 805ACA80
  W32(c->r[7]+0x0000002Cu,c->r[8]); // 805ACA84
  c->r[8]=R32(c->r[6]+0x00000030u); // 805ACA88
  W32(c->r[7]+0x00000030u,c->r[8]); // 805ACA8C
  c->r[8]=R32(c->r[6]+0x00000034u); // 805ACA90
  W32(c->r[7]+0x00000034u,c->r[8]); // 805ACA94
  c->r[8]=R32(c->r[6]+0x0000003Cu); // 805ACA98
  c->r[9]=R32(c->r[6]+0x00000038u); // 805ACA9C
  W32(c->r[7]+0x00000038u,c->r[9]); // 805ACAA0
  W32(c->r[7]+0x0000003Cu,c->r[8]); // 805ACAA4
  c->r[8]=R32(c->r[6]+0x00000040u); // 805ACAA8
  W32(c->r[7]+0x00000040u,c->r[8]); // 805ACAAC
  c->r[8]=R32(c->r[6]+0x00000044u); // 805ACAB0
  W32(c->r[7]+0x00000044u,c->r[8]); // 805ACAB4
  c->r[8]=R32(c->r[6]+0x0000004Cu); // 805ACAB8
  c->r[9]=R32(c->r[6]+0x00000048u); // 805ACABC
  W32(c->r[7]+0x00000048u,c->r[9]); // 805ACAC0
  W32(c->r[7]+0x0000004Cu,c->r[8]); // 805ACAC4
  c->r[8]=R32(c->r[6]+0x00000050u); // 805ACAC8
  W32(c->r[7]+0x00000050u,c->r[8]); // 805ACACC
  c->r[8]=R32(c->r[6]+0x00000054u); // 805ACAD0
  W32(c->r[7]+0x00000054u,c->r[8]); // 805ACAD4
  c->r[8]=R32(c->r[6]+0x0000005Cu); // 805ACAD8
  c->r[9]=R32(c->r[6]+0x00000058u); // 805ACADC
  W32(c->r[7]+0x00000058u,c->r[9]); // 805ACAE0
  W32(c->r[7]+0x0000005Cu,c->r[8]); // 805ACAE4
  c->r[8]=R32(c->r[6]+0x00000060u); // 805ACAE8
  W32(c->r[7]+0x00000060u,c->r[8]); // 805ACAEC
  c->r[8]=R32(c->r[6]+0x00000064u); // 805ACAF0
  W32(c->r[7]+0x00000064u,c->r[8]); // 805ACAF4
  c->r[8]=R32(c->r[6]+0x0000006Cu); // 805ACAF8
  c->r[9]=R32(c->r[6]+0x00000068u); // 805ACAFC
  W32(c->r[7]+0x00000068u,c->r[9]); // 805ACB00
  W32(c->r[7]+0x0000006Cu,c->r[8]); // 805ACB04
  c->r[8]=R32(c->r[6]+0x00000070u); // 805ACB08
  W32(c->r[7]+0x00000070u,c->r[8]); // 805ACB0C
  c->r[8]=R32(c->r[6]+0x00000074u); // 805ACB10
  W32(c->r[7]+0x00000074u,c->r[8]); // 805ACB14
  c->r[8]=R32(c->r[6]+0x0000007Cu); // 805ACB18
  c->r[9]=R32(c->r[6]+0x00000078u); // 805ACB1C
  c->r[6]=c->r[6]+0x00000080u; // 805ACB20
  W32(c->r[7]+0x00000078u,c->r[9]); // 805ACB24
  W32(c->r[7]+0x0000007Cu,c->r[8]); // 805ACB28
  c->r[7]=c->r[7]+0x00000080u; // 805ACB2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805ACA24; } // 805ACB30
L_805ACB34:;
  c->r[7]=rotl(c->r[5],4)&0xFFFFFFF0u; // 805ACB34
  c->r[6]=c->r[3]-c->r[5]; // 805ACB38
  c->r[4]=c->r[4]+c->r[7]; // 805ACB3C
  c->r[7]=c->r[0]+c->r[7]; // 805ACB40
  c->ctr=c->r[6]; // 805ACB44
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 805ACB48
  if (!crb(c,0)) { goto L_805ACB7C; } // 805ACB4C
L_805ACB50:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 805ACB50
  W32(c->r[7]+0x00000000u,c->r[0]); // 805ACB54
  c->r[0]=R32(c->r[4]+0x00000004u); // 805ACB58
  W32(c->r[7]+0x00000004u,c->r[0]); // 805ACB5C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 805ACB60
  c->r[3]=R32(c->r[4]+0x00000008u); // 805ACB64
  c->r[4]=c->r[4]+0x00000010u; // 805ACB68
  W32(c->r[7]+0x00000008u,c->r[3]); // 805ACB6C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805ACB70
  c->r[7]=c->r[7]+0x00000010u; // 805ACB74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805ACB50; } // 805ACB78
L_805ACB7C:;
  c->r[3]=c->r[31]|c->r[31]; // 805ACB7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805ACB80
  c->r[30]=R32(c->r[1]+0x00000018u); // 805ACB84
  c->r[29]=R32(c->r[1]+0x00000014u); // 805ACB88
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ACB8C
  c->lr=c->r[0]; // 805ACB90
  c->r[1]=c->r[1]+0x00000020u; // 805ACB94
  return; // 805ACB98
}

// fn_805ACB9C
void f_805ACB9C(Ctx* __restrict c) {
  trace_call(0x805ACB9Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805ACB9C
  c->r[12]=c->r[1]|c->r[1]; // 805ACBA0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEF0u,1); // 805ACBA4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805ACBA8
  c->r[0]=c->lr; // 805ACBAC
  c->r[11]=c->r[12]|c->r[12]; // 805ACBB0
  W32(c->r[12]+0x00000004u,c->r[0]); // 805ACBB4
  c->lr=0x805ACBBCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805ACBB8
  c->r[8]=c->r[3]+0x000000A0u; // 805ACBBC
  {uint32_t ea=0u+c->r[4]; psq_load(c,1,ea,0,0);} // 805ACBC0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805ACBC4
  c->r[23]=c->r[4]|c->r[4]; // 805ACBC8
  {uint32_t ea=c->r[8]+0x00000030u; psq_store(c,1,ea,0,0);} // 805ACBCC
  c->r[26]=c->r[6]|c->r[6]; // 805ACBD0
  c->r[4]=R32(c->r[3]+0x00000008u); // 805ACBD4
  c->r[24]=c->r[3]|c->r[3]; // 805ACBD8
  {uint32_t ea=c->r[8]+0x00000038u; psq_store(c,0,ea,0,0);} // 805ACBDC
  c->r[29]=0u+0x00000008u; // 805ACBE0
  c->r[3]=R32(c->r[3]+0x00000010u); // 805ACBE4
  c->r[28]=0u+0x00000030u; // 805ACBE8
  c->r[6]=R32(c->r[4]+0x00000074u); // 805ACBEC
  c->r[30]=0u+0x00000038u; // 805ACBF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805ACBF4
  c->r[25]=c->r[5]|c->r[5]; // 805ACBF8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ACBFC
  c->r[27]=c->r[7]|c->r[7]; // 805ACC00
  {uint32_t ea=c->r[2]+0x000028D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ACC04
  c->r[4]=c->r[8]|c->r[8]; // 805ACC08
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ACC0C
  c->r[5]=c->r[1]+0x00000050u; // 805ACC10
  c->r[12]=R32(c->r[12]+0x00000024u); // 805ACC14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 805ACC18
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 805ACC1C
  c->ctr=c->r[12]; // 805ACC20
  if (true) { c->lr=0x805ACC28u; dispatch(c,c->ctr); } // 805ACC24
  {uint32_t ea=0u+c->r[25]; psq_load(c,3,ea,0,0);} // 805ACC28
  c->r[0]=c->r[2]+0x000028E0u; // 805ACC2C
  {uint32_t ea=0u+c->r[23]; psq_load(c,2,ea,0,0);} // 805ACC30
  c->r[9]=c->r[1]+0x00000020u; // 805ACC34
  {uint32_t ea=c->r[23]+c->r[29]; psq_load(c,0,ea,0,0);} // 805ACC38
  c->r[10]=c->r[1]+0x00000010u; // 805ACC3C
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 805ACC40
  {uint32_t ea=0u+c->r[0]; psq_load(c,6,ea,0,0);} // 805ACC44
  {uint32_t ea=c->r[25]+c->r[29]; psq_load(c,1,ea,0,0);} // 805ACC48
  c->r[4]=c->r[1]+0x00000050u; // 805ACC4C
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,2,ea,0,0);} // 805ACC50
  c->r[23]=c->r[1]+0x00000040u; // 805ACC54
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805ACC58
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,5,ea,0,0);} // 805ACC5C
  {double t0=S(c->f[5]-c->f[6]), t1=S(c->ps1[5]-c->ps1[6]); c->f[1]=t0; c->ps1[1]=t1;} // 805ACC60
  c->r[31]=c->r[1]+0x00000048u; // 805ACC64
  {double t0=S(c->f[6]-c->f[5]), t1=S(c->ps1[6]-c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 805ACC68
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,4,ea,0,0);} // 805ACC6C
  {double t0=S((c->f[1]>=0.0)?c->f[6]:c->f[5]), t1=S((c->ps1[1]>=0.0)?c->ps1[6]:c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805ACC70
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,6,ea,0,0);} // 805ACC74
  {double t0=S(c->f[4]-c->f[6]), t1=S(c->ps1[4]-c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 805ACC78
  c->r[3]=c->r[24]|c->r[24]; // 805ACC7C
  {double t0=S(c->f[6]-c->f[4]), t1=S(c->ps1[6]-c->ps1[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805ACC80
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 805ACC84
  {double t0=S((c->f[0]>=0.0)?c->f[6]:c->f[4]), t1=S((c->ps1[0]>=0.0)?c->ps1[6]:c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 805ACC88
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,0,ea,0,0);} // 805ACC8C
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 805ACC90
  {uint32_t ea=c->r[1]+0x00000060u; psq_load(c,1,ea,0,0);} // 805ACC94
  {double t0=S((c->f[8]>=0.0)?c->f[6]:c->f[4]), t1=S((c->ps1[8]>=0.0)?c->ps1[6]:c->ps1[4]); c->f[8]=t0; c->ps1[8]=t1;} // 805ACC98
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,6,ea,0,0);} // 805ACC9C
  {double t0=S(c->f[0]+c->f[7]), t1=S(c->ps1[0]+c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 805ACCA0
  {uint32_t ea=c->r[9]+c->r[29]; psq_store(c,7,ea,0,0);} // 805ACCA4
  {double t0=S((c->f[9]>=0.0)?c->f[6]:c->f[5]), t1=S((c->ps1[9]>=0.0)?c->ps1[6]:c->ps1[5]); c->f[0]=t0; c->ps1[0]=t1;} // 805ACCA8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,9,ea,0,0);} // 805ACCAC
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,3,ea,0,0);} // 805ACCB0
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805ACCB4
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 805ACCB8
  {double t0=S(c->f[9]+c->f[8]), t1=S(c->ps1[9]+c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 805ACCBC
  {uint32_t ea=c->r[10]+c->r[29]; psq_store(c,8,ea,0,0);} // 805ACCC0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,2,ea,0,0);} // 805ACCC4
  {uint32_t ea=c->r[1]+0x00000060u; psq_store(c,1,ea,0,0);} // 805ACCC8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,0,ea,0,0);} // 805ACCCC
  c->lr=0x805ACCD4u; f_805AB654(c); // 805ACCD0
  {uint32_t ea=c->r[2]+0x000028E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ACCD4
  c->r[10]=c->r[1]+0x00000070u; // 805ACCD8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 805ACCDC
  {uint32_t ea=0u+c->r[23]; psq_load(c,6,ea,0,0);} // 805ACCE0
  c->r[9]=R32(c->r[24]+0x00000008u); // 805ACCE4
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[2]=t0; c->ps1[2]=t1;} // 805ACCE8
  {uint32_t ea=c->r[23]+c->r[29]; psq_load(c,0,ea,0,0);} // 805ACCEC
  c->r[11]=R32(c->r[9]+0x00000074u); // 805ACCF0
  {uint32_t ea=c->r[2]+0x000028ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 805ACCF4
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 805ACCF8
  c->r[0]=R32(c->r[11]+0x00000000u); // 805ACCFC
  W32(c->r[1]+0x00000070u,c->r[0]); // 805ACD00
  {uint32_t ea=c->r[2]+0x000028D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ACD04
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 805ACD08
  c->r[8]=R32(c->r[11]+0x00000004u); // 805ACD0C
  W32(c->r[1]+0x00000074u,c->r[8]); // 805ACD10
  {uint32_t ea=c->r[2]+0x000028F0u; c->f[2]=RF64(ea);} // 805ACD14
  c->f[9]=frsqrte(c->f[8]); // 805ACD18
  c->r[8]=R32(c->r[11]+0x00000008u); // 805ACD1C
  W32(c->r[1]+0x00000078u,c->r[8]); // 805ACD20
  {uint32_t ea=c->r[13]+0xFFFFAFB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ACD24
  c->f[9]=c->ps1[9]=S(c->f[9]); // 805ACD28
  c->r[8]=R32(c->r[11]+0x0000000Cu); // 805ACD2C
  W32(c->r[1]+0x0000007Cu,c->r[8]); // 805ACD30
  {uint32_t ea=c->r[25]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 805ACD34
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[9]); // 805ACD38
  c->r[8]=R32(c->r[11]+0x00000010u); // 805ACD3C
  W32(c->r[1]+0x00000080u,c->r[8]); // 805ACD40
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[9]); // 805ACD44
  {uint32_t ea=0u+c->r[31]; psq_load(c,5,ea,0,0);} // 805ACD48
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[8],c->f[4],-c->f[3])); // 805ACD4C
  {uint32_t ea=c->r[11]+0x00000020u; psq_load(c,4,ea,0,0);} // 805ACD50
  {uint32_t ea=c->r[10]+0x00000020u; psq_store(c,4,ea,0,0);} // 805ACD54
  c->f[4]=c->ps1[4]=S(std::fma(c->f[3],c->f[0],c->f[9])); // 805ACD58
  {uint32_t ea=c->r[25]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ACD5C
  {uint32_t ea=c->r[11]+0x00000028u; psq_load(c,3,ea,0,0);} // 805ACD60
  {uint32_t ea=c->r[10]+0x00000028u; psq_store(c,3,ea,0,0);} // 805ACD64
  c->f[3]=(c->f[4]>=0.0)?c->f[4]:c->f[2]; // 805ACD68
  {uint32_t ea=c->r[11]+c->r[28]; psq_load(c,2,ea,0,0);} // 805ACD6C
  {uint32_t ea=c->r[10]+c->r[28]; psq_store(c,2,ea,0,0);} // 805ACD70
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805ACD74
  {uint32_t ea=c->r[11]+c->r[30]; psq_load(c,2,ea,0,0);} // 805ACD78
  {uint32_t ea=c->r[10]+c->r[30]; psq_store(c,2,ea,0,0);} // 805ACD7C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[3]); // 805ACD80
  {uint32_t ea=c->r[11]+0x00000040u; psq_load(c,3,ea,0,0);} // 805ACD84
  {uint32_t ea=c->r[10]+0x00000040u; psq_store(c,3,ea,0,0);} // 805ACD88
  c->f[2]=(c->f[8]>=0.0)?c->f[2]:c->f[1]; // 805ACD8C
  {uint32_t ea=c->r[11]+0x00000048u; psq_load(c,1,ea,0,0);} // 805ACD90
  {uint32_t ea=c->r[10]+0x00000048u; psq_store(c,1,ea,0,0);} // 805ACD94
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805ACD98
  c->r[4]=R32(c->r[11]+0x0000006Cu); // 805ACD9C
  W32(c->r[1]+0x000000D8u,c->r[4]); // 805ACDA0
  {uint32_t ea=c->r[1]+0x000000C0u; psq_store(c,6,ea,0,0);} // 805ACDA4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,5,ea,0,0);} // 805ACDA8
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[2]);} // 805ACDAC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[7]);} // 805ACDB0
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 805ACDB4
  c->r[3]=R32(c->r[24]+0x00000154u); // 805ACDB8
  c->r[23]=R32(c->r[9]+0x0000007Cu); // 805ACDBC
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 805ACDC0
  c->r[25]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805ACDC4
  goto L_805ACE20; // 805ACDC8
L_805ACDCC:;
  c->r[3]=R32(c->r[24]+0x00000150u); // 805ACDCC
  c->r[6]=c->r[26]|c->r[26]; // 805ACDD0
  c->r[5]=R32(c->r[24]+0x00000010u); // 805ACDD4
  c->r[7]=c->r[27]|c->r[27]; // 805ACDD8
  c->r[4]=R32(c->r[3]+c->r[25]); // 805ACDDC
  c->r[3]=c->r[24]+0x00000010u; // 805ACDE0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 805ACDE4
  c->r[5]=c->r[1]+0x00000070u; // 805ACDE8
  c->r[8]=R32(c->r[4]+0x00000000u); // 805ACDEC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 805ACDF0
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 805ACDF4
  c->r[0]=c->r[23]+c->r[0]; // 805ACDF8
  c->r[8]=c->r[0]+c->r[8]; // 805ACDFC
  c->r[0]=R8(c->r[8]+0x000001A0u); // 805ACE00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 805ACE04
  c->r[8]=c->r[23]+c->r[0]; // 805ACE08
  c->r[12]=R32(c->r[8]+0x000009ACu); // 805ACE0C
  c->ctr=c->r[12]; // 805ACE10
  if (true) { c->lr=0x805ACE18u; dispatch(c,c->ctr); } // 805ACE14
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805ACE18
  c->r[25]=c->r[25]+0xFFFFFFFCu; // 805ACE1C
L_805ACE20:;
  cmps(c,0,(int32_t)c->r[28],0); // 805ACE20
  if (!crb(c,0)) { IRQCHK(c); goto L_805ACDCC; } // 805ACE24
  c->r[10]=R32(c->r[1]+0x00000000u); // 805ACE28
  c->r[11]=c->r[10]|c->r[10]; // 805ACE2C
  c->lr=0x805ACE34u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805ACE30
  c->r[0]=R32(c->r[10]+0x00000004u); // 805ACE34
  c->lr=c->r[0]; // 805ACE38
  c->r[1]=c->r[10]|c->r[10]; // 805ACE3C
  return; // 805ACE40
}

// fn_805ACE44
void f_805ACE44(Ctx* __restrict c) {
  trace_call(0x805ACE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ACE44
  c->r[0]=c->lr; // 805ACE48
  c->r[12]=c->r[3]+0x000000A0u; // 805ACE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 805ACE50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805ACE54
  c->r[31]=c->r[4]+0x00000010u; // 805ACE58
  W32(c->r[1]+0x00000008u,c->r[30]); // 805ACE5C
  c->r[30]=c->r[4]+0x00000020u; // 805ACE60
  {uint32_t ea=0u+c->r[4]; psq_load(c,0,ea,0,0);} // 805ACE64
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 805ACE68
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 805ACE6C
  {uint32_t ea=c->r[12]+0x00000008u; psq_store(c,0,ea,0,0);} // 805ACE70
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 805ACE74
  {uint32_t ea=c->r[12]+0x00000010u; psq_store(c,0,ea,0,0);} // 805ACE78
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,0,ea,0,0);} // 805ACE7C
  {uint32_t ea=c->r[12]+0x00000018u; psq_store(c,0,ea,0,0);} // 805ACE80
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 805ACE84
  c->r[4]=c->r[4]+0x00000030u; // 805ACE88
  {uint32_t ea=c->r[12]+0x00000020u; psq_store(c,0,ea,0,0);} // 805ACE8C
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 805ACE90
  {uint32_t ea=c->r[12]+0x00000028u; psq_store(c,0,ea,0,0);} // 805ACE94
  c->lr=0x805ACE9Cu; f_805ACB9C(c); // 805ACE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 805ACE9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805ACEA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 805ACEA4
  c->lr=c->r[0]; // 805ACEA8
  c->r[1]=c->r[1]+0x00000010u; // 805ACEAC
  return; // 805ACEB0
}

// fn_805ACEB4
void f_805ACEB4(Ctx* __restrict c) {
  trace_call(0x805ACEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ACEB4
  c->r[0]=c->lr; // 805ACEB8
  cmps(c,0,(int32_t)c->r[5],0); // 805ACEBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ACEC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805ACEC4
  c->r[29]=c->r[3]|c->r[3]; // 805ACEC8
  c->r[30]=c->r[4]|c->r[4]; // 805ACECC
  c->r[31]=c->r[5]|c->r[5]; // 805ACED0
  if (!crb(c,2)) { goto L_805ACEE0; } // 805ACED4
  c->r[4]=R32(c->r[3]+0x00000008u); // 805ACED8
  c->r[31]=R32(c->r[4]+0x00000074u); // 805ACEDC
L_805ACEE0:;
  c->r[3]=R32(c->r[3]+0x00000154u); // 805ACEE0
  c->r[27]=R32(c->r[31]+0x00000000u); // 805ACEE4
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 805ACEE8
  c->r[28]=rotl(c->r[26],2)&0xFFFFFFFCu; // 805ACEEC
  goto L_805ACF44; // 805ACEF0
L_805ACEF4:;
  c->r[3]=R32(c->r[29]+0x00000150u); // 805ACEF4
  c->r[5]=c->r[31]|c->r[31]; // 805ACEF8
  c->r[7]=R32(c->r[29]+0x00000010u); // 805ACEFC
  c->r[6]=c->r[30]|c->r[30]; // 805ACF00
  c->r[4]=R32(c->r[3]+c->r[28]); // 805ACF04
  c->r[3]=c->r[29]+0x00000010u; // 805ACF08
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 805ACF0C
  c->r[7]=R32(c->r[4]+0x00000000u); // 805ACF10
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 805ACF14
  c->r[7]=R32(c->r[7]+0x0000000Cu); // 805ACF18
  c->r[0]=c->r[27]+c->r[0]; // 805ACF1C
  c->r[7]=c->r[0]+c->r[7]; // 805ACF20
  c->r[0]=R8(c->r[7]+0x000001A0u); // 805ACF24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 805ACF28
  c->r[7]=c->r[27]+c->r[0]; // 805ACF2C
  c->r[12]=R32(c->r[7]+0x000009A8u); // 805ACF30
  c->ctr=c->r[12]; // 805ACF34
  if (true) { c->lr=0x805ACF3Cu; dispatch(c,c->ctr); } // 805ACF38
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 805ACF3C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 805ACF40
L_805ACF44:;
  cmps(c,0,(int32_t)c->r[26],0); // 805ACF44
  if (!crb(c,0)) { IRQCHK(c); goto L_805ACEF4; } // 805ACF48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805ACF4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ACF50
  c->lr=c->r[0]; // 805ACF54
  c->r[1]=c->r[1]+0x00000020u; // 805ACF58
  return; // 805ACF5C
}

// fn_805ACF60
void f_805ACF60(Ctx* __restrict c) {
  trace_call(0x805ACF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ACF60
  c->r[0]=c->lr; // 805ACF64
  cmps(c,0,(int32_t)c->r[5],0); // 805ACF68
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ACF6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805ACF70
  c->r[28]=c->r[3]|c->r[3]; // 805ACF74
  c->r[29]=c->r[4]|c->r[4]; // 805ACF78
  c->r[30]=c->r[5]|c->r[5]; // 805ACF7C
  if (!crb(c,2)) { goto L_805ACF8C; } // 805ACF80
  c->r[4]=R32(c->r[3]+0x00000008u); // 805ACF84
  c->r[30]=R32(c->r[4]+0x00000074u); // 805ACF88
L_805ACF8C:;
  c->r[3]=R32(c->r[3]+0x00000154u); // 805ACF8C
  c->r[26]=R32(c->r[30]+0x00000000u); // 805ACF90
  c->r[31]=c->r[3]+0xFFFFFFFFu; // 805ACF94
  c->r[27]=rotl(c->r[31],2)&0xFFFFFFFCu; // 805ACF98
  goto L_805AD008; // 805ACF9C
L_805ACFA0:;
  c->r[3]=R32(c->r[28]+0x00000150u); // 805ACFA0
  c->r[5]=c->r[30]|c->r[30]; // 805ACFA4
  c->r[7]=R32(c->r[28]+0x00000010u); // 805ACFA8
  c->r[6]=c->r[29]|c->r[29]; // 805ACFAC
  c->r[4]=R32(c->r[3]+c->r[27]); // 805ACFB0
  c->r[3]=c->r[28]+0x00000010u; // 805ACFB4
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 805ACFB8
  c->r[7]=R32(c->r[4]+0x00000000u); // 805ACFBC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 805ACFC0
  c->r[7]=R32(c->r[7]+0x0000000Cu); // 805ACFC4
  c->r[0]=c->r[26]+c->r[0]; // 805ACFC8
  c->r[7]=c->r[0]+c->r[7]; // 805ACFCC
  c->r[0]=R8(c->r[7]+0x000001A0u); // 805ACFD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 805ACFD4
  c->r[7]=c->r[26]+c->r[0]; // 805ACFD8
  c->r[12]=R32(c->r[7]+0x000009A4u); // 805ACFDC
  c->ctr=c->r[12]; // 805ACFE0
  if (true) { c->lr=0x805ACFE8u; dispatch(c,c->ctr); } // 805ACFE4
  c->r[0]=R8(c->r[29]+0x00000004u); // 805ACFE8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805ACFEC
  c->r[0]=0u-c->r[3]; // 805ACFF0
  c->r[0]=c->r[0]|c->r[3]; // 805ACFF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805ACFF8
  if (!crb(c,2)) { goto L_805AD010; } // 805ACFFC
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 805AD000
  c->r[27]=c->r[27]+0xFFFFFFFCu; // 805AD004
L_805AD008:;
  cmps(c,0,(int32_t)c->r[31],0); // 805AD008
  if (!crb(c,0)) { IRQCHK(c); goto L_805ACFA0; } // 805AD00C
L_805AD010:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805AD010
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AD014
  c->lr=c->r[0]; // 805AD018
  c->r[1]=c->r[1]+0x00000020u; // 805AD01C
  return; // 805AD020
}

// fn_805AD024
void f_805AD024(Ctx* __restrict c) {
  trace_call(0x805AD024u);
  c->r[0]=R32(c->r[3]+0x00000154u); // 805AD024
  c->r[6]=0u+0x00000000u; // 805AD028
  c->ctr=c->r[0]; // 805AD02C
  cmps(c,0,(int32_t)c->r[0],0); // 805AD030
  if (!crb(c,1)) { goto L_805AD058; } // 805AD034
L_805AD038:;
  c->r[5]=R32(c->r[3]+0x00000150u); // 805AD038
  c->r[0]=R32(c->r[5]+c->r[6]); // 805AD03C
  cmpu(c,0,c->r[0],c->r[4]); // 805AD040
  if (!crb(c,2)) { goto L_805AD050; } // 805AD044
  c->r[3]=0u+0x01000000u; // 805AD048
  return; // 805AD04C
L_805AD050:;
  c->r[6]=c->r[6]+0x00000004u; // 805AD050
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AD038; } // 805AD054
L_805AD058:;
  c->r[3]=0u+0x00000000u; // 805AD058
  return; // 805AD05C
}

// fn_805AD060
void f_805AD060(Ctx* __restrict c) {
  trace_call(0x805AD060u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD060
  c->r[0]=c->lr; // 805AD064
  W32(c->r[1]+0x00000034u,c->r[0]); // 805AD068
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805AD06C
  W32(c->r[1]+0x00000028u,c->r[30]); // 805AD070
  W32(c->r[1]+0x00000024u,c->r[29]); // 805AD074
  c->r[29]=c->r[4]|c->r[4]; // 805AD078
  W32(c->r[1]+0x00000020u,c->r[28]); // 805AD07C
  c->r[28]=c->r[3]|c->r[3]; // 805AD080
  c->r[0]=R32(c->r[4]+0x00000000u); // 805AD084
  cmps(c,0,(int32_t)c->r[0],0); // 805AD088
  if (crb(c,2)) { goto L_805AD130; } // 805AD08C
  c->r[0]=0u+0x00000000u; // 805AD090
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 805AD094
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AD098
  W32(c->r[1]+0x00000010u,c->r[0]); // 805AD09C
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AD0A0
  c->r[31]=c->r[3]+0xFFFFFFFFu; // 805AD0A4
  c->r[30]=rotl(c->r[31],2)&0xFFFFFFFCu; // 805AD0A8
  goto L_805AD0DC; // 805AD0AC
L_805AD0B0:;
  c->r[3]=R32(c->r[28]+0x00000088u); // 805AD0B0
  c->r[3]=R32(c->r[3]+c->r[30]); // 805AD0B4
  cmps(c,0,(int32_t)c->r[3],0); // 805AD0B8
  if (crb(c,2)) { goto L_805AD0D4; } // 805AD0BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AD0C0
  c->r[4]=c->r[1]+0x00000008u; // 805AD0C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 805AD0C8
  c->ctr=c->r[12]; // 805AD0CC
  if (true) { c->lr=0x805AD0D4u; dispatch(c,c->ctr); } // 805AD0D0
L_805AD0D4:;
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 805AD0D4
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 805AD0D8
L_805AD0DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 805AD0DC
  if (!crb(c,0)) { IRQCHK(c); goto L_805AD0B0; } // 805AD0E0
  c->r[0]=R32(c->r[1]+0x00000010u); // 805AD0E4
  cmps(c,0,(int32_t)c->r[0],0); // 805AD0E8
  if (!crb(c,2)) { goto L_805AD130; } // 805AD0EC
  c->r[0]=R32(c->r[28]+0x00000158u); // 805AD0F0
  c->r[3]=R32(c->r[28]+0x00000154u); // 805AD0F4
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805AD0F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805AD0FC
  if (!crb(c,2)) { goto L_805AD110; } // 805AD100
  c->r[3]=c->r[28]+0x00000150u; // 805AD104
  c->r[4]=0u+0x00000004u; // 805AD108
  c->lr=0x805AD110u; f_80623A68(c); // 805AD10C
L_805AD110:;
  c->r[4]=R32(c->r[28]+0x00000154u); // 805AD110
  c->r[0]=0u+0x00000001u; // 805AD114
  c->r[5]=R32(c->r[28]+0x00000150u); // 805AD118
  c->r[3]=c->r[4]+0x00000001u; // 805AD11C
  W32(c->r[28]+0x00000154u,c->r[3]); // 805AD120
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AD124
  W32(c->r[5]+c->r[3],c->r[29]); // 805AD128
  W8(c->r[28]+0x0000015Cu,c->r[0]); // 805AD12C
L_805AD130:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805AD130
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805AD134
  c->r[30]=R32(c->r[1]+0x00000028u); // 805AD138
  c->r[29]=R32(c->r[1]+0x00000024u); // 805AD13C
  c->r[28]=R32(c->r[1]+0x00000020u); // 805AD140
  c->lr=c->r[0]; // 805AD144
  c->r[1]=c->r[1]+0x00000030u; // 805AD148
  return; // 805AD14C
}

// fn_805AD150
void f_805AD150(Ctx* __restrict c) {
  trace_call(0x805AD150u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD150
  c->r[0]=c->lr; // 805AD154
  W32(c->r[1]+0x00000034u,c->r[0]); // 805AD158
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805AD15C
  c->r[31]=c->r[3]|c->r[3]; // 805AD160
  W32(c->r[1]+0x00000028u,c->r[30]); // 805AD164
  W32(c->r[1]+0x00000024u,c->r[29]); // 805AD168
  W32(c->r[1]+0x00000020u,c->r[28]); // 805AD16C
  c->r[0]=R32(c->r[4]+0x00000000u); // 805AD170
  cmps(c,0,(int32_t)c->r[0],0); // 805AD174
  if (crb(c,2)) { goto L_805AD284; } // 805AD178
  c->r[5]=R32(c->r[3]+0x00000154u); // 805AD17C
  c->r[28]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[28]); // 805AD180
  c->r[0]=c->r[28]+0x00000001u; // 805AD184
  c->r[6]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805AD188
  c->ctr=c->r[0]; // 805AD18C
  if (crb(c,0)) { goto L_805AD230; } // 805AD190
L_805AD194:;
  c->r[5]=R32(c->r[3]+0x00000150u); // 805AD194
  c->r[0]=R32(c->r[5]+c->r[6]); // 805AD198
  cmpu(c,0,c->r[0],c->r[4]); // 805AD19C
  if (!crb(c,2)) { goto L_805AD224; } // 805AD1A0
  c->r[0]=0u+0x00000001u; // 805AD1A4
  W32(c->r[1]+0x00000018u,c->r[4]); // 805AD1A8
  W32(c->r[1]+0x00000014u,c->r[3]); // 805AD1AC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 805AD1B0
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AD1B4
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AD1B8
  c->r[29]=rotl(c->r[30],2)&0xFFFFFFFCu; // 805AD1BC
  goto L_805AD1F0; // 805AD1C0
L_805AD1C4:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 805AD1C4
  c->r[3]=R32(c->r[3]+c->r[29]); // 805AD1C8
  cmps(c,0,(int32_t)c->r[3],0); // 805AD1CC
  if (crb(c,2)) { goto L_805AD1E8; } // 805AD1D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AD1D4
  c->r[4]=c->r[1]+0x00000014u; // 805AD1D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AD1DC
  c->ctr=c->r[12]; // 805AD1E0
  if (true) { c->lr=0x805AD1E8u; dispatch(c,c->ctr); } // 805AD1E4
L_805AD1E8:;
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 805AD1E8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AD1EC
L_805AD1F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AD1F0
  if (!crb(c,0)) { IRQCHK(c); goto L_805AD1C4; } // 805AD1F4
  c->r[4]=R32(c->r[31]+0x00000154u); // 805AD1F8
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805AD1FC
  c->r[5]=R32(c->r[31]+0x00000150u); // 805AD200
  c->r[0]=0u+0x00000001u; // 805AD204
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 805AD208
  W32(c->r[31]+0x00000154u,c->r[4]); // 805AD20C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AD210
  c->r[4]=R32(c->r[5]+c->r[4]); // 805AD214
  W32(c->r[5]+c->r[3],c->r[4]); // 805AD218
  W8(c->r[31]+0x0000015Cu,c->r[0]); // 805AD21C
  goto L_805AD284; // 805AD220
L_805AD224:;
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 805AD224
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805AD228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_805AD194; } // 805AD22C
L_805AD230:;
  c->r[0]=0u+0x00000000u; // 805AD230
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 805AD234
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AD238
  W8(c->r[1]+0x00000010u,c->r[0]); // 805AD23C
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 805AD240
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 805AD244
  c->r[29]=rotl(c->r[30],2)&0xFFFFFFFCu; // 805AD248
  goto L_805AD27C; // 805AD24C
L_805AD250:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 805AD250
  c->r[3]=R32(c->r[3]+c->r[29]); // 805AD254
  cmps(c,0,(int32_t)c->r[3],0); // 805AD258
  if (crb(c,2)) { goto L_805AD274; } // 805AD25C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AD260
  c->r[4]=c->r[1]+0x00000008u; // 805AD264
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 805AD268
  c->ctr=c->r[12]; // 805AD26C
  if (true) { c->lr=0x805AD274u; dispatch(c,c->ctr); } // 805AD270
L_805AD274:;
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 805AD274
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 805AD278
L_805AD27C:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AD27C
  if (!crb(c,0)) { IRQCHK(c); goto L_805AD250; } // 805AD280
L_805AD284:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805AD284
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805AD288
  c->r[30]=R32(c->r[1]+0x00000028u); // 805AD28C
  c->r[29]=R32(c->r[1]+0x00000024u); // 805AD290
  c->r[28]=R32(c->r[1]+0x00000020u); // 805AD294
  c->lr=c->r[0]; // 805AD298
  c->r[1]=c->r[1]+0x00000030u; // 805AD29C
  return; // 805AD2A0
}

// fn_805AD2A4
void f_805AD2A4(Ctx* __restrict c) {
  trace_call(0x805AD2A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD2A4
  c->r[0]=c->lr; // 805AD2A8
  c->r[5]=0u+0x80860000u; // 805AD2AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AD2B0
  c->r[5]=c->r[5]+0xFFFFDCF0u; // 805AD2B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AD2B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AD2BC
  c->r[30]=c->r[4]|c->r[4]; // 805AD2C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AD2C4
  c->r[29]=c->r[3]|c->r[3]; // 805AD2C8
  c->lr=0x805AD2D0u; f_805ABF00(c); // 805AD2CC
  c->r[3]=R32(c->r[29]+0x00000158u); // 805AD2D0
  c->r[31]=0u+0x806C0000u; // 805AD2D4
  c->r[31]=c->r[31]+0xFFFFE0A8u; // 805AD2D8
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 805AD2DC
  if (!crb(c,2)) { goto L_805AD318; } // 805AD2E0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805AD2E4
  c->lr=0x805AD2ECu; f_80627B94(c); // 805AD2E8
  c->r[12]=R32(c->r[30]+0x00000000u); // 805AD2EC
  c->r[8]=c->r[3]|c->r[3]; // 805AD2F0
  c->r[0]=R32(c->r[29]+0x00000154u); // 805AD2F4
  c->r[3]=c->r[30]|c->r[30]; // 805AD2F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AD2FC
  c->r[5]=c->r[31]|c->r[31]; // 805AD300
  c->r[4]=0u+0x00000003u; // 805AD304
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AD308
  c->r[6]=R32(c->r[29]+0x00000150u); // 805AD30C
  c->ctr=c->r[12]; // 805AD310
  if (true) { c->lr=0x805AD318u; dispatch(c,c->ctr); } // 805AD314
L_805AD318:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AD318
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AD31C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AD320
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AD324
  c->lr=c->r[0]; // 805AD328
  c->r[1]=c->r[1]+0x00000020u; // 805AD32C
  return; // 805AD330
}

// fn_805AD334
void f_805AD334(Ctx* __restrict c) {
  trace_call(0x805AD334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD334
  c->r[0]=c->lr; // 805AD338
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AD33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AD340
  c->r[31]=c->r[3]|c->r[3]; // 805AD344
  c->r[0]=R32(c->r[3]+0x00000154u); // 805AD348
  cmps(c,0,(int32_t)c->r[0],0); // 805AD34C
  if (!crb(c,2)) { goto L_805AD394; } // 805AD350
  c->r[0]=R32(c->r[3]+0x00000158u); // 805AD354
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AD358
  if (!crb(c,2)) { goto L_805AD378; } // 805AD35C
  c->r[0]=R32(c->r[31]+0x00000158u); // 805AD360
  c->r[6]=0u+0x00000018u; // 805AD364
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AD368
  c->r[4]=R32(c->r[31]+0x00000150u); // 805AD36C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805AD370
  c->lr=0x805AD378u; f_8062C630(c); // 805AD374
L_805AD378:;
  c->r[0]=R32(c->r[31]+0x00000158u); // 805AD378
  c->r[3]=0u+0x00000000u; // 805AD37C
  W32(c->r[31]+0x00000150u,c->r[3]); // 805AD380
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 805AD384
  c->r[0]=c->r[0]|0x80000000u; // 805AD388
  W32(c->r[31]+0x00000154u,c->r[3]); // 805AD38C
  W32(c->r[31]+0x00000158u,c->r[0]); // 805AD390
L_805AD394:;
  c->r[3]=c->r[31]|c->r[31]; // 805AD394
  c->lr=0x805AD39Cu; f_805AC400(c); // 805AD398
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AD39C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AD3A0
  c->lr=c->r[0]; // 805AD3A4
  c->r[1]=c->r[1]+0x00000010u; // 805AD3A8
  return; // 805AD3AC
}

// fn_805AD3B0
void f_805AD3B0(Ctx* __restrict c) {
  trace_call(0x805AD3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD3B0
  c->r[0]=c->lr; // 805AD3B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AD3B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AD3BC
  c->r[31]=c->r[3]|c->r[3]; // 805AD3C0
  c->r[0]=R8(c->r[3]+0x0000015Cu); // 805AD3C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AD3C8
  if (crb(c,2)) { goto L_805AD400; } // 805AD3CC
  c->r[4]=R32(c->r[3]+0x00000154u); // 805AD3D0
  c->r[3]=R32(c->r[3]+0x00000150u); // 805AD3D4
  cmps(c,0,(int32_t)c->r[4],1); // 805AD3D8
  if (!crb(c,1)) { goto L_805AD3F8; } // 805AD3DC
  c->r[0]=0u+0x00000000u; // 805AD3E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 805AD3E4
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 805AD3E8
  c->r[6]=c->r[1]+0x00000008u; // 805AD3EC
  c->r[4]=0u+0x00000000u; // 805AD3F0
  c->lr=0x805AD3F8u; f_805AD414(c); // 805AD3F4
L_805AD3F8:;
  c->r[0]=0u+0x00000000u; // 805AD3F8
  W8(c->r[31]+0x0000015Cu,c->r[0]); // 805AD3FC
L_805AD400:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AD400
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AD404
  c->lr=c->r[0]; // 805AD408
  c->r[1]=c->r[1]+0x00000020u; // 805AD40C
  return; // 805AD410
}

// fn_805AD414
void f_805AD414(Ctx* __restrict c) {
  trace_call(0x805AD414u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AD414
  c->r[12]=c->r[1]|c->r[1]; // 805AD418
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805AD41C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD420
  c->r[0]=c->lr; // 805AD424
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AD428
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AD42C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AD430
  c->r[30]=c->r[6]|c->r[6]; // 805AD434
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AD438
  c->r[29]=c->r[5]|c->r[5]; // 805AD43C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 805AD440
  c->r[28]=c->r[3]|c->r[3]; // 805AD444
L_805AD448:;
  c->r[0]=c->r[4]+c->r[29]; // 805AD448
  c->r[5]=c->r[29]|c->r[29]; // 805AD44C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 805AD450
  c->r[31]=c->r[4]|c->r[4]; // 805AD454
  c->r[7]=R32(c->r[28]+c->r[0]); // 805AD458
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 805AD45C
  goto L_805AD46C; // 805AD460
L_805AD464:;
  c->r[31]=c->r[31]+0x00000001u; // 805AD464
  c->r[3]=c->r[3]+0x00000004u; // 805AD468
L_805AD46C:;
  c->r[8]=R32(c->r[28]+c->r[3]); // 805AD46C
  c->r[6]=R32(c->r[7]+0x00000014u); // 805AD470
  c->r[0]=R32(c->r[8]+0x00000014u); // 805AD474
  c->r[0]=c->r[6]^c->r[0]; // 805AD478
  c->r[0]=cntlz(c->r[0]); // 805AD47C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 805AD480
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AD484
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AD488
  c->r[0]=0u-c->r[6]; // 805AD48C
  c->r[0]=c->r[0]|c->r[6]; // 805AD490
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AD494
  if (!crb(c,2)) { IRQCHK(c); goto L_805AD464; } // 805AD498
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 805AD49C
  goto L_805AD4AC; // 805AD4A0
L_805AD4A4:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805AD4A4
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 805AD4A8
L_805AD4AC:;
  c->r[8]=R32(c->r[28]+c->r[6]); // 805AD4AC
  c->r[0]=R32(c->r[7]+0x00000014u); // 805AD4B0
  c->r[8]=R32(c->r[8]+0x00000014u); // 805AD4B4
  c->r[0]=c->r[8]^c->r[0]; // 805AD4B8
  c->r[0]=cntlz(c->r[0]); // 805AD4BC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 805AD4C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AD4C4
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AD4C8
  c->r[0]=0u-c->r[8]; // 805AD4CC
  c->r[0]=c->r[0]|c->r[8]; // 805AD4D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AD4D4
  if (!crb(c,2)) { IRQCHK(c); goto L_805AD4A4; } // 805AD4D8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 805AD4DC
  if (crb(c,0)) { goto L_805AD504; } // 805AD4E0
  if (crb(c,2)) { goto L_805AD4F8; } // 805AD4E4
  c->r[8]=R32(c->r[28]+c->r[6]); // 805AD4E8
  c->r[0]=R32(c->r[28]+c->r[3]); // 805AD4EC
  W32(c->r[28]+c->r[6],c->r[0]); // 805AD4F0
  W32(c->r[28]+c->r[3],c->r[8]); // 805AD4F4
L_805AD4F8:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 805AD4F8
  c->r[31]=c->r[31]+0x00000001u; // 805AD4FC
  c->r[3]=c->r[3]+0x00000004u; // 805AD500
L_805AD504:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[5]); // 805AD504
  if (!crb(c,1)) { IRQCHK(c); goto L_805AD46C; } // 805AD508
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 805AD50C
  if (!crb(c,0)) { goto L_805AD528; } // 805AD510
  c->r[0]=R8(c->r[30]+0x00000000u); // 805AD514
  c->r[3]=c->r[28]|c->r[28]; // 805AD518
  W8(c->r[1]+0x00000010u,c->r[0]); // 805AD51C
  c->r[6]=c->r[1]+0x00000010u; // 805AD520
  c->lr=0x805AD528u; f_805AD414(c); // 805AD524
L_805AD528:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[29]); // 805AD528
  if (!crb(c,0)) { goto L_805AD538; } // 805AD52C
  c->r[4]=c->r[31]|c->r[31]; // 805AD530
  IRQCHK(c); goto L_805AD448; // 805AD534
L_805AD538:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AD538
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AD53C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AD540
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AD544
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805AD548
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 805AD54C
  c->lr=c->r[0]; // 805AD550
  c->r[1]=c->r[10]|c->r[10]; // 805AD554
  return; // 805AD558
}

// fn_805AD55C
void f_805AD55C(Ctx* __restrict c) {
  trace_call(0x805AD55Cu);
  return; // 805AD55C
}

// fn_805AD560
void f_805AD560(Ctx* __restrict c) {
  trace_call(0x805AD560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD560
  c->r[0]=c->lr; // 805AD564
  cmps(c,0,(int32_t)c->r[3],0); // 805AD568
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AD56C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AD570
  c->r[31]=c->r[3]|c->r[3]; // 805AD574
  if (crb(c,2)) { goto L_805AD5C0; } // 805AD578
  W32(c->r[1]+0x00000008u,c->r[4]); // 805AD57C
  c->r[4]=c->r[1]+0x00000008u; // 805AD580
  c->lr=0x805AD588u; f_805C54E4(c); // 805AD584
  c->r[3]=0u+0x80720000u; // 805AD588
  c->r[4]=0u+0x00000000u; // 805AD58C
  c->r[0]=0u+0x80000000u; // 805AD590
  W32(c->r[31]+0x00000088u,c->r[4]); // 805AD594
  c->r[3]=c->r[3]+0x000028F0u; // 805AD598
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 805AD59C
  W32(c->r[31]+0x00000090u,c->r[0]); // 805AD5A0
  W32(c->r[31]+0x00000094u,c->r[4]); // 805AD5A4
  W32(c->r[31]+0x00000098u,c->r[4]); // 805AD5A8
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 805AD5AC
  W32(c->r[31]+0x00000000u,c->r[3]); // 805AD5B0
  W32(c->r[31]+0x00000150u,c->r[4]); // 805AD5B4
  W32(c->r[31]+0x00000154u,c->r[4]); // 805AD5B8
  W32(c->r[31]+0x00000158u,c->r[0]); // 805AD5BC
L_805AD5C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AD5C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AD5C4
  c->lr=c->r[0]; // 805AD5C8
  c->r[1]=c->r[1]+0x00000020u; // 805AD5CC
  return; // 805AD5D0
}

// fn_805AD5D4
void f_805AD5D4(Ctx* __restrict c) {
  trace_call(0x805AD5D4u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AD5D4
  c->r[4]=0u+0xFFFFFFFFu; // 805AD5D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 805AD5DC
  c->ctr=c->r[12]; // 805AD5E0
  if (true) { dispatch(c,c->ctr); return; } // 805AD5E4
}

// fn_805AD5E8
void f_805AD5E8(Ctx* __restrict c) {
  trace_call(0x805AD5E8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AD5E8
  c->r[12]=c->r[1]|c->r[1]; // 805AD5EC
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 805AD5F0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD5F4
  c->r[0]=c->lr; // 805AD5F8
  c->r[3]=0u+0x806C0000u; // 805AD5FC
  c->r[5]=0u+0x00000000u; // 805AD600
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AD604
  c->r[3]=c->r[3]+0xFFFFE0B8u; // 805AD608
  c->r[0]=0u+0x00000001u; // 805AD60C
  c->r[6]=0u+0x00000004u; // 805AD610
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AD614
  c->r[31]=0u+0x806C0000u; // 805AD618
  c->r[31]=c->r[31]+0xFFFFE100u; // 805AD61C
  c->r[7]=0u+0x00000000u; // 805AD620
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AD624
  c->r[30]=0u+0x00000000u; // 805AD628
  c->r[4]=c->r[31]+0x00000027u; // 805AD62C
  c->r[8]=0u+0x00000000u; // 805AD630
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AD634
  c->r[29]=0u+0x80860000u; // 805AD638
  c->r[29]=c->r[29]+0xFFFFDD50u; // 805AD63C
  c->r[9]=0u+0x00000000u; // 805AD640
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AD644
  c->r[3]=c->r[29]+0x00000000u; // 805AD648
  c->r[10]=0u+0x00000000u; // 805AD64C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AD650
  W32(c->r[1]+0x00000010u,c->r[30]); // 805AD654
  W32(c->r[1]+0x00000014u,c->r[30]); // 805AD658
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AD65C
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805AD660
  c->lr=0x805AD668u; f_8062E0DC(c); // 805AD664
  c->r[6]=c->r[29]+0x00000030u; // 805AD668
  c->r[3]=0u+0x805B0000u; // 805AD66C
  c->r[0]=c->r[31]+0x00000027u; // 805AD670
  W32(c->r[29]+0x00000030u,c->r[0]); // 805AD674
  c->r[3]=c->r[3]+0xFFFFD55Cu; // 805AD678
  c->r[8]=0u+0x806C0000u; // 805AD67C
  W32(c->r[6]+0x00000008u,c->r[3]); // 805AD680
  c->r[8]=c->r[8]+0xFFFFE0D0u; // 805AD684
  c->r[5]=0u+0x80860000u; // 805AD688
  c->r[0]=0u+0x00000002u; // 805AD68C
  W32(c->r[6]+0x00000004u,c->r[30]); // 805AD690
  c->r[3]=c->r[29]+0x00000040u; // 805AD694
  c->r[4]=c->r[31]+0x0000004Cu; // 805AD698
  c->r[5]=c->r[5]+0xFFFFDD20u; // 805AD69C
  W32(c->r[6]+0x0000000Cu,c->r[30]); // 805AD6A0
  c->r[6]=0u+0x00000160u; // 805AD6A4
  c->r[7]=0u+0x00000000u; // 805AD6A8
  c->r[9]=0u+0x00000000u; // 805AD6AC
  W32(c->r[1]+0x00000008u,c->r[8]); // 805AD6B0
  c->r[8]=0u+0x00000000u; // 805AD6B4
  c->r[10]=0u+0x00000000u; // 805AD6B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AD6BC
  W32(c->r[1]+0x00000010u,c->r[30]); // 805AD6C0
  W32(c->r[1]+0x00000014u,c->r[30]); // 805AD6C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AD6C8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 805AD6CC
  c->lr=0x805AD6D4u; f_8062E0DC(c); // 805AD6D0
  c->r[3]=addc(c,c->r[1],0x00000030u,0); cr0(c,c->r[3]); // 805AD6D4
  if (crb(c,2)) { goto L_805AD71C; } // 805AD6D8
  W32(c->r[1]+0x00000020u,c->r[30]); // 805AD6DC
  c->r[4]=c->r[1]+0x00000020u; // 805AD6E0
  c->lr=0x805AD6E8u; f_805C54E4(c); // 805AD6E4
  c->r[3]=0u+0x80720000u; // 805AD6E8
  c->r[0]=0u+0x80000000u; // 805AD6EC
  c->r[3]=c->r[3]+0x000028F0u; // 805AD6F0
  W32(c->r[1]+0x000000B8u,c->r[30]); // 805AD6F4
  W32(c->r[1]+0x000000BCu,c->r[30]); // 805AD6F8
  W32(c->r[1]+0x000000C0u,c->r[0]); // 805AD6FC
  W32(c->r[1]+0x000000C4u,c->r[30]); // 805AD700
  W32(c->r[1]+0x000000C8u,c->r[30]); // 805AD704
  W32(c->r[1]+0x000000CCu,c->r[0]); // 805AD708
  W32(c->r[1]+0x00000030u,c->r[3]); // 805AD70C
  W32(c->r[1]+0x00000180u,c->r[30]); // 805AD710
  W32(c->r[1]+0x00000184u,c->r[30]); // 805AD714
  W32(c->r[1]+0x00000188u,c->r[0]); // 805AD718
L_805AD71C:;
  c->r[4]=0u+0x806C0000u; // 805AD71C
  c->r[5]=0u+0x805B0000u; // 805AD720
  c->r[4]=c->r[4]+0xFFFFE100u; // 805AD724
  c->r[3]=0u+0x805B0000u; // 805AD728
  c->r[6]=c->r[4]+0x0000004Cu; // 805AD72C
  c->r[0]=R32(c->r[1]+0x00000030u); // 805AD730
  c->r[4]=c->r[29]+0x00000070u; // 805AD734
  c->r[5]=c->r[5]+0xFFFFD560u; // 805AD738
  c->r[3]=c->r[3]+0xFFFFD5D4u; // 805AD73C
  W32(c->r[29]+0x00000070u,c->r[6]); // 805AD740
  W32(c->r[4]+0x00000004u,c->r[5]); // 805AD744
  W32(c->r[4]+0x00000008u,c->r[3]); // 805AD748
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805AD74C
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AD750
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AD754
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805AD758
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805AD75C
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AD760
  c->lr=c->r[0]; // 805AD764
  c->r[1]=c->r[10]|c->r[10]; // 805AD768
  return; // 805AD76C
}

// fn_805AD770
void f_805AD770(Ctx* __restrict c) {
  trace_call(0x805AD770u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AD770
  c->r[12]=c->r[1]|c->r[1]; // 805AD774
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 805AD778
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AD77C
  c->r[0]=c->lr; // 805AD780
  c->r[7]=0u+0x80720000u; // 805AD784
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AD788
  c->r[7]=c->r[7]+0x00002940u; // 805AD78C
  c->r[0]=0u+0x00000001u; // 805AD790
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AD794
  c->r[6]=c->r[7]+0x00000014u; // 805AD798
  c->r[31]=c->r[4]|c->r[4]; // 805AD79C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805AD7A0
  c->r[30]=c->r[3]|c->r[3]; // 805AD7A4
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805AD7A8
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 805AD7AC
  W16(c->r[3]+0x00000006u,c->r[0]); // 805AD7B0
  c->r[0]=c->r[7]+0x00000028u; // 805AD7B4
  W32(c->r[3]+0x00000000u,c->r[7]); // 805AD7B8
  W32(c->r[3]+0x00000008u,c->r[6]); // 805AD7BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 805AD7C0
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AD7C4
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 805AD7C8
  c->lr=0x805AD7D0u; f_8062D410(c); // 805AD7CC
  cmps(c,0,(int32_t)c->r[30],0); // 805AD7D0
  c->r[4]=c->r[30]|c->r[30]; // 805AD7D4
  if (crb(c,2)) { goto L_805AD7E0; } // 805AD7D8
  c->r[4]=c->r[30]+0x00000008u; // 805AD7DC
L_805AD7E0:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 805AD7E0
  c->lr=0x805AD7E8u; f_805C22E0(c); // 805AD7E4
  c->r[12]=R32(c->r[30]+0x00000010u); // 805AD7E8
  c->r[29]=c->r[1]+0x00000030u; // 805AD7EC
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 805AD7F0
  c->r[4]=0u+0x000000D0u; // 805AD7F4
  c->r[10]=R32(c->r[12]+0x000002F8u); // 805AD7F8
  c->r[5]=0u+0x00000032u; // 805AD7FC
  W32(c->r[1]+0x00000028u,c->r[10]); // 805AD800
  c->r[11]=R32(c->r[12]+0x000002F4u); // 805AD804
  W32(c->r[1]+0x00000024u,c->r[11]); // 805AD808
  c->r[9]=R32(c->r[12]+0x00000300u); // 805AD80C
  c->r[8]=R32(c->r[12]+0x00000304u); // 805AD810
  W32(c->r[1]+0x00000014u,c->r[8]); // 805AD814
  c->r[3]=R32(c->r[12]+0x00000308u); // 805AD818
  W32(c->r[1]+0x00000018u,c->r[3]); // 805AD81C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD820
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 805AD824
  c->r[11]=R32(c->r[12]+0x000002F0u); // 805AD828
  {double t0=S(c->f[0]), t1=S(c->f[4]); c->f[5]=t0; c->ps1[5]=t1;} // 805AD82C
  W32(c->r[1]+0x00000010u,c->r[9]); // 805AD830
  {double t0=S(c->f[3]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 805AD834
  c->r[10]=R32(c->r[12]+0x000002FCu); // 805AD838
  c->r[8]=R32(c->r[12]+0x0000030Cu); // 805AD83C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AD840
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD844
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AD848
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805AD84C
  W32(c->r[1]+0x00000020u,c->r[11]); // 805AD850
  {double t0=S(c->f[0]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805AD854
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AD858
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 805AD85C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 805AD860
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,1,ea,0,0);} // 805AD864
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,5,ea,0,0);} // 805AD868
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,0,ea,0,0);} // 805AD86C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,3,ea,0,0);} // 805AD870
  c->lr=0x805AD878u; f_8062C34C(c); // 805AD874
  cmps(c,0,(int32_t)c->r[3],0); // 805AD878
  c->r[0]=0u+0x000000D0u; // 805AD87C
  W16(c->r[3]+0x00000004u,c->r[0]); // 805AD880
  c->r[28]=c->r[3]|c->r[3]; // 805AD884
  if (crb(c,2)) { goto L_805AD89C; } // 805AD888
  c->r[4]=c->r[29]|c->r[29]; // 805AD88C
  c->r[5]=0u+0x00000000u; // 805AD890
  c->lr=0x805AD898u; f_805A9074(c); // 805AD894
  c->r[28]=c->r[3]|c->r[3]; // 805AD898
L_805AD89C:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AD89C
  c->r[0]=0u+0x00000003u; // 805AD8A0
  W8(c->r[28]+0x00000028u,c->r[0]); // 805AD8A4
  c->r[4]=c->r[30]|c->r[30]; // 805AD8A8
  if (crb(c,2)) { goto L_805AD8B4; } // 805AD8AC
  c->r[4]=c->r[30]+0x0000000Cu; // 805AD8B0
L_805AD8B4:;
  c->r[3]=c->r[28]|c->r[28]; // 805AD8B4
  c->lr=0x805AD8BCu; f_805ABC70(c); // 805AD8B8
  W32(c->r[30]+0x00000014u,c->r[28]); // 805AD8BC
  c->r[3]=c->r[31]|c->r[31]; // 805AD8C0
  c->r[4]=c->r[28]|c->r[28]; // 805AD8C4
  c->lr=0x805AD8CCu; f_805C1314(c); // 805AD8C8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD8CC
  c->r[29]=c->r[1]+0x00000030u; // 805AD8D0
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805AD8D4
  c->r[4]=0u+0x000000D0u; // 805AD8D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AD8DC
  c->r[5]=0u+0x00000032u; // 805AD8E0
  {double t0=S(c->f[0]), t1=S(c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805AD8E4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AD8E8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805AD8EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD8F0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AD8F4
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805AD8F8
  {double t0=S(c->f[0]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805AD8FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,4,ea,0,0);} // 805AD900
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AD904
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,1,ea,0,0);} // 805AD908
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,0,ea,0,0);} // 805AD90C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,3,ea,0,0);} // 805AD910
  c->lr=0x805AD918u; f_8062C34C(c); // 805AD914
  cmps(c,0,(int32_t)c->r[3],0); // 805AD918
  c->r[0]=0u+0x000000D0u; // 805AD91C
  W16(c->r[3]+0x00000004u,c->r[0]); // 805AD920
  c->r[28]=c->r[3]|c->r[3]; // 805AD924
  if (crb(c,2)) { goto L_805AD93C; } // 805AD928
  c->r[4]=c->r[29]|c->r[29]; // 805AD92C
  c->r[5]=0u+0x00000000u; // 805AD930
  c->lr=0x805AD938u; f_805A9074(c); // 805AD934
  c->r[28]=c->r[3]|c->r[3]; // 805AD938
L_805AD93C:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AD93C
  c->r[0]=0u+0x00000003u; // 805AD940
  W8(c->r[28]+0x00000028u,c->r[0]); // 805AD944
  c->r[4]=c->r[30]|c->r[30]; // 805AD948
  if (crb(c,2)) { goto L_805AD954; } // 805AD94C
  c->r[4]=c->r[30]+0x0000000Cu; // 805AD950
L_805AD954:;
  c->r[3]=c->r[28]|c->r[28]; // 805AD954
  c->lr=0x805AD95Cu; f_805ABC70(c); // 805AD958
  W32(c->r[30]+0x00000018u,c->r[28]); // 805AD95C
  c->r[3]=c->r[31]|c->r[31]; // 805AD960
  c->r[4]=c->r[28]|c->r[28]; // 805AD964
  c->lr=0x805AD96Cu; f_805C1314(c); // 805AD968
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD96C
  c->r[29]=c->r[1]+0x00000030u; // 805AD970
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805AD974
  c->r[4]=0u+0x000000D0u; // 805AD978
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AD97C
  c->r[5]=0u+0x00000032u; // 805AD980
  {double t0=S(c->f[0]), t1=S(c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805AD984
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AD988
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805AD98C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AD990
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AD994
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805AD998
  {double t0=S(c->f[2]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805AD99C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,4,ea,0,0);} // 805AD9A0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AD9A4
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805AD9A8
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,1,ea,0,0);} // 805AD9AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,3,ea,0,0);} // 805AD9B0
  c->lr=0x805AD9B8u; f_8062C34C(c); // 805AD9B4
  cmps(c,0,(int32_t)c->r[3],0); // 805AD9B8
  c->r[0]=0u+0x000000D0u; // 805AD9BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 805AD9C0
  c->r[28]=c->r[3]|c->r[3]; // 805AD9C4
  if (crb(c,2)) { goto L_805AD9DC; } // 805AD9C8
  c->r[4]=c->r[29]|c->r[29]; // 805AD9CC
  c->r[5]=0u+0x00000000u; // 805AD9D0
  c->lr=0x805AD9D8u; f_805A9074(c); // 805AD9D4
  c->r[28]=c->r[3]|c->r[3]; // 805AD9D8
L_805AD9DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 805AD9DC
  c->r[0]=0u+0x00000003u; // 805AD9E0
  W8(c->r[28]+0x00000028u,c->r[0]); // 805AD9E4
  c->r[4]=c->r[30]|c->r[30]; // 805AD9E8
  if (crb(c,2)) { goto L_805AD9F4; } // 805AD9EC
  c->r[4]=c->r[30]+0x0000000Cu; // 805AD9F0
L_805AD9F4:;
  c->r[3]=c->r[28]|c->r[28]; // 805AD9F4
  c->lr=0x805AD9FCu; f_805ABC70(c); // 805AD9F8
  W32(c->r[30]+0x0000001Cu,c->r[28]); // 805AD9FC
  c->r[3]=c->r[31]|c->r[31]; // 805ADA00
  c->r[4]=c->r[28]|c->r[28]; // 805ADA04
  c->lr=0x805ADA0Cu; f_805C1314(c); // 805ADA08
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADA0C
  c->r[29]=c->r[1]+0x00000030u; // 805ADA10
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 805ADA14
  c->r[4]=0u+0x000000D0u; // 805ADA18
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADA1C
  c->r[5]=0u+0x00000032u; // 805ADA20
  {double t0=S(c->f[0]), t1=S(c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805ADA24
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADA28
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805ADA2C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADA30
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADA34
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805ADA38
  {double t0=S(c->f[2]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 805ADA3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,4,ea,0,0);} // 805ADA40
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ADA44
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805ADA48
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,1,ea,0,0);} // 805ADA4C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,3,ea,0,0);} // 805ADA50
  c->lr=0x805ADA58u; f_8062C34C(c); // 805ADA54
  cmps(c,0,(int32_t)c->r[3],0); // 805ADA58
  c->r[0]=0u+0x000000D0u; // 805ADA5C
  W16(c->r[3]+0x00000004u,c->r[0]); // 805ADA60
  c->r[28]=c->r[3]|c->r[3]; // 805ADA64
  if (crb(c,2)) { goto L_805ADA7C; } // 805ADA68
  c->r[4]=c->r[29]|c->r[29]; // 805ADA6C
  c->r[5]=0u+0x00000000u; // 805ADA70
  c->lr=0x805ADA78u; f_805A9074(c); // 805ADA74
  c->r[28]=c->r[3]|c->r[3]; // 805ADA78
L_805ADA7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 805ADA7C
  c->r[0]=0u+0x00000003u; // 805ADA80
  W8(c->r[28]+0x00000028u,c->r[0]); // 805ADA84
  c->r[4]=c->r[30]|c->r[30]; // 805ADA88
  if (crb(c,2)) { goto L_805ADA94; } // 805ADA8C
  c->r[4]=c->r[30]+0x0000000Cu; // 805ADA90
L_805ADA94:;
  c->r[3]=c->r[28]|c->r[28]; // 805ADA94
  c->lr=0x805ADA9Cu; f_805ABC70(c); // 805ADA98
  W32(c->r[30]+0x00000020u,c->r[28]); // 805ADA9C
  c->r[3]=c->r[31]|c->r[31]; // 805ADAA0
  c->r[4]=c->r[28]|c->r[28]; // 805ADAA4
  c->lr=0x805ADAACu; f_805C1314(c); // 805ADAA8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADAAC
  c->r[29]=c->r[1]+0x00000030u; // 805ADAB0
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 805ADAB4
  c->r[4]=0u+0x000000D0u; // 805ADAB8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADABC
  c->r[5]=0u+0x00000032u; // 805ADAC0
  {double t0=S(c->f[2]), t1=S(c->f[4]); c->f[5]=t0; c->ps1[5]=t1;} // 805ADAC4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADAC8
  {double t0=S(c->f[2]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805ADACC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 805ADAD0
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805ADAD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADAD8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 805ADADC
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805ADAE0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ADAE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,5,ea,0,0);} // 805ADAE8
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,1,ea,0,0);} // 805ADAEC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,4,ea,0,0);} // 805ADAF0
  c->lr=0x805ADAF8u; f_8062C34C(c); // 805ADAF4
  cmps(c,0,(int32_t)c->r[3],0); // 805ADAF8
  c->r[0]=0u+0x000000D0u; // 805ADAFC
  W16(c->r[3]+0x00000004u,c->r[0]); // 805ADB00
  c->r[28]=c->r[3]|c->r[3]; // 805ADB04
  if (crb(c,2)) { goto L_805ADB1C; } // 805ADB08
  c->r[4]=c->r[29]|c->r[29]; // 805ADB0C
  c->r[5]=0u+0x00000000u; // 805ADB10
  c->lr=0x805ADB18u; f_805A9074(c); // 805ADB14
  c->r[28]=c->r[3]|c->r[3]; // 805ADB18
L_805ADB1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 805ADB1C
  c->r[0]=0u+0x00000003u; // 805ADB20
  W8(c->r[28]+0x00000028u,c->r[0]); // 805ADB24
  c->r[4]=c->r[30]|c->r[30]; // 805ADB28
  if (crb(c,2)) { goto L_805ADB34; } // 805ADB2C
  c->r[4]=c->r[30]+0x0000000Cu; // 805ADB30
L_805ADB34:;
  c->r[3]=c->r[28]|c->r[28]; // 805ADB34
  c->lr=0x805ADB3Cu; f_805ABC70(c); // 805ADB38
  W32(c->r[30]+0x00000024u,c->r[28]); // 805ADB3C
  c->r[3]=c->r[31]|c->r[31]; // 805ADB40
  c->r[4]=c->r[28]|c->r[28]; // 805ADB44
  c->lr=0x805ADB4Cu; f_805C1314(c); // 805ADB48
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADB4C
  c->r[29]=c->r[1]+0x00000030u; // 805ADB50
  {uint32_t ea=c->r[2]+0x000028F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 805ADB54
  c->r[4]=0u+0x000000D0u; // 805ADB58
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADB5C
  c->r[5]=0u+0x00000032u; // 805ADB60
  {double t0=S(c->f[2]), t1=S(c->f[4]); c->f[5]=t0; c->ps1[5]=t1;} // 805ADB64
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADB68
  {double t0=S(c->f[2]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 805ADB6C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 805ADB70
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805ADB74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADB78
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 805ADB7C
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,0,ea,0,0);} // 805ADB80
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ADB84
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,5,ea,0,0);} // 805ADB88
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,1,ea,0,0);} // 805ADB8C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,4,ea,0,0);} // 805ADB90
  c->lr=0x805ADB98u; f_8062C34C(c); // 805ADB94
  cmps(c,0,(int32_t)c->r[3],0); // 805ADB98
  c->r[0]=0u+0x000000D0u; // 805ADB9C
  W16(c->r[3]+0x00000004u,c->r[0]); // 805ADBA0
  c->r[28]=c->r[3]|c->r[3]; // 805ADBA4
  if (crb(c,2)) { goto L_805ADBBC; } // 805ADBA8
  c->r[4]=c->r[29]|c->r[29]; // 805ADBAC
  c->r[5]=0u+0x00000000u; // 805ADBB0
  c->lr=0x805ADBB8u; f_805A9074(c); // 805ADBB4
  c->r[28]=c->r[3]|c->r[3]; // 805ADBB8
L_805ADBBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 805ADBBC
  c->r[0]=0u+0x00000003u; // 805ADBC0
  W8(c->r[28]+0x00000028u,c->r[0]); // 805ADBC4
  c->r[4]=c->r[30]|c->r[30]; // 805ADBC8
  if (crb(c,2)) { goto L_805ADBD4; } // 805ADBCC
  c->r[4]=c->r[30]+0x0000000Cu; // 805ADBD0
L_805ADBD4:;
  c->r[3]=c->r[28]|c->r[28]; // 805ADBD4
  c->lr=0x805ADBDCu; f_805ABC70(c); // 805ADBD8
  W32(c->r[30]+0x00000028u,c->r[28]); // 805ADBDC
  c->r[3]=c->r[31]|c->r[31]; // 805ADBE0
  c->r[4]=c->r[28]|c->r[28]; // 805ADBE4
  c->lr=0x805ADBECu; f_805C1314(c); // 805ADBE8
  c->r[3]=c->r[30]|c->r[30]; // 805ADBEC
  c->r[10]=R32(c->r[1]+0x00000000u); // 805ADBF0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805ADBF4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805ADBF8
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805ADBFC
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 805ADC00
  c->r[0]=R32(c->r[10]+0x00000004u); // 805ADC04
  c->lr=c->r[0]; // 805ADC08
  c->r[1]=c->r[10]|c->r[10]; // 805ADC0C
  return; // 805ADC10
}

// fn_805ADC14
void f_805ADC14(Ctx* __restrict c) {
  trace_call(0x805ADC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ADC14
  c->r[0]=c->lr; // 805ADC18
  cmps(c,0,(int32_t)c->r[3],0); // 805ADC1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ADC20
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805ADC24
  c->r[27]=c->r[3]|c->r[3]; // 805ADC28
  c->r[28]=c->r[4]|c->r[4]; // 805ADC2C
  if (crb(c,2)) { goto L_805ADCA4; } // 805ADC30
  c->r[5]=0u+0x80720000u; // 805ADC34
  c->r[29]=0u+0x00000000u; // 805ADC38
  c->r[5]=c->r[5]+0x00002940u; // 805ADC3C
  W32(c->r[3]+0x00000000u,c->r[5]); // 805ADC40
  c->r[4]=c->r[5]+0x00000014u; // 805ADC44
  c->r[30]=0u+0x00000000u; // 805ADC48
  c->r[0]=c->r[5]+0x00000028u; // 805ADC4C
  W32(c->r[3]+0x00000008u,c->r[4]); // 805ADC50
  c->r[31]=0u+0x00000000u; // 805ADC54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 805ADC58
L_805ADC5C:;
  c->r[3]=c->r[27]+c->r[30]; // 805ADC5C
  c->r[3]=R32(c->r[3]+0x00000014u); // 805ADC60
  cmps(c,0,(int32_t)c->r[3],0); // 805ADC64
  if (crb(c,2)) { goto L_805ADC78; } // 805ADC68
  c->lr=0x805ADC70u; f_8062D488(c); // 805ADC6C
  c->r[3]=c->r[27]+c->r[30]; // 805ADC70
  W32(c->r[3]+0x00000014u,c->r[31]); // 805ADC74
L_805ADC78:;
  c->r[29]=c->r[29]+0x00000001u; // 805ADC78
  c->r[30]=c->r[30]+0x00000004u; // 805ADC7C
  cmps(c,0,(int32_t)c->r[29],6); // 805ADC80
  if (crb(c,0)) { IRQCHK(c); goto L_805ADC5C; } // 805ADC84
  cmps(c,0,(int32_t)c->r[28],0); // 805ADC88
  if (!crb(c,1)) { goto L_805ADCA4; } // 805ADC8C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805ADC90
  c->r[4]=c->r[27]|c->r[27]; // 805ADC94
  c->r[5]=R16(c->r[27]+0x00000004u); // 805ADC98
  c->r[6]=0u+0x0000000Du; // 805ADC9C
  c->lr=0x805ADCA4u; f_8062C630(c); // 805ADCA0
L_805ADCA4:;
  c->r[3]=c->r[27]|c->r[27]; // 805ADCA4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805ADCA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ADCAC
  c->lr=c->r[0]; // 805ADCB0
  c->r[1]=c->r[1]+0x00000020u; // 805ADCB4
  return; // 805ADCB8
}

// fn_805ADCBC
void f_805ADCBC(Ctx* __restrict c) {
  trace_call(0x805ADCBCu);
  c->r[4]=R32(c->r[4]+0x00000004u); // 805ADCBC
  c->r[0]=R8(c->r[4]+0x00000018u); // 805ADCC0
  cmps(c,0,(int32_t)c->r[0],1); // 805ADCC4
  if (!crb(c,2)) { goto L_805ADCDC; } // 805ADCC8
  c->r[0]=R8(c->r[4]+0x00000010u); // 805ADCCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805ADCD0
  c->r[4]=c->r[4]+c->r[0]; // 805ADCD4
  goto L_805ADCE0; // 805ADCD8
L_805ADCDC:;
  c->r[4]=0u+0x00000000u; // 805ADCDC
L_805ADCE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 805ADCE0
  if (crb(c,2)) return; // 805ADCE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 805ADCE8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 805ADCEC
  c->ctr=c->r[12]; // 805ADCF0
  if (true) { dispatch(c,c->ctr); return; } // 805ADCF4
  return; // 805ADCF8
}

// fn_805ADCFC
void f_805ADCFC(Ctx* __restrict c) {
  trace_call(0x805ADCFCu);
  return; // 805ADCFC
}

// fn_805ADD00
void f_805ADD00(Ctx* __restrict c) {
  trace_call(0x805ADD00u);
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 805ADD00
  cmps(c,0,(int32_t)c->r[0],0); // 805ADD04
  if (crb(c,2)) { goto L_805ADD20; } // 805ADD08
  cmps(c,0,(int32_t)c->r[0],2); // 805ADD0C
  if (crb(c,2)) { goto L_805ADD34; } // 805ADD10
  cmps(c,0,(int32_t)c->r[0],1); // 805ADD14
  if (crb(c,2)) { goto L_805ADD3C; } // 805ADD18
  return; // 805ADD1C
L_805ADD20:;
  c->r[3]=c->r[4]|c->r[4]; // 805ADD20
  c->r[4]=0u+0x00000007u; // 805ADD24
  c->r[5]=0u+0x00000001u; // 805ADD28
  c->r[6]=0u+0x00000000u; // 805ADD2C
  f_805A326C(c); return; // 805ADD30
L_805ADD34:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 805ADD34
  f_805C049C(c); return; // 805ADD38
L_805ADD3C:;
  c->r[3]=c->r[4]|c->r[4]; // 805ADD3C
  c->r[4]=0u+0x00000007u; // 805ADD40
  c->r[5]=0u+0x00000001u; // 805ADD44
  c->r[6]=0u+0x00000000u; // 805ADD48
  f_805A326C(c); return; // 805ADD4C
  return; // 805ADD50
}

// fn_805ADD54
void f_805ADD54(Ctx* __restrict c) {
  trace_call(0x805ADD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ADD54
  c->r[0]=c->lr; // 805ADD58
  cmps(c,0,(int32_t)c->r[3],0); // 805ADD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 805ADD60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805ADD64
  c->r[31]=c->r[3]|c->r[3]; // 805ADD68
  c->r[4]=c->r[31]|c->r[31]; // 805ADD6C
  if (crb(c,2)) { goto L_805ADD78; } // 805ADD70
  c->r[4]=c->r[3]+0x00000008u; // 805ADD74
L_805ADD78:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 805ADD78
  c->lr=0x805ADD80u; f_805C234C(c); // 805ADD7C
  c->r[3]=c->r[31]|c->r[31]; // 805ADD80
  c->lr=0x805ADD88u; f_8062D488(c); // 805ADD84
  c->r[0]=R32(c->r[1]+0x00000014u); // 805ADD88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805ADD8C
  c->lr=c->r[0]; // 805ADD90
  c->r[1]=c->r[1]+0x00000010u; // 805ADD94
  return; // 805ADD98
}

// fn_805ADD9C
void f_805ADD9C(Ctx* __restrict c) {
  trace_call(0x805ADD9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ADD9C
  c->r[0]=c->lr; // 805ADDA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 805ADDA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805ADDA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 805ADDAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 805ADDB0
  W32(c->r[1]+0x00000010u,c->r[28]); // 805ADDB4
  c->r[28]=c->r[3]|c->r[3]; // 805ADDB8
  c->r[0]=R32(c->r[3]+0x00000010u); // 805ADDBC
  cmps(c,0,(int32_t)c->r[0],0); // 805ADDC0
  if (crb(c,2)) { goto L_805ADE38; } // 805ADDC4
  c->r[3]=c->r[0]|c->r[0]; // 805ADDC8
  c->r[4]=c->r[28]+0x00000014u; // 805ADDCC
  c->r[5]=0u+0x00000006u; // 805ADDD0
  c->lr=0x805ADDD8u; f_805C19E4(c); // 805ADDD4
  c->r[30]=c->r[28]|c->r[28]; // 805ADDD8
  c->r[29]=0u+0x00000000u; // 805ADDDC
  c->r[31]=0u+0x00000000u; // 805ADDE0
L_805ADDE4:;
  cmps(c,0,(int32_t)c->r[28],0); // 805ADDE4
  c->r[4]=c->r[28]|c->r[28]; // 805ADDE8
  if (crb(c,2)) { goto L_805ADDF4; } // 805ADDEC
  c->r[4]=c->r[28]+0x0000000Cu; // 805ADDF0
L_805ADDF4:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 805ADDF4
  c->lr=0x805ADDFCu; f_805ABCDC(c); // 805ADDF8
  c->r[3]=R32(c->r[30]+0x00000014u); // 805ADDFC
  c->lr=0x805ADE04u; f_8062D488(c); // 805ADE00
  c->r[29]=c->r[29]+0x00000001u; // 805ADE04
  W32(c->r[30]+0x00000014u,c->r[31]); // 805ADE08
  cmps(c,0,(int32_t)c->r[29],6); // 805ADE0C
  c->r[30]=c->r[30]+0x00000004u; // 805ADE10
  if (crb(c,0)) { IRQCHK(c); goto L_805ADDE4; } // 805ADE14
  c->r[12]=R32(c->r[28]+0x00000000u); // 805ADE18
  c->r[3]=c->r[28]|c->r[28]; // 805ADE1C
  c->r[4]=R32(c->r[28]+0x00000010u); // 805ADE20
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 805ADE24
  c->ctr=c->r[12]; // 805ADE28
  if (true) { c->lr=0x805ADE30u; dispatch(c,c->ctr); } // 805ADE2C
  c->r[0]=0u+0x00000000u; // 805ADE30
  W32(c->r[28]+0x00000010u,c->r[0]); // 805ADE34
L_805ADE38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805ADE38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805ADE3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 805ADE40
  c->r[29]=R32(c->r[1]+0x00000014u); // 805ADE44
  c->r[28]=R32(c->r[1]+0x00000010u); // 805ADE48
  c->lr=c->r[0]; // 805ADE4C
  c->r[1]=c->r[1]+0x00000020u; // 805ADE50
  return; // 805ADE54
}

// fn_805ADE58
void f_805ADE58(Ctx* __restrict c) {
  trace_call(0x805ADE58u);
  return; // 805ADE58
}

// fn_805ADE5C
void f_805ADE5C(Ctx* __restrict c) {
  trace_call(0x805ADE5Cu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805ADE5C
  f_805ADD54(c); return; // 805ADE60
}

// fn_805ADE64
void f_805ADE64(Ctx* __restrict c) {
  trace_call(0x805ADE64u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805ADE64
  f_805ADC14(c); return; // 805ADE68
}

// fn_805ADE6C
void f_805ADE6C(Ctx* __restrict c) {
  trace_call(0x805ADE6Cu);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 805ADE6C
  f_805ADC14(c); return; // 805ADE70
}

// fn_805ADE74
void f_805ADE74(Ctx* __restrict c) {
  trace_call(0x805ADE74u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 805ADE74
  f_805ADCFC(c); return; // 805ADE78
}

// fn_805ADE7C
void f_805ADE7C(Ctx* __restrict c) {
  trace_call(0x805ADE7Cu);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 805ADE7C
  f_805ADCBC(c); return; // 805ADE80
}

// fn_805ADE84
void f_805ADE84(Ctx* __restrict c) {
  trace_call(0x805ADE84u);
  {uint32_t ea=c->r[2]+0x00002900u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADE84
  c->r[4]=0u+0x80720000u; // 805ADE88
  {uint32_t ea=c->r[2]+0x00002904u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADE8C
  c->r[4]=c->r[4]+0x000029D0u; // 805ADE90
  c->r[0]=0u+0x00000001u; // 805ADE94
  W16(c->r[3]+0x00000006u,c->r[0]); // 805ADE98
  W32(c->r[3]+0x00000000u,c->r[4]); // 805ADE9C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 805ADEA0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 805ADEA4
  return; // 805ADEA8
}

// fn_805ADEAC
void f_805ADEAC(Ctx* __restrict c) {
  trace_call(0x805ADEACu);
  c->r[5]=R32(c->r[4]+0x00000008u); // 805ADEAC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADEB0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 805ADEB4
  c->r[4]=R32(c->r[4]+0x00000008u); // 805ADEB8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADEBC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 805ADEC0
  return; // 805ADEC4
}

// fn_805ADEC8
void f_805ADEC8(Ctx* __restrict c) {
  trace_call(0x805ADEC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805ADEC8
  c->r[0]=c->lr; // 805ADECC
  W32(c->r[1]+0x00000034u,c->r[0]); // 805ADED0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 805ADED4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 805ADED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805ADEDC
  c->r[31]=c->r[5]|c->r[5]; // 805ADEE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 805ADEE4
  c->r[30]=c->r[4]|c->r[4]; // 805ADEE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 805ADEEC
  c->r[29]=c->r[3]|c->r[3]; // 805ADEF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 805ADEF4
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805ADEF8
  c->r[4]=R32(c->r[6]+0x00000004u); // 805ADEFC
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 805ADF00
  c->r[0]=c->r[3]^c->r[4]; // 805ADF04
  c->r[0]=cntlz(c->r[0]); // 805ADF08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805ADF0C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805ADF10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805ADF14
  if (crb(c,2)) { goto L_805ADF40; } // 805ADF18
  c->r[3]=0u+0x806C0000u; // 805ADF1C
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 805ADF20
  W32(c->r[4]+0x00000000u,c->r[3]); // 805ADF24
  c->r[0]=c->r[3]+0x0000000Eu; // 805ADF28
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805ADF2C
  c->r[3]=mftb(c,268); // 805ADF30
  c->r[0]=c->r[4]+0x00000010u; // 805ADF34
  W32(c->r[4]+0x00000004u,c->r[3]); // 805ADF38
  W32(c->r[6]+0x00000004u,c->r[0]); // 805ADF3C
L_805ADF40:;
  c->r[3]=c->r[30]|c->r[30]; // 805ADF40
  c->lr=0x805ADF48u; f_805BA644(c); // 805ADF44
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADF48
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADF4C
  fcmp(c,0,c->f[1],c->f[0]); // 805ADF50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 805ADF54
  if (!crb(c,2)) { goto L_805AE0D8; } // 805ADF58
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805ADF5C
  c->r[4]=R32(c->r[5]+0x00000004u); // 805ADF60
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805ADF64
  c->r[0]=c->r[3]^c->r[4]; // 805ADF68
  c->r[0]=cntlz(c->r[0]); // 805ADF6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805ADF70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805ADF74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805ADF78
  if (crb(c,2)) { goto L_805ADFA0; } // 805ADF7C
  c->r[3]=0u+0x806C0000u; // 805ADF80
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 805ADF84
  c->r[0]=c->r[3]+0x00000016u; // 805ADF88
  W32(c->r[4]+0x00000000u,c->r[0]); // 805ADF8C
  c->r[3]=mftb(c,268); // 805ADF90
  W32(c->r[4]+0x00000004u,c->r[3]); // 805ADF94
  c->r[0]=c->r[4]+0x0000000Cu; // 805ADF98
  W32(c->r[5]+0x00000004u,c->r[0]); // 805ADF9C
L_805ADFA0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADFA0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADFA4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 805ADFA8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 805ADFAC
  {uint32_t ea=c->r[2]+0x00002908u; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADFB0
  {uint32_t ea=c->r[30]+0x000001B0u; WF32(ea,c->f[4]);} // 805ADFB4
  c->r[3]=R32(c->r[30]+0x00000008u); // 805ADFB8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 805ADFBC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADFC0
  {uint32_t ea=c->r[2]+0x0000290Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805ADFC4
  {uint32_t ea=c->r[30]+0x000001B8u; WF32(ea,c->f[3]);} // 805ADFC8
  {uint32_t ea=c->r[30]+0x000001BCu; WF32(ea,c->f[1]);} // 805ADFCC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 805ADFD0
  {uint32_t ea=c->r[30]+0x000001B4u; WF32(ea,c->f[1]);} // 805ADFD4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADFD8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 805ADFDC
  c->f[31]=c->ps1[31]=S(c->f[4]-c->f[1]); // 805ADFE0
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[2]); // 805ADFE4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 805ADFE8
  c->r[3]=R32(c->r[30]+0x00000008u); // 805ADFEC
  {uint32_t ea=c->r[30]+0x000001B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADFF0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 805ADFF4
  c->r[3]=R32(c->r[30]+0x00000008u); // 805ADFF8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 805ADFFC
  fcmp(c,0,c->f[0],c->f[1]); // 805AE000
  if (crb(c,2)) { goto L_805AE010; } // 805AE004
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[1]); // 805AE008
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 805AE00C
L_805AE010:;
  c->r[29]=0u+0x00000000u; // 805AE010
  c->r[28]=0u+0x00000000u; // 805AE014
  goto L_805AE070; // 805AE018
L_805AE01C:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 805AE01C
  c->r[5]=0u+0x00000000u; // 805AE020
  c->r[6]=0u+0x00000000u; // 805AE024
  c->r[3]=R32(c->r[3]+c->r[28]); // 805AE028
  goto L_805AE04C; // 805AE02C
L_805AE030:;
  c->r[4]=R32(c->r[3]+0x00000048u); // 805AE030
  c->r[5]=c->r[5]+0x00000001u; // 805AE034
  c->r[4]=R32(c->r[4]+c->r[6]); // 805AE038
  c->r[6]=c->r[6]+0x00000004u; // 805AE03C
  {uint32_t ea=c->r[4]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE040
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 805AE044
  {uint32_t ea=c->r[4]+0x0000013Cu; WF32(ea,c->f[0]);} // 805AE048
L_805AE04C:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 805AE04C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805AE050
  if (crb(c,0)) { IRQCHK(c); goto L_805AE030; } // 805AE054
  {uint32_t ea=c->r[30]+0x000001B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE058
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE05C
  c->r[4]=R32(c->r[30]+0x00000074u); // 805AE060
  c->lr=0x805AE068u; f_805B2E24(c); // 805AE064
  c->r[28]=c->r[28]+0x00000004u; // 805AE068
  c->r[29]=c->r[29]+0x00000001u; // 805AE06C
L_805AE070:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 805AE070
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 805AE074
  if (crb(c,0)) { IRQCHK(c); goto L_805AE01C; } // 805AE078
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AE07C
  c->f[1]=c->f[31]; // 805AE080
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AE084
  c->r[12]=R32(c->r[12]+0x00000040u); // 805AE088
  c->ctr=c->r[12]; // 805AE08C
  if (true) { c->lr=0x805AE094u; dispatch(c,c->ctr); } // 805AE090
  c->r[0]=R32(c->r[30]+0x000001B0u); // 805AE094
  W32(c->r[31]+0x00000000u,c->r[0]); // 805AE098
  c->r[0]=R32(c->r[30]+0x000001B4u); // 805AE09C
  W32(c->r[31]+0x00000004u,c->r[0]); // 805AE0A0
  c->r[0]=R32(c->r[30]+0x000001B8u); // 805AE0A4
  W32(c->r[31]+0x00000008u,c->r[0]); // 805AE0A8
  c->r[0]=R32(c->r[30]+0x000001BCu); // 805AE0AC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 805AE0B0
  c->r[3]=R32(c->r[30]+0x00000074u); // 805AE0B4
  c->r[0]=R32(c->r[30]+0x000001B0u); // 805AE0B8
  W32(c->r[3]+0x00000050u,c->r[0]); // 805AE0BC
  c->r[0]=R32(c->r[30]+0x000001B4u); // 805AE0C0
  W32(c->r[3]+0x00000054u,c->r[0]); // 805AE0C4
  c->r[0]=R32(c->r[30]+0x000001B8u); // 805AE0C8
  W32(c->r[3]+0x00000058u,c->r[0]); // 805AE0CC
  c->r[0]=R32(c->r[30]+0x000001BCu); // 805AE0D0
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 805AE0D4
L_805AE0D8:;
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE0D8
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE0DC
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE0E0
  c->r[0]=c->r[3]^c->r[4]; // 805AE0E4
  c->r[0]=cntlz(c->r[0]); // 805AE0E8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE0EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE0F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE0F4
  if (crb(c,2)) { goto L_805AE11C; } // 805AE0F8
  c->r[3]=0u+0x806C0000u; // 805AE0FC
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 805AE100
  c->r[0]=c->r[3]+0x00000022u; // 805AE104
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE108
  c->r[3]=mftb(c,268); // 805AE10C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE110
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE114
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE118
L_805AE11C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805AE11C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 805AE120
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 805AE124
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AE128
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AE12C
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AE130
  c->r[28]=R32(c->r[1]+0x00000010u); // 805AE134
  c->lr=c->r[0]; // 805AE138
  c->r[1]=c->r[1]+0x00000030u; // 805AE13C
  return; // 805AE140
}

// fn_805AE144
void f_805AE144(Ctx* __restrict c) {
  trace_call(0x805AE144u);
  return; // 805AE144
}

// fn_805AE148
void f_805AE148(Ctx* __restrict c) {
  trace_call(0x805AE148u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE148
  c->r[0]=c->lr; // 805AE14C
  W32(c->r[1]+0x00000034u,c->r[0]); // 805AE150
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 805AE154
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 805AE158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805AE15C
  c->r[31]=c->r[5]|c->r[5]; // 805AE160
  W32(c->r[1]+0x00000018u,c->r[30]); // 805AE164
  c->r[30]=c->r[4]|c->r[4]; // 805AE168
  W32(c->r[1]+0x00000014u,c->r[29]); // 805AE16C
  W32(c->r[1]+0x00000010u,c->r[28]); // 805AE170
  c->r[8]=R32(c->r[13]+0xFFFFE758u); // 805AE174
  c->r[7]=R32(c->r[8]+0x00000004u); // 805AE178
  c->r[6]=R32(c->r[8]+0x0000000Cu); // 805AE17C
  c->r[0]=c->r[6]^c->r[7]; // 805AE180
  c->r[0]=cntlz(c->r[0]); // 805AE184
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 805AE188
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE18C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE190
  if (crb(c,2)) { goto L_805AE1BC; } // 805AE194
  c->r[6]=0u+0x806C0000u; // 805AE198
  c->r[6]=c->r[6]+0xFFFFE1F0u; // 805AE19C
  W32(c->r[7]+0x00000000u,c->r[6]); // 805AE1A0
  c->r[0]=c->r[6]+0x00000016u; // 805AE1A4
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AE1A8
  c->r[6]=mftb(c,268); // 805AE1AC
  c->r[0]=c->r[7]+0x00000010u; // 805AE1B0
  W32(c->r[7]+0x00000004u,c->r[6]); // 805AE1B4
  W32(c->r[8]+0x00000004u,c->r[0]); // 805AE1B8
L_805AE1BC:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE1BC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE1C0
  fcmp(c,0,c->f[1],c->f[0]); // 805AE1C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 805AE1C8
  if (!crb(c,2)) { goto L_805AE304; } // 805AE1CC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE1D0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 805AE1D4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 805AE1D8
  {uint32_t ea=c->r[2]+0x00002908u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE1DC
  {uint32_t ea=c->r[4]+0x000001B0u; WF32(ea,c->f[4]);} // 805AE1E0
  c->r[6]=R32(c->r[4]+0x00000008u); // 805AE1E4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 805AE1E8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE1EC
  {uint32_t ea=c->r[2]+0x0000290Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE1F0
  {uint32_t ea=c->r[4]+0x000001B8u; WF32(ea,c->f[3]);} // 805AE1F4
  {uint32_t ea=c->r[4]+0x000001BCu; WF32(ea,c->f[1]);} // 805AE1F8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 805AE1FC
  {uint32_t ea=c->r[4]+0x000001B4u; WF32(ea,c->f[1]);} // 805AE200
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE204
  {uint32_t ea=c->r[6]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE208
  c->f[31]=c->ps1[31]=S(c->f[4]-c->f[1]); // 805AE20C
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[2]); // 805AE210
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[1]);} // 805AE214
  c->r[3]=R32(c->r[4]+0x00000008u); // 805AE218
  {uint32_t ea=c->r[4]+0x000001B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE21C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 805AE220
  c->r[3]=R32(c->r[4]+0x00000008u); // 805AE224
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE228
  fcmp(c,0,c->f[0],c->f[1]); // 805AE22C
  if (crb(c,2)) { goto L_805AE23C; } // 805AE230
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[1]); // 805AE234
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 805AE238
L_805AE23C:;
  c->r[29]=0u+0x00000000u; // 805AE23C
  c->r[28]=0u+0x00000000u; // 805AE240
  goto L_805AE29C; // 805AE244
L_805AE248:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 805AE248
  c->r[5]=0u+0x00000000u; // 805AE24C
  c->r[6]=0u+0x00000000u; // 805AE250
  c->r[3]=R32(c->r[3]+c->r[28]); // 805AE254
  goto L_805AE278; // 805AE258
L_805AE25C:;
  c->r[4]=R32(c->r[3]+0x00000048u); // 805AE25C
  c->r[5]=c->r[5]+0x00000001u; // 805AE260
  c->r[4]=R32(c->r[4]+c->r[6]); // 805AE264
  c->r[6]=c->r[6]+0x00000004u; // 805AE268
  {uint32_t ea=c->r[4]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE26C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 805AE270
  {uint32_t ea=c->r[4]+0x0000013Cu; WF32(ea,c->f[0]);} // 805AE274
L_805AE278:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 805AE278
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 805AE27C
  if (crb(c,0)) { IRQCHK(c); goto L_805AE25C; } // 805AE280
  {uint32_t ea=c->r[30]+0x000001B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE284
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE288
  c->r[4]=R32(c->r[30]+0x00000074u); // 805AE28C
  c->lr=0x805AE294u; f_805B2E24(c); // 805AE290
  c->r[28]=c->r[28]+0x00000004u; // 805AE294
  c->r[29]=c->r[29]+0x00000001u; // 805AE298
L_805AE29C:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 805AE29C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 805AE2A0
  if (crb(c,0)) { IRQCHK(c); goto L_805AE248; } // 805AE2A4
  c->r[3]=R32(c->r[30]+0x00000008u); // 805AE2A8
  c->f[1]=c->f[31]; // 805AE2AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AE2B0
  c->r[12]=R32(c->r[12]+0x00000040u); // 805AE2B4
  c->ctr=c->r[12]; // 805AE2B8
  if (true) { c->lr=0x805AE2C0u; dispatch(c,c->ctr); } // 805AE2BC
  c->r[0]=R32(c->r[30]+0x000001B0u); // 805AE2C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 805AE2C4
  c->r[0]=R32(c->r[30]+0x000001B4u); // 805AE2C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 805AE2CC
  c->r[0]=R32(c->r[30]+0x000001B8u); // 805AE2D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 805AE2D4
  c->r[0]=R32(c->r[30]+0x000001BCu); // 805AE2D8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 805AE2DC
  c->r[3]=R32(c->r[30]+0x00000074u); // 805AE2E0
  c->r[0]=R32(c->r[30]+0x000001B0u); // 805AE2E4
  W32(c->r[3]+0x00000050u,c->r[0]); // 805AE2E8
  c->r[0]=R32(c->r[30]+0x000001B4u); // 805AE2EC
  W32(c->r[3]+0x00000054u,c->r[0]); // 805AE2F0
  c->r[0]=R32(c->r[30]+0x000001B8u); // 805AE2F4
  W32(c->r[3]+0x00000058u,c->r[0]); // 805AE2F8
  c->r[0]=R32(c->r[30]+0x000001BCu); // 805AE2FC
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 805AE300
L_805AE304:;
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE304
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE308
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE30C
  c->r[0]=c->r[3]^c->r[4]; // 805AE310
  c->r[0]=cntlz(c->r[0]); // 805AE314
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE318
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE31C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE320
  if (crb(c,2)) { goto L_805AE348; } // 805AE324
  c->r[3]=0u+0x806C0000u; // 805AE328
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 805AE32C
  c->r[0]=c->r[3]+0x00000022u; // 805AE330
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE334
  c->r[3]=mftb(c,268); // 805AE338
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE33C
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE340
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE344
L_805AE348:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805AE348
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 805AE34C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 805AE350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805AE354
  c->r[30]=R32(c->r[1]+0x00000018u); // 805AE358
  c->r[29]=R32(c->r[1]+0x00000014u); // 805AE35C
  c->r[28]=R32(c->r[1]+0x00000010u); // 805AE360
  c->lr=c->r[0]; // 805AE364
  c->r[1]=c->r[1]+0x00000030u; // 805AE368
  return; // 805AE36C
}

// fn_805AE370
void f_805AE370(Ctx* __restrict c) {
  trace_call(0x805AE370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE370
  c->r[0]=c->lr; // 805AE374
  cmps(c,0,(int32_t)c->r[3],0); // 805AE378
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AE37C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AE380
  c->r[31]=c->r[3]|c->r[3]; // 805AE384
  if (crb(c,2)) { goto L_805AE3A8; } // 805AE388
  cmps(c,0,(int32_t)c->r[4],0); // 805AE38C
  if (!crb(c,1)) { goto L_805AE3A8; } // 805AE390
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AE394
  c->r[4]=c->r[31]|c->r[31]; // 805AE398
  c->r[5]=R16(c->r[31]+0x00000004u); // 805AE39C
  c->r[6]=0u+0x00000016u; // 805AE3A0
  c->lr=0x805AE3A8u; f_8062C630(c); // 805AE3A4
L_805AE3A8:;
  c->r[3]=c->r[31]|c->r[31]; // 805AE3A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AE3AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AE3B0
  c->lr=c->r[0]; // 805AE3B4
  c->r[1]=c->r[1]+0x00000010u; // 805AE3B8
  return; // 805AE3BC
}

// fn_805AE3C0
void f_805AE3C0(Ctx* __restrict c) {
  trace_call(0x805AE3C0u);
  c->r[6]=0u+0x80720000u; // 805AE3C0
  {uint32_t ea=c->r[6]+0x000029C0u; c->r[5]=R32(ea); c->r[6]=ea;} // 805AE3C4
  c->r[7]=0u+0x80860000u; // 805AE3C8
  {uint32_t ea=c->r[7]+0xFFFFDDD0u; W32(ea,c->r[5]); c->r[7]=ea;} // 805AE3CC
  c->r[4]=R32(c->r[6]+0x00000004u); // 805AE3D0
  c->r[3]=R32(c->r[6]+0x00000008u); // 805AE3D4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805AE3D8
  W32(c->r[7]+0x00000004u,c->r[4]); // 805AE3DC
  W32(c->r[7]+0x00000008u,c->r[3]); // 805AE3E0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AE3E4
  return; // 805AE3E8
}

// fn_805AE3EC
void f_805AE3EC(Ctx* __restrict c) {
  trace_call(0x805AE3ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE3EC
  c->r[0]=c->lr; // 805AE3F0
  c->r[3]=0u+0x806C0000u; // 805AE3F4
  c->r[4]=0u+0x806C0000u; // 805AE3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 805AE3FC
  c->r[3]=c->r[3]+0xFFFFE218u; // 805AE400
  c->r[4]=c->r[4]+0xFFFFE230u; // 805AE404
  c->r[5]=0u+0x80860000u; // 805AE408
  W32(c->r[1]+0x00000008u,c->r[3]); // 805AE40C
  c->r[0]=0u+0x00000001u; // 805AE410
  c->r[3]=0u+0x80860000u; // 805AE414
  c->r[4]=c->r[4]+0x00000013u; // 805AE418
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AE41C
  c->r[0]=0u+0x00000000u; // 805AE420
  c->r[3]=c->r[3]+0xFFFFDDE0u; // 805AE424
  c->r[5]=c->r[5]+0x000003A0u; // 805AE428
  W32(c->r[1]+0x00000010u,c->r[0]); // 805AE42C
  c->r[6]=0u+0x0000000Cu; // 805AE430
  c->r[7]=0u+0x00000000u; // 805AE434
  c->r[8]=0u+0x00000000u; // 805AE438
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AE43C
  c->r[9]=0u+0x00000000u; // 805AE440
  c->r[10]=0u+0x00000000u; // 805AE444
  W32(c->r[1]+0x00000018u,c->r[0]); // 805AE448
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 805AE44C
  c->lr=0x805AE454u; f_8062E0DC(c); // 805AE450
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AE454
  c->lr=c->r[0]; // 805AE458
  c->r[1]=c->r[1]+0x00000020u; // 805AE45C
  return; // 805AE460
}

// fn_805AE464
void f_805AE464(Ctx* __restrict c) {
  trace_call(0x805AE464u);
  c->r[6]=0u+0x80720000u; // 805AE464
  {uint32_t ea=c->r[6]+0x00002A20u; c->r[5]=R32(ea); c->r[6]=ea;} // 805AE468
  c->r[7]=0u+0x80860000u; // 805AE46C
  {uint32_t ea=c->r[7]+0xFFFFDE10u; W32(ea,c->r[5]); c->r[7]=ea;} // 805AE470
  c->r[4]=R32(c->r[6]+0x00000004u); // 805AE474
  c->r[3]=R32(c->r[6]+0x00000008u); // 805AE478
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805AE47C
  W32(c->r[7]+0x00000004u,c->r[4]); // 805AE480
  W32(c->r[7]+0x00000008u,c->r[3]); // 805AE484
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AE488
  return; // 805AE48C
}

// fn_805AE490
void f_805AE490(Ctx* __restrict c) {
  trace_call(0x805AE490u);
  {uint32_t ea=c->r[2]+0x00002910u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE490
  c->r[5]=0u+0x80720000u; // 805AE494
  c->r[6]=0u+0x00000001u; // 805AE498
  c->r[0]=0u+0x00000000u; // 805AE49C
  {uint32_t ea=c->r[2]+0x00002914u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE4A0
  c->r[5]=c->r[5]+0x00002AA4u; // 805AE4A4
  {uint32_t ea=c->r[2]+0x00002918u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE4A8
  W16(c->r[3]+0x00000006u,c->r[6]); // 805AE4AC
  W32(c->r[3]+0x00000000u,c->r[5]); // 805AE4B0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 805AE4B4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 805AE4B8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 805AE4BC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 805AE4C0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 805AE4C4
  W32(c->r[3]+0x00000028u,c->r[0]); // 805AE4C8
  W8(c->r[3]+0x00000010u,c->r[6]); // 805AE4CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 805AE4D0
  return; // 805AE4D4
}

// fn_805AE4D8
void f_805AE4D8(Ctx* __restrict c) {
  trace_call(0x805AE4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE4D8
  c->r[0]=c->lr; // 805AE4DC
  cmps(c,0,(int32_t)c->r[3],0); // 805AE4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AE4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AE4E8
  c->r[31]=c->r[3]|c->r[3]; // 805AE4EC
  if (crb(c,2)) { goto L_805AE510; } // 805AE4F0
  cmps(c,0,(int32_t)c->r[4],0); // 805AE4F4
  if (!crb(c,1)) { goto L_805AE510; } // 805AE4F8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AE4FC
  c->r[4]=c->r[31]|c->r[31]; // 805AE500
  c->r[5]=R16(c->r[31]+0x00000004u); // 805AE504
  c->r[6]=0u+0x00000016u; // 805AE508
  c->lr=0x805AE510u; f_8062C630(c); // 805AE50C
L_805AE510:;
  c->r[3]=c->r[31]|c->r[31]; // 805AE510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AE514
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AE518
  c->lr=c->r[0]; // 805AE51C
  c->r[1]=c->r[1]+0x00000010u; // 805AE520
  return; // 805AE524
}

// fn_805AE528
void f_805AE528(Ctx* __restrict c) {
  trace_call(0x805AE528u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AE528
  c->r[12]=c->r[1]|c->r[1]; // 805AE52C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805AE530
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE534
  c->r[0]=c->lr; // 805AE538
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AE53C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AE540
  c->r[31]=c->r[3]|c->r[3]; // 805AE544
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE548
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 805AE54C
  c->r[6]=R32(c->r[5]+0x00000004u); // 805AE550
  c->r[0]=c->r[4]^c->r[6]; // 805AE554
  c->r[0]=cntlz(c->r[0]); // 805AE558
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 805AE55C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE560
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AE564
  c->r[0]=0u-c->r[4]; // 805AE568
  c->r[0]=c->r[0]|c->r[4]; // 805AE56C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AE570
  if (crb(c,2)) { goto L_805AE594; } // 805AE574
  c->r[4]=0u+0x806C0000u; // 805AE578
  c->r[4]=c->r[4]+0xFFFFE290u; // 805AE57C
  W32(c->r[6]+0x00000000u,c->r[4]); // 805AE580
  c->r[4]=mftb(c,268); // 805AE584
  c->r[0]=c->r[6]+0x0000000Cu; // 805AE588
  W32(c->r[6]+0x00000004u,c->r[4]); // 805AE58C
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE590
L_805AE594:;
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 805AE594
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 805AE598
  c->lr=0x805AE5A0u; f_805C4D5C(c); // 805AE59C
  c->r[6]=R32(c->r[13]+0xFFFFE750u); // 805AE5A0
  c->r[4]=c->r[3]|c->r[3]; // 805AE5A4
  c->r[5]=R32(c->r[6]+0x00000010u); // 805AE5A8
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 805AE5AC
  c->r[5]=c->r[0]-c->r[5]; // 805AE5B0
  c->r[0]=c->r[5]+0xFFFFFFF0u; // 805AE5B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805AE5B8
  if (!crb(c,1)) { goto L_805AE64C; } // 805AE5BC
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AE5C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AE5C4
  c->r[12]=R32(c->r[12]+0x00000068u); // 805AE5C8
  c->ctr=c->r[12]; // 805AE5CC
  if (true) { c->lr=0x805AE5D4u; dispatch(c,c->ctr); } // 805AE5D0
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 805AE5D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AE5D8
  c->r[0]=0u-c->r[3]; // 805AE5DC
  c->r[0]=c->r[0]|c->r[3]; // 805AE5E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AE5E4
  if (!crb(c,2)) { goto L_805AE64C; } // 805AE5E8
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AE5EC
  c->r[0]=0u+0x00000001u; // 805AE5F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 805AE5F4
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AE5F8
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AE5FC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AE600
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AE604
  c->r[0]=c->r[3]^c->r[5]; // 805AE608
  c->r[0]=cntlz(c->r[0]); // 805AE60C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE610
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE614
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AE618
  c->r[0]=0u-c->r[3]; // 805AE61C
  c->r[0]=c->r[0]|c->r[3]; // 805AE620
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AE624
  if (crb(c,2)) { goto L_805AE644; } // 805AE628
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AE62C
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AE630
  c->r[3]=mftb(c,268); // 805AE634
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AE638
  c->r[0]=c->r[5]+0x0000000Cu; // 805AE63C
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AE640
L_805AE644:;
  c->r[3]=0u+0x00000001u; // 805AE644
  goto L_805AE750; // 805AE648
L_805AE64C:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE64C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE650
  {uint32_t ea=c->r[2]+0x00002910u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE654
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 805AE658
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 805AE65C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805AE660
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 805AE664
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 805AE668
  fcmp(c,0,c->f[2],c->f[1]); // 805AE66C
  if (!crb(c,2)) { goto L_805AE678; } // 805AE670
  goto L_805AE680; // 805AE674
L_805AE678:;
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE678
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 805AE67C
L_805AE680:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 805AE680
  c->r[5]=c->r[1]+0x00000010u; // 805AE684
  c->r[0]=R32(c->r[1]+0x00000010u); // 805AE688
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AE68C
  W32(c->r[3]+0x000001B0u,c->r[0]); // 805AE690
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AE694
  W32(c->r[3]+0x000001B4u,c->r[0]); // 805AE698
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AE69C
  W32(c->r[3]+0x000001B8u,c->r[0]); // 805AE6A0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 805AE6A4
  W32(c->r[3]+0x000001BCu,c->r[0]); // 805AE6A8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AE6AC
  c->r[0]=R32(c->r[1]+0x00000010u); // 805AE6B0
  c->r[3]=R32(c->r[3]+0x00000074u); // 805AE6B4
  W32(c->r[3]+0x00000050u,c->r[0]); // 805AE6B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AE6BC
  W32(c->r[3]+0x00000054u,c->r[0]); // 805AE6C0
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AE6C4
  W32(c->r[3]+0x00000058u,c->r[0]); // 805AE6C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 805AE6CC
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 805AE6D0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 805AE6D4
  c->r[3]=R32(c->r[4]+0x0000004Cu); // 805AE6D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AE6DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 805AE6E0
  c->ctr=c->r[12]; // 805AE6E4
  if (true) { c->lr=0x805AE6ECu; dispatch(c,c->ctr); } // 805AE6E8
  c->r[3]=c->r[31]|c->r[31]; // 805AE6EC
  c->r[4]=c->r[1]+0x00000010u; // 805AE6F0
  c->lr=0x805AE6F8u; f_805AFA48(c); // 805AE6F4
  c->r[0]=0u+0x00000000u; // 805AE6F8
  W8(c->r[31]+0x00000010u,c->r[0]); // 805AE6FC
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AE700
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AE704
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AE708
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AE70C
  c->r[0]=c->r[3]^c->r[5]; // 805AE710
  c->r[0]=cntlz(c->r[0]); // 805AE714
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE718
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE71C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AE720
  c->r[0]=0u-c->r[3]; // 805AE724
  c->r[0]=c->r[0]|c->r[3]; // 805AE728
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AE72C
  if (crb(c,2)) { goto L_805AE74C; } // 805AE730
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AE734
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AE738
  c->r[3]=mftb(c,268); // 805AE73C
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AE740
  c->r[0]=c->r[5]+0x0000000Cu; // 805AE744
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AE748
L_805AE74C:;
  c->r[3]=0u+0x00000000u; // 805AE74C
L_805AE750:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AE750
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AE754
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AE758
  c->lr=c->r[0]; // 805AE75C
  c->r[1]=c->r[10]|c->r[10]; // 805AE760
  return; // 805AE764
}

// fn_805AE768
void f_805AE768(Ctx* __restrict c) {
  trace_call(0x805AE768u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AE768
  c->r[12]=c->r[1]|c->r[1]; // 805AE76C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805AE770
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE774
  c->r[0]=c->lr; // 805AE778
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AE77C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AE780
  c->r[31]=c->r[3]|c->r[3]; // 805AE784
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805AE788
  c->r[5]=R32(c->r[6]+0x00000004u); // 805AE78C
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 805AE790
  c->r[0]=c->r[4]^c->r[5]; // 805AE794
  c->r[0]=cntlz(c->r[0]); // 805AE798
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 805AE79C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE7A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE7A4
  if (crb(c,2)) { goto L_805AE7C8; } // 805AE7A8
  c->r[4]=0u+0x806C0000u; // 805AE7AC
  c->r[4]=c->r[4]+0xFFFFE290u; // 805AE7B0
  W32(c->r[5]+0x00000000u,c->r[4]); // 805AE7B4
  c->r[4]=mftb(c,268); // 805AE7B8
  c->r[0]=c->r[5]+0x0000000Cu; // 805AE7BC
  W32(c->r[5]+0x00000004u,c->r[4]); // 805AE7C0
  W32(c->r[6]+0x00000004u,c->r[0]); // 805AE7C4
L_805AE7C8:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 805AE7C8
  cmps(c,0,(int32_t)c->r[0],0); // 805AE7CC
  if (crb(c,2)) { goto L_805AE81C; } // 805AE7D0
  c->r[3]=c->r[31]|c->r[31]; // 805AE7D4
  c->lr=0x805AE7DCu; f_805AE9E4(c); // 805AE7D8
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805AE7DC
  c->r[5]=R32(c->r[6]+0x00000004u); // 805AE7E0
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 805AE7E4
  c->r[0]=c->r[4]^c->r[5]; // 805AE7E8
  c->r[0]=cntlz(c->r[0]); // 805AE7EC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 805AE7F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE7F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE7F8
  if (crb(c,2)) { goto L_805AE9CC; } // 805AE7FC
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AE800
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AE804
  c->r[4]=mftb(c,268); // 805AE808
  W32(c->r[5]+0x00000004u,c->r[4]); // 805AE80C
  c->r[0]=c->r[5]+0x0000000Cu; // 805AE810
  W32(c->r[6]+0x00000004u,c->r[0]); // 805AE814
  goto L_805AE9CC; // 805AE818
L_805AE81C:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE81C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE820
  {uint32_t ea=c->r[2]+0x00002910u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AE824
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 805AE828
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 805AE82C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805AE830
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 805AE834
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 805AE838
  fcmp(c,0,c->f[2],c->f[1]); // 805AE83C
  if (!crb(c,2)) { goto L_805AE848; } // 805AE840
  goto L_805AE850; // 805AE844
L_805AE848:;
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE848
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 805AE84C
L_805AE850:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 805AE850
  c->r[3]=c->r[31]|c->r[31]; // 805AE854
  c->r[4]=c->r[1]+0x00000010u; // 805AE858
  c->r[12]=R32(c->r[31]+0x00000000u); // 805AE85C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 805AE860
  c->ctr=c->r[12]; // 805AE864
  if (true) { c->lr=0x805AE86Cu; dispatch(c,c->ctr); } // 805AE868
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AE86C
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AE870
  cmps(c,0,(int32_t)c->r[0],1); // 805AE874
  if (!crb(c,2)) { goto L_805AE8C8; } // 805AE878
  c->r[0]=0u+0x00000002u; // 805AE87C
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AE880
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE884
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE888
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE88C
  c->r[0]=c->r[3]^c->r[4]; // 805AE890
  c->r[0]=cntlz(c->r[0]); // 805AE894
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE898
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE89C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE8A0
  if (crb(c,2)) { goto L_805AE8C0; } // 805AE8A4
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AE8A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE8AC
  c->r[3]=mftb(c,268); // 805AE8B0
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE8B4
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE8B8
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE8BC
L_805AE8C0:;
  c->r[3]=0u+0x00000002u; // 805AE8C0
  goto L_805AE9CC; // 805AE8C4
L_805AE8C8:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AE8C8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AE8CC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AE8D0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 805AE8D4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 805AE8D8
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 805AE8DC
  cmps(c,0,(int32_t)c->r[0],0); // 805AE8E0
  if (crb(c,2)) { goto L_805AE97C; } // 805AE8E4
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE8E8
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE8EC
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE8F0
  c->r[0]=c->r[3]^c->r[4]; // 805AE8F4
  c->r[0]=cntlz(c->r[0]); // 805AE8F8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE8FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE900
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE904
  if (crb(c,2)) { goto L_805AE92C; } // 805AE908
  c->r[3]=0u+0x806C0000u; // 805AE90C
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AE910
  c->r[0]=c->r[3]+0x0000000Au; // 805AE914
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE918
  c->r[3]=mftb(c,268); // 805AE91C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE920
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE924
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE928
L_805AE92C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AE92C
  c->r[4]=c->r[1]+0x00000010u; // 805AE930
  c->lr=0x805AE938u; f_805B5188(c); // 805AE934
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE938
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE93C
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE940
  c->r[0]=c->r[3]^c->r[4]; // 805AE944
  c->r[0]=cntlz(c->r[0]); // 805AE948
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE94C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE954
  if (crb(c,2)) { goto L_805AE97C; } // 805AE958
  c->r[3]=0u+0x806C0000u; // 805AE95C
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AE960
  c->r[0]=c->r[3]+0x0000001Au; // 805AE964
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE968
  c->r[3]=mftb(c,268); // 805AE96C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE970
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE974
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE978
L_805AE97C:;
  c->r[3]=0u+0x00000001u; // 805AE97C
  c->r[0]=0u+0x00000000u; // 805AE980
  W8(c->r[31]+0x00000010u,c->r[3]); // 805AE984
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AE988
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AE98C
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AE990
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AE994
  c->r[0]=c->r[3]^c->r[4]; // 805AE998
  c->r[0]=cntlz(c->r[0]); // 805AE99C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AE9A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AE9A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AE9A8
  if (crb(c,2)) { goto L_805AE9C8; } // 805AE9AC
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AE9B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AE9B4
  c->r[3]=mftb(c,268); // 805AE9B8
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AE9BC
  c->r[0]=c->r[4]+0x0000000Cu; // 805AE9C0
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AE9C4
L_805AE9C8:;
  c->r[3]=0u+0x00000000u; // 805AE9C8
L_805AE9CC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AE9CC
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AE9D0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AE9D4
  c->lr=c->r[0]; // 805AE9D8
  c->r[1]=c->r[10]|c->r[10]; // 805AE9DC
  return; // 805AE9E0
}

// fn_805AE9E4
void f_805AE9E4(Ctx* __restrict c) {
  trace_call(0x805AE9E4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AE9E4
  c->r[12]=c->r[1]|c->r[1]; // 805AE9E8
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 805AE9EC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AE9F0
  c->r[0]=c->lr; // 805AE9F4
  c->r[4]=0u+0x00000000u; // 805AE9F8
  c->r[5]=0u+0x00000001u; // 805AE9FC
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AEA00
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805AEA04
  c->r[31]=c->r[3]|c->r[3]; // 805AEA08
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 805AEA0C
  c->lr=0x805AEA14u; f_805BEA70(c); // 805AEA10
  c->r[0]=R32(c->r[31]+0x00000028u); // 805AEA14
  cmpu(c,0,c->r[0],0x00000003u); // 805AEA18
  if (!crb(c,2)) { goto L_805AEA58; } // 805AEA1C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AEA20
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEA24
  {uint32_t ea=c->r[2]+0x00002910u; c->f[3]=c->ps1[3]=RF32(ea);} // 805AEA28
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 805AEA2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 805AEA30
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 805AEA34
  fcmp(c,0,c->f[3],c->f[1]); // 805AEA38
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 805AEA3C
  if (!crb(c,2)) { goto L_805AEA48; } // 805AEA40
  goto L_805AEA50; // 805AEA44
L_805AEA48:;
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEA48
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 805AEA4C
L_805AEA50:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 805AEA50
  goto L_805AEA90; // 805AEA54
L_805AEA58:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEA58
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEA5C
  {uint32_t ea=c->r[2]+0x00002910u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AEA60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 805AEA64
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 805AEA68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805AEA6C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 805AEA70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 805AEA74
  fcmp(c,0,c->f[2],c->f[1]); // 805AEA78
  if (!crb(c,2)) { goto L_805AEA84; } // 805AEA7C
  goto L_805AEA8C; // 805AEA80
L_805AEA84:;
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEA84
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 805AEA88
L_805AEA8C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 805AEA8C
L_805AEA90:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 805AEA90
  c->r[3]=c->r[31]|c->r[31]; // 805AEA94
  c->r[4]=c->r[1]+0x00000010u; // 805AEA98
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 805AEA9C
  c->ctr=c->r[12]; // 805AEAA0
  if (true) { c->lr=0x805AEAA8u; dispatch(c,c->ctr); } // 805AEAA4
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AEAA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AEAAC
  cmps(c,0,(int32_t)c->r[0],1); // 805AEAB0
  if (!crb(c,2)) { goto L_805AEB04; } // 805AEAB4
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AEAB8
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AEABC
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AEAC0
  c->r[0]=c->r[3]^c->r[4]; // 805AEAC4
  c->r[0]=cntlz(c->r[0]); // 805AEAC8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AEACC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AEAD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AEAD4
  if (crb(c,2)) { goto L_805AEAFC; } // 805AEAD8
  c->r[3]=0u+0x806C0000u; // 805AEADC
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AEAE0
  c->r[0]=c->r[3]+0x0000001Au; // 805AEAE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AEAE8
  c->r[3]=mftb(c,268); // 805AEAEC
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AEAF0
  c->r[0]=c->r[4]+0x0000000Cu; // 805AEAF4
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AEAF8
L_805AEAFC:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 805AEAFC
  goto L_805AEBD8; // 805AEB00
L_805AEB04:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 805AEB04
  cmpu(c,0,c->r[0],0x00000002u); // 805AEB08
  if (!crb(c,2)) { goto L_805AEBCC; } // 805AEB0C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEB10
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEB14
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AEB18
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 805AEB1C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 805AEB20
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 805AEB24
  cmps(c,0,(int32_t)c->r[0],0); // 805AEB28
  if (crb(c,2)) { goto L_805AEBC4; } // 805AEB2C
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AEB30
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AEB34
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AEB38
  c->r[0]=c->r[3]^c->r[4]; // 805AEB3C
  c->r[0]=cntlz(c->r[0]); // 805AEB40
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AEB44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AEB48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AEB4C
  if (crb(c,2)) { goto L_805AEB74; } // 805AEB50
  c->r[3]=0u+0x806C0000u; // 805AEB54
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AEB58
  c->r[0]=c->r[3]+0x0000000Au; // 805AEB5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AEB60
  c->r[3]=mftb(c,268); // 805AEB64
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AEB68
  c->r[0]=c->r[4]+0x0000000Cu; // 805AEB6C
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AEB70
L_805AEB74:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 805AEB74
  c->r[4]=c->r[1]+0x00000010u; // 805AEB78
  c->lr=0x805AEB80u; f_805B5188(c); // 805AEB7C
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AEB80
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AEB84
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AEB88
  c->r[0]=c->r[3]^c->r[4]; // 805AEB8C
  c->r[0]=cntlz(c->r[0]); // 805AEB90
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AEB94
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AEB98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AEB9C
  if (crb(c,2)) { goto L_805AEBC4; } // 805AEBA0
  c->r[3]=0u+0x806C0000u; // 805AEBA4
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AEBA8
  c->r[0]=c->r[3]+0x0000001Au; // 805AEBAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AEBB0
  c->r[3]=mftb(c,268); // 805AEBB4
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AEBB8
  c->r[0]=c->r[4]+0x0000000Cu; // 805AEBBC
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AEBC0
L_805AEBC4:;
  c->r[0]=0u+0x00000001u; // 805AEBC4
  W8(c->r[31]+0x00000010u,c->r[0]); // 805AEBC8
L_805AEBCC:;
  c->r[0]=0u+0x00000000u; // 805AEBCC
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AEBD0
  c->r[3]=0u+0x00000000u; // 805AEBD4
L_805AEBD8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805AEBD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805AEBDC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805AEBE0
  c->lr=c->r[0]; // 805AEBE4
  c->r[1]=c->r[10]|c->r[10]; // 805AEBE8
  return; // 805AEBEC
}

// fn_805AEBF0
void f_805AEBF0(Ctx* __restrict c) {
  trace_call(0x805AEBF0u);
  {uint32_t ea=c->r[2]+0x00002914u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEBF0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AEBF4
  fcmp(c,0,c->f[0],c->f[2]); // 805AEBF8
  if (crb(c,2)) { goto L_805AEC20; } // 805AEBFC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC00
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEC04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 805AEC08
  c->f[2]=std::fabs(c->f[2]); // 805AEC0C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805AEC10
  fcmp(c,0,c->f[2],c->f[0]); // 805AEC14
  if (!crb(c,0)) { goto L_805AEC20; } // 805AEC18
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 805AEC1C
L_805AEC20:;
  {uint32_t ea=c->r[2]+0x00002914u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC20
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEC24
  fcmp(c,0,c->f[1],c->f[0]); // 805AEC28
  if (!crb(c,2)) { goto L_805AEC38; } // 805AEC2C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC30
  return; // 805AEC34
L_805AEC38:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC38
  fcmp(c,0,c->f[1],c->f[0]); // 805AEC3C
  if (crb(c,0)) return; // 805AEC40
  c->f[1]=c->f[0]; // 805AEC44
  return; // 805AEC48
}

// fn_805AEC4C
void f_805AEC4C(Ctx* __restrict c) {
  trace_call(0x805AEC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AEC4C
  c->r[0]=c->lr; // 805AEC50
  {uint32_t ea=c->r[2]+0x00002914u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEC54
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AEC58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AEC5C
  c->r[31]=c->r[3]|c->r[3]; // 805AEC60
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AEC64
  fcmp(c,0,c->f[0],c->f[2]); // 805AEC68
  if (crb(c,2)) { goto L_805AEC90; } // 805AEC6C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC70
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEC74
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 805AEC78
  c->f[2]=std::fabs(c->f[2]); // 805AEC7C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805AEC80
  fcmp(c,0,c->f[2],c->f[0]); // 805AEC84
  if (!crb(c,0)) { goto L_805AEC90; } // 805AEC88
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 805AEC8C
L_805AEC90:;
  {uint32_t ea=c->r[2]+0x00002914u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AEC90
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AEC94
  fcmp(c,0,c->f[1],c->f[0]); // 805AEC98
  if (!crb(c,2)) { goto L_805AECA8; } // 805AEC9C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AECA0
  goto L_805AECBC; // 805AECA4
L_805AECA8:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AECA8
  fcmp(c,0,c->f[2],c->f[0]); // 805AECAC
  if (!crb(c,0)) { goto L_805AECB8; } // 805AECB0
  goto L_805AECBC; // 805AECB4
L_805AECB8:;
  c->f[2]=c->f[0]; // 805AECB8
L_805AECBC:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 805AECBC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AECC0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 805AECC4
  fcmp(c,0,c->f[1],c->f[0]); // 805AECC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 805AECCC
  if (!crb(c,2)) { goto L_805AED6C; } // 805AECD0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 805AECD4
  c->r[0]=R32(c->r[4]+0x00000154u); // 805AECD8
  cmps(c,0,(int32_t)c->r[0],0); // 805AECDC
  if (crb(c,2)) { goto L_805AED6C; } // 805AECE0
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805AECE4
  c->r[5]=R32(c->r[6]+0x00000004u); // 805AECE8
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 805AECEC
  c->r[0]=c->r[4]^c->r[5]; // 805AECF0
  c->r[0]=cntlz(c->r[0]); // 805AECF4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 805AECF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AECFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AED00
  if (crb(c,2)) { goto L_805AED28; } // 805AED04
  c->r[4]=0u+0x806C0000u; // 805AED08
  c->r[4]=c->r[4]+0xFFFFE290u; // 805AED0C
  c->r[0]=c->r[4]+0x0000001Du; // 805AED10
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AED14
  c->r[4]=mftb(c,268); // 805AED18
  W32(c->r[5]+0x00000004u,c->r[4]); // 805AED1C
  c->r[0]=c->r[5]+0x0000000Cu; // 805AED20
  W32(c->r[6]+0x00000004u,c->r[0]); // 805AED24
L_805AED28:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 805AED28
  c->lr=0x805AED30u; f_805B4EA4(c); // 805AED2C
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AED30
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AED34
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AED38
  c->r[0]=c->r[3]^c->r[4]; // 805AED3C
  c->r[0]=cntlz(c->r[0]); // 805AED40
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AED44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AED48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AED4C
  if (crb(c,2)) { goto L_805AED6C; } // 805AED50
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AED54
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AED58
  c->r[3]=mftb(c,268); // 805AED5C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AED60
  c->r[0]=c->r[4]+0x0000000Cu; // 805AED64
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AED68
L_805AED6C:;
  c->r[0]=0u+0x00000000u; // 805AED6C
  W32(c->r[31]+0x00000028u,c->r[0]); // 805AED70
  c->r[3]=0u+0x00000000u; // 805AED74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AED78
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AED7C
  c->lr=c->r[0]; // 805AED80
  c->r[1]=c->r[1]+0x00000010u; // 805AED84
  return; // 805AED88
}

// fn_805AED8C
void f_805AED8C(Ctx* __restrict c) {
  trace_call(0x805AED8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AED8C
  c->r[0]=c->lr; // 805AED90
  W32(c->r[1]+0x00000014u,c->r[0]); // 805AED94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805AED98
  c->r[31]=c->r[3]|c->r[3]; // 805AED9C
  c->r[0]=R32(c->r[3]+0x00000028u); // 805AEDA0
  cmpu(c,0,c->r[0],0x00000001u); // 805AEDA4
  if (crb(c,1)) { goto L_805AEDBC; } // 805AEDA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AEDAC
  c->r[12]=R32(c->r[12]+0x00000018u); // 805AEDB0
  c->ctr=c->r[12]; // 805AEDB4
  if (true) { c->lr=0x805AEDBCu; dispatch(c,c->ctr); } // 805AEDB8
L_805AEDBC:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 805AEDBC
  cmps(c,0,(int32_t)c->r[0],0); // 805AEDC0
  if (crb(c,2)) { goto L_805AEDD0; } // 805AEDC4
  cmpu(c,0,c->r[0],0x00000002u); // 805AEDC8
  if (!crb(c,2)) { goto L_805AEDE4; } // 805AEDCC
L_805AEDD0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 805AEDD0
  c->r[3]=c->r[31]|c->r[31]; // 805AEDD4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AEDD8
  c->ctr=c->r[12]; // 805AEDDC
  if (true) { c->lr=0x805AEDE4u; dispatch(c,c->ctr); } // 805AEDE0
L_805AEDE4:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 805AEDE4
  cmps(c,0,(int32_t)c->r[0],0); // 805AEDE8
  if (crb(c,2)) { goto L_805AEDF8; } // 805AEDEC
  cmpu(c,0,c->r[0],0x00000003u); // 805AEDF0
  if (!crb(c,2)) { goto L_805AEE0C; } // 805AEDF4
L_805AEDF8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 805AEDF8
  c->r[3]=c->r[31]|c->r[31]; // 805AEDFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AEE00
  c->ctr=c->r[12]; // 805AEE04
  if (true) { c->lr=0x805AEE0Cu; dispatch(c,c->ctr); } // 805AEE08
L_805AEE0C:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 805AEE0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805AEE10
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AEE14
  c->lr=c->r[0]; // 805AEE18
  c->r[1]=c->r[1]+0x00000010u; // 805AEE1C
  return; // 805AEE20
}

// fn_805AEE24
void f_805AEE24(Ctx* __restrict c) {
  trace_call(0x805AEE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AEE24
  c->r[0]=c->lr; // 805AEE28
  W32(c->r[1]+0x00000064u,c->r[0]); // 805AEE2C
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805AEE30
  c->r[24]=c->r[3]|c->r[3]; // 805AEE34
  c->r[25]=c->r[4]|c->r[4]; // 805AEE38
  c->r[26]=c->r[5]|c->r[5]; // 805AEE3C
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805AEE40
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 805AEE44
  c->r[4]=R32(c->r[6]+0x00000004u); // 805AEE48
  c->r[0]=c->r[3]^c->r[4]; // 805AEE4C
  c->r[0]=cntlz(c->r[0]); // 805AEE50
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AEE54
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AEE58
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AEE5C
  c->r[0]=0u-c->r[3]; // 805AEE60
  c->r[0]=c->r[0]|c->r[3]; // 805AEE64
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AEE68
  if (crb(c,2)) { goto L_805AEE98; } // 805AEE6C
  c->r[3]=0u+0x806C0000u; // 805AEE70
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AEE74
  c->r[0]=c->r[3]+0x00000029u; // 805AEE78
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AEE7C
  c->r[0]=c->r[3]+0x00000036u; // 805AEE80
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805AEE84
  c->r[3]=mftb(c,268); // 805AEE88
  c->r[0]=c->r[4]+0x00000010u; // 805AEE8C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AEE90
  W32(c->r[6]+0x00000004u,c->r[0]); // 805AEE94
L_805AEE98:;
  c->r[23]=R32(c->r[5]+0x0000031Cu); // 805AEE98
  c->r[6]=0u+0x00000000u; // 805AEE9C
  c->r[5]=0u+0x80000000u; // 805AEEA0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AEEA4
  W32(c->r[1]+0x00000020u,c->r[6]); // 805AEEA8
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 805AEEAC
  c->r[0]=c->r[4]+0x00000010u; // 805AEEB0
  W32(c->r[1]+0x00000024u,c->r[6]); // 805AEEB4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AEEB8
  W32(c->r[1]+0x00000028u,c->r[5]); // 805AEEBC
  c->r[7]=R32(c->r[3]+0x00000010u); // 805AEEC0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AEEC4
  c->r[5]=c->r[7]+c->r[4]; // 805AEEC8
  cmpu(c,0,c->r[5],c->r[0]); // 805AEECC
  if (crb(c,1)) { goto L_805AEEDC; } // 805AEED0
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AEED4
  goto L_805AEEF0; // 805AEED8
L_805AEEDC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AEEDC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AEEE0
  c->ctr=c->r[12]; // 805AEEE4
  if (true) { c->lr=0x805AEEECu; dispatch(c,c->ctr); } // 805AEEE8
  c->r[7]=c->r[3]|c->r[3]; // 805AEEEC
L_805AEEF0:;
  c->r[0]=c->r[23]|0x80000000u; // 805AEEF0
  W32(c->r[1]+0x00000020u,c->r[7]); // 805AEEF4
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AEEF8
  c->r[6]=0u+0x00000000u; // 805AEEFC
  W32(c->r[1]+0x00000028u,c->r[0]); // 805AEF00
  c->r[5]=0u+0x80000000u; // 805AEF04
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 805AEF08
  c->r[23]=R32(c->r[26]+0x0000031Cu); // 805AEF0C
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 805AEF10
  W32(c->r[1]+0x00000010u,c->r[6]); // 805AEF14
  c->r[0]=c->r[4]+0x00000010u; // 805AEF18
  W32(c->r[1]+0x00000014u,c->r[6]); // 805AEF1C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AEF20
  W32(c->r[1]+0x00000018u,c->r[5]); // 805AEF24
  c->r[6]=R32(c->r[3]+0x00000010u); // 805AEF28
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AEF2C
  c->r[5]=c->r[6]+c->r[4]; // 805AEF30
  cmpu(c,0,c->r[5],c->r[0]); // 805AEF34
  if (crb(c,1)) { goto L_805AEF44; } // 805AEF38
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AEF3C
  goto L_805AEF58; // 805AEF40
L_805AEF44:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AEF44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AEF48
  c->ctr=c->r[12]; // 805AEF4C
  if (true) { c->lr=0x805AEF54u; dispatch(c,c->ctr); } // 805AEF50
  c->r[6]=c->r[3]|c->r[3]; // 805AEF54
L_805AEF58:;
  c->r[5]=c->r[23]|0x80000000u; // 805AEF58
  W32(c->r[1]+0x00000010u,c->r[6]); // 805AEF5C
  c->r[4]=rotl(c->r[25],5)&0xFFFFFFE0u; // 805AEF60
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AEF64
  c->r[0]=c->r[4]+0x00000010u; // 805AEF68
  W32(c->r[1]+0x00000018u,c->r[5]); // 805AEF6C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AEF70
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 805AEF74
  c->r[31]=R32(c->r[3]+0x00000010u); // 805AEF78
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AEF7C
  c->r[5]=c->r[31]+c->r[4]; // 805AEF80
  cmpu(c,0,c->r[5],c->r[0]); // 805AEF84
  if (crb(c,1)) { goto L_805AEF94; } // 805AEF88
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AEF8C
  goto L_805AEFA8; // 805AEF90
L_805AEF94:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AEF94
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AEF98
  c->ctr=c->r[12]; // 805AEF9C
  if (true) { c->lr=0x805AEFA4u; dispatch(c,c->ctr); } // 805AEFA0
  c->r[31]=c->r[3]|c->r[3]; // 805AEFA4
L_805AEFA8:;
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AEFA8
  c->r[4]=rotl(c->r[25],2)&0xFFFFFFFCu; // 805AEFAC
  c->r[0]=c->r[4]+0x00000010u; // 805AEFB0
  c->r[30]=R32(c->r[3]+0x00000010u); // 805AEFB4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF0u; // 805AEFB8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 805AEFBC
  c->r[5]=c->r[30]+c->r[4]; // 805AEFC0
  cmpu(c,0,c->r[5],c->r[0]); // 805AEFC4
  if (crb(c,1)) { goto L_805AEFD4; } // 805AEFC8
  W32(c->r[3]+0x00000010u,c->r[5]); // 805AEFCC
  goto L_805AEFE8; // 805AEFD0
L_805AEFD4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AEFD4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 805AEFD8
  c->ctr=c->r[12]; // 805AEFDC
  if (true) { c->lr=0x805AEFE4u; dispatch(c,c->ctr); } // 805AEFE0
  c->r[30]=c->r[3]|c->r[3]; // 805AEFE4
L_805AEFE8:;
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AEFE8
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AEFEC
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AEFF0
  c->r[0]=c->r[3]^c->r[5]; // 805AEFF4
  c->r[0]=cntlz(c->r[0]); // 805AEFF8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AEFFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF000
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF004
  c->r[0]=0u-c->r[3]; // 805AF008
  c->r[0]=c->r[0]|c->r[3]; // 805AF00C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF010
  if (crb(c,2)) { goto L_805AF038; } // 805AF014
  c->r[3]=0u+0x806C0000u; // 805AF018
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF01C
  c->r[0]=c->r[3]+0x00000040u; // 805AF020
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF024
  c->r[3]=mftb(c,268); // 805AF028
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF02C
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF030
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF034
L_805AF038:;
  c->r[29]=c->r[31]|c->r[31]; // 805AF038
  c->r[28]=c->r[30]|c->r[30]; // 805AF03C
  c->r[27]=c->r[25]+0xFFFFFFFFu; // 805AF040
  goto L_805AF0D4; // 805AF044
L_805AF048:;
  c->r[23]=R32(c->r[24]+0x00000000u); // 805AF048
  W32(c->r[1]+0x00000008u,c->r[23]); // 805AF04C
  c->r[0]=c->r[23]+0x00000024u; // 805AF050
  W32(c->r[28]+0x00000000u,c->r[0]); // 805AF054
  c->r[4]=R32(c->r[23]+0x00000030u); // 805AF058
  c->r[3]=R32(c->r[23]+0x00000040u); // 805AF05C
  c->r[0]=c->r[3]-c->r[4]; // 805AF060
  c->r[3]=c->r[3]|~c->r[4]; // 805AF064
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 805AF068
  c->r[0]=c->r[3]-c->r[0]; // 805AF06C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF070
  if (!crb(c,2)) { goto L_805AF088; } // 805AF074
  c->r[3]=R32(c->r[26]+0x00000074u); // 805AF078
  c->r[4]=c->r[1]+0x00000008u; // 805AF07C
  c->r[5]=0u+0x00000001u; // 805AF080
  c->lr=0x805AF088u; f_8059E360(c); // 805AF084
L_805AF088:;
  c->r[4]=c->r[29]|c->r[29]; // 805AF088
  c->r[5]=c->r[23]+0x00000030u; // 805AF08C
  c->r[3]=0u+0x00000002u; // 805AF090
L_805AF094:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 805AF094
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 805AF098
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AF09C
  c->r[0]=R32(c->r[5]+0x00000004u); // 805AF0A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF0A4
  c->r[0]=R32(c->r[5]+0x00000008u); // 805AF0A8
  W32(c->r[4]+0x00000008u,c->r[0]); // 805AF0AC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 805AF0B0
  c->r[5]=c->r[5]+0x00000010u; // 805AF0B4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805AF0B8
  c->r[4]=c->r[4]+0x00000010u; // 805AF0BC
  if (crb(c,1)) { IRQCHK(c); goto L_805AF094; } // 805AF0C0
  c->r[29]=c->r[29]+0x00000020u; // 805AF0C4
  c->r[28]=c->r[28]+0x00000004u; // 805AF0C8
  c->r[24]=c->r[24]+0x00000004u; // 805AF0CC
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 805AF0D0
L_805AF0D4:;
  cmps(c,0,(int32_t)c->r[27],0); // 805AF0D4
  if (!crb(c,0)) { IRQCHK(c); goto L_805AF048; } // 805AF0D8
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF0DC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF0E0
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF0E4
  c->r[0]=c->r[3]^c->r[5]; // 805AF0E8
  c->r[0]=cntlz(c->r[0]); // 805AF0EC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF0F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF0F4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF0F8
  c->r[0]=0u-c->r[3]; // 805AF0FC
  c->r[0]=c->r[0]|c->r[3]; // 805AF100
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF104
  if (crb(c,2)) { goto L_805AF12C; } // 805AF108
  c->r[3]=0u+0x806C0000u; // 805AF10C
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF110
  c->r[0]=c->r[3]+0x0000004Cu; // 805AF114
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF118
  c->r[3]=mftb(c,268); // 805AF11C
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF120
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF124
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF128
L_805AF12C:;
  c->r[3]=R32(c->r[26]+0x00000054u); // 805AF12C
  c->r[4]=c->r[30]|c->r[30]; // 805AF130
  c->r[5]=c->r[31]|c->r[31]; // 805AF134
  c->r[6]=c->r[25]|c->r[25]; // 805AF138
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF13C
  c->r[7]=c->r[1]+0x00000020u; // 805AF140
  c->r[8]=c->r[1]+0x00000010u; // 805AF144
  c->r[12]=R32(c->r[12]+0x00000034u); // 805AF148
  c->ctr=c->r[12]; // 805AF14C
  if (true) { c->lr=0x805AF154u; dispatch(c,c->ctr); } // 805AF150
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF154
  W32(c->r[3]+0x00000010u,c->r[30]); // 805AF158
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF15C
  cmpu(c,0,c->r[30],c->r[0]); // 805AF160
  if (!crb(c,2)) { goto L_805AF17C; } // 805AF164
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF168
  c->r[4]=c->r[30]|c->r[30]; // 805AF16C
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF170
  c->ctr=c->r[12]; // 805AF174
  if (true) { c->lr=0x805AF17Cu; dispatch(c,c->ctr); } // 805AF178
L_805AF17C:;
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF17C
  W32(c->r[3]+0x00000010u,c->r[31]); // 805AF180
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF184
  cmpu(c,0,c->r[31],c->r[0]); // 805AF188
  if (!crb(c,2)) { goto L_805AF1A4; } // 805AF18C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF190
  c->r[4]=c->r[31]|c->r[31]; // 805AF194
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF198
  c->ctr=c->r[12]; // 805AF19C
  if (true) { c->lr=0x805AF1A4u; dispatch(c,c->ctr); } // 805AF1A0
L_805AF1A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805AF1A4
  c->r[3]=R32(c->r[1]+0x00000024u); // 805AF1A8
  c->r[0]=c->r[3]+c->r[0]; cr0(c,c->r[0]); // 805AF1AC
  if (!crb(c,1)) { goto L_805AF430; } // 805AF1B0
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF1B4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF1B8
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF1BC
  c->r[0]=c->r[3]^c->r[5]; // 805AF1C0
  c->r[0]=cntlz(c->r[0]); // 805AF1C4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF1C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF1CC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF1D0
  c->r[0]=0u-c->r[3]; // 805AF1D4
  c->r[0]=c->r[0]|c->r[3]; // 805AF1D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF1DC
  if (crb(c,2)) { goto L_805AF204; } // 805AF1E0
  c->r[3]=0u+0x806C0000u; // 805AF1E4
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF1E8
  c->r[0]=c->r[3]+0x00000059u; // 805AF1EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF1F0
  c->r[3]=mftb(c,268); // 805AF1F4
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF1F8
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF1FC
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF200
L_805AF204:;
  c->r[3]=c->r[1]+0x00000020u; // 805AF204
  c->r[4]=c->r[1]+0x00000010u; // 805AF208
  c->lr=0x805AF210u; f_80551730(c); // 805AF20C
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF210
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF214
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF218
  c->r[0]=c->r[3]^c->r[5]; // 805AF21C
  c->r[0]=cntlz(c->r[0]); // 805AF220
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF224
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF228
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF22C
  c->r[0]=0u-c->r[3]; // 805AF230
  c->r[0]=c->r[0]|c->r[3]; // 805AF234
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF238
  if (crb(c,2)) { goto L_805AF260; } // 805AF23C
  c->r[3]=0u+0x806C0000u; // 805AF240
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF244
  c->r[0]=c->r[3]+0x00000065u; // 805AF248
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF24C
  c->r[3]=mftb(c,268); // 805AF250
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF254
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF258
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF25C
L_805AF260:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 805AF260
  c->r[4]=R32(c->r[1]+0x00000010u); // 805AF264
  c->r[3]=R32(c->r[26]+0x00000060u); // 805AF268
  c->lr=0x805AF270u; f_805516A4(c); // 805AF26C
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AF270
  c->r[4]=0u+0x00000280u; // 805AF274
  c->r[0]=R32(c->r[1]+0x00000024u); // 805AF278
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF27C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 805AF280
  c->r[12]=R32(c->r[12]+0x00000068u); // 805AF284
  c->ctr=c->r[12]; // 805AF288
  if (true) { c->lr=0x805AF290u; dispatch(c,c->ctr); } // 805AF28C
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 805AF290
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF294
  c->r[0]=0u-c->r[3]; // 805AF298
  c->r[0]=c->r[0]|c->r[3]; // 805AF29C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF2A0
  if (!crb(c,2)) { goto L_805AF3C0; } // 805AF2A4
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AF2A8
  c->r[0]=0u+0x00000001u; // 805AF2AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 805AF2B0
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF2B4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF2B8
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF2BC
  c->r[0]=c->r[3]^c->r[5]; // 805AF2C0
  c->r[0]=cntlz(c->r[0]); // 805AF2C4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF2C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF2CC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF2D0
  c->r[0]=0u-c->r[3]; // 805AF2D4
  c->r[0]=c->r[0]|c->r[3]; // 805AF2D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF2DC
  if (crb(c,2)) { goto L_805AF304; } // 805AF2E0
  c->r[3]=0u+0x806C0000u; // 805AF2E4
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF2E8
  c->r[0]=c->r[3]+0x00000071u; // 805AF2EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF2F0
  c->r[3]=mftb(c,268); // 805AF2F4
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF2F8
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF2FC
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF300
L_805AF304:;
  c->r[23]=addc(c,c->r[1],0x00000010u,0); cr0(c,c->r[23]); // 805AF304
  if (crb(c,2)) { goto L_805AF360; } // 805AF308
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF30C
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 805AF310
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AF314
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF318
  cmpu(c,0,c->r[4],c->r[0]); // 805AF31C
  if (!crb(c,2)) { goto L_805AF334; } // 805AF320
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF324
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF328
  c->ctr=c->r[12]; // 805AF32C
  if (true) { c->lr=0x805AF334u; dispatch(c,c->ctr); } // 805AF330
L_805AF334:;
  cmps(c,0,(int32_t)c->r[23],0); // 805AF334
  if (crb(c,2)) { goto L_805AF360; } // 805AF338
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AF33C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AF340
  if (!crb(c,2)) { goto L_805AF360; } // 805AF344
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AF348
  c->r[6]=0u+0x00000018u; // 805AF34C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF350
  c->r[4]=R32(c->r[1]+0x00000010u); // 805AF354
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AF358
  c->lr=0x805AF360u; f_8062C630(c); // 805AF35C
L_805AF360:;
  c->r[23]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[23]); // 805AF360
  if (crb(c,2)) { goto L_805AF538; } // 805AF364
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF368
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 805AF36C
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AF370
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF374
  cmpu(c,0,c->r[4],c->r[0]); // 805AF378
  if (!crb(c,2)) { goto L_805AF390; } // 805AF37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF380
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF384
  c->ctr=c->r[12]; // 805AF388
  if (true) { c->lr=0x805AF390u; dispatch(c,c->ctr); } // 805AF38C
L_805AF390:;
  cmps(c,0,(int32_t)c->r[23],0); // 805AF390
  if (crb(c,2)) { goto L_805AF538; } // 805AF394
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AF398
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AF39C
  if (!crb(c,2)) { goto L_805AF538; } // 805AF3A0
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AF3A4
  c->r[6]=0u+0x00000018u; // 805AF3A8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF3AC
  c->r[4]=R32(c->r[1]+0x00000020u); // 805AF3B0
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AF3B4
  c->lr=0x805AF3BCu; f_8062C630(c); // 805AF3B8
  goto L_805AF538; // 805AF3BC
L_805AF3C0:;
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF3C0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF3C4
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF3C8
  c->r[0]=c->r[3]^c->r[5]; // 805AF3CC
  c->r[0]=cntlz(c->r[0]); // 805AF3D0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF3D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF3D8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF3DC
  c->r[0]=0u-c->r[3]; // 805AF3E0
  c->r[0]=c->r[0]|c->r[3]; // 805AF3E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF3E8
  if (crb(c,2)) { goto L_805AF410; } // 805AF3EC
  c->r[3]=0u+0x806C0000u; // 805AF3F0
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF3F4
  c->r[0]=c->r[3]+0x00000074u; // 805AF3F8
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF3FC
  c->r[3]=mftb(c,268); // 805AF400
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF404
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF408
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF40C
L_805AF410:;
  c->r[6]=R32(c->r[26]+0x00000078u); // 805AF410
  cmps(c,0,(int32_t)c->r[6],0); // 805AF414
  if (crb(c,2)) { goto L_805AF420; } // 805AF418
  c->r[6]=c->r[6]+0x00000008u; // 805AF41C
L_805AF420:;
  c->r[5]=R32(c->r[1]+0x00000024u); // 805AF420
  c->r[4]=R32(c->r[1]+0x00000020u); // 805AF424
  c->r[3]=R32(c->r[26]+0x00000060u); // 805AF428
  c->lr=0x805AF430u; f_805515CC(c); // 805AF42C
L_805AF430:;
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AF430
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AF434
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF438
  c->r[0]=c->r[3]^c->r[5]; // 805AF43C
  c->r[0]=cntlz(c->r[0]); // 805AF440
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF444
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF448
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AF44C
  c->r[0]=0u-c->r[3]; // 805AF450
  c->r[0]=c->r[0]|c->r[3]; // 805AF454
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AF458
  if (crb(c,2)) { goto L_805AF480; } // 805AF45C
  c->r[3]=0u+0x806C0000u; // 805AF460
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AF464
  c->r[0]=c->r[3]+0x00000071u; // 805AF468
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AF46C
  c->r[3]=mftb(c,268); // 805AF470
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AF474
  c->r[0]=c->r[5]+0x0000000Cu; // 805AF478
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AF47C
L_805AF480:;
  c->r[23]=addc(c,c->r[1],0x00000010u,0); cr0(c,c->r[23]); // 805AF480
  if (crb(c,2)) { goto L_805AF4DC; } // 805AF484
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF488
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 805AF48C
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AF490
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF494
  cmpu(c,0,c->r[4],c->r[0]); // 805AF498
  if (!crb(c,2)) { goto L_805AF4B0; } // 805AF49C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF4A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF4A4
  c->ctr=c->r[12]; // 805AF4A8
  if (true) { c->lr=0x805AF4B0u; dispatch(c,c->ctr); } // 805AF4AC
L_805AF4B0:;
  cmps(c,0,(int32_t)c->r[23],0); // 805AF4B0
  if (crb(c,2)) { goto L_805AF4DC; } // 805AF4B4
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AF4B8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AF4BC
  if (!crb(c,2)) { goto L_805AF4DC; } // 805AF4C0
  c->r[0]=R32(c->r[1]+0x00000018u); // 805AF4C4
  c->r[6]=0u+0x00000018u; // 805AF4C8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF4CC
  c->r[4]=R32(c->r[1]+0x00000010u); // 805AF4D0
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AF4D4
  c->lr=0x805AF4DCu; f_8062C630(c); // 805AF4D8
L_805AF4DC:;
  c->r[23]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[23]); // 805AF4DC
  if (crb(c,2)) { goto L_805AF538; } // 805AF4E0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF4E4
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 805AF4E8
  W32(c->r[3]+0x00000010u,c->r[4]); // 805AF4EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 805AF4F0
  cmpu(c,0,c->r[4],c->r[0]); // 805AF4F4
  if (!crb(c,2)) { goto L_805AF50C; } // 805AF4F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 805AF4FC
  c->r[12]=R32(c->r[12]+0x00000020u); // 805AF500
  c->ctr=c->r[12]; // 805AF504
  if (true) { c->lr=0x805AF50Cu; dispatch(c,c->ctr); } // 805AF508
L_805AF50C:;
  cmps(c,0,(int32_t)c->r[23],0); // 805AF50C
  if (crb(c,2)) { goto L_805AF538; } // 805AF510
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AF514
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805AF518
  if (!crb(c,2)) { goto L_805AF538; } // 805AF51C
  c->r[0]=R32(c->r[1]+0x00000028u); // 805AF520
  c->r[6]=0u+0x00000018u; // 805AF524
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805AF528
  c->r[4]=R32(c->r[1]+0x00000020u); // 805AF52C
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 805AF530
  c->lr=0x805AF538u; f_8062C630(c); // 805AF534
L_805AF538:;
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805AF538
  c->r[0]=R32(c->r[1]+0x00000064u); // 805AF53C
  c->lr=c->r[0]; // 805AF540
  c->r[1]=c->r[1]+0x00000060u; // 805AF544
  return; // 805AF548
}

// fn_805AF54C
void f_805AF54C(Ctx* __restrict c) {
  trace_call(0x805AF54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805AF54C
  c->r[0]=c->lr; // 805AF550
  W32(c->r[1]+0x00000044u,c->r[0]); // 805AF554
  c->r[11]=c->r[1]+0x00000040u; // 805AF558
  c->lr=0x805AF560u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805AF55C
  c->r[7]=R32(c->r[13]+0xFFFFE758u); // 805AF560
  c->r[22]=c->r[3]|c->r[3]; // 805AF564
  c->r[23]=c->r[4]|c->r[4]; // 805AF568
  c->r[6]=R32(c->r[7]+0x00000004u); // 805AF56C
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 805AF570
  c->r[0]=c->r[5]^c->r[6]; // 805AF574
  c->r[0]=cntlz(c->r[0]); // 805AF578
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 805AF57C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF580
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF584
  if (crb(c,2)) { goto L_805AF5AC; } // 805AF588
  c->r[5]=0u+0x806C0000u; // 805AF58C
  c->r[5]=c->r[5]+0xFFFFE290u; // 805AF590
  c->r[0]=c->r[5]+0x0000007Du; // 805AF594
  W32(c->r[6]+0x00000000u,c->r[0]); // 805AF598
  c->r[5]=mftb(c,268); // 805AF59C
  W32(c->r[6]+0x00000004u,c->r[5]); // 805AF5A0
  c->r[0]=c->r[6]+0x0000000Cu; // 805AF5A4
  W32(c->r[7]+0x00000004u,c->r[0]); // 805AF5A8
L_805AF5AC:;
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 805AF5AC
  c->r[0]=0u+0x43300000u; // 805AF5B0
  c->r[5]=R32(c->r[4]+0x00000000u); // 805AF5B4
  c->r[27]=0u+0x00000000u; // 805AF5B8
  W32(c->r[6]+0x000001B0u,c->r[5]); // 805AF5BC
  c->r[26]=0u+0x00000000u; // 805AF5C0
  {uint32_t ea=c->r[2]+0x00002920u; c->f[1]=RF64(ea);} // 805AF5C4
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AF5C8
  W32(c->r[6]+0x000001B4u,c->r[5]); // 805AF5CC
  c->r[5]=R32(c->r[4]+0x00000008u); // 805AF5D0
  W32(c->r[6]+0x000001B8u,c->r[5]); // 805AF5D4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 805AF5D8
  W32(c->r[6]+0x000001BCu,c->r[5]); // 805AF5DC
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 805AF5E0
  c->r[5]=R32(c->r[4]+0x00000000u); // 805AF5E4
  c->r[6]=R32(c->r[6]+0x00000074u); // 805AF5E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 805AF5EC
  W32(c->r[6]+0x00000050u,c->r[5]); // 805AF5F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 805AF5F4
  W32(c->r[6]+0x00000054u,c->r[0]); // 805AF5F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 805AF5FC
  W32(c->r[6]+0x00000058u,c->r[0]); // 805AF600
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 805AF604
  W32(c->r[6]+0x0000005Cu,c->r[0]); // 805AF608
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 805AF60C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AF610
  {uint32_t ea=c->r[5]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AF614
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805AF618
  {uint32_t ea=c->r[5]+0x000002CCu; WF32(ea,c->f[0]);} // 805AF61C
  c->r[0]=R32(c->r[5]+0x000002D4u); // 805AF620
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805AF624
  c->r[0]=c->r[0]^0x80000000u; // 805AF628
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805AF62C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 805AF630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 805AF634
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805AF638
  {uint32_t ea=c->r[5]+0x000002D0u; WF32(ea,c->f[0]);} // 805AF63C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 805AF640
  c->r[4]=R32(c->r[5]+0x00000090u); // 805AF644
  c->r[0]=c->r[4]+0x00000001u; // 805AF648
  W32(c->r[5]+0x00000090u,c->r[0]); // 805AF64C
  c->r[24]=R32(c->r[3]+0x0000000Cu); // 805AF650
  goto L_805AF71C; // 805AF654
L_805AF658:;
  c->r[3]=R32(c->r[24]+0x00000028u); // 805AF658
  c->r[5]=R32(c->r[22]+0x0000000Cu); // 805AF65C
  c->r[4]=R32(c->r[3]+c->r[26]); // 805AF660
  c->r[3]=R32(c->r[4]+0x00000048u); // 805AF664
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 805AF668
  c->lr=0x805AF670u; f_805AEE24(c); // 805AF66C
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AF670
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AF674
  cmps(c,0,(int32_t)c->r[0],1); // 805AF678
  if (!crb(c,2)) { goto L_805AF714; } // 805AF67C
  c->r[22]=R32(c->r[22]+0x0000000Cu); // 805AF680
  c->r[0]=R32(c->r[22]+0x00000090u); // 805AF684
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AF688
  W32(c->r[22]+0x00000090u,c->r[0]); // 805AF68C
  if (!crb(c,2)) { goto L_805AF6D4; } // 805AF690
  c->r[0]=R8(c->r[22]+0x00000098u); // 805AF694
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF698
  if (!crb(c,2)) { goto L_805AF6D4; } // 805AF69C
  c->r[0]=R32(c->r[22]+0x00000088u); // 805AF6A0
  cmps(c,0,(int32_t)c->r[0],0); // 805AF6A4
  if (crb(c,2)) { goto L_805AF6B4; } // 805AF6A8
  c->r[3]=c->r[22]|c->r[22]; // 805AF6AC
  c->lr=0x805AF6B4u; f_805C4D34(c); // 805AF6B0
L_805AF6B4:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 805AF6B4
  cmps(c,0,(int32_t)c->r[0],1); // 805AF6B8
  if (!crb(c,2)) { goto L_805AF6D4; } // 805AF6BC
  c->r[0]=R32(c->r[22]+0x0000008Cu); // 805AF6C0
  cmps(c,0,(int32_t)c->r[0],0); // 805AF6C4
  if (crb(c,2)) { goto L_805AF6D4; } // 805AF6C8
  c->r[3]=c->r[22]|c->r[22]; // 805AF6CC
  c->lr=0x805AF6D4u; f_805C4D44(c); // 805AF6D0
L_805AF6D4:;
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF6D4
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF6D8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF6DC
  c->r[0]=c->r[3]^c->r[4]; // 805AF6E0
  c->r[0]=cntlz(c->r[0]); // 805AF6E4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF6E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF6EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF6F0
  if (crb(c,2)) { goto L_805AFA30; } // 805AF6F4
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AF6F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AF6FC
  c->r[3]=mftb(c,268); // 805AF700
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF704
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF708
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AF70C
  goto L_805AFA30; // 805AF710
L_805AF714:;
  c->r[26]=c->r[26]+0x00000004u; // 805AF714
  c->r[27]=c->r[27]+0x00000001u; // 805AF718
L_805AF71C:;
  c->r[0]=R32(c->r[24]+0x0000002Cu); // 805AF71C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 805AF720
  if (crb(c,0)) { IRQCHK(c); goto L_805AF658; } // 805AF724
  c->r[24]=R32(c->r[22]+0x0000000Cu); // 805AF728
  c->r[0]=R32(c->r[24]+0x00000090u); // 805AF72C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AF730
  W32(c->r[24]+0x00000090u,c->r[0]); // 805AF734
  if (!crb(c,2)) { goto L_805AF77C; } // 805AF738
  c->r[0]=R8(c->r[24]+0x00000098u); // 805AF73C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF740
  if (!crb(c,2)) { goto L_805AF77C; } // 805AF744
  c->r[0]=R32(c->r[24]+0x00000088u); // 805AF748
  cmps(c,0,(int32_t)c->r[0],0); // 805AF74C
  if (crb(c,2)) { goto L_805AF75C; } // 805AF750
  c->r[3]=c->r[24]|c->r[24]; // 805AF754
  c->lr=0x805AF75Cu; f_805C4D34(c); // 805AF758
L_805AF75C:;
  c->r[0]=R32(c->r[24]+0x000000A0u); // 805AF75C
  cmps(c,0,(int32_t)c->r[0],1); // 805AF760
  if (!crb(c,2)) { goto L_805AF77C; } // 805AF764
  c->r[0]=R32(c->r[24]+0x0000008Cu); // 805AF768
  cmps(c,0,(int32_t)c->r[0],0); // 805AF76C
  if (crb(c,2)) { goto L_805AF77C; } // 805AF770
  c->r[3]=c->r[24]|c->r[24]; // 805AF774
  c->lr=0x805AF77Cu; f_805C4D44(c); // 805AF778
L_805AF77C:;
  c->r[4]=R32(c->r[22]+0x0000000Cu); // 805AF77C
  c->r[31]=0u+0x806C0000u; // 805AF780
  c->r[28]=0u+0x80720000u; // 805AF784
  c->r[25]=0u+0x00000000u; // 805AF788
  c->r[3]=R32(c->r[4]+0x00000090u); // 805AF78C
  c->r[28]=c->r[28]+0x00002AF4u; // 805AF790
  c->r[31]=c->r[31]+0xFFFFE290u; // 805AF794
  c->r[26]=0u+0x00000000u; // 805AF798
  c->r[0]=c->r[3]+0x00000001u; // 805AF79C
  W32(c->r[4]+0x00000090u,c->r[0]); // 805AF7A0
  c->r[29]=0u+0x00000000u; // 805AF7A4
  c->r[30]=c->r[13]+0xFFFFAC5Cu; // 805AF7A8
  c->r[27]=R32(c->r[22]+0x0000000Cu); // 805AF7AC
  goto L_805AF994; // 805AF7B0
L_805AF7B4:;
  c->r[7]=R32(c->r[13]+0xFFFFE758u); // 805AF7B4
  c->r[6]=R32(c->r[27]+0x00000028u); // 805AF7B8
  c->r[4]=R32(c->r[7]+0x00000004u); // 805AF7BC
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 805AF7C0
  c->r[5]=R32(c->r[22]+0x0000000Cu); // 805AF7C4
  c->r[0]=c->r[3]^c->r[4]; // 805AF7C8
  c->r[24]=R32(c->r[6]+c->r[26]); // 805AF7CC
  c->r[0]=cntlz(c->r[0]); // 805AF7D0
  c->r[5]=R32(c->r[5]+0x00000074u); // 805AF7D4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF7D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF7DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF7E0
  if (crb(c,2)) { goto L_805AF7FC; } // 805AF7E4
  W32(c->r[4]+0x00000000u,c->r[28]); // 805AF7E8
  c->r[3]=mftb(c,268); // 805AF7EC
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF7F0
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF7F4
  W32(c->r[7]+0x00000004u,c->r[0]); // 805AF7F8
L_805AF7FC:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 805AF7FC
  c->r[3]=c->r[24]|c->r[24]; // 805AF800
  c->r[4]=c->r[24]+0x00000058u; // 805AF804
  c->r[0]=c->r[6]+0x00001B60u; // 805AF808
  W32(c->r[5]+0x00000060u,c->r[0]); // 805AF80C
  W32(c->r[5]+0x00000010u,c->r[29]); // 805AF810
  c->lr=0x805AF818u; f_805D10B4(c); // 805AF814
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF818
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF81C
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF820
  c->r[0]=c->r[3]^c->r[4]; // 805AF824
  c->r[0]=cntlz(c->r[0]); // 805AF828
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF82C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF830
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF834
  if (crb(c,2)) { goto L_805AF850; } // 805AF838
  W32(c->r[4]+0x00000000u,c->r[30]); // 805AF83C
  c->r[3]=mftb(c,268); // 805AF840
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF844
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF848
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AF84C
L_805AF850:;
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805AF850
  c->r[0]=R32(c->r[3]+0x00000004u); // 805AF854
  cmps(c,0,(int32_t)c->r[0],1); // 805AF858
  if (!crb(c,2)) { goto L_805AF8F4; } // 805AF85C
  c->r[22]=R32(c->r[22]+0x0000000Cu); // 805AF860
  c->r[0]=R32(c->r[22]+0x00000090u); // 805AF864
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AF868
  W32(c->r[22]+0x00000090u,c->r[0]); // 805AF86C
  if (!crb(c,2)) { goto L_805AF8B4; } // 805AF870
  c->r[0]=R8(c->r[22]+0x00000098u); // 805AF874
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF878
  if (!crb(c,2)) { goto L_805AF8B4; } // 805AF87C
  c->r[0]=R32(c->r[22]+0x00000088u); // 805AF880
  cmps(c,0,(int32_t)c->r[0],0); // 805AF884
  if (crb(c,2)) { goto L_805AF894; } // 805AF888
  c->r[3]=c->r[22]|c->r[22]; // 805AF88C
  c->lr=0x805AF894u; f_805C4D34(c); // 805AF890
L_805AF894:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 805AF894
  cmps(c,0,(int32_t)c->r[0],1); // 805AF898
  if (!crb(c,2)) { goto L_805AF8B4; } // 805AF89C
  c->r[0]=R32(c->r[22]+0x0000008Cu); // 805AF8A0
  cmps(c,0,(int32_t)c->r[0],0); // 805AF8A4
  if (crb(c,2)) { goto L_805AF8B4; } // 805AF8A8
  c->r[3]=c->r[22]|c->r[22]; // 805AF8AC
  c->lr=0x805AF8B4u; f_805C4D44(c); // 805AF8B0
L_805AF8B4:;
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF8B4
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF8B8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF8BC
  c->r[0]=c->r[3]^c->r[4]; // 805AF8C0
  c->r[0]=cntlz(c->r[0]); // 805AF8C4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF8C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF8CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF8D0
  if (crb(c,2)) { goto L_805AFA30; } // 805AF8D4
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AF8D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AF8DC
  c->r[3]=mftb(c,268); // 805AF8E0
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF8E4
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF8E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AF8EC
  goto L_805AFA30; // 805AF8F0
L_805AF8F4:;
  c->r[3]=R32(c->r[22]+0x0000000Cu); // 805AF8F4
  c->r[0]=R32(c->r[3]+0x00000184u); // 805AF8F8
  cmps(c,0,(int32_t)c->r[0],0); // 805AF8FC
  if (crb(c,2)) { goto L_805AF98C; } // 805AF900
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF904
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF908
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF90C
  c->r[0]=c->r[3]^c->r[4]; // 805AF910
  c->r[0]=cntlz(c->r[0]); // 805AF914
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF918
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF91C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF920
  if (crb(c,2)) { goto L_805AF940; } // 805AF924
  c->r[0]=c->r[31]+0x00000087u; // 805AF928
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AF92C
  c->r[3]=mftb(c,268); // 805AF930
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF934
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF938
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AF93C
L_805AF940:;
  c->r[3]=R32(c->r[22]+0x0000000Cu); // 805AF940
  c->r[4]=c->r[24]|c->r[24]; // 805AF944
  c->r[5]=c->r[23]|c->r[23]; // 805AF948
  c->lr=0x805AF950u; f_805B5464(c); // 805AF94C
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF950
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF954
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF958
  c->r[0]=c->r[3]^c->r[4]; // 805AF95C
  c->r[0]=cntlz(c->r[0]); // 805AF960
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AF964
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AF968
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF96C
  if (crb(c,2)) { goto L_805AF98C; } // 805AF970
  c->r[0]=c->r[31]+0x0000001Au; // 805AF974
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AF978
  c->r[3]=mftb(c,268); // 805AF97C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AF980
  c->r[0]=c->r[4]+0x0000000Cu; // 805AF984
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AF988
L_805AF98C:;
  c->r[26]=c->r[26]+0x00000004u; // 805AF98C
  c->r[25]=c->r[25]+0x00000001u; // 805AF990
L_805AF994:;
  c->r[0]=R32(c->r[27]+0x0000002Cu); // 805AF994
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 805AF998
  if (crb(c,0)) { IRQCHK(c); goto L_805AF7B4; } // 805AF99C
  c->r[22]=R32(c->r[22]+0x0000000Cu); // 805AF9A0
  c->r[0]=R32(c->r[22]+0x00000090u); // 805AF9A4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AF9A8
  W32(c->r[22]+0x00000090u,c->r[0]); // 805AF9AC
  if (!crb(c,2)) { goto L_805AF9F4; } // 805AF9B0
  c->r[0]=R8(c->r[22]+0x00000098u); // 805AF9B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AF9B8
  if (!crb(c,2)) { goto L_805AF9F4; } // 805AF9BC
  c->r[0]=R32(c->r[22]+0x00000088u); // 805AF9C0
  cmps(c,0,(int32_t)c->r[0],0); // 805AF9C4
  if (crb(c,2)) { goto L_805AF9D4; } // 805AF9C8
  c->r[3]=c->r[22]|c->r[22]; // 805AF9CC
  c->lr=0x805AF9D4u; f_805C4D34(c); // 805AF9D0
L_805AF9D4:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 805AF9D4
  cmps(c,0,(int32_t)c->r[0],1); // 805AF9D8
  if (!crb(c,2)) { goto L_805AF9F4; } // 805AF9DC
  c->r[0]=R32(c->r[22]+0x0000008Cu); // 805AF9E0
  cmps(c,0,(int32_t)c->r[0],0); // 805AF9E4
  if (crb(c,2)) { goto L_805AF9F4; } // 805AF9E8
  c->r[3]=c->r[22]|c->r[22]; // 805AF9EC
  c->lr=0x805AF9F4u; f_805C4D44(c); // 805AF9F0
L_805AF9F4:;
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AF9F4
  c->r[4]=R32(c->r[5]+0x00000004u); // 805AF9F8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AF9FC
  c->r[0]=c->r[3]^c->r[4]; // 805AFA00
  c->r[0]=cntlz(c->r[0]); // 805AFA04
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFA08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFA0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805AFA10
  if (crb(c,2)) { goto L_805AFA30; } // 805AFA14
  c->r[0]=c->r[13]+0xFFFFA408u; // 805AFA18
  W32(c->r[4]+0x00000000u,c->r[0]); // 805AFA1C
  c->r[3]=mftb(c,268); // 805AFA20
  W32(c->r[4]+0x00000004u,c->r[3]); // 805AFA24
  c->r[0]=c->r[4]+0x0000000Cu; // 805AFA28
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AFA2C
L_805AFA30:;
  c->r[11]=c->r[1]+0x00000040u; // 805AFA30
  c->lr=0x805AFA38u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805AFA34
  c->r[0]=R32(c->r[1]+0x00000044u); // 805AFA38
  c->lr=c->r[0]; // 805AFA3C
  c->r[1]=c->r[1]+0x00000040u; // 805AFA40
  return; // 805AFA44
}

// fn_805AFA48
void f_805AFA48(Ctx* __restrict c) {
  trace_call(0x805AFA48u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805AFA48
  c->r[12]=c->r[1]|c->r[1]; // 805AFA4C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF50u,1); // 805AFA50
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805AFA54
  c->r[0]=c->lr; // 805AFA58
  c->r[11]=c->r[12]|c->r[12]; // 805AFA5C
  W32(c->r[12]+0x00000004u,c->r[0]); // 805AFA60
  c->lr=0x805AFA68u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805AFA64
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805AFA68
  c->r[25]=c->r[3]|c->r[3]; // 805AFA6C
  c->r[26]=c->r[4]|c->r[4]; // 805AFA70
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 805AFA74
  c->r[7]=R32(c->r[6]+0x00000004u); // 805AFA78
  c->r[0]=c->r[5]^c->r[7]; // 805AFA7C
  c->r[0]=cntlz(c->r[0]); // 805AFA80
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 805AFA84
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFA88
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFA8C
  c->r[0]=0u-c->r[5]; // 805AFA90
  c->r[0]=c->r[0]|c->r[5]; // 805AFA94
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFA98
  if (crb(c,2)) { goto L_805AFAC8; } // 805AFA9C
  c->r[5]=0u+0x806C0000u; // 805AFAA0
  c->r[5]=c->r[5]+0xFFFFE290u; // 805AFAA4
  c->r[0]=c->r[5]+0x0000009Du; // 805AFAA8
  W32(c->r[7]+0x00000000u,c->r[0]); // 805AFAAC
  c->r[0]=c->r[5]+0x000000A9u; // 805AFAB0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805AFAB4
  c->r[5]=mftb(c,268); // 805AFAB8
  c->r[0]=c->r[7]+0x00000010u; // 805AFABC
  W32(c->r[7]+0x00000004u,c->r[5]); // 805AFAC0
  W32(c->r[6]+0x00000004u,c->r[0]); // 805AFAC4
L_805AFAC8:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 805AFAC8
  c->r[5]=0u+0x43300000u; // 805AFACC
  c->r[6]=R32(c->r[4]+0x00000000u); // 805AFAD0
  W32(c->r[7]+0x000001B0u,c->r[6]); // 805AFAD4
  {uint32_t ea=c->r[2]+0x00002920u; c->f[1]=RF64(ea);} // 805AFAD8
  c->r[6]=R32(c->r[4]+0x00000004u); // 805AFADC
  W32(c->r[7]+0x000001B4u,c->r[6]); // 805AFAE0
  c->r[6]=R32(c->r[4]+0x00000008u); // 805AFAE4
  W32(c->r[7]+0x000001B8u,c->r[6]); // 805AFAE8
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 805AFAEC
  W32(c->r[7]+0x000001BCu,c->r[6]); // 805AFAF0
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 805AFAF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AFAF8
  {uint32_t ea=c->r[6]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFAFC
  c->r[7]=c->r[6]+0x000001D0u; // 805AFB00
  W32(c->r[1]+0x00000070u,c->r[5]); // 805AFB04
  c->r[8]=c->r[6]+0x000001E0u; // 805AFB08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805AFB0C
  {uint32_t ea=c->r[6]+0x000002CCu; WF32(ea,c->f[0]);} // 805AFB10
  c->r[5]=R32(c->r[6]+0x000002D4u); // 805AFB14
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 805AFB18
  c->r[5]=c->r[5]^0x80000000u; // 805AFB1C
  W32(c->r[1]+0x00000074u,c->r[5]); // 805AFB20
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 805AFB24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 805AFB28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 805AFB2C
  {uint32_t ea=c->r[6]+0x000002D0u; WF32(ea,c->f[0]);} // 805AFB30
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 805AFB34
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0); c->r[5]=ea;} // 805AFB38
  {uint32_t ea=c->r[6]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFB3C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,0,0);} // 805AFB40
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805AFB44
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805AFB48
  {uint32_t ea=c->r[6]+0x000001D0u; psq_store(c,1,ea,0,0);} // 805AFB4C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,0,0);} // 805AFB50
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 805AFB54
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0); c->r[3]=ea;} // 805AFB58
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 805AFB5C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,0,0);} // 805AFB60
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805AFB64
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805AFB68
  {uint32_t ea=c->r[6]+0x000001E0u; psq_store(c,1,ea,0,0);} // 805AFB6C
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,0,0);} // 805AFB70
  c->lr=0x805AFB78u; f_80580814(c); // 805AFB74
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFB78
  c->lr=0x805AFB80u; f_805BB78C(c); // 805AFB7C
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805AFB80
  c->r[3]=R32(c->r[4]+0x00000090u); // 805AFB84
  c->r[0]=c->r[3]+0x00000001u; // 805AFB88
  W32(c->r[4]+0x00000090u,c->r[0]); // 805AFB8C
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805AFB90
  c->r[3]=R32(c->r[4]+0x00000094u); // 805AFB94
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 805AFB98
  W32(c->r[4]+0x00000094u,c->r[0]); // 805AFB9C
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AFBA0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AFBA4
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AFBA8
  c->r[0]=c->r[3]^c->r[5]; // 805AFBAC
  c->r[0]=cntlz(c->r[0]); // 805AFBB0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFBB4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFBB8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFBBC
  c->r[0]=0u-c->r[3]; // 805AFBC0
  c->r[0]=c->r[0]|c->r[3]; // 805AFBC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFBC8
  if (crb(c,2)) { goto L_805AFBF0; } // 805AFBCC
  c->r[3]=0u+0x806C0000u; // 805AFBD0
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AFBD4
  c->r[0]=c->r[3]+0x000000B0u; // 805AFBD8
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AFBDC
  c->r[3]=mftb(c,268); // 805AFBE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AFBE4
  c->r[0]=c->r[5]+0x0000000Cu; // 805AFBE8
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AFBEC
L_805AFBF0:;
  c->r[3]=c->r[25]|c->r[25]; // 805AFBF0
  c->lr=0x805AFBF8u; f_805B0108(c); // 805AFBF4
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805AFBF8
  c->r[3]=R32(c->r[4]+0x00000094u); // 805AFBFC
  c->r[0]=c->r[3]+0x00000001u; // 805AFC00
  W32(c->r[4]+0x00000094u,c->r[0]); // 805AFC04
  c->r[23]=R32(c->r[25]+0x0000000Cu); // 805AFC08
  c->r[0]=R32(c->r[23]+0x00000090u); // 805AFC0C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AFC10
  W32(c->r[23]+0x00000090u,c->r[0]); // 805AFC14
  if (!crb(c,2)) { goto L_805AFC68; } // 805AFC18
  c->r[0]=R8(c->r[23]+0x00000098u); // 805AFC1C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFC20
  c->r[0]=0u-c->r[3]; // 805AFC24
  c->r[0]=c->r[0]|c->r[3]; // 805AFC28
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFC2C
  if (!crb(c,2)) { goto L_805AFC68; } // 805AFC30
  c->r[0]=R32(c->r[23]+0x00000088u); // 805AFC34
  cmps(c,0,(int32_t)c->r[0],0); // 805AFC38
  if (crb(c,2)) { goto L_805AFC48; } // 805AFC3C
  c->r[3]=c->r[23]|c->r[23]; // 805AFC40
  c->lr=0x805AFC48u; f_805C4D34(c); // 805AFC44
L_805AFC48:;
  c->r[0]=R32(c->r[23]+0x000000A0u); // 805AFC48
  cmps(c,0,(int32_t)c->r[0],1); // 805AFC4C
  if (!crb(c,2)) { goto L_805AFC68; } // 805AFC50
  c->r[0]=R32(c->r[23]+0x0000008Cu); // 805AFC54
  cmps(c,0,(int32_t)c->r[0],0); // 805AFC58
  if (crb(c,2)) { goto L_805AFC68; } // 805AFC5C
  c->r[3]=c->r[23]|c->r[23]; // 805AFC60
  c->lr=0x805AFC68u; f_805C4D44(c); // 805AFC64
L_805AFC68:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805AFC68
  c->r[3]=R32(c->r[4]+0x00000090u); // 805AFC6C
  c->r[0]=c->r[3]+0x00000001u; // 805AFC70
  W32(c->r[4]+0x00000090u,c->r[0]); // 805AFC74
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805AFC78
  c->r[3]=R8(c->r[4]+0x000002E7u); // 805AFC7C
  c->r[0]=c->r[3]+0x00000001u; // 805AFC80
  W8(c->r[4]+0x000002E7u,c->r[0]); // 805AFC84
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 805AFC88
  c->r[0]=c->r[3]+0x00000004u; // 805AFC8C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 805AFC90
  if (!crb(c,2)) { goto L_805AFCA4; } // 805AFC94
  c->r[0]=R8(c->r[4]+0x000002E5u); // 805AFC98
  c->r[0]=c->r[0]^0x00000001u; // 805AFC9C
  W8(c->r[4]+0x000002E5u,c->r[0]); // 805AFCA0
L_805AFCA4:;
  c->r[0]=R8(c->r[4]+0x000002E7u); // 805AFCA4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 805AFCA8
  if (!crb(c,2)) { goto L_805AFCBC; } // 805AFCAC
  c->r[0]=R8(c->r[4]+0x000002E5u); // 805AFCB0
  c->r[0]=c->r[0]^0x00000002u; // 805AFCB4
  W8(c->r[4]+0x000002E5u,c->r[0]); // 805AFCB8
L_805AFCBC:;
  c->r[0]=R8(c->r[4]+0x000002E7u); // 805AFCBC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 805AFCC0
  if (!crb(c,2)) { goto L_805AFCDC; } // 805AFCC4
  c->r[3]=R8(c->r[4]+0x000002E6u); // 805AFCC8
  c->r[0]=0u+0x00000000u; // 805AFCCC
  c->r[3]=addc(c,~c->r[3],0x00000001u,1); // 805AFCD0
  W8(c->r[4]+0x000002E6u,c->r[3]); // 805AFCD4
  W8(c->r[4]+0x000002E7u,c->r[0]); // 805AFCD8
L_805AFCDC:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFCDC
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AFCE0
  {uint32_t ea=c->r[3]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFCE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 805AFCE8
  {uint32_t ea=c->r[3]+0x000002CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 805AFCEC
  {uint32_t ea=c->r[3]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFCF0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 805AFCF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805AFCF8
  {uint32_t ea=c->r[3]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFCFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 805AFD00
  {uint32_t ea=c->r[3]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD04
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 805AFD08
  {uint32_t ea=c->r[3]+0x000002E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AFD0C
  {uint32_t ea=c->r[3]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 805AFD14
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 805AFD18
  {uint32_t ea=c->r[3]+0x000001C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD1C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 805AFD20
  {uint32_t ea=c->r[3]+0x000001C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD24
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 805AFD28
  {uint32_t ea=c->r[3]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 805AFD2C
  {uint32_t ea=c->r[3]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD30
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 805AFD34
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 805AFD38
  {uint32_t ea=c->r[3]+0x000001C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD3C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 805AFD40
  {uint32_t ea=c->r[3]+0x0000021Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805AFD44
  {uint32_t ea=c->r[3]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD48
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 805AFD4C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 805AFD50
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD54
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 805AFD58
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805AFD5C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 805AFD60
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AFD64
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AFD68
  c->r[0]=c->r[3]^c->r[5]; // 805AFD6C
  c->r[0]=cntlz(c->r[0]); // 805AFD70
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFD74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFD78
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFD7C
  c->r[0]=0u-c->r[3]; // 805AFD80
  c->r[0]=c->r[0]|c->r[3]; // 805AFD84
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFD88
  if (crb(c,2)) { goto L_805AFDB0; } // 805AFD8C
  c->r[3]=0u+0x806C0000u; // 805AFD90
  c->r[3]=c->r[3]+0xFFFFE290u; // 805AFD94
  c->r[0]=c->r[3]+0x000000BAu; // 805AFD98
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AFD9C
  c->r[3]=mftb(c,268); // 805AFDA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AFDA4
  c->r[0]=c->r[5]+0x0000000Cu; // 805AFDA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AFDAC
L_805AFDB0:;
  c->r[29]=R32(c->r[25]+0x0000000Cu); // 805AFDB0
  c->r[30]=0u+0x80720000u; // 805AFDB4
  c->r[23]=0u+0x806C0000u; // 805AFDB8
  c->r[31]=c->r[13]+0xFFFFAC58u; // 805AFDBC
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 805AFDC0
  c->r[30]=c->r[30]+0x00002AE8u; // 805AFDC4
  c->r[23]=c->r[23]+0xFFFFE290u; // 805AFDC8
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 805AFDCC
  c->r[24]=rotl(c->r[28],2)&0xFFFFFFFCu; // 805AFDD0
  goto L_805AFF78; // 805AFDD4
L_805AFDD8:;
  c->r[4]=R32(c->r[29]+0x00000028u); // 805AFDD8
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFDDC
  c->r[27]=R32(c->r[4]+c->r[24]); // 805AFDE0
  c->r[4]=c->r[3]+0x000001B0u; // 805AFDE4
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 805AFDE8
  cmps(c,0,(int32_t)c->r[0],0); // 805AFDEC
  if (!crb(c,2)) { goto L_805AFEB0; } // 805AFDF0
  c->r[5]=R32(c->r[13]+0xFFFFE758u); // 805AFDF4
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 805AFDF8
  c->r[6]=R32(c->r[5]+0x00000004u); // 805AFDFC
  c->r[0]=c->r[3]^c->r[6]; // 805AFE00
  c->r[0]=cntlz(c->r[0]); // 805AFE04
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFE08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFE0C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFE10
  c->r[0]=0u-c->r[3]; // 805AFE14
  c->r[0]=c->r[0]|c->r[3]; // 805AFE18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFE1C
  if (crb(c,2)) { goto L_805AFE38; } // 805AFE20
  W32(c->r[6]+0x00000000u,c->r[30]); // 805AFE24
  c->r[3]=mftb(c,268); // 805AFE28
  c->r[0]=c->r[6]+0x0000000Cu; // 805AFE2C
  W32(c->r[6]+0x00000004u,c->r[3]); // 805AFE30
  W32(c->r[5]+0x00000004u,c->r[0]); // 805AFE34
L_805AFE38:;
  c->r[7]=R32(c->r[27]+0x0000004Cu); // 805AFE38
  c->r[3]=c->r[4]+0x00000010u; // 805AFE3C
  c->r[6]=R32(c->r[27]+0x00000048u); // 805AFE40
  c->r[5]=c->r[4]+0x00000030u; // 805AFE44
  c->r[8]=0u+0x000000E0u; // 805AFE48
  c->lr=0x805AFE50u; f_805A6C2C(c); // 805AFE4C
  c->r[6]=R32(c->r[27]+0x00000018u); // 805AFE50
  c->r[22]=c->r[3]|c->r[3]; // 805AFE54
  c->r[5]=R32(c->r[27]+0x0000004Cu); // 805AFE58
  c->r[4]=R32(c->r[27]+0x00000048u); // 805AFE5C
  c->r[3]=R32(c->r[6]+0x00000074u); // 805AFE60
  c->lr=0x805AFE68u; f_8059E360(c); // 805AFE64
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AFE68
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AFE6C
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AFE70
  c->r[0]=c->r[3]^c->r[5]; // 805AFE74
  c->r[0]=cntlz(c->r[0]); // 805AFE78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFE7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFE80
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFE84
  c->r[0]=0u-c->r[3]; // 805AFE88
  c->r[0]=c->r[0]|c->r[3]; // 805AFE8C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFE90
  if (crb(c,2)) { goto L_805AFED0; } // 805AFE94
  W32(c->r[5]+0x00000000u,c->r[31]); // 805AFE98
  c->r[3]=mftb(c,268); // 805AFE9C
  c->r[0]=c->r[5]+0x0000000Cu; // 805AFEA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AFEA4
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AFEA8
  goto L_805AFED0; // 805AFEAC
L_805AFEB0:;
  c->r[8]=R32(c->r[27]+0x0000004Cu); // 805AFEB0
  c->r[3]=c->r[4]|c->r[4]; // 805AFEB4
  c->r[7]=R32(c->r[27]+0x00000048u); // 805AFEB8
  c->r[6]=c->r[27]|c->r[27]; // 805AFEBC
  c->r[4]=c->r[4]+0x00000010u; // 805AFEC0
  c->r[5]=c->r[1]+0x00000010u; // 805AFEC4
  c->lr=0x805AFECCu; f_8059B218(c); // 805AFEC8
  c->r[22]=c->r[3]|c->r[3]; // 805AFECC
L_805AFED0:;
  cmps(c,0,(int32_t)c->r[22],5); // 805AFED0
  if (!crb(c,1)) { goto L_805AFF08; } // 805AFED4
  c->r[0]=R8(c->r[27]+0x00000026u); // 805AFED8
  c->r[0]=rotl(c->r[0],28)&0x00000003u; cr0(c,c->r[0]); // 805AFEDC
  if (crb(c,2)) { goto L_805AFF08; } // 805AFEE0
  c->r[3]=R32(c->r[27]+0x00000018u); // 805AFEE4
  c->r[0]=R8(c->r[3]+0x000000D1u); // 805AFEE8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFEEC
  c->r[0]=0u-c->r[4]; // 805AFEF0
  c->r[0]=c->r[0]|c->r[4]; // 805AFEF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFEF8
  if (crb(c,2)) { goto L_805AFF08; } // 805AFEFC
  c->r[4]=c->r[27]|c->r[27]; // 805AFF00
  c->lr=0x805AFF08u; f_805BBF00(c); // 805AFF04
L_805AFF08:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFF08
  c->r[0]=R32(c->r[3]+0x00000178u); // 805AFF0C
  cmps(c,0,(int32_t)c->r[0],0); // 805AFF10
  if (crb(c,2)) { goto L_805AFF70; } // 805AFF14
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AFF18
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AFF1C
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AFF20
  c->r[0]=c->r[3]^c->r[5]; // 805AFF24
  c->r[0]=cntlz(c->r[0]); // 805AFF28
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805AFF2C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805AFF30
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFF34
  c->r[0]=0u-c->r[3]; // 805AFF38
  c->r[0]=c->r[0]|c->r[3]; // 805AFF3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFF40
  if (crb(c,2)) { goto L_805AFF60; } // 805AFF44
  c->r[0]=c->r[23]+0x000000C6u; // 805AFF48
  W32(c->r[5]+0x00000000u,c->r[0]); // 805AFF4C
  c->r[3]=mftb(c,268); // 805AFF50
  W32(c->r[5]+0x00000004u,c->r[3]); // 805AFF54
  c->r[0]=c->r[5]+0x0000000Cu; // 805AFF58
  W32(c->r[4]+0x00000004u,c->r[0]); // 805AFF5C
L_805AFF60:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFF60
  c->r[4]=c->r[27]|c->r[27]; // 805AFF64
  c->r[5]=c->r[26]|c->r[26]; // 805AFF68
  c->lr=0x805AFF70u; f_805B52F4(c); // 805AFF6C
L_805AFF70:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 805AFF70
  c->r[24]=c->r[24]+0xFFFFFFFCu; // 805AFF74
L_805AFF78:;
  cmps(c,0,(int32_t)c->r[28],0); // 805AFF78
  if (!crb(c,0)) { IRQCHK(c); goto L_805AFDD8; } // 805AFF7C
  c->r[22]=R32(c->r[25]+0x0000000Cu); // 805AFF80
  c->r[0]=R32(c->r[22]+0x00000090u); // 805AFF84
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805AFF88
  W32(c->r[22]+0x00000090u,c->r[0]); // 805AFF8C
  if (!crb(c,2)) { goto L_805AFFE0; } // 805AFF90
  c->r[0]=R8(c->r[22]+0x00000098u); // 805AFF94
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805AFF98
  c->r[0]=0u-c->r[3]; // 805AFF9C
  c->r[0]=c->r[0]|c->r[3]; // 805AFFA0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805AFFA4
  if (!crb(c,2)) { goto L_805AFFE0; } // 805AFFA8
  c->r[0]=R32(c->r[22]+0x00000088u); // 805AFFAC
  cmps(c,0,(int32_t)c->r[0],0); // 805AFFB0
  if (crb(c,2)) { goto L_805AFFC0; } // 805AFFB4
  c->r[3]=c->r[22]|c->r[22]; // 805AFFB8
  c->lr=0x805AFFC0u; f_805C4D34(c); // 805AFFBC
L_805AFFC0:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 805AFFC0
  cmps(c,0,(int32_t)c->r[0],1); // 805AFFC4
  if (!crb(c,2)) { goto L_805AFFE0; } // 805AFFC8
  c->r[0]=R32(c->r[22]+0x0000008Cu); // 805AFFCC
  cmps(c,0,(int32_t)c->r[0],0); // 805AFFD0
  if (crb(c,2)) { goto L_805AFFE0; } // 805AFFD4
  c->r[3]=c->r[22]|c->r[22]; // 805AFFD8
  c->lr=0x805AFFE0u; f_805C4D44(c); // 805AFFDC
L_805AFFE0:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805AFFE0
  c->r[0]=R32(c->r[3]+0x00000160u); // 805AFFE4
  cmps(c,0,(int32_t)c->r[0],0); // 805AFFE8
  if (crb(c,2)) { goto L_805B009C; } // 805AFFEC
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805AFFF0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805AFFF4
  c->r[5]=R32(c->r[4]+0x00000004u); // 805AFFF8
  c->r[0]=c->r[3]^c->r[5]; // 805AFFFC
  c->r[0]=cntlz(c->r[0]); // 805B0000
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B0004
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B0008
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B000C
  c->r[0]=0u-c->r[3]; // 805B0010
  c->r[0]=c->r[0]|c->r[3]; // 805B0014
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B0018
  if (crb(c,2)) { goto L_805B0040; } // 805B001C
  c->r[3]=0u+0x806C0000u; // 805B0020
  c->r[3]=c->r[3]+0xFFFFE290u; // 805B0024
  c->r[0]=c->r[3]+0x000000DEu; // 805B0028
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B002C
  c->r[3]=mftb(c,268); // 805B0030
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B0034
  c->r[0]=c->r[5]+0x0000000Cu; // 805B0038
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B003C
L_805B0040:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 805B0040
  c->r[4]=c->r[26]|c->r[26]; // 805B0044
  c->lr=0x805B004Cu; f_805B501C(c); // 805B0048
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B004C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B0050
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B0054
  c->r[0]=c->r[3]^c->r[5]; // 805B0058
  c->r[0]=cntlz(c->r[0]); // 805B005C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B0060
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B0064
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B0068
  c->r[0]=0u-c->r[3]; // 805B006C
  c->r[0]=c->r[0]|c->r[3]; // 805B0070
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B0074
  if (crb(c,2)) { goto L_805B009C; } // 805B0078
  c->r[3]=0u+0x806C0000u; // 805B007C
  c->r[3]=c->r[3]+0xFFFFE290u; // 805B0080
  c->r[0]=c->r[3]+0x0000001Au; // 805B0084
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B0088
  c->r[3]=mftb(c,268); // 805B008C
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B0090
  c->r[0]=c->r[5]+0x0000000Cu; // 805B0094
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B0098
L_805B009C:;
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B009C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B00A0
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B00A4
  c->r[0]=c->r[3]^c->r[5]; // 805B00A8
  c->r[0]=cntlz(c->r[0]); // 805B00AC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B00B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B00B4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B00B8
  c->r[0]=0u-c->r[3]; // 805B00BC
  c->r[0]=c->r[0]|c->r[3]; // 805B00C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B00C4
  if (crb(c,2)) { goto L_805B00EC; } // 805B00C8
  c->r[3]=0u+0x806C0000u; // 805B00CC
  c->r[3]=c->r[3]+0xFFFFE290u; // 805B00D0
  c->r[0]=c->r[3]+0x00000071u; // 805B00D4
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B00D8
  c->r[3]=mftb(c,268); // 805B00DC
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B00E0
  c->r[0]=c->r[5]+0x0000000Cu; // 805B00E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B00E8
L_805B00EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B00EC
  c->r[11]=c->r[10]|c->r[10]; // 805B00F0
  c->lr=0x805B00F8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805B00F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B00F8
  c->lr=c->r[0]; // 805B00FC
  c->r[1]=c->r[10]|c->r[10]; // 805B0100
  return; // 805B0104
}

// fn_805B0108
void f_805B0108(Ctx* __restrict c) {
  trace_call(0x805B0108u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B0108
  c->r[0]=c->lr; // 805B010C
  W32(c->r[1]+0x00000034u,c->r[0]); // 805B0110
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 805B0114
  c->r[25]=c->r[3]|c->r[3]; // 805B0118
  c->r[27]=0u+0x00000000u; // 805B011C
  c->r[29]=0u+0x00000000u; // 805B0120
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 805B0124
  goto L_805B017C; // 805B0128
L_805B012C:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 805B012C
  c->r[26]=0u+0x00000000u; // 805B0130
  c->r[28]=0u+0x00000000u; // 805B0134
  c->r[31]=R32(c->r[3]+c->r[29]); // 805B0138
  goto L_805B0168; // 805B013C
L_805B0140:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 805B0140
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 805B0144
  c->r[3]=R32(c->r[3]+c->r[28]); // 805B0148
  c->r[4]=c->r[4]+0x000001B0u; // 805B014C
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B0150
  c->r[12]=R32(c->r[12]+0x00000014u); // 805B0154
  c->ctr=c->r[12]; // 805B0158
  if (true) { c->lr=0x805B0160u; dispatch(c,c->ctr); } // 805B015C
  c->r[28]=c->r[28]+0x00000004u; // 805B0160
  c->r[26]=c->r[26]+0x00000001u; // 805B0164
L_805B0168:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 805B0168
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 805B016C
  if (crb(c,0)) { IRQCHK(c); goto L_805B0140; } // 805B0170
  c->r[29]=c->r[29]+0x00000004u; // 805B0174
  c->r[27]=c->r[27]+0x00000001u; // 805B0178
L_805B017C:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 805B017C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 805B0180
  if (crb(c,0)) { IRQCHK(c); goto L_805B012C; } // 805B0184
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 805B0188
  c->r[0]=R32(c->r[1]+0x00000034u); // 805B018C
  c->lr=c->r[0]; // 805B0190
  c->r[1]=c->r[1]+0x00000030u; // 805B0194
  return; // 805B0198
}

// fn_805B019C
void f_805B019C(Ctx* __restrict c) {
  trace_call(0x805B019Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805B019C
  c->r[12]=c->r[1]|c->r[1]; // 805B01A0
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 805B01A4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805B01A8
  c->r[0]=c->lr; // 805B01AC
  c->r[11]=c->r[12]|c->r[12]; // 805B01B0
  W32(c->r[12]+0x00000004u,c->r[0]); // 805B01B4
  c->lr=0x805B01BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805B01B8
  c->r[9]=R32(c->r[6]+0x00000074u); // 805B01BC
  c->r[31]=c->r[8]|c->r[8]; // 805B01C0
  c->r[11]=R32(c->r[7]+0x00000000u); // 805B01C4
  c->r[28]=c->r[4]|c->r[4]; // 805B01C8
  c->r[0]=R32(c->r[9]+0x00000000u); // 805B01CC
  c->r[29]=c->r[5]|c->r[5]; // 805B01D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 805B01D4
  c->r[30]=c->r[6]|c->r[6]; // 805B01D8
  c->r[27]=c->r[3]|c->r[3]; // 805B01DC
  c->r[10]=R32(c->r[7]+0x00000004u); // 805B01E0
  {uint32_t ea=c->r[9]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B01E4
  c->r[3]=c->r[28]|c->r[28]; // 805B01E8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 805B01EC
  c->r[4]=c->r[29]|c->r[29]; // 805B01F0
  c->r[8]=R32(c->r[7]+0x00000008u); // 805B01F4
  c->r[5]=c->r[30]|c->r[30]; // 805B01F8
  c->r[0]=R32(c->r[9]+0x00000008u); // 805B01FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 805B0200
  c->r[0]=R32(c->r[9]+0x0000000Cu); // 805B0204
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 805B0208
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 805B020C
  c->r[7]=R32(c->r[9]+0x00000010u); // 805B0210
  W32(c->r[1]+0x00000020u,c->r[7]); // 805B0214
  c->r[12]=R32(c->r[9]+0x00000020u); // 805B0218
  c->r[7]=R32(c->r[9]+0x00000024u); // 805B021C
  W32(c->r[1]+0x00000034u,c->r[7]); // 805B0220
  W32(c->r[1]+0x00000030u,c->r[12]); // 805B0224
  c->r[12]=R32(c->r[9]+0x00000028u); // 805B0228
  c->r[7]=R32(c->r[9]+0x0000002Cu); // 805B022C
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 805B0230
  W32(c->r[1]+0x00000038u,c->r[12]); // 805B0234
  c->r[12]=R32(c->r[9]+0x00000030u); // 805B0238
  c->r[7]=R32(c->r[9]+0x00000034u); // 805B023C
  W32(c->r[1]+0x00000044u,c->r[7]); // 805B0240
  W32(c->r[1]+0x00000040u,c->r[12]); // 805B0244
  c->r[12]=R32(c->r[9]+0x00000038u); // 805B0248
  c->r[7]=R32(c->r[9]+0x0000003Cu); // 805B024C
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 805B0250
  W32(c->r[1]+0x00000048u,c->r[12]); // 805B0254
  c->r[12]=R32(c->r[9]+0x00000040u); // 805B0258
  c->r[7]=R32(c->r[9]+0x00000044u); // 805B025C
  W32(c->r[1]+0x00000054u,c->r[7]); // 805B0260
  W32(c->r[1]+0x00000050u,c->r[12]); // 805B0264
  c->r[12]=R32(c->r[9]+0x00000048u); // 805B0268
  c->r[7]=R32(c->r[9]+0x0000004Cu); // 805B026C
  W32(c->r[1]+0x0000005Cu,c->r[7]); // 805B0270
  W32(c->r[1]+0x00000058u,c->r[12]); // 805B0274
  {uint32_t ea=c->r[9]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0278
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 805B027C
  {uint32_t ea=c->r[9]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0280
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 805B0284
  {uint32_t ea=c->r[9]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0288
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 805B028C
  {uint32_t ea=c->r[9]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0290
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 805B0294
  c->r[7]=R32(c->r[9]+0x00000060u); // 805B0298
  W32(c->r[1]+0x00000070u,c->r[7]); // 805B029C
  c->r[7]=R32(c->r[9]+0x00000064u); // 805B02A0
  W32(c->r[1]+0x00000074u,c->r[7]); // 805B02A4
  c->r[7]=R8(c->r[9]+0x00000068u); // 805B02A8
  W8(c->r[1]+0x00000078u,c->r[7]); // 805B02AC
  c->r[7]=R8(c->r[9]+0x00000069u); // 805B02B0
  W8(c->r[1]+0x00000079u,c->r[7]); // 805B02B4
  c->r[7]=R32(c->r[9]+0x0000006Cu); // 805B02B8
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 805B02BC
  W32(c->r[1]+0x00000060u,c->r[11]); // 805B02C0
  W32(c->r[1]+0x00000064u,c->r[10]); // 805B02C4
  W32(c->r[1]+0x00000068u,c->r[8]); // 805B02C8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 805B02CC
  c->r[7]=R32(c->r[6]+0x00000090u); // 805B02D0
  c->r[0]=c->r[7]+0x00000001u; // 805B02D4
  W32(c->r[6]+0x00000090u,c->r[0]); // 805B02D8
  c->lr=0x805B02E0u; f_805AEE24(c); // 805B02DC
  c->r[3]=c->r[27]|c->r[27]; // 805B02E0
  c->r[4]=c->r[28]|c->r[28]; // 805B02E4
  c->r[5]=c->r[29]|c->r[29]; // 805B02E8
  c->r[7]=c->r[31]|c->r[31]; // 805B02EC
  c->r[6]=c->r[1]+0x00000010u; // 805B02F0
  c->lr=0x805B02F8u; f_805B0364(c); // 805B02F4
  c->r[0]=R32(c->r[30]+0x00000090u); // 805B02F8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805B02FC
  W32(c->r[30]+0x00000090u,c->r[0]); // 805B0300
  if (!crb(c,2)) { goto L_805B0348; } // 805B0304
  c->r[0]=R8(c->r[30]+0x00000098u); // 805B0308
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B030C
  if (!crb(c,2)) { goto L_805B0348; } // 805B0310
  c->r[0]=R32(c->r[30]+0x00000088u); // 805B0314
  cmps(c,0,(int32_t)c->r[0],0); // 805B0318
  if (crb(c,2)) { goto L_805B0328; } // 805B031C
  c->r[3]=c->r[30]|c->r[30]; // 805B0320
  c->lr=0x805B0328u; f_805C4D34(c); // 805B0324
L_805B0328:;
  c->r[0]=R32(c->r[30]+0x000000A0u); // 805B0328
  cmps(c,0,(int32_t)c->r[0],1); // 805B032C
  if (!crb(c,2)) { goto L_805B0348; } // 805B0330
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 805B0334
  cmps(c,0,(int32_t)c->r[0],0); // 805B0338
  if (crb(c,2)) { goto L_805B0348; } // 805B033C
  c->r[3]=c->r[30]|c->r[30]; // 805B0340
  c->lr=0x805B0348u; f_805C4D44(c); // 805B0344
L_805B0348:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B0348
  c->r[11]=c->r[10]|c->r[10]; // 805B034C
  c->lr=0x805B0354u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805B0350
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B0354
  c->lr=c->r[0]; // 805B0358
  c->r[1]=c->r[10]|c->r[10]; // 805B035C
  return; // 805B0360
}

// fn_805B0364
void f_805B0364(Ctx* __restrict c) {
  trace_call(0x805B0364u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B0364
  c->r[0]=c->lr; // 805B0368
  c->r[8]=c->r[7]|c->r[7]; // 805B036C
  c->r[11]=0u+0x80720000u; // 805B0370
  W32(c->r[1]+0x00000024u,c->r[0]); // 805B0374
  c->r[7]=c->r[1]+0x00000008u; // 805B0378
  {uint32_t ea=c->r[11]+0x00002A80u; c->r[10]=R32(ea); c->r[11]=ea;} // 805B037C
  W32(c->r[1]+0x00000008u,c->r[10]); // 805B0380
  c->r[9]=R32(c->r[11]+0x00000004u); // 805B0384
  c->r[0]=R32(c->r[11]+0x00000008u); // 805B0388
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 805B038C
  W32(c->r[1]+0x00000010u,c->r[0]); // 805B0390
  c->lr=0x805B0398u; f_805B054C(c); // 805B0394
  c->r[0]=R32(c->r[1]+0x00000024u); // 805B0398
  c->lr=c->r[0]; // 805B039C
  c->r[1]=c->r[1]+0x00000020u; // 805B03A0
  return; // 805B03A4
}

// fn_805B03A8
void f_805B03A8(Ctx* __restrict c) {
  trace_call(0x805B03A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B03A8
  c->r[0]=c->lr; // 805B03AC
  {uint32_t ea=c->r[2]+0x00002928u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B03B0
  c->r[3]=c->r[6]+0x00000010u; // 805B03B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 805B03B8
  c->r[0]=0u+0x00000000u; // 805B03BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 805B03C0
  c->r[31]=c->r[6]|c->r[6]; // 805B03C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 805B03C8
  c->r[30]=c->r[5]|c->r[5]; // 805B03CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 805B03D0
  c->r[29]=c->r[4]|c->r[4]; // 805B03D4
  W32(c->r[6]+0x00000000u,c->r[3]); // 805B03D8
  c->r[3]=c->r[29]|c->r[29]; // 805B03DC
  {uint32_t ea=c->r[6]+0x00003030u; WF32(ea,c->f[0]);} // 805B03E0
  W32(c->r[6]+0x00003080u,c->r[0]); // 805B03E4
  c->r[6]=R32(c->r[5]+0x00000000u); // 805B03E8
  c->r[0]=c->r[6]+0x00001B60u; // 805B03EC
  W32(c->r[5]+0x00000060u,c->r[0]); // 805B03F0
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 805B03F4
  c->r[4]=c->r[30]|c->r[30]; // 805B03F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B03FC
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 805B0400
  c->r[6]=c->r[6]+c->r[0]; // 805B0404
  c->r[0]=R32(c->r[6]+0x00001B30u); // 805B0408
  W32(c->r[5]+0x00000010u,c->r[0]); // 805B040C
  c->r[5]=c->r[31]|c->r[31]; // 805B0410
  c->r[6]=R32(c->r[29]+0x00000008u); // 805B0414
  c->lr=0x805B041Cu; f_805D0A40(c); // 805B0418
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805B041C
  c->r[4]=0u+0x00000000u; // 805B0420
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B0424
  c->r[12]=R32(c->r[12]+0x00000068u); // 805B0428
  c->ctr=c->r[12]; // 805B042C
  if (true) { c->lr=0x805B0434u; dispatch(c,c->ctr); } // 805B0430
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 805B0434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B0438
  if (!crb(c,2)) { goto L_805B044C; } // 805B043C
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805B0440
  c->r[0]=0u+0x00000001u; // 805B0444
  W32(c->r[3]+0x00000004u,c->r[0]); // 805B0448
L_805B044C:;
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805B044C
  c->r[0]=R32(c->r[3]+0x00000004u); // 805B0450
  cmps(c,0,(int32_t)c->r[0],1); // 805B0454
  if (crb(c,2)) { goto L_805B049C; } // 805B0458
  c->r[3]=R32(c->r[31]+0x00000000u); // 805B045C
  c->r[0]=c->r[31]+0x00000010u; // 805B0460
  c->r[0]=c->r[0]-c->r[3]; // 805B0464
  c->r[0]=cntlz(c->r[0]); // 805B0468
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 805B046C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B0470
  if (!crb(c,2)) { goto L_805B049C; } // 805B0474
  c->r[3]=R32(c->r[29]+0x00000008u); // 805B0478
  c->r[6]=c->r[30]|c->r[30]; // 805B047C
  c->r[7]=c->r[31]|c->r[31]; // 805B0480
  c->r[4]=R32(c->r[29]+0x00000010u); // 805B0484
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B0488
  c->r[5]=R32(c->r[29]+0x00000014u); // 805B048C
  c->r[12]=R32(c->r[12]+0x00000020u); // 805B0490
  c->ctr=c->r[12]; // 805B0494
  if (true) { c->lr=0x805B049Cu; dispatch(c,c->ctr); } // 805B0498
L_805B049C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 805B049C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 805B04A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 805B04A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 805B04A8
  c->lr=c->r[0]; // 805B04AC
  c->r[1]=c->r[1]+0x00000020u; // 805B04B0
  return; // 805B04B4
}

// fn_805B04B8
void f_805B04B8(Ctx* __restrict c) {
  trace_call(0x805B04B8u);
  c->r[3]=c->r[4]|c->r[4]; // 805B04B8
  c->r[4]=c->r[5]|c->r[5]; // 805B04BC
  f_805D0590(c); return; // 805B04C0
}

// fn_805B04C4
void f_805B04C4(Ctx* __restrict c) {
  trace_call(0x805B04C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B04C4
  c->r[0]=c->lr; // 805B04C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 805B04CC
  c->r[0]=rotl(c->r[7],0)&0x00000002u; cr0(c,c->r[0]); // 805B04D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805B04D4
  c->r[31]=c->r[7]|c->r[7]; // 805B04D8
  W32(c->r[1]+0x00000028u,c->r[30]); // 805B04DC
  c->r[30]=c->r[5]|c->r[5]; // 805B04E0
  W32(c->r[1]+0x00000024u,c->r[29]); // 805B04E4
  c->r[29]=c->r[4]|c->r[4]; // 805B04E8
  if (crb(c,2)) { goto L_805B051C; } // 805B04EC
  c->r[11]=0u+0x80720000u; // 805B04F0
  {uint32_t ea=c->r[11]+0x00002A8Cu; c->r[10]=R32(ea); c->r[11]=ea;} // 805B04F4
  W32(c->r[1]+0x00000008u,c->r[10]); // 805B04F8
  c->r[7]=c->r[1]+0x00000008u; // 805B04FC
  c->r[9]=R32(c->r[11]+0x00000004u); // 805B0500
  c->r[8]=0u+0x00000000u; // 805B0504
  c->r[0]=R32(c->r[11]+0x00000008u); // 805B0508
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 805B050C
  W32(c->r[1]+0x00000010u,c->r[0]); // 805B0510
  c->r[6]=R32(c->r[6]+0x00000074u); // 805B0514
  c->lr=0x805B051Cu; f_805B054C(c); // 805B0518
L_805B051C:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 805B051C
  if (crb(c,2)) { goto L_805B0530; } // 805B0520
  c->r[3]=c->r[29]|c->r[29]; // 805B0524
  c->r[4]=c->r[30]|c->r[30]; // 805B0528
  c->lr=0x805B0530u; f_8059F86C(c); // 805B052C
L_805B0530:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805B0530
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805B0534
  c->r[30]=R32(c->r[1]+0x00000028u); // 805B0538
  c->r[29]=R32(c->r[1]+0x00000024u); // 805B053C
  c->lr=c->r[0]; // 805B0540
  c->r[1]=c->r[1]+0x00000030u; // 805B0544
  return; // 805B0548
}

// fn_805B054C
void f_805B054C(Ctx* __restrict c) {
  trace_call(0x805B054Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805B054C
  c->r[12]=c->r[1]|c->r[1]; // 805B0550
  c->r[11]=addc(c,~c->r[11],0xFFFFCBF0u,1); // 805B0554
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805B0558
  c->r[0]=c->lr; // 805B055C
  c->r[11]=c->r[12]+0xFFFFFEE0u; // 805B0560
  W32(c->r[12]+0x00000004u,c->r[0]); // 805B0564
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805B0568
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805B056C
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 805B0570
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 805B0574
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 805B0578
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 805B057C
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 805B0580
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 805B0584
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 805B0588
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 805B058C
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 805B0590
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 805B0594
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 805B0598
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 805B059C
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 805B05A0
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 805B05A4
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 805B05A8
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 805B05AC
  {uint32_t ea=c->r[12]+0xFFFFFF60u; WF64(ea,c->f[22]);} // 805B05B0
  {uint32_t ea=c->r[12]+0xFFFFFF68u; psq_store(c,22,ea,0,0);} // 805B05B4
  {uint32_t ea=c->r[12]+0xFFFFFF50u; WF64(ea,c->f[21]);} // 805B05B8
  {uint32_t ea=c->r[12]+0xFFFFFF58u; psq_store(c,21,ea,0,0);} // 805B05BC
  {uint32_t ea=c->r[12]+0xFFFFFF40u; WF64(ea,c->f[20]);} // 805B05C0
  {uint32_t ea=c->r[12]+0xFFFFFF48u; psq_store(c,20,ea,0,0);} // 805B05C4
  {uint32_t ea=c->r[12]+0xFFFFFF30u; WF64(ea,c->f[19]);} // 805B05C8
  {uint32_t ea=c->r[12]+0xFFFFFF38u; psq_store(c,19,ea,0,0);} // 805B05CC
  {uint32_t ea=c->r[12]+0xFFFFFF20u; WF64(ea,c->f[18]);} // 805B05D0
  {uint32_t ea=c->r[12]+0xFFFFFF28u; psq_store(c,18,ea,0,0);} // 805B05D4
  {uint32_t ea=c->r[12]+0xFFFFFF10u; WF64(ea,c->f[17]);} // 805B05D8
  {uint32_t ea=c->r[12]+0xFFFFFF18u; psq_store(c,17,ea,0,0);} // 805B05DC
  {uint32_t ea=c->r[12]+0xFFFFFF00u; WF64(ea,c->f[16]);} // 805B05E0
  {uint32_t ea=c->r[12]+0xFFFFFF08u; psq_store(c,16,ea,0,0);} // 805B05E4
  {uint32_t ea=c->r[12]+0xFFFFFEF0u; WF64(ea,c->f[15]);} // 805B05E8
  {uint32_t ea=c->r[12]+0xFFFFFEF8u; psq_store(c,15,ea,0,0);} // 805B05EC
  {uint32_t ea=c->r[12]+0xFFFFFEE0u; WF64(ea,c->f[14]);} // 805B05F0
  {uint32_t ea=c->r[12]+0xFFFFFEE8u; psq_store(c,14,ea,0,0);} // 805B05F4
  c->lr=0x805B05FCu; f_803A9BD0(c); // 805B05F8
  W32(c->r[1]+0x00000010u,c->r[4]); // 805B05FC
  c->r[22]=c->r[3]|c->r[3]; // 805B0600
  c->r[23]=c->r[6]|c->r[6]; // 805B0604
  c->r[24]=c->r[7]|c->r[7]; // 805B0608
  W32(c->r[1]+0x00000014u,c->r[5]); // 805B060C
  c->r[4]=c->r[5]|c->r[5]; // 805B0610
  c->r[3]=c->r[1]+0x00000150u; // 805B0614
  W32(c->r[1]+0x00000018u,c->r[8]); // 805B0618
  c->lr=0x805B0620u; f_80624A1C(c); // 805B061C
  c->r[3]=c->r[1]+0x000001B0u; // 805B0620
  c->r[0]=c->r[1]+0x000031B0u; // 805B0624
L_805B0628:;
  c->r[3]=c->r[3]+0x00000030u; // 805B0628
  cmpu(c,0,c->r[3],c->r[0]); // 805B062C
  if (crb(c,0)) { IRQCHK(c); goto L_805B0628; } // 805B0630
  {uint32_t ea=c->r[2]+0x00002928u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0634
  c->r[0]=0u+0x00000000u; // 805B0638
  {uint32_t ea=c->r[1]+0x000031D0u; WF32(ea,c->f[0]);} // 805B063C
  c->r[30]=c->r[1]+0x00000110u; // 805B0640
  {uint32_t ea=c->r[2]+0x00002930u; c->f[0]=RF64(ea);} // 805B0644
  c->r[31]=c->r[1]+0x00000130u; // 805B0648
  {uint32_t ea=c->r[1]+0x00003240u; WF64(ea,c->f[0]);} // 805B064C
  c->r[20]=c->r[1]+0x000000C0u; // 805B0650
  {uint32_t ea=c->r[2]+0x00002940u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0654
  c->r[19]=0u+0x00000008u; // 805B0658
  {uint32_t ea=c->r[2]+0x00002910u; c->f[19]=c->ps1[19]=RF32(ea);} // 805B065C
  {uint32_t ea=c->r[1]+0x00003258u; WF64(ea,c->f[0]);} // 805B0660
  {uint32_t ea=c->r[2]+0x00002944u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0664
  {uint32_t ea=c->r[1]+0x00003260u; WF64(ea,c->f[0]);} // 805B0668
  {uint32_t ea=c->r[2]+0x0000293Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B066C
  {uint32_t ea=c->r[1]+0x00003250u; WF64(ea,c->f[0]);} // 805B0670
  {uint32_t ea=c->r[2]+0x00002938u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0674
  W32(c->r[1]+0x000001A4u,c->r[0]); // 805B0678
  c->r[0]=0u+0x00000000u; // 805B067C
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 805B0680
  W32(c->r[1]+0x00003268u,c->r[0]); // 805B0684
  c->r[0]=0u+0x00000000u; // 805B0688
  {uint32_t ea=c->r[2]+0x0000292Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 805B068C
  {uint32_t ea=c->r[1]+0x000031E4u; WF32(ea,c->f[19]);} // 805B0690
  {uint32_t ea=c->r[1]+0x000031E8u; WF32(ea,c->f[19]);} // 805B0694
  {uint32_t ea=c->r[1]+0x00003248u; WF64(ea,c->f[0]);} // 805B0698
  W32(c->r[1]+0x00003290u,c->r[0]); // 805B069C
  goto L_805B1034; // 805B06A0
L_805B06A4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 805B06A4
  c->r[5]=0u+0x00000000u; // 805B06A8
  c->r[0]=R32(c->r[1]+0x00003290u); // 805B06AC
  c->r[28]=R32(c->r[3]+c->r[0]); // 805B06B0
  c->r[3]=c->r[1]+0x00000150u; // 805B06B4
  c->r[27]=c->r[28]+0x00000010u; // 805B06B8
  c->r[4]=c->r[27]|c->r[27]; // 805B06BC
  c->lr=0x805B06C4u; f_80624678(c); // 805B06C0
  c->r[26]=0u+0x00000000u; // 805B06C4
  c->r[21]=0u+0x00000000u; // 805B06C8
  goto L_805B1010; // 805B06CC
L_805B06D0:;
  c->r[0]=R32(c->r[27]+0x00000050u); // 805B06D0
  c->r[3]=c->r[1]+0x00000150u; // 805B06D4
  c->r[29]=c->r[0]+c->r[21]; // 805B06D8
  c->r[4]=R32(c->r[29]+0x00000004u); // 805B06DC
  c->lr=0x805B06E4u; f_8062461C(c); // 805B06E0
  c->r[0]=R32(c->r[1]+0x00000158u); // 805B06E4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 805B06E8
  c->r[5]=sraw(c,c->r[0],31); // 805B06EC
  c->r[0]=addc(c,~c->r[3],c->r[0],1); // 805B06F0
  c->r[0]=addc(c,c->r[5],c->r[4],c->xer_ca); // 805B06F4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 805B06F8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B06FC
  c->r[0]=0u-c->r[3]; // 805B0700
  c->r[0]=c->r[0]|c->r[3]; // 805B0704
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B0708
  if (!crb(c,2)) { goto L_805B1008; } // 805B070C
  c->r[25]=R32(c->r[29]+0x00000000u); // 805B0710
  c->r[4]=R32(c->r[25]+0x00000010u); // 805B0714
  c->r[5]=R32(c->r[25]+0x00000014u); // 805B0718
  c->r[3]=R8(c->r[4]+0x00000010u); // 805B071C
  c->r[0]=R8(c->r[5]+0x00000010u); // 805B0720
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B0724
  c->r[4]=c->r[4]+c->r[3]; // 805B0728
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B072C
  c->r[3]=R8(c->r[4]+0x000000E8u); // 805B0730
  c->r[5]=c->r[5]+c->r[0]; // 805B0734
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 805B0738
  c->r[0]=cntlz(c->r[0]); // 805B073C
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 805B0740
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B0744
  c->r[0]=0u-c->r[3]; // 805B0748
  c->r[0]=c->r[0]|c->r[3]; // 805B074C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B0750
  if (crb(c,2)) { goto L_805B0760; } // 805B0754
  c->r[0]=R32(c->r[5]+0x000000C8u); // 805B0758
  goto L_805B0764; // 805B075C
L_805B0760:;
  c->r[0]=R32(c->r[4]+0x000000C8u); // 805B0760
L_805B0764:;
  W32(c->r[1]+0x000001A4u,c->r[0]); // 805B0764
  c->r[3]=c->r[25]|c->r[25]; // 805B0768
  c->r[4]=c->r[23]|c->r[23]; // 805B076C
  c->lr=0x805B0774u; f_805D0590(c); // 805B0770
  c->r[3]=c->r[22]|c->r[22]; // 805B0774
  c->r[4]=c->r[25]|c->r[25]; // 805B0778
  c->r[5]=c->r[23]|c->r[23]; // 805B077C
  c->r[12]=c->r[24]|c->r[24]; // 805B0780
  c->r[6]=c->r[1]+0x000001A0u; // 805B0784
  c->lr=0x805B078Cu; f_803A9A8C(c); // 805B0788
  c->r[0]=c->r[0]|0x00000000u; // 805B078C
  c->r[0]=R32(c->r[1]+0x00000018u); // 805B0790
  cmps(c,0,(int32_t)c->r[0],1); // 805B0794
  if (!crb(c,2)) { goto L_805B0FE8; } // 805B0798
  c->r[3]=R32(c->r[1]+0x000001A0u); // 805B079C
  c->r[0]=c->r[1]+0x000001B0u; // 805B07A0
  cmpu(c,0,c->r[3],c->r[0]); // 805B07A4
  if (crb(c,2)) { goto L_805B0FE8; } // 805B07A8
  c->r[11]=R32(c->r[28]+0x00000118u); // 805B07AC
  c->r[16]=c->r[28]+0x00000010u; // 805B07B0
  W32(c->r[1]+0x00003294u,c->r[11]); // 805B07B4
  c->r[11]=R32(c->r[28]+0x0000011Cu); // 805B07B8
  c->r[0]=R32(c->r[28]+0x00000110u); // 805B07BC
  W32(c->r[1]+0x0000326Cu,c->r[11]); // 805B07C0
  c->r[11]=R32(c->r[28]+0x00000120u); // 805B07C4
  W32(c->r[1]+0x00003270u,c->r[11]); // 805B07C8
  c->r[11]=R32(c->r[28]+0x00000124u); // 805B07CC
  W32(c->r[1]+0x000000A0u,c->r[0]); // 805B07D0
  c->r[0]=R32(c->r[1]+0x00003294u); // 805B07D4
  W32(c->r[1]+0x00003274u,c->r[11]); // 805B07D8
  c->r[11]=R32(c->r[28]+0x00000128u); // 805B07DC
  W32(c->r[1]+0x000000A8u,c->r[0]); // 805B07E0
  c->r[0]=R32(c->r[1]+0x0000326Cu); // 805B07E4
  W32(c->r[1]+0x000000ACu,c->r[0]); // 805B07E8
  c->r[0]=R32(c->r[1]+0x00003270u); // 805B07EC
  W32(c->r[1]+0x00003278u,c->r[11]); // 805B07F0
  c->r[11]=R32(c->r[28]+0x0000012Cu); // 805B07F4
  W32(c->r[1]+0x0000327Cu,c->r[11]); // 805B07F8
  c->r[10]=R32(c->r[28]+0x000000F0u); // 805B07FC
  W32(c->r[1]+0x000000B0u,c->r[0]); // 805B0800
  c->r[0]=R32(c->r[1]+0x00003274u); // 805B0804
  W32(c->r[1]+0x000000B4u,c->r[0]); // 805B0808
  c->r[0]=R32(c->r[1]+0x00003278u); // 805B080C
  c->r[9]=R32(c->r[28]+0x000000F4u); // 805B0810
  c->r[8]=R32(c->r[28]+0x000000F8u); // 805B0814
  c->r[7]=R32(c->r[28]+0x000000FCu); // 805B0818
  c->r[6]=R32(c->r[28]+0x00000100u); // 805B081C
  c->r[5]=R32(c->r[28]+0x00000104u); // 805B0820
  c->r[4]=R32(c->r[28]+0x00000108u); // 805B0824
  c->r[3]=R32(c->r[28]+0x0000010Cu); // 805B0828
  c->r[14]=R32(c->r[28]+0x00000114u); // 805B082C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 805B0830
  c->r[0]=R32(c->r[1]+0x0000327Cu); // 805B0834
  W32(c->r[1]+0x000000A4u,c->r[14]); // 805B0838
  c->r[17]=R32(c->r[28]+0x00000160u); // 805B083C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 805B0840
  c->r[18]=R32(c->r[28]+0x00000164u); // 805B0844
  c->r[12]=R32(c->r[28]+0x00000168u); // 805B0848
  c->r[11]=R32(c->r[28]+0x0000016Cu); // 805B084C
  {uint32_t ea=c->r[1]+0x000000A0u; psq_load(c,3,ea,0,0);} // 805B0850
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,2,ea,0,0);} // 805B0854
  {uint32_t ea=c->r[1]+0x000000B0u; psq_load(c,1,ea,0,0);} // 805B0858
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,0,ea,0,0);} // 805B085C
  c->r[15]=R32(c->r[1]+0x000001C0u); // 805B0860
  W32(c->r[1]+0x00003280u,c->r[15]); // 805B0864
  c->r[15]=R32(c->r[1]+0x000001C4u); // 805B0868
  W32(c->r[1]+0x00003284u,c->r[15]); // 805B086C
  c->r[15]=R32(c->r[1]+0x000001C8u); // 805B0870
  W32(c->r[1]+0x00003288u,c->r[15]); // 805B0874
  c->r[15]=R32(c->r[1]+0x000001CCu); // 805B0878
  W32(c->r[1]+0x00000080u,c->r[10]); // 805B087C
  W32(c->r[1]+0x00000084u,c->r[9]); // 805B0880
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,7,ea,0,0);} // 805B0884
  W32(c->r[1]+0x00000088u,c->r[8]); // 805B0888
  W32(c->r[1]+0x0000008Cu,c->r[7]); // 805B088C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,6,ea,0,0);} // 805B0890
  W32(c->r[1]+0x00000090u,c->r[6]); // 805B0894
  W32(c->r[1]+0x00000094u,c->r[5]); // 805B0898
  {uint32_t ea=c->r[1]+0x00000090u; psq_load(c,5,ea,0,0);} // 805B089C
  W32(c->r[1]+0x00000098u,c->r[4]); // 805B08A0
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 805B08A4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,4,ea,0,0);} // 805B08A8
  {uint32_t ea=c->r[1]+0x00000160u; psq_store(c,7,ea,0,0);} // 805B08AC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,6,ea,0,0);} // 805B08B0
  {uint32_t ea=c->r[1]+0x00000170u; psq_store(c,5,ea,0,0);} // 805B08B4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,4,ea,0,0);} // 805B08B8
  {uint32_t ea=c->r[1]+0x00000180u; psq_store(c,3,ea,0,0);} // 805B08BC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,2,ea,0,0);} // 805B08C0
  {uint32_t ea=c->r[1]+0x00000190u; psq_store(c,1,ea,0,0);} // 805B08C4
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,0,ea,0,0);} // 805B08C8
  c->r[3]=R32(c->r[29]+0x00000000u); // 805B08CC
  W32(c->r[1]+0x0000328Cu,c->r[15]); // 805B08D0
  c->r[0]=R32(c->r[3]+0x00000010u); // 805B08D4
  W32(c->r[1]+0x00000140u,c->r[17]); // 805B08D8
  cmpu(c,0,c->r[0],c->r[16]); // 805B08DC
  c->r[0]=R32(c->r[1]+0x00003280u); // 805B08E0
  W32(c->r[1]+0x00000130u,c->r[0]); // 805B08E4
  c->r[0]=R32(c->r[1]+0x00003284u); // 805B08E8
  W32(c->r[1]+0x00000134u,c->r[0]); // 805B08EC
  c->r[0]=R32(c->r[1]+0x00003288u); // 805B08F0
  W32(c->r[1]+0x00000138u,c->r[0]); // 805B08F4
  c->r[0]=c->r[15]|c->r[15]; // 805B08F8
  W32(c->r[1]+0x00000144u,c->r[18]); // 805B08FC
  W32(c->r[1]+0x00000148u,c->r[12]); // 805B0900
  W32(c->r[1]+0x0000014Cu,c->r[11]); // 805B0904
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 805B0908
  if (crb(c,2)) { goto L_805B0928; } // 805B090C
  {uint32_t ea=0u+c->r[31]; psq_load(c,1,ea,0,0);} // 805B0910
  {uint32_t ea=c->r[31]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0914
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 805B0918
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 805B091C
  {uint32_t ea=0u+c->r[31]; psq_store(c,1,ea,0,0);} // 805B0920
  {uint32_t ea=c->r[31]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0924
L_805B0928:;
  c->r[3]=c->r[28]+0x00000140u; // 805B0928
  {uint32_t ea=c->r[1]+0x00000138u; c->f[17]=c->ps1[17]=RF32(ea);} // 805B092C
  {uint32_t ea=c->r[3]+c->r[19]; psq_load(c,1,ea,0,0);} // 805B0930
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,0,ea,0,0);} // 805B0934
  {double t0=S(c->f[17]), t1=S(c->f[17]); c->f[17]=t0; c->ps1[17]=t1;} // 805B0938
  {uint32_t ea=c->r[28]+0x00000140u; psq_load(c,2,ea,0,0);} // 805B093C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0940
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,1,ea,0,0);} // 805B0944
  {uint32_t ea=0u+c->r[31]; psq_load(c,6,ea,0,0);} // 805B0948
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 805B094C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,0,ea,0,0);} // 805B0950
  {uint32_t ea=c->r[31]+c->r[19]; psq_load(c,7,ea,0,0);} // 805B0954
  {uint32_t ea=c->r[1]+0x00000128u; c->f[18]=c->ps1[18]=RF32(ea);} // 805B0958
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[9]=t0; c->ps1[9]=t1;} // 805B095C
  {uint32_t ea=c->r[1]+0x00000120u; psq_store(c,2,ea,0,0);} // 805B0960
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0964
  {uint32_t ea=c->r[13]+0xFFFFAFB8u; c->f[4]=c->ps1[4]=RF32(ea);} // 805B0968
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->f[6]); c->f[1]=t0; c->ps1[1]=t1;} // 805B096C
  {double t0=S(c->f[2]*c->f[17]), t1=S(c->ps1[2]*c->ps1[17]); c->f[5]=t0; c->ps1[5]=t1;} // 805B0970
  {double t0=S(c->f[18]), t1=S(c->f[18]); c->f[18]=t0; c->ps1[18]=t1;} // 805B0974
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[9])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 805B0978
  {double t0=S(std::fma(c->f[6],c->f[3],-c->f[1])), t1=S(std::fma(c->ps1[6],c->ps1[3],-c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 805B097C
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0980
  {double t0=S(std::fma(c->f[6],c->f[18],-c->f[5])), t1=S(std::fma(c->ps1[6],c->ps1[18],-c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0984
  {double t0=S(c->f[8]+c->ps1[9]), t1=S(c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0988
  {double t0=S(std::fma(c->f[7],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[7],c->ps1[0],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 805B098C
  {double t0=S(c->ps1[3]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 805B0990
  c->f[8]=frsqrte(c->f[1]); // 805B0994
  {double t0=S(c->f[0]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0998
  {double t0=-c->f[6], t1=-c->ps1[6]; c->f[6]=t0; c->ps1[6]=t1;} // 805B099C
  c->f[8]=c->ps1[8]=S(c->f[8]); // 805B09A0
  {double t0=S(c->ps1[5]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 805B09A4
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[8]); // 805B09A8
  {uint32_t ea=0u+c->r[30]; psq_store(c,5,ea,0,0);} // 805B09AC
  c->f[2]=c->ps1[2]=S(c->f[21]*c->f[8]); // 805B09B0
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 805B09B4
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[1],c->f[3],-c->f[20])); // 805B09B8
  {uint32_t ea=c->r[30]+c->r[19]; psq_store(c,6,ea,0,0);} // 805B09BC
  {double t0=S(std::fma(c->f[6],c->f[6],c->f[7])), t1=S(std::fma(c->ps1[6],c->ps1[6],c->ps1[7])); c->f[5]=t0; c->ps1[5]=t1;} // 805B09C0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[2],c->f[8])); // 805B09C4
  {uint32_t ea=c->r[1]+0x00003240u; c->f[2]=RF64(ea);} // 805B09C8
  {double t0=S(c->f[5]+c->ps1[7]), t1=S(c->ps1[7]); c->f[5]=t0; c->ps1[5]=t1;} // 805B09CC
  c->f[2]=(c->f[3]>=0.0)?c->f[3]:c->f[2]; // 805B09D0
  c->f[6]=frsqrte(c->f[5]); // 805B09D4
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805B09D8
  c->f[6]=c->ps1[6]=S(c->f[6]); // 805B09DC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 805B09E0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[6]); // 805B09E4
  c->f[2]=(c->f[1]>=0.0)?c->f[2]:c->f[4]; // 805B09E8
  c->f[1]=c->ps1[1]=S(c->f[21]*c->f[6]); // 805B09EC
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[5],c->f[3],-c->f[20])); // 805B09F0
  c->f[2]=c->ps1[2]=S(c->f[2]); // 805B09F4
  c->f[6]=c->ps1[6]=S(std::fma(c->f[3],c->f[1],c->f[6])); // 805B09F8
  {uint32_t ea=c->r[1]+0x00003240u; c->f[3]=RF64(ea);} // 805B09FC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 805B0A00
  c->f[3]=(c->f[6]>=0.0)?c->f[6]:c->f[3]; // 805B0A04
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805B0A08
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 805B0A0C
  c->f[22]=(c->f[5]>=0.0)?c->f[3]:c->f[4]; // 805B0A10
  {uint32_t ea=c->r[1]+0x00003248u; c->f[3]=RF64(ea);} // 805B0A14
  c->f[22]=c->ps1[22]=S(c->f[22]); // 805B0A18
  fcmp(c,0,c->f[22],c->f[3]); // 805B0A1C
  if (!crb(c,1)) { goto L_805B0FE8; } // 805B0A20
  {uint32_t ea=c->r[1]+0x00003250u; c->f[3]=RF64(ea);} // 805B0A24
  fcmp(c,0,c->f[1],c->f[3]); // 805B0A28
  if (!crb(c,0)) { goto L_805B0FE8; } // 805B0A2C
  {uint32_t ea=c->r[23]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 805B0A30
  {uint32_t ea=c->r[1]+0x0000323Cu; WF32(ea,c->f[3]);} // 805B0A34
  c->f[3]=c->ps1[3]=S(c->f[3]); // 805B0A38
  {uint32_t ea=c->r[1]+0x00003258u; c->f[4]=RF64(ea);} // 805B0A3C
  c->r[3]=R32(c->r[23]+0x00000060u); // 805B0A40
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[3]); // 805B0A44
  {uint32_t ea=c->r[1]+0x00003260u; c->f[3]=RF64(ea);} // 805B0A48
  {uint32_t ea=c->r[23]+0x00000004u; WF32(ea,c->f[4]);} // 805B0A4C
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[4],-c->f[0])); // 805B0A50
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0A54
  {uint32_t ea=c->r[1]+0x00003234u; WF32(ea,c->f[0]);} // 805B0A58
  c->f[14]=c->ps1[14]=S(c->f[3]/c->f[2]); // 805B0A5C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0A60
  {uint32_t ea=c->r[1]+0x00003230u; WF32(ea,c->f[0]);} // 805B0A64
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 805B0A68
  c->r[3]=R32(c->r[23]+0x00000060u); // 805B0A6C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 805B0A70
  fcmp(c,0,c->f[14],c->f[19]); // 805B0A74
  if (!crb(c,1)) { goto L_805B0A80; } // 805B0A78
  goto L_805B0A84; // 805B0A7C
L_805B0A80:;
  c->f[14]=c->f[19]; // 805B0A80
L_805B0A84:;
  c->f[0]=std::fabs(c->f[1]); // 805B0A84
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805B0A88
  fcmp(c,0,c->f[0],c->f[20]); // 805B0A8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 805B0A90
  if (!crb(c,2)) { goto L_805B0AB8; } // 805B0A94
  fcmp(c,0,c->f[1],c->f[19]); // 805B0A98
  if (!crb(c,1)) { goto L_805B0AAC; } // 805B0A9C
  {uint32_t ea=c->r[2]+0x00002948u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0AA0
  {uint32_t ea=c->r[1]+0x00003238u; WF32(ea,c->f[0]);} // 805B0AA4
  goto L_805B0AC4; // 805B0AA8
L_805B0AAC:;
  {uint32_t ea=c->r[2]+0x0000294Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0AAC
  {uint32_t ea=c->r[1]+0x00003238u; WF32(ea,c->f[0]);} // 805B0AB0
  goto L_805B0AC4; // 805B0AB4
L_805B0AB8:;
  c->lr=0x805B0ABCu; f_803BA744(c); // 805B0AB8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 805B0ABC
  {uint32_t ea=c->r[1]+0x00003238u; WF32(ea,c->f[0]);} // 805B0AC0
L_805B0AC4:;
  c->f[0]=std::fabs(c->f[14]); // 805B0AC4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805B0AC8
  fcmp(c,0,c->f[0],c->f[20]); // 805B0ACC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 805B0AD0
  if (!crb(c,2)) { goto L_805B0AF0; } // 805B0AD4
  fcmp(c,0,c->f[14],c->f[19]); // 805B0AD8
  if (!crb(c,1)) { goto L_805B0AE8; } // 805B0ADC
  {uint32_t ea=c->r[2]+0x00002948u; c->f[4]=c->ps1[4]=RF32(ea);} // 805B0AE0
  goto L_805B0AFC; // 805B0AE4
L_805B0AE8:;
  {uint32_t ea=c->r[2]+0x0000294Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 805B0AE8
  goto L_805B0AFC; // 805B0AEC
L_805B0AF0:;
  c->f[1]=c->f[14]; // 805B0AF0
  c->lr=0x805B0AF8u; f_803BA744(c); // 805B0AF4
  c->f[4]=c->ps1[4]=S(c->f[1]); // 805B0AF8
L_805B0AFC:;
  c->f[1]=c->ps1[1]=S(c->f[20]/c->f[22]); // 805B0AFC
  {uint32_t ea=0u+c->r[30]; psq_load(c,2,ea,0,0);} // 805B0B00
  {uint32_t ea=c->r[1]+0x00003238u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0B04
  c->r[4]=c->r[30]|c->r[30]; // 805B0B08
  {uint32_t ea=c->r[30]+c->r[19]; psq_load(c,3,ea,0,0);} // 805B0B0C
  c->r[3]=c->r[1]+0x00000100u; // 805B0B10
  c->f[22]=c->ps1[22]=S(c->f[0]-c->f[4]); // 805B0B14
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0B18
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0B1C
  {uint32_t ea=0u+c->r[30]; psq_store(c,2,ea,0,0);} // 805B0B20
  c->f[1]=c->f[22]; // 805B0B24
  {uint32_t ea=c->r[30]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0B28
  c->lr=0x805B0B30u; f_806297DC(c); // 805B0B2C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[30]=c->ps1[30]=RF32(ea);} // 805B0B30
  c->r[3]=c->r[28]+0x00000160u; // 805B0B34
  {uint32_t ea=c->r[28]+0x00000160u; psq_load(c,5,ea,0,0);} // 805B0B38
  c->r[0]=c->r[1]+0x00000100u; // 805B0B3C
  {double t0=S(c->f[30]), t1=S(c->f[30]); c->f[30]=t0; c->ps1[30]=t1;} // 805B0B40
  {uint32_t ea=c->r[1]+0x00000100u; psq_load(c,6,ea,0,0);} // 805B0B44
  {uint32_t ea=c->r[28]+0x00000168u; c->f[31]=c->ps1[31]=RF32(ea);} // 805B0B48
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0B4C
  {double t0=S(c->f[5]*c->f[6]), t1=S(c->ps1[5]*c->f[6]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0B50
  {uint32_t ea=c->r[3]+c->r[19]; psq_load(c,7,ea,0,0);} // 805B0B54
  {double t0=S(c->f[31]), t1=S(c->f[31]); c->f[31]=t0; c->ps1[31]=t1;} // 805B0B58
  c->r[3]=c->r[0]|c->r[0]; // 805B0B5C
  {double t0=S(c->f[5]*c->f[30]), t1=S(c->ps1[5]*c->ps1[30]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0B60
  {uint32_t ea=c->r[28]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805B0B64
  {double t0=S(std::fma(c->f[6],c->f[4],-c->f[2])), t1=S(std::fma(c->ps1[6],c->ps1[4],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0B68
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0B6C
  {double t0=S(std::fma(c->f[6],c->f[31],-c->f[3])), t1=S(std::fma(c->ps1[6],c->ps1[31],-c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805B0B70
  c->r[4]=c->r[1]+0x000000F0u; // 805B0B74
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[11]=t0; c->ps1[11]=t1;} // 805B0B78
  {uint32_t ea=c->r[3]+c->r[19]; psq_load(c,8,ea,0,0);} // 805B0B7C
  c->r[14]=c->r[28]+0x000000F0u; // 805B0B80
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0B84
  {double t0=S(c->ps1[2]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0B88
  c->r[5]=c->r[1]+0x00000070u; // 805B0B8C
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[11])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[11])); c->f[10]=t0; c->ps1[10]=t1;} // 805B0B90
  c->r[0]=c->r[4]|c->r[4]; // 805B0B94
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[9]=t0; c->ps1[9]=t1;} // 805B0B98
  c->r[3]=c->r[14]|c->r[14]; // 805B0B9C
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 805B0BA0
  {double t0=S(c->f[10]+c->ps1[11]), t1=S(c->ps1[11]); c->f[10]=t0; c->ps1[10]=t1;} // 805B0BA4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0BA8
  {double t0=S(std::fma(c->f[7],c->f[4],c->f[2])), t1=S(std::fma(c->ps1[7],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0BAC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],-c->f[10])); // 805B0BB0
  {double t0=S(std::fma(c->f[5],c->f[4],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0BB4
  {double t0=S(std::fma(c->f[8],c->f[9],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[9],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0BB8
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[1])), t1=S(std::fma(c->ps1[6],c->ps1[9],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0BBC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,2,ea,0,0);} // 805B0BC0
  {uint32_t ea=c->r[1]+0x00000070u; psq_store(c,1,ea,0,0);} // 805B0BC4
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,2,ea,0,0);} // 805B0BC8
  {uint32_t ea=0u+c->r[0]; psq_store(c,1,ea,0,0);} // 805B0BCC
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 805B0BD0
  c->lr=0x805B0BD8u; f_80629174(c); // 805B0BD4
  {uint32_t ea=c->r[28]+0x00000170u; psq_load(c,3,ea,0,0);} // 805B0BD8
  c->r[4]=c->r[14]+0x00000010u; // 805B0BDC
  {uint32_t ea=c->r[28]+0x00000178u; c->f[25]=c->ps1[25]=RF32(ea);} // 805B0BE0
  c->r[5]=c->r[14]+0x00000020u; // 805B0BE4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[6]=t0; c->ps1[6]=t1;} // 805B0BE8
  {uint32_t ea=0u+c->r[14]; psq_load(c,0,ea,0,0);} // 805B0BEC
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0BF0
  {uint32_t ea=c->r[14]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0BF4
  {uint32_t ea=c->r[14]+0x00000010u; psq_load(c,1,ea,0,0);} // 805B0BF8
  {double t0=S(c->f[25]), t1=S(c->f[25]); c->f[25]=t0; c->ps1[25]=t1;} // 805B0BFC
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805B0C00
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0C04
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0C08
  {uint32_t ea=c->r[5]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0C0C
  {uint32_t ea=c->r[14]+0x00000020u; psq_load(c,3,ea,0,0);} // 805B0C10
  c->r[6]=c->r[28]+0x00000140u; // 805B0C14
  {double t0=S(std::fma(c->f[1],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0C18
  {uint32_t ea=c->r[28]+0x00000140u; psq_load(c,1,ea,0,0);} // 805B0C1C
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0C20
  {uint32_t ea=c->r[6]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0C24
  c->r[7]=c->r[14]+0x00000030u; // 805B0C28
  c->r[5]=c->r[1]+0x00000060u; // 805B0C2C
  {double t0=S(std::fma(c->f[3],c->f[25],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[25],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0C30
  c->r[3]=c->r[25]|c->r[25]; // 805B0C34
  {double t0=S(std::fma(c->f[2],c->f[25],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[25],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0C38
  c->r[4]=c->r[23]|c->r[23]; // 805B0C3C
  {uint32_t ea=c->r[1]+0x00000060u; psq_store(c,5,ea,0,0);} // 805B0C40
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0C44
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0C48
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,4,ea,0,0);} // 805B0C4C
  {uint32_t ea=c->r[14]+0x00000030u; psq_store(c,1,ea,0,0);} // 805B0C50
  {uint32_t ea=c->r[7]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0C54
  c->lr=0x805B0C5Cu; f_805D0590(c); // 805B0C58
  c->r[3]=c->r[22]|c->r[22]; // 805B0C5C
  c->r[4]=c->r[25]|c->r[25]; // 805B0C60
  c->r[5]=c->r[23]|c->r[23]; // 805B0C64
  c->r[12]=c->r[24]|c->r[24]; // 805B0C68
  c->r[6]=c->r[1]+0x000001A0u; // 805B0C6C
  c->lr=0x805B0C74u; f_803A9A8C(c); // 805B0C70
  c->r[0]=c->r[0]|0x00000000u; // 805B0C74
  {uint32_t ea=c->r[1]+0x00000118u; c->f[15]=c->ps1[15]=RF32(ea);} // 805B0C78
  c->r[4]=c->r[1]+0x000000E0u; // 805B0C7C
  {uint32_t ea=0u+c->r[31]; psq_load(c,2,ea,0,0);} // 805B0C80
  c->r[0]=c->r[4]|c->r[4]; // 805B0C84
  {double t0=S(c->f[15]), t1=S(c->f[15]); c->f[15]=t0; c->ps1[15]=t1;} // 805B0C88
  {uint32_t ea=0u+c->r[30]; psq_load(c,4,ea,0,0);} // 805B0C8C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[16]=c->ps1[16]=RF32(ea);} // 805B0C90
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0C94
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0C98
  c->r[5]=c->r[4]|c->r[4]; // 805B0C9C
  {double t0=S(c->f[16]), t1=S(c->f[16]); c->f[16]=t0; c->ps1[16]=t1;} // 805B0CA0
  c->r[3]=c->r[1]+0x000000D0u; // 805B0CA4
  {double t0=S(c->f[2]*c->f[15]), t1=S(c->ps1[2]*c->ps1[15]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0CA8
  {double t0=S(std::fma(c->f[4],c->f[3],-c->f[0])), t1=S(std::fma(c->ps1[4],c->ps1[3],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805B0CAC
  c->f[1]=c->f[22]; // 805B0CB0
  {double t0=S(std::fma(c->f[4],c->f[16],-c->f[2])), t1=S(std::fma(c->ps1[4],c->ps1[16],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0CB4
  {double t0=S(c->ps1[0]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0CB8
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[3]=t0; c->ps1[3]=t1;} // 805B0CBC
  {double t0=S(c->ps1[2]), t1=S(c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0CC0
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0CC4
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[2])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 805B0CC8
  {double t0=S(c->f[0]+c->ps1[2]), t1=S(c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 805B0CCC
  c->f[5]=frsqrte(c->f[6]); // 805B0CD0
  c->f[5]=c->ps1[5]=S(c->f[5]); // 805B0CD4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[5]); // 805B0CD8
  c->f[0]=c->ps1[0]=S(c->f[21]*c->f[5]); // 805B0CDC
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[6],c->f[2],-c->f[20])); // 805B0CE0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[0],c->f[5])); // 805B0CE4
  {uint32_t ea=c->r[1]+0x00003240u; c->f[0]=RF64(ea);} // 805B0CE8
  c->f[0]=(c->f[2]>=0.0)?c->f[2]:c->f[0]; // 805B0CEC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 805B0CF0
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0CF4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0CF8
  {uint32_t ea=0u+c->r[0]; psq_store(c,2,ea,0,0);} // 805B0CFC
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0D00
  c->lr=0x805B0D08u; f_806297DC(c); // 805B0D04
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 805B0D08
  c->r[4]=c->r[1]+0x00000140u; // 805B0D0C
  {uint32_t ea=c->r[1]+0x00000140u; psq_load(c,5,ea,0,0);} // 805B0D10
  c->r[0]=c->r[1]+0x000000D0u; // 805B0D14
  {double t0=S(c->f[28]), t1=S(c->f[28]); c->f[28]=t0; c->ps1[28]=t1;} // 805B0D18
  {uint32_t ea=c->r[1]+0x000000D0u; psq_load(c,6,ea,0,0);} // 805B0D1C
  {uint32_t ea=c->r[1]+0x00000148u; c->f[29]=c->ps1[29]=RF32(ea);} // 805B0D20
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0D24
  {double t0=S(c->f[5]*c->f[6]), t1=S(c->ps1[5]*c->f[6]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0D28
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,7,ea,0,0);} // 805B0D2C
  {double t0=S(c->f[29]), t1=S(c->f[29]); c->f[29]=t0; c->ps1[29]=t1;} // 805B0D30
  c->r[4]=c->r[0]|c->r[0]; // 805B0D34
  {double t0=S(c->f[5]*c->f[28]), t1=S(c->ps1[5]*c->ps1[28]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0D38
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,8,ea,0,0);} // 805B0D3C
  {double t0=S(std::fma(c->f[6],c->f[4],-c->f[2])), t1=S(std::fma(c->ps1[6],c->ps1[4],-c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0D40
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0D44
  {double t0=S(std::fma(c->f[6],c->f[29],-c->f[3])), t1=S(std::fma(c->ps1[6],c->ps1[29],-c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 805B0D48
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 805B0D4C
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[11]=t0; c->ps1[11]=t1;} // 805B0D50
  c->r[5]=c->r[1]+0x00000050u; // 805B0D54
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0D58
  c->r[3]=c->r[14]|c->r[14]; // 805B0D5C
  {double t0=S(c->ps1[2]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0D60
  c->r[4]=c->r[20]|c->r[20]; // 805B0D64
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[11])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[11])); c->f[10]=t0; c->ps1[10]=t1;} // 805B0D68
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[9]=t0; c->ps1[9]=t1;} // 805B0D6C
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 805B0D70
  {double t0=S(c->f[10]+c->ps1[11]), t1=S(c->ps1[11]); c->f[10]=t0; c->ps1[10]=t1;} // 805B0D74
  {double t0=S(c->ps1[3]), t1=S(c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0D78
  {double t0=S(std::fma(c->f[7],c->f[4],c->f[2])), t1=S(std::fma(c->ps1[7],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0D7C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],-c->f[10])); // 805B0D80
  {double t0=S(std::fma(c->f[5],c->f[4],c->f[3])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0D84
  {double t0=S(std::fma(c->f[8],c->f[9],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[9],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 805B0D88
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[1])), t1=S(std::fma(c->ps1[6],c->ps1[9],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0D8C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,2,ea,0,0);} // 805B0D90
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,1,ea,0,0);} // 805B0D94
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,2,ea,0,0);} // 805B0D98
  {uint32_t ea=0u+c->r[20]; psq_store(c,1,ea,0,0);} // 805B0D9C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 805B0DA0
  c->lr=0x805B0DA8u; f_80629174(c); // 805B0DA4
  {uint32_t ea=c->r[28]+0x00000170u; psq_load(c,3,ea,0,0);} // 805B0DA8
  c->r[4]=c->r[14]+0x00000010u; // 805B0DAC
  {uint32_t ea=c->r[28]+0x00000178u; c->f[24]=c->ps1[24]=RF32(ea);} // 805B0DB0
  c->r[5]=c->r[14]+0x00000020u; // 805B0DB4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[6]=t0; c->ps1[6]=t1;} // 805B0DB8
  {uint32_t ea=0u+c->r[14]; psq_load(c,0,ea,0,0);} // 805B0DBC
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0DC0
  {uint32_t ea=c->r[14]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0DC4
  {uint32_t ea=c->r[14]+0x00000010u; psq_load(c,1,ea,0,0);} // 805B0DC8
  {double t0=S(c->f[24]), t1=S(c->f[24]); c->f[24]=t0; c->ps1[24]=t1;} // 805B0DCC
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805B0DD0
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0DD4
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0DD8
  {uint32_t ea=c->r[5]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0DDC
  {uint32_t ea=c->r[14]+0x00000020u; psq_load(c,3,ea,0,0);} // 805B0DE0
  c->r[6]=c->r[28]+0x00000140u; // 805B0DE4
  {double t0=S(std::fma(c->f[1],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0DE8
  {uint32_t ea=c->r[28]+0x00000140u; psq_load(c,1,ea,0,0);} // 805B0DEC
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0DF0
  {uint32_t ea=c->r[6]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0DF4
  c->r[7]=c->r[14]+0x00000030u; // 805B0DF8
  c->r[5]=c->r[1]+0x00000040u; // 805B0DFC
  {double t0=S(std::fma(c->f[3],c->f[24],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[24],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0E00
  c->r[3]=c->r[25]|c->r[25]; // 805B0E04
  {double t0=S(std::fma(c->f[2],c->f[24],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[24],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0E08
  c->r[4]=c->r[23]|c->r[23]; // 805B0E0C
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,5,ea,0,0);} // 805B0E10
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0E14
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0E18
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,4,ea,0,0);} // 805B0E1C
  {uint32_t ea=c->r[14]+0x00000030u; psq_store(c,1,ea,0,0);} // 805B0E20
  {uint32_t ea=c->r[7]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0E24
  c->lr=0x805B0E2Cu; f_805D0590(c); // 805B0E28
  c->r[3]=c->r[22]|c->r[22]; // 805B0E2C
  c->r[4]=c->r[25]|c->r[25]; // 805B0E30
  c->r[5]=c->r[23]|c->r[23]; // 805B0E34
  c->r[12]=c->r[24]|c->r[24]; // 805B0E38
  c->r[6]=c->r[1]+0x000001A0u; // 805B0E3C
  c->lr=0x805B0E44u; f_803A9A8C(c); // 805B0E40
  c->r[0]=c->r[0]|0x00000000u; // 805B0E44
  {uint32_t ea=c->r[1]+0x00000148u; c->f[26]=c->ps1[26]=RF32(ea);} // 805B0E48
  c->r[4]=c->r[1]+0x00000140u; // 805B0E4C
  {uint32_t ea=c->r[1]+0x000000D0u; psq_load(c,3,ea,0,0);} // 805B0E50
  c->r[5]=c->r[1]+0x00000030u; // 805B0E54
  {double t0=S(c->f[26]), t1=S(c->f[26]); c->f[26]=t0; c->ps1[26]=t1;} // 805B0E58
  {uint32_t ea=c->r[1]+0x00000140u; psq_load(c,4,ea,0,0);} // 805B0E5C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[27]=c->ps1[27]=RF32(ea);} // 805B0E60
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0E64
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0E68
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,5,ea,0,0);} // 805B0E6C
  {double t0=S(c->f[27]), t1=S(c->f[27]); c->f[27]=t0; c->ps1[27]=t1;} // 805B0E70
  c->r[4]=c->r[1]+0x000000D0u; // 805B0E74
  {double t0=S(c->f[3]*c->f[26]), t1=S(c->ps1[3]*c->ps1[26]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0E78
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,6,ea,0,0);} // 805B0E7C
  {double t0=S(std::fma(c->f[4],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[4],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805B0E80
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[8]=c->ps1[8]=RF32(ea);} // 805B0E84
  {double t0=S(std::fma(c->f[4],c->f[27],-c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[27],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0E88
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 805B0E8C
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 805B0E90
  c->r[3]=c->r[14]|c->r[14]; // 805B0E94
  {double t0=S(c->f[8]), t1=S(c->f[8]); c->f[2]=t0; c->ps1[2]=t1;} // 805B0E98
  c->r[4]=c->r[20]|c->r[20]; // 805B0E9C
  {double t0=S(c->ps1[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0EA0
  {double t0=S(std::fma(c->f[6],c->f[5],c->f[7])), t1=S(std::fma(c->ps1[6],c->ps1[5],c->ps1[7])); c->f[8]=t0; c->ps1[8]=t1;} // 805B0EA4
  {double t0=S(c->f[9]), t1=S(c->f[9]); c->f[7]=t0; c->ps1[7]=t1;} // 805B0EA8
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 805B0EAC
  {double t0=S(c->f[8]+c->ps1[8]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 805B0EB0
  {double t0=S(c->ps1[1]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0EB4
  {double t0=S(std::fma(c->f[5],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805B0EB8
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0EBC
  {double t0=S(-std::fma(c->f[6],c->f[7],-c->f[0])), t1=S(-std::fma(c->ps1[6],c->ps1[7],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 805B0EC0
  {double t0=S(-std::fma(c->f[3],c->f[7],-c->f[1])), t1=S(-std::fma(c->ps1[3],c->ps1[7],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 805B0EC4
  {uint32_t ea=0u+c->r[20]; psq_store(c,1,ea,0,0);} // 805B0EC8
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,1,ea,0,0);} // 805B0ECC
  {uint32_t ea=c->r[20]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0ED0
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0ED4
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0ED8
  {uint32_t ea=c->r[20]+c->r[19]; psq_store(c,1,ea,0,0);} // 805B0EDC
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[8]);} // 805B0EE0
  c->lr=0x805B0EE8u; f_80629174(c); // 805B0EE4
  {uint32_t ea=c->r[28]+0x00000170u; psq_load(c,3,ea,0,0);} // 805B0EE8
  c->r[4]=c->r[14]+0x00000010u; // 805B0EEC
  {uint32_t ea=c->r[28]+0x00000178u; c->f[23]=c->ps1[23]=RF32(ea);} // 805B0EF0
  c->r[5]=c->r[14]+0x00000020u; // 805B0EF4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[6]=t0; c->ps1[6]=t1;} // 805B0EF8
  {uint32_t ea=0u+c->r[14]; psq_load(c,0,ea,0,0);} // 805B0EFC
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[3]=t0; c->ps1[3]=t1;} // 805B0F00
  {uint32_t ea=c->r[14]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0F04
  {uint32_t ea=c->r[14]+0x00000010u; psq_load(c,1,ea,0,0);} // 805B0F08
  {double t0=S(c->f[23]), t1=S(c->f[23]); c->f[23]=t0; c->ps1[23]=t1;} // 805B0F0C
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 805B0F10
  {uint32_t ea=c->r[4]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0F14
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 805B0F18
  {uint32_t ea=c->r[5]+c->r[19]; psq_load(c,2,ea,0,0);} // 805B0F1C
  {uint32_t ea=c->r[14]+0x00000020u; psq_load(c,3,ea,0,0);} // 805B0F20
  c->r[6]=c->r[28]+0x00000140u; // 805B0F24
  {double t0=S(std::fma(c->f[1],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0F28
  {uint32_t ea=c->r[28]+0x00000140u; psq_load(c,1,ea,0,0);} // 805B0F2C
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0F30
  {uint32_t ea=c->r[6]+c->r[19]; psq_load(c,0,ea,0,0);} // 805B0F34
  c->r[7]=c->r[14]+0x00000030u; // 805B0F38
  c->r[5]=c->r[1]+0x00000020u; // 805B0F3C
  {double t0=S(std::fma(c->f[3],c->f[23],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[23],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 805B0F40
  c->r[3]=c->r[25]|c->r[25]; // 805B0F44
  {double t0=S(std::fma(c->f[2],c->f[23],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[23],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 805B0F48
  c->r[4]=c->r[23]|c->r[23]; // 805B0F4C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,5,ea,0,0);} // 805B0F50
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 805B0F54
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 805B0F58
  {uint32_t ea=c->r[5]+c->r[19]; psq_store(c,4,ea,0,0);} // 805B0F5C
  {uint32_t ea=c->r[14]+0x00000030u; psq_store(c,1,ea,0,0);} // 805B0F60
  {uint32_t ea=c->r[7]+c->r[19]; psq_store(c,0,ea,0,0);} // 805B0F64
  c->lr=0x805B0F6Cu; f_805D0590(c); // 805B0F68
  c->r[3]=c->r[22]|c->r[22]; // 805B0F6C
  c->r[4]=c->r[25]|c->r[25]; // 805B0F70
  c->r[5]=c->r[23]|c->r[23]; // 805B0F74
  c->r[12]=c->r[24]|c->r[24]; // 805B0F78
  c->r[6]=c->r[1]+0x000001A0u; // 805B0F7C
  c->lr=0x805B0F84u; f_803A9A8C(c); // 805B0F80
  c->r[0]=c->r[0]|0x00000000u; // 805B0F84
  {uint32_t ea=c->r[1]+0x0000323Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0F88
  c->r[3]=c->r[28]+0x000000E0u; // 805B0F8C
  {uint32_t ea=c->r[23]+0x00000004u; WF32(ea,c->f[0]);} // 805B0F90
  c->r[4]=c->r[1]+0x00000160u; // 805B0F94
  c->r[5]=R32(c->r[23]+0x00000060u); // 805B0F98
  {uint32_t ea=c->r[1]+0x00003234u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0F9C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 805B0FA0
  {uint32_t ea=c->r[1]+0x00003230u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B0FA4
  c->r[5]=R32(c->r[23]+0x00000060u); // 805B0FA8
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 805B0FAC
  c->r[12]=R32(c->r[28]+0x000000E0u); // 805B0FB0
  c->r[12]=R32(c->r[12]+0x00000044u); // 805B0FB4
  c->ctr=c->r[12]; // 805B0FB8
  if (true) { c->lr=0x805B0FC0u; dispatch(c,c->ctr); } // 805B0FBC
  c->r[3]=c->r[25]|c->r[25]; // 805B0FC0
  c->r[4]=c->r[23]|c->r[23]; // 805B0FC4
  c->lr=0x805B0FCCu; f_805D0590(c); // 805B0FC8
  c->r[3]=c->r[22]|c->r[22]; // 805B0FCC
  c->r[4]=c->r[25]|c->r[25]; // 805B0FD0
  c->r[5]=c->r[23]|c->r[23]; // 805B0FD4
  c->r[12]=c->r[24]|c->r[24]; // 805B0FD8
  c->r[6]=c->r[1]+0x000001A0u; // 805B0FDC
  c->lr=0x805B0FE4u; f_803A9A8C(c); // 805B0FE0
  c->r[0]=c->r[0]|0x00000000u; // 805B0FE4
L_805B0FE8:;
  c->r[3]=R32(c->r[13]+0xFFFFE740u); // 805B0FE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 805B0FEC
  cmps(c,0,(int32_t)c->r[0],1); // 805B0FF0
  if (!crb(c,2)) { goto L_805B1008; } // 805B0FF4
  c->r[3]=c->r[1]+0x00000150u; // 805B0FF8
  c->r[4]=0u+0xFFFFFFFFu; // 805B0FFC
  c->lr=0x805B1004u; f_8062474C(c); // 805B1000
  goto L_805B1050; // 805B1004
L_805B1008:;
  c->r[26]=c->r[26]+0x00000001u; // 805B1008
  c->r[21]=c->r[21]+0x00000008u; // 805B100C
L_805B1010:;
  c->r[0]=R32(c->r[27]+0x00000054u); // 805B1010
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 805B1014
  if (crb(c,0)) { IRQCHK(c); goto L_805B06D0; } // 805B1018
  c->r[3]=R32(c->r[1]+0x00003268u); // 805B101C
  c->r[3]=c->r[3]+0x00000001u; // 805B1020
  W32(c->r[1]+0x00003268u,c->r[3]); // 805B1024
  c->r[3]=R32(c->r[1]+0x00003290u); // 805B1028
  c->r[3]=c->r[3]+0x00000004u; // 805B102C
  W32(c->r[1]+0x00003290u,c->r[3]); // 805B1030
L_805B1034:;
  c->r[3]=R32(c->r[1]+0x00003268u); // 805B1034
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1038
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 805B103C
  if (crb(c,0)) { IRQCHK(c); goto L_805B06A4; } // 805B1040
  c->r[3]=c->r[1]+0x00000150u; // 805B1044
  c->r[4]=0u+0xFFFFFFFFu; // 805B1048
  c->lr=0x805B1050u; f_8062474C(c); // 805B104C
L_805B1050:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B1050
  c->r[11]=c->r[10]+0xFFFFFEE0u; // 805B1054
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805B1058
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805B105C
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 805B1060
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 805B1064
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 805B1068
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 805B106C
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 805B1070
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 805B1074
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 805B1078
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 805B107C
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 805B1080
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 805B1084
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 805B1088
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 805B108C
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 805B1090
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 805B1094
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 805B1098
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 805B109C
  {uint32_t ea=c->r[10]+0xFFFFFF68u; psq_load(c,22,ea,0,0);} // 805B10A0
  {uint32_t ea=c->r[10]+0xFFFFFF60u; c->f[22]=RF64(ea);} // 805B10A4
  {uint32_t ea=c->r[10]+0xFFFFFF58u; psq_load(c,21,ea,0,0);} // 805B10A8
  {uint32_t ea=c->r[10]+0xFFFFFF50u; c->f[21]=RF64(ea);} // 805B10AC
  {uint32_t ea=c->r[10]+0xFFFFFF48u; psq_load(c,20,ea,0,0);} // 805B10B0
  {uint32_t ea=c->r[10]+0xFFFFFF40u; c->f[20]=RF64(ea);} // 805B10B4
  {uint32_t ea=c->r[10]+0xFFFFFF38u; psq_load(c,19,ea,0,0);} // 805B10B8
  {uint32_t ea=c->r[10]+0xFFFFFF30u; c->f[19]=RF64(ea);} // 805B10BC
  {uint32_t ea=c->r[10]+0xFFFFFF28u; psq_load(c,18,ea,0,0);} // 805B10C0
  {uint32_t ea=c->r[10]+0xFFFFFF20u; c->f[18]=RF64(ea);} // 805B10C4
  {uint32_t ea=c->r[10]+0xFFFFFF18u; psq_load(c,17,ea,0,0);} // 805B10C8
  {uint32_t ea=c->r[10]+0xFFFFFF10u; c->f[17]=RF64(ea);} // 805B10CC
  {uint32_t ea=c->r[10]+0xFFFFFF08u; psq_load(c,16,ea,0,0);} // 805B10D0
  {uint32_t ea=c->r[10]+0xFFFFFF00u; c->f[16]=RF64(ea);} // 805B10D4
  {uint32_t ea=c->r[10]+0xFFFFFEF8u; psq_load(c,15,ea,0,0);} // 805B10D8
  {uint32_t ea=c->r[10]+0xFFFFFEF0u; c->f[15]=RF64(ea);} // 805B10DC
  {uint32_t ea=c->r[10]+0xFFFFFEE8u; psq_load(c,14,ea,0,0);} // 805B10E0
  {uint32_t ea=c->r[10]+0xFFFFFEE0u; c->f[14]=RF64(ea);} // 805B10E4
  c->lr=0x805B10ECu; f_803A9C1C(c); // 805B10E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B10EC
  c->lr=c->r[0]; // 805B10F0
  c->r[1]=c->r[10]|c->r[10]; // 805B10F4
  return; // 805B10F8
}

// fn_805B10FC
void f_805B10FC(Ctx* __restrict c) {
  trace_call(0x805B10FCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805B10FC
  c->r[12]=c->r[1]|c->r[1]; // 805B1100
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 805B1104
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1108
  c->r[0]=c->lr; // 805B110C
  c->r[11]=c->r[12]+0xFFFFFFF0u; // 805B1110
  W32(c->r[12]+0x00000004u,c->r[0]); // 805B1114
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 805B1118
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 805B111C
  c->lr=0x805B1124u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 805B1120
  c->r[8]=R32(c->r[6]+0x00000090u); // 805B1124
  c->r[29]=c->r[6]|c->r[6]; // 805B1128
  c->r[26]=c->r[3]|c->r[3]; // 805B112C
  c->r[27]=c->r[4]|c->r[4]; // 805B1130
  c->r[0]=c->r[8]+0x00000001u; // 805B1134
  W32(c->r[6]+0x00000090u,c->r[0]); // 805B1138
  c->r[28]=c->r[5]|c->r[5]; // 805B113C
  c->r[30]=c->r[7]|c->r[7]; // 805B1140
  c->r[3]=c->r[29]|c->r[29]; // 805B1144
  c->lr=0x805B114Cu; f_805C23A8(c); // 805B1148
  c->f[31]=c->f[1]; // 805B114C
  c->r[3]=c->r[29]|c->r[29]; // 805B1150
  c->lr=0x805B1158u; f_805C239C(c); // 805B1154
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[1]); // 805B1158
  {uint32_t ea=c->r[2]+0x00002910u; c->f[0]=c->ps1[0]=RF32(ea);} // 805B115C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 805B1160
  fcmp(c,0,c->f[0],c->f[2]); // 805B1164
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 805B1168
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 805B116C
  if (!crb(c,2)) { goto L_805B1178; } // 805B1170
  goto L_805B1180; // 805B1174
L_805B1178:;
  {uint32_t ea=c->r[2]+0x0000291Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 805B1178
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 805B117C
L_805B1180:;
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 805B1180
  c->r[31]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[31]); // 805B1184
  c->r[0]=R32(c->r[1]+0x00000020u); // 805B1188
  c->r[3]=R32(c->r[29]+0x00000074u); // 805B118C
  W32(c->r[3]+0x00000050u,c->r[0]); // 805B1190
  c->r[0]=R32(c->r[1]+0x00000024u); // 805B1194
  W32(c->r[3]+0x00000054u,c->r[0]); // 805B1198
  c->r[0]=R32(c->r[1]+0x00000028u); // 805B119C
  W32(c->r[3]+0x00000058u,c->r[0]); // 805B11A0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 805B11A4
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 805B11A8
  if (crb(c,2)) { goto L_805B1220; } // 805B11AC
  c->r[24]=c->r[27]|c->r[27]; // 805B11B0
  c->r[23]=0u+0x00000000u; // 805B11B4
  goto L_805B11F4; // 805B11B8
L_805B11BC:;
  c->r[4]=R32(c->r[24]+0x00000000u); // 805B11BC
  c->r[3]=R8(c->r[4]+0x000000E8u); // 805B11C0
  c->r[25]=c->r[4]+0x000000F0u; // 805B11C4
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 805B11C8
  c->r[0]=cntlz(c->r[0]); // 805B11CC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 805B11D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B11D4
  if (!crb(c,2)) { goto L_805B11EC; } // 805B11D8
  c->r[3]=c->r[29]|c->r[29]; // 805B11DC
  c->lr=0x805B11E4u; f_805C239C(c); // 805B11E0
  c->r[3]=c->r[25]|c->r[25]; // 805B11E4
  c->lr=0x805B11ECu; f_8062A04C(c); // 805B11E8
L_805B11EC:;
  c->r[24]=c->r[24]+0x00000004u; // 805B11EC
  c->r[23]=c->r[23]+0x00000001u; // 805B11F0
L_805B11F4:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[28]); // 805B11F4
  if (crb(c,0)) { IRQCHK(c); goto L_805B11BC; } // 805B11F8
  c->r[4]=c->r[27]|c->r[27]; // 805B11FC
  c->r[5]=c->r[28]|c->r[28]; // 805B1200
  c->r[3]=c->r[1]+0x00000020u; // 805B1204
  c->r[6]=0u+0x000000E0u; // 805B1208
  c->lr=0x805B1210u; f_805A65B0(c); // 805B120C
  c->r[3]=R32(c->r[29]+0x00000074u); // 805B1210
  c->r[4]=c->r[27]|c->r[27]; // 805B1214
  c->r[5]=c->r[28]|c->r[28]; // 805B1218
  c->lr=0x805B1220u; f_8059E360(c); // 805B121C
L_805B1220:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 805B1220
  if (crb(c,2)) { goto L_805B1238; } // 805B1224
  c->r[3]=c->r[27]|c->r[27]; // 805B1228
  c->r[4]=c->r[28]|c->r[28]; // 805B122C
  c->r[5]=c->r[29]|c->r[29]; // 805B1230
  c->lr=0x805B1238u; f_805AEE24(c); // 805B1234
L_805B1238:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 805B1238
  if (crb(c,2)) { goto L_805B127C; } // 805B123C
  c->r[7]=0u+0x80720000u; // 805B1240
  {uint32_t ea=c->r[7]+0x00002A98u; c->r[8]=R32(ea); c->r[7]=ea;} // 805B1244
  c->r[6]=R32(c->r[29]+0x00000074u); // 805B1248
  c->r[3]=c->r[26]|c->r[26]; // 805B124C
  c->r[9]=R32(c->r[7]+0x00000004u); // 805B1250
  c->r[4]=c->r[27]|c->r[27]; // 805B1254
  c->r[0]=R32(c->r[7]+0x00000008u); // 805B1258
  c->r[5]=c->r[28]|c->r[28]; // 805B125C
  W32(c->r[1]+0x00000010u,c->r[8]); // 805B1260
  c->r[7]=c->r[1]+0x00000010u; // 805B1264
  c->r[8]=0u+0x00000000u; // 805B1268
  W32(c->r[1]+0x00000014u,c->r[9]); // 805B126C
  W32(c->r[1]+0x00000018u,c->r[0]); // 805B1270
  c->lr=0x805B1278u; f_805B054C(c); // 805B1274
  goto L_805B12A8; // 805B1278
L_805B127C:;
  cmps(c,0,(int32_t)c->r[31],0); // 805B127C
  if (crb(c,2)) { goto L_805B12A8; } // 805B1280
  c->r[12]=R32(c->r[26]+0x00000000u); // 805B1284
  c->r[3]=c->r[26]|c->r[26]; // 805B1288
  c->r[4]=c->r[27]|c->r[27]; // 805B128C
  c->r[5]=c->r[28]|c->r[28]; // 805B1290
  c->r[12]=R32(c->r[12]+0x00000028u); // 805B1294
  c->r[6]=c->r[29]|c->r[29]; // 805B1298
  c->r[7]=0u+0x00000002u; // 805B129C
  c->ctr=c->r[12]; // 805B12A0
  if (true) { c->lr=0x805B12A8u; dispatch(c,c->ctr); } // 805B12A4
L_805B12A8:;
  c->r[0]=R32(c->r[29]+0x00000090u); // 805B12A8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 805B12AC
  W32(c->r[29]+0x00000090u,c->r[0]); // 805B12B0
  if (!crb(c,2)) { goto L_805B12F8; } // 805B12B4
  c->r[0]=R8(c->r[29]+0x00000098u); // 805B12B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B12BC
  if (!crb(c,2)) { goto L_805B12F8; } // 805B12C0
  c->r[0]=R32(c->r[29]+0x00000088u); // 805B12C4
  cmps(c,0,(int32_t)c->r[0],0); // 805B12C8
  if (crb(c,2)) { goto L_805B12D8; } // 805B12CC
  c->r[3]=c->r[29]|c->r[29]; // 805B12D0
  c->lr=0x805B12D8u; f_805C4D34(c); // 805B12D4
L_805B12D8:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 805B12D8
  cmps(c,0,(int32_t)c->r[0],1); // 805B12DC
  if (!crb(c,2)) { goto L_805B12F8; } // 805B12E0
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 805B12E4
  cmps(c,0,(int32_t)c->r[0],0); // 805B12E8
  if (crb(c,2)) { goto L_805B12F8; } // 805B12EC
  c->r[3]=c->r[29]|c->r[29]; // 805B12F0
  c->lr=0x805B12F8u; f_805C4D44(c); // 805B12F4
L_805B12F8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B12F8
  c->r[11]=c->r[10]+0xFFFFFFF0u; // 805B12FC
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 805B1300
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 805B1304
  c->lr=0x805B130Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 805B1308
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B130C
  c->lr=c->r[0]; // 805B1310
  c->r[1]=c->r[10]|c->r[10]; // 805B1314
  return; // 805B1318
}

// fn_805B131C
void f_805B131C(Ctx* __restrict c) {
  trace_call(0x805B131Cu);
  return; // 805B131C
}

// fn_805B1320
void f_805B1320(Ctx* __restrict c) {
  trace_call(0x805B1320u);
  return; // 805B1320
}

// fn_805B1324
void f_805B1324(Ctx* __restrict c) {
  trace_call(0x805B1324u);
  return; // 805B1324
}

// fn_805B1328
void f_805B1328(Ctx* __restrict c) {
  trace_call(0x805B1328u);
  c->r[3]=0u+0x80720000u; // 805B1328
  {uint32_t ea=c->r[3]+0x00002A60u; c->r[11]=R32(ea); c->r[3]=ea;} // 805B132C
  c->r[6]=0u+0x80720000u; // 805B1330
  {uint32_t ea=c->r[6]+0x00002A70u; c->r[5]=R32(ea); c->r[6]=ea;} // 805B1334
  c->r[12]=0u+0x80860000u; // 805B1338
  c->r[7]=0u+0x80860000u; // 805B133C
  {uint32_t ea=c->r[12]+0xFFFFDE20u; W32(ea,c->r[11]); c->r[12]=ea;} // 805B1340
  c->r[10]=R32(c->r[3]+0x00000004u); // 805B1344
  c->r[9]=R32(c->r[3]+0x00000008u); // 805B1348
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 805B134C
  {uint32_t ea=c->r[7]+0xFFFFDE30u; W32(ea,c->r[5]); c->r[7]=ea;} // 805B1350
  c->r[4]=R32(c->r[6]+0x00000004u); // 805B1354
  c->r[3]=R32(c->r[6]+0x00000008u); // 805B1358
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 805B135C
  W32(c->r[12]+0x00000004u,c->r[10]); // 805B1360
  W32(c->r[12]+0x00000008u,c->r[9]); // 805B1364
  W32(c->r[12]+0x0000000Cu,c->r[8]); // 805B1368
  W32(c->r[7]+0x00000004u,c->r[4]); // 805B136C
  W32(c->r[7]+0x00000008u,c->r[3]); // 805B1370
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 805B1374
  return; // 805B1378
}

// fn_805B137C
void f_805B137C(Ctx* __restrict c) {
  trace_call(0x805B137Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 805B137C
  if (crb(c,2)) return; // 805B1380
  c->r[4]=0u+0x80720000u; // 805B1384
  c->r[4]=c->r[4]+0x00002AA4u; // 805B1388
  W32(c->r[3]+0x00000000u,c->r[4]); // 805B138C
  return; // 805B1390
}

// fn_805B1394
void f_805B1394(Ctx* __restrict c) {
  trace_call(0x805B1394u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B1394
  c->r[4]=0u+0xFFFFFFFFu; // 805B1398
  c->r[12]=R32(c->r[12]+0x00000008u); // 805B139C
  c->ctr=c->r[12]; // 805B13A0
  if (true) { dispatch(c,c->ctr); return; } // 805B13A4
}

// fn_805B13A8
void f_805B13A8(Ctx* __restrict c) {
  trace_call(0x805B13A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805B13A8
  c->r[12]=c->r[1]|c->r[1]; // 805B13AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 805B13B0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805B13B4
  c->r[0]=c->lr; // 805B13B8
  c->r[4]=0u+0x806C0000u; // 805B13BC
  c->r[3]=0u+0x80860000u; // 805B13C0
  W32(c->r[12]+0x00000004u,c->r[0]); // 805B13C4
  c->r[4]=c->r[4]+0xFFFFE404u; // 805B13C8
  c->r[5]=0u+0x80860000u; // 805B13CC
  c->r[9]=0u+0x806C0000u; // 805B13D0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805B13D4
  c->r[12]=0u+0x80720000u; // 805B13D8
  c->r[12]=c->r[12]+0x00002B08u; // 805B13DC
  c->r[0]=0u+0x00000009u; // 805B13E0
  c->r[31]=R32(c->r[13]+0xFFFFAC60u); // 805B13E4
  c->r[11]=0u+0x00000000u; // 805B13E8
  W32(c->r[12]+0x00000038u,c->r[31]); // 805B13EC
  c->r[3]=c->r[3]+0xFFFFDE40u; // 805B13F0
  c->r[4]=c->r[4]+0x00000139u; // 805B13F4
  c->r[5]=c->r[5]+0x000003A0u; // 805B13F8
  W32(c->r[1]+0x00000008u,c->r[12]); // 805B13FC
  c->r[9]=c->r[9]+0xFFFFE3C8u; // 805B1400
  c->r[6]=0u+0x0000002Cu; // 805B1404
  c->r[7]=0u+0x00000000u; // 805B1408
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 805B140C
  c->r[0]=0u+0x00000001u; // 805B1410
  c->r[8]=0u+0x00000000u; // 805B1414
  c->r[10]=0u+0x00000003u; // 805B1418
  W32(c->r[1]+0x00000010u,c->r[11]); // 805B141C
  W32(c->r[1]+0x00000014u,c->r[11]); // 805B1420
  W32(c->r[1]+0x00000018u,c->r[0]); // 805B1424
  W32(c->r[1]+0x0000001Cu,c->r[11]); // 805B1428
  c->lr=0x805B1430u; f_8062E0DC(c); // 805B142C
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 805B1430
  if (crb(c,2)) { goto L_805B1444; } // 805B1434
  c->r[3]=0u+0x80720000u; // 805B1438
  c->r[3]=c->r[3]+0x00002AA4u; // 805B143C
  W32(c->r[1]+0x00000020u,c->r[3]); // 805B1440
L_805B1444:;
  c->r[7]=0u+0x806C0000u; // 805B1444
  c->r[6]=0u+0x80860000u; // 805B1448
  c->r[7]=c->r[7]+0xFFFFE404u; // 805B144C
  c->r[5]=0u+0x805B0000u; // 805B1450
  c->r[3]=0u+0x805B0000u; // 805B1454
  c->r[4]=c->r[6]+0xFFFFDE70u; // 805B1458
  c->r[0]=R32(c->r[1]+0x00000020u); // 805B145C
  c->r[7]=c->r[7]+0x00000139u; // 805B1460
  c->r[5]=c->r[5]+0x0000137Cu; // 805B1464
  c->r[3]=c->r[3]+0x00001394u; // 805B1468
  W32(c->r[6]+0xFFFFDE70u,c->r[7]); // 805B146C
  W32(c->r[4]+0x00000004u,c->r[5]); // 805B1470
  W32(c->r[4]+0x00000008u,c->r[3]); // 805B1474
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805B1478
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B147C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805B1480
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B1484
  c->lr=c->r[0]; // 805B1488
  c->r[1]=c->r[10]|c->r[10]; // 805B148C
  return; // 805B1490
}

// fn_805B1494
void f_805B1494(Ctx* __restrict c) {
  trace_call(0x805B1494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1494
  c->r[0]=c->lr; // 805B1498
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B149C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B14A0
  c->r[31]=c->r[4]|c->r[4]; // 805B14A4
  c->r[5]=R32(c->r[4]+0x00000000u); // 805B14A8
  c->r[6]=R8(c->r[5]+0x00000004u); // 805B14AC
  cmps(c,0,(int32_t)c->r[6],3); // 805B14B0
  if (!crb(c,2)) { goto L_805B14C8; } // 805B14B4
  c->r[3]=R32(c->r[4]+0x00000004u); // 805B14B8
  c->r[0]=R8(c->r[3]+0x00000004u); // 805B14BC
  cmps(c,0,(int32_t)c->r[0],3); // 805B14C0
  if (crb(c,2)) { goto L_805B1554; } // 805B14C4
L_805B14C8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 805B14C8
  cmps(c,0,(int32_t)c->r[0],3); // 805B14CC
  if (!crb(c,2)) { goto L_805B1508; } // 805B14D0
  c->r[0]=R8(c->r[5]+0x00000005u); // 805B14D4
  c->r[4]=R32(c->r[4]+0x00000004u); // 805B14D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B14DC
  c->r[5]=c->r[5]+c->r[0]; // 805B14E0
  c->r[0]=R8(c->r[4]+0x00000005u); // 805B14E4
  c->r[3]=R8(c->r[5]+0x00000010u); // 805B14E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B14EC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B14F0
  {uint32_t ea=c->r[3]+c->r[5]; c->r[12]=R32(ea); c->r[3]=ea;} // 805B14F4
  c->r[4]=c->r[4]+c->r[0]; // 805B14F8
  c->r[12]=R32(c->r[12]+0x00000024u); // 805B14FC
  c->ctr=c->r[12]; // 805B1500
  if (true) { c->lr=0x805B1508u; dispatch(c,c->ctr); } // 805B1504
L_805B1508:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B1508
  c->r[0]=R8(c->r[3]+0x00000004u); // 805B150C
  cmps(c,0,(int32_t)c->r[0],3); // 805B1510
  if (!crb(c,2)) { goto L_805B1554; } // 805B1514
  c->r[5]=R32(c->r[31]+0x00000004u); // 805B1518
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B151C
  c->r[3]=R8(c->r[5]+0x00000005u); // 805B1520
  c->r[0]=R8(c->r[4]+0x00000005u); // 805B1524
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B1528
  c->r[5]=c->r[5]+c->r[3]; // 805B152C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1530
  c->r[3]=R8(c->r[5]+0x00000010u); // 805B1534
  c->r[4]=c->r[4]+c->r[0]; // 805B1538
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B153C
  c->r[12]=R32(c->r[5]+c->r[0]); // 805B1540
  c->r[3]=c->r[5]+c->r[0]; // 805B1544
  c->r[12]=R32(c->r[12]+0x00000024u); // 805B1548
  c->ctr=c->r[12]; // 805B154C
  if (true) { c->lr=0x805B1554u; dispatch(c,c->ctr); } // 805B1550
L_805B1554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B1558
  c->lr=c->r[0]; // 805B155C
  c->r[1]=c->r[1]+0x00000010u; // 805B1560
  return; // 805B1564
}

// fn_805B1568
void f_805B1568(Ctx* __restrict c) {
  trace_call(0x805B1568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1568
  c->r[0]=c->lr; // 805B156C
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B1570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B1574
  c->r[31]=c->r[4]|c->r[4]; // 805B1578
  c->r[5]=R32(c->r[4]+0x00000000u); // 805B157C
  c->r[6]=R8(c->r[5]+0x00000004u); // 805B1580
  cmps(c,0,(int32_t)c->r[6],3); // 805B1584
  if (!crb(c,2)) { goto L_805B159C; } // 805B1588
  c->r[3]=R32(c->r[4]+0x00000004u); // 805B158C
  c->r[0]=R8(c->r[3]+0x00000004u); // 805B1590
  cmps(c,0,(int32_t)c->r[0],3); // 805B1594
  if (crb(c,2)) { goto L_805B1628; } // 805B1598
L_805B159C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 805B159C
  cmps(c,0,(int32_t)c->r[0],3); // 805B15A0
  if (!crb(c,2)) { goto L_805B15DC; } // 805B15A4
  c->r[0]=R8(c->r[5]+0x00000005u); // 805B15A8
  c->r[4]=R32(c->r[4]+0x00000004u); // 805B15AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B15B0
  c->r[5]=c->r[5]+c->r[0]; // 805B15B4
  c->r[0]=R8(c->r[4]+0x00000005u); // 805B15B8
  c->r[3]=R8(c->r[5]+0x00000010u); // 805B15BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B15C0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B15C4
  {uint32_t ea=c->r[3]+c->r[5]; c->r[12]=R32(ea); c->r[3]=ea;} // 805B15C8
  c->r[4]=c->r[4]+c->r[0]; // 805B15CC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 805B15D0
  c->ctr=c->r[12]; // 805B15D4
  if (true) { c->lr=0x805B15DCu; dispatch(c,c->ctr); } // 805B15D8
L_805B15DC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B15DC
  c->r[0]=R8(c->r[3]+0x00000004u); // 805B15E0
  cmps(c,0,(int32_t)c->r[0],3); // 805B15E4
  if (!crb(c,2)) { goto L_805B1628; } // 805B15E8
  c->r[5]=R32(c->r[31]+0x00000004u); // 805B15EC
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B15F0
  c->r[3]=R8(c->r[5]+0x00000005u); // 805B15F4
  c->r[0]=R8(c->r[4]+0x00000005u); // 805B15F8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B15FC
  c->r[5]=c->r[5]+c->r[3]; // 805B1600
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1604
  c->r[3]=R8(c->r[5]+0x00000010u); // 805B1608
  c->r[4]=c->r[4]+c->r[0]; // 805B160C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B1610
  c->r[12]=R32(c->r[5]+c->r[0]); // 805B1614
  c->r[3]=c->r[5]+c->r[0]; // 805B1618
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 805B161C
  c->ctr=c->r[12]; // 805B1620
  if (true) { c->lr=0x805B1628u; dispatch(c,c->ctr); } // 805B1624
L_805B1628:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B162C
  c->lr=c->r[0]; // 805B1630
  c->r[1]=c->r[1]+0x00000010u; // 805B1634
  return; // 805B1638
}

// fn_805B163C
void f_805B163C(Ctx* __restrict c) {
  trace_call(0x805B163Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B163C
  c->r[0]=c->lr; // 805B1640
  cmps(c,0,(int32_t)c->r[3],0); // 805B1644
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B1648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B164C
  c->r[31]=c->r[3]|c->r[3]; // 805B1650
  if (crb(c,2)) { goto L_805B1674; } // 805B1654
  cmps(c,0,(int32_t)c->r[4],0); // 805B1658
  if (!crb(c,1)) { goto L_805B1674; } // 805B165C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805B1660
  c->r[4]=c->r[31]|c->r[31]; // 805B1664
  c->r[5]=R16(c->r[31]+0x00000004u); // 805B1668
  c->r[6]=0u+0x00000004u; // 805B166C
  c->lr=0x805B1674u; f_8062C630(c); // 805B1670
L_805B1674:;
  c->r[3]=c->r[31]|c->r[31]; // 805B1674
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B1678
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B167C
  c->lr=c->r[0]; // 805B1680
  c->r[1]=c->r[1]+0x00000010u; // 805B1684
  return; // 805B1688
}

// fn_805B168C
void f_805B168C(Ctx* __restrict c) {
  trace_call(0x805B168Cu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B168C
  f_805B1568(c); return; // 805B1690
}

// fn_805B1694
void f_805B1694(Ctx* __restrict c) {
  trace_call(0x805B1694u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B1694
  f_805B1494(c); return; // 805B1698
}

// fn_805B169C
void f_805B169C(Ctx* __restrict c) {
  trace_call(0x805B169Cu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B169C
  f_805B163C(c); return; // 805B16A0
}

// fn_805B16A4
void f_805B16A4(Ctx* __restrict c) {
  trace_call(0x805B16A4u);
  c->r[5]=0u+0x80720000u; // 805B16A4
  c->r[0]=0u+0x00000001u; // 805B16A8
  c->r[5]=c->r[5]+0x00002C30u; // 805B16AC
  W16(c->r[3]+0x00000006u,c->r[0]); // 805B16B0
  c->r[0]=c->r[5]+0x00000014u; // 805B16B4
  W32(c->r[3]+0x00000000u,c->r[5]); // 805B16B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 805B16BC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 805B16C0
  return; // 805B16C4
}

// fn_805B16C8
void f_805B16C8(Ctx* __restrict c) {
  trace_call(0x805B16C8u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 805B16C8
  c->r[6]=R32(c->r[4]+0x00000004u); // 805B16CC
  c->r[4]=R8(c->r[5]+0x00000005u); // 805B16D0
  c->r[0]=R8(c->r[6]+0x00000005u); // 805B16D4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 805B16D8
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 805B16DC
  c->r[3]=c->r[5]+c->r[4]; // 805B16E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B16E4
  c->r[8]=R8(c->r[3]+0x0000001Au); // 805B16E8
  c->r[4]=c->r[6]+c->r[0]; // 805B16EC
  c->r[5]=R32(c->r[7]+0x00000074u); // 805B16F0
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 805B16F4
  c->r[6]=R8(c->r[4]+0x0000001Au); // 805B16F8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 805B16FC
  c->r[7]=R32(c->r[5]+0x00000000u); // 805B1700
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 805B1704
  c->r[0]=c->r[7]+c->r[0]; // 805B1708
  c->r[6]=c->r[0]+c->r[6]; // 805B170C
  c->r[0]=R8(c->r[6]+0x00001AB0u); // 805B1710
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B1714
  if (crb(c,2)) return; // 805B1718
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 805B171C
  c->r[6]=c->r[7]+c->r[0]; // 805B1720
  c->r[0]=R32(c->r[6]+0x00001B30u); // 805B1724
  W32(c->r[5]+0x00000010u,c->r[0]); // 805B1728
  f_805B2984(c); return; // 805B172C
  return; // 805B1730
}

// fn_805B1734
void f_805B1734(Ctx* __restrict c) {
  trace_call(0x805B1734u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1734
  c->r[0]=c->lr; // 805B1738
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B173C
  c->r[5]=R32(c->r[4]+0x00000000u); // 805B1740
  c->r[4]=R32(c->r[4]+0x00000004u); // 805B1744
  c->r[3]=R8(c->r[5]+0x00000005u); // 805B1748
  c->r[0]=R8(c->r[4]+0x00000005u); // 805B174C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 805B1750
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1754
  c->r[3]=c->r[5]+c->r[3]; // 805B1758
  c->r[4]=c->r[4]+c->r[0]; // 805B175C
  c->lr=0x805B1764u; f_805D1704(c); // 805B1760
  cmps(c,0,(int32_t)c->r[3],0); // 805B1764
  if (crb(c,2)) { goto L_805B1770; } // 805B1768
  c->lr=0x805B1770u; f_805B2B9C(c); // 805B176C
L_805B1770:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1770
  c->lr=c->r[0]; // 805B1774
  c->r[1]=c->r[1]+0x00000010u; // 805B1778
  return; // 805B177C
}

// fn_805B1780
void f_805B1780(Ctx* __restrict c) {
  trace_call(0x805B1780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1780
  c->r[0]=c->lr; // 805B1784
  cmps(c,0,(int32_t)c->r[3],0); // 805B1788
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B178C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B1790
  c->r[31]=c->r[3]|c->r[3]; // 805B1794
  if (crb(c,2)) { goto L_805B17B8; } // 805B1798
  cmps(c,0,(int32_t)c->r[4],0); // 805B179C
  if (!crb(c,1)) { goto L_805B17B8; } // 805B17A0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805B17A4
  c->r[4]=c->r[31]|c->r[31]; // 805B17A8
  c->r[5]=R16(c->r[31]+0x00000004u); // 805B17AC
  c->r[6]=0u+0x00000004u; // 805B17B0
  c->lr=0x805B17B8u; f_8062C630(c); // 805B17B4
L_805B17B8:;
  c->r[3]=c->r[31]|c->r[31]; // 805B17B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B17BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B17C0
  c->lr=c->r[0]; // 805B17C4
  c->r[1]=c->r[1]+0x00000010u; // 805B17C8
  return; // 805B17CC
}

// fn_805B17D0
void f_805B17D0(Ctx* __restrict c) {
  trace_call(0x805B17D0u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B17D0
  f_805B1734(c); return; // 805B17D4
}

// fn_805B17D8
void f_805B17D8(Ctx* __restrict c) {
  trace_call(0x805B17D8u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B17D8
  f_805B16C8(c); return; // 805B17DC
}

// fn_805B17E0
void f_805B17E0(Ctx* __restrict c) {
  trace_call(0x805B17E0u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 805B17E0
  f_805B1780(c); return; // 805B17E4
}

// fn_805B17E8
void f_805B17E8(Ctx* __restrict c) {
  trace_call(0x805B17E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B17E8
  c->r[0]=c->lr; // 805B17EC
  c->r[8]=0u+0x80720000u; // 805B17F0
  cmps(c,0,(int32_t)c->r[3],0); // 805B17F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B17F8
  c->r[8]=c->r[8]+0x00002C90u; // 805B17FC
  c->r[9]=0u+0x00000001u; // 805B1800
  c->r[0]=0u+0x00000000u; // 805B1804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B1808
  c->r[31]=c->r[3]|c->r[3]; // 805B180C
  c->r[7]=c->r[8]+0x00000014u; // 805B1810
  c->r[6]=c->r[8]+0x00000034u; // 805B1814
  W16(c->r[3]+0x00000006u,c->r[9]); // 805B1818
  c->r[10]=c->r[31]|c->r[31]; // 805B181C
  W32(c->r[3]+0x00000000u,c->r[8]); // 805B1820
  W32(c->r[3]+0x00000008u,c->r[7]); // 805B1824
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 805B1828
  W32(c->r[3]+0x00000010u,c->r[4]); // 805B182C
  W32(c->r[3]+0x00000014u,c->r[0]); // 805B1830
  W8(c->r[3]+0x00000018u,c->r[9]); // 805B1834
  W8(c->r[3]+0x00000019u,c->r[5]); // 805B1838
  if (crb(c,2)) { goto L_805B1844; } // 805B183C
  c->r[10]=c->r[3]+0x00000008u; // 805B1840
L_805B1844:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 805B1844
  c->r[4]=c->r[10]|c->r[10]; // 805B1848
  c->lr=0x805B1850u; f_805C2168(c); // 805B184C
  cmps(c,0,(int32_t)c->r[31],0); // 805B1850
  c->r[4]=c->r[31]|c->r[31]; // 805B1854
  if (crb(c,2)) { goto L_805B1860; } // 805B1858
  c->r[4]=c->r[31]+0x0000000Cu; // 805B185C
L_805B1860:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 805B1860
  c->lr=0x805B1868u; f_805C2224(c); // 805B1864
  c->r[3]=c->r[31]|c->r[31]; // 805B1868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B186C
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1870
  c->lr=c->r[0]; // 805B1874
  c->r[1]=c->r[1]+0x00000010u; // 805B1878
  return; // 805B187C
}

// fn_805B1880
void f_805B1880(Ctx* __restrict c) {
  trace_call(0x805B1880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1880
  c->r[0]=c->lr; // 805B1884
  cmps(c,0,(int32_t)c->r[3],0); // 805B1888
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B188C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B1890
  c->r[31]=c->r[4]|c->r[4]; // 805B1894
  W32(c->r[1]+0x00000008u,c->r[30]); // 805B1898
  c->r[30]=c->r[3]|c->r[3]; // 805B189C
  if (crb(c,2)) { goto L_805B1914; } // 805B18A0
  c->r[6]=0u+0x80720000u; // 805B18A4
  c->r[4]=c->r[30]|c->r[30]; // 805B18A8
  c->r[6]=c->r[6]+0x00002C90u; // 805B18AC
  W32(c->r[3]+0x00000000u,c->r[6]); // 805B18B0
  c->r[5]=c->r[6]+0x00000014u; // 805B18B4
  c->r[0]=c->r[6]+0x00000034u; // 805B18B8
  W32(c->r[3]+0x00000008u,c->r[5]); // 805B18BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 805B18C0
  if (crb(c,2)) { goto L_805B18CC; } // 805B18C4
  c->r[4]=c->r[3]+0x00000008u; // 805B18C8
L_805B18CC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 805B18CC
  c->lr=0x805B18D4u; f_805C21D4(c); // 805B18D0
  cmps(c,0,(int32_t)c->r[30],0); // 805B18D4
  c->r[4]=c->r[30]|c->r[30]; // 805B18D8
  if (crb(c,2)) { goto L_805B18E4; } // 805B18DC
  c->r[4]=c->r[30]+0x0000000Cu; // 805B18E0
L_805B18E4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 805B18E4
  c->lr=0x805B18ECu; f_805C2290(c); // 805B18E8
  c->r[3]=R32(c->r[30]+0x00000014u); // 805B18EC
  c->r[4]=0u+0x00000001u; // 805B18F0
  c->lr=0x805B18F8u; f_8052CAE8(c); // 805B18F4
  cmps(c,0,(int32_t)c->r[31],0); // 805B18F8
  if (!crb(c,1)) { goto L_805B1914; } // 805B18FC
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805B1900
  c->r[4]=c->r[30]|c->r[30]; // 805B1904
  c->r[5]=R16(c->r[30]+0x00000004u); // 805B1908
  c->r[6]=0u+0x00000028u; // 805B190C
  c->lr=0x805B1914u; f_8062C630(c); // 805B1910
L_805B1914:;
  c->r[3]=c->r[30]|c->r[30]; // 805B1914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B1918
  c->r[30]=R32(c->r[1]+0x00000008u); // 805B191C
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1920
  c->lr=c->r[0]; // 805B1924
  c->r[1]=c->r[1]+0x00000010u; // 805B1928
  return; // 805B192C
}

// fn_805B1930
void f_805B1930(Ctx* __restrict c) {
  trace_call(0x805B1930u);
  c->r[0]=0u+0x00000001u; // 805B1930
  W8(c->r[3]+0x00000018u,c->r[0]); // 805B1934
  return; // 805B1938
}

// fn_805B193C
void f_805B193C(Ctx* __restrict c) {
  trace_call(0x805B193Cu);
  c->r[0]=R8(c->r[3]+0x00000019u); // 805B193C
  c->r[0]=cntlz(c->r[0]); // 805B1940
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 805B1944
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B1948
  if (crb(c,2)) { goto L_805B195C; } // 805B194C
  c->r[0]=0u+0x00000001u; // 805B1950
  W8(c->r[3]+0x00000018u,c->r[0]); // 805B1954
  return; // 805B1958
L_805B195C:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 805B195C
  c->r[4]=c->r[4]+0x00000010u; // 805B1960
  f_8052CD98(c); return; // 805B1964
  return; // 805B1968
}

// fn_805B196C
void f_805B196C(Ctx* __restrict c) {
  trace_call(0x805B196Cu);
  return; // 805B196C
}

// fn_805B1970
void f_805B1970(Ctx* __restrict c) {
  trace_call(0x805B1970u);
  c->r[0]=R32(c->r[4]+0x00000010u); // 805B1970
  cmps(c,0,(int32_t)c->r[0],0); // 805B1974
  if (crb(c,2)) return; // 805B1978
  c->r[0]=0u+0x00000001u; // 805B197C
  W8(c->r[3]+0x00000018u,c->r[0]); // 805B1980
  return; // 805B1984
}

// fn_805B1988
void f_805B1988(Ctx* __restrict c) {
  trace_call(0x805B1988u);
  c->r[0]=R32(c->r[4]+0x00000010u); // 805B1988
  cmps(c,0,(int32_t)c->r[0],0); // 805B198C
  if (crb(c,2)) return; // 805B1990
  c->r[0]=R8(c->r[3]+0x00000019u); // 805B1994
  c->r[0]=cntlz(c->r[0]); // 805B1998
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 805B199C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 805B19A0
  if (crb(c,2)) { goto L_805B19B4; } // 805B19A4
  c->r[0]=0u+0x00000001u; // 805B19A8
  W8(c->r[3]+0x00000018u,c->r[0]); // 805B19AC
  return; // 805B19B0
L_805B19B4:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 805B19B4
  c->r[4]=c->r[4]+0x00000010u; // 805B19B8
  f_8052CD98(c); return; // 805B19BC
  return; // 805B19C0
}

// fn_805B19C4
void f_805B19C4(Ctx* __restrict c) {
  trace_call(0x805B19C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B19C4
  c->r[0]=c->lr; // 805B19C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 805B19CC
  c->r[0]=0u+0x00000000u; // 805B19D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 805B19D4
  c->r[31]=c->r[4]|c->r[4]; // 805B19D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 805B19DC
  c->r[30]=c->r[3]|c->r[3]; // 805B19E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B19E4
  c->r[3]=R32(c->r[3]+0x00000010u); // 805B19E8
  c->r[3]=R32(c->r[3]+0x00000054u); // 805B19EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B19F0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 805B19F4
  c->ctr=c->r[12]; // 805B19F8
  if (true) { c->lr=0x805B1A00u; dispatch(c,c->ctr); } // 805B19FC
  c->r[0]=R32(c->r[31]+0x00000008u); // 805B1A00
  c->r[4]=c->r[3]|c->r[3]; // 805B1A04
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 805B1A08
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 805B1A0C
  if (!crb(c,0)) { goto L_805B1A30; } // 805B1A10
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 805B1A14
  c->r[3]=c->r[31]|c->r[31]; // 805B1A18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 805B1A1C
  if (!crb(c,0)) { goto L_805B1A28; } // 805B1A20
  c->r[4]=c->r[0]|c->r[0]; // 805B1A24
L_805B1A28:;
  c->r[5]=0u+0x00000004u; // 805B1A28
  c->lr=0x805B1A30u; f_806239C0(c); // 805B1A2C
L_805B1A30:;
  c->r[6]=R32(c->r[30]+0x00000010u); // 805B1A30
  c->r[9]=0u+0x00000000u; // 805B1A34
  c->r[7]=0u+0x00000000u; // 805B1A38
  goto L_805B1A94; // 805B1A3C
L_805B1A40:;
  c->r[10]=0u+0x00000000u; // 805B1A40
  c->r[8]=0u+0x00000000u; // 805B1A44
  goto L_805B1A78; // 805B1A48
L_805B1A4C:;
  c->r[4]=R32(c->r[3]+0x00000048u); // 805B1A4C
  c->r[10]=c->r[10]+0x00000001u; // 805B1A50
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B1A54
  c->r[5]=R32(c->r[4]+c->r[8]); // 805B1A58
  c->r[8]=c->r[8]+0x00000004u; // 805B1A5C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805B1A60
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B1A64
  c->r[5]=c->r[5]+0x00000010u; // 805B1A68
  c->r[3]=c->r[3]+0x00000001u; // 805B1A6C
  W32(c->r[4]+c->r[0],c->r[5]); // 805B1A70
  W32(c->r[31]+0x00000004u,c->r[3]); // 805B1A74
L_805B1A78:;
  c->r[0]=R32(c->r[6]+0x00000028u); // 805B1A78
  c->r[3]=R32(c->r[7]+c->r[0]); // 805B1A7C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 805B1A80
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 805B1A84
  if (crb(c,0)) { IRQCHK(c); goto L_805B1A4C; } // 805B1A88
  c->r[7]=c->r[7]+0x00000004u; // 805B1A8C
  c->r[9]=c->r[9]+0x00000001u; // 805B1A90
L_805B1A94:;
  c->r[0]=R32(c->r[6]+0x0000002Cu); // 805B1A94
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 805B1A98
  if (crb(c,0)) { IRQCHK(c); goto L_805B1A40; } // 805B1A9C
  c->r[6]=R32(c->r[30]+0x00000010u); // 805B1AA0
  c->r[9]=0u+0x00000000u; // 805B1AA4
  c->r[7]=0u+0x00000000u; // 805B1AA8
  goto L_805B1B04; // 805B1AAC
L_805B1AB0:;
  c->r[10]=0u+0x00000000u; // 805B1AB0
  c->r[8]=0u+0x00000000u; // 805B1AB4
  goto L_805B1AE8; // 805B1AB8
L_805B1ABC:;
  c->r[4]=R32(c->r[3]+0x00000048u); // 805B1ABC
  c->r[10]=c->r[10]+0x00000001u; // 805B1AC0
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B1AC4
  c->r[5]=R32(c->r[4]+c->r[8]); // 805B1AC8
  c->r[8]=c->r[8]+0x00000004u; // 805B1ACC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805B1AD0
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B1AD4
  c->r[5]=c->r[5]+0x00000010u; // 805B1AD8
  c->r[3]=c->r[3]+0x00000001u; // 805B1ADC
  W32(c->r[4]+c->r[0],c->r[5]); // 805B1AE0
  W32(c->r[31]+0x00000004u,c->r[3]); // 805B1AE4
L_805B1AE8:;
  c->r[0]=R32(c->r[6]+0x00000034u); // 805B1AE8
  c->r[3]=R32(c->r[7]+c->r[0]); // 805B1AEC
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 805B1AF0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 805B1AF4
  if (crb(c,0)) { IRQCHK(c); goto L_805B1ABC; } // 805B1AF8
  c->r[7]=c->r[7]+0x00000004u; // 805B1AFC
  c->r[9]=c->r[9]+0x00000001u; // 805B1B00
L_805B1B04:;
  c->r[0]=R32(c->r[6]+0x00000038u); // 805B1B04
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 805B1B08
  if (crb(c,0)) { IRQCHK(c); goto L_805B1AB0; } // 805B1B0C
  c->r[5]=R32(c->r[30]+0x00000010u); // 805B1B10
  c->r[8]=0u+0x00000000u; // 805B1B14
  c->r[6]=0u+0x00000000u; // 805B1B18
  goto L_805B1B54; // 805B1B1C
L_805B1B20:;
  c->r[3]=R32(c->r[5]+0x000000FCu); // 805B1B20
  c->r[7]=R32(c->r[3]+c->r[6]); // 805B1B24
  {uint32_t ea=c->r[7]+0x00000010u; c->r[0]=R32(ea); c->r[7]=ea;} // 805B1B28
  cmps(c,0,(int32_t)c->r[0],0); // 805B1B2C
  if (crb(c,2)) { goto L_805B1B4C; } // 805B1B30
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B1B34
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B1B38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805B1B3C
  c->r[3]=c->r[3]+0x00000001u; // 805B1B40
  W32(c->r[4]+c->r[0],c->r[7]); // 805B1B44
  W32(c->r[31]+0x00000004u,c->r[3]); // 805B1B48
L_805B1B4C:;
  c->r[6]=c->r[6]+0x00000004u; // 805B1B4C
  c->r[8]=c->r[8]+0x00000001u; // 805B1B50
L_805B1B54:;
  c->r[0]=R32(c->r[5]+0x00000100u); // 805B1B54
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 805B1B58
  if (crb(c,0)) { IRQCHK(c); goto L_805B1B20; } // 805B1B5C
  c->r[3]=R32(c->r[30]+0x00000010u); // 805B1B60
  c->r[9]=0u+0x00000000u; // 805B1B64
  c->r[6]=0u+0x00000000u; // 805B1B68
  c->r[7]=R32(c->r[3]+0x00000020u); // 805B1B6C
  c->r[8]=R32(c->r[3]+0x00000024u); // 805B1B70
  goto L_805B1BAC; // 805B1B74
L_805B1B78:;
  c->r[3]=R32(c->r[7]+0x00000048u); // 805B1B78
  c->r[4]=R32(c->r[3]+c->r[6]); // 805B1B7C
  cmpu(c,0,c->r[4],c->r[8]); // 805B1B80
  if (crb(c,2)) { goto L_805B1BA4; } // 805B1B84
  c->r[3]=R32(c->r[31]+0x00000004u); // 805B1B88
  c->r[5]=c->r[4]+0x00000010u; // 805B1B8C
  c->r[4]=R32(c->r[31]+0x00000000u); // 805B1B90
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 805B1B94
  c->r[3]=c->r[3]+0x00000001u; // 805B1B98
  W32(c->r[4]+c->r[0],c->r[5]); // 805B1B9C
  W32(c->r[31]+0x00000004u,c->r[3]); // 805B1BA0
L_805B1BA4:;
  c->r[6]=c->r[6]+0x00000004u; // 805B1BA4
  c->r[9]=c->r[9]+0x00000001u; // 805B1BA8
L_805B1BAC:;
  c->r[0]=R32(c->r[7]+0x0000004Cu); // 805B1BAC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 805B1BB0
  if (crb(c,0)) { IRQCHK(c); goto L_805B1B78; } // 805B1BB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 805B1BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 805B1BBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 805B1BC0
  c->lr=c->r[0]; // 805B1BC4
  c->r[1]=c->r[1]+0x00000010u; // 805B1BC8
  return; // 805B1BCC
}

// fn_805B1BD0
void f_805B1BD0(Ctx* __restrict c) {
  trace_call(0x805B1BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1BD0
  c->r[0]=c->lr; // 805B1BD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 805B1BD8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 805B1BDC
  c->r[31]=c->r[5]|c->r[5]; // 805B1BE0
  W32(c->r[1]+0x00000028u,c->r[30]); // 805B1BE4
  c->r[30]=c->r[4]|c->r[4]; // 805B1BE8
  W32(c->r[1]+0x00000024u,c->r[29]); // 805B1BEC
  c->r[29]=c->r[3]|c->r[3]; // 805B1BF0
  c->r[6]=R32(c->r[13]+0xFFFFE758u); // 805B1BF4
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 805B1BF8
  c->r[4]=R32(c->r[6]+0x00000004u); // 805B1BFC
  c->r[0]=c->r[3]^c->r[4]; // 805B1C00
  c->r[0]=cntlz(c->r[0]); // 805B1C04
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B1C08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B1C0C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1C10
  c->r[0]=0u-c->r[3]; // 805B1C14
  c->r[0]=c->r[0]|c->r[3]; // 805B1C18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B1C1C
  if (crb(c,2)) { goto L_805B1C48; } // 805B1C20
  c->r[3]=0u+0x806C0000u; // 805B1C24
  c->r[3]=c->r[3]+0xFFFFE5E0u; // 805B1C28
  W32(c->r[4]+0x00000000u,c->r[3]); // 805B1C2C
  c->r[0]=c->r[3]+0x0000000Fu; // 805B1C30
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 805B1C34
  c->r[3]=mftb(c,268); // 805B1C38
  c->r[0]=c->r[4]+0x00000010u; // 805B1C3C
  W32(c->r[4]+0x00000004u,c->r[3]); // 805B1C40
  W32(c->r[6]+0x00000004u,c->r[0]); // 805B1C44
L_805B1C48:;
  c->r[5]=0u+0x00000000u; // 805B1C48
  c->r[0]=0u+0x80000000u; // 805B1C4C
  W32(c->r[1]+0x00000008u,c->r[5]); // 805B1C50
  c->r[3]=c->r[29]|c->r[29]; // 805B1C54
  c->r[4]=c->r[1]+0x00000008u; // 805B1C58
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 805B1C5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 805B1C60
  c->lr=0x805B1C68u; f_805B19C4(c); // 805B1C64
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B1C68
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B1C6C
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B1C70
  c->r[0]=c->r[3]^c->r[5]; // 805B1C74
  c->r[0]=cntlz(c->r[0]); // 805B1C78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B1C7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B1C80
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1C84
  c->r[0]=0u-c->r[3]; // 805B1C88
  c->r[0]=c->r[0]|c->r[3]; // 805B1C8C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B1C90
  if (crb(c,2)) { goto L_805B1CB8; } // 805B1C94
  c->r[3]=0u+0x806C0000u; // 805B1C98
  c->r[3]=c->r[3]+0xFFFFE5E0u; // 805B1C9C
  c->r[0]=c->r[3]+0x00000018u; // 805B1CA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B1CA4
  c->r[3]=mftb(c,268); // 805B1CA8
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B1CAC
  c->r[0]=c->r[5]+0x0000000Cu; // 805B1CB0
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B1CB4
L_805B1CB8:;
  c->r[3]=c->r[29]|c->r[29]; // 805B1CB8
  c->r[6]=c->r[30]|c->r[30]; // 805B1CBC
  c->r[7]=c->r[31]|c->r[31]; // 805B1CC0
  c->r[4]=c->r[29]+0x00000014u; // 805B1CC4
  c->r[5]=c->r[1]+0x00000008u; // 805B1CC8
  c->lr=0x805B1CD0u; f_805B1D68(c); // 805B1CCC
  c->r[0]=0u+0x00000000u; // 805B1CD0
  W8(c->r[29]+0x00000018u,c->r[0]); // 805B1CD4
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B1CD8
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B1CDC
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B1CE0
  c->r[0]=c->r[3]^c->r[5]; // 805B1CE4
  c->r[0]=cntlz(c->r[0]); // 805B1CE8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B1CEC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B1CF0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1CF4
  c->r[0]=0u-c->r[3]; // 805B1CF8
  c->r[0]=c->r[0]|c->r[3]; // 805B1CFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B1D00
  if (crb(c,2)) { goto L_805B1D28; } // 805B1D04
  c->r[3]=0u+0x806C0000u; // 805B1D08
  c->r[3]=c->r[3]+0xFFFFE5E0u; // 805B1D0C
  c->r[0]=c->r[3]+0x00000022u; // 805B1D10
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B1D14
  c->r[3]=mftb(c,268); // 805B1D18
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B1D1C
  c->r[0]=c->r[5]+0x0000000Cu; // 805B1D20
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B1D24
L_805B1D28:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 805B1D28
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 805B1D2C
  if (!crb(c,2)) { goto L_805B1D4C; } // 805B1D30
  c->r[0]=R32(c->r[1]+0x00000010u); // 805B1D34
  c->r[6]=0u+0x00000018u; // 805B1D38
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805B1D3C
  c->r[4]=R32(c->r[1]+0x00000008u); // 805B1D40
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 805B1D44
  c->lr=0x805B1D4Cu; f_8062C630(c); // 805B1D48
L_805B1D4C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 805B1D4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 805B1D50
  c->r[30]=R32(c->r[1]+0x00000028u); // 805B1D54
  c->r[29]=R32(c->r[1]+0x00000024u); // 805B1D58
  c->lr=c->r[0]; // 805B1D5C
  c->r[1]=c->r[1]+0x00000030u; // 805B1D60
  return; // 805B1D64
}

// fn_805B1D68
void f_805B1D68(Ctx* __restrict c) {
  trace_call(0x805B1D68u);
  cmps(c,0,(int32_t)c->r[6],0); // 805B1D68
  if (crb(c,2)) { goto L_805B1D7C; } // 805B1D6C
  cmps(c,0,(int32_t)c->r[7],0); // 805B1D70
  if (crb(c,2)) { goto L_805B1D7C; } // 805B1D74
  f_805B208C(c); return; // 805B1D78
L_805B1D7C:;
  f_805B1D80(c); return; // 805B1D7C
}

// fn_805B1D80
void f_805B1D80(Ctx* __restrict c) {
  trace_call(0x805B1D80u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 805B1D80
  c->r[12]=c->r[1]|c->r[1]; // 805B1D84
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 805B1D88
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 805B1D8C
  c->r[0]=c->lr; // 805B1D90
  W32(c->r[12]+0x00000004u,c->r[0]); // 805B1D94
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 805B1D98
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 805B1D9C
  c->r[30]=c->r[4]|c->r[4]; // 805B1DA0
  c->r[4]=c->r[5]|c->r[5]; // 805B1DA4
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 805B1DA8
  c->r[29]=c->r[3]|c->r[3]; // 805B1DAC
  c->r[5]=R32(c->r[3]+0x00000010u); // 805B1DB0
  c->r[3]=c->r[1]+0x00000018u; // 805B1DB4
  c->lr=0x805B1DBCu; f_805741FC(c); // 805B1DB8
  c->r[3]=R32(c->r[30]+0x00000000u); // 805B1DBC
  cmps(c,0,(int32_t)c->r[3],0); // 805B1DC0
  if (crb(c,2)) { goto L_805B1DD0; } // 805B1DC4
  c->r[4]=0u+0x00000001u; // 805B1DC8
  c->lr=0x805B1DD0u; f_8052CAE8(c); // 805B1DCC
L_805B1DD0:;
  c->r[3]=c->r[1]+0x00000018u; // 805B1DD0
  c->lr=0x805B1DD8u; f_805742FC(c); // 805B1DD4
  c->r[31]=c->r[3]|c->r[3]; // 805B1DD8
  c->r[3]=c->r[1]+0x00000030u; // 805B1DDC
  c->lr=0x805B1DE4u; f_8052C988(c); // 805B1DE0
  c->r[3]=R32(c->r[29]+0x00000010u); // 805B1DE4
  c->r[4]=c->r[1]+0x00000040u; // 805B1DE8
  c->r[5]=c->r[1]+0x00000050u; // 805B1DEC
  c->r[3]=R32(c->r[3]+0x00000054u); // 805B1DF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 805B1DF4
  c->r[12]=R32(c->r[12]+0x00000044u); // 805B1DF8
  c->ctr=c->r[12]; // 805B1DFC
  if (true) { c->lr=0x805B1E04u; dispatch(c,c->ctr); } // 805B1E00
  c->r[4]=0u+0x00000050u; // 805B1E04
  c->r[0]=0u+0x00000000u; // 805B1E08
  cmps(c,0,(int32_t)c->r[4],16); // 805B1E0C
  W32(c->r[1]+0x00000030u,c->r[31]); // 805B1E10
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 805B1E14
  W8(c->r[1]+0x00000035u,c->r[0]); // 805B1E18
  if (crb(c,1)) { goto L_805B1E28; } // 805B1E1C
  c->r[4]=0u+0x00000001u; // 805B1E20
  goto L_805B1F2C; // 805B1E24
L_805B1E28:;
  cmps(c,0,(int32_t)c->r[4],32); // 805B1E28
  if (crb(c,1)) { goto L_805B1E38; } // 805B1E2C
  c->r[4]=0u+0x00000002u; // 805B1E30
  goto L_805B1F2C; // 805B1E34
L_805B1E38:;
  cmps(c,0,(int32_t)c->r[4],48); // 805B1E38
  if (crb(c,1)) { goto L_805B1E48; } // 805B1E3C
  c->r[4]=0u+0x00000003u; // 805B1E40
  goto L_805B1F2C; // 805B1E44
L_805B1E48:;
  cmps(c,0,(int32_t)c->r[4],64); // 805B1E48
  if (crb(c,1)) { goto L_805B1E58; } // 805B1E4C
  c->r[4]=0u+0x00000004u; // 805B1E50
  goto L_805B1F2C; // 805B1E54
L_805B1E58:;
  cmps(c,0,(int32_t)c->r[4],96); // 805B1E58
  if (crb(c,1)) { goto L_805B1E68; } // 805B1E5C
  c->r[4]=0u+0x00000005u; // 805B1E60
  goto L_805B1F2C; // 805B1E64
L_805B1E68:;
  cmps(c,0,(int32_t)c->r[4],128); // 805B1E68
  if (crb(c,1)) { goto L_805B1E78; } // 805B1E6C
  c->r[4]=0u+0x00000006u; // 805B1E70
  goto L_805B1F2C; // 805B1E74
L_805B1E78:;
  cmps(c,0,(int32_t)c->r[4],160); // 805B1E78
  if (crb(c,1)) { goto L_805B1E88; } // 805B1E7C
  c->r[4]=0u+0x00000007u; // 805B1E80
  goto L_805B1F2C; // 805B1E84
L_805B1E88:;
  cmps(c,0,(int32_t)c->r[4],192); // 805B1E88
  if (crb(c,1)) { goto L_805B1E98; } // 805B1E8C
  c->r[4]=0u+0x00000008u; // 805B1E90
  goto L_805B1F2C; // 805B1E94
L_805B1E98:;
  cmps(c,0,(int32_t)c->r[4],256); // 805B1E98
  if (crb(c,1)) { goto L_805B1EA8; } // 805B1E9C
  c->r[4]=0u+0x00000009u; // 805B1EA0
  goto L_805B1F2C; // 805B1EA4
L_805B1EA8:;
  cmps(c,0,(int32_t)c->r[4],320); // 805B1EA8
  if (crb(c,1)) { goto L_805B1EB8; } // 805B1EAC
  c->r[4]=0u+0x0000000Au; // 805B1EB0
  goto L_805B1F2C; // 805B1EB4
L_805B1EB8:;
  cmps(c,0,(int32_t)c->r[4],512); // 805B1EB8
  if (crb(c,1)) { goto L_805B1EC8; } // 805B1EBC
  c->r[4]=0u+0x0000000Bu; // 805B1EC0
  goto L_805B1F2C; // 805B1EC4
L_805B1EC8:;
  cmps(c,0,(int32_t)c->r[4],544); // 805B1EC8
  if (crb(c,1)) { goto L_805B1ED8; } // 805B1ECC
  c->r[4]=0u+0x0000000Cu; // 805B1ED0
  goto L_805B1F2C; // 805B1ED4
L_805B1ED8:;
  cmps(c,0,(int32_t)c->r[4],1024); // 805B1ED8
  if (crb(c,1)) { goto L_805B1EE8; } // 805B1EDC
  c->r[4]=0u+0x0000000Du; // 805B1EE0
  goto L_805B1F2C; // 805B1EE4
L_805B1EE8:;
  cmps(c,0,(int32_t)c->r[4],2048); // 805B1EE8
  if (crb(c,1)) { goto L_805B1EF8; } // 805B1EEC
  c->r[4]=0u+0x0000000Eu; // 805B1EF0
  goto L_805B1F2C; // 805B1EF4
L_805B1EF8:;
  cmps(c,0,(int32_t)c->r[4],4096); // 805B1EF8
  if (crb(c,1)) { goto L_805B1F08; } // 805B1EFC
  c->r[4]=0u+0x0000000Fu; // 805B1F00
  goto L_805B1F2C; // 805B1F04
L_805B1F08:;
  cmps(c,0,(int32_t)c->r[4],8192); // 805B1F08
  if (crb(c,1)) { goto L_805B1F18; } // 805B1F0C
  c->r[4]=0u+0x00000010u; // 805B1F10
  goto L_805B1F2C; // 805B1F14
L_805B1F18:;
  c->r[4]=c->msr; // 805B1F18
  c->r[0]=c->r[4]|0x00000400u; // 805B1F1C
  c->msr=c->r[0]; // 805B1F20
  c->msr=c->r[4]; // 805B1F24
  c->r[4]=0u+0xFFFFFFFFu; // 805B1F28
L_805B1F2C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 805B1F2C
  c->r[6]=c->r[3]+c->r[0]; // 805B1F30
  c->r[7]=R32(c->r[6]+0x00000028u); // 805B1F34
  cmps(c,0,(int32_t)c->r[7],0); // 805B1F38
  if (crb(c,2)) { goto L_805B1F5C; } // 805B1F3C
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 805B1F40
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 805B1F44
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 805B1F48
  c->r[5]=R32(c->r[6]+0x00000028u); // 805B1F4C
  c->r[0]=R32(c->r[5]+0x00000000u); // 805B1F50
  W32(c->r[6]+0x00000028u,c->r[0]); // 805B1F54
  goto L_805B1F60; // 805B1F58
L_805B1F5C:;
  c->r[7]=0u+0x00000000u; // 805B1F5C
L_805B1F60:;
  cmps(c,0,(int32_t)c->r[7],0); // 805B1F60
  if (crb(c,2)) { goto L_805B1F6C; } // 805B1F64
  goto L_805B1F78; // 805B1F68
L_805B1F6C:;
  c->r[5]=0u+0x00000014u; // 805B1F6C
  c->lr=0x805B1F74u; f_8062BDA4(c); // 805B1F70
  c->r[7]=c->r[3]|c->r[3]; // 805B1F74
L_805B1F78:;
  cmps(c,0,(int32_t)c->r[7],0); // 805B1F78
  if (crb(c,2)) { goto L_805B1F90; } // 805B1F7C
  c->r[3]=c->r[7]|c->r[7]; // 805B1F80
  c->r[4]=c->r[1]+0x00000030u; // 805B1F84
  c->lr=0x805B1F8Cu; f_8052C9C4(c); // 805B1F88
  c->r[7]=c->r[3]|c->r[3]; // 805B1F8C
L_805B1F90:;
  W32(c->r[30]+0x00000000u,c->r[7]); // 805B1F90
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B1F94
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B1F98
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B1F9C
  c->r[0]=c->r[3]^c->r[5]; // 805B1FA0
  c->r[0]=cntlz(c->r[0]); // 805B1FA4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B1FA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B1FAC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B1FB0
  c->r[0]=0u-c->r[3]; // 805B1FB4
  c->r[0]=c->r[0]|c->r[3]; // 805B1FB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B1FBC
  if (crb(c,2)) { goto L_805B1FE4; } // 805B1FC0
  c->r[3]=0u+0x806C0000u; // 805B1FC4
  c->r[3]=c->r[3]+0xFFFFE5E0u; // 805B1FC8
  c->r[0]=c->r[3]+0x00000025u; // 805B1FCC
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B1FD0
  c->r[3]=mftb(c,268); // 805B1FD4
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B1FD8
  c->r[0]=c->r[5]+0x0000000Cu; // 805B1FDC
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B1FE0
L_805B1FE4:;
  c->r[4]=c->r[31]|c->r[31]; // 805B1FE4
  c->r[3]=c->r[1]+0x00000010u; // 805B1FE8
  c->lr=0x805B1FF0u; f_8052A63C(c); // 805B1FEC
  c->r[6]=R32(c->r[1]+0x00000010u); // 805B1FF0
  c->r[5]=c->r[31]|c->r[31]; // 805B1FF4
  c->r[3]=c->r[1]+0x00000018u; // 805B1FF8
  c->r[4]=0u+0x00000000u; // 805B1FFC
  c->lr=0x805B2004u; f_8052A924(c); // 805B2000
  c->r[4]=R32(c->r[30]+0x00000000u); // 805B2004
  c->r[3]=c->r[1]+0x00000010u; // 805B2008
  c->lr=0x805B2010u; f_8052A6F4(c); // 805B200C
  c->r[4]=c->r[31]|c->r[31]; // 805B2010
  c->r[3]=c->r[1]+0x00000010u; // 805B2014
  c->lr=0x805B201Cu; f_8052A698(c); // 805B2018
  c->r[4]=R32(c->r[13]+0xFFFFE758u); // 805B201C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 805B2020
  c->r[5]=R32(c->r[4]+0x00000004u); // 805B2024
  c->r[0]=c->r[3]^c->r[5]; // 805B2028
  c->r[0]=cntlz(c->r[0]); // 805B202C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 805B2030
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 805B2034
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 805B2038
  c->r[0]=0u-c->r[3]; // 805B203C
  c->r[0]=c->r[0]|c->r[3]; // 805B2040
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 805B2044
  if (crb(c,2)) { goto L_805B206C; } // 805B2048
  c->r[3]=0u+0x806C0000u; // 805B204C
  c->r[3]=c->r[3]+0xFFFFE5E0u; // 805B2050
  c->r[0]=c->r[3]+0x0000003Fu; // 805B2054
  W32(c->r[5]+0x00000000u,c->r[0]); // 805B2058
  c->r[3]=mftb(c,268); // 805B205C
  W32(c->r[5]+0x00000004u,c->r[3]); // 805B2060
  c->r[0]=c->r[5]+0x0000000Cu; // 805B2064
  W32(c->r[4]+0x00000004u,c->r[0]); // 805B2068
L_805B206C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 805B206C
  c->r[0]=R32(c->r[10]+0x00000004u); // 805B2070
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 805B2074
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 805B2078
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 805B207C
  c->lr=c->r[0]; // 805B2080
  c->r[1]=c->r[10]|c->r[10]; // 805B2084
  return; // 805B2088
}

