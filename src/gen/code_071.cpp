#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_804DC7E8
void f_804DC7E8(Ctx* __restrict c) {
  trace_call(0x804DC7E8u);
  c->r[7]=R32(c->r[3]+0x00000038u); // 804DC7E8
  c->r[8]=R32(c->r[3]+0x00000040u); // 804DC7EC
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 804DC7F0
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 804DC7F4
  c->r[3]=c->r[3]+c->r[0]; // 804DC7F8
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 804DC7FC
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DC800
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 804DC804
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 804DC808
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 804DC80C
  c->r[0]=c->r[4]+c->r[0]; // 804DC810
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 804DC814
  c->r[0]=c->r[3]+c->r[0]; // 804DC818
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 804DC81C
  c->r[0]=c->r[4]+c->r[0]; // 804DC820
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 804DC824
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 804DC828
  c->r[0]=c->r[3]+c->r[0]; // 804DC82C
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 804DC830
  c->r[5]=c->r[6]+c->r[5]; // 804DC834
  c->r[0]=c->r[5]+c->r[0]; // 804DC838
  c->r[3]=c->r[4]+c->r[3]; // 804DC83C
  c->r[0]=c->r[8]+c->r[0]; // 804DC840
  c->r[3]=c->r[3]+c->r[0]; // 804DC844
  return; // 804DC848
}

// fn_804DC84C
void f_804DC84C(Ctx* __restrict c) {
  trace_call(0x804DC84Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DC84C
  c->r[0]=c->lr; // 804DC850
  c->r[5]=0u+0x00000014u; // 804DC854
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DC858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DC85C
  c->r[31]=c->r[3]|c->r[3]; // 804DC860
  c->r[3]=c->r[3]+0x00000044u; // 804DC864
  c->lr=0x804DC86Cu; f_803B3880(c); // 804DC868
  c->r[0]=0u+0x00000000u; // 804DC86C
  W8(c->r[31]+0x00000058u,c->r[0]); // 804DC870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DC874
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DC878
  c->lr=c->r[0]; // 804DC87C
  c->r[1]=c->r[1]+0x00000010u; // 804DC880
  return; // 804DC884
}

// fn_804DC888
void f_804DC888(Ctx* __restrict c) {
  trace_call(0x804DC888u);
  cmps(c,0,(int32_t)c->r[4],0); // 804DC888
  if (crb(c,2)) { goto L_804DC908; } // 804DC88C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DC890
  c->r[6]=0u+0x00000000u; // 804DC894
  c->r[8]=R32(c->r[3]+0x00000040u); // 804DC898
  c->r[5]=0u+0x00000001u; // 804DC89C
  c->r[9]=rotl(c->r[0],4)&0x0000000Fu; // 804DC8A0
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DC8A4
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)28); // 804DC8A8
  c->r[0]=c->r[4]-c->r[9]; // 804DC8AC
  c->r[7]=c->r[8]+c->r[7]; // 804DC8B0
  c->ctr=c->r[0]; // 804DC8B4
  cmpu(c,0,c->r[9],c->r[4]); // 804DC8B8
  if (!crb(c,0)) { goto L_804DC908; } // 804DC8BC
L_804DC8C0:;
  cmps(c,0,(int32_t)c->r[7],0); // 804DC8C0
  if (crb(c,2)) { goto L_804DC900; } // 804DC8C4
  W32(c->r[7]+0x00000000u,c->r[6]); // 804DC8C8
  W16(c->r[7]+0x00000008u,c->r[6]); // 804DC8CC
  W16(c->r[7]+0x0000000Au,c->r[6]); // 804DC8D0
  c->r[0]=R32(c->r[7]+0x00000018u); // 804DC8D4
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DC8D8
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 804DC8DC
  c->r[0]=(rotl(c->r[5],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 804DC8E0
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804DC8E4
  c->r[0]=c->r[0]|0x00080000u; // 804DC8E8
  c->r[0]=rotl(c->r[0],0)&0xFFF81FFFu; // 804DC8EC
  W16(c->r[7]+0x00000014u,c->r[6]); // 804DC8F0
  W32(c->r[7]+0x00000004u,c->r[6]); // 804DC8F4
  W32(c->r[7]+0x00000018u,c->r[0]); // 804DC8F8
  W16(c->r[7]+0x00000016u,c->r[6]); // 804DC8FC
L_804DC900:;
  c->r[7]=c->r[7]+0x0000001Cu; // 804DC900
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC8C0; } // 804DC904
L_804DC908:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DC908
  c->r[0]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 804DC90C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804DC910
  return; // 804DC914
}

// fn_804DC918
void f_804DC918(Ctx* __restrict c) {
  trace_call(0x804DC918u);
  cmps(c,0,(int32_t)c->r[4],0); // 804DC918
  if (crb(c,2)) { goto L_804DC990; } // 804DC91C
  c->r[0]=R32(c->r[3]+0x00000038u); // 804DC920
  c->r[8]=0u+0x00000000u; // 804DC924
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 804DC928
  c->r[7]=0u+0x00000001u; // 804DC92C
  c->r[5]=rotl(c->r[0],8)&0x0000000Fu; // 804DC930
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DC934
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 804DC938
  c->r[6]=R32(c->r[3]+0x00000040u); // 804DC93C
  c->r[11]=rotl(c->r[9],12)&0x0000000Fu; // 804DC940
  c->r[10]=rotl(c->r[9],14)&0x0000003Cu; // 804DC944
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DC948
  c->r[0]=c->r[4]-c->r[11]; // 804DC94C
  c->r[5]=c->r[6]+c->r[5]; // 804DC950
  c->r[6]=0u+0x00000004u; // 804DC954
  c->r[9]=c->r[9]+c->r[5]; // 804DC958
  c->r[5]=0u+0x0000003Cu; // 804DC95C
  c->r[9]=c->r[10]+c->r[9]; // 804DC960
  c->ctr=c->r[0]; // 804DC964
  cmpu(c,0,c->r[11],c->r[4]); // 804DC968
  if (!crb(c,0)) { goto L_804DC990; } // 804DC96C
L_804DC970:;
  cmps(c,0,(int32_t)c->r[9],0); // 804DC970
  if (crb(c,2)) { goto L_804DC988; } // 804DC974
  W8(c->r[9]+0x00000003u,c->r[8]); // 804DC978
  W8(c->r[9]+0x00000000u,c->r[7]); // 804DC97C
  W8(c->r[9]+0x00000001u,c->r[6]); // 804DC980
  W8(c->r[9]+0x00000002u,c->r[5]); // 804DC984
L_804DC988:;
  c->r[9]=c->r[9]+0x00000004u; // 804DC988
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DC970; } // 804DC98C
L_804DC990:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DC990
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 804DC994
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804DC998
  return; // 804DC99C
}

// fn_804DC9A0
void f_804DC9A0(Ctx* __restrict c) {
  trace_call(0x804DC9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DC9A0
  cmps(c,0,(int32_t)c->r[4],0); // 804DC9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DC9A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DC9AC
  if (crb(c,2)) { goto L_804DCAA4; } // 804DC9B0
  c->r[10]=R32(c->r[3]+0x00000038u); // 804DC9B4
  c->r[31]=0u+0x000000FFu; // 804DC9B8
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 804DC9BC
  c->r[12]=0u+0x00000004u; // 804DC9C0
  c->r[5]=rotl(c->r[10],14)&0x00000003u; // 804DC9C4
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 804DC9C8
  c->r[5]=c->r[5]+c->r[0]; // 804DC9CC
  c->r[8]=rotl(c->r[10],4)&0x0000000Fu; // 804DC9D0
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 804DC9D4
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 804DC9D8
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 804DC9DC
  c->r[11]=R32(c->r[3]+0x00000040u); // 804DC9E0
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 804DC9E4
  c->r[0]=c->r[6]+c->r[0]; // 804DC9E8
  c->r[5]=c->r[5]+c->r[0]; // 804DC9EC
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 804DC9F0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)28); // 804DC9F4
  c->r[6]=rotl(c->r[10],28)&0x00000004u; // 804DC9F8
  c->r[5]=c->r[7]+c->r[5]; // 804DC9FC
  c->r[0]=rotl(c->r[30],23)&0x0000001Fu; // 804DCA00
  c->r[7]=c->r[9]+c->r[8]; // 804DCA04
  c->r[6]=c->r[6]+c->r[5]; // 804DCA08
  c->r[6]=c->r[7]+c->r[6]; // 804DCA0C
  c->r[8]=rotl(c->r[10],29)&0x00000004u; // 804DCA10
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 804DCA14
  c->r[7]=rotl(c->r[30],27)&0x000001F0u; // 804DCA18
  c->r[8]=c->r[8]+c->r[5]; // 804DCA1C
  c->r[6]=c->r[11]+c->r[6]; // 804DCA20
  c->r[6]=c->r[8]+c->r[6]; // 804DCA24
  c->r[5]=c->r[4]-c->r[0]; // 804DCA28
  c->r[30]=c->r[7]+c->r[6]; // 804DCA2C
  c->r[11]=0u+0x00000000u; // 804DCA30
  c->r[10]=0u+0x000000AFu; // 804DCA34
  c->r[9]=0u+0x00000077u; // 804DCA38
  c->r[8]=0u+0x00000057u; // 804DCA3C
  c->r[7]=0u+0x00000061u; // 804DCA40
  c->r[6]=0u+0x00000081u; // 804DCA44
  c->ctr=c->r[5]; // 804DCA48
  cmpu(c,0,c->r[0],c->r[4]); // 804DCA4C
  if (!crb(c,0)) { goto L_804DCAA4; } // 804DCA50
L_804DCA54:;
  cmps(c,0,(int32_t)c->r[30],0); // 804DCA54
  if (crb(c,2)) { goto L_804DCA9C; } // 804DCA58
  W8(c->r[30]+0x00000000u,c->r[31]); // 804DCA5C
  W8(c->r[30]+0x00000001u,c->r[12]); // 804DCA60
  W8(c->r[30]+0x00000002u,c->r[31]); // 804DCA64
  W8(c->r[30]+0x00000003u,c->r[11]); // 804DCA68
  W8(c->r[30]+0x00000004u,c->r[31]); // 804DCA6C
  W8(c->r[30]+0x00000005u,c->r[10]); // 804DCA70
  W8(c->r[30]+0x00000008u,c->r[9]); // 804DCA74
  W8(c->r[30]+0x00000009u,c->r[8]); // 804DCA78
  W8(c->r[30]+0x00000006u,c->r[11]); // 804DCA7C
  W8(c->r[30]+0x00000007u,c->r[7]); // 804DCA80
  W8(c->r[30]+0x0000000Au,c->r[11]); // 804DCA84
  W8(c->r[30]+0x0000000Bu,c->r[6]); // 804DCA88
  W8(c->r[30]+0x0000000Cu,c->r[11]); // 804DCA8C
  W8(c->r[30]+0x0000000Du,c->r[11]); // 804DCA90
  W8(c->r[30]+0x0000000Eu,c->r[11]); // 804DCA94
  W8(c->r[30]+0x0000000Fu,c->r[11]); // 804DCA98
L_804DCA9C:;
  c->r[30]=c->r[30]+0x00000010u; // 804DCA9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DCA54; } // 804DCAA0
L_804DCAA4:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DCAA4
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 804DCAA8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804DCAAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DCAB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DCAB4
  c->r[1]=c->r[1]+0x00000010u; // 804DCAB8
  return; // 804DCABC
}

// fn_804DCAC0
void f_804DCAC0(Ctx* __restrict c) {
  trace_call(0x804DCAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DCAC0
  cmps(c,0,(int32_t)c->r[4],0); // 804DCAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DCAC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DCACC
  if (crb(c,2)) { goto L_804DCB68; } // 804DCAD0
  c->r[11]=R32(c->r[3]+0x00000038u); // 804DCAD4
  c->r[5]=0u+0x00000000u; // 804DCAD8
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 804DCADC
  c->r[6]=rotl(c->r[11],8)&0x0000000Fu; // 804DCAE0
  c->r[0]=rotl(c->r[11],4)&0x0000000Fu; // 804DCAE4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 804DCAE8
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 804DCAEC
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 804DCAF0
  c->r[12]=R32(c->r[3]+0x00000040u); // 804DCAF4
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 804DCAF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DCAFC
  c->r[8]=c->r[8]+c->r[7]; // 804DCB00
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 804DCB04
  c->r[0]=c->r[6]+c->r[0]; // 804DCB08
  c->r[7]=rotl(c->r[11],14)&0x0000003Cu; // 804DCB0C
  c->r[6]=c->r[10]+c->r[8]; // 804DCB10
  c->r[8]=rotl(c->r[11],29)&0x00000004u; // 804DCB14
  c->r[7]=c->r[9]+c->r[7]; // 804DCB18
  c->r[30]=rotl(c->r[31],17)&0x00000007u; // 804DCB1C
  c->r[6]=c->r[7]+c->r[6]; // 804DCB20
  c->r[0]=c->r[12]+c->r[0]; // 804DCB24
  c->r[6]=c->r[8]+c->r[6]; // 804DCB28
  c->r[7]=rotl(c->r[31],19)&0x0000001Cu; // 804DCB2C
  c->r[6]=c->r[6]+c->r[0]; // 804DCB30
  c->r[0]=c->r[4]-c->r[30]; // 804DCB34
  c->r[6]=c->r[7]+c->r[6]; // 804DCB38
  c->ctr=c->r[0]; // 804DCB3C
  cmpu(c,0,c->r[30],c->r[4]); // 804DCB40
  if (!crb(c,0)) { goto L_804DCB68; } // 804DCB44
L_804DCB48:;
  cmps(c,0,(int32_t)c->r[6],0); // 804DCB48
  if (crb(c,2)) { goto L_804DCB60; } // 804DCB4C
  W8(c->r[6]+0x00000000u,c->r[5]); // 804DCB50
  W8(c->r[6]+0x00000001u,c->r[5]); // 804DCB54
  W8(c->r[6]+0x00000002u,c->r[5]); // 804DCB58
  W8(c->r[6]+0x00000003u,c->r[5]); // 804DCB5C
L_804DCB60:;
  c->r[6]=c->r[6]+0x00000004u; // 804DCB60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DCB48; } // 804DCB64
L_804DCB68:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DCB68
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 804DCB6C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 804DCB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DCB74
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DCB78
  c->r[1]=c->r[1]+0x00000010u; // 804DCB7C
  return; // 804DCB80
}

// fn_804DCB84
void f_804DCB84(Ctx* __restrict c) {
  trace_call(0x804DCB84u);
  cmps(c,0,(int32_t)c->r[4],16); // 804DCB84
  if (!crb(c,0)) { goto L_804DCBA0; } // 804DCB88
  cmps(c,0,(int32_t)c->r[4],4); // 804DCB8C
  if (!crb(c,0)) { goto L_804DCC58; } // 804DCB90
  cmps(c,0,(int32_t)c->r[4],0); // 804DCB94
  if (!crb(c,0)) { goto L_804DCBAC; } // 804DCB98
  return; // 804DCB9C
L_804DCBA0:;
  cmps(c,0,(int32_t)c->r[4],32); // 804DCBA0
  if (!crb(c,0)) return; // 804DCBA4
  goto L_804DCCCC; // 804DCBA8
L_804DCBAC:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 804DCBAC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 804DCBB0
  cmpu(c,0,c->r[0],0x00000001u); // 804DCBB4
  if (crb(c,0)) return; // 804DCBB8
  c->r[7]=R32(c->r[3]+0x00000038u); // 804DCBBC
  c->r[0]=sraw(c,c->r[5],31); // 804DCBC0
  c->r[10]=c->r[5]&~c->r[0]; // 804DCBC4
  c->r[9]=R32(c->r[3]+0x00000040u); // 804DCBC8
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 804DCBCC
  c->r[3]=rotl(c->r[7],4)&0x0000000Fu; // 804DCBD0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 804DCBD4
  c->r[8]=rotl(c->r[7],26)&0x00000004u; // 804DCBD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 804DCBDC
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 804DCBE0
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 804DCBE4
  cmps(c,0,(int32_t)c->r[0],255); // 804DCBE8
  c->r[0]=c->r[8]+c->r[7]; // 804DCBEC
  c->r[3]=0u+0x000000FFu; // 804DCBF0
  c->r[5]=c->r[6]+c->r[5]; // 804DCBF4
  c->r[0]=c->r[9]+c->r[0]; // 804DCBF8
  c->r[5]=c->r[5]+c->r[0]; // 804DCBFC
  if (crb(c,1)) { goto L_804DCC08; } // 804DCC00
  c->r[3]=c->r[10]|c->r[10]; // 804DCC04
L_804DCC08:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804DCC08
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 804DCC0C
  cmps(c,0,(int32_t)c->r[0],2); // 804DCC10
  if (crb(c,2)) { goto L_804DCC48; } // 804DCC14
  if (!crb(c,0)) { goto L_804DCC2C; } // 804DCC18
  cmps(c,0,(int32_t)c->r[0],0); // 804DCC1C
  if (crb(c,2)) { goto L_804DCC38; } // 804DCC20
  if (!crb(c,0)) { goto L_804DCC40; } // 804DCC24
  return; // 804DCC28
L_804DCC2C:;
  cmps(c,0,(int32_t)c->r[0],4); // 804DCC2C
  if (!crb(c,0)) return; // 804DCC30
  goto L_804DCC50; // 804DCC34
L_804DCC38:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 804DCC38
  return; // 804DCC3C
L_804DCC40:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 804DCC40
  return; // 804DCC44
L_804DCC48:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 804DCC48
  return; // 804DCC4C
L_804DCC50:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 804DCC50
  return; // 804DCC54
L_804DCC58:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 804DCC58
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 804DCC5C
  cmps(c,0,(int32_t)c->r[0],2); // 804DCC60
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 804DCC64
  if (crb(c,2)) { goto L_804DCCAC; } // 804DCC68
  if (!crb(c,0)) { goto L_804DCC80; } // 804DCC6C
  cmps(c,0,(int32_t)c->r[0],0); // 804DCC70
  if (crb(c,2)) { goto L_804DCC8C; } // 804DCC74
  if (!crb(c,0)) { goto L_804DCC9C; } // 804DCC78
  return; // 804DCC7C
L_804DCC80:;
  cmps(c,0,(int32_t)c->r[0],4); // 804DCC80
  if (!crb(c,0)) return; // 804DCC84
  goto L_804DCCBC; // 804DCC88
L_804DCC8C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DCC8C
  c->r[3]=c->r[3]+c->r[0]; // 804DCC90
  W16(c->r[3]+0x00000010u,c->r[5]); // 804DCC94
  return; // 804DCC98
L_804DCC9C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DCC9C
  c->r[3]=c->r[3]+c->r[0]; // 804DCCA0
  W16(c->r[3]+0x00000012u,c->r[5]); // 804DCCA4
  return; // 804DCCA8
L_804DCCAC:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DCCAC
  c->r[3]=c->r[3]+c->r[0]; // 804DCCB0
  W16(c->r[3]+0x00000014u,c->r[5]); // 804DCCB4
  return; // 804DCCB8
L_804DCCBC:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DCCBC
  c->r[3]=c->r[3]+c->r[0]; // 804DCCC0
  W16(c->r[3]+0x00000016u,c->r[5]); // 804DCCC4
  return; // 804DCCC8
L_804DCCCC:;
  c->r[0]=sraw(c,c->r[5],31); // 804DCCCC
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 804DCCD0
  c->r[7]=c->r[5]&~c->r[0]; // 804DCCD4
  c->r[5]=0u+0x000000FFu; // 804DCCD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 804DCCDC
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 804DCCE0
  cmps(c,0,(int32_t)c->r[0],255); // 804DCCE4
  if (crb(c,1)) { goto L_804DCCF0; } // 804DCCE8
  c->r[5]=c->r[7]|c->r[7]; // 804DCCEC
L_804DCCF0:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 804DCCF0
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 804DCCF4
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 804DCCF8
  cmps(c,0,(int32_t)c->r[0],2); // 804DCCFC
  if (crb(c,2)) { goto L_804DCD44; } // 804DCD00
  if (!crb(c,0)) { goto L_804DCD18; } // 804DCD04
  cmps(c,0,(int32_t)c->r[0],0); // 804DCD08
  if (crb(c,2)) { goto L_804DCD24; } // 804DCD0C
  if (!crb(c,0)) { goto L_804DCD34; } // 804DCD10
  return; // 804DCD14
L_804DCD18:;
  cmps(c,0,(int32_t)c->r[0],4); // 804DCD18
  if (!crb(c,0)) return; // 804DCD1C
  goto L_804DCD54; // 804DCD20
L_804DCD24:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DCD24
  c->r[3]=c->r[3]+c->r[0]; // 804DCD28
  W8(c->r[3]+0x00000028u,c->r[4]); // 804DCD2C
  return; // 804DCD30
L_804DCD34:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DCD34
  c->r[3]=c->r[3]+c->r[0]; // 804DCD38
  W8(c->r[3]+0x00000029u,c->r[4]); // 804DCD3C
  return; // 804DCD40
L_804DCD44:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DCD44
  c->r[3]=c->r[3]+c->r[0]; // 804DCD48
  W8(c->r[3]+0x0000002Au,c->r[4]); // 804DCD4C
  return; // 804DCD50
L_804DCD54:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 804DCD54
  c->r[3]=c->r[3]+c->r[0]; // 804DCD58
  W8(c->r[3]+0x0000002Bu,c->r[4]); // 804DCD5C
  return; // 804DCD60
}

// fn_804DCD64
void f_804DCD64(Ctx* __restrict c) {
  trace_call(0x804DCD64u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DCD64
  c->r[0]=c->lr; // 804DCD68
  W32(c->r[1]+0x00000124u,c->r[0]); // 804DCD6C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 804DCD70
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 804DCD74
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 804DCD78
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 804DCD7C
  c->r[11]=c->r[1]+0x00000100u; // 804DCD80
  c->lr=0x804DCD88u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DCD84
  c->r[27]=c->r[3]|c->r[3]; // 804DCD88
  c->r[31]=c->r[4]|c->r[4]; // 804DCD8C
  c->r[28]=c->r[5]|c->r[5]; // 804DCD90
  c->r[30]=0u+0x00000001u; // 804DCD94
  c->r[23]=0u+0x00000000u; // 804DCD98
  c->r[3]=0u+0x00000001u; // 804DCD9C
  c->lr=0x804DCDA4u; f_803A5E10(c); // 804DCDA0
  c->r[4]=R32(c->r[27]+0x00000038u); // 804DCDA4
  c->r[0]=rotl(c->r[4],24)&0x00000001u; cr0(c,c->r[0]); // 804DCDA8
  if (crb(c,2)) { goto L_804DCE54; } // 804DCDAC
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 804DCDB0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 804DCDB4
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DCDB8
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 804DCDBC
  c->r[7]=R32(c->r[27]+0x00000040u); // 804DCDC0
  c->r[3]=0u+0x00000000u; // 804DCDC4
  c->r[4]=0u+0x00000000u; // 804DCDC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DCDCC
  c->r[6]=c->r[6]+c->r[5]; // 804DCDD0
  c->r[5]=0u+0x00000000u; // 804DCDD4
  c->r[0]=c->r[7]+c->r[0]; // 804DCDD8
  c->r[7]=0u+0x00000000u; // 804DCDDC
  c->r[24]=c->r[6]+c->r[0]; // 804DCDE0
  c->r[6]=R8(c->r[6]+c->r[0]); // 804DCDE4
  c->r[8]=0u+0x00000000u; // 804DCDE8
  c->r[9]=0u+0x00000002u; // 804DCDEC
  c->lr=0x804DCDF4u; f_803A5E34(c); // 804DCDF0
  c->r[6]=R8(c->r[24]+0x00000001u); // 804DCDF4
  c->r[3]=0u+0x00000002u; // 804DCDF8
  c->r[4]=0u+0x00000000u; // 804DCDFC
  c->r[5]=0u+0x00000000u; // 804DCE00
  c->r[7]=0u+0x00000000u; // 804DCE04
  c->r[8]=0u+0x00000000u; // 804DCE08
  c->r[9]=0u+0x00000002u; // 804DCE0C
  c->lr=0x804DCE14u; f_803A5E34(c); // 804DCE10
  c->r[3]=R8(c->r[24]+0x00000000u); // 804DCE14
  c->r[30]=0u+0x00000001u; // 804DCE18
  cmps(c,0,(int32_t)c->r[3],1); // 804DCE1C
  if (crb(c,2)) { goto L_804DCE34; } // 804DCE20
  c->r[0]=R8(c->r[24]+0x00000001u); // 804DCE24
  cmps(c,0,(int32_t)c->r[0],1); // 804DCE28
  if (crb(c,2)) { goto L_804DCE34; } // 804DCE2C
  c->r[30]=0u+0x00000000u; // 804DCE30
L_804DCE34:;
  cmps(c,0,(int32_t)c->r[3],0); // 804DCE34
  c->r[23]=0u+0x00000000u; // 804DCE38
  if (crb(c,2)) { goto L_804DCE4C; } // 804DCE3C
  c->r[0]=R8(c->r[24]+0x00000001u); // 804DCE40
  cmps(c,0,(int32_t)c->r[0],0); // 804DCE44
  if (!crb(c,2)) { goto L_804DCE74; } // 804DCE48
L_804DCE4C:;
  c->r[23]=0u+0x00000001u; // 804DCE4C
  goto L_804DCE74; // 804DCE50
L_804DCE54:;
  c->r[3]=0u+0x00000004u; // 804DCE54
  c->r[4]=0u+0x00000000u; // 804DCE58
  c->r[5]=0u+0x00000000u; // 804DCE5C
  c->r[6]=0u+0x00000001u; // 804DCE60
  c->r[7]=0u+0x00000000u; // 804DCE64
  c->r[8]=0u+0x00000000u; // 804DCE68
  c->r[9]=0u+0x00000002u; // 804DCE6C
  c->lr=0x804DCE74u; f_803A5E34(c); // 804DCE70
L_804DCE74:;
  cmps(c,0,(int32_t)c->r[30],0); // 804DCE74
  c->r[29]=0u+0x00000000u; // 804DCE78
  if (crb(c,2)) { goto L_804DCE90; } // 804DCE7C
  cmps(c,0,(int32_t)c->r[31],0); // 804DCE80
  c->r[29]=0u+0x00000001u; // 804DCE84
  if (!crb(c,2)) { goto L_804DCE90; } // 804DCE88
  c->r[29]=0u+0x00000000u; // 804DCE8C
L_804DCE90:;
  cmps(c,0,(int32_t)c->r[23],0); // 804DCE90
  if (crb(c,2)) { goto L_804DCF6C; } // 804DCE94
  c->r[5]=R32(c->r[27]+0x00000038u); // 804DCE98
  c->r[0]=0u+0xFFFFFFFFu; // 804DCE9C
  W32(c->r[1]+0x00000030u,c->r[0]); // 804DCEA0
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 804DCEA4
  if (crb(c,2)) { goto L_804DCEF8; } // 804DCEA8
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 804DCEAC
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 804DCEB0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DCEB4
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 804DCEB8
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 804DCEBC
  c->r[7]=R32(c->r[27]+0x00000040u); // 804DCEC0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DCEC4
  c->r[0]=c->r[6]+c->r[5]; // 804DCEC8
  c->r[0]=c->r[7]+c->r[0]; // 804DCECC
  c->r[3]=c->r[4]+c->r[3]; // 804DCED0
  c->r[6]=c->r[3]+c->r[0]; // 804DCED4
  c->r[5]=R8(c->r[3]+c->r[0]); // 804DCED8
  c->r[4]=R8(c->r[6]+0x00000001u); // 804DCEDC
  c->r[3]=R8(c->r[6]+0x00000002u); // 804DCEE0
  c->r[0]=R8(c->r[6]+0x00000003u); // 804DCEE4
  W8(c->r[1]+0x00000030u,c->r[5]); // 804DCEE8
  W8(c->r[1]+0x00000031u,c->r[4]); // 804DCEEC
  W8(c->r[1]+0x00000032u,c->r[3]); // 804DCEF0
  W8(c->r[1]+0x00000033u,c->r[0]); // 804DCEF4
L_804DCEF8:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 804DCEF8
  c->r[5]=c->r[28]|c->r[28]; // 804DCEFC
  c->r[3]=c->r[1]+0x00000024u; // 804DCF00
  c->r[4]=c->r[1]+0x00000028u; // 804DCF04
  W32(c->r[1]+0x00000028u,c->r[0]); // 804DCF08
  c->lr=0x804DCF10u; f_804E00BC(c); // 804DCF0C
  c->r[7]=R8(c->r[1]+0x00000024u); // 804DCF10
  c->r[4]=c->r[1]+0x00000020u; // 804DCF14
  c->r[6]=R8(c->r[1]+0x00000025u); // 804DCF18
  c->r[3]=0u+0x00000004u; // 804DCF1C
  c->r[5]=R8(c->r[1]+0x00000026u); // 804DCF20
  c->r[0]=R8(c->r[1]+0x00000027u); // 804DCF24
  W8(c->r[1]+0x00000030u,c->r[7]); // 804DCF28
  W8(c->r[1]+0x00000031u,c->r[6]); // 804DCF2C
  W8(c->r[1]+0x00000032u,c->r[5]); // 804DCF30
  W8(c->r[1]+0x00000033u,c->r[0]); // 804DCF34
  W8(c->r[1]+0x00000020u,c->r[7]); // 804DCF38
  W8(c->r[1]+0x00000021u,c->r[6]); // 804DCF3C
  W8(c->r[1]+0x00000022u,c->r[5]); // 804DCF40
  W8(c->r[1]+0x00000023u,c->r[0]); // 804DCF44
  c->lr=0x804DCF4Cu; f_803A5D38(c); // 804DCF48
  cmps(c,0,(int32_t)c->r[29],0); // 804DCF4C
  c->r[29]=0u+0x00000000u; // 804DCF50
  if (!crb(c,2)) { goto L_804DCF68; } // 804DCF54
  c->r[3]=R32(c->r[1]+0x00000030u); // 804DCF58
  c->r[0]=c->r[3]+0x00010000u; // 804DCF5C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804DCF60
  if (crb(c,2)) { goto L_804DCF6C; } // 804DCF64
L_804DCF68:;
  c->r[29]=0u+0x00000001u; // 804DCF68
L_804DCF6C:;
  c->r[31]=0u+0x00000000u; // 804DCF6C
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 804DCF70
  W8(c->r[1]+0x0000005Du,c->r[31]); // 804DCF74
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 804DCF78
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 804DCF7C
  W8(c->r[1]+0x00000060u,c->r[31]); // 804DCF80
  W8(c->r[1]+0x00000061u,c->r[31]); // 804DCF84
  W8(c->r[1]+0x00000062u,c->r[31]); // 804DCF88
  W8(c->r[1]+0x00000063u,c->r[31]); // 804DCF8C
  W8(c->r[1]+0x00000064u,c->r[31]); // 804DCF90
  W8(c->r[1]+0x00000065u,c->r[31]); // 804DCF94
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DCF98
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 804DCF9C
  c->lr=0x804DCFA4u; f_803A3E7C(c); // 804DCFA0
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DCFA4
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 804DCFA8
  if (crb(c,2)) { goto L_804DD044; } // 804DCFAC
  c->r[0]=R32(c->r[27]+0x00000038u); // 804DCFB0
  c->r[3]=0u+0xAAAB0000u; // 804DCFB4
  c->r[5]=R32(c->r[27]+0x00000040u); // 804DCFB8
  c->r[25]=c->r[3]+0xFFFFAAABu; // 804DCFBC
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 804DCFC0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DCFC4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 804DCFC8
  c->r[26]=c->r[1]+0x0000005Cu; // 804DCFCC
  c->r[28]=0u+0x00000000u; // 804DCFD0
  c->r[24]=0u+0x00000001u; // 804DCFD4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DCFD8
  c->r[0]=c->r[5]+c->r[4]; // 804DCFDC
  c->r[23]=c->r[3]+c->r[0]; // 804DCFE0
  goto L_804DD034; // 804DCFE4
L_804DCFE8:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 804DCFE8
  c->r[6]=R8(c->r[23]+0x00000002u); // 804DCFEC
  cmps(c,0,(int32_t)c->r[0],1); // 804DCFF0
  if (!crb(c,2)) { goto L_804DD014; } // 804DCFF4
  cmpu(c,0,c->r[6],0x0000003Cu); // 804DCFF8
  if (crb(c,2)) { goto L_804DD014; } // 804DCFFC
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 804DD000
  c->r[31]=0u+0x00000001u; // 804DD004
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 804DD008
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804DD00C
  W8(c->r[26]+c->r[0],c->r[24]); // 804DD010
L_804DD014:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 804DD014
  c->r[3]=c->r[28]|c->r[28]; // 804DD018
  c->r[5]=R8(c->r[23]+0x00000001u); // 804DD01C
  c->r[7]=0u+0x00000000u; // 804DD020
  c->r[8]=0u+0x0000007Du; // 804DD024
  c->lr=0x804DD02Cu; f_803A3C54(c); // 804DD028
  c->r[23]=c->r[23]+0x00000004u; // 804DD02C
  c->r[28]=c->r[28]+0x00000001u; // 804DD030
L_804DD034:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD034
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 804DD038
  cmpu(c,0,c->r[28],c->r[0]); // 804DD03C
  if (crb(c,0)) { IRQCHK(c); goto L_804DCFE8; } // 804DD040
L_804DD044:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DD044
  if (crb(c,2)) { goto L_804DD0C0; } // 804DD048
  c->r[0]=R32(c->r[27]+0x00000038u); // 804DD04C
  c->r[26]=c->r[1]+0x0000005Cu; // 804DD050
  c->r[3]=R32(c->r[27]+0x00000040u); // 804DD054
  c->r[28]=0u+0x00000000u; // 804DD058
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DD05C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DD060
  c->r[23]=c->r[3]+c->r[0]; // 804DD064
  goto L_804DD0AC; // 804DD068
L_804DD06C:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 804DD06C
  c->r[0]=R8(c->r[26]+c->r[3]); // 804DD070
  cmps(c,0,(int32_t)c->r[0],0); // 804DD074
  if (crb(c,2)) { goto L_804DD0A8; } // 804DD078
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DD07C
  c->r[3]=c->r[1]+0x000000A0u; // 804DD080
  c->r[4]=c->r[23]+c->r[0]; // 804DD084
  c->lr=0x804DD08Cu; f_804DB07C(c); // 804DD088
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 804DD08C
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 804DD090
  c->r[4]=c->r[0]-c->r[3]; // 804DD094
  c->r[5]=0u+0x00000001u; // 804DD098
  c->r[3]=c->r[1]+0x000000A0u; // 804DD09C
  c->r[4]=c->r[4]+0x0000001Eu; // 804DD0A0
  c->lr=0x804DD0A8u; f_803A8668(c); // 804DD0A4
L_804DD0A8:;
  c->r[28]=c->r[28]+0x00000001u; // 804DD0A8
L_804DD0AC:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD0AC
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 804DD0B0
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 804DD0B4
  cmpu(c,0,c->r[3],c->r[0]); // 804DD0B8
  if (crb(c,0)) { IRQCHK(c); goto L_804DD06C; } // 804DD0BC
L_804DD0C0:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD0C0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DD0C4
  if (crb(c,2)) { goto L_804DD164; } // 804DD0C8
  c->r[24]=R32(c->r[27]+0x00000040u); // 804DD0CC
  c->r[23]=0u+0x00000000u; // 804DD0D0
  c->r[25]=0u+0x00000010u; // 804DD0D4
  c->r[26]=0u+0x00000000u; // 804DD0D8
  goto L_804DD154; // 804DD0DC
L_804DD0E0:;
  c->r[3]=c->r[24]|c->r[24]; // 804DD0E0
  c->r[4]=c->r[1]+0x00000080u; // 804DD0E4
  c->lr=0x804DD0ECu; f_804DDE04(c); // 804DD0E8
  c->r[0]=R32(c->r[24]+0x00000018u); // 804DD0EC
  c->r[3]=rotl(c->r[0],4)&0x0000000Fu; // 804DD0F0
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 804DD0F4
  cmpu(c,0,c->r[0],0x00000002u); // 804DD0F8
  if (crb(c,1)) { goto L_804DD140; } // 804DD0FC
  cmps(c,0,(int32_t)c->r[3],10); // 804DD100
  if (!crb(c,2)) { goto L_804DD114; } // 804DD104
  c->r[28]=c->r[25]|c->r[25]; // 804DD108
  c->r[25]=c->r[25]+0x00000001u; // 804DD10C
  goto L_804DD11C; // 804DD110
L_804DD114:;
  c->r[28]=c->r[23]|c->r[23]; // 804DD114
  c->r[23]=c->r[23]+0x00000001u; // 804DD118
L_804DD11C:;
  c->r[4]=c->r[28]|c->r[28]; // 804DD11C
  c->r[3]=c->r[1]+0x00000080u; // 804DD120
  c->lr=0x804DD128u; f_803A6428(c); // 804DD124
  c->r[3]=c->r[24]|c->r[24]; // 804DD128
  c->r[4]=c->r[1]+0x00000050u; // 804DD12C
  c->lr=0x804DD134u; f_804DDEF0(c); // 804DD130
  c->r[4]=c->r[28]|c->r[28]; // 804DD134
  c->r[3]=c->r[1]+0x00000050u; // 804DD138
  c->lr=0x804DD140u; f_803A6800(c); // 804DD13C
L_804DD140:;
  c->r[4]=c->r[26]|c->r[26]; // 804DD140
  c->r[3]=c->r[1]+0x00000080u; // 804DD144
  c->lr=0x804DD14Cu; f_803A6784(c); // 804DD148
  c->r[24]=c->r[24]+0x0000001Cu; // 804DD14C
  c->r[26]=c->r[26]+0x00000001u; // 804DD150
L_804DD154:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD154
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DD158
  cmpu(c,0,c->r[26],c->r[0]); // 804DD15C
  if (crb(c,0)) { IRQCHK(c); goto L_804DD0E0; } // 804DD160
L_804DD164:;
  c->r[5]=R16(c->r[27]+0x00000010u); // 804DD164
  c->r[4]=c->r[1]+0x00000048u; // 804DD168
  c->r[0]=R16(c->r[27]+0x00000012u); // 804DD16C
  c->r[3]=0u+0x00000001u; // 804DD170
  W16(c->r[1]+0x00000048u,c->r[5]); // 804DD174
  W16(c->r[1]+0x0000004Au,c->r[0]); // 804DD178
  c->r[5]=R16(c->r[27]+0x00000014u); // 804DD17C
  c->r[0]=R16(c->r[27]+0x00000016u); // 804DD180
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 804DD184
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 804DD188
  c->lr=0x804DD190u; f_803A7674(c); // 804DD18C
  c->r[5]=R16(c->r[27]+0x00000018u); // 804DD190
  c->r[4]=c->r[1]+0x00000040u; // 804DD194
  c->r[0]=R16(c->r[27]+0x0000001Au); // 804DD198
  c->r[3]=0u+0x00000002u; // 804DD19C
  W16(c->r[1]+0x00000040u,c->r[5]); // 804DD1A0
  W16(c->r[1]+0x00000042u,c->r[0]); // 804DD1A4
  c->r[5]=R16(c->r[27]+0x0000001Cu); // 804DD1A8
  c->r[0]=R16(c->r[27]+0x0000001Eu); // 804DD1AC
  W16(c->r[1]+0x00000044u,c->r[5]); // 804DD1B0
  W16(c->r[1]+0x00000046u,c->r[0]); // 804DD1B4
  c->lr=0x804DD1BCu; f_803A7674(c); // 804DD1B8
  c->r[5]=R16(c->r[27]+0x00000020u); // 804DD1BC
  c->r[4]=c->r[1]+0x00000038u; // 804DD1C0
  c->r[0]=R16(c->r[27]+0x00000022u); // 804DD1C4
  c->r[3]=0u+0x00000003u; // 804DD1C8
  W16(c->r[1]+0x00000038u,c->r[5]); // 804DD1CC
  W16(c->r[1]+0x0000003Au,c->r[0]); // 804DD1D0
  c->r[5]=R16(c->r[27]+0x00000024u); // 804DD1D4
  c->r[0]=R16(c->r[27]+0x00000026u); // 804DD1D8
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 804DD1DC
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 804DD1E0
  c->lr=0x804DD1E8u; f_803A7674(c); // 804DD1E4
  c->r[0]=R8(c->r[27]+0x00000028u); // 804DD1E8
  c->r[4]=c->r[1]+0x0000001Cu; // 804DD1EC
  c->r[3]=0u+0x00000000u; // 804DD1F0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 804DD1F4
  c->r[0]=R8(c->r[27]+0x00000029u); // 804DD1F8
  W8(c->r[1]+0x0000001Du,c->r[0]); // 804DD1FC
  c->r[0]=R8(c->r[27]+0x0000002Au); // 804DD200
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 804DD204
  c->r[0]=R8(c->r[27]+0x0000002Bu); // 804DD208
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 804DD20C
  c->lr=0x804DD214u; f_803A76D8(c); // 804DD210
  c->r[0]=R8(c->r[27]+0x0000002Cu); // 804DD214
  c->r[4]=c->r[1]+0x00000018u; // 804DD218
  c->r[3]=0u+0x00000001u; // 804DD21C
  W8(c->r[1]+0x00000018u,c->r[0]); // 804DD220
  c->r[0]=R8(c->r[27]+0x0000002Du); // 804DD224
  W8(c->r[1]+0x00000019u,c->r[0]); // 804DD228
  c->r[0]=R8(c->r[27]+0x0000002Eu); // 804DD22C
  W8(c->r[1]+0x0000001Au,c->r[0]); // 804DD230
  c->r[0]=R8(c->r[27]+0x0000002Fu); // 804DD234
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 804DD238
  c->lr=0x804DD240u; f_803A76D8(c); // 804DD23C
  c->r[0]=R8(c->r[27]+0x00000030u); // 804DD240
  c->r[4]=c->r[1]+0x00000014u; // 804DD244
  c->r[3]=0u+0x00000002u; // 804DD248
  W8(c->r[1]+0x00000014u,c->r[0]); // 804DD24C
  c->r[0]=R8(c->r[27]+0x00000031u); // 804DD250
  W8(c->r[1]+0x00000015u,c->r[0]); // 804DD254
  c->r[0]=R8(c->r[27]+0x00000032u); // 804DD258
  W8(c->r[1]+0x00000016u,c->r[0]); // 804DD25C
  c->r[0]=R8(c->r[27]+0x00000033u); // 804DD260
  W8(c->r[1]+0x00000017u,c->r[0]); // 804DD264
  c->lr=0x804DD26Cu; f_803A76D8(c); // 804DD268
  c->r[0]=R8(c->r[27]+0x00000034u); // 804DD26C
  c->r[4]=c->r[1]+0x00000010u; // 804DD270
  c->r[3]=0u+0x00000003u; // 804DD274
  W8(c->r[1]+0x00000010u,c->r[0]); // 804DD278
  c->r[0]=R8(c->r[27]+0x00000035u); // 804DD27C
  W8(c->r[1]+0x00000011u,c->r[0]); // 804DD280
  c->r[0]=R8(c->r[27]+0x00000036u); // 804DD284
  W8(c->r[1]+0x00000012u,c->r[0]); // 804DD288
  c->r[0]=R8(c->r[27]+0x00000037u); // 804DD28C
  W8(c->r[1]+0x00000013u,c->r[0]); // 804DD290
  c->lr=0x804DD298u; f_803A76D8(c); // 804DD294
  c->r[6]=R32(c->r[27]+0x00000038u); // 804DD298
  c->r[0]=rotl(c->r[6],18)&0x00000001u; cr0(c,c->r[0]); // 804DD29C
  if (crb(c,2)) { goto L_804DD30C; } // 804DD2A0
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 804DD2A4
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 804DD2A8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DD2AC
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 804DD2B0
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 804DD2B4
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 804DD2B8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DD2BC
  c->r[5]=c->r[7]+c->r[5]; // 804DD2C0
  c->r[7]=R32(c->r[27]+0x00000040u); // 804DD2C4
  c->r[23]=0u+0x00000000u; // 804DD2C8
  c->r[0]=c->r[6]+c->r[5]; // 804DD2CC
  c->r[3]=c->r[4]+c->r[3]; // 804DD2D0
  c->r[0]=c->r[7]+c->r[0]; // 804DD2D4
  c->r[28]=c->r[3]+c->r[0]; // 804DD2D8
L_804DD2DC:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 804DD2DC
  c->r[3]=c->r[23]|c->r[23]; // 804DD2E0
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 804DD2E4
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 804DD2E8
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 804DD2EC
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 804DD2F0
  c->lr=0x804DD2F8u; f_803A7810(c); // 804DD2F4
  c->r[23]=c->r[23]+0x00000001u; // 804DD2F8
  c->r[28]=c->r[28]+0x00000001u; // 804DD2FC
  cmps(c,0,(int32_t)c->r[23],4); // 804DD300
  if (crb(c,0)) { IRQCHK(c); goto L_804DD2DC; } // 804DD304
  goto L_804DD36C; // 804DD308
L_804DD30C:;
  c->r[3]=0u+0x00000000u; // 804DD30C
  c->r[4]=0u+0x00000000u; // 804DD310
  c->r[5]=0u+0x00000001u; // 804DD314
  c->r[6]=0u+0x00000002u; // 804DD318
  c->r[7]=0u+0x00000003u; // 804DD31C
  c->lr=0x804DD324u; f_803A7810(c); // 804DD320
  c->r[3]=0u+0x00000001u; // 804DD324
  c->r[4]=0u+0x00000000u; // 804DD328
  c->r[5]=0u+0x00000000u; // 804DD32C
  c->r[6]=0u+0x00000000u; // 804DD330
  c->r[7]=0u+0x00000003u; // 804DD334
  c->lr=0x804DD33Cu; f_803A7810(c); // 804DD338
  c->r[3]=0u+0x00000002u; // 804DD33C
  c->r[4]=0u+0x00000001u; // 804DD340
  c->r[5]=0u+0x00000001u; // 804DD344
  c->r[6]=0u+0x00000001u; // 804DD348
  c->r[7]=0u+0x00000003u; // 804DD34C
  c->lr=0x804DD354u; f_803A7810(c); // 804DD350
  c->r[3]=0u+0x00000003u; // 804DD354
  c->r[4]=0u+0x00000002u; // 804DD358
  c->r[5]=0u+0x00000002u; // 804DD35C
  c->r[6]=0u+0x00000002u; // 804DD360
  c->r[7]=0u+0x00000003u; // 804DD364
  c->lr=0x804DD36Cu; f_803A7810(c); // 804DD368
L_804DD36C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD36C
  c->r[28]=0u+0x00000000u; // 804DD370
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 804DD374
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 804DD378
  W8(c->r[1]+0x0000002Du,c->r[28]); // 804DD37C
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 804DD380
  if (crb(c,2)) { goto L_804DD554; } // 804DD384
  c->lr=0x804DD38Cu; f_803A7AAC(c); // 804DD388
  c->r[7]=R32(c->r[27]+0x00000038u); // 804DD38C
  c->r[26]=c->r[1]+0x0000002Cu; // 804DD390
  c->r[8]=R32(c->r[27]+0x00000040u); // 804DD394
  c->r[29]=0u+0x00000000u; // 804DD398
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 804DD39C
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 804DD3A0
  c->r[3]=c->r[3]+c->r[0]; // 804DD3A4
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 804DD3A8
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DD3AC
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 804DD3B0
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 804DD3B4
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 804DD3B8
  c->r[0]=c->r[4]+c->r[0]; // 804DD3BC
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 804DD3C0
  c->r[0]=c->r[3]+c->r[0]; // 804DD3C4
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 804DD3C8
  c->r[0]=c->r[4]+c->r[0]; // 804DD3CC
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 804DD3D0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 804DD3D4
  c->r[31]=0u+0x00000001u; // 804DD3D8
  c->r[0]=c->r[3]+c->r[0]; // 804DD3DC
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 804DD3E0
  c->r[5]=c->r[6]+c->r[5]; // 804DD3E4
  c->r[0]=c->r[5]+c->r[0]; // 804DD3E8
  c->r[3]=c->r[4]+c->r[3]; // 804DD3EC
  c->r[0]=c->r[8]+c->r[0]; // 804DD3F0
  c->r[25]=c->r[3]+c->r[0]; // 804DD3F4
  goto L_804DD53C; // 804DD3F8
L_804DD3FC:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 804DD3FC
  c->r[3]=c->r[29]|c->r[29]; // 804DD400
  c->r[5]=R8(c->r[25]+0x00000002u); // 804DD404
  c->r[4]=R8(c->r[25]+0x00000000u); // 804DD408
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 804DD40C
  c->r[6]=R8(c->r[25]+0x00000001u); // 804DD410
  c->lr=0x804DD418u; f_803A7950(c); // 804DD414
  c->r[0]=R8(c->r[25]+0x00000003u); // 804DD418
  c->r[3]=c->r[29]|c->r[29]; // 804DD41C
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 804DD420
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 804DD424
  c->lr=0x804DD42Cu; f_803A77D4(c); // 804DD428
  c->r[0]=R8(c->r[25]+0x00000005u); // 804DD42C
  c->r[3]=c->r[29]|c->r[29]; // 804DD430
  c->r[5]=R8(c->r[25]+0x00000004u); // 804DD434
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 804DD438
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 804DD43C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 804DD440
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 804DD444
  c->lr=0x804DD44Cu; f_803A74E4(c); // 804DD448
  c->r[6]=R8(c->r[25]+0x00000006u); // 804DD44C
  c->r[3]=c->r[29]|c->r[29]; // 804DD450
  c->r[0]=R8(c->r[25]+0x00000007u); // 804DD454
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 804DD458
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 804DD45C
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 804DD460
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 804DD464
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 804DD468
  c->lr=0x804DD470u; f_803A7564(c); // 804DD46C
  c->r[0]=R8(c->r[25]+0x00000007u); // 804DD470
  c->r[3]=c->r[29]|c->r[29]; // 804DD474
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 804DD478
  c->lr=0x804DD480u; f_803A7734(c); // 804DD47C
  c->r[0]=R8(c->r[25]+0x00000009u); // 804DD480
  c->r[3]=c->r[29]|c->r[29]; // 804DD484
  c->r[5]=R8(c->r[25]+0x00000008u); // 804DD488
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 804DD48C
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 804DD490
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 804DD494
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 804DD498
  c->lr=0x804DD4A0u; f_803A7524(c); // 804DD49C
  c->r[6]=R8(c->r[25]+0x0000000Au); // 804DD4A0
  c->r[3]=c->r[29]|c->r[29]; // 804DD4A4
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 804DD4A8
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 804DD4AC
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 804DD4B0
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 804DD4B4
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 804DD4B8
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 804DD4BC
  c->lr=0x804DD4C4u; f_803A75BC(c); // 804DD4C0
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 804DD4C4
  c->r[3]=c->r[29]|c->r[29]; // 804DD4C8
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 804DD4CC
  c->lr=0x804DD4D4u; f_803A7784(c); // 804DD4D0
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 804DD4D4
  c->r[3]=c->r[29]|c->r[29]; // 804DD4D8
  c->r[6]=R8(c->r[25]+0x0000000Du); // 804DD4DC
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 804DD4E0
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 804DD4E4
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 804DD4E8
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 804DD4EC
  W32(c->r[1]+0x00000008u,c->r[4]); // 804DD4F0
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 804DD4F4
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 804DD4F8
  c->r[7]=c->r[24]|c->r[24]; // 804DD4FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804DD500
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 804DD504
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 804DD508
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 804DD50C
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 804DD510
  c->lr=0x804DD518u; f_803A7004(c); // 804DD514
  cmps(c,0,(int32_t)c->r[24],1); // 804DD518
  if (crb(c,0)) { goto L_804DD534; } // 804DD51C
  cmps(c,0,(int32_t)c->r[24],3); // 804DD520
  if (crb(c,1)) { goto L_804DD534; } // 804DD524
  c->r[3]=c->r[26]+c->r[24]; // 804DD528
  c->r[28]=0u+0x00000001u; // 804DD52C
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 804DD530
L_804DD534:;
  c->r[25]=c->r[25]+0x00000010u; // 804DD534
  c->r[29]=c->r[29]+0x00000001u; // 804DD538
L_804DD53C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD53C
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 804DD540
  cmpu(c,0,c->r[29],c->r[0]); // 804DD544
  if (crb(c,0)) { IRQCHK(c); goto L_804DD3FC; } // 804DD548
  c->r[29]=0u+0x00000001u; // 804DD54C
  goto L_804DD91C; // 804DD550
L_804DD554:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 804DD554
  c->r[31]=0u+0x00000000u; // 804DD558
  if (!crb(c,2)) { goto L_804DD5B0; } // 804DD55C
  c->r[3]=0u+0x00000000u; // 804DD560
  c->r[4]=0u+0x000000FFu; // 804DD564
  c->r[5]=0u+0x000000FFu; // 804DD568
  c->r[6]=0u+0x00000004u; // 804DD56C
  c->lr=0x804DD574u; f_803A7950(c); // 804DD570
  c->r[3]=0u+0x00000000u; // 804DD574
  c->r[4]=0u+0x0000000Fu; // 804DD578
  c->r[5]=0u+0x00000004u; // 804DD57C
  c->r[6]=0u+0x0000000Au; // 804DD580
  c->r[7]=0u+0x0000000Fu; // 804DD584
  c->lr=0x804DD58Cu; f_803A74E4(c); // 804DD588
  c->r[3]=0u+0x00000000u; // 804DD58C
  c->r[4]=0u+0x00000007u; // 804DD590
  c->r[5]=0u+0x00000002u; // 804DD594
  c->r[6]=0u+0x00000005u; // 804DD598
  c->r[7]=0u+0x00000007u; // 804DD59C
  c->lr=0x804DD5A4u; f_803A7524(c); // 804DD5A0
  c->r[29]=0u+0x00000001u; // 804DD5A4
  c->r[31]=0u+0x00000001u; // 804DD5A8
  goto L_804DD8A4; // 804DD5AC
L_804DD5B0:;
  cmpu(c,0,c->r[0],0x00000001u); // 804DD5B0
  if (!crb(c,2)) { goto L_804DD604; } // 804DD5B4
  c->r[3]=0u+0x00000000u; // 804DD5B8
  c->r[4]=0u+0x00000000u; // 804DD5BC
  c->r[5]=0u+0x00000000u; // 804DD5C0
  c->r[6]=0u+0x000000FFu; // 804DD5C4
  c->lr=0x804DD5CCu; f_803A7950(c); // 804DD5C8
  c->r[3]=0u+0x00000000u; // 804DD5CC
  c->r[4]=0u+0x00000002u; // 804DD5D0
  c->r[5]=0u+0x00000004u; // 804DD5D4
  c->r[6]=0u+0x00000008u; // 804DD5D8
  c->r[7]=0u+0x0000000Fu; // 804DD5DC
  c->lr=0x804DD5E4u; f_803A74E4(c); // 804DD5E0
  c->r[3]=0u+0x00000000u; // 804DD5E4
  c->r[4]=0u+0x00000001u; // 804DD5E8
  c->r[5]=0u+0x00000002u; // 804DD5EC
  c->r[6]=0u+0x00000004u; // 804DD5F0
  c->r[7]=0u+0x00000007u; // 804DD5F4
  c->lr=0x804DD5FCu; f_803A7524(c); // 804DD5F8
  c->r[31]=0u+0x00000001u; // 804DD5FC
  goto L_804DD850; // 804DD600
L_804DD604:;
  cmpu(c,0,c->r[0],0x00000002u); // 804DD604
  if (!crb(c,2)) { goto L_804DD6BC; } // 804DD608
  c->r[3]=0u+0x00000000u; // 804DD60C
  c->r[4]=0u+0x00000000u; // 804DD610
  c->r[5]=0u+0x00000000u; // 804DD614
  c->r[6]=0u+0x000000FFu; // 804DD618
  c->lr=0x804DD620u; f_803A7950(c); // 804DD61C
  c->r[3]=0u+0x00000000u; // 804DD620
  c->r[4]=0u+0x0000000Fu; // 804DD624
  c->r[5]=0u+0x0000000Fu; // 804DD628
  c->r[6]=0u+0x0000000Fu; // 804DD62C
  c->r[7]=0u+0x00000008u; // 804DD630
  c->lr=0x804DD638u; f_803A74E4(c); // 804DD634
  c->r[3]=0u+0x00000000u; // 804DD638
  c->r[4]=0u+0x00000007u; // 804DD63C
  c->r[5]=0u+0x00000007u; // 804DD640
  c->r[6]=0u+0x00000007u; // 804DD644
  c->r[7]=0u+0x00000004u; // 804DD648
  c->lr=0x804DD650u; f_803A7524(c); // 804DD64C
  c->r[3]=0u+0x00000001u; // 804DD650
  c->r[4]=0u+0x00000001u; // 804DD654
  c->r[5]=0u+0x00000001u; // 804DD658
  c->r[6]=0u+0x000000FFu; // 804DD65C
  c->lr=0x804DD664u; f_803A7950(c); // 804DD660
  c->r[3]=0u+0x00000001u; // 804DD664
  c->r[4]=0u+0x00000008u; // 804DD668
  c->r[5]=0u+0x00000000u; // 804DD66C
  c->r[6]=0u+0x0000000Eu; // 804DD670
  c->r[7]=0u+0x0000000Fu; // 804DD674
  c->lr=0x804DD67Cu; f_803A74E4(c); // 804DD678
  c->r[3]=0u+0x00000001u; // 804DD67C
  c->r[4]=0u+0x00000004u; // 804DD680
  c->r[5]=0u+0x00000000u; // 804DD684
  c->r[6]=0u+0x00000006u; // 804DD688
  c->r[7]=0u+0x00000007u; // 804DD68C
  c->lr=0x804DD694u; f_803A7524(c); // 804DD690
  c->r[4]=0u+0x80720000u; // 804DD694
  c->r[3]=0u+0x00000001u; // 804DD698
  c->r[4]=R32(c->r[4]+0xFFFFA980u); // 804DD69C
  c->lr=0x804DD6A4u; f_803A7734(c); // 804DD6A0
  c->r[4]=0u+0x80720000u; // 804DD6A4
  c->r[3]=0u+0x00000001u; // 804DD6A8
  c->r[4]=R32(c->r[4]+0xFFFFA9A0u); // 804DD6AC
  c->lr=0x804DD6B4u; f_803A7784(c); // 804DD6B0
  c->r[31]=0u+0x00000002u; // 804DD6B4
  goto L_804DD770; // 804DD6B8
L_804DD6BC:;
  c->r[24]=0u+0x80720000u; // 804DD6BC
  c->r[25]=0u+0x80720000u; // 804DD6C0
  c->r[24]=c->r[24]+0xFFFFA980u; // 804DD6C4
  c->r[23]=0u+0x00000000u; // 804DD6C8
  c->r[25]=c->r[25]+0xFFFFA9A0u; // 804DD6CC
  goto L_804DD760; // 804DD6D0
L_804DD6D4:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 804DD6D4
  c->r[4]=c->r[23]|c->r[23]; // 804DD6D8
  c->r[3]=c->r[22]|c->r[22]; // 804DD6DC
  c->r[5]=c->r[23]|c->r[23]; // 804DD6E0
  c->r[6]=0u+0x000000FFu; // 804DD6E4
  c->lr=0x804DD6ECu; f_803A7950(c); // 804DD6E8
  cmps(c,0,(int32_t)c->r[23],0); // 804DD6EC
  c->r[7]=0u+0x00000000u; // 804DD6F0
  if (!crb(c,2)) { goto L_804DD6FC; } // 804DD6F4
  c->r[7]=0u+0x0000000Fu; // 804DD6F8
L_804DD6FC:;
  cmps(c,0,(int32_t)c->r[23],0); // 804DD6FC
  c->r[26]=0u+0x00000000u; // 804DD700
  if (!crb(c,2)) { goto L_804DD70C; } // 804DD704
  c->r[26]=0u+0x00000007u; // 804DD708
L_804DD70C:;
  c->r[3]=c->r[22]|c->r[22]; // 804DD70C
  c->r[4]=0u+0x0000000Fu; // 804DD710
  c->r[5]=0u+0x00000008u; // 804DD714
  c->r[6]=0u+0x0000000Eu; // 804DD718
  c->lr=0x804DD720u; f_803A74E4(c); // 804DD71C
  c->r[3]=c->r[22]|c->r[22]; // 804DD720
  c->r[7]=c->r[26]|c->r[26]; // 804DD724
  c->r[4]=0u+0x00000007u; // 804DD728
  c->r[5]=0u+0x00000004u; // 804DD72C
  c->r[6]=0u+0x00000006u; // 804DD730
  c->lr=0x804DD738u; f_803A7524(c); // 804DD734
  c->r[4]=R32(c->r[24]+0x00000000u); // 804DD738
  c->r[3]=c->r[22]|c->r[22]; // 804DD73C
  c->lr=0x804DD744u; f_803A7734(c); // 804DD740
  c->r[4]=R32(c->r[25]+0x00000000u); // 804DD744
  c->r[3]=c->r[22]|c->r[22]; // 804DD748
  c->lr=0x804DD750u; f_803A7784(c); // 804DD74C
  c->r[31]=c->r[31]+0x00000001u; // 804DD750
  c->r[24]=c->r[24]+0x00000004u; // 804DD754
  c->r[25]=c->r[25]+0x00000004u; // 804DD758
  c->r[23]=c->r[23]+0x00000001u; // 804DD75C
L_804DD760:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DD760
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DD764
  cmpu(c,0,c->r[23],c->r[0]); // 804DD768
  if (crb(c,0)) { IRQCHK(c); goto L_804DD6D4; } // 804DD76C
L_804DD770:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000010u); // 804DD770
  c->r[5]=0u+0x00000000u; // 804DD774
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0x00003350u); // 804DD778
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DD77C
  if (!crb(c,2)) { goto L_804DD7BC; } // 804DD780
  c->r[4]=c->r[2]+0x00003350u; // 804DD784
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000012u); // 804DD788
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 804DD78C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DD790
  if (!crb(c,2)) { goto L_804DD7BC; } // 804DD794
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000014u); // 804DD798
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 804DD79C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DD7A0
  if (!crb(c,2)) { goto L_804DD7BC; } // 804DD7A4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000016u); // 804DD7A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 804DD7AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DD7B0
  if (!crb(c,2)) { goto L_804DD7BC; } // 804DD7B4
  c->r[5]=0u+0x00000001u; // 804DD7B8
L_804DD7BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804DD7BC
  if (crb(c,2)) { goto L_804DD804; } // 804DD7C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000018u); // 804DD7C4
  c->r[3]=0u+0x00000000u; // 804DD7C8
  cmps(c,0,(int32_t)c->r[0],255); // 804DD7CC
  if (!crb(c,2)) { goto L_804DD7FC; } // 804DD7D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Au); // 804DD7D4
  cmps(c,0,(int32_t)c->r[0],255); // 804DD7D8
  if (!crb(c,2)) { goto L_804DD7FC; } // 804DD7DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Cu); // 804DD7E0
  cmps(c,0,(int32_t)c->r[0],255); // 804DD7E4
  if (!crb(c,2)) { goto L_804DD7FC; } // 804DD7E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Eu); // 804DD7EC
  cmps(c,0,(int32_t)c->r[0],255); // 804DD7F0
  if (!crb(c,2)) { goto L_804DD7FC; } // 804DD7F4
  c->r[3]=0u+0x00000001u; // 804DD7F8
L_804DD7FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 804DD7FC
  if (!crb(c,2)) { goto L_804DD850; } // 804DD800
L_804DD804:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 804DD804
  c->r[4]=0u+0x000000FFu; // 804DD808
  c->r[3]=c->r[22]|c->r[22]; // 804DD80C
  c->r[5]=0u+0x000000FFu; // 804DD810
  c->r[6]=0u+0x000000FFu; // 804DD814
  c->lr=0x804DD81Cu; f_803A7950(c); // 804DD818
  c->r[3]=c->r[22]|c->r[22]; // 804DD81C
  c->r[4]=0u+0x00000002u; // 804DD820
  c->r[5]=0u+0x00000004u; // 804DD824
  c->r[6]=0u+0x00000000u; // 804DD828
  c->r[7]=0u+0x0000000Fu; // 804DD82C
  c->lr=0x804DD834u; f_803A74E4(c); // 804DD830
  c->r[3]=c->r[22]|c->r[22]; // 804DD834
  c->r[4]=0u+0x00000001u; // 804DD838
  c->r[5]=0u+0x00000002u; // 804DD83C
  c->r[6]=0u+0x00000000u; // 804DD840
  c->r[7]=0u+0x00000007u; // 804DD844
  c->lr=0x804DD84Cu; f_803A7524(c); // 804DD848
  c->r[31]=c->r[31]+0x00000001u; // 804DD84C
L_804DD850:;
  cmps(c,0,(int32_t)c->r[29],0); // 804DD850
  if (crb(c,2)) { goto L_804DD8A4; } // 804DD854
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 804DD858
  c->r[4]=0u+0x000000FFu; // 804DD85C
  c->r[3]=c->r[22]|c->r[22]; // 804DD860
  c->r[5]=0u+0x000000FFu; // 804DD864
  c->r[6]=0u+0x00000004u; // 804DD868
  c->lr=0x804DD870u; f_803A7950(c); // 804DD86C
  c->r[3]=c->r[22]|c->r[22]; // 804DD870
  c->r[4]=0u+0x0000000Fu; // 804DD874
  c->r[5]=0u+0x00000000u; // 804DD878
  c->r[6]=0u+0x0000000Au; // 804DD87C
  c->r[7]=0u+0x0000000Fu; // 804DD880
  c->lr=0x804DD888u; f_803A74E4(c); // 804DD884
  c->r[3]=c->r[22]|c->r[22]; // 804DD888
  c->r[4]=0u+0x00000007u; // 804DD88C
  c->r[5]=0u+0x00000000u; // 804DD890
  c->r[6]=0u+0x00000005u; // 804DD894
  c->r[7]=0u+0x00000007u; // 804DD898
  c->lr=0x804DD8A0u; f_803A7524(c); // 804DD89C
  c->r[31]=c->r[31]+0x00000001u; // 804DD8A0
L_804DD8A4:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 804DD8A4
  c->r[23]=0u+0x00000000u; // 804DD8A8
  goto L_804DD908; // 804DD8AC
L_804DD8B0:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 804DD8B0
  c->r[4]=0u+0x00000000u; // 804DD8B4
  c->r[3]=c->r[24]|c->r[24]; // 804DD8B8
  c->r[5]=0u+0x00000000u; // 804DD8BC
  c->r[6]=0u+0x00000000u; // 804DD8C0
  c->r[7]=0u+0x00000001u; // 804DD8C4
  c->r[8]=0u+0x00000000u; // 804DD8C8
  c->lr=0x804DD8D0u; f_803A7564(c); // 804DD8CC
  c->r[3]=c->r[24]|c->r[24]; // 804DD8D0
  c->r[4]=0u+0x00000000u; // 804DD8D4
  c->r[5]=0u+0x00000000u; // 804DD8D8
  c->r[6]=0u+0x00000000u; // 804DD8DC
  c->r[7]=0u+0x00000001u; // 804DD8E0
  c->r[8]=0u+0x00000000u; // 804DD8E4
  c->lr=0x804DD8ECu; f_803A75BC(c); // 804DD8E8
  c->r[3]=c->r[24]|c->r[24]; // 804DD8EC
  c->lr=0x804DD8F4u; f_803A73B0(c); // 804DD8F0
  c->r[3]=c->r[24]|c->r[24]; // 804DD8F4
  c->r[4]=0u+0x00000000u; // 804DD8F8
  c->r[5]=0u+0x00000000u; // 804DD8FC
  c->lr=0x804DD904u; f_803A77D4(c); // 804DD900
  c->r[23]=c->r[23]+0x00000001u; // 804DD904
L_804DD908:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 804DD908
  cmpu(c,0,c->r[0],c->r[22]); // 804DD90C
  if (crb(c,0)) { IRQCHK(c); goto L_804DD8B0; } // 804DD910
  c->r[3]=c->r[22]|c->r[22]; // 804DD914
  c->lr=0x804DD91Cu; f_803A7AAC(c); // 804DD918
L_804DD91C:;
  cmps(c,0,(int32_t)c->r[28],0); // 804DD91C
  if (crb(c,2)) { goto L_804DDA20; } // 804DD920
  c->r[8]=R32(c->r[27]+0x00000038u); // 804DD924
  c->r[31]=c->r[1]+0x0000002Cu; // 804DD928
  c->r[10]=R32(c->r[27]+0x00000040u); // 804DD92C
  c->r[28]=0u+0x00000000u; // 804DD930
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 804DD934
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 804DD938
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 804DD93C
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 804DD940
  c->r[4]=c->r[5]+c->r[4]; // 804DD944
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 804DD948
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DD94C
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 804DD950
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 804DD954
  {uint32_t ea=c->r[2]+0x000017C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 804DD958
  c->r[9]=rotl(c->r[8],19)&0x0000001Cu; // 804DD95C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DD960
  c->r[8]=rotl(c->r[8],29)&0x00000004u; // 804DD964
  c->r[5]=c->r[6]+c->r[5]; // 804DD968
  c->r[4]=c->r[7]+c->r[4]; // 804DD96C
  c->r[3]=c->r[3]+c->r[0]; // 804DD970
  c->r[0]=c->r[9]+c->r[8]; // 804DD974
  c->r[4]=c->r[5]+c->r[4]; // 804DD978
  c->r[3]=c->r[4]+c->r[3]; // 804DD97C
  c->r[0]=c->r[10]+c->r[0]; // 804DD980
  c->r[24]=c->r[3]+c->r[0]; // 804DD984
  goto L_804DDA10; // 804DD988
L_804DD98C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 804DD98C
  cmps(c,0,(int32_t)c->r[0],0); // 804DD990
  if (crb(c,2)) { goto L_804DDA04; } // 804DD994
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD998
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 804DD99C
  c->lr=0x804DD9A4u; f_804E1164(c); // 804DD9A0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9A4
  c->f[31]=c->f[1]; // 804DD9A8
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 804DD9AC
  c->lr=0x804DD9B4u; f_804E10FC(c); // 804DD9B0
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9B4
  c->f[2]=-c->f[1]; // 804DD9B8
  c->r[3]=c->r[28]+0x00000001u; // 804DD9BC
  c->r[4]=c->r[1]+0x00000068u; // 804DD9C0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 804DD9C4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 804DD9C8
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9CC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 804DD9D0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 804DD9D4
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9D8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 804DD9DC
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9E0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804DD9E4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 804DD9E8
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9EC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 804DD9F0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 804DD9F4
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DD9F8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 804DD9FC
  c->lr=0x804DDA04u; f_804DB184(c); // 804DDA00
L_804DDA04:;
  c->r[31]=c->r[31]+0x00000001u; // 804DDA04
  c->r[24]=c->r[24]+0x00000014u; // 804DDA08
  c->r[28]=c->r[28]+0x00000001u; // 804DDA0C
L_804DDA10:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DDA10
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 804DDA14
  cmpu(c,0,c->r[28],c->r[0]); // 804DDA18
  if (crb(c,0)) { IRQCHK(c); goto L_804DD98C; } // 804DDA1C
L_804DDA20:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DDA20
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 804DDA24
  c->lr=0x804DDA2Cu; f_803A7390(c); // 804DDA28
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DDA2C
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 804DDA30
  if (crb(c,2)) { goto L_804DDAC8; } // 804DDA34
  c->r[8]=R32(c->r[27]+0x00000038u); // 804DDA38
  c->r[28]=0u+0x00000000u; // 804DDA3C
  c->r[9]=R32(c->r[27]+0x00000040u); // 804DDA40
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 804DDA44
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 804DDA48
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 804DDA4C
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 804DDA50
  c->r[4]=c->r[5]+c->r[4]; // 804DDA54
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 804DDA58
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DDA5C
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 804DDA60
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 804DDA64
  c->r[4]=c->r[7]+c->r[4]; // 804DDA68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DDA6C
  c->r[5]=c->r[6]+c->r[5]; // 804DDA70
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 804DDA74
  c->r[0]=c->r[3]+c->r[0]; // 804DDA78
  c->r[3]=c->r[5]+c->r[4]; // 804DDA7C
  c->r[3]=c->r[6]+c->r[3]; // 804DDA80
  c->r[0]=c->r[9]+c->r[0]; // 804DDA84
  c->r[24]=c->r[3]+c->r[0]; // 804DDA88
  goto L_804DDAB8; // 804DDA8C
L_804DDA90:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 804DDA90
  c->r[3]=c->r[28]|c->r[28]; // 804DDA94
  c->r[5]=R8(c->r[24]+0x00000001u); // 804DDA98
  c->lr=0x804DDAA0u; f_803A72C4(c); // 804DDA9C
  c->r[4]=R8(c->r[24]+0x00000002u); // 804DDAA0
  c->r[3]=c->r[28]|c->r[28]; // 804DDAA4
  c->r[5]=R8(c->r[24]+0x00000003u); // 804DDAA8
  c->lr=0x804DDAB0u; f_803A71C0(c); // 804DDAAC
  c->r[24]=c->r[24]+0x00000004u; // 804DDAB0
  c->r[28]=c->r[28]+0x00000001u; // 804DDAB4
L_804DDAB8:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 804DDAB8
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 804DDABC
  cmpu(c,0,c->r[28],c->r[0]); // 804DDAC0
  if (crb(c,0)) { IRQCHK(c); goto L_804DDA90; } // 804DDAC4
L_804DDAC8:;
  c->r[4]=R32(c->r[27]+0x00000038u); // 804DDAC8
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 804DDACC
  if (crb(c,2)) { goto L_804DDB30; } // 804DDAD0
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 804DDAD4
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 804DDAD8
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 804DDADC
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 804DDAE0
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 804DDAE4
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 804DDAE8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DDAEC
  c->r[5]=c->r[8]+c->r[5]; // 804DDAF0
  c->r[6]=c->r[7]+c->r[6]; // 804DDAF4
  c->r[7]=R32(c->r[27]+0x00000040u); // 804DDAF8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DDAFC
  c->r[0]=c->r[6]+c->r[5]; // 804DDB00
  c->r[0]=c->r[7]+c->r[0]; // 804DDB04
  c->r[3]=c->r[4]+c->r[3]; // 804DDB08
  c->r[6]=c->r[3]+c->r[0]; // 804DDB0C
  c->r[0]=R8(c->r[3]+c->r[0]); // 804DDB10
  c->r[4]=R8(c->r[6]+0x00000002u); // 804DDB14
  c->r[5]=R8(c->r[6]+0x00000001u); // 804DDB18
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 804DDB1C
  c->r[7]=R8(c->r[6]+0x00000003u); // 804DDB20
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 804DDB24
  c->lr=0x804DDB2Cu; f_803A788C(c); // 804DDB28
  goto L_804DDB48; // 804DDB2C
L_804DDB30:;
  c->r[3]=0u+0x00000007u; // 804DDB30
  c->r[4]=0u+0x00000000u; // 804DDB34
  c->r[5]=0u+0x00000000u; // 804DDB38
  c->r[6]=0u+0x00000007u; // 804DDB3C
  c->r[7]=0u+0x00000000u; // 804DDB40
  c->lr=0x804DDB48u; f_803A788C(c); // 804DDB44
L_804DDB48:;
  c->r[6]=R32(c->r[27]+0x00000038u); // 804DDB48
  c->r[0]=rotl(c->r[6],27)&0x00000001u; cr0(c,c->r[0]); // 804DDB4C
  if (crb(c,2)) { goto L_804DDBB0; } // 804DDB50
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 804DDB54
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 804DDB58
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 804DDB5C
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 804DDB60
  c->r[5]=c->r[5]+c->r[4]; // 804DDB64
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 804DDB68
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 804DDB6C
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 804DDB70
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 804DDB74
  c->r[9]=R32(c->r[27]+0x00000040u); // 804DDB78
  c->r[6]=c->r[7]+c->r[6]; // 804DDB7C
  c->r[5]=c->r[8]+c->r[5]; // 804DDB80
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 804DDB84
  c->r[0]=c->r[6]+c->r[5]; // 804DDB88
  c->r[3]=c->r[4]+c->r[3]; // 804DDB8C
  c->r[0]=c->r[9]+c->r[0]; // 804DDB90
  c->r[6]=c->r[3]+c->r[0]; // 804DDB94
  c->r[3]=R8(c->r[3]+c->r[0]); // 804DDB98
  c->r[4]=R8(c->r[6]+0x00000001u); // 804DDB9C
  c->r[5]=R8(c->r[6]+0x00000002u); // 804DDBA0
  c->r[6]=R8(c->r[6]+0x00000003u); // 804DDBA4
  c->lr=0x804DDBACu; f_803A7F80(c); // 804DDBA8
  goto L_804DDBC4; // 804DDBAC
L_804DDBB0:;
  c->r[3]=0u+0x00000001u; // 804DDBB0
  c->r[4]=0u+0x00000004u; // 804DDBB4
  c->r[5]=0u+0x00000005u; // 804DDBB8
  c->r[6]=0u+0x0000000Fu; // 804DDBBC
  c->lr=0x804DDBC4u; f_803A7F80(c); // 804DDBC0
L_804DDBC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804DDBC4
  c->r[3]=0u+0x00000000u; // 804DDBC8
  if (crb(c,2)) { goto L_804DDBDC; } // 804DDBCC
  cmps(c,0,(int32_t)c->r[30],0); // 804DDBD0
  if (crb(c,2)) { goto L_804DDBDC; } // 804DDBD4
  c->r[3]=0u+0x00000001u; // 804DDBD8
L_804DDBDC:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 804DDBDC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 804DDBE0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 804DDBE4
  c->r[11]=c->r[1]+0x00000100u; // 804DDBE8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 804DDBEC
  c->lr=0x804DDBF4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DDBF0
  c->r[0]=R32(c->r[1]+0x00000124u); // 804DDBF4
  c->lr=c->r[0]; // 804DDBF8
  c->r[1]=c->r[1]+0x00000120u; // 804DDBFC
  return; // 804DDC00
}

// BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_804DDC04(Ctx* __restrict c) {
  trace_call(0x804DDC04u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 804DDC04
  c->r[0]=c->r[3]|c->r[3]; // 804DDC08
  c->r[3]=c->r[4]|c->r[4]; // 804DDC0C
  c->r[5]=0u+0x00000000u; // 804DDC10
  c->r[12]=R32(c->r[12]+0x00000018u); // 804DDC14
  c->r[4]=c->r[0]|c->r[0]; // 804DDC18
  c->ctr=c->r[12]; // 804DDC1C
  if (true) { dispatch(c,c->ctr); return; } // 804DDC20
}

// fn_804DDC24
void f_804DDC24(Ctx* __restrict c) {
  trace_call(0x804DDC24u);
  c->r[3]=c->r[3]+0x00000004u; // 804DDC24
  f_804DF6CC(c); return; // 804DDC28
}

// fn_804DDC2C
void f_804DDC2C(Ctx* __restrict c) {
  trace_call(0x804DDC2Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DDC2C
  c->r[4]=0u+0x00000000u; // 804DDC30
  c->r[12]=R32(c->r[12]+0x00000014u); // 804DDC34
  c->ctr=c->r[12]; // 804DDC38
  if (true) { dispatch(c,c->ctr); return; } // 804DDC3C
}

// fn_804DDC40
void f_804DDC40(Ctx* __restrict c) {
  trace_call(0x804DDC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDC40
  c->r[0]=c->lr; // 804DDC44
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DDC48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DDC4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DDC50
  c->r[30]=c->r[3]+0x00000008u; // 804DDC54
  W32(c->r[1]+0x00000014u,c->r[29]); // 804DDC58
  c->r[29]=c->r[3]|c->r[3]; // 804DDC5C
  c->r[31]=R32(c->r[3]+0x00000008u); // 804DDC60
  goto L_804DDC94; // 804DDC64
L_804DDC68:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 804DDC68
  cmps(c,0,(int32_t)c->r[0],0); // 804DDC6C
  if (!crb(c,2)) { goto L_804DDC90; } // 804DDC70
  c->r[3]=R32(c->r[31]+0x00000008u); // 804DDC74
  c->r[5]=c->r[29]|c->r[29]; // 804DDC78
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 804DDC7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DDC80
  c->r[12]=R32(c->r[12]+0x00000020u); // 804DDC84
  c->ctr=c->r[12]; // 804DDC88
  if (true) { c->lr=0x804DDC90u; dispatch(c,c->ctr); } // 804DDC8C
L_804DDC90:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DDC90
L_804DDC94:;
  cmpu(c,0,c->r[31],c->r[30]); // 804DDC94
  if (!crb(c,2)) { IRQCHK(c); goto L_804DDC68; } // 804DDC98
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DDC9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DDCA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DDCA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804DDCA8
  c->lr=c->r[0]; // 804DDCAC
  c->r[1]=c->r[1]+0x00000020u; // 804DDCB0
  return; // 804DDCB4
}

// AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
void f_804DDCB8(Ctx* __restrict c) {
  trace_call(0x804DDCB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDCB8
  c->r[0]=c->lr; // 804DDCBC
  c->r[5]=c->r[4]|c->r[4]; // 804DDCC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DDCC4
  c->r[0]=c->r[3]+0x00000008u; // 804DDCC8
  c->r[3]=c->r[3]+0x00000004u; // 804DDCCC
  c->r[4]=c->r[1]+0x00000008u; // 804DDCD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804DDCD4
  c->lr=0x804DDCDCu; f_80507EDC(c); // 804DDCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DDCDC
  c->lr=c->r[0]; // 804DDCE0
  c->r[1]=c->r[1]+0x00000010u; // 804DDCE4
  return; // 804DDCE8
}

// fn_804DDCEC
void f_804DDCEC(Ctx* __restrict c) {
  trace_call(0x804DDCECu);
  c->r[3]=c->r[3]+0x00000004u; // 804DDCEC
  f_804DF65C(c); return; // 804DDCF0
}

// fn_804DDCF4
void f_804DDCF4(Ctx* __restrict c) {
  trace_call(0x804DDCF4u);
  c->r[3]=c->r[3]+0x00000004u; // 804DDCF4
  f_804DF690(c); return; // 804DDCF8
}

// fn_804DDCFC
void f_804DDCFC(Ctx* __restrict c) {
  trace_call(0x804DDCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDCFC
  c->r[0]=c->lr; // 804DDD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DDD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DDD08
  c->r[31]=c->r[5]|c->r[5]; // 804DDD0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DDD10
  c->r[12]=R32(c->r[12]+0x00000020u); // 804DDD14
  c->ctr=c->r[12]; // 804DDD18
  if (true) { c->lr=0x804DDD20u; dispatch(c,c->ctr); } // 804DDD1C
  cmps(c,0,(int32_t)c->r[3],0); // 804DDD20
  if (crb(c,2)) { goto L_804DDD34; } // 804DDD24
  c->r[0]=cntlz(c->r[31]); // 804DDD28
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804DDD2C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 804DDD30
L_804DDD34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DDD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DDD38
  c->lr=c->r[0]; // 804DDD3C
  c->r[1]=c->r[1]+0x00000010u; // 804DDD40
  return; // 804DDD44
}

// fn_804DDD48
void f_804DDD48(Ctx* __restrict c) {
  trace_call(0x804DDD48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDD48
  c->r[0]=c->lr; // 804DDD4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DDD50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DDD54
  c->r[31]=c->r[5]|c->r[5]; // 804DDD58
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DDD5C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804DDD60
  c->ctr=c->r[12]; // 804DDD64
  if (true) { c->lr=0x804DDD6Cu; dispatch(c,c->ctr); } // 804DDD68
  cmps(c,0,(int32_t)c->r[3],0); // 804DDD6C
  if (crb(c,2)) { goto L_804DDD80; } // 804DDD70
  c->r[0]=cntlz(c->r[31]); // 804DDD74
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 804DDD78
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 804DDD7C
L_804DDD80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DDD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DDD84
  c->lr=c->r[0]; // 804DDD88
  c->r[1]=c->r[1]+0x00000010u; // 804DDD8C
  return; // 804DDD90
}

// fn_804DDD94
void f_804DDD94(Ctx* __restrict c) {
  trace_call(0x804DDD94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDD94
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 804DDD98
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DDD9C
  cmpu(c,0,c->r[5],c->r[0]); // 804DDDA0
  if (crb(c,0)) { goto L_804DDDB8; } // 804DDDA4
  {uint32_t ea=c->r[2]+0x000017C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DDDA8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804DDDAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804DDDB0
  goto L_804DDDFC; // 804DDDB4
L_804DDDB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 804DDDB8
  c->r[5]=0u+0x43300000u; // 804DDDBC
  c->r[4]=R32(c->r[4]+0x00000040u); // 804DDDC0
  W32(c->r[1]+0x00000008u,c->r[5]); // 804DDDC4
  c->r[6]=c->r[4]+c->r[0]; // 804DDDC8
  {uint32_t ea=c->r[2]+0x000017D8u; c->f[1]=RF64(ea);} // 804DDDCC
  c->r[4]=R16(c->r[6]+0x0000000Au); // 804DDDD0
  c->r[0]=R16(c->r[6]+0x00000008u); // 804DDDD4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804DDDD8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804DDDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DDDE0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804DDDE4
  W32(c->r[1]+0x00000010u,c->r[5]); // 804DDDE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804DDDEC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 804DDDF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804DDDF4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804DDDF8
L_804DDDFC:;
  c->r[1]=c->r[1]+0x00000020u; // 804DDDFC
  return; // 804DDE00
}

// fn_804DDE04
void f_804DDE04(Ctx* __restrict c) {
  trace_call(0x804DDE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDE04
  c->r[0]=c->lr; // 804DDE08
  c->r[10]=R32(c->r[3]+0x00000018u); // 804DDE0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DDE10
  c->r[7]=rotl(c->r[10],4)&0x0000000Fu; // 804DDE14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DDE18
  c->r[0]=c->r[7]+0xFFFFFFF8u; // 804DDE1C
  cmpu(c,0,c->r[0],0x00000002u); // 804DDE20
  c->r[31]=c->r[4]|c->r[4]; // 804DDE24
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DDE28
  c->r[30]=c->r[3]|c->r[3]; // 804DDE2C
  if (crb(c,1)) { goto L_804DDE6C; } // 804DDE30
  c->r[3]=c->r[31]|c->r[31]; // 804DDE34
  c->lr=0x804DDE3Cu; f_803A6618(c); // 804DDE38
  c->r[0]=R32(c->r[30]+0x00000018u); // 804DDE3C
  W32(c->r[1]+0x00000008u,c->r[3]); // 804DDE40
  c->r[3]=c->r[31]|c->r[31]; // 804DDE44
  c->r[4]=R32(c->r[30]+0x00000000u); // 804DDE48
  c->r[7]=rotl(c->r[0],4)&0x0000000Fu; // 804DDE4C
  c->r[5]=R16(c->r[30]+0x00000008u); // 804DDE50
  c->r[8]=rotl(c->r[0],7)&0x00000003u; // 804DDE54
  c->r[6]=R16(c->r[30]+0x0000000Au); // 804DDE58
  c->r[9]=rotl(c->r[0],9)&0x00000003u; // 804DDE5C
  c->r[10]=rotl(c->r[0],5)&0x00000001u; // 804DDE60
  c->lr=0x804DDE68u; f_803A62C8(c); // 804DDE64
  goto L_804DDE8C; // 804DDE68
L_804DDE6C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 804DDE6C
  c->r[3]=c->r[31]|c->r[31]; // 804DDE70
  c->r[5]=R16(c->r[30]+0x00000008u); // 804DDE74
  c->r[8]=rotl(c->r[10],7)&0x00000003u; // 804DDE78
  c->r[9]=rotl(c->r[10],9)&0x00000003u; // 804DDE7C
  c->r[6]=R16(c->r[30]+0x0000000Au); // 804DDE80
  c->r[10]=rotl(c->r[10],5)&0x00000001u; // 804DDE84
  c->lr=0x804DDE8Cu; f_803A60BC(c); // 804DDE88
L_804DDE8C:;
  c->r[4]=R16(c->r[30]+0x00000014u); // 804DDE8C
  c->r[5]=0u+0x43300000u; // 804DDE90
  c->r[0]=R32(c->r[30]+0x00000018u); // 804DDE94
  c->r[3]=c->r[31]|c->r[31]; // 804DDE98
  W32(c->r[1]+0x00000014u,c->r[4]); // 804DDE9C
  {uint32_t ea=c->r[2]+0x000017E8u; c->f[3]=RF64(ea);} // 804DDEA0
  c->r[4]=rotl(c->r[0],12)&0x00000007u; // 804DDEA4
  W32(c->r[1]+0x00000010u,c->r[5]); // 804DDEA8
  c->r[5]=rotl(c->r[0],13)&0x00000001u; // 804DDEAC
  {uint32_t ea=c->r[2]+0x000017E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DDEB0
  c->r[6]=rotl(c->r[0],14)&0x00000001u; // 804DDEB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804DDEB8
  c->r[7]=rotl(c->r[0],15)&0x00000001u; // 804DDEBC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DDEC0
  c->r[8]=rotl(c->r[0],17)&0x00000003u; // 804DDEC4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 804DDEC8
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DDECC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804DDED0
  c->lr=0x804DDED8u; f_803A6310(c); // 804DDED4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DDED8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DDEDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DDEE0
  c->lr=c->r[0]; // 804DDEE4
  c->r[1]=c->r[1]+0x00000020u; // 804DDEE8
  return; // 804DDEEC
}

// fn_804DDEF0
void f_804DDEF0(Ctx* __restrict c) {
  trace_call(0x804DDEF0u);
  c->r[5]=c->r[3]|c->r[3]; // 804DDEF0
  c->r[3]=c->r[4]|c->r[4]; // 804DDEF4
  c->r[0]=R32(c->r[5]+0x00000018u); // 804DDEF8
  c->r[4]=R32(c->r[5]+0x00000004u); // 804DDEFC
  c->r[6]=R16(c->r[5]+0x00000016u); // 804DDF00
  c->r[5]=rotl(c->r[0],19)&0x00000003u; // 804DDF04
  f_803A67D8(c); return; // 804DDF08
}

// Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_804DDF0C(Ctx* __restrict c) {
  trace_call(0x804DDF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDF0C
  c->r[0]=c->lr; // 804DDF10
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DDF14
  c->r[0]=0u+0x80000000u; // 804DDF18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DDF1C
  c->r[31]=c->r[5]|c->r[5]; // 804DDF20
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DDF24
  c->r[30]=c->r[4]|c->r[4]; // 804DDF28
  W32(c->r[1]+0x00000014u,c->r[29]); // 804DDF2C
  c->r[29]=c->r[3]|c->r[3]; // 804DDF30
  c->r[6]=R32(c->r[4]+0x00000008u); // 804DDF34
  cmpu(c,0,c->r[6],c->r[0]); // 804DDF38
  if (!crb(c,0)) { goto L_804DDF48; } // 804DDF3C
  c->r[3]=c->r[30]|c->r[30]; // 804DDF40
  c->lr=0x804DDF48u; f_804137C0(c); // 804DDF44
L_804DDF48:;
  c->r[3]=c->r[30]|c->r[30]; // 804DDF48
  c->r[4]=c->r[31]|c->r[31]; // 804DDF4C
  c->lr=0x804DDF54u; f_804138D4(c); // 804DDF50
  c->r[4]=c->r[3]|c->r[3]; // 804DDF54
  c->r[3]=c->r[29]|c->r[29]; // 804DDF58
  c->lr=0x804DDF60u; f_804DDF7C(c); // 804DDF5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DDF60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DDF64
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DDF68
  c->r[29]=R32(c->r[1]+0x00000014u); // 804DDF6C
  c->lr=c->r[0]; // 804DDF70
  c->r[1]=c->r[1]+0x00000020u; // 804DDF74
  return; // 804DDF78
}

// Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void f_804DDF7C(Ctx* __restrict c) {
  trace_call(0x804DDF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DDF7C
  c->r[0]=0u+0x43300000u; // 804DDF80
  c->r[7]=R32(c->r[4]+0x00000000u); // 804DDF84
  c->r[8]=R32(c->r[4]+0x00000004u); // 804DDF88
  c->r[4]=R32(c->r[7]+0x00000008u); // 804DDF8C
  c->r[6]=R32(c->r[3]+0x00000018u); // 804DDF90
  cmps(c,0,(int32_t)c->r[8],0); // 804DDF94
  W32(c->r[3]+0x00000000u,c->r[4]); // 804DDF98
  {uint32_t ea=c->r[2]+0x000017E8u; c->f[3]=RF64(ea);} // 804DDF9C
  c->r[5]=R16(c->r[7]+0x00000000u); // 804DDFA0
  c->r[4]=R16(c->r[7]+0x00000002u); // 804DDFA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804DDFA8
  {uint32_t ea=c->r[2]+0x000017F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DDFAC
  W16(c->r[3]+0x00000008u,c->r[4]); // 804DDFB0
  W16(c->r[3]+0x0000000Au,c->r[5]); // 804DDFB4
  c->r[4]=R32(c->r[7]+0x00000004u); // 804DDFB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 804DDFBC
  c->r[6]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[6]&~0xF0000000u); // 804DDFC0
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DDFC4
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 804DDFC8
  c->r[4]=R32(c->r[7]+0x00000010u); // 804DDFCC
  c->r[6]=(rotl(c->r[0],25)&0x06000000u)|(c->r[6]&~0x06000000u); // 804DDFD0
  c->r[6]=(rotl(c->r[4],23)&0x01800000u)|(c->r[6]&~0x01800000u); // 804DDFD4
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DDFD8
  c->r[5]=R8(c->r[7]+0x00000021u); // 804DDFDC
  c->r[0]=R8(c->r[7]+0x00000022u); // 804DDFE0
  c->r[4]=c->r[0]-c->r[5]; // 804DDFE4
  c->r[0]=c->r[5]-c->r[0]; // 804DDFE8
  c->r[0]=c->r[4]|c->r[0]; // 804DDFEC
  c->r[6]=(rotl(c->r[0],28)&0x08000000u)|(c->r[6]&~0x08000000u); // 804DDFF0
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DDFF4
  c->r[0]=R32(c->r[7]+0x00000014u); // 804DDFF8
  c->r[4]=R32(c->r[7]+0x00000018u); // 804DDFFC
  c->r[6]=(rotl(c->r[0],20)&0x00700000u)|(c->r[6]&~0x00700000u); // 804DE000
  c->r[6]=(rotl(c->r[4],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 804DE004
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DE008
  c->r[4]=R8(c->r[7]+0x00000022u); // 804DE00C
  c->r[0]=R8(c->r[7]+0x00000021u); // 804DE010
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804DE014
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DE018
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804DE01C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804DE020
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804DE024
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 804DE028
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 804DE02C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DE030
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE034
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804DE038
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804DE03C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804DE040
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804DE044
  W16(c->r[3]+0x00000014u,c->r[0]); // 804DE048
  c->r[4]=R8(c->r[7]+0x00000020u); // 804DE04C
  c->r[0]=0u-c->r[4]; // 804DE050
  c->r[0]=c->r[0]|c->r[4]; // 804DE054
  c->r[6]=(rotl(c->r[0],18)&0x00020000u)|(c->r[6]&~0x00020000u); // 804DE058
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DE05C
  if (crb(c,2)) { goto L_804DE084; } // 804DE060
  c->r[0]=R32(c->r[8]+0x00000008u); // 804DE064
  W32(c->r[3]+0x00000004u,c->r[0]); // 804DE068
  c->r[0]=R32(c->r[8]+0x00000004u); // 804DE06C
  c->r[6]=(rotl(c->r[0],13)&0x00006000u)|(c->r[6]&~0x00006000u); // 804DE070
  W32(c->r[3]+0x00000018u,c->r[6]); // 804DE074
  c->r[0]=R16(c->r[8]+0x00000000u); // 804DE078
  W16(c->r[3]+0x00000016u,c->r[0]); // 804DE07C
  goto L_804DE098; // 804DE080
L_804DE084:;
  c->r[4]=0u+0x00000000u; // 804DE084
  c->r[0]=rotl(c->r[6],0)&0xFFFF9FFFu; // 804DE088
  W32(c->r[3]+0x00000004u,c->r[4]); // 804DE08C
  W32(c->r[3]+0x00000018u,c->r[0]); // 804DE090
  W16(c->r[3]+0x00000016u,c->r[4]); // 804DE094
L_804DE098:;
  c->r[1]=c->r[1]+0x00000020u; // 804DE098
  return; // 804DE09C
}

// fn_804DE0A0
void f_804DE0A0(Ctx* __restrict c) {
  trace_call(0x804DE0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE0A0
  c->r[0]=c->lr; // 804DE0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DE0A8
  c->r[0]=0u+0x80000000u; // 804DE0AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DE0B0
  c->r[31]=c->r[5]|c->r[5]; // 804DE0B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DE0B8
  c->r[30]=c->r[4]|c->r[4]; // 804DE0BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804DE0C0
  c->r[29]=c->r[3]|c->r[3]; // 804DE0C4
  c->r[6]=R32(c->r[4]+0x00000008u); // 804DE0C8
  cmpu(c,0,c->r[6],c->r[0]); // 804DE0CC
  if (!crb(c,0)) { goto L_804DE0DC; } // 804DE0D0
  c->r[3]=c->r[30]|c->r[30]; // 804DE0D4
  c->lr=0x804DE0DCu; f_804137C0(c); // 804DE0D8
L_804DE0DC:;
  c->r[3]=c->r[30]|c->r[30]; // 804DE0DC
  c->r[4]=c->r[31]|c->r[31]; // 804DE0E0
  c->lr=0x804DE0E8u; f_804138D4(c); // 804DE0E4
  c->r[6]=R32(c->r[3]+0x00000000u); // 804DE0E8
  c->r[4]=R32(c->r[29]+0x00000018u); // 804DE0EC
  c->r[0]=R32(c->r[6]+0x00000008u); // 804DE0F0
  W32(c->r[29]+0x00000000u,c->r[0]); // 804DE0F4
  c->r[5]=R16(c->r[6]+0x00000000u); // 804DE0F8
  c->r[0]=R16(c->r[6]+0x00000002u); // 804DE0FC
  W16(c->r[29]+0x00000008u,c->r[0]); // 804DE100
  W16(c->r[29]+0x0000000Au,c->r[5]); // 804DE104
  c->r[0]=R32(c->r[6]+0x00000004u); // 804DE108
  c->r[4]=(rotl(c->r[0],28)&0xF0000000u)|(c->r[4]&~0xF0000000u); // 804DE10C
  W32(c->r[29]+0x00000018u,c->r[4]); // 804DE110
  c->r[3]=R32(c->r[3]+0x00000004u); // 804DE114
  cmps(c,0,(int32_t)c->r[3],0); // 804DE118
  if (crb(c,2)) { goto L_804DE140; } // 804DE11C
  c->r[0]=R32(c->r[3]+0x00000008u); // 804DE120
  W32(c->r[29]+0x00000004u,c->r[0]); // 804DE124
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DE128
  c->r[4]=(rotl(c->r[0],13)&0x00006000u)|(c->r[4]&~0x00006000u); // 804DE12C
  W32(c->r[29]+0x00000018u,c->r[4]); // 804DE130
  c->r[0]=R16(c->r[3]+0x00000000u); // 804DE134
  W16(c->r[29]+0x00000016u,c->r[0]); // 804DE138
  goto L_804DE154; // 804DE13C
L_804DE140:;
  c->r[3]=0u+0x00000000u; // 804DE140
  c->r[0]=rotl(c->r[4],0)&0xFFFF9FFFu; // 804DE144
  W32(c->r[29]+0x00000004u,c->r[3]); // 804DE148
  W32(c->r[29]+0x00000018u,c->r[0]); // 804DE14C
  W16(c->r[29]+0x00000016u,c->r[3]); // 804DE150
L_804DE154:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DE154
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DE158
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DE15C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804DE160
  c->lr=c->r[0]; // 804DE164
  c->r[1]=c->r[1]+0x00000020u; // 804DE168
  return; // 804DE16C
}

// fn_804DE170
void f_804DE170(Ctx* __restrict c) {
  trace_call(0x804DE170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE170
  c->r[0]=c->lr; // 804DE174
  c->r[4]=0u+0x80720000u; // 804DE178
  {uint32_t ea=c->r[2]+0x000017F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DE180
  c->r[4]=c->r[4]+0xFFFFA9F0u; // 804DE184
  {uint32_t ea=c->r[2]+0x000017FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE188
  c->r[5]=0u+0x00000001u; // 804DE18C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DE190
  c->r[31]=c->r[3]|c->r[3]; // 804DE194
  W32(c->r[3]+0x00000000u,c->r[4]); // 804DE198
  c->r[4]=0u+0x00000000u; // 804DE19C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 804DE1A0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 804DE1A4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 804DE1A8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 804DE1AC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 804DE1B0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 804DE1B4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 804DE1B8
  c->r[3]=c->r[3]+0x00000050u; // 804DE1BC
  c->lr=0x804DE1C4u; f_800043EC(c); // 804DE1C0
  c->r[3]=c->r[31]+0x00000004u; // 804DE1C4
  c->lr=0x804DE1CCu; f_80382F00(c); // 804DE1C8
  c->r[3]=c->r[31]|c->r[31]; // 804DE1CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DE1D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DE1D4
  c->lr=c->r[0]; // 804DE1D8
  c->r[1]=c->r[1]+0x00000010u; // 804DE1DC
  return; // 804DE1E0
}

// dtor_804DE1E4
void f_804DE1E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE1E4
  c->r[0]=c->lr; // 804DE1E8
  cmps(c,0,(int32_t)c->r[3],0); // 804DE1EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DE1F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DE1F4
  c->r[31]=c->r[3]|c->r[3]; // 804DE1F8
  if (crb(c,2)) { goto L_804DE20C; } // 804DE1FC
  cmps(c,0,(int32_t)c->r[4],0); // 804DE200
  if (!crb(c,1)) { goto L_804DE20C; } // 804DE204
  c->lr=0x804DE20Cu; f_803A9400(c); // 804DE208
L_804DE20C:;
  c->r[3]=c->r[31]|c->r[31]; // 804DE20C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DE210
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DE214
  c->lr=c->r[0]; // 804DE218
  c->r[1]=c->r[1]+0x00000010u; // 804DE21C
  return; // 804DE220
}

// fn_804DE224
void f_804DE224(Ctx* __restrict c) {
  trace_call(0x804DE224u);
  cmpu(c,0,c->r[4],0x00000001u); // 804DE224
  if (crb(c,2)) { goto L_804DE23C; } // 804DE228
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE22C
  fcmp(c,0,c->f[1],c->f[0]); // 804DE230
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804DE234
  if (!crb(c,2)) { goto L_804DE244; } // 804DE238
L_804DE23C:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 804DE23C
  return; // 804DE240
L_804DE244:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804DE244
  c->r[5]=c->r[3]+c->r[0]; // 804DE248
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE24C
  fcmp(c,0,c->f[1],c->f[0]); // 804DE250
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DE254
  if (!crb(c,2)) { goto L_804DE264; } // 804DE258
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 804DE25C
  return; // 804DE260
L_804DE264:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 804DE264
  c->r[5]=0u+0x00000000u; // 804DE268
  goto L_804DE2A8; // 804DE26C
L_804DE270:;
  c->r[4]=c->r[5]+c->r[6]; // 804DE270
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 804DE274
  c->r[4]=c->r[0]+c->r[4]; // 804DE278
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 804DE27C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE280
  c->r[4]=sraw(c,c->r[4],1); // 804DE284
  fcmp(c,0,c->f[1],c->f[0]); // 804DE288
  c->r[0]=c->cr; // 804DE28C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 804DE290
  if (crb(c,2)) { goto L_804DE29C; } // 804DE294
  c->r[6]=c->r[4]|c->r[4]; // 804DE298
L_804DE29C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804DE29C
  if (!crb(c,2)) { goto L_804DE2A8; } // 804DE2A0
  c->r[5]=c->r[4]|c->r[4]; // 804DE2A4
L_804DE2A8:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 804DE2A8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804DE2AC
  if (crb(c,2)) { goto L_804DE2BC; } // 804DE2B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 804DE2B4
  if (!crb(c,2)) { IRQCHK(c); goto L_804DE270; } // 804DE2B8
L_804DE2BC:;
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 804DE2BC
  {uint32_t ea=c->r[2]+0x00001800u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE2C0
  {uint32_t ea=c->r[3]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 804DE2C4
  c->r[0]=0u+0x00000000u; // 804DE2C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804DE2CC
  fcmp(c,0,c->f[0],c->f[1]); // 804DE2D0
  if (!crb(c,0)) { goto L_804DE2E8; } // 804DE2D4
  {uint32_t ea=c->r[2]+0x00001804u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE2D8
  fcmp(c,0,c->f[1],c->f[0]); // 804DE2DC
  if (!crb(c,0)) { goto L_804DE2E8; } // 804DE2E0
  c->r[0]=0u+0x00000001u; // 804DE2E4
L_804DE2E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804DE2E8
  if (crb(c,2)) { goto L_804DE2FC; } // 804DE2EC
  c->r[3]=c->r[3]+c->r[4]; // 804DE2F0
  c->r[3]=R16(c->r[3]+0x00000004u); // 804DE2F4
  return; // 804DE2F8
L_804DE2FC:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 804DE2FC
  c->r[3]=c->r[3]+c->r[0]; // 804DE300
  c->r[3]=R16(c->r[3]+0x00000004u); // 804DE304
  return; // 804DE308
}

// fn_804DE30C
void f_804DE30C(Ctx* __restrict c) {
  trace_call(0x804DE30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE30C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 804DE310
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 804DE314
  cmpu(c,0,c->r[4],0x00000001u); // 804DE318
  if (crb(c,2)) { goto L_804DE330; } // 804DE31C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE320
  fcmp(c,0,c->f[1],c->f[0]); // 804DE324
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804DE328
  if (!crb(c,2)) { goto L_804DE338; } // 804DE32C
L_804DE330:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE330
  goto L_804DE4B8; // 804DE334
L_804DE338:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 804DE338
  c->r[5]=c->r[3]+c->r[0]; // 804DE33C
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE340
  fcmp(c,0,c->f[1],c->f[0]); // 804DE344
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804DE348
  if (!crb(c,2)) { goto L_804DE358; } // 804DE34C
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE350
  goto L_804DE4B8; // 804DE354
L_804DE358:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 804DE358
  c->r[6]=0u+0x00000000u; // 804DE35C
  goto L_804DE3A0; // 804DE360
L_804DE364:;
  c->r[5]=c->r[6]+c->r[7]; // 804DE364
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 804DE368
  c->r[0]=c->r[0]+c->r[5]; // 804DE36C
  c->r[5]=sraw(c,c->r[0],1); // 804DE370
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 804DE374
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE378
  fcmp(c,0,c->f[1],c->f[0]); // 804DE37C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804DE380
  c->r[0]=c->cr; // 804DE384
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 804DE388
  if (crb(c,2)) { goto L_804DE394; } // 804DE38C
  c->r[7]=c->r[5]|c->r[5]; // 804DE390
L_804DE394:;
  cmps(c,0,(int32_t)c->r[0],0); // 804DE394
  if (!crb(c,2)) { goto L_804DE3A0; } // 804DE398
  c->r[6]=c->r[5]|c->r[5]; // 804DE39C
L_804DE3A0:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 804DE3A0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804DE3A4
  if (crb(c,2)) { goto L_804DE3B4; } // 804DE3A8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804DE3AC
  if (!crb(c,2)) { IRQCHK(c); goto L_804DE364; } // 804DE3B0
L_804DE3B4:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 804DE3B4
  {uint32_t ea=c->r[2]+0x00001800u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE3B8
  c->r[0]=0u+0x00000000u; // 804DE3BC
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 804DE3C0
  c->r[8]=c->r[3]+c->r[5]; // 804DE3C4
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 804DE3C8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 804DE3CC
  c->r[5]=c->r[3]+c->r[5]; // 804DE3D0
  fcmp(c,0,c->f[0],c->f[2]); // 804DE3D4
  if (!crb(c,0)) { goto L_804DE3EC; } // 804DE3D8
  {uint32_t ea=c->r[2]+0x00001804u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE3DC
  fcmp(c,0,c->f[2],c->f[0]); // 804DE3E0
  if (!crb(c,0)) { goto L_804DE3EC; } // 804DE3E4
  c->r[0]=0u+0x00000001u; // 804DE3E8
L_804DE3EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804DE3EC
  if (crb(c,2)) { goto L_804DE42C; } // 804DE3F0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 804DE3F4
  cmpu(c,0,c->r[7],c->r[0]); // 804DE3F8
  if (!crb(c,0)) { goto L_804DE424; } // 804DE3FC
  c->r[0]=c->r[7]+0x00000001u; // 804DE400
  {uint32_t ea=c->r[8]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE404
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 804DE408
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE40C
  fcmp(c,0,c->f[1],c->f[0]); // 804DE410
  if (!crb(c,2)) { goto L_804DE424; } // 804DE414
  c->r[3]=c->r[3]+c->r[0]; // 804DE418
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE41C
  goto L_804DE4B8; // 804DE420
L_804DE424:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE424
  goto L_804DE4B8; // 804DE428
L_804DE42C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DE42C
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE430
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 804DE434
  {uint32_t ea=c->r[2]+0x00001808u; c->f[6]=c->ps1[6]=RF32(ea);} // 804DE438
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804DE43C
  {uint32_t ea=c->r[2]+0x0000180Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804DE440
  {uint32_t ea=c->r[2]+0x00001810u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DE444
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 804DE448
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 804DE44C
  {uint32_t ea=c->r[2]+0x00001814u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE450
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804DE454
  {uint32_t ea=c->r[8]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804DE458
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 804DE45C
  {uint32_t ea=c->r[8]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 804DE460
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 804DE464
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 804DE468
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 804DE46C
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 804DE470
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 804DE474
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 804DE478
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 804DE47C
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 804DE480
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 804DE484
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 804DE488
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 804DE48C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804DE490
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 804DE494
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 804DE498
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 804DE49C
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 804DE4A0
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 804DE4A4
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 804DE4A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804DE4AC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804DE4B0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 804DE4B4
L_804DE4B8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 804DE4B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 804DE4BC
  c->r[1]=c->r[1]+0x00000020u; // 804DE4C0
  return; // 804DE4C4
}

// fn_804DE4C8
void f_804DE4C8(Ctx* __restrict c) {
  trace_call(0x804DE4C8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804DE4C8
  c->r[3]=R16(c->r[3]+0x00000008u); // 804DE4CC
  return; // 804DE4D0
}

// fn_804DE4D4
void f_804DE4D4(Ctx* __restrict c) {
  trace_call(0x804DE4D4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804DE4D4
  c->r[3]=R8(c->r[3]+0x0000000Au); // 804DE4D8
  c->r[0]=0u-c->r[3]; // 804DE4DC
  c->r[0]=c->r[0]|c->r[3]; // 804DE4E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804DE4E4
  return; // 804DE4E8
}

// fn_804DE4EC
void f_804DE4EC(Ctx* __restrict c) {
  trace_call(0x804DE4ECu);
  {uint32_t ea=c->r[2]+0x00001818u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DE4EC
  c->r[4]=0u+0x80720000u; // 804DE4F0
  c->r[0]=0u+0x00000000u; // 804DE4F4
  c->r[4]=c->r[4]+0xFFFFAA00u; // 804DE4F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804DE4FC
  W32(c->r[3]+0x00000008u,c->r[0]); // 804DE500
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804DE504
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804DE508
  W32(c->r[3]+0x00000000u,c->r[4]); // 804DE50C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804DE510
  W32(c->r[3]+0x00000018u,c->r[0]); // 804DE514
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 804DE518
  return; // 804DE51C
}

// fn_804DE520
void f_804DE520(Ctx* __restrict c) {
  trace_call(0x804DE520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE520
  c->r[0]=c->lr; // 804DE524
  cmps(c,0,(int32_t)c->r[3],0); // 804DE528
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DE52C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DE530
  c->r[31]=c->r[4]|c->r[4]; // 804DE534
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DE538
  c->r[30]=c->r[3]|c->r[3]; // 804DE53C
  if (crb(c,2)) { goto L_804DE588; } // 804DE540
  c->r[4]=R32(c->r[3]+0x00000018u); // 804DE544
  c->r[5]=0u+0x80720000u; // 804DE548
  c->r[5]=c->r[5]+0xFFFFAA00u; // 804DE54C
  cmps(c,0,(int32_t)c->r[4],0); // 804DE550
  W32(c->r[3]+0x00000000u,c->r[5]); // 804DE554
  if (crb(c,2)) { goto L_804DE564; } // 804DE558
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DE55C
  c->lr=0x804DE564u; f_803C4D18(c); // 804DE560
L_804DE564:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 804DE564
  cmps(c,0,(int32_t)c->r[4],0); // 804DE568
  if (crb(c,2)) { goto L_804DE578; } // 804DE56C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DE570
  c->lr=0x804DE578u; f_803C4D18(c); // 804DE574
L_804DE578:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE578
  if (!crb(c,1)) { goto L_804DE588; } // 804DE57C
  c->r[3]=c->r[30]|c->r[30]; // 804DE580
  c->lr=0x804DE588u; f_803A9400(c); // 804DE584
L_804DE588:;
  c->r[3]=c->r[30]|c->r[30]; // 804DE588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DE58C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DE590
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DE594
  c->lr=c->r[0]; // 804DE598
  c->r[1]=c->r[1]+0x00000010u; // 804DE59C
  return; // 804DE5A0
}

// fn_804DE5A4
void f_804DE5A4(Ctx* __restrict c) {
  trace_call(0x804DE5A4u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DE5A4
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 804DE5A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804DE5AC
  c->ctr=c->r[12]; // 804DE5B0
  if (true) { dispatch(c,c->ctr); return; } // 804DE5B4
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs
void f_804DE5B8(Ctx* __restrict c) {
  trace_call(0x804DE5B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE5B8
  c->r[0]=c->lr; // 804DE5BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DE5C0
  c->r[11]=c->r[1]+0x00000030u; // 804DE5C4
  c->lr=0x804DE5CCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DE5C8
  c->r[27]=R16(c->r[4]+0x0000000Cu); // 804DE5CC
  c->r[30]=0u+0x00000000u; // 804DE5D0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 804DE5D4
  c->r[31]=c->r[3]|c->r[3]; // 804DE5D8
  cmps(c,0,(int32_t)c->r[27],0); // 804DE5DC
  c->r[24]=c->r[5]|c->r[5]; // 804DE5E0
  W32(c->r[3]+0x00000014u,c->r[30]); // 804DE5E4
  c->r[25]=c->r[6]|c->r[6]; // 804DE5E8
  if (crb(c,2)) { goto L_804DE6A0; } // 804DE5EC
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DE5F0
  c->r[4]=rotl(c->r[27],2)&0x0003FFFCu; // 804DE5F4
  c->lr=0x804DE5FCu; f_803C4D08(c); // 804DE5F8
  cmps(c,0,(int32_t)c->r[3],0); // 804DE5FC
  if (!crb(c,2)) { goto L_804DE60C; } // 804DE600
  c->r[3]=0u+0x00000000u; // 804DE604
  goto L_804DE630; // 804DE608
L_804DE60C:;
  c->r[4]=c->r[3]|c->r[3]; // 804DE60C
  c->ctr=c->r[27]; // 804DE610
  cmpu(c,0,c->r[27],0x00000000u); // 804DE614
  if (!crb(c,1)) { goto L_804DE630; } // 804DE618
L_804DE61C:;
  cmps(c,0,(int32_t)c->r[4],0); // 804DE61C
  if (crb(c,2)) { goto L_804DE628; } // 804DE620
  W32(c->r[4]+0x00000000u,c->r[30]); // 804DE624
L_804DE628:;
  c->r[4]=c->r[4]+0x00000004u; // 804DE628
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DE61C; } // 804DE62C
L_804DE630:;
  cmps(c,0,(int32_t)c->r[3],0); // 804DE630
  W32(c->r[31]+0x00000014u,c->r[3]); // 804DE634
  if (crb(c,2)) { goto L_804DE6A0; } // 804DE638
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804DE63C
  c->r[26]=0u+0x00000000u; // 804DE640
  c->r[27]=0u+0x00000000u; // 804DE644
  c->r[30]=0u+0x74690000u; // 804DE648
  c->r[29]=c->r[3]+0x00000014u; // 804DE64C
  c->r[28]=c->r[29]|c->r[29]; // 804DE650
  goto L_804DE690; // 804DE654
L_804DE658:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 804DE658
  c->r[3]=c->r[24]|c->r[24]; // 804DE65C
  c->r[0]=R32(c->r[28]+0x00000000u); // 804DE660
  c->r[4]=c->r[30]+0x00006D67u; // 804DE664
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804DE668
  c->r[6]=0u+0x00000000u; // 804DE66C
  c->r[5]=c->r[29]+c->r[0]; // 804DE670
  c->ctr=c->r[12]; // 804DE674
  if (true) { c->lr=0x804DE67Cu; dispatch(c,c->ctr); } // 804DE678
  c->r[4]=R32(c->r[31]+0x00000014u); // 804DE67C
  c->r[28]=c->r[28]+0x00000004u; // 804DE680
  c->r[26]=c->r[26]+0x00000001u; // 804DE684
  W32(c->r[4]+c->r[27],c->r[3]); // 804DE688
  c->r[27]=c->r[27]+0x00000004u; // 804DE68C
L_804DE690:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804DE690
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 804DE694
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 804DE698
  if (crb(c,0)) { IRQCHK(c); goto L_804DE658; } // 804DE69C
L_804DE6A0:;
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DE6A0
  c->r[4]=rotl(c->r[25],4)&0x000FFFF0u; // 804DE6A4
  c->lr=0x804DE6ACu; f_803C4D08(c); // 804DE6A8
  cmps(c,0,(int32_t)c->r[3],0); // 804DE6AC
  if (!crb(c,2)) { goto L_804DE6BC; } // 804DE6B0
  c->r[3]=0u+0x00000000u; // 804DE6B4
  goto L_804DE6F4; // 804DE6B8
L_804DE6BC:;
  c->r[4]=c->r[3]|c->r[3]; // 804DE6BC
  c->r[0]=0u+0x00000000u; // 804DE6C0
  c->ctr=c->r[25]; // 804DE6C4
  cmpu(c,0,c->r[25],0x00000000u); // 804DE6C8
  if (!crb(c,1)) { goto L_804DE6F4; } // 804DE6CC
L_804DE6D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 804DE6D0
  if (crb(c,2)) { goto L_804DE6EC; } // 804DE6D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804DE6D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 804DE6DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 804DE6E0
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 804DE6E4
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 804DE6E8
L_804DE6EC:;
  c->r[4]=c->r[4]+0x00000010u; // 804DE6EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DE6D0; } // 804DE6F0
L_804DE6F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804DE6F4
  W32(c->r[31]+0x00000018u,c->r[3]); // 804DE6F8
  if (crb(c,2)) { goto L_804DE704; } // 804DE6FC
  W16(c->r[31]+0x0000001Cu,c->r[25]); // 804DE700
L_804DE704:;
  c->r[11]=c->r[1]+0x00000030u; // 804DE704
  c->lr=0x804DE70Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DE708
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DE70C
  c->lr=c->r[0]; // 804DE710
  c->r[1]=c->r[1]+0x00000030u; // 804DE714
  return; // 804DE718
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb
void f_804DE71C(Ctx* __restrict c) {
  trace_call(0x804DE71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE71C
  c->r[0]=c->lr; // 804DE720
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DE724
  c->r[11]=c->r[1]+0x00000030u; // 804DE728
  c->lr=0x804DE730u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DE72C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 804DE730
  c->r[25]=c->r[3]|c->r[3]; // 804DE734
  c->r[26]=c->r[4]|c->r[4]; // 804DE738
  c->r[27]=c->r[5]|c->r[5]; // 804DE73C
  c->r[0]=R32(c->r[7]+0x00000010u); // 804DE740
  c->r[28]=c->r[6]|c->r[6]; // 804DE744
  c->r[31]=0u+0x00000000u; // 804DE748
  c->r[29]=0u+0x00000000u; // 804DE74C
  c->r[30]=c->r[7]+c->r[0]; // 804DE750
  goto L_804DE8B8; // 804DE754
L_804DE758:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 804DE758
  c->r[0]=R32(c->r[30]+c->r[0]); // 804DE75C
  c->r[4]=c->r[4]+c->r[0]; // 804DE760
  c->r[0]=R8(c->r[4]+0x00000015u); // 804DE764
  cmps(c,0,(int32_t)c->r[0],0); // 804DE768
  if (!crb(c,2)) { goto L_804DE814; } // 804DE76C
  c->r[12]=R32(c->r[26]+0x00000000u); // 804DE770
  c->r[3]=c->r[26]|c->r[26]; // 804DE774
  c->r[5]=c->r[27]|c->r[27]; // 804DE778
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804DE77C
  c->ctr=c->r[12]; // 804DE780
  if (true) { c->lr=0x804DE788u; dispatch(c,c->ctr); } // 804DE784
  cmps(c,0,(int32_t)c->r[3],0); // 804DE788
  if (crb(c,2)) { goto L_804DE8B4; } // 804DE78C
  cmps(c,0,(int32_t)c->r[31],0); // 804DE790
  if (!crb(c,2)) { goto L_804DE79C; } // 804DE794
  c->r[31]=R32(c->r[25]+0x00000018u); // 804DE798
L_804DE79C:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 804DE79C
  c->r[4]=R32(c->r[25]+0x00000018u); // 804DE7A0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804DE7A4
  c->r[4]=c->r[4]+c->r[0]; // 804DE7A8
  c->r[0]=c->r[4]+0x0000000Fu; // 804DE7AC
  c->r[0]=c->r[0]-c->r[31]; // 804DE7B0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804DE7B4
  c->ctr=c->r[0]; // 804DE7B8
  cmpu(c,0,c->r[31],c->r[4]); // 804DE7BC
  if (!crb(c,0)) { goto L_804DE7DC; } // 804DE7C0
L_804DE7C4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 804DE7C4
  cmps(c,0,(int32_t)c->r[0],0); // 804DE7C8
  if (!crb(c,2)) { goto L_804DE7D4; } // 804DE7CC
  goto L_804DE7E0; // 804DE7D0
L_804DE7D4:;
  c->r[31]=c->r[31]+0x00000010u; // 804DE7D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DE7C4; } // 804DE7D8
L_804DE7DC:;
  c->r[31]=0u+0x00000000u; // 804DE7DC
L_804DE7E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE7E0
  if (!crb(c,2)) { goto L_804DE7F0; } // 804DE7E4
  c->r[31]=0u+0x00000000u; // 804DE7E8
  goto L_804DE808; // 804DE7EC
L_804DE7F0:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 804DE7F0
  c->r[4]=c->r[31]|c->r[31]; // 804DE7F4
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 804DE7F8
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 804DE7FC
  c->lr=0x804DE804u; f_804D540C(c); // 804DE800
  c->r[31]=c->r[31]+0x00000010u; // 804DE804
L_804DE808:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE808
  if (crb(c,2)) { goto L_804DE8CC; } // 804DE80C
  goto L_804DE8B4; // 804DE810
L_804DE814:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 804DE814
  c->r[3]=c->r[26]|c->r[26]; // 804DE818
  c->r[5]=c->r[27]|c->r[27]; // 804DE81C
  c->r[12]=R32(c->r[12]+0x00000040u); // 804DE820
  c->ctr=c->r[12]; // 804DE824
  if (true) { c->lr=0x804DE82Cu; dispatch(c,c->ctr); } // 804DE828
  cmps(c,0,(int32_t)c->r[3],0); // 804DE82C
  if (crb(c,2)) { goto L_804DE8B4; } // 804DE830
  cmps(c,0,(int32_t)c->r[31],0); // 804DE834
  if (!crb(c,2)) { goto L_804DE840; } // 804DE838
  c->r[31]=R32(c->r[25]+0x00000018u); // 804DE83C
L_804DE840:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 804DE840
  c->r[4]=R32(c->r[25]+0x00000018u); // 804DE844
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804DE848
  c->r[4]=c->r[4]+c->r[0]; // 804DE84C
  c->r[0]=c->r[4]+0x0000000Fu; // 804DE850
  c->r[0]=c->r[0]-c->r[31]; // 804DE854
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804DE858
  c->ctr=c->r[0]; // 804DE85C
  cmpu(c,0,c->r[31],c->r[4]); // 804DE860
  if (!crb(c,0)) { goto L_804DE880; } // 804DE864
L_804DE868:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 804DE868
  cmps(c,0,(int32_t)c->r[0],0); // 804DE86C
  if (!crb(c,2)) { goto L_804DE878; } // 804DE870
  goto L_804DE884; // 804DE874
L_804DE878:;
  c->r[31]=c->r[31]+0x00000010u; // 804DE878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DE868; } // 804DE87C
L_804DE880:;
  c->r[31]=0u+0x00000000u; // 804DE880
L_804DE884:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE884
  if (!crb(c,2)) { goto L_804DE894; } // 804DE888
  c->r[31]=0u+0x00000000u; // 804DE88C
  goto L_804DE8AC; // 804DE890
L_804DE894:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 804DE894
  c->r[4]=c->r[31]|c->r[31]; // 804DE898
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 804DE89C
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 804DE8A0
  c->lr=0x804DE8A8u; f_804DDCB8(c); // 804DE8A4
  c->r[31]=c->r[31]+0x00000010u; // 804DE8A8
L_804DE8AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE8AC
  if (crb(c,2)) { goto L_804DE8CC; } // 804DE8B0
L_804DE8B4:;
  c->r[29]=c->r[29]+0x00000001u; // 804DE8B4
L_804DE8B8:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 804DE8B8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 804DE8BC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 804DE8C0
  cmpu(c,0,c->r[3],c->r[0]); // 804DE8C4
  if (crb(c,0)) { IRQCHK(c); goto L_804DE758; } // 804DE8C8
L_804DE8CC:;
  c->r[11]=c->r[1]+0x00000030u; // 804DE8CC
  c->lr=0x804DE8D4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DE8D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DE8D4
  c->lr=c->r[0]; // 804DE8D8
  c->r[1]=c->r[1]+0x00000030u; // 804DE8DC
  return; // 804DE8E0
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb
void f_804DE8E4(Ctx* __restrict c) {
  trace_call(0x804DE8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE8E4
  c->r[0]=c->lr; // 804DE8E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DE8EC
  c->r[11]=c->r[1]+0x00000020u; // 804DE8F0
  c->lr=0x804DE8F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DE8F4
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804DE8F8
  c->r[26]=c->r[3]|c->r[3]; // 804DE8FC
  c->r[27]=c->r[4]|c->r[4]; // 804DE900
  c->r[28]=c->r[5]|c->r[5]; // 804DE904
  c->r[0]=R32(c->r[6]+0x00000010u); // 804DE908
  c->r[31]=0u+0x00000000u; // 804DE90C
  c->r[29]=0u+0x00000000u; // 804DE910
  c->r[30]=c->r[6]+c->r[0]; // 804DE914
  goto L_804DE9CC; // 804DE918
L_804DE91C:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 804DE91C
  c->r[0]=R32(c->r[30]+c->r[0]); // 804DE920
  c->r[4]=c->r[4]+c->r[0]; // 804DE924
  c->r[0]=R8(c->r[4]+0x00000015u); // 804DE928
  cmpu(c,0,c->r[0],0x00000001u); // 804DE92C
  if (!crb(c,2)) { goto L_804DE9C8; } // 804DE930
  c->r[3]=c->r[27]+0x00000044u; // 804DE934
  c->lr=0x804DE93Cu; f_804DFCD4(c); // 804DE938
  cmps(c,0,(int32_t)c->r[3],0); // 804DE93C
  if (crb(c,2)) { goto L_804DE9C8; } // 804DE940
  cmps(c,0,(int32_t)c->r[31],0); // 804DE944
  if (!crb(c,2)) { goto L_804DE950; } // 804DE948
  c->r[31]=R32(c->r[26]+0x00000018u); // 804DE94C
L_804DE950:;
  c->r[0]=R16(c->r[26]+0x0000001Cu); // 804DE950
  c->r[3]=R32(c->r[26]+0x00000018u); // 804DE954
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804DE958
  c->r[3]=c->r[3]+c->r[0]; // 804DE95C
  c->r[0]=c->r[3]+0x0000000Fu; // 804DE960
  c->r[0]=c->r[0]-c->r[31]; // 804DE964
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804DE968
  c->ctr=c->r[0]; // 804DE96C
  cmpu(c,0,c->r[31],c->r[3]); // 804DE970
  if (!crb(c,0)) { goto L_804DE990; } // 804DE974
L_804DE978:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 804DE978
  cmps(c,0,(int32_t)c->r[0],0); // 804DE97C
  if (!crb(c,2)) { goto L_804DE988; } // 804DE980
  goto L_804DE994; // 804DE984
L_804DE988:;
  c->r[31]=c->r[31]+0x00000010u; // 804DE988
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DE978; } // 804DE98C
L_804DE990:;
  c->r[31]=0u+0x00000000u; // 804DE990
L_804DE994:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE994
  if (!crb(c,2)) { goto L_804DE9A4; } // 804DE998
  c->r[31]=0u+0x00000000u; // 804DE99C
  goto L_804DE9C0; // 804DE9A0
L_804DE9A4:;
  W32(c->r[31]+0x00000008u,c->r[26]); // 804DE9A4
  c->r[3]=c->r[27]|c->r[27]; // 804DE9A8
  c->r[4]=c->r[31]|c->r[31]; // 804DE9AC
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 804DE9B0
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 804DE9B4
  c->lr=0x804DE9BCu; f_804DDCB8(c); // 804DE9B8
  c->r[31]=c->r[31]+0x00000010u; // 804DE9BC
L_804DE9C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804DE9C0
  if (crb(c,2)) { goto L_804DE9E0; } // 804DE9C4
L_804DE9C8:;
  c->r[29]=c->r[29]+0x00000001u; // 804DE9C8
L_804DE9CC:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 804DE9CC
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 804DE9D0
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 804DE9D4
  cmpu(c,0,c->r[3],c->r[0]); // 804DE9D8
  if (crb(c,0)) { IRQCHK(c); goto L_804DE91C; } // 804DE9DC
L_804DE9E0:;
  c->r[11]=c->r[1]+0x00000020u; // 804DE9E0
  c->lr=0x804DE9E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DE9E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DE9E8
  c->lr=c->r[0]; // 804DE9EC
  c->r[1]=c->r[1]+0x00000020u; // 804DE9F0
  return; // 804DE9F4
}

// fn_804DE9F8
void f_804DE9F8(Ctx* __restrict c) {
  trace_call(0x804DE9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DE9F8
  c->r[0]=c->lr; // 804DE9FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 804DEA00
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 804DEA04
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 804DEA08
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 804DEA0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 804DEA10
  c->r[11]=c->r[1]+0x00000040u; // 804DEA14
  c->lr=0x804DEA1Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DEA18
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804DEA1C
  c->r[31]=0u+0x524C0000u; // 804DEA20
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804DEA24
  {uint32_t ea=c->r[2]+0x0000181Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804DEA28
  c->r[0]=R32(c->r[6]+0x00000010u); // 804DEA2C
  c->r[22]=c->r[3]|c->r[3]; // 804DEA30
  c->r[23]=c->r[5]|c->r[5]; // 804DEA34
  c->r[30]=c->r[31]+0x00005643u; // 804DEA38
  c->r[0]=c->r[6]+c->r[0]; // 804DEA3C
  c->r[24]=0u+0x00000000u; // 804DEA40
  c->r[0]=R32(c->r[4]+c->r[0]); // 804DEA44
  c->r[28]=c->r[6]+c->r[0]; // 804DEA48
  c->r[26]=c->r[28]+0x00000018u; // 804DEA4C
  goto L_804DEBB0; // 804DEA50
L_804DEA54:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 804DEA54
  c->r[3]=R32(c->r[28]+c->r[0]); // 804DEA58
  c->r[27]=c->r[28]+c->r[0]; // 804DEA5C
  c->r[25]=c->r[27]+0x00000008u; // 804DEA60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 804DEA64
  if (crb(c,2)) { goto L_804DEB3C; } // 804DEA68
  if (!crb(c,0)) { goto L_804DEA80; } // 804DEA6C
  c->r[0]=c->r[31]+0x00005041u; // 804DEA70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DEA74
  if (crb(c,2)) { goto L_804DEA90; } // 804DEA78
  goto L_804DEBA8; // 804DEA7C
L_804DEA80:;
  c->r[0]=c->r[31]+0x00005649u; // 804DEA80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DEA84
  if (crb(c,2)) { goto L_804DEAE0; } // 804DEA88
  goto L_804DEBA8; // 804DEA8C
L_804DEA90:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 804DEA90
  c->r[29]=0u+0x00000000u; // 804DEA94
  goto L_804DEAD0; // 804DEA98
L_804DEA9C:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804DEA9C
  c->f[1]=c->f[30]; // 804DEAA0
  c->r[21]=c->r[27]+c->r[0]; // 804DEAA4
  c->r[0]=R32(c->r[21]+0x00000008u); // 804DEAA8
  c->r[4]=R16(c->r[21]+0x00000004u); // 804DEAAC
  c->r[3]=c->r[21]+c->r[0]; // 804DEAB0
  c->lr=0x804DEAB8u; f_804DE30C(c); // 804DEAB4
  c->r[0]=R8(c->r[21]+0x00000001u); // 804DEAB8
  c->r[25]=c->r[25]+0x00000004u; // 804DEABC
  c->r[29]=c->r[29]+0x00000001u; // 804DEAC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804DEAC4
  c->r[3]=c->r[23]+c->r[0]; // 804DEAC8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 804DEACC
L_804DEAD0:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEAD0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DEAD4
  if (crb(c,0)) { IRQCHK(c); goto L_804DEA9C; } // 804DEAD8
  goto L_804DEBA8; // 804DEADC
L_804DEAE0:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 804DEAE0
  c->r[29]=0u+0x00000000u; // 804DEAE4
  goto L_804DEB2C; // 804DEAE8
L_804DEAEC:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804DEAEC
  c->f[1]=c->f[30]; // 804DEAF0
  c->r[3]=c->r[27]+c->r[0]; // 804DEAF4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804DEAF8
  c->r[4]=R16(c->r[3]+0x00000004u); // 804DEAFC
  c->r[3]=c->r[3]+c->r[0]; // 804DEB00
  c->lr=0x804DEB08u; f_804DE224(c); // 804DEB04
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 804DEB08
  c->r[0]=R8(c->r[23]+0x000000BBu); // 804DEB0C
  c->r[3]=0u-c->r[4]; // 804DEB10
  c->r[25]=c->r[25]+0x00000004u; // 804DEB14
  c->r[3]=c->r[3]|c->r[4]; // 804DEB18
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 804DEB1C
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 804DEB20
  c->r[29]=c->r[29]+0x00000001u; // 804DEB24
  W8(c->r[23]+0x000000BBu,c->r[0]); // 804DEB28
L_804DEB2C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEB2C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DEB30
  if (crb(c,0)) { IRQCHK(c); goto L_804DEAEC; } // 804DEB34
  goto L_804DEBA8; // 804DEB38
L_804DEB3C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEB3C
  c->r[29]=0u+0x00000000u; // 804DEB40
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 804DEB44
  cmps(c,0,(int32_t)c->r[0],0); // 804DEB48
  if (!crb(c,1)) { goto L_804DEBA8; } // 804DEB4C
  goto L_804DEB9C; // 804DEB50
L_804DEB54:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804DEB54
  c->f[1]=c->f[30]; // 804DEB58
  c->r[21]=c->r[27]+c->r[0]; // 804DEB5C
  c->r[0]=R32(c->r[21]+0x00000008u); // 804DEB60
  c->r[4]=R16(c->r[21]+0x00000004u); // 804DEB64
  c->r[3]=c->r[21]+c->r[0]; // 804DEB68
  c->lr=0x804DEB70u; f_804DE30C(c); // 804DEB6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 804DEB70
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 804DEB74
  c->r[3]=c->r[23]|c->r[23]; // 804DEB78
  c->r[12]=R32(c->r[23]+0x00000000u); // 804DEB7C
  c->r[5]=R8(c->r[1]+0x00000008u); // 804DEB80
  c->r[12]=R32(c->r[12]+0x00000030u); // 804DEB84
  c->r[4]=R8(c->r[21]+0x00000001u); // 804DEB88
  c->ctr=c->r[12]; // 804DEB8C
  if (true) { c->lr=0x804DEB94u; dispatch(c,c->ctr); } // 804DEB90
  c->r[25]=c->r[25]+0x00000004u; // 804DEB94
  c->r[29]=c->r[29]+0x00000001u; // 804DEB98
L_804DEB9C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEB9C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DEBA0
  if (crb(c,0)) { IRQCHK(c); goto L_804DEB54; } // 804DEBA4
L_804DEBA8:;
  c->r[26]=c->r[26]+0x00000004u; // 804DEBA8
  c->r[24]=c->r[24]+0x00000001u; // 804DEBAC
L_804DEBB0:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 804DEBB0
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 804DEBB4
  if (crb(c,0)) { IRQCHK(c); goto L_804DEA54; } // 804DEBB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 804DEBBC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 804DEBC0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 804DEBC4
  c->r[11]=c->r[1]+0x00000040u; // 804DEBC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 804DEBCC
  c->lr=0x804DEBD4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DEBD0
  c->r[0]=R32(c->r[1]+0x00000064u); // 804DEBD4
  c->lr=c->r[0]; // 804DEBD8
  c->r[1]=c->r[1]+0x00000060u; // 804DEBDC
  return; // 804DEBE0
}

// fn_804DEBE4
void f_804DEBE4(Ctx* __restrict c) {
  trace_call(0x804DEBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DEBE4
  c->r[0]=c->lr; // 804DEBE8
  W32(c->r[1]+0x00000084u,c->r[0]); // 804DEBEC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 804DEBF0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 804DEBF4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 804DEBF8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 804DEBFC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 804DEC00
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 804DEC04
  c->r[11]=c->r[1]+0x00000050u; // 804DEC08
  c->lr=0x804DEC10u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DEC0C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804DEC10
  c->r[31]=0u+0x524C0000u; // 804DEC14
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804DEC18
  {uint32_t ea=c->r[2]+0x0000181Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 804DEC1C
  c->r[0]=R32(c->r[6]+0x00000010u); // 804DEC20
  c->r[20]=c->r[3]|c->r[3]; // 804DEC24
  c->r[21]=c->r[5]|c->r[5]; // 804DEC28
  c->r[30]=c->r[31]+0x00005450u; // 804DEC2C
  c->r[0]=c->r[6]+c->r[0]; // 804DEC30
  c->r[22]=0u+0x00000000u; // 804DEC34
  c->r[0]=R32(c->r[4]+c->r[0]); // 804DEC38
  c->r[28]=c->r[6]+c->r[0]; // 804DEC3C
  c->r[25]=c->r[28]+0x00000018u; // 804DEC40
  goto L_804DEEA4; // 804DEC44
L_804DEC48:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 804DEC48
  c->r[3]=R32(c->r[28]+c->r[0]); // 804DEC4C
  c->r[27]=c->r[28]+c->r[0]; // 804DEC50
  c->r[24]=c->r[27]+0x00000008u; // 804DEC54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 804DEC58
  if (crb(c,2)) { goto L_804DED98; } // 804DEC5C
  if (!crb(c,0)) { goto L_804DEC84; } // 804DEC60
  c->r[0]=c->r[31]+0x00004D43u; // 804DEC64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DEC68
  if (crb(c,2)) { goto L_804DEC94; } // 804DEC6C
  if (!crb(c,0)) { goto L_804DEE9C; } // 804DEC70
  c->r[0]=c->r[31]+0x0000494Du; // 804DEC74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DEC78
  if (crb(c,2)) { goto L_804DEE28; } // 804DEC7C
  goto L_804DEE9C; // 804DEC80
L_804DEC84:;
  c->r[0]=c->r[31]+0x00005453u; // 804DEC84
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804DEC88
  if (crb(c,2)) { goto L_804DED20; } // 804DEC8C
  goto L_804DEE9C; // 804DEC90
L_804DEC94:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEC94
  c->r[19]=0u+0x00000000u; // 804DEC98
  {uint32_t ea=c->r[20]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 804DEC9C
  cmps(c,0,(int32_t)c->r[0],0); // 804DECA0
  if (!crb(c,1)) { goto L_804DEE9C; } // 804DECA4
  goto L_804DED10; // 804DECA8
L_804DECAC:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 804DECAC
  c->f[1]=c->f[31]; // 804DECB0
  c->r[23]=c->r[27]+c->r[0]; // 804DECB4
  c->r[0]=R32(c->r[23]+0x00000008u); // 804DECB8
  c->r[4]=R16(c->r[23]+0x00000004u); // 804DECBC
  c->r[3]=c->r[23]+c->r[0]; // 804DECC0
  c->lr=0x804DECC8u; f_804DE30C(c); // 804DECC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 804DECC8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 804DECCC
  c->r[6]=0u+0xFFFFFC00u; // 804DECD0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 804DECD4
  cmps(c,0,(int32_t)c->r[0],-1024); // 804DECD8
  if (crb(c,0)) { goto L_804DECE4; } // 804DECDC
  c->r[6]=c->r[0]|c->r[0]; // 804DECE0
L_804DECE4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 804DECE4
  c->r[4]=R8(c->r[23]+0x00000001u); // 804DECE8
  cmps(c,0,(int32_t)c->r[0],1023); // 804DECEC
  c->r[3]=c->r[21]|c->r[21]; // 804DECF0
  c->r[5]=0u+0x000003FFu; // 804DECF4
  if (crb(c,1)) { goto L_804DED00; } // 804DECF8
  c->r[5]=c->r[6]|c->r[6]; // 804DECFC
L_804DED00:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 804DED00
  c->lr=0x804DED08u; f_804DCB84(c); // 804DED04
  c->r[24]=c->r[24]+0x00000004u; // 804DED08
  c->r[19]=c->r[19]+0x00000001u; // 804DED0C
L_804DED10:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DED10
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 804DED14
  if (crb(c,0)) { IRQCHK(c); goto L_804DECAC; } // 804DED18
  goto L_804DEE9C; // 804DED1C
L_804DED20:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 804DED20
  c->r[29]=0u+0x00000000u; // 804DED24
  goto L_804DED88; // 804DED28
L_804DED2C:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 804DED2C
  c->r[0]=R32(c->r[21]+0x00000038u); // 804DED30
  c->r[23]=c->r[27]+c->r[3]; // 804DED34
  c->r[3]=R8(c->r[27]+c->r[3]); // 804DED38
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 804DED3C
  cmpu(c,0,c->r[3],c->r[0]); // 804DED40
  if (!crb(c,0)) { goto L_804DED80; } // 804DED44
  c->r[0]=R32(c->r[23]+0x00000008u); // 804DED48
  c->f[1]=c->f[29]; // 804DED4C
  c->r[4]=R16(c->r[23]+0x00000004u); // 804DED50
  c->r[3]=c->r[23]+c->r[0]; // 804DED54
  c->lr=0x804DED5Cu; f_804DE30C(c); // 804DED58
  c->f[31]=c->f[1]; // 804DED5C
  c->r[19]=R8(c->r[23]+0x00000001u); // 804DED60
  c->r[23]=R8(c->r[23]+0x00000000u); // 804DED64
  c->r[3]=c->r[21]|c->r[21]; // 804DED68
  c->lr=0x804DED70u; f_804DC5D0(c); // 804DED6C
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 804DED70
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 804DED74
  c->r[3]=c->r[3]+c->r[4]; // 804DED78
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 804DED7C
L_804DED80:;
  c->r[24]=c->r[24]+0x00000004u; // 804DED80
  c->r[29]=c->r[29]+0x00000001u; // 804DED84
L_804DED88:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DED88
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DED8C
  if (crb(c,0)) { IRQCHK(c); goto L_804DED2C; } // 804DED90
  goto L_804DEE9C; // 804DED94
L_804DED98:;
  c->r[23]=R32(c->r[20]+0x00000014u); // 804DED98
  cmps(c,0,(int32_t)c->r[23],0); // 804DED9C
  if (crb(c,2)) { goto L_804DEE9C; } // 804DEDA0
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 804DEDA4
  c->r[29]=0u+0x00000000u; // 804DEDA8
  goto L_804DEE18; // 804DEDAC
L_804DEDB0:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 804DEDB0
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 804DEDB4
  c->r[26]=c->r[27]+c->r[3]; // 804DEDB8
  c->r[3]=R8(c->r[27]+c->r[3]); // 804DEDBC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 804DEDC0
  cmpu(c,0,c->r[3],c->r[0]); // 804DEDC4
  if (!crb(c,0)) { goto L_804DEE10; } // 804DEDC8
  c->r[0]=R32(c->r[26]+0x00000008u); // 804DEDCC
  c->f[1]=c->f[29]; // 804DEDD0
  c->r[4]=R16(c->r[26]+0x00000004u); // 804DEDD4
  c->r[3]=c->r[26]+c->r[0]; // 804DEDD8
  c->lr=0x804DEDE0u; f_804DE224(c); // 804DEDDC
  c->r[19]=rotl(c->r[3],2)&0x0003FFFCu; // 804DEDE0
  c->r[0]=R32(c->r[23]+c->r[19]); // 804DEDE4
  cmps(c,0,(int32_t)c->r[0],0); // 804DEDE8
  if (crb(c,2)) { goto L_804DEE10; } // 804DEDEC
  c->r[26]=R8(c->r[26]+0x00000000u); // 804DEDF0
  c->r[3]=c->r[21]|c->r[21]; // 804DEDF4
  c->lr=0x804DEDFCu; f_804DC5B0(c); // 804DEDF8
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)28); // 804DEDFC
  c->r[4]=R32(c->r[23]+c->r[19]); // 804DEE00
  c->r[5]=0u+0x00000000u; // 804DEE04
  c->r[3]=c->r[3]+c->r[0]; // 804DEE08
  c->lr=0x804DEE10u; f_804DE0A0(c); // 804DEE0C
L_804DEE10:;
  c->r[24]=c->r[24]+0x00000004u; // 804DEE10
  c->r[29]=c->r[29]+0x00000001u; // 804DEE14
L_804DEE18:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEE18
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DEE1C
  if (crb(c,0)) { IRQCHK(c); goto L_804DEDB0; } // 804DEE20
  goto L_804DEE9C; // 804DEE24
L_804DEE28:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 804DEE28
  c->r[29]=0u+0x00000000u; // 804DEE2C
  goto L_804DEE90; // 804DEE30
L_804DEE34:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 804DEE34
  c->r[0]=R32(c->r[21]+0x00000038u); // 804DEE38
  c->r[23]=c->r[27]+c->r[3]; // 804DEE3C
  c->r[3]=R8(c->r[27]+c->r[3]); // 804DEE40
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 804DEE44
  cmpu(c,0,c->r[3],c->r[0]); // 804DEE48
  if (!crb(c,0)) { goto L_804DEE88; } // 804DEE4C
  c->r[0]=R32(c->r[23]+0x00000008u); // 804DEE50
  c->f[1]=c->f[29]; // 804DEE54
  c->r[4]=R16(c->r[23]+0x00000004u); // 804DEE58
  c->r[3]=c->r[23]+c->r[0]; // 804DEE5C
  c->lr=0x804DEE64u; f_804DE30C(c); // 804DEE60
  c->f[31]=c->f[1]; // 804DEE64
  c->r[19]=R8(c->r[23]+0x00000001u); // 804DEE68
  c->r[23]=R8(c->r[23]+0x00000000u); // 804DEE6C
  c->r[3]=c->r[21]|c->r[21]; // 804DEE70
  c->lr=0x804DEE78u; f_804DC78C(c); // 804DEE74
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 804DEE78
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 804DEE7C
  c->r[3]=c->r[3]+c->r[4]; // 804DEE80
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 804DEE84
L_804DEE88:;
  c->r[24]=c->r[24]+0x00000004u; // 804DEE88
  c->r[29]=c->r[29]+0x00000001u; // 804DEE8C
L_804DEE90:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 804DEE90
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804DEE94
  if (crb(c,0)) { IRQCHK(c); goto L_804DEE34; } // 804DEE98
L_804DEE9C:;
  c->r[25]=c->r[25]+0x00000004u; // 804DEE9C
  c->r[22]=c->r[22]+0x00000001u; // 804DEEA0
L_804DEEA4:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 804DEEA4
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 804DEEA8
  if (crb(c,0)) { IRQCHK(c); goto L_804DEC48; } // 804DEEAC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 804DEEB0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 804DEEB4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 804DEEB8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 804DEEBC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 804DEEC0
  c->r[11]=c->r[1]+0x00000050u; // 804DEEC4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 804DEEC8
  c->lr=0x804DEED0u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DEECC
  c->r[0]=R32(c->r[1]+0x00000084u); // 804DEED0
  c->lr=c->r[0]; // 804DEED4
  c->r[1]=c->r[1]+0x00000080u; // 804DEED8
  return; // 804DEEDC
}

// fn_804DEEE0
void f_804DEEE0(Ctx* __restrict c) {
  trace_call(0x804DEEE0u);
  c->r[0]=0u+0x00000000u; // 804DEEE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 804DEEE4
  W32(c->r[3]+0x00000004u,c->r[0]); // 804DEEE8
  W32(c->r[3]+0x00000008u,c->r[0]); // 804DEEEC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804DEEF0
  return; // 804DEEF4
}

// Set__Q34nw4r3lyt12AnimResourceFPCv
void f_804DEEF8(Ctx* __restrict c) {
  trace_call(0x804DEEF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DEEF8
  c->r[0]=c->lr; // 804DEEFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DEF00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DEF04
  c->r[31]=c->r[3]|c->r[3]; // 804DEF08
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DEF0C
  c->r[30]=0u+0x00000000u; // 804DEF10
  W32(c->r[1]+0x00000014u,c->r[29]); // 804DEF14
  c->r[29]=c->r[4]|c->r[4]; // 804DEF18
  c->r[4]=0u+0x524C0000u; // 804DEF1C
  W32(c->r[3]+0x00000000u,c->r[30]); // 804DEF20
  c->r[4]=c->r[4]+0x0000414Eu; // 804DEF24
  W32(c->r[3]+0x00000004u,c->r[30]); // 804DEF28
  W32(c->r[3]+0x00000008u,c->r[30]); // 804DEF2C
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 804DEF30
  c->r[3]=c->r[29]|c->r[29]; // 804DEF34
  c->lr=0x804DEF3Cu; f_804DFD00(c); // 804DEF38
  cmps(c,0,(int32_t)c->r[3],0); // 804DEF3C
  if (crb(c,2)) { goto L_804DEFEC; } // 804DEF40
  c->r[3]=R16(c->r[29]+0x00000006u); // 804DEF44
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; cr0(c,c->r[0]); // 804DEF48
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 804DEF4C
  if (!crb(c,2)) { goto L_804DEF68; } // 804DEF50
  cmpu(c,0,c->r[0],0x00000008u); // 804DEF54
  if (crb(c,0)) { goto L_804DEF68; } // 804DEF58
  cmpu(c,0,c->r[0],0x0000000Au); // 804DEF5C
  if (crb(c,1)) { goto L_804DEF68; } // 804DEF60
  c->r[30]=0u+0x00000001u; // 804DEF64
L_804DEF68:;
  cmps(c,0,(int32_t)c->r[30],0); // 804DEF68
  if (crb(c,2)) { goto L_804DEFEC; } // 804DEF6C
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 804DEF70
  c->r[3]=0u+0x70610000u; // 804DEF74
  W32(c->r[31]+0x00000000u,c->r[29]); // 804DEF78
  c->r[6]=c->r[3]+0x00006931u; // 804DEF7C
  c->r[7]=c->r[29]+c->r[0]; // 804DEF80
  c->r[4]=c->r[3]+0x00007431u; // 804DEF84
  c->r[5]=c->r[3]+0x00006831u; // 804DEF88
  c->r[8]=0u+0x00000000u; // 804DEF8C
  goto L_804DEFDC; // 804DEF90
L_804DEF94:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 804DEF94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 804DEF98
  if (crb(c,2)) { goto L_804DEFCC; } // 804DEF9C
  if (!crb(c,0)) { goto L_804DEFB0; } // 804DEFA0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804DEFA4
  if (crb(c,2)) { goto L_804DEFC4; } // 804DEFA8
  goto L_804DEFD0; // 804DEFAC
L_804DEFB0:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804DEFB0
  if (crb(c,2)) { goto L_804DEFBC; } // 804DEFB4
  goto L_804DEFD0; // 804DEFB8
L_804DEFBC:;
  W32(c->r[31]+0x00000008u,c->r[7]); // 804DEFBC
  goto L_804DEFD0; // 804DEFC0
L_804DEFC4:;
  W32(c->r[31]+0x0000000Cu,c->r[7]); // 804DEFC4
  goto L_804DEFD0; // 804DEFC8
L_804DEFCC:;
  W32(c->r[31]+0x00000004u,c->r[7]); // 804DEFCC
L_804DEFD0:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 804DEFD0
  c->r[8]=c->r[8]+0x00000001u; // 804DEFD4
  c->r[7]=c->r[7]+c->r[0]; // 804DEFD8
L_804DEFDC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 804DEFDC
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 804DEFE0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804DEFE4
  if (crb(c,0)) { IRQCHK(c); goto L_804DEF94; } // 804DEFE8
L_804DEFEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DEFEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DEFF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DEFF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804DEFF8
  c->lr=c->r[0]; // 804DEFFC
  c->r[1]=c->r[1]+0x00000020u; // 804DF000
  return; // 804DF004
}

// fn_804DF008
void f_804DF008(Ctx* __restrict c) {
  trace_call(0x804DF008u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 804DF008
  cmps(c,0,(int32_t)c->r[3],0); // 804DF00C
  if (crb(c,2)) { goto L_804DF01C; } // 804DF010
  c->r[3]=R16(c->r[3]+0x0000000Au); // 804DF014
  return; // 804DF018
L_804DF01C:;
  c->r[3]=0u+0x00000000u; // 804DF01C
  return; // 804DF020
}

// fn_804DF024
void f_804DF024(Ctx* __restrict c) {
  trace_call(0x804DF024u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 804DF024
  cmps(c,0,(int32_t)c->r[3],0); // 804DF028
  if (crb(c,2)) { goto L_804DF03C; } // 804DF02C
  c->r[0]=R32(c->r[3]+0x00000010u); // 804DF030
  c->r[3]=c->r[3]+c->r[0]; // 804DF034
  return; // 804DF038
L_804DF03C:;
  c->r[3]=0u+0x00000000u; // 804DF03C
  return; // 804DF040
}

// IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
void f_804DF044(Ctx* __restrict c) {
  trace_call(0x804DF044u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 804DF044
  cmps(c,0,(int32_t)c->r[3],0); // 804DF048
  if (crb(c,2)) { goto L_804DF05C; } // 804DF04C
  c->r[0]=R8(c->r[3]+0x00000018u); // 804DF050
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 804DF054
  return; // 804DF058
L_804DF05C:;
  c->r[3]=0u+0x00000000u; // 804DF05C
  return; // 804DF060
}

// fn_804DF064
void f_804DF064(Ctx* __restrict c) {
  trace_call(0x804DF064u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804DF064
  cmps(c,0,(int32_t)c->r[3],0); // 804DF068
  if (crb(c,2)) { goto L_804DF078; } // 804DF06C
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 804DF070
  return; // 804DF074
L_804DF078:;
  c->r[3]=0u+0x00000000u; // 804DF078
  return; // 804DF07C
}

// fn_804DF080
void f_804DF080(Ctx* __restrict c) {
  trace_call(0x804DF080u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804DF080
  cmps(c,0,(int32_t)c->r[3],0); // 804DF084
  if (crb(c,2)) { goto L_804DF098; } // 804DF088
  c->r[0]=R32(c->r[3]+0x00000008u); // 804DF08C
  c->r[3]=c->r[3]+c->r[0]; // 804DF090
  return; // 804DF094
L_804DF098:;
  c->r[3]=0u+0x00000000u; // 804DF098
  return; // 804DF09C
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb
void f_804DF0A0(Ctx* __restrict c) {
  trace_call(0x804DF0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF0A0
  c->r[0]=c->lr; // 804DF0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DF0A8
  c->r[11]=c->r[1]+0x00000020u; // 804DF0AC
  c->lr=0x804DF0B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF0B0
  c->r[6]=R32(c->r[3]+0x00000004u); // 804DF0B4
  c->r[26]=c->r[3]|c->r[3]; // 804DF0B8
  c->r[27]=c->r[4]|c->r[4]; // 804DF0BC
  c->r[28]=c->r[5]|c->r[5]; // 804DF0C0
  c->r[0]=R32(c->r[6]+0x00000010u); // 804DF0C4
  c->r[31]=0u+0x00000000u; // 804DF0C8
  c->r[29]=0u+0x00000000u; // 804DF0CC
  c->r[30]=c->r[6]+c->r[0]; // 804DF0D0
  goto L_804DF148; // 804DF0D4
L_804DF0D8:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 804DF0D8
  c->r[0]=R32(c->r[30]+c->r[0]); // 804DF0DC
  c->r[4]=c->r[4]+c->r[0]; // 804DF0E0
  c->r[0]=R8(c->r[4]+0x00000015u); // 804DF0E4
  cmps(c,0,(int32_t)c->r[0],0); // 804DF0E8
  if (!crb(c,2)) { goto L_804DF118; } // 804DF0EC
  c->r[12]=R32(c->r[27]+0x00000000u); // 804DF0F0
  c->r[3]=c->r[27]|c->r[27]; // 804DF0F4
  c->r[5]=c->r[28]|c->r[28]; // 804DF0F8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 804DF0FC
  c->ctr=c->r[12]; // 804DF100
  if (true) { c->lr=0x804DF108u; dispatch(c,c->ctr); } // 804DF104
  cmps(c,0,(int32_t)c->r[3],0); // 804DF108
  if (crb(c,2)) { goto L_804DF144; } // 804DF10C
  c->r[31]=c->r[31]+0x00000001u; // 804DF110
  goto L_804DF144; // 804DF114
L_804DF118:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 804DF118
  c->r[3]=c->r[27]|c->r[27]; // 804DF11C
  c->r[5]=c->r[28]|c->r[28]; // 804DF120
  c->r[12]=R32(c->r[12]+0x00000040u); // 804DF124
  c->ctr=c->r[12]; // 804DF128
  if (true) { c->lr=0x804DF130u; dispatch(c,c->ctr); } // 804DF12C
  cmps(c,0,(int32_t)c->r[3],0); // 804DF130
  if (crb(c,2)) { goto L_804DF144; } // 804DF134
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 804DF138
  c->r[0]=c->r[3]+0x00000001u; // 804DF13C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 804DF140
L_804DF144:;
  c->r[29]=c->r[29]+0x00000001u; // 804DF144
L_804DF148:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 804DF148
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 804DF14C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 804DF150
  cmpu(c,0,c->r[3],c->r[0]); // 804DF154
  if (crb(c,0)) { IRQCHK(c); goto L_804DF0D8; } // 804DF158
  c->r[11]=c->r[1]+0x00000020u; // 804DF15C
  c->r[3]=c->r[31]|c->r[31]; // 804DF160
  c->lr=0x804DF168u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF164
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DF168
  c->lr=c->r[0]; // 804DF16C
  c->r[1]=c->r[1]+0x00000020u; // 804DF170
  return; // 804DF174
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb
void f_804DF178(Ctx* __restrict c) {
  trace_call(0x804DF178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF178
  c->r[0]=c->lr; // 804DF17C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DF180
  c->r[11]=c->r[1]+0x00000020u; // 804DF184
  c->lr=0x804DF18Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF188
  c->r[31]=R32(c->r[4]+0x00000010u); // 804DF18C
  c->r[27]=c->r[3]|c->r[3]; // 804DF190
  c->r[28]=c->r[5]|c->r[5]; // 804DF194
  c->r[30]=c->r[4]+0x00000010u; // 804DF198
  c->r[29]=0u+0x00000000u; // 804DF19C
  goto L_804DF1BC; // 804DF1A0
L_804DF1A4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 804DF1A4
  c->r[3]=c->r[27]|c->r[27]; // 804DF1A8
  c->r[5]=c->r[28]|c->r[28]; // 804DF1AC
  c->lr=0x804DF1B4u; f_804DF0A0(c); // 804DF1B0
  c->r[29]=c->r[29]+c->r[3]; // 804DF1B4
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DF1B8
L_804DF1BC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804DF1BC
  if (!crb(c,2)) { IRQCHK(c); goto L_804DF1A4; } // 804DF1C0
  c->r[11]=c->r[1]+0x00000020u; // 804DF1C4
  c->r[3]=c->r[29]|c->r[29]; // 804DF1C8
  c->lr=0x804DF1D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF1CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DF1D0
  c->lr=c->r[0]; // 804DF1D4
  c->r[1]=c->r[1]+0x00000020u; // 804DF1D8
  return; // 804DF1DC
}

// Init__Q44nw4r3lyt6detail12AnimPaneTreeFv
void f_804DF1E0(Ctx* __restrict c) {
  trace_call(0x804DF1E0u);
  c->r[0]=0u+0x00000000u; // 804DF1E0
  W16(c->r[3]+0x00000012u,c->r[0]); // 804DF1E4
  W16(c->r[3]+0x00000010u,c->r[0]); // 804DF1E8
  W8(c->r[3]+0x00000026u,c->r[0]); // 804DF1EC
  W16(c->r[3]+0x00000014u,c->r[0]); // 804DF1F0
  W16(c->r[3]+0x00000016u,c->r[0]); // 804DF1F4
  W16(c->r[3]+0x00000018u,c->r[0]); // 804DF1F8
  W16(c->r[3]+0x0000001Au,c->r[0]); // 804DF1FC
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 804DF200
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 804DF204
  W16(c->r[3]+0x00000020u,c->r[0]); // 804DF208
  W16(c->r[3]+0x00000022u,c->r[0]); // 804DF20C
  W16(c->r[3]+0x00000024u,c->r[0]); // 804DF210
  return; // 804DF214
}

// Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
void f_804DF218(Ctx* __restrict c) {
  trace_call(0x804DF218u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF218
  c->r[0]=c->lr; // 804DF21C
  W32(c->r[1]+0x00000064u,c->r[0]); // 804DF220
  c->r[11]=c->r[1]+0x00000060u; // 804DF224
  c->lr=0x804DF22Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF228
  c->r[25]=R32(c->r[5]+0x00000004u); // 804DF22C
  c->r[18]=c->r[3]|c->r[3]; // 804DF230
  c->r[19]=c->r[4]|c->r[4]; // 804DF234
  c->r[20]=c->r[5]|c->r[5]; // 804DF238
  c->r[0]=R32(c->r[25]+0x00000010u); // 804DF23C
  c->r[21]=c->r[4]+0x000000BCu; // 804DF240
  c->r[22]=0u+0x00000000u; // 804DF244
  c->r[28]=0u+0x00000000u; // 804DF248
  c->r[23]=c->r[25]+c->r[0]; // 804DF24C
  goto L_804DF284; // 804DF250
L_804DF254:;
  c->r[0]=rotl(c->r[28],2)&0x0003FFFCu; // 804DF254
  c->r[0]=R32(c->r[23]+c->r[0]); // 804DF258
  c->r[3]=c->r[25]+c->r[0]; // 804DF25C
  c->r[0]=R8(c->r[3]+0x00000015u); // 804DF260
  cmps(c,0,(int32_t)c->r[0],0); // 804DF264
  if (!crb(c,2)) { goto L_804DF280; } // 804DF268
  c->r[4]=c->r[21]|c->r[21]; // 804DF26C
  c->lr=0x804DF274u; f_804DFCD4(c); // 804DF270
  cmps(c,0,(int32_t)c->r[3],0); // 804DF274
  if (crb(c,2)) { goto L_804DF280; } // 804DF278
  goto L_804DF29C; // 804DF27C
L_804DF280:;
  c->r[28]=c->r[28]+0x00000001u; // 804DF280
L_804DF284:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 804DF284
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 804DF288
  cmpu(c,0,c->r[3],c->r[0]); // 804DF28C
  if (crb(c,0)) { IRQCHK(c); goto L_804DF254; } // 804DF290
  c->r[3]=0u+0x00010000u; // 804DF294
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 804DF298
L_804DF29C:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 804DF29C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804DF2A0
  if (crb(c,2)) { goto L_804DF2AC; } // 804DF2A4
  c->r[22]=0u+0x00000001u; // 804DF2A8
L_804DF2AC:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 804DF2AC
  c->r[3]=c->r[19]|c->r[19]; // 804DF2B0
  c->r[12]=R32(c->r[12]+0x00000064u); // 804DF2B4
  c->ctr=c->r[12]; // 804DF2B8
  if (true) { c->lr=0x804DF2C0u; dispatch(c,c->ctr); } // 804DF2BC
  c->r[29]=c->r[3]|c->r[3]; // 804DF2C0
  c->r[23]=c->r[1]+0x00000008u; // 804DF2C4
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 804DF2C8
  c->r[21]=0u+0x00000000u; // 804DF2CC
  c->r[30]=0u+0x00010000u; // 804DF2D0
  goto L_804DF368; // 804DF2D4
L_804DF2D8:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 804DF2D8
  c->r[3]=c->r[19]|c->r[19]; // 804DF2DC
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 804DF2E0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 804DF2E4
  c->ctr=c->r[12]; // 804DF2E8
  if (true) { c->lr=0x804DF2F0u; dispatch(c,c->ctr); } // 804DF2EC
  c->r[0]=R32(c->r[25]+0x00000010u); // 804DF2F0
  c->r[24]=c->r[3]+0x00000044u; // 804DF2F4
  c->r[27]=0u+0x00000000u; // 804DF2F8
  c->r[26]=c->r[25]+c->r[0]; // 804DF2FC
  goto L_804DF334; // 804DF300
L_804DF304:;
  c->r[0]=rotl(c->r[27],2)&0x0003FFFCu; // 804DF304
  c->r[0]=R32(c->r[26]+c->r[0]); // 804DF308
  c->r[3]=c->r[25]+c->r[0]; // 804DF30C
  c->r[0]=R8(c->r[3]+0x00000015u); // 804DF310
  cmpu(c,0,c->r[0],0x00000001u); // 804DF314
  if (!crb(c,2)) { goto L_804DF330; } // 804DF318
  c->r[4]=c->r[24]|c->r[24]; // 804DF31C
  c->lr=0x804DF324u; f_804DFCD4(c); // 804DF320
  cmps(c,0,(int32_t)c->r[3],0); // 804DF324
  if (crb(c,2)) { goto L_804DF330; } // 804DF328
  goto L_804DF348; // 804DF32C
L_804DF330:;
  c->r[27]=c->r[27]+0x00000001u; // 804DF330
L_804DF334:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 804DF334
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 804DF338
  cmpu(c,0,c->r[3],c->r[0]); // 804DF33C
  if (crb(c,0)) { IRQCHK(c); goto L_804DF304; } // 804DF340
  c->r[27]=c->r[30]+0xFFFFFFFFu; // 804DF344
L_804DF348:;
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 804DF348
  c->r[3]=rotl(c->r[21],1)&0x000001FEu; // 804DF34C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804DF350
  W16(c->r[23]+c->r[3],c->r[27]); // 804DF354
  if (crb(c,2)) { goto L_804DF364; } // 804DF358
  c->r[0]=c->r[22]+0x00000001u; // 804DF35C
  c->r[22]=rotl(c->r[0],0)&0x0000FFFFu; // 804DF360
L_804DF364:;
  c->r[21]=c->r[21]+0x00000001u; // 804DF364
L_804DF368:;
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 804DF368
  cmpu(c,0,c->r[0],c->r[31]); // 804DF36C
  if (crb(c,0)) { IRQCHK(c); goto L_804DF2D8; } // 804DF370
  cmps(c,0,(int32_t)c->r[22],0); // 804DF374
  if (crb(c,2)) { goto L_804DF460; } // 804DF378
  c->r[6]=R32(c->r[20]+0x00000000u); // 804DF37C
  cmps(c,0,(int32_t)c->r[31],0); // 804DF380
  c->r[5]=R32(c->r[20]+0x00000004u); // 804DF384
  c->r[3]=0u+0x00000000u; // 804DF388
  c->r[4]=R32(c->r[20]+0x00000008u); // 804DF38C
  c->r[0]=R32(c->r[20]+0x0000000Cu); // 804DF390
  W32(c->r[18]+0x00000000u,c->r[6]); // 804DF394
  W32(c->r[18]+0x00000004u,c->r[5]); // 804DF398
  W32(c->r[18]+0x00000008u,c->r[4]); // 804DF39C
  W32(c->r[18]+0x0000000Cu,c->r[0]); // 804DF3A0
  W16(c->r[18]+0x00000010u,c->r[28]); // 804DF3A4
  W8(c->r[18]+0x00000026u,c->r[29]); // 804DF3A8
  if (crb(c,2)) { goto L_804DF45C; } // 804DF3AC
  cmpu(c,0,c->r[31],0x00000008u); // 804DF3B0
  c->r[0]=c->r[29]+0x000000F8u; // 804DF3B4
  if (!crb(c,1)) { goto L_804DF428; } // 804DF3B8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 804DF3BC
  c->r[0]=c->r[4]+0x00000007u; // 804DF3C0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804DF3C4
  c->ctr=c->r[0]; // 804DF3C8
  cmpu(c,0,c->r[4],0x00000000u); // 804DF3CC
  if (!crb(c,1)) { goto L_804DF428; } // 804DF3D0
L_804DF3D4:;
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 804DF3D4
  c->r[5]=c->r[1]+0x00000008u; // 804DF3D8
  {uint32_t ea=c->r[5]+c->r[0]; c->r[4]=R16(ea); c->r[5]=ea;} // 804DF3DC
  c->r[6]=c->r[18]+c->r[0]; // 804DF3E0
  c->r[3]=c->r[3]+0x00000008u; // 804DF3E4
  W16(c->r[6]+0x00000014u,c->r[4]); // 804DF3E8
  c->r[0]=R16(c->r[5]+0x00000002u); // 804DF3EC
  c->r[4]=R16(c->r[5]+0x00000004u); // 804DF3F0
  W16(c->r[6]+0x00000016u,c->r[0]); // 804DF3F4
  c->r[0]=R16(c->r[5]+0x00000006u); // 804DF3F8
  W16(c->r[6]+0x00000018u,c->r[4]); // 804DF3FC
  c->r[4]=R16(c->r[5]+0x00000008u); // 804DF400
  W16(c->r[6]+0x0000001Au,c->r[0]); // 804DF404
  c->r[0]=R16(c->r[5]+0x0000000Au); // 804DF408
  W16(c->r[6]+0x0000001Cu,c->r[4]); // 804DF40C
  c->r[4]=R16(c->r[5]+0x0000000Cu); // 804DF410
  W16(c->r[6]+0x0000001Eu,c->r[0]); // 804DF414
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 804DF418
  W16(c->r[6]+0x00000020u,c->r[4]); // 804DF41C
  W16(c->r[6]+0x00000022u,c->r[0]); // 804DF420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DF3D4; } // 804DF424
L_804DF428:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 804DF428
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 804DF42C
  c->r[0]=c->r[4]-c->r[5]; // 804DF430
  c->r[6]=c->r[1]+0x00000008u; // 804DF434
  c->ctr=c->r[0]; // 804DF438
  cmpu(c,0,c->r[5],c->r[4]); // 804DF43C
  if (!crb(c,0)) { goto L_804DF45C; } // 804DF440
L_804DF444:;
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 804DF444
  c->r[3]=c->r[3]+0x00000001u; // 804DF448
  c->r[0]=R16(c->r[6]+c->r[4]); // 804DF44C
  c->r[4]=c->r[18]+c->r[4]; // 804DF450
  W16(c->r[4]+0x00000014u,c->r[0]); // 804DF454
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DF444; } // 804DF458
L_804DF45C:;
  W16(c->r[18]+0x00000012u,c->r[22]); // 804DF45C
L_804DF460:;
  c->r[11]=c->r[1]+0x00000060u; // 804DF460
  c->lr=0x804DF468u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF464
  c->r[0]=R32(c->r[1]+0x00000064u); // 804DF468
  c->lr=c->r[0]; // 804DF46C
  c->r[1]=c->r[1]+0x00000060u; // 804DF470
  return; // 804DF474
}

// fn_804DF478
void f_804DF478(Ctx* __restrict c) {
  trace_call(0x804DF478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF478
  c->r[0]=c->lr; // 804DF47C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DF480
  c->r[11]=c->r[1]+0x00000030u; // 804DF484
  c->lr=0x804DF48Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF488
  c->r[12]=R32(c->r[4]+0x00000000u); // 804DF48C
  c->r[27]=c->r[3]|c->r[3]; // 804DF490
  c->r[3]=c->r[4]|c->r[4]; // 804DF494
  c->r[28]=c->r[5]|c->r[5]; // 804DF498
  c->r[12]=R32(c->r[12]+0x00000010u); // 804DF49C
  c->r[24]=c->r[6]|c->r[6]; // 804DF4A0
  c->ctr=c->r[12]; // 804DF4A4
  if (true) { c->lr=0x804DF4ACu; dispatch(c,c->ctr); } // 804DF4A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804DF4AC
  c->r[31]=c->r[3]|c->r[3]; // 804DF4B0
  c->r[5]=c->r[24]|c->r[24]; // 804DF4B4
  c->r[4]=R32(c->r[27]+0x00000004u); // 804DF4B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804DF4BC
  c->r[6]=R16(c->r[27]+0x00000012u); // 804DF4C0
  c->ctr=c->r[12]; // 804DF4C4
  if (true) { c->lr=0x804DF4CCu; dispatch(c,c->ctr); } // 804DF4C8
  c->r[5]=R16(c->r[27]+0x00000010u); // 804DF4CC
  c->r[30]=0u+0x00000000u; // 804DF4D0
  cmpu(c,0,c->r[5],0x0000FFFFu); // 804DF4D4
  if (crb(c,2)) { goto L_804DF550; } // 804DF4D8
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 804DF4DC
  c->r[25]=R32(c->r[31]+0x00000018u); // 804DF4E0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804DF4E4
  c->r[3]=c->r[25]+c->r[0]; // 804DF4E8
  c->r[0]=c->r[3]+0x0000000Fu; // 804DF4EC
  c->r[0]=c->r[0]-c->r[25]; // 804DF4F0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804DF4F4
  c->ctr=c->r[0]; // 804DF4F8
  cmpu(c,0,c->r[25],c->r[3]); // 804DF4FC
  if (!crb(c,0)) { goto L_804DF51C; } // 804DF500
L_804DF504:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 804DF504
  cmps(c,0,(int32_t)c->r[0],0); // 804DF508
  if (!crb(c,2)) { goto L_804DF514; } // 804DF50C
  goto L_804DF520; // 804DF510
L_804DF514:;
  c->r[25]=c->r[25]+0x00000010u; // 804DF514
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DF504; } // 804DF518
L_804DF51C:;
  c->r[25]=0u+0x00000000u; // 804DF51C
L_804DF520:;
  cmps(c,0,(int32_t)c->r[25],0); // 804DF520
  if (!crb(c,2)) { goto L_804DF530; } // 804DF524
  c->r[30]=0u+0x00000000u; // 804DF528
  goto L_804DF550; // 804DF52C
L_804DF530:;
  W32(c->r[25]+0x00000008u,c->r[31]); // 804DF530
  c->r[0]=0u+0x00000001u; // 804DF534
  c->r[3]=c->r[28]|c->r[28]; // 804DF538
  c->r[4]=c->r[25]|c->r[25]; // 804DF53C
  W16(c->r[25]+0x0000000Cu,c->r[5]); // 804DF540
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 804DF544
  c->lr=0x804DF54Cu; f_804D540C(c); // 804DF548
  c->r[30]=c->r[25]+0x00000010u; // 804DF54C
L_804DF550:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 804DF550
  c->r[3]=c->r[28]|c->r[28]; // 804DF554
  c->r[12]=R32(c->r[12]+0x00000064u); // 804DF558
  c->ctr=c->r[12]; // 804DF55C
  if (true) { c->lr=0x804DF564u; dispatch(c,c->ctr); } // 804DF560
  c->r[4]=R8(c->r[27]+0x00000026u); // 804DF564
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 804DF568
  cmpu(c,0,c->r[4],c->r[0]); // 804DF56C
  if (!crb(c,1)) { goto L_804DF578; } // 804DF570
  c->r[4]=c->r[3]|c->r[3]; // 804DF574
L_804DF578:;
  c->r[26]=rotl(c->r[4],0)&0x000000FFu; // 804DF578
  c->r[29]=0u+0x00000000u; // 804DF57C
  c->r[25]=0u+0x00000001u; // 804DF580
  goto L_804DF634; // 804DF584
L_804DF588:;
  c->r[0]=rotl(c->r[29],1)&0x000001FEu; // 804DF588
  c->r[24]=c->r[27]+c->r[0]; // 804DF58C
  c->r[0]=R16(c->r[24]+0x00000014u); // 804DF590
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804DF594
  if (crb(c,2)) { goto L_804DF630; } // 804DF598
  c->r[12]=R32(c->r[28]+0x00000000u); // 804DF59C
  c->r[3]=c->r[28]|c->r[28]; // 804DF5A0
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 804DF5A4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 804DF5A8
  c->ctr=c->r[12]; // 804DF5AC
  if (true) { c->lr=0x804DF5B4u; dispatch(c,c->ctr); } // 804DF5B0
  cmps(c,0,(int32_t)c->r[30],0); // 804DF5B4
  c->r[5]=R16(c->r[24]+0x00000014u); // 804DF5B8
  if (!crb(c,2)) { goto L_804DF5C4; } // 804DF5BC
  c->r[30]=R32(c->r[31]+0x00000018u); // 804DF5C0
L_804DF5C4:;
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 804DF5C4
  c->r[4]=R32(c->r[31]+0x00000018u); // 804DF5C8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 804DF5CC
  c->r[4]=c->r[4]+c->r[0]; // 804DF5D0
  c->r[0]=c->r[4]+0x0000000Fu; // 804DF5D4
  c->r[0]=c->r[0]-c->r[30]; // 804DF5D8
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804DF5DC
  c->ctr=c->r[0]; // 804DF5E0
  cmpu(c,0,c->r[30],c->r[4]); // 804DF5E4
  if (!crb(c,0)) { goto L_804DF604; } // 804DF5E8
L_804DF5EC:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 804DF5EC
  cmps(c,0,(int32_t)c->r[0],0); // 804DF5F0
  if (!crb(c,2)) { goto L_804DF5FC; } // 804DF5F4
  goto L_804DF608; // 804DF5F8
L_804DF5FC:;
  c->r[30]=c->r[30]+0x00000010u; // 804DF5FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DF5EC; } // 804DF600
L_804DF604:;
  c->r[30]=0u+0x00000000u; // 804DF604
L_804DF608:;
  cmps(c,0,(int32_t)c->r[30],0); // 804DF608
  if (!crb(c,2)) { goto L_804DF618; } // 804DF60C
  c->r[30]=0u+0x00000000u; // 804DF610
  goto L_804DF630; // 804DF614
L_804DF618:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 804DF618
  c->r[4]=c->r[30]|c->r[30]; // 804DF61C
  W16(c->r[30]+0x0000000Cu,c->r[5]); // 804DF620
  W8(c->r[30]+0x0000000Eu,c->r[25]); // 804DF624
  c->lr=0x804DF62Cu; f_804DDCB8(c); // 804DF628
  c->r[30]=c->r[30]+0x00000010u; // 804DF62C
L_804DF630:;
  c->r[29]=c->r[29]+0x00000001u; // 804DF630
L_804DF634:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 804DF634
  cmpu(c,0,c->r[0],c->r[26]); // 804DF638
  if (crb(c,0)) { IRQCHK(c); goto L_804DF588; } // 804DF63C
  c->r[11]=c->r[1]+0x00000030u; // 804DF640
  c->r[3]=c->r[31]|c->r[31]; // 804DF644
  c->lr=0x804DF64Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF648
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DF64C
  c->lr=c->r[0]; // 804DF650
  c->r[1]=c->r[1]+0x00000030u; // 804DF654
  return; // 804DF658
}

// fn_804DF65C
void f_804DF65C(Ctx* __restrict c) {
  trace_call(0x804DF65Cu);
  c->r[5]=R32(c->r[3]+0x00000004u); // 804DF65C
  c->r[0]=c->r[3]+0x00000004u; // 804DF660
  goto L_804DF680; // 804DF664
L_804DF668:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 804DF668
  cmpu(c,0,c->r[4],c->r[3]); // 804DF66C
  if (!crb(c,2)) { goto L_804DF67C; } // 804DF670
  c->r[3]=c->r[5]|c->r[5]; // 804DF674
  return; // 804DF678
L_804DF67C:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 804DF67C
L_804DF680:;
  cmpu(c,0,c->r[5],c->r[0]); // 804DF680
  if (!crb(c,2)) { IRQCHK(c); goto L_804DF668; } // 804DF684
  c->r[3]=0u+0x00000000u; // 804DF688
  return; // 804DF68C
}

// FindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>RCQ34nw4r3lyt12AnimResource
void f_804DF690(Ctx* __restrict c) {
  trace_call(0x804DF690u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 804DF690
  c->r[0]=c->r[3]+0x00000004u; // 804DF694
  goto L_804DF6BC; // 804DF698
L_804DF69C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 804DF69C
  c->r[6]=R32(c->r[4]+0x00000004u); // 804DF6A0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804DF6A4
  cmpu(c,0,c->r[6],c->r[3]); // 804DF6A8
  if (!crb(c,2)) { goto L_804DF6B8; } // 804DF6AC
  c->r[3]=c->r[5]|c->r[5]; // 804DF6B0
  return; // 804DF6B4
L_804DF6B8:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 804DF6B8
L_804DF6BC:;
  cmpu(c,0,c->r[5],c->r[0]); // 804DF6BC
  if (!crb(c,2)) { IRQCHK(c); goto L_804DF69C; } // 804DF6C0
  c->r[3]=0u+0x00000000u; // 804DF6C4
  return; // 804DF6C8
}

// UnbindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>PQ34nw4r3lyt13AnimTransform
void f_804DF6CC(Ctx* __restrict c) {
  trace_call(0x804DF6CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF6CC
  c->r[0]=c->lr; // 804DF6D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804DF6D4
  c->r[11]=c->r[1]+0x00000030u; // 804DF6D8
  c->lr=0x804DF6E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF6DC
  c->r[31]=R32(c->r[3]+0x00000004u); // 804DF6E0
  c->r[26]=c->r[3]|c->r[3]; // 804DF6E4
  c->r[27]=c->r[4]|c->r[4]; // 804DF6E8
  c->r[30]=c->r[3]+0x00000004u; // 804DF6EC
  c->r[29]=0u+0x00000000u; // 804DF6F0
  goto L_804DF730; // 804DF6F4
L_804DF6F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 804DF6F8
  c->r[28]=c->r[31]|c->r[31]; // 804DF6FC
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DF700
  if (crb(c,2)) { goto L_804DF714; } // 804DF704
  c->r[0]=R32(c->r[28]+0x00000008u); // 804DF708
  cmpu(c,0,c->r[0],c->r[27]); // 804DF70C
  if (!crb(c,2)) { goto L_804DF730; } // 804DF710
L_804DF714:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 804DF714
  c->r[3]=c->r[26]|c->r[26]; // 804DF718
  c->r[4]=c->r[1]+0x00000008u; // 804DF71C
  c->lr=0x804DF724u; f_80507E50(c); // 804DF720
  W32(c->r[28]+0x00000008u,c->r[29]); // 804DF724
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 804DF728
  W8(c->r[28]+0x0000000Eu,c->r[29]); // 804DF72C
L_804DF730:;
  cmpu(c,0,c->r[31],c->r[30]); // 804DF730
  if (!crb(c,2)) { IRQCHK(c); goto L_804DF6F8; } // 804DF734
  c->r[11]=c->r[1]+0x00000030u; // 804DF738
  c->lr=0x804DF740u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF73C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804DF740
  c->lr=c->r[0]; // 804DF744
  c->r[1]=c->r[1]+0x00000030u; // 804DF748
  return; // 804DF74C
}

// fn_804DF750
void f_804DF750(Ctx* __restrict c) {
  trace_call(0x804DF750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF750
  c->r[0]=c->lr; // 804DF754
  cmps(c,0,(int32_t)c->r[3],0); // 804DF758
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DF75C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DF760
  c->r[31]=c->r[3]|c->r[3]; // 804DF764
  if (crb(c,2)) { goto L_804DF778; } // 804DF768
  cmps(c,0,(int32_t)c->r[4],0); // 804DF76C
  if (!crb(c,1)) { goto L_804DF778; } // 804DF770
  c->lr=0x804DF778u; f_803A9400(c); // 804DF774
L_804DF778:;
  c->r[3]=c->r[31]|c->r[31]; // 804DF778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DF77C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DF780
  c->lr=c->r[0]; // 804DF784
  c->r[1]=c->r[1]+0x00000010u; // 804DF788
  return; // 804DF78C
}

// fn_804DF790
void f_804DF790(Ctx* __restrict c) {
  trace_call(0x804DF790u);
  c->r[4]=0u+0x80720000u; // 804DF790
  c->r[4]=c->r[4]+0xFFFFAA28u; // 804DF794
  W32(c->r[3]+0x00000000u,c->r[4]); // 804DF798
  return; // 804DF79C
}

// fn_804DF7A0
void f_804DF7A0(Ctx* __restrict c) {
  trace_call(0x804DF7A0u);
  c->r[3]=0u+0x00000000u; // 804DF7A0
  return; // 804DF7A4
}

// fn_804DF7A8
void f_804DF7A8(Ctx* __restrict c) {
  trace_call(0x804DF7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF7A8
  c->r[0]=c->lr; // 804DF7AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 804DF7B0
  c->r[5]=c->r[1]+0x00000018u; // 804DF7B4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804DF7B8
  c->r[31]=0u+0xFFFFFFFFu; // 804DF7BC
  W32(c->r[1]+0x00000038u,c->r[30]); // 804DF7C0
  c->r[30]=c->r[4]|c->r[4]; // 804DF7C4
  c->r[4]=c->r[13]+0xFFFFA2D8u; // 804DF7C8
  W32(c->r[1]+0x00000034u,c->r[29]); // 804DF7CC
  c->r[29]=c->r[3]|c->r[3]; // 804DF7D0
  c->lr=0x804DF7D8u; f_80414444(c); // 804DF7D4
  goto L_804DF838; // 804DF7D8
L_804DF7DC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 804DF7DC
  cmps(c,0,(int32_t)c->r[0],0); // 804DF7E0
  if (crb(c,2)) { goto L_804DF81C; } // 804DF7E4
  c->r[4]=R32(c->r[1]+0x00000014u); // 804DF7E8
  c->r[3]=c->r[29]|c->r[29]; // 804DF7EC
  c->lr=0x804DF7F4u; f_804143EC(c); // 804DF7F0
  c->r[3]=c->r[29]|c->r[29]; // 804DF7F4
  c->r[4]=c->r[30]|c->r[30]; // 804DF7F8
  c->lr=0x804DF800u; f_804DF7A8(c); // 804DF7FC
  c->r[31]=c->r[3]|c->r[3]; // 804DF800
  c->r[3]=c->r[29]|c->r[29]; // 804DF804
  c->r[4]=c->r[13]+0xFFFFA2DCu; // 804DF808
  c->lr=0x804DF810u; f_804143EC(c); // 804DF80C
  cmps(c,0,(int32_t)c->r[31],-1); // 804DF810
  if (!crb(c,2)) { goto L_804DF84C; } // 804DF814
  goto L_804DF838; // 804DF818
L_804DF81C:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 804DF81C
  c->r[3]=c->r[30]|c->r[30]; // 804DF820
  c->lr=0x804DF828u; f_803BA9B0(c); // 804DF824
  cmps(c,0,(int32_t)c->r[3],0); // 804DF828
  if (!crb(c,2)) { goto L_804DF838; } // 804DF82C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DF830
  goto L_804DF84C; // 804DF834
L_804DF838:;
  c->r[3]=c->r[1]+0x00000018u; // 804DF838
  c->r[4]=c->r[1]+0x00000008u; // 804DF83C
  c->lr=0x804DF844u; f_804144C0(c); // 804DF840
  cmps(c,0,(int32_t)c->r[3],0); // 804DF844
  if (!crb(c,2)) { IRQCHK(c); goto L_804DF7DC; } // 804DF848
L_804DF84C:;
  c->r[3]=c->r[1]+0x00000018u; // 804DF84C
  c->lr=0x804DF854u; f_80414578(c); // 804DF850
  c->r[3]=c->r[31]|c->r[31]; // 804DF854
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804DF858
  c->r[30]=R32(c->r[1]+0x00000038u); // 804DF85C
  c->r[29]=R32(c->r[1]+0x00000034u); // 804DF860
  c->r[0]=R32(c->r[1]+0x00000044u); // 804DF864
  c->lr=c->r[0]; // 804DF868
  c->r[1]=c->r[1]+0x00000040u; // 804DF86C
  return; // 804DF870
}

// fn_804DF874
void f_804DF874(Ctx* __restrict c) {
  trace_call(0x804DF874u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF874
  c->r[0]=c->lr; // 804DF878
  W32(c->r[1]+0x00000044u,c->r[0]); // 804DF87C
  c->r[11]=c->r[1]+0x00000040u; // 804DF880
  c->lr=0x804DF888u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DF884
  c->r[26]=c->r[3]|c->r[3]; // 804DF888
  c->r[27]=c->r[4]|c->r[4]; // 804DF88C
  c->r[28]=c->r[5]|c->r[5]; // 804DF890
  c->r[29]=c->r[6]|c->r[6]; // 804DF894
  c->r[30]=c->r[7]|c->r[7]; // 804DF898
  c->r[31]=0u+0xFFFFFFFFu; // 804DF89C
  c->lr=0x804DF8A4u; f_80413D68(c); // 804DF8A0
  cmps(c,0,(int32_t)c->r[3],-1); // 804DF8A4
  if (crb(c,2)) { goto L_804DF950; } // 804DF8A8
  c->r[3]=c->r[26]|c->r[26]; // 804DF8AC
  c->r[4]=c->r[27]|c->r[27]; // 804DF8B0
  c->lr=0x804DF8B8u; f_804143EC(c); // 804DF8B4
  cmps(c,0,(int32_t)c->r[3],0); // 804DF8B8
  if (crb(c,2)) { goto L_804DF950; } // 804DF8BC
  cmps(c,0,(int32_t)c->r[28],0); // 804DF8C0
  if (!crb(c,2)) { goto L_804DF8DC; } // 804DF8C4
  c->r[3]=c->r[26]|c->r[26]; // 804DF8C8
  c->r[4]=c->r[29]|c->r[29]; // 804DF8CC
  c->lr=0x804DF8D4u; f_804DF7A8(c); // 804DF8D0
  c->r[31]=c->r[3]|c->r[3]; // 804DF8D4
  goto L_804DF944; // 804DF8D8
L_804DF8DC:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 804DF8DC
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 804DF8E0
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 804DF8E4
  c->r[0]=0u+0x00000000u; // 804DF8E8
  W8(c->r[1]+0x00000008u,c->r[3]); // 804DF8EC
  c->r[3]=c->r[26]|c->r[26]; // 804DF8F0
  c->r[4]=c->r[1]+0x00000008u; // 804DF8F4
  W8(c->r[1]+0x00000009u,c->r[6]); // 804DF8F8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 804DF8FC
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 804DF900
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 804DF904
  c->lr=0x804DF90Cu; f_80413D68(c); // 804DF908
  cmps(c,0,(int32_t)c->r[3],-1); // 804DF90C
  if (crb(c,2)) { goto L_804DF944; } // 804DF910
  c->r[3]=c->r[26]|c->r[26]; // 804DF914
  c->r[4]=c->r[1]+0x00000008u; // 804DF918
  c->lr=0x804DF920u; f_804143EC(c); // 804DF91C
  cmps(c,0,(int32_t)c->r[3],0); // 804DF920
  if (crb(c,2)) { goto L_804DF944; } // 804DF924
  c->r[3]=c->r[26]|c->r[26]; // 804DF928
  c->r[4]=c->r[29]|c->r[29]; // 804DF92C
  c->lr=0x804DF934u; f_80413D68(c); // 804DF930
  c->r[31]=c->r[3]|c->r[3]; // 804DF934
  c->r[3]=c->r[26]|c->r[26]; // 804DF938
  c->r[4]=c->r[13]+0xFFFFA2DCu; // 804DF93C
  c->lr=0x804DF944u; f_804143EC(c); // 804DF940
L_804DF944:;
  c->r[3]=c->r[26]|c->r[26]; // 804DF944
  c->r[4]=c->r[13]+0xFFFFA2DCu; // 804DF948
  c->lr=0x804DF950u; f_804143EC(c); // 804DF94C
L_804DF950:;
  cmps(c,0,(int32_t)c->r[31],-1); // 804DF950
  if (crb(c,2)) { goto L_804DF998; } // 804DF954
  c->r[3]=c->r[26]|c->r[26]; // 804DF958
  c->r[4]=c->r[31]|c->r[31]; // 804DF95C
  c->r[5]=c->r[1]+0x00000010u; // 804DF960
  c->lr=0x804DF968u; f_80413D18(c); // 804DF964
  c->r[3]=c->r[1]+0x00000010u; // 804DF968
  c->lr=0x804DF970u; f_804143C8(c); // 804DF96C
  cmps(c,0,(int32_t)c->r[30],0); // 804DF970
  c->r[31]=c->r[3]|c->r[3]; // 804DF974
  if (crb(c,2)) { goto L_804DF988; } // 804DF978
  c->r[3]=c->r[1]+0x00000010u; // 804DF97C
  c->lr=0x804DF984u; f_804143DC(c); // 804DF980
  W32(c->r[30]+0x00000000u,c->r[3]); // 804DF984
L_804DF988:;
  c->r[3]=c->r[1]+0x00000010u; // 804DF988
  c->lr=0x804DF990u; f_804143E4(c); // 804DF98C
  c->r[3]=c->r[31]|c->r[31]; // 804DF990
  goto L_804DF99C; // 804DF994
L_804DF998:;
  c->r[3]=0u+0x00000000u; // 804DF998
L_804DF99C:;
  c->r[11]=c->r[1]+0x00000040u; // 804DF99C
  c->lr=0x804DF9A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DF9A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804DF9A4
  c->lr=c->r[0]; // 804DF9A8
  c->r[1]=c->r[1]+0x00000040u; // 804DF9AC
  return; // 804DF9B0
}

// fn_804DF9B4
void f_804DF9B4(Ctx* __restrict c) {
  trace_call(0x804DF9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DF9B4
  c->r[0]=c->lr; // 804DF9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DF9BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DF9C0
  c->r[31]=c->r[5]|c->r[5]; // 804DF9C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DF9C8
  c->r[30]=c->r[3]|c->r[3]; // 804DF9CC
  c->r[3]=c->r[4]|c->r[4]; // 804DF9D0
  c->r[4]=c->r[30]+0x00000008u; // 804DF9D4
  c->lr=0x804DF9DCu; f_804139D4(c); // 804DF9D8
  cmps(c,0,(int32_t)c->r[3],0); // 804DF9DC
  if (!crb(c,2)) { goto L_804DF9EC; } // 804DF9E0
  c->r[3]=0u+0x00000000u; // 804DF9E4
  goto L_804DFA08; // 804DF9E8
L_804DF9EC:;
  c->r[4]=c->r[31]|c->r[31]; // 804DF9EC
  c->r[3]=c->r[30]+0x00000024u; // 804DF9F0
  c->r[5]=0u+0x0000007Fu; // 804DF9F4
  c->lr=0x804DF9FCu; f_803B3880(c); // 804DF9F8
  c->r[0]=0u+0x00000000u; // 804DF9FC
  c->r[3]=0u+0x00000001u; // 804DFA00
  W8(c->r[30]+0x000000A3u,c->r[0]); // 804DFA04
L_804DFA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DFA0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DFA10
  c->lr=c->r[0]; // 804DFA14
  c->r[1]=c->r[1]+0x00000010u; // 804DFA18
  return; // 804DFA1C
}

// fn_804DFA20
void f_804DFA20(Ctx* __restrict c) {
  trace_call(0x804DFA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFA20
  c->r[0]=c->lr; // 804DFA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DFA2C
  c->r[31]=c->r[3]|c->r[3]; // 804DFA30
  c->lr=0x804DFA38u; f_804DF790(c); // 804DFA34
  c->r[0]=0u+0x00000000u; // 804DFA38
  c->r[4]=0u+0x80720000u; // 804DFA3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 804DFA40
  c->r[5]=c->r[31]+0x00000008u; // 804DFA44
  c->r[4]=c->r[4]+0xFFFFAA40u; // 804DFA48
  c->r[6]=c->r[31]+0x00000014u; // 804DFA4C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 804DFA50
  c->r[3]=c->r[31]|c->r[31]; // 804DFA54
  W32(c->r[31]+0x00000014u,c->r[0]); // 804DFA58
  W32(c->r[31]+0x00000018u,c->r[0]); // 804DFA5C
  W32(c->r[31]+0x00000000u,c->r[4]); // 804DFA60
  W32(c->r[31]+0x00000004u,c->r[0]); // 804DFA64
  W32(c->r[31]+0x00000008u,c->r[5]); // 804DFA68
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 804DFA6C
  W32(c->r[31]+0x00000010u,c->r[0]); // 804DFA70
  W32(c->r[31]+0x00000014u,c->r[6]); // 804DFA74
  W32(c->r[31]+0x00000018u,c->r[6]); // 804DFA78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DFA7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFA80
  c->lr=c->r[0]; // 804DFA84
  c->r[1]=c->r[1]+0x00000010u; // 804DFA88
  return; // 804DFA8C
}

// fn_804DFA90
void f_804DFA90(Ctx* __restrict c) {
  trace_call(0x804DFA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFA90
  c->r[0]=c->lr; // 804DFA94
  cmps(c,0,(int32_t)c->r[3],0); // 804DFA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DFAA0
  c->r[31]=c->r[4]|c->r[4]; // 804DFAA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DFAA8
  c->r[30]=c->r[3]|c->r[3]; // 804DFAAC
  if (crb(c,2)) { goto L_804DFB04; } // 804DFAB0
  c->r[4]=0u+0x80720000u; // 804DFAB4
  c->r[4]=c->r[4]+0xFFFFAA40u; // 804DFAB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 804DFABC
  c->r[3]=c->r[3]+0x00000004u; // 804DFAC0
  c->lr=0x804DFAC8u; f_80507E98(c); // 804DFAC4
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 804DFAC8
  if (crb(c,2)) { goto L_804DFAD8; } // 804DFACC
  c->r[4]=0u+0x00000000u; // 804DFAD0
  c->lr=0x804DFAD8u; f_80507DCC(c); // 804DFAD4
L_804DFAD8:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 804DFAD8
  if (crb(c,2)) { goto L_804DFAE8; } // 804DFADC
  c->r[4]=0u+0x00000000u; // 804DFAE0
  c->lr=0x804DFAE8u; f_80507DCC(c); // 804DFAE4
L_804DFAE8:;
  c->r[3]=c->r[30]|c->r[30]; // 804DFAE8
  c->r[4]=0u+0x00000000u; // 804DFAEC
  c->lr=0x804DFAF4u; f_804DF750(c); // 804DFAF0
  cmps(c,0,(int32_t)c->r[31],0); // 804DFAF4
  if (!crb(c,1)) { goto L_804DFB04; } // 804DFAF8
  c->r[3]=c->r[30]|c->r[30]; // 804DFAFC
  c->lr=0x804DFB04u; f_803A9400(c); // 804DFB00
L_804DFB04:;
  c->r[3]=c->r[30]|c->r[30]; // 804DFB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DFB08
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DFB0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFB10
  c->lr=c->r[0]; // 804DFB14
  c->r[1]=c->r[1]+0x00000010u; // 804DFB18
  return; // 804DFB1C
}

// fn_804DFB20
void f_804DFB20(Ctx* __restrict c) {
  trace_call(0x804DFB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFB20
  c->r[0]=c->lr; // 804DFB24
  c->r[5]=c->r[4]|c->r[4]; // 804DFB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFB2C
  c->r[0]=c->r[3]+0x00000008u; // 804DFB30
  c->r[3]=c->r[3]+0x00000004u; // 804DFB34
  c->r[4]=c->r[1]+0x00000008u; // 804DFB38
  W32(c->r[1]+0x00000008u,c->r[0]); // 804DFB3C
  c->lr=0x804DFB44u; f_80507EDC(c); // 804DFB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFB44
  c->lr=c->r[0]; // 804DFB48
  c->r[1]=c->r[1]+0x00000010u; // 804DFB4C
  return; // 804DFB50
}

// fn_804DFB54
void f_804DFB54(Ctx* __restrict c) {
  trace_call(0x804DFB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFB54
  c->r[0]=c->lr; // 804DFB58
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DFB5C
  c->r[0]=c->r[3]+0x00000008u; // 804DFB60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DFB64
  c->r[31]=R32(c->r[3]+0x00000008u); // 804DFB68
  goto L_804DFB98; // 804DFB6C
L_804DFB70:;
  c->r[5]=R32(c->r[31]+0x00000008u); // 804DFB70
  cmpu(c,0,c->r[4],c->r[5]); // 804DFB74
  if (!crb(c,2)) { goto L_804DFB94; } // 804DFB78
  W32(c->r[1]+0x00000008u,c->r[31]); // 804DFB7C
  c->r[3]=c->r[3]+0x00000004u; // 804DFB80
  c->r[4]=c->r[1]+0x00000008u; // 804DFB84
  c->lr=0x804DFB8Cu; f_80507E50(c); // 804DFB88
  c->r[3]=c->r[31]|c->r[31]; // 804DFB8C
  goto L_804DFBA4; // 804DFB90
L_804DFB94:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DFB94
L_804DFB98:;
  cmpu(c,0,c->r[31],c->r[0]); // 804DFB98
  if (!crb(c,2)) { IRQCHK(c); goto L_804DFB70; } // 804DFB9C
  c->r[3]=0u+0x00000000u; // 804DFBA0
L_804DFBA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DFBA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DFBA8
  c->lr=c->r[0]; // 804DFBAC
  c->r[1]=c->r[1]+0x00000020u; // 804DFBB0
  return; // 804DFBB4
}

// fn_804DFBB8
void f_804DFBB8(Ctx* __restrict c) {
  trace_call(0x804DFBB8u);
  c->r[3]=c->r[3]+0x00000004u; // 804DFBB8
  f_80507E98(c); return; // 804DFBBC
}

// fn_804DFBC0
void f_804DFBC0(Ctx* __restrict c) {
  trace_call(0x804DFBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFBC0
  c->r[0]=c->lr; // 804DFBC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DFBC8
  c->r[11]=c->r[1]+0x00000020u; // 804DFBCC
  c->lr=0x804DFBD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804DFBD0
  c->r[31]=R32(c->r[3]+0x00000008u); // 804DFBD4
  c->r[27]=c->r[4]|c->r[4]; // 804DFBD8
  c->r[28]=c->r[5]|c->r[5]; // 804DFBDC
  c->r[29]=c->r[6]|c->r[6]; // 804DFBE0
  c->r[30]=c->r[3]+0x00000008u; // 804DFBE4
  goto L_804DFC14; // 804DFBE8
L_804DFBEC:;
  c->r[5]=c->r[27]|c->r[27]; // 804DFBEC
  c->r[6]=c->r[28]|c->r[28]; // 804DFBF0
  c->r[7]=c->r[29]|c->r[29]; // 804DFBF4
  c->r[3]=c->r[31]+0x00000008u; // 804DFBF8
  c->r[4]=c->r[31]+0x00000024u; // 804DFBFC
  c->lr=0x804DFC04u; f_804DF874(c); // 804DFC00
  cmps(c,0,(int32_t)c->r[3],0); // 804DFC04
  if (crb(c,2)) { goto L_804DFC10; } // 804DFC08
  goto L_804DFC20; // 804DFC0C
L_804DFC10:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DFC10
L_804DFC14:;
  cmpu(c,0,c->r[31],c->r[30]); // 804DFC14
  if (!crb(c,2)) { IRQCHK(c); goto L_804DFBEC; } // 804DFC18
  c->r[3]=0u+0x00000000u; // 804DFC1C
L_804DFC20:;
  c->r[11]=c->r[1]+0x00000020u; // 804DFC20
  c->lr=0x804DFC28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804DFC24
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DFC28
  c->lr=c->r[0]; // 804DFC2C
  c->r[1]=c->r[1]+0x00000020u; // 804DFC30
  return; // 804DFC34
}

// fn_804DFC38
void f_804DFC38(Ctx* __restrict c) {
  trace_call(0x804DFC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFC38
  c->r[0]=c->lr; // 804DFC3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804DFC40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804DFC44
  W32(c->r[1]+0x00000018u,c->r[30]); // 804DFC48
  c->r[30]=c->r[3]+0x00000014u; // 804DFC4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804DFC50
  c->r[29]=c->r[4]|c->r[4]; // 804DFC54
  c->r[31]=R32(c->r[3]+0x00000014u); // 804DFC58
  goto L_804DFC80; // 804DFC5C
L_804DFC60:;
  c->r[3]=c->r[29]|c->r[29]; // 804DFC60
  c->r[4]=c->r[31]+0x00000008u; // 804DFC64
  c->lr=0x804DFC6Cu; f_803B393C(c); // 804DFC68
  cmps(c,0,(int32_t)c->r[3],0); // 804DFC6C
  if (!crb(c,2)) { goto L_804DFC7C; } // 804DFC70
  c->r[3]=R32(c->r[31]+0x00000088u); // 804DFC74
  goto L_804DFC8C; // 804DFC78
L_804DFC7C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804DFC7C
L_804DFC80:;
  cmpu(c,0,c->r[31],c->r[30]); // 804DFC80
  if (!crb(c,2)) { IRQCHK(c); goto L_804DFC60; } // 804DFC84
  c->r[3]=0u+0x00000000u; // 804DFC88
L_804DFC8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804DFC8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804DFC90
  c->r[30]=R32(c->r[1]+0x00000018u); // 804DFC94
  c->r[29]=R32(c->r[1]+0x00000014u); // 804DFC98
  c->lr=c->r[0]; // 804DFC9C
  c->r[1]=c->r[1]+0x00000020u; // 804DFCA0
  return; // 804DFCA4
}

// EqualsResName__Q34nw4r3lyt6detailFPCcPCc
void f_804DFCA8(Ctx* __restrict c) {
  trace_call(0x804DFCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFCA8
  c->r[0]=c->lr; // 804DFCAC
  c->r[5]=0u+0x00000010u; // 804DFCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFCB4
  c->lr=0x804DFCBCu; f_803B3A58(c); // 804DFCB8
  c->r[0]=cntlz(c->r[3]); // 804DFCBC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804DFCC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFCC4
  c->lr=c->r[0]; // 804DFCC8
  c->r[1]=c->r[1]+0x00000010u; // 804DFCCC
  return; // 804DFCD0
}

// EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
void f_804DFCD4(Ctx* __restrict c) {
  trace_call(0x804DFCD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFCD4
  c->r[0]=c->lr; // 804DFCD8
  c->r[5]=0u+0x00000014u; // 804DFCDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFCE0
  c->lr=0x804DFCE8u; f_803B3A58(c); // 804DFCE4
  c->r[0]=cntlz(c->r[3]); // 804DFCE8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 804DFCEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFCF0
  c->lr=c->r[0]; // 804DFCF4
  c->r[1]=c->r[1]+0x00000010u; // 804DFCF8
  return; // 804DFCFC
}

// fn_804DFD00
void f_804DFD00(Ctx* __restrict c) {
  trace_call(0x804DFD00u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804DFD00
  c->r[5]=0u+0x00000000u; // 804DFD04
  cmpu(c,0,c->r[4],c->r[0]); // 804DFD08
  if (!crb(c,2)) { goto L_804DFD20; } // 804DFD0C
  c->r[0]=R16(c->r[3]+0x00000004u); // 804DFD10
  cmpu(c,0,c->r[0],0x0000FEFFu); // 804DFD14
  if (!crb(c,2)) { goto L_804DFD20; } // 804DFD18
  c->r[5]=0u+0x00000001u; // 804DFD1C
L_804DFD20:;
  c->r[3]=c->r[5]|c->r[5]; // 804DFD20
  return; // 804DFD24
}

// __ct__Q44nw4r3lyt6detail11TexCoordAryFv
void f_804DFD28(Ctx* __restrict c) {
  trace_call(0x804DFD28u);
  c->r[0]=0u+0x00000000u; // 804DFD28
  W8(c->r[3]+0x00000000u,c->r[0]); // 804DFD2C
  W8(c->r[3]+0x00000001u,c->r[0]); // 804DFD30
  W32(c->r[3]+0x00000004u,c->r[0]); // 804DFD34
  return; // 804DFD38
}

// Free__Q44nw4r3lyt6detail11TexCoordAryFv
void f_804DFD3C(Ctx* __restrict c) {
  trace_call(0x804DFD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFD3C
  c->r[0]=c->lr; // 804DFD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DFD48
  c->r[31]=c->r[3]|c->r[3]; // 804DFD4C
  c->r[4]=R32(c->r[3]+0x00000004u); // 804DFD50
  cmps(c,0,(int32_t)c->r[4],0); // 804DFD54
  if (crb(c,2)) { goto L_804DFD78; } // 804DFD58
  if (crb(c,2)) { goto L_804DFD68; } // 804DFD5C
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DFD60
  c->lr=0x804DFD68u; f_803C4D18(c); // 804DFD64
L_804DFD68:;
  c->r[0]=0u+0x00000000u; // 804DFD68
  W32(c->r[31]+0x00000004u,c->r[0]); // 804DFD6C
  W8(c->r[31]+0x00000000u,c->r[0]); // 804DFD70
  W8(c->r[31]+0x00000001u,c->r[0]); // 804DFD74
L_804DFD78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFD78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DFD7C
  c->lr=c->r[0]; // 804DFD80
  c->r[1]=c->r[1]+0x00000010u; // 804DFD84
  return; // 804DFD88
}

// Reserve__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_804DFD8C(Ctx* __restrict c) {
  trace_call(0x804DFD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804DFD8C
  c->r[0]=c->lr; // 804DFD90
  W32(c->r[1]+0x00000014u,c->r[0]); // 804DFD94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804DFD98
  c->r[31]=c->r[4]|c->r[4]; // 804DFD9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804DFDA0
  c->r[30]=c->r[3]|c->r[3]; // 804DFDA4
  c->r[0]=R8(c->r[3]+0x00000000u); // 804DFDA8
  cmpu(c,0,c->r[0],c->r[4]); // 804DFDAC
  if (!crb(c,0)) { goto L_804DFE08; } // 804DFDB0
  c->r[4]=R32(c->r[3]+0x00000004u); // 804DFDB4
  cmps(c,0,(int32_t)c->r[4],0); // 804DFDB8
  if (crb(c,2)) { goto L_804DFDDC; } // 804DFDBC
  if (crb(c,2)) { goto L_804DFDCC; } // 804DFDC0
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DFDC4
  c->lr=0x804DFDCCu; f_803C4D18(c); // 804DFDC8
L_804DFDCC:;
  c->r[0]=0u+0x00000000u; // 804DFDCC
  W32(c->r[30]+0x00000004u,c->r[0]); // 804DFDD0
  W8(c->r[30]+0x00000000u,c->r[0]); // 804DFDD4
  W8(c->r[30]+0x00000001u,c->r[0]); // 804DFDD8
L_804DFDDC:;
  c->r[3]=R32(c->r[13]+0xFFFFE4A0u); // 804DFDDC
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 804DFDE0
  c->lr=0x804DFDE8u; f_803C4D08(c); // 804DFDE4
  cmps(c,0,(int32_t)c->r[3],0); // 804DFDE8
  if (crb(c,2)) { goto L_804DFDF4; } // 804DFDEC
  goto L_804DFDF8; // 804DFDF0
L_804DFDF4:;
  c->r[3]=0u+0x00000000u; // 804DFDF4
L_804DFDF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 804DFDF8
  W32(c->r[30]+0x00000004u,c->r[3]); // 804DFDFC
  if (crb(c,2)) { goto L_804DFE08; } // 804DFE00
  W8(c->r[30]+0x00000000u,c->r[31]); // 804DFE04
L_804DFE08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804DFE08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804DFE0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804DFE10
  c->lr=c->r[0]; // 804DFE14
  c->r[1]=c->r[1]+0x00000010u; // 804DFE18
  return; // 804DFE1C
}

// fn_804DFE20
void f_804DFE20(Ctx* __restrict c) {
  trace_call(0x804DFE20u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFE20
  cmps(c,0,(int32_t)c->r[0],0); // 804DFE24
  if (crb(c,2)) return; // 804DFE28
  c->r[0]=R8(c->r[3]+0x00000000u); // 804DFE2C
  cmpu(c,0,c->r[4],c->r[0]); // 804DFE30
  if (crb(c,1)) return; // 804DFE34
  c->r[0]=R8(c->r[13]+0xFFFFE4C8u); // 804DFE38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804DFE3C
  if (!crb(c,2)) { goto L_804DFE7C; } // 804DFE40
  c->r[6]=0u+0x80830000u; // 804DFE44
  {uint32_t ea=c->r[2]+0x00001820u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFE48
  c->r[5]=c->r[6]+0xFFFF8200u; // 804DFE4C
  {uint32_t ea=c->r[2]+0x00001824u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFE50
  c->r[0]=0u+0x00000001u; // 804DFE54
  {uint32_t ea=c->r[6]+0xFFFF8200u; WF32(ea,c->f[1]);} // 804DFE58
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 804DFE5C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 804DFE60
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[1]);} // 804DFE64
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 804DFE68
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 804DFE6C
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 804DFE70
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 804DFE74
  W8(c->r[13]+0xFFFFE4C8u,c->r[0]); // 804DFE78
L_804DFE7C:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 804DFE7C
  c->r[6]=0u+0x80830000u; // 804DFE80
  c->r[5]=c->r[6]+0xFFFF8200u; // 804DFE84
  {uint32_t ea=c->r[6]+0xFFFF8200u; c->f[7]=c->ps1[7]=RF32(ea);} // 804DFE88
  c->r[0]=c->r[4]-c->r[7]; // 804DFE8C
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 804DFE90
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 804DFE94
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804DFE98
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804DFE9C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DFEA0
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DFEA4
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFEA8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFEAC
  c->ctr=c->r[0]; // 804DFEB0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 804DFEB4
  if (!crb(c,0)) { goto L_804DFF04; } // 804DFEB8
L_804DFEBC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFEBC
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 804DFEC0
  c->r[5]=c->r[0]+c->r[6]; // 804DFEC4
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 804DFEC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFECC
  c->r[5]=c->r[0]+c->r[6]; // 804DFED0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 804DFED4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 804DFED8
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFEDC
  c->r[5]=c->r[0]+c->r[6]; // 804DFEE0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 804DFEE4
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 804DFEE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFEEC
  c->r[5]=c->r[0]+c->r[6]; // 804DFEF0
  c->r[6]=c->r[6]+0x00000020u; // 804DFEF4
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 804DFEF8
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 804DFEFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DFEBC; } // 804DFF00
L_804DFF04:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 804DFF04
  return; // 804DFF08
}

// fn_804DFF0C
void f_804DFF0C(Ctx* __restrict c) {
  trace_call(0x804DFF0Cu);
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFF0C
  c->r[3]=rotl(c->r[4],5)&0xFFFFFFE0u; // 804DFF10
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 804DFF14
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 804DFF18
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF1C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 804DFF20
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF24
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 804DFF28
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF2C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DFF30
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF34
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 804DFF38
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF3C
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 804DFF40
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF44
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 804DFF48
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF4C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 804DFF50
  return; // 804DFF54
}

// fn_804DFF58
void f_804DFF58(Ctx* __restrict c) {
  trace_call(0x804DFF58u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFF58
  c->r[6]=rotl(c->r[4],5)&0xFFFFFFE0u; // 804DFF5C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFF60
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF64
  c->r[4]=c->r[0]+c->r[6]; // 804DFF68
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 804DFF6C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFF70
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 804DFF74
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF78
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFF7C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804DFF80
  c->r[4]=c->r[0]+c->r[6]; // 804DFF84
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804DFF88
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 804DFF8C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFF90
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 804DFF94
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFF98
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFF9C
  c->r[4]=c->r[0]+c->r[6]; // 804DFFA0
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[3]);} // 804DFFA4
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 804DFFA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFFAC
  c->r[3]=c->r[0]+c->r[6]; // 804DFFB0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 804DFFB4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804DFFB8
  return; // 804DFFBC
}

// Copy__Q44nw4r3lyt6detail11TexCoordAryFPCvUc
void f_804DFFC0(Ctx* __restrict c) {
  trace_call(0x804DFFC0u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 804DFFC0
  cmpu(c,0,c->r[0],c->r[5]); // 804DFFC4
  if (!crb(c,0)) { goto L_804DFFD0; } // 804DFFC8
  c->r[0]=c->r[5]|c->r[5]; // 804DFFCC
L_804DFFD0:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 804DFFD0
  c->r[6]=0u+0x00000000u; // 804DFFD4
  c->ctr=c->r[5]; // 804DFFD8
  cmps(c,0,(int32_t)c->r[5],0); // 804DFFDC
  if (!crb(c,1)) return; // 804DFFE0
L_804DFFE4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 804DFFE4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFFE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804DFFEC
  c->r[5]=c->r[0]+c->r[6]; // 804DFFF0
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 804DFFF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804DFFF8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 804DFFFC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0000
  c->r[0]=R32(c->r[3]+0x00000004u); // 804E0004
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E0008
  c->r[5]=c->r[0]+c->r[6]; // 804E000C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0010
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 804E0014
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0018
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E001C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0020
  c->r[4]=c->r[4]+0x00000020u; // 804E0024
  c->r[0]=R32(c->r[3]+0x00000004u); // 804E0028
  c->r[5]=c->r[0]+c->r[6]; // 804E002C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 804E0030
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 804E0034
  c->r[0]=R32(c->r[3]+0x00000004u); // 804E0038
  c->r[5]=c->r[0]+c->r[6]; // 804E003C
  c->r[6]=c->r[6]+0x00000020u; // 804E0040
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 804E0044
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 804E0048
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804DFFE4; } // 804E004C
  return; // 804E0050
}

// IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc
void f_804E0054(Ctx* __restrict c) {
  trace_call(0x804E0054u);
  cmpu(c,0,c->r[4],0x000000FFu); // 804E0054
  if (crb(c,2)) { goto L_804E0064; } // 804E0058
  c->r[3]=0u+0x00000001u; // 804E005C
  return; // 804E0060
L_804E0064:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0064
  if (crb(c,2)) { goto L_804E00B4; } // 804E0068
  c->r[4]=R32(c->r[3]+0x00000000u); // 804E006C
  c->r[0]=c->r[4]+0x00010000u; // 804E0070
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E0074
  if (!crb(c,2)) { goto L_804E00AC; } // 804E0078
  c->r[4]=R32(c->r[3]+0x00000004u); // 804E007C
  c->r[0]=c->r[4]+0x00010000u; // 804E0080
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E0084
  if (!crb(c,2)) { goto L_804E00AC; } // 804E0088
  c->r[4]=R32(c->r[3]+0x00000008u); // 804E008C
  c->r[0]=c->r[4]+0x00010000u; // 804E0090
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E0094
  if (!crb(c,2)) { goto L_804E00AC; } // 804E0098
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804E009C
  c->r[0]=c->r[3]+0x00010000u; // 804E00A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E00A4
  if (crb(c,2)) { goto L_804E00B4; } // 804E00A8
L_804E00AC:;
  c->r[3]=0u+0x00000001u; // 804E00AC
  return; // 804E00B0
L_804E00B4:;
  c->r[3]=0u+0x00000000u; // 804E00B4
  return; // 804E00B8
}

// fn_804E00BC
void f_804E00BC(Ctx* __restrict c) {
  trace_call(0x804E00BCu);
  c->r[8]=R8(c->r[4]+0x00000000u); // 804E00BC
  cmpu(c,0,c->r[5],0x000000FFu); // 804E00C0
  c->r[7]=R8(c->r[4]+0x00000001u); // 804E00C4
  c->r[6]=R8(c->r[4]+0x00000002u); // 804E00C8
  c->r[0]=R8(c->r[4]+0x00000003u); // 804E00CC
  W8(c->r[3]+0x00000000u,c->r[8]); // 804E00D0
  W8(c->r[3]+0x00000001u,c->r[7]); // 804E00D4
  W8(c->r[3]+0x00000002u,c->r[6]); // 804E00D8
  W8(c->r[3]+0x00000003u,c->r[0]); // 804E00DC
  if (crb(c,2)) return; // 804E00E0
  c->r[0]=R8(c->r[4]+0x00000003u); // 804E00E4
  c->r[4]=0u+0x80810000u; // 804E00E8
  c->r[4]=c->r[4]+0xFFFF8081u; // 804E00EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 804E00F0
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804E00F4
  c->r[0]=c->r[4]+c->r[0]; // 804E00F8
  c->r[0]=sraw(c,c->r[0],7); // 804E00FC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804E0100
  c->r[0]=c->r[0]+c->r[4]; // 804E0104
  W8(c->r[3]+0x00000003u,c->r[0]); // 804E0108
  return; // 804E010C
}

// SetVertexFormat__Q34nw4r3lyt6detailFbUc
void f_804E0110(Ctx* __restrict c) {
  trace_call(0x804E0110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E0110
  c->r[0]=c->lr; // 804E0114
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E0118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E011C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E0120
  c->r[30]=c->r[4]|c->r[4]; // 804E0124
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E0128
  c->r[29]=c->r[3]|c->r[3]; // 804E012C
  c->lr=0x804E0134u; f_803A3580(c); // 804E0130
  c->r[3]=0u+0x00000009u; // 804E0134
  c->r[4]=0u+0x00000001u; // 804E0138
  c->lr=0x804E0140u; f_803A2F8C(c); // 804E013C
  cmps(c,0,(int32_t)c->r[29],0); // 804E0140
  if (crb(c,2)) { goto L_804E0154; } // 804E0144
  c->r[3]=0u+0x0000000Bu; // 804E0148
  c->r[4]=0u+0x00000001u; // 804E014C
  c->lr=0x804E0154u; f_803A2F8C(c); // 804E0150
L_804E0154:;
  c->r[31]=0u+0x00000000u; // 804E0154
  goto L_804E016C; // 804E0158
L_804E015C:;
  c->r[3]=c->r[31]+0x0000000Du; // 804E015C
  c->r[4]=0u+0x00000001u; // 804E0160
  c->lr=0x804E0168u; f_803A2F8C(c); // 804E0164
  c->r[31]=c->r[31]+0x00000001u; // 804E0168
L_804E016C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 804E016C
  if (crb(c,0)) { IRQCHK(c); goto L_804E015C; } // 804E0170
  c->r[3]=0u+0x00000000u; // 804E0174
  c->r[4]=0u+0x00000009u; // 804E0178
  c->r[5]=0u+0x00000000u; // 804E017C
  c->r[6]=0u+0x00000004u; // 804E0180
  c->r[7]=0u+0x00000000u; // 804E0184
  c->lr=0x804E018Cu; f_803A35B4(c); // 804E0188
  cmps(c,0,(int32_t)c->r[29],0); // 804E018C
  if (crb(c,2)) { goto L_804E01AC; } // 804E0190
  c->r[3]=0u+0x00000000u; // 804E0194
  c->r[4]=0u+0x0000000Bu; // 804E0198
  c->r[5]=0u+0x00000001u; // 804E019C
  c->r[6]=0u+0x00000005u; // 804E01A0
  c->r[7]=0u+0x00000000u; // 804E01A4
  c->lr=0x804E01ACu; f_803A35B4(c); // 804E01A8
L_804E01AC:;
  c->r[31]=0u+0x00000000u; // 804E01AC
  goto L_804E01D0; // 804E01B0
L_804E01B4:;
  c->r[4]=c->r[31]+0x0000000Du; // 804E01B4
  c->r[3]=0u+0x00000000u; // 804E01B8
  c->r[5]=0u+0x00000001u; // 804E01BC
  c->r[6]=0u+0x00000004u; // 804E01C0
  c->r[7]=0u+0x00000000u; // 804E01C4
  c->lr=0x804E01CCu; f_803A35B4(c); // 804E01C8
  c->r[31]=c->r[31]+0x00000001u; // 804E01CC
L_804E01D0:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 804E01D0
  if (crb(c,0)) { IRQCHK(c); goto L_804E01B4; } // 804E01D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E01D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E01DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E01E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E01E4
  c->lr=c->r[0]; // 804E01E8
  c->r[1]=c->r[1]+0x00000020u; // 804E01EC
  return; // 804E01F0
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color
void f_804E01F4(Ctx* __restrict c) {
  trace_call(0x804E01F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E01F4
  c->r[0]=c->lr; // 804E01F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E01FC
  c->r[11]=c->r[1]+0x00000020u; // 804E0200
  c->lr=0x804E0208u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E0204
  c->r[27]=c->r[3]|c->r[3]; // 804E0208
  c->r[28]=c->r[4]|c->r[4]; // 804E020C
  c->r[29]=c->r[5]|c->r[5]; // 804E0210
  c->r[30]=c->r[6]|c->r[6]; // 804E0214
  c->r[31]=c->r[7]|c->r[7]; // 804E0218
  c->r[3]=0u+0x00000080u; // 804E021C
  c->r[4]=0u+0x00000000u; // 804E0220
  c->r[5]=0u+0x00000004u; // 804E0224
  c->lr=0x804E022Cu; f_803A4A10(c); // 804E0228
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E022C
  c->r[3]=0u+0xCC010000u; // 804E0230
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0234
  cmps(c,0,(int32_t)c->r[31],0); // 804E0238
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E023C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0240
  if (crb(c,2)) { goto L_804E0250; } // 804E0244
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E0248
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 804E024C
L_804E0250:;
  cmps(c,1,(int32_t)c->r[29],0); // 804E0250
  c->r[6]=0u+0x00000000u; // 804E0254
  if (!crb(c,5)) { goto L_804E0368; } // 804E0258
  cmps(c,0,(int32_t)c->r[29],8); // 804E025C
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 804E0260
  if (!crb(c,1)) { goto L_804E0334; } // 804E0264
  c->r[5]=0u+0x00000000u; // 804E0268
  if (crb(c,4)) { goto L_804E0284; } // 804E026C
  c->r[3]=0u+0x80000000u; // 804E0270
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804E0274
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804E0278
  if (crb(c,1)) { goto L_804E0284; } // 804E027C
  c->r[5]=0u+0x00000001u; // 804E0280
L_804E0284:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E0284
  if (crb(c,2)) { goto L_804E0334; } // 804E0288
  c->r[0]=c->r[4]+0x00000007u; // 804E028C
  c->r[5]=c->r[30]|c->r[30]; // 804E0290
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804E0294
  c->r[3]=0u+0xCC010000u; // 804E0298
  c->ctr=c->r[0]; // 804E029C
  cmps(c,0,(int32_t)c->r[4],0); // 804E02A0
  if (!crb(c,1)) { goto L_804E0334; } // 804E02A4
L_804E02A8:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E02A8
  c->r[6]=c->r[6]+0x00000008u; // 804E02AC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E02B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E02B4
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E02B8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E02BC
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E02C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E02C4
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E02C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E02CC
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E02D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E02D4
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E02D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E02DC
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E02E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E02E4
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E02E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E02EC
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E02F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E02F4
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E02F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E02FC
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0300
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0304
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0308
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E030C
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0310
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0314
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0318
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E031C
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0320
  c->r[5]=c->r[5]+0x00000100u; // 804E0324
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0328
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E032C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E02A8; } // 804E0330
L_804E0334:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 804E0334
  c->r[0]=c->r[29]-c->r[6]; // 804E0338
  c->r[4]=c->r[30]+c->r[3]; // 804E033C
  c->r[3]=0u+0xCC010000u; // 804E0340
  c->ctr=c->r[0]; // 804E0344
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 804E0348
  if (!crb(c,0)) { goto L_804E0368; } // 804E034C
L_804E0350:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0350
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0354
  c->r[4]=c->r[4]+0x00000020u; // 804E0358
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E035C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0360
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E0350; } // 804E0364
L_804E0368:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0368
  c->r[3]=0u+0xCC010000u; // 804E036C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0370
  cmps(c,0,(int32_t)c->r[31],0); // 804E0374
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0378
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E037C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0380
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E0384
  if (crb(c,2)) { goto L_804E0394; } // 804E0388
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E038C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 804E0390
L_804E0394:;
  cmps(c,1,(int32_t)c->r[29],0); // 804E0394
  c->r[6]=0u+0x00000000u; // 804E0398
  if (!crb(c,5)) { goto L_804E04AC; } // 804E039C
  cmps(c,0,(int32_t)c->r[29],8); // 804E03A0
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 804E03A4
  if (!crb(c,1)) { goto L_804E0478; } // 804E03A8
  c->r[5]=0u+0x00000000u; // 804E03AC
  if (crb(c,4)) { goto L_804E03C8; } // 804E03B0
  c->r[3]=0u+0x80000000u; // 804E03B4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804E03B8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804E03BC
  if (crb(c,1)) { goto L_804E03C8; } // 804E03C0
  c->r[5]=0u+0x00000001u; // 804E03C4
L_804E03C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E03C8
  if (crb(c,2)) { goto L_804E0478; } // 804E03CC
  c->r[0]=c->r[4]+0x00000007u; // 804E03D0
  c->r[5]=c->r[30]|c->r[30]; // 804E03D4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804E03D8
  c->r[3]=0u+0xCC010000u; // 804E03DC
  c->ctr=c->r[0]; // 804E03E0
  cmps(c,0,(int32_t)c->r[4],0); // 804E03E4
  if (!crb(c,1)) { goto L_804E0478; } // 804E03E8
L_804E03EC:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E03EC
  c->r[6]=c->r[6]+0x00000008u; // 804E03F0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E03F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E03F8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E03FC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0400
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0404
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E0408
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E040C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0410
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0414
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0418
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E041C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0420
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0424
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0428
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E042C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0430
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0434
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0438
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E043C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0440
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0444
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0448
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E044C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0450
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0454
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0458
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E045C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0460
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0464
  c->r[5]=c->r[5]+0x00000100u; // 804E0468
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E046C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0470
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E03EC; } // 804E0474
L_804E0478:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 804E0478
  c->r[0]=c->r[29]-c->r[6]; // 804E047C
  c->r[4]=c->r[30]+c->r[3]; // 804E0480
  c->r[3]=0u+0xCC010000u; // 804E0484
  c->ctr=c->r[0]; // 804E0488
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 804E048C
  if (!crb(c,0)) { goto L_804E04AC; } // 804E0490
L_804E0494:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0494
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0498
  c->r[4]=c->r[4]+0x00000020u; // 804E049C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E04A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E04A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E0494; } // 804E04A8
L_804E04AC:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E04AC
  c->r[3]=0u+0xCC010000u; // 804E04B0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E04B4
  cmps(c,0,(int32_t)c->r[31],0); // 804E04B8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E04BC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804E04C0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E04C4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 804E04C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E04CC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E04D0
  if (crb(c,2)) { goto L_804E04E0; } // 804E04D4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 804E04D8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 804E04DC
L_804E04E0:;
  cmps(c,1,(int32_t)c->r[29],0); // 804E04E0
  c->r[6]=0u+0x00000000u; // 804E04E4
  if (!crb(c,5)) { goto L_804E05F8; } // 804E04E8
  cmps(c,0,(int32_t)c->r[29],8); // 804E04EC
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 804E04F0
  if (!crb(c,1)) { goto L_804E05C4; } // 804E04F4
  c->r[5]=0u+0x00000000u; // 804E04F8
  if (crb(c,4)) { goto L_804E0514; } // 804E04FC
  c->r[3]=0u+0x80000000u; // 804E0500
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804E0504
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804E0508
  if (crb(c,1)) { goto L_804E0514; } // 804E050C
  c->r[5]=0u+0x00000001u; // 804E0510
L_804E0514:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E0514
  if (crb(c,2)) { goto L_804E05C4; } // 804E0518
  c->r[0]=c->r[4]+0x00000007u; // 804E051C
  c->r[5]=c->r[30]|c->r[30]; // 804E0520
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804E0524
  c->r[3]=0u+0xCC010000u; // 804E0528
  c->ctr=c->r[0]; // 804E052C
  cmps(c,0,(int32_t)c->r[4],0); // 804E0530
  if (!crb(c,1)) { goto L_804E05C4; } // 804E0534
L_804E0538:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0538
  c->r[6]=c->r[6]+0x00000008u; // 804E053C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0540
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0544
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0548
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E054C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0550
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E0554
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0558
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E055C
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0560
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0564
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0568
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E056C
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0570
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0574
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0578
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E057C
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0580
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0584
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0588
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E058C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0590
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0594
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0598
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E059C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E05A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E05A4
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E05A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E05AC
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E05B0
  c->r[5]=c->r[5]+0x00000100u; // 804E05B4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E05B8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E05BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E0538; } // 804E05C0
L_804E05C4:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 804E05C4
  c->r[0]=c->r[29]-c->r[6]; // 804E05C8
  c->r[4]=c->r[30]+c->r[3]; // 804E05CC
  c->r[3]=0u+0xCC010000u; // 804E05D0
  c->ctr=c->r[0]; // 804E05D4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 804E05D8
  if (!crb(c,0)) { goto L_804E05F8; } // 804E05DC
L_804E05E0:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E05E0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E05E4
  c->r[4]=c->r[4]+0x00000020u; // 804E05E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E05EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E05F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E05E0; } // 804E05F4
L_804E05F8:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E05F8
  c->r[3]=0u+0xCC010000u; // 804E05FC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0600
  cmps(c,0,(int32_t)c->r[31],0); // 804E0604
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0608
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804E060C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E0610
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0614
  if (crb(c,2)) { goto L_804E0624; } // 804E0618
  c->r[0]=R32(c->r[31]+0x00000008u); // 804E061C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 804E0620
L_804E0624:;
  cmps(c,1,(int32_t)c->r[29],0); // 804E0624
  c->r[6]=0u+0x00000000u; // 804E0628
  if (!crb(c,5)) { goto L_804E073C; } // 804E062C
  cmps(c,0,(int32_t)c->r[29],8); // 804E0630
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 804E0634
  if (!crb(c,1)) { goto L_804E0708; } // 804E0638
  c->r[5]=0u+0x00000000u; // 804E063C
  if (crb(c,4)) { goto L_804E0658; } // 804E0640
  c->r[3]=0u+0x80000000u; // 804E0644
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804E0648
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804E064C
  if (crb(c,1)) { goto L_804E0658; } // 804E0650
  c->r[5]=0u+0x00000001u; // 804E0654
L_804E0658:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E0658
  if (crb(c,2)) { goto L_804E0708; } // 804E065C
  c->r[0]=c->r[4]+0x00000007u; // 804E0660
  c->r[5]=c->r[30]|c->r[30]; // 804E0664
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804E0668
  c->r[3]=0u+0xCC010000u; // 804E066C
  c->ctr=c->r[0]; // 804E0670
  cmps(c,0,(int32_t)c->r[4],0); // 804E0674
  if (!crb(c,1)) { goto L_804E0708; } // 804E0678
L_804E067C:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E067C
  c->r[6]=c->r[6]+0x00000008u; // 804E0680
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0684
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0688
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E068C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0690
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0694
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804E0698
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E069C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06A0
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06A4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06A8
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E06AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06B0
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06B4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06B8
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E06BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06C0
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06C8
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E06CC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06D0
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06D4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06D8
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E06DC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06E0
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06E4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06E8
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E06EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E06F0
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E06F4
  c->r[5]=c->r[5]+0x00000100u; // 804E06F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E06FC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E067C; } // 804E0704
L_804E0708:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 804E0708
  c->r[0]=c->r[29]-c->r[6]; // 804E070C
  c->r[4]=c->r[30]+c->r[3]; // 804E0710
  c->r[3]=0u+0xCC010000u; // 804E0714
  c->ctr=c->r[0]; // 804E0718
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 804E071C
  if (!crb(c,0)) { goto L_804E073C; } // 804E0720
L_804E0724:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0724
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0728
  c->r[4]=c->r[4]+0x00000020u; // 804E072C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804E0730
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804E0734
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E0724; } // 804E0738
L_804E073C:;
  c->r[11]=c->r[1]+0x00000020u; // 804E073C
  c->lr=0x804E0744u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E0740
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E0744
  c->lr=c->r[0]; // 804E0748
  c->r[1]=c->r[1]+0x00000020u; // 804E074C
  return; // 804E0750
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc
void f_804E0754(Ctx* __restrict c) {
  trace_call(0x804E0754u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E0754
  c->r[0]=c->lr; // 804E0758
  W32(c->r[1]+0x00000054u,c->r[0]); // 804E075C
  c->r[11]=c->r[1]+0x00000050u; // 804E0760
  c->lr=0x804E0768u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E0764
  c->r[0]=0u+0xFFFFFFFFu; // 804E0768
  cmps(c,0,(int32_t)c->r[7],0); // 804E076C
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E0770
  c->r[26]=c->r[3]|c->r[3]; // 804E0774
  c->r[27]=c->r[4]|c->r[4]; // 804E0778
  c->r[28]=c->r[5]|c->r[5]; // 804E077C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E0780
  c->r[29]=c->r[6]|c->r[6]; // 804E0784
  c->r[30]=c->r[7]|c->r[7]; // 804E0788
  c->r[31]=c->r[8]|c->r[8]; // 804E078C
  W32(c->r[1]+0x00000018u,c->r[0]); // 804E0790
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804E0794
  if (crb(c,2)) { goto L_804E080C; } // 804E0798
  c->r[24]=c->r[30]|c->r[30]; // 804E079C
  c->r[23]=c->r[1]+0x00000010u; // 804E07A0
  c->r[25]=0u+0x00000000u; // 804E07A4
L_804E07A8:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 804E07A8
  c->r[5]=c->r[31]|c->r[31]; // 804E07AC
  c->r[3]=c->r[1]+0x0000000Cu; // 804E07B0
  c->r[4]=c->r[1]+0x00000008u; // 804E07B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 804E07B8
  c->r[0]=R8(c->r[24]+0x00000001u); // 804E07BC
  W8(c->r[1]+0x00000009u,c->r[0]); // 804E07C0
  c->r[0]=R8(c->r[24]+0x00000002u); // 804E07C4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 804E07C8
  c->r[0]=R8(c->r[24]+0x00000003u); // 804E07CC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 804E07D0
  c->lr=0x804E07D8u; f_804E00BC(c); // 804E07D4
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 804E07D8
  c->r[25]=c->r[25]+0x00000001u; // 804E07DC
  c->r[0]=R8(c->r[1]+0x0000000Du); // 804E07E0
  cmps(c,0,(int32_t)c->r[25],4); // 804E07E4
  W8(c->r[23]+0x00000000u,c->r[3]); // 804E07E8
  c->r[24]=c->r[24]+0x00000004u; // 804E07EC
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 804E07F0
  W8(c->r[23]+0x00000001u,c->r[0]); // 804E07F4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 804E07F8
  W8(c->r[23]+0x00000002u,c->r[3]); // 804E07FC
  W8(c->r[23]+0x00000003u,c->r[0]); // 804E0800
  c->r[23]=c->r[23]+0x00000004u; // 804E0804
  if (crb(c,0)) { IRQCHK(c); goto L_804E07A8; } // 804E0808
L_804E080C:;
  c->r[3]=0u-c->r[30]; // 804E080C
  c->r[0]=c->r[1]+0x00000010u; // 804E0810
  c->r[4]=c->r[3]|c->r[30]; // 804E0814
  c->r[5]=c->r[28]|c->r[28]; // 804E0818
  c->r[7]=sraw(c,c->r[4],31); // 804E081C
  c->r[3]=c->r[26]|c->r[26]; // 804E0820
  c->r[4]=c->r[27]|c->r[27]; // 804E0824
  c->r[6]=c->r[29]|c->r[29]; // 804E0828
  c->r[7]=c->r[0]&c->r[7]; // 804E082C
  c->lr=0x804E0834u; f_804E01F4(c); // 804E0830
  c->r[11]=c->r[1]+0x00000050u; // 804E0834
  c->lr=0x804E083Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E0838
  c->r[0]=R32(c->r[1]+0x00000054u); // 804E083C
  c->lr=c->r[0]; // 804E0840
  c->r[1]=c->r[1]+0x00000050u; // 804E0844
  return; // 804E0848
}

// BindAnimation__Q24nw4r3lytFPQ34nw4r3lyt5GroupPQ34nw4r3lyt13AnimTransformbb
void f_804E084C(Ctx* __restrict c) {
  trace_call(0x804E084Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E084C
  c->r[0]=c->lr; // 804E0850
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E0854
  c->r[11]=c->r[1]+0x00000020u; // 804E0858
  c->lr=0x804E0860u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E085C
  c->r[31]=R32(c->r[3]+0x00000010u); // 804E0860
  c->r[27]=c->r[4]|c->r[4]; // 804E0864
  c->r[28]=c->r[5]|c->r[5]; // 804E0868
  c->r[29]=c->r[6]|c->r[6]; // 804E086C
  c->r[30]=c->r[3]+0x00000010u; // 804E0870
  goto L_804E089C; // 804E0874
L_804E0878:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 804E0878
  c->r[4]=c->r[27]|c->r[27]; // 804E087C
  c->r[5]=c->r[28]|c->r[28]; // 804E0880
  c->r[6]=c->r[29]|c->r[29]; // 804E0884
  c->r[12]=R32(c->r[3]+0x00000000u); // 804E0888
  c->r[12]=R32(c->r[12]+0x00000044u); // 804E088C
  c->ctr=c->r[12]; // 804E0890
  if (true) { c->lr=0x804E0898u; dispatch(c,c->ctr); } // 804E0894
  c->r[31]=R32(c->r[31]+0x00000000u); // 804E0898
L_804E089C:;
  cmpu(c,0,c->r[31],c->r[30]); // 804E089C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0878; } // 804E08A0
  c->r[11]=c->r[1]+0x00000020u; // 804E08A4
  c->lr=0x804E08ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E08A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E08AC
  c->lr=c->r[0]; // 804E08B0
  c->r[1]=c->r[1]+0x00000020u; // 804E08B4
  return; // 804E08B8
}

// fn_804E08BC
void f_804E08BC(Ctx* __restrict c) {
  trace_call(0x804E08BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E08BC
  c->r[0]=c->lr; // 804E08C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 804E08C4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 804E08C8
  c->r[31]=c->r[4]|c->r[4]; // 804E08CC
  c->r[4]=c->r[1]+0x00000038u; // 804E08D0
  W32(c->r[1]+0x00000068u,c->r[30]); // 804E08D4
  c->r[30]=c->r[3]|c->r[3]; // 804E08D8
  c->r[3]=c->r[3]+0x00000084u; // 804E08DC
  c->lr=0x804E08E4u; f_80383214(c); // 804E08E0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E08E4
  c->r[3]=c->r[1]+0x00000038u; // 804E08E8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E08EC
  c->r[4]=c->r[1]+0x00000020u; // 804E08F0
  {uint32_t ea=c->r[2]+0x00001828u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E08F4
  c->r[5]=c->r[1]+0x0000002Cu; // 804E08F8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804E08FC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 804E0900
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804E0904
  c->lr=0x804E090Cu; f_80383AA0(c); // 804E0908
  c->r[4]=c->r[30]|c->r[30]; // 804E090C
  c->r[3]=c->r[1]+0x00000010u; // 804E0910
  c->lr=0x804E0918u; f_804D4BD8(c); // 804E0914
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0918
  c->r[3]=0u+0x00000000u; // 804E091C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0920
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0924
  fcmp(c,0,c->f[0],c->f[1]); // 804E0928
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804E092C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804E0930
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0934
  if (!crb(c,2)) { goto L_804E0970; } // 804E0938
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E093C
  fcmp(c,0,c->f[1],c->f[0]); // 804E0940
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0944
  if (!crb(c,2)) { goto L_804E0970; } // 804E0948
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E094C
  fcmp(c,0,c->f[0],c->f[2]); // 804E0950
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0954
  if (!crb(c,2)) { goto L_804E0970; } // 804E0958
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E095C
  fcmp(c,0,c->f[2],c->f[0]); // 804E0960
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0964
  if (!crb(c,2)) { goto L_804E0970; } // 804E0968
  c->r[3]=0u+0x00000001u; // 804E096C
L_804E0970:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 804E0970
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 804E0974
  c->r[30]=R32(c->r[1]+0x00000068u); // 804E0978
  c->lr=c->r[0]; // 804E097C
  c->r[1]=c->r[1]+0x00000070u; // 804E0980
  return; // 804E0984
}

// fn_804E0988
void f_804E0988(Ctx* __restrict c) {
  trace_call(0x804E0988u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E0988
  c->r[0]=c->lr; // 804E098C
  W32(c->r[1]+0x00000094u,c->r[0]); // 804E0990
  c->r[11]=c->r[1]+0x00000090u; // 804E0994
  c->lr=0x804E099Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E0998
  c->r[0]=R8(c->r[3]+0x000000BBu); // 804E099C
  c->r[30]=c->r[3]|c->r[3]; // 804E09A0
  c->r[31]=c->r[4]|c->r[4]; // 804E09A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E09A8
  if (!crb(c,2)) { goto L_804E09B8; } // 804E09AC
  c->r[3]=0u+0x00000000u; // 804E09B0
  goto L_804E0C6C; // 804E09B4
L_804E09B8:;
  c->r[29]=c->r[3]+0x00000014u; // 804E09B8
  c->r[25]=c->r[13]+0xFFFFE4C0u; // 804E09BC
  c->r[26]=c->r[13]+0xFFFFE4C0u; // 804E09C0
  goto L_804E0B58; // 804E09C4
L_804E09C8:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 804E09C8
  c->r[0]=R8(c->r[3]+0x000000B7u); // 804E09CC
  c->r[24]=c->r[3]+0xFFFFFFFCu; // 804E09D0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E09D4
  if (!crb(c,2)) { goto L_804E09E4; } // 804E09D8
  c->r[3]=0u+0x00000000u; // 804E09DC
  goto L_804E0B48; // 804E09E0
L_804E09E4:;
  c->r[28]=c->r[24]+0x00000014u; // 804E09E4
  goto L_804E0AC4; // 804E09E8
L_804E09EC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 804E09EC
  c->r[0]=R8(c->r[3]+0x000000B7u); // 804E09F0
  c->r[23]=c->r[3]+0xFFFFFFFCu; // 804E09F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E09F8
  if (!crb(c,2)) { goto L_804E0A08; } // 804E09FC
  c->r[3]=0u+0x00000000u; // 804E0A00
  goto L_804E0AB4; // 804E0A04
L_804E0A08:;
  c->r[27]=c->r[23]+0x00000014u; // 804E0A08
  goto L_804E0A30; // 804E0A0C
L_804E0A10:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 804E0A10
  c->r[4]=c->r[31]|c->r[31]; // 804E0A14
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 804E0A18
  c->lr=0x804E0A20u; f_804E0988(c); // 804E0A1C
  cmps(c,0,(int32_t)c->r[3],0); // 804E0A20
  if (crb(c,2)) { goto L_804E0A2C; } // 804E0A24
  goto L_804E0AB4; // 804E0A28
L_804E0A2C:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 804E0A2C
L_804E0A30:;
  c->r[0]=R32(c->r[23]+0x00000014u); // 804E0A30
  cmpu(c,0,c->r[27],c->r[0]); // 804E0A34
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0A10; } // 804E0A38
  cmps(c,0,(int32_t)c->r[23],0); // 804E0A3C
  if (crb(c,2)) { goto L_804E0A88; } // 804E0A40
  c->r[12]=R32(c->r[23]+0x00000000u); // 804E0A44
  c->r[3]=c->r[23]|c->r[23]; // 804E0A48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0A4C
  c->ctr=c->r[12]; // 804E0A50
  if (true) { c->lr=0x804E0A58u; dispatch(c,c->ctr); } // 804E0A54
  goto L_804E0A70; // 804E0A58
L_804E0A5C:;
  cmpu(c,0,c->r[3],c->r[25]); // 804E0A5C
  if (!crb(c,2)) { goto L_804E0A6C; } // 804E0A60
  c->r[0]=0u+0x00000001u; // 804E0A64
  goto L_804E0A7C; // 804E0A68
L_804E0A6C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0A6C
L_804E0A70:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0A70
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0A5C; } // 804E0A74
  c->r[0]=0u+0x00000000u; // 804E0A78
L_804E0A7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0A7C
  if (crb(c,2)) { goto L_804E0A88; } // 804E0A80
  goto L_804E0A8C; // 804E0A84
L_804E0A88:;
  c->r[23]=0u+0x00000000u; // 804E0A88
L_804E0A8C:;
  cmps(c,0,(int32_t)c->r[23],0); // 804E0A8C
  if (crb(c,2)) { goto L_804E0AB0; } // 804E0A90
  c->r[3]=c->r[23]|c->r[23]; // 804E0A94
  c->r[4]=c->r[31]|c->r[31]; // 804E0A98
  c->lr=0x804E0AA0u; f_804E08BC(c); // 804E0A9C
  cmps(c,0,(int32_t)c->r[3],0); // 804E0AA0
  if (crb(c,2)) { goto L_804E0AB0; } // 804E0AA4
  c->r[3]=c->r[23]|c->r[23]; // 804E0AA8
  goto L_804E0AB4; // 804E0AAC
L_804E0AB0:;
  c->r[3]=0u+0x00000000u; // 804E0AB0
L_804E0AB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0AB4
  if (crb(c,2)) { goto L_804E0AC0; } // 804E0AB8
  goto L_804E0B48; // 804E0ABC
L_804E0AC0:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 804E0AC0
L_804E0AC4:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 804E0AC4
  cmpu(c,0,c->r[28],c->r[0]); // 804E0AC8
  if (!crb(c,2)) { IRQCHK(c); goto L_804E09EC; } // 804E0ACC
  cmps(c,0,(int32_t)c->r[24],0); // 804E0AD0
  if (crb(c,2)) { goto L_804E0B1C; } // 804E0AD4
  c->r[12]=R32(c->r[24]+0x00000000u); // 804E0AD8
  c->r[3]=c->r[24]|c->r[24]; // 804E0ADC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0AE0
  c->ctr=c->r[12]; // 804E0AE4
  if (true) { c->lr=0x804E0AECu; dispatch(c,c->ctr); } // 804E0AE8
  goto L_804E0B04; // 804E0AEC
L_804E0AF0:;
  cmpu(c,0,c->r[3],c->r[26]); // 804E0AF0
  if (!crb(c,2)) { goto L_804E0B00; } // 804E0AF4
  c->r[0]=0u+0x00000001u; // 804E0AF8
  goto L_804E0B10; // 804E0AFC
L_804E0B00:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0B00
L_804E0B04:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0B04
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0AF0; } // 804E0B08
  c->r[0]=0u+0x00000000u; // 804E0B0C
L_804E0B10:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0B10
  if (crb(c,2)) { goto L_804E0B1C; } // 804E0B14
  goto L_804E0B20; // 804E0B18
L_804E0B1C:;
  c->r[24]=0u+0x00000000u; // 804E0B1C
L_804E0B20:;
  cmps(c,0,(int32_t)c->r[24],0); // 804E0B20
  if (crb(c,2)) { goto L_804E0B44; } // 804E0B24
  c->r[3]=c->r[24]|c->r[24]; // 804E0B28
  c->r[4]=c->r[31]|c->r[31]; // 804E0B2C
  c->lr=0x804E0B34u; f_804E08BC(c); // 804E0B30
  cmps(c,0,(int32_t)c->r[3],0); // 804E0B34
  if (crb(c,2)) { goto L_804E0B44; } // 804E0B38
  c->r[3]=c->r[24]|c->r[24]; // 804E0B3C
  goto L_804E0B48; // 804E0B40
L_804E0B44:;
  c->r[3]=0u+0x00000000u; // 804E0B44
L_804E0B48:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0B48
  if (crb(c,2)) { goto L_804E0B54; } // 804E0B4C
  goto L_804E0C6C; // 804E0B50
L_804E0B54:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 804E0B54
L_804E0B58:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 804E0B58
  cmpu(c,0,c->r[29],c->r[0]); // 804E0B5C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E09C8; } // 804E0B60
  cmps(c,0,(int32_t)c->r[30],0); // 804E0B64
  c->r[27]=c->r[13]+0xFFFFE4C0u; // 804E0B68
  if (crb(c,2)) { goto L_804E0BB4; } // 804E0B6C
  c->r[12]=R32(c->r[30]+0x00000000u); // 804E0B70
  c->r[3]=c->r[30]|c->r[30]; // 804E0B74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0B78
  c->ctr=c->r[12]; // 804E0B7C
  if (true) { c->lr=0x804E0B84u; dispatch(c,c->ctr); } // 804E0B80
  goto L_804E0B9C; // 804E0B84
L_804E0B88:;
  cmpu(c,0,c->r[3],c->r[27]); // 804E0B88
  if (!crb(c,2)) { goto L_804E0B98; } // 804E0B8C
  c->r[0]=0u+0x00000001u; // 804E0B90
  goto L_804E0BA8; // 804E0B94
L_804E0B98:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0B98
L_804E0B9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0B9C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0B88; } // 804E0BA0
  c->r[0]=0u+0x00000000u; // 804E0BA4
L_804E0BA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0BA8
  if (crb(c,2)) { goto L_804E0BB4; } // 804E0BAC
  goto L_804E0BB8; // 804E0BB0
L_804E0BB4:;
  c->r[30]=0u+0x00000000u; // 804E0BB4
L_804E0BB8:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E0BB8
  if (crb(c,2)) { goto L_804E0C68; } // 804E0BBC
  c->r[3]=c->r[30]+0x00000084u; // 804E0BC0
  c->r[4]=c->r[1]+0x00000038u; // 804E0BC4
  c->lr=0x804E0BCCu; f_80383214(c); // 804E0BC8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0BCC
  c->r[3]=c->r[1]+0x00000038u; // 804E0BD0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0BD4
  c->r[4]=c->r[1]+0x0000001Cu; // 804E0BD8
  {uint32_t ea=c->r[2]+0x00001828u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0BDC
  c->r[5]=c->r[1]+0x00000010u; // 804E0BE0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 804E0BE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804E0BE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 804E0BEC
  c->lr=0x804E0BF4u; f_80383AA0(c); // 804E0BF0
  c->r[4]=c->r[30]|c->r[30]; // 804E0BF4
  c->r[3]=c->r[1]+0x00000028u; // 804E0BF8
  c->lr=0x804E0C00u; f_804D4BD8(c); // 804E0BFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0C00
  c->r[0]=0u+0x00000000u; // 804E0C04
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0C08
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0C0C
  fcmp(c,0,c->f[0],c->f[2]); // 804E0C10
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804E0C14
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804E0C18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0C1C
  if (!crb(c,2)) { goto L_804E0C58; } // 804E0C20
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0C24
  fcmp(c,0,c->f[2],c->f[0]); // 804E0C28
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0C2C
  if (!crb(c,2)) { goto L_804E0C58; } // 804E0C30
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0C34
  fcmp(c,0,c->f[0],c->f[1]); // 804E0C38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0C3C
  if (!crb(c,2)) { goto L_804E0C58; } // 804E0C40
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0C44
  fcmp(c,0,c->f[1],c->f[0]); // 804E0C48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0C4C
  if (!crb(c,2)) { goto L_804E0C58; } // 804E0C50
  c->r[0]=0u+0x00000001u; // 804E0C54
L_804E0C58:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0C58
  if (crb(c,2)) { goto L_804E0C68; } // 804E0C5C
  c->r[3]=c->r[30]|c->r[30]; // 804E0C60
  goto L_804E0C6C; // 804E0C64
L_804E0C68:;
  c->r[3]=0u+0x00000000u; // 804E0C68
L_804E0C6C:;
  c->r[11]=c->r[1]+0x00000090u; // 804E0C6C
  c->lr=0x804E0C74u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E0C70
  c->r[0]=R32(c->r[1]+0x00000094u); // 804E0C74
  c->lr=c->r[0]; // 804E0C78
  c->r[1]=c->r[1]+0x00000090u; // 804E0C7C
  return; // 804E0C80
}

// fn_804E0C84
void f_804E0C84(Ctx* __restrict c) {
  trace_call(0x804E0C84u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E0C84
  c->r[0]=c->lr; // 804E0C88
  W32(c->r[1]+0x00000094u,c->r[0]); // 804E0C8C
  c->r[11]=c->r[1]+0x00000090u; // 804E0C90
  c->lr=0x804E0C98u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E0C94
  c->r[31]=R32(c->r[3]+0x00000010u); // 804E0C98
  c->r[30]=c->r[4]|c->r[4]; // 804E0C9C
  c->r[0]=R8(c->r[31]+0x000000BBu); // 804E0CA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E0CA4
  if (!crb(c,2)) { goto L_804E0CB4; } // 804E0CA8
  c->r[3]=0u+0x00000000u; // 804E0CAC
  goto L_804E0F68; // 804E0CB0
L_804E0CB4:;
  c->r[29]=c->r[31]+0x00000014u; // 804E0CB4
  c->r[26]=c->r[13]+0xFFFFE4C0u; // 804E0CB8
  c->r[25]=c->r[13]+0xFFFFE4C0u; // 804E0CBC
  goto L_804E0E54; // 804E0CC0
L_804E0CC4:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 804E0CC4
  c->r[0]=R8(c->r[3]+0x000000B7u); // 804E0CC8
  c->r[24]=c->r[3]+0xFFFFFFFCu; // 804E0CCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E0CD0
  if (!crb(c,2)) { goto L_804E0CE0; } // 804E0CD4
  c->r[3]=0u+0x00000000u; // 804E0CD8
  goto L_804E0E44; // 804E0CDC
L_804E0CE0:;
  c->r[28]=c->r[24]+0x00000014u; // 804E0CE0
  goto L_804E0DC0; // 804E0CE4
L_804E0CE8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 804E0CE8
  c->r[0]=R8(c->r[3]+0x000000B7u); // 804E0CEC
  c->r[23]=c->r[3]+0xFFFFFFFCu; // 804E0CF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 804E0CF4
  if (!crb(c,2)) { goto L_804E0D04; } // 804E0CF8
  c->r[3]=0u+0x00000000u; // 804E0CFC
  goto L_804E0DB0; // 804E0D00
L_804E0D04:;
  c->r[27]=c->r[23]+0x00000014u; // 804E0D04
  goto L_804E0D2C; // 804E0D08
L_804E0D0C:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 804E0D0C
  c->r[4]=c->r[30]|c->r[30]; // 804E0D10
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 804E0D14
  c->lr=0x804E0D1Cu; f_804E0988(c); // 804E0D18
  cmps(c,0,(int32_t)c->r[3],0); // 804E0D1C
  if (crb(c,2)) { goto L_804E0D28; } // 804E0D20
  goto L_804E0DB0; // 804E0D24
L_804E0D28:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 804E0D28
L_804E0D2C:;
  c->r[0]=R32(c->r[23]+0x00000014u); // 804E0D2C
  cmpu(c,0,c->r[27],c->r[0]); // 804E0D30
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0D0C; } // 804E0D34
  cmps(c,0,(int32_t)c->r[23],0); // 804E0D38
  if (crb(c,2)) { goto L_804E0D84; } // 804E0D3C
  c->r[12]=R32(c->r[23]+0x00000000u); // 804E0D40
  c->r[3]=c->r[23]|c->r[23]; // 804E0D44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0D48
  c->ctr=c->r[12]; // 804E0D4C
  if (true) { c->lr=0x804E0D54u; dispatch(c,c->ctr); } // 804E0D50
  goto L_804E0D6C; // 804E0D54
L_804E0D58:;
  cmpu(c,0,c->r[3],c->r[26]); // 804E0D58
  if (!crb(c,2)) { goto L_804E0D68; } // 804E0D5C
  c->r[0]=0u+0x00000001u; // 804E0D60
  goto L_804E0D78; // 804E0D64
L_804E0D68:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0D68
L_804E0D6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0D6C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0D58; } // 804E0D70
  c->r[0]=0u+0x00000000u; // 804E0D74
L_804E0D78:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0D78
  if (crb(c,2)) { goto L_804E0D84; } // 804E0D7C
  goto L_804E0D88; // 804E0D80
L_804E0D84:;
  c->r[23]=0u+0x00000000u; // 804E0D84
L_804E0D88:;
  cmps(c,0,(int32_t)c->r[23],0); // 804E0D88
  if (crb(c,2)) { goto L_804E0DAC; } // 804E0D8C
  c->r[3]=c->r[23]|c->r[23]; // 804E0D90
  c->r[4]=c->r[30]|c->r[30]; // 804E0D94
  c->lr=0x804E0D9Cu; f_804E08BC(c); // 804E0D98
  cmps(c,0,(int32_t)c->r[3],0); // 804E0D9C
  if (crb(c,2)) { goto L_804E0DAC; } // 804E0DA0
  c->r[3]=c->r[23]|c->r[23]; // 804E0DA4
  goto L_804E0DB0; // 804E0DA8
L_804E0DAC:;
  c->r[3]=0u+0x00000000u; // 804E0DAC
L_804E0DB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0DB0
  if (crb(c,2)) { goto L_804E0DBC; } // 804E0DB4
  goto L_804E0E44; // 804E0DB8
L_804E0DBC:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 804E0DBC
L_804E0DC0:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 804E0DC0
  cmpu(c,0,c->r[28],c->r[0]); // 804E0DC4
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0CE8; } // 804E0DC8
  cmps(c,0,(int32_t)c->r[24],0); // 804E0DCC
  if (crb(c,2)) { goto L_804E0E18; } // 804E0DD0
  c->r[12]=R32(c->r[24]+0x00000000u); // 804E0DD4
  c->r[3]=c->r[24]|c->r[24]; // 804E0DD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0DDC
  c->ctr=c->r[12]; // 804E0DE0
  if (true) { c->lr=0x804E0DE8u; dispatch(c,c->ctr); } // 804E0DE4
  goto L_804E0E00; // 804E0DE8
L_804E0DEC:;
  cmpu(c,0,c->r[3],c->r[25]); // 804E0DEC
  if (!crb(c,2)) { goto L_804E0DFC; } // 804E0DF0
  c->r[0]=0u+0x00000001u; // 804E0DF4
  goto L_804E0E0C; // 804E0DF8
L_804E0DFC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0DFC
L_804E0E00:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0E00
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0DEC; } // 804E0E04
  c->r[0]=0u+0x00000000u; // 804E0E08
L_804E0E0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0E0C
  if (crb(c,2)) { goto L_804E0E18; } // 804E0E10
  goto L_804E0E1C; // 804E0E14
L_804E0E18:;
  c->r[24]=0u+0x00000000u; // 804E0E18
L_804E0E1C:;
  cmps(c,0,(int32_t)c->r[24],0); // 804E0E1C
  if (crb(c,2)) { goto L_804E0E40; } // 804E0E20
  c->r[3]=c->r[24]|c->r[24]; // 804E0E24
  c->r[4]=c->r[30]|c->r[30]; // 804E0E28
  c->lr=0x804E0E30u; f_804E08BC(c); // 804E0E2C
  cmps(c,0,(int32_t)c->r[3],0); // 804E0E30
  if (crb(c,2)) { goto L_804E0E40; } // 804E0E34
  c->r[3]=c->r[24]|c->r[24]; // 804E0E38
  goto L_804E0E44; // 804E0E3C
L_804E0E40:;
  c->r[3]=0u+0x00000000u; // 804E0E40
L_804E0E44:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0E44
  if (crb(c,2)) { goto L_804E0E50; } // 804E0E48
  goto L_804E0F68; // 804E0E4C
L_804E0E50:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 804E0E50
L_804E0E54:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 804E0E54
  cmpu(c,0,c->r[29],c->r[0]); // 804E0E58
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0CC4; } // 804E0E5C
  cmps(c,0,(int32_t)c->r[31],0); // 804E0E60
  c->r[25]=c->r[13]+0xFFFFE4C0u; // 804E0E64
  if (crb(c,2)) { goto L_804E0EB0; } // 804E0E68
  c->r[12]=R32(c->r[31]+0x00000000u); // 804E0E6C
  c->r[3]=c->r[31]|c->r[31]; // 804E0E70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E0E74
  c->ctr=c->r[12]; // 804E0E78
  if (true) { c->lr=0x804E0E80u; dispatch(c,c->ctr); } // 804E0E7C
  goto L_804E0E98; // 804E0E80
L_804E0E84:;
  cmpu(c,0,c->r[3],c->r[25]); // 804E0E84
  if (!crb(c,2)) { goto L_804E0E94; } // 804E0E88
  c->r[0]=0u+0x00000001u; // 804E0E8C
  goto L_804E0EA4; // 804E0E90
L_804E0E94:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E0E94
L_804E0E98:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E0E98
  if (!crb(c,2)) { IRQCHK(c); goto L_804E0E84; } // 804E0E9C
  c->r[0]=0u+0x00000000u; // 804E0EA0
L_804E0EA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0EA4
  if (crb(c,2)) { goto L_804E0EB0; } // 804E0EA8
  goto L_804E0EB4; // 804E0EAC
L_804E0EB0:;
  c->r[31]=0u+0x00000000u; // 804E0EB0
L_804E0EB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E0EB4
  if (crb(c,2)) { goto L_804E0F64; } // 804E0EB8
  c->r[3]=c->r[31]+0x00000084u; // 804E0EBC
  c->r[4]=c->r[1]+0x00000038u; // 804E0EC0
  c->lr=0x804E0EC8u; f_80383214(c); // 804E0EC4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0EC8
  c->r[3]=c->r[1]+0x00000038u; // 804E0ECC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0ED0
  c->r[4]=c->r[1]+0x00000020u; // 804E0ED4
  {uint32_t ea=c->r[2]+0x00001828u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0ED8
  c->r[5]=c->r[1]+0x0000002Cu; // 804E0EDC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804E0EE0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 804E0EE4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804E0EE8
  c->lr=0x804E0EF0u; f_80383AA0(c); // 804E0EEC
  c->r[4]=c->r[31]|c->r[31]; // 804E0EF0
  c->r[3]=c->r[1]+0x00000010u; // 804E0EF4
  c->lr=0x804E0EFCu; f_804D4BD8(c); // 804E0EF8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0EFC
  c->r[0]=0u+0x00000000u; // 804E0F00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0F04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E0F08
  fcmp(c,0,c->f[0],c->f[1]); // 804E0F0C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804E0F10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804E0F14
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0F18
  if (!crb(c,2)) { goto L_804E0F54; } // 804E0F1C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0F20
  fcmp(c,0,c->f[1],c->f[0]); // 804E0F24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0F28
  if (!crb(c,2)) { goto L_804E0F54; } // 804E0F2C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0F30
  fcmp(c,0,c->f[0],c->f[2]); // 804E0F34
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0F38
  if (!crb(c,2)) { goto L_804E0F54; } // 804E0F3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0F40
  fcmp(c,0,c->f[2],c->f[0]); // 804E0F44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E0F48
  if (!crb(c,2)) { goto L_804E0F54; } // 804E0F4C
  c->r[0]=0u+0x00000001u; // 804E0F50
L_804E0F54:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E0F54
  if (crb(c,2)) { goto L_804E0F64; } // 804E0F58
  c->r[3]=c->r[31]|c->r[31]; // 804E0F5C
  goto L_804E0F68; // 804E0F60
L_804E0F64:;
  c->r[3]=0u+0x00000000u; // 804E0F64
L_804E0F68:;
  c->r[11]=c->r[1]+0x00000090u; // 804E0F68
  c->lr=0x804E0F70u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E0F6C
  c->r[0]=R32(c->r[1]+0x00000094u); // 804E0F70
  c->lr=c->r[0]; // 804E0F74
  c->r[1]=c->r[1]+0x00000090u; // 804E0F78
  return; // 804E0F7C
}

// fn_804E0F80
void f_804E0F80(Ctx* __restrict c) {
  trace_call(0x804E0F80u);
  {uint32_t ea=c->r[2]+0x00001830u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0F80
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E0F84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E0F88
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,5);} // 804E0F8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000018u); // 804E0F90
  W16(c->r[1]+0x0000000Au,c->r[0]); // 804E0F94
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,5);} // 804E0F98
  {uint32_t ea=c->r[2]+0x00001834u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E0F9C
  {uint32_t ea=c->r[2]+0x00001838u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0FA0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804E0FA4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E0FA8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 804E0FAC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804E0FB0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 804E0FB4
  c->r[3]=R16(c->r[1]+0x00000014u); // 804E0FB8
  W16(c->r[1]+0x00000008u,c->r[3]); // 804E0FBC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 804E0FC0
  c->r[5]=0u+0x80720000u; // 804E0FC4
  c->r[6]=rotl(c->r[3],3)&0xFFFFFFF8u; // 804E0FC8
  c->r[3]=rotl(c->r[0],23)&0xFF800000u; // 804E0FCC
  c->r[5]=c->r[5]+0xFFFFAA58u; // 804E0FD0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E0FD4
  c->r[4]=c->r[5]+c->r[6]; // 804E0FD8
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 804E0FDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E0FE0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E0FE4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E0FE8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804E0FEC
  c->r[0]=R32(c->r[1]+0x00000010u); // 804E0FF0
  c->r[0]=c->r[3]+c->r[0]; // 804E0FF4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 804E0FF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E0FFC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1000
  c->r[1]=c->r[1]+0x00000020u; // 804E1004
  return; // 804E1008
}

// fn_804E100C
void f_804E100C(Ctx* __restrict c) {
  trace_call(0x804E100Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E100C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804E1010
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804E1014
  c->r[3]=R32(c->r[1]+0x00000018u); // 804E1018
  c->r[0]=R32(c->r[1]+0x00000010u); // 804E101C
  c->r[3]=rotl(c->r[3],9)&0x000000FFu; // 804E1020
  c->r[0]=rotl(c->r[0],0)&0x807FFFFFu; // 804E1024
  c->r[3]=c->r[3]+0xFFFFFF81u; // 804E1028
  c->r[0]=c->r[0]|0x3F800000u; // 804E102C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 804E1030
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E1034
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1038
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,5);} // 804E103C
  {uint32_t ea=c->r[2]+0x00001840u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1040
  {uint32_t ea=c->r[2]+0x0000183Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1044
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 804E1048
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 804E104C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,1,3);} // 804E1050
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804E1054
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E1058
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,1,3);} // 804E105C
  c->r[4]=0u+0x80720000u; // 804E1060
  {uint32_t ea=c->r[2]+0x00001834u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1064
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E1068
  c->r[4]=c->r[4]+0xFFFFAB60u; // 804E106C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 804E1070
  c->r[3]=c->r[4]+c->r[0]; // 804E1074
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1078
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E107C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 804E1080
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 804E1084
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804E1088
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 804E108C
  c->r[1]=c->r[1]+0x00000020u; // 804E1090
  return; // 804E1094
}

// fn_804E1098
void f_804E1098(Ctx* __restrict c) {
  trace_call(0x804E1098u);
  c->f[0]=frsqrte(c->f[1]); // 804E1098
  {uint32_t ea=c->r[2]+0x00001844u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E109C
  {uint32_t ea=c->r[2]+0x00001848u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E10A0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 804E10A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804E10A8
  c->f[4]=c->ps1[4]=S(-std::fma(c->f[4],c->f[1],-c->f[3])); // 804E10AC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 804E10B0
  c->f[1]=c->f[0]; // 804E10B4
  return; // 804E10B8
}

// fn_804E10BC
void f_804E10BC(Ctx* __restrict c) {
  trace_call(0x804E10BCu);
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[5]); // 804E10BC
  {uint32_t ea=c->r[2]+0x0000184Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E10C0
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[5]); // 804E10C4
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 804E10C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 804E10CC
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 804E10D0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[4]); // 804E10D4
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[0]); // 804E10D8
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[2]); // 804E10DC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 804E10E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 804E10E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E10E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E10EC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 804E10F0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 804E10F4
  return; // 804E10F8
}

// fn_804E10FC
void f_804E10FC(Ctx* __restrict c) {
  trace_call(0x804E10FCu);
  c->f[3]=std::fabs(c->f[1]); // 804E10FC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1100
  {uint32_t ea=c->r[2]+0x00001850u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1104
  goto L_804E1110; // 804E1108
L_804E110C:;
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 804E110C
L_804E1110:;
  fcmp(c,0,c->f[3],c->f[0]); // 804E1110
  if (crb(c,1)) { IRQCHK(c); goto L_804E110C; } // 804E1114
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,3,ea,1,3);} // 804E1118
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804E111C
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E1120
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 804E1124
  c->r[4]=0u+0x806A0000u; // 804E1128
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 804E112C
  {uint32_t ea=c->r[2]+0x00001854u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1130
  c->r[4]=c->r[4]+0x00000AB8u; // 804E1134
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 804E1138
  c->r[3]=c->r[4]+c->r[0]; // 804E113C
  fcmp(c,0,c->f[1],c->f[0]); // 804E1140
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1144
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1148
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 804E114C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E1150
  if (!crb(c,0)) { goto L_804E115C; } // 804E1154
  c->f[1]=-c->f[1]; // 804E1158
L_804E115C:;
  c->r[1]=c->r[1]+0x00000010u; // 804E115C
  return; // 804E1160
}

// fn_804E1164
void f_804E1164(Ctx* __restrict c) {
  trace_call(0x804E1164u);
  c->f[1]=std::fabs(c->f[1]); // 804E1164
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1168
  {uint32_t ea=c->r[2]+0x00001850u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E116C
  goto L_804E1178; // 804E1170
L_804E1174:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804E1174
L_804E1178:;
  fcmp(c,0,c->f[1],c->f[0]); // 804E1178
  if (crb(c,1)) { IRQCHK(c); goto L_804E1174; } // 804E117C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 804E1180
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804E1184
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E1188
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 804E118C
  c->r[3]=0u+0x806A0000u; // 804E1190
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 804E1194
  c->r[3]=c->r[3]+0x00000AB8u; // 804E1198
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E119C
  c->r[3]=c->r[3]+c->r[0]; // 804E11A0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E11A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E11A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E11AC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 804E11B0
  c->r[1]=c->r[1]+0x00000010u; // 804E11B4
  return; // 804E11B8
}

// fn_804E11BC
void f_804E11BC(Ctx* __restrict c) {
  trace_call(0x804E11BCu);
  c->f[0]=std::fabs(c->f[1]); // 804E11BC
  c->r[5]=0u+0x806A0000u; // 804E11C0
  {uint32_t ea=c->r[2]+0x00001850u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E11C4
  c->r[5]=c->r[5]+0x00000AB8u; // 804E11C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 804E11CC
  fcmp(c,0,c->f[0],c->f[2]); // 804E11D0
  if (!crb(c,1)) { goto L_804E11E8; } // 804E11D4
L_804E11D8:;
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804E11D8
  fcmp(c,0,c->f[0],c->f[2]); // 804E11DC
  if (crb(c,1)) { IRQCHK(c); goto L_804E11D8; } // 804E11E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 804E11E4
L_804E11E8:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 804E11E8
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[2]); // 804E11EC
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 804E11F0
  c->r[5]=c->r[5]+c->r[0]; // 804E11F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,3);} // 804E11F8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,0);} // 804E11FC
  fcmp(c,0,c->f[1],c->f[4]); // 804E1200
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 804E1204
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E1208
  {double t0=S(std::fma(c->f[0],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[0],c->f[2],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 804E120C
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1210
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,1,0);} // 804E1214
  if (!crb(c,0)) { goto L_804E1220; } // 804E1218
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 804E121C
L_804E1220:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,0);} // 804E1220
  return; // 804E1224
}

// fn_804E1228
void f_804E1228(Ctx* __restrict c) {
  trace_call(0x804E1228u);
  {uint32_t ea=c->r[2]+0x00001854u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1228
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E122C
  fcmp(c,0,c->f[1],c->f[0]); // 804E1230
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E1234
  if (!crb(c,2)) { goto L_804E12D4; } // 804E1238
  {uint32_t ea=c->r[2]+0x00001858u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E123C
  fcmp(c,0,c->f[1],c->f[0]); // 804E1240
  if (!crb(c,1)) { goto L_804E1294; } // 804E1244
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 804E1248
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E124C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E1250
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,1,ea,1,3);} // 804E1254
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 804E1258
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 804E125C
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,2,ea,1,3);} // 804E1260
  c->r[4]=0u+0x80720000u; // 804E1264
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E1268
  {uint32_t ea=c->r[2]+0x00001860u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E126C
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E1270
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 804E1274
  c->r[3]=c->r[4]+c->r[0]; // 804E1278
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 804E127C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1280
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804E1284
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804E1288
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 804E128C
  goto L_804E1370; // 804E1290
L_804E1294:;
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1294
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804E1298
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,3);} // 804E129C
  c->r[0]=R16(c->r[1]+0x00000018u); // 804E12A0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E12A4
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,1,ea,1,3);} // 804E12A8
  c->r[4]=0u+0x80720000u; // 804E12AC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E12B0
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E12B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804E12B8
  c->r[3]=c->r[4]+c->r[0]; // 804E12BC
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804E12C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E12C4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E12C8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 804E12CC
  goto L_804E1370; // 804E12D0
L_804E12D4:;
  {uint32_t ea=c->r[2]+0x00001864u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E12D4
  fcmp(c,0,c->f[1],c->f[0]); // 804E12D8
  if (!crb(c,0)) { goto L_804E132C; } // 804E12DC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 804E12E0
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E12E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E12E8
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 804E12EC
  c->r[0]=R16(c->r[1]+0x00000014u); // 804E12F0
  W16(c->r[1]+0x0000000Au,c->r[0]); // 804E12F4
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 804E12F8
  c->r[4]=0u+0x80720000u; // 804E12FC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E1300
  {uint32_t ea=c->r[2]+0x00001868u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1304
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E1308
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 804E130C
  c->r[3]=c->r[4]+c->r[0]; // 804E1310
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1314
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1318
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 804E131C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804E1320
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 804E1324
  goto L_804E1370; // 804E1328
L_804E132C:;
  c->f[1]=-c->f[1]; // 804E132C
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1330
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E1334
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 804E1338
  c->r[0]=R16(c->r[1]+0x00000010u); // 804E133C
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E1340
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 804E1344
  c->r[4]=0u+0x80720000u; // 804E1348
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E134C
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E1350
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E1354
  c->r[3]=c->r[4]+c->r[0]; // 804E1358
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804E135C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1360
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E1364
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E1368
  c->f[1]=-c->f[0]; // 804E136C
L_804E1370:;
  c->r[1]=c->r[1]+0x00000020u; // 804E1370
  return; // 804E1374
}

// fn_804E1378
void f_804E1378(Ctx* __restrict c) {
  trace_call(0x804E1378u);
  {uint32_t ea=c->r[2]+0x00001854u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1378
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E137C
  fcmp(c,0,c->f[0],c->f[2]); // 804E1380
  if (!crb(c,2)) { goto L_804E1398; } // 804E1384
  fcmp(c,0,c->f[0],c->f[1]); // 804E1388
  if (!crb(c,2)) { goto L_804E1398; } // 804E138C
  c->f[1]=c->f[0]; // 804E1390
  goto L_804E1518; // 804E1394
L_804E1398:;
  {uint32_t ea=c->r[2]+0x00001854u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1398
  fcmp(c,0,c->f[2],c->f[4]); // 804E139C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E13A0
  if (!crb(c,2)) { goto L_804E1410; } // 804E13A4
  fcmp(c,0,c->f[1],c->f[4]); // 804E13A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E13AC
  if (!crb(c,2)) { goto L_804E13E0; } // 804E13B0
  fcmp(c,0,c->f[2],c->f[1]); // 804E13B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E13B8
  if (!crb(c,2)) { goto L_804E13CC; } // 804E13BC
  c->f[3]=c->f[2]; // 804E13C0
  c->r[0]=0u+0x00000000u; // 804E13C4
  goto L_804E1484; // 804E13C8
L_804E13CC:;
  c->f[3]=c->f[1]; // 804E13CC
  {uint32_t ea=c->r[2]+0x00001860u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E13D0
  c->f[1]=c->f[2]; // 804E13D4
  c->r[0]=0u+0x00000001u; // 804E13D8
  goto L_804E1484; // 804E13DC
L_804E13E0:;
  c->f[1]=-c->f[1]; // 804E13E0
  fcmp(c,0,c->f[2],c->f[1]); // 804E13E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E13E8
  if (!crb(c,2)) { goto L_804E13FC; } // 804E13EC
  c->f[3]=c->f[2]; // 804E13F0
  c->r[0]=0u+0x00000001u; // 804E13F4
  goto L_804E1484; // 804E13F8
L_804E13FC:;
  c->f[3]=c->f[1]; // 804E13FC
  {uint32_t ea=c->r[2]+0x00001868u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1400
  c->f[1]=c->f[2]; // 804E1404
  c->r[0]=0u+0x00000000u; // 804E1408
  goto L_804E1484; // 804E140C
L_804E1410:;
  fcmp(c,0,c->f[1],c->f[4]); // 804E1410
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E1414
  if (!crb(c,2)) { goto L_804E1450; } // 804E1418
  c->f[0]=-c->f[2]; // 804E141C
  fcmp(c,0,c->f[0],c->f[1]); // 804E1420
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E1424
  if (!crb(c,2)) { goto L_804E143C; } // 804E1428
  c->f[3]=c->f[0]; // 804E142C
  {uint32_t ea=c->r[2]+0x0000186Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1430
  c->r[0]=0u+0x00000001u; // 804E1434
  goto L_804E1484; // 804E1438
L_804E143C:;
  c->f[3]=c->f[1]; // 804E143C
  {uint32_t ea=c->r[2]+0x00001860u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1440
  c->f[1]=c->f[0]; // 804E1444
  c->r[0]=0u+0x00000000u; // 804E1448
  goto L_804E1484; // 804E144C
L_804E1450:;
  c->f[0]=-c->f[2]; // 804E1450
  c->f[1]=-c->f[1]; // 804E1454
  fcmp(c,0,c->f[0],c->f[1]); // 804E1458
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E145C
  if (!crb(c,2)) { goto L_804E1474; } // 804E1460
  c->f[3]=c->f[0]; // 804E1464
  {uint32_t ea=c->r[2]+0x00001870u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1468
  c->r[0]=0u+0x00000000u; // 804E146C
  goto L_804E1484; // 804E1470
L_804E1474:;
  c->f[3]=c->f[1]; // 804E1474
  {uint32_t ea=c->r[2]+0x00001868u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1478
  c->f[1]=c->f[0]; // 804E147C
  c->r[0]=0u+0x00000001u; // 804E1480
L_804E1484:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E1484
  if (crb(c,2)) { goto L_804E14D4; } // 804E1488
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 804E148C
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1490
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E1494
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 804E1498
  c->r[0]=R16(c->r[1]+0x00000010u); // 804E149C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 804E14A0
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,0,ea,1,3);} // 804E14A4
  c->r[4]=0u+0x80720000u; // 804E14A8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E14AC
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E14B0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E14B4
  c->r[3]=c->r[4]+c->r[0]; // 804E14B8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804E14BC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E14C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E14C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E14C8
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 804E14CC
  goto L_804E1518; // 804E14D0
L_804E14D4:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 804E14D4
  {uint32_t ea=c->r[2]+0x0000185Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E14D8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E14DC
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 804E14E0
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 804E14E4
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E14E8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 804E14EC
  c->r[4]=0u+0x80720000u; // 804E14F0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804E14F4
  c->r[4]=c->r[4]+0xFFFFB368u; // 804E14F8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E14FC
  c->r[3]=c->r[4]+c->r[0]; // 804E1500
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1504
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1508
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E150C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E1510
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 804E1514
L_804E1518:;
  c->r[1]=c->r[1]+0x00000020u; // 804E1518
  return; // 804E151C
}

// fn_804E1520
void f_804E1520(Ctx* __restrict c) {
  trace_call(0x804E1520u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E1520
  {uint32_t ea=c->r[2]+0x00001878u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1524
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 804E1528
  {uint32_t ea=c->r[2]+0x0000187Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E152C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 804E1530
  c->f[4]=frsqrte(c->f[3]); // 804E1534
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[4]); // 804E1538
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 804E153C
  c->f[5]=c->ps1[5]=S(-std::fma(c->f[5],c->f[3],-c->f[1])); // 804E1540
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 804E1544
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1548
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E154C
  return; // 804E1550
}

// fn_804E1554
void f_804E1554(Ctx* __restrict c) {
  trace_call(0x804E1554u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1554
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1558
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804E155C
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E1560
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1564
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1568
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804E156C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804E1570
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E1574
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1578
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E157C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 804E1580
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 804E1584
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E1588
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 804E158C
  return; // 804E1590
}

// fn_804E1594
void f_804E1594(Ctx* __restrict c) {
  trace_call(0x804E1594u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1594
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1598
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E159C
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E15A0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E15A4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E15A8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E15AC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 804E15B0
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E15B4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E15B8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E15BC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 804E15C0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 804E15C4
  c->f[3]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 804E15C8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 804E15CC
  return; // 804E15D0
}

// fn_804E15D4
void f_804E15D4(Ctx* __restrict c) {
  trace_call(0x804E15D4u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E15D4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E15D8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E15DC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E15E0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E15E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E15E8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E15EC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 804E15F0
  return; // 804E15F4
}

// fn_804E15F8
void f_804E15F8(Ctx* __restrict c) {
  trace_call(0x804E15F8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E15F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E15FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 804E1600
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 804E1604
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E1608
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 804E160C
  {double t0=S(c->f[0]+c->f[3]), t1=S(c->ps1[0]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E1610
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E1614
  return; // 804E1618
}

// MTX33Identity__Q24nw4r4mathFPQ34nw4r4math5MTX33
void f_804E161C(Ctx* __restrict c) {
  trace_call(0x804E161Cu);
  {uint32_t ea=c->r[2]+0x00001880u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E161C
  {uint32_t ea=c->r[2]+0x00001884u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1620
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E1624
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1628
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804E162C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E1630
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E1634
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 804E1638
  return; // 804E163C
}

// MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_804E1640(Ctx* __restrict c) {
  trace_call(0x804E1640u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E1640
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E1644
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 804E1648
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 804E164C
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 804E1650
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 804E1654
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804E1658
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E165C
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,2,ea,0,0);} // 804E1660
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,3,ea,1,0);} // 804E1664
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,0,0);} // 804E1668
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,1,0);} // 804E166C
  return; // 804E1670
}

// MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
void f_804E1674(Ctx* __restrict c) {
  trace_call(0x804E1674u);
  {uint32_t ea=c->r[2]+0x00001880u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1674
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804E1678
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E167C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 804E1680
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804E1684
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 804E1688
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 804E168C
  return; // 804E1690
}

// fn_804E1694
void f_804E1694(Ctx* __restrict c) {
  trace_call(0x804E1694u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E1694
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E1698
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E169C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E16A0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E16A4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E16A8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E16AC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 804E16B0
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 804E16B4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 804E16B8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E16BC
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 804E16C0
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,1,ea,0,0);} // 804E16C4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E16C8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E16CC
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 804E16D0
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,1,ea,0,0);} // 804E16D4
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 804E16D8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E16DC
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,0,ea,0,0);} // 804E16E0
  {uint32_t ea=c->r[5]+0x00000028u; psq_load(c,1,ea,0,0);} // 804E16E4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 804E16E8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E16EC
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 804E16F0
  return; // 804E16F4
}

// fn_804E16F8
void f_804E16F8(Ctx* __restrict c) {
  trace_call(0x804E16F8u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E16F8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E16FC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1700
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E1704
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E1708
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E170C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1710
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 804E1714
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 804E1718
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 804E171C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1720
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 804E1724
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,1,ea,0,0);} // 804E1728
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E172C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1730
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 804E1734
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,1,ea,0,0);} // 804E1738
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 804E173C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1740
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,0,ea,0,0);} // 804E1744
  {uint32_t ea=c->r[5]+0x00000028u; psq_load(c,1,ea,0,0);} // 804E1748
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 804E174C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1750
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 804E1754
  return; // 804E1758
}

// fn_804E175C
void f_804E175C(Ctx* __restrict c) {
  trace_call(0x804E175Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E175C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1760
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E1764
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E1768
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E176C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 804E1770
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 804E1774
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1778
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 804E177C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E1780
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1784
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 804E1788
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 804E178C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1790
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,0,ea,0,0);} // 804E1794
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 804E1798
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E179C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 804E17A0
  return; // 804E17A4
}

// MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_804E17A8(Ctx* __restrict c) {
  trace_call(0x804E17A8u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E17A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E17AC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 804E17B0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 804E17B4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E17B8
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 804E17BC
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 804E17C0
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 804E17C4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 804E17C8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 804E17CC
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,6,ea,0,0);} // 804E17D0
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 804E17D4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E17D8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E17DC
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 804E17E0
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 804E17E4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 804E17E8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804E17EC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,0,0);} // 804E17F0
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,6,ea,0,0);} // 804E17F4
  return; // 804E17F8
}

// MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_804E17FC(Ctx* __restrict c) {
  trace_call(0x804E17FCu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E17FC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E1800
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 804E1804
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 804E1808
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804E180C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 804E1810
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,5,ea,0,0);} // 804E1814
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 804E1818
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,6,ea,0,0);} // 804E181C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804E1820
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,7,ea,0,0);} // 804E1824
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 804E1828
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 804E182C
  {double t0=S(std::fma(c->f[5],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 804E1830
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,5,ea,0,0);} // 804E1834
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 804E1838
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,10,ea,1,0);} // 804E183C
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 804E1840
  {double t0=S(std::fma(c->f[7],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[7],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 804E1844
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,7,ea,0,0);} // 804E1848
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,10,ea,1,0);} // 804E184C
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 804E1850
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 804E1854
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 804E1858
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,6,ea,0,0);} // 804E185C
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,10,ea,1,0);} // 804E1860
  return; // 804E1864
}

// MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f
void f_804E1868(Ctx* __restrict c) {
  trace_call(0x804E1868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1868
  c->r[0]=c->lr; // 804E186C
  {uint32_t ea=c->r[2]+0x00001888u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1870
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E1874
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804E1878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E187C
  c->r[31]=c->r[3]|c->r[3]; // 804E1880
  c->lr=0x804E1888u; f_803834E8(c); // 804E1884
  c->r[3]=c->r[31]|c->r[31]; // 804E1888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E188C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E1890
  c->lr=c->r[0]; // 804E1894
  c->r[1]=c->r[1]+0x00000010u; // 804E1898
  return; // 804E189C
}

// fn_804E18A0
void f_804E18A0(Ctx* __restrict c) {
  trace_call(0x804E18A0u);
  c->r[4]=0u+0x806A0000u; // 804E18A0
  c->r[0]=c->r[2]+0x00001890u; // 804E18A4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E18A8
  c->r[4]=c->r[4]+0x00000AB8u; // 804E18AC
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 804E18B0
  {double t0=S(c->f[1]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 804E18B4
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E18B8
  {double t0=std::fabs(c->f[6]), t1=std::fabs(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 804E18BC
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 804E18C0
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E18C4
  fcmp(c,0,c->f[4],c->f[0]); // 804E18C8
  if (!crb(c,1)) { goto L_804E18DC; } // 804E18CC
L_804E18D0:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E18D0
  fcmp(c,0,c->f[4],c->f[0]); // 804E18D4
  if (crb(c,1)) { IRQCHK(c); goto L_804E18D0; } // 804E18D8
L_804E18DC:;
  fcmp(c,0,c->ps1[4],c->ps1[0]); // 804E18DC
  if (!crb(c,1)) { goto L_804E18F8; } // 804E18E0
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E18E4
L_804E18E8:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E18E8
  fcmp(c,0,c->f[4],c->f[0]); // 804E18EC
  if (crb(c,1)) { IRQCHK(c); goto L_804E18E8; } // 804E18F0
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E18F4
L_804E18F8:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,4,ea,0,3);} // 804E18F8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,0,3);} // 804E18FC
  c->f[5]=std::fabs(c->f[3]); // 804E1900
  c->r[0]=R32(c->r[1]+0x00000008u); // 804E1904
  fcmp(c,0,c->f[5],c->f[0]); // 804E1908
  if (!crb(c,1)) { goto L_804E191C; } // 804E190C
L_804E1910:;
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 804E1910
  fcmp(c,0,c->f[5],c->f[0]); // 804E1914
  if (crb(c,1)) { IRQCHK(c); goto L_804E1910; } // 804E1918
L_804E191C:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,5,ea,1,3);} // 804E191C
  c->r[5]=rotl(c->r[0],20)&0x00000FF0u; // 804E1920
  c->r[5]=c->r[4]+c->r[5]; // 804E1924
  {double t0=S(c->f[4]-c->f[7]), t1=S(c->ps1[4]-c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 804E1928
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E192C
  c->r[6]=rotl(c->r[0],4)&0x00000FF0u; // 804E1930
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 804E1934
  fcmp(c,0,c->f[6],c->f[2]); // 804E1938
  c->r[6]=c->r[4]+c->r[6]; // 804E193C
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[0]=t0; c->ps1[0]=t1;} // 804E1940
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E1944
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,8,ea,0,0);} // 804E1948
  c->r[0]=R16(c->r[1]+0x00000008u); // 804E194C
  if (!crb(c,0)) { goto L_804E195C; } // 804E1950
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 804E1954
  {double t0=S(c->f[9]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E1958
L_804E195C:;
  {double t0=S(std::fma(c->f[8],c->ps1[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 804E195C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,3);} // 804E1960
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 804E1964
  fcmp(c,0,c->ps1[6],c->ps1[2]); // 804E1968
  c->r[5]=c->r[4]+c->r[0]; // 804E196C
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 804E1970
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E1974
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 804E1978
  if (!crb(c,0)) { goto L_804E1988; } // 804E197C
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[9]=t0; c->ps1[9]=t1;} // 804E1980
  {double t0=S(c->f[9]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E1984
L_804E1988:;
  fcmp(c,0,c->f[3],c->f[2]); // 804E1988
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[2]=t0; c->ps1[2]=t1;} // 804E198C
  if (!crb(c,0)) { goto L_804E199C; } // 804E1990
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[9]=t0; c->ps1[9]=t1;} // 804E1994
  {double t0=S(c->f[9]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1998
L_804E199C:;
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 804E199C
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 804E19A0
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[7]=t0; c->ps1[7]=t1;} // 804E19A4
  {double t0=S(c->ps1[3]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 804E19A8
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 804E19AC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 804E19B0
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 804E19B4
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[8]=t0; c->ps1[8]=t1;} // 804E19B8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,1,0);} // 804E19BC
  {double t0=S(c->f[0]*c->ps1[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 804E19C0
  {double t0=S(c->f[3]*c->ps1[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E19C4
  {double t0=S(std::fma(c->f[6],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[6],c->f[1],c->ps1[8])); c->f[6]=t0; c->ps1[6]=t1;} // 804E19C8
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 804E19CC
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,6,ea,0,0);} // 804E19D0
  {double t0=S(c->f[7]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 804E19D4
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,6,ea,0,0);} // 804E19D8
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[2])); c->f[6]=t0; c->ps1[6]=t1;} // 804E19DC
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,6,ea,0,0);} // 804E19E0
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[6]=t0; c->ps1[6]=t1;} // 804E19E4
  {double t0=S(c->f[7]), t1=S(c->f[6]); c->f[6]=t0; c->ps1[6]=t1;} // 804E19E8
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,6,ea,0,0);} // 804E19EC
  {double t0=S(c->f[0]*c->ps1[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 804E19F0
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,6,ea,0,0);} // 804E19F4
  c->r[1]=c->r[1]+0x00000010u; // 804E19F8
  return; // 804E19FC
}

// VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_804E1A00(Ctx* __restrict c) {
  trace_call(0x804E1A00u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1A00
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1A04
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1A08
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 804E1A0C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1A10
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 804E1A14
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1A18
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 804E1A1C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1A20
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1A24
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[5]); // 804E1A28
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1A2C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 804E1A30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 804E1A34
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[5]); // 804E1A38
  {uint32_t ea=c->r[5]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E1A3C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1A40
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 804E1A44
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1A48
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 804E1A4C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804E1A50
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1A54
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 804E1A58
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 804E1A5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 804E1A60
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 804E1A64
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E1A68
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 804E1A6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 804E1A70
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E1A74
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 804E1A78
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804E1A7C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 804E1A80
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804E1A84
  c->r[1]=c->r[1]+0x00000020u; // 804E1A88
  return; // 804E1A8C
}

// MTX44Identity__Q24nw4r4mathFPQ34nw4r4math5MTX44
void f_804E1A90(Ctx* __restrict c) {
  trace_call(0x804E1A90u);
  {uint32_t ea=c->r[2]+0x00001880u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1A90
  {uint32_t ea=c->r[2]+0x00001884u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1A94
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E1A98
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1A9C
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804E1AA0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 804E1AA4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 804E1AA8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E1AAC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E1AB0
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 804E1AB4
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 804E1AB8
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,2,ea,0,0);} // 804E1ABC
  return; // 804E1AC0
}

// MTX44Copy__Q24nw4r4mathFPQ34nw4r4math5MTX44PCQ34nw4r4math5MTX44
void f_804E1AC4(Ctx* __restrict c) {
  trace_call(0x804E1AC4u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E1AC4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E1AC8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 804E1ACC
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 804E1AD0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 804E1AD4
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 804E1AD8
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,6,ea,0,0);} // 804E1ADC
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,7,ea,0,0);} // 804E1AE0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 804E1AE4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 804E1AE8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E1AEC
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 804E1AF0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 804E1AF4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 804E1AF8
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,6,ea,0,0);} // 804E1AFC
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,7,ea,0,0);} // 804E1B00
  return; // 804E1B04
}

// fn_804E1B08
void f_804E1B08(Ctx* __restrict c) {
  trace_call(0x804E1B08u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1B08
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E1B0C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1B10
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1B14
  c->f[10]=c->ps1[10]=S(c->f[0]*c->f[6]); // 804E1B18
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1B1C
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[6]); // 804E1B20
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 804E1B24
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1B28
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E1B2C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 804E1B30
  {uint32_t ea=c->r[4]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1B34
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[9]); // 804E1B38
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1B3C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[9]); // 804E1B40
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1B44
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[9]); // 804E1B48
  {uint32_t ea=c->r[5]+0x00000008u; c->f[13]=c->ps1[13]=RF32(ea);} // 804E1B4C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[9]); // 804E1B50
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E1B54
  c->f[11]=c->ps1[11]=S(c->f[10]+c->f[8]); // 804E1B58
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1B5C
  c->f[12]=c->ps1[12]=S(c->f[9]*c->f[13]); // 804E1B60
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 804E1B64
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 804E1B68
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1B6C
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[13]); // 804E1B70
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 804E1B74
  c->f[8]=c->ps1[8]=S(c->f[7]+c->f[6]); // 804E1B78
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804E1B7C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[13]); // 804E1B80
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1B84
  c->f[11]=c->ps1[11]=S(c->f[12]+c->f[11]); // 804E1B88
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1B8C
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 804E1B90
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1B94
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[11]); // 804E1B98
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 804E1B9C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 804E1BA0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[13]); // 804E1BA4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[10]);} // 804E1BA8
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[8]); // 804E1BAC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 804E1BB0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[10]);} // 804E1BB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 804E1BB8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 804E1BBC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 804E1BC0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E1BC4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[6]);} // 804E1BC8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 804E1BCC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804E1BD0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E1BD4
  c->r[1]=c->r[1]+0x00000020u; // 804E1BD8
  return; // 804E1BDC
}

// fn_804E1BE0
void f_804E1BE0(Ctx* __restrict c) {
  trace_call(0x804E1BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1BE0
  c->r[0]=c->lr; // 804E1BE4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E1BE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E1BEC
  c->r[7]=c->r[1]+0x00000020u; // 804E1BF0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E1BF4
  c->r[8]=c->r[1]+0x00000014u; // 804E1BF8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804E1BFC
  c->r[31]=c->r[4]|c->r[4]; // 804E1C00
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E1C04
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E1C08
  W32(c->r[1]+0x00000038u,c->r[30]); // 804E1C0C
  c->r[30]=c->r[3]|c->r[3]; // 804E1C10
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 804E1C14
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 804E1C18
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,1,0);} // 804E1C1C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,1,0);} // 804E1C20
  c->r[3]=c->r[7]|c->r[7]; // 804E1C24
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 804E1C28
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E1C2C
  c->r[4]=c->r[8]|c->r[8]; // 804E1C30
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,3,ea,0,0);} // 804E1C34
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 804E1C38
  c->r[5]=c->r[1]+0x00000008u; // 804E1C3C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,1,0);} // 804E1C40
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,3,ea,1,0);} // 804E1C44
  c->lr=0x804E1C4Cu; f_80383DE0(c); // 804E1C48
  c->r[4]=c->r[30]|c->r[30]; // 804E1C4C
  c->r[3]=c->r[1]+0x00000008u; // 804E1C50
  c->lr=0x804E1C58u; f_80383D38(c); // 804E1C54
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,2,ea,0,0);} // 804E1C58
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,1,ea,0,0);} // 804E1C5C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,1,0);} // 804E1C60
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E1C64
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,1,ea,1,0);} // 804E1C68
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E1C6C
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804E1C70
  c->f[0]=-c->f[0]; // 804E1C74
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E1C78
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804E1C7C
  c->r[30]=R32(c->r[1]+0x00000038u); // 804E1C80
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E1C84
  c->lr=c->r[0]; // 804E1C88
  c->r[1]=c->r[1]+0x00000040u; // 804E1C8C
  return; // 804E1C90
}

// fn_804E1C94
void f_804E1C94(Ctx* __restrict c) {
  trace_call(0x804E1C94u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1C94
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1C98
  fcmp(c,0,c->f[1],c->f[0]); // 804E1C9C
  if (!crb(c,1)) { goto L_804E1CAC; } // 804E1CA0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804E1CA4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804E1CA8
L_804E1CAC:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1CAC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1CB0
  fcmp(c,0,c->f[1],c->f[0]); // 804E1CB4
  if (!crb(c,1)) { goto L_804E1CC4; } // 804E1CB8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 804E1CBC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804E1CC0
L_804E1CC4:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1CC4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1CC8
  fcmp(c,0,c->f[1],c->f[0]); // 804E1CCC
  if (!crb(c,1)) return; // 804E1CD0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804E1CD4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804E1CD8
  return; // 804E1CDC
}

// Set__Q34nw4r4math4AABBFPCQ34nw4r4math4VEC3Ui
void f_804E1CE0(Ctx* __restrict c) {
  trace_call(0x804E1CE0u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1CE0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 804E1CE4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1CE8
  c->r[6]=c->r[4]+0x0000000Cu; // 804E1CEC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1CF0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 804E1CF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804E1CF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804E1CFC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804E1D00
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804E1D04
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 804E1D08
  c->ctr=c->r[0]; // 804E1D0C
  cmpu(c,0,c->r[5],0x00000001u); // 804E1D10
  if (!crb(c,1)) return; // 804E1D14
L_804E1D18:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1D18
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D1C
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D20
  if (!crb(c,0)) { goto L_804E1D30; } // 804E1D24
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 804E1D28
  goto L_804E1D40; // 804E1D2C
L_804E1D30:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D30
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D34
  if (!crb(c,1)) { goto L_804E1D40; } // 804E1D38
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804E1D3C
L_804E1D40:;
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1D40
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D44
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D48
  if (!crb(c,0)) { goto L_804E1D58; } // 804E1D4C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804E1D50
  goto L_804E1D68; // 804E1D54
L_804E1D58:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D58
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D5C
  if (!crb(c,1)) { goto L_804E1D68; } // 804E1D60
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 804E1D64
L_804E1D68:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1D68
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D6C
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D70
  if (!crb(c,0)) { goto L_804E1D80; } // 804E1D74
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 804E1D78
  goto L_804E1D90; // 804E1D7C
L_804E1D80:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1D80
  fcmp(c,0,c->f[1],c->f[0]); // 804E1D84
  if (!crb(c,1)) { goto L_804E1D90; } // 804E1D88
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 804E1D8C
L_804E1D90:;
  c->r[6]=c->r[6]+0x0000000Cu; // 804E1D90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E1D18; } // 804E1D94
  return; // 804E1D98
}

// Set__Q34nw4r4math4AABBFPCQ34nw4r4math4AABBPCQ34nw4r4math5MTX34
void f_804E1D9C(Ctx* __restrict c) {
  trace_call(0x804E1D9Cu);
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1D9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1DA0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1DA4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 804E1DA8
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1DAC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 804E1DB0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 804E1DB4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E1DB8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[3]); // 804E1DBC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 804E1DC0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1DC4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1DC8
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[6]); // 804E1DCC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1DD0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1DD4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804E1DD8
  fcmp(c,0,c->f[0],c->f[2]); // 804E1DDC
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 804E1DE0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 804E1DE4
  if (!crb(c,1)) { goto L_804E1DF8; } // 804E1DE8
  c->f[1]=c->f[0]; // 804E1DEC
  c->f[0]=c->f[2]; // 804E1DF0
  c->f[2]=c->f[1]; // 804E1DF4
L_804E1DF8:;
  fcmp(c,0,c->f[6],c->f[5]); // 804E1DF8
  if (!crb(c,0)) { goto L_804E1E0C; } // 804E1DFC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 804E1E00
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 804E1E04
  goto L_804E1E14; // 804E1E08
L_804E1E0C:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 804E1E0C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 804E1E10
L_804E1E14:;
  fcmp(c,0,c->f[3],c->f[4]); // 804E1E14
  if (!crb(c,0)) { goto L_804E1E28; } // 804E1E18
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 804E1E1C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 804E1E20
  goto L_804E1E30; // 804E1E24
L_804E1E28:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 804E1E28
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 804E1E2C
L_804E1E30:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E1E30
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E1E34
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E1E38
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[3]); // 804E1E3C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1E40
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[1]); // 804E1E44
  {uint32_t ea=c->r[5]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E1E48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804E1E4C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 804E1E50
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804E1E54
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 804E1E58
  {uint32_t ea=c->r[5]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E1E5C
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 804E1E60
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1E64
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1E68
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 804E1E6C
  fcmp(c,0,c->f[1],c->f[3]); // 804E1E70
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 804E1E74
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 804E1E78
  if (!crb(c,1)) { goto L_804E1E8C; } // 804E1E7C
  c->f[4]=c->f[1]; // 804E1E80
  c->f[1]=c->f[3]; // 804E1E84
  c->f[3]=c->f[4]; // 804E1E88
L_804E1E8C:;
  fcmp(c,0,c->f[8],c->f[7]); // 804E1E8C
  if (!crb(c,0)) { goto L_804E1EA0; } // 804E1E90
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[8]); // 804E1E94
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[7]); // 804E1E98
  goto L_804E1EA8; // 804E1E9C
L_804E1EA0:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[7]); // 804E1EA0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[8]); // 804E1EA4
L_804E1EA8:;
  fcmp(c,0,c->f[5],c->f[6]); // 804E1EA8
  if (!crb(c,0)) { goto L_804E1EBC; } // 804E1EAC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 804E1EB0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[6]); // 804E1EB4
  goto L_804E1EC4; // 804E1EB8
L_804E1EBC:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 804E1EBC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 804E1EC0
L_804E1EC4:;
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=c->ps1[7]=RF32(ea);} // 804E1EC4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1EC8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1ECC
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 804E1ED0
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1ED4
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[4]); // 804E1ED8
  {uint32_t ea=c->r[5]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E1EDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 804E1EE0
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[6]); // 804E1EE4
  c->f[11]=c->ps1[11]=S(c->f[5]+c->f[4]); // 804E1EE8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 804E1EEC
  {uint32_t ea=c->r[5]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E1EF0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 804E1EF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E1EF8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E1EFC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 804E1F00
  fcmp(c,0,c->f[10],c->f[11]); // 804E1F04
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 804E1F08
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 804E1F0C
  if (!crb(c,1)) { goto L_804E1F20; } // 804E1F10
  c->f[4]=c->f[10]; // 804E1F14
  c->f[10]=c->f[11]; // 804E1F18
  c->f[11]=c->f[4]; // 804E1F1C
L_804E1F20:;
  fcmp(c,0,c->f[8],c->f[7]); // 804E1F20
  if (!crb(c,0)) { goto L_804E1F34; } // 804E1F24
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 804E1F28
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[7]); // 804E1F2C
  goto L_804E1F3C; // 804E1F30
L_804E1F34:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[7]); // 804E1F34
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[8]); // 804E1F38
L_804E1F3C:;
  fcmp(c,0,c->f[5],c->f[6]); // 804E1F3C
  if (!crb(c,0)) { goto L_804E1F50; } // 804E1F40
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[5]); // 804E1F44
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[6]); // 804E1F48
  goto L_804E1F58; // 804E1F4C
L_804E1F50:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[6]); // 804E1F50
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[5]); // 804E1F54
L_804E1F58:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804E1F58
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804E1F5C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[10]);} // 804E1F60
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804E1F64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 804E1F68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[11]);} // 804E1F6C
  return; // 804E1F70
}

// fn_804E1F74
void f_804E1F74(Ctx* __restrict c) {
  trace_call(0x804E1F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E1F74
  c->r[0]=c->lr; // 804E1F78
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E1F7C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E1F80
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E1F84
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804E1F88
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804E1F8C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 804E1F90
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 804E1F94
  c->f[29]=c->f[2]; // 804E1F98
  {uint32_t ea=c->r[2]+0x00001898u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1F9C
  c->f[30]=c->f[3]; // 804E1FA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E1FA4
  c->f[31]=c->f[4]; // 804E1FA8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804E1FAC
  {uint32_t ea=c->r[2]+0x000018A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E1FB0
  c->r[31]=c->r[4]|c->r[4]; // 804E1FB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E1FB8
  c->r[30]=c->r[3]|c->r[3]; // 804E1FBC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804E1FC0
  {uint32_t ea=c->r[2]+0x000018A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E1FC4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 804E1FC8
  c->lr=0x804E1FD0u; f_803BA6C8(c); // 804E1FCC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804E1FD0
  c->r[3]=c->r[30]|c->r[30]; // 804E1FD4
  c->f[5]=c->f[30]; // 804E1FD8
  c->r[4]=c->r[31]|c->r[31]; // 804E1FDC
  c->f[6]=c->f[31]; // 804E1FE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 804E1FE4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[29]); // 804E1FE8
  c->f[2]=-c->f[1]; // 804E1FEC
  c->f[3]=-c->f[4]; // 804E1FF0
  c->lr=0x804E1FF8u; f_804E2028(c); // 804E1FF4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E1FF8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E1FFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804E2000
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804E2004
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 804E2008
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 804E200C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E2010
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E2014
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E2018
  c->lr=c->r[0]; // 804E201C
  c->r[1]=c->r[1]+0x00000040u; // 804E2020
  return; // 804E2024
}

// fn_804E2028
void f_804E2028(Ctx* __restrict c) {
  trace_call(0x804E2028u);
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E2028
  c->r[0]=c->lr; // 804E202C
  W32(c->r[1]+0x00000294u,c->r[0]); // 804E2030
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[31]);} // 804E2034
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,31,ea,0,0);} // 804E2038
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[30]);} // 804E203C
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,30,ea,0,0);} // 804E2040
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[29]);} // 804E2044
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,29,ea,0,0);} // 804E2048
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[28]);} // 804E204C
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,28,ea,0,0);} // 804E2050
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[27]);} // 804E2054
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,27,ea,0,0);} // 804E2058
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[26]);} // 804E205C
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,26,ea,0,0);} // 804E2060
  c->r[11]=c->r[1]+0x00000230u; // 804E2064
  c->lr=0x804E206Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E2068
  c->f[26]=c->f[1]; // 804E206C
  c->r[28]=c->r[4]|c->r[4]; // 804E2070
  c->f[27]=c->f[2]; // 804E2074
  c->r[27]=c->r[3]|c->r[3]; // 804E2078
  c->f[28]=c->f[3]; // 804E207C
  c->r[3]=c->r[28]|c->r[28]; // 804E2080
  c->f[29]=c->f[4]; // 804E2084
  c->r[4]=c->r[1]+0x00000180u; // 804E2088
  c->f[30]=c->f[5]; // 804E208C
  c->f[31]=c->f[6]; // 804E2090
  c->lr=0x804E2098u; f_80383214(c); // 804E2094
  c->r[3]=c->r[28]|c->r[28]; // 804E2098
  c->r[4]=c->r[27]|c->r[27]; // 804E209C
  c->lr=0x804E20A4u; f_80382F2C(c); // 804E20A0
  c->f[6]=c->ps1[6]=S(c->f[31]/c->f[30]); // 804E20A4
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E20A8
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[28]);} // 804E20AC
  c->r[29]=c->r[1]+0x000001B0u; // 804E20B0
  c->r[3]=c->r[1]+0x0000014Cu; // 804E20B4
  c->r[4]=c->r[1]+0x00000158u; // 804E20B8
  c->f[5]=-c->f[30]; // 804E20BC
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 804E20C0
  c->f[2]=-c->f[31]; // 804E20C4
  c->r[31]=c->r[27]+0x00000030u; // 804E20C8
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[28]); // 804E20CC
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[0]);} // 804E20D0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[26]); // 804E20D4
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[0]);} // 804E20D8
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[29]); // 804E20DC
  c->r[5]=c->r[1]+0x00000164u; // 804E20E0
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[27]); // 804E20E4
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[26]);} // 804E20E8
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[5]);} // 804E20EC
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[29]);} // 804E20F0
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[26]);} // 804E20F4
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[5]);} // 804E20F8
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[29]);} // 804E20FC
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[27]);} // 804E2100
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[5]);} // 804E2104
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[28]);} // 804E2108
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[27]);} // 804E210C
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[5]);} // 804E2110
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[4]);} // 804E2114
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[3]);} // 804E2118
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[2]);} // 804E211C
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[1]);} // 804E2120
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[3]);} // 804E2124
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[2]);} // 804E2128
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[1]);} // 804E212C
  {uint32_t ea=c->r[1]+0x000001FCu; WF32(ea,c->f[0]);} // 804E2130
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[2]);} // 804E2134
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[4]);} // 804E2138
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[0]);} // 804E213C
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[2]);} // 804E2140
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[5]);} // 804E2144
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[2]);} // 804E2148
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E214C
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E2150
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2154
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 804E2158
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E215C
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 804E2160
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E2164
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2168
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E216C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2170
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 804E2174
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2178
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E217C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E2180
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2184
  c->lr=0x804E218Cu; f_80383DE0(c); // 804E2188
  c->r[4]=c->r[31]|c->r[31]; // 804E218C
  c->r[3]=c->r[1]+0x00000164u; // 804E2190
  c->lr=0x804E2198u; f_80383D38(c); // 804E2194
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2198
  c->r[3]=c->r[1]+0x00000128u; // 804E219C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E21A0
  c->r[4]=c->r[1]+0x00000134u; // 804E21A4
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E21A8
  c->r[30]=c->r[27]+0x00000040u; // 804E21AC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E21B0
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E21B4
  c->r[5]=c->r[1]+0x00000140u; // 804E21B8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E21BC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E21C0
  c->f[0]=-c->f[0]; // 804E21C4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E21C8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E21CC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 804E21D0
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E21D4
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 804E21D8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E21DC
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 804E21E0
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E21E4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E21E8
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 804E21EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E21F0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E21F4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E21F8
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E21FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E2200
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2204
  c->lr=0x804E220Cu; f_80383DE0(c); // 804E2208
  c->r[4]=c->r[30]|c->r[30]; // 804E220C
  c->r[3]=c->r[1]+0x00000140u; // 804E2210
  c->lr=0x804E2218u; f_80383D38(c); // 804E2214
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2218
  c->r[3]=c->r[1]+0x00000104u; // 804E221C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E2220
  c->r[4]=c->r[1]+0x00000110u; // 804E2224
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2228
  c->r[31]=c->r[27]+0x00000050u; // 804E222C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2230
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2234
  c->r[5]=c->r[1]+0x0000011Cu; // 804E2238
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E223C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2240
  c->f[0]=-c->f[0]; // 804E2244
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2248
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E224C
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 804E2250
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2254
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E2258
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E225C
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 804E2260
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E2264
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2268
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 804E226C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E2270
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2274
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2278
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E227C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E2280
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2284
  c->lr=0x804E228Cu; f_80383DE0(c); // 804E2288
  c->r[4]=c->r[31]|c->r[31]; // 804E228C
  c->r[3]=c->r[1]+0x0000011Cu; // 804E2290
  c->lr=0x804E2298u; f_80383D38(c); // 804E2294
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2298
  c->r[3]=c->r[1]+0x000000E0u; // 804E229C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E22A0
  c->r[4]=c->r[1]+0x000000ECu; // 804E22A4
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E22A8
  c->r[30]=c->r[27]+0x00000060u; // 804E22AC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E22B0
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E22B4
  c->r[5]=c->r[1]+0x000000F8u; // 804E22B8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E22BC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E22C0
  c->f[0]=-c->f[0]; // 804E22C4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E22C8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E22CC
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 804E22D0
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E22D4
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 804E22D8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E22DC
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 804E22E0
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E22E4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E22E8
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 804E22EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E22F0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E22F4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E22F8
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E22FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E2300
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2304
  c->lr=0x804E230Cu; f_80383DE0(c); // 804E2308
  c->r[4]=c->r[30]|c->r[30]; // 804E230C
  c->r[3]=c->r[1]+0x000000F8u; // 804E2310
  c->lr=0x804E2318u; f_80383D38(c); // 804E2314
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2318
  c->r[31]=c->r[29]|c->r[29]; // 804E231C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E2320
  c->r[28]=0u+0x00000000u; // 804E2324
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2328
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E232C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2330
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2334
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2338
  c->f[0]=-c->f[0]; // 804E233C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2340
L_804E2344:;
  c->r[4]=c->r[31]|c->r[31]; // 804E2344
  c->r[5]=c->r[29]|c->r[29]; // 804E2348
  c->r[3]=c->r[1]+0x00000180u; // 804E234C
  c->lr=0x804E2354u; f_80383AA0(c); // 804E2350
  c->r[28]=c->r[28]+0x00000001u; // 804E2354
  c->r[31]=c->r[31]+0x0000000Cu; // 804E2358
  cmps(c,0,(int32_t)c->r[28],8); // 804E235C
  c->r[29]=c->r[29]+0x0000000Cu; // 804E2360
  if (crb(c,0)) { IRQCHK(c); goto L_804E2344; } // 804E2364
  c->r[4]=c->r[1]+0x00000170u; // 804E2368
  c->r[3]=c->r[1]+0x00000180u; // 804E236C
  c->r[5]=c->r[4]|c->r[4]; // 804E2370
  c->lr=0x804E2378u; f_80383AA0(c); // 804E2374
  c->r[3]=c->r[27]+0x00000078u; // 804E2378
  c->r[4]=c->r[1]+0x000001B0u; // 804E237C
  c->r[5]=0u+0x00000008u; // 804E2380
  c->lr=0x804E2388u; f_804E1CE0(c); // 804E2384
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E2388
  c->r[3]=c->r[1]+0x000000BCu; // 804E238C
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,2,ea,0,0);} // 804E2390
  c->r[4]=c->r[1]+0x000000C8u; // 804E2394
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2398
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 804E239C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E23A0
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,2,ea,1,0);} // 804E23A4
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E23A8
  c->r[30]=c->r[27]+0x00000090u; // 804E23AC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E23B0
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 804E23B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E23B8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E23BC
  c->r[5]=c->r[1]+0x000000D4u; // 804E23C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E23C4
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E23C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E23CC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E23D0
  c->lr=0x804E23D8u; f_80383DE0(c); // 804E23D4
  c->r[4]=c->r[30]|c->r[30]; // 804E23D8
  c->r[3]=c->r[1]+0x000000D4u; // 804E23DC
  c->lr=0x804E23E4u; f_80383D38(c); // 804E23E0
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E23E4
  c->r[3]=c->r[1]+0x00000098u; // 804E23E8
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E23EC
  c->r[4]=c->r[1]+0x000000A4u; // 804E23F0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E23F4
  c->r[31]=c->r[27]+0x000000A0u; // 804E23F8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E23FC
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2400
  c->r[5]=c->r[1]+0x000000B0u; // 804E2404
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2408
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E240C
  c->f[0]=-c->f[0]; // 804E2410
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2414
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E2418
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 804E241C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2420
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 804E2424
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2428
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 804E242C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E2430
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2434
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 804E2438
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E243C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2440
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2444
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2448
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E244C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2450
  c->lr=0x804E2458u; f_80383DE0(c); // 804E2454
  c->r[4]=c->r[31]|c->r[31]; // 804E2458
  c->r[3]=c->r[1]+0x000000B0u; // 804E245C
  c->lr=0x804E2464u; f_80383D38(c); // 804E2460
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2464
  c->r[3]=c->r[1]+0x00000074u; // 804E2468
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E246C
  c->r[4]=c->r[1]+0x00000080u; // 804E2470
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2474
  c->r[30]=c->r[27]+0x000000B0u; // 804E2478
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E247C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2480
  c->r[5]=c->r[1]+0x0000008Cu; // 804E2484
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2488
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E248C
  c->f[0]=-c->f[0]; // 804E2490
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2494
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,3,ea,0,0);} // 804E2498
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 804E249C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E24A0
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 804E24A4
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E24A8
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 804E24AC
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,3,ea,1,0);} // 804E24B0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E24B4
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 804E24B8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E24BC
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E24C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E24C4
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E24C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E24CC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E24D0
  c->lr=0x804E24D8u; f_80383DE0(c); // 804E24D4
  c->r[4]=c->r[30]|c->r[30]; // 804E24D8
  c->r[3]=c->r[1]+0x0000008Cu; // 804E24DC
  c->lr=0x804E24E4u; f_80383D38(c); // 804E24E0
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E24E4
  c->r[3]=c->r[1]+0x00000050u; // 804E24E8
  {uint32_t ea=c->r[1]+0x000001B4u; psq_load(c,1,ea,0,0);} // 804E24EC
  c->r[4]=c->r[1]+0x0000005Cu; // 804E24F0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E24F4
  c->r[31]=c->r[27]+0x000000C0u; // 804E24F8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E24FC
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,1,ea,1,0);} // 804E2500
  c->r[5]=c->r[1]+0x00000068u; // 804E2504
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2508
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E250C
  c->f[0]=-c->f[0]; // 804E2510
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2514
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,3,ea,0,0);} // 804E2518
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,2,ea,0,0);} // 804E251C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2520
  {uint32_t ea=c->r[1]+0x00000204u; psq_load(c,0,ea,0,0);} // 804E2524
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2528
  {uint32_t ea=c->r[1]+0x00000200u; psq_load(c,2,ea,1,0);} // 804E252C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,3,ea,1,0);} // 804E2530
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2534
  {uint32_t ea=c->r[1]+0x0000020Cu; psq_load(c,0,ea,1,0);} // 804E2538
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E253C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2540
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2544
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2548
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E254C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2550
  c->lr=0x804E2558u; f_80383DE0(c); // 804E2554
  c->r[4]=c->r[31]|c->r[31]; // 804E2558
  c->r[3]=c->r[1]+0x00000068u; // 804E255C
  c->lr=0x804E2564u; f_80383D38(c); // 804E2560
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2564
  c->r[3]=c->r[1]+0x0000002Cu; // 804E2568
  {uint32_t ea=c->r[1]+0x000001E4u; psq_load(c,1,ea,0,0);} // 804E256C
  c->r[4]=c->r[1]+0x00000038u; // 804E2570
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2574
  c->r[30]=c->r[27]+0x000000D0u; // 804E2578
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E257C
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,1,ea,1,0);} // 804E2580
  c->r[5]=c->r[1]+0x00000044u; // 804E2584
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2588
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E258C
  c->f[0]=-c->f[0]; // 804E2590
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2594
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E2598
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 804E259C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E25A0
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,0,ea,0,0);} // 804E25A4
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E25A8
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 804E25AC
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E25B0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E25B4
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,0,ea,1,0);} // 804E25B8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E25BC
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E25C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E25C4
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E25C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E25CC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E25D0
  c->lr=0x804E25D8u; f_80383DE0(c); // 804E25D4
  c->r[4]=c->r[30]|c->r[30]; // 804E25D8
  c->r[3]=c->r[1]+0x00000044u; // 804E25DC
  c->lr=0x804E25E4u; f_80383D38(c); // 804E25E0
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E25E4
  c->r[3]=c->r[1]+0x00000008u; // 804E25E8
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E25EC
  c->r[4]=c->r[1]+0x00000014u; // 804E25F0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E25F4
  c->r[31]=c->r[27]+0x000000E0u; // 804E25F8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E25FC
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2600
  c->r[5]=c->r[1]+0x00000020u; // 804E2604
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2608
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E260C
  c->f[0]=-c->f[0]; // 804E2610
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2614
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 804E2618
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 804E261C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 804E2620
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 804E2624
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2628
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 804E262C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 804E2630
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2634
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 804E2638
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 804E263C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2640
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2644
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2648
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 804E264C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2650
  c->lr=0x804E2658u; f_80383DE0(c); // 804E2654
  c->r[4]=c->r[31]|c->r[31]; // 804E2658
  c->r[3]=c->r[1]+0x00000020u; // 804E265C
  c->lr=0x804E2664u; f_80383D38(c); // 804E2660
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 804E2664
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 804E2668
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E266C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2670
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 804E2674
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2678
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E267C
  c->f[0]=-c->f[0]; // 804E2680
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E2684
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,31,ea,0,0);} // 804E2688
  {uint32_t ea=c->r[1]+0x00000280u; c->f[31]=RF64(ea);} // 804E268C
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,30,ea,0,0);} // 804E2690
  {uint32_t ea=c->r[1]+0x00000270u; c->f[30]=RF64(ea);} // 804E2694
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,29,ea,0,0);} // 804E2698
  {uint32_t ea=c->r[1]+0x00000260u; c->f[29]=RF64(ea);} // 804E269C
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,28,ea,0,0);} // 804E26A0
  {uint32_t ea=c->r[1]+0x00000250u; c->f[28]=RF64(ea);} // 804E26A4
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,27,ea,0,0);} // 804E26A8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[27]=RF64(ea);} // 804E26AC
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,26,ea,0,0);} // 804E26B0
  {uint32_t ea=c->r[1]+0x00000230u; c->f[26]=RF64(ea);} // 804E26B4
  c->r[11]=c->r[1]+0x00000230u; // 804E26B8
  c->lr=0x804E26C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E26BC
  c->r[0]=R32(c->r[1]+0x00000294u); // 804E26C0
  c->lr=c->r[0]; // 804E26C4
  c->r[1]=c->r[1]+0x00000290u; // 804E26C8
  return; // 804E26CC
}

// fn_804E26D0
void f_804E26D0(Ctx* __restrict c) {
  trace_call(0x804E26D0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,8,ea,0,0);} // 804E26D0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,9,ea,0,0);} // 804E26D4
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E26D8
  {double t0=S(c->f[8]-c->f[9]), t1=S(c->ps1[8]-c->ps1[9]); c->f[0]=t0; c->ps1[0]=t1;} // 804E26DC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,8,ea,1,0);} // 804E26E0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,9,ea,1,0);} // 804E26E4
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 804E26E8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E26EC
  {double t0=S(c->f[8]-c->f[9]), t1=S(c->ps1[8]-c->ps1[9]); c->f[0]=t0; c->ps1[0]=t1;} // 804E26F0
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,7,ea,1,0);} // 804E26F4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,6,ea,1,0);} // 804E26F8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 804E26FC
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,2,ea,0,0);} // 804E2700
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,5,ea,0,0);} // 804E2704
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2708
  {double t0=S(c->f[1]*c->f[5]), t1=S(c->ps1[1]*c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804E270C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E2710
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 804E2714
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[7],c->ps1[6],c->ps1[1])); c->f[5]=t0; c->ps1[5]=t1;} // 804E2718
  {double t0=S(c->f[5]+c->ps1[1]), t1=S(c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 804E271C
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2720
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,2,ea,1,0);} // 804E2724
  c->f[1]=c->ps1[1]=S(c->f[6]); // 804E2728
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,5,ea,0,0);} // 804E272C
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2730
  fcmp(c,0,c->f[1],c->f[0]); // 804E2734
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804E2738
  {double t0=S(c->f[4]+c->f[1]), t1=S(c->ps1[4]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E273C
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,0,0);} // 804E2740
  {double t0=S(c->f[9]+c->f[5]), t1=S(c->ps1[9]+c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2744
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 804E2748
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,2,ea,1,0);} // 804E274C
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2750
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 804E2754
  {double t0=S(c->f[8]-c->f[2]), t1=S(c->ps1[8]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2758
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 804E275C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,1,0);} // 804E2760
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2764
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E2768
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E276C
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2770
  if (!crb(c,0)) { goto L_804E27A0; } // 804E2774
  {double t0=S(c->f[3]-c->f[4]), t1=S(c->ps1[3]-c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2778
  c->f[6]=c->f[0]; // 804E277C
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,1,ea,0,0);} // 804E2780
  {double t0=S(c->f[8]-c->f[9]), t1=S(c->ps1[8]-c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2784
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,0,0);} // 804E2788
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,1,ea,1,0);} // 804E278C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2790
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2794
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2798
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E279C
L_804E27A0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E27A0
  if (crb(c,2)) { goto L_804E27B0; } // 804E27A4
  c->f[0]=c->ps1[0]=S(c->f[6]); // 804E27A8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 804E27AC
L_804E27B0:;
  c->r[1]=c->r[1]+0x00000040u; // 804E27B0
  return; // 804E27B4
}

// fn_804E27B8
void f_804E27B8(Ctx* __restrict c) {
  trace_call(0x804E27B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E27B8
  c->r[0]=c->lr; // 804E27BC
  W32(c->r[1]+0x00000094u,c->r[0]); // 804E27C0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 804E27C4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 804E27C8
  c->r[6]=c->r[1]+0x0000005Cu; // 804E27CC
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 804E27D0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 804E27D4
  c->r[31]=c->r[5]|c->r[5]; // 804E27D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E27DC
  W32(c->r[1]+0x00000078u,c->r[30]); // 804E27E0
  c->r[30]=c->r[4]|c->r[4]; // 804E27E4
  {double t0=S(c->f[3]-c->f[4]), t1=S(c->ps1[3]-c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804E27E8
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,1,0);} // 804E27EC
  W32(c->r[1]+0x00000074u,c->r[29]); // 804E27F0
  c->r[29]=c->r[3]|c->r[3]; // 804E27F4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,4,ea,1,0);} // 804E27F8
  c->r[3]=c->r[6]|c->r[6]; // 804E27FC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,5,ea,0,0);} // 804E2800
  {double t0=S(c->f[3]-c->f[4]), t1=S(c->ps1[3]-c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2804
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2808
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E280C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2810
  c->r[4]=c->r[6]|c->r[6]; // 804E2814
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 804E2818
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 804E281C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 804E2820
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,5,ea,1,0);} // 804E2824
  c->lr=0x804E282Cu; f_80383D38(c); // 804E2828
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E282C
  {uint32_t ea=c->r[30]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 804E2830
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804E2834
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2838
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,1,0);} // 804E283C
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,1,0);} // 804E2840
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 804E2844
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2848
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E284C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2850
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 804E2854
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804E2858
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804E285C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2860
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804E2864
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E2868
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 804E286C
  fcmp(c,0,c->f[31],c->f[3]); // 804E2870
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E2874
  if (!crb(c,2)) { goto L_804E2880; } // 804E2878
  goto L_804E288C; // 804E287C
L_804E2880:;
  c->f[1]=c->f[31]; // 804E2880
  c->lr=0x804E2888u; f_804E1098(c); // 804E2884
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[1]); // 804E2888
L_804E288C:;
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,9,ea,0,0);} // 804E288C
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,10,ea,0,0);} // 804E2890
  {uint32_t ea=c->r[1]+0x00000060u; psq_load(c,2,ea,0,0);} // 804E2894
  {double t0=S(c->f[9]-c->f[10]), t1=S(c->ps1[9]-c->ps1[10]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2898
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,9,ea,1,0);} // 804E289C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,10,ea,1,0);} // 804E28A0
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,8,ea,1,0);} // 804E28A4
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E28A8
  {double t0=S(c->f[9]-c->f[10]), t1=S(c->ps1[9]-c->ps1[10]); c->f[0]=t0; c->ps1[0]=t1;} // 804E28AC
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,5,ea,0,0);} // 804E28B0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,0);} // 804E28B4
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 804E28B8
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,4,ea,0,0);} // 804E28BC
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,6,ea,0,0);} // 804E28C0
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E28C4
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->ps1[6]); c->f[2]=t0; c->ps1[2]=t1;} // 804E28C8
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E28CC
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[2])); c->f[6]=t0; c->ps1[6]=t1;} // 804E28D0
  {double t0=S(c->f[6]+c->ps1[2]), t1=S(c->ps1[2]); c->f[7]=t0; c->ps1[7]=t1;} // 804E28D4
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->f[7]); c->f[6]=t0; c->ps1[6]=t1;} // 804E28D8
  {uint32_t ea=c->r[1]+0x00000064u; psq_load(c,5,ea,1,0);} // 804E28DC
  c->f[2]=c->ps1[2]=S(c->f[7]); // 804E28E0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,6,ea,0,0);} // 804E28E4
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->f[7]); c->f[6]=t0; c->ps1[6]=t1;} // 804E28E8
  fcmp(c,0,c->f[2],c->f[0]); // 804E28EC
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,5,ea,0,0);} // 804E28F0
  {double t0=S(c->f[4]+c->f[5]), t1=S(c->ps1[4]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 804E28F4
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,5,ea,0,0);} // 804E28F8
  {double t0=S(c->f[10]+c->f[6]), t1=S(c->ps1[10]+c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 804E28FC
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,4,ea,0,0);} // 804E2900
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,5,ea,1,0);} // 804E2904
  {double t0=S(c->f[1]-c->f[4]), t1=S(c->ps1[1]-c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2908
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 804E290C
  {double t0=S(c->f[9]-c->f[5]), t1=S(c->ps1[9]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2910
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,4,ea,0,0);} // 804E2914
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,1,0);} // 804E2918
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E291C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E2920
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2924
  {double t0=S(c->f[1]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2928
  if (!crb(c,0)) { goto L_804E2974; } // 804E292C
  cmps(c,0,(int32_t)c->r[31],0); // 804E2930
  if (crb(c,2)) { goto L_804E293C; } // 804E2934
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E2938
L_804E293C:;
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E293C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E2940
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2944
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 804E2948
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,1,ea,1,0);} // 804E294C
  {uint32_t ea=c->r[1]+0x00000044u; psq_store(c,0,ea,0,0);} // 804E2950
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2954
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,2,ea,0,0);} // 804E2958
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_store(c,0,ea,1,0);} // 804E295C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2960
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2964
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2968
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E296C
  goto L_804E29D4; // 804E2970
L_804E2974:;
  fcmp(c,0,c->f[2],c->f[3]); // 804E2974
  if (!crb(c,1)) { goto L_804E29C4; } // 804E2978
  cmps(c,0,(int32_t)c->r[31],0); // 804E297C
  if (crb(c,2)) { goto L_804E298C; } // 804E2980
  {uint32_t ea=c->r[2]+0x000018A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2984
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E2988
L_804E298C:;
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E298C
  {uint32_t ea=c->r[30]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 804E2990
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2994
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 804E2998
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,1,0);} // 804E299C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,0,ea,0,0);} // 804E29A0
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E29A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,2,ea,0,0);} // 804E29A8
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,0,ea,1,0);} // 804E29AC
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E29B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E29B4
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E29B8
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E29BC
  goto L_804E29D4; // 804E29C0
L_804E29C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E29C4
  if (crb(c,2)) { goto L_804E29D4; } // 804E29C8
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[3]); // 804E29CC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E29D0
L_804E29D4:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 804E29D4
  c->r[0]=R32(c->r[1]+0x00000094u); // 804E29D8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 804E29DC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 804E29E0
  c->r[30]=R32(c->r[1]+0x00000078u); // 804E29E4
  c->r[29]=R32(c->r[1]+0x00000074u); // 804E29E8
  c->lr=c->r[0]; // 804E29EC
  c->r[1]=c->r[1]+0x00000090u; // 804E29F0
  return; // 804E29F4
}

// fn_804E29F8
void f_804E29F8(Ctx* __restrict c) {
  trace_call(0x804E29F8u);
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,0,ea,0,0);} // 804E29F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 804E29FC
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 804E2A00
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2A04
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E2A08
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E2A0C
  {double t0=S(c->f[3]-c->f[4]), t1=S(c->ps1[3]-c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2A10
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,1,0);} // 804E2A14
  {uint32_t ea=c->r[1]+0x00000050u; psq_store(c,2,ea,0,0);} // 804E2A18
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 804E2A1C
  {uint32_t ea=c->r[1]+0x00000044u; psq_store(c,5,ea,0,0);} // 804E2A20
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2A24
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,1,0);} // 804E2A28
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,4,ea,1,0);} // 804E2A2C
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,6,ea,0,0);} // 804E2A30
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,2,ea,1,0);} // 804E2A34
  {double t0=S(c->f[3]-c->f[4]), t1=S(c->ps1[3]-c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2A38
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,9,ea,0,0);} // 804E2A3C
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 804E2A40
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E2A44
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_store(c,5,ea,1,0);} // 804E2A48
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 804E2A4C
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[6])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[6])); c->f[12]=t0; c->ps1[12]=t1;} // 804E2A50
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E2A54
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E2A58
  {uint32_t ea=c->r[1]+0x00000054u; psq_load(c,7,ea,0,0);} // 804E2A5C
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2A60
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,5,ea,0,0);} // 804E2A64
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2A68
  {double t0=S(c->f[12]+c->ps1[6]), t1=S(c->ps1[6]); c->f[12]=t0; c->ps1[12]=t1;} // 804E2A6C
  {double t0=S(c->f[7]*c->f[5]), t1=S(c->ps1[7]*c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 804E2A70
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,3,ea,1,0);} // 804E2A74
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,0,ea,0,0);} // 804E2A78
  {double t0=S(c->f[1]-c->f[4]), t1=S(c->ps1[1]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2A7C
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[9])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 804E2A80
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,1,ea,1,0);} // 804E2A84
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,11,ea,0,0);} // 804E2A88
  {uint32_t ea=c->r[1]+0x00000040u; psq_store(c,0,ea,1,0);} // 804E2A8C
  {double t0=S(std::fma(c->f[1],c->f[3],c->f[7])), t1=S(std::fma(c->ps1[1],c->ps1[3],c->ps1[7])); c->f[5]=t0; c->ps1[5]=t1;} // 804E2A90
  {double t0=S(c->f[8]+c->ps1[9]), t1=S(c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 804E2A94
  {uint32_t ea=c->r[1]+0x0000003Cu; psq_load(c,6,ea,0,0);} // 804E2A98
  {uint32_t ea=c->r[1]+0x00000054u; psq_load(c,9,ea,0,0);} // 804E2A9C
  {double t0=S(c->f[5]+c->ps1[7]), t1=S(c->ps1[7]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2AA0
  {double t0=c->f[6], t1=c->ps1[6]; c->f[10]=t0; c->ps1[10]=t1;} // 804E2AA4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,4,ea,1,0);} // 804E2AA8
  {double t0=S(c->f[9]*c->f[6]), t1=S(c->ps1[9]*c->ps1[6]); c->f[9]=t0; c->ps1[9]=t1;} // 804E2AAC
  {uint32_t ea=c->r[13]+0xFFFFA2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2AB0
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[8]); // 804E2AB4
  {double t0=S(c->f[11]*c->f[10]), t1=S(c->ps1[11]*c->ps1[10]); c->f[11]=t0; c->ps1[11]=t1;} // 804E2AB8
  {double t0=S(std::fma(c->f[1],c->f[4],c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],c->ps1[9])); c->f[6]=t0; c->ps1[6]=t1;} // 804E2ABC
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 804E2AC0
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[11])), t1=S(std::fma(c->ps1[3],c->ps1[4],c->ps1[11])); c->f[10]=t0; c->ps1[10]=t1;} // 804E2AC4
  {double t0=S(c->f[6]+c->ps1[9]), t1=S(c->ps1[9]); c->f[6]=t0; c->ps1[6]=t1;} // 804E2AC8
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[1]); // 804E2ACC
  {double t0=S(c->f[10]+c->ps1[11]), t1=S(c->ps1[11]); c->f[7]=t0; c->ps1[7]=t1;} // 804E2AD0
  c->f[10]=c->f[9]; // 804E2AD4
  fcmp(c,0,c->f[9],c->f[0]); // 804E2AD8
  if (!crb(c,0)) { goto L_804E2AF4; } // 804E2ADC
  c->f[2]=c->f[7]; // 804E2AE0
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804E2AE4
  c->f[10]=c->f[8]; // 804E2AE8
  {uint32_t ea=c->r[2]+0x000018A8u; c->f[9]=c->ps1[9]=RF32(ea);} // 804E2AEC
  goto L_804E2B3C; // 804E2AF0
L_804E2AF4:;
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[7]); // 804E2AF4
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2AF8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[6]); // 804E2AFC
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[7]); // 804E2B00
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 804E2B04
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 804E2B08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 804E2B0C
  fcmp(c,0,c->f[3],c->f[0]); // 804E2B10
  if (!crb(c,0)) { goto L_804E2B28; } // 804E2B14
  c->f[3]=c->f[0]; // 804E2B18
  c->f[2]=c->f[7]; // 804E2B1C
  c->f[10]=c->f[8]; // 804E2B20
  goto L_804E2B3C; // 804E2B24
L_804E2B28:;
  fcmp(c,0,c->f[3],c->f[9]); // 804E2B28
  if (!crb(c,1)) { goto L_804E2B3C; } // 804E2B2C
  c->f[3]=c->f[9]; // 804E2B30
  c->f[10]=c->f[8]; // 804E2B34
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[5]); // 804E2B38
L_804E2B3C:;
  {uint32_t ea=c->r[2]+0x000018B0u; c->f[0]=RF64(ea);} // 804E2B3C
  fcmp(c,0,c->f[2],c->f[0]); // 804E2B40
  if (!crb(c,0)) { goto L_804E2B78; } // 804E2B44
  c->f[3]=-c->f[6]; // 804E2B48
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2B4C
  fcmp(c,0,c->f[3],c->f[2]); // 804E2B50
  if (!crb(c,0)) { goto L_804E2B60; } // 804E2B54
  c->f[3]=c->f[2]; // 804E2B58
  goto L_804E2BB4; // 804E2B5C
L_804E2B60:;
  fcmp(c,0,c->f[3],c->f[12]); // 804E2B60
  if (!crb(c,1)) { goto L_804E2B70; } // 804E2B64
  c->f[3]=c->f[9]; // 804E2B68
  goto L_804E2BB4; // 804E2B6C
L_804E2B70:;
  c->f[9]=c->f[12]; // 804E2B70
  goto L_804E2BB4; // 804E2B74
L_804E2B78:;
  fcmp(c,0,c->f[2],c->f[10]); // 804E2B78
  if (!crb(c,1)) { goto L_804E2BB4; } // 804E2B7C
  c->f[0]=-c->f[6]; // 804E2B80
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804E2B84
  c->f[2]=c->f[10]; // 804E2B88
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 804E2B8C
  fcmp(c,0,c->f[0],c->f[3]); // 804E2B90
  if (!crb(c,0)) { goto L_804E2B9C; } // 804E2B94
  goto L_804E2BB4; // 804E2B98
L_804E2B9C:;
  fcmp(c,0,c->f[0],c->f[12]); // 804E2B9C
  if (!crb(c,1)) { goto L_804E2BAC; } // 804E2BA0
  c->f[3]=c->f[9]; // 804E2BA4
  goto L_804E2BB4; // 804E2BA8
L_804E2BAC:;
  c->f[3]=c->f[0]; // 804E2BAC
  c->f[9]=c->f[12]; // 804E2BB0
L_804E2BB4:;
  c->f[1]=std::fabs(c->f[3]); // 804E2BB4
  {uint32_t ea=c->r[13]+0xFFFFA2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2BB8
  fcmp(c,0,c->f[1],c->f[0]); // 804E2BBC
  if (!crb(c,0)) { goto L_804E2BCC; } // 804E2BC0
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 804E2BC4
  goto L_804E2BD0; // 804E2BC8
L_804E2BCC:;
  c->f[5]=c->ps1[5]=S(c->f[3]/c->f[9]); // 804E2BCC
L_804E2BD0:;
  c->f[1]=std::fabs(c->f[2]); // 804E2BD0
  {uint32_t ea=c->r[13]+0xFFFFA2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2BD4
  fcmp(c,0,c->f[1],c->f[0]); // 804E2BD8
  if (!crb(c,0)) { goto L_804E2BE8; } // 804E2BDC
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 804E2BE0
  goto L_804E2BEC; // 804E2BE4
L_804E2BE8:;
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[10]); // 804E2BE8
L_804E2BEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E2BEC
  if (crb(c,2)) { goto L_804E2BF8; } // 804E2BF0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[5]);} // 804E2BF4
L_804E2BF8:;
  cmps(c,0,(int32_t)c->r[6],0); // 804E2BF8
  if (crb(c,2)) { goto L_804E2C04; } // 804E2BFC
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[6]);} // 804E2C00
L_804E2C04:;
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,0,ea,0,0);} // 804E2C04
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,3,ea,0,0);} // 804E2C08
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->f[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,0,ea,1,0);} // 804E2C10
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->f[6]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2C14
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,2,ea,0,0);} // 804E2C18
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_load(c,3,ea,1,0);} // 804E2C1C
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,0,0);} // 804E2C20
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->f[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C24
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 804E2C28
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,4,ea,0,0);} // 804E2C2C
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->f[6]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2C30
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2C34
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,2,ea,1,0);} // 804E2C38
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 804E2C3C
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,1,ea,1,0);} // 804E2C40
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 804E2C44
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2C48
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,1,ea,0,0);} // 804E2C4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 804E2C50
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C54
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,4,ea,1,0);} // 804E2C58
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,1,ea,0,0);} // 804E2C5C
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C60
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,0,0);} // 804E2C64
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,1,ea,1,0);} // 804E2C68
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2C6C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2C70
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C74
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2C78
  c->r[1]=c->r[1]+0x00000060u; // 804E2C7C
  return; // 804E2C80
}

// fn_804E2C84
void f_804E2C84(Ctx* __restrict c) {
  trace_call(0x804E2C84u);
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,4,ea,0,0);} // 804E2C84
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,3,ea,0,0);} // 804E2C88
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E2C8C
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2C90
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,0,ea,1,0);} // 804E2C94
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2C98
  {uint32_t ea=c->r[13]+0xFFFFA2E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E2C9C
  {double t0=S(std::fma(c->f[0],c->f[2],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[2],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 804E2CA0
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 804E2CA4
  c->f[0]=std::fabs(c->f[3]); // 804E2CA8
  fcmp(c,0,c->f[0],c->f[1]); // 804E2CAC
  if (!crb(c,0)) { goto L_804E2CF0; } // 804E2CB0
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,5,ea,0,0);} // 804E2CB4
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,4,ea,0,0);} // 804E2CB8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,1,0);} // 804E2CBC
  {double t0=S(c->f[5]*c->f[4]), t1=S(c->ps1[5]*c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 804E2CC0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2CC4
  {double t0=S(std::fma(c->f[2],c->f[3],c->f[5])), t1=S(std::fma(c->ps1[2],c->ps1[3],c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 804E2CC8
  {double t0=S(c->f[4]+c->ps1[5]), t1=S(c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2CCC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 804E2CD0
  c->f[0]=std::fabs(c->f[0]); // 804E2CD4
  fcmp(c,0,c->f[0],c->f[1]); // 804E2CD8
  if (!crb(c,0)) { goto L_804E2CE8; } // 804E2CDC
  c->r[3]=0u+0x00000002u; // 804E2CE0
  goto L_804E2D78; // 804E2CE4
L_804E2CE8:;
  c->r[3]=0u+0x00000000u; // 804E2CE8
  goto L_804E2D78; // 804E2CEC
L_804E2CF0:;
  cmps(c,0,(int32_t)c->r[6],0); // 804E2CF0
  if (!crb(c,2)) { goto L_804E2D00; } // 804E2CF4
  cmps(c,0,(int32_t)c->r[5],0); // 804E2CF8
  if (crb(c,2)) { goto L_804E2D74; } // 804E2CFC
L_804E2D00:;
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,4,ea,0,0);} // 804E2D00
  cmps(c,0,(int32_t)c->r[6],0); // 804E2D04
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 804E2D08
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,1,0);} // 804E2D0C
  {double t0=S(c->f[4]*c->f[2]), t1=S(c->ps1[4]*c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2D10
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,0);} // 804E2D14
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2D18
  {double t0=S(std::fma(c->f[1],c->f[2],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[2],c->ps1[4])); c->f[2]=t0; c->ps1[2]=t1;} // 804E2D1C
  {double t0=S(c->f[2]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2D20
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E2D24
  c->f[0]=-c->f[0]; // 804E2D28
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[3]); // 804E2D2C
  if (crb(c,2)) { goto L_804E2D68; } // 804E2D30
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 804E2D34
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 804E2D38
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2D3C
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,1,ea,1,0);} // 804E2D40
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E2D44
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804E2D48
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,0,0);} // 804E2D4C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 804E2D50
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2D54
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 804E2D58
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 804E2D5C
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804E2D60
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,1,ea,1,0);} // 804E2D64
L_804E2D68:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E2D68
  if (crb(c,2)) { goto L_804E2D74; } // 804E2D6C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[3]);} // 804E2D70
L_804E2D74:;
  c->r[3]=0u+0x00000001u; // 804E2D74
L_804E2D78:;
  c->r[1]=c->r[1]+0x00000020u; // 804E2D78
  return; // 804E2D7C
}

// fn_804E2D80
void f_804E2D80(Ctx* __restrict c) {
  trace_call(0x804E2D80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E2D80
  c->r[0]=c->lr; // 804E2D84
  W32(c->r[1]+0x00000074u,c->r[0]); // 804E2D88
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804E2D8C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804E2D90
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804E2D94
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804E2D98
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 804E2D9C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E2DA0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804E2DA4
  c->r[31]=c->r[6]|c->r[6]; // 804E2DA8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2DAC
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,1,ea,1,0);} // 804E2DB0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 804E2DB4
  W32(c->r[1]+0x00000048u,c->r[30]); // 804E2DB8
  c->r[30]=c->r[5]|c->r[5]; // 804E2DBC
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804E2DC0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,0,0);} // 804E2DC4
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2DC8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E2DCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2DD0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,1,0);} // 804E2DD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804E2DD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804E2DDC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2DE0
  W32(c->r[1]+0x00000044u,c->r[29]); // 804E2DE4
  c->r[29]=c->r[4]|c->r[4]; // 804E2DE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804E2DEC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E2DF0
  W32(c->r[1]+0x00000040u,c->r[28]); // 804E2DF4
  c->r[28]=c->r[3]|c->r[3]; // 804E2DF8
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 804E2DFC
  fcmp(c,0,c->f[30],c->f[31]); // 804E2E00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E2E04
  if (!crb(c,2)) { goto L_804E2E10; } // 804E2E08
  goto L_804E2E1C; // 804E2E0C
L_804E2E10:;
  c->f[1]=c->f[30]; // 804E2E10
  c->lr=0x804E2E18u; f_804E1098(c); // 804E2E14
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 804E2E18
L_804E2E1C:;
  c->r[9]=R32(c->r[28]+0x00000000u); // 804E2E1C
  c->r[3]=c->r[1]+0x00000034u; // 804E2E20
  c->r[8]=R32(c->r[28]+0x00000004u); // 804E2E24
  c->r[4]=c->r[3]|c->r[3]; // 804E2E28
  c->r[7]=R32(c->r[28]+0x00000008u); // 804E2E2C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 804E2E30
  c->r[5]=R32(c->r[1]+0x00000010u); // 804E2E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E2E38
  W32(c->r[1]+0x00000028u,c->r[9]); // 804E2E3C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 804E2E40
  W32(c->r[1]+0x00000030u,c->r[7]); // 804E2E44
  W32(c->r[1]+0x00000034u,c->r[6]); // 804E2E48
  W32(c->r[1]+0x00000038u,c->r[5]); // 804E2E4C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 804E2E50
  c->lr=0x804E2E58u; f_80383D38(c); // 804E2E54
  c->r[3]=0u-c->r[31]; // 804E2E58
  c->r[0]=c->r[1]+0x00000018u; // 804E2E5C
  c->r[3]=c->r[3]|c->r[31]; // 804E2E60
  c->r[4]=c->r[29]|c->r[29]; // 804E2E64
  c->r[6]=sraw(c,c->r[3],31); // 804E2E68
  c->r[5]=c->r[1]+0x00000008u; // 804E2E6C
  c->r[3]=c->r[1]+0x00000028u; // 804E2E70
  c->r[6]=c->r[0]&c->r[6]; // 804E2E74
  c->lr=0x804E2E7Cu; f_804E2C84(c); // 804E2E78
  cmps(c,0,(int32_t)c->r[3],1); // 804E2E7C
  if (!crb(c,2)) { goto L_804E2EDC; } // 804E2E80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E2E84
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2E88
  fcmp(c,0,c->f[1],c->f[0]); // 804E2E8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E2E90
  if (!crb(c,2)) { goto L_804E2ED8; } // 804E2E94
  fcmp(c,0,c->f[1],c->f[31]); // 804E2E98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E2E9C
  if (!crb(c,2)) { goto L_804E2ED8; } // 804E2EA0
  cmps(c,0,(int32_t)c->r[30],0); // 804E2EA4
  if (crb(c,2)) { goto L_804E2EB4; } // 804E2EA8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[31]); // 804E2EAC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E2EB0
L_804E2EB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E2EB4
  if (crb(c,2)) { goto L_804E2EDC; } // 804E2EB8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2EBC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E2EC0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2EC4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804E2EC8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2ECC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 804E2ED0
  goto L_804E2EDC; // 804E2ED4
L_804E2ED8:;
  c->r[3]=0u+0x00000000u; // 804E2ED8
L_804E2EDC:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804E2EDC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804E2EE0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804E2EE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804E2EE8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804E2EEC
  c->r[30]=R32(c->r[1]+0x00000048u); // 804E2EF0
  c->r[29]=R32(c->r[1]+0x00000044u); // 804E2EF4
  c->r[0]=R32(c->r[1]+0x00000074u); // 804E2EF8
  c->r[28]=R32(c->r[1]+0x00000040u); // 804E2EFC
  c->lr=c->r[0]; // 804E2F00
  c->r[1]=c->r[1]+0x00000070u; // 804E2F04
  return; // 804E2F08
}

// fn_804E2F0C
void f_804E2F0C(Ctx* __restrict c) {
  trace_call(0x804E2F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E2F0C
  c->r[0]=c->lr; // 804E2F10
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E2F14
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E2F18
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E2F1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804E2F20
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804E2F24
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E2F28
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 804E2F2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E2F30
  c->r[31]=c->r[6]|c->r[6]; // 804E2F34
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2F38
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,1,0);} // 804E2F3C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 804E2F40
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2F44
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,2,ea,0,0);} // 804E2F48
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 804E2F4C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 804E2F50
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,7,ea,0,0);} // 804E2F54
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,9,ea,0,0);} // 804E2F58
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,1,0);} // 804E2F5C
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 804E2F60
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,4,ea,1,0);} // 804E2F64
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,6,ea,0,0);} // 804E2F68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2F6C
  {double t0=S(c->f[7]*c->f[6]), t1=S(c->ps1[7]*c->ps1[6]); c->f[7]=t0; c->ps1[7]=t1;} // 804E2F70
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,5,ea,1,0);} // 804E2F74
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[9])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 804E2F78
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E2F7C
  {uint32_t ea=c->r[2]+0x000018B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E2F80
  c->r[30]=c->r[5]|c->r[5]; // 804E2F84
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[7])); c->f[6]=t0; c->ps1[6]=t1;} // 804E2F88
  {uint32_t ea=c->r[2]+0x000018BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2F8C
  {double t0=S(c->f[8]+c->ps1[9]), t1=S(c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 804E2F90
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E2F94
  {double t0=S(c->f[6]+c->ps1[7]), t1=S(c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 804E2F98
  c->f[1]=c->ps1[1]=S(c->f[8]-c->f[1]); // 804E2F9C
  c->f[31]=c->ps1[31]=S(c->f[3]*c->f[4]); // 804E2FA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E2FA4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 804E2FA8
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 804E2FAC
  fcmp(c,0,c->f[30],c->f[2]); // 804E2FB0
  if (!crb(c,1)) { goto L_804E3010; } // 804E2FB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E2FB8
  if (!crb(c,2)) { goto L_804E2FC4; } // 804E2FBC
  goto L_804E2FD0; // 804E2FC0
L_804E2FC4:;
  c->f[1]=c->f[30]; // 804E2FC4
  c->lr=0x804E2FCCu; f_804E1098(c); // 804E2FC8
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 804E2FCC
L_804E2FD0:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E2FD0
  if (crb(c,2)) { goto L_804E2FEC; } // 804E2FD4
  c->f[1]=-c->f[31]; // 804E2FD8
  {uint32_t ea=c->r[2]+0x00001898u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2FDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E2FE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E2FE4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E2FE8
L_804E2FEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E2FEC
  if (crb(c,2)) { goto L_804E3008; } // 804E2FF0
  c->f[1]=-c->f[31]; // 804E2FF4
  {uint32_t ea=c->r[2]+0x00001898u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E2FF8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 804E2FFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E3000
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E3004
L_804E3008:;
  c->r[3]=0u+0x00000002u; // 804E3008
  goto L_804E3038; // 804E300C
L_804E3010:;
  fcmp(c,0,c->f[2],c->f[30]); // 804E3010
  if (!crb(c,2)) { goto L_804E3034; } // 804E3014
  cmps(c,0,(int32_t)c->r[5],0); // 804E3018
  if (crb(c,2)) { goto L_804E302C; } // 804E301C
  {uint32_t ea=c->r[2]+0x000018C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3020
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 804E3024
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 804E3028
L_804E302C:;
  c->r[3]=0u+0x00000001u; // 804E302C
  goto L_804E3038; // 804E3030
L_804E3034:;
  c->r[3]=0u+0x00000000u; // 804E3034
L_804E3038:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E3038
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E303C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804E3040
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804E3044
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E3048
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E304C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E3050
  c->lr=c->r[0]; // 804E3054
  c->r[1]=c->r[1]+0x00000040u; // 804E3058
  return; // 804E305C
}

// fn_804E3060
void f_804E3060(Ctx* __restrict c) {
  trace_call(0x804E3060u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3060
  c->r[0]=c->lr; // 804E3064
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E3068
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E306C
  c->r[31]=c->r[6]|c->r[6]; // 804E3070
  c->r[6]=c->r[1]+0x00000008u; // 804E3074
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E3078
  c->r[30]=c->r[5]|c->r[5]; // 804E307C
  c->r[5]=c->r[1]+0x0000000Cu; // 804E3080
  c->lr=0x804E3088u; f_804E2F0C(c); // 804E3084
  cmps(c,0,(int32_t)c->r[3],0); // 804E3088
  if (crb(c,2)) { goto L_804E3120; } // 804E308C
  cmps(c,0,(int32_t)c->r[3],1); // 804E3090
  if (!crb(c,2)) { goto L_804E30C4; } // 804E3094
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3098
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E309C
  fcmp(c,0,c->f[1],c->f[0]); // 804E30A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E30A4
  if (!crb(c,2)) { goto L_804E30BC; } // 804E30A8
  cmps(c,0,(int32_t)c->r[30],0); // 804E30AC
  if (crb(c,2)) { goto L_804E3120; } // 804E30B0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 804E30B4
  goto L_804E3120; // 804E30B8
L_804E30BC:;
  c->r[3]=0u+0x00000000u; // 804E30BC
  goto L_804E3120; // 804E30C0
L_804E30C4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E30C4
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E30C8
  fcmp(c,0,c->f[0],c->f[1]); // 804E30CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E30D0
  if (!crb(c,2)) { goto L_804E30F8; } // 804E30D4
  cmps(c,0,(int32_t)c->r[30],0); // 804E30D8
  if (crb(c,2)) { goto L_804E30E4; } // 804E30DC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E30E0
L_804E30E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E30E4
  if (crb(c,2)) { goto L_804E3120; } // 804E30E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E30EC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E30F0
  goto L_804E3120; // 804E30F4
L_804E30F8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E30F8
  fcmp(c,0,c->f[0],c->f[1]); // 804E30FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E3100
  if (!crb(c,2)) { goto L_804E311C; } // 804E3104
  cmps(c,0,(int32_t)c->r[30],0); // 804E3108
  if (crb(c,2)) { goto L_804E3114; } // 804E310C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E3110
L_804E3114:;
  c->r[3]=0u+0x00000001u; // 804E3114
  goto L_804E3120; // 804E3118
L_804E311C:;
  c->r[3]=0u+0x00000000u; // 804E311C
L_804E3120:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E3120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E3124
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E3128
  c->lr=c->r[0]; // 804E312C
  c->r[1]=c->r[1]+0x00000020u; // 804E3130
  return; // 804E3134
}

// fn_804E3138
void f_804E3138(Ctx* __restrict c) {
  trace_call(0x804E3138u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3138
  c->r[0]=c->lr; // 804E313C
  W32(c->r[1]+0x00000074u,c->r[0]); // 804E3140
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804E3144
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804E3148
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804E314C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804E3150
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 804E3154
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 804E3158
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804E315C
  c->r[31]=c->r[6]|c->r[6]; // 804E3160
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E3164
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,1,ea,1,0);} // 804E3168
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 804E316C
  W32(c->r[1]+0x00000048u,c->r[30]); // 804E3170
  c->r[30]=c->r[5]|c->r[5]; // 804E3174
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 804E3178
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,0,0);} // 804E317C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 804E3180
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3184
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3188
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,2,ea,1,0);} // 804E318C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 804E3190
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 804E3194
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3198
  W32(c->r[1]+0x00000044u,c->r[29]); // 804E319C
  c->r[29]=c->r[4]|c->r[4]; // 804E31A0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 804E31A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 804E31A8
  W32(c->r[1]+0x00000040u,c->r[28]); // 804E31AC
  c->r[28]=c->r[3]|c->r[3]; // 804E31B0
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 804E31B4
  fcmp(c,0,c->f[30],c->f[31]); // 804E31B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E31BC
  if (!crb(c,2)) { goto L_804E31C8; } // 804E31C0
  goto L_804E31D4; // 804E31C4
L_804E31C8:;
  c->f[1]=c->f[30]; // 804E31C8
  c->lr=0x804E31D0u; f_804E1098(c); // 804E31CC
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 804E31D0
L_804E31D4:;
  c->r[9]=R32(c->r[28]+0x00000000u); // 804E31D4
  c->r[3]=c->r[1]+0x0000002Cu; // 804E31D8
  c->r[8]=R32(c->r[28]+0x00000004u); // 804E31DC
  c->r[4]=c->r[3]|c->r[3]; // 804E31E0
  c->r[7]=R32(c->r[28]+0x00000008u); // 804E31E4
  c->r[6]=R32(c->r[1]+0x00000010u); // 804E31E8
  c->r[5]=R32(c->r[1]+0x00000014u); // 804E31EC
  c->r[0]=R32(c->r[1]+0x00000018u); // 804E31F0
  W32(c->r[1]+0x00000020u,c->r[9]); // 804E31F4
  W32(c->r[1]+0x00000024u,c->r[8]); // 804E31F8
  W32(c->r[1]+0x00000028u,c->r[7]); // 804E31FC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 804E3200
  W32(c->r[1]+0x00000030u,c->r[5]); // 804E3204
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E3208
  c->lr=0x804E3210u; f_80383D38(c); // 804E320C
  c->r[4]=c->r[29]|c->r[29]; // 804E3210
  c->r[3]=c->r[1]+0x00000020u; // 804E3214
  c->r[5]=c->r[1]+0x0000000Cu; // 804E3218
  c->r[6]=c->r[1]+0x00000008u; // 804E321C
  c->lr=0x804E3224u; f_804E2F0C(c); // 804E3220
  cmps(c,0,(int32_t)c->r[3],0); // 804E3224
  if (crb(c,2)) { goto L_804E3328; } // 804E3228
  cmps(c,0,(int32_t)c->r[3],1); // 804E322C
  if (!crb(c,2)) { goto L_804E3270; } // 804E3230
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3234
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3238
  fcmp(c,0,c->f[1],c->f[0]); // 804E323C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E3240
  if (!crb(c,2)) { goto L_804E3268; } // 804E3244
  fcmp(c,0,c->f[1],c->f[31]); // 804E3248
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E324C
  if (!crb(c,2)) { goto L_804E3268; } // 804E3250
  cmps(c,0,(int32_t)c->r[30],0); // 804E3254
  if (crb(c,2)) { goto L_804E3328; } // 804E3258
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[31]); // 804E325C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E3260
  goto L_804E3328; // 804E3264
L_804E3268:;
  c->r[3]=0u+0x00000000u; // 804E3268
  goto L_804E3328; // 804E326C
L_804E3270:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3270
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3274
  fcmp(c,0,c->f[2],c->f[1]); // 804E3278
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E327C
  if (!crb(c,2)) { goto L_804E32F0; } // 804E3280
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3284
  fcmp(c,0,c->f[0],c->f[31]); // 804E3288
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E328C
  if (!crb(c,2)) { goto L_804E32C4; } // 804E3290
  {uint32_t ea=c->r[2]+0x000018A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3294
  cmps(c,0,(int32_t)c->r[30],0); // 804E3298
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 804E329C
  if (crb(c,2)) { goto L_804E32AC; } // 804E32A0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 804E32A4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E32A8
L_804E32AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E32AC
  if (crb(c,2)) { goto L_804E3328; } // 804E32B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E32B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E32B8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 804E32BC
  goto L_804E3328; // 804E32C0
L_804E32C4:;
  fcmp(c,0,c->f[2],c->f[31]); // 804E32C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E32C8
  if (!crb(c,2)) { goto L_804E32E8; } // 804E32CC
  cmps(c,0,(int32_t)c->r[30],0); // 804E32D0
  if (crb(c,2)) { goto L_804E32E0; } // 804E32D4
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[31]); // 804E32D8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E32DC
L_804E32E0:;
  c->r[3]=0u+0x00000001u; // 804E32E0
  goto L_804E3328; // 804E32E4
L_804E32E8:;
  c->r[3]=0u+0x00000000u; // 804E32E8
  goto L_804E3328; // 804E32EC
L_804E32F0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E32F0
  fcmp(c,0,c->f[0],c->f[1]); // 804E32F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E32F8
  if (!crb(c,2)) { goto L_804E3324; } // 804E32FC
  fcmp(c,0,c->f[0],c->f[31]); // 804E3300
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E3304
  if (!crb(c,2)) { goto L_804E3324; } // 804E3308
  cmps(c,0,(int32_t)c->r[30],0); // 804E330C
  if (crb(c,2)) { goto L_804E331C; } // 804E3310
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 804E3314
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804E3318
L_804E331C:;
  c->r[3]=0u+0x00000001u; // 804E331C
  goto L_804E3328; // 804E3320
L_804E3324:;
  c->r[3]=0u+0x00000000u; // 804E3324
L_804E3328:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804E3328
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804E332C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804E3330
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804E3334
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804E3338
  c->r[30]=R32(c->r[1]+0x00000048u); // 804E333C
  c->r[29]=R32(c->r[1]+0x00000044u); // 804E3340
  c->r[0]=R32(c->r[1]+0x00000074u); // 804E3344
  c->r[28]=R32(c->r[1]+0x00000040u); // 804E3348
  c->lr=c->r[0]; // 804E334C
  c->r[1]=c->r[1]+0x00000070u; // 804E3350
  return; // 804E3354
}

// fn_804E3358
void f_804E3358(Ctx* __restrict c) {
  trace_call(0x804E3358u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3358
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E335C
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3360
  fcmp(c,0,c->f[1],c->f[0]); // 804E3364
  if (crb(c,1)) { goto L_804E33BC; } // 804E3368
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E336C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3370
  fcmp(c,0,c->f[1],c->f[0]); // 804E3374
  if (crb(c,1)) { goto L_804E33BC; } // 804E3378
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E337C
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3380
  fcmp(c,0,c->f[1],c->f[0]); // 804E3384
  if (crb(c,1)) { goto L_804E33BC; } // 804E3388
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E338C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3390
  fcmp(c,0,c->f[1],c->f[0]); // 804E3394
  if (crb(c,1)) { goto L_804E33BC; } // 804E3398
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E339C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E33A0
  fcmp(c,0,c->f[1],c->f[0]); // 804E33A4
  if (crb(c,1)) { goto L_804E33BC; } // 804E33A8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E33AC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E33B0
  fcmp(c,0,c->f[1],c->f[0]); // 804E33B4
  if (!crb(c,1)) { goto L_804E33C4; } // 804E33B8
L_804E33BC:;
  c->r[0]=0u+0x00000000u; // 804E33BC
  goto L_804E33C8; // 804E33C0
L_804E33C4:;
  c->r[0]=0u+0x00000001u; // 804E33C4
L_804E33C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E33C8
  if (!crb(c,2)) { goto L_804E33D8; } // 804E33CC
  c->r[3]=0u+0x00000000u; // 804E33D0
  goto L_804E34F4; // 804E33D4
L_804E33D8:;
  c->r[0]=0u+0x00000006u; // 804E33D8
  c->r[5]=c->r[3]|c->r[3]; // 804E33DC
  c->r[6]=c->r[3]+0x00000090u; // 804E33E0
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E33E4
  c->r[3]=0u+0x00000001u; // 804E33E8
  c->ctr=c->r[0]; // 804E33EC
L_804E33F0:;
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E33F0
  fcmp(c,0,c->f[0],c->f[2]); // 804E33F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E33F8
  if (!crb(c,2)) { goto L_804E3414; } // 804E33FC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3400
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3404
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804E3408
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804E340C
  goto L_804E3424; // 804E3410
L_804E3414:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3414
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3418
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804E341C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804E3420
L_804E3424:;
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3424
  fcmp(c,0,c->f[0],c->f[2]); // 804E3428
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E342C
  if (!crb(c,2)) { goto L_804E3448; } // 804E3430
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3434
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3438
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804E343C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E3440
  goto L_804E3458; // 804E3444
L_804E3448:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3448
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E344C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804E3450
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E3454
L_804E3458:;
  {uint32_t ea=c->r[5]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3458
  fcmp(c,0,c->f[0],c->f[2]); // 804E345C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E3460
  if (!crb(c,2)) { goto L_804E347C; } // 804E3464
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3468
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E346C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804E3470
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804E3474
  goto L_804E348C; // 804E3478
L_804E347C:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E347C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3480
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 804E3484
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804E3488
L_804E348C:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 804E348C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,3,ea,0,0);} // 804E3490
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,1,0);} // 804E3494
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E3498
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,1,0);} // 804E349C
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E34A0
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 804E34A4
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E34A8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 804E34AC
  fcmp(c,0,c->f[1],c->f[2]); // 804E34B0
  if (!crb(c,1)) { goto L_804E34C0; } // 804E34B4
  c->r[3]=0u+0x00000000u; // 804E34B8
  goto L_804E34F4; // 804E34BC
L_804E34C0:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 804E34C0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 804E34C4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,5,ea,1,0);} // 804E34C8
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 804E34CC
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 804E34D0
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804E34D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 804E34D8
  fcmp(c,0,c->f[0],c->f[2]); // 804E34DC
  if (!crb(c,1)) { goto L_804E34E8; } // 804E34E0
  c->r[3]=0u+0x00000002u; // 804E34E4
L_804E34E8:;
  c->r[5]=c->r[5]+0x00000010u; // 804E34E8
  c->r[6]=c->r[6]+0x00000010u; // 804E34EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E33F0; } // 804E34F0
L_804E34F4:;
  c->r[1]=c->r[1]+0x00000020u; // 804E34F4
  return; // 804E34F8
}

// fn_804E34FC
void f_804E34FC(Ctx* __restrict c) {
  trace_call(0x804E34FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E34FC
  c->r[0]=c->lr; // 804E3500
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E3504
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E3508
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E350C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 804E3510
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 804E3514
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E3518
  c->r[31]=c->r[5]|c->r[5]; // 804E351C
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804E3520
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,1,0);} // 804E3524
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 804E3528
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E352C
  c->r[30]=c->r[4]|c->r[4]; // 804E3530
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3534
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 804E3538
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 804E353C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E3540
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,4,ea,0,0);} // 804E3544
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 804E3548
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[1]); // 804E354C
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 804E3550
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E3554
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E3558
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[5]); // 804E355C
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[31]=t0; c->ps1[31]=t1;} // 804E3560
  c->r[29]=c->r[3]|c->r[3]; // 804E3564
  {double t0=S(c->f[31]+c->ps1[4]), t1=S(c->ps1[4]); c->f[31]=t0; c->ps1[31]=t1;} // 804E3568
  fcmp(c,0,c->f[31],c->f[0]); // 804E356C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E3570
  if (!crb(c,2)) { goto L_804E35C0; } // 804E3574
  fcmp(c,0,c->f[1],c->f[2]); // 804E3578
  if (!crb(c,1)) { goto L_804E35A0; } // 804E357C
  c->r[6]=R32(c->r[4]+0x00000000u); // 804E3580
  c->r[5]=R32(c->r[4]+0x00000004u); // 804E3584
  c->r[0]=R32(c->r[4]+0x00000008u); // 804E3588
  W32(c->r[3]+0x00000000u,c->r[6]); // 804E358C
  W32(c->r[3]+0x00000004u,c->r[5]); // 804E3590
  W32(c->r[3]+0x00000008u,c->r[0]); // 804E3594
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 804E3598
  goto L_804E3664; // 804E359C
L_804E35A0:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 804E35A0
  c->r[4]=R32(c->r[5]+0x00000004u); // 804E35A4
  c->r[0]=R32(c->r[5]+0x00000008u); // 804E35A8
  W32(c->r[3]+0x00000000u,c->r[6]); // 804E35AC
  W32(c->r[3]+0x00000004u,c->r[4]); // 804E35B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 804E35B4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 804E35B8
  goto L_804E3664; // 804E35BC
L_804E35C0:;
  {uint32_t ea=c->r[2]+0x0000189Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804E35C0
  fcmp(c,0,c->f[31],c->f[4]); // 804E35C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E35C8
  if (!crb(c,2)) { goto L_804E35D4; } // 804E35CC
  goto L_804E35E0; // 804E35D0
L_804E35D4:;
  c->f[1]=c->f[31]; // 804E35D4
  c->lr=0x804E35DCu; f_804E1098(c); // 804E35D8
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[1]); // 804E35DC
L_804E35E0:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804E35E0
  c->f[5]=std::fabs(c->f[4]); // 804E35E4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804E35E8
  {uint32_t ea=c->r[13]+0xFFFFA2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E35EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 804E35F0
  {uint32_t ea=c->r[2]+0x00001898u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E35F4
  fcmp(c,0,c->f[5],c->f[0]); // 804E35F8
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[2]); // 804E35FC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 804E3600
  if (!crb(c,1)) { goto L_804E3648; } // 804E3604
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[3]); // 804E3608
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 804E360C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,3,ea,0,0);} // 804E3610
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 804E3614
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804E3618
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,0);} // 804E361C
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,0,0);} // 804E3620
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 804E3624
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,0,0);} // 804E3628
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,0);} // 804E362C
  {double t0=S(c->f[3]+c->f[0]), t1=S(c->ps1[3]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804E3630
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,3,ea,1,0);} // 804E3634
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,0,ea,0,0);} // 804E3638
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 804E363C
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,0,ea,1,0);} // 804E3640
  goto L_804E3660; // 804E3644
L_804E3648:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3648
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E364C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3650
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[2]);} // 804E3654
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 804E3658
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 804E365C
L_804E3660:;
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[5]);} // 804E3660
L_804E3664:;
  c->r[3]=c->r[29]|c->r[29]; // 804E3664
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E3668
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E366C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E3670
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E3674
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E3678
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E367C
  c->lr=c->r[0]; // 804E3680
  c->r[1]=c->r[1]+0x00000040u; // 804E3684
  return; // 804E3688
}

// fn_804E368C
void f_804E368C(Ctx* __restrict c) {
  trace_call(0x804E368Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E368C
  c->r[0]=c->lr; // 804E3690
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E3694
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E3698
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E369C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804E36A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804E36A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 804E36A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 804E36AC
  {uint32_t ea=c->r[2]+0x000018C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 804E36B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E36B4
  c->r[31]=c->r[3]|c->r[3]; // 804E36B8
  fcmp(c,0,c->f[6],c->f[2]); // 804E36BC
  if (crb(c,2)) { goto L_804E3758; } // 804E36C0
  {uint32_t ea=c->r[2]+0x000018DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E36C4
  {uint32_t ea=c->r[2]+0x000018D4u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E36C8
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 804E36CC
  {uint32_t ea=c->r[2]+0x000018D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E36D0
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[5]); // 804E36D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 804E36D8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804E36DC
  c->f[30]=c->ps1[30]=S(c->f[3]/c->f[1]); // 804E36E0
  c->f[29]=c->ps1[29]=S(c->f[4]-c->f[30]); // 804E36E4
  fcmp(c,0,c->f[29],c->f[0]); // 804E36E8
  if (!crb(c,1)) { goto L_804E3730; } // 804E36EC
  fcmp(c,0,c->f[29],c->f[6]); // 804E36F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E36F4
  if (!crb(c,2)) { goto L_804E3700; } // 804E36F8
  goto L_804E370C; // 804E36FC
L_804E3700:;
  c->f[1]=c->f[29]; // 804E3700
  c->lr=0x804E3708u; f_804E1098(c); // 804E3704
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[1]); // 804E3708
L_804E370C:;
  {uint32_t ea=c->r[2]+0x000018D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E370C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[30]); // 804E3710
  c->r[3]=0u+0x00000002u; // 804E3714
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 804E3718
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 804E371C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804E3720
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804E3724
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 804E3728
  goto L_804E37BC; // 804E372C
L_804E3730:;
  {uint32_t ea=c->r[2]+0x000018CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3730
  fcmp(c,0,c->f[29],c->f[0]); // 804E3734
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E3738
  if (!crb(c,2)) { goto L_804E3750; } // 804E373C
  c->f[0]=-c->f[31]; // 804E3740
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 804E3744
  c->r[3]=0u+0x00000001u; // 804E3748
  goto L_804E37BC; // 804E374C
L_804E3750:;
  c->r[3]=0u+0x00000000u; // 804E3750
  goto L_804E37BC; // 804E3754
L_804E3758:;
  c->f[2]=-c->f[3]; // 804E3758
  {uint32_t ea=c->r[2]+0x000018D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E375C
  c->f[29]=c->ps1[29]=S(c->f[2]/c->f[1]); // 804E3760
  fcmp(c,0,c->f[29],c->f[0]); // 804E3764
  if (!crb(c,1)) { goto L_804E379C; } // 804E3768
  fcmp(c,0,c->f[29],c->f[6]); // 804E376C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 804E3770
  if (!crb(c,2)) { goto L_804E377C; } // 804E3774
  goto L_804E3788; // 804E3778
L_804E377C:;
  c->f[1]=c->f[29]; // 804E377C
  c->lr=0x804E3784u; f_804E1098(c); // 804E3780
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[1]); // 804E3784
L_804E3788:;
  c->f[0]=-c->f[6]; // 804E3788
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[6]);} // 804E378C
  c->r[3]=0u+0x00000002u; // 804E3790
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804E3794
  goto L_804E37BC; // 804E3798
L_804E379C:;
  {uint32_t ea=c->r[2]+0x000018CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E379C
  fcmp(c,0,c->f[29],c->f[0]); // 804E37A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804E37A4
  if (!crb(c,2)) { goto L_804E37B8; } // 804E37A8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 804E37AC
  c->r[3]=0u+0x00000001u; // 804E37B0
  goto L_804E37BC; // 804E37B4
L_804E37B8:;
  c->r[3]=0u+0x00000000u; // 804E37B8
L_804E37BC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E37BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E37C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804E37C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804E37C8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 804E37CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 804E37D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E37D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E37D8
  c->lr=c->r[0]; // 804E37DC
  c->r[1]=c->r[1]+0x00000040u; // 804E37E0
  return; // 804E37E4
}

// fn_804E37E8
void f_804E37E8(Ctx* __restrict c) {
  trace_call(0x804E37E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E37E8
  c->r[0]=c->lr; // 804E37EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E37F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E37F4
  c->r[31]=c->r[6]|c->r[6]; // 804E37F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E37FC
  c->r[30]=c->r[5]|c->r[5]; // 804E3800
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E3804
  c->r[29]=c->r[3]|c->r[3]; // 804E3808
  W32(c->r[3]+0x00000000u,c->r[4]); // 804E380C
  c->r[3]=c->r[3]+0x00000004u; // 804E3810
  c->lr=0x804E3818u; f_804E4C2C(c); // 804E3814
  {uint32_t ea=c->r[2]+0x000018E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3818
  c->r[0]=0u+0x00000000u; // 804E381C
  W32(c->r[29]+0x00000010u,c->r[30]); // 804E3820
  c->r[3]=c->r[29]|c->r[29]; // 804E3824
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E3828
  W32(c->r[29]+0x00000014u,c->r[31]); // 804E382C
  W8(c->r[29]+0x00000018u,c->r[0]); // 804E3830
  W8(c->r[29]+0x00000019u,c->r[0]); // 804E3834
  W8(c->r[29]+0x0000001Au,c->r[0]); // 804E3838
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804E383C
  W32(c->r[29]+0x00000020u,c->r[0]); // 804E3840
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E3844
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E3848
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E384C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E3850
  c->lr=c->r[0]; // 804E3854
  c->r[1]=c->r[1]+0x00000020u; // 804E3858
  return; // 804E385C
}

// dtor_804E3860
void f_804E3860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3860
  c->r[0]=c->lr; // 804E3864
  cmps(c,0,(int32_t)c->r[3],0); // 804E3868
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E386C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E3870
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E3874
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E3878
  c->r[29]=c->r[4]|c->r[4]; // 804E387C
  W32(c->r[1]+0x00000010u,c->r[28]); // 804E3880
  c->r[28]=c->r[3]|c->r[3]; // 804E3884
  if (crb(c,2)) { goto L_804E3904; } // 804E3888
  c->r[0]=R8(c->r[3]+0x00000018u); // 804E388C
  cmps(c,0,(int32_t)c->r[0],0); // 804E3890
  if (crb(c,2)) { goto L_804E38F4; } // 804E3894
  c->r[31]=0u+0x00000000u; // 804E3898
  c->r[30]=0u+0x00000000u; // 804E389C
  goto L_804E38D8; // 804E38A0
L_804E38A4:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E38A4
  c->r[3]=R32(c->r[30]+c->r[0]); // 804E38A8
  c->r[4]=c->r[0]+c->r[30]; // 804E38AC
  cmps(c,1,(int32_t)c->r[3],0); // 804E38B0
  if (crb(c,6)) { goto L_804E38D0; } // 804E38B4
  c->r[0]=R8(c->r[4]+0x00000008u); // 804E38B8
  cmps(c,0,(int32_t)c->r[0],0); // 804E38BC
  if (crb(c,2)) { goto L_804E38D0; } // 804E38C0
  if (crb(c,6)) { goto L_804E38D0; } // 804E38C4
  c->r[4]=0u+0x00000000u; // 804E38C8
  c->lr=0x804E38D0u; f_804EAE90(c); // 804E38CC
L_804E38D0:;
  c->r[30]=c->r[30]+0x0000000Cu; // 804E38D0
  c->r[31]=c->r[31]+0x00000001u; // 804E38D4
L_804E38D8:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E38D8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804E38DC
  if (crb(c,0)) { IRQCHK(c); goto L_804E38A4; } // 804E38E0
  c->r[3]=c->r[28]+0x00000004u; // 804E38E4
  c->lr=0x804E38ECu; f_804E4C38(c); // 804E38E8
  c->r[0]=0u+0x00000000u; // 804E38EC
  W8(c->r[28]+0x00000018u,c->r[0]); // 804E38F0
L_804E38F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 804E38F4
  if (!crb(c,1)) { goto L_804E3904; } // 804E38F8
  c->r[3]=c->r[28]|c->r[28]; // 804E38FC
  c->lr=0x804E3904u; f_803A9400(c); // 804E3900
L_804E3904:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E3904
  c->r[3]=c->r[28]|c->r[28]; // 804E3908
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E390C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E3910
  c->r[28]=R32(c->r[1]+0x00000010u); // 804E3914
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E3918
  c->lr=c->r[0]; // 804E391C
  c->r[1]=c->r[1]+0x00000020u; // 804E3920
  return; // 804E3924
}

// fn_804E3928
void f_804E3928(Ctx* __restrict c) {
  trace_call(0x804E3928u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3928
  c->r[0]=c->lr; // 804E392C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E3930
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E3934
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E3938
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E393C
  c->r[29]=c->r[3]|c->r[3]; // 804E3940
  c->r[0]=R8(c->r[3]+0x00000018u); // 804E3944
  cmps(c,0,(int32_t)c->r[0],0); // 804E3948
  if (crb(c,2)) { goto L_804E39AC; } // 804E394C
  c->r[30]=0u+0x00000000u; // 804E3950
  c->r[31]=0u+0x00000000u; // 804E3954
  goto L_804E3990; // 804E3958
L_804E395C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 804E395C
  c->r[3]=R32(c->r[31]+c->r[0]); // 804E3960
  c->r[4]=c->r[0]+c->r[31]; // 804E3964
  cmps(c,1,(int32_t)c->r[3],0); // 804E3968
  if (crb(c,6)) { goto L_804E3988; } // 804E396C
  c->r[0]=R8(c->r[4]+0x00000008u); // 804E3970
  cmps(c,0,(int32_t)c->r[0],0); // 804E3974
  if (crb(c,2)) { goto L_804E3988; } // 804E3978
  if (crb(c,6)) { goto L_804E3988; } // 804E397C
  c->r[4]=0u+0x00000000u; // 804E3980
  c->lr=0x804E3988u; f_804EAE90(c); // 804E3984
L_804E3988:;
  c->r[31]=c->r[31]+0x0000000Cu; // 804E3988
  c->r[30]=c->r[30]+0x00000001u; // 804E398C
L_804E3990:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 804E3990
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E3994
  if (crb(c,0)) { IRQCHK(c); goto L_804E395C; } // 804E3998
  c->r[3]=c->r[29]+0x00000004u; // 804E399C
  c->lr=0x804E39A4u; f_804E4C38(c); // 804E39A0
  c->r[0]=0u+0x00000000u; // 804E39A4
  W8(c->r[29]+0x00000018u,c->r[0]); // 804E39A8
L_804E39AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E39AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E39B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E39B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E39B8
  c->lr=c->r[0]; // 804E39BC
  c->r[1]=c->r[1]+0x00000020u; // 804E39C0
  return; // 804E39C4
}

// fn_804E39C8
void f_804E39C8(Ctx* __restrict c) {
  trace_call(0x804E39C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E39C8
  c->r[0]=c->lr; // 804E39CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E39D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804E39D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804E39D8
  c->f[31]=c->f[1]; // 804E39DC
  c->r[8]=0u+0x00000000u; // 804E39E0
  c->r[7]=0u+0x00000000u; // 804E39E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E39E8
  c->r[31]=c->r[3]|c->r[3]; // 804E39EC
  c->r[5]=0u+0x00000000u; // 804E39F0
  goto L_804E3A18; // 804E39F4
L_804E39F8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804E39F8
  c->r[6]=c->r[0]+c->r[7]; // 804E39FC
  c->r[0]=R32(c->r[7]+c->r[0]); // 804E3A00
  cmps(c,0,(int32_t)c->r[0],0); // 804E3A04
  if (!crb(c,2)) { goto L_804E3A10; } // 804E3A08
  W32(c->r[6]+0x00000004u,c->r[5]); // 804E3A0C
L_804E3A10:;
  c->r[7]=c->r[7]+0x0000000Cu; // 804E3A10
  c->r[8]=c->r[8]+0x00000001u; // 804E3A14
L_804E3A18:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 804E3A18
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804E3A1C
  if (crb(c,0)) { IRQCHK(c); goto L_804E39F8; } // 804E3A20
  c->r[0]=R8(c->r[3]+0x00000019u); // 804E3A24
  cmps(c,0,(int32_t)c->r[0],0); // 804E3A28
  if (crb(c,2)) { goto L_804E3AB4; } // 804E3A2C
  cmps(c,0,(int32_t)c->r[4],0); // 804E3A30
  if (!crb(c,2)) { goto L_804E3A58; } // 804E3A34
  {uint32_t ea=c->r[2]+0x000018E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3A38
  c->r[5]=0u+0x00000000u; // 804E3A3C
  c->r[0]=0u+0x00000001u; // 804E3A40
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 804E3A44
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E3A48
  W8(c->r[3]+0x0000001Au,c->r[0]); // 804E3A4C
  W8(c->r[3]+0x00000019u,c->r[5]); // 804E3A50
  goto L_804E3AAC; // 804E3A54
L_804E3A58:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 804E3A58
  cmps(c,0,(int32_t)c->r[0],0); // 804E3A5C
  if (crb(c,2)) { goto L_804E3A70; } // 804E3A60
  c->r[5]=R32(c->r[3]+0x00000008u); // 804E3A64
  c->r[0]=R32(c->r[5]+0x00000008u); // 804E3A68
  goto L_804E3A74; // 804E3A6C
L_804E3A70:;
  c->r[0]=0u+0x00000000u; // 804E3A70
L_804E3A74:;
  c->r[6]=0u+0x43300000u; // 804E3A74
  c->r[5]=0u+0x00000000u; // 804E3A78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E3A7C
  c->r[0]=0u+0x00000001u; // 804E3A80
  {uint32_t ea=c->r[2]+0x000018E8u; c->f[2]=RF64(ea);} // 804E3A84
  W32(c->r[1]+0x00000008u,c->r[6]); // 804E3A88
  {uint32_t ea=c->r[2]+0x000018E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3A8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E3A90
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 804E3A94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E3A98
  W8(c->r[3]+0x0000001Au,c->r[0]); // 804E3A9C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 804E3AA0
  W8(c->r[3]+0x00000019u,c->r[5]); // 804E3AA4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804E3AA8
L_804E3AAC:;
  c->r[0]=0u+0x00000000u; // 804E3AAC
  W8(c->r[3]+0x00000019u,c->r[0]); // 804E3AB0
L_804E3AB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E3AB4
  if (!crb(c,2)) { goto L_804E3ACC; } // 804E3AB8
  c->f[1]=c->f[31]; // 804E3ABC
  c->r[3]=c->r[31]|c->r[31]; // 804E3AC0
  c->lr=0x804E3AC8u; f_804E3B00(c); // 804E3AC4
  goto L_804E3AD8; // 804E3AC8
L_804E3ACC:;
  c->f[1]=c->f[31]; // 804E3ACC
  c->r[3]=c->r[31]|c->r[31]; // 804E3AD0
  c->lr=0x804E3AD8u; f_804E3D1C(c); // 804E3AD4
L_804E3AD8:;
  c->r[0]=0u+0x00000000u; // 804E3AD8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 804E3ADC
  W8(c->r[31]+0x0000001Au,c->r[0]); // 804E3AE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804E3AE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804E3AE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E3AEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E3AF0
  c->lr=c->r[0]; // 804E3AF4
  c->r[1]=c->r[1]+0x00000030u; // 804E3AF8
  return; // 804E3AFC
}

// fn_804E3B00
void f_804E3B00(Ctx* __restrict c) {
  trace_call(0x804E3B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3B00
  c->r[0]=c->lr; // 804E3B04
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E3B08
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E3B0C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E3B10
  c->f[31]=c->f[1]; // 804E3B14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E3B18
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E3B1C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E3B20
  c->r[29]=c->r[3]|c->r[3]; // 804E3B24
  W32(c->r[1]+0x00000020u,c->r[28]); // 804E3B28
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3B2C
  c->f[1]=c->f[0]; // 804E3B30
  c->lr=0x804E3B38u; f_803BA1BC(c); // 804E3B34
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804E3B38
  c->f[1]=c->f[31]; // 804E3B3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E3B40
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 804E3B44
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 804E3B48
  c->lr=0x804E3B50u; f_803BA1BC(c); // 804E3B4C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804E3B50
  c->r[0]=R8(c->r[29]+0x0000001Au); // 804E3B54
  cmps(c,0,(int32_t)c->r[0],0); // 804E3B58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E3B5C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804E3B60
  c->r[31]=R32(c->r[1]+0x00000014u); // 804E3B64
  if (crb(c,2)) { goto L_804E3B98; } // 804E3B68
  c->r[3]=c->r[28]^0x80000000u; // 804E3B6C
  c->r[0]=0u+0x43300000u; // 804E3B70
  W32(c->r[1]+0x00000014u,c->r[3]); // 804E3B74
  {uint32_t ea=c->r[2]+0x000018F0u; c->f[1]=RF64(ea);} // 804E3B78
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E3B7C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3B80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E3B84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804E3B88
  fcmp(c,0,c->f[2],c->f[0]); // 804E3B8C
  if (!crb(c,2)) { goto L_804E3B98; } // 804E3B90
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 804E3B94
L_804E3B98:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 804E3B98
  if (crb(c,2)) { goto L_804E3CF4; } // 804E3B9C
  c->r[30]=c->r[28]+0x00000001u; // 804E3BA0
L_804E3BA4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 804E3BA4
  cmps(c,0,(int32_t)c->r[4],0); // 804E3BA8
  if (crb(c,2)) { goto L_804E3BBC; } // 804E3BAC
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3BB0
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3BB4
  goto L_804E3BC0; // 804E3BB8
L_804E3BBC:;
  c->r[0]=0u+0x00000000u; // 804E3BBC
L_804E3BC0:;
  cmpu(c,0,c->r[30],c->r[0]); // 804E3BC0
  if (!crb(c,2)) { goto L_804E3BF0; } // 804E3BC4
  cmps(c,0,(int32_t)c->r[4],0); // 804E3BC8
  if (crb(c,2)) { goto L_804E3BDC; } // 804E3BCC
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3BD0
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3BD4
  goto L_804E3BE0; // 804E3BD8
L_804E3BDC:;
  c->r[0]=0u+0x00000000u; // 804E3BDC
L_804E3BE0:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804E3BE0
  c->r[30]=c->r[30]-c->r[0]; // 804E3BE4
  c->r[0]=c->r[3]+0x00000001u; // 804E3BE8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804E3BEC
L_804E3BF0:;
  c->r[28]=0u+0x00000000u; // 804E3BF0
  goto L_804E3CD4; // 804E3BF4
L_804E3BF8:;
  c->r[4]=c->r[28]|c->r[28]; // 804E3BF8
  c->r[3]=c->r[29]+0x00000004u; // 804E3BFC
  c->lr=0x804E3C04u; f_804E4C8C(c); // 804E3C00
  cmps(c,0,(int32_t)c->r[3],0); // 804E3C04
  c->r[4]=c->r[3]|c->r[3]; // 804E3C08
  if (crb(c,2)) { goto L_804E3CD0; } // 804E3C0C
  c->r[5]=R8(c->r[3]+0x00000008u); // 804E3C10
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 804E3C14
  if (!crb(c,2)) { goto L_804E3C34; } // 804E3C18
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 804E3C1C
  if (!crb(c,2)) { goto L_804E3C2C; } // 804E3C20
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804E3C24
  if (crb(c,2)) { goto L_804E3C34; } // 804E3C28
L_804E3C2C:;
  c->r[0]=0u+0x00000001u; // 804E3C2C
  goto L_804E3CA0; // 804E3C30
L_804E3C34:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 804E3C34
  c->r[5]=R8(c->r[3]+0x00000009u); // 804E3C38
  cmps(c,0,(int32_t)c->r[6],0); // 804E3C3C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804E3C40
  c->r[0]=sraw(c,c->r[5],31); // 804E3C44
  c->r[0]=c->r[5]&~c->r[0]; // 804E3C48
  if (!crb(c,0)) { goto L_804E3C54; } // 804E3C4C
  c->r[6]=0u-c->r[6]; // 804E3C50
L_804E3C54:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 804E3C54
  cmps(c,0,(int32_t)c->r[5],0); // 804E3C58
  if (!crb(c,2)) { goto L_804E3C70; } // 804E3C5C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804E3C60
  if (!crb(c,0)) { goto L_804E3C9C; } // 804E3C64
  c->r[0]=0u+0x00000000u; // 804E3C68
  goto L_804E3CA0; // 804E3C6C
L_804E3C70:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804E3C70
  if (!crb(c,0)) { goto L_804E3C80; } // 804E3C74
  c->r[0]=0u+0x00000000u; // 804E3C78
  goto L_804E3CA0; // 804E3C7C
L_804E3C80:;
  c->r[3]=c->r[6]-c->r[0]; // 804E3C80
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 804E3C84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 804E3C88
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 804E3C8C
  if (crb(c,2)) { goto L_804E3C9C; } // 804E3C90
  c->r[0]=0u+0x00000000u; // 804E3C94
  goto L_804E3CA0; // 804E3C98
L_804E3C9C:;
  c->r[0]=0u+0x00000001u; // 804E3C9C
L_804E3CA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E3CA0
  if (crb(c,2)) { goto L_804E3CD0; } // 804E3CA4
  cmps(c,0,(int32_t)c->r[7],0); // 804E3CA8
  if (crb(c,2)) { goto L_804E3CC4; } // 804E3CAC
  c->r[3]=c->r[29]|c->r[29]; // 804E3CB0
  c->r[5]=c->r[30]|c->r[30]; // 804E3CB4
  c->r[6]=0u+0x00000000u; // 804E3CB8
  c->lr=0x804E3CC0u; f_804E3F9C(c); // 804E3CBC
  goto L_804E3CD0; // 804E3CC0
L_804E3CC4:;
  c->r[3]=c->r[29]|c->r[29]; // 804E3CC4
  c->r[5]=c->r[30]|c->r[30]; // 804E3CC8
  c->lr=0x804E3CD0u; f_804E4210(c); // 804E3CCC
L_804E3CD0:;
  c->r[28]=c->r[28]+0x00000001u; // 804E3CD0
L_804E3CD4:;
  c->r[3]=c->r[29]+0x00000004u; // 804E3CD4
  c->lr=0x804E3CDCu; f_804E4C48(c); // 804E3CD8
  cmpu(c,0,c->r[28],c->r[3]); // 804E3CDC
  if (crb(c,0)) { IRQCHK(c); goto L_804E3BF8; } // 804E3CE0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 804E3CE4
  if (crb(c,2)) { goto L_804E3CF4; } // 804E3CE8
  c->r[30]=c->r[30]+0x00000001u; // 804E3CEC
  IRQCHK(c); goto L_804E3BA4; // 804E3CF0
L_804E3CF4:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E3CF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E3CF8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E3CFC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E3D00
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E3D04
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E3D08
  c->r[28]=R32(c->r[1]+0x00000020u); // 804E3D0C
  c->lr=c->r[0]; // 804E3D10
  c->r[1]=c->r[1]+0x00000040u; // 804E3D14
  return; // 804E3D18
}

// fn_804E3D1C
void f_804E3D1C(Ctx* __restrict c) {
  trace_call(0x804E3D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3D1C
  c->r[0]=c->lr; // 804E3D20
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E3D24
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E3D28
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E3D2C
  c->f[31]=c->f[1]; // 804E3D30
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E3D34
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E3D38
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E3D3C
  c->r[29]=c->r[3]|c->r[3]; // 804E3D40
  W32(c->r[1]+0x00000020u,c->r[28]); // 804E3D44
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E3D48
  c->f[1]=c->f[0]; // 804E3D4C
  c->lr=0x804E3D54u; f_803B9F7C(c); // 804E3D50
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804E3D54
  c->f[1]=c->f[31]; // 804E3D58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E3D5C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 804E3D60
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 804E3D64
  c->lr=0x804E3D6Cu; f_803B9F7C(c); // 804E3D68
  c->f[0]=c->ps1[0]=S(c->f[1]); // 804E3D6C
  c->r[4]=R32(c->r[29]+0x00000004u); // 804E3D70
  cmps(c,0,(int32_t)c->r[4],0); // 804E3D74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E3D78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804E3D7C
  c->r[31]=R32(c->r[1]+0x00000014u); // 804E3D80
  if (crb(c,2)) { goto L_804E3D94; } // 804E3D84
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3D88
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3D8C
  goto L_804E3D98; // 804E3D90
L_804E3D94:;
  c->r[0]=0u+0x00000000u; // 804E3D94
L_804E3D98:;
  cmpu(c,0,c->r[28],c->r[0]); // 804E3D98
  if (crb(c,0)) { goto L_804E3DBC; } // 804E3D9C
  cmps(c,0,(int32_t)c->r[4],0); // 804E3DA0
  if (crb(c,2)) { goto L_804E3DB4; } // 804E3DA4
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3DA8
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3DAC
  goto L_804E3DB8; // 804E3DB0
L_804E3DB4:;
  c->r[0]=0u+0x00000000u; // 804E3DB4
L_804E3DB8:;
  c->r[28]=c->r[28]-c->r[0]; // 804E3DB8
L_804E3DBC:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E3DBC
  if (crb(c,2)) { goto L_804E3DD0; } // 804E3DC0
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3DC4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3DC8
  goto L_804E3DD4; // 804E3DCC
L_804E3DD0:;
  c->r[0]=0u+0x00000000u; // 804E3DD0
L_804E3DD4:;
  cmpu(c,0,c->r[31],c->r[0]); // 804E3DD4
  if (crb(c,0)) { goto L_804E3DF8; } // 804E3DD8
  cmps(c,0,(int32_t)c->r[4],0); // 804E3DDC
  if (crb(c,2)) { goto L_804E3DF0; } // 804E3DE0
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3DE4
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3DE8
  goto L_804E3DF4; // 804E3DEC
L_804E3DF0:;
  c->r[0]=0u+0x00000000u; // 804E3DF0
L_804E3DF4:;
  c->r[31]=c->r[31]-c->r[0]; // 804E3DF4
L_804E3DF8:;
  c->r[0]=R8(c->r[29]+0x0000001Au); // 804E3DF8
  cmps(c,0,(int32_t)c->r[0],0); // 804E3DFC
  if (crb(c,2)) { goto L_804E3E30; } // 804E3E00
  c->r[3]=c->r[28]^0x80000000u; // 804E3E04
  c->r[0]=0u+0x43300000u; // 804E3E08
  W32(c->r[1]+0x00000014u,c->r[3]); // 804E3E0C
  {uint32_t ea=c->r[2]+0x000018F0u; c->f[1]=RF64(ea);} // 804E3E10
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E3E14
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E3E18
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E3E1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804E3E20
  fcmp(c,0,c->f[2],c->f[0]); // 804E3E24
  if (!crb(c,2)) { goto L_804E3E30; } // 804E3E28
  c->r[28]=c->r[28]+0x00000001u; // 804E3E2C
L_804E3E30:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 804E3E30
  if (crb(c,2)) { goto L_804E3F74; } // 804E3E34
  c->r[30]=c->r[28]+0xFFFFFFFFu; // 804E3E38
L_804E3E3C:;
  cmps(c,0,(int32_t)c->r[30],-1); // 804E3E3C
  if (!crb(c,2)) { goto L_804E3E70; } // 804E3E40
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E3E44
  cmps(c,0,(int32_t)c->r[0],0); // 804E3E48
  if (crb(c,2)) { goto L_804E3E5C; } // 804E3E4C
  c->r[3]=R32(c->r[29]+0x00000008u); // 804E3E50
  c->r[0]=R32(c->r[3]+0x00000008u); // 804E3E54
  goto L_804E3E60; // 804E3E58
L_804E3E5C:;
  c->r[0]=0u+0x00000000u; // 804E3E5C
L_804E3E60:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804E3E60
  c->r[30]=c->r[30]+c->r[0]; // 804E3E64
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804E3E68
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 804E3E6C
L_804E3E70:;
  c->r[28]=0u+0x00000000u; // 804E3E70
  goto L_804E3F54; // 804E3E74
L_804E3E78:;
  c->r[4]=c->r[28]|c->r[28]; // 804E3E78
  c->r[3]=c->r[29]+0x00000004u; // 804E3E7C
  c->lr=0x804E3E84u; f_804E4C8C(c); // 804E3E80
  cmps(c,0,(int32_t)c->r[3],0); // 804E3E84
  c->r[4]=c->r[3]|c->r[3]; // 804E3E88
  if (crb(c,2)) { goto L_804E3F50; } // 804E3E8C
  c->r[5]=R8(c->r[3]+0x00000008u); // 804E3E90
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 804E3E94
  if (!crb(c,2)) { goto L_804E3EB4; } // 804E3E98
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 804E3E9C
  if (!crb(c,2)) { goto L_804E3EAC; } // 804E3EA0
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 804E3EA4
  if (crb(c,2)) { goto L_804E3EB4; } // 804E3EA8
L_804E3EAC:;
  c->r[0]=0u+0x00000001u; // 804E3EAC
  goto L_804E3F20; // 804E3EB0
L_804E3EB4:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 804E3EB4
  c->r[5]=R8(c->r[3]+0x00000009u); // 804E3EB8
  cmps(c,0,(int32_t)c->r[6],0); // 804E3EBC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 804E3EC0
  c->r[0]=sraw(c,c->r[5],31); // 804E3EC4
  c->r[0]=c->r[5]&~c->r[0]; // 804E3EC8
  if (!crb(c,0)) { goto L_804E3ED4; } // 804E3ECC
  c->r[6]=0u-c->r[6]; // 804E3ED0
L_804E3ED4:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 804E3ED4
  cmps(c,0,(int32_t)c->r[5],0); // 804E3ED8
  if (!crb(c,2)) { goto L_804E3EF0; } // 804E3EDC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804E3EE0
  if (!crb(c,0)) { goto L_804E3F1C; } // 804E3EE4
  c->r[0]=0u+0x00000000u; // 804E3EE8
  goto L_804E3F20; // 804E3EEC
L_804E3EF0:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804E3EF0
  if (!crb(c,0)) { goto L_804E3F00; } // 804E3EF4
  c->r[0]=0u+0x00000000u; // 804E3EF8
  goto L_804E3F20; // 804E3EFC
L_804E3F00:;
  c->r[3]=c->r[6]-c->r[0]; // 804E3F00
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 804E3F04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 804E3F08
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 804E3F0C
  if (crb(c,2)) { goto L_804E3F1C; } // 804E3F10
  c->r[0]=0u+0x00000000u; // 804E3F14
  goto L_804E3F20; // 804E3F18
L_804E3F1C:;
  c->r[0]=0u+0x00000001u; // 804E3F1C
L_804E3F20:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E3F20
  if (crb(c,2)) { goto L_804E3F50; } // 804E3F24
  cmps(c,0,(int32_t)c->r[7],0); // 804E3F28
  if (crb(c,2)) { goto L_804E3F44; } // 804E3F2C
  c->r[3]=c->r[29]|c->r[29]; // 804E3F30
  c->r[5]=c->r[30]|c->r[30]; // 804E3F34
  c->r[6]=0u+0x00000001u; // 804E3F38
  c->lr=0x804E3F40u; f_804E3F9C(c); // 804E3F3C
  goto L_804E3F50; // 804E3F40
L_804E3F44:;
  c->r[3]=c->r[29]|c->r[29]; // 804E3F44
  c->r[5]=c->r[30]|c->r[30]; // 804E3F48
  c->lr=0x804E3F50u; f_804E451C(c); // 804E3F4C
L_804E3F50:;
  c->r[28]=c->r[28]+0x00000001u; // 804E3F50
L_804E3F54:;
  c->r[3]=c->r[29]+0x00000004u; // 804E3F54
  c->lr=0x804E3F5Cu; f_804E4C48(c); // 804E3F58
  cmpu(c,0,c->r[28],c->r[3]); // 804E3F5C
  if (crb(c,0)) { IRQCHK(c); goto L_804E3E78; } // 804E3F60
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 804E3F64
  if (crb(c,2)) { goto L_804E3F74; } // 804E3F68
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 804E3F6C
  IRQCHK(c); goto L_804E3E3C; // 804E3F70
L_804E3F74:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E3F74
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E3F78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E3F7C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E3F80
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E3F84
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E3F88
  c->r[28]=R32(c->r[1]+0x00000020u); // 804E3F8C
  c->lr=c->r[0]; // 804E3F90
  c->r[1]=c->r[1]+0x00000040u; // 804E3F94
  return; // 804E3F98
}

// fn_804E3F9C
void f_804E3F9C(Ctx* __restrict c) {
  trace_call(0x804E3F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E3F9C
  c->r[0]=c->lr; // 804E3FA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E3FA4
  c->r[11]=c->r[1]+0x00000030u; // 804E3FA8
  c->lr=0x804E3FB0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E3FAC
  c->r[28]=c->r[3]|c->r[3]; // 804E3FB0
  c->r[29]=c->r[4]|c->r[4]; // 804E3FB4
  c->r[30]=c->r[5]|c->r[5]; // 804E3FB8
  c->r[23]=c->r[6]|c->r[6]; // 804E3FBC
  c->r[3]=c->r[3]+0x00000004u; // 804E3FC0
  c->lr=0x804E3FC8u; f_804E4CE4(c); // 804E3FC4
  cmps(c,0,(int32_t)c->r[3],0); // 804E3FC8
  c->r[31]=c->r[3]|c->r[3]; // 804E3FCC
  if (crb(c,2)) { goto L_804E41F8; } // 804E3FD0
  c->r[3]=R8(c->r[29]+0x00000008u); // 804E3FD4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 804E3FD8
  if (!crb(c,2)) { goto L_804E41F8; } // 804E3FDC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 804E3FE0
  if (crb(c,2)) { goto L_804E4094; } // 804E3FE4
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E3FE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E3FEC
  if (!crb(c,2)) { goto L_804E41F8; } // 804E3FF0
  c->r[26]=0u+0x00000000u; // 804E3FF4
  c->r[24]=0u+0x00000000u; // 804E3FF8
  c->r[27]=0u+0x00000000u; // 804E3FFC
  goto L_804E4038; // 804E4000
L_804E4004:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E4004
  c->r[29]=c->r[0]+c->r[24]; // 804E4008
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E400C
  cmpu(c,0,c->r[0],c->r[31]); // 804E4010
  if (!crb(c,2)) { goto L_804E4030; } // 804E4014
  c->r[3]=R32(c->r[29]+0x00000000u); // 804E4018
  cmps(c,0,(int32_t)c->r[3],0); // 804E401C
  if (crb(c,2)) { goto L_804E402C; } // 804E4020
  c->r[4]=0u+0x00000000u; // 804E4024
  c->lr=0x804E402Cu; f_804EAE90(c); // 804E4028
L_804E402C:;
  W32(c->r[29]+0x00000004u,c->r[27]); // 804E402C
L_804E4030:;
  c->r[24]=c->r[24]+0x0000000Cu; // 804E4030
  c->r[26]=c->r[26]+0x00000001u; // 804E4034
L_804E4038:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E4038
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 804E403C
  if (crb(c,0)) { IRQCHK(c); goto L_804E4004; } // 804E4040
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4044
  cmps(c,0,(int32_t)c->r[0],0); // 804E4048
  if (crb(c,2)) { goto L_804E4080; } // 804E404C
  c->r[3]=R8(c->r[31]+0x00000008u); // 804E4050
  c->r[5]=c->r[31]|c->r[31]; // 804E4054
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4058
  c->lr=0x804E4060u; f_80505D78(c); // 804E405C
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4060
  c->r[5]=c->r[3]|c->r[3]; // 804E4064
  c->r[4]=c->r[30]|c->r[30]; // 804E4068
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E406C
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4070
  c->r[3]=0u+0x00000000u; // 804E4074
  c->ctr=c->r[12]; // 804E4078
  if (true) { c->lr=0x804E4080u; dispatch(c,c->ctr); } // 804E407C
L_804E4080:;
  c->r[3]=c->r[28]|c->r[28]; // 804E4080
  c->r[4]=c->r[31]|c->r[31]; // 804E4084
  c->r[5]=0u+0x00000001u; // 804E4088
  c->lr=0x804E4090u; f_804E4828(c); // 804E408C
  goto L_804E41F8; // 804E4090
L_804E4094:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4094
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4098
  if (!crb(c,2)) { goto L_804E413C; } // 804E409C
  c->r[25]=0u+0x00000000u; // 804E40A0
  c->r[24]=0u+0x00000000u; // 804E40A4
  c->r[27]=0u+0x00000000u; // 804E40A8
  goto L_804E40E4; // 804E40AC
L_804E40B0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E40B0
  c->r[26]=c->r[0]+c->r[24]; // 804E40B4
  c->r[0]=R32(c->r[26]+0x00000004u); // 804E40B8
  cmpu(c,0,c->r[0],c->r[31]); // 804E40BC
  if (!crb(c,2)) { goto L_804E40DC; } // 804E40C0
  c->r[3]=R32(c->r[26]+0x00000000u); // 804E40C4
  cmps(c,0,(int32_t)c->r[3],0); // 804E40C8
  if (crb(c,2)) { goto L_804E40D8; } // 804E40CC
  c->r[4]=0u+0x00000000u; // 804E40D0
  c->lr=0x804E40D8u; f_804EAE90(c); // 804E40D4
L_804E40D8:;
  W32(c->r[26]+0x00000004u,c->r[27]); // 804E40D8
L_804E40DC:;
  c->r[24]=c->r[24]+0x0000000Cu; // 804E40DC
  c->r[25]=c->r[25]+0x00000001u; // 804E40E0
L_804E40E4:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E40E4
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 804E40E8
  if (crb(c,0)) { IRQCHK(c); goto L_804E40B0; } // 804E40EC
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E40F0
  cmps(c,0,(int32_t)c->r[0],0); // 804E40F4
  if (crb(c,2)) { goto L_804E412C; } // 804E40F8
  c->r[3]=R8(c->r[31]+0x00000008u); // 804E40FC
  c->r[5]=c->r[31]|c->r[31]; // 804E4100
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4104
  c->lr=0x804E410Cu; f_80505D78(c); // 804E4108
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E410C
  c->r[5]=c->r[3]|c->r[3]; // 804E4110
  c->r[4]=c->r[30]|c->r[30]; // 804E4114
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4118
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E411C
  c->r[3]=0u+0x00000000u; // 804E4120
  c->ctr=c->r[12]; // 804E4124
  if (true) { c->lr=0x804E412Cu; dispatch(c,c->ctr); } // 804E4128
L_804E412C:;
  c->r[3]=c->r[28]|c->r[28]; // 804E412C
  c->r[4]=c->r[31]|c->r[31]; // 804E4130
  c->r[5]=0u+0x00000001u; // 804E4134
  c->lr=0x804E413Cu; f_804E4828(c); // 804E4138
L_804E413C:;
  cmps(c,0,(int32_t)c->r[23],0); // 804E413C
  if (!crb(c,2)) { goto L_804E414C; } // 804E4140
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E4144
  goto L_804E4164; // 804E4148
L_804E414C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E414C
  c->r[3]=R32(c->r[29]+0x00000004u); // 804E4150
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804E4154
  c->r[3]=c->r[0]-c->r[3]; // 804E4158
  c->r[0]=sraw(c,c->r[3],31); // 804E415C
  c->r[0]=c->r[3]&~c->r[0]; // 804E4160
L_804E4164:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4164
  if (!crb(c,2)) { goto L_804E41F8; } // 804E4168
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E416C
  cmps(c,0,(int32_t)c->r[0],0); // 804E4170
  if (crb(c,2)) { goto L_804E41A8; } // 804E4174
  c->r[3]=R8(c->r[31]+0x00000008u); // 804E4178
  c->r[5]=c->r[31]|c->r[31]; // 804E417C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4180
  c->lr=0x804E4188u; f_80505D78(c); // 804E4184
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4188
  c->r[5]=c->r[3]|c->r[3]; // 804E418C
  c->r[4]=c->r[30]|c->r[30]; // 804E4190
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4194
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4198
  c->r[3]=0u+0x00000001u; // 804E419C
  c->ctr=c->r[12]; // 804E41A0
  if (true) { c->lr=0x804E41A8u; dispatch(c,c->ctr); } // 804E41A4
L_804E41A8:;
  c->r[26]=0u+0x00000000u; // 804E41A8
  c->r[27]=0u+0x00000000u; // 804E41AC
  c->r[29]=0u+0x00000000u; // 804E41B0
  goto L_804E41EC; // 804E41B4
L_804E41B8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E41B8
  c->r[25]=c->r[0]+c->r[27]; // 804E41BC
  c->r[0]=R32(c->r[25]+0x00000004u); // 804E41C0
  cmpu(c,0,c->r[0],c->r[31]); // 804E41C4
  if (!crb(c,2)) { goto L_804E41E4; } // 804E41C8
  c->r[3]=R32(c->r[25]+0x00000000u); // 804E41CC
  cmps(c,0,(int32_t)c->r[3],0); // 804E41D0
  if (crb(c,2)) { goto L_804E41E0; } // 804E41D4
  c->r[4]=0u+0x00000000u; // 804E41D8
  c->lr=0x804E41E0u; f_804EAE90(c); // 804E41DC
L_804E41E0:;
  W32(c->r[25]+0x00000004u,c->r[29]); // 804E41E0
L_804E41E4:;
  c->r[27]=c->r[27]+0x0000000Cu; // 804E41E4
  c->r[26]=c->r[26]+0x00000001u; // 804E41E8
L_804E41EC:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E41EC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 804E41F0
  if (crb(c,0)) { IRQCHK(c); goto L_804E41B8; } // 804E41F4
L_804E41F8:;
  c->r[11]=c->r[1]+0x00000030u; // 804E41F8
  c->lr=0x804E4200u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E41FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E4200
  c->lr=c->r[0]; // 804E4204
  c->r[1]=c->r[1]+0x00000030u; // 804E4208
  return; // 804E420C
}

// fn_804E4210
void f_804E4210(Ctx* __restrict c) {
  trace_call(0x804E4210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4210
  c->r[0]=c->lr; // 804E4214
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E4218
  c->r[11]=c->r[1]+0x00000020u; // 804E421C
  c->lr=0x804E4224u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E4220
  c->r[28]=c->r[3]|c->r[3]; // 804E4224
  c->r[29]=c->r[4]|c->r[4]; // 804E4228
  c->r[30]=c->r[5]|c->r[5]; // 804E422C
  c->r[3]=c->r[3]+0x00000004u; // 804E4230
  c->lr=0x804E4238u; f_804E4CE4(c); // 804E4234
  cmps(c,0,(int32_t)c->r[3],0); // 804E4238
  c->r[31]=c->r[3]|c->r[3]; // 804E423C
  if (crb(c,2)) { goto L_804E4504; } // 804E4240
  c->r[4]=R8(c->r[29]+0x00000008u); // 804E4244
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 804E4248
  if (crb(c,2)) { goto L_804E426C; } // 804E424C
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804E4250
  if (crb(c,2)) { goto L_804E426C; } // 804E4254
  c->r[3]=c->r[28]|c->r[28]; // 804E4258
  c->r[4]=c->r[31]|c->r[31]; // 804E425C
  c->r[5]=0u+0x00000001u; // 804E4260
  c->lr=0x804E4268u; f_804E49C8(c); // 804E4264
  goto L_804E4504; // 804E4268
L_804E426C:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E426C
  if (crb(c,2)) { goto L_804E435C; } // 804E4270
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E4274
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4278
  if (!crb(c,2)) { goto L_804E42BC; } // 804E427C
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4280
  cmps(c,0,(int32_t)c->r[0],0); // 804E4284
  if (crb(c,2)) { goto L_804E42BC; } // 804E4288
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E428C
  c->r[5]=c->r[31]|c->r[31]; // 804E4290
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4294
  c->lr=0x804E429Cu; f_80505D78(c); // 804E4298
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E429C
  c->r[5]=c->r[3]|c->r[3]; // 804E42A0
  c->r[4]=c->r[30]|c->r[30]; // 804E42A4
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E42A8
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E42AC
  c->r[3]=0u+0x00000003u; // 804E42B0
  c->ctr=c->r[12]; // 804E42B4
  if (true) { c->lr=0x804E42BCu; dispatch(c,c->ctr); } // 804E42B8
L_804E42BC:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 804E42BC
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804E42C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804E42C4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E42C8
  if (!crb(c,0)) { goto L_804E42E4; } // 804E42CC
  c->r[3]=c->r[28]|c->r[28]; // 804E42D0
  c->r[4]=c->r[31]|c->r[31]; // 804E42D4
  c->r[5]=0u+0x00000001u; // 804E42D8
  c->lr=0x804E42E0u; f_804E49C8(c); // 804E42DC
  goto L_804E4504; // 804E42E0
L_804E42E4:;
  if (!crb(c,2)) { goto L_804E4504; } // 804E42E4
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E42E8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E42EC
  if (!crb(c,0)) { goto L_804E4308; } // 804E42F0
  c->r[3]=c->r[28]|c->r[28]; // 804E42F4
  c->r[4]=c->r[31]|c->r[31]; // 804E42F8
  c->r[5]=0u+0x00000001u; // 804E42FC
  c->lr=0x804E4304u; f_804E49C8(c); // 804E4300
  goto L_804E4504; // 804E4304
L_804E4308:;
  c->r[27]=0u+0x00000000u; // 804E4308
  c->r[26]=0u+0x00000000u; // 804E430C
  c->r[29]=0u+0x00000000u; // 804E4310
  goto L_804E434C; // 804E4314
L_804E4318:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E4318
  c->r[30]=c->r[0]+c->r[26]; // 804E431C
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E4320
  cmpu(c,0,c->r[0],c->r[31]); // 804E4324
  if (!crb(c,2)) { goto L_804E4344; } // 804E4328
  c->r[3]=R32(c->r[30]+0x00000000u); // 804E432C
  cmps(c,0,(int32_t)c->r[3],0); // 804E4330
  if (crb(c,2)) { goto L_804E4340; } // 804E4334
  c->r[4]=0u+0x00000000u; // 804E4338
  c->lr=0x804E4340u; f_804EAE90(c); // 804E433C
L_804E4340:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 804E4340
L_804E4344:;
  c->r[26]=c->r[26]+0x0000000Cu; // 804E4344
  c->r[27]=c->r[27]+0x00000001u; // 804E4348
L_804E434C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E434C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 804E4350
  if (crb(c,0)) { IRQCHK(c); goto L_804E4318; } // 804E4354
  goto L_804E4504; // 804E4358
L_804E435C:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804E435C
  if (crb(c,2)) { goto L_804E43F8; } // 804E4360
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4364
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4368
  if (!crb(c,2)) { goto L_804E43AC; } // 804E436C
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4370
  cmps(c,0,(int32_t)c->r[0],0); // 804E4374
  if (crb(c,2)) { goto L_804E43AC; } // 804E4378
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E437C
  c->r[5]=c->r[31]|c->r[31]; // 804E4380
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4384
  c->lr=0x804E438Cu; f_80505D78(c); // 804E4388
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E438C
  c->r[5]=c->r[3]|c->r[3]; // 804E4390
  c->r[4]=c->r[30]|c->r[30]; // 804E4394
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4398
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E439C
  c->r[3]=0u+0x00000002u; // 804E43A0
  c->ctr=c->r[12]; // 804E43A4
  if (true) { c->lr=0x804E43ACu; dispatch(c,c->ctr); } // 804E43A8
L_804E43AC:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 804E43AC
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804E43B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804E43B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E43B8
  if (!crb(c,1)) { goto L_804E43D4; } // 804E43BC
  c->r[3]=c->r[28]|c->r[28]; // 804E43C0
  c->r[4]=c->r[31]|c->r[31]; // 804E43C4
  c->r[5]=0u+0x00000001u; // 804E43C8
  c->lr=0x804E43D0u; f_804E49C8(c); // 804E43CC
  goto L_804E4504; // 804E43D0
L_804E43D4:;
  if (!crb(c,2)) { goto L_804E4504; } // 804E43D4
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E43D8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E43DC
  if (crb(c,1)) { goto L_804E4504; } // 804E43E0
  c->r[3]=c->r[28]|c->r[28]; // 804E43E4
  c->r[4]=c->r[31]|c->r[31]; // 804E43E8
  c->r[5]=0u+0x00000001u; // 804E43EC
  c->lr=0x804E43F4u; f_804E49C8(c); // 804E43F0
  goto L_804E4504; // 804E43F4
L_804E43F8:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E43F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E43FC
  if (!crb(c,2)) { goto L_804E4440; } // 804E4400
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4404
  cmps(c,0,(int32_t)c->r[0],0); // 804E4408
  if (crb(c,2)) { goto L_804E4440; } // 804E440C
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E4410
  c->r[5]=c->r[31]|c->r[31]; // 804E4414
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4418
  c->lr=0x804E4420u; f_80505D78(c); // 804E441C
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4420
  c->r[5]=c->r[3]|c->r[3]; // 804E4424
  c->r[4]=c->r[30]|c->r[30]; // 804E4428
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E442C
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4430
  c->r[3]=0u+0x00000002u; // 804E4434
  c->ctr=c->r[12]; // 804E4438
  if (true) { c->lr=0x804E4440u; dispatch(c,c->ctr); } // 804E443C
L_804E4440:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E4440
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4444
  if (!crb(c,2)) { goto L_804E4488; } // 804E4448
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E444C
  cmps(c,0,(int32_t)c->r[0],0); // 804E4450
  if (crb(c,2)) { goto L_804E4488; } // 804E4454
  c->r[3]=R8(c->r[31]+0x00000008u); // 804E4458
  c->r[5]=c->r[31]|c->r[31]; // 804E445C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4460
  c->lr=0x804E4468u; f_80505D78(c); // 804E4464
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4468
  c->r[5]=c->r[3]|c->r[3]; // 804E446C
  c->r[4]=c->r[30]|c->r[30]; // 804E4470
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4474
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4478
  c->r[3]=0u+0x00000003u; // 804E447C
  c->ctr=c->r[12]; // 804E4480
  if (true) { c->lr=0x804E4488u; dispatch(c,c->ctr); } // 804E4484
L_804E4488:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4488
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E448C
  if (crb(c,1)) { goto L_804E44B4; } // 804E4490
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E4494
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E4498
  if (!crb(c,0)) { goto L_804E44B4; } // 804E449C
  c->r[3]=c->r[28]|c->r[28]; // 804E44A0
  c->r[4]=c->r[31]|c->r[31]; // 804E44A4
  c->r[5]=0u+0x00000001u; // 804E44A8
  c->lr=0x804E44B0u; f_804E49C8(c); // 804E44AC
  goto L_804E4504; // 804E44B0
L_804E44B4:;
  c->r[30]=0u+0x00000000u; // 804E44B4
  c->r[26]=0u+0x00000000u; // 804E44B8
  c->r[29]=0u+0x00000000u; // 804E44BC
  goto L_804E44F8; // 804E44C0
L_804E44C4:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E44C4
  c->r[27]=c->r[0]+c->r[26]; // 804E44C8
  c->r[0]=R32(c->r[27]+0x00000004u); // 804E44CC
  cmpu(c,0,c->r[0],c->r[31]); // 804E44D0
  if (!crb(c,2)) { goto L_804E44F0; } // 804E44D4
  c->r[3]=R32(c->r[27]+0x00000000u); // 804E44D8
  cmps(c,0,(int32_t)c->r[3],0); // 804E44DC
  if (crb(c,2)) { goto L_804E44EC; } // 804E44E0
  c->r[4]=0u+0x00000000u; // 804E44E4
  c->lr=0x804E44ECu; f_804EAE90(c); // 804E44E8
L_804E44EC:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 804E44EC
L_804E44F0:;
  c->r[26]=c->r[26]+0x0000000Cu; // 804E44F0
  c->r[30]=c->r[30]+0x00000001u; // 804E44F4
L_804E44F8:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E44F8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E44FC
  if (crb(c,0)) { IRQCHK(c); goto L_804E44C4; } // 804E4500
L_804E4504:;
  c->r[11]=c->r[1]+0x00000020u; // 804E4504
  c->lr=0x804E450Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E4508
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E450C
  c->lr=c->r[0]; // 804E4510
  c->r[1]=c->r[1]+0x00000020u; // 804E4514
  return; // 804E4518
}

// fn_804E451C
void f_804E451C(Ctx* __restrict c) {
  trace_call(0x804E451Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E451C
  c->r[0]=c->lr; // 804E4520
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E4524
  c->r[11]=c->r[1]+0x00000020u; // 804E4528
  c->lr=0x804E4530u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E452C
  c->r[28]=c->r[3]|c->r[3]; // 804E4530
  c->r[29]=c->r[4]|c->r[4]; // 804E4534
  c->r[30]=c->r[5]|c->r[5]; // 804E4538
  c->r[3]=c->r[3]+0x00000004u; // 804E453C
  c->lr=0x804E4544u; f_804E4CE4(c); // 804E4540
  cmps(c,0,(int32_t)c->r[3],0); // 804E4544
  c->r[31]=c->r[3]|c->r[3]; // 804E4548
  if (crb(c,2)) { goto L_804E4810; } // 804E454C
  c->r[4]=R8(c->r[29]+0x00000008u); // 804E4550
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 804E4554
  if (crb(c,2)) { goto L_804E4578; } // 804E4558
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804E455C
  if (crb(c,2)) { goto L_804E4578; } // 804E4560
  c->r[3]=c->r[28]|c->r[28]; // 804E4564
  c->r[4]=c->r[31]|c->r[31]; // 804E4568
  c->r[5]=0u+0x00000001u; // 804E456C
  c->lr=0x804E4574u; f_804E49C8(c); // 804E4570
  goto L_804E4810; // 804E4574
L_804E4578:;
  cmps(c,0,(int32_t)c->r[5],0); // 804E4578
  if (crb(c,2)) { goto L_804E4614; } // 804E457C
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E4580
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4584
  if (!crb(c,2)) { goto L_804E45C8; } // 804E4588
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E458C
  cmps(c,0,(int32_t)c->r[0],0); // 804E4590
  if (crb(c,2)) { goto L_804E45C8; } // 804E4594
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E4598
  c->r[5]=c->r[31]|c->r[31]; // 804E459C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E45A0
  c->lr=0x804E45A8u; f_80505D78(c); // 804E45A4
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E45A8
  c->r[5]=c->r[3]|c->r[3]; // 804E45AC
  c->r[4]=c->r[30]|c->r[30]; // 804E45B0
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E45B4
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E45B8
  c->r[3]=0u+0x00000002u; // 804E45BC
  c->ctr=c->r[12]; // 804E45C0
  if (true) { c->lr=0x804E45C8u; dispatch(c,c->ctr); } // 804E45C4
L_804E45C8:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 804E45C8
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804E45CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804E45D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E45D4
  if (!crb(c,0)) { goto L_804E45F0; } // 804E45D8
  c->r[3]=c->r[28]|c->r[28]; // 804E45DC
  c->r[4]=c->r[31]|c->r[31]; // 804E45E0
  c->r[5]=0u+0x00000001u; // 804E45E4
  c->lr=0x804E45ECu; f_804E49C8(c); // 804E45E8
  goto L_804E4810; // 804E45EC
L_804E45F0:;
  if (!crb(c,2)) { goto L_804E4810; } // 804E45F0
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E45F4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E45F8
  if (crb(c,1)) { goto L_804E4810; } // 804E45FC
  c->r[3]=c->r[28]|c->r[28]; // 804E4600
  c->r[4]=c->r[31]|c->r[31]; // 804E4604
  c->r[5]=0u+0x00000001u; // 804E4608
  c->lr=0x804E4610u; f_804E49C8(c); // 804E460C
  goto L_804E4810; // 804E4610
L_804E4614:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 804E4614
  if (crb(c,2)) { goto L_804E4704; } // 804E4618
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E461C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4620
  if (!crb(c,2)) { goto L_804E4664; } // 804E4624
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4628
  cmps(c,0,(int32_t)c->r[0],0); // 804E462C
  if (crb(c,2)) { goto L_804E4664; } // 804E4630
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E4634
  c->r[5]=c->r[31]|c->r[31]; // 804E4638
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E463C
  c->lr=0x804E4644u; f_80505D78(c); // 804E4640
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4644
  c->r[5]=c->r[3]|c->r[3]; // 804E4648
  c->r[4]=c->r[30]|c->r[30]; // 804E464C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4650
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4654
  c->r[3]=0u+0x00000003u; // 804E4658
  c->ctr=c->r[12]; // 804E465C
  if (true) { c->lr=0x804E4664u; dispatch(c,c->ctr); } // 804E4660
L_804E4664:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 804E4664
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 804E4668
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804E466C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E4670
  if (!crb(c,1)) { goto L_804E468C; } // 804E4674
  c->r[3]=c->r[28]|c->r[28]; // 804E4678
  c->r[4]=c->r[31]|c->r[31]; // 804E467C
  c->r[5]=0u+0x00000001u; // 804E4680
  c->lr=0x804E4688u; f_804E49C8(c); // 804E4684
  goto L_804E4810; // 804E4688
L_804E468C:;
  if (!crb(c,2)) { goto L_804E4810; } // 804E468C
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4690
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4694
  if (!crb(c,0)) { goto L_804E46B0; } // 804E4698
  c->r[3]=c->r[28]|c->r[28]; // 804E469C
  c->r[4]=c->r[31]|c->r[31]; // 804E46A0
  c->r[5]=0u+0x00000001u; // 804E46A4
  c->lr=0x804E46ACu; f_804E49C8(c); // 804E46A8
  goto L_804E4810; // 804E46AC
L_804E46B0:;
  c->r[27]=0u+0x00000000u; // 804E46B0
  c->r[26]=0u+0x00000000u; // 804E46B4
  c->r[29]=0u+0x00000000u; // 804E46B8
  goto L_804E46F4; // 804E46BC
L_804E46C0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E46C0
  c->r[30]=c->r[0]+c->r[26]; // 804E46C4
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E46C8
  cmpu(c,0,c->r[0],c->r[31]); // 804E46CC
  if (!crb(c,2)) { goto L_804E46EC; } // 804E46D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 804E46D4
  cmps(c,0,(int32_t)c->r[3],0); // 804E46D8
  if (crb(c,2)) { goto L_804E46E8; } // 804E46DC
  c->r[4]=0u+0x00000000u; // 804E46E0
  c->lr=0x804E46E8u; f_804EAE90(c); // 804E46E4
L_804E46E8:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 804E46E8
L_804E46EC:;
  c->r[26]=c->r[26]+0x0000000Cu; // 804E46EC
  c->r[27]=c->r[27]+0x00000001u; // 804E46F0
L_804E46F4:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E46F4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 804E46F8
  if (crb(c,0)) { IRQCHK(c); goto L_804E46C0; } // 804E46FC
  goto L_804E4810; // 804E4700
L_804E4704:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4704
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4708
  if (!crb(c,2)) { goto L_804E474C; } // 804E470C
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4710
  cmps(c,0,(int32_t)c->r[0],0); // 804E4714
  if (crb(c,2)) { goto L_804E474C; } // 804E4718
  c->r[3]=R8(c->r[3]+0x00000008u); // 804E471C
  c->r[5]=c->r[31]|c->r[31]; // 804E4720
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E4724
  c->lr=0x804E472Cu; f_80505D78(c); // 804E4728
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E472C
  c->r[5]=c->r[3]|c->r[3]; // 804E4730
  c->r[4]=c->r[30]|c->r[30]; // 804E4734
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4738
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E473C
  c->r[3]=0u+0x00000003u; // 804E4740
  c->ctr=c->r[12]; // 804E4744
  if (true) { c->lr=0x804E474Cu; dispatch(c,c->ctr); } // 804E4748
L_804E474C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E474C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4750
  if (!crb(c,2)) { goto L_804E4794; } // 804E4754
  c->r[0]=R32(c->r[28]+0x00000020u); // 804E4758
  cmps(c,0,(int32_t)c->r[0],0); // 804E475C
  if (crb(c,2)) { goto L_804E4794; } // 804E4760
  c->r[3]=R8(c->r[31]+0x00000008u); // 804E4764
  c->r[5]=c->r[31]|c->r[31]; // 804E4768
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 804E476C
  c->lr=0x804E4774u; f_80505D78(c); // 804E4770
  c->r[12]=R32(c->r[28]+0x00000020u); // 804E4774
  c->r[5]=c->r[3]|c->r[3]; // 804E4778
  c->r[4]=c->r[30]|c->r[30]; // 804E477C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 804E4780
  c->r[7]=R32(c->r[28]+0x00000024u); // 804E4784
  c->r[3]=0u+0x00000002u; // 804E4788
  c->ctr=c->r[12]; // 804E478C
  if (true) { c->lr=0x804E4794u; dispatch(c,c->ctr); } // 804E4790
L_804E4794:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E4794
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 804E4798
  if (!crb(c,0)) { goto L_804E47C0; } // 804E479C
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E47A0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E47A4
  if (crb(c,1)) { goto L_804E47C0; } // 804E47A8
  c->r[3]=c->r[28]|c->r[28]; // 804E47AC
  c->r[4]=c->r[31]|c->r[31]; // 804E47B0
  c->r[5]=0u+0x00000001u; // 804E47B4
  c->lr=0x804E47BCu; f_804E49C8(c); // 804E47B8
  goto L_804E4810; // 804E47BC
L_804E47C0:;
  c->r[30]=0u+0x00000000u; // 804E47C0
  c->r[26]=0u+0x00000000u; // 804E47C4
  c->r[29]=0u+0x00000000u; // 804E47C8
  goto L_804E4804; // 804E47CC
L_804E47D0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 804E47D0
  c->r[27]=c->r[0]+c->r[26]; // 804E47D4
  c->r[0]=R32(c->r[27]+0x00000004u); // 804E47D8
  cmpu(c,0,c->r[0],c->r[31]); // 804E47DC
  if (!crb(c,2)) { goto L_804E47FC; } // 804E47E0
  c->r[3]=R32(c->r[27]+0x00000000u); // 804E47E4
  cmps(c,0,(int32_t)c->r[3],0); // 804E47E8
  if (crb(c,2)) { goto L_804E47F8; } // 804E47EC
  c->r[4]=0u+0x00000000u; // 804E47F0
  c->lr=0x804E47F8u; f_804EAE90(c); // 804E47F4
L_804E47F8:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 804E47F8
L_804E47FC:;
  c->r[26]=c->r[26]+0x0000000Cu; // 804E47FC
  c->r[30]=c->r[30]+0x00000001u; // 804E4800
L_804E4804:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 804E4804
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 804E4808
  if (crb(c,0)) { IRQCHK(c); goto L_804E47D0; } // 804E480C
L_804E4810:;
  c->r[11]=c->r[1]+0x00000020u; // 804E4810
  c->lr=0x804E4818u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E4814
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E4818
  c->lr=c->r[0]; // 804E481C
  c->r[1]=c->r[1]+0x00000020u; // 804E4820
  return; // 804E4824
}

// fn_804E4828
void f_804E4828(Ctx* __restrict c) {
  trace_call(0x804E4828u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4828
  c->r[0]=c->lr; // 804E482C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E4830
  c->r[11]=c->r[1]+0x00000030u; // 804E4834
  c->lr=0x804E483Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E4838
  c->r[6]=R32(c->r[3]+0x00000014u); // 804E483C
  c->r[31]=c->r[5]|c->r[5]; // 804E4840
  c->r[29]=c->r[3]|c->r[3]; // 804E4844
  c->r[30]=c->r[4]|c->r[4]; // 804E4848
  c->r[7]=0u+0x00000080u; // 804E484C
  c->r[27]=0u+0xFFFFFFFFu; // 804E4850
  c->r[8]=0u+0x00000000u; // 804E4854
  c->r[5]=0u+0x00000000u; // 804E4858
  c->ctr=c->r[6]; // 804E485C
  cmps(c,0,(int32_t)c->r[6],0); // 804E4860
  if (!crb(c,1)) { goto L_804E48A4; } // 804E4864
L_804E4868:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 804E4868
  c->r[4]=R32(c->r[4]+c->r[5]); // 804E486C
  cmps(c,0,(int32_t)c->r[4],0); // 804E4870
  if (crb(c,2)) { goto L_804E48A4; } // 804E4874
  if (crb(c,2)) { goto L_804E4884; } // 804E4878
  c->r[0]=R8(c->r[4]+0x00000094u); // 804E487C
  goto L_804E4888; // 804E4880
L_804E4884:;
  c->r[0]=0u+0x00000000u; // 804E4884
L_804E4888:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804E4888
  if (!crb(c,1)) { goto L_804E4898; } // 804E488C
  c->r[27]=c->r[8]|c->r[8]; // 804E4890
  c->r[7]=c->r[0]|c->r[0]; // 804E4894
L_804E4898:;
  c->r[5]=c->r[5]+0x0000000Cu; // 804E4898
  c->r[8]=c->r[8]+0x00000001u; // 804E489C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E4868; } // 804E48A0
L_804E48A4:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[6]); // 804E48A4
  if (!crb(c,2)) { goto L_804E48D8; } // 804E48A8
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 804E48AC
  c->r[3]=R32(c->r[3]+0x00000010u); // 804E48B0
  c->r[28]=c->r[3]+c->r[0]; // 804E48B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 804E48B8
  cmps(c,0,(int32_t)c->r[3],0); // 804E48BC
  if (crb(c,2)) { goto L_804E48CC; } // 804E48C0
  c->r[4]=0u+0x00000000u; // 804E48C4
  c->lr=0x804E48CCu; f_804EAE90(c); // 804E48C8
L_804E48CC:;
  c->r[0]=0u+0x00000000u; // 804E48CC
  c->r[8]=c->r[27]|c->r[27]; // 804E48D0
  W32(c->r[28]+0x00000004u,c->r[0]); // 804E48D4
L_804E48D8:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 804E48D8
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 804E48DC
  c->r[4]=R32(c->r[29]+0x00000010u); // 804E48E0
  c->r[0]=c->r[5]+0x00010000u; // 804E48E4
  c->r[29]=R32(c->r[29]+0x00000000u); // 804E48E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E48EC
  c->r[28]=c->r[4]+c->r[3]; // 804E48F0
  if (!crb(c,2)) { goto L_804E492C; } // 804E48F4
  c->r[3]=R8(c->r[30]+0x00000008u); // 804E48F8
  c->r[5]=c->r[30]|c->r[30]; // 804E48FC
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804E4900
  c->lr=0x804E4908u; f_80505D78(c); // 804E4904
  c->r[5]=c->r[3]|c->r[3]; // 804E4908
  c->r[3]=c->r[29]|c->r[29]; // 804E490C
  c->r[4]=c->r[28]|c->r[28]; // 804E4910
  c->r[6]=0u+0x00000000u; // 804E4914
  c->lr=0x804E491Cu; f_804FD364(c); // 804E4918
  c->r[0]=cntlz(c->r[3]); // 804E491C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 804E4920
  if (!crb(c,2)) { goto L_804E4948; } // 804E4924
  goto L_804E49B0; // 804E4928
L_804E492C:;
  c->r[3]=c->r[29]|c->r[29]; // 804E492C
  c->r[4]=c->r[28]|c->r[28]; // 804E4930
  c->r[6]=0u+0x00000000u; // 804E4934
  c->lr=0x804E493Cu; f_804FD304(c); // 804E4938
  c->r[0]=cntlz(c->r[3]); // 804E493C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 804E4940
  if (crb(c,2)) { goto L_804E49B0; } // 804E4944
L_804E4948:;
  c->r[4]=R8(c->r[30]+0x00000010u); // 804E4948
  cmpu(c,0,c->r[4],0x00000080u); // 804E494C
  if (!crb(c,0)) { goto L_804E4988; } // 804E4950
  c->r[0]=0u+0x43300000u; // 804E4954
  c->r[3]=R32(c->r[28]+0x00000000u); // 804E4958
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804E495C
  {uint32_t ea=c->r[2]+0x000018E8u; c->f[2]=RF64(ea);} // 804E4960
  cmps(c,0,(int32_t)c->r[3],0); // 804E4964
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E4968
  {uint32_t ea=c->r[2]+0x000018F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E496C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E4970
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E4974
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E4978
  if (crb(c,2)) { goto L_804E4988; } // 804E497C
  c->r[4]=0u+0x00000000u; // 804E4980
  c->lr=0x804E4988u; f_804EC0D0(c); // 804E4984
L_804E4988:;
  {uint32_t ea=c->r[2]+0x000018E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4988
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E498C
  fcmp(c,0,c->f[0],c->f[1]); // 804E4990
  if (crb(c,2)) { goto L_804E49A8; } // 804E4994
  c->r[3]=R32(c->r[28]+0x00000000u); // 804E4998
  cmps(c,0,(int32_t)c->r[3],0); // 804E499C
  if (crb(c,2)) { goto L_804E49A8; } // 804E49A0
  c->lr=0x804E49A8u; f_804EC174(c); // 804E49A4
L_804E49A8:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 804E49A8
  W8(c->r[28]+0x00000008u,c->r[31]); // 804E49AC
L_804E49B0:;
  c->r[11]=c->r[1]+0x00000030u; // 804E49B0
  c->lr=0x804E49B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E49B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E49B8
  c->lr=c->r[0]; // 804E49BC
  c->r[1]=c->r[1]+0x00000030u; // 804E49C0
  return; // 804E49C4
}

// fn_804E49C8
void f_804E49C8(Ctx* __restrict c) {
  trace_call(0x804E49C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E49C8
  c->r[0]=c->lr; // 804E49CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E49D0
  c->r[11]=c->r[1]+0x00000030u; // 804E49D4
  c->lr=0x804E49DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E49D8
  c->r[7]=R32(c->r[3]+0x00000014u); // 804E49DC
  c->r[29]=c->r[3]|c->r[3]; // 804E49E0
  c->r[30]=c->r[4]|c->r[4]; // 804E49E4
  c->r[31]=c->r[5]|c->r[5]; // 804E49E8
  c->r[8]=0u+0x00000080u; // 804E49EC
  c->r[27]=0u+0xFFFFFFFFu; // 804E49F0
  c->r[9]=0u+0x00000000u; // 804E49F4
  c->r[6]=0u+0x00000000u; // 804E49F8
  c->ctr=c->r[7]; // 804E49FC
  cmps(c,0,(int32_t)c->r[7],0); // 804E4A00
  if (!crb(c,1)) { goto L_804E4A60; } // 804E4A04
L_804E4A08:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 804E4A08
  c->r[5]=c->r[0]+c->r[6]; // 804E4A0C
  c->r[0]=R32(c->r[5]+0x00000004u); // 804E4A10
  cmpu(c,0,c->r[4],c->r[0]); // 804E4A14
  if (crb(c,2)) { goto L_804E4B78; } // 804E4A18
  c->r[5]=R32(c->r[5]+0x00000000u); // 804E4A1C
  cmps(c,0,(int32_t)c->r[5],0); // 804E4A20
  if (!crb(c,2)) { goto L_804E4A34; } // 804E4A24
  c->r[27]=c->r[9]|c->r[9]; // 804E4A28
  c->r[8]=0u+0xFFFFFFFFu; // 804E4A2C
  goto L_804E4A54; // 804E4A30
L_804E4A34:;
  if (crb(c,2)) { goto L_804E4A40; } // 804E4A34
  c->r[0]=R8(c->r[5]+0x00000094u); // 804E4A38
  goto L_804E4A44; // 804E4A3C
L_804E4A40:;
  c->r[0]=0u+0x00000000u; // 804E4A40
L_804E4A44:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804E4A44
  if (!crb(c,1)) { goto L_804E4A54; } // 804E4A48
  c->r[27]=c->r[9]|c->r[9]; // 804E4A4C
  c->r[8]=c->r[0]|c->r[0]; // 804E4A50
L_804E4A54:;
  c->r[6]=c->r[6]+0x0000000Cu; // 804E4A54
  c->r[9]=c->r[9]+0x00000001u; // 804E4A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E4A08; } // 804E4A5C
L_804E4A60:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 804E4A60
  if (!crb(c,2)) { goto L_804E4A94; } // 804E4A64
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 804E4A68
  c->r[3]=R32(c->r[3]+0x00000010u); // 804E4A6C
  c->r[28]=c->r[3]+c->r[0]; // 804E4A70
  c->r[3]=R32(c->r[3]+c->r[0]); // 804E4A74
  cmps(c,0,(int32_t)c->r[3],0); // 804E4A78
  if (crb(c,2)) { goto L_804E4A88; } // 804E4A7C
  c->r[4]=0u+0x00000000u; // 804E4A80
  c->lr=0x804E4A88u; f_804EAE90(c); // 804E4A84
L_804E4A88:;
  c->r[0]=0u+0x00000000u; // 804E4A88
  c->r[9]=c->r[27]|c->r[27]; // 804E4A8C
  W32(c->r[28]+0x00000004u,c->r[0]); // 804E4A90
L_804E4A94:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 804E4A94
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 804E4A98
  c->r[4]=R32(c->r[29]+0x00000010u); // 804E4A9C
  c->r[0]=c->r[5]+0x00010000u; // 804E4AA0
  c->r[29]=R32(c->r[29]+0x00000000u); // 804E4AA4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 804E4AA8
  c->r[28]=c->r[4]+c->r[3]; // 804E4AAC
  if (!crb(c,2)) { goto L_804E4AE8; } // 804E4AB0
  c->r[3]=R8(c->r[30]+0x00000008u); // 804E4AB4
  c->r[5]=c->r[30]|c->r[30]; // 804E4AB8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804E4ABC
  c->lr=0x804E4AC4u; f_80505D78(c); // 804E4AC0
  c->r[5]=c->r[3]|c->r[3]; // 804E4AC4
  c->r[3]=c->r[29]|c->r[29]; // 804E4AC8
  c->r[4]=c->r[28]|c->r[28]; // 804E4ACC
  c->r[6]=0u+0x00000000u; // 804E4AD0
  c->lr=0x804E4AD8u; f_804FD4B8(c); // 804E4AD4
  c->r[0]=cntlz(c->r[3]); // 804E4AD8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 804E4ADC
  if (!crb(c,2)) { goto L_804E4B04; } // 804E4AE0
  goto L_804E4B78; // 804E4AE4
L_804E4AE8:;
  c->r[3]=c->r[29]|c->r[29]; // 804E4AE8
  c->r[4]=c->r[28]|c->r[28]; // 804E4AEC
  c->r[6]=0u+0x00000000u; // 804E4AF0
  c->lr=0x804E4AF8u; f_804FD410(c); // 804E4AF4
  c->r[0]=cntlz(c->r[3]); // 804E4AF8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 804E4AFC
  if (crb(c,2)) { goto L_804E4B78; } // 804E4B00
L_804E4B04:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804E4B04
  c->r[4]=0u+0x00000000u; // 804E4B08
  c->lr=0x804E4B10u; f_804EB2DC(c); // 804E4B0C
  c->r[4]=R8(c->r[30]+0x00000010u); // 804E4B10
  cmpu(c,0,c->r[4],0x00000080u); // 804E4B14
  if (!crb(c,0)) { goto L_804E4B50; } // 804E4B18
  c->r[0]=0u+0x43300000u; // 804E4B1C
  c->r[3]=R32(c->r[28]+0x00000000u); // 804E4B20
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804E4B24
  {uint32_t ea=c->r[2]+0x000018E8u; c->f[2]=RF64(ea);} // 804E4B28
  cmps(c,0,(int32_t)c->r[3],0); // 804E4B2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E4B30
  {uint32_t ea=c->r[2]+0x000018F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4B34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E4B38
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E4B3C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804E4B40
  if (crb(c,2)) { goto L_804E4B50; } // 804E4B44
  c->r[4]=0u+0x00000000u; // 804E4B48
  c->lr=0x804E4B50u; f_804EC0D0(c); // 804E4B4C
L_804E4B50:;
  {uint32_t ea=c->r[2]+0x000018E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4B50
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E4B54
  fcmp(c,0,c->f[0],c->f[1]); // 804E4B58
  if (crb(c,2)) { goto L_804E4B70; } // 804E4B5C
  c->r[3]=R32(c->r[28]+0x00000000u); // 804E4B60
  cmps(c,0,(int32_t)c->r[3],0); // 804E4B64
  if (crb(c,2)) { goto L_804E4B70; } // 804E4B68
  c->lr=0x804E4B70u; f_804EC174(c); // 804E4B6C
L_804E4B70:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 804E4B70
  W8(c->r[28]+0x00000008u,c->r[31]); // 804E4B74
L_804E4B78:;
  c->r[11]=c->r[1]+0x00000030u; // 804E4B78
  c->lr=0x804E4B80u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E4B7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E4B80
  c->lr=c->r[0]; // 804E4B84
  c->r[1]=c->r[1]+0x00000030u; // 804E4B88
  return; // 804E4B8C
}

// fn_804E4B90
void f_804E4B90(Ctx* __restrict c) {
  trace_call(0x804E4B90u);
  c->r[0]=0u+0x00000000u; // 804E4B90
  W32(c->r[3]+0x00000000u,c->r[0]); // 804E4B94
  W32(c->r[3]+0x00000004u,c->r[0]); // 804E4B98
  W8(c->r[3]+0x00000008u,c->r[0]); // 804E4B9C
  return; // 804E4BA0
}

// fn_804E4BA4
void f_804E4BA4(Ctx* __restrict c) {
  trace_call(0x804E4BA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4BA4
  c->r[0]=c->lr; // 804E4BA8
  cmps(c,0,(int32_t)c->r[3],0); // 804E4BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E4BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E4BB4
  c->r[31]=c->r[4]|c->r[4]; // 804E4BB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E4BBC
  c->r[30]=c->r[3]|c->r[3]; // 804E4BC0
  if (crb(c,2)) { goto L_804E4C10; } // 804E4BC4
  c->r[4]=R32(c->r[3]+0x00000000u); // 804E4BC8
  cmps(c,1,(int32_t)c->r[4],0); // 804E4BCC
  if (crb(c,6)) { goto L_804E4BF0; } // 804E4BD0
  c->r[0]=R8(c->r[3]+0x00000008u); // 804E4BD4
  cmps(c,0,(int32_t)c->r[0],0); // 804E4BD8
  if (crb(c,2)) { goto L_804E4BF0; } // 804E4BDC
  if (crb(c,6)) { goto L_804E4BF0; } // 804E4BE0
  c->r[3]=c->r[4]|c->r[4]; // 804E4BE4
  c->r[4]=0u+0x00000000u; // 804E4BE8
  c->lr=0x804E4BF0u; f_804EAE90(c); // 804E4BEC
L_804E4BF0:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E4BF0
  if (crb(c,2)) { goto L_804E4C00; } // 804E4BF4
  c->r[3]=c->r[30]|c->r[30]; // 804E4BF8
  c->lr=0x804E4C00u; f_804FC5FC(c); // 804E4BFC
L_804E4C00:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E4C00
  if (!crb(c,1)) { goto L_804E4C10; } // 804E4C04
  c->r[3]=c->r[30]|c->r[30]; // 804E4C08
  c->lr=0x804E4C10u; f_803A9400(c); // 804E4C0C
L_804E4C10:;
  c->r[3]=c->r[30]|c->r[30]; // 804E4C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E4C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E4C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E4C1C
  c->lr=c->r[0]; // 804E4C20
  c->r[1]=c->r[1]+0x00000010u; // 804E4C24
  return; // 804E4C28
}

// fn_804E4C2C
void f_804E4C2C(Ctx* __restrict c) {
  trace_call(0x804E4C2Cu);
  c->r[0]=0u+0x00000000u; // 804E4C2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804E4C30
  return; // 804E4C34
}

// fn_804E4C38
void f_804E4C38(Ctx* __restrict c) {
  trace_call(0x804E4C38u);
  c->r[0]=0u+0x00000000u; // 804E4C38
  W32(c->r[3]+0x00000000u,c->r[0]); // 804E4C3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804E4C40
  return; // 804E4C44
}

// fn_804E4C48
void f_804E4C48(Ctx* __restrict c) {
  trace_call(0x804E4C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4C48
  c->r[0]=c->lr; // 804E4C4C
  c->r[4]=R32(c->r[3]+0x00000004u); // 804E4C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E4C54
  cmps(c,0,(int32_t)c->r[4],0); // 804E4C58
  if (!crb(c,2)) { goto L_804E4C68; } // 804E4C5C
  c->r[3]=0u+0x00000000u; // 804E4C60
  goto L_804E4C78; // 804E4C64
L_804E4C68:;
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 804E4C68
  c->r[5]=c->r[4]+0x00000008u; // 804E4C6C
  c->r[4]=R32(c->r[4]+0x00000010u); // 804E4C70
  c->lr=0x804E4C78u; f_80505D78(c); // 804E4C74
L_804E4C78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E4C78
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E4C7C
  c->lr=c->r[0]; // 804E4C80
  c->r[1]=c->r[1]+0x00000010u; // 804E4C84
  return; // 804E4C88
}

// fn_804E4C8C
void f_804E4C8C(Ctx* __restrict c) {
  trace_call(0x804E4C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4C8C
  c->r[0]=c->lr; // 804E4C90
  c->r[6]=R32(c->r[3]+0x00000004u); // 804E4C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E4C98
  cmps(c,0,(int32_t)c->r[6],0); // 804E4C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E4CA0
  c->r[31]=c->r[4]|c->r[4]; // 804E4CA4
  if (!crb(c,2)) { goto L_804E4CB4; } // 804E4CA8
  c->r[3]=0u+0x00000000u; // 804E4CAC
  goto L_804E4CC4; // 804E4CB0
L_804E4CB4:;
  c->r[3]=R8(c->r[6]+0x0000000Cu); // 804E4CB4
  c->r[5]=c->r[6]+0x00000008u; // 804E4CB8
  c->r[4]=R32(c->r[6]+0x00000010u); // 804E4CBC
  c->lr=0x804E4CC4u; f_80505D78(c); // 804E4CC0
L_804E4CC4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 804E4CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E4CC8
  c->r[3]=c->r[3]+c->r[0]; // 804E4CCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E4CD0
  c->r[3]=c->r[3]+0x00000004u; // 804E4CD4
  c->lr=c->r[0]; // 804E4CD8
  c->r[1]=c->r[1]+0x00000010u; // 804E4CDC
  return; // 804E4CE0
}

// fn_804E4CE4
void f_804E4CE4(Ctx* __restrict c) {
  trace_call(0x804E4CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4CE4
  c->r[0]=c->lr; // 804E4CE8
  cmps(c,0,(int32_t)c->r[4],0); // 804E4CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E4CF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E4CF4
  c->r[31]=c->r[4]|c->r[4]; // 804E4CF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E4CFC
  c->r[30]=c->r[3]|c->r[3]; // 804E4D00
  if (!crb(c,2)) { goto L_804E4D10; } // 804E4D04
  c->r[3]=0u+0x00000000u; // 804E4D08
  goto L_804E4D40; // 804E4D0C
L_804E4D10:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 804E4D10
  cmps(c,0,(int32_t)c->r[4],0); // 804E4D14
  if (crb(c,2)) { goto L_804E4D2C; } // 804E4D18
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 804E4D1C
  c->r[5]=c->r[4]+0x00000008u; // 804E4D20
  c->r[4]=R32(c->r[4]+0x00000010u); // 804E4D24
  c->lr=0x804E4D2Cu; f_80505D78(c); // 804E4D28
L_804E4D2C:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 804E4D2C
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 804E4D30
  c->r[4]=R32(c->r[31]+0x00000010u); // 804E4D34
  c->r[5]=c->r[5]+0x00000008u; // 804E4D38
  c->lr=0x804E4D40u; f_80505D78(c); // 804E4D3C
L_804E4D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E4D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E4D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E4D48
  c->lr=c->r[0]; // 804E4D4C
  c->r[1]=c->r[1]+0x00000010u; // 804E4D50
  return; // 804E4D54
}

// fn_804E4D58
void f_804E4D58(Ctx* __restrict c) {
  trace_call(0x804E4D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E4D58
  c->r[0]=c->lr; // 804E4D5C
  c->r[6]=0u+0x00000000u; // 804E4D60
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E4D68
  c->r[7]=c->r[3]+0x00000064u; // 804E4D6C
  c->r[4]=c->r[3]+0x00000084u; // 804E4D70
  c->r[8]=c->r[3]+0x0000000Cu; // 804E4D74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E4D78
  c->r[5]=0u+0x00000001u; // 804E4D7C
  c->r[0]=0u+0xFFFFFFFFu; // 804E4D80
  cmpu(c,0,c->r[7],c->r[4]); // 804E4D84
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 804E4D88
  c->r[31]=c->r[3]|c->r[3]; // 804E4D8C
  W32(c->r[3]+0x00000010u,c->r[6]); // 804E4D90
  W32(c->r[3]+0x00000000u,c->r[6]); // 804E4D94
  W32(c->r[3]+0x00000004u,c->r[6]); // 804E4D98
  W32(c->r[3]+0x00000008u,c->r[6]); // 804E4D9C
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 804E4DA0
  W32(c->r[3]+0x00000010u,c->r[8]); // 804E4DA4
  W8(c->r[3]+0x00000018u,c->r[6]); // 804E4DA8
  W8(c->r[3]+0x00000019u,c->r[5]); // 804E4DAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804E4DB0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 804E4DB4
  W32(c->r[3]+0x00000024u,c->r[6]); // 804E4DB8
  W32(c->r[3]+0x00000028u,c->r[6]); // 804E4DBC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 804E4DC0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 804E4DC4
  W32(c->r[3]+0x00000034u,c->r[6]); // 804E4DC8
  W32(c->r[3]+0x00000038u,c->r[6]); // 804E4DCC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 804E4DD0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804E4DD4
  W32(c->r[3]+0x00000044u,c->r[6]); // 804E4DD8
  W32(c->r[3]+0x00000048u,c->r[6]); // 804E4DDC
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 804E4DE0
  W32(c->r[3]+0x00000050u,c->r[0]); // 804E4DE4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 804E4DE8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 804E4DEC
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 804E4DF0
  W32(c->r[3]+0x00000060u,c->r[6]); // 804E4DF4
  if (!crb(c,0)) { goto L_804E4F70; } // 804E4DF8
  c->r[6]=c->r[3]+0x00000064u; // 804E4DFC
  c->r[5]=c->r[3]+0x00000004u; // 804E4E00
  c->r[8]=c->r[4]-c->r[6]; // 804E4E04
  c->r[9]=c->r[8]+0x0000000Fu; // 804E4E08
  c->r[0]=sraw(c,c->r[9],4); // 804E4E0C
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 804E4E10
  c->r[11]=c->r[10]+0x00000001u; // 804E4E14
  cmps(c,0,(int32_t)c->r[11],8); // 804E4E18
  if (!crb(c,1)) { goto L_804E4F34; } // 804E4E1C
  cmpu(c,0,c->r[6],c->r[4]); // 804E4E20
  c->r[4]=0u+0x00000000u; // 804E4E24
  c->r[6]=0u+0x00000000u; // 804E4E28
  if (crb(c,1)) { goto L_804E4E54; } // 804E4E2C
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 804E4E30
  c->r[8]=0u+0x00000001u; // 804E4E34
  if (!crb(c,2)) { goto L_804E4E48; } // 804E4E38
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 804E4E3C
  if (crb(c,2)) { goto L_804E4E48; } // 804E4E40
  c->r[8]=0u+0x00000000u; // 804E4E44
L_804E4E48:;
  cmps(c,0,(int32_t)c->r[8],0); // 804E4E48
  if (crb(c,2)) { goto L_804E4E54; } // 804E4E4C
  c->r[6]=0u+0x00000001u; // 804E4E50
L_804E4E54:;
  cmps(c,0,(int32_t)c->r[6],0); // 804E4E54
  if (crb(c,2)) { goto L_804E4E84; } // 804E4E58
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 804E4E5C
  c->r[6]=0u+0x00000001u; // 804E4E60
  if (!crb(c,2)) { goto L_804E4E78; } // 804E4E64
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 804E4E68
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804E4E6C
  if (crb(c,2)) { goto L_804E4E78; } // 804E4E70
  c->r[6]=0u+0x00000000u; // 804E4E74
L_804E4E78:;
  cmps(c,0,(int32_t)c->r[6],0); // 804E4E78
  if (crb(c,2)) { goto L_804E4E84; } // 804E4E7C
  c->r[4]=0u+0x00000001u; // 804E4E80
L_804E4E84:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E4E84
  if (crb(c,2)) { goto L_804E4F34; } // 804E4E88
  c->r[0]=c->r[5]+0x0000007Fu; // 804E4E8C
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4E90
  c->r[0]=c->r[0]-c->r[7]; // 804E4E94
  c->r[4]=0u+0x00000000u; // 804E4E98
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 804E4E9C
  c->ctr=c->r[0]; // 804E4EA0
  cmpu(c,0,c->r[7],c->r[5]); // 804E4EA4
  if (!crb(c,0)) { goto L_804E4F34; } // 804E4EA8
L_804E4EAC:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 804E4EAC
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 804E4EB0
  W32(c->r[7]+0x00000008u,c->r[4]); // 804E4EB4
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 804E4EB8
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 804E4EBC
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 804E4EC0
  W32(c->r[7]+0x00000018u,c->r[4]); // 804E4EC4
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 804E4EC8
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 804E4ECC
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 804E4ED0
  W32(c->r[7]+0x00000028u,c->r[4]); // 804E4ED4
  W32(c->r[7]+0x0000002Cu,c->r[4]); // 804E4ED8
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[0]);} // 804E4EDC
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 804E4EE0
  W32(c->r[7]+0x00000038u,c->r[4]); // 804E4EE4
  W32(c->r[7]+0x0000003Cu,c->r[4]); // 804E4EE8
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[0]);} // 804E4EEC
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[0]);} // 804E4EF0
  W32(c->r[7]+0x00000048u,c->r[4]); // 804E4EF4
  W32(c->r[7]+0x0000004Cu,c->r[4]); // 804E4EF8
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[0]);} // 804E4EFC
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[0]);} // 804E4F00
  W32(c->r[7]+0x00000058u,c->r[4]); // 804E4F04
  W32(c->r[7]+0x0000005Cu,c->r[4]); // 804E4F08
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 804E4F0C
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[0]);} // 804E4F10
  W32(c->r[7]+0x00000068u,c->r[4]); // 804E4F14
  W32(c->r[7]+0x0000006Cu,c->r[4]); // 804E4F18
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 804E4F1C
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 804E4F20
  W32(c->r[7]+0x00000078u,c->r[4]); // 804E4F24
  W32(c->r[7]+0x0000007Cu,c->r[4]); // 804E4F28
  c->r[7]=c->r[7]+0x00000080u; // 804E4F2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E4EAC; } // 804E4F30
L_804E4F34:;
  c->r[4]=c->r[3]+0x00000084u; // 804E4F34
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4F38
  c->r[0]=c->r[4]+0x0000000Fu; // 804E4F3C
  c->r[5]=0u+0x00000000u; // 804E4F40
  c->r[0]=c->r[0]-c->r[7]; // 804E4F44
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804E4F48
  c->ctr=c->r[0]; // 804E4F4C
  cmpu(c,0,c->r[7],c->r[4]); // 804E4F50
  if (!crb(c,0)) { goto L_804E4F70; } // 804E4F54
L_804E4F58:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 804E4F58
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 804E4F5C
  W32(c->r[7]+0x00000008u,c->r[5]); // 804E4F60
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 804E4F64
  c->r[7]=c->r[7]+0x00000010u; // 804E4F68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E4F58; } // 804E4F6C
L_804E4F70:;
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E4F70
  c->r[6]=c->r[3]+0x00000094u; // 804E4F74
  c->r[0]=0u+0x00000000u; // 804E4F78
  c->r[4]=c->r[3]+0x000000B4u; // 804E4F7C
  cmpu(c,0,c->r[6],c->r[4]); // 804E4F80
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 804E4F84
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 804E4F88
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 804E4F8C
  W32(c->r[3]+0x00000090u,c->r[0]); // 804E4F90
  if (!crb(c,0)) { goto L_804E510C; } // 804E4F94
  c->r[7]=c->r[3]+0x00000094u; // 804E4F98
  c->r[5]=c->r[3]+0x00000034u; // 804E4F9C
  c->r[8]=c->r[4]-c->r[7]; // 804E4FA0
  c->r[9]=c->r[8]+0x0000000Fu; // 804E4FA4
  c->r[0]=sraw(c,c->r[9],4); // 804E4FA8
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 804E4FAC
  c->r[11]=c->r[10]+0x00000001u; // 804E4FB0
  cmps(c,0,(int32_t)c->r[11],8); // 804E4FB4
  if (!crb(c,1)) { goto L_804E50D0; } // 804E4FB8
  cmpu(c,0,c->r[7],c->r[4]); // 804E4FBC
  c->r[4]=0u+0x00000000u; // 804E4FC0
  c->r[7]=0u+0x00000000u; // 804E4FC4
  if (crb(c,1)) { goto L_804E4FF0; } // 804E4FC8
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 804E4FCC
  c->r[8]=0u+0x00000001u; // 804E4FD0
  if (!crb(c,2)) { goto L_804E4FE4; } // 804E4FD4
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 804E4FD8
  if (crb(c,2)) { goto L_804E4FE4; } // 804E4FDC
  c->r[8]=0u+0x00000000u; // 804E4FE0
L_804E4FE4:;
  cmps(c,0,(int32_t)c->r[8],0); // 804E4FE4
  if (crb(c,2)) { goto L_804E4FF0; } // 804E4FE8
  c->r[7]=0u+0x00000001u; // 804E4FEC
L_804E4FF0:;
  cmps(c,0,(int32_t)c->r[7],0); // 804E4FF0
  if (crb(c,2)) { goto L_804E5020; } // 804E4FF4
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 804E4FF8
  c->r[7]=0u+0x00000001u; // 804E4FFC
  if (!crb(c,2)) { goto L_804E5014; } // 804E5000
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 804E5004
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804E5008
  if (crb(c,2)) { goto L_804E5014; } // 804E500C
  c->r[7]=0u+0x00000000u; // 804E5010
L_804E5014:;
  cmps(c,0,(int32_t)c->r[7],0); // 804E5014
  if (crb(c,2)) { goto L_804E5020; } // 804E5018
  c->r[4]=0u+0x00000001u; // 804E501C
L_804E5020:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E5020
  if (crb(c,2)) { goto L_804E50D0; } // 804E5024
  c->r[0]=c->r[5]+0x0000007Fu; // 804E5028
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E502C
  c->r[0]=c->r[0]-c->r[6]; // 804E5030
  c->r[4]=0u+0x00000000u; // 804E5034
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 804E5038
  c->ctr=c->r[0]; // 804E503C
  cmpu(c,0,c->r[6],c->r[5]); // 804E5040
  if (!crb(c,0)) { goto L_804E50D0; } // 804E5044
L_804E5048:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 804E5048
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 804E504C
  W32(c->r[6]+0x00000008u,c->r[4]); // 804E5050
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 804E5054
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 804E5058
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 804E505C
  W32(c->r[6]+0x00000018u,c->r[4]); // 804E5060
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 804E5064
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 804E5068
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 804E506C
  W32(c->r[6]+0x00000028u,c->r[4]); // 804E5070
  W32(c->r[6]+0x0000002Cu,c->r[4]); // 804E5074
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[0]);} // 804E5078
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[0]);} // 804E507C
  W32(c->r[6]+0x00000038u,c->r[4]); // 804E5080
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 804E5084
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 804E5088
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 804E508C
  W32(c->r[6]+0x00000048u,c->r[4]); // 804E5090
  W32(c->r[6]+0x0000004Cu,c->r[4]); // 804E5094
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 804E5098
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 804E509C
  W32(c->r[6]+0x00000058u,c->r[4]); // 804E50A0
  W32(c->r[6]+0x0000005Cu,c->r[4]); // 804E50A4
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[0]);} // 804E50A8
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[0]);} // 804E50AC
  W32(c->r[6]+0x00000068u,c->r[4]); // 804E50B0
  W32(c->r[6]+0x0000006Cu,c->r[4]); // 804E50B4
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 804E50B8
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 804E50BC
  W32(c->r[6]+0x00000078u,c->r[4]); // 804E50C0
  W32(c->r[6]+0x0000007Cu,c->r[4]); // 804E50C4
  c->r[6]=c->r[6]+0x00000080u; // 804E50C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E5048; } // 804E50CC
L_804E50D0:;
  c->r[4]=c->r[3]+0x000000B4u; // 804E50D0
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E50D4
  c->r[0]=c->r[4]+0x0000000Fu; // 804E50D8
  c->r[5]=0u+0x00000000u; // 804E50DC
  c->r[0]=c->r[0]-c->r[6]; // 804E50E0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 804E50E4
  c->ctr=c->r[0]; // 804E50E8
  cmpu(c,0,c->r[6],c->r[4]); // 804E50EC
  if (!crb(c,0)) { goto L_804E510C; } // 804E50F0
L_804E50F4:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 804E50F4
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 804E50F8
  W32(c->r[6]+0x00000008u,c->r[5]); // 804E50FC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 804E5100
  c->r[6]=c->r[6]+0x00000010u; // 804E5104
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804E50F4; } // 804E5108
L_804E510C:;
  c->r[4]=0u+0x804E0000u; // 804E510C
  c->r[5]=0u+0x804E0000u; // 804E5110
  c->r[4]=c->r[4]+0x00005200u; // 804E5114
  c->r[6]=0u+0x0000000Cu; // 804E5118
  c->r[5]=c->r[5]+0x00005220u; // 804E511C
  c->r[7]=0u+0x00000003u; // 804E5120
  c->r[3]=c->r[3]+0x000000B4u; // 804E5124
  c->lr=0x804E512Cu; f_803A9830(c); // 804E5128
  {uint32_t ea=c->r[2]+0x00001904u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E512C
  c->r[0]=0u+0x00000000u; // 804E5130
  W32(c->r[31]+0x00000034u,c->r[0]); // 804E5134
  c->r[3]=c->r[31]|c->r[31]; // 804E5138
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 804E513C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 804E5140
  W32(c->r[31]+0x00000038u,c->r[0]); // 804E5144
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 804E5148
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 804E514C
  W32(c->r[31]+0x00000024u,c->r[0]); // 804E5150
  W32(c->r[31]+0x00000028u,c->r[0]); // 804E5154
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 804E5158
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 804E515C
  W32(c->r[31]+0x00000044u,c->r[0]); // 804E5160
  W32(c->r[31]+0x00000048u,c->r[0]); // 804E5164
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 804E5168
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 804E516C
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 804E5170
  W32(c->r[31]+0x00000060u,c->r[0]); // 804E5174
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 804E5178
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 804E517C
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 804E5180
  W32(c->r[31]+0x00000090u,c->r[0]); // 804E5184
  W32(c->r[31]+0x000000D8u,c->r[0]); // 804E5188
  W32(c->r[31]+0x000000E4u,c->r[0]); // 804E518C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 804E5190
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 804E5194
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 804E5198
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 804E519C
  W32(c->r[31]+0x00000070u,c->r[0]); // 804E51A0
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 804E51A4
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 804E51A8
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 804E51AC
  W32(c->r[31]+0x000000A0u,c->r[0]); // 804E51B0
  W32(c->r[31]+0x000000DCu,c->r[0]); // 804E51B4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 804E51B8
  W32(c->r[31]+0x000000F8u,c->r[0]); // 804E51BC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 804E51C0
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 804E51C4
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 804E51C8
  W32(c->r[31]+0x00000080u,c->r[0]); // 804E51CC
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 804E51D0
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 804E51D4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 804E51D8
  W32(c->r[31]+0x000000B0u,c->r[0]); // 804E51DC
  W32(c->r[31]+0x000000E0u,c->r[0]); // 804E51E0
  W32(c->r[31]+0x000000ECu,c->r[0]); // 804E51E4
  W32(c->r[31]+0x000000FCu,c->r[0]); // 804E51E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E51EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E51F0
  c->lr=c->r[0]; // 804E51F4
  c->r[1]=c->r[1]+0x00000010u; // 804E51F8
  return; // 804E51FC
}

// fn_804E5200
void f_804E5200(Ctx* __restrict c) {
  trace_call(0x804E5200u);
  c->r[0]=0u+0x00000000u; // 804E5200
  c->r[4]=c->r[3]+0x00000004u; // 804E5204
  W32(c->r[3]+0x00000004u,c->r[0]); // 804E5208
  W32(c->r[3]+0x00000008u,c->r[0]); // 804E520C
  W32(c->r[3]+0x00000000u,c->r[0]); // 804E5210
  W32(c->r[3]+0x00000004u,c->r[4]); // 804E5214
  W32(c->r[3]+0x00000008u,c->r[4]); // 804E5218
  return; // 804E521C
}

// fn_804E5220
void f_804E5220(Ctx* __restrict c) {
  trace_call(0x804E5220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5220
  c->r[0]=c->lr; // 804E5224
  cmps(c,0,(int32_t)c->r[3],0); // 804E5228
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E522C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E5230
  c->r[31]=c->r[4]|c->r[4]; // 804E5234
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E5238
  c->r[30]=c->r[3]|c->r[3]; // 804E523C
  if (crb(c,2)) { goto L_804E525C; } // 804E5240
  c->r[4]=0u+0x00000000u; // 804E5244
  c->lr=0x804E524Cu; f_80507DCC(c); // 804E5248
  cmps(c,0,(int32_t)c->r[31],0); // 804E524C
  if (!crb(c,1)) { goto L_804E525C; } // 804E5250
  c->r[3]=c->r[30]|c->r[30]; // 804E5254
  c->lr=0x804E525Cu; f_803A9400(c); // 804E5258
L_804E525C:;
  c->r[3]=c->r[30]|c->r[30]; // 804E525C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E5260
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E5264
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E5268
  c->lr=c->r[0]; // 804E526C
  c->r[1]=c->r[1]+0x00000010u; // 804E5270
  return; // 804E5274
}

// GetInstance__Q44nw4r3snd6detail9AxManagerFv
void f_804E5278(Ctx* __restrict c) {
  trace_call(0x804E5278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5278
  c->r[0]=c->lr; // 804E527C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E5284
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E5288
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E528C
  if (!crb(c,2)) { goto L_804E52C0; } // 804E5290
  c->r[31]=0u+0x80830000u; // 804E5294
  c->r[3]=c->r[31]+0xFFFF8568u; // 804E5298
  c->lr=0x804E52A0u; f_804E4D58(c); // 804E529C
  c->r[4]=0u+0x804E0000u; // 804E52A0
  c->r[5]=0u+0x80830000u; // 804E52A4
  c->r[3]=c->r[31]+0xFFFF8568u; // 804E52A8
  c->r[4]=c->r[4]+0x000052DCu; // 804E52AC
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E52B0
  c->lr=0x804E52B8u; f_803A92B8(c); // 804E52B4
  c->r[0]=0u+0x00000001u; // 804E52B8
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E52BC
L_804E52C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E52C0
  c->r[3]=0u+0x80830000u; // 804E52C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E52C8
  c->r[3]=c->r[3]+0xFFFF8568u; // 804E52CC
  c->lr=c->r[0]; // 804E52D0
  c->r[1]=c->r[1]+0x00000010u; // 804E52D4
  return; // 804E52D8
}

// __dt__Q44nw4r3snd6detail9AxManagerFv
void f_804E52DC(Ctx* __restrict c) {
  trace_call(0x804E52DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E52DC
  c->r[0]=c->lr; // 804E52E0
  cmps(c,0,(int32_t)c->r[3],0); // 804E52E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E52E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E52EC
  c->r[31]=c->r[4]|c->r[4]; // 804E52F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E52F4
  c->r[30]=c->r[3]|c->r[3]; // 804E52F8
  if (crb(c,2)) { goto L_804E5338; } // 804E52FC
  c->r[4]=0u+0x804E0000u; // 804E5300
  c->r[5]=0u+0x0000000Cu; // 804E5304
  c->r[4]=c->r[4]+0x00005220u; // 804E5308
  c->r[6]=0u+0x00000003u; // 804E530C
  c->r[3]=c->r[3]+0x000000B4u; // 804E5310
  c->lr=0x804E5318u; f_803A9928(c); // 804E5314
  c->r[3]=addc(c,c->r[30],0x00000008u,0); cr0(c,c->r[3]); // 804E5318
  if (crb(c,2)) { goto L_804E5328; } // 804E531C
  c->r[4]=0u+0x00000000u; // 804E5320
  c->lr=0x804E5328u; f_80507DCC(c); // 804E5324
L_804E5328:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E5328
  if (!crb(c,1)) { goto L_804E5338; } // 804E532C
  c->r[3]=c->r[30]|c->r[30]; // 804E5330
  c->lr=0x804E5338u; f_803A9400(c); // 804E5334
L_804E5338:;
  c->r[3]=c->r[30]|c->r[30]; // 804E5338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E533C
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E5340
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E5344
  c->lr=c->r[0]; // 804E5348
  c->r[1]=c->r[1]+0x00000010u; // 804E534C
  return; // 804E5350
}

// fn_804E5354
void f_804E5354(Ctx* __restrict c) {
  trace_call(0x804E5354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5354
  c->r[0]=c->lr; // 804E5358
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E535C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E5360
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E5364
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E5368
  c->r[29]=c->r[3]|c->r[3]; // 804E536C
  c->r[0]=R8(c->r[3]+0x00000018u); // 804E5370
  cmps(c,0,(int32_t)c->r[0],0); // 804E5374
  if (!crb(c,2)) { goto L_804E5454; } // 804E5378
  c->r[30]=0u+0x80830000u; // 804E537C
  c->r[4]=0u+0x00000000u; // 804E5380
  c->r[3]=c->r[30]+0xFFFF8220u; // 804E5384
  c->r[5]=0u+0x00000100u; // 804E5388
  c->lr=0x804E5390u; f_800043EC(c); // 804E538C
  c->r[3]=c->r[30]+0xFFFF8220u; // 804E5390
  c->r[4]=0u+0x00000100u; // 804E5394
  c->lr=0x804E539Cu; f_8037720C(c); // 804E5398
  c->r[0]=c->r[30]+0xFFFF8220u; // 804E539C
  W32(c->r[29]+0x00000004u,c->r[0]); // 804E53A0
  c->lr=0x804E53A8u; f_8037BBA4(c); // 804E53A4
  c->r[31]=c->r[3]|c->r[3]; // 804E53A8
  c->r[3]=c->r[29]+0x000000D8u; // 804E53AC
  c->r[4]=c->r[29]+0x000000E4u; // 804E53B0
  c->lr=0x804E53B8u; f_80394764(c); // 804E53B4
  c->r[3]=c->r[29]+0x000000DCu; // 804E53B8
  c->r[4]=c->r[29]+0x000000E8u; // 804E53BC
  c->lr=0x804E53C4u; f_80394778(c); // 804E53C0
  c->r[3]=c->r[29]+0x000000E0u; // 804E53C4
  c->r[4]=c->r[29]+0x000000ECu; // 804E53C8
  c->lr=0x804E53D0u; f_8039478C(c); // 804E53CC
  c->r[3]=0u+0x00000000u; // 804E53D0
  c->r[4]=0u+0x00000000u; // 804E53D4
  c->lr=0x804E53DCu; f_80394638(c); // 804E53D8
  c->r[3]=0u+0x00000000u; // 804E53DC
  c->r[4]=0u+0x00000000u; // 804E53E0
  c->lr=0x804E53E8u; f_8039469C(c); // 804E53E4
  c->r[3]=0u+0x00000000u; // 804E53E8
  c->r[4]=0u+0x00000000u; // 804E53EC
  c->lr=0x804E53F4u; f_80394700(c); // 804E53F0
  c->r[3]=0u+0x804E0000u; // 804E53F4
  c->r[3]=c->r[3]+0x00005B6Cu; // 804E53F8
  c->lr=0x804E5400u; f_803958B8(c); // 804E53FC
  W32(c->r[29]+0x00000014u,c->r[3]); // 804E5400
  c->r[30]=0u+0x80830000u; // 804E5404
  c->r[3]=c->r[30]+0xFFFF8320u; // 804E5408
  c->r[4]=0u+0x00000000u; // 804E540C
  c->r[5]=0u+0x00000200u; // 804E5410
  c->lr=0x804E5418u; f_800043EC(c); // 804E5414
  c->r[8]=c->r[30]+0xFFFF8320u; // 804E5418
  c->r[0]=c->r[13]+0xFFFFE4D0u; // 804E541C
  c->r[7]=c->r[13]+0xFFFFE4D4u; // 804E5420
  c->r[6]=c->r[13]+0xFFFFE4D8u; // 804E5424
  c->r[5]=c->r[13]+0xFFFFE4DCu; // 804E5428
  c->r[4]=c->r[13]+0xFFFFE4E0u; // 804E542C
  W32(c->r[8]+0x00000004u,c->r[0]); // 804E5430
  c->r[0]=0u+0x00000001u; // 804E5434
  c->r[3]=c->r[31]|c->r[31]; // 804E5438
  W32(c->r[8]+0x00000008u,c->r[7]); // 804E543C
  W32(c->r[8]+0x0000000Cu,c->r[6]); // 804E5440
  W32(c->r[8]+0x00000010u,c->r[5]); // 804E5444
  W32(c->r[8]+0x00000014u,c->r[4]); // 804E5448
  W8(c->r[29]+0x00000018u,c->r[0]); // 804E544C
  c->lr=0x804E5454u; f_8037BBCC(c); // 804E5450
L_804E5454:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E5454
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E5458
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E545C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E5460
  c->lr=c->r[0]; // 804E5464
  c->r[1]=c->r[1]+0x00000020u; // 804E5468
  return; // 804E546C
}

// GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv
void f_804E5470(Ctx* __restrict c) {
  trace_call(0x804E5470u);
  c->r[5]=R32(c->r[3]+0x00000024u); // 804E5470
  c->r[0]=R32(c->r[3]+0x00000028u); // 804E5474
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5478
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804E547C
  if (crb(c,0)) { goto L_804E548C; } // 804E5480
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5484
  goto L_804E54D4; // 804E5488
L_804E548C:;
  c->r[4]=0u+0x43300000u; // 804E548C
  c->r[0]=c->r[0]^0x80000000u; // 804E5490
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E5494
  c->r[0]=c->r[5]^0x80000000u; // 804E5498
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E549C
  W32(c->r[1]+0x00000008u,c->r[4]); // 804E54A0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E54A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E54A8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E54AC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804E54B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E54B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E54B8
  W32(c->r[1]+0x00000010u,c->r[4]); // 804E54BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E54C0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E54C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E54C8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E54CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E54D0
L_804E54D4:;
  c->r[1]=c->r[1]+0x00000020u; // 804E54D4
  return; // 804E54D8
}

// Update__Q44nw4r3snd6detail9AxManagerFv
void f_804E54DC(Ctx* __restrict c) {
  trace_call(0x804E54DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E54DC
  c->r[0]=c->lr; // 804E54E0
  W32(c->r[1]+0x00000074u,c->r[0]); // 804E54E4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 804E54E8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 804E54EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 804E54F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 804E54F4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 804E54F8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 804E54FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 804E5500
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 804E5504
  c->r[0]=0u+0x43300000u; // 804E5508
  {uint32_t ea=c->r[2]+0x00001904u; c->f[28]=c->ps1[28]=RF32(ea);} // 804E550C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E5510
  {uint32_t ea=c->r[2]+0x00001900u; c->f[29]=c->ps1[29]=RF32(ea);} // 804E5514
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E5518
  c->r[30]=0u+0x00000000u; // 804E551C
  {uint32_t ea=c->r[2]+0x00001908u; c->f[31]=RF64(ea);} // 804E5520
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E5524
  c->r[29]=c->r[3]|c->r[3]; // 804E5528
  {uint32_t ea=c->r[2]+0x00001910u; c->f[30]=c->ps1[30]=RF32(ea);} // 804E552C
  c->r[31]=c->r[29]|c->r[29]; // 804E5530
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E5534
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E5538
L_804E553C:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 804E553C
  c->r[4]=0u+0x00000000u; // 804E5540
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 804E5544
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5548
  if (!crb(c,0)) { goto L_804E556C; } // 804E554C
  c->r[3]=R32(c->r[31]+0x00000090u); // 804E5550
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 804E5554
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5558
  if (!crb(c,0)) { goto L_804E5568; } // 804E555C
  c->r[0]=c->r[3]+0x00000001u; // 804E5560
  W32(c->r[31]+0x00000090u,c->r[0]); // 804E5564
L_804E5568:;
  c->r[4]=0u+0x00000001u; // 804E5568
L_804E556C:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 804E556C
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 804E5570
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5574
  if (!crb(c,0)) { goto L_804E55B4; } // 804E5578
  c->r[3]=R32(c->r[31]+0x00000060u); // 804E557C
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 804E5580
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5584
  if (!crb(c,0)) { goto L_804E5594; } // 804E5588
  c->r[0]=c->r[3]+0x00000001u; // 804E558C
  W32(c->r[31]+0x00000060u,c->r[0]); // 804E5590
L_804E5594:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 804E5594
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 804E5598
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E559C
  if (crb(c,0)) { goto L_804E55B0; } // 804E55A0
  c->r[3]=c->r[29]|c->r[29]; // 804E55A4
  c->r[4]=c->r[30]|c->r[30]; // 804E55A8
  c->lr=0x804E55B0u; f_804E6024(c); // 804E55AC
L_804E55B0:;
  c->r[4]=0u+0x00000001u; // 804E55B0
L_804E55B4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E55B4
  if (crb(c,2)) { goto L_804E56F4; } // 804E55B8
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 804E55BC
  c->r[0]=R32(c->r[31]+0x00000090u); // 804E55C0
  {uint32_t ea=c->r[2]+0x00001904u; c->f[4]=c->ps1[4]=RF32(ea);} // 804E55C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E55C8
  if (crb(c,0)) { goto L_804E55D8; } // 804E55CC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E55D0
  goto L_804E5610; // 804E55D4
L_804E55D8:;
  c->r[3]=c->r[0]^0x80000000u; // 804E55D8
  c->r[0]=c->r[4]^0x80000000u; // 804E55DC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804E55E0
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E55E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E55E8
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E55EC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 804E55F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E55F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E55F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E55FC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5600
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804E5604
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5608
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E560C
L_804E5610:;
  fcmp(c,0,c->f[0],c->f[28]); // 804E5610
  if (!crb(c,1)) { goto L_804E5620; } // 804E5614
  c->f[0]=c->f[28]; // 804E5618
  goto L_804E562C; // 804E561C
L_804E5620:;
  fcmp(c,0,c->f[0],c->f[29]); // 804E5620
  if (!crb(c,0)) { goto L_804E562C; } // 804E5624
  c->f[0]=c->f[29]; // 804E5628
L_804E562C:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 804E562C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 804E5630
  c->r[0]=R32(c->r[31]+0x00000060u); // 804E5634
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E5638
  if (crb(c,0)) { goto L_804E5648; } // 804E563C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5640
  goto L_804E5680; // 804E5644
L_804E5648:;
  c->r[3]=c->r[0]^0x80000000u; // 804E5648
  c->r[0]=c->r[4]^0x80000000u; // 804E564C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804E5650
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5654
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E5658
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E565C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 804E5660
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5664
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E5668
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E566C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5670
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 804E5674
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5678
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E567C
L_804E5680:;
  fcmp(c,0,c->f[0],c->f[28]); // 804E5680
  if (!crb(c,1)) { goto L_804E5690; } // 804E5684
  c->f[0]=c->f[28]; // 804E5688
  goto L_804E569C; // 804E568C
L_804E5690:;
  fcmp(c,0,c->f[0],c->f[29]); // 804E5690
  if (!crb(c,0)) { goto L_804E569C; } // 804E5694
  c->f[0]=c->f[29]; // 804E5698
L_804E569C:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 804E569C
  cmps(c,0,(int32_t)c->r[30],1); // 804E56A0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[4]); // 804E56A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E56A8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804E56AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 804E56B0
  if (crb(c,2)) { goto L_804E56E0; } // 804E56B4
  if (!crb(c,0)) { goto L_804E56C8; } // 804E56B8
  cmps(c,0,(int32_t)c->r[30],0); // 804E56BC
  if (!crb(c,0)) { goto L_804E56D4; } // 804E56C0
  goto L_804E56F4; // 804E56C4
L_804E56C8:;
  cmps(c,0,(int32_t)c->r[30],3); // 804E56C8
  if (!crb(c,0)) { goto L_804E56F4; } // 804E56CC
  goto L_804E56EC; // 804E56D0
L_804E56D4:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E56D4
  c->lr=0x804E56DCu; f_80395234(c); // 804E56D8
  goto L_804E56F4; // 804E56DC
L_804E56E0:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E56E0
  c->lr=0x804E56E8u; f_8039523C(c); // 804E56E4
  goto L_804E56F4; // 804E56E8
L_804E56EC:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E56EC
  c->lr=0x804E56F4u; f_80395244(c); // 804E56F0
L_804E56F4:;
  c->r[30]=c->r[30]+0x00000001u; // 804E56F4
  c->r[31]=c->r[31]+0x00000010u; // 804E56F8
  cmps(c,0,(int32_t)c->r[30],3); // 804E56FC
  if (crb(c,0)) { IRQCHK(c); goto L_804E553C; } // 804E5700
  c->r[3]=R32(c->r[29]+0x00000028u); // 804E5704
  c->r[0]=R32(c->r[29]+0x00000024u); // 804E5708
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E570C
  if (!crb(c,0)) { goto L_804E5738; } // 804E5710
  c->r[3]=R32(c->r[29]+0x00000028u); // 804E5714
  c->r[0]=R32(c->r[29]+0x00000024u); // 804E5718
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E571C
  if (!crb(c,0)) { goto L_804E572C; } // 804E5720
  c->r[0]=c->r[3]+0x00000001u; // 804E5724
  W32(c->r[29]+0x00000028u,c->r[0]); // 804E5728
L_804E572C:;
  c->lr=0x804E5730u; f_80505288(c); // 804E572C
  c->r[4]=0u+0x00000008u; // 804E5730
  c->lr=0x804E5738u; f_805058B0(c); // 804E5734
L_804E5738:;
  c->r[3]=R32(c->r[29]+0x00000048u); // 804E5738
  c->r[0]=R32(c->r[29]+0x00000044u); // 804E573C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5740
  if (!crb(c,0)) { goto L_804E5760; } // 804E5744
  c->r[3]=R32(c->r[29]+0x00000048u); // 804E5748
  c->r[0]=R32(c->r[29]+0x00000044u); // 804E574C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5750
  if (!crb(c,0)) { goto L_804E5760; } // 804E5754
  c->r[0]=c->r[3]+0x00000001u; // 804E5758
  W32(c->r[29]+0x00000048u,c->r[0]); // 804E575C
L_804E5760:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 804E5760
  c->r[0]=R32(c->r[29]+0x00000034u); // 804E5764
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5768
  if (!crb(c,0)) { goto L_804E5788; } // 804E576C
  c->r[3]=R32(c->r[29]+0x00000038u); // 804E5770
  c->r[0]=R32(c->r[29]+0x00000034u); // 804E5774
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5778
  if (!crb(c,0)) { goto L_804E5788; } // 804E577C
  c->r[0]=c->r[3]+0x00000001u; // 804E5780
  W32(c->r[29]+0x00000038u,c->r[0]); // 804E5784
L_804E5788:;
  c->r[4]=R32(c->r[29]+0x00000034u); // 804E5788
  c->r[0]=R32(c->r[29]+0x00000038u); // 804E578C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E5790
  if (crb(c,0)) { goto L_804E57A0; } // 804E5794
  {uint32_t ea=c->r[29]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E5798
  goto L_804E57DC; // 804E579C
L_804E57A0:;
  c->r[3]=c->r[0]^0x80000000u; // 804E57A0
  c->r[0]=c->r[4]^0x80000000u; // 804E57A4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804E57A8
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E57AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804E57B0
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E57B4
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E57B8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804E57BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E57C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E57C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E57C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E57CC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E57D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E57D4
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[0]); // 804E57D8
L_804E57DC:;
  c->r[4]=R32(c->r[29]+0x00000044u); // 804E57DC
  c->r[0]=R32(c->r[29]+0x00000048u); // 804E57E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E57E4
  if (crb(c,0)) { goto L_804E57F4; } // 804E57E8
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E57EC
  goto L_804E5830; // 804E57F0
L_804E57F4:;
  c->r[3]=c->r[0]^0x80000000u; // 804E57F4
  c->r[0]=c->r[4]^0x80000000u; // 804E57F8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804E57FC
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E5800
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804E5804
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5808
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E580C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804E5810
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5814
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E5818
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E581C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E5820
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5824
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5828
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E582C
L_804E5830:;
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 804E5830
  {uint32_t ea=c->r[2]+0x00001904u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5834
  fcmp(c,0,c->f[0],c->f[1]); // 804E5838
  if (!crb(c,1)) { goto L_804E5844; } // 804E583C
  goto L_804E5858; // 804E5840
L_804E5844:;
  {uint32_t ea=c->r[2]+0x00001900u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5844
  fcmp(c,0,c->f[0],c->f[1]); // 804E5848
  if (!crb(c,0)) { goto L_804E5854; } // 804E584C
  goto L_804E5858; // 804E5850
L_804E5854:;
  c->f[1]=c->f[0]; // 804E5854
L_804E5858:;
  {uint32_t ea=c->r[2]+0x00001910u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5858
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804E585C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E5860
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804E5864
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 804E5868
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 804E586C
  c->lr=0x804E5874u; f_8039521C(c); // 804E5870
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 804E5874
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 804E5878
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 804E587C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 804E5880
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 804E5884
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 804E5888
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 804E588C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 804E5890
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E5894
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E5898
  c->r[0]=R32(c->r[1]+0x00000074u); // 804E589C
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E58A0
  c->lr=c->r[0]; // 804E58A4
  c->r[1]=c->r[1]+0x00000070u; // 804E58A8
  return; // 804E58AC
}

// GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
void f_804E58B0(Ctx* __restrict c) {
  trace_call(0x804E58B0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804E58B0
  return; // 804E58B4
}

// RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v
void f_804E58B8(Ctx* __restrict c) {
  trace_call(0x804E58B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E58B8
  c->r[0]=c->lr; // 804E58BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E58C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E58C4
  c->r[31]=c->r[5]|c->r[5]; // 804E58C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E58CC
  c->r[30]=c->r[4]|c->r[4]; // 804E58D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E58D4
  c->r[29]=c->r[3]|c->r[3]; // 804E58D8
  c->lr=0x804E58E0u; f_8037BBA4(c); // 804E58DC
  W32(c->r[30]+0x00000008u,c->r[31]); // 804E58E0
  c->r[0]=c->r[29]+0x0000000Cu; // 804E58E4
  c->r[31]=c->r[3]|c->r[3]; // 804E58E8
  c->r[5]=c->r[30]|c->r[30]; // 804E58EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E58F0
  c->r[3]=c->r[29]+0x00000008u; // 804E58F4
  c->r[4]=c->r[1]+0x00000008u; // 804E58F8
  c->lr=0x804E5900u; f_80507EDC(c); // 804E58FC
  c->r[3]=c->r[31]|c->r[31]; // 804E5900
  c->lr=0x804E5908u; f_8037BBCC(c); // 804E5904
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E5908
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E590C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E5910
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E5914
  c->lr=c->r[0]; // 804E5918
  c->r[1]=c->r[1]+0x00000020u; // 804E591C
  return; // 804E5920
}

// UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode
void f_804E5924(Ctx* __restrict c) {
  trace_call(0x804E5924u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5924
  c->r[0]=c->lr; // 804E5928
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E592C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E5930
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E5934
  c->r[30]=c->r[4]|c->r[4]; // 804E5938
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E593C
  c->r[29]=c->r[3]|c->r[3]; // 804E5940
  c->lr=0x804E5948u; f_8037BBA4(c); // 804E5944
  c->r[31]=c->r[3]|c->r[3]; // 804E5948
  c->r[4]=c->r[30]|c->r[30]; // 804E594C
  c->r[3]=c->r[29]+0x00000008u; // 804E5950
  c->lr=0x804E5958u; f_80507F08(c); // 804E5954
  c->r[3]=c->r[31]|c->r[31]; // 804E5958
  c->lr=0x804E5960u; f_8037BBCC(c); // 804E595C
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E5960
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E5964
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E5968
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E596C
  c->lr=c->r[0]; // 804E5970
  c->r[1]=c->r[1]+0x00000020u; // 804E5974
  return; // 804E5978
}

// SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
void f_804E597C(Ctx* __restrict c) {
  trace_call(0x804E597Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E597C
  c->r[0]=c->lr; // 804E5980
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E5984
  c->r[11]=c->r[1]+0x00000030u; // 804E5988
  c->lr=0x804E5990u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E598C
  c->r[0]=R32(c->r[3]+0x00000000u); // 804E5990
  c->r[25]=c->r[3]|c->r[3]; // 804E5994
  c->r[26]=c->r[4]|c->r[4]; // 804E5998
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E599C
  if (crb(c,2)) { goto L_804E5A6C; } // 804E59A0
  c->lr=0x804E59A8u; f_8037BBA4(c); // 804E59A4
  cmps(c,0,(int32_t)c->r[26],2); // 804E59A8
  W32(c->r[25]+0x00000000u,c->r[26]); // 804E59AC
  c->r[31]=c->r[3]|c->r[3]; // 804E59B0
  if (crb(c,2)) { goto L_804E59F0; } // 804E59B4
  if (!crb(c,0)) { goto L_804E59CC; } // 804E59B8
  cmps(c,0,(int32_t)c->r[26],0); // 804E59BC
  if (crb(c,2)) { goto L_804E59D8; } // 804E59C0
  if (!crb(c,0)) { goto L_804E59E4; } // 804E59C4
  goto L_804E5A04; // 804E59C8
L_804E59CC:;
  cmps(c,0,(int32_t)c->r[26],4); // 804E59CC
  if (!crb(c,0)) { goto L_804E5A04; } // 804E59D0
  goto L_804E59FC; // 804E59D4
L_804E59D8:;
  c->r[3]=0u+0x00000000u; // 804E59D8
  c->lr=0x804E59E0u; f_803951EC(c); // 804E59DC
  goto L_804E5A04; // 804E59E0
L_804E59E4:;
  c->r[3]=0u+0x00000001u; // 804E59E4
  c->lr=0x804E59ECu; f_803951EC(c); // 804E59E8
  goto L_804E5A04; // 804E59EC
L_804E59F0:;
  c->r[3]=0u+0x00000002u; // 804E59F0
  c->lr=0x804E59F8u; f_803951EC(c); // 804E59F4
  goto L_804E5A04; // 804E59F8
L_804E59FC:;
  c->r[3]=0u+0x00000000u; // 804E59FC
  c->lr=0x804E5A04u; f_803951EC(c); // 804E5A00
L_804E5A04:;
  c->lr=0x804E5A08u; f_80505288(c); // 804E5A04
  c->r[4]=0u+0x00000010u; // 804E5A08
  c->lr=0x804E5A10u; f_805058B0(c); // 804E5A0C
  c->r[28]=c->r[25]+0x000000B4u; // 804E5A10
  c->r[27]=0u+0x00000000u; // 804E5A14
L_804E5A18:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 804E5A18
  c->r[29]=c->r[28]+0x00000004u; // 804E5A1C
  goto L_804E5A3C; // 804E5A20
L_804E5A24:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 804E5A24
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 804E5A28
  c->r[12]=R32(c->r[12]+0x00000018u); // 804E5A2C
  c->ctr=c->r[12]; // 804E5A30
  if (true) { c->lr=0x804E5A38u; dispatch(c,c->ctr); } // 804E5A34
  c->r[30]=R32(c->r[30]+0x00000000u); // 804E5A38
L_804E5A3C:;
  cmpu(c,0,c->r[30],c->r[29]); // 804E5A3C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E5A24; } // 804E5A40
  c->r[27]=c->r[27]+0x00000001u; // 804E5A44
  c->r[28]=c->r[28]+0x0000000Cu; // 804E5A48
  cmps(c,0,(int32_t)c->r[27],3); // 804E5A4C
  if (crb(c,0)) { IRQCHK(c); goto L_804E5A18; } // 804E5A50
  cmps(c,0,(int32_t)c->r[26],2); // 804E5A54
  if (!crb(c,2)) { goto L_804E5A64; } // 804E5A58
  c->r[0]=0u+0x00000000u; // 804E5A5C
  W32(c->r[25]+0x000000FCu,c->r[0]); // 804E5A60
L_804E5A64:;
  c->r[3]=c->r[31]|c->r[31]; // 804E5A64
  c->lr=0x804E5A6Cu; f_8037BBCC(c); // 804E5A68
L_804E5A6C:;
  c->r[11]=c->r[1]+0x00000030u; // 804E5A6C
  c->lr=0x804E5A74u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E5A70
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E5A74
  c->lr=c->r[0]; // 804E5A78
  c->r[1]=c->r[1]+0x00000030u; // 804E5A7C
  return; // 804E5A80
}

// GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
void f_804E5A84(Ctx* __restrict c) {
  trace_call(0x804E5A84u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E5A84
  return; // 804E5A88
}

// fn_804E5A8C
void f_804E5A8C(Ctx* __restrict c) {
  trace_call(0x804E5A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5A8C
  c->r[0]=c->lr; // 804E5A90
  {uint32_t ea=c->r[2]+0x00001904u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E5A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E5A98
  fcmp(c,0,c->f[1],c->f[5]); // 804E5A9C
  if (!crb(c,1)) { goto L_804E5AA8; } // 804E5AA0
  goto L_804E5ABC; // 804E5AA4
L_804E5AA8:;
  {uint32_t ea=c->r[2]+0x00001900u; c->f[5]=c->ps1[5]=RF32(ea);} // 804E5AA8
  fcmp(c,0,c->f[1],c->f[5]); // 804E5AAC
  if (!crb(c,0)) { goto L_804E5AB8; } // 804E5AB0
  goto L_804E5ABC; // 804E5AB4
L_804E5AB8:;
  c->f[5]=c->f[1]; // 804E5AB8
L_804E5ABC:;
  c->r[6]=R32(c->r[3]+0x00000024u); // 804E5ABC
  c->r[0]=R32(c->r[3]+0x00000028u); // 804E5AC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 804E5AC4
  if (crb(c,0)) { goto L_804E5AD4; } // 804E5AC8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5ACC
  goto L_804E5B1C; // 804E5AD0
L_804E5AD4:;
  c->r[5]=0u+0x43300000u; // 804E5AD4
  c->r[0]=c->r[0]^0x80000000u; // 804E5AD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E5ADC
  c->r[0]=c->r[6]^0x80000000u; // 804E5AE0
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E5AE4
  W32(c->r[1]+0x00000008u,c->r[5]); // 804E5AE8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5AEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E5AF0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E5AF4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804E5AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5AFC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E5B00
  W32(c->r[1]+0x00000010u,c->r[5]); // 804E5B04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E5B08
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5B0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E5B10
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5B14
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E5B18
L_804E5B1C:;
  c->r[5]=0u+0x55550000u; // 804E5B1C
  c->r[0]=0u+0x00000000u; // 804E5B20
  c->r[6]=c->r[4]+0x00000002u; // 804E5B24
  cmps(c,0,(int32_t)c->r[4],0); // 804E5B28
  c->r[4]=c->r[5]+0x00005556u; // 804E5B2C
  W32(c->r[3]+0x00000028u,c->r[0]); // 804E5B30
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[6])>>32); // 804E5B34
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 804E5B38
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 804E5B3C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 804E5B40
  c->r[0]=c->r[4]+c->r[0]; // 804E5B44
  W32(c->r[3]+0x00000024u,c->r[0]); // 804E5B48
  if (!crb(c,2)) { goto L_804E5B5C; } // 804E5B4C
  c->lr=0x804E5B54u; f_80505288(c); // 804E5B50
  c->r[4]=0u+0x00000008u; // 804E5B54
  c->lr=0x804E5B5Cu; f_805058B0(c); // 804E5B58
L_804E5B5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E5B5C
  c->lr=c->r[0]; // 804E5B60
  c->r[1]=c->r[1]+0x00000020u; // 804E5B64
  return; // 804E5B68
}

// fn_804E5B6C
void f_804E5B6C(Ctx* __restrict c) {
  trace_call(0x804E5B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5B6C
  c->r[0]=c->lr; // 804E5B70
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E5B74
  c->r[11]=c->r[1]+0x00000030u; // 804E5B78
  c->lr=0x804E5B80u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E5B7C
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E5B80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E5B84
  if (!crb(c,2)) { goto L_804E5BB8; } // 804E5B88
  c->r[25]=0u+0x80830000u; // 804E5B8C
  c->r[3]=c->r[25]+0xFFFF8568u; // 804E5B90
  c->lr=0x804E5B98u; f_804E4D58(c); // 804E5B94
  c->r[4]=0u+0x804E0000u; // 804E5B98
  c->r[5]=0u+0x80830000u; // 804E5B9C
  c->r[3]=c->r[25]+0xFFFF8568u; // 804E5BA0
  c->r[4]=c->r[4]+0x000052DCu; // 804E5BA4
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E5BA8
  c->lr=0x804E5BB0u; f_803A92B8(c); // 804E5BAC
  c->r[0]=0u+0x00000001u; // 804E5BB0
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E5BB4
L_804E5BB8:;
  c->r[25]=0u+0x80830000u; // 804E5BB8
  c->r[27]=0u+0x804E0000u; // 804E5BBC
  c->r[26]=c->r[25]+0xFFFF8568u; // 804E5BC0
  c->r[28]=0u+0x80830000u; // 804E5BC4
  c->r[31]=R32(c->r[26]+0x0000000Cu); // 804E5BC8
  c->r[30]=c->r[26]+0x0000000Cu; // 804E5BCC
  c->r[29]=0u+0x00000001u; // 804E5BD0
  goto L_804E5BEC; // 804E5BD4
L_804E5BD8:;
  c->r[3]=c->r[31]|c->r[31]; // 804E5BD8
  c->r[31]=R32(c->r[31]+0x00000000u); // 804E5BDC
  c->r[12]=R32(c->r[3]+0x00000008u); // 804E5BE0
  c->ctr=c->r[12]; // 804E5BE4
  if (true) { c->lr=0x804E5BECu; dispatch(c,c->ctr); } // 804E5BE8
L_804E5BEC:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E5BEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E5BF0
  if (!crb(c,2)) { goto L_804E5C14; } // 804E5BF4
  c->r[3]=c->r[25]+0xFFFF8568u; // 804E5BF8
  c->lr=0x804E5C00u; f_804E4D58(c); // 804E5BFC
  c->r[3]=c->r[25]+0xFFFF8568u; // 804E5C00
  c->r[4]=c->r[27]+0x000052DCu; // 804E5C04
  c->r[5]=c->r[28]+0xFFFF855Cu; // 804E5C08
  c->lr=0x804E5C10u; f_803A92B8(c); // 804E5C0C
  W8(c->r[13]+0xFFFFE4E4u,c->r[29]); // 804E5C10
L_804E5C14:;
  cmpu(c,0,c->r[31],c->r[30]); // 804E5C14
  if (!crb(c,2)) { IRQCHK(c); goto L_804E5BD8; } // 804E5C18
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E5C1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E5C20
  if (!crb(c,2)) { goto L_804E5C50; } // 804E5C24
  c->r[3]=c->r[26]|c->r[26]; // 804E5C28
  c->lr=0x804E5C30u; f_804E4D58(c); // 804E5C2C
  c->r[4]=0u+0x804E0000u; // 804E5C30
  c->r[5]=0u+0x80830000u; // 804E5C34
  c->r[3]=c->r[26]|c->r[26]; // 804E5C38
  c->r[4]=c->r[4]+0x000052DCu; // 804E5C3C
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E5C40
  c->lr=0x804E5C48u; f_803A92B8(c); // 804E5C44
  c->r[0]=0u+0x00000001u; // 804E5C48
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E5C4C
L_804E5C50:;
  c->r[31]=0u+0x80830000u; // 804E5C50
  c->r[31]=c->r[31]+0xFFFF8568u; // 804E5C54
  c->r[0]=R32(c->r[31]+0x00000014u); // 804E5C58
  cmps(c,0,(int32_t)c->r[0],0); // 804E5C5C
  if (crb(c,2)) { goto L_804E5CAC; } // 804E5C60
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E5C64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E5C68
  if (!crb(c,2)) { goto L_804E5C98; } // 804E5C6C
  c->r[3]=c->r[31]|c->r[31]; // 804E5C70
  c->lr=0x804E5C78u; f_804E4D58(c); // 804E5C74
  c->r[4]=0u+0x804E0000u; // 804E5C78
  c->r[5]=0u+0x80830000u; // 804E5C7C
  c->r[3]=c->r[31]|c->r[31]; // 804E5C80
  c->r[4]=c->r[4]+0x000052DCu; // 804E5C84
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E5C88
  c->lr=0x804E5C90u; f_803A92B8(c); // 804E5C8C
  c->r[0]=0u+0x00000001u; // 804E5C90
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E5C94
L_804E5C98:;
  c->r[3]=0u+0x80830000u; // 804E5C98
  c->r[3]=c->r[3]+0xFFFF8568u; // 804E5C9C
  c->r[12]=R32(c->r[3]+0x00000014u); // 804E5CA0
  c->ctr=c->r[12]; // 804E5CA4
  if (true) { c->lr=0x804E5CACu; dispatch(c,c->ctr); } // 804E5CA8
L_804E5CAC:;
  c->r[11]=c->r[1]+0x00000030u; // 804E5CAC
  c->lr=0x804E5CB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E5CB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E5CB4
  c->lr=c->r[0]; // 804E5CB8
  c->r[1]=c->r[1]+0x00000030u; // 804E5CBC
  return; // 804E5CC0
}

// fn_804E5CC4
void f_804E5CC4(Ctx* __restrict c) {
  trace_call(0x804E5CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5CC4
  c->r[0]=c->lr; // 804E5CC8
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E5CCC
  c->r[11]=c->r[1]+0x00000040u; // 804E5CD0
  c->lr=0x804E5CD8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E5CD4
  c->r[27]=rotl(c->r[4],4)&0xFFFFFFF0u; // 804E5CD8
  c->r[29]=c->r[3]|c->r[3]; // 804E5CDC
  c->r[28]=c->r[3]+c->r[27]; // 804E5CE0
  c->r[30]=c->r[4]|c->r[4]; // 804E5CE4
  c->r[6]=R32(c->r[28]+0x00000060u); // 804E5CE8
  c->r[31]=c->r[5]|c->r[5]; // 804E5CEC
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 804E5CF0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804E5CF4
  if (!crb(c,0)) { goto L_804E5D00; } // 804E5CF8
  c->lr=0x804E5D00u; f_804E6024(c); // 804E5CFC
L_804E5D00:;
  c->r[5]=R32(c->r[28]+0x0000005Cu); // 804E5D00
  c->r[0]=R32(c->r[28]+0x00000060u); // 804E5D04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804E5D08
  if (crb(c,0)) { goto L_804E5D1C; } // 804E5D0C
  c->r[3]=c->r[29]+c->r[27]; // 804E5D10
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5D14
  goto L_804E5D68; // 804E5D18
L_804E5D1C:;
  c->r[3]=0u+0x43300000u; // 804E5D1C
  c->r[0]=c->r[0]^0x80000000u; // 804E5D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5D24
  c->r[4]=c->r[29]+c->r[27]; // 804E5D28
  c->r[0]=c->r[5]^0x80000000u; // 804E5D2C
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E5D30
  W32(c->r[1]+0x00000010u,c->r[3]); // 804E5D34
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5D38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804E5D3C
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E5D40
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804E5D44
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804E5D48
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E5D4C
  W32(c->r[1]+0x00000018u,c->r[3]); // 804E5D50
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 804E5D54
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5D58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E5D5C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5D60
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E5D64
L_804E5D68:;
  c->r[3]=c->r[29]+c->r[27]; // 804E5D68
  {uint32_t ea=c->r[2]+0x00001904u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5D6C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 804E5D70
  c->r[0]=0u+0x00000000u; // 804E5D74
  cmps(c,0,(int32_t)c->r[30],1); // 804E5D78
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 804E5D7C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 804E5D80
  W32(c->r[3]+0x00000060u,c->r[0]); // 804E5D84
  if (crb(c,2)) { goto L_804E5DBC; } // 804E5D88
  if (!crb(c,0)) { goto L_804E5D9C; } // 804E5D8C
  cmps(c,0,(int32_t)c->r[30],0); // 804E5D90
  if (!crb(c,0)) { goto L_804E5DA8; } // 804E5D94
  goto L_804E5DE0; // 804E5D98
L_804E5D9C:;
  cmps(c,0,(int32_t)c->r[30],3); // 804E5D9C
  if (!crb(c,0)) { goto L_804E5DE0; } // 804E5DA0
  goto L_804E5DD0; // 804E5DA4
L_804E5DA8:;
  c->r[3]=0u+0x00010000u; // 804E5DA8
  c->r[0]=c->r[3]+0xFFFF8000u; // 804E5DAC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E5DB0
  c->lr=0x804E5DB8u; f_80395234(c); // 804E5DB4
  goto L_804E5DE0; // 804E5DB8
L_804E5DBC:;
  c->r[3]=0u+0x00010000u; // 804E5DBC
  c->r[0]=c->r[3]+0xFFFF8000u; // 804E5DC0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E5DC4
  c->lr=0x804E5DCCu; f_8039523C(c); // 804E5DC8
  goto L_804E5DE0; // 804E5DCC
L_804E5DD0:;
  c->r[3]=0u+0x00010000u; // 804E5DD0
  c->r[0]=c->r[3]+0xFFFF8000u; // 804E5DD4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 804E5DD8
  c->lr=0x804E5DE0u; f_80395244(c); // 804E5DDC
L_804E5DE0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804E5DE0
  c->r[3]=c->r[31]|c->r[31]; // 804E5DE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E5DE8
  c->ctr=c->r[12]; // 804E5DEC
  if (true) { c->lr=0x804E5DF4u; dispatch(c,c->ctr); } // 804E5DF0
  cmps(c,0,(int32_t)c->r[3],0); // 804E5DF4
  if (!crb(c,2)) { goto L_804E5E04; } // 804E5DF8
  c->r[3]=0u+0x00000000u; // 804E5DFC
  goto L_804E5EB0; // 804E5E00
L_804E5E04:;
  c->lr=0x804E5E08u; f_8037BBA4(c); // 804E5E04
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 804E5E08
  c->r[28]=c->r[3]|c->r[3]; // 804E5E0C
  c->r[3]=c->r[29]+c->r[0]; // 804E5E10
  c->r[0]=R32(c->r[3]+0x000000B4u); // 804E5E14
  c->r[27]=c->r[3]+0x000000B4u; // 804E5E18
  cmps(c,0,(int32_t)c->r[0],0); // 804E5E1C
  if (!crb(c,2)) { goto L_804E5E8C; } // 804E5E20
  cmps(c,0,(int32_t)c->r[30],1); // 804E5E24
  if (crb(c,2)) { goto L_804E5E5C; } // 804E5E28
  if (!crb(c,0)) { goto L_804E5E3C; } // 804E5E2C
  cmps(c,0,(int32_t)c->r[30],0); // 804E5E30
  if (!crb(c,0)) { goto L_804E5E48; } // 804E5E34
  goto L_804E5E80; // 804E5E38
L_804E5E3C:;
  cmps(c,0,(int32_t)c->r[30],3); // 804E5E3C
  if (!crb(c,0)) { goto L_804E5E80; } // 804E5E40
  goto L_804E5E70; // 804E5E44
L_804E5E48:;
  c->r[3]=0u+0x804E0000u; // 804E5E48
  c->r[4]=c->r[30]|c->r[30]; // 804E5E4C
  c->r[3]=c->r[3]+0x00006124u; // 804E5E50
  c->lr=0x804E5E58u; f_80394638(c); // 804E5E54
  goto L_804E5E80; // 804E5E58
L_804E5E5C:;
  c->r[3]=0u+0x804E0000u; // 804E5E5C
  c->r[4]=c->r[30]|c->r[30]; // 804E5E60
  c->r[3]=c->r[3]+0x00006124u; // 804E5E64
  c->lr=0x804E5E6Cu; f_8039469C(c); // 804E5E68
  goto L_804E5E80; // 804E5E6C
L_804E5E70:;
  c->r[3]=0u+0x804E0000u; // 804E5E70
  c->r[4]=c->r[30]|c->r[30]; // 804E5E74
  c->r[3]=c->r[3]+0x00006124u; // 804E5E78
  c->lr=0x804E5E80u; f_80394700(c); // 804E5E7C
L_804E5E80:;
  c->r[3]=c->r[29]+c->r[30]; // 804E5E80
  c->r[0]=0u+0x00000002u; // 804E5E84
  W8(c->r[3]+0x000000F0u,c->r[0]); // 804E5E88
L_804E5E8C:;
  c->r[0]=c->r[27]+0x00000004u; // 804E5E8C
  c->r[3]=c->r[27]|c->r[27]; // 804E5E90
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E5E94
  c->r[4]=c->r[1]+0x00000008u; // 804E5E98
  c->r[5]=c->r[31]+0x00000004u; // 804E5E9C
  c->lr=0x804E5EA4u; f_80507EDC(c); // 804E5EA0
  c->r[3]=c->r[28]|c->r[28]; // 804E5EA4
  c->lr=0x804E5EACu; f_8037BBCC(c); // 804E5EA8
  c->r[3]=0u+0x00000001u; // 804E5EAC
L_804E5EB0:;
  c->r[11]=c->r[1]+0x00000040u; // 804E5EB0
  c->lr=0x804E5EB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E5EB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E5EB8
  c->lr=c->r[0]; // 804E5EBC
  c->r[1]=c->r[1]+0x00000040u; // 804E5EC0
  return; // 804E5EC4
}

// fn_804E5EC8
void f_804E5EC8(Ctx* __restrict c) {
  trace_call(0x804E5EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E5EC8
  c->r[0]=c->lr; // 804E5ECC
  cmps(c,0,(int32_t)c->r[5],0); // 804E5ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E5ED4
  c->r[0]=0u+0x43300000u; // 804E5ED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E5EDC
  c->r[31]=c->r[4]|c->r[4]; // 804E5EE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E5EE4
  c->r[30]=c->r[3]|c->r[3]; // 804E5EE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E5EEC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E5EF0
  if (!crb(c,2)) { goto L_804E5F7C; } // 804E5EF4
  c->lr=0x804E5EFCu; f_804E6024(c); // 804E5EF8
  c->r[5]=rotl(c->r[31],4)&0xFFFFFFF0u; // 804E5EFC
  c->r[4]=c->r[30]+c->r[5]; // 804E5F00
  c->r[0]=R32(c->r[4]+0x0000005Cu); // 804E5F04
  c->r[3]=R32(c->r[4]+0x00000060u); // 804E5F08
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804E5F0C
  if (!crb(c,0)) { goto L_804E600C; } // 804E5F10
  if (crb(c,0)) { goto L_804E5F20; } // 804E5F14
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5F18
  goto L_804E5F5C; // 804E5F1C
L_804E5F20:;
  c->r[3]=c->r[3]^0x80000000u; // 804E5F20
  c->r[0]=c->r[0]^0x80000000u; // 804E5F24
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804E5F28
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E5F2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804E5F30
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5F34
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E5F38
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804E5F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5F40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E5F44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E5F48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E5F4C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5F50
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5F54
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E5F58
L_804E5F5C:;
  c->r[3]=c->r[30]+c->r[5]; // 804E5F5C
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5F60
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 804E5F64
  c->r[0]=0u+0x00000000u; // 804E5F68
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 804E5F6C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 804E5F70
  W32(c->r[3]+0x00000060u,c->r[0]); // 804E5F74
  goto L_804E600C; // 804E5F78
L_804E5F7C:;
  c->r[8]=rotl(c->r[4],4)&0xFFFFFFF0u; // 804E5F7C
  c->r[6]=c->r[3]+c->r[8]; // 804E5F80
  c->r[7]=R32(c->r[6]+0x0000005Cu); // 804E5F84
  c->r[0]=R32(c->r[6]+0x00000060u); // 804E5F88
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 804E5F8C
  if (crb(c,0)) { goto L_804E5F9C; } // 804E5F90
  {uint32_t ea=c->r[6]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5F94
  goto L_804E5FD8; // 804E5F98
L_804E5F9C:;
  c->r[4]=c->r[0]^0x80000000u; // 804E5F9C
  c->r[0]=c->r[7]^0x80000000u; // 804E5FA0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804E5FA4
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E5FA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804E5FAC
  {uint32_t ea=c->r[6]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E5FB0
  {uint32_t ea=c->r[6]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 804E5FB4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804E5FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E5FBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E5FC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E5FC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E5FC8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E5FCC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E5FD0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804E5FD4
L_804E5FD8:;
  c->r[4]=0u+0x55550000u; // 804E5FD8
  c->r[6]=c->r[3]+c->r[8]; // 804E5FDC
  c->r[0]=c->r[5]+0x00000002u; // 804E5FE0
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 804E5FE4
  c->r[3]=c->r[4]+0x00005556u; // 804E5FE8
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E5FEC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E5FF0
  c->r[0]=0u+0x00000000u; // 804E5FF4
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 804E5FF8
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 804E5FFC
  c->r[3]=c->r[4]+c->r[3]; // 804E6000
  W32(c->r[6]+0x0000005Cu,c->r[3]); // 804E6004
  W32(c->r[6]+0x00000060u,c->r[0]); // 804E6008
L_804E600C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E600C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E6010
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E6014
  c->lr=c->r[0]; // 804E6018
  c->r[1]=c->r[1]+0x00000020u; // 804E601C
  return; // 804E6020
}

// fn_804E6024
void f_804E6024(Ctx* __restrict c) {
  trace_call(0x804E6024u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6024
  c->r[0]=c->lr; // 804E6028
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E602C
  c->r[11]=c->r[1]+0x00000020u; // 804E6030
  c->lr=0x804E6038u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E6034
  c->r[26]=c->r[3]|c->r[3]; // 804E6038
  c->r[27]=c->r[4]|c->r[4]; // 804E603C
  c->lr=0x804E6044u; f_8037BBA4(c); // 804E6040
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 804E6044
  c->r[31]=c->r[3]|c->r[3]; // 804E6048
  c->r[4]=c->r[26]+c->r[0]; // 804E604C
  c->r[0]=R32(c->r[4]+0x000000B4u); // 804E6050
  c->r[28]=c->r[4]+0x000000B4u; // 804E6054
  cmps(c,0,(int32_t)c->r[0],0); // 804E6058
  if (!crb(c,2)) { goto L_804E6068; } // 804E605C
  c->lr=0x804E6064u; f_8037BBCC(c); // 804E6060
  goto L_804E610C; // 804E6064
L_804E6068:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 804E6068
  c->r[29]=c->r[28]+0x00000004u; // 804E606C
  goto L_804E608C; // 804E6070
L_804E6074:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 804E6074
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 804E6078
  c->r[12]=R32(c->r[12]+0x00000010u); // 804E607C
  c->ctr=c->r[12]; // 804E6080
  if (true) { c->lr=0x804E6088u; dispatch(c,c->ctr); } // 804E6084
  c->r[30]=R32(c->r[30]+0x00000000u); // 804E6088
L_804E608C:;
  cmpu(c,0,c->r[30],c->r[29]); // 804E608C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E6074; } // 804E6090
  c->r[3]=c->r[28]|c->r[28]; // 804E6094
  c->lr=0x804E609Cu; f_80507E98(c); // 804E6098
  cmps(c,0,(int32_t)c->r[27],1); // 804E609C
  if (crb(c,2)) { goto L_804E60D8; } // 804E60A0
  if (!crb(c,0)) { goto L_804E60B4; } // 804E60A4
  cmps(c,0,(int32_t)c->r[27],0); // 804E60A8
  if (!crb(c,0)) { goto L_804E60C0; } // 804E60AC
  goto L_804E6104; // 804E60B0
L_804E60B4:;
  cmps(c,0,(int32_t)c->r[27],3); // 804E60B4
  if (!crb(c,0)) { goto L_804E6104; } // 804E60B8
  goto L_804E60F0; // 804E60BC
L_804E60C0:;
  c->r[3]=0u+0x00000000u; // 804E60C0
  c->r[4]=0u+0x00000000u; // 804E60C4
  c->lr=0x804E60CCu; f_80394638(c); // 804E60C8
  c->r[0]=0u+0x00000000u; // 804E60CC
  W32(c->r[26]+0x000000F4u,c->r[0]); // 804E60D0
  goto L_804E6104; // 804E60D4
L_804E60D8:;
  c->r[3]=0u+0x00000000u; // 804E60D8
  c->r[4]=0u+0x00000000u; // 804E60DC
  c->lr=0x804E60E4u; f_8039469C(c); // 804E60E0
  c->r[0]=0u+0x00000000u; // 804E60E4
  W32(c->r[26]+0x000000F8u,c->r[0]); // 804E60E8
  goto L_804E6104; // 804E60EC
L_804E60F0:;
  c->r[3]=0u+0x00000000u; // 804E60F0
  c->r[4]=0u+0x00000000u; // 804E60F4
  c->lr=0x804E60FCu; f_80394700(c); // 804E60F8
  c->r[0]=0u+0x00000000u; // 804E60FC
  W32(c->r[26]+0x000000FCu,c->r[0]); // 804E6100
L_804E6104:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6104
  c->lr=0x804E610Cu; f_8037BBCC(c); // 804E6108
L_804E610C:;
  c->r[11]=c->r[1]+0x00000020u; // 804E610C
  c->lr=0x804E6114u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E6110
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E6114
  c->lr=c->r[0]; // 804E6118
  c->r[1]=c->r[1]+0x00000020u; // 804E611C
  return; // 804E6120
}

// fn_804E6124
void f_804E6124(Ctx* __restrict c) {
  trace_call(0x804E6124u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6124
  c->r[0]=c->lr; // 804E6128
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E612C
  c->r[11]=c->r[1]+0x00000040u; // 804E6130
  c->lr=0x804E6138u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E6134
  c->r[24]=c->r[3]|c->r[3]; // 804E6138
  c->r[29]=c->r[4]|c->r[4]; // 804E613C
  c->lr=0x804E6144u; f_8037FD30(c); // 804E6140
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6144
  c->r[31]=c->r[3]|c->r[3]; // 804E6148
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E614C
  if (!crb(c,2)) { goto L_804E6180; } // 804E6150
  c->r[23]=0u+0x80830000u; // 804E6154
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6158
  c->lr=0x804E6160u; f_804E4D58(c); // 804E615C
  c->r[4]=0u+0x804E0000u; // 804E6160
  c->r[5]=0u+0x80830000u; // 804E6164
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6168
  c->r[4]=c->r[4]+0x000052DCu; // 804E616C
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E6170
  c->lr=0x804E6178u; f_803A92B8(c); // 804E6174
  c->r[0]=0u+0x00000001u; // 804E6178
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E617C
L_804E6180:;
  c->r[3]=0u+0x80830000u; // 804E6180
  c->r[0]=R32(c->r[3]+0xFFFF8568u); // 804E6184
  cmps(c,0,(int32_t)c->r[0],2); // 804E6188
  if (!crb(c,2)) { goto L_804E61B8; } // 804E618C
  c->r[0]=R32(c->r[24]+0x00000000u); // 804E6190
  c->r[30]=0u+0x00000004u; // 804E6194
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E6198
  c->r[0]=R32(c->r[24]+0x00000004u); // 804E619C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E61A0
  c->r[0]=R32(c->r[24]+0x00000008u); // 804E61A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E61A8
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 804E61AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E61B0
  goto L_804E61D4; // 804E61B4
L_804E61B8:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 804E61B8
  c->r[30]=0u+0x00000003u; // 804E61BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E61C0
  c->r[0]=R32(c->r[24]+0x00000004u); // 804E61C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E61C8
  c->r[0]=R32(c->r[24]+0x00000008u); // 804E61CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804E61D0
L_804E61D4:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E61D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E61D8
  if (!crb(c,2)) { goto L_804E620C; } // 804E61DC
  c->r[23]=0u+0x80830000u; // 804E61E0
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E61E4
  c->lr=0x804E61ECu; f_804E4D58(c); // 804E61E8
  c->r[4]=0u+0x804E0000u; // 804E61EC
  c->r[5]=0u+0x80830000u; // 804E61F0
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E61F4
  c->r[4]=c->r[4]+0x000052DCu; // 804E61F8
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E61FC
  c->lr=0x804E6204u; f_803A92B8(c); // 804E6200
  c->r[0]=0u+0x00000001u; // 804E6204
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E6208
L_804E620C:;
  c->r[24]=0u+0x80830000u; // 804E620C
  c->r[24]=c->r[24]+0xFFFF8568u; // 804E6210
  c->r[23]=c->r[24]+c->r[29]; // 804E6214
  c->r[0]=R8(c->r[23]+0x000000F0u); // 804E6218
  cmps(c,0,(int32_t)c->r[0],0); // 804E621C
  if (crb(c,2)) { goto L_804E62E8; } // 804E6220
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6224
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6228
  if (!crb(c,2)) { goto L_804E6258; } // 804E622C
  c->r[3]=c->r[24]|c->r[24]; // 804E6230
  c->lr=0x804E6238u; f_804E4D58(c); // 804E6234
  c->r[4]=0u+0x804E0000u; // 804E6238
  c->r[5]=0u+0x80830000u; // 804E623C
  c->r[3]=c->r[24]|c->r[24]; // 804E6240
  c->r[4]=c->r[4]+0x000052DCu; // 804E6244
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E6248
  c->lr=0x804E6250u; f_803A92B8(c); // 804E624C
  c->r[0]=0u+0x00000001u; // 804E6250
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E6254
L_804E6258:;
  c->r[3]=R8(c->r[23]+0x000000F0u); // 804E6258
  c->r[24]=c->r[1]+0x00000008u; // 804E625C
  c->r[25]=0u+0x00000000u; // 804E6260
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804E6264
  W8(c->r[23]+0x000000F0u,c->r[0]); // 804E6268
  goto L_804E6288; // 804E626C
L_804E6270:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 804E6270
  c->r[4]=0u+0x00000000u; // 804E6274
  c->r[5]=0u+0x00000180u; // 804E6278
  c->lr=0x804E6280u; f_800043EC(c); // 804E627C
  c->r[24]=c->r[24]+0x00000004u; // 804E6280
  c->r[25]=c->r[25]+0x00000001u; // 804E6284
L_804E6288:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[30]); // 804E6288
  if (crb(c,0)) { IRQCHK(c); goto L_804E6270; } // 804E628C
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6290
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6294
  if (!crb(c,2)) { goto L_804E62C8; } // 804E6298
  c->r[23]=0u+0x80830000u; // 804E629C
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E62A0
  c->lr=0x804E62A8u; f_804E4D58(c); // 804E62A4
  c->r[4]=0u+0x804E0000u; // 804E62A8
  c->r[5]=0u+0x80830000u; // 804E62AC
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E62B0
  c->r[4]=c->r[4]+0x000052DCu; // 804E62B4
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E62B8
  c->lr=0x804E62C0u; f_803A92B8(c); // 804E62BC
  c->r[0]=0u+0x00000001u; // 804E62C0
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E62C4
L_804E62C8:;
  c->lr=0x804E62CCu; f_8037FD30(c); // 804E62C8
  c->r[4]=0u+0x80830000u; // 804E62CC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804E62D0
  c->r[4]=c->r[4]+0xFFFF8568u; // 804E62D4
  c->r[5]=c->r[3]-c->r[31]; // 804E62D8
  c->r[3]=c->r[4]+c->r[0]; // 804E62DC
  W32(c->r[3]+0x000000F4u,c->r[5]); // 804E62E0
  goto L_804E64E8; // 804E62E4
L_804E62E8:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E62E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E62EC
  if (!crb(c,2)) { goto L_804E631C; } // 804E62F0
  c->r[3]=c->r[24]|c->r[24]; // 804E62F4
  c->lr=0x804E62FCu; f_804E4D58(c); // 804E62F8
  c->r[4]=0u+0x804E0000u; // 804E62FC
  c->r[5]=0u+0x80830000u; // 804E6300
  c->r[3]=c->r[24]|c->r[24]; // 804E6304
  c->r[4]=c->r[4]+0x000052DCu; // 804E6308
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E630C
  c->lr=0x804E6314u; f_803A92B8(c); // 804E6310
  c->r[0]=0u+0x00000001u; // 804E6314
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E6318
L_804E631C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 804E631C
  c->r[24]=0u+0x80830000u; // 804E6320
  c->r[24]=c->r[24]+0xFFFF8568u; // 804E6324
  c->r[23]=c->r[24]+c->r[0]; // 804E6328
  c->r[0]=R32(c->r[23]+0x000000B4u); // 804E632C
  cmps(c,0,(int32_t)c->r[0],0); // 804E6330
  if (!crb(c,2)) { goto L_804E63BC; } // 804E6334
  c->r[23]=c->r[1]+0x00000008u; // 804E6338
  c->r[24]=0u+0x00000000u; // 804E633C
  goto L_804E635C; // 804E6340
L_804E6344:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 804E6344
  c->r[4]=0u+0x00000000u; // 804E6348
  c->r[5]=0u+0x00000180u; // 804E634C
  c->lr=0x804E6354u; f_800043EC(c); // 804E6350
  c->r[23]=c->r[23]+0x00000004u; // 804E6354
  c->r[24]=c->r[24]+0x00000001u; // 804E6358
L_804E635C:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[30]); // 804E635C
  if (crb(c,0)) { IRQCHK(c); goto L_804E6344; } // 804E6360
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6364
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6368
  if (!crb(c,2)) { goto L_804E639C; } // 804E636C
  c->r[23]=0u+0x80830000u; // 804E6370
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6374
  c->lr=0x804E637Cu; f_804E4D58(c); // 804E6378
  c->r[4]=0u+0x804E0000u; // 804E637C
  c->r[5]=0u+0x80830000u; // 804E6380
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6384
  c->r[4]=c->r[4]+0x000052DCu; // 804E6388
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E638C
  c->lr=0x804E6394u; f_803A92B8(c); // 804E6390
  c->r[0]=0u+0x00000001u; // 804E6394
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E6398
L_804E639C:;
  c->lr=0x804E63A0u; f_8037FD30(c); // 804E639C
  c->r[4]=0u+0x80830000u; // 804E63A0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804E63A4
  c->r[4]=c->r[4]+0xFFFF8568u; // 804E63A8
  c->r[5]=c->r[3]-c->r[31]; // 804E63AC
  c->r[3]=c->r[4]+c->r[0]; // 804E63B0
  W32(c->r[3]+0x000000F4u,c->r[5]); // 804E63B4
  goto L_804E64E8; // 804E63B8
L_804E63BC:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E63BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E63C0
  if (!crb(c,2)) { goto L_804E63F0; } // 804E63C4
  c->r[3]=c->r[24]|c->r[24]; // 804E63C8
  c->lr=0x804E63D0u; f_804E4D58(c); // 804E63CC
  c->r[4]=0u+0x804E0000u; // 804E63D0
  c->r[5]=0u+0x80830000u; // 804E63D4
  c->r[3]=c->r[24]|c->r[24]; // 804E63D8
  c->r[4]=c->r[4]+0x000052DCu; // 804E63DC
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E63E0
  c->lr=0x804E63E8u; f_803A92B8(c); // 804E63E4
  c->r[0]=0u+0x00000001u; // 804E63E8
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E63EC
L_804E63F0:;
  c->r[28]=R32(c->r[23]+0x000000B8u); // 804E63F0
  c->r[27]=c->r[23]+0x000000B8u; // 804E63F4
  c->r[23]=0u+0x80830000u; // 804E63F8
  c->r[24]=0u+0x804E0000u; // 804E63FC
  c->r[25]=0u+0x80830000u; // 804E6400
  c->r[26]=0u+0x00000001u; // 804E6404
  goto L_804E6464; // 804E6408
L_804E640C:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E640C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6410
  if (!crb(c,2)) { goto L_804E6434; } // 804E6414
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6418
  c->lr=0x804E6420u; f_804E4D58(c); // 804E641C
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6420
  c->r[4]=c->r[24]+0x000052DCu; // 804E6424
  c->r[5]=c->r[25]+0xFFFF855Cu; // 804E6428
  c->lr=0x804E6430u; f_803A92B8(c); // 804E642C
  W8(c->r[13]+0xFFFFE4E4u,c->r[26]); // 804E6430
L_804E6434:;
  c->r[12]=R32(c->r[28]+0xFFFFFFFCu); // 804E6434
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 804E6438
  c->r[4]=c->r[30]|c->r[30]; // 804E643C
  c->r[5]=c->r[1]+0x00000008u; // 804E6440
  c->r[12]=R32(c->r[12]+0x00000014u); // 804E6444
  c->r[6]=0u+0x00000180u; // 804E6448
  {uint32_t ea=c->r[2]+0x00001914u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E644C
  c->r[7]=0u+0x00000000u; // 804E6450
  c->r[8]=R32(c->r[23]+0xFFFF8568u); // 804E6454
  c->ctr=c->r[12]; // 804E6458
  if (true) { c->lr=0x804E6460u; dispatch(c,c->ctr); } // 804E645C
  c->r[28]=R32(c->r[28]+0x00000000u); // 804E6460
L_804E6464:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6464
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6468
  if (!crb(c,2)) { goto L_804E648C; } // 804E646C
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6470
  c->lr=0x804E6478u; f_804E4D58(c); // 804E6474
  c->r[3]=c->r[23]+0xFFFF8568u; // 804E6478
  c->r[4]=c->r[24]+0x000052DCu; // 804E647C
  c->r[5]=c->r[25]+0xFFFF855Cu; // 804E6480
  c->lr=0x804E6488u; f_803A92B8(c); // 804E6484
  W8(c->r[13]+0xFFFFE4E4u,c->r[26]); // 804E6488
L_804E648C:;
  cmpu(c,0,c->r[28],c->r[27]); // 804E648C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E640C; } // 804E6490
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E6494
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E6498
  if (!crb(c,2)) { goto L_804E64CC; } // 804E649C
  c->r[28]=0u+0x80830000u; // 804E64A0
  c->r[3]=c->r[28]+0xFFFF8568u; // 804E64A4
  c->lr=0x804E64ACu; f_804E4D58(c); // 804E64A8
  c->r[4]=0u+0x804E0000u; // 804E64AC
  c->r[5]=0u+0x80830000u; // 804E64B0
  c->r[3]=c->r[28]+0xFFFF8568u; // 804E64B4
  c->r[4]=c->r[4]+0x000052DCu; // 804E64B8
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E64BC
  c->lr=0x804E64C4u; f_803A92B8(c); // 804E64C0
  c->r[0]=0u+0x00000001u; // 804E64C4
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E64C8
L_804E64CC:;
  c->lr=0x804E64D0u; f_8037FD30(c); // 804E64CC
  c->r[4]=0u+0x80830000u; // 804E64D0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 804E64D4
  c->r[4]=c->r[4]+0xFFFF8568u; // 804E64D8
  c->r[5]=c->r[3]-c->r[31]; // 804E64DC
  c->r[3]=c->r[4]+c->r[0]; // 804E64E0
  W32(c->r[3]+0x000000F4u,c->r[5]); // 804E64E4
L_804E64E8:;
  c->r[11]=c->r[1]+0x00000040u; // 804E64E8
  c->lr=0x804E64F0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E64EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E64F0
  c->lr=c->r[0]; // 804E64F4
  c->r[1]=c->r[1]+0x00000040u; // 804E64F8
  return; // 804E64FC
}

// PrepareReset__Q44nw4r3snd6detail9AxManagerFv
void f_804E6500(Ctx* __restrict c) {
  trace_call(0x804E6500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6500
  c->r[0]=c->lr; // 804E6504
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6508
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E650C
  c->r[31]=c->r[3]|c->r[3]; // 804E6510
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 804E6514
  cmps(c,0,(int32_t)c->r[0],0); // 804E6518
  if (!crb(c,2)) { goto L_804E65B4; } // 804E651C
  c->r[5]=R32(c->r[3]+0x00000044u); // 804E6520
  c->r[0]=R32(c->r[3]+0x00000048u); // 804E6524
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804E6528
  if (crb(c,0)) { goto L_804E6538; } // 804E652C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E6530
  goto L_804E6580; // 804E6534
L_804E6538:;
  c->r[4]=0u+0x43300000u; // 804E6538
  c->r[0]=c->r[0]^0x80000000u; // 804E653C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E6540
  c->r[0]=c->r[5]^0x80000000u; // 804E6544
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E6548
  W32(c->r[1]+0x00000008u,c->r[4]); // 804E654C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E6550
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E6554
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E6558
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804E655C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6560
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E6564
  W32(c->r[1]+0x00000010u,c->r[4]); // 804E6568
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E656C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E6570
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E6574
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E6578
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E657C
L_804E6580:;
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E6580
  c->r[6]=0u+0x00000003u; // 804E6584
  c->r[5]=0u+0x00000000u; // 804E6588
  c->r[0]=0u+0xFFFFFFFFu; // 804E658C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 804E6590
  c->r[4]=0u+0x804E0000u; // 804E6594
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804E6598
  W32(c->r[3]+0x00000044u,c->r[6]); // 804E659C
  W32(c->r[3]+0x00000048u,c->r[5]); // 804E65A0
  W32(c->r[3]+0x00000050u,c->r[0]); // 804E65A4
  c->r[3]=c->r[4]+0x000065C8u; // 804E65A8
  c->lr=0x804E65B0u; f_80393510(c); // 804E65AC
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 804E65B0
L_804E65B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E65B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E65B8
  c->lr=c->r[0]; // 804E65BC
  c->r[1]=c->r[1]+0x00000020u; // 804E65C0
  return; // 804E65C4
}

// AiDmaCallbackFunc__Q44nw4r3snd6detail9AxManagerFv
void f_804E65C8(Ctx* __restrict c) {
  trace_call(0x804E65C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E65C8
  c->r[0]=c->lr; // 804E65CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E65D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E65D4
  c->r[0]=R8(c->r[13]+0xFFFFE4E4u); // 804E65D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E65DC
  if (!crb(c,2)) { goto L_804E6610; } // 804E65E0
  c->r[31]=0u+0x80830000u; // 804E65E4
  c->r[3]=c->r[31]+0xFFFF8568u; // 804E65E8
  c->lr=0x804E65F0u; f_804E4D58(c); // 804E65EC
  c->r[4]=0u+0x804E0000u; // 804E65F0
  c->r[5]=0u+0x80830000u; // 804E65F4
  c->r[3]=c->r[31]+0xFFFF8568u; // 804E65F8
  c->r[4]=c->r[4]+0x000052DCu; // 804E65FC
  c->r[5]=c->r[5]+0xFFFF855Cu; // 804E6600
  c->lr=0x804E6608u; f_803A92B8(c); // 804E6604
  c->r[0]=0u+0x00000001u; // 804E6608
  W8(c->r[13]+0xFFFFE4E4u,c->r[0]); // 804E660C
L_804E6610:;
  c->r[31]=0u+0x80830000u; // 804E6610
  c->r[31]=c->r[31]+0xFFFF8568u; // 804E6614
  c->r[12]=R32(c->r[31]+0x0000004Cu); // 804E6618
  c->ctr=c->r[12]; // 804E661C
  if (true) { c->lr=0x804E6624u; dispatch(c,c->ctr); } // 804E6620
  c->r[0]=R8(c->r[13]+0xFFFFE4E5u); // 804E6624
  cmps(c,0,(int32_t)c->r[0],0); // 804E6628
  if (crb(c,2)) { goto L_804E6650; } // 804E662C
  c->r[0]=R32(c->r[31]+0x00000050u); // 804E6630
  cmps(c,0,(int32_t)c->r[0],0); // 804E6634
  if (!crb(c,0)) { goto L_804E66C4; } // 804E6638
  c->r[3]=0u+0x00000000u; // 804E663C
  c->lr=0x804E6644u; f_80396D34(c); // 804E6640
  c->r[0]=0u+0x00000006u; // 804E6644
  W32(c->r[31]+0x00000050u,c->r[0]); // 804E6648
  goto L_804E66C4; // 804E664C
L_804E6650:;
  c->r[4]=R32(c->r[31]+0x00000044u); // 804E6650
  c->r[0]=R32(c->r[31]+0x00000048u); // 804E6654
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E6658
  if (crb(c,0)) { goto L_804E6668; } // 804E665C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E6660
  goto L_804E66B0; // 804E6664
L_804E6668:;
  c->r[3]=0u+0x43300000u; // 804E6668
  c->r[0]=c->r[0]^0x80000000u; // 804E666C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E6670
  c->r[0]=c->r[4]^0x80000000u; // 804E6674
  {uint32_t ea=c->r[2]+0x00001908u; c->f[4]=RF64(ea);} // 804E6678
  W32(c->r[1]+0x00000008u,c->r[3]); // 804E667C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E6680
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804E6684
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804E6688
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804E668C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6690
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804E6694
  W32(c->r[1]+0x00000010u,c->r[3]); // 804E6698
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804E669C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804E66A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804E66A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E66A8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804E66AC
L_804E66B0:;
  {uint32_t ea=c->r[2]+0x00001900u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E66B0
  fcmp(c,0,c->f[0],c->f[1]); // 804E66B4
  if (!crb(c,2)) { goto L_804E66C4; } // 804E66B8
  c->r[0]=0u+0x00000001u; // 804E66BC
  W8(c->r[13]+0xFFFFE4E5u,c->r[0]); // 804E66C0
L_804E66C4:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 804E66C4
  cmps(c,0,(int32_t)c->r[0],0); // 804E66C8
  if (!crb(c,1)) { goto L_804E66DC; } // 804E66CC
  c->r[3]=R32(c->r[31]+0x00000050u); // 804E66D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804E66D4
  W32(c->r[31]+0x00000050u,c->r[0]); // 804E66D8
L_804E66DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E66DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E66E0
  c->lr=c->r[0]; // 804E66E4
  c->r[1]=c->r[1]+0x00000020u; // 804E66E8
  return; // 804E66EC
}

// fn_804E66F0
void f_804E66F0(Ctx* __restrict c) {
  trace_call(0x804E66F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E66F0
  c->r[0]=c->lr; // 804E66F4
  c->r[3]=0u+0x80720000u; // 804E66F8
  c->r[4]=0u+0x804E0000u; // 804E66FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6700
  c->r[3]=c->r[3]+0xFFFFB510u; // 804E6704
  c->r[4]=c->r[4]+0x000067BCu; // 804E6708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E670C
  c->r[31]=0u+0x80830000u; // 804E6710
  c->r[31]=c->r[31]+0xFFFF8220u; // 804E6714
  W32(c->r[13]+0xFFFFE4D0u,c->r[3]); // 804E6718
  c->r[3]=c->r[13]+0xFFFFE4D0u; // 804E671C
  c->r[5]=c->r[31]+0x00000300u; // 804E6720
  c->lr=0x804E6728u; f_803A92B8(c); // 804E6724
  c->r[3]=0u+0x80720000u; // 804E6728
  c->r[4]=0u+0x804E0000u; // 804E672C
  c->r[3]=c->r[3]+0xFFFFB500u; // 804E6730
  c->r[5]=c->r[31]+0x0000030Cu; // 804E6734
  W32(c->r[13]+0xFFFFE4D4u,c->r[3]); // 804E6738
  c->r[4]=c->r[4]+0x000067FCu; // 804E673C
  c->r[3]=c->r[13]+0xFFFFE4D4u; // 804E6740
  c->lr=0x804E6748u; f_803A92B8(c); // 804E6744
  c->r[3]=0u+0x80720000u; // 804E6748
  c->r[4]=0u+0x804E0000u; // 804E674C
  c->r[3]=c->r[3]+0xFFFFB4F0u; // 804E6750
  c->r[5]=c->r[31]+0x00000318u; // 804E6754
  W32(c->r[13]+0xFFFFE4D8u,c->r[3]); // 804E6758
  c->r[4]=c->r[4]+0x0000683Cu; // 804E675C
  c->r[3]=c->r[13]+0xFFFFE4D8u; // 804E6760
  c->lr=0x804E6768u; f_803A92B8(c); // 804E6764
  c->r[3]=0u+0x80720000u; // 804E6768
  c->r[4]=0u+0x804E0000u; // 804E676C
  c->r[3]=c->r[3]+0xFFFFB4E0u; // 804E6770
  c->r[5]=c->r[31]+0x00000324u; // 804E6774
  W32(c->r[13]+0xFFFFE4DCu,c->r[3]); // 804E6778
  c->r[4]=c->r[4]+0x0000687Cu; // 804E677C
  c->r[3]=c->r[13]+0xFFFFE4DCu; // 804E6780
  c->lr=0x804E6788u; f_803A92B8(c); // 804E6784
  c->r[3]=0u+0x80720000u; // 804E6788
  c->r[4]=0u+0x804E0000u; // 804E678C
  c->r[3]=c->r[3]+0xFFFFB4D0u; // 804E6790
  c->r[5]=c->r[31]+0x00000330u; // 804E6794
  W32(c->r[13]+0xFFFFE4E0u,c->r[3]); // 804E6798
  c->r[4]=c->r[4]+0x000068BCu; // 804E679C
  c->r[3]=c->r[13]+0xFFFFE4E0u; // 804E67A0
  c->lr=0x804E67A8u; f_803A92B8(c); // 804E67A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E67A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E67AC
  c->lr=c->r[0]; // 804E67B0
  c->r[1]=c->r[1]+0x00000010u; // 804E67B4
  return; // 804E67B8
}

// fn_804E67BC
void f_804E67BC(Ctx* __restrict c) {
  trace_call(0x804E67BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E67BC
  c->r[0]=c->lr; // 804E67C0
  cmps(c,0,(int32_t)c->r[3],0); // 804E67C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E67C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E67CC
  c->r[31]=c->r[3]|c->r[3]; // 804E67D0
  if (crb(c,2)) { goto L_804E67E4; } // 804E67D4
  cmps(c,0,(int32_t)c->r[4],0); // 804E67D8
  if (!crb(c,1)) { goto L_804E67E4; } // 804E67DC
  c->lr=0x804E67E4u; f_803A9400(c); // 804E67E0
L_804E67E4:;
  c->r[3]=c->r[31]|c->r[31]; // 804E67E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E67E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E67EC
  c->lr=c->r[0]; // 804E67F0
  c->r[1]=c->r[1]+0x00000010u; // 804E67F4
  return; // 804E67F8
}

// fn_804E67FC
void f_804E67FC(Ctx* __restrict c) {
  trace_call(0x804E67FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E67FC
  c->r[0]=c->lr; // 804E6800
  cmps(c,0,(int32_t)c->r[3],0); // 804E6804
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E680C
  c->r[31]=c->r[3]|c->r[3]; // 804E6810
  if (crb(c,2)) { goto L_804E6824; } // 804E6814
  cmps(c,0,(int32_t)c->r[4],0); // 804E6818
  if (!crb(c,1)) { goto L_804E6824; } // 804E681C
  c->lr=0x804E6824u; f_803A9400(c); // 804E6820
L_804E6824:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E6828
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E682C
  c->lr=c->r[0]; // 804E6830
  c->r[1]=c->r[1]+0x00000010u; // 804E6834
  return; // 804E6838
}

// fn_804E683C
void f_804E683C(Ctx* __restrict c) {
  trace_call(0x804E683Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E683C
  c->r[0]=c->lr; // 804E6840
  cmps(c,0,(int32_t)c->r[3],0); // 804E6844
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E684C
  c->r[31]=c->r[3]|c->r[3]; // 804E6850
  if (crb(c,2)) { goto L_804E6864; } // 804E6854
  cmps(c,0,(int32_t)c->r[4],0); // 804E6858
  if (!crb(c,1)) { goto L_804E6864; } // 804E685C
  c->lr=0x804E6864u; f_803A9400(c); // 804E6860
L_804E6864:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E6868
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E686C
  c->lr=c->r[0]; // 804E6870
  c->r[1]=c->r[1]+0x00000010u; // 804E6874
  return; // 804E6878
}

// fn_804E687C
void f_804E687C(Ctx* __restrict c) {
  trace_call(0x804E687Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E687C
  c->r[0]=c->lr; // 804E6880
  cmps(c,0,(int32_t)c->r[3],0); // 804E6884
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E6888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E688C
  c->r[31]=c->r[3]|c->r[3]; // 804E6890
  if (crb(c,2)) { goto L_804E68A4; } // 804E6894
  cmps(c,0,(int32_t)c->r[4],0); // 804E6898
  if (!crb(c,1)) { goto L_804E68A4; } // 804E689C
  c->lr=0x804E68A4u; f_803A9400(c); // 804E68A0
L_804E68A4:;
  c->r[3]=c->r[31]|c->r[31]; // 804E68A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E68A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E68AC
  c->lr=c->r[0]; // 804E68B0
  c->r[1]=c->r[1]+0x00000010u; // 804E68B4
  return; // 804E68B8
}

// fn_804E68BC
void f_804E68BC(Ctx* __restrict c) {
  trace_call(0x804E68BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E68BC
  c->r[0]=c->lr; // 804E68C0
  cmps(c,0,(int32_t)c->r[3],0); // 804E68C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E68C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E68CC
  c->r[31]=c->r[3]|c->r[3]; // 804E68D0
  if (crb(c,2)) { goto L_804E68E4; } // 804E68D4
  cmps(c,0,(int32_t)c->r[4],0); // 804E68D8
  if (!crb(c,1)) { goto L_804E68E4; } // 804E68DC
  c->lr=0x804E68E4u; f_803A9400(c); // 804E68E0
L_804E68E4:;
  c->r[3]=c->r[31]|c->r[31]; // 804E68E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E68E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E68EC
  c->lr=c->r[0]; // 804E68F0
  c->r[1]=c->r[1]+0x00000010u; // 804E68F4
  return; // 804E68F8
}

// __ct__Q44nw4r3snd6detail7AxVoiceFv
void f_804E68FC(Ctx* __restrict c) {
  trace_call(0x804E68FCu);
  c->r[4]=0u+0x00010000u; // 804E68FC
  c->r[5]=0u+0x00000000u; // 804E6900
  c->r[0]=c->r[4]+0xFFFF8000u; // 804E6904
  W32(c->r[3]+0x00000000u,c->r[5]); // 804E6908
  W16(c->r[3]+0x00000008u,c->r[0]); // 804E690C
  W32(c->r[3]+0x00000004u,c->r[5]); // 804E6910
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 804E6914
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 804E6918
  W16(c->r[3]+0x0000000Au,c->r[5]); // 804E691C
  W32(c->r[3]+0x00000010u,c->r[5]); // 804E6920
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 804E6924
  W8(c->r[3]+0x0000001Du,c->r[5]); // 804E6928
  W32(c->r[3]+0x00000038u,c->r[5]); // 804E692C
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 804E6930
  W32(c->r[3]+0x00000040u,c->r[5]); // 804E6934
  W32(c->r[3]+0x00000044u,c->r[5]); // 804E6938
  return; // 804E693C
}

// __dt__Q44nw4r3snd6detail7AxVoiceFv
void f_804E6940(Ctx* __restrict c) {
  trace_call(0x804E6940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6940
  c->r[0]=c->lr; // 804E6944
  cmps(c,0,(int32_t)c->r[3],0); // 804E6948
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E694C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E6950
  c->r[31]=c->r[3]|c->r[3]; // 804E6954
  if (crb(c,2)) { goto L_804E6968; } // 804E6958
  cmps(c,0,(int32_t)c->r[4],0); // 804E695C
  if (!crb(c,1)) { goto L_804E6968; } // 804E6960
  c->lr=0x804E6968u; f_803A9400(c); // 804E6964
L_804E6968:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6968
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E696C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E6970
  c->lr=c->r[0]; // 804E6974
  c->r[1]=c->r[1]+0x00000010u; // 804E6978
  return; // 804E697C
}

// Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ54nw4r3snd6detail7AxVoice6Formati
void f_804E6980(Ctx* __restrict c) {
  trace_call(0x804E6980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6980
  c->r[0]=c->lr; // 804E6984
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6988
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E698C
  c->r[31]=c->r[4]|c->r[4]; // 804E6990
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E6994
  c->r[30]=c->r[6]|c->r[6]; // 804E6998
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E699C
  c->r[29]=c->r[5]|c->r[5]; // 804E69A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 804E69A4
  c->r[28]=c->r[3]|c->r[3]; // 804E69A8
  c->lr=0x804E69B0u; f_8037BBA4(c); // 804E69AC
  W32(c->r[28]+0x00000010u,c->r[31]); // 804E69B0
  c->r[31]=c->r[3]|c->r[3]; // 804E69B4
  c->r[3]=c->r[28]+0x0000001Eu; // 804E69B8
  c->r[4]=0u+0x00000000u; // 804E69BC
  W32(c->r[28]+0x00000014u,c->r[29]); // 804E69C0
  c->r[5]=0u+0x00000018u; // 804E69C4
  W32(c->r[28]+0x00000018u,c->r[30]); // 804E69C8
  c->lr=0x804E69D0u; f_800043EC(c); // 804E69CC
  c->r[0]=0u+0x00000001u; // 804E69D0
  c->r[3]=c->r[31]|c->r[31]; // 804E69D4
  W8(c->r[28]+0x0000001Cu,c->r[0]); // 804E69D8
  c->lr=0x804E69E0u; f_8037BBCC(c); // 804E69DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E69E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E69E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E69E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E69EC
  c->r[28]=R32(c->r[1]+0x00000010u); // 804E69F0
  c->lr=c->r[0]; // 804E69F4
  c->r[1]=c->r[1]+0x00000020u; // 804E69F8
  return; // 804E69FC
}

// IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
void f_804E6A00(Ctx* __restrict c) {
  trace_call(0x804E6A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6A00
  c->r[0]=c->lr; // 804E6A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6A08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E6A0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E6A10
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E6A14
  c->r[29]=c->r[3]|c->r[3]; // 804E6A18
  c->lr=0x804E6A20u; f_8037BBA4(c); // 804E6A1C
  c->r[0]=R32(c->r[29]+0x00000010u); // 804E6A20
  c->r[31]=c->r[3]|c->r[3]; // 804E6A24
  cmps(c,0,(int32_t)c->r[0],0); // 804E6A28
  if (!crb(c,2)) { goto L_804E6A3C; } // 804E6A2C
  c->lr=0x804E6A34u; f_8037BBCC(c); // 804E6A30
  c->r[3]=0u+0x00000000u; // 804E6A34
  goto L_804E6B2C; // 804E6A38
L_804E6A3C:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E6A3C
  cmps(c,0,(int32_t)c->r[4],0); // 804E6A40
  if (crb(c,2)) { goto L_804E6A5C; } // 804E6A44
  c->r[3]=R16(c->r[4]+0x000000A2u); // 804E6A48
  c->r[0]=R16(c->r[4]+0x000000A4u); // 804E6A4C
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 804E6A50
  c->r[30]=c->r[3]+c->r[0]; // 804E6A54
  goto L_804E6A60; // 804E6A58
L_804E6A5C:;
  c->r[30]=0u+0x00000000u; // 804E6A5C
L_804E6A60:;
  c->lr=0x804E6A64u; f_804E5278(c); // 804E6A60
  c->lr=0x804E6A68u; f_804E58B0(c); // 804E6A64
  cmps(c,0,(int32_t)c->r[3],0); // 804E6A68
  c->r[0]=R32(c->r[29]+0x00000014u); // 804E6A6C
  if (crb(c,2)) { goto L_804E6A78; } // 804E6A70
  c->r[3]=c->r[3]+0x80000000u; // 804E6A74
L_804E6A78:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E6A78
  c->r[4]=0u+0x00000000u; // 804E6A7C
  if (crb(c,2)) { goto L_804E6AA8; } // 804E6A80
  if (!crb(c,0)) { goto L_804E6A94; } // 804E6A84
  cmps(c,0,(int32_t)c->r[0],1); // 804E6A88
  if (!crb(c,0)) { goto L_804E6AB0; } // 804E6A8C
  goto L_804E6AB4; // 804E6A90
L_804E6A94:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6A94
  if (!crb(c,0)) { goto L_804E6AB4; } // 804E6A98
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E6A9C
  c->r[4]=c->r[3]+0x00000002u; // 804E6AA0
  goto L_804E6AB4; // 804E6AA4
L_804E6AA8:;
  c->r[4]=c->r[3]|c->r[3]; // 804E6AA8
  goto L_804E6AB4; // 804E6AAC
L_804E6AB0:;
  c->r[4]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E6AB0
L_804E6AB4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 804E6AB4
  cmps(c,0,(int32_t)c->r[0],2); // 804E6AB8
  if (crb(c,2)) { goto L_804E6AE0; } // 804E6ABC
  if (!crb(c,0)) { goto L_804E6AD0; } // 804E6AC0
  cmps(c,0,(int32_t)c->r[0],1); // 804E6AC4
  if (!crb(c,0)) { goto L_804E6AE8; } // 804E6AC8
  goto L_804E6AF0; // 804E6ACC
L_804E6AD0:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6AD0
  if (!crb(c,0)) { goto L_804E6AF0; } // 804E6AD4
  c->r[0]=c->r[4]+0x00000200u; // 804E6AD8
  goto L_804E6B00; // 804E6ADC
L_804E6AE0:;
  c->r[0]=c->r[4]+0x00000100u; // 804E6AE0
  goto L_804E6B00; // 804E6AE4
L_804E6AE8:;
  c->r[0]=c->r[4]+0x00000080u; // 804E6AE8
  goto L_804E6B00; // 804E6AEC
L_804E6AF0:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6AF0
  c->lr=0x804E6AF8u; f_8037BBCC(c); // 804E6AF4
  c->r[3]=0u+0x00000000u; // 804E6AF8
  goto L_804E6B2C; // 804E6AFC
L_804E6B00:;
  cmpu(c,0,c->r[4],c->r[30]); // 804E6B00
  if (crb(c,1)) { goto L_804E6B20; } // 804E6B04
  cmpu(c,0,c->r[30],c->r[0]); // 804E6B08
  if (!crb(c,0)) { goto L_804E6B20; } // 804E6B0C
  c->r[3]=c->r[31]|c->r[31]; // 804E6B10
  c->lr=0x804E6B18u; f_8037BBCC(c); // 804E6B14
  c->r[3]=0u+0x00000001u; // 804E6B18
  goto L_804E6B2C; // 804E6B1C
L_804E6B20:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6B20
  c->lr=0x804E6B28u; f_8037BBCC(c); // 804E6B24
  c->r[3]=0u+0x00000000u; // 804E6B28
L_804E6B2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E6B2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E6B30
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E6B34
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E6B38
  c->lr=c->r[0]; // 804E6B3C
  c->r[1]=c->r[1]+0x00000020u; // 804E6B40
  return; // 804E6B44
}

// SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_804E6B48(Ctx* __restrict c) {
  trace_call(0x804E6B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6B48
  c->r[0]=c->lr; // 804E6B4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6B50
  c->r[11]=c->r[1]+0x00000020u; // 804E6B54
  c->lr=0x804E6B5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E6B58
  c->r[31]=c->r[3]|c->r[3]; // 804E6B5C
  c->r[27]=c->r[4]|c->r[4]; // 804E6B60
  c->r[28]=c->r[5]|c->r[5]; // 804E6B64
  c->lr=0x804E6B6Cu; f_8037BBA4(c); // 804E6B68
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E6B6C
  c->r[30]=c->r[3]|c->r[3]; // 804E6B70
  cmps(c,0,(int32_t)c->r[0],0); // 804E6B74
  if (!crb(c,2)) { goto L_804E6B84; } // 804E6B78
  c->lr=0x804E6B80u; f_8037BBCC(c); // 804E6B7C
  goto L_804E6C50; // 804E6B80
L_804E6B84:;
  cmps(c,0,(int32_t)c->r[27],0); // 804E6B84
  c->r[0]=R32(c->r[31]+0x00000014u); // 804E6B88
  if (crb(c,2)) { goto L_804E6B94; } // 804E6B8C
  c->r[27]=c->r[27]+0x80000000u; // 804E6B90
L_804E6B94:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E6B94
  c->r[29]=0u+0x00000000u; // 804E6B98
  if (crb(c,2)) { goto L_804E6BF4; } // 804E6B9C
  if (!crb(c,0)) { goto L_804E6BB0; } // 804E6BA0
  cmps(c,0,(int32_t)c->r[0],1); // 804E6BA4
  if (!crb(c,0)) { goto L_804E6BFC; } // 804E6BA8
  goto L_804E6C04; // 804E6BAC
L_804E6BB0:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6BB0
  if (!crb(c,0)) { goto L_804E6C04; } // 804E6BB4
  c->r[3]=0u+0x24920000u; // 804E6BB8
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 804E6BBC
  c->r[3]=c->r[3]+0x00004925u; // 804E6BC0
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 804E6BC4
  c->r[3]=c->r[28]-c->r[4]; // 804E6BC8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E6BCC
  c->r[4]=c->r[3]+c->r[4]; // 804E6BD0
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 804E6BD4
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 804E6BD8
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 804E6BDC
  c->r[4]=c->r[28]-c->r[5]; // 804E6BE0
  c->r[0]=c->r[4]+c->r[0]; // 804E6BE4
  c->r[29]=c->r[0]+c->r[3]; // 804E6BE8
  c->r[29]=c->r[29]+0x00000002u; // 804E6BEC
  goto L_804E6C04; // 804E6BF0
L_804E6BF4:;
  c->r[29]=c->r[27]+c->r[28]; // 804E6BF4
  goto L_804E6C04; // 804E6BF8
L_804E6BFC:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 804E6BFC
  c->r[29]=c->r[0]+c->r[28]; // 804E6C00
L_804E6C04:;
  c->lr=0x804E6C08u; f_8037BBA4(c); // 804E6C04
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E6C08
  cmps(c,0,(int32_t)c->r[4],0); // 804E6C0C
  if (!crb(c,2)) { goto L_804E6C1C; } // 804E6C10
  c->lr=0x804E6C18u; f_8037BBCC(c); // 804E6C14
  goto L_804E6C48; // 804E6C18
L_804E6C1C:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 804E6C1C
  W16(c->r[4]+0x0000009Au,c->r[0]); // 804E6C20
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E6C24
  W16(c->r[4]+0x0000009Cu,c->r[29]); // 804E6C28
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E6C2C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6C30
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6C34
  if (!crb(c,2)) { goto L_804E6C44; } // 804E6C38
  c->r[0]=c->r[4]|0x00001000u; // 804E6C3C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E6C40
L_804E6C44:;
  c->lr=0x804E6C48u; f_8037BBCC(c); // 804E6C44
L_804E6C48:;
  c->r[3]=c->r[30]|c->r[30]; // 804E6C48
  c->lr=0x804E6C50u; f_8037BBCC(c); // 804E6C4C
L_804E6C50:;
  c->r[11]=c->r[1]+0x00000020u; // 804E6C50
  c->lr=0x804E6C58u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E6C54
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E6C58
  c->lr=c->r[0]; // 804E6C5C
  c->r[1]=c->r[1]+0x00000020u; // 804E6C60
  return; // 804E6C64
}

// SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_804E6C68(Ctx* __restrict c) {
  trace_call(0x804E6C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6C68
  c->r[0]=c->lr; // 804E6C6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6C70
  c->r[11]=c->r[1]+0x00000020u; // 804E6C74
  c->lr=0x804E6C7Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E6C78
  c->r[31]=c->r[3]|c->r[3]; // 804E6C7C
  c->r[27]=c->r[4]|c->r[4]; // 804E6C80
  c->r[28]=c->r[5]|c->r[5]; // 804E6C84
  c->lr=0x804E6C8Cu; f_8037BBA4(c); // 804E6C88
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E6C8C
  c->r[30]=c->r[3]|c->r[3]; // 804E6C90
  cmps(c,0,(int32_t)c->r[0],0); // 804E6C94
  if (!crb(c,2)) { goto L_804E6CA4; } // 804E6C98
  c->lr=0x804E6CA0u; f_8037BBCC(c); // 804E6C9C
  goto L_804E6D7C; // 804E6CA0
L_804E6CA4:;
  cmps(c,0,(int32_t)c->r[27],0); // 804E6CA4
  c->r[0]=R32(c->r[31]+0x00000014u); // 804E6CA8
  if (crb(c,2)) { goto L_804E6CB4; } // 804E6CAC
  c->r[27]=c->r[27]+0x80000000u; // 804E6CB0
L_804E6CB4:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E6CB4
  c->r[29]=0u+0x00000000u; // 804E6CB8
  if (crb(c,2)) { goto L_804E6D18; } // 804E6CBC
  if (!crb(c,0)) { goto L_804E6CD0; } // 804E6CC0
  cmps(c,0,(int32_t)c->r[0],1); // 804E6CC4
  if (!crb(c,0)) { goto L_804E6D24; } // 804E6CC8
  goto L_804E6D30; // 804E6CCC
L_804E6CD0:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6CD0
  if (!crb(c,0)) { goto L_804E6D30; } // 804E6CD4
  c->r[3]=0u+0x24920000u; // 804E6CD8
  c->r[6]=c->r[28]+0xFFFFFFFFu; // 804E6CDC
  c->r[3]=c->r[3]+0x00004925u; // 804E6CE0
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 804E6CE4
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 804E6CE8
  c->r[3]=c->r[6]-c->r[4]; // 804E6CEC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E6CF0
  c->r[4]=c->r[3]+c->r[4]; // 804E6CF4
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 804E6CF8
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 804E6CFC
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 804E6D00
  c->r[4]=c->r[6]-c->r[5]; // 804E6D04
  c->r[0]=c->r[4]+c->r[0]; // 804E6D08
  c->r[29]=c->r[0]+c->r[3]; // 804E6D0C
  c->r[29]=c->r[29]+0x00000002u; // 804E6D10
  goto L_804E6D30; // 804E6D14
L_804E6D18:;
  c->r[29]=c->r[27]+c->r[28]; // 804E6D18
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 804E6D1C
  goto L_804E6D30; // 804E6D20
L_804E6D24:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 804E6D24
  c->r[3]=c->r[28]+c->r[0]; // 804E6D28
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 804E6D2C
L_804E6D30:;
  c->lr=0x804E6D34u; f_8037BBA4(c); // 804E6D30
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E6D34
  cmps(c,0,(int32_t)c->r[4],0); // 804E6D38
  if (!crb(c,2)) { goto L_804E6D48; } // 804E6D3C
  c->lr=0x804E6D44u; f_8037BBCC(c); // 804E6D40
  goto L_804E6D74; // 804E6D44
L_804E6D48:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 804E6D48
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 804E6D4C
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E6D50
  W16(c->r[4]+0x000000A0u,c->r[29]); // 804E6D54
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E6D58
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6D5C
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6D60
  if (!crb(c,2)) { goto L_804E6D70; } // 804E6D64
  c->r[0]=c->r[4]|0x00002000u; // 804E6D68
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E6D6C
L_804E6D70:;
  c->lr=0x804E6D74u; f_8037BBCC(c); // 804E6D70
L_804E6D74:;
  c->r[3]=c->r[30]|c->r[30]; // 804E6D74
  c->lr=0x804E6D7Cu; f_8037BBCC(c); // 804E6D78
L_804E6D7C:;
  c->r[11]=c->r[1]+0x00000020u; // 804E6D7C
  c->lr=0x804E6D84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E6D80
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E6D84
  c->lr=c->r[0]; // 804E6D88
  c->r[1]=c->r[1]+0x00000020u; // 804E6D8C
  return; // 804E6D90
}

// SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
void f_804E6D94(Ctx* __restrict c) {
  trace_call(0x804E6D94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6D94
  c->r[0]=c->lr; // 804E6D98
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6D9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E6DA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E6DA4
  c->r[30]=c->r[4]|c->r[4]; // 804E6DA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E6DAC
  c->r[29]=c->r[3]|c->r[3]; // 804E6DB0
  c->lr=0x804E6DB8u; f_8037BBA4(c); // 804E6DB4
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E6DB8
  c->r[31]=c->r[3]|c->r[3]; // 804E6DBC
  cmps(c,0,(int32_t)c->r[0],0); // 804E6DC0
  if (!crb(c,2)) { goto L_804E6DD0; } // 804E6DC4
  c->lr=0x804E6DCCu; f_8037BBCC(c); // 804E6DC8
  goto L_804E6E10; // 804E6DCC
L_804E6DD0:;
  c->lr=0x804E6DD4u; f_8037BBA4(c); // 804E6DD0
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E6DD4
  cmps(c,0,(int32_t)c->r[4],0); // 804E6DD8
  if (!crb(c,2)) { goto L_804E6DE8; } // 804E6DDC
  c->lr=0x804E6DE4u; f_8037BBCC(c); // 804E6DE0
  goto L_804E6E08; // 804E6DE4
L_804E6DE8:;
  W16(c->r[4]+0x00000096u,c->r[30]); // 804E6DE8
  c->r[5]=R32(c->r[29]+0x00000000u); // 804E6DEC
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6DF0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6DF4
  if (!crb(c,2)) { goto L_804E6E04; } // 804E6DF8
  c->r[0]=c->r[4]|0x00000800u; // 804E6DFC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E6E00
L_804E6E04:;
  c->lr=0x804E6E08u; f_8037BBCC(c); // 804E6E04
L_804E6E08:;
  c->r[3]=c->r[31]|c->r[31]; // 804E6E08
  c->lr=0x804E6E10u; f_8037BBCC(c); // 804E6E0C
L_804E6E10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E6E10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E6E14
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E6E18
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E6E1C
  c->lr=c->r[0]; // 804E6E20
  c->r[1]=c->r[1]+0x00000020u; // 804E6E24
  return; // 804E6E28
}

// StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_804E6E2C(Ctx* __restrict c) {
  trace_call(0x804E6E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E6E2C
  c->r[0]=c->lr; // 804E6E30
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E6E34
  c->r[11]=c->r[1]+0x00000020u; // 804E6E38
  c->lr=0x804E6E40u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E6E3C
  c->r[30]=c->r[3]|c->r[3]; // 804E6E40
  c->r[26]=c->r[4]|c->r[4]; // 804E6E44
  c->r[27]=c->r[5]|c->r[5]; // 804E6E48
  c->lr=0x804E6E50u; f_8037BBA4(c); // 804E6E4C
  c->r[0]=R32(c->r[30]+0x00000000u); // 804E6E50
  c->r[29]=c->r[3]|c->r[3]; // 804E6E54
  cmps(c,0,(int32_t)c->r[0],0); // 804E6E58
  if (!crb(c,2)) { goto L_804E6E68; } // 804E6E5C
  c->lr=0x804E6E64u; f_8037BBCC(c); // 804E6E60
  goto L_804E7010; // 804E6E64
L_804E6E68:;
  c->lr=0x804E6E6Cu; f_804E5278(c); // 804E6E68
  c->lr=0x804E6E70u; f_804E58B0(c); // 804E6E6C
  cmps(c,0,(int32_t)c->r[3],0); // 804E6E70
  c->r[0]=R32(c->r[30]+0x00000014u); // 804E6E74
  if (crb(c,2)) { goto L_804E6E80; } // 804E6E78
  c->r[3]=c->r[3]+0x80000000u; // 804E6E7C
L_804E6E80:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E6E80
  c->r[31]=0u+0x00000000u; // 804E6E84
  if (crb(c,2)) { goto L_804E6EB0; } // 804E6E88
  if (!crb(c,0)) { goto L_804E6E9C; } // 804E6E8C
  cmps(c,0,(int32_t)c->r[0],1); // 804E6E90
  if (!crb(c,0)) { goto L_804E6EB8; } // 804E6E94
  goto L_804E6EBC; // 804E6E98
L_804E6E9C:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6E9C
  if (!crb(c,0)) { goto L_804E6EBC; } // 804E6EA0
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E6EA4
  c->r[31]=c->r[3]+0x00000002u; // 804E6EA8
  goto L_804E6EBC; // 804E6EAC
L_804E6EB0:;
  c->r[31]=c->r[3]|c->r[3]; // 804E6EB0
  goto L_804E6EBC; // 804E6EB4
L_804E6EB8:;
  c->r[31]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E6EB8
L_804E6EBC:;
  cmps(c,0,(int32_t)c->r[26],0); // 804E6EBC
  if (crb(c,2)) { goto L_804E6EC8; } // 804E6EC0
  c->r[26]=c->r[26]+0x80000000u; // 804E6EC4
L_804E6EC8:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E6EC8
  c->r[28]=0u+0x00000000u; // 804E6ECC
  if (crb(c,2)) { goto L_804E6F2C; } // 804E6ED0
  if (!crb(c,0)) { goto L_804E6EE4; } // 804E6ED4
  cmps(c,0,(int32_t)c->r[0],1); // 804E6ED8
  if (!crb(c,0)) { goto L_804E6F38; } // 804E6EDC
  goto L_804E6F44; // 804E6EE0
L_804E6EE4:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E6EE4
  if (!crb(c,0)) { goto L_804E6F44; } // 804E6EE8
  c->r[3]=0u+0x24920000u; // 804E6EEC
  c->r[6]=c->r[27]+0xFFFFFFFFu; // 804E6EF0
  c->r[3]=c->r[3]+0x00004925u; // 804E6EF4
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 804E6EF8
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 804E6EFC
  c->r[3]=c->r[6]-c->r[4]; // 804E6F00
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E6F04
  c->r[4]=c->r[3]+c->r[4]; // 804E6F08
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 804E6F0C
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 804E6F10
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 804E6F14
  c->r[4]=c->r[6]-c->r[5]; // 804E6F18
  c->r[0]=c->r[4]+c->r[0]; // 804E6F1C
  c->r[28]=c->r[0]+c->r[3]; // 804E6F20
  c->r[28]=c->r[28]+0x00000002u; // 804E6F24
  goto L_804E6F44; // 804E6F28
L_804E6F2C:;
  c->r[28]=c->r[26]+c->r[27]; // 804E6F2C
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 804E6F30
  goto L_804E6F44; // 804E6F34
L_804E6F38:;
  c->r[0]=rotl(c->r[26],31)&0x7FFFFFFFu; // 804E6F38
  c->r[3]=c->r[27]+c->r[0]; // 804E6F3C
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 804E6F40
L_804E6F44:;
  c->lr=0x804E6F48u; f_8037BBA4(c); // 804E6F44
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E6F48
  cmps(c,0,(int32_t)c->r[4],0); // 804E6F4C
  if (!crb(c,2)) { goto L_804E6F5C; } // 804E6F50
  c->lr=0x804E6F58u; f_8037BBCC(c); // 804E6F54
  goto L_804E6F88; // 804E6F58
L_804E6F5C:;
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 804E6F5C
  W16(c->r[4]+0x0000009Au,c->r[0]); // 804E6F60
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E6F64
  W16(c->r[4]+0x0000009Cu,c->r[31]); // 804E6F68
  c->r[5]=R32(c->r[30]+0x00000000u); // 804E6F6C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6F70
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6F74
  if (!crb(c,2)) { goto L_804E6F84; } // 804E6F78
  c->r[0]=c->r[4]|0x00001000u; // 804E6F7C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E6F80
L_804E6F84:;
  c->lr=0x804E6F88u; f_8037BBCC(c); // 804E6F84
L_804E6F88:;
  c->lr=0x804E6F8Cu; f_8037BBA4(c); // 804E6F88
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E6F8C
  cmps(c,0,(int32_t)c->r[4],0); // 804E6F90
  if (!crb(c,2)) { goto L_804E6FA0; } // 804E6F94
  c->lr=0x804E6F9Cu; f_8037BBCC(c); // 804E6F98
  goto L_804E6FCC; // 804E6F9C
L_804E6FA0:;
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 804E6FA0
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 804E6FA4
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E6FA8
  W16(c->r[4]+0x000000A0u,c->r[28]); // 804E6FAC
  c->r[5]=R32(c->r[30]+0x00000000u); // 804E6FB0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6FB4
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6FB8
  if (!crb(c,2)) { goto L_804E6FC8; } // 804E6FBC
  c->r[0]=c->r[4]|0x00002000u; // 804E6FC0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E6FC4
L_804E6FC8:;
  c->lr=0x804E6FCCu; f_8037BBCC(c); // 804E6FC8
L_804E6FCC:;
  c->lr=0x804E6FD0u; f_8037BBA4(c); // 804E6FCC
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E6FD0
  cmps(c,0,(int32_t)c->r[4],0); // 804E6FD4
  if (!crb(c,2)) { goto L_804E6FE4; } // 804E6FD8
  c->lr=0x804E6FE0u; f_8037BBCC(c); // 804E6FDC
  goto L_804E7008; // 804E6FE0
L_804E6FE4:;
  c->r[0]=0u+0x00000000u; // 804E6FE4
  W16(c->r[4]+0x00000096u,c->r[0]); // 804E6FE8
  c->r[5]=R32(c->r[30]+0x00000000u); // 804E6FEC
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E6FF0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 804E6FF4
  if (!crb(c,2)) { goto L_804E7004; } // 804E6FF8
  c->r[0]=c->r[4]|0x00000800u; // 804E6FFC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804E7000
L_804E7004:;
  c->lr=0x804E7008u; f_8037BBCC(c); // 804E7004
L_804E7008:;
  c->r[3]=c->r[29]|c->r[29]; // 804E7008
  c->lr=0x804E7010u; f_8037BBCC(c); // 804E700C
L_804E7010:;
  c->r[11]=c->r[1]+0x00000020u; // 804E7010
  c->lr=0x804E7018u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E7014
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E7018
  c->lr=c->r[0]; // 804E701C
  c->r[1]=c->r[1]+0x00000020u; // 804E7020
  return; // 804E7024
}

// IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
void f_804E7028(Ctx* __restrict c) {
  trace_call(0x804E7028u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7028
  c->r[0]=c->lr; // 804E702C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E7030
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E7034
  c->r[31]=c->r[3]|c->r[3]; // 804E7038
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E703C
  c->r[30]=c->r[5]|c->r[5]; // 804E7040
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E7044
  c->r[29]=c->r[4]|c->r[4]; // 804E7048
  c->lr=0x804E7050u; f_8037BBA4(c); // 804E704C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E7050
  cmps(c,0,(int32_t)c->r[0],0); // 804E7054
  if (!crb(c,2)) { goto L_804E7068; } // 804E7058
  c->lr=0x804E7060u; f_8037BBCC(c); // 804E705C
  c->r[3]=0u+0x00000000u; // 804E7060
  goto L_804E70A4; // 804E7064
L_804E7068:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 804E7068
  c->r[31]=0u+0x00000000u; // 804E706C
  cmps(c,0,(int32_t)c->r[4],0); // 804E7070
  if (crb(c,2)) { goto L_804E709C; } // 804E7074
  cmpu(c,0,c->r[29],c->r[4]); // 804E7078
  c->r[0]=0u+0x00000000u; // 804E707C
  if (crb(c,1)) { goto L_804E7090; } // 804E7080
  cmpu(c,0,c->r[4],c->r[30]); // 804E7084
  if (crb(c,1)) { goto L_804E7090; } // 804E7088
  c->r[0]=0u+0x00000001u; // 804E708C
L_804E7090:;
  cmps(c,0,(int32_t)c->r[0],0); // 804E7090
  if (crb(c,2)) { goto L_804E709C; } // 804E7094
  c->r[31]=0u+0x00000001u; // 804E7098
L_804E709C:;
  c->lr=0x804E70A0u; f_8037BBCC(c); // 804E709C
  c->r[3]=c->r[31]|c->r[31]; // 804E70A0
L_804E70A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E70A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E70A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E70AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E70B0
  c->lr=c->r[0]; // 804E70B4
  c->r[1]=c->r[1]+0x00000020u; // 804E70B8
  return; // 804E70BC
}

// GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv
void f_804E70C0(Ctx* __restrict c) {
  trace_call(0x804E70C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E70C0
  c->r[0]=c->lr; // 804E70C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E70C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E70CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E70D0
  c->r[30]=c->r[3]|c->r[3]; // 804E70D4
  c->lr=0x804E70DCu; f_8037BBA4(c); // 804E70D8
  c->r[0]=R32(c->r[30]+0x00000000u); // 804E70DC
  c->r[31]=c->r[3]|c->r[3]; // 804E70E0
  cmps(c,0,(int32_t)c->r[0],0); // 804E70E4
  if (!crb(c,2)) { goto L_804E70F8; } // 804E70E8
  c->lr=0x804E70F0u; f_8037BBCC(c); // 804E70EC
  c->r[3]=0u+0x00000000u; // 804E70F0
  goto L_804E7254; // 804E70F4
L_804E70F8:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 804E70F8
  cmps(c,0,(int32_t)c->r[0],0); // 804E70FC
  if (!crb(c,2)) { goto L_804E7110; } // 804E7100
  c->lr=0x804E7108u; f_8037BBCC(c); // 804E7104
  c->r[3]=0u+0x00000000u; // 804E7108
  goto L_804E7254; // 804E710C
L_804E7110:;
  c->r[3]=c->r[30]|c->r[30]; // 804E7110
  c->lr=0x804E7118u; f_804E6A00(c); // 804E7114
  cmps(c,0,(int32_t)c->r[3],0); // 804E7118
  if (crb(c,2)) { goto L_804E71BC; } // 804E711C
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E7120
  cmps(c,0,(int32_t)c->r[4],0); // 804E7124
  if (crb(c,2)) { goto L_804E7140; } // 804E7128
  c->r[3]=R16(c->r[4]+0x0000009Eu); // 804E712C
  c->r[0]=R16(c->r[4]+0x000000A0u); // 804E7130
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 804E7134
  c->r[3]=c->r[3]+c->r[0]; // 804E7138
  goto L_804E7144; // 804E713C
L_804E7140:;
  c->r[3]=0u+0x00000000u; // 804E7140
L_804E7144:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 804E7144
  c->r[0]=R32(c->r[30]+0x00000014u); // 804E7148
  cmps(c,0,(int32_t)c->r[4],0); // 804E714C
  if (crb(c,2)) { goto L_804E7158; } // 804E7150
  c->r[4]=c->r[4]+0x80000000u; // 804E7154
L_804E7158:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E7158
  c->r[30]=0u+0x00000000u; // 804E715C
  if (crb(c,2)) { goto L_804E719C; } // 804E7160
  if (!crb(c,0)) { goto L_804E7174; } // 804E7164
  cmps(c,0,(int32_t)c->r[0],1); // 804E7168
  if (!crb(c,0)) { goto L_804E71A4; } // 804E716C
  goto L_804E71AC; // 804E7170
L_804E7174:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E7174
  if (!crb(c,0)) { goto L_804E71AC; } // 804E7178
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804E717C
  c->r[4]=c->r[3]-c->r[0]; // 804E7180
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 804E7184
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 804E7188
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 804E718C
  c->r[3]=c->r[0]+c->r[3]; // 804E7190
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 804E7194
  goto L_804E71AC; // 804E7198
L_804E719C:;
  c->r[30]=c->r[3]-c->r[4]; // 804E719C
  goto L_804E71AC; // 804E71A0
L_804E71A4:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804E71A4
  c->r[30]=c->r[3]-c->r[0]; // 804E71A8
L_804E71AC:;
  c->r[3]=c->r[31]|c->r[31]; // 804E71AC
  c->lr=0x804E71B4u; f_8037BBCC(c); // 804E71B0
  c->r[3]=c->r[30]+0x00000001u; // 804E71B4
  goto L_804E7254; // 804E71B8
L_804E71BC:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E71BC
  cmps(c,0,(int32_t)c->r[4],0); // 804E71C0
  if (crb(c,2)) { goto L_804E71DC; } // 804E71C4
  c->r[3]=R16(c->r[4]+0x000000A2u); // 804E71C8
  c->r[0]=R16(c->r[4]+0x000000A4u); // 804E71CC
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 804E71D0
  c->r[3]=c->r[3]+c->r[0]; // 804E71D4
  goto L_804E71E0; // 804E71D8
L_804E71DC:;
  c->r[3]=0u+0x00000000u; // 804E71DC
L_804E71E0:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 804E71E0
  c->r[0]=R32(c->r[30]+0x00000014u); // 804E71E4
  cmps(c,0,(int32_t)c->r[4],0); // 804E71E8
  if (crb(c,2)) { goto L_804E71F4; } // 804E71EC
  c->r[4]=c->r[4]+0x80000000u; // 804E71F0
L_804E71F4:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E71F4
  c->r[30]=0u+0x00000000u; // 804E71F8
  if (crb(c,2)) { goto L_804E7238; } // 804E71FC
  if (!crb(c,0)) { goto L_804E7210; } // 804E7200
  cmps(c,0,(int32_t)c->r[0],1); // 804E7204
  if (!crb(c,0)) { goto L_804E7240; } // 804E7208
  goto L_804E7248; // 804E720C
L_804E7210:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E7210
  if (!crb(c,0)) { goto L_804E7248; } // 804E7214
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 804E7218
  c->r[4]=c->r[3]-c->r[0]; // 804E721C
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 804E7220
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 804E7224
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 804E7228
  c->r[3]=c->r[0]+c->r[3]; // 804E722C
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 804E7230
  goto L_804E7248; // 804E7234
L_804E7238:;
  c->r[30]=c->r[3]-c->r[4]; // 804E7238
  goto L_804E7248; // 804E723C
L_804E7240:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804E7240
  c->r[30]=c->r[3]-c->r[0]; // 804E7244
L_804E7248:;
  c->r[3]=c->r[31]|c->r[31]; // 804E7248
  c->lr=0x804E7250u; f_8037BBCC(c); // 804E724C
  c->r[3]=c->r[30]|c->r[30]; // 804E7250
L_804E7254:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E7254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E7258
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E725C
  c->lr=c->r[0]; // 804E7260
  c->r[1]=c->r[1]+0x00000010u; // 804E7264
  return; // 804E7268
}

// VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv
void f_804E726C(Ctx* __restrict c) {
  trace_call(0x804E726Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E726C
  c->r[0]=c->lr; // 804E7270
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E7274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E7278
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E727C
  c->r[30]=c->r[3]|c->r[3]; // 804E7280
  c->lr=0x804E7288u; f_8037BBA4(c); // 804E7284
  c->r[30]=R32(c->r[30]+0x00000014u); // 804E7288
  c->r[0]=0u+0x00000000u; // 804E728C
  c->r[31]=c->r[3]|c->r[3]; // 804E7290
  W32(c->r[30]+0x00000000u,c->r[0]); // 804E7294
  W32(c->r[30]+0x00000004u,c->r[0]); // 804E7298
  c->lr=0x804E72A0u; f_804E95BC(c); // 804E729C
  c->r[4]=c->r[30]|c->r[30]; // 804E72A0
  c->lr=0x804E72A8u; f_804E9B48(c); // 804E72A4
  c->r[3]=c->r[31]|c->r[31]; // 804E72A8
  c->lr=0x804E72B0u; f_8037BBCC(c); // 804E72AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E72B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E72B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E72B8
  c->lr=c->r[0]; // 804E72BC
  c->r[1]=c->r[1]+0x00000010u; // 804E72C0
  return; // 804E72C4
}

// GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
void f_804E72C8(Ctx* __restrict c) {
  trace_call(0x804E72C8u);
  cmps(c,0,(int32_t)c->r[3],0); // 804E72C8
  if (crb(c,2)) { goto L_804E72D4; } // 804E72CC
  c->r[3]=c->r[3]+0x80000000u; // 804E72D0
L_804E72D4:;
  cmps(c,0,(int32_t)c->r[5],2); // 804E72D4
  c->r[0]=0u+0x00000000u; // 804E72D8
  if (crb(c,2)) { goto L_804E7318; } // 804E72DC
  if (!crb(c,0)) { goto L_804E72F0; } // 804E72E0
  cmps(c,0,(int32_t)c->r[5],1); // 804E72E4
  if (!crb(c,0)) { goto L_804E7320; } // 804E72E8
  goto L_804E7328; // 804E72EC
L_804E72F0:;
  cmps(c,0,(int32_t)c->r[5],4); // 804E72F0
  if (!crb(c,0)) { goto L_804E7328; } // 804E72F4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E72F8
  c->r[4]=c->r[4]-c->r[0]; // 804E72FC
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 804E7300
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 804E7304
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 804E7308
  c->r[3]=c->r[0]+c->r[3]; // 804E730C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804E7310
  goto L_804E7328; // 804E7314
L_804E7318:;
  c->r[0]=c->r[4]-c->r[3]; // 804E7318
  goto L_804E7328; // 804E731C
L_804E7320:;
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E7320
  c->r[0]=c->r[4]-c->r[0]; // 804E7324
L_804E7328:;
  c->r[3]=c->r[0]|c->r[0]; // 804E7328
  return; // 804E732C
}

// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
void f_804E7330(Ctx* __restrict c) {
  trace_call(0x804E7330u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E7330
  cmps(c,0,(int32_t)c->r[3],0); // 804E7334
  if (crb(c,2)) return; // 804E7338
  f_80393EEC(c); return; // 804E733C
  return; // 804E7340
}

// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_804E7344(Ctx* __restrict c) {
  trace_call(0x804E7344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7344
  c->r[0]=c->lr; // 804E7348
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E734C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E7350
  c->r[31]=c->r[4]|c->r[4]; // 804E7354
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E7358
  c->r[30]=c->r[3]|c->r[3]; // 804E735C
  c->lr=0x804E7364u; f_8037BBA4(c); // 804E7360
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E7364
  cmps(c,0,(int32_t)c->r[4],0); // 804E7368
  if (!crb(c,2)) { goto L_804E7378; } // 804E736C
  c->lr=0x804E7374u; f_8037BBCC(c); // 804E7370
  goto L_804E738C; // 804E7374
L_804E7378:;
  W16(c->r[4]+0x0000003Au,c->r[31]); // 804E7378
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E737C
  c->r[0]=c->r[0]|0x00000008u; // 804E7380
  W32(c->r[30]+0x00000004u,c->r[0]); // 804E7384
  c->lr=0x804E738Cu; f_8037BBCC(c); // 804E7388
L_804E738C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E738C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E7390
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E7394
  c->lr=c->r[0]; // 804E7398
  c->r[1]=c->r[1]+0x00000010u; // 804E739C
  return; // 804E73A0
}

// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
void f_804E73A4(Ctx* __restrict c) {
  trace_call(0x804E73A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E73A4
  c->r[0]=c->lr; // 804E73A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E73AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E73B0
  c->r[31]=c->r[4]|c->r[4]; // 804E73B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E73B8
  c->r[30]=c->r[3]|c->r[3]; // 804E73BC
  c->lr=0x804E73C4u; f_8037BBA4(c); // 804E73C0
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E73C4
  cmps(c,0,(int32_t)c->r[4],0); // 804E73C8
  if (!crb(c,2)) { goto L_804E73D8; } // 804E73CC
  c->lr=0x804E73D4u; f_8037BBCC(c); // 804E73D0
  goto L_804E73EC; // 804E73D4
L_804E73D8:;
  W16(c->r[4]+0x000000FEu,c->r[31]); // 804E73D8
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E73DC
  c->r[0]=c->r[0]|0x00800000u; // 804E73E0
  W32(c->r[30]+0x00000004u,c->r[0]); // 804E73E4
  c->lr=0x804E73ECu; f_8037BBCC(c); // 804E73E8
L_804E73EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E73EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E73F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E73F4
  c->lr=c->r[0]; // 804E73F8
  c->r[1]=c->r[1]+0x00000010u; // 804E73FC
  return; // 804E7400
}

// ResetDelta__Q44nw4r3snd6detail7AxVoiceFv
void f_804E7404(Ctx* __restrict c) {
  trace_call(0x804E7404u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7404
  c->r[0]=c->lr; // 804E7408
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E740C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804E7410
  c->r[31]=c->r[3]|c->r[3]; // 804E7414
  W32(c->r[1]+0x00000038u,c->r[30]); // 804E7418
  c->lr=0x804E7420u; f_8037BBA4(c); // 804E741C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E7420
  c->r[30]=c->r[3]|c->r[3]; // 804E7424
  cmps(c,0,(int32_t)c->r[0],0); // 804E7428
  if (!crb(c,2)) { goto L_804E7438; } // 804E742C
  c->lr=0x804E7434u; f_8037BBCC(c); // 804E7430
  goto L_804E753C; // 804E7434
L_804E7438:;
  c->lr=0x804E743Cu; f_8037BBA4(c); // 804E7438
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E743C
  cmps(c,0,(int32_t)c->r[4],0); // 804E7440
  if (!crb(c,2)) { goto L_804E7450; } // 804E7444
  c->lr=0x804E744Cu; f_8037BBCC(c); // 804E7448
  goto L_804E7490; // 804E744C
L_804E7450:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 804E7450
  c->r[0]=0u+0x00000000u; // 804E7454
  c->r[6]=R16(c->r[31]+0x00000008u); // 804E7458
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 804E745C
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E7460
  c->r[5]=c->r[6]+c->r[5]; // 804E7464
  W16(c->r[31]+0x00000008u,c->r[5]); // 804E7468
  c->r[5]=R16(c->r[31]+0x00000008u); // 804E746C
  W16(c->r[4]+0x00000092u,c->r[5]); // 804E7470
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E7474
  W16(c->r[4]+0x00000094u,c->r[0]); // 804E7478
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E747C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804E7480
  c->r[0]=c->r[0]|0x00000100u; // 804E7484
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 804E7488
  c->lr=0x804E7490u; f_8037BBCC(c); // 804E748C
L_804E7490:;
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 804E7490
  c->r[6]=0u+0x00000000u; // 804E7494
  c->r[3]=c->r[31]|c->r[31]; // 804E7498
  c->r[4]=c->r[1]+0x00000008u; // 804E749C
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E74A0
  c->r[5]=0u+0x00000001u; // 804E74A4
  W16(c->r[1]+0x0000000Au,c->r[6]); // 804E74A8
  c->r[0]=R16(c->r[31]+0x00000020u); // 804E74AC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E74B0
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 804E74B4
  c->r[0]=R16(c->r[31]+0x00000024u); // 804E74B8
  W16(c->r[1]+0x00000010u,c->r[0]); // 804E74BC
  W16(c->r[1]+0x00000012u,c->r[6]); // 804E74C0
  c->r[0]=R16(c->r[31]+0x00000026u); // 804E74C4
  W16(c->r[1]+0x00000014u,c->r[0]); // 804E74C8
  W16(c->r[1]+0x00000016u,c->r[6]); // 804E74CC
  c->r[0]=R16(c->r[31]+0x0000002Au); // 804E74D0
  W16(c->r[1]+0x00000018u,c->r[0]); // 804E74D4
  W16(c->r[1]+0x0000001Au,c->r[6]); // 804E74D8
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 804E74DC
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 804E74E0
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 804E74E4
  c->r[0]=R16(c->r[31]+0x00000030u); // 804E74E8
  W16(c->r[1]+0x00000020u,c->r[0]); // 804E74EC
  W16(c->r[1]+0x00000022u,c->r[6]); // 804E74F0
  c->r[0]=R16(c->r[31]+0x00000032u); // 804E74F4
  W16(c->r[1]+0x00000024u,c->r[0]); // 804E74F8
  W16(c->r[1]+0x00000026u,c->r[6]); // 804E74FC
  c->r[0]=R16(c->r[31]+0x00000022u); // 804E7500
  W16(c->r[1]+0x00000028u,c->r[0]); // 804E7504
  W16(c->r[1]+0x0000002Au,c->r[6]); // 804E7508
  c->r[0]=R16(c->r[31]+0x00000028u); // 804E750C
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 804E7510
  W16(c->r[1]+0x0000002Eu,c->r[6]); // 804E7514
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 804E7518
  W16(c->r[1]+0x00000030u,c->r[0]); // 804E751C
  W16(c->r[1]+0x00000032u,c->r[6]); // 804E7520
  c->r[0]=R16(c->r[31]+0x00000034u); // 804E7524
  W16(c->r[1]+0x00000034u,c->r[0]); // 804E7528
  W16(c->r[1]+0x00000036u,c->r[6]); // 804E752C
  c->lr=0x804E7534u; f_804E8EF4(c); // 804E7530
  c->r[3]=c->r[30]|c->r[30]; // 804E7534
  c->lr=0x804E753Cu; f_8037BBCC(c); // 804E7538
L_804E753C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E753C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804E7540
  c->r[30]=R32(c->r[1]+0x00000038u); // 804E7544
  c->lr=c->r[0]; // 804E7548
  c->r[1]=c->r[1]+0x00000040u; // 804E754C
  return; // 804E7550
}

// SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl
void f_804E7554(Ctx* __restrict c) {
  trace_call(0x804E7554u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7554
  c->r[0]=c->lr; // 804E7558
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E755C
  c->r[11]=c->r[1]+0x00000040u; // 804E7560
  c->lr=0x804E7568u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E7564
  c->r[26]=c->r[3]|c->r[3]; // 804E7568
  c->r[27]=c->r[4]|c->r[4]; // 804E756C
  c->r[28]=c->r[5]|c->r[5]; // 804E7570
  c->r[29]=c->r[6]|c->r[6]; // 804E7574
  c->r[30]=c->r[7]|c->r[7]; // 804E7578
  c->r[31]=c->r[8]|c->r[8]; // 804E757C
  c->lr=0x804E7584u; f_8037BBA4(c); // 804E7580
  c->r[0]=R32(c->r[26]+0x00000000u); // 804E7584
  c->r[25]=c->r[3]|c->r[3]; // 804E7588
  cmps(c,0,(int32_t)c->r[0],0); // 804E758C
  if (!crb(c,2)) { goto L_804E759C; } // 804E7590
  c->lr=0x804E7598u; f_8037BBCC(c); // 804E7594
  goto L_804E7910; // 804E7598
L_804E759C:;
  cmpu(c,0,c->r[29],c->r[31]); // 804E759C
  if (!crb(c,1)) { goto L_804E769C; } // 804E75A0
  c->lr=0x804E75A8u; f_804E5278(c); // 804E75A4
  c->lr=0x804E75ACu; f_804E58B0(c); // 804E75A8
  cmps(c,0,(int32_t)c->r[3],0); // 804E75AC
  c->r[6]=R32(c->r[26]+0x00000014u); // 804E75B0
  c->r[0]=c->r[3]|c->r[3]; // 804E75B4
  c->r[27]=0u+0x00000000u; // 804E75B8
  if (crb(c,2)) { goto L_804E75C4; } // 804E75BC
  c->r[0]=c->r[3]+0x80000000u; // 804E75C0
L_804E75C4:;
  cmps(c,0,(int32_t)c->r[6],2); // 804E75C4
  c->r[4]=0u+0x00000000u; // 804E75C8
  if (crb(c,2)) { goto L_804E75F4; } // 804E75CC
  if (!crb(c,0)) { goto L_804E75E0; } // 804E75D0
  cmps(c,0,(int32_t)c->r[6],1); // 804E75D4
  if (!crb(c,0)) { goto L_804E75FC; } // 804E75D8
  goto L_804E7600; // 804E75DC
L_804E75E0:;
  cmps(c,0,(int32_t)c->r[6],4); // 804E75E0
  if (!crb(c,0)) { goto L_804E7600; } // 804E75E4
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804E75E8
  c->r[4]=c->r[4]+0x00000002u; // 804E75EC
  goto L_804E7600; // 804E75F0
L_804E75F4:;
  c->r[4]=c->r[0]|c->r[0]; // 804E75F4
  goto L_804E7600; // 804E75F8
L_804E75FC:;
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804E75FC
L_804E7600:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E7600
  c->r[0]=c->r[3]|c->r[3]; // 804E7604
  if (crb(c,2)) { goto L_804E7610; } // 804E7608
  c->r[0]=c->r[3]+0x80000000u; // 804E760C
L_804E7610:;
  cmps(c,0,(int32_t)c->r[6],2); // 804E7610
  c->r[5]=0u+0x00000000u; // 804E7614
  if (crb(c,2)) { goto L_804E7640; } // 804E7618
  if (!crb(c,0)) { goto L_804E762C; } // 804E761C
  cmps(c,0,(int32_t)c->r[6],1); // 804E7620
  if (!crb(c,0)) { goto L_804E7648; } // 804E7624
  goto L_804E764C; // 804E7628
L_804E762C:;
  cmps(c,0,(int32_t)c->r[6],4); // 804E762C
  if (!crb(c,0)) { goto L_804E764C; } // 804E7630
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804E7634
  c->r[5]=c->r[5]+0x00000002u; // 804E7638
  goto L_804E764C; // 804E763C
L_804E7640:;
  c->r[5]=c->r[0]|c->r[0]; // 804E7640
  goto L_804E764C; // 804E7644
L_804E7648:;
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804E7648
L_804E764C:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E764C
  if (crb(c,2)) { goto L_804E7658; } // 804E7650
  c->r[3]=c->r[3]+0x80000000u; // 804E7654
L_804E7658:;
  cmps(c,0,(int32_t)c->r[6],2); // 804E7658
  c->r[8]=0u+0x00000000u; // 804E765C
  if (crb(c,2)) { goto L_804E7688; } // 804E7660
  if (!crb(c,0)) { goto L_804E7674; } // 804E7664
  cmps(c,0,(int32_t)c->r[6],1); // 804E7668
  if (!crb(c,0)) { goto L_804E7690; } // 804E766C
  goto L_804E7888; // 804E7670
L_804E7674:;
  cmps(c,0,(int32_t)c->r[6],4); // 804E7674
  if (!crb(c,0)) { goto L_804E7888; } // 804E7678
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E767C
  c->r[8]=c->r[3]+0x00000003u; // 804E7680
  goto L_804E7888; // 804E7684
L_804E7688:;
  c->r[8]=c->r[3]+0x00000001u; // 804E7688
  goto L_804E7888; // 804E768C
L_804E7690:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E7690
  c->r[8]=c->r[3]+0x00000001u; // 804E7694
  goto L_804E7888; // 804E7698
L_804E769C:;
  cmps(c,0,(int32_t)c->r[27],0); // 804E769C
  if (crb(c,2)) { goto L_804E772C; } // 804E76A0
  cmps(c,0,(int32_t)c->r[28],0); // 804E76A4
  c->r[0]=R32(c->r[26]+0x00000014u); // 804E76A8
  c->r[3]=c->r[28]|c->r[28]; // 804E76AC
  if (crb(c,2)) { goto L_804E76B8; } // 804E76B0
  c->r[3]=c->r[28]+0x80000000u; // 804E76B4
L_804E76B8:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E76B8
  c->r[5]=0u+0x00000000u; // 804E76BC
  if (crb(c,2)) { goto L_804E7718; } // 804E76C0
  if (!crb(c,0)) { goto L_804E76D4; } // 804E76C4
  cmps(c,0,(int32_t)c->r[0],1); // 804E76C8
  if (!crb(c,0)) { goto L_804E7720; } // 804E76CC
  goto L_804E7780; // 804E76D0
L_804E76D4:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E76D4
  if (!crb(c,0)) { goto L_804E7780; } // 804E76D8
  c->r[4]=0u+0x24920000u; // 804E76DC
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E76E0
  c->r[4]=c->r[4]+0x00004925u; // 804E76E4
  c->r[5]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[30])>>32); // 804E76E8
  c->r[4]=c->r[30]-c->r[5]; // 804E76EC
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804E76F0
  c->r[5]=c->r[4]+c->r[5]; // 804E76F4
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 804E76F8
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 804E76FC
  c->r[4]=rotl(c->r[5],1)&0xFFFFFFF0u; // 804E7700
  c->r[5]=c->r[30]-c->r[6]; // 804E7704
  c->r[3]=c->r[5]+c->r[3]; // 804E7708
  c->r[5]=c->r[3]+c->r[4]; // 804E770C
  c->r[5]=c->r[5]+0x00000002u; // 804E7710
  goto L_804E7780; // 804E7714
L_804E7718:;
  c->r[5]=c->r[3]+c->r[30]; // 804E7718
  goto L_804E7780; // 804E771C
L_804E7720:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E7720
  c->r[5]=c->r[3]+c->r[30]; // 804E7724
  goto L_804E7780; // 804E7728
L_804E772C:;
  c->lr=0x804E7730u; f_804E5278(c); // 804E772C
  c->lr=0x804E7734u; f_804E58B0(c); // 804E7730
  cmps(c,0,(int32_t)c->r[3],0); // 804E7734
  c->r[0]=R32(c->r[26]+0x00000014u); // 804E7738
  if (crb(c,2)) { goto L_804E7744; } // 804E773C
  c->r[3]=c->r[3]+0x80000000u; // 804E7740
L_804E7744:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E7744
  c->r[5]=0u+0x00000000u; // 804E7748
  if (crb(c,2)) { goto L_804E7774; } // 804E774C
  if (!crb(c,0)) { goto L_804E7760; } // 804E7750
  cmps(c,0,(int32_t)c->r[0],1); // 804E7754
  if (!crb(c,0)) { goto L_804E777C; } // 804E7758
  goto L_804E7780; // 804E775C
L_804E7760:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E7760
  if (!crb(c,0)) { goto L_804E7780; } // 804E7764
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E7768
  c->r[5]=c->r[3]+0x00000002u; // 804E776C
  goto L_804E7780; // 804E7770
L_804E7774:;
  c->r[5]=c->r[3]|c->r[3]; // 804E7774
  goto L_804E7780; // 804E7778
L_804E777C:;
  c->r[5]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E777C
L_804E7780:;
  cmps(c,0,(int32_t)c->r[28],0); // 804E7780
  c->r[3]=c->r[28]|c->r[28]; // 804E7784
  if (crb(c,2)) { goto L_804E7790; } // 804E7788
  c->r[3]=c->r[28]+0x80000000u; // 804E778C
L_804E7790:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E7790
  c->r[4]=0u+0x00000000u; // 804E7794
  if (crb(c,2)) { goto L_804E77F0; } // 804E7798
  if (!crb(c,0)) { goto L_804E77AC; } // 804E779C
  cmps(c,0,(int32_t)c->r[0],1); // 804E77A0
  if (!crb(c,0)) { goto L_804E77F8; } // 804E77A4
  goto L_804E7800; // 804E77A8
L_804E77AC:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E77AC
  if (!crb(c,0)) { goto L_804E7800; } // 804E77B0
  c->r[4]=0u+0x24920000u; // 804E77B4
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804E77B8
  c->r[4]=c->r[4]+0x00004925u; // 804E77BC
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[29])>>32); // 804E77C0
  c->r[4]=c->r[29]-c->r[6]; // 804E77C4
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 804E77C8
  c->r[6]=c->r[4]+c->r[6]; // 804E77CC
  c->r[4]=rotl(c->r[6],29)&0x1FFFFFFFu; // 804E77D0
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 804E77D4
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFF0u; // 804E77D8
  c->r[6]=c->r[29]-c->r[7]; // 804E77DC
  c->r[3]=c->r[6]+c->r[3]; // 804E77E0
  c->r[4]=c->r[3]+c->r[4]; // 804E77E4
  c->r[4]=c->r[4]+0x00000002u; // 804E77E8
  goto L_804E7800; // 804E77EC
L_804E77F0:;
  c->r[4]=c->r[3]+c->r[29]; // 804E77F0
  goto L_804E7800; // 804E77F4
L_804E77F8:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E77F8
  c->r[4]=c->r[3]+c->r[29]; // 804E77FC
L_804E7800:;
  cmps(c,0,(int32_t)c->r[28],0); // 804E7800
  if (crb(c,2)) { goto L_804E780C; } // 804E7804
  c->r[28]=c->r[28]+0x80000000u; // 804E7808
L_804E780C:;
  cmps(c,0,(int32_t)c->r[0],2); // 804E780C
  c->r[8]=0u+0x00000000u; // 804E7810
  if (crb(c,2)) { goto L_804E7870; } // 804E7814
  if (!crb(c,0)) { goto L_804E7828; } // 804E7818
  cmps(c,0,(int32_t)c->r[0],1); // 804E781C
  if (!crb(c,0)) { goto L_804E787C; } // 804E7820
  goto L_804E7888; // 804E7824
L_804E7828:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E7828
  if (!crb(c,0)) { goto L_804E7888; } // 804E782C
  c->r[3]=0u+0x24920000u; // 804E7830
  c->r[8]=c->r[31]+0xFFFFFFFFu; // 804E7834
  c->r[3]=c->r[3]+0x00004925u; // 804E7838
  c->r[0]=rotl(c->r[28],1)&0xFFFFFFFEu; // 804E783C
  c->r[6]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[8])>>32); // 804E7840
  c->r[3]=c->r[8]-c->r[6]; // 804E7844
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E7848
  c->r[6]=c->r[3]+c->r[6]; // 804E784C
  c->r[3]=rotl(c->r[6],29)&0x1FFFFFFFu; // 804E7850
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 804E7854
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFF0u; // 804E7858
  c->r[6]=c->r[8]-c->r[7]; // 804E785C
  c->r[0]=c->r[6]+c->r[0]; // 804E7860
  c->r[8]=c->r[0]+c->r[3]; // 804E7864
  c->r[8]=c->r[8]+0x00000002u; // 804E7868
  goto L_804E7888; // 804E786C
L_804E7870:;
  c->r[8]=c->r[28]+c->r[31]; // 804E7870
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 804E7874
  goto L_804E7888; // 804E7878
L_804E787C:;
  c->r[0]=rotl(c->r[28],31)&0x7FFFFFFFu; // 804E787C
  c->r[3]=c->r[31]+c->r[0]; // 804E7880
  c->r[8]=c->r[3]+0xFFFFFFFFu; // 804E7884
L_804E7888:;
  W16(c->r[1]+0x00000008u,c->r[27]); // 804E7888
  c->r[0]=R32(c->r[26]+0x00000014u); // 804E788C
  cmps(c,0,(int32_t)c->r[0],2); // 804E7890
  if (crb(c,2)) { goto L_804E78B8; } // 804E7894
  if (!crb(c,0)) { goto L_804E78A8; } // 804E7898
  cmps(c,0,(int32_t)c->r[0],1); // 804E789C
  if (!crb(c,0)) { goto L_804E78C0; } // 804E78A0
  goto L_804E78C8; // 804E78A4
L_804E78A8:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E78A8
  if (!crb(c,0)) { goto L_804E78C8; } // 804E78AC
  c->r[7]=0u+0x00000000u; // 804E78B0
  goto L_804E78CC; // 804E78B4
L_804E78B8:;
  c->r[7]=0u+0x00000019u; // 804E78B8
  goto L_804E78CC; // 804E78BC
L_804E78C0:;
  c->r[7]=0u+0x0000000Au; // 804E78C0
  goto L_804E78CC; // 804E78C4
L_804E78C8:;
  c->r[7]=0u+0x00000000u; // 804E78C8
L_804E78CC:;
  c->r[6]=rotl(c->r[5],16)&0x0000FFFFu; // 804E78CC
  c->r[3]=rotl(c->r[8],16)&0x0000FFFFu; // 804E78D0
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 804E78D4
  W16(c->r[1]+0x0000000Au,c->r[7]); // 804E78D8
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 804E78DC
  W16(c->r[1]+0x0000000Eu,c->r[5]); // 804E78E0
  W16(c->r[1]+0x00000010u,c->r[3]); // 804E78E4
  W16(c->r[1]+0x00000012u,c->r[8]); // 804E78E8
  W16(c->r[1]+0x00000014u,c->r[0]); // 804E78EC
  W16(c->r[1]+0x00000016u,c->r[4]); // 804E78F0
  c->r[3]=R32(c->r[26]+0x00000000u); // 804E78F4
  cmps(c,0,(int32_t)c->r[3],0); // 804E78F8
  if (crb(c,2)) { goto L_804E7908; } // 804E78FC
  c->r[4]=c->r[1]+0x00000008u; // 804E7900
  c->lr=0x804E7908u; f_80396AFC(c); // 804E7904
L_804E7908:;
  c->r[3]=c->r[25]|c->r[25]; // 804E7908
  c->lr=0x804E7910u; f_8037BBCC(c); // 804E790C
L_804E7910:;
  c->r[11]=c->r[1]+0x00000040u; // 804E7910
  c->lr=0x804E7918u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E7914
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E7918
  c->lr=c->r[0]; // 804E791C
  c->r[1]=c->r[1]+0x00000040u; // 804E7920
  return; // 804E7924
}

// SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef
void f_804E7928(Ctx* __restrict c) {
  trace_call(0x804E7928u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7928
  c->r[0]=c->lr; // 804E792C
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E7930
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 804E7934
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 804E7938
  c->f[31]=c->f[1]; // 804E793C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E7940
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E7944
  c->r[30]=c->r[4]|c->r[4]; // 804E7948
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E794C
  c->r[29]=c->r[3]|c->r[3]; // 804E7950
  c->lr=0x804E7958u; f_8037BBA4(c); // 804E7954
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E7958
  c->r[31]=c->r[3]|c->r[3]; // 804E795C
  cmps(c,0,(int32_t)c->r[0],0); // 804E7960
  if (!crb(c,2)) { goto L_804E7970; } // 804E7964
  c->lr=0x804E796Cu; f_8037BBCC(c); // 804E7968
  goto L_804E79E4; // 804E796C
L_804E7970:;
  cmps(c,0,(int32_t)c->r[30],5); // 804E7970
  if (!crb(c,2)) { goto L_804E79D0; } // 804E7974
  c->r[3]=R32(c->r[29]+0x00000018u); // 804E7978
  c->r[0]=0u+0x43300000u; // 804E797C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E7980
  c->r[0]=c->r[3]^0x80000000u; // 804E7984
  {uint32_t ea=c->r[2]+0x00001928u; c->f[3]=RF64(ea);} // 804E7988
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804E798C
  {uint32_t ea=c->r[2]+0x00001918u; c->f[1]=c->ps1[1]=RF32(ea);} // 804E7990
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 804E7994
  {uint32_t ea=c->r[2]+0x0000191Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E7998
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 804E799C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 804E79A0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 804E79A4
  fcmp(c,0,c->f[1],c->f[0]); // 804E79A8
  if (!crb(c,1)) { goto L_804E79B8; } // 804E79AC
  c->r[30]=0u+0x00000002u; // 804E79B0
  goto L_804E79D0; // 804E79B4
L_804E79B8:;
  {uint32_t ea=c->r[2]+0x00001920u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E79B8
  fcmp(c,0,c->f[1],c->f[0]); // 804E79BC
  if (!crb(c,1)) { goto L_804E79CC; } // 804E79C0
  c->r[30]=0u+0x00000003u; // 804E79C4
  goto L_804E79D0; // 804E79C8
L_804E79CC:;
  c->r[30]=0u+0x00000004u; // 804E79CC
L_804E79D0:;
  c->r[3]=c->r[29]|c->r[29]; // 804E79D0
  c->r[4]=c->r[30]|c->r[30]; // 804E79D4
  c->lr=0x804E79DCu; f_804E916C(c); // 804E79D8
  c->r[3]=c->r[31]|c->r[31]; // 804E79DC
  c->lr=0x804E79E4u; f_8037BBCC(c); // 804E79E0
L_804E79E4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 804E79E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E79E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 804E79EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E79F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E79F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E79F8
  c->lr=c->r[0]; // 804E79FC
  c->r[1]=c->r[1]+0x00000030u; // 804E7A00
  return; // 804E7A04
}

// SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam
void f_804E7A08(Ctx* __restrict c) {
  trace_call(0x804E7A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7A08
  c->r[0]=c->lr; // 804E7A0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E7A10
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 804E7A14
  W32(c->r[1]+0x00000038u,c->r[30]); // 804E7A18
  c->r[30]=c->r[4]|c->r[4]; // 804E7A1C
  W32(c->r[1]+0x00000034u,c->r[29]); // 804E7A20
  c->r[29]=c->r[3]|c->r[3]; // 804E7A24
  c->lr=0x804E7A2Cu; f_8037BBA4(c); // 804E7A28
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E7A2C
  c->r[31]=c->r[3]|c->r[3]; // 804E7A30
  cmps(c,0,(int32_t)c->r[0],0); // 804E7A34
  if (!crb(c,2)) { goto L_804E7A44; } // 804E7A38
  c->lr=0x804E7A40u; f_8037BBCC(c); // 804E7A3C
  goto L_804E7B38; // 804E7A40
L_804E7A44:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 804E7A44
  cmps(c,0,(int32_t)c->r[0],2); // 804E7A48
  if (crb(c,2)) { goto L_804E7AC8; } // 804E7A4C
  if (!crb(c,0)) { goto L_804E7A60; } // 804E7A50
  cmps(c,0,(int32_t)c->r[0],1); // 804E7A54
  if (!crb(c,0)) { goto L_804E7A9C; } // 804E7A58
  goto L_804E7AF0; // 804E7A5C
L_804E7A60:;
  cmps(c,0,(int32_t)c->r[0],4); // 804E7A60
  if (!crb(c,0)) { goto L_804E7AF0; } // 804E7A64
  c->r[4]=c->r[30]|c->r[30]; // 804E7A68
  c->r[3]=c->r[1]+0x00000008u; // 804E7A6C
  c->r[5]=0u+0x00000020u; // 804E7A70
  c->lr=0x804E7A78u; f_802DC484(c); // 804E7A74
  c->r[5]=R16(c->r[30]+0x00000020u); // 804E7A78
  c->r[4]=R16(c->r[30]+0x00000022u); // 804E7A7C
  c->r[3]=R16(c->r[30]+0x00000024u); // 804E7A80
  c->r[0]=R16(c->r[30]+0x00000026u); // 804E7A84
  W16(c->r[1]+0x00000028u,c->r[5]); // 804E7A88
  W16(c->r[1]+0x0000002Au,c->r[4]); // 804E7A8C
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 804E7A90
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 804E7A94
  goto L_804E7AF0; // 804E7A98
L_804E7A9C:;
  c->r[3]=c->r[1]+0x00000008u; // 804E7A9C
  c->r[4]=0u+0x00000000u; // 804E7AA0
  c->r[5]=0u+0x00000020u; // 804E7AA4
  c->lr=0x804E7AACu; f_800043EC(c); // 804E7AA8
  c->r[0]=0u+0x00000000u; // 804E7AAC
  c->r[3]=0u+0x00000800u; // 804E7AB0
  W16(c->r[1]+0x00000028u,c->r[3]); // 804E7AB4
  W16(c->r[1]+0x0000002Au,c->r[0]); // 804E7AB8
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 804E7ABC
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 804E7AC0
  goto L_804E7AF0; // 804E7AC4
L_804E7AC8:;
  c->r[3]=c->r[1]+0x00000008u; // 804E7AC8
  c->r[4]=0u+0x00000000u; // 804E7ACC
  c->r[5]=0u+0x00000020u; // 804E7AD0
  c->lr=0x804E7AD8u; f_800043EC(c); // 804E7AD4
  c->r[0]=0u+0x00000000u; // 804E7AD8
  c->r[3]=0u+0x00000100u; // 804E7ADC
  W16(c->r[1]+0x00000028u,c->r[3]); // 804E7AE0
  W16(c->r[1]+0x0000002Au,c->r[0]); // 804E7AE4
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 804E7AE8
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 804E7AEC
L_804E7AF0:;
  c->lr=0x804E7AF4u; f_8037BBA4(c); // 804E7AF0
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E7AF4
  c->r[30]=c->r[3]|c->r[3]; // 804E7AF8
  cmps(c,0,(int32_t)c->r[4],0); // 804E7AFC
  if (!crb(c,2)) { goto L_804E7B0C; } // 804E7B00
  c->lr=0x804E7B08u; f_8037BBCC(c); // 804E7B04
  goto L_804E7B30; // 804E7B08
L_804E7B0C:;
  c->r[3]=c->r[4]+0x000000A6u; // 804E7B0C
  c->r[4]=c->r[1]+0x00000008u; // 804E7B10
  c->r[5]=0u+0x00000028u; // 804E7B14
  c->lr=0x804E7B1Cu; f_802DC484(c); // 804E7B18
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E7B1C
  c->r[3]=c->r[30]|c->r[30]; // 804E7B20
  c->r[0]=c->r[0]|0x00008000u; // 804E7B24
  W32(c->r[29]+0x00000004u,c->r[0]); // 804E7B28
  c->lr=0x804E7B30u; f_8037BBCC(c); // 804E7B2C
L_804E7B30:;
  c->r[3]=c->r[31]|c->r[31]; // 804E7B30
  c->lr=0x804E7B38u; f_8037BBCC(c); // 804E7B34
L_804E7B38:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E7B38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804E7B3C
  c->r[30]=R32(c->r[1]+0x00000038u); // 804E7B40
  c->r[29]=R32(c->r[1]+0x00000034u); // 804E7B44
  c->lr=c->r[0]; // 804E7B48
  c->r[1]=c->r[1]+0x00000040u; // 804E7B4C
  return; // 804E7B50
}

// IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_804E7B54(Ctx* __restrict c) {
  trace_call(0x804E7B54u);
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 804E7B54
  c->r[0]=R16(c->r[4]+0x00000000u); // 804E7B58
  cmpu(c,0,c->r[5],c->r[0]); // 804E7B5C
  if (crb(c,2)) { goto L_804E7B6C; } // 804E7B60
  c->r[3]=0u+0x00000001u; // 804E7B64
  return; // 804E7B68
L_804E7B6C:;
  c->r[5]=R16(c->r[3]+0x00000020u); // 804E7B6C
  c->r[0]=R16(c->r[4]+0x00000002u); // 804E7B70
  cmpu(c,0,c->r[5],c->r[0]); // 804E7B74
  if (crb(c,2)) { goto L_804E7B84; } // 804E7B78
  c->r[3]=0u+0x00000001u; // 804E7B7C
  return; // 804E7B80
L_804E7B84:;
  c->r[5]=R16(c->r[3]+0x00000022u); // 804E7B84
  c->r[0]=R16(c->r[4]+0x00000004u); // 804E7B88
  cmpu(c,0,c->r[5],c->r[0]); // 804E7B8C
  if (crb(c,2)) { goto L_804E7B9C; } // 804E7B90
  c->r[3]=0u+0x00000001u; // 804E7B94
  return; // 804E7B98
L_804E7B9C:;
  c->r[5]=R16(c->r[3]+0x00000024u); // 804E7B9C
  c->r[0]=R16(c->r[4]+0x00000006u); // 804E7BA0
  cmpu(c,0,c->r[5],c->r[0]); // 804E7BA4
  if (crb(c,2)) { goto L_804E7BB4; } // 804E7BA8
  c->r[3]=0u+0x00000001u; // 804E7BAC
  return; // 804E7BB0
L_804E7BB4:;
  c->r[5]=R16(c->r[3]+0x00000026u); // 804E7BB4
  c->r[0]=R16(c->r[4]+0x00000008u); // 804E7BB8
  cmpu(c,0,c->r[5],c->r[0]); // 804E7BBC
  if (crb(c,2)) { goto L_804E7BCC; } // 804E7BC0
  c->r[3]=0u+0x00000001u; // 804E7BC4
  return; // 804E7BC8
L_804E7BCC:;
  c->r[5]=R16(c->r[3]+0x00000028u); // 804E7BCC
  c->r[0]=R16(c->r[4]+0x0000000Au); // 804E7BD0
  cmpu(c,0,c->r[5],c->r[0]); // 804E7BD4
  if (crb(c,2)) { goto L_804E7BE4; } // 804E7BD8
  c->r[3]=0u+0x00000001u; // 804E7BDC
  return; // 804E7BE0
L_804E7BE4:;
  c->r[5]=R16(c->r[3]+0x0000002Au); // 804E7BE4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 804E7BE8
  cmpu(c,0,c->r[5],c->r[0]); // 804E7BEC
  if (crb(c,2)) { goto L_804E7BFC; } // 804E7BF0
  c->r[3]=0u+0x00000001u; // 804E7BF4
  return; // 804E7BF8
L_804E7BFC:;
  c->r[5]=R16(c->r[3]+0x0000002Cu); // 804E7BFC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 804E7C00
  cmpu(c,0,c->r[5],c->r[0]); // 804E7C04
  if (crb(c,2)) { goto L_804E7C14; } // 804E7C08
  c->r[3]=0u+0x00000001u; // 804E7C0C
  return; // 804E7C10
L_804E7C14:;
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 804E7C14
  c->r[0]=R16(c->r[4]+0x00000010u); // 804E7C18
  cmpu(c,0,c->r[5],c->r[0]); // 804E7C1C
  if (crb(c,2)) { goto L_804E7C2C; } // 804E7C20
  c->r[3]=0u+0x00000001u; // 804E7C24
  return; // 804E7C28
L_804E7C2C:;
  c->r[5]=R16(c->r[3]+0x00000030u); // 804E7C2C
  c->r[0]=R16(c->r[4]+0x00000012u); // 804E7C30
  cmpu(c,0,c->r[5],c->r[0]); // 804E7C34
  if (crb(c,2)) { goto L_804E7C44; } // 804E7C38
  c->r[3]=0u+0x00000001u; // 804E7C3C
  return; // 804E7C40
L_804E7C44:;
  c->r[5]=R16(c->r[3]+0x00000032u); // 804E7C44
  c->r[0]=R16(c->r[4]+0x00000014u); // 804E7C48
  cmpu(c,0,c->r[5],c->r[0]); // 804E7C4C
  if (crb(c,2)) { goto L_804E7C5C; } // 804E7C50
  c->r[3]=0u+0x00000001u; // 804E7C54
  return; // 804E7C58
L_804E7C5C:;
  c->r[5]=R16(c->r[3]+0x00000034u); // 804E7C5C
  c->r[0]=R16(c->r[4]+0x00000016u); // 804E7C60
  c->r[3]=c->r[0]-c->r[5]; // 804E7C64
  c->r[0]=c->r[5]-c->r[0]; // 804E7C68
  c->r[0]=c->r[3]|c->r[0]; // 804E7C6C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7C70
  return; // 804E7C74
}

// SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
void f_804E7C78(Ctx* __restrict c) {
  trace_call(0x804E7C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7C78
  c->r[0]=c->lr; // 804E7C7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E7C80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E7C84
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E7C88
  c->r[30]=c->r[4]|c->r[4]; // 804E7C8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E7C90
  c->r[29]=c->r[3]|c->r[3]; // 804E7C94
  c->lr=0x804E7C9Cu; f_8037BBA4(c); // 804E7C98
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E7C9C
  c->r[31]=c->r[3]|c->r[3]; // 804E7CA0
  cmps(c,0,(int32_t)c->r[0],0); // 804E7CA4
  if (!crb(c,2)) { goto L_804E7CB4; } // 804E7CA8
  c->lr=0x804E7CB0u; f_8037BBCC(c); // 804E7CAC
  goto L_804E7D34; // 804E7CB0
L_804E7CB4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 804E7CB4
  cmps(c,0,(int32_t)c->r[0],3); // 804E7CB8
  if (!crb(c,2)) { goto L_804E7CDC; } // 804E7CBC
  c->r[4]=R16(c->r[30]+0x00000000u); // 804E7CC0
  c->r[3]=R16(c->r[30]+0x00000002u); // 804E7CC4
  c->r[0]=R16(c->r[30]+0x00000004u); // 804E7CC8
  W16(c->r[1]+0x00000008u,c->r[4]); // 804E7CCC
  W16(c->r[1]+0x0000000Au,c->r[3]); // 804E7CD0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E7CD4
  goto L_804E7CEC; // 804E7CD8
L_804E7CDC:;
  c->r[0]=0u+0x00000000u; // 804E7CDC
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E7CE0
  W16(c->r[1]+0x0000000Au,c->r[0]); // 804E7CE4
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E7CE8
L_804E7CEC:;
  c->lr=0x804E7CF0u; f_8037BBA4(c); // 804E7CEC
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E7CF0
  c->r[30]=c->r[3]|c->r[3]; // 804E7CF4
  cmps(c,0,(int32_t)c->r[4],0); // 804E7CF8
  if (!crb(c,2)) { goto L_804E7D08; } // 804E7CFC
  c->lr=0x804E7D04u; f_8037BBCC(c); // 804E7D00
  goto L_804E7D2C; // 804E7D04
L_804E7D08:;
  c->r[3]=c->r[4]+0x000000DCu; // 804E7D08
  c->r[4]=c->r[1]+0x00000008u; // 804E7D0C
  c->r[5]=0u+0x00000006u; // 804E7D10
  c->lr=0x804E7D18u; f_802DC484(c); // 804E7D14
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E7D18
  c->r[3]=c->r[30]|c->r[30]; // 804E7D1C
  c->r[0]=c->r[0]|0x00040000u; // 804E7D20
  W32(c->r[29]+0x00000004u,c->r[0]); // 804E7D24
  c->lr=0x804E7D2Cu; f_8037BBCC(c); // 804E7D28
L_804E7D2C:;
  c->r[3]=c->r[31]|c->r[31]; // 804E7D2C
  c->lr=0x804E7D34u; f_8037BBCC(c); // 804E7D30
L_804E7D34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E7D34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E7D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E7D3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E7D40
  c->lr=c->r[0]; // 804E7D44
  c->r[1]=c->r[1]+0x00000020u; // 804E7D48
  return; // 804E7D4C
}

// SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_804E7D50(Ctx* __restrict c) {
  trace_call(0x804E7D50u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E7D50
  c->r[0]=c->lr; // 804E7D54
  W32(c->r[1]+0x00000084u,c->r[0]); // 804E7D58
  c->r[11]=c->r[1]+0x00000080u; // 804E7D5C
  c->lr=0x804E7D64u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E7D60
  c->r[17]=c->r[3]|c->r[3]; // 804E7D64
  c->r[18]=c->r[4]|c->r[4]; // 804E7D68
  c->lr=0x804E7D70u; f_8037BBA4(c); // 804E7D6C
  c->r[4]=R32(c->r[17]+0x00000000u); // 804E7D70
  c->r[16]=c->r[3]|c->r[3]; // 804E7D74
  cmps(c,1,(int32_t)c->r[4],0); // 804E7D78
  if (!crb(c,6)) { goto L_804E7D8C; } // 804E7D7C
  c->lr=0x804E7D84u; f_8037BBCC(c); // 804E7D80
  c->r[3]=0u+0x00000000u; // 804E7D84
  goto L_804E835C; // 804E7D88
L_804E7D8C:;
  c->r[0]=R8(c->r[17]+0x0000001Cu); // 804E7D8C
  cmps(c,0,(int32_t)c->r[0],0); // 804E7D90
  if (!crb(c,2)) { goto L_804E7DB8; } // 804E7D94
  c->r[3]=0u+0x00000000u; // 804E7D98
  if (crb(c,6)) { goto L_804E7DB0; } // 804E7D9C
  c->r[0]=R16(c->r[4]+0x00000038u); // 804E7DA0
  cmpu(c,0,c->r[0],0x00000001u); // 804E7DA4
  if (!crb(c,2)) { goto L_804E7DB0; } // 804E7DA8
  c->r[3]=0u+0x00000001u; // 804E7DAC
L_804E7DB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E7DB0
  if (!crb(c,2)) { goto L_804E7E20; } // 804E7DB4
L_804E7DB8:;
  c->r[20]=R16(c->r[18]+0x00000000u); // 804E7DB8
  c->r[0]=0u+0x00000000u; // 804E7DBC
  c->r[19]=R16(c->r[18]+0x00000002u); // 804E7DC0
  c->r[12]=R16(c->r[18]+0x00000004u); // 804E7DC4
  c->r[11]=R16(c->r[18]+0x00000006u); // 804E7DC8
  c->r[10]=R16(c->r[18]+0x00000008u); // 804E7DCC
  c->r[9]=R16(c->r[18]+0x0000000Au); // 804E7DD0
  c->r[8]=R16(c->r[18]+0x0000000Cu); // 804E7DD4
  c->r[7]=R16(c->r[18]+0x0000000Eu); // 804E7DD8
  c->r[6]=R16(c->r[18]+0x00000010u); // 804E7DDC
  c->r[5]=R16(c->r[18]+0x00000012u); // 804E7DE0
  c->r[4]=R16(c->r[18]+0x00000014u); // 804E7DE4
  c->r[3]=R16(c->r[18]+0x00000016u); // 804E7DE8
  W16(c->r[17]+0x0000001Eu,c->r[20]); // 804E7DEC
  W16(c->r[17]+0x00000020u,c->r[19]); // 804E7DF0
  W16(c->r[17]+0x00000022u,c->r[12]); // 804E7DF4
  W16(c->r[17]+0x00000024u,c->r[11]); // 804E7DF8
  W16(c->r[17]+0x00000026u,c->r[10]); // 804E7DFC
  W16(c->r[17]+0x00000028u,c->r[9]); // 804E7E00
  W16(c->r[17]+0x0000002Au,c->r[8]); // 804E7E04
  W16(c->r[17]+0x0000002Cu,c->r[7]); // 804E7E08
  W16(c->r[17]+0x0000002Eu,c->r[6]); // 804E7E0C
  W16(c->r[17]+0x00000030u,c->r[5]); // 804E7E10
  W16(c->r[17]+0x00000032u,c->r[4]); // 804E7E14
  W16(c->r[17]+0x00000034u,c->r[3]); // 804E7E18
  W8(c->r[17]+0x0000001Cu,c->r[0]); // 804E7E1C
L_804E7E20:;
  c->r[3]=c->r[17]|c->r[17]; // 804E7E20
  c->r[4]=c->r[18]|c->r[18]; // 804E7E24
  c->lr=0x804E7E2Cu; f_804E7B54(c); // 804E7E28
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 804E7E2C
  c->r[19]=c->r[3]|c->r[3]; // 804E7E30
  c->r[4]=R16(c->r[18]+0x00000000u); // 804E7E34
  W16(c->r[1]+0x00000008u,c->r[0]); // 804E7E38
  c->r[0]=R16(c->r[17]+0x00000020u); // 804E7E3C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E7E40
  c->r[0]=R16(c->r[17]+0x00000022u); // 804E7E44
  W16(c->r[1]+0x00000028u,c->r[0]); // 804E7E48
  c->r[0]=R16(c->r[17]+0x00000024u); // 804E7E4C
  W16(c->r[1]+0x00000010u,c->r[0]); // 804E7E50
  c->r[0]=R16(c->r[17]+0x00000026u); // 804E7E54
  W16(c->r[1]+0x00000014u,c->r[0]); // 804E7E58
  c->r[0]=R16(c->r[17]+0x00000028u); // 804E7E5C
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 804E7E60
  c->r[0]=R16(c->r[17]+0x0000002Au); // 804E7E64
  W16(c->r[1]+0x00000018u,c->r[0]); // 804E7E68
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 804E7E6C
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 804E7E70
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 804E7E74
  W16(c->r[1]+0x00000030u,c->r[0]); // 804E7E78
  c->r[0]=R16(c->r[17]+0x00000030u); // 804E7E7C
  W16(c->r[1]+0x00000020u,c->r[0]); // 804E7E80
  c->r[0]=R16(c->r[17]+0x00000032u); // 804E7E84
  W16(c->r[1]+0x00000024u,c->r[0]); // 804E7E88
  c->r[0]=R16(c->r[17]+0x00000034u); // 804E7E8C
  W16(c->r[1]+0x00000034u,c->r[0]); // 804E7E90
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 804E7E94
  cmpu(c,0,c->r[0],c->r[4]); // 804E7E98
  if (!crb(c,2)) { goto L_804E7EA8; } // 804E7E9C
  c->r[31]=0u+0x00000000u; // 804E7EA0
  goto L_804E7EC4; // 804E7EA4
L_804E7EA8:;
  c->r[3]=0u+0x2AAB0000u; // 804E7EA8
  c->r[0]=c->r[4]-c->r[0]; // 804E7EAC
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7EB0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7EB4
  c->r[0]=sraw(c,c->r[0],4); // 804E7EB8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7EBC
  c->r[31]=c->r[0]+c->r[3]; // 804E7EC0
L_804E7EC4:;
  c->r[4]=R16(c->r[18]+0x00000002u); // 804E7EC4
  c->r[0]=R16(c->r[17]+0x00000020u); // 804E7EC8
  cmpu(c,0,c->r[0],c->r[4]); // 804E7ECC
  if (!crb(c,2)) { goto L_804E7EDC; } // 804E7ED0
  c->r[30]=0u+0x00000000u; // 804E7ED4
  goto L_804E7EF8; // 804E7ED8
L_804E7EDC:;
  c->r[3]=0u+0x2AAB0000u; // 804E7EDC
  c->r[0]=c->r[4]-c->r[0]; // 804E7EE0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7EE4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7EE8
  c->r[0]=sraw(c,c->r[0],4); // 804E7EEC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7EF0
  c->r[30]=c->r[0]+c->r[3]; // 804E7EF4
L_804E7EF8:;
  c->r[4]=R16(c->r[18]+0x00000004u); // 804E7EF8
  c->r[0]=R16(c->r[17]+0x00000022u); // 804E7EFC
  cmpu(c,0,c->r[0],c->r[4]); // 804E7F00
  if (!crb(c,2)) { goto L_804E7F10; } // 804E7F04
  c->r[29]=0u+0x00000000u; // 804E7F08
  goto L_804E7F2C; // 804E7F0C
L_804E7F10:;
  c->r[3]=0u+0x2AAB0000u; // 804E7F10
  c->r[0]=c->r[4]-c->r[0]; // 804E7F14
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7F18
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7F1C
  c->r[0]=sraw(c,c->r[0],4); // 804E7F20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7F24
  c->r[29]=c->r[0]+c->r[3]; // 804E7F28
L_804E7F2C:;
  c->r[4]=R16(c->r[18]+0x00000006u); // 804E7F2C
  c->r[0]=R16(c->r[17]+0x00000024u); // 804E7F30
  cmpu(c,0,c->r[0],c->r[4]); // 804E7F34
  if (!crb(c,2)) { goto L_804E7F44; } // 804E7F38
  c->r[28]=0u+0x00000000u; // 804E7F3C
  goto L_804E7F60; // 804E7F40
L_804E7F44:;
  c->r[3]=0u+0x2AAB0000u; // 804E7F44
  c->r[0]=c->r[4]-c->r[0]; // 804E7F48
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7F4C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7F50
  c->r[0]=sraw(c,c->r[0],4); // 804E7F54
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7F58
  c->r[28]=c->r[0]+c->r[3]; // 804E7F5C
L_804E7F60:;
  c->r[4]=R16(c->r[18]+0x00000008u); // 804E7F60
  c->r[0]=R16(c->r[17]+0x00000026u); // 804E7F64
  cmpu(c,0,c->r[0],c->r[4]); // 804E7F68
  if (!crb(c,2)) { goto L_804E7F78; } // 804E7F6C
  c->r[27]=0u+0x00000000u; // 804E7F70
  goto L_804E7F94; // 804E7F74
L_804E7F78:;
  c->r[3]=0u+0x2AAB0000u; // 804E7F78
  c->r[0]=c->r[4]-c->r[0]; // 804E7F7C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7F80
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7F84
  c->r[0]=sraw(c,c->r[0],4); // 804E7F88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7F8C
  c->r[27]=c->r[0]+c->r[3]; // 804E7F90
L_804E7F94:;
  c->r[4]=R16(c->r[18]+0x0000000Au); // 804E7F94
  c->r[0]=R16(c->r[17]+0x00000028u); // 804E7F98
  cmpu(c,0,c->r[0],c->r[4]); // 804E7F9C
  if (!crb(c,2)) { goto L_804E7FAC; } // 804E7FA0
  c->r[26]=0u+0x00000000u; // 804E7FA4
  goto L_804E7FC8; // 804E7FA8
L_804E7FAC:;
  c->r[3]=0u+0x2AAB0000u; // 804E7FAC
  c->r[0]=c->r[4]-c->r[0]; // 804E7FB0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7FB4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7FB8
  c->r[0]=sraw(c,c->r[0],4); // 804E7FBC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7FC0
  c->r[26]=c->r[0]+c->r[3]; // 804E7FC4
L_804E7FC8:;
  c->r[4]=R16(c->r[18]+0x0000000Cu); // 804E7FC8
  c->r[0]=R16(c->r[17]+0x0000002Au); // 804E7FCC
  cmpu(c,0,c->r[0],c->r[4]); // 804E7FD0
  if (!crb(c,2)) { goto L_804E7FE0; } // 804E7FD4
  c->r[25]=0u+0x00000000u; // 804E7FD8
  goto L_804E7FFC; // 804E7FDC
L_804E7FE0:;
  c->r[3]=0u+0x2AAB0000u; // 804E7FE0
  c->r[0]=c->r[4]-c->r[0]; // 804E7FE4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E7FE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E7FEC
  c->r[0]=sraw(c,c->r[0],4); // 804E7FF0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E7FF4
  c->r[25]=c->r[0]+c->r[3]; // 804E7FF8
L_804E7FFC:;
  c->r[4]=R16(c->r[18]+0x0000000Eu); // 804E7FFC
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 804E8000
  cmpu(c,0,c->r[0],c->r[4]); // 804E8004
  if (!crb(c,2)) { goto L_804E8014; } // 804E8008
  c->r[24]=0u+0x00000000u; // 804E800C
  goto L_804E8030; // 804E8010
L_804E8014:;
  c->r[3]=0u+0x2AAB0000u; // 804E8014
  c->r[0]=c->r[4]-c->r[0]; // 804E8018
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E801C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E8020
  c->r[0]=sraw(c,c->r[0],4); // 804E8024
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E8028
  c->r[24]=c->r[0]+c->r[3]; // 804E802C
L_804E8030:;
  c->r[4]=R16(c->r[18]+0x00000010u); // 804E8030
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 804E8034
  cmpu(c,0,c->r[0],c->r[4]); // 804E8038
  if (!crb(c,2)) { goto L_804E8048; } // 804E803C
  c->r[23]=0u+0x00000000u; // 804E8040
  goto L_804E8064; // 804E8044
L_804E8048:;
  c->r[3]=0u+0x2AAB0000u; // 804E8048
  c->r[0]=c->r[4]-c->r[0]; // 804E804C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E8050
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E8054
  c->r[0]=sraw(c,c->r[0],4); // 804E8058
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E805C
  c->r[23]=c->r[0]+c->r[3]; // 804E8060
L_804E8064:;
  c->r[4]=R16(c->r[18]+0x00000012u); // 804E8064
  c->r[0]=R16(c->r[17]+0x00000030u); // 804E8068
  cmpu(c,0,c->r[0],c->r[4]); // 804E806C
  if (!crb(c,2)) { goto L_804E807C; } // 804E8070
  c->r[22]=0u+0x00000000u; // 804E8074
  goto L_804E8098; // 804E8078
L_804E807C:;
  c->r[3]=0u+0x2AAB0000u; // 804E807C
  c->r[0]=c->r[4]-c->r[0]; // 804E8080
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E8084
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E8088
  c->r[0]=sraw(c,c->r[0],4); // 804E808C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E8090
  c->r[22]=c->r[0]+c->r[3]; // 804E8094
L_804E8098:;
  c->r[4]=R16(c->r[18]+0x00000014u); // 804E8098
  c->r[0]=R16(c->r[17]+0x00000032u); // 804E809C
  cmpu(c,0,c->r[0],c->r[4]); // 804E80A0
  if (!crb(c,2)) { goto L_804E80B0; } // 804E80A4
  c->r[21]=0u+0x00000000u; // 804E80A8
  goto L_804E80CC; // 804E80AC
L_804E80B0:;
  c->r[3]=0u+0x2AAB0000u; // 804E80B0
  c->r[0]=c->r[4]-c->r[0]; // 804E80B4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E80B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E80BC
  c->r[0]=sraw(c,c->r[0],4); // 804E80C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E80C4
  c->r[21]=c->r[0]+c->r[3]; // 804E80C8
L_804E80CC:;
  c->r[4]=R16(c->r[18]+0x00000016u); // 804E80CC
  c->r[0]=R16(c->r[17]+0x00000034u); // 804E80D0
  cmpu(c,0,c->r[0],c->r[4]); // 804E80D4
  if (!crb(c,2)) { goto L_804E80E4; } // 804E80D8
  c->r[20]=0u+0x00000000u; // 804E80DC
  goto L_804E8100; // 804E80E0
L_804E80E4:;
  c->r[3]=0u+0x2AAB0000u; // 804E80E4
  c->r[0]=c->r[4]-c->r[0]; // 804E80E8
  c->r[3]=c->r[3]+0xFFFFAAABu; // 804E80EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 804E80F0
  c->r[0]=sraw(c,c->r[0],4); // 804E80F4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E80F8
  c->r[20]=c->r[0]+c->r[3]; // 804E80FC
L_804E8100:;
  W16(c->r[1]+0x0000000Au,c->r[31]); // 804E8100
  c->r[3]=c->r[17]|c->r[17]; // 804E8104
  c->r[4]=c->r[1]+0x00000008u; // 804E8108
  c->r[5]=0u+0x00000000u; // 804E810C
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 804E8110
  W16(c->r[1]+0x0000002Au,c->r[29]); // 804E8114
  W16(c->r[1]+0x00000012u,c->r[28]); // 804E8118
  W16(c->r[1]+0x00000016u,c->r[27]); // 804E811C
  W16(c->r[1]+0x0000002Eu,c->r[26]); // 804E8120
  W16(c->r[1]+0x0000001Au,c->r[25]); // 804E8124
  W16(c->r[1]+0x0000001Eu,c->r[24]); // 804E8128
  W16(c->r[1]+0x00000032u,c->r[23]); // 804E812C
  W16(c->r[1]+0x00000022u,c->r[22]); // 804E8130
  W16(c->r[1]+0x00000026u,c->r[21]); // 804E8134
  W16(c->r[1]+0x00000036u,c->r[20]); // 804E8138
  c->lr=0x804E8140u; f_804E8EF4(c); // 804E813C
  c->r[0]=R16(c->r[18]+0x00000000u); // 804E8140
  cmps(c,0,(int32_t)c->r[0],0); // 804E8144
  if (crb(c,2)) { goto L_804E8154; } // 804E8148
  cmps(c,0,(int32_t)c->r[31],0); // 804E814C
  if (!crb(c,2)) { goto L_804E815C; } // 804E8150
L_804E8154:;
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 804E8154
  goto L_804E816C; // 804E8158
L_804E815C:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 804E815C
  c->r[3]=R16(c->r[17]+0x0000001Eu); // 804E8160
  c->r[0]=c->r[3]+c->r[0]; // 804E8164
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 804E8168
L_804E816C:;
  c->r[0]=R16(c->r[18]+0x00000002u); // 804E816C
  cmps(c,0,(int32_t)c->r[0],0); // 804E8170
  if (crb(c,2)) { goto L_804E8180; } // 804E8174
  cmps(c,0,(int32_t)c->r[30],0); // 804E8178
  if (!crb(c,2)) { goto L_804E8188; } // 804E817C
L_804E8180:;
  W16(c->r[17]+0x00000020u,c->r[0]); // 804E8180
  goto L_804E8198; // 804E8184
L_804E8188:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 804E8188
  c->r[3]=R16(c->r[17]+0x00000020u); // 804E818C
  c->r[0]=c->r[3]+c->r[0]; // 804E8190
  W16(c->r[17]+0x00000020u,c->r[0]); // 804E8194
L_804E8198:;
  c->r[0]=R16(c->r[18]+0x00000004u); // 804E8198
  cmps(c,0,(int32_t)c->r[0],0); // 804E819C
  if (crb(c,2)) { goto L_804E81AC; } // 804E81A0
  cmps(c,0,(int32_t)c->r[29],0); // 804E81A4
  if (!crb(c,2)) { goto L_804E81B4; } // 804E81A8
L_804E81AC:;
  W16(c->r[17]+0x00000022u,c->r[0]); // 804E81AC
  goto L_804E81C4; // 804E81B0
L_804E81B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 804E81B4
  c->r[3]=R16(c->r[17]+0x00000022u); // 804E81B8
  c->r[0]=c->r[3]+c->r[0]; // 804E81BC
  W16(c->r[17]+0x00000022u,c->r[0]); // 804E81C0
L_804E81C4:;
  c->r[0]=R16(c->r[18]+0x00000006u); // 804E81C4
  cmps(c,0,(int32_t)c->r[0],0); // 804E81C8
  if (crb(c,2)) { goto L_804E81D8; } // 804E81CC
  cmps(c,0,(int32_t)c->r[28],0); // 804E81D0
  if (!crb(c,2)) { goto L_804E81E0; } // 804E81D4
L_804E81D8:;
  W16(c->r[17]+0x00000024u,c->r[0]); // 804E81D8
  goto L_804E81F0; // 804E81DC
L_804E81E0:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)96); // 804E81E0
  c->r[3]=R16(c->r[17]+0x00000024u); // 804E81E4
  c->r[0]=c->r[3]+c->r[0]; // 804E81E8
  W16(c->r[17]+0x00000024u,c->r[0]); // 804E81EC
L_804E81F0:;
  c->r[0]=R16(c->r[18]+0x00000008u); // 804E81F0
  cmps(c,0,(int32_t)c->r[0],0); // 804E81F4
  if (crb(c,2)) { goto L_804E8204; } // 804E81F8
  cmps(c,0,(int32_t)c->r[27],0); // 804E81FC
  if (!crb(c,2)) { goto L_804E820C; } // 804E8200
L_804E8204:;
  W16(c->r[17]+0x00000026u,c->r[0]); // 804E8204
  goto L_804E821C; // 804E8208
L_804E820C:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 804E820C
  c->r[3]=R16(c->r[17]+0x00000026u); // 804E8210
  c->r[0]=c->r[3]+c->r[0]; // 804E8214
  W16(c->r[17]+0x00000026u,c->r[0]); // 804E8218
L_804E821C:;
  c->r[0]=R16(c->r[18]+0x0000000Au); // 804E821C
  cmps(c,0,(int32_t)c->r[0],0); // 804E8220
  if (crb(c,2)) { goto L_804E8230; } // 804E8224
  cmps(c,0,(int32_t)c->r[26],0); // 804E8228
  if (!crb(c,2)) { goto L_804E8238; } // 804E822C
L_804E8230:;
  W16(c->r[17]+0x00000028u,c->r[0]); // 804E8230
  goto L_804E8248; // 804E8234
L_804E8238:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 804E8238
  c->r[3]=R16(c->r[17]+0x00000028u); // 804E823C
  c->r[0]=c->r[3]+c->r[0]; // 804E8240
  W16(c->r[17]+0x00000028u,c->r[0]); // 804E8244
L_804E8248:;
  c->r[0]=R16(c->r[18]+0x0000000Cu); // 804E8248
  cmps(c,0,(int32_t)c->r[0],0); // 804E824C
  if (crb(c,2)) { goto L_804E825C; } // 804E8250
  cmps(c,0,(int32_t)c->r[25],0); // 804E8254
  if (!crb(c,2)) { goto L_804E8264; } // 804E8258
L_804E825C:;
  W16(c->r[17]+0x0000002Au,c->r[0]); // 804E825C
  goto L_804E8274; // 804E8260
L_804E8264:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)96); // 804E8264
  c->r[3]=R16(c->r[17]+0x0000002Au); // 804E8268
  c->r[0]=c->r[3]+c->r[0]; // 804E826C
  W16(c->r[17]+0x0000002Au,c->r[0]); // 804E8270
L_804E8274:;
  c->r[0]=R16(c->r[18]+0x0000000Eu); // 804E8274
  cmps(c,0,(int32_t)c->r[0],0); // 804E8278
  if (crb(c,2)) { goto L_804E8288; } // 804E827C
  cmps(c,0,(int32_t)c->r[24],0); // 804E8280
  if (!crb(c,2)) { goto L_804E8290; } // 804E8284
L_804E8288:;
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 804E8288
  goto L_804E82A0; // 804E828C
L_804E8290:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)96); // 804E8290
  c->r[3]=R16(c->r[17]+0x0000002Cu); // 804E8294
  c->r[0]=c->r[3]+c->r[0]; // 804E8298
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 804E829C
L_804E82A0:;
  c->r[0]=R16(c->r[18]+0x00000010u); // 804E82A0
  cmps(c,0,(int32_t)c->r[0],0); // 804E82A4
  if (crb(c,2)) { goto L_804E82B4; } // 804E82A8
  cmps(c,0,(int32_t)c->r[23],0); // 804E82AC
  if (!crb(c,2)) { goto L_804E82BC; } // 804E82B0
L_804E82B4:;
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 804E82B4
  goto L_804E82CC; // 804E82B8
L_804E82BC:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 804E82BC
  c->r[3]=R16(c->r[17]+0x0000002Eu); // 804E82C0
  c->r[0]=c->r[3]+c->r[0]; // 804E82C4
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 804E82C8
L_804E82CC:;
  c->r[0]=R16(c->r[18]+0x00000012u); // 804E82CC
  cmps(c,0,(int32_t)c->r[0],0); // 804E82D0
  if (crb(c,2)) { goto L_804E82E0; } // 804E82D4
  cmps(c,0,(int32_t)c->r[22],0); // 804E82D8
  if (!crb(c,2)) { goto L_804E82E8; } // 804E82DC
L_804E82E0:;
  W16(c->r[17]+0x00000030u,c->r[0]); // 804E82E0
  goto L_804E82F8; // 804E82E4
L_804E82E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)96); // 804E82E8
  c->r[3]=R16(c->r[17]+0x00000030u); // 804E82EC
  c->r[0]=c->r[3]+c->r[0]; // 804E82F0
  W16(c->r[17]+0x00000030u,c->r[0]); // 804E82F4
L_804E82F8:;
  c->r[0]=R16(c->r[18]+0x00000014u); // 804E82F8
  cmps(c,0,(int32_t)c->r[0],0); // 804E82FC
  if (crb(c,2)) { goto L_804E830C; } // 804E8300
  cmps(c,0,(int32_t)c->r[21],0); // 804E8304
  if (!crb(c,2)) { goto L_804E8314; } // 804E8308
L_804E830C:;
  W16(c->r[17]+0x00000032u,c->r[0]); // 804E830C
  goto L_804E8324; // 804E8310
L_804E8314:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)96); // 804E8314
  c->r[3]=R16(c->r[17]+0x00000032u); // 804E8318
  c->r[0]=c->r[3]+c->r[0]; // 804E831C
  W16(c->r[17]+0x00000032u,c->r[0]); // 804E8320
L_804E8324:;
  c->r[0]=R16(c->r[18]+0x00000016u); // 804E8324
  cmps(c,0,(int32_t)c->r[0],0); // 804E8328
  if (crb(c,2)) { goto L_804E8338; } // 804E832C
  cmps(c,0,(int32_t)c->r[20],0); // 804E8330
  if (!crb(c,2)) { goto L_804E8340; } // 804E8334
L_804E8338:;
  W16(c->r[17]+0x00000034u,c->r[0]); // 804E8338
  goto L_804E8350; // 804E833C
L_804E8340:;
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)96); // 804E8340
  c->r[3]=R16(c->r[17]+0x00000034u); // 804E8344
  c->r[0]=c->r[3]+c->r[0]; // 804E8348
  W16(c->r[17]+0x00000034u,c->r[0]); // 804E834C
L_804E8350:;
  c->r[3]=c->r[16]|c->r[16]; // 804E8350
  c->lr=0x804E8358u; f_8037BBCC(c); // 804E8354
  c->r[3]=c->r[19]|c->r[19]; // 804E8358
L_804E835C:;
  c->r[11]=c->r[1]+0x00000080u; // 804E835C
  c->lr=0x804E8364u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E8360
  c->r[0]=R32(c->r[1]+0x00000084u); // 804E8364
  c->lr=c->r[0]; // 804E8368
  c->r[1]=c->r[1]+0x00000080u; // 804E836C
  return; // 804E8370
}

// SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
void f_804E8374(Ctx* __restrict c) {
  trace_call(0x804E8374u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8374
  c->r[0]=c->lr; // 804E8378
  c->r[12]=R16(c->r[4]+0x00000000u); // 804E837C
  c->r[11]=0u+0x00000000u; // 804E8380
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E8384
  c->r[10]=R16(c->r[4]+0x00000002u); // 804E8388
  c->r[9]=R16(c->r[4]+0x00000004u); // 804E838C
  c->r[8]=R16(c->r[4]+0x00000006u); // 804E8390
  c->r[7]=R16(c->r[4]+0x00000008u); // 804E8394
  c->r[6]=R16(c->r[4]+0x0000000Au); // 804E8398
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 804E839C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 804E83A0
  c->r[4]=c->r[1]+0x00000008u; // 804E83A4
  W16(c->r[1]+0x00000008u,c->r[12]); // 804E83A8
  W16(c->r[1]+0x0000000Au,c->r[11]); // 804E83AC
  W16(c->r[1]+0x0000000Cu,c->r[10]); // 804E83B0
  W16(c->r[1]+0x0000000Eu,c->r[11]); // 804E83B4
  W16(c->r[1]+0x00000010u,c->r[9]); // 804E83B8
  W16(c->r[1]+0x00000012u,c->r[11]); // 804E83BC
  W16(c->r[1]+0x00000014u,c->r[8]); // 804E83C0
  W16(c->r[1]+0x00000016u,c->r[11]); // 804E83C4
  W16(c->r[1]+0x00000018u,c->r[7]); // 804E83C8
  W16(c->r[1]+0x0000001Au,c->r[11]); // 804E83CC
  W16(c->r[1]+0x0000001Cu,c->r[6]); // 804E83D0
  W16(c->r[1]+0x0000001Eu,c->r[11]); // 804E83D4
  W16(c->r[1]+0x00000020u,c->r[5]); // 804E83D8
  W16(c->r[1]+0x00000022u,c->r[11]); // 804E83DC
  W16(c->r[1]+0x00000024u,c->r[0]); // 804E83E0
  W16(c->r[1]+0x00000026u,c->r[11]); // 804E83E4
  c->lr=0x804E83ECu; f_804E924C(c); // 804E83E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E83EC
  c->lr=c->r[0]; // 804E83F0
  c->r[1]=c->r[1]+0x00000030u; // 804E83F4
  return; // 804E83F8
}

// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
void f_804E83FC(Ctx* __restrict c) {
  trace_call(0x804E83FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E83FC
  c->r[0]=c->lr; // 804E8400
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E8404
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E8408
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E840C
  c->f[31]=c->f[1]; // 804E8410
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E8414
  c->r[31]=c->r[3]|c->r[3]; // 804E8418
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E841C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E8420
  W32(c->r[1]+0x00000020u,c->r[28]); // 804E8424
  c->r[28]=c->r[4]|c->r[4]; // 804E8428
  c->lr=0x804E8430u; f_8037BBA4(c); // 804E842C
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E8430
  c->r[30]=c->r[3]|c->r[3]; // 804E8434
  cmps(c,0,(int32_t)c->r[0],0); // 804E8438
  if (!crb(c,2)) { goto L_804E8448; } // 804E843C
  c->lr=0x804E8444u; f_8037BBCC(c); // 804E8440
  goto L_804E85A0; // 804E8444
L_804E8448:;
  cmps(c,0,(int32_t)c->r[28],0); // 804E8448
  if (crb(c,2)) { goto L_804E8518; } // 804E844C
  c->r[3]=R32(c->r[31]+0x00000018u); // 804E8450
  c->r[0]=0u+0x43300000u; // 804E8454
  W32(c->r[1]+0x00000018u,c->r[0]); // 804E8458
  c->r[0]=c->r[3]^0x80000000u; // 804E845C
  {uint32_t ea=c->r[2]+0x00001928u; c->f[2]=RF64(ea);} // 804E8460
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804E8464
  {uint32_t ea=c->r[2]+0x00001918u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E8468
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 804E846C
  {uint32_t ea=c->r[2]+0x00001930u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E8470
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E8474
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804E8478
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804E847C
  fcmp(c,0,c->f[0],c->f[3]); // 804E8480
  if (!crb(c,1)) { goto L_804E848C; } // 804E8484
  goto L_804E84A0; // 804E8488
L_804E848C:;
  {uint32_t ea=c->r[2]+0x00001934u; c->f[3]=c->ps1[3]=RF32(ea);} // 804E848C
  fcmp(c,0,c->f[0],c->f[3]); // 804E8490
  if (!crb(c,0)) { goto L_804E849C; } // 804E8494
  goto L_804E84A0; // 804E8498
L_804E849C:;
  c->f[3]=c->f[0]; // 804E849C
L_804E84A0:;
  {uint32_t ea=c->r[2]+0x00001938u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E84A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 804E84A4
  c->lr=0x804E84ACu; f_803A9ADC(c); // 804E84A8
  c->r[0]=0u+0x00000000u; // 804E84AC
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 804E84B0
  W16(c->r[1]+0x00000008u,c->r[4]); // 804E84B4
  W16(c->r[1]+0x0000000Au,c->r[3]); // 804E84B8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 804E84BC
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 804E84C0
  W16(c->r[1]+0x00000010u,c->r[0]); // 804E84C4
  W16(c->r[1]+0x00000012u,c->r[0]); // 804E84C8
  W16(c->r[1]+0x00000014u,c->r[0]); // 804E84CC
  c->lr=0x804E84D4u; f_8037BBA4(c); // 804E84D0
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E84D4
  c->r[29]=c->r[3]|c->r[3]; // 804E84D8
  cmps(c,0,(int32_t)c->r[4],0); // 804E84DC
  if (!crb(c,2)) { goto L_804E84EC; } // 804E84E0
  c->lr=0x804E84E8u; f_8037BBCC(c); // 804E84E4
  goto L_804E8598; // 804E84E8
L_804E84EC:;
  c->r[3]=c->r[4]+0x000000CEu; // 804E84EC
  c->r[4]=c->r[1]+0x00000008u; // 804E84F0
  c->r[5]=0u+0x0000000Eu; // 804E84F4
  c->lr=0x804E84FCu; f_802DC484(c); // 804E84F8
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E84FC
  c->r[3]=c->r[29]|c->r[29]; // 804E8500
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 804E8504
  c->r[0]=c->r[0]|0x00010000u; // 804E8508
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E850C
  c->lr=0x804E8514u; f_8037BBCC(c); // 804E8510
  goto L_804E8598; // 804E8514
L_804E8518:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 804E8518
  c->r[0]=0u+0x43300000u; // 804E851C
  W32(c->r[1]+0x00000018u,c->r[0]); // 804E8520
  c->r[0]=c->r[3]^0x80000000u; // 804E8524
  {uint32_t ea=c->r[2]+0x00001928u; c->f[2]=RF64(ea);} // 804E8528
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 804E852C
  {uint32_t ea=c->r[2]+0x00001918u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E8530
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 804E8534
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804E8538
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 804E853C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 804E8540
  c->lr=0x804E8548u; f_8037BBA4(c); // 804E8544
  c->r[28]=R32(c->r[31]+0x00000000u); // 804E8548
  c->r[29]=c->r[3]|c->r[3]; // 804E854C
  cmps(c,0,(int32_t)c->r[28],0); // 804E8550
  if (!crb(c,2)) { goto L_804E8560; } // 804E8554
  c->lr=0x804E855Cu; f_8037BBCC(c); // 804E8558
  goto L_804E8598; // 804E855C
L_804E8560:;
  {uint32_t ea=c->r[2]+0x00001938u; c->f[0]=c->ps1[0]=RF32(ea);} // 804E8560
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 804E8564
  c->lr=0x804E856Cu; f_803A9ADC(c); // 804E8568
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 804E856C
  W16(c->r[28]+0x000000CEu,c->r[0]); // 804E8570
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8574
  W16(c->r[4]+0x000000D0u,c->r[3]); // 804E8578
  c->r[3]=R32(c->r[31]+0x00000004u); // 804E857C
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 804E8580
  if (!crb(c,2)) { goto L_804E8590; } // 804E8584
  c->r[0]=c->r[3]|0x00020000u; // 804E8588
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E858C
L_804E8590:;
  c->r[3]=c->r[29]|c->r[29]; // 804E8590
  c->lr=0x804E8598u; f_8037BBCC(c); // 804E8594
L_804E8598:;
  c->r[3]=c->r[30]|c->r[30]; // 804E8598
  c->lr=0x804E85A0u; f_8037BBCC(c); // 804E859C
L_804E85A0:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E85A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E85A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E85A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E85AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E85B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E85B4
  c->r[28]=R32(c->r[1]+0x00000020u); // 804E85B8
  c->lr=c->r[0]; // 804E85BC
  c->r[1]=c->r[1]+0x00000040u; // 804E85C0
  return; // 804E85C4
}

// SetVe__Q44nw4r3snd6detail7AxVoiceFff
void f_804E85C8(Ctx* __restrict c) {
  trace_call(0x804E85C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E85C8
  c->r[0]=c->lr; // 804E85CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E85D0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 804E85D4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 804E85D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 804E85DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 804E85E0
  c->f[30]=c->f[1]; // 804E85E4
  c->f[31]=c->f[2]; // 804E85E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E85EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E85F0
  c->r[30]=c->r[3]|c->r[3]; // 804E85F4
  c->lr=0x804E85FCu; f_8037BBA4(c); // 804E85F8
  c->r[0]=R32(c->r[30]+0x00000000u); // 804E85FC
  c->r[31]=c->r[3]|c->r[3]; // 804E8600
  cmps(c,0,(int32_t)c->r[0],0); // 804E8604
  if (!crb(c,2)) { goto L_804E8614; } // 804E8608
  c->lr=0x804E8610u; f_8037BBCC(c); // 804E860C
  goto L_804E867C; // 804E8610
L_804E8614:;
  c->lr=0x804E8618u; f_8037BBA4(c); // 804E8614
  c->r[0]=R32(c->r[30]+0x00000000u); // 804E8618
  cmps(c,0,(int32_t)c->r[0],0); // 804E861C
  if (!crb(c,2)) { goto L_804E862C; } // 804E8620
  c->lr=0x804E8628u; f_8037BBCC(c); // 804E8624
  goto L_804E8674; // 804E8628
L_804E862C:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 804E862C
  cmps(c,0,(int32_t)c->r[0],0); // 804E8630
  if (crb(c,2)) { goto L_804E8658; } // 804E8634
  {uint32_t ea=c->r[2]+0x0000193Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E8638
  c->r[0]=0u+0x00000000u; // 804E863C
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 804E8640
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 804E8644
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E8648
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 804E864C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804E8650
  W16(c->r[30]+0x00000008u,c->r[0]); // 804E8654
L_804E8658:;
  {uint32_t ea=c->r[2]+0x0000193Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804E8658
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 804E865C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804E8660
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 804E8664
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804E8668
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 804E866C
  c->lr=0x804E8674u; f_8037BBCC(c); // 804E8670
L_804E8674:;
  c->r[3]=c->r[31]|c->r[31]; // 804E8674
  c->lr=0x804E867Cu; f_8037BBCC(c); // 804E8678
L_804E867C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 804E867C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 804E8680
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 804E8684
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 804E8688
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E868C
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E8690
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E8694
  c->lr=c->r[0]; // 804E8698
  c->r[1]=c->r[1]+0x00000040u; // 804E869C
  return; // 804E86A0
}

// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
void f_804E86A4(Ctx* __restrict c) {
  trace_call(0x804E86A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E86A4
  c->r[0]=c->lr; // 804E86A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 804E86AC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804E86B0
  c->r[31]=c->r[3]|c->r[3]; // 804E86B4
  W32(c->r[1]+0x00000028u,c->r[30]); // 804E86B8
  W32(c->r[1]+0x00000024u,c->r[29]); // 804E86BC
  W32(c->r[1]+0x00000020u,c->r[28]); // 804E86C0
  c->r[28]=c->r[4]|c->r[4]; // 804E86C4
  c->lr=0x804E86CCu; f_8037BBA4(c); // 804E86C8
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E86CC
  c->r[30]=c->r[3]|c->r[3]; // 804E86D0
  cmps(c,1,(int32_t)c->r[4],0); // 804E86D4
  if (!crb(c,6)) { goto L_804E86E4; } // 804E86D8
  c->lr=0x804E86E0u; f_8037BBCC(c); // 804E86DC
  goto L_804E8814; // 804E86E0
L_804E86E4:;
  cmpu(c,0,c->r[28],0x00003E80u); // 804E86E4
  if (crb(c,0)) { goto L_804E873C; } // 804E86E8
  c->r[0]=0u+0x00000000u; // 804E86EC
  W16(c->r[1]+0x00000018u,c->r[0]); // 804E86F0
  W16(c->r[1]+0x0000001Au,c->r[0]); // 804E86F4
  c->lr=0x804E86FCu; f_8037BBA4(c); // 804E86F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E86FC
  c->r[29]=c->r[3]|c->r[3]; // 804E8700
  cmps(c,0,(int32_t)c->r[4],0); // 804E8704
  if (!crb(c,2)) { goto L_804E8714; } // 804E8708
  c->lr=0x804E8710u; f_8037BBCC(c); // 804E870C
  goto L_804E880C; // 804E8710
L_804E8714:;
  c->r[3]=c->r[4]+0x000000E2u; // 804E8714
  c->r[4]=c->r[1]+0x00000018u; // 804E8718
  c->r[5]=0u+0x00000008u; // 804E871C
  c->lr=0x804E8724u; f_802DC484(c); // 804E8720
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E8724
  c->r[3]=c->r[29]|c->r[29]; // 804E8728
  c->r[0]=c->r[0]|0x00080000u; // 804E872C
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E8730
  c->lr=0x804E8738u; f_8037BBCC(c); // 804E8734
  goto L_804E880C; // 804E8738
L_804E873C:;
  c->r[3]=0u+0x00000000u; // 804E873C
  if (crb(c,6)) { goto L_804E8754; } // 804E8740
  c->r[0]=R16(c->r[4]+0x000000E2u); // 804E8744
  cmpu(c,0,c->r[0],0x00000001u); // 804E8748
  if (!crb(c,2)) { goto L_804E8754; } // 804E874C
  c->r[3]=0u+0x00000001u; // 804E8750
L_804E8754:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E8754
  if (crb(c,2)) { goto L_804E87AC; } // 804E8758
  c->r[3]=c->r[28]|c->r[28]; // 804E875C
  c->r[4]=c->r[1]+0x0000000Au; // 804E8760
  c->r[5]=c->r[1]+0x00000008u; // 804E8764
  c->lr=0x804E876Cu; f_80396C78(c); // 804E8768
  c->r[28]=R16(c->r[1]+0x00000008u); // 804E876C
  c->r[29]=R16(c->r[1]+0x0000000Au); // 804E8770
  c->lr=0x804E8778u; f_8037BBA4(c); // 804E8774
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8778
  cmps(c,0,(int32_t)c->r[4],0); // 804E877C
  if (!crb(c,2)) { goto L_804E878C; } // 804E8780
  c->lr=0x804E8788u; f_8037BBCC(c); // 804E8784
  goto L_804E880C; // 804E8788
L_804E878C:;
  W16(c->r[4]+0x000000E6u,c->r[29]); // 804E878C
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8790
  W16(c->r[4]+0x000000E8u,c->r[28]); // 804E8794
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E8798
  c->r[0]=c->r[0]|0x00100000u; // 804E879C
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E87A0
  c->lr=0x804E87A8u; f_8037BBCC(c); // 804E87A4
  goto L_804E880C; // 804E87A8
L_804E87AC:;
  c->r[3]=0u+0x00000001u; // 804E87AC
  c->r[0]=0u+0x00000000u; // 804E87B0
  W16(c->r[1]+0x00000010u,c->r[3]); // 804E87B4
  c->r[3]=c->r[28]|c->r[28]; // 804E87B8
  c->r[4]=c->r[1]+0x00000014u; // 804E87BC
  c->r[5]=c->r[1]+0x00000016u; // 804E87C0
  W16(c->r[1]+0x00000012u,c->r[0]); // 804E87C4
  c->lr=0x804E87CCu; f_80396C78(c); // 804E87C8
  c->lr=0x804E87D0u; f_8037BBA4(c); // 804E87CC
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E87D0
  c->r[29]=c->r[3]|c->r[3]; // 804E87D4
  cmps(c,0,(int32_t)c->r[4],0); // 804E87D8
  if (!crb(c,2)) { goto L_804E87E8; } // 804E87DC
  c->lr=0x804E87E4u; f_8037BBCC(c); // 804E87E0
  goto L_804E880C; // 804E87E4
L_804E87E8:;
  c->r[3]=c->r[4]+0x000000E2u; // 804E87E8
  c->r[4]=c->r[1]+0x00000010u; // 804E87EC
  c->r[5]=0u+0x00000008u; // 804E87F0
  c->lr=0x804E87F8u; f_802DC484(c); // 804E87F4
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E87F8
  c->r[3]=c->r[29]|c->r[29]; // 804E87FC
  c->r[0]=c->r[0]|0x00080000u; // 804E8800
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E8804
  c->lr=0x804E880Cu; f_8037BBCC(c); // 804E8808
L_804E880C:;
  c->r[3]=c->r[30]|c->r[30]; // 804E880C
  c->lr=0x804E8814u; f_8037BBCC(c); // 804E8810
L_804E8814:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804E8814
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804E8818
  c->r[30]=R32(c->r[1]+0x00000028u); // 804E881C
  c->r[29]=R32(c->r[1]+0x00000024u); // 804E8820
  c->r[28]=R32(c->r[1]+0x00000020u); // 804E8824
  c->lr=c->r[0]; // 804E8828
  c->r[1]=c->r[1]+0x00000030u; // 804E882C
  return; // 804E8830
}

// SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf
void f_804E8834(Ctx* __restrict c) {
  trace_call(0x804E8834u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8834
  c->r[0]=c->lr; // 804E8838
  W32(c->r[1]+0x00000074u,c->r[0]); // 804E883C
  c->r[11]=c->r[1]+0x00000068u; // 804E8840
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 804E8844
  c->lr=0x804E884Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E8848
  c->f[31]=c->f[1]; // 804E884C
  c->r[31]=c->r[3]|c->r[3]; // 804E8850
  c->r[25]=c->r[4]|c->r[4]; // 804E8854
  c->lr=0x804E885Cu; f_8037BBA4(c); // 804E8858
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E885C
  c->r[30]=c->r[3]|c->r[3]; // 804E8860
  cmps(c,0,(int32_t)c->r[0],0); // 804E8864
  if (!crb(c,2)) { goto L_804E8874; } // 804E8868
  c->lr=0x804E8870u; f_8037BBCC(c); // 804E886C
  goto L_804E8A3C; // 804E8870
L_804E8874:;
  c->lr=0x804E8878u; f_804E5278(c); // 804E8874
  c->r[3]=0u+0x80830000u; // 804E8878
  cmps(c,0,(int32_t)c->r[25],0); // 804E887C
  c->r[0]=rotl(c->r[25],2)&0x000003FCu; // 804E8880
  c->r[4]=0u+0x00000001u; // 804E8884
  c->r[3]=c->r[3]+0xFFFF8320u; // 804E8888
  c->r[3]=R32(c->r[3]+c->r[0]); // 804E888C
  if (!crb(c,2)) { goto L_804E8898; } // 804E8890
  c->r[4]=0u+0x00000000u; // 804E8894
L_804E8898:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E8898
  if (!crb(c,2)) { goto L_804E88A4; } // 804E889C
  c->r[4]=0u+0x00000000u; // 804E88A0
L_804E88A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 804E88A4
  if (!crb(c,2)) { goto L_804E8908; } // 804E88A8
  c->r[0]=0u+0x00000000u; // 804E88AC
  W16(c->r[1]+0x00000028u,c->r[0]); // 804E88B0
  W16(c->r[1]+0x0000002Au,c->r[0]); // 804E88B4
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 804E88B8
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 804E88BC
  W16(c->r[1]+0x00000030u,c->r[0]); // 804E88C0
  c->lr=0x804E88C8u; f_8037BBA4(c); // 804E88C4
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E88C8
  c->r[29]=c->r[3]|c->r[3]; // 804E88CC
  cmps(c,0,(int32_t)c->r[4],0); // 804E88D0
  if (!crb(c,2)) { goto L_804E88E0; } // 804E88D4
  c->lr=0x804E88DCu; f_8037BBCC(c); // 804E88D8
  goto L_804E8A34; // 804E88DC
L_804E88E0:;
  c->r[3]=c->r[4]+0x000000EAu; // 804E88E0
  c->r[4]=c->r[1]+0x00000028u; // 804E88E4
  c->r[5]=0u+0x00000014u; // 804E88E8
  c->lr=0x804E88F0u; f_802DC484(c); // 804E88EC
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E88F0
  c->r[3]=c->r[29]|c->r[29]; // 804E88F4
  c->r[0]=c->r[0]|0x00200000u; // 804E88F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E88FC
  c->lr=0x804E8904u; f_8037BBCC(c); // 804E8900
  goto L_804E8A34; // 804E8904
L_804E8908:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804E8908
  c->f[1]=c->f[31]; // 804E890C
  c->r[4]=c->r[25]|c->r[25]; // 804E8910
  c->r[5]=c->r[1]+0x00000008u; // 804E8914
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804E8918
  c->ctr=c->r[12]; // 804E891C
  if (true) { c->lr=0x804E8924u; dispatch(c,c->ctr); } // 804E8920
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8924
  c->r[3]=0u+0x00000000u; // 804E8928
  cmps(c,0,(int32_t)c->r[4],0); // 804E892C
  if (crb(c,2)) { goto L_804E8944; } // 804E8930
  c->r[0]=R16(c->r[4]+0x000000EAu); // 804E8934
  cmpu(c,0,c->r[0],0x00000002u); // 804E8938
  if (!crb(c,2)) { goto L_804E8944; } // 804E893C
  c->r[3]=0u+0x00000001u; // 804E8940
L_804E8944:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E8944
  if (crb(c,2)) { goto L_804E89B0; } // 804E8948
  c->r[25]=R16(c->r[1]+0x00000010u); // 804E894C
  c->r[26]=R16(c->r[1]+0x0000000Eu); // 804E8950
  c->r[27]=R16(c->r[1]+0x0000000Cu); // 804E8954
  c->r[28]=R16(c->r[1]+0x0000000Au); // 804E8958
  c->r[29]=R16(c->r[1]+0x00000008u); // 804E895C
  c->lr=0x804E8964u; f_8037BBA4(c); // 804E8960
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8964
  cmps(c,0,(int32_t)c->r[4],0); // 804E8968
  if (!crb(c,2)) { goto L_804E8978; } // 804E896C
  c->lr=0x804E8974u; f_8037BBCC(c); // 804E8970
  goto L_804E8A34; // 804E8974
L_804E8978:;
  W16(c->r[4]+0x000000F4u,c->r[29]); // 804E8978
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E897C
  W16(c->r[4]+0x000000F6u,c->r[28]); // 804E8980
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8984
  W16(c->r[4]+0x000000F8u,c->r[27]); // 804E8988
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E898C
  W16(c->r[4]+0x000000FAu,c->r[26]); // 804E8990
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8994
  W16(c->r[4]+0x000000FCu,c->r[25]); // 804E8998
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E899C
  c->r[0]=c->r[0]|0x00400000u; // 804E89A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E89A4
  c->lr=0x804E89ACu; f_8037BBCC(c); // 804E89A8
  goto L_804E8A34; // 804E89AC
L_804E89B0:;
  c->r[6]=R16(c->r[1]+0x00000008u); // 804E89B0
  c->r[7]=0u+0x00000000u; // 804E89B4
  c->r[5]=R16(c->r[1]+0x0000000Au); // 804E89B8
  c->r[8]=0u+0x00000002u; // 804E89BC
  c->r[4]=R16(c->r[1]+0x0000000Cu); // 804E89C0
  c->r[3]=R16(c->r[1]+0x0000000Eu); // 804E89C4
  c->r[0]=R16(c->r[1]+0x00000010u); // 804E89C8
  W16(c->r[1]+0x00000014u,c->r[8]); // 804E89CC
  W16(c->r[1]+0x00000016u,c->r[7]); // 804E89D0
  W16(c->r[1]+0x00000018u,c->r[7]); // 804E89D4
  W16(c->r[1]+0x0000001Au,c->r[7]); // 804E89D8
  W16(c->r[1]+0x0000001Cu,c->r[7]); // 804E89DC
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 804E89E0
  W16(c->r[1]+0x00000020u,c->r[5]); // 804E89E4
  W16(c->r[1]+0x00000022u,c->r[4]); // 804E89E8
  W16(c->r[1]+0x00000024u,c->r[3]); // 804E89EC
  W16(c->r[1]+0x00000026u,c->r[0]); // 804E89F0
  c->lr=0x804E89F8u; f_8037BBA4(c); // 804E89F4
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E89F8
  c->r[29]=c->r[3]|c->r[3]; // 804E89FC
  cmps(c,0,(int32_t)c->r[4],0); // 804E8A00
  if (!crb(c,2)) { goto L_804E8A10; } // 804E8A04
  c->lr=0x804E8A0Cu; f_8037BBCC(c); // 804E8A08
  goto L_804E8A34; // 804E8A0C
L_804E8A10:;
  c->r[3]=c->r[4]+0x000000EAu; // 804E8A10
  c->r[4]=c->r[1]+0x00000014u; // 804E8A14
  c->r[5]=0u+0x00000014u; // 804E8A18
  c->lr=0x804E8A20u; f_802DC484(c); // 804E8A1C
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E8A20
  c->r[3]=c->r[29]|c->r[29]; // 804E8A24
  c->r[0]=c->r[0]|0x00200000u; // 804E8A28
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E8A2C
  c->lr=0x804E8A34u; f_8037BBCC(c); // 804E8A30
L_804E8A34:;
  c->r[3]=c->r[30]|c->r[30]; // 804E8A34
  c->lr=0x804E8A3Cu; f_8037BBCC(c); // 804E8A38
L_804E8A3C:;
  c->r[11]=c->r[1]+0x00000068u; // 804E8A3C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 804E8A40
  c->lr=0x804E8A48u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E8A44
  c->r[0]=R32(c->r[1]+0x00000074u); // 804E8A48
  c->lr=c->r[0]; // 804E8A4C
  c->r[1]=c->r[1]+0x00000070u; // 804E8A50
  return; // 804E8A54
}

// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
void f_804E8A58(Ctx* __restrict c) {
  trace_call(0x804E8A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8A58
  c->r[0]=c->lr; // 804E8A5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 804E8A60
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 804E8A64
  W32(c->r[1]+0x00000048u,c->r[30]); // 804E8A68
  c->r[30]=c->r[4]|c->r[4]; // 804E8A6C
  W32(c->r[1]+0x00000044u,c->r[29]); // 804E8A70
  c->r[29]=c->r[3]|c->r[3]; // 804E8A74
  c->lr=0x804E8A7Cu; f_8037BBA4(c); // 804E8A78
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E8A7C
  c->r[31]=c->r[3]|c->r[3]; // 804E8A80
  cmps(c,1,(int32_t)c->r[4],0); // 804E8A84
  if (!crb(c,6)) { goto L_804E8A94; } // 804E8A88
  c->lr=0x804E8A90u; f_8037BBCC(c); // 804E8A8C
  goto L_804E8BCC; // 804E8A90
L_804E8A94:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E8A94
  if (!crb(c,2)) { goto L_804E8AE8; } // 804E8A98
  c->r[0]=0u+0x00000000u; // 804E8A9C
  W16(c->r[1]+0x00000028u,c->r[0]); // 804E8AA0
  c->lr=0x804E8AA8u; f_8037BBA4(c); // 804E8AA4
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E8AA8
  c->r[30]=c->r[3]|c->r[3]; // 804E8AAC
  cmps(c,0,(int32_t)c->r[4],0); // 804E8AB0
  if (!crb(c,2)) { goto L_804E8AC0; } // 804E8AB4
  c->lr=0x804E8ABCu; f_8037BBCC(c); // 804E8AB8
  goto L_804E8BC4; // 804E8ABC
L_804E8AC0:;
  c->r[3]=c->r[4]+0x0000013Cu; // 804E8AC0
  c->r[4]=c->r[1]+0x00000028u; // 804E8AC4
  c->r[5]=0u+0x00000014u; // 804E8AC8
  c->lr=0x804E8AD0u; f_802DC484(c); // 804E8ACC
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E8AD0
  c->r[3]=c->r[30]|c->r[30]; // 804E8AD4
  c->r[0]=c->r[0]|0x10000000u; // 804E8AD8
  W32(c->r[29]+0x00000004u,c->r[0]); // 804E8ADC
  c->lr=0x804E8AE4u; f_8037BBCC(c); // 804E8AE0
  goto L_804E8BC4; // 804E8AE4
L_804E8AE8:;
  c->r[3]=0u+0x00000000u; // 804E8AE8
  if (crb(c,6)) { goto L_804E8B00; } // 804E8AEC
  c->r[0]=R16(c->r[4]+0x0000013Cu); // 804E8AF0
  cmpu(c,0,c->r[0],0x00000002u); // 804E8AF4
  if (!crb(c,2)) { goto L_804E8B00; } // 804E8AF8
  c->r[3]=0u+0x00000001u; // 804E8AFC
L_804E8B00:;
  cmps(c,0,(int32_t)c->r[3],0); // 804E8B00
  if (crb(c,2)) { goto L_804E8B4C; } // 804E8B04
  c->r[3]=c->r[30]|c->r[30]; // 804E8B08
  c->r[4]=c->r[1]+0x00000010u; // 804E8B0C
  c->r[5]=c->r[1]+0x0000000Eu; // 804E8B10
  c->r[6]=c->r[1]+0x0000000Cu; // 804E8B14
  c->r[7]=c->r[1]+0x0000000Au; // 804E8B18
  c->r[8]=c->r[1]+0x00000008u; // 804E8B1C
  c->lr=0x804E8B24u; f_80505D00(c); // 804E8B20
  c->r[5]=R16(c->r[1]+0x00000010u); // 804E8B24
  c->r[3]=c->r[29]|c->r[29]; // 804E8B28
  c->r[6]=R16(c->r[1]+0x0000000Eu); // 804E8B2C
  c->r[4]=0u+0x00000002u; // 804E8B30
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 804E8B34
  c->r[8]=R16(c->r[1]+0x0000000Au); // 804E8B38
  c->r[9]=R16(c->r[1]+0x00000008u); // 804E8B3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804E8B40
  c->lr=0x804E8B48u; f_804E9438(c); // 804E8B44
  goto L_804E8BC4; // 804E8B48
L_804E8B4C:;
  c->r[0]=0u+0x00000000u; // 804E8B4C
  c->r[3]=0u+0x00000002u; // 804E8B50
  W16(c->r[1]+0x00000014u,c->r[3]); // 804E8B54
  c->r[3]=c->r[30]|c->r[30]; // 804E8B58
  c->r[4]=c->r[1]+0x0000001Eu; // 804E8B5C
  c->r[5]=c->r[1]+0x00000020u; // 804E8B60
  W16(c->r[1]+0x00000016u,c->r[0]); // 804E8B64
  c->r[6]=c->r[1]+0x00000022u; // 804E8B68
  c->r[7]=c->r[1]+0x00000024u; // 804E8B6C
  c->r[8]=c->r[1]+0x00000026u; // 804E8B70
  W16(c->r[1]+0x00000018u,c->r[0]); // 804E8B74
  W16(c->r[1]+0x0000001Au,c->r[0]); // 804E8B78
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 804E8B7C
  c->lr=0x804E8B84u; f_80505D00(c); // 804E8B80
  c->lr=0x804E8B88u; f_8037BBA4(c); // 804E8B84
  c->r[4]=R32(c->r[29]+0x00000000u); // 804E8B88
  c->r[30]=c->r[3]|c->r[3]; // 804E8B8C
  cmps(c,0,(int32_t)c->r[4],0); // 804E8B90
  if (!crb(c,2)) { goto L_804E8BA0; } // 804E8B94
  c->lr=0x804E8B9Cu; f_8037BBCC(c); // 804E8B98
  goto L_804E8BC4; // 804E8B9C
L_804E8BA0:;
  c->r[3]=c->r[4]+0x0000013Cu; // 804E8BA0
  c->r[4]=c->r[1]+0x00000014u; // 804E8BA4
  c->r[5]=0u+0x00000014u; // 804E8BA8
  c->lr=0x804E8BB0u; f_802DC484(c); // 804E8BAC
  c->r[0]=R32(c->r[29]+0x00000004u); // 804E8BB0
  c->r[3]=c->r[30]|c->r[30]; // 804E8BB4
  c->r[0]=c->r[0]|0x10000000u; // 804E8BB8
  W32(c->r[29]+0x00000004u,c->r[0]); // 804E8BBC
  c->lr=0x804E8BC4u; f_8037BBCC(c); // 804E8BC0
L_804E8BC4:;
  c->r[3]=c->r[31]|c->r[31]; // 804E8BC4
  c->lr=0x804E8BCCu; f_8037BBCC(c); // 804E8BC8
L_804E8BCC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 804E8BCC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 804E8BD0
  c->r[30]=R32(c->r[1]+0x00000048u); // 804E8BD4
  c->r[29]=R32(c->r[1]+0x00000044u); // 804E8BD8
  c->lr=c->r[0]; // 804E8BDC
  c->r[1]=c->r[1]+0x00000050u; // 804E8BE0
  return; // 804E8BE4
}

// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam
void f_804E8BE8(Ctx* __restrict c) {
  trace_call(0x804E8BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8BE8
  c->r[0]=c->lr; // 804E8BEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 804E8BF0
  c->r[11]=c->r[1]+0x00000050u; // 804E8BF4
  c->lr=0x804E8BFCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E8BF8
  c->r[31]=c->r[8]|c->r[8]; // 804E8BFC
  c->r[27]=c->r[3]|c->r[3]; // 804E8C00
  c->r[28]=c->r[4]|c->r[4]; // 804E8C04
  c->r[29]=c->r[5]|c->r[5]; // 804E8C08
  c->r[30]=c->r[6]|c->r[6]; // 804E8C0C
  c->r[26]=c->r[7]|c->r[7]; // 804E8C10
  c->r[4]=c->r[31]|c->r[31]; // 804E8C14
  c->r[3]=c->r[1]+0x00000008u; // 804E8C18
  c->r[5]=0u+0x00000020u; // 804E8C1C
  c->lr=0x804E8C24u; f_802DC484(c); // 804E8C20
  c->r[5]=R16(c->r[31]+0x00000020u); // 804E8C24
  cmps(c,0,(int32_t)c->r[26],0); // 804E8C28
  c->r[4]=R16(c->r[31]+0x00000022u); // 804E8C2C
  c->r[6]=c->r[26]|c->r[26]; // 804E8C30
  c->r[3]=R16(c->r[31]+0x00000024u); // 804E8C34
  c->r[0]=R16(c->r[31]+0x00000026u); // 804E8C38
  W16(c->r[1]+0x00000028u,c->r[5]); // 804E8C3C
  W16(c->r[1]+0x0000002Au,c->r[4]); // 804E8C40
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 804E8C44
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 804E8C48
  if (crb(c,2)) { goto L_804E8C54; } // 804E8C4C
  c->r[6]=c->r[26]+0x80000000u; // 804E8C50
L_804E8C54:;
  cmps(c,0,(int32_t)c->r[26],0); // 804E8C54
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 804E8C58
  c->r[31]=c->r[3]+0x00000002u; // 804E8C5C
  if (crb(c,2)) { goto L_804E8C68; } // 804E8C60
  c->r[26]=c->r[26]+0x80000000u; // 804E8C64
L_804E8C68:;
  c->r[3]=0u+0x24920000u; // 804E8C68
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 804E8C6C
  c->r[3]=c->r[3]+0x00004925u; // 804E8C70
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 804E8C74
  c->r[3]=c->r[30]-c->r[4]; // 804E8C78
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 804E8C7C
  c->r[4]=c->r[3]+c->r[4]; // 804E8C80
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 804E8C84
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 804E8C88
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 804E8C8C
  c->r[4]=c->r[30]-c->r[5]; // 804E8C90
  c->r[0]=c->r[4]+c->r[0]; // 804E8C94
  c->r[30]=c->r[0]+c->r[3]; // 804E8C98
  c->r[30]=c->r[30]+0x00000002u; // 804E8C9C
  goto L_804E8CEC; // 804E8CA0
L_804E8CA4:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; cr0(c,c->r[0]); // 804E8CA4
  if (!crb(c,2)) { goto L_804E8CC0; } // 804E8CA8
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 804E8CAC
  c->r[31]=c->r[31]+0x00000002u; // 804E8CB0
  c->r[3]=c->r[3]+0x80000000u; // 804E8CB4
  c->r[0]=R8(c->r[3]+0x00000000u); // 804E8CB8
  W16(c->r[1]+0x0000002Au,c->r[0]); // 804E8CBC
L_804E8CC0:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 804E8CC0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 804E8CC4
  c->r[4]=c->r[3]+0x80000000u; // 804E8CC8
  c->r[4]=R8(c->r[4]+0x00000000u); // 804E8CCC
  c->r[3]=c->r[1]+0x00000008u; // 804E8CD0
  c->r[0]=sraw(c,c->r[4],4); // 804E8CD4
  if (crb(c,2)) { goto L_804E8CE0; } // 804E8CD8
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 804E8CDC
L_804E8CE0:;
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 804E8CE0
  c->lr=0x804E8CE8u; f_80507AF0(c); // 804E8CE4
  c->r[31]=c->r[31]+0x00000001u; // 804E8CE8
L_804E8CEC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804E8CEC
  if (crb(c,0)) { IRQCHK(c); goto L_804E8CA4; } // 804E8CF0
  c->r[0]=R16(c->r[1]+0x0000002Au); // 804E8CF4
  c->r[11]=c->r[1]+0x00000050u; // 804E8CF8
  W16(c->r[27]+0x00000000u,c->r[0]); // 804E8CFC
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 804E8D00
  W16(c->r[28]+0x00000000u,c->r[0]); // 804E8D04
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 804E8D08
  W16(c->r[29]+0x00000000u,c->r[0]); // 804E8D0C
  c->lr=0x804E8D14u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E8D10
  c->r[0]=R32(c->r[1]+0x00000054u); // 804E8D14
  c->lr=c->r[0]; // 804E8D18
  c->r[1]=c->r[1]+0x00000050u; // 804E8D1C
  return; // 804E8D20
}

// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
void f_804E8D24(Ctx* __restrict c) {
  trace_call(0x804E8D24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8D24
  c->r[0]=c->lr; // 804E8D28
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E8D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E8D30
  c->r[31]=c->r[3]|c->r[3]; // 804E8D34
  c->lr=0x804E8D3Cu; f_8037BBA4(c); // 804E8D38
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E8D3C
  cmps(c,0,(int32_t)c->r[5],0); // 804E8D40
  if (!crb(c,2)) { goto L_804E8D50; } // 804E8D44
  c->lr=0x804E8D4Cu; f_8037BBCC(c); // 804E8D48
  goto L_804E8EB4; // 804E8D4C
L_804E8D50:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 804E8D50
  c->r[4]=0u+0x2AAB0000u; // 804E8D54
  c->r[4]=c->r[4]+0xFFFFAAABu; // 804E8D58
  c->r[6]=0u+0xFFFFFFFFu; // 804E8D5C
  W16(c->r[5]+0x00000092u,c->r[0]); // 804E8D60
  c->r[7]=R16(c->r[31]+0x0000000Eu); // 804E8D64
  c->r[0]=R16(c->r[31]+0x00000008u); // 804E8D68
  c->r[0]=c->r[7]-c->r[0]; // 804E8D6C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804E8D70
  c->r[0]=sraw(c,c->r[0],4); // 804E8D74
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804E8D78
  c->r[0]=c->r[0]+c->r[4]; // 804E8D7C
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 804E8D80
  c->r[0]=0u-c->r[8]; // 804E8D84
  c->r[0]=c->r[0]&~c->r[8]; // 804E8D88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804E8D8C
  c->r[0]=c->r[8]+c->r[0]; cr0(c,c->r[0]); // 804E8D90
  if (crb(c,2)) { goto L_804E8D9C; } // 804E8D94
  c->r[6]=0u+0x00000001u; // 804E8D98
L_804E8D9C:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)96); // 804E8D9C
  c->r[5]=R16(c->r[31]+0x00000008u); // 804E8DA0
  c->r[4]=R16(c->r[31]+0x00000008u); // 804E8DA4
  c->r[0]=c->r[4]+c->r[0]; // 804E8DA8
  c->r[4]=c->r[7]-c->r[0]; cr0(c,c->r[4]); // 804E8DAC
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)96); // 804E8DB0
  c->r[0]=c->r[5]+c->r[0]; // 804E8DB4
  if (!crb(c,0)) { goto L_804E8DC0; } // 804E8DB8
  c->r[4]=0u-c->r[4]; // 804E8DBC
L_804E8DC0:;
  c->r[0]=c->r[7]-c->r[0]; cr0(c,c->r[0]); // 804E8DC0
  if (!crb(c,0)) { goto L_804E8DCC; } // 804E8DC4
  c->r[0]=0u-c->r[0]; // 804E8DC8
L_804E8DCC:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804E8DCC
  if (!crb(c,0)) { goto L_804E8DE0; } // 804E8DD0
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8DD4
  W16(c->r[4]+0x00000094u,c->r[8]); // 804E8DD8
  goto L_804E8DE8; // 804E8DDC
L_804E8DE0:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8DE0
  W16(c->r[4]+0x00000094u,c->r[6]); // 804E8DE4
L_804E8DE8:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E8DE8
  c->r[4]=R16(c->r[31]+0x00000008u); // 804E8DEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 804E8DF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 804E8DF4
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 804E8DF8
  if (!crb(c,0)) { goto L_804E8E28; } // 804E8DFC
  c->r[0]=R16(c->r[31]+0x00000008u); // 804E8E00
  c->r[4]=0u+0x2AAB0000u; // 804E8E04
  c->r[4]=c->r[4]+0xFFFFAAABu; // 804E8E08
  c->r[0]=0u-c->r[0]; // 804E8E0C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804E8E10
  c->r[0]=sraw(c,c->r[0],4); // 804E8E14
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804E8E18
  c->r[0]=c->r[0]+c->r[4]; // 804E8E1C
  W16(c->r[5]+0x00000094u,c->r[0]); // 804E8E20
  goto L_804E8E54; // 804E8E24
L_804E8E28:;
  cmps(c,0,(int32_t)c->r[0],32767); // 804E8E28
  if (!crb(c,1)) { goto L_804E8E54; } // 804E8E2C
  c->r[0]=R16(c->r[31]+0x00000008u); // 804E8E30
  c->r[4]=0u+0x2AAB0000u; // 804E8E34
  c->r[4]=c->r[4]+0xFFFFAAABu; // 804E8E38
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 804E8E3C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 804E8E40
  c->r[0]=sraw(c,c->r[0],4); // 804E8E44
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804E8E48
  c->r[0]=c->r[0]+c->r[4]; // 804E8E4C
  W16(c->r[5]+0x00000094u,c->r[0]); // 804E8E50
L_804E8E54:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E8E54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 804E8E58
  cmps(c,0,(int32_t)c->r[0],0); // 804E8E5C
  if (!crb(c,2)) { goto L_804E8E78; } // 804E8E60
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 804E8E64
  cmps(c,0,(int32_t)c->r[0],0); // 804E8E68
  if (!crb(c,2)) { goto L_804E8E78; } // 804E8E6C
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 804E8E70
  W16(c->r[4]+0x00000092u,c->r[0]); // 804E8E74
L_804E8E78:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 804E8E78
  c->r[0]=0u+0x00000000u; // 804E8E7C
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E8E80
  c->r[4]=rotl(c->r[4],0)&0xFFFFFDFFu; // 804E8E84
  c->r[6]=c->r[4]|0x00000100u; // 804E8E88
  W32(c->r[31]+0x00000004u,c->r[6]); // 804E8E8C
  c->r[4]=R16(c->r[5]+0x00000092u); // 804E8E90
  W16(c->r[31]+0x00000008u,c->r[4]); // 804E8E94
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 804E8E98
  W16(c->r[31]+0x0000000Au,c->r[4]); // 804E8E9C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804E8EA0
  c->r[4]=c->r[4]|c->r[6]; // 804E8EA4
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 804E8EA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E8EAC
  c->lr=0x804E8EB4u; f_8037BBCC(c); // 804E8EB0
L_804E8EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E8EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E8EB8
  c->lr=c->r[0]; // 804E8EBC
  c->r[1]=c->r[1]+0x00000010u; // 804E8EC0
  return; // 804E8EC4
}

// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
void f_804E8EC8(Ctx* __restrict c) {
  trace_call(0x804E8EC8u);
  c->r[5]=0u+0x00010000u; // 804E8EC8
  c->r[6]=0u+0x00000000u; // 804E8ECC
  c->r[0]=c->r[5]+0xFFFF8000u; // 804E8ED0
  W32(c->r[3]+0x00000000u,c->r[4]); // 804E8ED4
  c->r[5]=0u+0x00000001u; // 804E8ED8
  W16(c->r[3]+0x00000008u,c->r[0]); // 804E8EDC
  W32(c->r[3]+0x00000004u,c->r[6]); // 804E8EE0
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 804E8EE4
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 804E8EE8
  W16(c->r[3]+0x0000000Au,c->r[6]); // 804E8EEC
  return; // 804E8EF0
}

// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
void f_804E8EF4(Ctx* __restrict c) {
  trace_call(0x804E8EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E8EF4
  c->r[0]=c->lr; // 804E8EF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E8EFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E8F00
  c->r[31]=c->r[5]|c->r[5]; // 804E8F04
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E8F08
  c->r[30]=c->r[3]|c->r[3]; // 804E8F0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E8F10
  c->r[29]=c->r[4]|c->r[4]; // 804E8F14
  c->lr=0x804E8F1Cu; f_8037BBA4(c); // 804E8F18
  c->r[6]=R32(c->r[30]+0x00000000u); // 804E8F1C
  cmps(c,0,(int32_t)c->r[6],0); // 804E8F20
  if (!crb(c,2)) { goto L_804E8F30; } // 804E8F24
  c->lr=0x804E8F2Cu; f_8037BBCC(c); // 804E8F28
  goto L_804E9150; // 804E8F2C
L_804E8F30:;
  c->r[4]=R16(c->r[29]+0x00000000u); // 804E8F30
  c->r[5]=c->r[6]+0x0000003Eu; // 804E8F34
  c->r[0]=0u+0x00000000u; // 804E8F38
  cmps(c,0,(int32_t)c->r[4],0); // 804E8F3C
  W16(c->r[6]+0x0000003Cu,c->r[4]); // 804E8F40
  if (crb(c,2)) { goto L_804E8F4C; } // 804E8F44
  c->r[0]=c->r[0]|0x00000001u; // 804E8F48
L_804E8F4C:;
  c->r[6]=R16(c->r[29]+0x00000002u); // 804E8F4C
  c->r[4]=c->r[29]+0x00000004u; // 804E8F50
  cmps(c,0,(int32_t)c->r[6],0); // 804E8F54
  W16(c->r[5]+0x00000000u,c->r[6]); // 804E8F58
  if (crb(c,2)) { goto L_804E8F64; } // 804E8F5C
  c->r[0]=c->r[0]|0x00000005u; // 804E8F60
L_804E8F64:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 804E8F64
  cmps(c,0,(int32_t)c->r[6],0); // 804E8F68
  W16(c->r[5]+0x00000002u,c->r[6]); // 804E8F6C
  if (crb(c,2)) { goto L_804E8F78; } // 804E8F70
  c->r[0]=c->r[0]|0x00000002u; // 804E8F74
L_804E8F78:;
  c->r[6]=R16(c->r[4]+0x00000002u); // 804E8F78
  cmps(c,0,(int32_t)c->r[6],0); // 804E8F7C
  W16(c->r[5]+0x00000004u,c->r[6]); // 804E8F80
  if (crb(c,2)) { goto L_804E8F8C; } // 804E8F84
  c->r[0]=c->r[0]|0x00000006u; // 804E8F88
L_804E8F8C:;
  c->r[6]=R16(c->r[4]+0x00000004u); // 804E8F8C
  cmps(c,0,(int32_t)c->r[6],0); // 804E8F90
  W16(c->r[5]+0x00000006u,c->r[6]); // 804E8F94
  if (crb(c,2)) { goto L_804E8FA0; } // 804E8F98
  c->r[0]=c->r[0]|0x00010000u; // 804E8F9C
L_804E8FA0:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 804E8FA0
  cmps(c,0,(int32_t)c->r[6],0); // 804E8FA4
  W16(c->r[5]+0x00000008u,c->r[6]); // 804E8FA8
  if (crb(c,2)) { goto L_804E8FB4; } // 804E8FAC
  c->r[0]=c->r[0]|0x00050000u; // 804E8FB0
L_804E8FB4:;
  c->r[6]=R16(c->r[4]+0x00000008u); // 804E8FB4
  cmps(c,0,(int32_t)c->r[6],0); // 804E8FB8
  W16(c->r[5]+0x0000000Au,c->r[6]); // 804E8FBC
  if (crb(c,2)) { goto L_804E8FC8; } // 804E8FC0
  c->r[0]=c->r[0]|0x00020000u; // 804E8FC4
L_804E8FC8:;
  c->r[6]=R16(c->r[4]+0x0000000Au); // 804E8FC8
  cmps(c,0,(int32_t)c->r[6],0); // 804E8FCC
  W16(c->r[5]+0x0000000Cu,c->r[6]); // 804E8FD0
  if (crb(c,2)) { goto L_804E8FDC; } // 804E8FD4
  c->r[0]=c->r[0]|0x00060000u; // 804E8FD8
L_804E8FDC:;
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 804E8FDC
  cmps(c,0,(int32_t)c->r[6],0); // 804E8FE0
  W16(c->r[5]+0x0000000Eu,c->r[6]); // 804E8FE4
  if (crb(c,2)) { goto L_804E8FF0; } // 804E8FE8
  c->r[0]=c->r[0]|0x00200000u; // 804E8FEC
L_804E8FF0:;
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 804E8FF0
  cmps(c,0,(int32_t)c->r[6],0); // 804E8FF4
  W16(c->r[5]+0x00000010u,c->r[6]); // 804E8FF8
  if (crb(c,2)) { goto L_804E9004; } // 804E8FFC
  c->r[0]=c->r[0]|0x00A00000u; // 804E9000
L_804E9004:;
  c->r[6]=R16(c->r[4]+0x00000010u); // 804E9004
  cmps(c,0,(int32_t)c->r[6],0); // 804E9008
  W16(c->r[5]+0x00000012u,c->r[6]); // 804E900C
  if (crb(c,2)) { goto L_804E9018; } // 804E9010
  c->r[0]=c->r[0]|0x00400000u; // 804E9014
L_804E9018:;
  c->r[6]=R16(c->r[4]+0x00000012u); // 804E9018
  cmps(c,0,(int32_t)c->r[6],0); // 804E901C
  W16(c->r[5]+0x00000014u,c->r[6]); // 804E9020
  if (crb(c,2)) { goto L_804E902C; } // 804E9024
  c->r[0]=c->r[0]|0x00C00000u; // 804E9028
L_804E902C:;
  c->r[6]=R16(c->r[4]+0x00000014u); // 804E902C
  cmps(c,0,(int32_t)c->r[6],0); // 804E9030
  W16(c->r[5]+0x00000016u,c->r[6]); // 804E9034
  if (crb(c,2)) { goto L_804E9040; } // 804E9038
  c->r[0]=c->r[0]|0x04000000u; // 804E903C
L_804E9040:;
  c->r[6]=R16(c->r[4]+0x00000016u); // 804E9040
  cmps(c,0,(int32_t)c->r[6],0); // 804E9044
  W16(c->r[5]+0x00000018u,c->r[6]); // 804E9048
  if (crb(c,2)) { goto L_804E9054; } // 804E904C
  c->r[0]=c->r[0]|0x14000000u; // 804E9050
L_804E9054:;
  c->r[6]=R16(c->r[4]+0x00000018u); // 804E9054
  cmps(c,0,(int32_t)c->r[6],0); // 804E9058
  W16(c->r[5]+0x0000001Au,c->r[6]); // 804E905C
  if (crb(c,2)) { goto L_804E9068; } // 804E9060
  c->r[0]=c->r[0]|0x08000000u; // 804E9064
L_804E9068:;
  c->r[6]=R16(c->r[4]+0x0000001Au); // 804E9068
  cmps(c,0,(int32_t)c->r[6],0); // 804E906C
  W16(c->r[5]+0x0000001Cu,c->r[6]); // 804E9070
  if (crb(c,2)) { goto L_804E907C; } // 804E9074
  c->r[0]=c->r[0]|0x18000000u; // 804E9078
L_804E907C:;
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 804E907C
  cmps(c,0,(int32_t)c->r[6],0); // 804E9080
  W16(c->r[5]+0x0000001Eu,c->r[6]); // 804E9084
  if (crb(c,2)) { goto L_804E9090; } // 804E9088
  c->r[0]=c->r[0]|0x00000008u; // 804E908C
L_804E9090:;
  c->r[6]=R16(c->r[4]+0x0000001Eu); // 804E9090
  cmps(c,0,(int32_t)c->r[6],0); // 804E9094
  W16(c->r[5]+0x00000020u,c->r[6]); // 804E9098
  if (crb(c,2)) { goto L_804E90A4; } // 804E909C
  c->r[0]=c->r[0]|0x00000018u; // 804E90A0
L_804E90A4:;
  c->r[6]=R16(c->r[4]+0x00000020u); // 804E90A4
  cmps(c,0,(int32_t)c->r[6],0); // 804E90A8
  W16(c->r[5]+0x00000022u,c->r[6]); // 804E90AC
  if (crb(c,2)) { goto L_804E90B8; } // 804E90B0
  c->r[0]=c->r[0]|0x00080000u; // 804E90B4
L_804E90B8:;
  c->r[6]=R16(c->r[4]+0x00000022u); // 804E90B8
  cmps(c,0,(int32_t)c->r[6],0); // 804E90BC
  W16(c->r[5]+0x00000024u,c->r[6]); // 804E90C0
  if (crb(c,2)) { goto L_804E90CC; } // 804E90C4
  c->r[0]=c->r[0]|0x00180000u; // 804E90C8
L_804E90CC:;
  c->r[6]=R16(c->r[4]+0x00000024u); // 804E90CC
  cmps(c,0,(int32_t)c->r[6],0); // 804E90D0
  W16(c->r[5]+0x00000026u,c->r[6]); // 804E90D4
  if (crb(c,2)) { goto L_804E90E0; } // 804E90D8
  c->r[0]=c->r[0]|0x01000000u; // 804E90DC
L_804E90E0:;
  c->r[6]=R16(c->r[4]+0x00000026u); // 804E90E0
  cmps(c,0,(int32_t)c->r[6],0); // 804E90E4
  W16(c->r[5]+0x00000028u,c->r[6]); // 804E90E8
  if (crb(c,2)) { goto L_804E90F4; } // 804E90EC
  c->r[0]=c->r[0]|0x03000000u; // 804E90F0
L_804E90F4:;
  c->r[6]=R16(c->r[4]+0x00000028u); // 804E90F4
  cmps(c,0,(int32_t)c->r[6],0); // 804E90F8
  W16(c->r[5]+0x0000002Au,c->r[6]); // 804E90FC
  if (crb(c,2)) { goto L_804E9108; } // 804E9100
  c->r[0]=c->r[0]|0x20000000u; // 804E9104
L_804E9108:;
  c->r[4]=R16(c->r[4]+0x0000002Au); // 804E9108
  cmps(c,0,(int32_t)c->r[4],0); // 804E910C
  W16(c->r[5]+0x0000002Cu,c->r[4]); // 804E9110
  if (crb(c,2)) { goto L_804E911C; } // 804E9114
  c->r[0]=c->r[0]|0x60000000u; // 804E9118
L_804E911C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E911C
  cmps(c,0,(int32_t)c->r[31],0); // 804E9120
  W32(c->r[4]+0x00000034u,c->r[0]); // 804E9124
  if (crb(c,2)) { goto L_804E9140; } // 804E9128
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E912C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 804E9130
  c->r[0]=c->r[0]|0x00000012u; // 804E9134
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 804E9138
  goto L_804E914C; // 804E913C
L_804E9140:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E9140
  c->r[0]=c->r[0]|0x00000012u; // 804E9144
  W32(c->r[30]+0x00000004u,c->r[0]); // 804E9148
L_804E914C:;
  c->lr=0x804E9150u; f_8037BBCC(c); // 804E914C
L_804E9150:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E9150
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E9154
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E9158
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E915C
  c->lr=c->r[0]; // 804E9160
  c->r[1]=c->r[1]+0x00000020u; // 804E9164
  return; // 804E9168
}

// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
void f_804E916C(Ctx* __restrict c) {
  trace_call(0x804E916Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E916C
  c->r[0]=c->lr; // 804E9170
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9178
  c->r[31]=c->r[4]|c->r[4]; // 804E917C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E9180
  c->r[30]=c->r[3]|c->r[3]; // 804E9184
  c->lr=0x804E918Cu; f_8037BBA4(c); // 804E9188
  c->r[5]=R32(c->r[30]+0x00000000u); // 804E918C
  cmps(c,0,(int32_t)c->r[5],0); // 804E9190
  if (!crb(c,2)) { goto L_804E91A0; } // 804E9194
  c->lr=0x804E919Cu; f_8037BBCC(c); // 804E9198
  goto L_804E9234; // 804E919C
L_804E91A0:;
  cmps(c,0,(int32_t)c->r[31],2); // 804E91A0
  if (crb(c,2)) { goto L_804E91E4; } // 804E91A4
  if (!crb(c,0)) { goto L_804E91BC; } // 804E91A8
  cmps(c,0,(int32_t)c->r[31],0); // 804E91AC
  if (crb(c,2)) { goto L_804E91CC; } // 804E91B0
  if (!crb(c,0)) { goto L_804E91D8; } // 804E91B4
  goto L_804E9224; // 804E91B8
L_804E91BC:;
  cmps(c,0,(int32_t)c->r[31],4); // 804E91BC
  if (crb(c,2)) { goto L_804E9210; } // 804E91C0
  if (!crb(c,0)) { goto L_804E9224; } // 804E91C4
  goto L_804E91F8; // 804E91C8
L_804E91CC:;
  c->r[0]=0u+0x00000002u; // 804E91CC
  W16(c->r[5]+0x00000030u,c->r[0]); // 804E91D0
  goto L_804E9224; // 804E91D4
L_804E91D8:;
  c->r[0]=0u+0x00000001u; // 804E91D8
  W16(c->r[5]+0x00000030u,c->r[0]); // 804E91DC
  goto L_804E9224; // 804E91E0
L_804E91E4:;
  c->r[0]=0u+0x00000000u; // 804E91E4
  W16(c->r[5]+0x00000030u,c->r[0]); // 804E91E8
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E91EC
  W16(c->r[4]+0x00000032u,c->r[0]); // 804E91F0
  goto L_804E9224; // 804E91F4
L_804E91F8:;
  c->r[4]=0u+0x00000000u; // 804E91F8
  c->r[0]=0u+0x00000001u; // 804E91FC
  W16(c->r[5]+0x00000030u,c->r[4]); // 804E9200
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E9204
  W16(c->r[4]+0x00000032u,c->r[0]); // 804E9208
  goto L_804E9224; // 804E920C
L_804E9210:;
  c->r[4]=0u+0x00000000u; // 804E9210
  c->r[0]=0u+0x00000002u; // 804E9214
  W16(c->r[5]+0x00000030u,c->r[4]); // 804E9218
  c->r[4]=R32(c->r[30]+0x00000000u); // 804E921C
  W16(c->r[4]+0x00000032u,c->r[0]); // 804E9220
L_804E9224:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804E9224
  c->r[0]=c->r[0]|0x00000001u; // 804E9228
  W32(c->r[30]+0x00000004u,c->r[0]); // 804E922C
  c->lr=0x804E9234u; f_8037BBCC(c); // 804E9230
L_804E9234:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9238
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E923C
  c->lr=c->r[0]; // 804E9240
  c->r[1]=c->r[1]+0x00000010u; // 804E9244
  return; // 804E9248
}

// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
void f_804E924C(Ctx* __restrict c) {
  trace_call(0x804E924Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E924C
  c->r[0]=c->lr; // 804E9250
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9258
  c->r[31]=c->r[3]|c->r[3]; // 804E925C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E9260
  c->r[30]=c->r[4]|c->r[4]; // 804E9264
  c->lr=0x804E926Cu; f_8037BBA4(c); // 804E9268
  c->r[5]=R32(c->r[31]+0x00000000u); // 804E926C
  cmps(c,0,(int32_t)c->r[5],0); // 804E9270
  if (!crb(c,2)) { goto L_804E9280; } // 804E9274
  c->lr=0x804E927Cu; f_8037BBCC(c); // 804E9278
  goto L_804E9420; // 804E927C
L_804E9280:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 804E9280
  c->r[4]=c->r[5]+0x00000104u; // 804E9284
  c->r[6]=0u+0x00000000u; // 804E9288
  cmps(c,0,(int32_t)c->r[0],0); // 804E928C
  W16(c->r[5]+0x00000102u,c->r[0]); // 804E9290
  if (crb(c,2)) { goto L_804E929C; } // 804E9294
  c->r[6]=c->r[6]|0x00000001u; // 804E9298
L_804E929C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 804E929C
  c->r[5]=c->r[30]+0x00000004u; // 804E92A0
  cmps(c,0,(int32_t)c->r[0],0); // 804E92A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 804E92A8
  if (crb(c,2)) { goto L_804E92B8; } // 804E92AC
  c->r[0]=c->r[6]|0x00000002u; // 804E92B0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E92B4
L_804E92B8:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 804E92B8
  cmps(c,0,(int32_t)c->r[0],0); // 804E92BC
  W16(c->r[4]+0x00000002u,c->r[0]); // 804E92C0
  if (crb(c,2)) { goto L_804E92D0; } // 804E92C4
  c->r[0]=c->r[6]|0x00000004u; // 804E92C8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E92CC
L_804E92D0:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 804E92D0
  cmps(c,0,(int32_t)c->r[0],0); // 804E92D4
  W16(c->r[4]+0x00000004u,c->r[0]); // 804E92D8
  if (crb(c,2)) { goto L_804E92E8; } // 804E92DC
  c->r[0]=c->r[6]|0x00000008u; // 804E92E0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E92E4
L_804E92E8:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 804E92E8
  cmps(c,0,(int32_t)c->r[0],0); // 804E92EC
  W16(c->r[4]+0x00000006u,c->r[0]); // 804E92F0
  if (crb(c,2)) { goto L_804E9300; } // 804E92F4
  c->r[0]=c->r[6]|0x00000010u; // 804E92F8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E92FC
L_804E9300:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 804E9300
  cmps(c,0,(int32_t)c->r[0],0); // 804E9304
  W16(c->r[4]+0x00000008u,c->r[0]); // 804E9308
  if (crb(c,2)) { goto L_804E9318; } // 804E930C
  c->r[0]=c->r[6]|0x00000020u; // 804E9310
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E9314
L_804E9318:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 804E9318
  cmps(c,0,(int32_t)c->r[0],0); // 804E931C
  W16(c->r[4]+0x0000000Au,c->r[0]); // 804E9320
  if (crb(c,2)) { goto L_804E9330; } // 804E9324
  c->r[0]=c->r[6]|0x00000040u; // 804E9328
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E932C
L_804E9330:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 804E9330
  cmps(c,0,(int32_t)c->r[0],0); // 804E9334
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 804E9338
  if (crb(c,2)) { goto L_804E9348; } // 804E933C
  c->r[0]=c->r[6]|0x00000080u; // 804E9340
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E9344
L_804E9348:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 804E9348
  cmps(c,0,(int32_t)c->r[0],0); // 804E934C
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 804E9350
  if (crb(c,2)) { goto L_804E9360; } // 804E9354
  c->r[0]=c->r[6]|0x00000100u; // 804E9358
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E935C
L_804E9360:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 804E9360
  cmps(c,0,(int32_t)c->r[0],0); // 804E9364
  W16(c->r[4]+0x00000010u,c->r[0]); // 804E9368
  if (crb(c,2)) { goto L_804E9378; } // 804E936C
  c->r[0]=c->r[6]|0x00000200u; // 804E9370
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E9374
L_804E9378:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 804E9378
  cmps(c,0,(int32_t)c->r[0],0); // 804E937C
  W16(c->r[4]+0x00000012u,c->r[0]); // 804E9380
  if (crb(c,2)) { goto L_804E9390; } // 804E9384
  c->r[0]=c->r[6]|0x00000400u; // 804E9388
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E938C
L_804E9390:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 804E9390
  cmps(c,0,(int32_t)c->r[0],0); // 804E9394
  W16(c->r[4]+0x00000014u,c->r[0]); // 804E9398
  if (crb(c,2)) { goto L_804E93A8; } // 804E939C
  c->r[0]=c->r[6]|0x00000800u; // 804E93A0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E93A4
L_804E93A8:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 804E93A8
  cmps(c,0,(int32_t)c->r[0],0); // 804E93AC
  W16(c->r[4]+0x00000016u,c->r[0]); // 804E93B0
  if (crb(c,2)) { goto L_804E93C0; } // 804E93B4
  c->r[0]=c->r[6]|0x00001000u; // 804E93B8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E93BC
L_804E93C0:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 804E93C0
  cmps(c,0,(int32_t)c->r[0],0); // 804E93C4
  W16(c->r[4]+0x00000018u,c->r[0]); // 804E93C8
  if (crb(c,2)) { goto L_804E93D8; } // 804E93CC
  c->r[0]=c->r[6]|0x00002000u; // 804E93D0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E93D4
L_804E93D8:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 804E93D8
  cmps(c,0,(int32_t)c->r[0],0); // 804E93DC
  W16(c->r[4]+0x0000001Au,c->r[0]); // 804E93E0
  if (crb(c,2)) { goto L_804E93F0; } // 804E93E4
  c->r[0]=c->r[6]|0x00004000u; // 804E93E8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E93EC
L_804E93F0:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 804E93F0
  cmps(c,0,(int32_t)c->r[0],0); // 804E93F4
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 804E93F8
  if (crb(c,2)) { goto L_804E9408; } // 804E93FC
  c->r[0]=c->r[6]|0x00008000u; // 804E9400
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 804E9404
L_804E9408:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 804E9408
  W16(c->r[4]+0x00000100u,c->r[6]); // 804E940C
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E9410
  c->r[0]=c->r[0]|0x03000000u; // 804E9414
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E9418
  c->lr=0x804E9420u; f_8037BBCC(c); // 804E941C
L_804E9420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9424
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E9428
  c->lr=c->r[0]; // 804E942C
  c->r[1]=c->r[1]+0x00000010u; // 804E9430
  return; // 804E9434
}

// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
void f_804E9438(Ctx* __restrict c) {
  trace_call(0x804E9438u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9438
  c->r[0]=c->lr; // 804E943C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804E9440
  c->r[11]=c->r[1]+0x000000A0u; // 804E9444
  c->lr=0x804E944Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E9448
  c->r[31]=c->r[3]|c->r[3]; // 804E944C
  c->r[26]=c->r[4]|c->r[4]; // 804E9450
  if (!crb(c,6)) { goto L_804E9478; } // 804E9454
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 804E9458
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 804E945C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 804E9460
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 804E9464
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 804E9468
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 804E946C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 804E9470
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 804E9474
L_804E9478:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 804E9478
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804E947C
  W32(c->r[1]+0x00000010u,c->r[5]); // 804E9480
  W32(c->r[1]+0x00000014u,c->r[6]); // 804E9484
  W32(c->r[1]+0x00000018u,c->r[7]); // 804E9488
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 804E948C
  W32(c->r[1]+0x00000020u,c->r[9]); // 804E9490
  W32(c->r[1]+0x00000024u,c->r[10]); // 804E9494
  c->lr=0x804E949Cu; f_8037BBA4(c); // 804E9498
  c->r[0]=R32(c->r[31]+0x00000000u); // 804E949C
  c->r[30]=c->r[3]|c->r[3]; // 804E94A0
  cmps(c,0,(int32_t)c->r[0],0); // 804E94A4
  if (!crb(c,2)) { goto L_804E94B4; } // 804E94A8
  c->lr=0x804E94B0u; f_8037BBCC(c); // 804E94AC
  goto L_804E95A4; // 804E94B0
L_804E94B4:;
  cmpu(c,0,c->r[26],0x00000001u); // 804E94B4
  if (!crb(c,2)) { goto L_804E94C4; } // 804E94B8
  c->r[27]=0u+0x00000002u; // 804E94BC
  goto L_804E94DC; // 804E94C0
L_804E94C4:;
  cmpu(c,0,c->r[26],0x00000002u); // 804E94C4
  if (!crb(c,2)) { goto L_804E94D4; } // 804E94C8
  c->r[27]=0u+0x00000005u; // 804E94CC
  goto L_804E94DC; // 804E94D0
L_804E94D4:;
  c->lr=0x804E94D8u; f_8037BBCC(c); // 804E94D4
  goto L_804E95A4; // 804E94D8
L_804E94DC:;
  c->r[3]=c->r[1]+0x000000A8u; // 804E94DC
  c->r[0]=c->r[1]+0x00000008u; // 804E94E0
  c->r[4]=0u+0x02000000u; // 804E94E4
  W32(c->r[1]+0x00000078u,c->r[3]); // 804E94E8
  c->r[29]=c->r[1]+0x00000068u; // 804E94EC
  c->r[28]=0u+0x00000000u; // 804E94F0
  W32(c->r[1]+0x00000074u,c->r[4]); // 804E94F4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 804E94F8
  goto L_804E951C; // 804E94FC
L_804E9500:;
  c->r[3]=c->r[1]+0x00000074u; // 804E9500
  c->r[4]=0u+0x00000001u; // 804E9504
  c->lr=0x804E950Cu; f_803A91F0(c); // 804E9508
  c->r[0]=R32(c->r[3]+0x00000000u); // 804E950C
  c->r[28]=c->r[28]+0x00000001u; // 804E9510
  W16(c->r[29]+0x00000000u,c->r[0]); // 804E9514
  c->r[29]=c->r[29]+0x00000002u; // 804E9518
L_804E951C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 804E951C
  if (crb(c,0)) { IRQCHK(c); goto L_804E9500; } // 804E9520
  cmpu(c,0,c->r[26],0x00000001u); // 804E9524
  if (!crb(c,2)) { goto L_804E9554; } // 804E9528
  c->r[4]=R16(c->r[1]+0x00000068u); // 804E952C
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9530
  c->r[0]=R16(c->r[1]+0x0000006Au); // 804E9534
  W16(c->r[3]+0x00000140u,c->r[4]); // 804E9538
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E953C
  W16(c->r[3]+0x00000142u,c->r[0]); // 804E9540
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E9544
  c->r[0]=c->r[0]|0x20000000u; // 804E9548
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E954C
  goto L_804E959C; // 804E9550
L_804E9554:;
  c->r[4]=R16(c->r[1]+0x00000068u); // 804E9554
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9558
  c->r[0]=R16(c->r[1]+0x0000006Au); // 804E955C
  W16(c->r[3]+0x00000146u,c->r[4]); // 804E9560
  c->r[5]=R16(c->r[1]+0x0000006Cu); // 804E9564
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9568
  c->r[4]=R16(c->r[1]+0x0000006Eu); // 804E956C
  W16(c->r[3]+0x00000148u,c->r[0]); // 804E9570
  c->r[0]=R16(c->r[1]+0x00000070u); // 804E9574
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9578
  W16(c->r[3]+0x0000014Au,c->r[5]); // 804E957C
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9580
  W16(c->r[3]+0x0000014Cu,c->r[4]); // 804E9584
  c->r[3]=R32(c->r[31]+0x00000000u); // 804E9588
  W16(c->r[3]+0x0000014Eu,c->r[0]); // 804E958C
  c->r[0]=R32(c->r[31]+0x00000004u); // 804E9590
  c->r[0]=c->r[0]|0x40000000u; // 804E9594
  W32(c->r[31]+0x00000004u,c->r[0]); // 804E9598
L_804E959C:;
  c->r[3]=c->r[30]|c->r[30]; // 804E959C
  c->lr=0x804E95A4u; f_8037BBCC(c); // 804E95A0
L_804E95A4:;
  c->r[11]=c->r[1]+0x000000A0u; // 804E95A4
  c->lr=0x804E95ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E95A8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804E95AC
  c->lr=c->r[0]; // 804E95B0
  c->r[1]=c->r[1]+0x000000A0u; // 804E95B4
  return; // 804E95B8
}

// GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_804E95BC(Ctx* __restrict c) {
  trace_call(0x804E95BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E95BC
  c->r[0]=c->lr; // 804E95C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E95C4
  c->r[0]=R8(c->r[13]+0xFFFFE4E8u); // 804E95C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E95CC
  if (!crb(c,2)) { goto L_804E9648; } // 804E95D0
  c->r[6]=0u+0x80830000u; // 804E95D4
  c->r[0]=0u+0x00000000u; // 804E95D8
  c->r[3]=c->r[6]+0xFFFF8674u; // 804E95DC
  c->r[4]=0u+0x804F0000u; // 804E95E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804E95E4
  c->r[9]=c->r[3]+0x00000004u; // 804E95E8
  c->r[8]=c->r[3]+0x00000010u; // 804E95EC
  c->r[7]=c->r[3]+0x0000001Cu; // 804E95F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 804E95F4
  c->r[5]=0u+0x80830000u; // 804E95F8
  c->r[4]=c->r[4]+0xFFFF9660u; // 804E95FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 804E9600
  c->r[5]=c->r[5]+0xFFFF8668u; // 804E9604
  W32(c->r[3]+0x00000014u,c->r[0]); // 804E9608
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804E960C
  W32(c->r[3]+0x00000020u,c->r[0]); // 804E9610
  W32(c->r[6]+0xFFFF8674u,c->r[0]); // 804E9614
  W32(c->r[3]+0x00000004u,c->r[9]); // 804E9618
  W32(c->r[3]+0x00000008u,c->r[9]); // 804E961C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804E9620
  W32(c->r[3]+0x00000010u,c->r[8]); // 804E9624
  W32(c->r[3]+0x00000014u,c->r[8]); // 804E9628
  W32(c->r[3]+0x00000018u,c->r[0]); // 804E962C
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 804E9630
  W32(c->r[3]+0x00000020u,c->r[7]); // 804E9634
  W8(c->r[3]+0x00000024u,c->r[0]); // 804E9638
  c->lr=0x804E9640u; f_803A92B8(c); // 804E963C
  c->r[0]=0u+0x00000001u; // 804E9640
  W8(c->r[13]+0xFFFFE4E8u,c->r[0]); // 804E9644
L_804E9648:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9648
  c->r[3]=0u+0x80830000u; // 804E964C
  c->r[3]=c->r[3]+0xFFFF8674u; // 804E9650
  c->lr=c->r[0]; // 804E9654
  c->r[1]=c->r[1]+0x00000010u; // 804E9658
  return; // 804E965C
}

// __dt__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_804E9660(Ctx* __restrict c) {
  trace_call(0x804E9660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9660
  c->r[0]=c->lr; // 804E9664
  cmps(c,0,(int32_t)c->r[3],0); // 804E9668
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E966C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9670
  c->r[31]=c->r[4]|c->r[4]; // 804E9674
  W32(c->r[1]+0x00000008u,c->r[30]); // 804E9678
  c->r[30]=c->r[3]|c->r[3]; // 804E967C
  if (crb(c,2)) { goto L_804E96C8; } // 804E9680
  c->r[3]=addc(c,c->r[3],0x00000018u,0); cr0(c,c->r[3]); // 804E9684
  if (crb(c,2)) { goto L_804E9694; } // 804E9688
  c->r[4]=0u+0x00000000u; // 804E968C
  c->lr=0x804E9694u; f_80507DCC(c); // 804E9690
L_804E9694:;
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 804E9694
  if (crb(c,2)) { goto L_804E96A4; } // 804E9698
  c->r[4]=0u+0x00000000u; // 804E969C
  c->lr=0x804E96A4u; f_80507DCC(c); // 804E96A0
L_804E96A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E96A4
  if (crb(c,2)) { goto L_804E96B8; } // 804E96A8
  c->r[3]=c->r[30]|c->r[30]; // 804E96AC
  c->r[4]=0u+0x00000000u; // 804E96B0
  c->lr=0x804E96B8u; f_80507DCC(c); // 804E96B4
L_804E96B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 804E96B8
  if (!crb(c,1)) { goto L_804E96C8; } // 804E96BC
  c->r[3]=c->r[30]|c->r[30]; // 804E96C0
  c->lr=0x804E96C8u; f_803A9400(c); // 804E96C4
L_804E96C8:;
  c->r[3]=c->r[30]|c->r[30]; // 804E96C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E96CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804E96D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E96D4
  c->lr=c->r[0]; // 804E96D8
  c->r[1]=c->r[1]+0x00000010u; // 804E96DC
  return; // 804E96E0
}

// fn_804E96E4
void f_804E96E4(Ctx* __restrict c) {
  trace_call(0x804E96E4u);
  c->r[0]=c->r[4]+0x00000010u; // 804E96E4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 804E96E8
  return; // 804E96EC
}

// fn_804E96F0
void f_804E96F0(Ctx* __restrict c) {
  trace_call(0x804E96F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E96F0
  c->r[0]=c->lr; // 804E96F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E96F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E96FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E9700
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E9704
  W32(c->r[1]+0x00000010u,c->r[28]); // 804E9708
  c->r[28]=c->r[3]|c->r[3]; // 804E970C
  c->r[0]=R8(c->r[3]+0x00000024u); // 804E9710
  cmps(c,0,(int32_t)c->r[0],0); // 804E9714
  if (!crb(c,2)) { goto L_804E978C; } // 804E9718
  c->r[6]=0u+0x38E40000u; // 804E971C
  c->r[30]=c->r[4]|c->r[4]; // 804E9720
  c->r[0]=c->r[6]+0xFFFF8E39u; // 804E9724
  c->r[29]=0u+0x00000000u; // 804E9728
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 804E972C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; cr0(c,c->r[0]); // 804E9730
  W32(c->r[3]+0x00000028u,c->r[0]); // 804E9734
  if (crb(c,2)) { goto L_804E9784; } // 804E9738
  c->r[31]=c->r[3]+0x00000010u; // 804E973C
  goto L_804E9778; // 804E9740
L_804E9744:;
  cmps(c,0,(int32_t)c->r[30],0); // 804E9744
  c->r[5]=c->r[30]|c->r[30]; // 804E9748
  if (crb(c,2)) { goto L_804E975C; } // 804E974C
  c->r[3]=c->r[30]|c->r[30]; // 804E9750
  c->lr=0x804E9758u; f_804E68FC(c); // 804E9754
  c->r[5]=c->r[3]|c->r[3]; // 804E9758
L_804E975C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 804E975C
  c->r[3]=c->r[28]+0x0000000Cu; // 804E9760
  c->r[4]=c->r[1]+0x00000008u; // 804E9764
  c->r[5]=c->r[5]+0x00000040u; // 804E9768
  c->lr=0x804E9770u; f_80507EDC(c); // 804E976C
  c->r[30]=c->r[30]+0x00000048u; // 804E9770
  c->r[29]=c->r[29]+0x00000001u; // 804E9774
L_804E9778:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 804E9778
  cmpu(c,0,c->r[29],c->r[0]); // 804E977C
  if (crb(c,0)) { IRQCHK(c); goto L_804E9744; } // 804E9780
L_804E9784:;
  c->r[0]=0u+0x00000001u; // 804E9784
  W8(c->r[28]+0x00000024u,c->r[0]); // 804E9788
L_804E978C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E978C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E9790
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E9794
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E9798
  c->r[28]=R32(c->r[1]+0x00000010u); // 804E979C
  c->lr=c->r[0]; // 804E97A0
  c->r[1]=c->r[1]+0x00000020u; // 804E97A4
  return; // 804E97A8
}

// AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv
void f_804E97AC(Ctx* __restrict c) {
  trace_call(0x804E97ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E97AC
  c->r[0]=c->lr; // 804E97B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 804E97B4
  c->r[11]=c->r[1]+0x00000060u; // 804E97B8
  c->lr=0x804E97C0u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E97BC
  c->r[21]=c->r[3]|c->r[3]; // 804E97C0
  c->r[22]=c->r[4]|c->r[4]; // 804E97C4
  c->r[23]=c->r[5]|c->r[5]; // 804E97C8
  c->r[24]=c->r[6]|c->r[6]; // 804E97CC
  c->lr=0x804E97D4u; f_8037BBA4(c); // 804E97D0
  c->r[20]=c->r[3]|c->r[3]; // 804E97D4
  c->lr=0x804E97DCu; f_8037BBA4(c); // 804E97D8
  c->r[0]=R32(c->r[21]+0x00000018u); // 804E97DC
  c->r[19]=c->r[3]|c->r[3]; // 804E97E0
  cmps(c,0,(int32_t)c->r[0],0); // 804E97E4
  if (crb(c,2)) { goto L_804E9930; } // 804E97E8
  c->r[27]=0u+0x80830000u; // 804E97EC
  c->r[28]=0u+0x00000000u; // 804E97F0
  c->r[26]=c->r[27]+0xFFFF8674u; // 804E97F4
  c->r[29]=0u+0x804F0000u; // 804E97F8
  c->r[30]=0u+0x80830000u; // 804E97FC
  c->r[31]=0u+0x00000001u; // 804E9800
  c->r[16]=c->r[26]+0x00000010u; // 804E9804
  goto L_804E9924; // 804E9808
L_804E980C:;
  c->r[3]=R32(c->r[21]+0x0000001Cu); // 804E980C
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 804E9810
  c->r[25]=c->r[3]+0xFFFFFFC0u; // 804E9814
  cmps(c,0,(int32_t)c->r[12],0); // 804E9818
  if (crb(c,2)) { goto L_804E9834; } // 804E981C
  c->r[3]=c->r[25]|c->r[25]; // 804E9820
  c->r[5]=R32(c->r[25]+0x0000003Cu); // 804E9824
  c->r[4]=0u+0x00000001u; // 804E9828
  c->ctr=c->r[12]; // 804E982C
  if (true) { c->lr=0x804E9834u; dispatch(c,c->ctr); } // 804E9830
L_804E9834:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E8u); // 804E9834
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E9838
  if (!crb(c,2)) { goto L_804E98A0; } // 804E983C
  W32(c->r[26]+0x00000004u,c->r[28]); // 804E9840
  c->r[6]=c->r[26]+0x00000004u; // 804E9844
  c->r[7]=c->r[26]+0x00000010u; // 804E9848
  c->r[8]=c->r[26]+0x0000001Cu; // 804E984C
  W32(c->r[26]+0x00000008u,c->r[28]); // 804E9850
  c->r[3]=c->r[26]|c->r[26]; // 804E9854
  c->r[4]=c->r[29]+0xFFFF9660u; // 804E9858
  c->r[5]=c->r[30]+0xFFFF8668u; // 804E985C
  W32(c->r[26]+0x00000010u,c->r[28]); // 804E9860
  W32(c->r[26]+0x00000014u,c->r[28]); // 804E9864
  W32(c->r[26]+0x0000001Cu,c->r[28]); // 804E9868
  W32(c->r[26]+0x00000020u,c->r[28]); // 804E986C
  W32(c->r[27]+0xFFFF8674u,c->r[28]); // 804E9870
  W32(c->r[26]+0x00000004u,c->r[6]); // 804E9874
  W32(c->r[26]+0x00000008u,c->r[6]); // 804E9878
  W32(c->r[26]+0x0000000Cu,c->r[28]); // 804E987C
  W32(c->r[26]+0x00000010u,c->r[7]); // 804E9880
  W32(c->r[26]+0x00000014u,c->r[7]); // 804E9884
  W32(c->r[26]+0x00000018u,c->r[28]); // 804E9888
  W32(c->r[26]+0x0000001Cu,c->r[8]); // 804E988C
  W32(c->r[26]+0x00000020u,c->r[8]); // 804E9890
  W8(c->r[26]+0x00000024u,c->r[28]); // 804E9894
  c->lr=0x804E989Cu; f_803A92B8(c); // 804E9898
  W8(c->r[13]+0xFFFFE4E8u,c->r[31]); // 804E989C
L_804E98A0:;
  c->lr=0x804E98A4u; f_8037BBA4(c); // 804E98A0
  c->r[0]=R32(c->r[25]+0x00000000u); // 804E98A4
  c->r[18]=c->r[3]|c->r[3]; // 804E98A8
  cmps(c,0,(int32_t)c->r[0],0); // 804E98AC
  if (crb(c,2)) { goto L_804E98BC; } // 804E98B0
  c->r[3]=c->r[0]|c->r[0]; // 804E98B4
  c->lr=0x804E98BCu; f_80393CF0(c); // 804E98B8
L_804E98BC:;
  c->r[3]=c->r[25]|c->r[25]; // 804E98BC
  c->r[4]=0u+0xFFFFFFFFu; // 804E98C0
  c->lr=0x804E98C8u; f_804E6940(c); // 804E98C4
  c->lr=0x804E98CCu; f_8037BBA4(c); // 804E98C8
  c->r[0]=R8(c->r[25]+0x0000001Du); // 804E98CC
  c->r[17]=c->r[3]|c->r[3]; // 804E98D0
  cmps(c,0,(int32_t)c->r[0],0); // 804E98D4
  if (crb(c,2)) { goto L_804E98F0; } // 804E98D8
  c->r[25]=c->r[25]+0x00000040u; // 804E98DC
  c->r[3]=c->r[26]+0x00000018u; // 804E98E0
  c->r[4]=c->r[25]|c->r[25]; // 804E98E4
  c->lr=0x804E98ECu; f_80507F08(c); // 804E98E8
  goto L_804E9900; // 804E98EC
L_804E98F0:;
  c->r[25]=c->r[25]+0x00000040u; // 804E98F0
  c->r[3]=c->r[26]|c->r[26]; // 804E98F4
  c->r[4]=c->r[25]|c->r[25]; // 804E98F8
  c->lr=0x804E9900u; f_80507F08(c); // 804E98FC
L_804E9900:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 804E9900
  c->r[5]=c->r[25]|c->r[25]; // 804E9904
  c->r[3]=c->r[26]+0x0000000Cu; // 804E9908
  c->r[4]=c->r[1]+0x0000000Cu; // 804E990C
  c->lr=0x804E9914u; f_80507EDC(c); // 804E9910
  c->r[3]=c->r[17]|c->r[17]; // 804E9914
  c->lr=0x804E991Cu; f_8037BBCC(c); // 804E9918
  c->r[3]=c->r[18]|c->r[18]; // 804E991C
  c->lr=0x804E9924u; f_8037BBCC(c); // 804E9920
L_804E9924:;
  c->r[0]=R32(c->r[21]+0x00000018u); // 804E9924
  cmps(c,0,(int32_t)c->r[0],0); // 804E9928
  if (!crb(c,2)) { IRQCHK(c); goto L_804E980C; } // 804E992C
L_804E9930:;
  c->r[0]=R32(c->r[21]+0x0000000Cu); // 804E9930
  cmps(c,0,(int32_t)c->r[0],0); // 804E9934
  if (!crb(c,2)) { goto L_804E994C; } // 804E9938
  c->r[3]=c->r[19]|c->r[19]; // 804E993C
  c->lr=0x804E9944u; f_8037BBCC(c); // 804E9940
  c->r[18]=0u+0x00000000u; // 804E9944
  goto L_804E999C; // 804E9948
L_804E994C:;
  c->r[5]=R32(c->r[21]+0x00000010u); // 804E994C
  c->r[3]=c->r[21]+0x0000000Cu; // 804E9950
  c->r[4]=c->r[1]+0x00000010u; // 804E9954
  W32(c->r[1]+0x00000010u,c->r[5]); // 804E9958
  c->r[16]=c->r[5]+0xFFFFFFC0u; // 804E995C
  c->lr=0x804E9964u; f_80507E50(c); // 804E9960
  cmps(c,0,(int32_t)c->r[16],0); // 804E9964
  c->r[18]=c->r[16]|c->r[16]; // 804E9968
  if (crb(c,2)) { goto L_804E997C; } // 804E996C
  c->r[3]=c->r[16]|c->r[16]; // 804E9970
  c->lr=0x804E9978u; f_804E68FC(c); // 804E9974
  c->r[18]=c->r[3]|c->r[3]; // 804E9978
L_804E997C:;
  c->r[0]=c->r[21]+0x00000004u; // 804E997C
  c->r[3]=c->r[21]|c->r[21]; // 804E9980
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9984
  c->r[4]=c->r[1]+0x00000014u; // 804E9988
  c->r[5]=c->r[16]+0x00000040u; // 804E998C
  c->lr=0x804E9994u; f_80507EDC(c); // 804E9990
  c->r[3]=c->r[19]|c->r[19]; // 804E9994
  c->lr=0x804E999Cu; f_8037BBCC(c); // 804E9998
L_804E999C:;
  cmps(c,0,(int32_t)c->r[18],0); // 804E999C
  if (!crb(c,2)) { goto L_804E99B4; } // 804E99A0
  c->r[3]=c->r[20]|c->r[20]; // 804E99A4
  c->lr=0x804E99ACu; f_8037BBCC(c); // 804E99A8
  c->r[3]=0u+0x00000000u; // 804E99AC
  goto L_804E9A64; // 804E99B0
L_804E99B4:;
  c->r[4]=0u+0x804E0000u; // 804E99B4
  c->r[3]=c->r[22]|c->r[22]; // 804E99B8
  c->r[5]=c->r[18]|c->r[18]; // 804E99BC
  c->r[4]=c->r[4]+0x0000726Cu; // 804E99C0
  c->lr=0x804E99C8u; f_80393D6C(c); // 804E99C4
  cmps(c,0,(int32_t)c->r[3],0); // 804E99C8
  c->r[4]=c->r[3]|c->r[3]; // 804E99CC
  if (!crb(c,2)) { goto L_804E9A48; } // 804E99D0
  c->r[3]=c->r[18]|c->r[18]; // 804E99D4
  c->r[4]=0u+0xFFFFFFFFu; // 804E99D8
  c->lr=0x804E99E0u; f_804E6940(c); // 804E99DC
  c->lr=0x804E99E4u; f_8037BBA4(c); // 804E99E0
  c->r[0]=R8(c->r[18]+0x0000001Du); // 804E99E4
  c->r[17]=c->r[3]|c->r[3]; // 804E99E8
  cmps(c,0,(int32_t)c->r[0],0); // 804E99EC
  if (crb(c,2)) { goto L_804E9A08; } // 804E99F0
  c->r[16]=c->r[18]+0x00000040u; // 804E99F4
  c->r[3]=c->r[21]+0x00000018u; // 804E99F8
  c->r[4]=c->r[16]|c->r[16]; // 804E99FC
  c->lr=0x804E9A04u; f_80507F08(c); // 804E9A00
  goto L_804E9A18; // 804E9A04
L_804E9A08:;
  c->r[16]=c->r[18]+0x00000040u; // 804E9A08
  c->r[3]=c->r[21]|c->r[21]; // 804E9A0C
  c->r[4]=c->r[16]|c->r[16]; // 804E9A10
  c->lr=0x804E9A18u; f_80507F08(c); // 804E9A14
L_804E9A18:;
  c->r[0]=c->r[21]+0x00000010u; // 804E9A18
  c->r[5]=c->r[16]|c->r[16]; // 804E9A1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E9A20
  c->r[3]=c->r[21]+0x0000000Cu; // 804E9A24
  c->r[4]=c->r[1]+0x00000008u; // 804E9A28
  c->lr=0x804E9A30u; f_80507EDC(c); // 804E9A2C
  c->r[3]=c->r[17]|c->r[17]; // 804E9A30
  c->lr=0x804E9A38u; f_8037BBCC(c); // 804E9A34
  c->r[3]=c->r[20]|c->r[20]; // 804E9A38
  c->lr=0x804E9A40u; f_8037BBCC(c); // 804E9A3C
  c->r[3]=0u+0x00000000u; // 804E9A40
  goto L_804E9A64; // 804E9A44
L_804E9A48:;
  c->r[3]=c->r[18]|c->r[18]; // 804E9A48
  c->lr=0x804E9A50u; f_804E8EC8(c); // 804E9A4C
  W32(c->r[18]+0x00000038u,c->r[23]); // 804E9A50
  c->r[3]=c->r[20]|c->r[20]; // 804E9A54
  W32(c->r[18]+0x0000003Cu,c->r[24]); // 804E9A58
  c->lr=0x804E9A60u; f_8037BBCC(c); // 804E9A5C
  c->r[3]=c->r[18]|c->r[18]; // 804E9A60
L_804E9A64:;
  c->r[11]=c->r[1]+0x00000060u; // 804E9A64
  c->lr=0x804E9A6Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E9A68
  c->r[0]=R32(c->r[1]+0x00000064u); // 804E9A6C
  c->lr=c->r[0]; // 804E9A70
  c->r[1]=c->r[1]+0x00000060u; // 804E9A74
  return; // 804E9A78
}

// FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_804E9A7C(Ctx* __restrict c) {
  trace_call(0x804E9A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9A7C
  c->r[0]=c->lr; // 804E9A80
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E9A84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E9A88
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E9A8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E9A90
  c->r[29]=c->r[4]|c->r[4]; // 804E9A94
  W32(c->r[1]+0x00000010u,c->r[28]); // 804E9A98
  c->r[28]=c->r[3]|c->r[3]; // 804E9A9C
  c->lr=0x804E9AA4u; f_8037BBA4(c); // 804E9AA0
  c->r[0]=R32(c->r[29]+0x00000000u); // 804E9AA4
  c->r[31]=c->r[3]|c->r[3]; // 804E9AA8
  cmps(c,0,(int32_t)c->r[0],0); // 804E9AAC
  if (crb(c,2)) { goto L_804E9ABC; } // 804E9AB0
  c->r[3]=c->r[0]|c->r[0]; // 804E9AB4
  c->lr=0x804E9ABCu; f_80393CF0(c); // 804E9AB8
L_804E9ABC:;
  c->r[3]=c->r[29]|c->r[29]; // 804E9ABC
  c->r[4]=0u+0xFFFFFFFFu; // 804E9AC0
  c->lr=0x804E9AC8u; f_804E6940(c); // 804E9AC4
  c->lr=0x804E9ACCu; f_8037BBA4(c); // 804E9AC8
  c->r[0]=R8(c->r[29]+0x0000001Du); // 804E9ACC
  c->r[30]=c->r[3]|c->r[3]; // 804E9AD0
  cmps(c,0,(int32_t)c->r[0],0); // 804E9AD4
  if (crb(c,2)) { goto L_804E9AF0; } // 804E9AD8
  c->r[29]=c->r[29]+0x00000040u; // 804E9ADC
  c->r[3]=c->r[28]+0x00000018u; // 804E9AE0
  c->r[4]=c->r[29]|c->r[29]; // 804E9AE4
  c->lr=0x804E9AECu; f_80507F08(c); // 804E9AE8
  goto L_804E9B00; // 804E9AEC
L_804E9AF0:;
  c->r[29]=c->r[29]+0x00000040u; // 804E9AF0
  c->r[3]=c->r[28]|c->r[28]; // 804E9AF4
  c->r[4]=c->r[29]|c->r[29]; // 804E9AF8
  c->lr=0x804E9B00u; f_80507F08(c); // 804E9AFC
L_804E9B00:;
  c->r[0]=c->r[28]+0x00000010u; // 804E9B00
  c->r[5]=c->r[29]|c->r[29]; // 804E9B04
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E9B08
  c->r[3]=c->r[28]+0x0000000Cu; // 804E9B0C
  c->r[4]=c->r[1]+0x00000008u; // 804E9B10
  c->lr=0x804E9B18u; f_80507EDC(c); // 804E9B14
  c->r[3]=c->r[30]|c->r[30]; // 804E9B18
  c->lr=0x804E9B20u; f_8037BBCC(c); // 804E9B1C
  c->r[3]=c->r[31]|c->r[31]; // 804E9B20
  c->lr=0x804E9B28u; f_8037BBCC(c); // 804E9B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E9B28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E9B2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E9B30
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E9B34
  c->r[28]=R32(c->r[1]+0x00000010u); // 804E9B38
  c->lr=c->r[0]; // 804E9B3C
  c->r[1]=c->r[1]+0x00000020u; // 804E9B40
  return; // 804E9B44
}

// ReserveForFreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_804E9B48(Ctx* __restrict c) {
  trace_call(0x804E9B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9B48
  c->r[0]=c->lr; // 804E9B4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 804E9B50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804E9B54
  W32(c->r[1]+0x00000018u,c->r[30]); // 804E9B58
  W32(c->r[1]+0x00000014u,c->r[29]); // 804E9B5C
  c->r[29]=c->r[4]|c->r[4]; // 804E9B60
  W32(c->r[1]+0x00000010u,c->r[28]); // 804E9B64
  c->r[28]=c->r[3]|c->r[3]; // 804E9B68
  c->lr=0x804E9B70u; f_8037BBA4(c); // 804E9B6C
  c->r[0]=0u+0x00000001u; // 804E9B70
  c->r[31]=c->r[3]|c->r[3]; // 804E9B74
  W8(c->r[29]+0x0000001Du,c->r[0]); // 804E9B78
  c->lr=0x804E9B80u; f_8037BBA4(c); // 804E9B7C
  c->r[29]=c->r[29]+0x00000040u; // 804E9B80
  c->r[30]=c->r[3]|c->r[3]; // 804E9B84
  c->r[3]=c->r[28]|c->r[28]; // 804E9B88
  c->r[4]=c->r[29]|c->r[29]; // 804E9B8C
  c->lr=0x804E9B94u; f_80507F08(c); // 804E9B90
  c->r[0]=c->r[28]+0x0000001Cu; // 804E9B94
  c->r[5]=c->r[29]|c->r[29]; // 804E9B98
  W32(c->r[1]+0x00000008u,c->r[0]); // 804E9B9C
  c->r[3]=c->r[28]+0x00000018u; // 804E9BA0
  c->r[4]=c->r[1]+0x00000008u; // 804E9BA4
  c->lr=0x804E9BACu; f_80507EDC(c); // 804E9BA8
  c->r[3]=c->r[30]|c->r[30]; // 804E9BAC
  c->lr=0x804E9BB4u; f_8037BBCC(c); // 804E9BB0
  c->r[3]=c->r[31]|c->r[31]; // 804E9BB4
  c->lr=0x804E9BBCu; f_8037BBCC(c); // 804E9BB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804E9BBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804E9BC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804E9BC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804E9BC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804E9BCC
  c->lr=c->r[0]; // 804E9BD0
  c->r[1]=c->r[1]+0x00000020u; // 804E9BD4
  return; // 804E9BD8
}

// FreeAllReservedAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_804E9BDC(Ctx* __restrict c) {
  trace_call(0x804E9BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9BDC
  c->r[0]=c->lr; // 804E9BE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 804E9BE4
  c->r[11]=c->r[1]+0x00000040u; // 804E9BE8
  c->lr=0x804E9BF0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804E9BEC
  c->r[0]=R32(c->r[3]+0x00000018u); // 804E9BF0
  c->r[31]=c->r[3]|c->r[3]; // 804E9BF4
  cmps(c,0,(int32_t)c->r[0],0); // 804E9BF8
  if (crb(c,2)) { goto L_804E9D44; } // 804E9BFC
  c->r[23]=0u+0x80830000u; // 804E9C00
  c->r[24]=0u+0x00000000u; // 804E9C04
  c->r[22]=c->r[23]+0xFFFF8674u; // 804E9C08
  c->r[25]=0u+0x804F0000u; // 804E9C0C
  c->r[26]=0u+0x80830000u; // 804E9C10
  c->r[27]=0u+0x00000001u; // 804E9C14
  c->r[28]=c->r[22]+0x00000010u; // 804E9C18
  goto L_804E9D38; // 804E9C1C
L_804E9C20:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 804E9C20
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 804E9C24
  c->r[21]=c->r[3]+0xFFFFFFC0u; // 804E9C28
  cmps(c,0,(int32_t)c->r[12],0); // 804E9C2C
  if (crb(c,2)) { goto L_804E9C48; } // 804E9C30
  c->r[3]=c->r[21]|c->r[21]; // 804E9C34
  c->r[5]=R32(c->r[21]+0x0000003Cu); // 804E9C38
  c->r[4]=0u+0x00000001u; // 804E9C3C
  c->ctr=c->r[12]; // 804E9C40
  if (true) { c->lr=0x804E9C48u; dispatch(c,c->ctr); } // 804E9C44
L_804E9C48:;
  c->r[0]=R8(c->r[13]+0xFFFFE4E8u); // 804E9C48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804E9C4C
  if (!crb(c,2)) { goto L_804E9CB4; } // 804E9C50
  W32(c->r[22]+0x00000004u,c->r[24]); // 804E9C54
  c->r[6]=c->r[22]+0x00000004u; // 804E9C58
  c->r[7]=c->r[22]+0x00000010u; // 804E9C5C
  c->r[8]=c->r[22]+0x0000001Cu; // 804E9C60
  W32(c->r[22]+0x00000008u,c->r[24]); // 804E9C64
  c->r[3]=c->r[22]|c->r[22]; // 804E9C68
  c->r[4]=c->r[25]+0xFFFF9660u; // 804E9C6C
  c->r[5]=c->r[26]+0xFFFF8668u; // 804E9C70
  W32(c->r[22]+0x00000010u,c->r[24]); // 804E9C74
  W32(c->r[22]+0x00000014u,c->r[24]); // 804E9C78
  W32(c->r[22]+0x0000001Cu,c->r[24]); // 804E9C7C
  W32(c->r[22]+0x00000020u,c->r[24]); // 804E9C80
  W32(c->r[23]+0xFFFF8674u,c->r[24]); // 804E9C84
  W32(c->r[22]+0x00000004u,c->r[6]); // 804E9C88
  W32(c->r[22]+0x00000008u,c->r[6]); // 804E9C8C
  W32(c->r[22]+0x0000000Cu,c->r[24]); // 804E9C90
  W32(c->r[22]+0x00000010u,c->r[7]); // 804E9C94
  W32(c->r[22]+0x00000014u,c->r[7]); // 804E9C98
  W32(c->r[22]+0x00000018u,c->r[24]); // 804E9C9C
  W32(c->r[22]+0x0000001Cu,c->r[8]); // 804E9CA0
  W32(c->r[22]+0x00000020u,c->r[8]); // 804E9CA4
  W8(c->r[22]+0x00000024u,c->r[24]); // 804E9CA8
  c->lr=0x804E9CB0u; f_803A92B8(c); // 804E9CAC
  W8(c->r[13]+0xFFFFE4E8u,c->r[27]); // 804E9CB0
L_804E9CB4:;
  c->lr=0x804E9CB8u; f_8037BBA4(c); // 804E9CB4
  c->r[0]=R32(c->r[21]+0x00000000u); // 804E9CB8
  c->r[30]=c->r[3]|c->r[3]; // 804E9CBC
  cmps(c,0,(int32_t)c->r[0],0); // 804E9CC0
  if (crb(c,2)) { goto L_804E9CD0; } // 804E9CC4
  c->r[3]=c->r[0]|c->r[0]; // 804E9CC8
  c->lr=0x804E9CD0u; f_80393CF0(c); // 804E9CCC
L_804E9CD0:;
  c->r[3]=c->r[21]|c->r[21]; // 804E9CD0
  c->r[4]=0u+0xFFFFFFFFu; // 804E9CD4
  c->lr=0x804E9CDCu; f_804E6940(c); // 804E9CD8
  c->lr=0x804E9CE0u; f_8037BBA4(c); // 804E9CDC
  c->r[0]=R8(c->r[21]+0x0000001Du); // 804E9CE0
  c->r[29]=c->r[3]|c->r[3]; // 804E9CE4
  cmps(c,0,(int32_t)c->r[0],0); // 804E9CE8
  if (crb(c,2)) { goto L_804E9D04; } // 804E9CEC
  c->r[21]=c->r[21]+0x00000040u; // 804E9CF0
  c->r[3]=c->r[22]+0x00000018u; // 804E9CF4
  c->r[4]=c->r[21]|c->r[21]; // 804E9CF8
  c->lr=0x804E9D00u; f_80507F08(c); // 804E9CFC
  goto L_804E9D14; // 804E9D00
L_804E9D04:;
  c->r[21]=c->r[21]+0x00000040u; // 804E9D04
  c->r[3]=c->r[22]|c->r[22]; // 804E9D08
  c->r[4]=c->r[21]|c->r[21]; // 804E9D0C
  c->lr=0x804E9D14u; f_80507F08(c); // 804E9D10
L_804E9D14:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 804E9D14
  c->r[5]=c->r[21]|c->r[21]; // 804E9D18
  c->r[3]=c->r[22]+0x0000000Cu; // 804E9D1C
  c->r[4]=c->r[1]+0x00000008u; // 804E9D20
  c->lr=0x804E9D28u; f_80507EDC(c); // 804E9D24
  c->r[3]=c->r[29]|c->r[29]; // 804E9D28
  c->lr=0x804E9D30u; f_8037BBCC(c); // 804E9D2C
  c->r[3]=c->r[30]|c->r[30]; // 804E9D30
  c->lr=0x804E9D38u; f_8037BBCC(c); // 804E9D34
L_804E9D38:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 804E9D38
  cmps(c,0,(int32_t)c->r[0],0); // 804E9D3C
  if (!crb(c,2)) { IRQCHK(c); goto L_804E9C20; } // 804E9D40
L_804E9D44:;
  c->r[11]=c->r[1]+0x00000040u; // 804E9D44
  c->lr=0x804E9D4Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804E9D48
  c->r[0]=R32(c->r[1]+0x00000044u); // 804E9D4C
  c->lr=c->r[0]; // 804E9D50
  c->r[1]=c->r[1]+0x00000040u; // 804E9D54
  return; // 804E9D58
}

// CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
void f_804E9D5C(Ctx* __restrict c) {
  trace_call(0x804E9D5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9D5C
  c->r[0]=c->lr; // 804E9D60
  cmps(c,0,(int32_t)c->r[4],0); // 804E9D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9D68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9D6C
  c->r[31]=c->r[3]|c->r[3]; // 804E9D70
  if (crb(c,2)) { goto L_804E9D80; } // 804E9D74
  cmps(c,0,(int32_t)c->r[5],0); // 804E9D78
  if (!crb(c,2)) { goto L_804E9D90; } // 804E9D7C
L_804E9D80:;
  c->r[0]=0u+0x00000000u; // 804E9D80
  W32(c->r[3]+0x00000000u,c->r[0]); // 804E9D84
  c->r[3]=0u+0x00000000u; // 804E9D88
  goto L_804E9DB0; // 804E9D8C
L_804E9D90:;
  c->r[3]=c->r[4]|c->r[4]; // 804E9D90
  c->r[4]=c->r[5]|c->r[5]; // 804E9D94
  c->r[5]=0u+0x00000000u; // 804E9D98
  c->lr=0x804E9DA0u; f_803C47E4(c); // 804E9D9C
  c->r[0]=0u-c->r[3]; // 804E9DA0
  W32(c->r[31]+0x00000000u,c->r[3]); // 804E9DA4
  c->r[0]=c->r[0]|c->r[3]; // 804E9DA8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804E9DAC
L_804E9DB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9DB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9DB4
  c->lr=c->r[0]; // 804E9DB8
  c->r[1]=c->r[1]+0x00000010u; // 804E9DBC
  return; // 804E9DC0
}

// fn_804E9DC4
void f_804E9DC4(Ctx* __restrict c) {
  trace_call(0x804E9DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9DC4
  c->r[0]=c->lr; // 804E9DC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9DCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9DD0
  c->r[31]=c->r[3]|c->r[3]; // 804E9DD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 804E9DD8
  cmps(c,0,(int32_t)c->r[0],0); // 804E9DDC
  if (crb(c,2)) { goto L_804E9DF4; } // 804E9DE0
  c->r[3]=c->r[0]|c->r[0]; // 804E9DE4
  c->lr=0x804E9DECu; f_803C4868(c); // 804E9DE8
  c->r[0]=0u+0x00000000u; // 804E9DEC
  W32(c->r[31]+0x00000000u,c->r[0]); // 804E9DF0
L_804E9DF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9DF8
  c->lr=c->r[0]; // 804E9DFC
  c->r[1]=c->r[1]+0x00000010u; // 804E9E00
  return; // 804E9E04
}

// HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
void f_804E9E08(Ctx* __restrict c) {
  trace_call(0x804E9E08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9E08
  c->r[0]=c->lr; // 804E9E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9E10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9E14
  c->r[31]=c->r[3]|c->r[3]; // 804E9E18
  c->r[3]=c->r[4]|c->r[4]; // 804E9E1C
  c->r[4]=c->r[5]|c->r[5]; // 804E9E20
  c->lr=0x804E9E28u; f_8039D2A0(c); // 804E9E24
  c->r[3]=0u+0x804F0000u; // 804E9E28
  c->r[4]=0u+0x804F0000u; // 804E9E2C
  c->r[3]=c->r[3]+0xFFFF9E90u; // 804E9E30
  c->r[4]=c->r[4]+0xFFFF9EF0u; // 804E9E34
  c->lr=0x804E9E3Cu; f_8039D294(c); // 804E9E38
  c->r[0]=0u+0x00000000u; // 804E9E3C
  W32(c->r[13]+0xFFFFE4F0u,c->r[31]); // 804E9E40
  W32(c->r[13]+0xFFFFE4F4u,c->r[0]); // 804E9E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9E4C
  c->lr=c->r[0]; // 804E9E50
  c->r[1]=c->r[1]+0x00000010u; // 804E9E54
  return; // 804E9E58
}

// RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
void f_804E9E5C(Ctx* __restrict c) {
  trace_call(0x804E9E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9E5C
  c->r[0]=c->lr; // 804E9E60
  c->r[3]=c->r[4]|c->r[4]; // 804E9E64
  c->r[4]=c->r[5]|c->r[5]; // 804E9E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9E6C
  c->lr=0x804E9E74u; f_8039D294(c); // 804E9E70
  c->r[0]=0u+0x00000000u; // 804E9E74
  c->r[3]=R32(c->r[13]+0xFFFFE4F4u); // 804E9E78
  W32(c->r[13]+0xFFFFE4F0u,c->r[0]); // 804E9E7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9E80
  c->lr=c->r[0]; // 804E9E84
  c->r[1]=c->r[1]+0x00000010u; // 804E9E88
  return; // 804E9E8C
}

// Alloc__Q44nw4r3snd6detail8AxfxImplFUl
void f_804E9E90(Ctx* __restrict c) {
  trace_call(0x804E9E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9E90
  c->r[0]=c->lr; // 804E9E94
  c->r[5]=0u+0x00000004u; // 804E9E98
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9E9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9EA0
  c->r[31]=c->r[3]|c->r[3]; // 804E9EA4
  c->r[4]=c->r[31]|c->r[31]; // 804E9EA8
  c->r[6]=R32(c->r[13]+0xFFFFE4F0u); // 804E9EAC
  c->r[3]=R32(c->r[6]+0x00000000u); // 804E9EB0
  c->lr=0x804E9EB8u; f_803C4898(c); // 804E9EB4
  c->r[5]=R32(c->r[13]+0xFFFFE4F0u); // 804E9EB8
  c->r[0]=c->r[31]+0x00000003u; // 804E9EBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 804E9EC0
  c->r[4]=R32(c->r[5]+0x00000004u); // 804E9EC4
  c->r[4]=c->r[4]+0x00000001u; // 804E9EC8
  W32(c->r[5]+0x00000004u,c->r[4]); // 804E9ECC
  c->r[4]=R32(c->r[13]+0xFFFFE4F4u); // 804E9ED0
  c->r[0]=c->r[4]+c->r[0]; // 804E9ED4
  W32(c->r[13]+0xFFFFE4F4u,c->r[0]); // 804E9ED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9EE0
  c->lr=c->r[0]; // 804E9EE4
  c->r[1]=c->r[1]+0x00000010u; // 804E9EE8
  return; // 804E9EEC
}

// Free__Q44nw4r3snd6detail8AxfxImplFPv
void f_804E9EF0(Ctx* __restrict c) {
  trace_call(0x804E9EF0u);
  c->r[4]=R32(c->r[13]+0xFFFFE4F0u); // 804E9EF0
  c->r[3]=R32(c->r[4]+0x00000004u); // 804E9EF4
  cmps(c,0,(int32_t)c->r[3],0); // 804E9EF8
  if (crb(c,2)) { goto L_804E9F08; } // 804E9EFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804E9F00
  W32(c->r[4]+0x00000004u,c->r[0]); // 804E9F04
L_804E9F08:;
  c->r[3]=R32(c->r[13]+0xFFFFE4F0u); // 804E9F08
  c->r[0]=R32(c->r[3]+0x00000004u); // 804E9F0C
  cmps(c,0,(int32_t)c->r[0],0); // 804E9F10
  if (!crb(c,2)) return; // 804E9F14
  c->r[3]=R32(c->r[3]+0x00000000u); // 804E9F18
  c->r[4]=0u+0x00000003u; // 804E9F1C
  f_803C49B8(c); return; // 804E9F20
  return; // 804E9F24
}

// fn_804E9F28
void f_804E9F28(Ctx* __restrict c) {
  trace_call(0x804E9F28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9F28
  c->r[0]=c->lr; // 804E9F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9F30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9F34
  c->r[31]=c->r[3]|c->r[3]; // 804E9F38
  c->lr=0x804E9F40u; f_804EA198(c); // 804E9F3C
  c->r[0]=0u+0x00000000u; // 804E9F40
  c->r[3]=c->r[31]|c->r[31]; // 804E9F44
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 804E9F48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9F50
  c->lr=c->r[0]; // 804E9F54
  c->r[1]=c->r[1]+0x00000010u; // 804E9F58
  return; // 804E9F5C
}

// __dt__Q44nw4r3snd6detail4BankFv
void f_804E9F60(Ctx* __restrict c) {
  trace_call(0x804E9F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9F60
  c->r[0]=c->lr; // 804E9F64
  cmps(c,0,(int32_t)c->r[3],0); // 804E9F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 804E9F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804E9F70
  c->r[31]=c->r[3]|c->r[3]; // 804E9F74
  if (crb(c,2)) { goto L_804E9F88; } // 804E9F78
  cmps(c,0,(int32_t)c->r[4],0); // 804E9F7C
  if (!crb(c,1)) { goto L_804E9F88; } // 804E9F80
  c->lr=0x804E9F88u; f_803A9400(c); // 804E9F84
L_804E9F88:;
  c->r[3]=c->r[31]|c->r[31]; // 804E9F88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804E9F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804E9F90
  c->lr=c->r[0]; // 804E9F94
  c->r[1]=c->r[1]+0x00000010u; // 804E9F98
  return; // 804E9F9C
}

// NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo
void f_804E9FA0(Ctx* __restrict c) {
  trace_call(0x804E9FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 804E9FA0
  c->r[0]=c->lr; // 804E9FA4
  c->r[5]=R32(c->r[4]+0x00000000u); // 804E9FA8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 804E9FAC
  c->r[0]=0u+0x43300000u; // 804E9FB0
  W32(c->r[1]+0x000000BCu,c->r[31]); // 804E9FB4
  c->r[31]=c->r[3]|c->r[3]; // 804E9FB8
  W32(c->r[1]+0x000000B8u,c->r[30]); // 804E9FBC
  c->r[30]=c->r[4]|c->r[4]; // 804E9FC0
  c->r[6]=R32(c->r[30]+0x00000004u); // 804E9FC4
  c->r[4]=c->r[1]+0x0000000Cu; // 804E9FC8
  W32(c->r[1]+0x000000A8u,c->r[0]); // 804E9FCC
  c->r[7]=R32(c->r[30]+0x00000008u); // 804E9FD0
  W32(c->r[1]+0x000000B0u,c->r[0]); // 804E9FD4
  c->lr=0x804E9FDCu; f_804EA334(c); // 804E9FD8
  cmps(c,0,(int32_t)c->r[3],0); // 804E9FDC
  if (!crb(c,2)) { goto L_804E9FEC; } // 804E9FE0
  c->r[3]=0u+0x00000000u; // 804E9FE4
  goto L_804EA180; // 804E9FE8
L_804E9FEC:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 804E9FEC
  c->r[3]=c->r[31]|c->r[31]; // 804E9FF0
  c->r[4]=c->r[1]+0x00000028u; // 804E9FF4
  c->r[5]=c->r[1]+0x0000000Cu; // 804E9FF8
  c->r[7]=c->r[1]+0x00000008u; // 804E9FFC
  c->lr=0x804EA004u; f_804EA600(c); // 804EA000
  cmps(c,0,(int32_t)c->r[3],0); // 804EA004
  if (!crb(c,2)) { goto L_804EA014; } // 804EA008
  c->r[3]=0u+0x00000000u; // 804EA00C
  goto L_804EA180; // 804EA010
L_804EA014:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 804EA014
  c->r[3]=0u+0x00000002u; // 804EA018
  cmps(c,0,(int32_t)c->r[0],2); // 804EA01C
  if (crb(c,1)) { goto L_804EA028; } // 804EA020
  c->r[3]=c->r[0]|c->r[0]; // 804EA024
L_804EA028:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 804EA028
  c->r[5]=R32(c->r[30]+0x00000014u); // 804EA02C
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 804EA030
  c->r[7]=R32(c->r[30]+0x00000020u); // 804EA034
  c->lr=0x804EA03Cu; f_804ED5F0(c); // 804EA038
  cmps(c,0,(int32_t)c->r[3],0); // 804EA03C
  c->r[31]=c->r[3]|c->r[3]; // 804EA040
  if (!crb(c,2)) { goto L_804EA050; } // 804EA044
  c->r[3]=0u+0x00000000u; // 804EA048
  goto L_804EA180; // 804EA04C
L_804EA050:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 804EA050
  c->r[0]=R32(c->r[30]+0x00000008u); // 804EA054
  W32(c->r[3]+0x000000C8u,c->r[4]); // 804EA058
  c->r[0]=c->r[0]^0x80000000u; // 804EA05C
  {uint32_t ea=c->r[2]+0x00001950u; c->f[1]=RF64(ea);} // 804EA060
  c->r[4]=R8(c->r[1]+0x00000021u); // 804EA064
  W32(c->r[1]+0x000000ACu,c->r[0]); // 804EA068
  {uint32_t ea=c->r[2]+0x00001940u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EA06C
  W32(c->r[3]+0x000000CCu,c->r[4]); // 804EA070
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804EA074
  c->r[0]=R8(c->r[1]+0x00000023u); // 804EA078
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 804EA07C
  {uint32_t ea=c->r[2]+0x00001958u; c->f[1]=RF64(ea);} // 804EA080
  W32(c->r[1]+0x000000B4u,c->r[0]); // 804EA084
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 804EA088
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 804EA08C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EA090
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 804EA094
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 804EA098
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 804EA09C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[3]);} // 804EA0A0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA0A4
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 804EA0A8
  c->r[4]=R8(c->r[1]+0x00000014u); // 804EA0AC
  c->lr=0x804EA0B4u; f_804EE3E8(c); // 804EA0B0
  c->r[4]=R8(c->r[1]+0x00000015u); // 804EA0B4
  c->r[3]=c->r[31]|c->r[31]; // 804EA0B8
  c->lr=0x804EA0C0u; f_804EE400(c); // 804EA0BC
  c->r[4]=R8(c->r[1]+0x00000016u); // 804EA0C0
  c->r[3]=c->r[31]|c->r[31]; // 804EA0C4
  c->lr=0x804EA0CCu; f_804EE418(c); // 804EA0C8
  c->r[4]=R8(c->r[1]+0x00000017u); // 804EA0CC
  c->r[3]=c->r[31]|c->r[31]; // 804EA0D0
  c->lr=0x804EA0D8u; f_804EE4B8(c); // 804EA0D4
  c->r[4]=R8(c->r[1]+0x00000018u); // 804EA0D8
  c->r[3]=c->r[31]|c->r[31]; // 804EA0DC
  c->lr=0x804EA0E4u; f_804EE4C0(c); // 804EA0E0
  c->r[3]=R8(c->r[1]+0x00000022u); // 804EA0E4
  c->r[0]=R32(c->r[30]+0x00000010u); // 804EA0E8
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 804EA0EC
  {uint32_t ea=c->r[2]+0x00001950u; c->f[4]=RF64(ea);} // 804EA0F0
  c->r[3]=c->r[3]^0x80000000u; // 804EA0F4
  c->r[0]=c->r[0]^0x80000000u; // 804EA0F8
  W32(c->r[1]+0x000000ACu,c->r[3]); // 804EA0FC
  {uint32_t ea=c->r[2]+0x00001944u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EA100
  W32(c->r[1]+0x000000B4u,c->r[0]); // 804EA104
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 804EA108
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 804EA10C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EA110
  {uint32_t ea=c->r[2]+0x00001948u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA114
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 804EA118
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 804EA11C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 804EA120
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 804EA124
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[3]);} // 804EA128
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 804EA12C
  c->r[0]=R8(c->r[1]+0x00000020u); // 804EA130
  W32(c->r[31]+0x000000DCu,c->r[0]); // 804EA134
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 804EA138
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804EA13C
  c->r[0]=cntlz(c->r[0]); // 804EA140
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 804EA144
  W8(c->r[31]+0x0000003Au,c->r[0]); // 804EA148
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 804EA14C
  cmps(c,0,(int32_t)c->r[0],2); // 804EA150
  if (!crb(c,2)) { goto L_804EA168; } // 804EA154
  c->r[3]=R32(c->r[1]+0x00000008u); // 804EA158
  c->r[0]=R32(c->r[1]+0x00000010u); // 804EA15C
  W32(c->r[31]+0x000000E8u,c->r[0]); // 804EA160
  W32(c->r[31]+0x000000ECu,c->r[3]); // 804EA164
L_804EA168:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 804EA168
  c->r[3]=c->r[31]|c->r[31]; // 804EA16C
  c->r[4]=c->r[1]+0x00000028u; // 804EA170
  c->r[6]=0u+0x00000000u; // 804EA174
  c->lr=0x804EA17Cu; f_804ED1D8(c); // 804EA178
  c->r[3]=c->r[31]|c->r[31]; // 804EA17C
L_804EA180:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 804EA180
  c->r[31]=R32(c->r[1]+0x000000BCu); // 804EA184
  c->r[30]=R32(c->r[1]+0x000000B8u); // 804EA188
  c->lr=c->r[0]; // 804EA18C
  c->r[1]=c->r[1]+0x000000C0u; // 804EA190
  return; // 804EA194
}

// __ct__Q44nw4r3snd6detail14BankFileReaderFPCv
void f_804EA198(Ctx* __restrict c) {
  trace_call(0x804EA198u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 804EA198
  c->r[6]=0u+0x00000000u; // 804EA19C
  W32(c->r[3]+0x00000000u,c->r[6]); // 804EA1A0
  c->r[0]=c->r[5]+0xADBE0000u; // 804EA1A4
  cmpu(c,0,c->r[0],0x00004E4Bu); // 804EA1A8
  W32(c->r[3]+0x00000004u,c->r[6]); // 804EA1AC
  W32(c->r[3]+0x00000008u,c->r[6]); // 804EA1B0
  if (crb(c,2)) { goto L_804EA1C0; } // 804EA1B4
  c->r[0]=0u+0x00000000u; // 804EA1B8
  goto L_804EA1EC; // 804EA1BC
L_804EA1C0:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 804EA1C0
  cmpu(c,0,c->r[6],0x00000100u); // 804EA1C4
  if (!crb(c,0)) { goto L_804EA1D4; } // 804EA1C8
  c->r[0]=0u+0x00000000u; // 804EA1CC
  goto L_804EA1EC; // 804EA1D0
L_804EA1D4:;
  c->r[0]=addc(c,~c->r[6],0x00000102u,1); // 804EA1D4
  c->r[5]=0u+0x00000102u; // 804EA1D8
  c->r[5]=c->r[5]|~c->r[6]; // 804EA1DC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 804EA1E0
  c->r[0]=c->r[5]-c->r[0]; // 804EA1E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804EA1E8
L_804EA1EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 804EA1EC
  if (crb(c,2)) return; // 804EA1F0
  c->r[0]=R32(c->r[4]+0x00000010u); // 804EA1F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EA1F8
  cmps(c,0,(int32_t)c->r[0],0); // 804EA1FC
  if (crb(c,2)) { goto L_804EA20C; } // 804EA200
  c->r[0]=c->r[0]+c->r[4]; // 804EA204
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EA208
L_804EA20C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 804EA20C
  c->r[0]=R32(c->r[4]+0x00000018u); // 804EA210
  cmps(c,0,(int32_t)c->r[0],0); // 804EA214
  if (crb(c,2)) return; // 804EA218
  c->r[0]=c->r[0]+c->r[4]; // 804EA21C
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EA220
  return; // 804EA224
}

// GetInstParam__Q44nw4r3snd6detail14BankFileReaderCFiii
void f_804EA228(Ctx* __restrict c) {
  trace_call(0x804EA228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EA228
  c->r[0]=c->lr; // 804EA22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EA230
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EA238
  c->r[31]=c->r[6]|c->r[6]; // 804EA23C
  cmps(c,0,(int32_t)c->r[0],0); // 804EA240
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EA244
  c->r[30]=c->r[3]|c->r[3]; // 804EA248
  if (!crb(c,2)) { goto L_804EA258; } // 804EA24C
  c->r[3]=0u+0x00000000u; // 804EA250
  goto L_804EA31C; // 804EA254
L_804EA258:;
  cmps(c,0,(int32_t)c->r[4],0); // 804EA258
  if (crb(c,0)) { goto L_804EA270; } // 804EA25C
  c->r[6]=R32(c->r[3]+0x00000004u); // 804EA260
  c->r[0]=R32(c->r[6]+0x00000008u); // 804EA264
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804EA268
  if (crb(c,0)) { goto L_804EA278; } // 804EA26C
L_804EA270:;
  c->r[3]=0u+0x00000000u; // 804EA270
  goto L_804EA31C; // 804EA274
L_804EA278:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 804EA278
  c->r[4]=c->r[6]+c->r[0]; // 804EA27C
  c->r[4]=c->r[4]+0x0000000Cu; // 804EA280
  c->r[0]=R8(c->r[4]+0x00000001u); // 804EA284
  cmpu(c,0,c->r[0],0x00000004u); // 804EA288
  if (!crb(c,2)) { goto L_804EA298; } // 804EA28C
  c->r[3]=0u+0x00000000u; // 804EA290
  goto L_804EA31C; // 804EA294
L_804EA298:;
  cmpu(c,0,c->r[0],0x00000001u); // 804EA298
  if (crb(c,2)) { goto L_804EA2B8; } // 804EA29C
  c->lr=0x804EA2A4u; f_804EA4D8(c); // 804EA2A0
  cmps(c,0,(int32_t)c->r[3],0); // 804EA2A4
  c->r[4]=c->r[3]|c->r[3]; // 804EA2A8
  if (!crb(c,2)) { goto L_804EA2B8; } // 804EA2AC
  c->r[3]=0u+0x00000000u; // 804EA2B0
  goto L_804EA31C; // 804EA2B4
L_804EA2B8:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 804EA2B8
  cmpu(c,0,c->r[0],0x00000004u); // 804EA2BC
  if (!crb(c,2)) { goto L_804EA2CC; } // 804EA2C0
  c->r[3]=0u+0x00000000u; // 804EA2C4
  goto L_804EA31C; // 804EA2C8
L_804EA2CC:;
  cmpu(c,0,c->r[0],0x00000001u); // 804EA2CC
  if (crb(c,2)) { goto L_804EA2F4; } // 804EA2D0
  c->r[3]=c->r[30]|c->r[30]; // 804EA2D4
  c->r[5]=c->r[31]|c->r[31]; // 804EA2D8
  c->lr=0x804EA2E0u; f_804EA4D8(c); // 804EA2DC
  cmps(c,0,(int32_t)c->r[3],0); // 804EA2E0
  c->r[4]=c->r[3]|c->r[3]; // 804EA2E4
  if (!crb(c,2)) { goto L_804EA2F4; } // 804EA2E8
  c->r[3]=0u+0x00000000u; // 804EA2EC
  goto L_804EA31C; // 804EA2F0
L_804EA2F4:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 804EA2F4
  cmpu(c,0,c->r[0],0x00000001u); // 804EA2F8
  if (crb(c,2)) { goto L_804EA308; } // 804EA2FC
  c->r[3]=0u+0x00000000u; // 804EA300
  goto L_804EA31C; // 804EA304
L_804EA308:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 804EA308
  c->r[3]=R8(c->r[4]+0x00000000u); // 804EA30C
  c->r[4]=R32(c->r[4]+0x00000004u); // 804EA310
  c->r[5]=c->r[5]+0x00000008u; // 804EA314
  c->lr=0x804EA31Cu; f_80505D78(c); // 804EA318
L_804EA31C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EA31C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EA320
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EA324
  c->lr=c->r[0]; // 804EA328
  c->r[1]=c->r[1]+0x00000010u; // 804EA32C
  return; // 804EA330
}

// ReadInstInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8InstInfoiii
void f_804EA334(Ctx* __restrict c) {
  trace_call(0x804EA334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EA334
  c->r[0]=c->lr; // 804EA338
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EA33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EA340
  c->r[31]=c->r[4]|c->r[4]; // 804EA344
  c->r[4]=c->r[5]|c->r[5]; // 804EA348
  c->r[5]=c->r[6]|c->r[6]; // 804EA34C
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EA350
  c->r[30]=c->r[3]|c->r[3]; // 804EA354
  c->r[6]=c->r[7]|c->r[7]; // 804EA358
  c->lr=0x804EA360u; f_804EA228(c); // 804EA35C
  cmps(c,0,(int32_t)c->r[3],0); // 804EA360
  if (!crb(c,2)) { goto L_804EA370; } // 804EA364
  c->r[3]=0u+0x00000000u; // 804EA368
  goto L_804EA4C0; // 804EA36C
L_804EA370:;
  c->r[0]=R8(c->r[3]+0x00000009u); // 804EA370
  cmps(c,0,(int32_t)c->r[0],0); // 804EA374
  if (!crb(c,2)) { goto L_804EA3A4; } // 804EA378
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA37C
  cmps(c,0,(int32_t)c->r[0],0); // 804EA380
  if (!crb(c,0)) { goto L_804EA390; } // 804EA384
  c->r[3]=0u+0x00000000u; // 804EA388
  goto L_804EA4C0; // 804EA38C
L_804EA390:;
  c->r[0]=0u+0x00000000u; // 804EA390
  W32(c->r[31]+0x00000000u,c->r[0]); // 804EA394
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA398
  W32(c->r[31]+0x00000004u,c->r[0]); // 804EA39C
  goto L_804EA40C; // 804EA3A0
L_804EA3A4:;
  cmpu(c,0,c->r[0],0x00000001u); // 804EA3A4
  if (!crb(c,2)) { goto L_804EA3D4; } // 804EA3A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA3AC
  cmps(c,0,(int32_t)c->r[0],0); // 804EA3B0
  if (!crb(c,2)) { goto L_804EA3C0; } // 804EA3B4
  c->r[3]=0u+0x00000000u; // 804EA3B8
  goto L_804EA4C0; // 804EA3BC
L_804EA3C0:;
  c->r[0]=0u+0x00000001u; // 804EA3C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 804EA3C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA3C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 804EA3CC
  goto L_804EA40C; // 804EA3D0
L_804EA3D4:;
  cmpu(c,0,c->r[0],0x00000002u); // 804EA3D4
  if (!crb(c,2)) { goto L_804EA404; } // 804EA3D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA3DC
  cmps(c,0,(int32_t)c->r[0],0); // 804EA3E0
  if (!crb(c,2)) { goto L_804EA3F0; } // 804EA3E4
  c->r[3]=0u+0x00000000u; // 804EA3E8
  goto L_804EA4C0; // 804EA3EC
L_804EA3F0:;
  c->r[0]=0u+0x00000002u; // 804EA3F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 804EA3F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA3F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 804EA3FC
  goto L_804EA40C; // 804EA400
L_804EA404:;
  c->r[3]=0u+0x00000000u; // 804EA404
  goto L_804EA4C0; // 804EA408
L_804EA40C:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 804EA40C
  c->r[4]=R32(c->r[30]+0x00000000u); // 804EA410
  W8(c->r[31]+0x00000008u,c->r[0]); // 804EA414
  c->r[0]=R8(c->r[3]+0x00000008u); // 804EA418
  W8(c->r[31]+0x00000009u,c->r[0]); // 804EA41C
  c->r[0]=R8(c->r[3]+0x00000005u); // 804EA420
  W8(c->r[31]+0x0000000Au,c->r[0]); // 804EA424
  c->r[0]=R8(c->r[3]+0x00000006u); // 804EA428
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 804EA42C
  c->r[0]=R8(c->r[3]+0x00000007u); // 804EA430
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 804EA434
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 804EA438
  W8(c->r[31]+0x00000015u,c->r[0]); // 804EA43C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 804EA440
  W8(c->r[31]+0x00000016u,c->r[0]); // 804EA444
  c->r[0]=R16(c->r[4]+0x00000006u); // 804EA448
  cmpu(c,0,c->r[0],0x00000101u); // 804EA44C
  if (crb(c,0)) { goto L_804EA468; } // 804EA450
  c->r[0]=R8(c->r[3]+0x0000000Du); // 804EA454
  W8(c->r[31]+0x00000017u,c->r[0]); // 804EA458
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA45C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 804EA460
  goto L_804EA478; // 804EA464
L_804EA468:;
  {uint32_t ea=c->r[2]+0x00001960u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA468
  c->r[0]=0u+0x0000007Fu; // 804EA46C
  W8(c->r[31]+0x00000017u,c->r[0]); // 804EA470
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 804EA474
L_804EA478:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 804EA478
  cmps(c,0,(int32_t)c->r[0],1); // 804EA47C
  if (crb(c,2)) { goto L_804EA4A0; } // 804EA480
  if (!crb(c,0)) { goto L_804EA4AC; } // 804EA484
  cmps(c,0,(int32_t)c->r[0],0); // 804EA488
  if (!crb(c,0)) { goto L_804EA494; } // 804EA48C
  goto L_804EA4AC; // 804EA490
L_804EA494:;
  c->r[0]=0u+0x00000000u; // 804EA494
  W32(c->r[31]+0x00000010u,c->r[0]); // 804EA498
  goto L_804EA4B4; // 804EA49C
L_804EA4A0:;
  c->r[0]=0u+0x00000001u; // 804EA4A0
  W32(c->r[31]+0x00000010u,c->r[0]); // 804EA4A4
  goto L_804EA4B4; // 804EA4A8
L_804EA4AC:;
  c->r[3]=0u+0x00000000u; // 804EA4AC
  goto L_804EA4C0; // 804EA4B0
L_804EA4B4:;
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 804EA4B4
  c->r[3]=0u+0x00000001u; // 804EA4B8
  W8(c->r[31]+0x00000014u,c->r[0]); // 804EA4BC
L_804EA4C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EA4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EA4C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EA4C8
  c->lr=c->r[0]; // 804EA4CC
  c->r[1]=c->r[1]+0x00000010u; // 804EA4D0
  return; // 804EA4D4
}

// GetReferenceToSubRegion__Q44nw4r3snd6detail14BankFileReaderCFPCQ54nw4r3snd6detail4Util128DataRef<v,Q54nw4r3snd6detail8BankFile9InstParam,Q54nw4r3snd6detail8BankFile10RangeTable,Q54nw4r3snd6detail8BankFile10IndexTable>i
void f_804EA4D8(Ctx* __restrict c) {
  trace_call(0x804EA4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EA4D8
  c->r[0]=c->lr; // 804EA4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EA4E0
  c->r[0]=R8(c->r[4]+0x00000001u); // 804EA4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EA4E8
  c->r[31]=c->r[5]|c->r[5]; // 804EA4EC
  cmps(c,0,(int32_t)c->r[0],2); // 804EA4F0
  c->r[5]=0u+0x00000000u; // 804EA4F4
  if (crb(c,2)) { goto L_804EA524; } // 804EA4F8
  if (!crb(c,0)) { goto L_804EA510; } // 804EA4FC
  cmps(c,0,(int32_t)c->r[0],0); // 804EA500
  if (crb(c,2)) { goto L_804EA5E8; } // 804EA504
  if (!crb(c,0)) { goto L_804EA51C; } // 804EA508
  goto L_804EA5E8; // 804EA50C
L_804EA510:;
  cmps(c,0,(int32_t)c->r[0],4); // 804EA510
  if (!crb(c,0)) { goto L_804EA5E8; } // 804EA514
  goto L_804EA594; // 804EA518
L_804EA51C:;
  c->r[5]=c->r[4]|c->r[4]; // 804EA51C
  goto L_804EA5E8; // 804EA520
L_804EA524:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 804EA524
  c->r[3]=R8(c->r[4]+0x00000000u); // 804EA528
  c->r[4]=R32(c->r[4]+0x00000004u); // 804EA52C
  c->r[5]=c->r[5]+0x00000008u; // 804EA530
  c->lr=0x804EA538u; f_80505D78(c); // 804EA534
  cmps(c,0,(int32_t)c->r[3],0); // 804EA538
  if (!crb(c,2)) { goto L_804EA548; } // 804EA53C
  c->r[3]=0u+0x00000000u; // 804EA540
  goto L_804EA5EC; // 804EA544
L_804EA548:;
  c->r[5]=0u+0x00000000u; // 804EA548
  goto L_804EA568; // 804EA54C
L_804EA550:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 804EA550
  c->r[5]=c->r[5]+0x00000001u; // 804EA554
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804EA558
  if (crb(c,0)) { goto L_804EA568; } // 804EA55C
  c->r[3]=0u+0x00000000u; // 804EA560
  goto L_804EA5EC; // 804EA564
L_804EA568:;
  c->r[4]=c->r[3]+c->r[5]; // 804EA568
  c->r[0]=R8(c->r[4]+0x00000001u); // 804EA56C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804EA570
  if (crb(c,1)) { IRQCHK(c); goto L_804EA550; } // 804EA574
  c->r[4]=R8(c->r[3]+0x00000000u); // 804EA578
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 804EA57C
  c->r[0]=c->r[3]+c->r[0]; // 804EA580
  c->r[3]=c->r[4]+0x00000004u; // 804EA584
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFCu; // 804EA588
  c->r[5]=c->r[3]+c->r[0]; // 804EA58C
  goto L_804EA5E8; // 804EA590
L_804EA594:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 804EA594
  c->r[3]=R8(c->r[4]+0x00000000u); // 804EA598
  c->r[4]=R32(c->r[4]+0x00000004u); // 804EA59C
  c->r[5]=c->r[5]+0x00000008u; // 804EA5A0
  c->lr=0x804EA5A8u; f_80505D78(c); // 804EA5A4
  cmps(c,0,(int32_t)c->r[3],0); // 804EA5A8
  if (!crb(c,2)) { goto L_804EA5B8; } // 804EA5AC
  c->r[3]=0u+0x00000000u; // 804EA5B0
  goto L_804EA5EC; // 804EA5B4
L_804EA5B8:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 804EA5B8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 804EA5BC
  if (crb(c,0)) { goto L_804EA5D0; } // 804EA5C0
  c->r[0]=R8(c->r[3]+0x00000001u); // 804EA5C4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 804EA5C8
  if (!crb(c,1)) { goto L_804EA5D8; } // 804EA5CC
L_804EA5D0:;
  c->r[3]=0u+0x00000000u; // 804EA5D0
  goto L_804EA5EC; // 804EA5D4
L_804EA5D8:;
  c->r[0]=c->r[31]-c->r[4]; // 804EA5D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804EA5DC
  c->r[3]=c->r[3]+c->r[0]; // 804EA5E0
  c->r[5]=c->r[3]+0x00000004u; // 804EA5E4
L_804EA5E8:;
  c->r[3]=c->r[5]|c->r[5]; // 804EA5E8
L_804EA5EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EA5EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EA5F0
  c->lr=c->r[0]; // 804EA5F4
  c->r[1]=c->r[1]+0x00000010u; // 804EA5F8
  return; // 804EA5FC
}

// ReadWaveInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8WaveInfoRCQ54nw4r3snd6detail8InstInfo16WaveDataLocationPCvPPCQ44nw4r3snd6detail8WaveInfo
void f_804EA600(Ctx* __restrict c) {
  trace_call(0x804EA600u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EA600
  c->r[0]=c->lr; // 804EA604
  cmps(c,0,(int32_t)c->r[7],0); // 804EA608
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EA60C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804EA610
  c->r[31]=c->r[4]|c->r[4]; // 804EA614
  W32(c->r[1]+0x00000028u,c->r[30]); // 804EA618
  c->r[30]=c->r[7]|c->r[7]; // 804EA61C
  W32(c->r[1]+0x00000024u,c->r[29]); // 804EA620
  c->r[29]=c->r[6]|c->r[6]; // 804EA624
  if (crb(c,2)) { goto L_804EA634; } // 804EA628
  c->r[0]=0u+0x00000000u; // 804EA62C
  W32(c->r[7]+0x00000000u,c->r[0]); // 804EA630
L_804EA634:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EA634
  cmps(c,0,(int32_t)c->r[0],0); // 804EA638
  if (!crb(c,2)) { goto L_804EA648; } // 804EA63C
  c->r[3]=0u+0x00000000u; // 804EA640
  goto L_804EA838; // 804EA644
L_804EA648:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 804EA648
  cmps(c,0,(int32_t)c->r[0],0); // 804EA64C
  if (!crb(c,2)) { goto L_804EA708; } // 804EA650
  c->r[3]=R32(c->r[3]+0x00000008u); // 804EA654
  c->r[30]=R32(c->r[5]+0x00000004u); // 804EA658
  cmps(c,0,(int32_t)c->r[3],0); // 804EA65C
  if (!crb(c,2)) { goto L_804EA6AC; } // 804EA660
  c->r[4]=c->r[29]|c->r[29]; // 804EA664
  c->r[3]=c->r[1]+0x00000010u; // 804EA668
  c->lr=0x804EA670u; f_80505D9C(c); // 804EA66C
  c->r[4]=c->r[30]|c->r[30]; // 804EA670
  c->r[3]=c->r[1]+0x00000010u; // 804EA674
  c->lr=0x804EA67Cu; f_80505E10(c); // 804EA678
  cmps(c,0,(int32_t)c->r[3],0); // 804EA67C
  if (!crb(c,2)) { goto L_804EA68C; } // 804EA680
  c->r[3]=0u+0x00000000u; // 804EA684
  goto L_804EA838; // 804EA688
L_804EA68C:;
  c->r[4]=c->r[3]|c->r[3]; // 804EA68C
  c->r[3]=c->r[1]+0x0000000Cu; // 804EA690
  c->lr=0x804EA698u; f_80505E98(c); // 804EA694
  c->r[4]=c->r[31]|c->r[31]; // 804EA698
  c->r[3]=c->r[1]+0x0000000Cu; // 804EA69C
  c->r[5]=0u+0x00000000u; // 804EA6A0
  c->lr=0x804EA6A8u; f_80505EC0(c); // 804EA6A4
  goto L_804EA838; // 804EA6A8
L_804EA6AC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 804EA6AC
  c->r[5]=c->r[3]+0x00000008u; // 804EA6B0
  cmpu(c,0,c->r[30],c->r[0]); // 804EA6B4
  if (crb(c,0)) { goto L_804EA6C4; } // 804EA6B8
  c->r[3]=0u+0x00000000u; // 804EA6BC
  goto L_804EA838; // 804EA6C0
L_804EA6C4:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 804EA6C4
  c->r[4]=c->r[3]+c->r[0]; // 804EA6C8
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 804EA6CC
  c->r[4]=R32(c->r[4]+0x00000010u); // 804EA6D0
  c->lr=0x804EA6D8u; f_80505D78(c); // 804EA6D4
  cmps(c,0,(int32_t)c->r[3],0); // 804EA6D8
  if (!crb(c,2)) { goto L_804EA6E8; } // 804EA6DC
  c->r[3]=0u+0x00000000u; // 804EA6E0
  goto L_804EA838; // 804EA6E4
L_804EA6E8:;
  c->r[4]=c->r[3]|c->r[3]; // 804EA6E8
  c->r[3]=c->r[1]+0x00000008u; // 804EA6EC
  c->lr=0x804EA6F4u; f_80505EB8(c); // 804EA6F0
  c->r[4]=c->r[31]|c->r[31]; // 804EA6F4
  c->r[5]=c->r[29]|c->r[29]; // 804EA6F8
  c->r[3]=c->r[1]+0x00000008u; // 804EA6FC
  c->lr=0x804EA704u; f_80505EC0(c); // 804EA700
  goto L_804EA838; // 804EA704
L_804EA708:;
  cmps(c,0,(int32_t)c->r[0],1); // 804EA708
  if (!crb(c,2)) { goto L_804EA790; } // 804EA70C
  c->r[0]=R32(c->r[5]+0x00000004u); // 804EA710
  cmps(c,0,(int32_t)c->r[0],0); // 804EA714
  if (!crb(c,2)) { goto L_804EA724; } // 804EA718
  c->r[3]=0u+0x00000000u; // 804EA71C
  goto L_804EA838; // 804EA720
L_804EA724:;
  cmps(c,0,(int32_t)c->r[7],0); // 804EA724
  if (crb(c,2)) { goto L_804EA730; } // 804EA728
  W32(c->r[7]+0x00000000u,c->r[0]); // 804EA72C
L_804EA730:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 804EA730
  c->r[0]=0u+0x0000000Du; // 804EA734
  c->r[6]=c->r[4]+0x00000014u; // 804EA738
  c->r[3]=R32(c->r[7]+0x00000000u); // 804EA73C
  c->r[5]=c->r[7]+0x00000014u; // 804EA740
  W32(c->r[4]+0x00000000u,c->r[3]); // 804EA744
  c->r[3]=R8(c->r[7]+0x00000004u); // 804EA748
  W8(c->r[4]+0x00000004u,c->r[3]); // 804EA74C
  c->r[3]=R32(c->r[7]+0x00000008u); // 804EA750
  W32(c->r[4]+0x00000008u,c->r[3]); // 804EA754
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 804EA758
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 804EA75C
  c->r[3]=R32(c->r[7]+0x00000010u); // 804EA760
  W32(c->r[4]+0x00000010u,c->r[3]); // 804EA764
  c->r[3]=R32(c->r[7]+0x00000014u); // 804EA768
  W32(c->r[4]+0x00000014u,c->r[3]); // 804EA76C
  c->ctr=c->r[0]; // 804EA770
L_804EA774:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 804EA774
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 804EA778
  W32(c->r[6]+0x00000004u,c->r[3]); // 804EA77C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 804EA780
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EA774; } // 804EA784
  c->r[3]=0u+0x00000001u; // 804EA788
  goto L_804EA838; // 804EA78C
L_804EA790:;
  cmps(c,0,(int32_t)c->r[0],2); // 804EA790
  if (!crb(c,2)) { goto L_804EA834; } // 804EA794
  c->r[3]=R32(c->r[5]+0x00000004u); // 804EA798
  cmps(c,0,(int32_t)c->r[3],0); // 804EA79C
  if (!crb(c,2)) { goto L_804EA7AC; } // 804EA7A0
  c->r[3]=0u+0x00000000u; // 804EA7A4
  goto L_804EA838; // 804EA7A8
L_804EA7AC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EA7AC
  c->r[12]=R32(c->r[12]+0x00000008u); // 804EA7B0
  c->ctr=c->r[12]; // 804EA7B4
  if (true) { c->lr=0x804EA7BCu; dispatch(c,c->ctr); } // 804EA7B8
  cmps(c,0,(int32_t)c->r[3],0); // 804EA7BC
  if (!crb(c,2)) { goto L_804EA7CC; } // 804EA7C0
  c->r[3]=0u+0x00000000u; // 804EA7C4
  goto L_804EA838; // 804EA7C8
L_804EA7CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 804EA7CC
  if (crb(c,2)) { goto L_804EA7D8; } // 804EA7D0
  W32(c->r[30]+0x00000000u,c->r[3]); // 804EA7D4
L_804EA7D8:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 804EA7D8
  c->r[4]=c->r[3]+0x00000014u; // 804EA7DC
  c->r[0]=0u+0x0000000Du; // 804EA7E0
  c->r[5]=c->r[31]+0x00000014u; // 804EA7E4
  W32(c->r[31]+0x00000000u,c->r[6]); // 804EA7E8
  c->r[6]=R8(c->r[3]+0x00000004u); // 804EA7EC
  W8(c->r[31]+0x00000004u,c->r[6]); // 804EA7F0
  c->r[6]=R32(c->r[3]+0x00000008u); // 804EA7F4
  W32(c->r[31]+0x00000008u,c->r[6]); // 804EA7F8
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 804EA7FC
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 804EA800
  c->r[6]=R32(c->r[3]+0x00000010u); // 804EA804
  W32(c->r[31]+0x00000010u,c->r[6]); // 804EA808
  c->r[3]=R32(c->r[3]+0x00000014u); // 804EA80C
  W32(c->r[31]+0x00000014u,c->r[3]); // 804EA810
  c->ctr=c->r[0]; // 804EA814
L_804EA818:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 804EA818
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 804EA81C
  W32(c->r[5]+0x00000004u,c->r[3]); // 804EA820
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 804EA824
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EA818; } // 804EA828
  c->r[3]=0u+0x00000001u; // 804EA82C
  goto L_804EA838; // 804EA830
L_804EA834:;
  c->r[3]=0u+0x00000000u; // 804EA834
L_804EA838:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EA838
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804EA83C
  c->r[30]=R32(c->r[1]+0x00000028u); // 804EA840
  c->r[29]=R32(c->r[1]+0x00000024u); // 804EA844
  c->lr=c->r[0]; // 804EA848
  c->r[1]=c->r[1]+0x00000030u; // 804EA84C
  return; // 804EA850
}

// fn_804EA854
void f_804EA854(Ctx* __restrict c) {
  trace_call(0x804EA854u);
  {uint32_t ea=c->r[2]+0x0000196Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA854
  c->r[4]=0u+0x00000000u; // 804EA858
  {uint32_t ea=c->r[2]+0x00001968u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EA85C
  c->r[0]=0u+0x00000001u; // 804EA860
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 804EA864
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 804EA868
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 804EA86C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EA870
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 804EA874
  W8(c->r[3]+0x00000018u,c->r[4]); // 804EA878
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 804EA87C
  W8(c->r[3]+0x00000019u,c->r[4]); // 804EA880
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 804EA884
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 804EA888
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 804EA88C
  W32(c->r[3]+0x00000028u,c->r[4]); // 804EA890
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 804EA894
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 804EA898
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 804EA89C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 804EA8A0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 804EA8A4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 804EA8A8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 804EA8AC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 804EA8B0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 804EA8B4
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 804EA8B8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 804EA8BC
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 804EA8C0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 804EA8C4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 804EA8C8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 804EA8CC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 804EA8D0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 804EA8D4
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 804EA8D8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804EA8DC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 804EA8E0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 804EA8E4
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 804EA8E8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 804EA8EC
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 804EA8F0
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 804EA8F4
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 804EA8F8
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 804EA8FC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 804EA900
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 804EA904
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 804EA908
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 804EA90C
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 804EA910
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 804EA914
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 804EA918
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 804EA91C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 804EA920
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 804EA924
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 804EA928
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 804EA92C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 804EA930
  return; // 804EA934
}

// fn_804EA938
void f_804EA938(Ctx* __restrict c) {
  trace_call(0x804EA938u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EA938
  c->r[0]=c->lr; // 804EA93C
  c->r[4]=0u+0x80720000u; // 804EA940
  {uint32_t ea=c->r[2]+0x0000196Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EA944
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EA948
  c->r[6]=c->r[3]+0x00000088u; // 804EA94C
  c->r[5]=c->r[3]+0x000000D0u; // 804EA950
  {uint32_t ea=c->r[2]+0x00001968u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EA954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EA958
  c->r[4]=c->r[4]+0xFFFFB470u; // 804EA95C
  cmpu(c,0,c->r[6],c->r[5]); // 804EA960
  c->r[31]=c->r[3]|c->r[3]; // 804EA964
  W32(c->r[3]+0x00000000u,c->r[4]); // 804EA968
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 804EA96C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 804EA970
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 804EA974
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 804EA978
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 804EA97C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 804EA980
  if (!crb(c,0)) { goto L_804EAB5C; } // 804EA984
  c->r[8]=c->r[3]+0x00000088u; // 804EA988
  c->r[4]=0u+0x2AAB0000u; // 804EA98C
  c->r[9]=c->r[5]-c->r[8]; // 804EA990
  c->r[7]=c->r[3]+0x00000010u; // 804EA994
  c->r[10]=c->r[9]+0x00000017u; // 804EA998
  c->r[0]=c->r[4]+0xFFFFAAABu; // 804EA99C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[10])>>32); // 804EA9A0
  c->r[0]=sraw(c,c->r[0],2); // 804EA9A4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 804EA9A8
  c->r[11]=c->r[0]+c->r[4]; // 804EA9AC
  c->r[12]=c->r[11]+0x00000001u; // 804EA9B0
  cmps(c,0,(int32_t)c->r[12],8); // 804EA9B4
  if (!crb(c,1)) { goto L_804EAB14; } // 804EA9B8
  cmpu(c,0,c->r[8],c->r[5]); // 804EA9BC
  c->r[4]=0u+0x00000000u; // 804EA9C0
  c->r[5]=0u+0x00000000u; // 804EA9C4
  if (crb(c,1)) { goto L_804EA9F0; } // 804EA9C8
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 804EA9CC
  c->r[8]=0u+0x00000001u; // 804EA9D0
  if (!crb(c,2)) { goto L_804EA9E4; } // 804EA9D4
  c->r[0]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[0]); // 804EA9D8
  if (crb(c,2)) { goto L_804EA9E4; } // 804EA9DC
  c->r[8]=0u+0x00000000u; // 804EA9E0
L_804EA9E4:;
  cmps(c,0,(int32_t)c->r[8],0); // 804EA9E4
  if (crb(c,2)) { goto L_804EA9F0; } // 804EA9E8
  c->r[5]=0u+0x00000001u; // 804EA9EC
L_804EA9F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 804EA9F0
  if (crb(c,2)) { goto L_804EAA20; } // 804EA9F4
  c->r[8]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[8]); // 804EA9F8
  c->r[5]=0u+0x00000001u; // 804EA9FC
  if (!crb(c,2)) { goto L_804EAA14; } // 804EAA00
  c->r[0]=rotl(c->r[12],0)&0x80000000u; // 804EAA04
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 804EAA08
  if (crb(c,2)) { goto L_804EAA14; } // 804EAA0C
  c->r[5]=0u+0x00000000u; // 804EAA10
L_804EAA14:;
  cmps(c,0,(int32_t)c->r[5],0); // 804EAA14
  if (crb(c,2)) { goto L_804EAA20; } // 804EAA18
  c->r[4]=0u+0x00000001u; // 804EAA1C
L_804EAA20:;
  cmps(c,0,(int32_t)c->r[4],0); // 804EAA20
  if (crb(c,2)) { goto L_804EAB14; } // 804EAA24
  c->r[4]=c->r[7]+0x000000BFu; // 804EAA28
  c->r[0]=0u+0x000000C0u; // 804EAA2C
  c->r[4]=c->r[4]-c->r[6]; // 804EAA30
  {uint32_t ea=c->r[2]+0x00001968u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAA34
  c->r[4]=divwu(c->r[4],c->r[0]); // 804EAA38
  {uint32_t ea=c->r[2]+0x0000196Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAA3C
  c->ctr=c->r[4]; // 804EAA40
  cmpu(c,0,c->r[6],c->r[7]); // 804EAA44
  if (!crb(c,0)) { goto L_804EAB14; } // 804EAA48
L_804EAA4C:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 804EAA4C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 804EAA50
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 804EAA54
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EAA58
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 804EAA5C
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 804EAA60
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[1]);} // 804EAA64
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[1]);} // 804EAA68
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 804EAA6C
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 804EAA70
  {uint32_t ea=c->r[6]+0x00000028u; WF32(ea,c->f[0]);} // 804EAA74
  {uint32_t ea=c->r[6]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EAA78
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[1]);} // 804EAA7C
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[1]);} // 804EAA80
  {uint32_t ea=c->r[6]+0x00000038u; WF32(ea,c->f[0]);} // 804EAA84
  {uint32_t ea=c->r[6]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EAA88
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 804EAA8C
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 804EAA90
  {uint32_t ea=c->r[6]+0x00000048u; WF32(ea,c->f[1]);} // 804EAA94
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[1]);} // 804EAA98
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 804EAA9C
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 804EAAA0
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 804EAAA4
  {uint32_t ea=c->r[6]+0x0000005Cu; WF32(ea,c->f[0]);} // 804EAAA8
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[1]);} // 804EAAAC
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[1]);} // 804EAAB0
  {uint32_t ea=c->r[6]+0x00000068u; WF32(ea,c->f[0]);} // 804EAAB4
  {uint32_t ea=c->r[6]+0x0000006Cu; WF32(ea,c->f[0]);} // 804EAAB8
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 804EAABC
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 804EAAC0
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[1]);} // 804EAAC4
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[1]);} // 804EAAC8
  {uint32_t ea=c->r[6]+0x00000080u; WF32(ea,c->f[0]);} // 804EAACC
  {uint32_t ea=c->r[6]+0x00000084u; WF32(ea,c->f[0]);} // 804EAAD0
  {uint32_t ea=c->r[6]+0x00000088u; WF32(ea,c->f[0]);} // 804EAAD4
  {uint32_t ea=c->r[6]+0x0000008Cu; WF32(ea,c->f[0]);} // 804EAAD8
  {uint32_t ea=c->r[6]+0x00000090u; WF32(ea,c->f[1]);} // 804EAADC
  {uint32_t ea=c->r[6]+0x00000094u; WF32(ea,c->f[1]);} // 804EAAE0
  {uint32_t ea=c->r[6]+0x00000098u; WF32(ea,c->f[0]);} // 804EAAE4
  {uint32_t ea=c->r[6]+0x0000009Cu; WF32(ea,c->f[0]);} // 804EAAE8
  {uint32_t ea=c->r[6]+0x000000A0u; WF32(ea,c->f[0]);} // 804EAAEC
  {uint32_t ea=c->r[6]+0x000000A4u; WF32(ea,c->f[0]);} // 804EAAF0
  {uint32_t ea=c->r[6]+0x000000A8u; WF32(ea,c->f[1]);} // 804EAAF4
  {uint32_t ea=c->r[6]+0x000000ACu; WF32(ea,c->f[1]);} // 804EAAF8
  {uint32_t ea=c->r[6]+0x000000B0u; WF32(ea,c->f[0]);} // 804EAAFC
  {uint32_t ea=c->r[6]+0x000000B4u; WF32(ea,c->f[0]);} // 804EAB00
  {uint32_t ea=c->r[6]+0x000000B8u; WF32(ea,c->f[0]);} // 804EAB04
  {uint32_t ea=c->r[6]+0x000000BCu; WF32(ea,c->f[0]);} // 804EAB08
  c->r[6]=c->r[6]+0x000000C0u; // 804EAB0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EAA4C; } // 804EAB10
L_804EAB14:;
  c->r[5]=c->r[3]+0x000000D0u; // 804EAB14
  c->r[0]=0u+0x00000018u; // 804EAB18
  c->r[4]=c->r[5]+0x00000017u; // 804EAB1C
  {uint32_t ea=c->r[2]+0x00001968u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAB20
  c->r[4]=c->r[4]-c->r[6]; // 804EAB24
  {uint32_t ea=c->r[2]+0x0000196Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAB28
  c->r[4]=divwu(c->r[4],c->r[0]); // 804EAB2C
  c->ctr=c->r[4]; // 804EAB30
  cmpu(c,0,c->r[6],c->r[5]); // 804EAB34
  if (!crb(c,0)) { goto L_804EAB5C; } // 804EAB38
L_804EAB3C:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 804EAB3C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 804EAB40
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 804EAB44
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EAB48
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 804EAB4C
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 804EAB50
  c->r[6]=c->r[6]+0x00000018u; // 804EAB54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EAB3C; } // 804EAB58
L_804EAB5C:;
  c->r[3]=c->r[3]+0x00000004u; // 804EAB5C
  c->lr=0x804EAB64u; f_804EA854(c); // 804EAB60
  c->r[0]=0u+0xFFFFFFFFu; // 804EAB64
  c->r[3]=c->r[31]+0x00000004u; // 804EAB68
  W32(c->r[31]+0x000000D0u,c->r[0]); // 804EAB6C
  c->lr=0x804EAB74u; f_804EA854(c); // 804EAB70
  c->r[3]=c->r[31]|c->r[31]; // 804EAB74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EAB78
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EAB7C
  c->lr=c->r[0]; // 804EAB80
  c->r[1]=c->r[1]+0x00000010u; // 804EAB84
  return; // 804EAB88
}

// InitParam__Q44nw4r3snd6detail11BasicPlayerFv
void f_804EAB8C(Ctx* __restrict c) {
  trace_call(0x804EAB8Cu);
  c->r[3]=c->r[3]+0x00000004u; // 804EAB8C
  f_804EA854(c); return; // 804EAB90
}

// fn_804EAB94
void f_804EAB94(Ctx* __restrict c) {
  trace_call(0x804EAB94u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EAB94
  c->r[3]=c->r[3]+c->r[0]; // 804EAB98
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 804EAB9C
  return; // 804EABA0
}

// fn_804EABA4
void f_804EABA4(Ctx* __restrict c) {
  trace_call(0x804EABA4u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EABA4
  c->r[3]=c->r[3]+c->r[0]; // 804EABA8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EABAC
  return; // 804EABB0
}

// fn_804EABB4
void f_804EABB4(Ctx* __restrict c) {
  trace_call(0x804EABB4u);
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 804EABB4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 804EABB8
  return; // 804EABBC
}

// fn_804EABC0
void f_804EABC0(Ctx* __restrict c) {
  trace_call(0x804EABC0u);
  W8(c->r[3]+0x0000001Du,c->r[4]); // 804EABC0
  return; // 804EABC4
}

// fn_804EABC8
void f_804EABC8(Ctx* __restrict c) {
  trace_call(0x804EABC8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EABC8
  c->r[3]=c->r[3]+c->r[0]; // 804EABCC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 804EABD0
  return; // 804EABD4
}

// fn_804EABD8
void f_804EABD8(Ctx* __restrict c) {
  trace_call(0x804EABD8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EABD8
  c->r[3]=c->r[3]+c->r[0]; // 804EABDC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EABE0
  return; // 804EABE4
}

// fn_804EABE8
void f_804EABE8(Ctx* __restrict c) {
  trace_call(0x804EABE8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EABE8
  c->r[3]=c->r[3]+c->r[0]; // 804EABEC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EABF0
  return; // 804EABF4
}

// fn_804EABF8
void f_804EABF8(Ctx* __restrict c) {
  trace_call(0x804EABF8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EABF8
  c->r[3]=c->r[3]+c->r[0]; // 804EABFC
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAC00
  return; // 804EAC04
}

// fn_804EAC08
void f_804EAC08(Ctx* __restrict c) {
  trace_call(0x804EAC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EAC08
  c->r[0]=c->lr; // 804EAC0C
  cmps(c,0,(int32_t)c->r[3],0); // 804EAC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EAC14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EAC18
  c->r[31]=c->r[3]|c->r[3]; // 804EAC1C
  if (crb(c,2)) { goto L_804EAC30; } // 804EAC20
  cmps(c,0,(int32_t)c->r[4],0); // 804EAC24
  if (!crb(c,1)) { goto L_804EAC30; } // 804EAC28
  c->lr=0x804EAC30u; f_803A9400(c); // 804EAC2C
L_804EAC30:;
  c->r[3]=c->r[31]|c->r[31]; // 804EAC30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EAC34
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EAC38
  c->lr=c->r[0]; // 804EAC3C
  c->r[1]=c->r[1]+0x00000010u; // 804EAC40
  return; // 804EAC44
}

// fn_804EAC48
void f_804EAC48(Ctx* __restrict c) {
  trace_call(0x804EAC48u);
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAC48
  c->r[8]=0u+0x80720000u; // 804EAC4C
  c->r[7]=0u+0x00000000u; // 804EAC50
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAC54
  c->r[8]=c->r[8]+0xFFFFB498u; // 804EAC58
  c->r[6]=0u+0xFFFFFFFFu; // 804EAC5C
  c->r[0]=0u+0x00000001u; // 804EAC60
  W32(c->r[3]+0x00000000u,c->r[8]); // 804EAC64
  W32(c->r[3]+0x00000004u,c->r[7]); // 804EAC68
  W32(c->r[3]+0x00000008u,c->r[7]); // 804EAC6C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804EAC70
  W32(c->r[3]+0x00000010u,c->r[7]); // 804EAC74
  W32(c->r[3]+0x00000014u,c->r[7]); // 804EAC78
  W32(c->r[3]+0x00000018u,c->r[7]); // 804EAC7C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 804EAC80
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 804EAC84
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 804EAC88
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EAC8C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804EAC90
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 804EAC94
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 804EAC98
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 804EAC9C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 804EACA0
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 804EACA4
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 804EACA8
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 804EACAC
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 804EACB0
  W32(c->r[3]+0x00000068u,c->r[7]); // 804EACB4
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 804EACB8
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 804EACBC
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804EACC0
  W32(c->r[3]+0x00000078u,c->r[7]); // 804EACC4
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 804EACC8
  W32(c->r[3]+0x00000098u,c->r[6]); // 804EACCC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 804EACD0
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 804EACD4
  W32(c->r[3]+0x000000A4u,c->r[7]); // 804EACD8
  W32(c->r[3]+0x000000A8u,c->r[7]); // 804EACDC
  W32(c->r[3]+0x000000ECu,c->r[7]); // 804EACE0
  W32(c->r[3]+0x000000F0u,c->r[7]); // 804EACE4
  W32(c->r[3]+0x000000F4u,c->r[7]); // 804EACE8
  W32(c->r[3]+0x000000F8u,c->r[7]); // 804EACEC
  W32(c->r[3]+0x000000FCu,c->r[7]); // 804EACF0
  W32(c->r[3]+0x00000100u,c->r[7]); // 804EACF4
  W32(c->r[3]+0x00000104u,c->r[7]); // 804EACF8
  W32(c->r[3]+0x00000108u,c->r[7]); // 804EACFC
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 804EAD00
  W32(c->r[3]+0x00000020u,c->r[7]); // 804EAD04
  W32(c->r[3]+0x00000024u,c->r[7]); // 804EAD08
  W32(c->r[3]+0x00000028u,c->r[7]); // 804EAD0C
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 804EAD10
  W8(c->r[3]+0x00000095u,c->r[0]); // 804EAD14
  W8(c->r[3]+0x00000094u,c->r[4]); // 804EAD18
  W32(c->r[3]+0x00000050u,c->r[5]); // 804EAD1C
  return; // 804EAD20
}

// InitParam__Q44nw4r3snd6detail10BasicSoundFv
void f_804EAD24(Ctx* __restrict c) {
  trace_call(0x804EAD24u);
  c->r[0]=0u+0x00000000u; // 804EAD24
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EAD28
  {uint32_t ea=c->r[2]+0x00001974u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EAD2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 804EAD30
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAD34
  W32(c->r[3]+0x00000084u,c->r[0]); // 804EAD38
  W8(c->r[3]+0x00000088u,c->r[0]); // 804EAD3C
  W8(c->r[3]+0x00000080u,c->r[0]); // 804EAD40
  W8(c->r[3]+0x00000081u,c->r[0]); // 804EAD44
  W8(c->r[3]+0x00000082u,c->r[0]); // 804EAD48
  W8(c->r[3]+0x00000083u,c->r[0]); // 804EAD4C
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 804EAD50
  W32(c->r[3]+0x00000090u,c->r[0]); // 804EAD54
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[4]);} // 804EAD58
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 804EAD5C
  W32(c->r[3]+0x00000068u,c->r[0]); // 804EAD60
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 804EAD64
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 804EAD68
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804EAD6C
  W32(c->r[3]+0x00000078u,c->r[0]); // 804EAD70
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 804EAD74
  if (crb(c,0)) { goto L_804EAD80; } // 804EAD78
  goto L_804EADBC; // 804EAD7C
L_804EAD80:;
  c->r[4]=c->r[0]^0x80000000u; // 804EAD80
  c->r[0]=0u+0x43300000u; // 804EAD84
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804EAD88
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 804EAD8C
  {uint32_t ea=c->r[2]+0x00001978u; c->f[3]=RF64(ea);} // 804EAD90
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EAD94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EAD98
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EAD9C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804EADA0
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EADA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EADA8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804EADAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804EADB0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EADB4
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 804EADB8
L_804EADBC:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 804EADBC
  c->r[0]=0u+0x00000000u; // 804EADC0
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EADC4
  c->r[4]=0u+0x00000001u; // 804EADC8
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EADCC
  cmps(c,0,(int32_t)c->r[5],0); // 804EADD0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[4]);} // 804EADD4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 804EADD8
  W32(c->r[3]+0x00000068u,c->r[4]); // 804EADDC
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 804EADE0
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 804EADE4
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 804EADE8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 804EADEC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 804EADF0
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 804EADF4
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 804EADF8
  W32(c->r[3]+0x000000A4u,c->r[0]); // 804EADFC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804EAE00
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 804EAE04
  W8(c->r[3]+0x00000096u,c->r[0]); // 804EAE08
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 804EAE0C
  if (crb(c,2)) { goto L_804EAE18; } // 804EAE10
  c->r[4]=R32(c->r[5]+0x00000034u); // 804EAE14
L_804EAE18:;
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAE18
  c->r[0]=0u+0x00000000u; // 804EAE1C
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAE20
  W32(c->r[3]+0x000000C4u,c->r[4]); // 804EAE24
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 804EAE28
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 804EAE2C
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 804EAE30
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 804EAE34
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 804EAE38
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 804EAE3C
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 804EAE40
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 804EAE44
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 804EAE48
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 804EAE4C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 804EAE50
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 804EAE54
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EAE58
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 804EAE5C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 804EAE60
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 804EAE64
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 804EAE68
  W32(c->r[3]+0x00000050u,c->r[0]); // 804EAE6C
  c->r[1]=c->r[1]+0x00000020u; // 804EAE70
  return; // 804EAE74
}

// StartPrepared__Q44nw4r3snd6detail10BasicSoundFv
void f_804EAE78(Ctx* __restrict c) {
  trace_call(0x804EAE78u);
  c->r[0]=R8(c->r[3]+0x00000081u); // 804EAE78
  cmps(c,0,(int32_t)c->r[0],0); // 804EAE7C
  if (!crb(c,2)) return; // 804EAE80
  c->r[0]=0u+0x00000001u; // 804EAE84
  W8(c->r[3]+0x00000080u,c->r[0]); // 804EAE88
  return; // 804EAE8C
}

// fn_804EAE90
void f_804EAE90(Ctx* __restrict c) {
  trace_call(0x804EAE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EAE90
  c->r[0]=c->lr; // 804EAE94
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EAE98
  c->r[0]=0u+0x43300000u; // 804EAE9C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804EAEA0
  W32(c->r[1]+0x00000028u,c->r[30]); // 804EAEA4
  c->r[30]=c->r[4]|c->r[4]; // 804EAEA8
  W32(c->r[1]+0x00000024u,c->r[29]); // 804EAEAC
  c->r[29]=c->r[3]|c->r[3]; // 804EAEB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EAEB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EAEB8
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EAEBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EAEC0
  c->ctr=c->r[12]; // 804EAEC4
  if (true) { c->lr=0x804EAECCu; dispatch(c,c->ctr); } // 804EAEC8
  cmps(c,0,(int32_t)c->r[30],0); // 804EAECC
  c->r[31]=c->r[3]|c->r[3]; // 804EAED0
  if (crb(c,2)) { goto L_804EAF28; } // 804EAED4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EAED8
  c->r[12]=R32(c->r[12]+0x00000018u); // 804EAEDC
  c->ctr=c->r[12]; // 804EAEE0
  if (true) { c->lr=0x804EAEE8u; dispatch(c,c->ctr); } // 804EAEE4
  cmps(c,0,(int32_t)c->r[3],0); // 804EAEE8
  if (crb(c,2)) { goto L_804EAF28; } // 804EAEEC
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EAEF0
  c->r[3]=c->r[31]|c->r[31]; // 804EAEF4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804EAEF8
  c->ctr=c->r[12]; // 804EAEFC
  if (true) { c->lr=0x804EAF04u; dispatch(c,c->ctr); } // 804EAF00
  cmps(c,0,(int32_t)c->r[3],0); // 804EAF04
  if (crb(c,2)) { goto L_804EAF28; } // 804EAF08
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EAF0C
  c->r[3]=c->r[31]|c->r[31]; // 804EAF10
  c->r[12]=R32(c->r[12]+0x00000020u); // 804EAF14
  c->ctr=c->r[12]; // 804EAF18
  if (true) { c->lr=0x804EAF20u; dispatch(c,c->ctr); } // 804EAF1C
  cmps(c,0,(int32_t)c->r[3],0); // 804EAF20
  if (crb(c,2)) { goto L_804EAF40; } // 804EAF24
L_804EAF28:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EAF28
  c->r[3]=c->r[29]|c->r[29]; // 804EAF2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EAF30
  c->ctr=c->r[12]; // 804EAF34
  if (true) { c->lr=0x804EAF3Cu; dispatch(c,c->ctr); } // 804EAF38
  goto L_804EB05C; // 804EAF3C
L_804EAF40:;
  c->r[5]=R32(c->r[29]+0x00000068u); // 804EAF40
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 804EAF44
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804EAF48
  if (crb(c,0)) { goto L_804EAF58; } // 804EAF4C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAF50
  goto L_804EAF94; // 804EAF54
L_804EAF58:;
  c->r[3]=c->r[4]^0x80000000u; // 804EAF58
  c->r[0]=c->r[5]^0x80000000u; // 804EAF5C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EAF60
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EAF64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EAF68
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAF6C
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EAF70
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EAF74
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EAF78
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EAF7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EAF80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EAF84
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EAF88
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EAF8C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EAF90
L_804EAF94:;
  c->r[0]=c->r[30]^0x80000000u; // 804EAF94
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EAF98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EAF9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804EAFA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EAFA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EAFA8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EAFAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EAFB0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804EAFB4
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 804EAFB8
  if (crb(c,0)) { goto L_804EAFC8; } // 804EAFBC
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EAFC0
  goto L_804EB000; // 804EAFC4
L_804EAFC8:;
  c->r[3]=c->r[4]^0x80000000u; // 804EAFC8
  c->r[0]=c->r[5]^0x80000000u; // 804EAFCC
  W32(c->r[1]+0x00000014u,c->r[3]); // 804EAFD0
  {uint32_t ea=c->r[29]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EAFD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804EAFD8
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EAFDC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804EAFE0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EAFE4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804EAFE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EAFEC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EAFF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EAFF4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EAFF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EAFFC
L_804EB000:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 804EB000
  c->r[0]=0u+0x00000000u; // 804EB004
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB008
  cmps(c,0,(int32_t)c->r[3],0); // 804EB00C
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 804EB010
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 804EB014
  W32(c->r[29]+0x00000068u,c->r[6]); // 804EB018
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 804EB01C
  W8(c->r[29]+0x00000094u,c->r[0]); // 804EB020
  if (crb(c,2)) { goto L_804EB030; } // 804EB024
  c->r[4]=c->r[29]|c->r[29]; // 804EB028
  c->lr=0x804EB030u; f_804FCAE8(c); // 804EB02C
L_804EB030:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB030
  c->r[3]=c->r[29]|c->r[29]; // 804EB034
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804EB038
  c->ctr=c->r[12]; // 804EB03C
  if (true) { c->lr=0x804EB044u; dispatch(c,c->ctr); } // 804EB040
  c->r[3]=0u+0x00000000u; // 804EB044
  c->r[0]=0u+0x00000001u; // 804EB048
  W8(c->r[29]+0x00000082u,c->r[3]); // 804EB04C
  W32(c->r[29]+0x00000084u,c->r[3]); // 804EB050
  W8(c->r[29]+0x00000088u,c->r[3]); // 804EB054
  W8(c->r[29]+0x00000083u,c->r[0]); // 804EB058
L_804EB05C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804EB05C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804EB060
  c->r[30]=R32(c->r[1]+0x00000028u); // 804EB064
  c->r[29]=R32(c->r[1]+0x00000024u); // 804EB068
  c->lr=c->r[0]; // 804EB06C
  c->r[1]=c->r[1]+0x00000030u; // 804EB070
  return; // 804EB074
}

// fn_804EB078
void f_804EB078(Ctx* __restrict c) {
  trace_call(0x804EB078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EB078
  c->r[0]=0u+0x43300000u; // 804EB07C
  cmps(c,0,(int32_t)c->r[4],0); // 804EB080
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EB084
  W32(c->r[1]+0x00000010u,c->r[0]); // 804EB088
  if (crb(c,2)) { goto L_804EB1B4; } // 804EB08C
  c->r[0]=R32(c->r[3]+0x00000084u); // 804EB090
  cmps(c,0,(int32_t)c->r[0],2); // 804EB094
  if (crb(c,2)) { goto L_804EB2D4; } // 804EB098
  if (!crb(c,0)) { goto L_804EB0AC; } // 804EB09C
  cmps(c,0,(int32_t)c->r[0],0); // 804EB0A0
  if (!crb(c,0)) { goto L_804EB0B4; } // 804EB0A4
  goto L_804EB2D4; // 804EB0A8
L_804EB0AC:;
  cmps(c,0,(int32_t)c->r[0],4); // 804EB0AC
  if (!crb(c,0)) { goto L_804EB2D4; } // 804EB0B0
L_804EB0B4:;
  c->r[7]=R32(c->r[3]+0x00000078u); // 804EB0B4
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 804EB0B8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB0BC
  if (crb(c,0)) { goto L_804EB0CC; } // 804EB0C0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB0C4
  goto L_804EB108; // 804EB0C8
L_804EB0CC:;
  c->r[4]=c->r[6]^0x80000000u; // 804EB0CC
  c->r[0]=c->r[7]^0x80000000u; // 804EB0D0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804EB0D4
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB0D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB0DC
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB0E0
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB0E4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EB0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EB0EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB0F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EB0F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB0F8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB0FC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB100
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 804EB104
L_804EB108:;
  c->r[0]=c->r[5]^0x80000000u; // 804EB108
  {uint32_t ea=c->r[2]+0x00001978u; c->f[1]=RF64(ea);} // 804EB10C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EB110
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB114
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EB118
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 804EB11C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EB120
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804EB124
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 804EB128
  cmps(c,0,(int32_t)c->r[5],0); // 804EB12C
  if (crb(c,1)) { goto L_804EB138; } // 804EB130
  c->r[5]=0u+0x00000001u; // 804EB134
L_804EB138:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB138
  if (crb(c,0)) { goto L_804EB148; } // 804EB13C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB140
  goto L_804EB184; // 804EB144
L_804EB148:;
  c->r[4]=c->r[6]^0x80000000u; // 804EB148
  c->r[0]=c->r[7]^0x80000000u; // 804EB14C
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EB150
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB154
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EB158
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB15C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB160
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EB164
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EB168
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB16C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB170
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB174
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB178
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB17C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EB180
L_804EB184:;
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB184
  c->r[4]=0u+0x00000000u; // 804EB188
  c->r[0]=0u+0x00000001u; // 804EB18C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 804EB190
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804EB194
  W32(c->r[3]+0x00000078u,c->r[5]); // 804EB198
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 804EB19C
  W32(c->r[3]+0x00000084u,c->r[0]); // 804EB1A0
  W8(c->r[3]+0x00000088u,c->r[4]); // 804EB1A4
  goto L_804EB2D4; // 804EB1A8
  goto L_804EB2D4; // 804EB1AC
  goto L_804EB2D4; // 804EB1B0
L_804EB1B4:;
  c->r[0]=R32(c->r[3]+0x00000084u); // 804EB1B4
  cmps(c,0,(int32_t)c->r[0],0); // 804EB1B8
  if (crb(c,2)) { goto L_804EB2D4; } // 804EB1BC
  if (crb(c,0)) { goto L_804EB2D4; } // 804EB1C0
  cmps(c,0,(int32_t)c->r[0],4); // 804EB1C4
  if (!crb(c,0)) { goto L_804EB2D4; } // 804EB1C8
  goto L_804EB1D4; // 804EB1CC
  goto L_804EB2D4; // 804EB1D0
L_804EB1D4:;
  c->r[7]=R32(c->r[3]+0x00000078u); // 804EB1D4
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 804EB1D8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB1DC
  if (crb(c,0)) { goto L_804EB1EC; } // 804EB1E0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB1E4
  goto L_804EB228; // 804EB1E8
L_804EB1EC:;
  c->r[4]=c->r[6]^0x80000000u; // 804EB1EC
  c->r[0]=c->r[7]^0x80000000u; // 804EB1F0
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EB1F4
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB1F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EB1FC
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB200
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB204
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EB208
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EB20C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB210
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB214
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB218
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB21C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB220
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EB224
L_804EB228:;
  c->r[0]=c->r[5]^0x80000000u; // 804EB228
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EB230
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EB234
  {uint32_t ea=c->r[2]+0x00001978u; c->f[2]=RF64(ea);} // 804EB238
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804EB23C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB240
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804EB244
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EB248
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804EB24C
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 804EB250
  cmps(c,0,(int32_t)c->r[8],0); // 804EB254
  if (crb(c,1)) { goto L_804EB260; } // 804EB258
  c->r[8]=0u+0x00000001u; // 804EB25C
L_804EB260:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB260
  if (crb(c,0)) { goto L_804EB270; } // 804EB264
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB268
  goto L_804EB2AC; // 804EB26C
L_804EB270:;
  c->r[4]=c->r[6]^0x80000000u; // 804EB270
  c->r[0]=c->r[7]^0x80000000u; // 804EB274
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 804EB278
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB27C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB280
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB284
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB288
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EB28C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EB290
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB294
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EB298
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB29C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB2A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB2A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EB2A8
L_804EB2AC:;
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB2AC
  c->r[5]=0u+0x00000000u; // 804EB2B0
  c->r[4]=0u+0x00000003u; // 804EB2B4
  c->r[0]=0u+0x00000001u; // 804EB2B8
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 804EB2BC
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 804EB2C0
  W32(c->r[3]+0x00000078u,c->r[8]); // 804EB2C4
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 804EB2C8
  W32(c->r[3]+0x00000084u,c->r[4]); // 804EB2CC
  W8(c->r[3]+0x00000088u,c->r[0]); // 804EB2D0
L_804EB2D4:;
  c->r[1]=c->r[1]+0x00000020u; // 804EB2D4
  return; // 804EB2D8
}

// fn_804EB2DC
void f_804EB2DC(Ctx* __restrict c) {
  trace_call(0x804EB2DCu);
  c->r[0]=0u-c->r[4]; // 804EB2DC
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 804EB2E0
  c->r[0]=c->r[0]&~c->r[4]; // 804EB2E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 804EB2E8
  W8(c->r[3]+0x00000082u,c->r[0]); // 804EB2EC
  return; // 804EB2F0
}

// fn_804EB2F4
void f_804EB2F4(Ctx* __restrict c) {
  trace_call(0x804EB2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EB2F4
  c->r[5]=0u+0x43300000u; // 804EB2F8
  c->r[0]=R8(c->r[3]+0x00000083u); // 804EB2FC
  W32(c->r[1]+0x00000008u,c->r[5]); // 804EB300
  cmps(c,0,(int32_t)c->r[0],0); // 804EB304
  W32(c->r[1]+0x00000010u,c->r[5]); // 804EB308
  if (!crb(c,2)) { goto L_804EB3F0; } // 804EB30C
  c->r[7]=R32(c->r[3]+0x00000068u); // 804EB310
  c->r[6]=R32(c->r[3]+0x0000006Cu); // 804EB314
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB318
  if (crb(c,0)) { goto L_804EB328; } // 804EB31C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB320
  goto L_804EB364; // 804EB324
L_804EB328:;
  c->r[5]=c->r[6]^0x80000000u; // 804EB328
  c->r[0]=c->r[7]^0x80000000u; // 804EB32C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 804EB330
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB334
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB338
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB33C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB340
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EB344
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EB348
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EB34C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EB350
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB354
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB358
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB35C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EB360
L_804EB364:;
  c->r[0]=c->r[4]^0x80000000u; // 804EB364
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB368
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EB36C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 804EB370
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EB374
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EB378
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804EB37C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 804EB380
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804EB384
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EB388
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 804EB38C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 804EB390
  if (crb(c,0)) { goto L_804EB3A0; } // 804EB394
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB398
  goto L_804EB3D8; // 804EB39C
L_804EB3A0:;
  c->r[4]=c->r[6]^0x80000000u; // 804EB3A0
  c->r[0]=c->r[7]^0x80000000u; // 804EB3A4
  W32(c->r[1]+0x00000014u,c->r[4]); // 804EB3A8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB3AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 804EB3B0
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EB3B4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804EB3B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EB3BC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804EB3C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EB3C4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EB3C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EB3CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EB3D0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 804EB3D4
L_804EB3D8:;
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB3D8
  c->r[0]=0u+0x00000000u; // 804EB3DC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 804EB3E0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 804EB3E4
  W32(c->r[3]+0x00000068u,c->r[5]); // 804EB3E8
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 804EB3EC
L_804EB3F0:;
  c->r[1]=c->r[1]+0x00000020u; // 804EB3F0
  return; // 804EB3F4
}

// IsPause__Q44nw4r3snd6detail10BasicSoundCFv
void f_804EB3F8(Ctx* __restrict c) {
  trace_call(0x804EB3F8u);
  c->r[0]=R32(c->r[3]+0x00000084u); // 804EB3F8
  c->r[3]=0u+0x00000001u; // 804EB3FC
  cmps(c,0,(int32_t)c->r[0],1); // 804EB400
  if (crb(c,2)) return; // 804EB404
  cmps(c,0,(int32_t)c->r[0],2); // 804EB408
  if (crb(c,2)) return; // 804EB40C
  c->r[3]=0u+0x00000000u; // 804EB410
  return; // 804EB414
}

// fn_804EB418
void f_804EB418(Ctx* __restrict c) {
  trace_call(0x804EB418u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EB418
  c->r[0]=c->lr; // 804EB41C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 804EB420
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 804EB424
  W32(c->r[1]+0x00000098u,c->r[30]); // 804EB428
  W32(c->r[1]+0x00000094u,c->r[29]); // 804EB42C
  c->r[29]=c->r[3]|c->r[3]; // 804EB430
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EB434
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EB438
  c->ctr=c->r[12]; // 804EB43C
  if (true) { c->lr=0x804EB444u; dispatch(c,c->ctr); } // 804EB440
  c->r[0]=R8(c->r[29]+0x00000082u); // 804EB444
  c->r[31]=c->r[3]|c->r[3]; // 804EB448
  cmps(c,0,(int32_t)c->r[0],0); // 804EB44C
  if (crb(c,2)) { goto L_804EB4C0; } // 804EB450
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EB454
  c->r[12]=R32(c->r[12]+0x00000018u); // 804EB458
  c->ctr=c->r[12]; // 804EB45C
  if (true) { c->lr=0x804EB464u; dispatch(c,c->ctr); } // 804EB460
  cmps(c,0,(int32_t)c->r[3],0); // 804EB464
  if (crb(c,2)) { goto L_804EB4C0; } // 804EB468
  c->r[3]=R32(c->r[29]+0x0000008Cu); // 804EB46C
  cmps(c,0,(int32_t)c->r[3],0); // 804EB470
  if (!crb(c,2)) { goto L_804EB4B8; } // 804EB474
  c->r[0]=R32(c->r[29]+0x00000084u); // 804EB478
  cmps(c,0,(int32_t)c->r[0],0); // 804EB47C
  if (crb(c,2)) { goto L_804EB48C; } // 804EB480
  cmps(c,0,(int32_t)c->r[0],3); // 804EB484
  if (!crb(c,2)) { goto L_804EB4C0; } // 804EB488
L_804EB48C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB48C
  c->r[3]=c->r[29]|c->r[29]; // 804EB490
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EB494
  c->ctr=c->r[12]; // 804EB498
  if (true) { c->lr=0x804EB4A0u; dispatch(c,c->ctr); } // 804EB49C
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB4A0
  c->r[3]=c->r[29]|c->r[29]; // 804EB4A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EB4A8
  c->ctr=c->r[12]; // 804EB4AC
  if (true) { c->lr=0x804EB4B4u; dispatch(c,c->ctr); } // 804EB4B0
  goto L_804EBA58; // 804EB4B4
L_804EB4B8:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804EB4B8
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 804EB4BC
L_804EB4C0:;
  c->r[0]=R8(c->r[29]+0x00000081u); // 804EB4C0
  c->r[30]=0u+0x00000000u; // 804EB4C4
  cmps(c,0,(int32_t)c->r[0],0); // 804EB4C8
  if (!crb(c,2)) { goto L_804EB4FC; } // 804EB4CC
  c->r[0]=R8(c->r[29]+0x00000080u); // 804EB4D0
  cmps(c,0,(int32_t)c->r[0],0); // 804EB4D4
  if (crb(c,2)) { goto L_804EBA58; } // 804EB4D8
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB4DC
  c->r[3]=c->r[29]|c->r[29]; // 804EB4E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804EB4E4
  c->ctr=c->r[12]; // 804EB4E8
  if (true) { c->lr=0x804EB4F0u; dispatch(c,c->ctr); } // 804EB4EC
  cmps(c,0,(int32_t)c->r[3],0); // 804EB4F0
  if (crb(c,2)) { goto L_804EBA58; } // 804EB4F4
  c->r[30]=0u+0x00000001u; // 804EB4F8
L_804EB4FC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EB4FC
  c->r[3]=c->r[31]|c->r[31]; // 804EB500
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804EB504
  c->ctr=c->r[12]; // 804EB508
  if (true) { c->lr=0x804EB510u; dispatch(c,c->ctr); } // 804EB50C
  cmps(c,0,(int32_t)c->r[3],0); // 804EB510
  if (crb(c,2)) { goto L_804EB530; } // 804EB514
  c->r[3]=R32(c->r[29]+0x00000090u); // 804EB518
  c->r[0]=0u+0xFFFFFFFFu; // 804EB51C
  cmpu(c,0,c->r[3],c->r[0]); // 804EB520
  if (!crb(c,0)) { goto L_804EB530; } // 804EB524
  c->r[0]=c->r[3]+0x00000001u; // 804EB528
  W32(c->r[29]+0x00000090u,c->r[0]); // 804EB52C
L_804EB530:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EB530
  c->r[3]=c->r[31]|c->r[31]; // 804EB534
  c->r[12]=R32(c->r[12]+0x00000018u); // 804EB538
  c->ctr=c->r[12]; // 804EB53C
  if (true) { c->lr=0x804EB544u; dispatch(c,c->ctr); } // 804EB540
  cmps(c,0,(int32_t)c->r[3],0); // 804EB544
  if (!crb(c,2)) { goto L_804EB564; } // 804EB548
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB54C
  c->r[3]=c->r[29]|c->r[29]; // 804EB550
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EB554
  c->ctr=c->r[12]; // 804EB558
  if (true) { c->lr=0x804EB560u; dispatch(c,c->ctr); } // 804EB55C
  goto L_804EBA58; // 804EB560
L_804EB564:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 804EB564
  cmps(c,0,(int32_t)c->r[0],2); // 804EB568
  if (crb(c,2)) { goto L_804EB5F0; } // 804EB56C
  if (!crb(c,0)) { goto L_804EB584; } // 804EB570
  cmps(c,0,(int32_t)c->r[0],0); // 804EB574
  if (crb(c,2)) { goto L_804EB5DC; } // 804EB578
  if (!crb(c,0)) { goto L_804EB590; } // 804EB57C
  goto L_804EB5F0; // 804EB580
L_804EB584:;
  cmps(c,0,(int32_t)c->r[0],4); // 804EB584
  if (!crb(c,0)) { goto L_804EB5F0; } // 804EB588
  goto L_804EB5AC; // 804EB58C
L_804EB590:;
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 804EB590
  c->r[0]=R32(c->r[29]+0x00000078u); // 804EB594
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EB598
  if (!crb(c,0)) { goto L_804EB5F0; } // 804EB59C
  c->r[0]=c->r[3]+0x00000001u; // 804EB5A0
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 804EB5A4
  goto L_804EB5F0; // 804EB5A8
L_804EB5AC:;
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 804EB5AC
  c->r[0]=R32(c->r[29]+0x00000078u); // 804EB5B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EB5B4
  if (!crb(c,0)) { goto L_804EB5C4; } // 804EB5B8
  c->r[0]=c->r[3]+0x00000001u; // 804EB5BC
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 804EB5C0
L_804EB5C4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB5C4
  c->r[3]=c->r[29]|c->r[29]; // 804EB5C8
  c->r[12]=R32(c->r[12]+0x00000030u); // 804EB5CC
  c->ctr=c->r[12]; // 804EB5D0
  if (true) { c->lr=0x804EB5D8u; dispatch(c,c->ctr); } // 804EB5D4
  goto L_804EB5F0; // 804EB5D8
L_804EB5DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB5DC
  c->r[3]=c->r[29]|c->r[29]; // 804EB5E0
  c->r[12]=R32(c->r[12]+0x00000030u); // 804EB5E4
  c->ctr=c->r[12]; // 804EB5E8
  if (true) { c->lr=0x804EB5F0u; dispatch(c,c->ctr); } // 804EB5EC
L_804EB5F0:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 804EB5F0
  cmps(c,0,(int32_t)c->r[3],0); // 804EB5F4
  if (crb(c,2)) { goto L_804EB614; } // 804EB5F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EB5FC
  c->r[5]=c->r[29]|c->r[29]; // 804EB600
  c->r[4]=R32(c->r[29]+0x00000028u); // 804EB604
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EB608
  c->ctr=c->r[12]; // 804EB60C
  if (true) { c->lr=0x804EB614u; dispatch(c,c->ctr); } // 804EB610
L_804EB614:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 804EB614
  cmps(c,0,(int32_t)c->r[0],0); // 804EB618
  if (crb(c,2)) { goto L_804EB908; } // 804EB61C
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB620
  c->r[5]=c->r[1]+0x00000044u; // 804EB624
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB628
  c->r[3]=0u+0x00000000u; // 804EB62C
  c->r[0]=c->r[1]+0x0000008Cu; // 804EB630
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804EB634
  cmpu(c,1,c->r[5],c->r[0]); // 804EB638
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804EB63C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804EB640
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 804EB644
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 804EB648
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804EB64C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 804EB650
  W32(c->r[1]+0x00000024u,c->r[3]); // 804EB654
  W32(c->r[1]+0x00000028u,c->r[3]); // 804EB658
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804EB65C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 804EB660
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 804EB664
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 804EB668
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EB66C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 804EB670
  if (!crb(c,4)) { goto L_804EB844; } // 804EB674
  c->r[7]=c->r[0]-c->r[5]; // 804EB678
  c->r[3]=0u+0x2AAB0000u; // 804EB67C
  c->r[8]=c->r[7]+0x00000017u; // 804EB680
  c->r[4]=c->r[1]+0xFFFFFFCCu; // 804EB684
  c->r[0]=c->r[3]+0xFFFFAAABu; // 804EB688
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 804EB68C
  c->r[0]=sraw(c,c->r[0],2); // 804EB690
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EB694
  c->r[9]=c->r[0]+c->r[3]; // 804EB698
  c->r[10]=c->r[9]+0x00000001u; // 804EB69C
  cmps(c,0,(int32_t)c->r[10],8); // 804EB6A0
  if (!crb(c,1)) { goto L_804EB7FC; } // 804EB6A4
  c->r[3]=0u+0x00000000u; // 804EB6A8
  c->r[6]=0u+0x00000000u; // 804EB6AC
  if (crb(c,5)) { goto L_804EB6D8; } // 804EB6B0
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 804EB6B4
  c->r[7]=0u+0x00000001u; // 804EB6B8
  if (!crb(c,2)) { goto L_804EB6CC; } // 804EB6BC
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 804EB6C0
  if (crb(c,2)) { goto L_804EB6CC; } // 804EB6C4
  c->r[7]=0u+0x00000000u; // 804EB6C8
L_804EB6CC:;
  cmps(c,0,(int32_t)c->r[7],0); // 804EB6CC
  if (crb(c,2)) { goto L_804EB6D8; } // 804EB6D0
  c->r[6]=0u+0x00000001u; // 804EB6D4
L_804EB6D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 804EB6D8
  if (crb(c,2)) { goto L_804EB708; } // 804EB6DC
  c->r[7]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[7]); // 804EB6E0
  c->r[6]=0u+0x00000001u; // 804EB6E4
  if (!crb(c,2)) { goto L_804EB6FC; } // 804EB6E8
  c->r[0]=rotl(c->r[10],0)&0x80000000u; // 804EB6EC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 804EB6F0
  if (crb(c,2)) { goto L_804EB6FC; } // 804EB6F4
  c->r[6]=0u+0x00000000u; // 804EB6F8
L_804EB6FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 804EB6FC
  if (crb(c,2)) { goto L_804EB708; } // 804EB700
  c->r[3]=0u+0x00000001u; // 804EB704
L_804EB708:;
  cmps(c,0,(int32_t)c->r[3],0); // 804EB708
  if (crb(c,2)) { goto L_804EB7FC; } // 804EB70C
  c->r[3]=c->r[4]+0x000000BFu; // 804EB710
  c->r[0]=0u+0x000000C0u; // 804EB714
  c->r[3]=c->r[3]-c->r[5]; // 804EB718
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB71C
  c->r[3]=divwu(c->r[3],c->r[0]); // 804EB720
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB724
  c->ctr=c->r[3]; // 804EB728
  cmpu(c,0,c->r[5],c->r[4]); // 804EB72C
  if (!crb(c,0)) { goto L_804EB7FC; } // 804EB730
L_804EB734:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 804EB734
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 804EB738
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 804EB73C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EB740
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 804EB744
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 804EB748
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 804EB74C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[1]);} // 804EB750
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 804EB754
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 804EB758
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 804EB75C
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 804EB760
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 804EB764
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 804EB768
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 804EB76C
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EB770
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 804EB774
  {uint32_t ea=c->r[5]+0x00000044u; WF32(ea,c->f[0]);} // 804EB778
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[1]);} // 804EB77C
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[1]);} // 804EB780
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[0]);} // 804EB784
  {uint32_t ea=c->r[5]+0x00000054u; WF32(ea,c->f[0]);} // 804EB788
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 804EB78C
  {uint32_t ea=c->r[5]+0x0000005Cu; WF32(ea,c->f[0]);} // 804EB790
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 804EB794
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[1]);} // 804EB798
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 804EB79C
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 804EB7A0
  {uint32_t ea=c->r[5]+0x00000070u; WF32(ea,c->f[0]);} // 804EB7A4
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[0]);} // 804EB7A8
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[1]);} // 804EB7AC
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[1]);} // 804EB7B0
  {uint32_t ea=c->r[5]+0x00000080u; WF32(ea,c->f[0]);} // 804EB7B4
  {uint32_t ea=c->r[5]+0x00000084u; WF32(ea,c->f[0]);} // 804EB7B8
  {uint32_t ea=c->r[5]+0x00000088u; WF32(ea,c->f[0]);} // 804EB7BC
  {uint32_t ea=c->r[5]+0x0000008Cu; WF32(ea,c->f[0]);} // 804EB7C0
  {uint32_t ea=c->r[5]+0x00000090u; WF32(ea,c->f[1]);} // 804EB7C4
  {uint32_t ea=c->r[5]+0x00000094u; WF32(ea,c->f[1]);} // 804EB7C8
  {uint32_t ea=c->r[5]+0x00000098u; WF32(ea,c->f[0]);} // 804EB7CC
  {uint32_t ea=c->r[5]+0x0000009Cu; WF32(ea,c->f[0]);} // 804EB7D0
  {uint32_t ea=c->r[5]+0x000000A0u; WF32(ea,c->f[0]);} // 804EB7D4
  {uint32_t ea=c->r[5]+0x000000A4u; WF32(ea,c->f[0]);} // 804EB7D8
  {uint32_t ea=c->r[5]+0x000000A8u; WF32(ea,c->f[1]);} // 804EB7DC
  {uint32_t ea=c->r[5]+0x000000ACu; WF32(ea,c->f[1]);} // 804EB7E0
  {uint32_t ea=c->r[5]+0x000000B0u; WF32(ea,c->f[0]);} // 804EB7E4
  {uint32_t ea=c->r[5]+0x000000B4u; WF32(ea,c->f[0]);} // 804EB7E8
  {uint32_t ea=c->r[5]+0x000000B8u; WF32(ea,c->f[0]);} // 804EB7EC
  {uint32_t ea=c->r[5]+0x000000BCu; WF32(ea,c->f[0]);} // 804EB7F0
  c->r[5]=c->r[5]+0x000000C0u; // 804EB7F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EB734; } // 804EB7F8
L_804EB7FC:;
  c->r[4]=c->r[1]+0x0000008Cu; // 804EB7FC
  c->r[0]=0u+0x00000018u; // 804EB800
  c->r[3]=c->r[4]+0x00000017u; // 804EB804
  {uint32_t ea=c->r[2]+0x00001970u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EB808
  c->r[3]=c->r[3]-c->r[5]; // 804EB80C
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB810
  c->r[3]=divwu(c->r[3],c->r[0]); // 804EB814
  c->ctr=c->r[3]; // 804EB818
  cmpu(c,0,c->r[5],c->r[4]); // 804EB81C
  if (!crb(c,0)) { goto L_804EB844; } // 804EB820
L_804EB824:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 804EB824
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 804EB828
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 804EB82C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 804EB830
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 804EB834
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 804EB838
  c->r[5]=c->r[5]+0x00000018u; // 804EB83C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804EB824; } // 804EB840
L_804EB844:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 804EB844
  c->r[7]=c->r[1]+0x00000008u; // 804EB848
  c->r[4]=R32(c->r[29]+0x00000028u); // 804EB84C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EB850
  c->r[5]=R32(c->r[29]+0x00000098u); // 804EB854
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EB858
  c->r[6]=R8(c->r[29]+0x00000095u); // 804EB85C
  c->ctr=c->r[12]; // 804EB860
  if (true) { c->lr=0x804EB868u; dispatch(c,c->ctr); } // 804EB864
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB868
  c->r[4]=c->r[31]|c->r[31]; // 804EB86C
  c->r[3]=c->r[1]+0x00000008u; // 804EB870
  c->r[5]=0u+0x00000000u; // 804EB874
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 804EB878
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB87C
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 804EB880
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB884
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 804EB888
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB88C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 804EB890
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB894
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 804EB898
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB89C
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 804EB8A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8A4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 804EB8A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EB8AC
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 804EB8B0
  c->r[0]=R32(c->r[1]+0x00000028u); // 804EB8B4
  W32(c->r[29]+0x00000050u,c->r[0]); // 804EB8B8
  goto L_804EB8FC; // 804EB8BC
L_804EB8C0:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8C0
  c->r[5]=c->r[5]+0x00000001u; // 804EB8C4
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[0]);} // 804EB8C8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8CC
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 804EB8D0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8D4
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 804EB8D8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8DC
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 804EB8E0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8E4
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 804EB8E8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB8EC
  c->r[3]=c->r[3]+0x00000018u; // 804EB8F0
  {uint32_t ea=c->r[4]+0x00000084u; WF32(ea,c->f[0]);} // 804EB8F4
  c->r[4]=c->r[4]+0x00000018u; // 804EB8F8
L_804EB8FC:;
  c->r[0]=R8(c->r[29]+0x00000095u); // 804EB8FC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 804EB900
  if (crb(c,0)) { IRQCHK(c); goto L_804EB8C0; } // 804EB904
L_804EB908:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 804EB908
  cmps(c,0,(int32_t)c->r[3],0); // 804EB90C
  if (crb(c,2)) { goto L_804EB92C; } // 804EB910
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB914
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 804EB918
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB91C
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 804EB920
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EB924
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 804EB928
L_804EB92C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB92C
  c->r[3]=c->r[29]|c->r[29]; // 804EB930
  c->r[12]=R32(c->r[12]+0x00000034u); // 804EB934
  c->ctr=c->r[12]; // 804EB938
  if (true) { c->lr=0x804EB940u; dispatch(c,c->ctr); } // 804EB93C
  c->r[0]=R8(c->r[29]+0x00000083u); // 804EB940
  cmps(c,0,(int32_t)c->r[0],0); // 804EB944
  if (crb(c,2)) { goto L_804EB97C; } // 804EB948
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 804EB94C
  c->r[0]=R32(c->r[29]+0x00000068u); // 804EB950
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EB954
  if (crb(c,0)) { goto L_804EB97C; } // 804EB958
  c->r[0]=0u+0x00000000u; // 804EB95C
  c->r[3]=c->r[29]|c->r[29]; // 804EB960
  W8(c->r[29]+0x00000083u,c->r[0]); // 804EB964
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB968
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EB96C
  c->ctr=c->r[12]; // 804EB970
  if (true) { c->lr=0x804EB978u; dispatch(c,c->ctr); } // 804EB974
  goto L_804EBA58; // 804EB978
L_804EB97C:;
  cmps(c,0,(int32_t)c->r[30],0); // 804EB97C
  if (crb(c,2)) { goto L_804EB9CC; } // 804EB980
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EB984
  c->r[3]=c->r[31]|c->r[31]; // 804EB988
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EB98C
  c->ctr=c->r[12]; // 804EB990
  if (true) { c->lr=0x804EB998u; dispatch(c,c->ctr); } // 804EB994
  cmps(c,0,(int32_t)c->r[3],0); // 804EB998
  if (crb(c,2)) { goto L_804EB9B4; } // 804EB99C
  c->r[3]=0u+0x00000001u; // 804EB9A0
  c->r[0]=0u+0x00000000u; // 804EB9A4
  W8(c->r[29]+0x00000081u,c->r[3]); // 804EB9A8
  W8(c->r[29]+0x00000080u,c->r[0]); // 804EB9AC
  goto L_804EB9CC; // 804EB9B0
L_804EB9B4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804EB9B4
  c->r[3]=c->r[29]|c->r[29]; // 804EB9B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EB9BC
  c->ctr=c->r[12]; // 804EB9C0
  if (true) { c->lr=0x804EB9C8u; dispatch(c,c->ctr); } // 804EB9C4
  goto L_804EBA58; // 804EB9C8
L_804EB9CC:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 804EB9CC
  cmps(c,0,(int32_t)c->r[0],1); // 804EB9D0
  if (!crb(c,2)) { goto L_804EBA0C; } // 804EB9D4
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 804EB9D8
  c->r[0]=R32(c->r[29]+0x00000078u); // 804EB9DC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EB9E0
  if (crb(c,0)) { goto L_804EBA2C; } // 804EB9E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EB9E8
  c->r[3]=c->r[31]|c->r[31]; // 804EB9EC
  c->r[4]=0u+0x00000001u; // 804EB9F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 804EB9F4
  c->ctr=c->r[12]; // 804EB9F8
  if (true) { c->lr=0x804EBA00u; dispatch(c,c->ctr); } // 804EB9FC
  c->r[0]=0u+0x00000002u; // 804EBA00
  W32(c->r[29]+0x00000084u,c->r[0]); // 804EBA04
  goto L_804EBA2C; // 804EBA08
L_804EBA0C:;
  cmps(c,0,(int32_t)c->r[0],3); // 804EBA0C
  if (!crb(c,2)) { goto L_804EBA2C; } // 804EBA10
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 804EBA14
  c->r[0]=R32(c->r[29]+0x00000078u); // 804EBA18
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804EBA1C
  if (crb(c,0)) { goto L_804EBA2C; } // 804EBA20
  c->r[0]=0u+0x00000000u; // 804EBA24
  W32(c->r[29]+0x00000084u,c->r[0]); // 804EBA28
L_804EBA2C:;
  c->r[0]=R8(c->r[29]+0x00000088u); // 804EBA2C
  cmps(c,0,(int32_t)c->r[0],0); // 804EBA30
  if (crb(c,2)) { goto L_804EBA58; } // 804EBA34
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EBA38
  c->r[3]=c->r[31]|c->r[31]; // 804EBA3C
  c->r[4]=0u+0x00000000u; // 804EBA40
  c->r[12]=R32(c->r[12]+0x00000014u); // 804EBA44
  c->ctr=c->r[12]; // 804EBA48
  if (true) { c->lr=0x804EBA50u; dispatch(c,c->ctr); } // 804EBA4C
  c->r[0]=0u+0x00000000u; // 804EBA50
  W8(c->r[29]+0x00000088u,c->r[0]); // 804EBA54
L_804EBA58:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 804EBA58
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 804EBA5C
  c->r[30]=R32(c->r[1]+0x00000098u); // 804EBA60
  c->r[29]=R32(c->r[1]+0x00000094u); // 804EBA64
  c->lr=c->r[0]; // 804EBA68
  c->r[1]=c->r[1]+0x000000A0u; // 804EBA6C
  return; // 804EBA70
}

// UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv
void f_804EBA74(Ctx* __restrict c) {
  trace_call(0x804EBA74u);
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 804EBA74
  c->r[0]=R32(c->r[3]+0x00000068u); // 804EBA78
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804EBA7C
  if (!crb(c,0)) { goto L_804EBA8C; } // 804EBA80
  c->r[0]=c->r[4]+0x00000001u; // 804EBA84
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 804EBA88
L_804EBA8C:;
  c->r[4]=R32(c->r[3]+0x000000A8u); // 804EBA8C
  c->r[0]=R32(c->r[3]+0x000000A4u); // 804EBA90
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804EBA94
  if (!crb(c,0)) return; // 804EBA98
  c->r[0]=c->r[4]+0x00000001u; // 804EBA9C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804EBAA0
  return; // 804EBAA4
}

// fn_804EBAA8
void f_804EBAA8(Ctx* __restrict c) {
  trace_call(0x804EBAA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EBAA8
  c->r[0]=c->lr; // 804EBAAC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 804EBAB0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 804EBAB4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 804EBAB8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 804EBABC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 804EBAC0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 804EBAC4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 804EBAC8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 804EBACC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 804EBAD0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 804EBAD4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 804EBAD8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 804EBADC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 804EBAE0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 804EBAE4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 804EBAE8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 804EBAEC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 804EBAF0
  c->r[11]=c->r[1]+0x00000050u; // 804EBAF4
  c->lr=0x804EBAFCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804EBAF8
  {uint32_t ea=c->r[2]+0x00001970u; c->f[31]=c->ps1[31]=RF32(ea);} // 804EBAFC
  c->r[0]=0u+0x43300000u; // 804EBB00
  {uint32_t ea=c->r[3]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBB04
  c->r[31]=c->r[3]|c->r[3]; // 804EBB08
  c->r[6]=R32(c->r[3]+0x00000010u); // 804EBB0C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 804EBB10
  c->r[5]=R32(c->r[3]+0x000000A4u); // 804EBB14
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBB18
  c->r[4]=R32(c->r[3]+0x000000A8u); // 804EBB1C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 804EBB20
  W32(c->r[1]+0x00000028u,c->r[0]); // 804EBB24
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 804EBB28
  W32(c->r[1]+0x00000030u,c->r[0]); // 804EBB2C
  if (crb(c,0)) { goto L_804EBB3C; } // 804EBB30
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBB34
  goto L_804EBB78; // 804EBB38
L_804EBB3C:;
  c->r[4]=c->r[4]^0x80000000u; // 804EBB3C
  c->r[0]=c->r[5]^0x80000000u; // 804EBB40
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 804EBB44
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EBB48
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 804EBB4C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBB50
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBB54
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EBB58
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EBB5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EBB60
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804EBB64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EBB68
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EBB6C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EBB70
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804EBB74
L_804EBB78:;
  c->r[5]=R32(c->r[3]+0x00000068u); // 804EBB78
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 804EBB7C
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 804EBB80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804EBB84
  if (crb(c,0)) { goto L_804EBB94; } // 804EBB88
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBB8C
  goto L_804EBBD0; // 804EBB90
L_804EBB94:;
  c->r[4]=c->r[0]^0x80000000u; // 804EBB94
  c->r[0]=c->r[5]^0x80000000u; // 804EBB98
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 804EBB9C
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EBBA0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 804EBBA4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBBA8
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBBAC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EBBB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EBBB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EBBB8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804EBBBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EBBC0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EBBC4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EBBC8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804EBBCC
L_804EBBD0:;
  c->r[5]=R32(c->r[3]+0x00000078u); // 804EBBD0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 804EBBD4
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 804EBBD8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 804EBBDC
  if (crb(c,0)) { goto L_804EBBEC; } // 804EBBE0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBBE4
  goto L_804EBC28; // 804EBBE8
L_804EBBEC:;
  c->r[4]=c->r[0]^0x80000000u; // 804EBBEC
  c->r[0]=c->r[5]^0x80000000u; // 804EBBF0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 804EBBF4
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EBBF8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 804EBBFC
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBC00
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBC04
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 804EBC08
  W32(c->r[1]+0x00000034u,c->r[0]); // 804EBC0C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804EBC10
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 804EBC14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EBC18
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EBC1C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EBC20
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804EBC24
L_804EBC28:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 804EBC28
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBC2C
  {uint32_t ea=c->r[2]+0x00001970u; c->f[28]=c->ps1[28]=RF32(ea);} // 804EBC30
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBC34
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 804EBC38
  {uint32_t ea=c->r[2]+0x00001974u; c->f[30]=c->ps1[30]=RF32(ea);} // 804EBC3C
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBC40
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 804EBC44
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBC48
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBC4C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 804EBC50
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBC54
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 804EBC58
  {uint32_t ea=c->r[2]+0x00001974u; c->f[29]=c->ps1[29]=RF32(ea);} // 804EBC5C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 804EBC60
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBC64
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 804EBC68
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804EBC6C
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 804EBC70
  c->r[28]=R8(c->r[3]+0x00000096u); // 804EBC74
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBC78
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBC7C
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[27]=c->ps1[27]=RF32(ea);} // 804EBC80
  cmps(c,0,(int32_t)c->r[28],0); // 804EBC84
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBC88
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[3]); // 804EBC8C
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[1]); // 804EBC90
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[26]=c->ps1[26]=RF32(ea);} // 804EBC94
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 804EBC98
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBC9C
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 804EBCA0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 804EBCA4
  if (!crb(c,2)) { goto L_804EBCC4; } // 804EBCA8
  c->r[28]=R32(c->r[6]+0x0000003Cu); // 804EBCAC
  {uint32_t ea=c->r[6]+0x00000040u; c->f[26]=c->ps1[26]=RF32(ea);} // 804EBCB0
  cmps(c,0,(int32_t)c->r[28],0); // 804EBCB4
  if (!crb(c,2)) { goto L_804EBCC4; } // 804EBCB8
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 804EBCBC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 804EBCC0
L_804EBCC4:;
  {uint32_t ea=c->r[2]+0x00001970u; c->f[25]=c->ps1[25]=RF32(ea);} // 804EBCC4
  c->r[29]=c->r[31]|c->r[31]; // 804EBCC8
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBCCC
  c->r[30]=c->r[1]+0x00000018u; // 804EBCD0
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBCD4
  c->r[26]=0u+0x00000000u; // 804EBCD8
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[0]); // 804EBCDC
  c->r[27]=R32(c->r[3]+0x000000C4u); // 804EBCE0
  {uint32_t ea=c->r[2]+0x00001970u; c->f[24]=c->ps1[24]=RF32(ea);} // 804EBCE4
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[1]); // 804EBCE8
L_804EBCEC:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[24]);} // 804EBCEC
  c->r[4]=c->r[26]|c->r[26]; // 804EBCF0
  c->r[3]=R32(c->r[31]+0x00000010u); // 804EBCF4
  c->lr=0x804EBCFCu; f_804FCAD8(c); // 804EBCF8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBCFC
  c->r[26]=c->r[26]+0x00000001u; // 804EBD00
  {uint32_t ea=c->r[29]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBD04
  cmps(c,0,(int32_t)c->r[26],4); // 804EBD08
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804EBD0C
  c->r[29]=c->r[29]+0x00000004u; // 804EBD10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 804EBD14
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 804EBD18
  c->r[30]=c->r[30]+0x00000004u; // 804EBD1C
  if (crb(c,0)) { IRQCHK(c); goto L_804EBCEC; } // 804EBD20
  {uint32_t ea=c->r[2]+0x00001974u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EBD24
  c->r[3]=c->r[31]|c->r[31]; // 804EBD28
  c->r[4]=R32(c->r[31]+0x00000010u); // 804EBD2C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EBD30
  c->f[24]=c->f[5]; // 804EBD34
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBD38
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[2]); // 804EBD3C
  {uint32_t ea=c->r[4]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 804EBD40
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 804EBD44
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 804EBD48
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBD4C
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 804EBD50
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 804EBD54
  {uint32_t ea=c->r[4]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 804EBD58
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EBD5C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 804EBD60
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 804EBD64
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[7]); // 804EBD68
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 804EBD6C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 804EBD70
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBD74
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 804EBD78
  {uint32_t ea=c->r[4]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 804EBD7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 804EBD80
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 804EBD84
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EBD88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 804EBD8C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 804EBD90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 804EBD94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 804EBD98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 804EBD9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 804EBDA0
  c->ctr=c->r[12]; // 804EBDA4
  if (true) { c->lr=0x804EBDACu; dispatch(c,c->ctr); } // 804EBDA8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 804EBDAC
  c->f[1]=c->f[26]; // 804EBDB0
  c->r[26]=c->r[3]|c->r[3]; // 804EBDB4
  c->r[4]=c->r[28]|c->r[28]; // 804EBDB8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 804EBDBC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[29]);} // 804EBDC0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[28]);} // 804EBDC4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[27]);} // 804EBDC8
  c->lr=0x804EBDD0u; f_804EABB4(c); // 804EBDCC
  W32(c->r[26]+0x00000020u,c->r[27]); // 804EBDD0
  c->r[31]=c->r[1]+0x00000018u; // 804EBDD4
  c->r[27]=0u+0x00000000u; // 804EBDD8
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[25]);} // 804EBDDC
L_804EBDE0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBDE0
  c->r[3]=c->r[26]|c->r[26]; // 804EBDE4
  c->r[4]=c->r[27]|c->r[27]; // 804EBDE8
  c->lr=0x804EBDF0u; f_804EABC8(c); // 804EBDEC
  c->r[27]=c->r[27]+0x00000001u; // 804EBDF0
  c->r[31]=c->r[31]+0x00000004u; // 804EBDF4
  cmps(c,0,(int32_t)c->r[27],4); // 804EBDF8
  if (crb(c,0)) { IRQCHK(c); goto L_804EBDE0; } // 804EBDFC
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[24]);} // 804EBE00
  c->r[31]=c->r[1]+0x00000008u; // 804EBE04
  c->r[27]=0u+0x00000000u; // 804EBE08
L_804EBE0C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EBE0C
  c->r[3]=c->r[26]|c->r[26]; // 804EBE10
  c->r[4]=c->r[27]|c->r[27]; // 804EBE14
  c->lr=0x804EBE1Cu; f_804EAB94(c); // 804EBE18
  c->r[27]=c->r[27]+0x00000001u; // 804EBE1C
  c->r[31]=c->r[31]+0x00000004u; // 804EBE20
  cmps(c,0,(int32_t)c->r[27],3); // 804EBE24
  if (crb(c,0)) { IRQCHK(c); goto L_804EBE0C; } // 804EBE28
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 804EBE2C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 804EBE30
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 804EBE34
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 804EBE38
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 804EBE3C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 804EBE40
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 804EBE44
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 804EBE48
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 804EBE4C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 804EBE50
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 804EBE54
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 804EBE58
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 804EBE5C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 804EBE60
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 804EBE64
  c->r[11]=c->r[1]+0x00000050u; // 804EBE68
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 804EBE6C
  c->lr=0x804EBE74u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804EBE70
  c->r[0]=R32(c->r[1]+0x000000D4u); // 804EBE74
  c->lr=c->r[0]; // 804EBE78
  c->r[1]=c->r[1]+0x000000D0u; // 804EBE7C
  return; // 804EBE80
}

// fn_804EBE84
void f_804EBE84(Ctx* __restrict c) {
  trace_call(0x804EBE84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EBE84
  c->r[0]=c->lr; // 804EBE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EBE8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EBE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EBE94
  c->r[30]=c->r[3]|c->r[3]; // 804EBE98
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EBE9C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EBEA0
  c->ctr=c->r[12]; // 804EBEA4
  if (true) { c->lr=0x804EBEACu; dispatch(c,c->ctr); } // 804EBEA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EBEAC
  c->r[31]=c->r[3]|c->r[3]; // 804EBEB0
  c->r[12]=R32(c->r[12]+0x00000018u); // 804EBEB4
  c->ctr=c->r[12]; // 804EBEB8
  if (true) { c->lr=0x804EBEC0u; dispatch(c,c->ctr); } // 804EBEBC
  cmps(c,0,(int32_t)c->r[3],0); // 804EBEC0
  if (crb(c,2)) { goto L_804EBEF0; } // 804EBEC4
  c->r[0]=R8(c->r[30]+0x00000083u); // 804EBEC8
  cmps(c,0,(int32_t)c->r[0],0); // 804EBECC
  if (crb(c,2)) { goto L_804EBEDC; } // 804EBED0
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EBED4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 804EBED8
L_804EBEDC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EBEDC
  c->r[3]=c->r[31]|c->r[31]; // 804EBEE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EBEE4
  c->ctr=c->r[12]; // 804EBEE8
  if (true) { c->lr=0x804EBEF0u; dispatch(c,c->ctr); } // 804EBEEC
L_804EBEF0:;
  c->r[31]=0u+0xFFFFFFFFu; // 804EBEF0
  c->r[3]=c->r[30]|c->r[30]; // 804EBEF4
  W32(c->r[30]+0x00000098u,c->r[31]); // 804EBEF8
  c->r[12]=R32(c->r[30]+0x00000000u); // 804EBEFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EBF00
  c->ctr=c->r[12]; // 804EBF04
  if (true) { c->lr=0x804EBF0Cu; dispatch(c,c->ctr); } // 804EBF08
  W32(c->r[3]+0x000000D0u,c->r[31]); // 804EBF0C
  c->r[3]=R32(c->r[30]+0x00000008u); // 804EBF10
  cmps(c,0,(int32_t)c->r[3],0); // 804EBF14
  if (crb(c,2)) { goto L_804EBF20; } // 804EBF18
  c->lr=0x804EBF20u; f_804FC5FC(c); // 804EBF1C
L_804EBF20:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804EBF20
  cmps(c,0,(int32_t)c->r[3],0); // 804EBF24
  if (crb(c,2)) { goto L_804EBF30; } // 804EBF28
  c->lr=0x804EBF30u; f_804FC5FC(c); // 804EBF2C
L_804EBF30:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 804EBF30
  c->r[3]=c->r[30]|c->r[30]; // 804EBF34
  c->r[12]=R32(c->r[12]+0x00000018u); // 804EBF38
  c->ctr=c->r[12]; // 804EBF3C
  if (true) { c->lr=0x804EBF44u; dispatch(c,c->ctr); } // 804EBF40
  cmps(c,0,(int32_t)c->r[3],0); // 804EBF44
  if (crb(c,2)) { goto L_804EBF60; } // 804EBF48
  c->r[12]=R32(c->r[30]+0x00000000u); // 804EBF4C
  c->r[3]=c->r[30]|c->r[30]; // 804EBF50
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 804EBF54
  c->ctr=c->r[12]; // 804EBF58
  if (true) { c->lr=0x804EBF60u; dispatch(c,c->ctr); } // 804EBF5C
L_804EBF60:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804EBF60
  cmps(c,0,(int32_t)c->r[0],0); // 804EBF64
  if (crb(c,2)) { goto L_804EBF78; } // 804EBF68
  c->r[3]=R32(c->r[30]+0x00000010u); // 804EBF6C
  c->r[4]=c->r[30]|c->r[30]; // 804EBF70
  c->lr=0x804EBF78u; f_804FD264(c); // 804EBF74
L_804EBF78:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 804EBF78
  cmps(c,0,(int32_t)c->r[3],0); // 804EBF7C
  if (crb(c,2)) { goto L_804EBF8C; } // 804EBF80
  c->r[4]=c->r[30]|c->r[30]; // 804EBF84
  c->lr=0x804EBF8Cu; f_804FCF58(c); // 804EBF88
L_804EBF8C:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 804EBF8C
  cmps(c,0,(int32_t)c->r[3],0); // 804EBF90
  if (crb(c,2)) { goto L_804EBFA0; } // 804EBF94
  c->r[4]=c->r[30]|c->r[30]; // 804EBF98
  c->lr=0x804EBFA0u; f_804EE940(c); // 804EBF9C
L_804EBFA0:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 804EBFA0
  cmps(c,0,(int32_t)c->r[3],0); // 804EBFA4
  if (crb(c,2)) { goto L_804EBFCC; } // 804EBFA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EBFAC
  c->r[5]=c->r[30]|c->r[30]; // 804EBFB0
  c->r[4]=R32(c->r[30]+0x00000028u); // 804EBFB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EBFB8
  c->ctr=c->r[12]; // 804EBFBC
  if (true) { c->lr=0x804EBFC4u; dispatch(c,c->ctr); } // 804EBFC0
  c->r[0]=0u+0x00000000u; // 804EBFC4
  W32(c->r[30]+0x00000028u,c->r[0]); // 804EBFC8
L_804EBFCC:;
  c->r[0]=0u+0x00000000u; // 804EBFCC
  W8(c->r[30]+0x00000081u,c->r[0]); // 804EBFD0
  W8(c->r[30]+0x00000083u,c->r[0]); // 804EBFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EBFD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EBFDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EBFE0
  c->lr=c->r[0]; // 804EBFE4
  c->r[1]=c->r[1]+0x00000010u; // 804EBFE8
  return; // 804EBFEC
}

// fn_804EBFF0
void f_804EBFF0(Ctx* __restrict c) {
  trace_call(0x804EBFF0u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 804EBFF0
  return; // 804EBFF4
}

// fn_804EBFF8
void f_804EBFF8(Ctx* __restrict c) {
  trace_call(0x804EBFF8u);
  c->r[0]=0u+0x00000000u; // 804EBFF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EBFFC
  return; // 804EC000
}

// fn_804EC004
void f_804EC004(Ctx* __restrict c) {
  trace_call(0x804EC004u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 804EC004
  return; // 804EC008
}

// fn_804EC00C
void f_804EC00C(Ctx* __restrict c) {
  trace_call(0x804EC00Cu);
  c->r[0]=0u+0x00000000u; // 804EC00C
  W32(c->r[3]+0x00000010u,c->r[0]); // 804EC010
  return; // 804EC014
}

// fn_804EC018
void f_804EC018(Ctx* __restrict c) {
  trace_call(0x804EC018u);
  W32(c->r[3]+0x00000014u,c->r[4]); // 804EC018
  return; // 804EC01C
}

// fn_804EC020
void f_804EC020(Ctx* __restrict c) {
  trace_call(0x804EC020u);
  c->r[0]=0u+0x00000000u; // 804EC020
  W32(c->r[3]+0x00000014u,c->r[0]); // 804EC024
  return; // 804EC028
}

// fn_804EC02C
void f_804EC02C(Ctx* __restrict c) {
  trace_call(0x804EC02Cu);
  W32(c->r[3]+0x00000018u,c->r[4]); // 804EC02C
  return; // 804EC030
}

// fn_804EC034
void f_804EC034(Ctx* __restrict c) {
  trace_call(0x804EC034u);
  c->r[0]=0u+0x00000000u; // 804EC034
  W32(c->r[3]+0x00000018u,c->r[0]); // 804EC038
  return; // 804EC03C
}

// fn_804EC040
void f_804EC040(Ctx* __restrict c) {
  trace_call(0x804EC040u);
  c->r[3]=R8(c->r[3]+0x00000095u); // 804EC040
  return; // 804EC044
}

// fn_804EC048
void f_804EC048(Ctx* __restrict c) {
  trace_call(0x804EC048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC048
  c->r[0]=c->lr; // 804EC04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC054
  c->r[31]=c->r[3]|c->r[3]; // 804EC058
  c->r[0]=R32(c->r[3]+0x00000010u); // 804EC05C
  W8(c->r[3]+0x00000094u,c->r[4]); // 804EC060
  cmps(c,0,(int32_t)c->r[0],0); // 804EC064
  if (crb(c,2)) { goto L_804EC078; } // 804EC068
  c->r[3]=c->r[0]|c->r[0]; // 804EC06C
  c->r[4]=c->r[31]|c->r[31]; // 804EC070
  c->lr=0x804EC078u; f_804FCAE8(c); // 804EC074
L_804EC078:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 804EC078
  c->r[3]=c->r[31]|c->r[31]; // 804EC07C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 804EC080
  c->ctr=c->r[12]; // 804EC084
  if (true) { c->lr=0x804EC08Cu; dispatch(c,c->ctr); } // 804EC088
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC08C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC090
  c->lr=c->r[0]; // 804EC094
  c->r[1]=c->r[1]+0x00000010u; // 804EC098
  return; // 804EC09C
}

// fn_804EC0A0
void f_804EC0A0(Ctx* __restrict c) {
  trace_call(0x804EC0A0u);
  return; // 804EC0A0
}

// fn_804EC0A4
void f_804EC0A4(Ctx* __restrict c) {
  trace_call(0x804EC0A4u);
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC0A4
  fcmp(c,0,c->f[1],c->f[0]); // 804EC0A8
  if (!crb(c,1)) { goto L_804EC0B4; } // 804EC0AC
  goto L_804EC0C8; // 804EC0B0
L_804EC0B4:;
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC0B4
  fcmp(c,0,c->f[1],c->f[0]); // 804EC0B8
  if (!crb(c,0)) { goto L_804EC0C4; } // 804EC0BC
  goto L_804EC0C8; // 804EC0C0
L_804EC0C4:;
  c->f[0]=c->f[1]; // 804EC0C4
L_804EC0C8:;
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 804EC0C8
  return; // 804EC0CC
}

// fn_804EC0D0
void f_804EC0D0(Ctx* __restrict c) {
  trace_call(0x804EC0D0u);
  {uint32_t ea=c->r[2]+0x00001970u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EC0D0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC0D4
  fcmp(c,0,c->f[1],c->f[5]); // 804EC0D8
  if (!crb(c,1)) { goto L_804EC0E4; } // 804EC0DC
  goto L_804EC0F8; // 804EC0E0
L_804EC0E4:;
  {uint32_t ea=c->r[2]+0x00001974u; c->f[5]=c->ps1[5]=RF32(ea);} // 804EC0E4
  fcmp(c,0,c->f[1],c->f[5]); // 804EC0E8
  if (!crb(c,0)) { goto L_804EC0F4; } // 804EC0EC
  goto L_804EC0F8; // 804EC0F0
L_804EC0F4:;
  c->f[5]=c->f[1]; // 804EC0F4
L_804EC0F8:;
  c->r[6]=R32(c->r[3]+0x000000A4u); // 804EC0F8
  c->r[0]=R32(c->r[3]+0x000000A8u); // 804EC0FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 804EC100
  if (crb(c,0)) { goto L_804EC110; } // 804EC104
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC108
  goto L_804EC158; // 804EC10C
L_804EC110:;
  c->r[5]=0u+0x43300000u; // 804EC110
  c->r[0]=c->r[0]^0x80000000u; // 804EC114
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804EC118
  c->r[0]=c->r[6]^0x80000000u; // 804EC11C
  {uint32_t ea=c->r[2]+0x00001978u; c->f[4]=RF64(ea);} // 804EC120
  W32(c->r[1]+0x00000008u,c->r[5]); // 804EC124
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC128
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804EC12C
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 804EC130
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 804EC134
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC138
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 804EC13C
  W32(c->r[1]+0x00000010u,c->r[5]); // 804EC140
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804EC144
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 804EC148
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 804EC14C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804EC150
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 804EC154
L_804EC158:;
  c->r[0]=0u+0x00000000u; // 804EC158
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 804EC15C
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[5]);} // 804EC160
  W32(c->r[3]+0x000000A4u,c->r[4]); // 804EC164
  W32(c->r[3]+0x000000A8u,c->r[0]); // 804EC168
  c->r[1]=c->r[1]+0x00000020u; // 804EC16C
  return; // 804EC170
}

// fn_804EC174
void f_804EC174(Ctx* __restrict c) {
  trace_call(0x804EC174u);
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 804EC174
  return; // 804EC178
}

// fn_804EC17C
void f_804EC17C(Ctx* __restrict c) {
  trace_call(0x804EC17Cu);
  W32(c->r[3]+0x000000C4u,c->r[4]); // 804EC17C
  return; // 804EC180
}

// fn_804EC184
void f_804EC184(Ctx* __restrict c) {
  trace_call(0x804EC184u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 804EC184
  c->r[0]=R32(c->r[4]+0x00000034u); // 804EC188
  W32(c->r[3]+0x000000C4u,c->r[0]); // 804EC18C
  return; // 804EC190
}

// fn_804EC194
void f_804EC194(Ctx* __restrict c) {
  trace_call(0x804EC194u);
  {uint32_t ea=c->r[2]+0x00001970u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC194
  fcmp(c,0,c->f[1],c->f[0]); // 804EC198
  if (!crb(c,1)) { goto L_804EC1A4; } // 804EC19C
  goto L_804EC1B8; // 804EC1A0
L_804EC1A4:;
  {uint32_t ea=c->r[2]+0x00001974u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC1A4
  fcmp(c,0,c->f[1],c->f[0]); // 804EC1A8
  if (!crb(c,0)) { goto L_804EC1B4; } // 804EC1AC
  goto L_804EC1B8; // 804EC1B0
L_804EC1B4:;
  c->f[0]=c->f[1]; // 804EC1B4
L_804EC1B8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EC1B8
  c->r[3]=c->r[3]+c->r[0]; // 804EC1BC
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 804EC1C0
  return; // 804EC1C4
}

// fn_804EC1C8
void f_804EC1C8(Ctx* __restrict c) {
  trace_call(0x804EC1C8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804EC1C8
  c->r[3]=c->r[3]+c->r[0]; // 804EC1CC
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 804EC1D0
  return; // 804EC1D4
}

// SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi
void f_804EC1D8(Ctx* __restrict c) {
  trace_call(0x804EC1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC1D8
  c->r[0]=c->lr; // 804EC1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC1E4
  c->r[31]=c->r[4]|c->r[4]; // 804EC1E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC1EC
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EC1F0
  c->ctr=c->r[12]; // 804EC1F4
  if (true) { c->lr=0x804EC1FCu; dispatch(c,c->ctr); } // 804EC1F8
  c->r[4]=c->r[31]|c->r[31]; // 804EC1FC
  c->lr=0x804EC204u; f_804EABC0(c); // 804EC200
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC208
  c->lr=c->r[0]; // 804EC20C
  c->r[1]=c->r[1]+0x00000010u; // 804EC210
  return; // 804EC214
}

// fn_804EC218
void f_804EC218(Ctx* __restrict c) {
  trace_call(0x804EC218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC218
  c->r[0]=c->lr; // 804EC21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC224
  c->r[31]=c->r[4]|c->r[4]; // 804EC228
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC22C
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EC230
  c->ctr=c->r[12]; // 804EC234
  if (true) { c->lr=0x804EC23Cu; dispatch(c,c->ctr); } // 804EC238
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 804EC23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC240
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC244
  c->lr=c->r[0]; // 804EC248
  c->r[1]=c->r[1]+0x00000010u; // 804EC24C
  return; // 804EC250
}

// fn_804EC254
void f_804EC254(Ctx* __restrict c) {
  trace_call(0x804EC254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC254
  c->r[0]=c->lr; // 804EC258
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC25C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC260
  c->r[31]=c->r[4]|c->r[4]; // 804EC264
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC268
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EC26C
  c->ctr=c->r[12]; // 804EC270
  if (true) { c->lr=0x804EC278u; dispatch(c,c->ctr); } // 804EC274
  W32(c->r[3]+0x00000030u,c->r[31]); // 804EC278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC280
  c->lr=c->r[0]; // 804EC284
  c->r[1]=c->r[1]+0x00000010u; // 804EC288
  return; // 804EC28C
}

// fn_804EC290
void f_804EC290(Ctx* __restrict c) {
  trace_call(0x804EC290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC290
  c->r[0]=c->lr; // 804EC294
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EC298
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EC29C
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EC2A0
  c->r[30]=c->r[4]|c->r[4]; // 804EC2A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EC2A8
  c->r[29]=c->r[3]|c->r[3]; // 804EC2AC
  c->r[3]=R32(c->r[4]+0x00000008u); // 804EC2B0
  c->r[4]=R32(c->r[4]+0x00000010u); // 804EC2B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC2B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804EC2BC
  c->ctr=c->r[12]; // 804EC2C0
  if (true) { c->lr=0x804EC2C8u; dispatch(c,c->ctr); } // 804EC2C4
  cmps(c,0,(int32_t)c->r[3],0); // 804EC2C8
  c->r[31]=c->r[3]|c->r[3]; // 804EC2CC
  if (crb(c,2)) { goto L_804EC340; } // 804EC2D0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 804EC2D4
  c->r[5]=R32(c->r[30]+0x00000010u); // 804EC2D8
  c->lr=0x804EC2E0u; f_802DC484(c); // 804EC2DC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804EC2E0
  c->r[0]=R32(c->r[30]+0x00000000u); // 804EC2E4
  W32(c->r[29]+0x00000028u,c->r[3]); // 804EC2E8
  c->r[3]=R32(c->r[30]+0x00000000u); // 804EC2EC
  cmps(c,0,(int32_t)c->r[0],0); // 804EC2F0
  c->r[5]=R32(c->r[30]+0x00000004u); // 804EC2F4
  c->r[4]=R32(c->r[30]+0x00000008u); // 804EC2F8
  c->r[0]=R32(c->r[30]+0x00000010u); // 804EC2FC
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 804EC300
  W32(c->r[29]+0x00000020u,c->r[5]); // 804EC304
  W32(c->r[29]+0x00000024u,c->r[4]); // 804EC308
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 804EC30C
  W32(c->r[29]+0x00000028u,c->r[31]); // 804EC310
  if (crb(c,2)) { goto L_804EC340; } // 804EC314
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC318
  c->r[4]=c->r[31]|c->r[31]; // 804EC31C
  c->r[5]=R32(c->r[29]+0x00000098u); // 804EC320
  c->r[12]=R32(c->r[12]+0x00000014u); // 804EC324
  c->ctr=c->r[12]; // 804EC328
  if (true) { c->lr=0x804EC330u; dispatch(c,c->ctr); } // 804EC32C
  cmps(c,0,(int32_t)c->r[3],4); // 804EC330
  if (!crb(c,1)) { goto L_804EC33C; } // 804EC334
  c->r[3]=0u+0x00000004u; // 804EC338
L_804EC33C:;
  W8(c->r[29]+0x00000095u,c->r[3]); // 804EC33C
L_804EC340:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EC340
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EC344
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EC348
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EC34C
  c->lr=c->r[0]; // 804EC350
  c->r[1]=c->r[1]+0x00000020u; // 804EC354
  return; // 804EC358
}

// fn_804EC35C
void f_804EC35C(Ctx* __restrict c) {
  trace_call(0x804EC35Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 804EC35C
  c->r[6]=c->r[3]|c->r[3]; // 804EC360
  cmps(c,0,(int32_t)c->r[0],0); // 804EC364
  if (!crb(c,2)) { goto L_804EC374; } // 804EC368
  c->r[3]=0u+0x00000000u; // 804EC36C
  return; // 804EC370
L_804EC374:;
  c->r[3]=c->r[0]|c->r[0]; // 804EC374
  c->r[5]=c->r[4]|c->r[4]; // 804EC378
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC37C
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 804EC380
  c->r[12]=R32(c->r[12]+0x00000010u); // 804EC384
  c->ctr=c->r[12]; // 804EC388
  if (true) { dispatch(c,c->ctr); return; } // 804EC38C
}

// fn_804EC390
void f_804EC390(Ctx* __restrict c) {
  trace_call(0x804EC390u);
  return; // 804EC390
}

// fn_804EC394
void f_804EC394(Ctx* __restrict c) {
  trace_call(0x804EC394u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 804EC394
  c->r[0]=0u-c->r[3]; // 804EC398
  c->r[0]=c->r[0]|c->r[3]; // 804EC39C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EC3A0
  return; // 804EC3A4
}

// fn_804EC3A8
void f_804EC3A8(Ctx* __restrict c) {
  trace_call(0x804EC3A8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804EC3A8
  c->r[0]=0u-c->r[3]; // 804EC3AC
  c->r[0]=c->r[0]|c->r[3]; // 804EC3B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804EC3B4
  return; // 804EC3B8
}

// fn_804EC3BC
void f_804EC3BC(Ctx* __restrict c) {
  trace_call(0x804EC3BCu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 804EC3BC
  f_804FC5FC(c); return; // 804EC3C0
}

// fn_804EC3C4
void f_804EC3C4(Ctx* __restrict c) {
  trace_call(0x804EC3C4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804EC3C4
  f_804FC5FC(c); return; // 804EC3C8
}

// SetId__Q44nw4r3snd6detail10BasicSoundFUl
void f_804EC3CC(Ctx* __restrict c) {
  trace_call(0x804EC3CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC3CC
  c->r[0]=c->lr; // 804EC3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC3D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC3D8
  c->r[31]=c->r[4]|c->r[4]; // 804EC3DC
  W32(c->r[3]+0x00000098u,c->r[4]); // 804EC3E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804EC3E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 804EC3E8
  c->ctr=c->r[12]; // 804EC3EC
  if (true) { c->lr=0x804EC3F4u; dispatch(c,c->ctr); } // 804EC3F0
  W32(c->r[3]+0x000000D0u,c->r[31]); // 804EC3F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC3F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC3FC
  c->lr=c->r[0]; // 804EC400
  c->r[1]=c->r[1]+0x00000010u; // 804EC404
  return; // 804EC408
}

// fn_804EC40C
void f_804EC40C(Ctx* __restrict c) {
  trace_call(0x804EC40Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC40C
  c->r[0]=c->lr; // 804EC410
  cmps(c,0,(int32_t)c->r[3],0); // 804EC414
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC41C
  c->r[31]=c->r[3]|c->r[3]; // 804EC420
  if (crb(c,2)) { goto L_804EC434; } // 804EC424
  cmps(c,0,(int32_t)c->r[4],0); // 804EC428
  if (!crb(c,1)) { goto L_804EC434; } // 804EC42C
  c->lr=0x804EC434u; f_803A9400(c); // 804EC430
L_804EC434:;
  c->r[3]=c->r[31]|c->r[31]; // 804EC434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC438
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC43C
  c->lr=c->r[0]; // 804EC440
  c->r[1]=c->r[1]+0x00000010u; // 804EC444
  return; // 804EC448
}

// fn_804EC44C
void f_804EC44C(Ctx* __restrict c) {
  trace_call(0x804EC44Cu);
  c->r[3]=c->r[13]+0xFFFFE4F8u; // 804EC44C
  return; // 804EC450
}

// fn_804EC454
void f_804EC454(Ctx* __restrict c) {
  trace_call(0x804EC454u);
  c->r[0]=0u+0x00000000u; // 804EC454
  W32(c->r[13]+0xFFFFE4F8u,c->r[0]); // 804EC458
  return; // 804EC45C
}

// fn_804EC460
void f_804EC460(Ctx* __restrict c) {
  trace_call(0x804EC460u);
  c->r[4]=0u+0x0000006Fu; // 804EC460
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC464
  c->r[0]=0u+0x43300000u; // 804EC468
  {uint32_t ea=c->r[2]+0x00001980u; c->f[2]=RF64(ea);} // 804EC46C
  c->r[3]=c->r[4]^0x80000000u; // 804EC470
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EC474
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EC478
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EC47C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804EC480
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EC484
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EC488
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804EC48C
  c->r[3]=R32(c->r[1]+0x00000014u); // 804EC490
  cmps(c,0,(int32_t)c->r[3],111); // 804EC494
  if (!crb(c,1)) { goto L_804EC4A0; } // 804EC498
  goto L_804EC4A8; // 804EC49C
L_804EC4A0:;
  c->r[0]=sraw(c,c->r[3],31); // 804EC4A0
  c->r[4]=c->r[3]&~c->r[0]; // 804EC4A4
L_804EC4A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804EC4A8
  c->r[3]=0u+0x806B0000u; // 804EC4AC
  c->r[3]=c->r[3]+0xFFFFBF10u; // 804EC4B0
  c->r[7]=c->r[3]+c->r[0]; // 804EC4B4
  c->r[8]=R16(c->r[3]+c->r[0]); // 804EC4B8
  c->r[6]=R16(c->r[7]+0x00000002u); // 804EC4BC
  c->r[4]=R16(c->r[7]+0x00000004u); // 804EC4C0
  c->r[3]=R16(c->r[7]+0x00000006u); // 804EC4C4
  c->r[0]=R16(c->r[7]+0x00000008u); // 804EC4C8
  W16(c->r[5]+0x00000000u,c->r[8]); // 804EC4CC
  W16(c->r[5]+0x00000002u,c->r[6]); // 804EC4D0
  W16(c->r[5]+0x00000004u,c->r[4]); // 804EC4D4
  W16(c->r[5]+0x00000006u,c->r[3]); // 804EC4D8
  W16(c->r[5]+0x00000008u,c->r[0]); // 804EC4DC
  c->r[1]=c->r[1]+0x00000020u; // 804EC4E0
  return; // 804EC4E4
}

// fn_804EC4E8
void f_804EC4E8(Ctx* __restrict c) {
  trace_call(0x804EC4E8u);
  c->r[4]=0u+0x00000060u; // 804EC4E8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC4EC
  c->r[0]=0u+0x43300000u; // 804EC4F0
  {uint32_t ea=c->r[2]+0x00001980u; c->f[2]=RF64(ea);} // 804EC4F4
  c->r[3]=c->r[4]^0x80000000u; // 804EC4F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EC4FC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EC500
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EC504
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804EC508
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EC50C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EC510
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804EC514
  c->r[3]=R32(c->r[1]+0x00000014u); // 804EC518
  cmps(c,0,(int32_t)c->r[3],96); // 804EC51C
  if (!crb(c,1)) { goto L_804EC528; } // 804EC520
  goto L_804EC530; // 804EC524
L_804EC528:;
  c->r[0]=sraw(c,c->r[3],31); // 804EC528
  c->r[4]=c->r[3]&~c->r[0]; // 804EC52C
L_804EC530:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804EC530
  c->r[3]=0u+0x806B0000u; // 804EC534
  c->r[3]=c->r[3]+0xFFFFC370u; // 804EC538
  c->r[7]=c->r[3]+c->r[0]; // 804EC53C
  c->r[8]=R16(c->r[3]+c->r[0]); // 804EC540
  c->r[6]=R16(c->r[7]+0x00000002u); // 804EC544
  c->r[4]=R16(c->r[7]+0x00000004u); // 804EC548
  c->r[3]=R16(c->r[7]+0x00000006u); // 804EC54C
  c->r[0]=R16(c->r[7]+0x00000008u); // 804EC550
  W16(c->r[5]+0x00000000u,c->r[8]); // 804EC554
  W16(c->r[5]+0x00000002u,c->r[6]); // 804EC558
  W16(c->r[5]+0x00000004u,c->r[4]); // 804EC55C
  W16(c->r[5]+0x00000006u,c->r[3]); // 804EC560
  W16(c->r[5]+0x00000008u,c->r[0]); // 804EC564
  c->r[1]=c->r[1]+0x00000020u; // 804EC568
  return; // 804EC56C
}

// fn_804EC570
void f_804EC570(Ctx* __restrict c) {
  trace_call(0x804EC570u);
  {uint32_t ea=c->r[2]+0x00001988u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC570
  c->r[4]=0u+0x00000079u; // 804EC574
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC578
  c->r[3]=c->r[4]^0x80000000u; // 804EC57C
  c->r[0]=0u+0x43300000u; // 804EC580
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EC584
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EC588
  {uint32_t ea=c->r[2]+0x00001980u; c->f[2]=RF64(ea);} // 804EC58C
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EC590
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804EC594
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EC598
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804EC59C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EC5A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EC5A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804EC5A8
  c->r[3]=R32(c->r[1]+0x00000014u); // 804EC5AC
  cmps(c,0,(int32_t)c->r[3],121); // 804EC5B0
  if (!crb(c,1)) { goto L_804EC5BC; } // 804EC5B4
  goto L_804EC5C4; // 804EC5B8
L_804EC5BC:;
  c->r[0]=sraw(c,c->r[3],31); // 804EC5BC
  c->r[4]=c->r[3]&~c->r[0]; // 804EC5C0
L_804EC5C4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804EC5C4
  c->r[3]=0u+0x806B0000u; // 804EC5C8
  c->r[3]=c->r[3]+0xFFFFC73Cu; // 804EC5CC
  c->r[7]=c->r[3]+c->r[0]; // 804EC5D0
  c->r[8]=R16(c->r[3]+c->r[0]); // 804EC5D4
  c->r[6]=R16(c->r[7]+0x00000002u); // 804EC5D8
  c->r[4]=R16(c->r[7]+0x00000004u); // 804EC5DC
  c->r[3]=R16(c->r[7]+0x00000006u); // 804EC5E0
  c->r[0]=R16(c->r[7]+0x00000008u); // 804EC5E4
  W16(c->r[5]+0x00000000u,c->r[8]); // 804EC5E8
  W16(c->r[5]+0x00000002u,c->r[6]); // 804EC5EC
  W16(c->r[5]+0x00000004u,c->r[4]); // 804EC5F0
  W16(c->r[5]+0x00000006u,c->r[3]); // 804EC5F4
  W16(c->r[5]+0x00000008u,c->r[0]); // 804EC5F8
  c->r[1]=c->r[1]+0x00000020u; // 804EC5FC
  return; // 804EC600
}

// fn_804EC604
void f_804EC604(Ctx* __restrict c) {
  trace_call(0x804EC604u);
  {uint32_t ea=c->r[2]+0x00001988u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC604
  c->r[4]=0u+0x0000005Cu; // 804EC608
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC60C
  c->r[3]=c->r[4]^0x80000000u; // 804EC610
  c->r[0]=0u+0x43300000u; // 804EC614
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EC618
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EC61C
  {uint32_t ea=c->r[2]+0x00001980u; c->f[2]=RF64(ea);} // 804EC620
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EC624
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804EC628
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EC62C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804EC630
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EC634
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EC638
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804EC63C
  c->r[3]=R32(c->r[1]+0x00000014u); // 804EC640
  cmps(c,0,(int32_t)c->r[3],92); // 804EC644
  if (!crb(c,1)) { goto L_804EC650; } // 804EC648
  goto L_804EC658; // 804EC64C
L_804EC650:;
  c->r[0]=sraw(c,c->r[3],31); // 804EC650
  c->r[4]=c->r[3]&~c->r[0]; // 804EC654
L_804EC658:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804EC658
  c->r[3]=0u+0x806B0000u; // 804EC65C
  c->r[3]=c->r[3]+0xFFFFCC00u; // 804EC660
  c->r[7]=c->r[3]+c->r[0]; // 804EC664
  c->r[8]=R16(c->r[3]+c->r[0]); // 804EC668
  c->r[6]=R16(c->r[7]+0x00000002u); // 804EC66C
  c->r[4]=R16(c->r[7]+0x00000004u); // 804EC670
  c->r[3]=R16(c->r[7]+0x00000006u); // 804EC674
  c->r[0]=R16(c->r[7]+0x00000008u); // 804EC678
  W16(c->r[5]+0x00000000u,c->r[8]); // 804EC67C
  W16(c->r[5]+0x00000002u,c->r[6]); // 804EC680
  W16(c->r[5]+0x00000004u,c->r[4]); // 804EC684
  W16(c->r[5]+0x00000006u,c->r[3]); // 804EC688
  W16(c->r[5]+0x00000008u,c->r[0]); // 804EC68C
  c->r[1]=c->r[1]+0x00000020u; // 804EC690
  return; // 804EC694
}

// fn_804EC698
void f_804EC698(Ctx* __restrict c) {
  trace_call(0x804EC698u);
  {uint32_t ea=c->r[2]+0x00001988u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC698
  c->r[4]=0u+0x0000005Cu; // 804EC69C
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC6A0
  c->r[3]=c->r[4]^0x80000000u; // 804EC6A4
  c->r[0]=0u+0x43300000u; // 804EC6A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 804EC6AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804EC6B0
  {uint32_t ea=c->r[2]+0x00001980u; c->f[2]=RF64(ea);} // 804EC6B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 804EC6B8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 804EC6BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 804EC6C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 804EC6C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804EC6C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804EC6CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804EC6D0
  c->r[3]=R32(c->r[1]+0x00000014u); // 804EC6D4
  cmps(c,0,(int32_t)c->r[3],92); // 804EC6D8
  if (!crb(c,1)) { goto L_804EC6E4; } // 804EC6DC
  goto L_804EC6EC; // 804EC6E0
L_804EC6E4:;
  c->r[0]=sraw(c,c->r[3],31); // 804EC6E4
  c->r[4]=c->r[3]&~c->r[0]; // 804EC6E8
L_804EC6EC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 804EC6EC
  c->r[3]=0u+0x806B0000u; // 804EC6F0
  c->r[3]=c->r[3]+0xFFFFCFA4u; // 804EC6F4
  c->r[7]=c->r[3]+c->r[0]; // 804EC6F8
  c->r[8]=R16(c->r[3]+c->r[0]); // 804EC6FC
  c->r[6]=R16(c->r[7]+0x00000002u); // 804EC700
  c->r[4]=R16(c->r[7]+0x00000004u); // 804EC704
  c->r[3]=R16(c->r[7]+0x00000006u); // 804EC708
  c->r[0]=R16(c->r[7]+0x00000008u); // 804EC70C
  W16(c->r[5]+0x00000000u,c->r[8]); // 804EC710
  W16(c->r[5]+0x00000002u,c->r[6]); // 804EC714
  W16(c->r[5]+0x00000004u,c->r[4]); // 804EC718
  W16(c->r[5]+0x00000006u,c->r[3]); // 804EC71C
  W16(c->r[5]+0x00000008u,c->r[0]); // 804EC720
  c->r[1]=c->r[1]+0x00000020u; // 804EC724
  return; // 804EC728
}

// fn_804EC72C
void f_804EC72C(Ctx* __restrict c) {
  trace_call(0x804EC72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC72C
  c->r[0]=c->lr; // 804EC730
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC734
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804EC738
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804EC73C
  if (!crb(c,2)) { goto L_804EC790; } // 804EC740
  c->r[6]=0u+0x80830000u; // 804EC744
  c->r[0]=0u+0x00000000u; // 804EC748
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804EC74C
  c->r[4]=0u+0x804F0000u; // 804EC750
  W32(c->r[3]+0x00000008u,c->r[0]); // 804EC754
  c->r[7]=c->r[3]+0x00000008u; // 804EC758
  c->r[5]=0u+0x80830000u; // 804EC75C
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804EC760
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804EC764
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804EC768
  W32(c->r[6]+0xFFFF86B0u,c->r[0]); // 804EC76C
  W32(c->r[3]+0x00000004u,c->r[0]); // 804EC770
  W32(c->r[3]+0x00000008u,c->r[7]); // 804EC774
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804EC778
  W8(c->r[3]+0x00000010u,c->r[0]); // 804EC77C
  W32(c->r[3]+0x00000014u,c->r[0]); // 804EC780
  c->lr=0x804EC788u; f_803A92B8(c); // 804EC784
  c->r[0]=0u+0x00000001u; // 804EC788
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804EC78C
L_804EC790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC790
  c->r[3]=0u+0x80830000u; // 804EC794
  c->r[3]=c->r[3]+0xFFFF86B0u; // 804EC798
  c->lr=c->r[0]; // 804EC79C
  c->r[1]=c->r[1]+0x00000010u; // 804EC7A0
  return; // 804EC7A4
}

// fn_804EC7A8
void f_804EC7A8(Ctx* __restrict c) {
  trace_call(0x804EC7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC7A8
  c->r[0]=c->lr; // 804EC7AC
  cmps(c,0,(int32_t)c->r[3],0); // 804EC7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC7B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC7B8
  c->r[31]=c->r[4]|c->r[4]; // 804EC7BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EC7C0
  c->r[30]=c->r[3]|c->r[3]; // 804EC7C4
  if (crb(c,2)) { goto L_804EC7EC; } // 804EC7C8
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 804EC7CC
  if (crb(c,2)) { goto L_804EC7DC; } // 804EC7D0
  c->r[4]=0u+0x00000000u; // 804EC7D4
  c->lr=0x804EC7DCu; f_80507DCC(c); // 804EC7D8
L_804EC7DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804EC7DC
  if (!crb(c,1)) { goto L_804EC7EC; } // 804EC7E0
  c->r[3]=c->r[30]|c->r[30]; // 804EC7E4
  c->lr=0x804EC7ECu; f_803A9400(c); // 804EC7E8
L_804EC7EC:;
  c->r[3]=c->r[30]|c->r[30]; // 804EC7EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC7F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EC7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC7F8
  c->lr=c->r[0]; // 804EC7FC
  c->r[1]=c->r[1]+0x00000010u; // 804EC800
  return; // 804EC804
}

// fn_804EC808
void f_804EC808(Ctx* __restrict c) {
  trace_call(0x804EC808u);
  c->r[0]=c->r[4]+0x00000001u; // 804EC808
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 804EC80C
  return; // 804EC810
}

// fn_804EC814
void f_804EC814(Ctx* __restrict c) {
  trace_call(0x804EC814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC814
  c->r[0]=c->lr; // 804EC818
  W32(c->r[1]+0x00000024u,c->r[0]); // 804EC81C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804EC820
  W32(c->r[1]+0x00000018u,c->r[30]); // 804EC824
  c->r[30]=c->r[5]|c->r[5]; // 804EC828
  W32(c->r[1]+0x00000014u,c->r[29]); // 804EC82C
  c->r[29]=c->r[4]|c->r[4]; // 804EC830
  W32(c->r[1]+0x00000010u,c->r[28]); // 804EC834
  c->r[28]=c->r[3]|c->r[3]; // 804EC838
  c->lr=0x804EC840u; f_8037BBA4(c); // 804EC83C
  c->r[0]=R8(c->r[28]+0x00000010u); // 804EC840
  c->r[31]=c->r[3]|c->r[3]; // 804EC844
  cmps(c,0,(int32_t)c->r[0],0); // 804EC848
  if (crb(c,2)) { goto L_804EC858; } // 804EC84C
  c->lr=0x804EC854u; f_8037BBCC(c); // 804EC850
  goto L_804EC888; // 804EC854
L_804EC858:;
  c->r[3]=c->r[28]|c->r[28]; // 804EC858
  c->r[4]=c->r[29]|c->r[29]; // 804EC85C
  c->r[5]=c->r[30]|c->r[30]; // 804EC860
  c->r[6]=0u+0x00000100u; // 804EC864
  c->lr=0x804EC86Cu; f_804F0AC8(c); // 804EC868
  c->r[0]=0u+0x00000001u; // 804EC86C
  W32(c->r[28]+0x00000014u,c->r[3]); // 804EC870
  c->r[3]=c->r[31]|c->r[31]; // 804EC874
  W32(c->r[28]+0x00000018u,c->r[29]); // 804EC878
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 804EC87C
  W8(c->r[28]+0x00000010u,c->r[0]); // 804EC880
  c->lr=0x804EC888u; f_8037BBCC(c); // 804EC884
L_804EC888:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804EC888
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804EC88C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804EC890
  c->r[29]=R32(c->r[1]+0x00000014u); // 804EC894
  c->r[28]=R32(c->r[1]+0x00000010u); // 804EC898
  c->lr=c->r[0]; // 804EC89C
  c->r[1]=c->r[1]+0x00000020u; // 804EC8A0
  return; // 804EC8A4
}

// fn_804EC8A8
void f_804EC8A8(Ctx* __restrict c) {
  trace_call(0x804EC8A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC8A8
  c->r[0]=c->lr; // 804EC8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC8B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC8B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EC8B8
  c->r[30]=c->r[3]+0x00000008u; // 804EC8BC
  c->r[31]=R32(c->r[3]+0x00000008u); // 804EC8C0
  goto L_804EC8DC; // 804EC8C4
L_804EC8C8:;
  c->r[3]=c->r[31]|c->r[31]; // 804EC8C8
  c->r[31]=R32(c->r[31]+0x00000000u); // 804EC8CC
  c->r[3]=c->r[3]+0xFFFFFF08u; // 804EC8D0
  c->r[4]=0u+0x00000001u; // 804EC8D4
  c->lr=0x804EC8DCu; f_804ECA2C(c); // 804EC8D8
L_804EC8DC:;
  cmpu(c,0,c->r[31],c->r[30]); // 804EC8DC
  if (!crb(c,2)) { IRQCHK(c); goto L_804EC8C8; } // 804EC8E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 804EC8E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804EC8E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804EC8EC
  c->lr=c->r[0]; // 804EC8F0
  c->r[1]=c->r[1]+0x00000010u; // 804EC8F4
  return; // 804EC8F8
}

// fn_804EC8FC
void f_804EC8FC(Ctx* __restrict c) {
  trace_call(0x804EC8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804EC8FC
  c->r[0]=c->lr; // 804EC900
  {uint32_t ea=c->r[2]+0x00001990u; c->f[0]=c->ps1[0]=RF32(ea);} // 804EC904
  c->r[7]=0u+0x00000001u; // 804EC908
  W32(c->r[1]+0x00000014u,c->r[0]); // 804EC90C
  c->r[6]=0u+0x0000003Cu; // 804EC910
  {uint32_t ea=c->r[2]+0x00001994u; c->f[2]=c->ps1[2]=RF32(ea);} // 804EC914
  c->r[0]=0u+0x000000FFu; // 804EC918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804EC91C
  c->r[31]=0u+0x00000000u; // 804EC920
  {uint32_t ea=c->r[2]+0x000019B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804EC924
  W32(c->r[1]+0x00000008u,c->r[30]); // 804EC928
  c->r[30]=c->r[3]|c->r[3]; // 804EC92C
  W32(c->r[3]+0x000000F4u,c->r[31]); // 804EC930
  W32(c->r[3]+0x000000E0u,c->r[4]); // 804EC934
  W32(c->r[3]+0x000000E4u,c->r[5]); // 804EC938
  W32(c->r[3]+0x000000E8u,c->r[31]); // 804EC93C
  W32(c->r[3]+0x000000ECu,c->r[31]); // 804EC940
  W8(c->r[3]+0x00000035u,c->r[31]); // 804EC944
  W8(c->r[3]+0x00000038u,c->r[7]); // 804EC948
  W8(c->r[3]+0x00000039u,c->r[31]); // 804EC94C
  W8(c->r[3]+0x0000003Au,c->r[31]); // 804EC950
  W32(c->r[3]+0x000000D0u,c->r[31]); // 804EC954
  W32(c->r[3]+0x000000C8u,c->r[6]); // 804EC958
  W32(c->r[3]+0x000000CCu,c->r[6]); // 804EC95C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 804EC960
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 804EC964
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 804EC968
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[2]);} // 804EC96C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 804EC970
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 804EC974
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 804EC978
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 804EC97C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 804EC980
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 804EC984
  W8(c->r[3]+0x0000003Bu,c->r[31]); // 804EC988
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 804EC98C
  W8(c->r[3]+0x0000003Cu,c->r[31]); // 804EC990
  W32(c->r[3]+0x00000058u,c->r[7]); // 804EC994
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 804EC998
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 804EC99C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 804EC9A0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 804EC9A4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 804EC9A8
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 804EC9AC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 804EC9B0
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 804EC9B4
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 804EC9B8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 804EC9BC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 804EC9C0
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 804EC9C4
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 804EC9C8
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 804EC9CC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 804EC9D0
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 804EC9D4
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 804EC9D8
  W8(c->r[3]+0x000000C0u,c->r[0]); // 804EC9DC
  W8(c->r[3]+0x000000C1u,c->r[0]); // 804EC9E0
  W16(c->r[3]+0x000000C2u,c->r[31]); // 804EC9E4
  W16(c->r[3]+0x000000C4u,c->r[31]); // 804EC9E8
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 804EC9EC
  W32(c->r[3]+0x000000ACu,c->r[31]); // 804EC9F0
  W32(c->r[3]+0x000000A8u,c->r[31]); // 804EC9F4
  c->lr=0x804EC9FCu; f_804EE208(c); // 804EC9F8
  c->r[3]=c->r[30]+0x0000001Cu; // 804EC9FC
  c->lr=0x804ECA04u; f_804F0D80(c); // 804ECA00
  W8(c->r[30]+0x00000034u,c->r[31]); // 804ECA04
  W32(c->r[30]+0x000000D4u,c->r[31]); // 804ECA08
  W32(c->r[30]+0x000000D8u,c->r[31]); // 804ECA0C
  W32(c->r[30]+0x000000DCu,c->r[31]); // 804ECA10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804ECA14
  c->r[30]=R32(c->r[1]+0x00000008u); // 804ECA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 804ECA1C
  c->lr=c->r[0]; // 804ECA20
  c->r[1]=c->r[1]+0x00000010u; // 804ECA24
  return; // 804ECA28
}

// fn_804ECA2C
void f_804ECA2C(Ctx* __restrict c) {
  trace_call(0x804ECA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ECA2C
  c->r[0]=c->lr; // 804ECA30
  W32(c->r[1]+0x00000134u,c->r[0]); // 804ECA34
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 804ECA38
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 804ECA3C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 804ECA40
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 804ECA44
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 804ECA48
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 804ECA4C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 804ECA50
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 804ECA54
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 804ECA58
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 804ECA5C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[26]);} // 804ECA60
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,26,ea,0,0);} // 804ECA64
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[25]);} // 804ECA68
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,25,ea,0,0);} // 804ECA6C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[24]);} // 804ECA70
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,24,ea,0,0);} // 804ECA74
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[23]);} // 804ECA78
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,23,ea,0,0);} // 804ECA7C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[22]);} // 804ECA80
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,22,ea,0,0);} // 804ECA84
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[21]);} // 804ECA88
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,21,ea,0,0);} // 804ECA8C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[20]);} // 804ECA90
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,20,ea,0,0);} // 804ECA94
  c->r[5]=0u+0x43300000u; // 804ECA98
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 804ECA9C
  c->r[31]=c->r[4]|c->r[4]; // 804ECAA0
  W32(c->r[1]+0x00000068u,c->r[30]); // 804ECAA4
  c->r[30]=c->r[3]|c->r[3]; // 804ECAA8
  W32(c->r[1]+0x00000064u,c->r[29]); // 804ECAAC
  W32(c->r[1]+0x00000060u,c->r[28]); // 804ECAB0
  c->r[0]=R8(c->r[3]+0x00000036u); // 804ECAB4
  W32(c->r[1]+0x00000048u,c->r[5]); // 804ECAB8
  cmps(c,0,(int32_t)c->r[0],0); // 804ECABC
  W32(c->r[1]+0x00000050u,c->r[5]); // 804ECAC0
  if (crb(c,2)) { goto L_804ED158; } // 804ECAC4
  c->r[0]=R8(c->r[3]+0x00000035u); // 804ECAC8
  cmps(c,0,(int32_t)c->r[0],0); // 804ECACC
  if (crb(c,2)) { goto L_804ECAD8; } // 804ECAD0
  c->r[31]=0u+0x00000000u; // 804ECAD4
L_804ECAD8:;
  c->r[3]=c->r[3]+0x0000001Cu; // 804ECAD8
  c->lr=0x804ECAE0u; f_804F0E54(c); // 804ECADC
  c->r[3]=R16(c->r[30]+0x000000C4u); // 804ECAE0
  c->f[31]=c->f[1]; // 804ECAE4
  c->r[0]=R16(c->r[30]+0x000000C2u); // 804ECAE8
  cmpu(c,0,c->r[3],c->r[0]); // 804ECAEC
  if (!crb(c,0)) { goto L_804ECAFC; } // 804ECAF0
  c->r[0]=c->r[3]+0x00000001u; // 804ECAF4
  W16(c->r[30]+0x000000C4u,c->r[0]); // 804ECAF8
L_804ECAFC:;
  {uint32_t ea=c->r[2]+0x00001994u; c->f[30]=c->ps1[30]=RF32(ea);} // 804ECAFC
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECB00
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECB04
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 804ECB08
  c->r[4]=R16(c->r[30]+0x000000C2u); // 804ECB0C
  c->r[3]=R16(c->r[30]+0x000000C4u); // 804ECB10
  cmpu(c,0,c->r[3],c->r[4]); // 804ECB14
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 804ECB18
  if (crb(c,0)) { goto L_804ECB28; } // 804ECB1C
  c->r[0]=R8(c->r[30]+0x000000C1u); // 804ECB20
  goto L_804ECB44; // 804ECB24
L_804ECB28:;
  c->r[5]=R8(c->r[30]+0x000000C0u); // 804ECB28
  c->r[0]=R8(c->r[30]+0x000000C1u); // 804ECB2C
  c->r[0]=c->r[0]-c->r[5]; // 804ECB30
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 804ECB34
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 804ECB38
  c->r[0]=c->r[5]+c->r[0]; // 804ECB3C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 804ECB40
L_804ECB44:;
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 804ECB44
  c->r[3]=c->r[30]|c->r[30]; // 804ECB48
  {uint32_t ea=c->r[2]+0x000019A8u; c->f[2]=RF64(ea);} // 804ECB4C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 804ECB50
  {uint32_t ea=c->r[2]+0x00001998u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECB54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804ECB58
  {uint32_t ea=c->r[2]+0x00001994u; c->f[29]=c->ps1[29]=RF32(ea);} // 804ECB5C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804ECB60
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 804ECB64
  c->lr=0x804ECB6Cu; f_804EE260(c); // 804ECB68
  c->lr=0x804ECB70u; f_80505AB0(c); // 804ECB6C
  c->r[0]=R8(c->r[30]+0x00000034u); // 804ECB70
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 804ECB74
  cmpu(c,0,c->r[0],0x00000001u); // 804ECB78
  if (!crb(c,2)) { goto L_804ECB90; } // 804ECB7C
  {uint32_t ea=c->r[2]+0x0000199Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECB80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 804ECB84
  c->lr=0x804ECB8Cu; f_80505AB0(c); // 804ECB88
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 804ECB8C
L_804ECB90:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 804ECB90
  cmps(c,0,(int32_t)c->r[0],4); // 804ECB94
  if (!crb(c,2)) { goto L_804ECDBC; } // 804ECB98
  c->r[0]=R32(c->r[30]+0x000000E0u); // 804ECB9C
  cmps(c,0,(int32_t)c->r[0],0); // 804ECBA0
  if (crb(c,2)) { goto L_804ECCB0; } // 804ECBA4
  {uint32_t ea=c->r[2]+0x00001990u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECBA8
  fcmp(c,0,c->f[0],c->f[29]); // 804ECBAC
  if (!crb(c,2)) { goto L_804ECDBC; } // 804ECBB0
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ECBB4
  cmps(c,0,(int32_t)c->r[3],0); // 804ECBB8
  if (crb(c,2)) { goto L_804ED158; } // 804ECBBC
  c->lr=0x804ECBC4u; f_805036B8(c); // 804ECBC0
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ECBC4
  c->lr=0x804ECBCCu; f_80503354(c); // 804ECBC8
  c->r[12]=R32(c->r[30]+0x000000E0u); // 804ECBCC
  c->r[0]=0u+0x00000000u; // 804ECBD0
  W32(c->r[30]+0x000000F0u,c->r[0]); // 804ECBD4
  cmps(c,0,(int32_t)c->r[12],0); // 804ECBD8
  W8(c->r[30]+0x00000035u,c->r[0]); // 804ECBDC
  W8(c->r[30]+0x00000036u,c->r[0]); // 804ECBE0
  if (crb(c,2)) { goto L_804ECBFC; } // 804ECBE4
  c->r[3]=c->r[30]|c->r[30]; // 804ECBE8
  c->r[5]=R32(c->r[30]+0x000000E4u); // 804ECBEC
  c->r[4]=0u+0x00000000u; // 804ECBF0
  c->ctr=c->r[12]; // 804ECBF4
  if (true) { c->lr=0x804ECBFCu; dispatch(c,c->ctr); } // 804ECBF8
L_804ECBFC:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 804ECBFC
  cmps(c,0,(int32_t)c->r[3],0); // 804ECC00
  if (crb(c,2)) { goto L_804ECC1C; } // 804ECC04
  c->r[12]=R32(c->r[3]+0x00000000u); // 804ECC08
  c->r[4]=R32(c->r[30]+0x000000ECu); // 804ECC0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804ECC10
  c->ctr=c->r[12]; // 804ECC14
  if (true) { c->lr=0x804ECC1Cu; dispatch(c,c->ctr); } // 804ECC18
L_804ECC1C:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 804ECC1C
  cmps(c,0,(int32_t)c->r[0],0); // 804ECC20
  if (crb(c,2)) { goto L_804ED158; } // 804ECC24
  c->r[7]=0u+0x00000000u; // 804ECC28
  W8(c->r[30]+0x00000037u,c->r[7]); // 804ECC2C
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ECC30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ECC34
  if (!crb(c,2)) { goto L_804ECC84; } // 804ECC38
  c->r[6]=0u+0x80830000u; // 804ECC3C
  c->r[4]=0u+0x804F0000u; // 804ECC40
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ECC44
  c->r[5]=0u+0x80830000u; // 804ECC48
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ECC4C
  c->r[8]=c->r[3]+0x00000008u; // 804ECC50
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ECC54
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ECC58
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ECC5C
  W32(c->r[6]+0xFFFF86B0u,c->r[7]); // 804ECC60
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ECC64
  W32(c->r[3]+0x00000008u,c->r[8]); // 804ECC68
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 804ECC6C
  W8(c->r[3]+0x00000010u,c->r[7]); // 804ECC70
  W32(c->r[3]+0x00000014u,c->r[7]); // 804ECC74
  c->lr=0x804ECC7Cu; f_803A92B8(c); // 804ECC78
  c->r[0]=0u+0x00000001u; // 804ECC7C
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804ECC80
L_804ECC84:;
  c->r[31]=0u+0x80830000u; // 804ECC84
  c->r[4]=c->r[30]+0x000000F8u; // 804ECC88
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ECC8C
  c->r[3]=c->r[31]+0x00000004u; // 804ECC90
  c->lr=0x804ECC98u; f_80507F08(c); // 804ECC94
  cmps(c,0,(int32_t)c->r[30],0); // 804ECC98
  if (crb(c,2)) { goto L_804ED158; } // 804ECC9C
  c->r[3]=c->r[31]|c->r[31]; // 804ECCA0
  c->r[4]=c->r[30]|c->r[30]; // 804ECCA4
  c->lr=0x804ECCACu; f_804F0D38(c); // 804ECCA8
  goto L_804ED158; // 804ECCAC
L_804ECCB0:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[29]); // 804ECCB0
  {uint32_t ea=c->r[2]+0x00001990u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECCB4
  fcmp(c,0,c->f[1],c->f[0]); // 804ECCB8
  if (!crb(c,2)) { goto L_804ECDBC; } // 804ECCBC
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ECCC0
  cmps(c,0,(int32_t)c->r[3],0); // 804ECCC4
  if (crb(c,2)) { goto L_804ED158; } // 804ECCC8
  c->lr=0x804ECCD0u; f_805036B8(c); // 804ECCCC
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ECCD0
  c->lr=0x804ECCD8u; f_80503354(c); // 804ECCD4
  c->r[12]=R32(c->r[30]+0x000000E0u); // 804ECCD8
  c->r[0]=0u+0x00000000u; // 804ECCDC
  W32(c->r[30]+0x000000F0u,c->r[0]); // 804ECCE0
  cmps(c,0,(int32_t)c->r[12],0); // 804ECCE4
  W8(c->r[30]+0x00000035u,c->r[0]); // 804ECCE8
  W8(c->r[30]+0x00000036u,c->r[0]); // 804ECCEC
  if (crb(c,2)) { goto L_804ECD08; } // 804ECCF0
  c->r[3]=c->r[30]|c->r[30]; // 804ECCF4
  c->r[5]=R32(c->r[30]+0x000000E4u); // 804ECCF8
  c->r[4]=0u+0x00000000u; // 804ECCFC
  c->ctr=c->r[12]; // 804ECD00
  if (true) { c->lr=0x804ECD08u; dispatch(c,c->ctr); } // 804ECD04
L_804ECD08:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 804ECD08
  cmps(c,0,(int32_t)c->r[3],0); // 804ECD0C
  if (crb(c,2)) { goto L_804ECD28; } // 804ECD10
  c->r[12]=R32(c->r[3]+0x00000000u); // 804ECD14
  c->r[4]=R32(c->r[30]+0x000000ECu); // 804ECD18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804ECD1C
  c->ctr=c->r[12]; // 804ECD20
  if (true) { c->lr=0x804ECD28u; dispatch(c,c->ctr); } // 804ECD24
L_804ECD28:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 804ECD28
  cmps(c,0,(int32_t)c->r[0],0); // 804ECD2C
  if (crb(c,2)) { goto L_804ED158; } // 804ECD30
  c->r[7]=0u+0x00000000u; // 804ECD34
  W8(c->r[30]+0x00000037u,c->r[7]); // 804ECD38
  c->r[0]=R8(c->r[13]+0xFFFFE500u); // 804ECD3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804ECD40
  if (!crb(c,2)) { goto L_804ECD90; } // 804ECD44
  c->r[6]=0u+0x80830000u; // 804ECD48
  c->r[4]=0u+0x804F0000u; // 804ECD4C
  c->r[3]=c->r[6]+0xFFFF86B0u; // 804ECD50
  c->r[5]=0u+0x80830000u; // 804ECD54
  W32(c->r[3]+0x00000008u,c->r[7]); // 804ECD58
  c->r[8]=c->r[3]+0x00000008u; // 804ECD5C
  c->r[4]=c->r[4]+0xFFFFC7A8u; // 804ECD60
  c->r[5]=c->r[5]+0xFFFF86A0u; // 804ECD64
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 804ECD68
  W32(c->r[6]+0xFFFF86B0u,c->r[7]); // 804ECD6C
  W32(c->r[3]+0x00000004u,c->r[7]); // 804ECD70
  W32(c->r[3]+0x00000008u,c->r[8]); // 804ECD74
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 804ECD78
  W8(c->r[3]+0x00000010u,c->r[7]); // 804ECD7C
  W32(c->r[3]+0x00000014u,c->r[7]); // 804ECD80
  c->lr=0x804ECD88u; f_803A92B8(c); // 804ECD84
  c->r[0]=0u+0x00000001u; // 804ECD88
  W8(c->r[13]+0xFFFFE500u,c->r[0]); // 804ECD8C
L_804ECD90:;
  c->r[31]=0u+0x80830000u; // 804ECD90
  c->r[4]=c->r[30]+0x000000F8u; // 804ECD94
  c->r[31]=c->r[31]+0xFFFF86B0u; // 804ECD98
  c->r[3]=c->r[31]+0x00000004u; // 804ECD9C
  c->lr=0x804ECDA4u; f_80507F08(c); // 804ECDA0
  cmps(c,0,(int32_t)c->r[30],0); // 804ECDA4
  if (crb(c,2)) { goto L_804ED158; } // 804ECDA8
  c->r[3]=c->r[31]|c->r[31]; // 804ECDAC
  c->r[4]=c->r[30]|c->r[30]; // 804ECDB0
  c->lr=0x804ECDB8u; f_804F0D38(c); // 804ECDB4
  goto L_804ED158; // 804ECDB8
L_804ECDBC:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 804ECDBC
  c->r[0]=R32(c->r[30]+0x000000C8u); // 804ECDC0
  {uint32_t ea=c->r[2]+0x000019B0u; c->f[3]=RF64(ea);} // 804ECDC4
  c->r[0]=c->r[0]-c->r[3]; // 804ECDC8
  {uint32_t ea=c->r[2]+0x00001990u; c->f[4]=c->ps1[4]=RF32(ea);} // 804ECDCC
  c->r[0]=c->r[0]^0x80000000u; // 804ECDD0
  {uint32_t ea=c->r[2]+0x00001990u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECDD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 804ECDD8
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 804ECDDC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 804ECDE0
  fcmp(c,0,c->f[1],c->f[2]); // 804ECDE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804ECDE8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 804ECDEC
  if (!crb(c,2)) { goto L_804ECDF8; } // 804ECDF0
  goto L_804ECE38; // 804ECDF4
L_804ECDF8:;
  c->r[0]=R32(c->r[30]+0x000000A8u); // 804ECDF8
  c->r[4]=R32(c->r[30]+0x000000ACu); // 804ECDFC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804ECE00
  if (crb(c,0)) { goto L_804ECE0C; } // 804ECE04
  goto L_804ECE38; // 804ECE08
L_804ECE0C:;
  c->r[3]=c->r[4]-c->r[0]; // 804ECE0C
  c->r[0]=c->r[4]^0x80000000u; // 804ECE10
  c->r[3]=c->r[3]^0x80000000u; // 804ECE14
  W32(c->r[1]+0x00000054u,c->r[0]); // 804ECE18
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 804ECE1C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 804ECE20
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 804ECE24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804ECE28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 804ECE2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 804ECE30
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 804ECE34
L_804ECE38:;
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[1]); // 804ECE38
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECE3C
  c->r[0]=R8(c->r[30]+0x00000034u); // 804ECE40
  cmps(c,0,(int32_t)c->r[0],0); // 804ECE44
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 804ECE48
  if (!crb(c,2)) { goto L_804ECE54; } // 804ECE4C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[31]); // 804ECE50
L_804ECE54:;
  {uint32_t ea=c->r[2]+0x000019A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECE54
  {uint32_t ea=c->r[2]+0x00001994u; c->f[20]=c->ps1[20]=RF32(ea);} // 804ECE58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 804ECE5C
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 804ECE60
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECE64
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[2]); // 804ECE68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804ECE6C
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 804ECE70
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 804ECE74
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 804ECE78
  c->lr=0x804ECE80u; f_80505920(c); // 804ECE7C
  {uint32_t ea=c->r[2]+0x00001990u; c->f[27]=c->ps1[27]=RF32(ea);} // 804ECE80
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[20]); // 804ECE84
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECE88
  c->r[0]=R8(c->r[30]+0x00000034u); // 804ECE8C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 804ECE90
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECE94
  cmpu(c,0,c->r[0],0x00000002u); // 804ECE98
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 804ECE9C
  if (!crb(c,2)) { goto L_804ECEA8; } // 804ECEA0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 804ECEA4
L_804ECEA8:;
  {uint32_t ea=c->r[2]+0x00001990u; c->f[31]=c->ps1[31]=RF32(ea);} // 804ECEA8
  cmps(c,0,(int32_t)c->r[31],0); // 804ECEAC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECEB0
  c->f[8]=c->f[31]; // 804ECEB4
  {uint32_t ea=c->r[2]+0x00001994u; c->f[4]=c->ps1[4]=RF32(ea);} // 804ECEB8
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 804ECEBC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 804ECEC0
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECEC4
  c->f[26]=c->f[4]; // 804ECEC8
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECECC
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[2]); // 804ECED0
  {uint32_t ea=c->r[30]+0x00000084u; c->f[10]=c->ps1[10]=RF32(ea);} // 804ECED4
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[1]); // 804ECED8
  {uint32_t ea=c->r[30]+0x00000094u; c->f[9]=c->ps1[9]=RF32(ea);} // 804ECEDC
  c->f[5]=c->ps1[5]=S(c->f[8]+c->f[0]); // 804ECEE0
  c->f[21]=c->ps1[21]=S(c->f[8]+c->f[10]); // 804ECEE4
  c->f[22]=c->ps1[22]=S(c->f[8]+c->f[9]); // 804ECEE8
  {uint32_t ea=c->r[30]+0x00000070u; c->f[3]=c->ps1[3]=RF32(ea);} // 804ECEEC
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 804ECEF0
  c->f[25]=c->f[4]; // 804ECEF4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ECEF8
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 804ECEFC
  {uint32_t ea=c->r[30]+0x00000078u; c->f[23]=c->ps1[23]=RF32(ea);} // 804ECF00
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 804ECF04
  {uint32_t ea=c->r[30]+0x00000088u; c->f[13]=c->ps1[13]=RF32(ea);} // 804ECF08
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[1]); // 804ECF0C
  {uint32_t ea=c->r[30]+0x00000098u; c->f[12]=c->ps1[12]=RF32(ea);} // 804ECF10
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 804ECF14
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 804ECF18
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 804ECF1C
  c->f[23]=c->ps1[23]=S(c->f[4]*c->f[23]); // 804ECF20
  {uint32_t ea=c->r[30]+0x00000050u; c->f[24]=c->ps1[24]=RF32(ea);} // 804ECF24
  c->f[13]=c->ps1[13]=S(c->f[8]+c->f[13]); // 804ECF28
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 804ECF2C
  c->f[12]=c->ps1[12]=S(c->f[8]+c->f[12]); // 804ECF30
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[8]);} // 804ECF34
  c->f[11]=c->ps1[11]=S(c->f[4]*c->f[11]); // 804ECF38
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 804ECF3C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[8]);} // 804ECF40
  c->f[10]=c->ps1[10]=S(c->f[8]+c->f[10]); // 804ECF44
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[24]); // 804ECF48
  {uint32_t ea=c->r[2]+0x00001990u; c->f[24]=c->ps1[24]=RF32(ea);} // 804ECF4C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 804ECF50
  c->f[8]=c->ps1[8]=S(c->f[8]+c->f[9]); // 804ECF54
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 804ECF58
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 804ECF5C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 804ECF60
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[20]); // 804ECF64
  {uint32_t ea=c->r[30]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 804ECF68
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[9]); // 804ECF6C
  c->r[29]=R8(c->r[30]+0x0000003Cu); // 804ECF70
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 804ECF74
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[7]);} // 804ECF78
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[6]);} // 804ECF7C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 804ECF80
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 804ECF84
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 804ECF88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804ECF8C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 804ECF90
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[21]);} // 804ECF94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[22]);} // 804ECF98
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[23]);} // 804ECF9C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[13]);} // 804ECFA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[12]);} // 804ECFA4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[11]);} // 804ECFA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[10]);} // 804ECFAC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 804ECFB0
  if (crb(c,2)) { goto L_804ECFF8; } // 804ECFB4
  c->r[0]=R8(c->r[30]+0x00000038u); // 804ECFB8
  cmps(c,0,(int32_t)c->r[0],0); // 804ECFBC
  if (crb(c,2)) { goto L_804ECFE0; } // 804ECFC0
  c->r[3]=R32(c->r[30]+0x000000A8u); // 804ECFC4
  c->r[4]=R32(c->r[30]+0x000000ACu); // 804ECFC8
  c->r[0]=c->r[3]+0x00000003u; // 804ECFCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804ECFD0
  W32(c->r[30]+0x000000A8u,c->r[0]); // 804ECFD4
  if (!crb(c,1)) { goto L_804ECFE0; } // 804ECFD8
  W32(c->r[30]+0x000000A8u,c->r[4]); // 804ECFDC
L_804ECFE0:;
  c->r[3]=c->r[30]+0x0000001Cu; // 804ECFE0
  c->r[4]=0u+0x00000003u; // 804ECFE4
  c->lr=0x804ECFECu; f_804F0DB8(c); // 804ECFE8
  c->r[3]=c->r[30]|c->r[30]; // 804ECFEC
  c->r[4]=0u+0x00000003u; // 804ECFF0
  c->lr=0x804ECFF8u; f_804EE28C(c); // 804ECFF4
L_804ECFF8:;
  c->r[3]=c->r[30]+0x0000001Cu; // 804ECFF8
  c->lr=0x804ED000u; f_804F0E54(c); // 804ECFFC
  c->f[23]=c->f[1]; // 804ED000
  {uint32_t ea=c->r[2]+0x00001994u; c->f[20]=c->ps1[20]=RF32(ea);} // 804ED004
  c->r[3]=c->r[30]|c->r[30]; // 804ED008
  c->lr=0x804ED010u; f_804EE260(c); // 804ED00C
  c->lr=0x804ED014u; f_80505AB0(c); // 804ED010
  c->r[0]=R8(c->r[30]+0x00000034u); // 804ED014
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 804ED018
  cmpu(c,0,c->r[0],0x00000001u); // 804ED01C
  if (!crb(c,2)) { goto L_804ED034; } // 804ED020
  {uint32_t ea=c->r[2]+0x0000199Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804ED024
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 804ED028
  c->lr=0x804ED030u; f_80505AB0(c); // 804ED02C
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 804ED030
L_804ED034:;
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED034
  cmps(c,0,(int32_t)c->r[3],0); // 804ED038
  if (crb(c,2)) { goto L_804ED158; } // 804ED03C
  c->r[4]=R32(c->r[30]+0x000000D4u); // 804ED040
  c->lr=0x804ED048u; f_805038CC(c); // 804ED044
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED048
  c->r[4]=R32(c->r[30]+0x000000D8u); // 804ED04C
  c->lr=0x804ED054u; f_805038EC(c); // 804ED050
  c->f[1]=c->f[30]; // 804ED054
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED058
  c->lr=0x804ED060u; f_805037C4(c); // 804ED05C
  c->f[1]=c->f[20]; // 804ED060
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED064
  c->f[2]=c->f[29]; // 804ED068
  c->lr=0x804ED070u; f_80503808(c); // 804ED06C
  c->f[1]=c->f[28]; // 804ED070
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED074
  c->lr=0x804ED07Cu; f_805038AC(c); // 804ED078
  c->f[1]=c->f[27]; // 804ED07C
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED080
  c->lr=0x804ED088u; f_8050390C(c); // 804ED084
  c->f[1]=c->f[31]; // 804ED088
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED08C
  c->lr=0x804ED094u; f_8050392C(c); // 804ED090
  c->f[1]=c->f[26]; // 804ED094
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED098
  c->lr=0x804ED0A0u; f_8050394C(c); // 804ED09C
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0A0
  c->r[4]=R8(c->r[30]+0x0000003Bu); // 804ED0A4
  {uint32_t ea=c->r[30]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED0A8
  c->lr=0x804ED0B0u; f_8050396C(c); // 804ED0AC
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0B0
  c->r[4]=c->r[29]|c->r[29]; // 804ED0B4
  c->lr=0x804ED0BCu; f_805039D4(c); // 804ED0B8
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0BC
  c->r[4]=R32(c->r[30]+0x00000058u); // 804ED0C0
  c->lr=0x804ED0C8u; f_80503A0C(c); // 804ED0C4
  c->f[1]=c->f[25]; // 804ED0C8
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0CC
  c->lr=0x804ED0D4u; f_80503A2C(c); // 804ED0D0
  c->f[1]=c->f[24]; // 804ED0D4
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0D8
  c->lr=0x804ED0E0u; f_80503A70(c); // 804ED0DC
  c->r[29]=c->r[1]+0x00000038u; // 804ED0E0
  c->r[31]=0u+0x00000000u; // 804ED0E4
L_804ED0E8:;
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED0E8
  c->r[4]=c->r[31]|c->r[31]; // 804ED0EC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED0F0
  c->lr=0x804ED0F8u; f_80503AB8(c); // 804ED0F4
  c->r[31]=c->r[31]+0x00000001u; // 804ED0F8
  c->r[29]=c->r[29]+0x00000004u; // 804ED0FC
  cmps(c,0,(int32_t)c->r[31],3); // 804ED100
  if (crb(c,0)) { IRQCHK(c); goto L_804ED0E8; } // 804ED104
  c->r[31]=c->r[1]+0x00000028u; // 804ED108
  c->r[29]=c->r[1]+0x00000018u; // 804ED10C
  c->r[28]=0u+0x00000000u; // 804ED110
L_804ED114:;
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED114
  c->r[4]=c->r[28]|c->r[28]; // 804ED118
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED11C
  c->lr=0x804ED124u; f_80503B04(c); // 804ED120
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED124
  c->r[4]=c->r[28]|c->r[28]; // 804ED128
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED12C
  c->lr=0x804ED134u; f_80503B50(c); // 804ED130
  c->r[3]=R32(c->r[30]+0x000000F0u); // 804ED134
  c->r[4]=c->r[28]|c->r[28]; // 804ED138
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED13C
  c->lr=0x804ED144u; f_80503BA0(c); // 804ED140
  c->r[28]=c->r[28]+0x00000001u; // 804ED144
  c->r[29]=c->r[29]+0x00000004u; // 804ED148
  cmps(c,0,(int32_t)c->r[28],4); // 804ED14C
  c->r[31]=c->r[31]+0x00000004u; // 804ED150
  if (crb(c,0)) { IRQCHK(c); goto L_804ED114; } // 804ED154
L_804ED158:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 804ED158
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 804ED15C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 804ED160
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 804ED164
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 804ED168
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 804ED16C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 804ED170
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 804ED174
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 804ED178
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 804ED17C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,26,ea,0,0);} // 804ED180
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[26]=RF64(ea);} // 804ED184
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,25,ea,0,0);} // 804ED188
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[25]=RF64(ea);} // 804ED18C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,24,ea,0,0);} // 804ED190
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[24]=RF64(ea);} // 804ED194
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,23,ea,0,0);} // 804ED198
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[23]=RF64(ea);} // 804ED19C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,22,ea,0,0);} // 804ED1A0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[22]=RF64(ea);} // 804ED1A4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,21,ea,0,0);} // 804ED1A8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[21]=RF64(ea);} // 804ED1AC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,20,ea,0,0);} // 804ED1B0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[20]=RF64(ea);} // 804ED1B4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 804ED1B8
  c->r[30]=R32(c->r[1]+0x00000068u); // 804ED1BC
  c->r[29]=R32(c->r[1]+0x00000064u); // 804ED1C0
  c->r[0]=R32(c->r[1]+0x00000134u); // 804ED1C4
  c->r[28]=R32(c->r[1]+0x00000060u); // 804ED1C8
  c->lr=c->r[0]; // 804ED1CC
  c->r[1]=c->r[1]+0x00000130u; // 804ED1D0
  return; // 804ED1D4
}

// fn_804ED1D8
void f_804ED1D8(Ctx* __restrict c) {
  trace_call(0x804ED1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804ED1D8
  c->r[0]=c->lr; // 804ED1DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804ED1E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804ED1E4
  c->r[31]=c->r[6]|c->r[6]; // 804ED1E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804ED1EC
  c->r[30]=c->r[4]|c->r[4]; // 804ED1F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 804ED1F4
  c->r[29]=c->r[3]|c->r[3]; // 804ED1F8
  W32(c->r[3]+0x000000D0u,c->r[5]); // 804ED1FC
  c->r[3]=c->r[3]+0x0000001Cu; // 804ED200
  c->lr=0x804ED208u; f_804F0DA4(c); // 804ED204
  {uint32_t ea=c->r[2]+0x000019B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 804ED208
  c->r[3]=c->r[29]|c->r[29]; // 804ED20C
  c->lr=0x804ED214u; f_804EE248(c); // 804ED210
  c->r[0]=0u+0x00000000u; // 804ED214
  c->r[3]=R32(c->r[29]+0x000000F0u); // 804ED218
  W32(c->r[29]+0x000000A8u,c->r[0]); // 804ED21C
  c->r[4]=c->r[30]|c->r[30]; // 804ED220
  c->r[5]=c->r[31]|c->r[31]; // 804ED224
  c->lr=0x804ED22Cu; f_80503420(c); // 804ED228
  c->r[3]=R32(c->r[29]+0x000000F0u); // 804ED22C
  c->lr=0x804ED234u; f_80503698(c); // 804ED230
  c->r[0]=0u+0x00000001u; // 804ED234
  W8(c->r[29]+0x00000036u,c->r[0]); // 804ED238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804ED23C
  c->r[30]=R32(c->r[1]+0x00000018u); // 804ED240
  c->r[29]=R32(c->r[1]+0x00000014u); // 804ED244
  c->r[0]=R32(c->r[1]+0x00000024u); // 804ED248
  c->lr=c->r[0]; // 804ED24C
  c->r[1]=c->r[1]+0x00000020u; // 804ED250
  return; // 804ED254
}

