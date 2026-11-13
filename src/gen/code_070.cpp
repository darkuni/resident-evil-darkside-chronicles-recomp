#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_804CC974
void f_804CC974(Ctx* __restrict c) {
  trace_call(0x804CC974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC974
  c->r[0]=c->lr; // 804CC978
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC97C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CC980
  W32(c->r[1]+0x00000008u,c->r[30]); // 804CC984
  c->r[30]=c->r[3]|c->r[3]; // 804CC988
  c->r[31]=R32(c->r[3]+0x00002888u); // 804CC98C
  cmps(c,0,(int32_t)c->r[31],0); // 804CC990
  if (crb(c,2)) { goto L_804CC9C4; } // 804CC994
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CC998
  c->r[4]=0u+0x00010000u; // 804CC99C
  c->r[3]=c->r[31]|c->r[31]; // 804CC9A0
  c->r[6]=c->r[30]|c->r[30]; // 804CC9A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CC9A8
  c->r[4]=c->r[4]+0x00000003u; // 804CC9AC
  c->r[5]=0u+0x00000000u; // 804CC9B0
  c->ctr=c->r[12]; // 804CC9B4
  if (true) { c->lr=0x804CC9BCu; dispatch(c,c->ctr); } // 804CC9B8
  c->r[0]=0u+0x00000000u; // 804CC9BC
  W32(c->r[30]+0x00002888u,c->r[0]); // 804CC9C0
L_804CC9C4:;
  c->r[3]=c->r[31]|c->r[31]; // 804CC9C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CC9C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804CC9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CC9D0
  c->lr=c->r[0]; // 804CC9D4
  c->r[1]=c->r[1]+0x00000010u; // 804CC9D8
  return; // 804CC9DC
}

// UpdateFrame__Q34nw4r3g3d7ScnRootFv
void f_804CC9E0(Ctx* __restrict c) {
  trace_call(0x804CC9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CC9E0
  c->r[0]=c->lr; // 804CC9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CC9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CC9EC
  c->r[31]=c->r[3]|c->r[3]; // 804CC9F0
  c->r[0]=R32(c->r[3]+0x00002888u); // 804CC9F4
  cmps(c,0,(int32_t)c->r[0],0); // 804CC9F8
  if (crb(c,2)) { goto L_804CCA14; } // 804CC9FC
  c->r[3]=c->r[0]|c->r[0]; // 804CCA00
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCA04
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804CCA08
  c->ctr=c->r[12]; // 804CCA0C
  if (true) { c->lr=0x804CCA14u; dispatch(c,c->ctr); } // 804CCA10
L_804CCA14:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CCA14
  c->r[3]=c->r[31]|c->r[31]; // 804CCA18
  c->r[4]=0u+0x00000008u; // 804CCA1C
  c->r[5]=0u+0x00000000u; // 804CCA20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCA24
  c->r[6]=0u+0x00000000u; // 804CCA28
  c->ctr=c->r[12]; // 804CCA2C
  if (true) { c->lr=0x804CCA34u; dispatch(c,c->ctr); } // 804CCA30
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CCA34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CCA38
  c->lr=c->r[0]; // 804CCA3C
  c->r[1]=c->r[1]+0x00000010u; // 804CCA40
  return; // 804CCA44
}

// SetGlbSettings__Q34nw4r3g3d7ScnRootFv
void f_804CCA48(Ctx* __restrict c) {
  trace_call(0x804CCA48u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCA48
  c->r[0]=c->lr; // 804CCA4C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 804CCA50
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 804CCA54
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 804CCA58
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 804CCA5C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 804CCA60
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 804CCA64
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 804CCA68
  c->r[11]=c->r[1]+0x00000090u; // 804CCA6C
  c->lr=0x804CCA74u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CCA70
  c->r[28]=c->r[3]|c->r[3]; // 804CCA74
  c->r[3]=c->r[1]+0x00000010u; // 804CCA78
  c->r[0]=R8(c->r[28]+0x000000F4u); // 804CCA7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 804CCA80
  c->r[4]=c->r[28]+c->r[0]; // 804CCA84
  c->r[4]=c->r[4]+0x000000F8u; // 804CCA88
  c->lr=0x804CCA90u; f_804C7918(c); // 804CCA8C
  c->r[0]=R32(c->r[3]+0x00000000u); // 804CCA90
  c->r[3]=c->r[1]+0x00000028u; // 804CCA94
  W32(c->r[1]+0x00000028u,c->r[0]); // 804CCA98
  c->lr=0x804CCAA0u; f_804C8264(c); // 804CCA9C
  c->r[3]=c->r[1]+0x00000028u; // 804CCAA0
  c->lr=0x804CCAA8u; f_804C82E8(c); // 804CCAA4
  c->r[3]=c->r[1]+0x00000028u; // 804CCAA8
  c->lr=0x804CCAB0u; f_804C83B0(c); // 804CCAAC
  c->r[3]=c->r[1]+0x00000028u; // 804CCAB0
  c->lr=0x804CCAB8u; f_804C83D4(c); // 804CCAB4
  c->r[27]=c->r[28]+0x000000F8u; // 804CCAB8
  c->r[26]=0u+0x00000000u; // 804CCABC
L_804CCAC0:;
  c->r[4]=c->r[27]|c->r[27]; // 804CCAC0
  c->r[3]=c->r[1]+0x00000018u; // 804CCAC4
  c->lr=0x804CCACCu; f_804C7918(c); // 804CCAC8
  c->r[0]=R8(c->r[28]+0x000000F4u); // 804CCACC
  c->r[4]=c->r[26]|c->r[26]; // 804CCAD0
  c->r[0]=c->r[0]-c->r[26]; // 804CCAD4
  c->r[0]=cntlz(c->r[0]); // 804CCAD8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CCADC
  c->lr=0x804CCAE4u; f_804C1498(c); // 804CCAE0
  c->r[26]=c->r[26]+0x00000001u; // 804CCAE4
  c->r[27]=c->r[27]+0x0000010Cu; // 804CCAE8
  cmps(c,0,(int32_t)c->r[26],32); // 804CCAEC
  if (crb(c,0)) { IRQCHK(c); goto L_804CCAC0; } // 804CCAF0
  c->r[5]=R32(c->r[1]+0x00000028u); // 804CCAF4
  c->r[0]=0u+0x00000008u; // 804CCAF8
  {uint32_t ea=c->r[2]+0x00001708u; c->f[31]=c->ps1[31]=RF32(ea);} // 804CCAFC
  c->r[27]=c->r[28]+0x00002278u; // 804CCB00
  c->r[3]=R32(c->r[5]+0x000000A8u); // 804CCB04
  c->r[31]=0u+0x00000000u; // 804CCB08
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 804CCB0C
  c->r[30]=0u+0x00000000u; // 804CCB10
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 804CCB14
  c->r[3]=addc(c,~c->r[3],0x00000001u,1); // 804CCB18
  c->r[3]=c->r[4]|c->r[3]; // 804CCB1C
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[29]=c->ps1[29]=RF32(ea);} // 804CCB20
  c->r[3]=sraw(c,c->r[3],31); // 804CCB24
  c->r[29]=0u+0x00000000u; // 804CCB28
  c->r[25]=c->r[0]&~c->r[3]; // 804CCB2C
  c->r[26]=0u+0x00000000u; // 804CCB30
L_804CCB34:;
  c->r[4]=c->r[27]|c->r[27]; // 804CCB34
  c->r[3]=c->r[1]+0x00000024u; // 804CCB38
  c->lr=0x804CCB40u; f_804D317C(c); // 804CCB3C
  c->r[4]=R32(c->r[1]+0x00000024u); // 804CCB40
  cmps(c,0,(int32_t)c->r[4],0); // 804CCB44
  if (crb(c,2)) { goto L_804CCB58; } // 804CCB48
  c->r[3]=R32(c->r[1]+0x00000024u); // 804CCB4C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 804CCB50
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[29]);} // 804CCB54
L_804CCB58:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 804CCB58
  c->r[0]=R32(c->r[3]+0x00000000u); // 804CCB5C
  cmps(c,0,(int32_t)c->r[0],0); // 804CCB60
  if (crb(c,2)) { goto L_804CCB74; } // 804CCB64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 804CCB68
  c->r[0]=c->r[25]|c->r[0]; // 804CCB6C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804CCB70
L_804CCB74:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 804CCB74
  c->r[3]=0u+0x00000000u; // 804CCB78
  cmps(c,0,(int32_t)c->r[4],0); // 804CCB7C
  if (crb(c,2)) { goto L_804CCB94; } // 804CCB80
  c->r[0]=R8(c->r[4]+0x00000018u); // 804CCB84
  cmpu(c,0,c->r[0],0x00000001u); // 804CCB88
  if (!crb(c,2)) { goto L_804CCB94; } // 804CCB8C
  c->r[3]=0u+0x00000001u; // 804CCB90
L_804CCB94:;
  cmps(c,0,(int32_t)c->r[3],0); // 804CCB94
  if (crb(c,2)) { goto L_804CCC0C; } // 804CCB98
  cmps(c,0,(int32_t)c->r[29],0); // 804CCB9C
  if (!crb(c,2)) { goto L_804CCBF8; } // 804CCBA0
  c->r[3]=c->r[1]+0x00000028u; // 804CCBA4
  c->r[4]=c->r[1]+0x00000030u; // 804CCBA8
  c->lr=0x804CCBB0u; f_804C8038(c); // 804CCBAC
  c->r[3]=c->r[1]+0x00000028u; // 804CCBB0
  c->r[4]=c->r[1]+0x0000001Cu; // 804CCBB4
  c->r[6]=c->r[1]+0x00000020u; // 804CCBB8
  c->r[5]=0u+0x00000000u; // 804CCBBC
  c->r[7]=0u+0x00000000u; // 804CCBC0
  c->r[8]=0u+0x00000000u; // 804CCBC4
  c->r[9]=0u+0x00000000u; // 804CCBC8
  c->lr=0x804CCBD0u; f_804C7F68(c); // 804CCBCC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CCBD0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 804CCBD4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CCBD8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CCBDC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804CCBE0
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 804CCBE4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804CCBE8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,3);} // 804CCBEC
  c->r[29]=0u+0x00000001u; // 804CCBF0
  c->r[30]=R16(c->r[1]+0x00000008u); // 804CCBF4
L_804CCBF8:;
  c->r[4]=c->r[31]|c->r[31]; // 804CCBF8
  c->r[5]=c->r[30]|c->r[30]; // 804CCBFC
  c->r[3]=c->r[1]+0x00000024u; // 804CCC00
  c->r[6]=c->r[1]+0x00000030u; // 804CCC04
  c->lr=0x804CCC0Cu; f_804D32D0(c); // 804CCC08
L_804CCC0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CCC0C
  c->r[4]=c->r[26]|c->r[26]; // 804CCC10
  c->r[3]=c->r[1]+0x00000014u; // 804CCC14
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CCC18
  c->lr=0x804CCC20u; f_804C1184(c); // 804CCC1C
  c->r[26]=c->r[26]+0x00000001u; // 804CCC20
  c->r[27]=c->r[27]+0x00000030u; // 804CCC24
  cmps(c,0,(int32_t)c->r[26],32); // 804CCC28
  if (crb(c,0)) { IRQCHK(c); goto L_804CCB34; } // 804CCC2C
  c->r[3]=c->r[28]+0x00002878u; // 804CCC30
  c->lr=0x804CCC38u; f_804C12E8(c); // 804CCC34
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 804CCC38
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 804CCC3C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 804CCC40
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 804CCC44
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 804CCC48
  c->r[11]=c->r[1]+0x00000090u; // 804CCC4C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 804CCC50
  c->lr=0x804CCC58u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CCC54
  c->r[0]=R32(c->r[1]+0x000000C4u); // 804CCC58
  c->lr=c->r[0]; // 804CCC5C
  c->r[1]=c->r[1]+0x000000C0u; // 804CCC60
  return; // 804CCC64
}

// CalcAnmScn__Q34nw4r3g3d7ScnRootFv
void f_804CCC68(Ctx* __restrict c) {
  trace_call(0x804CCC68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCC68
  c->r[0]=c->lr; // 804CCC6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CCC70
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804CCC74
  W32(c->r[1]+0x00000028u,c->r[30]); // 804CCC78
  W32(c->r[1]+0x00000024u,c->r[29]); // 804CCC7C
  W32(c->r[1]+0x00000020u,c->r[28]); // 804CCC80
  c->r[28]=c->r[3]|c->r[3]; // 804CCC84
  c->r[0]=R32(c->r[3]+0x00002888u); // 804CCC88
  cmps(c,0,(int32_t)c->r[0],0); // 804CCC8C
  if (crb(c,2)) { goto L_804CCDD0; } // 804CCC90
  c->r[3]=c->r[0]|c->r[0]; // 804CCC94
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCC98
  c->r[12]=R32(c->r[12]+0x00000050u); // 804CCC9C
  c->ctr=c->r[12]; // 804CCCA0
  if (true) { c->lr=0x804CCCA8u; dispatch(c,c->ctr); } // 804CCCA4
  c->r[31]=c->r[3]|c->r[3]; // 804CCCA8
  c->r[3]=R32(c->r[28]+0x00002888u); // 804CCCAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCCB0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 804CCCB4
  c->ctr=c->r[12]; // 804CCCB8
  if (true) { c->lr=0x804CCCC0u; dispatch(c,c->ctr); } // 804CCCBC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804CCCC0
  c->r[3]=R32(c->r[28]+0x00002888u); // 804CCCC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCCC8
  c->r[12]=R32(c->r[12]+0x00000060u); // 804CCCCC
  c->ctr=c->r[12]; // 804CCCD0
  if (true) { c->lr=0x804CCCD8u; dispatch(c,c->ctr); } // 804CCCD4
  cmps(c,0,(int32_t)c->r[31],0); // 804CCCD8
  W32(c->r[1]+0x00000018u,c->r[3]); // 804CCCDC
  if (crb(c,2)) { goto L_804CCCF0; } // 804CCCE0
  c->r[3]=R32(c->r[28]+0x00002888u); // 804CCCE4
  c->r[4]=c->r[28]+0x00002878u; // 804CCCE8
  c->lr=0x804CCCF0u; f_804BC744(c); // 804CCCEC
L_804CCCF0:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 804CCCF0
  cmps(c,0,(int32_t)c->r[4],0); // 804CCCF4
  if (crb(c,2)) { goto L_804CCD60; } // 804CCCF8
  c->r[0]=R32(c->r[13]+0xFFFFA298u); // 804CCCFC
  c->r[3]=c->r[13]+0xFFFFA298u; // 804CCD00
  cmpu(c,0,c->r[4],c->r[0]); // 804CCD04
  if (!crb(c,0)) { goto L_804CCD10; } // 804CCD08
  c->r[3]=c->r[1]+0x0000001Cu; // 804CCD0C
L_804CCD10:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 804CCD10
  c->r[31]=c->r[28]+0x00002278u; // 804CCD14
  c->r[29]=0u+0x00000000u; // 804CCD18
  goto L_804CCD58; // 804CCD1C
L_804CCD20:;
  c->r[4]=c->r[31]|c->r[31]; // 804CCD20
  c->r[3]=c->r[1]+0x00000014u; // 804CCD24
  c->lr=0x804CCD2Cu; f_804D317C(c); // 804CCD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CCD2C
  c->r[5]=c->r[29]|c->r[29]; // 804CCD30
  c->r[4]=c->r[1]+0x0000000Cu; // 804CCD34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CCD38
  c->r[3]=R32(c->r[28]+0x00002888u); // 804CCD3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCD40
  c->r[12]=R32(c->r[12]+0x00000070u); // 804CCD44
  c->ctr=c->r[12]; // 804CCD48
  if (true) { c->lr=0x804CCD50u; dispatch(c,c->ctr); } // 804CCD4C
  c->r[31]=c->r[31]+0x00000030u; // 804CCD50
  c->r[29]=c->r[29]+0x00000001u; // 804CCD54
L_804CCD58:;
  cmpu(c,0,c->r[29],c->r[30]); // 804CCD58
  if (crb(c,0)) { IRQCHK(c); goto L_804CCD20; } // 804CCD5C
L_804CCD60:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 804CCD60
  cmps(c,0,(int32_t)c->r[4],0); // 804CCD64
  if (crb(c,2)) { goto L_804CCDD0; } // 804CCD68
  c->r[0]=R32(c->r[13]+0xFFFFA29Cu); // 804CCD6C
  c->r[3]=c->r[13]+0xFFFFA29Cu; // 804CCD70
  cmpu(c,0,c->r[4],c->r[0]); // 804CCD74
  if (!crb(c,0)) { goto L_804CCD80; } // 804CCD78
  c->r[3]=c->r[1]+0x00000018u; // 804CCD7C
L_804CCD80:;
  c->r[29]=R32(c->r[3]+0x00000000u); // 804CCD80
  c->r[31]=c->r[28]+0x000000F8u; // 804CCD84
  c->r[30]=0u+0x00000000u; // 804CCD88
  goto L_804CCDC8; // 804CCD8C
L_804CCD90:;
  c->r[4]=c->r[31]|c->r[31]; // 804CCD90
  c->r[3]=c->r[1]+0x00000010u; // 804CCD94
  c->lr=0x804CCD9Cu; f_804C7918(c); // 804CCD98
  c->r[0]=R32(c->r[1]+0x00000010u); // 804CCD9C
  c->r[5]=c->r[30]|c->r[30]; // 804CCDA0
  c->r[4]=c->r[1]+0x00000008u; // 804CCDA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804CCDA8
  c->r[3]=R32(c->r[28]+0x00002888u); // 804CCDAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCDB0
  c->r[12]=R32(c->r[12]+0x00000074u); // 804CCDB4
  c->ctr=c->r[12]; // 804CCDB8
  if (true) { c->lr=0x804CCDC0u; dispatch(c,c->ctr); } // 804CCDBC
  c->r[31]=c->r[31]+0x0000010Cu; // 804CCDC0
  c->r[30]=c->r[30]+0x00000001u; // 804CCDC4
L_804CCDC8:;
  cmpu(c,0,c->r[30],c->r[29]); // 804CCDC8
  if (crb(c,0)) { IRQCHK(c); goto L_804CCD90; } // 804CCDCC
L_804CCDD0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CCDD0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804CCDD4
  c->r[30]=R32(c->r[1]+0x00000028u); // 804CCDD8
  c->r[29]=R32(c->r[1]+0x00000024u); // 804CCDDC
  c->r[28]=R32(c->r[1]+0x00000020u); // 804CCDE0
  c->lr=c->r[0]; // 804CCDE4
  c->r[1]=c->r[1]+0x00000030u; // 804CCDE8
  return; // 804CCDEC
}

// CalcWorld__Q34nw4r3g3d7ScnRootFv
void f_804CCDF0(Ctx* __restrict c) {
  trace_call(0x804CCDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCDF0
  c->r[0]=c->lr; // 804CCDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CCDF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CCDFC
  c->r[31]=c->r[3]|c->r[3]; // 804CCE00
  c->lr=0x804CCE08u; f_804CCC68(c); // 804CCE04
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CCE08
  c->r[3]=c->r[31]|c->r[31]; // 804CCE0C
  c->r[4]=0u+0x00000001u; // 804CCE10
  c->r[5]=0u+0x00000000u; // 804CCE14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCE18
  c->r[6]=0u+0x00000000u; // 804CCE1C
  c->ctr=c->r[12]; // 804CCE20
  if (true) { c->lr=0x804CCE28u; dispatch(c,c->ctr); } // 804CCE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CCE28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CCE2C
  c->lr=c->r[0]; // 804CCE30
  c->r[1]=c->r[1]+0x00000010u; // 804CCE34
  return; // 804CCE38
}

// fn_804CCE3C
void f_804CCE3C(Ctx* __restrict c) {
  trace_call(0x804CCE3Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCE3C
  c->r[4]=0u+0x00000002u; // 804CCE40
  c->r[5]=0u+0x00000000u; // 804CCE44
  c->r[6]=0u+0x00000000u; // 804CCE48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCE4C
  c->ctr=c->r[12]; // 804CCE50
  if (true) { dispatch(c,c->ctr); return; } // 804CCE54
}

// fn_804CCE58
void f_804CCE58(Ctx* __restrict c) {
  trace_call(0x804CCE58u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCE58
  c->r[4]=0u+0x00000003u; // 804CCE5C
  c->r[5]=0u+0x00000000u; // 804CCE60
  c->r[6]=0u+0x00000000u; // 804CCE64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCE68
  c->ctr=c->r[12]; // 804CCE6C
  if (true) { dispatch(c,c->ctr); return; } // 804CCE70
}

// CalcView__Q34nw4r3g3d7ScnRootFv
void f_804CCE74(Ctx* __restrict c) {
  trace_call(0x804CCE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCE74
  c->r[0]=c->lr; // 804CCE78
  W32(c->r[1]+0x00000054u,c->r[0]); // 804CCE7C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804CCE80
  c->r[31]=c->r[3]|c->r[3]; // 804CCE84
  c->lr=0x804CCE8Cu; f_803A3C44(c); // 804CCE88
  c->r[0]=R8(c->r[31]+0x000000F4u); // 804CCE8C
  c->r[3]=c->r[1]+0x00000008u; // 804CCE90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 804CCE94
  c->r[4]=c->r[31]+c->r[0]; // 804CCE98
  c->r[4]=c->r[4]+0x000000F8u; // 804CCE9C
  c->lr=0x804CCEA4u; f_804C7918(c); // 804CCEA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 804CCEA4
  c->r[3]=c->r[1]+0x0000000Cu; // 804CCEA8
  c->r[4]=c->r[1]+0x00000010u; // 804CCEAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CCEB0
  c->lr=0x804CCEB8u; f_804C7FD8(c); // 804CCEB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CCEB8
  c->r[3]=c->r[31]|c->r[31]; // 804CCEBC
  c->r[6]=c->r[1]+0x00000010u; // 804CCEC0
  c->r[4]=0u+0x00000004u; // 804CCEC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCEC8
  c->r[5]=0u+0x00000000u; // 804CCECC
  c->ctr=c->r[12]; // 804CCED0
  if (true) { c->lr=0x804CCED8u; dispatch(c,c->ctr); } // 804CCED4
  c->r[0]=R32(c->r[1]+0x00000054u); // 804CCED8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804CCEDC
  c->lr=c->r[0]; // 804CCEE0
  c->r[1]=c->r[1]+0x00000050u; // 804CCEE4
  return; // 804CCEE8
}

// GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
void f_804CCEEC(Ctx* __restrict c) {
  trace_call(0x804CCEECu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCEEC
  c->r[0]=c->lr; // 804CCEF0
  W32(c->r[1]+0x00000144u,c->r[0]); // 804CCEF4
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 804CCEF8
  c->r[31]=c->r[3]|c->r[3]; // 804CCEFC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 804CCF00
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCF04
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CCF08
  c->ctr=c->r[12]; // 804CCF0C
  if (true) { c->lr=0x804CCF14u; dispatch(c,c->ctr); } // 804CCF10
  c->r[0]=R8(c->r[31]+0x000000F4u); // 804CCF14
  c->r[3]=c->r[1]+0x00000008u; // 804CCF18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 804CCF1C
  c->r[4]=c->r[31]+c->r[0]; // 804CCF20
  c->r[4]=c->r[4]+0x000000F8u; // 804CCF24
  c->lr=0x804CCF2Cu; f_804C7918(c); // 804CCF28
  c->r[0]=R32(c->r[3]+0x00000000u); // 804CCF2C
  c->r[3]=c->r[1]+0x0000000Cu; // 804CCF30
  c->r[4]=c->r[1]+0x00000010u; // 804CCF34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CCF38
  c->lr=0x804CCF40u; f_804C7FD8(c); // 804CCF3C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 804CCF40
  c->r[0]=R32(c->r[5]+0x00000070u); // 804CCF44
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804CCF48
  if (crb(c,2)) { goto L_804CCF70; } // 804CCF4C
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CCF50
  c->r[3]=c->r[1]+0x00000040u; // 804CCF54
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CCF58
  c->r[4]=c->r[1]+0x00000010u; // 804CCF5C
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CCF60
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CCF64
  c->lr=0x804CCF6Cu; f_804E1F74(c); // 804CCF68
  goto L_804CCF94; // 804CCF6C
L_804CCF70:;
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804CCF70
  c->r[3]=c->r[1]+0x00000040u; // 804CCF74
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804CCF78
  c->r[4]=c->r[1]+0x00000010u; // 804CCF7C
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804CCF80
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 804CCF84
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804CCF88
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804CCF8C
  c->lr=0x804CCF94u; f_804E2028(c); // 804CCF90
L_804CCF94:;
  c->r[0]=c->r[1]+0x00000040u; // 804CCF94
  c->r[3]=c->r[31]|c->r[31]; // 804CCF98
  W32(c->r[13]+0xFFFFE490u,c->r[0]); // 804CCF9C
  c->r[4]=0u+0x00000005u; // 804CCFA0
  c->r[5]=0u+0x00000000u; // 804CCFA4
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CCFA8
  c->r[6]=R32(c->r[31]+0x000000E8u); // 804CCFAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CCFB0
  c->ctr=c->r[12]; // 804CCFB4
  if (true) { c->lr=0x804CCFBCu; dispatch(c,c->ctr); } // 804CCFB8
  c->r[0]=0u+0x00000000u; // 804CCFBC
  W32(c->r[13]+0xFFFFE490u,c->r[0]); // 804CCFC0
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 804CCFC4
  c->r[0]=R32(c->r[1]+0x00000144u); // 804CCFC8
  c->lr=c->r[0]; // 804CCFCC
  c->r[1]=c->r[1]+0x00000140u; // 804CCFD0
  return; // 804CCFD4
}

// ZSort__Q34nw4r3g3d7ScnRootFv
void f_804CCFD8(Ctx* __restrict c) {
  trace_call(0x804CCFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CCFD8
  c->r[0]=c->lr; // 804CCFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CCFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CCFE4
  c->r[31]=c->r[3]|c->r[3]; // 804CCFE8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 804CCFEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CCFF0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CCFF4
  c->ctr=c->r[12]; // 804CCFF8
  if (true) { c->lr=0x804CD000u; dispatch(c,c->ctr); } // 804CCFFC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CD000
  c->r[4]=0u+0x00010000u; // 804CD004
  c->r[3]=c->r[31]|c->r[31]; // 804CD008
  c->r[6]=R32(c->r[31]+0x000000E8u); // 804CD00C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CD010
  c->r[4]=c->r[4]+0x00000004u; // 804CD014
  c->r[5]=0u+0x00000000u; // 804CD018
  c->ctr=c->r[12]; // 804CD01C
  if (true) { c->lr=0x804CD024u; dispatch(c,c->ctr); } // 804CD020
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CD024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CD028
  c->lr=c->r[0]; // 804CD02C
  c->r[1]=c->r[1]+0x00000010u; // 804CD030
  return; // 804CD034
}

// fn_804CD038
void f_804CD038(Ctx* __restrict c) {
  trace_call(0x804CD038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD038
  c->r[0]=c->lr; // 804CD03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CD040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CD044
  c->r[31]=c->r[3]|c->r[3]; // 804CD048
  c->lr=0x804CD050u; f_804CCA48(c); // 804CD04C
  c->r[0]=R32(c->r[31]+0x000000F0u); // 804CD050
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CD054
  if (crb(c,2)) { goto L_804CD078; } // 804CD058
  c->r[3]=R32(c->r[31]+0x000000E8u); // 804CD05C
  c->r[4]=c->r[31]+0x000000ECu; // 804CD060
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CD064
  c->r[12]=R32(c->r[12]+0x00000020u); // 804CD068
  c->ctr=c->r[12]; // 804CD06C
  if (true) { c->lr=0x804CD074u; dispatch(c,c->ctr); } // 804CD070
  goto L_804CD090; // 804CD074
L_804CD078:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 804CD078
  c->r[4]=0u+0x00000000u; // 804CD07C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CD080
  c->r[12]=R32(c->r[12]+0x00000020u); // 804CD084
  c->ctr=c->r[12]; // 804CD088
  if (true) { c->lr=0x804CD090u; dispatch(c,c->ctr); } // 804CD08C
L_804CD090:;
  c->r[3]=0u+0x00000004u; // 804CD090
  c->lr=0x804CD098u; f_804C1804(c); // 804CD094
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CD098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CD09C
  c->lr=c->r[0]; // 804CD0A0
  c->r[1]=c->r[1]+0x00000010u; // 804CD0A4
  return; // 804CD0A8
}

// fn_804CD0AC
void f_804CD0AC(Ctx* __restrict c) {
  trace_call(0x804CD0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD0AC
  c->r[0]=c->lr; // 804CD0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CD0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CD0B8
  c->r[31]=c->r[3]|c->r[3]; // 804CD0BC
  c->lr=0x804CD0C4u; f_804CCA48(c); // 804CD0C0
  c->r[0]=R32(c->r[31]+0x000000F0u); // 804CD0C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CD0C8
  if (crb(c,2)) { goto L_804CD0EC; } // 804CD0CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 804CD0D0
  c->r[4]=c->r[31]+0x000000ECu; // 804CD0D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CD0D8
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CD0DC
  c->ctr=c->r[12]; // 804CD0E0
  if (true) { c->lr=0x804CD0E8u; dispatch(c,c->ctr); } // 804CD0E4
  goto L_804CD104; // 804CD0E8
L_804CD0EC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 804CD0EC
  c->r[4]=0u+0x00000000u; // 804CD0F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CD0F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CD0F8
  c->ctr=c->r[12]; // 804CD0FC
  if (true) { c->lr=0x804CD104u; dispatch(c,c->ctr); } // 804CD100
L_804CD104:;
  c->r[3]=0u+0x00000004u; // 804CD104
  c->lr=0x804CD10Cu; f_804C1804(c); // 804CD108
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CD10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CD110
  c->lr=c->r[0]; // 804CD114
  c->r[1]=c->r[1]+0x00000010u; // 804CD118
  return; // 804CD11C
}

// fn_804CD120
void f_804CD120(Ctx* __restrict c) {
  trace_call(0x804CD120u);
  cmps(c,0,(int32_t)c->r[4],0); // 804CD120
  if (crb(c,2)) { goto L_804CD13C; } // 804CD124
  c->r[0]=R32(c->r[3]+0x000000F0u); // 804CD128
  W32(c->r[3]+0x000000ECu,c->r[5]); // 804CD12C
  c->r[0]=c->r[0]|0x00000001u; // 804CD130
  W32(c->r[3]+0x000000F0u,c->r[0]); // 804CD134
  return; // 804CD138
L_804CD13C:;
  c->r[0]=R32(c->r[3]+0x000000F0u); // 804CD13C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804CD140
  W32(c->r[3]+0x000000F0u,c->r[0]); // 804CD144
  return; // 804CD148
}

// __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData
void f_804CD14C(Ctx* __restrict c) {
  trace_call(0x804CD14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD14C
  c->r[0]=c->lr; // 804CD150
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CD154
  c->r[11]=c->r[1]+0x00000030u; // 804CD158
  c->lr=0x804CD160u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CD15C
  c->r[29]=R32(c->r[1]+0x00000038u); // 804CD160
  c->r[25]=c->r[5]|c->r[5]; // 804CD164
  c->r[5]=c->r[6]|c->r[6]; // 804CD168
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 804CD16C
  c->r[24]=c->r[3]|c->r[3]; // 804CD170
  c->r[6]=c->r[7]|c->r[7]; // 804CD174
  c->r[26]=c->r[8]|c->r[8]; // 804CD178
  c->r[27]=c->r[9]|c->r[9]; // 804CD17C
  c->r[28]=c->r[10]|c->r[10]; // 804CD180
  c->lr=0x804CD188u; f_804CC460(c); // 804CD184
  c->r[3]=0u+0x80720000u; // 804CD188
  c->r[31]=0u+0x00000000u; // 804CD18C
  c->r[3]=c->r[3]+0xFFFFA4B8u; // 804CD190
  c->r[0]=0u+0x00000002u; // 804CD194
  W32(c->r[24]+0x00000000u,c->r[3]); // 804CD198
  c->r[4]=c->r[28]|c->r[28]; // 804CD19C
  c->r[5]=c->r[29]|c->r[29]; // 804CD1A0
  c->r[6]=c->r[26]|c->r[26]; // 804CD1A4
  W32(c->r[24]+0x000000E8u,c->r[25]); // 804CD1A8
  c->r[7]=c->r[30]|c->r[30]; // 804CD1AC
  c->r[8]=c->r[27]|c->r[27]; // 804CD1B0
  c->r[3]=c->r[24]+0x00002878u; // 804CD1B4
  W32(c->r[24]+0x000000ECu,c->r[0]); // 804CD1B8
  W32(c->r[24]+0x000000F0u,c->r[31]); // 804CD1BC
  W8(c->r[24]+0x000000F4u,c->r[31]); // 804CD1C0
  c->lr=0x804CD1C8u; f_804D3908(c); // 804CD1C4
  W32(c->r[24]+0x00002888u,c->r[31]); // 804CD1C8
  c->r[30]=0u+0x00000000u; // 804CD1CC
  c->r[31]=0u+0x00000000u; // 804CD1D0
L_804CD1D4:;
  c->r[4]=c->r[24]+c->r[31]; // 804CD1D4
  c->r[3]=c->r[1]+0x0000000Cu; // 804CD1D8
  c->r[4]=c->r[4]+0x000000F8u; // 804CD1DC
  c->lr=0x804CD1E4u; f_804C7918(c); // 804CD1E0
  c->r[3]=c->r[1]+0x0000000Cu; // 804CD1E4
  c->lr=0x804CD1ECu; f_804C7920(c); // 804CD1E8
  c->r[30]=c->r[30]+0x00000001u; // 804CD1EC
  c->r[31]=c->r[31]+0x0000010Cu; // 804CD1F0
  cmpu(c,0,c->r[30],0x00000020u); // 804CD1F4
  if (crb(c,0)) { IRQCHK(c); goto L_804CD1D4; } // 804CD1F8
  c->r[30]=0u+0x00000000u; // 804CD1FC
  c->r[31]=0u+0x00000000u; // 804CD200
L_804CD204:;
  c->r[4]=c->r[24]+c->r[31]; // 804CD204
  c->r[3]=c->r[1]+0x00000008u; // 804CD208
  c->r[4]=c->r[4]+0x00002278u; // 804CD20C
  c->lr=0x804CD214u; f_804D317C(c); // 804CD210
  c->r[3]=c->r[1]+0x00000008u; // 804CD214
  c->lr=0x804CD21Cu; f_804D3184(c); // 804CD218
  c->r[30]=c->r[30]+0x00000001u; // 804CD21C
  c->r[31]=c->r[31]+0x00000030u; // 804CD220
  cmpu(c,0,c->r[30],0x00000020u); // 804CD224
  if (crb(c,0)) { IRQCHK(c); goto L_804CD204; } // 804CD228
  c->r[11]=c->r[1]+0x00000030u; // 804CD22C
  c->r[3]=c->r[24]|c->r[24]; // 804CD230
  c->lr=0x804CD238u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CD234
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CD238
  c->lr=c->r[0]; // 804CD23C
  c->r[1]=c->r[1]+0x00000030u; // 804CD240
  return; // 804CD244
}

// fn_804CD248
void f_804CD248(Ctx* __restrict c) {
  trace_call(0x804CD248u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD248
  c->r[0]=c->lr; // 804CD24C
  cmps(c,0,(int32_t)c->r[3],0); // 804CD250
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CD254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CD258
  c->r[31]=c->r[3]|c->r[3]; // 804CD25C
  if (crb(c,2)) { goto L_804CD2AC; } // 804CD260
  c->r[0]=R32(c->r[3]+0x00002888u); // 804CD264
  c->r[4]=0u+0x80720000u; // 804CD268
  c->r[4]=c->r[4]+0xFFFFA4B8u; // 804CD26C
  cmps(c,0,(int32_t)c->r[0],0); // 804CD270
  W32(c->r[3]+0x00000000u,c->r[4]); // 804CD274
  if (crb(c,2)) { goto L_804CD2A0; } // 804CD278
  c->r[3]=c->r[0]|c->r[0]; // 804CD27C
  c->r[4]=0u+0x00010000u; // 804CD280
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CD284
  c->r[6]=c->r[31]|c->r[31]; // 804CD288
  c->r[4]=c->r[4]+0x00000003u; // 804CD28C
  c->r[5]=0u+0x00000000u; // 804CD290
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CD294
  c->ctr=c->r[12]; // 804CD298
  if (true) { c->lr=0x804CD2A0u; dispatch(c,c->ctr); } // 804CD29C
L_804CD2A0:;
  c->r[3]=c->r[31]|c->r[31]; // 804CD2A0
  c->r[4]=0u+0x00000000u; // 804CD2A4
  c->lr=0x804CD2ACu; f_804CC4D0(c); // 804CD2A8
L_804CD2AC:;
  c->r[3]=c->r[31]|c->r[31]; // 804CD2AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CD2B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CD2B4
  c->lr=c->r[0]; // 804CD2B8
  c->r[1]=c->r[1]+0x00000010u; // 804CD2BC
  return; // 804CD2C0
}

// Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb
void f_804CD2C4(Ctx* __restrict c) {
  trace_call(0x804CD2C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD2C4
  c->r[0]=c->lr; // 804CD2C8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CD2CC
  c->r[11]=c->r[1]+0x00000040u; // 804CD2D0
  c->lr=0x804CD2D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CD2D4
  c->r[0]=R32(c->r[13]+0xFFFFE490u); // 804CD2D8
  c->r[27]=c->r[3]|c->r[3]; // 804CD2DC
  c->r[28]=c->r[4]|c->r[4]; // 804CD2E0
  c->r[29]=c->r[5]|c->r[5]; // 804CD2E4
  cmps(c,0,(int32_t)c->r[0],0); // 804CD2E8
  c->r[30]=c->r[6]|c->r[6]; // 804CD2EC
  c->r[31]=0u+0x00000000u; // 804CD2F0
  if (crb(c,2)) { goto L_804CD358; } // 804CD2F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 804CD2F8
  c->r[3]=c->r[28]|c->r[28]; // 804CD2FC
  c->r[5]=c->r[1]+0x00000008u; // 804CD300
  c->r[4]=0u+0x00000009u; // 804CD304
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CD308
  c->ctr=c->r[12]; // 804CD30C
  if (true) { c->lr=0x804CD314u; dispatch(c,c->ctr); } // 804CD310
  c->r[0]=R32(c->r[1]+0x00000008u); // 804CD314
  cmps(c,0,(int32_t)c->r[0],0); // 804CD318
  if (crb(c,2)) { goto L_804CD358; } // 804CD31C
  c->r[3]=c->r[28]|c->r[28]; // 804CD320
  c->r[5]=c->r[1]+0x00000010u; // 804CD324
  c->r[4]=0u+0x00000001u; // 804CD328
  c->lr=0x804CD330u; f_804CB488(c); // 804CD32C
  c->r[3]=R32(c->r[13]+0xFFFFE490u); // 804CD330
  c->r[4]=c->r[1]+0x00000010u; // 804CD334
  c->lr=0x804CD33Cu; f_804E3358(c); // 804CD338
  cmps(c,0,(int32_t)c->r[3],0); // 804CD33C
  if (!crb(c,2)) { goto L_804CD34C; } // 804CD340
  c->r[3]=0u+0x00000002u; // 804CD344
  goto L_804CD3CC; // 804CD348
L_804CD34C:;
  cmps(c,0,(int32_t)c->r[3],1); // 804CD34C
  if (!crb(c,2)) { goto L_804CD358; } // 804CD350
  c->r[31]=0u+0x00000001u; // 804CD354
L_804CD358:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CD358
  if (crb(c,2)) { goto L_804CD390; } // 804CD35C
  c->r[3]=R32(c->r[27]+0x00000010u); // 804CD360
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 804CD364
  cmpu(c,0,c->r[3],c->r[0]); // 804CD368
  if (!crb(c,0)) { goto L_804CD388; } // 804CD36C
  c->r[4]=R32(c->r[27]+0x00000004u); // 804CD370
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804CD374
  c->r[3]=c->r[3]+0x00000001u; // 804CD378
  W32(c->r[4]+c->r[0],c->r[28]); // 804CD37C
  W32(c->r[27]+0x00000010u,c->r[3]); // 804CD380
  goto L_804CD390; // 804CD384
L_804CD388:;
  c->r[3]=c->r[31]|c->r[31]; // 804CD388
  goto L_804CD3CC; // 804CD38C
L_804CD390:;
  cmps(c,0,(int32_t)c->r[30],0); // 804CD390
  if (crb(c,2)) { goto L_804CD3C8; } // 804CD394
  c->r[3]=R32(c->r[27]+0x00000014u); // 804CD398
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 804CD39C
  cmpu(c,0,c->r[3],c->r[0]); // 804CD3A0
  if (!crb(c,0)) { goto L_804CD3C0; } // 804CD3A4
  c->r[4]=R32(c->r[27]+0x00000008u); // 804CD3A8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804CD3AC
  c->r[3]=c->r[3]+0x00000001u; // 804CD3B0
  W32(c->r[4]+c->r[0],c->r[28]); // 804CD3B4
  W32(c->r[27]+0x00000014u,c->r[3]); // 804CD3B8
  goto L_804CD3C8; // 804CD3BC
L_804CD3C0:;
  c->r[3]=c->r[31]|c->r[31]; // 804CD3C0
  goto L_804CD3CC; // 804CD3C4
L_804CD3C8:;
  c->r[3]=c->r[31]|c->r[31]; // 804CD3C8
L_804CD3CC:;
  c->r[11]=c->r[1]+0x00000040u; // 804CD3CC
  c->lr=0x804CD3D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CD3D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CD3D4
  c->lr=c->r[0]; // 804CD3D8
  c->r[1]=c->r[1]+0x00000040u; // 804CD3DC
  return; // 804CD3E0
}

// fn_804CD3E4
void f_804CD3E4(Ctx* __restrict c) {
  trace_call(0x804CD3E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD3E4
  c->r[0]=c->lr; // 804CD3E8
  c->r[5]=0u+0x804D0000u; // 804CD3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CD3F0
  c->r[5]=c->r[5]+0xFFFFD444u; // 804CD3F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CD3F8
  c->r[31]=c->r[3]|c->r[3]; // 804CD3FC
  c->r[0]=R32(c->r[31]+0x00000010u); // 804CD400
  c->r[3]=R32(c->r[3]+0x00000004u); // 804CD404
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD408
  c->r[4]=c->r[3]+c->r[0]; // 804CD40C
  c->lr=0x804CD414u; f_804CD4C4(c); // 804CD410
  c->r[0]=R32(c->r[31]+0x00000014u); // 804CD414
  c->r[5]=0u+0x804D0000u; // 804CD418
  c->r[3]=R32(c->r[31]+0x00000008u); // 804CD41C
  c->r[5]=c->r[5]+0xFFFFD484u; // 804CD420
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD424
  c->r[4]=c->r[3]+c->r[0]; // 804CD428
  c->lr=0x804CD430u; f_804CD4C4(c); // 804CD42C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CD430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CD434
  c->lr=c->r[0]; // 804CD438
  c->r[1]=c->r[1]+0x00000010u; // 804CD43C
  return; // 804CD440
}

// LessZSortOpa__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_804CD444(Ctx* __restrict c) {
  trace_call(0x804CD444u);
  c->r[0]=R8(c->r[3]+0x000000D0u); // 804CD444
  c->r[5]=R8(c->r[4]+0x000000D0u); // 804CD448
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804CD44C
  if (!crb(c,2)) { goto L_804CD46C; } // 804CD450
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CD454
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CD458
  fcmp(c,0,c->f[1],c->f[0]); // 804CD45C
  c->r[3]=c->cr; // 804CD460
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 804CD464
  return; // 804CD468
L_804CD46C:;
  c->r[0]=c->r[5]^c->r[0]; // 804CD46C
  c->r[3]=sraw(c,c->r[0],1); // 804CD470
  c->r[0]=c->r[0]&c->r[5]; // 804CD474
  c->r[0]=c->r[3]-c->r[0]; // 804CD478
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CD47C
  return; // 804CD480
}

// LessZSortXlu__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_804CD484(Ctx* __restrict c) {
  trace_call(0x804CD484u);
  c->r[0]=R8(c->r[3]+0x000000D1u); // 804CD484
  c->r[5]=R8(c->r[4]+0x000000D1u); // 804CD488
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804CD48C
  if (!crb(c,2)) { goto L_804CD4AC; } // 804CD490
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 804CD494
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CD498
  fcmp(c,0,c->f[1],c->f[0]); // 804CD49C
  c->r[3]=c->cr; // 804CD4A0
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 804CD4A4
  return; // 804CD4A8
L_804CD4AC:;
  c->r[0]=c->r[5]^c->r[0]; // 804CD4AC
  c->r[3]=sraw(c,c->r[0],1); // 804CD4B0
  c->r[0]=c->r[0]&c->r[5]; // 804CD4B4
  c->r[0]=c->r[3]-c->r[0]; // 804CD4B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CD4BC
  return; // 804CD4C0
}

// sort<PPQ34nw4r3g3d6ScnObj,PFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_804CD4C4(Ctx* __restrict c) {
  trace_call(0x804CD4C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD4C4
  c->r[0]=c->lr; // 804CD4C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CD4CC
  c->r[11]=c->r[1]+0x00000030u; // 804CD4D0
  c->lr=0x804CD4D8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CD4D4
  c->r[6]=0u+0x66660000u; // 804CD4D8
  W32(c->r[1]+0x00000008u,c->r[5]); // 804CD4DC
  c->r[28]=c->r[3]|c->r[3]; // 804CD4E0
  c->r[29]=c->r[4]|c->r[4]; // 804CD4E4
  c->r[31]=c->r[6]+0x00006667u; // 804CD4E8
L_804CD4EC:;
  c->r[0]=c->r[29]-c->r[28]; // 804CD4EC
  c->r[0]=sraw(c,c->r[0],2); // 804CD4F0
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 804CD4F4
  cmps(c,0,(int32_t)c->r[7],1); // 804CD4F8
  if (!crb(c,1)) { goto L_804CD82C; } // 804CD4FC
  cmps(c,0,(int32_t)c->r[7],20); // 804CD500
  if (crb(c,1)) { goto L_804CD580; } // 804CD504
  cmpu(c,0,c->r[28],c->r[29]); // 804CD508
  if (crb(c,2)) { goto L_804CD82C; } // 804CD50C
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 804CD510
  goto L_804CD574; // 804CD514
L_804CD518:;
  cmpu(c,0,c->r[28],c->r[29]); // 804CD518
  c->r[31]=c->r[28]|c->r[28]; // 804CD51C
  if (crb(c,2)) { goto L_804CD558; } // 804CD520
  c->r[27]=c->r[28]+0x00000004u; // 804CD524
  goto L_804CD550; // 804CD528
L_804CD52C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD52C
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CD530
  c->r[4]=R32(c->r[31]+0x00000000u); // 804CD534
  c->ctr=c->r[12]; // 804CD538
  if (true) { c->lr=0x804CD540u; dispatch(c,c->ctr); } // 804CD53C
  cmps(c,0,(int32_t)c->r[3],0); // 804CD540
  if (crb(c,2)) { goto L_804CD54C; } // 804CD544
  c->r[31]=c->r[27]|c->r[27]; // 804CD548
L_804CD54C:;
  c->r[27]=c->r[27]+0x00000004u; // 804CD54C
L_804CD550:;
  cmpu(c,0,c->r[27],c->r[29]); // 804CD550
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD52C; } // 804CD554
L_804CD558:;
  cmpu(c,0,c->r[31],c->r[28]); // 804CD558
  if (crb(c,2)) { goto L_804CD570; } // 804CD55C
  c->r[3]=R32(c->r[31]+0x00000000u); // 804CD560
  c->r[0]=R32(c->r[28]+0x00000000u); // 804CD564
  W32(c->r[31]+0x00000000u,c->r[0]); // 804CD568
  W32(c->r[28]+0x00000000u,c->r[3]); // 804CD56C
L_804CD570:;
  c->r[28]=c->r[28]+0x00000004u; // 804CD570
L_804CD574:;
  cmpu(c,0,c->r[28],c->r[30]); // 804CD574
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD518; } // 804CD578
  goto L_804CD82C; // 804CD57C
L_804CD580:;
  c->r[4]=R32(c->r[13]+0xFFFFA2A0u); // 804CD580
  c->r[0]=sraw(c,c->r[7],2); // 804CD584
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804CD588
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 804CD58C
  c->r[6]=c->r[4]+0x00000001u; // 804CD590
  cmps(c,0,(int32_t)c->r[6],5); // 804CD594
  c->r[0]=sraw(c,c->r[0],1); // 804CD598
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CD59C
  c->r[0]=c->r[0]+c->r[3]; // 804CD5A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804CD5A4
  c->r[0]=c->r[4]-c->r[0]; // 804CD5A8
  c->r[0]=c->r[5]+c->r[0]; // 804CD5AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD5B0
  c->r[3]=c->r[28]+c->r[0]; // 804CD5B4
  if (crb(c,0)) { goto L_804CD5C0; } // 804CD5B8
  c->r[6]=0u+0xFFFFFFFCu; // 804CD5BC
L_804CD5C0:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 804CD5C0
  c->r[0]=c->r[6]+0x00000001u; // 804CD5C4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804CD5C8
  W32(c->r[13]+0xFFFFA2A0u,c->r[0]); // 804CD5CC
  cmps(c,0,(int32_t)c->r[0],5); // 804CD5D0
  c->r[0]=c->r[5]-c->r[7]; // 804CD5D4
  c->r[0]=sraw(c,c->r[0],2); // 804CD5D8
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804CD5DC
  c->r[0]=sraw(c,c->r[4],1); // 804CD5E0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804CD5E4
  c->r[0]=c->r[0]+c->r[4]; // 804CD5E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804CD5EC
  c->r[0]=c->r[6]-c->r[0]; // 804CD5F0
  c->r[0]=c->r[5]+c->r[0]; // 804CD5F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD5F8
  c->r[4]=c->r[28]+c->r[0]; // 804CD5FC
  if (crb(c,0)) { goto L_804CD60C; } // 804CD600
  c->r[6]=0u+0xFFFFFFFCu; // 804CD604
  W32(c->r[13]+0xFFFFA2A0u,c->r[6]); // 804CD608
L_804CD60C:;
  c->r[26]=c->r[29]+0xFFFFFFFCu; // 804CD60C
  c->r[6]=c->r[1]+0x00000008u; // 804CD610
  c->r[5]=c->r[26]|c->r[26]; // 804CD614
  c->lr=0x804CD61Cu; f_804CDBC4(c); // 804CD618
  c->r[30]=c->r[28]|c->r[28]; // 804CD61C
  c->r[27]=c->r[26]|c->r[26]; // 804CD620
  goto L_804CD62C; // 804CD624
L_804CD628:;
  c->r[30]=c->r[30]+0x00000004u; // 804CD628
L_804CD62C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD62C
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD630
  c->r[4]=R32(c->r[26]+0x00000000u); // 804CD634
  c->ctr=c->r[12]; // 804CD638
  if (true) { c->lr=0x804CD640u; dispatch(c,c->ctr); } // 804CD63C
  cmps(c,0,(int32_t)c->r[3],0); // 804CD640
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD628; } // 804CD644
L_804CD648:;
  c->r[27]=c->r[27]+0xFFFFFFFCu; // 804CD648
  cmpu(c,0,c->r[30],c->r[27]); // 804CD64C
  if (crb(c,2)) { goto L_804CD670; } // 804CD650
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD654
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CD658
  c->r[4]=R32(c->r[26]+0x00000000u); // 804CD65C
  c->ctr=c->r[12]; // 804CD660
  if (true) { c->lr=0x804CD668u; dispatch(c,c->ctr); } // 804CD664
  cmps(c,0,(int32_t)c->r[3],0); // 804CD668
  if (crb(c,2)) { IRQCHK(c); goto L_804CD648; } // 804CD66C
L_804CD670:;
  cmpu(c,0,c->r[30],c->r[27]); // 804CD670
  if (!crb(c,0)) { goto L_804CD6EC; } // 804CD674
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD678
  c->r[0]=R32(c->r[27]+0x00000000u); // 804CD67C
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CD680
  c->r[30]=c->r[30]+0x00000004u; // 804CD684
  W32(c->r[27]+0x00000000u,c->r[3]); // 804CD688
  goto L_804CD694; // 804CD68C
L_804CD690:;
  c->r[30]=c->r[30]+0x00000004u; // 804CD690
L_804CD694:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD694
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD698
  c->r[4]=R32(c->r[26]+0x00000000u); // 804CD69C
  c->ctr=c->r[12]; // 804CD6A0
  if (true) { c->lr=0x804CD6A8u; dispatch(c,c->ctr); } // 804CD6A4
  cmps(c,0,(int32_t)c->r[3],0); // 804CD6A8
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD690; } // 804CD6AC
L_804CD6B0:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD6B0
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[27]=ea;} // 804CD6B4
  c->r[4]=R32(c->r[26]+0x00000000u); // 804CD6B8
  c->ctr=c->r[12]; // 804CD6BC
  if (true) { c->lr=0x804CD6C4u; dispatch(c,c->ctr); } // 804CD6C0
  cmps(c,0,(int32_t)c->r[3],0); // 804CD6C4
  if (crb(c,2)) { IRQCHK(c); goto L_804CD6B0; } // 804CD6C8
  cmpu(c,0,c->r[30],c->r[27]); // 804CD6CC
  if (!crb(c,0)) { goto L_804CD6EC; } // 804CD6D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD6D4
  c->r[0]=R32(c->r[27]+0x00000000u); // 804CD6D8
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CD6DC
  c->r[30]=c->r[30]+0x00000004u; // 804CD6E0
  W32(c->r[27]+0x00000000u,c->r[3]); // 804CD6E4
  IRQCHK(c); goto L_804CD694; // 804CD6E8
L_804CD6EC:;
  cmpu(c,0,c->r[30],c->r[28]); // 804CD6EC
  if (!crb(c,2)) { goto L_804CD7DC; } // 804CD6F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD6F4
  c->r[0]=R32(c->r[26]+0x00000000u); // 804CD6F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CD6FC
  W32(c->r[26]+0x00000000u,c->r[3]); // 804CD700
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD704
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CD708
  c->r[4]=R32(c->r[29]+0xFFFFFFFCu); // 804CD70C
  c->ctr=c->r[12]; // 804CD710
  c->r[30]=c->r[30]+0x00000004u; // 804CD714
  c->r[27]=c->r[29]+0xFFFFFFFCu; // 804CD718
  if (true) { c->lr=0x804CD720u; dispatch(c,c->ctr); } // 804CD71C
  cmps(c,0,(int32_t)c->r[3],0); // 804CD720
  if (!crb(c,2)) { goto L_804CD76C; } // 804CD724
  goto L_804CD730; // 804CD728
L_804CD72C:;
  c->r[30]=c->r[30]+0x00000004u; // 804CD72C
L_804CD730:;
  cmpu(c,0,c->r[30],c->r[29]); // 804CD730
  if (crb(c,2)) { goto L_804CD754; } // 804CD734
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD738
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CD73C
  c->r[4]=R32(c->r[30]+0x00000000u); // 804CD740
  c->ctr=c->r[12]; // 804CD744
  if (true) { c->lr=0x804CD74Cu; dispatch(c,c->ctr); } // 804CD748
  cmps(c,0,(int32_t)c->r[3],0); // 804CD74C
  if (crb(c,2)) { IRQCHK(c); goto L_804CD72C; } // 804CD750
L_804CD754:;
  cmpu(c,0,c->r[30],c->r[27]); // 804CD754
  if (!crb(c,0)) { goto L_804CD76C; } // 804CD758
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD75C
  c->r[0]=R32(c->r[27]+0x00000000u); // 804CD760
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CD764
  W32(c->r[27]+0x00000000u,c->r[3]); // 804CD768
L_804CD76C:;
  cmpu(c,0,c->r[30],c->r[27]); // 804CD76C
  if (!crb(c,0)) { goto L_804CD7D4; } // 804CD770
  goto L_804CD77C; // 804CD774
L_804CD778:;
  c->r[30]=c->r[30]+0x00000004u; // 804CD778
L_804CD77C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD77C
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CD780
  c->r[4]=R32(c->r[30]+0x00000000u); // 804CD784
  c->ctr=c->r[12]; // 804CD788
  if (true) { c->lr=0x804CD790u; dispatch(c,c->ctr); } // 804CD78C
  cmps(c,0,(int32_t)c->r[3],0); // 804CD790
  if (crb(c,2)) { IRQCHK(c); goto L_804CD778; } // 804CD794
L_804CD798:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 804CD798
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CD79C
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[27]=ea;} // 804CD7A0
  c->ctr=c->r[12]; // 804CD7A4
  if (true) { c->lr=0x804CD7ACu; dispatch(c,c->ctr); } // 804CD7A8
  cmps(c,0,(int32_t)c->r[3],0); // 804CD7AC
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD798; } // 804CD7B0
  cmpu(c,0,c->r[30],c->r[27]); // 804CD7B4
  if (!crb(c,0)) { goto L_804CD7D4; } // 804CD7B8
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD7BC
  c->r[0]=R32(c->r[27]+0x00000000u); // 804CD7C0
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CD7C4
  c->r[30]=c->r[30]+0x00000004u; // 804CD7C8
  W32(c->r[27]+0x00000000u,c->r[3]); // 804CD7CC
  IRQCHK(c); goto L_804CD77C; // 804CD7D0
L_804CD7D4:;
  c->r[28]=c->r[30]|c->r[30]; // 804CD7D4
  IRQCHK(c); goto L_804CD4EC; // 804CD7D8
L_804CD7DC:;
  c->r[3]=c->r[30]-c->r[28]; // 804CD7DC
  c->r[0]=c->r[29]-c->r[30]; // 804CD7E0
  c->r[3]=sraw(c,c->r[3],2); // 804CD7E4
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 804CD7E8
  c->r[0]=sraw(c,c->r[0],2); // 804CD7EC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 804CD7F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804CD7F4
  if (!crb(c,0)) { goto L_804CD814; } // 804CD7F8
  c->r[3]=c->r[28]|c->r[28]; // 804CD7FC
  c->r[4]=c->r[30]|c->r[30]; // 804CD800
  c->r[5]=c->r[1]+0x00000008u; // 804CD804
  c->lr=0x804CD80Cu; f_804CD844(c); // 804CD808
  c->r[28]=c->r[30]|c->r[30]; // 804CD80C
  IRQCHK(c); goto L_804CD4EC; // 804CD810
L_804CD814:;
  c->r[3]=c->r[30]|c->r[30]; // 804CD814
  c->r[4]=c->r[29]|c->r[29]; // 804CD818
  c->r[5]=c->r[1]+0x00000008u; // 804CD81C
  c->lr=0x804CD824u; f_804CD844(c); // 804CD820
  c->r[29]=c->r[30]|c->r[30]; // 804CD824
  IRQCHK(c); goto L_804CD4EC; // 804CD828
L_804CD82C:;
  c->r[11]=c->r[1]+0x00000030u; // 804CD82C
  c->lr=0x804CD834u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CD830
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CD834
  c->lr=c->r[0]; // 804CD838
  c->r[1]=c->r[1]+0x00000030u; // 804CD83C
  return; // 804CD840
}

// sort<PPQ34nw4r3g3d6ScnObj,RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_804CD844(Ctx* __restrict c) {
  trace_call(0x804CD844u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CD844
  c->r[0]=c->lr; // 804CD848
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CD84C
  c->r[11]=c->r[1]+0x00000030u; // 804CD850
  c->lr=0x804CD858u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CD854
  c->r[6]=0u+0x66660000u; // 804CD858
  c->r[27]=c->r[3]|c->r[3]; // 804CD85C
  c->r[28]=c->r[4]|c->r[4]; // 804CD860
  c->r[29]=c->r[5]|c->r[5]; // 804CD864
  c->r[31]=c->r[6]+0x00006667u; // 804CD868
L_804CD86C:;
  c->r[0]=c->r[28]-c->r[27]; // 804CD86C
  c->r[0]=sraw(c,c->r[0],2); // 804CD870
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 804CD874
  cmps(c,0,(int32_t)c->r[7],1); // 804CD878
  if (!crb(c,1)) { goto L_804CDBAC; } // 804CD87C
  cmps(c,0,(int32_t)c->r[7],20); // 804CD880
  if (crb(c,1)) { goto L_804CD900; } // 804CD884
  cmpu(c,0,c->r[27],c->r[28]); // 804CD888
  if (crb(c,2)) { goto L_804CDBAC; } // 804CD88C
  c->r[30]=c->r[28]+0xFFFFFFFCu; // 804CD890
  goto L_804CD8F4; // 804CD894
L_804CD898:;
  cmpu(c,0,c->r[27],c->r[28]); // 804CD898
  c->r[31]=c->r[27]|c->r[27]; // 804CD89C
  if (crb(c,2)) { goto L_804CD8D8; } // 804CD8A0
  c->r[26]=c->r[27]+0x00000004u; // 804CD8A4
  goto L_804CD8D0; // 804CD8A8
L_804CD8AC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CD8AC
  c->r[3]=R32(c->r[26]+0x00000000u); // 804CD8B0
  c->r[4]=R32(c->r[31]+0x00000000u); // 804CD8B4
  c->ctr=c->r[12]; // 804CD8B8
  if (true) { c->lr=0x804CD8C0u; dispatch(c,c->ctr); } // 804CD8BC
  cmps(c,0,(int32_t)c->r[3],0); // 804CD8C0
  if (crb(c,2)) { goto L_804CD8CC; } // 804CD8C4
  c->r[31]=c->r[26]|c->r[26]; // 804CD8C8
L_804CD8CC:;
  c->r[26]=c->r[26]+0x00000004u; // 804CD8CC
L_804CD8D0:;
  cmpu(c,0,c->r[26],c->r[28]); // 804CD8D0
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD8AC; } // 804CD8D4
L_804CD8D8:;
  cmpu(c,0,c->r[31],c->r[27]); // 804CD8D8
  if (crb(c,2)) { goto L_804CD8F0; } // 804CD8DC
  c->r[3]=R32(c->r[31]+0x00000000u); // 804CD8E0
  c->r[0]=R32(c->r[27]+0x00000000u); // 804CD8E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804CD8E8
  W32(c->r[27]+0x00000000u,c->r[3]); // 804CD8EC
L_804CD8F0:;
  c->r[27]=c->r[27]+0x00000004u; // 804CD8F0
L_804CD8F4:;
  cmpu(c,0,c->r[27],c->r[30]); // 804CD8F4
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD898; } // 804CD8F8
  goto L_804CDBAC; // 804CD8FC
L_804CD900:;
  c->r[4]=R32(c->r[13]+0xFFFFA2A4u); // 804CD900
  c->r[0]=sraw(c,c->r[7],2); // 804CD904
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804CD908
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 804CD90C
  c->r[6]=c->r[4]+0x00000001u; // 804CD910
  cmps(c,0,(int32_t)c->r[6],5); // 804CD914
  c->r[0]=sraw(c,c->r[0],1); // 804CD918
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CD91C
  c->r[0]=c->r[0]+c->r[3]; // 804CD920
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804CD924
  c->r[0]=c->r[4]-c->r[0]; // 804CD928
  c->r[0]=c->r[5]+c->r[0]; // 804CD92C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD930
  c->r[3]=c->r[27]+c->r[0]; // 804CD934
  if (crb(c,0)) { goto L_804CD940; } // 804CD938
  c->r[6]=0u+0xFFFFFFFCu; // 804CD93C
L_804CD940:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 804CD940
  c->r[0]=c->r[6]+0x00000001u; // 804CD944
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804CD948
  W32(c->r[13]+0xFFFFA2A4u,c->r[0]); // 804CD94C
  cmps(c,0,(int32_t)c->r[0],5); // 804CD950
  c->r[0]=c->r[5]-c->r[7]; // 804CD954
  c->r[0]=sraw(c,c->r[0],2); // 804CD958
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 804CD95C
  c->r[0]=sraw(c,c->r[4],1); // 804CD960
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804CD964
  c->r[0]=c->r[0]+c->r[4]; // 804CD968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 804CD96C
  c->r[0]=c->r[6]-c->r[0]; // 804CD970
  c->r[0]=c->r[5]+c->r[0]; // 804CD974
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CD978
  c->r[4]=c->r[27]+c->r[0]; // 804CD97C
  if (crb(c,0)) { goto L_804CD98C; } // 804CD980
  c->r[6]=0u+0xFFFFFFFCu; // 804CD984
  W32(c->r[13]+0xFFFFA2A4u,c->r[6]); // 804CD988
L_804CD98C:;
  c->r[25]=c->r[28]+0xFFFFFFFCu; // 804CD98C
  c->r[6]=c->r[29]|c->r[29]; // 804CD990
  c->r[5]=c->r[25]|c->r[25]; // 804CD994
  c->lr=0x804CD99Cu; f_804CDBC4(c); // 804CD998
  c->r[30]=c->r[27]|c->r[27]; // 804CD99C
  c->r[26]=c->r[25]|c->r[25]; // 804CD9A0
  goto L_804CD9AC; // 804CD9A4
L_804CD9A8:;
  c->r[30]=c->r[30]+0x00000004u; // 804CD9A8
L_804CD9AC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CD9AC
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD9B0
  c->r[4]=R32(c->r[25]+0x00000000u); // 804CD9B4
  c->ctr=c->r[12]; // 804CD9B8
  if (true) { c->lr=0x804CD9C0u; dispatch(c,c->ctr); } // 804CD9BC
  cmps(c,0,(int32_t)c->r[3],0); // 804CD9C0
  if (!crb(c,2)) { IRQCHK(c); goto L_804CD9A8; } // 804CD9C4
L_804CD9C8:;
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 804CD9C8
  cmpu(c,0,c->r[30],c->r[26]); // 804CD9CC
  if (crb(c,2)) { goto L_804CD9F0; } // 804CD9D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CD9D4
  c->r[3]=R32(c->r[26]+0x00000000u); // 804CD9D8
  c->r[4]=R32(c->r[25]+0x00000000u); // 804CD9DC
  c->ctr=c->r[12]; // 804CD9E0
  if (true) { c->lr=0x804CD9E8u; dispatch(c,c->ctr); } // 804CD9E4
  cmps(c,0,(int32_t)c->r[3],0); // 804CD9E8
  if (crb(c,2)) { IRQCHK(c); goto L_804CD9C8; } // 804CD9EC
L_804CD9F0:;
  cmpu(c,0,c->r[30],c->r[26]); // 804CD9F0
  if (!crb(c,0)) { goto L_804CDA6C; } // 804CD9F4
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CD9F8
  c->r[0]=R32(c->r[26]+0x00000000u); // 804CD9FC
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CDA00
  c->r[30]=c->r[30]+0x00000004u; // 804CDA04
  W32(c->r[26]+0x00000000u,c->r[3]); // 804CDA08
  goto L_804CDA14; // 804CDA0C
L_804CDA10:;
  c->r[30]=c->r[30]+0x00000004u; // 804CDA10
L_804CDA14:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDA14
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CDA18
  c->r[4]=R32(c->r[25]+0x00000000u); // 804CDA1C
  c->ctr=c->r[12]; // 804CDA20
  if (true) { c->lr=0x804CDA28u; dispatch(c,c->ctr); } // 804CDA24
  cmps(c,0,(int32_t)c->r[3],0); // 804CDA28
  if (!crb(c,2)) { IRQCHK(c); goto L_804CDA10; } // 804CDA2C
L_804CDA30:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDA30
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[26]=ea;} // 804CDA34
  c->r[4]=R32(c->r[25]+0x00000000u); // 804CDA38
  c->ctr=c->r[12]; // 804CDA3C
  if (true) { c->lr=0x804CDA44u; dispatch(c,c->ctr); } // 804CDA40
  cmps(c,0,(int32_t)c->r[3],0); // 804CDA44
  if (crb(c,2)) { IRQCHK(c); goto L_804CDA30; } // 804CDA48
  cmpu(c,0,c->r[30],c->r[26]); // 804CDA4C
  if (!crb(c,0)) { goto L_804CDA6C; } // 804CDA50
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CDA54
  c->r[0]=R32(c->r[26]+0x00000000u); // 804CDA58
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CDA5C
  c->r[30]=c->r[30]+0x00000004u; // 804CDA60
  W32(c->r[26]+0x00000000u,c->r[3]); // 804CDA64
  IRQCHK(c); goto L_804CDA14; // 804CDA68
L_804CDA6C:;
  cmpu(c,0,c->r[30],c->r[27]); // 804CDA6C
  if (!crb(c,2)) { goto L_804CDB5C; } // 804CDA70
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CDA74
  c->r[0]=R32(c->r[25]+0x00000000u); // 804CDA78
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CDA7C
  W32(c->r[25]+0x00000000u,c->r[3]); // 804CDA80
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDA84
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDA88
  c->r[4]=R32(c->r[28]+0xFFFFFFFCu); // 804CDA8C
  c->ctr=c->r[12]; // 804CDA90
  c->r[30]=c->r[30]+0x00000004u; // 804CDA94
  c->r[26]=c->r[28]+0xFFFFFFFCu; // 804CDA98
  if (true) { c->lr=0x804CDAA0u; dispatch(c,c->ctr); } // 804CDA9C
  cmps(c,0,(int32_t)c->r[3],0); // 804CDAA0
  if (!crb(c,2)) { goto L_804CDAEC; } // 804CDAA4
  goto L_804CDAB0; // 804CDAA8
L_804CDAAC:;
  c->r[30]=c->r[30]+0x00000004u; // 804CDAAC
L_804CDAB0:;
  cmpu(c,0,c->r[30],c->r[28]); // 804CDAB0
  if (crb(c,2)) { goto L_804CDAD4; } // 804CDAB4
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDAB8
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDABC
  c->r[4]=R32(c->r[30]+0x00000000u); // 804CDAC0
  c->ctr=c->r[12]; // 804CDAC4
  if (true) { c->lr=0x804CDACCu; dispatch(c,c->ctr); } // 804CDAC8
  cmps(c,0,(int32_t)c->r[3],0); // 804CDACC
  if (crb(c,2)) { IRQCHK(c); goto L_804CDAAC; } // 804CDAD0
L_804CDAD4:;
  cmpu(c,0,c->r[30],c->r[26]); // 804CDAD4
  if (!crb(c,0)) { goto L_804CDAEC; } // 804CDAD8
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CDADC
  c->r[0]=R32(c->r[26]+0x00000000u); // 804CDAE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CDAE4
  W32(c->r[26]+0x00000000u,c->r[3]); // 804CDAE8
L_804CDAEC:;
  cmpu(c,0,c->r[30],c->r[26]); // 804CDAEC
  if (!crb(c,0)) { goto L_804CDB54; } // 804CDAF0
  goto L_804CDAFC; // 804CDAF4
L_804CDAF8:;
  c->r[30]=c->r[30]+0x00000004u; // 804CDAF8
L_804CDAFC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDAFC
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDB00
  c->r[4]=R32(c->r[30]+0x00000000u); // 804CDB04
  c->ctr=c->r[12]; // 804CDB08
  if (true) { c->lr=0x804CDB10u; dispatch(c,c->ctr); } // 804CDB0C
  cmps(c,0,(int32_t)c->r[3],0); // 804CDB10
  if (crb(c,2)) { IRQCHK(c); goto L_804CDAF8; } // 804CDB14
L_804CDB18:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CDB18
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDB1C
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[26]=ea;} // 804CDB20
  c->ctr=c->r[12]; // 804CDB24
  if (true) { c->lr=0x804CDB2Cu; dispatch(c,c->ctr); } // 804CDB28
  cmps(c,0,(int32_t)c->r[3],0); // 804CDB2C
  if (!crb(c,2)) { IRQCHK(c); goto L_804CDB18; } // 804CDB30
  cmpu(c,0,c->r[30],c->r[26]); // 804CDB34
  if (!crb(c,0)) { goto L_804CDB54; } // 804CDB38
  c->r[3]=R32(c->r[30]+0x00000000u); // 804CDB3C
  c->r[0]=R32(c->r[26]+0x00000000u); // 804CDB40
  W32(c->r[30]+0x00000000u,c->r[0]); // 804CDB44
  c->r[30]=c->r[30]+0x00000004u; // 804CDB48
  W32(c->r[26]+0x00000000u,c->r[3]); // 804CDB4C
  IRQCHK(c); goto L_804CDAFC; // 804CDB50
L_804CDB54:;
  c->r[27]=c->r[30]|c->r[30]; // 804CDB54
  IRQCHK(c); goto L_804CD86C; // 804CDB58
L_804CDB5C:;
  c->r[3]=c->r[30]-c->r[27]; // 804CDB5C
  c->r[0]=c->r[28]-c->r[30]; // 804CDB60
  c->r[3]=sraw(c,c->r[3],2); // 804CDB64
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 804CDB68
  c->r[0]=sraw(c,c->r[0],2); // 804CDB6C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 804CDB70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804CDB74
  if (!crb(c,0)) { goto L_804CDB94; } // 804CDB78
  c->r[3]=c->r[27]|c->r[27]; // 804CDB7C
  c->r[4]=c->r[30]|c->r[30]; // 804CDB80
  c->r[5]=c->r[29]|c->r[29]; // 804CDB84
  c->lr=0x804CDB8Cu; f_804CD844(c); // 804CDB88
  c->r[27]=c->r[30]|c->r[30]; // 804CDB8C
  IRQCHK(c); goto L_804CD86C; // 804CDB90
L_804CDB94:;
  c->r[3]=c->r[30]|c->r[30]; // 804CDB94
  c->r[4]=c->r[28]|c->r[28]; // 804CDB98
  c->r[5]=c->r[29]|c->r[29]; // 804CDB9C
  c->lr=0x804CDBA4u; f_804CD844(c); // 804CDBA0
  c->r[28]=c->r[30]|c->r[30]; // 804CDBA4
  IRQCHK(c); goto L_804CD86C; // 804CDBA8
L_804CDBAC:;
  c->r[11]=c->r[1]+0x00000030u; // 804CDBAC
  c->lr=0x804CDBB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CDBB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CDBB4
  c->lr=c->r[0]; // 804CDBB8
  c->r[1]=c->r[1]+0x00000030u; // 804CDBBC
  return; // 804CDBC0
}

// __sort132<RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b,PPQ34nw4r3g3d6ScnObj>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_804CDBC4(Ctx* __restrict c) {
  trace_call(0x804CDBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDBC4
  c->r[0]=c->lr; // 804CDBC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CDBCC
  c->r[11]=c->r[1]+0x00000020u; // 804CDBD0
  c->lr=0x804CDBD8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CDBD4
  c->r[12]=R32(c->r[6]+0x00000000u); // 804CDBD8
  c->r[27]=c->r[3]|c->r[3]; // 804CDBDC
  c->r[28]=c->r[4]|c->r[4]; // 804CDBE0
  c->r[29]=c->r[5]|c->r[5]; // 804CDBE4
  c->r[30]=c->r[6]|c->r[6]; // 804CDBE8
  c->r[3]=R32(c->r[5]+0x00000000u); // 804CDBEC
  c->r[4]=R32(c->r[27]+0x00000000u); // 804CDBF0
  c->ctr=c->r[12]; // 804CDBF4
  if (true) { c->lr=0x804CDBFCu; dispatch(c,c->ctr); } // 804CDBF8
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CDBFC
  c->r[0]=cntlz(c->r[3]); // 804CDC00
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CDC04
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CDC08
  c->r[4]=R32(c->r[29]+0x00000000u); // 804CDC0C
  c->ctr=c->r[12]; // 804CDC10
  if (true) { c->lr=0x804CDC18u; dispatch(c,c->ctr); } // 804CDC14
  cmps(c,0,(int32_t)c->r[31],0); // 804CDC18
  c->r[0]=cntlz(c->r[3]); // 804CDC1C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CDC20
  if (crb(c,2)) { goto L_804CDC30; } // 804CDC24
  cmps(c,0,(int32_t)c->r[0],0); // 804CDC28
  if (!crb(c,2)) { goto L_804CDCAC; } // 804CDC2C
L_804CDC30:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CDC30
  if (!crb(c,2)) { goto L_804CDC54; } // 804CDC34
  cmps(c,0,(int32_t)c->r[0],0); // 804CDC38
  if (!crb(c,2)) { goto L_804CDC54; } // 804CDC3C
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDC40
  c->r[0]=R32(c->r[28]+0x00000000u); // 804CDC44
  W32(c->r[27]+0x00000000u,c->r[0]); // 804CDC48
  W32(c->r[28]+0x00000000u,c->r[3]); // 804CDC4C
  goto L_804CDCAC; // 804CDC50
L_804CDC54:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CDC54
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CDC58
  c->r[4]=R32(c->r[27]+0x00000000u); // 804CDC5C
  c->ctr=c->r[12]; // 804CDC60
  if (true) { c->lr=0x804CDC68u; dispatch(c,c->ctr); } // 804CDC64
  cmps(c,0,(int32_t)c->r[3],0); // 804CDC68
  if (crb(c,2)) { goto L_804CDC80; } // 804CDC6C
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDC70
  c->r[0]=R32(c->r[28]+0x00000000u); // 804CDC74
  W32(c->r[27]+0x00000000u,c->r[0]); // 804CDC78
  W32(c->r[28]+0x00000000u,c->r[3]); // 804CDC7C
L_804CDC80:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CDC80
  if (crb(c,2)) { goto L_804CDC9C; } // 804CDC84
  c->r[3]=R32(c->r[28]+0x00000000u); // 804CDC88
  c->r[0]=R32(c->r[29]+0x00000000u); // 804CDC8C
  W32(c->r[28]+0x00000000u,c->r[0]); // 804CDC90
  W32(c->r[29]+0x00000000u,c->r[3]); // 804CDC94
  goto L_804CDCAC; // 804CDC98
L_804CDC9C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 804CDC9C
  c->r[0]=R32(c->r[29]+0x00000000u); // 804CDCA0
  W32(c->r[27]+0x00000000u,c->r[0]); // 804CDCA4
  W32(c->r[29]+0x00000000u,c->r[3]); // 804CDCA8
L_804CDCAC:;
  c->r[11]=c->r[1]+0x00000020u; // 804CDCAC
  c->lr=0x804CDCB4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CDCB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CDCB4
  c->lr=c->r[0]; // 804CDCB8
  c->r[1]=c->r[1]+0x00000020u; // 804CDCBC
  return; // 804CDCC0
}

// fn_804CDCC4
void f_804CDCC4(Ctx* __restrict c) {
  trace_call(0x804CDCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDCC4
  c->r[0]=c->lr; // 804CDCC8
  c->r[5]=0u+0x804D0000u; // 804CDCCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CDCD0
  c->r[5]=c->r[5]+0xFFFFDD24u; // 804CDCD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CDCD8
  c->r[31]=c->r[3]|c->r[3]; // 804CDCDC
  c->r[0]=R32(c->r[31]+0x00000010u); // 804CDCE0
  c->r[3]=R32(c->r[3]+0x00000004u); // 804CDCE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CDCE8
  c->r[4]=c->r[3]+c->r[0]; // 804CDCEC
  c->lr=0x804CDCF4u; f_804CD4C4(c); // 804CDCF0
  c->r[0]=R32(c->r[31]+0x00000014u); // 804CDCF4
  c->r[5]=0u+0x804D0000u; // 804CDCF8
  c->r[3]=R32(c->r[31]+0x00000008u); // 804CDCFC
  c->r[5]=c->r[5]+0xFFFFDDB4u; // 804CDD00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CDD04
  c->r[4]=c->r[3]+c->r[0]; // 804CDD08
  c->lr=0x804CDD10u; f_804CD4C4(c); // 804CDD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CDD10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CDD14
  c->lr=c->r[0]; // 804CDD18
  c->r[1]=c->r[1]+0x00000010u; // 804CDD1C
  return; // 804CDD20
}

// fn_804CDD24
void f_804CDD24(Ctx* __restrict c) {
  trace_call(0x804CDD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDD24
  c->r[0]=c->lr; // 804CDD28
  c->r[5]=R8(c->r[4]+0x000000D0u); // 804CDD2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CDD30
  c->r[0]=R8(c->r[3]+0x000000D0u); // 804CDD34
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804CDD38
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804CDD3C
  W32(c->r[1]+0x00000014u,c->r[31]); // 804CDD40
  c->r[31]=c->r[3]|c->r[3]; // 804CDD44
  if (!crb(c,2)) { goto L_804CDD88; } // 804CDD48
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CDD4C
  c->r[3]=c->r[4]|c->r[4]; // 804CDD50
  c->r[12]=R32(c->r[12]+0x00000028u); // 804CDD54
  c->ctr=c->r[12]; // 804CDD58
  if (true) { c->lr=0x804CDD60u; dispatch(c,c->ctr); } // 804CDD5C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CDD60
  c->f[31]=c->f[1]; // 804CDD64
  c->r[3]=c->r[31]|c->r[31]; // 804CDD68
  c->r[12]=R32(c->r[12]+0x00000028u); // 804CDD6C
  c->ctr=c->r[12]; // 804CDD70
  if (true) { c->lr=0x804CDD78u; dispatch(c,c->ctr); } // 804CDD74
  fcmp(c,0,c->f[1],c->f[31]); // 804CDD78
  c->r[3]=c->cr; // 804CDD7C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 804CDD80
  goto L_804CDD9C; // 804CDD84
L_804CDD88:;
  c->r[0]=c->r[5]^c->r[0]; // 804CDD88
  c->r[3]=sraw(c,c->r[0],1); // 804CDD8C
  c->r[0]=c->r[0]&c->r[5]; // 804CDD90
  c->r[0]=c->r[3]-c->r[0]; // 804CDD94
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CDD98
L_804CDD9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CDD9C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804CDDA0
  c->r[31]=R32(c->r[1]+0x00000014u); // 804CDDA4
  c->lr=c->r[0]; // 804CDDA8
  c->r[1]=c->r[1]+0x00000020u; // 804CDDAC
  return; // 804CDDB0
}

// fn_804CDDB4
void f_804CDDB4(Ctx* __restrict c) {
  trace_call(0x804CDDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDDB4
  c->r[0]=c->lr; // 804CDDB8
  c->r[5]=R8(c->r[4]+0x000000D1u); // 804CDDBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CDDC0
  c->r[0]=R8(c->r[3]+0x000000D1u); // 804CDDC4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 804CDDC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804CDDCC
  W32(c->r[1]+0x00000014u,c->r[31]); // 804CDDD0
  c->r[31]=c->r[3]|c->r[3]; // 804CDDD4
  if (!crb(c,2)) { goto L_804CDE18; } // 804CDDD8
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CDDDC
  c->r[3]=c->r[4]|c->r[4]; // 804CDDE0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804CDDE4
  c->ctr=c->r[12]; // 804CDDE8
  if (true) { c->lr=0x804CDDF0u; dispatch(c,c->ctr); } // 804CDDEC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CDDF0
  c->f[31]=c->f[1]; // 804CDDF4
  c->r[3]=c->r[31]|c->r[31]; // 804CDDF8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804CDDFC
  c->ctr=c->r[12]; // 804CDE00
  if (true) { c->lr=0x804CDE08u; dispatch(c,c->ctr); } // 804CDE04
  fcmp(c,0,c->f[1],c->f[31]); // 804CDE08
  c->r[3]=c->cr; // 804CDE0C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 804CDE10
  goto L_804CDE2C; // 804CDE14
L_804CDE18:;
  c->r[0]=c->r[5]^c->r[0]; // 804CDE18
  c->r[3]=sraw(c,c->r[0],1); // 804CDE1C
  c->r[0]=c->r[0]&c->r[5]; // 804CDE20
  c->r[0]=c->r[3]-c->r[0]; // 804CDE24
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804CDE28
L_804CDE2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CDE2C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 804CDE30
  c->r[31]=R32(c->r[1]+0x00000014u); // 804CDE34
  c->lr=c->r[0]; // 804CDE38
  c->r[1]=c->r[1]+0x00000020u; // 804CDE3C
  return; // 804CDE40
}

// Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b
void f_804CDE44(Ctx* __restrict c) {
  trace_call(0x804CDE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDE44
  c->r[0]=c->lr; // 804CDE48
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CDE4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CDE50
  c->r[31]=c->r[5]|c->r[5]; // 804CDE54
  c->r[5]=c->r[4]|c->r[4]; // 804CDE58
  W32(c->r[1]+0x00000008u,c->r[30]); // 804CDE5C
  c->r[30]=c->r[3]|c->r[3]; // 804CDE60
  c->r[0]=R32(c->r[30]+0x00000010u); // 804CDE64
  c->r[3]=R32(c->r[3]+0x00000004u); // 804CDE68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CDE6C
  c->r[4]=c->r[3]+c->r[0]; // 804CDE70
  c->lr=0x804CDE78u; f_804CD4C4(c); // 804CDE74
  c->r[0]=R32(c->r[30]+0x00000014u); // 804CDE78
  c->r[5]=c->r[31]|c->r[31]; // 804CDE7C
  c->r[3]=R32(c->r[30]+0x00000008u); // 804CDE80
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CDE84
  c->r[4]=c->r[3]+c->r[0]; // 804CDE88
  c->lr=0x804CDE90u; f_804CD4C4(c); // 804CDE8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CDE90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CDE94
  c->r[30]=R32(c->r[1]+0x00000008u); // 804CDE98
  c->lr=c->r[0]; // 804CDE9C
  c->r[1]=c->r[1]+0x00000010u; // 804CDEA0
  return; // 804CDEA4
}

// fn_804CDEA8
void f_804CDEA8(Ctx* __restrict c) {
  trace_call(0x804CDEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDEA8
  c->r[0]=c->lr; // 804CDEAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CDEB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CDEB4
  c->r[31]=0u+0x00000000u; // 804CDEB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CDEBC
  c->r[30]=0u+0x00000000u; // 804CDEC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804CDEC4
  c->r[29]=c->r[4]|c->r[4]; // 804CDEC8
  W32(c->r[1]+0x00000010u,c->r[28]); // 804CDECC
  c->r[28]=c->r[3]|c->r[3]; // 804CDED0
  goto L_804CDF04; // 804CDED4
L_804CDED8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 804CDED8
  c->r[6]=c->r[29]|c->r[29]; // 804CDEDC
  c->r[4]=0u+0x00000006u; // 804CDEE0
  c->r[5]=0u+0x00000000u; // 804CDEE4
  c->r[3]=R32(c->r[3]+c->r[31]); // 804CDEE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CDEEC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CDEF0
  c->ctr=c->r[12]; // 804CDEF4
  c->r[30]=c->r[30]+0x00000001u; // 804CDEF8
  c->r[31]=c->r[31]+0x00000004u; // 804CDEFC
  if (true) { c->lr=0x804CDF04u; dispatch(c,c->ctr); } // 804CDF00
L_804CDF04:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804CDF04
  cmpu(c,0,c->r[30],c->r[0]); // 804CDF08
  if (!crb(c,2)) { IRQCHK(c); goto L_804CDED8; } // 804CDF0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CDF10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CDF14
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CDF18
  c->r[29]=R32(c->r[1]+0x00000014u); // 804CDF1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804CDF20
  c->lr=c->r[0]; // 804CDF24
  c->r[1]=c->r[1]+0x00000020u; // 804CDF28
  return; // 804CDF2C
}

// fn_804CDF30
void f_804CDF30(Ctx* __restrict c) {
  trace_call(0x804CDF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDF30
  c->r[0]=c->lr; // 804CDF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 804CDF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804CDF3C
  c->r[31]=0u+0x00000000u; // 804CDF40
  W32(c->r[1]+0x00000018u,c->r[30]); // 804CDF44
  c->r[30]=0u+0x00000000u; // 804CDF48
  W32(c->r[1]+0x00000014u,c->r[29]); // 804CDF4C
  c->r[29]=c->r[4]|c->r[4]; // 804CDF50
  W32(c->r[1]+0x00000010u,c->r[28]); // 804CDF54
  c->r[28]=c->r[3]|c->r[3]; // 804CDF58
  goto L_804CDF8C; // 804CDF5C
L_804CDF60:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 804CDF60
  c->r[6]=c->r[29]|c->r[29]; // 804CDF64
  c->r[4]=0u+0x00000007u; // 804CDF68
  c->r[5]=0u+0x00000000u; // 804CDF6C
  c->r[3]=R32(c->r[3]+c->r[31]); // 804CDF70
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CDF74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CDF78
  c->ctr=c->r[12]; // 804CDF7C
  c->r[30]=c->r[30]+0x00000001u; // 804CDF80
  c->r[31]=c->r[31]+0x00000004u; // 804CDF84
  if (true) { c->lr=0x804CDF8Cu; dispatch(c,c->ctr); } // 804CDF88
L_804CDF8C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804CDF8C
  cmpu(c,0,c->r[30],c->r[0]); // 804CDF90
  if (!crb(c,2)) { IRQCHK(c); goto L_804CDF60; } // 804CDF94
  c->r[0]=R32(c->r[1]+0x00000024u); // 804CDF98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804CDF9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804CDFA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804CDFA4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804CDFA8
  c->lr=c->r[0]; // 804CDFAC
  c->r[1]=c->r[1]+0x00000020u; // 804CDFB0
  return; // 804CDFB4
}

// fn_804CDFB8
void f_804CDFB8(Ctx* __restrict c) {
  trace_call(0x804CDFB8u);
  c->r[3]=0u+0x00000000u; // 804CDFB8
  return; // 804CDFBC
}

// fn_804CDFC0
void f_804CDFC0(Ctx* __restrict c) {
  trace_call(0x804CDFC0u);
  c->r[0]=0u+0x00000000u; // 804CDFC0
  W32(c->r[3]+0x00000014u,c->r[0]); // 804CDFC4
  W32(c->r[3]+0x00000010u,c->r[0]); // 804CDFC8
  return; // 804CDFCC
}

// fn_804CDFD0
void f_804CDFD0(Ctx* __restrict c) {
  trace_call(0x804CDFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CDFD0
  c->r[0]=c->lr; // 804CDFD4
  cmps(c,0,(int32_t)c->r[3],0); // 804CDFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CDFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CDFE0
  c->r[31]=c->r[3]|c->r[3]; // 804CDFE4
  if (crb(c,2)) { goto L_804CDFF8; } // 804CDFE8
  cmps(c,0,(int32_t)c->r[4],0); // 804CDFEC
  if (!crb(c,1)) { goto L_804CDFF8; } // 804CDFF0
  c->lr=0x804CDFF8u; f_803A9400(c); // 804CDFF4
L_804CDFF8:;
  c->r[3]=c->r[31]|c->r[31]; // 804CDFF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CDFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CE000
  c->lr=c->r[0]; // 804CE004
  c->r[1]=c->r[1]+0x00000010u; // 804CE008
  return; // 804CE00C
}

// fn_804CE010
void f_804CE010(Ctx* __restrict c) {
  trace_call(0x804CE010u);
  c->r[3]=0u+0x806B0000u; // 804CE010
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CE014
  c->r[3]=c->r[3]+0xFFFFBEC8u; // 804CE018
  cmpu(c,0,c->r[0],c->r[3]); // 804CE01C
  if (!crb(c,2)) { goto L_804CE02C; } // 804CE020
  c->r[3]=0u+0x00000001u; // 804CE024
  return; // 804CE028
L_804CE02C:;
  c->r[3]=0u+0x806B0000u; // 804CE02C
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CE030
  c->r[3]=c->r[3]+0xFFFFBEB8u; // 804CE034
  cmpu(c,0,c->r[0],c->r[3]); // 804CE038
  if (!crb(c,2)) { goto L_804CE048; } // 804CE03C
  c->r[3]=0u+0x00000001u; // 804CE040
  return; // 804CE044
L_804CE048:;
  c->r[3]=0u+0x806B0000u; // 804CE048
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804CE04C
  cmpu(c,0,c->r[0],c->r[3]); // 804CE050
  if (!crb(c,2)) { goto L_804CE060; } // 804CE054
  c->r[3]=0u+0x00000001u; // 804CE058
  return; // 804CE05C
L_804CE060:;
  c->r[3]=0u+0x806B0000u; // 804CE060
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804CE064
  c->r[0]=c->r[3]-c->r[0]; // 804CE068
  c->r[0]=cntlz(c->r[0]); // 804CE06C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CE070
  return; // 804CE074
}

// fn_804CE078
void f_804CE078(Ctx* __restrict c) {
  trace_call(0x804CE078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CE078
  c->r[0]=c->lr; // 804CE07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CE080
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE084
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE088
  c->ctr=c->r[12]; // 804CE08C
  if (true) { c->lr=0x804CE094u; dispatch(c,c->ctr); } // 804CE090
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CE094
  c->r[3]=c->r[3]+0x00000004u; // 804CE098
  c->lr=c->r[0]; // 804CE09C
  c->r[1]=c->r[1]+0x00000010u; // 804CE0A0
  return; // 804CE0A4
}

// fn_804CE0A8
void f_804CE0A8(Ctx* __restrict c) {
  trace_call(0x804CE0A8u);
  c->r[3]=0u+0x806B0000u; // 804CE0A8
  c->r[3]=c->r[3]+0xFFFFBEC8u; // 804CE0AC
  return; // 804CE0B0
}

// ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_804CE0B4(Ctx* __restrict c) {
  trace_call(0x804CE0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CE0B4
  c->r[0]=c->lr; // 804CE0B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CE0BC
  c->r[11]=c->r[1]+0x00000040u; // 804CE0C0
  c->lr=0x804CE0C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CE0C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 804CE0C8
  c->r[26]=c->r[5]|c->r[5]; // 804CE0CC
  c->r[30]=c->r[3]|c->r[3]; // 804CE0D0
  c->r[5]=R32(c->r[3]+0x000000D4u); // 804CE0D4
  cmps(c,0,(int32_t)c->r[5],0); // 804CE0D8
  if (crb(c,2)) { goto L_804CE11C; } // 804CE0DC
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CE0E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE0E4
  if (crb(c,2)) { goto L_804CE11C; } // 804CE0E8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CE0EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE0F0
  if (crb(c,2)) { goto L_804CE11C; } // 804CE0F4
  c->r[3]=c->r[5]|c->r[5]; // 804CE0F8
  c->r[6]=c->r[4]|c->r[4]; // 804CE0FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE100
  c->r[5]=c->r[30]|c->r[30]; // 804CE104
  c->r[7]=c->r[26]|c->r[26]; // 804CE108
  c->r[4]=0u+0x00000001u; // 804CE10C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CE110
  c->ctr=c->r[12]; // 804CE114
  if (true) { c->lr=0x804CE11Cu; dispatch(c,c->ctr); } // 804CE118
L_804CE11C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CE11C
  c->r[3]=c->r[30]|c->r[30]; // 804CE120
  c->r[4]=c->r[26]|c->r[26]; // 804CE124
  c->r[5]=c->r[1]+0x00000008u; // 804CE128
  c->r[12]=R32(c->r[12]+0x00000030u); // 804CE12C
  c->ctr=c->r[12]; // 804CE130
  if (true) { c->lr=0x804CE138u; dispatch(c,c->ctr); } // 804CE134
  c->r[3]=R32(c->r[30]+0x000000D4u); // 804CE138
  c->r[6]=R32(c->r[1]+0x00000008u); // 804CE13C
  cmps(c,0,(int32_t)c->r[3],0); // 804CE140
  if (crb(c,2)) { goto L_804CE17C; } // 804CE144
  c->r[0]=R16(c->r[30]+0x000000DAu); // 804CE148
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE14C
  if (crb(c,2)) { goto L_804CE17C; } // 804CE150
  c->r[0]=R8(c->r[30]+0x000000D8u); // 804CE154
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CE158
  if (crb(c,2)) { goto L_804CE17C; } // 804CE15C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE160
  c->r[5]=c->r[30]|c->r[30]; // 804CE164
  c->r[7]=c->r[26]|c->r[26]; // 804CE168
  c->r[4]=0u+0x00000002u; // 804CE16C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CE170
  c->ctr=c->r[12]; // 804CE174
  if (true) { c->lr=0x804CE17Cu; dispatch(c,c->ctr); } // 804CE178
L_804CE17C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 804CE17C
  c->r[31]=0u+0x00000000u; // 804CE180
  c->r[3]=c->r[3]+0x0000004Cu; // 804CE184
  c->r[0]=R32(c->r[3]+0x00000024u); // 804CE188
  c->r[28]=R32(c->r[3]+c->r[0]); // 804CE18C
  cmpu(c,0,c->r[28],0x00000008u); // 804CE190
  if (!crb(c,1)) { goto L_804CE1D0; } // 804CE194
  cmpu(c,0,c->r[28],0x00000156u); // 804CE198
  if (!crb(c,0)) { goto L_804CE1D0; } // 804CE19C
  c->lr=0x804CE1A4u; f_80509300(c); // 804CE1A0
  cmpu(c,0,c->r[3],0x00000001u); // 804CE1A4
  c->r[31]=c->r[3]|c->r[3]; // 804CE1A8
  if (!crb(c,2)) { goto L_804CE1D0; } // 804CE1AC
  c->r[0]=R32(c->r[30]+0x00000104u); // 804CE1B0
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 804CE1B4
  c->r[3]=R32(c->r[30]+0x000000ECu); // 804CE1B8
  c->r[0]=c->r[0]|0x00000001u; // 804CE1BC
  W32(c->r[30]+0x00000104u,c->r[0]); // 804CE1C0
  c->lr=0x804CE1C8u; f_803771E0(c); // 804CE1C4
  c->r[27]=0u+0xE0000000u; // 804CE1C8
  goto L_804CE1E0; // 804CE1CC
L_804CE1D0:;
  c->r[0]=R32(c->r[30]+0x00000104u); // 804CE1D0
  c->r[27]=R32(c->r[30]+0x000000ECu); // 804CE1D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804CE1D8
  W32(c->r[30]+0x00000104u,c->r[0]); // 804CE1DC
L_804CE1E0:;
  c->r[3]=c->r[30]|c->r[30]; // 804CE1E0
  c->lr=0x804CE1E8u; f_804CB6A8(c); // 804CE1E4
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CE1E8
  c->r[4]=0u+0x00020000u; // 804CE1EC
  c->r[29]=c->r[3]|c->r[3]; // 804CE1F0
  c->r[3]=c->r[30]|c->r[30]; // 804CE1F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CE1F8
  c->r[4]=c->r[4]+0x00000001u; // 804CE1FC
  c->r[5]=c->r[1]+0x00000018u; // 804CE200
  c->r[26]=0u+0xF0000000u; // 804CE204
  c->ctr=c->r[12]; // 804CE208
  if (true) { c->lr=0x804CE210u; dispatch(c,c->ctr); } // 804CE20C
  cmps(c,0,(int32_t)c->r[29],1); // 804CE210
  if (!crb(c,2)) { goto L_804CE220; } // 804CE214
  c->r[26]=0u+0x30000000u; // 804CE218
  goto L_804CE22C; // 804CE21C
L_804CE220:;
  cmps(c,0,(int32_t)c->r[29],2); // 804CE220
  if (!crb(c,2)) { goto L_804CE22C; } // 804CE224
  c->r[26]=0u+0x00000000u; // 804CE228
L_804CE22C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 804CE22C
  cmps(c,0,(int32_t)c->r[0],0); // 804CE230
  if (crb(c,2)) { goto L_804CE23C; } // 804CE234
  c->r[26]=c->r[26]|0x08000000u; // 804CE238
L_804CE23C:;
  c->r[5]=R32(c->r[30]+0x0000011Cu); // 804CE23C
  cmps(c,0,(int32_t)c->r[5],0); // 804CE240
  if (crb(c,2)) { goto L_804CE28C; } // 804CE244
  c->r[4]=R16(c->r[30]+0x00000122u); // 804CE248
  c->r[3]=c->r[27]|c->r[27]; // 804CE24C
  c->r[0]=R8(c->r[30]+0x00000120u); // 804CE250
  c->r[10]=c->r[26]|c->r[26]; // 804CE254
  c->r[6]=c->r[30]+0x0000003Cu; // 804CE258
  c->r[7]=c->r[1]+0x00000014u; // 804CE25C
  W32(c->r[1]+0x00000020u,c->r[5]); // 804CE260
  c->r[9]=c->r[1]+0x00000020u; // 804CE264
  W8(c->r[1]+0x00000024u,c->r[0]); // 804CE268
  W16(c->r[1]+0x00000026u,c->r[4]); // 804CE26C
  c->r[8]=R32(c->r[30]+0x00000124u); // 804CE270
  c->r[0]=R32(c->r[30]+0x000000E8u); // 804CE274
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CE278
  c->r[4]=R32(c->r[30]+0x000000F0u); // 804CE27C
  c->r[5]=R32(c->r[30]+0x00000108u); // 804CE280
  c->lr=0x804CE288u; f_804C5004(c); // 804CE284
  goto L_804CE2B8; // 804CE288
L_804CE28C:;
  c->r[8]=R32(c->r[30]+0x00000124u); // 804CE28C
  c->r[3]=c->r[27]|c->r[27]; // 804CE290
  c->r[0]=R32(c->r[30]+0x000000E8u); // 804CE294
  c->r[10]=c->r[26]|c->r[26]; // 804CE298
  c->r[6]=c->r[30]+0x0000003Cu; // 804CE29C
  c->r[7]=c->r[1]+0x00000010u; // 804CE2A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 804CE2A4
  c->r[9]=0u+0x00000000u; // 804CE2A8
  c->r[4]=R32(c->r[30]+0x000000F0u); // 804CE2AC
  c->r[5]=R32(c->r[30]+0x00000108u); // 804CE2B0
  c->lr=0x804CE2B8u; f_804C5004(c); // 804CE2B4
L_804CE2B8:;
  c->r[6]=R32(c->r[30]+0x0000010Cu); // 804CE2B8
  cmps(c,0,(int32_t)c->r[6],0); // 804CE2BC
  if (crb(c,2)) { goto L_804CE2DC; } // 804CE2C0
  c->r[0]=R32(c->r[30]+0x000000E8u); // 804CE2C4
  c->r[3]=c->r[27]|c->r[27]; // 804CE2C8
  c->r[5]=c->r[1]+0x0000000Cu; // 804CE2CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CE2D0
  c->r[4]=R32(c->r[30]+0x000000F0u); // 804CE2D4
  c->lr=0x804CE2DCu; f_804C55C8(c); // 804CE2D8
L_804CE2DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CE2DC
  if (crb(c,2)) { goto L_804CE2F8; } // 804CE2E0
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 804CE2E4
  c->r[3]=R32(c->r[30]+0x000000ECu); // 804CE2E8
  c->r[4]=0u+0xE0000000u; // 804CE2EC
  c->lr=0x804CE2F4u; f_805093B8(c); // 804CE2F0
  c->lr=0x804CE2F8u; f_80509370(c); // 804CE2F4
L_804CE2F8:;
  c->r[11]=c->r[1]+0x00000040u; // 804CE2F8
  c->lr=0x804CE300u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CE2FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CE300
  c->lr=c->r[0]; // 804CE304
  c->r[1]=c->r[1]+0x00000040u; // 804CE308
  return; // 804CE30C
}

// ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather
void f_804CE310(Ctx* __restrict c) {
  trace_call(0x804CE310u);
  c->r[4]=c->r[3]|c->r[3]; // 804CE310
  c->r[12]=R32(c->r[5]+0x00000000u); // 804CE314
  c->r[0]=R32(c->r[4]+0x000000CCu); // 804CE318
  c->r[3]=c->r[5]|c->r[5]; // 804CE31C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CE320
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 804CE324
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 804CE328
  c->r[5]=cntlz(c->r[5]); // 804CE32C
  c->r[0]=cntlz(c->r[0]); // 804CE330
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 804CE334
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CE338
  c->ctr=c->r[12]; // 804CE33C
  if (true) { dispatch(c,c->ctr); return; } // 804CE340
}

// ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_804CE344(Ctx* __restrict c) {
  trace_call(0x804CE344u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CE344
  c->r[0]=c->lr; // 804CE348
  W32(c->r[1]+0x00000034u,c->r[0]); // 804CE34C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804CE350
  c->r[31]=c->r[5]|c->r[5]; // 804CE354
  W32(c->r[1]+0x00000028u,c->r[30]); // 804CE358
  c->r[30]=c->r[4]|c->r[4]; // 804CE35C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804CE360
  c->r[29]=c->r[3]|c->r[3]; // 804CE364
  c->r[7]=R8(c->r[3]+0x00000101u); // 804CE368
  c->r[6]=R8(c->r[3]+0x00000100u); // 804CE36C
  c->r[4]=c->r[7]+0x00000001u; // 804CE370
  c->r[7]=R32(c->r[3]+0x000000D4u); // 804CE374
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 804CE378
  cmps(c,0,(int32_t)c->r[7],0); // 804CE37C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 804CE380
  c->r[0]=c->r[4]-c->r[0]; // 804CE384
  W8(c->r[3]+0x00000101u,c->r[0]); // 804CE388
  if (crb(c,2)) { goto L_804CE3CC; } // 804CE38C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CE390
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE394
  if (crb(c,2)) { goto L_804CE3CC; } // 804CE398
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CE39C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE3A0
  if (crb(c,2)) { goto L_804CE3CC; } // 804CE3A4
  c->r[12]=R32(c->r[7]+0x00000000u); // 804CE3A8
  c->r[3]=c->r[7]|c->r[7]; // 804CE3AC
  c->r[5]=c->r[29]|c->r[29]; // 804CE3B0
  c->r[6]=c->r[30]|c->r[30]; // 804CE3B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE3B8
  c->r[7]=c->r[31]|c->r[31]; // 804CE3BC
  c->r[4]=0u+0x00000001u; // 804CE3C0
  c->ctr=c->r[12]; // 804CE3C4
  if (true) { c->lr=0x804CE3CCu; dispatch(c,c->ctr); } // 804CE3C8
L_804CE3CC:;
  c->r[3]=c->r[29]|c->r[29]; // 804CE3CC
  c->r[4]=c->r[31]|c->r[31]; // 804CE3D0
  c->lr=0x804CE3D8u; f_804CAE90(c); // 804CE3D4
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CE3D8
  cmps(c,0,(int32_t)c->r[3],0); // 804CE3DC
  if (crb(c,2)) { goto L_804CE41C; } // 804CE3E0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CE3E4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE3E8
  if (crb(c,2)) { goto L_804CE41C; } // 804CE3EC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CE3F0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CE3F4
  if (crb(c,2)) { goto L_804CE41C; } // 804CE3F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE3FC
  c->r[5]=c->r[29]|c->r[29]; // 804CE400
  c->r[6]=c->r[30]|c->r[30]; // 804CE404
  c->r[7]=c->r[31]|c->r[31]; // 804CE408
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE40C
  c->r[4]=0u+0x00000002u; // 804CE410
  c->ctr=c->r[12]; // 804CE414
  if (true) { c->lr=0x804CE41Cu; dispatch(c,c->ctr); } // 804CE418
L_804CE41C:;
  c->lr=0x804CE420u; f_80509300(c); // 804CE41C
  cmps(c,0,(int32_t)c->r[3],0); // 804CE420
  if (crb(c,2)) { goto L_804CE590; } // 804CE424
  c->r[0]=R32(c->r[29]+0x00000104u); // 804CE428
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE42C
  if (crb(c,2)) { goto L_804CE4E8; } // 804CE430
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE434
  c->r[3]=R32(c->r[29]+0x000000ECu); // 804CE438
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE43C
  c->lr=0x804CE444u; f_8037723C(c); // 804CE440
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CE444
  cmps(c,0,(int32_t)c->r[5],0); // 804CE448
  if (crb(c,2)) { goto L_804CE470; } // 804CE44C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE450
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CE454
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CE458
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE45C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE460
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CE464
  c->r[4]=c->r[5]+c->r[0]; // 804CE468
  goto L_804CE474; // 804CE46C
L_804CE470:;
  c->r[4]=0u+0x00000000u; // 804CE470
L_804CE474:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CE474
  cmps(c,0,(int32_t)c->r[6],0); // 804CE478
  if (crb(c,2)) { goto L_804CE4A0; } // 804CE47C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE480
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CE484
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE488
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE48C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE490
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CE494
  c->r[10]=c->r[6]+c->r[0]; // 804CE498
  goto L_804CE4A4; // 804CE49C
L_804CE4A0:;
  c->r[10]=0u+0x00000000u; // 804CE4A0
L_804CE4A4:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE4A4
  c->r[8]=c->r[31]|c->r[31]; // 804CE4A8
  c->r[9]=c->r[1]+0x00000010u; // 804CE4AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804CE4B0
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE4B4
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CE4B8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE4BC
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CE4C0
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CE4C4
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CE4C8
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE4CC
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CE4D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE4D4
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CE4D8
  c->r[3]=c->r[12]+c->r[0]; // 804CE4DC
  c->lr=0x804CE4E4u; f_804C4940(c); // 804CE4E0
  goto L_804CE588; // 804CE4E4
L_804CE4E8:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CE4E8
  cmps(c,0,(int32_t)c->r[5],0); // 804CE4EC
  if (crb(c,2)) { goto L_804CE514; } // 804CE4F0
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE4F4
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CE4F8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CE4FC
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE500
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE504
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CE508
  c->r[4]=c->r[5]+c->r[0]; // 804CE50C
  goto L_804CE518; // 804CE510
L_804CE514:;
  c->r[4]=0u+0x00000000u; // 804CE514
L_804CE518:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CE518
  cmps(c,0,(int32_t)c->r[6],0); // 804CE51C
  if (crb(c,2)) { goto L_804CE544; } // 804CE520
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE524
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CE528
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE52C
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE530
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE534
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CE538
  c->r[10]=c->r[6]+c->r[0]; // 804CE53C
  goto L_804CE548; // 804CE540
L_804CE544:;
  c->r[10]=0u+0x00000000u; // 804CE544
L_804CE548:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE548
  c->r[8]=c->r[31]|c->r[31]; // 804CE54C
  c->r[9]=c->r[1]+0x0000000Cu; // 804CE550
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CE554
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE558
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CE55C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE560
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CE564
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CE568
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CE56C
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE570
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CE574
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE578
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CE57C
  c->r[3]=c->r[12]+c->r[0]; // 804CE580
  c->lr=0x804CE588u; f_804C4464(c); // 804CE584
L_804CE588:;
  c->lr=0x804CE58Cu; f_80509370(c); // 804CE588
  goto L_804CE630; // 804CE58C
L_804CE590:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CE590
  cmps(c,0,(int32_t)c->r[5],0); // 804CE594
  if (crb(c,2)) { goto L_804CE5BC; } // 804CE598
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE59C
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CE5A0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CE5A4
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE5A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE5AC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CE5B0
  c->r[4]=c->r[5]+c->r[0]; // 804CE5B4
  goto L_804CE5C0; // 804CE5B8
L_804CE5BC:;
  c->r[4]=0u+0x00000000u; // 804CE5BC
L_804CE5C0:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CE5C0
  cmps(c,0,(int32_t)c->r[6],0); // 804CE5C4
  if (crb(c,2)) { goto L_804CE5EC; } // 804CE5C8
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE5CC
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CE5D0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE5D4
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE5D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE5DC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CE5E0
  c->r[10]=c->r[6]+c->r[0]; // 804CE5E4
  goto L_804CE5F0; // 804CE5E8
L_804CE5EC:;
  c->r[10]=0u+0x00000000u; // 804CE5EC
L_804CE5F0:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE5F0
  c->r[8]=c->r[31]|c->r[31]; // 804CE5F4
  c->r[9]=c->r[1]+0x00000008u; // 804CE5F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804CE5FC
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE600
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CE604
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE608
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CE60C
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CE610
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CE614
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE618
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CE61C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE620
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CE624
  c->r[3]=c->r[12]+c->r[0]; // 804CE628
  c->lr=0x804CE630u; f_804C4128(c); // 804CE62C
L_804CE630:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CE630
  cmps(c,0,(int32_t)c->r[3],0); // 804CE634
  if (crb(c,2)) { goto L_804CE674; } // 804CE638
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CE63C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE640
  if (crb(c,2)) { goto L_804CE674; } // 804CE644
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CE648
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE64C
  if (crb(c,2)) { goto L_804CE674; } // 804CE650
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE654
  c->r[5]=c->r[29]|c->r[29]; // 804CE658
  c->r[6]=c->r[30]|c->r[30]; // 804CE65C
  c->r[7]=c->r[31]|c->r[31]; // 804CE660
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE664
  c->r[4]=0u+0x00000004u; // 804CE668
  c->ctr=c->r[12]; // 804CE66C
  if (true) { c->lr=0x804CE674u; dispatch(c,c->ctr); } // 804CE670
L_804CE674:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804CE674
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804CE678
  c->r[30]=R32(c->r[1]+0x00000028u); // 804CE67C
  c->r[29]=R32(c->r[1]+0x00000024u); // 804CE680
  c->lr=c->r[0]; // 804CE684
  c->r[1]=c->r[1]+0x00000030u; // 804CE688
  return; // 804CE68C
}

// G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv
void f_804CE690(Ctx* __restrict c) {
  trace_call(0x804CE690u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CE690
  c->r[0]=c->lr; // 804CE694
  cmpu(c,0,c->r[4],0x00000009u); // 804CE698
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CE69C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804CE6A0
  c->r[31]=c->r[6]|c->r[6]; // 804CE6A4
  W32(c->r[1]+0x00000038u,c->r[30]); // 804CE6A8
  c->r[30]=c->r[5]|c->r[5]; // 804CE6AC
  W32(c->r[1]+0x00000034u,c->r[29]); // 804CE6B0
  c->r[29]=c->r[3]|c->r[3]; // 804CE6B4
  if (!crb(c,0)) { goto L_804CE6DC; } // 804CE6B8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 804CE6BC
  c->r[6]=0u+0x00000001u; // 804CE6C0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CE6C4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 804CE6C8
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 804CE6CC
  if (crb(c,2)) { goto L_804CE6DC; } // 804CE6D0
  c->r[0]=0u+0x00000001u; // 804CE6D4
  goto L_804CE6E0; // 804CE6D8
L_804CE6DC:;
  c->r[0]=0u+0x00000000u; // 804CE6DC
L_804CE6E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804CE6E0
  if (!crb(c,2)) { goto L_804CEF04; } // 804CE6E4
  cmps(c,0,(int32_t)c->r[4],6); // 804CE6E8
  if (crb(c,2)) { goto L_804CEBC8; } // 804CE6EC
  if (!crb(c,0)) { goto L_804CE71C; } // 804CE6F0
  cmps(c,0,(int32_t)c->r[4],3); // 804CE6F4
  if (crb(c,2)) { goto L_804CEEF4; } // 804CE6F8
  if (!crb(c,0)) { goto L_804CE710; } // 804CE6FC
  cmps(c,0,(int32_t)c->r[4],1); // 804CE700
  if (crb(c,2)) { goto L_804CE778; } // 804CE704
  if (!crb(c,0)) { goto L_804CE7EC; } // 804CE708
  goto L_804CEEF4; // 804CE70C
L_804CE710:;
  cmps(c,0,(int32_t)c->r[4],5); // 804CE710
  if (!crb(c,0)) { goto L_804CE740; } // 804CE714
  goto L_804CE8B8; // 804CE718
L_804CE71C:;
  c->r[5]=0u+0x00010000u; // 804CE71C
  c->r[0]=c->r[5]+0x00000001u; // 804CE720
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CE724
  if (crb(c,2)) { goto L_804CEED8; } // 804CE728
  if (!crb(c,0)) { goto L_804CEEF4; } // 804CE72C
  cmps(c,0,(int32_t)c->r[4],8); // 804CE730
  if (crb(c,2)) { goto L_804CEE48; } // 804CE734
  if (!crb(c,0)) { goto L_804CEEF4; } // 804CE738
  goto L_804CED08; // 804CE73C
L_804CE740:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CE740
  c->r[3]=c->r[31]|c->r[31]; // 804CE744
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CE748
  c->r[4]=c->r[29]|c->r[29]; // 804CE74C
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 804CE750
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 804CE754
  c->r[5]=cntlz(c->r[5]); // 804CE758
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CE75C
  c->r[0]=cntlz(c->r[0]); // 804CE760
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 804CE764
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CE768
  c->ctr=c->r[12]; // 804CE76C
  if (true) { c->lr=0x804CE774u; dispatch(c,c->ctr); } // 804CE770
  goto L_804CEF04; // 804CE774
L_804CE778:;
  c->r[3]=c->r[29]|c->r[29]; // 804CE778
  c->r[4]=c->r[30]|c->r[30]; // 804CE77C
  c->r[5]=c->r[31]|c->r[31]; // 804CE780
  c->lr=0x804CE788u; f_804CE0B4(c); // 804CE784
  c->r[4]=R32(c->r[29]+0x00000128u); // 804CE788
  cmps(c,0,(int32_t)c->r[4],0); // 804CE78C
  if (crb(c,2)) { goto L_804CE7A4; } // 804CE790
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE794
  c->r[3]=c->r[1]+0x00000020u; // 804CE798
  W32(c->r[1]+0x00000020u,c->r[0]); // 804CE79C
  c->lr=0x804CE7A4u; f_804B520C(c); // 804CE7A0
L_804CE7A4:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CE7A4
  cmps(c,0,(int32_t)c->r[3],0); // 804CE7A8
  if (crb(c,2)) { goto L_804CEF04; } // 804CE7AC
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CE7B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE7B4
  if (crb(c,2)) { goto L_804CEF04; } // 804CE7B8
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CE7BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE7C0
  if (crb(c,2)) { goto L_804CEF04; } // 804CE7C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE7C8
  c->r[5]=c->r[29]|c->r[29]; // 804CE7CC
  c->r[6]=c->r[30]|c->r[30]; // 804CE7D0
  c->r[7]=c->r[31]|c->r[31]; // 804CE7D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CE7D8
  c->r[4]=0u+0x00000004u; // 804CE7DC
  c->ctr=c->r[12]; // 804CE7E0
  if (true) { c->lr=0x804CE7E8u; dispatch(c,c->ctr); } // 804CE7E4
  goto L_804CEF04; // 804CE7E8
L_804CE7EC:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CE7EC
  cmps(c,0,(int32_t)c->r[4],0); // 804CE7F0
  if (crb(c,2)) { goto L_804CE834; } // 804CE7F4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CE7F8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CE7FC
  if (crb(c,2)) { goto L_804CE834; } // 804CE800
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CE804
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE808
  if (crb(c,2)) { goto L_804CE834; } // 804CE80C
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CE810
  c->r[3]=c->r[4]|c->r[4]; // 804CE814
  c->r[5]=c->r[29]|c->r[29]; // 804CE818
  c->r[6]=c->r[30]|c->r[30]; // 804CE81C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CE820
  c->r[7]=c->r[31]|c->r[31]; // 804CE824
  c->r[4]=0u+0x00000001u; // 804CE828
  c->ctr=c->r[12]; // 804CE82C
  if (true) { c->lr=0x804CE834u; dispatch(c,c->ctr); } // 804CE830
L_804CE834:;
  c->r[4]=R32(c->r[29]+0x00000130u); // 804CE834
  cmps(c,0,(int32_t)c->r[4],0); // 804CE838
  if (!crb(c,2)) { goto L_804CE858; } // 804CE83C
  c->r[0]=R32(c->r[29]+0x00000134u); // 804CE840
  cmps(c,0,(int32_t)c->r[0],0); // 804CE844
  if (!crb(c,2)) { goto L_804CE858; } // 804CE848
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 804CE84C
  cmps(c,0,(int32_t)c->r[0],0); // 804CE850
  if (crb(c,2)) { goto L_804CE870; } // 804CE854
L_804CE858:;
  c->r[6]=R32(c->r[29]+0x0000012Cu); // 804CE858
  c->r[3]=c->r[1]+0x0000001Cu; // 804CE85C
  c->r[5]=R32(c->r[29]+0x00000134u); // 804CE860
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE864
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804CE868
  c->lr=0x804CE870u; f_804D2980(c); // 804CE86C
L_804CE870:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CE870
  cmps(c,0,(int32_t)c->r[3],0); // 804CE874
  if (crb(c,2)) { goto L_804CEF04; } // 804CE878
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CE87C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CE880
  if (crb(c,2)) { goto L_804CEF04; } // 804CE884
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CE888
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE88C
  if (crb(c,2)) { goto L_804CEF04; } // 804CE890
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE894
  c->r[5]=c->r[29]|c->r[29]; // 804CE898
  c->r[6]=c->r[30]|c->r[30]; // 804CE89C
  c->r[7]=c->r[31]|c->r[31]; // 804CE8A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804CE8A4
  c->r[4]=0u+0x00000004u; // 804CE8A8
  c->ctr=c->r[12]; // 804CE8AC
  if (true) { c->lr=0x804CE8B4u; dispatch(c,c->ctr); } // 804CE8B0
  goto L_804CEF04; // 804CE8B4
L_804CE8B8:;
  c->r[5]=R8(c->r[3]+0x00000101u); // 804CE8B8
  c->r[4]=R8(c->r[3]+0x00000100u); // 804CE8BC
  c->r[5]=c->r[5]+0x00000001u; // 804CE8C0
  c->r[6]=R32(c->r[3]+0x000000D4u); // 804CE8C4
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 804CE8C8
  cmps(c,0,(int32_t)c->r[6],0); // 804CE8CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 804CE8D0
  c->r[0]=c->r[5]-c->r[0]; // 804CE8D4
  W8(c->r[3]+0x00000101u,c->r[0]); // 804CE8D8
  if (crb(c,2)) { goto L_804CE91C; } // 804CE8DC
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CE8E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE8E4
  if (crb(c,2)) { goto L_804CE91C; } // 804CE8E8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CE8EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE8F0
  if (crb(c,2)) { goto L_804CE91C; } // 804CE8F4
  c->r[12]=R32(c->r[6]+0x00000000u); // 804CE8F8
  c->r[3]=c->r[6]|c->r[6]; // 804CE8FC
  c->r[5]=c->r[29]|c->r[29]; // 804CE900
  c->r[6]=c->r[30]|c->r[30]; // 804CE904
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE908
  c->r[7]=c->r[31]|c->r[31]; // 804CE90C
  c->r[4]=0u+0x00000001u; // 804CE910
  c->ctr=c->r[12]; // 804CE914
  if (true) { c->lr=0x804CE91Cu; dispatch(c,c->ctr); } // 804CE918
L_804CE91C:;
  c->r[3]=c->r[29]|c->r[29]; // 804CE91C
  c->r[4]=c->r[31]|c->r[31]; // 804CE920
  c->lr=0x804CE928u; f_804CAE90(c); // 804CE924
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CE928
  cmps(c,0,(int32_t)c->r[3],0); // 804CE92C
  if (crb(c,2)) { goto L_804CE96C; } // 804CE930
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CE934
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CE938
  if (crb(c,2)) { goto L_804CE96C; } // 804CE93C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CE940
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804CE944
  if (crb(c,2)) { goto L_804CE96C; } // 804CE948
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CE94C
  c->r[5]=c->r[29]|c->r[29]; // 804CE950
  c->r[6]=c->r[30]|c->r[30]; // 804CE954
  c->r[7]=c->r[31]|c->r[31]; // 804CE958
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CE95C
  c->r[4]=0u+0x00000002u; // 804CE960
  c->ctr=c->r[12]; // 804CE964
  if (true) { c->lr=0x804CE96Cu; dispatch(c,c->ctr); } // 804CE968
L_804CE96C:;
  c->lr=0x804CE970u; f_80509300(c); // 804CE96C
  cmps(c,0,(int32_t)c->r[3],0); // 804CE970
  if (crb(c,2)) { goto L_804CEAE0; } // 804CE974
  c->r[0]=R32(c->r[29]+0x00000104u); // 804CE978
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CE97C
  if (crb(c,2)) { goto L_804CEA38; } // 804CE980
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE984
  c->r[3]=R32(c->r[29]+0x000000ECu); // 804CE988
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE98C
  c->lr=0x804CE994u; f_8037723C(c); // 804CE990
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CE994
  cmps(c,0,(int32_t)c->r[5],0); // 804CE998
  if (crb(c,2)) { goto L_804CE9C0; } // 804CE99C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE9A0
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CE9A4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CE9A8
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE9AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE9B0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CE9B4
  c->r[4]=c->r[5]+c->r[0]; // 804CE9B8
  goto L_804CE9C4; // 804CE9BC
L_804CE9C0:;
  c->r[4]=0u+0x00000000u; // 804CE9C0
L_804CE9C4:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CE9C4
  cmps(c,0,(int32_t)c->r[6],0); // 804CE9C8
  if (crb(c,2)) { goto L_804CE9F0; } // 804CE9CC
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CE9D0
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CE9D4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CE9D8
  c->r[0]=c->r[3]+0x0000001Fu; // 804CE9DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CE9E0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CE9E4
  c->r[10]=c->r[6]+c->r[0]; // 804CE9E8
  goto L_804CE9F4; // 804CE9EC
L_804CE9F0:;
  c->r[10]=0u+0x00000000u; // 804CE9F0
L_804CE9F4:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CE9F4
  c->r[8]=c->r[31]|c->r[31]; // 804CE9F8
  c->r[9]=c->r[1]+0x00000010u; // 804CE9FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804CEA00
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEA04
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CEA08
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEA0C
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CEA10
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CEA14
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CEA18
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEA1C
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CEA20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEA24
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CEA28
  c->r[3]=c->r[12]+c->r[0]; // 804CEA2C
  c->lr=0x804CEA34u; f_804C4940(c); // 804CEA30
  goto L_804CEAD8; // 804CEA34
L_804CEA38:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CEA38
  cmps(c,0,(int32_t)c->r[5],0); // 804CEA3C
  if (crb(c,2)) { goto L_804CEA64; } // 804CEA40
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEA44
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CEA48
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CEA4C
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEA50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEA54
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CEA58
  c->r[4]=c->r[5]+c->r[0]; // 804CEA5C
  goto L_804CEA68; // 804CEA60
L_804CEA64:;
  c->r[4]=0u+0x00000000u; // 804CEA64
L_804CEA68:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CEA68
  cmps(c,0,(int32_t)c->r[6],0); // 804CEA6C
  if (crb(c,2)) { goto L_804CEA94; } // 804CEA70
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEA74
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CEA78
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEA7C
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEA80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEA84
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CEA88
  c->r[10]=c->r[6]+c->r[0]; // 804CEA8C
  goto L_804CEA98; // 804CEA90
L_804CEA94:;
  c->r[10]=0u+0x00000000u; // 804CEA94
L_804CEA98:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CEA98
  c->r[8]=c->r[31]|c->r[31]; // 804CEA9C
  c->r[9]=c->r[1]+0x00000014u; // 804CEAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CEAA4
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEAA8
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CEAAC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEAB0
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CEAB4
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CEAB8
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CEABC
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEAC0
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CEAC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEAC8
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CEACC
  c->r[3]=c->r[12]+c->r[0]; // 804CEAD0
  c->lr=0x804CEAD8u; f_804C4464(c); // 804CEAD4
L_804CEAD8:;
  c->lr=0x804CEADCu; f_80509370(c); // 804CEAD8
  goto L_804CEB80; // 804CEADC
L_804CEAE0:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CEAE0
  cmps(c,0,(int32_t)c->r[5],0); // 804CEAE4
  if (crb(c,2)) { goto L_804CEB0C; } // 804CEAE8
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEAEC
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CEAF0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CEAF4
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEAF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEAFC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CEB00
  c->r[4]=c->r[5]+c->r[0]; // 804CEB04
  goto L_804CEB10; // 804CEB08
L_804CEB0C:;
  c->r[4]=0u+0x00000000u; // 804CEB0C
L_804CEB10:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CEB10
  cmps(c,0,(int32_t)c->r[6],0); // 804CEB14
  if (crb(c,2)) { goto L_804CEB3C; } // 804CEB18
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEB1C
  c->r[5]=R8(c->r[29]+0x00000101u); // 804CEB20
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEB24
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEB28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEB2C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CEB30
  c->r[10]=c->r[6]+c->r[0]; // 804CEB34
  goto L_804CEB40; // 804CEB38
L_804CEB3C:;
  c->r[10]=0u+0x00000000u; // 804CEB3C
L_804CEB40:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CEB40
  c->r[8]=c->r[31]|c->r[31]; // 804CEB44
  c->r[9]=c->r[1]+0x00000018u; // 804CEB48
  W32(c->r[1]+0x00000018u,c->r[0]); // 804CEB4C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEB50
  c->r[11]=R8(c->r[29]+0x00000101u); // 804CEB54
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEB58
  c->r[12]=R32(c->r[29]+0x000000F4u); // 804CEB5C
  c->r[5]=R32(c->r[29]+0x000000ECu); // 804CEB60
  c->r[6]=R32(c->r[29]+0x000000F0u); // 804CEB64
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEB68
  c->r[7]=R16(c->r[29]+0x00000102u); // 804CEB6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEB70
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 804CEB74
  c->r[3]=c->r[12]+c->r[0]; // 804CEB78
  c->lr=0x804CEB80u; f_804C4128(c); // 804CEB7C
L_804CEB80:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CEB80
  cmps(c,0,(int32_t)c->r[3],0); // 804CEB84
  if (crb(c,2)) { goto L_804CEF04; } // 804CEB88
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CEB8C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CEB90
  if (crb(c,2)) { goto L_804CEF04; } // 804CEB94
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CEB98
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CEB9C
  if (crb(c,2)) { goto L_804CEF04; } // 804CEBA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEBA4
  c->r[5]=c->r[29]|c->r[29]; // 804CEBA8
  c->r[6]=c->r[30]|c->r[30]; // 804CEBAC
  c->r[7]=c->r[31]|c->r[31]; // 804CEBB0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CEBB4
  c->r[4]=0u+0x00000004u; // 804CEBB8
  c->ctr=c->r[12]; // 804CEBBC
  if (true) { c->lr=0x804CEBC4u; dispatch(c,c->ctr); } // 804CEBC0
  goto L_804CEF04; // 804CEBC4
L_804CEBC8:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CEBC8
  cmps(c,0,(int32_t)c->r[4],0); // 804CEBCC
  if (crb(c,2)) { goto L_804CEC10; } // 804CEBD0
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CEBD4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804CEBD8
  if (crb(c,2)) { goto L_804CEC10; } // 804CEBDC
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CEBE0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CEBE4
  if (crb(c,2)) { goto L_804CEC10; } // 804CEBE8
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CEBEC
  c->r[3]=c->r[4]|c->r[4]; // 804CEBF0
  c->r[5]=c->r[29]|c->r[29]; // 804CEBF4
  c->r[6]=c->r[30]|c->r[30]; // 804CEBF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 804CEBFC
  c->r[7]=c->r[31]|c->r[31]; // 804CEC00
  c->r[4]=0u+0x00000001u; // 804CEC04
  c->ctr=c->r[12]; // 804CEC08
  if (true) { c->lr=0x804CEC10u; dispatch(c,c->ctr); } // 804CEC0C
L_804CEC10:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CEC10
  if (crb(c,2)) { goto L_804CEC20; } // 804CEC14
  c->r[10]=R32(c->r[31]+0x00000000u); // 804CEC18
  goto L_804CEC24; // 804CEC1C
L_804CEC20:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 804CEC20
L_804CEC24:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CEC24
  cmps(c,0,(int32_t)c->r[5],0); // 804CEC28
  if (crb(c,2)) { goto L_804CEC50; } // 804CEC2C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEC30
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CEC34
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CEC38
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEC3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEC40
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CEC44
  c->r[5]=c->r[5]+c->r[0]; // 804CEC48
  goto L_804CEC54; // 804CEC4C
L_804CEC50:;
  c->r[5]=0u+0x00000000u; // 804CEC50
L_804CEC54:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CEC54
  cmps(c,0,(int32_t)c->r[6],0); // 804CEC58
  if (crb(c,2)) { goto L_804CEC80; } // 804CEC5C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEC60
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CEC64
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEC68
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEC6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEC70
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CEC74
  c->r[6]=c->r[6]+c->r[0]; // 804CEC78
  goto L_804CEC84; // 804CEC7C
L_804CEC80:;
  c->r[6]=0u+0x00000000u; // 804CEC80
L_804CEC84:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEC84
  c->r[3]=c->r[1]+0x0000000Cu; // 804CEC88
  c->r[9]=R8(c->r[29]+0x00000101u); // 804CEC8C
  c->r[8]=0u+0x00000000u; // 804CEC90
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEC94
  c->r[7]=R32(c->r[29]+0x00000110u); // 804CEC98
  c->r[11]=R32(c->r[29]+0x000000F4u); // 804CEC9C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CECA0
  c->r[4]=c->r[4]+0x0000001Fu; // 804CECA4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804CECA8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 804CECAC
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 804CECB0
  c->r[9]=0u+0x00000000u; // 804CECB4
  c->r[4]=c->r[11]+c->r[0]; // 804CECB8
  c->lr=0x804CECC0u; f_804C6878(c); // 804CECBC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CECC0
  cmps(c,0,(int32_t)c->r[3],0); // 804CECC4
  if (crb(c,2)) { goto L_804CEF04; } // 804CECC8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CECCC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804CECD0
  if (crb(c,2)) { goto L_804CEF04; } // 804CECD4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CECD8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CECDC
  if (crb(c,2)) { goto L_804CEF04; } // 804CECE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CECE4
  c->r[5]=c->r[29]|c->r[29]; // 804CECE8
  c->r[6]=c->r[30]|c->r[30]; // 804CECEC
  c->r[7]=c->r[31]|c->r[31]; // 804CECF0
  c->r[12]=R32(c->r[12]+0x00000018u); // 804CECF4
  c->r[4]=0u+0x00000004u; // 804CECF8
  c->ctr=c->r[12]; // 804CECFC
  if (true) { c->lr=0x804CED04u; dispatch(c,c->ctr); } // 804CED00
  goto L_804CEF04; // 804CED04
L_804CED08:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804CED08
  cmps(c,0,(int32_t)c->r[4],0); // 804CED0C
  if (crb(c,2)) { goto L_804CED50; } // 804CED10
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804CED14
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804CED18
  if (crb(c,2)) { goto L_804CED50; } // 804CED1C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804CED20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804CED24
  if (crb(c,2)) { goto L_804CED50; } // 804CED28
  c->r[12]=R32(c->r[4]+0x00000000u); // 804CED2C
  c->r[3]=c->r[4]|c->r[4]; // 804CED30
  c->r[5]=c->r[29]|c->r[29]; // 804CED34
  c->r[6]=c->r[30]|c->r[30]; // 804CED38
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804CED3C
  c->r[7]=c->r[31]|c->r[31]; // 804CED40
  c->r[4]=0u+0x00000001u; // 804CED44
  c->ctr=c->r[12]; // 804CED48
  if (true) { c->lr=0x804CED50u; dispatch(c,c->ctr); } // 804CED4C
L_804CED50:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CED50
  if (crb(c,2)) { goto L_804CED60; } // 804CED54
  c->r[10]=R32(c->r[31]+0x00000000u); // 804CED58
  goto L_804CED64; // 804CED5C
L_804CED60:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 804CED60
L_804CED64:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 804CED64
  cmps(c,0,(int32_t)c->r[5],0); // 804CED68
  if (crb(c,2)) { goto L_804CED90; } // 804CED6C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CED70
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CED74
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CED78
  c->r[0]=c->r[3]+0x0000001Fu; // 804CED7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CED80
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CED84
  c->r[5]=c->r[5]+c->r[0]; // 804CED88
  goto L_804CED94; // 804CED8C
L_804CED90:;
  c->r[5]=0u+0x00000000u; // 804CED90
L_804CED94:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 804CED94
  cmps(c,0,(int32_t)c->r[6],0); // 804CED98
  if (crb(c,2)) { goto L_804CEDC0; } // 804CED9C
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEDA0
  c->r[4]=R8(c->r[29]+0x00000101u); // 804CEDA4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEDA8
  c->r[0]=c->r[3]+0x0000001Fu; // 804CEDAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CEDB0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CEDB4
  c->r[6]=c->r[6]+c->r[0]; // 804CEDB8
  goto L_804CEDC4; // 804CEDBC
L_804CEDC0:;
  c->r[6]=0u+0x00000000u; // 804CEDC0
L_804CEDC4:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 804CEDC4
  c->r[3]=c->r[1]+0x00000008u; // 804CEDC8
  c->r[9]=R8(c->r[29]+0x00000101u); // 804CEDCC
  c->r[7]=0u+0x00000000u; // 804CEDD0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CEDD4
  c->r[8]=R32(c->r[29]+0x00000114u); // 804CEDD8
  c->r[11]=R32(c->r[29]+0x000000F4u); // 804CEDDC
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804CEDE0
  c->r[4]=c->r[4]+0x0000001Fu; // 804CEDE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804CEDE8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 804CEDEC
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 804CEDF0
  c->r[9]=0u+0x00000000u; // 804CEDF4
  c->r[4]=c->r[11]+c->r[0]; // 804CEDF8
  c->lr=0x804CEE00u; f_804C6878(c); // 804CEDFC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804CEE00
  cmps(c,0,(int32_t)c->r[3],0); // 804CEE04
  if (crb(c,2)) { goto L_804CEF04; } // 804CEE08
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804CEE0C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804CEE10
  if (crb(c,2)) { goto L_804CEF04; } // 804CEE14
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804CEE18
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804CEE1C
  if (crb(c,2)) { goto L_804CEF04; } // 804CEE20
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEE24
  c->r[5]=c->r[29]|c->r[29]; // 804CEE28
  c->r[6]=c->r[30]|c->r[30]; // 804CEE2C
  c->r[7]=c->r[31]|c->r[31]; // 804CEE30
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804CEE34
  c->r[4]=0u+0x00000004u; // 804CEE38
  c->ctr=c->r[12]; // 804CEE3C
  if (true) { c->lr=0x804CEE44u; dispatch(c,c->ctr); } // 804CEE40
  goto L_804CEF04; // 804CEE44
L_804CEE48:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 804CEE48
  cmps(c,0,(int32_t)c->r[3],0); // 804CEE4C
  if (crb(c,2)) { goto L_804CEE64; } // 804CEE50
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEE54
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CEE58
  c->ctr=c->r[12]; // 804CEE5C
  if (true) { c->lr=0x804CEE64u; dispatch(c,c->ctr); } // 804CEE60
L_804CEE64:;
  c->r[3]=R32(c->r[29]+0x00000128u); // 804CEE64
  cmps(c,0,(int32_t)c->r[3],0); // 804CEE68
  if (crb(c,2)) { goto L_804CEE80; } // 804CEE6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEE70
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CEE74
  c->ctr=c->r[12]; // 804CEE78
  if (true) { c->lr=0x804CEE80u; dispatch(c,c->ctr); } // 804CEE7C
L_804CEE80:;
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 804CEE80
  cmps(c,0,(int32_t)c->r[3],0); // 804CEE84
  if (crb(c,2)) { goto L_804CEE9C; } // 804CEE88
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEE8C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CEE90
  c->ctr=c->r[12]; // 804CEE94
  if (true) { c->lr=0x804CEE9Cu; dispatch(c,c->ctr); } // 804CEE98
L_804CEE9C:;
  c->r[3]=R32(c->r[29]+0x00000130u); // 804CEE9C
  cmps(c,0,(int32_t)c->r[3],0); // 804CEEA0
  if (crb(c,2)) { goto L_804CEEB8; } // 804CEEA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEEA8
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CEEAC
  c->ctr=c->r[12]; // 804CEEB0
  if (true) { c->lr=0x804CEEB8u; dispatch(c,c->ctr); } // 804CEEB4
L_804CEEB8:;
  c->r[3]=R32(c->r[29]+0x00000134u); // 804CEEB8
  cmps(c,0,(int32_t)c->r[3],0); // 804CEEBC
  if (crb(c,2)) { goto L_804CEF04; } // 804CEEC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CEEC4
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CEEC8
  c->ctr=c->r[12]; // 804CEECC
  if (true) { c->lr=0x804CEED4u; dispatch(c,c->ctr); } // 804CEED0
  goto L_804CEF04; // 804CEED4
L_804CEED8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CEED8
  c->r[3]=c->r[29]|c->r[29]; // 804CEEDC
  c->r[4]=c->r[31]|c->r[31]; // 804CEEE0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CEEE4
  c->ctr=c->r[12]; // 804CEEE8
  if (true) { c->lr=0x804CEEF0u; dispatch(c,c->ctr); } // 804CEEEC
  goto L_804CEF04; // 804CEEF0
L_804CEEF4:;
  c->r[3]=c->r[29]|c->r[29]; // 804CEEF4
  c->r[5]=c->r[30]|c->r[30]; // 804CEEF8
  c->r[6]=c->r[31]|c->r[31]; // 804CEEFC
  c->lr=0x804CEF04u; f_804CB6E8(c); // 804CEF00
L_804CEF04:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CEF04
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804CEF08
  c->r[30]=R32(c->r[1]+0x00000038u); // 804CEF0C
  c->r[29]=R32(c->r[1]+0x00000034u); // 804CEF10
  c->lr=c->r[0]; // 804CEF14
  c->r[1]=c->r[1]+0x00000040u; // 804CEF18
  return; // 804CEF1C
}

// SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl
void f_804CEF20(Ctx* __restrict c) {
  trace_call(0x804CEF20u);
  c->r[6]=0u+0x00020000u; // 804CEF20
  c->r[0]=c->r[6]+0x00000001u; // 804CEF24
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CEF28
  if (crb(c,2)) { goto L_804CEF34; } // 804CEF2C
  goto L_804CEF5C; // 804CEF30
L_804CEF34:;
  cmps(c,0,(int32_t)c->r[5],0); // 804CEF34
  if (crb(c,2)) { goto L_804CEF4C; } // 804CEF38
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CEF3C
  c->r[0]=c->r[0]|0x00000100u; // 804CEF40
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CEF44
  goto L_804CEF60; // 804CEF48
L_804CEF4C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CEF4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 804CEF50
  W32(c->r[3]+0x000000CCu,c->r[0]); // 804CEF54
  goto L_804CEF60; // 804CEF58
L_804CEF5C:;
  f_804CB520(c); return; // 804CEF5C
L_804CEF60:;
  c->r[3]=0u+0x00000001u; // 804CEF60
  return; // 804CEF64
}

// GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl
void f_804CEF68(Ctx* __restrict c) {
  trace_call(0x804CEF68u);
  cmps(c,0,(int32_t)c->r[5],0); // 804CEF68
  if (!crb(c,2)) { goto L_804CEF78; } // 804CEF6C
  c->r[3]=0u+0x00000000u; // 804CEF70
  return; // 804CEF74
L_804CEF78:;
  c->r[6]=0u+0x00020000u; // 804CEF78
  c->r[0]=c->r[6]+0x00000001u; // 804CEF7C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804CEF80
  if (crb(c,2)) { goto L_804CEF8C; } // 804CEF84
  goto L_804CEF9C; // 804CEF88
L_804CEF8C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804CEF8C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804CEF90
  W32(c->r[5]+0x00000000u,c->r[0]); // 804CEF94
  goto L_804CEFA0; // 804CEF98
L_804CEF9C:;
  f_804CB568(c); return; // 804CEF9C
L_804CEFA0:;
  c->r[3]=0u+0x00000001u; // 804CEFA0
  return; // 804CEFA4
}

// SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_804CEFA8(Ctx* __restrict c) {
  trace_call(0x804CEFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CEFA8
  c->r[0]=c->lr; // 804CEFAC
  cmps(c,1,(int32_t)c->r[4],0); // 804CEFB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804CEFB4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804CEFB8
  c->r[31]=c->r[4]|c->r[4]; // 804CEFBC
  W32(c->r[1]+0x00000038u,c->r[30]); // 804CEFC0
  c->r[30]=c->r[3]|c->r[3]; // 804CEFC4
  W32(c->r[1]+0x00000034u,c->r[29]); // 804CEFC8
  if (crb(c,6)) { goto L_804CEFDC; } // 804CEFCC
  c->r[0]=R32(c->r[4]+0x00000004u); // 804CEFD0
  cmps(c,0,(int32_t)c->r[0],0); // 804CEFD4
  if (crb(c,2)) { goto L_804CEFE4; } // 804CEFD8
L_804CEFDC:;
  c->r[3]=0u+0x00000000u; // 804CEFDC
  goto L_804CF588; // 804CEFE0
L_804CEFE4:;
  cmpu(c,0,c->r[5],0x00000006u); // 804CEFE4
  if (crb(c,1)) { goto L_804CF368; } // 804CEFE8
  c->r[3]=0u+0x80720000u; // 804CEFEC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804CEFF0
  c->r[3]=c->r[3]+0xFFFFA4F8u; // 804CEFF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 804CEFF8
  c->ctr=c->r[3]; // 804CEFFC
  if (true) { switch (c->ctr) { case 0x804CF004u: goto L_804CF004; case 0x804CF05Cu: goto L_804CF05C; case 0x804CF0B4u: goto L_804CF0B4; case 0x804CF10Cu: goto L_804CF10C; case 0x804CF164u: goto L_804CF164; case 0x804CF1B8u: goto L_804CF1B8; case 0x804CF368u: goto L_804CF368; default: break; } dispatch(c,c->ctr); return; } // 804CF000
L_804CF004:;
  c->r[29]=0u+0x00000000u; // 804CF004
  if (crb(c,6)) { goto L_804CF03C; } // 804CF008
  c->r[5]=0u+0x806B0000u; // 804CF00C
  c->r[3]=c->r[31]|c->r[31]; // 804CF010
  c->r[5]=c->r[5]+0xFFFFBCB0u; // 804CF014
  c->r[4]=c->r[1]+0x0000002Cu; // 804CF018
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 804CF01C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF020
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF024
  c->ctr=c->r[12]; // 804CF028
  if (true) { c->lr=0x804CF030u; dispatch(c,c->ctr); } // 804CF02C
  cmps(c,0,(int32_t)c->r[3],0); // 804CF030
  if (crb(c,2)) { goto L_804CF03C; } // 804CF034
  c->r[29]=0u+0x00000001u; // 804CF038
L_804CF03C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF03C
  if (crb(c,2)) { goto L_804CF04C; } // 804CF040
  c->r[29]=c->r[31]|c->r[31]; // 804CF044
  goto L_804CF050; // 804CF048
L_804CF04C:;
  c->r[29]=0u+0x00000000u; // 804CF04C
L_804CF050:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF050
  if (!crb(c,2)) { goto L_804CF370; } // 804CF054
  goto L_804CF368; // 804CF058
L_804CF05C:;
  c->r[29]=0u+0x00000000u; // 804CF05C
  if (crb(c,6)) { goto L_804CF094; } // 804CF060
  c->r[5]=0u+0x806B0000u; // 804CF064
  c->r[3]=c->r[31]|c->r[31]; // 804CF068
  c->r[5]=c->r[5]+0xFFFFBB88u; // 804CF06C
  c->r[4]=c->r[1]+0x00000028u; // 804CF070
  W32(c->r[1]+0x00000028u,c->r[5]); // 804CF074
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF078
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF07C
  c->ctr=c->r[12]; // 804CF080
  if (true) { c->lr=0x804CF088u; dispatch(c,c->ctr); } // 804CF084
  cmps(c,0,(int32_t)c->r[3],0); // 804CF088
  if (crb(c,2)) { goto L_804CF094; } // 804CF08C
  c->r[29]=0u+0x00000001u; // 804CF090
L_804CF094:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF094
  if (crb(c,2)) { goto L_804CF0A4; } // 804CF098
  c->r[29]=c->r[31]|c->r[31]; // 804CF09C
  goto L_804CF0A8; // 804CF0A0
L_804CF0A4:;
  c->r[29]=0u+0x00000000u; // 804CF0A4
L_804CF0A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF0A8
  if (!crb(c,2)) { goto L_804CF3DC; } // 804CF0AC
  goto L_804CF368; // 804CF0B0
L_804CF0B4:;
  c->r[29]=0u+0x00000000u; // 804CF0B4
  if (crb(c,6)) { goto L_804CF0EC; } // 804CF0B8
  c->r[5]=0u+0x806B0000u; // 804CF0BC
  c->r[3]=c->r[31]|c->r[31]; // 804CF0C0
  c->r[5]=c->r[5]+0xFFFFBBB0u; // 804CF0C4
  c->r[4]=c->r[1]+0x00000024u; // 804CF0C8
  W32(c->r[1]+0x00000024u,c->r[5]); // 804CF0CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF0D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF0D4
  c->ctr=c->r[12]; // 804CF0D8
  if (true) { c->lr=0x804CF0E0u; dispatch(c,c->ctr); } // 804CF0DC
  cmps(c,0,(int32_t)c->r[3],0); // 804CF0E0
  if (crb(c,2)) { goto L_804CF0EC; } // 804CF0E4
  c->r[29]=0u+0x00000001u; // 804CF0E8
L_804CF0EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF0EC
  if (crb(c,2)) { goto L_804CF0FC; } // 804CF0F0
  c->r[29]=c->r[31]|c->r[31]; // 804CF0F4
  goto L_804CF100; // 804CF0F8
L_804CF0FC:;
  c->r[29]=0u+0x00000000u; // 804CF0FC
L_804CF100:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF100
  if (!crb(c,2)) { goto L_804CF448; } // 804CF104
  goto L_804CF368; // 804CF108
L_804CF10C:;
  c->r[29]=0u+0x00000000u; // 804CF10C
  if (crb(c,6)) { goto L_804CF144; } // 804CF110
  c->r[5]=0u+0x806B0000u; // 804CF114
  c->r[3]=c->r[31]|c->r[31]; // 804CF118
  c->r[5]=c->r[5]+0xFFFFBBE0u; // 804CF11C
  c->r[4]=c->r[1]+0x00000020u; // 804CF120
  W32(c->r[1]+0x00000020u,c->r[5]); // 804CF124
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF128
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF12C
  c->ctr=c->r[12]; // 804CF130
  if (true) { c->lr=0x804CF138u; dispatch(c,c->ctr); } // 804CF134
  cmps(c,0,(int32_t)c->r[3],0); // 804CF138
  if (crb(c,2)) { goto L_804CF144; } // 804CF13C
  c->r[29]=0u+0x00000001u; // 804CF140
L_804CF144:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF144
  if (crb(c,2)) { goto L_804CF154; } // 804CF148
  c->r[29]=c->r[31]|c->r[31]; // 804CF14C
  goto L_804CF158; // 804CF150
L_804CF154:;
  c->r[29]=0u+0x00000000u; // 804CF154
L_804CF158:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF158
  if (!crb(c,2)) { goto L_804CF4B4; } // 804CF15C
  goto L_804CF368; // 804CF160
L_804CF164:;
  c->r[29]=0u+0x00000000u; // 804CF164
  if (crb(c,6)) { goto L_804CF19C; } // 804CF168
  c->r[5]=0u+0x806B0000u; // 804CF16C
  c->r[3]=c->r[31]|c->r[31]; // 804CF170
  c->r[5]=c->r[5]+0xFFFFBC48u; // 804CF174
  c->r[4]=c->r[1]+0x0000001Cu; // 804CF178
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 804CF17C
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF180
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF184
  c->ctr=c->r[12]; // 804CF188
  if (true) { c->lr=0x804CF190u; dispatch(c,c->ctr); } // 804CF18C
  cmps(c,0,(int32_t)c->r[3],0); // 804CF190
  if (crb(c,2)) { goto L_804CF19C; } // 804CF194
  c->r[29]=0u+0x00000001u; // 804CF198
L_804CF19C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF19C
  if (crb(c,2)) { goto L_804CF1A8; } // 804CF1A0
  goto L_804CF1AC; // 804CF1A4
L_804CF1A8:;
  c->r[31]=0u+0x00000000u; // 804CF1A8
L_804CF1AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CF1AC
  if (!crb(c,2)) { goto L_804CF520; } // 804CF1B0
  goto L_804CF368; // 804CF1B4
L_804CF1B8:;
  c->r[29]=0u+0x00000000u; // 804CF1B8
  if (crb(c,6)) { goto L_804CF1F0; } // 804CF1BC
  c->r[5]=0u+0x806B0000u; // 804CF1C0
  c->r[3]=c->r[31]|c->r[31]; // 804CF1C4
  c->r[5]=c->r[5]+0xFFFFBCB0u; // 804CF1C8
  c->r[4]=c->r[1]+0x00000018u; // 804CF1CC
  W32(c->r[1]+0x00000018u,c->r[5]); // 804CF1D0
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF1D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF1D8
  c->ctr=c->r[12]; // 804CF1DC
  if (true) { c->lr=0x804CF1E4u; dispatch(c,c->ctr); } // 804CF1E0
  cmps(c,0,(int32_t)c->r[3],0); // 804CF1E4
  if (crb(c,2)) { goto L_804CF1F0; } // 804CF1E8
  c->r[29]=0u+0x00000001u; // 804CF1EC
L_804CF1F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF1F0
  if (crb(c,2)) { goto L_804CF200; } // 804CF1F4
  c->r[29]=c->r[31]|c->r[31]; // 804CF1F8
  goto L_804CF204; // 804CF1FC
L_804CF200:;
  c->r[29]=0u+0x00000000u; // 804CF200
L_804CF204:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF204
  if (!crb(c,2)) { goto L_804CF370; } // 804CF208
  cmps(c,0,(int32_t)c->r[31],0); // 804CF20C
  c->r[29]=0u+0x00000000u; // 804CF210
  if (crb(c,2)) { goto L_804CF248; } // 804CF214
  c->r[5]=0u+0x806B0000u; // 804CF218
  c->r[3]=c->r[31]|c->r[31]; // 804CF21C
  c->r[5]=c->r[5]+0xFFFFBB88u; // 804CF220
  c->r[4]=c->r[1]+0x00000014u; // 804CF224
  W32(c->r[1]+0x00000014u,c->r[5]); // 804CF228
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF22C
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF230
  c->ctr=c->r[12]; // 804CF234
  if (true) { c->lr=0x804CF23Cu; dispatch(c,c->ctr); } // 804CF238
  cmps(c,0,(int32_t)c->r[3],0); // 804CF23C
  if (crb(c,2)) { goto L_804CF248; } // 804CF240
  c->r[29]=0u+0x00000001u; // 804CF244
L_804CF248:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF248
  if (crb(c,2)) { goto L_804CF258; } // 804CF24C
  c->r[29]=c->r[31]|c->r[31]; // 804CF250
  goto L_804CF25C; // 804CF254
L_804CF258:;
  c->r[29]=0u+0x00000000u; // 804CF258
L_804CF25C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF25C
  if (!crb(c,2)) { goto L_804CF3DC; } // 804CF260
  cmps(c,0,(int32_t)c->r[31],0); // 804CF264
  c->r[29]=0u+0x00000000u; // 804CF268
  if (crb(c,2)) { goto L_804CF2A0; } // 804CF26C
  c->r[5]=0u+0x806B0000u; // 804CF270
  c->r[3]=c->r[31]|c->r[31]; // 804CF274
  c->r[5]=c->r[5]+0xFFFFBBB0u; // 804CF278
  c->r[4]=c->r[1]+0x00000010u; // 804CF27C
  W32(c->r[1]+0x00000010u,c->r[5]); // 804CF280
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF284
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF288
  c->ctr=c->r[12]; // 804CF28C
  if (true) { c->lr=0x804CF294u; dispatch(c,c->ctr); } // 804CF290
  cmps(c,0,(int32_t)c->r[3],0); // 804CF294
  if (crb(c,2)) { goto L_804CF2A0; } // 804CF298
  c->r[29]=0u+0x00000001u; // 804CF29C
L_804CF2A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF2A0
  if (crb(c,2)) { goto L_804CF2B0; } // 804CF2A4
  c->r[29]=c->r[31]|c->r[31]; // 804CF2A8
  goto L_804CF2B4; // 804CF2AC
L_804CF2B0:;
  c->r[29]=0u+0x00000000u; // 804CF2B0
L_804CF2B4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF2B4
  if (!crb(c,2)) { goto L_804CF448; } // 804CF2B8
  cmps(c,0,(int32_t)c->r[31],0); // 804CF2BC
  c->r[29]=0u+0x00000000u; // 804CF2C0
  if (crb(c,2)) { goto L_804CF2F8; } // 804CF2C4
  c->r[5]=0u+0x806B0000u; // 804CF2C8
  c->r[3]=c->r[31]|c->r[31]; // 804CF2CC
  c->r[5]=c->r[5]+0xFFFFBBE0u; // 804CF2D0
  c->r[4]=c->r[1]+0x0000000Cu; // 804CF2D4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804CF2D8
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF2DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF2E0
  c->ctr=c->r[12]; // 804CF2E4
  if (true) { c->lr=0x804CF2ECu; dispatch(c,c->ctr); } // 804CF2E8
  cmps(c,0,(int32_t)c->r[3],0); // 804CF2EC
  if (crb(c,2)) { goto L_804CF2F8; } // 804CF2F0
  c->r[29]=0u+0x00000001u; // 804CF2F4
L_804CF2F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF2F8
  if (crb(c,2)) { goto L_804CF308; } // 804CF2FC
  c->r[29]=c->r[31]|c->r[31]; // 804CF300
  goto L_804CF30C; // 804CF304
L_804CF308:;
  c->r[29]=0u+0x00000000u; // 804CF308
L_804CF30C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF30C
  if (!crb(c,2)) { goto L_804CF4B4; } // 804CF310
  cmps(c,0,(int32_t)c->r[31],0); // 804CF314
  c->r[29]=0u+0x00000000u; // 804CF318
  if (crb(c,2)) { goto L_804CF350; } // 804CF31C
  c->r[5]=0u+0x806B0000u; // 804CF320
  c->r[3]=c->r[31]|c->r[31]; // 804CF324
  c->r[5]=c->r[5]+0xFFFFBC48u; // 804CF328
  c->r[4]=c->r[1]+0x00000008u; // 804CF32C
  W32(c->r[1]+0x00000008u,c->r[5]); // 804CF330
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF334
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CF338
  c->ctr=c->r[12]; // 804CF33C
  if (true) { c->lr=0x804CF344u; dispatch(c,c->ctr); } // 804CF340
  cmps(c,0,(int32_t)c->r[3],0); // 804CF344
  if (crb(c,2)) { goto L_804CF350; } // 804CF348
  c->r[29]=0u+0x00000001u; // 804CF34C
L_804CF350:;
  cmps(c,0,(int32_t)c->r[29],0); // 804CF350
  if (crb(c,2)) { goto L_804CF35C; } // 804CF354
  goto L_804CF360; // 804CF358
L_804CF35C:;
  c->r[31]=0u+0x00000000u; // 804CF35C
L_804CF360:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CF360
  if (!crb(c,2)) { goto L_804CF520; } // 804CF364
L_804CF368:;
  c->r[3]=0u+0x00000000u; // 804CF368
  goto L_804CF588; // 804CF36C
L_804CF370:;
  c->r[3]=c->r[29]|c->r[29]; // 804CF370
  c->r[4]=0u+0x00000004u; // 804CF374
  c->lr=0x804CF37Cu; f_804BDBE8(c); // 804CF378
  cmps(c,0,(int32_t)c->r[3],0); // 804CF37C
  if (!crb(c,2)) { goto L_804CF38C; } // 804CF380
  c->r[3]=0u+0x00000000u; // 804CF384
  goto L_804CF588; // 804CF388
L_804CF38C:;
  c->r[4]=R32(c->r[30]+0x00000124u); // 804CF38C
  cmps(c,0,(int32_t)c->r[4],0); // 804CF390
  if (crb(c,2)) { goto L_804CF3AC; } // 804CF394
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CF398
  c->r[3]=c->r[30]|c->r[30]; // 804CF39C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF3A0
  c->ctr=c->r[12]; // 804CF3A4
  if (true) { c->lr=0x804CF3ACu; dispatch(c,c->ctr); } // 804CF3A8
L_804CF3AC:;
  W32(c->r[30]+0x00000124u,c->r[29]); // 804CF3AC
  c->r[4]=0u+0x00010000u; // 804CF3B0
  c->r[3]=c->r[29]|c->r[29]; // 804CF3B4
  c->r[6]=c->r[30]|c->r[30]; // 804CF3B8
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CF3BC
  c->r[4]=c->r[4]+0x00000002u; // 804CF3C0
  c->r[5]=0u+0x00000000u; // 804CF3C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF3C8
  c->ctr=c->r[12]; // 804CF3CC
  if (true) { c->lr=0x804CF3D4u; dispatch(c,c->ctr); } // 804CF3D0
  c->r[3]=0u+0x00000001u; // 804CF3D4
  goto L_804CF588; // 804CF3D8
L_804CF3DC:;
  c->r[3]=c->r[29]|c->r[29]; // 804CF3DC
  c->r[4]=0u+0x00000004u; // 804CF3E0
  c->lr=0x804CF3E8u; f_804BDBE8(c); // 804CF3E4
  cmps(c,0,(int32_t)c->r[3],0); // 804CF3E8
  if (!crb(c,2)) { goto L_804CF3F8; } // 804CF3EC
  c->r[3]=0u+0x00000000u; // 804CF3F0
  goto L_804CF588; // 804CF3F4
L_804CF3F8:;
  c->r[4]=R32(c->r[30]+0x00000128u); // 804CF3F8
  cmps(c,0,(int32_t)c->r[4],0); // 804CF3FC
  if (crb(c,2)) { goto L_804CF418; } // 804CF400
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CF404
  c->r[3]=c->r[30]|c->r[30]; // 804CF408
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF40C
  c->ctr=c->r[12]; // 804CF410
  if (true) { c->lr=0x804CF418u; dispatch(c,c->ctr); } // 804CF414
L_804CF418:;
  W32(c->r[30]+0x00000128u,c->r[29]); // 804CF418
  c->r[4]=0u+0x00010000u; // 804CF41C
  c->r[3]=c->r[29]|c->r[29]; // 804CF420
  c->r[6]=c->r[30]|c->r[30]; // 804CF424
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CF428
  c->r[4]=c->r[4]+0x00000002u; // 804CF42C
  c->r[5]=0u+0x00000000u; // 804CF430
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF434
  c->ctr=c->r[12]; // 804CF438
  if (true) { c->lr=0x804CF440u; dispatch(c,c->ctr); } // 804CF43C
  c->r[3]=0u+0x00000001u; // 804CF440
  goto L_804CF588; // 804CF444
L_804CF448:;
  c->r[3]=c->r[29]|c->r[29]; // 804CF448
  c->r[4]=0u+0x00000004u; // 804CF44C
  c->lr=0x804CF454u; f_804BDBE8(c); // 804CF450
  cmps(c,0,(int32_t)c->r[3],0); // 804CF454
  if (!crb(c,2)) { goto L_804CF464; } // 804CF458
  c->r[3]=0u+0x00000000u; // 804CF45C
  goto L_804CF588; // 804CF460
L_804CF464:;
  c->r[4]=R32(c->r[30]+0x0000012Cu); // 804CF464
  cmps(c,0,(int32_t)c->r[4],0); // 804CF468
  if (crb(c,2)) { goto L_804CF484; } // 804CF46C
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CF470
  c->r[3]=c->r[30]|c->r[30]; // 804CF474
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF478
  c->ctr=c->r[12]; // 804CF47C
  if (true) { c->lr=0x804CF484u; dispatch(c,c->ctr); } // 804CF480
L_804CF484:;
  W32(c->r[30]+0x0000012Cu,c->r[29]); // 804CF484
  c->r[4]=0u+0x00010000u; // 804CF488
  c->r[3]=c->r[29]|c->r[29]; // 804CF48C
  c->r[6]=c->r[30]|c->r[30]; // 804CF490
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CF494
  c->r[4]=c->r[4]+0x00000002u; // 804CF498
  c->r[5]=0u+0x00000000u; // 804CF49C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF4A0
  c->ctr=c->r[12]; // 804CF4A4
  if (true) { c->lr=0x804CF4ACu; dispatch(c,c->ctr); } // 804CF4A8
  c->r[3]=0u+0x00000001u; // 804CF4AC
  goto L_804CF588; // 804CF4B0
L_804CF4B4:;
  c->r[3]=c->r[29]|c->r[29]; // 804CF4B4
  c->r[4]=0u+0x00000004u; // 804CF4B8
  c->lr=0x804CF4C0u; f_804BDBE8(c); // 804CF4BC
  cmps(c,0,(int32_t)c->r[3],0); // 804CF4C0
  if (!crb(c,2)) { goto L_804CF4D0; } // 804CF4C4
  c->r[3]=0u+0x00000000u; // 804CF4C8
  goto L_804CF588; // 804CF4CC
L_804CF4D0:;
  c->r[4]=R32(c->r[30]+0x00000130u); // 804CF4D0
  cmps(c,0,(int32_t)c->r[4],0); // 804CF4D4
  if (crb(c,2)) { goto L_804CF4F0; } // 804CF4D8
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CF4DC
  c->r[3]=c->r[30]|c->r[30]; // 804CF4E0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF4E4
  c->ctr=c->r[12]; // 804CF4E8
  if (true) { c->lr=0x804CF4F0u; dispatch(c,c->ctr); } // 804CF4EC
L_804CF4F0:;
  W32(c->r[30]+0x00000130u,c->r[29]); // 804CF4F0
  c->r[4]=0u+0x00010000u; // 804CF4F4
  c->r[3]=c->r[29]|c->r[29]; // 804CF4F8
  c->r[6]=c->r[30]|c->r[30]; // 804CF4FC
  c->r[12]=R32(c->r[29]+0x00000000u); // 804CF500
  c->r[4]=c->r[4]+0x00000002u; // 804CF504
  c->r[5]=0u+0x00000000u; // 804CF508
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF50C
  c->ctr=c->r[12]; // 804CF510
  if (true) { c->lr=0x804CF518u; dispatch(c,c->ctr); } // 804CF514
  c->r[3]=0u+0x00000001u; // 804CF518
  goto L_804CF588; // 804CF51C
L_804CF520:;
  c->r[3]=c->r[31]|c->r[31]; // 804CF520
  c->r[4]=0u+0x00000004u; // 804CF524
  c->lr=0x804CF52Cu; f_804BDBE8(c); // 804CF528
  cmps(c,0,(int32_t)c->r[3],0); // 804CF52C
  if (!crb(c,2)) { goto L_804CF53C; } // 804CF530
  c->r[3]=0u+0x00000000u; // 804CF534
  goto L_804CF588; // 804CF538
L_804CF53C:;
  c->r[4]=R32(c->r[30]+0x00000134u); // 804CF53C
  cmps(c,0,(int32_t)c->r[4],0); // 804CF540
  if (crb(c,2)) { goto L_804CF55C; } // 804CF544
  c->r[12]=R32(c->r[30]+0x00000000u); // 804CF548
  c->r[3]=c->r[30]|c->r[30]; // 804CF54C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF550
  c->ctr=c->r[12]; // 804CF554
  if (true) { c->lr=0x804CF55Cu; dispatch(c,c->ctr); } // 804CF558
L_804CF55C:;
  W32(c->r[30]+0x00000134u,c->r[31]); // 804CF55C
  c->r[4]=0u+0x00010000u; // 804CF560
  c->r[3]=c->r[31]|c->r[31]; // 804CF564
  c->r[6]=c->r[30]|c->r[30]; // 804CF568
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CF56C
  c->r[4]=c->r[4]+0x00000002u; // 804CF570
  c->r[5]=0u+0x00000000u; // 804CF574
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF578
  c->ctr=c->r[12]; // 804CF57C
  if (true) { c->lr=0x804CF584u; dispatch(c,c->ctr); } // 804CF580
  c->r[3]=0u+0x00000001u; // 804CF584
L_804CF588:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804CF588
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804CF58C
  c->r[30]=R32(c->r[1]+0x00000038u); // 804CF590
  c->r[29]=R32(c->r[1]+0x00000034u); // 804CF594
  c->lr=c->r[0]; // 804CF598
  c->r[1]=c->r[1]+0x00000040u; // 804CF59C
  return; // 804CF5A0
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj
void f_804CF5A4(Ctx* __restrict c) {
  trace_call(0x804CF5A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CF5A4
  c->r[0]=c->lr; // 804CF5A8
  cmps(c,0,(int32_t)c->r[4],0); // 804CF5AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CF5B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CF5B4
  c->r[31]=c->r[3]|c->r[3]; // 804CF5B8
  if (!crb(c,2)) { goto L_804CF5C8; } // 804CF5BC
  c->r[3]=0u+0x00000000u; // 804CF5C0
  goto L_804CF708; // 804CF5C4
L_804CF5C8:;
  c->r[0]=R32(c->r[3]+0x00000124u); // 804CF5C8
  cmpu(c,0,c->r[4],c->r[0]); // 804CF5CC
  if (!crb(c,2)) { goto L_804CF608; } // 804CF5D0
  c->r[3]=c->r[0]|c->r[0]; // 804CF5D4
  c->r[4]=0u+0x00010000u; // 804CF5D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF5DC
  c->r[6]=c->r[31]|c->r[31]; // 804CF5E0
  c->r[4]=c->r[4]+0x00000003u; // 804CF5E4
  c->r[5]=0u+0x00000000u; // 804CF5E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF5EC
  c->ctr=c->r[12]; // 804CF5F0
  if (true) { c->lr=0x804CF5F8u; dispatch(c,c->ctr); } // 804CF5F4
  c->r[0]=0u+0x00000000u; // 804CF5F8
  c->r[3]=0u+0x00000001u; // 804CF5FC
  W32(c->r[31]+0x00000124u,c->r[0]); // 804CF600
  goto L_804CF708; // 804CF604
L_804CF608:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 804CF608
  cmpu(c,0,c->r[4],c->r[0]); // 804CF60C
  if (!crb(c,2)) { goto L_804CF648; } // 804CF610
  c->r[3]=c->r[0]|c->r[0]; // 804CF614
  c->r[4]=0u+0x00010000u; // 804CF618
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF61C
  c->r[6]=c->r[31]|c->r[31]; // 804CF620
  c->r[4]=c->r[4]+0x00000003u; // 804CF624
  c->r[5]=0u+0x00000000u; // 804CF628
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF62C
  c->ctr=c->r[12]; // 804CF630
  if (true) { c->lr=0x804CF638u; dispatch(c,c->ctr); } // 804CF634
  c->r[0]=0u+0x00000000u; // 804CF638
  c->r[3]=0u+0x00000001u; // 804CF63C
  W32(c->r[31]+0x00000128u,c->r[0]); // 804CF640
  goto L_804CF708; // 804CF644
L_804CF648:;
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 804CF648
  cmpu(c,0,c->r[4],c->r[0]); // 804CF64C
  if (!crb(c,2)) { goto L_804CF688; } // 804CF650
  c->r[3]=c->r[0]|c->r[0]; // 804CF654
  c->r[4]=0u+0x00010000u; // 804CF658
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF65C
  c->r[6]=c->r[31]|c->r[31]; // 804CF660
  c->r[4]=c->r[4]+0x00000003u; // 804CF664
  c->r[5]=0u+0x00000000u; // 804CF668
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF66C
  c->ctr=c->r[12]; // 804CF670
  if (true) { c->lr=0x804CF678u; dispatch(c,c->ctr); } // 804CF674
  c->r[0]=0u+0x00000000u; // 804CF678
  c->r[3]=0u+0x00000001u; // 804CF67C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 804CF680
  goto L_804CF708; // 804CF684
L_804CF688:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 804CF688
  cmpu(c,0,c->r[4],c->r[0]); // 804CF68C
  if (!crb(c,2)) { goto L_804CF6C8; } // 804CF690
  c->r[3]=c->r[0]|c->r[0]; // 804CF694
  c->r[4]=0u+0x00010000u; // 804CF698
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF69C
  c->r[6]=c->r[31]|c->r[31]; // 804CF6A0
  c->r[4]=c->r[4]+0x00000003u; // 804CF6A4
  c->r[5]=0u+0x00000000u; // 804CF6A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF6AC
  c->ctr=c->r[12]; // 804CF6B0
  if (true) { c->lr=0x804CF6B8u; dispatch(c,c->ctr); } // 804CF6B4
  c->r[0]=0u+0x00000000u; // 804CF6B8
  c->r[3]=0u+0x00000001u; // 804CF6BC
  W32(c->r[31]+0x00000130u,c->r[0]); // 804CF6C0
  goto L_804CF708; // 804CF6C4
L_804CF6C8:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 804CF6C8
  cmpu(c,0,c->r[4],c->r[3]); // 804CF6CC
  if (!crb(c,2)) { goto L_804CF704; } // 804CF6D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF6D4
  c->r[4]=0u+0x00010000u; // 804CF6D8
  c->r[6]=c->r[31]|c->r[31]; // 804CF6DC
  c->r[5]=0u+0x00000000u; // 804CF6E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804CF6E4
  c->r[4]=c->r[4]+0x00000003u; // 804CF6E8
  c->ctr=c->r[12]; // 804CF6EC
  if (true) { c->lr=0x804CF6F4u; dispatch(c,c->ctr); } // 804CF6F0
  c->r[0]=0u+0x00000000u; // 804CF6F4
  c->r[3]=0u+0x00000001u; // 804CF6F8
  W32(c->r[31]+0x00000134u,c->r[0]); // 804CF6FC
  goto L_804CF708; // 804CF700
L_804CF704:;
  c->r[3]=0u+0x00000000u; // 804CF704
L_804CF708:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CF708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CF70C
  c->lr=c->r[0]; // 804CF710
  c->r[1]=c->r[1]+0x00000010u; // 804CF714
  return; // 804CF718
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_804CF71C(Ctx* __restrict c) {
  trace_call(0x804CF71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CF71C
  c->r[0]=c->lr; // 804CF720
  cmps(c,0,(int32_t)c->r[4],3); // 804CF724
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CF728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CF72C
  c->r[31]=0u+0x00000000u; // 804CF730
  if (crb(c,2)) { goto L_804CF7BC; } // 804CF734
  if (!crb(c,0)) { goto L_804CF754; } // 804CF738
  cmps(c,0,(int32_t)c->r[4],1); // 804CF73C
  if (crb(c,2)) { goto L_804CF784; } // 804CF740
  if (!crb(c,0)) { goto L_804CF7A0; } // 804CF744
  cmps(c,0,(int32_t)c->r[4],0); // 804CF748
  if (!crb(c,0)) { goto L_804CF768; } // 804CF74C
  goto L_804CF7F0; // 804CF750
L_804CF754:;
  cmps(c,0,(int32_t)c->r[4],7); // 804CF754
  if (!crb(c,0)) { goto L_804CF7F0; } // 804CF758
  cmps(c,0,(int32_t)c->r[4],5); // 804CF75C
  if (!crb(c,0)) { goto L_804CF7F0; } // 804CF760
  goto L_804CF7D8; // 804CF764
L_804CF768:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF768
  c->r[31]=R32(c->r[3]+0x00000124u); // 804CF76C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF770
  c->r[4]=c->r[31]|c->r[31]; // 804CF774
  c->ctr=c->r[12]; // 804CF778
  if (true) { c->lr=0x804CF780u; dispatch(c,c->ctr); } // 804CF77C
  goto L_804CF7F0; // 804CF780
L_804CF784:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF784
  c->r[31]=R32(c->r[3]+0x00000128u); // 804CF788
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF78C
  c->r[4]=c->r[31]|c->r[31]; // 804CF790
  c->ctr=c->r[12]; // 804CF794
  if (true) { c->lr=0x804CF79Cu; dispatch(c,c->ctr); } // 804CF798
  goto L_804CF7F0; // 804CF79C
L_804CF7A0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF7A0
  c->r[31]=R32(c->r[3]+0x0000012Cu); // 804CF7A4
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF7A8
  c->r[4]=c->r[31]|c->r[31]; // 804CF7AC
  c->ctr=c->r[12]; // 804CF7B0
  if (true) { c->lr=0x804CF7B8u; dispatch(c,c->ctr); } // 804CF7B4
  goto L_804CF7F0; // 804CF7B8
L_804CF7BC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF7BC
  c->r[31]=R32(c->r[3]+0x00000130u); // 804CF7C0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF7C4
  c->r[4]=c->r[31]|c->r[31]; // 804CF7C8
  c->ctr=c->r[12]; // 804CF7CC
  if (true) { c->lr=0x804CF7D4u; dispatch(c,c->ctr); } // 804CF7D0
  goto L_804CF7F0; // 804CF7D4
L_804CF7D8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF7D8
  c->r[31]=R32(c->r[3]+0x00000134u); // 804CF7DC
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CF7E0
  c->r[4]=c->r[31]|c->r[31]; // 804CF7E4
  c->ctr=c->r[12]; // 804CF7E8
  if (true) { c->lr=0x804CF7F0u; dispatch(c,c->ctr); } // 804CF7EC
L_804CF7F0:;
  c->r[3]=c->r[31]|c->r[31]; // 804CF7F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CF7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CF7F8
  c->lr=c->r[0]; // 804CF7FC
  c->r[1]=c->r[1]+0x00000010u; // 804CF800
  return; // 804CF804
}

// fn_804CF808
void f_804CF808(Ctx* __restrict c) {
  trace_call(0x804CF808u);
  cmps(c,0,(int32_t)c->r[4],3); // 804CF808
  if (crb(c,2)) { goto L_804CF858; } // 804CF80C
  if (!crb(c,0)) { goto L_804CF82C; } // 804CF810
  cmps(c,0,(int32_t)c->r[4],1); // 804CF814
  if (crb(c,2)) { goto L_804CF848; } // 804CF818
  if (!crb(c,0)) { goto L_804CF850; } // 804CF81C
  cmps(c,0,(int32_t)c->r[4],0); // 804CF820
  if (!crb(c,0)) { goto L_804CF840; } // 804CF824
  goto L_804CF868; // 804CF828
L_804CF82C:;
  cmps(c,0,(int32_t)c->r[4],7); // 804CF82C
  if (!crb(c,0)) { goto L_804CF868; } // 804CF830
  cmps(c,0,(int32_t)c->r[4],5); // 804CF834
  if (!crb(c,0)) { goto L_804CF868; } // 804CF838
  goto L_804CF860; // 804CF83C
L_804CF840:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 804CF840
  return; // 804CF844
L_804CF848:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 804CF848
  return; // 804CF84C
L_804CF850:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 804CF850
  return; // 804CF854
L_804CF858:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 804CF858
  return; // 804CF85C
L_804CF860:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 804CF860
  return; // 804CF864
L_804CF868:;
  c->r[3]=0u+0x00000000u; // 804CF868
  return; // 804CF86C
}

// fn_804CF870
void f_804CF870(Ctx* __restrict c) {
  trace_call(0x804CF870u);
  cmps(c,0,(int32_t)c->r[4],3); // 804CF870
  if (crb(c,2)) { goto L_804CF8C0; } // 804CF874
  if (!crb(c,0)) { goto L_804CF894; } // 804CF878
  cmps(c,0,(int32_t)c->r[4],1); // 804CF87C
  if (crb(c,2)) { goto L_804CF8B0; } // 804CF880
  if (!crb(c,0)) { goto L_804CF8B8; } // 804CF884
  cmps(c,0,(int32_t)c->r[4],0); // 804CF888
  if (!crb(c,0)) { goto L_804CF8A8; } // 804CF88C
  goto L_804CF8D0; // 804CF890
L_804CF894:;
  cmps(c,0,(int32_t)c->r[4],7); // 804CF894
  if (!crb(c,0)) { goto L_804CF8D0; } // 804CF898
  cmps(c,0,(int32_t)c->r[4],5); // 804CF89C
  if (!crb(c,0)) { goto L_804CF8D0; } // 804CF8A0
  goto L_804CF8C8; // 804CF8A4
L_804CF8A8:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 804CF8A8
  return; // 804CF8AC
L_804CF8B0:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 804CF8B0
  return; // 804CF8B4
L_804CF8B8:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 804CF8B8
  return; // 804CF8BC
L_804CF8C0:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 804CF8C0
  return; // 804CF8C4
L_804CF8C8:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 804CF8C8
  return; // 804CF8CC
L_804CF8D0:;
  c->r[3]=0u+0x00000000u; // 804CF8D0
  return; // 804CF8D4
}

// UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv
void f_804CF8D8(Ctx* __restrict c) {
  trace_call(0x804CF8D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CF8D8
  c->r[0]=c->lr; // 804CF8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CF8E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CF8E4
  c->r[31]=c->r[3]|c->r[3]; // 804CF8E8
  c->r[0]=R32(c->r[3]+0x00000124u); // 804CF8EC
  cmps(c,0,(int32_t)c->r[0],0); // 804CF8F0
  if (crb(c,2)) { goto L_804CF90C; } // 804CF8F4
  c->r[3]=c->r[0]|c->r[0]; // 804CF8F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF8FC
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CF900
  c->ctr=c->r[12]; // 804CF904
  if (true) { c->lr=0x804CF90Cu; dispatch(c,c->ctr); } // 804CF908
L_804CF90C:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 804CF90C
  cmps(c,0,(int32_t)c->r[3],0); // 804CF910
  if (crb(c,2)) { goto L_804CF928; } // 804CF914
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF918
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CF91C
  c->ctr=c->r[12]; // 804CF920
  if (true) { c->lr=0x804CF928u; dispatch(c,c->ctr); } // 804CF924
L_804CF928:;
  c->r[3]=R32(c->r[31]+0x0000012Cu); // 804CF928
  cmps(c,0,(int32_t)c->r[3],0); // 804CF92C
  if (crb(c,2)) { goto L_804CF944; } // 804CF930
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF934
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CF938
  c->ctr=c->r[12]; // 804CF93C
  if (true) { c->lr=0x804CF944u; dispatch(c,c->ctr); } // 804CF940
L_804CF944:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 804CF944
  cmps(c,0,(int32_t)c->r[3],0); // 804CF948
  if (crb(c,2)) { goto L_804CF960; } // 804CF94C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF950
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CF954
  c->ctr=c->r[12]; // 804CF958
  if (true) { c->lr=0x804CF960u; dispatch(c,c->ctr); } // 804CF95C
L_804CF960:;
  c->r[3]=R32(c->r[31]+0x00000134u); // 804CF960
  cmps(c,0,(int32_t)c->r[3],0); // 804CF964
  if (crb(c,2)) { goto L_804CF97C; } // 804CF968
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CF96C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804CF970
  c->ctr=c->r[12]; // 804CF974
  if (true) { c->lr=0x804CF97Cu; dispatch(c,c->ctr); } // 804CF978
L_804CF97C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CF97C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CF980
  c->lr=c->r[0]; // 804CF984
  c->r[1]=c->r[1]+0x00000010u; // 804CF988
  return; // 804CF98C
}

// fn_804CF990
void f_804CF990(Ctx* __restrict c) {
  trace_call(0x804CF990u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804CF990
  if (crb(c,2)) { goto L_804CF9A4; } // 804CF994
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CF998
  c->r[0]=c->r[0]|0x00000001u; // 804CF99C
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CF9A0
L_804CF9A4:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804CF9A4
  if (crb(c,2)) { goto L_804CF9B8; } // 804CF9A8
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CF9AC
  c->r[0]=c->r[0]|0x00000002u; // 804CF9B0
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CF9B4
L_804CF9B8:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804CF9B8
  if (crb(c,2)) return; // 804CF9BC
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CF9C0
  c->r[0]=c->r[0]|0x00000004u; // 804CF9C4
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CF9C8
  return; // 804CF9CC
}

// fn_804CF9D0
void f_804CF9D0(Ctx* __restrict c) {
  trace_call(0x804CF9D0u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804CF9D0
  if (crb(c,2)) { goto L_804CF9E4; } // 804CF9D4
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CF9D8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 804CF9DC
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CF9E0
L_804CF9E4:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804CF9E4
  if (crb(c,2)) { goto L_804CF9F8; } // 804CF9E8
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CF9EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804CF9F0
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CF9F4
L_804CF9F8:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 804CF9F8
  if (crb(c,2)) return; // 804CF9FC
  c->r[0]=R8(c->r[3]+0x00000120u); // 804CFA00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804CFA04
  W8(c->r[3]+0x00000120u,c->r[0]); // 804CFA08
  return; // 804CFA0C
}

// GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_804CFA10(Ctx* __restrict c) {
  trace_call(0x804CFA10u);
  c->r[0]=R16(c->r[3]+0x00000102u); // 804CFA10
  c->r[5]=R8(c->r[3]+0x00000101u); // 804CFA14
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CFA18
  c->r[3]=R32(c->r[3]+0x000000F4u); // 804CFA1C
  c->r[0]=c->r[4]+0x0000001Fu; // 804CFA20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFA24
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 804CFA28
  c->r[3]=c->r[3]+c->r[0]; // 804CFA2C
  return; // 804CFA30
}

// GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_804CFA34(Ctx* __restrict c) {
  trace_call(0x804CFA34u);
  c->r[5]=R32(c->r[3]+0x000000F8u); // 804CFA34
  cmps(c,0,(int32_t)c->r[5],0); // 804CFA38
  if (crb(c,2)) { goto L_804CFA60; } // 804CFA3C
  c->r[0]=R16(c->r[3]+0x00000102u); // 804CFA40
  c->r[4]=R8(c->r[3]+0x00000101u); // 804CFA44
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 804CFA48
  c->r[0]=c->r[3]+0x0000001Fu; // 804CFA4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFA50
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CFA54
  c->r[3]=c->r[5]+c->r[0]; // 804CFA58
  return; // 804CFA5C
L_804CFA60:;
  c->r[3]=0u+0x00000000u; // 804CFA60
  return; // 804CFA64
}

// GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_804CFA68(Ctx* __restrict c) {
  trace_call(0x804CFA68u);
  c->r[5]=R32(c->r[3]+0x000000FCu); // 804CFA68
  cmps(c,0,(int32_t)c->r[5],0); // 804CFA6C
  if (crb(c,2)) { goto L_804CFA94; } // 804CFA70
  c->r[0]=R16(c->r[3]+0x00000102u); // 804CFA74
  c->r[4]=R8(c->r[3]+0x00000101u); // 804CFA78
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 804CFA7C
  c->r[0]=c->r[3]+0x0000001Fu; // 804CFA80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFA84
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 804CFA88
  c->r[3]=c->r[5]+c->r[0]; // 804CFA8C
  return; // 804CFA90
L_804CFA94:;
  c->r[3]=0u+0x00000000u; // 804CFA94
  return; // 804CFA98
}

// __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii
void f_804CFA9C(Ctx* __restrict c) {
  trace_call(0x804CFA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CFA9C
  c->r[0]=c->lr; // 804CFAA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 804CFAA4
  c->r[11]=c->r[1]+0x00000050u; // 804CFAA8
  c->lr=0x804CFAB0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804CFAAC
  c->r[30]=R32(c->r[1]+0x00000058u); // 804CFAB0
  c->r[28]=c->r[3]|c->r[3]; // 804CFAB4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 804CFAB8
  c->r[29]=c->r[5]|c->r[5]; // 804CFABC
  c->r[22]=c->r[6]|c->r[6]; // 804CFAC0
  c->r[23]=c->r[7]|c->r[7]; // 804CFAC4
  c->r[24]=c->r[8]|c->r[8]; // 804CFAC8
  c->r[25]=c->r[9]|c->r[9]; // 804CFACC
  c->r[26]=c->r[10]|c->r[10]; // 804CFAD0
  c->lr=0x804CFAD8u; f_804CAEA4(c); // 804CFAD4
  {uint32_t ea=c->r[2]+0x00001710u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFAD8
  c->r[5]=0u+0x80720000u; // 804CFADC
  c->r[5]=c->r[5]+0xFFFFA520u; // 804CFAE0
  c->r[4]=0u+0x80720000u; // 804CFAE4
  {uint32_t ea=c->r[28]+0x000000DCu; WF32(ea,c->f[0]);} // 804CFAE8
  c->r[27]=0u+0x00000000u; // 804CFAEC
  c->r[3]=c->r[29]|c->r[29]; // 804CFAF0
  c->r[4]=c->r[4]+0xFFFFA514u; // 804CFAF4
  {uint32_t ea=c->r[28]+0x000000E0u; WF32(ea,c->f[0]);} // 804CFAF8
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 804CFAFC
  W32(c->r[28]+0x00000000u,c->r[5]); // 804CFB00
  c->r[0]=R32(c->r[29]+0x00000000u); // 804CFB04
  W32(c->r[28]+0x000000E8u,c->r[0]); // 804CFB08
  W32(c->r[28]+0x000000ECu,c->r[22]); // 804CFB0C
  W32(c->r[28]+0x000000F0u,c->r[23]); // 804CFB10
  W32(c->r[28]+0x000000F4u,c->r[24]); // 804CFB14
  W32(c->r[28]+0x000000F8u,c->r[25]); // 804CFB18
  W32(c->r[28]+0x000000FCu,c->r[26]); // 804CFB1C
  W8(c->r[28]+0x00000100u,c->r[30]); // 804CFB20
  W8(c->r[28]+0x00000101u,c->r[27]); // 804CFB24
  W16(c->r[28]+0x00000102u,c->r[31]); // 804CFB28
  W32(c->r[28]+0x00000104u,c->r[27]); // 804CFB2C
  c->lr=0x804CFB34u; f_804AC380(c); // 804CFB30
  W32(c->r[28]+0x00000108u,c->r[3]); // 804CFB34
  c->r[3]=c->r[29]|c->r[29]; // 804CFB38
  c->r[4]=c->r[13]+0xFFFFA2A8u; // 804CFB3C
  c->lr=0x804CFB44u; f_804AC380(c); // 804CFB40
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 804CFB44
  c->r[3]=c->r[29]|c->r[29]; // 804CFB48
  c->r[4]=c->r[13]+0xFFFFA2B0u; // 804CFB4C
  c->lr=0x804CFB54u; f_804AC380(c); // 804CFB50
  W32(c->r[28]+0x00000110u,c->r[3]); // 804CFB54
  c->r[3]=c->r[29]|c->r[29]; // 804CFB58
  c->r[4]=c->r[13]+0xFFFFA2B8u; // 804CFB5C
  c->lr=0x804CFB64u; f_804AC380(c); // 804CFB60
  c->r[0]=R32(c->r[28]+0x00000110u); // 804CFB64
  c->r[4]=0u+0x00000002u; // 804CFB68
  W32(c->r[28]+0x00000114u,c->r[3]); // 804CFB6C
  cmps(c,0,(int32_t)c->r[0],0); // 804CFB70
  W32(c->r[28]+0x00000118u,c->r[4]); // 804CFB74
  W32(c->r[28]+0x0000011Cu,c->r[27]); // 804CFB78
  W8(c->r[28]+0x00000120u,c->r[27]); // 804CFB7C
  W8(c->r[28]+0x00000121u,c->r[27]); // 804CFB80
  W16(c->r[28]+0x00000122u,c->r[27]); // 804CFB84
  W32(c->r[28]+0x00000124u,c->r[27]); // 804CFB88
  W32(c->r[28]+0x00000128u,c->r[27]); // 804CFB8C
  W32(c->r[28]+0x0000012Cu,c->r[27]); // 804CFB90
  W32(c->r[28]+0x00000130u,c->r[27]); // 804CFB94
  W32(c->r[28]+0x00000134u,c->r[27]); // 804CFB98
  if (crb(c,2)) { goto L_804CFBB0; } // 804CFB9C
  c->r[0]=R32(c->r[28]+0x000000CCu); // 804CFBA0
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 804CFBA4
  W32(c->r[28]+0x000000CCu,c->r[0]); // 804CFBA8
  goto L_804CFBBC; // 804CFBAC
L_804CFBB0:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 804CFBB0
  c->r[0]=c->r[0]|0x20000000u; // 804CFBB4
  W32(c->r[28]+0x000000CCu,c->r[0]); // 804CFBB8
L_804CFBBC:;
  c->r[0]=R32(c->r[28]+0x00000114u); // 804CFBBC
  cmps(c,0,(int32_t)c->r[0],0); // 804CFBC0
  if (crb(c,2)) { goto L_804CFBD8; } // 804CFBC4
  c->r[0]=R32(c->r[28]+0x000000CCu); // 804CFBC8
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 804CFBCC
  W32(c->r[28]+0x000000CCu,c->r[0]); // 804CFBD0
  goto L_804CFBE4; // 804CFBD4
L_804CFBD8:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 804CFBD8
  c->r[0]=c->r[0]|0x40000000u; // 804CFBDC
  W32(c->r[28]+0x000000CCu,c->r[0]); // 804CFBE0
L_804CFBE4:;
  c->r[3]=R32(c->r[28]+0x000000F4u); // 804CFBE4
  cmps(c,0,(int32_t)c->r[3],0); // 804CFBE8
  if (crb(c,2)) { goto L_804CFC04; } // 804CFBEC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804CFBF0
  c->r[0]=c->r[4]+0x0000001Fu; // 804CFBF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFBF8
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 804CFBFC
  c->lr=0x804CFC04u; f_803771E0(c); // 804CFC00
L_804CFC04:;
  c->r[3]=R32(c->r[28]+0x000000F8u); // 804CFC04
  cmps(c,0,(int32_t)c->r[3],0); // 804CFC08
  if (crb(c,2)) { goto L_804CFC24; } // 804CFC0C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)36); // 804CFC10
  c->r[0]=c->r[4]+0x0000001Fu; // 804CFC14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFC18
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 804CFC1C
  c->lr=0x804CFC24u; f_803771E0(c); // 804CFC20
L_804CFC24:;
  c->r[3]=R32(c->r[28]+0x000000FCu); // 804CFC24
  cmps(c,0,(int32_t)c->r[3],0); // 804CFC28
  if (crb(c,2)) { goto L_804CFC44; } // 804CFC2C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 804CFC30
  c->r[0]=c->r[4]+0x0000001Fu; // 804CFC34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804CFC38
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 804CFC3C
  c->lr=0x804CFC44u; f_803771E0(c); // 804CFC40
L_804CFC44:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 804CFC44
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 804CFC48
  c->r[6]=c->r[3]+0x0000004Cu; // 804CFC4C
  cmps(c,0,(int32_t)c->r[0],0); // 804CFC50
  if (crb(c,2)) { goto L_804CFC98; } // 804CFC54
  {uint32_t ea=c->r[6]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC58
  c->r[3]=c->r[28]|c->r[28]; // 804CFC5C
  c->r[5]=c->r[1]+0x00000008u; // 804CFC60
  c->r[4]=0u+0x00000000u; // 804CFC64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804CFC68
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804CFC70
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804CFC78
  {uint32_t ea=c->r[6]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC7C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804CFC80
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC84
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804CFC88
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804CFC8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804CFC90
  c->lr=0x804CFC98u; f_804CB404(c); // 804CFC94
L_804CFC98:;
  c->r[11]=c->r[1]+0x00000050u; // 804CFC98
  c->r[3]=c->r[28]|c->r[28]; // 804CFC9C
  c->lr=0x804CFCA4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804CFCA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 804CFCA4
  c->lr=c->r[0]; // 804CFCA8
  c->r[1]=c->r[1]+0x00000050u; // 804CFCAC
  return; // 804CFCB0
}

// __dt__Q34nw4r3g3d12ScnMdlSimpleFv
void f_804CFCB4(Ctx* __restrict c) {
  trace_call(0x804CFCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CFCB4
  c->r[0]=c->lr; // 804CFCB8
  cmps(c,0,(int32_t)c->r[3],0); // 804CFCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CFCC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804CFCC4
  c->r[31]=c->r[3]|c->r[3]; // 804CFCC8
  if (crb(c,2)) { goto L_804CFDC0; } // 804CFCCC
  c->r[0]=R8(c->r[3]+0x00000121u); // 804CFCD0
  c->r[4]=0u+0x80720000u; // 804CFCD4
  c->r[4]=c->r[4]+0xFFFFA520u; // 804CFCD8
  cmps(c,0,(int32_t)c->r[0],1); // 804CFCDC
  W32(c->r[3]+0x00000000u,c->r[4]); // 804CFCE0
  if (crb(c,2)) { goto L_804CFCEC; } // 804CFCE4
  goto L_804CFD0C; // 804CFCE8
L_804CFCEC:;
  c->r[3]=R32(c->r[3]+0x0000011Cu); // 804CFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 804CFCF0
  if (crb(c,2)) { goto L_804CFD0C; } // 804CFCF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CFCF8
  c->r[4]=0u+0x00000001u; // 804CFCFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804CFD00
  c->ctr=c->r[12]; // 804CFD04
  if (true) { c->lr=0x804CFD0Cu; dispatch(c,c->ctr); } // 804CFD08
L_804CFD0C:;
  c->r[4]=R32(c->r[31]+0x00000124u); // 804CFD0C
  cmps(c,0,(int32_t)c->r[4],0); // 804CFD10
  if (crb(c,2)) { goto L_804CFD2C; } // 804CFD14
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CFD18
  c->r[3]=c->r[31]|c->r[31]; // 804CFD1C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CFD20
  c->ctr=c->r[12]; // 804CFD24
  if (true) { c->lr=0x804CFD2Cu; dispatch(c,c->ctr); } // 804CFD28
L_804CFD2C:;
  c->r[4]=R32(c->r[31]+0x00000128u); // 804CFD2C
  cmps(c,0,(int32_t)c->r[4],0); // 804CFD30
  if (crb(c,2)) { goto L_804CFD4C; } // 804CFD34
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CFD38
  c->r[3]=c->r[31]|c->r[31]; // 804CFD3C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CFD40
  c->ctr=c->r[12]; // 804CFD44
  if (true) { c->lr=0x804CFD4Cu; dispatch(c,c->ctr); } // 804CFD48
L_804CFD4C:;
  c->r[4]=R32(c->r[31]+0x0000012Cu); // 804CFD4C
  cmps(c,0,(int32_t)c->r[4],0); // 804CFD50
  if (crb(c,2)) { goto L_804CFD6C; } // 804CFD54
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CFD58
  c->r[3]=c->r[31]|c->r[31]; // 804CFD5C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CFD60
  c->ctr=c->r[12]; // 804CFD64
  if (true) { c->lr=0x804CFD6Cu; dispatch(c,c->ctr); } // 804CFD68
L_804CFD6C:;
  c->r[4]=R32(c->r[31]+0x00000130u); // 804CFD6C
  cmps(c,0,(int32_t)c->r[4],0); // 804CFD70
  if (crb(c,2)) { goto L_804CFD8C; } // 804CFD74
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CFD78
  c->r[3]=c->r[31]|c->r[31]; // 804CFD7C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CFD80
  c->ctr=c->r[12]; // 804CFD84
  if (true) { c->lr=0x804CFD8Cu; dispatch(c,c->ctr); } // 804CFD88
L_804CFD8C:;
  c->r[4]=R32(c->r[31]+0x00000134u); // 804CFD8C
  cmps(c,0,(int32_t)c->r[4],0); // 804CFD90
  if (crb(c,2)) { goto L_804CFDAC; } // 804CFD94
  c->r[12]=R32(c->r[31]+0x00000000u); // 804CFD98
  c->r[3]=c->r[31]|c->r[31]; // 804CFD9C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804CFDA0
  c->ctr=c->r[12]; // 804CFDA4
  if (true) { c->lr=0x804CFDACu; dispatch(c,c->ctr); } // 804CFDA8
L_804CFDAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804CFDAC
  if (crb(c,2)) { goto L_804CFDC0; } // 804CFDB0
  c->r[3]=c->r[31]|c->r[31]; // 804CFDB4
  c->r[4]=0u+0x00000000u; // 804CFDB8
  c->lr=0x804CFDC0u; f_804CAF90(c); // 804CFDBC
L_804CFDC0:;
  c->r[3]=c->r[31]|c->r[31]; // 804CFDC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804CFDC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CFDC8
  c->lr=c->r[0]; // 804CFDCC
  c->r[1]=c->r[1]+0x00000010u; // 804CFDD0
  return; // 804CFDD4
}

// fn_804CFDD8
void f_804CFDD8(Ctx* __restrict c) {
  trace_call(0x804CFDD8u);
  c->r[3]=0u+0x806B0000u; // 804CFDD8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CFDDC
  c->r[3]=c->r[3]+0xFFFFBED8u; // 804CFDE0
  cmpu(c,0,c->r[0],c->r[3]); // 804CFDE4
  if (!crb(c,2)) { goto L_804CFDF4; } // 804CFDE8
  c->r[3]=0u+0x00000001u; // 804CFDEC
  return; // 804CFDF0
L_804CFDF4:;
  c->r[3]=0u+0x806B0000u; // 804CFDF4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804CFDF8
  c->r[3]=c->r[3]+0xFFFFBEA8u; // 804CFDFC
  cmpu(c,0,c->r[0],c->r[3]); // 804CFE00
  if (!crb(c,2)) { goto L_804CFE10; } // 804CFE04
  c->r[3]=0u+0x00000001u; // 804CFE08
  return; // 804CFE0C
L_804CFE10:;
  c->r[3]=0u+0x806B0000u; // 804CFE10
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804CFE14
  cmpu(c,0,c->r[0],c->r[3]); // 804CFE18
  if (!crb(c,2)) { goto L_804CFE28; } // 804CFE1C
  c->r[3]=0u+0x00000001u; // 804CFE20
  return; // 804CFE24
L_804CFE28:;
  c->r[3]=0u+0x806B0000u; // 804CFE28
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804CFE2C
  c->r[0]=c->r[3]-c->r[0]; // 804CFE30
  c->r[0]=cntlz(c->r[0]); // 804CFE34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804CFE38
  return; // 804CFE3C
}

// fn_804CFE40
void f_804CFE40(Ctx* __restrict c) {
  trace_call(0x804CFE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CFE40
  c->r[0]=c->lr; // 804CFE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CFE48
  c->r[12]=R32(c->r[3]+0x00000000u); // 804CFE4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804CFE50
  c->ctr=c->r[12]; // 804CFE54
  if (true) { c->lr=0x804CFE5Cu; dispatch(c,c->ctr); } // 804CFE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CFE5C
  c->r[3]=c->r[3]+0x00000004u; // 804CFE60
  c->lr=c->r[0]; // 804CFE64
  c->r[1]=c->r[1]+0x00000010u; // 804CFE68
  return; // 804CFE6C
}

// fn_804CFE70
void f_804CFE70(Ctx* __restrict c) {
  trace_call(0x804CFE70u);
  c->r[3]=0u+0x806B0000u; // 804CFE70
  c->r[3]=c->r[3]+0xFFFFBED8u; // 804CFE74
  return; // 804CFE78
}

// fn_804CFE7C
void f_804CFE7C(Ctx* __restrict c) {
  trace_call(0x804CFE7Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804CFE7C
  cmps(c,0,(int32_t)c->r[5],0); // 804CFE80
  if (crb(c,2)) { goto L_804CFEBC; } // 804CFE84
  c->r[0]=R32(c->r[3]+0x00000008u); // 804CFE88
  cmps(c,0,(int32_t)c->r[0],0); // 804CFE8C
  if (crb(c,2)) { goto L_804CFEBC; } // 804CFE90
  cmps(c,0,(int32_t)c->r[4],0); // 804CFE94
  if (crb(c,2)) { goto L_804CFEB4; } // 804CFE98
  c->r[0]=R32(c->r[3]+0x00000004u); // 804CFE9C
  c->r[5]=R32(c->r[5]+0x00000140u); // 804CFEA0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CFEA4
  c->r[0]=R32(c->r[5]+c->r[4]); // 804CFEA8
  c->r[0]=c->r[0]|0x00000001u; // 804CFEAC
  W32(c->r[5]+c->r[4],c->r[0]); // 804CFEB0
L_804CFEB4:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 804CFEB4
  return; // 804CFEB8
L_804CFEBC:;
  c->r[3]=0u+0x00000000u; // 804CFEBC
  return; // 804CFEC0
}

// fn_804CFEC4
void f_804CFEC4(Ctx* __restrict c) {
  trace_call(0x804CFEC4u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804CFEC4
  cmps(c,0,(int32_t)c->r[5],0); // 804CFEC8
  if (crb(c,2)) { goto L_804CFF04; } // 804CFECC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804CFED0
  cmps(c,0,(int32_t)c->r[0],0); // 804CFED4
  if (crb(c,2)) { goto L_804CFF04; } // 804CFED8
  cmps(c,0,(int32_t)c->r[4],0); // 804CFEDC
  if (crb(c,2)) { goto L_804CFEFC; } // 804CFEE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804CFEE4
  c->r[5]=R32(c->r[5]+0x00000140u); // 804CFEE8
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CFEEC
  c->r[0]=R32(c->r[5]+c->r[4]); // 804CFEF0
  c->r[0]=c->r[0]|0x00000020u; // 804CFEF4
  W32(c->r[5]+c->r[4],c->r[0]); // 804CFEF8
L_804CFEFC:;
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 804CFEFC
  return; // 804CFF00
L_804CFF04:;
  c->r[3]=0u+0x00000000u; // 804CFF04
  return; // 804CFF08
}

// fn_804CFF0C
void f_804CFF0C(Ctx* __restrict c) {
  trace_call(0x804CFF0Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804CFF0C
  cmps(c,0,(int32_t)c->r[5],0); // 804CFF10
  if (crb(c,2)) { goto L_804CFF4C; } // 804CFF14
  c->r[0]=R32(c->r[3]+0x00000020u); // 804CFF18
  cmps(c,0,(int32_t)c->r[0],0); // 804CFF1C
  if (crb(c,2)) { goto L_804CFF4C; } // 804CFF20
  cmps(c,0,(int32_t)c->r[4],0); // 804CFF24
  if (crb(c,2)) { goto L_804CFF44; } // 804CFF28
  c->r[0]=R32(c->r[3]+0x00000004u); // 804CFF2C
  c->r[5]=R32(c->r[5]+0x00000140u); // 804CFF30
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CFF34
  c->r[0]=R32(c->r[5]+c->r[4]); // 804CFF38
  c->r[0]=c->r[0]|0x00000080u; // 804CFF3C
  W32(c->r[5]+c->r[4],c->r[0]); // 804CFF40
L_804CFF44:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 804CFF44
  return; // 804CFF48
L_804CFF4C:;
  c->r[3]=0u+0x00000000u; // 804CFF4C
  return; // 804CFF50
}

// fn_804CFF54
void f_804CFF54(Ctx* __restrict c) {
  trace_call(0x804CFF54u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 804CFF54
  cmps(c,0,(int32_t)c->r[5],0); // 804CFF58
  if (crb(c,2)) { goto L_804CFF94; } // 804CFF5C
  c->r[0]=R32(c->r[3]+0x00000024u); // 804CFF60
  cmps(c,0,(int32_t)c->r[0],0); // 804CFF64
  if (crb(c,2)) { goto L_804CFF94; } // 804CFF68
  cmps(c,0,(int32_t)c->r[4],0); // 804CFF6C
  if (crb(c,2)) { goto L_804CFF8C; } // 804CFF70
  c->r[0]=R32(c->r[3]+0x00000004u); // 804CFF74
  c->r[5]=R32(c->r[5]+0x00000140u); // 804CFF78
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804CFF7C
  c->r[0]=R32(c->r[5]+c->r[4]); // 804CFF80
  c->r[0]=c->r[0]|0x00000100u; // 804CFF84
  W32(c->r[5]+c->r[4],c->r[0]); // 804CFF88
L_804CFF8C:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 804CFF8C
  return; // 804CFF90
L_804CFF94:;
  c->r[3]=0u+0x00000000u; // 804CFF94
  return; // 804CFF98
}

// fn_804CFF9C
void f_804CFF9C(Ctx* __restrict c) {
  trace_call(0x804CFF9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CFF9C
  c->r[0]=c->lr; // 804CFFA0
  c->r[5]=c->r[3]|c->r[3]; // 804CFFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804CFFA8
  c->r[4]=R32(c->r[3]+0x00000000u); // 804CFFAC
  cmps(c,0,(int32_t)c->r[4],0); // 804CFFB0
  if (crb(c,2)) { goto L_804CFFE8; } // 804CFFB4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804CFFB8
  cmps(c,0,(int32_t)c->r[0],0); // 804CFFBC
  if (crb(c,2)) { goto L_804CFFCC; } // 804CFFC0
  c->r[3]=R32(c->r[3]+0x00000008u); // 804CFFC4
  goto L_804CFFEC; // 804CFFC8
L_804CFFCC:;
  c->r[0]=R32(c->r[4]+0x000000E8u); // 804CFFCC
  c->r[3]=c->r[1]+0x00000008u; // 804CFFD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804CFFD4
  c->r[4]=R32(c->r[5]+0x00000004u); // 804CFFD8
  c->lr=0x804CFFE0u; f_804ACA48(c); // 804CFFDC
  c->r[3]=c->r[3]+0x00000040u; // 804CFFE0
  goto L_804CFFEC; // 804CFFE4
L_804CFFE8:;
  c->r[3]=0u+0x00000000u; // 804CFFE8
L_804CFFEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804CFFEC
  c->lr=c->r[0]; // 804CFFF0
  c->r[1]=c->r[1]+0x00000010u; // 804CFFF4
  return; // 804CFFF8
}

// fn_804CFFFC
void f_804CFFFC(Ctx* __restrict c) {
  trace_call(0x804CFFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804CFFFC
  c->r[0]=c->lr; // 804D0000
  cmps(c,0,(int32_t)c->r[4],0); // 804D0004
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D0008
  c->r[0]=0u+0x00000000u; // 804D000C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D0010
  c->r[31]=c->r[5]|c->r[5]; // 804D0014
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D0018
  c->r[30]=c->r[4]|c->r[4]; // 804D001C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D0020
  c->r[29]=c->r[3]|c->r[3]; // 804D0024
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D0028
  c->r[28]=0u+0x00000000u; // 804D002C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804D0030
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804D0034
  W32(c->r[3]+0x00000010u,c->r[0]); // 804D0038
  W32(c->r[3]+0x00000014u,c->r[0]); // 804D003C
  W32(c->r[3]+0x00000018u,c->r[0]); // 804D0040
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804D0044
  W32(c->r[3]+0x00000020u,c->r[0]); // 804D0048
  W32(c->r[3]+0x00000024u,c->r[0]); // 804D004C
  W32(c->r[3]+0x00000028u,c->r[0]); // 804D0050
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 804D0054
  W32(c->r[3]+0x00000030u,c->r[0]); // 804D0058
  if (crb(c,2)) { goto L_804D0080; } // 804D005C
  c->r[0]=R32(c->r[4]+0x000000E8u); // 804D0060
  c->r[4]=c->r[31]|c->r[31]; // 804D0064
  c->r[3]=c->r[1]+0x00000008u; // 804D0068
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D006C
  c->lr=0x804D0074u; f_804ACA48(c); // 804D0070
  cmps(c,0,(int32_t)c->r[3],0); // 804D0074
  if (crb(c,2)) { goto L_804D0080; } // 804D0078
  c->r[28]=0u+0x00000001u; // 804D007C
L_804D0080:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D0080
  if (crb(c,2)) { goto L_804D0220; } // 804D0084
  W32(c->r[29]+0x00000000u,c->r[30]); // 804D0088
  W32(c->r[29]+0x00000004u,c->r[31]); // 804D008C
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 804D0090
  cmps(c,0,(int32_t)c->r[3],0); // 804D0094
  if (crb(c,2)) { goto L_804D00AC; } // 804D0098
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)260); // 804D009C
  c->r[0]=c->r[3]+c->r[0]; // 804D00A0
  W32(c->r[29]+0x00000008u,c->r[0]); // 804D00A4
  goto L_804D00B4; // 804D00A8
L_804D00AC:;
  c->r[0]=0u+0x00000000u; // 804D00AC
  W32(c->r[29]+0x00000008u,c->r[0]); // 804D00B0
L_804D00B4:;
  c->r[3]=R32(c->r[30]+0x00000150u); // 804D00B4
  cmps(c,0,(int32_t)c->r[3],0); // 804D00B8
  if (crb(c,2)) { goto L_804D00D0; } // 804D00BC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)100); // 804D00C0
  c->r[0]=c->r[3]+c->r[0]; // 804D00C4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 804D00C8
  goto L_804D00D8; // 804D00CC
L_804D00D0:;
  c->r[0]=0u+0x00000000u; // 804D00D0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 804D00D4
L_804D00D8:;
  c->r[3]=R32(c->r[30]+0x00000154u); // 804D00D8
  cmps(c,0,(int32_t)c->r[3],0); // 804D00DC
  if (crb(c,2)) { goto L_804D00F4; } // 804D00E0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)584); // 804D00E4
  c->r[0]=c->r[3]+c->r[0]; // 804D00E8
  W32(c->r[29]+0x00000010u,c->r[0]); // 804D00EC
  goto L_804D00FC; // 804D00F0
L_804D00F4:;
  c->r[0]=0u+0x00000000u; // 804D00F4
  W32(c->r[29]+0x00000010u,c->r[0]); // 804D00F8
L_804D00FC:;
  c->r[3]=R32(c->r[30]+0x00000158u); // 804D00FC
  cmps(c,0,(int32_t)c->r[3],0); // 804D0100
  if (crb(c,2)) { goto L_804D0118; } // 804D0104
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)40); // 804D0108
  c->r[0]=c->r[3]+c->r[0]; // 804D010C
  W32(c->r[29]+0x00000014u,c->r[0]); // 804D0110
  goto L_804D0120; // 804D0114
L_804D0118:;
  c->r[0]=0u+0x00000000u; // 804D0118
  W32(c->r[29]+0x00000014u,c->r[0]); // 804D011C
L_804D0120:;
  c->r[3]=R32(c->r[30]+0x0000015Cu); // 804D0120
  cmps(c,0,(int32_t)c->r[3],0); // 804D0124
  if (crb(c,2)) { goto L_804D013C; } // 804D0128
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 804D012C
  c->r[0]=c->r[3]+c->r[0]; // 804D0130
  W32(c->r[29]+0x00000018u,c->r[0]); // 804D0134
  goto L_804D0144; // 804D0138
L_804D013C:;
  c->r[0]=0u+0x00000000u; // 804D013C
  W32(c->r[29]+0x00000018u,c->r[0]); // 804D0140
L_804D0144:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 804D0144
  cmps(c,0,(int32_t)c->r[3],0); // 804D0148
  if (crb(c,2)) { goto L_804D0160; } // 804D014C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 804D0150
  c->r[0]=c->r[3]+c->r[0]; // 804D0154
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804D0158
  goto L_804D0168; // 804D015C
L_804D0160:;
  c->r[0]=0u+0x00000000u; // 804D0160
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804D0164
L_804D0168:;
  c->r[3]=R32(c->r[30]+0x00000164u); // 804D0168
  cmps(c,0,(int32_t)c->r[3],0); // 804D016C
  if (crb(c,2)) { goto L_804D0184; } // 804D0170
  c->r[0]=rotl(c->r[31],5)&0xFFFFFFE0u; // 804D0174
  c->r[0]=c->r[3]+c->r[0]; // 804D0178
  W32(c->r[29]+0x00000020u,c->r[0]); // 804D017C
  goto L_804D018C; // 804D0180
L_804D0184:;
  c->r[0]=0u+0x00000000u; // 804D0184
  W32(c->r[29]+0x00000020u,c->r[0]); // 804D0188
L_804D018C:;
  c->r[3]=R32(c->r[30]+0x00000168u); // 804D018C
  cmps(c,0,(int32_t)c->r[3],0); // 804D0190
  if (crb(c,2)) { goto L_804D01A8; } // 804D0194
  c->r[0]=rotl(c->r[31],7)&0xFFFFFF80u; // 804D0198
  c->r[0]=c->r[3]+c->r[0]; // 804D019C
  W32(c->r[29]+0x00000024u,c->r[0]); // 804D01A0
  goto L_804D01B0; // 804D01A4
L_804D01A8:;
  c->r[0]=0u+0x00000000u; // 804D01A8
  W32(c->r[29]+0x00000024u,c->r[0]); // 804D01AC
L_804D01B0:;
  c->r[3]=R32(c->r[30]+0x0000016Cu); // 804D01B0
  cmps(c,0,(int32_t)c->r[3],0); // 804D01B4
  if (crb(c,2)) { goto L_804D01CC; } // 804D01B8
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 804D01BC
  c->r[0]=c->r[3]+c->r[0]; // 804D01C0
  W32(c->r[29]+0x00000028u,c->r[0]); // 804D01C4
  goto L_804D01D4; // 804D01C8
L_804D01CC:;
  c->r[0]=0u+0x00000000u; // 804D01CC
  W32(c->r[29]+0x00000028u,c->r[0]); // 804D01D0
L_804D01D4:;
  c->r[3]=R32(c->r[30]+0x00000170u); // 804D01D4
  cmps(c,0,(int32_t)c->r[3],0); // 804D01D8
  if (crb(c,2)) { goto L_804D01F0; } // 804D01DC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)160); // 804D01E0
  c->r[0]=c->r[3]+c->r[0]; // 804D01E4
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 804D01E8
  goto L_804D01F8; // 804D01EC
L_804D01F0:;
  c->r[0]=0u+0x00000000u; // 804D01F0
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 804D01F4
L_804D01F8:;
  c->r[3]=R32(c->r[30]+0x00000174u); // 804D01F8
  cmps(c,0,(int32_t)c->r[3],0); // 804D01FC
  if (crb(c,2)) { goto L_804D0214; } // 804D0200
  c->r[0]=rotl(c->r[31],9)&0xFFFFFE00u; // 804D0204
  c->r[0]=c->r[3]+c->r[0]; // 804D0208
  W32(c->r[29]+0x00000030u,c->r[0]); // 804D020C
  goto L_804D0258; // 804D0210
L_804D0214:;
  c->r[0]=0u+0x00000000u; // 804D0214
  W32(c->r[29]+0x00000030u,c->r[0]); // 804D0218
  goto L_804D0258; // 804D021C
L_804D0220:;
  c->r[0]=0u+0x00000000u; // 804D0220
  W32(c->r[29]+0x00000004u,c->r[31]); // 804D0224
  W32(c->r[29]+0x00000000u,c->r[0]); // 804D0228
  W32(c->r[29]+0x00000008u,c->r[0]); // 804D022C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 804D0230
  W32(c->r[29]+0x00000010u,c->r[0]); // 804D0234
  W32(c->r[29]+0x00000014u,c->r[0]); // 804D0238
  W32(c->r[29]+0x00000018u,c->r[0]); // 804D023C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804D0240
  W32(c->r[29]+0x00000020u,c->r[0]); // 804D0244
  W32(c->r[29]+0x00000024u,c->r[0]); // 804D0248
  W32(c->r[29]+0x00000028u,c->r[0]); // 804D024C
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 804D0250
  W32(c->r[29]+0x00000030u,c->r[0]); // 804D0254
L_804D0258:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D0258
  c->r[3]=c->r[29]|c->r[29]; // 804D025C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D0260
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D0264
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D0268
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D026C
  c->lr=c->r[0]; // 804D0270
  c->r[1]=c->r[1]+0x00000020u; // 804D0274
  return; // 804D0278
}

// fn_804D027C
void f_804D027C(Ctx* __restrict c) {
  trace_call(0x804D027Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D027C
  c->r[0]=c->lr; // 804D0280
  c->r[4]=R32(c->r[3]+0x00000000u); // 804D0284
  c->r[5]=c->r[3]|c->r[3]; // 804D0288
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D028C
  cmps(c,0,(int32_t)c->r[4],0); // 804D0290
  if (crb(c,2)) { goto L_804D02E8; } // 804D0294
  c->r[3]=R32(c->r[3]+0x00000008u); // 804D0298
  cmps(c,0,(int32_t)c->r[3],0); // 804D029C
  if (crb(c,2)) { goto L_804D02B8; } // 804D02A0
  c->r[3]=R8(c->r[3]+0x00000000u); // 804D02A4
  c->r[0]=0u-c->r[3]; // 804D02A8
  c->r[0]=c->r[0]|c->r[3]; // 804D02AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804D02B0
  goto L_804D02EC; // 804D02B4
L_804D02B8:;
  c->r[0]=R32(c->r[4]+0x000000E8u); // 804D02B8
  c->r[3]=c->r[1]+0x00000008u; // 804D02BC
  c->r[4]=R32(c->r[5]+0x00000004u); // 804D02C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D02C4
  c->lr=0x804D02CCu; f_804AC4AC(c); // 804D02C8
  cmps(c,0,(int32_t)c->r[3],0); // 804D02CC
  if (crb(c,2)) { goto L_804D02E0; } // 804D02D0
  c->r[0]=R32(c->r[3]+0x00000014u); // 804D02D4
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 804D02D8
  goto L_804D02EC; // 804D02DC
L_804D02E0:;
  c->r[3]=0u+0x00000000u; // 804D02E0
  goto L_804D02EC; // 804D02E4
L_804D02E8:;
  c->r[3]=0u+0x00000000u; // 804D02E8
L_804D02EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D02EC
  c->lr=c->r[0]; // 804D02F0
  c->r[1]=c->r[1]+0x00000010u; // 804D02F4
  return; // 804D02F8
}

// fn_804D02FC
void f_804D02FC(Ctx* __restrict c) {
  trace_call(0x804D02FCu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804D02FC
  cmps(c,0,(int32_t)c->r[6],0); // 804D0300
  if (crb(c,2)) { goto L_804D0370; } // 804D0304
  c->r[5]=R32(c->r[3]+0x00000008u); // 804D0308
  cmps(c,0,(int32_t)c->r[5],0); // 804D030C
  if (crb(c,2)) { goto L_804D0370; } // 804D0310
  cmps(c,0,(int32_t)c->r[4],0); // 804D0314
  if (crb(c,2)) { goto L_804D0344; } // 804D0318
  c->r[0]=R8(c->r[5]+0x00000000u); // 804D031C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0320
  if (!crb(c,2)) { goto L_804D0368; } // 804D0324
  c->r[4]=R32(c->r[6]+0x0000013Cu); // 804D0328
  c->r[0]=0u+0x00000001u; // 804D032C
  c->r[4]=c->r[4]|0x00000001u; // 804D0330
  W32(c->r[6]+0x0000013Cu,c->r[4]); // 804D0334
  c->r[3]=R32(c->r[3]+0x00000008u); // 804D0338
  W8(c->r[3]+0x00000000u,c->r[0]); // 804D033C
  goto L_804D0368; // 804D0340
L_804D0344:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 804D0344
  cmps(c,0,(int32_t)c->r[0],0); // 804D0348
  if (crb(c,2)) { goto L_804D0368; } // 804D034C
  c->r[4]=R32(c->r[6]+0x0000013Cu); // 804D0350
  c->r[0]=0u+0x00000000u; // 804D0354
  c->r[4]=c->r[4]|0x00000001u; // 804D0358
  W32(c->r[6]+0x0000013Cu,c->r[4]); // 804D035C
  c->r[3]=R32(c->r[3]+0x00000008u); // 804D0360
  W8(c->r[3]+0x00000000u,c->r[0]); // 804D0364
L_804D0368:;
  c->r[3]=0u+0x00000001u; // 804D0368
  return; // 804D036C
L_804D0370:;
  c->r[3]=0u+0x00000000u; // 804D0370
  return; // 804D0374
}

// fn_804D0378
void f_804D0378(Ctx* __restrict c) {
  trace_call(0x804D0378u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D0378
  c->r[0]=c->lr; // 804D037C
  cmps(c,0,(int32_t)c->r[4],0); // 804D0380
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D0384
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D0388
  c->r[31]=0u+0x00000000u; // 804D038C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D0390
  c->r[30]=c->r[5]|c->r[5]; // 804D0394
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D0398
  c->r[29]=c->r[4]|c->r[4]; // 804D039C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D03A0
  c->r[28]=c->r[3]|c->r[3]; // 804D03A4
  if (crb(c,2)) { goto L_804D03CC; } // 804D03A8
  c->r[0]=R32(c->r[4]+0x000000E8u); // 804D03AC
  c->r[4]=c->r[30]|c->r[30]; // 804D03B0
  c->r[3]=c->r[1]+0x00000008u; // 804D03B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D03B8
  c->lr=0x804D03C0u; f_804AC4AC(c); // 804D03BC
  cmps(c,0,(int32_t)c->r[3],0); // 804D03C0
  if (crb(c,2)) { goto L_804D03CC; } // 804D03C4
  c->r[31]=0u+0x00000001u; // 804D03C8
L_804D03CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D03CC
  if (crb(c,2)) { goto L_804D0400; } // 804D03D0
  W32(c->r[28]+0x00000000u,c->r[29]); // 804D03D4
  W32(c->r[28]+0x00000004u,c->r[30]); // 804D03D8
  c->r[0]=R32(c->r[29]+0x00000148u); // 804D03DC
  cmps(c,0,(int32_t)c->r[0],0); // 804D03E0
  if (crb(c,2)) { goto L_804D03F4; } // 804D03E4
  c->r[0]=c->r[0]+c->r[30]; // 804D03E8
  W32(c->r[28]+0x00000008u,c->r[0]); // 804D03EC
  goto L_804D0410; // 804D03F0
L_804D03F4:;
  c->r[0]=0u+0x00000000u; // 804D03F4
  W32(c->r[28]+0x00000008u,c->r[0]); // 804D03F8
  goto L_804D0410; // 804D03FC
L_804D0400:;
  c->r[0]=0u+0x00000000u; // 804D0400
  W32(c->r[28]+0x00000004u,c->r[30]); // 804D0404
  W32(c->r[28]+0x00000000u,c->r[0]); // 804D0408
  W32(c->r[28]+0x00000008u,c->r[0]); // 804D040C
L_804D0410:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D0410
  c->r[3]=c->r[28]|c->r[28]; // 804D0414
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D0418
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D041C
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D0420
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D0424
  c->lr=c->r[0]; // 804D0428
  c->r[1]=c->r[1]+0x00000020u; // 804D042C
  return; // 804D0430
}

// fn_804D0434
void f_804D0434(Ctx* __restrict c) {
  trace_call(0x804D0434u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D0434
  c->r[0]=c->lr; // 804D0438
  W32(c->r[1]+0x00000154u,c->r[0]); // 804D043C
  c->r[11]=c->r[1]+0x00000150u; // 804D0440
  c->lr=0x804D0448u; f_803A9BD0(c); // 804D0444
  c->r[8]=R32(c->r[5]+0x00000000u); // 804D0448
  c->r[28]=c->r[3]|c->r[3]; // 804D044C
  W32(c->r[1]+0x00000010u,c->r[4]); // 804D0450
  c->r[29]=c->r[5]|c->r[5]; // 804D0454
  cmps(c,0,(int32_t)c->r[8],0); // 804D0458
  c->r[30]=c->r[6]|c->r[6]; // 804D045C
  c->r[31]=c->r[7]|c->r[7]; // 804D0460
  if (!crb(c,2)) { goto L_804D0470; } // 804D0464
  c->r[3]=0u+0x00000000u; // 804D0468
  goto L_804D0FA4; // 804D046C
L_804D0470:;
  cmps(c,0,(int32_t)c->r[7],0); // 804D0470
  if (!crb(c,2)) { goto L_804D0480; } // 804D0474
  c->r[31]=0u+0x00000001u; // 804D0478
  goto L_804D048C; // 804D047C
L_804D0480:;
  cmps(c,0,(int32_t)c->r[7],16); // 804D0480
  if (!crb(c,1)) { goto L_804D048C; } // 804D0484
  c->r[31]=0u+0x00000010u; // 804D0488
L_804D048C:;
  c->r[0]=R32(c->r[8]+0x00000070u); // 804D048C
  c->r[4]=c->r[8]+0x0000004Cu; // 804D0490
  c->r[27]=R32(c->r[8]+0x00000068u); // 804D0494
  c->r[3]=c->r[29]|c->r[29]; // 804D0498
  c->r[15]=R32(c->r[4]+c->r[0]); // 804D049C
  c->r[16]=0u+0x00000000u; // 804D04A0
  c->lr=0x804D04A8u; f_804ACA9C(c); // 804D04A4
  c->r[14]=c->r[3]|c->r[3]; // 804D04A8
  c->r[3]=c->r[29]|c->r[29]; // 804D04AC
  c->lr=0x804D04B4u; f_804AC500(c); // 804D04B0
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 804D04B4
  c->r[6]=R32(c->r[29]+0x00000000u); // 804D04B8
  c->r[26]=rotl(c->r[15],2)&0xFFFFFFFCu; // 804D04BC
  c->r[0]=R8(c->r[6]+0x0000006Cu); // 804D04C0
  c->r[5]=c->r[5]+0x0000001Fu; // 804D04C4
  c->r[4]=rotl(c->r[5],0)&0xFFFFFFE0u; // 804D04C8
  cmps(c,0,(int32_t)c->r[0],0); // 804D04CC
  c->r[23]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 804D04D0
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 804D04D4
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)36); // 804D04D8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804D04DC
  if (crb(c,2)) { goto L_804D04F8; } // 804D04E0
  c->r[0]=c->r[4]+0x0000001Fu; // 804D04E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D04E8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 804D04EC
  W32(c->r[1]+0x000000F8u,c->r[0]); // 804D04F0
  goto L_804D0500; // 804D04F4
L_804D04F8:;
  c->r[0]=0u+0x00000000u; // 804D04F8
  W32(c->r[1]+0x000000F8u,c->r[0]); // 804D04FC
L_804D0500:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 804D0500
  c->r[4]=R8(c->r[6]+0x0000006Du); // 804D0504
  c->r[0]=rotl(c->r[14],2)&0xFFFFFFFCu; // 804D0508
  W32(c->r[1]+0x00000088u,c->r[0]); // 804D050C
  c->r[0]=0u-c->r[4]; // 804D0510
  c->r[0]=c->r[0]|c->r[4]; // 804D0514
  c->r[0]=sraw(c,c->r[0],31); // 804D0518
  c->r[0]=c->r[23]&c->r[0]; // 804D051C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 804D0520
  if (crb(c,2)) { goto L_804D0534; } // 804D0524
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)260); // 804D0528
  W32(c->r[1]+0x000000F0u,c->r[0]); // 804D052C
  goto L_804D053C; // 804D0530
L_804D0534:;
  c->r[0]=0u+0x00000000u; // 804D0534
  W32(c->r[1]+0x000000F0u,c->r[0]); // 804D0538
L_804D053C:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 804D053C
  if (crb(c,2)) { goto L_804D0550; } // 804D0540
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)100); // 804D0544
  W32(c->r[1]+0x000000ECu,c->r[0]); // 804D0548
  goto L_804D0558; // 804D054C
L_804D0550:;
  c->r[0]=0u+0x00000000u; // 804D0550
  W32(c->r[1]+0x000000ECu,c->r[0]); // 804D0554
L_804D0558:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 804D0558
  if (crb(c,2)) { goto L_804D056C; } // 804D055C
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)584); // 804D0560
  W32(c->r[1]+0x000000E8u,c->r[0]); // 804D0564
  goto L_804D0574; // 804D0568
L_804D056C:;
  c->r[0]=0u+0x00000000u; // 804D056C
  W32(c->r[1]+0x000000E8u,c->r[0]); // 804D0570
L_804D0574:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 804D0574
  if (crb(c,2)) { goto L_804D0588; } // 804D0578
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)40); // 804D057C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804D0580
  goto L_804D0590; // 804D0584
L_804D0588:;
  c->r[0]=0u+0x00000000u; // 804D0588
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804D058C
L_804D0590:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 804D0590
  c->r[4]=rotl(c->r[30],28)&0x00000001u; // 804D0594
  c->r[0]=rotl(c->r[14],3)&0xFFFFFFF8u; // 804D0598
  c->r[4]=0u-c->r[4]; // 804D059C
  c->r[0]=c->r[0]&c->r[4]; // 804D05A0
  W32(c->r[1]+0x000000E0u,c->r[0]); // 804D05A4
  if (crb(c,2)) { goto L_804D05B8; } // 804D05A8
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)12); // 804D05AC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 804D05B0
  goto L_804D05C0; // 804D05B4
L_804D05B8:;
  c->r[0]=0u+0x00000000u; // 804D05B8
  W32(c->r[1]+0x000000DCu,c->r[0]); // 804D05BC
L_804D05C0:;
  c->r[0]=rotl(c->r[30],0)&0x00000400u; cr0(c,c->r[0]); // 804D05C0
  c->r[6]=rotl(c->r[30],26)&0x00000001u; // 804D05C4
  c->r[5]=rotl(c->r[30],25)&0x00000001u; // 804D05C8
  c->r[4]=rotl(c->r[30],24)&0x00000001u; // 804D05CC
  c->r[10]=0u-c->r[6]; // 804D05D0
  c->r[0]=rotl(c->r[30],23)&0x00000001u; // 804D05D4
  c->r[9]=0u-c->r[5]; // 804D05D8
  c->r[8]=rotl(c->r[14],5)&0xFFFFFFE0u; // 804D05DC
  c->r[5]=0u-c->r[0]; // 804D05E0
  c->r[0]=c->r[3]&c->r[10]; // 804D05E4
  c->r[7]=0u-c->r[4]; // 804D05E8
  W32(c->r[1]+0x000000D8u,c->r[0]); // 804D05EC
  c->r[0]=c->r[8]&c->r[9]; // 804D05F0
  c->r[6]=rotl(c->r[14],7)&0xFFFFFF80u; // 804D05F4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 804D05F8
  c->r[0]=c->r[6]&c->r[7]; // 804D05FC
  c->r[4]=rotl(c->r[14],6)&0xFFFFFFC0u; // 804D0600
  W32(c->r[1]+0x000000D0u,c->r[0]); // 804D0604
  c->r[0]=c->r[4]&c->r[5]; // 804D0608
  W32(c->r[1]+0x000000CCu,c->r[0]); // 804D060C
  if (crb(c,2)) { goto L_804D0620; } // 804D0610
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)160); // 804D0614
  W32(c->r[1]+0x000000C8u,c->r[0]); // 804D0618
  goto L_804D0628; // 804D061C
L_804D0620:;
  c->r[0]=0u+0x00000000u; // 804D0620
  W32(c->r[1]+0x000000C8u,c->r[0]); // 804D0624
L_804D0628:;
  c->r[0]=rotl(c->r[30],0)&0x00001000u; cr0(c,c->r[0]); // 804D0628
  c->r[3]=rotl(c->r[14],9)&0xFFFFFE00u; // 804D062C
  c->r[0]=rotl(c->r[30],21)&0x00000001u; // 804D0630
  c->r[22]=0u+0x00000000u; // 804D0634
  c->r[4]=0u-c->r[0]; // 804D0638
  c->r[0]=0u+0x00000000u; // 804D063C
  W32(c->r[1]+0x00000084u,c->r[0]); // 804D0640
  c->r[0]=c->r[3]&c->r[4]; // 804D0644
  W32(c->r[1]+0x000000C4u,c->r[0]); // 804D0648
  if (crb(c,2)) { goto L_804D06E0; } // 804D064C
  c->r[3]=c->r[29]|c->r[29]; // 804D0650
  c->lr=0x804D0658u; f_804AC62C(c); // 804D0654
  c->r[17]=c->r[3]|c->r[3]; // 804D0658
  c->r[3]=c->r[29]|c->r[29]; // 804D065C
  c->lr=0x804D0664u; f_804ACB78(c); // 804D0660
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 804D0664
  c->r[15]=c->r[3]|c->r[3]; // 804D0668
  W32(c->r[1]+0x00000084u,c->r[0]); // 804D066C
  c->r[18]=0u+0x00000000u; // 804D0670
  goto L_804D06D8; // 804D0674
L_804D0678:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0678
  c->r[4]=c->r[18]|c->r[18]; // 804D067C
  c->lr=0x804D0684u; f_804AC5D8(c); // 804D0680
  c->r[14]=c->r[3]|c->r[3]; // 804D0684
  c->r[19]=0u+0x00000000u; // 804D0688
  goto L_804D06B4; // 804D068C
L_804D0690:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0690
  c->r[4]=c->r[19]|c->r[19]; // 804D0694
  c->lr=0x804D069Cu; f_804ACB24(c); // 804D0698
  W32(c->r[1]+0x00000038u,c->r[3]); // 804D069C
  c->r[3]=c->r[1]+0x00000038u; // 804D06A0
  c->lr=0x804D06A8u; f_804AD250(c); // 804D06A4
  cmpu(c,0,c->r[14],c->r[3]); // 804D06A8
  if (crb(c,2)) { goto L_804D06BC; } // 804D06AC
  c->r[19]=c->r[19]+0x00000001u; // 804D06B0
L_804D06B4:;
  cmpu(c,0,c->r[19],c->r[15]); // 804D06B4
  if (crb(c,0)) { IRQCHK(c); goto L_804D0690; } // 804D06B8
L_804D06BC:;
  cmpu(c,0,c->r[19],c->r[15]); // 804D06BC
  if (crb(c,2)) { goto L_804D06D4; } // 804D06C0
  c->r[3]=R32(c->r[14]+0x00000000u); // 804D06C4
  c->r[0]=c->r[3]+0x0000001Fu; // 804D06C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D06CC
  c->r[22]=c->r[22]+c->r[0]; // 804D06D0
L_804D06D4:;
  c->r[18]=c->r[18]+0x00000001u; // 804D06D4
L_804D06D8:;
  cmpu(c,0,c->r[18],c->r[17]); // 804D06D8
  if (crb(c,0)) { IRQCHK(c); goto L_804D0678; } // 804D06DC
L_804D06E0:;
  c->r[0]=rotl(c->r[30],0)&0x00002000u; cr0(c,c->r[0]); // 804D06E0
  c->r[21]=0u+0x00000000u; // 804D06E4
  c->r[0]=0u+0x00000000u; // 804D06E8
  W32(c->r[1]+0x00000080u,c->r[0]); // 804D06EC
  if (crb(c,2)) { goto L_804D0784; } // 804D06F0
  c->r[3]=c->r[29]|c->r[29]; // 804D06F4
  c->lr=0x804D06FCu; f_804AC758(c); // 804D06F8
  c->r[17]=c->r[3]|c->r[3]; // 804D06FC
  c->r[3]=c->r[29]|c->r[29]; // 804D0700
  c->lr=0x804D0708u; f_804ACB78(c); // 804D0704
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 804D0708
  c->r[15]=c->r[3]|c->r[3]; // 804D070C
  W32(c->r[1]+0x00000080u,c->r[0]); // 804D0710
  c->r[18]=0u+0x00000000u; // 804D0714
  goto L_804D077C; // 804D0718
L_804D071C:;
  c->r[3]=c->r[29]|c->r[29]; // 804D071C
  c->r[4]=c->r[18]|c->r[18]; // 804D0720
  c->lr=0x804D0728u; f_804AC704(c); // 804D0724
  c->r[14]=c->r[3]|c->r[3]; // 804D0728
  c->r[19]=0u+0x00000000u; // 804D072C
  goto L_804D0758; // 804D0730
L_804D0734:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0734
  c->r[4]=c->r[19]|c->r[19]; // 804D0738
  c->lr=0x804D0740u; f_804ACB24(c); // 804D073C
  W32(c->r[1]+0x00000034u,c->r[3]); // 804D0740
  c->r[3]=c->r[1]+0x00000034u; // 804D0744
  c->lr=0x804D074Cu; f_804AD298(c); // 804D0748
  cmpu(c,0,c->r[14],c->r[3]); // 804D074C
  if (crb(c,2)) { goto L_804D0760; } // 804D0750
  c->r[19]=c->r[19]+0x00000001u; // 804D0754
L_804D0758:;
  cmpu(c,0,c->r[19],c->r[15]); // 804D0758
  if (crb(c,0)) { IRQCHK(c); goto L_804D0734; } // 804D075C
L_804D0760:;
  cmpu(c,0,c->r[19],c->r[15]); // 804D0760
  if (crb(c,2)) { goto L_804D0778; } // 804D0764
  c->r[3]=R32(c->r[14]+0x00000000u); // 804D0768
  c->r[0]=c->r[3]+0x0000001Fu; // 804D076C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0770
  c->r[21]=c->r[21]+c->r[0]; // 804D0774
L_804D0778:;
  c->r[18]=c->r[18]+0x00000001u; // 804D0778
L_804D077C:;
  cmpu(c,0,c->r[18],c->r[17]); // 804D077C
  if (crb(c,0)) { IRQCHK(c); goto L_804D071C; } // 804D0780
L_804D0784:;
  c->r[0]=rotl(c->r[30],0)&0x00004000u; cr0(c,c->r[0]); // 804D0784
  c->r[20]=0u+0x00000000u; // 804D0788
  c->r[19]=0u+0x00000000u; // 804D078C
  if (crb(c,2)) { goto L_804D0848; } // 804D0790
  c->r[3]=c->r[29]|c->r[29]; // 804D0794
  c->lr=0x804D079Cu; f_804AC884(c); // 804D0798
  c->r[17]=c->r[3]|c->r[3]; // 804D079C
  c->r[3]=c->r[29]|c->r[29]; // 804D07A0
  c->lr=0x804D07A8u; f_804ACB78(c); // 804D07A4
  c->r[15]=c->r[3]|c->r[3]; // 804D07A8
  c->r[20]=rotl(c->r[17],2)&0xFFFFFFFCu; // 804D07AC
  c->r[24]=0u+0x00000000u; // 804D07B0
  goto L_804D0840; // 804D07B4
L_804D07B8:;
  c->r[3]=c->r[29]|c->r[29]; // 804D07B8
  c->r[4]=c->r[24]|c->r[24]; // 804D07BC
  c->lr=0x804D07C4u; f_804AC830(c); // 804D07C0
  c->r[14]=c->r[3]|c->r[3]; // 804D07C4
  c->r[25]=0u+0x00000000u; // 804D07C8
  goto L_804D081C; // 804D07CC
L_804D07D0:;
  c->r[3]=c->r[29]|c->r[29]; // 804D07D0
  c->r[4]=c->r[25]|c->r[25]; // 804D07D4
  c->lr=0x804D07DCu; f_804ACB24(c); // 804D07D8
  W32(c->r[1]+0x00000030u,c->r[3]); // 804D07DC
  c->r[3]=c->r[1]+0x00000030u; // 804D07E0
  c->r[18]=0u+0x00000001u; // 804D07E4
  c->r[4]=0u+0x00000000u; // 804D07E8
  c->lr=0x804D07F0u; f_804AD2F4(c); // 804D07EC
  cmpu(c,0,c->r[14],c->r[3]); // 804D07F0
  if (crb(c,2)) { goto L_804D0810; } // 804D07F4
  c->r[3]=c->r[1]+0x00000030u; // 804D07F8
  c->r[4]=0u+0x00000001u; // 804D07FC
  c->lr=0x804D0804u; f_804AD2F4(c); // 804D0800
  cmpu(c,0,c->r[14],c->r[3]); // 804D0804
  if (crb(c,2)) { goto L_804D0810; } // 804D0808
  c->r[18]=0u+0x00000000u; // 804D080C
L_804D0810:;
  cmps(c,0,(int32_t)c->r[18],0); // 804D0810
  if (!crb(c,2)) { goto L_804D0824; } // 804D0814
  c->r[25]=c->r[25]+0x00000001u; // 804D0818
L_804D081C:;
  cmpu(c,0,c->r[25],c->r[15]); // 804D081C
  if (crb(c,0)) { IRQCHK(c); goto L_804D07D0; } // 804D0820
L_804D0824:;
  cmpu(c,0,c->r[25],c->r[15]); // 804D0824
  if (crb(c,2)) { goto L_804D083C; } // 804D0828
  c->r[3]=R32(c->r[14]+0x00000000u); // 804D082C
  c->r[0]=c->r[3]+0x0000001Fu; // 804D0830
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0834
  c->r[19]=c->r[19]+c->r[0]; // 804D0838
L_804D083C:;
  c->r[24]=c->r[24]+0x00000001u; // 804D083C
L_804D0840:;
  cmpu(c,0,c->r[24],c->r[17]); // 804D0840
  if (crb(c,0)) { IRQCHK(c); goto L_804D07B8; } // 804D0844
L_804D0848:;
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 804D0848
  c->r[0]=R32(c->r[1]+0x00000010u); // 804D084C
  c->r[3]=c->r[3]+0x000001BFu; // 804D0850
  cmps(c,0,(int32_t)c->r[0],0); // 804D0854
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFE0u; // 804D0858
  c->r[3]=c->r[0]+c->r[26]; // 804D085C
  W32(c->r[1]+0x000000C0u,c->r[0]); // 804D0860
  c->r[0]=c->r[3]+0x0000001Fu; // 804D0864
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0868
  c->r[3]=c->r[0]+c->r[23]; // 804D086C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 804D0870
  c->r[0]=c->r[3]+0x0000001Fu; // 804D0874
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0878
  W32(c->r[1]+0x000000B8u,c->r[0]); // 804D087C
  c->r[3]=c->r[0]|c->r[0]; // 804D0880
  c->r[0]=R32(c->r[1]+0x000000F8u); // 804D0884
  c->r[3]=c->r[3]+c->r[0]; // 804D0888
  c->r[0]=c->r[3]+0x0000001Fu; // 804D088C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0890
  W32(c->r[1]+0x000000B4u,c->r[0]); // 804D0894
  c->r[3]=c->r[0]|c->r[0]; // 804D0898
  c->r[0]=R32(c->r[1]+0x000000F4u); // 804D089C
  c->r[3]=c->r[3]+c->r[0]; // 804D08A0
  c->r[0]=c->r[3]+0x00000003u; // 804D08A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D08A8
  W32(c->r[1]+0x000000B0u,c->r[0]); // 804D08AC
  c->r[3]=c->r[0]|c->r[0]; // 804D08B0
  c->r[0]=R32(c->r[1]+0x00000088u); // 804D08B4
  c->r[3]=c->r[3]+c->r[0]; // 804D08B8
  c->r[0]=c->r[3]+0x0000001Fu; // 804D08BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D08C0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804D08C4
  c->r[3]=c->r[0]|c->r[0]; // 804D08C8
  c->r[0]=R32(c->r[1]+0x000000F0u); // 804D08CC
  c->r[3]=c->r[3]+c->r[0]; // 804D08D0
  c->r[0]=c->r[3]+0x00000003u; // 804D08D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D08D8
  W32(c->r[1]+0x000000A8u,c->r[0]); // 804D08DC
  c->r[3]=c->r[0]|c->r[0]; // 804D08E0
  c->r[0]=R32(c->r[1]+0x000000ECu); // 804D08E4
  c->r[3]=c->r[3]+c->r[0]; // 804D08E8
  c->r[0]=c->r[3]+0x00000003u; // 804D08EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D08F0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804D08F4
  c->r[3]=c->r[0]|c->r[0]; // 804D08F8
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D08FC
  c->r[3]=c->r[3]+c->r[0]; // 804D0900
  c->r[0]=c->r[3]+0x00000003u; // 804D0904
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D0908
  W32(c->r[1]+0x000000A0u,c->r[0]); // 804D090C
  c->r[3]=c->r[0]|c->r[0]; // 804D0910
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804D0914
  c->r[3]=c->r[3]+c->r[0]; // 804D0918
  c->r[0]=c->r[3]+0x00000003u; // 804D091C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D0920
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 804D0924
  c->r[3]=c->r[0]|c->r[0]; // 804D0928
  c->r[0]=R32(c->r[1]+0x000000E0u); // 804D092C
  c->r[3]=c->r[3]+c->r[0]; // 804D0930
  c->r[0]=c->r[3]+0x00000003u; // 804D0934
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D0938
  W32(c->r[1]+0x00000098u,c->r[0]); // 804D093C
  c->r[3]=c->r[0]|c->r[0]; // 804D0940
  c->r[0]=R32(c->r[1]+0x000000DCu); // 804D0944
  c->r[3]=c->r[3]+c->r[0]; // 804D0948
  c->r[0]=c->r[3]+0x00000003u; // 804D094C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D0950
  W32(c->r[1]+0x00000094u,c->r[0]); // 804D0954
  c->r[3]=c->r[0]|c->r[0]; // 804D0958
  c->r[0]=R32(c->r[1]+0x000000D8u); // 804D095C
  c->r[3]=c->r[3]+c->r[0]; // 804D0960
  c->r[0]=c->r[3]+0x0000001Fu; // 804D0964
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0968
  W32(c->r[1]+0x00000090u,c->r[0]); // 804D096C
  c->r[3]=c->r[0]|c->r[0]; // 804D0970
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804D0974
  c->r[3]=c->r[3]+c->r[0]; // 804D0978
  c->r[0]=c->r[3]+0x0000001Fu; // 804D097C
  c->r[14]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0980
  c->r[0]=R32(c->r[1]+0x000000D0u); // 804D0984
  c->r[3]=c->r[14]+c->r[0]; // 804D0988
  c->r[0]=c->r[3]+0x0000001Fu; // 804D098C
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0990
  c->r[0]=R32(c->r[1]+0x000000CCu); // 804D0994
  c->r[3]=c->r[26]+c->r[0]; // 804D0998
  c->r[0]=c->r[3]+0x0000001Fu; // 804D099C
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09A0
  c->r[0]=R32(c->r[1]+0x000000C8u); // 804D09A4
  c->r[3]=c->r[25]+c->r[0]; // 804D09A8
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09AC
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09B0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 804D09B4
  c->r[3]=c->r[24]+c->r[0]; // 804D09B8
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09BC
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09C0
  c->r[0]=R32(c->r[1]+0x00000084u); // 804D09C4
  c->r[18]=c->r[23]+c->r[0]; // 804D09C8
  c->r[0]=R32(c->r[1]+0x00000080u); // 804D09CC
  c->r[17]=c->r[18]+c->r[0]; // 804D09D0
  c->r[3]=c->r[17]+c->r[20]; // 804D09D4
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09D8
  c->r[15]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09DC
  c->r[3]=c->r[15]+c->r[22]; // 804D09E0
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09E4
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09E8
  c->r[3]=c->r[22]+c->r[21]; // 804D09EC
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09F0
  c->r[21]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D09F4
  c->r[3]=c->r[21]+c->r[19]; // 804D09F8
  c->r[0]=c->r[3]+0x0000001Fu; // 804D09FC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0A00
  if (crb(c,2)) { goto L_804D0A10; } // 804D0A04
  c->r[3]=R32(c->r[1]+0x00000010u); // 804D0A08
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D0A0C
L_804D0A10:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D0A10
  if (crb(c,2)) { goto L_804D0FA0; } // 804D0A14
  c->r[3]=c->r[28]|c->r[28]; // 804D0A18
  c->lr=0x804D0A20u; f_803C4D08(c); // 804D0A1C
  cmps(c,0,(int32_t)c->r[3],0); // 804D0A20
  c->r[16]=c->r[3]|c->r[3]; // 804D0A24
  if (!crb(c,2)) { goto L_804D0A34; } // 804D0A28
  c->r[3]=0u+0x00000000u; // 804D0A2C
  goto L_804D0FA4; // 804D0A30
L_804D0A34:;
  c->r[0]=0u+0x00000000u; // 804D0A34
  c->r[19]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[19]); // 804D0A38
  W32(c->r[1]+0x00000040u,c->r[0]); // 804D0A3C
  if (!crb(c,2)) { goto L_804D0A4C; } // 804D0A40
  c->r[0]=c->r[0]|0x00000001u; // 804D0A44
  W32(c->r[1]+0x00000040u,c->r[0]); // 804D0A48
L_804D0A4C:;
  c->r[0]=R32(c->r[1]+0x000000D8u); // 804D0A4C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0A50
  if (crb(c,2)) { goto L_804D0A64; } // 804D0A54
  c->r[0]=R32(c->r[1]+0x00000094u); // 804D0A58
  c->r[4]=c->r[3]+c->r[0]; // 804D0A5C
  goto L_804D0A68; // 804D0A60
L_804D0A64:;
  c->r[4]=0u+0x00000000u; // 804D0A64
L_804D0A68:;
  c->r[0]=R32(c->r[1]+0x000000F0u); // 804D0A68
  W32(c->r[1]+0x00000044u,c->r[4]); // 804D0A6C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0A70
  if (crb(c,2)) { goto L_804D0A84; } // 804D0A74
  c->r[0]=R32(c->r[1]+0x000000ACu); // 804D0A78
  c->r[4]=c->r[3]+c->r[0]; // 804D0A7C
  goto L_804D0A88; // 804D0A80
L_804D0A84:;
  c->r[4]=0u+0x00000000u; // 804D0A84
L_804D0A88:;
  c->r[0]=R32(c->r[1]+0x000000ECu); // 804D0A88
  W32(c->r[1]+0x00000048u,c->r[4]); // 804D0A8C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0A90
  if (crb(c,2)) { goto L_804D0AA4; } // 804D0A94
  c->r[0]=R32(c->r[1]+0x000000A8u); // 804D0A98
  c->r[4]=c->r[3]+c->r[0]; // 804D0A9C
  goto L_804D0AA8; // 804D0AA0
L_804D0AA4:;
  c->r[4]=0u+0x00000000u; // 804D0AA4
L_804D0AA8:;
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D0AA8
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 804D0AAC
  cmps(c,0,(int32_t)c->r[0],0); // 804D0AB0
  if (crb(c,2)) { goto L_804D0AC4; } // 804D0AB4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804D0AB8
  c->r[4]=c->r[3]+c->r[0]; // 804D0ABC
  goto L_804D0AC8; // 804D0AC0
L_804D0AC4:;
  c->r[4]=0u+0x00000000u; // 804D0AC4
L_804D0AC8:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804D0AC8
  W32(c->r[1]+0x00000050u,c->r[4]); // 804D0ACC
  cmps(c,0,(int32_t)c->r[0],0); // 804D0AD0
  if (crb(c,2)) { goto L_804D0AE4; } // 804D0AD4
  c->r[0]=R32(c->r[1]+0x000000A0u); // 804D0AD8
  c->r[4]=c->r[3]+c->r[0]; // 804D0ADC
  goto L_804D0AE8; // 804D0AE0
L_804D0AE4:;
  c->r[4]=0u+0x00000000u; // 804D0AE4
L_804D0AE8:;
  c->r[0]=R32(c->r[1]+0x000000E0u); // 804D0AE8
  W32(c->r[1]+0x00000054u,c->r[4]); // 804D0AEC
  cmps(c,0,(int32_t)c->r[0],0); // 804D0AF0
  if (crb(c,2)) { goto L_804D0B04; } // 804D0AF4
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 804D0AF8
  c->r[4]=c->r[3]+c->r[0]; // 804D0AFC
  goto L_804D0B08; // 804D0B00
L_804D0B04:;
  c->r[4]=0u+0x00000000u; // 804D0B04
L_804D0B08:;
  c->r[0]=R32(c->r[1]+0x000000DCu); // 804D0B08
  W32(c->r[1]+0x00000058u,c->r[4]); // 804D0B0C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0B10
  if (crb(c,2)) { goto L_804D0B24; } // 804D0B14
  c->r[0]=R32(c->r[1]+0x00000098u); // 804D0B18
  c->r[4]=c->r[3]+c->r[0]; // 804D0B1C
  goto L_804D0B28; // 804D0B20
L_804D0B24:;
  c->r[4]=0u+0x00000000u; // 804D0B24
L_804D0B28:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804D0B28
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 804D0B2C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0B30
  if (crb(c,2)) { goto L_804D0B44; } // 804D0B34
  c->r[0]=R32(c->r[1]+0x00000090u); // 804D0B38
  c->r[4]=c->r[3]+c->r[0]; // 804D0B3C
  goto L_804D0B48; // 804D0B40
L_804D0B44:;
  c->r[4]=0u+0x00000000u; // 804D0B44
L_804D0B48:;
  c->r[0]=R32(c->r[1]+0x000000D0u); // 804D0B48
  W32(c->r[1]+0x00000060u,c->r[4]); // 804D0B4C
  cmps(c,0,(int32_t)c->r[0],0); // 804D0B50
  if (crb(c,2)) { goto L_804D0B60; } // 804D0B54
  c->r[4]=c->r[3]+c->r[14]; // 804D0B58
  goto L_804D0B64; // 804D0B5C
L_804D0B60:;
  c->r[4]=0u+0x00000000u; // 804D0B60
L_804D0B64:;
  c->r[0]=R32(c->r[1]+0x000000CCu); // 804D0B64
  W32(c->r[1]+0x00000064u,c->r[4]); // 804D0B68
  cmps(c,0,(int32_t)c->r[0],0); // 804D0B6C
  if (crb(c,2)) { goto L_804D0B7C; } // 804D0B70
  c->r[4]=c->r[3]+c->r[26]; // 804D0B74
  goto L_804D0B80; // 804D0B78
L_804D0B7C:;
  c->r[4]=0u+0x00000000u; // 804D0B7C
L_804D0B80:;
  c->r[0]=R32(c->r[1]+0x000000C8u); // 804D0B80
  W32(c->r[1]+0x00000068u,c->r[4]); // 804D0B84
  cmps(c,0,(int32_t)c->r[0],0); // 804D0B88
  if (crb(c,2)) { goto L_804D0B98; } // 804D0B8C
  c->r[4]=c->r[3]+c->r[25]; // 804D0B90
  goto L_804D0B9C; // 804D0B94
L_804D0B98:;
  c->r[4]=0u+0x00000000u; // 804D0B98
L_804D0B9C:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 804D0B9C
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 804D0BA0
  cmps(c,0,(int32_t)c->r[0],0); // 804D0BA4
  if (crb(c,2)) { goto L_804D0BB4; } // 804D0BA8
  c->r[4]=c->r[3]+c->r[24]; // 804D0BAC
  goto L_804D0BB8; // 804D0BB0
L_804D0BB4:;
  c->r[4]=0u+0x00000000u; // 804D0BB4
L_804D0BB8:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 804D0BB8
  W32(c->r[1]+0x00000070u,c->r[4]); // 804D0BBC
  cmps(c,0,(int32_t)c->r[0],0); // 804D0BC0
  if (crb(c,2)) { goto L_804D0BD0; } // 804D0BC4
  c->r[4]=c->r[3]+c->r[23]; // 804D0BC8
  goto L_804D0BD4; // 804D0BCC
L_804D0BD0:;
  c->r[4]=0u+0x00000000u; // 804D0BD0
L_804D0BD4:;
  c->r[0]=R32(c->r[1]+0x00000080u); // 804D0BD4
  W32(c->r[1]+0x00000074u,c->r[4]); // 804D0BD8
  cmps(c,0,(int32_t)c->r[0],0); // 804D0BDC
  if (crb(c,2)) { goto L_804D0BEC; } // 804D0BE0
  c->r[0]=c->r[3]+c->r[18]; // 804D0BE4
  goto L_804D0BF0; // 804D0BE8
L_804D0BEC:;
  c->r[0]=0u+0x00000000u; // 804D0BEC
L_804D0BF0:;
  cmps(c,0,(int32_t)c->r[20],0); // 804D0BF0
  W32(c->r[1]+0x00000078u,c->r[0]); // 804D0BF4
  if (crb(c,2)) { goto L_804D0C04; } // 804D0BF8
  c->r[0]=c->r[3]+c->r[17]; // 804D0BFC
  goto L_804D0C08; // 804D0C00
L_804D0C04:;
  c->r[0]=0u+0x00000000u; // 804D0C04
L_804D0C08:;
  c->r[18]=R32(c->r[1]+0x00000074u); // 804D0C08
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804D0C0C
  cmps(c,0,(int32_t)c->r[18],0); // 804D0C10
  if (crb(c,2)) { goto L_804D0CC8; } // 804D0C14
  c->r[3]=c->r[29]|c->r[29]; // 804D0C18
  c->lr=0x804D0C20u; f_804AC62C(c); // 804D0C1C
  c->r[17]=c->r[3]|c->r[3]; // 804D0C20
  c->r[3]=c->r[29]|c->r[29]; // 804D0C24
  c->lr=0x804D0C2Cu; f_804ACB78(c); // 804D0C28
  c->r[14]=c->r[3]|c->r[3]; // 804D0C2C
  c->r[20]=0u+0x00000000u; // 804D0C30
  goto L_804D0CC0; // 804D0C34
L_804D0C38:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0C38
  c->r[4]=c->r[20]|c->r[20]; // 804D0C3C
  c->lr=0x804D0C44u; f_804AC5D8(c); // 804D0C40
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 804D0C44
  c->r[23]=0u+0x00000000u; // 804D0C48
  goto L_804D0C78; // 804D0C4C
L_804D0C50:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0C50
  c->r[4]=c->r[23]|c->r[23]; // 804D0C54
  c->lr=0x804D0C5Cu; f_804ACB24(c); // 804D0C58
  W32(c->r[1]+0x00000028u,c->r[3]); // 804D0C5C
  c->r[3]=c->r[1]+0x00000028u; // 804D0C60
  c->lr=0x804D0C68u; f_804AD250(c); // 804D0C64
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804D0C68
  cmpu(c,0,c->r[0],c->r[3]); // 804D0C6C
  if (crb(c,2)) { goto L_804D0C80; } // 804D0C70
  c->r[23]=c->r[23]+0x00000001u; // 804D0C74
L_804D0C78:;
  cmpu(c,0,c->r[23],c->r[14]); // 804D0C78
  if (crb(c,0)) { IRQCHK(c); goto L_804D0C50; } // 804D0C7C
L_804D0C80:;
  cmpu(c,0,c->r[23],c->r[14]); // 804D0C80
  if (crb(c,2)) { goto L_804D0CB0; } // 804D0C84
  c->r[4]=c->r[16]+c->r[15]; // 804D0C88
  c->r[3]=c->r[1]+0x0000002Cu; // 804D0C8C
  W32(c->r[18]+0x00000000u,c->r[4]); // 804D0C90
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 804D0C94
  c->r[5]=R32(c->r[5]+0x00000000u); // 804D0C98
  c->r[0]=c->r[5]+0x0000001Fu; // 804D0C9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0CA0
  c->r[15]=c->r[15]+c->r[0]; // 804D0CA4
  c->lr=0x804D0CACu; f_804B0230(c); // 804D0CA8
  goto L_804D0CB8; // 804D0CAC
L_804D0CB0:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804D0CB0
  W32(c->r[18]+0x00000000u,c->r[0]); // 804D0CB4
L_804D0CB8:;
  c->r[18]=c->r[18]+0x00000004u; // 804D0CB8
  c->r[20]=c->r[20]+0x00000001u; // 804D0CBC
L_804D0CC0:;
  cmpu(c,0,c->r[20],c->r[17]); // 804D0CC0
  if (crb(c,0)) { IRQCHK(c); goto L_804D0C38; } // 804D0CC4
L_804D0CC8:;
  c->r[17]=R32(c->r[1]+0x00000078u); // 804D0CC8
  cmps(c,0,(int32_t)c->r[17],0); // 804D0CCC
  if (crb(c,2)) { goto L_804D0D84; } // 804D0CD0
  c->r[3]=c->r[29]|c->r[29]; // 804D0CD4
  c->lr=0x804D0CDCu; f_804AC758(c); // 804D0CD8
  c->r[15]=c->r[3]|c->r[3]; // 804D0CDC
  c->r[3]=c->r[29]|c->r[29]; // 804D0CE0
  c->lr=0x804D0CE8u; f_804ACB78(c); // 804D0CE4
  c->r[14]=c->r[3]|c->r[3]; // 804D0CE8
  c->r[18]=0u+0x00000000u; // 804D0CEC
  goto L_804D0D7C; // 804D0CF0
L_804D0CF4:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0CF4
  c->r[4]=c->r[18]|c->r[18]; // 804D0CF8
  c->lr=0x804D0D00u; f_804AC704(c); // 804D0CFC
  W32(c->r[1]+0x00000024u,c->r[3]); // 804D0D00
  c->r[20]=0u+0x00000000u; // 804D0D04
  goto L_804D0D34; // 804D0D08
L_804D0D0C:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0D0C
  c->r[4]=c->r[20]|c->r[20]; // 804D0D10
  c->lr=0x804D0D18u; f_804ACB24(c); // 804D0D14
  W32(c->r[1]+0x00000020u,c->r[3]); // 804D0D18
  c->r[3]=c->r[1]+0x00000020u; // 804D0D1C
  c->lr=0x804D0D24u; f_804AD298(c); // 804D0D20
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D0D24
  cmpu(c,0,c->r[0],c->r[3]); // 804D0D28
  if (crb(c,2)) { goto L_804D0D3C; } // 804D0D2C
  c->r[20]=c->r[20]+0x00000001u; // 804D0D30
L_804D0D34:;
  cmpu(c,0,c->r[20],c->r[14]); // 804D0D34
  if (crb(c,0)) { IRQCHK(c); goto L_804D0D0C; } // 804D0D38
L_804D0D3C:;
  cmpu(c,0,c->r[20],c->r[14]); // 804D0D3C
  if (crb(c,2)) { goto L_804D0D6C; } // 804D0D40
  c->r[4]=c->r[16]+c->r[22]; // 804D0D44
  c->r[3]=c->r[1]+0x00000024u; // 804D0D48
  W32(c->r[17]+0x00000000u,c->r[4]); // 804D0D4C
  c->r[5]=R32(c->r[1]+0x00000024u); // 804D0D50
  c->r[5]=R32(c->r[5]+0x00000000u); // 804D0D54
  c->r[0]=c->r[5]+0x0000001Fu; // 804D0D58
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0D5C
  c->r[22]=c->r[22]+c->r[0]; // 804D0D60
  c->lr=0x804D0D68u; f_804B0300(c); // 804D0D64
  goto L_804D0D74; // 804D0D68
L_804D0D6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D0D6C
  W32(c->r[17]+0x00000000u,c->r[0]); // 804D0D70
L_804D0D74:;
  c->r[17]=c->r[17]+0x00000004u; // 804D0D74
  c->r[18]=c->r[18]+0x00000001u; // 804D0D78
L_804D0D7C:;
  cmpu(c,0,c->r[18],c->r[15]); // 804D0D7C
  if (crb(c,0)) { IRQCHK(c); goto L_804D0CF4; } // 804D0D80
L_804D0D84:;
  c->r[17]=R32(c->r[1]+0x0000007Cu); // 804D0D84
  cmps(c,0,(int32_t)c->r[17],0); // 804D0D88
  if (crb(c,2)) { goto L_804D0E6C; } // 804D0D8C
  c->r[3]=c->r[29]|c->r[29]; // 804D0D90
  c->lr=0x804D0D98u; f_804AC884(c); // 804D0D94
  c->r[15]=c->r[3]|c->r[3]; // 804D0D98
  c->r[3]=c->r[29]|c->r[29]; // 804D0D9C
  c->lr=0x804D0DA4u; f_804ACB78(c); // 804D0DA0
  c->r[14]=c->r[3]|c->r[3]; // 804D0DA4
  c->r[18]=0u+0x00000000u; // 804D0DA8
  goto L_804D0E64; // 804D0DAC
L_804D0DB0:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0DB0
  c->r[4]=c->r[18]|c->r[18]; // 804D0DB4
  c->lr=0x804D0DBCu; f_804AC830(c); // 804D0DB8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804D0DBC
  c->r[22]=0u+0x00000000u; // 804D0DC0
  goto L_804D0E1C; // 804D0DC4
L_804D0DC8:;
  c->r[3]=c->r[29]|c->r[29]; // 804D0DC8
  c->r[4]=c->r[22]|c->r[22]; // 804D0DCC
  c->lr=0x804D0DD4u; f_804ACB24(c); // 804D0DD0
  W32(c->r[1]+0x00000018u,c->r[3]); // 804D0DD4
  c->r[3]=c->r[1]+0x00000018u; // 804D0DD8
  c->r[20]=0u+0x00000001u; // 804D0DDC
  c->r[4]=0u+0x00000000u; // 804D0DE0
  c->lr=0x804D0DE8u; f_804AD2F4(c); // 804D0DE4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D0DE8
  cmpu(c,0,c->r[0],c->r[3]); // 804D0DEC
  if (crb(c,2)) { goto L_804D0E10; } // 804D0DF0
  c->r[3]=c->r[1]+0x00000018u; // 804D0DF4
  c->r[4]=0u+0x00000001u; // 804D0DF8
  c->lr=0x804D0E00u; f_804AD2F4(c); // 804D0DFC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D0E00
  cmpu(c,0,c->r[0],c->r[3]); // 804D0E04
  if (crb(c,2)) { goto L_804D0E10; } // 804D0E08
  c->r[20]=0u+0x00000000u; // 804D0E0C
L_804D0E10:;
  cmps(c,0,(int32_t)c->r[20],0); // 804D0E10
  if (!crb(c,2)) { goto L_804D0E24; } // 804D0E14
  c->r[22]=c->r[22]+0x00000001u; // 804D0E18
L_804D0E1C:;
  cmpu(c,0,c->r[22],c->r[14]); // 804D0E1C
  if (crb(c,0)) { IRQCHK(c); goto L_804D0DC8; } // 804D0E20
L_804D0E24:;
  cmpu(c,0,c->r[22],c->r[14]); // 804D0E24
  if (crb(c,2)) { goto L_804D0E54; } // 804D0E28
  c->r[4]=c->r[16]+c->r[21]; // 804D0E2C
  c->r[3]=c->r[1]+0x0000001Cu; // 804D0E30
  W32(c->r[17]+0x00000000u,c->r[4]); // 804D0E34
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 804D0E38
  c->r[5]=R32(c->r[5]+0x00000000u); // 804D0E3C
  c->r[0]=c->r[5]+0x0000001Fu; // 804D0E40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 804D0E44
  c->r[21]=c->r[21]+c->r[0]; // 804D0E48
  c->lr=0x804D0E50u; f_804B03DC(c); // 804D0E4C
  goto L_804D0E5C; // 804D0E50
L_804D0E54:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D0E54
  W32(c->r[17]+0x00000000u,c->r[0]); // 804D0E58
L_804D0E5C:;
  c->r[17]=c->r[17]+0x00000004u; // 804D0E5C
  c->r[18]=c->r[18]+0x00000001u; // 804D0E60
L_804D0E64:;
  cmpu(c,0,c->r[18],c->r[15]); // 804D0E64
  if (crb(c,0)) { IRQCHK(c); goto L_804D0DB0; } // 804D0E68
L_804D0E6C:;
  cmps(c,0,(int32_t)c->r[19],0); // 804D0E6C
  c->r[14]=0u+0x00000000u; // 804D0E70
  if (crb(c,2)) { goto L_804D0E7C; } // 804D0E74
  c->r[14]=c->r[14]|0x00000001u; // 804D0E78
L_804D0E7C:;
  cmps(c,0,(int32_t)c->r[16],0); // 804D0E7C
  if (crb(c,2)) { goto L_804D0F98; } // 804D0E80
  c->r[0]=R32(c->r[1]+0x000000F8u); // 804D0E84
  c->r[3]=R32(c->r[29]+0x00000000u); // 804D0E88
  cmps(c,0,(int32_t)c->r[0],0); // 804D0E8C
  if (crb(c,2)) { goto L_804D0EA0; } // 804D0E90
  c->r[0]=R32(c->r[1]+0x000000B8u); // 804D0E94
  c->r[9]=c->r[16]+c->r[0]; // 804D0E98
  goto L_804D0EA4; // 804D0E9C
L_804D0EA0:;
  c->r[9]=0u+0x00000000u; // 804D0EA0
L_804D0EA4:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 804D0EA4
  cmps(c,0,(int32_t)c->r[0],0); // 804D0EA8
  if (crb(c,2)) { goto L_804D0EBC; } // 804D0EAC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 804D0EB0
  c->r[10]=c->r[16]+c->r[0]; // 804D0EB4
  goto L_804D0EC0; // 804D0EB8
L_804D0EBC:;
  c->r[10]=0u+0x00000000u; // 804D0EBC
L_804D0EC0:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 804D0EC0
  c->r[3]=c->r[16]|c->r[16]; // 804D0EC4
  c->r[0]=R32(c->r[1]+0x000000C0u); // 804D0EC8
  c->r[4]=c->r[28]|c->r[28]; // 804D0ECC
  W32(c->r[1]+0x00000008u,c->r[31]); // 804D0ED0
  c->r[5]=c->r[1]+0x00000014u; // 804D0ED4
  c->r[7]=c->r[16]+c->r[0]; // 804D0ED8
  c->r[0]=R32(c->r[1]+0x000000BCu); // 804D0EDC
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 804D0EE0
  c->r[6]=c->r[16]+0x000001A0u; // 804D0EE4
  c->r[8]=c->r[16]+c->r[0]; // 804D0EE8
  c->lr=0x804D0EF0u; f_804CFA9C(c); // 804D0EEC
  c->r[4]=0u+0x80720000u; // 804D0EF0
  c->r[0]=R32(c->r[1]+0x000000B0u); // 804D0EF4
  c->r[4]=c->r[4]+0xFFFFA568u; // 804D0EF8
  c->r[3]=0u+0x00000000u; // 804D0EFC
  W32(c->r[16]+0x00000000u,c->r[4]); // 804D0F00
  c->r[0]=c->r[16]+c->r[0]; // 804D0F04
  c->r[5]=R32(c->r[1]+0x00000040u); // 804D0F08
  W32(c->r[16]+0x00000138u,c->r[3]); // 804D0F0C
  c->r[4]=R32(c->r[1]+0x00000044u); // 804D0F10
  W32(c->r[16]+0x0000013Cu,c->r[3]); // 804D0F14
  c->r[3]=R32(c->r[1]+0x00000048u); // 804D0F18
  W32(c->r[16]+0x00000140u,c->r[0]); // 804D0F1C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 804D0F20
  W32(c->r[16]+0x00000144u,c->r[5]); // 804D0F24
  c->r[5]=R32(c->r[1]+0x00000050u); // 804D0F28
  W32(c->r[16]+0x00000148u,c->r[4]); // 804D0F2C
  c->r[4]=R32(c->r[1]+0x00000054u); // 804D0F30
  W32(c->r[16]+0x0000014Cu,c->r[3]); // 804D0F34
  c->r[3]=R32(c->r[1]+0x00000058u); // 804D0F38
  W32(c->r[16]+0x00000150u,c->r[0]); // 804D0F3C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 804D0F40
  W32(c->r[16]+0x00000154u,c->r[5]); // 804D0F44
  c->r[5]=R32(c->r[1]+0x00000060u); // 804D0F48
  W32(c->r[16]+0x00000158u,c->r[4]); // 804D0F4C
  c->r[4]=R32(c->r[1]+0x00000064u); // 804D0F50
  W32(c->r[16]+0x0000015Cu,c->r[3]); // 804D0F54
  c->r[3]=R32(c->r[1]+0x00000068u); // 804D0F58
  W32(c->r[16]+0x00000160u,c->r[0]); // 804D0F5C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 804D0F60
  W32(c->r[16]+0x00000164u,c->r[5]); // 804D0F64
  c->r[5]=R32(c->r[1]+0x00000070u); // 804D0F68
  W32(c->r[16]+0x00000168u,c->r[4]); // 804D0F6C
  c->r[4]=R32(c->r[1]+0x00000074u); // 804D0F70
  W32(c->r[16]+0x0000016Cu,c->r[3]); // 804D0F74
  c->r[3]=R32(c->r[1]+0x00000078u); // 804D0F78
  W32(c->r[16]+0x00000170u,c->r[0]); // 804D0F7C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 804D0F80
  W32(c->r[16]+0x00000174u,c->r[5]); // 804D0F84
  W32(c->r[16]+0x00000178u,c->r[4]); // 804D0F88
  W32(c->r[16]+0x0000017Cu,c->r[3]); // 804D0F8C
  W32(c->r[16]+0x00000180u,c->r[0]); // 804D0F90
  W32(c->r[16]+0x00000184u,c->r[14]); // 804D0F94
L_804D0F98:;
  c->r[3]=c->r[16]|c->r[16]; // 804D0F98
  c->lr=0x804D0FA0u; f_804D1C70(c); // 804D0F9C
L_804D0FA0:;
  c->r[3]=c->r[16]|c->r[16]; // 804D0FA0
L_804D0FA4:;
  c->r[11]=c->r[1]+0x00000150u; // 804D0FA4
  c->lr=0x804D0FACu; f_803A9C1C(c); // 804D0FA8
  c->r[0]=R32(c->r[1]+0x00000154u); // 804D0FAC
  c->lr=c->r[0]; // 804D0FB0
  c->r[1]=c->r[1]+0x00000150u; // 804D0FB4
  return; // 804D0FB8
}

// ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv
void f_804D0FBC(Ctx* __restrict c) {
  trace_call(0x804D0FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D0FBC
  c->r[0]=c->lr; // 804D0FC0
  W32(c->r[1]+0x00000254u,c->r[0]); // 804D0FC4
  c->r[11]=c->r[1]+0x00000250u; // 804D0FC8
  c->lr=0x804D0FD0u; f_803A9BD0(c); // 804D0FCC
  c->r[6]=R32(c->r[3]+0x000000D4u); // 804D0FD0
  c->r[16]=c->r[3]|c->r[3]; // 804D0FD4
  W32(c->r[1]+0x00000008u,c->r[4]); // 804D0FD8
  cmps(c,0,(int32_t)c->r[6],0); // 804D0FDC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804D0FE0
  if (crb(c,2)) { goto L_804D1024; } // 804D0FE4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804D0FE8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804D0FEC
  if (crb(c,2)) { goto L_804D1024; } // 804D0FF0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804D0FF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D0FF8
  if (crb(c,2)) { goto L_804D1024; } // 804D0FFC
  c->r[12]=R32(c->r[6]+0x00000000u); // 804D1000
  c->r[3]=c->r[6]|c->r[6]; // 804D1004
  c->r[6]=c->r[4]|c->r[4]; // 804D1008
  c->r[5]=c->r[16]|c->r[16]; // 804D100C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D1010
  c->r[4]=0u+0x00000001u; // 804D1014
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 804D1018
  c->ctr=c->r[12]; // 804D101C
  if (true) { c->lr=0x804D1024u; dispatch(c,c->ctr); } // 804D1020
L_804D1024:;
  c->r[0]=R32(c->r[16]+0x000000E8u); // 804D1024
  c->r[3]=c->r[1]+0x00000060u; // 804D1028
  W32(c->r[1]+0x00000060u,c->r[0]); // 804D102C
  c->lr=0x804D1034u; f_804ACA9C(c); // 804D1030
  c->r[29]=c->r[1]+0x000000E4u; // 804D1034
  c->r[0]=c->r[1]+0x000000C8u; // 804D1038
  c->r[4]=c->r[29]-c->r[0]; // 804D103C
  c->r[30]=c->r[1]+0x00000104u; // 804D1040
  c->r[5]=c->r[4]+0x00000003u; // 804D1044
  c->r[0]=c->r[1]+0x000000E8u; // 804D1048
  W32(c->r[1]+0x00000204u,c->r[3]); // 804D104C
  c->r[3]=sraw(c,c->r[5],2); // 804D1050
  c->r[6]=c->r[30]-c->r[0]; // 804D1054
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 804D1058
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 804D105C
  W32(c->r[1]+0x00000200u,c->r[0]); // 804D1060
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 804D1064
  c->r[7]=c->r[6]+0x00000003u; // 804D1068
  c->r[3]=sraw(c,c->r[7],2); // 804D106C
  c->r[21]=c->r[4]+0x00000001u; // 804D1070
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 804D1074
  W32(c->r[1]+0x000001FCu,c->r[0]); // 804D1078
  c->r[0]=rotl(c->r[21],0)&0x80000000u; // 804D107C
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 804D1080
  W32(c->r[1]+0x000001F8u,c->r[0]); // 804D1084
  c->r[0]=rotl(c->r[6],0)&0x80000000u; // 804D1088
  c->r[19]=c->r[3]+0x00000001u; // 804D108C
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 804D1090
  W32(c->r[1]+0x000001F4u,c->r[0]); // 804D1094
  c->r[0]=rotl(c->r[7],0)&0x80000000u; // 804D1098
  c->r[14]=rotl(c->r[19],0)&0x80000000u; // 804D109C
  c->r[17]=0u+0x00000000u; // 804D10A0
  W32(c->r[1]+0x000001F0u,c->r[0]); // 804D10A4
  c->r[28]=0u+0x00000000u; // 804D10A8
  c->r[27]=0u+0x00000000u; // 804D10AC
  c->r[26]=0u+0x00000000u; // 804D10B0
  c->r[25]=0u+0x00000000u; // 804D10B4
  c->r[24]=0u+0x00000000u; // 804D10B8
  c->r[23]=0u+0x00000000u; // 804D10BC
  c->r[22]=0u+0x00000000u; // 804D10C0
  c->r[31]=0u+0x00000000u; // 804D10C4
  goto L_804D16C4; // 804D10C8
L_804D10CC:;
  c->r[4]=c->r[17]|c->r[17]; // 804D10CC
  c->r[3]=c->r[1]+0x00000060u; // 804D10D0
  c->lr=0x804D10D8u; f_804ACA48(c); // 804D10D4
  c->r[4]=R32(c->r[16]+0x00000140u); // 804D10D8
  c->r[15]=c->r[3]|c->r[3]; // 804D10DC
  c->r[0]=R32(c->r[4]+c->r[28]); // 804D10E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D10E4
  if (crb(c,2)) { goto L_804D10FC; } // 804D10E8
  c->r[3]=c->r[16]|c->r[16]; // 804D10EC
  c->r[4]=c->r[17]|c->r[17]; // 804D10F0
  c->r[5]=0u+0x00000001u; // 804D10F4
  c->lr=0x804D10FCu; f_804D2024(c); // 804D10F8
L_804D10FC:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D10FC
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1100
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804D1104
  if (crb(c,2)) { goto L_804D111C; } // 804D1108
  c->r[3]=c->r[16]|c->r[16]; // 804D110C
  c->r[4]=c->r[17]|c->r[17]; // 804D1110
  c->r[5]=0u+0x00000002u; // 804D1114
  c->lr=0x804D111Cu; f_804D2024(c); // 804D1118
L_804D111C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D111C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1120
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 804D1124
  if (crb(c,2)) { goto L_804D113C; } // 804D1128
  c->r[3]=c->r[16]|c->r[16]; // 804D112C
  c->r[4]=c->r[17]|c->r[17]; // 804D1130
  c->r[5]=0u+0x00000200u; // 804D1134
  c->lr=0x804D113Cu; f_804D2024(c); // 804D1138
L_804D113C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D113C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1140
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D1144
  if (crb(c,2)) { goto L_804D115C; } // 804D1148
  c->r[3]=c->r[16]|c->r[16]; // 804D114C
  c->r[4]=c->r[17]|c->r[17]; // 804D1150
  c->r[5]=0u+0x00000004u; // 804D1154
  c->lr=0x804D115Cu; f_804D2024(c); // 804D1158
L_804D115C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D115C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1160
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804D1164
  if (crb(c,2)) { goto L_804D117C; } // 804D1168
  c->r[3]=c->r[16]|c->r[16]; // 804D116C
  c->r[4]=c->r[17]|c->r[17]; // 804D1170
  c->r[5]=0u+0x00000008u; // 804D1174
  c->lr=0x804D117Cu; f_804D2024(c); // 804D1178
L_804D117C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D117C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1180
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 804D1184
  if (crb(c,2)) { goto L_804D119C; } // 804D1188
  c->r[3]=c->r[16]|c->r[16]; // 804D118C
  c->r[4]=c->r[17]|c->r[17]; // 804D1190
  c->r[5]=0u+0x00000100u; // 804D1194
  c->lr=0x804D119Cu; f_804D2024(c); // 804D1198
L_804D119C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D119C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D11A0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804D11A4
  if (crb(c,2)) { goto L_804D11BC; } // 804D11A8
  c->r[3]=c->r[16]|c->r[16]; // 804D11AC
  c->r[4]=c->r[17]|c->r[17]; // 804D11B0
  c->r[5]=0u+0x00000010u; // 804D11B4
  c->lr=0x804D11BCu; f_804D2024(c); // 804D11B8
L_804D11BC:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D11BC
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D11C0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804D11C4
  if (crb(c,2)) { goto L_804D11DC; } // 804D11C8
  c->r[3]=c->r[16]|c->r[16]; // 804D11CC
  c->r[4]=c->r[17]|c->r[17]; // 804D11D0
  c->r[5]=0u+0x00000020u; // 804D11D4
  c->lr=0x804D11DCu; f_804D2024(c); // 804D11D8
L_804D11DC:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D11DC
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D11E0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 804D11E4
  if (crb(c,2)) { goto L_804D11FC; } // 804D11E8
  c->r[3]=c->r[16]|c->r[16]; // 804D11EC
  c->r[4]=c->r[17]|c->r[17]; // 804D11F0
  c->r[5]=0u+0x00000080u; // 804D11F4
  c->lr=0x804D11FCu; f_804D2024(c); // 804D11F8
L_804D11FC:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D11FC
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1200
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 804D1204
  if (crb(c,2)) { goto L_804D121C; } // 804D1208
  c->r[3]=c->r[16]|c->r[16]; // 804D120C
  c->r[4]=c->r[17]|c->r[17]; // 804D1210
  c->r[5]=0u+0x00000400u; // 804D1214
  c->lr=0x804D121Cu; f_804D2024(c); // 804D1218
L_804D121C:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D121C
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1220
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 804D1224
  if (crb(c,2)) { goto L_804D123C; } // 804D1228
  c->r[3]=c->r[16]|c->r[16]; // 804D122C
  c->r[4]=c->r[17]|c->r[17]; // 804D1230
  c->r[5]=0u+0x00000800u; // 804D1234
  c->lr=0x804D123Cu; f_804D2024(c); // 804D1238
L_804D123C:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 804D123C
  cmps(c,0,(int32_t)c->r[3],0); // 804D1240
  if (crb(c,2)) { goto L_804D14E0; } // 804D1244
  c->r[4]=c->r[17]|c->r[17]; // 804D1248
  c->lr=0x804D1250u; f_804B624C(c); // 804D124C
  cmps(c,0,(int32_t)c->r[3],0); // 804D1250
  if (crb(c,2)) { goto L_804D14E0; } // 804D1254
  c->r[4]=c->r[1]+0x000000C8u; // 804D1258
  W32(c->r[1]+0x000000C4u,c->r[31]); // 804D125C
  cmpu(c,0,c->r[4],c->r[29]); // 804D1260
  if (!crb(c,0)) { goto L_804D1354; } // 804D1264
  cmps(c,0,(int32_t)c->r[21],8); // 804D1268
  if (!crb(c,1)) { goto L_804D1330; } // 804D126C
  c->r[0]=c->r[4]|c->r[4]; // 804D1270
  c->r[3]=0u+0x00000000u; // 804D1274
  cmpu(c,0,c->r[0],c->r[29]); // 804D1278
  c->r[5]=0u+0x00000000u; // 804D127C
  if (crb(c,1)) { goto L_804D12B0; } // 804D1280
  c->r[0]=R32(c->r[1]+0x00000200u); // 804D1284
  c->r[6]=0u+0x00000001u; // 804D1288
  cmps(c,0,(int32_t)c->r[0],0); // 804D128C
  if (!crb(c,2)) { goto L_804D12A4; } // 804D1290
  c->r[0]=R32(c->r[1]+0x000001FCu); // 804D1294
  cmps(c,0,(int32_t)c->r[0],0); // 804D1298
  if (crb(c,2)) { goto L_804D12A4; } // 804D129C
  c->r[6]=0u+0x00000000u; // 804D12A0
L_804D12A4:;
  cmps(c,0,(int32_t)c->r[6],0); // 804D12A4
  if (crb(c,2)) { goto L_804D12B0; } // 804D12A8
  c->r[5]=0u+0x00000001u; // 804D12AC
L_804D12B0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D12B0
  if (crb(c,2)) { goto L_804D12E0; } // 804D12B4
  cmps(c,0,(int32_t)c->r[20],0); // 804D12B8
  c->r[5]=0u+0x00000001u; // 804D12BC
  if (!crb(c,2)) { goto L_804D12D4; } // 804D12C0
  c->r[0]=R32(c->r[1]+0x000001F8u); // 804D12C4
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 804D12C8
  if (crb(c,2)) { goto L_804D12D4; } // 804D12CC
  c->r[5]=0u+0x00000000u; // 804D12D0
L_804D12D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D12D4
  if (crb(c,2)) { goto L_804D12E0; } // 804D12D8
  c->r[3]=0u+0x00000001u; // 804D12DC
L_804D12E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D12E0
  if (crb(c,2)) { goto L_804D1330; } // 804D12E4
  c->r[3]=c->r[1]+0x000000C4u; // 804D12E8
  c->r[0]=c->r[3]+0x0000001Fu; // 804D12EC
  c->r[0]=c->r[0]-c->r[4]; // 804D12F0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D12F4
  c->ctr=c->r[0]; // 804D12F8
  c->r[0]=c->r[3]|c->r[3]; // 804D12FC
  cmpu(c,0,c->r[4],c->r[0]); // 804D1300
  if (!crb(c,0)) { goto L_804D1330; } // 804D1304
L_804D1308:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 804D1308
  W32(c->r[4]+0x00000004u,c->r[31]); // 804D130C
  W32(c->r[4]+0x00000008u,c->r[31]); // 804D1310
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 804D1314
  W32(c->r[4]+0x00000010u,c->r[31]); // 804D1318
  W32(c->r[4]+0x00000014u,c->r[31]); // 804D131C
  W32(c->r[4]+0x00000018u,c->r[31]); // 804D1320
  W32(c->r[4]+0x0000001Cu,c->r[31]); // 804D1324
  c->r[4]=c->r[4]+0x00000020u; // 804D1328
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D1308; } // 804D132C
L_804D1330:;
  c->r[0]=c->r[29]+0x00000003u; // 804D1330
  c->r[0]=c->r[0]-c->r[4]; // 804D1334
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804D1338
  c->ctr=c->r[0]; // 804D133C
  cmpu(c,0,c->r[4],c->r[29]); // 804D1340
  if (!crb(c,0)) { goto L_804D1354; } // 804D1344
L_804D1348:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 804D1348
  c->r[4]=c->r[4]+0x00000004u; // 804D134C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D1348; } // 804D1350
L_804D1354:;
  c->r[3]=c->r[1]+0x000000E8u; // 804D1354
  W32(c->r[1]+0x000000E4u,c->r[31]); // 804D1358
  cmpu(c,0,c->r[3],c->r[30]); // 804D135C
  if (!crb(c,0)) { goto L_804D1444; } // 804D1360
  cmps(c,0,(int32_t)c->r[19],8); // 804D1364
  if (!crb(c,1)) { goto L_804D1420; } // 804D1368
  c->r[0]=c->r[3]|c->r[3]; // 804D136C
  c->r[4]=0u+0x00000000u; // 804D1370
  cmpu(c,0,c->r[0],c->r[30]); // 804D1374
  c->r[5]=0u+0x00000000u; // 804D1378
  if (crb(c,1)) { goto L_804D13AC; } // 804D137C
  c->r[0]=R32(c->r[1]+0x000001F4u); // 804D1380
  c->r[6]=0u+0x00000001u; // 804D1384
  cmps(c,0,(int32_t)c->r[0],0); // 804D1388
  if (!crb(c,2)) { goto L_804D13A0; } // 804D138C
  c->r[0]=R32(c->r[1]+0x000001F0u); // 804D1390
  cmps(c,0,(int32_t)c->r[0],0); // 804D1394
  if (crb(c,2)) { goto L_804D13A0; } // 804D1398
  c->r[6]=0u+0x00000000u; // 804D139C
L_804D13A0:;
  cmps(c,0,(int32_t)c->r[6],0); // 804D13A0
  if (crb(c,2)) { goto L_804D13AC; } // 804D13A4
  c->r[5]=0u+0x00000001u; // 804D13A8
L_804D13AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D13AC
  if (crb(c,2)) { goto L_804D13D8; } // 804D13B0
  cmps(c,0,(int32_t)c->r[18],0); // 804D13B4
  c->r[0]=0u+0x00000001u; // 804D13B8
  if (!crb(c,2)) { goto L_804D13CC; } // 804D13BC
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[14]); // 804D13C0
  if (crb(c,2)) { goto L_804D13CC; } // 804D13C4
  c->r[0]=0u+0x00000000u; // 804D13C8
L_804D13CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D13CC
  if (crb(c,2)) { goto L_804D13D8; } // 804D13D0
  c->r[4]=0u+0x00000001u; // 804D13D4
L_804D13D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D13D8
  if (crb(c,2)) { goto L_804D1420; } // 804D13DC
  c->r[0]=c->r[29]+0x0000001Fu; // 804D13E0
  c->r[0]=c->r[0]-c->r[3]; // 804D13E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D13E8
  c->ctr=c->r[0]; // 804D13EC
  cmpu(c,0,c->r[3],c->r[29]); // 804D13F0
  if (!crb(c,0)) { goto L_804D1420; } // 804D13F4
L_804D13F8:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 804D13F8
  W32(c->r[3]+0x00000004u,c->r[31]); // 804D13FC
  W32(c->r[3]+0x00000008u,c->r[31]); // 804D1400
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 804D1404
  W32(c->r[3]+0x00000010u,c->r[31]); // 804D1408
  W32(c->r[3]+0x00000014u,c->r[31]); // 804D140C
  W32(c->r[3]+0x00000018u,c->r[31]); // 804D1410
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 804D1414
  c->r[3]=c->r[3]+0x00000020u; // 804D1418
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D13F8; } // 804D141C
L_804D1420:;
  c->r[0]=c->r[30]+0x00000003u; // 804D1420
  c->r[0]=c->r[0]-c->r[3]; // 804D1424
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804D1428
  c->ctr=c->r[0]; // 804D142C
  cmpu(c,0,c->r[3],c->r[30]); // 804D1430
  if (!crb(c,0)) { goto L_804D1444; } // 804D1434
L_804D1438:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 804D1438
  c->r[3]=c->r[3]+0x00000004u; // 804D143C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D1438; } // 804D1440
L_804D1444:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 804D1444
  c->r[5]=c->r[17]|c->r[17]; // 804D1448
  c->r[4]=c->r[1]+0x000000C0u; // 804D144C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1450
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D1454
  c->ctr=c->r[12]; // 804D1458
  if (true) { c->lr=0x804D1460u; dispatch(c,c->ctr); } // 804D145C
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 804D1460
  cmps(c,0,(int32_t)c->r[0],0); // 804D1464
  if (crb(c,2)) { goto L_804D147C; } // 804D1468
  c->r[0]=c->r[0]+c->r[27]; // 804D146C
  c->r[4]=c->r[1]+0x00000054u; // 804D1470
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D1474
  goto L_804D1488; // 804D1478
L_804D147C:;
  c->r[0]=c->r[15]+0x00000040u; // 804D147C
  c->r[4]=c->r[1]+0x00000050u; // 804D1480
  W32(c->r[1]+0x00000050u,c->r[0]); // 804D1484
L_804D1488:;
  c->r[5]=R32(c->r[16]+0x00000150u); // 804D1488
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D148C
  cmps(c,0,(int32_t)c->r[5],0); // 804D1490
  if (crb(c,2)) { goto L_804D14A8; } // 804D1494
  c->r[4]=c->r[5]+c->r[26]; // 804D1498
  c->r[5]=c->r[1]+0x0000004Cu; // 804D149C
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 804D14A0
  goto L_804D14B4; // 804D14A4
L_804D14A8:;
  c->r[4]=c->r[15]+0x00000144u; // 804D14A8
  c->r[5]=c->r[1]+0x00000048u; // 804D14AC
  W32(c->r[1]+0x00000048u,c->r[4]); // 804D14B0
L_804D14B4:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 804D14B4
  c->r[5]=c->r[3]|c->r[3]; // 804D14B8
  c->r[3]=c->r[1]+0x00000044u; // 804D14BC
  c->r[4]=c->r[1]+0x00000040u; // 804D14C0
  W32(c->r[1]+0x00000040u,c->r[6]); // 804D14C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D14C8
  c->lr=0x804D14D0u; f_804B7334(c); // 804D14CC
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D14D0
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D14D4
  c->r[0]=c->r[0]|0x00000003u; // 804D14D8
  W32(c->r[3]+c->r[28],c->r[0]); // 804D14DC
L_804D14E0:;
  c->r[3]=R32(c->r[16]+0x00000134u); // 804D14E0
  cmps(c,0,(int32_t)c->r[3],0); // 804D14E4
  if (crb(c,2)) { goto L_804D15C0; } // 804D14E8
  c->r[4]=c->r[17]|c->r[17]; // 804D14EC
  c->lr=0x804D14F4u; f_804B781C(c); // 804D14F0
  cmps(c,0,(int32_t)c->r[3],0); // 804D14F4
  if (crb(c,2)) { goto L_804D15C0; } // 804D14F8
  c->r[3]=R32(c->r[16]+0x00000134u); // 804D14FC
  c->r[5]=c->r[17]|c->r[17]; // 804D1500
  c->r[4]=c->r[1]+0x00000108u; // 804D1504
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1508
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D150C
  c->ctr=c->r[12]; // 804D1510
  if (true) { c->lr=0x804D1518u; dispatch(c,c->ctr); } // 804D1514
  c->r[0]=R32(c->r[16]+0x00000154u); // 804D1518
  cmps(c,0,(int32_t)c->r[0],0); // 804D151C
  if (crb(c,2)) { goto L_804D1534; } // 804D1520
  c->r[0]=c->r[0]+c->r[25]; // 804D1524
  c->r[4]=c->r[1]+0x0000003Cu; // 804D1528
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804D152C
  goto L_804D1540; // 804D1530
L_804D1534:;
  c->r[0]=c->r[15]+0x000001A8u; // 804D1534
  c->r[4]=c->r[1]+0x00000038u; // 804D1538
  W32(c->r[1]+0x00000038u,c->r[0]); // 804D153C
L_804D1540:;
  c->r[5]=R32(c->r[16]+0x0000016Cu); // 804D1540
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D1544
  cmps(c,0,(int32_t)c->r[5],0); // 804D1548
  if (crb(c,2)) { goto L_804D1560; } // 804D154C
  c->r[4]=c->r[5]+c->r[24]; // 804D1550
  c->r[5]=c->r[1]+0x00000034u; // 804D1554
  W32(c->r[1]+0x00000034u,c->r[4]); // 804D1558
  goto L_804D1584; // 804D155C
L_804D1560:;
  c->r[4]=R32(c->r[15]+0x0000003Cu); // 804D1560
  cmps(c,0,(int32_t)c->r[4],0); // 804D1564
  if (crb(c,2)) { goto L_804D1574; } // 804D1568
  c->r[4]=c->r[15]+c->r[4]; // 804D156C
  goto L_804D1578; // 804D1570
L_804D1574:;
  c->r[4]=0u+0x00000000u; // 804D1574
L_804D1578:;
  c->r[4]=c->r[4]+0x000000A0u; // 804D1578
  c->r[5]=c->r[1]+0x00000030u; // 804D157C
  W32(c->r[1]+0x00000030u,c->r[4]); // 804D1580
L_804D1584:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 804D1584
  c->r[5]=c->r[3]|c->r[3]; // 804D1588
  c->r[3]=c->r[1]+0x0000002Cu; // 804D158C
  c->r[4]=c->r[1]+0x00000028u; // 804D1590
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 804D1594
  W32(c->r[1]+0x00000028u,c->r[6]); // 804D1598
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804D159C
  c->lr=0x804D15A4u; f_804B898C(c); // 804D15A0
  c->r[3]=c->r[1]+0x0000005Cu; // 804D15A4
  c->r[4]=0u+0x00000000u; // 804D15A8
  c->lr=0x804D15B0u; f_804AE650(c); // 804D15AC
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D15B0
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D15B4
  c->r[0]=c->r[0]|0x00000204u; // 804D15B8
  W32(c->r[3]+c->r[28],c->r[0]); // 804D15BC
L_804D15C0:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 804D15C0
  cmps(c,0,(int32_t)c->r[3],0); // 804D15C4
  if (crb(c,2)) { goto L_804D16A4; } // 804D15C8
  c->r[4]=c->r[17]|c->r[17]; // 804D15CC
  c->lr=0x804D15D4u; f_804B54C8(c); // 804D15D0
  cmps(c,0,(int32_t)c->r[3],0); // 804D15D4
  if (crb(c,2)) { goto L_804D16A4; } // 804D15D8
  c->r[0]=R32(c->r[16]+0x00000168u); // 804D15DC
  cmps(c,0,(int32_t)c->r[0],0); // 804D15E0
  if (crb(c,2)) { goto L_804D15F8; } // 804D15E4
  c->r[0]=c->r[0]+c->r[23]; // 804D15E8
  c->r[3]=c->r[1]+0x00000024u; // 804D15EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D15F0
  goto L_804D161C; // 804D15F4
L_804D15F8:;
  c->r[0]=R32(c->r[15]+0x0000003Cu); // 804D15F8
  cmps(c,0,(int32_t)c->r[0],0); // 804D15FC
  if (crb(c,2)) { goto L_804D160C; } // 804D1600
  c->r[3]=c->r[15]+c->r[0]; // 804D1604
  goto L_804D1610; // 804D1608
L_804D160C:;
  c->r[3]=0u+0x00000000u; // 804D160C
L_804D1610:;
  c->r[0]=c->r[3]+0x00000020u; // 804D1610
  c->r[3]=c->r[1]+0x00000020u; // 804D1614
  W32(c->r[1]+0x00000020u,c->r[0]); // 804D1618
L_804D161C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804D161C
  W32(c->r[1]+0x00000058u,c->r[0]); // 804D1620
  c->r[0]=R32(c->r[16]+0x00000158u); // 804D1624
  cmps(c,0,(int32_t)c->r[0],0); // 804D1628
  if (crb(c,2)) { goto L_804D1640; } // 804D162C
  c->r[0]=c->r[0]+c->r[22]; // 804D1630
  c->r[6]=c->r[1]+0x0000001Cu; // 804D1634
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D1638
  goto L_804D164C; // 804D163C
L_804D1640:;
  c->r[0]=c->r[15]+0x000003F0u; // 804D1640
  c->r[6]=c->r[1]+0x00000018u; // 804D1644
  W32(c->r[1]+0x00000018u,c->r[0]); // 804D1648
L_804D164C:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 804D164C
  c->r[5]=c->r[17]|c->r[17]; // 804D1650
  c->r[4]=c->r[1]+0x00000064u; // 804D1654
  c->r[15]=R32(c->r[6]+0x00000000u); // 804D1658
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D165C
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D1660
  c->ctr=c->r[12]; // 804D1664
  if (true) { c->lr=0x804D166Cu; dispatch(c,c->ctr); } // 804D1668
  c->r[0]=R32(c->r[1]+0x00000058u); // 804D166C
  c->r[5]=c->r[3]|c->r[3]; // 804D1670
  W32(c->r[1]+0x00000014u,c->r[15]); // 804D1674
  c->r[3]=c->r[1]+0x00000014u; // 804D1678
  c->r[4]=c->r[1]+0x00000010u; // 804D167C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D1680
  c->lr=0x804D1688u; f_804B5B88(c); // 804D1684
  c->r[3]=c->r[1]+0x00000058u; // 804D1688
  c->r[4]=0u+0x00000000u; // 804D168C
  c->lr=0x804D1694u; f_804AE634(c); // 804D1690
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D1694
  c->r[0]=R32(c->r[3]+c->r[28]); // 804D1698
  c->r[0]=c->r[0]|0x00000108u; // 804D169C
  W32(c->r[3]+c->r[28],c->r[0]); // 804D16A0
L_804D16A4:;
  c->r[28]=c->r[28]+0x00000004u; // 804D16A4
  c->r[27]=c->r[27]+0x00000104u; // 804D16A8
  c->r[26]=c->r[26]+0x00000064u; // 804D16AC
  c->r[25]=c->r[25]+0x00000248u; // 804D16B0
  c->r[24]=c->r[24]+0x00000040u; // 804D16B4
  c->r[23]=c->r[23]+0x00000080u; // 804D16B8
  c->r[22]=c->r[22]+0x00000028u; // 804D16BC
  c->r[17]=c->r[17]+0x00000001u; // 804D16C0
L_804D16C4:;
  c->r[0]=R32(c->r[1]+0x00000204u); // 804D16C4
  cmpu(c,0,c->r[17],c->r[0]); // 804D16C8
  if (crb(c,0)) { IRQCHK(c); goto L_804D10CC; } // 804D16CC
  c->r[3]=R32(c->r[16]+0x000000D4u); // 804D16D0
  cmps(c,0,(int32_t)c->r[3],0); // 804D16D4
  if (crb(c,2)) { goto L_804D1714; } // 804D16D8
  c->r[0]=R16(c->r[16]+0x000000DAu); // 804D16DC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804D16E0
  if (crb(c,2)) { goto L_804D1714; } // 804D16E4
  c->r[0]=R8(c->r[16]+0x000000D8u); // 804D16E8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D16EC
  if (crb(c,2)) { goto L_804D1714; } // 804D16F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D16F4
  c->r[5]=c->r[16]|c->r[16]; // 804D16F8
  c->r[6]=R32(c->r[1]+0x00000008u); // 804D16FC
  c->r[4]=0u+0x00000004u; // 804D1700
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D1704
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 804D1708
  c->ctr=c->r[12]; // 804D170C
  if (true) { c->lr=0x804D1714u; dispatch(c,c->ctr); } // 804D1710
L_804D1714:;
  c->r[11]=c->r[1]+0x00000250u; // 804D1714
  c->lr=0x804D171Cu; f_803A9C1C(c); // 804D1718
  c->r[0]=R32(c->r[1]+0x00000254u); // 804D171C
  c->lr=c->r[0]; // 804D1720
  c->r[1]=c->r[1]+0x00000250u; // 804D1724
  return; // 804D1728
}

// G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv
void f_804D172C(Ctx* __restrict c) {
  trace_call(0x804D172Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D172C
  c->r[0]=c->lr; // 804D1730
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D1734
  c->r[11]=c->r[1]+0x00000040u; // 804D1738
  c->lr=0x804D1740u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D173C
  cmpu(c,0,c->r[4],0x00000009u); // 804D1740
  c->r[29]=c->r[3]|c->r[3]; // 804D1744
  c->r[30]=c->r[5]|c->r[5]; // 804D1748
  c->r[31]=c->r[6]|c->r[6]; // 804D174C
  if (!crb(c,0)) { goto L_804D1774; } // 804D1750
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 804D1754
  c->r[6]=0u+0x00000001u; // 804D1758
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804D175C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 804D1760
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 804D1764
  if (crb(c,2)) { goto L_804D1774; } // 804D1768
  c->r[0]=0u+0x00000001u; // 804D176C
  goto L_804D1778; // 804D1770
L_804D1774:;
  c->r[0]=0u+0x00000000u; // 804D1774
L_804D1778:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D1778
  if (!crb(c,2)) { goto L_804D1BC8; } // 804D177C
  cmps(c,0,(int32_t)c->r[4],6); // 804D1780
  if (crb(c,2)) { goto L_804D1960; } // 804D1784
  if (!crb(c,0)) { goto L_804D17B4; } // 804D1788
  cmps(c,0,(int32_t)c->r[4],3); // 804D178C
  if (crb(c,2)) { goto L_804D1B8C; } // 804D1790
  if (!crb(c,0)) { goto L_804D17A8; } // 804D1794
  cmps(c,0,(int32_t)c->r[4],1); // 804D1798
  if (crb(c,2)) { goto L_804D17EC; } // 804D179C
  if (!crb(c,0)) { goto L_804D1938; } // 804D17A0
  goto L_804D1BB8; // 804D17A4
L_804D17A8:;
  cmps(c,0,(int32_t)c->r[4],5); // 804D17A8
  if (!crb(c,0)) { goto L_804D17D8; } // 804D17AC
  goto L_804D194C; // 804D17B0
L_804D17B4:;
  c->r[5]=0u+0x00010000u; // 804D17B4
  c->r[0]=c->r[5]+0x00000001u; // 804D17B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804D17BC
  if (crb(c,2)) { goto L_804D1B70; } // 804D17C0
  if (!crb(c,0)) { goto L_804D1BB8; } // 804D17C4
  cmps(c,0,(int32_t)c->r[4],8); // 804D17C8
  if (crb(c,2)) { goto L_804D1B48; } // 804D17CC
  if (!crb(c,0)) { goto L_804D1BB8; } // 804D17D0
  goto L_804D1A54; // 804D17D4
L_804D17D8:;
  c->r[3]=c->r[29]|c->r[29]; // 804D17D8
  c->r[4]=c->r[30]|c->r[30]; // 804D17DC
  c->r[5]=c->r[31]|c->r[31]; // 804D17E0
  c->lr=0x804D17E8u; f_804CE310(c); // 804D17E4
  goto L_804D1BC8; // 804D17E8
L_804D17EC:;
  c->r[3]=c->r[29]|c->r[29]; // 804D17EC
  c->r[4]=c->r[30]|c->r[30]; // 804D17F0
  c->r[5]=c->r[31]|c->r[31]; // 804D17F4
  c->lr=0x804D17FCu; f_804CE0B4(c); // 804D17F8
  c->r[3]=R32(c->r[29]+0x0000013Cu); // 804D17FC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804D1800
  if (!crb(c,2)) { goto L_804D18A0; } // 804D1804
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 804D1808
  if (crb(c,2)) { goto L_804D18A0; } // 804D180C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D1810
  c->r[3]=c->r[1]+0x0000001Cu; // 804D1814
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D1818
  c->lr=0x804D1820u; f_804AC500(c); // 804D181C
  c->r[0]=R32(c->r[29]+0x00000148u); // 804D1820
  c->r[26]=c->r[3]|c->r[3]; // 804D1824
  cmps(c,0,(int32_t)c->r[0],0); // 804D1828
  if (crb(c,2)) { goto L_804D1894; } // 804D182C
  cmps(c,0,(int32_t)c->r[3],0); // 804D1830
  c->r[25]=0u+0x00000000u; // 804D1834
  if (crb(c,2)) { goto L_804D1894; } // 804D1838
  c->r[27]=0u+0x00000000u; // 804D183C
  c->r[28]=0u+0x00000001u; // 804D1840
  goto L_804D188C; // 804D1844
L_804D1848:;
  c->r[4]=c->r[25]|c->r[25]; // 804D1848
  c->r[3]=c->r[1]+0x0000001Cu; // 804D184C
  c->lr=0x804D1854u; f_804AC4AC(c); // 804D1850
  cmps(c,0,(int32_t)c->r[3],0); // 804D1854
  if (crb(c,2)) { goto L_804D1868; } // 804D1858
  c->r[0]=R32(c->r[3]+0x00000014u); // 804D185C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804D1860
  goto L_804D186C; // 804D1864
L_804D1868:;
  c->r[0]=0u+0x00000000u; // 804D1868
L_804D186C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D186C
  if (crb(c,2)) { goto L_804D1880; } // 804D1870
  c->r[3]=R32(c->r[29]+0x00000148u); // 804D1874
  W8(c->r[3]+c->r[25],c->r[28]); // 804D1878
  goto L_804D1888; // 804D187C
L_804D1880:;
  c->r[3]=R32(c->r[29]+0x00000148u); // 804D1880
  W8(c->r[3]+c->r[25],c->r[27]); // 804D1884
L_804D1888:;
  c->r[25]=c->r[25]+0x00000001u; // 804D1888
L_804D188C:;
  cmpu(c,0,c->r[25],c->r[26]); // 804D188C
  if (crb(c,0)) { IRQCHK(c); goto L_804D1848; } // 804D1890
L_804D1894:;
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 804D1894
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804D1898
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 804D189C
L_804D18A0:;
  c->r[5]=R32(c->r[29]+0x00000128u); // 804D18A0
  cmps(c,0,(int32_t)c->r[5],0); // 804D18A4
  if (crb(c,2)) { goto L_804D18F0; } // 804D18A8
  c->r[0]=R32(c->r[29]+0x00000148u); // 804D18AC
  cmps(c,0,(int32_t)c->r[0],0); // 804D18B0
  if (crb(c,2)) { goto L_804D18DC; } // 804D18B4
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D18B8
  c->r[4]=c->r[1]+0x00000014u; // 804D18BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D18C0
  c->r[3]=R32(c->r[29]+0x00000148u); // 804D18C4
  c->lr=0x804D18CCu; f_804B52C8(c); // 804D18C8
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 804D18CC
  c->r[0]=c->r[0]|0x00000001u; // 804D18D0
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 804D18D4
  goto L_804D18F0; // 804D18D8
L_804D18DC:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D18DC
  c->r[4]=c->r[5]|c->r[5]; // 804D18E0
  c->r[3]=c->r[1]+0x00000018u; // 804D18E4
  W32(c->r[1]+0x00000018u,c->r[0]); // 804D18E8
  c->lr=0x804D18F0u; f_804B520C(c); // 804D18EC
L_804D18F0:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804D18F0
  cmps(c,0,(int32_t)c->r[3],0); // 804D18F4
  if (crb(c,2)) { goto L_804D1BC8; } // 804D18F8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804D18FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D1900
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1904
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804D1908
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D190C
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1910
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1914
  c->r[5]=c->r[29]|c->r[29]; // 804D1918
  c->r[6]=c->r[30]|c->r[30]; // 804D191C
  c->r[7]=c->r[31]|c->r[31]; // 804D1920
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D1924
  c->r[4]=0u+0x00000004u; // 804D1928
  c->ctr=c->r[12]; // 804D192C
  if (true) { c->lr=0x804D1934u; dispatch(c,c->ctr); } // 804D1930
  goto L_804D1BC8; // 804D1934
L_804D1938:;
  c->r[3]=c->r[29]|c->r[29]; // 804D1938
  c->r[4]=c->r[30]|c->r[30]; // 804D193C
  c->r[5]=c->r[31]|c->r[31]; // 804D1940
  c->lr=0x804D1948u; f_804D0FBC(c); // 804D1944
  goto L_804D1BC8; // 804D1948
L_804D194C:;
  c->r[3]=c->r[29]|c->r[29]; // 804D194C
  c->r[4]=c->r[30]|c->r[30]; // 804D1950
  c->r[5]=c->r[31]|c->r[31]; // 804D1954
  c->lr=0x804D195Cu; f_804CE344(c); // 804D1958
  goto L_804D1BC8; // 804D195C
L_804D1960:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804D1960
  cmps(c,0,(int32_t)c->r[4],0); // 804D1964
  if (crb(c,2)) { goto L_804D19A8; } // 804D1968
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804D196C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804D1970
  if (crb(c,2)) { goto L_804D19A8; } // 804D1974
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804D1978
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D197C
  if (crb(c,2)) { goto L_804D19A8; } // 804D1980
  c->r[12]=R32(c->r[4]+0x00000000u); // 804D1984
  c->r[3]=c->r[4]|c->r[4]; // 804D1988
  c->r[5]=c->r[29]|c->r[29]; // 804D198C
  c->r[6]=c->r[30]|c->r[30]; // 804D1990
  c->r[12]=R32(c->r[12]+0x00000018u); // 804D1994
  c->r[7]=c->r[31]|c->r[31]; // 804D1998
  c->r[4]=0u+0x00000001u; // 804D199C
  c->ctr=c->r[12]; // 804D19A0
  if (true) { c->lr=0x804D19A8u; dispatch(c,c->ctr); } // 804D19A4
L_804D19A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D19A8
  if (crb(c,2)) { goto L_804D19B8; } // 804D19AC
  c->r[25]=R32(c->r[31]+0x00000000u); // 804D19B0
  goto L_804D19BC; // 804D19B4
L_804D19B8:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 804D19B8
L_804D19BC:;
  c->r[26]=R32(c->r[29]+0x00000110u); // 804D19BC
  c->r[3]=c->r[29]|c->r[29]; // 804D19C0
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D19C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D19C8
  c->lr=0x804D19D0u; f_804CFA68(c); // 804D19CC
  c->r[28]=c->r[3]|c->r[3]; // 804D19D0
  c->r[3]=c->r[29]|c->r[29]; // 804D19D4
  c->lr=0x804D19DCu; f_804CFA34(c); // 804D19D8
  c->r[27]=c->r[3]|c->r[3]; // 804D19DC
  c->r[3]=c->r[29]|c->r[29]; // 804D19E0
  c->lr=0x804D19E8u; f_804CFA10(c); // 804D19E4
  c->r[4]=c->r[3]|c->r[3]; // 804D19E8
  c->r[5]=c->r[27]|c->r[27]; // 804D19EC
  c->r[6]=c->r[28]|c->r[28]; // 804D19F0
  c->r[7]=c->r[26]|c->r[26]; // 804D19F4
  c->r[10]=c->r[25]|c->r[25]; // 804D19F8
  c->r[3]=c->r[1]+0x00000010u; // 804D19FC
  c->r[9]=c->r[29]+0x00000144u; // 804D1A00
  c->r[8]=0u+0x00000000u; // 804D1A04
  c->lr=0x804D1A0Cu; f_804C6878(c); // 804D1A08
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804D1A0C
  cmps(c,0,(int32_t)c->r[3],0); // 804D1A10
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1A14
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804D1A18
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 804D1A1C
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1A20
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804D1A24
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D1A28
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1A2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1A30
  c->r[5]=c->r[29]|c->r[29]; // 804D1A34
  c->r[6]=c->r[30]|c->r[30]; // 804D1A38
  c->r[7]=c->r[31]|c->r[31]; // 804D1A3C
  c->r[12]=R32(c->r[12]+0x00000018u); // 804D1A40
  c->r[4]=0u+0x00000004u; // 804D1A44
  c->ctr=c->r[12]; // 804D1A48
  if (true) { c->lr=0x804D1A50u; dispatch(c,c->ctr); } // 804D1A4C
  goto L_804D1BC8; // 804D1A50
L_804D1A54:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 804D1A54
  cmps(c,0,(int32_t)c->r[4],0); // 804D1A58
  if (crb(c,2)) { goto L_804D1A9C; } // 804D1A5C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 804D1A60
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804D1A64
  if (crb(c,2)) { goto L_804D1A9C; } // 804D1A68
  c->r[0]=R8(c->r[3]+0x000000D8u); // 804D1A6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D1A70
  if (crb(c,2)) { goto L_804D1A9C; } // 804D1A74
  c->r[12]=R32(c->r[4]+0x00000000u); // 804D1A78
  c->r[3]=c->r[4]|c->r[4]; // 804D1A7C
  c->r[5]=c->r[29]|c->r[29]; // 804D1A80
  c->r[6]=c->r[30]|c->r[30]; // 804D1A84
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D1A88
  c->r[7]=c->r[31]|c->r[31]; // 804D1A8C
  c->r[4]=0u+0x00000001u; // 804D1A90
  c->ctr=c->r[12]; // 804D1A94
  if (true) { c->lr=0x804D1A9Cu; dispatch(c,c->ctr); } // 804D1A98
L_804D1A9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D1A9C
  if (crb(c,2)) { goto L_804D1AAC; } // 804D1AA0
  c->r[25]=R32(c->r[31]+0x00000000u); // 804D1AA4
  goto L_804D1AB0; // 804D1AA8
L_804D1AAC:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 804D1AAC
L_804D1AB0:;
  c->r[26]=R32(c->r[29]+0x00000114u); // 804D1AB0
  c->r[3]=c->r[29]|c->r[29]; // 804D1AB4
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D1AB8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D1ABC
  c->lr=0x804D1AC4u; f_804CFA68(c); // 804D1AC0
  c->r[27]=c->r[3]|c->r[3]; // 804D1AC4
  c->r[3]=c->r[29]|c->r[29]; // 804D1AC8
  c->lr=0x804D1AD0u; f_804CFA34(c); // 804D1ACC
  c->r[28]=c->r[3]|c->r[3]; // 804D1AD0
  c->r[3]=c->r[29]|c->r[29]; // 804D1AD4
  c->lr=0x804D1ADCu; f_804CFA10(c); // 804D1AD8
  c->r[4]=c->r[3]|c->r[3]; // 804D1ADC
  c->r[5]=c->r[28]|c->r[28]; // 804D1AE0
  c->r[6]=c->r[27]|c->r[27]; // 804D1AE4
  c->r[8]=c->r[26]|c->r[26]; // 804D1AE8
  c->r[10]=c->r[25]|c->r[25]; // 804D1AEC
  c->r[3]=c->r[1]+0x0000000Cu; // 804D1AF0
  c->r[9]=c->r[29]+0x00000144u; // 804D1AF4
  c->r[7]=0u+0x00000000u; // 804D1AF8
  c->lr=0x804D1B00u; f_804C6878(c); // 804D1AFC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 804D1B00
  cmps(c,0,(int32_t)c->r[3],0); // 804D1B04
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1B08
  c->r[0]=R16(c->r[29]+0x000000DAu); // 804D1B0C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 804D1B10
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1B14
  c->r[0]=R8(c->r[29]+0x000000D8u); // 804D1B18
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D1B1C
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1B20
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1B24
  c->r[5]=c->r[29]|c->r[29]; // 804D1B28
  c->r[6]=c->r[30]|c->r[30]; // 804D1B2C
  c->r[7]=c->r[31]|c->r[31]; // 804D1B30
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D1B34
  c->r[4]=0u+0x00000004u; // 804D1B38
  c->ctr=c->r[12]; // 804D1B3C
  if (true) { c->lr=0x804D1B44u; dispatch(c,c->ctr); } // 804D1B40
  goto L_804D1BC8; // 804D1B44
L_804D1B48:;
  c->r[3]=c->r[29]|c->r[29]; // 804D1B48
  c->lr=0x804D1B50u; f_804CF8D8(c); // 804D1B4C
  c->r[3]=R32(c->r[29]+0x00000138u); // 804D1B50
  cmps(c,0,(int32_t)c->r[3],0); // 804D1B54
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1B58
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D1B5C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804D1B60
  c->ctr=c->r[12]; // 804D1B64
  if (true) { c->lr=0x804D1B6Cu; dispatch(c,c->ctr); } // 804D1B68
  goto L_804D1BC8; // 804D1B6C
L_804D1B70:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D1B70
  c->r[3]=c->r[29]|c->r[29]; // 804D1B74
  c->r[4]=c->r[31]|c->r[31]; // 804D1B78
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D1B7C
  c->ctr=c->r[12]; // 804D1B80
  if (true) { c->lr=0x804D1B88u; dispatch(c,c->ctr); } // 804D1B84
  goto L_804D1BC8; // 804D1B88
L_804D1B8C:;
  c->r[4]=R32(c->r[3]+0x00000138u); // 804D1B8C
  cmps(c,0,(int32_t)c->r[4],0); // 804D1B90
  if (crb(c,2)) { goto L_804D1BC8; } // 804D1B94
  c->r[0]=R32(c->r[3]+0x000000E8u); // 804D1B98
  c->r[3]=c->r[1]+0x00000008u; // 804D1B9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D1BA0
  c->r[5]=R32(c->r[29]+0x00000178u); // 804D1BA4
  c->r[6]=R32(c->r[29]+0x0000017Cu); // 804D1BA8
  c->r[7]=R32(c->r[29]+0x00000180u); // 804D1BAC
  c->lr=0x804D1BB4u; f_804D40CC(c); // 804D1BB0
  goto L_804D1BC8; // 804D1BB4
L_804D1BB8:;
  c->r[3]=c->r[29]|c->r[29]; // 804D1BB8
  c->r[5]=c->r[30]|c->r[30]; // 804D1BBC
  c->r[6]=c->r[31]|c->r[31]; // 804D1BC0
  c->lr=0x804D1BC8u; f_804CB6E8(c); // 804D1BC4
L_804D1BC8:;
  c->r[11]=c->r[1]+0x00000040u; // 804D1BC8
  c->lr=0x804D1BD0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D1BCC
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D1BD0
  c->lr=c->r[0]; // 804D1BD4
  c->r[1]=c->r[1]+0x00000040u; // 804D1BD8
  return; // 804D1BDC
}

// SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl
void f_804D1BE0(Ctx* __restrict c) {
  trace_call(0x804D1BE0u);
  c->r[6]=0u+0x00030000u; // 804D1BE0
  c->r[0]=c->r[6]+0x00000001u; // 804D1BE4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804D1BE8
  if (crb(c,2)) { goto L_804D1BF4; } // 804D1BEC
  goto L_804D1C1C; // 804D1BF0
L_804D1BF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D1BF4
  if (crb(c,2)) { goto L_804D1C0C; } // 804D1BF8
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 804D1BFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D1C00
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 804D1C04
  goto L_804D1C20; // 804D1C08
L_804D1C0C:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 804D1C0C
  c->r[0]=c->r[0]|0x00000002u; // 804D1C10
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 804D1C14
  goto L_804D1C20; // 804D1C18
L_804D1C1C:;
  f_804CEF20(c); return; // 804D1C1C
L_804D1C20:;
  c->r[3]=0u+0x00000001u; // 804D1C20
  return; // 804D1C24
}

// GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl
void f_804D1C28(Ctx* __restrict c) {
  trace_call(0x804D1C28u);
  cmps(c,0,(int32_t)c->r[5],0); // 804D1C28
  if (!crb(c,2)) { goto L_804D1C38; } // 804D1C2C
  c->r[3]=0u+0x00000000u; // 804D1C30
  return; // 804D1C34
L_804D1C38:;
  c->r[6]=0u+0x00030000u; // 804D1C38
  c->r[0]=c->r[6]+0x00000001u; // 804D1C3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804D1C40
  if (crb(c,2)) { goto L_804D1C4C; } // 804D1C44
  goto L_804D1C64; // 804D1C48
L_804D1C4C:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 804D1C4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 804D1C50
  c->r[0]=cntlz(c->r[0]); // 804D1C54
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D1C58
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D1C5C
  goto L_804D1C68; // 804D1C60
L_804D1C64:;
  f_804CEF68(c); return; // 804D1C64
L_804D1C68:;
  c->r[3]=0u+0x00000001u; // 804D1C68
  return; // 804D1C6C
}

// InitBuffer__Q34nw4r3g3d6ScnMdlFv
void f_804D1C70(Ctx* __restrict c) {
  trace_call(0x804D1C70u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D1C70
  c->r[0]=c->lr; // 804D1C74
  W32(c->r[1]+0x00000094u,c->r[0]); // 804D1C78
  c->r[11]=c->r[1]+0x00000090u; // 804D1C7C
  c->lr=0x804D1C84u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D1C80
  c->r[0]=R32(c->r[3]+0x000000E8u); // 804D1C84
  c->r[16]=c->r[3]|c->r[3]; // 804D1C88
  c->r[3]=c->r[1]+0x0000004Cu; // 804D1C8C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804D1C90
  c->lr=0x804D1C98u; f_804ACA9C(c); // 804D1C94
  c->r[30]=c->r[3]|c->r[3]; // 804D1C98
  c->r[3]=c->r[1]+0x0000004Cu; // 804D1C9C
  c->lr=0x804D1CA4u; f_804AC500(c); // 804D1CA0
  c->r[0]=R32(c->r[16]+0x00000148u); // 804D1CA4
  c->r[19]=c->r[3]|c->r[3]; // 804D1CA8
  cmps(c,0,(int32_t)c->r[0],0); // 804D1CAC
  if (crb(c,2)) { goto L_804D1D18; } // 804D1CB0
  cmps(c,0,(int32_t)c->r[3],0); // 804D1CB4
  c->r[20]=0u+0x00000000u; // 804D1CB8
  if (crb(c,2)) { goto L_804D1D18; } // 804D1CBC
  c->r[17]=0u+0x00000000u; // 804D1CC0
  c->r[18]=0u+0x00000001u; // 804D1CC4
  goto L_804D1D10; // 804D1CC8
L_804D1CCC:;
  c->r[4]=c->r[20]|c->r[20]; // 804D1CCC
  c->r[3]=c->r[1]+0x0000004Cu; // 804D1CD0
  c->lr=0x804D1CD8u; f_804AC4AC(c); // 804D1CD4
  cmps(c,0,(int32_t)c->r[3],0); // 804D1CD8
  if (crb(c,2)) { goto L_804D1CEC; } // 804D1CDC
  c->r[0]=R32(c->r[3]+0x00000014u); // 804D1CE0
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 804D1CE4
  goto L_804D1CF0; // 804D1CE8
L_804D1CEC:;
  c->r[0]=0u+0x00000000u; // 804D1CEC
L_804D1CF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D1CF0
  if (crb(c,2)) { goto L_804D1D04; } // 804D1CF4
  c->r[3]=R32(c->r[16]+0x00000148u); // 804D1CF8
  W8(c->r[3]+c->r[20],c->r[18]); // 804D1CFC
  goto L_804D1D0C; // 804D1D00
L_804D1D04:;
  c->r[3]=R32(c->r[16]+0x00000148u); // 804D1D04
  W8(c->r[3]+c->r[20],c->r[17]); // 804D1D08
L_804D1D0C:;
  c->r[20]=c->r[20]+0x00000001u; // 804D1D0C
L_804D1D10:;
  cmpu(c,0,c->r[20],c->r[19]); // 804D1D10
  if (crb(c,0)) { IRQCHK(c); goto L_804D1CCC; } // 804D1D14
L_804D1D18:;
  c->r[17]=0u+0x00000000u; // 804D1D18
  c->r[29]=0u+0x00000000u; // 804D1D1C
  c->r[28]=0u+0x00000000u; // 804D1D20
  c->r[27]=0u+0x00000000u; // 804D1D24
  c->r[26]=0u+0x00000000u; // 804D1D28
  c->r[25]=0u+0x00000000u; // 804D1D2C
  c->r[24]=0u+0x00000000u; // 804D1D30
  c->r[23]=0u+0x00000000u; // 804D1D34
  c->r[22]=0u+0x00000000u; // 804D1D38
  c->r[21]=0u+0x00000000u; // 804D1D3C
  c->r[20]=0u+0x00000000u; // 804D1D40
  c->r[19]=0u+0x00000000u; // 804D1D44
  c->r[18]=0u+0x00000000u; // 804D1D48
  c->r[31]=0u+0x00000000u; // 804D1D4C
  goto L_804D2004; // 804D1D50
L_804D1D54:;
  c->r[4]=c->r[17]|c->r[17]; // 804D1D54
  c->r[3]=c->r[1]+0x0000004Cu; // 804D1D58
  c->lr=0x804D1D60u; f_804ACA48(c); // 804D1D5C
  W32(c->r[1]+0x00000048u,c->r[3]); // 804D1D60
  c->r[3]=R32(c->r[16]+0x00000140u); // 804D1D64
  W32(c->r[3]+c->r[29],c->r[31]); // 804D1D68
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 804D1D6C
  cmps(c,0,(int32_t)c->r[0],0); // 804D1D70
  if (crb(c,2)) { goto L_804D1D94; } // 804D1D74
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1D78
  c->r[3]=c->r[1]+0x00000044u; // 804D1D7C
  c->r[0]=c->r[4]+0x00000040u; // 804D1D80
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D1D84
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 804D1D88
  c->r[4]=c->r[0]+c->r[28]; // 804D1D8C
  c->lr=0x804D1D94u; f_804AE8B8(c); // 804D1D90
L_804D1D94:;
  c->r[0]=R32(c->r[16]+0x00000150u); // 804D1D94
  cmps(c,0,(int32_t)c->r[0],0); // 804D1D98
  if (crb(c,2)) { goto L_804D1DBC; } // 804D1D9C
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1DA0
  c->r[3]=c->r[1]+0x00000040u; // 804D1DA4
  c->r[0]=c->r[4]+0x00000144u; // 804D1DA8
  W32(c->r[1]+0x00000040u,c->r[0]); // 804D1DAC
  c->r[0]=R32(c->r[16]+0x00000150u); // 804D1DB0
  c->r[4]=c->r[0]+c->r[27]; // 804D1DB4
  c->lr=0x804D1DBCu; f_804AE9EC(c); // 804D1DB8
L_804D1DBC:;
  c->r[0]=R32(c->r[16]+0x00000154u); // 804D1DBC
  cmps(c,0,(int32_t)c->r[0],0); // 804D1DC0
  if (crb(c,2)) { goto L_804D1DE4; } // 804D1DC4
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1DC8
  c->r[3]=c->r[1]+0x0000003Cu; // 804D1DCC
  c->r[0]=c->r[4]+0x000001A8u; // 804D1DD0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804D1DD4
  c->r[0]=R32(c->r[16]+0x00000154u); // 804D1DD8
  c->r[4]=c->r[0]+c->r[26]; // 804D1DDC
  c->lr=0x804D1DE4u; f_804AEA74(c); // 804D1DE0
L_804D1DE4:;
  c->r[0]=R32(c->r[16]+0x00000158u); // 804D1DE4
  cmps(c,0,(int32_t)c->r[0],0); // 804D1DE8
  if (crb(c,2)) { goto L_804D1E0C; } // 804D1DEC
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1DF0
  c->r[3]=c->r[1]+0x00000038u; // 804D1DF4
  c->r[0]=c->r[4]+0x000003F0u; // 804D1DF8
  W32(c->r[1]+0x00000038u,c->r[0]); // 804D1DFC
  c->r[0]=R32(c->r[16]+0x00000158u); // 804D1E00
  c->r[4]=c->r[0]+c->r[25]; // 804D1E04
  c->lr=0x804D1E0Cu; f_804AFA58(c); // 804D1E08
L_804D1E0C:;
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 804D1E0C
  cmps(c,0,(int32_t)c->r[0],0); // 804D1E10
  if (crb(c,2)) { goto L_804D1E34; } // 804D1E14
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1E18
  c->r[3]=c->r[1]+0x00000034u; // 804D1E1C
  c->r[0]=c->r[4]+0x00000014u; // 804D1E20
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D1E24
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 804D1E28
  c->r[4]=c->r[0]+c->r[24]; // 804D1E2C
  c->lr=0x804D1E34u; f_804AEC88(c); // 804D1E30
L_804D1E34:;
  c->r[0]=R32(c->r[16]+0x00000160u); // 804D1E34
  cmps(c,0,(int32_t)c->r[0],0); // 804D1E38
  if (crb(c,2)) { goto L_804D1E5C; } // 804D1E3C
  c->r[4]=R32(c->r[1]+0x00000048u); // 804D1E40
  c->r[3]=c->r[1]+0x00000030u; // 804D1E44
  c->r[0]=c->r[4]+0x0000001Cu; // 804D1E48
  W32(c->r[1]+0x00000030u,c->r[0]); // 804D1E4C
  c->r[0]=R32(c->r[16]+0x00000160u); // 804D1E50
  c->r[4]=c->r[0]+c->r[23]; // 804D1E54
  c->lr=0x804D1E5Cu; f_804AEDA4(c); // 804D1E58
L_804D1E5C:;
  c->r[0]=R32(c->r[16]+0x00000164u); // 804D1E5C
  cmps(c,0,(int32_t)c->r[0],0); // 804D1E60
  if (crb(c,2)) { goto L_804D1EA8; } // 804D1E64
  c->r[3]=R32(c->r[1]+0x00000048u); // 804D1E68
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D1E6C
  cmps(c,0,(int32_t)c->r[0],0); // 804D1E70
  if (crb(c,2)) { goto L_804D1E80; } // 804D1E74
  c->r[0]=c->r[3]+c->r[0]; // 804D1E78
  goto L_804D1E84; // 804D1E7C
L_804D1E80:;
  c->r[0]=0u+0x00000000u; // 804D1E80
L_804D1E84:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 804D1E84
  c->r[3]=c->r[1]+0x00000028u; // 804D1E88
  c->r[0]=R32(c->r[16]+0x00000164u); // 804D1E8C
  c->r[4]=c->r[0]+c->r[22]; // 804D1E90
  c->lr=0x804D1E98u; f_804AE6E8(c); // 804D1E94
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 804D1E98
  c->r[3]=c->r[1]+0x0000002Cu; // 804D1E9C
  c->r[4]=0u+0x00000000u; // 804D1EA0
  c->lr=0x804D1EA8u; f_804AE618(c); // 804D1EA4
L_804D1EA8:;
  c->r[0]=R32(c->r[16]+0x00000168u); // 804D1EA8
  cmps(c,0,(int32_t)c->r[0],0); // 804D1EAC
  if (crb(c,2)) { goto L_804D1EF8; } // 804D1EB0
  c->r[3]=R32(c->r[1]+0x00000048u); // 804D1EB4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D1EB8
  cmps(c,0,(int32_t)c->r[0],0); // 804D1EBC
  if (crb(c,2)) { goto L_804D1ECC; } // 804D1EC0
  c->r[3]=c->r[3]+c->r[0]; // 804D1EC4
  goto L_804D1ED0; // 804D1EC8
L_804D1ECC:;
  c->r[3]=0u+0x00000000u; // 804D1ECC
L_804D1ED0:;
  c->r[0]=c->r[3]+0x00000020u; // 804D1ED0
  c->r[3]=c->r[1]+0x00000020u; // 804D1ED4
  W32(c->r[1]+0x00000020u,c->r[0]); // 804D1ED8
  c->r[0]=R32(c->r[16]+0x00000168u); // 804D1EDC
  c->r[4]=c->r[0]+c->r[21]; // 804D1EE0
  c->lr=0x804D1EE8u; f_804AE724(c); // 804D1EE4
  W32(c->r[1]+0x00000024u,c->r[3]); // 804D1EE8
  c->r[3]=c->r[1]+0x00000024u; // 804D1EEC
  c->r[4]=0u+0x00000000u; // 804D1EF0
  c->lr=0x804D1EF8u; f_804AE634(c); // 804D1EF4
L_804D1EF8:;
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 804D1EF8
  cmps(c,0,(int32_t)c->r[0],0); // 804D1EFC
  if (crb(c,2)) { goto L_804D1F48; } // 804D1F00
  c->r[3]=R32(c->r[1]+0x00000048u); // 804D1F04
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D1F08
  cmps(c,0,(int32_t)c->r[0],0); // 804D1F0C
  if (crb(c,2)) { goto L_804D1F1C; } // 804D1F10
  c->r[3]=c->r[3]+c->r[0]; // 804D1F14
  goto L_804D1F20; // 804D1F18
L_804D1F1C:;
  c->r[3]=0u+0x00000000u; // 804D1F1C
L_804D1F20:;
  c->r[0]=c->r[3]+0x000000A0u; // 804D1F20
  c->r[3]=c->r[1]+0x00000018u; // 804D1F24
  W32(c->r[1]+0x00000018u,c->r[0]); // 804D1F28
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 804D1F2C
  c->r[4]=c->r[0]+c->r[20]; // 804D1F30
  c->lr=0x804D1F38u; f_804AE760(c); // 804D1F34
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804D1F38
  c->r[3]=c->r[1]+0x0000001Cu; // 804D1F3C
  c->r[4]=0u+0x00000000u; // 804D1F40
  c->lr=0x804D1F48u; f_804AE650(c); // 804D1F44
L_804D1F48:;
  c->r[0]=R32(c->r[16]+0x00000170u); // 804D1F48
  cmps(c,0,(int32_t)c->r[0],0); // 804D1F4C
  if (crb(c,2)) { goto L_804D1F98; } // 804D1F50
  c->r[3]=R32(c->r[1]+0x00000048u); // 804D1F54
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D1F58
  cmps(c,0,(int32_t)c->r[0],0); // 804D1F5C
  if (crb(c,2)) { goto L_804D1F6C; } // 804D1F60
  c->r[3]=c->r[3]+c->r[0]; // 804D1F64
  goto L_804D1F70; // 804D1F68
L_804D1F6C:;
  c->r[3]=0u+0x00000000u; // 804D1F6C
L_804D1F70:;
  c->r[0]=c->r[3]+0x000000E0u; // 804D1F70
  c->r[3]=c->r[1]+0x00000010u; // 804D1F74
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D1F78
  c->r[0]=R32(c->r[16]+0x00000170u); // 804D1F7C
  c->r[4]=c->r[0]+c->r[19]; // 804D1F80
  c->lr=0x804D1F88u; f_804AE79C(c); // 804D1F84
  W32(c->r[1]+0x00000014u,c->r[3]); // 804D1F88
  c->r[3]=c->r[1]+0x00000014u; // 804D1F8C
  c->r[4]=0u+0x00000000u; // 804D1F90
  c->lr=0x804D1F98u; f_804AE66C(c); // 804D1F94
L_804D1F98:;
  c->r[0]=R32(c->r[16]+0x00000174u); // 804D1F98
  cmps(c,0,(int32_t)c->r[0],0); // 804D1F9C
  if (crb(c,2)) { goto L_804D1FD0; } // 804D1FA0
  c->r[3]=c->r[1]+0x00000048u; // 804D1FA4
  c->lr=0x804D1FACu; f_804AFE68(c); // 804D1FA8
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D1FAC
  c->r[3]=c->r[1]+0x00000008u; // 804D1FB0
  c->r[0]=R32(c->r[16]+0x00000174u); // 804D1FB4
  c->r[4]=c->r[0]+c->r[18]; // 804D1FB8
  c->lr=0x804D1FC0u; f_804AE57C(c); // 804D1FBC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804D1FC0
  c->r[3]=c->r[1]+0x0000000Cu; // 804D1FC4
  c->r[4]=0u+0x00000000u; // 804D1FC8
  c->lr=0x804D1FD0u; f_804AE5E0(c); // 804D1FCC
L_804D1FD0:;
  c->r[29]=c->r[29]+0x00000004u; // 804D1FD0
  c->r[28]=c->r[28]+0x00000104u; // 804D1FD4
  c->r[27]=c->r[27]+0x00000064u; // 804D1FD8
  c->r[26]=c->r[26]+0x00000248u; // 804D1FDC
  c->r[25]=c->r[25]+0x00000028u; // 804D1FE0
  c->r[24]=c->r[24]+0x00000008u; // 804D1FE4
  c->r[23]=c->r[23]+0x0000000Cu; // 804D1FE8
  c->r[22]=c->r[22]+0x00000020u; // 804D1FEC
  c->r[21]=c->r[21]+0x00000080u; // 804D1FF0
  c->r[20]=c->r[20]+0x00000040u; // 804D1FF4
  c->r[19]=c->r[19]+0x000000A0u; // 804D1FF8
  c->r[18]=c->r[18]+0x00000200u; // 804D1FFC
  c->r[17]=c->r[17]+0x00000001u; // 804D2000
L_804D2004:;
  cmpu(c,0,c->r[17],c->r[30]); // 804D2004
  if (crb(c,0)) { IRQCHK(c); goto L_804D1D54; } // 804D2008
  c->r[11]=c->r[1]+0x00000090u; // 804D200C
  c->lr=0x804D2014u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D2010
  c->r[0]=R32(c->r[1]+0x00000094u); // 804D2014
  c->lr=c->r[0]; // 804D2018
  c->r[1]=c->r[1]+0x00000090u; // 804D201C
  return; // 804D2020
}

// CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
void f_804D2024(Ctx* __restrict c) {
  trace_call(0x804D2024u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2024
  c->r[0]=c->lr; // 804D2028
  W32(c->r[1]+0x00000064u,c->r[0]); // 804D202C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 804D2030
  c->r[31]=c->r[5]|c->r[5]; // 804D2034
  W32(c->r[1]+0x00000058u,c->r[30]); // 804D2038
  c->r[30]=c->r[4]|c->r[4]; // 804D203C
  W32(c->r[1]+0x00000054u,c->r[29]); // 804D2040
  c->r[29]=c->r[3]|c->r[3]; // 804D2044
  c->r[0]=R32(c->r[3]+0x000000E8u); // 804D2048
  c->r[3]=c->r[1]+0x00000048u; // 804D204C
  W32(c->r[1]+0x00000048u,c->r[0]); // 804D2050
  c->lr=0x804D2058u; f_804ACA48(c); // 804D2054
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 804D2058
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 804D205C
  if (crb(c,2)) { goto L_804D208C; } // 804D2060
  c->r[0]=R32(c->r[29]+0x0000014Cu); // 804D2064
  cmps(c,0,(int32_t)c->r[0],0); // 804D2068
  if (crb(c,2)) { goto L_804D208C; } // 804D206C
  c->r[0]=c->r[3]+0x00000040u; // 804D2070
  c->r[3]=c->r[1]+0x00000044u; // 804D2074
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D2078
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)260); // 804D207C
  c->r[4]=R32(c->r[29]+0x0000014Cu); // 804D2080
  c->r[4]=c->r[4]+c->r[0]; // 804D2084
  c->lr=0x804D208Cu; f_804AE8B8(c); // 804D2088
L_804D208C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 804D208C
  if (crb(c,2)) { goto L_804D20C0; } // 804D2090
  c->r[0]=R32(c->r[29]+0x00000150u); // 804D2094
  cmps(c,0,(int32_t)c->r[0],0); // 804D2098
  if (crb(c,2)) { goto L_804D20C0; } // 804D209C
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 804D20A0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)100); // 804D20A4
  c->r[3]=c->r[1]+0x00000040u; // 804D20A8
  c->r[4]=c->r[4]+0x00000144u; // 804D20AC
  W32(c->r[1]+0x00000040u,c->r[4]); // 804D20B0
  c->r[4]=R32(c->r[29]+0x00000150u); // 804D20B4
  c->r[4]=c->r[4]+c->r[0]; // 804D20B8
  c->lr=0x804D20C0u; f_804AE9EC(c); // 804D20BC
L_804D20C0:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 804D20C0
  if (crb(c,2)) { goto L_804D20F4; } // 804D20C4
  c->r[0]=R32(c->r[29]+0x00000154u); // 804D20C8
  cmps(c,0,(int32_t)c->r[0],0); // 804D20CC
  if (crb(c,2)) { goto L_804D20F4; } // 804D20D0
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 804D20D4
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)584); // 804D20D8
  c->r[3]=c->r[1]+0x0000003Cu; // 804D20DC
  c->r[4]=c->r[4]+0x000001A8u; // 804D20E0
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 804D20E4
  c->r[4]=R32(c->r[29]+0x00000154u); // 804D20E8
  c->r[4]=c->r[4]+c->r[0]; // 804D20EC
  c->lr=0x804D20F4u; f_804AEA74(c); // 804D20F0
L_804D20F4:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 804D20F4
  if (crb(c,2)) { goto L_804D2128; } // 804D20F8
  c->r[0]=R32(c->r[29]+0x00000158u); // 804D20FC
  cmps(c,0,(int32_t)c->r[0],0); // 804D2100
  if (crb(c,2)) { goto L_804D2128; } // 804D2104
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 804D2108
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 804D210C
  c->r[3]=c->r[1]+0x00000038u; // 804D2110
  c->r[4]=c->r[4]+0x000003F0u; // 804D2114
  W32(c->r[1]+0x00000038u,c->r[4]); // 804D2118
  c->r[4]=R32(c->r[29]+0x00000158u); // 804D211C
  c->r[4]=c->r[4]+c->r[0]; // 804D2120
  c->lr=0x804D2128u; f_804AFA58(c); // 804D2124
L_804D2128:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 804D2128
  if (crb(c,2)) { goto L_804D215C; } // 804D212C
  c->r[0]=R32(c->r[29]+0x0000015Cu); // 804D2130
  cmps(c,0,(int32_t)c->r[0],0); // 804D2134
  if (crb(c,2)) { goto L_804D215C; } // 804D2138
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 804D213C
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 804D2140
  c->r[3]=c->r[1]+0x00000034u; // 804D2144
  c->r[4]=c->r[4]+0x00000014u; // 804D2148
  W32(c->r[1]+0x00000034u,c->r[4]); // 804D214C
  c->r[4]=R32(c->r[29]+0x0000015Cu); // 804D2150
  c->r[4]=c->r[4]+c->r[0]; // 804D2154
  c->lr=0x804D215Cu; f_804AEC88(c); // 804D2158
L_804D215C:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 804D215C
  if (crb(c,2)) { goto L_804D2190; } // 804D2160
  c->r[0]=R32(c->r[29]+0x00000160u); // 804D2164
  cmps(c,0,(int32_t)c->r[0],0); // 804D2168
  if (crb(c,2)) { goto L_804D2190; } // 804D216C
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 804D2170
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 804D2174
  c->r[3]=c->r[1]+0x00000030u; // 804D2178
  c->r[4]=c->r[4]+0x0000001Cu; // 804D217C
  W32(c->r[1]+0x00000030u,c->r[4]); // 804D2180
  c->r[4]=R32(c->r[29]+0x00000160u); // 804D2184
  c->r[4]=c->r[4]+c->r[0]; // 804D2188
  c->lr=0x804D2190u; f_804AEDA4(c); // 804D218C
L_804D2190:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 804D2190
  if (crb(c,2)) { goto L_804D21E8; } // 804D2194
  c->r[0]=R32(c->r[29]+0x00000164u); // 804D2198
  cmps(c,0,(int32_t)c->r[0],0); // 804D219C
  if (crb(c,2)) { goto L_804D21E8; } // 804D21A0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 804D21A4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D21A8
  cmps(c,0,(int32_t)c->r[0],0); // 804D21AC
  if (crb(c,2)) { goto L_804D21BC; } // 804D21B0
  c->r[0]=c->r[3]+c->r[0]; // 804D21B4
  goto L_804D21C0; // 804D21B8
L_804D21BC:;
  c->r[0]=0u+0x00000000u; // 804D21BC
L_804D21C0:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 804D21C0
  c->r[0]=rotl(c->r[30],5)&0xFFFFFFE0u; // 804D21C4
  c->r[3]=c->r[1]+0x00000028u; // 804D21C8
  c->r[4]=R32(c->r[29]+0x00000164u); // 804D21CC
  c->r[4]=c->r[4]+c->r[0]; // 804D21D0
  c->lr=0x804D21D8u; f_804AE6E8(c); // 804D21D4
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 804D21D8
  c->r[3]=c->r[1]+0x0000002Cu; // 804D21DC
  c->r[4]=0u+0x00000000u; // 804D21E0
  c->lr=0x804D21E8u; f_804AE618(c); // 804D21E4
L_804D21E8:;
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 804D21E8
  if (crb(c,2)) { goto L_804D2244; } // 804D21EC
  c->r[0]=R32(c->r[29]+0x00000168u); // 804D21F0
  cmps(c,0,(int32_t)c->r[0],0); // 804D21F4
  if (crb(c,2)) { goto L_804D2244; } // 804D21F8
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 804D21FC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D2200
  cmps(c,0,(int32_t)c->r[0],0); // 804D2204
  if (crb(c,2)) { goto L_804D2214; } // 804D2208
  c->r[3]=c->r[3]+c->r[0]; // 804D220C
  goto L_804D2218; // 804D2210
L_804D2214:;
  c->r[3]=0u+0x00000000u; // 804D2214
L_804D2218:;
  c->r[3]=c->r[3]+0x00000020u; // 804D2218
  c->r[0]=rotl(c->r[30],7)&0xFFFFFF80u; // 804D221C
  W32(c->r[1]+0x00000020u,c->r[3]); // 804D2220
  c->r[3]=c->r[1]+0x00000020u; // 804D2224
  c->r[4]=R32(c->r[29]+0x00000168u); // 804D2228
  c->r[4]=c->r[4]+c->r[0]; // 804D222C
  c->lr=0x804D2234u; f_804AE724(c); // 804D2230
  W32(c->r[1]+0x00000024u,c->r[3]); // 804D2234
  c->r[3]=c->r[1]+0x00000024u; // 804D2238
  c->r[4]=0u+0x00000000u; // 804D223C
  c->lr=0x804D2244u; f_804AE634(c); // 804D2240
L_804D2244:;
  c->r[0]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[0]); // 804D2244
  if (crb(c,2)) { goto L_804D22A0; } // 804D2248
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 804D224C
  cmps(c,0,(int32_t)c->r[0],0); // 804D2250
  if (crb(c,2)) { goto L_804D22A0; } // 804D2254
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 804D2258
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D225C
  cmps(c,0,(int32_t)c->r[0],0); // 804D2260
  if (crb(c,2)) { goto L_804D2270; } // 804D2264
  c->r[3]=c->r[3]+c->r[0]; // 804D2268
  goto L_804D2274; // 804D226C
L_804D2270:;
  c->r[3]=0u+0x00000000u; // 804D2270
L_804D2274:;
  c->r[3]=c->r[3]+0x000000A0u; // 804D2274
  c->r[0]=rotl(c->r[30],6)&0xFFFFFFC0u; // 804D2278
  W32(c->r[1]+0x00000018u,c->r[3]); // 804D227C
  c->r[3]=c->r[1]+0x00000018u; // 804D2280
  c->r[4]=R32(c->r[29]+0x0000016Cu); // 804D2284
  c->r[4]=c->r[4]+c->r[0]; // 804D2288
  c->lr=0x804D2290u; f_804AE760(c); // 804D228C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804D2290
  c->r[3]=c->r[1]+0x0000001Cu; // 804D2294
  c->r[4]=0u+0x00000000u; // 804D2298
  c->lr=0x804D22A0u; f_804AE650(c); // 804D229C
L_804D22A0:;
  c->r[0]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[0]); // 804D22A0
  if (crb(c,2)) { goto L_804D22FC; } // 804D22A4
  c->r[0]=R32(c->r[29]+0x00000170u); // 804D22A8
  cmps(c,0,(int32_t)c->r[0],0); // 804D22AC
  if (crb(c,2)) { goto L_804D22FC; } // 804D22B0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 804D22B4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D22B8
  cmps(c,0,(int32_t)c->r[0],0); // 804D22BC
  if (crb(c,2)) { goto L_804D22CC; } // 804D22C0
  c->r[3]=c->r[3]+c->r[0]; // 804D22C4
  goto L_804D22D0; // 804D22C8
L_804D22CC:;
  c->r[3]=0u+0x00000000u; // 804D22CC
L_804D22D0:;
  c->r[0]=c->r[3]+0x000000E0u; // 804D22D0
  c->r[3]=c->r[1]+0x00000010u; // 804D22D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D22D8
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)160); // 804D22DC
  c->r[4]=R32(c->r[29]+0x00000170u); // 804D22E0
  c->r[4]=c->r[4]+c->r[0]; // 804D22E4
  c->lr=0x804D22ECu; f_804AE79C(c); // 804D22E8
  W32(c->r[1]+0x00000014u,c->r[3]); // 804D22EC
  c->r[3]=c->r[1]+0x00000014u; // 804D22F0
  c->r[4]=0u+0x00000000u; // 804D22F4
  c->lr=0x804D22FCu; f_804AE66C(c); // 804D22F8
L_804D22FC:;
  c->r[0]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[0]); // 804D22FC
  if (crb(c,2)) { goto L_804D2340; } // 804D2300
  c->r[0]=R32(c->r[29]+0x00000174u); // 804D2304
  cmps(c,0,(int32_t)c->r[0],0); // 804D2308
  if (crb(c,2)) { goto L_804D2340; } // 804D230C
  c->r[3]=c->r[1]+0x0000004Cu; // 804D2310
  c->lr=0x804D2318u; f_804AFE68(c); // 804D2314
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D2318
  c->r[0]=rotl(c->r[30],9)&0xFFFFFE00u; // 804D231C
  c->r[3]=c->r[1]+0x00000008u; // 804D2320
  c->r[4]=R32(c->r[29]+0x00000174u); // 804D2324
  c->r[4]=c->r[4]+c->r[0]; // 804D2328
  c->lr=0x804D2330u; f_804AE57C(c); // 804D232C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804D2330
  c->r[3]=c->r[1]+0x0000000Cu; // 804D2334
  c->r[4]=0u+0x00000000u; // 804D2338
  c->lr=0x804D2340u; f_804AE5E0(c); // 804D233C
L_804D2340:;
  c->r[4]=R32(c->r[29]+0x00000140u); // 804D2340
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 804D2344
  c->r[0]=R32(c->r[4]+c->r[3]); // 804D2348
  c->r[0]=c->r[0]&~c->r[31]; // 804D234C
  W32(c->r[4]+c->r[3],c->r[0]); // 804D2350
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 804D2354
  c->r[30]=R32(c->r[1]+0x00000058u); // 804D2358
  c->r[29]=R32(c->r[1]+0x00000054u); // 804D235C
  c->r[0]=R32(c->r[1]+0x00000064u); // 804D2360
  c->lr=c->r[0]; // 804D2364
  c->r[1]=c->r[1]+0x00000060u; // 804D2368
  return; // 804D236C
}

// SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_804D2370(Ctx* __restrict c) {
  trace_call(0x804D2370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2370
  c->r[0]=c->lr; // 804D2374
  cmps(c,1,(int32_t)c->r[4],0); // 804D2378
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D237C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D2380
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D2384
  c->r[30]=c->r[5]|c->r[5]; // 804D2388
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D238C
  c->r[29]=c->r[4]|c->r[4]; // 804D2390
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D2394
  c->r[28]=c->r[3]|c->r[3]; // 804D2398
  if (crb(c,6)) { goto L_804D24B0; } // 804D239C
  c->r[0]=R32(c->r[4]+0x00000004u); // 804D23A0
  cmps(c,0,(int32_t)c->r[0],0); // 804D23A4
  if (!crb(c,2)) { goto L_804D24B0; } // 804D23A8
  c->r[0]=c->r[5]+0xFFFFFFFBu; // 804D23AC
  cmpu(c,0,c->r[0],0x00000001u); // 804D23B0
  if (crb(c,1)) { goto L_804D24A8; } // 804D23B4
  c->r[31]=0u+0x00000000u; // 804D23B8
  if (crb(c,6)) { goto L_804D23F0; } // 804D23BC
  c->r[5]=0u+0x806B0000u; // 804D23C0
  c->r[3]=c->r[29]|c->r[29]; // 804D23C4
  c->r[5]=c->r[5]+0xFFFFBD00u; // 804D23C8
  c->r[4]=c->r[1]+0x00000008u; // 804D23CC
  W32(c->r[1]+0x00000008u,c->r[5]); // 804D23D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D23D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D23D8
  c->ctr=c->r[12]; // 804D23DC
  if (true) { c->lr=0x804D23E4u; dispatch(c,c->ctr); } // 804D23E0
  cmps(c,0,(int32_t)c->r[3],0); // 804D23E4
  if (crb(c,2)) { goto L_804D23F0; } // 804D23E8
  c->r[31]=0u+0x00000001u; // 804D23EC
L_804D23F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D23F0
  if (crb(c,2)) { goto L_804D2400; } // 804D23F4
  c->r[31]=c->r[29]|c->r[29]; // 804D23F8
  goto L_804D2404; // 804D23FC
L_804D2400:;
  c->r[31]=0u+0x00000000u; // 804D2400
L_804D2404:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D2404
  if (crb(c,2)) { goto L_804D2484; } // 804D2408
  c->r[3]=c->r[31]|c->r[31]; // 804D240C
  c->r[4]=0u+0x00000004u; // 804D2410
  c->lr=0x804D2418u; f_804BDBE8(c); // 804D2414
  cmps(c,0,(int32_t)c->r[3],0); // 804D2418
  if (!crb(c,2)) { goto L_804D2428; } // 804D241C
  c->r[3]=0u+0x00000000u; // 804D2420
  goto L_804D24B4; // 804D2424
L_804D2428:;
  c->r[4]=R32(c->r[28]+0x00000138u); // 804D2428
  cmps(c,0,(int32_t)c->r[4],0); // 804D242C
  if (crb(c,2)) { goto L_804D2448; } // 804D2430
  c->r[12]=R32(c->r[28]+0x00000000u); // 804D2434
  c->r[3]=c->r[28]|c->r[28]; // 804D2438
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D243C
  c->ctr=c->r[12]; // 804D2440
  if (true) { c->lr=0x804D2448u; dispatch(c,c->ctr); } // 804D2444
L_804D2448:;
  W32(c->r[28]+0x00000138u,c->r[31]); // 804D2448
  c->r[4]=0u+0x00010000u; // 804D244C
  c->r[3]=c->r[31]|c->r[31]; // 804D2450
  c->r[6]=c->r[28]|c->r[28]; // 804D2454
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D2458
  c->r[4]=c->r[4]+0x00000002u; // 804D245C
  c->r[5]=0u+0x00000000u; // 804D2460
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D2464
  c->ctr=c->r[12]; // 804D2468
  if (true) { c->lr=0x804D2470u; dispatch(c,c->ctr); } // 804D246C
  c->r[0]=R32(c->r[28]+0x00000144u); // 804D2470
  c->r[3]=0u+0x00000001u; // 804D2474
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804D2478
  W32(c->r[28]+0x00000144u,c->r[0]); // 804D247C
  goto L_804D24B4; // 804D2480
L_804D2484:;
  cmps(c,0,(int32_t)c->r[30],6); // 804D2484
  if (!crb(c,2)) { goto L_804D24A0; } // 804D2488
  c->r[3]=c->r[28]|c->r[28]; // 804D248C
  c->r[4]=c->r[29]|c->r[29]; // 804D2490
  c->r[5]=c->r[30]|c->r[30]; // 804D2494
  c->lr=0x804D249Cu; f_804CEFA8(c); // 804D2498
  goto L_804D24B4; // 804D249C
L_804D24A0:;
  c->r[3]=0u+0x00000000u; // 804D24A0
  goto L_804D24B4; // 804D24A4
L_804D24A8:;
  c->lr=0x804D24ACu; f_804CEFA8(c); // 804D24A8
  goto L_804D24B4; // 804D24AC
L_804D24B0:;
  c->r[3]=0u+0x00000000u; // 804D24B0
L_804D24B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D24B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D24B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D24BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D24C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D24C4
  c->lr=c->r[0]; // 804D24C8
  c->r[1]=c->r[1]+0x00000020u; // 804D24CC
  return; // 804D24D0
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj
void f_804D24D4(Ctx* __restrict c) {
  trace_call(0x804D24D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D24D4
  c->r[0]=c->lr; // 804D24D8
  cmps(c,0,(int32_t)c->r[4],0); // 804D24DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D24E0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804D24E4
  c->r[31]=c->r[3]|c->r[3]; // 804D24E8
  W32(c->r[1]+0x00000038u,c->r[30]); // 804D24EC
  W32(c->r[1]+0x00000034u,c->r[29]); // 804D24F0
  W32(c->r[1]+0x00000030u,c->r[28]); // 804D24F4
  if (!crb(c,2)) { goto L_804D2504; } // 804D24F8
  c->r[3]=0u+0x00000000u; // 804D24FC
  goto L_804D26AC; // 804D2500
L_804D2504:;
  c->r[0]=R32(c->r[3]+0x00000138u); // 804D2504
  cmpu(c,0,c->r[4],c->r[0]); // 804D2508
  if (!crb(c,2)) { goto L_804D26A8; } // 804D250C
  c->r[3]=c->r[0]|c->r[0]; // 804D2510
  c->r[4]=0u+0x00010000u; // 804D2514
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D2518
  c->r[6]=c->r[31]|c->r[31]; // 804D251C
  c->r[4]=c->r[4]+0x00000003u; // 804D2520
  c->r[5]=0u+0x00000000u; // 804D2524
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D2528
  c->ctr=c->r[12]; // 804D252C
  if (true) { c->lr=0x804D2534u; dispatch(c,c->ctr); } // 804D2530
  c->r[0]=R32(c->r[31]+0x00000184u); // 804D2534
  c->r[3]=0u+0x00000000u; // 804D2538
  W32(c->r[31]+0x00000138u,c->r[3]); // 804D253C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D2540
  if (!crb(c,2)) { goto L_804D255C; } // 804D2544
  c->r[0]=R32(c->r[31]+0x00000144u); // 804D2548
  c->r[3]=0u+0x00000001u; // 804D254C
  c->r[0]=c->r[0]|0x00000001u; // 804D2550
  W32(c->r[31]+0x00000144u,c->r[0]); // 804D2554
  goto L_804D26AC; // 804D2558
L_804D255C:;
  c->r[0]=R32(c->r[31]+0x00000178u); // 804D255C
  cmps(c,0,(int32_t)c->r[0],0); // 804D2560
  if (crb(c,2)) { goto L_804D25C8; } // 804D2564
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D2568
  c->r[3]=c->r[1]+0x0000001Cu; // 804D256C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D2570
  c->lr=0x804D2578u; f_804AC62C(c); // 804D2574
  c->r[30]=c->r[3]|c->r[3]; // 804D2578
  c->r[28]=0u+0x00000000u; // 804D257C
  c->r[29]=0u+0x00000000u; // 804D2580
  goto L_804D25C0; // 804D2584
L_804D2588:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D2588
  c->r[4]=c->r[28]|c->r[28]; // 804D258C
  c->r[3]=c->r[1]+0x00000018u; // 804D2590
  W32(c->r[1]+0x00000018u,c->r[0]); // 804D2594
  c->lr=0x804D259Cu; f_804AC5D8(c); // 804D2598
  W32(c->r[1]+0x00000028u,c->r[3]); // 804D259C
  c->r[4]=R32(c->r[31]+0x00000178u); // 804D25A0
  c->r[4]=R32(c->r[4]+c->r[29]); // 804D25A4
  cmpu(c,0,c->r[3],c->r[4]); // 804D25A8
  if (crb(c,2)) { goto L_804D25B8; } // 804D25AC
  c->r[3]=c->r[1]+0x00000028u; // 804D25B0
  c->lr=0x804D25B8u; f_804B0230(c); // 804D25B4
L_804D25B8:;
  c->r[29]=c->r[29]+0x00000004u; // 804D25B8
  c->r[28]=c->r[28]+0x00000001u; // 804D25BC
L_804D25C0:;
  cmpu(c,0,c->r[28],c->r[30]); // 804D25C0
  if (crb(c,0)) { IRQCHK(c); goto L_804D2588; } // 804D25C4
L_804D25C8:;
  c->r[0]=R32(c->r[31]+0x0000017Cu); // 804D25C8
  cmps(c,0,(int32_t)c->r[0],0); // 804D25CC
  if (crb(c,2)) { goto L_804D2634; } // 804D25D0
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D25D4
  c->r[3]=c->r[1]+0x00000014u; // 804D25D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D25DC
  c->lr=0x804D25E4u; f_804AC758(c); // 804D25E0
  c->r[30]=c->r[3]|c->r[3]; // 804D25E4
  c->r[28]=0u+0x00000000u; // 804D25E8
  c->r[29]=0u+0x00000000u; // 804D25EC
  goto L_804D262C; // 804D25F0
L_804D25F4:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D25F4
  c->r[4]=c->r[28]|c->r[28]; // 804D25F8
  c->r[3]=c->r[1]+0x00000010u; // 804D25FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D2600
  c->lr=0x804D2608u; f_804AC704(c); // 804D2604
  W32(c->r[1]+0x00000024u,c->r[3]); // 804D2608
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 804D260C
  c->r[4]=R32(c->r[4]+c->r[29]); // 804D2610
  cmpu(c,0,c->r[3],c->r[4]); // 804D2614
  if (crb(c,2)) { goto L_804D2624; } // 804D2618
  c->r[3]=c->r[1]+0x00000024u; // 804D261C
  c->lr=0x804D2624u; f_804B0300(c); // 804D2620
L_804D2624:;
  c->r[29]=c->r[29]+0x00000004u; // 804D2624
  c->r[28]=c->r[28]+0x00000001u; // 804D2628
L_804D262C:;
  cmpu(c,0,c->r[28],c->r[30]); // 804D262C
  if (crb(c,0)) { IRQCHK(c); goto L_804D25F4; } // 804D2630
L_804D2634:;
  c->r[0]=R32(c->r[31]+0x00000180u); // 804D2634
  cmps(c,0,(int32_t)c->r[0],0); // 804D2638
  if (crb(c,2)) { goto L_804D26A0; } // 804D263C
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D2640
  c->r[3]=c->r[1]+0x0000000Cu; // 804D2644
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D2648
  c->lr=0x804D2650u; f_804AC884(c); // 804D264C
  c->r[30]=c->r[3]|c->r[3]; // 804D2650
  c->r[28]=0u+0x00000000u; // 804D2654
  c->r[29]=0u+0x00000000u; // 804D2658
  goto L_804D2698; // 804D265C
L_804D2660:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D2660
  c->r[4]=c->r[28]|c->r[28]; // 804D2664
  c->r[3]=c->r[1]+0x00000008u; // 804D2668
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D266C
  c->lr=0x804D2674u; f_804AC830(c); // 804D2670
  W32(c->r[1]+0x00000020u,c->r[3]); // 804D2674
  c->r[4]=R32(c->r[31]+0x00000180u); // 804D2678
  c->r[4]=R32(c->r[4]+c->r[29]); // 804D267C
  cmpu(c,0,c->r[3],c->r[4]); // 804D2680
  if (crb(c,2)) { goto L_804D2690; } // 804D2684
  c->r[3]=c->r[1]+0x00000020u; // 804D2688
  c->lr=0x804D2690u; f_804B03DC(c); // 804D268C
L_804D2690:;
  c->r[29]=c->r[29]+0x00000004u; // 804D2690
  c->r[28]=c->r[28]+0x00000001u; // 804D2694
L_804D2698:;
  cmpu(c,0,c->r[28],c->r[30]); // 804D2698
  if (crb(c,0)) { IRQCHK(c); goto L_804D2660; } // 804D269C
L_804D26A0:;
  c->r[3]=0u+0x00000001u; // 804D26A0
  goto L_804D26AC; // 804D26A4
L_804D26A8:;
  c->lr=0x804D26ACu; f_804CF5A4(c); // 804D26A8
L_804D26AC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D26AC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804D26B0
  c->r[30]=R32(c->r[1]+0x00000038u); // 804D26B4
  c->r[29]=R32(c->r[1]+0x00000034u); // 804D26B8
  c->r[28]=R32(c->r[1]+0x00000030u); // 804D26BC
  c->lr=c->r[0]; // 804D26C0
  c->r[1]=c->r[1]+0x00000040u; // 804D26C4
  return; // 804D26C8
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_804D26CC(Ctx* __restrict c) {
  trace_call(0x804D26CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D26CC
  c->r[0]=c->lr; // 804D26D0
  cmps(c,0,(int32_t)c->r[4],5); // 804D26D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D26D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D26DC
  if (!crb(c,2)) { goto L_804D2704; } // 804D26E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D26E4
  c->r[31]=R32(c->r[3]+0x00000138u); // 804D26E8
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D26EC
  c->r[4]=c->r[31]|c->r[31]; // 804D26F0
  c->ctr=c->r[12]; // 804D26F4
  if (true) { c->lr=0x804D26FCu; dispatch(c,c->ctr); } // 804D26F8
  c->r[3]=c->r[31]|c->r[31]; // 804D26FC
  goto L_804D2708; // 804D2700
L_804D2704:;
  c->lr=0x804D2708u; f_804CF71C(c); // 804D2704
L_804D2708:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D2708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D270C
  c->lr=c->r[0]; // 804D2710
  c->r[1]=c->r[1]+0x00000010u; // 804D2714
  return; // 804D2718
}

// fn_804D271C
void f_804D271C(Ctx* __restrict c) {
  trace_call(0x804D271Cu);
  cmps(c,0,(int32_t)c->r[4],5); // 804D271C
  if (!crb(c,2)) { goto L_804D272C; } // 804D2720
  c->r[3]=R32(c->r[3]+0x00000138u); // 804D2724
  return; // 804D2728
L_804D272C:;
  f_804CF808(c); return; // 804D272C
  return; // 804D2730
}

// fn_804D2734
void f_804D2734(Ctx* __restrict c) {
  trace_call(0x804D2734u);
  cmps(c,0,(int32_t)c->r[4],5); // 804D2734
  if (!crb(c,2)) { goto L_804D2744; } // 804D2738
  c->r[3]=R32(c->r[3]+0x00000138u); // 804D273C
  return; // 804D2740
L_804D2744:;
  f_804CF870(c); return; // 804D2744
  return; // 804D2748
}

// fn_804D274C
void f_804D274C(Ctx* __restrict c) {
  trace_call(0x804D274Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D274C
  c->r[0]=c->lr; // 804D2750
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D2754
  c->r[0]=R32(c->r[5]+0x00000000u); // 804D2758
  c->r[5]=c->r[1]+0x00000010u; // 804D275C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804D2760
  c->r[11]=R32(c->r[1]+0x00000038u); // 804D2764
  W32(c->r[1]+0x00000028u,c->r[30]); // 804D2768
  c->r[30]=R32(c->r[1]+0x00000040u); // 804D276C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804D2770
  c->r[29]=c->r[3]|c->r[3]; // 804D2774
  c->r[31]=R32(c->r[1]+0x00000048u); // 804D2778
  W32(c->r[1]+0x00000020u,c->r[28]); // 804D277C
  c->r[28]=R32(c->r[1]+0x00000044u); // 804D2780
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D2784
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 804D2788
  W32(c->r[1]+0x00000008u,c->r[11]); // 804D278C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D2790
  c->lr=0x804D2798u; f_804CFA9C(c); // 804D2794
  c->r[4]=0u+0x80720000u; // 804D2798
  c->r[0]=0u+0x00000000u; // 804D279C
  c->r[4]=c->r[4]+0xFFFFA568u; // 804D27A0
  W32(c->r[29]+0x00000138u,c->r[0]); // 804D27A4
  c->r[3]=c->r[29]|c->r[29]; // 804D27A8
  W32(c->r[29]+0x00000000u,c->r[4]); // 804D27AC
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 804D27B0
  W32(c->r[29]+0x00000140u,c->r[28]); // 804D27B4
  c->r[4]=R32(c->r[30]+0x00000000u); // 804D27B8
  c->r[0]=R32(c->r[30]+0x00000004u); // 804D27BC
  W32(c->r[29]+0x00000144u,c->r[4]); // 804D27C0
  W32(c->r[29]+0x00000148u,c->r[0]); // 804D27C4
  c->r[4]=R32(c->r[30]+0x00000008u); // 804D27C8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804D27CC
  W32(c->r[29]+0x0000014Cu,c->r[4]); // 804D27D0
  W32(c->r[29]+0x00000150u,c->r[0]); // 804D27D4
  c->r[4]=R32(c->r[30]+0x00000010u); // 804D27D8
  c->r[0]=R32(c->r[30]+0x00000014u); // 804D27DC
  W32(c->r[29]+0x00000154u,c->r[4]); // 804D27E0
  W32(c->r[29]+0x00000158u,c->r[0]); // 804D27E4
  c->r[4]=R32(c->r[30]+0x00000018u); // 804D27E8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 804D27EC
  W32(c->r[29]+0x0000015Cu,c->r[4]); // 804D27F0
  W32(c->r[29]+0x00000160u,c->r[0]); // 804D27F4
  c->r[4]=R32(c->r[30]+0x00000020u); // 804D27F8
  c->r[0]=R32(c->r[30]+0x00000024u); // 804D27FC
  W32(c->r[29]+0x00000164u,c->r[4]); // 804D2800
  W32(c->r[29]+0x00000168u,c->r[0]); // 804D2804
  c->r[4]=R32(c->r[30]+0x00000028u); // 804D2808
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 804D280C
  W32(c->r[29]+0x0000016Cu,c->r[4]); // 804D2810
  W32(c->r[29]+0x00000170u,c->r[0]); // 804D2814
  c->r[4]=R32(c->r[30]+0x00000030u); // 804D2818
  c->r[0]=R32(c->r[30]+0x00000034u); // 804D281C
  W32(c->r[29]+0x00000174u,c->r[4]); // 804D2820
  W32(c->r[29]+0x00000178u,c->r[0]); // 804D2824
  c->r[4]=R32(c->r[30]+0x00000038u); // 804D2828
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 804D282C
  W32(c->r[29]+0x0000017Cu,c->r[4]); // 804D2830
  W32(c->r[29]+0x00000180u,c->r[0]); // 804D2834
  W32(c->r[29]+0x00000184u,c->r[31]); // 804D2838
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804D283C
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D2840
  c->r[29]=R32(c->r[1]+0x00000024u); // 804D2844
  c->r[28]=R32(c->r[1]+0x00000020u); // 804D2848
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D284C
  c->lr=c->r[0]; // 804D2850
  c->r[1]=c->r[1]+0x00000030u; // 804D2854
  return; // 804D2858
}

// __dt__Q34nw4r3g3d6ScnMdlFv
void f_804D285C(Ctx* __restrict c) {
  trace_call(0x804D285Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D285C
  c->r[0]=c->lr; // 804D2860
  cmps(c,0,(int32_t)c->r[3],0); // 804D2864
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D2868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D286C
  c->r[31]=c->r[3]|c->r[3]; // 804D2870
  if (crb(c,2)) { goto L_804D28AC; } // 804D2874
  c->r[4]=R32(c->r[3]+0x00000138u); // 804D2878
  c->r[5]=0u+0x80720000u; // 804D287C
  c->r[5]=c->r[5]+0xFFFFA568u; // 804D2880
  cmps(c,0,(int32_t)c->r[4],0); // 804D2884
  W32(c->r[3]+0x00000000u,c->r[5]); // 804D2888
  if (crb(c,2)) { goto L_804D28A0; } // 804D288C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D2890
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D2894
  c->ctr=c->r[12]; // 804D2898
  if (true) { c->lr=0x804D28A0u; dispatch(c,c->ctr); } // 804D289C
L_804D28A0:;
  c->r[3]=c->r[31]|c->r[31]; // 804D28A0
  c->r[4]=0u+0x00000000u; // 804D28A4
  c->lr=0x804D28ACu; f_804CFCB4(c); // 804D28A8
L_804D28AC:;
  c->r[3]=c->r[31]|c->r[31]; // 804D28AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D28B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D28B4
  c->lr=c->r[0]; // 804D28B8
  c->r[1]=c->r[1]+0x00000010u; // 804D28BC
  return; // 804D28C0
}

// fn_804D28C4
void f_804D28C4(Ctx* __restrict c) {
  trace_call(0x804D28C4u);
  c->r[3]=0u+0x806B0000u; // 804D28C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D28C8
  c->r[3]=c->r[3]+0xFFFFBEF0u; // 804D28CC
  cmpu(c,0,c->r[0],c->r[3]); // 804D28D0
  if (!crb(c,2)) { goto L_804D28E0; } // 804D28D4
  c->r[3]=0u+0x00000001u; // 804D28D8
  return; // 804D28DC
L_804D28E0:;
  c->r[3]=0u+0x806B0000u; // 804D28E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D28E4
  c->r[3]=c->r[3]+0xFFFFBED8u; // 804D28E8
  cmpu(c,0,c->r[0],c->r[3]); // 804D28EC
  if (!crb(c,2)) { goto L_804D28FC; } // 804D28F0
  c->r[3]=0u+0x00000001u; // 804D28F4
  return; // 804D28F8
L_804D28FC:;
  c->r[3]=0u+0x806B0000u; // 804D28FC
  c->r[3]=c->r[3]+0xFFFFBEA8u; // 804D2900
  cmpu(c,0,c->r[0],c->r[3]); // 804D2904
  if (!crb(c,2)) { goto L_804D2914; } // 804D2908
  c->r[3]=0u+0x00000001u; // 804D290C
  return; // 804D2910
L_804D2914:;
  c->r[3]=0u+0x806B0000u; // 804D2914
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804D2918
  cmpu(c,0,c->r[0],c->r[3]); // 804D291C
  if (!crb(c,2)) { goto L_804D292C; } // 804D2920
  c->r[3]=0u+0x00000001u; // 804D2924
  return; // 804D2928
L_804D292C:;
  c->r[3]=0u+0x806B0000u; // 804D292C
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804D2930
  c->r[0]=c->r[3]-c->r[0]; // 804D2934
  c->r[0]=cntlz(c->r[0]); // 804D2938
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D293C
  return; // 804D2940
}

// fn_804D2944
void f_804D2944(Ctx* __restrict c) {
  trace_call(0x804D2944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2944
  c->r[0]=c->lr; // 804D2948
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D294C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D2950
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D2954
  c->ctr=c->r[12]; // 804D2958
  if (true) { c->lr=0x804D2960u; dispatch(c,c->ctr); } // 804D295C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D2960
  c->r[3]=c->r[3]+0x00000004u; // 804D2964
  c->lr=c->r[0]; // 804D2968
  c->r[1]=c->r[1]+0x00000010u; // 804D296C
  return; // 804D2970
}

// fn_804D2974
void f_804D2974(Ctx* __restrict c) {
  trace_call(0x804D2974u);
  c->r[3]=0u+0x806B0000u; // 804D2974
  c->r[3]=c->r[3]+0xFFFFBEF0u; // 804D2978
  return; // 804D297C
}

// CalcMaterialDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d12AnmObjTexPatPQ34nw4r3g3d12AnmObjTexSrtPQ34nw4r3g3d12AnmObjMatClr
void f_804D2980(Ctx* __restrict c) {
  trace_call(0x804D2980u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2980
  c->r[0]=c->lr; // 804D2984
  W32(c->r[1]+0x00000214u,c->r[0]); // 804D2988
  c->r[11]=c->r[1]+0x00000210u; // 804D298C
  c->lr=0x804D2994u; f_803A9BD0(c); // 804D2990
  c->r[15]=c->r[3]|c->r[3]; // 804D2994
  c->r[16]=c->r[4]|c->r[4]; // 804D2998
  c->r[17]=c->r[5]|c->r[5]; // 804D299C
  c->r[18]=c->r[6]|c->r[6]; // 804D29A0
  c->lr=0x804D29A8u; f_804ACA9C(c); // 804D29A4
  c->r[27]=c->r[1]+0x000000A8u; // 804D29A8
  c->r[0]=c->r[1]+0x0000008Cu; // 804D29AC
  c->r[4]=c->r[27]-c->r[0]; // 804D29B0
  c->r[28]=c->r[1]+0x000000C8u; // 804D29B4
  c->r[0]=c->r[1]+0x000000ACu; // 804D29B8
  W32(c->r[1]+0x000001B8u,c->r[3]); // 804D29BC
  c->r[6]=c->r[28]-c->r[0]; // 804D29C0
  c->r[5]=c->r[4]+0x00000003u; // 804D29C4
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 804D29C8
  c->r[19]=0u+0x00000000u; // 804D29CC
  c->r[3]=sraw(c,c->r[5],2); // 804D29D0
  c->r[7]=c->r[6]+0x00000003u; // 804D29D4
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 804D29D8
  W32(c->r[1]+0x000001B4u,c->r[0]); // 804D29DC
  c->r[3]=sraw(c,c->r[7],2); // 804D29E0
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 804D29E4
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 804D29E8
  c->r[26]=c->r[4]+0x00000001u; // 804D29EC
  c->r[24]=c->r[3]+0x00000001u; // 804D29F0
  W32(c->r[1]+0x000001B0u,c->r[0]); // 804D29F4
  c->r[25]=rotl(c->r[4],0)&0x80000000u; // 804D29F8
  c->r[14]=rotl(c->r[26],0)&0x80000000u; // 804D29FC
  c->r[23]=rotl(c->r[6],0)&0x80000000u; // 804D2A00
  c->r[22]=rotl(c->r[7],0)&0x80000000u; // 804D2A04
  c->r[21]=rotl(c->r[3],0)&0x80000000u; // 804D2A08
  c->r[20]=rotl(c->r[24],0)&0x80000000u; // 804D2A0C
  c->r[29]=0u+0x00000000u; // 804D2A10
  goto L_804D2D6C; // 804D2A14
L_804D2A18:;
  c->r[3]=c->r[15]|c->r[15]; // 804D2A18
  c->r[4]=c->r[19]|c->r[19]; // 804D2A1C
  c->lr=0x804D2A24u; f_804ACA48(c); // 804D2A20
  cmps(c,0,(int32_t)c->r[16],0); // 804D2A24
  c->r[31]=c->r[3]|c->r[3]; // 804D2A28
  if (crb(c,2)) { goto L_804D2C60; } // 804D2A2C
  c->r[3]=c->r[16]|c->r[16]; // 804D2A30
  c->r[4]=c->r[19]|c->r[19]; // 804D2A34
  c->lr=0x804D2A3Cu; f_804B624C(c); // 804D2A38
  cmps(c,0,(int32_t)c->r[3],0); // 804D2A3C
  if (crb(c,2)) { goto L_804D2C60; } // 804D2A40
  c->r[4]=c->r[1]+0x0000008Cu; // 804D2A44
  W32(c->r[1]+0x00000088u,c->r[29]); // 804D2A48
  cmpu(c,0,c->r[4],c->r[27]); // 804D2A4C
  if (!crb(c,0)) { goto L_804D2B3C; } // 804D2A50
  cmps(c,0,(int32_t)c->r[26],8); // 804D2A54
  if (!crb(c,1)) { goto L_804D2B18; } // 804D2A58
  c->r[0]=c->r[4]|c->r[4]; // 804D2A5C
  c->r[3]=0u+0x00000000u; // 804D2A60
  cmpu(c,0,c->r[0],c->r[27]); // 804D2A64
  c->r[5]=0u+0x00000000u; // 804D2A68
  if (crb(c,1)) { goto L_804D2A9C; } // 804D2A6C
  c->r[0]=R32(c->r[1]+0x000001B4u); // 804D2A70
  c->r[6]=0u+0x00000001u; // 804D2A74
  cmps(c,0,(int32_t)c->r[0],0); // 804D2A78
  if (!crb(c,2)) { goto L_804D2A90; } // 804D2A7C
  c->r[0]=R32(c->r[1]+0x000001B0u); // 804D2A80
  cmps(c,0,(int32_t)c->r[0],0); // 804D2A84
  if (crb(c,2)) { goto L_804D2A90; } // 804D2A88
  c->r[6]=0u+0x00000000u; // 804D2A8C
L_804D2A90:;
  cmps(c,0,(int32_t)c->r[6],0); // 804D2A90
  if (crb(c,2)) { goto L_804D2A9C; } // 804D2A94
  c->r[5]=0u+0x00000001u; // 804D2A98
L_804D2A9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D2A9C
  if (crb(c,2)) { goto L_804D2AC8; } // 804D2AA0
  cmps(c,0,(int32_t)c->r[25],0); // 804D2AA4
  c->r[0]=0u+0x00000001u; // 804D2AA8
  if (!crb(c,2)) { goto L_804D2ABC; } // 804D2AAC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[14]); // 804D2AB0
  if (crb(c,2)) { goto L_804D2ABC; } // 804D2AB4
  c->r[0]=0u+0x00000000u; // 804D2AB8
L_804D2ABC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D2ABC
  if (crb(c,2)) { goto L_804D2AC8; } // 804D2AC0
  c->r[3]=0u+0x00000001u; // 804D2AC4
L_804D2AC8:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D2AC8
  if (crb(c,2)) { goto L_804D2B18; } // 804D2ACC
  c->r[3]=c->r[1]+0x00000088u; // 804D2AD0
  c->r[0]=c->r[3]+0x0000001Fu; // 804D2AD4
  c->r[0]=c->r[0]-c->r[4]; // 804D2AD8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D2ADC
  c->ctr=c->r[0]; // 804D2AE0
  c->r[0]=c->r[3]|c->r[3]; // 804D2AE4
  cmpu(c,0,c->r[4],c->r[0]); // 804D2AE8
  if (!crb(c,0)) { goto L_804D2B18; } // 804D2AEC
L_804D2AF0:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 804D2AF0
  W32(c->r[4]+0x00000004u,c->r[29]); // 804D2AF4
  W32(c->r[4]+0x00000008u,c->r[29]); // 804D2AF8
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 804D2AFC
  W32(c->r[4]+0x00000010u,c->r[29]); // 804D2B00
  W32(c->r[4]+0x00000014u,c->r[29]); // 804D2B04
  W32(c->r[4]+0x00000018u,c->r[29]); // 804D2B08
  W32(c->r[4]+0x0000001Cu,c->r[29]); // 804D2B0C
  c->r[4]=c->r[4]+0x00000020u; // 804D2B10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D2AF0; } // 804D2B14
L_804D2B18:;
  c->r[0]=c->r[27]+0x00000003u; // 804D2B18
  c->r[0]=c->r[0]-c->r[4]; // 804D2B1C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804D2B20
  c->ctr=c->r[0]; // 804D2B24
  cmpu(c,0,c->r[4],c->r[27]); // 804D2B28
  if (!crb(c,0)) { goto L_804D2B3C; } // 804D2B2C
L_804D2B30:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 804D2B30
  c->r[4]=c->r[4]+0x00000004u; // 804D2B34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D2B30; } // 804D2B38
L_804D2B3C:;
  c->r[3]=c->r[1]+0x000000ACu; // 804D2B3C
  W32(c->r[1]+0x000000A8u,c->r[29]); // 804D2B40
  cmpu(c,0,c->r[3],c->r[28]); // 804D2B44
  if (!crb(c,0)) { goto L_804D2C24; } // 804D2B48
  cmps(c,0,(int32_t)c->r[24],8); // 804D2B4C
  if (!crb(c,1)) { goto L_804D2C00; } // 804D2B50
  c->r[0]=c->r[3]|c->r[3]; // 804D2B54
  c->r[4]=0u+0x00000000u; // 804D2B58
  cmpu(c,0,c->r[0],c->r[28]); // 804D2B5C
  c->r[0]=0u+0x00000000u; // 804D2B60
  if (crb(c,1)) { goto L_804D2B8C; } // 804D2B64
  cmps(c,0,(int32_t)c->r[23],0); // 804D2B68
  c->r[5]=0u+0x00000001u; // 804D2B6C
  if (!crb(c,2)) { goto L_804D2B80; } // 804D2B70
  cmps(c,0,(int32_t)c->r[22],0); // 804D2B74
  if (crb(c,2)) { goto L_804D2B80; } // 804D2B78
  c->r[5]=0u+0x00000000u; // 804D2B7C
L_804D2B80:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D2B80
  if (crb(c,2)) { goto L_804D2B8C; } // 804D2B84
  c->r[4]=0u+0x00000001u; // 804D2B88
L_804D2B8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D2B8C
  if (crb(c,2)) { goto L_804D2BB8; } // 804D2B90
  cmps(c,0,(int32_t)c->r[21],0); // 804D2B94
  c->r[4]=0u+0x00000001u; // 804D2B98
  if (!crb(c,2)) { goto L_804D2BAC; } // 804D2B9C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 804D2BA0
  if (crb(c,2)) { goto L_804D2BAC; } // 804D2BA4
  c->r[4]=0u+0x00000000u; // 804D2BA8
L_804D2BAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D2BAC
  if (crb(c,2)) { goto L_804D2BB8; } // 804D2BB0
  c->r[0]=0u+0x00000001u; // 804D2BB4
L_804D2BB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D2BB8
  if (crb(c,2)) { goto L_804D2C00; } // 804D2BBC
  c->r[0]=c->r[27]+0x0000001Fu; // 804D2BC0
  c->r[0]=c->r[0]-c->r[3]; // 804D2BC4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D2BC8
  c->ctr=c->r[0]; // 804D2BCC
  cmpu(c,0,c->r[3],c->r[27]); // 804D2BD0
  if (!crb(c,0)) { goto L_804D2C00; } // 804D2BD4
L_804D2BD8:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 804D2BD8
  W32(c->r[3]+0x00000004u,c->r[29]); // 804D2BDC
  W32(c->r[3]+0x00000008u,c->r[29]); // 804D2BE0
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 804D2BE4
  W32(c->r[3]+0x00000010u,c->r[29]); // 804D2BE8
  W32(c->r[3]+0x00000014u,c->r[29]); // 804D2BEC
  W32(c->r[3]+0x00000018u,c->r[29]); // 804D2BF0
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 804D2BF4
  c->r[3]=c->r[3]+0x00000020u; // 804D2BF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D2BD8; } // 804D2BFC
L_804D2C00:;
  c->r[0]=c->r[28]+0x00000003u; // 804D2C00
  c->r[0]=c->r[0]-c->r[3]; // 804D2C04
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 804D2C08
  c->ctr=c->r[0]; // 804D2C0C
  cmpu(c,0,c->r[3],c->r[28]); // 804D2C10
  if (!crb(c,0)) { goto L_804D2C24; } // 804D2C14
L_804D2C18:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 804D2C18
  c->r[3]=c->r[3]+0x00000004u; // 804D2C1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D2C18; } // 804D2C20
L_804D2C24:;
  c->r[12]=R32(c->r[16]+0x00000000u); // 804D2C24
  c->r[3]=c->r[16]|c->r[16]; // 804D2C28
  c->r[5]=c->r[19]|c->r[19]; // 804D2C2C
  c->r[4]=c->r[1]+0x00000084u; // 804D2C30
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D2C34
  c->ctr=c->r[12]; // 804D2C38
  if (true) { c->lr=0x804D2C40u; dispatch(c,c->ctr); } // 804D2C3C
  c->r[4]=c->r[31]+0x00000144u; // 804D2C40
  c->r[0]=c->r[31]+0x00000040u; // 804D2C44
  W32(c->r[1]+0x00000018u,c->r[4]); // 804D2C48
  c->r[5]=c->r[3]|c->r[3]; // 804D2C4C
  c->r[3]=c->r[1]+0x0000001Cu; // 804D2C50
  c->r[4]=c->r[1]+0x00000018u; // 804D2C54
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D2C58
  c->lr=0x804D2C60u; f_804B7334(c); // 804D2C5C
L_804D2C60:;
  cmps(c,0,(int32_t)c->r[17],0); // 804D2C60
  if (crb(c,2)) { goto L_804D2CE4; } // 804D2C64
  c->r[3]=c->r[17]|c->r[17]; // 804D2C68
  c->r[4]=c->r[19]|c->r[19]; // 804D2C6C
  c->lr=0x804D2C74u; f_804B781C(c); // 804D2C70
  cmps(c,0,(int32_t)c->r[3],0); // 804D2C74
  if (crb(c,2)) { goto L_804D2CE4; } // 804D2C78
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 804D2C7C
  c->r[30]=c->r[31]+0x000001A8u; // 804D2C80
  cmps(c,0,(int32_t)c->r[0],0); // 804D2C84
  if (crb(c,2)) { goto L_804D2C94; } // 804D2C88
  c->r[3]=c->r[31]+c->r[0]; // 804D2C8C
  goto L_804D2C98; // 804D2C90
L_804D2C94:;
  c->r[3]=0u+0x00000000u; // 804D2C94
L_804D2C98:;
  c->r[0]=c->r[3]+0x000000A0u; // 804D2C98
  c->r[3]=c->r[17]|c->r[17]; // 804D2C9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D2CA0
  c->r[5]=c->r[19]|c->r[19]; // 804D2CA4
  c->r[4]=c->r[1]+0x000000C8u; // 804D2CA8
  c->r[12]=R32(c->r[17]+0x00000000u); // 804D2CAC
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D2CB0
  c->ctr=c->r[12]; // 804D2CB4
  if (true) { c->lr=0x804D2CBCu; dispatch(c,c->ctr); } // 804D2CB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D2CBC
  c->r[5]=c->r[3]|c->r[3]; // 804D2CC0
  W32(c->r[1]+0x00000014u,c->r[30]); // 804D2CC4
  c->r[3]=c->r[1]+0x00000014u; // 804D2CC8
  c->r[4]=c->r[1]+0x00000010u; // 804D2CCC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D2CD0
  c->lr=0x804D2CD8u; f_804B898C(c); // 804D2CD4
  c->r[3]=c->r[1]+0x00000024u; // 804D2CD8
  c->r[4]=0u+0x00000000u; // 804D2CDC
  c->lr=0x804D2CE4u; f_804AE650(c); // 804D2CE0
L_804D2CE4:;
  cmps(c,0,(int32_t)c->r[18],0); // 804D2CE4
  if (crb(c,2)) { goto L_804D2D68; } // 804D2CE8
  c->r[3]=c->r[18]|c->r[18]; // 804D2CEC
  c->r[4]=c->r[19]|c->r[19]; // 804D2CF0
  c->lr=0x804D2CF8u; f_804B54C8(c); // 804D2CF4
  cmps(c,0,(int32_t)c->r[3],0); // 804D2CF8
  if (crb(c,2)) { goto L_804D2D68; } // 804D2CFC
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 804D2D00
  cmps(c,0,(int32_t)c->r[0],0); // 804D2D04
  if (crb(c,2)) { goto L_804D2D14; } // 804D2D08
  c->r[3]=c->r[31]+c->r[0]; // 804D2D0C
  goto L_804D2D18; // 804D2D10
L_804D2D14:;
  c->r[3]=0u+0x00000000u; // 804D2D14
L_804D2D18:;
  c->r[0]=c->r[3]+0x00000020u; // 804D2D18
  c->r[3]=c->r[18]|c->r[18]; // 804D2D1C
  W32(c->r[1]+0x00000020u,c->r[0]); // 804D2D20
  c->r[5]=c->r[19]|c->r[19]; // 804D2D24
  c->r[30]=c->r[31]+0x000003F0u; // 804D2D28
  c->r[4]=c->r[1]+0x00000028u; // 804D2D2C
  c->r[12]=R32(c->r[18]+0x00000000u); // 804D2D30
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D2D34
  c->ctr=c->r[12]; // 804D2D38
  if (true) { c->lr=0x804D2D40u; dispatch(c,c->ctr); } // 804D2D3C
  c->r[0]=R32(c->r[1]+0x00000020u); // 804D2D40
  c->r[5]=c->r[3]|c->r[3]; // 804D2D44
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 804D2D48
  c->r[3]=c->r[1]+0x0000000Cu; // 804D2D4C
  c->r[4]=c->r[1]+0x00000008u; // 804D2D50
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D2D54
  c->lr=0x804D2D5Cu; f_804B5B88(c); // 804D2D58
  c->r[3]=c->r[1]+0x00000020u; // 804D2D5C
  c->r[4]=0u+0x00000000u; // 804D2D60
  c->lr=0x804D2D68u; f_804AE634(c); // 804D2D64
L_804D2D68:;
  c->r[19]=c->r[19]+0x00000001u; // 804D2D68
L_804D2D6C:;
  c->r[0]=R32(c->r[1]+0x000001B8u); // 804D2D6C
  cmpu(c,0,c->r[19],c->r[0]); // 804D2D70
  if (crb(c,0)) { IRQCHK(c); goto L_804D2A18; } // 804D2D74
  c->r[11]=c->r[1]+0x00000210u; // 804D2D78
  c->lr=0x804D2D80u; f_803A9C1C(c); // 804D2D7C
  c->r[0]=R32(c->r[1]+0x00000214u); // 804D2D80
  c->lr=c->r[0]; // 804D2D84
  c->r[1]=c->r[1]+0x00000210u; // 804D2D88
  return; // 804D2D8C
}

// G3dInit__Q24nw4r3g3dFb
void f_804D2D90(Ctx* __restrict c) {
  trace_call(0x804D2D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2D90
  c->r[0]=c->lr; // 804D2D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D2D98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D2D9C
  c->r[31]=c->r[3]|c->r[3]; // 804D2DA0
  c->r[3]=R32(c->r[13]+0xFFFFA2C0u); // 804D2DA4
  c->lr=0x804D2DACu; f_80376034(c); // 804D2DA8
  cmps(c,0,(int32_t)c->r[31],0); // 804D2DAC
  if (crb(c,2)) { goto L_804D2DBC; } // 804D2DB0
  c->lr=0x804D2DB8u; f_80509228(c); // 804D2DB4
  goto L_804D2DC0; // 804D2DB8
L_804D2DBC:;
  c->lr=0x804D2DC0u; f_80509288(c); // 804D2DBC
L_804D2DC0:;
  c->r[3]=0u+0x00000004u; // 804D2DC0
  c->r[3]=c->r[3]|0x00040000u; // 804D2DC4
  mtspr(c,914,c->r[3]); // 804D2DC8
  c->r[3]=0u+0x00000005u; // 804D2DCC
  c->r[3]=c->r[3]|0x00050000u; // 804D2DD0
  mtspr(c,915,c->r[3]); // 804D2DD4
  c->r[3]=0u+0x00000006u; // 804D2DD8
  c->r[3]=c->r[3]|0x00060000u; // 804D2DDC
  mtspr(c,916,c->r[3]); // 804D2DE0
  c->r[3]=0u+0x00000007u; // 804D2DE4
  c->r[3]=c->r[3]|0x00070000u; // 804D2DE8
  mtspr(c,917,c->r[3]); // 804D2DEC
  c->r[4]=0u+0x05070000u; // 804D2DF0
  c->r[0]=c->r[4]+0x00000507u; // 804D2DF4
  mtspr(c,918,c->r[0]); // 804D2DF8
  c->r[4]=0u+0x08070000u; // 804D2DFC
  c->r[0]=c->r[4]+0x00000807u; // 804D2E00
  mtspr(c,919,c->r[0]); // 804D2E04
  c->lr=0x804D2E0Cu; f_8038F860(c); // 804D2E08
  cmps(c,0,(int32_t)c->r[3],2); // 804D2E0C
  if (crb(c,2)) { goto L_804D2E58; } // 804D2E10
  if (!crb(c,0)) { goto L_804D2E28; } // 804D2E14
  cmps(c,0,(int32_t)c->r[3],0); // 804D2E18
  if (crb(c,2)) { goto L_804D2E34; } // 804D2E1C
  if (!crb(c,0)) { goto L_804D2E40; } // 804D2E20
  goto L_804D2E64; // 804D2E24
L_804D2E28:;
  cmps(c,0,(int32_t)c->r[3],5); // 804D2E28
  if (crb(c,2)) { goto L_804D2E4C; } // 804D2E2C
  goto L_804D2E64; // 804D2E30
L_804D2E34:;
  c->r[3]=0u+0x80710000u; // 804D2E34
  c->r[3]=c->r[3]+0xFFFF8AD0u; // 804D2E38
  goto L_804D2E6C; // 804D2E3C
L_804D2E40:;
  c->r[3]=0u+0x80710000u; // 804D2E40
  c->r[3]=c->r[3]+0xFFFF8F08u; // 804D2E44
  goto L_804D2E6C; // 804D2E48
L_804D2E4C:;
  c->r[3]=0u+0x80710000u; // 804D2E4C
  c->r[3]=c->r[3]+0xFFFF90ACu; // 804D2E50
  goto L_804D2E6C; // 804D2E54
L_804D2E58:;
  c->r[3]=0u+0x80710000u; // 804D2E58
  c->r[3]=c->r[3]+0xFFFF8CECu; // 804D2E5C
  goto L_804D2E6C; // 804D2E60
L_804D2E64:;
  c->r[3]=0u+0x80710000u; // 804D2E64
  c->r[3]=c->r[3]+0xFFFF8AD0u; // 804D2E68
L_804D2E6C:;
  c->lr=0x804D2E70u; f_804C15F8(c); // 804D2E6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D2E70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D2E74
  c->lr=c->r[0]; // 804D2E78
  c->r[1]=c->r[1]+0x00000010u; // 804D2E7C
  return; // 804D2E80
}

// fn_804D2E84
void f_804D2E84(Ctx* __restrict c) {
  trace_call(0x804D2E84u);
  c->r[3]=0u+0x000007FFu; // 804D2E84
  f_804C1804(c); return; // 804D2E88
}

// fn_804D2E8C
void f_804D2E8C(Ctx* __restrict c) {
  trace_call(0x804D2E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2E8C
  c->r[0]=c->lr; // 804D2E90
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D2E94
  c->r[11]=c->r[1]+0x00000030u; // 804D2E98
  c->lr=0x804D2EA0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D2E9C
  c->r[0]=c->r[8]+0x00000003u; // 804D2EA0
  cmps(c,0,(int32_t)c->r[4],0); // 804D2EA4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D2EA8
  c->r[25]=c->r[3]|c->r[3]; // 804D2EAC
  c->r[0]=c->r[31]+0x000000F7u; // 804D2EB0
  c->r[26]=c->r[5]|c->r[5]; // 804D2EB4
  c->r[27]=c->r[6]|c->r[6]; // 804D2EB8
  c->r[28]=c->r[7]|c->r[7]; // 804D2EBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804D2EC0
  c->r[30]=0u+0x00000000u; // 804D2EC4
  if (crb(c,2)) { goto L_804D2ED0; } // 804D2EC8
  W32(c->r[4]+0x00000000u,c->r[0]); // 804D2ECC
L_804D2ED0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D2ED0
  if (crb(c,2)) { goto L_804D2F74; } // 804D2ED4
  c->r[3]=c->r[25]|c->r[25]; // 804D2ED8
  c->r[4]=c->r[0]|c->r[0]; // 804D2EDC
  c->lr=0x804D2EE4u; f_803C4D08(c); // 804D2EE0
  cmps(c,0,(int32_t)c->r[3],0); // 804D2EE4
  c->r[29]=c->r[3]|c->r[3]; // 804D2EE8
  if (crb(c,2)) { goto L_804D2F74; } // 804D2EEC
  cmps(c,0,(int32_t)c->r[31],0); // 804D2EF0
  if (crb(c,2)) { goto L_804D2F00; } // 804D2EF4
  c->r[31]=c->r[3]+0x000000F4u; // 804D2EF8
  goto L_804D2F04; // 804D2EFC
L_804D2F00:;
  c->r[31]=0u+0x00000000u; // 804D2F00
L_804D2F04:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D2F04
  c->r[30]=c->r[29]|c->r[29]; // 804D2F08
  if (crb(c,2)) { goto L_804D2F74; } // 804D2F0C
  c->r[3]=c->r[29]|c->r[29]; // 804D2F10
  c->r[4]=c->r[25]|c->r[25]; // 804D2F14
  c->lr=0x804D2F1Cu; f_804CAEA4(c); // 804D2F18
  {uint32_t ea=c->r[2]+0x00001718u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D2F1C
  c->r[3]=0u+0x80720000u; // 804D2F20
  c->r[3]=c->r[3]+0xFFFFA5F8u; // 804D2F24
  c->r[0]=0u+0x00000000u; // 804D2F28
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[0]);} // 804D2F2C
  cmps(c,0,(int32_t)c->r[27],0); // 804D2F30
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 804D2F34
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 804D2F38
  W32(c->r[29]+0x00000000u,c->r[3]); // 804D2F3C
  W32(c->r[29]+0x000000E8u,c->r[0]); // 804D2F40
  W32(c->r[29]+0x000000ECu,c->r[26]); // 804D2F44
  W32(c->r[29]+0x000000F0u,c->r[31]); // 804D2F48
  if (crb(c,2)) { goto L_804D2F5C; } // 804D2F4C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D2F50
  c->r[0]=c->r[0]|0x00000001u; // 804D2F54
  W32(c->r[29]+0x000000E8u,c->r[0]); // 804D2F58
L_804D2F5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D2F5C
  if (crb(c,2)) { goto L_804D2F70; } // 804D2F60
  c->r[0]=R32(c->r[29]+0x000000E8u); // 804D2F64
  c->r[0]=c->r[0]|0x00000002u; // 804D2F68
  W32(c->r[29]+0x000000E8u,c->r[0]); // 804D2F6C
L_804D2F70:;
  c->r[30]=c->r[29]|c->r[29]; // 804D2F70
L_804D2F74:;
  c->r[11]=c->r[1]+0x00000030u; // 804D2F74
  c->r[3]=c->r[30]|c->r[30]; // 804D2F78
  c->lr=0x804D2F80u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D2F7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D2F80
  c->lr=c->r[0]; // 804D2F84
  c->r[1]=c->r[1]+0x00000030u; // 804D2F88
  return; // 804D2F8C
}

// fn_804D2F90
void f_804D2F90(Ctx* __restrict c) {
  trace_call(0x804D2F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D2F90
  c->r[0]=c->lr; // 804D2F94
  cmpu(c,0,c->r[4],0x00000009u); // 804D2F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D2F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D2FA0
  c->r[31]=c->r[3]|c->r[3]; // 804D2FA4
  if (!crb(c,0)) { goto L_804D2FCC; } // 804D2FA8
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 804D2FAC
  c->r[8]=0u+0x00000001u; // 804D2FB0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 804D2FB4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 804D2FB8
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 804D2FBC
  if (crb(c,2)) { goto L_804D2FCC; } // 804D2FC0
  c->r[0]=0u+0x00000001u; // 804D2FC4
  goto L_804D2FD0; // 804D2FC8
L_804D2FCC:;
  c->r[0]=0u+0x00000000u; // 804D2FCC
L_804D2FD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D2FD0
  if (!crb(c,2)) { goto L_804D3084; } // 804D2FD4
  cmps(c,0,(int32_t)c->r[4],6); // 804D2FD8
  if (crb(c,2)) { goto L_804D3024; } // 804D2FDC
  if (!crb(c,0)) { goto L_804D2FF0; } // 804D2FE0
  cmps(c,0,(int32_t)c->r[4],5); // 804D2FE4
  if (!crb(c,0)) { goto L_804D2FFC; } // 804D2FE8
  goto L_804D307C; // 804D2FEC
L_804D2FF0:;
  cmps(c,0,(int32_t)c->r[4],8); // 804D2FF0
  if (!crb(c,0)) { goto L_804D307C; } // 804D2FF4
  goto L_804D3050; // 804D2FF8
L_804D2FFC:;
  c->r[12]=R32(c->r[6]+0x00000000u); // 804D2FFC
  c->r[3]=c->r[6]|c->r[6]; // 804D3000
  c->r[0]=R32(c->r[31]+0x000000E8u); // 804D3004
  c->r[4]=c->r[31]|c->r[31]; // 804D3008
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D300C
  c->r[6]=rotl(c->r[0],31)&0x00000001u; // 804D3010
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 804D3014
  c->ctr=c->r[12]; // 804D3018
  if (true) { c->lr=0x804D3020u; dispatch(c,c->ctr); } // 804D301C
  goto L_804D3084; // 804D3020
L_804D3024:;
  c->r[0]=R32(c->r[3]+0x000000ECu); // 804D3024
  cmps(c,0,(int32_t)c->r[0],0); // 804D3028
  if (crb(c,2)) { goto L_804D3084; } // 804D302C
  c->r[3]=0u+0x000007FFu; // 804D3030
  c->lr=0x804D3038u; f_804C1804(c); // 804D3034
  c->r[12]=R32(c->r[31]+0x000000ECu); // 804D3038
  c->r[3]=c->r[31]|c->r[31]; // 804D303C
  c->r[4]=0u+0x00000001u; // 804D3040
  c->ctr=c->r[12]; // 804D3044
  if (true) { c->lr=0x804D304Cu; dispatch(c,c->ctr); } // 804D3048
  goto L_804D3084; // 804D304C
L_804D3050:;
  c->r[0]=R32(c->r[3]+0x000000ECu); // 804D3050
  cmps(c,0,(int32_t)c->r[0],0); // 804D3054
  if (crb(c,2)) { goto L_804D3084; } // 804D3058
  c->r[3]=0u+0x000007FFu; // 804D305C
  c->lr=0x804D3064u; f_804C1804(c); // 804D3060
  c->r[12]=R32(c->r[31]+0x000000ECu); // 804D3064
  c->r[3]=c->r[31]|c->r[31]; // 804D3068
  c->r[4]=0u+0x00000000u; // 804D306C
  c->ctr=c->r[12]; // 804D3070
  if (true) { c->lr=0x804D3078u; dispatch(c,c->ctr); } // 804D3074
  goto L_804D3084; // 804D3078
L_804D307C:;
  c->r[3]=c->r[31]|c->r[31]; // 804D307C
  c->lr=0x804D3084u; f_804CB6E8(c); // 804D3080
L_804D3084:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D3088
  c->lr=c->r[0]; // 804D308C
  c->r[1]=c->r[1]+0x00000010u; // 804D3090
  return; // 804D3094
}

// fn_804D3098
void f_804D3098(Ctx* __restrict c) {
  trace_call(0x804D3098u);
  c->r[3]=0u+0x806B0000u; // 804D3098
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D309C
  c->r[3]=c->r[3]+0xFFFFBF00u; // 804D30A0
  cmpu(c,0,c->r[0],c->r[3]); // 804D30A4
  if (!crb(c,2)) { goto L_804D30B4; } // 804D30A8
  c->r[3]=0u+0x00000001u; // 804D30AC
  return; // 804D30B0
L_804D30B4:;
  c->r[3]=0u+0x806B0000u; // 804D30B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D30B8
  c->r[3]=c->r[3]+0xFFFFBEA8u; // 804D30BC
  cmpu(c,0,c->r[0],c->r[3]); // 804D30C0
  if (!crb(c,2)) { goto L_804D30D0; } // 804D30C4
  c->r[3]=0u+0x00000001u; // 804D30C8
  return; // 804D30CC
L_804D30D0:;
  c->r[3]=0u+0x806B0000u; // 804D30D0
  c->r[3]=c->r[3]+0xFFFFBE98u; // 804D30D4
  cmpu(c,0,c->r[0],c->r[3]); // 804D30D8
  if (!crb(c,2)) { goto L_804D30E8; } // 804D30DC
  c->r[3]=0u+0x00000001u; // 804D30E0
  return; // 804D30E4
L_804D30E8:;
  c->r[3]=0u+0x806B0000u; // 804D30E8
  c->r[3]=c->r[3]+0xFFFFBD70u; // 804D30EC
  c->r[0]=c->r[3]-c->r[0]; // 804D30F0
  c->r[0]=cntlz(c->r[0]); // 804D30F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D30F8
  return; // 804D30FC
}

// fn_804D3100
void f_804D3100(Ctx* __restrict c) {
  trace_call(0x804D3100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3100
  c->r[0]=c->lr; // 804D3104
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3108
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D310C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D3110
  c->ctr=c->r[12]; // 804D3114
  if (true) { c->lr=0x804D311Cu; dispatch(c,c->ctr); } // 804D3118
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D311C
  c->r[3]=c->r[3]+0x00000004u; // 804D3120
  c->lr=c->r[0]; // 804D3124
  c->r[1]=c->r[1]+0x00000010u; // 804D3128
  return; // 804D312C
}

// fn_804D3130
void f_804D3130(Ctx* __restrict c) {
  trace_call(0x804D3130u);
  c->r[3]=0u+0x806B0000u; // 804D3130
  c->r[3]=c->r[3]+0xFFFFBF00u; // 804D3134
  return; // 804D3138
}

// fn_804D313C
void f_804D313C(Ctx* __restrict c) {
  trace_call(0x804D313Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D313C
  c->r[0]=c->lr; // 804D3140
  cmps(c,0,(int32_t)c->r[3],0); // 804D3144
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D314C
  c->r[31]=c->r[3]|c->r[3]; // 804D3150
  if (crb(c,2)) { goto L_804D3164; } // 804D3154
  if (crb(c,2)) { goto L_804D3164; } // 804D3158
  c->r[4]=0u+0x00000000u; // 804D315C
  c->lr=0x804D3164u; f_804CAF90(c); // 804D3160
L_804D3164:;
  c->r[3]=c->r[31]|c->r[31]; // 804D3164
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D3168
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D316C
  c->lr=c->r[0]; // 804D3170
  c->r[1]=c->r[1]+0x00000010u; // 804D3174
  return; // 804D3178
}

// __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
void f_804D317C(Ctx* __restrict c) {
  trace_call(0x804D317Cu);
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D317C
  return; // 804D3180
}

// Init__Q34nw4r3g3d3FogFv
void f_804D3184(Ctx* __restrict c) {
  trace_call(0x804D3184u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D3184
  cmps(c,0,(int32_t)c->r[3],0); // 804D3188
  if (crb(c,2)) return; // 804D318C
  c->r[0]=0u+0x00000000u; // 804D3190
  {uint32_t ea=c->r[2]+0x00001720u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D3194
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D3198
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804D319C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804D31A0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D31A4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804D31A8
  W8(c->r[3]+0x00000017u,c->r[0]); // 804D31AC
  W8(c->r[3]+0x00000016u,c->r[0]); // 804D31B0
  W8(c->r[3]+0x00000015u,c->r[0]); // 804D31B4
  W8(c->r[3]+0x00000014u,c->r[0]); // 804D31B8
  W8(c->r[3]+0x00000018u,c->r[0]); // 804D31BC
  W8(c->r[3]+0x00000019u,c->r[0]); // 804D31C0
  W16(c->r[3]+0x0000001Au,c->r[0]); // 804D31C4
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 804D31C8
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 804D31CC
  W16(c->r[3]+0x00000020u,c->r[0]); // 804D31D0
  W16(c->r[3]+0x00000022u,c->r[0]); // 804D31D4
  W16(c->r[3]+0x00000024u,c->r[0]); // 804D31D8
  W16(c->r[3]+0x00000026u,c->r[0]); // 804D31DC
  W16(c->r[3]+0x00000028u,c->r[0]); // 804D31E0
  W16(c->r[3]+0x0000002Au,c->r[0]); // 804D31E4
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 804D31E8
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 804D31EC
  return; // 804D31F0
}

// CopyTo__Q34nw4r3g3d3FogCFPv
void f_804D31F4(Ctx* __restrict c) {
  trace_call(0x804D31F4u);
  cmps(c,0,(int32_t)c->r[4],0); // 804D31F4
  if (crb(c,2)) { goto L_804D3240; } // 804D31F8
  c->r[5]=R32(c->r[3]+0x00000000u); // 804D31FC
  cmps(c,0,(int32_t)c->r[5],0); // 804D3200
  if (crb(c,2)) { goto L_804D3240; } // 804D3204
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=RF64(ea);} // 804D3208
  c->r[3]=c->r[4]|c->r[4]; // 804D320C
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 804D3210
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=RF64(ea);} // 804D3214
  {uint32_t ea=c->r[4]+0x00000008u; WF64(ea,c->f[0]);} // 804D3218
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=RF64(ea);} // 804D321C
  {uint32_t ea=c->r[4]+0x00000010u; WF64(ea,c->f[0]);} // 804D3220
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=RF64(ea);} // 804D3224
  {uint32_t ea=c->r[4]+0x00000018u; WF64(ea,c->f[0]);} // 804D3228
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=RF64(ea);} // 804D322C
  {uint32_t ea=c->r[4]+0x00000020u; WF64(ea,c->f[0]);} // 804D3230
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=RF64(ea);} // 804D3234
  {uint32_t ea=c->r[4]+0x00000028u; WF64(ea,c->f[0]);} // 804D3238
  return; // 804D323C
L_804D3240:;
  c->r[3]=0u+0x00000000u; // 804D3240
  return; // 804D3244
}

// fn_804D3248
void f_804D3248(Ctx* __restrict c) {
  trace_call(0x804D3248u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D3248
  cmps(c,0,(int32_t)c->r[3],0); // 804D324C
  if (crb(c,2)) return; // 804D3250
  cmps(c,0,(int32_t)c->r[4],0); // 804D3254
  if (crb(c,2)) { goto L_804D3264; } // 804D3258
  c->r[0]=R32(c->r[3]+0x00000000u); // 804D325C
  W32(c->r[4]+0x00000000u,c->r[0]); // 804D3260
L_804D3264:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D3264
  if (crb(c,2)) { goto L_804D3274; } // 804D3268
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D326C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 804D3270
L_804D3274:;
  cmps(c,0,(int32_t)c->r[6],0); // 804D3274
  if (crb(c,2)) { goto L_804D3284; } // 804D3278
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D327C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 804D3280
L_804D3284:;
  cmps(c,0,(int32_t)c->r[7],0); // 804D3284
  if (crb(c,2)) { goto L_804D3294; } // 804D3288
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D328C
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 804D3290
L_804D3294:;
  cmps(c,0,(int32_t)c->r[8],0); // 804D3294
  if (crb(c,2)) { goto L_804D32A4; } // 804D3298
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D329C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 804D32A0
L_804D32A4:;
  cmps(c,0,(int32_t)c->r[9],0); // 804D32A4
  if (crb(c,2)) return; // 804D32A8
  c->r[0]=R8(c->r[3]+0x00000014u); // 804D32AC
  W8(c->r[9]+0x00000000u,c->r[0]); // 804D32B0
  c->r[0]=R8(c->r[3]+0x00000015u); // 804D32B4
  W8(c->r[9]+0x00000001u,c->r[0]); // 804D32B8
  c->r[0]=R8(c->r[3]+0x00000016u); // 804D32BC
  W8(c->r[9]+0x00000002u,c->r[0]); // 804D32C0
  c->r[0]=R8(c->r[3]+0x00000017u); // 804D32C4
  W8(c->r[9]+0x00000003u,c->r[0]); // 804D32C8
  return; // 804D32CC
}

// SetFogRangeAdjParam__Q34nw4r3g3d3FogFUsUsRCQ34nw4r4math5MTX44
void f_804D32D0(Ctx* __restrict c) {
  trace_call(0x804D32D0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D32D0
  cmps(c,0,(int32_t)c->r[3],0); // 804D32D4
  if (crb(c,2)) return; // 804D32D8
  W16(c->r[3]+0x0000001Au,c->r[5]); // 804D32DC
  c->r[5]=c->r[6]|c->r[6]; // 804D32E0
  c->r[3]=c->r[3]+0x0000001Cu; // 804D32E4
  f_803A7CFC(c); return; // 804D32E8
  return; // 804D32EC
}

// SetGP__Q34nw4r3g3d3FogCFv
void f_804D32F0(Ctx* __restrict c) {
  trace_call(0x804D32F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D32F0
  c->r[0]=c->lr; // 804D32F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D32F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D32FC
  c->r[31]=R32(c->r[3]+0x00000000u); // 804D3300
  cmps(c,0,(int32_t)c->r[31],0); // 804D3304
  if (crb(c,2)) { goto L_804D3364; } // 804D3308
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D330C
  cmps(c,0,(int32_t)c->r[0],0); // 804D3310
  if (crb(c,2)) { goto L_804D3328; } // 804D3314
  c->r[3]=R8(c->r[31]+0x00000018u); // 804D3318
  c->r[5]=c->r[31]+0x0000001Cu; // 804D331C
  c->r[4]=R16(c->r[31]+0x0000001Au); // 804D3320
  c->lr=0x804D3328u; f_803A7E5C(c); // 804D3324
L_804D3328:;
  c->r[0]=R8(c->r[31]+0x00000014u); // 804D3328
  c->r[4]=c->r[1]+0x00000008u; // 804D332C
  W8(c->r[1]+0x00000008u,c->r[0]); // 804D3330
  c->r[0]=R8(c->r[31]+0x00000015u); // 804D3334
  W8(c->r[1]+0x00000009u,c->r[0]); // 804D3338
  c->r[0]=R8(c->r[31]+0x00000016u); // 804D333C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 804D3340
  c->r[0]=R8(c->r[31]+0x00000017u); // 804D3344
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804D3348
  c->r[3]=R32(c->r[31]+0x00000000u); // 804D334C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3350
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3354
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3358
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D335C
  c->lr=0x804D3364u; f_803A7AD0(c); // 804D3360
L_804D3364:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D3364
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D3368
  c->lr=c->r[0]; // 804D336C
  c->r[1]=c->r[1]+0x00000020u; // 804D3370
  return; // 804D3374
}

// fn_804D3378
void f_804D3378(Ctx* __restrict c) {
  trace_call(0x804D3378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3378
  c->r[0]=c->lr; // 804D337C
  c->r[5]=0u+0x00000040u; // 804D3380
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3384
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D3388
  c->r[4]=c->r[4]+0x00000004u; // 804D338C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D3390
  c->r[31]=c->r[3]|c->r[3]; // 804D3394
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D3398
  c->r[3]=c->r[3]+0x00000004u; // 804D339C
  c->lr=0x804D33A4u; f_804BE110(c); // 804D33A0
  c->r[3]=c->r[31]|c->r[31]; // 804D33A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D33A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D33AC
  c->lr=c->r[0]; // 804D33B0
  c->r[1]=c->r[1]+0x00000010u; // 804D33B4
  return; // 804D33B8
}

// fn_804D33BC
void f_804D33BC(Ctx* __restrict c) {
  trace_call(0x804D33BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D33BC
  c->r[0]=c->lr; // 804D33C0
  cmpu(c,0,c->r[3],c->r[4]); // 804D33C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D33C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D33CC
  c->r[31]=c->r[3]|c->r[3]; // 804D33D0
  if (crb(c,2)) { goto L_804D33F0; } // 804D33D4
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D33D8
  c->r[5]=0u+0x00000040u; // 804D33DC
  c->r[4]=c->r[4]+0x00000004u; // 804D33E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D33E4
  c->r[3]=c->r[3]+0x00000004u; // 804D33E8
  c->lr=0x804D33F0u; f_804BE110(c); // 804D33EC
L_804D33F0:;
  c->r[3]=c->r[31]|c->r[31]; // 804D33F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D33F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D33F8
  c->lr=c->r[0]; // 804D33FC
  c->r[1]=c->r[1]+0x00000010u; // 804D3400
  return; // 804D3404
}

// fn_804D3408
void f_804D3408(Ctx* __restrict c) {
  trace_call(0x804D3408u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804D3408
  c->r[0]=0u+0x00000000u; // 804D340C
  c->r[5]=R32(c->r[4]+0x00000000u); // 804D3410
  cmpu(c,0,c->r[6],c->r[5]); // 804D3414
  if (!crb(c,2)) { goto L_804D351C; } // 804D3418
  c->r[6]=R32(c->r[3]+0x00000004u); // 804D341C
  c->r[5]=R32(c->r[4]+0x00000004u); // 804D3420
  cmpu(c,0,c->r[6],c->r[5]); // 804D3424
  if (!crb(c,2)) { goto L_804D351C; } // 804D3428
  c->r[6]=R32(c->r[3]+0x00000008u); // 804D342C
  c->r[5]=R32(c->r[4]+0x00000008u); // 804D3430
  cmpu(c,0,c->r[6],c->r[5]); // 804D3434
  if (!crb(c,2)) { goto L_804D351C; } // 804D3438
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804D343C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 804D3440
  cmpu(c,0,c->r[6],c->r[5]); // 804D3444
  if (!crb(c,2)) { goto L_804D351C; } // 804D3448
  c->r[6]=R32(c->r[3]+0x00000010u); // 804D344C
  c->r[5]=R32(c->r[4]+0x00000010u); // 804D3450
  cmpu(c,0,c->r[6],c->r[5]); // 804D3454
  if (!crb(c,2)) { goto L_804D351C; } // 804D3458
  c->r[6]=R32(c->r[3]+0x00000014u); // 804D345C
  c->r[5]=R32(c->r[4]+0x00000014u); // 804D3460
  cmpu(c,0,c->r[6],c->r[5]); // 804D3464
  if (!crb(c,2)) { goto L_804D351C; } // 804D3468
  c->r[6]=R32(c->r[3]+0x00000018u); // 804D346C
  c->r[5]=R32(c->r[4]+0x00000018u); // 804D3470
  cmpu(c,0,c->r[6],c->r[5]); // 804D3474
  if (!crb(c,2)) { goto L_804D351C; } // 804D3478
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 804D347C
  c->r[5]=R32(c->r[4]+0x0000001Cu); // 804D3480
  cmpu(c,0,c->r[6],c->r[5]); // 804D3484
  if (!crb(c,2)) { goto L_804D351C; } // 804D3488
  c->r[6]=R32(c->r[3]+0x00000020u); // 804D348C
  c->r[5]=R32(c->r[4]+0x00000020u); // 804D3490
  cmpu(c,0,c->r[6],c->r[5]); // 804D3494
  if (!crb(c,2)) { goto L_804D351C; } // 804D3498
  c->r[6]=R32(c->r[3]+0x00000024u); // 804D349C
  c->r[5]=R32(c->r[4]+0x00000024u); // 804D34A0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34A4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34A8
  c->r[6]=R32(c->r[3]+0x00000028u); // 804D34AC
  c->r[5]=R32(c->r[4]+0x00000028u); // 804D34B0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34B4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34B8
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 804D34BC
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 804D34C0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34C4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34C8
  c->r[6]=R32(c->r[3]+0x00000030u); // 804D34CC
  c->r[5]=R32(c->r[4]+0x00000030u); // 804D34D0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34D4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34D8
  c->r[6]=R32(c->r[3]+0x00000034u); // 804D34DC
  c->r[5]=R32(c->r[4]+0x00000034u); // 804D34E0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34E4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34E8
  c->r[6]=R32(c->r[3]+0x00000038u); // 804D34EC
  c->r[5]=R32(c->r[4]+0x00000038u); // 804D34F0
  cmpu(c,0,c->r[6],c->r[5]); // 804D34F4
  if (!crb(c,2)) { goto L_804D351C; } // 804D34F8
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 804D34FC
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 804D3500
  cmpu(c,0,c->r[6],c->r[5]); // 804D3504
  if (!crb(c,2)) { goto L_804D351C; } // 804D3508
  c->r[5]=R32(c->r[3]+0x00000040u); // 804D350C
  c->r[3]=R32(c->r[4]+0x00000040u); // 804D3510
  cmpu(c,0,c->r[5],c->r[3]); // 804D3514
  if (crb(c,2)) { goto L_804D3520; } // 804D3518
L_804D351C:;
  c->r[0]=0u+0x00000001u; // 804D351C
L_804D3520:;
  c->r[3]=c->r[0]|c->r[0]; // 804D3520
  return; // 804D3524
}

// Clear__Q34nw4r3g3d8LightObjFv
void f_804D3528(Ctx* __restrict c) {
  trace_call(0x804D3528u);
  c->r[0]=0u+0x00000000u; // 804D3528
  c->r[4]=0u+0x00000040u; // 804D352C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D3530
  c->r[3]=c->r[3]+0x00000004u; // 804D3534
  f_804BE1EC(c); return; // 804D3538
}

// InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
void f_804D353C(Ctx* __restrict c) {
  trace_call(0x804D353Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D353C
  c->r[0]=c->lr; // 804D3540
  c->r[7]=R8(c->r[4]+0x00000000u); // 804D3544
  c->r[3]=c->r[3]+0x00000004u; // 804D3548
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D354C
  c->r[6]=R8(c->r[4]+0x00000001u); // 804D3550
  c->r[5]=R8(c->r[4]+0x00000002u); // 804D3554
  c->r[0]=R8(c->r[4]+0x00000003u); // 804D3558
  c->r[4]=c->r[1]+0x00000008u; // 804D355C
  W8(c->r[1]+0x00000008u,c->r[7]); // 804D3560
  W8(c->r[1]+0x00000009u,c->r[6]); // 804D3564
  W8(c->r[1]+0x0000000Au,c->r[5]); // 804D3568
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804D356C
  c->lr=0x804D3574u; f_803A5BCC(c); // 804D3570
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3574
  c->lr=c->r[0]; // 804D3578
  c->r[1]=c->r[1]+0x00000010u; // 804D357C
  return; // 804D3580
}

// InitLightPos__Q34nw4r3g3d8LightObjFfff
void f_804D3584(Ctx* __restrict c) {
  trace_call(0x804D3584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3584
  c->r[0]=c->lr; // 804D3588
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D358C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D3590
  c->r[31]=c->r[3]|c->r[3]; // 804D3594
  c->r[3]=c->r[3]+0x00000004u; // 804D3598
  c->lr=0x804D35A0u; f_803A5A50(c); // 804D359C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D35A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D35A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D35A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D35AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D35B0
  c->lr=c->r[0]; // 804D35B4
  c->r[1]=c->r[1]+0x00000010u; // 804D35B8
  return; // 804D35BC
}

// InitLightDir__Q34nw4r3g3d8LightObjFfff
void f_804D35C0(Ctx* __restrict c) {
  trace_call(0x804D35C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D35C0
  c->r[0]=c->lr; // 804D35C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D35C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D35CC
  c->r[31]=c->r[3]|c->r[3]; // 804D35D0
  c->r[3]=c->r[3]+0x00000004u; // 804D35D4
  c->lr=0x804D35DCu; f_803A5A7C(c); // 804D35D8
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D35DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D35E0
  c->r[0]=c->r[0]|0x00000001u; // 804D35E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D35E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D35EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D35F0
  c->lr=c->r[0]; // 804D35F4
  c->r[1]=c->r[1]+0x00000010u; // 804D35F8
  return; // 804D35FC
}

// InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
void f_804D3600(Ctx* __restrict c) {
  trace_call(0x804D3600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3600
  c->r[0]=c->lr; // 804D3604
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D360C
  c->r[31]=c->r[3]|c->r[3]; // 804D3610
  c->r[3]=c->r[3]+0x00000004u; // 804D3614
  c->lr=0x804D361Cu; f_803A57F8(c); // 804D3618
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D361C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3620
  c->r[0]=c->r[0]|0x00000001u; // 804D3624
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D3628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D362C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3630
  c->lr=c->r[0]; // 804D3634
  c->r[1]=c->r[1]+0x00000010u; // 804D3638
  return; // 804D363C
}

// InitLightAttnA__Q34nw4r3g3d8LightObjFfff
void f_804D3640(Ctx* __restrict c) {
  trace_call(0x804D3640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3640
  c->r[0]=c->lr; // 804D3644
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D364C
  c->r[31]=c->r[3]|c->r[3]; // 804D3650
  c->r[3]=c->r[3]+0x00000004u; // 804D3654
  c->lr=0x804D365Cu; f_803A57BC(c); // 804D3658
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D365C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3660
  c->r[0]=c->r[0]|0x00000001u; // 804D3664
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D3668
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D366C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3670
  c->lr=c->r[0]; // 804D3674
  c->r[1]=c->r[1]+0x00000010u; // 804D3678
  return; // 804D367C
}

// InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
void f_804D3680(Ctx* __restrict c) {
  trace_call(0x804D3680u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3680
  c->r[0]=c->lr; // 804D3684
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D368C
  c->r[31]=c->r[3]|c->r[3]; // 804D3690
  c->r[3]=c->r[3]+0x00000004u; // 804D3694
  c->lr=0x804D369Cu; f_803A5980(c); // 804D3698
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D369C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D36A0
  c->r[0]=c->r[0]|0x00000001u; // 804D36A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D36A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D36AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D36B0
  c->lr=c->r[0]; // 804D36B4
  c->r[1]=c->r[1]+0x00000010u; // 804D36B8
  return; // 804D36BC
}

// InitLightAttnK__Q34nw4r3g3d8LightObjFfff
void f_804D36C0(Ctx* __restrict c) {
  trace_call(0x804D36C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D36C0
  c->r[0]=c->lr; // 804D36C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D36C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D36CC
  c->r[31]=c->r[3]|c->r[3]; // 804D36D0
  c->r[3]=c->r[3]+0x00000004u; // 804D36D4
  c->lr=0x804D36DCu; f_803A57E8(c); // 804D36D8
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D36DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D36E0
  c->r[0]=c->r[0]|0x00000001u; // 804D36E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D36E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D36EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D36F0
  c->lr=c->r[0]; // 804D36F4
  c->r[1]=c->r[1]+0x00000010u; // 804D36F8
  return; // 804D36FC
}

// InitSpecularDir__Q34nw4r3g3d8LightObjFfff
void f_804D3700(Ctx* __restrict c) {
  trace_call(0x804D3700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3700
  c->r[0]=c->lr; // 804D3704
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D370C
  c->r[31]=c->r[3]|c->r[3]; // 804D3710
  c->r[3]=c->r[3]+0x00000004u; // 804D3714
  c->lr=0x804D371Cu; f_803A5A7C(c); // 804D3718
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D371C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804D3720
  c->r[0]=c->r[0]|0x0000000Au; // 804D3724
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D3728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D372C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3730
  c->lr=c->r[0]; // 804D3734
  c->r[1]=c->r[1]+0x00000010u; // 804D3738
  return; // 804D373C
}

// InitLightShininess__Q34nw4r3g3d8LightObjFf
void f_804D3740(Ctx* __restrict c) {
  trace_call(0x804D3740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3740
  c->r[0]=c->lr; // 804D3744
  c->f[4]=c->f[1]; // 804D3748
  {uint32_t ea=c->r[2]+0x00001730u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D374C
  {uint32_t ea=c->r[2]+0x00001728u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3750
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D3754
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 804D3758
  {uint32_t ea=c->r[2]+0x0000172Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D375C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D3760
  c->r[31]=c->r[3]|c->r[3]; // 804D3764
  c->f[2]=c->f[1]; // 804D3768
  c->r[3]=c->r[3]+0x00000004u; // 804D376C
  c->f[5]=c->f[1]; // 804D3770
  c->f[6]=c->ps1[6]=S(c->f[3]-c->f[4]); // 804D3774
  c->lr=0x804D377Cu; f_803A57A0(c); // 804D3778
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D377C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804D3780
  c->r[0]=c->r[0]|0x00000002u; // 804D3784
  W32(c->r[31]+0x00000000u,c->r[0]); // 804D3788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D378C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D3790
  c->lr=c->r[0]; // 804D3794
  c->r[1]=c->r[1]+0x00000010u; // 804D3798
  return; // 804D379C
}

// fn_804D37A0
void f_804D37A0(Ctx* __restrict c) {
  trace_call(0x804D37A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D37A0
  c->r[0]=c->lr; // 804D37A4
  cmps(c,0,(int32_t)c->r[6],0); // 804D37A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D37AC
  if (crb(c,2)) { goto L_804D37B8; } // 804D37B0
  goto L_804D37BC; // 804D37B4
L_804D37B8:;
  c->r[6]=c->r[1]+0x00000008u; // 804D37B8
L_804D37BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D37BC
  if (crb(c,2)) { goto L_804D37C8; } // 804D37C0
  goto L_804D37CC; // 804D37C4
L_804D37C8:;
  c->r[5]=c->r[1]+0x0000000Cu; // 804D37C8
L_804D37CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D37CC
  c->r[3]=c->r[3]+0x00000004u; // 804D37D0
  if (crb(c,2)) { goto L_804D37DC; } // 804D37D4
  goto L_804D37E0; // 804D37D8
L_804D37DC:;
  c->r[4]=c->r[1]+0x00000010u; // 804D37DC
L_804D37E0:;
  c->lr=0x804D37E4u; f_803A57CC(c); // 804D37E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D37E4
  c->lr=c->r[0]; // 804D37E8
  c->r[1]=c->r[1]+0x00000020u; // 804D37EC
  return; // 804D37F0
}

// GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_804D37F4(Ctx* __restrict c) {
  trace_call(0x804D37F4u);
  cmps(c,0,(int32_t)c->r[4],0); // 804D37F4
  if (crb(c,2)) return; // 804D37F8
  c->r[3]=c->r[3]+0x00000004u; // 804D37FC
  c->r[5]=c->r[4]+0x00000004u; // 804D3800
  c->r[6]=c->r[4]+0x00000008u; // 804D3804
  f_803A5A60(c); return; // 804D3808
  return; // 804D380C
}

// GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_804D3810(Ctx* __restrict c) {
  trace_call(0x804D3810u);
  cmps(c,0,(int32_t)c->r[4],0); // 804D3810
  if (crb(c,2)) return; // 804D3814
  c->r[3]=c->r[3]+0x00000004u; // 804D3818
  c->r[5]=c->r[4]+0x00000004u; // 804D381C
  c->r[6]=c->r[4]+0x00000008u; // 804D3820
  f_803A5A98(c); return; // 804D3824
  return; // 804D3828
}

// fn_804D382C
void f_804D382C(Ctx* __restrict c) {
  trace_call(0x804D382Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 804D382C
  if (crb(c,2)) return; // 804D3830
  c->r[3]=c->r[3]+0x00000004u; // 804D3834
  f_803A5BD8(c); return; // 804D3838
  return; // 804D383C
}

// fn_804D3840
void f_804D3840(Ctx* __restrict c) {
  trace_call(0x804D3840u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3840
  c->r[0]=c->lr; // 804D3844
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D3848
  c->r[5]=c->r[1]+0x00000018u; // 804D384C
  c->r[6]=c->r[1]+0x0000001Cu; // 804D3850
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804D3854
  c->r[31]=c->r[4]|c->r[4]; // 804D3858
  c->r[4]=c->r[1]+0x00000014u; // 804D385C
  W32(c->r[1]+0x00000028u,c->r[30]); // 804D3860
  c->r[30]=c->r[3]|c->r[3]; // 804D3864
  c->r[3]=c->r[3]+0x00000004u; // 804D3868
  c->lr=0x804D3870u; f_803A5A98(c); // 804D386C
  c->r[3]=c->r[1]+0x00000014u; // 804D3870
  c->r[4]=c->r[31]|c->r[31]; // 804D3874
  c->r[5]=c->r[3]|c->r[3]; // 804D3878
  c->lr=0x804D3880u; f_804E1A00(c); // 804D387C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804D3880
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804D3884
  if (crb(c,2)) { goto L_804D38A4; } // 804D3888
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D388C
  c->r[3]=c->r[30]+0x00000004u; // 804D3890
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3894
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3898
  c->lr=0x804D38A0u; f_803A5AC0(c); // 804D389C
  goto L_804D38F0; // 804D38A0
L_804D38A4:;
  c->r[3]=c->r[30]+0x00000004u; // 804D38A4
  c->r[4]=c->r[1]+0x00000008u; // 804D38A8
  c->r[5]=c->r[1]+0x0000000Cu; // 804D38AC
  c->r[6]=c->r[1]+0x00000010u; // 804D38B0
  c->lr=0x804D38B8u; f_803A5A60(c); // 804D38B4
  c->r[4]=c->r[1]+0x00000008u; // 804D38B8
  c->r[3]=c->r[31]|c->r[31]; // 804D38BC
  c->r[5]=c->r[4]|c->r[4]; // 804D38C0
  c->lr=0x804D38C8u; f_80383AA0(c); // 804D38C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D38C8
  c->r[3]=c->r[30]+0x00000004u; // 804D38CC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D38D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D38D4
  c->lr=0x804D38DCu; f_803A5A50(c); // 804D38D8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D38DC
  c->r[3]=c->r[30]+0x00000004u; // 804D38E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D38E4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D38E8
  c->lr=0x804D38F0u; f_803A5A7C(c); // 804D38EC
L_804D38F0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D38F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804D38F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D38F8
  c->lr=c->r[0]; // 804D38FC
  c->r[1]=c->r[1]+0x00000030u; // 804D3900
  return; // 804D3904
}

// __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl
void f_804D3908(Ctx* __restrict c) {
  trace_call(0x804D3908u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3908
  c->r[0]=c->lr; // 804D390C
  W32(c->r[1]+0x00000164u,c->r[0]); // 804D3910
  c->r[11]=c->r[1]+0x00000160u; // 804D3914
  c->lr=0x804D391Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D3918
  W16(c->r[3]+0x00000000u,c->r[6]); // 804D391C
  c->r[31]=c->r[3]|c->r[3]; // 804D3920
  c->r[10]=0u+0x00000000u; // 804D3924
  c->r[9]=0u+0x00000000u; // 804D3928
  W16(c->r[3]+0x00000002u,c->r[8]); // 804D392C
  c->r[6]=0u+0xFFFFFFFFu; // 804D3930
  W32(c->r[3]+0x00000004u,c->r[4]); // 804D3934
  W32(c->r[3]+0x00000008u,c->r[5]); // 804D3938
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804D393C
  goto L_804D3978; // 804D3940
L_804D3944:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804D3944
  c->r[10]=c->r[10]+0x00000001u; // 804D3948
  c->r[4]=c->r[0]+c->r[9]; // 804D394C
  W8(c->r[4]+0x00000008u,c->r[6]); // 804D3950
  W8(c->r[9]+c->r[0],c->r[6]); // 804D3954
  c->r[9]=c->r[9]+0x0000000Cu; // 804D3958
  W8(c->r[4]+0x00000001u,c->r[6]); // 804D395C
  W8(c->r[4]+0x00000002u,c->r[6]); // 804D3960
  W8(c->r[4]+0x00000003u,c->r[6]); // 804D3964
  W8(c->r[4]+0x00000004u,c->r[6]); // 804D3968
  W8(c->r[4]+0x00000005u,c->r[6]); // 804D396C
  W8(c->r[4]+0x00000006u,c->r[6]); // 804D3970
  W8(c->r[4]+0x00000007u,c->r[6]); // 804D3974
L_804D3978:;
  c->r[0]=R16(c->r[3]+0x00000002u); // 804D3978
  cmpu(c,0,c->r[10],c->r[0]); // 804D397C
  if (crb(c,0)) { IRQCHK(c); goto L_804D3944; } // 804D3980
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 804D3984
  c->r[29]=0u+0x00000000u; // 804D3988
  c->r[6]=0u+0x00000002u; // 804D398C
  c->r[0]=0u+0xFFFFFFFFu; // 804D3990
  W8(c->r[4]+0x00000000u,c->r[29]); // 804D3994
  c->r[4]=0u+0x00000040u; // 804D3998
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 804D399C
  W8(c->r[5]+0x00000001u,c->r[6]); // 804D39A0
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 804D39A4
  c->r[3]=c->r[1]+0x000000ECu; // 804D39A8
  W8(c->r[5]+0x00000008u,c->r[0]); // 804D39AC
  c->r[11]=R8(c->r[2]+0x00001734u); // 804D39B0
  c->r[10]=R8(c->r[2]+0x00001735u); // 804D39B4
  c->r[9]=R8(c->r[2]+0x00001736u); // 804D39B8
  c->r[8]=R8(c->r[2]+0x00001737u); // 804D39BC
  c->r[7]=R8(c->r[2]+0x00001738u); // 804D39C0
  c->r[6]=R8(c->r[2]+0x00001739u); // 804D39C4
  c->r[5]=R8(c->r[2]+0x0000173Au); // 804D39C8
  c->r[0]=R8(c->r[2]+0x0000173Bu); // 804D39CC
  W8(c->r[1]+0x00000018u,c->r[11]); // 804D39D0
  W8(c->r[1]+0x00000019u,c->r[10]); // 804D39D4
  W8(c->r[1]+0x0000001Au,c->r[9]); // 804D39D8
  W8(c->r[1]+0x0000001Bu,c->r[8]); // 804D39DC
  W8(c->r[1]+0x00000014u,c->r[7]); // 804D39E0
  W8(c->r[1]+0x00000015u,c->r[6]); // 804D39E4
  W8(c->r[1]+0x00000016u,c->r[5]); // 804D39E8
  W8(c->r[1]+0x00000017u,c->r[0]); // 804D39EC
  W32(c->r[1]+0x000000A4u,c->r[29]); // 804D39F0
  W32(c->r[1]+0x00000060u,c->r[29]); // 804D39F4
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 804D39F8
  W32(c->r[1]+0x000000E8u,c->r[29]); // 804D39FC
  c->lr=0x804D3A04u; f_804BE1EC(c); // 804D3A00
  W32(c->r[1]+0x000000A4u,c->r[29]); // 804D3A04
  c->r[3]=c->r[1]+0x000000A8u; // 804D3A08
  c->r[4]=0u+0x00000040u; // 804D3A0C
  c->lr=0x804D3A14u; f_804BE1EC(c); // 804D3A10
  W32(c->r[1]+0x00000060u,c->r[29]); // 804D3A14
  c->r[3]=c->r[1]+0x00000064u; // 804D3A18
  c->r[4]=0u+0x00000040u; // 804D3A1C
  c->lr=0x804D3A24u; f_804BE1EC(c); // 804D3A20
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 804D3A24
  c->r[3]=c->r[1]+0x00000020u; // 804D3A28
  c->r[4]=0u+0x00000040u; // 804D3A2C
  c->lr=0x804D3A34u; f_804BE1EC(c); // 804D3A30
  c->r[0]=R32(c->r[1]+0x00000018u); // 804D3A34
  c->r[3]=c->r[1]+0x000000ECu; // 804D3A38
  c->r[4]=c->r[1]+0x00000010u; // 804D3A3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804D3A40
  c->lr=0x804D3A48u; f_803A5BCC(c); // 804D3A44
  {uint32_t ea=c->r[2]+0x0000173Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3A48
  c->r[3]=c->r[1]+0x000000ECu; // 804D3A4C
  c->f[2]=c->f[1]; // 804D3A50
  c->f[3]=c->f[1]; // 804D3A54
  c->lr=0x804D3A5Cu; f_803A5A50(c); // 804D3A58
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D3A5C
  c->r[3]=c->r[1]+0x000000ECu; // 804D3A60
  {uint32_t ea=c->r[2]+0x00001728u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3A64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3A68
  {uint32_t ea=c->r[2]+0x00001740u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3A6C
  c->f[3]=c->f[1]; // 804D3A70
  W32(c->r[1]+0x000000E8u,c->r[0]); // 804D3A74
  c->lr=0x804D3A7Cu; f_803A5A7C(c); // 804D3A78
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D3A7C
  c->r[3]=c->r[1]+0x000000ECu; // 804D3A80
  {uint32_t ea=c->r[2]+0x00001744u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3A84
  c->r[4]=0u+0x00000000u; // 804D3A88
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3A8C
  c->r[0]=c->r[0]|0x00000001u; // 804D3A90
  W32(c->r[1]+0x000000E8u,c->r[0]); // 804D3A94
  c->lr=0x804D3A9Cu; f_803A57F8(c); // 804D3A98
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D3A9C
  c->r[3]=c->r[1]+0x000000ECu; // 804D3AA0
  {uint32_t ea=c->r[2]+0x00001748u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3AA4
  c->r[4]=0u+0x00000000u; // 804D3AA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3AAC
  {uint32_t ea=c->r[2]+0x00001730u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3AB0
  c->r[0]=c->r[0]|0x00000001u; // 804D3AB4
  W32(c->r[1]+0x000000E8u,c->r[0]); // 804D3AB8
  c->lr=0x804D3AC0u; f_803A5980(c); // 804D3ABC
  c->r[5]=R32(c->r[1]+0x000000E8u); // 804D3AC0
  c->r[3]=c->r[1]+0x000000A8u; // 804D3AC4
  c->r[0]=R32(c->r[1]+0x00000018u); // 804D3AC8
  c->r[4]=c->r[1]+0x0000000Cu; // 804D3ACC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 804D3AD0
  c->r[5]=c->r[5]|0x00000005u; // 804D3AD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D3AD8
  W32(c->r[1]+0x000000E8u,c->r[5]); // 804D3ADC
  c->lr=0x804D3AE4u; f_803A5BCC(c); // 804D3AE0
  {uint32_t ea=c->r[2]+0x0000173Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3AE4
  c->r[3]=c->r[1]+0x000000A8u; // 804D3AE8
  c->f[2]=c->f[1]; // 804D3AEC
  c->f[3]=c->f[1]; // 804D3AF0
  c->lr=0x804D3AF8u; f_803A5A50(c); // 804D3AF4
  c->r[5]=R32(c->r[1]+0x000000A4u); // 804D3AF8
  c->r[3]=c->r[1]+0x00000064u; // 804D3AFC
  c->r[0]=R32(c->r[1]+0x00000018u); // 804D3B00
  c->r[4]=c->r[1]+0x00000008u; // 804D3B04
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 804D3B08
  c->r[5]=c->r[5]|0x00000004u; // 804D3B0C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D3B10
  W32(c->r[1]+0x000000A4u,c->r[5]); // 804D3B14
  c->lr=0x804D3B1Cu; f_803A5BCC(c); // 804D3B18
  {uint32_t ea=c->r[2]+0x0000173Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3B1C
  c->r[3]=c->r[1]+0x00000064u; // 804D3B20
  c->f[2]=c->f[1]; // 804D3B24
  c->f[3]=c->f[1]; // 804D3B28
  c->lr=0x804D3B30u; f_803A5A50(c); // 804D3B2C
  c->r[0]=R32(c->r[1]+0x00000060u); // 804D3B30
  c->r[3]=c->r[1]+0x00000064u; // 804D3B34
  {uint32_t ea=c->r[2]+0x00001728u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3B38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 804D3B3C
  {uint32_t ea=c->r[2]+0x00001740u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3B40
  c->f[3]=c->f[1]; // 804D3B44
  W32(c->r[1]+0x00000060u,c->r[0]); // 804D3B48
  c->lr=0x804D3B50u; f_803A5A7C(c); // 804D3B4C
  c->r[0]=R32(c->r[1]+0x00000060u); // 804D3B50
  c->r[3]=c->r[1]+0x00000064u; // 804D3B54
  {uint32_t ea=c->r[2]+0x00001728u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3B58
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 804D3B5C
  {uint32_t ea=c->r[2]+0x0000172Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3B60
  c->r[0]=c->r[0]|0x0000000Au; // 804D3B64
  c->f[2]=c->f[1]; // 804D3B68
  c->f[5]=c->f[1]; // 804D3B6C
  W32(c->r[1]+0x00000060u,c->r[0]); // 804D3B70
  {uint32_t ea=c->r[2]+0x0000174Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804D3B74
  {uint32_t ea=c->r[2]+0x00001750u; c->f[6]=c->ps1[6]=RF32(ea);} // 804D3B78
  c->lr=0x804D3B80u; f_803A57A0(c); // 804D3B7C
  c->r[3]=R32(c->r[1]+0x00000060u); // 804D3B80
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D3B84
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 804D3B88
  c->r[3]=c->r[3]|0x00000006u; // 804D3B8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804D3B90
  W32(c->r[1]+0x00000060u,c->r[3]); // 804D3B94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D3B98
  c->r[0]=R16(c->r[31]+0x00000000u); // 804D3B9C
  cmps(c,0,(int32_t)c->r[0],0); // 804D3BA0
  if (crb(c,2)) { goto L_804D3BF4; } // 804D3BA4
  c->r[6]=R32(c->r[31]+0x00000004u); // 804D3BA8
  c->r[0]=c->r[1]+0x000000E8u; // 804D3BAC
  cmpu(c,0,c->r[6],c->r[0]); // 804D3BB0
  if (crb(c,2)) { goto L_804D3BD0; } // 804D3BB4
  c->r[0]=R32(c->r[1]+0x000000E8u); // 804D3BB8
  c->r[3]=c->r[6]+0x00000004u; // 804D3BBC
  c->r[4]=c->r[1]+0x000000ECu; // 804D3BC0
  c->r[5]=0u+0x00000040u; // 804D3BC4
  W32(c->r[6]+0x00000000u,c->r[0]); // 804D3BC8
  c->lr=0x804D3BD0u; f_804BE110(c); // 804D3BCC
L_804D3BD0:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 804D3BD0
  c->r[3]=R8(c->r[1]+0x00000014u); // 804D3BD4
  c->r[0]=R8(c->r[1]+0x00000015u); // 804D3BD8
  W8(c->r[4]+0x00000000u,c->r[3]); // 804D3BDC
  c->r[3]=R8(c->r[1]+0x00000016u); // 804D3BE0
  W8(c->r[4]+0x00000001u,c->r[0]); // 804D3BE4
  c->r[0]=R8(c->r[1]+0x00000017u); // 804D3BE8
  W8(c->r[4]+0x00000002u,c->r[3]); // 804D3BEC
  W8(c->r[4]+0x00000003u,c->r[0]); // 804D3BF0
L_804D3BF4:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 804D3BF4
  cmpu(c,0,c->r[0],0x00000001u); // 804D3BF8
  if (!crb(c,1)) { goto L_804D3C50; } // 804D3BFC
  c->r[3]=R32(c->r[31]+0x00000004u); // 804D3C00
  c->r[0]=c->r[1]+0x000000A4u; // 804D3C04
  c->r[6]=c->r[3]+0x00000044u; // 804D3C08
  cmpu(c,0,c->r[6],c->r[0]); // 804D3C0C
  if (crb(c,2)) { goto L_804D3C2C; } // 804D3C10
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804D3C14
  c->r[3]=c->r[6]+0x00000004u; // 804D3C18
  c->r[4]=c->r[1]+0x000000A8u; // 804D3C1C
  c->r[5]=0u+0x00000040u; // 804D3C20
  W32(c->r[6]+0x00000000u,c->r[0]); // 804D3C24
  c->lr=0x804D3C2Cu; f_804BE110(c); // 804D3C28
L_804D3C2C:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 804D3C2C
  c->r[3]=R8(c->r[1]+0x00000014u); // 804D3C30
  c->r[0]=R8(c->r[1]+0x00000015u); // 804D3C34
  W8(c->r[4]+0x00000004u,c->r[3]); // 804D3C38
  c->r[3]=R8(c->r[1]+0x00000016u); // 804D3C3C
  W8(c->r[4]+0x00000005u,c->r[0]); // 804D3C40
  c->r[0]=R8(c->r[1]+0x00000017u); // 804D3C44
  W8(c->r[4]+0x00000006u,c->r[3]); // 804D3C48
  W8(c->r[4]+0x00000007u,c->r[0]); // 804D3C4C
L_804D3C50:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 804D3C50
  cmpu(c,0,c->r[0],0x00000002u); // 804D3C54
  if (!crb(c,1)) { goto L_804D3CAC; } // 804D3C58
  c->r[3]=R32(c->r[31]+0x00000004u); // 804D3C5C
  c->r[0]=c->r[1]+0x00000060u; // 804D3C60
  c->r[6]=c->r[3]+0x00000088u; // 804D3C64
  cmpu(c,0,c->r[6],c->r[0]); // 804D3C68
  if (crb(c,2)) { goto L_804D3C88; } // 804D3C6C
  c->r[0]=R32(c->r[1]+0x00000060u); // 804D3C70
  c->r[3]=c->r[6]+0x00000004u; // 804D3C74
  c->r[4]=c->r[1]+0x00000064u; // 804D3C78
  c->r[5]=0u+0x00000040u; // 804D3C7C
  W32(c->r[6]+0x00000000u,c->r[0]); // 804D3C80
  c->lr=0x804D3C88u; f_804BE110(c); // 804D3C84
L_804D3C88:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 804D3C88
  c->r[3]=R8(c->r[1]+0x00000014u); // 804D3C8C
  c->r[0]=R8(c->r[1]+0x00000015u); // 804D3C90
  W8(c->r[4]+0x00000008u,c->r[3]); // 804D3C94
  c->r[3]=R8(c->r[1]+0x00000016u); // 804D3C98
  W8(c->r[4]+0x00000009u,c->r[0]); // 804D3C9C
  c->r[0]=R8(c->r[1]+0x00000017u); // 804D3CA0
  W8(c->r[4]+0x0000000Au,c->r[3]); // 804D3CA4
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 804D3CA8
L_804D3CAC:;
  c->r[26]=R8(c->r[1]+0x00000015u); // 804D3CAC
  c->r[29]=c->r[1]+0x0000001Cu; // 804D3CB0
  c->r[25]=R8(c->r[1]+0x00000016u); // 804D3CB4
  c->r[23]=0u+0x00000003u; // 804D3CB8
  c->r[24]=R8(c->r[1]+0x00000017u); // 804D3CBC
  c->r[28]=0u+0x000000CCu; // 804D3CC0
  c->r[30]=R8(c->r[1]+0x00000014u); // 804D3CC4
  c->r[27]=0u+0x0000000Cu; // 804D3CC8
  goto L_804D3D1C; // 804D3CCC
L_804D3CD0:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 804D3CD0
  c->r[6]=c->r[0]+c->r[28]; // 804D3CD4
  cmpu(c,0,c->r[6],c->r[29]); // 804D3CD8
  if (crb(c,2)) { goto L_804D3CF8; } // 804D3CDC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D3CE0
  c->r[3]=c->r[6]+0x00000004u; // 804D3CE4
  c->r[4]=c->r[1]+0x00000020u; // 804D3CE8
  c->r[5]=0u+0x00000040u; // 804D3CEC
  W32(c->r[6]+0x00000000u,c->r[0]); // 804D3CF0
  c->lr=0x804D3CF8u; f_804BE110(c); // 804D3CF4
L_804D3CF8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 804D3CF8
  c->r[28]=c->r[28]+0x00000044u; // 804D3CFC
  c->r[23]=c->r[23]+0x00000001u; // 804D3D00
  W8(c->r[27]+c->r[0],c->r[30]); // 804D3D04
  c->r[3]=c->r[0]+c->r[27]; // 804D3D08
  c->r[27]=c->r[27]+0x00000004u; // 804D3D0C
  W8(c->r[3]+0x00000001u,c->r[26]); // 804D3D10
  W8(c->r[3]+0x00000002u,c->r[25]); // 804D3D14
  W8(c->r[3]+0x00000003u,c->r[24]); // 804D3D18
L_804D3D1C:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 804D3D1C
  cmpu(c,0,c->r[23],c->r[0]); // 804D3D20
  if (crb(c,0)) { IRQCHK(c); goto L_804D3CD0; } // 804D3D24
  c->r[11]=c->r[1]+0x00000160u; // 804D3D28
  c->r[3]=c->r[31]|c->r[31]; // 804D3D2C
  c->lr=0x804D3D34u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D3D30
  c->r[0]=R32(c->r[1]+0x00000164u); // 804D3D34
  c->lr=c->r[0]; // 804D3D38
  c->r[1]=c->r[1]+0x00000160u; // 804D3D3C
  return; // 804D3D40
}

// Import__Q34nw4r3g3d12LightSettingFRCQ34nw4r3g3d12LightSetting
void f_804D3D44(Ctx* __restrict c) {
  trace_call(0x804D3D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3D44
  c->r[0]=c->lr; // 804D3D48
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D3D4C
  c->r[11]=c->r[1]+0x00000020u; // 804D3D50
  c->lr=0x804D3D58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D3D54
  c->r[5]=R16(c->r[3]+0x00000000u); // 804D3D58
  c->r[27]=c->r[3]|c->r[3]; // 804D3D5C
  c->r[0]=R16(c->r[4]+0x00000000u); // 804D3D60
  c->r[28]=c->r[4]|c->r[4]; // 804D3D64
  cmpu(c,0,c->r[5],c->r[0]); // 804D3D68
  if (crb(c,0)) { goto L_804D3D80; } // 804D3D6C
  c->r[3]=R16(c->r[3]+0x00000002u); // 804D3D70
  c->r[0]=R16(c->r[4]+0x00000002u); // 804D3D74
  cmpu(c,0,c->r[3],c->r[0]); // 804D3D78
  if (!crb(c,0)) { goto L_804D3D88; } // 804D3D7C
L_804D3D80:;
  c->r[3]=0u+0x00000000u; // 804D3D80
  goto L_804D3EBC; // 804D3D84
L_804D3D88:;
  c->r[29]=0u+0x00000000u; // 804D3D88
  c->r[31]=0u+0x00000000u; // 804D3D8C
  c->r[30]=0u+0x00000000u; // 804D3D90
  goto L_804D3E1C; // 804D3D94
L_804D3D98:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 804D3D98
  c->r[3]=R32(c->r[31]+c->r[0]); // 804D3D9C
  c->r[5]=c->r[0]+c->r[31]; // 804D3DA0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804D3DA4
  if (crb(c,2)) { goto L_804D3DD4; } // 804D3DA8
  c->r[0]=R32(c->r[27]+0x00000004u); // 804D3DAC
  c->r[4]=c->r[0]+c->r[31]; // 804D3DB0
  cmpu(c,0,c->r[4],c->r[5]); // 804D3DB4
  if (crb(c,2)) { goto L_804D3DE4; } // 804D3DB8
  W32(c->r[4]+0x00000000u,c->r[3]); // 804D3DBC
  c->r[3]=c->r[4]+0x00000004u; // 804D3DC0
  c->r[4]=c->r[5]+0x00000004u; // 804D3DC4
  c->r[5]=0u+0x00000040u; // 804D3DC8
  c->lr=0x804D3DD0u; f_804BE110(c); // 804D3DCC
  goto L_804D3DE4; // 804D3DD0
L_804D3DD4:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 804D3DD4
  c->r[0]=R32(c->r[3]+c->r[31]); // 804D3DD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 804D3DDC
  W32(c->r[3]+c->r[31],c->r[0]); // 804D3DE0
L_804D3DE4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 804D3DE4
  c->r[31]=c->r[31]+0x00000044u; // 804D3DE8
  c->r[3]=R32(c->r[27]+0x00000008u); // 804D3DEC
  c->r[29]=c->r[29]+0x00000001u; // 804D3DF0
  c->r[4]=c->r[0]+c->r[30]; // 804D3DF4
  c->r[0]=R8(c->r[30]+c->r[0]); // 804D3DF8
  {uint32_t ea=c->r[3]+c->r[30]; W8(ea,c->r[0]); c->r[3]=ea;} // 804D3DFC
  c->r[30]=c->r[30]+0x00000004u; // 804D3E00
  c->r[0]=R8(c->r[4]+0x00000001u); // 804D3E04
  W8(c->r[3]+0x00000001u,c->r[0]); // 804D3E08
  c->r[0]=R8(c->r[4]+0x00000002u); // 804D3E0C
  W8(c->r[3]+0x00000002u,c->r[0]); // 804D3E10
  c->r[0]=R8(c->r[4]+0x00000003u); // 804D3E14
  W8(c->r[3]+0x00000003u,c->r[0]); // 804D3E18
L_804D3E1C:;
  c->r[0]=R16(c->r[28]+0x00000000u); // 804D3E1C
  cmpu(c,0,c->r[29],c->r[0]); // 804D3E20
  if (crb(c,0)) { IRQCHK(c); goto L_804D3D98; } // 804D3E24
  c->r[7]=0u+0x00000000u; // 804D3E28
  c->r[6]=0u+0x00000000u; // 804D3E2C
  goto L_804D3EAC; // 804D3E30
L_804D3E34:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 804D3E34
  c->r[7]=c->r[7]+0x00000001u; // 804D3E38
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 804D3E3C
  c->r[5]=c->r[3]+c->r[6]; // 804D3E40
  c->r[3]=R8(c->r[3]+c->r[6]); // 804D3E44
  c->r[4]=c->r[0]+c->r[6]; // 804D3E48
  c->r[0]=R8(c->r[5]+0x00000001u); // 804D3E4C
  c->r[6]=c->r[6]+0x0000000Cu; // 804D3E50
  W8(c->r[4]+0x00000000u,c->r[3]); // 804D3E54
  W8(c->r[4]+0x00000001u,c->r[0]); // 804D3E58
  c->r[3]=R8(c->r[5]+0x00000002u); // 804D3E5C
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D3E60
  W8(c->r[4]+0x00000002u,c->r[3]); // 804D3E64
  W8(c->r[4]+0x00000003u,c->r[0]); // 804D3E68
  c->r[3]=R8(c->r[5]+0x00000004u); // 804D3E6C
  c->r[0]=R8(c->r[5]+0x00000005u); // 804D3E70
  W8(c->r[4]+0x00000004u,c->r[3]); // 804D3E74
  W8(c->r[4]+0x00000005u,c->r[0]); // 804D3E78
  c->r[3]=R8(c->r[5]+0x00000006u); // 804D3E7C
  c->r[0]=R8(c->r[5]+0x00000007u); // 804D3E80
  W8(c->r[4]+0x00000006u,c->r[3]); // 804D3E84
  W8(c->r[4]+0x00000007u,c->r[0]); // 804D3E88
  c->r[0]=R8(c->r[5]+0x00000008u); // 804D3E8C
  W8(c->r[4]+0x00000008u,c->r[0]); // 804D3E90
  c->r[0]=R8(c->r[5]+0x00000009u); // 804D3E94
  W8(c->r[4]+0x00000009u,c->r[0]); // 804D3E98
  c->r[0]=R8(c->r[5]+0x0000000Au); // 804D3E9C
  W8(c->r[4]+0x0000000Au,c->r[0]); // 804D3EA0
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 804D3EA4
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 804D3EA8
L_804D3EAC:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 804D3EAC
  cmpu(c,0,c->r[7],c->r[0]); // 804D3EB0
  if (crb(c,0)) { IRQCHK(c); goto L_804D3E34; } // 804D3EB4
  c->r[3]=0u+0x00000001u; // 804D3EB8
L_804D3EBC:;
  c->r[11]=c->r[1]+0x00000020u; // 804D3EBC
  c->lr=0x804D3EC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D3EC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D3EC4
  c->lr=c->r[0]; // 804D3EC8
  c->r[1]=c->r[1]+0x00000020u; // 804D3ECC
  return; // 804D3ED0
}

// ApplyViewMtx__Q34nw4r3g3d12LightSettingFRCQ34nw4r4math5MTX34Ul
void f_804D3ED4(Ctx* __restrict c) {
  trace_call(0x804D3ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D3ED4
  c->r[0]=c->lr; // 804D3ED8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D3EDC
  c->r[11]=c->r[1]+0x00000040u; // 804D3EE0
  c->lr=0x804D3EE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D3EE4
  W32(c->r[1]+0x00000008u,c->r[5]); // 804D3EE8
  c->r[28]=c->r[4]|c->r[4]; // 804D3EEC
  c->r[27]=c->r[3]|c->r[3]; // 804D3EF0
  c->r[4]=c->r[1]+0x00000008u; // 804D3EF4
  c->r[0]=R16(c->r[3]+0x00000000u); // 804D3EF8
  cmpu(c,0,c->r[5],c->r[0]); // 804D3EFC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D3F00
  if (!crb(c,0)) { goto L_804D3F0C; } // 804D3F04
  c->r[4]=c->r[1]+0x0000000Cu; // 804D3F08
L_804D3F0C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 804D3F0C
  c->r[29]=0u+0x00000000u; // 804D3F10
  c->r[31]=0u+0x00000000u; // 804D3F14
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D3F18
  goto L_804D3FD0; // 804D3F1C
L_804D3F20:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 804D3F20
  c->r[30]=c->r[0]+c->r[31]; // 804D3F24
  c->r[0]=R32(c->r[31]+c->r[0]); // 804D3F28
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D3F2C
  if (crb(c,2)) { goto L_804D3FC8; } // 804D3F30
  c->r[3]=c->r[30]+0x00000004u; // 804D3F34
  c->r[4]=c->r[1]+0x00000010u; // 804D3F38
  c->r[5]=c->r[1]+0x00000014u; // 804D3F3C
  c->r[6]=c->r[1]+0x00000018u; // 804D3F40
  c->lr=0x804D3F48u; f_803A5A98(c); // 804D3F44
  c->r[3]=c->r[1]+0x00000010u; // 804D3F48
  c->r[4]=c->r[28]|c->r[28]; // 804D3F4C
  c->r[5]=c->r[3]|c->r[3]; // 804D3F50
  c->lr=0x804D3F58u; f_804E1A00(c); // 804D3F54
  c->r[0]=R32(c->r[30]+0x00000000u); // 804D3F58
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804D3F5C
  if (crb(c,2)) { goto L_804D3F7C; } // 804D3F60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3F64
  c->r[3]=c->r[30]+0x00000004u; // 804D3F68
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3F6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3F70
  c->lr=0x804D3F78u; f_803A5AC0(c); // 804D3F74
  goto L_804D3FC8; // 804D3F78
L_804D3F7C:;
  c->r[3]=c->r[30]+0x00000004u; // 804D3F7C
  c->r[4]=c->r[1]+0x0000001Cu; // 804D3F80
  c->r[5]=c->r[1]+0x00000020u; // 804D3F84
  c->r[6]=c->r[1]+0x00000024u; // 804D3F88
  c->lr=0x804D3F90u; f_803A5A60(c); // 804D3F8C
  c->r[4]=c->r[1]+0x0000001Cu; // 804D3F90
  c->r[3]=c->r[28]|c->r[28]; // 804D3F94
  c->r[5]=c->r[4]|c->r[4]; // 804D3F98
  c->lr=0x804D3FA0u; f_80383AA0(c); // 804D3F9C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3FA0
  c->r[3]=c->r[30]+0x00000004u; // 804D3FA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3FA8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3FAC
  c->lr=0x804D3FB4u; f_803A5A50(c); // 804D3FB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D3FB4
  c->r[3]=c->r[30]+0x00000004u; // 804D3FB8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D3FBC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D3FC0
  c->lr=0x804D3FC8u; f_803A5A7C(c); // 804D3FC4
L_804D3FC8:;
  c->r[31]=c->r[31]+0x00000044u; // 804D3FC8
  c->r[29]=c->r[29]+0x00000001u; // 804D3FCC
L_804D3FD0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 804D3FD0
  cmpu(c,0,c->r[29],c->r[0]); // 804D3FD4
  if (crb(c,0)) { IRQCHK(c); goto L_804D3F20; } // 804D3FD8
  c->r[11]=c->r[1]+0x00000040u; // 804D3FDC
  c->lr=0x804D3FE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D3FE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D3FE4
  c->lr=c->r[0]; // 804D3FE8
  c->r[1]=c->r[1]+0x00000040u; // 804D3FEC
  return; // 804D3FF0
}

// SelectLightObj__Q34nw4r3g3d8LightSetFUli
void f_804D3FF4(Ctx* __restrict c) {
  trace_call(0x804D3FF4u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 804D3FF4
  c->r[6]=0u+0x00000000u; // 804D3FF8
  cmps(c,0,(int32_t)c->r[7],0); // 804D3FFC
  if (crb(c,2)) { goto L_804D4014; } // 804D4000
  c->r[0]=R32(c->r[3]+0x00000004u); // 804D4004
  cmps(c,0,(int32_t)c->r[0],0); // 804D4008
  if (crb(c,2)) { goto L_804D4014; } // 804D400C
  c->r[6]=0u+0x00000001u; // 804D4010
L_804D4014:;
  cmps(c,0,(int32_t)c->r[6],0); // 804D4014
  if (crb(c,2)) { goto L_804D405C; } // 804D4018
  cmpu(c,0,c->r[4],0x00000008u); // 804D401C
  if (!crb(c,0)) { goto L_804D405C; } // 804D4020
  cmps(c,0,(int32_t)c->r[5],0); // 804D4024
  if (!crb(c,0)) { goto L_804D4040; } // 804D4028
  c->r[5]=R32(c->r[3]+0x00000004u); // 804D402C
  c->r[0]=0u+0xFFFFFFFFu; // 804D4030
  c->r[3]=0u+0x00000001u; // 804D4034
  W8(c->r[5]+c->r[4],c->r[0]); // 804D4038
  return; // 804D403C
L_804D4040:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 804D4040
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804D4044
  if (!crb(c,0)) { goto L_804D405C; } // 804D4048
  c->r[6]=R32(c->r[3]+0x00000004u); // 804D404C
  c->r[3]=0u+0x00000001u; // 804D4050
  W8(c->r[6]+c->r[4],c->r[5]); // 804D4054
  return; // 804D4058
L_804D405C:;
  c->r[3]=0u+0x00000000u; // 804D405C
  return; // 804D4060
}

// SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
void f_804D4064(Ctx* __restrict c) {
  trace_call(0x804D4064u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 804D4064
  c->r[5]=0u+0x00000000u; // 804D4068
  cmps(c,0,(int32_t)c->r[6],0); // 804D406C
  if (crb(c,2)) { goto L_804D4084; } // 804D4070
  c->r[0]=R32(c->r[3]+0x00000004u); // 804D4074
  cmps(c,0,(int32_t)c->r[0],0); // 804D4078
  if (crb(c,2)) { goto L_804D4084; } // 804D407C
  c->r[5]=0u+0x00000001u; // 804D4080
L_804D4084:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D4084
  if (crb(c,2)) { goto L_804D40C4; } // 804D4088
  cmps(c,0,(int32_t)c->r[4],0); // 804D408C
  if (!crb(c,0)) { goto L_804D40A8; } // 804D4090
  c->r[4]=R32(c->r[3]+0x00000004u); // 804D4094
  c->r[0]=0u+0xFFFFFFFFu; // 804D4098
  c->r[3]=0u+0x00000001u; // 804D409C
  W8(c->r[4]+0x00000008u,c->r[0]); // 804D40A0
  return; // 804D40A4
L_804D40A8:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 804D40A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804D40AC
  if (!crb(c,0)) { goto L_804D40C4; } // 804D40B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 804D40B4
  c->r[3]=0u+0x00000001u; // 804D40B8
  W8(c->r[5]+0x00000008u,c->r[4]); // 804D40BC
  return; // 804D40C0
L_804D40C4:;
  c->r[3]=0u+0x00000000u; // 804D40C4
  return; // 804D40C8
}

// CalcVtx__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjShpPPQ34nw4r3g3d13ResVtxPosDataPPQ34nw4r3g3d13ResVtxNrmDataPPQ34nw4r3g3d13ResVtxClrData
void f_804D40CC(Ctx* __restrict c) {
  trace_call(0x804D40CCu);
  {uint32_t ea=c->r[1]+0xFFFFFA50u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D40CC
  c->r[0]=c->lr; // 804D40D0
  W32(c->r[1]+0x000005B4u,c->r[0]); // 804D40D4
  {uint32_t ea=c->r[1]+0x000005A0u; WF64(ea,c->f[31]);} // 804D40D8
  {uint32_t ea=c->r[1]+0x000005A8u; psq_store(c,31,ea,0,0);} // 804D40DC
  c->r[11]=c->r[1]+0x000005A0u; // 804D40E0
  c->lr=0x804D40E8u; f_803A9BD0(c); // 804D40E4
  c->r[26]=c->r[4]|c->r[4]; // 804D40E8
  c->r[27]=c->r[5]|c->r[5]; // 804D40EC
  c->r[28]=c->r[6]|c->r[6]; // 804D40F0
  c->r[29]=c->r[7]|c->r[7]; // 804D40F4
  c->lr=0x804D40FCu; f_804AC62C(c); // 804D40F8
  c->r[14]=c->r[1]+0x00000368u; // 804D40FC
  c->r[24]=c->r[1]+0x00000558u; // 804D4100
  c->r[4]=c->r[24]-c->r[14]; // 804D4104
  c->r[23]=c->r[3]|c->r[3]; // 804D4108
  c->r[5]=c->r[4]+0x0000000Fu; // 804D410C
  {uint32_t ea=c->r[2]+0x00001758u; c->f[31]=c->ps1[31]=RF32(ea);} // 804D4110
  c->r[0]=sraw(c,c->r[5],4); // 804D4114
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 804D4118
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 804D411C
  c->r[19]=rotl(c->r[5],0)&0x80000000u; // 804D4120
  c->r[21]=c->r[3]+0x00000001u; // 804D4124
  c->r[22]=c->r[1]+0x000004D8u; // 804D4128
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 804D412C
  c->r[31]=0u+0x00000000u; // 804D4130
  c->r[17]=rotl(c->r[21],0)&0x80000000u; // 804D4134
  c->r[25]=0u+0x00000000u; // 804D4138
  goto L_804D489C; // 804D413C
L_804D4140:;
  c->r[3]=c->r[26]|c->r[26]; // 804D4140
  c->r[4]=c->r[31]|c->r[31]; // 804D4144
  c->lr=0x804D414Cu; f_804BAD08(c); // 804D4148
  cmps(c,0,(int32_t)c->r[3],0); // 804D414C
  if (crb(c,2)) { goto L_804D4894; } // 804D4150
  c->r[3]=c->r[1]+0x00000368u; // 804D4154
  W32(c->r[1]+0x00000348u,c->r[25]); // 804D4158
  cmpu(c,0,c->r[3],c->r[24]); // 804D415C
  W32(c->r[1]+0x0000034Cu,c->r[25]); // 804D4160
  W32(c->r[1]+0x00000350u,c->r[25]); // 804D4164
  W32(c->r[1]+0x00000358u,c->r[25]); // 804D4168
  W32(c->r[1]+0x0000035Cu,c->r[25]); // 804D416C
  W32(c->r[1]+0x00000360u,c->r[25]); // 804D4170
  if (!crb(c,0)) { goto L_804D4294; } // 804D4174
  cmps(c,0,(int32_t)c->r[21],8); // 804D4178
  if (!crb(c,1)) { goto L_804D4268; } // 804D417C
  cmpu(c,0,c->r[14],c->r[24]); // 804D4180
  c->r[0]=0u+0x00000000u; // 804D4184
  c->r[4]=0u+0x00000000u; // 804D4188
  if (crb(c,1)) { goto L_804D41B4; } // 804D418C
  cmps(c,0,(int32_t)c->r[20],0); // 804D4190
  c->r[5]=0u+0x00000001u; // 804D4194
  if (!crb(c,2)) { goto L_804D41A8; } // 804D4198
  cmps(c,0,(int32_t)c->r[19],0); // 804D419C
  if (crb(c,2)) { goto L_804D41A8; } // 804D41A0
  c->r[5]=0u+0x00000000u; // 804D41A4
L_804D41A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D41A8
  if (crb(c,2)) { goto L_804D41B4; } // 804D41AC
  c->r[4]=0u+0x00000001u; // 804D41B0
L_804D41B4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D41B4
  if (crb(c,2)) { goto L_804D41E0; } // 804D41B8
  cmps(c,0,(int32_t)c->r[18],0); // 804D41BC
  c->r[4]=0u+0x00000001u; // 804D41C0
  if (!crb(c,2)) { goto L_804D41D4; } // 804D41C4
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[17]); // 804D41C8
  if (crb(c,2)) { goto L_804D41D4; } // 804D41CC
  c->r[4]=0u+0x00000000u; // 804D41D0
L_804D41D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D41D4
  if (crb(c,2)) { goto L_804D41E0; } // 804D41D8
  c->r[0]=0u+0x00000001u; // 804D41DC
L_804D41E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D41E0
  if (crb(c,2)) { goto L_804D4268; } // 804D41E4
  c->r[0]=c->r[22]+0x0000007Fu; // 804D41E8
  c->r[0]=c->r[0]-c->r[3]; // 804D41EC
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 804D41F0
  c->ctr=c->r[0]; // 804D41F4
  cmpu(c,0,c->r[3],c->r[22]); // 804D41F8
  if (!crb(c,0)) { goto L_804D4268; } // 804D41FC
L_804D4200:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 804D4200
  W32(c->r[3]+0x00000004u,c->r[25]); // 804D4204
  W32(c->r[3]+0x00000008u,c->r[25]); // 804D4208
  W32(c->r[3]+0x00000010u,c->r[25]); // 804D420C
  W32(c->r[3]+0x00000014u,c->r[25]); // 804D4210
  W32(c->r[3]+0x00000018u,c->r[25]); // 804D4214
  W32(c->r[3]+0x00000020u,c->r[25]); // 804D4218
  W32(c->r[3]+0x00000024u,c->r[25]); // 804D421C
  W32(c->r[3]+0x00000028u,c->r[25]); // 804D4220
  W32(c->r[3]+0x00000030u,c->r[25]); // 804D4224
  W32(c->r[3]+0x00000034u,c->r[25]); // 804D4228
  W32(c->r[3]+0x00000038u,c->r[25]); // 804D422C
  W32(c->r[3]+0x00000040u,c->r[25]); // 804D4230
  W32(c->r[3]+0x00000044u,c->r[25]); // 804D4234
  W32(c->r[3]+0x00000048u,c->r[25]); // 804D4238
  W32(c->r[3]+0x00000050u,c->r[25]); // 804D423C
  W32(c->r[3]+0x00000054u,c->r[25]); // 804D4240
  W32(c->r[3]+0x00000058u,c->r[25]); // 804D4244
  W32(c->r[3]+0x00000060u,c->r[25]); // 804D4248
  W32(c->r[3]+0x00000064u,c->r[25]); // 804D424C
  W32(c->r[3]+0x00000068u,c->r[25]); // 804D4250
  W32(c->r[3]+0x00000070u,c->r[25]); // 804D4254
  W32(c->r[3]+0x00000074u,c->r[25]); // 804D4258
  W32(c->r[3]+0x00000078u,c->r[25]); // 804D425C
  c->r[3]=c->r[3]+0x00000080u; // 804D4260
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D4200; } // 804D4264
L_804D4268:;
  c->r[0]=c->r[24]+0x0000000Fu; // 804D4268
  c->r[0]=c->r[0]-c->r[3]; // 804D426C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804D4270
  c->ctr=c->r[0]; // 804D4274
  cmpu(c,0,c->r[3],c->r[24]); // 804D4278
  if (!crb(c,0)) { goto L_804D4294; } // 804D427C
L_804D4280:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 804D4280
  W32(c->r[3]+0x00000004u,c->r[25]); // 804D4284
  W32(c->r[3]+0x00000008u,c->r[25]); // 804D4288
  c->r[3]=c->r[3]+0x00000010u; // 804D428C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D4280; } // 804D4290
L_804D4294:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D4294
  c->r[3]=c->r[26]|c->r[26]; // 804D4298
  c->r[5]=c->r[31]|c->r[31]; // 804D429C
  c->r[4]=c->r[1]+0x00000340u; // 804D42A0
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D42A4
  c->ctr=c->r[12]; // 804D42A8
  if (true) { c->lr=0x804D42B0u; dispatch(c,c->ctr); } // 804D42AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 804D42B0
  c->r[30]=c->r[3]|c->r[3]; // 804D42B4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 804D42B8
  if (crb(c,2)) { goto L_804D4894; } // 804D42BC
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804D42C0
  if (crb(c,2)) { goto L_804D44D8; } // 804D42C4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804D42C8
  c->r[4]=0u+0x00000000u; // 804D42CC
  W32(c->r[1]+0x00000020u,c->r[0]); // 804D42D0
  c->r[16]=R32(c->r[27]+0x00000000u); // 804D42D4
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D42D8
  cmps(c,0,(int32_t)c->r[0],0); // 804D42DC
  if (crb(c,2)) { goto L_804D42EC; } // 804D42E0
  c->r[15]=c->r[16]+c->r[0]; // 804D42E4
  goto L_804D42F0; // 804D42E8
L_804D42EC:;
  c->r[15]=0u+0x00000000u; // 804D42EC
L_804D42F0:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D42F0
  fcmp(c,0,c->f[31],c->f[0]); // 804D42F4
  if (crb(c,2)) { goto L_804D4320; } // 804D42F8
  c->r[3]=c->r[1]+0x00000020u; // 804D42FC
  c->r[4]=c->r[1]+0x0000001Cu; // 804D4300
  c->r[5]=c->r[1]+0x0000000Au; // 804D4304
  c->lr=0x804D430Cu; f_804B01F0(c); // 804D4308
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804D430C
  c->r[4]=0u+0x00000001u; // 804D4310
  W32(c->r[1]+0x00000238u,c->r[0]); // 804D4314
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4318
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 804D431C
L_804D4320:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804D4320
  c->r[5]=c->r[1]+0x00000238u; // 804D4324
  c->r[3]=c->r[30]|c->r[30]; // 804D4328
  c->r[7]=0u+0x00000000u; // 804D432C
  c->r[5]=c->r[5]+c->r[0]; // 804D4330
  goto L_804D437C; // 804D4334
L_804D4338:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4338
  fcmp(c,0,c->f[31],c->f[0]); // 804D433C
  if (crb(c,2)) { goto L_804D4374; } // 804D4340
  c->r[6]=R32(c->r[3]+0x00000018u); // 804D4344
  c->r[0]=R32(c->r[6]+0x00000008u); // 804D4348
  cmps(c,0,(int32_t)c->r[0],0); // 804D434C
  if (crb(c,2)) { goto L_804D435C; } // 804D4350
  c->r[0]=c->r[6]+c->r[0]; // 804D4354
  goto L_804D4360; // 804D4358
L_804D435C:;
  c->r[0]=0u+0x00000000u; // 804D435C
L_804D4360:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D4360
  c->r[4]=c->r[4]+0x00000001u; // 804D4364
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4368
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 804D436C
  c->r[5]=c->r[5]+0x00000008u; // 804D4370
L_804D4374:;
  c->r[3]=c->r[3]+0x00000010u; // 804D4374
  c->r[7]=c->r[7]+0x00000001u; // 804D4378
L_804D437C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804D437C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804D4380
  if (crb(c,0)) { IRQCHK(c); goto L_804D4338; } // 804D4384
  c->r[5]=R32(c->r[1]+0x00000020u); // 804D4388
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804D438C
  c->r[3]=c->r[1]+0x00000238u; // 804D4390
  c->r[4]=R16(c->r[5]+0x0000001Eu); // 804D4394
  c->r[3]=c->r[3]+c->r[0]; // 804D4398
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804D439C
  c->r[8]=c->r[15]+c->r[4]; // 804D43A0
  goto L_804D44B4; // 804D43A4
L_804D43A8:;
  c->r[7]=R32(c->r[1]+0x00000238u); // 804D43A8
  c->r[5]=c->r[1]+0x00000240u; // 804D43AC
  c->r[6]=c->r[3]+0x00000007u; // 804D43B0
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D43B4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 804D43B8
  c->r[6]=c->r[6]-c->r[5]; // 804D43BC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 804D43C0
  c->r[0]=c->r[7]+0x0000000Cu; // 804D43C4
  cmpu(c,0,c->r[5],c->r[3]); // 804D43C8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804D43CC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804D43D0
  W32(c->r[1]+0x00000238u,c->r[0]); // 804D43D4
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 804D43D8
  if (!crb(c,0)) { goto L_804D44A8; } // 804D43DC
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 804D43E0
  c->ctr=c->r[0]; // 804D43E4
  if (crb(c,2)) { goto L_804D447C; } // 804D43E8
L_804D43EC:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 804D43EC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D43F0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D43F4
  c->r[0]=c->r[7]+0x0000000Cu; // 804D43F8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D43FC
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4400
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D4404
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4408
  c->r[7]=R32(c->r[5]+0x00000008u); // 804D440C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4410
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4414
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4418
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D441C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4420
  W32(c->r[5]+0x00000008u,c->r[0]); // 804D4424
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4428
  c->r[7]=R32(c->r[5]+0x00000010u); // 804D442C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4430
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4434
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4438
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D443C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4440
  W32(c->r[5]+0x00000010u,c->r[0]); // 804D4444
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4448
  c->r[7]=R32(c->r[5]+0x00000018u); // 804D444C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4450
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4454
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4458
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D445C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4460
  W32(c->r[5]+0x00000018u,c->r[0]); // 804D4464
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4468
  c->r[5]=c->r[5]+0x00000020u; // 804D446C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D43EC; } // 804D4470
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 804D4474
  if (crb(c,2)) { goto L_804D44A8; } // 804D4478
L_804D447C:;
  c->ctr=c->r[6]; // 804D447C
L_804D4480:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 804D4480
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4484
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4488
  c->r[0]=c->r[7]+0x0000000Cu; // 804D448C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D4490
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4494
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D4498
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D449C
  c->r[5]=c->r[5]+0x00000008u; // 804D44A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D4480; } // 804D44A4
L_804D44A8:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 804D44A8
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 804D44AC
  c->r[15]=c->r[15]+0x0000000Cu; // 804D44B0
L_804D44B4:;
  cmpu(c,0,c->r[15],c->r[8]); // 804D44B4
  if (crb(c,0)) { IRQCHK(c); goto L_804D43A8; } // 804D44B8
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D44BC
  cmps(c,0,(int32_t)c->r[0],0); // 804D44C0
  if (crb(c,2)) { goto L_804D44D0; } // 804D44C4
  c->r[3]=c->r[16]+c->r[0]; // 804D44C8
  goto L_804D44D4; // 804D44CC
L_804D44D0:;
  c->r[3]=0u+0x00000000u; // 804D44D0
L_804D44D4:;
  c->lr=0x804D44D8u; f_8037723C(c); // 804D44D4
L_804D44D8:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804D44D8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 804D44DC
  if (crb(c,2)) { goto L_804D4704; } // 804D44E0
  cmps(c,0,(int32_t)c->r[28],0); // 804D44E4
  if (crb(c,2)) { goto L_804D4704; } // 804D44E8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804D44EC
  c->r[3]=0u+0x00000000u; // 804D44F0
  W32(c->r[1]+0x00000018u,c->r[4]); // 804D44F4
  c->r[0]=R32(c->r[4]+0x00000010u); // 804D44F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D44FC
  c->r[16]=R32(c->r[28]+c->r[0]); // 804D4500
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D4504
  cmps(c,0,(int32_t)c->r[0],0); // 804D4508
  if (crb(c,2)) { goto L_804D4518; } // 804D450C
  c->r[15]=c->r[16]+c->r[0]; // 804D4510
  goto L_804D451C; // 804D4514
L_804D4518:;
  c->r[15]=0u+0x00000000u; // 804D4518
L_804D451C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D451C
  fcmp(c,0,c->f[31],c->f[0]); // 804D4520
  if (crb(c,2)) { goto L_804D454C; } // 804D4524
  c->r[3]=c->r[1]+0x00000018u; // 804D4528
  c->r[4]=c->r[1]+0x00000014u; // 804D452C
  c->r[5]=c->r[1]+0x00000009u; // 804D4530
  c->lr=0x804D4538u; f_804B02C0(c); // 804D4534
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D4538
  c->r[3]=0u+0x00000001u; // 804D453C
  W32(c->r[1]+0x00000130u,c->r[0]); // 804D4540
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4544
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 804D4548
L_804D454C:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804D454C
  c->r[5]=c->r[1]+0x00000130u; // 804D4550
  c->r[4]=c->r[30]|c->r[30]; // 804D4554
  c->r[7]=0u+0x00000000u; // 804D4558
  c->r[5]=c->r[5]+c->r[0]; // 804D455C
  goto L_804D45A8; // 804D4560
L_804D4564:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4564
  fcmp(c,0,c->f[31],c->f[0]); // 804D4568
  if (crb(c,2)) { goto L_804D45A0; } // 804D456C
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 804D4570
  c->r[0]=R32(c->r[6]+0x00000008u); // 804D4574
  cmps(c,0,(int32_t)c->r[0],0); // 804D4578
  if (crb(c,2)) { goto L_804D4588; } // 804D457C
  c->r[0]=c->r[6]+c->r[0]; // 804D4580
  goto L_804D458C; // 804D4584
L_804D4588:;
  c->r[0]=0u+0x00000000u; // 804D4588
L_804D458C:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D458C
  c->r[3]=c->r[3]+0x00000001u; // 804D4590
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4594
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 804D4598
  c->r[5]=c->r[5]+0x00000008u; // 804D459C
L_804D45A0:;
  c->r[4]=c->r[4]+0x00000010u; // 804D45A0
  c->r[7]=c->r[7]+0x00000001u; // 804D45A4
L_804D45A8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804D45A8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804D45AC
  if (crb(c,0)) { IRQCHK(c); goto L_804D4564; } // 804D45B0
  c->r[4]=R32(c->r[1]+0x00000018u); // 804D45B4
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804D45B8
  c->r[3]=c->r[1]+0x00000130u; // 804D45BC
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 804D45C0
  c->r[3]=c->r[3]+c->r[0]; // 804D45C4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804D45C8
  c->r[8]=c->r[15]+c->r[4]; // 804D45CC
  goto L_804D46E0; // 804D45D0
L_804D45D4:;
  c->r[7]=R32(c->r[1]+0x00000130u); // 804D45D4
  c->r[5]=c->r[1]+0x00000138u; // 804D45D8
  c->r[6]=c->r[3]+0x00000007u; // 804D45DC
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D45E0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 804D45E4
  c->r[6]=c->r[6]-c->r[5]; // 804D45E8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 804D45EC
  c->r[0]=c->r[7]+0x0000000Cu; // 804D45F0
  cmpu(c,0,c->r[5],c->r[3]); // 804D45F4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804D45F8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804D45FC
  W32(c->r[1]+0x00000130u,c->r[0]); // 804D4600
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 804D4604
  if (!crb(c,0)) { goto L_804D46D4; } // 804D4608
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 804D460C
  c->ctr=c->r[0]; // 804D4610
  if (crb(c,2)) { goto L_804D46A8; } // 804D4614
L_804D4618:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 804D4618
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D461C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4620
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4624
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D4628
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D462C
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D4630
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4634
  c->r[7]=R32(c->r[5]+0x00000008u); // 804D4638
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D463C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4640
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4644
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D4648
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D464C
  W32(c->r[5]+0x00000008u,c->r[0]); // 804D4650
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4654
  c->r[7]=R32(c->r[5]+0x00000010u); // 804D4658
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D465C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4660
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4664
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D4668
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D466C
  W32(c->r[5]+0x00000010u,c->r[0]); // 804D4670
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4674
  c->r[7]=R32(c->r[5]+0x00000018u); // 804D4678
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D467C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D4680
  c->r[0]=c->r[7]+0x0000000Cu; // 804D4684
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D4688
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D468C
  W32(c->r[5]+0x00000018u,c->r[0]); // 804D4690
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4694
  c->r[5]=c->r[5]+0x00000020u; // 804D4698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D4618; } // 804D469C
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 804D46A0
  if (crb(c,2)) { goto L_804D46D4; } // 804D46A4
L_804D46A8:;
  c->ctr=c->r[6]; // 804D46A8
L_804D46AC:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 804D46AC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D46B0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 804D46B4
  c->r[0]=c->r[7]+0x0000000Cu; // 804D46B8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 804D46BC
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D46C0
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D46C4
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D46C8
  c->r[5]=c->r[5]+0x00000008u; // 804D46CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D46AC; } // 804D46D0
L_804D46D4:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 804D46D4
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 804D46D8
  c->r[15]=c->r[15]+0x0000000Cu; // 804D46DC
L_804D46E0:;
  cmpu(c,0,c->r[15],c->r[8]); // 804D46E0
  if (crb(c,0)) { IRQCHK(c); goto L_804D45D4; } // 804D46E4
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D46E8
  cmps(c,0,(int32_t)c->r[0],0); // 804D46EC
  if (crb(c,2)) { goto L_804D46FC; } // 804D46F0
  c->r[3]=c->r[16]+c->r[0]; // 804D46F4
  goto L_804D4700; // 804D46F8
L_804D46FC:;
  c->r[3]=0u+0x00000000u; // 804D46FC
L_804D4700:;
  c->lr=0x804D4704u; f_8037723C(c); // 804D4700
L_804D4704:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804D4704
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 804D4708
  if (crb(c,2)) { goto L_804D4894; } // 804D470C
  cmps(c,0,(int32_t)c->r[29],0); // 804D4710
  if (crb(c,2)) { goto L_804D4894; } // 804D4714
  c->r[4]=R32(c->r[30]+0x00000010u); // 804D4718
  c->r[3]=0u+0x00000000u; // 804D471C
  W32(c->r[1]+0x00000010u,c->r[4]); // 804D4720
  c->r[0]=R32(c->r[4]+0x00000010u); // 804D4724
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D4728
  c->r[16]=R32(c->r[29]+c->r[0]); // 804D472C
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D4730
  cmps(c,0,(int32_t)c->r[0],0); // 804D4734
  if (crb(c,2)) { goto L_804D4744; } // 804D4738
  c->r[15]=c->r[16]+c->r[0]; // 804D473C
  goto L_804D4748; // 804D4740
L_804D4744:;
  c->r[15]=0u+0x00000000u; // 804D4744
L_804D4748:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4748
  fcmp(c,0,c->f[31],c->f[0]); // 804D474C
  if (crb(c,2)) { goto L_804D4778; } // 804D4750
  c->r[3]=c->r[1]+0x00000010u; // 804D4754
  c->r[4]=c->r[1]+0x0000000Cu; // 804D4758
  c->r[5]=c->r[1]+0x00000008u; // 804D475C
  c->lr=0x804D4764u; f_804B039C(c); // 804D4760
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804D4764
  c->r[3]=0u+0x00000001u; // 804D4768
  W32(c->r[1]+0x00000028u,c->r[0]); // 804D476C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4770
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804D4774
L_804D4778:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804D4778
  c->r[5]=c->r[1]+0x00000028u; // 804D477C
  c->r[4]=c->r[30]|c->r[30]; // 804D4780
  c->r[7]=0u+0x00000000u; // 804D4784
  c->r[5]=c->r[5]+c->r[0]; // 804D4788
  goto L_804D47D4; // 804D478C
L_804D4790:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4790
  fcmp(c,0,c->f[31],c->f[0]); // 804D4794
  if (crb(c,2)) { goto L_804D47CC; } // 804D4798
  c->r[6]=R32(c->r[4]+0x00000020u); // 804D479C
  c->r[0]=R32(c->r[6]+0x00000008u); // 804D47A0
  cmps(c,0,(int32_t)c->r[0],0); // 804D47A4
  if (crb(c,2)) { goto L_804D47B4; } // 804D47A8
  c->r[0]=c->r[6]+c->r[0]; // 804D47AC
  goto L_804D47B8; // 804D47B0
L_804D47B4:;
  c->r[0]=0u+0x00000000u; // 804D47B4
L_804D47B8:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 804D47B8
  c->r[3]=c->r[3]+0x00000001u; // 804D47BC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D47C0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 804D47C4
  c->r[5]=c->r[5]+0x00000008u; // 804D47C8
L_804D47CC:;
  c->r[4]=c->r[4]+0x00000010u; // 804D47CC
  c->r[7]=c->r[7]+0x00000001u; // 804D47D0
L_804D47D4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804D47D4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804D47D8
  if (crb(c,0)) { IRQCHK(c); goto L_804D4790; } // 804D47DC
  c->r[4]=R32(c->r[1]+0x00000010u); // 804D47E0
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804D47E4
  c->r[3]=c->r[1]+0x00000028u; // 804D47E8
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 804D47EC
  c->r[3]=c->r[3]+c->r[0]; // 804D47F0
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D47F4
  c->r[6]=c->r[15]+c->r[4]; // 804D47F8
  goto L_804D4870; // 804D47FC
L_804D4800:;
  c->r[5]=R32(c->r[1]+0x00000028u); // 804D4800
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4804
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,2);} // 804D4808
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,1,ea,0,2);} // 804D480C
  c->r[7]=c->r[1]+0x00000030u; // 804D4810
  c->r[0]=c->r[3]+0x00000007u; // 804D4814
  c->r[5]=c->r[5]+0x00000004u; // 804D4818
  c->r[0]=c->r[0]-c->r[7]; // 804D481C
  W32(c->r[1]+0x00000028u,c->r[5]); // 804D4820
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804D4824
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804D4828
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804D482C
  c->ctr=c->r[0]; // 804D4830
  cmpu(c,0,c->r[7],c->r[3]); // 804D4834
  if (!crb(c,0)) { goto L_804D4864; } // 804D4838
L_804D483C:;
  c->r[5]=R32(c->r[7]+0x00000000u); // 804D483C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4840
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,2);} // 804D4844
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,4,ea,0,2);} // 804D4848
  c->r[0]=c->r[5]+0x00000004u; // 804D484C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804D4850
  W32(c->r[7]+0x00000000u,c->r[0]); // 804D4854
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 804D4858
  c->r[7]=c->r[7]+0x00000008u; // 804D485C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D483C; } // 804D4860
L_804D4864:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,2);} // 804D4864
  {uint32_t ea=c->r[15]+0x00000002u; psq_store(c,1,ea,0,2);} // 804D4868
  c->r[15]=c->r[15]+0x00000004u; // 804D486C
L_804D4870:;
  cmpu(c,0,c->r[15],c->r[6]); // 804D4870
  if (crb(c,0)) { IRQCHK(c); goto L_804D4800; } // 804D4874
  c->r[0]=R32(c->r[16]+0x00000008u); // 804D4878
  cmps(c,0,(int32_t)c->r[0],0); // 804D487C
  if (crb(c,2)) { goto L_804D488C; } // 804D4880
  c->r[3]=c->r[16]+c->r[0]; // 804D4884
  goto L_804D4890; // 804D4888
L_804D488C:;
  c->r[3]=0u+0x00000000u; // 804D488C
L_804D4890:;
  c->lr=0x804D4894u; f_8037723C(c); // 804D4890
L_804D4894:;
  c->r[27]=c->r[27]+0x00000004u; // 804D4894
  c->r[31]=c->r[31]+0x00000001u; // 804D4898
L_804D489C:;
  cmpu(c,0,c->r[31],c->r[23]); // 804D489C
  if (crb(c,0)) { IRQCHK(c); goto L_804D4140; } // 804D48A0
  {uint32_t ea=c->r[1]+0x000005A8u; psq_load(c,31,ea,0,0);} // 804D48A4
  c->r[11]=c->r[1]+0x000005A0u; // 804D48A8
  {uint32_t ea=c->r[1]+0x000005A0u; c->f[31]=RF64(ea);} // 804D48AC
  c->lr=0x804D48B4u; f_803A9C1C(c); // 804D48B0
  c->r[0]=R32(c->r[1]+0x000005B4u); // 804D48B4
  c->lr=c->r[0]; // 804D48B8
  c->r[1]=c->r[1]+0x000005B0u; // 804D48BC
  return; // 804D48C0
}

// fn_804D48C4
void f_804D48C4(Ctx* __restrict c) {
  trace_call(0x804D48C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D48C4
  c->r[0]=c->lr; // 804D48C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D48CC
  c->r[3]=R32(c->r[13]+0xFFFFA2C8u); // 804D48D0
  c->lr=0x804D48D8u; f_80376034(c); // 804D48D4
  c->r[3]=0u+0x00000004u; // 804D48D8
  c->r[3]=c->r[3]|0x00040000u; // 804D48DC
  mtspr(c,914,c->r[3]); // 804D48E0
  c->r[3]=0u+0x00000005u; // 804D48E4
  c->r[3]=c->r[3]|0x00050000u; // 804D48E8
  mtspr(c,915,c->r[3]); // 804D48EC
  c->r[3]=0u+0x00000006u; // 804D48F0
  c->r[3]=c->r[3]|0x00060000u; // 804D48F4
  mtspr(c,916,c->r[3]); // 804D48F8
  c->r[3]=0u+0x00000007u; // 804D48FC
  c->r[3]=c->r[3]|0x00070000u; // 804D4900
  mtspr(c,917,c->r[3]); // 804D4904
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D4908
  c->lr=c->r[0]; // 804D490C
  c->r[1]=c->r[1]+0x00000010u; // 804D4910
  return; // 804D4914
}

// __ct__Q34nw4r3lyt4PaneFPCQ44nw4r3lyt3res4Pane
void f_804D4918(Ctx* __restrict c) {
  trace_call(0x804D4918u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4918
  c->r[0]=c->lr; // 804D491C
  c->r[6]=0u+0x80720000u; // 804D4920
  {uint32_t ea=c->r[2]+0x00001760u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4924
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D4928
  c->r[7]=c->r[3]+0x00000014u; // 804D492C
  c->r[0]=R8(c->r[4]+0x00000009u); // 804D4930
  c->r[8]=c->r[3]+0x00000020u; // 804D4934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D4938
  c->r[31]=0u+0x00000000u; // 804D493C
  c->r[6]=c->r[6]+0xFFFFA678u; // 804D4940
  c->r[5]=0u+0x00000010u; // 804D4944
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D4948
  c->r[30]=c->r[4]|c->r[4]; // 804D494C
  c->r[4]=c->r[4]+0x0000000Cu; // 804D4950
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D4954
  c->r[29]=c->r[3]|c->r[3]; // 804D4958
  W32(c->r[3]+0x00000014u,c->r[31]); // 804D495C
  W32(c->r[3]+0x00000018u,c->r[31]); // 804D4960
  W32(c->r[3]+0x00000020u,c->r[31]); // 804D4964
  W32(c->r[3]+0x00000024u,c->r[31]); // 804D4968
  W32(c->r[3]+0x00000004u,c->r[31]); // 804D496C
  W32(c->r[3]+0x00000008u,c->r[31]); // 804D4970
  W32(c->r[3]+0x00000000u,c->r[6]); // 804D4974
  W32(c->r[3]+0x00000010u,c->r[31]); // 804D4978
  W32(c->r[3]+0x00000014u,c->r[7]); // 804D497C
  W32(c->r[3]+0x00000018u,c->r[7]); // 804D4980
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 804D4984
  W32(c->r[3]+0x00000020u,c->r[8]); // 804D4988
  W32(c->r[3]+0x00000024u,c->r[8]); // 804D498C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 804D4990
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 804D4994
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 804D4998
  W32(c->r[3]+0x00000028u,c->r[31]); // 804D499C
  W8(c->r[3]+0x000000D6u,c->r[31]); // 804D49A0
  W32(c->r[3]+0x000000B4u,c->r[31]); // 804D49A4
  W8(c->r[3]+0x000000BAu,c->r[0]); // 804D49A8
  c->r[3]=c->r[3]+0x000000BCu; // 804D49AC
  c->lr=0x804D49B4u; f_803B3880(c); // 804D49B0
  W8(c->r[29]+0x000000CCu,c->r[31]); // 804D49B4
  c->r[3]=c->r[29]+0x000000CDu; // 804D49B8
  c->r[4]=c->r[30]+0x0000001Cu; // 804D49BC
  c->r[5]=0u+0x00000008u; // 804D49C0
  c->lr=0x804D49C8u; f_803B3880(c); // 804D49C4
  c->r[4]=R8(c->r[30]+0x0000000Au); // 804D49C8
  c->r[3]=c->r[29]|c->r[29]; // 804D49CC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 804D49D0
  {uint32_t ea=c->r[30]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 804D49D4
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804D49D8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 804D49DC
  {uint32_t ea=c->r[30]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D49E0
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D49E4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D49E8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D49EC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D49F0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D49F4
  c->r[0]=R8(c->r[30]+0x00000008u); // 804D49F8
  W8(c->r[29]+0x000000D5u,c->r[31]); // 804D49FC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[9]);} // 804D4A00
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[8]);} // 804D4A04
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[7]);} // 804D4A08
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[6]);} // 804D4A0C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[5]);} // 804D4A10
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[4]);} // 804D4A14
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[3]);} // 804D4A18
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[2]);} // 804D4A1C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[1]);} // 804D4A20
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 804D4A24
  W8(c->r[29]+0x000000B8u,c->r[4]); // 804D4A28
  W8(c->r[29]+0x000000B9u,c->r[4]); // 804D4A2C
  W8(c->r[29]+0x000000BBu,c->r[0]); // 804D4A30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D4A34
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D4A38
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D4A3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D4A40
  c->lr=c->r[0]; // 804D4A44
  c->r[1]=c->r[1]+0x00000020u; // 804D4A48
  return; // 804D4A4C
}

// __dt__Q34nw4r3lyt4PaneFv
void f_804D4A50(Ctx* __restrict c) {
  trace_call(0x804D4A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4A50
  c->r[0]=c->lr; // 804D4A54
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D4A58
  c->r[11]=c->r[1]+0x00000030u; // 804D4A5C
  c->lr=0x804D4A64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D4A60
  cmps(c,0,(int32_t)c->r[3],0); // 804D4A64
  c->r[27]=c->r[3]|c->r[3]; // 804D4A68
  c->r[28]=c->r[4]|c->r[4]; // 804D4A6C
  if (crb(c,2)) { goto L_804D4B6C; } // 804D4A70
  c->r[4]=0u+0x80720000u; // 804D4A74
  c->r[31]=R32(c->r[3]+0x00000014u); // 804D4A78
  c->r[4]=c->r[4]+0xFFFFA678u; // 804D4A7C
  c->r[30]=c->r[3]+0x00000014u; // 804D4A80
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D4A84
  goto L_804D4ADC; // 804D4A88
L_804D4A8C:;
  c->r[29]=c->r[31]|c->r[31]; // 804D4A8C
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D4A90
  c->r[3]=c->r[27]+0x00000010u; // 804D4A94
  c->r[4]=c->r[1]+0x00000008u; // 804D4A98
  W32(c->r[1]+0x00000008u,c->r[29]); // 804D4A9C
  c->lr=0x804D4AA4u; f_80507E50(c); // 804D4AA0
  c->r[0]=R8(c->r[29]+0x000000D2u); // 804D4AA4
  cmps(c,0,(int32_t)c->r[0],0); // 804D4AA8
  if (!crb(c,2)) { goto L_804D4ADC; } // 804D4AAC
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 804D4AB0
  if (crb(c,2)) { goto L_804D4ADC; } // 804D4AB4
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D4AB8
  c->r[3]=c->r[29]|c->r[29]; // 804D4ABC
  c->r[4]=0u+0xFFFFFFFFu; // 804D4AC0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D4AC4
  c->ctr=c->r[12]; // 804D4AC8
  if (true) { c->lr=0x804D4AD0u; dispatch(c,c->ctr); } // 804D4ACC
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D4AD0
  c->r[4]=c->r[29]|c->r[29]; // 804D4AD4
  c->lr=0x804D4ADCu; f_803C4D18(c); // 804D4AD8
L_804D4ADC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D4ADC
  if (!crb(c,2)) { IRQCHK(c); goto L_804D4A8C; } // 804D4AE0
  c->r[12]=R32(c->r[27]+0x00000000u); // 804D4AE4
  c->r[3]=c->r[27]|c->r[27]; // 804D4AE8
  c->r[4]=0u+0x00000000u; // 804D4AEC
  c->r[12]=R32(c->r[12]+0x00000050u); // 804D4AF0
  c->ctr=c->r[12]; // 804D4AF4
  if (true) { c->lr=0x804D4AFCu; dispatch(c,c->ctr); } // 804D4AF8
  c->r[29]=R32(c->r[27]+0x00000028u); // 804D4AFC
  cmps(c,1,(int32_t)c->r[29],0); // 804D4B00
  if (crb(c,6)) { goto L_804D4B3C; } // 804D4B04
  c->r[0]=R8(c->r[29]+0x00000059u); // 804D4B08
  cmps(c,0,(int32_t)c->r[0],0); // 804D4B0C
  if (!crb(c,2)) { goto L_804D4B3C; } // 804D4B10
  if (crb(c,6)) { goto L_804D4B3C; } // 804D4B14
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D4B18
  c->r[3]=c->r[29]|c->r[29]; // 804D4B1C
  c->r[4]=0u+0xFFFFFFFFu; // 804D4B20
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D4B24
  c->ctr=c->r[12]; // 804D4B28
  if (true) { c->lr=0x804D4B30u; dispatch(c,c->ctr); } // 804D4B2C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D4B30
  c->r[4]=c->r[29]|c->r[29]; // 804D4B34
  c->lr=0x804D4B3Cu; f_803C4D18(c); // 804D4B38
L_804D4B3C:;
  c->r[3]=addc(c,c->r[27],0x0000001Cu,0); cr0(c,c->r[3]); // 804D4B3C
  if (crb(c,2)) { goto L_804D4B4C; } // 804D4B40
  c->r[4]=0u+0x00000000u; // 804D4B44
  c->lr=0x804D4B4Cu; f_80507DCC(c); // 804D4B48
L_804D4B4C:;
  c->r[3]=addc(c,c->r[27],0x00000010u,0); cr0(c,c->r[3]); // 804D4B4C
  if (crb(c,2)) { goto L_804D4B5C; } // 804D4B50
  c->r[4]=0u+0x00000000u; // 804D4B54
  c->lr=0x804D4B5Cu; f_80507DCC(c); // 804D4B58
L_804D4B5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D4B5C
  if (!crb(c,1)) { goto L_804D4B6C; } // 804D4B60
  c->r[3]=c->r[27]|c->r[27]; // 804D4B64
  c->lr=0x804D4B6Cu; f_803A9400(c); // 804D4B68
L_804D4B6C:;
  c->r[11]=c->r[1]+0x00000030u; // 804D4B6C
  c->r[3]=c->r[27]|c->r[27]; // 804D4B70
  c->lr=0x804D4B78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D4B74
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D4B78
  c->lr=c->r[0]; // 804D4B7C
  c->r[1]=c->r[1]+0x00000030u; // 804D4B80
  return; // 804D4B84
}

// AppendChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_804D4B88(Ctx* __restrict c) {
  trace_call(0x804D4B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4B88
  c->r[0]=c->lr; // 804D4B8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D4B90
  c->r[0]=c->r[3]+0x00000014u; // 804D4B94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D4B98
  c->r[31]=c->r[4]|c->r[4]; // 804D4B9C
  c->r[4]=c->r[1]+0x00000008u; // 804D4BA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D4BA4
  c->r[30]=c->r[3]|c->r[3]; // 804D4BA8
  c->r[3]=c->r[3]+0x00000010u; // 804D4BAC
  c->r[5]=c->r[31]+0x00000004u; // 804D4BB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D4BB4
  c->lr=0x804D4BBCu; f_80507EDC(c); // 804D4BB8
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 804D4BBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D4BC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D4BC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D4BC8
  c->lr=c->r[0]; // 804D4BCC
  c->r[1]=c->r[1]+0x00000020u; // 804D4BD0
  return; // 804D4BD4
}

// fn_804D4BD8
void f_804D4BD8(Ctx* __restrict c) {
  trace_call(0x804D4BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4BD8
  c->r[0]=c->lr; // 804D4BDC
  {uint32_t ea=c->r[2]+0x00001760u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4BE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D4BE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D4BE8
  c->r[31]=c->r[4]|c->r[4]; // 804D4BEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D4BF0
  c->r[30]=c->r[3]|c->r[3]; // 804D4BF4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804D4BF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804D4BFC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804D4C00
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D4C04
  c->r[3]=c->r[31]|c->r[31]; // 804D4C08
  c->lr=0x804D4C10u; f_804D56A8(c); // 804D4C0C
  W32(c->r[1]+0x00000010u,c->r[3]); // 804D4C10
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4C14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D4C18
  W32(c->r[1]+0x00000014u,c->r[4]); // 804D4C1C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 804D4C20
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4C24
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4C28
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 804D4C2C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 804D4C30
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[2]);} // 804D4C34
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 804D4C38
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D4C3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D4C40
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D4C44
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D4C48
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804D4C4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D4C50
  c->lr=c->r[0]; // 804D4C54
  c->r[1]=c->r[1]+0x00000020u; // 804D4C58
  return; // 804D4C5C
}

// fn_804D4C60
void f_804D4C60(Ctx* __restrict c) {
  trace_call(0x804D4C60u);
  c->r[0]=0u+0xFFFFFFFFu; // 804D4C60
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D4C64
  return; // 804D4C68
}

// fn_804D4C6C
void f_804D4C6C(Ctx* __restrict c) {
  trace_call(0x804D4C6Cu);
  return; // 804D4C6C
}

// fn_804D4C70
void f_804D4C70(Ctx* __restrict c) {
  trace_call(0x804D4C70u);
  cmps(c,0,(int32_t)c->r[4],16); // 804D4C70
  if (crb(c,2)) { goto L_804D4C7C; } // 804D4C74
  goto L_804D4C84; // 804D4C78
L_804D4C7C:;
  c->r[3]=R8(c->r[3]+0x000000B8u); // 804D4C7C
  return; // 804D4C80
L_804D4C84:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D4C84
  c->r[12]=R32(c->r[12]+0x00000034u); // 804D4C88
  c->ctr=c->r[12]; // 804D4C8C
  if (true) { dispatch(c,c->ctr); return; } // 804D4C90
}

// fn_804D4C94
void f_804D4C94(Ctx* __restrict c) {
  trace_call(0x804D4C94u);
  return; // 804D4C94
}

// fn_804D4C98
void f_804D4C98(Ctx* __restrict c) {
  trace_call(0x804D4C98u);
  cmps(c,0,(int32_t)c->r[4],16); // 804D4C98
  if (crb(c,2)) { goto L_804D4CA4; } // 804D4C9C
  goto L_804D4CAC; // 804D4CA0
L_804D4CA4:;
  W8(c->r[3]+0x000000B8u,c->r[5]); // 804D4CA4
  return; // 804D4CA8
L_804D4CAC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D4CAC
  c->r[12]=R32(c->r[12]+0x00000038u); // 804D4CB0
  c->ctr=c->r[12]; // 804D4CB4
  if (true) { dispatch(c,c->ctr); return; } // 804D4CB8
}

// fn_804D4CBC
void f_804D4CBC(Ctx* __restrict c) {
  trace_call(0x804D4CBCu);
  return; // 804D4CBC
}

// fn_804D4CC0
void f_804D4CC0(Ctx* __restrict c) {
  trace_call(0x804D4CC0u);
  c->r[3]=0u+0x000000FFu; // 804D4CC0
  return; // 804D4CC4
}

// fn_804D4CC8
void f_804D4CC8(Ctx* __restrict c) {
  trace_call(0x804D4CC8u);
  return; // 804D4CC8
}

// FindPaneByName__Q34nw4r3lyt4PaneFPCcb
void f_804D4CCC(Ctx* __restrict c) {
  trace_call(0x804D4CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4CCC
  c->r[0]=c->lr; // 804D4CD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D4CD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D4CD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D4CDC
  c->r[30]=c->r[3]|c->r[3]; // 804D4CE0
  c->r[3]=c->r[3]+0x000000BCu; // 804D4CE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D4CE8
  c->r[29]=c->r[5]|c->r[5]; // 804D4CEC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D4CF0
  c->r[28]=c->r[4]|c->r[4]; // 804D4CF4
  c->lr=0x804D4CFCu; f_804DFCA8(c); // 804D4CF8
  cmps(c,0,(int32_t)c->r[3],0); // 804D4CFC
  if (crb(c,2)) { goto L_804D4D0C; } // 804D4D00
  c->r[3]=c->r[30]|c->r[30]; // 804D4D04
  goto L_804D4D54; // 804D4D08
L_804D4D0C:;
  cmps(c,0,(int32_t)c->r[29],0); // 804D4D0C
  if (crb(c,2)) { goto L_804D4D50; } // 804D4D10
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 804D4D14
  goto L_804D4D48; // 804D4D18
L_804D4D1C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D4D1C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D4D20
  c->r[4]=c->r[28]|c->r[28]; // 804D4D24
  c->r[5]=c->r[29]|c->r[29]; // 804D4D28
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804D4D2C
  c->ctr=c->r[12]; // 804D4D30
  if (true) { c->lr=0x804D4D38u; dispatch(c,c->ctr); } // 804D4D34
  cmps(c,0,(int32_t)c->r[3],0); // 804D4D38
  if (crb(c,2)) { goto L_804D4D44; } // 804D4D3C
  goto L_804D4D54; // 804D4D40
L_804D4D44:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D4D44
L_804D4D48:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D4D48
  if (!crb(c,2)) { IRQCHK(c); goto L_804D4D1C; } // 804D4D4C
L_804D4D50:;
  c->r[3]=0u+0x00000000u; // 804D4D50
L_804D4D54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D4D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D4D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D4D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D4D60
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D4D64
  c->lr=c->r[0]; // 804D4D68
  c->r[1]=c->r[1]+0x00000020u; // 804D4D6C
  return; // 804D4D70
}

// FindMaterialByName__Q34nw4r3lyt4PaneFPCcb
void f_804D4D74(Ctx* __restrict c) {
  trace_call(0x804D4D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4D74
  c->r[0]=c->lr; // 804D4D78
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D4D7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D4D80
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D4D84
  c->r[30]=c->r[3]|c->r[3]; // 804D4D88
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D4D8C
  c->r[29]=c->r[5]|c->r[5]; // 804D4D90
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D4D94
  c->r[28]=c->r[4]|c->r[4]; // 804D4D98
  c->r[6]=R32(c->r[3]+0x00000028u); // 804D4D9C
  cmps(c,0,(int32_t)c->r[6],0); // 804D4DA0
  if (crb(c,2)) { goto L_804D4DC0; } // 804D4DA4
  c->r[3]=c->r[6]+0x00000044u; // 804D4DA8
  c->lr=0x804D4DB0u; f_804DFCD4(c); // 804D4DAC
  cmps(c,0,(int32_t)c->r[3],0); // 804D4DB0
  if (crb(c,2)) { goto L_804D4DC0; } // 804D4DB4
  c->r[3]=R32(c->r[30]+0x00000028u); // 804D4DB8
  goto L_804D4E08; // 804D4DBC
L_804D4DC0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804D4DC0
  if (crb(c,2)) { goto L_804D4E04; } // 804D4DC4
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 804D4DC8
  goto L_804D4DFC; // 804D4DCC
L_804D4DD0:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D4DD0
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D4DD4
  c->r[4]=c->r[28]|c->r[28]; // 804D4DD8
  c->r[5]=c->r[29]|c->r[29]; // 804D4DDC
  c->r[12]=R32(c->r[12]+0x00000040u); // 804D4DE0
  c->ctr=c->r[12]; // 804D4DE4
  if (true) { c->lr=0x804D4DECu; dispatch(c,c->ctr); } // 804D4DE8
  cmps(c,0,(int32_t)c->r[3],0); // 804D4DEC
  if (crb(c,2)) { goto L_804D4DF8; } // 804D4DF0
  goto L_804D4E08; // 804D4DF4
L_804D4DF8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D4DF8
L_804D4DFC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D4DFC
  if (!crb(c,2)) { IRQCHK(c); goto L_804D4DD0; } // 804D4E00
L_804D4E04:;
  c->r[3]=0u+0x00000000u; // 804D4E04
L_804D4E08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D4E08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D4E0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D4E10
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D4E14
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D4E18
  c->lr=c->r[0]; // 804D4E1C
  c->r[1]=c->r[1]+0x00000020u; // 804D4E20
  return; // 804D4E24
}

// fn_804D4E28
void f_804D4E28(Ctx* __restrict c) {
  trace_call(0x804D4E28u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D4E28
  c->r[0]=c->lr; // 804D4E2C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804D4E30
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 804D4E34
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 804D4E38
  c->r[11]=c->r[1]+0x000000D0u; // 804D4E3C
  c->lr=0x804D4E44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D4E40
  c->r[6]=R8(c->r[3]+0x000000BBu); // 804D4E44
  c->r[30]=c->r[3]|c->r[3]; // 804D4E48
  c->r[31]=c->r[4]|c->r[4]; // 804D4E4C
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 804D4E50
  if (!crb(c,2)) { goto L_804D4E64; } // 804D4E54
  c->r[0]=R8(c->r[4]+0x00000050u); // 804D4E58
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 804D4E5C
  if (crb(c,2)) { goto L_804D5100; } // 804D4E60
L_804D4E64:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 804D4E64
  c->r[5]=R32(c->r[3]+0x00000044u); // 804D4E68
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 804D4E6C
  c->r[0]=R32(c->r[3]+0x00000048u); // 804D4E70
  W32(c->r[1]+0x00000008u,c->r[5]); // 804D4E74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D4E78
  if (crb(c,2)) { goto L_804D4EA8; } // 804D4E7C
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 804D4E80
  if (crb(c,2)) { goto L_804D4EA8; } // 804D4E84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D4E88
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4E8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4E90
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4E94
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804D4E98
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D4E9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804D4EA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D4EA4
L_804D4EA8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4EA8
  c->r[3]=c->r[1]+0x00000040u; // 804D4EAC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4EB0
  {uint32_t ea=c->r[2]+0x00001764u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D4EB4
  c->lr=0x804D4EBCu; f_803835E4(c); // 804D4EB8
  {uint32_t ea=c->r[2]+0x00001768u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4EBC
  c->r[3]=c->r[1]+0x00000010u; // 804D4EC0
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4EC4
  c->r[4]=0u+0x00000078u; // 804D4EC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804D4ECC
  c->lr=0x804D4ED4u; f_8038330C(c); // 804D4ED0
  c->r[3]=c->r[1]+0x00000010u; // 804D4ED4
  c->r[4]=c->r[1]+0x00000040u; // 804D4ED8
  c->r[5]=c->r[1]+0x00000070u; // 804D4EDC
  c->lr=0x804D4EE4u; f_80382F60(c); // 804D4EE0
  {uint32_t ea=c->r[2]+0x00001768u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4EE4
  c->r[3]=c->r[1]+0x00000010u; // 804D4EE8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4EEC
  c->r[4]=0u+0x00000079u; // 804D4EF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804D4EF4
  c->lr=0x804D4EFCu; f_8038330C(c); // 804D4EF8
  c->r[3]=c->r[1]+0x00000010u; // 804D4EFC
  c->r[4]=c->r[1]+0x00000070u; // 804D4F00
  c->r[5]=c->r[1]+0x00000040u; // 804D4F04
  c->lr=0x804D4F0Cu; f_80382F60(c); // 804D4F08
  {uint32_t ea=c->r[2]+0x00001768u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4F0C
  c->r[3]=c->r[1]+0x00000010u; // 804D4F10
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D4F14
  c->r[4]=0u+0x0000007Au; // 804D4F18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804D4F1C
  c->lr=0x804D4F24u; f_8038330C(c); // 804D4F20
  c->r[3]=c->r[1]+0x00000010u; // 804D4F24
  c->r[4]=c->r[1]+0x00000040u; // 804D4F28
  c->r[5]=c->r[1]+0x00000070u; // 804D4F2C
  c->lr=0x804D4F34u; f_80382F60(c); // 804D4F30
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D4F34
  c->r[3]=c->r[1]+0x00000070u; // 804D4F38
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D4F3C
  c->r[4]=c->r[30]+0x00000054u; // 804D4F40
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D4F44
  c->lr=0x804D4F4Cu; f_80383598(c); // 804D4F48
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804D4F4C
  cmps(c,0,(int32_t)c->r[3],0); // 804D4F50
  if (crb(c,2)) { goto L_804D4F6C; } // 804D4F54
  c->r[3]=c->r[3]+0x00000084u; // 804D4F58
  c->r[4]=c->r[30]+0x00000054u; // 804D4F5C
  c->r[5]=c->r[30]+0x00000084u; // 804D4F60
  c->lr=0x804D4F68u; f_80382F60(c); // 804D4F64
  goto L_804D4FEC; // 804D4F68
L_804D4F6C:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 804D4F6C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 804D4F70
  if (crb(c,2)) { goto L_804D4FDC; } // 804D4F74
  c->r[27]=R32(c->r[30]+0x00000054u); // 804D4F78
  c->r[12]=R32(c->r[30]+0x00000058u); // 804D4F7C
  c->r[11]=R32(c->r[30]+0x0000005Cu); // 804D4F80
  c->r[10]=R32(c->r[30]+0x00000060u); // 804D4F84
  c->r[9]=R32(c->r[30]+0x00000064u); // 804D4F88
  c->r[8]=R32(c->r[30]+0x00000068u); // 804D4F8C
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 804D4F90
  c->r[6]=R32(c->r[30]+0x00000070u); // 804D4F94
  c->r[5]=R32(c->r[30]+0x00000074u); // 804D4F98
  c->r[4]=R32(c->r[30]+0x00000078u); // 804D4F9C
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 804D4FA0
  c->r[0]=R32(c->r[30]+0x00000080u); // 804D4FA4
  W32(c->r[30]+0x00000084u,c->r[27]); // 804D4FA8
  W32(c->r[30]+0x00000088u,c->r[12]); // 804D4FAC
  W32(c->r[30]+0x0000008Cu,c->r[11]); // 804D4FB0
  W32(c->r[30]+0x00000090u,c->r[10]); // 804D4FB4
  W32(c->r[30]+0x00000094u,c->r[9]); // 804D4FB8
  W32(c->r[30]+0x00000098u,c->r[8]); // 804D4FBC
  W32(c->r[30]+0x0000009Cu,c->r[7]); // 804D4FC0
  W32(c->r[30]+0x000000A0u,c->r[6]); // 804D4FC4
  W32(c->r[30]+0x000000A4u,c->r[5]); // 804D4FC8
  W32(c->r[30]+0x000000A8u,c->r[4]); // 804D4FCC
  W32(c->r[30]+0x000000ACu,c->r[3]); // 804D4FD0
  W32(c->r[30]+0x000000B0u,c->r[0]); // 804D4FD4
  goto L_804D4FEC; // 804D4FD8
L_804D4FDC:;
  c->r[3]=c->r[31]+0x00000004u; // 804D4FDC
  c->r[4]=c->r[30]+0x00000054u; // 804D4FE0
  c->r[5]=c->r[30]+0x00000084u; // 804D4FE4
  c->lr=0x804D4FECu; f_80382F60(c); // 804D4FE8
L_804D4FEC:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 804D4FEC
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 804D4FF0
  if (crb(c,2)) { goto L_804D503C; } // 804D4FF4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804D4FF8
  cmps(c,0,(int32_t)c->r[0],0); // 804D4FFC
  if (crb(c,2)) { goto L_804D503C; } // 804D5000
  c->r[3]=R8(c->r[30]+0x000000B8u); // 804D5004
  c->r[0]=0u+0x43300000u; // 804D5008
  W32(c->r[1]+0x000000A0u,c->r[0]); // 804D500C
  {uint32_t ea=c->r[2]+0x00001770u; c->f[1]=RF64(ea);} // 804D5010
  W32(c->r[1]+0x000000A4u,c->r[3]); // 804D5014
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D5018
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 804D501C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804D5020
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804D5024
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804D5028
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 804D502C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 804D5030
  W8(c->r[30]+0x000000B9u,c->r[0]); // 804D5034
  goto L_804D5044; // 804D5038
L_804D503C:;
  c->r[0]=R8(c->r[30]+0x000000B8u); // 804D503C
  W8(c->r[30]+0x000000B9u,c->r[0]); // 804D5040
L_804D5044:;
  c->r[0]=R8(c->r[30]+0x000000BBu); // 804D5044
  c->r[28]=0u+0x00000000u; // 804D5048
  c->r[3]=R8(c->r[31]+0x00000050u); // 804D504C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 804D5050
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804D5054
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 804D5058
  c->r[0]=0u-c->r[3]; // 804D505C
  c->r[0]=c->r[0]|c->r[3]; // 804D5060
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 804D5064
  if (crb(c,2)) { goto L_804D507C; } // 804D5068
  c->r[0]=R8(c->r[30]+0x000000B8u); // 804D506C
  cmpu(c,0,c->r[0],0x000000FFu); // 804D5070
  if (crb(c,2)) { goto L_804D507C; } // 804D5074
  c->r[28]=0u+0x00000001u; // 804D5078
L_804D507C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D507C
  if (crb(c,2)) { goto L_804D50BC; } // 804D5080
  c->r[4]=R8(c->r[30]+0x000000B8u); // 804D5084
  c->r[3]=0u+0x43300000u; // 804D5088
  c->r[0]=R8(c->r[31]+0x00000050u); // 804D508C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 804D5090
  c->r[0]=c->r[0]|0x00000040u; // 804D5094
  {uint32_t ea=c->r[2]+0x00001770u; c->f[2]=RF64(ea);} // 804D5098
  W32(c->r[1]+0x000000A8u,c->r[3]); // 804D509C
  {uint32_t ea=c->r[2]+0x0000176Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D50A0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 804D50A4
  W8(c->r[31]+0x00000050u,c->r[0]); // 804D50A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804D50AC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804D50B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804D50B4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 804D50B8
L_804D50BC:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[29]=R32(ea); c->r[30]=ea;} // 804D50BC
  goto L_804D50E0; // 804D50C0
L_804D50C4:;
  c->r[12]=R32(c->r[29]+0xFFFFFFFCu); // 804D50C4
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 804D50C8
  c->r[4]=c->r[31]|c->r[31]; // 804D50CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D50D0
  c->ctr=c->r[12]; // 804D50D4
  if (true) { c->lr=0x804D50DCu; dispatch(c,c->ctr); } // 804D50D8
  c->r[29]=R32(c->r[29]+0x00000000u); // 804D50DC
L_804D50E0:;
  cmpu(c,0,c->r[29],c->r[30]); // 804D50E0
  if (!crb(c,2)) { IRQCHK(c); goto L_804D50C4; } // 804D50E4
  cmps(c,0,(int32_t)c->r[28],0); // 804D50E8
  if (crb(c,2)) { goto L_804D5100; } // 804D50EC
  c->r[0]=R8(c->r[31]+0x00000050u); // 804D50F0
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 804D50F4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 804D50F8
  W8(c->r[31]+0x00000050u,c->r[0]); // 804D50FC
L_804D5100:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 804D5100
  c->r[11]=c->r[1]+0x000000D0u; // 804D5104
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 804D5108
  c->lr=0x804D5110u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D510C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804D5110
  c->lr=c->r[0]; // 804D5114
  c->r[1]=c->r[1]+0x000000E0u; // 804D5118
  return; // 804D511C
}

// fn_804D5120
void f_804D5120(Ctx* __restrict c) {
  trace_call(0x804D5120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5120
  c->r[0]=c->lr; // 804D5124
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D5128
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D512C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D5130
  c->r[30]=c->r[3]|c->r[3]; // 804D5134
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D5138
  c->r[29]=c->r[4]|c->r[4]; // 804D513C
  c->r[0]=R8(c->r[3]+0x000000BBu); // 804D5140
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D5144
  if (crb(c,2)) { goto L_804D5188; } // 804D5148
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D514C
  c->r[12]=R32(c->r[12]+0x00000018u); // 804D5150
  c->ctr=c->r[12]; // 804D5154
  if (true) { c->lr=0x804D515Cu; dispatch(c,c->ctr); } // 804D5158
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 804D515C
  goto L_804D5180; // 804D5160
L_804D5164:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D5164
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D5168
  c->r[4]=c->r[29]|c->r[29]; // 804D516C
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D5170
  c->ctr=c->r[12]; // 804D5174
  if (true) { c->lr=0x804D517Cu; dispatch(c,c->ctr); } // 804D5178
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D517C
L_804D5180:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5180
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5164; } // 804D5184
L_804D5188:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5188
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D518C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D5190
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D5194
  c->lr=c->r[0]; // 804D5198
  c->r[1]=c->r[1]+0x00000020u; // 804D519C
  return; // 804D51A0
}

// fn_804D51A4
void f_804D51A4(Ctx* __restrict c) {
  trace_call(0x804D51A4u);
  return; // 804D51A4
}

// fn_804D51A8
void f_804D51A8(Ctx* __restrict c) {
  trace_call(0x804D51A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D51A8
  c->r[0]=c->lr; // 804D51AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D51B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D51B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D51B8
  c->r[30]=c->r[3]|c->r[3]; // 804D51BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D51C0
  c->r[29]=c->r[4]|c->r[4]; // 804D51C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D51C8
  c->r[12]=R32(c->r[12]+0x00000020u); // 804D51CC
  c->ctr=c->r[12]; // 804D51D0
  if (true) { c->lr=0x804D51D8u; dispatch(c,c->ctr); } // 804D51D4
  c->r[0]=R8(c->r[30]+0x000000BBu); // 804D51D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D51DC
  if (!crb(c,2)) { goto L_804D51EC; } // 804D51E0
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 804D51E4
  if (!crb(c,2)) { goto L_804D5218; } // 804D51E8
L_804D51EC:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 804D51EC
  goto L_804D5210; // 804D51F0
L_804D51F4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D51F4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D51F8
  c->r[4]=c->r[29]|c->r[29]; // 804D51FC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D5200
  c->ctr=c->r[12]; // 804D5204
  if (true) { c->lr=0x804D520Cu; dispatch(c,c->ctr); } // 804D5208
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D520C
L_804D5210:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5210
  if (!crb(c,2)) { IRQCHK(c); goto L_804D51F4; } // 804D5214
L_804D5218:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D521C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D5220
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D5224
  c->lr=c->r[0]; // 804D5228
  c->r[1]=c->r[1]+0x00000020u; // 804D522C
  return; // 804D5230
}

// fn_804D5234
void f_804D5234(Ctx* __restrict c) {
  trace_call(0x804D5234u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5234
  c->r[0]=c->lr; // 804D5238
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D523C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D5240
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D5244
  c->r[30]=c->r[3]+0x00000020u; // 804D5248
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D524C
  c->r[29]=c->r[4]|c->r[4]; // 804D5250
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D5254
  c->r[28]=c->r[3]|c->r[3]; // 804D5258
  c->r[31]=R32(c->r[3]+0x00000020u); // 804D525C
  goto L_804D5290; // 804D5260
L_804D5264:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 804D5264
  cmps(c,0,(int32_t)c->r[0],0); // 804D5268
  if (!crb(c,2)) { goto L_804D528C; } // 804D526C
  c->r[3]=R32(c->r[31]+0x00000008u); // 804D5270
  c->r[5]=c->r[28]|c->r[28]; // 804D5274
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 804D5278
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D527C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D5280
  c->ctr=c->r[12]; // 804D5284
  if (true) { c->lr=0x804D528Cu; dispatch(c,c->ctr); } // 804D5288
L_804D528C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D528C
L_804D5290:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5290
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5264; } // 804D5294
  c->r[0]=R8(c->r[28]+0x000000BBu); // 804D5298
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D529C
  if (!crb(c,2)) { goto L_804D52AC; } // 804D52A0
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 804D52A4
  if (!crb(c,2)) { goto L_804D52C8; } // 804D52A8
L_804D52AC:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 804D52AC
  cmps(c,0,(int32_t)c->r[3],0); // 804D52B0
  if (crb(c,2)) { goto L_804D52C8; } // 804D52B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D52B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D52BC
  c->ctr=c->r[12]; // 804D52C0
  if (true) { c->lr=0x804D52C8u; dispatch(c,c->ctr); } // 804D52C4
L_804D52C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D52C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D52CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D52D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D52D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D52D8
  c->lr=c->r[0]; // 804D52DC
  c->r[1]=c->r[1]+0x00000020u; // 804D52E0
  return; // 804D52E4
}

// fn_804D52E8
void f_804D52E8(Ctx* __restrict c) {
  trace_call(0x804D52E8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 804D52E8
  c->r[0]=c->r[3]|c->r[3]; // 804D52EC
  c->r[3]=c->r[4]|c->r[4]; // 804D52F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D52F4
  c->r[4]=c->r[0]|c->r[0]; // 804D52F8
  c->ctr=c->r[12]; // 804D52FC
  if (true) { dispatch(c,c->ctr); return; } // 804D5300
}

// fn_804D5304
void f_804D5304(Ctx* __restrict c) {
  trace_call(0x804D5304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5304
  c->r[0]=c->lr; // 804D5308
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D530C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D5310
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D5314
  c->r[30]=c->r[3]|c->r[3]; // 804D5318
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D531C
  c->r[29]=c->r[5]|c->r[5]; // 804D5320
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D5324
  c->r[28]=c->r[4]|c->r[4]; // 804D5328
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D532C
  c->r[12]=R32(c->r[12]+0x00000050u); // 804D5330
  c->ctr=c->r[12]; // 804D5334
  if (true) { c->lr=0x804D533Cu; dispatch(c,c->ctr); } // 804D5338
  cmps(c,0,(int32_t)c->r[29],0); // 804D533C
  if (crb(c,2)) { goto L_804D5374; } // 804D5340
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 804D5344
  goto L_804D536C; // 804D5348
L_804D534C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D534C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D5350
  c->r[4]=c->r[28]|c->r[28]; // 804D5354
  c->r[5]=c->r[29]|c->r[29]; // 804D5358
  c->r[12]=R32(c->r[12]+0x00000048u); // 804D535C
  c->ctr=c->r[12]; // 804D5360
  if (true) { c->lr=0x804D5368u; dispatch(c,c->ctr); } // 804D5364
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D5368
L_804D536C:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D536C
  if (!crb(c,2)) { IRQCHK(c); goto L_804D534C; } // 804D5370
L_804D5374:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D5378
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D537C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D5380
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D5384
  c->lr=c->r[0]; // 804D5388
  c->r[1]=c->r[1]+0x00000020u; // 804D538C
  return; // 804D5390
}

// fn_804D5394
void f_804D5394(Ctx* __restrict c) {
  trace_call(0x804D5394u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D5394
  c->r[5]=c->r[4]|c->r[4]; // 804D5398
  c->r[4]=0u+0x00000000u; // 804D539C
  c->r[12]=R32(c->r[12]+0x00000048u); // 804D53A0
  c->ctr=c->r[12]; // 804D53A4
  if (true) { dispatch(c,c->ctr); return; } // 804D53A8
}

// fn_804D53AC
void f_804D53AC(Ctx* __restrict c) {
  trace_call(0x804D53ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D53AC
  c->r[0]=c->lr; // 804D53B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D53B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D53B8
  c->r[31]=c->r[4]|c->r[4]; // 804D53BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804D53C0
  c->r[30]=c->r[3]|c->r[3]; // 804D53C4
  c->r[0]=R32(c->r[3]+0x00000028u); // 804D53C8
  cmps(c,0,(int32_t)c->r[0],0); // 804D53CC
  if (crb(c,2)) { goto L_804D53E8; } // 804D53D0
  c->r[3]=c->r[0]|c->r[0]; // 804D53D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D53D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D53DC
  c->ctr=c->r[12]; // 804D53E0
  if (true) { c->lr=0x804D53E8u; dispatch(c,c->ctr); } // 804D53E4
L_804D53E8:;
  c->r[4]=c->r[31]|c->r[31]; // 804D53E8
  c->r[3]=c->r[30]+0x0000001Cu; // 804D53EC
  c->lr=0x804D53F4u; f_804DF6CC(c); // 804D53F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D53F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D53F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804D53FC
  c->lr=c->r[0]; // 804D5400
  c->r[1]=c->r[1]+0x00000010u; // 804D5404
  return; // 804D5408
}

// AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
void f_804D540C(Ctx* __restrict c) {
  trace_call(0x804D540Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D540C
  c->r[0]=c->lr; // 804D5410
  c->r[5]=c->r[4]|c->r[4]; // 804D5414
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D5418
  c->r[0]=c->r[3]+0x00000020u; // 804D541C
  c->r[3]=c->r[3]+0x0000001Cu; // 804D5420
  c->r[4]=c->r[1]+0x00000008u; // 804D5424
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D5428
  c->lr=0x804D5430u; f_80507EDC(c); // 804D542C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D5430
  c->lr=c->r[0]; // 804D5434
  c->r[1]=c->r[1]+0x00000010u; // 804D5438
  return; // 804D543C
}

// fn_804D5440
void f_804D5440(Ctx* __restrict c) {
  trace_call(0x804D5440u);
  c->r[3]=c->r[3]+0x0000001Cu; // 804D5440
  f_804DF65C(c); return; // 804D5444
}

// fn_804D5448
void f_804D5448(Ctx* __restrict c) {
  trace_call(0x804D5448u);
  c->r[3]=c->r[3]+0x0000001Cu; // 804D5448
  f_804DF690(c); return; // 804D544C
}

// fn_804D5450
void f_804D5450(Ctx* __restrict c) {
  trace_call(0x804D5450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5450
  c->r[0]=c->lr; // 804D5454
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D5458
  c->r[11]=c->r[1]+0x00000020u; // 804D545C
  c->lr=0x804D5464u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5460
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D5464
  c->r[26]=c->r[3]|c->r[3]; // 804D5468
  c->r[27]=c->r[4]|c->r[4]; // 804D546C
  c->r[28]=c->r[5]|c->r[5]; // 804D5470
  c->r[12]=R32(c->r[12]+0x00000054u); // 804D5474
  c->r[29]=c->r[6]|c->r[6]; // 804D5478
  c->ctr=c->r[12]; // 804D547C
  if (true) { c->lr=0x804D5484u; dispatch(c,c->ctr); } // 804D5480
  cmps(c,0,(int32_t)c->r[3],0); // 804D5484
  if (crb(c,2)) { goto L_804D5498; } // 804D5488
  c->r[0]=cntlz(c->r[28]); // 804D548C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D5490
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 804D5494
L_804D5498:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D5498
  c->r[3]=c->r[26]|c->r[26]; // 804D549C
  c->r[12]=R32(c->r[12]+0x00000064u); // 804D54A0
  c->ctr=c->r[12]; // 804D54A4
  if (true) { c->lr=0x804D54ACu; dispatch(c,c->ctr); } // 804D54A8
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 804D54AC
  c->r[31]=0u+0x00000000u; // 804D54B0
  goto L_804D54EC; // 804D54B4
L_804D54B8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D54B8
  c->r[3]=c->r[26]|c->r[26]; // 804D54BC
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 804D54C0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 804D54C4
  c->ctr=c->r[12]; // 804D54C8
  if (true) { c->lr=0x804D54D0u; dispatch(c,c->ctr); } // 804D54CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D54D0
  c->r[4]=c->r[27]|c->r[27]; // 804D54D4
  c->r[5]=c->r[28]|c->r[28]; // 804D54D8
  c->r[12]=R32(c->r[12]+0x00000028u); // 804D54DC
  c->ctr=c->r[12]; // 804D54E0
  if (true) { c->lr=0x804D54E8u; dispatch(c,c->ctr); } // 804D54E4
  c->r[31]=c->r[31]+0x00000001u; // 804D54E8
L_804D54EC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 804D54EC
  cmpu(c,0,c->r[0],c->r[30]); // 804D54F0
  if (crb(c,0)) { IRQCHK(c); goto L_804D54B8; } // 804D54F4
  cmps(c,0,(int32_t)c->r[29],0); // 804D54F8
  if (crb(c,2)) { goto L_804D5538; } // 804D54FC
  c->r[31]=R32(c->r[26]+0x00000014u); // 804D5500
  c->r[30]=c->r[26]+0x00000014u; // 804D5504
  goto L_804D5530; // 804D5508
L_804D550C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D550C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D5510
  c->r[4]=c->r[27]|c->r[27]; // 804D5514
  c->r[5]=c->r[28]|c->r[28]; // 804D5518
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 804D551C
  c->r[6]=c->r[29]|c->r[29]; // 804D5520
  c->ctr=c->r[12]; // 804D5524
  if (true) { c->lr=0x804D552Cu; dispatch(c,c->ctr); } // 804D5528
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D552C
L_804D5530:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5530
  if (!crb(c,2)) { IRQCHK(c); goto L_804D550C; } // 804D5534
L_804D5538:;
  c->r[11]=c->r[1]+0x00000020u; // 804D5538
  c->lr=0x804D5540u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D553C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5540
  c->lr=c->r[0]; // 804D5544
  c->r[1]=c->r[1]+0x00000020u; // 804D5548
  return; // 804D554C
}

// fn_804D5550
void f_804D5550(Ctx* __restrict c) {
  trace_call(0x804D5550u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5550
  c->r[0]=c->lr; // 804D5554
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D5558
  c->r[11]=c->r[1]+0x00000020u; // 804D555C
  c->lr=0x804D5564u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5560
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D5564
  c->r[26]=c->r[3]|c->r[3]; // 804D5568
  c->r[27]=c->r[4]|c->r[4]; // 804D556C
  c->r[28]=c->r[5]|c->r[5]; // 804D5570
  c->r[12]=R32(c->r[12]+0x00000058u); // 804D5574
  c->r[29]=c->r[6]|c->r[6]; // 804D5578
  c->ctr=c->r[12]; // 804D557C
  if (true) { c->lr=0x804D5584u; dispatch(c,c->ctr); } // 804D5580
  cmps(c,0,(int32_t)c->r[3],0); // 804D5584
  if (crb(c,2)) { goto L_804D5598; } // 804D5588
  c->r[0]=cntlz(c->r[28]); // 804D558C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D5590
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 804D5594
L_804D5598:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D5598
  c->r[3]=c->r[26]|c->r[26]; // 804D559C
  c->r[12]=R32(c->r[12]+0x00000064u); // 804D55A0
  c->ctr=c->r[12]; // 804D55A4
  if (true) { c->lr=0x804D55ACu; dispatch(c,c->ctr); } // 804D55A8
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 804D55AC
  c->r[31]=0u+0x00000000u; // 804D55B0
  goto L_804D55EC; // 804D55B4
L_804D55B8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D55B8
  c->r[3]=c->r[26]|c->r[26]; // 804D55BC
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 804D55C0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 804D55C4
  c->ctr=c->r[12]; // 804D55C8
  if (true) { c->lr=0x804D55D0u; dispatch(c,c->ctr); } // 804D55CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D55D0
  c->r[4]=c->r[27]|c->r[27]; // 804D55D4
  c->r[5]=c->r[28]|c->r[28]; // 804D55D8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804D55DC
  c->ctr=c->r[12]; // 804D55E0
  if (true) { c->lr=0x804D55E8u; dispatch(c,c->ctr); } // 804D55E4
  c->r[31]=c->r[31]+0x00000001u; // 804D55E8
L_804D55EC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 804D55EC
  cmpu(c,0,c->r[0],c->r[30]); // 804D55F0
  if (crb(c,0)) { IRQCHK(c); goto L_804D55B8; } // 804D55F4
  cmps(c,0,(int32_t)c->r[29],0); // 804D55F8
  if (crb(c,2)) { goto L_804D5638; } // 804D55FC
  c->r[31]=R32(c->r[26]+0x00000014u); // 804D5600
  c->r[30]=c->r[26]+0x00000014u; // 804D5604
  goto L_804D5630; // 804D5608
L_804D560C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D560C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D5610
  c->r[4]=c->r[27]|c->r[27]; // 804D5614
  c->r[5]=c->r[28]|c->r[28]; // 804D5618
  c->r[12]=R32(c->r[12]+0x00000060u); // 804D561C
  c->r[6]=c->r[29]|c->r[29]; // 804D5620
  c->ctr=c->r[12]; // 804D5624
  if (true) { c->lr=0x804D562Cu; dispatch(c,c->ctr); } // 804D5628
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D562C
L_804D5630:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5630
  if (!crb(c,2)) { IRQCHK(c); goto L_804D560C; } // 804D5634
L_804D5638:;
  c->r[11]=c->r[1]+0x00000020u; // 804D5638
  c->lr=0x804D5640u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D563C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5640
  c->lr=c->r[0]; // 804D5644
  c->r[1]=c->r[1]+0x00000020u; // 804D5648
  return; // 804D564C
}

// LoadMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_804D5650(Ctx* __restrict c) {
  trace_call(0x804D5650u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5650
  c->r[0]=c->lr; // 804D5654
  c->r[5]=c->r[3]|c->r[3]; // 804D5658
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D565C
  c->r[0]=R8(c->r[4]+0x00000050u); // 804D5660
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 804D5664
  if (crb(c,2)) { goto L_804D5684; } // 804D5668
  c->r[3]=c->r[4]+0x00000004u; // 804D566C
  c->r[4]=c->r[5]+0x00000084u; // 804D5670
  c->r[5]=c->r[1]+0x00000008u; // 804D5674
  c->lr=0x804D567Cu; f_80382F60(c); // 804D5678
  c->r[3]=c->r[1]+0x00000008u; // 804D567C
  goto L_804D5688; // 804D5680
L_804D5684:;
  c->r[3]=c->r[3]+0x00000084u; // 804D5684
L_804D5688:;
  c->r[4]=0u+0x00000000u; // 804D5688
  c->lr=0x804D5690u; f_803A8540(c); // 804D568C
  c->r[3]=0u+0x00000000u; // 804D5690
  c->lr=0x804D5698u; f_803A8648(c); // 804D5694
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D5698
  c->lr=c->r[0]; // 804D569C
  c->r[1]=c->r[1]+0x00000040u; // 804D56A0
  return; // 804D56A4
}

// GetVtxPos__Q34nw4r3lyt4PaneCFv
void f_804D56A8(Ctx* __restrict c) {
  trace_call(0x804D56A8u);
  c->r[4]=0u+0x55550000u; // 804D56A8
  c->r[5]=R8(c->r[3]+0x000000BAu); // 804D56AC
  c->r[0]=c->r[4]+0x00005556u; // 804D56B0
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D56B4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 804D56B8
  {uint32_t ea=c->r[2]+0x00001760u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D56BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D56C0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D56C4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 804D56C8
  c->r[0]=c->r[4]+c->r[0]; // 804D56CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 804D56D0
  c->r[0]=c->r[5]-c->r[0]; // 804D56D4
  cmps(c,0,(int32_t)c->r[0],1); // 804D56D8
  if (crb(c,2)) { goto L_804D5700; } // 804D56DC
  if (!crb(c,0)) { goto L_804D56E8; } // 804D56E0
  goto L_804D56F4; // 804D56E4
L_804D56E8:;
  cmps(c,0,(int32_t)c->r[0],3); // 804D56E8
  if (!crb(c,0)) { goto L_804D56F4; } // 804D56EC
  goto L_804D5718; // 804D56F0
L_804D56F4:;
  {uint32_t ea=c->r[2]+0x00001760u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D56F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D56F8
  goto L_804D5724; // 804D56FC
L_804D5700:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D5700
  {uint32_t ea=c->r[2]+0x00001778u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5704
  c->f[1]=-c->f[1]; // 804D5708
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D570C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D5710
  goto L_804D5724; // 804D5714
L_804D5718:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5718
  c->f[0]=-c->f[0]; // 804D571C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D5720
L_804D5724:;
  c->r[4]=0u+0x55550000u; // 804D5724
  c->r[0]=c->r[4]+0x00005556u; // 804D5728
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 804D572C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 804D5730
  c->r[0]=c->r[4]+c->r[0]; // 804D5734
  cmps(c,0,(int32_t)c->r[0],1); // 804D5738
  if (crb(c,2)) { goto L_804D5760; } // 804D573C
  if (!crb(c,0)) { goto L_804D5748; } // 804D5740
  goto L_804D5754; // 804D5744
L_804D5748:;
  cmps(c,0,(int32_t)c->r[0],3); // 804D5748
  if (!crb(c,0)) { goto L_804D5754; } // 804D574C
  goto L_804D5774; // 804D5750
L_804D5754:;
  {uint32_t ea=c->r[2]+0x00001760u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5754
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D5758
  goto L_804D577C; // 804D575C
L_804D5760:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D5760
  {uint32_t ea=c->r[2]+0x00001778u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5764
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D5768
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D576C
  goto L_804D577C; // 804D5770
L_804D5774:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5774
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D5778
L_804D577C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 804D577C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 804D5780
  c->r[1]=c->r[1]+0x00000010u; // 804D5784
  return; // 804D5788
}

// fn_804D578C
void f_804D578C(Ctx* __restrict c) {
  trace_call(0x804D578Cu);
  c->r[3]=R32(c->r[3]+0x00000028u); // 804D578C
  c->r[0]=0u-c->r[3]; // 804D5790
  c->r[0]=c->r[0]|c->r[3]; // 804D5794
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804D5798
  return; // 804D579C
}

// fn_804D57A0
void f_804D57A0(Ctx* __restrict c) {
  trace_call(0x804D57A0u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 804D57A0
  return; // 804D57A4
}

// GetMaterial__Q34nw4r3lyt4PaneCFUl
void f_804D57A8(Ctx* __restrict c) {
  trace_call(0x804D57A8u);
  cmps(c,0,(int32_t)c->r[4],0); // 804D57A8
  if (!crb(c,2)) { goto L_804D57C0; } // 804D57AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D57B0
  c->r[12]=R32(c->r[12]+0x00000068u); // 804D57B4
  c->ctr=c->r[12]; // 804D57B8
  if (true) { dispatch(c,c->ctr); return; } // 804D57BC
L_804D57C0:;
  c->r[3]=0u+0x00000000u; // 804D57C0
  return; // 804D57C4
}

// fn_804D57C8
void f_804D57C8(Ctx* __restrict c) {
  trace_call(0x804D57C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D57C8
  c->r[0]=c->lr; // 804D57CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D57D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D57D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D57D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D57DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D57E0
  c->r[28]=c->r[4]|c->r[4]; // 804D57E4
  c->r[5]=R32(c->r[3]+0x000000B4u); // 804D57E8
  cmps(c,0,(int32_t)c->r[5],0); // 804D57EC
  if (crb(c,2)) { goto L_804D57FC; } // 804D57F0
  c->r[30]=c->r[5]+0x0000000Cu; // 804D57F4
  goto L_804D5800; // 804D57F8
L_804D57FC:;
  c->r[30]=0u+0x00000000u; // 804D57FC
L_804D5800:;
  cmps(c,0,(int32_t)c->r[30],0); // 804D5800
  if (!crb(c,2)) { goto L_804D5810; } // 804D5804
  c->r[3]=0u+0x00000000u; // 804D5808
  goto L_804D5864; // 804D580C
L_804D5810:;
  c->r[3]=R32(c->r[3]+0x000000B4u); // 804D5810
  c->r[29]=0u+0x00000000u; // 804D5814
  c->r[31]=R16(c->r[3]+0x00000008u); // 804D5818
  goto L_804D5858; // 804D581C
L_804D5820:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804D5820
  c->r[3]=c->r[28]|c->r[28]; // 804D5824
  cmps(c,0,(int32_t)c->r[0],0); // 804D5828
  if (crb(c,2)) { goto L_804D5838; } // 804D582C
  c->r[4]=c->r[30]+c->r[0]; // 804D5830
  goto L_804D583C; // 804D5834
L_804D5838:;
  c->r[4]=0u+0x00000000u; // 804D5838
L_804D583C:;
  c->lr=0x804D5840u; f_803B393C(c); // 804D583C
  cmps(c,0,(int32_t)c->r[3],0); // 804D5840
  if (!crb(c,2)) { goto L_804D5850; } // 804D5844
  c->r[3]=c->r[30]|c->r[30]; // 804D5848
  goto L_804D5864; // 804D584C
L_804D5850:;
  c->r[29]=c->r[29]+0x00000001u; // 804D5850
  c->r[30]=c->r[30]+0x0000000Cu; // 804D5854
L_804D5858:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 804D5858
  if (crb(c,0)) { IRQCHK(c); goto L_804D5820; } // 804D585C
  c->r[3]=0u+0x00000000u; // 804D5860
L_804D5864:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5864
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D5868
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D586C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D5870
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D5874
  c->lr=c->r[0]; // 804D5878
  c->r[1]=c->r[1]+0x00000020u; // 804D587C
  return; // 804D5880
}

// fn_804D5884
void f_804D5884(Ctx* __restrict c) {
  trace_call(0x804D5884u);
  c->r[0]=0u+0x00000000u; // 804D5884
  W32(c->r[13]+0xFFFFE498u,c->r[0]); // 804D5888
  return; // 804D588C
}

// __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane
void f_804D5890(Ctx* __restrict c) {
  trace_call(0x804D5890u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5890
  c->r[0]=c->lr; // 804D5894
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D5898
  c->r[11]=c->r[1]+0x00000030u; // 804D589C
  c->lr=0x804D58A4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D58A0
  c->r[30]=0u+0x00000000u; // 804D58A4
  c->r[6]=0u+0x80720000u; // 804D58A8
  W32(c->r[3]+0x00000010u,c->r[30]); // 804D58AC
  c->r[7]=c->r[3]+0x00000010u; // 804D58B0
  c->r[6]=c->r[6]+0xFFFFA6F0u; // 804D58B4
  c->r[25]=c->r[4]|c->r[4]; // 804D58B8
  W32(c->r[3]+0x00000014u,c->r[30]); // 804D58BC
  c->r[26]=c->r[5]|c->r[5]; // 804D58C0
  c->r[24]=c->r[3]|c->r[3]; // 804D58C4
  c->r[5]=0u+0x00000010u; // 804D58C8
  W32(c->r[3]+0x00000000u,c->r[6]); // 804D58CC
  c->r[4]=c->r[4]+0x00000008u; // 804D58D0
  W32(c->r[3]+0x00000004u,c->r[30]); // 804D58D4
  W32(c->r[3]+0x00000008u,c->r[30]); // 804D58D8
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 804D58DC
  W32(c->r[3]+0x00000010u,c->r[7]); // 804D58E0
  W32(c->r[3]+0x00000014u,c->r[7]); // 804D58E4
  W8(c->r[3]+0x00000029u,c->r[30]); // 804D58E8
  c->r[3]=c->r[3]+0x00000018u; // 804D58EC
  c->lr=0x804D58F4u; f_803B3880(c); // 804D58F0
  W8(c->r[24]+0x00000028u,c->r[30]); // 804D58F4
  c->r[28]=c->r[25]+0x0000001Cu; // 804D58F8
  c->r[27]=0u+0x00000000u; // 804D58FC
  c->r[29]=0u+0x00000000u; // 804D5900
  goto L_804D5984; // 804D5904
L_804D5908:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804D5908
  c->r[3]=c->r[26]|c->r[26]; // 804D590C
  c->r[4]=c->r[28]+c->r[29]; // 804D5910
  c->r[5]=0u+0x00000001u; // 804D5914
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804D5918
  c->ctr=c->r[12]; // 804D591C
  if (true) { c->lr=0x804D5924u; dispatch(c,c->ctr); } // 804D5920
  cmps(c,0,(int32_t)c->r[3],0); // 804D5924
  c->r[31]=c->r[3]|c->r[3]; // 804D5928
  if (crb(c,2)) { goto L_804D597C; } // 804D592C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5930
  c->r[4]=0u+0x0000000Cu; // 804D5934
  c->lr=0x804D593Cu; f_803C4D08(c); // 804D5938
  cmps(c,0,(int32_t)c->r[3],0); // 804D593C
  if (crb(c,2)) { goto L_804D5958; } // 804D5940
  c->r[5]=c->r[3]|c->r[3]; // 804D5944
  if (crb(c,2)) { goto L_804D595C; } // 804D5948
  W32(c->r[3]+0x00000000u,c->r[30]); // 804D594C
  W32(c->r[3]+0x00000004u,c->r[30]); // 804D5950
  goto L_804D595C; // 804D5954
L_804D5958:;
  c->r[5]=0u+0x00000000u; // 804D5958
L_804D595C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D595C
  if (crb(c,2)) { goto L_804D597C; } // 804D5960
  W32(c->r[5]+0x00000008u,c->r[31]); // 804D5964
  c->r[0]=c->r[24]+0x00000010u; // 804D5968
  c->r[3]=c->r[24]+0x0000000Cu; // 804D596C
  c->r[4]=c->r[1]+0x00000008u; // 804D5970
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D5974
  c->lr=0x804D597Cu; f_80507EDC(c); // 804D5978
L_804D597C:;
  c->r[29]=c->r[29]+0x00000010u; // 804D597C
  c->r[27]=c->r[27]+0x00000001u; // 804D5980
L_804D5984:;
  c->r[0]=R16(c->r[25]+0x00000018u); // 804D5984
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 804D5988
  if (crb(c,0)) { IRQCHK(c); goto L_804D5908; } // 804D598C
  c->r[11]=c->r[1]+0x00000030u; // 804D5990
  c->r[3]=c->r[24]|c->r[24]; // 804D5994
  c->lr=0x804D599Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5998
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D599C
  c->lr=c->r[0]; // 804D59A0
  c->r[1]=c->r[1]+0x00000030u; // 804D59A4
  return; // 804D59A8
}

// __dt__Q34nw4r3lyt5GroupFv
void f_804D59AC(Ctx* __restrict c) {
  trace_call(0x804D59ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D59AC
  c->r[0]=c->lr; // 804D59B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D59B4
  c->r[11]=c->r[1]+0x00000030u; // 804D59B8
  c->lr=0x804D59C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D59BC
  cmps(c,0,(int32_t)c->r[3],0); // 804D59C0
  c->r[27]=c->r[3]|c->r[3]; // 804D59C4
  c->r[28]=c->r[4]|c->r[4]; // 804D59C8
  if (crb(c,2)) { goto L_804D5A3C; } // 804D59CC
  c->r[4]=0u+0x80720000u; // 804D59D0
  c->r[31]=R32(c->r[3]+0x00000010u); // 804D59D4
  c->r[4]=c->r[4]+0xFFFFA6F0u; // 804D59D8
  c->r[30]=c->r[3]+0x00000010u; // 804D59DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D59E0
  goto L_804D5A14; // 804D59E4
L_804D59E8:;
  c->r[29]=c->r[31]|c->r[31]; // 804D59E8
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D59EC
  c->r[3]=c->r[27]+0x0000000Cu; // 804D59F0
  c->r[4]=c->r[1]+0x00000008u; // 804D59F4
  W32(c->r[1]+0x00000008u,c->r[29]); // 804D59F8
  c->lr=0x804D5A00u; f_80507E50(c); // 804D59FC
  cmps(c,0,(int32_t)c->r[29],0); // 804D5A00
  if (crb(c,2)) { goto L_804D5A14; } // 804D5A04
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5A08
  c->r[4]=c->r[29]|c->r[29]; // 804D5A0C
  c->lr=0x804D5A14u; f_803C4D18(c); // 804D5A10
L_804D5A14:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5A14
  if (!crb(c,2)) { IRQCHK(c); goto L_804D59E8; } // 804D5A18
  c->r[3]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[3]); // 804D5A1C
  if (crb(c,2)) { goto L_804D5A2C; } // 804D5A20
  c->r[4]=0u+0x00000000u; // 804D5A24
  c->lr=0x804D5A2Cu; f_80507DCC(c); // 804D5A28
L_804D5A2C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D5A2C
  if (!crb(c,1)) { goto L_804D5A3C; } // 804D5A30
  c->r[3]=c->r[27]|c->r[27]; // 804D5A34
  c->lr=0x804D5A3Cu; f_803A9400(c); // 804D5A38
L_804D5A3C:;
  c->r[11]=c->r[1]+0x00000030u; // 804D5A3C
  c->r[3]=c->r[27]|c->r[27]; // 804D5A40
  c->lr=0x804D5A48u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5A44
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D5A48
  c->lr=c->r[0]; // 804D5A4C
  c->r[1]=c->r[1]+0x00000030u; // 804D5A50
  return; // 804D5A54
}

// __dt__Q34nw4r3lyt14GroupContainerFv
void f_804D5A58(Ctx* __restrict c) {
  trace_call(0x804D5A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5A58
  c->r[0]=c->lr; // 804D5A5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D5A60
  c->r[11]=c->r[1]+0x00000030u; // 804D5A64
  c->lr=0x804D5A6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5A68
  cmps(c,0,(int32_t)c->r[3],0); // 804D5A6C
  c->r[27]=c->r[3]|c->r[3]; // 804D5A70
  c->r[28]=c->r[4]|c->r[4]; // 804D5A74
  if (crb(c,2)) { goto L_804D5B04; } // 804D5A78
  c->r[31]=R32(c->r[3]+0x00000004u); // 804D5A7C
  c->r[30]=c->r[3]+0x00000004u; // 804D5A80
  goto L_804D5AD8; // 804D5A84
L_804D5A88:;
  c->r[29]=c->r[31]|c->r[31]; // 804D5A88
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D5A8C
  c->r[3]=c->r[27]|c->r[27]; // 804D5A90
  c->r[4]=c->r[1]+0x00000008u; // 804D5A94
  W32(c->r[1]+0x00000008u,c->r[29]); // 804D5A98
  c->lr=0x804D5AA0u; f_80507E50(c); // 804D5A9C
  c->r[0]=R8(c->r[29]+0x00000025u); // 804D5AA0
  cmps(c,0,(int32_t)c->r[0],0); // 804D5AA4
  if (!crb(c,2)) { goto L_804D5AD8; } // 804D5AA8
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 804D5AAC
  if (crb(c,2)) { goto L_804D5AD8; } // 804D5AB0
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D5AB4
  c->r[3]=c->r[29]|c->r[29]; // 804D5AB8
  c->r[4]=0u+0xFFFFFFFFu; // 804D5ABC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D5AC0
  c->ctr=c->r[12]; // 804D5AC4
  if (true) { c->lr=0x804D5ACCu; dispatch(c,c->ctr); } // 804D5AC8
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5ACC
  c->r[4]=c->r[29]|c->r[29]; // 804D5AD0
  c->lr=0x804D5AD8u; f_803C4D18(c); // 804D5AD4
L_804D5AD8:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5AD8
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5A88; } // 804D5ADC
  cmps(c,0,(int32_t)c->r[27],0); // 804D5AE0
  if (crb(c,2)) { goto L_804D5AF4; } // 804D5AE4
  c->r[3]=c->r[27]|c->r[27]; // 804D5AE8
  c->r[4]=0u+0x00000000u; // 804D5AEC
  c->lr=0x804D5AF4u; f_80507DCC(c); // 804D5AF0
L_804D5AF4:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D5AF4
  if (!crb(c,1)) { goto L_804D5B04; } // 804D5AF8
  c->r[3]=c->r[27]|c->r[27]; // 804D5AFC
  c->lr=0x804D5B04u; f_803A9400(c); // 804D5B00
L_804D5B04:;
  c->r[11]=c->r[1]+0x00000030u; // 804D5B04
  c->r[3]=c->r[27]|c->r[27]; // 804D5B08
  c->lr=0x804D5B10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5B0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D5B10
  c->lr=c->r[0]; // 804D5B14
  c->r[1]=c->r[1]+0x00000030u; // 804D5B18
  return; // 804D5B1C
}

// AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group
void f_804D5B20(Ctx* __restrict c) {
  trace_call(0x804D5B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5B20
  c->r[0]=c->lr; // 804D5B24
  c->r[5]=c->r[4]|c->r[4]; // 804D5B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D5B2C
  c->r[0]=c->r[3]+0x00000004u; // 804D5B30
  c->r[4]=c->r[1]+0x00000008u; // 804D5B34
  c->r[5]=c->r[5]+0x00000004u; // 804D5B38
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D5B3C
  c->lr=0x804D5B44u; f_80507EDC(c); // 804D5B40
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D5B44
  c->lr=c->r[0]; // 804D5B48
  c->r[1]=c->r[1]+0x00000010u; // 804D5B4C
  return; // 804D5B50
}

// FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
void f_804D5B54(Ctx* __restrict c) {
  trace_call(0x804D5B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5B54
  c->r[0]=c->lr; // 804D5B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D5B5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D5B60
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D5B64
  c->r[30]=c->r[3]+0x00000004u; // 804D5B68
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D5B6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D5B70
  c->r[28]=c->r[4]|c->r[4]; // 804D5B74
  c->r[31]=R32(c->r[3]+0x00000004u); // 804D5B78
  goto L_804D5BA4; // 804D5B7C
L_804D5B80:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 804D5B80
  c->r[4]=c->r[28]|c->r[28]; // 804D5B84
  c->r[3]=c->r[29]+0x00000018u; // 804D5B88
  c->lr=0x804D5B90u; f_804DFCA8(c); // 804D5B8C
  cmps(c,0,(int32_t)c->r[3],0); // 804D5B90
  if (crb(c,2)) { goto L_804D5BA0; } // 804D5B94
  c->r[3]=c->r[29]|c->r[29]; // 804D5B98
  goto L_804D5BB0; // 804D5B9C
L_804D5BA0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D5BA0
L_804D5BA4:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5BA4
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5B80; } // 804D5BA8
  c->r[3]=0u+0x00000000u; // 804D5BAC
L_804D5BB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5BB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D5BB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D5BB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D5BBC
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D5BC0
  c->lr=c->r[0]; // 804D5BC4
  c->r[1]=c->r[1]+0x00000020u; // 804D5BC8
  return; // 804D5BCC
}

// fn_804D5BD0
void f_804D5BD0(Ctx* __restrict c) {
  trace_call(0x804D5BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5BD0
  c->r[0]=c->lr; // 804D5BD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D5BD8
  c->r[11]=c->r[1]+0x00000030u; // 804D5BDC
  c->lr=0x804D5BE4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5BE0
  cmps(c,0,(int32_t)c->r[3],0); // 804D5BE4
  c->r[23]=c->r[3]|c->r[3]; // 804D5BE8
  c->r[31]=c->r[4]|c->r[4]; // 804D5BEC
  c->r[25]=c->r[13]+0xFFFFE4B0u; // 804D5BF0
  if (crb(c,2)) { goto L_804D5C3C; } // 804D5BF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D5BF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D5BFC
  c->ctr=c->r[12]; // 804D5C00
  if (true) { c->lr=0x804D5C08u; dispatch(c,c->ctr); } // 804D5C04
  goto L_804D5C20; // 804D5C08
L_804D5C0C:;
  cmpu(c,0,c->r[3],c->r[25]); // 804D5C0C
  if (!crb(c,2)) { goto L_804D5C1C; } // 804D5C10
  c->r[0]=0u+0x00000001u; // 804D5C14
  goto L_804D5C2C; // 804D5C18
L_804D5C1C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D5C1C
L_804D5C20:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5C20
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5C0C; } // 804D5C24
  c->r[0]=0u+0x00000000u; // 804D5C28
L_804D5C2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D5C2C
  if (crb(c,2)) { goto L_804D5C3C; } // 804D5C30
  c->r[3]=c->r[23]|c->r[23]; // 804D5C34
  goto L_804D5C40; // 804D5C38
L_804D5C3C:;
  c->r[3]=0u+0x00000000u; // 804D5C3C
L_804D5C40:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5C40
  if (crb(c,2)) { goto L_804D5C4C; } // 804D5C44
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D5C48
L_804D5C4C:;
  c->r[30]=R32(c->r[23]+0x00000014u); // 804D5C4C
  c->r[27]=c->r[23]+0x00000014u; // 804D5C50
  c->r[23]=c->r[13]+0xFFFFE4B0u; // 804D5C54
  c->r[24]=c->r[13]+0xFFFFE4B0u; // 804D5C58
  goto L_804D5D5C; // 804D5C5C
L_804D5C60:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 804D5C60
  if (crb(c,2)) { goto L_804D5CB0; } // 804D5C64
  c->r[12]=R32(c->r[25]+0x00000000u); // 804D5C68
  c->r[3]=c->r[25]|c->r[25]; // 804D5C6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D5C70
  c->ctr=c->r[12]; // 804D5C74
  if (true) { c->lr=0x804D5C7Cu; dispatch(c,c->ctr); } // 804D5C78
  goto L_804D5C94; // 804D5C7C
L_804D5C80:;
  cmpu(c,0,c->r[3],c->r[24]); // 804D5C80
  if (!crb(c,2)) { goto L_804D5C90; } // 804D5C84
  c->r[0]=0u+0x00000001u; // 804D5C88
  goto L_804D5CA0; // 804D5C8C
L_804D5C90:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D5C90
L_804D5C94:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5C94
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5C80; } // 804D5C98
  c->r[0]=0u+0x00000000u; // 804D5C9C
L_804D5CA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D5CA0
  if (crb(c,2)) { goto L_804D5CB0; } // 804D5CA4
  c->r[3]=c->r[25]|c->r[25]; // 804D5CA8
  goto L_804D5CB4; // 804D5CAC
L_804D5CB0:;
  c->r[3]=0u+0x00000000u; // 804D5CB0
L_804D5CB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5CB4
  if (crb(c,2)) { goto L_804D5CC0; } // 804D5CB8
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D5CBC
L_804D5CC0:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 804D5CC0
  c->r[26]=c->r[25]+0x00000014u; // 804D5CC4
  goto L_804D5D50; // 804D5CC8
L_804D5CCC:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 804D5CCC
  if (crb(c,2)) { goto L_804D5D1C; } // 804D5CD0
  c->r[12]=R32(c->r[25]+0x00000000u); // 804D5CD4
  c->r[3]=c->r[25]|c->r[25]; // 804D5CD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D5CDC
  c->ctr=c->r[12]; // 804D5CE0
  if (true) { c->lr=0x804D5CE8u; dispatch(c,c->ctr); } // 804D5CE4
  goto L_804D5D00; // 804D5CE8
L_804D5CEC:;
  cmpu(c,0,c->r[3],c->r[23]); // 804D5CEC
  if (!crb(c,2)) { goto L_804D5CFC; } // 804D5CF0
  c->r[0]=0u+0x00000001u; // 804D5CF4
  goto L_804D5D0C; // 804D5CF8
L_804D5CFC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D5CFC
L_804D5D00:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5D00
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5CEC; } // 804D5D04
  c->r[0]=0u+0x00000000u; // 804D5D08
L_804D5D0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D5D0C
  if (crb(c,2)) { goto L_804D5D1C; } // 804D5D10
  c->r[3]=c->r[25]|c->r[25]; // 804D5D14
  goto L_804D5D20; // 804D5D18
L_804D5D1C:;
  c->r[3]=0u+0x00000000u; // 804D5D1C
L_804D5D20:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D5D20
  if (crb(c,2)) { goto L_804D5D2C; } // 804D5D24
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D5D28
L_804D5D2C:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 804D5D2C
  goto L_804D5D44; // 804D5D30
L_804D5D34:;
  c->r[4]=c->r[31]|c->r[31]; // 804D5D34
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 804D5D38
  c->lr=0x804D5D40u; f_804D5BD0(c); // 804D5D3C
  c->r[28]=R32(c->r[28]+0x00000000u); // 804D5D40
L_804D5D44:;
  cmpu(c,0,c->r[28],c->r[25]); // 804D5D44
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5D34; } // 804D5D48
  c->r[29]=R32(c->r[29]+0x00000000u); // 804D5D4C
L_804D5D50:;
  cmpu(c,0,c->r[29],c->r[26]); // 804D5D50
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5CCC; } // 804D5D54
  c->r[30]=R32(c->r[30]+0x00000000u); // 804D5D58
L_804D5D5C:;
  cmpu(c,0,c->r[30],c->r[27]); // 804D5D5C
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5C60; } // 804D5D60
  c->r[11]=c->r[1]+0x00000030u; // 804D5D64
  c->lr=0x804D5D6Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5D68
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D5D6C
  c->lr=c->r[0]; // 804D5D70
  c->r[1]=c->r[1]+0x00000030u; // 804D5D74
  return; // 804D5D78
}

// IsIncludeAnimationGroupRef__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt14GroupContainerPCQ34nw4r3lyt17AnimationGroupRefUsbPQ34nw4r3lyt4Pane
void f_804D5D7C(Ctx* __restrict c) {
  trace_call(0x804D5D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5D7C
  c->r[0]=c->lr; // 804D5D80
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D5D84
  c->r[11]=c->r[1]+0x00000020u; // 804D5D88
  c->lr=0x804D5D90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5D8C
  c->r[26]=c->r[3]|c->r[3]; // 804D5D90
  c->r[27]=c->r[4]|c->r[4]; // 804D5D94
  c->r[28]=c->r[5]|c->r[5]; // 804D5D98
  c->r[29]=c->r[6]|c->r[6]; // 804D5D9C
  c->r[30]=c->r[7]|c->r[7]; // 804D5DA0
  c->r[31]=0u+0x00000000u; // 804D5DA4
  goto L_804D5E1C; // 804D5DA8
L_804D5DAC:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 804D5DAC
  c->r[3]=c->r[26]|c->r[26]; // 804D5DB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804D5DB4
  c->r[4]=c->r[27]+c->r[0]; // 804D5DB8
  c->lr=0x804D5DC0u; f_804D5B54(c); // 804D5DBC
  c->r[4]=R32(c->r[3]+0x00000010u); // 804D5DC0
  c->r[0]=c->r[3]+0x00000010u; // 804D5DC4
  goto L_804D5E10; // 804D5DC8
L_804D5DCC:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 804D5DCC
  cmpu(c,0,c->r[3],c->r[30]); // 804D5DD0
  if (!crb(c,2)) { goto L_804D5DE0; } // 804D5DD4
  c->r[3]=0u+0x00000001u; // 804D5DD8
  goto L_804D5E2C; // 804D5DDC
L_804D5DE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804D5DE0
  if (crb(c,2)) { goto L_804D5E0C; } // 804D5DE4
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 804D5DE8
  goto L_804D5E04; // 804D5DEC
L_804D5DF0:;
  cmpu(c,0,c->r[3],c->r[5]); // 804D5DF0
  if (!crb(c,2)) { goto L_804D5E00; } // 804D5DF4
  c->r[3]=0u+0x00000001u; // 804D5DF8
  goto L_804D5E2C; // 804D5DFC
L_804D5E00:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 804D5E00
L_804D5E04:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D5E04
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5DF0; } // 804D5E08
L_804D5E0C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 804D5E0C
L_804D5E10:;
  cmpu(c,0,c->r[4],c->r[0]); // 804D5E10
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5DCC; } // 804D5E14
  c->r[31]=c->r[31]+0x00000001u; // 804D5E18
L_804D5E1C:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 804D5E1C
  cmpu(c,0,c->r[0],c->r[28]); // 804D5E20
  if (crb(c,0)) { IRQCHK(c); goto L_804D5DAC; } // 804D5E24
  c->r[3]=0u+0x00000000u; // 804D5E28
L_804D5E2C:;
  c->r[11]=c->r[1]+0x00000020u; // 804D5E2C
  c->lr=0x804D5E34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D5E34
  c->lr=c->r[0]; // 804D5E38
  c->r[1]=c->r[1]+0x00000020u; // 804D5E3C
  return; // 804D5E40
}

// __ct__Q34nw4r3lyt6LayoutFv
void f_804D5E44(Ctx* __restrict c) {
  trace_call(0x804D5E44u);
  c->r[0]=0u+0x00000000u; // 804D5E44
  {uint32_t ea=c->r[2]+0x00001780u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D5E48
  c->r[4]=0u+0x80720000u; // 804D5E4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804D5E50
  c->r[5]=c->r[3]+0x00000008u; // 804D5E54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804D5E58
  c->r[4]=c->r[4]+0xFFFFA700u; // 804D5E5C
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D5E60
  W32(c->r[3]+0x00000004u,c->r[0]); // 804D5E64
  W32(c->r[3]+0x00000008u,c->r[5]); // 804D5E68
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 804D5E6C
  W32(c->r[3]+0x00000010u,c->r[0]); // 804D5E70
  W32(c->r[3]+0x00000014u,c->r[0]); // 804D5E74
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 804D5E78
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804D5E7C
  return; // 804D5E80
}

// __dt__Q34nw4r3lyt6LayoutFv
void f_804D5E84(Ctx* __restrict c) {
  trace_call(0x804D5E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5E84
  c->r[0]=c->lr; // 804D5E88
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D5E8C
  c->r[11]=c->r[1]+0x00000030u; // 804D5E90
  c->lr=0x804D5E98u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D5E94
  cmps(c,0,(int32_t)c->r[3],0); // 804D5E98
  c->r[27]=c->r[3]|c->r[3]; // 804D5E9C
  c->r[28]=c->r[4]|c->r[4]; // 804D5EA0
  if (crb(c,2)) { goto L_804D5F90; } // 804D5EA4
  c->r[29]=R32(c->r[3]+0x00000014u); // 804D5EA8
  c->r[4]=0u+0x80720000u; // 804D5EAC
  c->r[4]=c->r[4]+0xFFFFA700u; // 804D5EB0
  cmps(c,0,(int32_t)c->r[29],0); // 804D5EB4
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D5EB8
  if (crb(c,2)) { goto L_804D5ED8; } // 804D5EBC
  c->r[3]=c->r[29]|c->r[29]; // 804D5EC0
  c->r[4]=0u+0xFFFFFFFFu; // 804D5EC4
  c->lr=0x804D5ECCu; f_804D5A58(c); // 804D5EC8
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5ECC
  c->r[4]=c->r[29]|c->r[29]; // 804D5ED0
  c->lr=0x804D5ED8u; f_803C4D18(c); // 804D5ED4
L_804D5ED8:;
  c->r[29]=R32(c->r[27]+0x00000010u); // 804D5ED8
  cmps(c,1,(int32_t)c->r[29],0); // 804D5EDC
  if (crb(c,6)) { goto L_804D5F18; } // 804D5EE0
  c->r[0]=R8(c->r[29]+0x000000D6u); // 804D5EE4
  cmps(c,0,(int32_t)c->r[0],0); // 804D5EE8
  if (!crb(c,2)) { goto L_804D5F18; } // 804D5EEC
  if (crb(c,6)) { goto L_804D5F18; } // 804D5EF0
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D5EF4
  c->r[3]=c->r[29]|c->r[29]; // 804D5EF8
  c->r[4]=0u+0xFFFFFFFFu; // 804D5EFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D5F00
  c->ctr=c->r[12]; // 804D5F04
  if (true) { c->lr=0x804D5F0Cu; dispatch(c,c->ctr); } // 804D5F08
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5F0C
  c->r[4]=c->r[29]|c->r[29]; // 804D5F10
  c->lr=0x804D5F18u; f_803C4D18(c); // 804D5F14
L_804D5F18:;
  c->r[31]=R32(c->r[27]+0x00000008u); // 804D5F18
  c->r[30]=c->r[27]+0x00000008u; // 804D5F1C
  goto L_804D5F68; // 804D5F20
L_804D5F24:;
  c->r[29]=c->r[31]|c->r[31]; // 804D5F24
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D5F28
  c->r[3]=c->r[27]+0x00000004u; // 804D5F2C
  c->r[4]=c->r[1]+0x00000008u; // 804D5F30
  W32(c->r[1]+0x00000008u,c->r[29]); // 804D5F34
  c->lr=0x804D5F3Cu; f_80507E50(c); // 804D5F38
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 804D5F3C
  if (crb(c,2)) { goto L_804D5F68; } // 804D5F40
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D5F44
  c->r[3]=c->r[29]|c->r[29]; // 804D5F48
  c->r[4]=0u+0xFFFFFFFFu; // 804D5F4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D5F50
  c->ctr=c->r[12]; // 804D5F54
  if (true) { c->lr=0x804D5F5Cu; dispatch(c,c->ctr); } // 804D5F58
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D5F5C
  c->r[4]=c->r[29]|c->r[29]; // 804D5F60
  c->lr=0x804D5F68u; f_803C4D18(c); // 804D5F64
L_804D5F68:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D5F68
  if (!crb(c,2)) { IRQCHK(c); goto L_804D5F24; } // 804D5F6C
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 804D5F70
  if (crb(c,2)) { goto L_804D5F80; } // 804D5F74
  c->r[4]=0u+0x00000000u; // 804D5F78
  c->lr=0x804D5F80u; f_80507DCC(c); // 804D5F7C
L_804D5F80:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D5F80
  if (!crb(c,1)) { goto L_804D5F90; } // 804D5F84
  c->r[3]=c->r[27]|c->r[27]; // 804D5F88
  c->lr=0x804D5F90u; f_803A9400(c); // 804D5F8C
L_804D5F90:;
  c->r[11]=c->r[1]+0x00000030u; // 804D5F90
  c->r[3]=c->r[27]|c->r[27]; // 804D5F94
  c->lr=0x804D5F9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D5F98
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D5F9C
  c->lr=c->r[0]; // 804D5FA0
  c->r[1]=c->r[1]+0x00000030u; // 804D5FA4
  return; // 804D5FA8
}

// Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_804D5FAC(Ctx* __restrict c) {
  trace_call(0x804D5FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D5FAC
  c->r[0]=c->lr; // 804D5FB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 804D5FB4
  c->r[11]=c->r[1]+0x00000060u; // 804D5FB8
  c->lr=0x804D5FC0u; f_803A9BD0(c); // 804D5FBC
  c->r[31]=c->r[4]|c->r[4]; // 804D5FC0
  c->r[4]=0u+0x524C0000u; // 804D5FC4
  c->r[30]=c->r[3]|c->r[3]; // 804D5FC8
  c->r[14]=c->r[5]|c->r[5]; // 804D5FCC
  c->r[4]=c->r[4]+0x00005954u; // 804D5FD0
  c->r[3]=c->r[31]|c->r[31]; // 804D5FD4
  c->lr=0x804D5FDCu; f_804DFD00(c); // 804D5FD8
  cmps(c,0,(int32_t)c->r[3],0); // 804D5FDC
  if (!crb(c,2)) { goto L_804D5FEC; } // 804D5FE0
  c->r[3]=0u+0x00000000u; // 804D5FE4
  goto L_804D62D4; // 804D5FE8
L_804D5FEC:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 804D5FEC
  c->r[3]=0u+0x00000000u; // 804D5FF0
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; cr0(c,c->r[0]); // 804D5FF4
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 804D5FF8
  if (!crb(c,2)) { goto L_804D6014; } // 804D5FFC
  cmpu(c,0,c->r[0],0x00000008u); // 804D6000
  if (crb(c,0)) { goto L_804D6014; } // 804D6004
  cmpu(c,0,c->r[0],0x0000000Au); // 804D6008
  if (crb(c,1)) { goto L_804D6014; } // 804D600C
  c->r[3]=0u+0x00000001u; // 804D6010
L_804D6014:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D6014
  if (!crb(c,2)) { goto L_804D6024; } // 804D6018
  c->r[3]=0u+0x00000000u; // 804D601C
  goto L_804D62D4; // 804D6020
L_804D6024:;
  c->r[22]=0u+0x00000000u; // 804D6024
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 804D6028
  c->r[28]=0u+0x70610000u; // 804D602C
  W32(c->r[1]+0x00000014u,c->r[14]); // 804D6030
  c->r[16]=c->r[31]+c->r[0]; // 804D6034
  c->r[20]=0u+0x00000000u; // 804D6038
  W32(c->r[1]+0x00000008u,c->r[22]); // 804D603C
  c->r[23]=c->r[28]+0x00006531u; // 804D6040
  c->r[19]=0u+0x00000000u; // 804D6044
  c->r[18]=0u+0x00000000u; // 804D6048
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 804D604C
  c->r[17]=0u+0x00000000u; // 804D6050
  c->r[15]=0u+0x00000000u; // 804D6054
  c->r[14]=0u+0x6D610000u; // 804D6058
  W32(c->r[1]+0x00000010u,c->r[22]); // 804D605C
  c->r[29]=0u+0x74780000u; // 804D6060
  c->r[25]=0u+0x626E0000u; // 804D6064
  c->r[26]=0u+0x6C790000u; // 804D6068
  c->r[27]=0u+0x67720000u; // 804D606C
  c->r[24]=0u+0x666E0000u; // 804D6070
  goto L_804D62C4; // 804D6074
L_804D6078:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 804D6078
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 804D607C
  if (crb(c,2)) { goto L_804D61F4; } // 804D6080
  if (!crb(c,0)) { goto L_804D60F8; } // 804D6084
  c->r[0]=c->r[27]+0x00007031u; // 804D6088
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D608C
  if (crb(c,2)) { goto L_804D6200; } // 804D6090
  if (!crb(c,0)) { goto L_804D60C8; } // 804D6094
  c->r[0]=c->r[24]+0x00006C31u; // 804D6098
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D609C
  if (crb(c,2)) { goto L_804D6190; } // 804D60A0
  if (!crb(c,0)) { goto L_804D60B8; } // 804D60A4
  c->r[0]=c->r[25]+0x00006431u; // 804D60A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60AC
  if (crb(c,2)) { goto L_804D61A0; } // 804D60B0
  goto L_804D62B8; // 804D60B4
L_804D60B8:;
  c->r[0]=c->r[27]+0x00006531u; // 804D60B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60BC
  if (crb(c,2)) { goto L_804D62B4; } // 804D60C0
  goto L_804D62B8; // 804D60C4
L_804D60C8:;
  c->r[0]=c->r[26]+0x00007431u; // 804D60C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60CC
  if (crb(c,2)) { goto L_804D6174; } // 804D60D0
  if (!crb(c,0)) { goto L_804D60E8; } // 804D60D4
  c->r[0]=c->r[27]+0x00007331u; // 804D60D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60DC
  if (crb(c,2)) { goto L_804D62AC; } // 804D60E0
  goto L_804D62B8; // 804D60E4
L_804D60E8:;
  c->r[0]=c->r[14]+0x00007431u; // 804D60E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60EC
  if (crb(c,2)) { goto L_804D6198; } // 804D60F0
  goto L_804D62B8; // 804D60F4
L_804D60F8:;
  c->r[0]=c->r[29]+0x00006C31u; // 804D60F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D60FC
  if (crb(c,2)) { goto L_804D6188; } // 804D6100
  if (!crb(c,0)) { goto L_804D613C; } // 804D6104
  c->r[0]=c->r[28]+0x00007331u; // 804D6108
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D610C
  if (crb(c,2)) { goto L_804D61EC; } // 804D6110
  if (!crb(c,0)) { goto L_804D6128; } // 804D6114
  c->r[0]=c->r[28]+0x00006E31u; // 804D6118
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D611C
  if (crb(c,2)) { goto L_804D61A0; } // 804D6120
  goto L_804D62B8; // 804D6124
L_804D6128:;
  c->r[4]=0u+0x70690000u; // 804D6128
  c->r[0]=c->r[4]+0x00006331u; // 804D612C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6130
  if (crb(c,2)) { goto L_804D61A0; } // 804D6134
  goto L_804D62B8; // 804D6138
L_804D613C:;
  c->r[4]=0u+0x75730000u; // 804D613C
  c->r[0]=c->r[4]+0x00006431u; // 804D6140
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6144
  if (crb(c,2)) { goto L_804D61E4; } // 804D6148
  if (!crb(c,0)) { goto L_804D6160; } // 804D614C
  c->r[0]=c->r[29]+0x00007431u; // 804D6150
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6154
  if (crb(c,2)) { goto L_804D61A0; } // 804D6158
  goto L_804D62B8; // 804D615C
L_804D6160:;
  c->r[4]=0u+0x776E0000u; // 804D6160
  c->r[0]=c->r[4]+0x00006431u; // 804D6164
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6168
  if (crb(c,2)) { goto L_804D61A0; } // 804D616C
  goto L_804D62B8; // 804D6170
L_804D6174:;
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D6174
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6178
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 804D617C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 804D6180
  goto L_804D62B8; // 804D6184
L_804D6188:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 804D6188
  goto L_804D62B8; // 804D618C
L_804D6190:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 804D6190
  goto L_804D62B8; // 804D6194
L_804D6198:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 804D6198
  goto L_804D62B8; // 804D619C
L_804D61A0:;
  c->r[4]=c->r[16]|c->r[16]; // 804D61A0
  c->r[5]=c->r[1]+0x00000008u; // 804D61A4
  c->lr=0x804D61ACu; f_804D69B0(c); // 804D61A8
  cmps(c,0,(int32_t)c->r[3],0); // 804D61AC
  c->r[21]=c->r[3]|c->r[3]; // 804D61B0
  if (crb(c,2)) { goto L_804D62B8; } // 804D61B4
  c->r[0]=R32(c->r[30]+0x00000010u); // 804D61B8
  cmps(c,0,(int32_t)c->r[0],0); // 804D61BC
  if (!crb(c,2)) { goto L_804D61C8; } // 804D61C0
  W32(c->r[30]+0x00000010u,c->r[3]); // 804D61C4
L_804D61C8:;
  cmps(c,0,(int32_t)c->r[20],0); // 804D61C8
  if (crb(c,2)) { goto L_804D61DC; } // 804D61CC
  c->r[3]=c->r[20]|c->r[20]; // 804D61D0
  c->r[4]=c->r[21]|c->r[21]; // 804D61D4
  c->lr=0x804D61DCu; f_804D4B88(c); // 804D61D8
L_804D61DC:;
  c->r[19]=c->r[21]|c->r[21]; // 804D61DC
  goto L_804D62B8; // 804D61E0
L_804D61E4:;
  W32(c->r[19]+0x000000B4u,c->r[16]); // 804D61E4
  goto L_804D62B8; // 804D61E8
L_804D61EC:;
  c->r[20]=c->r[19]|c->r[19]; // 804D61EC
  goto L_804D62B8; // 804D61F0
L_804D61F4:;
  c->r[19]=c->r[20]|c->r[20]; // 804D61F4
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 804D61F8
  goto L_804D62B8; // 804D61FC
L_804D6200:;
  cmps(c,0,(int32_t)c->r[18],0); // 804D6200
  if (!crb(c,2)) { goto L_804D624C; } // 804D6204
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6208
  c->r[18]=0u+0x00000001u; // 804D620C
  c->r[4]=0u+0x0000000Cu; // 804D6210
  c->lr=0x804D6218u; f_803C4D08(c); // 804D6214
  cmps(c,0,(int32_t)c->r[3],0); // 804D6218
  if (crb(c,2)) { goto L_804D6240; } // 804D621C
  if (crb(c,2)) { goto L_804D6244; } // 804D6220
  W32(c->r[3]+0x00000004u,c->r[22]); // 804D6224
  c->r[4]=c->r[3]+0x00000004u; // 804D6228
  W32(c->r[3]+0x00000008u,c->r[22]); // 804D622C
  W32(c->r[3]+0x00000000u,c->r[22]); // 804D6230
  W32(c->r[3]+0x00000004u,c->r[4]); // 804D6234
  W32(c->r[3]+0x00000008u,c->r[4]); // 804D6238
  goto L_804D6244; // 804D623C
L_804D6240:;
  c->r[3]=0u+0x00000000u; // 804D6240
L_804D6244:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 804D6244
  goto L_804D62B8; // 804D6248
L_804D624C:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 804D624C
  cmps(c,0,(int32_t)c->r[0],0); // 804D6250
  if (crb(c,2)) { goto L_804D62B8; } // 804D6254
  cmps(c,0,(int32_t)c->r[17],1); // 804D6258
  if (!crb(c,2)) { goto L_804D62B8; } // 804D625C
  c->r[21]=R32(c->r[30]+0x00000010u); // 804D6260
  c->r[4]=0u+0x0000002Cu; // 804D6264
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6268
  c->lr=0x804D6270u; f_803C4D08(c); // 804D626C
  cmps(c,0,(int32_t)c->r[3],0); // 804D6270
  if (crb(c,2)) { goto L_804D6294; } // 804D6274
  c->r[4]=c->r[3]|c->r[3]; // 804D6278
  if (crb(c,2)) { goto L_804D6298; } // 804D627C
  c->r[4]=c->r[16]|c->r[16]; // 804D6280
  c->r[5]=c->r[21]|c->r[21]; // 804D6284
  c->lr=0x804D628Cu; f_804D5890(c); // 804D6288
  c->r[4]=c->r[3]|c->r[3]; // 804D628C
  goto L_804D6298; // 804D6290
L_804D6294:;
  c->r[4]=0u+0x00000000u; // 804D6294
L_804D6298:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D6298
  if (crb(c,2)) { goto L_804D62B8; } // 804D629C
  c->r[3]=R32(c->r[30]+0x00000014u); // 804D62A0
  c->lr=0x804D62A8u; f_804D5B20(c); // 804D62A4
  goto L_804D62B8; // 804D62A8
L_804D62AC:;
  c->r[17]=c->r[17]+0x00000001u; // 804D62AC
  goto L_804D62B8; // 804D62B0
L_804D62B4:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 804D62B4
L_804D62B8:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 804D62B8
  c->r[15]=c->r[15]+0x00000001u; // 804D62BC
  c->r[16]=c->r[16]+c->r[0]; // 804D62C0
L_804D62C4:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 804D62C4
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 804D62C8
  if (crb(c,0)) { IRQCHK(c); goto L_804D6078; } // 804D62CC
  c->r[3]=0u+0x00000001u; // 804D62D0
L_804D62D4:;
  c->r[11]=c->r[1]+0x00000060u; // 804D62D4
  c->lr=0x804D62DCu; f_803A9C1C(c); // 804D62D8
  c->r[0]=R32(c->r[1]+0x00000064u); // 804D62DC
  c->lr=c->r[0]; // 804D62E0
  c->r[1]=c->r[1]+0x00000060u; // 804D62E4
  return; // 804D62E8
}

// fn_804D62EC
void f_804D62EC(Ctx* __restrict c) {
  trace_call(0x804D62ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D62EC
  c->r[0]=c->lr; // 804D62F0
  c->r[4]=0u+0x00000020u; // 804D62F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D62F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D62FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D6300
  c->r[30]=c->r[3]|c->r[3]; // 804D6304
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6308
  c->lr=0x804D6310u; f_803C4D08(c); // 804D630C
  cmps(c,0,(int32_t)c->r[3],0); // 804D6310
  if (crb(c,2)) { goto L_804D632C; } // 804D6314
  c->r[31]=c->r[3]|c->r[3]; // 804D6318
  if (crb(c,2)) { goto L_804D6330; } // 804D631C
  c->lr=0x804D6324u; f_804DE4EC(c); // 804D6320
  c->r[31]=c->r[3]|c->r[3]; // 804D6324
  goto L_804D6330; // 804D6328
L_804D632C:;
  c->r[31]=0u+0x00000000u; // 804D632C
L_804D6330:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D6330
  if (crb(c,2)) { goto L_804D6350; } // 804D6334
  c->r[0]=c->r[30]+0x00000008u; // 804D6338
  c->r[3]=c->r[30]+0x00000004u; // 804D633C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804D6340
  c->r[4]=c->r[1]+0x00000008u; // 804D6344
  c->r[5]=c->r[31]+0x00000004u; // 804D6348
  c->lr=0x804D6350u; f_80507EDC(c); // 804D634C
L_804D6350:;
  c->r[3]=c->r[31]|c->r[31]; // 804D6350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D6354
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D6358
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D635C
  c->lr=c->r[0]; // 804D6360
  c->r[1]=c->r[1]+0x00000020u; // 804D6364
  return; // 804D6368
}

// fn_804D636C
void f_804D636C(Ctx* __restrict c) {
  trace_call(0x804D636Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D636C
  c->r[0]=c->lr; // 804D6370
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D6374
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D6378
  c->r[31]=c->r[5]|c->r[5]; // 804D637C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D6380
  c->r[30]=c->r[3]|c->r[3]; // 804D6384
  c->r[3]=c->r[1]+0x00000008u; // 804D6388
  c->lr=0x804D6390u; f_804DEEF8(c); // 804D638C
  c->r[12]=R32(c->r[30]+0x00000000u); // 804D6390
  c->r[3]=c->r[30]|c->r[30]; // 804D6394
  c->r[5]=c->r[31]|c->r[31]; // 804D6398
  c->r[4]=c->r[1]+0x00000008u; // 804D639C
  c->r[12]=R32(c->r[12]+0x00000018u); // 804D63A0
  c->ctr=c->r[12]; // 804D63A4
  if (true) { c->lr=0x804D63ACu; dispatch(c,c->ctr); } // 804D63A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D63AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D63B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D63B4
  c->lr=c->r[0]; // 804D63B8
  c->r[1]=c->r[1]+0x00000020u; // 804D63BC
  return; // 804D63C0
}

// fn_804D63C4
void f_804D63C4(Ctx* __restrict c) {
  trace_call(0x804D63C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D63C4
  c->r[0]=c->lr; // 804D63C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D63CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D63D0
  c->r[31]=R32(c->r[4]+0x00000004u); // 804D63D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D63D8
  cmps(c,0,(int32_t)c->r[31],0); // 804D63DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D63E0
  c->r[29]=c->r[5]|c->r[5]; // 804D63E4
  if (!crb(c,2)) { goto L_804D63F4; } // 804D63E8
  c->r[3]=0u+0x00000000u; // 804D63EC
  goto L_804D642C; // 804D63F0
L_804D63F4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D63F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D63F8
  c->ctr=c->r[12]; // 804D63FC
  if (true) { c->lr=0x804D6404u; dispatch(c,c->ctr); } // 804D6400
  cmps(c,0,(int32_t)c->r[3],0); // 804D6404
  c->r[30]=c->r[3]|c->r[3]; // 804D6408
  if (crb(c,2)) { goto L_804D6428; } // 804D640C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6410
  c->r[4]=c->r[31]|c->r[31]; // 804D6414
  c->r[5]=c->r[29]|c->r[29]; // 804D6418
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D641C
  c->ctr=c->r[12]; // 804D6420
  if (true) { c->lr=0x804D6428u; dispatch(c,c->ctr); } // 804D6424
L_804D6428:;
  c->r[3]=c->r[30]|c->r[30]; // 804D6428
L_804D642C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D642C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D6430
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D6434
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D6438
  c->lr=c->r[0]; // 804D643C
  c->r[1]=c->r[1]+0x00000020u; // 804D6440
  return; // 804D6444
}

// BindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_804D6448(Ctx* __restrict c) {
  trace_call(0x804D6448u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D6448
  cmps(c,0,(int32_t)c->r[3],0); // 804D644C
  if (crb(c,2)) return; // 804D6450
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6454
  c->r[5]=0u+0x00000001u; // 804D6458
  c->r[6]=0u+0x00000000u; // 804D645C
  c->r[12]=R32(c->r[12]+0x00000044u); // 804D6460
  c->ctr=c->r[12]; // 804D6464
  if (true) { dispatch(c,c->ctr); return; } // 804D6468
  return; // 804D646C
}

// fn_804D6470
void f_804D6470(Ctx* __restrict c) {
  trace_call(0x804D6470u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D6470
  cmps(c,0,(int32_t)c->r[3],0); // 804D6474
  if (crb(c,2)) return; // 804D6478
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D647C
  c->r[5]=0u+0x00000001u; // 804D6480
  c->r[12]=R32(c->r[12]+0x00000048u); // 804D6484
  c->ctr=c->r[12]; // 804D6488
  if (true) { dispatch(c,c->ctr); return; } // 804D648C
  return; // 804D6490
}

// fn_804D6494
void f_804D6494(Ctx* __restrict c) {
  trace_call(0x804D6494u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6494
  c->r[4]=0u+0x00000000u; // 804D6498
  c->r[12]=R32(c->r[12]+0x00000020u); // 804D649C
  c->ctr=c->r[12]; // 804D64A0
  if (true) { dispatch(c,c->ctr); return; } // 804D64A4
}

// fn_804D64A8
void f_804D64A8(Ctx* __restrict c) {
  trace_call(0x804D64A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D64A8
  c->r[0]=c->lr; // 804D64AC
  W32(c->r[1]+0x00000064u,c->r[0]); // 804D64B0
  c->r[11]=c->r[1]+0x00000060u; // 804D64B4
  c->lr=0x804D64BCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D64B8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804D64BC
  c->r[29]=c->r[3]|c->r[3]; // 804D64C0
  c->r[30]=c->r[4]|c->r[4]; // 804D64C4
  c->r[31]=c->r[5]|c->r[5]; // 804D64C8
  cmps(c,0,(int32_t)c->r[0],0); // 804D64CC
  if (!crb(c,2)) { goto L_804D64DC; } // 804D64D0
  c->r[3]=0u+0x00000000u; // 804D64D4
  goto L_804D672C; // 804D64D8
L_804D64DC:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 804D64DC
  cmps(c,0,(int32_t)c->r[0],0); // 804D64E0
  if (!crb(c,2)) { goto L_804D64F0; } // 804D64E4
  c->r[3]=0u+0x00000000u; // 804D64E8
  goto L_804D672C; // 804D64EC
L_804D64F0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D64F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D64F4
  c->ctr=c->r[12]; // 804D64F8
  if (true) { c->lr=0x804D6500u; dispatch(c,c->ctr); } // 804D64FC
  c->r[22]=c->r[3]|c->r[3]; // 804D6500
  c->r[3]=c->r[30]|c->r[30]; // 804D6504
  c->lr=0x804D650Cu; f_804DF008(c); // 804D6508
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 804D650C
  c->r[24]=c->r[3]|c->r[3]; // 804D6510
  c->r[26]=0u+0x00000000u; // 804D6514
  if (!crb(c,2)) { goto L_804D6560; } // 804D6518
  c->r[12]=R32(c->r[22]+0x00000000u); // 804D651C
  c->r[3]=c->r[22]|c->r[22]; // 804D6520
  c->r[4]=R32(c->r[30]+0x00000004u); // 804D6524
  c->r[5]=c->r[31]|c->r[31]; // 804D6528
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D652C
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 804D6530
  c->ctr=c->r[12]; // 804D6534
  if (true) { c->lr=0x804D653Cu; dispatch(c,c->ctr); } // 804D6538
  c->r[3]=R32(c->r[29]+0x00000010u); // 804D653C
  c->r[4]=c->r[22]|c->r[22]; // 804D6540
  c->r[5]=0u+0x00000001u; // 804D6544
  c->r[6]=0u+0x00000001u; // 804D6548
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D654C
  c->r[12]=R32(c->r[12]+0x00000044u); // 804D6550
  c->ctr=c->r[12]; // 804D6554
  if (true) { c->lr=0x804D655Cu; dispatch(c,c->ctr); } // 804D6558
  goto L_804D6620; // 804D655C
L_804D6560:;
  c->r[3]=c->r[30]|c->r[30]; // 804D6560
  c->lr=0x804D6568u; f_804DF024(c); // 804D6564
  c->r[27]=c->r[3]|c->r[3]; // 804D6568
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 804D656C
  c->r[23]=c->r[27]|c->r[27]; // 804D6570
  c->r[28]=0u+0x00000000u; // 804D6574
  goto L_804D65B0; // 804D6578
L_804D657C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804D657C
  c->r[4]=c->r[23]|c->r[23]; // 804D6580
  c->lr=0x804D6588u; f_804D5B54(c); // 804D6584
  c->r[21]=c->r[3]|c->r[3]; // 804D6588
  c->r[3]=c->r[30]|c->r[30]; // 804D658C
  c->lr=0x804D6594u; f_804DF044(c); // 804D6590
  c->r[5]=c->r[3]|c->r[3]; // 804D6594
  c->r[3]=c->r[30]|c->r[30]; // 804D6598
  c->r[4]=c->r[21]|c->r[21]; // 804D659C
  c->lr=0x804D65A4u; f_804DF178(c); // 804D65A0
  c->r[26]=c->r[26]+c->r[3]; // 804D65A4
  c->r[23]=c->r[23]+0x00000014u; // 804D65A8
  c->r[28]=c->r[28]+0x00000001u; // 804D65AC
L_804D65B0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 804D65B0
  if (crb(c,0)) { IRQCHK(c); goto L_804D657C; } // 804D65B4
  c->r[12]=R32(c->r[22]+0x00000000u); // 804D65B8
  c->r[3]=c->r[22]|c->r[22]; // 804D65BC
  c->r[5]=c->r[31]|c->r[31]; // 804D65C0
  c->r[6]=rotl(c->r[26],0)&0x0000FFFFu; // 804D65C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D65C8
  c->r[4]=R32(c->r[30]+0x00000004u); // 804D65CC
  c->ctr=c->r[12]; // 804D65D0
  if (true) { c->lr=0x804D65D8u; dispatch(c,c->ctr); } // 804D65D4
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 804D65D8
  c->r[21]=0u+0x00000000u; // 804D65DC
  goto L_804D6618; // 804D65E0
L_804D65E4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804D65E4
  c->r[4]=c->r[27]|c->r[27]; // 804D65E8
  c->lr=0x804D65F0u; f_804D5B54(c); // 804D65EC
  c->r[23]=c->r[3]|c->r[3]; // 804D65F0
  c->r[3]=c->r[30]|c->r[30]; // 804D65F4
  c->lr=0x804D65FCu; f_804DF044(c); // 804D65F8
  c->r[5]=c->r[3]|c->r[3]; // 804D65FC
  c->r[3]=c->r[23]|c->r[23]; // 804D6600
  c->r[4]=c->r[22]|c->r[22]; // 804D6604
  c->r[6]=0u+0x00000001u; // 804D6608
  c->lr=0x804D6610u; f_804E084C(c); // 804D660C
  c->r[27]=c->r[27]+0x00000014u; // 804D6610
  c->r[21]=c->r[21]+0x00000001u; // 804D6614
L_804D6618:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 804D6618
  if (crb(c,0)) { IRQCHK(c); goto L_804D65E4; } // 804D661C
L_804D6620:;
  c->r[3]=c->r[30]|c->r[30]; // 804D6620
  c->lr=0x804D6628u; f_804DF064(c); // 804D6624
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 804D6628
  c->r[25]=c->r[3]|c->r[3]; // 804D662C
  if (crb(c,2)) { goto L_804D6728; } // 804D6630
  c->r[3]=c->r[30]|c->r[30]; // 804D6634
  c->lr=0x804D663Cu; f_804DF080(c); // 804D6638
  c->r[23]=c->r[3]|c->r[3]; // 804D663C
  c->r[26]=rotl(c->r[25],0)&0x0000FFFFu; // 804D6640
  c->r[21]=0u+0x00000000u; // 804D6644
  goto L_804D6720; // 804D6648
L_804D664C:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 804D664C
  c->r[4]=c->r[23]|c->r[23]; // 804D6650
  c->r[5]=0u+0x00000001u; // 804D6654
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6658
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804D665C
  c->ctr=c->r[12]; // 804D6660
  if (true) { c->lr=0x804D6668u; dispatch(c,c->ctr); } // 804D6664
  c->r[20]=c->r[3]|c->r[3]; // 804D6668
  c->r[3]=c->r[1]+0x00000008u; // 804D666C
  c->lr=0x804D6674u; f_804DEEE0(c); // 804D6670
  c->r[3]=c->r[1]+0x00000008u; // 804D6674
  c->lr=0x804D667Cu; f_804DF1E0(c); // 804D6678
  c->r[4]=c->r[20]|c->r[20]; // 804D667C
  c->r[5]=c->r[30]|c->r[30]; // 804D6680
  c->r[3]=c->r[1]+0x00000008u; // 804D6684
  c->lr=0x804D668Cu; f_804DF218(c); // 804D6688
  c->r[0]=R16(c->r[1]+0x0000001Au); // 804D668C
  cmps(c,0,(int32_t)c->r[0],0); // 804D6690
  if (crb(c,2)) { goto L_804D6718; } // 804D6694
  c->r[3]=R32(c->r[29]+0x00000014u); // 804D6698
  c->r[4]=c->r[23]+0x00000011u; // 804D669C
  c->lr=0x804D66A4u; f_804D5B54(c); // 804D66A0
  c->r[28]=R32(c->r[3]+0x00000010u); // 804D66A4
  c->r[27]=c->r[3]+0x00000010u; // 804D66A8
  goto L_804D6710; // 804D66AC
L_804D66B0:;
  c->r[22]=R32(c->r[28]+0x00000008u); // 804D66B0
  cmpu(c,0,c->r[22],c->r[20]); // 804D66B4
  if (crb(c,2)) { goto L_804D670C; } // 804D66B8
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 804D66BC
  if (crb(c,2)) { goto L_804D66F8; } // 804D66C0
  c->r[3]=c->r[30]|c->r[30]; // 804D66C4
  c->lr=0x804D66CCu; f_804DF044(c); // 804D66C8
  c->r[25]=c->r[3]|c->r[3]; // 804D66CC
  c->r[3]=c->r[30]|c->r[30]; // 804D66D0
  c->lr=0x804D66D8u; f_804DF024(c); // 804D66D4
  c->r[4]=c->r[3]|c->r[3]; // 804D66D8
  c->r[3]=R32(c->r[29]+0x00000014u); // 804D66DC
  c->r[6]=c->r[25]|c->r[25]; // 804D66E0
  c->r[7]=c->r[22]|c->r[22]; // 804D66E4
  c->r[5]=rotl(c->r[24],0)&0x0000FFFFu; // 804D66E8
  c->lr=0x804D66F0u; f_804D5D7C(c); // 804D66EC
  cmps(c,0,(int32_t)c->r[3],0); // 804D66F0
  if (crb(c,2)) { goto L_804D670C; } // 804D66F4
L_804D66F8:;
  c->r[5]=R32(c->r[28]+0x00000008u); // 804D66F8
  c->r[4]=c->r[29]|c->r[29]; // 804D66FC
  c->r[6]=c->r[31]|c->r[31]; // 804D6700
  c->r[3]=c->r[1]+0x00000008u; // 804D6704
  c->lr=0x804D670Cu; f_804DF478(c); // 804D6708
L_804D670C:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 804D670C
L_804D6710:;
  cmpu(c,0,c->r[28],c->r[27]); // 804D6710
  if (!crb(c,2)) { IRQCHK(c); goto L_804D66B0; } // 804D6714
L_804D6718:;
  c->r[23]=c->r[23]+0x00000024u; // 804D6718
  c->r[21]=c->r[21]+0x00000001u; // 804D671C
L_804D6720:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[26]); // 804D6720
  if (crb(c,0)) { IRQCHK(c); goto L_804D664C; } // 804D6724
L_804D6728:;
  c->r[3]=0u+0x00000001u; // 804D6728
L_804D672C:;
  c->r[11]=c->r[1]+0x00000060u; // 804D672C
  c->lr=0x804D6734u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D6730
  c->r[0]=R32(c->r[1]+0x00000064u); // 804D6734
  c->lr=c->r[0]; // 804D6738
  c->r[1]=c->r[1]+0x00000060u; // 804D673C
  return; // 804D6740
}

// fn_804D6744
void f_804D6744(Ctx* __restrict c) {
  trace_call(0x804D6744u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D6744
  cmps(c,0,(int32_t)c->r[3],0); // 804D6748
  if (crb(c,2)) return; // 804D674C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6750
  c->r[6]=0u+0x00000001u; // 804D6754
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 804D6758
  c->ctr=c->r[12]; // 804D675C
  if (true) { dispatch(c,c->ctr); return; } // 804D6760
  return; // 804D6764
}

// fn_804D6768
void f_804D6768(Ctx* __restrict c) {
  trace_call(0x804D6768u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D6768
  cmps(c,0,(int32_t)c->r[3],0); // 804D676C
  if (crb(c,2)) return; // 804D6770
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6774
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D6778
  c->ctr=c->r[12]; // 804D677C
  if (true) { dispatch(c,c->ctr); return; } // 804D6780
  return; // 804D6784
}

// fn_804D6788
void f_804D6788(Ctx* __restrict c) {
  trace_call(0x804D6788u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D6788
  cmps(c,0,(int32_t)c->r[3],0); // 804D678C
  if (crb(c,2)) return; // 804D6790
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D6794
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D6798
  c->ctr=c->r[12]; // 804D679C
  if (true) { dispatch(c,c->ctr); return; } // 804D67A0
  return; // 804D67A4
}

// fn_804D67A8
void f_804D67A8(Ctx* __restrict c) {
  trace_call(0x804D67A8u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 804D67A8
  cmps(c,0,(int32_t)c->r[3],0); // 804D67AC
  if (crb(c,2)) return; // 804D67B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D67B4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D67B8
  c->ctr=c->r[12]; // 804D67BC
  if (true) { dispatch(c,c->ctr); return; } // 804D67C0
  return; // 804D67C4
}

// GetLayoutRect__Q34nw4r3lyt6LayoutCFv
void f_804D67C8(Ctx* __restrict c) {
  trace_call(0x804D67C8u);
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804D67C8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D67CC
  c->f[3]=-c->f[4]; // 804D67D0
  {uint32_t ea=c->r[2]+0x00001784u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D67D4
  c->f[0]=-c->f[1]; // 804D67D8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 804D67DC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 804D67E0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 804D67E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804D67E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 804D67EC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804D67F0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804D67F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 804D67F8
  return; // 804D67FC
}

// fn_804D6800
void f_804D6800(Ctx* __restrict c) {
  trace_call(0x804D6800u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D6800
  c->r[0]=c->lr; // 804D6804
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D6808
  c->r[11]=c->r[1]+0x00000030u; // 804D680C
  c->lr=0x804D6814u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D6810
  c->r[25]=R32(c->r[3]+0x00000010u); // 804D6814
  c->r[31]=c->r[4]|c->r[4]; // 804D6818
  c->r[23]=c->r[13]+0xFFFFE4B0u; // 804D681C
  cmps(c,0,(int32_t)c->r[25],0); // 804D6820
  if (crb(c,2)) { goto L_804D6870; } // 804D6824
  c->r[12]=R32(c->r[25]+0x00000000u); // 804D6828
  c->r[3]=c->r[25]|c->r[25]; // 804D682C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D6830
  c->ctr=c->r[12]; // 804D6834
  if (true) { c->lr=0x804D683Cu; dispatch(c,c->ctr); } // 804D6838
  goto L_804D6854; // 804D683C
L_804D6840:;
  cmpu(c,0,c->r[3],c->r[23]); // 804D6840
  if (!crb(c,2)) { goto L_804D6850; } // 804D6844
  c->r[0]=0u+0x00000001u; // 804D6848
  goto L_804D6860; // 804D684C
L_804D6850:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D6850
L_804D6854:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D6854
  if (!crb(c,2)) { IRQCHK(c); goto L_804D6840; } // 804D6858
  c->r[0]=0u+0x00000000u; // 804D685C
L_804D6860:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D6860
  if (crb(c,2)) { goto L_804D6870; } // 804D6864
  c->r[3]=c->r[25]|c->r[25]; // 804D6868
  goto L_804D6874; // 804D686C
L_804D6870:;
  c->r[3]=0u+0x00000000u; // 804D6870
L_804D6874:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D6874
  if (crb(c,2)) { goto L_804D6880; } // 804D6878
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D687C
L_804D6880:;
  c->r[30]=R32(c->r[25]+0x00000014u); // 804D6880
  c->r[27]=c->r[25]+0x00000014u; // 804D6884
  c->r[24]=c->r[13]+0xFFFFE4B0u; // 804D6888
  c->r[23]=c->r[13]+0xFFFFE4B0u; // 804D688C
  goto L_804D6990; // 804D6890
L_804D6894:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 804D6894
  if (crb(c,2)) { goto L_804D68E4; } // 804D6898
  c->r[12]=R32(c->r[25]+0x00000000u); // 804D689C
  c->r[3]=c->r[25]|c->r[25]; // 804D68A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D68A4
  c->ctr=c->r[12]; // 804D68A8
  if (true) { c->lr=0x804D68B0u; dispatch(c,c->ctr); } // 804D68AC
  goto L_804D68C8; // 804D68B0
L_804D68B4:;
  cmpu(c,0,c->r[3],c->r[23]); // 804D68B4
  if (!crb(c,2)) { goto L_804D68C4; } // 804D68B8
  c->r[0]=0u+0x00000001u; // 804D68BC
  goto L_804D68D4; // 804D68C0
L_804D68C4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D68C4
L_804D68C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D68C8
  if (!crb(c,2)) { IRQCHK(c); goto L_804D68B4; } // 804D68CC
  c->r[0]=0u+0x00000000u; // 804D68D0
L_804D68D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D68D4
  if (crb(c,2)) { goto L_804D68E4; } // 804D68D8
  c->r[3]=c->r[25]|c->r[25]; // 804D68DC
  goto L_804D68E8; // 804D68E0
L_804D68E4:;
  c->r[3]=0u+0x00000000u; // 804D68E4
L_804D68E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D68E8
  if (crb(c,2)) { goto L_804D68F4; } // 804D68EC
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D68F0
L_804D68F4:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 804D68F4
  c->r[26]=c->r[25]+0x00000014u; // 804D68F8
  goto L_804D6984; // 804D68FC
L_804D6900:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 804D6900
  if (crb(c,2)) { goto L_804D6950; } // 804D6904
  c->r[12]=R32(c->r[25]+0x00000000u); // 804D6908
  c->r[3]=c->r[25]|c->r[25]; // 804D690C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D6910
  c->ctr=c->r[12]; // 804D6914
  if (true) { c->lr=0x804D691Cu; dispatch(c,c->ctr); } // 804D6918
  goto L_804D6934; // 804D691C
L_804D6920:;
  cmpu(c,0,c->r[3],c->r[24]); // 804D6920
  if (!crb(c,2)) { goto L_804D6930; } // 804D6924
  c->r[0]=0u+0x00000001u; // 804D6928
  goto L_804D6940; // 804D692C
L_804D6930:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804D6930
L_804D6934:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D6934
  if (!crb(c,2)) { IRQCHK(c); goto L_804D6920; } // 804D6938
  c->r[0]=0u+0x00000000u; // 804D693C
L_804D6940:;
  cmps(c,0,(int32_t)c->r[0],0); // 804D6940
  if (crb(c,2)) { goto L_804D6950; } // 804D6944
  c->r[3]=c->r[25]|c->r[25]; // 804D6948
  goto L_804D6954; // 804D694C
L_804D6950:;
  c->r[3]=0u+0x00000000u; // 804D6950
L_804D6954:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D6954
  if (crb(c,2)) { goto L_804D6960; } // 804D6958
  W32(c->r[3]+0x000000F8u,c->r[31]); // 804D695C
L_804D6960:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 804D6960
  goto L_804D6978; // 804D6964
L_804D6968:;
  c->r[4]=c->r[31]|c->r[31]; // 804D6968
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 804D696C
  c->lr=0x804D6974u; f_804D5BD0(c); // 804D6970
  c->r[28]=R32(c->r[28]+0x00000000u); // 804D6974
L_804D6978:;
  cmpu(c,0,c->r[28],c->r[25]); // 804D6978
  if (!crb(c,2)) { IRQCHK(c); goto L_804D6968; } // 804D697C
  c->r[29]=R32(c->r[29]+0x00000000u); // 804D6980
L_804D6984:;
  cmpu(c,0,c->r[29],c->r[26]); // 804D6984
  if (!crb(c,2)) { IRQCHK(c); goto L_804D6900; } // 804D6988
  c->r[30]=R32(c->r[30]+0x00000000u); // 804D698C
L_804D6990:;
  cmpu(c,0,c->r[30],c->r[27]); // 804D6990
  if (!crb(c,2)) { IRQCHK(c); goto L_804D6894; } // 804D6994
  c->r[11]=c->r[1]+0x00000030u; // 804D6998
  c->lr=0x804D69A0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D699C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D69A0
  c->lr=c->r[0]; // 804D69A4
  c->r[1]=c->r[1]+0x00000030u; // 804D69A8
  return; // 804D69AC
}

// fn_804D69B0
void f_804D69B0(Ctx* __restrict c) {
  trace_call(0x804D69B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D69B0
  c->r[0]=c->lr; // 804D69B4
  c->r[6]=0u+0x70690000u; // 804D69B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D69BC
  c->r[0]=c->r[6]+0x00006331u; // 804D69C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D69C4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804D69C8
  if (crb(c,2)) { goto L_804D6A54; } // 804D69CC
  if (!crb(c,0)) { goto L_804D69FC; } // 804D69D0
  c->r[6]=0u+0x70610000u; // 804D69D4
  c->r[0]=c->r[6]+0x00006E31u; // 804D69D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D69DC
  if (crb(c,2)) { goto L_804D6A24; } // 804D69E0
  if (!crb(c,0)) { goto L_804D6BA4; } // 804D69E4
  c->r[6]=0u+0x626E0000u; // 804D69E8
  c->r[0]=c->r[6]+0x00006431u; // 804D69EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D69F0
  if (crb(c,2)) { goto L_804D6B50; } // 804D69F4
  goto L_804D6BA4; // 804D69F8
L_804D69FC:;
  c->r[6]=0u+0x776E0000u; // 804D69FC
  c->r[0]=c->r[6]+0x00006431u; // 804D6A00
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6A04
  if (crb(c,2)) { goto L_804D6AFC; } // 804D6A08
  if (!crb(c,0)) { goto L_804D6BA4; } // 804D6A0C
  c->r[6]=0u+0x74780000u; // 804D6A10
  c->r[0]=c->r[6]+0x00007431u; // 804D6A14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804D6A18
  if (crb(c,2)) { goto L_804D6AA8; } // 804D6A1C
  goto L_804D6BA4; // 804D6A20
L_804D6A24:;
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6A24
  c->r[31]=c->r[4]|c->r[4]; // 804D6A28
  c->r[4]=0u+0x000000D8u; // 804D6A2C
  c->lr=0x804D6A34u; f_803C4D08(c); // 804D6A30
  cmps(c,0,(int32_t)c->r[3],0); // 804D6A34
  if (crb(c,2)) { goto L_804D6A4C; } // 804D6A38
  if (crb(c,2)) { goto L_804D6BA8; } // 804D6A3C
  c->r[4]=c->r[31]|c->r[31]; // 804D6A40
  c->lr=0x804D6A48u; f_804D4918(c); // 804D6A44
  goto L_804D6BA8; // 804D6A48
L_804D6A4C:;
  c->r[3]=0u+0x00000000u; // 804D6A4C
  goto L_804D6BA8; // 804D6A50
L_804D6A54:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 804D6A54
  c->r[31]=c->r[4]|c->r[4]; // 804D6A58
  c->r[7]=R32(c->r[5]+0x00000004u); // 804D6A5C
  c->r[4]=0u+0x000000F0u; // 804D6A60
  c->r[6]=R32(c->r[5]+0x00000008u); // 804D6A64
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804D6A68
  W32(c->r[1]+0x00000038u,c->r[3]); // 804D6A6C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6A70
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 804D6A74
  W32(c->r[1]+0x00000040u,c->r[6]); // 804D6A78
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D6A7C
  c->lr=0x804D6A84u; f_803C4D08(c); // 804D6A80
  cmps(c,0,(int32_t)c->r[3],0); // 804D6A84
  if (crb(c,2)) { goto L_804D6AA0; } // 804D6A88
  if (crb(c,2)) { goto L_804D6BA8; } // 804D6A8C
  c->r[4]=c->r[31]|c->r[31]; // 804D6A90
  c->r[5]=c->r[1]+0x00000038u; // 804D6A94
  c->lr=0x804D6A9Cu; f_804D6BBC(c); // 804D6A98
  goto L_804D6BA8; // 804D6A9C
L_804D6AA0:;
  c->r[3]=0u+0x00000000u; // 804D6AA0
  goto L_804D6BA8; // 804D6AA4
L_804D6AA8:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 804D6AA8
  c->r[31]=c->r[4]|c->r[4]; // 804D6AAC
  c->r[7]=R32(c->r[5]+0x00000004u); // 804D6AB0
  c->r[4]=0u+0x00000104u; // 804D6AB4
  c->r[6]=R32(c->r[5]+0x00000008u); // 804D6AB8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804D6ABC
  W32(c->r[1]+0x00000028u,c->r[3]); // 804D6AC0
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6AC4
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 804D6AC8
  W32(c->r[1]+0x00000030u,c->r[6]); // 804D6ACC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D6AD0
  c->lr=0x804D6AD8u; f_803C4D08(c); // 804D6AD4
  cmps(c,0,(int32_t)c->r[3],0); // 804D6AD8
  if (crb(c,2)) { goto L_804D6AF4; } // 804D6ADC
  if (crb(c,2)) { goto L_804D6BA8; } // 804D6AE0
  c->r[4]=c->r[31]|c->r[31]; // 804D6AE4
  c->r[5]=c->r[1]+0x00000028u; // 804D6AE8
  c->lr=0x804D6AF0u; f_804D71D0(c); // 804D6AEC
  goto L_804D6BA8; // 804D6AF0
L_804D6AF4:;
  c->r[3]=0u+0x00000000u; // 804D6AF4
  goto L_804D6BA8; // 804D6AF8
L_804D6AFC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 804D6AFC
  c->r[31]=c->r[4]|c->r[4]; // 804D6B00
  c->r[7]=R32(c->r[5]+0x00000004u); // 804D6B04
  c->r[4]=0u+0x00000108u; // 804D6B08
  c->r[6]=R32(c->r[5]+0x00000008u); // 804D6B0C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804D6B10
  W32(c->r[1]+0x00000018u,c->r[3]); // 804D6B14
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6B18
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 804D6B1C
  W32(c->r[1]+0x00000020u,c->r[6]); // 804D6B20
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D6B24
  c->lr=0x804D6B2Cu; f_803C4D08(c); // 804D6B28
  cmps(c,0,(int32_t)c->r[3],0); // 804D6B2C
  if (crb(c,2)) { goto L_804D6B48; } // 804D6B30
  if (crb(c,2)) { goto L_804D6BA8; } // 804D6B34
  c->r[4]=c->r[31]|c->r[31]; // 804D6B38
  c->r[5]=c->r[1]+0x00000018u; // 804D6B3C
  c->lr=0x804D6B44u; f_804D8A1C(c); // 804D6B40
  goto L_804D6BA8; // 804D6B44
L_804D6B48:;
  c->r[3]=0u+0x00000000u; // 804D6B48
  goto L_804D6BA8; // 804D6B4C
L_804D6B50:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 804D6B50
  c->r[31]=c->r[4]|c->r[4]; // 804D6B54
  c->r[7]=R32(c->r[5]+0x00000004u); // 804D6B58
  c->r[4]=0u+0x000000D8u; // 804D6B5C
  c->r[6]=R32(c->r[5]+0x00000008u); // 804D6B60
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 804D6B64
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D6B68
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6B6C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 804D6B70
  W32(c->r[1]+0x00000010u,c->r[6]); // 804D6B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D6B78
  c->lr=0x804D6B80u; f_803C4D08(c); // 804D6B7C
  cmps(c,0,(int32_t)c->r[3],0); // 804D6B80
  if (crb(c,2)) { goto L_804D6B9C; } // 804D6B84
  if (crb(c,2)) { goto L_804D6BA8; } // 804D6B88
  c->r[4]=c->r[31]|c->r[31]; // 804D6B8C
  c->r[5]=c->r[1]+0x00000008u; // 804D6B90
  c->lr=0x804D6B98u; f_804DAFD0(c); // 804D6B94
  goto L_804D6BA8; // 804D6B98
L_804D6B9C:;
  c->r[3]=0u+0x00000000u; // 804D6B9C
  goto L_804D6BA8; // 804D6BA0
L_804D6BA4:;
  c->r[3]=0u+0x00000000u; // 804D6BA4
L_804D6BA8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 804D6BA8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804D6BAC
  c->lr=c->r[0]; // 804D6BB0
  c->r[1]=c->r[1]+0x00000050u; // 804D6BB4
  return; // 804D6BB8
}

// fn_804D6BBC
void f_804D6BBC(Ctx* __restrict c) {
  trace_call(0x804D6BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D6BBC
  c->r[0]=c->lr; // 804D6BC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D6BC4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804D6BC8
  c->r[31]=c->r[3]|c->r[3]; // 804D6BCC
  W32(c->r[1]+0x00000028u,c->r[30]); // 804D6BD0
  W32(c->r[1]+0x00000024u,c->r[29]); // 804D6BD4
  c->r[29]=c->r[5]|c->r[5]; // 804D6BD8
  W32(c->r[1]+0x00000020u,c->r[28]); // 804D6BDC
  c->r[28]=c->r[4]|c->r[4]; // 804D6BE0
  c->lr=0x804D6BE8u; f_804D4918(c); // 804D6BE4
  c->r[3]=0u+0x80720000u; // 804D6BE8
  c->r[4]=0u+0x800F0000u; // 804D6BEC
  c->r[3]=c->r[3]+0xFFFFA740u; // 804D6BF0
  c->r[5]=0u+0x80040000u; // 804D6BF4
  W32(c->r[31]+0x00000000u,c->r[3]); // 804D6BF8
  c->r[3]=c->r[31]+0x000000D8u; // 804D6BFC
  c->r[4]=c->r[4]+0xFFFF8D84u; // 804D6C00
  c->r[5]=c->r[5]+0x00005E50u; // 804D6C04
  c->r[6]=0u+0x00000004u; // 804D6C08
  c->r[7]=0u+0x00000004u; // 804D6C0C
  c->lr=0x804D6C14u; f_803A9830(c); // 804D6C10
  c->r[3]=c->r[31]+0x000000E8u; // 804D6C14
  c->lr=0x804D6C1Cu; f_804DFD28(c); // 804D6C18
  c->r[0]=R8(c->r[28]+0x0000005Eu); // 804D6C1C
  c->r[30]=0u+0x00000008u; // 804D6C20
  cmpu(c,0,c->r[0],0x00000008u); // 804D6C24
  if (crb(c,1)) { goto L_804D6C30; } // 804D6C28
  c->r[30]=c->r[0]|c->r[0]; // 804D6C2C
L_804D6C30:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 804D6C30
  if (crb(c,2)) { goto L_804D6C40; } // 804D6C34
  c->r[3]=c->r[31]+0x000000E8u; // 804D6C38
  c->lr=0x804D6C40u; f_804DFD8C(c); // 804D6C3C
L_804D6C40:;
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 804D6C40
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[5]); // 804D6C44
  c->r[4]=R32(c->r[28]+0x00000050u); // 804D6C48
  c->r[3]=R32(c->r[28]+0x00000054u); // 804D6C4C
  c->r[0]=R32(c->r[28]+0x00000058u); // 804D6C50
  W32(c->r[31]+0x000000D8u,c->r[6]); // 804D6C54
  W32(c->r[31]+0x000000DCu,c->r[4]); // 804D6C58
  W32(c->r[31]+0x000000E0u,c->r[3]); // 804D6C5C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 804D6C60
  if (crb(c,2)) { goto L_804D6C80; } // 804D6C64
  c->r[0]=R8(c->r[31]+0x000000E8u); // 804D6C68
  cmps(c,0,(int32_t)c->r[0],0); // 804D6C6C
  if (crb(c,2)) { goto L_804D6C80; } // 804D6C70
  c->r[3]=c->r[31]+0x000000E8u; // 804D6C74
  c->r[4]=c->r[28]+0x00000060u; // 804D6C78
  c->lr=0x804D6C80u; f_804DFFC0(c); // 804D6C7C
L_804D6C80:;
  c->r[0]=R16(c->r[28]+0x0000005Cu); // 804D6C80
  c->r[4]=0u+0x0000005Cu; // 804D6C84
  c->r[7]=R32(c->r[29]+0x00000008u); // 804D6C88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D6C8C
  c->r[3]=R32(c->r[29]+0x00000000u); // 804D6C90
  c->r[6]=c->r[7]+c->r[0]; // 804D6C94
  c->r[5]=R32(c->r[29]+0x00000004u); // 804D6C98
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 804D6C9C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804D6CA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D6CA4
  c->r[30]=c->r[7]+c->r[6]; // 804D6CA8
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6CAC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804D6CB0
  W32(c->r[1]+0x00000010u,c->r[7]); // 804D6CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D6CB8
  c->lr=0x804D6CC0u; f_803C4D08(c); // 804D6CBC
  cmps(c,0,(int32_t)c->r[3],0); // 804D6CC0
  if (crb(c,2)) { goto L_804D6CDC; } // 804D6CC4
  if (crb(c,2)) { goto L_804D6CE0; } // 804D6CC8
  c->r[4]=c->r[30]|c->r[30]; // 804D6CCC
  c->r[5]=c->r[1]+0x00000008u; // 804D6CD0
  c->lr=0x804D6CD8u; f_804DB3A0(c); // 804D6CD4
  goto L_804D6CE0; // 804D6CD8
L_804D6CDC:;
  c->r[3]=0u+0x00000000u; // 804D6CDC
L_804D6CE0:;
  W32(c->r[31]+0x00000028u,c->r[3]); // 804D6CE0
  c->r[3]=c->r[31]|c->r[31]; // 804D6CE4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804D6CE8
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D6CEC
  c->r[29]=R32(c->r[1]+0x00000024u); // 804D6CF0
  c->r[28]=R32(c->r[1]+0x00000020u); // 804D6CF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D6CF8
  c->lr=c->r[0]; // 804D6CFC
  c->r[1]=c->r[1]+0x00000030u; // 804D6D00
  return; // 804D6D04
}

// fn_804D6D08
void f_804D6D08(Ctx* __restrict c) {
  trace_call(0x804D6D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D6D08
  c->r[0]=c->lr; // 804D6D0C
  cmps(c,0,(int32_t)c->r[3],0); // 804D6D10
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D6D14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D6D18
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D6D1C
  c->r[30]=c->r[4]|c->r[4]; // 804D6D20
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D6D24
  c->r[29]=c->r[3]|c->r[3]; // 804D6D28
  if (crb(c,2)) { goto L_804D6DC0; } // 804D6D2C
  c->r[31]=R32(c->r[3]+0x00000028u); // 804D6D30
  c->r[4]=0u+0x80720000u; // 804D6D34
  c->r[4]=c->r[4]+0xFFFFA740u; // 804D6D38
  cmps(c,1,(int32_t)c->r[31],0); // 804D6D3C
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D6D40
  if (crb(c,6)) { goto L_804D6D84; } // 804D6D44
  c->r[0]=R8(c->r[31]+0x00000059u); // 804D6D48
  cmps(c,0,(int32_t)c->r[0],0); // 804D6D4C
  if (!crb(c,2)) { goto L_804D6D84; } // 804D6D50
  if (crb(c,6)) { goto L_804D6D7C; } // 804D6D54
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D6D58
  c->r[3]=c->r[31]|c->r[31]; // 804D6D5C
  c->r[4]=0u+0xFFFFFFFFu; // 804D6D60
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D6D64
  c->ctr=c->r[12]; // 804D6D68
  if (true) { c->lr=0x804D6D70u; dispatch(c,c->ctr); } // 804D6D6C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D6D70
  c->r[4]=c->r[31]|c->r[31]; // 804D6D74
  c->lr=0x804D6D7Cu; f_803C4D18(c); // 804D6D78
L_804D6D7C:;
  c->r[0]=0u+0x00000000u; // 804D6D7C
  W32(c->r[29]+0x00000028u,c->r[0]); // 804D6D80
L_804D6D84:;
  c->r[3]=c->r[29]+0x000000E8u; // 804D6D84
  c->lr=0x804D6D8Cu; f_804DFD3C(c); // 804D6D88
  c->r[4]=0u+0x80040000u; // 804D6D8C
  c->r[3]=c->r[29]+0x000000D8u; // 804D6D90
  c->r[4]=c->r[4]+0x00005E50u; // 804D6D94
  c->r[5]=0u+0x00000004u; // 804D6D98
  c->r[6]=0u+0x00000004u; // 804D6D9C
  c->lr=0x804D6DA4u; f_803A9928(c); // 804D6DA0
  c->r[3]=c->r[29]|c->r[29]; // 804D6DA4
  c->r[4]=0u+0x00000000u; // 804D6DA8
  c->lr=0x804D6DB0u; f_804D4A50(c); // 804D6DAC
  cmps(c,0,(int32_t)c->r[30],0); // 804D6DB0
  if (!crb(c,1)) { goto L_804D6DC0; } // 804D6DB4
  c->r[3]=c->r[29]|c->r[29]; // 804D6DB8
  c->lr=0x804D6DC0u; f_803A9400(c); // 804D6DBC
L_804D6DC0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D6DC0
  c->r[3]=c->r[29]|c->r[29]; // 804D6DC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D6DC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D6DCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D6DD0
  c->lr=c->r[0]; // 804D6DD4
  c->r[1]=c->r[1]+0x00000020u; // 804D6DD8
  return; // 804D6DDC
}

// fn_804D6DE0
void f_804D6DE0(Ctx* __restrict c) {
  trace_call(0x804D6DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D6DE0
  c->r[0]=c->lr; // 804D6DE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D6DE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804D6DEC
  W32(c->r[1]+0x00000028u,c->r[30]); // 804D6DF0
  c->r[30]=c->r[3]|c->r[3]; // 804D6DF4
  W32(c->r[1]+0x00000024u,c->r[29]); // 804D6DF8
  W32(c->r[1]+0x00000020u,c->r[28]); // 804D6DFC
  c->r[28]=c->r[4]|c->r[4]; // 804D6E00
  c->r[5]=R32(c->r[3]+0x00000028u); // 804D6E04
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 804D6E08
  c->r[3]=R32(c->r[5]+0x00000038u); // 804D6E0C
  c->r[31]=rotl(c->r[0],4)&0x0000000Fu; // 804D6E10
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 804D6E14
  cmpu(c,0,c->r[31],c->r[0]); // 804D6E18
  if (!crb(c,0)) { goto L_804D6F74; } // 804D6E1C
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 804D6E20
  cmpu(c,0,c->r[31],c->r[0]); // 804D6E24
  if (crb(c,0)) { goto L_804D6E30; } // 804D6E28
  goto L_804D6F74; // 804D6E2C
L_804D6E30:;
  c->r[0]=c->r[31]+0x00000001u; // 804D6E30
  c->r[3]=c->r[5]|c->r[5]; // 804D6E34
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 804D6E38
  c->lr=0x804D6E40u; f_804DC888(c); // 804D6E3C
  c->r[3]=R32(c->r[30]+0x00000028u); // 804D6E40
  c->lr=0x804D6E48u; f_804DC5B0(c); // 804D6E44
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 804D6E48
  c->r[6]=R32(c->r[28]+0x00000000u); // 804D6E4C
  c->r[5]=R32(c->r[28]+0x00000004u); // 804D6E50
  c->r[4]=R16(c->r[28]+0x00000008u); // 804D6E54
  c->r[7]=c->r[3]+c->r[0]; // 804D6E58
  c->r[0]=R16(c->r[28]+0x0000000Au); // 804D6E5C
  W32(c->r[7]+0x00000000u,c->r[6]); // 804D6E60
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D6E64
  W32(c->r[7]+0x00000004u,c->r[5]); // 804D6E68
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6E6C
  W16(c->r[7]+0x00000008u,c->r[4]); // 804D6E70
  c->r[4]=R16(c->r[28]+0x00000014u); // 804D6E74
  W16(c->r[7]+0x0000000Au,c->r[0]); // 804D6E78
  c->r[3]=R16(c->r[28]+0x00000016u); // 804D6E7C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 804D6E80
  c->r[0]=R32(c->r[28]+0x00000018u); // 804D6E84
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804D6E88
  W16(c->r[7]+0x00000014u,c->r[4]); // 804D6E8C
  W16(c->r[7]+0x00000016u,c->r[3]); // 804D6E90
  W32(c->r[7]+0x00000018u,c->r[0]); // 804D6E94
  c->r[3]=R32(c->r[30]+0x00000028u); // 804D6E98
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D6E9C
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 804D6EA0
  c->lr=0x804D6EA8u; f_804DC918(c); // 804D6EA4
  c->r[28]=0u+0x00000000u; // 804D6EA8
  c->r[29]=0u+0x00000001u; // 804D6EAC
  c->r[4]=0u+0x00000004u; // 804D6EB0
  c->r[0]=0u+0x0000003Cu; // 804D6EB4
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 804D6EB8
  c->r[3]=R32(c->r[30]+0x00000028u); // 804D6EBC
  W8(c->r[1]+0x00000008u,c->r[29]); // 804D6EC0
  W8(c->r[1]+0x00000009u,c->r[4]); // 804D6EC4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 804D6EC8
  c->r[0]=R32(c->r[1]+0x00000008u); // 804D6ECC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D6ED0
  c->lr=0x804D6ED8u; f_804DC5E8(c); // 804D6ED4
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 804D6ED8
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 804D6EDC
  c->r[5]=c->r[3]+c->r[0]; // 804D6EE0
  c->r[0]=R8(c->r[1]+0x0000000Du); // 804D6EE4
  W8(c->r[5]+0x00000000u,c->r[4]); // 804D6EE8
  c->r[3]=c->r[30]+0x000000E8u; // 804D6EEC
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 804D6EF0
  W8(c->r[5]+0x00000001u,c->r[0]); // 804D6EF4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 804D6EF8
  W8(c->r[5]+0x00000002u,c->r[4]); // 804D6EFC
  W8(c->r[5]+0x00000003u,c->r[0]); // 804D6F00
  c->r[4]=R32(c->r[30]+0x00000028u); // 804D6F04
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804D6F08
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 804D6F0C
  c->lr=0x804D6F14u; f_804DFE20(c); // 804D6F10
  {uint32_t ea=c->r[2]+0x00001788u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D6F14
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6F18
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804D6F1C
  fcmp(c,0,c->f[0],c->f[1]); // 804D6F20
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804D6F24
  if (!crb(c,2)) { goto L_804D6F3C; } // 804D6F28
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6F2C
  fcmp(c,0,c->f[0],c->f[1]); // 804D6F30
  if (!crb(c,2)) { goto L_804D6F3C; } // 804D6F34
  c->r[28]=c->r[29]|c->r[29]; // 804D6F38
L_804D6F3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804D6F3C
  if (crb(c,2)) { goto L_804D6F74; } // 804D6F40
  c->r[4]=R32(c->r[30]+0x00000028u); // 804D6F44
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804D6F48
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804D6F4C
  cmpu(c,0,c->r[0],0x00000001u); // 804D6F50
  if (!crb(c,2)) { goto L_804D6F74; } // 804D6F54
  c->r[3]=c->r[1]+0x00000010u; // 804D6F58
  c->r[5]=0u+0x00000000u; // 804D6F5C
  c->lr=0x804D6F64u; f_804DDD94(c); // 804D6F60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6F64
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 804D6F68
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D6F6C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 804D6F70
L_804D6F74:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D6F74
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804D6F78
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D6F7C
  c->r[29]=R32(c->r[1]+0x00000024u); // 804D6F80
  c->r[28]=R32(c->r[1]+0x00000020u); // 804D6F84
  c->lr=c->r[0]; // 804D6F88
  c->r[1]=c->r[1]+0x00000030u; // 804D6F8C
  return; // 804D6F90
}

// fn_804D6F94
void f_804D6F94(Ctx* __restrict c) {
  trace_call(0x804D6F94u);
  c->r[3]=c->r[3]+0x000000E8u; // 804D6F94
  f_804DFF0C(c); return; // 804D6F98
}

// fn_804D6F9C
void f_804D6F9C(Ctx* __restrict c) {
  trace_call(0x804D6F9Cu);
  c->r[3]=c->r[3]+0x000000E8u; // 804D6F9C
  f_804DFF58(c); return; // 804D6FA0
}

// fn_804D6FA4
void f_804D6FA4(Ctx* __restrict c) {
  trace_call(0x804D6FA4u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804D6FA4
  c->r[7]=c->r[4]+c->r[0]; // 804D6FA8
  c->r[6]=R8(c->r[7]+0x000000D8u); // 804D6FAC
  c->r[5]=R8(c->r[7]+0x000000D9u); // 804D6FB0
  c->r[4]=R8(c->r[7]+0x000000DAu); // 804D6FB4
  c->r[0]=R8(c->r[7]+0x000000DBu); // 804D6FB8
  W8(c->r[3]+0x00000000u,c->r[6]); // 804D6FBC
  W8(c->r[3]+0x00000001u,c->r[5]); // 804D6FC0
  W8(c->r[3]+0x00000002u,c->r[4]); // 804D6FC4
  W8(c->r[3]+0x00000003u,c->r[0]); // 804D6FC8
  return; // 804D6FCC
}

// fn_804D6FD0
void f_804D6FD0(Ctx* __restrict c) {
  trace_call(0x804D6FD0u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D6FD0
  c->r[6]=R8(c->r[5]+0x00000000u); // 804D6FD4
  c->r[4]=c->r[3]+c->r[0]; // 804D6FD8
  c->r[0]=R8(c->r[5]+0x00000001u); // 804D6FDC
  W8(c->r[4]+0x000000D8u,c->r[6]); // 804D6FE0
  c->r[3]=R8(c->r[5]+0x00000002u); // 804D6FE4
  W8(c->r[4]+0x000000D9u,c->r[0]); // 804D6FE8
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D6FEC
  W8(c->r[4]+0x000000DAu,c->r[3]); // 804D6FF0
  W8(c->r[4]+0x000000DBu,c->r[0]); // 804D6FF4
  return; // 804D6FF8
}

// fn_804D6FFC
void f_804D6FFC(Ctx* __restrict c) {
  trace_call(0x804D6FFCu);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804D6FFC
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D7000
  c->r[3]=c->r[3]+c->r[5]; // 804D7004
  c->r[3]=c->r[3]+c->r[0]; // 804D7008
  c->r[3]=R8(c->r[3]+0x000000D8u); // 804D700C
  return; // 804D7010
}

// fn_804D7014
void f_804D7014(Ctx* __restrict c) {
  trace_call(0x804D7014u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804D7014
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D7018
  c->r[3]=c->r[3]+c->r[6]; // 804D701C
  c->r[3]=c->r[3]+c->r[0]; // 804D7020
  W8(c->r[3]+0x000000D8u,c->r[5]); // 804D7024
  return; // 804D7028
}

// fn_804D702C
void f_804D702C(Ctx* __restrict c) {
  trace_call(0x804D702Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D702C
  c->r[0]=c->lr; // 804D7030
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D7034
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D7038
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D703C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D7040
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D7044
  c->r[28]=c->r[3]|c->r[3]; // 804D7048
  c->r[0]=R32(c->r[3]+0x00000028u); // 804D704C
  cmps(c,0,(int32_t)c->r[0],0); // 804D7050
  if (crb(c,2)) { goto L_804D70E8; } // 804D7054
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7058
  c->r[12]=R32(c->r[12]+0x00000070u); // 804D705C
  c->ctr=c->r[12]; // 804D7060
  if (true) { c->lr=0x804D7068u; dispatch(c,c->ctr); } // 804D7064
  c->r[29]=R8(c->r[28]+0x000000B9u); // 804D7068
  c->r[3]=c->r[28]+0x000000D8u; // 804D706C
  c->r[4]=c->r[29]|c->r[29]; // 804D7070
  c->lr=0x804D7078u; f_804E0054(c); // 804D7074
  c->r[4]=c->r[3]|c->r[3]; // 804D7078
  c->r[3]=R32(c->r[28]+0x00000028u); // 804D707C
  c->r[5]=c->r[29]|c->r[29]; // 804D7080
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7084
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D7088
  c->ctr=c->r[12]; // 804D708C
  if (true) { c->lr=0x804D7094u; dispatch(c,c->ctr); } // 804D7090
  c->r[4]=R8(c->r[28]+0x000000E9u); // 804D7094
  c->r[29]=c->r[3]|c->r[3]; // 804D7098
  c->lr=0x804D70A0u; f_804E0110(c); // 804D709C
  cmps(c,0,(int32_t)c->r[29],0); // 804D70A0
  if (crb(c,2)) { goto L_804D70B0; } // 804D70A4
  c->r[30]=c->r[28]+0x000000D8u; // 804D70A8
  goto L_804D70B4; // 804D70AC
L_804D70B0:;
  c->r[30]=0u+0x00000000u; // 804D70B0
L_804D70B4:;
  c->r[29]=R32(c->r[28]+0x000000ECu); // 804D70B4
  c->r[3]=c->r[28]|c->r[28]; // 804D70B8
  c->r[31]=R8(c->r[28]+0x000000E9u); // 804D70BC
  c->lr=0x804D70C4u; f_804D56A8(c); // 804D70C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804D70C4
  c->r[5]=c->r[31]|c->r[31]; // 804D70C8
  c->r[6]=c->r[29]|c->r[29]; // 804D70CC
  c->r[7]=c->r[30]|c->r[30]; // 804D70D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D70D4
  c->r[3]=c->r[1]+0x00000008u; // 804D70D8
  c->r[4]=c->r[28]+0x0000004Cu; // 804D70DC
  c->r[8]=R8(c->r[28]+0x000000B9u); // 804D70E0
  c->lr=0x804D70E8u; f_804E0754(c); // 804D70E4
L_804D70E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D70E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D70EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D70F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D70F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D70F8
  c->lr=c->r[0]; // 804D70FC
  c->r[1]=c->r[1]+0x00000020u; // 804D7100
  return; // 804D7104
}

// fn_804D7108
void f_804D7108(Ctx* __restrict c) {
  trace_call(0x804D7108u);
  c->r[3]=c->r[13]+0xFFFFE4A8u; // 804D7108
  return; // 804D710C
}

// fn_804D7110
void f_804D7110(Ctx* __restrict c) {
  trace_call(0x804D7110u);
  c->r[0]=c->r[13]+0xFFFFE498u; // 804D7110
  W32(c->r[13]+0xFFFFE4A8u,c->r[0]); // 804D7114
  return; // 804D7118
}

// GetColor__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FRC11_GXColorS10
void f_804D711C(Ctx* __restrict c) {
  trace_call(0x804D711Cu);
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 804D711C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D7120
  cmps(c,0,(int32_t)c->r[5],0); // 804D7124
  if (!crb(c,0)) { goto L_804D7134; } // 804D7128
  c->r[0]=0u+0x00000000u; // 804D712C
  goto L_804D7144; // 804D7130
L_804D7134:;
  cmps(c,0,(int32_t)c->r[5],255); // 804D7134
  c->r[0]=0u+0x000000FFu; // 804D7138
  if (crb(c,1)) { goto L_804D7144; } // 804D713C
  c->r[0]=c->r[5]|c->r[5]; // 804D7140
L_804D7144:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 804D7144
  W8(c->r[1]+0x00000008u,c->r[0]); // 804D7148
  cmps(c,0,(int32_t)c->r[5],0); // 804D714C
  if (!crb(c,0)) { goto L_804D715C; } // 804D7150
  c->r[0]=0u+0x00000000u; // 804D7154
  goto L_804D716C; // 804D7158
L_804D715C:;
  cmps(c,0,(int32_t)c->r[5],255); // 804D715C
  c->r[0]=0u+0x000000FFu; // 804D7160
  if (crb(c,1)) { goto L_804D716C; } // 804D7164
  c->r[0]=c->r[5]|c->r[5]; // 804D7168
L_804D716C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 804D716C
  W8(c->r[1]+0x00000009u,c->r[0]); // 804D7170
  cmps(c,0,(int32_t)c->r[5],0); // 804D7174
  if (!crb(c,0)) { goto L_804D7184; } // 804D7178
  c->r[0]=0u+0x00000000u; // 804D717C
  goto L_804D7194; // 804D7180
L_804D7184:;
  cmps(c,0,(int32_t)c->r[5],255); // 804D7184
  c->r[0]=0u+0x000000FFu; // 804D7188
  if (crb(c,1)) { goto L_804D7194; } // 804D718C
  c->r[0]=c->r[5]|c->r[5]; // 804D7190
L_804D7194:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 804D7194
  W8(c->r[1]+0x0000000Au,c->r[0]); // 804D7198
  cmps(c,0,(int32_t)c->r[4],0); // 804D719C
  if (!crb(c,0)) { goto L_804D71AC; } // 804D71A0
  c->r[0]=0u+0x00000000u; // 804D71A4
  goto L_804D71BC; // 804D71A8
L_804D71AC:;
  cmps(c,0,(int32_t)c->r[4],255); // 804D71AC
  c->r[0]=0u+0x000000FFu; // 804D71B0
  if (crb(c,1)) { goto L_804D71BC; } // 804D71B4
  c->r[0]=c->r[4]|c->r[4]; // 804D71B8
L_804D71BC:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804D71BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 804D71C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D71C4
  c->r[1]=c->r[1]+0x00000010u; // 804D71C8
  return; // 804D71CC
}

// __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet
void f_804D71D0(Ctx* __restrict c) {
  trace_call(0x804D71D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D71D0
  c->r[0]=c->lr; // 804D71D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D71D8
  c->r[11]=c->r[1]+0x00000040u; // 804D71DC
  c->lr=0x804D71E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D71E0
  c->r[28]=c->r[3]|c->r[3]; // 804D71E4
  c->r[29]=c->r[4]|c->r[4]; // 804D71E8
  c->r[30]=c->r[5]|c->r[5]; // 804D71EC
  c->lr=0x804D71F4u; f_804D4918(c); // 804D71F0
  c->r[3]=0u+0x80720000u; // 804D71F4
  c->r[4]=0u+0x800F0000u; // 804D71F8
  c->r[3]=c->r[3]+0xFFFFA7B8u; // 804D71FC
  c->r[5]=0u+0x80040000u; // 804D7200
  W32(c->r[28]+0x00000000u,c->r[3]); // 804D7204
  c->r[3]=c->r[28]+0x000000DCu; // 804D7208
  c->r[4]=c->r[4]+0xFFFF8D84u; // 804D720C
  c->r[5]=c->r[5]+0x00005E50u; // 804D7210
  c->r[6]=0u+0x00000004u; // 804D7214
  c->r[7]=0u+0x00000002u; // 804D7218
  c->lr=0x804D7220u; f_803A9830(c); // 804D721C
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 804D7220
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7224
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 804D7228
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 804D722C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 804D7230
  if (crb(c,2)) { goto L_804D7240; } // 804D7234
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 804D7238
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 804D723C
L_804D7240:;
  c->r[3]=0u+0x55550000u; // 804D7240
  c->r[0]=R8(c->r[28]+0x00000100u); // 804D7244
  c->r[8]=c->r[3]+0x00005556u; // 804D7248
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D724C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 804D7250
  c->r[9]=0u+0x00000000u; // 804D7254
  W32(c->r[28]+0x000000D8u,c->r[9]); // 804D7258
  c->r[3]=c->r[28]+0x00000101u; // 804D725C
  c->r[4]=0u+0x00000000u; // 804D7260
  W16(c->r[28]+0x000000FCu,c->r[9]); // 804D7264
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 804D7268
  W16(c->r[28]+0x000000FEu,c->r[9]); // 804D726C
  c->r[0]=c->r[5]+c->r[0]; // 804D7270
  c->r[5]=0u+0x00000001u; // 804D7274
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 804D7278
  W32(c->r[28]+0x000000E4u,c->r[9]); // 804D727C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 804D7280
  c->r[6]=c->r[0]-c->r[6]; // 804D7284
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D7288
  c->r[0]=c->r[6]+0x00000001u; // 804D728C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 804D7290
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D7294
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 804D7298
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 804D729C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 804D72A0
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 804D72A4
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 804D72A8
  c->r[0]=c->r[6]+c->r[0]; // 804D72AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 804D72B0
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 804D72B4
  W32(c->r[28]+0x000000F8u,c->r[9]); // 804D72B8
  c->r[0]=c->r[7]-c->r[0]; // 804D72BC
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 804D72C0
  c->r[0]=c->r[6]+0x00000003u; // 804D72C4
  W8(c->r[28]+0x00000100u,c->r[0]); // 804D72C8
  c->lr=0x804D72D0u; f_800043EC(c); // 804D72CC
  cmps(c,0,(int32_t)c->r[31],0); // 804D72D0
  if (crb(c,2)) { goto L_804D72F0; } // 804D72D4
  c->r[12]=R32(c->r[28]+0x00000000u); // 804D72D8
  c->r[3]=c->r[28]|c->r[28]; // 804D72DC
  c->r[4]=c->r[31]|c->r[31]; // 804D72E0
  c->r[12]=R32(c->r[12]+0x00000074u); // 804D72E4
  c->ctr=c->r[12]; // 804D72E8
  if (true) { c->lr=0x804D72F0u; dispatch(c,c->ctr); } // 804D72EC
L_804D72F0:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 804D72F0
  cmpu(c,0,c->r[4],0x00000002u); // 804D72F4
  if (crb(c,0)) { goto L_804D7334; } // 804D72F8
  c->r[0]=R32(c->r[28]+0x000000D8u); // 804D72FC
  cmps(c,0,(int32_t)c->r[0],0); // 804D7300
  if (crb(c,2)) { goto L_804D7334; } // 804D7304
  c->r[12]=R32(c->r[28]+0x00000000u); // 804D7308
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 804D730C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 804D7310
  c->r[4]=R32(c->r[29]+0x00000058u); // 804D7314
  c->r[12]=R32(c->r[12]+0x00000080u); // 804D7318
  c->r[3]=c->r[28]|c->r[28]; // 804D731C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804D7320
  c->r[5]=0u+0x00000000u; // 804D7324
  c->r[4]=c->r[29]+c->r[4]; // 804D7328
  c->ctr=c->r[12]; // 804D732C
  if (true) { c->lr=0x804D7334u; dispatch(c,c->ctr); } // 804D7330
L_804D7334:;
  c->r[0]=R8(c->r[29]+0x00000055u); // 804D7334
  c->r[7]=R32(c->r[29]+0x0000005Cu); // 804D7338
  c->r[6]=R32(c->r[29]+0x00000060u); // 804D733C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D7340
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D7344
  c->r[5]=R8(c->r[29]+0x00000054u); // 804D7348
  c->r[4]=R8(c->r[28]+0x00000101u); // 804D734C
  c->r[4]=(rotl(c->r[0],5)&0x00000060u)|(c->r[4]&~0x00000060u); // 804D7350
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7354
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7358
  c->r[0]=R16(c->r[29]+0x00000052u); // 804D735C
  c->r[3]=R32(c->r[30]+0x00000004u); // 804D7360
  W32(c->r[28]+0x000000DCu,c->r[7]); // 804D7364
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804D7368
  c->r[7]=c->r[3]+0x0000000Cu; // 804D736C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804D7370
  W32(c->r[28]+0x000000E0u,c->r[6]); // 804D7374
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[3]);} // 804D7378
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[2]);} // 804D737C
  W8(c->r[28]+0x00000100u,c->r[5]); // 804D7380
  W8(c->r[28]+0x00000101u,c->r[4]); // 804D7384
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 804D7388
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 804D738C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7390
  c->r[0]=R32(c->r[7]+c->r[0]); // 804D7394
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D7398
  c->r[31]=c->r[7]+c->r[0]; // 804D739C
  c->r[4]=c->r[31]|c->r[31]; // 804D73A0
  c->ctr=c->r[12]; // 804D73A4
  if (true) { c->lr=0x804D73ACu; dispatch(c,c->ctr); } // 804D73A8
  cmps(c,0,(int32_t)c->r[3],0); // 804D73AC
  if (crb(c,2)) { goto L_804D73BC; } // 804D73B0
  W32(c->r[28]+0x000000E4u,c->r[3]); // 804D73B4
  goto L_804D743C; // 804D73B8
L_804D73BC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804D73BC
  c->r[4]=0u+0x666F0000u; // 804D73C0
  c->r[5]=c->r[31]|c->r[31]; // 804D73C4
  c->r[6]=0u+0x00000000u; // 804D73C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D73CC
  c->r[4]=c->r[4]+0x00006E74u; // 804D73D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D73D4
  c->ctr=c->r[12]; // 804D73D8
  if (true) { c->lr=0x804D73E0u; dispatch(c,c->ctr); } // 804D73DC
  cmps(c,0,(int32_t)c->r[3],0); // 804D73E0
  c->r[27]=c->r[3]|c->r[3]; // 804D73E4
  if (crb(c,2)) { goto L_804D743C; } // 804D73E8
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D73EC
  c->r[4]=0u+0x0000001Cu; // 804D73F0
  c->lr=0x804D73F8u; f_803C4D08(c); // 804D73F4
  cmps(c,0,(int32_t)c->r[3],0); // 804D73F8
  if (crb(c,2)) { goto L_804D7414; } // 804D73FC
  c->r[31]=c->r[3]|c->r[3]; // 804D7400
  if (crb(c,2)) { goto L_804D7418; } // 804D7404
  c->lr=0x804D740Cu; f_80509B7C(c); // 804D7408
  c->r[31]=c->r[3]|c->r[3]; // 804D740C
  goto L_804D7418; // 804D7410
L_804D7414:;
  c->r[31]=0u+0x00000000u; // 804D7414
L_804D7418:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D7418
  if (crb(c,2)) { goto L_804D743C; } // 804D741C
  c->r[3]=c->r[31]|c->r[31]; // 804D7420
  c->r[4]=c->r[27]|c->r[27]; // 804D7424
  c->lr=0x804D742Cu; f_80509C10(c); // 804D7428
  c->r[0]=R8(c->r[28]+0x00000101u); // 804D742C
  W32(c->r[28]+0x000000E4u,c->r[31]); // 804D7430
  c->r[0]=c->r[0]|0x00000080u; // 804D7434
  W8(c->r[28]+0x00000101u,c->r[0]); // 804D7438
L_804D743C:;
  c->r[0]=R16(c->r[29]+0x00000050u); // 804D743C
  c->r[4]=0u+0x0000005Cu; // 804D7440
  c->r[7]=R32(c->r[30]+0x00000008u); // 804D7444
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D7448
  c->r[3]=R32(c->r[30]+0x00000000u); // 804D744C
  c->r[6]=c->r[7]+c->r[0]; // 804D7450
  c->r[5]=R32(c->r[30]+0x00000004u); // 804D7454
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 804D7458
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804D745C
  W32(c->r[1]+0x00000010u,c->r[3]); // 804D7460
  c->r[27]=c->r[7]+c->r[6]; // 804D7464
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D7468
  W32(c->r[1]+0x00000014u,c->r[5]); // 804D746C
  W32(c->r[1]+0x00000018u,c->r[7]); // 804D7470
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D7474
  c->lr=0x804D747Cu; f_803C4D08(c); // 804D7478
  cmps(c,0,(int32_t)c->r[3],0); // 804D747C
  if (crb(c,2)) { goto L_804D7498; } // 804D7480
  if (crb(c,2)) { goto L_804D749C; } // 804D7484
  c->r[4]=c->r[27]|c->r[27]; // 804D7488
  c->r[5]=c->r[1]+0x00000010u; // 804D748C
  c->lr=0x804D7494u; f_804DB3A0(c); // 804D7490
  goto L_804D749C; // 804D7494
L_804D7498:;
  c->r[3]=0u+0x00000000u; // 804D7498
L_804D749C:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 804D749C
  c->r[11]=c->r[1]+0x00000040u; // 804D74A0
  c->r[3]=c->r[28]|c->r[28]; // 804D74A4
  c->lr=0x804D74ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D74A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D74AC
  c->lr=c->r[0]; // 804D74B0
  c->r[1]=c->r[1]+0x00000040u; // 804D74B4
  return; // 804D74B8
}

// __dt__Q34nw4r3lyt7TextBoxFv
void f_804D74BC(Ctx* __restrict c) {
  trace_call(0x804D74BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D74BC
  c->r[0]=c->lr; // 804D74C0
  cmps(c,0,(int32_t)c->r[3],0); // 804D74C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D74C8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804D74CC
  W32(c->r[1]+0x00000038u,c->r[30]); // 804D74D0
  c->r[30]=c->r[4]|c->r[4]; // 804D74D4
  W32(c->r[1]+0x00000034u,c->r[29]); // 804D74D8
  c->r[29]=c->r[3]|c->r[3]; // 804D74DC
  if (crb(c,2)) { goto L_804D763C; } // 804D74E0
  c->r[0]=R8(c->r[3]+0x00000101u); // 804D74E4
  c->r[4]=0u+0x80720000u; // 804D74E8
  c->r[4]=c->r[4]+0xFFFFA7B8u; // 804D74EC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 804D74F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D74F4
  if (crb(c,2)) { goto L_804D7538; } // 804D74F8
  c->r[31]=R32(c->r[3]+0x000000E4u); // 804D74FC
  cmps(c,0,(int32_t)c->r[31],0); // 804D7500
  if (crb(c,2)) { goto L_804D752C; } // 804D7504
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D7508
  c->r[3]=c->r[31]|c->r[31]; // 804D750C
  c->r[4]=0u+0xFFFFFFFFu; // 804D7510
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D7514
  c->ctr=c->r[12]; // 804D7518
  if (true) { c->lr=0x804D7520u; dispatch(c,c->ctr); } // 804D751C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D7520
  c->r[4]=c->r[31]|c->r[31]; // 804D7524
  c->lr=0x804D752Cu; f_803C4D18(c); // 804D7528
L_804D752C:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 804D752C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 804D7530
  W8(c->r[29]+0x00000101u,c->r[0]); // 804D7534
L_804D7538:;
  c->r[0]=0u+0x00000000u; // 804D7538
  W32(c->r[29]+0x000000E4u,c->r[0]); // 804D753C
  goto L_804D7598; // 804D7540
  if (true) { c->lr=0x804D7548u; dispatch(c,c->ctr); } // 804D7544
  c->r[0]=c->r[3]^0x80000000u; // 804D7548
  c->r[3]=R32(c->r[29]+0x000000E4u); // 804D754C
  c->r[4]=0u+0x43300000u; // 804D7550
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804D7554
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7558
  W32(c->r[1]+0x00000018u,c->r[4]); // 804D755C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D7560
  c->ctr=c->r[12]; // 804D7564
  if (true) { c->lr=0x804D756Cu; dispatch(c,c->ctr); } // 804D7568
  c->r[0]=c->r[3]^0x80000000u; // 804D756C
  W32(c->r[1]+0x00000020u,c->r[4]); // 804D7570
  {uint32_t ea=c->r[2]+0x00001798u; c->f[1]=RF64(ea);} // 804D7574
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D7578
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 804D757C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804D7580
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804D7584
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[2]);} // 804D7588
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804D758C
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 804D7590
  goto L_804D75AC; // 804D7594
L_804D7598:;
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7598
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804D759C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804D75A0
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 804D75A4
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 804D75A8
L_804D75AC:;
  c->r[31]=R32(c->r[29]+0x00000028u); // 804D75AC
  cmps(c,1,(int32_t)c->r[31],0); // 804D75B0
  if (crb(c,6)) { goto L_804D75F4; } // 804D75B4
  c->r[0]=R8(c->r[31]+0x00000059u); // 804D75B8
  cmps(c,0,(int32_t)c->r[0],0); // 804D75BC
  if (!crb(c,2)) { goto L_804D75F4; } // 804D75C0
  if (crb(c,6)) { goto L_804D75EC; } // 804D75C4
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D75C8
  c->r[3]=c->r[31]|c->r[31]; // 804D75CC
  c->r[4]=0u+0xFFFFFFFFu; // 804D75D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D75D4
  c->ctr=c->r[12]; // 804D75D8
  if (true) { c->lr=0x804D75E0u; dispatch(c,c->ctr); } // 804D75DC
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D75E0
  c->r[4]=c->r[31]|c->r[31]; // 804D75E4
  c->lr=0x804D75ECu; f_803C4D18(c); // 804D75E8
L_804D75EC:;
  c->r[0]=0u+0x00000000u; // 804D75EC
  W32(c->r[29]+0x00000028u,c->r[0]); // 804D75F0
L_804D75F4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D75F4
  c->r[3]=c->r[29]|c->r[29]; // 804D75F8
  c->r[12]=R32(c->r[12]+0x00000078u); // 804D75FC
  c->ctr=c->r[12]; // 804D7600
  if (true) { c->lr=0x804D7608u; dispatch(c,c->ctr); } // 804D7604
  c->r[4]=0u+0x80040000u; // 804D7608
  c->r[3]=c->r[29]+0x000000DCu; // 804D760C
  c->r[4]=c->r[4]+0x00005E50u; // 804D7610
  c->r[5]=0u+0x00000004u; // 804D7614
  c->r[6]=0u+0x00000002u; // 804D7618
  c->lr=0x804D7620u; f_803A9928(c); // 804D761C
  c->r[3]=c->r[29]|c->r[29]; // 804D7620
  c->r[4]=0u+0x00000000u; // 804D7624
  c->lr=0x804D762Cu; f_804D4A50(c); // 804D7628
  cmps(c,0,(int32_t)c->r[30],0); // 804D762C
  if (!crb(c,1)) { goto L_804D763C; } // 804D7630
  c->r[3]=c->r[29]|c->r[29]; // 804D7634
  c->lr=0x804D763Cu; f_803A9400(c); // 804D7638
L_804D763C:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804D763C
  c->r[3]=c->r[29]|c->r[29]; // 804D7640
  c->r[30]=R32(c->r[1]+0x00000038u); // 804D7644
  c->r[29]=R32(c->r[1]+0x00000034u); // 804D7648
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D764C
  c->lr=c->r[0]; // 804D7650
  c->r[1]=c->r[1]+0x00000040u; // 804D7654
  return; // 804D7658
}

// fn_804D765C
void f_804D765C(Ctx* __restrict c) {
  trace_call(0x804D765Cu);
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 804D765C
  goto L_804D7664; // 804D7660
L_804D7664:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804D7664
  c->r[7]=c->r[4]+c->r[0]; // 804D7668
  c->r[6]=R8(c->r[7]+0x000000DCu); // 804D766C
  c->r[5]=R8(c->r[7]+0x000000DDu); // 804D7670
  c->r[4]=R8(c->r[7]+0x000000DEu); // 804D7674
  c->r[0]=R8(c->r[7]+0x000000DFu); // 804D7678
  W8(c->r[3]+0x00000000u,c->r[6]); // 804D767C
  W8(c->r[3]+0x00000001u,c->r[5]); // 804D7680
  W8(c->r[3]+0x00000002u,c->r[4]); // 804D7684
  W8(c->r[3]+0x00000003u,c->r[0]); // 804D7688
  return; // 804D768C
}

// fn_804D7690
void f_804D7690(Ctx* __restrict c) {
  trace_call(0x804D7690u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D7690
  c->r[0]=c->lr; // 804D7694
  c->r[8]=R8(c->r[5]+0x00000000u); // 804D7698
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804D769C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D76A0
  c->r[7]=R8(c->r[5]+0x00000001u); // 804D76A4
  c->r[6]=R8(c->r[5]+0x00000002u); // 804D76A8
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D76AC
  c->r[5]=c->r[1]+0x00000008u; // 804D76B0
  W8(c->r[1]+0x00000008u,c->r[8]); // 804D76B4
  W8(c->r[1]+0x00000009u,c->r[7]); // 804D76B8
  W8(c->r[1]+0x0000000Au,c->r[6]); // 804D76BC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804D76C0
  c->lr=0x804D76C8u; f_804D76D8(c); // 804D76C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D76C8
  c->lr=c->r[0]; // 804D76CC
  c->r[1]=c->r[1]+0x00000010u; // 804D76D0
  return; // 804D76D4
}

// fn_804D76D8
void f_804D76D8(Ctx* __restrict c) {
  trace_call(0x804D76D8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D76D8
  c->r[6]=R8(c->r[5]+0x00000000u); // 804D76DC
  c->r[4]=c->r[3]+c->r[0]; // 804D76E0
  c->r[0]=R8(c->r[5]+0x00000001u); // 804D76E4
  W8(c->r[4]+0x000000DCu,c->r[6]); // 804D76E8
  c->r[3]=R8(c->r[5]+0x00000002u); // 804D76EC
  W8(c->r[4]+0x000000DDu,c->r[0]); // 804D76F0
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D76F4
  W8(c->r[4]+0x000000DEu,c->r[3]); // 804D76F8
  W8(c->r[4]+0x000000DFu,c->r[0]); // 804D76FC
  return; // 804D7700
}

// fn_804D7704
void f_804D7704(Ctx* __restrict c) {
  trace_call(0x804D7704u);
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 804D7704
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D7708
  c->r[3]=c->r[3]+c->r[5]; // 804D770C
  c->r[3]=c->r[3]+c->r[0]; // 804D7710
  c->r[3]=R8(c->r[3]+0x000000DCu); // 804D7714
  return; // 804D7718
}

// fn_804D771C
void f_804D771C(Ctx* __restrict c) {
  trace_call(0x804D771Cu);
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 804D771C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D7720
  c->r[3]=c->r[3]+c->r[6]; // 804D7724
  c->r[3]=c->r[3]+c->r[0]; // 804D7728
  W8(c->r[3]+0x000000DCu,c->r[5]); // 804D772C
  return; // 804D7730
}

// DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_804D7734(Ctx* __restrict c) {
  trace_call(0x804D7734u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D7734
  c->r[0]=c->lr; // 804D7738
  W32(c->r[1]+0x00000204u,c->r[0]); // 804D773C
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 804D7740
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 804D7744
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 804D7748
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 804D774C
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 804D7750
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 804D7754
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 804D7758
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 804D775C
  c->r[11]=c->r[1]+0x000001C0u; // 804D7760
  c->lr=0x804D7768u; f_803A9BD0(c); // 804D7764
  c->r[0]=R32(c->r[3]+0x000000D8u); // 804D7768
  c->r[29]=c->r[3]|c->r[3]; // 804D776C
  cmps(c,0,(int32_t)c->r[0],0); // 804D7770
  if (crb(c,2)) { goto L_804D7C64; } // 804D7774
  c->r[0]=R32(c->r[3]+0x000000E4u); // 804D7778
  cmps(c,0,(int32_t)c->r[0],0); // 804D777C
  if (crb(c,2)) { goto L_804D7C64; } // 804D7780
  c->r[0]=R32(c->r[3]+0x00000028u); // 804D7784
  cmps(c,0,(int32_t)c->r[0],0); // 804D7788
  if (!crb(c,2)) { goto L_804D7794; } // 804D778C
  goto L_804D7C64; // 804D7790
L_804D7794:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7794
  c->r[12]=R32(c->r[12]+0x00000070u); // 804D7798
  c->ctr=c->r[12]; // 804D779C
  if (true) { c->lr=0x804D77A4u; dispatch(c,c->ctr); } // 804D77A0
  c->r[3]=c->r[1]+0x000000CCu; // 804D77A4
  c->lr=0x804D77ACu; f_8050D7BC(c); // 804D77A8
  c->r[4]=c->r[29]|c->r[29]; // 804D77AC
  c->r[3]=c->r[1]+0x00000058u; // 804D77B0
  c->r[5]=c->r[1]+0x000000CCu; // 804D77B4
  c->lr=0x804D77BCu; f_804D84B0(c); // 804D77B8
  c->r[0]=R8(c->r[29]+0x000000DCu); // 804D77BC
  c->r[3]=c->r[1]+0x00000030u; // 804D77C0
  c->r[4]=c->r[1]+0x00000020u; // 804D77C4
  W8(c->r[1]+0x00000020u,c->r[0]); // 804D77C8
  c->r[0]=R8(c->r[29]+0x000000DDu); // 804D77CC
  W8(c->r[1]+0x00000021u,c->r[0]); // 804D77D0
  c->r[0]=R8(c->r[29]+0x000000DEu); // 804D77D4
  W8(c->r[1]+0x00000022u,c->r[0]); // 804D77D8
  c->r[0]=R8(c->r[29]+0x000000DFu); // 804D77DC
  W8(c->r[1]+0x00000023u,c->r[0]); // 804D77E0
  c->r[5]=R8(c->r[29]+0x000000B9u); // 804D77E4
  c->lr=0x804D77ECu; f_804E00BC(c); // 804D77E8
  c->r[0]=R8(c->r[29]+0x000000E0u); // 804D77EC
  c->r[3]=c->r[1]+0x0000002Cu; // 804D77F0
  c->r[4]=c->r[1]+0x0000001Cu; // 804D77F4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 804D77F8
  c->r[0]=R8(c->r[29]+0x000000E1u); // 804D77FC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 804D7800
  c->r[0]=R8(c->r[29]+0x000000E2u); // 804D7804
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 804D7808
  c->r[0]=R8(c->r[29]+0x000000E3u); // 804D780C
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 804D7810
  c->r[5]=R8(c->r[29]+0x000000B9u); // 804D7814
  c->lr=0x804D781Cu; f_804E00BC(c); // 804D7818
  c->r[3]=R32(c->r[1]+0x00000030u); // 804D781C
  c->r[4]=0u+0x00000000u; // 804D7820
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804D7824
  cmpu(c,0,c->r[3],c->r[0]); // 804D7828
  if (crb(c,2)) { goto L_804D7834; } // 804D782C
  c->r[4]=0u+0x00000002u; // 804D7830
L_804D7834:;
  W32(c->r[1]+0x000000ECu,c->r[4]); // 804D7834
  c->r[3]=c->r[1]+0x000000CCu; // 804D7838
  c->lr=0x804D7840u; f_8050B164(c); // 804D783C
  c->r[5]=R32(c->r[1]+0x00000030u); // 804D7840
  c->r[3]=c->r[1]+0x000000CCu; // 804D7844
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804D7848
  c->r[4]=c->r[1]+0x00000018u; // 804D784C
  W32(c->r[1]+0x00000018u,c->r[5]); // 804D7850
  c->r[5]=c->r[1]+0x00000014u; // 804D7854
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D7858
  c->lr=0x804D7860u; f_804D7C9C(c); // 804D785C
  c->r[6]=R32(c->r[29]+0x00000028u); // 804D7860
  c->r[3]=c->r[1]+0x00000028u; // 804D7864
  c->r[4]=c->r[1]+0x00000040u; // 804D7868
  c->r[5]=R16(c->r[6]+0x00000010u); // 804D786C
  c->r[0]=R16(c->r[6]+0x00000012u); // 804D7870
  W16(c->r[1]+0x00000040u,c->r[5]); // 804D7874
  W16(c->r[1]+0x00000042u,c->r[0]); // 804D7878
  c->r[5]=R16(c->r[6]+0x00000014u); // 804D787C
  c->r[0]=R16(c->r[6]+0x00000016u); // 804D7880
  W16(c->r[1]+0x00000044u,c->r[5]); // 804D7884
  W16(c->r[1]+0x00000046u,c->r[0]); // 804D7888
  c->lr=0x804D7890u; f_804D711C(c); // 804D788C
  c->r[6]=R32(c->r[29]+0x00000028u); // 804D7890
  c->r[3]=c->r[1]+0x00000024u; // 804D7894
  c->r[4]=c->r[1]+0x00000038u; // 804D7898
  c->r[5]=R16(c->r[6]+0x00000018u); // 804D789C
  c->r[0]=R16(c->r[6]+0x0000001Au); // 804D78A0
  W16(c->r[1]+0x00000038u,c->r[5]); // 804D78A4
  W16(c->r[1]+0x0000003Au,c->r[0]); // 804D78A8
  c->r[5]=R16(c->r[6]+0x0000001Cu); // 804D78AC
  c->r[0]=R16(c->r[6]+0x0000001Eu); // 804D78B0
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 804D78B4
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 804D78B8
  c->lr=0x804D78C0u; f_804D711C(c); // 804D78BC
  c->r[5]=R32(c->r[1]+0x00000028u); // 804D78C0
  c->r[3]=c->r[1]+0x000000CCu; // 804D78C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D78C8
  c->r[4]=c->r[1]+0x00000010u; // 804D78CC
  W32(c->r[1]+0x00000010u,c->r[5]); // 804D78D0
  c->r[5]=c->r[1]+0x0000000Cu; // 804D78D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804D78D8
  c->lr=0x804D78E0u; f_804D7CE0(c); // 804D78DC
  c->r[3]=c->r[1]+0x000000CCu; // 804D78E0
  c->lr=0x804D78E8u; f_8050A0E0(c); // 804D78E4
  c->r[3]=0u+0x00000007u; // 804D78E8
  c->r[4]=0u+0x00000000u; // 804D78EC
  c->r[5]=0u+0x00000000u; // 804D78F0
  c->r[6]=0u+0x00000007u; // 804D78F4
  c->r[7]=0u+0x00000000u; // 804D78F8
  c->lr=0x804D7900u; f_803A788C(c); // 804D78FC
  c->r[0]=R8(c->r[29]+0x00000101u); // 804D7900
  c->r[0]=rotl(c->r[0],27)&0x00000003u; // 804D7904
  cmps(c,0,(int32_t)c->r[0],2); // 804D7908
  if (crb(c,2)) { goto L_804D7990; } // 804D790C
  if (!crb(c,0)) { goto L_804D7924; } // 804D7910
  cmps(c,0,(int32_t)c->r[0],0); // 804D7914
  if (crb(c,2)) { goto L_804D7930; } // 804D7918
  if (!crb(c,0)) { goto L_804D7988; } // 804D791C
  goto L_804D7930; // 804D7920
L_804D7924:;
  cmps(c,0,(int32_t)c->r[0],4); // 804D7924
  if (!crb(c,0)) { goto L_804D7930; } // 804D7928
  goto L_804D7998; // 804D792C
L_804D7930:;
  c->r[3]=0u+0x55550000u; // 804D7930
  c->r[4]=R8(c->r[29]+0x00000100u); // 804D7934
  c->r[0]=c->r[3]+0x00005556u; // 804D7938
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 804D793C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804D7940
  c->r[0]=c->r[3]+c->r[0]; // 804D7944
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 804D7948
  c->r[0]=c->r[4]-c->r[0]; // 804D794C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804D7950
  cmps(c,0,(int32_t)c->r[0],1); // 804D7954
  if (crb(c,2)) { goto L_804D7978; } // 804D7958
  if (!crb(c,0)) { goto L_804D7964; } // 804D795C
  goto L_804D7970; // 804D7960
L_804D7964:;
  cmps(c,0,(int32_t)c->r[0],3); // 804D7964
  if (!crb(c,0)) { goto L_804D7970; } // 804D7968
  goto L_804D7980; // 804D796C
L_804D7970:;
  {uint32_t ea=c->r[2]+0x00001790u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7970
  goto L_804D799C; // 804D7974
L_804D7978:;
  {uint32_t ea=c->r[2]+0x000017A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7978
  goto L_804D799C; // 804D797C
L_804D7980:;
  {uint32_t ea=c->r[2]+0x000017A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7980
  goto L_804D799C; // 804D7984
L_804D7988:;
  {uint32_t ea=c->r[2]+0x00001790u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7988
  goto L_804D799C; // 804D798C
L_804D7990:;
  {uint32_t ea=c->r[2]+0x000017A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7990
  goto L_804D799C; // 804D7994
L_804D7998:;
  {uint32_t ea=c->r[2]+0x000017A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 804D7998
L_804D799C:;
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D799C
  c->r[31]=R32(c->r[29]+0x000000D8u); // 804D79A0
  c->f[3]=-c->f[0]; // 804D79A4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D79A8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D79AC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D79B0
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 804D79B4
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 804D79B8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[3]);} // 804D79BC
  c->r[30]=R16(c->r[29]+0x000000FEu); // 804D79C0
  cmps(c,0,(int32_t)c->r[30],0); // 804D79C4
  if (!crb(c,1)) { goto L_804D7C58; } // 804D79C8
  {uint32_t ea=c->r[2]+0x00001790u; c->f[31]=c->ps1[31]=RF32(ea);} // 804D79CC
  goto L_804D7C50; // 804D79D0
L_804D79D4:;
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D79D4
  c->r[0]=R32(c->r[1]+0x000000F8u); // 804D79D8
  c->r[15]=R8(c->r[1]+0x000000EBu); // 804D79DC
  W32(c->r[1]+0x00000094u,c->r[0]); // 804D79E0
  c->r[0]=R8(c->r[1]+0x000000E9u); // 804D79E4
  W32(c->r[1]+0x00000168u,c->r[15]); // 804D79E8
  c->r[15]=R32(c->r[1]+0x000000ECu); // 804D79EC
  W8(c->r[1]+0x00000085u,c->r[0]); // 804D79F0
  c->r[0]=R32(c->r[1]+0x00000168u); // 804D79F4
  W32(c->r[1]+0x00000130u,c->r[15]); // 804D79F8
  c->r[15]=R32(c->r[1]+0x000000F0u); // 804D79FC
  W8(c->r[1]+0x00000087u,c->r[0]); // 804D7A00
  c->r[0]=R32(c->r[1]+0x00000130u); // 804D7A04
  W32(c->r[1]+0x00000134u,c->r[15]); // 804D7A08
  c->r[15]=R32(c->r[1]+0x000000F4u); // 804D7A0C
  W32(c->r[1]+0x00000088u,c->r[0]); // 804D7A10
  c->r[0]=R32(c->r[1]+0x00000134u); // 804D7A14
  W32(c->r[1]+0x00000138u,c->r[15]); // 804D7A18
  c->r[15]=R32(c->r[1]+0x000000FCu); // 804D7A1C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804D7A20
  c->r[0]=R32(c->r[1]+0x00000138u); // 804D7A24
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 804D7A28
  c->r[15]=R32(c->r[1]+0x00000100u); // 804D7A2C
  W32(c->r[1]+0x00000090u,c->r[0]); // 804D7A30
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 804D7A34
  W32(c->r[1]+0x00000140u,c->r[15]); // 804D7A38
  c->r[15]=R32(c->r[1]+0x00000104u); // 804D7A3C
  W32(c->r[1]+0x00000098u,c->r[0]); // 804D7A40
  c->r[0]=R32(c->r[1]+0x00000140u); // 804D7A44
  W32(c->r[1]+0x00000144u,c->r[15]); // 804D7A48
  c->r[15]=R32(c->r[1]+0x00000108u); // 804D7A4C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 804D7A50
  c->r[0]=R32(c->r[1]+0x00000144u); // 804D7A54
  W32(c->r[1]+0x00000148u,c->r[15]); // 804D7A58
  c->r[15]=R16(c->r[1]+0x0000010Cu); // 804D7A5C
  W32(c->r[1]+0x000000A0u,c->r[0]); // 804D7A60
  c->r[0]=R32(c->r[1]+0x00000148u); // 804D7A64
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 804D7A68
  c->r[15]=R8(c->r[1]+0x0000010Eu); // 804D7A6C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804D7A70
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 804D7A74
  W32(c->r[1]+0x00000150u,c->r[15]); // 804D7A78
  c->r[15]=R8(c->r[1]+0x0000010Fu); // 804D7A7C
  W16(c->r[1]+0x000000A8u,c->r[0]); // 804D7A80
  c->r[0]=R32(c->r[1]+0x00000150u); // 804D7A84
  W32(c->r[1]+0x00000154u,c->r[15]); // 804D7A88
  c->r[15]=R32(c->r[1]+0x00000114u); // 804D7A8C
  W8(c->r[1]+0x000000AAu,c->r[0]); // 804D7A90
  c->r[0]=R32(c->r[1]+0x00000154u); // 804D7A94
  W32(c->r[1]+0x00000158u,c->r[15]); // 804D7A98
  c->r[15]=R32(c->r[1]+0x00000124u); // 804D7A9C
  W8(c->r[1]+0x000000ABu,c->r[0]); // 804D7AA0
  c->r[0]=R32(c->r[1]+0x00000158u); // 804D7AA4
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 804D7AA8
  c->r[15]=R32(c->r[1]+0x00000128u); // 804D7AAC
  W32(c->r[1]+0x000000B0u,c->r[0]); // 804D7AB0
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 804D7AB4
  W32(c->r[1]+0x00000160u,c->r[15]); // 804D7AB8
  c->r[15]=R32(c->r[1]+0x0000012Cu); // 804D7ABC
  W32(c->r[1]+0x000000C0u,c->r[0]); // 804D7AC0
  c->r[0]=R32(c->r[1]+0x00000160u); // 804D7AC4
  c->r[16]=R32(c->r[1]+0x000000CCu); // 804D7AC8
  c->r[17]=R32(c->r[1]+0x000000D0u); // 804D7ACC
  c->r[18]=R8(c->r[1]+0x000000D4u); // 804D7AD0
  c->r[19]=R8(c->r[1]+0x000000D5u); // 804D7AD4
  c->r[20]=R8(c->r[1]+0x000000D6u); // 804D7AD8
  c->r[21]=R8(c->r[1]+0x000000D7u); // 804D7ADC
  c->r[22]=R8(c->r[1]+0x000000D8u); // 804D7AE0
  c->r[23]=R8(c->r[1]+0x000000D9u); // 804D7AE4
  c->r[24]=R8(c->r[1]+0x000000DAu); // 804D7AE8
  c->r[25]=R8(c->r[1]+0x000000DBu); // 804D7AEC
  c->r[26]=R8(c->r[1]+0x000000DCu); // 804D7AF0
  c->r[27]=R8(c->r[1]+0x000000DDu); // 804D7AF4
  c->r[28]=R8(c->r[1]+0x000000DEu); // 804D7AF8
  c->r[12]=R8(c->r[1]+0x000000DFu); // 804D7AFC
  c->r[11]=R8(c->r[1]+0x000000E0u); // 804D7B00
  c->r[10]=R8(c->r[1]+0x000000E1u); // 804D7B04
  c->r[9]=R8(c->r[1]+0x000000E2u); // 804D7B08
  c->r[8]=R8(c->r[1]+0x000000E3u); // 804D7B0C
  c->r[7]=R8(c->r[1]+0x000000E4u); // 804D7B10
  c->r[6]=R8(c->r[1]+0x000000E5u); // 804D7B14
  c->r[5]=R8(c->r[1]+0x000000E6u); // 804D7B18
  c->r[4]=R8(c->r[1]+0x000000E7u); // 804D7B1C
  c->r[3]=R8(c->r[1]+0x000000E8u); // 804D7B20
  c->r[14]=R8(c->r[1]+0x000000EAu); // 804D7B24
  {uint32_t ea=c->r[1]+0x00000110u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D7B28
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D7B2C
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D7B30
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7B34
  W32(c->r[1]+0x000000C4u,c->r[0]); // 804D7B38
  c->r[0]=c->r[15]|c->r[15]; // 804D7B3C
  W32(c->r[1]+0x00000164u,c->r[15]); // 804D7B40
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 804D7B44
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 804D7B48
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 804D7B4C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 804D7B50
  W32(c->r[1]+0x00000068u,c->r[16]); // 804D7B54
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 804D7B58
  W8(c->r[1]+0x00000070u,c->r[18]); // 804D7B5C
  W8(c->r[1]+0x00000071u,c->r[19]); // 804D7B60
  W8(c->r[1]+0x00000072u,c->r[20]); // 804D7B64
  W8(c->r[1]+0x00000073u,c->r[21]); // 804D7B68
  W8(c->r[1]+0x00000074u,c->r[22]); // 804D7B6C
  W8(c->r[1]+0x00000075u,c->r[23]); // 804D7B70
  W8(c->r[1]+0x00000076u,c->r[24]); // 804D7B74
  W8(c->r[1]+0x00000077u,c->r[25]); // 804D7B78
  W8(c->r[1]+0x00000078u,c->r[26]); // 804D7B7C
  W8(c->r[1]+0x00000079u,c->r[27]); // 804D7B80
  W8(c->r[1]+0x0000007Au,c->r[28]); // 804D7B84
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 804D7B88
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 804D7B8C
  W8(c->r[1]+0x0000007Du,c->r[10]); // 804D7B90
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 804D7B94
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 804D7B98
  W8(c->r[1]+0x00000080u,c->r[7]); // 804D7B9C
  W8(c->r[1]+0x00000081u,c->r[6]); // 804D7BA0
  W8(c->r[1]+0x00000082u,c->r[5]); // 804D7BA4
  W8(c->r[1]+0x00000083u,c->r[4]); // 804D7BA8
  W8(c->r[1]+0x00000084u,c->r[3]); // 804D7BAC
  W8(c->r[1]+0x00000086u,c->r[14]); // 804D7BB0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 804D7BB4
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 804D7BB8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 804D7BBC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 804D7BC0
  W32(c->r[1]+0x000000C8u,c->r[0]); // 804D7BC4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 804D7BC8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[31]);} // 804D7BCC
  c->r[5]=c->r[31]|c->r[31]; // 804D7BD0
  c->r[6]=c->r[30]|c->r[30]; // 804D7BD4
  c->r[3]=c->r[1]+0x00000048u; // 804D7BD8
  c->r[4]=c->r[1]+0x00000068u; // 804D7BDC
  c->r[7]=c->r[1]+0x00000008u; // 804D7BE0
  c->lr=0x804D7BE8u; f_804D7D24(c); // 804D7BE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7BE8
  c->r[14]=c->r[3]|c->r[3]; // 804D7BEC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7BF0
  c->r[3]=c->r[1]+0x00000068u; // 804D7BF4
  c->r[4]=0u+0xFFFFFFFFu; // 804D7BF8
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 804D7BFC
  c->lr=0x804D7C04u; f_8050D818(c); // 804D7C00
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 804D7C04
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7C08
  c->r[4]=c->r[31]|c->r[31]; // 804D7C0C
  c->r[5]=c->r[14]|c->r[14]; // 804D7C10
  c->r[3]=c->r[1]+0x000000CCu; // 804D7C14
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 804D7C18
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804D7C1C
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 804D7C20
  c->lr=0x804D7C28u; f_8050D8EC(c); // 804D7C24
  c->r[0]=R8(c->r[1]+0x00000008u); // 804D7C28
  cmps(c,0,(int32_t)c->r[0],0); // 804D7C2C
  if (crb(c,2)) { goto L_804D7C44; } // 804D7C30
  c->r[3]=c->r[1]+0x000000CCu; // 804D7C34
  c->r[4]=c->r[13]+0xFFFFA2D0u; // 804D7C38
  c->r[5]=0u+0x00000001u; // 804D7C3C
  c->lr=0x804D7C44u; f_8050D8EC(c); // 804D7C40
L_804D7C44:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 804D7C44
  c->r[30]=c->r[30]-c->r[14]; // 804D7C48
  c->r[31]=c->r[31]+c->r[0]; // 804D7C4C
L_804D7C50:;
  cmps(c,0,(int32_t)c->r[30],0); // 804D7C50
  if (crb(c,1)) { IRQCHK(c); goto L_804D79D4; } // 804D7C54
L_804D7C58:;
  c->r[3]=c->r[1]+0x000000CCu; // 804D7C58
  c->r[4]=0u+0xFFFFFFFFu; // 804D7C5C
  c->lr=0x804D7C64u; f_8050D818(c); // 804D7C60
L_804D7C64:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 804D7C64
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 804D7C68
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 804D7C6C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 804D7C70
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 804D7C74
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 804D7C78
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 804D7C7C
  c->r[11]=c->r[1]+0x000001C0u; // 804D7C80
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 804D7C84
  c->lr=0x804D7C8Cu; f_803A9C1C(c); // 804D7C88
  c->r[0]=R32(c->r[1]+0x00000204u); // 804D7C8C
  c->lr=c->r[0]; // 804D7C90
  c->r[1]=c->r[1]+0x00000200u; // 804D7C94
  return; // 804D7C98
}

// fn_804D7C9C
void f_804D7C9C(Ctx* __restrict c) {
  trace_call(0x804D7C9Cu);
  c->r[11]=R8(c->r[4]+0x00000000u); // 804D7C9C
  c->r[10]=R8(c->r[4]+0x00000001u); // 804D7CA0
  c->r[9]=R8(c->r[4]+0x00000002u); // 804D7CA4
  c->r[8]=R8(c->r[4]+0x00000003u); // 804D7CA8
  c->r[7]=R8(c->r[5]+0x00000000u); // 804D7CAC
  c->r[6]=R8(c->r[5]+0x00000001u); // 804D7CB0
  c->r[4]=R8(c->r[5]+0x00000002u); // 804D7CB4
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D7CB8
  W8(c->r[3]+0x00000018u,c->r[11]); // 804D7CBC
  W8(c->r[3]+0x00000019u,c->r[10]); // 804D7CC0
  W8(c->r[3]+0x0000001Au,c->r[9]); // 804D7CC4
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 804D7CC8
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 804D7CCC
  W8(c->r[3]+0x0000001Du,c->r[6]); // 804D7CD0
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 804D7CD4
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 804D7CD8
  f_8050B164(c); return; // 804D7CDC
}

// fn_804D7CE0
void f_804D7CE0(Ctx* __restrict c) {
  trace_call(0x804D7CE0u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 804D7CE0
  c->r[10]=R8(c->r[4]+0x00000001u); // 804D7CE4
  c->r[9]=R8(c->r[4]+0x00000002u); // 804D7CE8
  c->r[8]=R8(c->r[4]+0x00000003u); // 804D7CEC
  c->r[7]=R8(c->r[5]+0x00000000u); // 804D7CF0
  c->r[6]=R8(c->r[5]+0x00000001u); // 804D7CF4
  c->r[4]=R8(c->r[5]+0x00000002u); // 804D7CF8
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D7CFC
  W8(c->r[3]+0x00000000u,c->r[11]); // 804D7D00
  W8(c->r[3]+0x00000001u,c->r[10]); // 804D7D04
  W8(c->r[3]+0x00000002u,c->r[9]); // 804D7D08
  W8(c->r[3]+0x00000003u,c->r[8]); // 804D7D0C
  W8(c->r[3]+0x00000004u,c->r[7]); // 804D7D10
  W8(c->r[3]+0x00000005u,c->r[6]); // 804D7D14
  W8(c->r[3]+0x00000006u,c->r[4]); // 804D7D18
  W8(c->r[3]+0x00000007u,c->r[0]); // 804D7D1C
  return; // 804D7D20
}

// CalcLineRectImpl<w>__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FPQ34nw4r2ut4RectPQ34nw4r2ut17TextWriterBase<w>PCwifPb_i
void f_804D7D24(Ctx* __restrict c) {
  trace_call(0x804D7D24u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D7D24
  c->r[0]=c->lr; // 804D7D28
  W32(c->r[1]+0x000000D4u,c->r[0]); // 804D7D2C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 804D7D30
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 804D7D34
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 804D7D38
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 804D7D3C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 804D7D40
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 804D7D44
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 804D7D48
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 804D7D4C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 804D7D50
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 804D7D54
  c->r[11]=c->r[1]+0x00000080u; // 804D7D58
  c->lr=0x804D7D60u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D7D5C
  c->r[0]=0u+0x00000000u; // 804D7D60
  c->r[25]=c->r[3]|c->r[3]; // 804D7D64
  W32(c->r[1]+0x00000040u,c->r[0]); // 804D7D68
  c->f[30]=c->f[1]; // 804D7D6C
  c->r[26]=c->r[4]|c->r[4]; // 804D7D70
  {uint32_t ea=c->r[2]+0x00001790u; c->f[31]=c->ps1[31]=RF32(ea);} // 804D7D74
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D7D78
  c->r[27]=c->r[5]|c->r[5]; // 804D7D7C
  c->r[28]=c->r[6]|c->r[6]; // 804D7D80
  W32(c->r[1]+0x00000048u,c->r[0]); // 804D7D84
  c->r[29]=c->r[7]|c->r[7]; // 804D7D88
  c->r[3]=c->r[1]+0x00000028u; // 804D7D8C
  c->r[31]=0u+0x00000000u; // 804D7D90
  W32(c->r[1]+0x00000038u,c->r[4]); // 804D7D94
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 804D7D98
  c->r[4]=R32(c->r[4]+0x00000048u); // 804D7D9C
  c->lr=0x804D7DA4u; f_804D8104(c); // 804D7DA0
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D7DA4
  c->r[3]=c->r[26]|c->r[26]; // 804D7DA8
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7DAC
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804D7DB0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 804D7DB4
  c->lr=0x804D7DBCu; f_8050D870(c); // 804D7DB8
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7DBC
  fcmp(c,0,c->f[0],c->f[1]); // 804D7DC0
  if (!crb(c,1)) { goto L_804D7DCC; } // 804D7DC4
  goto L_804D7DD0; // 804D7DC8
L_804D7DCC:;
  c->f[1]=c->f[0]; // 804D7DCC
L_804D7DD0:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 804D7DD0
  c->r[3]=c->r[26]|c->r[26]; // 804D7DD4
  c->lr=0x804D7DDCu; f_8050D870(c); // 804D7DD8
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7DDC
  fcmp(c,0,c->f[0],c->f[1]); // 804D7DE0
  if (!crb(c,0)) { goto L_804D7DEC; } // 804D7DE4
  goto L_804D7DF0; // 804D7DE8
L_804D7DEC:;
  c->f[1]=c->f[0]; // 804D7DEC
L_804D7DF0:;
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 804D7DF0
  c->r[0]=0u+0x00000000u; // 804D7DF4
  c->r[3]=c->r[1]+0x00000028u; // 804D7DF8
  c->r[12]=c->r[1]+0x0000002Cu; // 804D7DFC
  W8(c->r[29]+0x00000000u,c->r[0]); // 804D7E00
  W32(c->r[1]+0x00000028u,c->r[27]); // 804D7E04
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D7E08
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D7E0C
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7E10
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7E14
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 804D7E18
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804D7E1C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804D7E20
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804D7E24
  c->lr=0x804D7E2Cu; f_803A9A8C(c); // 804D7E28
  c->r[0]=c->r[0]|0x00000000u; // 804D7E2C
  {uint32_t ea=c->r[2]+0x00001790u; c->f[28]=c->ps1[28]=RF32(ea);} // 804D7E30
  c->r[4]=c->r[3]|c->r[3]; // 804D7E34
  {uint32_t ea=c->r[2]+0x00001798u; c->f[29]=RF64(ea);} // 804D7E38
  c->r[24]=0u+0x43300000u; // 804D7E3C
  goto L_804D804C; // 804D7E40
L_804D7E44:;
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 804D7E44
  cmps(c,0,(int32_t)c->r[5],32); // 804D7E48
  if (!crb(c,0)) { goto L_804D7F68; } // 804D7E4C
  c->r[0]=cntlz(c->r[31]); // 804D7E50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 804D7E54
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804D7E58
  c->r[4]=c->r[1]+0x00000008u; // 804D7E5C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 804D7E60
  c->r[6]=c->r[1]+0x00000038u; // 804D7E64
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 804D7E68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 804D7E6C
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 804D7E70
  W32(c->r[1]+0x00000048u,c->r[0]); // 804D7E74
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[31]);} // 804D7E78
  c->r[3]=R32(c->r[26]+0x00000060u); // 804D7E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7E80
  c->r[12]=R32(c->r[12]+0x00000010u); // 804D7E84
  c->ctr=c->r[12]; // 804D7E88
  if (true) { c->lr=0x804D7E90u; dispatch(c,c->ctr); } // 804D7E8C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 804D7E90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7E94
  W32(c->r[1]+0x00000028u,c->r[0]); // 804D7E98
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7E9C
  fcmp(c,0,c->f[0],c->f[1]); // 804D7EA0
  if (!crb(c,1)) { goto L_804D7EAC; } // 804D7EA4
  goto L_804D7EB0; // 804D7EA8
L_804D7EAC:;
  c->f[1]=c->f[0]; // 804D7EAC
L_804D7EB0:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[1]);} // 804D7EB0
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7EB4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7EB8
  fcmp(c,0,c->f[0],c->f[1]); // 804D7EBC
  if (!crb(c,1)) { goto L_804D7EC8; } // 804D7EC0
  goto L_804D7ECC; // 804D7EC4
L_804D7EC8:;
  c->f[1]=c->f[0]; // 804D7EC8
L_804D7ECC:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 804D7ECC
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7ED0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7ED4
  fcmp(c,0,c->f[0],c->f[1]); // 804D7ED8
  if (!crb(c,0)) { goto L_804D7EE4; } // 804D7EDC
  goto L_804D7EE8; // 804D7EE0
L_804D7EE4:;
  c->f[1]=c->f[0]; // 804D7EE4
L_804D7EE8:;
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 804D7EE8
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7EEC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D7EF0
  fcmp(c,0,c->f[0],c->f[2]); // 804D7EF4
  if (!crb(c,0)) { goto L_804D7F00; } // 804D7EF8
  goto L_804D7F04; // 804D7EFC
L_804D7F00:;
  c->f[2]=c->f[0]; // 804D7F00
L_804D7F04:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D7F04
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7F08
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[2]);} // 804D7F0C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D7F10
  {uint32_t ea=c->r[26]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804D7F14
  fcmp(c,0,c->f[0],c->f[30]); // 804D7F18
  if (!crb(c,1)) { goto L_804D7F2C; } // 804D7F1C
  c->r[0]=0u+0x00000001u; // 804D7F20
  W8(c->r[29]+0x00000000u,c->r[0]); // 804D7F24
  goto L_804D8068; // 804D7F28
L_804D7F2C:;
  cmps(c,0,(int32_t)c->r[3],4); // 804D7F2C
  if (!crb(c,2)) { goto L_804D7F3C; } // 804D7F30
  c->r[3]=c->r[28]|c->r[28]; // 804D7F34
  goto L_804D80C4; // 804D7F38
L_804D7F3C:;
  cmps(c,0,(int32_t)c->r[3],1); // 804D7F3C
  if (!crb(c,2)) { goto L_804D7F4C; } // 804D7F40
  c->r[31]=0u+0x00000000u; // 804D7F44
  goto L_804D8014; // 804D7F48
L_804D7F4C:;
  cmps(c,0,(int32_t)c->r[3],2); // 804D7F4C
  if (!crb(c,2)) { goto L_804D7F5C; } // 804D7F50
  c->r[31]=0u+0x00000001u; // 804D7F54
  goto L_804D8014; // 804D7F58
L_804D7F5C:;
  cmps(c,0,(int32_t)c->r[3],3); // 804D7F5C
  if (crb(c,2)) { goto L_804D8068; } // 804D7F60
  goto L_804D8014; // 804D7F64
L_804D7F68:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D7F68
  if (crb(c,2)) { goto L_804D7F78; } // 804D7F6C
  {uint32_t ea=c->r[26]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7F70
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 804D7F74
L_804D7F78:;
  c->r[0]=R8(c->r[26]+0x00000043u); // 804D7F78
  c->r[31]=0u+0x00000001u; // 804D7F7C
  cmps(c,0,(int32_t)c->r[0],0); // 804D7F80
  if (crb(c,2)) { goto L_804D7F94; } // 804D7F84
  {uint32_t ea=c->r[26]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7F88
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 804D7F8C
  goto L_804D7FCC; // 804D7F90
L_804D7F94:;
  c->r[3]=R32(c->r[26]+0x00000048u); // 804D7F94
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 804D7F98
  {uint32_t ea=c->r[26]+0x00000024u; c->f[27]=c->ps1[27]=RF32(ea);} // 804D7F9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D7FA0
  c->r[12]=R32(c->r[12]+0x00000048u); // 804D7FA4
  c->ctr=c->r[12]; // 804D7FA8
  if (true) { c->lr=0x804D7FB0u; dispatch(c,c->ctr); } // 804D7FAC
  c->r[0]=c->r[3]^0x80000000u; // 804D7FB0
  W32(c->r[1]+0x00000050u,c->r[24]); // 804D7FB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D7FB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 804D7FBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 804D7FC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 804D7FC4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 804D7FC8
L_804D7FCC:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7FCC
  fcmp(c,0,c->f[0],c->f[31]); // 804D7FD0
  if (!crb(c,1)) { goto L_804D7FDC; } // 804D7FD4
  c->f[0]=c->f[31]; // 804D7FD8
L_804D7FDC:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D7FDC
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 804D7FE0
  fcmp(c,0,c->f[2],c->f[31]); // 804D7FE4
  if (!crb(c,0)) { goto L_804D7FF0; } // 804D7FE8
  c->f[2]=c->f[31]; // 804D7FEC
L_804D7FF0:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 804D7FF0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D7FF4
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[2]);} // 804D7FF8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D7FFC
  fcmp(c,0,c->f[0],c->f[30]); // 804D8000
  if (!crb(c,1)) { goto L_804D8014; } // 804D8004
  c->r[0]=0u+0x00000001u; // 804D8008
  W8(c->r[29]+0x00000000u,c->r[0]); // 804D800C
  goto L_804D8068; // 804D8010
L_804D8014:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D8014
  c->r[3]=c->r[1]+0x00000028u; // 804D8018
  c->r[12]=c->r[1]+0x0000002Cu; // 804D801C
  c->lr=0x804D8024u; f_803A9A8C(c); // 804D8020
  c->r[0]=c->r[0]|0x00000000u; // 804D8024
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D8028
  c->r[4]=c->r[3]|c->r[3]; // 804D802C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D8030
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8034
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8038
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 804D803C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804D8040
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804D8044
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804D8048
L_804D804C:;
  c->r[7]=R32(c->r[1]+0x00000028u); // 804D804C
  c->r[3]=c->r[7]-c->r[27]; // 804D8050
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804D8054
  c->r[0]=c->r[0]+c->r[3]; // 804D8058
  c->r[0]=sraw(c,c->r[0],1); // 804D805C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 804D8060
  if (!crb(c,1)) { IRQCHK(c); goto L_804D7E44; } // 804D8064
L_804D8068:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 804D8068
  cmps(c,0,(int32_t)c->r[0],0); // 804D806C
  if (crb(c,2)) { goto L_804D80B0; } // 804D8070
  cmps(c,0,(int32_t)c->r[30],0); // 804D8074
  if (crb(c,2)) { goto L_804D80B0; } // 804D8078
  c->r[3]=c->r[30]-c->r[27]; // 804D807C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D8080
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D8084
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804D8088
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D808C
  c->r[0]=c->r[0]+c->r[3]; // 804D8090
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8094
  c->r[3]=sraw(c,c->r[0],1); // 804D8098
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[3]);} // 804D809C
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 804D80A0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 804D80A4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D80A8
  goto L_804D80C4; // 804D80AC
L_804D80B0:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 804D80B0
  c->r[3]=c->r[0]-c->r[27]; // 804D80B4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804D80B8
  c->r[0]=c->r[0]+c->r[3]; // 804D80BC
  c->r[3]=sraw(c,c->r[0],1); // 804D80C0
L_804D80C4:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 804D80C4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 804D80C8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 804D80CC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 804D80D0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 804D80D4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 804D80D8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 804D80DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 804D80E0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 804D80E4
  c->r[11]=c->r[1]+0x00000080u; // 804D80E8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 804D80EC
  c->lr=0x804D80F4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D80F0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804D80F4
  c->lr=c->r[0]; // 804D80F8
  c->r[1]=c->r[1]+0x000000D0u; // 804D80FC
  return; // 804D8100
}

// GetCharStrmReader__Q34nw4r2ut4FontCFv
void f_804D8104(Ctx* __restrict c) {
  trace_call(0x804D8104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8104
  c->r[0]=0u+0x00000000u; // 804D8108
  c->r[6]=R32(c->r[4]+0x00000004u); // 804D810C
  c->r[5]=R32(c->r[4]+0x00000008u); // 804D8110
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 804D8114
  W32(c->r[1]+0x00000008u,c->r[6]); // 804D8118
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804D811C
  W32(c->r[1]+0x00000010u,c->r[4]); // 804D8120
  W32(c->r[3]+0x00000000u,c->r[0]); // 804D8124
  W32(c->r[3]+0x00000004u,c->r[6]); // 804D8128
  W32(c->r[3]+0x00000008u,c->r[5]); // 804D812C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804D8130
  c->r[1]=c->r[1]+0x00000020u; // 804D8134
  return; // 804D8138
}

// fn_804D813C
void f_804D813C(Ctx* __restrict c) {
  trace_call(0x804D813Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D813C
  c->r[0]=c->lr; // 804D8140
  cmps(c,0,(int32_t)c->r[4],0); // 804D8144
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D8148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D814C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D8150
  c->r[30]=c->r[4]|c->r[4]; // 804D8154
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D8158
  c->r[29]=c->r[3]|c->r[3]; // 804D815C
  if (crb(c,2)) { goto L_804D81E4; } // 804D8160
  c->r[4]=c->r[4]+0x00000001u; // 804D8164
  c->r[0]=R16(c->r[3]+0x000000FCu); // 804D8168
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804D816C
  cmpu(c,0,c->r[31],c->r[0]); // 804D8170
  if (!crb(c,1)) { goto L_804D81E4; } // 804D8174
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D8178
  c->r[12]=R32(c->r[12]+0x00000078u); // 804D817C
  c->ctr=c->r[12]; // 804D8180
  if (true) { c->lr=0x804D8188u; dispatch(c,c->ctr); } // 804D8184
  c->r[0]=c->r[30]+0x00000001u; // 804D8188
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D818C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804D8190
  c->lr=0x804D8198u; f_803C4D08(c); // 804D8194
  cmps(c,0,(int32_t)c->r[3],0); // 804D8198
  if (!crb(c,2)) { goto L_804D81A8; } // 804D819C
  c->r[3]=0u+0x00000000u; // 804D81A0
  goto L_804D81D4; // 804D81A4
L_804D81A8:;
  c->r[0]=c->r[30]+0x00000001u; // 804D81A8
  c->r[5]=c->r[3]|c->r[3]; // 804D81AC
  c->r[4]=0u+0x00000000u; // 804D81B0
  c->ctr=c->r[0]; // 804D81B4
  cmpu(c,0,c->r[0],0x00000000u); // 804D81B8
  if (!crb(c,1)) { goto L_804D81D4; } // 804D81BC
L_804D81C0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804D81C0
  if (crb(c,2)) { goto L_804D81CC; } // 804D81C4
  W16(c->r[5]+0x00000000u,c->r[4]); // 804D81C8
L_804D81CC:;
  c->r[5]=c->r[5]+0x00000002u; // 804D81CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D81C0; } // 804D81D0
L_804D81D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D81D4
  W32(c->r[29]+0x000000D8u,c->r[3]); // 804D81D8
  if (crb(c,2)) { goto L_804D81E4; } // 804D81DC
  W16(c->r[29]+0x000000FCu,c->r[31]); // 804D81E0
L_804D81E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D81E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D81E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D81EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D81F0
  c->lr=c->r[0]; // 804D81F4
  c->r[1]=c->r[1]+0x00000020u; // 804D81F8
  return; // 804D81FC
}

// fn_804D8200
void f_804D8200(Ctx* __restrict c) {
  trace_call(0x804D8200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8200
  c->r[0]=c->lr; // 804D8204
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D8208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D820C
  c->r[31]=c->r[3]|c->r[3]; // 804D8210
  c->r[4]=R32(c->r[3]+0x000000D8u); // 804D8214
  cmps(c,0,(int32_t)c->r[4],0); // 804D8218
  if (crb(c,2)) { goto L_804D8238; } // 804D821C
  if (crb(c,2)) { goto L_804D822C; } // 804D8220
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8224
  c->lr=0x804D822Cu; f_803C4D18(c); // 804D8228
L_804D822C:;
  c->r[0]=0u+0x00000000u; // 804D822C
  W32(c->r[31]+0x000000D8u,c->r[0]); // 804D8230
  W16(c->r[31]+0x000000FCu,c->r[0]); // 804D8234
L_804D8238:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D8238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D823C
  c->lr=c->r[0]; // 804D8240
  c->r[1]=c->r[1]+0x00000010u; // 804D8244
  return; // 804D8248
}

// fn_804D824C
void f_804D824C(Ctx* __restrict c) {
  trace_call(0x804D824Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D824C
  c->r[0]=c->lr; // 804D8250
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D8254
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D8258
  c->r[31]=c->r[3]|c->r[3]; // 804D825C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D8260
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D8264
  c->r[29]=c->r[5]|c->r[5]; // 804D8268
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D826C
  c->r[28]=c->r[4]|c->r[4]; // 804D8270
  c->r[3]=c->r[28]|c->r[28]; // 804D8274
  c->lr=0x804D827Cu; f_803B62F0(c); // 804D8278
  c->r[6]=R32(c->r[31]+0x000000D8u); // 804D827C
  cmps(c,0,(int32_t)c->r[6],0); // 804D8280
  if (!crb(c,2)) { goto L_804D8290; } // 804D8284
  c->r[3]=0u+0x00000000u; // 804D8288
  goto L_804D8308; // 804D828C
L_804D8290:;
  c->r[4]=R16(c->r[31]+0x000000FCu); // 804D8290
  c->r[0]=cntlz(c->r[4]); // 804D8294
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804D8298
  c->r[5]=rotl(c->r[0],27)&0x00000001u; // 804D829C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 804D82A0
  c->r[4]=0u-c->r[5]; // 804D82A4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 804D82A8
  c->r[0]=c->r[0]&~c->r[4]; // 804D82AC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 804D82B0
  cmpu(c,0,c->r[29],c->r[0]); // 804D82B4
  if (crb(c,0)) { goto L_804D82C4; } // 804D82B8
  c->r[3]=0u+0x00000000u; // 804D82BC
  goto L_804D8308; // 804D82C0
L_804D82C4:;
  c->r[0]=c->r[0]-c->r[29]; // 804D82C4
  c->r[30]=c->r[3]|c->r[3]; // 804D82C8
  cmpu(c,0,c->r[3],c->r[0]); // 804D82CC
  if (!crb(c,1)) { goto L_804D82D8; } // 804D82D0
  c->r[30]=c->r[0]|c->r[0]; // 804D82D4
L_804D82D8:;
  c->r[0]=rotl(c->r[29],1)&0x0001FFFEu; // 804D82D8
  c->r[4]=c->r[28]|c->r[28]; // 804D82DC
  c->r[3]=c->r[6]+c->r[0]; // 804D82E0
  c->r[5]=rotl(c->r[30],1)&0xFFFFFFFEu; // 804D82E4
  c->lr=0x804D82ECu; f_802DC484(c); // 804D82E8
  c->r[0]=c->r[29]+c->r[30]; // 804D82EC
  c->r[4]=R32(c->r[31]+0x000000D8u); // 804D82F0
  W16(c->r[31]+0x000000FEu,c->r[0]); // 804D82F4
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 804D82F8
  c->r[5]=0u+0x00000000u; // 804D82FC
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 804D8300
  W16(c->r[4]+c->r[0],c->r[5]); // 804D8304
L_804D8308:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D8308
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D830C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D8310
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D8314
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D8318
  c->lr=c->r[0]; // 804D831C
  c->r[1]=c->r[1]+0x00000020u; // 804D8320
  return; // 804D8324
}

// fn_804D8328
void f_804D8328(Ctx* __restrict c) {
  trace_call(0x804D8328u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8328
  c->r[0]=c->lr; // 804D832C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D8330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D8334
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D8338
  c->r[30]=c->r[5]|c->r[5]; // 804D833C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D8340
  c->r[29]=c->r[3]|c->r[3]; // 804D8344
  c->r[8]=R32(c->r[3]+0x000000D8u); // 804D8348
  cmps(c,0,(int32_t)c->r[8],0); // 804D834C
  if (!crb(c,2)) { goto L_804D835C; } // 804D8350
  c->r[3]=0u+0x00000000u; // 804D8354
  goto L_804D83D0; // 804D8358
L_804D835C:;
  c->r[3]=R16(c->r[3]+0x000000FCu); // 804D835C
  c->r[0]=cntlz(c->r[3]); // 804D8360
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804D8364
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 804D8368
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804D836C
  c->r[3]=0u-c->r[7]; // 804D8370
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 804D8374
  c->r[0]=c->r[0]&~c->r[3]; // 804D8378
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 804D837C
  cmpu(c,0,c->r[5],c->r[0]); // 804D8380
  if (crb(c,0)) { goto L_804D8390; } // 804D8384
  c->r[3]=0u+0x00000000u; // 804D8388
  goto L_804D83D0; // 804D838C
L_804D8390:;
  c->r[0]=c->r[0]-c->r[5]; // 804D8390
  c->r[31]=c->r[6]|c->r[6]; // 804D8394
  cmpu(c,0,c->r[6],c->r[0]); // 804D8398
  if (!crb(c,1)) { goto L_804D83A4; } // 804D839C
  c->r[31]=c->r[0]|c->r[0]; // 804D83A0
L_804D83A4:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 804D83A4
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 804D83A8
  c->r[3]=c->r[8]+c->r[0]; // 804D83AC
  c->lr=0x804D83B4u; f_802DC484(c); // 804D83B0
  c->r[0]=c->r[30]+c->r[31]; // 804D83B4
  c->r[4]=R32(c->r[29]+0x000000D8u); // 804D83B8
  W16(c->r[29]+0x000000FEu,c->r[0]); // 804D83BC
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 804D83C0
  c->r[5]=0u+0x00000000u; // 804D83C4
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 804D83C8
  W16(c->r[4]+c->r[0],c->r[5]); // 804D83CC
L_804D83D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D83D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D83D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D83D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D83DC
  c->lr=c->r[0]; // 804D83E0
  c->r[1]=c->r[1]+0x00000020u; // 804D83E4
  return; // 804D83E8
}

// fn_804D83EC
void f_804D83EC(Ctx* __restrict c) {
  trace_call(0x804D83ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D83EC
  c->r[0]=c->lr; // 804D83F0
  cmps(c,0,(int32_t)c->r[3],0); // 804D83F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D83F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804D83FC
  c->r[31]=c->r[3]|c->r[3]; // 804D8400
  if (crb(c,2)) { goto L_804D8414; } // 804D8404
  cmps(c,0,(int32_t)c->r[4],0); // 804D8408
  if (!crb(c,1)) { goto L_804D8414; } // 804D840C
  c->lr=0x804D8414u; f_803A9400(c); // 804D8410
L_804D8414:;
  c->r[3]=c->r[31]|c->r[31]; // 804D8414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804D8418
  c->r[0]=R32(c->r[1]+0x00000014u); // 804D841C
  c->lr=c->r[0]; // 804D8420
  c->r[1]=c->r[1]+0x00000010u; // 804D8424
  return; // 804D8428
}

// LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_804D842C(Ctx* __restrict c) {
  trace_call(0x804D842Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D842C
  c->r[0]=c->lr; // 804D8430
  c->r[5]=c->r[3]|c->r[3]; // 804D8434
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D8438
  c->r[0]=R8(c->r[4]+0x00000050u); // 804D843C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 804D8440
  if (crb(c,2)) { goto L_804D845C; } // 804D8444
  c->r[3]=c->r[4]+0x00000004u; // 804D8448
  c->r[4]=c->r[5]+0x00000084u; // 804D844C
  c->r[5]=c->r[1]+0x00000008u; // 804D8450
  c->lr=0x804D8458u; f_80382F60(c); // 804D8454
  goto L_804D8468; // 804D8458
L_804D845C:;
  c->r[3]=c->r[3]+0x00000084u; // 804D845C
  c->r[4]=c->r[1]+0x00000008u; // 804D8460
  c->lr=0x804D8468u; f_80382F2C(c); // 804D8464
L_804D8468:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D8468
  c->r[3]=c->r[1]+0x00000008u; // 804D846C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8470
  c->r[4]=0u+0x00000000u; // 804D8474
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8478
  c->f[2]=-c->f[2]; // 804D847C
  c->f[1]=-c->f[1]; // 804D8480
  c->f[0]=-c->f[0]; // 804D8484
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804D8488
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804D848C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804D8490
  c->lr=0x804D8498u; f_803A8540(c); // 804D8494
  c->r[3]=0u+0x00000000u; // 804D8498
  c->lr=0x804D84A0u; f_803A8648(c); // 804D849C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D84A0
  c->lr=c->r[0]; // 804D84A4
  c->r[1]=c->r[1]+0x00000040u; // 804D84A8
  return; // 804D84AC
}

// GetTextDrawRect__Q34nw4r3lyt7TextBoxCFPQ34nw4r2ut17TextWriterBase<w>
void f_804D84B0(Ctx* __restrict c) {
  trace_call(0x804D84B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D84B0
  c->r[0]=c->lr; // 804D84B4
  {uint32_t ea=c->r[2]+0x00001790u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D84B8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804D84BC
  c->r[0]=R32(c->r[4]+0x000000E4u); // 804D84C0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 804D84C4
  c->r[31]=c->r[5]|c->r[5]; // 804D84C8
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D84CC
  W32(c->r[1]+0x00000098u,c->r[30]); // 804D84D0
  c->r[30]=c->r[4]|c->r[4]; // 804D84D4
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D84D8
  W32(c->r[1]+0x00000094u,c->r[29]); // 804D84DC
  c->r[29]=c->r[3]|c->r[3]; // 804D84E0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804D84E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804D84E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804D84EC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D84F0
  c->r[3]=c->r[31]|c->r[31]; // 804D84F4
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 804D84F8
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 804D84FC
  W32(c->r[5]+0x00000048u,c->r[0]); // 804D8500
  c->lr=0x804D8508u; f_8050AB38(c); // 804D8504
  c->r[0]=R32(c->r[30]+0x000000F8u); // 804D8508
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D850C
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8510
  cmps(c,0,(int32_t)c->r[0],0); // 804D8514
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 804D8518
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 804D851C
  if (crb(c,2)) { goto L_804D8528; } // 804D8520
  W32(c->r[31]+0x00000060u,c->r[0]); // 804D8524
L_804D8528:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 804D8528
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D852C
  W8(c->r[1]+0x00000020u,c->r[0]); // 804D8530
  c->r[6]=R16(c->r[30]+0x000000FEu); // 804D8534
  c->r[0]=R8(c->r[31]+0x00000001u); // 804D8538
  c->r[5]=R32(c->r[30]+0x000000D8u); // 804D853C
  W8(c->r[1]+0x00000021u,c->r[0]); // 804D8540
  c->r[0]=R8(c->r[31]+0x00000002u); // 804D8544
  W8(c->r[1]+0x00000022u,c->r[0]); // 804D8548
  c->r[0]=R8(c->r[31]+0x00000003u); // 804D854C
  W8(c->r[1]+0x00000023u,c->r[0]); // 804D8550
  c->r[0]=R8(c->r[31]+0x00000004u); // 804D8554
  W8(c->r[1]+0x00000024u,c->r[0]); // 804D8558
  c->r[0]=R8(c->r[31]+0x00000005u); // 804D855C
  W8(c->r[1]+0x00000025u,c->r[0]); // 804D8560
  c->r[0]=R8(c->r[31]+0x00000006u); // 804D8564
  W8(c->r[1]+0x00000026u,c->r[0]); // 804D8568
  c->r[0]=R8(c->r[31]+0x00000007u); // 804D856C
  W8(c->r[1]+0x00000027u,c->r[0]); // 804D8570
  c->r[0]=R8(c->r[31]+0x00000008u); // 804D8574
  W8(c->r[1]+0x00000028u,c->r[0]); // 804D8578
  c->r[0]=R8(c->r[31]+0x00000009u); // 804D857C
  W8(c->r[1]+0x00000029u,c->r[0]); // 804D8580
  c->r[0]=R8(c->r[31]+0x0000000Au); // 804D8584
  W8(c->r[1]+0x0000002Au,c->r[0]); // 804D8588
  c->r[0]=R8(c->r[31]+0x0000000Bu); // 804D858C
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 804D8590
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 804D8594
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 804D8598
  c->r[0]=R8(c->r[31]+0x0000000Du); // 804D859C
  W8(c->r[1]+0x0000002Du,c->r[0]); // 804D85A0
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 804D85A4
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 804D85A8
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 804D85AC
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 804D85B0
  c->r[0]=R8(c->r[31]+0x00000010u); // 804D85B4
  W8(c->r[1]+0x00000030u,c->r[0]); // 804D85B8
  c->r[0]=R8(c->r[31]+0x00000011u); // 804D85BC
  W8(c->r[1]+0x00000031u,c->r[0]); // 804D85C0
  c->r[0]=R8(c->r[31]+0x00000012u); // 804D85C4
  W8(c->r[1]+0x00000032u,c->r[0]); // 804D85C8
  c->r[0]=R8(c->r[31]+0x00000013u); // 804D85CC
  W8(c->r[1]+0x00000033u,c->r[0]); // 804D85D0
  c->r[0]=R8(c->r[31]+0x00000014u); // 804D85D4
  W8(c->r[1]+0x00000034u,c->r[0]); // 804D85D8
  c->r[0]=R8(c->r[31]+0x00000015u); // 804D85DC
  W8(c->r[1]+0x00000035u,c->r[0]); // 804D85E0
  c->r[0]=R8(c->r[31]+0x00000016u); // 804D85E4
  W8(c->r[1]+0x00000036u,c->r[0]); // 804D85E8
  c->r[0]=R8(c->r[31]+0x00000017u); // 804D85EC
  W8(c->r[1]+0x00000037u,c->r[0]); // 804D85F0
  c->r[0]=R8(c->r[31]+0x00000018u); // 804D85F4
  W8(c->r[1]+0x00000038u,c->r[0]); // 804D85F8
  c->r[0]=R8(c->r[31]+0x00000019u); // 804D85FC
  W8(c->r[1]+0x00000039u,c->r[0]); // 804D8600
  c->r[0]=R8(c->r[31]+0x0000001Au); // 804D8604
  W8(c->r[1]+0x0000003Au,c->r[0]); // 804D8608
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 804D860C
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 804D8610
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 804D8614
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 804D8618
  c->r[0]=R8(c->r[31]+0x0000001Du); // 804D861C
  W8(c->r[1]+0x0000003Du,c->r[0]); // 804D8620
  c->r[0]=R8(c->r[31]+0x0000001Eu); // 804D8624
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 804D8628
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 804D862C
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 804D8630
  c->r[0]=R32(c->r[31]+0x00000020u); // 804D8634
  W32(c->r[1]+0x00000040u,c->r[0]); // 804D8638
  c->r[3]=R32(c->r[31]+0x00000024u); // 804D863C
  c->r[0]=R32(c->r[31]+0x00000028u); // 804D8640
  W32(c->r[1]+0x00000044u,c->r[3]); // 804D8644
  W32(c->r[1]+0x00000048u,c->r[0]); // 804D8648
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 804D864C
  c->r[0]=R32(c->r[31]+0x00000030u); // 804D8650
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 804D8654
  W32(c->r[1]+0x00000050u,c->r[0]); // 804D8658
  c->r[0]=R32(c->r[31]+0x00000034u); // 804D865C
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D8660
  c->r[3]=R32(c->r[31]+0x00000038u); // 804D8664
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 804D8668
  W32(c->r[1]+0x00000058u,c->r[3]); // 804D866C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804D8670
  c->r[0]=R8(c->r[31]+0x00000040u); // 804D8674
  W8(c->r[1]+0x00000060u,c->r[0]); // 804D8678
  c->r[0]=R8(c->r[31]+0x00000041u); // 804D867C
  W8(c->r[1]+0x00000061u,c->r[0]); // 804D8680
  c->r[0]=R8(c->r[31]+0x00000042u); // 804D8684
  W8(c->r[1]+0x00000062u,c->r[0]); // 804D8688
  c->r[0]=R8(c->r[31]+0x00000043u); // 804D868C
  W8(c->r[1]+0x00000063u,c->r[0]); // 804D8690
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8694
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804D8698
  c->r[0]=R32(c->r[31]+0x00000048u); // 804D869C
  W32(c->r[1]+0x00000068u,c->r[0]); // 804D86A0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D86A4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 804D86A8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D86AC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 804D86B0
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D86B4
  c->r[3]=c->r[29]|c->r[29]; // 804D86B8
  c->r[4]=c->r[1]+0x00000020u; // 804D86BC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 804D86C0
  c->r[0]=R32(c->r[31]+0x00000058u); // 804D86C4
  W32(c->r[1]+0x00000078u,c->r[0]); // 804D86C8
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 804D86CC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804D86D0
  c->r[0]=R32(c->r[31]+0x00000060u); // 804D86D4
  W32(c->r[1]+0x00000080u,c->r[0]); // 804D86D8
  c->lr=0x804D86E0u; f_804D8834(c); // 804D86DC
  c->r[3]=c->r[1]+0x00000020u; // 804D86E0
  c->r[4]=0u+0xFFFFFFFFu; // 804D86E4
  c->lr=0x804D86ECu; f_8050D818(c); // 804D86E8
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D86EC
  c->r[3]=c->r[30]|c->r[30]; // 804D86F0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D86F4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D86F8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D86FC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804D8700
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D8704
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804D8708
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804D870C
  c->lr=0x804D8714u; f_804D56A8(c); // 804D8710
  c->r[5]=0u+0x55550000u; // 804D8714
  c->r[6]=R8(c->r[30]+0x00000100u); // 804D8718
  c->r[0]=c->r[5]+0x00005556u; // 804D871C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804D8720
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 804D8724
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D8728
  W32(c->r[1]+0x00000010u,c->r[3]); // 804D872C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 804D8730
  W32(c->r[1]+0x00000014u,c->r[4]); // 804D8734
  c->r[0]=c->r[5]+c->r[0]; // 804D8738
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 804D873C
  c->r[0]=c->r[6]-c->r[0]; // 804D8740
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804D8744
  cmps(c,0,(int32_t)c->r[0],1); // 804D8748
  if (crb(c,2)) { goto L_804D876C; } // 804D874C
  if (!crb(c,0)) { goto L_804D8758; } // 804D8750
  goto L_804D8764; // 804D8754
L_804D8758:;
  cmps(c,0,(int32_t)c->r[0],3); // 804D8758
  if (!crb(c,0)) { goto L_804D8764; } // 804D875C
  goto L_804D8774; // 804D8760
L_804D8764:;
  {uint32_t ea=c->r[2]+0x00001790u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D8764
  goto L_804D8778; // 804D8768
L_804D876C:;
  {uint32_t ea=c->r[2]+0x000017A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D876C
  goto L_804D8778; // 804D8770
L_804D8774:;
  {uint32_t ea=c->r[2]+0x000017A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D8774
L_804D8778:;
  c->r[3]=0u+0x55550000u; // 804D8778
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D877C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8780
  c->r[0]=c->r[3]+0x00005556u; // 804D8784
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 804D8788
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D878C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804D8790
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 804D8794
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804D8798
  c->r[0]=c->r[3]+c->r[0]; // 804D879C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804D87A0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804D87A4
  cmps(c,0,(int32_t)c->r[0],1); // 804D87A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804D87AC
  if (crb(c,2)) { goto L_804D87D0; } // 804D87B0
  if (!crb(c,0)) { goto L_804D87BC; } // 804D87B4
  goto L_804D87C8; // 804D87B8
L_804D87BC:;
  cmps(c,0,(int32_t)c->r[0],3); // 804D87BC
  if (!crb(c,0)) { goto L_804D87C8; } // 804D87C0
  goto L_804D87D8; // 804D87C4
L_804D87C8:;
  {uint32_t ea=c->r[2]+0x00001790u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D87C8
  goto L_804D87DC; // 804D87CC
L_804D87D0:;
  {uint32_t ea=c->r[2]+0x000017A0u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D87D0
  goto L_804D87DC; // 804D87D4
L_804D87D8:;
  {uint32_t ea=c->r[2]+0x000017A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D87D8
L_804D87DC:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D87DC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804D87E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D87E4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804D87E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D87EC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 804D87F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D87F4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D87F8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[5]); // 804D87FC
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 804D8800
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804D8804
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 804D8808
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 804D880C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804D8810
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 804D8814
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 804D8818
  c->r[30]=R32(c->r[1]+0x00000098u); // 804D881C
  c->r[29]=R32(c->r[1]+0x00000094u); // 804D8820
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804D8824
  c->lr=c->r[0]; // 804D8828
  c->r[1]=c->r[1]+0x000000A0u; // 804D882C
  return; // 804D8830
}

// fn_804D8834
void f_804D8834(Ctx* __restrict c) {
  trace_call(0x804D8834u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8834
  c->r[0]=c->lr; // 804D8838
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D883C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 804D8840
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 804D8844
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 804D8848
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 804D884C
  c->f[30]=c->f[1]; // 804D8850
  {uint32_t ea=c->r[2]+0x00001790u; c->f[31]=c->ps1[31]=RF32(ea);} // 804D8854
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804D8858
  c->r[31]=c->r[6]|c->r[6]; // 804D885C
  W32(c->r[1]+0x00000028u,c->r[30]); // 804D8860
  c->r[30]=c->r[5]|c->r[5]; // 804D8864
  W32(c->r[1]+0x00000024u,c->r[29]); // 804D8868
  c->r[29]=c->r[4]|c->r[4]; // 804D886C
  W32(c->r[1]+0x00000020u,c->r[28]); // 804D8870
  c->r[28]=c->r[3]|c->r[3]; // 804D8874
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 804D8878
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 804D887C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 804D8880
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 804D8884
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[31]);} // 804D8888
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[31]);} // 804D888C
L_804D8890:;
  c->f[1]=c->f[30]; // 804D8890
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 804D8894
  c->r[4]=c->r[29]|c->r[29]; // 804D8898
  c->r[5]=c->r[30]|c->r[30]; // 804D889C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 804D88A0
  c->r[6]=c->r[31]|c->r[31]; // 804D88A4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 804D88A8
  c->r[3]=c->r[1]+0x00000010u; // 804D88AC
  c->r[7]=c->r[1]+0x00000008u; // 804D88B0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 804D88B4
  c->lr=0x804D88BCu; f_804D7D24(c); // 804D88B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D88BC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804D88C0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D88C4
  c->r[30]=c->r[30]+c->r[0]; // 804D88C8
  c->r[31]=c->r[31]-c->r[3]; // 804D88CC
  fcmp(c,0,c->f[0],c->f[1]); // 804D88D0
  if (!crb(c,1)) { goto L_804D88DC; } // 804D88D4
  goto L_804D88E0; // 804D88D8
L_804D88DC:;
  c->f[1]=c->f[0]; // 804D88DC
L_804D88E0:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 804D88E0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D88E4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D88E8
  fcmp(c,0,c->f[0],c->f[1]); // 804D88EC
  if (!crb(c,1)) { goto L_804D88F8; } // 804D88F0
  goto L_804D88FC; // 804D88F4
L_804D88F8:;
  c->f[1]=c->f[0]; // 804D88F8
L_804D88FC:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 804D88FC
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8900
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8904
  fcmp(c,0,c->f[0],c->f[1]); // 804D8908
  if (!crb(c,0)) { goto L_804D8914; } // 804D890C
  goto L_804D8918; // 804D8910
L_804D8914:;
  c->f[1]=c->f[0]; // 804D8914
L_804D8918:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804D8918
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D891C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8920
  fcmp(c,0,c->f[0],c->f[1]); // 804D8924
  if (!crb(c,0)) { goto L_804D8930; } // 804D8928
  goto L_804D8934; // 804D892C
L_804D8930:;
  c->f[1]=c->f[0]; // 804D8930
L_804D8934:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 804D8934
  c->r[0]=R8(c->r[1]+0x00000008u); // 804D8938
  cmps(c,0,(int32_t)c->r[0],0); // 804D893C
  if (crb(c,2)) { goto L_804D89D0; } // 804D8940
  c->f[1]=c->f[30]; // 804D8944
  c->r[4]=c->r[29]|c->r[29]; // 804D8948
  c->r[3]=c->r[1]+0x00000010u; // 804D894C
  c->r[7]=c->r[1]+0x00000008u; // 804D8950
  c->r[5]=c->r[13]+0xFFFFA2D0u; // 804D8954
  c->r[6]=0u+0x00000001u; // 804D8958
  c->lr=0x804D8960u; f_804D7D24(c); // 804D895C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8960
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8964
  fcmp(c,0,c->f[0],c->f[1]); // 804D8968
  if (!crb(c,1)) { goto L_804D8974; } // 804D896C
  goto L_804D8978; // 804D8970
L_804D8974:;
  c->f[1]=c->f[0]; // 804D8974
L_804D8978:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 804D8978
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D897C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8980
  fcmp(c,0,c->f[0],c->f[1]); // 804D8984
  if (!crb(c,1)) { goto L_804D8990; } // 804D8988
  goto L_804D8994; // 804D898C
L_804D8990:;
  c->f[1]=c->f[0]; // 804D8990
L_804D8994:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 804D8994
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8998
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D899C
  fcmp(c,0,c->f[0],c->f[1]); // 804D89A0
  if (!crb(c,0)) { goto L_804D89AC; } // 804D89A4
  goto L_804D89B0; // 804D89A8
L_804D89AC:;
  c->f[1]=c->f[0]; // 804D89AC
L_804D89B0:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 804D89B0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D89B4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D89B8
  fcmp(c,0,c->f[0],c->f[1]); // 804D89BC
  if (!crb(c,0)) { goto L_804D89C8; } // 804D89C0
  goto L_804D89CC; // 804D89C4
L_804D89C8:;
  c->f[1]=c->f[0]; // 804D89C8
L_804D89CC:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 804D89CC
L_804D89D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804D89D0
  if (crb(c,1)) { IRQCHK(c); goto L_804D8890; } // 804D89D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 804D89D8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 804D89DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 804D89E0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 804D89E4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804D89E8
  c->r[30]=R32(c->r[1]+0x00000028u); // 804D89EC
  c->r[29]=R32(c->r[1]+0x00000024u); // 804D89F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 804D89F4
  c->r[28]=R32(c->r[1]+0x00000020u); // 804D89F8
  c->lr=c->r[0]; // 804D89FC
  c->r[1]=c->r[1]+0x00000050u; // 804D8A00
  return; // 804D8A04
}

// fn_804D8A08
void f_804D8A08(Ctx* __restrict c) {
  trace_call(0x804D8A08u);
  c->r[3]=c->r[13]+0xFFFFE4B0u; // 804D8A08
  return; // 804D8A0C
}

// fn_804D8A10
void f_804D8A10(Ctx* __restrict c) {
  trace_call(0x804D8A10u);
  c->r[0]=c->r[13]+0xFFFFE498u; // 804D8A10
  W32(c->r[13]+0xFFFFE4B0u,c->r[0]); // 804D8A14
  return; // 804D8A18
}

// __ct__Q34nw4r3lyt6WindowFPCQ44nw4r3lyt3res6WindowRCQ34nw4r3lyt11ResBlockSet
void f_804D8A1C(Ctx* __restrict c) {
  trace_call(0x804D8A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8A1C
  c->r[0]=c->lr; // 804D8A20
  W32(c->r[1]+0x00000054u,c->r[0]); // 804D8A24
  c->r[11]=c->r[1]+0x00000050u; // 804D8A28
  c->lr=0x804D8A30u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D8A2C
  c->r[25]=c->r[3]|c->r[3]; // 804D8A30
  c->r[26]=c->r[4]|c->r[4]; // 804D8A34
  c->r[27]=c->r[5]|c->r[5]; // 804D8A38
  c->lr=0x804D8A40u; f_804D4918(c); // 804D8A3C
  c->r[3]=0u+0x80720000u; // 804D8A40
  c->r[4]=0u+0x800F0000u; // 804D8A44
  c->r[3]=c->r[3]+0xFFFFA87Cu; // 804D8A48
  c->r[5]=0u+0x80040000u; // 804D8A4C
  c->r[28]=c->r[25]+0x000000E8u; // 804D8A50
  W32(c->r[25]+0x00000000u,c->r[3]); // 804D8A54
  c->r[3]=c->r[28]|c->r[28]; // 804D8A58
  c->r[4]=c->r[4]+0xFFFF8D84u; // 804D8A5C
  c->r[5]=c->r[5]+0x00005E50u; // 804D8A60
  c->r[6]=0u+0x00000004u; // 804D8A64
  c->r[7]=0u+0x00000004u; // 804D8A68
  c->lr=0x804D8A70u; f_803A9830(c); // 804D8A6C
  c->r[3]=c->r[28]+0x00000010u; // 804D8A70
  c->lr=0x804D8A78u; f_804DFD28(c); // 804D8A74
  c->r[0]=R32(c->r[26]+0x00000060u); // 804D8A78
  c->r[28]=0u+0x00000008u; // 804D8A7C
  c->r[30]=c->r[26]+c->r[0]; // 804D8A80
  c->r[0]=R8(c->r[30]+0x00000012u); // 804D8A84
  cmpu(c,0,c->r[0],0x00000008u); // 804D8A88
  if (crb(c,1)) { goto L_804D8A94; } // 804D8A8C
  c->r[28]=c->r[0]|c->r[0]; // 804D8A90
L_804D8A94:;
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[4]); // 804D8A94
  if (crb(c,2)) { goto L_804D8AA4; } // 804D8A98
  c->r[3]=c->r[25]+0x000000F8u; // 804D8A9C
  c->lr=0x804D8AA4u; f_804DFD8C(c); // 804D8AA0
L_804D8AA4:;
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D8AA4
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[5]); // 804D8AA8
  {uint32_t ea=c->r[26]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D8AAC
  {uint32_t ea=c->r[26]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D8AB0
  {uint32_t ea=c->r[26]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D8AB4
  c->r[6]=R32(c->r[30]+0x00000000u); // 804D8AB8
  c->r[4]=R32(c->r[30]+0x00000004u); // 804D8ABC
  c->r[3]=R32(c->r[30]+0x00000008u); // 804D8AC0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 804D8AC4
  c->r[7]=R32(c->r[27]+0x00000008u); // 804D8AC8
  {uint32_t ea=c->r[25]+0x000000D8u; WF32(ea,c->f[3]);} // 804D8ACC
  c->r[29]=c->r[7]+0x0000000Cu; // 804D8AD0
  {uint32_t ea=c->r[25]+0x000000DCu; WF32(ea,c->f[2]);} // 804D8AD4
  {uint32_t ea=c->r[25]+0x000000E0u; WF32(ea,c->f[1]);} // 804D8AD8
  {uint32_t ea=c->r[25]+0x000000E4u; WF32(ea,c->f[0]);} // 804D8ADC
  W32(c->r[25]+0x000000E8u,c->r[6]); // 804D8AE0
  W32(c->r[25]+0x000000ECu,c->r[4]); // 804D8AE4
  W32(c->r[25]+0x000000F0u,c->r[3]); // 804D8AE8
  W32(c->r[25]+0x000000F4u,c->r[0]); // 804D8AEC
  if (crb(c,2)) { goto L_804D8B0C; } // 804D8AF0
  c->r[0]=R8(c->r[25]+0x000000F8u); // 804D8AF4
  cmps(c,0,(int32_t)c->r[0],0); // 804D8AF8
  if (crb(c,2)) { goto L_804D8B0C; } // 804D8AFC
  c->r[3]=c->r[25]+0x000000F8u; // 804D8B00
  c->r[4]=c->r[30]+0x00000014u; // 804D8B04
  c->lr=0x804D8B0Cu; f_804DFFC0(c); // 804D8B08
L_804D8B0C:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 804D8B0C
  c->r[4]=0u+0x0000005Cu; // 804D8B10
  c->r[7]=R32(c->r[27]+0x00000008u); // 804D8B14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D8B18
  c->r[3]=R32(c->r[27]+0x00000000u); // 804D8B1C
  c->r[6]=R32(c->r[29]+c->r[0]); // 804D8B20
  c->r[5]=R32(c->r[27]+0x00000004u); // 804D8B24
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 804D8B28
  c->r[28]=c->r[7]+c->r[6]; // 804D8B2C
  W32(c->r[1]+0x00000018u,c->r[3]); // 804D8B30
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8B34
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 804D8B38
  W32(c->r[1]+0x00000020u,c->r[7]); // 804D8B3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D8B40
  c->lr=0x804D8B48u; f_803C4D08(c); // 804D8B44
  cmps(c,0,(int32_t)c->r[3],0); // 804D8B48
  if (crb(c,2)) { goto L_804D8B64; } // 804D8B4C
  if (crb(c,2)) { goto L_804D8B68; } // 804D8B50
  c->r[4]=c->r[28]|c->r[28]; // 804D8B54
  c->r[5]=c->r[1]+0x00000018u; // 804D8B58
  c->lr=0x804D8B60u; f_804DB3A0(c); // 804D8B5C
  goto L_804D8B68; // 804D8B60
L_804D8B64:;
  c->r[3]=0u+0x00000000u; // 804D8B64
L_804D8B68:;
  c->r[30]=R8(c->r[26]+0x0000005Cu); // 804D8B68
  c->r[28]=0u+0x00000000u; // 804D8B6C
  W32(c->r[25]+0x00000028u,c->r[3]); // 804D8B70
  cmps(c,0,(int32_t)c->r[30],0); // 804D8B74
  W8(c->r[25]+0x00000104u,c->r[28]); // 804D8B78
  W32(c->r[25]+0x00000100u,c->r[28]); // 804D8B7C
  if (crb(c,2)) { goto L_804D8C84; } // 804D8B80
  W8(c->r[25]+0x00000104u,c->r[28]); // 804D8B84
  c->r[4]=rotl(c->r[30],3)&0x000007F8u; // 804D8B88
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8B8C
  c->lr=0x804D8B94u; f_803C4D08(c); // 804D8B90
  cmps(c,0,(int32_t)c->r[3],0); // 804D8B94
  if (!crb(c,2)) { goto L_804D8BA4; } // 804D8B98
  c->r[3]=0u+0x00000000u; // 804D8B9C
  goto L_804D8BCC; // 804D8BA0
L_804D8BA4:;
  c->r[4]=c->r[3]|c->r[3]; // 804D8BA4
  c->ctr=c->r[30]; // 804D8BA8
  cmpu(c,0,c->r[30],0x00000000u); // 804D8BAC
  if (!crb(c,1)) { goto L_804D8BCC; } // 804D8BB0
L_804D8BB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804D8BB4
  if (crb(c,2)) { goto L_804D8BC4; } // 804D8BB8
  W8(c->r[4]+0x00000000u,c->r[28]); // 804D8BBC
  W32(c->r[4]+0x00000004u,c->r[28]); // 804D8BC0
L_804D8BC4:;
  c->r[4]=c->r[4]+0x00000008u; // 804D8BC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804D8BB4; } // 804D8BC8
L_804D8BCC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804D8BCC
  W32(c->r[25]+0x00000100u,c->r[3]); // 804D8BD0
  if (crb(c,2)) { goto L_804D8BDC; } // 804D8BD4
  W8(c->r[25]+0x00000104u,c->r[30]); // 804D8BD8
L_804D8BDC:;
  c->r[0]=R32(c->r[26]+0x00000064u); // 804D8BDC
  c->r[28]=0u+0x00000000u; // 804D8BE0
  c->r[30]=0u+0x00000000u; // 804D8BE4
  c->r[31]=c->r[26]+c->r[0]; // 804D8BE8
  goto L_804D8C78; // 804D8BEC
L_804D8BF0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 804D8BF0
  c->r[4]=0u+0x0000005Cu; // 804D8BF4
  c->r[3]=R32(c->r[25]+0x00000100u); // 804D8BF8
  c->r[6]=c->r[26]+c->r[0]; // 804D8BFC
  c->r[0]=R16(c->r[26]+c->r[0]); // 804D8C00
  c->r[5]=R8(c->r[6]+0x00000002u); // 804D8C04
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D8C08
  c->r[7]=R32(c->r[27]+0x00000008u); // 804D8C0C
  W8(c->r[3]+c->r[30],c->r[5]); // 804D8C10
  c->r[3]=R32(c->r[27]+0x00000000u); // 804D8C14
  c->r[6]=R32(c->r[29]+c->r[0]); // 804D8C18
  c->r[5]=R32(c->r[27]+0x00000004u); // 804D8C1C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 804D8C20
  c->r[24]=c->r[7]+c->r[6]; // 804D8C24
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D8C28
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8C2C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804D8C30
  W32(c->r[1]+0x00000010u,c->r[7]); // 804D8C34
  W32(c->r[1]+0x00000014u,c->r[0]); // 804D8C38
  c->lr=0x804D8C40u; f_803C4D08(c); // 804D8C3C
  cmps(c,0,(int32_t)c->r[3],0); // 804D8C40
  if (crb(c,2)) { goto L_804D8C5C; } // 804D8C44
  if (crb(c,2)) { goto L_804D8C60; } // 804D8C48
  c->r[4]=c->r[24]|c->r[24]; // 804D8C4C
  c->r[5]=c->r[1]+0x00000008u; // 804D8C50
  c->lr=0x804D8C58u; f_804DB3A0(c); // 804D8C54
  goto L_804D8C60; // 804D8C58
L_804D8C5C:;
  c->r[3]=0u+0x00000000u; // 804D8C5C
L_804D8C60:;
  c->r[0]=R32(c->r[25]+0x00000100u); // 804D8C60
  c->r[31]=c->r[31]+0x00000004u; // 804D8C64
  c->r[28]=c->r[28]+0x00000001u; // 804D8C68
  c->r[4]=c->r[0]+c->r[30]; // 804D8C6C
  c->r[30]=c->r[30]+0x00000008u; // 804D8C70
  W32(c->r[4]+0x00000004u,c->r[3]); // 804D8C74
L_804D8C78:;
  c->r[0]=R8(c->r[25]+0x00000104u); // 804D8C78
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 804D8C7C
  if (crb(c,0)) { IRQCHK(c); goto L_804D8BF0; } // 804D8C80
L_804D8C84:;
  c->r[11]=c->r[1]+0x00000050u; // 804D8C84
  c->r[3]=c->r[25]|c->r[25]; // 804D8C88
  c->lr=0x804D8C90u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D8C8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 804D8C90
  c->lr=c->r[0]; // 804D8C94
  c->r[1]=c->r[1]+0x00000050u; // 804D8C98
  return; // 804D8C9C
}

// __dt__Q34nw4r3lyt6WindowFv
void f_804D8CA0(Ctx* __restrict c) {
  trace_call(0x804D8CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8CA0
  c->r[0]=c->lr; // 804D8CA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D8CA8
  c->r[11]=c->r[1]+0x00000030u; // 804D8CAC
  c->lr=0x804D8CB4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D8CB0
  cmps(c,0,(int32_t)c->r[3],0); // 804D8CB4
  c->r[25]=c->r[3]|c->r[3]; // 804D8CB8
  c->r[26]=c->r[4]|c->r[4]; // 804D8CBC
  if (crb(c,2)) { goto L_804D8DC8; } // 804D8CC0
  c->r[31]=R32(c->r[3]+0x00000100u); // 804D8CC4
  c->r[4]=0u+0x80720000u; // 804D8CC8
  c->r[4]=c->r[4]+0xFFFFA87Cu; // 804D8CCC
  c->r[30]=R8(c->r[3]+0x00000104u); // 804D8CD0
  cmps(c,0,(int32_t)c->r[31],0); // 804D8CD4
  W32(c->r[3]+0x00000000u,c->r[4]); // 804D8CD8
  if (crb(c,2)) { goto L_804D8D40; } // 804D8CDC
  c->r[27]=c->r[31]|c->r[31]; // 804D8CE0
  c->r[28]=0u+0x00000000u; // 804D8CE4
  goto L_804D8D2C; // 804D8CE8
L_804D8CEC:;
  cmps(c,0,(int32_t)c->r[27],0); // 804D8CEC
  if (crb(c,2)) { goto L_804D8D24; } // 804D8CF0
  c->r[29]=R32(c->r[27]+0x00000004u); // 804D8CF4
  cmps(c,0,(int32_t)c->r[29],0); // 804D8CF8
  if (crb(c,2)) { goto L_804D8D24; } // 804D8CFC
  c->r[12]=R32(c->r[29]+0x00000000u); // 804D8D00
  c->r[3]=c->r[29]|c->r[29]; // 804D8D04
  c->r[4]=0u+0xFFFFFFFFu; // 804D8D08
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D8D0C
  c->ctr=c->r[12]; // 804D8D10
  if (true) { c->lr=0x804D8D18u; dispatch(c,c->ctr); } // 804D8D14
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8D18
  c->r[4]=c->r[29]|c->r[29]; // 804D8D1C
  c->lr=0x804D8D24u; f_803C4D18(c); // 804D8D20
L_804D8D24:;
  c->r[27]=c->r[27]+0x00000008u; // 804D8D24
  c->r[28]=c->r[28]+0x00000001u; // 804D8D28
L_804D8D2C:;
  cmpu(c,0,c->r[28],c->r[30]); // 804D8D2C
  if (crb(c,0)) { IRQCHK(c); goto L_804D8CEC; } // 804D8D30
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8D34
  c->r[4]=c->r[31]|c->r[31]; // 804D8D38
  c->lr=0x804D8D40u; f_803C4D18(c); // 804D8D3C
L_804D8D40:;
  c->r[27]=R32(c->r[25]+0x00000028u); // 804D8D40
  cmps(c,1,(int32_t)c->r[27],0); // 804D8D44
  if (crb(c,6)) { goto L_804D8D88; } // 804D8D48
  c->r[0]=R8(c->r[27]+0x00000059u); // 804D8D4C
  cmps(c,0,(int32_t)c->r[0],0); // 804D8D50
  if (!crb(c,2)) { goto L_804D8D88; } // 804D8D54
  if (crb(c,6)) { goto L_804D8D80; } // 804D8D58
  c->r[12]=R32(c->r[27]+0x00000000u); // 804D8D5C
  c->r[3]=c->r[27]|c->r[27]; // 804D8D60
  c->r[4]=0u+0xFFFFFFFFu; // 804D8D64
  c->r[12]=R32(c->r[12]+0x00000008u); // 804D8D68
  c->ctr=c->r[12]; // 804D8D6C
  if (true) { c->lr=0x804D8D74u; dispatch(c,c->ctr); } // 804D8D70
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804D8D74
  c->r[4]=c->r[27]|c->r[27]; // 804D8D78
  c->lr=0x804D8D80u; f_803C4D18(c); // 804D8D7C
L_804D8D80:;
  c->r[0]=0u+0x00000000u; // 804D8D80
  W32(c->r[25]+0x00000028u,c->r[0]); // 804D8D84
L_804D8D88:;
  c->r[3]=c->r[25]+0x000000F8u; // 804D8D88
  c->lr=0x804D8D90u; f_804DFD3C(c); // 804D8D8C
  c->r[3]=addc(c,c->r[25],0x000000E8u,0); cr0(c,c->r[3]); // 804D8D90
  if (crb(c,2)) { goto L_804D8DAC; } // 804D8D94
  c->r[4]=0u+0x80040000u; // 804D8D98
  c->r[5]=0u+0x00000004u; // 804D8D9C
  c->r[4]=c->r[4]+0x00005E50u; // 804D8DA0
  c->r[6]=0u+0x00000004u; // 804D8DA4
  c->lr=0x804D8DACu; f_803A9928(c); // 804D8DA8
L_804D8DAC:;
  c->r[3]=c->r[25]|c->r[25]; // 804D8DAC
  c->r[4]=0u+0x00000000u; // 804D8DB0
  c->lr=0x804D8DB8u; f_804D4A50(c); // 804D8DB4
  cmps(c,0,(int32_t)c->r[26],0); // 804D8DB8
  if (!crb(c,1)) { goto L_804D8DC8; } // 804D8DBC
  c->r[3]=c->r[25]|c->r[25]; // 804D8DC0
  c->lr=0x804D8DC8u; f_803A9400(c); // 804D8DC4
L_804D8DC8:;
  c->r[11]=c->r[1]+0x00000030u; // 804D8DC8
  c->r[3]=c->r[25]|c->r[25]; // 804D8DCC
  c->lr=0x804D8DD4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D8DD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D8DD4
  c->lr=c->r[0]; // 804D8DD8
  c->r[1]=c->r[1]+0x00000030u; // 804D8DDC
  return; // 804D8DE0
}

// FindMaterialByName__Q34nw4r3lyt6WindowFPCcb
void f_804D8DE4(Ctx* __restrict c) {
  trace_call(0x804D8DE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8DE4
  c->r[0]=c->lr; // 804D8DE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D8DEC
  c->r[11]=c->r[1]+0x00000020u; // 804D8DF0
  c->lr=0x804D8DF8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D8DF4
  c->r[6]=R32(c->r[3]+0x00000028u); // 804D8DF8
  c->r[27]=c->r[3]|c->r[3]; // 804D8DFC
  c->r[28]=c->r[4]|c->r[4]; // 804D8E00
  c->r[29]=c->r[5]|c->r[5]; // 804D8E04
  cmps(c,0,(int32_t)c->r[6],0); // 804D8E08
  if (crb(c,2)) { goto L_804D8E28; } // 804D8E0C
  c->r[3]=c->r[6]+0x00000044u; // 804D8E10
  c->lr=0x804D8E18u; f_804DFCD4(c); // 804D8E14
  cmps(c,0,(int32_t)c->r[3],0); // 804D8E18
  if (crb(c,2)) { goto L_804D8E28; } // 804D8E1C
  c->r[3]=R32(c->r[27]+0x00000028u); // 804D8E20
  goto L_804D8EC8; // 804D8E24
L_804D8E28:;
  c->r[31]=0u+0x00000000u; // 804D8E28
  c->r[30]=0u+0x00000000u; // 804D8E2C
  goto L_804D8E70; // 804D8E30
L_804D8E34:;
  c->r[0]=R32(c->r[27]+0x00000100u); // 804D8E34
  c->r[4]=c->r[28]|c->r[28]; // 804D8E38
  c->r[3]=c->r[0]+c->r[30]; // 804D8E3C
  c->r[3]=R32(c->r[3]+0x00000004u); // 804D8E40
  c->r[3]=c->r[3]+0x00000044u; // 804D8E44
  c->lr=0x804D8E4Cu; f_804DFCD4(c); // 804D8E48
  cmps(c,0,(int32_t)c->r[3],0); // 804D8E4C
  if (crb(c,2)) { goto L_804D8E68; } // 804D8E50
  c->r[3]=R32(c->r[27]+0x00000100u); // 804D8E54
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 804D8E58
  c->r[3]=c->r[3]+c->r[0]; // 804D8E5C
  c->r[3]=R32(c->r[3]+0x00000004u); // 804D8E60
  goto L_804D8EC8; // 804D8E64
L_804D8E68:;
  c->r[30]=c->r[30]+0x00000008u; // 804D8E68
  c->r[31]=c->r[31]+0x00000001u; // 804D8E6C
L_804D8E70:;
  c->r[0]=R8(c->r[27]+0x00000104u); // 804D8E70
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804D8E74
  if (crb(c,0)) { IRQCHK(c); goto L_804D8E34; } // 804D8E78
  cmps(c,0,(int32_t)c->r[29],0); // 804D8E7C
  if (crb(c,2)) { goto L_804D8EC4; } // 804D8E80
  c->r[31]=R32(c->r[27]+0x00000014u); // 804D8E84
  c->r[30]=c->r[27]+0x00000014u; // 804D8E88
  goto L_804D8EBC; // 804D8E8C
L_804D8E90:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 804D8E90
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 804D8E94
  c->r[4]=c->r[28]|c->r[28]; // 804D8E98
  c->r[5]=c->r[29]|c->r[29]; // 804D8E9C
  c->r[12]=R32(c->r[12]+0x00000040u); // 804D8EA0
  c->ctr=c->r[12]; // 804D8EA4
  if (true) { c->lr=0x804D8EACu; dispatch(c,c->ctr); } // 804D8EA8
  cmps(c,0,(int32_t)c->r[3],0); // 804D8EAC
  if (crb(c,2)) { goto L_804D8EB8; } // 804D8EB0
  goto L_804D8EC8; // 804D8EB4
L_804D8EB8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804D8EB8
L_804D8EBC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804D8EBC
  if (!crb(c,2)) { IRQCHK(c); goto L_804D8E90; } // 804D8EC0
L_804D8EC4:;
  c->r[3]=0u+0x00000000u; // 804D8EC4
L_804D8EC8:;
  c->r[11]=c->r[1]+0x00000020u; // 804D8EC8
  c->lr=0x804D8ED0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D8ECC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D8ED0
  c->lr=c->r[0]; // 804D8ED4
  c->r[1]=c->r[1]+0x00000020u; // 804D8ED8
  return; // 804D8EDC
}

// fn_804D8EE0
void f_804D8EE0(Ctx* __restrict c) {
  trace_call(0x804D8EE0u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804D8EE0
  c->r[7]=c->r[4]+c->r[0]; // 804D8EE4
  c->r[6]=R8(c->r[7]+0x000000E8u); // 804D8EE8
  c->r[5]=R8(c->r[7]+0x000000E9u); // 804D8EEC
  c->r[4]=R8(c->r[7]+0x000000EAu); // 804D8EF0
  c->r[0]=R8(c->r[7]+0x000000EBu); // 804D8EF4
  W8(c->r[3]+0x00000000u,c->r[6]); // 804D8EF8
  W8(c->r[3]+0x00000001u,c->r[5]); // 804D8EFC
  W8(c->r[3]+0x00000002u,c->r[4]); // 804D8F00
  W8(c->r[3]+0x00000003u,c->r[0]); // 804D8F04
  return; // 804D8F08
}

// fn_804D8F0C
void f_804D8F0C(Ctx* __restrict c) {
  trace_call(0x804D8F0Cu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D8F0C
  c->r[6]=R8(c->r[5]+0x00000000u); // 804D8F10
  c->r[4]=c->r[3]+c->r[0]; // 804D8F14
  c->r[0]=R8(c->r[5]+0x00000001u); // 804D8F18
  W8(c->r[4]+0x000000E8u,c->r[6]); // 804D8F1C
  c->r[3]=R8(c->r[5]+0x00000002u); // 804D8F20
  W8(c->r[4]+0x000000E9u,c->r[0]); // 804D8F24
  c->r[0]=R8(c->r[5]+0x00000003u); // 804D8F28
  W8(c->r[4]+0x000000EAu,c->r[3]); // 804D8F2C
  W8(c->r[4]+0x000000EBu,c->r[0]); // 804D8F30
  return; // 804D8F34
}

// fn_804D8F38
void f_804D8F38(Ctx* __restrict c) {
  trace_call(0x804D8F38u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804D8F38
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D8F3C
  c->r[3]=c->r[3]+c->r[5]; // 804D8F40
  c->r[3]=c->r[3]+c->r[0]; // 804D8F44
  c->r[3]=R8(c->r[3]+0x000000E8u); // 804D8F48
  return; // 804D8F4C
}

// fn_804D8F50
void f_804D8F50(Ctx* __restrict c) {
  trace_call(0x804D8F50u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 804D8F50
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804D8F54
  c->r[3]=c->r[3]+c->r[6]; // 804D8F58
  c->r[3]=c->r[3]+c->r[0]; // 804D8F5C
  W8(c->r[3]+0x000000E8u,c->r[5]); // 804D8F60
  return; // 804D8F64
}

// fn_804D8F68
void f_804D8F68(Ctx* __restrict c) {
  trace_call(0x804D8F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D8F68
  c->r[0]=c->lr; // 804D8F6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804D8F70
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804D8F74
  c->r[31]=c->r[3]|c->r[3]; // 804D8F78
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D8F7C
  c->r[12]=R32(c->r[12]+0x00000070u); // 804D8F80
  c->ctr=c->r[12]; // 804D8F84
  if (true) { c->lr=0x804D8F8Cu; dispatch(c,c->ctr); } // 804D8F88
  c->r[5]=R8(c->r[31]+0x00000104u); // 804D8F8C
  c->r[4]=c->r[31]|c->r[31]; // 804D8F90
  c->r[6]=R32(c->r[31]+0x00000100u); // 804D8F94
  c->r[3]=c->r[1]+0x00000018u; // 804D8F98
  c->lr=0x804D8FA0u; f_804DAE48(c); // 804D8F9C
  c->r[6]=R32(c->r[1]+0x00000018u); // 804D8FA0
  c->r[3]=c->r[31]|c->r[31]; // 804D8FA4
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 804D8FA8
  c->r[4]=R32(c->r[1]+0x00000020u); // 804D8FAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D8FB0
  W32(c->r[1]+0x00000028u,c->r[6]); // 804D8FB4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 804D8FB8
  W32(c->r[1]+0x00000030u,c->r[4]); // 804D8FBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D8FC0
  c->lr=0x804D8FC8u; f_804D56A8(c); // 804D8FC4
  W32(c->r[1]+0x00000010u,c->r[3]); // 804D8FC8
  c->r[5]=c->r[1]+0x00000028u; // 804D8FCC
  W32(c->r[1]+0x00000014u,c->r[4]); // 804D8FD0
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D8FD4
  W32(c->r[1]+0x00000008u,c->r[3]); // 804D8FD8
  c->r[3]=c->r[31]|c->r[31]; // 804D8FDC
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 804D8FE0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804D8FE4
  c->r[4]=c->r[1]+0x00000010u; // 804D8FE8
  c->r[6]=R8(c->r[31]+0x000000B9u); // 804D8FEC
  c->ctr=c->r[12]; // 804D8FF0
  if (true) { c->lr=0x804D8FF8u; dispatch(c,c->ctr); } // 804D8FF4
  c->r[0]=R8(c->r[31]+0x00000104u); // 804D8FF8
  cmps(c,0,(int32_t)c->r[0],4); // 804D8FFC
  if (crb(c,2)) { goto L_804D9048; } // 804D9000
  if (!crb(c,0)) { goto L_804D9014; } // 804D9004
  cmps(c,0,(int32_t)c->r[0],1); // 804D9008
  if (crb(c,2)) { goto L_804D9020; } // 804D900C
  goto L_804D9094; // 804D9010
L_804D9014:;
  cmps(c,0,(int32_t)c->r[0],8); // 804D9014
  if (crb(c,2)) { goto L_804D9070; } // 804D9018
  goto L_804D9094; // 804D901C
L_804D9020:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D9020
  c->r[3]=c->r[31]|c->r[31]; // 804D9024
  c->r[4]=c->r[1]+0x00000010u; // 804D9028
  c->r[6]=c->r[1]+0x00000028u; // 804D902C
  c->r[12]=R32(c->r[12]+0x00000080u); // 804D9030
  c->r[5]=R32(c->r[31]+0x00000100u); // 804D9034
  c->r[7]=R8(c->r[31]+0x000000B9u); // 804D9038
  c->ctr=c->r[12]; // 804D903C
  if (true) { c->lr=0x804D9044u; dispatch(c,c->ctr); } // 804D9040
  goto L_804D9094; // 804D9044
L_804D9048:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D9048
  c->r[3]=c->r[31]|c->r[31]; // 804D904C
  c->r[4]=c->r[1]+0x00000010u; // 804D9050
  c->r[6]=c->r[1]+0x00000028u; // 804D9054
  c->r[12]=R32(c->r[12]+0x00000084u); // 804D9058
  c->r[5]=R32(c->r[31]+0x00000100u); // 804D905C
  c->r[7]=R8(c->r[31]+0x000000B9u); // 804D9060
  c->ctr=c->r[12]; // 804D9064
  if (true) { c->lr=0x804D906Cu; dispatch(c,c->ctr); } // 804D9068
  goto L_804D9094; // 804D906C
L_804D9070:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804D9070
  c->r[3]=c->r[31]|c->r[31]; // 804D9074
  c->r[4]=c->r[1]+0x00000010u; // 804D9078
  c->r[6]=c->r[1]+0x00000028u; // 804D907C
  c->r[12]=R32(c->r[12]+0x00000088u); // 804D9080
  c->r[5]=R32(c->r[31]+0x00000100u); // 804D9084
  c->r[7]=R8(c->r[31]+0x000000B9u); // 804D9088
  c->ctr=c->r[12]; // 804D908C
  if (true) { c->lr=0x804D9094u; dispatch(c,c->ctr); } // 804D9090
L_804D9094:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804D9094
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804D9098
  c->lr=c->r[0]; // 804D909C
  c->r[1]=c->r[1]+0x00000040u; // 804D90A0
  return; // 804D90A4
}

// fn_804D90A8
void f_804D90A8(Ctx* __restrict c) {
  trace_call(0x804D90A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D90A8
  c->r[0]=c->lr; // 804D90AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D90B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D90B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D90B8
  c->r[30]=c->r[4]|c->r[4]; // 804D90BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D90C0
  c->r[29]=c->r[3]|c->r[3]; // 804D90C4
  c->lr=0x804D90CCu; f_804D5234(c); // 804D90C8
  c->r[0]=R8(c->r[29]+0x000000BBu); // 804D90CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804D90D0
  if (!crb(c,2)) { goto L_804D90E0; } // 804D90D4
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 804D90D8
  if (!crb(c,2)) { goto L_804D911C; } // 804D90DC
L_804D90E0:;
  c->r[30]=0u+0x00000000u; // 804D90E0
  c->r[31]=0u+0x00000000u; // 804D90E4
  goto L_804D9110; // 804D90E8
L_804D90EC:;
  c->r[0]=R32(c->r[29]+0x00000100u); // 804D90EC
  c->r[3]=c->r[0]+c->r[31]; // 804D90F0
  c->r[3]=R32(c->r[3]+0x00000004u); // 804D90F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D90F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804D90FC
  c->ctr=c->r[12]; // 804D9100
  if (true) { c->lr=0x804D9108u; dispatch(c,c->ctr); } // 804D9104
  c->r[31]=c->r[31]+0x00000008u; // 804D9108
  c->r[30]=c->r[30]+0x00000001u; // 804D910C
L_804D9110:;
  c->r[0]=R8(c->r[29]+0x00000104u); // 804D9110
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804D9114
  if (crb(c,0)) { IRQCHK(c); goto L_804D90EC; } // 804D9118
L_804D911C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D911C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D9120
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D9124
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D9128
  c->lr=c->r[0]; // 804D912C
  c->r[1]=c->r[1]+0x00000020u; // 804D9130
  return; // 804D9134
}

// fn_804D9138
void f_804D9138(Ctx* __restrict c) {
  trace_call(0x804D9138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D9138
  c->r[0]=c->lr; // 804D913C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804D9140
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804D9144
  c->r[31]=0u+0x00000000u; // 804D9148
  W32(c->r[1]+0x00000018u,c->r[30]); // 804D914C
  c->r[30]=0u+0x00000000u; // 804D9150
  W32(c->r[1]+0x00000014u,c->r[29]); // 804D9154
  c->r[29]=c->r[4]|c->r[4]; // 804D9158
  W32(c->r[1]+0x00000010u,c->r[28]); // 804D915C
  c->r[28]=c->r[3]|c->r[3]; // 804D9160
  goto L_804D9190; // 804D9164
L_804D9168:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 804D9168
  c->r[4]=c->r[29]|c->r[29]; // 804D916C
  c->r[3]=c->r[0]+c->r[31]; // 804D9170
  c->r[3]=R32(c->r[3]+0x00000004u); // 804D9174
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9178
  c->r[12]=R32(c->r[12]+0x00000014u); // 804D917C
  c->ctr=c->r[12]; // 804D9180
  if (true) { c->lr=0x804D9188u; dispatch(c,c->ctr); } // 804D9184
  c->r[31]=c->r[31]+0x00000008u; // 804D9188
  c->r[30]=c->r[30]+0x00000001u; // 804D918C
L_804D9190:;
  c->r[0]=R8(c->r[28]+0x00000104u); // 804D9190
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804D9194
  if (crb(c,0)) { IRQCHK(c); goto L_804D9168; } // 804D9198
  c->r[3]=c->r[28]|c->r[28]; // 804D919C
  c->r[4]=c->r[29]|c->r[29]; // 804D91A0
  c->lr=0x804D91A8u; f_804D53AC(c); // 804D91A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804D91A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804D91AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804D91B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804D91B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 804D91B8
  c->lr=c->r[0]; // 804D91BC
  c->r[1]=c->r[1]+0x00000020u; // 804D91C0
  return; // 804D91C4
}

// DrawContent__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt15WindowFrameSizeUc
void f_804D91C8(Ctx* __restrict c) {
  trace_call(0x804D91C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D91C8
  c->r[0]=c->lr; // 804D91CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804D91D0
  c->r[11]=c->r[1]+0x00000030u; // 804D91D4
  c->lr=0x804D91DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D91D8
  c->r[30]=c->r[6]|c->r[6]; // 804D91DC
  c->r[27]=c->r[3]|c->r[3]; // 804D91E0
  c->r[28]=c->r[4]|c->r[4]; // 804D91E4
  c->r[29]=c->r[5]|c->r[5]; // 804D91E8
  c->r[4]=c->r[30]|c->r[30]; // 804D91EC
  c->r[3]=c->r[3]+0x000000E8u; // 804D91F0
  c->lr=0x804D91F8u; f_804E0054(c); // 804D91F4
  c->r[4]=c->r[3]|c->r[3]; // 804D91F8
  c->r[3]=R32(c->r[27]+0x00000028u); // 804D91FC
  c->r[5]=c->r[30]|c->r[30]; // 804D9200
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9204
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9208
  c->ctr=c->r[12]; // 804D920C
  if (true) { c->lr=0x804D9214u; dispatch(c,c->ctr); } // 804D9210
  c->r[4]=R8(c->r[27]+0x000000F9u); // 804D9214
  c->r[31]=c->r[3]|c->r[3]; // 804D9218
  c->lr=0x804D9220u; f_804E0110(c); // 804D921C
  cmps(c,0,(int32_t)c->r[31],0); // 804D9220
  if (crb(c,2)) { goto L_804D9230; } // 804D9224
  c->r[7]=c->r[27]+0x000000E8u; // 804D9228
  goto L_804D9234; // 804D922C
L_804D9230:;
  c->r[7]=0u+0x00000000u; // 804D9230
L_804D9234:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9234
  c->r[8]=c->r[30]|c->r[30]; // 804D9238
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 804D923C
  c->r[3]=c->r[1]+0x00000010u; // 804D9240
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9244
  c->r[4]=c->r[1]+0x00000008u; // 804D9248
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D924C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 804D9250
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9254
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 804D9258
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D925C
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 804D9260
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9264
  c->r[6]=R32(c->r[27]+0x000000FCu); // 804D9268
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 804D926C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9270
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 804D9274
  {uint32_t ea=c->r[27]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9278
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804D927C
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9280
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 804D9284
  c->r[5]=R8(c->r[27]+0x000000F9u); // 804D9288
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 804D928C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9290
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804D9294
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9298
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 804D929C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804D92A0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 804D92A4
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D92A8
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D92AC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804D92B0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D92B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804D92B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804D92BC
  c->lr=0x804D92C4u; f_804E0754(c); // 804D92C0
  c->r[11]=c->r[1]+0x00000030u; // 804D92C4
  c->lr=0x804D92CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D92C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804D92CC
  c->lr=c->r[0]; // 804D92D0
  c->r[1]=c->r[1]+0x00000030u; // 804D92D4
  return; // 804D92D8
}

// DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_804D92DC(Ctx* __restrict c) {
  trace_call(0x804D92DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D92DC
  c->r[0]=c->lr; // 804D92E0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804D92E4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 804D92E8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 804D92EC
  c->r[11]=c->r[1]+0x000000D0u; // 804D92F0
  c->lr=0x804D92F8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D92F4
  c->r[8]=R32(c->r[5]+0x00000004u); // 804D92F8
  c->r[9]=0u+0x43300000u; // 804D92FC
  W32(c->r[1]+0x00000088u,c->r[9]); // 804D9300
  c->r[27]=c->r[3]|c->r[3]; // 804D9304
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 804D9308
  c->r[28]=c->r[4]|c->r[4]; // 804D930C
  W32(c->r[1]+0x00000090u,c->r[9]); // 804D9310
  c->r[20]=c->r[5]|c->r[5]; // 804D9314
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804D9318
  c->r[29]=c->r[6]|c->r[6]; // 804D931C
  c->r[30]=c->r[7]|c->r[7]; // 804D9320
  if (crb(c,2)) { goto L_804D989C; } // 804D9324
  c->r[4]=c->r[30]|c->r[30]; // 804D9328
  c->r[3]=0u+0x00000000u; // 804D932C
  c->lr=0x804D9334u; f_804E0054(c); // 804D9330
  c->r[4]=c->r[3]|c->r[3]; // 804D9334
  c->r[3]=R32(c->r[20]+0x00000004u); // 804D9338
  c->r[5]=c->r[30]|c->r[30]; // 804D933C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9340
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9344
  c->ctr=c->r[12]; // 804D9348
  if (true) { c->lr=0x804D9350u; dispatch(c,c->ctr); } // 804D934C
  c->r[31]=c->r[3]|c->r[3]; // 804D9350
  c->r[4]=0u+0x00000001u; // 804D9354
  c->lr=0x804D935Cu; f_804E0110(c); // 804D9358
  c->r[4]=R32(c->r[20]+0x00000004u); // 804D935C
  c->r[3]=c->r[1]+0x00000050u; // 804D9360
  c->r[5]=0u+0x00000000u; // 804D9364
  c->lr=0x804D936Cu; f_804DDD94(c); // 804D9368
  c->r[21]=0u+0x80720000u; // 804D936C
  c->r[0]=0u+0xFFFFFFFFu; // 804D9370
  c->r[21]=c->r[21]+0xFFFFA840u; // 804D9374
  {uint32_t ea=c->r[2]+0x000017A8u; c->f[12]=c->ps1[12]=RF32(ea);} // 804D9378
  c->r[6]=R8(c->r[21]+0x00000009u); // 804D937C
  c->r[3]=0u-c->r[31]; // 804D9380
  c->r[7]=R8(c->r[21]+0x00000008u); // 804D9384
  c->r[9]=c->r[1]+0x00000038u; // 804D9388
  c->r[12]=R8(c->r[21]+c->r[6]); // 804D938C
  c->r[4]=c->r[21]+c->r[6]; // 804D9390
  c->r[5]=c->r[21]+c->r[7]; // 804D9394
  c->r[11]=R8(c->r[21]+c->r[7]); // 804D9398
  W32(c->r[1]+0x00000094u,c->r[12]); // 804D939C
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804D93A0
  c->r[5]=R8(c->r[5]+0x00000002u); // 804D93A4
  c->r[20]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804D93A8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 804D93AC
  c->r[23]=c->r[1]+0x00000068u; // 804D93B0
  c->r[5]=c->r[5]-c->r[11]; // 804D93B4
  c->r[4]=R8(c->r[4]+0x00000004u); // 804D93B8
  c->r[5]=c->r[5]^0x80000000u; // 804D93BC
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[3]=RF64(ea);} // 804D93C0
  W32(c->r[1]+0x00000094u,c->r[5]); // 804D93C4
  c->r[4]=c->r[4]-c->r[12]; // 804D93C8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 804D93CC
  c->r[3]=c->r[3]|c->r[31]; // 804D93D0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D93D4
  c->r[4]=c->r[4]^0x80000000u; // 804D93D8
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[1]=RF64(ea);} // 804D93DC
  c->r[5]=sraw(c,c->r[3],31); // 804D93E0
  W32(c->r[1]+0x00000094u,c->r[4]); // 804D93E4
  c->r[26]=c->r[1]+0x00000058u; // 804D93E8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 804D93EC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 804D93F0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D93F4
  c->r[7]=c->r[26]&c->r[5]; // 804D93F8
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 804D93FC
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 804D9400
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 804D9404
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 804D9408
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 804D940C
  c->r[22]=c->r[1]+0x00000078u; // 804D9410
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 804D9414
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 804D9418
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 804D941C
  c->r[24]=c->r[1]+0x00000070u; // 804D9420
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 804D9424
  c->r[25]=c->r[1]+0x00000080u; // 804D9428
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 804D942C
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 804D9430
  {uint32_t ea=c->r[29]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804D9434
  c->r[6]=c->r[23]|c->r[23]; // 804D9438
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 804D943C
  c->r[8]=c->r[30]|c->r[30]; // 804D9440
  W32(c->r[1]+0x00000058u,c->r[0]); // 804D9444
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804D9448
  {uint32_t ea=c->r[29]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804D944C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 804D9450
  c->r[3]=c->r[1]+0x00000048u; // 804D9454
  c->r[4]=c->r[1]+0x00000040u; // 804D9458
  c->r[5]=0u+0x00000001u; // 804D945C
  W32(c->r[1]+0x00000060u,c->r[0]); // 804D9460
  W32(c->r[1]+0x00000064u,c->r[0]); // 804D9464
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 804D9468
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 804D946C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 804D9470
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 804D9474
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9478
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 804D947C
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 804D9480
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 804D9484
  {uint32_t ea=c->r[9]+c->r[10]; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9488
  {uint32_t ea=c->r[9]+c->r[20]; c->f[0]=c->ps1[0]=RF32(ea);} // 804D948C
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 804D9490
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804D9494
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D9498
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[7]);} // 804D949C
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 804D94A0
  {uint32_t ea=c->r[24]+c->r[20]; WF32(ea,c->f[6]);} // 804D94A4
  {uint32_t ea=c->r[23]+c->r[20]; WF32(ea,c->f[6]);} // 804D94A8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 804D94AC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 804D94B0
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 804D94B4
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 804D94B8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804D94BC
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[1]);} // 804D94C0
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[1]);} // 804D94C4
  {uint32_t ea=c->r[22]+c->r[20]; WF32(ea,c->f[0]);} // 804D94C8
  {uint32_t ea=c->r[25]+c->r[20]; WF32(ea,c->f[0]);} // 804D94CC
  c->lr=0x804D94D4u; f_804E0754(c); // 804D94D0
  c->r[6]=R8(c->r[21]+0x00000013u); // 804D94D4
  c->r[8]=c->r[21]+0x0000000Au; // 804D94D8
  c->r[7]=R8(c->r[21]+0x00000012u); // 804D94DC
  c->r[0]=0u-c->r[31]; // 804D94E0
  c->r[4]=c->r[8]+c->r[6]; // 804D94E4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D94E8
  c->r[3]=c->r[0]|c->r[31]; // 804D94EC
  c->r[0]=R8(c->r[4]+0x00000002u); // 804D94F0
  c->r[5]=c->r[8]+c->r[7]; // 804D94F4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D94F8
  c->r[9]=R8(c->r[5]+0x00000002u); // 804D94FC
  c->r[5]=sraw(c,c->r[3],31); // 804D9500
  c->r[3]=R8(c->r[8]+c->r[7]); // 804D9504
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 804D9508
  W32(c->r[1]+0x00000094u,c->r[0]); // 804D950C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804D9510
  c->r[3]=c->r[3]-c->r[9]; // 804D9514
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9518
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D951C
  c->r[3]=c->r[3]^0x80000000u; // 804D9520
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 804D9524
  c->r[7]=c->r[26]&c->r[5]; // 804D9528
  {uint32_t ea=c->r[29]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804D952C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804D9530
  W32(c->r[1]+0x00000094u,c->r[3]); // 804D9534
  c->r[20]=c->r[1]+0x00000028u; // 804D9538
  c->r[3]=R8(c->r[4]+0x00000006u); // 804D953C
  c->r[6]=c->r[23]|c->r[23]; // 804D9540
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 804D9544
  {uint32_t ea=c->r[28]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804D9548
  c->r[3]=c->r[3]-c->r[0]; // 804D954C
  c->r[12]=c->r[3]^0x80000000u; // 804D9550
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D9554
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[3]=RF64(ea);} // 804D9558
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 804D955C
  c->r[8]=c->r[30]|c->r[30]; // 804D9560
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[6]=RF64(ea);} // 804D9564
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804D9568
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 804D956C
  c->r[3]=c->r[1]+0x00000048u; // 804D9570
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 804D9574
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804D9578
  W32(c->r[1]+0x00000094u,c->r[12]); // 804D957C
  {uint32_t ea=c->r[20]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9580
  c->r[4]=c->r[1]+0x00000040u; // 804D9584
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D9588
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 804D958C
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 804D9590
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 804D9594
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9598
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 804D959C
  c->r[5]=0u+0x00000001u; // 804D95A0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 804D95A4
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 804D95A8
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 804D95AC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 804D95B0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 804D95B4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 804D95B8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 804D95BC
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 804D95C0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804D95C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D95C8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 804D95CC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 804D95D0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 804D95D4
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 804D95D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 804D95DC
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 804D95E0
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 804D95E4
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[4]);} // 804D95E8
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[4]);} // 804D95EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804D95F0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 804D95F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804D95F8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 804D95FC
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 804D9600
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D9604
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 804D9608
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[0]);} // 804D960C
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[0]);} // 804D9610
  c->lr=0x804D9618u; f_804E0754(c); // 804D9614
  c->r[6]=R8(c->r[21]+0x00000031u); // 804D9618
  c->r[4]=c->r[21]+0x00000028u; // 804D961C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9620
  c->r[0]=0u-c->r[31]; // 804D9624
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9628
  c->r[7]=c->r[4]+c->r[6]; // 804D962C
  c->r[8]=R8(c->r[21]+0x00000030u); // 804D9630
  c->r[3]=c->r[0]|c->r[31]; // 804D9634
  c->r[0]=R8(c->r[7]+0x00000006u); // 804D9638
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D963C
  c->r[4]=c->r[4]+c->r[8]; // 804D9640
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 804D9644
  c->r[5]=sraw(c,c->r[3],31); // 804D9648
  W32(c->r[1]+0x00000094u,c->r[0]); // 804D964C
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[0]); // 804D9650
  c->r[9]=R8(c->r[4]+0x00000006u); // 804D9654
  c->r[10]=rotl(c->r[8],2)&0xFFFFFFFCu; // 804D9658
  c->r[3]=R8(c->r[4]+0x00000004u); // 804D965C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804D9660
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9664
  c->r[4]=c->r[3]-c->r[9]; // 804D9668
  c->r[3]=R8(c->r[7]+0x00000002u); // 804D966C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D9670
  c->r[4]=c->r[4]^0x80000000u; // 804D9674
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 804D9678
  c->r[3]=c->r[3]-c->r[0]; // 804D967C
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 804D9680
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 804D9684
  W32(c->r[1]+0x00000094u,c->r[4]); // 804D9688
  c->r[12]=c->r[3]^0x80000000u; // 804D968C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 804D9690
  c->r[20]=c->r[1]+0x00000018u; // 804D9694
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D9698
  c->r[7]=c->r[26]&c->r[5]; // 804D969C
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[1]=RF64(ea);} // 804D96A0
  c->r[6]=c->r[23]|c->r[23]; // 804D96A4
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[6]=RF64(ea);} // 804D96A8
  c->r[8]=c->r[30]|c->r[30]; // 804D96AC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 804D96B0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 804D96B4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 804D96B8
  c->r[3]=c->r[1]+0x00000048u; // 804D96BC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 804D96C0
  c->r[4]=c->r[1]+0x00000040u; // 804D96C4
  c->r[5]=0u+0x00000001u; // 804D96C8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D96CC
  W32(c->r[1]+0x00000094u,c->r[12]); // 804D96D0
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 804D96D4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D96D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 804D96DC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 804D96E0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 804D96E4
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 804D96E8
  {uint32_t ea=c->r[20]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 804D96EC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 804D96F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804D96F4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 804D96F8
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 804D96FC
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9700
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 804D9704
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D9708
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 804D970C
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 804D9710
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 804D9714
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 804D9718
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 804D971C
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[4]);} // 804D9720
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 804D9724
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 804D9728
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[4]);} // 804D972C
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 804D9730
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 804D9734
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 804D9738
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 804D973C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804D9740
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804D9744
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 804D9748
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D974C
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 804D9750
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[0]);} // 804D9754
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[0]);} // 804D9758
  c->lr=0x804D9760u; f_804E0754(c); // 804D975C
  c->r[6]=R8(c->r[21]+0x0000001Du); // 804D9760
  c->r[7]=c->r[21]+0x00000014u; // 804D9764
  {uint32_t ea=c->r[28]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 804D9768
  c->r[0]=0u-c->r[31]; // 804D976C
  c->r[3]=c->r[7]+c->r[6]; // 804D9770
  c->r[4]=R8(c->r[21]+0x0000001Cu); // 804D9774
  c->r[11]=R8(c->r[3]+0x00000004u); // 804D9778
  c->r[0]=c->r[0]|c->r[31]; // 804D977C
  c->r[3]=c->r[7]+c->r[4]; // 804D9780
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 804D9784
  c->r[12]=R8(c->r[3]+0x00000004u); // 804D9788
  c->r[5]=sraw(c,c->r[0],31); // 804D978C
  W32(c->r[1]+0x00000094u,c->r[11]); // 804D9790
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D9794
  c->r[3]=R8(c->r[3]+0x00000006u); // 804D9798
  c->r[10]=c->r[1]+0x00000008u; // 804D979C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 804D97A0
  c->r[9]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804D97A4
  c->r[4]=c->r[3]-c->r[12]; // 804D97A8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D97AC
  c->r[3]=R8(c->r[7]+c->r[6]); // 804D97B0
  c->r[4]=c->r[4]^0x80000000u; // 804D97B4
  W32(c->r[1]+0x00000094u,c->r[4]); // 804D97B8
  c->r[7]=c->r[26]&c->r[5]; // 804D97BC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804D97C0
  c->r[3]=c->r[3]-c->r[11]; // 804D97C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 804D97C8
  c->r[3]=c->r[3]^0x80000000u; // 804D97CC
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 804D97D0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D97D4
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[1]=RF64(ea);} // 804D97D8
  c->r[6]=c->r[23]|c->r[23]; // 804D97DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 804D97E0
  c->r[8]=c->r[30]|c->r[30]; // 804D97E4
  W32(c->r[1]+0x00000094u,c->r[3]); // 804D97E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 804D97EC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D97F0
  c->r[3]=c->r[1]+0x00000048u; // 804D97F4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 804D97F8
  c->r[4]=c->r[1]+0x00000040u; // 804D97FC
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[6]=RF64(ea);} // 804D9800
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 804D9804
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 804D9808
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 804D980C
  c->r[5]=0u+0x00000001u; // 804D9810
  {uint32_t ea=c->r[10]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9814
  {uint32_t ea=c->r[10]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9818
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804D981C
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 804D9820
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804D9824
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 804D9828
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 804D982C
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 804D9830
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 804D9834
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 804D9838
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 804D983C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 804D9840
  {uint32_t ea=c->r[27]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 804D9844
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 804D9848
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 804D984C
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 804D9850
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 804D9854
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 804D9858
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 804D985C
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[5]);} // 804D9860
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[5]);} // 804D9864
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[4]);} // 804D9868
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[4]);} // 804D986C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 804D9870
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 804D9874
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 804D9878
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804D987C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 804D9880
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[2]);} // 804D9884
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D9888
  {uint32_t ea=c->r[24]+c->r[0]; WF32(ea,c->f[2]);} // 804D988C
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 804D9890
  {uint32_t ea=c->r[24]+c->r[9]; WF32(ea,c->f[0]);} // 804D9894
  c->lr=0x804D989Cu; f_804E0754(c); // 804D9898
L_804D989C:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 804D989C
  c->r[11]=c->r[1]+0x000000D0u; // 804D98A0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 804D98A4
  c->lr=0x804D98ACu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D98A8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804D98AC
  c->lr=c->r[0]; // 804D98B0
  c->r[1]=c->r[1]+0x000000E0u; // 804D98B4
  return; // 804D98B8
}

// DrawFrame4__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_804D98BC(Ctx* __restrict c) {
  trace_call(0x804D98BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 804D98BC
  c->r[0]=c->lr; // 804D98C0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 804D98C4
  c->r[11]=c->r[1]+0x000000E0u; // 804D98C8
  c->lr=0x804D98D0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804D98CC
  {uint32_t ea=c->r[2]+0x000017A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D98D0
  c->r[0]=0u+0xFFFFFFFFu; // 804D98D4
  c->r[8]=0u+0x43300000u; // 804D98D8
  c->r[24]=c->r[3]|c->r[3]; // 804D98DC
  c->r[28]=c->r[7]|c->r[7]; // 804D98E0
  W32(c->r[1]+0x000000A0u,c->r[8]); // 804D98E4
  c->r[25]=c->r[4]|c->r[4]; // 804D98E8
  c->r[26]=c->r[5]|c->r[5]; // 804D98EC
  W32(c->r[1]+0x000000A8u,c->r[8]); // 804D98F0
  c->r[27]=c->r[6]|c->r[6]; // 804D98F4
  c->r[4]=c->r[28]|c->r[28]; // 804D98F8
  c->r[3]=0u+0x00000000u; // 804D98FC
  W32(c->r[1]+0x00000070u,c->r[0]); // 804D9900
  W32(c->r[1]+0x00000074u,c->r[0]); // 804D9904
  W32(c->r[1]+0x00000078u,c->r[0]); // 804D9908
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804D990C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 804D9910
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804D9914
  c->lr=0x804D991Cu; f_804E0054(c); // 804D9918
  c->r[4]=R32(c->r[26]+0x00000004u); // 804D991C
  c->r[30]=c->r[3]|c->r[3]; // 804D9920
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804D9924
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804D9928
  if (crb(c,2)) { goto L_804D9AC4; } // 804D992C
  c->r[3]=c->r[4]|c->r[4]; // 804D9930
  c->r[4]=c->r[30]|c->r[30]; // 804D9934
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9938
  c->r[5]=c->r[28]|c->r[28]; // 804D993C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9940
  c->ctr=c->r[12]; // 804D9944
  if (true) { c->lr=0x804D994Cu; dispatch(c,c->ctr); } // 804D9948
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D994C
  c->r[29]=c->r[3]|c->r[3]; // 804D9950
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9954
  c->r[3]=c->r[1]+0x00000058u; // 804D9958
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 804D995C
  c->r[5]=0u+0x00000000u; // 804D9960
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9964
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 804D9968
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D996C
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9970
  c->r[31]=R8(c->r[26]+0x00000000u); // 804D9974
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804D9978
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804D997C
  c->r[4]=R32(c->r[26]+0x00000004u); // 804D9980
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 804D9984
  c->lr=0x804D998Cu; f_804DDD94(c); // 804D9988
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 804D998C
  c->r[3]=0u+0x80720000u; // 804D9990
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9994
  c->r[6]=c->r[1]+0x00000038u; // 804D9998
  c->r[3]=c->r[3]+0xFFFFA840u; // 804D999C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D99A0
  c->r[4]=c->r[3]+c->r[0]; // 804D99A4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804D99A8
  c->r[0]=R8(c->r[4]+0x00000009u); // 804D99AC
  c->r[9]=c->r[1]+0x00000090u; // 804D99B0
  c->r[3]=R8(c->r[4]+0x00000008u); // 804D99B4
  c->r[31]=c->r[1]+0x00000080u; // 804D99B8
  c->r[8]=R8(c->r[4]+c->r[0]); // 804D99BC
  c->r[23]=c->r[4]+c->r[0]; // 804D99C0
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 804D99C4
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D99C8
  W32(c->r[1]+0x000000ACu,c->r[8]); // 804D99CC
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804D99D0
  c->r[0]=R8(c->r[4]+0x00000002u); // 804D99D4
  c->r[7]=c->r[1]+0x00000088u; // 804D99D8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D99DC
  c->r[5]=c->r[1]+0x00000098u; // 804D99E0
  c->r[3]=c->r[0]-c->r[10]; // 804D99E4
  c->r[0]=R8(c->r[23]+0x00000004u); // 804D99E8
  c->r[3]=c->r[3]^0x80000000u; // 804D99EC
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804D99F0
  W32(c->r[1]+0x000000ACu,c->r[3]); // 804D99F4
  c->r[0]=c->r[0]-c->r[8]; // 804D99F8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804D99FC
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804D9A00
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9A04
  c->r[0]=c->r[0]^0x80000000u; // 804D9A08
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804D9A0C
  c->r[3]=c->r[29]|c->r[29]; // 804D9A10
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9A14
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804D9A18
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9A1C
  c->r[4]=0u+0x00000001u; // 804D9A20
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9A24
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804D9A28
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9A2C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9A30
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9A34
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804D9A38
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9A3C
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9A40
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 804D9A44
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9A48
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 804D9A4C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804D9A50
  W32(c->r[1]+0x000000A4u,c->r[8]); // 804D9A54
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804D9A58
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804D9A5C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 804D9A60
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804D9A64
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804D9A68
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 804D9A6C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804D9A70
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 804D9A74
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804D9A78
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804D9A7C
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 804D9A80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D9A84
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 804D9A88
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804D9A8C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804D9A90
  c->lr=0x804D9A98u; f_804E0110(c); // 804D9A94
  c->r[3]=0u-c->r[29]; // 804D9A98
  c->r[0]=c->r[1]+0x00000070u; // 804D9A9C
  c->r[3]=c->r[3]|c->r[29]; // 804D9AA0
  c->r[6]=c->r[31]|c->r[31]; // 804D9AA4
  c->r[5]=sraw(c,c->r[3],31); // 804D9AA8
  c->r[8]=c->r[28]|c->r[28]; // 804D9AAC
  c->r[7]=c->r[0]&c->r[5]; // 804D9AB0
  c->r[3]=c->r[1]+0x00000068u; // 804D9AB4
  c->r[4]=c->r[1]+0x00000060u; // 804D9AB8
  c->r[5]=0u+0x00000001u; // 804D9ABC
  c->lr=0x804D9AC4u; f_804E0754(c); // 804D9AC0
L_804D9AC4:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 804D9AC4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D9AC8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804D9ACC
  if (crb(c,2)) { goto L_804D9C7C; } // 804D9AD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9AD4
  c->r[4]=c->r[30]|c->r[30]; // 804D9AD8
  c->r[5]=c->r[28]|c->r[28]; // 804D9ADC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9AE0
  c->ctr=c->r[12]; // 804D9AE4
  if (true) { c->lr=0x804D9AECu; dispatch(c,c->ctr); } // 804D9AE8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9AEC
  c->r[29]=c->r[3]|c->r[3]; // 804D9AF0
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9AF4
  c->r[3]=c->r[1]+0x00000050u; // 804D9AF8
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9AFC
  c->r[5]=0u+0x00000000u; // 804D9B00
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 804D9B04
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9B08
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 804D9B0C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9B10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 804D9B14
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 804D9B18
  c->r[31]=R8(c->r[26]+0x00000008u); // 804D9B1C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 804D9B20
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 804D9B24
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 804D9B28
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9B2C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 804D9B30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804D9B34
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804D9B38
  c->lr=0x804D9B40u; f_804DDD94(c); // 804D9B3C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 804D9B40
  c->r[3]=0u+0x80720000u; // 804D9B44
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9B48
  c->r[6]=c->r[1]+0x00000028u; // 804D9B4C
  c->r[3]=c->r[3]+0xFFFFA840u; // 804D9B50
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9B54
  c->r[11]=c->r[3]+c->r[0]; // 804D9B58
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804D9B5C
  c->r[0]=R8(c->r[11]+0x00000009u); // 804D9B60
  c->r[9]=c->r[1]+0x00000098u; // 804D9B64
  c->r[5]=R8(c->r[11]+0x00000008u); // 804D9B68
  c->r[8]=c->r[1]+0x00000088u; // 804D9B6C
  c->r[4]=c->r[11]+c->r[0]; // 804D9B70
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D9B74
  c->r[7]=R8(c->r[4]+0x00000002u); // 804D9B78
  c->r[3]=c->r[11]+c->r[5]; // 804D9B7C
  c->r[10]=R8(c->r[3]+0x00000002u); // 804D9B80
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804D9B84
  c->r[0]=R8(c->r[11]+c->r[5]); // 804D9B88
  c->r[31]=c->r[1]+0x00000080u; // 804D9B8C
  W32(c->r[1]+0x000000ACu,c->r[7]); // 804D9B90
  c->r[5]=c->r[1]+0x00000090u; // 804D9B94
  c->r[3]=c->r[0]-c->r[10]; // 804D9B98
  c->r[0]=R8(c->r[4]+0x00000006u); // 804D9B9C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9BA0
  c->r[3]=c->r[3]^0x80000000u; // 804D9BA4
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804D9BA8
  c->r[0]=c->r[0]-c->r[7]; // 804D9BAC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 804D9BB0
  c->r[0]=c->r[0]^0x80000000u; // 804D9BB4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804D9BB8
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804D9BBC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9BC0
  c->r[3]=c->r[29]|c->r[29]; // 804D9BC4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804D9BC8
  c->r[4]=0u+0x00000001u; // 804D9BCC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9BD0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804D9BD4
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9BD8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9BDC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804D9BE0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9BE4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9BE8
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9BEC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9BF0
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804D9BF4
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9BF8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 804D9BFC
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9C00
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 804D9C04
  W32(c->r[1]+0x000000A4u,c->r[7]); // 804D9C08
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804D9C0C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 804D9C10
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804D9C14
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804D9C18
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804D9C1C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 804D9C20
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 804D9C24
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[6]);} // 804D9C28
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 804D9C2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804D9C30
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804D9C34
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[2]);} // 804D9C38
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D9C3C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 804D9C40
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 804D9C44
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 804D9C48
  c->lr=0x804D9C50u; f_804E0110(c); // 804D9C4C
  c->r[3]=0u-c->r[29]; // 804D9C50
  c->r[0]=c->r[1]+0x00000070u; // 804D9C54
  c->r[3]=c->r[3]|c->r[29]; // 804D9C58
  c->r[6]=c->r[31]|c->r[31]; // 804D9C5C
  c->r[5]=sraw(c,c->r[3],31); // 804D9C60
  c->r[8]=c->r[28]|c->r[28]; // 804D9C64
  c->r[7]=c->r[0]&c->r[5]; // 804D9C68
  c->r[3]=c->r[1]+0x00000068u; // 804D9C6C
  c->r[4]=c->r[1]+0x00000060u; // 804D9C70
  c->r[5]=0u+0x00000001u; // 804D9C74
  c->lr=0x804D9C7Cu; f_804E0754(c); // 804D9C78
L_804D9C7C:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 804D9C7C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D9C80
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804D9C84
  if (crb(c,2)) { goto L_804D9E38; } // 804D9C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9C8C
  c->r[4]=c->r[30]|c->r[30]; // 804D9C90
  c->r[5]=c->r[28]|c->r[28]; // 804D9C94
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9C98
  c->ctr=c->r[12]; // 804D9C9C
  if (true) { c->lr=0x804D9CA4u; dispatch(c,c->ctr); } // 804D9CA0
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9CA4
  c->r[29]=c->r[3]|c->r[3]; // 804D9CA8
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9CAC
  c->r[3]=c->r[1]+0x00000048u; // 804D9CB0
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9CB4
  c->r[5]=0u+0x00000000u; // 804D9CB8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804D9CBC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9CC0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9CC4
  c->r[31]=R8(c->r[26]+0x00000018u); // 804D9CC8
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 804D9CCC
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 804D9CD0
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 804D9CD4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 804D9CD8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 804D9CDC
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9CE0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 804D9CE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804D9CE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 804D9CEC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 804D9CF0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 804D9CF4
  c->lr=0x804D9CFCu; f_804DDD94(c); // 804D9CF8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 804D9CFC
  c->r[3]=0u+0x80720000u; // 804D9D00
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9D04
  c->r[5]=c->r[1]+0x00000018u; // 804D9D08
  c->r[3]=c->r[3]+0xFFFFA840u; // 804D9D0C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9D10
  c->r[3]=c->r[3]+c->r[0]; // 804D9D14
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804D9D18
  c->r[0]=R8(c->r[3]+0x00000009u); // 804D9D1C
  c->r[9]=c->r[1]+0x00000088u; // 804D9D20
  c->r[6]=R8(c->r[3]+0x00000008u); // 804D9D24
  c->r[8]=c->r[1]+0x00000098u; // 804D9D28
  c->r[4]=c->r[3]+c->r[0]; // 804D9D2C
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804D9D30
  c->r[3]=c->r[3]+c->r[6]; // 804D9D34
  c->r[7]=R8(c->r[4]+0x00000006u); // 804D9D38
  c->r[10]=R8(c->r[3]+0x00000006u); // 804D9D3C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804D9D40
  W32(c->r[1]+0x000000ACu,c->r[7]); // 804D9D44
  c->r[6]=c->r[1]+0x00000090u; // 804D9D48
  c->r[0]=R8(c->r[3]+0x00000004u); // 804D9D4C
  c->r[31]=c->r[1]+0x00000080u; // 804D9D50
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9D54
  c->r[3]=c->r[0]-c->r[10]; // 804D9D58
  c->r[0]=R8(c->r[4]+0x00000002u); // 804D9D5C
  c->r[3]=c->r[3]^0x80000000u; // 804D9D60
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804D9D64
  W32(c->r[1]+0x000000ACu,c->r[3]); // 804D9D68
  c->r[0]=c->r[0]-c->r[7]; // 804D9D6C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804D9D70
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804D9D74
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9D78
  c->r[0]=c->r[0]^0x80000000u; // 804D9D7C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804D9D80
  c->r[3]=c->r[29]|c->r[29]; // 804D9D84
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9D88
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804D9D8C
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9D90
  c->r[4]=0u+0x00000001u; // 804D9D94
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9D98
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804D9D9C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9DA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9DA4
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9DA8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804D9DAC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9DB0
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9DB4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 804D9DB8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9DBC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 804D9DC0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804D9DC4
  W32(c->r[1]+0x000000A4u,c->r[7]); // 804D9DC8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804D9DCC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804D9DD0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 804D9DD4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804D9DD8
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804D9DDC
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 804D9DE0
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 804D9DE4
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 804D9DE8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804D9DEC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804D9DF0
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 804D9DF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804D9DF8
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[2]);} // 804D9DFC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804D9E00
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 804D9E04
  c->lr=0x804D9E0Cu; f_804E0110(c); // 804D9E08
  c->r[3]=0u-c->r[29]; // 804D9E0C
  c->r[0]=c->r[1]+0x00000070u; // 804D9E10
  c->r[3]=c->r[3]|c->r[29]; // 804D9E14
  c->r[6]=c->r[31]|c->r[31]; // 804D9E18
  c->r[5]=sraw(c,c->r[3],31); // 804D9E1C
  c->r[8]=c->r[28]|c->r[28]; // 804D9E20
  c->r[7]=c->r[0]&c->r[5]; // 804D9E24
  c->r[3]=c->r[1]+0x00000068u; // 804D9E28
  c->r[4]=c->r[1]+0x00000060u; // 804D9E2C
  c->r[5]=0u+0x00000001u; // 804D9E30
  c->lr=0x804D9E38u; f_804E0754(c); // 804D9E34
L_804D9E38:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 804D9E38
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804D9E3C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804D9E40
  if (crb(c,2)) { goto L_804D9FE8; } // 804D9E44
  c->r[12]=R32(c->r[3]+0x00000000u); // 804D9E48
  c->r[4]=c->r[30]|c->r[30]; // 804D9E4C
  c->r[5]=c->r[28]|c->r[28]; // 804D9E50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804D9E54
  c->ctr=c->r[12]; // 804D9E58
  if (true) { c->lr=0x804D9E60u; dispatch(c,c->ctr); } // 804D9E5C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9E60
  c->r[29]=c->r[3]|c->r[3]; // 804D9E64
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9E68
  c->r[3]=c->r[1]+0x00000040u; // 804D9E6C
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9E70
  c->r[5]=0u+0x00000000u; // 804D9E74
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804D9E78
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9E7C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 804D9E80
  c->r[25]=R8(c->r[26]+0x00000010u); // 804D9E84
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 804D9E88
  c->r[4]=R32(c->r[26]+0x00000014u); // 804D9E8C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 804D9E90
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9E94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 804D9E98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804D9E9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 804D9EA0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804D9EA4
  c->lr=0x804D9EACu; f_804DDD94(c); // 804D9EA8
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 804D9EAC
  c->r[3]=0u+0x80720000u; // 804D9EB0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9EB4
  c->r[6]=c->r[1]+0x00000008u; // 804D9EB8
  c->r[3]=c->r[3]+0xFFFFA840u; // 804D9EBC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 804D9EC0
  c->r[7]=c->r[3]+c->r[0]; // 804D9EC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804D9EC8
  c->r[4]=R8(c->r[7]+0x00000009u); // 804D9ECC
  c->r[31]=c->r[1]+0x00000080u; // 804D9ED0
  c->r[5]=R8(c->r[7]+0x00000008u); // 804D9ED4
  c->r[9]=c->r[1]+0x00000090u; // 804D9ED8
  c->r[3]=c->r[7]+c->r[4]; // 804D9EDC
  c->r[0]=R8(c->r[7]+c->r[4]); // 804D9EE0
  c->r[8]=R8(c->r[3]+0x00000004u); // 804D9EE4
  c->r[3]=c->r[7]+c->r[5]; // 804D9EE8
  c->r[10]=R8(c->r[3]+0x00000004u); // 804D9EEC
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804D9EF0
  W32(c->r[1]+0x000000ACu,c->r[8]); // 804D9EF4
  c->r[0]=c->r[0]-c->r[8]; // 804D9EF8
  c->r[3]=R8(c->r[3]+0x00000006u); // 804D9EFC
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804D9F00
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9F04
  c->r[0]=c->r[0]^0x80000000u; // 804D9F08
  c->r[3]=c->r[3]-c->r[10]; // 804D9F0C
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804D9F10
  c->r[3]=c->r[3]^0x80000000u; // 804D9F14
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9F18
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804D9F1C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804D9F20
  W32(c->r[1]+0x000000ACu,c->r[3]); // 804D9F24
  c->r[7]=c->r[1]+0x00000098u; // 804D9F28
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 804D9F2C
  c->r[5]=c->r[1]+0x00000088u; // 804D9F30
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9F34
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804D9F38
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 804D9F3C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9F40
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 804D9F44
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804D9F48
  c->r[3]=c->r[29]|c->r[29]; // 804D9F4C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9F50
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804D9F54
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804D9F58
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804D9F5C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804D9F60
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804D9F64
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 804D9F68
  c->r[4]=0u+0x00000001u; // 804D9F6C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804D9F70
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804D9F74
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 804D9F78
  W32(c->r[1]+0x000000A4u,c->r[10]); // 804D9F7C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 804D9F80
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804D9F84
  W32(c->r[1]+0x000000A4u,c->r[8]); // 804D9F88
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 804D9F8C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804D9F90
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 804D9F94
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 804D9F98
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 804D9F9C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 804D9FA0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804D9FA4
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 804D9FA8
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 804D9FAC
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 804D9FB0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804D9FB4
  c->lr=0x804D9FBCu; f_804E0110(c); // 804D9FB8
  c->r[3]=0u-c->r[29]; // 804D9FBC
  c->r[0]=c->r[1]+0x00000070u; // 804D9FC0
  c->r[3]=c->r[3]|c->r[29]; // 804D9FC4
  c->r[6]=c->r[31]|c->r[31]; // 804D9FC8
  c->r[5]=sraw(c,c->r[3],31); // 804D9FCC
  c->r[8]=c->r[28]|c->r[28]; // 804D9FD0
  c->r[7]=c->r[0]&c->r[5]; // 804D9FD4
  c->r[3]=c->r[1]+0x00000068u; // 804D9FD8
  c->r[4]=c->r[1]+0x00000060u; // 804D9FDC
  c->r[5]=0u+0x00000001u; // 804D9FE0
  c->lr=0x804D9FE8u; f_804E0754(c); // 804D9FE4
L_804D9FE8:;
  c->r[11]=c->r[1]+0x000000E0u; // 804D9FE8
  c->lr=0x804D9FF0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804D9FEC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 804D9FF0
  c->lr=c->r[0]; // 804D9FF4
  c->r[1]=c->r[1]+0x000000E0u; // 804D9FF8
  return; // 804D9FFC
}

// DrawFrame8__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_804DA000(Ctx* __restrict c) {
  trace_call(0x804DA000u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DA000
  c->r[0]=c->lr; // 804DA004
  W32(c->r[1]+0x00000174u,c->r[0]); // 804DA008
  c->r[11]=c->r[1]+0x00000170u; // 804DA00C
  c->lr=0x804DA014u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DA010
  {uint32_t ea=c->r[2]+0x000017A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA014
  c->r[0]=0u+0xFFFFFFFFu; // 804DA018
  c->r[8]=0u+0x43300000u; // 804DA01C
  c->r[27]=c->r[3]|c->r[3]; // 804DA020
  c->r[31]=c->r[7]|c->r[7]; // 804DA024
  W32(c->r[1]+0x00000138u,c->r[8]); // 804DA028
  c->r[28]=c->r[4]|c->r[4]; // 804DA02C
  c->r[29]=c->r[5]|c->r[5]; // 804DA030
  W32(c->r[1]+0x00000140u,c->r[8]); // 804DA034
  c->r[30]=c->r[6]|c->r[6]; // 804DA038
  c->r[4]=c->r[31]|c->r[31]; // 804DA03C
  c->r[3]=0u+0x00000000u; // 804DA040
  W32(c->r[1]+0x00000108u,c->r[0]); // 804DA044
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 804DA048
  W32(c->r[1]+0x00000110u,c->r[0]); // 804DA04C
  W32(c->r[1]+0x00000114u,c->r[0]); // 804DA050
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA054
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 804DA058
  c->lr=0x804DA060u; f_804E0054(c); // 804DA05C
  c->r[4]=R32(c->r[29]+0x00000004u); // 804DA060
  c->r[25]=c->r[3]|c->r[3]; // 804DA064
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804DA068
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA06C
  if (crb(c,2)) { goto L_804DA1F8; } // 804DA070
  c->r[3]=c->r[4]|c->r[4]; // 804DA074
  c->r[4]=c->r[25]|c->r[25]; // 804DA078
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA07C
  c->r[5]=c->r[31]|c->r[31]; // 804DA080
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA084
  c->ctr=c->r[12]; // 804DA088
  if (true) { c->lr=0x804DA090u; dispatch(c,c->ctr); } // 804DA08C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA090
  c->r[24]=c->r[3]|c->r[3]; // 804DA094
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA098
  c->r[3]=c->r[1]+0x000000F0u; // 804DA09C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 804DA0A0
  c->r[5]=0u+0x00000000u; // 804DA0A4
  c->r[26]=R8(c->r[29]+0x00000000u); // 804DA0A8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 804DA0AC
  c->r[4]=R32(c->r[29]+0x00000004u); // 804DA0B0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA0B4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 804DA0B8
  c->lr=0x804DA0C0u; f_804DDD94(c); // 804DA0BC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA0C0
  c->r[3]=0u+0x80720000u; // 804DA0C4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA0C8
  c->r[6]=c->r[1]+0x00000040u; // 804DA0CC
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA0D0
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA0D4
  c->r[4]=c->r[3]+c->r[0]; // 804DA0D8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804DA0DC
  c->r[0]=R8(c->r[4]+0x00000009u); // 804DA0E0
  c->r[9]=c->r[1]+0x00000128u; // 804DA0E4
  c->r[3]=R8(c->r[4]+0x00000008u); // 804DA0E8
  c->r[26]=c->r[1]+0x00000118u; // 804DA0EC
  c->r[8]=R8(c->r[4]+c->r[0]); // 804DA0F0
  c->r[23]=c->r[4]+c->r[0]; // 804DA0F4
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 804DA0F8
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA0FC
  W32(c->r[1]+0x00000144u,c->r[8]); // 804DA100
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804DA104
  c->r[0]=R8(c->r[4]+0x00000002u); // 804DA108
  c->r[7]=c->r[1]+0x00000120u; // 804DA10C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA110
  c->r[5]=c->r[1]+0x00000130u; // 804DA114
  c->r[3]=c->r[0]-c->r[10]; // 804DA118
  c->r[0]=R8(c->r[23]+0x00000004u); // 804DA11C
  c->r[3]=c->r[3]^0x80000000u; // 804DA120
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA124
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA128
  c->r[0]=c->r[0]-c->r[8]; // 804DA12C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA130
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA134
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA138
  c->r[0]=c->r[0]^0x80000000u; // 804DA13C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 804DA140
  c->r[3]=c->r[24]|c->r[24]; // 804DA144
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA148
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA14C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA150
  c->r[4]=0u+0x00000001u; // 804DA154
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA158
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA15C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA160
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA164
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA168
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DA16C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA170
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA174
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DA178
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA17C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DA180
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DA184
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 804DA188
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DA18C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DA190
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DA194
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DA198
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DA19C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 804DA1A0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804DA1A4
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 804DA1A8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DA1AC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DA1B0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 804DA1B4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA1B8
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 804DA1BC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804DA1C0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804DA1C4
  c->lr=0x804DA1CCu; f_804E0110(c); // 804DA1C8
  c->r[3]=0u-c->r[24]; // 804DA1CC
  c->r[0]=c->r[1]+0x00000108u; // 804DA1D0
  c->r[4]=c->r[3]|c->r[24]; // 804DA1D4
  c->r[6]=c->r[26]|c->r[26]; // 804DA1D8
  c->r[5]=sraw(c,c->r[4],31); // 804DA1DC
  c->r[3]=c->r[28]|c->r[28]; // 804DA1E0
  c->r[7]=c->r[0]&c->r[5]; // 804DA1E4
  c->r[8]=c->r[31]|c->r[31]; // 804DA1E8
  c->r[4]=c->r[1]+0x00000100u; // 804DA1EC
  c->r[5]=0u+0x00000001u; // 804DA1F0
  c->lr=0x804DA1F8u; f_804E0754(c); // 804DA1F4
L_804DA1F8:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 804DA1F8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DA1FC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA200
  if (crb(c,2)) { goto L_804DA3B0; } // 804DA204
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA208
  c->r[4]=c->r[25]|c->r[25]; // 804DA20C
  c->r[5]=c->r[31]|c->r[31]; // 804DA210
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA214
  c->ctr=c->r[12]; // 804DA218
  if (true) { c->lr=0x804DA220u; dispatch(c,c->ctr); } // 804DA21C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA220
  c->r[24]=c->r[3]|c->r[3]; // 804DA224
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA228
  c->r[3]=c->r[1]+0x000000E0u; // 804DA22C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA230
  c->r[5]=0u+0x00000000u; // 804DA234
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804DA238
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA23C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 804DA240
  c->r[26]=R8(c->r[29]+0x00000030u); // 804DA244
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA248
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 804DA24C
  c->r[4]=R32(c->r[29]+0x00000034u); // 804DA250
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 804DA254
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA258
  c->lr=0x804DA260u; f_804DDD94(c); // 804DA25C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA260
  c->r[3]=0u+0x80720000u; // 804DA264
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA268
  c->r[6]=c->r[1]+0x00000038u; // 804DA26C
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA270
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA274
  c->r[4]=c->r[3]+c->r[0]; // 804DA278
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804DA27C
  c->r[0]=R8(c->r[4]+0x00000009u); // 804DA280
  c->r[9]=c->r[1]+0x00000128u; // 804DA284
  c->r[3]=R8(c->r[4]+0x00000008u); // 804DA288
  c->r[26]=c->r[1]+0x00000118u; // 804DA28C
  c->r[8]=R8(c->r[4]+c->r[0]); // 804DA290
  c->r[23]=c->r[4]+c->r[0]; // 804DA294
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 804DA298
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA29C
  W32(c->r[1]+0x00000144u,c->r[8]); // 804DA2A0
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 804DA2A4
  c->r[0]=R8(c->r[4]+0x00000002u); // 804DA2A8
  c->r[7]=c->r[1]+0x00000120u; // 804DA2AC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA2B0
  c->r[5]=c->r[1]+0x00000130u; // 804DA2B4
  c->r[3]=c->r[0]-c->r[10]; // 804DA2B8
  c->r[0]=R8(c->r[23]+0x00000004u); // 804DA2BC
  c->r[3]=c->r[3]^0x80000000u; // 804DA2C0
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA2C4
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA2C8
  c->r[0]=c->r[0]-c->r[8]; // 804DA2CC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA2D0
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA2D4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA2D8
  c->r[0]=c->r[0]^0x80000000u; // 804DA2DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 804DA2E0
  c->r[3]=c->r[24]|c->r[24]; // 804DA2E4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA2E8
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA2EC
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA2F0
  c->r[4]=0u+0x00000001u; // 804DA2F4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA2F8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA2FC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA300
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA304
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA308
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DA30C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA310
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA314
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DA318
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA31C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DA320
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DA324
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 804DA328
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DA32C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DA330
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DA334
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DA338
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DA33C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 804DA340
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804DA344
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 804DA348
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DA34C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DA350
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 804DA354
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA358
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 804DA35C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804DA360
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804DA364
  c->lr=0x804DA36Cu; f_804E0110(c); // 804DA368
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA36C
  c->r[0]=0u-c->r[24]; // 804DA370
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA374
  c->r[0]=c->r[0]|c->r[24]; // 804DA378
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA37C
  c->r[3]=sraw(c,c->r[0],31); // 804DA380
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA384
  c->r[0]=c->r[1]+0x00000108u; // 804DA388
  c->r[7]=c->r[0]&c->r[3]; // 804DA38C
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 804DA390
  c->r[6]=c->r[26]|c->r[26]; // 804DA394
  c->r[8]=c->r[31]|c->r[31]; // 804DA398
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 804DA39C
  c->r[3]=c->r[1]+0x000000D8u; // 804DA3A0
  c->r[4]=c->r[1]+0x00000100u; // 804DA3A4
  c->r[5]=0u+0x00000001u; // 804DA3A8
  c->lr=0x804DA3B0u; f_804E0754(c); // 804DA3AC
L_804DA3B0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 804DA3B0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DA3B4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA3B8
  if (crb(c,2)) { goto L_804DA564; } // 804DA3BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA3C0
  c->r[4]=c->r[25]|c->r[25]; // 804DA3C4
  c->r[5]=c->r[31]|c->r[31]; // 804DA3C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA3CC
  c->ctr=c->r[12]; // 804DA3D0
  if (true) { c->lr=0x804DA3D8u; dispatch(c,c->ctr); } // 804DA3D4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA3D8
  c->r[24]=c->r[3]|c->r[3]; // 804DA3DC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA3E0
  c->r[3]=c->r[1]+0x000000C8u; // 804DA3E4
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 804DA3E8
  c->r[5]=0u+0x00000000u; // 804DA3EC
  c->r[26]=R8(c->r[29]+0x00000008u); // 804DA3F0
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 804DA3F4
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 804DA3F8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA3FC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 804DA400
  c->lr=0x804DA408u; f_804DDD94(c); // 804DA404
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA408
  c->r[3]=0u+0x80720000u; // 804DA40C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA410
  c->r[6]=c->r[1]+0x00000030u; // 804DA414
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA418
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA41C
  c->r[11]=c->r[3]+c->r[0]; // 804DA420
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 804DA424
  c->r[0]=R8(c->r[11]+0x00000009u); // 804DA428
  c->r[9]=c->r[1]+0x00000130u; // 804DA42C
  c->r[5]=R8(c->r[11]+0x00000008u); // 804DA430
  c->r[8]=c->r[1]+0x00000120u; // 804DA434
  c->r[4]=c->r[11]+c->r[0]; // 804DA438
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA43C
  c->r[7]=R8(c->r[4]+0x00000002u); // 804DA440
  c->r[3]=c->r[11]+c->r[5]; // 804DA444
  c->r[10]=R8(c->r[3]+0x00000002u); // 804DA448
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804DA44C
  c->r[0]=R8(c->r[11]+c->r[5]); // 804DA450
  c->r[26]=c->r[1]+0x00000118u; // 804DA454
  W32(c->r[1]+0x00000144u,c->r[7]); // 804DA458
  c->r[5]=c->r[1]+0x00000128u; // 804DA45C
  c->r[3]=c->r[0]-c->r[10]; // 804DA460
  c->r[0]=R8(c->r[4]+0x00000006u); // 804DA464
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA468
  c->r[3]=c->r[3]^0x80000000u; // 804DA46C
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA470
  c->r[0]=c->r[0]-c->r[7]; // 804DA474
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA478
  c->r[0]=c->r[0]^0x80000000u; // 804DA47C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA480
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA484
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA488
  c->r[3]=c->r[24]|c->r[24]; // 804DA48C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 804DA490
  c->r[4]=0u+0x00000001u; // 804DA494
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA498
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA49C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA4A0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA4A4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA4A8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA4AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA4B0
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA4B4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA4B8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DA4BC
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA4C0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DA4C4
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA4C8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DA4CC
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 804DA4D0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DA4D4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DA4D8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DA4DC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DA4E0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DA4E4
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 804DA4E8
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 804DA4EC
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 804DA4F0
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 804DA4F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DA4F8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DA4FC
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 804DA500
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA504
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 804DA508
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 804DA50C
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 804DA510
  c->lr=0x804DA518u; f_804E0110(c); // 804DA514
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA518
  c->r[0]=0u-c->r[24]; // 804DA51C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA520
  c->r[0]=c->r[0]|c->r[24]; // 804DA524
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA528
  c->r[3]=sraw(c,c->r[0],31); // 804DA52C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804DA530
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA534
  c->r[0]=c->r[1]+0x00000108u; // 804DA538
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 804DA53C
  c->r[7]=c->r[0]&c->r[3]; // 804DA540
  c->r[6]=c->r[26]|c->r[26]; // 804DA544
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA548
  c->r[8]=c->r[31]|c->r[31]; // 804DA54C
  c->r[3]=c->r[1]+0x000000C0u; // 804DA550
  c->r[4]=c->r[1]+0x00000100u; // 804DA554
  c->r[5]=0u+0x00000001u; // 804DA558
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 804DA55C
  c->lr=0x804DA564u; f_804E0754(c); // 804DA560
L_804DA564:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 804DA564
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DA568
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA56C
  if (crb(c,2)) { goto L_804DA730; } // 804DA570
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA574
  c->r[4]=c->r[25]|c->r[25]; // 804DA578
  c->r[5]=c->r[31]|c->r[31]; // 804DA57C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA580
  c->ctr=c->r[12]; // 804DA584
  if (true) { c->lr=0x804DA58Cu; dispatch(c,c->ctr); } // 804DA588
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA58C
  c->r[24]=c->r[3]|c->r[3]; // 804DA590
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA594
  c->r[3]=c->r[1]+0x000000B0u; // 804DA598
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA59C
  c->r[5]=0u+0x00000000u; // 804DA5A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804DA5A4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA5A8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 804DA5AC
  c->r[26]=R8(c->r[29]+0x00000028u); // 804DA5B0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA5B4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 804DA5B8
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 804DA5BC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 804DA5C0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 804DA5C4
  c->lr=0x804DA5CCu; f_804DDD94(c); // 804DA5C8
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA5CC
  c->r[3]=0u+0x80720000u; // 804DA5D0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA5D4
  c->r[6]=c->r[1]+0x00000028u; // 804DA5D8
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA5DC
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA5E0
  c->r[11]=c->r[3]+c->r[0]; // 804DA5E4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804DA5E8
  c->r[0]=R8(c->r[11]+0x00000009u); // 804DA5EC
  c->r[9]=c->r[1]+0x00000130u; // 804DA5F0
  c->r[5]=R8(c->r[11]+0x00000008u); // 804DA5F4
  c->r[8]=c->r[1]+0x00000120u; // 804DA5F8
  c->r[4]=c->r[11]+c->r[0]; // 804DA5FC
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA600
  c->r[7]=R8(c->r[4]+0x00000002u); // 804DA604
  c->r[3]=c->r[11]+c->r[5]; // 804DA608
  c->r[10]=R8(c->r[3]+0x00000002u); // 804DA60C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804DA610
  c->r[0]=R8(c->r[11]+c->r[5]); // 804DA614
  c->r[26]=c->r[1]+0x00000118u; // 804DA618
  W32(c->r[1]+0x00000144u,c->r[7]); // 804DA61C
  c->r[5]=c->r[1]+0x00000128u; // 804DA620
  c->r[3]=c->r[0]-c->r[10]; // 804DA624
  c->r[0]=R8(c->r[4]+0x00000006u); // 804DA628
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA62C
  c->r[3]=c->r[3]^0x80000000u; // 804DA630
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA634
  c->r[0]=c->r[0]-c->r[7]; // 804DA638
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA63C
  c->r[0]=c->r[0]^0x80000000u; // 804DA640
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA644
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA648
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA64C
  c->r[3]=c->r[24]|c->r[24]; // 804DA650
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804DA654
  c->r[4]=0u+0x00000001u; // 804DA658
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA65C
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA660
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA664
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA668
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA66C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA670
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA674
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA678
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA67C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DA680
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA684
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DA688
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA68C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DA690
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 804DA694
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DA698
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DA69C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DA6A0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DA6A4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DA6A8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 804DA6AC
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 804DA6B0
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 804DA6B4
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 804DA6B8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DA6BC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DA6C0
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 804DA6C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA6C8
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 804DA6CC
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 804DA6D0
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 804DA6D4
  c->lr=0x804DA6DCu; f_804E0110(c); // 804DA6D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA6DC
  c->r[0]=0u-c->r[24]; // 804DA6E0
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA6E4
  c->r[0]=c->r[0]|c->r[24]; // 804DA6E8
  c->r[3]=sraw(c,c->r[0],31); // 804DA6EC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA6F0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804DA6F4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA6F8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA6FC
  c->r[0]=c->r[1]+0x00000108u; // 804DA700
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 804DA704
  c->r[7]=c->r[0]&c->r[3]; // 804DA708
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA70C
  c->r[6]=c->r[26]|c->r[26]; // 804DA710
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 804DA714
  c->r[8]=c->r[31]|c->r[31]; // 804DA718
  c->r[3]=c->r[1]+0x000000A8u; // 804DA71C
  c->r[4]=c->r[1]+0x00000100u; // 804DA720
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 804DA724
  c->r[5]=0u+0x00000001u; // 804DA728
  c->lr=0x804DA730u; f_804E0754(c); // 804DA72C
L_804DA730:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804DA730
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DA734
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA738
  if (crb(c,2)) { goto L_804DA8F4; } // 804DA73C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA740
  c->r[4]=c->r[25]|c->r[25]; // 804DA744
  c->r[5]=c->r[31]|c->r[31]; // 804DA748
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA74C
  c->ctr=c->r[12]; // 804DA750
  if (true) { c->lr=0x804DA758u; dispatch(c,c->ctr); } // 804DA754
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA758
  c->r[24]=c->r[3]|c->r[3]; // 804DA75C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA760
  c->r[3]=c->r[1]+0x00000098u; // 804DA764
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 804DA768
  c->r[5]=0u+0x00000000u; // 804DA76C
  c->r[26]=R8(c->r[29]+0x00000018u); // 804DA770
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 804DA774
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 804DA778
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA77C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 804DA780
  c->lr=0x804DA788u; f_804DDD94(c); // 804DA784
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA788
  c->r[3]=0u+0x80720000u; // 804DA78C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA790
  c->r[5]=c->r[1]+0x00000020u; // 804DA794
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA798
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA79C
  c->r[3]=c->r[3]+c->r[0]; // 804DA7A0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DA7A4
  c->r[0]=R8(c->r[3]+0x00000009u); // 804DA7A8
  c->r[9]=c->r[1]+0x00000120u; // 804DA7AC
  c->r[6]=R8(c->r[3]+0x00000008u); // 804DA7B0
  c->r[8]=c->r[1]+0x00000130u; // 804DA7B4
  c->r[4]=c->r[3]+c->r[0]; // 804DA7B8
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA7BC
  c->r[3]=c->r[3]+c->r[6]; // 804DA7C0
  c->r[7]=R8(c->r[4]+0x00000006u); // 804DA7C4
  c->r[10]=R8(c->r[3]+0x00000006u); // 804DA7C8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DA7CC
  W32(c->r[1]+0x00000144u,c->r[7]); // 804DA7D0
  c->r[6]=c->r[1]+0x00000128u; // 804DA7D4
  c->r[0]=R8(c->r[3]+0x00000004u); // 804DA7D8
  c->r[26]=c->r[1]+0x00000118u; // 804DA7DC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA7E0
  c->r[3]=c->r[0]-c->r[10]; // 804DA7E4
  c->r[0]=R8(c->r[4]+0x00000002u); // 804DA7E8
  c->r[3]=c->r[3]^0x80000000u; // 804DA7EC
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA7F0
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA7F4
  c->r[0]=c->r[0]-c->r[7]; // 804DA7F8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA7FC
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA800
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA804
  c->r[0]=c->r[0]^0x80000000u; // 804DA808
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804DA80C
  c->r[3]=c->r[24]|c->r[24]; // 804DA810
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA814
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA818
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA81C
  c->r[4]=0u+0x00000001u; // 804DA820
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA824
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA828
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA82C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA830
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA834
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DA838
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA83C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA840
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DA844
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DA848
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DA84C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DA850
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 804DA854
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DA858
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DA85C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DA860
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DA864
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DA868
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 804DA86C
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 804DA870
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 804DA874
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DA878
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DA87C
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 804DA880
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DA884
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 804DA888
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804DA88C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 804DA890
  c->lr=0x804DA898u; f_804E0110(c); // 804DA894
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DA898
  c->r[0]=0u-c->r[24]; // 804DA89C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA8A0
  c->r[0]=c->r[0]|c->r[24]; // 804DA8A4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA8A8
  c->r[3]=sraw(c,c->r[0],31); // 804DA8AC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA8B0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 804DA8B4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA8B8
  c->r[0]=c->r[1]+0x00000108u; // 804DA8BC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804DA8C0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA8C4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804DA8C8
  c->r[7]=c->r[0]&c->r[3]; // 804DA8CC
  c->r[6]=c->r[26]|c->r[26]; // 804DA8D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA8D4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 804DA8D8
  c->r[8]=c->r[31]|c->r[31]; // 804DA8DC
  c->r[3]=c->r[1]+0x00000090u; // 804DA8E0
  c->r[4]=c->r[1]+0x00000100u; // 804DA8E4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 804DA8E8
  c->r[5]=0u+0x00000001u; // 804DA8EC
  c->lr=0x804DA8F4u; f_804E0754(c); // 804DA8F0
L_804DA8F4:;
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 804DA8F4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DA8F8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DA8FC
  if (crb(c,2)) { goto L_804DAAC0; } // 804DA900
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DA904
  c->r[4]=c->r[25]|c->r[25]; // 804DA908
  c->r[5]=c->r[31]|c->r[31]; // 804DA90C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DA910
  c->ctr=c->r[12]; // 804DA914
  if (true) { c->lr=0x804DA91Cu; dispatch(c,c->ctr); } // 804DA918
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA91C
  c->r[24]=c->r[3]|c->r[3]; // 804DA920
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA924
  c->r[3]=c->r[1]+0x00000080u; // 804DA928
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804DA92C
  c->r[5]=0u+0x00000000u; // 804DA930
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804DA934
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA938
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 804DA93C
  c->r[26]=R8(c->r[29]+0x00000038u); // 804DA940
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DA944
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 804DA948
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 804DA94C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 804DA950
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DA954
  c->lr=0x804DA95Cu; f_804DDD94(c); // 804DA958
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DA95C
  c->r[3]=0u+0x80720000u; // 804DA960
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DA964
  c->r[5]=c->r[1]+0x00000018u; // 804DA968
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DA96C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA970
  c->r[3]=c->r[3]+c->r[0]; // 804DA974
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804DA978
  c->r[0]=R8(c->r[3]+0x00000009u); // 804DA97C
  c->r[9]=c->r[1]+0x00000120u; // 804DA980
  c->r[6]=R8(c->r[3]+0x00000008u); // 804DA984
  c->r[8]=c->r[1]+0x00000130u; // 804DA988
  c->r[4]=c->r[3]+c->r[0]; // 804DA98C
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DA990
  c->r[3]=c->r[3]+c->r[6]; // 804DA994
  c->r[7]=R8(c->r[4]+0x00000006u); // 804DA998
  c->r[10]=R8(c->r[3]+0x00000006u); // 804DA99C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DA9A0
  W32(c->r[1]+0x00000144u,c->r[7]); // 804DA9A4
  c->r[6]=c->r[1]+0x00000128u; // 804DA9A8
  c->r[0]=R8(c->r[3]+0x00000004u); // 804DA9AC
  c->r[26]=c->r[1]+0x00000118u; // 804DA9B0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA9B4
  c->r[3]=c->r[0]-c->r[10]; // 804DA9B8
  c->r[0]=R8(c->r[4]+0x00000002u); // 804DA9BC
  c->r[3]=c->r[3]^0x80000000u; // 804DA9C0
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DA9C4
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DA9C8
  c->r[0]=c->r[0]-c->r[7]; // 804DA9CC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DA9D0
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DA9D4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA9D8
  c->r[0]=c->r[0]^0x80000000u; // 804DA9DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DA9E0
  c->r[3]=c->r[24]|c->r[24]; // 804DA9E4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DA9E8
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DA9EC
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DA9F0
  c->r[4]=0u+0x00000001u; // 804DA9F4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DA9F8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DA9FC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DAA00
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DAA04
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAA08
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 804DAA0C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAA10
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DAA14
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 804DAA18
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DAA1C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 804DAA20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DAA24
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 804DAA28
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 804DAA2C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 804DAA30
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 804DAA34
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DAA38
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DAA3C
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 804DAA40
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 804DAA44
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 804DAA48
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804DAA4C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 804DAA50
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 804DAA54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DAA58
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 804DAA5C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 804DAA60
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 804DAA64
  c->lr=0x804DAA6Cu; f_804E0110(c); // 804DAA68
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAA6C
  c->r[0]=0u-c->r[24]; // 804DAA70
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAA74
  c->r[0]=c->r[0]|c->r[24]; // 804DAA78
  c->r[3]=sraw(c,c->r[0],31); // 804DAA7C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804DAA80
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 804DAA84
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAA88
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAA8C
  c->r[0]=c->r[1]+0x00000108u; // 804DAA90
  c->r[7]=c->r[0]&c->r[3]; // 804DAA94
  c->r[6]=c->r[26]|c->r[26]; // 804DAA98
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804DAA9C
  c->r[8]=c->r[31]|c->r[31]; // 804DAAA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DAAA4
  c->r[3]=c->r[1]+0x00000078u; // 804DAAA8
  c->r[4]=c->r[1]+0x00000100u; // 804DAAAC
  c->r[5]=0u+0x00000001u; // 804DAAB0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 804DAAB4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 804DAAB8
  c->lr=0x804DAAC0u; f_804E0754(c); // 804DAABC
L_804DAAC0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804DAAC0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DAAC4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DAAC8
  if (crb(c,2)) { goto L_804DAC74; } // 804DAACC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DAAD0
  c->r[4]=c->r[25]|c->r[25]; // 804DAAD4
  c->r[5]=c->r[31]|c->r[31]; // 804DAAD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DAADC
  c->ctr=c->r[12]; // 804DAAE0
  if (true) { c->lr=0x804DAAE8u; dispatch(c,c->ctr); } // 804DAAE4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAAE8
  c->r[24]=c->r[3]|c->r[3]; // 804DAAEC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAAF0
  c->r[3]=c->r[1]+0x00000068u; // 804DAAF4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 804DAAF8
  c->r[5]=0u+0x00000000u; // 804DAAFC
  c->r[26]=R8(c->r[29]+0x00000010u); // 804DAB00
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 804DAB04
  c->r[4]=R32(c->r[29]+0x00000014u); // 804DAB08
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 804DAB0C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 804DAB10
  c->lr=0x804DAB18u; f_804DDD94(c); // 804DAB14
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 804DAB18
  c->r[3]=0u+0x80720000u; // 804DAB1C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804DAB20
  c->r[6]=c->r[1]+0x00000010u; // 804DAB24
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DAB28
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DAB2C
  c->r[7]=c->r[3]+c->r[0]; // 804DAB30
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 804DAB34
  c->r[4]=R8(c->r[7]+0x00000009u); // 804DAB38
  c->r[26]=c->r[1]+0x00000118u; // 804DAB3C
  c->r[5]=R8(c->r[7]+0x00000008u); // 804DAB40
  c->r[9]=c->r[1]+0x00000128u; // 804DAB44
  c->r[3]=c->r[7]+c->r[4]; // 804DAB48
  c->r[0]=R8(c->r[7]+c->r[4]); // 804DAB4C
  c->r[8]=R8(c->r[3]+0x00000004u); // 804DAB50
  c->r[3]=c->r[7]+c->r[5]; // 804DAB54
  c->r[10]=R8(c->r[3]+0x00000004u); // 804DAB58
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804DAB5C
  W32(c->r[1]+0x00000144u,c->r[8]); // 804DAB60
  c->r[0]=c->r[0]-c->r[8]; // 804DAB64
  c->r[3]=R8(c->r[3]+0x00000006u); // 804DAB68
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804DAB6C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DAB70
  c->r[0]=c->r[0]^0x80000000u; // 804DAB74
  c->r[3]=c->r[3]-c->r[10]; // 804DAB78
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DAB7C
  c->r[3]=c->r[3]^0x80000000u; // 804DAB80
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DAB84
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DAB88
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DAB8C
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DAB90
  c->r[7]=c->r[1]+0x00000130u; // 804DAB94
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 804DAB98
  c->r[5]=c->r[1]+0x00000120u; // 804DAB9C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DABA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 804DABA4
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 804DABA8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DABAC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DABB0
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DABB4
  c->r[3]=c->r[24]|c->r[24]; // 804DABB8
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DABBC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DABC0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DABC4
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DABC8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DABCC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DABD0
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 804DABD4
  c->r[4]=0u+0x00000001u; // 804DABD8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DABDC
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DABE0
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 804DABE4
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DABE8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 804DABEC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804DABF0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 804DABF4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 804DABF8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DABFC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 804DAC00
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 804DAC04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 804DAC08
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 804DAC0C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804DAC10
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 804DAC14
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 804DAC18
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 804DAC1C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804DAC20
  c->lr=0x804DAC28u; f_804E0110(c); // 804DAC24
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAC28
  c->r[0]=0u-c->r[24]; // 804DAC2C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAC30
  c->r[0]=c->r[0]|c->r[24]; // 804DAC34
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DAC38
  c->r[3]=sraw(c,c->r[0],31); // 804DAC3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804DAC40
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAC44
  c->r[0]=c->r[1]+0x00000108u; // 804DAC48
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 804DAC4C
  c->r[7]=c->r[0]&c->r[3]; // 804DAC50
  c->r[6]=c->r[26]|c->r[26]; // 804DAC54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804DAC58
  c->r[8]=c->r[31]|c->r[31]; // 804DAC5C
  c->r[3]=c->r[1]+0x00000060u; // 804DAC60
  c->r[4]=c->r[1]+0x00000100u; // 804DAC64
  c->r[5]=0u+0x00000001u; // 804DAC68
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 804DAC6C
  c->lr=0x804DAC74u; f_804E0754(c); // 804DAC70
L_804DAC74:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 804DAC74
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DAC78
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DAC7C
  if (crb(c,2)) { goto L_804DAE30; } // 804DAC80
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DAC84
  c->r[4]=c->r[25]|c->r[25]; // 804DAC88
  c->r[5]=c->r[31]|c->r[31]; // 804DAC8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DAC90
  c->ctr=c->r[12]; // 804DAC94
  if (true) { c->lr=0x804DAC9Cu; dispatch(c,c->ctr); } // 804DAC98
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAC9C
  c->r[24]=c->r[3]|c->r[3]; // 804DACA0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DACA4
  c->r[3]=c->r[1]+0x00000050u; // 804DACA8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DACAC
  c->r[5]=0u+0x00000000u; // 804DACB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804DACB4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DACB8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 804DACBC
  c->r[25]=R8(c->r[29]+0x00000020u); // 804DACC0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DACC4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 804DACC8
  c->r[4]=R32(c->r[29]+0x00000024u); // 804DACCC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 804DACD0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 804DACD4
  c->lr=0x804DACDCu; f_804DDD94(c); // 804DACD8
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 804DACDC
  c->r[3]=0u+0x80720000u; // 804DACE0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DACE4
  c->r[6]=c->r[1]+0x00000008u; // 804DACE8
  c->r[3]=c->r[3]+0xFFFFA840u; // 804DACEC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DACF0
  c->r[7]=c->r[3]+c->r[0]; // 804DACF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804DACF8
  c->r[4]=R8(c->r[7]+0x00000009u); // 804DACFC
  c->r[27]=c->r[1]+0x00000118u; // 804DAD00
  c->r[5]=R8(c->r[7]+0x00000008u); // 804DAD04
  c->r[9]=c->r[1]+0x00000128u; // 804DAD08
  c->r[3]=c->r[7]+c->r[4]; // 804DAD0C
  c->r[0]=R8(c->r[7]+c->r[4]); // 804DAD10
  c->r[8]=R8(c->r[3]+0x00000004u); // 804DAD14
  c->r[3]=c->r[7]+c->r[5]; // 804DAD18
  c->r[10]=R8(c->r[3]+0x00000004u); // 804DAD1C
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 804DAD20
  W32(c->r[1]+0x00000144u,c->r[8]); // 804DAD24
  c->r[0]=c->r[0]-c->r[8]; // 804DAD28
  c->r[3]=R8(c->r[3]+0x00000006u); // 804DAD2C
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804DAD30
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DAD34
  c->r[0]=c->r[0]^0x80000000u; // 804DAD38
  c->r[3]=c->r[3]-c->r[10]; // 804DAD3C
  {uint32_t ea=c->r[2]+0x000017B0u; c->f[8]=RF64(ea);} // 804DAD40
  c->r[3]=c->r[3]^0x80000000u; // 804DAD44
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DAD48
  {uint32_t ea=c->r[2]+0x000017B8u; c->f[5]=RF64(ea);} // 804DAD4C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 804DAD50
  W32(c->r[1]+0x00000144u,c->r[3]); // 804DAD54
  c->r[7]=c->r[1]+0x00000130u; // 804DAD58
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 804DAD5C
  c->r[5]=c->r[1]+0x00000120u; // 804DAD60
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DAD64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804DAD68
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 804DAD6C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DAD70
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DAD74
  W32(c->r[1]+0x00000144u,c->r[0]); // 804DAD78
  c->r[3]=c->r[24]|c->r[24]; // 804DAD7C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAD80
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 804DAD84
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 804DAD88
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAD8C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 804DAD90
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAD94
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[7]);} // 804DAD98
  c->r[4]=0u+0x00000001u; // 804DAD9C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804DADA0
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 804DADA4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 804DADA8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 804DADAC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 804DADB0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 804DADB4
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 804DADB8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 804DADBC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804DADC0
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 804DADC4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 804DADC8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 804DADCC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 804DADD0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804DADD4
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 804DADD8
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 804DADDC
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 804DADE0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 804DADE4
  c->lr=0x804DADECu; f_804E0110(c); // 804DADE8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DADEC
  c->r[0]=0u-c->r[24]; // 804DADF0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DADF4
  c->r[0]=c->r[0]|c->r[24]; // 804DADF8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DADFC
  c->r[3]=sraw(c,c->r[0],31); // 804DAE00
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804DAE04
  c->r[0]=c->r[1]+0x00000108u; // 804DAE08
  c->r[7]=c->r[0]&c->r[3]; // 804DAE0C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 804DAE10
  c->r[6]=c->r[27]|c->r[27]; // 804DAE14
  c->r[8]=c->r[31]|c->r[31]; // 804DAE18
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 804DAE1C
  c->r[3]=c->r[1]+0x00000048u; // 804DAE20
  c->r[4]=c->r[1]+0x00000100u; // 804DAE24
  c->r[5]=0u+0x00000001u; // 804DAE28
  c->lr=0x804DAE30u; f_804E0754(c); // 804DAE2C
L_804DAE30:;
  c->r[11]=c->r[1]+0x00000170u; // 804DAE30
  c->lr=0x804DAE38u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DAE34
  c->r[0]=R32(c->r[1]+0x00000174u); // 804DAE38
  c->lr=c->r[0]; // 804DAE3C
  c->r[1]=c->r[1]+0x00000170u; // 804DAE40
  return; // 804DAE44
}

// fn_804DAE48
void f_804DAE48(Ctx* __restrict c) {
  trace_call(0x804DAE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DAE48
  c->r[0]=c->lr; // 804DAE4C
  cmps(c,0,(int32_t)c->r[5],4); // 804DAE50
  W32(c->r[1]+0x00000044u,c->r[0]); // 804DAE54
  c->r[0]=0u+0x00000000u; // 804DAE58
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804DAE5C
  c->r[31]=c->r[6]|c->r[6]; // 804DAE60
  W32(c->r[1]+0x00000038u,c->r[30]); // 804DAE64
  c->r[30]=c->r[3]|c->r[3]; // 804DAE68
  W32(c->r[1]+0x00000020u,c->r[0]); // 804DAE6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DAE70
  W32(c->r[1]+0x00000028u,c->r[0]); // 804DAE74
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 804DAE78
  if (crb(c,2)) { goto L_804DAEC8; } // 804DAE7C
  if (!crb(c,0)) { goto L_804DAE90; } // 804DAE80
  cmps(c,0,(int32_t)c->r[5],1); // 804DAE84
  if (crb(c,2)) { goto L_804DAE9C; } // 804DAE88
  goto L_804DAF10; // 804DAE8C
L_804DAE90:;
  cmps(c,0,(int32_t)c->r[5],8); // 804DAE90
  if (crb(c,2)) { goto L_804DAEC8; } // 804DAE94
  goto L_804DAF10; // 804DAE98
L_804DAE9C:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 804DAE9C
  c->r[3]=c->r[1]+0x00000018u; // 804DAEA0
  c->r[5]=0u+0x00000000u; // 804DAEA4
  c->lr=0x804DAEACu; f_804DDD94(c); // 804DAEA8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAEAC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAEB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804DAEB4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804DAEB8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804DAEBC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804DAEC0
  goto L_804DAF10; // 804DAEC4
L_804DAEC8:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 804DAEC8
  c->r[3]=c->r[1]+0x00000010u; // 804DAECC
  c->r[5]=0u+0x00000000u; // 804DAED0
  c->lr=0x804DAED8u; f_804DDD94(c); // 804DAED4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAED8
  c->r[3]=c->r[1]+0x00000008u; // 804DAEDC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAEE0
  c->r[5]=0u+0x00000000u; // 804DAEE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804DAEE8
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 804DAEEC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804DAEF0
  c->lr=0x804DAEF8u; f_804DDD94(c); // 804DAEF4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DAEF8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DAEFC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804DAF00
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DAF04
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804DAF08
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804DAF0C
L_804DAF10:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 804DAF10
  c->r[4]=R32(c->r[1]+0x00000024u); // 804DAF14
  c->r[3]=R32(c->r[1]+0x00000028u); // 804DAF18
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804DAF1C
  W32(c->r[30]+0x00000000u,c->r[5]); // 804DAF20
  W32(c->r[30]+0x00000004u,c->r[4]); // 804DAF24
  W32(c->r[30]+0x00000008u,c->r[3]); // 804DAF28
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 804DAF2C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804DAF30
  c->r[30]=R32(c->r[1]+0x00000038u); // 804DAF34
  c->r[0]=R32(c->r[1]+0x00000044u); // 804DAF38
  c->lr=c->r[0]; // 804DAF3C
  c->r[1]=c->r[1]+0x00000040u; // 804DAF40
  return; // 804DAF44
}

// GetMaterialNum__Q34nw4r3lyt6WindowCFv
void f_804DAF48(Ctx* __restrict c) {
  trace_call(0x804DAF48u);
  c->r[3]=R8(c->r[3]+0x00000104u); // 804DAF48
  c->r[0]=c->r[3]+0x00000001u; // 804DAF4C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 804DAF50
  return; // 804DAF54
}

// GetMaterial__Q34nw4r3lyt6WindowCFUl
void f_804DAF58(Ctx* __restrict c) {
  trace_call(0x804DAF58u);
  cmps(c,0,(int32_t)c->r[4],0); // 804DAF58
  if (!crb(c,2)) { goto L_804DAF70; } // 804DAF5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DAF60
  c->r[12]=R32(c->r[12]+0x00000074u); // 804DAF64
  c->ctr=c->r[12]; // 804DAF68
  if (true) { dispatch(c,c->ctr); return; } // 804DAF6C
L_804DAF70:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DAF70
  c->r[12]=R32(c->r[12]+0x00000078u); // 804DAF74
  c->ctr=c->r[12]; // 804DAF78
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 804DAF7C
  if (true) { dispatch(c,c->ctr); return; } // 804DAF80
}

// fn_804DAF84
void f_804DAF84(Ctx* __restrict c) {
  trace_call(0x804DAF84u);
  c->r[0]=R8(c->r[3]+0x00000104u); // 804DAF84
  cmpu(c,0,c->r[4],c->r[0]); // 804DAF88
  if (crb(c,0)) { goto L_804DAF98; } // 804DAF8C
  c->r[3]=0u+0x00000000u; // 804DAF90
  return; // 804DAF94
L_804DAF98:;
  c->r[3]=R32(c->r[3]+0x00000100u); // 804DAF98
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DAF9C
  c->r[3]=c->r[3]+c->r[0]; // 804DAFA0
  c->r[3]=R32(c->r[3]+0x00000004u); // 804DAFA4
  return; // 804DAFA8
}

// fn_804DAFAC
void f_804DAFAC(Ctx* __restrict c) {
  trace_call(0x804DAFACu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DAFAC
  c->r[12]=R32(c->r[12]+0x00000068u); // 804DAFB0
  c->ctr=c->r[12]; // 804DAFB4
  if (true) { dispatch(c,c->ctr); return; } // 804DAFB8
}

// fn_804DAFBC
void f_804DAFBC(Ctx* __restrict c) {
  trace_call(0x804DAFBCu);
  c->r[3]=c->r[13]+0xFFFFE4B8u; // 804DAFBC
  return; // 804DAFC0
}

// fn_804DAFC4
void f_804DAFC4(Ctx* __restrict c) {
  trace_call(0x804DAFC4u);
  c->r[0]=c->r[13]+0xFFFFE498u; // 804DAFC4
  W32(c->r[13]+0xFFFFE4B8u,c->r[0]); // 804DAFC8
  return; // 804DAFCC
}

// fn_804DAFD0
void f_804DAFD0(Ctx* __restrict c) {
  trace_call(0x804DAFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DAFD0
  c->r[0]=c->lr; // 804DAFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DAFD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DAFDC
  c->r[31]=c->r[3]|c->r[3]; // 804DAFE0
  c->lr=0x804DAFE8u; f_804D4918(c); // 804DAFE4
  c->r[4]=0u+0x80720000u; // 804DAFE8
  c->r[3]=c->r[31]|c->r[31]; // 804DAFEC
  c->r[4]=c->r[4]+0xFFFFA908u; // 804DAFF0
  W32(c->r[31]+0x00000000u,c->r[4]); // 804DAFF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DAFF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DAFFC
  c->lr=c->r[0]; // 804DB000
  c->r[1]=c->r[1]+0x00000010u; // 804DB004
  return; // 804DB008
}

// fn_804DB00C
void f_804DB00C(Ctx* __restrict c) {
  trace_call(0x804DB00Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DB00C
  c->r[0]=c->lr; // 804DB010
  cmps(c,0,(int32_t)c->r[3],0); // 804DB014
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DB018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DB01C
  c->r[31]=c->r[4]|c->r[4]; // 804DB020
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DB024
  c->r[30]=c->r[3]|c->r[3]; // 804DB028
  if (crb(c,2)) { goto L_804DB048; } // 804DB02C
  c->r[4]=0u+0x00000000u; // 804DB030
  c->lr=0x804DB038u; f_804D4A50(c); // 804DB034
  cmps(c,0,(int32_t)c->r[31],0); // 804DB038
  if (!crb(c,1)) { goto L_804DB048; } // 804DB03C
  c->r[3]=c->r[30]|c->r[30]; // 804DB040
  c->lr=0x804DB048u; f_803A9400(c); // 804DB044
L_804DB048:;
  c->r[3]=c->r[30]|c->r[30]; // 804DB048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DB04C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DB050
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DB054
  c->lr=c->r[0]; // 804DB058
  c->r[1]=c->r[1]+0x00000010u; // 804DB05C
  return; // 804DB060
}

// fn_804DB064
void f_804DB064(Ctx* __restrict c) {
  trace_call(0x804DB064u);
  return; // 804DB064
}

// fn_804DB068
void f_804DB068(Ctx* __restrict c) {
  trace_call(0x804DB068u);
  c->r[3]=c->r[13]+0xFFFFE4C0u; // 804DB068
  return; // 804DB06C
}

// fn_804DB070
void f_804DB070(Ctx* __restrict c) {
  trace_call(0x804DB070u);
  c->r[0]=c->r[13]+0xFFFFE498u; // 804DB070
  W32(c->r[13]+0xFFFFE4C0u,c->r[0]); // 804DB074
  return; // 804DB078
}

// fn_804DB07C
void f_804DB07C(Ctx* __restrict c) {
  trace_call(0x804DB07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DB07C
  c->r[0]=c->lr; // 804DB080
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DB084
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804DB088
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804DB08C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DB090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DB094
  c->r[31]=c->r[4]|c->r[4]; // 804DB098
  {uint32_t ea=c->r[2]+0x000017C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DB09C
  {uint32_t ea=c->r[2]+0x000017C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB0A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DB0A4
  c->r[30]=c->r[3]|c->r[3]; // 804DB0A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804DB0AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804DB0B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804DB0B4
  c->lr=0x804DB0BCu; f_804E1164(c); // 804DB0B8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DB0BC
  c->f[31]=c->f[1]; // 804DB0C0
  {uint32_t ea=c->r[2]+0x000017C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB0C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 804DB0C8
  c->lr=0x804DB0D0u; f_804E10FC(c); // 804DB0CC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804DB0D0
  c->f[5]=-c->f[1]; // 804DB0D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DB0D8
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 804DB0DC
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[8]=c->ps1[8]=RF32(ea);} // 804DB0E0
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 804DB0E4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB0E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804DB0EC
  c->f[4]=-c->f[2]; // 804DB0F0
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 804DB0F4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DB0F8
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 804DB0FC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DB100
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 804DB104
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB108
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 804DB10C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[11]);} // 804DB110
  c->f[7]=-c->f[6]; // 804DB114
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 804DB118
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[12]);} // 804DB11C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 804DB120
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 804DB124
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[8]);} // 804DB128
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804DB12C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 804DB130
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[9]);} // 804DB134
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 804DB138
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[10]);} // 804DB13C
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 804DB140
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 804DB144
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[8]);} // 804DB148
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 804DB14C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DB150
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[8]);} // 804DB154
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[8]);} // 804DB158
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 804DB15C
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[8]);} // 804DB160
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804DB164
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804DB168
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DB16C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DB170
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DB174
  c->lr=c->r[0]; // 804DB178
  c->r[1]=c->r[1]+0x00000030u; // 804DB17C
  return; // 804DB180
}

// fn_804DB184
void f_804DB184(Ctx* __restrict c) {
  trace_call(0x804DB184u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DB184
  c->r[0]=c->lr; // 804DB188
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DB18C
  c->r[5]=0u+0x00000000u; // 804DB190
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DB194
  c->f[8]=std::fabs(c->f[2]); // 804DB198
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB19C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804DB1A0
  c->f[9]=std::fabs(c->f[3]); // 804DB1A4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804DB1A8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 804DB1AC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 804DB1B0
  fcmp(c,0,c->f[8],c->f[0]); // 804DB1B4
  c->f[10]=std::fabs(c->f[4]); // 804DB1B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DB1BC
  c->f[11]=std::fabs(c->f[5]); // 804DB1C0
  c->f[12]=std::fabs(c->f[6]); // 804DB1C4
  c->f[13]=std::fabs(c->f[7]); // 804DB1C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB1CC
  if (crb(c,2)) { goto L_804DB210; } // 804DB1D0
  fcmp(c,0,c->f[9],c->f[0]); // 804DB1D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB1D8
  if (crb(c,2)) { goto L_804DB210; } // 804DB1DC
  fcmp(c,0,c->f[10],c->f[0]); // 804DB1E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB1E4
  if (crb(c,2)) { goto L_804DB210; } // 804DB1E8
  fcmp(c,0,c->f[11],c->f[0]); // 804DB1EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB1F0
  if (crb(c,2)) { goto L_804DB210; } // 804DB1F4
  fcmp(c,0,c->f[12],c->f[0]); // 804DB1F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB1FC
  if (crb(c,2)) { goto L_804DB210; } // 804DB200
  fcmp(c,0,c->f[13],c->f[0]); // 804DB204
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB208
  if (!crb(c,2)) { goto L_804DB2A4; } // 804DB20C
L_804DB210:;
  {uint32_t ea=c->r[2]+0x000017C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DB210
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB214
L_804DB218:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804DB218
  cmps(c,0,(int32_t)c->r[0],46); // 804DB21C
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB220
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 804DB224
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 804DB228
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 804DB22C
  fcmp(c,0,c->f[8],c->f[0]); // 804DB230
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 804DB234
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 804DB238
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 804DB23C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 804DB240
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 804DB244
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 804DB248
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 804DB24C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 804DB250
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 804DB254
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB258
  c->r[5]=c->r[5]+0x00000001u; // 804DB25C
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB260
  fcmp(c,0,c->f[9],c->f[0]); // 804DB264
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB268
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB26C
  fcmp(c,0,c->f[10],c->f[0]); // 804DB270
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB274
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB278
  fcmp(c,0,c->f[11],c->f[0]); // 804DB27C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB280
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB284
  fcmp(c,0,c->f[12],c->f[0]); // 804DB288
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB28C
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB290
  fcmp(c,0,c->f[13],c->f[0]); // 804DB294
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DB298
  if (crb(c,2)) { IRQCHK(c); goto L_804DB218; } // 804DB29C
  goto L_804DB34C; // 804DB2A0
L_804DB2A4:;
  {uint32_t ea=c->r[2]+0x000017C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DB2A4
  fcmp(c,0,c->f[8],c->f[1]); // 804DB2A8
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2AC
  fcmp(c,0,c->f[9],c->f[1]); // 804DB2B0
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2B4
  fcmp(c,0,c->f[10],c->f[1]); // 804DB2B8
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2BC
  fcmp(c,0,c->f[11],c->f[1]); // 804DB2C0
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2C4
  fcmp(c,0,c->f[12],c->f[1]); // 804DB2C8
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2CC
  fcmp(c,0,c->f[13],c->f[1]); // 804DB2D0
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB2D4
  {uint32_t ea=c->r[2]+0x000017D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB2D8
L_804DB2DC:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 804DB2DC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 804DB2E0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 804DB2E4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804DB2E8
  fcmp(c,0,c->f[8],c->f[1]); // 804DB2EC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 804DB2F0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 804DB2F4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 804DB2F8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 804DB2FC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 804DB300
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 804DB304
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 804DB308
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 804DB30C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 804DB310
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB314
  fcmp(c,0,c->f[9],c->f[1]); // 804DB318
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB31C
  fcmp(c,0,c->f[10],c->f[1]); // 804DB320
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB324
  fcmp(c,0,c->f[11],c->f[1]); // 804DB328
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB32C
  fcmp(c,0,c->f[12],c->f[1]); // 804DB330
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB334
  fcmp(c,0,c->f[13],c->f[1]); // 804DB338
  if (!crb(c,0)) { goto L_804DB34C; } // 804DB33C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804DB340
  cmps(c,0,(int32_t)c->r[0],-17); // 804DB344
  if (crb(c,1)) { IRQCHK(c); goto L_804DB2DC; } // 804DB348
L_804DB34C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804DB34C
  c->r[4]=c->r[1]+0x00000008u; // 804DB350
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804DB354
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804DB358
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804DB35C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 804DB360
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 804DB364
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 804DB368
  c->lr=0x804DB370u; f_803A706C(c); // 804DB36C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DB370
  c->lr=c->r[0]; // 804DB374
  c->r[1]=c->r[1]+0x00000020u; // 804DB378
  return; // 804DB37C
}

// fn_804DB380
void f_804DB380(Ctx* __restrict c) {
  trace_call(0x804DB380u);
  c->r[0]=0u+0x00000000u; // 804DB380
  c->r[4]=c->r[3]+0x00000004u; // 804DB384
  W32(c->r[3]+0x00000004u,c->r[0]); // 804DB388
  W32(c->r[3]+0x00000008u,c->r[0]); // 804DB38C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804DB390
  W32(c->r[3]+0x00000004u,c->r[4]); // 804DB394
  W32(c->r[3]+0x00000008u,c->r[4]); // 804DB398
  return; // 804DB39C
}

// fn_804DB3A0
void f_804DB3A0(Ctx* __restrict c) {
  trace_call(0x804DB3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DB3A0
  c->r[0]=c->lr; // 804DB3A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 804DB3A8
  c->r[11]=c->r[1]+0x00000080u; // 804DB3AC
  c->lr=0x804DB3B4u; f_803A9BD0(c); // 804DB3B0
  c->r[6]=0u+0x80720000u; // 804DB3B4
  c->r[17]=c->r[3]|c->r[3]; // 804DB3B8
  c->r[6]=c->r[6]+0xFFFFA9C0u; // 804DB3BC
  c->r[18]=c->r[4]|c->r[4]; // 804DB3C0
  W32(c->r[3]+0x00000000u,c->r[6]); // 804DB3C4
  c->r[19]=c->r[5]|c->r[5]; // 804DB3C8
  c->r[3]=c->r[3]+0x00000004u; // 804DB3CC
  c->lr=0x804DB3D4u; f_804DB380(c); // 804DB3D0
  c->r[4]=0u+0x800F0000u; // 804DB3D4
  c->r[5]=0u+0x80040000u; // 804DB3D8
  c->r[3]=c->r[17]+0x00000028u; // 804DB3DC
  c->r[6]=0u+0x00000004u; // 804DB3E0
  c->r[4]=c->r[4]+0xFFFF8D84u; // 804DB3E4
  c->r[5]=c->r[5]+0x00005E50u; // 804DB3E8
  c->r[7]=0u+0x00000004u; // 804DB3EC
  c->lr=0x804DB3F4u; f_803A9830(c); // 804DB3F0
  c->r[3]=c->r[17]|c->r[17]; // 804DB3F4
  c->lr=0x804DB3FCu; f_804DBD28(c); // 804DB3F8
  c->r[3]=c->r[17]|c->r[17]; // 804DB3FC
  c->r[4]=c->r[18]|c->r[18]; // 804DB400
  c->lr=0x804DB408u; f_804DC84C(c); // 804DB404
  c->r[14]=c->r[18]+0x00000014u; // 804DB408
  c->r[15]=c->r[17]+0x00000010u; // 804DB40C
  c->r[16]=0u+0x00000000u; // 804DB410
L_804DB414:;
  c->r[3]=c->r[15]|c->r[15]; // 804DB414
  c->r[4]=c->r[14]|c->r[14]; // 804DB418
  c->lr=0x804DB420u; f_804DBA04(c); // 804DB41C
  c->r[16]=c->r[16]+0x00000001u; // 804DB420
  c->r[15]=c->r[15]+0x00000008u; // 804DB424
  cmps(c,0,(int32_t)c->r[16],3); // 804DB428
  c->r[14]=c->r[14]+0x00000008u; // 804DB42C
  if (crb(c,0)) { IRQCHK(c); goto L_804DB414; } // 804DB430
  c->r[14]=c->r[18]+0x0000002Cu; // 804DB434
  c->r[15]=c->r[17]+0x00000028u; // 804DB438
  c->r[16]=0u+0x00000000u; // 804DB43C
L_804DB440:;
  c->r[3]=c->r[15]|c->r[15]; // 804DB440
  c->r[4]=c->r[14]|c->r[14]; // 804DB444
  c->lr=0x804DB44Cu; f_804DBA28(c); // 804DB448
  c->r[16]=c->r[16]+0x00000001u; // 804DB44C
  c->r[15]=c->r[15]+0x00000004u; // 804DB450
  cmps(c,0,(int32_t)c->r[16],4); // 804DB454
  c->r[14]=c->r[14]+0x00000004u; // 804DB458
  if (crb(c,0)) { IRQCHK(c); goto L_804DB440; } // 804DB45C
  c->r[3]=c->r[18]|c->r[18]; // 804DB460
  c->r[4]=0u+0x00000040u; // 804DB464
  c->lr=0x804DB46Cu; f_804DBD20(c); // 804DB468
  c->r[28]=c->r[3]|c->r[3]; // 804DB46C
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB470
  c->lr=0x804DB478u; f_804DBA34(c); // 804DB474
  c->r[4]=rotl(c->r[3],2)&0x000003FCu; // 804DB478
  c->r[3]=c->r[18]|c->r[18]; // 804DB47C
  c->r[25]=c->r[4]+0x00000040u; // 804DB480
  c->r[4]=c->r[25]|c->r[25]; // 804DB484
  c->lr=0x804DB48Cu; f_804DBD18(c); // 804DB488
  c->r[24]=c->r[3]|c->r[3]; // 804DB48C
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB490
  c->lr=0x804DB498u; f_804DBA40(c); // 804DB494
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 804DB498
  c->r[3]=c->r[18]|c->r[18]; // 804DB49C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804DB4A0
  c->r[25]=c->r[25]+c->r[0]; // 804DB4A4
  c->r[4]=c->r[25]|c->r[25]; // 804DB4A8
  c->lr=0x804DB4B0u; f_804DBD10(c); // 804DB4AC
  c->r[23]=c->r[3]|c->r[3]; // 804DB4B0
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB4B4
  c->lr=0x804DB4BCu; f_804DBA4C(c); // 804DB4B8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 804DB4BC
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB4C0
  c->r[25]=c->r[25]+c->r[0]; // 804DB4C4
  c->lr=0x804DB4CCu; f_804DBA34(c); // 804DB4C8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB4CC
  c->r[4]=0u+0x00000008u; // 804DB4D0
  c->lr=0x804DB4D8u; f_804DBD00(c); // 804DB4D4
  c->r[15]=c->r[3]|c->r[3]; // 804DB4D8
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB4DC
  c->lr=0x804DB4E4u; f_804DBA40(c); // 804DB4E0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB4E4
  c->r[4]=0u+0x0000000Au; // 804DB4E8
  c->lr=0x804DB4F0u; f_804DBD00(c); // 804DB4EC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804DB4F0
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB4F4
  c->lr=0x804DB4FCu; f_804DBA4C(c); // 804DB4F8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB4FC
  c->r[4]=0u+0x00000008u; // 804DB500
  c->lr=0x804DB508u; f_804DBD00(c); // 804DB504
  W32(c->r[1]+0x00000020u,c->r[3]); // 804DB508
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB50C
  c->lr=0x804DB514u; f_804DBA58(c); // 804DB510
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 804DB514
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB518
  c->r[0]=0u-c->r[4]; // 804DB51C
  c->r[0]=c->r[0]|c->r[4]; // 804DB520
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804DB524
  W8(c->r[1]+0x0000001Au,c->r[0]); // 804DB528
  c->lr=0x804DB530u; f_804DBA64(c); // 804DB52C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 804DB530
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB534
  c->r[0]=0u-c->r[4]; // 804DB538
  c->r[0]=c->r[0]|c->r[4]; // 804DB53C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804DB540
  W8(c->r[1]+0x00000019u,c->r[0]); // 804DB544
  c->lr=0x804DB54Cu; f_804DBA70(c); // 804DB548
  W8(c->r[1]+0x00000018u,c->r[3]); // 804DB54C
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB550
  c->lr=0x804DB558u; f_804DBA7C(c); // 804DB554
  W32(c->r[1]+0x00000024u,c->r[3]); // 804DB558
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB55C
  c->lr=0x804DB564u; f_804DBA88(c); // 804DB560
  W32(c->r[1]+0x00000028u,c->r[3]); // 804DB564
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB568
  c->lr=0x804DB570u; f_804DBA94(c); // 804DB56C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB570
  c->r[4]=0u+0x00000003u; // 804DB574
  c->lr=0x804DB57Cu; f_804DBD00(c); // 804DB578
  c->r[29]=c->r[3]|c->r[3]; // 804DB57C
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB580
  c->lr=0x804DB588u; f_804DBAA0(c); // 804DB584
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB588
  c->r[4]=0u+0x00000004u; // 804DB58C
  c->lr=0x804DB594u; f_804DBD00(c); // 804DB590
  c->r[30]=c->r[3]|c->r[3]; // 804DB594
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB598
  c->lr=0x804DB5A0u; f_804DBAAC(c); // 804DB59C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DB5A0
  c->r[4]=0u+0x00000010u; // 804DB5A4
  c->lr=0x804DB5ACu; f_804DBD00(c); // 804DB5A8
  c->r[0]=R8(c->r[1]+0x0000001Au); // 804DB5AC
  c->r[14]=c->r[3]|c->r[3]; // 804DB5B0
  c->r[8]=R8(c->r[1]+0x00000018u); // 804DB5B4
  c->r[3]=c->r[17]|c->r[17]; // 804DB5B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804DB5BC
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 804DB5C0
  c->r[0]=R8(c->r[1]+0x00000019u); // 804DB5C4
  c->r[7]=rotl(c->r[14],0)&0x000000FFu; // 804DB5C8
  c->r[9]=rotl(c->r[30],0)&0x000000FFu; // 804DB5CC
  c->r[10]=rotl(c->r[29],0)&0x000000FFu; // 804DB5D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804DB5D4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804DB5D8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 804DB5DC
  c->r[0]=R32(c->r[1]+0x00000020u); // 804DB5E0
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 804DB5E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DB5E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 804DB5EC
  c->r[0]=R32(c->r[1]+0x00000028u); // 804DB5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DB5F4
  c->lr=0x804DB5FCu; f_804DBE44(c); // 804DB5F8
  c->r[0]=R32(c->r[17]+0x00000040u); // 804DB5FC
  cmps(c,0,(int32_t)c->r[0],0); // 804DB600
  if (crb(c,2)) { goto L_804DB9E8; } // 804DB604
  c->r[3]=c->r[17]|c->r[17]; // 804DB608
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 804DB60C
  c->lr=0x804DB614u; f_804DC888(c); // 804DB610
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; cr0(c,c->r[0]); // 804DB614
  if (crb(c,2)) { goto L_804DB70C; } // 804DB618
  c->r[3]=R32(c->r[19]+0x00000000u); // 804DB61C
  c->r[4]=0u+0x0000000Cu; // 804DB620
  c->lr=0x804DB628u; f_804DBCF8(c); // 804DB624
  c->r[22]=c->r[3]|c->r[3]; // 804DB628
  c->r[3]=c->r[17]|c->r[17]; // 804DB62C
  c->lr=0x804DB634u; f_804DC5B0(c); // 804DB630
  c->r[31]=c->r[3]|c->r[3]; // 804DB634
  c->r[16]=rotl(c->r[15],0)&0x000000FFu; // 804DB638
  c->r[21]=0u+0x00000000u; // 804DB63C
  c->r[20]=0u+0x00000000u; // 804DB640
  goto L_804DB6F4; // 804DB644
L_804DB648:;
  c->r[15]=rotl(c->r[20],2)&0x000003FCu; // 804DB648
  c->r[3]=c->r[22]|c->r[22]; // 804DB64C
  c->r[0]=R16(c->r[28]+c->r[15]); // 804DB650
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804DB654
  c->r[4]=R32(c->r[22]+c->r[0]); // 804DB658
  c->lr=0x804DB660u; f_804DBCF0(c); // 804DB65C
  c->r[5]=c->r[3]|c->r[3]; // 804DB660
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 804DB664
  c->r[4]=0u+0x74690000u; // 804DB668
  c->r[6]=0u+0x00000000u; // 804DB66C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DB670
  c->r[4]=c->r[4]+0x00006D67u; // 804DB674
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DB678
  c->ctr=c->r[12]; // 804DB67C
  if (true) { c->lr=0x804DB684u; dispatch(c,c->ctr); } // 804DB680
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 804DB684
  c->r[4]=c->r[3]|c->r[3]; // 804DB688
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DB68C
  c->r[5]=0u+0x00000000u; // 804DB690
  c->r[26]=c->r[31]+c->r[0]; // 804DB694
  c->r[3]=c->r[26]|c->r[26]; // 804DB698
  c->lr=0x804DB6A0u; f_804DE0A0(c); // 804DB69C
  c->r[27]=c->r[28]+c->r[15]; // 804DB6A0
  c->r[3]=c->r[27]|c->r[27]; // 804DB6A4
  c->lr=0x804DB6ACu; f_804DBAD8(c); // 804DB6A8
  c->r[15]=c->r[3]|c->r[3]; // 804DB6AC
  c->r[3]=c->r[27]|c->r[27]; // 804DB6B0
  c->lr=0x804DB6B8u; f_804DBACC(c); // 804DB6B4
  c->r[4]=c->r[3]|c->r[3]; // 804DB6B8
  c->r[3]=c->r[26]|c->r[26]; // 804DB6BC
  c->r[5]=c->r[15]|c->r[15]; // 804DB6C0
  c->lr=0x804DB6C8u; f_804DBAB8(c); // 804DB6C4
  c->r[3]=c->r[27]|c->r[27]; // 804DB6C8
  c->lr=0x804DB6D0u; f_804DBB0C(c); // 804DB6CC
  c->r[15]=c->r[3]|c->r[3]; // 804DB6D0
  c->r[3]=c->r[27]|c->r[27]; // 804DB6D4
  c->lr=0x804DB6DCu; f_804DBAF8(c); // 804DB6D8
  c->r[4]=c->r[3]|c->r[3]; // 804DB6DC
  c->r[3]=c->r[26]|c->r[26]; // 804DB6E0
  c->r[5]=c->r[15]|c->r[15]; // 804DB6E4
  c->lr=0x804DB6ECu; f_804DBAE4(c); // 804DB6E8
  c->r[21]=c->r[21]+0x00000001u; // 804DB6EC
  c->r[20]=c->r[20]+0x00000001u; // 804DB6F0
L_804DB6F4:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 804DB6F4
  cmpu(c,0,c->r[0],c->r[16]); // 804DB6F8
  if (crb(c,0)) { IRQCHK(c); goto L_804DB648; } // 804DB6FC
  c->r[3]=c->r[17]|c->r[17]; // 804DB700
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 804DB704
  c->lr=0x804DB70Cu; f_804DC888(c); // 804DB708
L_804DB70C:;
  c->r[3]=c->r[17]|c->r[17]; // 804DB70C
  c->lr=0x804DB714u; f_804DC5D0(c); // 804DB710
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804DB714
  c->r[16]=c->r[3]|c->r[3]; // 804DB718
  c->r[19]=c->r[24]|c->r[24]; // 804DB71C
  c->r[20]=0u+0x00000000u; // 804DB720
  c->r[15]=rotl(c->r[0],0)&0x000000FFu; // 804DB724
  goto L_804DB75C; // 804DB728
L_804DB72C:;
  c->r[3]=c->r[16]|c->r[16]; // 804DB72C
  c->r[4]=c->r[24]|c->r[24]; // 804DB730
  c->lr=0x804DB738u; f_800BAF7C(c); // 804DB734
  {uint32_t ea=c->r[19]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DB738
  c->r[3]=c->r[16]+0x0000000Cu; // 804DB73C
  c->r[4]=c->r[24]+0x0000000Cu; // 804DB740
  {uint32_t ea=c->r[16]+0x00000008u; WF32(ea,c->f[0]);} // 804DB744
  c->lr=0x804DB74Cu; f_800BAF7C(c); // 804DB748
  c->r[24]=c->r[24]+0x00000014u; // 804DB74C
  c->r[16]=c->r[16]+0x00000014u; // 804DB750
  c->r[19]=c->r[19]+0x00000014u; // 804DB754
  c->r[20]=c->r[20]+0x00000001u; // 804DB758
L_804DB75C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 804DB75C
  if (crb(c,0)) { IRQCHK(c); goto L_804DB72C; } // 804DB760
  c->r[3]=c->r[17]|c->r[17]; // 804DB764
  c->lr=0x804DB76Cu; f_804DC5E8(c); // 804DB768
  c->r[0]=R32(c->r[1]+0x00000020u); // 804DB76C
  c->r[15]=c->r[3]|c->r[3]; // 804DB770
  c->r[3]=c->r[17]|c->r[17]; // 804DB774
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 804DB778
  c->lr=0x804DB780u; f_804DC918(c); // 804DB77C
  c->r[16]=0u+0x00000000u; // 804DB780
  goto L_804DB7A0; // 804DB784
L_804DB788:;
  c->r[3]=c->r[15]|c->r[15]; // 804DB788
  c->r[4]=c->r[23]|c->r[23]; // 804DB78C
  c->lr=0x804DB794u; f_804DBB20(c); // 804DB790
  c->r[23]=c->r[23]+0x00000004u; // 804DB794
  c->r[15]=c->r[15]+0x00000004u; // 804DB798
  c->r[16]=c->r[16]+0x00000001u; // 804DB79C
L_804DB7A0:;
  c->r[0]=R32(c->r[17]+0x0000003Cu); // 804DB7A0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 804DB7A4
  cmpu(c,0,c->r[16],c->r[0]); // 804DB7A8
  if (crb(c,0)) { IRQCHK(c); goto L_804DB788; } // 804DB7AC
  c->r[0]=R8(c->r[1]+0x0000001Au); // 804DB7B0
  cmps(c,0,(int32_t)c->r[0],0); // 804DB7B4
  if (crb(c,2)) { goto L_804DB7E0; } // 804DB7B8
  c->r[3]=c->r[18]|c->r[18]; // 804DB7BC
  c->r[4]=c->r[25]|c->r[25]; // 804DB7C0
  c->lr=0x804DB7C8u; f_804DBCE8(c); // 804DB7C4
  c->r[15]=c->r[3]|c->r[3]; // 804DB7C8
  c->r[3]=c->r[17]|c->r[17]; // 804DB7CC
  c->lr=0x804DB7D4u; f_804DC60C(c); // 804DB7D0
  c->r[4]=c->r[15]|c->r[15]; // 804DB7D4
  c->lr=0x804DB7DCu; f_804DBB44(c); // 804DB7D8
  c->r[25]=c->r[25]+0x00000004u; // 804DB7DC
L_804DB7E0:;
  c->r[0]=R8(c->r[1]+0x00000019u); // 804DB7E0
  cmps(c,0,(int32_t)c->r[0],0); // 804DB7E4
  if (crb(c,2)) { goto L_804DB810; } // 804DB7E8
  c->r[3]=c->r[18]|c->r[18]; // 804DB7EC
  c->r[4]=c->r[25]|c->r[25]; // 804DB7F0
  c->lr=0x804DB7F8u; f_804DBCE0(c); // 804DB7F4
  c->r[15]=c->r[3]|c->r[3]; // 804DB7F8
  c->r[3]=c->r[17]|c->r[17]; // 804DB7FC
  c->lr=0x804DB804u; f_804DC638(c); // 804DB800
  c->r[4]=c->r[15]|c->r[15]; // 804DB804
  c->lr=0x804DB80Cu; f_80142BE4(c); // 804DB808
  c->r[25]=c->r[25]+0x00000004u; // 804DB80C
L_804DB810:;
  c->r[0]=R8(c->r[1]+0x00000018u); // 804DB810
  cmps(c,0,(int32_t)c->r[0],0); // 804DB814
  if (crb(c,2)) { goto L_804DB858; } // 804DB818
  c->r[3]=c->r[18]|c->r[18]; // 804DB81C
  c->r[4]=c->r[25]|c->r[25]; // 804DB820
  c->lr=0x804DB828u; f_804DBCD8(c); // 804DB824
  c->r[16]=c->r[3]|c->r[3]; // 804DB828
  c->r[3]=c->r[17]|c->r[17]; // 804DB82C
  c->lr=0x804DB834u; f_804DC66C(c); // 804DB830
  c->r[15]=c->r[3]|c->r[3]; // 804DB834
  c->r[19]=0u+0x00000000u; // 804DB838
L_804DB83C:;
  c->r[3]=c->r[15]+c->r[19]; // 804DB83C
  c->r[4]=c->r[16]+c->r[19]; // 804DB840
  c->lr=0x804DB848u; f_804DBB68(c); // 804DB844
  c->r[19]=c->r[19]+0x00000001u; // 804DB848
  cmps(c,0,(int32_t)c->r[19],4); // 804DB84C
  if (crb(c,0)) { IRQCHK(c); goto L_804DB83C; } // 804DB850
  c->r[25]=c->r[25]+0x00000004u; // 804DB854
L_804DB858:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 804DB858
  if (crb(c,2)) { goto L_804DB8A8; } // 804DB85C
  c->r[3]=c->r[17]|c->r[17]; // 804DB860
  c->lr=0x804DB868u; f_804DC78C(c); // 804DB864
  c->r[19]=c->r[3]|c->r[3]; // 804DB868
  c->r[3]=c->r[18]|c->r[18]; // 804DB86C
  c->r[4]=c->r[25]|c->r[25]; // 804DB870
  c->lr=0x804DB878u; f_804DBD18(c); // 804DB874
  c->r[16]=c->r[3]|c->r[3]; // 804DB878
  c->r[15]=rotl(c->r[29],0)&0x000000FFu; // 804DB87C
  c->r[20]=0u+0x00000000u; // 804DB880
  goto L_804DB8A0; // 804DB884
L_804DB888:;
  c->r[3]=c->r[19]|c->r[19]; // 804DB888
  c->r[4]=c->r[16]|c->r[16]; // 804DB88C
  c->lr=0x804DB894u; f_804DBB74(c); // 804DB890
  c->r[16]=c->r[16]+0x00000014u; // 804DB894
  c->r[19]=c->r[19]+0x00000014u; // 804DB898
  c->r[20]=c->r[20]+0x00000001u; // 804DB89C
L_804DB8A0:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 804DB8A0
  if (crb(c,0)) { IRQCHK(c); goto L_804DB888; } // 804DB8A4
L_804DB8A8:;
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB8A8
  c->lr=0x804DB8B0u; f_804DBA94(c); // 804DB8AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 804DB8B0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 804DB8B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804DB8B8
  c->r[25]=c->r[25]+c->r[0]; // 804DB8BC
  if (crb(c,2)) { goto L_804DB914; } // 804DB8C0
  c->r[3]=c->r[17]|c->r[17]; // 804DB8C4
  c->lr=0x804DB8CCu; f_804DCAC0(c); // 804DB8C8
  c->r[3]=c->r[17]|c->r[17]; // 804DB8CC
  c->lr=0x804DB8D4u; f_804DC738(c); // 804DB8D0
  c->r[19]=c->r[3]|c->r[3]; // 804DB8D4
  c->r[3]=c->r[18]|c->r[18]; // 804DB8D8
  c->r[4]=c->r[25]|c->r[25]; // 804DB8DC
  c->lr=0x804DB8E4u; f_804DBCD0(c); // 804DB8E0
  c->r[16]=c->r[3]|c->r[3]; // 804DB8E4
  c->r[15]=rotl(c->r[30],0)&0x000000FFu; // 804DB8E8
  c->r[20]=0u+0x00000000u; // 804DB8EC
  goto L_804DB90C; // 804DB8F0
L_804DB8F4:;
  c->r[3]=c->r[19]|c->r[19]; // 804DB8F4
  c->r[4]=c->r[16]|c->r[16]; // 804DB8F8
  c->lr=0x804DB900u; f_804DBBA0(c); // 804DB8FC
  c->r[16]=c->r[16]+0x00000004u; // 804DB900
  c->r[19]=c->r[19]+0x00000004u; // 804DB904
  c->r[20]=c->r[20]+0x00000001u; // 804DB908
L_804DB90C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 804DB90C
  if (crb(c,0)) { IRQCHK(c); goto L_804DB8F4; } // 804DB910
L_804DB914:;
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB914
  c->lr=0x804DB91Cu; f_804DBAA0(c); // 804DB918
  c->r[4]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[4]); // 804DB91C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 804DB920
  c->r[25]=c->r[25]+c->r[0]; // 804DB924
  if (crb(c,2)) { goto L_804DB97C; } // 804DB928
  c->r[3]=c->r[17]|c->r[17]; // 804DB92C
  c->lr=0x804DB934u; f_804DC9A0(c); // 804DB930
  c->r[3]=c->r[17]|c->r[17]; // 804DB934
  c->lr=0x804DB93Cu; f_804DC7E8(c); // 804DB938
  c->r[16]=c->r[3]|c->r[3]; // 804DB93C
  c->r[3]=c->r[18]|c->r[18]; // 804DB940
  c->r[4]=c->r[25]|c->r[25]; // 804DB944
  c->lr=0x804DB94Cu; f_804DBCC8(c); // 804DB948
  c->r[15]=c->r[3]|c->r[3]; // 804DB94C
  c->r[14]=rotl(c->r[14],0)&0x000000FFu; // 804DB950
  c->r[19]=0u+0x00000000u; // 804DB954
  goto L_804DB974; // 804DB958
L_804DB95C:;
  c->r[3]=c->r[16]|c->r[16]; // 804DB95C
  c->r[4]=c->r[15]|c->r[15]; // 804DB960
  c->lr=0x804DB968u; f_804DBBC4(c); // 804DB964
  c->r[15]=c->r[15]+0x00000010u; // 804DB968
  c->r[16]=c->r[16]+0x00000010u; // 804DB96C
  c->r[19]=c->r[19]+0x00000001u; // 804DB970
L_804DB974:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 804DB974
  if (crb(c,0)) { IRQCHK(c); goto L_804DB95C; } // 804DB978
L_804DB97C:;
  c->r[3]=c->r[18]+0x0000003Cu; // 804DB97C
  c->lr=0x804DB984u; f_804DBAAC(c); // 804DB980
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DB984
  cmps(c,0,(int32_t)c->r[0],0); // 804DB988
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 804DB98C
  c->r[25]=c->r[25]+c->r[0]; // 804DB990
  if (crb(c,2)) { goto L_804DB9BC; } // 804DB994
  c->r[3]=c->r[18]|c->r[18]; // 804DB998
  c->r[4]=c->r[25]|c->r[25]; // 804DB99C
  c->lr=0x804DB9A4u; f_804DBCC0(c); // 804DB9A0
  c->r[14]=c->r[3]|c->r[3]; // 804DB9A4
  c->r[3]=c->r[17]|c->r[17]; // 804DB9A8
  c->lr=0x804DB9B0u; f_804DC6A8(c); // 804DB9AC
  c->r[4]=c->r[14]|c->r[14]; // 804DB9B0
  c->lr=0x804DB9B8u; f_804DBC70(c); // 804DB9B4
  c->r[25]=c->r[25]+0x00000004u; // 804DB9B8
L_804DB9BC:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 804DB9BC
  cmps(c,0,(int32_t)c->r[0],0); // 804DB9C0
  if (crb(c,2)) { goto L_804DB9E8; } // 804DB9C4
  c->r[3]=c->r[18]|c->r[18]; // 804DB9C8
  c->r[4]=c->r[25]|c->r[25]; // 804DB9CC
  c->lr=0x804DB9D4u; f_804DBCB8(c); // 804DB9D0
  c->r[14]=c->r[3]|c->r[3]; // 804DB9D4
  c->r[3]=c->r[17]|c->r[17]; // 804DB9D8
  c->lr=0x804DB9E0u; f_804DC6EC(c); // 804DB9DC
  c->r[4]=c->r[14]|c->r[14]; // 804DB9E0
  c->lr=0x804DB9E8u; f_804DBC94(c); // 804DB9E4
L_804DB9E8:;
  c->r[11]=c->r[1]+0x00000080u; // 804DB9E8
  c->r[3]=c->r[17]|c->r[17]; // 804DB9EC
  c->lr=0x804DB9F4u; f_803A9C1C(c); // 804DB9F0
  c->r[0]=R32(c->r[1]+0x00000084u); // 804DB9F4
  c->lr=c->r[0]; // 804DB9F8
  c->r[1]=c->r[1]+0x00000080u; // 804DB9FC
  return; // 804DBA00
}

// fn_804DBA04
void f_804DBA04(Ctx* __restrict c) {
  trace_call(0x804DBA04u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 804DBA04
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 804DBA08
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 804DBA0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 804DBA10
  W16(c->r[3]+0x00000000u,c->r[7]); // 804DBA14
  W16(c->r[3]+0x00000002u,c->r[6]); // 804DBA18
  W16(c->r[3]+0x00000004u,c->r[5]); // 804DBA1C
  W16(c->r[3]+0x00000006u,c->r[0]); // 804DBA20
  return; // 804DBA24
}

// fn_804DBA28
void f_804DBA28(Ctx* __restrict c) {
  trace_call(0x804DBA28u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 804DBA28
  W32(c->r[3]+0x00000000u,c->r[0]); // 804DBA2C
  return; // 804DBA30
}

// fn_804DBA34
void f_804DBA34(Ctx* __restrict c) {
  trace_call(0x804DBA34u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA34
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 804DBA38
  return; // 804DBA3C
}

// fn_804DBA40
void f_804DBA40(Ctx* __restrict c) {
  trace_call(0x804DBA40u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA40
  c->r[3]=rotl(c->r[0],28)&0x0000000Fu; // 804DBA44
  return; // 804DBA48
}

// fn_804DBA4C
void f_804DBA4C(Ctx* __restrict c) {
  trace_call(0x804DBA4Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA4C
  c->r[3]=rotl(c->r[0],24)&0x0000000Fu; // 804DBA50
  return; // 804DBA54
}

// fn_804DBA58
void f_804DBA58(Ctx* __restrict c) {
  trace_call(0x804DBA58u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA58
  c->r[3]=rotl(c->r[0],7)&0x00000001u; // 804DBA5C
  return; // 804DBA60
}

// fn_804DBA64
void f_804DBA64(Ctx* __restrict c) {
  trace_call(0x804DBA64u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA64
  c->r[3]=rotl(c->r[0],5)&0x00000001u; // 804DBA68
  return; // 804DBA6C
}

// fn_804DBA70
void f_804DBA70(Ctx* __restrict c) {
  trace_call(0x804DBA70u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA70
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 804DBA74
  return; // 804DBA78
}

// fn_804DBA7C
void f_804DBA7C(Ctx* __restrict c) {
  trace_call(0x804DBA7Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA7C
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 804DBA80
  return; // 804DBA84
}

// fn_804DBA88
void f_804DBA88(Ctx* __restrict c) {
  trace_call(0x804DBA88u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA88
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 804DBA8C
  return; // 804DBA90
}

// fn_804DBA94
void f_804DBA94(Ctx* __restrict c) {
  trace_call(0x804DBA94u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBA94
  c->r[3]=rotl(c->r[0],19)&0x00000003u; // 804DBA98
  return; // 804DBA9C
}

// fn_804DBAA0
void f_804DBAA0(Ctx* __restrict c) {
  trace_call(0x804DBAA0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBAA0
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 804DBAA4
  return; // 804DBAA8
}

// fn_804DBAAC
void f_804DBAAC(Ctx* __restrict c) {
  trace_call(0x804DBAACu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DBAAC
  c->r[3]=rotl(c->r[0],14)&0x0000001Fu; // 804DBAB0
  return; // 804DBAB4
}

// fn_804DBAB8
void f_804DBAB8(Ctx* __restrict c) {
  trace_call(0x804DBAB8u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804DBAB8
  c->r[0]=(rotl(c->r[4],25)&0x06000000u)|(c->r[0]&~0x06000000u); // 804DBABC
  c->r[0]=(rotl(c->r[5],23)&0x01800000u)|(c->r[0]&~0x01800000u); // 804DBAC0
  W32(c->r[3]+0x00000018u,c->r[0]); // 804DBAC4
  return; // 804DBAC8
}

// fn_804DBACC
void f_804DBACC(Ctx* __restrict c) {
  trace_call(0x804DBACCu);
  c->r[0]=R8(c->r[3]+0x00000002u); // 804DBACC
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 804DBAD0
  return; // 804DBAD4
}

// fn_804DBAD8
void f_804DBAD8(Ctx* __restrict c) {
  trace_call(0x804DBAD8u);
  c->r[0]=R8(c->r[3]+0x00000003u); // 804DBAD8
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 804DBADC
  return; // 804DBAE0
}

// fn_804DBAE4
void f_804DBAE4(Ctx* __restrict c) {
  trace_call(0x804DBAE4u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 804DBAE4
  c->r[0]=(rotl(c->r[4],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 804DBAE8
  c->r[0]=(rotl(c->r[5],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 804DBAEC
  W32(c->r[3]+0x00000018u,c->r[0]); // 804DBAF0
  return; // 804DBAF4
}

// fn_804DBAF8
void f_804DBAF8(Ctx* __restrict c) {
  trace_call(0x804DBAF8u);
  c->r[0]=R8(c->r[3]+0x00000002u); // 804DBAF8
  c->r[3]=rotl(c->r[0],30)&0x00000007u; // 804DBAFC
  c->r[0]=c->r[3]+0x00000001u; // 804DBB00
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 804DBB04
  return; // 804DBB08
}

// fn_804DBB0C
void f_804DBB0C(Ctx* __restrict c) {
  trace_call(0x804DBB0Cu);
  c->r[0]=R8(c->r[3]+0x00000003u); // 804DBB0C
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 804DBB10
  c->r[0]=c->r[3]+0x00000001u; // 804DBB14
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 804DBB18
  return; // 804DBB1C
}

// fn_804DBB20
void f_804DBB20(Ctx* __restrict c) {
  trace_call(0x804DBB20u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 804DBB20
  c->r[6]=R8(c->r[4]+0x00000001u); // 804DBB24
  c->r[5]=R8(c->r[4]+0x00000002u); // 804DBB28
  c->r[0]=R8(c->r[4]+0x00000003u); // 804DBB2C
  W8(c->r[3]+0x00000000u,c->r[7]); // 804DBB30
  W8(c->r[3]+0x00000001u,c->r[6]); // 804DBB34
  W8(c->r[3]+0x00000002u,c->r[5]); // 804DBB38
  W8(c->r[3]+0x00000003u,c->r[0]); // 804DBB3C
  return; // 804DBB40
}

// fn_804DBB44
void f_804DBB44(Ctx* __restrict c) {
  trace_call(0x804DBB44u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 804DBB44
  c->r[6]=R8(c->r[4]+0x00000001u); // 804DBB48
  c->r[5]=R8(c->r[4]+0x00000002u); // 804DBB4C
  c->r[0]=R8(c->r[4]+0x00000003u); // 804DBB50
  W8(c->r[3]+0x00000000u,c->r[7]); // 804DBB54
  W8(c->r[3]+0x00000001u,c->r[6]); // 804DBB58
  W8(c->r[3]+0x00000002u,c->r[5]); // 804DBB5C
  W8(c->r[3]+0x00000003u,c->r[0]); // 804DBB60
  return; // 804DBB64
}

// fn_804DBB68
void f_804DBB68(Ctx* __restrict c) {
  trace_call(0x804DBB68u);
  c->r[0]=R8(c->r[4]+0x00000000u); // 804DBB68
  W8(c->r[3]+0x00000000u,c->r[0]); // 804DBB6C
  return; // 804DBB70
}

// fn_804DBB74
void f_804DBB74(Ctx* __restrict c) {
  trace_call(0x804DBB74u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 804DBB74
  c->r[6]=R32(c->r[4]+0x00000004u); // 804DBB78
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DBB7C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 804DBB80
  c->r[0]=R32(c->r[4]+0x00000010u); // 804DBB84
  W32(c->r[3]+0x00000000u,c->r[7]); // 804DBB88
  W32(c->r[3]+0x00000004u,c->r[6]); // 804DBB8C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804DBB90
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 804DBB94
  W32(c->r[3]+0x00000010u,c->r[0]); // 804DBB98
  return; // 804DBB9C
}

// fn_804DBBA0
void f_804DBBA0(Ctx* __restrict c) {
  trace_call(0x804DBBA0u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 804DBBA0
  c->r[6]=R8(c->r[4]+0x00000001u); // 804DBBA4
  c->r[5]=R8(c->r[4]+0x00000002u); // 804DBBA8
  c->r[0]=R8(c->r[4]+0x00000003u); // 804DBBAC
  W8(c->r[3]+0x00000000u,c->r[7]); // 804DBBB0
  W8(c->r[3]+0x00000001u,c->r[6]); // 804DBBB4
  W8(c->r[3]+0x00000002u,c->r[5]); // 804DBBB8
  W8(c->r[3]+0x00000003u,c->r[0]); // 804DBBBC
  return; // 804DBBC0
}

// fn_804DBBC4
void f_804DBBC4(Ctx* __restrict c) {
  trace_call(0x804DBBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DBBC4
  c->r[0]=c->lr; // 804DBBC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DBBCC
  c->r[11]=c->r[1]+0x00000030u; // 804DBBD0
  c->lr=0x804DBBD8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DBBD4
  c->r[25]=R8(c->r[4]+0x00000000u); // 804DBBD8
  c->r[26]=R8(c->r[4]+0x00000001u); // 804DBBDC
  c->r[27]=R8(c->r[4]+0x00000002u); // 804DBBE0
  c->r[28]=R8(c->r[4]+0x00000003u); // 804DBBE4
  c->r[29]=R8(c->r[4]+0x00000004u); // 804DBBE8
  c->r[30]=R8(c->r[4]+0x00000005u); // 804DBBEC
  c->r[31]=R8(c->r[4]+0x00000006u); // 804DBBF0
  c->r[12]=R8(c->r[4]+0x00000007u); // 804DBBF4
  c->r[11]=R8(c->r[4]+0x00000008u); // 804DBBF8
  c->r[10]=R8(c->r[4]+0x00000009u); // 804DBBFC
  c->r[9]=R8(c->r[4]+0x0000000Au); // 804DBC00
  c->r[8]=R8(c->r[4]+0x0000000Bu); // 804DBC04
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 804DBC08
  c->r[6]=R8(c->r[4]+0x0000000Du); // 804DBC0C
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 804DBC10
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 804DBC14
  W8(c->r[3]+0x00000008u,c->r[11]); // 804DBC18
  c->r[11]=c->r[1]+0x00000030u; // 804DBC1C
  W8(c->r[3]+0x00000000u,c->r[25]); // 804DBC20
  W8(c->r[3]+0x00000001u,c->r[26]); // 804DBC24
  W8(c->r[3]+0x00000002u,c->r[27]); // 804DBC28
  W8(c->r[3]+0x00000003u,c->r[28]); // 804DBC2C
  W8(c->r[3]+0x00000004u,c->r[29]); // 804DBC30
  W8(c->r[3]+0x00000005u,c->r[30]); // 804DBC34
  W8(c->r[3]+0x00000006u,c->r[31]); // 804DBC38
  W8(c->r[3]+0x00000007u,c->r[12]); // 804DBC3C
  W8(c->r[3]+0x00000009u,c->r[10]); // 804DBC40
  W8(c->r[3]+0x0000000Au,c->r[9]); // 804DBC44
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 804DBC48
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 804DBC4C
  W8(c->r[3]+0x0000000Du,c->r[6]); // 804DBC50
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 804DBC54
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 804DBC58
  c->lr=0x804DBC60u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DBC5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DBC60
  c->lr=c->r[0]; // 804DBC64
  c->r[1]=c->r[1]+0x00000030u; // 804DBC68
  return; // 804DBC6C
}

// fn_804DBC70
void f_804DBC70(Ctx* __restrict c) {
  trace_call(0x804DBC70u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 804DBC70
  c->r[6]=R8(c->r[4]+0x00000001u); // 804DBC74
  c->r[5]=R8(c->r[4]+0x00000002u); // 804DBC78
  c->r[0]=R8(c->r[4]+0x00000003u); // 804DBC7C
  W8(c->r[3]+0x00000000u,c->r[7]); // 804DBC80
  W8(c->r[3]+0x00000001u,c->r[6]); // 804DBC84
  W8(c->r[3]+0x00000002u,c->r[5]); // 804DBC88
  W8(c->r[3]+0x00000003u,c->r[0]); // 804DBC8C
  return; // 804DBC90
}

// fn_804DBC94
void f_804DBC94(Ctx* __restrict c) {
  trace_call(0x804DBC94u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 804DBC94
  c->r[6]=R8(c->r[4]+0x00000001u); // 804DBC98
  c->r[5]=R8(c->r[4]+0x00000002u); // 804DBC9C
  c->r[0]=R8(c->r[4]+0x00000003u); // 804DBCA0
  W8(c->r[3]+0x00000000u,c->r[7]); // 804DBCA4
  W8(c->r[3]+0x00000001u,c->r[6]); // 804DBCA8
  W8(c->r[3]+0x00000002u,c->r[5]); // 804DBCAC
  W8(c->r[3]+0x00000003u,c->r[0]); // 804DBCB0
  return; // 804DBCB4
}

// fn_804DBCB8
void f_804DBCB8(Ctx* __restrict c) {
  trace_call(0x804DBCB8u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCB8
  return; // 804DBCBC
}

// fn_804DBCC0
void f_804DBCC0(Ctx* __restrict c) {
  trace_call(0x804DBCC0u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCC0
  return; // 804DBCC4
}

// fn_804DBCC8
void f_804DBCC8(Ctx* __restrict c) {
  trace_call(0x804DBCC8u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCC8
  return; // 804DBCCC
}

// fn_804DBCD0
void f_804DBCD0(Ctx* __restrict c) {
  trace_call(0x804DBCD0u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCD0
  return; // 804DBCD4
}

// fn_804DBCD8
void f_804DBCD8(Ctx* __restrict c) {
  trace_call(0x804DBCD8u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCD8
  return; // 804DBCDC
}

// fn_804DBCE0
void f_804DBCE0(Ctx* __restrict c) {
  trace_call(0x804DBCE0u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCE0
  return; // 804DBCE4
}

// fn_804DBCE8
void f_804DBCE8(Ctx* __restrict c) {
  trace_call(0x804DBCE8u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCE8
  return; // 804DBCEC
}

// fn_804DBCF0
void f_804DBCF0(Ctx* __restrict c) {
  trace_call(0x804DBCF0u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCF0
  return; // 804DBCF4
}

// fn_804DBCF8
void f_804DBCF8(Ctx* __restrict c) {
  trace_call(0x804DBCF8u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBCF8
  return; // 804DBCFC
}

// fn_804DBD00
void f_804DBD00(Ctx* __restrict c) {
  trace_call(0x804DBD00u);
  cmpu(c,0,c->r[3],c->r[4]); // 804DBD00
  if (!crb(c,1)) return; // 804DBD04
  c->r[3]=c->r[4]|c->r[4]; // 804DBD08
  return; // 804DBD0C
}

// fn_804DBD10
void f_804DBD10(Ctx* __restrict c) {
  trace_call(0x804DBD10u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBD10
  return; // 804DBD14
}

// fn_804DBD18
void f_804DBD18(Ctx* __restrict c) {
  trace_call(0x804DBD18u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBD18
  return; // 804DBD1C
}

// fn_804DBD20
void f_804DBD20(Ctx* __restrict c) {
  trace_call(0x804DBD20u);
  c->r[3]=c->r[3]+c->r[4]; // 804DBD20
  return; // 804DBD24
}

// fn_804DBD28
void f_804DBD28(Ctx* __restrict c) {
  trace_call(0x804DBD28u);
  c->r[7]=c->r[2]+0x00003350u; // 804DBD28
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DBD2C
  c->r[5]=R32(c->r[3]+0x00000038u); // 804DBD30
  c->r[6]=0u+0x000000FFu; // 804DBD34
  c->r[4]=0u+0x00000000u; // 804DBD38
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0x00003350u); // 804DBD3C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000002u); // 804DBD40
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 804DBD44
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000004u); // 804DBD48
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 804DBD4C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000006u); // 804DBD50
  W16(c->r[3]+0x00000010u,c->r[10]); // 804DBD54
  W16(c->r[3]+0x00000012u,c->r[9]); // 804DBD58
  W16(c->r[3]+0x00000014u,c->r[8]); // 804DBD5C
  W16(c->r[3]+0x00000016u,c->r[7]); // 804DBD60
  W16(c->r[3]+0x00000018u,c->r[6]); // 804DBD64
  W16(c->r[3]+0x0000001Au,c->r[6]); // 804DBD68
  W16(c->r[3]+0x0000001Cu,c->r[6]); // 804DBD6C
  W16(c->r[3]+0x0000001Eu,c->r[6]); // 804DBD70
  W16(c->r[3]+0x00000020u,c->r[6]); // 804DBD74
  W16(c->r[3]+0x00000022u,c->r[6]); // 804DBD78
  W16(c->r[3]+0x00000024u,c->r[6]); // 804DBD7C
  W16(c->r[3]+0x00000026u,c->r[6]); // 804DBD80
  W32(c->r[3]+0x00000038u,c->r[5]); // 804DBD84
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804DBD88
  W8(c->r[3]+0x00000059u,c->r[4]); // 804DBD8C
  W32(c->r[3]+0x00000040u,c->r[4]); // 804DBD90
  return; // 804DBD94
}

// fn_804DBD98
void f_804DBD98(Ctx* __restrict c) {
  trace_call(0x804DBD98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DBD98
  c->r[0]=c->lr; // 804DBD9C
  cmps(c,0,(int32_t)c->r[3],0); // 804DBDA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DBDA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DBDA8
  c->r[31]=c->r[4]|c->r[4]; // 804DBDAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DBDB0
  c->r[30]=c->r[3]|c->r[3]; // 804DBDB4
  if (crb(c,2)) { goto L_804DBE28; } // 804DBDB8
  c->r[12]=0u+0x80720000u; // 804DBDBC
  c->r[12]=c->r[12]+0xFFFFA9C0u; // 804DBDC0
  W32(c->r[3]+0x00000000u,c->r[12]); // 804DBDC4
  c->r[12]=R32(c->r[12]+0x00000018u); // 804DBDC8
  c->ctr=c->r[12]; // 804DBDCC
  if (true) { c->lr=0x804DBDD4u; dispatch(c,c->ctr); } // 804DBDD0
  c->r[4]=R32(c->r[30]+0x00000040u); // 804DBDD4
  cmps(c,0,(int32_t)c->r[4],0); // 804DBDD8
  if (crb(c,2)) { goto L_804DBDF0; } // 804DBDDC
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DBDE0
  c->lr=0x804DBDE8u; f_803C4D18(c); // 804DBDE4
  c->r[0]=0u+0x00000000u; // 804DBDE8
  W32(c->r[30]+0x00000040u,c->r[0]); // 804DBDEC
L_804DBDF0:;
  c->r[4]=0u+0x80040000u; // 804DBDF0
  c->r[3]=c->r[30]+0x00000028u; // 804DBDF4
  c->r[4]=c->r[4]+0x00005E50u; // 804DBDF8
  c->r[5]=0u+0x00000004u; // 804DBDFC
  c->r[6]=0u+0x00000004u; // 804DBE00
  c->lr=0x804DBE08u; f_803A9928(c); // 804DBE04
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 804DBE08
  if (crb(c,2)) { goto L_804DBE18; } // 804DBE0C
  c->r[4]=0u+0x00000000u; // 804DBE10
  c->lr=0x804DBE18u; f_80507DCC(c); // 804DBE14
L_804DBE18:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DBE18
  if (!crb(c,1)) { goto L_804DBE28; } // 804DBE1C
  c->r[3]=c->r[30]|c->r[30]; // 804DBE20
  c->lr=0x804DBE28u; f_803A9400(c); // 804DBE24
L_804DBE28:;
  c->r[3]=c->r[30]|c->r[30]; // 804DBE28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DBE2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DBE30
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DBE34
  c->lr=c->r[0]; // 804DBE38
  c->r[1]=c->r[1]+0x00000010u; // 804DBE3C
  return; // 804DBE40
}

// fn_804DBE44
void f_804DBE44(Ctx* __restrict c) {
  trace_call(0x804DBE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DBE44
  c->r[0]=c->lr; // 804DBE48
  W32(c->r[1]+0x00000064u,c->r[0]); // 804DBE4C
  c->r[11]=c->r[1]+0x00000060u; // 804DBE50
  c->lr=0x804DBE58u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DBE54
  c->r[0]=R32(c->r[3]+0x00000038u); // 804DBE58
  c->r[20]=c->r[3]|c->r[3]; // 804DBE5C
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 804DBE60
  c->r[21]=c->r[4]|c->r[4]; // 804DBE64
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 804DBE68
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 804DBE6C
  cmpu(c,0,c->r[11],c->r[4]); // 804DBE70
  c->r[30]=R8(c->r[1]+0x00000073u); // 804DBE74
  c->r[31]=R8(c->r[1]+0x00000077u); // 804DBE78
  c->r[22]=c->r[5]|c->r[5]; // 804DBE7C
  c->r[23]=c->r[6]|c->r[6]; // 804DBE80
  c->r[24]=c->r[7]|c->r[7]; // 804DBE84
  c->r[25]=c->r[8]|c->r[8]; // 804DBE88
  c->r[26]=c->r[9]|c->r[9]; // 804DBE8C
  c->r[27]=c->r[10]|c->r[10]; // 804DBE90
  if (crb(c,0)) { goto L_804DBF10; } // 804DBE94
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 804DBE98
  cmpu(c,0,c->r[4],c->r[5]); // 804DBE9C
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEA0
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 804DBEA4
  cmpu(c,0,c->r[4],c->r[6]); // 804DBEA8
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEAC
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 804DBEB0
  cmpu(c,0,c->r[4],c->r[7]); // 804DBEB4
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEB8
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 804DBEBC
  cmpu(c,0,c->r[4],c->r[8]); // 804DBEC0
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEC4
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 804DBEC8
  cmpu(c,0,c->r[4],c->r[9]); // 804DBECC
  if (crb(c,0)) { goto L_804DBF10; } // 804DBED0
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 804DBED4
  cmpu(c,0,c->r[4],c->r[10]); // 804DBED8
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEDC
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 804DBEE0
  cmpu(c,0,c->r[4],c->r[28]); // 804DBEE4
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEE8
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 804DBEEC
  cmpu(c,0,c->r[4],c->r[29]); // 804DBEF0
  if (crb(c,0)) { goto L_804DBF10; } // 804DBEF4
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 804DBEF8
  cmpu(c,0,c->r[4],c->r[30]); // 804DBEFC
  if (crb(c,0)) { goto L_804DBF10; } // 804DBF00
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 804DBF04
  cmpu(c,0,c->r[0],c->r[31]); // 804DBF08
  if (!crb(c,0)) { goto L_804DC598; } // 804DBF0C
L_804DBF10:;
  c->r[4]=R32(c->r[3]+0x00000040u); // 804DBF10
  cmps(c,0,(int32_t)c->r[4],0); // 804DBF14
  if (crb(c,2)) { goto L_804DBF44; } // 804DBF18
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DBF1C
  c->lr=0x804DBF24u; f_803C4D18(c); // 804DBF20
  c->r[3]=R32(c->r[20]+0x00000038u); // 804DBF24
  c->r[4]=0u+0x00000000u; // 804DBF28
  c->r[0]=R32(c->r[20]+0x0000003Cu); // 804DBF2C
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 804DBF30
  W32(c->r[20]+0x00000040u,c->r[4]); // 804DBF34
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 804DBF38
  W32(c->r[20]+0x00000038u,c->r[3]); // 804DBF3C
  W32(c->r[20]+0x0000003Cu,c->r[0]); // 804DBF40
L_804DBF44:;
  c->r[4]=c->r[27]+c->r[22]; // 804DBF44
  c->r[0]=c->r[25]+c->r[28]; // 804DBF48
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 804DBF4C
  c->r[5]=c->r[31]+c->r[29]; // 804DBF50
  c->r[3]=c->r[26]+c->r[23]; // 804DBF54
  c->r[4]=c->r[30]+c->r[0]; // 804DBF58
  c->r[6]=c->r[5]+c->r[3]; // 804DBF5C
  c->r[0]=rotl(c->r[24],4)&0x00000FF0u; // 804DBF60
  c->r[5]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 804DBF64
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DBF68
  c->r[4]=c->r[6]+c->r[4]; // 804DBF6C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804DBF70
  c->r[4]=c->r[7]+c->r[4]; // 804DBF74
  c->r[0]=c->r[5]+c->r[0]; // 804DBF78
  c->r[4]=c->r[4]+c->r[0]; // 804DBF7C
  c->lr=0x804DBF84u; f_803C4D08(c); // 804DBF80
  cmps(c,0,(int32_t)c->r[3],0); // 804DBF84
  W32(c->r[20]+0x00000040u,c->r[3]); // 804DBF88
  if (crb(c,2)) { goto L_804DC598; } // 804DBF8C
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DBF90
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 804DBF94
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 804DBF98
  c->r[4]=R32(c->r[20]+0x0000003Cu); // 804DBF9C
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 804DBFA0
  c->r[6]=0u+0x00000000u; // 804DBFA4
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 804DBFA8
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 804DBFAC
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 804DBFB0
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 804DBFB4
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 804DBFB8
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 804DBFBC
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 804DBFC0
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 804DBFC4
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 804DBFC8
  W32(c->r[20]+0x00000038u,c->r[0]); // 804DBFCC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DBFD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DBFD4
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[5]); // 804DBFD8
  W32(c->r[20]+0x0000003Cu,c->r[4]); // 804DBFDC
  c->r[4]=c->r[3]+c->r[0]; // 804DBFE0
  if (crb(c,2)) { goto L_804DC18C; } // 804DBFE4
  cmpu(c,0,c->r[5],0x00000008u); // 804DBFE8
  c->r[3]=c->r[5]+0xFFFFFFF8u; // 804DBFEC
  if (!crb(c,1)) { goto L_804DC140; } // 804DBFF0
  c->r[0]=c->r[3]+0x00000007u; // 804DBFF4
  c->r[7]=c->r[4]|c->r[4]; // 804DBFF8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804DBFFC
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DC000
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DC004
  c->ctr=c->r[0]; // 804DC008
  cmpu(c,0,c->r[3],0x00000000u); // 804DC00C
  if (!crb(c,1)) { goto L_804DC140; } // 804DC010
L_804DC014:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 804DC014
  c->r[6]=c->r[6]+0x00000008u; // 804DC018
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 804DC01C
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 804DC020
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DC024
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804DC028
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 804DC02C
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 804DC030
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC034
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 804DC038
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 804DC03C
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 804DC040
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 804DC044
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 804DC048
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 804DC04C
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 804DC050
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 804DC054
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 804DC058
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 804DC05C
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 804DC060
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 804DC064
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 804DC068
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 804DC06C
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 804DC070
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 804DC074
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 804DC078
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 804DC07C
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 804DC080
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 804DC084
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 804DC088
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 804DC08C
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 804DC090
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 804DC094
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC098
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC09C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC0A0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC0A4
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 804DC0A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC0AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC0B0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC0B4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC0B8
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 804DC0BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC0C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC0C4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC0C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC0CC
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 804DC0D0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC0D4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC0D8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC0DC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC0E0
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 804DC0E4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC0E8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC0EC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC0F0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC0F4
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 804DC0F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC0FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC100
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC104
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC108
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 804DC10C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC110
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC114
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC118
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC11C
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 804DC120
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 804DC124
  c->r[7]=c->r[7]+0x000000A0u; // 804DC128
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC12C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC130
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC134
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC138
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC014; } // 804DC13C
L_804DC140:;
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 804DC140
  c->r[0]=c->r[5]-c->r[6]; // 804DC144
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DC148
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DC14C
  c->r[3]=c->r[4]+c->r[3]; // 804DC150
  c->ctr=c->r[0]; // 804DC154
  cmpu(c,0,c->r[6],c->r[5]); // 804DC158
  if (!crb(c,0)) { goto L_804DC18C; } // 804DC15C
L_804DC160:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 804DC160
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804DC164
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 804DC168
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DC16C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804DC170
  c->r[3]=c->r[3]+0x00000014u; // 804DC174
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804DC178
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC17C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804DC180
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804DC184
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC160; } // 804DC188
L_804DC18C:;
  c->r[10]=R32(c->r[20]+0x00000038u); // 804DC18C
  c->r[4]=0u+0x00000000u; // 804DC190
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC194
  c->r[21]=R32(c->r[20]+0x0000003Cu); // 804DC198
  c->r[7]=rotl(c->r[10],27)&0x00000004u; // 804DC19C
  c->r[21]=(rotl(c->r[0],0)&0x000C0000u)|(c->r[21]&~0x000C0000u); // 804DC1A0
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 804DC1A4
  c->r[5]=rotl(c->r[10],4)&0x0000000Fu; // 804DC1A8
  c->r[6]=rotl(c->r[10],8)&0x0000000Fu; // 804DC1AC
  c->r[0]=c->r[7]+c->r[0]; // 804DC1B0
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 804DC1B4
  c->r[9]=rotl(c->r[10],20)&0x00000004u; // 804DC1B8
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 804DC1BC
  c->r[9]=c->r[9]+c->r[7]; // 804DC1C0
  c->r[11]=rotl(c->r[10],19)&0x0000001Cu; // 804DC1C4
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 804DC1C8
  c->r[8]=c->r[8]+c->r[0]; // 804DC1CC
  c->r[10]=rotl(c->r[10],29)&0x00000004u; // 804DC1D0
  c->r[12]=R32(c->r[20]+0x00000040u); // 804DC1D4
  c->r[3]=rotl(c->r[21],14)&0x00000003u; cr0(c,c->r[3]); // 804DC1D8
  W32(c->r[20]+0x0000003Cu,c->r[21]); // 804DC1DC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 804DC1E0
  c->r[0]=c->r[11]+c->r[10]; // 804DC1E4
  c->r[6]=c->r[9]+c->r[8]; // 804DC1E8
  c->r[0]=c->r[12]+c->r[0]; // 804DC1EC
  c->r[5]=c->r[7]+c->r[5]; // 804DC1F0
  c->r[5]=c->r[6]+c->r[5]; // 804DC1F4
  c->r[6]=c->r[5]+c->r[0]; // 804DC1F8
  if (crb(c,2)) { goto L_804DC3A4; } // 804DC1FC
  cmpu(c,0,c->r[3],0x00000008u); // 804DC200
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 804DC204
  if (!crb(c,1)) { goto L_804DC358; } // 804DC208
  c->r[0]=c->r[5]+0x00000007u; // 804DC20C
  c->r[7]=c->r[6]|c->r[6]; // 804DC210
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804DC214
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DC218
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DC21C
  c->ctr=c->r[0]; // 804DC220
  cmpu(c,0,c->r[5],0x00000000u); // 804DC224
  if (!crb(c,1)) { goto L_804DC358; } // 804DC228
L_804DC22C:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 804DC22C
  c->r[4]=c->r[4]+0x00000008u; // 804DC230
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 804DC234
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 804DC238
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DC23C
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804DC240
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 804DC244
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 804DC248
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 804DC24C
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 804DC250
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 804DC254
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 804DC258
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 804DC25C
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 804DC260
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 804DC264
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 804DC268
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 804DC26C
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 804DC270
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 804DC274
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 804DC278
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 804DC27C
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 804DC280
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 804DC284
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 804DC288
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 804DC28C
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 804DC290
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 804DC294
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 804DC298
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 804DC29C
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 804DC2A0
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 804DC2A4
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 804DC2A8
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 804DC2AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC2B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC2B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC2B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC2BC
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 804DC2C0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC2C4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC2C8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC2CC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC2D0
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 804DC2D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC2D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC2DC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC2E0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC2E4
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 804DC2E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC2EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC2F0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC2F4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC2F8
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 804DC2FC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC300
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC304
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC308
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC30C
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 804DC310
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC314
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC318
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC31C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC320
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 804DC324
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC328
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC32C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC330
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC334
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 804DC338
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 804DC33C
  c->r[7]=c->r[7]+0x000000A0u; // 804DC340
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC344
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC348
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC34C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC350
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC22C; } // 804DC354
L_804DC358:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 804DC358
  c->r[0]=c->r[3]-c->r[4]; // 804DC35C
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DC360
  {uint32_t ea=c->r[2]+0x000017CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DC364
  c->r[5]=c->r[6]+c->r[5]; // 804DC368
  c->ctr=c->r[0]; // 804DC36C
  cmpu(c,0,c->r[4],c->r[3]); // 804DC370
  if (!crb(c,0)) { goto L_804DC3A4; } // 804DC374
L_804DC378:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 804DC378
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 804DC37C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 804DC380
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DC384
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 804DC388
  c->r[5]=c->r[5]+0x00000014u; // 804DC38C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804DC390
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DC394
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804DC398
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804DC39C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC378; } // 804DC3A0
L_804DC3A4:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC3A4
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 804DC3A8
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 804DC3AC
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 804DC3B0
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 804DC3B4
  if (crb(c,2)) { goto L_804DC3F8; } // 804DC3B8
  c->r[6]=R32(c->r[20]+0x00000038u); // 804DC3BC
  c->r[3]=0u+0x00000001u; // 804DC3C0
  c->r[7]=R32(c->r[20]+0x00000040u); // 804DC3C4
  c->r[0]=0u+0x00000000u; // 804DC3C8
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 804DC3CC
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 804DC3D0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 804DC3D4
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 804DC3D8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 804DC3DC
  c->r[5]=c->r[6]+c->r[5]; // 804DC3E0
  c->r[4]=c->r[7]+c->r[4]; // 804DC3E4
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 804DC3E8
  W8(c->r[4]+0x00000001u,c->r[3]); // 804DC3EC
  W8(c->r[4]+0x00000002u,c->r[0]); // 804DC3F0
  W8(c->r[4]+0x00000003u,c->r[0]); // 804DC3F4
L_804DC3F8:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC3F8
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 804DC3FC
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 804DC400
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 804DC404
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 804DC408
  if (crb(c,2)) { goto L_804DC444; } // 804DC40C
  c->r[5]=R32(c->r[20]+0x00000038u); // 804DC410
  c->r[8]=0u+0xFFFFFFFFu; // 804DC414
  c->r[7]=R32(c->r[20]+0x00000040u); // 804DC418
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 804DC41C
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 804DC420
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC424
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 804DC428
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 804DC42C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC430
  c->r[0]=c->r[6]+c->r[5]; // 804DC434
  c->r[0]=c->r[7]+c->r[0]; // 804DC438
  c->r[3]=c->r[4]+c->r[3]; // 804DC43C
  W32(c->r[3]+c->r[0],c->r[8]); // 804DC440
L_804DC444:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC444
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 804DC448
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 804DC44C
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 804DC450
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 804DC454
  if (crb(c,2)) { goto L_804DC4B0; } // 804DC458
  c->r[9]=R32(c->r[20]+0x00000038u); // 804DC45C
  c->r[5]=0u+0x000000E4u; // 804DC460
  c->r[10]=R32(c->r[20]+0x00000040u); // 804DC464
  c->r[4]=0u+0x000000C0u; // 804DC468
  c->r[3]=rotl(c->r[9],8)&0x0000000Fu; // 804DC46C
  c->r[0]=rotl(c->r[9],4)&0x0000000Fu; // 804DC470
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC474
  c->r[7]=rotl(c->r[9],27)&0x00000004u; // 804DC478
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 804DC47C
  c->r[9]=rotl(c->r[9],14)&0x0000003Cu; // 804DC480
  c->r[6]=c->r[7]+c->r[6]; // 804DC484
  c->r[3]=0u+0x000000D5u; // 804DC488
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC48C
  c->r[0]=0u+0x000000EAu; // 804DC490
  c->r[6]=c->r[9]+c->r[6]; // 804DC494
  c->r[7]=c->r[8]+c->r[7]; // 804DC498
  c->r[6]=c->r[10]+c->r[6]; // 804DC49C
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 804DC4A0
  W8(c->r[6]+0x00000001u,c->r[4]); // 804DC4A4
  W8(c->r[6]+0x00000002u,c->r[3]); // 804DC4A8
  W8(c->r[6]+0x00000003u,c->r[0]); // 804DC4AC
L_804DC4B0:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC4B0
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 804DC4B4
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 804DC4B8
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 804DC4BC
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 804DC4C0
  if (crb(c,2)) { goto L_804DC51C; } // 804DC4C4
  c->r[6]=R32(c->r[20]+0x00000038u); // 804DC4C8
  c->r[3]=0u+0x00000077u; // 804DC4CC
  c->r[11]=R32(c->r[20]+0x00000040u); // 804DC4D0
  c->r[0]=0u+0x00000000u; // 804DC4D4
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 804DC4D8
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 804DC4DC
  c->r[10]=rotl(c->r[6],20)&0x00000004u; // 804DC4E0
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 804DC4E4
  c->r[9]=rotl(c->r[6],27)&0x00000004u; // 804DC4E8
  c->r[8]=rotl(c->r[6],26)&0x00000004u; // 804DC4EC
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 804DC4F0
  c->r[7]=c->r[10]+c->r[7]; // 804DC4F4
  c->r[8]=c->r[9]+c->r[8]; // 804DC4F8
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 804DC4FC
  c->r[4]=c->r[8]+c->r[7]; // 804DC500
  c->r[4]=c->r[11]+c->r[4]; // 804DC504
  c->r[5]=c->r[6]+c->r[5]; // 804DC508
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 804DC50C
  W8(c->r[4]+0x00000001u,c->r[0]); // 804DC510
  W8(c->r[4]+0x00000002u,c->r[0]); // 804DC514
  W8(c->r[4]+0x00000003u,c->r[0]); // 804DC518
L_804DC51C:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 804DC51C
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 804DC520
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 804DC524
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 804DC528
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 804DC52C
  if (crb(c,2)) { goto L_804DC598; } // 804DC530
  c->r[7]=R32(c->r[20]+0x00000038u); // 804DC534
  c->r[5]=0u+0x00000001u; // 804DC538
  c->r[11]=R32(c->r[20]+0x00000040u); // 804DC53C
  c->r[4]=0u+0x00000004u; // 804DC540
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 804DC544
  c->r[0]=rotl(c->r[7],4)&0x0000000Fu; // 804DC548
  c->r[8]=rotl(c->r[7],27)&0x00000004u; // 804DC54C
  c->r[6]=rotl(c->r[7],26)&0x00000004u; // 804DC550
  c->r[6]=c->r[8]+c->r[6]; // 804DC554
  c->r[10]=rotl(c->r[7],28)&0x00000004u; // 804DC558
  c->r[9]=rotl(c->r[7],20)&0x00000004u; // 804DC55C
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 804DC560
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC564
  c->r[6]=c->r[10]+c->r[6]; // 804DC568
  c->r[9]=c->r[9]+c->r[7]; // 804DC56C
  c->r[3]=0u+0x00000005u; // 804DC570
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC574
  c->r[6]=c->r[9]+c->r[6]; // 804DC578
  c->r[0]=0u+0x0000000Fu; // 804DC57C
  c->r[6]=c->r[11]+c->r[6]; // 804DC580
  c->r[7]=c->r[8]+c->r[7]; // 804DC584
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 804DC588
  W8(c->r[6]+0x00000001u,c->r[4]); // 804DC58C
  W8(c->r[6]+0x00000002u,c->r[3]); // 804DC590
  W8(c->r[6]+0x00000003u,c->r[0]); // 804DC594
L_804DC598:;
  c->r[11]=c->r[1]+0x00000060u; // 804DC598
  c->lr=0x804DC5A0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DC59C
  c->r[0]=R32(c->r[1]+0x00000064u); // 804DC5A0
  c->lr=c->r[0]; // 804DC5A4
  c->r[1]=c->r[1]+0x00000060u; // 804DC5A8
  return; // 804DC5AC
}

// fn_804DC5B0
void f_804DC5B0(Ctx* __restrict c) {
  trace_call(0x804DC5B0u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 804DC5B0
  return; // 804DC5B4
}

// fn_804DC5B8
void f_804DC5B8(Ctx* __restrict c) {
  trace_call(0x804DC5B8u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 804DC5B8
  c->r[3]=R32(c->r[3]+0x00000040u); // 804DC5BC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DC5C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC5C4
  c->r[3]=c->r[3]+c->r[0]; // 804DC5C8
  return; // 804DC5CC
}

// fn_804DC5D0
void f_804DC5D0(Ctx* __restrict c) {
  trace_call(0x804DC5D0u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 804DC5D0
  c->r[3]=R32(c->r[3]+0x00000040u); // 804DC5D4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DC5D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC5DC
  c->r[3]=c->r[3]+c->r[0]; // 804DC5E0
  return; // 804DC5E4
}

// fn_804DC5E8
void f_804DC5E8(Ctx* __restrict c) {
  trace_call(0x804DC5E8u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 804DC5E8
  c->r[5]=R32(c->r[3]+0x00000040u); // 804DC5EC
  c->r[3]=rotl(c->r[0],8)&0x0000000Fu; // 804DC5F0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DC5F4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC5F8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC5FC
  c->r[0]=c->r[5]+c->r[4]; // 804DC600
  c->r[3]=c->r[3]+c->r[0]; // 804DC604
  return; // 804DC608
}

// fn_804DC60C
void f_804DC60C(Ctx* __restrict c) {
  trace_call(0x804DC60Cu);
  c->r[4]=R32(c->r[3]+0x00000038u); // 804DC60C
  c->r[5]=R32(c->r[3]+0x00000040u); // 804DC610
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 804DC614
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 804DC618
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC61C
  c->r[4]=rotl(c->r[4],14)&0x0000003Cu; // 804DC620
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC624
  c->r[0]=c->r[5]+c->r[0]; // 804DC628
  c->r[3]=c->r[4]+c->r[3]; // 804DC62C
  c->r[3]=c->r[3]+c->r[0]; // 804DC630
  return; // 804DC634
}

// fn_804DC638
void f_804DC638(Ctx* __restrict c) {
  trace_call(0x804DC638u);
  c->r[5]=R32(c->r[3]+0x00000038u); // 804DC638
  c->r[7]=R32(c->r[3]+0x00000040u); // 804DC63C
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 804DC640
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 804DC644
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC648
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 804DC64C
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 804DC650
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC654
  c->r[0]=c->r[6]+c->r[5]; // 804DC658
  c->r[0]=c->r[7]+c->r[0]; // 804DC65C
  c->r[3]=c->r[4]+c->r[3]; // 804DC660
  c->r[3]=c->r[3]+c->r[0]; // 804DC664
  return; // 804DC668
}

// fn_804DC66C
void f_804DC66C(Ctx* __restrict c) {
  trace_call(0x804DC66Cu);
  c->r[6]=R32(c->r[3]+0x00000038u); // 804DC66C
  c->r[8]=R32(c->r[3]+0x00000040u); // 804DC670
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 804DC674
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 804DC678
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC67C
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 804DC680
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 804DC684
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 804DC688
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC68C
  c->r[5]=c->r[7]+c->r[5]; // 804DC690
  c->r[0]=c->r[6]+c->r[5]; // 804DC694
  c->r[0]=c->r[8]+c->r[0]; // 804DC698
  c->r[3]=c->r[4]+c->r[3]; // 804DC69C
  c->r[3]=c->r[3]+c->r[0]; // 804DC6A0
  return; // 804DC6A4
}

// fn_804DC6A8
void f_804DC6A8(Ctx* __restrict c) {
  trace_call(0x804DC6A8u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 804DC6A8
  c->r[9]=R32(c->r[3]+0x00000040u); // 804DC6AC
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 804DC6B0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 804DC6B4
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 804DC6B8
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 804DC6BC
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 804DC6C0
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 804DC6C4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC6C8
  c->r[5]=c->r[8]+c->r[5]; // 804DC6CC
  c->r[6]=c->r[7]+c->r[6]; // 804DC6D0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC6D4
  c->r[0]=c->r[6]+c->r[5]; // 804DC6D8
  c->r[0]=c->r[9]+c->r[0]; // 804DC6DC
  c->r[3]=c->r[4]+c->r[3]; // 804DC6E0
  c->r[3]=c->r[3]+c->r[0]; // 804DC6E4
  return; // 804DC6E8
}

// fn_804DC6EC
void f_804DC6EC(Ctx* __restrict c) {
  trace_call(0x804DC6ECu);
  c->r[6]=R32(c->r[3]+0x00000038u); // 804DC6EC
  c->r[9]=R32(c->r[3]+0x00000040u); // 804DC6F0
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 804DC6F4
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 804DC6F8
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 804DC6FC
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 804DC700
  c->r[5]=c->r[5]+c->r[4]; // 804DC704
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 804DC708
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 804DC70C
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 804DC710
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC714
  c->r[5]=c->r[8]+c->r[5]; // 804DC718
  c->r[6]=c->r[7]+c->r[6]; // 804DC71C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC720
  c->r[0]=c->r[6]+c->r[5]; // 804DC724
  c->r[0]=c->r[9]+c->r[0]; // 804DC728
  c->r[3]=c->r[4]+c->r[3]; // 804DC72C
  c->r[3]=c->r[3]+c->r[0]; // 804DC730
  return; // 804DC734
}

// fn_804DC738
void f_804DC738(Ctx* __restrict c) {
  trace_call(0x804DC738u);
  c->r[8]=R32(c->r[3]+0x00000038u); // 804DC738
  c->r[9]=R32(c->r[3]+0x00000040u); // 804DC73C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 804DC740
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 804DC744
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 804DC748
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 804DC74C
  c->r[4]=c->r[5]+c->r[4]; // 804DC750
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 804DC754
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC758
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 804DC75C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 804DC760
  c->r[4]=c->r[7]+c->r[4]; // 804DC764
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC768
  c->r[5]=c->r[6]+c->r[5]; // 804DC76C
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 804DC770
  c->r[0]=c->r[3]+c->r[0]; // 804DC774
  c->r[3]=c->r[5]+c->r[4]; // 804DC778
  c->r[3]=c->r[6]+c->r[3]; // 804DC77C
  c->r[0]=c->r[9]+c->r[0]; // 804DC780
  c->r[3]=c->r[3]+c->r[0]; // 804DC784
  return; // 804DC788
}

// fn_804DC78C
void f_804DC78C(Ctx* __restrict c) {
  trace_call(0x804DC78Cu);
  c->r[10]=R32(c->r[3]+0x00000038u); // 804DC78C
  c->r[11]=R32(c->r[3]+0x00000040u); // 804DC790
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 804DC794
  c->r[0]=rotl(c->r[10],4)&0x0000000Fu; // 804DC798
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC79C
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 804DC7A0
  c->r[5]=rotl(c->r[10],26)&0x00000004u; // 804DC7A4
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 804DC7A8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC7AC
  c->r[5]=c->r[6]+c->r[5]; // 804DC7B0
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 804DC7B4
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 804DC7B8
  c->r[9]=rotl(c->r[10],19)&0x0000001Cu; // 804DC7BC
  c->r[0]=rotl(c->r[10],29)&0x00000004u; // 804DC7C0
  c->r[0]=c->r[9]+c->r[0]; // 804DC7C4
  c->r[6]=c->r[7]+c->r[6]; // 804DC7C8
  c->r[5]=c->r[8]+c->r[5]; // 804DC7CC
  c->r[3]=c->r[4]+c->r[3]; // 804DC7D0
  c->r[4]=c->r[6]+c->r[5]; // 804DC7D4
  c->r[0]=c->r[11]+c->r[0]; // 804DC7D8
  c->r[3]=c->r[4]+c->r[3]; // 804DC7DC
  c->r[3]=c->r[3]+c->r[0]; // 804DC7E0
  return; // 804DC7E4
}

