#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8044B748
void f_8044B748(Ctx* __restrict c) {
  trace_call(0x8044B748u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044B748
  c->r[0]=c->lr; // 8044B74C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8044B750
  c->r[0]=0u+0x00000000u; // 8044B754
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8044B758
  c->r[31]=c->r[5]|c->r[5]; // 8044B75C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8044B760
  c->r[30]=c->r[4]|c->r[4]; // 8044B764
  W32(c->r[1]+0x00000054u,c->r[29]); // 8044B768
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B76C
  c->r[4]=0u+0x00000000u; // 8044B770
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044B774
  c->r[5]=0u+0x00000040u; // 8044B778
  c->r[29]=R32(c->r[3]+0x00000004u); // 8044B77C
  c->r[3]=c->r[1]+0x00000008u; // 8044B780
  W8(c->r[1]+0x00000008u,c->r[0]); // 8044B784
  c->lr=0x8044B78Cu; f_800043EC(c); // 8044B788
  c->r[3]=c->r[1]+0x00000008u; // 8044B78C
  c->r[4]=c->r[29]+0x00000040u; // 8044B790
  c->r[5]=0u+0x00000040u; // 8044B794
  c->lr=0x8044B79Cu; f_802DC484(c); // 8044B798
  c->r[4]=0u+0x806A0000u; // 8044B79C
  c->r[3]=c->r[1]+0x00000008u; // 8044B7A0
  c->r[4]=c->r[4]+0x000078F0u; // 8044B7A4
  c->r[4]=c->r[4]+0x00000019u; // 8044B7A8
  c->lr=0x8044B7B0u; f_803B4278(c); // 8044B7AC
  cmps(c,0,(int32_t)c->r[3],0); // 8044B7B0
  if (!crb(c,2)) { goto L_8044B7C0; } // 8044B7B4
  c->r[0]=0u+0x00000000u; // 8044B7B8
  goto L_8044B87C; // 8044B7BC
L_8044B7C0:;
  c->r[4]=c->r[3]+0x00000004u; // 8044B7C0
  c->r[5]=0u+0x00000000u; // 8044B7C4
L_8044B7C8:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 8044B7C8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8044B7CC
  cmps(c,0,(int32_t)c->r[3],46); // 8044B7D0
  if (crb(c,2)) { goto L_8044B81C; } // 8044B7D4
  cmps(c,0,(int32_t)c->r[3],32); // 8044B7D8
  if (crb(c,2)) { goto L_8044B81C; } // 8044B7DC
  cmps(c,0,(int32_t)c->r[3],0); // 8044B7E0
  if (crb(c,2)) { goto L_8044B81C; } // 8044B7E4
  cmps(c,0,(int32_t)c->r[3],48); // 8044B7E8
  c->r[0]=0u+0x00000000u; // 8044B7EC
  if (crb(c,0)) { goto L_8044B800; } // 8044B7F0
  cmps(c,0,(int32_t)c->r[3],57); // 8044B7F4
  if (crb(c,1)) { goto L_8044B800; } // 8044B7F8
  c->r[0]=0u+0x00000001u; // 8044B7FC
L_8044B800:;
  cmps(c,0,(int32_t)c->r[0],0); // 8044B800
  if (crb(c,2)) { goto L_8044B81C; } // 8044B804
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 8044B808
  c->r[4]=c->r[4]+0x00000001u; // 8044B80C
  c->r[3]=c->r[3]+c->r[0]; // 8044B810
  c->r[5]=c->r[3]+0xFFFFFFD0u; // 8044B814
  IRQCHK(c); goto L_8044B7C8; // 8044B818
L_8044B81C:;
  c->r[4]=c->r[4]+0x00000001u; // 8044B81C
  c->r[6]=0u+0x00000000u; // 8044B820
L_8044B824:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 8044B824
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8044B828
  cmps(c,0,(int32_t)c->r[3],46); // 8044B82C
  if (crb(c,2)) { goto L_8044B878; } // 8044B830
  cmps(c,0,(int32_t)c->r[3],32); // 8044B834
  if (crb(c,2)) { goto L_8044B878; } // 8044B838
  cmps(c,0,(int32_t)c->r[3],0); // 8044B83C
  if (crb(c,2)) { goto L_8044B878; } // 8044B840
  cmps(c,0,(int32_t)c->r[3],48); // 8044B844
  c->r[0]=0u+0x00000000u; // 8044B848
  if (crb(c,0)) { goto L_8044B85C; } // 8044B84C
  cmps(c,0,(int32_t)c->r[3],57); // 8044B850
  if (crb(c,1)) { goto L_8044B85C; } // 8044B854
  c->r[0]=0u+0x00000001u; // 8044B858
L_8044B85C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8044B85C
  if (crb(c,2)) { goto L_8044B878; } // 8044B860
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 8044B864
  c->r[4]=c->r[4]+0x00000001u; // 8044B868
  c->r[3]=c->r[3]+c->r[0]; // 8044B86C
  c->r[6]=c->r[3]+0xFFFFFFD0u; // 8044B870
  IRQCHK(c); goto L_8044B824; // 8044B874
L_8044B878:;
  c->r[0]=0u+0x00000001u; // 8044B878
L_8044B87C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8044B87C
  if (!crb(c,2)) { goto L_8044B88C; } // 8044B880
  c->r[3]=0u+0x00000000u; // 8044B884
  goto L_8044B898; // 8044B888
L_8044B88C:;
  W32(c->r[30]+0x00000000u,c->r[5]); // 8044B88C
  c->r[3]=0u+0x00000001u; // 8044B890
  W32(c->r[31]+0x00000000u,c->r[6]); // 8044B894
L_8044B898:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8044B898
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8044B89C
  c->r[30]=R32(c->r[1]+0x00000058u); // 8044B8A0
  c->r[29]=R32(c->r[1]+0x00000054u); // 8044B8A4
  c->lr=c->r[0]; // 8044B8A8
  c->r[1]=c->r[1]+0x00000060u; // 8044B8AC
  return; // 8044B8B0
}

// fn_8044B8B4
void f_8044B8B4(Ctx* __restrict c) {
  trace_call(0x8044B8B4u);
  c->r[0]=0u+0x00000000u; // 8044B8B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B8B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044B8BC
  c->r[6]=R32(c->r[3]+0x00000004u); // 8044B8C0
  c->r[3]=0u+0x00000001u; // 8044B8C4
  c->r[0]=R8(c->r[6]+0x00000038u); // 8044B8C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B8CC
  c->r[0]=R8(c->r[6]+0x00000039u); // 8044B8D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044B8D4
  return; // 8044B8D8
}

// fn_8044B8DC
void f_8044B8DC(Ctx* __restrict c) {
  trace_call(0x8044B8DCu);
  c->r[0]=0u+0x00000000u; // 8044B8DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B8E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044B8E4
  c->r[6]=R32(c->r[3]+0x00000004u); // 8044B8E8
  c->r[3]=0u+0x00000001u; // 8044B8EC
  c->r[0]=R8(c->r[6]+0x0000003Au); // 8044B8F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B8F4
  c->r[0]=R8(c->r[6]+0x0000003Bu); // 8044B8F8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044B8FC
  return; // 8044B900
}

// fn_8044B904
void f_8044B904(Ctx* __restrict c) {
  trace_call(0x8044B904u);
  c->r[0]=0u+0x00000000u; // 8044B904
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B908
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B90C
  c->r[3]=0u+0x00000001u; // 8044B910
  c->r[6]=R8(c->r[5]+0x00000012u); // 8044B914
  c->r[0]=R8(c->r[5]+0x00000013u); // 8044B918
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044B91C
  c->r[0]=c->r[5]+c->r[0]; // 8044B920
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8044B924
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B928
  return; // 8044B92C
}

// fn_8044B930
void f_8044B930(Ctx* __restrict c) {
  trace_call(0x8044B930u);
  c->r[0]=0u+0x00000000u; // 8044B930
  c->r[3]=0u+0x00000001u; // 8044B934
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B938
  return; // 8044B93C
}

// fn_8044B940
void f_8044B940(Ctx* __restrict c) {
  trace_call(0x8044B940u);
  c->r[0]=0u+0x00000002u; // 8044B940
  c->r[3]=0u+0x00000001u; // 8044B944
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B948
  return; // 8044B94C
}

// fn_8044B950
void f_8044B950(Ctx* __restrict c) {
  trace_call(0x8044B950u);
  c->r[0]=0u+0x00000000u; // 8044B950
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B954
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B958
  c->r[3]=0u+0x00000001u; // 8044B95C
  c->r[6]=R8(c->r[5]+0x00000012u); // 8044B960
  c->r[0]=R8(c->r[5]+0x00000013u); // 8044B964
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044B968
  c->r[0]=c->r[5]+c->r[0]; // 8044B96C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8044B970
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B974
  return; // 8044B978
}

// fn_8044B97C
void f_8044B97C(Ctx* __restrict c) {
  trace_call(0x8044B97Cu);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B97C
  c->r[3]=0u+0x00000001u; // 8044B980
  c->r[0]=R8(c->r[5]+0x000000C0u); // 8044B984
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B988
  return; // 8044B98C
}

// fn_8044B990
void f_8044B990(Ctx* __restrict c) {
  trace_call(0x8044B990u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B990
  c->r[3]=0u+0x00000001u; // 8044B994
  c->r[0]=R8(c->r[5]+0x000000C1u); // 8044B998
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B99C
  return; // 8044B9A0
}

// fn_8044B9A4
void f_8044B9A4(Ctx* __restrict c) {
  trace_call(0x8044B9A4u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B9A4
  c->r[3]=0u+0x00000001u; // 8044B9A8
  c->r[0]=R8(c->r[5]+0x000000C2u); // 8044B9AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B9B0
  return; // 8044B9B4
}

// fn_8044B9B8
void f_8044B9B8(Ctx* __restrict c) {
  trace_call(0x8044B9B8u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8044B9B8
  c->r[3]=0u+0x00000001u; // 8044B9BC
  c->r[0]=R8(c->r[5]+0x000000C3u); // 8044B9C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B9C4
  return; // 8044B9C8
}

// fn_8044B9CC
void f_8044B9CC(Ctx* __restrict c) {
  trace_call(0x8044B9CCu);
  c->r[7]=R32(c->r[3]+0x00000004u); // 8044B9CC
  c->r[3]=0u+0x00000001u; // 8044B9D0
  c->r[5]=R8(c->r[7]+0x000000C4u); // 8044B9D4
  c->r[0]=R8(c->r[7]+0x000000C5u); // 8044B9D8
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044B9DC
  c->r[5]=R8(c->r[7]+0x000000C6u); // 8044B9E0
  c->r[6]=c->r[6]+c->r[0]; // 8044B9E4
  c->r[0]=R8(c->r[7]+0x000000C7u); // 8044B9E8
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044B9EC
  c->r[5]=c->r[6]+c->r[5]; // 8044B9F0
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044B9F4
  c->r[0]=c->r[5]+c->r[0]; // 8044B9F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044B9FC
  return; // 8044BA00
}

// fn_8044BA04
void f_8044BA04(Ctx* __restrict c) {
  trace_call(0x8044BA04u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 8044BA04
  c->r[3]=0u+0x00000001u; // 8044BA08
  c->r[5]=R8(c->r[7]+0x000000C8u); // 8044BA0C
  c->r[0]=R8(c->r[7]+0x000000C9u); // 8044BA10
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA14
  c->r[5]=R8(c->r[7]+0x000000CAu); // 8044BA18
  c->r[6]=c->r[6]+c->r[0]; // 8044BA1C
  c->r[0]=R8(c->r[7]+0x000000CBu); // 8044BA20
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044BA24
  c->r[5]=c->r[6]+c->r[5]; // 8044BA28
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA2C
  c->r[0]=c->r[5]+c->r[0]; // 8044BA30
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044BA34
  return; // 8044BA38
}

// fn_8044BA3C
void f_8044BA3C(Ctx* __restrict c) {
  trace_call(0x8044BA3Cu);
  c->r[7]=R32(c->r[3]+0x00000004u); // 8044BA3C
  c->r[3]=0u+0x00000001u; // 8044BA40
  c->r[5]=R8(c->r[7]+0x000000CCu); // 8044BA44
  c->r[0]=R8(c->r[7]+0x000000CDu); // 8044BA48
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA4C
  c->r[5]=R8(c->r[7]+0x000000CEu); // 8044BA50
  c->r[6]=c->r[6]+c->r[0]; // 8044BA54
  c->r[0]=R8(c->r[7]+0x000000CFu); // 8044BA58
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044BA5C
  c->r[5]=c->r[6]+c->r[5]; // 8044BA60
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA64
  c->r[0]=c->r[5]+c->r[0]; // 8044BA68
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044BA6C
  return; // 8044BA70
}

// fn_8044BA74
void f_8044BA74(Ctx* __restrict c) {
  trace_call(0x8044BA74u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 8044BA74
  c->r[3]=0u+0x00000001u; // 8044BA78
  c->r[5]=R8(c->r[7]+0x000000D0u); // 8044BA7C
  c->r[0]=R8(c->r[7]+0x000000D1u); // 8044BA80
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA84
  c->r[5]=R8(c->r[7]+0x000000D2u); // 8044BA88
  c->r[6]=c->r[6]+c->r[0]; // 8044BA8C
  c->r[0]=R8(c->r[7]+0x000000D3u); // 8044BA90
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 8044BA94
  c->r[5]=c->r[6]+c->r[5]; // 8044BA98
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BA9C
  c->r[0]=c->r[5]+c->r[0]; // 8044BAA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044BAA4
  return; // 8044BAA8
}

// fn_8044BAAC
void f_8044BAAC(Ctx* __restrict c) {
  trace_call(0x8044BAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BAAC
  c->r[0]=c->lr; // 8044BAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BAB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BAB8
  c->r[31]=c->r[5]|c->r[5]; // 8044BABC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BAC0
  c->lr=0x8044BAC8u; f_8044B6A8(c); // 8044BAC4
  cmps(c,0,(int32_t)c->r[3],0); // 8044BAC8
  if (!crb(c,2)) { goto L_8044BAD8; } // 8044BACC
  c->r[3]=0u+0x00000000u; // 8044BAD0
  goto L_8044BB50; // 8044BAD4
L_8044BAD8:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044BAD8
  c->r[3]=sraw(c,c->r[0],4); // 8044BADC
  c->r[0]=c->r[3]+0x00000020u; // 8044BAE0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8044BAE4
  c->r[0]=c->r[3]+0xFFFFFFDFu; // 8044BAE8
  cmpu(c,0,c->r[0],0x00000006u); // 8044BAEC
  if (crb(c,1)) { goto L_8044BB44; } // 8044BAF0
  c->r[3]=0u+0x80710000u; // 8044BAF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044BAF8
  c->r[3]=c->r[3]+0x00004A60u; // 8044BAFC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8044BB00
  c->ctr=c->r[3]; // 8044BB04
  if (true) { switch (c->ctr) { case 0x8044BB0Cu: goto L_8044BB0C; case 0x8044BB14u: goto L_8044BB14; case 0x8044BB1Cu: goto L_8044BB1C; case 0x8044BB24u: goto L_8044BB24; case 0x8044BB2Cu: goto L_8044BB2C; case 0x8044BB34u: goto L_8044BB34; case 0x8044BB3Cu: goto L_8044BB3C; default: break; } dispatch(c,c->ctr); return; } // 8044BB08
L_8044BB0C:;
  c->r[0]=0u+0x00000001u; // 8044BB0C
  goto L_8044BB48; // 8044BB10
L_8044BB14:;
  c->r[0]=0u+0x00000007u; // 8044BB14
  goto L_8044BB48; // 8044BB18
L_8044BB1C:;
  c->r[0]=0u+0x00000008u; // 8044BB1C
  goto L_8044BB48; // 8044BB20
L_8044BB24:;
  c->r[0]=0u+0x00000003u; // 8044BB24
  goto L_8044BB48; // 8044BB28
L_8044BB2C:;
  c->r[0]=0u+0x00000004u; // 8044BB2C
  goto L_8044BB48; // 8044BB30
L_8044BB34:;
  c->r[0]=0u+0x00000005u; // 8044BB34
  goto L_8044BB48; // 8044BB38
L_8044BB3C:;
  c->r[0]=0u+0x00000006u; // 8044BB3C
  goto L_8044BB48; // 8044BB40
L_8044BB44:;
  c->r[0]=0u+0x00000000u; // 8044BB44
L_8044BB48:;
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BB48
  c->r[3]=0u+0x00000001u; // 8044BB4C
L_8044BB50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BB50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BB54
  c->lr=c->r[0]; // 8044BB58
  c->r[1]=c->r[1]+0x00000010u; // 8044BB5C
  return; // 8044BB60
}

// fn_8044BB64
void f_8044BB64(Ctx* __restrict c) {
  trace_call(0x8044BB64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BB64
  c->r[0]=c->lr; // 8044BB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BB70
  c->r[31]=c->r[5]|c->r[5]; // 8044BB74
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BB78
  c->lr=0x8044BB80u; f_8044B6A8(c); // 8044BB7C
  cmps(c,0,(int32_t)c->r[3],0); // 8044BB80
  if (!crb(c,2)) { goto L_8044BB90; } // 8044BB84
  c->r[3]=0u+0x00000000u; // 8044BB88
  goto L_8044BBA0; // 8044BB8C
L_8044BB90:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044BB90
  c->r[3]=0u+0x00000001u; // 8044BB94
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8044BB98
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BB9C
L_8044BBA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BBA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BBA4
  c->lr=c->r[0]; // 8044BBA8
  c->r[1]=c->r[1]+0x00000010u; // 8044BBAC
  return; // 8044BBB0
}

// fn_8044BBB4
void f_8044BBB4(Ctx* __restrict c) {
  trace_call(0x8044BBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BBB4
  c->r[0]=c->lr; // 8044BBB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BBBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BBC0
  c->r[31]=c->r[5]|c->r[5]; // 8044BBC4
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BBC8
  c->lr=0x8044BBD0u; f_8044B6A8(c); // 8044BBCC
  cmps(c,0,(int32_t)c->r[3],0); // 8044BBD0
  if (!crb(c,2)) { goto L_8044BBE0; } // 8044BBD4
  c->r[3]=0u+0x00000000u; // 8044BBD8
  goto L_8044BBF0; // 8044BBDC
L_8044BBE0:;
  c->r[0]=R8(c->r[3]+0x00000002u); // 8044BBE0
  c->r[3]=0u+0x00000001u; // 8044BBE4
  c->r[0]=sraw(c,c->r[0],4); // 8044BBE8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BBEC
L_8044BBF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BBF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BBF4
  c->lr=c->r[0]; // 8044BBF8
  c->r[1]=c->r[1]+0x00000010u; // 8044BBFC
  return; // 8044BC00
}

// fn_8044BC04
void f_8044BC04(Ctx* __restrict c) {
  trace_call(0x8044BC04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BC04
  c->r[0]=c->lr; // 8044BC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BC0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BC10
  c->r[31]=c->r[5]|c->r[5]; // 8044BC14
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BC18
  c->lr=0x8044BC20u; f_8044B6A8(c); // 8044BC1C
  cmps(c,0,(int32_t)c->r[3],0); // 8044BC20
  if (!crb(c,2)) { goto L_8044BC30; } // 8044BC24
  c->r[3]=0u+0x00000000u; // 8044BC28
  goto L_8044BC4C; // 8044BC2C
L_8044BC30:;
  c->r[5]=R8(c->r[3]+0x00000002u); // 8044BC30
  c->r[4]=R8(c->r[3]+0x00000003u); // 8044BC34
  c->r[0]=R8(c->r[3]+0x00000004u); // 8044BC38
  c->r[4]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[4]&~0x00000F00u); // 8044BC3C
  c->r[0]=(rotl(c->r[4],8)&0x000FFF00u)|(c->r[0]&~0x000FFF00u); // 8044BC40
  c->r[3]=0u+0x00000001u; // 8044BC44
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BC48
L_8044BC4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BC4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BC50
  c->lr=c->r[0]; // 8044BC54
  c->r[1]=c->r[1]+0x00000010u; // 8044BC58
  return; // 8044BC5C
}

// fn_8044BC60
void f_8044BC60(Ctx* __restrict c) {
  trace_call(0x8044BC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BC60
  c->r[0]=c->lr; // 8044BC64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BC68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BC6C
  c->r[31]=c->r[5]|c->r[5]; // 8044BC70
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BC74
  c->lr=0x8044BC7Cu; f_8044B6A8(c); // 8044BC78
  cmps(c,0,(int32_t)c->r[3],0); // 8044BC7C
  if (!crb(c,2)) { goto L_8044BC8C; } // 8044BC80
  c->r[3]=0u+0x00000000u; // 8044BC84
  goto L_8044BCE4; // 8044BC88
L_8044BC8C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044BC8C
  c->r[3]=sraw(c,c->r[0],4); // 8044BC90
  c->r[0]=c->r[3]+0x00000040u; // 8044BC94
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8044BC98
  cmps(c,0,(int32_t)c->r[0],66); // 8044BC9C
  if (crb(c,2)) { goto L_8044BCC8; } // 8044BCA0
  if (!crb(c,0)) { goto L_8044BCB4; } // 8044BCA4
  cmps(c,0,(int32_t)c->r[0],65); // 8044BCA8
  if (!crb(c,0)) { goto L_8044BCC0; } // 8044BCAC
  goto L_8044BCD8; // 8044BCB0
L_8044BCB4:;
  cmps(c,0,(int32_t)c->r[0],68); // 8044BCB4
  if (!crb(c,0)) { goto L_8044BCD8; } // 8044BCB8
  goto L_8044BCD0; // 8044BCBC
L_8044BCC0:;
  c->r[0]=0u+0x00000001u; // 8044BCC0
  goto L_8044BCDC; // 8044BCC4
L_8044BCC8:;
  c->r[0]=0u+0x00000003u; // 8044BCC8
  goto L_8044BCDC; // 8044BCCC
L_8044BCD0:;
  c->r[0]=0u+0x00000004u; // 8044BCD0
  goto L_8044BCDC; // 8044BCD4
L_8044BCD8:;
  c->r[0]=0u+0x00000000u; // 8044BCD8
L_8044BCDC:;
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BCDC
  c->r[3]=0u+0x00000001u; // 8044BCE0
L_8044BCE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BCE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BCE8
  c->lr=c->r[0]; // 8044BCEC
  c->r[1]=c->r[1]+0x00000010u; // 8044BCF0
  return; // 8044BCF4
}

// fn_8044BCF8
void f_8044BCF8(Ctx* __restrict c) {
  trace_call(0x8044BCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BCF8
  c->r[0]=c->lr; // 8044BCFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BD00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BD04
  c->r[31]=c->r[5]|c->r[5]; // 8044BD08
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BD0C
  c->lr=0x8044BD14u; f_8044B6A8(c); // 8044BD10
  cmps(c,0,(int32_t)c->r[3],0); // 8044BD14
  if (!crb(c,2)) { goto L_8044BD24; } // 8044BD18
  c->r[3]=0u+0x00000000u; // 8044BD1C
  goto L_8044BD64; // 8044BD20
L_8044BD24:;
  c->r[4]=R8(c->r[3]+0x0000000Cu); // 8044BD24
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8044BD28
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 8044BD2C
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 8044BD30
  c->r[5]=c->r[5]+c->r[0]; // 8044BD34
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8044BD38
  c->r[3]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BD3C
  c->r[3]=c->r[3]+c->r[4]; // 8044BD40
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 8044BD44
  c->r[3]=c->r[3]+c->r[0]; // 8044BD48
  c->r[0]=c->r[3]+0x00010000u; // 8044BD4C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8044BD50
  if (!crb(c,2)) { goto L_8044BD5C; } // 8044BD54
  c->r[3]=0u+0x00000000u; // 8044BD58
L_8044BD5C:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 8044BD5C
  c->r[3]=0u+0x00000001u; // 8044BD60
L_8044BD64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BD64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BD68
  c->lr=c->r[0]; // 8044BD6C
  c->r[1]=c->r[1]+0x00000010u; // 8044BD70
  return; // 8044BD74
}

// fn_8044BD78
void f_8044BD78(Ctx* __restrict c) {
  trace_call(0x8044BD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BD78
  c->r[0]=c->lr; // 8044BD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BD84
  c->r[31]=c->r[6]|c->r[6]; // 8044BD88
  W32(c->r[1]+0x00000008u,c->r[30]); // 8044BD8C
  c->r[30]=c->r[5]|c->r[5]; // 8044BD90
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BD94
  c->lr=0x8044BD9Cu; f_8044B6A8(c); // 8044BD98
  cmps(c,0,(int32_t)c->r[3],0); // 8044BD9C
  if (!crb(c,2)) { goto L_8044BDAC; } // 8044BDA0
  c->r[3]=0u+0x00000000u; // 8044BDA4
  goto L_8044BDE0; // 8044BDA8
L_8044BDAC:;
  c->r[4]=R8(c->r[3]+0x00000002u); // 8044BDAC
  c->r[0]=R8(c->r[3]+0x00000003u); // 8044BDB0
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 8044BDB4
  c->r[5]=R8(c->r[3]+0x00000004u); // 8044BDB8
  c->r[4]=c->r[4]+c->r[0]; // 8044BDBC
  c->r[0]=R8(c->r[3]+0x00000005u); // 8044BDC0
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8044BDC4
  c->r[3]=rotl(c->r[5],8)&0xFFFFFF00u; // 8044BDC8
  c->r[0]=c->r[3]+c->r[0]; // 8044BDCC
  W32(c->r[30]+0x00000000u,c->r[4]); // 8044BDD0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8044BDD4
  c->r[3]=0u+0x00000001u; // 8044BDD8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BDDC
L_8044BDE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BDE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BDE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044BDE8
  c->lr=c->r[0]; // 8044BDEC
  c->r[1]=c->r[1]+0x00000010u; // 8044BDF0
  return; // 8044BDF4
}

// fn_8044BDF8
void f_8044BDF8(Ctx* __restrict c) {
  trace_call(0x8044BDF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BDF8
  c->r[0]=c->lr; // 8044BDFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BE00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BE04
  c->r[31]=c->r[5]|c->r[5]; // 8044BE08
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BE0C
  c->lr=0x8044BE14u; f_8044B6A8(c); // 8044BE10
  cmps(c,0,(int32_t)c->r[3],0); // 8044BE14
  if (!crb(c,2)) { goto L_8044BE24; } // 8044BE18
  c->r[3]=0u+0x00000000u; // 8044BE1C
  goto L_8044BE40; // 8044BE20
L_8044BE24:;
  c->r[4]=R8(c->r[3]+0x0000000Au); // 8044BE24
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8044BE28
  c->r[3]=0u+0x00000001u; // 8044BE2C
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 8044BE30
  c->r[0]=c->r[4]+c->r[0]; // 8044BE34
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8044BE38
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BE3C
L_8044BE40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BE40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BE44
  c->lr=c->r[0]; // 8044BE48
  c->r[1]=c->r[1]+0x00000010u; // 8044BE4C
  return; // 8044BE50
}

// fn_8044BE54
void f_8044BE54(Ctx* __restrict c) {
  trace_call(0x8044BE54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BE54
  c->r[0]=c->lr; // 8044BE58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BE5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BE60
  c->r[31]=c->r[5]|c->r[5]; // 8044BE64
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BE68
  c->lr=0x8044BE70u; f_8044B6A8(c); // 8044BE6C
  cmps(c,0,(int32_t)c->r[3],0); // 8044BE70
  if (!crb(c,2)) { goto L_8044BE80; } // 8044BE74
  c->r[3]=0u+0x00000000u; // 8044BE78
  goto L_8044BE8C; // 8044BE7C
L_8044BE80:;
  c->r[0]=R8(c->r[3]+0x00000021u); // 8044BE80
  c->r[3]=0u+0x00000001u; // 8044BE84
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BE88
L_8044BE8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BE90
  c->lr=c->r[0]; // 8044BE94
  c->r[1]=c->r[1]+0x00000010u; // 8044BE98
  return; // 8044BE9C
}

// fn_8044BEA0
void f_8044BEA0(Ctx* __restrict c) {
  trace_call(0x8044BEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BEA0
  c->r[0]=c->lr; // 8044BEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BEAC
  c->r[31]=c->r[5]|c->r[5]; // 8044BEB0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BEB4
  c->lr=0x8044BEBCu; f_8044B6A8(c); // 8044BEB8
  cmps(c,0,(int32_t)c->r[3],0); // 8044BEBC
  if (!crb(c,2)) { goto L_8044BECC; } // 8044BEC0
  c->r[3]=0u+0x00000000u; // 8044BEC4
  goto L_8044BED8; // 8044BEC8
L_8044BECC:;
  c->r[0]=R8(c->r[3]+0x00000022u); // 8044BECC
  c->r[3]=0u+0x00000001u; // 8044BED0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BED4
L_8044BED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BEDC
  c->lr=c->r[0]; // 8044BEE0
  c->r[1]=c->r[1]+0x00000010u; // 8044BEE4
  return; // 8044BEE8
}

// fn_8044BEEC
void f_8044BEEC(Ctx* __restrict c) {
  trace_call(0x8044BEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BEEC
  c->r[0]=c->lr; // 8044BEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BEF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BEF8
  c->r[31]=c->r[5]|c->r[5]; // 8044BEFC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BF00
  c->lr=0x8044BF08u; f_8044B6A8(c); // 8044BF04
  cmps(c,0,(int32_t)c->r[3],0); // 8044BF08
  if (!crb(c,2)) { goto L_8044BF18; } // 8044BF0C
  c->r[3]=0u+0x00000000u; // 8044BF10
  goto L_8044BF28; // 8044BF14
L_8044BF18:;
  c->r[0]=R8(c->r[3]+0x00000023u); // 8044BF18
  c->r[3]=0u+0x00000001u; // 8044BF1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8044BF20
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BF24
L_8044BF28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BF2C
  c->lr=c->r[0]; // 8044BF30
  c->r[1]=c->r[1]+0x00000010u; // 8044BF34
  return; // 8044BF38
}

// fn_8044BF3C
void f_8044BF3C(Ctx* __restrict c) {
  trace_call(0x8044BF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BF3C
  c->r[0]=c->lr; // 8044BF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BF44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BF48
  c->r[31]=c->r[5]|c->r[5]; // 8044BF4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BF50
  c->lr=0x8044BF58u; f_8044B6A8(c); // 8044BF54
  cmps(c,0,(int32_t)c->r[3],0); // 8044BF58
  if (!crb(c,2)) { goto L_8044BF68; } // 8044BF5C
  c->r[3]=0u+0x00000000u; // 8044BF60
  goto L_8044BF78; // 8044BF64
L_8044BF68:;
  c->r[0]=R8(c->r[3]+0x00000023u); // 8044BF68
  c->r[3]=0u+0x00000001u; // 8044BF6C
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 8044BF70
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BF74
L_8044BF78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BF7C
  c->lr=c->r[0]; // 8044BF80
  c->r[1]=c->r[1]+0x00000010u; // 8044BF84
  return; // 8044BF88
}

// fn_8044BF8C
void f_8044BF8C(Ctx* __restrict c) {
  trace_call(0x8044BF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BF8C
  c->r[0]=c->lr; // 8044BF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BF98
  c->r[31]=c->r[5]|c->r[5]; // 8044BF9C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BFA0
  c->lr=0x8044BFA8u; f_8044B6A8(c); // 8044BFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8044BFA8
  if (!crb(c,2)) { goto L_8044BFB8; } // 8044BFAC
  c->r[3]=0u+0x00000000u; // 8044BFB0
  goto L_8044BFC4; // 8044BFB4
L_8044BFB8:;
  c->r[0]=R8(c->r[3]+0x00000024u); // 8044BFB8
  c->r[3]=0u+0x00000001u; // 8044BFBC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044BFC0
L_8044BFC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044BFC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044BFC8
  c->lr=c->r[0]; // 8044BFCC
  c->r[1]=c->r[1]+0x00000010u; // 8044BFD0
  return; // 8044BFD4
}

// fn_8044BFD8
void f_8044BFD8(Ctx* __restrict c) {
  trace_call(0x8044BFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044BFD8
  c->r[0]=c->lr; // 8044BFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044BFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044BFE4
  c->r[31]=c->r[5]|c->r[5]; // 8044BFE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044BFEC
  c->lr=0x8044BFF4u; f_8044B6A8(c); // 8044BFF0
  cmps(c,0,(int32_t)c->r[3],0); // 8044BFF4
  if (!crb(c,2)) { goto L_8044C004; } // 8044BFF8
  c->r[3]=0u+0x00000000u; // 8044BFFC
  goto L_8044C020; // 8044C000
L_8044C004:;
  c->r[0]=R8(c->r[3]+0x00000025u); // 8044C004
  cmps(c,0,(int32_t)c->r[0],63); // 8044C008
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C00C
  if (!crb(c,1)) { goto L_8044C01C; } // 8044C010
  c->r[0]=0u+0xFFFFFFFFu; // 8044C014
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C018
L_8044C01C:;
  c->r[3]=0u+0x00000001u; // 8044C01C
L_8044C020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044C020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044C024
  c->lr=c->r[0]; // 8044C028
  c->r[1]=c->r[1]+0x00000010u; // 8044C02C
  return; // 8044C030
}

// fn_8044C034
void f_8044C034(Ctx* __restrict c) {
  trace_call(0x8044C034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C034
  c->r[0]=c->lr; // 8044C038
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044C03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044C040
  c->r[31]=c->r[5]|c->r[5]; // 8044C044
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044C048
  c->lr=0x8044C050u; f_8044B6A8(c); // 8044C04C
  cmps(c,0,(int32_t)c->r[3],0); // 8044C050
  if (!crb(c,2)) { goto L_8044C060; } // 8044C054
  c->r[3]=0u+0x00000000u; // 8044C058
  goto L_8044C07C; // 8044C05C
L_8044C060:;
  c->r[0]=R8(c->r[3]+0x00000026u); // 8044C060
  cmps(c,0,(int32_t)c->r[0],63); // 8044C064
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C068
  if (!crb(c,1)) { goto L_8044C078; } // 8044C06C
  c->r[0]=0u+0xFFFFFFFFu; // 8044C070
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C074
L_8044C078:;
  c->r[3]=0u+0x00000001u; // 8044C078
L_8044C07C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044C07C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044C080
  c->lr=c->r[0]; // 8044C084
  c->r[1]=c->r[1]+0x00000010u; // 8044C088
  return; // 8044C08C
}

// fn_8044C090
void f_8044C090(Ctx* __restrict c) {
  trace_call(0x8044C090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C090
  c->r[0]=c->lr; // 8044C094
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044C098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044C09C
  c->r[31]=c->r[5]|c->r[5]; // 8044C0A0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044C0A4
  c->lr=0x8044C0ACu; f_8044B6A8(c); // 8044C0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8044C0AC
  if (!crb(c,2)) { goto L_8044C0BC; } // 8044C0B0
  c->r[3]=0u+0x00000000u; // 8044C0B4
  goto L_8044C0C8; // 8044C0B8
L_8044C0BC:;
  c->r[0]=R8(c->r[3]+0x00000027u); // 8044C0BC
  c->r[3]=0u+0x00000001u; // 8044C0C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C0C4
L_8044C0C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044C0C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044C0CC
  c->lr=c->r[0]; // 8044C0D0
  c->r[1]=c->r[1]+0x00000010u; // 8044C0D4
  return; // 8044C0D8
}

// fn_8044C0DC
void f_8044C0DC(Ctx* __restrict c) {
  trace_call(0x8044C0DCu);
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[6])>>32); // 8044C0DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[4])>>32); // 8044C0E0
  c->r[7]=c->r[7]^0x80000000u; // 8044C0E4
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 8044C0E8
  c->r[0]=c->r[0]^0x80000000u; // 8044C0EC
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8044C0F0
  c->r[3]=addc(c,~c->r[6],c->r[3],1); // 8044C0F4
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 8044C0F8
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8044C0FC
  c->r[7]=0u-c->r[7]; // 8044C100
  c->r[3]=addc(c,~c->r[7],0x00000001u,1); // 8044C104
  return; // 8044C108
}

// fn_8044C10C
void f_8044C10C(Ctx* __restrict c) {
  trace_call(0x8044C10Cu);
  c->r[6]=rotl(c->r[5],0)&0x0000000Fu; // 8044C10C
  c->r[6]=c->r[6]+0x00000001u; // 8044C110
  goto L_8044C128; // 8044C114
L_8044C118:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044C118
  c->r[4]=c->r[4]+0x00000004u; // 8044C11C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8044C120
  c->r[3]=c->r[3]+0x00000004u; // 8044C124
L_8044C128:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 8044C128
  if (!crb(c,2)) { IRQCHK(c); goto L_8044C118; } // 8044C12C
  c->r[5]=rotl(c->r[5],28)&0x0FFFFFFFu; // 8044C130
  c->r[8]=c->r[5]+0x00000001u; // 8044C134
  goto L_8044C1C4; // 8044C138
L_8044C13C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044C13C
  c->r[5]=R32(c->r[4]+0x00000004u); // 8044C140
  c->r[6]=R32(c->r[4]+0x00000008u); // 8044C144
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 8044C148
  W32(c->r[3]+0x00000000u,c->r[0]); // 8044C14C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8044C150
  W32(c->r[3]+0x00000008u,c->r[6]); // 8044C154
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8044C158
  c->r[0]=R32(c->r[4]+0x00000010u); // 8044C15C
  c->r[5]=R32(c->r[4]+0x00000014u); // 8044C160
  c->r[6]=R32(c->r[4]+0x00000018u); // 8044C164
  c->r[7]=R32(c->r[4]+0x0000001Cu); // 8044C168
  W32(c->r[3]+0x00000010u,c->r[0]); // 8044C16C
  W32(c->r[3]+0x00000014u,c->r[5]); // 8044C170
  W32(c->r[3]+0x00000018u,c->r[6]); // 8044C174
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 8044C178
  c->r[0]=R32(c->r[4]+0x00000020u); // 8044C17C
  c->r[5]=R32(c->r[4]+0x00000024u); // 8044C180
  c->r[6]=R32(c->r[4]+0x00000028u); // 8044C184
  c->r[7]=R32(c->r[4]+0x0000002Cu); // 8044C188
  W32(c->r[3]+0x00000020u,c->r[0]); // 8044C18C
  W32(c->r[3]+0x00000024u,c->r[5]); // 8044C190
  W32(c->r[3]+0x00000028u,c->r[6]); // 8044C194
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 8044C198
  c->r[0]=R32(c->r[4]+0x00000030u); // 8044C19C
  c->r[5]=R32(c->r[4]+0x00000034u); // 8044C1A0
  c->r[6]=R32(c->r[4]+0x00000038u); // 8044C1A4
  c->r[7]=R32(c->r[4]+0x0000003Cu); // 8044C1A8
  c->r[4]=c->r[4]+0x00000040u; // 8044C1AC
  W32(c->r[3]+0x00000030u,c->r[0]); // 8044C1B0
  W32(c->r[3]+0x00000034u,c->r[5]); // 8044C1B4
  W32(c->r[3]+0x00000038u,c->r[6]); // 8044C1B8
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 8044C1BC
  c->r[3]=c->r[3]+0x00000040u; // 8044C1C0
L_8044C1C4:;
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8044C1C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8044C13C; } // 8044C1C8
  return; // 8044C1CC
}

// fn_8044C1D0
void f_8044C1D0(Ctx* __restrict c) {
  trace_call(0x8044C1D0u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8044C1D0
  c->r[6]=rotl(c->r[5],0)&0x0000000Fu; // 8044C1D4
  c->r[7]=c->r[3]+c->r[0]; // 8044C1D8
  c->r[0]=c->r[6]+0x00000001u; // 8044C1DC
  goto L_8044C1E8; // 8044C1E0
L_8044C1E4:;
  {uint32_t ea=c->r[7]+0xFFFFFFFCu; W32(ea,c->r[4]); c->r[7]=ea;} // 8044C1E4
L_8044C1E8:;
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8044C1E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8044C1E4; } // 8044C1EC
  c->r[3]=rotl(c->r[5],28)&0x0FFFFFFFu; // 8044C1F0
  c->r[0]=c->r[3]+0x00000001u; // 8044C1F4
  goto L_8044C23C; // 8044C1F8
L_8044C1FC:;
  W32(c->r[7]+0xFFFFFFFCu,c->r[4]); // 8044C1FC
  W32(c->r[7]+0xFFFFFFF8u,c->r[4]); // 8044C200
  W32(c->r[7]+0xFFFFFFF4u,c->r[4]); // 8044C204
  W32(c->r[7]+0xFFFFFFF0u,c->r[4]); // 8044C208
  W32(c->r[7]+0xFFFFFFECu,c->r[4]); // 8044C20C
  W32(c->r[7]+0xFFFFFFE8u,c->r[4]); // 8044C210
  W32(c->r[7]+0xFFFFFFE4u,c->r[4]); // 8044C214
  W32(c->r[7]+0xFFFFFFE0u,c->r[4]); // 8044C218
  W32(c->r[7]+0xFFFFFFDCu,c->r[4]); // 8044C21C
  W32(c->r[7]+0xFFFFFFD8u,c->r[4]); // 8044C220
  W32(c->r[7]+0xFFFFFFD4u,c->r[4]); // 8044C224
  W32(c->r[7]+0xFFFFFFD0u,c->r[4]); // 8044C228
  W32(c->r[7]+0xFFFFFFCCu,c->r[4]); // 8044C22C
  W32(c->r[7]+0xFFFFFFC8u,c->r[4]); // 8044C230
  W32(c->r[7]+0xFFFFFFC4u,c->r[4]); // 8044C234
  {uint32_t ea=c->r[7]+0xFFFFFFC0u; W32(ea,c->r[4]); c->r[7]=ea;} // 8044C238
L_8044C23C:;
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8044C23C
  if (!crb(c,2)) { IRQCHK(c); goto L_8044C1FC; } // 8044C240
  return; // 8044C244
}

// fn_8044C248
void f_8044C248(Ctx* __restrict c) {
  trace_call(0x8044C248u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C248
  c->r[0]=c->lr; // 8044C24C
  cmps(c,0,(int32_t)c->r[5],0); // 8044C250
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044C254
  c->r[0]=c->r[4]|c->r[4]; // 8044C258
  if (!crb(c,2)) { goto L_8044C278; } // 8044C25C
  c->r[3]=c->r[3]^c->r[4]; // 8044C260
  c->r[0]=0u+0x80000000u; // 8044C264
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8044C268
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8044C26C
  c->r[3]=c->r[3]+c->r[0]; // 8044C270
  goto L_8044C290; // 8044C274
L_8044C278:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8044C278
  c->r[6]=c->r[5]|c->r[5]; // 8044C27C
  c->r[5]=sraw(c,c->r[5],31); // 8044C280
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8044C284
  c->lr=0x8044C28Cu; f_803A9D54(c); // 8044C288
  c->r[3]=c->r[4]|c->r[4]; // 8044C28C
L_8044C290:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044C290
  c->lr=c->r[0]; // 8044C294
  c->r[1]=c->r[1]+0x00000010u; // 8044C298
  return; // 8044C29C
}

// fn_8044C2A0
void f_8044C2A0(Ctx* __restrict c) {
  trace_call(0x8044C2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C2A0
  c->r[0]=c->lr; // 8044C2A4
  c->r[11]=c->r[5]|c->r[5]; // 8044C2A8
  c->r[12]=c->r[6]|c->r[6]; // 8044C2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044C2B0
  c->r[0]=c->r[8]|c->r[7]; cr0(c,c->r[0]); // 8044C2B4
  c->r[9]=0u+0x00000000u; // 8044C2B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044C2BC
  if (!crb(c,2)) { goto L_8044C304; } // 8044C2C0
  c->r[6]=c->r[4]^c->r[6]; // 8044C2C4
  c->r[0]=c->r[3]^c->r[5]; // 8044C2C8
  c->r[0]=c->r[0]^0x80000000u; // 8044C2CC
  c->r[4]=c->r[9]^0x80000000u; // 8044C2D0
  c->r[3]=addc(c,~c->r[9],c->r[6],1); // 8044C2D4
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8044C2D8
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8044C2DC
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8044C2E0
  if (!crb(c,2)) { goto L_8044C2F8; } // 8044C2E4
  c->r[3]=0u+0x80000000u; // 8044C2E8
  c->r[4]=0u+0xFFFFFFFFu; // 8044C2EC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8044C2F0
  goto L_8044C3E0; // 8044C2F4
L_8044C2F8:;
  c->r[4]=0u+0x00000000u; // 8044C2F8
  c->r[3]=0u+0x80000000u; // 8044C2FC
  goto L_8044C3E0; // 8044C300
L_8044C304:;
  c->r[10]=c->r[9]^0x80000000u; // 8044C304
  c->r[0]=c->r[3]^0x80000000u; // 8044C308
  c->r[9]=addc(c,~c->r[9],c->r[4],1); // 8044C30C
  c->r[31]=0u+0x00000001u; // 8044C310
  c->r[10]=addc(c,~c->r[10],c->r[0],c->xer_ca); // 8044C314
  c->r[10]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8044C318
  c->r[10]=0u-c->r[10]; cr0(c,c->r[10]); // 8044C31C
  if (crb(c,2)) { goto L_8044C330; } // 8044C320
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8044C324
  c->r[31]=0u+0xFFFFFFFFu; // 8044C328
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8044C32C
L_8044C330:;
  c->r[9]=0u+0x00000000u; // 8044C330
  c->r[0]=c->r[5]^0x80000000u; // 8044C334
  c->r[10]=c->r[9]^0x80000000u; // 8044C338
  c->r[9]=addc(c,~c->r[9],c->r[6],1); // 8044C33C
  c->r[10]=addc(c,~c->r[10],c->r[0],c->xer_ca); // 8044C340
  c->r[10]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8044C344
  c->r[10]=0u-c->r[10]; cr0(c,c->r[10]); // 8044C348
  if (crb(c,2)) { goto L_8044C35C; } // 8044C34C
  c->r[12]=addc(c,~c->r[6],0x00000000u,1); // 8044C350
  c->r[31]=0u-c->r[31]; // 8044C354
  c->r[11]=addc(c,~c->r[5],0,c->xer_ca); // 8044C358
L_8044C35C:;
  c->r[5]=0u+0x00000000u; // 8044C35C
  c->r[0]=c->r[7]^0x80000000u; // 8044C360
  c->r[6]=c->r[5]^0x80000000u; // 8044C364
  c->r[5]=addc(c,~c->r[5],c->r[8],1); // 8044C368
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8044C36C
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8044C370
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8044C374
  if (crb(c,2)) { goto L_8044C388; } // 8044C378
  c->r[8]=addc(c,~c->r[8],0x00000000u,1); // 8044C37C
  c->r[31]=0u-c->r[31]; // 8044C380
  c->r[7]=addc(c,~c->r[7],0,c->xer_ca); // 8044C384
L_8044C388:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[12])>>32); // 8044C388
  c->r[5]=c->r[7]|c->r[7]; // 8044C38C
  c->r[10]=rotl(c->r[8],31)&0xFFFFFFFFu; // 8044C390
  c->r[5]=(rotl(c->r[8],0)&0x00000001u)|(c->r[5]&~0x00000001u); // 8044C394
  c->r[10]=(rotl(c->r[7],31)&0x80000000u)|(c->r[10]&~0x80000000u); // 8044C398
  c->r[9]=sraw(c,c->r[5],1); // 8044C39C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[12]); // 8044C3A0
  c->r[5]=c->r[7]|c->r[7]; // 8044C3A4
  c->r[10]=addc(c,c->r[10],0,c->xer_ca); // 8044C3A8
  c->r[9]=addc(c,c->r[9],0,c->xer_ca); // 8044C3AC
  c->r[6]=c->r[8]|c->r[8]; // 8044C3B0
  c->r[3]=c->r[0]+c->r[3]; // 8044C3B4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[11]); // 8044C3B8
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[12]); // 8044C3BC
  c->r[0]=c->r[3]+c->r[0]; // 8044C3C0
  c->r[4]=addc(c,c->r[10],c->r[7],0); // 8044C3C4
  c->r[3]=addc(c,c->r[9],c->r[0],c->xer_ca); // 8044C3C8
  c->lr=0x8044C3D0u; f_803A9D54(c); // 8044C3CC
  cmps(c,0,(int32_t)c->r[31],0); // 8044C3D0
  if (!crb(c,0)) { goto L_8044C3E0; } // 8044C3D4
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8044C3D8
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8044C3DC
L_8044C3E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044C3E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044C3E4
  c->lr=c->r[0]; // 8044C3E8
  c->r[1]=c->r[1]+0x00000010u; // 8044C3EC
  return; // 8044C3F0
}

// fn_8044C3F4
void f_8044C3F4(Ctx* __restrict c) {
  trace_call(0x8044C3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C3F4
  c->r[0]=c->lr; // 8044C3F8
  c->r[5]=0u+0x806A0000u; // 8044C3FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044C400
  c->r[4]=c->r[1]+0x00000008u; // 8044C404
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044C408
  c->r[31]=0u+0x807E0000u; // 8044C40C
  c->r[31]=c->r[31]+0x000013C8u; // 8044C410
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044C414
  c->r[30]=c->r[3]|c->r[3]; // 8044C418
  c->r[3]=c->r[5]+0x00007910u; // 8044C41C
  c->lr=0x8044C424u; f_8045A184(c); // 8044C420
  cmps(c,0,(int32_t)c->r[3],0); // 8044C424
  if (!crb(c,2)) { goto L_8044C430; } // 8044C428
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044C42C
L_8044C430:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8044C430
  c->r[0]=c->r[3]+0x00000001u; // 8044C434
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044C438
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044C43C
  cmps(c,0,(int32_t)c->r[0],1); // 8044C440
  if (!crb(c,1)) { goto L_8044C454; } // 8044C444
  c->r[0]=R32(c->r[31]+0x00000004u); // 8044C448
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8044C44C
  if (crb(c,2)) { goto L_8044C494; } // 8044C450
L_8044C454:;
  cmps(c,0,(int32_t)c->r[30],-1); // 8044C454
  W32(c->r[31]+0x00000004u,c->r[30]); // 8044C458
  if (!crb(c,2)) { goto L_8044C478; } // 8044C45C
  c->r[0]=0u+0x00000000u; // 8044C460
  c->r[3]=c->r[31]+0x00000008u; // 8044C464
  c->r[4]=0u+0x00000001u; // 8044C468
  W32(c->r[31]+0x00000008u,c->r[0]); // 8044C46C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044C470
  goto L_8044C494; // 8044C474
L_8044C478:;
  c->r[4]=0u+0x80000000u; // 8044C478
  c->r[3]=c->r[31]+0x00000008u; // 8044C47C
  c->r[4]=R32(c->r[4]+0x000000F8u); // 8044C480
  c->r[0]=0u+0x00000000u; // 8044C484
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8044C488
  W32(c->r[31]+0x00000008u,c->r[0]); // 8044C48C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044C490
L_8044C494:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044C494
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044C498
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044C49C
  c->lr=c->r[0]; // 8044C4A0
  c->r[1]=c->r[1]+0x00000020u; // 8044C4A4
  return; // 8044C4A8
}

// fn_8044C4AC
void f_8044C4AC(Ctx* __restrict c) {
  trace_call(0x8044C4ACu);
  c->r[4]=0u+0x807E0000u; // 8044C4AC
  c->r[3]=R32(c->r[4]+0x000013C8u); // 8044C4B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044C4B4
  W32(c->r[4]+0x000013C8u,c->r[0]); // 8044C4B8
  c->r[0]=R32(c->r[4]+0x000013C8u); // 8044C4BC
  c->r[0]=R32(c->r[4]+0x000013C8u); // 8044C4C0
  cmps(c,0,(int32_t)c->r[0],0); // 8044C4C4
  if (!crb(c,0)) return; // 8044C4C8
  c->r[0]=0u+0x00000000u; // 8044C4CC
  W32(c->r[4]+0x000013C8u,c->r[0]); // 8044C4D0
  return; // 8044C4D4
}

// fn_8044C4D8
void f_8044C4D8(Ctx* __restrict c) {
  trace_call(0x8044C4D8u);
  c->r[3]=0u+0x807E0000u; // 8044C4D8
  c->r[0]=R32(c->r[3]+0x000013C8u); // 8044C4DC
  cmps(c,1,(int32_t)c->r[0],0); // 8044C4E0
  if (!crb(c,5)) { goto L_8044C4F8; } // 8044C4E4
  c->r[3]=0u+0x807E0000u; // 8044C4E8
  c->r[0]=R32(c->r[3]+0x000013CCu); // 8044C4EC
  cmps(c,1,(int32_t)c->r[0],-1); // 8044C4F0
  if (!crb(c,6)) { goto L_8044C504; } // 8044C4F4
L_8044C4F8:;
  c->r[4]=0u+0x00000000u; // 8044C4F8
  c->r[3]=0u+0x00000000u; // 8044C4FC
  return; // 8044C500
L_8044C504:;
  c->r[3]=mftb(c,269); // 8044C504
  c->r[4]=mftb(c,268); // 8044C508
  c->r[0]=mftb(c,269); // 8044C50C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8044C510
  if (!crb(c,2)) { IRQCHK(c); goto L_8044C504; } // 8044C514
  return; // 8044C518
}

// fn_8044C51C
void f_8044C51C(Ctx* __restrict c) {
  trace_call(0x8044C51Cu);
  c->r[5]=0u+0x807E0000u; // 8044C51C
  c->r[4]=0u+0x00000001u; // 8044C520
  c->r[3]=c->r[5]+0x000013D0u; // 8044C524
  c->r[5]=R32(c->r[5]+0x000013D0u); // 8044C528
  c->r[0]=R32(c->r[3]+0x00000004u); // 8044C52C
  c->r[3]=0u+0x00000000u; // 8044C530
  c->r[0]=addc(c,~c->r[0],c->r[4],1); // 8044C534
  c->r[0]=addc(c,~c->r[5],c->r[3],c->xer_ca); // 8044C538
  c->r[0]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 8044C53C
  c->r[0]=0u-c->r[0]; // 8044C540
  c->r[3]=addc(c,~c->r[0],0x00000001u,1); // 8044C544
  return; // 8044C548
}

// fn_8044C54C
void f_8044C54C(Ctx* __restrict c) {
  trace_call(0x8044C54Cu);
  c->r[3]=0u+0x807E0000u; // 8044C54C
  c->r[4]=c->r[3]+0x000013D0u; // 8044C550
  c->r[3]=R32(c->r[3]+0x000013D0u); // 8044C554
  c->r[4]=R32(c->r[4]+0x00000004u); // 8044C558
  return; // 8044C55C
}

// fn_8044C560
void f_8044C560(Ctx* __restrict c) {
  trace_call(0x8044C560u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044C560
  return; // 8044C564
}

// fn_8044C568
void f_8044C568(Ctx* __restrict c) {
  trace_call(0x8044C568u);
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044C568
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8044C56C
  return; // 8044C570
}

// fn_8044C574
void f_8044C574(Ctx* __restrict c) {
  trace_call(0x8044C574u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 8044C574
  return; // 8044C578
}

// fn_8044C57C
void f_8044C57C(Ctx* __restrict c) {
  trace_call(0x8044C57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C57C
  c->r[0]=c->lr; // 8044C580
  c->r[7]=0u+0x806A0000u; // 8044C584
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044C588
  c->r[6]=c->r[1]+0x00000008u; // 8044C58C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044C590
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044C594
  c->r[30]=c->r[3]|c->r[3]; // 8044C598
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044C59C
  c->r[31]=R32(c->r[3]+0x00000024u); // 8044C5A0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8044C5A4
  c->r[3]=c->r[1]+0x00000010u; // 8044C5A8
  W32(c->r[1]+0x00000010u,c->r[4]); // 8044C5AC
  c->r[4]=c->r[7]+0x00007918u; // 8044C5B0
  W32(c->r[1]+0x00000014u,c->r[5]); // 8044C5B4
  c->r[5]=c->r[4]+0x00000005u; // 8044C5B8
  c->lr=0x8044C5C0u; f_80460148(c); // 8044C5BC
  cmps(c,0,(int32_t)c->r[3],0); // 8044C5C0
  if (!crb(c,2)) { goto L_8044C5DC; } // 8044C5C4
  c->r[3]=c->r[31]|c->r[31]; // 8044C5C8
  c->r[4]=0u+0x00000000u; // 8044C5CC
  c->r[5]=0u+0x00000000u; // 8044C5D0
  c->lr=0x8044C5D8u; f_8044DC40(c); // 8044C5D4
  goto L_8044C5EC; // 8044C5D8
L_8044C5DC:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 8044C5DC
  c->r[3]=c->r[31]|c->r[31]; // 8044C5E0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8044C5E4
  c->lr=0x8044C5ECu; f_8044DC40(c); // 8044C5E8
L_8044C5EC:;
  c->r[0]=0u+0x00000001u; // 8044C5EC
  W32(c->r[30]+0x00000014u,c->r[0]); // 8044C5F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044C5F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044C5F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044C5FC
  c->lr=c->r[0]; // 8044C600
  c->r[1]=c->r[1]+0x00000020u; // 8044C604
  return; // 8044C608
}

// fn_8044C60C
void f_8044C60C(Ctx* __restrict c) {
  trace_call(0x8044C60Cu);
  c->r[0]=R32(c->r[3]+0x00000014u); // 8044C60C
  cmps(c,0,(int32_t)c->r[0],1); // 8044C610
  if (crb(c,2)) { goto L_8044C628; } // 8044C614
  c->r[0]=0u+0x00000000u; // 8044C618
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044C61C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044C620
  return; // 8044C624
L_8044C628:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8044C628
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044C62C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8044C630
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044C634
  return; // 8044C638
}

// fn_8044C63C
void f_8044C63C(Ctx* __restrict c) {
  trace_call(0x8044C63Cu);
  c->r[3]=R32(c->r[3]+0x00000024u); // 8044C63C
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8044C640
  f_8044DD24(c); return; // 8044C644
}

// fn_8044C648
void f_8044C648(Ctx* __restrict c) {
  trace_call(0x8044C648u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 8044C648
  return; // 8044C64C
}

// fn_8044C650
void f_8044C650(Ctx* __restrict c) {
  trace_call(0x8044C650u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8044C650
  return; // 8044C654
}

// fn_8044C658
void f_8044C658(Ctx* __restrict c) {
  trace_call(0x8044C658u);
  c->r[3]=R32(c->r[3]+0x00000064u); // 8044C658
  return; // 8044C65C
}

// fn_8044C660
void f_8044C660(Ctx* __restrict c) {
  trace_call(0x8044C660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C660
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8044C664
  c->r[6]=rotl(c->r[4],1)&0x00000001u; // 8044C668
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044C66C
  c->r[7]=c->r[0]+c->r[5]; // 8044C670
  c->r[10]=c->r[6]+c->r[4]; // 8044C674
  c->r[5]=rotl(c->r[7],0)&0xFFFFFFFEu; // 8044C678
  c->r[4]=rotl(c->r[7],1)&0x00000001u; // 8044C67C
  c->r[4]=c->r[4]+c->r[5]; // 8044C680
  c->r[27]=sraw(c,c->r[4],1); // 8044C684
  c->r[4]=rotl(c->r[10],0)&0xFFFFFFFEu; // 8044C688
  c->r[6]=R32(c->r[3]+0x00000008u); // 8044C68C
  c->r[8]=R32(c->r[3]+0x00000028u); // 8044C690
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 8044C694
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8044C698
  c->r[6]=rotl(c->r[10],1)&0x00000001u; // 8044C69C
  c->r[7]=R32(c->r[3]+0x00000018u); // 8044C6A0
  c->r[31]=c->r[11]-c->r[5]; // 8044C6A4
  c->r[10]=R32(c->r[3]+0x00000004u); // 8044C6A8
  c->r[12]=c->r[6]+c->r[4]; // 8044C6AC
  c->r[6]=c->r[4]+c->r[10]; // 8044C6B0
  c->r[0]=R32(c->r[3]+0x00000044u); // 8044C6B4
  c->r[11]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[7]); // 8044C6B8
  c->r[10]=R32(c->r[3]+0x00000014u); // 8044C6BC
  c->r[12]=sraw(c,c->r[12],1); // 8044C6C0
  c->r[7]=R32(c->r[3]+0x00000024u); // 8044C6C4
  c->r[30]=c->r[9]+c->r[6]; // 8044C6C8
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8044C6CC
  c->r[28]=R32(c->r[3]+0x0000002Cu); // 8044C6D0
  c->r[10]=c->r[12]+c->r[10]; // 8044C6D4
  c->r[9]=c->r[29]-c->r[27]; // 8044C6D8
  c->r[7]=c->r[12]+c->r[7]; // 8044C6DC
  c->r[8]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[8]); // 8044C6E0
  c->r[6]=c->r[28]-c->r[27]; // 8044C6E4
  c->r[10]=c->r[11]+c->r[10]; // 8044C6E8
  W32(c->r[3]+0x00000004u,c->r[30]); // 8044C6EC
  cmps(c,0,(int32_t)c->r[0],0); // 8044C6F0
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8044C6F4
  c->r[7]=c->r[8]+c->r[7]; // 8044C6F8
  W32(c->r[3]+0x00000014u,c->r[10]); // 8044C6FC
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 8044C700
  W32(c->r[3]+0x00000024u,c->r[7]); // 8044C704
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 8044C708
  if (crb(c,2)) { goto L_8044C730; } // 8044C70C
  c->r[6]=R32(c->r[3]+0x00000048u); // 8044C710
  c->r[4]=c->r[4]+c->r[0]; // 8044C714
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8044C718
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8044C71C
  c->r[0]=c->r[0]-c->r[5]; // 8044C720
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8044C724
  c->r[0]=c->r[6]+c->r[4]; // 8044C728
  W32(c->r[3]+0x00000044u,c->r[0]); // 8044C72C
L_8044C730:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044C730
  c->r[1]=c->r[1]+0x00000020u; // 8044C734
  return; // 8044C738
}

// fn_8044C73C
void f_8044C73C(Ctx* __restrict c) {
  trace_call(0x8044C73Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C73C
  c->r[0]=c->lr; // 8044C740
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044C744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044C748
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044C74C
  c->r[30]=c->r[4]|c->r[4]; // 8044C750
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044C754
  c->r[29]=c->r[3]|c->r[3]; // 8044C758
  c->lr=0x8044C760u; f_8044D994(c); // 8044C75C
  cmps(c,0,(int32_t)c->r[3],1); // 8044C760
  if (!crb(c,2)) { goto L_8044C770; } // 8044C764
  c->r[3]=0u+0x00000000u; // 8044C768
  goto L_8044C7EC; // 8044C76C
L_8044C770:;
  c->r[3]=c->r[29]|c->r[29]; // 8044C770
  c->lr=0x8044C778u; f_8044C648(c); // 8044C774
  cmps(c,0,(int32_t)c->r[3],0); // 8044C778
  if (crb(c,2)) { goto L_8044C7D4; } // 8044C77C
  if (!crb(c,0)) { goto L_8044C790; } // 8044C780
  cmps(c,0,(int32_t)c->r[3],-1); // 8044C784
  if (!crb(c,0)) { goto L_8044C79C; } // 8044C788
  goto L_8044C7E4; // 8044C78C
L_8044C790:;
  cmps(c,0,(int32_t)c->r[3],2); // 8044C790
  if (!crb(c,0)) { goto L_8044C7E4; } // 8044C794
  goto L_8044C7DC; // 8044C798
L_8044C79C:;
  c->r[3]=R32(c->r[30]+0x00000088u); // 8044C79C
  c->r[31]=0u+0x00000000u; // 8044C7A0
  cmps(c,0,(int32_t)c->r[3],0); // 8044C7A4
  if (crb(c,2)) { goto L_8044C7E8; } // 8044C7A8
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 8044C7AC
  c->lr=0x8044C7B4u; f_8044EE8C(c); // 8044C7B0
  cmps(c,0,(int32_t)c->r[3],1); // 8044C7B4
  if (!crb(c,2)) { goto L_8044C7E8; } // 8044C7B8
  c->r[3]=c->r[29]|c->r[29]; // 8044C7BC
  c->lr=0x8044C7C4u; f_8044C650(c); // 8044C7C0
  cmps(c,0,(int32_t)c->r[3],0); // 8044C7C4
  if (!crb(c,2)) { goto L_8044C7E8; } // 8044C7C8
  c->r[31]=0u+0x00000001u; // 8044C7CC
  goto L_8044C7E8; // 8044C7D0
L_8044C7D4:;
  c->r[31]=0u+0x00000000u; // 8044C7D4
  goto L_8044C7E8; // 8044C7D8
L_8044C7DC:;
  c->r[31]=0u+0x00000001u; // 8044C7DC
  goto L_8044C7E8; // 8044C7E0
L_8044C7E4:;
  c->r[31]=0u+0x00000000u; // 8044C7E4
L_8044C7E8:;
  c->r[3]=c->r[31]|c->r[31]; // 8044C7E8
L_8044C7EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044C7EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044C7F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044C7F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044C7F8
  c->lr=c->r[0]; // 8044C7FC
  c->r[1]=c->r[1]+0x00000020u; // 8044C800
  return; // 8044C804
}

// fn_8044C808
void f_8044C808(Ctx* __restrict c) {
  trace_call(0x8044C808u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C808
  c->r[0]=c->lr; // 8044C80C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044C810
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044C814
  c->r[31]=0u+0x00000001u; // 8044C818
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044C81C
  c->r[30]=c->r[5]|c->r[5]; // 8044C820
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044C824
  c->r[29]=c->r[4]|c->r[4]; // 8044C828
  W32(c->r[1]+0x00000010u,c->r[28]); // 8044C82C
  c->r[28]=c->r[3]|c->r[3]; // 8044C830
  c->r[0]=R32(c->r[3]+0x00000034u); // 8044C834
  cmps(c,0,(int32_t)c->r[0],100); // 8044C838
  if (!crb(c,2)) { goto L_8044C848; } // 8044C83C
  c->r[31]=0u+0x00000000u; // 8044C840
  goto L_8044C8C0; // 8044C844
L_8044C848:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8044C848
  if (!crb(c,2)) { goto L_8044C8C0; } // 8044C84C
  cmps(c,0,(int32_t)c->r[5],11); // 8044C850
  if (!crb(c,0)) { goto L_8044C888; } // 8044C854
  cmps(c,0,(int32_t)c->r[5],2); // 8044C858
  if (crb(c,2)) { goto L_8044C8A4; } // 8044C85C
  if (!crb(c,0)) { goto L_8044C874; } // 8044C860
  cmps(c,0,(int32_t)c->r[5],0); // 8044C864
  if (crb(c,2)) { goto L_8044C8C0; } // 8044C868
  if (!crb(c,0)) { goto L_8044C8BC; } // 8044C86C
  goto L_8044C8C0; // 8044C870
L_8044C874:;
  cmps(c,0,(int32_t)c->r[5],6); // 8044C874
  if (!crb(c,0)) { goto L_8044C8C0; } // 8044C878
  cmps(c,0,(int32_t)c->r[5],4); // 8044C87C
  if (!crb(c,0)) { goto L_8044C8BC; } // 8044C880
  goto L_8044C8C0; // 8044C884
L_8044C888:;
  cmps(c,0,(int32_t)c->r[5],21); // 8044C888
  if (crb(c,2)) { goto L_8044C8BC; } // 8044C88C
  if (!crb(c,0)) { goto L_8044C898; } // 8044C890
  goto L_8044C8C0; // 8044C894
L_8044C898:;
  cmps(c,0,(int32_t)c->r[5],100); // 8044C898
  if (crb(c,2)) { goto L_8044C8C0; } // 8044C89C
  goto L_8044C8C0; // 8044C8A0
L_8044C8A4:;
  c->r[3]=R32(c->r[3]+0x00000030u); // 8044C8A4
  c->lr=0x8044C8ACu; f_8044DB48(c); // 8044C8A8
  cmps(c,0,(int32_t)c->r[3],1); // 8044C8AC
  if (crb(c,2)) { goto L_8044C8C0; } // 8044C8B0
  c->r[31]=0u+0x00000000u; // 8044C8B4
  goto L_8044C8C0; // 8044C8B8
L_8044C8BC:;
  c->r[31]=0u+0x00000000u; // 8044C8BC
L_8044C8C0:;
  cmps(c,0,(int32_t)c->r[31],1); // 8044C8C0
  if (!crb(c,2)) { goto L_8044C9B8; } // 8044C8C4
  cmps(c,0,(int32_t)c->r[30],11); // 8044C8C8
  W32(c->r[28]+0x00000034u,c->r[30]); // 8044C8CC
  if (crb(c,2)) { goto L_8044C928; } // 8044C8D0
  if (!crb(c,0)) { goto L_8044C904; } // 8044C8D4
  cmps(c,0,(int32_t)c->r[30],3); // 8044C8D8
  if (crb(c,2)) { goto L_8044C9A0; } // 8044C8DC
  if (!crb(c,0)) { goto L_8044C8F4; } // 8044C8E0
  cmps(c,0,(int32_t)c->r[30],1); // 8044C8E4
  if (crb(c,2)) { goto L_8044C994; } // 8044C8E8
  if (!crb(c,0)) { goto L_8044C93C; } // 8044C8EC
  goto L_8044C9A0; // 8044C8F0
L_8044C8F4:;
  cmps(c,0,(int32_t)c->r[30],5); // 8044C8F4
  if (crb(c,2)) { goto L_8044C964; } // 8044C8F8
  if (!crb(c,0)) { goto L_8044C9A0; } // 8044C8FC
  goto L_8044C950; // 8044C900
L_8044C904:;
  cmps(c,0,(int32_t)c->r[30],21); // 8044C904
  if (crb(c,2)) { goto L_8044C978; } // 8044C908
  if (!crb(c,0)) { goto L_8044C91C; } // 8044C90C
  cmps(c,0,(int32_t)c->r[30],13); // 8044C910
  if (crb(c,2)) { goto L_8044C928; } // 8044C914
  goto L_8044C9A0; // 8044C918
L_8044C91C:;
  cmps(c,0,(int32_t)c->r[30],100); // 8044C91C
  if (crb(c,2)) { goto L_8044C9A0; } // 8044C920
  goto L_8044C9A0; // 8044C924
L_8044C928:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8044C928
  c->r[4]=R32(c->r[29]+0x0000004Cu); // 8044C92C
  c->r[5]=R32(c->r[28]+0x00000038u); // 8044C930
  c->lr=0x8044C938u; f_8044E8C8(c); // 8044C934
  goto L_8044C9B8; // 8044C938
L_8044C93C:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 8044C93C
  c->r[4]=R32(c->r[29]+0x0000004Cu); // 8044C940
  c->r[5]=R32(c->r[28]+0x00000038u); // 8044C944
  c->lr=0x8044C94Cu; f_8044DA98(c); // 8044C948
  goto L_8044C9B8; // 8044C94C
L_8044C950:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 8044C950
  c->r[4]=R32(c->r[29]+0x0000004Cu); // 8044C954
  c->r[5]=R32(c->r[28]+0x00000038u); // 8044C958
  c->lr=0x8044C960u; f_8044DAF0(c); // 8044C95C
  goto L_8044C9B8; // 8044C960
L_8044C964:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 8044C964
  c->r[4]=R32(c->r[29]+0x0000004Cu); // 8044C968
  c->r[5]=R32(c->r[28]+0x00000038u); // 8044C96C
  c->lr=0x8044C974u; f_8044DB1C(c); // 8044C970
  goto L_8044C9B8; // 8044C974
L_8044C978:;
  c->r[12]=R32(c->r[28]+0x00000070u); // 8044C978
  c->r[3]=R32(c->r[28]+0x00000038u); // 8044C97C
  cmps(c,0,(int32_t)c->r[12],0); // 8044C980
  if (crb(c,2)) { goto L_8044C9B8; } // 8044C984
  c->ctr=c->r[12]; // 8044C988
  if (true) { c->lr=0x8044C990u; dispatch(c,c->ctr); } // 8044C98C
  goto L_8044C9B8; // 8044C990
L_8044C994:;
  c->r[3]=R32(c->r[28]+0x00000038u); // 8044C994
  c->lr=0x8044C99Cu; f_8044C9D8(c); // 8044C998
  goto L_8044C9B8; // 8044C99C
L_8044C9A0:;
  c->r[5]=0u+0x806A0000u; // 8044C9A0
  c->r[3]=c->r[28]|c->r[28]; // 8044C9A4
  c->r[5]=c->r[5]+0x00007938u; // 8044C9A8
  c->r[4]=c->r[29]|c->r[29]; // 8044C9AC
  c->r[5]=c->r[5]+0x00000030u; // 8044C9B0
  c->lr=0x8044C9B8u; f_8044D950(c); // 8044C9B4
L_8044C9B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044C9B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044C9BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044C9C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044C9C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8044C9C8
  c->lr=c->r[0]; // 8044C9CC
  c->r[1]=c->r[1]+0x00000020u; // 8044C9D0
  return; // 8044C9D4
}

// fn_8044C9D8
void f_8044C9D8(Ctx* __restrict c) {
  trace_call(0x8044C9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044C9D8
  c->r[8]=0u+0x43300000u; // 8044C9DC
  c->r[7]=0u+0x00000000u; // 8044C9E0
  c->r[6]=0u+0x806A0000u; // 8044C9E4
  W8(c->r[3]+0x00000000u,c->r[7]); // 8044C9E8
  c->r[5]=0u+0x806A0000u; // 8044C9EC
  c->r[0]=0u+0x0000001Bu; // 8044C9F0
  c->r[4]=0u+0x00000010u; // 8044C9F4
  W8(c->r[3]+0x00000001u,c->r[7]); // 8044C9F8
  {uint32_t ea=c->r[6]+0x00007930u; c->f[0]=RF64(ea);} // 8044C9FC
  W8(c->r[3]+0x00000002u,c->r[7]); // 8044CA00
  {uint32_t ea=c->r[5]+0x00007928u; c->f[8]=c->ps1[8]=RF32(ea);} // 8044CA04
  W8(c->r[3]+0x00000003u,c->r[7]); // 8044CA08
  W8(c->r[3]+0x00000004u,c->r[7]); // 8044CA0C
  W8(c->r[3]+0x00000005u,c->r[7]); // 8044CA10
  W8(c->r[3]+0x00000006u,c->r[7]); // 8044CA14
  W8(c->r[3]+0x00000007u,c->r[7]); // 8044CA18
  W8(c->r[3]+0x00000008u,c->r[7]); // 8044CA1C
  W8(c->r[3]+0x00000009u,c->r[7]); // 8044CA20
  W8(c->r[3]+0x0000000Au,c->r[7]); // 8044CA24
  W8(c->r[3]+0x0000000Bu,c->r[7]); // 8044CA28
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 8044CA2C
  W8(c->r[3]+0x0000000Du,c->r[7]); // 8044CA30
  W8(c->r[3]+0x0000000Eu,c->r[7]); // 8044CA34
  W32(c->r[1]+0x00000008u,c->r[8]); // 8044CA38
  W32(c->r[1]+0x00000010u,c->r[8]); // 8044CA3C
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 8044CA40
  c->ctr=c->r[0]; // 8044CA44
L_8044CA48:;
  c->r[5]=c->r[4]+0xFFFFFFF0u; // 8044CA48
  c->r[7]=c->r[4]+0xFFFFFFF2u; // 8044CA4C
  c->r[5]=c->r[5]^0x80000000u; // 8044CA50
  c->r[6]=c->r[4]+0xFFFFFFF4u; // 8044CA54
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8044CA58
  c->r[0]=c->r[4]+0xFFFFFFF1u; // 8044CA5C
  c->r[5]=c->r[0]^0x80000000u; // 8044CA60
  c->r[8]=c->r[7]^0x80000000u; // 8044CA64
  W32(c->r[1]+0x00000014u,c->r[5]); // 8044CA68
  c->r[0]=c->r[4]+0xFFFFFFF3u; // 8044CA6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8044CA70
  c->r[7]=c->r[0]^0x80000000u; // 8044CA74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044CA78
  c->r[5]=c->r[4]+0xFFFFFFF5u; // 8044CA7C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8044CA80
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8044CA84
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8044CA88
  c->r[0]=c->r[4]+0xFFFFFFF6u; // 8044CA8C
  W32(c->r[1]+0x00000014u,c->r[7]); // 8044CA90
  c->r[6]=c->r[6]^0x80000000u; // 8044CA94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044CA98
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[3]); // 8044CA9C
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[2]); // 8044CAA0
  c->r[5]=c->r[5]^0x80000000u; // 8044CAA4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8044CAA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044CAAC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8044CAB0
  c->f[6]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 8044CAB4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8044CAB8
  W32(c->r[1]+0x00000014u,c->r[5]); // 8044CABC
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8044CAC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044CAC4
  c->r[0]=c->r[0]^0x80000000u; // 8044CAC8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8044CACC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044CAD0
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[2]); // 8044CAD4
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 8044CAD8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 8044CADC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[6]);} // 8044CAE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8044CAE4
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[4]); // 8044CAE8
  c->f[6]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044CAEC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044CAF0
  c->r[0]=c->r[0]^0x80000000u; // 8044CAF4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[7]);} // 8044CAF8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8044CAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044CB00
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8044CB04
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 8044CB08
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044CB0C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8044CB10
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 8044CB14
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[6]);} // 8044CB18
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8044CB1C
  W8(c->r[3]+c->r[4],c->r[0]); // 8044CB20
  c->r[6]=c->r[3]+c->r[4]; // 8044CB24
  c->r[5]=R32(c->r[1]+0x00000024u); // 8044CB28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8044CB2C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8044CB30
  W8(c->r[6]+0x00000001u,c->r[5]); // 8044CB34
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 8044CB38
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044CB3C
  c->r[4]=c->r[4]+0x00000008u; // 8044CB40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[5]);} // 8044CB44
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 8044CB48
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8044CB4C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[4]);} // 8044CB50
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8044CB54
  c->r[5]=R32(c->r[1]+0x00000034u); // 8044CB58
  W8(c->r[6]+0x00000002u,c->r[0]); // 8044CB5C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8044CB60
  W8(c->r[6]+0x00000003u,c->r[5]); // 8044CB64
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 8044CB68
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8044CB6C
  c->r[5]=R32(c->r[1]+0x00000044u); // 8044CB70
  W8(c->r[6]+0x00000004u,c->r[0]); // 8044CB74
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8044CB78
  W8(c->r[6]+0x00000005u,c->r[5]); // 8044CB7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 8044CB80
  W8(c->r[6]+0x00000006u,c->r[0]); // 8044CB84
  c->r[0]=R32(c->r[1]+0x00000054u); // 8044CB88
  W8(c->r[6]+0x00000007u,c->r[0]); // 8044CB8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044CA48; } // 8044CB90
  c->r[5]=c->r[4]+0xFFFFFFF0u; // 8044CB94
  c->r[0]=c->r[4]+0xFFFFFFF1u; // 8044CB98
  c->r[5]=c->r[5]^0x80000000u; // 8044CB9C
  c->r[8]=0u+0x806A0000u; // 8044CBA0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8044CBA4
  c->r[6]=c->r[0]^0x80000000u; // 8044CBA8
  c->r[5]=c->r[4]+0xFFFFFFF2u; // 8044CBAC
  c->r[0]=c->r[4]+0xFFFFFFF3u; // 8044CBB0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8044CBB4
  c->r[7]=0u+0x806A0000u; // 8044CBB8
  {uint32_t ea=c->r[8]+0x00007930u; c->f[5]=RF64(ea);} // 8044CBBC
  c->r[5]=c->r[5]^0x80000000u; // 8044CBC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044CBC4
  c->r[0]=c->r[0]^0x80000000u; // 8044CBC8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8044CBCC
  c->r[6]=c->r[4]+c->r[3]; // 8044CBD0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8044CBD4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[5]); // 8044CBD8
  {uint32_t ea=c->r[7]+0x00007928u; c->f[4]=c->ps1[4]=RF32(ea);} // 8044CBDC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8044CBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044CBE4
  c->r[0]=0u+0x000000FFu; // 8044CBE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044CBEC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8044CBF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8044CBF4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 8044CBF8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8044CBFC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044CC00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 8044CC04
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8044CC08
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8044CC0C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 8044CC10
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8044CC14
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8044CC18
  c->r[7]=R32(c->r[1]+0x00000054u); // 8044CC1C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8044CC20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8044CC24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[1]);} // 8044CC28
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 8044CC2C
  W8(c->r[3]+c->r[4],c->r[7]); // 8044CC30
  c->r[4]=R32(c->r[1]+0x00000044u); // 8044CC34
  W8(c->r[6]+0x00000001u,c->r[5]); // 8044CC38
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 8044CC3C
  W8(c->r[6]+0x00000002u,c->r[4]); // 8044CC40
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8044CC44
  W8(c->r[6]+0x00000003u,c->r[4]); // 8044CC48
  W8(c->r[3]+0x000000ECu,c->r[0]); // 8044CC4C
  W8(c->r[3]+0x000000EDu,c->r[0]); // 8044CC50
  W8(c->r[3]+0x000000EEu,c->r[0]); // 8044CC54
  W8(c->r[3]+0x000000EFu,c->r[0]); // 8044CC58
  W8(c->r[3]+0x000000F0u,c->r[0]); // 8044CC5C
  W8(c->r[3]+0x000000F1u,c->r[0]); // 8044CC60
  W8(c->r[3]+0x000000F2u,c->r[0]); // 8044CC64
  W8(c->r[3]+0x000000F3u,c->r[0]); // 8044CC68
  W8(c->r[3]+0x000000F4u,c->r[0]); // 8044CC6C
  W8(c->r[3]+0x000000F5u,c->r[0]); // 8044CC70
  W8(c->r[3]+0x000000F6u,c->r[0]); // 8044CC74
  W8(c->r[3]+0x000000F7u,c->r[0]); // 8044CC78
  W8(c->r[3]+0x000000F8u,c->r[0]); // 8044CC7C
  W8(c->r[3]+0x000000F9u,c->r[0]); // 8044CC80
  W8(c->r[3]+0x000000FAu,c->r[0]); // 8044CC84
  W8(c->r[3]+0x000000FBu,c->r[0]); // 8044CC88
  W8(c->r[3]+0x000000FCu,c->r[0]); // 8044CC8C
  W8(c->r[3]+0x000000FDu,c->r[0]); // 8044CC90
  W8(c->r[3]+0x000000FEu,c->r[0]); // 8044CC94
  W8(c->r[3]+0x000000FFu,c->r[0]); // 8044CC98
  c->r[1]=c->r[1]+0x00000060u; // 8044CC9C
  return; // 8044CCA0
}

// fn_8044CCA4
void f_8044CCA4(Ctx* __restrict c) {
  trace_call(0x8044CCA4u);
  W32(c->r[3]+0x00000068u,c->r[4]); // 8044CCA4
  return; // 8044CCA8
}

// fn_8044CCAC
void f_8044CCAC(Ctx* __restrict c) {
  trace_call(0x8044CCACu);
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8044CCAC
  return; // 8044CCB0
}

// fn_8044CCB4
void f_8044CCB4(Ctx* __restrict c) {
  trace_call(0x8044CCB4u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 8044CCB4
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044CCB8
  return; // 8044CCBC
}

// fn_8044CCC0
void f_8044CCC0(Ctx* __restrict c) {
  trace_call(0x8044CCC0u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 8044CCC0
  W32(c->r[3]+0x00000020u,c->r[4]); // 8044CCC4
  return; // 8044CCC8
}

// fn_8044CCCC
void f_8044CCCC(Ctx* __restrict c) {
  trace_call(0x8044CCCCu);
  c->r[3]=R32(c->r[3]+0x00000030u); // 8044CCCC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8044CCD0
  return; // 8044CCD4
}

// fn_8044CCD8
void f_8044CCD8(Ctx* __restrict c) {
  trace_call(0x8044CCD8u);
  W32(c->r[3]+0x00000070u,c->r[4]); // 8044CCD8
  return; // 8044CCDC
}

// fn_8044CCE0
void f_8044CCE0(Ctx* __restrict c) {
  trace_call(0x8044CCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044CCE0
  c->r[0]=c->lr; // 8044CCE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044CCE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044CCEC
  c->r[31]=c->r[5]|c->r[5]; // 8044CCF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044CCF4
  c->r[30]=c->r[4]|c->r[4]; // 8044CCF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044CCFC
  c->r[29]=c->r[3]|c->r[3]; // 8044CD00
  c->r[0]=R32(c->r[3]+0x00000004u); // 8044CD04
  cmps(c,0,(int32_t)c->r[0],0); // 8044CD08
  if (!crb(c,2)) { goto L_8044CD2C; } // 8044CD0C
  c->r[4]=0u+0x806A0000u; // 8044CD10
  c->r[3]=c->r[30]|c->r[30]; // 8044CD14
  c->r[4]=c->r[4]+0x00007938u; // 8044CD18
  c->r[4]=c->r[4]+0x000000BAu; // 8044CD1C
  c->lr=0x8044CD24u; f_8044D558(c); // 8044CD20
  c->r[0]=c->r[3]|c->r[3]; // 8044CD24
  W32(c->r[29]+0x00000004u,c->r[3]); // 8044CD28
L_8044CD2C:;
  cmps(c,0,(int32_t)c->r[0],97); // 8044CD2C
  if (crb(c,2)) { goto L_8044CE5C; } // 8044CD30
  if (!crb(c,0)) { goto L_8044CD74; } // 8044CD34
  cmps(c,0,(int32_t)c->r[0],49); // 8044CD38
  if (crb(c,2)) { goto L_8044CE34; } // 8044CD3C
  if (!crb(c,0)) { goto L_8044CD5C; } // 8044CD40
  cmps(c,0,(int32_t)c->r[0],33); // 8044CD44
  if (crb(c,2)) { goto L_8044CDFC; } // 8044CD48
  if (!crb(c,0)) { goto L_8044CECC; } // 8044CD4C
  cmps(c,0,(int32_t)c->r[0],17); // 8044CD50
  if (crb(c,2)) { goto L_8044CDB0; } // 8044CD54
  goto L_8044CECC; // 8044CD58
L_8044CD5C:;
  cmps(c,0,(int32_t)c->r[0],81); // 8044CD5C
  if (crb(c,2)) { goto L_8044CE5C; } // 8044CD60
  if (!crb(c,0)) { goto L_8044CECC; } // 8044CD64
  cmps(c,0,(int32_t)c->r[0],65); // 8044CD68
  if (crb(c,2)) { goto L_8044CE5C; } // 8044CD6C
  goto L_8044CECC; // 8044CD70
L_8044CD74:;
  cmps(c,0,(int32_t)c->r[0],257); // 8044CD74
  if (crb(c,2)) { goto L_8044CEB4; } // 8044CD78
  if (!crb(c,0)) { goto L_8044CD98; } // 8044CD7C
  cmps(c,0,(int32_t)c->r[0],241); // 8044CD80
  if (crb(c,2)) { goto L_8044CECC; } // 8044CD84
  if (!crb(c,0)) { goto L_8044CECC; } // 8044CD88
  cmps(c,0,(int32_t)c->r[0],113); // 8044CD8C
  if (crb(c,2)) { goto L_8044CECC; } // 8044CD90
  goto L_8044CECC; // 8044CD94
L_8044CD98:;
  cmps(c,0,(int32_t)c->r[0],4097); // 8044CD98
  if (crb(c,2)) { goto L_8044CDD4; } // 8044CD9C
  if (!crb(c,0)) { goto L_8044CECC; } // 8044CDA0
  cmps(c,0,(int32_t)c->r[0],273); // 8044CDA4
  if (crb(c,2)) { goto L_8044CECC; } // 8044CDA8
  goto L_8044CECC; // 8044CDAC
L_8044CDB0:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 8044CDB0
  cmps(c,0,(int32_t)c->r[0],1); // 8044CDB4
  if (crb(c,2)) { goto L_8044CDD4; } // 8044CDB8
  c->r[3]=c->r[29]|c->r[29]; // 8044CDBC
  c->r[4]=c->r[30]|c->r[30]; // 8044CDC0
  c->r[5]=c->r[31]|c->r[31]; // 8044CDC4
  c->r[6]=0u+0x00000000u; // 8044CDC8
  c->lr=0x8044CDD0u; f_8044CF00(c); // 8044CDCC
  goto L_8044CEE4; // 8044CDD0
L_8044CDD4:;
  c->r[3]=c->r[29]|c->r[29]; // 8044CDD4
  c->r[4]=c->r[30]|c->r[30]; // 8044CDD8
  c->r[5]=0u+0x00000015u; // 8044CDDC
  c->lr=0x8044CDE4u; f_8044C808(c); // 8044CDE0
  c->r[3]=c->r[29]|c->r[29]; // 8044CDE4
  c->r[4]=c->r[30]|c->r[30]; // 8044CDE8
  c->r[5]=c->r[31]|c->r[31]; // 8044CDEC
  c->r[6]=0u+0x00000001u; // 8044CDF0
  c->lr=0x8044CDF8u; f_8044CF00(c); // 8044CDF4
  goto L_8044CEE4; // 8044CDF8
L_8044CDFC:;
  c->r[3]=c->r[29]|c->r[29]; // 8044CDFC
  c->r[4]=c->r[30]|c->r[30]; // 8044CE00
  c->r[5]=0u+0x00000001u; // 8044CE04
  c->lr=0x8044CE0Cu; f_8044C808(c); // 8044CE08
  c->r[3]=c->r[29]|c->r[29]; // 8044CE0C
  c->r[4]=c->r[30]|c->r[30]; // 8044CE10
  c->r[5]=c->r[31]|c->r[31]; // 8044CE14
  c->r[6]=0u+0x00000000u; // 8044CE18
  c->lr=0x8044CE20u; f_8044CF00(c); // 8044CE1C
  c->r[3]=c->r[29]|c->r[29]; // 8044CE20
  c->r[4]=c->r[30]|c->r[30]; // 8044CE24
  c->r[5]=c->r[31]|c->r[31]; // 8044CE28
  c->lr=0x8044CE30u; f_8044D154(c); // 8044CE2C
  goto L_8044CEE4; // 8044CE30
L_8044CE34:;
  c->r[3]=c->r[29]|c->r[29]; // 8044CE34
  c->r[4]=c->r[30]|c->r[30]; // 8044CE38
  c->r[5]=0u+0x00000002u; // 8044CE3C
  c->lr=0x8044CE44u; f_8044C808(c); // 8044CE40
  c->r[3]=c->r[29]|c->r[29]; // 8044CE44
  c->r[4]=c->r[30]|c->r[30]; // 8044CE48
  c->r[5]=c->r[31]|c->r[31]; // 8044CE4C
  c->r[6]=0u+0x00000001u; // 8044CE50
  c->lr=0x8044CE58u; f_8044CF00(c); // 8044CE54
  goto L_8044CEE4; // 8044CE58
L_8044CE5C:;
  cmps(c,0,(int32_t)c->r[0],81); // 8044CE5C
  if (!crb(c,2)) { goto L_8044CE6C; } // 8044CE60
  c->r[5]=0u+0x00000004u; // 8044CE64
  goto L_8044CE90; // 8044CE68
L_8044CE6C:;
  cmps(c,0,(int32_t)c->r[0],97); // 8044CE6C
  if (!crb(c,2)) { goto L_8044CE7C; } // 8044CE70
  c->r[5]=0u+0x00000005u; // 8044CE74
  goto L_8044CE90; // 8044CE78
L_8044CE7C:;
  c->r[0]=R32(c->r[30]+0x00000094u); // 8044CE7C
  c->r[5]=0u+0x00000005u; // 8044CE80
  cmps(c,0,(int32_t)c->r[0],81); // 8044CE84
  if (!crb(c,2)) { goto L_8044CE90; } // 8044CE88
  c->r[5]=0u+0x00000004u; // 8044CE8C
L_8044CE90:;
  c->r[3]=c->r[29]|c->r[29]; // 8044CE90
  c->r[4]=c->r[30]|c->r[30]; // 8044CE94
  c->lr=0x8044CE9Cu; f_8044C808(c); // 8044CE98
  c->r[3]=c->r[29]|c->r[29]; // 8044CE9C
  c->r[4]=c->r[30]|c->r[30]; // 8044CEA0
  c->r[5]=c->r[31]|c->r[31]; // 8044CEA4
  c->r[6]=0u+0x00000001u; // 8044CEA8
  c->lr=0x8044CEB0u; f_8044CF00(c); // 8044CEAC
  goto L_8044CEE4; // 8044CEB0
L_8044CEB4:;
  c->r[3]=c->r[29]|c->r[29]; // 8044CEB4
  c->r[4]=c->r[30]|c->r[30]; // 8044CEB8
  c->r[5]=c->r[31]|c->r[31]; // 8044CEBC
  c->r[6]=0u+0x00000000u; // 8044CEC0
  c->lr=0x8044CEC8u; f_8044CF00(c); // 8044CEC4
  goto L_8044CEE4; // 8044CEC8
L_8044CECC:;
  c->r[5]=0u+0x806A0000u; // 8044CECC
  c->r[3]=c->r[29]|c->r[29]; // 8044CED0
  c->r[5]=c->r[5]+0x00007938u; // 8044CED4
  c->r[4]=c->r[30]|c->r[30]; // 8044CED8
  c->r[5]=c->r[5]+0x000000C0u; // 8044CEDC
  c->lr=0x8044CEE4u; f_8044D950(c); // 8044CEE0
L_8044CEE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044CEE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044CEE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044CEEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044CEF0
  c->lr=c->r[0]; // 8044CEF4
  c->r[1]=c->r[1]+0x00000020u; // 8044CEF8
  return; // 8044CEFC
}

// fn_8044CF00
void f_8044CF00(Ctx* __restrict c) {
  trace_call(0x8044CF00u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044CF00
  c->r[0]=c->lr; // 8044CF04
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8044CF08
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8044CF0C
  c->r[31]=c->r[3]|c->r[3]; // 8044CF10
  c->r[3]=c->r[1]+0x00000028u; // 8044CF14
  W32(c->r[1]+0x00000098u,c->r[30]); // 8044CF18
  c->r[30]=c->r[6]|c->r[6]; // 8044CF1C
  W32(c->r[1]+0x00000094u,c->r[29]); // 8044CF20
  c->r[29]=c->r[5]|c->r[5]; // 8044CF24
  c->r[5]=0u+0x00000064u; // 8044CF28
  W32(c->r[1]+0x00000090u,c->r[28]); // 8044CF2C
  c->r[28]=c->r[4]|c->r[4]; // 8044CF30
  c->r[4]=0u+0x00000000u; // 8044CF34
  c->lr=0x8044CF3Cu; f_800043EC(c); // 8044CF38
  c->r[3]=c->r[31]|c->r[31]; // 8044CF3C
  c->r[4]=c->r[28]|c->r[28]; // 8044CF40
  c->r[5]=c->r[1]+0x00000028u; // 8044CF44
  c->lr=0x8044CF4Cu; f_8044D03C(c); // 8044CF48
  cmps(c,0,(int32_t)c->r[30],1); // 8044CF4C
  if (!crb(c,2)) { goto L_8044CF5C; } // 8044CF50
  c->r[0]=R32(c->r[31]+0x00000038u); // 8044CF54
  goto L_8044CF60; // 8044CF58
L_8044CF5C:;
  c->r[0]=0u+0x00000000u; // 8044CF5C
L_8044CF60:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 8044CF60
  c->r[0]=R32(c->r[31]+0x00000050u); // 8044CF64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044CF68
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8044CF6C
  cmps(c,0,(int32_t)c->r[0],0); // 8044CF70
  if (!crb(c,2)) { goto L_8044CF9C; } // 8044CF74
  c->r[0]=R32(c->r[28]+0x00000048u); // 8044CF78
  c->r[5]=0u+0x806A0000u; // 8044CF7C
  c->r[5]=c->r[5]+0x00007938u; // 8044CF80
  c->r[3]=c->r[31]|c->r[31]; // 8044CF84
  W32(c->r[1]+0x00000020u,c->r[0]); // 8044CF88
  c->r[4]=c->r[28]|c->r[28]; // 8044CF8C
  c->r[5]=c->r[5]+0x000000FAu; // 8044CF90
  c->lr=0x8044CF98u; f_8044D950(c); // 8044CF94
  goto L_8044CFA0; // 8044CF98
L_8044CF9C:;
  W32(c->r[1]+0x00000020u,c->r[0]); // 8044CF9C
L_8044CFA0:;
  c->r[3]=c->r[31]|c->r[31]; // 8044CFA0
  c->r[4]=c->r[28]|c->r[28]; // 8044CFA4
  c->lr=0x8044CFACu; f_8044C73C(c); // 8044CFA8
  cmps(c,0,(int32_t)c->r[3],1); // 8044CFAC
  if (!crb(c,2)) { goto L_8044CFC0; } // 8044CFB0
  c->r[0]=0u+0x00000001u; // 8044CFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044CFB8
  goto L_8044CFC8; // 8044CFBC
L_8044CFC0:;
  c->r[0]=0u+0x00000000u; // 8044CFC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044CFC4
L_8044CFC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8044CFC8
  c->lr=0x8044CFD0u; f_8044C658(c); // 8044CFCC
  cmps(c,0,(int32_t)c->r[3],1); // 8044CFD0
  if (!crb(c,2)) { goto L_8044CFFC; } // 8044CFD4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8044CFD8
  c->r[4]=R32(c->r[29]+0x00000010u); // 8044CFDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044CFE0
  c->r[5]=R32(c->r[29]+0x00000004u); // 8044CFE4
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8044CFE8
  c->r[0]=0u-c->r[4]; // 8044CFEC
  W32(c->r[29]+0x00000010u,c->r[0]); // 8044CFF0
  c->r[0]=c->r[5]+c->r[3]; // 8044CFF4
  W32(c->r[29]+0x00000004u,c->r[0]); // 8044CFF8
L_8044CFFC:;
  c->r[12]=R32(c->r[31]+0x00000068u); // 8044CFFC
  cmps(c,0,(int32_t)c->r[12],0); // 8044D000
  if (crb(c,2)) { goto L_8044D01C; } // 8044D004
  c->r[4]=c->r[29]|c->r[29]; // 8044D008
  c->r[3]=c->r[1]+0x00000028u; // 8044D00C
  c->r[5]=c->r[1]+0x00000008u; // 8044D010
  c->ctr=c->r[12]; // 8044D014
  if (true) { c->lr=0x8044D01Cu; dispatch(c,c->ctr); } // 8044D018
L_8044D01C:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8044D01C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8044D020
  c->r[30]=R32(c->r[1]+0x00000098u); // 8044D024
  c->r[29]=R32(c->r[1]+0x00000094u); // 8044D028
  c->r[28]=R32(c->r[1]+0x00000090u); // 8044D02C
  c->lr=c->r[0]; // 8044D030
  c->r[1]=c->r[1]+0x000000A0u; // 8044D034
  return; // 8044D038
}

// fn_8044D03C
void f_8044D03C(Ctx* __restrict c) {
  trace_call(0x8044D03Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044D03C
  cmps(c,0,(int32_t)c->r[0],2); // 8044D040
  if (crb(c,2)) { goto L_8044D090; } // 8044D044
  if (!crb(c,0)) { goto L_8044D058; } // 8044D048
  cmps(c,0,(int32_t)c->r[0],1); // 8044D04C
  if (!crb(c,0)) { goto L_8044D064; } // 8044D050
  goto L_8044D140; // 8044D054
L_8044D058:;
  cmps(c,0,(int32_t)c->r[0],4); // 8044D058
  if (!crb(c,0)) { goto L_8044D140; } // 8044D05C
  goto L_8044D0BC; // 8044D060
L_8044D064:;
  c->r[0]=0u+0x00000001u; // 8044D064
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044D068
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044D06C
  W32(c->r[5]+0x00000004u,c->r[0]); // 8044D070
  c->r[0]=R32(c->r[4]+0x00000044u); // 8044D074
  W32(c->r[5]+0x00000008u,c->r[0]); // 8044D078
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8044D07C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8044D080
  c->r[0]=R32(c->r[4]+0x00000008u); // 8044D084
  W32(c->r[5]+0x00000010u,c->r[0]); // 8044D088
  return; // 8044D08C
L_8044D090:;
  c->r[0]=0u+0x00000001u; // 8044D090
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044D094
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044D098
  W32(c->r[5]+0x00000004u,c->r[0]); // 8044D09C
  c->r[0]=R32(c->r[4]+0x00000044u); // 8044D0A0
  W32(c->r[5]+0x00000008u,c->r[0]); // 8044D0A4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8044D0A8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8044D0AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8044D0B0
  W32(c->r[5]+0x00000010u,c->r[0]); // 8044D0B4
  return; // 8044D0B8
L_8044D0BC:;
  c->r[0]=0u+0x00000003u; // 8044D0BC
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044D0C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044D0C4
  W32(c->r[5]+0x00000004u,c->r[0]); // 8044D0C8
  c->r[0]=R32(c->r[4]+0x00000044u); // 8044D0CC
  W32(c->r[5]+0x00000008u,c->r[0]); // 8044D0D0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8044D0D4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8044D0D8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8044D0DC
  W32(c->r[5]+0x00000010u,c->r[0]); // 8044D0E0
  c->r[0]=R32(c->r[4]+0x00000014u); // 8044D0E4
  W32(c->r[5]+0x00000014u,c->r[0]); // 8044D0E8
  c->r[3]=R32(c->r[4]+0x00000044u); // 8044D0EC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8044D0F0
  c->r[0]=c->r[0]+c->r[3]; // 8044D0F4
  c->r[0]=sraw(c,c->r[0],1); // 8044D0F8
  W32(c->r[5]+0x00000018u,c->r[0]); // 8044D0FC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8044D100
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8044D104
  c->r[0]=R32(c->r[4]+0x00000018u); // 8044D108
  W32(c->r[5]+0x00000020u,c->r[0]); // 8044D10C
  c->r[0]=R32(c->r[4]+0x00000024u); // 8044D110
  W32(c->r[5]+0x00000024u,c->r[0]); // 8044D114
  c->r[3]=R32(c->r[4]+0x00000044u); // 8044D118
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8044D11C
  c->r[0]=c->r[0]+c->r[3]; // 8044D120
  c->r[0]=sraw(c,c->r[0],1); // 8044D124
  W32(c->r[5]+0x00000028u,c->r[0]); // 8044D128
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8044D12C
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 8044D130
  c->r[0]=R32(c->r[4]+0x00000028u); // 8044D134
  W32(c->r[5]+0x00000030u,c->r[0]); // 8044D138
  return; // 8044D13C
L_8044D140:;
  c->r[5]=0u+0x806A0000u; // 8044D140
  c->r[5]=c->r[5]+0x00007938u; // 8044D144
  c->r[5]=c->r[5]+0x00000138u; // 8044D148
  f_8044D950(c); return; // 8044D14C
  return; // 8044D150
}

// fn_8044D154
void f_8044D154(Ctx* __restrict c) {
  trace_call(0x8044D154u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D154
  c->r[0]=c->lr; // 8044D158
  W32(c->r[1]+0x00000104u,c->r[0]); // 8044D15C
  W32(c->r[1]+0x000000FCu,c->r[31]); // 8044D160
  c->r[31]=c->r[5]|c->r[5]; // 8044D164
  c->r[5]=c->r[1]+0x0000008Cu; // 8044D168
  W32(c->r[1]+0x000000F8u,c->r[30]); // 8044D16C
  c->r[30]=c->r[4]|c->r[4]; // 8044D170
  W32(c->r[1]+0x000000F4u,c->r[29]); // 8044D174
  c->r[29]=c->r[3]|c->r[3]; // 8044D178
  c->lr=0x8044D180u; f_8044D03C(c); // 8044D17C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8044D180
  cmps(c,0,(int32_t)c->r[0],3); // 8044D184
  if (crb(c,2)) { goto L_8044D19C; } // 8044D188
  if (!crb(c,0)) { goto L_8044D25C; } // 8044D18C
  cmps(c,0,(int32_t)c->r[0],1); // 8044D190
  if (!crb(c,0)) { goto L_8044D274; } // 8044D194
  goto L_8044D25C; // 8044D198
L_8044D19C:;
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 8044D19C
  c->r[0]=R32(c->r[1]+0x00000098u); // 8044D1A0
  c->r[5]=R32(c->r[1]+0x00000090u); // 8044D1A4
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8044D1A8
  c->r[3]=R32(c->r[1]+0x000000A0u); // 8044D1AC
  c->r[0]=R32(c->r[1]+0x000000B0u); // 8044D1B0
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 8044D1B4
  c->r[4]=c->r[4]+c->r[6]; // 8044D1B8
  c->r[6]=sraw(c,c->r[4],1); // 8044D1BC
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 8044D1C0
  c->r[4]=c->r[4]+c->r[6]; // 8044D1C4
  c->r[5]=c->r[5]+c->r[6]; // 8044D1C8
  c->r[4]=sraw(c,c->r[4],1); // 8044D1CC
  W32(c->r[1]+0x00000090u,c->r[5]); // 8044D1D0
  c->r[3]=c->r[3]+c->r[4]; // 8044D1D4
  c->r[0]=c->r[0]+c->r[4]; // 8044D1D8
  W32(c->r[1]+0x000000A0u,c->r[3]); // 8044D1DC
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8044D1E0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8044D1E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8044D1E8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8044D1EC
  W32(c->r[1]+0x00000030u,c->r[0]); // 8044D1F0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8044D1F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044D1F8
  c->r[3]=R32(c->r[29]+0x00000008u); // 8044D1FC
  cmps(c,0,(int32_t)c->r[3],0); // 8044D200
  if (!crb(c,2)) { goto L_8044D230; } // 8044D204
  c->r[0]=R32(c->r[1]+0x00000094u); // 8044D208
  c->r[5]=0u+0x806A0000u; // 8044D20C
  c->r[5]=c->r[5]+0x00007938u; // 8044D210
  c->r[3]=c->r[29]|c->r[29]; // 8044D214
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044D218
  c->r[4]=c->r[30]|c->r[30]; // 8044D21C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8044D220
  c->r[5]=c->r[5]+0x00000172u; // 8044D224
  c->lr=0x8044D22Cu; f_8044D950(c); // 8044D228
  goto L_8044D274; // 8044D22C
L_8044D230:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8044D230
  cmps(c,0,(int32_t)c->r[0],0); // 8044D234
  if (!crb(c,2)) { goto L_8044D254; } // 8044D238
  c->r[0]=R32(c->r[29]+0x00000074u); // 8044D23C
  cmps(c,0,(int32_t)c->r[0],0); // 8044D240
  if (crb(c,2)) { goto L_8044D254; } // 8044D244
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[0]); // 8044D248
  W32(c->r[1]+0x00000038u,c->r[0]); // 8044D24C
  goto L_8044D274; // 8044D250
L_8044D254:;
  W32(c->r[1]+0x00000038u,c->r[3]); // 8044D254
  goto L_8044D274; // 8044D258
L_8044D25C:;
  c->r[5]=0u+0x806A0000u; // 8044D25C
  c->r[3]=c->r[29]|c->r[29]; // 8044D260
  c->r[5]=c->r[5]+0x00007938u; // 8044D264
  c->r[4]=c->r[30]|c->r[30]; // 8044D268
  c->r[5]=c->r[5]+0x000001B0u; // 8044D26C
  c->lr=0x8044D274u; f_8044D950(c); // 8044D270
L_8044D274:;
  c->lr=0x8044D278u; f_8044D984(c); // 8044D274
  cmps(c,0,(int32_t)c->r[3],1); // 8044D278
  if (!crb(c,2)) { goto L_8044D288; } // 8044D27C
  c->r[0]=R32(c->r[29]+0x00000038u); // 8044D280
  goto L_8044D28C; // 8044D284
L_8044D288:;
  c->r[0]=0u+0x00000000u; // 8044D288
L_8044D28C:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 8044D28C
  c->r[12]=R32(c->r[29]+0x0000006Cu); // 8044D290
  cmps(c,0,(int32_t)c->r[12],0); // 8044D294
  if (crb(c,2)) { goto L_8044D2B0; } // 8044D298
  c->r[3]=c->r[1]+0x0000008Cu; // 8044D29C
  c->r[4]=c->r[1]+0x00000028u; // 8044D2A0
  c->r[5]=c->r[1]+0x00000008u; // 8044D2A4
  c->ctr=c->r[12]; // 8044D2A8
  if (true) { c->lr=0x8044D2B0u; dispatch(c,c->ctr); } // 8044D2AC
L_8044D2B0:;
  c->r[0]=R32(c->r[1]+0x00000104u); // 8044D2B0
  c->r[31]=R32(c->r[1]+0x000000FCu); // 8044D2B4
  c->r[30]=R32(c->r[1]+0x000000F8u); // 8044D2B8
  c->r[29]=R32(c->r[1]+0x000000F4u); // 8044D2BC
  c->lr=c->r[0]; // 8044D2C0
  c->r[1]=c->r[1]+0x00000100u; // 8044D2C4
  return; // 8044D2C8
}

// fn_8044D2CC
void f_8044D2CC(Ctx* __restrict c) {
  trace_call(0x8044D2CCu);
  W32(c->r[3]+0x00000074u,c->r[4]); // 8044D2CC
  return; // 8044D2D0
}

// fn_8044D2D4
void f_8044D2D4(Ctx* __restrict c) {
  trace_call(0x8044D2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D2D4
  c->r[0]=c->lr; // 8044D2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044D2DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044D2E0
  c->r[31]=c->r[6]|c->r[6]; // 8044D2E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044D2E8
  c->r[30]=c->r[5]|c->r[5]; // 8044D2EC
  c->r[5]=c->r[8]|c->r[8]; // 8044D2F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044D2F4
  c->r[29]=c->r[4]|c->r[4]; // 8044D2F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8044D2FC
  c->r[28]=c->r[3]|c->r[3]; // 8044D300
  c->r[3]=c->r[29]|c->r[29]; // 8044D304
  W32(c->r[4]+0x00000044u,c->r[9]); // 8044D308
  c->r[4]=c->r[7]|c->r[7]; // 8044D30C
  W32(c->r[29]+0x00000048u,c->r[10]); // 8044D310
  c->lr=0x8044D318u; f_8044C660(c); // 8044D314
  c->r[3]=c->r[28]|c->r[28]; // 8044D318
  c->r[4]=c->r[29]|c->r[29]; // 8044D31C
  c->r[5]=c->r[30]|c->r[30]; // 8044D320
  c->r[6]=c->r[31]|c->r[31]; // 8044D324
  c->r[7]=0u+0x00000000u; // 8044D328
  c->lr=0x8044D330u; f_8044D358(c); // 8044D32C
  c->r[0]=0u+0x00000001u; // 8044D330
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044D334
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044D338
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044D33C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044D340
  c->r[28]=R32(c->r[1]+0x00000010u); // 8044D344
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044D348
  c->lr=c->r[0]; // 8044D34C
  c->r[1]=c->r[1]+0x00000020u; // 8044D350
  return; // 8044D354
}

// fn_8044D358
void f_8044D358(Ctx* __restrict c) {
  trace_call(0x8044D358u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D358
  c->r[0]=c->lr; // 8044D35C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044D360
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044D364
  c->r[29]=rotl(c->r[7],4)&0xFFFFFFF0u; // 8044D368
  c->r[7]=c->r[6]+c->r[29]; // 8044D36C
  c->r[30]=c->r[3]|c->r[3]; // 8044D370
  c->r[27]=c->r[4]|c->r[4]; // 8044D374
  c->r[31]=c->r[6]|c->r[6]; // 8044D378
  W32(c->r[7]+0x00000004u,c->r[5]); // 8044D37C
  c->r[0]=R32(c->r[4]+0x00000044u); // 8044D380
  W32(c->r[7]+0x00000008u,c->r[0]); // 8044D384
  c->r[0]=R32(c->r[3]+0x00000004u); // 8044D388
  cmps(c,0,(int32_t)c->r[0],97); // 8044D38C
  if (crb(c,2)) { goto L_8044D410; } // 8044D390
  if (!crb(c,0)) { goto L_8044D3D4; } // 8044D394
  cmps(c,0,(int32_t)c->r[0],49); // 8044D398
  if (crb(c,2)) { goto L_8044D410; } // 8044D39C
  if (!crb(c,0)) { goto L_8044D3BC; } // 8044D3A0
  cmps(c,0,(int32_t)c->r[0],33); // 8044D3A4
  if (crb(c,2)) { goto L_8044D418; } // 8044D3A8
  if (!crb(c,0)) { goto L_8044D420; } // 8044D3AC
  cmps(c,0,(int32_t)c->r[0],17); // 8044D3B0
  if (crb(c,2)) { goto L_8044D410; } // 8044D3B4
  goto L_8044D420; // 8044D3B8
L_8044D3BC:;
  cmps(c,0,(int32_t)c->r[0],81); // 8044D3BC
  if (crb(c,2)) { goto L_8044D410; } // 8044D3C0
  if (!crb(c,0)) { goto L_8044D420; } // 8044D3C4
  cmps(c,0,(int32_t)c->r[0],65); // 8044D3C8
  if (crb(c,2)) { goto L_8044D410; } // 8044D3CC
  goto L_8044D420; // 8044D3D0
L_8044D3D4:;
  cmps(c,0,(int32_t)c->r[0],257); // 8044D3D4
  if (crb(c,2)) { goto L_8044D418; } // 8044D3D8
  if (!crb(c,0)) { goto L_8044D3F8; } // 8044D3DC
  cmps(c,0,(int32_t)c->r[0],241); // 8044D3E0
  if (crb(c,2)) { goto L_8044D410; } // 8044D3E4
  if (!crb(c,0)) { goto L_8044D420; } // 8044D3E8
  cmps(c,0,(int32_t)c->r[0],113); // 8044D3EC
  if (crb(c,2)) { goto L_8044D410; } // 8044D3F0
  goto L_8044D420; // 8044D3F4
L_8044D3F8:;
  cmps(c,0,(int32_t)c->r[0],4097); // 8044D3F8
  if (crb(c,2)) { goto L_8044D410; } // 8044D3FC
  if (!crb(c,0)) { goto L_8044D420; } // 8044D400
  cmps(c,0,(int32_t)c->r[0],273); // 8044D404
  if (crb(c,2)) { goto L_8044D410; } // 8044D408
  goto L_8044D420; // 8044D40C
L_8044D410:;
  c->r[0]=0u+0x00000000u; // 8044D410
  goto L_8044D438; // 8044D414
L_8044D418:;
  c->r[0]=0u+0x00000001u; // 8044D418
  goto L_8044D438; // 8044D41C
L_8044D420:;
  c->r[5]=0u+0x806A0000u; // 8044D420
  c->r[3]=0u+0x00000000u; // 8044D424
  c->r[5]=c->r[5]+0x00007938u; // 8044D428
  c->r[4]=0u+0x00000000u; // 8044D42C
  c->lr=0x8044D434u; f_8044D950(c); // 8044D430
  c->r[0]=0u+0x00000000u; // 8044D434
L_8044D438:;
  cmps(c,0,(int32_t)c->r[0],1); // 8044D438
  if (!crb(c,2)) { goto L_8044D45C; } // 8044D43C
  c->r[4]=R32(c->r[27]+0x00000048u); // 8044D440
  c->r[3]=c->r[31]+c->r[29]; // 8044D444
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8044D448
  c->r[0]=c->r[0]+c->r[4]; // 8044D44C
  c->r[0]=sraw(c,c->r[0],1); // 8044D450
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8044D454
  goto L_8044D468; // 8044D458
L_8044D45C:;
  c->r[0]=R32(c->r[27]+0x00000048u); // 8044D45C
  c->r[3]=c->r[31]+c->r[29]; // 8044D460
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8044D464
L_8044D468:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 8044D468
  cmps(c,0,(int32_t)c->r[28],0); // 8044D46C
  if (!crb(c,2)) { goto L_8044D494; } // 8044D470
  c->r[5]=0u+0x806A0000u; // 8044D474
  c->r[28]=R32(c->r[27]+0x00000044u); // 8044D478
  c->r[5]=c->r[5]+0x00007938u; // 8044D47C
  c->r[3]=c->r[30]|c->r[30]; // 8044D480
  c->r[4]=c->r[27]|c->r[27]; // 8044D484
  c->r[5]=c->r[5]+0x000001F2u; // 8044D488
  c->lr=0x8044D490u; f_8044D950(c); // 8044D48C
  goto L_8044D4B0; // 8044D490
L_8044D494:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8044D494
  cmps(c,0,(int32_t)c->r[0],0); // 8044D498
  if (!crb(c,2)) { goto L_8044D4B0; } // 8044D49C
  c->r[0]=R32(c->r[30]+0x00000074u); // 8044D4A0
  cmps(c,0,(int32_t)c->r[0],0); // 8044D4A4
  if (crb(c,2)) { goto L_8044D4B0; } // 8044D4A8
  c->r[28]=divw((int32_t)c->r[28],(int32_t)c->r[0]); // 8044D4AC
L_8044D4B0:;
  c->r[3]=c->r[31]+c->r[29]; // 8044D4B0
  W32(c->r[3]+0x00000010u,c->r[28]); // 8044D4B4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044D4B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044D4BC
  c->lr=c->r[0]; // 8044D4C0
  c->r[1]=c->r[1]+0x00000020u; // 8044D4C4
  return; // 8044D4C8
}

// fn_8044D4CC
void f_8044D4CC(Ctx* __restrict c) {
  trace_call(0x8044D4CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D4CC
  c->r[0]=c->lr; // 8044D4D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044D4D4
  c->r[0]=R32(c->r[1]+0x00000028u); // 8044D4D8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044D4DC
  c->r[28]=c->r[4]|c->r[4]; // 8044D4E0
  c->r[27]=c->r[3]|c->r[3]; // 8044D4E4
  c->r[29]=c->r[5]|c->r[5]; // 8044D4E8
  c->r[30]=c->r[6]|c->r[6]; // 8044D4EC
  c->r[31]=c->r[7]|c->r[7]; // 8044D4F0
  c->r[5]=c->r[9]|c->r[9]; // 8044D4F4
  c->r[3]=c->r[28]|c->r[28]; // 8044D4F8
  W32(c->r[4]+0x00000044u,c->r[10]); // 8044D4FC
  c->r[4]=c->r[8]|c->r[8]; // 8044D500
  W32(c->r[28]+0x00000048u,c->r[0]); // 8044D504
  c->lr=0x8044D50Cu; f_8044C660(c); // 8044D508
  c->r[3]=c->r[27]|c->r[27]; // 8044D50C
  c->r[4]=c->r[28]|c->r[28]; // 8044D510
  c->r[5]=c->r[29]|c->r[29]; // 8044D514
  c->r[6]=c->r[31]|c->r[31]; // 8044D518
  c->r[7]=0u+0x00000000u; // 8044D51C
  c->lr=0x8044D524u; f_8044D358(c); // 8044D520
  c->r[3]=c->r[27]|c->r[27]; // 8044D524
  c->r[4]=c->r[28]|c->r[28]; // 8044D528
  c->r[5]=c->r[30]|c->r[30]; // 8044D52C
  c->r[6]=c->r[31]|c->r[31]; // 8044D530
  c->r[7]=0u+0x00000001u; // 8044D534
  c->lr=0x8044D53Cu; f_8044D358(c); // 8044D538
  c->r[0]=0u+0x00000002u; // 8044D53C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044D540
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044D544
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044D548
  c->lr=c->r[0]; // 8044D54C
  c->r[1]=c->r[1]+0x00000020u; // 8044D550
  return; // 8044D554
}

// fn_8044D558
void f_8044D558(Ctx* __restrict c) {
  trace_call(0x8044D558u);
  c->r[3]=0u+0x00000011u; // 8044D558
  return; // 8044D55C
}

// fn_8044D560
void f_8044D560(Ctx* __restrict c) {
  trace_call(0x8044D560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D560
  c->r[0]=c->lr; // 8044D564
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044D568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044D56C
  c->r[31]=0u+0x807E0000u; // 8044D570
  c->r[31]=c->r[31]+0x000013D8u; // 8044D574
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044D578
  cmps(c,0,(int32_t)c->r[0],1); // 8044D57C
  if (!crb(c,0)) { goto L_8044D5D8; } // 8044D580
  c->r[5]=0u+0x806A0000u; // 8044D584
  c->r[3]=c->r[31]+0x00000010u; // 8044D588
  c->r[5]=c->r[5]+0x00007B68u; // 8044D58C
  c->r[4]=0u+0x00000000u; // 8044D590
  W32(c->r[31]+0x00000008u,c->r[5]); // 8044D594
  c->r[5]=0u+0x00000528u; // 8044D598
  c->lr=0x8044D5A0u; f_800043EC(c); // 8044D59C
  c->r[3]=c->r[31]+0x00000010u; // 8044D5A0
  c->r[4]=0u+0x00000008u; // 8044D5A4
  c->r[0]=0u+0x00000001u; // 8044D5A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044D5AC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8044D5B0
  c->lr=0x8044D5B8u; f_80416C2C(c); // 8044D5B4
  c->lr=0x8044D5BCu; f_8044ED9C(c); // 8044D5B8
  c->lr=0x8044D5C0u; f_8044DB50(c); // 8044D5BC
  c->lr=0x8044D5C4u; f_8044D9A0(c); // 8044D5C0
  c->r[3]=R32(c->r[31]+0x00000000u); // 8044D5C4
  c->r[0]=0u+0x00000000u; // 8044D5C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8044D5CC
  c->r[0]=c->r[3]+0x00000001u; // 8044D5D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044D5D4
L_8044D5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044D5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044D5DC
  c->lr=c->r[0]; // 8044D5E0
  c->r[1]=c->r[1]+0x00000010u; // 8044D5E4
  return; // 8044D5E8
}

// fn_8044D5EC
void f_8044D5EC(Ctx* __restrict c) {
  trace_call(0x8044D5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D5EC
  c->r[0]=c->lr; // 8044D5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044D5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044D5F8
  c->r[31]=0u+0x807E0000u; // 8044D5FC
  c->r[0]=R32(c->r[31]+0x000013D8u); // 8044D600
  cmps(c,0,(int32_t)c->r[0],0); // 8044D604
  if (!crb(c,1)) { goto L_8044D628; } // 8044D608
  c->lr=0x8044D610u; f_8044DB9C(c); // 8044D60C
  c->lr=0x8044D614u; f_8044D9E4(c); // 8044D610
  c->lr=0x8044D618u; f_8044EDA0(c); // 8044D614
  c->lr=0x8044D61Cu; f_80416C40(c); // 8044D618
  c->r[3]=R32(c->r[31]+0x000013D8u); // 8044D61C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044D620
  W32(c->r[31]+0x000013D8u,c->r[0]); // 8044D624
L_8044D628:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044D628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044D62C
  c->lr=c->r[0]; // 8044D630
  c->r[1]=c->r[1]+0x00000010u; // 8044D634
  return; // 8044D638
}

// fn_8044D63C
void f_8044D63C(Ctx* __restrict c) {
  trace_call(0x8044D63Cu);
  c->r[5]=0u+0x807E0000u; // 8044D63C
  c->r[5]=c->r[5]+0x000013E8u; // 8044D640
  W32(c->r[5]+0x00000008u,c->r[3]); // 8044D644
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8044D648
  return; // 8044D64C
}

// fn_8044D650
void f_8044D650(Ctx* __restrict c) {
  trace_call(0x8044D650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D650
  c->r[0]=c->lr; // 8044D654
  c->r[6]=0u+0x807E0000u; // 8044D658
  c->r[7]=c->r[3]|c->r[3]; // 8044D65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044D660
  c->r[6]=c->r[6]+0x000013E8u; // 8044D664
  c->r[5]=c->r[4]|c->r[4]; // 8044D668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044D66C
  c->r[31]=c->r[6]+0x00000018u; // 8044D670
  W32(c->r[1]+0x00000008u,c->r[30]); // 8044D674
  c->r[0]=R32(c->r[6]+0x00000004u); // 8044D678
  c->ctr=c->r[0]; // 8044D67C
  cmps(c,0,(int32_t)c->r[0],0); // 8044D680
  if (!crb(c,1)) { goto L_8044D6A0; } // 8044D684
L_8044D688:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044D688
  cmps(c,0,(int32_t)c->r[0],0); // 8044D68C
  if (!crb(c,2)) { goto L_8044D698; } // 8044D690
  goto L_8044D6A4; // 8044D694
L_8044D698:;
  c->r[31]=c->r[31]+0x000000A0u; // 8044D698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044D688; } // 8044D69C
L_8044D6A0:;
  c->r[31]=0u+0x00000000u; // 8044D6A0
L_8044D6A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8044D6A4
  if (!crb(c,2)) { goto L_8044D6B4; } // 8044D6A8
  c->r[3]=c->r[31]|c->r[31]; // 8044D6AC
  goto L_8044D834; // 8044D6B0
L_8044D6B4:;
  c->r[3]=sraw(c,c->r[4],31); // 8044D6B4
  c->r[0]=0u+0x0000301Fu; // 8044D6B8
  c->r[0]=addc(c,~c->r[0],c->r[4],1); // 8044D6BC
  c->r[0]=0u+0x00000000u; // 8044D6C0
  c->r[0]=addc(c,c->r[3],c->r[0],c->xer_ca); // 8044D6C4
  cmps(c,0,(int32_t)c->r[0],1); // 8044D6C8
  if (crb(c,2)) { goto L_8044D70C; } // 8044D6CC
  c->r[6]=0u+0x807E0000u; // 8044D6D0
  c->r[4]=0u+0x806A0000u; // 8044D6D4
  c->r[6]=c->r[6]+0x000013E8u; // 8044D6D8
  c->r[12]=R32(c->r[6]+0x00000008u); // 8044D6DC
  c->r[4]=c->r[4]+0x00007B9Cu; // 8044D6E0
  c->r[5]=R32(c->r[6]+0x00000010u); // 8044D6E4
  cmps(c,0,(int32_t)c->r[12],0); // 8044D6E8
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 8044D6EC
  c->r[0]=c->r[5]+0x00000001u; // 8044D6F0
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044D6F4
  if (crb(c,2)) { goto L_8044D704; } // 8044D6F8
  c->ctr=c->r[12]; // 8044D6FC
  if (true) { c->lr=0x8044D704u; dispatch(c,c->ctr); } // 8044D700
L_8044D704:;
  c->r[3]=0u+0x00000000u; // 8044D704
  goto L_8044D834; // 8044D708
L_8044D70C:;
  c->r[3]=c->r[31]|c->r[31]; // 8044D70C
  c->r[4]=c->r[7]|c->r[7]; // 8044D710
  c->lr=0x8044D718u; f_8044D84C(c); // 8044D714
  c->lr=0x8044D71Cu; f_8044DBA0(c); // 8044D718
  cmps(c,0,(int32_t)c->r[3],0); // 8044D71C
  if (!crb(c,2)) { goto L_8044D798; } // 8044D720
  c->r[6]=0u+0x807E0000u; // 8044D724
  c->r[3]=0u+0x806A0000u; // 8044D728
  c->r[6]=c->r[6]+0x000013E8u; // 8044D72C
  c->r[12]=R32(c->r[6]+0x00000008u); // 8044D730
  c->r[3]=c->r[3]+0x00007B9Cu; // 8044D734
  c->r[5]=R32(c->r[6]+0x00000010u); // 8044D738
  c->r[4]=c->r[3]+0x00000029u; // 8044D73C
  cmps(c,0,(int32_t)c->r[12],0); // 8044D740
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 8044D744
  c->r[0]=c->r[5]+0x00000001u; // 8044D748
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044D74C
  if (crb(c,2)) { goto L_8044D75C; } // 8044D750
  c->ctr=c->r[12]; // 8044D754
  if (true) { c->lr=0x8044D75Cu; dispatch(c,c->ctr); } // 8044D758
L_8044D75C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8044D75C
  if (crb(c,2)) { goto L_8044D790; } // 8044D760
  c->r[3]=R32(c->r[31]+0x00000024u); // 8044D764
  c->r[0]=0u+0x00000000u; // 8044D768
  c->r[30]=R32(c->r[31]+0x00000030u); // 8044D76C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044D770
  c->lr=0x8044D778u; f_8044DC1C(c); // 8044D774
  c->r[3]=c->r[30]|c->r[30]; // 8044D778
  c->lr=0x8044D780u; f_8044DA74(c); // 8044D77C
  c->r[4]=0u+0x807E0000u; // 8044D780
  c->r[3]=R32(c->r[4]+0x000013E8u); // 8044D784
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044D788
  W32(c->r[4]+0x000013E8u,c->r[0]); // 8044D78C
L_8044D790:;
  c->r[3]=0u+0x00000000u; // 8044D790
  goto L_8044D834; // 8044D794
L_8044D798:;
  W32(c->r[31]+0x00000024u,c->r[3]); // 8044D798
  c->lr=0x8044D7A0u; f_8044D9E8(c); // 8044D79C
  cmps(c,0,(int32_t)c->r[3],0); // 8044D7A0
  if (!crb(c,2)) { goto L_8044D81C; } // 8044D7A4
  c->r[6]=0u+0x807E0000u; // 8044D7A8
  c->r[3]=0u+0x806A0000u; // 8044D7AC
  c->r[6]=c->r[6]+0x000013E8u; // 8044D7B0
  c->r[12]=R32(c->r[6]+0x00000008u); // 8044D7B4
  c->r[3]=c->r[3]+0x00007B9Cu; // 8044D7B8
  c->r[5]=R32(c->r[6]+0x00000010u); // 8044D7BC
  c->r[4]=c->r[3]+0x00000048u; // 8044D7C0
  cmps(c,0,(int32_t)c->r[12],0); // 8044D7C4
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 8044D7C8
  c->r[0]=c->r[5]+0x00000001u; // 8044D7CC
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044D7D0
  if (crb(c,2)) { goto L_8044D7E0; } // 8044D7D4
  c->ctr=c->r[12]; // 8044D7D8
  if (true) { c->lr=0x8044D7E0u; dispatch(c,c->ctr); } // 8044D7DC
L_8044D7E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8044D7E0
  if (crb(c,2)) { goto L_8044D814; } // 8044D7E4
  c->r[3]=R32(c->r[31]+0x00000024u); // 8044D7E8
  c->r[0]=0u+0x00000000u; // 8044D7EC
  c->r[30]=R32(c->r[31]+0x00000030u); // 8044D7F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044D7F4
  c->lr=0x8044D7FCu; f_8044DC1C(c); // 8044D7F8
  c->r[3]=c->r[30]|c->r[30]; // 8044D7FC
  c->lr=0x8044D804u; f_8044DA74(c); // 8044D800
  c->r[4]=0u+0x807E0000u; // 8044D804
  c->r[3]=R32(c->r[4]+0x000013E8u); // 8044D808
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044D80C
  W32(c->r[4]+0x000013E8u,c->r[0]); // 8044D810
L_8044D814:;
  c->r[3]=0u+0x00000000u; // 8044D814
  goto L_8044D834; // 8044D818
L_8044D81C:;
  W32(c->r[31]+0x00000030u,c->r[3]); // 8044D81C
  c->r[5]=0u+0x807E0000u; // 8044D820
  c->r[3]=c->r[31]|c->r[31]; // 8044D824
  c->r[4]=R32(c->r[5]+0x000013E8u); // 8044D828
  c->r[0]=c->r[4]+0x00000001u; // 8044D82C
  W32(c->r[5]+0x000013E8u,c->r[0]); // 8044D830
L_8044D834:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044D834
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044D838
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044D83C
  c->lr=c->r[0]; // 8044D840
  c->r[1]=c->r[1]+0x00000010u; // 8044D844
  return; // 8044D848
}

// fn_8044D84C
void f_8044D84C(Ctx* __restrict c) {
  trace_call(0x8044D84Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D84C
  c->r[0]=c->lr; // 8044D850
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044D854
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044D858
  c->r[31]=c->r[5]|c->r[5]; // 8044D85C
  c->r[5]=0u+0x000000A0u; // 8044D860
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044D864
  c->r[30]=c->r[4]|c->r[4]; // 8044D868
  c->r[4]=0u+0x00000000u; // 8044D86C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044D870
  c->r[29]=c->r[3]|c->r[3]; // 8044D874
  c->lr=0x8044D87Cu; f_800043EC(c); // 8044D878
  c->r[0]=c->r[30]+0x0000001Fu; // 8044D87C
  c->r[8]=0u+0x00000000u; // 8044D880
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8044D884
  c->r[7]=0u+0x00000001u; // 8044D888
  c->r[5]=c->r[6]+0x00000400u; // 8044D88C
  c->r[0]=0u+0xFFFFFFFFu; // 8044D890
  c->r[4]=c->r[5]+0x00000400u; // 8044D894
  W32(c->r[29]+0x00000004u,c->r[8]); // 8044D898
  c->r[3]=c->r[4]+0x00000400u; // 8044D89C
  W32(c->r[29]+0x00000008u,c->r[8]); // 8044D8A0
  W32(c->r[29]+0x0000000Cu,c->r[8]); // 8044D8A4
  W32(c->r[29]+0x00000028u,c->r[7]); // 8044D8A8
  W32(c->r[29]+0x0000002Cu,c->r[8]); // 8044D8AC
  W32(c->r[29]+0x00000034u,c->r[8]); // 8044D8B0
  W32(c->r[29]+0x00000038u,c->r[6]); // 8044D8B4
  W32(c->r[29]+0x0000003Cu,c->r[5]); // 8044D8B8
  W32(c->r[29]+0x00000040u,c->r[4]); // 8044D8BC
  W32(c->r[29]+0x00000044u,c->r[3]); // 8044D8C0
  W32(c->r[29]+0x00000050u,c->r[30]); // 8044D8C4
  W32(c->r[29]+0x00000054u,c->r[31]); // 8044D8C8
  W32(c->r[29]+0x00000058u,c->r[0]); // 8044D8CC
  W32(c->r[29]+0x00000064u,c->r[8]); // 8044D8D0
  W32(c->r[29]+0x00000000u,c->r[7]); // 8044D8D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044D8D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044D8DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044D8E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044D8E4
  c->lr=c->r[0]; // 8044D8E8
  c->r[1]=c->r[1]+0x00000020u; // 8044D8EC
  return; // 8044D8F0
}

// fn_8044D8F4
void f_8044D8F4(Ctx* __restrict c) {
  trace_call(0x8044D8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D8F4
  c->r[0]=c->lr; // 8044D8F8
  cmps(c,0,(int32_t)c->r[3],0); // 8044D8FC
  c->r[4]=c->r[3]|c->r[3]; // 8044D900
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044D904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044D908
  if (crb(c,2)) { goto L_8044D93C; } // 8044D90C
  c->r[0]=0u+0x00000000u; // 8044D910
  c->r[3]=R32(c->r[3]+0x00000024u); // 8044D914
  W32(c->r[4]+0x00000000u,c->r[0]); // 8044D918
  c->r[31]=R32(c->r[4]+0x00000030u); // 8044D91C
  c->lr=0x8044D924u; f_8044DC1C(c); // 8044D920
  c->r[3]=c->r[31]|c->r[31]; // 8044D924
  c->lr=0x8044D92Cu; f_8044DA74(c); // 8044D928
  c->r[4]=0u+0x807E0000u; // 8044D92C
  c->r[3]=R32(c->r[4]+0x000013E8u); // 8044D930
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044D934
  W32(c->r[4]+0x000013E8u,c->r[0]); // 8044D938
L_8044D93C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044D93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044D940
  c->lr=c->r[0]; // 8044D944
  c->r[1]=c->r[1]+0x00000010u; // 8044D948
  return; // 8044D94C
}

// fn_8044D950
void f_8044D950(Ctx* __restrict c) {
  trace_call(0x8044D950u);
  c->r[6]=0u+0x807E0000u; // 8044D950
  c->r[6]=c->r[6]+0x000013E8u; // 8044D954
  c->r[12]=R32(c->r[6]+0x00000008u); // 8044D958
  c->r[4]=R32(c->r[6]+0x00000010u); // 8044D95C
  cmps(c,0,(int32_t)c->r[12],0); // 8044D960
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 8044D964
  c->r[0]=c->r[4]+0x00000001u; // 8044D968
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044D96C
  if (crb(c,2)) return; // 8044D970
  c->r[4]=c->r[5]|c->r[5]; // 8044D974
  c->ctr=c->r[12]; // 8044D978
  if (true) { dispatch(c,c->ctr); return; } // 8044D97C
  return; // 8044D980
}

// fn_8044D984
void f_8044D984(Ctx* __restrict c) {
  trace_call(0x8044D984u);
  c->r[3]=0u+0x807E0000u; // 8044D984
  c->r[3]=c->r[3]+0x000013E8u; // 8044D988
  c->r[3]=R32(c->r[3]+0x00000014u); // 8044D98C
  return; // 8044D990
}

// fn_8044D994
void f_8044D994(Ctx* __restrict c) {
  trace_call(0x8044D994u);
  c->r[3]=0u+0x807E0000u; // 8044D994
  c->r[3]=R32(c->r[3]+0x000013DCu); // 8044D998
  return; // 8044D99C
}

// fn_8044D9A0
void f_8044D9A0(Ctx* __restrict c) {
  trace_call(0x8044D9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044D9A0
  c->r[0]=c->lr; // 8044D9A4
  c->r[4]=0u+0x00000000u; // 8044D9A8
  c->r[5]=0u+0x00000128u; // 8044D9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044D9B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044D9B4
  c->r[31]=0u+0x807E0000u; // 8044D9B8
  c->r[3]=c->r[31]+0x00001910u; // 8044D9BC
  c->lr=0x8044D9C4u; f_800043EC(c); // 8044D9C0
  c->r[3]=c->r[31]+0x00001910u; // 8044D9C4
  c->r[0]=0u+0x00000008u; // 8044D9C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8044D9CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044D9D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044D9D4
  c->lr=c->r[0]; // 8044D9D8
  c->r[1]=c->r[1]+0x00000010u; // 8044D9DC
  return; // 8044D9E0
}

// fn_8044D9E4
void f_8044D9E4(Ctx* __restrict c) {
  trace_call(0x8044D9E4u);
  return; // 8044D9E4
}

// fn_8044D9E8
void f_8044D9E8(Ctx* __restrict c) {
  trace_call(0x8044D9E8u);
  c->r[3]=0u+0x807E0000u; // 8044D9E8
  c->r[3]=c->r[3]+0x00001910u; // 8044D9EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8044D9F0
  c->r[3]=c->r[3]+0x00000008u; // 8044D9F4
  c->ctr=c->r[0]; // 8044D9F8
  cmps(c,0,(int32_t)c->r[0],0); // 8044D9FC
  if (!crb(c,1)) { goto L_8044DA1C; } // 8044DA00
L_8044DA04:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8044DA04
  cmps(c,0,(int32_t)c->r[0],0); // 8044DA08
  if (!crb(c,2)) { goto L_8044DA14; } // 8044DA0C
  goto L_8044DA20; // 8044DA10
L_8044DA14:;
  c->r[3]=c->r[3]+0x00000024u; // 8044DA14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044DA04; } // 8044DA18
L_8044DA1C:;
  c->r[3]=0u+0x00000000u; // 8044DA1C
L_8044DA20:;
  cmps(c,0,(int32_t)c->r[3],0); // 8044DA20
  if (crb(c,2)) return; // 8044DA24
  c->r[8]=0u+0x00000000u; // 8044DA28
  c->r[0]=0u+0x0000001Fu; // 8044DA2C
  W32(c->r[3]+0x00000008u,c->r[8]); // 8044DA30
  c->r[7]=0u+0x00000064u; // 8044DA34
  c->r[6]=0u+0x00000001u; // 8044DA38
  c->r[4]=0u+0x0000007Fu; // 8044DA3C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8044DA40
  c->r[0]=0u+0x000000FFu; // 8044DA44
  c->r[5]=0u+0x807E0000u; // 8044DA48
  W32(c->r[3]+0x00000010u,c->r[7]); // 8044DA4C
  W32(c->r[3]+0x00000004u,c->r[6]); // 8044DA50
  W8(c->r[3]+0x00000014u,c->r[8]); // 8044DA54
  W8(c->r[3]+0x00000015u,c->r[4]); // 8044DA58
  W8(c->r[3]+0x00000016u,c->r[0]); // 8044DA5C
  c->r[4]=R32(c->r[5]+0x00001910u); // 8044DA60
  c->r[0]=c->r[4]+0x00000001u; // 8044DA64
  W32(c->r[5]+0x00001910u,c->r[0]); // 8044DA68
  W32(c->r[3]+0x00000000u,c->r[6]); // 8044DA6C
  return; // 8044DA70
}

// fn_8044DA74
void f_8044DA74(Ctx* __restrict c) {
  trace_call(0x8044DA74u);
  cmps(c,0,(int32_t)c->r[3],0); // 8044DA74
  if (crb(c,2)) return; // 8044DA78
  c->r[0]=0u+0x00000000u; // 8044DA7C
  c->r[4]=0u+0x807E0000u; // 8044DA80
  W32(c->r[3]+0x00000000u,c->r[0]); // 8044DA84
  c->r[3]=R32(c->r[4]+0x00001910u); // 8044DA88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044DA8C
  W32(c->r[4]+0x00001910u,c->r[0]); // 8044DA90
  return; // 8044DA94
}

// fn_8044DA98
void f_8044DA98(Ctx* __restrict c) {
  trace_call(0x8044DA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044DA98
  c->r[0]=c->lr; // 8044DA9C
  c->r[6]=c->r[5]|c->r[5]; // 8044DAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044DAA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044DAA8
  c->r[31]=c->r[3]|c->r[3]; // 8044DAAC
  c->r[12]=R32(c->r[3]+0x00000018u); // 8044DAB0
  c->r[0]=R32(c->r[3]+0x00000008u); // 8044DAB4
  cmps(c,0,(int32_t)c->r[12],0); // 8044DAB8
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8044DABC
  c->r[5]=R32(c->r[3]+0x00000010u); // 8044DAC0
  if (crb(c,2)) { goto L_8044DAD4; } // 8044DAC4
  c->r[3]=c->r[0]|c->r[0]; // 8044DAC8
  c->ctr=c->r[12]; // 8044DACC
  if (true) { c->lr=0x8044DAD4u; dispatch(c,c->ctr); } // 8044DAD0
L_8044DAD4:;
  c->r[0]=0u+0x00000000u; // 8044DAD4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8044DAD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044DADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044DAE0
  c->lr=c->r[0]; // 8044DAE4
  c->r[1]=c->r[1]+0x00000010u; // 8044DAE8
  return; // 8044DAEC
}

// fn_8044DAF0
void f_8044DAF0(Ctx* __restrict c) {
  trace_call(0x8044DAF0u);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8044DAF0
  c->r[4]=R8(c->r[3]+0x00000014u); // 8044DAF4
  cmps(c,0,(int32_t)c->r[12],0); // 8044DAF8
  c->r[0]=R8(c->r[3]+0x00000015u); // 8044DAFC
  c->r[6]=R8(c->r[3]+0x00000016u); // 8044DB00
  if (crb(c,2)) return; // 8044DB04
  c->r[3]=c->r[5]|c->r[5]; // 8044DB08
  c->r[5]=c->r[0]|c->r[0]; // 8044DB0C
  c->ctr=c->r[12]; // 8044DB10
  if (true) { dispatch(c,c->ctr); return; } // 8044DB14
  return; // 8044DB18
}

// fn_8044DB1C
void f_8044DB1C(Ctx* __restrict c) {
  trace_call(0x8044DB1Cu);
  c->r[12]=R32(c->r[3]+0x00000020u); // 8044DB1C
  c->r[4]=R8(c->r[3]+0x00000014u); // 8044DB20
  cmps(c,0,(int32_t)c->r[12],0); // 8044DB24
  c->r[0]=R8(c->r[3]+0x00000015u); // 8044DB28
  c->r[6]=R8(c->r[3]+0x00000016u); // 8044DB2C
  if (crb(c,2)) return; // 8044DB30
  c->r[3]=c->r[5]|c->r[5]; // 8044DB34
  c->r[5]=c->r[0]|c->r[0]; // 8044DB38
  c->ctr=c->r[12]; // 8044DB3C
  if (true) { dispatch(c,c->ctr); return; } // 8044DB40
  return; // 8044DB44
}

// fn_8044DB48
void f_8044DB48(Ctx* __restrict c) {
  trace_call(0x8044DB48u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044DB48
  return; // 8044DB4C
}

// fn_8044DB50
void f_8044DB50(Ctx* __restrict c) {
  trace_call(0x8044DB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044DB50
  c->r[0]=c->lr; // 8044DB54
  c->r[4]=0u+0x00000000u; // 8044DB58
  c->r[5]=0u+0x0000026Cu; // 8044DB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044DB60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044DB64
  c->r[31]=0u+0x807E0000u; // 8044DB68
  c->r[3]=c->r[31]+0x00001A38u; // 8044DB6C
  c->lr=0x8044DB74u; f_800043EC(c); // 8044DB70
  c->r[3]=c->r[31]+0x00001A38u; // 8044DB74
  c->r[4]=0u+0x00000008u; // 8044DB78
  c->r[0]=0u+0x00000000u; // 8044DB7C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044DB80
  W32(c->r[3]+0x00000004u,c->r[0]); // 8044DB84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044DB88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044DB8C
  c->lr=c->r[0]; // 8044DB90
  c->r[1]=c->r[1]+0x00000010u; // 8044DB94
  return; // 8044DB98
}

// fn_8044DB9C
void f_8044DB9C(Ctx* __restrict c) {
  trace_call(0x8044DB9Cu);
  return; // 8044DB9C
}

// fn_8044DBA0
void f_8044DBA0(Ctx* __restrict c) {
  trace_call(0x8044DBA0u);
  c->r[3]=0u+0x807E0000u; // 8044DBA0
  c->r[3]=c->r[3]+0x00001A38u; // 8044DBA4
  c->r[0]=R32(c->r[3]+0x00000008u); // 8044DBA8
  c->r[3]=c->r[3]+0x0000000Cu; // 8044DBAC
  c->ctr=c->r[0]; // 8044DBB0
  cmps(c,0,(int32_t)c->r[0],0); // 8044DBB4
  if (!crb(c,1)) { goto L_8044DBD4; } // 8044DBB8
L_8044DBBC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8044DBBC
  cmps(c,0,(int32_t)c->r[0],0); // 8044DBC0
  if (!crb(c,2)) { goto L_8044DBCC; } // 8044DBC4
  goto L_8044DBD8; // 8044DBC8
L_8044DBCC:;
  c->r[3]=c->r[3]+0x0000004Cu; // 8044DBCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044DBBC; } // 8044DBD0
L_8044DBD4:;
  c->r[3]=0u+0x00000000u; // 8044DBD4
L_8044DBD8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8044DBD8
  if (crb(c,2)) return; // 8044DBDC
  c->r[5]=0u+0x806A0000u; // 8044DBE0
  c->r[4]=0u+0x00000000u; // 8044DBE4
  {uint32_t ea=c->r[5]+0x00007C08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8044DBE8
  c->r[5]=0u+0x807E0000u; // 8044DBEC
  c->r[0]=0u+0x00000001u; // 8044DBF0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8044DBF4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8044DBF8
  W32(c->r[3]+0x00000044u,c->r[4]); // 8044DBFC
  W32(c->r[3]+0x00000048u,c->r[4]); // 8044DC00
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044DC04
  c->r[4]=R32(c->r[5]+0x00001A38u); // 8044DC08
  c->r[4]=c->r[4]+0x00000001u; // 8044DC0C
  W32(c->r[5]+0x00001A38u,c->r[4]); // 8044DC10
  W32(c->r[3]+0x00000000u,c->r[0]); // 8044DC14
  return; // 8044DC18
}

// fn_8044DC1C
void f_8044DC1C(Ctx* __restrict c) {
  trace_call(0x8044DC1Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8044DC1C
  if (crb(c,2)) return; // 8044DC20
  c->r[0]=0u+0x00000000u; // 8044DC24
  c->r[4]=0u+0x807E0000u; // 8044DC28
  W32(c->r[3]+0x00000000u,c->r[0]); // 8044DC2C
  c->r[3]=R32(c->r[4]+0x00001A38u); // 8044DC30
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044DC34
  W32(c->r[4]+0x00001A38u,c->r[0]); // 8044DC38
  return; // 8044DC3C
}

// fn_8044DC40
void f_8044DC40(Ctx* __restrict c) {
  trace_call(0x8044DC40u);
  c->r[0]=0u+0x00000001u; // 8044DC40
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8044DC44
  W32(c->r[3]+0x00000008u,c->r[0]); // 8044DC48
  W32(c->r[3]+0x00000010u,c->r[5]); // 8044DC4C
  f_8044DC54(c); return; // 8044DC50
}

// fn_8044DC54
void f_8044DC54(Ctx* __restrict c) {
  trace_call(0x8044DC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044DC54
  c->r[0]=c->lr; // 8044DC58
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044DC5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8044DC60
  W32(c->r[1]+0x00000028u,c->r[30]); // 8044DC64
  W32(c->r[1]+0x00000024u,c->r[29]); // 8044DC68
  c->r[29]=c->r[3]|c->r[3]; // 8044DC6C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8044DC70
  cmps(c,0,(int32_t)c->r[0],0); // 8044DC74
  if (!crb(c,2)) { goto L_8044DCA0; } // 8044DC78
  c->r[0]=0u+0x00000000u; // 8044DC7C
  c->r[4]=0u+0x00000001u; // 8044DC80
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044DC84
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8044DC88
  W32(c->r[3]+0x00000020u,c->r[0]); // 8044DC8C
  W32(c->r[3]+0x00000028u,c->r[4]); // 8044DC90
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8044DC94
  W32(c->r[3]+0x00000030u,c->r[0]); // 8044DC98
  goto L_8044DD08; // 8044DC9C
L_8044DCA0:;
  W32(c->r[1]+0x00000010u,c->r[0]); // 8044DCA0
  c->r[30]=0u+0x806A0000u; // 8044DCA4
  c->r[4]=c->r[30]+0x00007C44u; // 8044DCA8
  c->r[6]=c->r[1]+0x00000008u; // 8044DCAC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8044DCB0
  c->r[3]=c->r[1]+0x00000010u; // 8044DCB4
  c->r[5]=c->r[4]+0x00000006u; // 8044DCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044DCBC
  c->lr=0x8044DCC4u; f_80460148(c); // 8044DCC0
  c->r[31]=0u+0x00000001u; // 8044DCC4
  c->r[5]=c->r[30]+0x00007C44u; // 8044DCC8
  W32(c->r[29]+0x00000018u,c->r[31]); // 8044DCCC
  c->r[4]=c->r[5]+0x0000000Eu; // 8044DCD0
  c->r[3]=c->r[1]+0x00000010u; // 8044DCD4
  c->r[5]=c->r[5]+0x00000006u; // 8044DCD8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8044DCDC
  c->r[6]=c->r[1]+0x00000008u; // 8044DCE0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8044DCE4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8044DCE8
  W32(c->r[29]+0x00000020u,c->r[0]); // 8044DCEC
  c->lr=0x8044DCF4u; f_80460148(c); // 8044DCF0
  W32(c->r[29]+0x00000028u,c->r[31]); // 8044DCF4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8044DCF8
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8044DCFC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8044DD00
  W32(c->r[29]+0x00000030u,c->r[0]); // 8044DD04
L_8044DD08:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8044DD08
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8044DD0C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8044DD10
  c->r[29]=R32(c->r[1]+0x00000024u); // 8044DD14
  c->lr=c->r[0]; // 8044DD18
  c->r[1]=c->r[1]+0x00000030u; // 8044DD1C
  return; // 8044DD20
}

// fn_8044DD24
void f_8044DD24(Ctx* __restrict c) {
  trace_call(0x8044DD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044DD24
  c->r[0]=c->lr; // 8044DD28
  c->r[7]=0u+0x806A0000u; // 8044DD2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8044DD30
  c->r[7]=c->r[7]+0x00007C44u; // 8044DD34
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044DD38
  c->r[28]=c->r[4]|c->r[4]; // 8044DD3C
  c->r[30]=c->r[5]|c->r[5]; // 8044DD40
  c->r[27]=c->r[3]|c->r[3]; // 8044DD44
  c->r[31]=c->r[6]|c->r[6]; // 8044DD48
  c->r[5]=c->r[7]+0x00000006u; // 8044DD4C
  c->r[4]=c->r[7]+0x00000015u; // 8044DD50
  c->r[0]=R32(c->r[3]+0x00000028u); // 8044DD54
  cmps(c,0,(int32_t)c->r[0],1); // 8044DD58
  if (!crb(c,2)) { goto L_8044DD6C; } // 8044DD5C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8044DD60
  cmps(c,0,(int32_t)c->r[0],0); // 8044DD64
  if (!crb(c,2)) { goto L_8044DD74; } // 8044DD68
L_8044DD6C:;
  c->r[3]=0u+0x00000000u; // 8044DD6C
  goto L_8044DD90; // 8044DD70
L_8044DD74:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 8044DD74
  c->r[6]=c->r[1]+0x00000030u; // 8044DD78
  c->r[0]=R32(c->r[3]+0x00000030u); // 8044DD7C
  c->r[3]=c->r[1]+0x00000028u; // 8044DD80
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8044DD84
  c->lr=0x8044DD8Cu; f_80460148(c); // 8044DD88
  c->r[3]=R32(c->r[1]+0x00000030u); // 8044DD8C
L_8044DD90:;
  cmps(c,0,(int32_t)c->r[3],0); // 8044DD90
  if (!crb(c,2)) { goto L_8044DDB0; } // 8044DD94
  c->r[0]=0u+0x00000000u; // 8044DD98
  c->r[3]=0u+0x80000000u; // 8044DD9C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8044DDA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044DDA4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044DDA8
  goto L_8044DE60; // 8044DDAC
L_8044DDB0:;
  c->r[29]=0u+0x806A0000u; // 8044DDB0
  c->r[5]=c->r[1]+0x00000014u; // 8044DDB4
  c->r[29]=c->r[29]+0x00007C44u; // 8044DDB8
  c->r[4]=c->r[29]+0x0000001Du; // 8044DDBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8044DDC0
  c->lr=0x8044DDC8u; f_803B35E8(c); // 8044DDC4
  c->r[0]=R32(c->r[27]+0x00000028u); // 8044DDC8
  c->r[5]=c->r[29]+0x00000006u; // 8044DDCC
  c->r[4]=c->r[29]+0x00000021u; // 8044DDD0
  cmps(c,0,(int32_t)c->r[0],1); // 8044DDD4
  if (!crb(c,2)) { goto L_8044DDE8; } // 8044DDD8
  c->r[0]=R32(c->r[27]+0x0000002Cu); // 8044DDDC
  cmps(c,0,(int32_t)c->r[0],0); // 8044DDE0
  if (!crb(c,2)) { goto L_8044DDF0; } // 8044DDE4
L_8044DDE8:;
  c->r[8]=0u+0x00000000u; // 8044DDE8
  goto L_8044DE0C; // 8044DDEC
L_8044DDF0:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 8044DDF0
  c->r[3]=c->r[1]+0x00000018u; // 8044DDF4
  c->r[6]=c->r[1]+0x00000020u; // 8044DDF8
  c->r[0]=R32(c->r[27]+0x00000030u); // 8044DDFC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8044DE00
  c->lr=0x8044DE08u; f_80460148(c); // 8044DE04
  c->r[8]=R32(c->r[1]+0x00000020u); // 8044DE08
L_8044DE0C:;
  cmps(c,0,(int32_t)c->r[8],0); // 8044DE0C
  if (!crb(c,2)) { goto L_8044DE24; } // 8044DE10
  c->r[3]=0u+0x80000000u; // 8044DE14
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044DE18
  W32(c->r[30]+0x00000000u,c->r[0]); // 8044DE1C
  goto L_8044DE60; // 8044DE20
L_8044DE24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044DE24
  c->r[3]=0u+0x806A0000u; // 8044DE28
  c->r[3]=c->r[3]+0x00007C44u; // 8044DE2C
  c->r[5]=c->r[1]+0x00000010u; // 8044DE30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 8044DE34
  c->r[6]=c->r[1]+0x0000000Cu; // 8044DE38
  c->r[4]=c->r[3]+0x00000029u; // 8044DE3C
  c->r[7]=c->r[1]+0x00000008u; // 8044DE40
  c->r[3]=c->r[8]+c->r[0]; // 8044DE44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8044DE48
  c->lr=0x8044DE50u; f_803B35E8(c); // 8044DE4C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8044DE50
  W32(c->r[30]+0x00000000u,c->r[0]); // 8044DE54
  c->r[0]=R32(c->r[1]+0x00000008u); // 8044DE58
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044DE5C
L_8044DE60:;
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044DE60
  c->r[0]=R32(c->r[1]+0x00000054u); // 8044DE64
  c->lr=c->r[0]; // 8044DE68
  c->r[1]=c->r[1]+0x00000050u; // 8044DE6C
  return; // 8044DE70
}

// fn_8044DE74
void f_8044DE74(Ctx* __restrict c) {
  trace_call(0x8044DE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044DE74
  c->r[0]=c->r[5]+0x80000000u; // 8044DE78
  cmpu(c,0,c->r[0],0x00000000u); // 8044DE7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044DE80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044DE84
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044DE88
  if (!crb(c,2)) { goto L_8044DE98; } // 8044DE8C
  c->r[3]=0u+0x80000000u; // 8044DE90
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8044DE94
L_8044DE98:;
  c->r[0]=c->r[4]+0x80000000u; // 8044DE98
  cmpu(c,0,c->r[0],0x00000000u); // 8044DE9C
  if (!crb(c,2)) { goto L_8044DEAC; } // 8044DEA0
  c->r[3]=0u+0x80000000u; // 8044DEA4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8044DEA8
L_8044DEAC:;
  c->r[0]=0u+0x00000000u; // 8044DEAC
  cmpu(c,0,c->r[4],c->r[5]); // 8044DEB0
  W32(c->r[6]+0x00000000u,c->r[0]); // 8044DEB4
  W32(c->r[6]+0x00000004u,c->r[0]); // 8044DEB8
  W32(c->r[6]+0x00000008u,c->r[0]); // 8044DEBC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8044DEC0
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044DEC4
  W32(c->r[6]+0x00000014u,c->r[0]); // 8044DEC8
  W32(c->r[6]+0x00000018u,c->r[0]); // 8044DECC
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 8044DED0
  W32(c->r[6]+0x00000020u,c->r[0]); // 8044DED4
  W32(c->r[6]+0x00000024u,c->r[4]); // 8044DED8
  W32(c->r[6]+0x00000028u,c->r[4]); // 8044DEDC
  W32(c->r[6]+0x0000002Cu,c->r[4]); // 8044DEE0
  W32(c->r[6]+0x00000030u,c->r[4]); // 8044DEE4
  W32(c->r[6]+0x00000034u,c->r[4]); // 8044DEE8
  W32(c->r[6]+0x00000038u,c->r[4]); // 8044DEEC
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 8044DEF0
  W32(c->r[6]+0x00000040u,c->r[4]); // 8044DEF4
  if (!crb(c,2)) { goto L_8044DFE0; } // 8044DEF8
  c->r[0]=0u+0x00000005u; // 8044DEFC
  c->r[3]=c->r[6]+0x00000044u; // 8044DF00
  c->r[7]=0u+0x00000011u; // 8044DF04
  c->ctr=c->r[0]; // 8044DF08
L_8044DF0C:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8044DF0C
  c->r[7]=c->r[7]+0x00000028u; // 8044DF10
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044DF14
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044DF18
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8044DF1C
  W32(c->r[3]+0x00000010u,c->r[4]); // 8044DF20
  W32(c->r[3]+0x00000014u,c->r[4]); // 8044DF24
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044DF28
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8044DF2C
  W32(c->r[3]+0x00000020u,c->r[4]); // 8044DF30
  W32(c->r[3]+0x00000024u,c->r[4]); // 8044DF34
  W32(c->r[3]+0x00000028u,c->r[4]); // 8044DF38
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8044DF3C
  W32(c->r[3]+0x00000030u,c->r[4]); // 8044DF40
  W32(c->r[3]+0x00000034u,c->r[4]); // 8044DF44
  W32(c->r[3]+0x00000038u,c->r[4]); // 8044DF48
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8044DF4C
  W32(c->r[3]+0x00000040u,c->r[4]); // 8044DF50
  W32(c->r[3]+0x00000044u,c->r[4]); // 8044DF54
  W32(c->r[3]+0x00000048u,c->r[4]); // 8044DF58
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8044DF5C
  W32(c->r[3]+0x00000050u,c->r[4]); // 8044DF60
  W32(c->r[3]+0x00000054u,c->r[4]); // 8044DF64
  W32(c->r[3]+0x00000058u,c->r[4]); // 8044DF68
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8044DF6C
  W32(c->r[3]+0x00000060u,c->r[4]); // 8044DF70
  W32(c->r[3]+0x00000064u,c->r[4]); // 8044DF74
  W32(c->r[3]+0x00000068u,c->r[4]); // 8044DF78
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8044DF7C
  W32(c->r[3]+0x00000070u,c->r[4]); // 8044DF80
  W32(c->r[3]+0x00000074u,c->r[4]); // 8044DF84
  W32(c->r[3]+0x00000078u,c->r[4]); // 8044DF88
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8044DF8C
  W32(c->r[3]+0x00000080u,c->r[4]); // 8044DF90
  W32(c->r[3]+0x00000084u,c->r[4]); // 8044DF94
  W32(c->r[3]+0x00000088u,c->r[4]); // 8044DF98
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 8044DF9C
  W32(c->r[3]+0x00000090u,c->r[4]); // 8044DFA0
  W32(c->r[3]+0x00000094u,c->r[4]); // 8044DFA4
  W32(c->r[3]+0x00000098u,c->r[4]); // 8044DFA8
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 8044DFAC
  c->r[3]=c->r[3]+0x000000A0u; // 8044DFB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044DF0C; } // 8044DFB4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8044DFB8
  W32(c->r[6]+c->r[0],c->r[4]); // 8044DFBC
  c->r[3]=c->r[6]+c->r[0]; // 8044DFC0
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044DFC4
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044DFC8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8044DFCC
  W32(c->r[3]+0x00000010u,c->r[4]); // 8044DFD0
  W32(c->r[3]+0x00000014u,c->r[4]); // 8044DFD4
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044DFD8
  goto L_8044E108; // 8044DFDC
L_8044DFE0:;
  c->r[3]=0u+0x27930000u; // 8044DFE0
  c->r[7]=c->r[5]-c->r[4]; // 8044DFE4
  c->r[0]=c->r[3]+0x00002B49u; // 8044DFE8
  c->r[8]=0u+0x00000019u; // 8044DFEC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 8044DFF0
  c->r[3]=c->r[6]+0x00000044u; // 8044DFF4
  c->r[7]=0u+0x00000011u; // 8044DFF8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8044DFFC
  c->ctr=c->r[8]; // 8044E000
L_8044E004:;
  c->r[9]=c->r[7]+0xFFFFFFEFu; // 8044E004
  c->r[8]=c->r[7]+0xFFFFFFF0u; // 8044E008
  c->r[29]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 8044E00C
  c->r[30]=c->r[7]+0xFFFFFFF1u; // 8044E010
  c->r[12]=c->r[7]+0xFFFFFFF2u; // 8044E014
  c->r[11]=c->r[7]+0xFFFFFFF3u; // 8044E018
  c->r[10]=c->r[7]+0xFFFFFFF4u; // 8044E01C
  c->r[9]=c->r[7]+0xFFFFFFF5u; // 8044E020
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 8044E024
  c->r[8]=c->r[4]+c->r[29]; // 8044E028
  W32(c->r[3]+0x00000000u,c->r[8]); // 8044E02C
  c->r[8]=c->r[7]+0xFFFFFFF6u; // 8044E030
  c->r[7]=c->r[7]+0x00000008u; // 8044E034
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 8044E038
  c->r[31]=c->r[4]+c->r[31]; // 8044E03C
  W32(c->r[3]+0x00000004u,c->r[31]); // 8044E040
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[0]); // 8044E044
  c->r[30]=c->r[4]+c->r[30]; // 8044E048
  W32(c->r[3]+0x00000008u,c->r[30]); // 8044E04C
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8044E050
  c->r[12]=c->r[4]+c->r[12]; // 8044E054
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 8044E058
  c->r[10]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E05C
  c->r[11]=c->r[4]+c->r[11]; // 8044E060
  W32(c->r[3]+0x00000010u,c->r[11]); // 8044E064
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 8044E068
  c->r[10]=c->r[4]+c->r[10]; // 8044E06C
  W32(c->r[3]+0x00000014u,c->r[10]); // 8044E070
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 8044E074
  c->r[9]=c->r[4]+c->r[9]; // 8044E078
  W32(c->r[3]+0x00000018u,c->r[9]); // 8044E07C
  c->r[8]=c->r[4]+c->r[8]; // 8044E080
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 8044E084
  c->r[3]=c->r[3]+0x00000020u; // 8044E088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E004; } // 8044E08C
  c->r[8]=c->r[7]+0xFFFFFFEFu; // 8044E090
  c->r[3]=c->r[7]+0xFFFFFFF0u; // 8044E094
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 8044E098
  c->r[11]=c->r[7]+0xFFFFFFF1u; // 8044E09C
  c->r[30]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8044E0A0
  c->r[9]=c->r[7]+0xFFFFFFF3u; // 8044E0A4
  c->r[10]=c->r[7]+0xFFFFFFF2u; // 8044E0A8
  c->r[8]=c->r[7]+0xFFFFFFF4u; // 8044E0AC
  c->r[12]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8044E0B0
  c->r[3]=c->r[4]+c->r[31]; // 8044E0B4
  W32(c->r[6]+c->r[30],c->r[3]); // 8044E0B8
  c->r[29]=c->r[6]+c->r[30]; // 8044E0BC
  c->r[3]=c->r[7]+0xFFFFFFF5u; // 8044E0C0
  c->r[7]=c->r[4]+c->r[12]; // 8044E0C4
  W32(c->r[29]+0x00000004u,c->r[7]); // 8044E0C8
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E0CC
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8044E0D0
  c->r[7]=c->r[4]+c->r[7]; // 8044E0D4
  c->r[10]=c->r[4]+c->r[11]; // 8044E0D8
  W32(c->r[29]+0x00000008u,c->r[10]); // 8044E0DC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 8044E0E0
  W32(c->r[29]+0x0000000Cu,c->r[7]); // 8044E0E4
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 8044E0E8
  c->r[8]=c->r[4]+c->r[9]; // 8044E0EC
  W32(c->r[29]+0x00000010u,c->r[8]); // 8044E0F0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8044E0F4
  c->r[3]=c->r[4]+c->r[7]; // 8044E0F8
  W32(c->r[29]+0x00000014u,c->r[3]); // 8044E0FC
  c->r[0]=c->r[4]+c->r[0]; // 8044E100
  W32(c->r[29]+0x00000018u,c->r[0]); // 8044E104
L_8044E108:;
  W32(c->r[6]+0x00000380u,c->r[5]); // 8044E108
  c->r[3]=0u+0x80000000u; // 8044E10C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044E110
  W32(c->r[6]+0x00000384u,c->r[5]); // 8044E114
  W32(c->r[6]+0x00000388u,c->r[5]); // 8044E118
  W32(c->r[6]+0x0000038Cu,c->r[5]); // 8044E11C
  W32(c->r[6]+0x00000390u,c->r[5]); // 8044E120
  W32(c->r[6]+0x00000394u,c->r[5]); // 8044E124
  W32(c->r[6]+0x00000398u,c->r[5]); // 8044E128
  W32(c->r[6]+0x0000039Cu,c->r[5]); // 8044E12C
  W32(c->r[6]+0x000003A0u,c->r[5]); // 8044E130
  W32(c->r[6]+0x000003A4u,c->r[5]); // 8044E134
  W32(c->r[6]+0x000003A8u,c->r[5]); // 8044E138
  W32(c->r[6]+0x000003ACu,c->r[5]); // 8044E13C
  W32(c->r[6]+0x000003B0u,c->r[5]); // 8044E140
  W32(c->r[6]+0x000003B4u,c->r[5]); // 8044E144
  W32(c->r[6]+0x000003B8u,c->r[5]); // 8044E148
  W32(c->r[6]+0x000003BCu,c->r[5]); // 8044E14C
  W32(c->r[6]+0x000003C0u,c->r[0]); // 8044E150
  W32(c->r[6]+0x000003C4u,c->r[0]); // 8044E154
  W32(c->r[6]+0x000003C8u,c->r[0]); // 8044E158
  W32(c->r[6]+0x000003CCu,c->r[0]); // 8044E15C
  W32(c->r[6]+0x000003D0u,c->r[0]); // 8044E160
  W32(c->r[6]+0x000003D4u,c->r[0]); // 8044E164
  W32(c->r[6]+0x000003D8u,c->r[0]); // 8044E168
  W32(c->r[6]+0x000003DCu,c->r[0]); // 8044E16C
  W32(c->r[6]+0x000003E0u,c->r[0]); // 8044E170
  W32(c->r[6]+0x000003E4u,c->r[0]); // 8044E174
  W32(c->r[6]+0x000003E8u,c->r[0]); // 8044E178
  W32(c->r[6]+0x000003ECu,c->r[0]); // 8044E17C
  W32(c->r[6]+0x000003F0u,c->r[0]); // 8044E180
  W32(c->r[6]+0x000003F4u,c->r[0]); // 8044E184
  W32(c->r[6]+0x000003F8u,c->r[0]); // 8044E188
  W32(c->r[6]+0x000003FCu,c->r[0]); // 8044E18C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044E190
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044E194
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044E198
  c->r[1]=c->r[1]+0x00000020u; // 8044E19C
  return; // 8044E1A0
}

// fn_8044E1A4
void f_8044E1A4(Ctx* __restrict c) {
  trace_call(0x8044E1A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044E1A4
  c->r[0]=c->lr; // 8044E1A8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8044E1AC
  c->r[11]=c->r[1]+0x00000070u; // 8044E1B0
  c->lr=0x8044E1B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8044E1B4
  c->r[11]=0u+0x00000000u; // 8044E1B8
  c->r[12]=0u+0x43300000u; // 8044E1BC
  W8(c->r[6]+0x00000800u,c->r[11]); // 8044E1C0
  c->r[9]=c->r[6]+0x00000400u; // 8044E1C4
  c->r[10]=0u+0x806A0000u; // 8044E1C8
  c->r[7]=0u+0x806A0000u; // 8044E1CC
  W8(c->r[6]+0x00000801u,c->r[11]); // 8044E1D0
  c->r[0]=0u+0x0000001Bu; // 8044E1D4
  c->r[8]=c->r[9]+0x00000400u; // 8044E1D8
  c->r[3]=0u+0x00000010u; // 8044E1DC
  W8(c->r[6]+0x00000802u,c->r[11]); // 8044E1E0
  {uint32_t ea=c->r[10]+0x00007C10u; c->f[0]=RF64(ea);} // 8044E1E4
  W8(c->r[6]+0x00000803u,c->r[11]); // 8044E1E8
  {uint32_t ea=c->r[7]+0x00007C0Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8044E1EC
  W8(c->r[6]+0x00000804u,c->r[11]); // 8044E1F0
  W8(c->r[6]+0x00000805u,c->r[11]); // 8044E1F4
  W8(c->r[6]+0x00000806u,c->r[11]); // 8044E1F8
  W8(c->r[6]+0x00000807u,c->r[11]); // 8044E1FC
  W8(c->r[6]+0x00000808u,c->r[11]); // 8044E200
  W8(c->r[6]+0x00000809u,c->r[11]); // 8044E204
  W8(c->r[6]+0x0000080Au,c->r[11]); // 8044E208
  W8(c->r[6]+0x0000080Bu,c->r[11]); // 8044E20C
  W8(c->r[6]+0x0000080Cu,c->r[11]); // 8044E210
  W8(c->r[6]+0x0000080Du,c->r[11]); // 8044E214
  W8(c->r[6]+0x0000080Eu,c->r[11]); // 8044E218
  W32(c->r[1]+0x00000008u,c->r[12]); // 8044E21C
  W32(c->r[1]+0x00000010u,c->r[12]); // 8044E220
  W8(c->r[6]+0x0000080Fu,c->r[11]); // 8044E224
  c->ctr=c->r[0]; // 8044E228
L_8044E22C:;
  c->r[7]=c->r[3]+0xFFFFFFF0u; // 8044E22C
  c->r[11]=c->r[3]+0xFFFFFFF2u; // 8044E230
  c->r[7]=c->r[7]^0x80000000u; // 8044E234
  c->r[10]=c->r[3]+0xFFFFFFF4u; // 8044E238
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8044E23C
  c->r[0]=c->r[3]+0xFFFFFFF1u; // 8044E240
  c->r[7]=c->r[0]^0x80000000u; // 8044E244
  c->r[12]=c->r[11]^0x80000000u; // 8044E248
  W32(c->r[1]+0x00000014u,c->r[7]); // 8044E24C
  c->r[0]=c->r[3]+0xFFFFFFF3u; // 8044E250
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8044E254
  c->r[11]=c->r[0]^0x80000000u; // 8044E258
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044E25C
  c->r[7]=c->r[3]+0xFFFFFFF5u; // 8044E260
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8044E264
  W32(c->r[1]+0x0000000Cu,c->r[12]); // 8044E268
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8044E26C
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 8044E270
  W32(c->r[1]+0x00000014u,c->r[11]); // 8044E274
  c->r[10]=c->r[10]^0x80000000u; // 8044E278
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044E27C
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[3]); // 8044E280
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[2]); // 8044E284
  c->r[7]=c->r[7]^0x80000000u; // 8044E288
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8044E28C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044E290
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8044E294
  c->f[6]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 8044E298
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8044E29C
  W32(c->r[1]+0x00000014u,c->r[7]); // 8044E2A0
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8044E2A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044E2A8
  c->r[0]=c->r[0]^0x80000000u; // 8044E2AC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8044E2B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044E2B4
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[2]); // 8044E2B8
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 8044E2BC
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 8044E2C0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[6]);} // 8044E2C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8044E2C8
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[4]); // 8044E2CC
  c->f[6]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044E2D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044E2D4
  c->r[0]=c->r[0]^0x80000000u; // 8044E2D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[7]);} // 8044E2DC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8044E2E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044E2E4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8044E2E8
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 8044E2EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8044E2F0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8044E2F4
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 8044E2F8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[6]);} // 8044E2FC
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8044E300
  W8(c->r[8]+c->r[3],c->r[0]); // 8044E304
  c->r[10]=c->r[8]+c->r[3]; // 8044E308
  c->r[7]=R32(c->r[1]+0x00000024u); // 8044E30C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8044E310
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8044E314
  W8(c->r[10]+0x00000001u,c->r[7]); // 8044E318
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 8044E31C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044E320
  c->r[3]=c->r[3]+0x00000008u; // 8044E324
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[5]);} // 8044E328
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 8044E32C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8044E330
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[4]);} // 8044E334
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8044E338
  c->r[7]=R32(c->r[1]+0x00000034u); // 8044E33C
  W8(c->r[10]+0x00000002u,c->r[0]); // 8044E340
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8044E344
  W8(c->r[10]+0x00000003u,c->r[7]); // 8044E348
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 8044E34C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8044E350
  c->r[7]=R32(c->r[1]+0x00000044u); // 8044E354
  W8(c->r[10]+0x00000004u,c->r[0]); // 8044E358
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8044E35C
  W8(c->r[10]+0x00000005u,c->r[7]); // 8044E360
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 8044E364
  W8(c->r[10]+0x00000006u,c->r[0]); // 8044E368
  c->r[0]=R32(c->r[1]+0x00000054u); // 8044E36C
  W8(c->r[10]+0x00000007u,c->r[0]); // 8044E370
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E22C; } // 8044E374
  c->r[7]=c->r[3]+0xFFFFFFF0u; // 8044E378
  c->r[0]=c->r[3]+0xFFFFFFF1u; // 8044E37C
  c->r[7]=c->r[7]^0x80000000u; // 8044E380
  c->r[12]=0u+0x806A0000u; // 8044E384
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8044E388
  c->r[10]=c->r[0]^0x80000000u; // 8044E38C
  c->r[7]=c->r[3]+0xFFFFFFF3u; // 8044E390
  c->r[11]=0u+0x806A0000u; // 8044E394
  W32(c->r[1]+0x00000014u,c->r[10]); // 8044E398
  c->r[0]=c->r[3]+0xFFFFFFF2u; // 8044E39C
  c->r[10]=c->r[0]^0x80000000u; // 8044E3A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044E3A4
  {uint32_t ea=c->r[12]+0x00007C10u; c->f[5]=RF64(ea);} // 8044E3A8
  c->r[0]=c->r[5]+0x80000000u; // 8044E3AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8044E3B0
  c->r[7]=c->r[7]^0x80000000u; // 8044E3B4
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8044E3B8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[5]); // 8044E3BC
  {uint32_t ea=c->r[11]+0x00007C0Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8044E3C0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8044E3C4
  W32(c->r[1]+0x00000014u,c->r[7]); // 8044E3C8
  cmpu(c,0,c->r[0],0x00000000u); // 8044E3CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8044E3D0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8044E3D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8044E3D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 8044E3DC
  c->r[10]=c->r[3]+c->r[8]; // 8044E3E0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8044E3E4
  c->r[7]=0u+0x000000FFu; // 8044E3E8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8044E3EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 8044E3F0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8044E3F4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8044E3F8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 8044E3FC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8044E400
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8044E404
  c->r[0]=R32(c->r[1]+0x00000054u); // 8044E408
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8044E40C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8044E410
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[1]);} // 8044E414
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 8044E418
  W8(c->r[8]+c->r[3],c->r[0]); // 8044E41C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8044E420
  W8(c->r[10]+0x00000001u,c->r[11]); // 8044E424
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 8044E428
  W8(c->r[10]+0x00000002u,c->r[0]); // 8044E42C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8044E430
  W8(c->r[10]+0x00000003u,c->r[0]); // 8044E434
  W8(c->r[8]+0x000000ECu,c->r[7]); // 8044E438
  W8(c->r[8]+0x000000EDu,c->r[7]); // 8044E43C
  W8(c->r[8]+0x000000EEu,c->r[7]); // 8044E440
  W8(c->r[8]+0x000000EFu,c->r[7]); // 8044E444
  W8(c->r[8]+0x000000F0u,c->r[7]); // 8044E448
  W8(c->r[8]+0x000000F1u,c->r[7]); // 8044E44C
  W8(c->r[8]+0x000000F2u,c->r[7]); // 8044E450
  W8(c->r[8]+0x000000F3u,c->r[7]); // 8044E454
  W8(c->r[8]+0x000000F4u,c->r[7]); // 8044E458
  W8(c->r[8]+0x000000F5u,c->r[7]); // 8044E45C
  W8(c->r[8]+0x000000F6u,c->r[7]); // 8044E460
  W8(c->r[8]+0x000000F7u,c->r[7]); // 8044E464
  W8(c->r[8]+0x000000F8u,c->r[7]); // 8044E468
  W8(c->r[8]+0x000000F9u,c->r[7]); // 8044E46C
  W8(c->r[8]+0x000000FAu,c->r[7]); // 8044E470
  W8(c->r[8]+0x000000FBu,c->r[7]); // 8044E474
  W8(c->r[8]+0x000000FCu,c->r[7]); // 8044E478
  W8(c->r[8]+0x000000FDu,c->r[7]); // 8044E47C
  W8(c->r[8]+0x000000FEu,c->r[7]); // 8044E480
  W8(c->r[8]+0x000000FFu,c->r[7]); // 8044E484
  if (!crb(c,2)) { goto L_8044E494; } // 8044E488
  c->r[3]=0u+0x80000000u; // 8044E48C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8044E490
L_8044E494:;
  c->r[0]=c->r[4]+0x80000000u; // 8044E494
  cmpu(c,0,c->r[0],0x00000000u); // 8044E498
  if (!crb(c,2)) { goto L_8044E4A8; } // 8044E49C
  c->r[3]=0u+0x80000000u; // 8044E4A0
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8044E4A4
L_8044E4A8:;
  c->r[0]=0u+0x00000000u; // 8044E4A8
  cmpu(c,0,c->r[4],c->r[5]); // 8044E4AC
  W32(c->r[9]+0x00000000u,c->r[0]); // 8044E4B0
  W32(c->r[9]+0x00000004u,c->r[0]); // 8044E4B4
  W32(c->r[9]+0x00000008u,c->r[0]); // 8044E4B8
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 8044E4BC
  W32(c->r[9]+0x00000010u,c->r[0]); // 8044E4C0
  W32(c->r[9]+0x00000014u,c->r[0]); // 8044E4C4
  W32(c->r[9]+0x00000018u,c->r[0]); // 8044E4C8
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 8044E4CC
  W32(c->r[9]+0x00000020u,c->r[0]); // 8044E4D0
  W32(c->r[9]+0x00000024u,c->r[4]); // 8044E4D4
  W32(c->r[9]+0x00000028u,c->r[4]); // 8044E4D8
  W32(c->r[9]+0x0000002Cu,c->r[4]); // 8044E4DC
  W32(c->r[9]+0x00000030u,c->r[4]); // 8044E4E0
  W32(c->r[9]+0x00000034u,c->r[4]); // 8044E4E4
  W32(c->r[9]+0x00000038u,c->r[4]); // 8044E4E8
  W32(c->r[9]+0x0000003Cu,c->r[4]); // 8044E4EC
  W32(c->r[9]+0x00000040u,c->r[4]); // 8044E4F0
  if (!crb(c,2)) { goto L_8044E5DC; } // 8044E4F4
  c->r[0]=0u+0x00000005u; // 8044E4F8
  c->r[3]=c->r[9]+0x00000044u; // 8044E4FC
  c->r[7]=0u+0x00000011u; // 8044E500
  c->ctr=c->r[0]; // 8044E504
L_8044E508:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8044E508
  c->r[7]=c->r[7]+0x00000028u; // 8044E50C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044E510
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044E514
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8044E518
  W32(c->r[3]+0x00000010u,c->r[4]); // 8044E51C
  W32(c->r[3]+0x00000014u,c->r[4]); // 8044E520
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044E524
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8044E528
  W32(c->r[3]+0x00000020u,c->r[4]); // 8044E52C
  W32(c->r[3]+0x00000024u,c->r[4]); // 8044E530
  W32(c->r[3]+0x00000028u,c->r[4]); // 8044E534
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8044E538
  W32(c->r[3]+0x00000030u,c->r[4]); // 8044E53C
  W32(c->r[3]+0x00000034u,c->r[4]); // 8044E540
  W32(c->r[3]+0x00000038u,c->r[4]); // 8044E544
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8044E548
  W32(c->r[3]+0x00000040u,c->r[4]); // 8044E54C
  W32(c->r[3]+0x00000044u,c->r[4]); // 8044E550
  W32(c->r[3]+0x00000048u,c->r[4]); // 8044E554
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8044E558
  W32(c->r[3]+0x00000050u,c->r[4]); // 8044E55C
  W32(c->r[3]+0x00000054u,c->r[4]); // 8044E560
  W32(c->r[3]+0x00000058u,c->r[4]); // 8044E564
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8044E568
  W32(c->r[3]+0x00000060u,c->r[4]); // 8044E56C
  W32(c->r[3]+0x00000064u,c->r[4]); // 8044E570
  W32(c->r[3]+0x00000068u,c->r[4]); // 8044E574
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8044E578
  W32(c->r[3]+0x00000070u,c->r[4]); // 8044E57C
  W32(c->r[3]+0x00000074u,c->r[4]); // 8044E580
  W32(c->r[3]+0x00000078u,c->r[4]); // 8044E584
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8044E588
  W32(c->r[3]+0x00000080u,c->r[4]); // 8044E58C
  W32(c->r[3]+0x00000084u,c->r[4]); // 8044E590
  W32(c->r[3]+0x00000088u,c->r[4]); // 8044E594
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 8044E598
  W32(c->r[3]+0x00000090u,c->r[4]); // 8044E59C
  W32(c->r[3]+0x00000094u,c->r[4]); // 8044E5A0
  W32(c->r[3]+0x00000098u,c->r[4]); // 8044E5A4
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 8044E5A8
  c->r[3]=c->r[3]+0x000000A0u; // 8044E5AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E508; } // 8044E5B0
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8044E5B4
  W32(c->r[9]+c->r[0],c->r[4]); // 8044E5B8
  c->r[3]=c->r[9]+c->r[0]; // 8044E5BC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8044E5C0
  W32(c->r[3]+0x00000008u,c->r[4]); // 8044E5C4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8044E5C8
  W32(c->r[3]+0x00000010u,c->r[4]); // 8044E5CC
  W32(c->r[3]+0x00000014u,c->r[4]); // 8044E5D0
  W32(c->r[3]+0x00000018u,c->r[4]); // 8044E5D4
  goto L_8044E704; // 8044E5D8
L_8044E5DC:;
  c->r[3]=0u+0x27930000u; // 8044E5DC
  c->r[7]=c->r[5]-c->r[4]; // 8044E5E0
  c->r[0]=c->r[3]+0x00002B49u; // 8044E5E4
  c->r[10]=0u+0x00000019u; // 8044E5E8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 8044E5EC
  c->r[3]=c->r[9]+0x00000044u; // 8044E5F0
  c->r[7]=0u+0x00000011u; // 8044E5F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8044E5F8
  c->ctr=c->r[10]; // 8044E5FC
L_8044E600:;
  c->r[11]=c->r[7]+0xFFFFFFEFu; // 8044E600
  c->r[10]=c->r[7]+0xFFFFFFF0u; // 8044E604
  c->r[27]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8044E608
  c->r[30]=c->r[7]+0xFFFFFFF1u; // 8044E60C
  c->r[29]=c->r[7]+0xFFFFFFF2u; // 8044E610
  c->r[28]=c->r[7]+0xFFFFFFF3u; // 8044E614
  c->r[12]=c->r[7]+0xFFFFFFF4u; // 8044E618
  c->r[11]=c->r[7]+0xFFFFFFF5u; // 8044E61C
  c->r[31]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E620
  c->r[10]=c->r[4]+c->r[27]; // 8044E624
  W32(c->r[3]+0x00000000u,c->r[10]); // 8044E628
  c->r[10]=c->r[7]+0xFFFFFFF6u; // 8044E62C
  c->r[7]=c->r[7]+0x00000008u; // 8044E630
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 8044E634
  c->r[31]=c->r[4]+c->r[31]; // 8044E638
  W32(c->r[3]+0x00000004u,c->r[31]); // 8044E63C
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 8044E640
  c->r[30]=c->r[4]+c->r[30]; // 8044E644
  W32(c->r[3]+0x00000008u,c->r[30]); // 8044E648
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[0]); // 8044E64C
  c->r[29]=c->r[4]+c->r[29]; // 8044E650
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8044E654
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[0]); // 8044E658
  c->r[28]=c->r[4]+c->r[28]; // 8044E65C
  W32(c->r[3]+0x00000010u,c->r[28]); // 8044E660
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8044E664
  c->r[12]=c->r[4]+c->r[12]; // 8044E668
  W32(c->r[3]+0x00000014u,c->r[12]); // 8044E66C
  c->r[10]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E670
  c->r[11]=c->r[4]+c->r[11]; // 8044E674
  W32(c->r[3]+0x00000018u,c->r[11]); // 8044E678
  c->r[10]=c->r[4]+c->r[10]; // 8044E67C
  W32(c->r[3]+0x0000001Cu,c->r[10]); // 8044E680
  c->r[3]=c->r[3]+0x00000020u; // 8044E684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E600; } // 8044E688
  c->r[10]=c->r[7]+0xFFFFFFEFu; // 8044E68C
  c->r[3]=c->r[7]+0xFFFFFFF0u; // 8044E690
  c->r[29]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E694
  c->r[31]=c->r[7]+0xFFFFFFF1u; // 8044E698
  c->r[28]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8044E69C
  c->r[11]=c->r[7]+0xFFFFFFF3u; // 8044E6A0
  c->r[12]=c->r[7]+0xFFFFFFF2u; // 8044E6A4
  c->r[10]=c->r[7]+0xFFFFFFF4u; // 8044E6A8
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8044E6AC
  c->r[3]=c->r[4]+c->r[29]; // 8044E6B0
  W32(c->r[9]+c->r[28],c->r[3]); // 8044E6B4
  c->r[27]=c->r[9]+c->r[28]; // 8044E6B8
  c->r[3]=c->r[7]+0xFFFFFFF5u; // 8044E6BC
  c->r[7]=c->r[4]+c->r[30]; // 8044E6C0
  W32(c->r[27]+0x00000004u,c->r[7]); // 8044E6C4
  c->r[7]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[0]); // 8044E6C8
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 8044E6CC
  c->r[7]=c->r[4]+c->r[7]; // 8044E6D0
  c->r[12]=c->r[4]+c->r[31]; // 8044E6D4
  W32(c->r[27]+0x00000008u,c->r[12]); // 8044E6D8
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8044E6DC
  W32(c->r[27]+0x0000000Cu,c->r[7]); // 8044E6E0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8044E6E4
  c->r[10]=c->r[4]+c->r[11]; // 8044E6E8
  W32(c->r[27]+0x00000010u,c->r[10]); // 8044E6EC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8044E6F0
  c->r[3]=c->r[4]+c->r[7]; // 8044E6F4
  W32(c->r[27]+0x00000014u,c->r[3]); // 8044E6F8
  c->r[0]=c->r[4]+c->r[0]; // 8044E6FC
  W32(c->r[27]+0x00000018u,c->r[0]); // 8044E700
L_8044E704:;
  W32(c->r[9]+0x00000380u,c->r[5]); // 8044E704
  c->r[3]=0u+0x80000000u; // 8044E708
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8044E70C
  c->r[0]=0u+0x00000010u; // 8044E710
  W32(c->r[9]+0x00000384u,c->r[5]); // 8044E714
  c->r[4]=0u+0x00000000u; // 8044E718
  W32(c->r[9]+0x00000388u,c->r[5]); // 8044E71C
  W32(c->r[9]+0x0000038Cu,c->r[5]); // 8044E720
  W32(c->r[9]+0x00000390u,c->r[5]); // 8044E724
  W32(c->r[9]+0x00000394u,c->r[5]); // 8044E728
  W32(c->r[9]+0x00000398u,c->r[5]); // 8044E72C
  W32(c->r[9]+0x0000039Cu,c->r[5]); // 8044E730
  W32(c->r[9]+0x000003A0u,c->r[5]); // 8044E734
  W32(c->r[9]+0x000003A4u,c->r[5]); // 8044E738
  W32(c->r[9]+0x000003A8u,c->r[5]); // 8044E73C
  W32(c->r[9]+0x000003ACu,c->r[5]); // 8044E740
  W32(c->r[9]+0x000003B0u,c->r[5]); // 8044E744
  W32(c->r[9]+0x000003B4u,c->r[5]); // 8044E748
  W32(c->r[9]+0x000003B8u,c->r[5]); // 8044E74C
  W32(c->r[9]+0x000003BCu,c->r[5]); // 8044E750
  W32(c->r[9]+0x000003C0u,c->r[3]); // 8044E754
  W32(c->r[9]+0x000003C4u,c->r[3]); // 8044E758
  W32(c->r[9]+0x000003C8u,c->r[3]); // 8044E75C
  W32(c->r[9]+0x000003CCu,c->r[3]); // 8044E760
  W32(c->r[9]+0x000003D0u,c->r[3]); // 8044E764
  W32(c->r[9]+0x000003D4u,c->r[3]); // 8044E768
  W32(c->r[9]+0x000003D8u,c->r[3]); // 8044E76C
  W32(c->r[9]+0x000003DCu,c->r[3]); // 8044E770
  W32(c->r[9]+0x000003E0u,c->r[3]); // 8044E774
  W32(c->r[9]+0x000003E4u,c->r[3]); // 8044E778
  W32(c->r[9]+0x000003E8u,c->r[3]); // 8044E77C
  W32(c->r[9]+0x000003ECu,c->r[3]); // 8044E780
  W32(c->r[9]+0x000003F0u,c->r[3]); // 8044E784
  W32(c->r[9]+0x000003F4u,c->r[3]); // 8044E788
  W32(c->r[9]+0x000003F8u,c->r[3]); // 8044E78C
  W32(c->r[9]+0x000003FCu,c->r[3]); // 8044E790
  c->ctr=c->r[0]; // 8044E794
L_8044E798:;
  c->r[0]=R8(c->r[8]+c->r[4]); // 8044E798
  c->r[3]=c->r[8]+c->r[4]; // 8044E79C
  c->r[4]=c->r[4]+0x00000008u; // 8044E7A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7A4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7A8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8044E7AC
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044E7B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7B4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7B8
  W32(c->r[6]+0x00000004u,c->r[0]); // 8044E7BC
  c->r[0]=R8(c->r[3]+0x00000002u); // 8044E7C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7C4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7C8
  W32(c->r[6]+0x00000008u,c->r[0]); // 8044E7CC
  c->r[0]=R8(c->r[3]+0x00000003u); // 8044E7D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7D4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7D8
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8044E7DC
  c->r[0]=R8(c->r[3]+0x00000004u); // 8044E7E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7E4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7E8
  W32(c->r[6]+0x00000010u,c->r[0]); // 8044E7EC
  c->r[0]=R8(c->r[3]+0x00000005u); // 8044E7F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E7F4
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E7F8
  W32(c->r[6]+0x00000014u,c->r[0]); // 8044E7FC
  c->r[0]=R8(c->r[3]+0x00000006u); // 8044E800
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E804
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E808
  W32(c->r[6]+0x00000018u,c->r[0]); // 8044E80C
  c->r[0]=R8(c->r[3]+0x00000007u); // 8044E810
  c->r[3]=c->r[8]+c->r[4]; // 8044E814
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E818
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E81C
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 8044E820
  c->r[0]=R8(c->r[8]+c->r[4]); // 8044E824
  c->r[4]=c->r[4]+0x00000008u; // 8044E828
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E82C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E830
  W32(c->r[6]+0x00000020u,c->r[0]); // 8044E834
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044E838
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E83C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E840
  W32(c->r[6]+0x00000024u,c->r[0]); // 8044E844
  c->r[0]=R8(c->r[3]+0x00000002u); // 8044E848
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E84C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E850
  W32(c->r[6]+0x00000028u,c->r[0]); // 8044E854
  c->r[0]=R8(c->r[3]+0x00000003u); // 8044E858
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E85C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E860
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 8044E864
  c->r[0]=R8(c->r[3]+0x00000004u); // 8044E868
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E86C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E870
  W32(c->r[6]+0x00000030u,c->r[0]); // 8044E874
  c->r[0]=R8(c->r[3]+0x00000005u); // 8044E878
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E87C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E880
  W32(c->r[6]+0x00000034u,c->r[0]); // 8044E884
  c->r[0]=R8(c->r[3]+0x00000006u); // 8044E888
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E88C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E890
  W32(c->r[6]+0x00000038u,c->r[0]); // 8044E894
  c->r[0]=R8(c->r[3]+0x00000007u); // 8044E898
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8044E89C
  c->r[0]=R32(c->r[9]+c->r[0]); // 8044E8A0
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 8044E8A4
  c->r[6]=c->r[6]+0x00000040u; // 8044E8A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E798; } // 8044E8AC
  c->r[11]=c->r[1]+0x00000070u; // 8044E8B0
  c->lr=0x8044E8B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8044E8B4
  c->r[0]=R32(c->r[1]+0x00000074u); // 8044E8B8
  c->lr=c->r[0]; // 8044E8BC
  c->r[1]=c->r[1]+0x00000070u; // 8044E8C0
  return; // 8044E8C4
}

// fn_8044E8C8
void f_8044E8C8(Ctx* __restrict c) {
  trace_call(0x8044E8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044E8C8
  c->r[0]=c->lr; // 8044E8CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044E8D0
  c->r[11]=c->r[1]+0x00000030u; // 8044E8D4
  c->lr=0x8044E8DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8044E8D8
  c->r[28]=c->r[5]|c->r[5]; // 8044E8DC
  c->r[27]=c->r[3]|c->r[3]; // 8044E8E0
  c->r[5]=c->r[1]+0x0000000Cu; // 8044E8E4
  c->r[6]=c->r[1]+0x00000008u; // 8044E8E8
  c->lr=0x8044E8F0u; f_8044DD24(c); // 8044E8EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044E8F0
  c->r[3]=c->r[28]|c->r[28]; // 8044E8F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044E8F8
  c->r[29]=c->r[28]+0x00000400u; // 8044E8FC
  c->r[4]=0u+0x00000000u; // 8044E900
  c->r[5]=0u+0x00000400u; // 8044E904
  c->lr=0x8044E90Cu; f_800043EC(c); // 8044E908
  c->lr=0x8044E910u; f_8044D984(c); // 8044E90C
  cmps(c,0,(int32_t)c->r[3],1); // 8044E910
  if (!crb(c,2)) { goto L_8044E930; } // 8044E914
  c->r[3]=c->r[27]|c->r[27]; // 8044E918
  c->r[4]=c->r[31]|c->r[31]; // 8044E91C
  c->r[5]=c->r[30]|c->r[30]; // 8044E920
  c->r[6]=c->r[29]|c->r[29]; // 8044E924
  c->lr=0x8044E92Cu; f_8044E1A4(c); // 8044E928
  goto L_8044E944; // 8044E92C
L_8044E930:;
  c->r[3]=c->r[27]|c->r[27]; // 8044E930
  c->r[4]=c->r[31]|c->r[31]; // 8044E934
  c->r[5]=c->r[30]|c->r[30]; // 8044E938
  c->r[6]=c->r[29]|c->r[29]; // 8044E93C
  c->lr=0x8044E944u; f_8044DE74(c); // 8044E940
L_8044E944:;
  c->r[12]=R32(c->r[27]+0x00000044u); // 8044E944
  cmps(c,0,(int32_t)c->r[12],0); // 8044E948
  if (!crb(c,2)) { goto L_8044E984; } // 8044E94C
  c->r[0]=R32(c->r[27]+0x00000004u); // 8044E950
  cmps(c,0,(int32_t)c->r[0],16); // 8044E954
  if (!crb(c,2)) { goto L_8044E970; } // 8044E958
  c->r[3]=c->r[27]|c->r[27]; // 8044E95C
  c->r[4]=c->r[29]|c->r[29]; // 8044E960
  c->r[5]=c->r[28]|c->r[28]; // 8044E964
  c->lr=0x8044E96Cu; f_8044E9B4(c); // 8044E968
  goto L_8044E99C; // 8044E96C
L_8044E970:;
  c->r[3]=c->r[27]|c->r[27]; // 8044E970
  c->r[4]=c->r[29]|c->r[29]; // 8044E974
  c->r[5]=c->r[28]|c->r[28]; // 8044E978
  c->lr=0x8044E980u; f_8044EB94(c); // 8044E97C
  goto L_8044E99C; // 8044E980
L_8044E984:;
  c->r[3]=c->r[29]|c->r[29]; // 8044E984
  c->r[4]=c->r[28]|c->r[28]; // 8044E988
  {uint32_t ea=c->r[27]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8044E98C
  {uint32_t ea=c->r[27]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8044E990
  c->ctr=c->r[12]; // 8044E994
  if (true) { c->lr=0x8044E99Cu; dispatch(c,c->ctr); } // 8044E998
L_8044E99C:;
  c->r[11]=c->r[1]+0x00000030u; // 8044E99C
  c->lr=0x8044E9A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8044E9A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8044E9A4
  c->lr=c->r[0]; // 8044E9A8
  c->r[1]=c->r[1]+0x00000030u; // 8044E9AC
  return; // 8044E9B0
}

// fn_8044E9B4
void f_8044E9B4(Ctx* __restrict c) {
  trace_call(0x8044E9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044E9B4
  c->r[6]=0u+0x807E0000u; // 8044E9B8
  c->r[6]=c->r[6]+0x00001A38u; // 8044E9BC
  c->r[7]=0u+0x806A0000u; // 8044E9C0
  c->r[0]=R32(c->r[6]+0x00000004u); // 8044E9C4
  c->r[7]=c->r[7]+0x00007C08u; // 8044E9C8
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8044E9CC
  cmps(c,0,(int32_t)c->r[0],1); // 8044E9D0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 8044E9D4
  if (!crb(c,2)) { goto L_8044EAB4; } // 8044E9D8
  c->r[0]=0u+0x00000010u; // 8044E9DC
  c->ctr=c->r[0]; // 8044E9E0
L_8044E9E4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044E9E4
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044E9E8
  W16(c->r[5]+0x00000000u,c->r[0]); // 8044E9EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044E9F0
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044E9F4
  W16(c->r[5]+0x00000002u,c->r[0]); // 8044E9F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8044E9FC
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA00
  W16(c->r[5]+0x00000004u,c->r[0]); // 8044EA04
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8044EA08
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA0C
  W16(c->r[5]+0x00000006u,c->r[0]); // 8044EA10
  c->r[0]=R32(c->r[4]+0x00000010u); // 8044EA14
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA18
  W16(c->r[5]+0x00000008u,c->r[0]); // 8044EA1C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8044EA20
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA24
  W16(c->r[5]+0x0000000Au,c->r[0]); // 8044EA28
  c->r[0]=R32(c->r[4]+0x00000018u); // 8044EA2C
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA30
  W16(c->r[5]+0x0000000Cu,c->r[0]); // 8044EA34
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8044EA38
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA3C
  W16(c->r[5]+0x0000000Eu,c->r[0]); // 8044EA40
  c->r[0]=R32(c->r[4]+0x00000020u); // 8044EA44
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA48
  W16(c->r[5]+0x00000010u,c->r[0]); // 8044EA4C
  c->r[0]=R32(c->r[4]+0x00000024u); // 8044EA50
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA54
  W16(c->r[5]+0x00000012u,c->r[0]); // 8044EA58
  c->r[0]=R32(c->r[4]+0x00000028u); // 8044EA5C
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA60
  W16(c->r[5]+0x00000014u,c->r[0]); // 8044EA64
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8044EA68
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA6C
  W16(c->r[5]+0x00000016u,c->r[0]); // 8044EA70
  c->r[0]=R32(c->r[4]+0x00000030u); // 8044EA74
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA78
  W16(c->r[5]+0x00000018u,c->r[0]); // 8044EA7C
  c->r[0]=R32(c->r[4]+0x00000034u); // 8044EA80
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA84
  W16(c->r[5]+0x0000001Au,c->r[0]); // 8044EA88
  c->r[0]=R32(c->r[4]+0x00000038u); // 8044EA8C
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EA90
  W16(c->r[5]+0x0000001Cu,c->r[0]); // 8044EA94
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8044EA98
  c->r[4]=c->r[4]+0x00000040u; // 8044EA9C
  c->r[0]=rotl(c->r[0],17)&0x0000FFFFu; // 8044EAA0
  W16(c->r[5]+0x0000001Eu,c->r[0]); // 8044EAA4
  c->r[5]=c->r[5]+0x00000020u; // 8044EAA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044E9E4; } // 8044EAAC
  goto L_8044EB8C; // 8044EAB0
L_8044EAB4:;
  c->f[1]=c->f[5]-c->f[4]; // 8044EAB4
  {uint32_t ea=c->r[7]+0x00000010u; c->f[0]=RF64(ea);} // 8044EAB8
  {uint32_t ea=c->r[7]+0x00000018u; c->f[3]=RF64(ea);} // 8044EABC
  c->r[0]=0u+0x00000080u; // 8044EAC0
  {uint32_t ea=c->r[7]+0x00000028u; c->f[2]=RF64(ea);} // 8044EAC4
  c->r[6]=0u+0x00000001u; // 8044EAC8
  c->f[6]=c->f[0]/c->f[1]; // 8044EACC
  {uint32_t ea=c->r[7]+0x00000020u; c->f[1]=RF64(ea);} // 8044EAD0
  c->r[7]=0u+0x00000000u; // 8044EAD4
  c->r[3]=0u+0x43300000u; // 8044EAD8
  c->f[0]=c->f[3]*c->f[6]; // 8044EADC
  c->f[3]=c->f[3]*c->f[5]; // 8044EAE0
  c->f[0]=c->f[0]*c->f[4]; // 8044EAE4
  c->f[3]=c->f[3]*c->f[6]; // 8044EAE8
  c->f[4]=c->f[5]*c->f[0]; // 8044EAEC
  c->ctr=c->r[0]; // 8044EAF0
L_8044EAF4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044EAF4
  cmps(c,0,(int32_t)c->r[0],0); // 8044EAF8
  if (!crb(c,2)) { goto L_8044EB04; } // 8044EAFC
  W32(c->r[4]+0x00000000u,c->r[6]); // 8044EB00
L_8044EB04:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044EB04
  W32(c->r[1]+0x00000008u,c->r[3]); // 8044EB08
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044EB0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8044EB10
  c->f[0]=c->f[0]-c->f[2]; // 8044EB14
  c->f[0]=c->f[5]*c->f[0]; // 8044EB18
  c->f[0]=c->f[0]/c->f[1]; // 8044EB1C
  c->f[0]=c->f[4]/c->f[0]; // 8044EB20
  c->f[0]=c->f[3]-c->f[0]; // 8044EB24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8044EB28
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8044EB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044EB30
  W16(c->r[5]+0x00000000u,c->r[0]); // 8044EB34
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044EB38
  cmps(c,0,(int32_t)c->r[0],0); // 8044EB3C
  if (!crb(c,2)) { goto L_8044EB48; } // 8044EB40
  W32(c->r[4]+0x00000004u,c->r[6]); // 8044EB44
L_8044EB48:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044EB48
  c->r[4]=c->r[4]+0x00000008u; // 8044EB4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8044EB50
  c->r[7]=c->r[7]+0x00000001u; // 8044EB54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044EB58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8044EB5C
  c->f[0]=c->f[0]-c->f[2]; // 8044EB60
  c->f[0]=c->f[5]*c->f[0]; // 8044EB64
  c->f[0]=c->f[0]/c->f[1]; // 8044EB68
  c->f[0]=c->f[4]/c->f[0]; // 8044EB6C
  c->f[0]=c->f[3]-c->f[0]; // 8044EB70
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8044EB74
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8044EB78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044EB7C
  W16(c->r[5]+0x00000002u,c->r[0]); // 8044EB80
  c->r[5]=c->r[5]+0x00000004u; // 8044EB84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044EAF4; } // 8044EB88
L_8044EB8C:;
  c->r[1]=c->r[1]+0x00000020u; // 8044EB8C
  return; // 8044EB90
}

// fn_8044EB94
void f_8044EB94(Ctx* __restrict c) {
  trace_call(0x8044EB94u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EB94
  c->r[0]=c->lr; // 8044EB98
  W32(c->r[1]+0x00000084u,c->r[0]); // 8044EB9C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8044EBA0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8044EBA4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8044EBA8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8044EBAC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8044EBB0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8044EBB4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 8044EBB8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8044EBBC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 8044EBC0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 8044EBC4
  c->r[11]=c->r[1]+0x00000030u; // 8044EBC8
  c->lr=0x8044EBD0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8044EBCC
  c->r[6]=0u+0x807E0000u; // 8044EBD0
  c->r[7]=0u+0x806A0000u; // 8044EBD4
  c->r[6]=c->r[6]+0x00001A38u; // 8044EBD8
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8044EBDC
  c->r[0]=R32(c->r[6]+0x00000004u); // 8044EBE0
  c->r[7]=c->r[7]+0x00007C08u; // 8044EBE4
  {uint32_t ea=c->r[3]+0x00000040u; c->f[29]=c->ps1[29]=RF32(ea);} // 8044EBE8
  cmps(c,0,(int32_t)c->r[0],1); // 8044EBEC
  if (!crb(c,2)) { goto L_8044ECCC; } // 8044EBF0
  c->r[0]=0u+0x00000010u; // 8044EBF4
  c->ctr=c->r[0]; // 8044EBF8
L_8044EBFC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8044EBFC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC00
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044EC04
  c->r[0]=R32(c->r[4]+0x00000004u); // 8044EC08
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC0C
  W32(c->r[5]+0x00000004u,c->r[0]); // 8044EC10
  c->r[0]=R32(c->r[4]+0x00000008u); // 8044EC14
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC18
  W32(c->r[5]+0x00000008u,c->r[0]); // 8044EC1C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8044EC20
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC24
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8044EC28
  c->r[0]=R32(c->r[4]+0x00000010u); // 8044EC2C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC30
  W32(c->r[5]+0x00000010u,c->r[0]); // 8044EC34
  c->r[0]=R32(c->r[4]+0x00000014u); // 8044EC38
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC3C
  W32(c->r[5]+0x00000014u,c->r[0]); // 8044EC40
  c->r[0]=R32(c->r[4]+0x00000018u); // 8044EC44
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC48
  W32(c->r[5]+0x00000018u,c->r[0]); // 8044EC4C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8044EC50
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC54
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8044EC58
  c->r[0]=R32(c->r[4]+0x00000020u); // 8044EC5C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC60
  W32(c->r[5]+0x00000020u,c->r[0]); // 8044EC64
  c->r[0]=R32(c->r[4]+0x00000024u); // 8044EC68
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC6C
  W32(c->r[5]+0x00000024u,c->r[0]); // 8044EC70
  c->r[0]=R32(c->r[4]+0x00000028u); // 8044EC74
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC78
  W32(c->r[5]+0x00000028u,c->r[0]); // 8044EC7C
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8044EC80
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC84
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 8044EC88
  c->r[0]=R32(c->r[4]+0x00000030u); // 8044EC8C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC90
  W32(c->r[5]+0x00000030u,c->r[0]); // 8044EC94
  c->r[0]=R32(c->r[4]+0x00000034u); // 8044EC98
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044EC9C
  W32(c->r[5]+0x00000034u,c->r[0]); // 8044ECA0
  c->r[0]=R32(c->r[4]+0x00000038u); // 8044ECA4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044ECA8
  W32(c->r[5]+0x00000038u,c->r[0]); // 8044ECAC
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8044ECB0
  c->r[4]=c->r[4]+0x00000040u; // 8044ECB4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFF00u; // 8044ECB8
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 8044ECBC
  c->r[5]=c->r[5]+0x00000040u; // 8044ECC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044EBFC; } // 8044ECC4
  goto L_8044ED5C; // 8044ECC8
L_8044ECCC:;
  c->f[2]=c->f[29]-c->f[3]; // 8044ECCC
  {uint32_t ea=c->r[7]+0x00000010u; c->f[0]=RF64(ea);} // 8044ECD0
  {uint32_t ea=c->r[7]+0x00000030u; c->f[1]=RF64(ea);} // 8044ECD4
  c->r[29]=c->r[4]|c->r[4]; // 8044ECD8
  {uint32_t ea=c->r[7]+0x00000028u; c->f[30]=RF64(ea);} // 8044ECDC
  c->r[28]=c->r[5]|c->r[5]; // 8044ECE0
  c->f[2]=c->f[0]/c->f[2]; // 8044ECE4
  {uint32_t ea=c->r[7]+0x00000020u; c->f[31]=RF64(ea);} // 8044ECE8
  c->r[27]=0u+0x00000000u; // 8044ECEC
  c->r[30]=0u+0x00000001u; // 8044ECF0
  c->r[31]=0u+0x43300000u; // 8044ECF4
  c->f[0]=c->f[1]*c->f[2]; // 8044ECF8
  c->f[1]=c->f[1]*c->f[29]; // 8044ECFC
  c->f[0]=c->f[0]*c->f[3]; // 8044ED00
  c->f[28]=c->f[1]*c->f[2]; // 8044ED04
  c->f[27]=c->f[29]*c->f[0]; // 8044ED08
L_8044ED0C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8044ED0C
  cmps(c,0,(int32_t)c->r[0],0); // 8044ED10
  if (!crb(c,2)) { goto L_8044ED1C; } // 8044ED14
  W32(c->r[29]+0x00000000u,c->r[30]); // 8044ED18
L_8044ED1C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8044ED1C
  W32(c->r[1]+0x00000008u,c->r[31]); // 8044ED20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8044ED24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8044ED28
  c->f[0]=c->f[0]-c->f[30]; // 8044ED2C
  c->f[0]=c->f[29]*c->f[0]; // 8044ED30
  c->f[0]=c->f[0]/c->f[31]; // 8044ED34
  c->f[0]=c->f[27]/c->f[0]; // 8044ED38
  c->f[1]=c->f[28]-c->f[0]; // 8044ED3C
  c->lr=0x8044ED44u; f_803A9ADC(c); // 8044ED40
  c->r[27]=c->r[27]+0x00000001u; // 8044ED44
  W32(c->r[28]+0x00000000u,c->r[3]); // 8044ED48
  cmps(c,0,(int32_t)c->r[27],256); // 8044ED4C
  c->r[29]=c->r[29]+0x00000004u; // 8044ED50
  c->r[28]=c->r[28]+0x00000004u; // 8044ED54
  if (crb(c,0)) { IRQCHK(c); goto L_8044ED0C; } // 8044ED58
L_8044ED5C:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8044ED5C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8044ED60
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8044ED64
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8044ED68
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8044ED6C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8044ED70
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 8044ED74
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 8044ED78
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 8044ED7C
  c->r[11]=c->r[1]+0x00000030u; // 8044ED80
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 8044ED84
  c->lr=0x8044ED8Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8044ED88
  c->r[0]=R32(c->r[1]+0x00000084u); // 8044ED8C
  c->lr=c->r[0]; // 8044ED90
  c->r[1]=c->r[1]+0x00000080u; // 8044ED94
  return; // 8044ED98
}

// fn_8044ED9C
void f_8044ED9C(Ctx* __restrict c) {
  trace_call(0x8044ED9Cu);
  f_8044EE44(c); return; // 8044ED9C
}

// fn_8044EDA0
void f_8044EDA0(Ctx* __restrict c) {
  trace_call(0x8044EDA0u);
  f_8044EE70(c); return; // 8044EDA0
}

// fn_8044EDA4
void f_8044EDA4(Ctx* __restrict c) {
  trace_call(0x8044EDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EDA4
  c->r[0]=c->lr; // 8044EDA8
  c->r[6]=0u+0x80410000u; // 8044EDAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044EDB0
  c->r[0]=0u+0x00000000u; // 8044EDB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044EDB8
  c->r[31]=c->r[5]|c->r[5]; // 8044EDBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044EDC0
  c->r[30]=c->r[4]|c->r[4]; // 8044EDC4
  c->r[4]=c->r[6]+0x00005108u; // 8044EDC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044EDCC
  c->r[29]=c->r[3]|c->r[3]; // 8044EDD0
  W32(c->r[3]+0x00000050u,c->r[0]); // 8044EDD4
  c->lr=0x8044EDDCu; f_8044CCA4(c); // 8044EDD8
  c->r[3]=c->r[29]|c->r[29]; // 8044EDDC
  c->r[4]=0u+0x00000000u; // 8044EDE0
  c->lr=0x8044EDE8u; f_8044CCAC(c); // 8044EDE4
  c->r[3]=c->r[29]|c->r[29]; // 8044EDE8
  c->r[4]=0u+0x00000000u; // 8044EDEC
  c->lr=0x8044EDF4u; f_8044CCB4(c); // 8044EDF0
  c->r[3]=c->r[29]|c->r[29]; // 8044EDF4
  c->r[4]=0u+0x00000000u; // 8044EDF8
  c->lr=0x8044EE00u; f_8044CCC0(c); // 8044EDFC
  c->r[3]=c->r[29]|c->r[29]; // 8044EE00
  c->r[4]=0u+0x00000000u; // 8044EE04
  c->lr=0x8044EE0Cu; f_8044CCCC(c); // 8044EE08
  c->r[3]=c->r[29]|c->r[29]; // 8044EE0C
  c->r[4]=0u+0x00000000u; // 8044EE10
  c->lr=0x8044EE18u; f_8044CCD8(c); // 8044EE14
  c->r[3]=c->r[29]|c->r[29]; // 8044EE18
  c->r[4]=c->r[30]|c->r[30]; // 8044EE1C
  c->r[5]=c->r[31]|c->r[31]; // 8044EE20
  c->lr=0x8044EE28u; f_8044CCE0(c); // 8044EE24
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044EE28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044EE2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044EE30
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044EE34
  c->lr=c->r[0]; // 8044EE38
  c->r[1]=c->r[1]+0x00000020u; // 8044EE3C
  return; // 8044EE40
}

// fn_8044EE44
void f_8044EE44(Ctx* __restrict c) {
  trace_call(0x8044EE44u);
  c->r[5]=0u+0x807E0000u; // 8044EE44
  c->r[3]=R32(c->r[5]+0x00001CA8u); // 8044EE48
  cmps(c,0,(int32_t)c->r[3],1); // 8044EE4C
  if (!crb(c,0)) return; // 8044EE50
  c->r[4]=0u+0x806A0000u; // 8044EE54
  c->r[0]=c->r[3]+0x00000001u; // 8044EE58
  c->r[4]=c->r[4]+0x00007E38u; // 8044EE5C
  c->r[3]=0u+0x807E0000u; // 8044EE60
  W32(c->r[3]+0x00001CACu,c->r[4]); // 8044EE64
  W32(c->r[5]+0x00001CA8u,c->r[0]); // 8044EE68
  return; // 8044EE6C
}

// fn_8044EE70
void f_8044EE70(Ctx* __restrict c) {
  trace_call(0x8044EE70u);
  c->r[4]=0u+0x807E0000u; // 8044EE70
  c->r[3]=R32(c->r[4]+0x00001CA8u); // 8044EE74
  cmps(c,0,(int32_t)c->r[3],0); // 8044EE78
  if (!crb(c,1)) return; // 8044EE7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044EE80
  W32(c->r[4]+0x00001CA8u,c->r[0]); // 8044EE84
  return; // 8044EE88
}

// fn_8044EE8C
void f_8044EE8C(Ctx* __restrict c) {
  trace_call(0x8044EE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EE8C
  c->r[0]=c->lr; // 8044EE90
  cmps(c,0,(int32_t)c->r[3],0); // 8044EE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044EE98
  if (crb(c,2)) { goto L_8044EEA8; } // 8044EE9C
  cmps(c,0,(int32_t)c->r[4],0); // 8044EEA0
  if (!crb(c,0)) { goto L_8044EEB0; } // 8044EEA4
L_8044EEA8:;
  c->r[3]=0u+0x00000000u; // 8044EEA8
  goto L_8044EED0; // 8044EEAC
L_8044EEB0:;
  c->r[4]=0u+0x806A0000u; // 8044EEB0
  c->r[5]=0u+0x00000001u; // 8044EEB4
  c->r[4]=c->r[4]+0x00007E6Cu; // 8044EEB8
  c->r[3]=c->r[3]+0x00000012u; // 8044EEBC
  c->r[4]=c->r[4]+0x00000015u; // 8044EEC0
  c->lr=0x8044EEC8u; f_803B3A58(c); // 8044EEC4
  c->r[0]=cntlz(c->r[3]); // 8044EEC8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8044EECC
L_8044EED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044EED0
  c->lr=c->r[0]; // 8044EED4
  c->r[1]=c->r[1]+0x00000010u; // 8044EED8
  return; // 8044EEDC
}

// fn_8044EEE0
void f_8044EEE0(Ctx* __restrict c) {
  trace_call(0x8044EEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EEE0
  c->r[0]=c->lr; // 8044EEE4
  cmps(c,0,(int32_t)c->r[3],0); // 8044EEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044EEEC
  if (crb(c,2)) { goto L_8044EEFC; } // 8044EEF0
  cmps(c,0,(int32_t)c->r[4],0); // 8044EEF4
  if (!crb(c,0)) { goto L_8044EF04; } // 8044EEF8
L_8044EEFC:;
  c->r[3]=0u+0x00000000u; // 8044EEFC
  goto L_8044EF24; // 8044EF00
L_8044EF04:;
  c->r[4]=0u+0x806A0000u; // 8044EF04
  c->r[5]=0u+0x00000001u; // 8044EF08
  c->r[4]=c->r[4]+0x00007E6Cu; // 8044EF0C
  c->r[3]=c->r[3]+0x00000013u; // 8044EF10
  c->r[4]=c->r[4]+0x00000017u; // 8044EF14
  c->lr=0x8044EF1Cu; f_803B3A58(c); // 8044EF18
  c->r[0]=cntlz(c->r[3]); // 8044EF1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8044EF20
L_8044EF24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044EF24
  c->lr=c->r[0]; // 8044EF28
  c->r[1]=c->r[1]+0x00000010u; // 8044EF2C
  return; // 8044EF30
}

// fn_8044EF34
void f_8044EF34(Ctx* __restrict c) {
  trace_call(0x8044EF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EF34
  c->r[0]=c->lr; // 8044EF38
  cmps(c,0,(int32_t)c->r[3],0); // 8044EF3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044EF40
  c->r[0]=0u+0x00000000u; // 8044EF44
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044EF48
  c->r[28]=c->r[3]|c->r[3]; // 8044EF4C
  c->r[25]=c->r[4]|c->r[4]; // 8044EF50
  c->r[26]=c->r[5]|c->r[5]; // 8044EF54
  c->r[27]=c->r[6]|c->r[6]; // 8044EF58
  W32(c->r[5]+0x00000000u,c->r[0]); // 8044EF5C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8044EF60
  if (crb(c,2)) { goto L_8044EFE0; } // 8044EF64
  cmps(c,0,(int32_t)c->r[4],0); // 8044EF68
  if (crb(c,1)) { goto L_8044EF74; } // 8044EF6C
  goto L_8044EFE0; // 8044EF70
L_8044EF74:;
  c->r[30]=0u+0x806A0000u; // 8044EF74
  c->r[29]=0u+0x00000000u; // 8044EF78
  c->r[30]=c->r[30]+0x00007E6Cu; // 8044EF7C
  c->r[31]=0u+0x00000023u; // 8044EF80
  goto L_8044EFD8; // 8044EF84
L_8044EF88:;
  c->r[3]=c->r[28]|c->r[28]; // 8044EF88
  c->r[4]=c->r[30]+0x0000001Fu; // 8044EF8C
  c->r[5]=0u+0x00000001u; // 8044EF90
  c->lr=0x8044EF98u; f_803AF7B8(c); // 8044EF94
  cmps(c,0,(int32_t)c->r[3],0); // 8044EF98
  if (!crb(c,2)) { goto L_8044EFD0; } // 8044EF9C
  c->r[3]=c->r[28]|c->r[28]; // 8044EFA0
  c->r[4]=c->r[30]|c->r[30]; // 8044EFA4
  c->r[5]=0u+0x00000008u; // 8044EFA8
  c->lr=0x8044EFB0u; f_803AF7B8(c); // 8044EFAC
  cmps(c,0,(int32_t)c->r[3],0); // 8044EFB0
  if (!crb(c,2)) { goto L_8044EFD0; } // 8044EFB4
  c->r[0]=cntlz(c->r[28]); // 8044EFB8
  W32(c->r[26]+0x00000000u,c->r[28]); // 8044EFBC
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8044EFC0
  c->r[0]=0u-c->r[0]; // 8044EFC4
  c->r[0]=c->r[31]&~c->r[0]; // 8044EFC8
  W32(c->r[27]+0x00000000u,c->r[0]); // 8044EFCC
L_8044EFD0:;
  c->r[28]=c->r[28]+0x00000001u; // 8044EFD0
  c->r[29]=c->r[29]+0x00000001u; // 8044EFD4
L_8044EFD8:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[25]); // 8044EFD8
  if (crb(c,0)) { IRQCHK(c); goto L_8044EF88; } // 8044EFDC
L_8044EFE0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044EFE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8044EFE4
  c->lr=c->r[0]; // 8044EFE8
  c->r[1]=c->r[1]+0x00000030u; // 8044EFEC
  return; // 8044EFF0
}

// fn_8044EFF4
void f_8044EFF4(Ctx* __restrict c) {
  trace_call(0x8044EFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044EFF4
  c->r[0]=c->lr; // 8044EFF8
  c->r[3]=0u+0x806A0000u; // 8044EFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044F000
  c->r[3]=c->r[3]+0x00007E90u; // 8044F004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044F008
  c->r[31]=0u+0x807E0000u; // 8044F00C
  c->r[31]=c->r[31]+0x00001CB0u; // 8044F010
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044F014
  W32(c->r[31]+0x00000004u,c->r[3]); // 8044F018
  cmps(c,0,(int32_t)c->r[0],0); // 8044F01C
  if (!crb(c,2)) { goto L_8044F088; } // 8044F020
  c->r[3]=c->r[31]+0x00000008u; // 8044F024
  c->r[4]=0u+0x00000000u; // 8044F028
  c->r[5]=0u+0x00000340u; // 8044F02C
  c->lr=0x8044F034u; f_800043EC(c); // 8044F030
  c->r[3]=c->r[31]+0x00000348u; // 8044F034
  c->r[4]=0u+0x00000000u; // 8044F038
  c->r[5]=0u+0x00000400u; // 8044F03C
  c->lr=0x8044F044u; f_800043EC(c); // 8044F040
  c->r[3]=c->r[31]+0x00000748u; // 8044F044
  c->r[4]=0u+0x000000FFu; // 8044F048
  c->r[5]=0u+0x00000100u; // 8044F04C
  c->lr=0x8044F054u; f_800043EC(c); // 8044F050
  c->r[3]=c->r[31]+0x00000848u; // 8044F054
  c->r[4]=0u+0x00000000u; // 8044F058
  c->r[5]=0u+0x00000020u; // 8044F05C
  c->lr=0x8044F064u; f_800043EC(c); // 8044F060
  c->r[4]=0u+0x00000000u; // 8044F064
  c->r[3]=0u+0xFFFFFFFFu; // 8044F068
  c->r[0]=0u+0x00000001u; // 8044F06C
  W32(c->r[31]+0x00000868u,c->r[4]); // 8044F070
  W32(c->r[31]+0x0000086Cu,c->r[4]); // 8044F074
  W32(c->r[31]+0x00000870u,c->r[4]); // 8044F078
  W32(c->r[31]+0x00000874u,c->r[4]); // 8044F07C
  W32(c->r[31]+0x00000878u,c->r[3]); // 8044F080
  W32(c->r[31]+0x0000087Cu,c->r[0]); // 8044F084
L_8044F088:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8044F088
  c->r[0]=c->r[3]+0x00000001u; // 8044F08C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044F090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044F094
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044F098
  c->lr=c->r[0]; // 8044F09C
  c->r[1]=c->r[1]+0x00000010u; // 8044F0A0
  return; // 8044F0A4
}

// fn_8044F0A8
void f_8044F0A8(Ctx* __restrict c) {
  trace_call(0x8044F0A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F0A8
  c->r[0]=c->lr; // 8044F0AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044F0B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044F0B4
  c->r[31]=0u+0x807E0000u; // 8044F0B8
  c->r[31]=c->r[31]+0x00001CB0u; // 8044F0BC
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044F0C0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8044F0C4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044F0C8
  if (!crb(c,2)) { goto L_8044F138; } // 8044F0CC
  c->lr=0x8044F0D4u; f_8044F14C(c); // 8044F0D0
  c->r[0]=0u+0x00000000u; // 8044F0D4
  c->r[3]=0u+0x00000001u; // 8044F0D8
  c->r[5]=0u+0xFFFFFFFFu; // 8044F0DC
  W32(c->r[31]+0x0000087Cu,c->r[3]); // 8044F0E0
  c->r[3]=c->r[31]+0x00000848u; // 8044F0E4
  c->r[4]=0u+0x00000000u; // 8044F0E8
  W32(c->r[31]+0x00000878u,c->r[5]); // 8044F0EC
  c->r[5]=0u+0x00000020u; // 8044F0F0
  W32(c->r[31]+0x00000874u,c->r[0]); // 8044F0F4
  W32(c->r[31]+0x00000870u,c->r[0]); // 8044F0F8
  W32(c->r[31]+0x0000086Cu,c->r[0]); // 8044F0FC
  W32(c->r[31]+0x00000868u,c->r[0]); // 8044F100
  c->lr=0x8044F108u; f_800043EC(c); // 8044F104
  c->r[3]=c->r[31]+0x00000748u; // 8044F108
  c->r[4]=0u+0x000000FFu; // 8044F10C
  c->r[5]=0u+0x00000100u; // 8044F110
  c->lr=0x8044F118u; f_800043EC(c); // 8044F114
  c->r[3]=c->r[31]+0x00000348u; // 8044F118
  c->r[4]=0u+0x00000000u; // 8044F11C
  c->r[5]=0u+0x00000400u; // 8044F120
  c->lr=0x8044F128u; f_800043EC(c); // 8044F124
  c->r[3]=c->r[31]+0x00000008u; // 8044F128
  c->r[4]=0u+0x00000000u; // 8044F12C
  c->r[5]=0u+0x00000340u; // 8044F130
  c->lr=0x8044F138u; f_800043EC(c); // 8044F134
L_8044F138:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044F138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044F13C
  c->lr=c->r[0]; // 8044F140
  c->r[1]=c->r[1]+0x00000010u; // 8044F144
  return; // 8044F148
}

// fn_8044F14C
void f_8044F14C(Ctx* __restrict c) {
  trace_call(0x8044F14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F14C
  c->r[0]=c->lr; // 8044F150
  W32(c->r[1]+0x00000044u,c->r[0]); // 8044F154
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044F158
  c->lr=0x8044F160u; f_80458F30(c); // 8044F15C
  c->r[31]=0u+0x807E0000u; // 8044F160
  c->r[22]=0u+0x807E0000u; // 8044F164
  c->r[25]=0u+0x807E0000u; // 8044F168
  c->r[27]=0u+0x807E0000u; // 8044F16C
  c->r[29]=0u+0x806A0000u; // 8044F170
  c->r[3]=R32(c->r[31]+0x00002518u); // 8044F174
  c->r[27]=c->r[27]+0x00001CB8u; // 8044F178
  c->r[22]=c->r[22]+0x000023F8u; // 8044F17C
  c->r[29]=c->r[29]+0x00007EE8u; // 8044F180
  c->r[25]=c->r[25]+0x000024F8u; // 8044F184
  c->r[28]=0u+0x00000000u; // 8044F188
  c->r[30]=0u+0x00000000u; // 8044F18C
  c->r[23]=0u+0x00000003u; // 8044F190
  c->r[24]=0u+0x00000001u; // 8044F194
  c->r[26]=0u+0xFFFFFFFFu; // 8044F198
L_8044F19C:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 8044F19C
  cmps(c,0,(int32_t)c->r[0],1); // 8044F1A0
  if (!crb(c,2)) { goto L_8044F2C8; } // 8044F1A4
  c->r[0]=rotl(c->r[3],28)&0xF0000000u; // 8044F1A8
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8044F1AC
  c->r[0]=c->r[0]-c->r[4]; // 8044F1B0
  c->r[3]=R16(c->r[25]+0x00000006u); // 8044F1B4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFFFu; // 8044F1B8
  cmps(c,0,(int32_t)c->r[27],0); // 8044F1BC
  c->r[4]=c->r[0]+c->r[4]; // 8044F1C0
  c->r[0]=c->r[3]+0x00000001u; // 8044F1C4
  c->r[3]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8044F1C8
  W16(c->r[25]+0x00000006u,c->r[0]); // 8044F1CC
  c->r[5]=c->r[22]+c->r[3]; // 8044F1D0
  W8(c->r[5]+0x00000000u,c->r[23]); // 8044F1D4
  c->r[3]=c->r[4]+0x00000001u; // 8044F1D8
  W8(c->r[5]+0x00000001u,c->r[30]); // 8044F1DC
  W16(c->r[5]+0x00000002u,c->r[0]); // 8044F1E0
  W32(c->r[5]+0x00000004u,c->r[27]); // 8044F1E4
  W32(c->r[5]+0x00000008u,c->r[26]); // 8044F1E8
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 8044F1EC
  W32(c->r[31]+0x00002518u,c->r[3]); // 8044F1F0
  if (crb(c,2)) { goto L_8044F2C8; } // 8044F1F4
L_8044F1F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 8044F1F8
  if (!crb(c,2)) { goto L_8044F210; } // 8044F1FC
  c->r[3]=c->r[29]+0x0000009Du; // 8044F200
  c->lr=0x8044F208u; f_80459D44(c); // 8044F204
  c->r[3]=0u+0x00000000u; // 8044F208
  goto L_8044F218; // 8044F20C
L_8044F210:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 8044F210
  c->lr=0x8044F218u; f_804518B4(c); // 8044F214
L_8044F218:;
  cmps(c,0,(int32_t)c->r[3],1); // 8044F218
  if (crb(c,2)) { goto L_8044F238; } // 8044F21C
  c->r[3]=R32(c->r[27]+0x00000004u); // 8044F220
  c->lr=0x8044F228u; f_804518E0(c); // 8044F224
  cmps(c,0,(int32_t)c->r[3],0); // 8044F228
  if (crb(c,2)) { goto L_8044F238; } // 8044F22C
  c->lr=0x8044F234u; f_8044FA4C(c); // 8044F230
  IRQCHK(c); goto L_8044F1F8; // 8044F234
L_8044F238:;
  c->r[0]=R8(c->r[27]+0x00000001u); // 8044F238
  cmps(c,0,(int32_t)c->r[0],2); // 8044F23C
  if (!crb(c,2)) { goto L_8044F24C; } // 8044F240
  c->r[3]=c->r[27]|c->r[27]; // 8044F244
  c->lr=0x8044F24Cu; f_8044F2F0(c); // 8044F248
L_8044F24C:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 8044F24C
  cmps(c,0,(int32_t)c->r[0],0); // 8044F250
  if (crb(c,2)) { goto L_8044F274; } // 8044F254
  W8(c->r[27]+0x00000000u,c->r[30]); // 8044F258
  c->r[21]=R32(c->r[27]+0x00000004u); // 8044F25C
  W32(c->r[27]+0x00000004u,c->r[30]); // 8044F260
  c->r[3]=c->r[21]|c->r[21]; // 8044F264
  c->lr=0x8044F26Cu; f_804517E4(c); // 8044F268
  c->r[3]=c->r[21]|c->r[21]; // 8044F26C
  c->lr=0x8044F274u; f_804515A4(c); // 8044F270
L_8044F274:;
  c->r[3]=c->r[27]|c->r[27]; // 8044F274
  c->r[4]=0u+0x00000000u; // 8044F278
  c->r[5]=0u+0x00000034u; // 8044F27C
  c->lr=0x8044F284u; f_800043EC(c); // 8044F280
  c->r[4]=R32(c->r[31]+0x00002518u); // 8044F284
  c->r[0]=R16(c->r[25]+0x00000006u); // 8044F288
  c->r[3]=rotl(c->r[4],28)&0xF0000000u; // 8044F28C
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 8044F290
  c->r[3]=c->r[3]-c->r[4]; // 8044F294
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFFFu; // 8044F298
  c->r[4]=c->r[3]+c->r[4]; // 8044F29C
  c->r[3]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8044F2A0
  c->r[5]=c->r[22]+c->r[3]; // 8044F2A4
  W8(c->r[5]+0x00000000u,c->r[23]); // 8044F2A8
  c->r[3]=c->r[4]+0x00000001u; // 8044F2AC
  W8(c->r[5]+0x00000001u,c->r[24]); // 8044F2B0
  W16(c->r[5]+0x00000002u,c->r[0]); // 8044F2B4
  W32(c->r[5]+0x00000004u,c->r[27]); // 8044F2B8
  W32(c->r[5]+0x00000008u,c->r[26]); // 8044F2BC
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 8044F2C0
  W32(c->r[31]+0x00002518u,c->r[3]); // 8044F2C4
L_8044F2C8:;
  c->r[28]=c->r[28]+0x00000001u; // 8044F2C8
  c->r[27]=c->r[27]+0x00000034u; // 8044F2CC
  cmps(c,0,(int32_t)c->r[28],16); // 8044F2D0
  if (crb(c,0)) { IRQCHK(c); goto L_8044F19C; } // 8044F2D4
  c->lr=0x8044F2DCu; f_80458F34(c); // 8044F2D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044F2DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8044F2E0
  c->lr=c->r[0]; // 8044F2E4
  c->r[1]=c->r[1]+0x00000040u; // 8044F2E8
  return; // 8044F2EC
}

// fn_8044F2F0
void f_8044F2F0(Ctx* __restrict c) {
  trace_call(0x8044F2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F2F0
  c->r[0]=c->lr; // 8044F2F4
  c->r[8]=0u+0x807E0000u; // 8044F2F8
  c->r[7]=0u+0x807E0000u; // 8044F2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044F300
  c->r[10]=0u+0x807E0000u; // 8044F304
  c->r[7]=c->r[7]+0x000024F8u; // 8044F308
  c->r[8]=c->r[8]+0x000023F8u; // 8044F30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044F310
  cmps(c,0,(int32_t)c->r[3],0); // 8044F314
  c->r[31]=c->r[3]|c->r[3]; // 8044F318
  W32(c->r[1]+0x00000008u,c->r[30]); // 8044F31C
  c->r[4]=R32(c->r[10]+0x00002518u); // 8044F320
  c->r[5]=R16(c->r[7]+0x0000000Au); // 8044F324
  c->r[0]=rotl(c->r[4],28)&0xF0000000u; // 8044F328
  c->r[6]=rotl(c->r[4],1)&0x00000001u; // 8044F32C
  c->r[0]=c->r[0]-c->r[6]; // 8044F330
  c->r[4]=0u+0x00000005u; // 8044F334
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFFFu; // 8044F338
  c->r[9]=c->r[0]+c->r[6]; // 8044F33C
  c->r[6]=c->r[5]+0x00000001u; // 8044F340
  c->r[0]=rotl(c->r[9],4)&0xFFFFFFF0u; // 8044F344
  c->r[5]=0u+0x00000000u; // 8044F348
  c->r[8]=c->r[8]+c->r[0]; // 8044F34C
  W16(c->r[7]+0x0000000Au,c->r[6]); // 8044F350
  c->r[0]=c->r[9]+0x00000001u; // 8044F354
  W8(c->r[8]+0x00000000u,c->r[4]); // 8044F358
  c->r[4]=0u+0xFFFFFFFFu; // 8044F35C
  W8(c->r[8]+0x00000001u,c->r[5]); // 8044F360
  W16(c->r[8]+0x00000002u,c->r[6]); // 8044F364
  W32(c->r[8]+0x00000004u,c->r[3]); // 8044F368
  W32(c->r[8]+0x00000008u,c->r[4]); // 8044F36C
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 8044F370
  W32(c->r[10]+0x00002518u,c->r[0]); // 8044F374
  if (!crb(c,2)) { goto L_8044F394; } // 8044F378
  c->r[3]=0u+0x806A0000u; // 8044F37C
  c->r[3]=c->r[3]+0x00007EE8u; // 8044F380
  c->r[3]=c->r[3]+0x00000536u; // 8044F384
  c->lr=0x8044F38Cu; f_80459D44(c); // 8044F388
  c->r[3]=0u+0xFFFFFFFDu; // 8044F38C
  goto L_8044F4C4; // 8044F390
L_8044F394:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8044F394
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8044F398
  cmps(c,0,(int32_t)c->r[0],1); // 8044F39C
  if (!crb(c,2)) { goto L_8044F3AC; } // 8044F3A0
  c->r[3]=R32(c->r[3]+0x00000010u); // 8044F3A4
  goto L_8044F4C4; // 8044F3A8
L_8044F3AC:;
  cmps(c,0,(int32_t)c->r[0],3); // 8044F3AC
  if (!crb(c,2)) { goto L_8044F3C4; } // 8044F3B0
  c->r[0]=0u+0x00000001u; // 8044F3B4
  W8(c->r[3]+0x00000001u,c->r[0]); // 8044F3B8
  c->r[3]=R32(c->r[3]+0x00000010u); // 8044F3BC
  goto L_8044F4C4; // 8044F3C0
L_8044F3C4:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044F3C4
  cmps(c,0,(int32_t)c->r[3],0); // 8044F3C8
  if (!crb(c,2)) { goto L_8044F3E8; } // 8044F3CC
  c->r[3]=0u+0x806A0000u; // 8044F3D0
  c->r[3]=c->r[3]+0x00007EE8u; // 8044F3D4
  c->r[3]=c->r[3]+0x0000055Au; // 8044F3D8
  c->lr=0x8044F3E0u; f_80459D44(c); // 8044F3DC
  c->r[3]=0u+0xFFFFFFFFu; // 8044F3E0
  goto L_8044F4C4; // 8044F3E4
L_8044F3E8:;
  c->lr=0x8044F3ECu; f_80451AEC(c); // 8044F3E8
  c->lr=0x8044F3F0u; f_80458F28(c); // 8044F3EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044F3F0
  c->lr=0x8044F3F8u; f_8045199C(c); // 8044F3F4
  c->r[4]=R32(c->r[31]+0x00000010u); // 8044F3F8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8044F3FC
  c->r[3]=c->r[3]-c->r[4]; // 8044F400
  cmps(c,0,(int32_t)c->r[0],0); // 8044F404
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 8044F408
  if (crb(c,2)) { goto L_8044F454; } // 8044F40C
  c->r[0]=R8(c->r[31]+0x00000002u); // 8044F410
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044F414
  if (!crb(c,2)) { goto L_8044F454; } // 8044F418
  c->r[3]=0u+0x807E0000u; // 8044F41C
  c->r[0]=R32(c->r[3]+0x0000251Cu); // 8044F420
  cmps(c,0,(int32_t)c->r[0],1); // 8044F424
  if (!crb(c,2)) { goto L_8044F438; } // 8044F428
  c->r[3]=R32(c->r[31]+0x00000020u); // 8044F42C
  c->r[4]=R32(c->r[31]+0x00000024u); // 8044F430
  c->lr=0x8044F438u; f_8044FA48(c); // 8044F434
L_8044F438:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8044F438
  c->r[0]=0u+0x00000000u; // 8044F43C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8044F440
  c->r[4]=R32(c->r[3]+0x00000000u); // 8044F444
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8044F448
  c->ctr=c->r[12]; // 8044F44C
  if (true) { c->lr=0x8044F454u; dispatch(c,c->ctr); } // 8044F450
L_8044F454:;
  c->r[30]=0u+0x00000001u; // 8044F454
  W8(c->r[31]+0x00000001u,c->r[30]); // 8044F458
  c->lr=0x8044F460u; f_80458F2C(c); // 8044F45C
  c->r[8]=0u+0x807E0000u; // 8044F460
  c->r[6]=0u+0x807E0000u; // 8044F464
  c->r[4]=R32(c->r[8]+0x00002518u); // 8044F468
  c->r[3]=0u+0x807E0000u; // 8044F46C
  c->r[6]=c->r[6]+0x000023F8u; // 8044F470
  c->r[5]=0u+0x00000005u; // 8044F474
  c->r[0]=rotl(c->r[4],28)&0xF0000000u; // 8044F478
  c->r[7]=rotl(c->r[4],1)&0x00000001u; // 8044F47C
  c->r[0]=c->r[0]-c->r[7]; // 8044F480
  c->r[3]=c->r[3]+0x000024F8u; // 8044F484
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFFFu; // 8044F488
  c->r[4]=R16(c->r[3]+0x0000000Au); // 8044F48C
  c->r[7]=c->r[0]+c->r[7]; // 8044F490
  c->r[3]=0u+0xFFFFFFFFu; // 8044F494
  c->r[0]=rotl(c->r[7],4)&0xFFFFFFF0u; // 8044F498
  c->r[6]=c->r[6]+c->r[0]; // 8044F49C
  W8(c->r[6]+0x00000000u,c->r[5]); // 8044F4A0
  c->r[0]=c->r[7]+0x00000001u; // 8044F4A4
  W8(c->r[6]+0x00000001u,c->r[30]); // 8044F4A8
  W16(c->r[6]+0x00000002u,c->r[4]); // 8044F4AC
  W32(c->r[6]+0x00000004u,c->r[31]); // 8044F4B0
  W32(c->r[6]+0x00000008u,c->r[3]); // 8044F4B4
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 8044F4B8
  W32(c->r[8]+0x00002518u,c->r[0]); // 8044F4BC
  c->r[3]=R32(c->r[31]+0x00000010u); // 8044F4C0
L_8044F4C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044F4C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044F4C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044F4CC
  c->lr=c->r[0]; // 8044F4D0
  c->r[1]=c->r[1]+0x00000010u; // 8044F4D4
  return; // 8044F4D8
}

// fn_8044F4DC
void f_8044F4DC(Ctx* __restrict c) {
  trace_call(0x8044F4DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F4DC
  c->r[0]=c->lr; // 8044F4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044F4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044F4E8
  c->r[31]=c->r[3]|c->r[3]; // 8044F4EC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8044F4F0
  c->lr=0x8044F4F8u; f_80451908(c); // 8044F4F4
  cmps(c,0,(int32_t)c->r[3],4); // 8044F4F8
  if (!crb(c,2)) { goto L_8044F50C; } // 8044F4FC
  c->r[0]=0u+0x00000004u; // 8044F500
  W8(c->r[31]+0x00000001u,c->r[0]); // 8044F504
  goto L_8044F634; // 8044F508
L_8044F50C:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 8044F50C
  cmps(c,0,(int32_t)c->r[0],2); // 8044F510
  if (!crb(c,2)) { goto L_8044F5A4; } // 8044F514
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044F518
  c->lr=0x8044F520u; f_80451908(c); // 8044F51C
  W8(c->r[31]+0x00000001u,c->r[3]); // 8044F520
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044F524
  c->lr=0x8044F52Cu; f_8045199C(c); // 8044F528
  c->r[5]=R8(c->r[31]+0x00000001u); // 8044F52C
  c->r[4]=R32(c->r[31]+0x00000010u); // 8044F530
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 8044F534
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8044F538
  c->r[3]=c->r[3]-c->r[4]; // 8044F53C
  cmpu(c,0,c->r[0],0x00000001u); // 8044F540
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 8044F544
  if (crb(c,1)) { goto L_8044F5A4; } // 8044F548
  c->r[0]=R32(c->r[31]+0x00000008u); // 8044F54C
  c->r[3]=c->r[4]+c->r[3]; // 8044F550
  W32(c->r[31]+0x00000010u,c->r[3]); // 8044F554
  cmps(c,0,(int32_t)c->r[0],0); // 8044F558
  if (crb(c,2)) { goto L_8044F5A4; } // 8044F55C
  c->r[0]=R8(c->r[31]+0x00000002u); // 8044F560
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044F564
  if (!crb(c,2)) { goto L_8044F5A4; } // 8044F568
  c->r[3]=0u+0x807E0000u; // 8044F56C
  c->r[0]=R32(c->r[3]+0x0000251Cu); // 8044F570
  cmps(c,0,(int32_t)c->r[0],1); // 8044F574
  if (!crb(c,2)) { goto L_8044F588; } // 8044F578
  c->r[3]=R32(c->r[31]+0x00000020u); // 8044F57C
  c->r[4]=R32(c->r[31]+0x00000024u); // 8044F580
  c->lr=0x8044F588u; f_8044FA48(c); // 8044F584
L_8044F588:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8044F588
  c->r[0]=0u+0x00000000u; // 8044F58C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8044F590
  c->r[4]=R32(c->r[3]+0x00000000u); // 8044F594
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8044F598
  c->ctr=c->r[12]; // 8044F59C
  if (true) { c->lr=0x8044F5A4u; dispatch(c,c->ctr); } // 8044F5A0
L_8044F5A4:;
  c->r[0]=R8(c->r[31]+0x00000003u); // 8044F5A4
  cmps(c,0,(int32_t)c->r[0],1); // 8044F5A8
  if (!crb(c,2)) { goto L_8044F634; } // 8044F5AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044F5B0
  c->lr=0x8044F5B8u; f_80451908(c); // 8044F5B4
  cmps(c,0,(int32_t)c->r[3],1); // 8044F5B8
  if (!crb(c,2)) { goto L_8044F634; } // 8044F5BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044F5C0
  c->lr=0x8044F5C8u; f_8045199C(c); // 8044F5C4
  c->r[4]=R32(c->r[31]+0x00000010u); // 8044F5C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8044F5CC
  c->r[3]=c->r[3]-c->r[4]; // 8044F5D0
  cmps(c,0,(int32_t)c->r[0],0); // 8044F5D4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 8044F5D8
  if (crb(c,2)) { goto L_8044F624; } // 8044F5DC
  c->r[0]=R8(c->r[31]+0x00000002u); // 8044F5E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044F5E4
  if (!crb(c,2)) { goto L_8044F624; } // 8044F5E8
  c->r[3]=0u+0x807E0000u; // 8044F5EC
  c->r[0]=R32(c->r[3]+0x0000251Cu); // 8044F5F0
  cmps(c,0,(int32_t)c->r[0],1); // 8044F5F4
  if (!crb(c,2)) { goto L_8044F608; } // 8044F5F8
  c->r[3]=R32(c->r[31]+0x00000020u); // 8044F5FC
  c->r[4]=R32(c->r[31]+0x00000024u); // 8044F600
  c->lr=0x8044F608u; f_8044FA48(c); // 8044F604
L_8044F608:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8044F608
  c->r[0]=0u+0x00000000u; // 8044F60C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8044F610
  c->r[4]=R32(c->r[3]+0x00000000u); // 8044F614
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8044F618
  c->ctr=c->r[12]; // 8044F61C
  if (true) { c->lr=0x8044F624u; dispatch(c,c->ctr); } // 8044F620
L_8044F624:;
  c->r[3]=0u+0x00000001u; // 8044F624
  c->r[0]=0u+0x00000000u; // 8044F628
  W8(c->r[31]+0x00000001u,c->r[3]); // 8044F62C
  W8(c->r[31]+0x00000003u,c->r[0]); // 8044F630
L_8044F634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044F634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044F638
  c->lr=c->r[0]; // 8044F63C
  c->r[1]=c->r[1]+0x00000010u; // 8044F640
  return; // 8044F644
}

// fn_8044F648
void f_8044F648(Ctx* __restrict c) {
  trace_call(0x8044F648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F648
  c->r[0]=c->lr; // 8044F64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044F650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044F654
  W32(c->r[1]+0x00000008u,c->r[30]); // 8044F658
  c->lr=0x8044F660u; f_80458F30(c); // 8044F65C
  c->lr=0x8044F664u; f_80458F28(c); // 8044F660
  c->r[30]=0u+0x807E0000u; // 8044F664
  c->r[31]=0u+0x00000000u; // 8044F668
  c->r[30]=c->r[30]+0x00001CB8u; // 8044F66C
L_8044F670:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8044F670
  cmps(c,0,(int32_t)c->r[0],1); // 8044F674
  if (!crb(c,2)) { goto L_8044F684; } // 8044F678
  c->r[3]=c->r[30]|c->r[30]; // 8044F67C
  c->lr=0x8044F684u; f_8044F4DC(c); // 8044F680
L_8044F684:;
  c->r[31]=c->r[31]+0x00000001u; // 8044F684
  c->r[30]=c->r[30]+0x00000034u; // 8044F688
  cmps(c,0,(int32_t)c->r[31],16); // 8044F68C
  if (crb(c,0)) { IRQCHK(c); goto L_8044F670; } // 8044F690
  c->lr=0x8044F698u; f_80458F2C(c); // 8044F694
  c->lr=0x8044F69Cu; f_80458F34(c); // 8044F698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044F69C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044F6A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044F6A4
  c->lr=c->r[0]; // 8044F6A8
  c->r[1]=c->r[1]+0x00000010u; // 8044F6AC
  return; // 8044F6B0
}

// fn_8044F6B4
void f_8044F6B4(Ctx* __restrict c) {
  trace_call(0x8044F6B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F6B4
  c->r[0]=c->lr; // 8044F6B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044F6BC
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044F6C0
  c->r[26]=c->r[3]|c->r[3]; // 8044F6C4
  c->r[27]=c->r[4]|c->r[4]; // 8044F6C8
  c->r[28]=c->r[5]|c->r[5]; // 8044F6CC
  c->r[29]=c->r[6]|c->r[6]; // 8044F6D0
  c->r[30]=c->r[7]|c->r[7]; // 8044F6D4
  c->r[31]=c->r[8]|c->r[8]; // 8044F6D8
  c->lr=0x8044F6E0u; f_80458F30(c); // 8044F6DC
  c->r[3]=c->r[26]|c->r[26]; // 8044F6E0
  c->r[4]=c->r[27]|c->r[27]; // 8044F6E4
  c->r[5]=c->r[28]|c->r[28]; // 8044F6E8
  c->r[6]=c->r[29]|c->r[29]; // 8044F6EC
  c->r[7]=c->r[30]|c->r[30]; // 8044F6F0
  c->r[8]=c->r[31]|c->r[31]; // 8044F6F4
  c->r[9]=c->r[1]+0x00000008u; // 8044F6F8
  c->lr=0x8044F700u; f_8044F720(c); // 8044F6FC
  c->r[31]=c->r[3]|c->r[3]; // 8044F700
  c->lr=0x8044F708u; f_80458F34(c); // 8044F704
  c->r[3]=c->r[31]|c->r[31]; // 8044F708
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044F70C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8044F710
  c->lr=c->r[0]; // 8044F714
  c->r[1]=c->r[1]+0x00000030u; // 8044F718
  return; // 8044F71C
}

// fn_8044F720
void f_8044F720(Ctx* __restrict c) {
  trace_call(0x8044F720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044F720
  c->r[0]=c->lr; // 8044F724
  cmps(c,0,(int32_t)c->r[3],0); // 8044F728
  W32(c->r[1]+0x00000034u,c->r[0]); // 8044F72C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044F730
  c->r[29]=c->r[3]|c->r[3]; // 8044F734
  c->r[23]=c->r[4]|c->r[4]; // 8044F738
  c->r[24]=c->r[5]|c->r[5]; // 8044F73C
  c->r[25]=c->r[6]|c->r[6]; // 8044F740
  c->r[26]=c->r[7]|c->r[7]; // 8044F744
  c->r[27]=c->r[8]|c->r[8]; // 8044F748
  c->r[28]=c->r[9]|c->r[9]; // 8044F74C
  if (crb(c,0)) { goto L_8044F75C; } // 8044F750
  cmps(c,0,(int32_t)c->r[3],256); // 8044F754
  if (crb(c,0)) { goto L_8044F774; } // 8044F758
L_8044F75C:;
  c->r[3]=0u+0x806A0000u; // 8044F75C
  c->r[3]=c->r[3]+0x00007EE8u; // 8044F760
  c->r[3]=c->r[3]+0x000006FCu; // 8044F764
  c->lr=0x8044F76Cu; f_80459D44(c); // 8044F768
  c->r[31]=0u+0xFFFFFFFDu; // 8044F76C
  goto L_8044F7D4; // 8044F770
L_8044F774:;
  c->r[5]=0u+0x807E0000u; // 8044F774
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8044F778
  c->r[5]=c->r[5]+0x00001FF8u; // 8044F77C
  c->r[3]=R32(c->r[5]+c->r[0]); // 8044F780
  cmps(c,0,(int32_t)c->r[3],0); // 8044F784
  if (!crb(c,2)) { goto L_8044F7A4; } // 8044F788
  c->r[3]=0u+0x806A0000u; // 8044F78C
  c->r[3]=c->r[3]+0x00007EE8u; // 8044F790
  c->r[3]=c->r[3]+0x000006FCu; // 8044F794
  c->lr=0x8044F79Cu; f_80459D44(c); // 8044F798
  c->r[31]=0u+0xFFFFFFFDu; // 8044F79C
  goto L_8044F7D4; // 8044F7A0
L_8044F7A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 8044F7A4
  if (crb(c,0)) { goto L_8044F7B8; } // 8044F7A8
  c->r[0]=R32(c->r[3]+0x00000008u); // 8044F7AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8044F7B0
  if (crb(c,0)) { goto L_8044F7D0; } // 8044F7B4
L_8044F7B8:;
  c->r[3]=0u+0x806A0000u; // 8044F7B8
  c->r[3]=c->r[3]+0x00007EE8u; // 8044F7BC
  c->r[3]=c->r[3]+0x0000071Eu; // 8044F7C0
  c->lr=0x8044F7C8u; f_80459D44(c); // 8044F7C4
  c->r[31]=0u+0xFFFFFFFDu; // 8044F7C8
  goto L_8044F7D4; // 8044F7CC
L_8044F7D0:;
  c->r[31]=0u+0x00000000u; // 8044F7D0
L_8044F7D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8044F7D4
  if (!crb(c,0)) { goto L_8044F80C; } // 8044F7D8
  cmps(c,0,(int32_t)c->r[24],0); // 8044F7DC
  if (crb(c,2)) { goto L_8044F7EC; } // 8044F7E0
  c->r[0]=0u+0x00000000u; // 8044F7E4
  W8(c->r[24]+0x00000000u,c->r[0]); // 8044F7E8
L_8044F7EC:;
  c->r[3]=0u+0x00000000u; // 8044F7EC
  c->r[0]=0u+0xFFFFFFFFu; // 8044F7F0
  W32(c->r[25]+0x00000000u,c->r[3]); // 8044F7F4
  c->r[3]=c->r[31]|c->r[31]; // 8044F7F8
  W32(c->r[26]+0x00000000u,c->r[0]); // 8044F7FC
  W32(c->r[27]+0x00000000u,c->r[0]); // 8044F800
  W32(c->r[28]+0x00000000u,c->r[0]); // 8044F804
  goto L_8044F9EC; // 8044F808
L_8044F80C:;
  c->r[3]=0u+0x807E0000u; // 8044F80C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8044F810
  c->r[3]=c->r[3]+0x00001FF8u; // 8044F814
  c->r[30]=R32(c->r[3]+c->r[0]); // 8044F818
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 8044F81C
  cmps(c,0,(int32_t)c->r[0],1); // 8044F820
  if (!crb(c,2)) { goto L_8044F8D4; } // 8044F824
  c->r[4]=R32(c->r[30]+0x00000118u); // 8044F828
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 8044F82C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 8044F830
  c->r[0]=c->r[0]-c->r[3]; // 8044F834
  c->r[4]=sraw(c,c->r[4],11); // 8044F838
  c->r[0]=rotl(c->r[0],11)&0xFFFFFFFFu; // 8044F83C
  c->r[0]=c->r[0]+c->r[3]; cr0(c,c->r[0]); // 8044F840
  c->r[29]=addc(c,c->r[4],0,c->xer_ca); // 8044F844
  if (!crb(c,1)) { goto L_8044F850; } // 8044F848
  c->r[29]=c->r[29]+0x00000001u; // 8044F84C
L_8044F850:;
  c->r[3]=c->r[30]+0x0000011Cu; // 8044F850
  c->r[6]=c->r[3]|c->r[3]; // 8044F854
  c->ctr=c->r[23]; // 8044F858
  cmps(c,0,(int32_t)c->r[23],0); // 8044F85C
  if (!crb(c,1)) { goto L_8044F898; } // 8044F860
L_8044F864:;
  c->r[5]=R32(c->r[6]+0x00000000u); // 8044F864
  c->r[0]=rotl(c->r[5],21)&0xFFE00000u; // 8044F868
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 8044F86C
  c->r[0]=c->r[0]-c->r[4]; // 8044F870
  c->r[5]=sraw(c,c->r[5],11); // 8044F874
  c->r[0]=rotl(c->r[0],11)&0xFFFFFFFFu; // 8044F878
  c->r[0]=c->r[0]+c->r[4]; cr0(c,c->r[0]); // 8044F87C
  c->r[4]=addc(c,c->r[5],0,c->xer_ca); // 8044F880
  if (!crb(c,1)) { goto L_8044F88C; } // 8044F884
  c->r[4]=c->r[4]+0x00000001u; // 8044F888
L_8044F88C:;
  c->r[29]=c->r[29]+c->r[4]; // 8044F88C
  c->r[6]=c->r[6]+0x00000004u; // 8044F890
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044F864; } // 8044F894
L_8044F898:;
  c->r[6]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8044F898
  c->r[5]=R32(c->r[3]+c->r[6]); // 8044F89C
  c->r[0]=rotl(c->r[5],21)&0xFFE00000u; // 8044F8A0
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 8044F8A4
  c->r[0]=c->r[0]-c->r[4]; // 8044F8A8
  c->r[5]=sraw(c,c->r[5],11); // 8044F8AC
  c->r[0]=rotl(c->r[0],11)&0xFFFFFFFFu; // 8044F8B0
  c->r[0]=c->r[0]+c->r[4]; cr0(c,c->r[0]); // 8044F8B4
  c->r[4]=addc(c,c->r[5],0,c->xer_ca); // 8044F8B8
  if (!crb(c,1)) { goto L_8044F8C4; } // 8044F8BC
  c->r[4]=c->r[4]+0x00000001u; // 8044F8C0
L_8044F8C4:;
  W32(c->r[27]+0x00000000u,c->r[4]); // 8044F8C4
  c->r[0]=R32(c->r[3]+c->r[6]); // 8044F8C8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8044F8CC
  goto L_8044F9BC; // 8044F8D0
L_8044F8D4:;
  cmps(c,1,(int32_t)c->r[23],0); // 8044F8D4
  c->r[29]=R16(c->r[30]+0x00000118u); // 8044F8D8
  c->r[4]=c->r[30]+0x0000011Au; // 8044F8DC
  c->r[3]=0u+0x00000000u; // 8044F8E0
  if (!crb(c,5)) { goto L_8044F9A4; } // 8044F8E4
  cmps(c,0,(int32_t)c->r[23],8); // 8044F8E8
  c->r[6]=c->r[23]+0xFFFFFFF8u; // 8044F8EC
  if (!crb(c,1)) { goto L_8044F97C; } // 8044F8F0
  c->r[7]=0u+0x00000000u; // 8044F8F4
  if (crb(c,4)) { goto L_8044F910; } // 8044F8F8
  c->r[5]=0u+0x80000000u; // 8044F8FC
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 8044F900
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8044F904
  if (crb(c,1)) { goto L_8044F910; } // 8044F908
  c->r[7]=0u+0x00000001u; // 8044F90C
L_8044F910:;
  cmps(c,0,(int32_t)c->r[7],0); // 8044F910
  if (crb(c,2)) { goto L_8044F97C; } // 8044F914
  c->r[0]=c->r[6]+0x00000007u; // 8044F918
  c->r[7]=c->r[4]|c->r[4]; // 8044F91C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8044F920
  c->ctr=c->r[0]; // 8044F924
  cmps(c,0,(int32_t)c->r[6],0); // 8044F928
  if (!crb(c,1)) { goto L_8044F97C; } // 8044F92C
L_8044F930:;
  c->r[5]=R16(c->r[7]+0x00000000u); // 8044F930
  c->r[3]=c->r[3]+0x00000008u; // 8044F934
  c->r[0]=R16(c->r[7]+0x00000002u); // 8044F938
  c->r[29]=c->r[29]+c->r[5]; // 8044F93C
  c->r[5]=R16(c->r[7]+0x00000004u); // 8044F940
  c->r[29]=c->r[29]+c->r[0]; // 8044F944
  c->r[0]=R16(c->r[7]+0x00000006u); // 8044F948
  c->r[29]=c->r[29]+c->r[5]; // 8044F94C
  c->r[5]=R16(c->r[7]+0x00000008u); // 8044F950
  c->r[29]=c->r[29]+c->r[0]; // 8044F954
  c->r[0]=R16(c->r[7]+0x0000000Au); // 8044F958
  c->r[29]=c->r[29]+c->r[5]; // 8044F95C
  c->r[5]=R16(c->r[7]+0x0000000Cu); // 8044F960
  c->r[29]=c->r[29]+c->r[0]; // 8044F964
  c->r[0]=R16(c->r[7]+0x0000000Eu); // 8044F968
  c->r[29]=c->r[29]+c->r[5]; // 8044F96C
  c->r[7]=c->r[7]+0x00000010u; // 8044F970
  c->r[29]=c->r[29]+c->r[0]; // 8044F974
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044F930; } // 8044F978
L_8044F97C:;
  c->r[5]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8044F97C
  c->r[0]=c->r[23]-c->r[3]; // 8044F980
  c->r[5]=c->r[4]+c->r[5]; // 8044F984
  c->ctr=c->r[0]; // 8044F988
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 8044F98C
  if (!crb(c,0)) { goto L_8044F9A4; } // 8044F990
L_8044F994:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 8044F994
  c->r[5]=c->r[5]+0x00000002u; // 8044F998
  c->r[29]=c->r[29]+c->r[0]; // 8044F99C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044F994; } // 8044F9A0
L_8044F9A4:;
  c->r[3]=rotl(c->r[23],1)&0xFFFFFFFEu; // 8044F9A4
  c->r[0]=R16(c->r[4]+c->r[3]); // 8044F9A8
  W32(c->r[27]+0x00000000u,c->r[0]); // 8044F9AC
  c->r[0]=R16(c->r[4]+c->r[3]); // 8044F9B0
  c->r[0]=rotl(c->r[0],11)&0xFFFFF800u; // 8044F9B4
  W32(c->r[28]+0x00000000u,c->r[0]); // 8044F9B8
L_8044F9BC:;
  cmps(c,0,(int32_t)c->r[24],0); // 8044F9BC
  if (crb(c,2)) { goto L_8044F9D4; } // 8044F9C0
  c->r[3]=c->r[24]|c->r[24]; // 8044F9C4
  c->r[4]=c->r[30]+0x00000010u; // 8044F9C8
  c->r[5]=0u+0x00000100u; // 8044F9CC
  c->lr=0x8044F9D4u; f_803B3880(c); // 8044F9D0
L_8044F9D4:;
  c->r[0]=R32(c->r[30]+0x00000110u); // 8044F9D4
  c->r[3]=c->r[31]|c->r[31]; // 8044F9D8
  W32(c->r[25]+0x00000000u,c->r[0]); // 8044F9DC
  c->r[0]=R32(c->r[30]+0x00000114u); // 8044F9E0
  c->r[0]=c->r[0]+c->r[29]; // 8044F9E4
  W32(c->r[26]+0x00000000u,c->r[0]); // 8044F9E8
L_8044F9EC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8044F9EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8044F9F0
  c->lr=c->r[0]; // 8044F9F4
  c->r[1]=c->r[1]+0x00000030u; // 8044F9F8
  return; // 8044F9FC
}

// fn_8044FA00
void f_8044FA00(Ctx* __restrict c) {
  trace_call(0x8044FA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FA00
  c->r[0]=c->lr; // 8044FA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044FA0C
  c->r[31]=c->r[3]|c->r[3]; // 8044FA10
  c->lr=0x8044FA18u; f_80458F30(c); // 8044FA14
  c->r[3]=0u+0x807E0000u; // 8044FA18
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8044FA1C
  c->r[3]=c->r[3]+0x00001FF8u; // 8044FA20
  c->r[3]=R32(c->r[3]+c->r[0]); // 8044FA24
  c->r[31]=c->r[3]+0x00000010u; // 8044FA28
  c->lr=0x8044FA30u; f_80458F34(c); // 8044FA2C
  c->r[3]=c->r[31]|c->r[31]; // 8044FA30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044FA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FA38
  c->lr=c->r[0]; // 8044FA3C
  c->r[1]=c->r[1]+0x00000010u; // 8044FA40
  return; // 8044FA44
}

// fn_8044FA48
void f_8044FA48(Ctx* __restrict c) {
  trace_call(0x8044FA48u);
  f_803771E0(c); return; // 8044FA48
}

// fn_8044FA4C
void f_8044FA4C(Ctx* __restrict c) {
  trace_call(0x8044FA4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FA4C
  c->r[0]=c->lr; // 8044FA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FA54
  c->lr=0x8044FA5Cu; f_80458F30(c); // 8044FA58
  c->lr=0x8044FA60u; f_8044FA74(c); // 8044FA5C
  c->lr=0x8044FA64u; f_80458F34(c); // 8044FA60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FA64
  c->lr=c->r[0]; // 8044FA68
  c->r[1]=c->r[1]+0x00000010u; // 8044FA6C
  return; // 8044FA70
}

// fn_8044FA74
void f_8044FA74(Ctx* __restrict c) {
  trace_call(0x8044FA74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FA74
  c->r[0]=c->lr; // 8044FA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FA7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044FA80
  c->r[31]=0u+0x807E0000u; // 8044FA84
  c->r[31]=c->r[31]+0x00002530u; // 8044FA88
  c->lr=0x8044FA90u; f_80458F28(c); // 8044FA8C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8044FA90
  cmps(c,0,(int32_t)c->r[0],0); // 8044FA94
  if (crb(c,2)) { goto L_8044FAA4; } // 8044FA98
  c->lr=0x8044FAA0u; f_80458F2C(c); // 8044FA9C
  goto L_8044FB30; // 8044FAA0
L_8044FAA4:;
  c->r[0]=0u+0x00000001u; // 8044FAA4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FAA8
  c->lr=0x8044FAB0u; f_80458F2C(c); // 8044FAAC
  c->r[12]=R32(c->r[31]+0x00000008u); // 8044FAB0
  cmps(c,0,(int32_t)c->r[12],0); // 8044FAB4
  if (crb(c,2)) { goto L_8044FAC8; } // 8044FAB8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8044FABC
  c->ctr=c->r[12]; // 8044FAC0
  if (true) { c->lr=0x8044FAC8u; dispatch(c,c->ctr); } // 8044FAC4
L_8044FAC8:;
  c->r[0]=0u+0x00000003u; // 8044FAC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FACC
  c->lr=0x8044FAD4u; f_80452488(c); // 8044FAD0
  c->r[0]=0u+0x00000004u; // 8044FAD4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FAD8
  c->lr=0x8044FAE0u; f_80452404(c); // 8044FADC
  c->r[0]=0u+0x00000005u; // 8044FAE0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FAE4
  c->lr=0x8044FAECu; f_8044F648(c); // 8044FAE8
  c->r[0]=0u+0x00000006u; // 8044FAEC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FAF0
  c->lr=0x8044FAF8u; f_80452404(c); // 8044FAF4
  c->r[0]=0u+0x00000007u; // 8044FAF8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FAFC
  c->lr=0x8044FB04u; f_80452488(c); // 8044FB00
  c->r[0]=0u+0x00000009u; // 8044FB04
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FB08
  c->lr=0x8044FB10u; f_804524B0(c); // 8044FB0C
  c->r[12]=R32(c->r[31]+0x00000010u); // 8044FB10
  c->r[0]=0u+0x00000000u; // 8044FB14
  W32(c->r[31]+0x00000000u,c->r[0]); // 8044FB18
  cmps(c,0,(int32_t)c->r[12],0); // 8044FB1C
  if (crb(c,2)) { goto L_8044FB30; } // 8044FB20
  c->r[3]=R32(c->r[31]+0x00000014u); // 8044FB24
  c->ctr=c->r[12]; // 8044FB28
  if (true) { c->lr=0x8044FB30u; dispatch(c,c->ctr); } // 8044FB2C
L_8044FB30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FB30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044FB34
  c->lr=c->r[0]; // 8044FB38
  c->r[1]=c->r[1]+0x00000010u; // 8044FB3C
  return; // 8044FB40
}

// fn_8044FB44
void f_8044FB44(Ctx* __restrict c) {
  trace_call(0x8044FB44u);
  c->r[3]=c->r[4]|c->r[4]; // 8044FB44
  f_80459D44(c); return; // 8044FB48
}

// fn_8044FB4C
void f_8044FB4C(Ctx* __restrict c) {
  trace_call(0x8044FB4Cu);
  c->r[3]=c->r[4]|c->r[4]; // 8044FB4C
  f_80459D44(c); return; // 8044FB50
}

// fn_8044FB54
void f_8044FB54(Ctx* __restrict c) {
  trace_call(0x8044FB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FB54
  c->r[0]=c->lr; // 8044FB58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FB5C
  c->lr=0x8044FB64u; f_8044FDEC(c); // 8044FB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FB64
  c->r[3]=0u+0x00000000u; // 8044FB68
  c->lr=c->r[0]; // 8044FB6C
  c->r[1]=c->r[1]+0x00000010u; // 8044FB70
  return; // 8044FB74
}

// fn_8044FB78
void f_8044FB78(Ctx* __restrict c) {
  trace_call(0x8044FB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FB78
  c->r[0]=c->lr; // 8044FB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FB80
  c->lr=0x8044FB88u; f_80453B00(c); // 8044FB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FB88
  c->r[3]=0u+0x00000000u; // 8044FB8C
  c->lr=c->r[0]; // 8044FB90
  c->r[1]=c->r[1]+0x00000010u; // 8044FB94
  return; // 8044FB98
}

// fn_8044FB9C
void f_8044FB9C(Ctx* __restrict c) {
  trace_call(0x8044FB9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FB9C
  c->r[0]=c->lr; // 8044FBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FBA4
  c->lr=0x8044FBACu; f_8044FA4C(c); // 8044FBA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FBAC
  c->r[3]=0u+0x00000000u; // 8044FBB0
  c->lr=c->r[0]; // 8044FBB4
  c->r[1]=c->r[1]+0x00000010u; // 8044FBB8
  return; // 8044FBBC
}

// fn_8044FBC0
void f_8044FBC0(Ctx* __restrict c) {
  trace_call(0x8044FBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FBC0
  c->r[0]=c->lr; // 8044FBC4
  c->r[3]=0u+0x806B0000u; // 8044FBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FBCC
  c->r[3]=c->r[3]+0xFFFF8680u; // 8044FBD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044FBD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8044FBD8
  c->r[30]=0u+0x807E0000u; // 8044FBDC
  c->r[30]=c->r[30]+0x00002548u; // 8044FBE0
  c->r[0]=R32(c->r[30]+0x00000000u); // 8044FBE4
  W32(c->r[30]+0x00000018u,c->r[3]); // 8044FBE8
  cmps(c,0,(int32_t)c->r[0],0); // 8044FBEC
  if (!crb(c,2)) { goto L_8044FCC8; } // 8044FBF0
  c->lr=0x8044FBF8u; f_80458ED0(c); // 8044FBF4
  c->lr=0x8044FBFCu; f_80458F28(c); // 8044FBF8
  c->lr=0x8044FC00u; f_80460044(c); // 8044FBFC
  c->lr=0x8044FC04u; f_8045EDA8(c); // 8044FC00
  c->lr=0x8044FC08u; f_8045E004(c); // 8044FC04
  c->lr=0x8044FC0Cu; f_80459CB4(c); // 8044FC08
  c->lr=0x8044FC10u; f_804512D4(c); // 8044FC0C
  c->lr=0x8044FC14u; f_8044FE88(c); // 8044FC10
  c->lr=0x8044FC18u; f_8044EFF4(c); // 8044FC14
  c->lr=0x8044FC1Cu; f_8046490C(c); // 8044FC18
  c->lr=0x8044FC20u; f_8045C49C(c); // 8044FC1C
  c->lr=0x8044FC24u; f_804611E0(c); // 8044FC20
  c->r[3]=0u+0x80450000u; // 8044FC24
  c->r[4]=0u+0x00000000u; // 8044FC28
  c->r[3]=c->r[3]+0xFFFFFB44u; // 8044FC2C
  c->lr=0x8044FC34u; f_80464914(c); // 8044FC30
  c->r[3]=0u+0x80450000u; // 8044FC34
  c->r[4]=0u+0x00000000u; // 8044FC38
  c->r[3]=c->r[3]+0xFFFFFB4Cu; // 8044FC3C
  c->lr=0x8044FC44u; f_8045C3A8(c); // 8044FC40
  c->r[3]=c->r[30]+0x00000020u; // 8044FC44
  c->r[4]=0u+0x00000000u; // 8044FC48
  c->r[5]=0u+0x00000C40u; // 8044FC4C
  c->lr=0x8044FC54u; f_800043EC(c); // 8044FC50
  c->r[5]=0u+0x80450000u; // 8044FC54
  c->r[31]=0u+0x806B0000u; // 8044FC58
  c->r[5]=c->r[5]+0xFFFFFB78u; // 8044FC5C
  c->r[3]=0u+0x00000002u; // 8044FC60
  c->r[7]=c->r[31]+0xFFFF86E0u; // 8044FC64
  c->r[4]=0u+0x00000001u; // 8044FC68
  c->r[6]=0u+0x00000000u; // 8044FC6C
  c->lr=0x8044FC74u; f_80460AB0(c); // 8044FC70
  c->r[31]=c->r[31]+0xFFFF86E0u; // 8044FC74
  c->r[4]=0u+0x80450000u; // 8044FC78
  c->r[4]=c->r[4]+0xFFFFFB9Cu; // 8044FC7C
  c->r[3]=0u+0x00000004u; // 8044FC80
  c->r[6]=c->r[31]+0x0000000Fu; // 8044FC84
  c->r[5]=0u+0x00000000u; // 8044FC88
  c->lr=0x8044FC90u; f_80460678(c); // 8044FC8C
  W32(c->r[30]+0x00000010u,c->r[3]); // 8044FC90
  c->r[4]=0u+0x80450000u; // 8044FC94
  c->r[4]=c->r[4]+0xFFFFFB54u; // 8044FC98
  c->r[6]=c->r[31]+0x0000001Fu; // 8044FC9C
  c->r[3]=0u+0x00000005u; // 8044FCA0
  c->r[5]=0u+0x00000000u; // 8044FCA4
  c->lr=0x8044FCACu; f_80460678(c); // 8044FCA8
  c->r[0]=0u+0x00000000u; // 8044FCAC
  W32(c->r[30]+0x00000008u,c->r[3]); // 8044FCB0
  c->r[3]=0u+0x0000003Cu; // 8044FCB4
  W32(c->r[30]+0x00000014u,c->r[0]); // 8044FCB8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8044FCBC
  c->lr=0x8044FCC4u; f_80453A1C(c); // 8044FCC0
  c->lr=0x8044FCC8u; f_80458F2C(c); // 8044FCC4
L_8044FCC8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8044FCC8
  c->r[0]=c->r[3]+0x00000001u; // 8044FCCC
  W32(c->r[30]+0x00000000u,c->r[0]); // 8044FCD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044FCD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8044FCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FCDC
  c->lr=c->r[0]; // 8044FCE0
  c->r[1]=c->r[1]+0x00000010u; // 8044FCE4
  return; // 8044FCE8
}

// fn_8044FCEC
void f_8044FCEC(Ctx* __restrict c) {
  trace_call(0x8044FCECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FCEC
  c->r[0]=c->lr; // 8044FCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044FCF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8044FCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8044FCFC
  c->r[30]=0u+0x807E0000u; // 8044FD00
  c->r[30]=c->r[30]+0x00002548u; // 8044FD04
  W32(c->r[1]+0x00000014u,c->r[29]); // 8044FD08
  c->r[0]=R32(c->r[30]+0x00000000u); // 8044FD0C
  cmps(c,0,(int32_t)c->r[0],0); // 8044FD10
  if (crb(c,1)) { goto L_8044FD2C; } // 8044FD14
  c->r[3]=0u+0x806B0000u; // 8044FD18
  c->r[3]=c->r[3]+0xFFFF86E0u; // 8044FD1C
  c->r[3]=c->r[3]+0x00000033u; // 8044FD20
  c->lr=0x8044FD28u; f_804605F4(c); // 8044FD24
  goto L_8044FDD0; // 8044FD28
L_8044FD2C:;
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8044FD2C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8044FD30
  if (!crb(c,2)) { goto L_8044FDD0; } // 8044FD34
  c->lr=0x8044FD3Cu; f_80452C88(c); // 8044FD38
  c->lr=0x8044FD40u; f_80464910(c); // 8044FD3C
  c->lr=0x8044FD44u; f_8044F0A8(c); // 8044FD40
  c->lr=0x8044FD48u; f_80451320(c); // 8044FD44
  c->lr=0x8044FD4Cu; f_8045C510(c); // 8044FD48
  c->lr=0x8044FD50u; f_80458F28(c); // 8044FD4C
  c->r[3]=0u+0x00000002u; // 8044FD50
  c->r[4]=0u+0x00000001u; // 8044FD54
  c->lr=0x8044FD5Cu; f_804608CC(c); // 8044FD58
  c->r[4]=R32(c->r[30]+0x00000010u); // 8044FD5C
  c->r[3]=0u+0x00000004u; // 8044FD60
  c->lr=0x8044FD68u; f_804608CC(c); // 8044FD64
  c->r[4]=R32(c->r[30]+0x00000008u); // 8044FD68
  c->r[3]=0u+0x00000005u; // 8044FD6C
  c->lr=0x8044FD74u; f_804608CC(c); // 8044FD70
  c->lr=0x8044FD78u; f_80461298(c); // 8044FD74
  c->lr=0x8044FD7Cu; f_8044FEDC(c); // 8044FD78
  c->lr=0x8044FD80u; f_80459CFC(c); // 8044FD7C
  c->lr=0x8044FD84u; f_8045E060(c); // 8044FD80
  c->lr=0x8044FD88u; f_8045EE04(c); // 8044FD84
  c->lr=0x8044FD8Cu; f_804600A0(c); // 8044FD88
  c->lr=0x8044FD90u; f_80458F2C(c); // 8044FD8C
  c->lr=0x8044FD94u; f_80458EFC(c); // 8044FD90
  c->r[31]=0u+0x806B0000u; // 8044FD94
  c->r[30]=c->r[30]+0x00000020u; // 8044FD98
  c->r[31]=c->r[31]+0xFFFF86E0u; // 8044FD9C
  c->r[29]=0u+0x00000000u; // 8044FDA0
L_8044FDA4:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8044FDA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FDA8
  if (crb(c,2)) { goto L_8044FDC0; } // 8044FDAC
  c->r[3]=c->r[31]+0x0000007Eu; // 8044FDB0
  c->lr=0x8044FDB8u; f_804605F4(c); // 8044FDB4
  c->r[3]=c->r[30]|c->r[30]; // 8044FDB8
  c->lr=0x8044FDC0u; f_804529F0(c); // 8044FDBC
L_8044FDC0:;
  c->r[29]=c->r[29]+0x00000001u; // 8044FDC0
  c->r[30]=c->r[30]+0x000000C4u; // 8044FDC4
  cmps(c,0,(int32_t)c->r[29],16); // 8044FDC8
  if (crb(c,0)) { IRQCHK(c); goto L_8044FDA4; } // 8044FDCC
L_8044FDD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8044FDD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8044FDD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8044FDD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8044FDDC
  c->lr=c->r[0]; // 8044FDE0
  c->r[1]=c->r[1]+0x00000020u; // 8044FDE4
  return; // 8044FDE8
}

// fn_8044FDEC
void f_8044FDEC(Ctx* __restrict c) {
  trace_call(0x8044FDECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FDEC
  c->r[0]=c->lr; // 8044FDF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FDF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8044FDF8
  c->r[31]=0u+0x807E0000u; // 8044FDFC
  c->r[31]=c->r[31]+0x000031A8u; // 8044FE00
  c->lr=0x8044FE08u; f_80458F30(c); // 8044FE04
  c->r[12]=R32(c->r[31]+0x00000000u); // 8044FE08
  cmps(c,0,(int32_t)c->r[12],0); // 8044FE0C
  if (crb(c,2)) { goto L_8044FE20; } // 8044FE10
  c->r[3]=R32(c->r[31]+0x00000004u); // 8044FE14
  c->ctr=c->r[12]; // 8044FE18
  if (true) { c->lr=0x8044FE20u; dispatch(c,c->ctr); } // 8044FE1C
L_8044FE20:;
  c->lr=0x8044FE24u; f_8045D1C8(c); // 8044FE20
  c->r[12]=R32(c->r[31]+0x00000008u); // 8044FE24
  cmps(c,0,(int32_t)c->r[12],0); // 8044FE28
  if (crb(c,2)) { goto L_8044FE3C; } // 8044FE2C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8044FE30
  c->ctr=c->r[12]; // 8044FE34
  if (true) { c->lr=0x8044FE3Cu; dispatch(c,c->ctr); } // 8044FE38
L_8044FE3C:;
  c->lr=0x8044FE40u; f_80458F34(c); // 8044FE3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FE40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8044FE44
  c->lr=c->r[0]; // 8044FE48
  c->r[1]=c->r[1]+0x00000010u; // 8044FE4C
  return; // 8044FE50
}

// fn_8044FE54
void f_8044FE54(Ctx* __restrict c) {
  trace_call(0x8044FE54u);
  c->r[4]=0u+0x80710000u; // 8044FE54
  W32(c->r[4]+0x00004A80u,c->r[3]); // 8044FE58
  return; // 8044FE5C
}

// fn_8044FE60
void f_8044FE60(Ctx* __restrict c) {
  trace_call(0x8044FE60u);
  c->r[4]=0u+0x807E0000u; // 8044FE60
  c->r[3]=R32(c->r[4]+0x000031B8u); // 8044FE64
  c->r[0]=c->r[3]+0x00000001u; // 8044FE68
  W32(c->r[4]+0x000031B8u,c->r[0]); // 8044FE6C
  return; // 8044FE70
}

// fn_8044FE74
void f_8044FE74(Ctx* __restrict c) {
  trace_call(0x8044FE74u);
  c->r[4]=0u+0x807E0000u; // 8044FE74
  c->r[3]=R32(c->r[4]+0x000031B8u); // 8044FE78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044FE7C
  W32(c->r[4]+0x000031B8u,c->r[0]); // 8044FE80
  return; // 8044FE84
}

// fn_8044FE88
void f_8044FE88(Ctx* __restrict c) {
  trace_call(0x8044FE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FE88
  c->r[0]=c->lr; // 8044FE8C
  c->r[3]=0u+0x807E0000u; // 8044FE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8044FE94
  c->r[0]=R32(c->r[3]+0x000031C0u); // 8044FE98
  cmps(c,0,(int32_t)c->r[0],0); // 8044FE9C
  if (!crb(c,2)) { goto L_8044FEBC; } // 8044FEA0
  c->lr=0x8044FEA8u; f_80456D30(c); // 8044FEA4
  c->r[3]=0u+0x807E0000u; // 8044FEA8
  c->r[4]=0u+0x00000000u; // 8044FEAC
  c->r[3]=c->r[3]+0x000031D8u; // 8044FEB0
  c->r[5]=0u+0x00000AC0u; // 8044FEB4
  c->lr=0x8044FEBCu; f_800043EC(c); // 8044FEB8
L_8044FEBC:;
  c->r[4]=0u+0x807E0000u; // 8044FEBC
  c->r[3]=R32(c->r[4]+0x000031C0u); // 8044FEC0
  c->r[0]=c->r[3]+0x00000001u; // 8044FEC4
  W32(c->r[4]+0x000031C0u,c->r[0]); // 8044FEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8044FECC
  c->lr=c->r[0]; // 8044FED0
  c->r[1]=c->r[1]+0x00000010u; // 8044FED4
  return; // 8044FED8
}

// fn_8044FEDC
void f_8044FEDC(Ctx* __restrict c) {
  trace_call(0x8044FEDCu);
  c->r[4]=0u+0x807E0000u; // 8044FEDC
  c->r[3]=R32(c->r[4]+0x000031C0u); // 8044FEE0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8044FEE4
  W32(c->r[4]+0x000031C0u,c->r[0]); // 8044FEE8
  c->r[0]=R32(c->r[4]+0x000031C0u); // 8044FEEC
  cmps(c,0,(int32_t)c->r[0],0); // 8044FEF0
  if (!crb(c,2)) return; // 8044FEF4
  c->r[3]=0u+0x807E0000u; // 8044FEF8
  c->r[4]=0u+0x00000000u; // 8044FEFC
  c->r[3]=c->r[3]+0x000031D8u; // 8044FF00
  c->r[5]=0u+0x00000AC0u; // 8044FF04
  f_800043EC(c); return; // 8044FF08
  return; // 8044FF0C
}

// fn_8044FF10
void f_8044FF10(Ctx* __restrict c) {
  trace_call(0x8044FF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8044FF10
  c->r[0]=c->lr; // 8044FF14
  c->r[6]=0u+0x807E0000u; // 8044FF18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8044FF1C
  c->r[0]=0u+0x00000002u; // 8044FF20
  c->r[6]=c->r[6]+0x000031D8u; // 8044FF24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8044FF28
  c->r[28]=c->r[3]|c->r[3]; // 8044FF2C
  c->r[29]=c->r[4]|c->r[4]; // 8044FF30
  c->r[30]=c->r[5]|c->r[5]; // 8044FF34
  c->r[3]=0u+0x00000000u; // 8044FF38
  c->r[26]=R32(c->r[5]+0x00000000u); // 8044FF3C
  c->ctr=c->r[0]; // 8044FF40
L_8044FF44:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8044FF44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF48
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF4C
  c->r[0]=R8(c->r[6]+0x000000ACu); // 8044FF50
  c->r[3]=c->r[3]+0x00000001u; // 8044FF54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF58
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF5C
  c->r[0]=R8(c->r[6]+0x00000158u); // 8044FF60
  c->r[3]=c->r[3]+0x00000001u; // 8044FF64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF68
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF6C
  c->r[0]=R8(c->r[6]+0x00000204u); // 8044FF70
  c->r[3]=c->r[3]+0x00000001u; // 8044FF74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF78
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF7C
  c->r[0]=R8(c->r[6]+0x000002B0u); // 8044FF80
  c->r[3]=c->r[3]+0x00000001u; // 8044FF84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF88
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF8C
  c->r[0]=R8(c->r[6]+0x0000035Cu); // 8044FF90
  c->r[3]=c->r[3]+0x00000001u; // 8044FF94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FF98
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FF9C
  c->r[0]=R8(c->r[6]+0x00000408u); // 8044FFA0
  c->r[3]=c->r[3]+0x00000001u; // 8044FFA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FFA8
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FFAC
  c->r[0]=R8(c->r[6]+0x000004B4u); // 8044FFB0
  c->r[3]=c->r[3]+0x00000001u; // 8044FFB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8044FFB8
  if (crb(c,2)) { goto L_8044FFCC; } // 8044FFBC
  c->r[6]=c->r[6]+0x00000560u; // 8044FFC0
  c->r[3]=c->r[3]+0x00000001u; // 8044FFC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8044FF44; } // 8044FFC8
L_8044FFCC:;
  cmps(c,0,(int32_t)c->r[3],16); // 8044FFCC
  if (!crb(c,2)) { goto L_8044FFDC; } // 8044FFD0
  c->r[3]=0u+0x00000000u; // 8044FFD4
  goto L_80450194; // 8044FFD8
L_8044FFDC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)172); // 8044FFDC
  c->r[4]=0u+0x807E0000u; // 8044FFE0
  c->r[3]=c->r[26]|c->r[26]; // 8044FFE4
  c->r[4]=c->r[4]+0x000031D8u; // 8044FFE8
  c->r[31]=c->r[4]+c->r[0]; // 8044FFEC
  c->lr=0x8044FFF4u; f_8045FD4C(c); // 8044FFF0
  c->r[27]=c->r[3]|c->r[3]; // 8044FFF4
  c->r[3]=c->r[26]|c->r[26]; // 8044FFF8
  c->lr=0x80450000u; f_8045FE00(c); // 8044FFFC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80450000
  c->r[0]=c->r[0]+c->r[3]; // 80450004
  c->r[3]=c->r[26]|c->r[26]; // 80450008
  c->r[26]=sraw(c,c->r[0],1); // 8045000C
  c->lr=0x80450014u; f_8045FEB4(c); // 80450010
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80450014
  c->r[4]=c->r[27]|c->r[27]; // 80450018
  c->r[0]=c->r[0]+c->r[3]; // 8045001C
  c->r[3]=c->r[29]|c->r[29]; // 80450020
  c->r[0]=sraw(c,c->r[0],1); // 80450024
  c->r[5]=c->r[26]|c->r[26]; // 80450028
  c->r[6]=c->r[26]+c->r[0]; // 8045002C
  c->lr=0x80450034u; f_80456DD0(c); // 80450030
  cmps(c,0,(int32_t)c->r[3],0); // 80450034
  W32(c->r[31]+0x00000004u,c->r[3]); // 80450038
  if (!crb(c,2)) { goto L_80450048; } // 8045003C
  c->r[3]=0u+0x00000000u; // 80450040
  goto L_80450194; // 80450044
L_80450048:;
  c->r[4]=0u+0x80450000u; // 80450048
  c->r[5]=c->r[31]|c->r[31]; // 8045004C
  c->r[4]=c->r[4]+0x000005D0u; // 80450050
  c->lr=0x80450058u; f_80457490(c); // 80450054
  W32(c->r[31]+0x00000008u,c->r[28]); // 80450058
  cmps(c,1,(int32_t)c->r[29],0); // 8045005C
  c->r[6]=0u+0x00000000u; // 80450060
  W8(c->r[31]+0x00000002u,c->r[29]); // 80450064
  if (!crb(c,5)) { goto L_80450138; } // 80450068
  cmps(c,0,(int32_t)c->r[29],8); // 8045006C
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 80450070
  if (!crb(c,1)) { goto L_80450108; } // 80450074
  c->r[5]=0u+0x00000000u; // 80450078
  if (crb(c,4)) { goto L_80450094; } // 8045007C
  c->r[3]=0u+0x80000000u; // 80450080
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80450084
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80450088
  if (crb(c,1)) { goto L_80450094; } // 8045008C
  c->r[5]=0u+0x00000001u; // 80450090
L_80450094:;
  cmps(c,0,(int32_t)c->r[5],0); // 80450094
  if (crb(c,2)) { goto L_80450108; } // 80450098
  c->r[0]=c->r[4]+0x00000007u; // 8045009C
  c->r[3]=c->r[30]|c->r[30]; // 804500A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 804500A4
  c->r[5]=c->r[31]|c->r[31]; // 804500A8
  c->ctr=c->r[0]; // 804500AC
  cmps(c,0,(int32_t)c->r[4],0); // 804500B0
  if (!crb(c,1)) { goto L_80450108; } // 804500B4
L_804500B8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 804500B8
  c->r[6]=c->r[6]+0x00000008u; // 804500BC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 804500C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 804500C4
  W32(c->r[5]+0x00000010u,c->r[0]); // 804500C8
  c->r[0]=R32(c->r[3]+0x00000008u); // 804500CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 804500D0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804500D4
  W32(c->r[5]+0x00000018u,c->r[0]); // 804500D8
  c->r[0]=R32(c->r[3]+0x00000010u); // 804500DC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 804500E0
  c->r[0]=R32(c->r[3]+0x00000014u); // 804500E4
  W32(c->r[5]+0x00000020u,c->r[0]); // 804500E8
  c->r[0]=R32(c->r[3]+0x00000018u); // 804500EC
  W32(c->r[5]+0x00000024u,c->r[0]); // 804500F0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 804500F4
  c->r[3]=c->r[3]+0x00000020u; // 804500F8
  W32(c->r[5]+0x00000028u,c->r[0]); // 804500FC
  c->r[5]=c->r[5]+0x00000020u; // 80450100
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804500B8; } // 80450104
L_80450108:;
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80450108
  c->r[0]=c->r[29]-c->r[6]; // 8045010C
  c->r[3]=c->r[30]+c->r[4]; // 80450110
  c->r[4]=c->r[31]+c->r[4]; // 80450114
  c->ctr=c->r[0]; // 80450118
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8045011C
  if (!crb(c,0)) { goto L_80450138; } // 80450120
L_80450124:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80450124
  c->r[3]=c->r[3]+0x00000004u; // 80450128
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8045012C
  c->r[4]=c->r[4]+0x00000004u; // 80450130
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80450124; } // 80450134
L_80450138:;
  c->r[6]=0u+0x00000000u; // 80450138
  c->r[3]=0u+0x80000000u; // 8045013C
  W8(c->r[31]+0x00000001u,c->r[6]); // 80450140
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80450144
  c->r[4]=0u+0xFFFFFFFFu; // 80450148
  c->r[0]=0u+0x00000001u; // 8045014C
  W32(c->r[31]+0x00000098u,c->r[6]); // 80450150
  c->r[3]=c->r[31]|c->r[31]; // 80450154
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 80450158
  W32(c->r[31]+0x00000030u,c->r[6]); // 8045015C
  W32(c->r[31]+0x00000034u,c->r[6]); // 80450160
  W32(c->r[31]+0x00000038u,c->r[5]); // 80450164
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 80450168
  W32(c->r[31]+0x00000040u,c->r[6]); // 8045016C
  W32(c->r[31]+0x00000044u,c->r[6]); // 80450170
  W8(c->r[31]+0x00000003u,c->r[6]); // 80450174
  W32(c->r[31]+0x000000A0u,c->r[6]); // 80450178
  W32(c->r[31]+0x000000A4u,c->r[6]); // 8045017C
  W32(c->r[31]+0x00000048u,c->r[6]); // 80450180
  W32(c->r[31]+0x0000004Cu,c->r[6]); // 80450184
  W32(c->r[31]+0x00000050u,c->r[6]); // 80450188
  W32(c->r[31]+0x00000054u,c->r[6]); // 8045018C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80450190
L_80450194:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80450194
  c->r[0]=R32(c->r[1]+0x00000024u); // 80450198
  c->lr=c->r[0]; // 8045019C
  c->r[1]=c->r[1]+0x00000020u; // 804501A0
  return; // 804501A4
}

// fn_804501A8
void f_804501A8(Ctx* __restrict c) {
  trace_call(0x804501A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804501A8
  c->r[0]=c->lr; // 804501AC
  cmps(c,0,(int32_t)c->r[3],0); // 804501B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804501B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804501B8
  c->r[31]=c->r[3]|c->r[3]; // 804501BC
  if (crb(c,2)) { goto L_804501F8; } // 804501C0
  c->r[4]=R32(c->r[3]+0x00000004u); // 804501C4
  cmps(c,0,(int32_t)c->r[4],0); // 804501C8
  if (crb(c,2)) { goto L_804501E0; } // 804501CC
  c->r[0]=0u+0x00000000u; // 804501D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 804501D4
  c->r[3]=c->r[4]|c->r[4]; // 804501D8
  c->lr=0x804501E0u; f_80456F74(c); // 804501DC
L_804501E0:;
  c->lr=0x804501E4u; f_80458F28(c); // 804501E0
  c->r[3]=c->r[31]|c->r[31]; // 804501E4
  c->r[4]=0u+0x00000000u; // 804501E8
  c->r[5]=0u+0x000000ACu; // 804501EC
  c->lr=0x804501F4u; f_800043EC(c); // 804501F0
  c->lr=0x804501F8u; f_80458F2C(c); // 804501F4
L_804501F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804501F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804501FC
  c->lr=c->r[0]; // 80450200
  c->r[1]=c->r[1]+0x00000010u; // 80450204
  return; // 80450208
}

// fn_8045020C
void f_8045020C(Ctx* __restrict c) {
  trace_call(0x8045020Cu);
  c->r[3]=R8(c->r[3]+0x00000001u); // 8045020C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80450210
  return; // 80450214
}

// fn_80450218
void f_80450218(Ctx* __restrict c) {
  trace_call(0x80450218u);
  W32(c->r[3]+0x00000008u,c->r[4]); // 80450218
  c->r[3]=R32(c->r[3]+0x00000004u); // 8045021C
  f_80455944(c); return; // 80450220
}

// fn_80450224
void f_80450224(Ctx* __restrict c) {
  trace_call(0x80450224u);
  W32(c->r[3]+0x00000038u,c->r[4]); // 80450224
  c->r[3]=R32(c->r[3]+0x00000004u); // 80450228
  f_80455964(c); return; // 8045022C
}

// fn_80450230
void f_80450230(Ctx* __restrict c) {
  trace_call(0x80450230u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80450230
  f_804559E8(c); return; // 80450234
}

// fn_80450238
void f_80450238(Ctx* __restrict c) {
  trace_call(0x80450238u);
  c->r[4]=0u+0x80000000u; // 80450238
  c->r[6]=0u+0x00000000u; // 8045023C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80450240
  c->r[0]=0u+0x00000001u; // 80450244
  c->r[4]=0u+0xFFFFFFFFu; // 80450248
  W32(c->r[3]+0x00000098u,c->r[6]); // 8045024C
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 80450250
  W32(c->r[3]+0x00000030u,c->r[6]); // 80450254
  W32(c->r[3]+0x00000034u,c->r[6]); // 80450258
  W32(c->r[3]+0x00000038u,c->r[5]); // 8045025C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 80450260
  W32(c->r[3]+0x00000040u,c->r[6]); // 80450264
  W32(c->r[3]+0x00000044u,c->r[6]); // 80450268
  W8(c->r[3]+0x00000003u,c->r[6]); // 8045026C
  W32(c->r[3]+0x000000A0u,c->r[6]); // 80450270
  W32(c->r[3]+0x000000A4u,c->r[6]); // 80450274
  W8(c->r[3]+0x00000001u,c->r[0]); // 80450278
  return; // 8045027C
}

// fn_80450280
void f_80450280(Ctx* __restrict c) {
  trace_call(0x80450280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450280
  c->r[0]=c->lr; // 80450284
  W32(c->r[1]+0x00000014u,c->r[0]); // 80450288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8045028C
  c->r[31]=c->r[3]|c->r[3]; // 80450290
  c->r[3]=R32(c->r[3]+0x00000004u); // 80450294
  c->lr=0x8045029Cu; f_8045782C(c); // 80450298
  c->r[0]=0u+0x00000000u; // 8045029C
  W8(c->r[31]+0x00000001u,c->r[0]); // 804502A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804502A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804502A8
  c->lr=c->r[0]; // 804502AC
  c->r[1]=c->r[1]+0x00000010u; // 804502B0
  return; // 804502B4
}

// fn_804502B8
void f_804502B8(Ctx* __restrict c) {
  trace_call(0x804502B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804502B8
  c->r[0]=c->lr; // 804502BC
  c->r[5]=0u+0x00010000u; // 804502C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 804502C4
  c->r[5]=c->r[5]+0xFFFFC800u; // 804502C8
  c->r[6]=c->r[1]+0x00000010u; // 804502CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 804502D0
  W32(c->r[1]+0x00000028u,c->r[30]); // 804502D4
  W32(c->r[1]+0x00000024u,c->r[29]); // 804502D8
  c->r[29]=c->r[3]|c->r[3]; // 804502DC
  W32(c->r[1]+0x00000020u,c->r[28]); // 804502E0
  c->r[30]=R32(c->r[3]+0x00000008u); // 804502E4
  c->r[31]=R32(c->r[3]+0x00000004u); // 804502E8
  c->r[4]=R32(c->r[30]+0x00000000u); // 804502EC
  c->r[3]=c->r[30]|c->r[30]; // 804502F0
  c->r[12]=R32(c->r[4]+0x00000018u); // 804502F4
  c->r[4]=0u+0x00000001u; // 804502F8
  c->ctr=c->r[12]; // 804502FC
  if (true) { c->lr=0x80450304u; dispatch(c,c->ctr); } // 80450300
  c->r[0]=R32(c->r[1]+0x00000014u); // 80450304
  c->r[4]=0u+0x00000000u; // 80450308
  c->r[3]=R32(c->r[1]+0x00000010u); // 8045030C
  c->ctr=c->r[0]; // 80450310
  cmps(c,0,(int32_t)c->r[0],0); // 80450314
  if (!crb(c,1)) { goto L_80450334; } // 80450318
L_8045031C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8045031C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80450320
  if (!crb(c,2)) { goto L_80450334; } // 80450324
  c->r[3]=c->r[3]+0x00000001u; // 80450328
  c->r[4]=c->r[4]+0x00000001u; // 8045032C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8045031C; } // 80450330
L_80450334:;
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 80450334
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 80450338
  c->r[0]=c->r[0]^c->r[3]; // 8045033C
  c->r[0]=c->r[0]-c->r[3]; // 80450340
  cmps(c,0,(int32_t)c->r[0],1); // 80450344
  if (!crb(c,2)) { goto L_80450390; } // 80450348
  c->r[6]=R32(c->r[30]+0x00000000u); // 8045034C
  c->r[3]=c->r[30]|c->r[30]; // 80450350
  c->r[5]=c->r[1]+0x00000010u; // 80450354
  c->r[4]=0u+0x00000001u; // 80450358
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8045035C
  c->ctr=c->r[12]; // 80450360
  if (true) { c->lr=0x80450368u; dispatch(c,c->ctr); } // 80450364
  c->lr=0x8045036Cu; f_80456D24(c); // 80450368
  cmps(c,0,(int32_t)c->r[3],0); // 8045036C
  if (!crb(c,2)) { goto L_80450384; } // 80450370
  c->r[3]=0u+0x806B0000u; // 80450374
  c->r[3]=c->r[3]+0xFFFF8788u; // 80450378
  c->r[4]=c->r[3]+0x0000001Fu; // 8045037C
  c->lr=0x80450384u; f_80459DC4(c); // 80450380
L_80450384:;
  c->r[0]=0u+0x00000004u; // 80450384
  W8(c->r[29]+0x00000001u,c->r[0]); // 80450388
  goto L_804505B0; // 8045038C
L_80450390:;
  c->r[3]=c->r[1]+0x00000010u; // 80450390
  c->r[5]=c->r[1]+0x00000008u; // 80450394
  c->r[6]=c->r[3]|c->r[3]; // 80450398
  c->lr=0x804503A0u; f_804600F0(c); // 8045039C
  c->r[6]=R32(c->r[30]+0x00000000u); // 804503A0
  c->r[3]=c->r[30]|c->r[30]; // 804503A4
  c->r[5]=c->r[1]+0x00000008u; // 804503A8
  c->r[4]=0u+0x00000000u; // 804503AC
  c->r[12]=R32(c->r[6]+0x00000020u); // 804503B0
  c->ctr=c->r[12]; // 804503B4
  if (true) { c->lr=0x804503BCu; dispatch(c,c->ctr); } // 804503B8
  c->r[5]=R32(c->r[1]+0x00000014u); // 804503BC
  cmps(c,0,(int32_t)c->r[5],16); // 804503C0
  if (!crb(c,0)) { goto L_804503E8; } // 804503C4
  c->r[6]=R32(c->r[30]+0x00000000u); // 804503C8
  c->r[3]=c->r[30]|c->r[30]; // 804503CC
  c->r[5]=c->r[1]+0x00000010u; // 804503D0
  c->r[4]=0u+0x00000001u; // 804503D4
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804503D8
  c->ctr=c->r[12]; // 804503DC
  if (true) { c->lr=0x804503E4u; dispatch(c,c->ctr); } // 804503E0
  goto L_804505B0; // 804503E4
L_804503E8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 804503E8
  c->r[3]=c->r[31]|c->r[31]; // 804503EC
  c->lr=0x804503F4u; f_80457374(c); // 804503F0
  cmps(c,1,(int32_t)c->r[3],0); // 804503F4
  c->r[28]=c->r[3]|c->r[3]; // 804503F8
  if (crb(c,6)) { goto L_8045040C; } // 804503FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80450400
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80450404
  if (!crb(c,1)) { goto L_8045042C; } // 80450408
L_8045040C:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 8045040C
  c->r[3]=c->r[30]|c->r[30]; // 80450410
  c->r[5]=c->r[1]+0x00000010u; // 80450414
  c->r[4]=0u+0x00000001u; // 80450418
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8045041C
  c->ctr=c->r[12]; // 80450420
  if (true) { c->lr=0x80450428u; dispatch(c,c->ctr); } // 80450424
  goto L_804505B0; // 80450428
L_8045042C:;
  if (!crb(c,4)) { goto L_80450494; } // 8045042C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000009Au); // 80450430
  cmps(c,0,(int32_t)c->r[0],0); // 80450434
  if (crb(c,2)) { goto L_8045044C; } // 80450438
  c->r[3]=c->r[31]|c->r[31]; // 8045043C
  c->lr=0x80450444u; f_804572C0(c); // 80450440
  c->r[28]=0u+0x00000000u; // 80450444
  goto L_80450494; // 80450448
L_8045044C:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 8045044C
  c->r[3]=c->r[30]|c->r[30]; // 80450450
  c->r[5]=c->r[1]+0x00000010u; // 80450454
  c->r[4]=0u+0x00000001u; // 80450458
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8045045C
  c->ctr=c->r[12]; // 80450460
  if (true) { c->lr=0x80450468u; dispatch(c,c->ctr); } // 80450464
  c->lr=0x8045046Cu; f_80456D24(c); // 80450468
  cmps(c,0,(int32_t)c->r[3],0); // 8045046C
  if (!crb(c,2)) { goto L_80450488; } // 80450470
  c->r[4]=0u+0x806B0000u; // 80450474
  c->r[4]=c->r[4]+0xFFFF8788u; // 80450478
  c->r[3]=c->r[4]+0x0000003Eu; // 8045047C
  c->r[4]=c->r[4]+0x0000005Cu; // 80450480
  c->lr=0x80450488u; f_80459DC4(c); // 80450484
L_80450488:;
  c->r[0]=0u+0x00000004u; // 80450488
  W8(c->r[29]+0x00000001u,c->r[0]); // 8045048C
  goto L_804505B0; // 80450490
L_80450494:;
  W32(c->r[29]+0x00000098u,c->r[28]); // 80450494
  c->r[3]=c->r[31]|c->r[31]; // 80450498
  c->lr=0x804504A0u; f_804574A4(c); // 8045049C
  cmps(c,0,(int32_t)c->r[3],4); // 804504A0
  if (!crb(c,2)) { goto L_804504B0; } // 804504A4
  c->r[0]=0u+0x00000001u; // 804504A8
  W8(c->r[29]+0x00000003u,c->r[0]); // 804504AC
L_804504B0:;
  c->r[3]=c->r[31]|c->r[31]; // 804504B0
  c->lr=0x804504B8u; f_804574A4(c); // 804504B4
  cmps(c,0,(int32_t)c->r[3],2); // 804504B8
  if (!crb(c,2)) { goto L_804504E0; } // 804504BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804504C0
  c->r[3]=c->r[29]+0x00000058u; // 804504C4
  c->r[4]=R32(c->r[1]+0x00000010u); // 804504C8
  c->r[5]=0u+0x00000040u; // 804504CC
  cmps(c,0,(int32_t)c->r[0],64); // 804504D0
  if (!crb(c,0)) { goto L_804504DC; } // 804504D4
  c->r[5]=c->r[0]|c->r[0]; // 804504D8
L_804504DC:;
  c->lr=0x804504E0u; f_802DC484(c); // 804504DC
L_804504E0:;
  c->r[3]=c->r[31]|c->r[31]; // 804504E0
  c->lr=0x804504E8u; f_804574A4(c); // 804504E4
  cmps(c,0,(int32_t)c->r[3],10); // 804504E8
  if (crb(c,2)) { goto L_80450510; } // 804504EC
  cmps(c,0,(int32_t)c->r[3],11); // 804504F0
  if (crb(c,2)) { goto L_80450510; } // 804504F4
  cmps(c,0,(int32_t)c->r[3],12); // 804504F8
  if (crb(c,2)) { goto L_80450510; } // 804504FC
  cmps(c,0,(int32_t)c->r[3],20); // 80450500
  if (crb(c,2)) { goto L_80450510; } // 80450504
  cmps(c,0,(int32_t)c->r[3],15); // 80450508
  if (!crb(c,2)) { goto L_80450530; } // 8045050C
L_80450510:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 80450510
  c->r[3]=c->r[30]|c->r[30]; // 80450514
  c->r[5]=c->r[1]+0x00000010u; // 80450518
  c->r[4]=0u+0x00000001u; // 8045051C
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450520
  c->ctr=c->r[12]; // 80450524
  if (true) { c->lr=0x8045052Cu; dispatch(c,c->ctr); } // 80450528
  goto L_8045057C; // 8045052C
L_80450530:;
  c->r[3]=c->r[1]+0x00000010u; // 80450530
  c->r[4]=c->r[28]|c->r[28]; // 80450534
  c->r[5]=c->r[3]|c->r[3]; // 80450538
  c->r[6]=c->r[1]+0x00000008u; // 8045053C
  c->lr=0x80450544u; f_804600F0(c); // 80450540
  c->r[6]=R32(c->r[30]+0x00000000u); // 80450544
  c->r[3]=c->r[30]|c->r[30]; // 80450548
  c->r[5]=c->r[1]+0x00000010u; // 8045054C
  c->r[4]=0u+0x00000000u; // 80450550
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450554
  c->ctr=c->r[12]; // 80450558
  if (true) { c->lr=0x80450560u; dispatch(c,c->ctr); } // 8045055C
  c->r[6]=R32(c->r[30]+0x00000000u); // 80450560
  c->r[3]=c->r[30]|c->r[30]; // 80450564
  c->r[5]=c->r[1]+0x00000008u; // 80450568
  c->r[4]=0u+0x00000001u; // 8045056C
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450570
  c->ctr=c->r[12]; // 80450574
  if (true) { c->lr=0x8045057Cu; dispatch(c,c->ctr); } // 80450578
L_8045057C:;
  c->r[0]=R32(c->r[31]+0x000000DCu); // 8045057C
  cmps(c,0,(int32_t)c->r[0],0); // 80450580
  if (crb(c,2)) { goto L_804505A8; } // 80450584
  c->r[3]=0u+0x807E0000u; // 80450588
  c->r[12]=R32(c->r[3]+0x000031D4u); // 8045058C
  cmps(c,0,(int32_t)c->r[12],0); // 80450590
  if (crb(c,2)) { goto L_804505A8; } // 80450594
  c->r[3]=c->r[31]|c->r[31]; // 80450598
  c->r[4]=R32(c->r[31]+0x00000014u); // 8045059C
  c->ctr=c->r[12]; // 804505A0
  if (true) { c->lr=0x804505A8u; dispatch(c,c->ctr); } // 804505A4
L_804505A8:;
  c->r[0]=0u+0x00000002u; // 804505A8
  W8(c->r[29]+0x00000001u,c->r[0]); // 804505AC
L_804505B0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804505B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804505B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 804505B8
  c->r[29]=R32(c->r[1]+0x00000024u); // 804505BC
  c->r[28]=R32(c->r[1]+0x00000020u); // 804505C0
  c->lr=c->r[0]; // 804505C4
  c->r[1]=c->r[1]+0x00000030u; // 804505C8
  return; // 804505CC
}

// fn_804505D0
void f_804505D0(Ctx* __restrict c) {
  trace_call(0x804505D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804505D0
  c->r[0]=c->lr; // 804505D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 804505D8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 804505DC
  c->r[31]=c->r[3]|c->r[3]; // 804505E0
  c->r[24]=c->r[4]|c->r[4]; // 804505E4
  c->r[29]=c->r[5]|c->r[5]; // 804505E8
  c->r[30]=c->r[6]|c->r[6]; // 804505EC
  c->r[27]=c->r[31]|c->r[31]; // 804505F0
  c->r[28]=c->r[3]+0x0000001Cu; // 804505F4
  c->r[25]=0u+0x00000000u; // 804505F8
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 804505FC
  goto L_80450630; // 80450600
L_80450604:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80450604
  c->r[6]=c->r[28]|c->r[28]; // 80450608
  c->r[4]=0u+0x00000000u; // 8045060C
  c->r[5]=0u+0x00004000u; // 80450610
  c->r[7]=R32(c->r[3]+0x00000000u); // 80450614
  c->r[12]=R32(c->r[7]+0x00000018u); // 80450618
  c->ctr=c->r[12]; // 8045061C
  if (true) { c->lr=0x80450624u; dispatch(c,c->ctr); } // 80450620
  c->r[28]=c->r[28]+0x00000008u; // 80450624
  c->r[27]=c->r[27]+0x00000004u; // 80450628
  c->r[25]=c->r[25]+0x00000001u; // 8045062C
L_80450630:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80450630
  c->lr=0x80450638u; f_804574B4(c); // 80450634
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 80450638
  if (crb(c,0)) { IRQCHK(c); goto L_80450604; } // 8045063C
  c->r[3]=c->r[26]|c->r[26]; // 80450640
  c->lr=0x80450648u; f_8045FD4C(c); // 80450644
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80450648
  c->r[3]=c->r[0]-c->r[3]; // 8045064C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80450650
  c->r[0]=c->r[0]+c->r[3]; // 80450654
  c->r[0]=sraw(c,c->r[0],1); // 80450658
  W32(c->r[24]+0x00000000u,c->r[0]); // 8045065C
  c->r[3]=R32(c->r[31]+0x00000020u); // 80450660
  c->r[4]=R32(c->r[31]+0x00000038u); // 80450664
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80450668
  c->r[0]=c->r[0]+c->r[3]; // 8045066C
  c->r[0]=sraw(c,c->r[0],1); // 80450670
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80450674
  if (!crb(c,0)) { goto L_80450680; } // 80450678
  c->r[4]=c->r[0]|c->r[0]; // 8045067C
L_80450680:;
  W32(c->r[29]+0x00000000u,c->r[4]); // 80450680
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80450684
  cmps(c,0,(int32_t)c->r[3],0); // 80450688
  if (crb(c,0)) { goto L_804506A0; } // 8045068C
  c->r[0]=R32(c->r[31]+0x00000040u); // 80450690
  c->r[0]=c->r[3]-c->r[0]; // 80450694
  W32(c->r[30]+0x00000000u,c->r[0]); // 80450698
  goto L_804506AC; // 8045069C
L_804506A0:;
  c->r[3]=0u+0x20000000u; // 804506A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804506A4
  W32(c->r[30]+0x00000000u,c->r[0]); // 804506A8
L_804506AC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 804506AC
  c->lr=0x804506B4u; f_8045749C(c); // 804506B0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 804506B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 804506B8
  c->lr=c->r[0]; // 804506BC
  c->r[1]=c->r[1]+0x00000030u; // 804506C0
  return; // 804506C4
}

// fn_804506C8
void f_804506C8(Ctx* __restrict c) {
  trace_call(0x804506C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804506C8
  c->r[0]=c->lr; // 804506CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804506D0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 804506D4
  c->r[29]=c->r[3]|c->r[3]; // 804506D8
  c->r[27]=0u+0x00000000u; // 804506DC
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 804506E0
  c->r[31]=R32(c->r[3]+0x00000004u); // 804506E4
  cmps(c,0,(int32_t)c->r[4],0); // 804506E8
  c->r[30]=R32(c->r[3]+0x00000008u); // 804506EC
  if (crb(c,0)) { goto L_80450718; } // 804506F0
  c->r[0]=R32(c->r[3]+0x00000040u); // 804506F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 804506F8
  if (crb(c,0)) { goto L_80450718; } // 804506FC
  c->r[12]=R32(c->r[3]+0x00000048u); // 80450700
  cmps(c,0,(int32_t)c->r[12],0); // 80450704
  if (crb(c,2)) { goto L_80450718; } // 80450708
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8045070C
  c->ctr=c->r[12]; // 80450710
  if (true) { c->lr=0x80450718u; dispatch(c,c->ctr); } // 80450714
L_80450718:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 80450718
  cmps(c,0,(int32_t)c->r[0],1); // 8045071C
  if (!crb(c,2)) { goto L_80450750; } // 80450720
  c->r[5]=R32(c->r[30]+0x00000000u); // 80450724
  c->r[3]=c->r[30]|c->r[30]; // 80450728
  c->r[4]=0u+0x00000001u; // 8045072C
  c->r[12]=R32(c->r[5]+0x00000024u); // 80450730
  c->ctr=c->r[12]; // 80450734
  if (true) { c->lr=0x8045073Cu; dispatch(c,c->ctr); } // 80450738
  cmps(c,0,(int32_t)c->r[3],0); // 8045073C
  if (!crb(c,2)) { goto L_80450750; } // 80450740
  c->r[0]=0u+0x00000003u; // 80450744
  W8(c->r[29]+0x00000001u,c->r[0]); // 80450748
  goto L_80450A18; // 8045074C
L_80450750:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80450750
  c->r[5]=0u+0x80000000u; // 80450754
  c->r[3]=c->r[30]|c->r[30]; // 80450758
  c->r[6]=c->r[29]+0x00000014u; // 8045075C
  c->r[12]=R32(c->r[4]+0x00000018u); // 80450760
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80450764
  c->r[4]=0u+0x00000001u; // 80450768
  c->ctr=c->r[12]; // 8045076C
  if (true) { c->lr=0x80450774u; dispatch(c,c->ctr); } // 80450770
  c->r[3]=c->r[31]|c->r[31]; // 80450774
  c->lr=0x8045077Cu; f_804574A4(c); // 80450778
  cmps(c,0,(int32_t)c->r[3],0); // 8045077C
  if (!crb(c,2)) { goto L_804508E8; } // 80450780
  c->r[4]=R32(c->r[29]+0x00000018u); // 80450784
  cmps(c,0,(int32_t)c->r[4],4); // 80450788
  if (crb(c,0)) { goto L_804508E8; } // 8045078C
  c->r[3]=R32(c->r[29]+0x00000014u); // 80450790
  c->r[0]=R16(c->r[3]+0x00000000u); // 80450794
  cmpu(c,0,c->r[0],0x00008001u); // 80450798
  if (!crb(c,2)) { goto L_804508E8; } // 8045079C
  c->r[0]=0u+0x00000003u; // 804507A0
  c->r[5]=c->r[1]+0x00000008u; // 804507A4
  W8(c->r[29]+0x00000001u,c->r[0]); // 804507A8
  c->lr=0x804507B0u; f_80459C7C(c); // 804507AC
  cmps(c,0,(int32_t)c->r[3],0); // 804507B0
  if (!crb(c,2)) { goto L_80450830; } // 804507B4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 804507B8
  c->r[0]=R32(c->r[29]+0x00000018u); // 804507BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804507C0
  if (!crb(c,1)) { goto L_804507E8; } // 804507C4
  c->r[6]=R32(c->r[30]+0x00000000u); // 804507C8
  c->r[3]=c->r[30]|c->r[30]; // 804507CC
  c->r[5]=c->r[29]+0x00000014u; // 804507D0
  c->r[4]=0u+0x00000001u; // 804507D4
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804507D8
  c->ctr=c->r[12]; // 804507DC
  if (true) { c->lr=0x804507E4u; dispatch(c,c->ctr); } // 804507E0
  goto L_80450A18; // 804507E4
L_804507E8:;
  c->r[3]=c->r[29]+0x00000014u; // 804507E8
  c->r[6]=c->r[1]+0x00000010u; // 804507EC
  c->r[5]=c->r[3]|c->r[3]; // 804507F0
  c->lr=0x804507F8u; f_804600F0(c); // 804507F4
  c->r[6]=R32(c->r[30]+0x00000000u); // 804507F8
  c->r[3]=c->r[30]|c->r[30]; // 804507FC
  c->r[5]=c->r[29]+0x00000014u; // 80450800
  c->r[4]=0u+0x00000000u; // 80450804
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450808
  c->ctr=c->r[12]; // 8045080C
  if (true) { c->lr=0x80450814u; dispatch(c,c->ctr); } // 80450810
  c->r[6]=R32(c->r[30]+0x00000000u); // 80450814
  c->r[3]=c->r[30]|c->r[30]; // 80450818
  c->r[5]=c->r[1]+0x00000010u; // 8045081C
  c->r[4]=0u+0x00000001u; // 80450820
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450824
  c->ctr=c->r[12]; // 80450828
  if (true) { c->lr=0x80450830u; dispatch(c,c->ctr); } // 8045082C
L_80450830:;
  c->r[0]=R32(c->r[29]+0x0000009Cu); // 80450830
  cmps(c,0,(int32_t)c->r[0],0); // 80450834
  if (crb(c,2)) { goto L_80450A18; } // 80450838
  c->r[28]=0u+0x80000000u; // 8045083C
L_80450840:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80450840
  c->r[3]=c->r[30]|c->r[30]; // 80450844
  c->r[5]=c->r[28]+0xFFFFFFFFu; // 80450848
  c->r[6]=c->r[29]+0x00000014u; // 8045084C
  c->r[12]=R32(c->r[4]+0x00000018u); // 80450850
  c->r[4]=0u+0x00000001u; // 80450854
  c->ctr=c->r[12]; // 80450858
  if (true) { c->lr=0x80450860u; dispatch(c,c->ctr); } // 8045085C
  c->r[31]=R32(c->r[29]+0x00000018u); // 80450860
  cmps(c,0,(int32_t)c->r[31],0); // 80450864
  if (crb(c,2)) { goto L_80450A18; } // 80450868
  c->r[27]=0u+0x00000000u; // 8045086C
  c->ctr=c->r[31]; // 80450870
  if (!crb(c,1)) { goto L_80450890; } // 80450874
L_80450878:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80450878
  c->r[0]=R8(c->r[3]+c->r[27]); // 8045087C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80450880
  if (!crb(c,2)) { goto L_80450890; } // 80450884
  c->r[27]=c->r[27]+0x00000001u; // 80450888
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80450878; } // 8045088C
L_80450890:;
  c->r[3]=c->r[29]+0x00000014u; // 80450890
  c->r[4]=c->r[27]|c->r[27]; // 80450894
  c->r[5]=c->r[3]|c->r[3]; // 80450898
  c->r[6]=c->r[1]+0x00000010u; // 8045089C
  c->lr=0x804508A4u; f_804600F0(c); // 804508A0
  c->r[6]=R32(c->r[30]+0x00000000u); // 804508A4
  c->r[3]=c->r[30]|c->r[30]; // 804508A8
  c->r[5]=c->r[29]+0x00000014u; // 804508AC
  c->r[4]=0u+0x00000000u; // 804508B0
  c->r[12]=R32(c->r[6]+0x00000020u); // 804508B4
  c->ctr=c->r[12]; // 804508B8
  if (true) { c->lr=0x804508C0u; dispatch(c,c->ctr); } // 804508BC
  c->r[6]=R32(c->r[30]+0x00000000u); // 804508C0
  c->r[3]=c->r[30]|c->r[30]; // 804508C4
  c->r[5]=c->r[1]+0x00000010u; // 804508C8
  c->r[4]=0u+0x00000001u; // 804508CC
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804508D0
  c->ctr=c->r[12]; // 804508D4
  if (true) { c->lr=0x804508DCu; dispatch(c,c->ctr); } // 804508D8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[31]); // 804508DC
  if (!crb(c,0)) { IRQCHK(c); goto L_80450840; } // 804508E0
  goto L_80450A18; // 804508E4
L_804508E8:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 804508E8
  c->lr=0x804508F0u; f_80457588(c); // 804508EC
  c->r[0]=R32(c->r[29]+0x00000034u); // 804508F0
  c->r[28]=c->r[3]|c->r[3]; // 804508F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 804508F8
  if (crb(c,0)) { goto L_80450924; } // 804508FC
  c->r[3]=c->r[31]|c->r[31]; // 80450900
  c->lr=0x80450908u; f_804574A4(c); // 80450904
  cmps(c,0,(int32_t)c->r[3],1); // 80450908
  if (!crb(c,2)) { goto L_8045091C; } // 8045090C
  c->r[0]=R32(c->r[29]+0x000000A8u); // 80450910
  cmps(c,0,(int32_t)c->r[0],1); // 80450914
  if (crb(c,2)) { goto L_80450948; } // 80450918
L_8045091C:;
  c->r[27]=0u+0x00000001u; // 8045091C
  goto L_80450948; // 80450920
L_80450924:;
  c->r[3]=c->r[31]|c->r[31]; // 80450924
  c->lr=0x8045092Cu; f_804574A4(c); // 80450928
  cmps(c,0,(int32_t)c->r[3],10); // 8045092C
  if (!crb(c,2)) { goto L_80450948; } // 80450930
  c->r[3]=R32(c->r[29]+0x00000034u); // 80450934
  c->r[0]=c->r[3]+0x00000240u; // 80450938
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 8045093C
  if (crb(c,0)) { goto L_80450948; } // 80450940
  c->r[27]=0u+0x00000001u; // 80450944
L_80450948:;
  cmps(c,0,(int32_t)c->r[27],0); // 80450948
  if (crb(c,2)) { goto L_80450978; } // 8045094C
  c->r[0]=0u+0x00000003u; // 80450950
  c->r[3]=c->r[30]|c->r[30]; // 80450954
  W8(c->r[29]+0x00000001u,c->r[0]); // 80450958
  c->r[5]=c->r[29]+0x00000014u; // 8045095C
  c->r[4]=0u+0x00000001u; // 80450960
  c->r[6]=R32(c->r[30]+0x00000000u); // 80450964
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450968
  c->ctr=c->r[12]; // 8045096C
  if (true) { c->lr=0x80450974u; dispatch(c,c->ctr); } // 80450970
  goto L_80450A18; // 80450974
L_80450978:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80450978
  c->lr=0x80450980u; f_80457580(c); // 8045097C
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 80450980
  c->r[28]=c->r[3]|c->r[3]; // 80450984
  c->r[4]=0u+0x00000000u; // 80450988
  c->r[5]=R32(c->r[6]+0x00000000u); // 8045098C
  c->r[3]=c->r[6]|c->r[6]; // 80450990
  c->r[12]=R32(c->r[5]+0x00000024u); // 80450994
  c->ctr=c->r[12]; // 80450998
  if (true) { c->lr=0x804509A0u; dispatch(c,c->ctr); } // 8045099C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804509A0
  c->r[0]=c->r[0]+c->r[3]; // 804509A4
  c->r[0]=sraw(c,c->r[0],1); // 804509A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 804509AC
  if (!crb(c,0)) { goto L_804509D4; } // 804509B0
  c->r[6]=R32(c->r[30]+0x00000000u); // 804509B4
  c->r[3]=c->r[30]|c->r[30]; // 804509B8
  c->r[5]=c->r[29]+0x00000014u; // 804509BC
  c->r[4]=0u+0x00000001u; // 804509C0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804509C4
  c->ctr=c->r[12]; // 804509C8
  if (true) { c->lr=0x804509D0u; dispatch(c,c->ctr); } // 804509CC
  goto L_80450A18; // 804509D0
L_804509D4:;
  c->r[3]=c->r[31]|c->r[31]; // 804509D4
  c->lr=0x804509DCu; f_804574A4(c); // 804509D8
  cmps(c,0,(int32_t)c->r[3],10); // 804509DC
  if (!crb(c,2)) { goto L_80450A00; } // 804509E0
  c->r[6]=R32(c->r[30]+0x00000000u); // 804509E4
  c->r[3]=c->r[30]|c->r[30]; // 804509E8
  c->r[5]=c->r[29]+0x00000014u; // 804509EC
  c->r[4]=0u+0x00000001u; // 804509F0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804509F4
  c->ctr=c->r[12]; // 804509F8
  if (true) { c->lr=0x80450A00u; dispatch(c,c->ctr); } // 804509FC
L_80450A00:;
  c->r[4]=R32(c->r[29]+0x00000014u); // 80450A00
  c->r[3]=c->r[31]|c->r[31]; // 80450A04
  c->r[5]=R32(c->r[29]+0x00000018u); // 80450A08
  c->lr=0x80450A10u; f_804577A0(c); // 80450A0C
  c->r[3]=c->r[31]|c->r[31]; // 80450A10
  c->lr=0x80450A18u; f_80457814(c); // 80450A14
L_80450A18:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80450A18
  c->r[0]=R32(c->r[1]+0x00000034u); // 80450A1C
  c->lr=c->r[0]; // 80450A20
  c->r[1]=c->r[1]+0x00000030u; // 80450A24
  return; // 80450A28
}

// fn_80450A2C
void f_80450A2C(Ctx* __restrict c) {
  trace_call(0x80450A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450A2C
  c->r[0]=c->lr; // 80450A30
  W32(c->r[1]+0x00000044u,c->r[0]); // 80450A34
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80450A38
  c->r[29]=c->r[3]|c->r[3]; // 80450A3C
  c->r[25]=R32(c->r[3]+0x00000004u); // 80450A40
  c->r[24]=R32(c->r[3]+0x00000008u); // 80450A44
  c->r[3]=c->r[25]|c->r[25]; // 80450A48
  c->lr=0x80450A50u; f_80457588(c); // 80450A4C
  c->r[28]=c->r[3]|c->r[3]; // 80450A50
  c->r[3]=c->r[25]|c->r[25]; // 80450A54
  c->lr=0x80450A5Cu; f_804578C8(c); // 80450A58
  c->r[31]=c->r[3]|c->r[3]; // 80450A5C
  c->r[3]=c->r[25]|c->r[25]; // 80450A60
  c->lr=0x80450A68u; f_804578D0(c); // 80450A64
  c->r[30]=c->r[3]|c->r[3]; // 80450A68
  c->r[3]=c->r[25]|c->r[25]; // 80450A6C
  c->lr=0x80450A74u; f_804574A4(c); // 80450A70
  cmps(c,0,(int32_t)c->r[3],1); // 80450A74
  if (!crb(c,2)) { goto L_80450A88; } // 80450A78
  c->r[0]=R32(c->r[29]+0x000000A8u); // 80450A7C
  cmps(c,0,(int32_t)c->r[0],1); // 80450A80
  if (crb(c,2)) { goto L_80450AA0; } // 80450A84
L_80450A88:;
  c->r[0]=R32(c->r[29]+0x00000034u); // 80450A88
  c->r[0]=c->r[28]-c->r[0]; // 80450A8C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80450A90
  if (!crb(c,0)) { goto L_80450A9C; } // 80450A94
  c->r[0]=c->r[30]|c->r[30]; // 80450A98
L_80450A9C:;
  c->r[30]=c->r[0]|c->r[0]; // 80450A9C
L_80450AA0:;
  c->r[4]=c->r[31]|c->r[31]; // 80450AA0
  c->r[3]=c->r[29]+0x00000014u; // 80450AA4
  c->r[5]=c->r[1]+0x00000010u; // 80450AA8
  c->r[6]=c->r[1]+0x00000008u; // 80450AAC
  c->lr=0x80450AB4u; f_804600F0(c); // 80450AB0
  c->r[6]=R32(c->r[24]+0x00000000u); // 80450AB4
  c->r[3]=c->r[24]|c->r[24]; // 80450AB8
  c->r[5]=c->r[1]+0x00000010u; // 80450ABC
  c->r[4]=0u+0x00000000u; // 80450AC0
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450AC4
  c->ctr=c->r[12]; // 80450AC8
  if (true) { c->lr=0x80450AD0u; dispatch(c,c->ctr); } // 80450ACC
  c->r[6]=R32(c->r[24]+0x00000000u); // 80450AD0
  c->r[3]=c->r[24]|c->r[24]; // 80450AD4
  c->r[5]=c->r[1]+0x00000008u; // 80450AD8
  c->r[4]=0u+0x00000001u; // 80450ADC
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450AE0
  c->ctr=c->r[12]; // 80450AE4
  if (true) { c->lr=0x80450AECu; dispatch(c,c->ctr); } // 80450AE8
  c->r[27]=c->r[29]|c->r[29]; // 80450AEC
  c->r[28]=c->r[29]+0x0000001Cu; // 80450AF0
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80450AF4
  c->r[24]=0u+0x00000000u; // 80450AF8
  goto L_80450B7C; // 80450AFC
L_80450B00:;
  c->r[3]=c->r[28]|c->r[28]; // 80450B00
  c->r[4]=c->r[26]|c->r[26]; // 80450B04
  c->r[5]=c->r[1]+0x00000010u; // 80450B08
  c->r[6]=c->r[1]+0x00000008u; // 80450B0C
  c->lr=0x80450B14u; f_804600F0(c); // 80450B10
  c->r[12]=R32(c->r[29]+0x00000050u); // 80450B14
  cmps(c,0,(int32_t)c->r[12],0); // 80450B18
  if (crb(c,2)) { goto L_80450B38; } // 80450B1C
  c->r[4]=c->r[24]|c->r[24]; // 80450B20
  c->r[3]=R32(c->r[29]+0x00000054u); // 80450B24
  c->r[5]=R32(c->r[1]+0x00000010u); // 80450B28
  c->r[6]=R32(c->r[1]+0x00000014u); // 80450B2C
  c->ctr=c->r[12]; // 80450B30
  if (true) { c->lr=0x80450B38u; dispatch(c,c->ctr); } // 80450B34
L_80450B38:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80450B38
  c->r[5]=c->r[1]+0x00000010u; // 80450B3C
  c->r[4]=0u+0x00000001u; // 80450B40
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450B44
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450B48
  c->ctr=c->r[12]; // 80450B4C
  if (true) { c->lr=0x80450B54u; dispatch(c,c->ctr); } // 80450B50
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80450B54
  c->r[5]=c->r[1]+0x00000008u; // 80450B58
  c->r[4]=0u+0x00000000u; // 80450B5C
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450B60
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450B64
  c->ctr=c->r[12]; // 80450B68
  if (true) { c->lr=0x80450B70u; dispatch(c,c->ctr); } // 80450B6C
  c->r[28]=c->r[28]+0x00000008u; // 80450B70
  c->r[27]=c->r[27]+0x00000004u; // 80450B74
  c->r[24]=c->r[24]+0x00000001u; // 80450B78
L_80450B7C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80450B7C
  c->lr=0x80450B84u; f_804574B4(c); // 80450B80
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 80450B84
  if (crb(c,0)) { IRQCHK(c); goto L_80450B00; } // 80450B88
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 80450B8C
  c->r[3]=c->r[25]|c->r[25]; // 80450B90
  c->r[0]=R32(c->r[29]+0x00000030u); // 80450B94
  c->r[7]=c->r[4]+c->r[30]; // 80450B98
  c->r[5]=R32(c->r[29]+0x00000034u); // 80450B9C
  c->r[6]=c->r[0]+c->r[31]; // 80450BA0
  c->r[4]=R32(c->r[29]+0x00000040u); // 80450BA4
  c->r[0]=R32(c->r[29]+0x00000044u); // 80450BA8
  c->r[5]=c->r[5]+c->r[30]; // 80450BAC
  c->r[4]=c->r[4]+c->r[30]; // 80450BB0
  W32(c->r[29]+0x0000002Cu,c->r[7]); // 80450BB4
  c->r[0]=c->r[0]+c->r[31]; // 80450BB8
  W32(c->r[29]+0x00000030u,c->r[6]); // 80450BBC
  W32(c->r[29]+0x00000034u,c->r[5]); // 80450BC0
  W32(c->r[29]+0x00000040u,c->r[4]); // 80450BC4
  W32(c->r[29]+0x00000044u,c->r[0]); // 80450BC8
  c->lr=0x80450BD0u; f_80457880(c); // 80450BCC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80450BD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80450BD4
  c->lr=c->r[0]; // 80450BD8
  c->r[1]=c->r[1]+0x00000040u; // 80450BDC
  return; // 80450BE0
}

// fn_80450BE4
void f_80450BE4(Ctx* __restrict c) {
  trace_call(0x80450BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450BE4
  c->r[0]=c->lr; // 80450BE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80450BEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80450BF0
  c->r[31]=c->r[3]|c->r[3]; // 80450BF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80450BF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80450BFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80450C00
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80450C04
  cmps(c,0,(int32_t)c->r[0],0); // 80450C08
  if (!crb(c,1)) { goto L_80450C20; } // 80450C0C
  c->lr=0x80450C14u; f_80458F28(c); // 80450C10
  c->r[3]=c->r[31]|c->r[31]; // 80450C14
  c->lr=0x80450C1Cu; f_80450D44(c); // 80450C18
  c->lr=0x80450C20u; f_80458F2C(c); // 80450C1C
L_80450C20:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 80450C20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80450C24
  cmps(c,0,(int32_t)c->r[0],2); // 80450C28
  if (!crb(c,2)) { goto L_80450CF8; } // 80450C2C
  c->r[28]=R32(c->r[31]+0x00000004u); // 80450C30
  c->r[3]=c->r[28]|c->r[28]; // 80450C34
  c->lr=0x80450C3Cu; f_80457798(c); // 80450C38
  cmps(c,0,(int32_t)c->r[3],0); // 80450C3C
  if (!crb(c,2)) { goto L_80450C4C; } // 80450C40
  c->r[3]=c->r[31]|c->r[31]; // 80450C44
  c->lr=0x80450C4Cu; f_804506C8(c); // 80450C48
L_80450C4C:;
  c->r[3]=c->r[28]|c->r[28]; // 80450C4C
  c->lr=0x80450C54u; f_80457E9C(c); // 80450C50
  c->r[3]=c->r[28]|c->r[28]; // 80450C54
  c->lr=0x80450C5Cu; f_80457798(c); // 80450C58
  cmps(c,0,(int32_t)c->r[3],3); // 80450C5C
  if (!crb(c,2)) { goto L_80450C6C; } // 80450C60
  c->r[3]=c->r[31]|c->r[31]; // 80450C64
  c->lr=0x80450C6Cu; f_80450A2C(c); // 80450C68
L_80450C6C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000098u); // 80450C6C
  cmps(c,0,(int32_t)c->r[0],10); // 80450C70
  if (crb(c,2)) { goto L_80450C98; } // 80450C74
  cmps(c,0,(int32_t)c->r[0],20); // 80450C78
  if (crb(c,2)) { goto L_80450C98; } // 80450C7C
  cmps(c,0,(int32_t)c->r[0],11); // 80450C80
  if (crb(c,2)) { goto L_80450C98; } // 80450C84
  cmps(c,0,(int32_t)c->r[0],12); // 80450C88
  if (crb(c,2)) { goto L_80450C98; } // 80450C8C
  cmps(c,0,(int32_t)c->r[0],15); // 80450C90
  if (!crb(c,2)) { goto L_80450D08; } // 80450C94
L_80450C98:;
  c->r[28]=R32(c->r[31]+0x00000004u); // 80450C98
  c->r[3]=c->r[28]|c->r[28]; // 80450C9C
  c->lr=0x80450CA4u; f_80457588(c); // 80450CA0
  c->r[29]=c->r[3]|c->r[3]; // 80450CA4
  c->r[3]=c->r[28]|c->r[28]; // 80450CA8
  c->lr=0x80450CB0u; f_804578C8(c); // 80450CAC
  c->r[30]=c->r[3]|c->r[3]; // 80450CB0
  c->r[3]=c->r[28]|c->r[28]; // 80450CB4
  c->lr=0x80450CBCu; f_804578D0(c); // 80450CB8
  c->r[0]=R32(c->r[31]+0x00000034u); // 80450CBC
  c->r[5]=c->r[29]-c->r[0]; // 80450CC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 80450CC4
  if (!crb(c,0)) { goto L_80450CD0; } // 80450CC8
  c->r[5]=c->r[3]|c->r[3]; // 80450CCC
L_80450CD0:;
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 80450CD0
  c->r[3]=R32(c->r[31]+0x00000030u); // 80450CD4
  c->r[0]=R32(c->r[31]+0x00000034u); // 80450CD8
  c->r[4]=c->r[4]+c->r[5]; // 80450CDC
  c->r[3]=c->r[3]+c->r[30]; // 80450CE0
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 80450CE4
  c->r[0]=c->r[0]+c->r[5]; // 80450CE8
  W32(c->r[31]+0x00000030u,c->r[3]); // 80450CEC
  W32(c->r[31]+0x00000034u,c->r[0]); // 80450CF0
  goto L_80450D08; // 80450CF4
L_80450CF8:;
  cmps(c,0,(int32_t)c->r[0],1); // 80450CF8
  if (!crb(c,2)) { goto L_80450D08; } // 80450CFC
  c->r[3]=c->r[31]|c->r[31]; // 80450D00
  c->lr=0x80450D08u; f_804502B8(c); // 80450D04
L_80450D08:;
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80450D08
  cmps(c,0,(int32_t)c->r[0],0); // 80450D0C
  if (!crb(c,1)) { goto L_80450D24; } // 80450D10
  c->lr=0x80450D18u; f_80458F28(c); // 80450D14
  c->r[3]=c->r[31]|c->r[31]; // 80450D18
  c->lr=0x80450D20u; f_80450E7C(c); // 80450D1C
  c->lr=0x80450D24u; f_80458F2C(c); // 80450D20
L_80450D24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80450D24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80450D28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80450D2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80450D30
  c->r[28]=R32(c->r[1]+0x00000010u); // 80450D34
  c->lr=c->r[0]; // 80450D38
  c->r[1]=c->r[1]+0x00000020u; // 80450D3C
  return; // 80450D40
}

// fn_80450D44
void f_80450D44(Ctx* __restrict c) {
  trace_call(0x80450D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450D44
  c->r[0]=c->lr; // 80450D48
  W32(c->r[1]+0x00000034u,c->r[0]); // 80450D4C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80450D50
  c->r[31]=c->r[3]|c->r[3]; // 80450D54
  c->r[29]=c->r[31]|c->r[31]; // 80450D58
  c->r[28]=0u+0x00000000u; // 80450D5C
  c->r[30]=0u+0x80000000u; // 80450D60
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80450D64
  c->r[27]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80450D68
  goto L_80450DC8; // 80450D6C
L_80450D70:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80450D70
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 80450D74
  c->r[6]=c->r[1]+0x00000008u; // 80450D78
  c->r[4]=0u+0x00000000u; // 80450D7C
  c->r[7]=R32(c->r[3]+0x00000000u); // 80450D80
  c->r[12]=R32(c->r[7]+0x00000018u); // 80450D84
  c->ctr=c->r[12]; // 80450D88
  if (true) { c->lr=0x80450D90u; dispatch(c,c->ctr); } // 80450D8C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80450D90
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80450D94
  if (!crb(c,0)) { goto L_80450DA0; } // 80450D98
  c->r[0]=c->r[27]|c->r[27]; // 80450D9C
L_80450DA0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80450DA0
  c->r[27]=c->r[0]|c->r[0]; // 80450DA4
  c->r[5]=c->r[1]+0x00000008u; // 80450DA8
  c->r[4]=0u+0x00000000u; // 80450DAC
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450DB0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450DB4
  c->ctr=c->r[12]; // 80450DB8
  if (true) { c->lr=0x80450DC0u; dispatch(c,c->ctr); } // 80450DBC
  c->r[29]=c->r[29]+0x00000004u; // 80450DC0
  c->r[28]=c->r[28]+0x00000001u; // 80450DC4
L_80450DC8:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 80450DC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80450DCC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80450DD0
  if (crb(c,0)) { IRQCHK(c); goto L_80450D70; } // 80450DD4
  c->r[0]=rotl(c->r[27],1)&0x00000001u; // 80450DD8
  c->r[0]=c->r[0]+c->r[27]; // 80450DDC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFEu; cr0(c,c->r[29]); // 80450DE0
  c->r[27]=sraw(c,c->r[0],1); // 80450DE4
  if (!crb(c,1)) { goto L_80450E68; } // 80450DE8
  c->r[30]=c->r[31]|c->r[31]; // 80450DEC
  c->r[28]=0u+0x00000000u; // 80450DF0
  goto L_80450E4C; // 80450DF4
L_80450DF8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80450DF8
  c->r[5]=c->r[29]|c->r[29]; // 80450DFC
  c->r[6]=c->r[1]+0x00000008u; // 80450E00
  c->r[4]=0u+0x00000000u; // 80450E04
  c->r[7]=R32(c->r[3]+0x00000000u); // 80450E08
  c->r[12]=R32(c->r[7]+0x00000018u); // 80450E0C
  c->ctr=c->r[12]; // 80450E10
  if (true) { c->lr=0x80450E18u; dispatch(c,c->ctr); } // 80450E14
  c->r[3]=R32(c->r[1]+0x00000008u); // 80450E18
  c->r[5]=c->r[29]|c->r[29]; // 80450E1C
  c->r[4]=0u+0x00000000u; // 80450E20
  c->lr=0x80450E28u; f_800043EC(c); // 80450E24
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80450E28
  c->r[5]=c->r[1]+0x00000008u; // 80450E2C
  c->r[4]=0u+0x00000001u; // 80450E30
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450E34
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450E38
  c->ctr=c->r[12]; // 80450E3C
  if (true) { c->lr=0x80450E44u; dispatch(c,c->ctr); } // 80450E40
  c->r[30]=c->r[30]+0x00000004u; // 80450E44
  c->r[28]=c->r[28]+0x00000001u; // 80450E48
L_80450E4C:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 80450E4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80450E50
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80450E54
  if (crb(c,0)) { IRQCHK(c); goto L_80450DF8; } // 80450E58
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80450E5C
  c->r[0]=c->r[0]-c->r[27]; // 80450E60
  W32(c->r[31]+0x000000A0u,c->r[0]); // 80450E64
L_80450E68:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80450E68
  c->r[0]=R32(c->r[1]+0x00000034u); // 80450E6C
  c->lr=c->r[0]; // 80450E70
  c->r[1]=c->r[1]+0x00000030u; // 80450E74
  return; // 80450E78
}

// fn_80450E7C
void f_80450E7C(Ctx* __restrict c) {
  trace_call(0x80450E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450E7C
  c->r[0]=c->lr; // 80450E80
  W32(c->r[1]+0x00000034u,c->r[0]); // 80450E84
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80450E88
  c->r[31]=c->r[3]|c->r[3]; // 80450E8C
  c->r[29]=c->r[31]|c->r[31]; // 80450E90
  c->r[28]=0u+0x00000000u; // 80450E94
  c->r[30]=0u+0x80000000u; // 80450E98
  c->r[0]=R32(c->r[3]+0x000000A4u); // 80450E9C
  c->r[27]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80450EA0
  goto L_80450F00; // 80450EA4
L_80450EA8:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80450EA8
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 80450EAC
  c->r[6]=c->r[1]+0x00000008u; // 80450EB0
  c->r[4]=0u+0x00000001u; // 80450EB4
  c->r[7]=R32(c->r[3]+0x00000000u); // 80450EB8
  c->r[12]=R32(c->r[7]+0x00000018u); // 80450EBC
  c->ctr=c->r[12]; // 80450EC0
  if (true) { c->lr=0x80450EC8u; dispatch(c,c->ctr); } // 80450EC4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80450EC8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80450ECC
  if (!crb(c,0)) { goto L_80450ED8; } // 80450ED0
  c->r[0]=c->r[27]|c->r[27]; // 80450ED4
L_80450ED8:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80450ED8
  c->r[27]=c->r[0]|c->r[0]; // 80450EDC
  c->r[5]=c->r[1]+0x00000008u; // 80450EE0
  c->r[4]=0u+0x00000001u; // 80450EE4
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450EE8
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80450EEC
  c->ctr=c->r[12]; // 80450EF0
  if (true) { c->lr=0x80450EF8u; dispatch(c,c->ctr); } // 80450EF4
  c->r[29]=c->r[29]+0x00000004u; // 80450EF8
  c->r[28]=c->r[28]+0x00000001u; // 80450EFC
L_80450F00:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 80450F00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80450F04
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80450F08
  if (crb(c,0)) { IRQCHK(c); goto L_80450EA8; } // 80450F0C
  c->r[0]=rotl(c->r[27],1)&0x00000001u; // 80450F10
  c->r[0]=c->r[0]+c->r[27]; // 80450F14
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFEu; cr0(c,c->r[29]); // 80450F18
  c->r[27]=sraw(c,c->r[0],1); // 80450F1C
  if (!crb(c,1)) { goto L_80450F90; } // 80450F20
  c->r[30]=c->r[31]|c->r[31]; // 80450F24
  c->r[28]=0u+0x00000000u; // 80450F28
  goto L_80450F74; // 80450F2C
L_80450F30:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80450F30
  c->r[5]=c->r[29]|c->r[29]; // 80450F34
  c->r[6]=c->r[1]+0x00000008u; // 80450F38
  c->r[4]=0u+0x00000001u; // 80450F3C
  c->r[7]=R32(c->r[3]+0x00000000u); // 80450F40
  c->r[12]=R32(c->r[7]+0x00000018u); // 80450F44
  c->ctr=c->r[12]; // 80450F48
  if (true) { c->lr=0x80450F50u; dispatch(c,c->ctr); } // 80450F4C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80450F50
  c->r[5]=c->r[1]+0x00000008u; // 80450F54
  c->r[4]=0u+0x00000000u; // 80450F58
  c->r[6]=R32(c->r[3]+0x00000000u); // 80450F5C
  c->r[12]=R32(c->r[6]+0x00000020u); // 80450F60
  c->ctr=c->r[12]; // 80450F64
  if (true) { c->lr=0x80450F6Cu; dispatch(c,c->ctr); } // 80450F68
  c->r[30]=c->r[30]+0x00000004u; // 80450F6C
  c->r[28]=c->r[28]+0x00000001u; // 80450F70
L_80450F74:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 80450F74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80450F78
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80450F7C
  if (crb(c,0)) { IRQCHK(c); goto L_80450F30; } // 80450F80
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80450F84
  c->r[0]=c->r[0]-c->r[27]; // 80450F88
  W32(c->r[31]+0x000000A4u,c->r[0]); // 80450F8C
L_80450F90:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80450F90
  c->r[0]=R32(c->r[1]+0x00000034u); // 80450F94
  c->lr=c->r[0]; // 80450F98
  c->r[1]=c->r[1]+0x00000030u; // 80450F9C
  return; // 80450FA0
}

// fn_80450FA4
void f_80450FA4(Ctx* __restrict c) {
  trace_call(0x80450FA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80450FA4
  c->r[0]=c->lr; // 80450FA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80450FAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80450FB0
  c->r[27]=0u+0x807E0000u; // 80450FB4
  c->r[27]=c->r[27]+0x000031C0u; // 80450FB8
  c->r[12]=R32(c->r[27]+0x00000004u); // 80450FBC
  cmps(c,0,(int32_t)c->r[12],0); // 80450FC0
  if (crb(c,2)) { goto L_80450FD4; } // 80450FC4
  c->r[3]=R32(c->r[27]+0x00000008u); // 80450FC8
  c->ctr=c->r[12]; // 80450FCC
  if (true) { c->lr=0x80450FD4u; dispatch(c,c->ctr); } // 80450FD0
L_80450FD4:;
  c->r[31]=c->r[27]+0x00000018u; // 80450FD4
  c->r[30]=0u+0x00000000u; // 80450FD8
L_80450FDC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80450FDC
  cmps(c,0,(int32_t)c->r[0],1); // 80450FE0
  if (!crb(c,2)) { goto L_80451108; } // 80450FE4
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80450FE8
  cmps(c,0,(int32_t)c->r[0],0); // 80450FEC
  if (!crb(c,1)) { goto L_80451004; } // 80450FF0
  c->lr=0x80450FF8u; f_80458F28(c); // 80450FF4
  c->r[3]=c->r[31]|c->r[31]; // 80450FF8
  c->lr=0x80451000u; f_80450D44(c); // 80450FFC
  c->lr=0x80451004u; f_80458F2C(c); // 80451000
L_80451004:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 80451004
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80451008
  cmps(c,0,(int32_t)c->r[0],2); // 8045100C
  if (!crb(c,2)) { goto L_804510DC; } // 80451010
  c->r[28]=R32(c->r[31]+0x00000004u); // 80451014
  c->r[3]=c->r[28]|c->r[28]; // 80451018
  c->lr=0x80451020u; f_80457798(c); // 8045101C
  cmps(c,0,(int32_t)c->r[3],0); // 80451020
  if (!crb(c,2)) { goto L_80451030; } // 80451024
  c->r[3]=c->r[31]|c->r[31]; // 80451028
  c->lr=0x80451030u; f_804506C8(c); // 8045102C
L_80451030:;
  c->r[3]=c->r[28]|c->r[28]; // 80451030
  c->lr=0x80451038u; f_80457E9C(c); // 80451034
  c->r[3]=c->r[28]|c->r[28]; // 80451038
  c->lr=0x80451040u; f_80457798(c); // 8045103C
  cmps(c,0,(int32_t)c->r[3],3); // 80451040
  if (!crb(c,2)) { goto L_80451050; } // 80451044
  c->r[3]=c->r[31]|c->r[31]; // 80451048
  c->lr=0x80451050u; f_80450A2C(c); // 8045104C
L_80451050:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000098u); // 80451050
  cmps(c,0,(int32_t)c->r[0],10); // 80451054
  if (crb(c,2)) { goto L_8045107C; } // 80451058
  cmps(c,0,(int32_t)c->r[0],20); // 8045105C
  if (crb(c,2)) { goto L_8045107C; } // 80451060
  cmps(c,0,(int32_t)c->r[0],11); // 80451064
  if (crb(c,2)) { goto L_8045107C; } // 80451068
  cmps(c,0,(int32_t)c->r[0],12); // 8045106C
  if (crb(c,2)) { goto L_8045107C; } // 80451070
  cmps(c,0,(int32_t)c->r[0],15); // 80451074
  if (!crb(c,2)) { goto L_804510EC; } // 80451078
L_8045107C:;
  c->r[26]=R32(c->r[31]+0x00000004u); // 8045107C
  c->r[3]=c->r[26]|c->r[26]; // 80451080
  c->lr=0x80451088u; f_80457588(c); // 80451084
  c->r[28]=c->r[3]|c->r[3]; // 80451088
  c->r[3]=c->r[26]|c->r[26]; // 8045108C
  c->lr=0x80451094u; f_804578C8(c); // 80451090
  c->r[29]=c->r[3]|c->r[3]; // 80451094
  c->r[3]=c->r[26]|c->r[26]; // 80451098
  c->lr=0x804510A0u; f_804578D0(c); // 8045109C
  c->r[0]=R32(c->r[31]+0x00000034u); // 804510A0
  c->r[4]=c->r[28]-c->r[0]; // 804510A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 804510A8
  if (!crb(c,0)) { goto L_804510B4; } // 804510AC
  c->r[4]=c->r[3]|c->r[3]; // 804510B0
L_804510B4:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 804510B4
  c->r[0]=c->r[0]+c->r[4]; // 804510B8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 804510BC
  c->r[0]=R32(c->r[31]+0x00000030u); // 804510C0
  c->r[0]=c->r[0]+c->r[29]; // 804510C4
  W32(c->r[31]+0x00000030u,c->r[0]); // 804510C8
  c->r[0]=R32(c->r[31]+0x00000034u); // 804510CC
  c->r[0]=c->r[0]+c->r[4]; // 804510D0
  W32(c->r[31]+0x00000034u,c->r[0]); // 804510D4
  goto L_804510EC; // 804510D8
L_804510DC:;
  cmps(c,0,(int32_t)c->r[0],1); // 804510DC
  if (!crb(c,2)) { goto L_804510EC; } // 804510E0
  c->r[3]=c->r[31]|c->r[31]; // 804510E4
  c->lr=0x804510ECu; f_804502B8(c); // 804510E8
L_804510EC:;
  c->r[0]=R32(c->r[31]+0x000000A4u); // 804510EC
  cmps(c,0,(int32_t)c->r[0],0); // 804510F0
  if (!crb(c,1)) { goto L_80451108; } // 804510F4
  c->lr=0x804510FCu; f_80458F28(c); // 804510F8
  c->r[3]=c->r[31]|c->r[31]; // 804510FC
  c->lr=0x80451104u; f_80450E7C(c); // 80451100
  c->lr=0x80451108u; f_80458F2C(c); // 80451104
L_80451108:;
  c->r[30]=c->r[30]+0x00000001u; // 80451108
  c->r[31]=c->r[31]+0x000000ACu; // 8045110C
  cmps(c,0,(int32_t)c->r[30],16); // 80451110
  if (crb(c,0)) { IRQCHK(c); goto L_80450FDC; } // 80451114
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 80451118
  cmps(c,0,(int32_t)c->r[12],0); // 8045111C
  if (crb(c,2)) { goto L_80451130; } // 80451120
  c->r[3]=R32(c->r[27]+0x00000010u); // 80451124
  c->ctr=c->r[12]; // 80451128
  if (true) { c->lr=0x80451130u; dispatch(c,c->ctr); } // 8045112C
L_80451130:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80451130
  c->r[0]=R32(c->r[1]+0x00000024u); // 80451134
  c->lr=c->r[0]; // 80451138
  c->r[1]=c->r[1]+0x00000020u; // 8045113C
  return; // 80451140
}

// fn_80451144
void f_80451144(Ctx* __restrict c) {
  trace_call(0x80451144u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 80451144
  return; // 80451148
}

// fn_8045114C
void f_8045114C(Ctx* __restrict c) {
  trace_call(0x8045114Cu);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8045114C
  return; // 80451150
}

// fn_80451154
void f_80451154(Ctx* __restrict c) {
  trace_call(0x80451154u);
  W32(c->r[3]+0x00000034u,c->r[4]); // 80451154
  return; // 80451158
}

// fn_8045115C
void f_8045115C(Ctx* __restrict c) {
  trace_call(0x8045115Cu);
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 8045115C
  return; // 80451160
}

// fn_80451164
void f_80451164(Ctx* __restrict c) {
  trace_call(0x80451164u);
  W32(c->r[3]+0x00000048u,c->r[4]); // 80451164
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 80451168
  return; // 8045116C
}

// fn_80451170
void f_80451170(Ctx* __restrict c) {
  trace_call(0x80451170u);
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 80451170
  return; // 80451174
}

// fn_80451178
void f_80451178(Ctx* __restrict c) {
  trace_call(0x80451178u);
  W32(c->r[3]+0x00000040u,c->r[4]); // 80451178
  return; // 8045117C
}

// fn_80451180
void f_80451180(Ctx* __restrict c) {
  trace_call(0x80451180u);
  W32(c->r[3]+0x00000044u,c->r[4]); // 80451180
  return; // 80451184
}

// fn_80451188
void f_80451188(Ctx* __restrict c) {
  trace_call(0x80451188u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80451188
  f_804574A4(c); return; // 8045118C
}

// fn_80451190
void f_80451190(Ctx* __restrict c) {
  trace_call(0x80451190u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80451190
  f_804574AC(c); return; // 80451194
}

// fn_80451198
void f_80451198(Ctx* __restrict c) {
  trace_call(0x80451198u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80451198
  f_804574B4(c); return; // 8045119C
}

// fn_804511A0
void f_804511A0(Ctx* __restrict c) {
  trace_call(0x804511A0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511A0
  f_80457514(c); return; // 804511A4
}

// fn_804511A8
void f_804511A8(Ctx* __restrict c) {
  trace_call(0x804511A8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511A8
  f_80457580(c); return; // 804511AC
}

// fn_804511B0
void f_804511B0(Ctx* __restrict c) {
  trace_call(0x804511B0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511B0
  f_80457588(c); return; // 804511B4
}

// fn_804511B8
void f_804511B8(Ctx* __restrict c) {
  trace_call(0x804511B8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511B8
  f_80457590(c); return; // 804511BC
}

// fn_804511C0
void f_804511C0(Ctx* __restrict c) {
  trace_call(0x804511C0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511C0
  f_80457598(c); return; // 804511C4
}

// fn_804511C8
void f_804511C8(Ctx* __restrict c) {
  trace_call(0x804511C8u);
  cmps(c,0,(int32_t)c->r[3],0); // 804511C8
  if (!crb(c,2)) { goto L_804511D8; } // 804511CC
  c->r[3]=0u+0x00000000u; // 804511D0
  return; // 804511D4
L_804511D8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511D8
  f_804575A0(c); return; // 804511DC
  return; // 804511E0
}

// fn_804511E4
void f_804511E4(Ctx* __restrict c) {
  trace_call(0x804511E4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511E4
  f_804575B8(c); return; // 804511E8
}

// fn_804511EC
void f_804511EC(Ctx* __restrict c) {
  trace_call(0x804511ECu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804511EC
  f_804575C0(c); return; // 804511F0
}

// fn_804511F4
void f_804511F4(Ctx* __restrict c) {
  trace_call(0x804511F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804511F4
  c->r[0]=c->lr; // 804511F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804511FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451200
  c->r[31]=c->r[3]|c->r[3]; // 80451204
  c->r[3]=R32(c->r[3]+0x00000004u); // 80451208
  c->lr=0x80451210u; f_804575C8(c); // 8045120C
  cmps(c,0,(int32_t)c->r[3],0); // 80451210
  if (!crb(c,1)) { goto L_80451238; } // 80451214
  c->r[3]=R8(c->r[31]+0x00000001u); // 80451218
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8045121C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80451220
  cmpu(c,0,c->r[0],0x00000001u); // 80451224
  if (crb(c,1)) { goto L_80451238; } // 80451228
  c->r[3]=R32(c->r[31]+0x00000004u); // 8045122C
  c->lr=0x80451234u; f_804575D0(c); // 80451230
  goto L_8045123C; // 80451234
L_80451238:;
  c->r[3]=0u+0x00000000u; // 80451238
L_8045123C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8045123C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451240
  c->lr=c->r[0]; // 80451244
  c->r[1]=c->r[1]+0x00000010u; // 80451248
  return; // 8045124C
}

// fn_80451250
void f_80451250(Ctx* __restrict c) {
  trace_call(0x80451250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451250
  c->r[0]=c->lr; // 80451254
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8045125C
  c->r[31]=c->r[4]|c->r[4]; // 80451260
  W32(c->r[1]+0x00000008u,c->r[30]); // 80451264
  c->r[30]=c->r[3]|c->r[3]; // 80451268
  c->r[3]=R32(c->r[3]+0x00000004u); // 8045126C
  c->lr=0x80451274u; f_804575C8(c); // 80451270
  cmps(c,0,(int32_t)c->r[3],0); // 80451274
  if (!crb(c,1)) { goto L_804512A0; } // 80451278
  c->r[3]=R8(c->r[30]+0x00000001u); // 8045127C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80451280
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80451284
  cmpu(c,0,c->r[0],0x00000001u); // 80451288
  if (crb(c,1)) { goto L_804512A0; } // 8045128C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80451290
  c->r[4]=c->r[31]|c->r[31]; // 80451294
  c->lr=0x8045129Cu; f_804575D8(c); // 80451298
  goto L_804512A4; // 8045129C
L_804512A0:;
  c->r[3]=0u+0xFFFFFF80u; // 804512A0
L_804512A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804512A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804512A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 804512AC
  c->lr=c->r[0]; // 804512B0
  c->r[1]=c->r[1]+0x00000010u; // 804512B4
  return; // 804512B8
}

// fn_804512BC
void f_804512BC(Ctx* __restrict c) {
  trace_call(0x804512BCu);
  c->r[3]=c->r[3]+0x00000058u; // 804512BC
  return; // 804512C0
}

// fn_804512C4
void f_804512C4(Ctx* __restrict c) {
  trace_call(0x804512C4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804512C4
  f_804575E8(c); return; // 804512C8
}

// fn_804512CC
void f_804512CC(Ctx* __restrict c) {
  trace_call(0x804512CCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 804512CC
  f_80457634(c); return; // 804512D0
}

// fn_804512D4
void f_804512D4(Ctx* __restrict c) {
  trace_call(0x804512D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804512D4
  c->r[0]=c->lr; // 804512D8
  c->r[4]=0u+0x807E0000u; // 804512DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804512E0
  c->r[3]=R32(c->r[4]+0x00003C98u); // 804512E4
  c->r[0]=c->r[3]+0x00000001u; // 804512E8
  cmps(c,0,(int32_t)c->r[0],1); // 804512EC
  W32(c->r[4]+0x00003C98u,c->r[0]); // 804512F0
  if (!crb(c,2)) { goto L_8045130C; } // 804512F4
  c->r[3]=0u+0x807E0000u; // 804512F8
  c->r[4]=0u+0x00000000u; // 804512FC
  c->r[3]=c->r[3]+0x00003CA8u; // 80451300
  c->r[5]=0u+0x00001040u; // 80451304
  c->lr=0x8045130Cu; f_800043EC(c); // 80451308
L_8045130C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8045130C
  c->r[3]=0u+0x00000001u; // 80451310
  c->lr=c->r[0]; // 80451314
  c->r[1]=c->r[1]+0x00000010u; // 80451318
  return; // 8045131C
}

// fn_80451320
void f_80451320(Ctx* __restrict c) {
  trace_call(0x80451320u);
  c->r[3]=0u+0x807E0000u; // 80451320
  c->r[0]=R32(c->r[3]+0x00003C98u); // 80451324
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80451328
  W32(c->r[3]+0x00003C98u,c->r[0]); // 8045132C
  if (!crb(c,2)) return; // 80451330
  c->r[3]=0u+0x807E0000u; // 80451334
  c->r[4]=0u+0x00000000u; // 80451338
  c->r[3]=c->r[3]+0x00003CA8u; // 8045133C
  c->r[5]=0u+0x00001040u; // 80451340
  f_800043EC(c); return; // 80451344
  return; // 80451348
}

// fn_8045134C
void f_8045134C(Ctx* __restrict c) {
  trace_call(0x8045134Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045134C
  c->r[0]=c->lr; // 80451350
  W32(c->r[1]+0x00000024u,c->r[0]); // 80451354
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80451358
  c->r[27]=c->r[3]|c->r[3]; // 8045135C
  c->r[28]=c->r[4]|c->r[4]; // 80451360
  c->r[29]=c->r[5]|c->r[5]; // 80451364
  c->r[30]=c->r[6]|c->r[6]; // 80451368
  c->r[31]=c->r[7]|c->r[7]; // 8045136C
  c->lr=0x80451374u; f_80458F28(c); // 80451370
  c->r[0]=rotl(c->r[30],21)&0xFFE00000u; // 80451374
  c->r[3]=rotl(c->r[30],1)&0x00000001u; // 80451378
  c->r[0]=c->r[0]-c->r[3]; // 8045137C
  c->r[6]=sraw(c,c->r[30],31); // 80451380
  c->r[0]=rotl(c->r[0],11)&0xFFFFFFFFu; // 80451384
  c->r[7]=0u+0x00000000u; // 80451388
  c->r[4]=c->r[0]+c->r[3]; // 8045138C
  c->r[5]=sraw(c,c->r[30],11); // 80451390
  c->r[0]=0u-c->r[4]; // 80451394
  c->r[8]=0u+0x00000001u; // 80451398
  c->r[4]=c->r[0]&~c->r[4]; // 8045139C
  c->r[3]=0u+0x00100000u; // 804513A0
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 804513A4
  cmps(c,0,(int32_t)c->r[31],0); // 804513A8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 804513AC
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 804513B0
  c->r[4]=c->r[5]+c->r[4]; // 804513B4
  c->r[3]=0u+0x00000200u; // 804513B8
  W8(c->r[27]+0x00000001u,c->r[8]); // 804513BC
  W8(c->r[27]+0x00000002u,c->r[7]); // 804513C0
  W32(c->r[27]+0x00000004u,c->r[31]); // 804513C4
  W32(c->r[27]+0x00000008u,c->r[28]); // 804513C8
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 804513CC
  W32(c->r[27]+0x00000014u,c->r[30]); // 804513D0
  W32(c->r[27]+0x00000010u,c->r[6]); // 804513D4
  W32(c->r[27]+0x00000018u,c->r[4]); // 804513D8
  W32(c->r[27]+0x00000030u,c->r[3]); // 804513DC
  W32(c->r[27]+0x0000005Cu,c->r[7]); // 804513E0
  W32(c->r[27]+0x00000060u,c->r[0]); // 804513E4
  W32(c->r[27]+0x00000034u,c->r[4]); // 804513E8
  if (crb(c,2)) { goto L_80451434; } // 804513EC
  c->r[5]=R32(c->r[31]+0x00000000u); // 804513F0
  c->r[3]=c->r[31]|c->r[31]; // 804513F4
  c->r[4]=0u+0x00000001u; // 804513F8
  c->r[12]=R32(c->r[5]+0x00000024u); // 804513FC
  c->ctr=c->r[12]; // 80451400
  if (true) { c->lr=0x80451408u; dispatch(c,c->ctr); } // 80451404
  c->r[5]=R32(c->r[31]+0x00000000u); // 80451408
  c->r[28]=c->r[3]|c->r[3]; // 8045140C
  c->r[3]=c->r[31]|c->r[31]; // 80451410
  c->r[4]=0u+0x00000000u; // 80451414
  c->r[12]=R32(c->r[5]+0x00000024u); // 80451418
  c->ctr=c->r[12]; // 8045141C
  if (true) { c->lr=0x80451424u; dispatch(c,c->ctr); } // 80451420
  c->r[0]=c->r[3]+c->r[28]; // 80451424
  W32(c->r[27]+0x00000044u,c->r[0]); // 80451428
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 8045142C
  W32(c->r[27]+0x00000020u,c->r[0]); // 80451430
L_80451434:;
  c->r[3]=0u+0x00000000u; // 80451434
  c->r[0]=0u+0x00000001u; // 80451438
  W8(c->r[27]+0x00000048u,c->r[3]); // 8045143C
  W8(c->r[27]+0x00000000u,c->r[0]); // 80451440
  c->lr=0x80451448u; f_80458F2C(c); // 80451444
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80451448
  c->r[0]=R32(c->r[1]+0x00000024u); // 8045144C
  c->lr=c->r[0]; // 80451450
  c->r[1]=c->r[1]+0x00000020u; // 80451454
  return; // 80451458
}

// fn_8045145C
void f_8045145C(Ctx* __restrict c) {
  trace_call(0x8045145Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045145C
  c->r[0]=c->lr; // 80451460
  W32(c->r[1]+0x00000024u,c->r[0]); // 80451464
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80451468
  c->r[31]=c->r[3]|c->r[3]; // 8045146C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80451470
  c->r[30]=0u+0x80710000u; // 80451474
  c->r[30]=c->r[30]+0x00004A88u; // 80451478
  W32(c->r[1]+0x00000014u,c->r[29]); // 8045147C
  c->r[29]=c->r[4]|c->r[4]; // 80451480
  c->lr=0x80451488u; f_80458F30(c); // 80451484
  cmps(c,0,(int32_t)c->r[29],256); // 80451488
  if (!crb(c,0)) { goto L_8045150C; } // 8045148C
  c->r[3]=0u+0x807E0000u; // 80451490
  c->r[6]=R32(c->r[30]+0x00000000u); // 80451494
  c->r[0]=R32(c->r[3]+0x00003C9Cu); // 80451498
  c->r[4]=0u+0x807E0000u; // 8045149C
  c->r[4]=c->r[4]+0x00003CA8u; // 804514A0
  c->r[30]=0u+0x00000000u; // 804514A4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)104); // 804514A8
  c->r[5]=0u+0x00000000u; // 804514AC
  c->ctr=c->r[6]; // 804514B0
  cmps(c,0,(int32_t)c->r[6],0); // 804514B4
  if (!crb(c,1)) { goto L_804514D8; } // 804514B8
L_804514BC:;
  c->r[0]=R8(c->r[4]+c->r[3]); // 804514BC
  c->r[30]=c->r[4]+c->r[3]; // 804514C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804514C4
  if (crb(c,2)) { goto L_804514D8; } // 804514C8
  c->r[3]=c->r[3]+0x00000068u; // 804514CC
  c->r[5]=c->r[5]+0x00000001u; // 804514D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804514BC; } // 804514D4
L_804514D8:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 804514D8
  if (!crb(c,2)) { goto L_804514E8; } // 804514DC
  c->r[30]=0u+0x00000000u; // 804514E0
  goto L_80451580; // 804514E4
L_804514E8:;
  c->r[3]=c->r[30]|c->r[30]; // 804514E8
  c->r[7]=c->r[31]|c->r[31]; // 804514EC
  c->r[4]=0u+0x00000000u; // 804514F0
  c->r[5]=0u+0x00000000u; // 804514F4
  c->r[6]=0u+0x00000000u; // 804514F8
  c->lr=0x80451500u; f_8045134C(c); // 804514FC
  c->r[0]=0u+0x00000001u; // 80451500
  W8(c->r[30]+0x00000003u,c->r[0]); // 80451504
  goto L_80451580; // 80451508
L_8045150C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8045150C
  c->r[4]=0u+0x807E0000u; // 80451510
  c->r[6]=R32(c->r[30]+0x00000008u); // 80451514
  c->r[4]=c->r[4]+0x00003CA8u; // 80451518
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)104); // 8045151C
  c->r[30]=0u+0x00000000u; // 80451520
  c->r[5]=0u+0x00000000u; // 80451524
  c->ctr=c->r[6]; // 80451528
  cmps(c,0,(int32_t)c->r[6],0); // 8045152C
  if (!crb(c,1)) { goto L_80451550; } // 80451530
L_80451534:;
  c->r[0]=R8(c->r[4]+c->r[3]); // 80451534
  c->r[30]=c->r[4]+c->r[3]; // 80451538
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8045153C
  if (crb(c,2)) { goto L_80451550; } // 80451540
  c->r[3]=c->r[3]+0x00000068u; // 80451544
  c->r[5]=c->r[5]+0x00000001u; // 80451548
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80451534; } // 8045154C
L_80451550:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 80451550
  if (!crb(c,2)) { goto L_80451560; } // 80451554
  c->r[30]=0u+0x00000000u; // 80451558
  goto L_80451580; // 8045155C
L_80451560:;
  c->r[3]=c->r[30]|c->r[30]; // 80451560
  c->r[7]=c->r[31]|c->r[31]; // 80451564
  c->r[4]=0u+0x00000000u; // 80451568
  c->r[5]=0u+0x00000000u; // 8045156C
  c->r[6]=0u+0x00000000u; // 80451570
  c->lr=0x80451578u; f_8045134C(c); // 80451574
  c->r[0]=0u+0x00000000u; // 80451578
  W8(c->r[30]+0x00000003u,c->r[0]); // 8045157C
L_80451580:;
  c->lr=0x80451584u; f_80458F34(c); // 80451580
  c->r[3]=c->r[30]|c->r[30]; // 80451584
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80451588
  c->r[30]=R32(c->r[1]+0x00000018u); // 8045158C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80451590
  c->r[0]=R32(c->r[1]+0x00000024u); // 80451594
  c->lr=c->r[0]; // 80451598
  c->r[1]=c->r[1]+0x00000020u; // 8045159C
  return; // 804515A0
}

// fn_804515A4
void f_804515A4(Ctx* __restrict c) {
  trace_call(0x804515A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804515A4
  c->r[0]=c->lr; // 804515A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804515AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804515B0
  c->r[31]=c->r[3]|c->r[3]; // 804515B4
  c->lr=0x804515BCu; f_80458F30(c); // 804515B8
  cmps(c,0,(int32_t)c->r[31],0); // 804515BC
  if (crb(c,2)) { goto L_80451694; } // 804515C0
  c->lr=0x804515C8u; f_80458F30(c); // 804515C4
  c->r[3]=c->r[31]|c->r[31]; // 804515C8
  c->lr=0x804515D0u; f_80451B24(c); // 804515CC
  c->lr=0x804515D4u; f_80458F34(c); // 804515D0
  c->lr=0x804515D8u; f_80458F30(c); // 804515D4
  c->lr=0x804515DCu; f_80458F30(c); // 804515D8
  c->r[3]=c->r[31]|c->r[31]; // 804515DC
  c->lr=0x804515E4u; f_80451B24(c); // 804515E0
  c->lr=0x804515E8u; f_80458F34(c); // 804515E4
  c->lr=0x804515ECu; f_80458F30(c); // 804515E8
  c->lr=0x804515F0u; f_80458F30(c); // 804515EC
  c->lr=0x804515F4u; f_80458F28(c); // 804515F0
  c->r[0]=R8(c->r[31]+0x00000001u); // 804515F4
  cmps(c,0,(int32_t)c->r[0],2); // 804515F8
  if (!crb(c,2)) { goto L_8045162C; } // 804515FC
  c->r[0]=R8(c->r[31]+0x00000002u); // 80451600
  cmps(c,0,(int32_t)c->r[0],1); // 80451604
  if (!crb(c,2)) { goto L_8045162C; } // 80451608
  c->r[0]=R8(c->r[31]+0x0000004Bu); // 8045160C
  c->r[3]=0u+0x00000001u; // 80451610
  W8(c->r[31]+0x0000004Cu,c->r[3]); // 80451614
  cmps(c,0,(int32_t)c->r[0],1); // 80451618
  if (!crb(c,2)) { goto L_80451634; } // 8045161C
  c->r[0]=0u+0x00000000u; // 80451620
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 80451624
  goto L_80451634; // 80451628
L_8045162C:;
  c->r[0]=0u+0x00000001u; // 8045162C
  W8(c->r[31]+0x00000001u,c->r[0]); // 80451630
L_80451634:;
  c->lr=0x80451638u; f_80458F2C(c); // 80451634
  c->lr=0x8045163Cu; f_80458F34(c); // 80451638
  c->lr=0x80451640u; f_80458F28(c); // 8045163C
  c->r[0]=R8(c->r[31]+0x0000004Du); // 80451640
  cmps(c,0,(int32_t)c->r[0],1); // 80451644
  if (!crb(c,2)) { goto L_80451654; } // 80451648
  c->r[0]=0u+0x00000001u; // 8045164C
  W8(c->r[31]+0x0000004Au,c->r[0]); // 80451650
L_80451654:;
  c->r[0]=0u+0x00000000u; // 80451654
  W8(c->r[31]+0x00000049u,c->r[0]); // 80451658
  c->lr=0x80451660u; f_80458F2C(c); // 8045165C
  c->lr=0x80451664u; f_80458F34(c); // 80451660
L_80451664:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 80451664
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80451668
  if (crb(c,2)) { goto L_80451678; } // 8045166C
  c->lr=0x80451674u; f_8044FA4C(c); // 80451670
  IRQCHK(c); goto L_80451664; // 80451674
L_80451678:;
  c->lr=0x8045167Cu; f_80458F34(c); // 80451678
  c->r[0]=0u+0x00000000u; // 8045167C
  c->r[3]=c->r[31]|c->r[31]; // 80451680
  W8(c->r[31]+0x00000000u,c->r[0]); // 80451684
  c->r[4]=0u+0x00000000u; // 80451688
  c->r[5]=0u+0x00000068u; // 8045168C
  c->lr=0x80451694u; f_800043EC(c); // 80451690
L_80451694:;
  c->lr=0x80451698u; f_80458F34(c); // 80451694
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8045169C
  c->lr=c->r[0]; // 804516A0
  c->r[1]=c->r[1]+0x00000010u; // 804516A4
  return; // 804516A8
}

// fn_804516AC
void f_804516AC(Ctx* __restrict c) {
  trace_call(0x804516ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804516AC
  c->r[0]=c->lr; // 804516B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804516B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 804516B8
  c->r[26]=c->r[3]|c->r[3]; // 804516BC
  c->r[27]=c->r[4]|c->r[4]; // 804516C0
  c->r[28]=c->r[5]|c->r[5]; // 804516C4
  c->r[29]=c->r[6]|c->r[6]; // 804516C8
  c->r[31]=c->r[7]|c->r[7]; // 804516CC
  c->r[30]=c->r[8]|c->r[8]; // 804516D0
  c->lr=0x804516D8u; f_80458F30(c); // 804516D4
  c->lr=0x804516DCu; f_80458F28(c); // 804516D8
  c->r[3]=0u+0x000007FFu; // 804516DC
  c->r[0]=0u+0x00000001u; // 804516E0
  c->r[6]=addc(c,c->r[30],c->r[3],0); // 804516E4
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 804516E8
  c->r[3]=0u+0x00000000u; // 804516EC
  c->r[5]=addc(c,c->r[31],c->r[3],c->xer_ca); // 804516F0
  c->r[4]=rotl(c->r[6],21)&0xFFFFFFFFu; // 804516F4
  c->r[3]=c->r[5]|c->r[5]; // 804516F8
  W32(c->r[26]+0x00000014u,c->r[30]); // 804516FC
  c->r[3]=(rotl(c->r[6],0)&0x000007FFu)|(c->r[3]&~0x000007FFu); // 80451700
  c->r[4]=(rotl(c->r[5],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 80451704
  c->r[3]=sraw(c,c->r[3],11); // 80451708
  W32(c->r[26]+0x00000010u,c->r[31]); // 8045170C
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 80451710
  W32(c->r[26]+0x00000018u,c->r[4]); // 80451714
  W32(c->r[26]+0x00000054u,c->r[27]); // 80451718
  W32(c->r[26]+0x00000058u,c->r[28]); // 8045171C
  W8(c->r[26]+0x00000049u,c->r[0]); // 80451720
  c->lr=0x80451728u; f_80458F2C(c); // 80451724
  c->lr=0x8045172Cu; f_80458F34(c); // 80451728
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8045172C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80451730
  c->lr=c->r[0]; // 80451734
  c->r[1]=c->r[1]+0x00000020u; // 80451738
  return; // 8045173C
}

// fn_80451740
void f_80451740(Ctx* __restrict c) {
  trace_call(0x80451740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451740
  c->r[0]=c->lr; // 80451744
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8045174C
  c->r[31]=c->r[3]|c->r[3]; // 80451750
  c->lr=0x80451758u; f_80458F30(c); // 80451754
  c->lr=0x8045175Cu; f_80458F30(c); // 80451758
  c->lr=0x80451760u; f_80458F28(c); // 8045175C
  c->r[0]=R8(c->r[31]+0x00000001u); // 80451760
  cmps(c,0,(int32_t)c->r[0],2); // 80451764
  if (!crb(c,2)) { goto L_80451798; } // 80451768
  c->r[0]=R8(c->r[31]+0x00000002u); // 8045176C
  cmps(c,0,(int32_t)c->r[0],1); // 80451770
  if (!crb(c,2)) { goto L_80451798; } // 80451774
  c->r[0]=R8(c->r[31]+0x0000004Bu); // 80451778
  c->r[3]=0u+0x00000001u; // 8045177C
  W8(c->r[31]+0x0000004Cu,c->r[3]); // 80451780
  cmps(c,0,(int32_t)c->r[0],1); // 80451784
  if (!crb(c,2)) { goto L_804517A0; } // 80451788
  c->r[0]=0u+0x00000000u; // 8045178C
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 80451790
  goto L_804517A0; // 80451794
L_80451798:;
  c->r[0]=0u+0x00000001u; // 80451798
  W8(c->r[31]+0x00000001u,c->r[0]); // 8045179C
L_804517A0:;
  c->lr=0x804517A4u; f_80458F2C(c); // 804517A0
  c->lr=0x804517A8u; f_80458F34(c); // 804517A4
  c->lr=0x804517ACu; f_80458F28(c); // 804517A8
  c->r[0]=R8(c->r[31]+0x0000004Du); // 804517AC
  cmps(c,0,(int32_t)c->r[0],1); // 804517B0
  if (!crb(c,2)) { goto L_804517C0; } // 804517B4
  c->r[0]=0u+0x00000001u; // 804517B8
  W8(c->r[31]+0x0000004Au,c->r[0]); // 804517BC
L_804517C0:;
  c->r[0]=0u+0x00000000u; // 804517C0
  W8(c->r[31]+0x00000049u,c->r[0]); // 804517C4
  c->lr=0x804517CCu; f_80458F2C(c); // 804517C8
  c->lr=0x804517D0u; f_80458F34(c); // 804517CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804517D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804517D4
  c->lr=c->r[0]; // 804517D8
  c->r[1]=c->r[1]+0x00000010u; // 804517DC
  return; // 804517E0
}

// fn_804517E4
void f_804517E4(Ctx* __restrict c) {
  trace_call(0x804517E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804517E4
  c->r[0]=c->lr; // 804517E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804517EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804517F0
  c->r[31]=c->r[3]|c->r[3]; // 804517F4
  c->lr=0x804517FCu; f_80458F30(c); // 804517F8
  c->lr=0x80451800u; f_80458F30(c); // 804517FC
  c->r[3]=c->r[31]|c->r[31]; // 80451800
  c->lr=0x80451808u; f_80451B24(c); // 80451804
  c->lr=0x8045180Cu; f_80458F34(c); // 80451808
  c->lr=0x80451810u; f_80458F30(c); // 8045180C
  c->lr=0x80451814u; f_80458F30(c); // 80451810
  c->lr=0x80451818u; f_80458F28(c); // 80451814
  c->r[0]=R8(c->r[31]+0x00000001u); // 80451818
  cmps(c,0,(int32_t)c->r[0],2); // 8045181C
  if (!crb(c,2)) { goto L_80451850; } // 80451820
  c->r[0]=R8(c->r[31]+0x00000002u); // 80451824
  cmps(c,0,(int32_t)c->r[0],1); // 80451828
  if (!crb(c,2)) { goto L_80451850; } // 8045182C
  c->r[0]=R8(c->r[31]+0x0000004Bu); // 80451830
  c->r[3]=0u+0x00000001u; // 80451834
  W8(c->r[31]+0x0000004Cu,c->r[3]); // 80451838
  cmps(c,0,(int32_t)c->r[0],1); // 8045183C
  if (!crb(c,2)) { goto L_80451858; } // 80451840
  c->r[0]=0u+0x00000000u; // 80451844
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 80451848
  goto L_80451858; // 8045184C
L_80451850:;
  c->r[0]=0u+0x00000001u; // 80451850
  W8(c->r[31]+0x00000001u,c->r[0]); // 80451854
L_80451858:;
  c->lr=0x8045185Cu; f_80458F2C(c); // 80451858
  c->lr=0x80451860u; f_80458F34(c); // 8045185C
  c->lr=0x80451864u; f_80458F28(c); // 80451860
  c->r[0]=R8(c->r[31]+0x0000004Du); // 80451864
  cmps(c,0,(int32_t)c->r[0],1); // 80451868
  if (!crb(c,2)) { goto L_80451878; } // 8045186C
  c->r[0]=0u+0x00000001u; // 80451870
  W8(c->r[31]+0x0000004Au,c->r[0]); // 80451874
L_80451878:;
  c->r[0]=0u+0x00000000u; // 80451878
  W8(c->r[31]+0x00000049u,c->r[0]); // 8045187C
  c->lr=0x80451884u; f_80458F2C(c); // 80451880
  c->lr=0x80451888u; f_80458F34(c); // 80451884
L_80451888:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 80451888
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8045188C
  if (crb(c,2)) { goto L_8045189C; } // 80451890
  c->lr=0x80451898u; f_8044FA4C(c); // 80451894
  IRQCHK(c); goto L_80451888; // 80451898
L_8045189C:;
  c->lr=0x804518A0u; f_80458F34(c); // 8045189C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804518A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804518A4
  c->lr=c->r[0]; // 804518A8
  c->r[1]=c->r[1]+0x00000010u; // 804518AC
  return; // 804518B0
}

// fn_804518B4
void f_804518B4(Ctx* __restrict c) {
  trace_call(0x804518B4u);
  c->r[0]=R8(c->r[3]+0x00000049u); // 804518B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804518B8
  if (crb(c,2)) { goto L_804518C8; } // 804518BC
  c->r[3]=0u+0x00000000u; // 804518C0
  return; // 804518C4
L_804518C8:;
  c->r[0]=R8(c->r[3]+0x0000004Du); // 804518C8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804518CC
  c->r[0]=0u-c->r[3]; // 804518D0
  c->r[0]=c->r[0]|c->r[3]; // 804518D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804518D8
  return; // 804518DC
}

// fn_804518E0
void f_804518E0(Ctx* __restrict c) {
  trace_call(0x804518E0u);
  c->r[0]=R8(c->r[3]+0x00000049u); // 804518E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804518E4
  if (!crb(c,2)) { goto L_80451900; } // 804518E8
  c->r[0]=R8(c->r[3]+0x0000004Du); // 804518EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804518F0
  if (!crb(c,2)) { goto L_80451900; } // 804518F4
  c->r[3]=0u+0x00000000u; // 804518F8
  return; // 804518FC
L_80451900:;
  c->r[3]=0u+0x00000001u; // 80451900
  return; // 80451904
}

// fn_80451908
void f_80451908(Ctx* __restrict c) {
  trace_call(0x80451908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451908
  c->r[0]=c->lr; // 8045190C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451914
  c->r[31]=c->r[3]|c->r[3]; // 80451918
  c->lr=0x80451920u; f_80458F30(c); // 8045191C
  c->r[31]=R8(c->r[31]+0x00000001u); // 80451920
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80451924
  c->lr=0x8045192Cu; f_80458F34(c); // 80451928
  c->r[3]=c->r[31]|c->r[31]; // 8045192C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451930
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451934
  c->lr=c->r[0]; // 80451938
  c->r[1]=c->r[1]+0x00000010u; // 8045193C
  return; // 80451940
}

// fn_80451944
void f_80451944(Ctx* __restrict c) {
  trace_call(0x80451944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451944
  c->r[0]=c->lr; // 80451948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8045194C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451950
  c->r[31]=c->r[4]|c->r[4]; // 80451954
  W32(c->r[1]+0x00000008u,c->r[30]); // 80451958
  c->r[30]=c->r[3]|c->r[3]; // 8045195C
  c->lr=0x80451964u; f_80458F30(c); // 80451960
  c->r[0]=R32(c->r[30]+0x00000018u); // 80451964
  W32(c->r[30]+0x0000005Cu,c->r[31]); // 80451968
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8045196C
  if (!crb(c,1)) { goto L_80451978; } // 80451970
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 80451974
L_80451978:;
  c->r[31]=R32(c->r[30]+0x0000005Cu); // 80451978
  c->lr=0x80451980u; f_80458F34(c); // 8045197C
  c->r[3]=c->r[31]|c->r[31]; // 80451980
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451984
  c->r[30]=R32(c->r[1]+0x00000008u); // 80451988
  c->r[0]=R32(c->r[1]+0x00000014u); // 8045198C
  c->lr=c->r[0]; // 80451990
  c->r[1]=c->r[1]+0x00000010u; // 80451994
  return; // 80451998
}

// fn_8045199C
void f_8045199C(Ctx* __restrict c) {
  trace_call(0x8045199Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045199C
  c->r[0]=c->lr; // 804519A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804519A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804519A8
  c->r[31]=c->r[3]|c->r[3]; // 804519AC
  c->lr=0x804519B4u; f_80458F30(c); // 804519B0
  c->r[0]=R32(c->r[31]+0x00000008u); // 804519B4
  cmps(c,0,(int32_t)c->r[0],0); // 804519B8
  if (crb(c,2)) { goto L_804519C8; } // 804519BC
  c->r[31]=R32(c->r[31]+0x0000005Cu); // 804519C0
  goto L_804519CC; // 804519C4
L_804519C8:;
  c->r[31]=0u+0x00000000u; // 804519C8
L_804519CC:;
  c->lr=0x804519D0u; f_80458F34(c); // 804519CC
  c->r[3]=c->r[31]|c->r[31]; // 804519D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804519D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804519D8
  c->lr=c->r[0]; // 804519DC
  c->r[1]=c->r[1]+0x00000010u; // 804519E0
  return; // 804519E4
}

// fn_804519E8
void f_804519E8(Ctx* __restrict c) {
  trace_call(0x804519E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804519E8
  c->r[0]=c->lr; // 804519EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804519F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804519F4
  c->r[31]=c->r[3]|c->r[3]; // 804519F8
  c->lr=0x80451A00u; f_80458F30(c); // 804519FC
  c->lr=0x80451A04u; f_80458F28(c); // 80451A00
  c->r[0]=R32(c->r[31]+0x00000018u); // 80451A04
  c->r[3]=0u+0x00000000u; // 80451A08
  W32(c->r[31]+0x00000038u,c->r[3]); // 80451A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80451A10
  W32(c->r[31]+0x00000050u,c->r[3]); // 80451A14
  if (!crb(c,2)) { goto L_80451A28; } // 80451A18
  c->r[0]=0u+0x00000003u; // 80451A1C
  W8(c->r[31]+0x00000001u,c->r[0]); // 80451A20
  goto L_80451A30; // 80451A24
L_80451A28:;
  c->r[0]=0u+0x00000002u; // 80451A28
  W8(c->r[31]+0x00000001u,c->r[0]); // 80451A2C
L_80451A30:;
  c->r[3]=0u+0x00100000u; // 80451A30
  c->r[4]=0u+0x00000000u; // 80451A34
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80451A38
  W8(c->r[31]+0x00000002u,c->r[4]); // 80451A3C
  c->r[3]=0u+0x00000001u; // 80451A40
  W32(c->r[31]+0x00000028u,c->r[4]); // 80451A44
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 80451A48
  W8(c->r[31]+0x0000004Bu,c->r[3]); // 80451A4C
  W32(c->r[31]+0x00000060u,c->r[0]); // 80451A50
  c->lr=0x80451A58u; f_80458F2C(c); // 80451A54
  c->lr=0x80451A5Cu; f_80458F34(c); // 80451A58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451A5C
  c->r[3]=0u+0x00000001u; // 80451A60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451A64
  c->lr=c->r[0]; // 80451A68
  c->r[1]=c->r[1]+0x00000010u; // 80451A6C
  return; // 80451A70
}

// fn_80451A74
void f_80451A74(Ctx* __restrict c) {
  trace_call(0x80451A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451A74
  c->r[0]=c->lr; // 80451A78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451A80
  c->r[31]=c->r[3]|c->r[3]; // 80451A84
  c->lr=0x80451A8Cu; f_80458F30(c); // 80451A88
  c->lr=0x80451A90u; f_80458F28(c); // 80451A8C
  c->r[0]=R8(c->r[31]+0x00000001u); // 80451A90
  cmps(c,0,(int32_t)c->r[0],2); // 80451A94
  if (!crb(c,2)) { goto L_80451AC8; } // 80451A98
  c->r[0]=R8(c->r[31]+0x00000002u); // 80451A9C
  cmps(c,0,(int32_t)c->r[0],1); // 80451AA0
  if (!crb(c,2)) { goto L_80451AC8; } // 80451AA4
  c->r[0]=R8(c->r[31]+0x0000004Bu); // 80451AA8
  c->r[3]=0u+0x00000001u; // 80451AAC
  W8(c->r[31]+0x0000004Cu,c->r[3]); // 80451AB0
  cmps(c,0,(int32_t)c->r[0],1); // 80451AB4
  if (!crb(c,2)) { goto L_80451AD0; } // 80451AB8
  c->r[0]=0u+0x00000000u; // 80451ABC
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 80451AC0
  goto L_80451AD0; // 80451AC4
L_80451AC8:;
  c->r[0]=0u+0x00000001u; // 80451AC8
  W8(c->r[31]+0x00000001u,c->r[0]); // 80451ACC
L_80451AD0:;
  c->lr=0x80451AD4u; f_80458F2C(c); // 80451AD0
  c->lr=0x80451AD8u; f_80458F34(c); // 80451AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451AD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451ADC
  c->lr=c->r[0]; // 80451AE0
  c->r[1]=c->r[1]+0x00000010u; // 80451AE4
  return; // 80451AE8
}

// fn_80451AEC
void f_80451AEC(Ctx* __restrict c) {
  trace_call(0x80451AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451AEC
  c->r[0]=c->lr; // 80451AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451AF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451AF8
  c->r[31]=c->r[3]|c->r[3]; // 80451AFC
  c->lr=0x80451B04u; f_80458F30(c); // 80451B00
  c->r[3]=c->r[31]|c->r[31]; // 80451B04
  c->lr=0x80451B0Cu; f_80451B24(c); // 80451B08
  c->lr=0x80451B10u; f_80458F34(c); // 80451B0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451B10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451B14
  c->lr=c->r[0]; // 80451B18
  c->r[1]=c->r[1]+0x00000010u; // 80451B1C
  return; // 80451B20
}

// fn_80451B24
void f_80451B24(Ctx* __restrict c) {
  trace_call(0x80451B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451B24
  c->r[0]=c->lr; // 80451B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80451B2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80451B30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80451B34
  W32(c->r[1]+0x00000014u,c->r[29]); // 80451B38
  c->r[29]=c->r[3]|c->r[3]; // 80451B3C
  c->r[4]=R32(c->r[3]+0x00000008u); // 80451B40
  cmps(c,0,(int32_t)c->r[4],0); // 80451B44
  if (crb(c,2)) { goto L_80451B60; } // 80451B48
  c->r[0]=R8(c->r[3]+0x0000004Au); // 80451B4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80451B50
  if (!crb(c,2)) { goto L_80451B60; } // 80451B54
  c->r[3]=c->r[4]|c->r[4]; // 80451B58
  c->lr=0x80451B60u; f_8045B014(c); // 80451B5C
L_80451B60:;
  c->lr=0x80451B64u; f_80458F28(c); // 80451B60
  c->r[31]=0u+0x00000000u; // 80451B64
  c->r[30]=0u+0x00000001u; // 80451B68
  W8(c->r[29]+0x00000001u,c->r[30]); // 80451B6C
  W8(c->r[29]+0x00000002u,c->r[31]); // 80451B70
  W32(c->r[29]+0x00000028u,c->r[31]); // 80451B74
  c->lr=0x80451B7Cu; f_80458F2C(c); // 80451B78
  c->lr=0x80451B80u; f_80458F30(c); // 80451B7C
  c->lr=0x80451B84u; f_80458F28(c); // 80451B80
  c->r[0]=R8(c->r[29]+0x00000001u); // 80451B84
  cmps(c,0,(int32_t)c->r[0],2); // 80451B88
  if (!crb(c,2)) { goto L_80451BB4; } // 80451B8C
  c->r[0]=R8(c->r[29]+0x00000002u); // 80451B90
  cmps(c,0,(int32_t)c->r[0],1); // 80451B94
  if (!crb(c,2)) { goto L_80451BB4; } // 80451B98
  c->r[0]=R8(c->r[29]+0x0000004Bu); // 80451B9C
  W8(c->r[29]+0x0000004Cu,c->r[30]); // 80451BA0
  cmps(c,0,(int32_t)c->r[0],1); // 80451BA4
  if (!crb(c,2)) { goto L_80451BBC; } // 80451BA8
  W8(c->r[29]+0x0000004Bu,c->r[31]); // 80451BAC
  goto L_80451BBC; // 80451BB0
L_80451BB4:;
  c->r[0]=0u+0x00000001u; // 80451BB4
  W8(c->r[29]+0x00000001u,c->r[0]); // 80451BB8
L_80451BBC:;
  c->lr=0x80451BC0u; f_80458F2C(c); // 80451BBC
  c->lr=0x80451BC4u; f_80458F34(c); // 80451BC0
L_80451BC4:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 80451BC4
  cmps(c,0,(int32_t)c->r[0],1); // 80451BC8
  if (!crb(c,2)) { goto L_80451BDC; } // 80451BCC
  c->r[0]=R32(c->r[29]+0x00000028u); // 80451BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80451BD4
  if (crb(c,2)) { goto L_80451BE4; } // 80451BD8
L_80451BDC:;
  c->lr=0x80451BE0u; f_8044FA4C(c); // 80451BDC
  IRQCHK(c); goto L_80451BC4; // 80451BE0
L_80451BE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80451BE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80451BE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80451BEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80451BF0
  c->lr=c->r[0]; // 80451BF4
  c->r[1]=c->r[1]+0x00000020u; // 80451BF8
  return; // 80451BFC
}

// fn_80451C00
void f_80451C00(Ctx* __restrict c) {
  trace_call(0x80451C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451C00
  c->r[0]=c->lr; // 80451C04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80451C08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80451C0C
  c->r[31]=c->r[5]|c->r[5]; // 80451C10
  W32(c->r[1]+0x00000018u,c->r[30]); // 80451C14
  c->r[30]=c->r[4]|c->r[4]; // 80451C18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80451C1C
  c->r[29]=c->r[3]|c->r[3]; // 80451C20
  c->lr=0x80451C28u; f_80458F30(c); // 80451C24
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 80451C28
  W32(c->r[29]+0x00000040u,c->r[31]); // 80451C2C
  c->lr=0x80451C34u; f_80458F34(c); // 80451C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80451C34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80451C38
  c->r[30]=R32(c->r[1]+0x00000018u); // 80451C3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80451C40
  c->lr=c->r[0]; // 80451C44
  c->r[1]=c->r[1]+0x00000020u; // 80451C48
  return; // 80451C4C
}

// fn_80451C50
void f_80451C50(Ctx* __restrict c) {
  trace_call(0x80451C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451C50
  c->r[0]=c->lr; // 80451C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80451C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80451C5C
  c->r[31]=c->r[4]|c->r[4]; // 80451C60
  W32(c->r[1]+0x00000008u,c->r[30]); // 80451C64
  c->r[30]=c->r[3]|c->r[3]; // 80451C68
  c->lr=0x80451C70u; f_80458F30(c); // 80451C6C
  cmps(c,0,(int32_t)c->r[31],0); // 80451C70
  if (crb(c,0)) { goto L_80451C80; } // 80451C74
  W32(c->r[30]+0x00000034u,c->r[31]); // 80451C78
  goto L_80451C88; // 80451C7C
L_80451C80:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 80451C80
  W32(c->r[30]+0x00000034u,c->r[0]); // 80451C84
L_80451C88:;
  c->lr=0x80451C8Cu; f_80458F34(c); // 80451C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80451C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80451C90
  c->r[30]=R32(c->r[1]+0x00000008u); // 80451C94
  c->lr=c->r[0]; // 80451C98
  c->r[1]=c->r[1]+0x00000010u; // 80451C9C
  return; // 80451CA0
}

// fn_80451CA4
void f_80451CA4(Ctx* __restrict c) {
  trace_call(0x80451CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80451CA4
  c->r[0]=c->lr; // 80451CA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80451CAC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80451CB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80451CB4
  c->r[30]=c->r[3]|c->r[3]; // 80451CB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 80451CBC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80451CC0
  c->r[31]=R32(c->r[3]+0x00000004u); // 80451CC4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80451CC8
  c->lr=0x80451CD0u; f_8045B108(c); // 80451CCC
  c->r[29]=c->r[3]|c->r[3]; // 80451CD0
  c->lr=0x80451CD8u; f_80458F28(c); // 80451CD4
  c->r[0]=R8(c->r[30]+0x00000002u); // 80451CD8
  cmps(c,0,(int32_t)c->r[0],1); // 80451CDC
  if (!crb(c,2)) { goto L_80451E70; } // 80451CE0
  cmps(c,0,(int32_t)c->r[29],1); // 80451CE4
  if (!crb(c,2)) { goto L_80451DE8; } // 80451CE8
  c->r[29]=0u+0x00000000u; // 80451CEC
  W8(c->r[30]+0x00000002u,c->r[29]); // 80451CF0
  c->lr=0x80451CF8u; f_80458F2C(c); // 80451CF4
  c->r[0]=R32(c->r[30]+0x00000024u); // 80451CF8
  c->r[3]=c->r[30]+0x00000028u; // 80451CFC
  c->r[5]=c->r[1]+0x00000018u; // 80451D00
  c->r[6]=c->r[1]+0x00000010u; // 80451D04
  c->r[28]=rotl(c->r[0],11)&0xFFFFF800u; // 80451D08
  c->r[4]=c->r[28]|c->r[28]; // 80451D0C
  c->lr=0x80451D14u; f_804600F0(c); // 80451D10
  c->r[6]=R32(c->r[31]+0x00000000u); // 80451D14
  c->r[3]=c->r[31]|c->r[31]; // 80451D18
  c->r[5]=c->r[1]+0x00000018u; // 80451D1C
  c->r[4]=0u+0x00000001u; // 80451D20
  c->r[12]=R32(c->r[6]+0x00000020u); // 80451D24
  c->ctr=c->r[12]; // 80451D28
  if (true) { c->lr=0x80451D30u; dispatch(c,c->ctr); } // 80451D2C
  c->r[6]=R32(c->r[31]+0x00000000u); // 80451D30
  c->r[3]=c->r[31]|c->r[31]; // 80451D34
  c->r[5]=c->r[1]+0x00000010u; // 80451D38
  c->r[4]=0u+0x00000000u; // 80451D3C
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80451D40
  c->ctr=c->r[12]; // 80451D44
  if (true) { c->lr=0x80451D4Cu; dispatch(c,c->ctr); } // 80451D48
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 80451D4C
  c->r[0]=R32(c->r[30]+0x00000024u); // 80451D50
  c->r[3]=R32(c->r[30]+0x00000038u); // 80451D54
  c->r[4]=c->r[4]+c->r[0]; // 80451D58
  c->r[0]=R32(c->r[30]+0x00000034u); // 80451D5C
  c->r[3]=c->r[3]+c->r[28]; // 80451D60
  W32(c->r[30]+0x0000005Cu,c->r[4]); // 80451D64
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80451D68
  c->r[28]=R32(c->r[30]+0x00000018u); // 80451D6C
  W32(c->r[30]+0x00000038u,c->r[3]); // 80451D70
  W32(c->r[30]+0x00000028u,c->r[29]); // 80451D74
  W32(c->r[30]+0x0000002Cu,c->r[29]); // 80451D78
  if (!crb(c,2)) { goto L_80451D98; } // 80451D7C
  c->r[12]=R32(c->r[30]+0x0000003Cu); // 80451D80
  cmps(c,0,(int32_t)c->r[12],0); // 80451D84
  if (crb(c,2)) { goto L_80451D98; } // 80451D88
  c->r[3]=R32(c->r[30]+0x00000040u); // 80451D8C
  c->ctr=c->r[12]; // 80451D90
  if (true) { c->lr=0x80451D98u; dispatch(c,c->ctr); } // 80451D94
L_80451D98:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 80451D98
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 80451D9C
  if (crb(c,0)) { goto L_80451DB0; } // 80451DA0
  c->r[0]=0u+0x00000003u; // 80451DA4
  W8(c->r[30]+0x00000001u,c->r[0]); // 80451DA8
  goto L_80451DDC; // 80451DAC
L_80451DB0:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 80451DB0
  c->r[4]=R32(c->r[30]+0x00000060u); // 80451DB4
  c->r[0]=rotl(c->r[0],21)&0x001FFFFFu; // 80451DB8
  cmpu(c,0,c->r[0],c->r[4]); // 80451DBC
  if (crb(c,0)) { goto L_80451DDC; } // 80451DC0
  c->r[3]=0u+0x00100000u; // 80451DC4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80451DC8
  cmpu(c,0,c->r[4],c->r[0]); // 80451DCC
  if (!crb(c,0)) { goto L_80451DDC; } // 80451DD0
  c->r[0]=0u+0x00000003u; // 80451DD4
  W8(c->r[30]+0x00000001u,c->r[0]); // 80451DD8
L_80451DDC:;
  c->r[0]=0u+0x00000000u; // 80451DDC
  W32(c->r[30]+0x00000050u,c->r[0]); // 80451DE0
  goto L_80451E74; // 80451DE4
L_80451DE8:;
  cmps(c,0,(int32_t)c->r[29],3); // 80451DE8
  if (!crb(c,2)) { goto L_80451E68; } // 80451DEC
  c->r[29]=0u+0x00000000u; // 80451DF0
  W8(c->r[30]+0x00000002u,c->r[29]); // 80451DF4
  c->lr=0x80451DFCu; f_80458F2C(c); // 80451DF8
  c->r[6]=R32(c->r[31]+0x00000000u); // 80451DFC
  c->r[3]=c->r[31]|c->r[31]; // 80451E00
  c->r[5]=c->r[30]+0x00000028u; // 80451E04
  c->r[4]=0u+0x00000000u; // 80451E08
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80451E0C
  c->ctr=c->r[12]; // 80451E10
  if (true) { c->lr=0x80451E18u; dispatch(c,c->ctr); } // 80451E14
  W32(c->r[30]+0x00000028u,c->r[29]); // 80451E18
  c->r[3]=0u+0x807E0000u; // 80451E1C
  W32(c->r[30]+0x0000002Cu,c->r[29]); // 80451E20
  c->r[3]=R32(c->r[3]+0x00003CA4u); // 80451E24
  cmps(c,0,(int32_t)c->r[3],0); // 80451E28
  if (crb(c,0)) { goto L_80451E48; } // 80451E2C
  c->r[0]=R32(c->r[30]+0x00000050u); // 80451E30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80451E34
  if (crb(c,0)) { goto L_80451E48; } // 80451E38
  c->r[0]=0u+0x00000004u; // 80451E3C
  W8(c->r[30]+0x00000001u,c->r[0]); // 80451E40
  goto L_80451E74; // 80451E44
L_80451E48:;
  c->r[3]=0u+0x80000000u; // 80451E48
  c->r[4]=R32(c->r[30]+0x00000050u); // 80451E4C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80451E50
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80451E54
  if (!crb(c,0)) { goto L_80451E74; } // 80451E58
  c->r[0]=c->r[4]+0x00000001u; // 80451E5C
  W32(c->r[30]+0x00000050u,c->r[0]); // 80451E60
  goto L_80451E74; // 80451E64
L_80451E68:;
  c->lr=0x80451E6Cu; f_80458F2C(c); // 80451E68
  goto L_80451E74; // 80451E6C
L_80451E70:;
  c->lr=0x80451E74u; f_80458F2C(c); // 80451E70
L_80451E74:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80451E74
  cmps(c,0,(int32_t)c->r[0],4); // 80451E78
  if (crb(c,2)) { goto L_804520AC; } // 80451E7C
  c->lr=0x80451E84u; f_80458F28(c); // 80451E80
  c->r[0]=R8(c->r[30]+0x00000002u); // 80451E84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80451E88
  if (!crb(c,2)) { goto L_804520A8; } // 80451E8C
  c->r[29]=0u+0x00000000u; // 80451E90
  c->r[0]=0u+0x00000001u; // 80451E94
  W8(c->r[30]+0x00000002u,c->r[0]); // 80451E98
  W32(c->r[30]+0x00000028u,c->r[29]); // 80451E9C
  W32(c->r[30]+0x0000002Cu,c->r[29]); // 80451EA0
  c->lr=0x80451EA8u; f_80458F2C(c); // 80451EA4
  c->r[0]=R8(c->r[30]+0x00000048u); // 80451EA8
  cmps(c,0,(int32_t)c->r[0],1); // 80451EAC
  if (crb(c,2)) { goto L_80451EC0; } // 80451EB0
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 80451EB4
  cmps(c,0,(int32_t)c->r[0],1); // 80451EB8
  if (!crb(c,2)) { goto L_80451ECC; } // 80451EBC
L_80451EC0:;
  c->r[0]=0u+0x00000000u; // 80451EC0
  W8(c->r[30]+0x00000002u,c->r[0]); // 80451EC4
  goto L_804520AC; // 80451EC8
L_80451ECC:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 80451ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80451ED0
  if (!crb(c,2)) { goto L_80451EEC; } // 80451ED4
  c->r[0]=0u+0x00000003u; // 80451ED8
  W8(c->r[30]+0x00000002u,c->r[29]); // 80451EDC
  W32(c->r[30]+0x00000024u,c->r[29]); // 80451EE0
  W8(c->r[30]+0x00000001u,c->r[0]); // 80451EE4
  goto L_804520AC; // 80451EE8
L_80451EEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80451EEC
  if (crb(c,2)) { goto L_80451F00; } // 80451EF0
  c->r[3]=R32(c->r[31]+0x00000000u); // 80451EF4
  cmps(c,0,(int32_t)c->r[3],0); // 80451EF8
  if (!crb(c,2)) { goto L_80451F1C; } // 80451EFC
L_80451F00:;
  c->r[0]=0u+0x00000000u; // 80451F00
  c->r[4]=0u+0x807E0000u; // 80451F04
  W8(c->r[30]+0x00000002u,c->r[0]); // 80451F08
  c->r[3]=R32(c->r[4]+0x00004CE8u); // 80451F0C
  c->r[0]=c->r[3]+0x00000001u; // 80451F10
  W32(c->r[4]+0x00004CE8u,c->r[0]); // 80451F14
  goto L_804520AC; // 80451F18
L_80451F1C:;
  c->r[12]=R32(c->r[3]+0x00000024u); // 80451F1C
  c->r[3]=c->r[31]|c->r[31]; // 80451F20
  c->r[4]=0u+0x00000000u; // 80451F24
  c->ctr=c->r[12]; // 80451F28
  if (true) { c->lr=0x80451F30u; dispatch(c,c->ctr); } // 80451F2C
  c->r[4]=R32(c->r[30]+0x00000044u); // 80451F30
  c->r[0]=R32(c->r[30]+0x00000020u); // 80451F34
  c->r[3]=c->r[4]-c->r[3]; // 80451F38
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80451F3C
  if (crb(c,0)) { goto L_80451F4C; } // 80451F40
  W8(c->r[30]+0x00000002u,c->r[29]); // 80451F44
  goto L_804520AC; // 80451F48
L_80451F4C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80451F4C
  c->r[3]=c->r[31]|c->r[31]; // 80451F50
  c->r[6]=c->r[1]+0x00000008u; // 80451F54
  c->r[5]=R32(c->r[30]+0x0000001Cu); // 80451F58
  c->r[12]=R32(c->r[4]+0x00000018u); // 80451F5C
  c->r[4]=0u+0x00000000u; // 80451F60
  c->ctr=c->r[12]; // 80451F64
  if (true) { c->lr=0x80451F6Cu; dispatch(c,c->ctr); } // 80451F68
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80451F6C
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 80451F70
  c->r[3]=sraw(c,c->r[3],11); // 80451F74
  c->r[0]=R32(c->r[30]+0x00000034u); // 80451F78
  c->r[5]=addc(c,c->r[3],0,c->xer_ca); // 80451F7C
  c->r[3]=c->r[0]-c->r[4]; // 80451F80
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 80451F84
  if (!crb(c,0)) { goto L_80451F90; } // 80451F88
  c->r[3]=c->r[5]|c->r[5]; // 80451F8C
L_80451F90:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 80451F90
  c->r[0]=c->r[0]-c->r[4]; // 80451F94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80451F98
  if (!crb(c,0)) { goto L_80451FA4; } // 80451F9C
  c->r[0]=c->r[3]|c->r[3]; // 80451FA0
L_80451FA4:;
  c->r[29]=R32(c->r[30]+0x00000030u); // 80451FA4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 80451FA8
  if (!crb(c,0)) { goto L_80451FB4; } // 80451FAC
  c->r[29]=c->r[0]|c->r[0]; // 80451FB0
L_80451FB4:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80451FB4
  c->r[5]=0u+0x00000000u; // 80451FB8
  c->r[3]=R32(c->r[30]+0x00000008u); // 80451FBC
  c->r[4]=c->r[0]+c->r[4]; // 80451FC0
  c->lr=0x80451FC8u; f_8045AE94(c); // 80451FC4
  c->r[3]=R32(c->r[30]+0x00000060u); // 80451FC8
  c->r[0]=c->r[3]+0xFFF10000u; // 80451FCC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80451FD0
  if (crb(c,2)) { goto L_80451FF8; } // 80451FD4
  c->r[0]=R32(c->r[30]+0x00000038u); // 80451FD8
  c->r[0]=sraw(c,c->r[0],11); // 80451FDC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80451FE0
  c->r[0]=c->r[3]-c->r[0]; // 80451FE4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80451FE8
  if (!crb(c,0)) { goto L_80451FF4; } // 80451FEC
  c->r[0]=c->r[29]|c->r[29]; // 80451FF0
L_80451FF4:;
  c->r[29]=c->r[0]|c->r[0]; // 80451FF4
L_80451FF8:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80451FF8
  c->r[4]=c->r[29]|c->r[29]; // 80451FFC
  c->r[5]=R32(c->r[1]+0x00000008u); // 80452000
  c->lr=0x80452008u; f_8045AF54(c); // 80452004
  W32(c->r[30]+0x00000024u,c->r[3]); // 80452008
  cmps(c,0,(int32_t)c->r[3],0); // 8045200C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80452010
  W32(c->r[30]+0x00000028u,c->r[0]); // 80452014
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80452018
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 8045201C
  if (crb(c,1)) { goto L_804520AC; } // 80452020
  c->r[6]=R32(c->r[31]+0x00000000u); // 80452024
  c->r[3]=c->r[31]|c->r[31]; // 80452028
  c->r[5]=c->r[30]+0x00000028u; // 8045202C
  c->r[4]=0u+0x00000000u; // 80452030
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80452034
  c->ctr=c->r[12]; // 80452038
  if (true) { c->lr=0x80452040u; dispatch(c,c->ctr); } // 8045203C
  c->r[0]=0u+0x00000000u; // 80452040
  c->r[3]=R32(c->r[30]+0x00000008u); // 80452044
  W32(c->r[30]+0x00000028u,c->r[0]); // 80452048
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 8045204C
  W8(c->r[30]+0x00000002u,c->r[0]); // 80452050
  c->lr=0x80452058u; f_8045B108(c); // 80452054
  cmps(c,0,(int32_t)c->r[3],3); // 80452058
  if (!crb(c,2)) { goto L_804520AC; } // 8045205C
  c->r[3]=0u+0x807E0000u; // 80452060
  c->r[3]=R32(c->r[3]+0x00003CA4u); // 80452064
  cmps(c,0,(int32_t)c->r[3],0); // 80452068
  if (crb(c,0)) { goto L_80452088; } // 8045206C
  c->r[0]=R32(c->r[30]+0x00000050u); // 80452070
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80452074
  if (crb(c,0)) { goto L_80452088; } // 80452078
  c->r[0]=0u+0x00000004u; // 8045207C
  W8(c->r[30]+0x00000001u,c->r[0]); // 80452080
  goto L_804520AC; // 80452084
L_80452088:;
  c->r[3]=0u+0x80000000u; // 80452088
  c->r[4]=R32(c->r[30]+0x00000050u); // 8045208C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80452090
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80452094
  if (!crb(c,0)) { goto L_804520AC; } // 80452098
  c->r[0]=c->r[4]+0x00000001u; // 8045209C
  W32(c->r[30]+0x00000050u,c->r[0]); // 804520A0
  goto L_804520AC; // 804520A4
L_804520A8:;
  c->lr=0x804520ACu; f_80458F2C(c); // 804520A8
L_804520AC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804520AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804520B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 804520B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 804520B8
  c->r[28]=R32(c->r[1]+0x00000020u); // 804520BC
  c->lr=c->r[0]; // 804520C0
  c->r[1]=c->r[1]+0x00000030u; // 804520C4
  return; // 804520C8
}

// fn_804520CC
void f_804520CC(Ctx* __restrict c) {
  trace_call(0x804520CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804520CC
  c->r[0]=c->lr; // 804520D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804520D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804520D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804520DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804520E0
  c->r[29]=c->r[3]|c->r[3]; // 804520E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 804520E8
  c->r[0]=R8(c->r[3]+0x00000002u); // 804520EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804520F0
  if (!crb(c,2)) { goto L_804523B8; } // 804520F4
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 804520F8
  cmps(c,0,(int32_t)c->r[0],1); // 804520FC
  if (!crb(c,2)) { goto L_80452120; } // 80452100
  c->r[0]=R8(c->r[3]+0x0000004Bu); // 80452104
  c->r[4]=0u+0x00000000u; // 80452108
  W8(c->r[3]+0x0000004Cu,c->r[4]); // 8045210C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452110
  if (!crb(c,2)) { goto L_80452120; } // 80452114
  c->r[0]=0u+0x00000001u; // 80452118
  W8(c->r[3]+0x00000001u,c->r[0]); // 8045211C
L_80452120:;
  c->r[0]=R8(c->r[3]+0x0000004Au); // 80452120
  cmps(c,0,(int32_t)c->r[0],1); // 80452124
  if (!crb(c,2)) { goto L_8045215C; } // 80452128
  c->r[4]=R32(c->r[3]+0x00000008u); // 8045212C
  cmps(c,0,(int32_t)c->r[4],0); // 80452130
  if (crb(c,2)) { goto L_80452148; } // 80452134
  c->r[0]=0u+0x00000000u; // 80452138
  W32(c->r[3]+0x00000008u,c->r[0]); // 8045213C
  c->r[3]=c->r[4]|c->r[4]; // 80452140
  c->lr=0x80452148u; f_8045AD14(c); // 80452144
L_80452148:;
  c->lr=0x8045214Cu; f_80458F28(c); // 80452148
  c->r[0]=0u+0x00000000u; // 8045214C
  W8(c->r[29]+0x0000004Au,c->r[0]); // 80452150
  W8(c->r[29]+0x0000004Du,c->r[0]); // 80452154
  c->lr=0x8045215Cu; f_80458F2C(c); // 80452158
L_8045215C:;
  c->lr=0x80452160u; f_80458F28(c); // 8045215C
  c->r[0]=R8(c->r[29]+0x00000049u); // 80452160
  c->r[28]=0u+0x00000000u; // 80452164
  cmps(c,0,(int32_t)c->r[0],1); // 80452168
  if (!crb(c,2)) { goto L_804523A0; } // 8045216C
  c->r[0]=R8(c->r[29]+0x0000004Du); // 80452170
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452174
  if (!crb(c,2)) { goto L_804521DC; } // 80452178
  c->r[0]=0u+0x00000001u; // 8045217C
  W8(c->r[29]+0x0000004Du,c->r[0]); // 80452180
  c->lr=0x80452188u; f_80458F2C(c); // 80452184
  c->r[0]=R32(c->r[29]+0x00000008u); // 80452188
  c->r[28]=0u+0x00000001u; // 8045218C
  cmps(c,0,(int32_t)c->r[0],0); // 80452190
  if (!crb(c,2)) { goto L_804521DC; } // 80452194
  c->r[3]=R32(c->r[29]+0x00000054u); // 80452198
  c->r[5]=0u+0x00000000u; // 8045219C
  c->r[4]=R32(c->r[29]+0x00000058u); // 804521A0
  c->lr=0x804521A8u; f_8045A654(c); // 804521A4
  cmps(c,0,(int32_t)c->r[3],0); // 804521A8
  W32(c->r[29]+0x00000008u,c->r[3]); // 804521AC
  if (!crb(c,2)) { goto L_804521DC; } // 804521B0
  c->r[3]=0u+0x806B0000u; // 804521B4
  c->r[4]=R32(c->r[29]+0x00000054u); // 804521B8
  c->r[3]=c->r[3]+0xFFFF8808u; // 804521BC
  c->lr=0x804521C4u; f_80459DC4(c); // 804521C0
  c->r[0]=0u+0x00000000u; // 804521C4
  c->r[3]=0u+0x00000004u; // 804521C8
  W8(c->r[29]+0x00000001u,c->r[3]); // 804521CC
  W8(c->r[29]+0x0000004Du,c->r[0]); // 804521D0
  W8(c->r[29]+0x00000049u,c->r[0]); // 804521D4
  goto L_804523E4; // 804521D8
L_804521DC:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 804521DC
  cmps(c,0,(int32_t)c->r[0],1); // 804521E0
  if (!crb(c,2)) { goto L_804523A4; } // 804521E4
  cmps(c,0,(int32_t)c->r[28],0); // 804521E8
  if (!crb(c,2)) { goto L_804521F4; } // 804521EC
  c->lr=0x804521F4u; f_80458F2C(c); // 804521F0
L_804521F4:;
  c->r[0]=R8(c->r[29]+0x00000049u); // 804521F4
  cmps(c,0,(int32_t)c->r[0],1); // 804521F8
  if (!crb(c,2)) { goto L_8045220C; } // 804521FC
  c->r[0]=R8(c->r[29]+0x0000004Au); // 80452200
  cmps(c,0,(int32_t)c->r[0],1); // 80452204
  if (crb(c,2)) { goto L_804523E4; } // 80452208
L_8045220C:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 8045220C
  cmps(c,0,(int32_t)c->r[0],0); // 80452210
  if (!crb(c,2)) { goto L_80452288; } // 80452214
  c->r[3]=R32(c->r[29]+0x00000054u); // 80452218
  c->lr=0x80452220u; f_8045B1C8(c); // 8045221C
  c->r[31]=sraw(c,c->r[3],31); // 80452220
  c->r[5]=0u+0x00000000u; // 80452224
  c->r[30]=c->r[3]|c->r[3]; // 80452228
  c->r[0]=c->r[31]^0x80000000u; // 8045222C
  c->r[4]=c->r[5]^0x80000000u; // 80452230
  c->r[3]=addc(c,~c->r[5],c->r[3],1); // 80452234
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80452238
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8045223C
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80452240
  if (crb(c,2)) { goto L_80452258; } // 80452244
  c->r[3]=R32(c->r[29]+0x00000054u); // 80452248
  c->lr=0x80452250u; f_8045B1C8(c); // 8045224C
  c->r[30]=c->r[3]|c->r[3]; // 80452250
  c->r[31]=sraw(c,c->r[3],31); // 80452254
L_80452258:;
  c->r[3]=0u+0x000007FFu; // 80452258
  c->r[0]=0u+0x00000000u; // 8045225C
  c->r[5]=addc(c,c->r[30],c->r[3],0); // 80452260
  c->r[4]=addc(c,c->r[31],c->r[0],c->xer_ca); // 80452264
  c->r[0]=c->r[4]|c->r[4]; // 80452268
  c->r[3]=rotl(c->r[5],21)&0xFFFFFFFFu; // 8045226C
  c->r[0]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80452270
  c->r[3]=(rotl(c->r[4],21)&0xFFE00000u)|(c->r[3]&~0xFFE00000u); // 80452274
  c->r[0]=sraw(c,c->r[0],11); // 80452278
  c->r[28]=addc(c,c->r[3],0,c->xer_ca); // 8045227C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80452280
  goto L_804522BC; // 80452284
L_80452288:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80452288
  c->r[4]=0u+0x00000000u; // 8045228C
  c->r[5]=0u+0x00000002u; // 80452290
  c->lr=0x80452298u; f_8045AE94(c); // 80452294
  c->r[3]=R32(c->r[29]+0x00000008u); // 80452298
  c->lr=0x804522A0u; f_8045ADD4(c); // 8045229C
  c->r[30]=rotl(c->r[3],11)&0xFFFFF800u; // 804522A0
  c->r[28]=c->r[3]|c->r[3]; // 804522A4
  c->r[3]=R32(c->r[29]+0x00000008u); // 804522A8
  c->r[31]=sraw(c,c->r[30],31); // 804522AC
  c->r[4]=0u+0x00000000u; // 804522B0
  c->r[5]=0u+0x00000000u; // 804522B4
  c->lr=0x804522BCu; f_8045AE94(c); // 804522B8
L_804522BC:;
  c->r[3]=0u+0x80000000u; // 804522BC
  c->r[4]=R32(c->r[29]+0x00000014u); // 804522C0
  c->r[0]=c->r[3]+0xFFFFF800u; // 804522C4
  c->r[3]=R32(c->r[29]+0x00000010u); // 804522C8
  c->r[0]=c->r[4]^c->r[0]; // 804522CC
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 804522D0
  if (!crb(c,2)) { goto L_804522E4; } // 804522D4
  W32(c->r[29]+0x00000014u,c->r[30]); // 804522D8
  W32(c->r[29]+0x00000010u,c->r[31]); // 804522DC
  W32(c->r[29]+0x00000018u,c->r[28]); // 804522E0
L_804522E4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 804522E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 804522E8
  if (!crb(c,1)) { goto L_804522F4; } // 804522EC
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 804522F0
L_804522F4:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 804522F4
  c->r[0]=R32(c->r[29]+0x00000018u); // 804522F8
  c->r[0]=c->r[0]+c->r[3]; // 804522FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 80452300
  if (!crb(c,1)) { goto L_80452328; } // 80452304
  c->r[4]=c->r[28]-c->r[3]; // 80452308
  c->r[0]=sraw(c,c->r[4],31); // 8045230C
  W32(c->r[29]+0x00000018u,c->r[4]); // 80452310
  c->r[3]=rotl(c->r[4],11)&0xFFFFF800u; // 80452314
  c->r[0]=rotl(c->r[0],11)&0xFFFFF800u; // 80452318
  W32(c->r[29]+0x00000014u,c->r[3]); // 8045231C
  c->r[0]=(rotl(c->r[4],11)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80452320
  W32(c->r[29]+0x00000010u,c->r[0]); // 80452324
L_80452328:;
  c->lr=0x8045232Cu; f_80458F30(c); // 80452328
  c->r[3]=R32(c->r[29]+0x00000018u); // 8045232C
  c->r[0]=0u+0x00000000u; // 80452330
  W32(c->r[29]+0x0000005Cu,c->r[0]); // 80452334
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80452338
  if (!crb(c,1)) { goto L_80452344; } // 8045233C
  W32(c->r[29]+0x0000005Cu,c->r[3]); // 80452340
L_80452344:;
  c->lr=0x80452348u; f_80458F34(c); // 80452344
  c->r[30]=0u+0x00000000u; // 80452348
  c->r[3]=R32(c->r[29]+0x00000008u); // 8045234C
  W8(c->r[29]+0x00000049u,c->r[30]); // 80452350
  c->lr=0x80452358u; f_8045B108(c); // 80452354
  cmps(c,0,(int32_t)c->r[3],3); // 80452358
  if (!crb(c,2)) { goto L_804523A4; } // 8045235C
  c->r[3]=0u+0x806B0000u; // 80452360
  c->r[4]=R32(c->r[29]+0x00000054u); // 80452364
  c->r[3]=c->r[3]+0xFFFF8808u; // 80452368
  c->r[3]=c->r[3]+0x00000029u; // 8045236C
  c->lr=0x80452374u; f_80459DC4(c); // 80452370
  c->r[3]=R32(c->r[29]+0x00000008u); // 80452374
  cmps(c,0,(int32_t)c->r[3],0); // 80452378
  if (crb(c,2)) { goto L_80452388; } // 8045237C
  W32(c->r[29]+0x00000008u,c->r[30]); // 80452380
  c->lr=0x80452388u; f_8045AD14(c); // 80452384
L_80452388:;
  c->r[0]=0u+0x00000000u; // 80452388
  c->r[3]=0u+0x00000004u; // 8045238C
  W8(c->r[29]+0x00000001u,c->r[3]); // 80452390
  W8(c->r[29]+0x0000004Du,c->r[0]); // 80452394
  W8(c->r[29]+0x00000049u,c->r[0]); // 80452398
  goto L_804523E4; // 8045239C
L_804523A0:;
  c->lr=0x804523A4u; f_80458F2C(c); // 804523A0
L_804523A4:;
  c->r[0]=R8(c->r[29]+0x0000004Bu); // 804523A4
  cmps(c,0,(int32_t)c->r[0],1); // 804523A8
  if (!crb(c,2)) { goto L_804523B8; } // 804523AC
  c->r[0]=0u+0x00000000u; // 804523B0
  W8(c->r[29]+0x0000004Bu,c->r[0]); // 804523B4
L_804523B8:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 804523B8
  cmps(c,0,(int32_t)c->r[0],2); // 804523BC
  if (!crb(c,2)) { goto L_804523E4; } // 804523C0
  c->r[0]=R8(c->r[29]+0x0000004Du); // 804523C4
  cmps(c,0,(int32_t)c->r[0],1); // 804523C8
  if (!crb(c,2)) { goto L_804523E4; } // 804523CC
  c->r[0]=R8(c->r[29]+0x00000049u); // 804523D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804523D4
  if (!crb(c,2)) { goto L_804523E4; } // 804523D8
  c->r[3]=c->r[29]|c->r[29]; // 804523DC
  c->lr=0x804523E4u; f_80451CA4(c); // 804523E0
L_804523E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804523E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804523E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804523EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804523F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804523F4
  c->lr=c->r[0]; // 804523F8
  c->r[1]=c->r[1]+0x00000020u; // 804523FC
  return; // 80452400
}

// fn_80452404
void f_80452404(Ctx* __restrict c) {
  trace_call(0x80452404u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452404
  c->r[0]=c->lr; // 80452408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8045240C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80452410
  W32(c->r[1]+0x00000008u,c->r[30]); // 80452414
  c->lr=0x8045241Cu; f_80458F30(c); // 80452418
  c->r[3]=0u+0x807E0000u; // 8045241C
  c->r[3]=c->r[3]+0x00003CA0u; // 80452420
  c->lr=0x80452428u; f_80461360(c); // 80452424
  cmps(c,0,(int32_t)c->r[3],0); // 80452428
  if (crb(c,2)) { goto L_8045246C; } // 8045242C
  c->r[30]=0u+0x807E0000u; // 80452430
  c->r[31]=0u+0x00000000u; // 80452434
  c->r[30]=c->r[30]+0x00003CA8u; // 80452438
L_8045243C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8045243C
  cmps(c,0,(int32_t)c->r[0],1); // 80452440
  if (!crb(c,2)) { goto L_80452450; } // 80452444
  c->r[3]=c->r[30]|c->r[30]; // 80452448
  c->lr=0x80452450u; f_804520CC(c); // 8045244C
L_80452450:;
  c->r[31]=c->r[31]+0x00000001u; // 80452450
  c->r[30]=c->r[30]+0x00000068u; // 80452454
  cmps(c,0,(int32_t)c->r[31],40); // 80452458
  if (crb(c,0)) { IRQCHK(c); goto L_8045243C; } // 8045245C
  c->r[0]=0u+0x00000000u; // 80452460
  c->r[3]=0u+0x807E0000u; // 80452464
  W32(c->r[3]+0x00003CA0u,c->r[0]); // 80452468
L_8045246C:;
  c->lr=0x80452470u; f_80458F34(c); // 8045246C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80452470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80452474
  c->r[30]=R32(c->r[1]+0x00000008u); // 80452478
  c->lr=c->r[0]; // 8045247C
  c->r[1]=c->r[1]+0x00000010u; // 80452480
  return; // 80452484
}

// fn_80452488
void f_80452488(Ctx* __restrict c) {
  trace_call(0x80452488u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452488
  c->r[0]=c->lr; // 8045248C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80452490
  c->lr=0x80452498u; f_80458F30(c); // 80452494
  c->lr=0x8045249Cu; f_8045B0A0(c); // 80452498
  c->lr=0x804524A0u; f_80458F34(c); // 8045249C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804524A0
  c->lr=c->r[0]; // 804524A4
  c->r[1]=c->r[1]+0x00000010u; // 804524A8
  return; // 804524AC
}

// fn_804524B0
void f_804524B0(Ctx* __restrict c) {
  trace_call(0x804524B0u);
  return; // 804524B0
}

// fn_804524B4
void f_804524B4(Ctx* __restrict c) {
  trace_call(0x804524B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804524B4
  c->r[0]=c->lr; // 804524B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804524BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804524C0
  c->r[31]=c->r[5]|c->r[5]; // 804524C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804524C8
  c->r[30]=c->r[4]|c->r[4]; // 804524CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804524D0
  c->r[29]=c->r[3]|c->r[3]; // 804524D4
  c->lr=0x804524DCu; f_80458F30(c); // 804524D8
  W32(c->r[29]+0x00000020u,c->r[30]); // 804524DC
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 804524E0
  c->lr=0x804524E8u; f_80458F34(c); // 804524E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804524E8
  c->r[3]=0u+0x00000001u; // 804524EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 804524F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 804524F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804524F8
  c->lr=c->r[0]; // 804524FC
  c->r[1]=c->r[1]+0x00000020u; // 80452500
  return; // 80452504
}

// fn_80452508
void f_80452508(Ctx* __restrict c) {
  trace_call(0x80452508u);
  c->r[3]=R8(c->r[3]+0x0000004Du); // 80452508
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8045250C
  return; // 80452510
}

// fn_80452514
void f_80452514(Ctx* __restrict c) {
  trace_call(0x80452514u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452514
  c->r[0]=c->lr; // 80452518
  W32(c->r[1]+0x00000024u,c->r[0]); // 8045251C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80452520
  c->r[31]=c->r[5]|c->r[5]; // 80452524
  W32(c->r[1]+0x00000018u,c->r[30]); // 80452528
  c->r[30]=c->r[4]|c->r[4]; // 8045252C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80452530
  c->r[29]=c->r[3]|c->r[3]; // 80452534
  c->lr=0x8045253Cu; f_80458F30(c); // 80452538
  c->r[3]=c->r[29]|c->r[29]; // 8045253C
  c->r[4]=c->r[30]|c->r[30]; // 80452540
  c->r[5]=c->r[31]|c->r[31]; // 80452544
  c->lr=0x8045254Cu; f_80452574(c); // 80452548
  c->r[31]=c->r[3]|c->r[3]; // 8045254C
  c->lr=0x80452554u; f_80458F34(c); // 80452550
  c->r[3]=c->r[31]|c->r[31]; // 80452554
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80452558
  c->r[30]=R32(c->r[1]+0x00000018u); // 8045255C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80452560
  c->r[0]=R32(c->r[1]+0x00000024u); // 80452564
  c->lr=c->r[0]; // 80452568
  c->r[1]=c->r[1]+0x00000020u; // 8045256C
  return; // 80452570
}

// fn_80452574
void f_80452574(Ctx* __restrict c) {
  trace_call(0x80452574u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452574
  c->r[0]=c->lr; // 80452578
  W32(c->r[1]+0x00000034u,c->r[0]); // 8045257C
  c->r[11]=c->r[1]+0x00000030u; // 80452580
  c->lr=0x80452588u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80452584
  c->r[0]=c->r[4]+0x0000003Fu; // 80452588
  cmps(c,0,(int32_t)c->r[3],0); // 8045258C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFC0u; // 80452590
  c->r[29]=c->r[3]|c->r[3]; // 80452594
  c->r[0]=c->r[30]-c->r[4]; // 80452598
  c->r[27]=c->r[5]-c->r[0]; // 8045259C
  if (crb(c,0)) { goto L_804525B4; } // 804525A0
  cmps(c,0,(int32_t)c->r[4],0); // 804525A4
  if (crb(c,2)) { goto L_804525B4; } // 804525A8
  cmps(c,0,(int32_t)c->r[5],0); // 804525AC
  if (!crb(c,0)) { goto L_804525C8; } // 804525B0
L_804525B4:;
  c->r[3]=0u+0x806B0000u; // 804525B4
  c->r[3]=c->r[3]+0xFFFF8888u; // 804525B8
  c->lr=0x804525C0u; f_80459D44(c); // 804525BC
  c->r[3]=0u+0x00000000u; // 804525C0
  goto L_804529D8; // 804525C4
L_804525C8:;
  c->r[3]=0u+0x807E0000u; // 804525C8
  c->r[0]=0u+0x00000002u; // 804525CC
  c->r[3]=c->r[3]+0x00002568u; // 804525D0
  c->r[4]=0u+0x00000000u; // 804525D4
  c->ctr=c->r[0]; // 804525D8
L_804525DC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 804525DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804525E0
  if (crb(c,2)) { goto L_80452664; } // 804525E4
  c->r[0]=R8(c->r[3]+0x000000C4u); // 804525E8
  c->r[4]=c->r[4]+0x00000001u; // 804525EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804525F0
  if (crb(c,2)) { goto L_80452664; } // 804525F4
  c->r[0]=R8(c->r[3]+0x00000188u); // 804525F8
  c->r[4]=c->r[4]+0x00000001u; // 804525FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452600
  if (crb(c,2)) { goto L_80452664; } // 80452604
  c->r[0]=R8(c->r[3]+0x0000024Cu); // 80452608
  c->r[4]=c->r[4]+0x00000001u; // 8045260C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452610
  if (crb(c,2)) { goto L_80452664; } // 80452614
  c->r[0]=R8(c->r[3]+0x00000310u); // 80452618
  c->r[4]=c->r[4]+0x00000001u; // 8045261C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452620
  if (crb(c,2)) { goto L_80452664; } // 80452624
  c->r[0]=R8(c->r[3]+0x000003D4u); // 80452628
  c->r[4]=c->r[4]+0x00000001u; // 8045262C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452630
  if (crb(c,2)) { goto L_80452664; } // 80452634
  c->r[0]=R8(c->r[3]+0x00000498u); // 80452638
  c->r[4]=c->r[4]+0x00000001u; // 8045263C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452640
  if (crb(c,2)) { goto L_80452664; } // 80452644
  c->r[0]=R8(c->r[3]+0x0000055Cu); // 80452648
  c->r[4]=c->r[4]+0x00000001u; // 8045264C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80452650
  if (crb(c,2)) { goto L_80452664; } // 80452654
  c->r[3]=c->r[3]+0x00000620u; // 80452658
  c->r[4]=c->r[4]+0x00000001u; // 8045265C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804525DC; } // 80452660
L_80452664:;
  cmps(c,0,(int32_t)c->r[4],16); // 80452664
  if (!crb(c,2)) { goto L_80452684; } // 80452668
  c->r[3]=0u+0x806B0000u; // 8045266C
  c->r[3]=c->r[3]+0xFFFF8888u; // 80452670
  c->r[3]=c->r[3]+0x00000027u; // 80452674
  c->lr=0x8045267Cu; f_80459D44(c); // 80452678
  c->r[3]=0u+0x00000000u; // 8045267C
  goto L_804529D8; // 80452680
L_80452684:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)196); // 80452684
  c->r[3]=0u+0x807E0000u; // 80452688
  c->r[4]=0u+0x00000000u; // 8045268C
  c->r[3]=c->r[3]+0x00002568u; // 80452690
  c->r[31]=c->r[3]+c->r[0]; // 80452694
  c->r[5]=0u+0x000000C4u; // 80452698
  c->r[3]=c->r[31]|c->r[31]; // 8045269C
  c->lr=0x804526A4u; f_800043EC(c); // 804526A0
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12384); // 804526A4
  W8(c->r[31]+0x00000003u,c->r[29]); // 804526A8
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804526AC
  c->r[3]=c->r[27]-c->r[4]; // 804526B0
  c->r[0]=c->r[3]+0xFFFFFEDCu; // 804526B4
  c->r[0]=sraw(c,c->r[0],11); // 804526B8
  c->r[3]=c->r[30]+c->r[4]; // 804526BC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 804526C0
  W32(c->r[31]+0x00000020u,c->r[3]); // 804526C4
  c->r[0]=rotl(c->r[0],11)&0xFFFFF800u; cr0(c,c->r[0]); // 804526C8
  W32(c->r[31]+0x00000024u,c->r[0]); // 804526CC
  if (!crb(c,0)) { goto L_804526EC; } // 804526D0
  c->r[3]=0u+0x806B0000u; // 804526D4
  c->r[3]=c->r[3]+0xFFFF8888u; // 804526D8
  c->r[3]=c->r[3]+0x00000050u; // 804526DC
  c->lr=0x804526E4u; f_80459D44(c); // 804526E0
  c->r[3]=0u+0x00000000u; // 804526E4
  goto L_804529D8; // 804526E8
L_804526EC:;
  c->r[0]=0u+0x00000024u; // 804526EC
  c->r[4]=0u+0x00002000u; // 804526F0
  W32(c->r[31]+0x00000028u,c->r[0]); // 804526F4
  c->r[3]=0u+0x00002060u; // 804526F8
  c->r[0]=0u+0x00000000u; // 804526FC
  c->r[5]=0u+0x00000024u; // 80452700
  c->r[7]=R32(c->r[31]+0x00000020u); // 80452704
  c->r[6]=R32(c->r[31]+0x00000024u); // 80452708
  c->r[6]=c->r[7]+c->r[6]; // 8045270C
  c->r[6]=c->r[6]+0x00000024u; // 80452710
  W32(c->r[31]+0x000000ACu,c->r[6]); // 80452714
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80452718
  W32(c->r[31]+0x00000030u,c->r[4]); // 8045271C
  W32(c->r[31]+0x00000034u,c->r[3]); // 80452720
  W32(c->r[31]+0x00000014u,c->r[0]); // 80452724
  c->r[3]=R32(c->r[31]+0x00000020u); // 80452728
  c->r[4]=R32(c->r[31]+0x00000024u); // 8045272C
  c->lr=0x80452734u; f_8045EE54(c); // 80452730
  cmps(c,0,(int32_t)c->r[3],0); // 80452734
  W32(c->r[31]+0x00000010u,c->r[3]); // 80452738
  if (!crb(c,2)) { goto L_80452750; } // 8045273C
  c->r[3]=c->r[31]|c->r[31]; // 80452740
  c->lr=0x80452748u; f_80452A28(c); // 80452744
  c->r[3]=0u+0x00000000u; // 80452748
  goto L_804529D8; // 8045274C
L_80452750:;
  c->r[4]=0u+0x00000000u; // 80452750
  c->lr=0x80452758u; f_8045145C(c); // 80452754
  cmps(c,0,(int32_t)c->r[3],0); // 80452758
  W32(c->r[31]+0x00000008u,c->r[3]); // 8045275C
  if (!crb(c,2)) { goto L_80452774; } // 80452760
  c->r[3]=c->r[31]|c->r[31]; // 80452764
  c->lr=0x8045276Cu; f_80452A28(c); // 80452768
  c->r[3]=0u+0x00000000u; // 8045276C
  goto L_804529D8; // 80452770
L_80452774:;
  c->r[28]=c->r[31]|c->r[31]; // 80452774
  c->r[27]=0u+0x00000000u; // 80452778
  goto L_804527CC; // 8045277C
L_80452780:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 80452780
  c->r[4]=R32(c->r[31]+0x00000030u); // 80452784
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[27]); // 80452788
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 8045278C
  c->r[0]=c->r[0]-c->r[4]; // 80452790
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80452794
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80452798
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8045279C
  c->r[3]=c->r[6]+c->r[0]; // 804527A0
  c->lr=0x804527A8u; f_8045EE54(c); // 804527A4
  cmps(c,0,(int32_t)c->r[3],0); // 804527A8
  W32(c->r[28]+0x00000018u,c->r[3]); // 804527AC
  if (!crb(c,2)) { goto L_804527C4; } // 804527B0
  c->r[3]=c->r[31]|c->r[31]; // 804527B4
  c->lr=0x804527BCu; f_80452A28(c); // 804527B8
  c->r[3]=0u+0x00000000u; // 804527BC
  goto L_804529D8; // 804527C0
L_804527C4:;
  c->r[28]=c->r[28]+0x00000004u; // 804527C4
  c->r[27]=c->r[27]+0x00000001u; // 804527C8
L_804527CC:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[29]); // 804527CC
  if (crb(c,0)) { IRQCHK(c); goto L_80452780; } // 804527D0
  c->r[3]=R32(c->r[31]+0x00000010u); // 804527D4
  c->r[4]=c->r[29]|c->r[29]; // 804527D8
  c->r[5]=c->r[31]+0x00000018u; // 804527DC
  c->lr=0x804527E4u; f_8044FF10(c); // 804527E0
  cmps(c,0,(int32_t)c->r[3],0); // 804527E4
  W32(c->r[31]+0x00000004u,c->r[3]); // 804527E8
  if (!crb(c,2)) { goto L_80452800; } // 804527EC
  c->r[3]=c->r[31]|c->r[31]; // 804527F0
  c->lr=0x804527F8u; f_80452A28(c); // 804527F4
  c->r[3]=0u+0x00000000u; // 804527F8
  goto L_804529D8; // 804527FC
L_80452800:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)16576); // 80452800
  c->r[4]=c->r[29]|c->r[29]; // 80452804
  c->r[3]=c->r[31]+0x00000018u; // 80452808
  c->r[5]=c->r[30]+c->r[0]; // 8045280C
  c->lr=0x80452814u; f_80464918(c); // 80452810
  cmps(c,0,(int32_t)c->r[3],0); // 80452814
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80452818
  if (!crb(c,2)) { goto L_80452830; } // 8045281C
  c->r[3]=c->r[31]|c->r[31]; // 80452820
  c->lr=0x80452828u; f_80452A28(c); // 80452824
  c->r[3]=0u+0x00000000u; // 80452828
  goto L_804529D8; // 8045282C
L_80452830:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80452830
  c->lr=0x80452838u; f_8045C948(c); // 80452834
  cmps(c,0,(int32_t)c->r[3],0); // 80452838
  W32(c->r[31]+0x00000094u,c->r[3]); // 8045283C
  if (!crb(c,2)) { goto L_80452854; } // 80452840
  c->r[3]=c->r[31]|c->r[31]; // 80452844
  c->lr=0x8045284Cu; f_80452A28(c); // 80452848
  c->r[3]=0u+0x00000000u; // 8045284C
  goto L_804529D8; // 80452850
L_80452854:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 80452854
  c->r[4]=R32(c->r[31]+0x00000008u); // 80452858
  c->lr=0x80452860u; f_8045CC10(c); // 8045285C
  c->lr=0x80452864u; f_80458F28(c); // 80452860
  c->r[3]=0u+0x807E0000u; // 80452864
  c->r[4]=0u+0x806B0000u; // 80452868
  c->r[5]=R32(c->r[3]+0x00004D18u); // 8045286C
  c->r[3]=0u+0x806B0000u; // 80452870
  c->r[0]=0u+0x43300000u; // 80452874
  {uint32_t ea=c->r[3]+0xFFFF8860u; c->f[0]=c->ps1[0]=RF32(ea);} // 80452878
  W32(c->r[31]+0x00000038u,c->r[5]); // 8045287C
  cmps(c,1,(int32_t)c->r[29],0); // 80452880
  {uint32_t ea=c->r[4]+0xFFFF8868u; c->f[2]=RF64(ea);} // 80452884
  c->r[6]=0u+0x00000000u; // 80452888
  c->r[3]=R32(c->r[31]+0x00000024u); // 8045288C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80452890
  c->r[0]=0u+0x00000000u; // 80452894
  c->r[3]=sraw(c,c->r[3],11); // 80452898
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 8045289C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 804528A0
  W16(c->r[31]+0x0000003Cu,c->r[4]); // 804528A4
  c->r[3]=c->r[3]^0x80000000u; // 804528A8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 804528AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 804528B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 804528B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 804528B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 804528BC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 804528C0
  c->r[3]=R32(c->r[1]+0x00000014u); // 804528C4
  W16(c->r[31]+0x0000003Eu,c->r[3]); // 804528C8
  W16(c->r[31]+0x00000040u,c->r[0]); // 804528CC
  if (!crb(c,5)) { goto L_80452974; } // 804528D0
  cmps(c,0,(int32_t)c->r[29],8); // 804528D4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 804528D8
  if (!crb(c,1)) { goto L_8045294C; } // 804528DC
  c->r[5]=0u+0x00000000u; // 804528E0
  if (crb(c,4)) { goto L_804528FC; } // 804528E4
  c->r[3]=0u+0x80000000u; // 804528E8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804528EC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 804528F0
  if (crb(c,1)) { goto L_804528FC; } // 804528F4
  c->r[5]=0u+0x00000001u; // 804528F8
L_804528FC:;
  cmps(c,0,(int32_t)c->r[5],0); // 804528FC
  if (crb(c,2)) { goto L_8045294C; } // 80452900
  c->r[0]=c->r[4]+0x00000007u; // 80452904
  c->r[5]=c->r[31]|c->r[31]; // 80452908
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8045290C
  c->r[3]=0u+0xFFFFFF80u; // 80452910
  c->ctr=c->r[0]; // 80452914
  cmps(c,0,(int32_t)c->r[4],0); // 80452918
  if (!crb(c,1)) { goto L_8045294C; } // 8045291C
L_80452920:;
  W16(c->r[5]+0x00000042u,c->r[3]); // 80452920
  c->r[6]=c->r[6]+0x00000008u; // 80452924
  W16(c->r[5]+0x00000044u,c->r[3]); // 80452928
  W16(c->r[5]+0x00000046u,c->r[3]); // 8045292C
  W16(c->r[5]+0x00000048u,c->r[3]); // 80452930
  W16(c->r[5]+0x0000004Au,c->r[3]); // 80452934
  W16(c->r[5]+0x0000004Cu,c->r[3]); // 80452938
  W16(c->r[5]+0x0000004Eu,c->r[3]); // 8045293C
  W16(c->r[5]+0x00000050u,c->r[3]); // 80452940
  c->r[5]=c->r[5]+0x00000010u; // 80452944
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80452920; } // 80452948
L_8045294C:;
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8045294C
  c->r[0]=c->r[29]-c->r[6]; // 80452950
  c->r[4]=c->r[31]+c->r[3]; // 80452954
  c->r[3]=0u+0xFFFFFF80u; // 80452958
  c->ctr=c->r[0]; // 8045295C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 80452960
  if (!crb(c,0)) { goto L_80452974; } // 80452964
L_80452968:;
  W16(c->r[4]+0x00000042u,c->r[3]); // 80452968
  c->r[4]=c->r[4]+0x00000002u; // 8045296C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80452968; } // 80452970
L_80452974:;
  c->r[3]=0u+0x00000000u; // 80452974
  c->r[0]=0u+0x00000001u; // 80452978
  W16(c->r[31]+0x00000046u,c->r[3]); // 8045297C
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 80452980
  W32(c->r[31]+0x00000054u,c->r[3]); // 80452984
  W32(c->r[31]+0x00000058u,c->r[3]); // 80452988
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 8045298C
  W16(c->r[31]+0x00000060u,c->r[3]); // 80452990
  W32(c->r[31]+0x00000064u,c->r[3]); // 80452994
  W16(c->r[31]+0x00000068u,c->r[3]); // 80452998
  W16(c->r[31]+0x0000006Au,c->r[3]); // 8045299C
  W8(c->r[31]+0x0000006Du,c->r[0]); // 804529A0
  W8(c->r[31]+0x00000072u,c->r[3]); // 804529A4
  W32(c->r[31]+0x00000088u,c->r[3]); // 804529A8
  W8(c->r[31]+0x00000098u,c->r[3]); // 804529AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 804529B0
  cmps(c,0,(int32_t)c->r[3],0); // 804529B4
  if (crb(c,2)) { goto L_804529C4; } // 804529B8
  c->r[4]=0u+0x00000000u; // 804529BC
  c->lr=0x804529C4u; f_8045115C(c); // 804529C0
L_804529C4:;
  c->r[0]=0u+0x00000001u; // 804529C4
  W8(c->r[31]+0x000000A9u,c->r[0]); // 804529C8
  W8(c->r[31]+0x00000000u,c->r[0]); // 804529CC
  c->lr=0x804529D4u; f_80458F2C(c); // 804529D0
  c->r[3]=c->r[31]|c->r[31]; // 804529D4
L_804529D8:;
  c->r[11]=c->r[1]+0x00000030u; // 804529D8
  c->lr=0x804529E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804529DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 804529E0
  c->lr=c->r[0]; // 804529E4
  c->r[1]=c->r[1]+0x00000030u; // 804529E8
  return; // 804529EC
}

// fn_804529F0
void f_804529F0(Ctx* __restrict c) {
  trace_call(0x804529F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804529F0
  c->r[0]=c->lr; // 804529F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804529F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804529FC
  c->r[31]=c->r[3]|c->r[3]; // 80452A00
  c->lr=0x80452A08u; f_80458F30(c); // 80452A04
  c->r[3]=c->r[31]|c->r[31]; // 80452A08
  c->lr=0x80452A10u; f_80452A28(c); // 80452A0C
  c->lr=0x80452A14u; f_80458F34(c); // 80452A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80452A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80452A18
  c->lr=c->r[0]; // 80452A1C
  c->r[1]=c->r[1]+0x00000010u; // 80452A20
  return; // 80452A24
}

// fn_80452A28
void f_80452A28(Ctx* __restrict c) {
  trace_call(0x80452A28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452A28
  c->r[0]=c->lr; // 80452A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80452A30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80452A34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80452A38
  c->r[31]=c->r[3]|c->r[3]; // 80452A3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80452A40
  W32(c->r[1]+0x00000014u,c->r[29]); // 80452A44
  W32(c->r[1]+0x00000010u,c->r[28]); // 80452A48
  if (!crb(c,2)) { goto L_80452A64; } // 80452A4C
  c->r[3]=0u+0x806B0000u; // 80452A50
  c->r[3]=c->r[3]+0xFFFF8888u; // 80452A54
  c->r[3]=c->r[3]+0x0000007Fu; // 80452A58
  c->lr=0x80452A60u; f_80459D44(c); // 80452A5C
  goto L_80452C68; // 80452A60
L_80452A64:;
  c->r[4]=0u+0x807E0000u; // 80452A64
  c->r[12]=R32(c->r[4]+0x00004D20u); // 80452A68
  cmps(c,0,(int32_t)c->r[12],0); // 80452A6C
  if (crb(c,2)) { goto L_80452A7C; } // 80452A70
  c->ctr=c->r[12]; // 80452A74
  if (true) { c->lr=0x80452A7Cu; dispatch(c,c->ctr); } // 80452A78
L_80452A7C:;
  c->r[3]=0u+0x807E0000u; // 80452A7C
  c->r[12]=R32(c->r[3]+0x00004D24u); // 80452A80
  cmps(c,0,(int32_t)c->r[12],0); // 80452A84
  if (crb(c,2)) { goto L_80452A98; } // 80452A88
  c->r[3]=c->r[31]|c->r[31]; // 80452A8C
  c->ctr=c->r[12]; // 80452A90
  if (true) { c->lr=0x80452A98u; dispatch(c,c->ctr); } // 80452A94
L_80452A98:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80452A98
  cmps(c,0,(int32_t)c->r[0],1); // 80452A9C
  if (!crb(c,2)) { goto L_80452B10; } // 80452AA0
  cmps(c,0,(int32_t)c->r[31],0); // 80452AA4
  if (!crb(c,2)) { goto L_80452AC0; } // 80452AA8
  c->r[3]=0u+0x806B0000u; // 80452AAC
  c->r[3]=c->r[3]+0xFFFF8888u; // 80452AB0
  c->r[3]=c->r[3]+0x000000A7u; // 80452AB4
  c->lr=0x80452ABCu; f_80459D44(c); // 80452AB8
  goto L_80452B10; // 80452ABC
L_80452AC0:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80452AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80452AC4
  if (crb(c,2)) { goto L_80452AD0; } // 80452AC8
  c->lr=0x80452AD0u; f_80451740(c); // 80452ACC
L_80452AD0:;
  c->lr=0x80452AD4u; f_80458F28(c); // 80452AD0
  c->r[0]=R8(c->r[31]+0x00000002u); // 80452AD4
  cmps(c,0,(int32_t)c->r[0],4); // 80452AD8
  if (!crb(c,2)) { goto L_80452B04; } // 80452ADC
  c->r[3]=R32(c->r[31]+0x00000094u); // 80452AE0
  c->lr=0x80452AE8u; f_8045D074(c); // 80452AE4
  c->r[3]=R32(c->r[31]+0x00000014u); // 80452AE8
  cmps(c,0,(int32_t)c->r[3],0); // 80452AEC
  if (crb(c,2)) { goto L_80452B04; } // 80452AF0
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452AF4
  c->r[12]=R32(c->r[4]+0x00000014u); // 80452AF8
  c->ctr=c->r[12]; // 80452AFC
  if (true) { c->lr=0x80452B04u; dispatch(c,c->ctr); } // 80452B00
L_80452B04:;
  c->r[3]=c->r[31]|c->r[31]; // 80452B04
  c->lr=0x80452B0Cu; f_80452FB8(c); // 80452B08
  c->lr=0x80452B10u; f_80458F2C(c); // 80452B0C
L_80452B10:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80452B10
  cmps(c,0,(int32_t)c->r[3],0); // 80452B14
  if (crb(c,2)) { goto L_80452B28; } // 80452B18
  c->r[0]=0u+0x00000000u; // 80452B1C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80452B20
  c->lr=0x80452B28u; f_8046491C(c); // 80452B24
L_80452B28:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80452B28
  cmps(c,0,(int32_t)c->r[3],0); // 80452B2C
  if (crb(c,2)) { goto L_80452B40; } // 80452B30
  c->r[0]=0u+0x00000000u; // 80452B34
  W32(c->r[31]+0x00000004u,c->r[0]); // 80452B38
  c->lr=0x80452B40u; f_804501A8(c); // 80452B3C
L_80452B40:;
  c->r[29]=R32(c->r[31]+0x00000008u); // 80452B40
  cmps(c,0,(int32_t)c->r[29],0); // 80452B44
  if (crb(c,2)) { goto L_80452B6C; } // 80452B48
  c->r[0]=0u+0x00000000u; // 80452B4C
  c->r[3]=c->r[29]|c->r[29]; // 80452B50
  W32(c->r[31]+0x00000008u,c->r[0]); // 80452B54
  c->r[4]=0u+0x00000000u; // 80452B58
  c->r[5]=0u+0x00000000u; // 80452B5C
  c->lr=0x80452B64u; f_80451C00(c); // 80452B60
  c->r[3]=c->r[29]|c->r[29]; // 80452B64
  c->lr=0x80452B6Cu; f_804515A4(c); // 80452B68
L_80452B6C:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 80452B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80452B70
  if (crb(c,2)) { goto L_80452B84; } // 80452B74
  c->r[0]=0u+0x00000000u; // 80452B78
  W32(c->r[31]+0x00000094u,c->r[0]); // 80452B7C
  c->lr=0x80452B84u; f_8045CB0C(c); // 80452B80
L_80452B84:;
  c->lr=0x80452B88u; f_80458F28(c); // 80452B84
  c->r[3]=R32(c->r[31]+0x00000010u); // 80452B88
  cmps(c,0,(int32_t)c->r[3],0); // 80452B8C
  if (crb(c,2)) { goto L_80452BAC; } // 80452B90
  c->r[0]=0u+0x00000000u; // 80452B94
  W32(c->r[31]+0x00000010u,c->r[0]); // 80452B98
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452B9C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80452BA0
  c->ctr=c->r[12]; // 80452BA4
  if (true) { c->lr=0x80452BACu; dispatch(c,c->ctr); } // 80452BA8
L_80452BAC:;
  c->r[29]=c->r[31]|c->r[31]; // 80452BAC
  c->r[28]=0u+0x00000000u; // 80452BB0
  c->r[30]=0u+0x00000000u; // 80452BB4
  goto L_80452C24; // 80452BB8
L_80452BBC:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 80452BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80452BC0
  if (crb(c,2)) { goto L_80452BDC; } // 80452BC4
  W32(c->r[29]+0x00000018u,c->r[30]); // 80452BC8
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452BCC
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80452BD0
  c->ctr=c->r[12]; // 80452BD4
  if (true) { c->lr=0x80452BDCu; dispatch(c,c->ctr); } // 80452BD8
L_80452BDC:;
  c->r[3]=R32(c->r[29]+0x00000078u); // 80452BDC
  cmps(c,0,(int32_t)c->r[3],0); // 80452BE0
  if (crb(c,2)) { goto L_80452BFC; } // 80452BE4
  W32(c->r[29]+0x00000078u,c->r[30]); // 80452BE8
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452BEC
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80452BF0
  c->ctr=c->r[12]; // 80452BF4
  if (true) { c->lr=0x80452BFCu; dispatch(c,c->ctr); } // 80452BF8
L_80452BFC:;
  c->r[3]=R32(c->r[29]+0x00000080u); // 80452BFC
  cmps(c,0,(int32_t)c->r[3],0); // 80452C00
  if (crb(c,2)) { goto L_80452C1C; } // 80452C04
  W32(c->r[29]+0x00000080u,c->r[30]); // 80452C08
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452C0C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80452C10
  c->ctr=c->r[12]; // 80452C14
  if (true) { c->lr=0x80452C1Cu; dispatch(c,c->ctr); } // 80452C18
L_80452C1C:;
  c->r[29]=c->r[29]+0x00000004u; // 80452C1C
  c->r[28]=c->r[28]+0x00000001u; // 80452C20
L_80452C24:;
  c->r[0]=R8(c->r[31]+0x00000003u); // 80452C24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80452C28
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80452C2C
  if (crb(c,0)) { IRQCHK(c); goto L_80452BBC; } // 80452C30
  c->r[3]=R32(c->r[31]+0x00000074u); // 80452C34
  cmps(c,0,(int32_t)c->r[3],0); // 80452C38
  if (crb(c,2)) { goto L_80452C4C; } // 80452C3C
  c->r[0]=0u+0x00000000u; // 80452C40
  W32(c->r[31]+0x00000074u,c->r[0]); // 80452C44
  c->lr=0x80452C4Cu; f_8045572C(c); // 80452C48
L_80452C4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80452C4C
  c->r[4]=0u+0x00000000u; // 80452C50
  c->r[5]=0u+0x000000C4u; // 80452C54
  c->lr=0x80452C5Cu; f_800043EC(c); // 80452C58
  c->r[0]=0u+0x00000000u; // 80452C5C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80452C60
  c->lr=0x80452C68u; f_80458F2C(c); // 80452C64
L_80452C68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80452C68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80452C6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80452C70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80452C74
  c->r[28]=R32(c->r[1]+0x00000010u); // 80452C78
  c->lr=c->r[0]; // 80452C7C
  c->r[1]=c->r[1]+0x00000020u; // 80452C80
  return; // 80452C84
}

// fn_80452C88
void f_80452C88(Ctx* __restrict c) {
  trace_call(0x80452C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452C88
  c->r[0]=c->lr; // 80452C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80452C90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80452C94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80452C98
  c->lr=0x80452CA0u; f_80458F30(c); // 80452C9C
  c->r[30]=0u+0x807E0000u; // 80452CA0
  c->r[31]=0u+0x00000000u; // 80452CA4
  c->r[30]=c->r[30]+0x00002568u; // 80452CA8
L_80452CAC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80452CAC
  cmps(c,0,(int32_t)c->r[0],1); // 80452CB0
  if (!crb(c,2)) { goto L_80452CC0; } // 80452CB4
  c->r[3]=c->r[30]|c->r[30]; // 80452CB8
  c->lr=0x80452CC0u; f_80452A28(c); // 80452CBC
L_80452CC0:;
  c->r[31]=c->r[31]+0x00000001u; // 80452CC0
  c->r[30]=c->r[30]+0x000000C4u; // 80452CC4
  cmps(c,0,(int32_t)c->r[31],16); // 80452CC8
  if (crb(c,0)) { IRQCHK(c); goto L_80452CAC; } // 80452CCC
  c->lr=0x80452CD4u; f_80458F34(c); // 80452CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80452CD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80452CD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80452CDC
  c->lr=c->r[0]; // 80452CE0
  c->r[1]=c->r[1]+0x00000010u; // 80452CE4
  return; // 80452CE8
}

// fn_80452CEC
void f_80452CEC(Ctx* __restrict c) {
  trace_call(0x80452CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452CEC
  c->r[0]=c->lr; // 80452CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80452CF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80452CF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80452CFC
  c->r[30]=0u+0x00000000u; // 80452D00
  W32(c->r[1]+0x00000014u,c->r[29]); // 80452D04
  c->r[29]=c->r[4]|c->r[4]; // 80452D08
  W32(c->r[1]+0x00000010u,c->r[28]); // 80452D0C
  c->r[28]=c->r[3]|c->r[3]; // 80452D10
  c->r[31]=c->r[28]|c->r[28]; // 80452D14
  goto L_80452D38; // 80452D18
L_80452D1C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80452D1C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452D20
  c->r[12]=R32(c->r[4]+0x00000014u); // 80452D24
  c->ctr=c->r[12]; // 80452D28
  if (true) { c->lr=0x80452D30u; dispatch(c,c->ctr); } // 80452D2C
  c->r[31]=c->r[31]+0x00000004u; // 80452D30
  c->r[30]=c->r[30]+0x00000001u; // 80452D34
L_80452D38:;
  c->r[0]=R8(c->r[28]+0x00000003u); // 80452D38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80452D3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80452D40
  if (crb(c,0)) { IRQCHK(c); goto L_80452D1C; } // 80452D44
  c->r[3]=R32(c->r[28]+0x00000004u); // 80452D48
  c->r[4]=c->r[29]|c->r[29]; // 80452D4C
  c->lr=0x80452D54u; f_80450218(c); // 80452D50
  W32(c->r[28]+0x00000014u,c->r[29]); // 80452D54
  c->r[3]=R32(c->r[28]+0x00000004u); // 80452D58
  c->lr=0x80452D60u; f_80450238(c); // 80452D5C
  c->r[3]=0u+0x80000000u; // 80452D60
  c->r[6]=0u+0x00000000u; // 80452D64
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80452D68
  c->r[4]=0u+0xFFFFFFFFu; // 80452D6C
  c->r[3]=0u+0x00000001u; // 80452D70
  c->r[0]=R8(c->r[28]+0x00000002u); // 80452D74
  W8(c->r[28]+0x00000001u,c->r[3]); // 80452D78
  c->r[3]=0u+0x807E0000u; // 80452D7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80452D80
  W32(c->r[28]+0x0000004Cu,c->r[6]); // 80452D84
  cmps(c,0,(int32_t)c->r[0],4); // 80452D88
  W8(c->r[28]+0x00000071u,c->r[6]); // 80452D8C
  W32(c->r[28]+0x0000008Cu,c->r[5]); // 80452D90
  W32(c->r[28]+0x00000090u,c->r[4]); // 80452D94
  W32(c->r[28]+0x0000009Cu,c->r[6]); // 80452D98
  W32(c->r[28]+0x000000A4u,c->r[6]); // 80452D9C
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80452DA0
  W32(c->r[28]+0x000000A0u,c->r[0]); // 80452DA4
  W32(c->r[28]+0x000000C0u,c->r[6]); // 80452DA8
  if (!crb(c,2)) { goto L_80452DC4; } // 80452DAC
  c->lr=0x80452DB4u; f_80458F30(c); // 80452DB0
  c->r[3]=c->r[28]|c->r[28]; // 80452DB4
  c->r[4]=0u+0x00000000u; // 80452DB8
  c->lr=0x80452DC0u; f_80453C90(c); // 80452DBC
  c->lr=0x80452DC4u; f_80458F34(c); // 80452DC0
L_80452DC4:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 80452DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80452DC8
  if (crb(c,2)) { goto L_80452DD4; } // 80452DCC
  c->lr=0x80452DD4u; f_80455774(c); // 80452DD0
L_80452DD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80452DD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80452DD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80452DDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80452DE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80452DE4
  c->lr=c->r[0]; // 80452DE8
  c->r[1]=c->r[1]+0x00000020u; // 80452DEC
  return; // 80452DF0
}

// fn_80452DF4
void f_80452DF4(Ctx* __restrict c) {
  trace_call(0x80452DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452DF4
  c->r[0]=c->lr; // 80452DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80452DFC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80452E00
  c->r[27]=c->r[3]|c->r[3]; // 80452E04
  c->r[28]=c->r[4]|c->r[4]; // 80452E08
  c->r[29]=c->r[5]|c->r[5]; // 80452E0C
  c->r[30]=c->r[6]|c->r[6]; // 80452E10
  c->r[31]=c->r[7]|c->r[7]; // 80452E14
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000003Eu); // 80452E18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000003Cu); // 80452E1C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80452E20
  c->r[4]=rotl(c->r[8],11)&0xFFFFF800u; // 80452E24
  c->r[5]=rotl(c->r[0],11)&0xFFFFF800u; // 80452E28
  c->lr=0x80452E30u; f_804524B4(c); // 80452E2C
  c->r[4]=0u+0x80710000u; // 80452E30
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E34
  c->r[4]=R32(c->r[4]+0x00004A98u); // 80452E38
  c->lr=0x80452E40u; f_80451C50(c); // 80452E3C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E40
  c->r[4]=0u+0x00000000u; // 80452E44
  c->r[5]=0u+0x00000000u; // 80452E48
  c->lr=0x80452E50u; f_80451C00(c); // 80452E4C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E50
  c->r[4]=0u+0x00000000u; // 80452E54
  c->lr=0x80452E5Cu; f_80451944(c); // 80452E58
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E5C
  c->lr=0x80452E64u; f_80451A74(c); // 80452E60
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E64
  c->lr=0x80452E6Cu; f_80451740(c); // 80452E68
  c->r[0]=sraw(c,c->r[31],31); // 80452E6C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E70
  c->r[7]=rotl(c->r[0],11)&0xFFFFF800u; // 80452E74
  c->r[4]=c->r[28]|c->r[28]; // 80452E78
  c->r[7]=(rotl(c->r[31],11)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 80452E7C
  c->r[5]=c->r[29]|c->r[29]; // 80452E80
  c->r[6]=c->r[30]|c->r[30]; // 80452E84
  c->r[8]=rotl(c->r[31],11)&0xFFFFF800u; // 80452E88
  c->lr=0x80452E90u; f_804516AC(c); // 80452E8C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80452E90
  c->lr=0x80452E98u; f_804519E8(c); // 80452E94
  c->r[4]=R32(c->r[27]+0x00000010u); // 80452E98
  c->r[3]=c->r[27]|c->r[27]; // 80452E9C
  c->lr=0x80452EA4u; f_80452CEC(c); // 80452EA0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80452EA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80452EA8
  c->lr=c->r[0]; // 80452EAC
  c->r[1]=c->r[1]+0x00000020u; // 80452EB0
  return; // 80452EB4
}

// fn_80452EB8
void f_80452EB8(Ctx* __restrict c) {
  trace_call(0x80452EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452EB8
  c->r[0]=c->lr; // 80452EBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80452EC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80452EC4
  c->r[31]=c->r[4]|c->r[4]; // 80452EC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80452ECC
  c->r[30]=c->r[3]|c->r[3]; // 80452ED0
  c->lr=0x80452ED8u; f_80458F30(c); // 80452ED4
  cmps(c,1,(int32_t)c->r[30],0); // 80452ED8
  if (crb(c,6)) { goto L_80452EE8; } // 80452EDC
  cmps(c,0,(int32_t)c->r[31],0); // 80452EE0
  if (!crb(c,2)) { goto L_80452EFC; } // 80452EE4
L_80452EE8:;
  c->r[3]=0u+0x806B0000u; // 80452EE8
  c->r[3]=c->r[3]+0xFFFF8888u; // 80452EEC
  c->r[3]=c->r[3]+0x000000CCu; // 80452EF0
  c->lr=0x80452EF8u; f_80459D44(c); // 80452EF4
  goto L_80452F9C; // 80452EF8
L_80452EFC:;
  if (!crb(c,6)) { goto L_80452F14; } // 80452EFC
  c->r[3]=0u+0x806B0000u; // 80452F00
  c->r[3]=c->r[3]+0xFFFF8888u; // 80452F04
  c->r[3]=c->r[3]+0x000000A7u; // 80452F08
  c->lr=0x80452F10u; f_80459D44(c); // 80452F0C
  goto L_80452F64; // 80452F10
L_80452F14:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80452F14
  cmps(c,0,(int32_t)c->r[3],0); // 80452F18
  if (crb(c,2)) { goto L_80452F24; } // 80452F1C
  c->lr=0x80452F24u; f_80451740(c); // 80452F20
L_80452F24:;
  c->lr=0x80452F28u; f_80458F28(c); // 80452F24
  c->r[0]=R8(c->r[30]+0x00000002u); // 80452F28
  cmps(c,0,(int32_t)c->r[0],4); // 80452F2C
  if (!crb(c,2)) { goto L_80452F58; } // 80452F30
  c->r[3]=R32(c->r[30]+0x00000094u); // 80452F34
  c->lr=0x80452F3Cu; f_8045D074(c); // 80452F38
  c->r[3]=R32(c->r[30]+0x00000014u); // 80452F3C
  cmps(c,0,(int32_t)c->r[3],0); // 80452F40
  if (crb(c,2)) { goto L_80452F58; } // 80452F44
  c->r[4]=R32(c->r[3]+0x00000000u); // 80452F48
  c->r[12]=R32(c->r[4]+0x00000014u); // 80452F4C
  c->ctr=c->r[12]; // 80452F50
  if (true) { c->lr=0x80452F58u; dispatch(c,c->ctr); } // 80452F54
L_80452F58:;
  c->r[3]=c->r[30]|c->r[30]; // 80452F58
  c->lr=0x80452F60u; f_80452FB8(c); // 80452F5C
  c->lr=0x80452F64u; f_80458F2C(c); // 80452F60
L_80452F64:;
  c->lr=0x80452F68u; f_80458F28(c); // 80452F64
  c->r[0]=0u+0x00000003u; // 80452F68
  c->r[3]=c->r[30]|c->r[30]; // 80452F6C
  W8(c->r[30]+0x00000002u,c->r[0]); // 80452F70
  c->r[4]=c->r[31]|c->r[31]; // 80452F74
  c->lr=0x80452F7Cu; f_80452CEC(c); // 80452F78
  c->r[3]=R32(c->r[30]+0x00000004u); // 80452F7C
  c->r[0]=0u+0x00000001u; // 80452F80
  W8(c->r[30]+0x00000098u,c->r[0]); // 80452F84
  cmps(c,0,(int32_t)c->r[3],0); // 80452F88
  if (crb(c,2)) { goto L_80452F98; } // 80452F8C
  c->r[4]=0u+0x00000001u; // 80452F90
  c->lr=0x80452F98u; f_8045115C(c); // 80452F94
L_80452F98:;
  c->lr=0x80452F9Cu; f_80458F2C(c); // 80452F98
L_80452F9C:;
  c->lr=0x80452FA0u; f_80458F34(c); // 80452F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80452FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80452FA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80452FA8
  c->lr=c->r[0]; // 80452FAC
  c->r[1]=c->r[1]+0x00000010u; // 80452FB0
  return; // 80452FB4
}

// fn_80452FB8
void f_80452FB8(Ctx* __restrict c) {
  trace_call(0x80452FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80452FB8
  c->r[0]=c->lr; // 80452FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80452FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80452FC4
  c->r[31]=c->r[3]|c->r[3]; // 80452FC8
  c->lr=0x80452FD0u; f_80458F28(c); // 80452FCC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80452FD0
  c->r[4]=0u+0x00000000u; // 80452FD4
  c->lr=0x80452FDCu; f_80464960(c); // 80452FD8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80452FDC
  c->r[4]=0u+0x00000000u; // 80452FE0
  c->lr=0x80452FE8u; f_80464964(c); // 80452FE4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80452FE8
  c->lr=0x80452FF0u; f_80450280(c); // 80452FEC
  c->r[0]=R8(c->r[31]+0x00000002u); // 80452FF0
  cmps(c,0,(int32_t)c->r[0],2); // 80452FF4
  if (!crb(c,2)) { goto L_80453020; } // 80452FF8
  c->r[3]=R32(c->r[31]+0x00000014u); // 80452FFC
  cmps(c,0,(int32_t)c->r[3],0); // 80453000
  if (crb(c,2)) { goto L_80453020; } // 80453004
  c->r[0]=0u+0x00000000u; // 80453008
  W32(c->r[31]+0x00000014u,c->r[0]); // 8045300C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80453010
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80453014
  c->ctr=c->r[12]; // 80453018
  if (true) { c->lr=0x80453020u; dispatch(c,c->ctr); } // 8045301C
L_80453020:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 80453020
  cmps(c,0,(int32_t)c->r[3],0); // 80453024
  if (crb(c,2)) { goto L_80453030; } // 80453028
  c->lr=0x80453030u; f_80455930(c); // 8045302C
L_80453030:;
  c->r[0]=0u+0x00000000u; // 80453030
  W32(c->r[31]+0x00000014u,c->r[0]); // 80453034
  W8(c->r[31]+0x00000001u,c->r[0]); // 80453038
  W8(c->r[31]+0x000000A8u,c->r[0]); // 8045303C
  c->lr=0x80453044u; f_80458F2C(c); // 80453040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453048
  c->lr=c->r[0]; // 8045304C
  c->r[1]=c->r[1]+0x00000010u; // 80453050
  return; // 80453054
}

// fn_80453058
void f_80453058(Ctx* __restrict c) {
  trace_call(0x80453058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453058
  c->r[0]=c->lr; // 8045305C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453064
  c->r[31]=c->r[3]|c->r[3]; // 80453068
  c->lr=0x80453070u; f_80458F30(c); // 8045306C
  cmps(c,0,(int32_t)c->r[31],0); // 80453070
  if (!crb(c,2)) { goto L_8045308C; } // 80453074
  c->r[3]=0u+0x806B0000u; // 80453078
  c->r[3]=c->r[3]+0xFFFF8888u; // 8045307C
  c->r[3]=c->r[3]+0x000000A7u; // 80453080
  c->lr=0x80453088u; f_80459D44(c); // 80453084
  goto L_804530DC; // 80453088
L_8045308C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8045308C
  cmps(c,0,(int32_t)c->r[3],0); // 80453090
  if (crb(c,2)) { goto L_8045309C; } // 80453094
  c->lr=0x8045309Cu; f_80451740(c); // 80453098
L_8045309C:;
  c->lr=0x804530A0u; f_80458F28(c); // 8045309C
  c->r[0]=R8(c->r[31]+0x00000002u); // 804530A0
  cmps(c,0,(int32_t)c->r[0],4); // 804530A4
  if (!crb(c,2)) { goto L_804530D0; } // 804530A8
  c->r[3]=R32(c->r[31]+0x00000094u); // 804530AC
  c->lr=0x804530B4u; f_8045D074(c); // 804530B0
  c->r[3]=R32(c->r[31]+0x00000014u); // 804530B4
  cmps(c,0,(int32_t)c->r[3],0); // 804530B8
  if (crb(c,2)) { goto L_804530D0; } // 804530BC
  c->r[4]=R32(c->r[3]+0x00000000u); // 804530C0
  c->r[12]=R32(c->r[4]+0x00000014u); // 804530C4
  c->ctr=c->r[12]; // 804530C8
  if (true) { c->lr=0x804530D0u; dispatch(c,c->ctr); } // 804530CC
L_804530D0:;
  c->r[3]=c->r[31]|c->r[31]; // 804530D0
  c->lr=0x804530D8u; f_80452FB8(c); // 804530D4
  c->lr=0x804530DCu; f_80458F2C(c); // 804530D8
L_804530DC:;
  c->lr=0x804530E0u; f_80458F34(c); // 804530DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804530E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804530E4
  c->lr=c->r[0]; // 804530E8
  c->r[1]=c->r[1]+0x00000010u; // 804530EC
  return; // 804530F0
}

// fn_804530F4
void f_804530F4(Ctx* __restrict c) {
  trace_call(0x804530F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804530F4
  c->r[0]=c->lr; // 804530F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804530FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453100
  c->r[31]=c->r[3]|c->r[3]; // 80453104
  c->lr=0x8045310Cu; f_80458F30(c); // 80453108
  cmps(c,0,(int32_t)c->r[31],0); // 8045310C
  if (!crb(c,2)) { goto L_8045312C; } // 80453110
  c->r[3]=0u+0x806B0000u; // 80453114
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453118
  c->r[3]=c->r[3]+0x000000F4u; // 8045311C
  c->lr=0x80453124u; f_80459D44(c); // 80453120
  c->r[31]=0u+0xFFFFFFFFu; // 80453124
  goto L_80453134; // 80453128
L_8045312C:;
  c->r[31]=R8(c->r[31]+0x00000001u); // 8045312C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80453130
L_80453134:;
  c->lr=0x80453138u; f_80458F34(c); // 80453134
  c->r[3]=c->r[31]|c->r[31]; // 80453138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8045313C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453140
  c->lr=c->r[0]; // 80453144
  c->r[1]=c->r[1]+0x00000010u; // 80453148
  return; // 8045314C
}

// fn_80453150
void f_80453150(Ctx* __restrict c) {
  trace_call(0x80453150u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453150
  c->r[0]=c->lr; // 80453154
  W32(c->r[1]+0x00000024u,c->r[0]); // 80453158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8045315C
  c->r[31]=c->r[4]|c->r[4]; // 80453160
  W32(c->r[1]+0x00000018u,c->r[30]); // 80453164
  c->r[30]=c->r[3]|c->r[3]; // 80453168
  W32(c->r[1]+0x00000014u,c->r[29]); // 8045316C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80453170
  c->r[28]=c->r[5]|c->r[5]; // 80453174
  c->r[6]=R8(c->r[3]+0x00000001u); // 80453178
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 8045317C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80453180
  cmpu(c,0,c->r[0],0x00000001u); // 80453184
  if (crb(c,1)) { goto L_80453218; } // 80453188
  c->r[3]=R32(c->r[3]+0x00000004u); // 8045318C
  c->lr=0x80453194u; f_80451190(c); // 80453190
  W32(c->r[28]+0x00000000u,c->r[3]); // 80453194
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453198
  c->lr=0x804531A0u; f_8045114C(c); // 8045319C
  cmps(c,0,(int32_t)c->r[30],0); // 804531A0
  c->r[29]=c->r[3]|c->r[3]; // 804531A4
  if (!crb(c,2)) { goto L_804531C4; } // 804531A8
  c->r[3]=0u+0x806B0000u; // 804531AC
  c->r[3]=c->r[3]+0xFFFF8888u; // 804531B0
  c->r[3]=c->r[3]+0x0000011Cu; // 804531B4
  c->lr=0x804531BCu; f_80459D44(c); // 804531B8
  c->r[28]=0u+0xFFFFFFFFu; // 804531BC
  goto L_804531F8; // 804531C0
L_804531C4:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 804531C4
  cmps(c,0,(int32_t)c->r[3],0); // 804531C8
  if (crb(c,2)) { goto L_804531F4; } // 804531CC
  c->r[5]=R32(c->r[3]+0x00000000u); // 804531D0
  c->r[4]=0u+0x00000001u; // 804531D4
  c->r[12]=R32(c->r[5]+0x00000024u); // 804531D8
  c->ctr=c->r[12]; // 804531DC
  if (true) { c->lr=0x804531E4u; dispatch(c,c->ctr); } // 804531E0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 804531E4
  c->r[0]=c->r[0]+c->r[3]; // 804531E8
  c->r[28]=sraw(c,c->r[0],1); // 804531EC
  goto L_804531F8; // 804531F0
L_804531F4:;
  c->r[28]=0u+0x00000000u; // 804531F4
L_804531F8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 804531F8
  c->lr=0x80453200u; f_80464968(c); // 804531FC
  c->r[3]=c->r[3]+c->r[28]; // 80453200
  c->r[0]=R32(c->r[30]+0x000000A4u); // 80453204
  c->r[3]=c->r[29]-c->r[3]; // 80453208
  c->r[0]=c->r[0]+c->r[3]; // 8045320C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80453210
  goto L_80453278; // 80453214
L_80453218:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80453218
  cmps(c,0,(int32_t)c->r[0],5); // 8045321C
  if (!crb(c,2)) { goto L_80453268; } // 80453220
  c->r[3]=R32(c->r[3]+0x00000004u); // 80453224
  c->lr=0x8045322Cu; f_804511B0(c); // 80453228
  W32(c->r[31]+0x00000000u,c->r[3]); // 8045322C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453230
  c->lr=0x80453238u; f_80451190(c); // 80453234
  W32(c->r[28]+0x00000000u,c->r[3]); // 80453238
  c->r[3]=R32(c->r[30]+0x00000004u); // 8045323C
  c->lr=0x80453244u; f_804511A0(c); // 80453240
  c->r[4]=0u+0x00000010u; // 80453244
  c->r[0]=R32(c->r[31]+0x00000000u); // 80453248
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 8045324C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80453250
  W32(c->r[31]+0x00000000u,c->r[3]); // 80453254
  c->r[0]=R32(c->r[30]+0x000000A4u); // 80453258
  c->r[0]=c->r[3]+c->r[0]; // 8045325C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80453260
  goto L_80453278; // 80453264
L_80453268:;
  c->r[3]=0u+0x00000000u; // 80453268
  c->r[0]=0u+0x00000001u; // 8045326C
  W32(c->r[4]+0x00000000u,c->r[3]); // 80453270
  W32(c->r[5]+0x00000000u,c->r[0]); // 80453274
L_80453278:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80453278
  c->r[0]=R32(c->r[30]+0x00000088u); // 8045327C
  c->r[0]=c->r[3]+c->r[0]; cr0(c,c->r[0]); // 80453280
  W32(c->r[31]+0x00000000u,c->r[0]); // 80453284
  if (!crb(c,0)) { goto L_80453294; } // 80453288
  c->r[0]=0u+0x00000000u; // 8045328C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80453290
L_80453294:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80453294
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80453298
  c->r[30]=R32(c->r[1]+0x00000018u); // 8045329C
  c->r[29]=R32(c->r[1]+0x00000014u); // 804532A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 804532A4
  c->lr=c->r[0]; // 804532A8
  c->r[1]=c->r[1]+0x00000020u; // 804532AC
  return; // 804532B0
}

// fn_804532B4
void f_804532B4(Ctx* __restrict c) {
  trace_call(0x804532B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804532B4
  c->r[0]=c->lr; // 804532B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 804532BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804532C0
  c->r[31]=c->r[5]|c->r[5]; // 804532C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 804532C8
  c->r[30]=c->r[4]|c->r[4]; // 804532CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 804532D0
  c->r[29]=c->r[3]|c->r[3]; // 804532D4
  c->lr=0x804532DCu; f_80458F30(c); // 804532D8
  c->r[3]=c->r[29]|c->r[29]; // 804532DC
  c->r[4]=c->r[30]|c->r[30]; // 804532E0
  c->r[5]=c->r[31]|c->r[31]; // 804532E4
  c->lr=0x804532ECu; f_8045330C(c); // 804532E8
  c->lr=0x804532F0u; f_80458F34(c); // 804532EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 804532F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804532F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 804532F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 804532FC
  c->lr=c->r[0]; // 80453300
  c->r[1]=c->r[1]+0x00000020u; // 80453304
  return; // 80453308
}

// fn_8045330C
void f_8045330C(Ctx* __restrict c) {
  trace_call(0x8045330Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045330C
  c->r[0]=c->lr; // 80453310
  W32(c->r[1]+0x00000044u,c->r[0]); // 80453314
  c->r[11]=c->r[1]+0x00000040u; // 80453318
  c->lr=0x80453320u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8045331C
  c->r[0]=0u+0x43300000u; // 80453320
  cmps(c,0,(int32_t)c->r[3],0); // 80453324
  c->r[30]=0u+0x806B0000u; // 80453328
  c->r[31]=0u+0x807E0000u; // 8045332C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80453330
  c->r[27]=c->r[3]|c->r[3]; // 80453334
  c->r[28]=c->r[4]|c->r[4]; // 80453338
  c->r[29]=c->r[5]|c->r[5]; // 8045333C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80453340
  c->r[30]=c->r[30]+0xFFFF8860u; // 80453344
  c->r[31]=c->r[31]+0x00004CF0u; // 80453348
  if (crb(c,2)) { goto L_80453360; } // 8045334C
  cmps(c,0,(int32_t)c->r[4],0); // 80453350
  if (crb(c,2)) { goto L_80453360; } // 80453354
  cmps(c,0,(int32_t)c->r[5],0); // 80453358
  if (!crb(c,2)) { goto L_80453374; } // 8045335C
L_80453360:;
  c->r[3]=0u+0x806B0000u; // 80453360
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453364
  c->r[3]=c->r[3]+0x0000014Bu; // 80453368
  c->lr=0x80453370u; f_80459D44(c); // 8045336C
  goto L_804535D4; // 80453370
L_80453374:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 80453374
  cmps(c,0,(int32_t)c->r[0],0); // 80453378
  if (!crb(c,2)) { goto L_80453388; } // 8045337C
  c->lr=0x80453384u; f_80453150(c); // 80453380
  goto L_804535D4; // 80453384
L_80453388:;
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80453388
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8045338C
  c->r[5]=R8(c->r[3]+0x00000001u); // 80453390
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 80453394
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80453398
  cmpu(c,0,c->r[0],0x00000001u); // 8045339C
  if (crb(c,1)) { goto L_8045350C; } // 804533A0
  c->r[0]=R8(c->r[3]+0x00000072u); // 804533A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804533A8
  if (!crb(c,2)) { goto L_804533D4; } // 804533AC
  c->r[5]=0u+0x807E0000u; // 804533B0
  c->r[6]=R32(c->r[3]+0x000000A0u); // 804533B4
  c->r[0]=R32(c->r[5]+0x0000255Cu); // 804533B8
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 804533BC
  c->r[0]=c->r[0]-c->r[6]; // 804533C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 804533C4
  c->r[0]=c->r[3]+c->r[0]; // 804533C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 804533CC
  goto L_804533DC; // 804533D0
L_804533D4:;
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 804533D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804533D8
L_804533DC:;
  c->r[3]=c->r[27]|c->r[27]; // 804533DC
  c->r[4]=c->r[1]+0x0000000Cu; // 804533E0
  c->r[5]=c->r[1]+0x00000008u; // 804533E4
  c->lr=0x804533ECu; f_80453150(c); // 804533E8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 804533EC
  c->r[0]=R32(c->r[1]+0x00000008u); // 804533F0
  c->r[5]=c->r[3]^0x80000000u; // 804533F4
  c->r[3]=R32(c->r[28]+0x00000000u); // 804533F8
  c->r[4]=c->r[0]^0x80000000u; // 804533FC
  W32(c->r[1]+0x00000014u,c->r[5]); // 80453400
  c->r[0]=R32(c->r[31]+0x00000038u); // 80453404
  c->r[3]=c->r[3]^0x80000000u; // 80453408
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8045340C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80453410
  c->r[0]=c->r[0]^0x80000000u; // 80453414
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80453418
  {uint32_t ea=c->r[30]+0x00000008u; c->f[6]=RF64(ea);} // 8045341C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80453420
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 80453424
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80453428
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 8045342C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80453430
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80453434
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80453438
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8045343C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 80453440
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80453444
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[4]); // 80453448
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8045344C
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 80453450
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80453454
  fcmp(c,0,c->f[1],c->f[0]); // 80453458
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 8045345C
  if (crb(c,1)) { goto L_80453470; } // 80453460
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80453464
  fcmp(c,0,c->f[1],c->f[0]); // 80453468
  if (!crb(c,0)) { goto L_804535BC; } // 8045346C
L_80453470:;
  c->r[3]=0u+0x80710000u; // 80453470
  c->r[0]=R32(c->r[3]+0x00004A9Cu); // 80453474
  cmpu(c,0,c->r[0],0x00000001u); // 80453478
  if (!crb(c,2)) { goto L_804534AC; } // 8045347C
  c->r[26]=R32(c->r[31]+0x00000020u); // 80453480
  c->r[0]=0u+0x00000000u; // 80453484
  c->r[3]=c->r[27]|c->r[27]; // 80453488
  c->r[4]=c->r[1]+0x0000000Cu; // 8045348C
  W32(c->r[31]+0x00000020u,c->r[0]); // 80453490
  c->r[5]=c->r[1]+0x00000008u; // 80453494
  c->lr=0x8045349Cu; f_8045330C(c); // 80453498
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8045349C
  W32(c->r[31]+0x00000020u,c->r[26]); // 804534A0
  c->r[0]=c->r[3]+0x00000001u; // 804534A4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 804534A8
L_804534AC:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 804534AC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 804534B0
  c->r[4]=c->r[0]^0x80000000u; // 804534B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 804534B8
  W32(c->r[1]+0x00000014u,c->r[4]); // 804534BC
  c->r[3]=c->r[3]^0x80000000u; // 804534C0
  c->r[0]=c->r[0]^0x80000000u; // 804534C4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=RF64(ea);} // 804534C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804534CC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 804534D0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 804534D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 804534D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 804534DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 804534E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 804534E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 804534E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 804534EC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 804534F0
  c->lr=0x804534F8u; f_803A9ADC(c); // 804534F4
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 804534F8
  c->r[3]=0u+0x807E0000u; // 804534FC
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80453500
  W32(c->r[27]+0x000000A0u,c->r[0]); // 80453504
  goto L_804535BC; // 80453508
L_8045350C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8045350C
  cmps(c,0,(int32_t)c->r[0],5); // 80453510
  if (!crb(c,2)) { goto L_804535B4; } // 80453514
  c->r[3]=R32(c->r[3]+0x00000004u); // 80453518
  c->lr=0x80453520u; f_804511B0(c); // 8045351C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80453520
  c->r[3]=R32(c->r[27]+0x00000004u); // 80453524
  c->lr=0x8045352Cu; f_80451190(c); // 80453528
  W32(c->r[1]+0x00000008u,c->r[3]); // 8045352C
  c->r[3]=R32(c->r[27]+0x00000004u); // 80453530
  c->lr=0x80453538u; f_804511A0(c); // 80453534
  c->r[4]=0u+0x00000010u; // 80453538
  c->r[0]=R32(c->r[31]+0x00000038u); // 8045353C
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 80453540
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80453544
  c->r[3]=c->r[0]^0x80000000u; // 80453548
  c->r[0]=R32(c->r[1]+0x00000008u); // 8045354C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80453550
  c->r[0]=c->r[0]^0x80000000u; // 80453554
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 80453558
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8045355C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=RF64(ea);} // 80453560
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80453564
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80453568
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8045356C
  c->r[0]=c->r[3]^0x80000000u; // 80453570
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80453574
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453578
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8045357C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80453580
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80453584
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80453588
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8045358C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80453590
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80453594
  c->r[3]=R32(c->r[1]+0x00000024u); // 80453598
  W32(c->r[28]+0x00000000u,c->r[3]); // 8045359C
  c->r[0]=R32(c->r[27]+0x0000009Cu); // 804535A0
  c->r[3]=c->r[0]+c->r[3]; // 804535A4
  c->r[0]=c->r[3]+0x00000001u; // 804535A8
  W32(c->r[28]+0x00000000u,c->r[0]); // 804535AC
  goto L_804535BC; // 804535B0
L_804535B4:;
  c->r[0]=0u+0x00000000u; // 804535B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 804535B8
L_804535BC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 804535BC
  c->r[0]=R32(c->r[27]+0x00000088u); // 804535C0
  c->r[0]=c->r[3]+c->r[0]; // 804535C4
  W32(c->r[28]+0x00000000u,c->r[0]); // 804535C8
  c->r[0]=R32(c->r[31]+0x00000038u); // 804535CC
  W32(c->r[29]+0x00000000u,c->r[0]); // 804535D0
L_804535D4:;
  c->r[11]=c->r[1]+0x00000040u; // 804535D4
  c->lr=0x804535DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 804535D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 804535DC
  c->lr=c->r[0]; // 804535E0
  c->r[1]=c->r[1]+0x00000040u; // 804535E4
  return; // 804535E8
}

// fn_804535EC
void f_804535EC(Ctx* __restrict c) {
  trace_call(0x804535ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804535EC
  c->r[0]=c->lr; // 804535F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804535F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804535F8
  c->r[31]=c->r[3]|c->r[3]; // 804535FC
  c->lr=0x80453604u; f_80458F30(c); // 80453600
  cmps(c,0,(int32_t)c->r[31],0); // 80453604
  if (!crb(c,2)) { goto L_80453624; } // 80453608
  c->r[3]=0u+0x806B0000u; // 8045360C
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453610
  c->r[3]=c->r[3]+0x00000173u; // 80453614
  c->lr=0x8045361Cu; f_80459D44(c); // 80453618
  c->r[31]=0u+0xFFFFFFFFu; // 8045361C
  goto L_80453648; // 80453620
L_80453624:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 80453624
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80453628
  cmps(c,0,(int32_t)c->r[0],2); // 8045362C
  if (crb(c,0)) { goto L_80453640; } // 80453630
  c->r[3]=R32(c->r[31]+0x00000004u); // 80453634
  c->lr=0x8045363Cu; f_804511B0(c); // 80453638
  goto L_80453644; // 8045363C
L_80453640:;
  c->r[3]=0u+0x00000000u; // 80453640
L_80453644:;
  c->r[31]=c->r[3]|c->r[3]; // 80453644
L_80453648:;
  c->lr=0x8045364Cu; f_80458F34(c); // 80453648
  c->r[3]=c->r[31]|c->r[31]; // 8045364C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453650
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453654
  c->lr=c->r[0]; // 80453658
  c->r[1]=c->r[1]+0x00000010u; // 8045365C
  return; // 80453660
}

// fn_80453664
void f_80453664(Ctx* __restrict c) {
  trace_call(0x80453664u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453664
  c->r[0]=c->lr; // 80453668
  W32(c->r[1]+0x00000014u,c->r[0]); // 8045366C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453670
  c->r[31]=c->r[3]|c->r[3]; // 80453674
  c->lr=0x8045367Cu; f_80458F30(c); // 80453678
  cmps(c,0,(int32_t)c->r[31],0); // 8045367C
  if (!crb(c,2)) { goto L_8045369C; } // 80453680
  c->r[3]=0u+0x806B0000u; // 80453684
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453688
  c->r[3]=c->r[3]+0x0000019Eu; // 8045368C
  c->lr=0x80453694u; f_80459D44(c); // 80453690
  c->r[31]=0u+0xFFFFFFFFu; // 80453694
  goto L_804536C0; // 80453698
L_8045369C:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 8045369C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804536A0
  cmps(c,0,(int32_t)c->r[0],2); // 804536A4
  if (crb(c,0)) { goto L_804536B8; } // 804536A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 804536AC
  c->lr=0x804536B4u; f_80451190(c); // 804536B0
  goto L_804536BC; // 804536B4
L_804536B8:;
  c->r[3]=0u+0x00000000u; // 804536B8
L_804536BC:;
  c->r[31]=c->r[3]|c->r[3]; // 804536BC
L_804536C0:;
  c->lr=0x804536C4u; f_80458F34(c); // 804536C0
  c->r[3]=c->r[31]|c->r[31]; // 804536C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804536C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804536CC
  c->lr=c->r[0]; // 804536D0
  c->r[1]=c->r[1]+0x00000010u; // 804536D4
  return; // 804536D8
}

// fn_804536DC
void f_804536DC(Ctx* __restrict c) {
  trace_call(0x804536DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804536DC
  c->r[0]=c->lr; // 804536E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804536E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804536E8
  c->r[31]=c->r[3]|c->r[3]; // 804536EC
  c->lr=0x804536F4u; f_80458F30(c); // 804536F0
  cmps(c,0,(int32_t)c->r[31],0); // 804536F4
  if (!crb(c,2)) { goto L_80453714; } // 804536F8
  c->r[3]=0u+0x806B0000u; // 804536FC
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453700
  c->r[3]=c->r[3]+0x000001C7u; // 80453704
  c->lr=0x8045370Cu; f_80459D44(c); // 80453708
  c->r[31]=0u+0xFFFFFFFFu; // 8045370C
  goto L_80453738; // 80453710
L_80453714:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 80453714
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80453718
  cmps(c,0,(int32_t)c->r[0],2); // 8045371C
  if (crb(c,0)) { goto L_80453730; } // 80453720
  c->r[3]=R32(c->r[31]+0x00000004u); // 80453724
  c->lr=0x8045372Cu; f_80451198(c); // 80453728
  goto L_80453734; // 8045372C
L_80453730:;
  c->r[3]=0u+0x00000000u; // 80453730
L_80453734:;
  c->r[31]=c->r[3]|c->r[3]; // 80453734
L_80453738:;
  c->lr=0x8045373Cu; f_80458F34(c); // 80453738
  c->r[3]=c->r[31]|c->r[31]; // 8045373C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453740
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453744
  c->lr=c->r[0]; // 80453748
  c->r[1]=c->r[1]+0x00000010u; // 8045374C
  return; // 80453750
}

// fn_80453754
void f_80453754(Ctx* __restrict c) {
  trace_call(0x80453754u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453754
  c->r[0]=c->lr; // 80453758
  W32(c->r[1]+0x00000024u,c->r[0]); // 8045375C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80453760
  c->r[31]=c->r[5]|c->r[5]; // 80453764
  W32(c->r[1]+0x00000018u,c->r[30]); // 80453768
  c->r[30]=c->r[4]|c->r[4]; // 8045376C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80453770
  c->r[29]=c->r[3]|c->r[3]; // 80453774
  c->lr=0x8045377Cu; f_80458F30(c); // 80453778
  c->r[3]=c->r[29]|c->r[29]; // 8045377C
  c->r[4]=c->r[30]|c->r[30]; // 80453780
  c->r[5]=c->r[31]|c->r[31]; // 80453784
  c->lr=0x8045378Cu; f_804537AC(c); // 80453788
  c->lr=0x80453790u; f_80458F34(c); // 8045378C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80453790
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80453794
  c->r[30]=R32(c->r[1]+0x00000018u); // 80453798
  c->r[29]=R32(c->r[1]+0x00000014u); // 8045379C
  c->lr=c->r[0]; // 804537A0
  c->r[1]=c->r[1]+0x00000020u; // 804537A4
  return; // 804537A8
}

// fn_804537AC
void f_804537AC(Ctx* __restrict c) {
  trace_call(0x804537ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804537AC
  c->r[0]=c->lr; // 804537B0
  cmps(c,0,(int32_t)c->r[3],0); // 804537B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 804537B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804537BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 804537C0
  c->r[30]=c->r[5]|c->r[5]; // 804537C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804537C8
  c->r[29]=c->r[4]|c->r[4]; // 804537CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 804537D0
  c->r[28]=c->r[3]|c->r[3]; // 804537D4
  if (!crb(c,2)) { goto L_804537F0; } // 804537D8
  c->r[3]=0u+0x806B0000u; // 804537DC
  c->r[3]=c->r[3]+0xFFFF8888u; // 804537E0
  c->r[3]=c->r[3]+0x00000246u; // 804537E4
  c->lr=0x804537ECu; f_80459D44(c); // 804537E8
  goto L_804538AC; // 804537EC
L_804537F0:;
  c->r[0]=R8(c->r[3]+0x000000A9u); // 804537F0
  cmps(c,0,(int32_t)c->r[0],1); // 804537F4
  if (!crb(c,2)) { goto L_80453818; } // 804537F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 804537FC
  c->lr=0x80453804u; f_80451250(c); // 80453800
  c->r[31]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80453804
  cmps(c,0,(int32_t)c->r[31],-128); // 80453808
  if (!crb(c,2)) { goto L_8045381C; } // 8045380C
  c->r[31]=0u+0x00000000u; // 80453810
  goto L_8045381C; // 80453814
L_80453818:;
  c->r[31]=0u+0x00000000u; // 80453818
L_8045381C:;
  c->r[3]=0u+0x807E0000u; // 8045381C
  c->r[0]=R32(c->r[3]+0x00002554u); // 80453820
  cmps(c,0,(int32_t)c->r[0],0); // 80453824
  if (!crb(c,2)) { goto L_8045386C; } // 80453828
  cmps(c,0,(int32_t)c->r[30],-128); // 8045382C
  if (!crb(c,2)) { goto L_80453864; } // 80453830
  c->r[3]=R32(c->r[28]+0x00000004u); // 80453834
  c->lr=0x8045383Cu; f_80451198(c); // 80453838
  cmps(c,0,(int32_t)c->r[3],2); // 8045383C
  if (!crb(c,2)) { goto L_80453858; } // 80453840
  cmps(c,0,(int32_t)c->r[29],0); // 80453844
  c->r[5]=0u+0x0000000Fu; // 80453848
  if (!crb(c,2)) { goto L_8045385C; } // 8045384C
  c->r[5]=0u+0xFFFFFFF1u; // 80453850
  goto L_8045385C; // 80453854
L_80453858:;
  c->r[5]=0u+0x00000000u; // 80453858
L_8045385C:;
  c->r[5]=c->r[5]+c->r[31]; // 8045385C
  goto L_80453870; // 80453860
L_80453864:;
  c->r[5]=c->r[30]+c->r[31]; // 80453864
  goto L_80453870; // 80453868
L_8045386C:;
  c->r[5]=0u+0x00000000u; // 8045386C
L_80453870:;
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80453870
  c->r[3]=c->r[28]+c->r[0]; // 80453874
  W16(c->r[3]+0x00000042u,c->r[30]); // 80453878
  c->r[0]=R8(c->r[28]+0x00000003u); // 8045387C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80453880
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80453884
  if (!crb(c,0)) { goto L_8045389C; } // 80453888
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8045388C
  c->r[4]=c->r[29]|c->r[29]; // 80453890
  c->lr=0x80453898u; f_80464980(c); // 80453894
  goto L_804538AC; // 80453898
L_8045389C:;
  c->r[3]=0u+0x806B0000u; // 8045389C
  c->r[3]=c->r[3]+0xFFFF8888u; // 804538A0
  c->r[3]=c->r[3]+0x00000270u; // 804538A4
  c->lr=0x804538ACu; f_80459D44(c); // 804538A8
L_804538AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804538AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804538B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 804538B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 804538B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 804538BC
  c->lr=c->r[0]; // 804538C0
  c->r[1]=c->r[1]+0x00000020u; // 804538C4
  return; // 804538C8
}

// fn_804538CC
void f_804538CC(Ctx* __restrict c) {
  trace_call(0x804538CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804538CC
  c->r[0]=c->lr; // 804538D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 804538D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804538D8
  c->r[31]=c->r[4]|c->r[4]; // 804538DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804538E0
  c->r[30]=c->r[3]|c->r[3]; // 804538E4
  c->lr=0x804538ECu; f_80458F30(c); // 804538E8
  cmps(c,0,(int32_t)c->r[30],0); // 804538EC
  if (!crb(c,2)) { goto L_8045390C; } // 804538F0
  c->r[3]=0u+0x806B0000u; // 804538F4
  c->r[3]=c->r[3]+0xFFFF8888u; // 804538F8
  c->r[3]=c->r[3]+0x00000299u; // 804538FC
  c->lr=0x80453904u; f_80459D44(c); // 80453900
  c->r[31]=0u+0x00000000u; // 80453904
  goto L_80453918; // 80453908
L_8045390C:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 8045390C
  c->r[3]=c->r[30]+c->r[0]; // 80453910
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000042u); // 80453914
L_80453918:;
  c->lr=0x8045391Cu; f_80458F34(c); // 80453918
  c->r[3]=c->r[31]|c->r[31]; // 8045391C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453920
  c->r[30]=R32(c->r[1]+0x00000008u); // 80453924
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453928
  c->lr=c->r[0]; // 8045392C
  c->r[1]=c->r[1]+0x00000010u; // 80453930
  return; // 80453934
}

// fn_80453938
void f_80453938(Ctx* __restrict c) {
  trace_call(0x80453938u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453938
  c->r[0]=c->lr; // 8045393C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453944
  c->r[31]=c->r[4]|c->r[4]; // 80453948
  W32(c->r[1]+0x00000008u,c->r[30]); // 8045394C
  c->r[30]=c->r[3]|c->r[3]; // 80453950
  c->lr=0x80453958u; f_80458F30(c); // 80453954
  cmps(c,0,(int32_t)c->r[30],0); // 80453958
  if (!crb(c,2)) { goto L_80453974; } // 8045395C
  c->r[3]=0u+0x806B0000u; // 80453960
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453964
  c->r[3]=c->r[3]+0x0000031Fu; // 80453968
  c->lr=0x80453970u; f_80459D44(c); // 8045396C
  goto L_804539A8; // 80453970
L_80453974:;
  c->r[0]=R8(c->r[30]+0x000000A9u); // 80453974
  W16(c->r[30]+0x00000040u,c->r[31]); // 80453978
  cmps(c,0,(int32_t)c->r[0],1); // 8045397C
  if (!crb(c,2)) { goto L_80453994; } // 80453980
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453984
  c->lr=0x8045398Cu; f_804511F4(c); // 80453988
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8045398C
  goto L_80453998; // 80453990
L_80453994:;
  c->r[4]=0u+0x00000000u; // 80453994
L_80453998:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000040u); // 80453998
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8045399C
  c->r[4]=c->r[0]+c->r[4]; // 804539A0
  c->lr=0x804539A8u; f_8046497C(c); // 804539A4
L_804539A8:;
  c->lr=0x804539ACu; f_80458F34(c); // 804539A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 804539AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804539B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804539B4
  c->lr=c->r[0]; // 804539B8
  c->r[1]=c->r[1]+0x00000010u; // 804539BC
  return; // 804539C0
}

// fn_804539C4
void f_804539C4(Ctx* __restrict c) {
  trace_call(0x804539C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804539C4
  c->r[0]=c->lr; // 804539C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804539CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804539D0
  c->r[31]=c->r[3]|c->r[3]; // 804539D4
  c->lr=0x804539DCu; f_80458F30(c); // 804539D8
  cmps(c,0,(int32_t)c->r[31],0); // 804539DC
  if (!crb(c,2)) { goto L_804539FC; } // 804539E0
  c->r[3]=0u+0x806B0000u; // 804539E4
  c->r[3]=c->r[3]+0xFFFF8888u; // 804539E8
  c->r[3]=c->r[3]+0x00000349u; // 804539EC
  c->lr=0x804539F4u; f_80459D44(c); // 804539F0
  c->r[31]=0u+0x00000000u; // 804539F4
  goto L_80453A00; // 804539F8
L_804539FC:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000040u); // 804539FC
L_80453A00:;
  c->lr=0x80453A04u; f_80458F34(c); // 80453A00
  c->r[3]=c->r[31]|c->r[31]; // 80453A04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453A0C
  c->lr=c->r[0]; // 80453A10
  c->r[1]=c->r[1]+0x00000010u; // 80453A14
  return; // 80453A18
}

// fn_80453A1C
void f_80453A1C(Ctx* __restrict c) {
  trace_call(0x80453A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453A1C
  c->r[0]=c->lr; // 80453A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453A28
  c->r[31]=c->r[3]|c->r[3]; // 80453A2C
  c->lr=0x80453A34u; f_80458F30(c); // 80453A30
  c->r[4]=0u+0x807E0000u; // 80453A34
  c->r[3]=0u+0x807E0000u; // 80453A38
  W32(c->r[4]+0x00004D18u,c->r[31]); // 80453A3C
  W32(c->r[3]+0x00004D1Cu,c->r[31]); // 80453A40
  c->lr=0x80453A48u; f_80458F34(c); // 80453A44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453A4C
  c->lr=c->r[0]; // 80453A50
  c->r[1]=c->r[1]+0x00000010u; // 80453A54
  return; // 80453A58
}

// fn_80453A5C
void f_80453A5C(Ctx* __restrict c) {
  trace_call(0x80453A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453A5C
  c->r[0]=c->lr; // 80453A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453A68
  c->r[31]=c->r[4]|c->r[4]; // 80453A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80453A70
  c->r[30]=c->r[3]|c->r[3]; // 80453A74
  c->lr=0x80453A7Cu; f_80458F30(c); // 80453A78
  cmps(c,0,(int32_t)c->r[30],0); // 80453A7C
  if (!crb(c,2)) { goto L_80453A98; } // 80453A80
  c->r[3]=0u+0x806B0000u; // 80453A84
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453A88
  c->r[3]=c->r[3]+0x00000373u; // 80453A8C
  c->lr=0x80453A94u; f_80459D44(c); // 80453A90
  goto L_80453AA4; // 80453A94
L_80453A98:;
  W32(c->r[30]+0x00000038u,c->r[31]); // 80453A98
  c->r[3]=0u+0x807E0000u; // 80453A9C
  W32(c->r[3]+0x00004D1Cu,c->r[31]); // 80453AA0
L_80453AA4:;
  c->lr=0x80453AA8u; f_80458F34(c); // 80453AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453AA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453AAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80453AB0
  c->lr=c->r[0]; // 80453AB4
  c->r[1]=c->r[1]+0x00000010u; // 80453AB8
  return; // 80453ABC
}

// fn_80453AC0
void f_80453AC0(Ctx* __restrict c) {
  trace_call(0x80453AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453AC0
  c->r[0]=c->lr; // 80453AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453ACC
  c->r[31]=c->r[4]|c->r[4]; // 80453AD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80453AD4
  c->r[30]=c->r[3]|c->r[3]; // 80453AD8
  c->lr=0x80453AE0u; f_80458F30(c); // 80453ADC
  W8(c->r[30]+0x0000006Du,c->r[31]); // 80453AE0
  c->lr=0x80453AE8u; f_80458F34(c); // 80453AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453AEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80453AF0
  c->lr=c->r[0]; // 80453AF4
  c->r[1]=c->r[1]+0x00000010u; // 80453AF8
  return; // 80453AFC
}

// fn_80453B00
void f_80453B00(Ctx* __restrict c) {
  trace_call(0x80453B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453B00
  c->r[0]=c->lr; // 80453B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453B08
  c->lr=0x80453B10u; f_80458F30(c); // 80453B0C
  c->lr=0x80453B14u; f_80453B28(c); // 80453B10
  c->lr=0x80453B18u; f_80458F34(c); // 80453B14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453B18
  c->lr=c->r[0]; // 80453B1C
  c->r[1]=c->r[1]+0x00000010u; // 80453B20
  return; // 80453B24
}

// fn_80453B28
void f_80453B28(Ctx* __restrict c) {
  trace_call(0x80453B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453B28
  c->r[0]=c->lr; // 80453B2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80453B30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80453B34
  c->r[31]=0u+0x807E0000u; // 80453B38
  c->r[31]=c->r[31]+0x00004CF0u; // 80453B3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80453B40
  W32(c->r[1]+0x00000014u,c->r[29]); // 80453B44
  c->lr=0x80453B4Cu; f_80458F28(c); // 80453B48
  c->r[0]=R32(c->r[31]+0x00000024u); // 80453B4C
  cmps(c,0,(int32_t)c->r[0],0); // 80453B50
  if (crb(c,2)) { goto L_80453B60; } // 80453B54
  c->lr=0x80453B5Cu; f_80458F2C(c); // 80453B58
  goto L_80453C1C; // 80453B5C
L_80453B60:;
  c->r[0]=0u+0x00000001u; // 80453B60
  W32(c->r[31]+0x00000024u,c->r[0]); // 80453B64
  c->lr=0x80453B6Cu; f_80458F2C(c); // 80453B68
  c->r[12]=R32(c->r[31]+0x00000000u); // 80453B6C
  cmps(c,0,(int32_t)c->r[12],0); // 80453B70
  if (crb(c,2)) { goto L_80453B84; } // 80453B74
  c->r[3]=R32(c->r[31]+0x00000004u); // 80453B78
  c->ctr=c->r[12]; // 80453B7C
  if (true) { c->lr=0x80453B84u; dispatch(c,c->ctr); } // 80453B80
L_80453B84:;
  c->lr=0x80453B88u; f_80450FA4(c); // 80453B84
  c->r[0]=0u+0x00000002u; // 80453B88
  c->r[30]=0u+0x807E0000u; // 80453B8C
  W32(c->r[31]+0x00000024u,c->r[0]); // 80453B90
  c->r[30]=c->r[30]+0x00002568u; // 80453B94
  c->r[29]=0u+0x00000000u; // 80453B98
L_80453B9C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80453B9C
  cmps(c,0,(int32_t)c->r[0],1); // 80453BA0
  if (!crb(c,2)) { goto L_80453BB0; } // 80453BA4
  c->r[3]=c->r[30]|c->r[30]; // 80453BA8
  c->lr=0x80453BB0u; f_804551FC(c); // 80453BAC
L_80453BB0:;
  c->r[29]=c->r[29]+0x00000001u; // 80453BB0
  c->r[30]=c->r[30]+0x000000C4u; // 80453BB4
  cmps(c,0,(int32_t)c->r[29],16); // 80453BB8
  if (crb(c,0)) { IRQCHK(c); goto L_80453B9C; } // 80453BBC
  c->r[12]=R32(c->r[31]+0x00000010u); // 80453BC0
  c->r[0]=0u+0x00000003u; // 80453BC4
  W32(c->r[31]+0x00000024u,c->r[0]); // 80453BC8
  cmps(c,0,(int32_t)c->r[12],0); // 80453BCC
  if (crb(c,2)) { goto L_80453BE0; } // 80453BD0
  c->r[3]=R32(c->r[31]+0x00000014u); // 80453BD4
  c->ctr=c->r[12]; // 80453BD8
  if (true) { c->lr=0x80453BE0u; dispatch(c,c->ctr); } // 80453BDC
L_80453BE0:;
  c->lr=0x80453BE4u; f_80464970(c); // 80453BE0
  c->r[12]=R32(c->r[31]+0x00000018u); // 80453BE4
  cmps(c,0,(int32_t)c->r[12],0); // 80453BE8
  if (crb(c,2)) { goto L_80453BFC; } // 80453BEC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80453BF0
  c->ctr=c->r[12]; // 80453BF4
  if (true) { c->lr=0x80453BFCu; dispatch(c,c->ctr); } // 80453BF8
L_80453BFC:;
  c->r[12]=R32(c->r[31]+0x00000008u); // 80453BFC
  c->r[0]=0u+0x00000000u; // 80453C00
  W32(c->r[31]+0x00000024u,c->r[0]); // 80453C04
  cmps(c,0,(int32_t)c->r[12],0); // 80453C08
  if (crb(c,2)) { goto L_80453C1C; } // 80453C0C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80453C10
  c->ctr=c->r[12]; // 80453C14
  if (true) { c->lr=0x80453C1Cu; dispatch(c,c->ctr); } // 80453C18
L_80453C1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80453C1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80453C20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80453C24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80453C28
  c->lr=c->r[0]; // 80453C2C
  c->r[1]=c->r[1]+0x00000020u; // 80453C30
  return; // 80453C34
}

// fn_80453C38
void f_80453C38(Ctx* __restrict c) {
  trace_call(0x80453C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453C38
  c->r[0]=c->lr; // 80453C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453C44
  c->r[31]=c->r[3]|c->r[3]; // 80453C48
  c->lr=0x80453C50u; f_80458F30(c); // 80453C4C
  cmps(c,0,(int32_t)c->r[31],0); // 80453C50
  if (!crb(c,2)) { goto L_80453C70; } // 80453C54
  c->r[3]=0u+0x806B0000u; // 80453C58
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453C5C
  c->r[3]=c->r[3]+0x000004E2u; // 80453C60
  c->lr=0x80453C68u; f_80459D44(c); // 80453C64
  c->r[31]=0u+0xFFFFFFFFu; // 80453C68
  goto L_80453C74; // 80453C6C
L_80453C70:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000060u); // 80453C70
L_80453C74:;
  c->lr=0x80453C78u; f_80458F34(c); // 80453C74
  c->r[3]=c->r[31]|c->r[31]; // 80453C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453C80
  c->lr=c->r[0]; // 80453C84
  c->r[1]=c->r[1]+0x00000010u; // 80453C88
  return; // 80453C8C
}

// fn_80453C90
void f_80453C90(Ctx* __restrict c) {
  trace_call(0x80453C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453C90
  c->r[0]=c->lr; // 80453C94
  cmps(c,0,(int32_t)c->r[3],0); // 80453C98
  W32(c->r[1]+0x00000024u,c->r[0]); // 80453C9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80453CA0
  c->r[31]=c->r[4]|c->r[4]; // 80453CA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80453CA8
  c->r[30]=c->r[3]|c->r[3]; // 80453CAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80453CB0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80453CB4
  if (!crb(c,2)) { goto L_80453CD0; } // 80453CB8
  c->r[3]=0u+0x806B0000u; // 80453CBC
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453CC0
  c->r[3]=c->r[3]+0x00000563u; // 80453CC4
  c->lr=0x80453CCCu; f_80459D44(c); // 80453CC8
  goto L_80453D84; // 80453CCC
L_80453CD0:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 80453CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80453CD4
  if (!crb(c,2)) { goto L_80453CE4; } // 80453CD8
  c->r[29]=0u+0x00000000u; // 80453CDC
  goto L_80453CFC; // 80453CE0
L_80453CE4:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80453CE4
  c->r[4]=0u+0x00000001u; // 80453CE8
  c->r[12]=R32(c->r[5]+0x00000024u); // 80453CEC
  c->ctr=c->r[12]; // 80453CF0
  if (true) { c->lr=0x80453CF8u; dispatch(c,c->ctr); } // 80453CF4
  c->r[29]=c->r[3]|c->r[3]; // 80453CF8
L_80453CFC:;
  c->r[0]=R8(c->r[30]+0x00000002u); // 80453CFC
  cmps(c,0,(int32_t)c->r[0],4); // 80453D00
  if (crb(c,2)) { goto L_80453D80; } // 80453D04
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 80453D08
  cmps(c,0,(int32_t)c->r[0],1); // 80453D0C
  if (!crb(c,2)) { goto L_80453D80; } // 80453D10
  cmps(c,0,(int32_t)c->r[31],0); // 80453D14
  if (!crb(c,2)) { goto L_80453D80; } // 80453D18
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453D1C
  c->lr=0x80453D24u; f_80451144(c); // 80453D20
  c->r[28]=c->r[29]+c->r[3]; // 80453D24
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453D28
  c->lr=0x80453D30u; f_804511C8(c); // 80453D2C
  c->r[0]=c->r[3]+0x000007FFu; // 80453D30
  c->r[3]=R32(c->r[30]+0x00000004u); // 80453D34
  c->r[0]=sraw(c,c->r[0],11); // 80453D38
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80453D3C
  c->r[29]=rotl(c->r[0],11)&0xFFFFF800u; // 80453D40
  c->lr=0x80453D48u; f_804511EC(c); // 80453D44
  c->r[0]=c->r[3]+0x000007FFu; // 80453D48
  c->r[0]=sraw(c,c->r[0],11); // 80453D4C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80453D50
  c->r[0]=rotl(c->r[0],11)&0xFFFFF800u; // 80453D54
  c->r[3]=c->r[0]-c->r[29]; cr0(c,c->r[3]); // 80453D58
  if (crb(c,1)) { goto L_80453D6C; } // 80453D5C
  c->r[0]=0u+0x00000000u; // 80453D60
  W32(c->r[30]+0x000000C0u,c->r[0]); // 80453D64
  goto L_80453D80; // 80453D68
L_80453D6C:;
  c->r[0]=c->r[28]-c->r[29]; // 80453D6C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 80453D70
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80453D74
  c->r[0]=c->r[29]+c->r[0]; // 80453D78
  W32(c->r[30]+0x000000C0u,c->r[0]); // 80453D7C
L_80453D80:;
  W8(c->r[30]+0x0000006Cu,c->r[31]); // 80453D80
L_80453D84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80453D84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80453D88
  c->r[30]=R32(c->r[1]+0x00000018u); // 80453D8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80453D90
  c->r[28]=R32(c->r[1]+0x00000010u); // 80453D94
  c->lr=c->r[0]; // 80453D98
  c->r[1]=c->r[1]+0x00000020u; // 80453D9C
  return; // 80453DA0
}

// fn_80453DA4
void f_80453DA4(Ctx* __restrict c) {
  trace_call(0x80453DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453DA4
  c->r[0]=c->lr; // 80453DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453DB0
  c->r[31]=c->r[4]|c->r[4]; // 80453DB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80453DB8
  c->r[30]=c->r[3]|c->r[3]; // 80453DBC
  c->lr=0x80453DC4u; f_80458F30(c); // 80453DC0
  c->r[3]=c->r[30]|c->r[30]; // 80453DC4
  c->r[4]=c->r[31]|c->r[31]; // 80453DC8
  c->lr=0x80453DD0u; f_80453DEC(c); // 80453DCC
  c->lr=0x80453DD4u; f_80458F34(c); // 80453DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453DD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453DD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80453DDC
  c->lr=c->r[0]; // 80453DE0
  c->r[1]=c->r[1]+0x00000010u; // 80453DE4
  return; // 80453DE8
}

// fn_80453DEC
void f_80453DEC(Ctx* __restrict c) {
  trace_call(0x80453DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453DEC
  c->r[0]=c->lr; // 80453DF0
  cmps(c,0,(int32_t)c->r[3],0); // 80453DF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80453DF8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80453DFC
  c->r[31]=c->r[3]|c->r[3]; // 80453E00
  W32(c->r[1]+0x00000038u,c->r[30]); // 80453E04
  W32(c->r[1]+0x00000034u,c->r[29]); // 80453E08
  c->r[29]=c->r[4]|c->r[4]; // 80453E0C
  if (!crb(c,2)) { goto L_80453E28; } // 80453E10
  c->r[3]=0u+0x806B0000u; // 80453E14
  c->r[3]=c->r[3]+0xFFFF8888u; // 80453E18
  c->r[3]=c->r[3]+0x00000619u; // 80453E1C
  c->lr=0x80453E24u; f_80459D44(c); // 80453E20
  goto L_80453F14; // 80453E24
L_80453E28:;
  c->r[0]=R8(c->r[3]+0x00000072u); // 80453E28
  c->r[30]=R8(c->r[3]+0x00000001u); // 80453E2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80453E30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80453E34
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80453E38
  if (crb(c,2)) { goto L_80453F14; } // 80453E3C
  c->lr=0x80453E44u; f_80458F28(c); // 80453E40
  c->r[0]=c->r[30]+0xFFFFFFFDu; // 80453E44
  W8(c->r[31]+0x00000072u,c->r[29]); // 80453E48
  cmpu(c,0,c->r[0],0x00000001u); // 80453E4C
  if (crb(c,1)) { goto L_80453F10; } // 80453E50
  cmps(c,0,(int32_t)c->r[29],1); // 80453E54
  if (!crb(c,2)) { goto L_80453E6C; } // 80453E58
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80453E5C
  c->r[4]=0u+0x00000000u; // 80453E60
  c->lr=0x80453E68u; f_80464964(c); // 80453E64
  goto L_80453E84; // 80453E68
L_80453E6C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80453E6C
  c->r[4]=0u+0x00000001u; // 80453E70
  c->lr=0x80453E78u; f_80464964(c); // 80453E74
  c->r[3]=0u+0x807E0000u; // 80453E78
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80453E7C
  W32(c->r[31]+0x000000A0u,c->r[0]); // 80453E80
L_80453E84:;
  c->r[30]=0u+0x807E0000u; // 80453E84
  c->r[0]=0u+0x00000000u; // 80453E88
  c->r[29]=R32(c->r[30]+0x00004D10u); // 80453E8C
  c->r[3]=c->r[31]|c->r[31]; // 80453E90
  c->r[4]=c->r[1]+0x0000000Cu; // 80453E94
  c->r[5]=c->r[1]+0x00000008u; // 80453E98
  W32(c->r[30]+0x00004D10u,c->r[0]); // 80453E9C
  c->lr=0x80453EA4u; f_8045330C(c); // 80453EA0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80453EA4
  c->r[4]=0u+0x43300000u; // 80453EA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80453EAC
  c->r[5]=0u+0x806B0000u; // 80453EB0
  c->r[3]=c->r[3]^0x80000000u; // 80453EB4
  W32(c->r[1]+0x00000018u,c->r[4]); // 80453EB8
  c->r[0]=c->r[0]^0x80000000u; // 80453EBC
  {uint32_t ea=c->r[5]+0xFFFF8868u; c->f[2]=RF64(ea);} // 80453EC0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80453EC4
  c->r[6]=0u+0x807E0000u; // 80453EC8
  c->r[3]=R32(c->r[6]+0x00004D28u); // 80453ECC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80453ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80453ED4
  c->r[3]=c->r[3]^0x80000000u; // 80453ED8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80453EDC
  W32(c->r[1]+0x00000020u,c->r[4]); // 80453EE0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80453EE4
  W32(c->r[1]+0x00000014u,c->r[3]); // 80453EE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80453EEC
  W32(c->r[1]+0x00000010u,c->r[4]); // 80453EF0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80453EF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80453EF8
  W32(c->r[30]+0x00004D10u,c->r[29]); // 80453EFC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80453F00
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80453F04
  c->lr=0x80453F0Cu; f_803A9ADC(c); // 80453F08
  W32(c->r[31]+0x0000009Cu,c->r[3]); // 80453F0C
L_80453F10:;
  c->lr=0x80453F14u; f_80458F2C(c); // 80453F10
L_80453F14:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80453F14
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80453F18
  c->r[30]=R32(c->r[1]+0x00000038u); // 80453F1C
  c->r[29]=R32(c->r[1]+0x00000034u); // 80453F20
  c->lr=c->r[0]; // 80453F24
  c->r[1]=c->r[1]+0x00000040u; // 80453F28
  return; // 80453F2C
}

// fn_80453F30
void f_80453F30(Ctx* __restrict c) {
  trace_call(0x80453F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453F30
  c->r[0]=c->lr; // 80453F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453F38
  c->lr=0x80453F40u; f_80458F30(c); // 80453F3C
  c->lr=0x80453F44u; f_80458F34(c); // 80453F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453F44
  c->lr=c->r[0]; // 80453F48
  c->r[1]=c->r[1]+0x00000010u; // 80453F4C
  return; // 80453F50
}

// fn_80453F54
void f_80453F54(Ctx* __restrict c) {
  trace_call(0x80453F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453F54
  c->r[0]=c->lr; // 80453F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453F5C
  c->lr=0x80453F64u; f_80458F30(c); // 80453F60
  c->lr=0x80453F68u; f_80458F34(c); // 80453F64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453F68
  c->lr=c->r[0]; // 80453F6C
  c->r[1]=c->r[1]+0x00000010u; // 80453F70
  return; // 80453F74
}

// fn_80453F78
void f_80453F78(Ctx* __restrict c) {
  trace_call(0x80453F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453F78
  c->r[0]=c->lr; // 80453F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80453F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80453F84
  c->r[31]=c->r[3]|c->r[3]; // 80453F88
  c->lr=0x80453F90u; f_80458F30(c); // 80453F8C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80453F90
  c->lr=0x80453F98u; f_80450230(c); // 80453F94
  c->lr=0x80453F9Cu; f_80458F34(c); // 80453F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80453F9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80453FA0
  c->lr=c->r[0]; // 80453FA4
  c->r[1]=c->r[1]+0x00000010u; // 80453FA8
  return; // 80453FAC
}

// fn_80453FB0
void f_80453FB0(Ctx* __restrict c) {
  trace_call(0x80453FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80453FB0
  c->r[0]=c->lr; // 80453FB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80453FB8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80453FBC
  c->r[31]=c->r[3]|c->r[3]; // 80453FC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 80453FC4
  W32(c->r[1]+0x00000034u,c->r[29]); // 80453FC8
  W32(c->r[1]+0x00000030u,c->r[28]); // 80453FCC
  c->r[28]=c->r[4]|c->r[4]; // 80453FD0
  c->lr=0x80453FD8u; f_80458F30(c); // 80453FD4
  c->r[0]=R8(c->r[31]+0x00000072u); // 80453FD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80453FDC
  if (!crb(c,2)) { goto L_80453FEC; } // 80453FE0
  c->r[28]=0u+0x00000000u; // 80453FE4
  goto L_804540A0; // 80453FE8
L_80453FEC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80453FEC
  c->r[4]=c->r[28]|c->r[28]; // 80453FF0
  c->lr=0x80453FF8u; f_8046498C(c); // 80453FF4
  c->r[28]=c->r[3]|c->r[3]; // 80453FF8
  c->lr=0x80454000u; f_80458F30(c); // 80453FFC
  c->lr=0x80454004u; f_80453B28(c); // 80454000
  c->lr=0x80454008u; f_80458F34(c); // 80454004
  c->r[30]=0u+0x807E0000u; // 80454008
  c->r[0]=0u+0x00000000u; // 8045400C
  c->r[29]=R32(c->r[30]+0x00004D10u); // 80454010
  c->r[3]=c->r[31]|c->r[31]; // 80454014
  c->r[4]=c->r[1]+0x00000008u; // 80454018
  c->r[5]=c->r[1]+0x0000000Cu; // 8045401C
  W32(c->r[30]+0x00004D10u,c->r[0]); // 80454020
  c->lr=0x80454028u; f_8045330C(c); // 80454024
  c->r[3]=R32(c->r[1]+0x00000008u); // 80454028
  c->r[4]=0u+0x43300000u; // 8045402C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80454030
  c->r[5]=0u+0x806B0000u; // 80454034
  c->r[3]=c->r[3]^0x80000000u; // 80454038
  W32(c->r[1]+0x00000018u,c->r[4]); // 8045403C
  c->r[0]=c->r[0]^0x80000000u; // 80454040
  {uint32_t ea=c->r[5]+0xFFFF8868u; c->f[2]=RF64(ea);} // 80454044
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80454048
  c->r[6]=0u+0x807E0000u; // 8045404C
  c->r[3]=R32(c->r[6]+0x00004D28u); // 80454050
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80454054
  W32(c->r[1]+0x00000024u,c->r[0]); // 80454058
  c->r[3]=c->r[3]^0x80000000u; // 8045405C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80454060
  W32(c->r[1]+0x00000020u,c->r[4]); // 80454064
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80454068
  W32(c->r[1]+0x00000014u,c->r[3]); // 8045406C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80454070
  W32(c->r[1]+0x00000010u,c->r[4]); // 80454074
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80454078
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8045407C
  W32(c->r[30]+0x00004D10u,c->r[29]); // 80454080
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80454084
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80454088
  c->lr=0x80454090u; f_803A9ADC(c); // 8045408C
  W32(c->r[31]+0x0000009Cu,c->r[3]); // 80454090
  c->r[3]=0u+0x807E0000u; // 80454094
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80454098
  W32(c->r[31]+0x000000A0u,c->r[0]); // 8045409C
L_804540A0:;
  c->lr=0x804540A4u; f_80458F34(c); // 804540A0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804540A4
  c->r[3]=c->r[28]|c->r[28]; // 804540A8
  c->r[30]=R32(c->r[1]+0x00000038u); // 804540AC
  c->r[29]=R32(c->r[1]+0x00000034u); // 804540B0
  c->r[28]=R32(c->r[1]+0x00000030u); // 804540B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 804540B8
  c->lr=c->r[0]; // 804540BC
  c->r[1]=c->r[1]+0x00000040u; // 804540C0
  return; // 804540C4
}

// fn_804540C8
void f_804540C8(Ctx* __restrict c) {
  trace_call(0x804540C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804540C8
  c->r[0]=c->lr; // 804540CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 804540D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804540D4
  c->r[31]=c->r[4]|c->r[4]; // 804540D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 804540DC
  c->r[30]=c->r[3]|c->r[3]; // 804540E0
  c->lr=0x804540E8u; f_80458F30(c); // 804540E4
  W32(c->r[30]+0x00000088u,c->r[31]); // 804540E8
  c->lr=0x804540F0u; f_80458F34(c); // 804540EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804540F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804540F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804540F8
  c->lr=c->r[0]; // 804540FC
  c->r[1]=c->r[1]+0x00000010u; // 80454100
  return; // 80454104
}

// fn_80454108
void f_80454108(Ctx* __restrict c) {
  trace_call(0x80454108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454108
  c->r[0]=c->lr; // 8045410C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80454110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80454114
  c->r[31]=c->r[4]|c->r[4]; // 80454118
  W32(c->r[1]+0x00000008u,c->r[30]); // 8045411C
  c->r[30]=c->r[3]|c->r[3]; // 80454120
  c->lr=0x80454128u; f_80458F30(c); // 80454124
  c->r[3]=R32(c->r[30]+0x00000004u); // 80454128
  W8(c->r[30]+0x00000098u,c->r[31]); // 8045412C
  cmps(c,0,(int32_t)c->r[3],0); // 80454130
  if (crb(c,2)) { goto L_80454140; } // 80454134
  c->r[4]=c->r[31]|c->r[31]; // 80454138
  c->lr=0x80454140u; f_8045115C(c); // 8045413C
L_80454140:;
  c->lr=0x80454144u; f_80458F34(c); // 80454140
  c->r[0]=R32(c->r[1]+0x00000014u); // 80454144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80454148
  c->r[30]=R32(c->r[1]+0x00000008u); // 8045414C
  c->lr=c->r[0]; // 80454150
  c->r[1]=c->r[1]+0x00000010u; // 80454154
  return; // 80454158
}

// fn_8045415C
void f_8045415C(Ctx* __restrict c) {
  trace_call(0x8045415Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045415C
  c->r[0]=c->lr; // 80454160
  cmps(c,0,(int32_t)c->r[4],2); // 80454164
  W32(c->r[1]+0x00000034u,c->r[0]); // 80454168
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8045416C
  c->r[31]=c->r[5]|c->r[5]; // 80454170
  if (!crb(c,0)) { goto L_80454180; } // 80454174
  c->r[3]=0u+0x00000000u; // 80454178
  goto L_804541DC; // 8045417C
L_80454180:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 80454180
  cmpu(c,0,c->r[0],0x00008000u); // 80454184
  if (crb(c,2)) { goto L_80454194; } // 80454188
  c->r[3]=0u+0x00000000u; // 8045418C
  goto L_804541DC; // 80454190
L_80454194:;
  c->r[5]=c->r[1]+0x0000001Cu; // 80454194
  c->r[0]=c->r[1]+0x00000018u; // 80454198
  W32(c->r[1]+0x00000008u,c->r[5]); // 8045419C
  c->r[5]=c->r[1]+0x00000014u; // 804541A0
  c->r[6]=c->r[1]+0x00000013u; // 804541A4
  c->r[7]=c->r[1]+0x00000012u; // 804541A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804541AC
  c->r[8]=c->r[1]+0x00000011u; // 804541B0
  c->r[9]=c->r[1]+0x00000010u; // 804541B4
  c->r[10]=c->r[1]+0x00000020u; // 804541B8
  c->lr=0x804541C0u; f_8045978C(c); // 804541BC
  cmps(c,0,(int32_t)c->r[3],0); // 804541C0
  if (!crb(c,0)) { goto L_804541D0; } // 804541C4
  c->r[3]=0u+0x00000000u; // 804541C8
  goto L_804541DC; // 804541CC
L_804541D0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000014u); // 804541D0
  c->r[3]=0u+0x00000001u; // 804541D4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804541D8
L_804541DC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804541DC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804541E0
  c->lr=c->r[0]; // 804541E4
  c->r[1]=c->r[1]+0x00000030u; // 804541E8
  return; // 804541EC
}

// fn_804541F0
void f_804541F0(Ctx* __restrict c) {
  trace_call(0x804541F0u);
  cmps(c,0,(int32_t)c->r[4],2); // 804541F0
  if (!crb(c,0)) { goto L_80454200; } // 804541F4
  c->r[3]=0u+0x00000000u; // 804541F8
  return; // 804541FC
L_80454200:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 80454200
  cmpu(c,0,c->r[0],0x00008001u); // 80454204
  if (crb(c,2)) { goto L_80454214; } // 80454208
  c->r[3]=0u+0x00000000u; // 8045420C
  return; // 80454210
L_80454214:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80454214
  c->r[3]=0u+0x00000001u; // 80454218
  return; // 8045421C
}

// fn_80454220
void f_80454220(Ctx* __restrict c) {
  trace_call(0x80454220u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454220
  c->r[0]=c->lr; // 80454224
  W32(c->r[1]+0x00000024u,c->r[0]); // 80454228
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8045422C
  c->r[31]=c->r[5]|c->r[5]; // 80454230
  W32(c->r[1]+0x00000018u,c->r[30]); // 80454234
  c->r[30]=c->r[4]|c->r[4]; // 80454238
  W32(c->r[1]+0x00000014u,c->r[29]); // 8045423C
  c->r[29]=c->r[3]|c->r[3]; // 80454240
  c->lr=0x80454248u; f_80458F30(c); // 80454244
  c->r[3]=c->r[29]|c->r[29]; // 80454248
  c->r[4]=c->r[30]|c->r[30]; // 8045424C
  c->r[5]=c->r[31]|c->r[31]; // 80454250
  c->lr=0x80454258u; f_80454280(c); // 80454254
  c->r[31]=c->r[3]|c->r[3]; // 80454258
  c->lr=0x80454260u; f_80458F34(c); // 8045425C
  c->r[3]=c->r[31]|c->r[31]; // 80454260
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80454264
  c->r[30]=R32(c->r[1]+0x00000018u); // 80454268
  c->r[29]=R32(c->r[1]+0x00000014u); // 8045426C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80454270
  c->lr=c->r[0]; // 80454274
  c->r[1]=c->r[1]+0x00000020u; // 80454278
  return; // 8045427C
}

// fn_80454280
void f_80454280(Ctx* __restrict c) {
  trace_call(0x80454280u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454280
  c->r[0]=c->lr; // 80454284
  W32(c->r[1]+0x00000034u,c->r[0]); // 80454288
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8045428C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80454290
  W32(c->r[1]+0x00000024u,c->r[29]); // 80454294
  W32(c->r[1]+0x00000020u,c->r[28]); // 80454298
  c->r[30]=R32(c->r[3]+0x00000014u); // 8045429C
  cmps(c,0,(int32_t)c->r[30],0); // 804542A0
  if (!crb(c,2)) { goto L_804542B0; } // 804542A4
  c->r[3]=0u+0x00000000u; // 804542A8
  goto L_804543DC; // 804542AC
L_804542B0:;
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)18); // 804542B0
  c->r[0]=sraw(c,c->r[5],5); // 804542B4
  c->r[4]=R32(c->r[30]+0x00000000u); // 804542B8
  c->r[3]=c->r[30]|c->r[30]; // 804542BC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 804542C0
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 804542C4
  c->r[12]=R32(c->r[4]+0x00000018u); // 804542C8
  c->r[6]=c->r[1]+0x00000010u; // 804542CC
  c->r[4]=0u+0x00000000u; // 804542D0
  c->r[5]=c->r[29]|c->r[29]; // 804542D4
  c->ctr=c->r[12]; // 804542D8
  if (true) { c->lr=0x804542E0u; dispatch(c,c->ctr); } // 804542DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 804542E0
  c->r[4]=0u+0x00000000u; // 804542E4
  c->r[3]=R32(c->r[1]+0x00000010u); // 804542E8
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[31]); // 804542EC
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 804542F0
  c->r[5]=c->r[28]|c->r[28]; // 804542F4
  c->lr=0x804542FCu; f_800043EC(c); // 804542F8
  c->r[3]=c->r[1]+0x00000010u; // 804542FC
  c->r[4]=c->r[28]|c->r[28]; // 80454300
  c->r[5]=c->r[3]|c->r[3]; // 80454304
  c->r[6]=c->r[1]+0x00000008u; // 80454308
  c->lr=0x80454310u; f_804600F0(c); // 8045430C
  c->r[6]=R32(c->r[30]+0x00000000u); // 80454310
  c->r[3]=c->r[30]|c->r[30]; // 80454314
  c->r[5]=c->r[1]+0x00000010u; // 80454318
  c->r[4]=0u+0x00000001u; // 8045431C
  c->r[12]=R32(c->r[6]+0x00000020u); // 80454320
  c->ctr=c->r[12]; // 80454324
  if (true) { c->lr=0x8045432Cu; dispatch(c,c->ctr); } // 80454328
  c->r[6]=R32(c->r[30]+0x00000000u); // 8045432C
  c->r[3]=c->r[30]|c->r[30]; // 80454330
  c->r[5]=c->r[1]+0x00000008u; // 80454334
  c->r[4]=0u+0x00000000u; // 80454338
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8045433C
  c->ctr=c->r[12]; // 80454340
  if (true) { c->lr=0x80454348u; dispatch(c,c->ctr); } // 80454344
  c->r[4]=R32(c->r[30]+0x00000000u); // 80454348
  c->r[3]=c->r[30]|c->r[30]; // 8045434C
  c->r[5]=c->r[29]-c->r[28]; // 80454350
  c->r[6]=c->r[1]+0x00000010u; // 80454354
  c->r[12]=R32(c->r[4]+0x00000018u); // 80454358
  c->r[4]=0u+0x00000000u; // 8045435C
  c->ctr=c->r[12]; // 80454360
  if (true) { c->lr=0x80454368u; dispatch(c,c->ctr); } // 80454364
  c->r[0]=R32(c->r[1]+0x00000014u); // 80454368
  c->r[4]=0u+0x00000000u; // 8045436C
  c->r[3]=R32(c->r[1]+0x00000010u); // 80454370
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[31]); // 80454374
  c->r[29]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 80454378
  c->r[5]=c->r[29]|c->r[29]; // 8045437C
  c->lr=0x80454384u; f_800043EC(c); // 80454380
  c->r[3]=c->r[1]+0x00000010u; // 80454384
  c->r[4]=c->r[29]|c->r[29]; // 80454388
  c->r[5]=c->r[3]|c->r[3]; // 8045438C
  c->r[6]=c->r[1]+0x00000008u; // 80454390
  c->lr=0x80454398u; f_804600F0(c); // 80454394
  c->r[6]=R32(c->r[30]+0x00000000u); // 80454398
  c->r[3]=c->r[30]|c->r[30]; // 8045439C
  c->r[5]=c->r[1]+0x00000010u; // 804543A0
  c->r[4]=0u+0x00000001u; // 804543A4
  c->r[12]=R32(c->r[6]+0x00000020u); // 804543A8
  c->ctr=c->r[12]; // 804543AC
  if (true) { c->lr=0x804543B4u; dispatch(c,c->ctr); } // 804543B0
  c->r[6]=R32(c->r[30]+0x00000000u); // 804543B4
  c->r[3]=c->r[30]|c->r[30]; // 804543B8
  c->r[5]=c->r[1]+0x00000008u; // 804543BC
  c->r[4]=0u+0x00000000u; // 804543C0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804543C4
  c->ctr=c->r[12]; // 804543C8
  if (true) { c->lr=0x804543D0u; dispatch(c,c->ctr); } // 804543CC
  c->r[0]=c->r[28]+c->r[29]; // 804543D0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[31]); // 804543D4
  c->r[3]=rotl(c->r[0],5)&0xFFFFFFE0u; // 804543D8
L_804543DC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 804543DC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 804543E0
  c->r[30]=R32(c->r[1]+0x00000028u); // 804543E4
  c->r[29]=R32(c->r[1]+0x00000024u); // 804543E8
  c->r[28]=R32(c->r[1]+0x00000020u); // 804543EC
  c->lr=c->r[0]; // 804543F0
  c->r[1]=c->r[1]+0x00000030u; // 804543F4
  return; // 804543F8
}

// fn_804543FC
void f_804543FC(Ctx* __restrict c) {
  trace_call(0x804543FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804543FC
  c->r[0]=c->lr; // 80454400
  W32(c->r[1]+0x00000034u,c->r[0]); // 80454404
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80454408
  c->r[28]=0u+0x807E0000u; // 8045440C
  c->r[29]=0u+0x806B0000u; // 80454410
  c->r[24]=0u+0x807E0000u; // 80454414
  c->r[24]=c->r[24]+0x00002568u; // 80454418
  c->r[26]=0u+0x00000000u; // 8045441C
  c->r[29]=c->r[29]+0xFFFF8888u; // 80454420
  c->r[31]=0u+0x0000000Fu; // 80454424
  c->r[30]=0u+0xFFFFFFF1u; // 80454428
  W32(c->r[28]+0x00002554u,c->r[3]); // 8045442C
L_80454430:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 80454430
  cmps(c,0,(int32_t)c->r[0],1); // 80454434
  if (!crb(c,2)) { goto L_80454504; } // 80454438
  c->r[27]=c->r[24]|c->r[24]; // 8045443C
  c->r[25]=0u+0x00000000u; // 80454440
  goto L_80454478; // 80454444
L_80454448:;
  cmps(c,0,(int32_t)c->r[24],0); // 80454448
  if (!crb(c,2)) { goto L_80454460; } // 8045444C
  c->r[3]=c->r[29]+0x00000299u; // 80454450
  c->lr=0x80454458u; f_80459D44(c); // 80454454
  c->r[5]=0u+0x00000000u; // 80454458
  goto L_80454464; // 8045445C
L_80454460:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000042u); // 80454460
L_80454464:;
  c->r[3]=c->r[24]|c->r[24]; // 80454464
  c->r[4]=c->r[25]|c->r[25]; // 80454468
  c->lr=0x80454470u; f_804537AC(c); // 8045446C
  c->r[27]=c->r[27]+0x00000002u; // 80454470
  c->r[25]=c->r[25]+0x00000001u; // 80454474
L_80454478:;
  c->r[0]=R8(c->r[24]+0x00000003u); // 80454478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8045447C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80454480
  if (crb(c,0)) { IRQCHK(c); goto L_80454448; } // 80454484
  cmps(c,0,(int32_t)c->r[24],0); // 80454488
  if (!crb(c,2)) { goto L_804544A0; } // 8045448C
  c->r[3]=c->r[29]+0x000002F1u; // 80454490
  c->lr=0x80454498u; f_80459D44(c); // 80454494
  c->r[0]=0u+0x00000000u; // 80454498
  goto L_804544A4; // 8045449C
L_804544A0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x00000046u); // 804544A0
L_804544A4:;
  cmps(c,0,(int32_t)c->r[24],0); // 804544A4
  if (!crb(c,2)) { goto L_804544B8; } // 804544A8
  c->r[3]=c->r[29]+0x000002C3u; // 804544AC
  c->lr=0x804544B4u; f_80459D44(c); // 804544B0
  goto L_80454504; // 804544B4
L_804544B8:;
  cmps(c,0,(int32_t)c->r[0],-15); // 804544B8
  if (!crb(c,0)) { goto L_804544C8; } // 804544BC
  W16(c->r[24]+0x00000046u,c->r[30]); // 804544C0
  goto L_804544DC; // 804544C4
L_804544C8:;
  cmps(c,0,(int32_t)c->r[0],15); // 804544C8
  if (!crb(c,1)) { goto L_804544D8; } // 804544CC
  W16(c->r[24]+0x00000046u,c->r[31]); // 804544D0
  goto L_804544DC; // 804544D4
L_804544D8:;
  W16(c->r[24]+0x00000046u,c->r[0]); // 804544D8
L_804544DC:;
  c->r[0]=R32(c->r[28]+0x00002554u); // 804544DC
  cmps(c,0,(int32_t)c->r[0],0); // 804544E0
  if (!crb(c,2)) { goto L_804544F8; } // 804544E4
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 804544E8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x00000046u); // 804544EC
  c->lr=0x804544F4u; f_80464984(c); // 804544F0
  goto L_80454504; // 804544F4
L_804544F8:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 804544F8
  c->r[4]=0u+0x00000000u; // 804544FC
  c->lr=0x80454504u; f_80464984(c); // 80454500
L_80454504:;
  c->r[26]=c->r[26]+0x00000001u; // 80454504
  c->r[24]=c->r[24]+0x000000C4u; // 80454508
  cmps(c,0,(int32_t)c->r[26],16); // 8045450C
  if (crb(c,0)) { IRQCHK(c); goto L_80454430; } // 80454510
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80454514
  c->r[0]=R32(c->r[1]+0x00000034u); // 80454518
  c->lr=c->r[0]; // 8045451C
  c->r[1]=c->r[1]+0x00000030u; // 80454520
  return; // 80454524
}

// fn_80454528
void f_80454528(Ctx* __restrict c) {
  trace_call(0x80454528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454528
  c->r[0]=c->lr; // 8045452C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80454530
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80454534
  c->r[30]=c->r[3]|c->r[3]; // 80454538
  c->r[29]=R32(c->r[3]+0x00000004u); // 8045453C
  c->r[3]=c->r[29]|c->r[29]; // 80454540
  c->lr=0x80454548u; f_804511C0(c); // 80454544
  c->r[28]=c->r[3]|c->r[3]; // 80454548
  c->r[3]=c->r[29]|c->r[29]; // 8045454C
  c->lr=0x80454554u; f_804511C8(c); // 80454550
  c->r[27]=c->r[3]|c->r[3]; // 80454554
  c->r[3]=c->r[29]|c->r[29]; // 80454558
  c->lr=0x80454560u; f_804511E4(c); // 8045455C
  c->r[31]=c->r[3]|c->r[3]; // 80454560
  c->r[3]=c->r[29]|c->r[29]; // 80454564
  c->lr=0x8045456Cu; f_804512C4(c); // 80454568
  c->r[3]=c->r[29]|c->r[29]; // 8045456C
  c->r[4]=0u+0x00000000u; // 80454570
  c->lr=0x80454578u; f_80451178(c); // 80454574
  c->r[4]=c->r[31]-c->r[28]; // 80454578
  c->r[3]=c->r[29]|c->r[29]; // 8045457C
  W32(c->r[30]+0x00000090u,c->r[4]); // 80454580
  c->lr=0x80454588u; f_80451170(c); // 80454584
  c->r[3]=c->r[29]|c->r[29]; // 80454588
  c->r[4]=c->r[27]|c->r[27]; // 8045458C
  c->lr=0x80454594u; f_80451180(c); // 80454590
  c->r[3]=c->r[29]|c->r[29]; // 80454594
  c->r[4]=c->r[28]|c->r[28]; // 80454598
  c->lr=0x804545A0u; f_80451154(c); // 8045459C
  c->r[4]=0u+0x80450000u; // 804545A0
  c->r[3]=c->r[29]|c->r[29]; // 804545A4
  c->r[5]=c->r[30]|c->r[30]; // 804545A8
  c->r[4]=c->r[4]+0x000045C8u; // 804545AC
  c->lr=0x804545B4u; f_80451164(c); // 804545B0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 804545B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 804545B8
  c->lr=c->r[0]; // 804545BC
  c->r[1]=c->r[1]+0x00000020u; // 804545C0
  return; // 804545C4
}

// fn_804545C8
void f_804545C8(Ctx* __restrict c) {
  trace_call(0x804545C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804545C8
  c->r[0]=c->lr; // 804545CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 804545D0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 804545D4
  c->r[28]=c->r[3]|c->r[3]; // 804545D8
  c->r[31]=R32(c->r[3]+0x00000004u); // 804545DC
  c->r[30]=R32(c->r[3]+0x00000014u); // 804545E0
  c->r[3]=c->r[31]|c->r[31]; // 804545E4
  c->lr=0x804545ECu; f_804511C0(c); // 804545E8
  c->r[26]=c->r[3]|c->r[3]; // 804545EC
  c->r[3]=c->r[31]|c->r[31]; // 804545F0
  c->lr=0x804545F8u; f_804511C8(c); // 804545F4
  c->r[29]=c->r[3]|c->r[3]; // 804545F8
  c->r[3]=c->r[31]|c->r[31]; // 804545FC
  c->lr=0x80454604u; f_804511E4(c); // 80454600
  c->r[4]=R8(c->r[28]+0x00000002u); // 80454604
  c->r[27]=c->r[3]|c->r[3]; // 80454608
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8045460C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80454610
  cmpu(c,0,c->r[0],0x00000001u); // 80454614
  if (crb(c,1)) { goto L_80454638; } // 80454618
  c->r[0]=R8(c->r[28]+0x0000006Cu); // 8045461C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80454620
  if (!crb(c,2)) { goto L_80454638; } // 80454624
  c->r[3]=R32(c->r[28]+0x00000004u); // 80454628
  c->r[4]=0u+0xFFFFFFFFu; // 8045462C
  c->lr=0x80454634u; f_80451170(c); // 80454630
  goto L_80454734; // 80454634
L_80454638:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80454638
  c->r[3]=c->r[30]|c->r[30]; // 8045463C
  c->r[6]=c->r[1]+0x00000008u; // 80454640
  c->r[5]=R32(c->r[28]+0x00000050u); // 80454644
  c->r[12]=R32(c->r[4]+0x00000018u); // 80454648
  c->r[4]=0u+0x00000001u; // 8045464C
  c->ctr=c->r[12]; // 80454650
  if (true) { c->lr=0x80454658u; dispatch(c,c->ctr); } // 80454654
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80454658
  c->r[0]=R32(c->r[28]+0x00000050u); // 8045465C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80454660
  if (!crb(c,0)) { goto L_80454674; } // 80454664
  c->r[3]=0u+0x806B0000u; // 80454668
  c->r[3]=c->r[3]+0xFFFF8FE8u; // 8045466C
  c->lr=0x80454674u; f_80459D44(c); // 80454670
L_80454674:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 80454674
  c->r[3]=c->r[30]|c->r[30]; // 80454678
  c->r[5]=c->r[1]+0x00000008u; // 8045467C
  c->r[4]=0u+0x00000000u; // 80454680
  c->r[12]=R32(c->r[6]+0x00000020u); // 80454684
  c->ctr=c->r[12]; // 80454688
  if (true) { c->lr=0x80454690u; dispatch(c,c->ctr); } // 8045468C
  c->r[3]=c->r[31]|c->r[31]; // 80454690
  c->r[4]=0u+0x00000000u; // 80454694
  c->lr=0x8045469Cu; f_80451178(c); // 80454698
  c->r[4]=c->r[27]-c->r[26]; // 8045469C
  c->r[3]=c->r[31]|c->r[31]; // 804546A0
  W32(c->r[28]+0x00000090u,c->r[4]); // 804546A4
  c->lr=0x804546ACu; f_80451170(c); // 804546A8
  c->r[3]=c->r[31]|c->r[31]; // 804546AC
  c->r[4]=c->r[29]|c->r[29]; // 804546B0
  c->lr=0x804546B8u; f_80451180(c); // 804546B4
  c->r[3]=c->r[31]|c->r[31]; // 804546B8
  c->r[4]=c->r[26]|c->r[26]; // 804546BC
  c->lr=0x804546C4u; f_80451154(c); // 804546C0
  c->r[0]=R8(c->r[28]+0x00000002u); // 804546C4
  cmps(c,0,(int32_t)c->r[0],2); // 804546C8
  if (!crb(c,2)) { goto L_80454720; } // 804546CC
  c->r[4]=R32(c->r[30]+0x00000000u); // 804546D0
  c->r[3]=c->r[30]|c->r[30]; // 804546D4
  c->r[12]=R32(c->r[4]+0x00000014u); // 804546D8
  c->ctr=c->r[12]; // 804546DC
  if (true) { c->lr=0x804546E4u; dispatch(c,c->ctr); } // 804546E0
  c->r[4]=R32(c->r[30]+0x00000000u); // 804546E4
  c->r[3]=c->r[30]|c->r[30]; // 804546E8
  c->r[5]=c->r[29]|c->r[29]; // 804546EC
  c->r[6]=c->r[1]+0x00000008u; // 804546F0
  c->r[12]=R32(c->r[4]+0x00000018u); // 804546F4
  c->r[4]=0u+0x00000001u; // 804546F8
  c->ctr=c->r[12]; // 804546FC
  if (true) { c->lr=0x80454704u; dispatch(c,c->ctr); } // 80454700
  c->r[6]=R32(c->r[30]+0x00000000u); // 80454704
  c->r[3]=c->r[30]|c->r[30]; // 80454708
  c->r[5]=c->r[1]+0x00000008u; // 8045470C
  c->r[4]=0u+0x00000000u; // 80454710
  c->r[12]=R32(c->r[6]+0x00000020u); // 80454714
  c->ctr=c->r[12]; // 80454718
  if (true) { c->lr=0x80454720u; dispatch(c,c->ctr); } // 8045471C
L_80454720:;
  c->r[3]=c->r[31]|c->r[31]; // 80454720
  c->lr=0x80454728u; f_804512CC(c); // 80454724
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 80454728
  c->r[0]=c->r[3]+0x00000001u; // 8045472C
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 80454730
L_80454734:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80454734
  c->r[0]=R32(c->r[1]+0x00000034u); // 80454738
  c->lr=c->r[0]; // 8045473C
  c->r[1]=c->r[1]+0x00000030u; // 80454740
  return; // 80454744
}

// fn_80454748
void f_80454748(Ctx* __restrict c) {
  trace_call(0x80454748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454748
  c->r[0]=c->lr; // 8045474C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80454750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80454754
  W32(c->r[1]+0x00000008u,c->r[30]); // 80454758
  c->r[30]=c->r[3]|c->r[3]; // 8045475C
  c->r[31]=R32(c->r[3]+0x00000008u); // 80454760
  c->r[3]=R32(c->r[3]+0x00000004u); // 80454764
  cmps(c,0,(int32_t)c->r[31],0); // 80454768
  if (crb(c,2)) { goto L_804547F0; } // 8045476C
  cmps(c,0,(int32_t)c->r[3],0); // 80454770
  if (!crb(c,2)) { goto L_8045477C; } // 80454774
  goto L_804547F0; // 80454778
L_8045477C:;
  c->lr=0x80454780u; f_804511C8(c); // 8045477C
  c->r[0]=R8(c->r[30]+0x00000002u); // 80454780
  cmps(c,0,(int32_t)c->r[0],4); // 80454784
  if (!crb(c,2)) { goto L_804547A0; } // 80454788
  c->r[4]=0u+0x80000000u; // 8045478C
  c->r[3]=R32(c->r[30]+0x00000008u); // 80454790
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80454794
  c->lr=0x8045479Cu; f_80451C50(c); // 80454798
  goto L_804547F0; // 8045479C
L_804547A0:;
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 804547A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804547A4
  if (!crb(c,2)) { goto L_804547E0; } // 804547A8
  c->r[3]=R32(c->r[30]+0x00000004u); // 804547AC
  c->lr=0x804547B4u; f_80451144(c); // 804547B0
  c->r[0]=R32(c->r[30]+0x000000C0u); // 804547B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804547B8
  if (crb(c,0)) { goto L_804547CC; } // 804547BC
  c->r[3]=R32(c->r[30]+0x00000004u); // 804547C0
  c->r[4]=0u+0xFFFFFFFFu; // 804547C4
  c->lr=0x804547CCu; f_80451170(c); // 804547C8
L_804547CC:;
  c->r[4]=0u+0x80000000u; // 804547CC
  c->r[3]=R32(c->r[30]+0x00000008u); // 804547D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 804547D4
  c->lr=0x804547DCu; f_80451C50(c); // 804547D8
  goto L_804547F0; // 804547DC
L_804547E0:;
  c->r[0]=sraw(c,c->r[3],11); // 804547E0
  c->r[3]=c->r[31]|c->r[31]; // 804547E4
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 804547E8
  c->lr=0x804547F0u; f_80451944(c); // 804547EC
L_804547F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804547F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804547F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804547F8
  c->lr=c->r[0]; // 804547FC
  c->r[1]=c->r[1]+0x00000010u; // 80454800
  return; // 80454804
}

// fn_80454808
void f_80454808(Ctx* __restrict c) {
  trace_call(0x80454808u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454808
  c->r[0]=c->lr; // 8045480C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80454810
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80454814
  c->r[31]=c->r[3]|c->r[3]; // 80454818
  c->r[0]=R8(c->r[3]+0x00000098u); // 8045481C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80454820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80454824
  c->r[29]=R32(c->r[3]+0x00000014u); // 80454828
  if (crb(c,2)) { goto L_80454AF0; } // 8045482C
  c->r[0]=0u+0x00000000u; // 80454830
  W16(c->r[1]+0x00000008u,c->r[0]); // 80454834
  c->lr=0x8045483Cu; f_80458F28(c); // 80454838
  c->r[4]=R32(c->r[29]+0x00000000u); // 8045483C
  c->r[27]=0u+0x80000000u; // 80454840
  c->r[3]=c->r[29]|c->r[29]; // 80454844
  c->r[6]=c->r[1]+0x00000028u; // 80454848
  c->r[12]=R32(c->r[4]+0x00000018u); // 8045484C
  c->r[5]=c->r[27]+0xFFFFFFFFu; // 80454850
  c->r[4]=0u+0x00000001u; // 80454854
  c->ctr=c->r[12]; // 80454858
  if (true) { c->lr=0x80454860u; dispatch(c,c->ctr); } // 8045485C
  c->r[4]=R32(c->r[29]+0x00000000u); // 80454860
  c->r[3]=c->r[29]|c->r[29]; // 80454864
  c->r[5]=c->r[27]+0xFFFFFFFFu; // 80454868
  c->r[6]=c->r[1]+0x00000018u; // 8045486C
  c->r[12]=R32(c->r[4]+0x00000018u); // 80454870
  c->r[4]=0u+0x00000001u; // 80454874
  c->ctr=c->r[12]; // 80454878
  if (true) { c->lr=0x80454880u; dispatch(c,c->ctr); } // 8045487C
  c->r[3]=R32(c->r[1]+0x00000028u); // 80454880
  c->r[5]=c->r[1]+0x0000000Au; // 80454884
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 80454888
  c->lr=0x80454890u; f_80459C7C(c); // 8045488C
  cmps(c,0,(int32_t)c->r[3],0); // 80454890
  if (crb(c,2)) { goto L_804548E4; } // 80454894
  c->r[3]=c->r[31]|c->r[31]; // 80454898
  c->r[4]=0u+0x00000000u; // 8045489C
  c->lr=0x804548A4u; f_80454108(c); // 804548A0
  c->r[6]=R32(c->r[29]+0x00000000u); // 804548A4
  c->r[3]=c->r[29]|c->r[29]; // 804548A8
  c->r[5]=c->r[1]+0x00000018u; // 804548AC
  c->r[4]=0u+0x00000001u; // 804548B0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804548B4
  c->ctr=c->r[12]; // 804548B8
  if (true) { c->lr=0x804548C0u; dispatch(c,c->ctr); } // 804548BC
  c->r[6]=R32(c->r[29]+0x00000000u); // 804548C0
  c->r[3]=c->r[29]|c->r[29]; // 804548C4
  c->r[5]=c->r[1]+0x00000028u; // 804548C8
  c->r[4]=0u+0x00000001u; // 804548CC
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804548D0
  c->ctr=c->r[12]; // 804548D4
  if (true) { c->lr=0x804548DCu; dispatch(c,c->ctr); } // 804548D8
  c->lr=0x804548E0u; f_80458F2C(c); // 804548DC
  goto L_80454AF0; // 804548E0
L_804548E4:;
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 804548E4
  c->r[5]=c->r[1]+0x0000000Au; // 804548E8
  c->r[3]=R32(c->r[1]+0x00000028u); // 804548EC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 804548F0
  c->r[3]=c->r[3]+c->r[27]; // 804548F4
  c->r[4]=c->r[0]-c->r[27]; // 804548F8
  c->lr=0x80454900u; f_80459714(c); // 804548FC
  cmps(c,0,(int32_t)c->r[3],0); // 80454900
  c->r[28]=c->r[3]|c->r[3]; // 80454904
  if (!crb(c,2)) { goto L_80454914; } // 80454908
  c->r[3]=0u+0xFFFFFFFFu; // 8045490C
  goto L_80454924; // 80454910
L_80454914:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 80454914
  c->r[5]=c->r[1]+0x00000008u; // 80454918
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8045491C
  c->lr=0x80454924u; f_80459714(c); // 80454920
L_80454924:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 80454924
  cmps(c,0,(int32_t)c->r[28],0); // 80454928
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 8045492C
  c->r[27]=c->r[27]+c->r[0]; // 80454930
  if (crb(c,2)) { goto L_8045498C; } // 80454934
  cmps(c,0,(int32_t)c->r[3],0); // 80454938
  if (crb(c,2)) { goto L_8045498C; } // 8045493C
  c->r[6]=R32(c->r[29]+0x00000000u); // 80454940
  c->r[3]=c->r[29]|c->r[29]; // 80454944
  c->r[5]=c->r[1]+0x00000018u; // 80454948
  c->r[4]=0u+0x00000001u; // 8045494C
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80454950
  c->ctr=c->r[12]; // 80454954
  if (true) { c->lr=0x8045495Cu; dispatch(c,c->ctr); } // 80454958
  c->r[6]=R32(c->r[29]+0x00000000u); // 8045495C
  c->r[3]=c->r[29]|c->r[29]; // 80454960
  c->r[5]=c->r[1]+0x00000028u; // 80454964
  c->r[4]=0u+0x00000001u; // 80454968
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8045496C
  c->ctr=c->r[12]; // 80454970
  if (true) { c->lr=0x80454978u; dispatch(c,c->ctr); } // 80454974
  c->r[3]=c->r[31]|c->r[31]; // 80454978
  c->r[4]=0u+0x00000000u; // 8045497C
  c->lr=0x80454984u; f_80454108(c); // 80454980
  c->lr=0x80454988u; f_80458F2C(c); // 80454984
  goto L_80454AF0; // 80454988
L_8045498C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8045498C
  if (!crb(c,2)) { goto L_80454A00; } // 80454990
  c->r[6]=R32(c->r[29]+0x00000000u); // 80454994
  c->r[3]=c->r[29]|c->r[29]; // 80454998
  c->r[5]=c->r[1]+0x00000018u; // 8045499C
  c->r[4]=0u+0x00000001u; // 804549A0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804549A4
  c->ctr=c->r[12]; // 804549A8
  if (true) { c->lr=0x804549B0u; dispatch(c,c->ctr); } // 804549AC
  c->r[3]=c->r[1]+0x00000028u; // 804549B0
  c->r[4]=c->r[27]|c->r[27]; // 804549B4
  c->r[5]=c->r[3]|c->r[3]; // 804549B8
  c->r[6]=c->r[1]+0x00000020u; // 804549BC
  c->lr=0x804549C4u; f_804600F0(c); // 804549C0
  c->r[6]=R32(c->r[29]+0x00000000u); // 804549C4
  c->r[3]=c->r[29]|c->r[29]; // 804549C8
  c->r[5]=c->r[1]+0x00000028u; // 804549CC
  c->r[4]=0u+0x00000000u; // 804549D0
  c->r[12]=R32(c->r[6]+0x00000020u); // 804549D4
  c->ctr=c->r[12]; // 804549D8
  if (true) { c->lr=0x804549E0u; dispatch(c,c->ctr); } // 804549DC
  c->r[6]=R32(c->r[29]+0x00000000u); // 804549E0
  c->r[3]=c->r[29]|c->r[29]; // 804549E4
  c->r[5]=c->r[1]+0x00000020u; // 804549E8
  c->r[4]=0u+0x00000001u; // 804549EC
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804549F0
  c->ctr=c->r[12]; // 804549F4
  if (true) { c->lr=0x804549FCu; dispatch(c,c->ctr); } // 804549F8
  goto L_80454A68; // 804549FC
L_80454A00:;
  c->r[6]=R32(c->r[29]+0x00000000u); // 80454A00
  c->r[3]=c->r[29]|c->r[29]; // 80454A04
  c->r[5]=c->r[1]+0x00000028u; // 80454A08
  c->r[4]=0u+0x00000000u; // 80454A0C
  c->r[12]=R32(c->r[6]+0x00000020u); // 80454A10
  c->ctr=c->r[12]; // 80454A14
  if (true) { c->lr=0x80454A1Cu; dispatch(c,c->ctr); } // 80454A18
  c->r[3]=c->r[1]+0x00000018u; // 80454A1C
  c->r[4]=c->r[26]|c->r[26]; // 80454A20
  c->r[5]=c->r[3]|c->r[3]; // 80454A24
  c->r[6]=c->r[1]+0x00000010u; // 80454A28
  c->lr=0x80454A30u; f_804600F0(c); // 80454A2C
  c->r[6]=R32(c->r[29]+0x00000000u); // 80454A30
  c->r[3]=c->r[29]|c->r[29]; // 80454A34
  c->r[5]=c->r[1]+0x00000018u; // 80454A38
  c->r[4]=0u+0x00000000u; // 80454A3C
  c->r[12]=R32(c->r[6]+0x00000020u); // 80454A40
  c->ctr=c->r[12]; // 80454A44
  if (true) { c->lr=0x80454A4Cu; dispatch(c,c->ctr); } // 80454A48
  c->r[6]=R32(c->r[29]+0x00000000u); // 80454A4C
  c->r[3]=c->r[29]|c->r[29]; // 80454A50
  c->r[5]=c->r[1]+0x00000010u; // 80454A54
  c->r[4]=0u+0x00000001u; // 80454A58
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80454A5C
  c->ctr=c->r[12]; // 80454A60
  if (true) { c->lr=0x80454A68u; dispatch(c,c->ctr); } // 80454A64
L_80454A68:;
  c->lr=0x80454A6Cu; f_80458F2C(c); // 80454A68
  c->r[3]=c->r[30]|c->r[30]; // 80454A6C
  c->lr=0x80454A74u; f_8045114C(c); // 80454A70
  c->r[0]=R32(c->r[31]+0x000000A4u); // 80454A74
  c->r[0]=c->r[0]+c->r[3]; // 80454A78
  c->r[3]=c->r[30]|c->r[30]; // 80454A7C
  W32(c->r[31]+0x000000A4u,c->r[0]); // 80454A80
  c->lr=0x80454A88u; f_80450280(c); // 80454A84
  c->r[3]=c->r[30]|c->r[30]; // 80454A88
  c->lr=0x80454A90u; f_80450238(c); // 80454A8C
  c->r[3]=c->r[30]|c->r[30]; // 80454A90
  c->lr=0x80454A98u; f_80450BE4(c); // 80454A94
  c->r[3]=c->r[30]|c->r[30]; // 80454A98
  c->lr=0x80454AA0u; f_8045020C(c); // 80454A9C
  cmps(c,0,(int32_t)c->r[3],2); // 80454AA0
  if (crb(c,2)) { goto L_80454AB8; } // 80454AA4
  c->r[3]=c->r[31]|c->r[31]; // 80454AA8
  c->r[4]=0u+0x00000000u; // 80454AAC
  c->lr=0x80454AB4u; f_80454108(c); // 80454AB0
  goto L_80454AF0; // 80454AB4
L_80454AB8:;
  c->r[4]=R32(c->r[31]+0x00000048u); // 80454AB8
  c->r[3]=c->r[30]|c->r[30]; // 80454ABC
  c->lr=0x80454AC4u; f_80450224(c); // 80454AC0
  c->r[3]=c->r[30]|c->r[30]; // 80454AC4
  c->lr=0x80454ACCu; f_804511B0(c); // 80454AC8
  c->r[4]=c->r[3]|c->r[3]; // 80454ACC
  c->r[3]=c->r[30]|c->r[30]; // 80454AD0
  c->lr=0x80454AD8u; f_80451170(c); // 80454AD4
  c->r[3]=c->r[30]|c->r[30]; // 80454AD8
  c->r[4]=0u+0x00000000u; // 80454ADC
  c->lr=0x80454AE4u; f_80451180(c); // 80454AE0
  c->r[3]=c->r[30]|c->r[30]; // 80454AE4
  c->r[4]=0u+0x00000000u; // 80454AE8
  c->lr=0x80454AF0u; f_80451178(c); // 80454AEC
L_80454AF0:;
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80454AF0
  c->r[0]=R32(c->r[1]+0x00000054u); // 80454AF4
  c->lr=c->r[0]; // 80454AF8
  c->r[1]=c->r[1]+0x00000050u; // 80454AFC
  return; // 80454B00
}

// fn_80454B04
void f_80454B04(Ctx* __restrict c) {
  trace_call(0x80454B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454B04
  c->r[0]=c->lr; // 80454B08
  W32(c->r[1]+0x00000054u,c->r[0]); // 80454B0C
  c->r[0]=0u+0x00000000u; // 80454B10
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80454B14
  c->r[29]=c->r[3]|c->r[3]; // 80454B18
  c->r[30]=R32(c->r[3]+0x00000004u); // 80454B1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80454B20
  W32(c->r[1]+0x00000008u,c->r[0]); // 80454B24
  c->r[0]=R8(c->r[3]+0x00000002u); // 80454B28
  cmpu(c,0,c->r[0],0x00000001u); // 80454B2C
  if (crb(c,1)) { goto L_80454B8C; } // 80454B30
  c->r[0]=R8(c->r[3]+0x000000A8u); // 80454B34
  cmps(c,0,(int32_t)c->r[0],1); // 80454B38
  if (!crb(c,2)) { goto L_80454B8C; } // 80454B3C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80454B40
  c->lr=0x80454B48u; f_80451908(c); // 80454B44
  cmps(c,0,(int32_t)c->r[3],2); // 80454B48
  if (crb(c,2)) { goto L_80454F20; } // 80454B4C
  c->r[3]=R32(c->r[29]+0x00000010u); // 80454B50
  cmps(c,0,(int32_t)c->r[3],0); // 80454B54
  if (crb(c,2)) { goto L_80454B6C; } // 80454B58
  c->r[4]=R32(c->r[3]+0x00000000u); // 80454B5C
  c->r[12]=R32(c->r[4]+0x00000014u); // 80454B60
  c->ctr=c->r[12]; // 80454B64
  if (true) { c->lr=0x80454B6Cu; dispatch(c,c->ctr); } // 80454B68
L_80454B6C:;
  c->r[4]=R32(c->r[29]+0x000000B0u); // 80454B6C
  c->r[3]=c->r[29]|c->r[29]; // 80454B70
  c->r[5]=R32(c->r[29]+0x000000B4u); // 80454B74
  c->r[6]=R32(c->r[29]+0x000000B8u); // 80454B78
  c->r[7]=R32(c->r[29]+0x000000BCu); // 80454B7C
  c->lr=0x80454B84u; f_80452DF4(c); // 80454B80
  c->r[0]=0u+0x00000000u; // 80454B84
  W8(c->r[29]+0x000000A8u,c->r[0]); // 80454B88
L_80454B8C:;
  c->r[3]=c->r[30]|c->r[30]; // 80454B8C
  c->lr=0x80454B94u; f_8045020C(c); // 80454B90
  cmps(c,0,(int32_t)c->r[3],2); // 80454B94
  if (!crb(c,2)) { goto L_80454F10; } // 80454B98
  c->r[3]=c->r[30]|c->r[30]; // 80454B9C
  c->lr=0x80454BA4u; f_80451198(c); // 80454BA0
  c->r[0]=R8(c->r[29]+0x00000003u); // 80454BA4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80454BA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 80454BAC
  if (!crb(c,1)) { goto L_80454BE0; } // 80454BB0
  c->r[5]=c->r[1]+0x00000010u; // 80454BB4
  c->r[6]=0u+0x00000010u; // 80454BB8
  c->lr=0x80454BC0u; f_8045A0EC(c); // 80454BBC
  c->r[3]=0u+0x806B0000u; // 80454BC0
  c->r[4]=c->r[1]+0x00000010u; // 80454BC4
  c->r[3]=c->r[3]+0xFFFF8FE8u; // 80454BC8
  c->r[3]=c->r[3]+0x0000002Au; // 80454BCC
  c->lr=0x80454BD4u; f_80459DC4(c); // 80454BD0
  c->r[3]=c->r[29]|c->r[29]; // 80454BD4
  c->lr=0x80454BDCu; f_80453058(c); // 80454BD8
  goto L_80454F20; // 80454BDC
L_80454BE0:;
  c->r[3]=c->r[30]|c->r[30]; // 80454BE0
  c->lr=0x80454BE8u; f_80451190(c); // 80454BE4
  c->r[28]=c->r[3]|c->r[3]; // 80454BE8
  c->r[3]=c->r[30]|c->r[30]; // 80454BEC
  c->lr=0x80454BF4u; f_804511B8(c); // 80454BF0
  c->r[31]=c->r[3]|c->r[3]; // 80454BF4
  c->r[3]=c->r[30]|c->r[30]; // 80454BF8
  c->lr=0x80454C00u; f_80451188(c); // 80454BFC
  cmps(c,0,(int32_t)c->r[3],10); // 80454C00
  if (!crb(c,2)) { goto L_80454C24; } // 80454C04
  c->r[0]=R32(c->r[29]+0x00000038u); // 80454C08
  c->r[3]=c->r[30]|c->r[30]; // 80454C0C
  c->r[0]=divw((int32_t)c->r[28],(int32_t)c->r[0]); // 80454C10
  W32(c->r[29]+0x00000048u,c->r[0]); // 80454C14
  c->lr=0x80454C1Cu; f_804511A8(c); // 80454C18
  c->r[4]=c->r[3]|c->r[3]; // 80454C1C
  goto L_80454C70; // 80454C20
L_80454C24:;
  cmps(c,0,(int32_t)c->r[31],0); // 80454C24
  if (!crb(c,1)) { goto L_80454C44; } // 80454C28
  c->r[0]=R32(c->r[29]+0x00000038u); // 80454C2C
  c->r[3]=divw((int32_t)c->r[28],(int32_t)c->r[0]); // 80454C30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80454C34
  c->r[0]=c->r[0]-c->r[3]; // 80454C38
  W32(c->r[29]+0x00000048u,c->r[0]); // 80454C3C
  goto L_80454C64; // 80454C40
L_80454C44:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 80454C44
  c->r[3]=divw((int32_t)c->r[28],(int32_t)c->r[0]); // 80454C48
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80454C4C
  c->r[3]=c->r[0]-c->r[3]; // 80454C50
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80454C54
  c->r[0]=c->r[0]+c->r[3]; // 80454C58
  c->r[0]=sraw(c,c->r[0],1); // 80454C5C
  W32(c->r[29]+0x00000048u,c->r[0]); // 80454C60
L_80454C64:;
  c->r[3]=c->r[30]|c->r[30]; // 80454C64
  c->lr=0x80454C6Cu; f_804511A8(c); // 80454C68
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80454C6C
L_80454C70:;
  c->r[0]=R32(c->r[29]+0x00000048u); // 80454C70
  c->r[3]=c->r[30]|c->r[30]; // 80454C74
  c->r[0]=c->r[0]+c->r[4]; // 80454C78
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 80454C7C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80454C80
  W32(c->r[29]+0x00000048u,c->r[4]); // 80454C84
  c->lr=0x80454C8Cu; f_80450224(c); // 80454C88
  cmps(c,0,(int32_t)c->r[31],0); // 80454C8C
  if (!crb(c,1)) { goto L_80454D60; } // 80454C90
  c->r[0]=R8(c->r[29]+0x00000002u); // 80454C94
  cmps(c,0,(int32_t)c->r[0],2); // 80454C98
  if (!crb(c,2)) { goto L_80454CAC; } // 80454C9C
  c->r[0]=0u+0x00000000u; // 80454CA0
  W32(c->r[29]+0x00000050u,c->r[0]); // 80454CA4
  goto L_80454D10; // 80454CA8
L_80454CAC:;
  c->r[3]=c->r[30]|c->r[30]; // 80454CAC
  c->lr=0x80454CB4u; f_804511EC(c); // 80454CB0
  c->r[0]=rotl(c->r[3],21)&0xFFE00000u; // 80454CB4
  c->r[5]=rotl(c->r[3],1)&0x00000001u; // 80454CB8
  c->r[4]=c->r[0]-c->r[5]; // 80454CBC
  c->r[4]=rotl(c->r[4],11)&0xFFFFFFFFu; // 80454CC0
  c->r[0]=c->r[3]+0x000007FFu; // 80454CC4
  c->r[4]=c->r[4]+c->r[5]; // 80454CC8
  c->r[3]=R32(c->r[29]+0x00000008u); // 80454CCC
  c->r[5]=addc(c,~c->r[4],0x00000800u,1); // 80454CD0
  c->r[4]=rotl(c->r[5],21)&0xFFE00000u; // 80454CD4
  c->r[0]=sraw(c,c->r[0],11); // 80454CD8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80454CDC
  c->r[5]=c->r[4]-c->r[6]; // 80454CE0
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80454CE4
  c->r[0]=rotl(c->r[5],11)&0xFFFFFFFFu; // 80454CE8
  W32(c->r[29]+0x0000008Cu,c->r[4]); // 80454CEC
  c->r[0]=c->r[0]+c->r[6]; // 80454CF0
  W32(c->r[29]+0x00000050u,c->r[0]); // 80454CF4
  c->lr=0x80454CFCu; f_80451C50(c); // 80454CF8
  c->r[4]=0u+0x80450000u; // 80454CFC
  c->r[3]=R32(c->r[29]+0x00000008u); // 80454D00
  c->r[5]=c->r[29]|c->r[29]; // 80454D04
  c->r[4]=c->r[4]+0x00004748u; // 80454D08
  c->lr=0x80454D10u; f_80451C00(c); // 80454D0C
L_80454D10:;
  c->r[3]=c->r[30]|c->r[30]; // 80454D10
  c->lr=0x80454D18u; f_804511E4(c); // 80454D14
  c->r[3]=c->r[30]|c->r[30]; // 80454D18
  c->lr=0x80454D20u; f_804511C0(c); // 80454D1C
  W32(c->r[29]+0x00000090u,c->r[3]); // 80454D20
  c->r[4]=c->r[3]|c->r[3]; // 80454D24
  c->r[3]=c->r[30]|c->r[30]; // 80454D28
  c->lr=0x80454D30u; f_80451170(c); // 80454D2C
  c->r[3]=c->r[30]|c->r[30]; // 80454D30
  c->r[4]=0u+0x00000000u; // 80454D34
  c->lr=0x80454D3Cu; f_80451180(c); // 80454D38
  c->r[3]=c->r[30]|c->r[30]; // 80454D3C
  c->r[4]=0u+0x00000000u; // 80454D40
  c->lr=0x80454D48u; f_80451178(c); // 80454D44
  c->r[4]=0u+0x80450000u; // 80454D48
  c->r[3]=c->r[30]|c->r[30]; // 80454D4C
  c->r[5]=c->r[29]|c->r[29]; // 80454D50
  c->r[4]=c->r[4]+0x00004528u; // 80454D54
  c->lr=0x80454D5Cu; f_80451164(c); // 80454D58
  goto L_80454DB8; // 80454D5C
L_80454D60:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80454D60
  cmps(c,0,(int32_t)c->r[3],0); // 80454D64
  if (crb(c,2)) { goto L_80454D78; } // 80454D68
  c->r[4]=0u+0x80000000u; // 80454D6C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80454D70
  c->lr=0x80454D78u; f_80451C50(c); // 80454D74
L_80454D78:;
  c->r[3]=c->r[30]|c->r[30]; // 80454D78
  c->lr=0x80454D80u; f_804511B0(c); // 80454D7C
  c->r[4]=c->r[3]|c->r[3]; // 80454D80
  c->r[3]=c->r[30]|c->r[30]; // 80454D84
  c->lr=0x80454D8Cu; f_80451170(c); // 80454D88
  c->r[3]=c->r[30]|c->r[30]; // 80454D8C
  c->r[4]=0u+0x00000000u; // 80454D90
  c->lr=0x80454D98u; f_80451180(c); // 80454D94
  c->r[3]=c->r[30]|c->r[30]; // 80454D98
  c->r[4]=0u+0x00000000u; // 80454D9C
  c->lr=0x80454DA4u; f_80451178(c); // 80454DA0
  c->r[4]=0u+0x80450000u; // 80454DA4
  c->r[3]=c->r[30]|c->r[30]; // 80454DA8
  c->r[5]=c->r[29]|c->r[29]; // 80454DAC
  c->r[4]=c->r[4]+0x00004808u; // 80454DB0
  c->lr=0x80454DB8u; f_80451164(c); // 80454DB4
L_80454DB8:;
  c->r[3]=c->r[30]|c->r[30]; // 80454DB8
  c->lr=0x80454DC0u; f_80451190(c); // 80454DBC
  c->r[31]=c->r[3]|c->r[3]; // 80454DC0
  c->r[3]=c->r[30]|c->r[30]; // 80454DC4
  c->lr=0x80454DCCu; f_80451198(c); // 80454DC8
  c->r[28]=c->r[3]|c->r[3]; // 80454DCC
  c->r[3]=c->r[30]|c->r[30]; // 80454DD0
  c->lr=0x80454DD8u; f_804511B0(c); // 80454DD4
  c->r[27]=c->r[3]|c->r[3]; // 80454DD8
  c->r[3]=c->r[30]|c->r[30]; // 80454DDC
  c->lr=0x80454DE4u; f_804511A0(c); // 80454DE0
  c->r[4]=c->r[3]|c->r[3]; // 80454DE4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454DE8
  c->lr=0x80454DF0u; f_80464988(c); // 80454DEC
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454DF0
  c->r[4]=c->r[31]|c->r[31]; // 80454DF4
  c->lr=0x80454DFCu; f_80464978(c); // 80454DF8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454DFC
  c->r[4]=c->r[28]|c->r[28]; // 80454E00
  c->lr=0x80454E08u; f_80464974(c); // 80454E04
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454E08
  c->r[4]=c->r[27]|c->r[27]; // 80454E0C
  c->lr=0x80454E14u; f_80464990(c); // 80454E10
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000040u); // 80454E14
  c->r[3]=c->r[29]|c->r[29]; // 80454E18
  c->lr=0x80454E20u; f_80453938(c); // 80454E1C
  c->r[3]=c->r[29]|c->r[29]; // 80454E20
  c->r[4]=c->r[1]+0x0000000Cu; // 80454E24
  c->r[5]=c->r[1]+0x00000008u; // 80454E28
  c->lr=0x80454E30u; f_80453F54(c); // 80454E2C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80454E30
  cmps(c,0,(int32_t)c->r[4],0); // 80454E34
  if (!crb(c,2)) { goto L_80454E48; } // 80454E38
  c->r[0]=R32(c->r[1]+0x00000008u); // 80454E3C
  cmps(c,0,(int32_t)c->r[0],0); // 80454E40
  if (crb(c,2)) { goto L_80454E54; } // 80454E44
L_80454E48:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 80454E48
  c->r[3]=c->r[29]|c->r[29]; // 80454E4C
  c->lr=0x80454E54u; f_80453F30(c); // 80454E50
L_80454E54:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80454E54
  c->lr=0x80454E5Cu; f_80451198(c); // 80454E58
  cmps(c,0,(int32_t)c->r[3],1); // 80454E5C
  if (!crb(c,2)) { goto L_80454E78; } // 80454E60
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000042u); // 80454E64
  c->r[3]=c->r[29]|c->r[29]; // 80454E68
  c->r[4]=0u+0x00000000u; // 80454E6C
  c->lr=0x80454E74u; f_80453754(c); // 80454E70
  goto L_80454E98; // 80454E74
L_80454E78:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000042u); // 80454E78
  c->r[3]=c->r[29]|c->r[29]; // 80454E7C
  c->r[4]=0u+0x00000000u; // 80454E80
  c->lr=0x80454E88u; f_80453754(c); // 80454E84
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000044u); // 80454E88
  c->r[3]=c->r[29]|c->r[29]; // 80454E8C
  c->r[4]=0u+0x00000001u; // 80454E90
  c->lr=0x80454E98u; f_80453754(c); // 80454E94
L_80454E98:;
  c->r[3]=R32(c->r[29]+0x00000074u); // 80454E98
  cmps(c,0,(int32_t)c->r[3],0); // 80454E9C
  if (crb(c,2)) { goto L_80454EAC; } // 80454EA0
  c->r[4]=c->r[31]|c->r[31]; // 80454EA4
  c->lr=0x80454EACu; f_8045593C(c); // 80454EA8
L_80454EAC:;
  c->r[3]=c->r[30]|c->r[30]; // 80454EAC
  c->lr=0x80454EB4u; f_80451188(c); // 80454EB0
  cmps(c,0,(int32_t)c->r[3],2); // 80454EB4
  if (!crb(c,2)) { goto L_80454ED0; } // 80454EB8
  c->r[3]=c->r[30]|c->r[30]; // 80454EBC
  c->lr=0x80454EC4u; f_804512BC(c); // 80454EC0
  c->r[4]=c->r[3]|c->r[3]; // 80454EC4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454EC8
  c->lr=0x80454ED0u; f_80464994(c); // 80454ECC
L_80454ED0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80454ED0
  c->r[4]=0u+0x00000001u; // 80454ED4
  c->lr=0x80454EDCu; f_80464960(c); // 80454ED8
  c->r[3]=0u+0x807E0000u; // 80454EDC
  c->r[12]=R32(c->r[3]+0x00004D70u); // 80454EE0
  cmps(c,0,(int32_t)c->r[12],0); // 80454EE4
  if (crb(c,2)) { goto L_80454F04; } // 80454EE8
  c->r[3]=c->r[29]|c->r[29]; // 80454EEC
  c->r[4]=c->r[31]|c->r[31]; // 80454EF0
  c->r[5]=c->r[28]|c->r[28]; // 80454EF4
  c->r[6]=c->r[27]|c->r[27]; // 80454EF8
  c->ctr=c->r[12]; // 80454EFC
  if (true) { c->lr=0x80454F04u; dispatch(c,c->ctr); } // 80454F00
L_80454F04:;
  c->r[0]=0u+0x00000002u; // 80454F04
  W8(c->r[29]+0x00000001u,c->r[0]); // 80454F08
  goto L_80454F20; // 80454F0C
L_80454F10:;
  cmps(c,0,(int32_t)c->r[3],4); // 80454F10
  if (!crb(c,2)) { goto L_80454F20; } // 80454F14
  c->r[0]=0u+0x00000006u; // 80454F18
  W8(c->r[29]+0x00000001u,c->r[0]); // 80454F1C
L_80454F20:;
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80454F20
  c->r[0]=R32(c->r[1]+0x00000054u); // 80454F24
  c->lr=c->r[0]; // 80454F28
  c->r[1]=c->r[1]+0x00000050u; // 80454F2C
  return; // 80454F30
}

// fn_80454F34
void f_80454F34(Ctx* __restrict c) {
  trace_call(0x80454F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80454F34
  c->r[0]=c->lr; // 80454F38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80454F3C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80454F40
  c->r[31]=c->r[3]|c->r[3]; // 80454F44
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80454F48
  c->r[27]=R32(c->r[3]+0x00000004u); // 80454F4C
  c->r[3]=c->r[28]|c->r[28]; // 80454F50
  c->lr=0x80454F58u; f_80464968(c); // 80454F54
  c->r[29]=c->r[3]|c->r[3]; // 80454F58
  c->r[3]=c->r[28]|c->r[28]; // 80454F5C
  c->lr=0x80454F64u; f_8046496C(c); // 80454F60
  c->r[4]=R32(c->r[31]+0x00000048u); // 80454F64
  c->r[30]=c->r[3]|c->r[3]; // 80454F68
  c->r[0]=0u+0x00002000u; // 80454F6C
  cmps(c,0,(int32_t)c->r[4],8192); // 80454F70
  if (!crb(c,0)) { goto L_80454F7C; } // 80454F74
  c->r[0]=c->r[4]|c->r[4]; // 80454F78
L_80454F7C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80454F7C
  if (!crb(c,0)) { goto L_80454FA4; } // 80454F80
  c->r[3]=c->r[27]|c->r[27]; // 80454F84
  c->lr=0x80454F8Cu; f_804511A8(c); // 80454F88
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 80454F8C
  if (!crb(c,1)) { goto L_80454FA4; } // 80454F90
  c->r[3]=R32(c->r[31]+0x00000004u); // 80454F94
  c->lr=0x80454F9Cu; f_8045020C(c); // 80454F98
  cmps(c,0,(int32_t)c->r[3],3); // 80454F9C
  if (!crb(c,2)) { goto L_80454FEC; } // 80454FA0
L_80454FA4:;
  c->r[0]=R8(c->r[31]+0x00000070u); // 80454FA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80454FA8
  if (!crb(c,2)) { goto L_80454FE4; } // 80454FAC
  c->r[0]=R8(c->r[31]+0x00000072u); // 80454FB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80454FB4
  if (!crb(c,2)) { goto L_80454FDC; } // 80454FB8
  c->r[3]=c->r[28]|c->r[28]; // 80454FBC
  c->r[4]=0u+0x00000001u; // 80454FC0
  c->lr=0x80454FC8u; f_80464964(c); // 80454FC4
  c->r[0]=0u+0x00000000u; // 80454FC8
  c->r[3]=0u+0x807E0000u; // 80454FCC
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 80454FD0
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80454FD4
  W32(c->r[31]+0x000000A0u,c->r[0]); // 80454FD8
L_80454FDC:;
  c->r[0]=0u+0x00000003u; // 80454FDC
  W8(c->r[31]+0x00000001u,c->r[0]); // 80454FE0
L_80454FE4:;
  c->r[0]=0u+0x00000001u; // 80454FE4
  W8(c->r[31]+0x00000071u,c->r[0]); // 80454FE8
L_80454FEC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80454FEC
  c->lr=0x80454FF4u; f_8045020C(c); // 80454FF0
  cmps(c,0,(int32_t)c->r[3],3); // 80454FF4
  if (!crb(c,2)) { goto L_8045507C; } // 80454FF8
  c->r[3]=c->r[31]|c->r[31]; // 80454FFC
  c->lr=0x80455004u; f_804536DC(c); // 80455000
  c->r[0]=R32(c->r[31]+0x00000048u); // 80455004
  c->r[30]=c->r[3]|c->r[3]; // 80455008
  c->r[27]=0u+0x00000000u; // 8045500C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80455010
  c->r[28]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80455014
  goto L_80455074; // 80455018
L_8045501C:;
  c->r[29]=R32(c->r[31]+0x00000018u); // 8045501C
  c->r[5]=c->r[28]|c->r[28]; // 80455020
  c->r[6]=c->r[1]+0x00000008u; // 80455024
  c->r[4]=0u+0x00000000u; // 80455028
  c->r[7]=R32(c->r[29]+0x00000000u); // 8045502C
  c->r[3]=c->r[29]|c->r[29]; // 80455030
  c->r[12]=R32(c->r[7]+0x00000018u); // 80455034
  c->ctr=c->r[12]; // 80455038
  if (true) { c->lr=0x80455040u; dispatch(c,c->ctr); } // 8045503C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80455040
  c->r[4]=0u+0x00000000u; // 80455044
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80455048
  c->lr=0x80455050u; f_800043EC(c); // 8045504C
  c->r[6]=R32(c->r[29]+0x00000000u); // 80455050
  c->r[3]=c->r[29]|c->r[29]; // 80455054
  c->r[5]=c->r[1]+0x00000008u; // 80455058
  c->r[4]=0u+0x00000001u; // 8045505C
  c->r[12]=R32(c->r[6]+0x00000020u); // 80455060
  c->ctr=c->r[12]; // 80455064
  if (true) { c->lr=0x8045506Cu; dispatch(c,c->ctr); } // 80455068
  c->r[31]=c->r[31]+0x00000004u; // 8045506C
  c->r[27]=c->r[27]+0x00000001u; // 80455070
L_80455074:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 80455074
  if (crb(c,0)) { IRQCHK(c); goto L_8045501C; } // 80455078
L_8045507C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8045507C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80455080
  c->lr=c->r[0]; // 80455084
  c->r[1]=c->r[1]+0x00000030u; // 80455088
  return; // 8045508C
}

// fn_80455090
void f_80455090(Ctx* __restrict c) {
  trace_call(0x80455090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455090
  c->r[0]=c->lr; // 80455094
  W32(c->r[1]+0x00000024u,c->r[0]); // 80455098
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8045509C
  c->r[27]=c->r[3]|c->r[3]; // 804550A0
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 804550A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 804550A8
  if (!crb(c,2)) { goto L_804550DC; } // 804550AC
  c->r[0]=R32(c->r[3]+0x000000C0u); // 804550B0
  cmps(c,0,(int32_t)c->r[0],0); // 804550B4
  if (crb(c,2)) { goto L_804550DC; } // 804550B8
  c->r[3]=R32(c->r[3]+0x00000004u); // 804550BC
  c->lr=0x804550C4u; f_80451144(c); // 804550C0
  c->r[0]=R32(c->r[27]+0x000000C0u); // 804550C4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 804550C8
  if (crb(c,0)) { goto L_804550DC; } // 804550CC
  c->r[3]=R32(c->r[27]+0x00000004u); // 804550D0
  c->r[4]=0u+0xFFFFFFFFu; // 804550D4
  c->lr=0x804550DCu; f_80451170(c); // 804550D8
L_804550DC:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 804550DC
  c->lr=0x804550E4u; f_8045020C(c); // 804550E0
  cmps(c,0,(int32_t)c->r[3],3); // 804550E4
  if (!crb(c,2)) { goto L_80455160; } // 804550E8
  c->r[3]=R32(c->r[27]+0x00000004u); // 804550EC
  c->lr=0x804550F4u; f_80451198(c); // 804550F0
  c->r[4]=0u+0x807E0000u; // 804550F4
  c->r[30]=c->r[3]|c->r[3]; // 804550F8
  W32(c->r[4]+0x00004D74u,c->r[3]); // 804550FC
  c->r[29]=c->r[27]|c->r[27]; // 80455100
  c->r[28]=0u+0x00000000u; // 80455104
  c->r[31]=0u+0x807E0000u; // 80455108
  goto L_8045513C; // 8045510C
L_80455110:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 80455110
  c->r[4]=0u+0x00000001u; // 80455114
  c->r[5]=R32(c->r[3]+0x00000000u); // 80455118
  c->r[12]=R32(c->r[5]+0x00000024u); // 8045511C
  c->ctr=c->r[12]; // 80455120
  if (true) { c->lr=0x80455128u; dispatch(c,c->ctr); } // 80455124
  cmps(c,0,(int32_t)c->r[3],64); // 80455128
  W32(c->r[31]+0x00004D78u,c->r[3]); // 8045512C
  if (!crb(c,0)) { goto L_80455144; } // 80455130
  c->r[29]=c->r[29]+0x00000004u; // 80455134
  c->r[28]=c->r[28]+0x00000001u; // 80455138
L_8045513C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 8045513C
  if (crb(c,0)) { IRQCHK(c); goto L_80455110; } // 80455140
L_80455144:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 80455144
  if (!crb(c,2)) { goto L_80455160; } // 80455148
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 8045514C
  c->r[4]=0u+0x00000000u; // 80455150
  c->lr=0x80455158u; f_80464960(c); // 80455154
  c->r[0]=0u+0x00000004u; // 80455158
  W8(c->r[27]+0x00000001u,c->r[0]); // 8045515C
L_80455160:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80455160
  c->r[0]=R32(c->r[1]+0x00000024u); // 80455164
  c->lr=c->r[0]; // 80455168
  c->r[1]=c->r[1]+0x00000020u; // 8045516C
  return; // 80455170
}

// fn_80455174
void f_80455174(Ctx* __restrict c) {
  trace_call(0x80455174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455174
  c->r[0]=c->lr; // 80455178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8045517C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455180
  c->r[31]=c->r[3]|c->r[3]; // 80455184
  c->r[0]=R32(c->r[3]+0x00000008u); // 80455188
  cmps(c,0,(int32_t)c->r[0],0); // 8045518C
  if (crb(c,2)) { goto L_804551E8; } // 80455190
  c->lr=0x80455198u; f_804530F4(c); // 80455194
  cmps(c,0,(int32_t)c->r[3],0); // 80455198
  if (crb(c,2)) { goto L_804551E8; } // 8045519C
  c->r[0]=R8(c->r[31]+0x00000002u); // 804551A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804551A4
  cmps(c,0,(int32_t)c->r[0],2); // 804551A8
  if (crb(c,2)) { goto L_804551E0; } // 804551AC
  if (!crb(c,0)) { goto L_804551E8; } // 804551B0
  cmps(c,0,(int32_t)c->r[0],0); // 804551B4
  if (!crb(c,0)) { goto L_804551C4; } // 804551B8
  goto L_804551E8; // 804551BC
  goto L_804551E8; // 804551C0
L_804551C4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 804551C4
  c->lr=0x804551CCu; f_80451908(c); // 804551C8
  cmps(c,0,(int32_t)c->r[3],3); // 804551CC
  if (!crb(c,2)) { goto L_804551E8; } // 804551D0
  c->r[3]=R32(c->r[31]+0x00000004u); // 804551D4
  c->lr=0x804551DCu; f_80450230(c); // 804551D8
  goto L_804551E8; // 804551DC
L_804551E0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 804551E0
  c->lr=0x804551E8u; f_80450230(c); // 804551E4
L_804551E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804551E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804551EC
  c->lr=c->r[0]; // 804551F0
  c->r[1]=c->r[1]+0x00000010u; // 804551F4
  return; // 804551F8
}

// fn_804551FC
void f_804551FC(Ctx* __restrict c) {
  trace_call(0x804551FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804551FC
  c->r[0]=c->lr; // 80455200
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455208
  c->r[31]=c->r[3]|c->r[3]; // 8045520C
  c->lr=0x80455214u; f_80458F30(c); // 80455210
  c->r[3]=c->r[31]|c->r[31]; // 80455214
  c->lr=0x8045521Cu; f_80455234(c); // 80455218
  c->lr=0x80455220u; f_80458F34(c); // 8045521C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80455220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80455224
  c->lr=c->r[0]; // 80455228
  c->r[1]=c->r[1]+0x00000010u; // 8045522C
  return; // 80455230
}

// fn_80455234
void f_80455234(Ctx* __restrict c) {
  trace_call(0x80455234u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455234
  c->r[0]=c->lr; // 80455238
  cmps(c,0,(int32_t)c->r[3],0); // 8045523C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455244
  c->r[31]=c->r[3]|c->r[3]; // 80455248
  if (!crb(c,2)) { goto L_80455264; } // 8045524C
  c->r[3]=0u+0x806B0000u; // 80455250
  c->r[3]=c->r[3]+0xFFFF8FE8u; // 80455254
  c->r[3]=c->r[3]+0x00000069u; // 80455258
  c->lr=0x80455260u; f_80459D44(c); // 8045525C
  goto L_80455330; // 80455260
L_80455264:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 80455264
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80455268
  cmps(c,0,(int32_t)c->r[0],3); // 8045526C
  if (!crb(c,2)) { goto L_8045527C; } // 80455270
  c->lr=0x80455278u; f_80455090(c); // 80455274
  goto L_804552D8; // 80455278
L_8045527C:;
  cmps(c,0,(int32_t)c->r[0],1); // 8045527C
  if (!crb(c,2)) { goto L_8045528C; } // 80455280
  c->lr=0x80455288u; f_80454B04(c); // 80455284
  goto L_804552D8; // 80455288
L_8045528C:;
  cmps(c,0,(int32_t)c->r[0],2); // 8045528C
  if (!crb(c,2)) { goto L_8045529C; } // 80455290
  c->lr=0x80455298u; f_80454F34(c); // 80455294
  goto L_804552D8; // 80455298
L_8045529C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8045529C
  if (!crb(c,2)) { goto L_804552D8; } // 804552A0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 804552A4
  c->lr=0x804552ACu; f_80464968(c); // 804552A8
  c->r[4]=0u+0x807E0000u; // 804552AC
  W32(c->r[4]+0x00004D7Cu,c->r[3]); // 804552B0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804552B4
  c->lr=0x804552BCu; f_80464968(c); // 804552B8
  cmps(c,0,(int32_t)c->r[3],0); // 804552BC
  if (crb(c,1)) { goto L_804552D8; } // 804552C0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 804552C4
  c->r[4]=0u+0x00000000u; // 804552C8
  c->lr=0x804552D0u; f_80464964(c); // 804552CC
  c->r[0]=0u+0x00000005u; // 804552D0
  W8(c->r[31]+0x00000001u,c->r[0]); // 804552D4
L_804552D8:;
  c->r[3]=c->r[31]|c->r[31]; // 804552D8
  c->lr=0x804552E0u; f_80455174(c); // 804552DC
  c->r[3]=R32(c->r[31]+0x00000008u); // 804552E0
  cmps(c,0,(int32_t)c->r[3],0); // 804552E4
  if (crb(c,2)) { goto L_80455308; } // 804552E8
  c->lr=0x804552F0u; f_80451908(c); // 804552EC
  cmps(c,0,(int32_t)c->r[3],4); // 804552F0
  if (!crb(c,2)) { goto L_80455308; } // 804552F4
  c->r[3]=0u+0xFFFFFFFFu; // 804552F8
  c->r[0]=0u+0x00000006u; // 804552FC
  W16(c->r[31]+0x00000060u,c->r[3]); // 80455300
  W8(c->r[31]+0x00000001u,c->r[0]); // 80455304
L_80455308:;
  c->r[3]=R32(c->r[31]+0x00000094u); // 80455308
  cmps(c,0,(int32_t)c->r[3],0); // 8045530C
  if (crb(c,2)) { goto L_80455330; } // 80455310
  c->lr=0x80455318u; f_8045D23C(c); // 80455314
  cmps(c,0,(int32_t)c->r[3],3); // 80455318
  if (!crb(c,2)) { goto L_80455330; } // 8045531C
  c->r[3]=0u+0xFFFFFFFFu; // 80455320
  c->r[0]=0u+0x00000006u; // 80455324
  W16(c->r[31]+0x00000060u,c->r[3]); // 80455328
  W8(c->r[31]+0x00000001u,c->r[0]); // 8045532C
L_80455330:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80455330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80455334
  c->lr=c->r[0]; // 80455338
  c->r[1]=c->r[1]+0x00000010u; // 8045533C
  return; // 80455340
}

// fn_80455344
void f_80455344(Ctx* __restrict c) {
  trace_call(0x80455344u);
  c->r[3]=0u+0x807E0000u; // 80455344
  c->r[4]=0u+0x00000000u; // 80455348
  c->r[3]=c->r[3]+0x00004D80u; // 8045534C
  c->r[5]=0u+0x000003C0u; // 80455350
  f_800043EC(c); return; // 80455354
}

// fn_80455358
void f_80455358(Ctx* __restrict c) {
  trace_call(0x80455358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455358
  c->r[0]=c->lr; // 8045535C
  c->r[3]=0u+0x807E0000u; // 80455360
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455364
  c->r[0]=0u+0x00000002u; // 80455368
  c->r[3]=c->r[3]+0x00004D80u; // 8045536C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455370
  c->r[31]=0u+0x00000000u; // 80455374
  W32(c->r[1]+0x00000008u,c->r[30]); // 80455378
  c->ctr=c->r[0]; // 8045537C
L_80455380:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80455380
  cmps(c,0,(int32_t)c->r[0],0); // 80455384
  if (crb(c,2)) { goto L_80455408; } // 80455388
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8045538C
  c->r[31]=c->r[31]+0x00000001u; // 80455390
  cmps(c,0,(int32_t)c->r[0],0); // 80455394
  if (crb(c,2)) { goto L_80455408; } // 80455398
  c->r[0]=R32(c->r[3]+0x00000078u); // 8045539C
  c->r[31]=c->r[31]+0x00000001u; // 804553A0
  cmps(c,0,(int32_t)c->r[0],0); // 804553A4
  if (crb(c,2)) { goto L_80455408; } // 804553A8
  c->r[0]=R32(c->r[3]+0x000000B4u); // 804553AC
  c->r[31]=c->r[31]+0x00000001u; // 804553B0
  cmps(c,0,(int32_t)c->r[0],0); // 804553B4
  if (crb(c,2)) { goto L_80455408; } // 804553B8
  c->r[0]=R32(c->r[3]+0x000000F0u); // 804553BC
  c->r[31]=c->r[31]+0x00000001u; // 804553C0
  cmps(c,0,(int32_t)c->r[0],0); // 804553C4
  if (crb(c,2)) { goto L_80455408; } // 804553C8
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 804553CC
  c->r[31]=c->r[31]+0x00000001u; // 804553D0
  cmps(c,0,(int32_t)c->r[0],0); // 804553D4
  if (crb(c,2)) { goto L_80455408; } // 804553D8
  c->r[0]=R32(c->r[3]+0x00000168u); // 804553DC
  c->r[31]=c->r[31]+0x00000001u; // 804553E0
  cmps(c,0,(int32_t)c->r[0],0); // 804553E4
  if (crb(c,2)) { goto L_80455408; } // 804553E8
  c->r[0]=R32(c->r[3]+0x000001A4u); // 804553EC
  c->r[31]=c->r[31]+0x00000001u; // 804553F0
  cmps(c,0,(int32_t)c->r[0],0); // 804553F4
  if (crb(c,2)) { goto L_80455408; } // 804553F8
  c->r[3]=c->r[3]+0x000001E0u; // 804553FC
  c->r[31]=c->r[31]+0x00000001u; // 80455400
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80455380; } // 80455404
L_80455408:;
  cmps(c,0,(int32_t)c->r[31],16); // 80455408
  if (!crb(c,2)) { goto L_80455418; } // 8045540C
  c->r[3]=0u+0x00000000u; // 80455410
  goto L_8045547C; // 80455414
L_80455418:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)60); // 80455418
  c->r[3]=0u+0x807E0000u; // 8045541C
  c->r[4]=0u+0x00000000u; // 80455420
  c->r[3]=c->r[3]+0x00004D80u; // 80455424
  c->r[30]=c->r[3]+c->r[0]; // 80455428
  c->r[5]=0u+0x0000003Cu; // 8045542C
  c->r[3]=c->r[30]|c->r[30]; // 80455430
  c->lr=0x80455438u; f_800043EC(c); // 80455434
  c->r[0]=0u+0x00000001u; // 80455438
  c->r[3]=0u+0x00010000u; // 8045543C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80455440
  c->r[4]=c->r[3]+0xFFFFAC44u; // 80455444
  c->r[0]=0u+0x00000000u; // 80455448
  c->r[5]=c->r[30]+0x00000030u; // 8045544C
  W32(c->r[30]+0x00000004u,c->r[31]); // 80455450
  c->r[6]=c->r[30]+0x00000032u; // 80455454
  c->r[3]=0u+0x000001F4u; // 80455458
  W32(c->r[30]+0x00000008u,c->r[0]); // 8045545C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80455460
  c->lr=0x80455468u; f_804595F0(c); // 80455464
  c->r[3]=c->r[30]+0x00000028u; // 80455468
  c->r[4]=0u+0x00000000u; // 8045546C
  c->r[5]=0u+0x00000008u; // 80455470
  c->lr=0x80455478u; f_800043EC(c); // 80455474
  c->r[3]=c->r[30]|c->r[30]; // 80455478
L_8045547C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8045547C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80455480
  c->r[30]=R32(c->r[1]+0x00000008u); // 80455484
  c->lr=c->r[0]; // 80455488
  c->r[1]=c->r[1]+0x00000010u; // 8045548C
  return; // 80455490
}

// fn_80455494
void f_80455494(Ctx* __restrict c) {
  trace_call(0x80455494u);
  c->r[6]=c->r[3]|c->r[3]; // 80455494
  c->r[3]=c->r[5]|c->r[5]; // 80455498
  c->r[5]=c->r[6]+0x00000030u; // 8045549C
  c->r[6]=c->r[6]+0x00000032u; // 804554A0
  f_804595F0(c); return; // 804554A4
}

// fn_804554A8
void f_804554A8(Ctx* __restrict c) {
  trace_call(0x804554A8u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 804554A8
  W16(c->r[3]+0x00000028u,c->r[0]); // 804554AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000000u); // 804554B0
  W16(c->r[3]+0x0000002Au,c->r[0]); // 804554B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 804554B8
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 804554BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 804554C0
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 804554C4
  return; // 804554C8
}

// fn_804554CC
void f_804554CC(Ctx* __restrict c) {
  trace_call(0x804554CCu);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000028u); // 804554CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 804554D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000002Au); // 804554D4
  W16(c->r[5]+0x00000000u,c->r[0]); // 804554D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000002Cu); // 804554DC
  W16(c->r[4]+0x00000002u,c->r[0]); // 804554E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000002Eu); // 804554E4
  W16(c->r[5]+0x00000002u,c->r[0]); // 804554E8
  return; // 804554EC
}

// fn_804554F0
void f_804554F0(Ctx* __restrict c) {
  trace_call(0x804554F0u);
  W16(c->r[3]+0x00000034u,c->r[4]); // 804554F0
  W16(c->r[3]+0x00000036u,c->r[5]); // 804554F4
  W16(c->r[3]+0x00000038u,c->r[6]); // 804554F8
  return; // 804554FC
}

// fn_80455500
void f_80455500(Ctx* __restrict c) {
  trace_call(0x80455500u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000034u); // 80455500
  W16(c->r[4]+0x00000000u,c->r[0]); // 80455504
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000036u); // 80455508
  W16(c->r[5]+0x00000000u,c->r[0]); // 8045550C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000038u); // 80455510
  W16(c->r[6]+0x00000000u,c->r[0]); // 80455514
  return; // 80455518
}

// fn_8045551C
void f_8045551C(Ctx* __restrict c) {
  trace_call(0x8045551Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8045551C
  if (crb(c,2)) return; // 80455520
  c->r[0]=0u+0x00000000u; // 80455524
  c->r[4]=0u+0x00000000u; // 80455528
  W32(c->r[3]+0x00000000u,c->r[0]); // 8045552C
  c->r[5]=0u+0x0000003Cu; // 80455530
  f_800043EC(c); return; // 80455534
  return; // 80455538
}

// fn_8045553C
void f_8045553C(Ctx* __restrict c) {
  trace_call(0x8045553Cu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8045553C
  return; // 80455540
}

// fn_80455544
void f_80455544(Ctx* __restrict c) {
  trace_call(0x80455544u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80455544
  cmps(c,0,(int32_t)c->r[0],0); // 80455548
  if (!crb(c,2)) { goto L_80455570; } // 8045554C
  c->r[0]=0u+0x00000001u; // 80455550
  W32(c->r[3]+0x00000018u,c->r[4]); // 80455554
  W32(c->r[3]+0x00000014u,c->r[0]); // 80455558
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8045555C
  W32(c->r[3]+0x00000020u,c->r[6]); // 80455560
  W32(c->r[3]+0x00000024u,c->r[7]); // 80455564
  c->r[3]=0u+0x00000001u; // 80455568
  return; // 8045556C
L_80455570:;
  c->r[3]=0u+0x00000000u; // 80455570
  return; // 80455574
}

// fn_80455578
void f_80455578(Ctx* __restrict c) {
  trace_call(0x80455578u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80455578
  cmps(c,0,(int32_t)c->r[0],0); // 8045557C
  if (!crb(c,2)) { goto L_804555A4; } // 80455580
  c->r[0]=0u+0x00000002u; // 80455584
  W32(c->r[3]+0x00000018u,c->r[4]); // 80455588
  W32(c->r[3]+0x00000014u,c->r[0]); // 8045558C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80455590
  W32(c->r[3]+0x00000020u,c->r[6]); // 80455594
  W32(c->r[3]+0x00000024u,c->r[7]); // 80455598
  c->r[3]=0u+0x00000001u; // 8045559C
  return; // 804555A0
L_804555A4:;
  c->r[3]=0u+0x00000000u; // 804555A4
  return; // 804555A8
}

// fn_804555AC
void f_804555AC(Ctx* __restrict c) {
  trace_call(0x804555ACu);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804555AC
  cmps(c,0,(int32_t)c->r[0],0); // 804555B0
  if (!crb(c,2)) { goto L_804555D8; } // 804555B4
  c->r[0]=0u+0x00000001u; // 804555B8
  W32(c->r[3]+0x00000018u,c->r[4]); // 804555BC
  W32(c->r[3]+0x00000014u,c->r[0]); // 804555C0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 804555C4
  W32(c->r[3]+0x00000020u,c->r[6]); // 804555C8
  W32(c->r[3]+0x00000024u,c->r[7]); // 804555CC
  c->r[3]=0u+0x00000001u; // 804555D0
  return; // 804555D4
L_804555D8:;
  c->r[3]=0u+0x00000000u; // 804555D8
  return; // 804555DC
}

// fn_804555E0
void f_804555E0(Ctx* __restrict c) {
  trace_call(0x804555E0u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 804555E0
  cmps(c,0,(int32_t)c->r[0],0); // 804555E4
  if (!crb(c,2)) return; // 804555E8
  c->r[4]=0u+0x00000000u; // 804555EC
  c->r[0]=0u+0x00000001u; // 804555F0
  W32(c->r[3]+0x00000010u,c->r[4]); // 804555F4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 804555F8
  return; // 804555FC
}

// fn_80455600
void f_80455600(Ctx* __restrict c) {
  trace_call(0x80455600u);
  c->r[0]=0u+0x00000000u; // 80455600
  c->r[4]=0u+0x00000000u; // 80455604
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80455608
  c->r[5]=0u+0x00000008u; // 8045560C
  c->r[3]=c->r[3]+0x00000028u; // 80455610
  f_800043EC(c); return; // 80455614
}

// fn_80455618
void f_80455618(Ctx* __restrict c) {
  trace_call(0x80455618u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80455618
  cmps(c,0,(int32_t)c->r[0],3); // 8045561C
  if (!crb(c,2)) return; // 80455620
  c->r[0]=0u+0x00000000u; // 80455624
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80455628
  return; // 8045562C
}

// fn_80455630
void f_80455630(Ctx* __restrict c) {
  trace_call(0x80455630u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80455630
  return; // 80455634
}

// fn_80455638
void f_80455638(Ctx* __restrict c) {
  trace_call(0x80455638u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455638
  c->r[0]=c->lr; // 8045563C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80455640
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80455644
  c->r[31]=c->r[3]|c->r[3]; // 80455648
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8045564C
  cmps(c,0,(int32_t)c->r[0],1); // 80455650
  if (!crb(c,2)) { goto L_80455660; } // 80455654
  c->r[0]=0u+0x00000002u; // 80455658
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8045565C
L_80455660:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80455660
  cmps(c,0,(int32_t)c->r[0],2); // 80455664
  if (!crb(c,2)) { goto L_80455718; } // 80455668
  c->r[0]=R32(c->r[3]+0x00000014u); // 8045566C
  cmps(c,0,(int32_t)c->r[0],1); // 80455670
  if (!crb(c,2)) { goto L_804556AC; } // 80455674
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000038u); // 80455678
  c->r[6]=c->r[31]+0x00000028u; // 8045567C
  c->r[9]=c->r[31]+0x00000034u; // 80455680
  W32(c->r[1]+0x00000008u,c->r[0]); // 80455684
  c->r[3]=R32(c->r[3]+0x00000018u); // 80455688
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8045568C
  c->r[5]=R32(c->r[31]+0x00000020u); // 80455690
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000030u); // 80455694
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000032u); // 80455698
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000036u); // 8045569C
  c->lr=0x804556A4u; f_80458F38(c); // 804556A0
  W32(c->r[31]+0x00000010u,c->r[3]); // 804556A4
  goto L_80455710; // 804556A8
L_804556AC:;
  c->r[0]=c->r[3]+0x00000034u; // 804556AC
  c->r[6]=c->r[31]+0x00000028u; // 804556B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 804556B4
  c->r[8]=c->r[31]+0x0000002Cu; // 804556B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000036u); // 804556BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 804556C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000038u); // 804556C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 804556C8
  c->r[3]=R32(c->r[3]+0x00000018u); // 804556CC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 804556D0
  c->r[5]=R32(c->r[31]+0x00000020u); // 804556D4
  c->r[7]=R32(c->r[31]+0x00000024u); // 804556D8
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000030u); // 804556DC
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000032u); // 804556E0
  c->lr=0x804556E8u; f_80459594(c); // 804556E4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 804556E8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 804556EC
  c->r[0]=c->r[0]^c->r[4]; // 804556F0
  W32(c->r[31]+0x00000010u,c->r[3]); // 804556F4
  c->r[0]=c->r[0]-c->r[4]; // 804556F8
  cmps(c,0,(int32_t)c->r[0],1); // 804556FC
  if (!crb(c,2)) { goto L_80455710; } // 80455700
  c->r[0]=0u+0x00000001u; // 80455704
  c->r[3]=0u+0x807E0000u; // 80455708
  W32(c->r[3]+0x00005140u,c->r[0]); // 8045570C
L_80455710:;
  c->r[0]=0u+0x00000003u; // 80455710
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80455714
L_80455718:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80455718
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8045571C
  c->lr=c->r[0]; // 80455720
  c->r[1]=c->r[1]+0x00000020u; // 80455724
  return; // 80455728
}

// fn_8045572C
void f_8045572C(Ctx* __restrict c) {
  trace_call(0x8045572Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8045572C
  c->r[0]=c->lr; // 80455730
  cmps(c,0,(int32_t)c->r[3],0); // 80455734
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8045573C
  c->r[31]=c->r[3]|c->r[3]; // 80455740
  if (crb(c,2)) { goto L_80455760; } // 80455744
  c->lr=0x8045574Cu; f_80458F28(c); // 80455748
  c->r[3]=c->r[31]|c->r[31]; // 8045574C
  c->r[4]=0u+0x00000000u; // 80455750
  c->r[5]=0u+0x00000030u; // 80455754
  c->lr=0x8045575Cu; f_800043EC(c); // 80455758
  c->lr=0x80455760u; f_80458F2C(c); // 8045575C
L_80455760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80455760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80455764
  c->lr=c->r[0]; // 80455768
  c->r[1]=c->r[1]+0x00000010u; // 8045576C
  return; // 80455770
}

// fn_80455774
void f_80455774(Ctx* __restrict c) {
  trace_call(0x80455774u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455774
  c->r[0]=c->lr; // 80455778
  c->r[6]=0u+0x00000000u; // 8045577C
  c->r[4]=0u+0x00000000u; // 80455780
  W32(c->r[1]+0x00000024u,c->r[0]); // 80455784
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80455788
  c->r[31]=c->r[3]|c->r[3]; // 8045578C
  c->r[5]=c->r[31]|c->r[31]; // 80455790
  W32(c->r[1]+0x00000018u,c->r[30]); // 80455794
  W32(c->r[1]+0x00000014u,c->r[29]); // 80455798
  W32(c->r[1]+0x00000010u,c->r[28]); // 8045579C
  goto L_804557B0; // 804557A0
L_804557A4:;
  W32(c->r[5]+0x00000014u,c->r[4]); // 804557A4
  c->r[5]=c->r[5]+0x00000004u; // 804557A8
  c->r[6]=c->r[6]+0x00000001u; // 804557AC
L_804557B0:;
  c->r[0]=R8(c->r[3]+0x00000002u); // 804557B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804557B4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 804557B8
  if (crb(c,0)) { IRQCHK(c); goto L_804557A4; } // 804557BC
  c->r[0]=0u+0x00000000u; // 804557C0
  c->r[30]=c->r[31]|c->r[31]; // 804557C4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 804557C8
  c->r[29]=0u+0x00000000u; // 804557CC
  goto L_80455858; // 804557D0
L_804557D4:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 804557D4
  c->r[4]=R32(c->r[28]+0x00000000u); // 804557D8
  c->r[3]=c->r[28]|c->r[28]; // 804557DC
  c->r[12]=R32(c->r[4]+0x00000014u); // 804557E0
  c->ctr=c->r[12]; // 804557E4
  if (true) { c->lr=0x804557ECu; dispatch(c,c->ctr); } // 804557E8
  c->r[5]=R32(c->r[28]+0x00000000u); // 804557EC
  c->r[3]=c->r[28]|c->r[28]; // 804557F0
  c->r[4]=0u+0x00000000u; // 804557F4
  c->r[12]=R32(c->r[5]+0x00000024u); // 804557F8
  c->ctr=c->r[12]; // 804557FC
  if (true) { c->lr=0x80455804u; dispatch(c,c->ctr); } // 80455800
  c->r[4]=R32(c->r[28]+0x00000000u); // 80455804
  c->r[5]=c->r[3]|c->r[3]; // 80455808
  c->r[3]=c->r[28]|c->r[28]; // 8045580C
  c->r[6]=c->r[1]+0x00000008u; // 80455810
  c->r[12]=R32(c->r[4]+0x00000018u); // 80455814
  c->r[4]=0u+0x00000000u; // 80455818
  c->ctr=c->r[12]; // 8045581C
  if (true) { c->lr=0x80455824u; dispatch(c,c->ctr); } // 80455820
  c->r[3]=R32(c->r[1]+0x00000008u); // 80455824
  c->r[4]=0u+0x00000000u; // 80455828
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8045582C
  c->lr=0x80455834u; f_800043EC(c); // 80455830
  c->r[6]=R32(c->r[28]+0x00000000u); // 80455834
  c->r[3]=c->r[28]|c->r[28]; // 80455838
  c->r[5]=c->r[1]+0x00000008u; // 8045583C
  c->r[4]=0u+0x00000000u; // 80455840
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80455844
  c->ctr=c->r[12]; // 80455848
  if (true) { c->lr=0x80455850u; dispatch(c,c->ctr); } // 8045584C
  c->r[30]=c->r[30]+0x00000004u; // 80455850
  c->r[29]=c->r[29]+0x00000001u; // 80455854
L_80455858:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 80455858
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8045585C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80455860
  if (crb(c,0)) { IRQCHK(c); goto L_804557D4; } // 80455864
  c->r[30]=c->r[31]|c->r[31]; // 80455868
  c->r[29]=0u+0x00000000u; // 8045586C
  goto L_804558F8; // 80455870
L_80455874:;
  c->r[28]=R32(c->r[30]+0x0000000Cu); // 80455874
  c->r[4]=R32(c->r[28]+0x00000000u); // 80455878
  c->r[3]=c->r[28]|c->r[28]; // 8045587C
  c->r[12]=R32(c->r[4]+0x00000014u); // 80455880
  c->ctr=c->r[12]; // 80455884
  if (true) { c->lr=0x8045588Cu; dispatch(c,c->ctr); } // 80455888
  c->r[5]=R32(c->r[28]+0x00000000u); // 8045588C
  c->r[3]=c->r[28]|c->r[28]; // 80455890
  c->r[4]=0u+0x00000000u; // 80455894
  c->r[12]=R32(c->r[5]+0x00000024u); // 80455898
  c->ctr=c->r[12]; // 8045589C
  if (true) { c->lr=0x804558A4u; dispatch(c,c->ctr); } // 804558A0
  c->r[4]=R32(c->r[28]+0x00000000u); // 804558A4
  c->r[5]=c->r[3]|c->r[3]; // 804558A8
  c->r[3]=c->r[28]|c->r[28]; // 804558AC
  c->r[6]=c->r[1]+0x00000008u; // 804558B0
  c->r[12]=R32(c->r[4]+0x00000018u); // 804558B4
  c->r[4]=0u+0x00000000u; // 804558B8
  c->ctr=c->r[12]; // 804558BC
  if (true) { c->lr=0x804558C4u; dispatch(c,c->ctr); } // 804558C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 804558C4
  c->r[4]=0u+0x00000000u; // 804558C8
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 804558CC
  c->lr=0x804558D4u; f_800043EC(c); // 804558D0
  c->r[6]=R32(c->r[28]+0x00000000u); // 804558D4
  c->r[3]=c->r[28]|c->r[28]; // 804558D8
  c->r[5]=c->r[1]+0x00000008u; // 804558DC
  c->r[4]=0u+0x00000000u; // 804558E0
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 804558E4
  c->ctr=c->r[12]; // 804558E8
  if (true) { c->lr=0x804558F0u; dispatch(c,c->ctr); } // 804558EC
  c->r[30]=c->r[30]+0x00000004u; // 804558F0
  c->r[29]=c->r[29]+0x00000001u; // 804558F4
L_804558F8:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 804558F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804558FC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80455900
  if (crb(c,0)) { IRQCHK(c); goto L_80455874; } // 80455904
  c->r[0]=0u+0x00000002u; // 80455908
  W8(c->r[31]+0x00000001u,c->r[0]); // 8045590C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80455910
  c->r[30]=R32(c->r[1]+0x00000018u); // 80455914
  c->r[29]=R32(c->r[1]+0x00000014u); // 80455918
  c->r[28]=R32(c->r[1]+0x00000010u); // 8045591C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80455920
  c->lr=c->r[0]; // 80455924
  c->r[1]=c->r[1]+0x00000020u; // 80455928
  return; // 8045592C
}

// fn_80455930
void f_80455930(Ctx* __restrict c) {
  trace_call(0x80455930u);
  c->r[0]=0u+0x00000000u; // 80455930
  W8(c->r[3]+0x00000001u,c->r[0]); // 80455934
  return; // 80455938
}

// fn_8045593C
void f_8045593C(Ctx* __restrict c) {
  trace_call(0x8045593Cu);
  W32(c->r[3]+0x00000020u,c->r[4]); // 8045593C
  return; // 80455940
}

// fn_80455944
void f_80455944(Ctx* __restrict c) {
  trace_call(0x80455944u);
  c->r[3]=R32(c->r[3]+0x000000B4u); // 80455944
  cmps(c,0,(int32_t)c->r[3],0); // 80455948
  if (crb(c,2)) return; // 8045594C
  c->r[5]=0u+0x807E0000u; // 80455950
  c->r[12]=R32(c->r[5]+0x00005148u); // 80455954
  c->ctr=c->r[12]; // 80455958
  if (true) { dispatch(c,c->ctr); return; } // 8045595C
  return; // 80455960
}

// fn_80455964
void f_80455964(Ctx* __restrict c) {
  trace_call(0x80455964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455964
  c->r[0]=c->lr; // 80455968
  W32(c->r[1]+0x00000014u,c->r[0]); // 8045596C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455970
  c->r[31]=c->r[4]|c->r[4]; // 80455974
  W32(c->r[1]+0x00000008u,c->r[30]); // 80455978
  c->r[30]=c->r[3]|c->r[3]; // 8045597C
  c->r[0]=R32(c->r[3]+0x000000B4u); // 80455980
  cmps(c,0,(int32_t)c->r[0],0); // 80455984
  if (crb(c,2)) { goto L_804559A0; } // 80455988
  c->r[5]=0u+0x807E0000u; // 8045598C
  c->r[3]=c->r[0]|c->r[0]; // 80455990
  c->r[12]=R32(c->r[5]+0x0000514Cu); // 80455994
  c->ctr=c->r[12]; // 80455998
  if (true) { c->lr=0x804559A0u; dispatch(c,c->ctr); } // 8045599C
L_804559A0:;
  c->r[3]=0u+0x2AAB0000u; // 804559A0
  W32(c->r[30]+0x000000B8u,c->r[31]); // 804559A4
  c->r[0]=c->r[3]+0xFFFFAAABu; // 804559A8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 804559AC
  c->r[0]=sraw(c,c->r[0],4); // 804559B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 804559B4
  c->r[0]=c->r[0]+c->r[3]; // 804559B8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 804559BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804559C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804559C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804559C8
  c->lr=c->r[0]; // 804559CC
  c->r[1]=c->r[1]+0x00000010u; // 804559D0
  return; // 804559D4
}

// fn_804559D8
void f_804559D8(Ctx* __restrict c) {
  trace_call(0x804559D8u);
  c->r[4]=0u+0x807E0000u; // 804559D8
  c->r[12]=R32(c->r[4]+0x00005154u); // 804559DC
  c->ctr=c->r[12]; // 804559E0
  if (true) { dispatch(c,c->ctr); return; } // 804559E4
}

// fn_804559E8
void f_804559E8(Ctx* __restrict c) {
  trace_call(0x804559E8u);
  c->r[3]=R32(c->r[3]+0x000000B4u); // 804559E8
  cmps(c,0,(int32_t)c->r[3],0); // 804559EC
  if (crb(c,2)) return; // 804559F0
  c->r[4]=0u+0x807E0000u; // 804559F4
  c->r[12]=R32(c->r[4]+0x00005150u); // 804559F8
  c->ctr=c->r[12]; // 804559FC
  if (true) { dispatch(c,c->ctr); return; } // 80455A00
  return; // 80455A04
}

// fn_80455A08
void f_80455A08(Ctx* __restrict c) {
  trace_call(0x80455A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455A08
  c->r[9]=c->r[3]+0x0000000Cu; // 80455A0C
  c->r[11]=0u+0x00000000u; // 80455A10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80455A14
  c->r[0]=R8(c->r[3]+0x00000001u); // 80455A18
  c->r[8]=R8(c->r[3]+0x00000002u); // 80455A1C
  c->r[26]=R8(c->r[3]+0x00000000u); // 80455A20
  c->r[26]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[26]&~0x0000FF00u); // 80455A24
  c->r[26]=(rotl(c->r[8],16)&0x00FF0000u)|(c->r[26]&~0x00FF0000u); // 80455A28
  c->r[0]=R8(c->r[3]+0x00000003u); // 80455A2C
  c->r[8]=R8(c->r[3]+0x00000005u); // 80455A30
  c->r[26]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[26]&~0xFF000000u); // 80455A34
  c->r[27]=R8(c->r[3]+0x00000004u); // 80455A38
  c->r[0]=c->r[26]+0xB2AE0000u; // 80455A3C
  c->r[27]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[27]&~0x0000FF00u); // 80455A40
  c->r[12]=R8(c->r[3]+0x00000006u); // 80455A44
  cmpu(c,0,c->r[0],0x00004F46u); // 80455A48
  c->r[28]=R8(c->r[3]+0x00000007u); // 80455A4C
  c->r[27]=(rotl(c->r[12],16)&0x00FF0000u)|(c->r[27]&~0x00FF0000u); // 80455A50
  c->r[8]=R8(c->r[3]+0x00000009u); // 80455A54
  c->r[27]=(rotl(c->r[28],24)&0xFF000000u)|(c->r[27]&~0xFF000000u); // 80455A58
  c->r[26]=R8(c->r[3]+0x00000008u); // 80455A5C
  c->r[26]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[26]&~0x0000FF00u); // 80455A60
  c->r[10]=R8(c->r[3]+0x0000000Au); // 80455A64
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80455A68
  c->r[12]=rotl(c->r[27],8)&0x00FF0000u; // 80455A6C
  c->r[8]=rotl(c->r[27],24)&0x0000FF00u; // 80455A70
  c->r[26]=(rotl(c->r[10],16)&0x00FF0000u)|(c->r[26]&~0x00FF0000u); // 80455A74
  c->r[12]=(rotl(c->r[27],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80455A78
  c->r[3]=0u+0x00000000u; // 80455A7C
  c->r[8]=(rotl(c->r[27],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 80455A80
  c->r[26]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[26]&~0xFF000000u); // 80455A84
  c->r[8]=c->r[12]|c->r[8]; // 80455A88
  c->r[12]=0u+0x00000000u; // 80455A8C
  if (crb(c,2)) { goto L_80455A9C; } // 80455A90
  c->r[3]=0u+0x00000000u; // 80455A94
  goto L_80455C5C; // 80455A98
L_80455A9C:;
  c->r[0]=c->r[26]+0xB9BA0000u; // 80455A9C
  cmpu(c,0,c->r[0],0x00004941u); // 80455AA0
  if (crb(c,2)) { goto L_80455AB0; } // 80455AA4
  c->r[3]=0u+0x00000000u; // 80455AA8
  goto L_80455C5C; // 80455AAC
L_80455AB0:;
  c->r[10]=c->r[9]+c->r[8]; // 80455AB0
  c->r[8]=0u+0x4D4D0000u; // 80455AB4
  c->r[0]=c->r[8]+0x00004F43u; // 80455AB8
  c->r[8]=0u+0x444E0000u; // 80455ABC
  c->r[10]=c->r[10]+0xFFFFFFFCu; // 80455AC0
  goto L_80455C54; // 80455AC4
L_80455AC8:;
  c->r[28]=R8(c->r[9]+0x00000001u); // 80455AC8
  c->r[30]=R8(c->r[9]+0x00000002u); // 80455ACC
  c->r[27]=R8(c->r[9]+0x00000000u); // 80455AD0
  c->r[27]=(rotl(c->r[28],8)&0x0000FF00u)|(c->r[27]&~0x0000FF00u); // 80455AD4
  c->r[27]=(rotl(c->r[30],16)&0x00FF0000u)|(c->r[27]&~0x00FF0000u); // 80455AD8
  c->r[31]=R8(c->r[9]+0x00000003u); // 80455ADC
  c->r[29]=R8(c->r[9]+0x00000006u); // 80455AE0
  c->r[27]=(rotl(c->r[31],24)&0xFF000000u)|(c->r[27]&~0xFF000000u); // 80455AE4
  c->r[28]=R8(c->r[9]+0x00000005u); // 80455AE8
  c->r[26]=R8(c->r[9]+0x00000004u); // 80455AEC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80455AF0
  c->r[30]=R8(c->r[9]+0x00000007u); // 80455AF4
  c->r[26]=(rotl(c->r[28],8)&0x0000FF00u)|(c->r[26]&~0x0000FF00u); // 80455AF8
  c->r[26]=(rotl(c->r[29],16)&0x00FF0000u)|(c->r[26]&~0x00FF0000u); // 80455AFC
  c->r[9]=c->r[9]+0x00000008u; // 80455B00
  c->r[26]=(rotl(c->r[30],24)&0xFF000000u)|(c->r[26]&~0xFF000000u); // 80455B04
  c->r[29]=rotl(c->r[26],8)&0x00FF0000u; // 80455B08
  c->r[28]=rotl(c->r[26],24)&0x0000FF00u; // 80455B0C
  c->r[29]=(rotl(c->r[26],24)&0xFF000000u)|(c->r[29]&~0xFF000000u); // 80455B10
  c->r[28]=(rotl(c->r[26],8)&0x000000FFu)|(c->r[28]&~0x000000FFu); // 80455B14
  c->r[29]=c->r[29]|c->r[28]; // 80455B18
  if (crb(c,2)) { goto L_80455B34; } // 80455B1C
  if (!crb(c,0)) { goto L_80455C48; } // 80455B20
  c->r[28]=c->r[8]+0x00005353u; // 80455B24
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 80455B28
  if (crb(c,2)) { goto L_80455BF8; } // 80455B2C
  goto L_80455C48; // 80455B30
L_80455B34:;
  cmps(c,0,(int32_t)c->r[11],0); // 80455B34
  if (!crb(c,2)) { goto L_80455C54; } // 80455B38
  cmps(c,0,(int32_t)c->r[29],18); // 80455B3C
  if (!crb(c,0)) { goto L_80455B4C; } // 80455B40
  c->r[3]=0u+0x00000000u; // 80455B44
  goto L_80455C5C; // 80455B48
L_80455B4C:;
  c->r[28]=R8(c->r[9]+0x00000001u); // 80455B4C
  cmps(c,0,(int32_t)c->r[12],0); // 80455B50
  c->r[29]=R8(c->r[9]+0x00000000u); // 80455B54
  c->r[11]=0u+0x00000001u; // 80455B58
  c->r[29]=(rotl(c->r[28],8)&0x0000FF00u)|(c->r[29]&~0x0000FF00u); // 80455B5C
  c->r[28]=rotl(c->r[29],8)&0x0000FF00u; // 80455B60
  c->r[28]=(rotl(c->r[29],24)&0x000000FFu)|(c->r[28]&~0x000000FFu); // 80455B64
  W32(c->r[5]+0x00000000u,c->r[28]); // 80455B68
  c->r[28]=R8(c->r[9]+0x00000003u); // 80455B6C
  c->r[30]=R8(c->r[9]+0x00000002u); // 80455B70
  c->r[30]=(rotl(c->r[28],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 80455B74
  c->r[29]=R8(c->r[9]+0x00000004u); // 80455B78
  c->r[28]=R8(c->r[9]+0x00000005u); // 80455B7C
  c->r[30]=(rotl(c->r[29],16)&0x00FF0000u)|(c->r[30]&~0x00FF0000u); // 80455B80
  c->r[30]=(rotl(c->r[28],24)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 80455B84
  c->r[29]=rotl(c->r[30],8)&0x00FF0000u; // 80455B88
  c->r[28]=rotl(c->r[30],24)&0x0000FF00u; // 80455B8C
  c->r[29]=(rotl(c->r[30],24)&0xFF000000u)|(c->r[29]&~0xFF000000u); // 80455B90
  c->r[28]=(rotl(c->r[30],8)&0x000000FFu)|(c->r[28]&~0x000000FFu); // 80455B94
  c->r[28]=c->r[29]|c->r[28]; // 80455B98
  W32(c->r[7]+0x00000000u,c->r[28]); // 80455B9C
  c->r[28]=R8(c->r[9]+0x00000007u); // 80455BA0
  c->r[29]=R8(c->r[9]+0x00000006u); // 80455BA4
  c->r[29]=(rotl(c->r[28],8)&0x0000FF00u)|(c->r[29]&~0x0000FF00u); // 80455BA8
  c->r[28]=rotl(c->r[29],8)&0x0000FF00u; // 80455BAC
  c->r[28]=(rotl(c->r[29],24)&0x000000FFu)|(c->r[28]&~0x000000FFu); // 80455BB0
  W32(c->r[6]+0x00000000u,c->r[28]); // 80455BB4
  c->r[29]=R8(c->r[9]+0x00000009u); // 80455BB8
  c->r[28]=R8(c->r[9]+0x00000008u); // 80455BBC
  c->r[28]=(rotl(c->r[29],8)&0x0000FF00u)|(c->r[28]&~0x0000FF00u); // 80455BC0
  c->r[30]=R8(c->r[9]+0x0000000Bu); // 80455BC4
  c->r[31]=R8(c->r[9]+0x0000000Au); // 80455BC8
  c->r[29]=rotl(c->r[28],8)&0x0000FF00u; // 80455BCC
  c->r[31]=(rotl(c->r[30],8)&0x0000FF00u)|(c->r[31]&~0x0000FF00u); // 80455BD0
  c->r[9]=c->r[9]+0x00000012u; // 80455BD4
  c->r[30]=rotl(c->r[31],8)&0x0000FF00u; // 80455BD8
  c->r[29]=(rotl(c->r[28],24)&0x000000FFu)|(c->r[29]&~0x000000FFu); // 80455BDC
  c->r[30]=(rotl(c->r[31],24)&0x000000FFu)|(c->r[30]&~0x000000FFu); // 80455BE0
  c->r[31]=addc(c,~c->r[29],0x0000400Eu,1); // 80455BE4
  c->r[31]=sraw(c,c->r[30],(c->r[31])&63); // 80455BE8
  W32(c->r[4]+0x00000000u,c->r[31]); // 80455BEC
  if (crb(c,2)) { goto L_80455C54; } // 80455BF0
  goto L_80455C5C; // 80455BF4
L_80455BF8:;
  cmps(c,0,(int32_t)c->r[12],0); // 80455BF8
  if (!crb(c,2)) { goto L_80455C54; } // 80455BFC
  c->r[3]=R8(c->r[9]+0x00000001u); // 80455C00
  cmps(c,0,(int32_t)c->r[11],0); // 80455C04
  c->r[26]=R8(c->r[9]+0x00000000u); // 80455C08
  c->r[12]=0u+0x00000001u; // 80455C0C
  c->r[26]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[26]&~0x0000FF00u); // 80455C10
  c->r[31]=R8(c->r[9]+0x00000002u); // 80455C14
  c->r[3]=R8(c->r[9]+0x00000003u); // 80455C18
  c->r[9]=c->r[9]+0x00000004u; // 80455C1C
  c->r[26]=(rotl(c->r[31],16)&0x00FF0000u)|(c->r[26]&~0x00FF0000u); // 80455C20
  c->r[26]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[26]&~0xFF000000u); // 80455C24
  c->r[31]=rotl(c->r[26],8)&0x00FF0000u; // 80455C28
  c->r[3]=rotl(c->r[26],24)&0x0000FF00u; // 80455C2C
  c->r[31]=(rotl(c->r[26],24)&0xFF000000u)|(c->r[31]&~0xFF000000u); // 80455C30
  c->r[3]=(rotl(c->r[26],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80455C34
  c->r[3]=c->r[31]|c->r[3]; // 80455C38
  c->r[3]=c->r[9]+c->r[3]; // 80455C3C
  if (crb(c,2)) { goto L_80455C54; } // 80455C40
  goto L_80455C5C; // 80455C44
L_80455C48:;
  c->r[31]=c->r[29]+0x00000001u; // 80455C48
  c->r[31]=rotl(c->r[31],0)&0xFFFFFFFEu; // 80455C4C
  c->r[9]=c->r[9]+c->r[31]; // 80455C50
L_80455C54:;
  cmpu(c,0,c->r[9],c->r[10]); // 80455C54
  if (crb(c,0)) { IRQCHK(c); goto L_80455AC8; } // 80455C58
L_80455C5C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80455C5C
  c->r[1]=c->r[1]+0x00000020u; // 80455C60
  return; // 80455C64
}

// fn_80455C68
void f_80455C68(Ctx* __restrict c) {
  trace_call(0x80455C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455C68
  c->r[0]=c->lr; // 80455C6C
  c->r[5]=0u+0x00000004u; // 80455C70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455C74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455C78
  c->r[31]=0u+0x806B0000u; // 80455C7C
  c->r[4]=c->r[31]+0xFFFF9080u; // 80455C80
  W32(c->r[1]+0x00000008u,c->r[30]); // 80455C84
  c->r[30]=c->r[3]|c->r[3]; // 80455C88
  c->lr=0x80455C90u; f_803AF7B8(c); // 80455C8C
  cmps(c,0,(int32_t)c->r[3],0); // 80455C90
  if (!crb(c,2)) { goto L_80455CBC; } // 80455C94
  c->r[4]=c->r[31]+0xFFFF9080u; // 80455C98
  c->r[3]=c->r[30]+0x00000008u; // 80455C9C
  c->r[4]=c->r[4]+0x00000005u; // 80455CA0
  c->r[5]=0u+0x00000004u; // 80455CA4
  c->lr=0x80455CACu; f_803AF7B8(c); // 80455CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80455CAC
  if (!crb(c,2)) { goto L_80455CBC; } // 80455CB0
  c->r[3]=0u+0x00000001u; // 80455CB4
  goto L_80455CC0; // 80455CB8
L_80455CBC:;
  c->r[3]=0u+0x00000000u; // 80455CBC
L_80455CC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80455CC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80455CC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80455CC8
  c->lr=c->r[0]; // 80455CCC
  c->r[1]=c->r[1]+0x00000010u; // 80455CD0
  return; // 80455CD4
}

// fn_80455CD8
void f_80455CD8(Ctx* __restrict c) {
  trace_call(0x80455CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455CD8
  c->r[0]=c->lr; // 80455CDC
  cmps(c,0,(int32_t)c->r[4],4096); // 80455CE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80455CE4
  c->r[0]=0u+0x00000000u; // 80455CE8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80455CEC
  c->r[23]=c->r[3]|c->r[3]; // 80455CF0
  c->r[29]=R32(c->r[1]+0x00000048u); // 80455CF4
  c->r[24]=c->r[5]|c->r[5]; // 80455CF8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80455CFC
  c->r[25]=c->r[6]|c->r[6]; // 80455D00
  c->r[26]=c->r[7]|c->r[7]; // 80455D04
  c->r[30]=c->r[8]|c->r[8]; // 80455D08
  c->r[27]=c->r[9]|c->r[9]; // 80455D0C
  c->r[28]=c->r[10]|c->r[10]; // 80455D10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455D14
  W32(c->r[1]+0x00000010u,c->r[0]); // 80455D18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80455D1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80455D20
  if (!crb(c,0)) { goto L_80455D34; } // 80455D24
  W16(c->r[5]+0x00000000u,c->r[0]); // 80455D28
  c->r[3]=0u+0xFFFFFFFFu; // 80455D2C
  goto L_80455DC4; // 80455D30
L_80455D34:;
  c->r[4]=c->r[1]+0x00000014u; // 80455D34
  c->r[5]=c->r[1]+0x00000010u; // 80455D38
  c->r[6]=c->r[1]+0x0000000Cu; // 80455D3C
  c->r[7]=c->r[1]+0x00000008u; // 80455D40
  c->lr=0x80455D48u; f_80455A08(c); // 80455D44
  cmps(c,0,(int32_t)c->r[3],0); // 80455D48
  if (!crb(c,2)) { goto L_80455D58; } // 80455D4C
  c->r[3]=0u+0xFFFFFFFFu; // 80455D50
  goto L_80455DC4; // 80455D54
L_80455D58:;
  c->r[3]=c->r[3]-c->r[23]; // 80455D58
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 80455D5C
  W16(c->r[24]+0x00000000u,c->r[3]); // 80455D60
  if (crb(c,1)) { goto L_80455D70; } // 80455D64
  c->r[3]=0u+0xFFFFFFFFu; // 80455D68
  goto L_80455DC4; // 80455D6C
L_80455D70:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 80455D70
  c->r[4]=0u+0xFFFFFFFFu; // 80455D74
  c->r[0]=0u+0x00000001u; // 80455D78
  c->r[3]=0u+0x00000000u; // 80455D7C
  W32(c->r[28]+0x00000000u,c->r[5]); // 80455D80
  c->r[5]=R32(c->r[1]+0x00000010u); // 80455D84
  W8(c->r[27]+0x00000000u,c->r[5]); // 80455D88
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80455D8C
  W8(c->r[26]+0x00000000u,c->r[5]); // 80455D90
  c->r[5]=R32(c->r[1]+0x00000008u); // 80455D94
  W32(c->r[29]+0x00000000u,c->r[5]); // 80455D98
  W8(c->r[25]+0x00000000u,c->r[4]); // 80455D9C
  c->r[5]=R8(c->r[27]+0x00000000u); // 80455DA0
  c->r[4]=R8(c->r[26]+0x00000000u); // 80455DA4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80455DA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80455DAC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 80455DB0
  c->r[4]=sraw(c,c->r[4],3); // 80455DB4
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 80455DB8
  W8(c->r[30]+0x00000000u,c->r[4]); // 80455DBC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80455DC0
L_80455DC4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80455DC4
  c->r[0]=R32(c->r[1]+0x00000044u); // 80455DC8
  c->lr=c->r[0]; // 80455DCC
  c->r[1]=c->r[1]+0x00000040u; // 80455DD0
  return; // 80455DD4
}

// fn_80455DD8
void f_80455DD8(Ctx* __restrict c) {
  trace_call(0x80455DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455DD8
  c->r[0]=c->lr; // 80455DDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80455DE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80455DE4
  c->r[31]=0u+0x00000001u; // 80455DE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80455DEC
  c->r[30]=c->r[3]|c->r[3]; // 80455DF0
  c->r[0]=c->r[30]+0x00000018u; // 80455DF4
  W16(c->r[3]+0x00000002u,c->r[31]); // 80455DF8
  c->r[3]=c->r[4]|c->r[4]; // 80455DFC
  c->r[4]=c->r[5]|c->r[5]; // 80455E00
  c->r[5]=c->r[1]+0x00000010u; // 80455E04
  W32(c->r[1]+0x00000008u,c->r[0]); // 80455E08
  c->r[0]=c->r[30]+0x00000010u; // 80455E0C
  c->r[6]=c->r[30]+0x0000000Cu; // 80455E10
  c->r[7]=c->r[30]+0x0000000Du; // 80455E14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80455E18
  c->r[8]=c->r[30]+0x0000000Fu; // 80455E1C
  c->r[9]=c->r[30]+0x0000000Eu; // 80455E20
  c->r[10]=c->r[30]+0x00000014u; // 80455E24
  c->lr=0x80455E2Cu; f_80455CD8(c); // 80455E28
  cmps(c,0,(int32_t)c->r[3],0); // 80455E2C
  if (!crb(c,0)) { goto L_80455E3C; } // 80455E30
  c->r[3]=0u+0x00000000u; // 80455E34
  goto L_80455EC8; // 80455E38
L_80455E3C:;
  c->r[0]=R8(c->r[30]+0x0000000Du); // 80455E3C
  c->r[9]=0u+0x00000000u; // 80455E40
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 80455E44
  c->r[3]=0u+0x00000003u; // 80455E48
  c->r[4]=R8(c->r[30]+0x0000000Fu); // 80455E4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80455E50
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80455E54
  c->r[6]=R32(c->r[30]+0x00000010u); // 80455E58
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80455E5C
  c->r[5]=R32(c->r[30]+0x0000003Cu); // 80455E60
  c->r[4]=R32(c->r[30]+0x00000040u); // 80455E64
  cmps(c,0,(int32_t)c->r[0],8); // 80455E68
  c->r[0]=R32(c->r[30]+0x00000044u); // 80455E6C
  W16(c->r[30]+0x0000001Cu,c->r[9]); // 80455E70
  W16(c->r[30]+0x00000026u,c->r[9]); // 80455E74
  W16(c->r[30]+0x00000024u,c->r[9]); // 80455E78
  W32(c->r[30]+0x00000034u,c->r[9]); // 80455E7C
  W32(c->r[30]+0x00000030u,c->r[9]); // 80455E80
  W32(c->r[30]+0x0000002Cu,c->r[9]); // 80455E84
  W32(c->r[30]+0x00000028u,c->r[9]); // 80455E88
  W32(c->r[30]+0x00000020u,c->r[9]); // 80455E8C
  W32(c->r[30]+0x00000050u,c->r[8]); // 80455E90
  W32(c->r[30]+0x00000054u,c->r[7]); // 80455E94
  W32(c->r[30]+0x00000058u,c->r[6]); // 80455E98
  W32(c->r[30]+0x0000005Cu,c->r[5]); // 80455E9C
  W32(c->r[30]+0x00000060u,c->r[4]); // 80455EA0
  W32(c->r[30]+0x00000064u,c->r[0]); // 80455EA4
  W32(c->r[30]+0x0000008Cu,c->r[9]); // 80455EA8
  W32(c->r[30]+0x00000088u,c->r[9]); // 80455EAC
  W16(c->r[30]+0x00000098u,c->r[3]); // 80455EB0
  if (!crb(c,2)) { goto L_80455EC0; } // 80455EB4
  W16(c->r[30]+0x0000009Cu,c->r[31]); // 80455EB8
  goto L_80455EC4; // 80455EBC
L_80455EC0:;
  W16(c->r[30]+0x0000009Cu,c->r[9]); // 80455EC0
L_80455EC4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000010u); // 80455EC4
L_80455EC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80455EC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80455ECC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80455ED0
  c->lr=c->r[0]; // 80455ED4
  c->r[1]=c->r[1]+0x00000020u; // 80455ED8
  return; // 80455EDC
}

// fn_80455EE0
void f_80455EE0(Ctx* __restrict c) {
  trace_call(0x80455EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80455EE0
  c->r[0]=c->lr; // 80455EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80455EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80455EEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80455EF0
  c->r[30]=c->r[3]|c->r[3]; // 80455EF4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80455EF8
  c->r[31]=R32(c->r[3]+0x00000048u); // 80455EFC
  cmps(c,0,(int32_t)c->r[0],1); // 80455F00
  if (!crb(c,2)) { goto L_804561BC; } // 80455F04
  c->r[3]=R32(c->r[3]+0x00000008u); // 80455F08
  c->lr=0x80455F10u; f_8045553C(c); // 80455F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80455F10
  if (!crb(c,2)) { goto L_804561BC; } // 80455F14
  c->r[12]=R32(c->r[30]+0x00000078u); // 80455F18
  c->r[4]=c->r[30]+0x00000068u; // 80455F1C
  c->r[5]=c->r[30]+0x0000006Cu; // 80455F20
  c->r[6]=c->r[30]+0x00000070u; // 80455F24
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 80455F28
  c->ctr=c->r[12]; // 80455F2C
  if (true) { c->lr=0x80455F34u; dispatch(c,c->ctr); } // 80455F30
  c->r[6]=R32(c->r[30]+0x00000068u); // 80455F34
  c->r[0]=R32(c->r[30]+0x00000060u); // 80455F38
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 80455F3C
  c->r[5]=c->r[0]-c->r[6]; // 80455F40
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 80455F44
  if (!crb(c,1)) { goto L_80455F50; } // 80455F48
  c->r[5]=c->r[3]|c->r[3]; // 80455F4C
L_80455F50:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 80455F50
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80455F54
  if (!crb(c,1)) { goto L_80455F60; } // 80455F58
  c->r[5]=c->r[0]|c->r[0]; // 80455F5C
L_80455F60:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 80455F60
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80455F64
  c->r[7]=R32(c->r[30]+0x0000005Cu); // 80455F68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80455F6C
  cmps(c,0,(int32_t)c->r[0],2); // 80455F70
  c->r[0]=c->r[7]+c->r[3]; // 80455F74
  if (!crb(c,2)) { goto L_804560C4; } // 80455F78
  c->r[3]=R32(c->r[30]+0x00000064u); // 80455F7C
  cmps(c,1,(int32_t)c->r[5],0); // 80455F80
  c->r[4]=0u+0x00000000u; // 80455F84
  c->r[3]=c->r[3]+c->r[6]; // 80455F88
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80455F8C
  c->r[3]=c->r[7]+c->r[3]; // 80455F90
  if (!crb(c,5)) { goto L_8045619C; } // 80455F94
  cmps(c,0,(int32_t)c->r[5],8); // 80455F98
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 80455F9C
  if (!crb(c,1)) { goto L_8045607C; } // 80455FA0
  c->r[8]=0u+0x00000000u; // 80455FA4
  if (crb(c,4)) { goto L_80455FC0; } // 80455FA8
  c->r[6]=0u+0x80000000u; // 80455FAC
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 80455FB0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 80455FB4
  if (crb(c,1)) { goto L_80455FC0; } // 80455FB8
  c->r[8]=0u+0x00000001u; // 80455FBC
L_80455FC0:;
  cmps(c,0,(int32_t)c->r[8],0); // 80455FC0
  if (crb(c,2)) { goto L_8045607C; } // 80455FC4
  c->r[6]=c->r[7]+0x00000007u; // 80455FC8
  c->r[8]=c->r[31]|c->r[31]; // 80455FCC
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80455FD0
  c->r[9]=c->r[0]|c->r[0]; // 80455FD4
  c->r[10]=c->r[3]|c->r[3]; // 80455FD8
  c->ctr=c->r[6]; // 80455FDC
  cmps(c,0,(int32_t)c->r[7],0); // 80455FE0
  if (!crb(c,1)) { goto L_8045607C; } // 80455FE4
L_80455FE8:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 80455FE8
  c->r[4]=c->r[4]+0x00000008u; // 80455FEC
  W16(c->r[9]+0x00000000u,c->r[6]); // 80455FF0
  c->r[6]=R16(c->r[8]+0x00000002u); // 80455FF4
  W16(c->r[10]+0x00000000u,c->r[6]); // 80455FF8
  c->r[6]=R16(c->r[8]+0x00000004u); // 80455FFC
  W16(c->r[9]+0x00000002u,c->r[6]); // 80456000
  c->r[6]=R16(c->r[8]+0x00000006u); // 80456004
  W16(c->r[10]+0x00000002u,c->r[6]); // 80456008
  c->r[6]=R16(c->r[8]+0x00000008u); // 8045600C
  W16(c->r[9]+0x00000004u,c->r[6]); // 80456010
  c->r[6]=R16(c->r[8]+0x0000000Au); // 80456014
  W16(c->r[10]+0x00000004u,c->r[6]); // 80456018
  c->r[6]=R16(c->r[8]+0x0000000Cu); // 8045601C
  W16(c->r[9]+0x00000006u,c->r[6]); // 80456020
  c->r[6]=R16(c->r[8]+0x0000000Eu); // 80456024
  W16(c->r[10]+0x00000006u,c->r[6]); // 80456028
  c->r[6]=R16(c->r[8]+0x00000010u); // 8045602C
  W16(c->r[9]+0x00000008u,c->r[6]); // 80456030
  c->r[6]=R16(c->r[8]+0x00000012u); // 80456034
  W16(c->r[10]+0x00000008u,c->r[6]); // 80456038
  c->r[6]=R16(c->r[8]+0x00000014u); // 8045603C
  W16(c->r[9]+0x0000000Au,c->r[6]); // 80456040
  c->r[6]=R16(c->r[8]+0x00000016u); // 80456044
  W16(c->r[10]+0x0000000Au,c->r[6]); // 80456048
  c->r[6]=R16(c->r[8]+0x00000018u); // 8045604C
  W16(c->r[9]+0x0000000Cu,c->r[6]); // 80456050
  c->r[6]=R16(c->r[8]+0x0000001Au); // 80456054
  W16(c->r[10]+0x0000000Cu,c->r[6]); // 80456058
  c->r[6]=R16(c->r[8]+0x0000001Cu); // 8045605C
  W16(c->r[9]+0x0000000Eu,c->r[6]); // 80456060
  c->r[9]=c->r[9]+0x00000010u; // 80456064
  c->r[6]=R16(c->r[8]+0x0000001Eu); // 80456068
  c->r[8]=c->r[8]+0x00000020u; // 8045606C
  W16(c->r[10]+0x0000000Eu,c->r[6]); // 80456070
  c->r[10]=c->r[10]+0x00000010u; // 80456074
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80455FE8; } // 80456078
L_8045607C:;
  c->r[9]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8045607C
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80456080
  c->r[6]=c->r[5]-c->r[4]; // 80456084
  c->r[7]=c->r[31]+c->r[7]; // 80456088
  c->r[8]=c->r[0]+c->r[9]; // 8045608C
  c->r[3]=c->r[3]+c->r[9]; // 80456090
  c->ctr=c->r[6]; // 80456094
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 80456098
  if (!crb(c,0)) { goto L_8045619C; } // 8045609C
L_804560A0:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 804560A0
  W16(c->r[8]+0x00000000u,c->r[0]); // 804560A4
  c->r[8]=c->r[8]+0x00000002u; // 804560A8
  c->r[0]=R16(c->r[7]+0x00000002u); // 804560AC
  c->r[7]=c->r[7]+0x00000004u; // 804560B0
  W16(c->r[3]+0x00000000u,c->r[0]); // 804560B4
  c->r[3]=c->r[3]+0x00000002u; // 804560B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804560A0; } // 804560BC
  goto L_8045619C; // 804560C0
L_804560C4:;
  cmps(c,1,(int32_t)c->r[5],0); // 804560C4
  c->r[8]=0u+0x00000000u; // 804560C8
  if (!crb(c,5)) { goto L_8045619C; } // 804560CC
  cmps(c,0,(int32_t)c->r[5],8); // 804560D0
  c->r[4]=c->r[5]+0xFFFFFFF8u; // 804560D4
  if (!crb(c,1)) { goto L_8045616C; } // 804560D8
  c->r[6]=0u+0x00000000u; // 804560DC
  if (crb(c,4)) { goto L_804560F8; } // 804560E0
  c->r[3]=0u+0x80000000u; // 804560E4
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804560E8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 804560EC
  if (crb(c,1)) { goto L_804560F8; } // 804560F0
  c->r[6]=0u+0x00000001u; // 804560F4
L_804560F8:;
  cmps(c,0,(int32_t)c->r[6],0); // 804560F8
  if (crb(c,2)) { goto L_8045616C; } // 804560FC
  c->r[3]=c->r[4]+0x00000007u; // 80456100
  c->r[6]=c->r[31]|c->r[31]; // 80456104
  c->r[3]=rotl(c->r[3],29)&0x1FFFFFFFu; // 80456108
  c->r[7]=c->r[0]|c->r[0]; // 8045610C
  c->ctr=c->r[3]; // 80456110
  cmps(c,0,(int32_t)c->r[4],0); // 80456114
  if (!crb(c,1)) { goto L_8045616C; } // 80456118
L_8045611C:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 8045611C
  c->r[8]=c->r[8]+0x00000008u; // 80456120
  W16(c->r[7]+0x00000000u,c->r[3]); // 80456124
  c->r[3]=R16(c->r[6]+0x00000002u); // 80456128
  W16(c->r[7]+0x00000002u,c->r[3]); // 8045612C
  c->r[3]=R16(c->r[6]+0x00000004u); // 80456130
  W16(c->r[7]+0x00000004u,c->r[3]); // 80456134
  c->r[3]=R16(c->r[6]+0x00000006u); // 80456138
  W16(c->r[7]+0x00000006u,c->r[3]); // 8045613C
  c->r[3]=R16(c->r[6]+0x00000008u); // 80456140
  W16(c->r[7]+0x00000008u,c->r[3]); // 80456144
  c->r[3]=R16(c->r[6]+0x0000000Au); // 80456148
  W16(c->r[7]+0x0000000Au,c->r[3]); // 8045614C
  c->r[3]=R16(c->r[6]+0x0000000Cu); // 80456150
  W16(c->r[7]+0x0000000Cu,c->r[3]); // 80456154
  c->r[3]=R16(c->r[6]+0x0000000Eu); // 80456158
  c->r[6]=c->r[6]+0x00000010u; // 8045615C
  W16(c->r[7]+0x0000000Eu,c->r[3]); // 80456160
  c->r[7]=c->r[7]+0x00000010u; // 80456164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8045611C; } // 80456168
L_8045616C:;
  c->r[6]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8045616C
  c->r[3]=c->r[5]-c->r[8]; // 80456170
  c->r[4]=c->r[31]+c->r[6]; // 80456174
  c->r[6]=c->r[0]+c->r[6]; // 80456178
  c->ctr=c->r[3]; // 8045617C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 80456180
  if (!crb(c,0)) { goto L_8045619C; } // 80456184
L_80456188:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80456188
  c->r[4]=c->r[4]+0x00000002u; // 8045618C
  W16(c->r[6]+0x00000000u,c->r[0]); // 80456190
  c->r[6]=c->r[6]+0x00000002u; // 80456194
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456188; } // 80456198
L_8045619C:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 8045619C
  c->r[0]=0u+0x00000002u; // 804561A0
  c->r[3]=rotl(c->r[5],1)&0xFFFFFFFEu; // 804561A4
  W32(c->r[30]+0x00000090u,c->r[5]); // 804561A8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 804561AC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 804561B0
  W32(c->r[30]+0x00000004u,c->r[0]); // 804561B4
  W32(c->r[30]+0x00000094u,c->r[3]); // 804561B8
L_804561BC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 804561BC
  cmps(c,0,(int32_t)c->r[0],2); // 804561C0
  if (!crb(c,2)) { goto L_804561E8; } // 804561C4
  c->r[12]=R32(c->r[30]+0x00000080u); // 804561C8
  c->r[3]=R32(c->r[30]+0x00000084u); // 804561CC
  c->r[4]=R32(c->r[30]+0x00000094u); // 804561D0
  c->r[5]=R32(c->r[30]+0x00000090u); // 804561D4
  c->ctr=c->r[12]; // 804561D8
  if (true) { c->lr=0x804561E0u; dispatch(c,c->ctr); } // 804561DC
  c->r[0]=0u+0x00000003u; // 804561E0
  W32(c->r[30]+0x00000004u,c->r[0]); // 804561E4
L_804561E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804561E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804561EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 804561F0
  c->lr=c->r[0]; // 804561F4
  c->r[1]=c->r[1]+0x00000010u; // 804561F8
  return; // 804561FC
}

// fn_80456200
void f_80456200(Ctx* __restrict c) {
  trace_call(0x80456200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456200
  c->r[0]=c->lr; // 80456204
  W32(c->r[1]+0x00000014u,c->r[0]); // 80456208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8045620C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80456210
  c->r[30]=c->r[3]|c->r[3]; // 80456214
  c->r[0]=R32(c->r[3]+0x00000004u); // 80456218
  c->r[31]=R32(c->r[3]+0x00000048u); // 8045621C
  cmps(c,0,(int32_t)c->r[0],1); // 80456220
  if (!crb(c,2)) { goto L_8045653C; } // 80456224
  c->r[3]=R32(c->r[3]+0x00000008u); // 80456228
  c->lr=0x80456230u; f_8045553C(c); // 8045622C
  cmps(c,0,(int32_t)c->r[3],0); // 80456230
  if (!crb(c,2)) { goto L_8045653C; } // 80456234
  c->r[12]=R32(c->r[30]+0x00000078u); // 80456238
  c->r[4]=c->r[30]+0x00000068u; // 8045623C
  c->r[5]=c->r[30]+0x0000006Cu; // 80456240
  c->r[6]=c->r[30]+0x00000070u; // 80456244
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 80456248
  c->ctr=c->r[12]; // 8045624C
  if (true) { c->lr=0x80456254u; dispatch(c,c->ctr); } // 80456250
  c->r[4]=R32(c->r[30]+0x00000068u); // 80456254
  c->r[0]=R32(c->r[30]+0x00000060u); // 80456258
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 8045625C
  c->r[8]=c->r[0]-c->r[4]; // 80456260
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 80456264
  if (!crb(c,1)) { goto L_80456270; } // 80456268
  c->r[8]=c->r[3]|c->r[3]; // 8045626C
L_80456270:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 80456270
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80456274
  if (!crb(c,1)) { goto L_80456280; } // 80456278
  c->r[8]=c->r[0]|c->r[0]; // 8045627C
L_80456280:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 80456280
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80456284
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 80456288
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8045628C
  cmps(c,0,(int32_t)c->r[0],2); // 80456290
  c->r[0]=c->r[5]+c->r[3]; // 80456294
  if (!crb(c,2)) { goto L_80456428; } // 80456298
  c->r[3]=R32(c->r[30]+0x00000064u); // 8045629C
  cmps(c,1,(int32_t)c->r[8],0); // 804562A0
  c->r[7]=0u+0x00000000u; // 804562A4
  c->r[3]=c->r[3]+c->r[4]; // 804562A8
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804562AC
  c->r[6]=c->r[5]+c->r[3]; // 804562B0
  if (!crb(c,5)) { goto L_80456520; } // 804562B4
  cmps(c,0,(int32_t)c->r[8],8); // 804562B8
  c->r[10]=c->r[8]+0xFFFFFFF8u; // 804562BC
  if (!crb(c,1)) { goto L_804563DC; } // 804562C0
  c->r[4]=0u+0x00000000u; // 804562C4
  if (crb(c,4)) { goto L_804562E0; } // 804562C8
  c->r[3]=0u+0x80000000u; // 804562CC
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 804562D0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 804562D4
  if (crb(c,1)) { goto L_804562E0; } // 804562D8
  c->r[4]=0u+0x00000001u; // 804562DC
L_804562E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 804562E0
  if (crb(c,2)) { goto L_804563DC; } // 804562E4
  c->r[9]=c->r[10]+0x00000007u; // 804562E8
  c->r[3]=c->r[31]|c->r[31]; // 804562EC
  c->r[9]=rotl(c->r[9],29)&0x1FFFFFFFu; // 804562F0
  c->r[4]=c->r[0]|c->r[0]; // 804562F4
  c->r[5]=c->r[6]|c->r[6]; // 804562F8
  c->ctr=c->r[9]; // 804562FC
  cmps(c,0,(int32_t)c->r[10],0); // 80456300
  if (!crb(c,1)) { goto L_804563DC; } // 80456304
L_80456308:;
  c->r[9]=R8(c->r[3]+0x00000000u); // 80456308
  c->r[7]=c->r[7]+0x00000008u; // 8045630C
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456310
  W16(c->r[4]+0x00000000u,c->r[9]); // 80456314
  c->r[9]=R8(c->r[3]+0x00000001u); // 80456318
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 8045631C
  W16(c->r[5]+0x00000000u,c->r[9]); // 80456320
  c->r[9]=R8(c->r[3]+0x00000002u); // 80456324
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456328
  W16(c->r[4]+0x00000002u,c->r[9]); // 8045632C
  c->r[9]=R8(c->r[3]+0x00000003u); // 80456330
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456334
  W16(c->r[5]+0x00000002u,c->r[9]); // 80456338
  c->r[9]=R8(c->r[3]+0x00000004u); // 8045633C
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456340
  W16(c->r[4]+0x00000004u,c->r[9]); // 80456344
  c->r[9]=R8(c->r[3]+0x00000005u); // 80456348
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 8045634C
  W16(c->r[5]+0x00000004u,c->r[9]); // 80456350
  c->r[9]=R8(c->r[3]+0x00000006u); // 80456354
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456358
  W16(c->r[4]+0x00000006u,c->r[9]); // 8045635C
  c->r[9]=R8(c->r[3]+0x00000007u); // 80456360
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456364
  W16(c->r[5]+0x00000006u,c->r[9]); // 80456368
  c->r[9]=R8(c->r[3]+0x00000008u); // 8045636C
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456370
  W16(c->r[4]+0x00000008u,c->r[9]); // 80456374
  c->r[9]=R8(c->r[3]+0x00000009u); // 80456378
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 8045637C
  W16(c->r[5]+0x00000008u,c->r[9]); // 80456380
  c->r[9]=R8(c->r[3]+0x0000000Au); // 80456384
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456388
  W16(c->r[4]+0x0000000Au,c->r[9]); // 8045638C
  c->r[9]=R8(c->r[3]+0x0000000Bu); // 80456390
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 80456394
  W16(c->r[5]+0x0000000Au,c->r[9]); // 80456398
  c->r[9]=R8(c->r[3]+0x0000000Cu); // 8045639C
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 804563A0
  W16(c->r[4]+0x0000000Cu,c->r[9]); // 804563A4
  c->r[9]=R8(c->r[3]+0x0000000Du); // 804563A8
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 804563AC
  W16(c->r[5]+0x0000000Cu,c->r[9]); // 804563B0
  c->r[9]=R8(c->r[3]+0x0000000Eu); // 804563B4
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 804563B8
  W16(c->r[4]+0x0000000Eu,c->r[9]); // 804563BC
  c->r[4]=c->r[4]+0x00000010u; // 804563C0
  c->r[9]=R8(c->r[3]+0x0000000Fu); // 804563C4
  c->r[3]=c->r[3]+0x00000010u; // 804563C8
  c->r[9]=rotl(c->r[9],8)&0x0000FF00u; // 804563CC
  W16(c->r[5]+0x0000000Eu,c->r[9]); // 804563D0
  c->r[5]=c->r[5]+0x00000010u; // 804563D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456308; } // 804563D8
L_804563DC:;
  c->r[9]=rotl(c->r[7],1)&0xFFFFFFFEu; // 804563DC
  c->r[3]=c->r[8]-c->r[7]; // 804563E0
  c->r[4]=c->r[31]+c->r[9]; // 804563E4
  c->r[5]=c->r[0]+c->r[9]; // 804563E8
  c->r[6]=c->r[6]+c->r[9]; // 804563EC
  c->ctr=c->r[3]; // 804563F0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 804563F4
  if (!crb(c,0)) { goto L_80456520; } // 804563F8
L_804563FC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 804563FC
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 80456400
  W16(c->r[5]+0x00000000u,c->r[0]); // 80456404
  c->r[5]=c->r[5]+0x00000002u; // 80456408
  c->r[0]=R8(c->r[4]+0x00000001u); // 8045640C
  c->r[4]=c->r[4]+0x00000002u; // 80456410
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 80456414
  W16(c->r[6]+0x00000000u,c->r[0]); // 80456418
  c->r[6]=c->r[6]+0x00000002u; // 8045641C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804563FC; } // 80456420
  goto L_80456520; // 80456424
L_80456428:;
  cmps(c,1,(int32_t)c->r[8],0); // 80456428
  c->r[3]=0u+0x00000000u; // 8045642C
  if (!crb(c,5)) { goto L_80456520; } // 80456430
  cmps(c,0,(int32_t)c->r[8],8); // 80456434
  c->r[5]=c->r[8]+0xFFFFFFF8u; // 80456438
  if (!crb(c,1)) { goto L_804564EC; } // 8045643C
  c->r[6]=0u+0x00000000u; // 80456440
  if (crb(c,4)) { goto L_8045645C; } // 80456444
  c->r[4]=0u+0x80000000u; // 80456448
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 8045644C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 80456450
  if (crb(c,1)) { goto L_8045645C; } // 80456454
  c->r[6]=0u+0x00000001u; // 80456458
L_8045645C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8045645C
  if (crb(c,2)) { goto L_804564EC; } // 80456460
  c->r[4]=c->r[5]+0x00000007u; // 80456464
  c->r[6]=c->r[0]|c->r[0]; // 80456468
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 8045646C
  c->ctr=c->r[4]; // 80456470
  cmps(c,0,(int32_t)c->r[5],0); // 80456474
  if (!crb(c,1)) { goto L_804564EC; } // 80456478
L_8045647C:;
  c->r[4]=R8(c->r[31]+c->r[3]); // 8045647C
  c->r[5]=c->r[31]+c->r[3]; // 80456480
  c->r[3]=c->r[3]+0x00000008u; // 80456484
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 80456488
  W16(c->r[6]+0x00000000u,c->r[4]); // 8045648C
  c->r[4]=R8(c->r[5]+0x00000001u); // 80456490
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 80456494
  W16(c->r[6]+0x00000002u,c->r[4]); // 80456498
  c->r[4]=R8(c->r[5]+0x00000002u); // 8045649C
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564A0
  W16(c->r[6]+0x00000004u,c->r[4]); // 804564A4
  c->r[4]=R8(c->r[5]+0x00000003u); // 804564A8
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564AC
  W16(c->r[6]+0x00000006u,c->r[4]); // 804564B0
  c->r[4]=R8(c->r[5]+0x00000004u); // 804564B4
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564B8
  W16(c->r[6]+0x00000008u,c->r[4]); // 804564BC
  c->r[4]=R8(c->r[5]+0x00000005u); // 804564C0
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564C4
  W16(c->r[6]+0x0000000Au,c->r[4]); // 804564C8
  c->r[4]=R8(c->r[5]+0x00000006u); // 804564CC
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564D0
  W16(c->r[6]+0x0000000Cu,c->r[4]); // 804564D4
  c->r[4]=R8(c->r[5]+0x00000007u); // 804564D8
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 804564DC
  W16(c->r[6]+0x0000000Eu,c->r[4]); // 804564E0
  c->r[6]=c->r[6]+0x00000010u; // 804564E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8045647C; } // 804564E8
L_804564EC:;
  c->r[5]=rotl(c->r[3],1)&0xFFFFFFFEu; // 804564EC
  c->r[4]=c->r[8]-c->r[3]; // 804564F0
  c->r[6]=c->r[0]+c->r[5]; // 804564F4
  c->r[5]=c->r[31]+c->r[3]; // 804564F8
  c->ctr=c->r[4]; // 804564FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 80456500
  if (!crb(c,0)) { goto L_80456520; } // 80456504
L_80456508:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80456508
  c->r[5]=c->r[5]+0x00000001u; // 8045650C
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 80456510
  W16(c->r[6]+0x00000000u,c->r[0]); // 80456514
  c->r[6]=c->r[6]+0x00000002u; // 80456518
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456508; } // 8045651C
L_80456520:;
  c->r[3]=R8(c->r[30]+0x0000000Eu); // 80456520
  c->r[0]=0u+0x00000002u; // 80456524
  W32(c->r[30]+0x00000090u,c->r[8]); // 80456528
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8045652C
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[3]); // 80456530
  W32(c->r[30]+0x00000004u,c->r[0]); // 80456534
  W32(c->r[30]+0x00000094u,c->r[3]); // 80456538
L_8045653C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8045653C
  cmps(c,0,(int32_t)c->r[0],2); // 80456540
  if (!crb(c,2)) { goto L_80456568; } // 80456544
  c->r[12]=R32(c->r[30]+0x00000080u); // 80456548
  c->r[3]=R32(c->r[30]+0x00000084u); // 8045654C
  c->r[4]=R32(c->r[30]+0x00000094u); // 80456550
  c->r[5]=R32(c->r[30]+0x00000090u); // 80456554
  c->ctr=c->r[12]; // 80456558
  if (true) { c->lr=0x80456560u; dispatch(c,c->ctr); } // 8045655C
  c->r[0]=0u+0x00000003u; // 80456560
  W32(c->r[30]+0x00000004u,c->r[0]); // 80456564
L_80456568:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80456568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8045656C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80456570
  c->lr=c->r[0]; // 80456574
  c->r[1]=c->r[1]+0x00000010u; // 80456578
  return; // 8045657C
}

// fn_80456580
void f_80456580(Ctx* __restrict c) {
  trace_call(0x80456580u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000009Cu); // 80456580
  cmps(c,0,(int32_t)c->r[0],1); // 80456584
  if (!crb(c,2)) { goto L_80456590; } // 80456588
  f_80456200(c); return; // 8045658C
L_80456590:;
  f_80455EE0(c); return; // 80456590
}

// fn_80456594
void f_80456594(Ctx* __restrict c) {
  trace_call(0x80456594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456594
  c->r[9]=0u+0x807E0000u; // 80456598
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8045659C
  c->r[8]=R32(c->r[9]+0x00005158u); // 804565A0
  cmps(c,0,(int32_t)c->r[8],0); // 804565A4
  if (!crb(c,2)) { goto L_804565B4; } // 804565A8
  c->r[0]=c->r[8]+0x00000001u; // 804565AC
  W32(c->r[9]+0x00005158u,c->r[0]); // 804565B0
L_804565B4:;
  c->r[0]=0u+0x00000000u; // 804565B4
  cmps(c,0,(int32_t)c->r[3],0); // 804565B8
  W16(c->r[5]+0x00000000u,c->r[0]); // 804565BC
  W16(c->r[6]+0x00000000u,c->r[0]); // 804565C0
  W16(c->r[7]+0x00000000u,c->r[0]); // 804565C4
  if (!crb(c,2)) { goto L_804565DC; } // 804565C8
  cmps(c,0,(int32_t)c->r[4],0); // 804565CC
  if (crb(c,1)) { goto L_804565DC; } // 804565D0
  c->r[3]=0u+0x00000000u; // 804565D4
  goto L_80456D18; // 804565D8
L_804565DC:;
  cmps(c,1,(int32_t)c->r[4],0); // 804565DC
  c->r[0]=0u+0x00004A1Du; // 804565E0
  c->r[10]=0u+0x00000000u; // 804565E4
  if (!crb(c,5)) { goto L_80456840; } // 804565E8
  cmps(c,0,(int32_t)c->r[4],8); // 804565EC
  c->r[11]=c->r[4]+0xFFFFFFF8u; // 804565F0
  if (!crb(c,1)) { goto L_804567E4; } // 804565F4
  c->r[9]=0u+0x00000000u; // 804565F8
  if (crb(c,4)) { goto L_80456614; } // 804565FC
  c->r[8]=0u+0x80000000u; // 80456600
  c->r[8]=c->r[8]+0xFFFFFFFEu; // 80456604
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 80456608
  if (crb(c,1)) { goto L_80456614; } // 8045660C
  c->r[9]=0u+0x00000001u; // 80456610
L_80456614:;
  cmps(c,0,(int32_t)c->r[9],0); // 80456614
  if (crb(c,2)) { goto L_804567E4; } // 80456618
  c->r[9]=c->r[11]+0x00000007u; // 8045661C
  c->r[8]=0u+0x806B0000u; // 80456620
  c->r[9]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80456624
  c->r[8]=c->r[8]+0xFFFF9090u; // 80456628
  c->ctr=c->r[9]; // 8045662C
  cmps(c,0,(int32_t)c->r[11],0); // 80456630
  if (!crb(c,1)) { goto L_804567E4; } // 80456634
L_80456638:;
  c->r[11]=R8(c->r[3]+c->r[10]); // 80456638
  c->r[9]=c->r[3]+c->r[10]; // 8045663C
  c->r[12]=R8(c->r[9]+0x00000001u); // 80456640
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 80456644
  c->r[11]=R8(c->r[9]+0x00000002u); // 80456648
  c->r[26]=rotl(c->r[26],1)&0xFFFFFFFEu; // 8045664C
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 80456650
  c->r[26]=c->r[8]+c->r[26]; // 80456654
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 80456658
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000100u); // 8045665C
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456660
  c->r[27]=c->r[8]+c->r[12]; // 80456664
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80456668
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[26]); // 8045666C
  c->r[0]=R8(c->r[9]+0x00000003u); // 80456670
  c->r[26]=c->r[8]+c->r[11]; // 80456674
  c->r[11]=R8(c->r[9]+0x00000004u); // 80456678
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8045667C
  c->r[0]=R8(c->r[9]+0x00000005u); // 80456680
  c->r[28]=rotl(c->r[29],22)&0xFFC00000u; // 80456684
  c->r[29]=rotl(c->r[29],1)&0x00000001u; // 80456688
  c->r[28]=c->r[28]-c->r[29]; // 8045668C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 80456690
  c->r[28]=rotl(c->r[28],10)&0xFFFFFFFFu; // 80456694
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456698
  c->r[28]=c->r[28]+c->r[29]; // 8045669C
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 804566A0
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 804566A4
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000100u); // 804566A8
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[28]); // 804566AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 804566B0
  c->r[12]=c->r[8]+c->r[12]; // 804566B4
  c->r[11]=c->r[8]+c->r[11]; // 804566B8
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[27]); // 804566BC
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000100u); // 804566C0
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[12]+0x00000100u); // 804566C4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804566C8
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000100u); // 804566CC
  c->r[11]=c->r[8]+c->r[0]; // 804566D0
  c->r[0]=rotl(c->r[28],22)&0xFFC00000u; // 804566D4
  c->r[29]=rotl(c->r[28],1)&0x00000001u; // 804566D8
  c->r[28]=c->r[0]-c->r[29]; // 804566DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000100u); // 804566E0
  c->r[11]=rotl(c->r[28],10)&0xFFFFFFFFu; // 804566E4
  c->r[11]=c->r[11]+c->r[29]; // 804566E8
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 804566EC
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 804566F0
  c->r[27]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[27]); // 804566F4
  c->r[11]=rotl(c->r[27],22)&0xFFC00000u; // 804566F8
  c->r[27]=rotl(c->r[27],1)&0x00000001u; // 804566FC
  c->r[11]=c->r[11]-c->r[27]; // 80456700
  c->r[11]=rotl(c->r[11],10)&0xFFFFFFFFu; // 80456704
  c->r[11]=c->r[11]+c->r[27]; // 80456708
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8045670C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 80456710
  c->r[26]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[26]); // 80456714
  c->r[11]=rotl(c->r[26],22)&0xFFC00000u; // 80456718
  c->r[26]=rotl(c->r[26],1)&0x00000001u; // 8045671C
  c->r[11]=c->r[11]-c->r[26]; // 80456720
  c->r[11]=rotl(c->r[11],10)&0xFFFFFFFFu; // 80456724
  c->r[11]=c->r[11]+c->r[26]; // 80456728
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8045672C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 80456730
  c->r[12]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[12]); // 80456734
  c->r[11]=rotl(c->r[12],22)&0xFFC00000u; // 80456738
  c->r[12]=rotl(c->r[12],1)&0x00000001u; // 8045673C
  c->r[11]=c->r[11]-c->r[12]; // 80456740
  c->r[11]=rotl(c->r[11],10)&0xFFFFFFFFu; // 80456744
  c->r[11]=c->r[11]+c->r[12]; // 80456748
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8045674C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 80456750
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 80456754
  c->r[0]=rotl(c->r[11],22)&0xFFC00000u; // 80456758
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 8045675C
  c->r[0]=c->r[0]-c->r[11]; // 80456760
  c->r[0]=rotl(c->r[0],10)&0xFFFFFFFFu; // 80456764
  c->r[0]=c->r[0]+c->r[11]; // 80456768
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8045676C
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[0]); // 80456770
  c->r[11]=R8(c->r[9]+0x00000006u); // 80456774
  c->r[10]=c->r[10]+0x00000008u; // 80456778
  c->r[0]=R8(c->r[9]+0x00000007u); // 8045677C
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 80456780
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80456784
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80456788
  c->r[9]=c->r[8]+c->r[9]; // 8045678C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000100u); // 80456790
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80456794
  c->r[9]=c->r[8]+c->r[0]; // 80456798
  c->r[11]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 8045679C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000100u); // 804567A0
  c->r[9]=rotl(c->r[11],22)&0xFFC00000u; // 804567A4
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 804567A8
  c->r[9]=c->r[9]-c->r[11]; // 804567AC
  c->r[9]=rotl(c->r[9],10)&0xFFFFFFFFu; // 804567B0
  c->r[9]=c->r[9]+c->r[11]; // 804567B4
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 804567B8
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[9]); // 804567BC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 804567C0
  c->r[0]=rotl(c->r[9],22)&0xFFC00000u; // 804567C4
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 804567C8
  c->r[0]=c->r[0]-c->r[9]; // 804567CC
  c->r[0]=rotl(c->r[0],10)&0xFFFFFFFFu; // 804567D0
  c->r[0]=c->r[0]+c->r[9]; // 804567D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 804567D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[0]); // 804567DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456638; } // 804567E0
L_804567E4:;
  c->r[11]=0u+0x806B0000u; // 804567E4
  c->r[8]=c->r[4]-c->r[10]; // 804567E8
  c->r[11]=c->r[11]+0xFFFF9090u; // 804567EC
  c->r[9]=c->r[3]+c->r[10]; // 804567F0
  c->ctr=c->r[8]; // 804567F4
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[4]); // 804567F8
  if (!crb(c,0)) { goto L_80456840; } // 804567FC
L_80456800:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 80456800
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80456804
  c->r[9]=c->r[9]+0x00000001u; // 80456808
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 8045680C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80456810
  c->r[8]=c->r[11]+c->r[0]; // 80456814
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+0x00000100u); // 80456818
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 8045681C
  c->r[0]=rotl(c->r[8],22)&0xFFC00000u; // 80456820
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 80456824
  c->r[0]=c->r[0]-c->r[8]; // 80456828
  c->r[0]=rotl(c->r[0],10)&0xFFFFFFFFu; // 8045682C
  c->r[0]=c->r[0]+c->r[8]; // 80456830
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80456834
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+c->r[0]); // 80456838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456800; } // 8045683C
L_80456840:;
  cmps(c,1,(int32_t)c->r[4],0); // 80456840
  c->r[11]=0u+0x000053FFu; // 80456844
  c->r[10]=0u+0x00000000u; // 80456848
  if (!crb(c,5)) { goto L_80456AA4; } // 8045684C
  cmps(c,0,(int32_t)c->r[4],8); // 80456850
  c->r[12]=c->r[4]+0xFFFFFFF8u; // 80456854
  if (!crb(c,1)) { goto L_80456A48; } // 80456858
  c->r[9]=0u+0x00000000u; // 8045685C
  if (crb(c,4)) { goto L_80456878; } // 80456860
  c->r[8]=0u+0x80000000u; // 80456864
  c->r[8]=c->r[8]+0xFFFFFFFEu; // 80456868
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 8045686C
  if (crb(c,1)) { goto L_80456878; } // 80456870
  c->r[9]=0u+0x00000001u; // 80456874
L_80456878:;
  cmps(c,0,(int32_t)c->r[9],0); // 80456878
  if (crb(c,2)) { goto L_80456A48; } // 8045687C
  c->r[9]=c->r[12]+0x00000007u; // 80456880
  c->r[8]=0u+0x806B0000u; // 80456884
  c->r[9]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80456888
  c->r[8]=c->r[8]+0xFFFF9090u; // 8045688C
  c->ctr=c->r[9]; // 80456890
  cmps(c,0,(int32_t)c->r[12],0); // 80456894
  if (!crb(c,1)) { goto L_80456A48; } // 80456898
L_8045689C:;
  c->r[12]=R8(c->r[3]+c->r[10]); // 8045689C
  c->r[9]=c->r[3]+c->r[10]; // 804568A0
  c->r[26]=R8(c->r[9]+0x00000001u); // 804568A4
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 804568A8
  c->r[12]=R8(c->r[9]+0x00000002u); // 804568AC
  c->r[27]=rotl(c->r[27],1)&0xFFFFFFFEu; // 804568B0
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 804568B4
  c->r[27]=c->r[8]+c->r[27]; // 804568B8
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 804568BC
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000100u); // 804568C0
  c->r[26]=rotl(c->r[26],1)&0xFFFFFFFEu; // 804568C4
  c->r[28]=c->r[8]+c->r[26]; // 804568C8
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 804568CC
  c->r[30]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[27]); // 804568D0
  c->r[11]=R8(c->r[9]+0x00000003u); // 804568D4
  c->r[27]=c->r[8]+c->r[12]; // 804568D8
  c->r[12]=R8(c->r[9]+0x00000004u); // 804568DC
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 804568E0
  c->r[11]=R8(c->r[9]+0x00000005u); // 804568E4
  c->r[29]=rotl(c->r[30],22)&0xFFC00000u; // 804568E8
  c->r[30]=rotl(c->r[30],1)&0x00000001u; // 804568EC
  c->r[29]=c->r[29]-c->r[30]; // 804568F0
  c->r[26]=rotl(c->r[26],1)&0xFFFFFFFEu; // 804568F4
  c->r[29]=rotl(c->r[29],10)&0xFFFFFFFFu; // 804568F8
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 804568FC
  c->r[29]=c->r[29]+c->r[30]; // 80456900
  c->r[26]=c->r[8]+c->r[26]; // 80456904
  c->r[29]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80456908
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000100u); // 8045690C
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[29]); // 80456910
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456914
  c->r[12]=c->r[8]+c->r[12]; // 80456918
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 8045691C
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[28]); // 80456920
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000100u); // 80456924
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80456928
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000100u); // 8045692C
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[12]+0x00000100u); // 80456930
  c->r[11]=c->r[8]+c->r[11]; // 80456934
  c->r[28]=rotl(c->r[29],22)&0xFFC00000u; // 80456938
  c->r[29]=rotl(c->r[29],1)&0x00000001u; // 8045693C
  c->r[28]=c->r[28]-c->r[29]; // 80456940
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000100u); // 80456944
  c->r[28]=rotl(c->r[28],10)&0xFFFFFFFFu; // 80456948
  c->r[28]=c->r[28]+c->r[29]; // 8045694C
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80456950
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[28]); // 80456954
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[27]); // 80456958
  c->r[27]=rotl(c->r[28],22)&0xFFC00000u; // 8045695C
  c->r[28]=rotl(c->r[28],1)&0x00000001u; // 80456960
  c->r[27]=c->r[27]-c->r[28]; // 80456964
  c->r[27]=rotl(c->r[27],10)&0xFFFFFFFFu; // 80456968
  c->r[27]=c->r[27]+c->r[28]; // 8045696C
  c->r[27]=rotl(c->r[27],1)&0xFFFFFFFEu; // 80456970
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[27]); // 80456974
  c->r[27]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[26]); // 80456978
  c->r[26]=rotl(c->r[27],22)&0xFFC00000u; // 8045697C
  c->r[27]=rotl(c->r[27],1)&0x00000001u; // 80456980
  c->r[26]=c->r[26]-c->r[27]; // 80456984
  c->r[26]=rotl(c->r[26],10)&0xFFFFFFFFu; // 80456988
  c->r[26]=c->r[26]+c->r[27]; // 8045698C
  c->r[26]=rotl(c->r[26],1)&0xFFFFFFFEu; // 80456990
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[26]); // 80456994
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[12]); // 80456998
  c->r[12]=rotl(c->r[26],22)&0xFFC00000u; // 8045699C
  c->r[26]=rotl(c->r[26],1)&0x00000001u; // 804569A0
  c->r[12]=c->r[12]-c->r[26]; // 804569A4
  c->r[12]=rotl(c->r[12],10)&0xFFFFFFFFu; // 804569A8
  c->r[12]=c->r[12]+c->r[26]; // 804569AC
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 804569B0
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[12]); // 804569B4
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 804569B8
  c->r[11]=rotl(c->r[12],22)&0xFFC00000u; // 804569BC
  c->r[12]=rotl(c->r[12],1)&0x00000001u; // 804569C0
  c->r[11]=c->r[11]-c->r[12]; // 804569C4
  c->r[11]=rotl(c->r[11],10)&0xFFFFFFFFu; // 804569C8
  c->r[11]=c->r[11]+c->r[12]; // 804569CC
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 804569D0
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 804569D4
  c->r[11]=R8(c->r[9]+0x00000006u); // 804569D8
  c->r[10]=c->r[10]+0x00000008u; // 804569DC
  c->r[9]=R8(c->r[9]+0x00000007u); // 804569E0
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 804569E4
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 804569E8
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 804569EC
  c->r[11]=c->r[8]+c->r[11]; // 804569F0
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[11]+0x00000100u); // 804569F4
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 804569F8
  c->r[9]=c->r[8]+c->r[9]; // 804569FC
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 80456A00
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000100u); // 80456A04
  c->r[11]=rotl(c->r[12],22)&0xFFC00000u; // 80456A08
  c->r[12]=rotl(c->r[12],1)&0x00000001u; // 80456A0C
  c->r[11]=c->r[11]-c->r[12]; // 80456A10
  c->r[11]=rotl(c->r[11],10)&0xFFFFFFFFu; // 80456A14
  c->r[11]=c->r[11]+c->r[12]; // 80456A18
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80456A1C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[11]); // 80456A20
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 80456A24
  c->r[9]=rotl(c->r[11],22)&0xFFC00000u; // 80456A28
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 80456A2C
  c->r[9]=c->r[9]-c->r[11]; // 80456A30
  c->r[9]=rotl(c->r[9],10)&0xFFFFFFFFu; // 80456A34
  c->r[9]=c->r[9]+c->r[11]; // 80456A38
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80456A3C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[9]); // 80456A40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8045689C; } // 80456A44
L_80456A48:;
  c->r[12]=0u+0x806B0000u; // 80456A48
  c->r[8]=c->r[4]-c->r[10]; // 80456A4C
  c->r[12]=c->r[12]+0xFFFF9090u; // 80456A50
  c->r[9]=c->r[3]+c->r[10]; // 80456A54
  c->ctr=c->r[8]; // 80456A58
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[4]); // 80456A5C
  if (!crb(c,0)) { goto L_80456AA4; } // 80456A60
L_80456A64:;
  c->r[8]=R8(c->r[9]+0x00000000u); // 80456A64
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[11]; // 80456A68
  c->r[9]=c->r[9]+0x00000001u; // 80456A6C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 80456A70
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 80456A74
  c->r[8]=c->r[12]+c->r[8]; // 80456A78
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+0x00000100u); // 80456A7C
  c->r[10]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 80456A80
  c->r[8]=rotl(c->r[10],22)&0xFFC00000u; // 80456A84
  c->r[10]=rotl(c->r[10],1)&0x00000001u; // 80456A88
  c->r[8]=c->r[8]-c->r[10]; // 80456A8C
  c->r[8]=rotl(c->r[8],10)&0xFFFFFFFFu; // 80456A90
  c->r[8]=c->r[8]+c->r[10]; // 80456A94
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 80456A98
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[12]+c->r[8]); // 80456A9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456A64; } // 80456AA0
L_80456AA4:;
  cmps(c,1,(int32_t)c->r[4],0); // 80456AA4
  c->r[12]=0u+0x00005DC1u; // 80456AA8
  c->r[10]=0u+0x00000000u; // 80456AAC
  if (!crb(c,5)) { goto L_80456D08; } // 80456AB0
  cmps(c,0,(int32_t)c->r[4],8); // 80456AB4
  c->r[26]=c->r[4]+0xFFFFFFF8u; // 80456AB8
  if (!crb(c,1)) { goto L_80456CAC; } // 80456ABC
  c->r[9]=0u+0x00000000u; // 80456AC0
  if (crb(c,4)) { goto L_80456ADC; } // 80456AC4
  c->r[8]=0u+0x80000000u; // 80456AC8
  c->r[8]=c->r[8]+0xFFFFFFFEu; // 80456ACC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 80456AD0
  if (crb(c,1)) { goto L_80456ADC; } // 80456AD4
  c->r[9]=0u+0x00000001u; // 80456AD8
L_80456ADC:;
  cmps(c,0,(int32_t)c->r[9],0); // 80456ADC
  if (crb(c,2)) { goto L_80456CAC; } // 80456AE0
  c->r[9]=c->r[26]+0x00000007u; // 80456AE4
  c->r[8]=0u+0x806B0000u; // 80456AE8
  c->r[9]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80456AEC
  c->r[8]=c->r[8]+0xFFFF9090u; // 80456AF0
  c->ctr=c->r[9]; // 80456AF4
  cmps(c,0,(int32_t)c->r[26],0); // 80456AF8
  if (!crb(c,1)) { goto L_80456CAC; } // 80456AFC
L_80456B00:;
  c->r[26]=R8(c->r[3]+c->r[10]); // 80456B00
  c->r[9]=c->r[3]+c->r[10]; // 80456B04
  c->r[27]=R8(c->r[9]+0x00000001u); // 80456B08
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 80456B0C
  c->r[28]=R8(c->r[9]+0x00000002u); // 80456B10
  c->r[26]=rotl(c->r[26],1)&0xFFFFFFFEu; // 80456B14
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[27]; // 80456B18
  c->r[26]=c->r[8]+c->r[26]; // 80456B1C
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80456B20
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000100u); // 80456B24
  c->r[27]=rotl(c->r[27],1)&0xFFFFFFFEu; // 80456B28
  c->r[27]=c->r[8]+c->r[27]; // 80456B2C
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80456B30
  c->r[26]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[26]); // 80456B34
  c->r[12]=R8(c->r[9]+0x00000003u); // 80456B38
  c->r[28]=c->r[8]+c->r[28]; // 80456B3C
  c->r[30]=R8(c->r[9]+0x00000004u); // 80456B40
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 80456B44
  c->r[12]=R8(c->r[9]+0x00000005u); // 80456B48
  c->r[31]=rotl(c->r[26],22)&0xFFC00000u; // 80456B4C
  c->r[26]=rotl(c->r[26],1)&0x00000001u; // 80456B50
  c->r[31]=c->r[31]-c->r[26]; // 80456B54
  c->r[29]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80456B58
  c->r[31]=rotl(c->r[31],10)&0xFFFFFFFFu; // 80456B5C
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80456B60
  c->r[26]=c->r[31]+c->r[26]; // 80456B64
  c->r[29]=c->r[8]+c->r[29]; // 80456B68
  c->r[31]=rotl(c->r[26],1)&0xFFFFFFFEu; // 80456B6C
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000100u); // 80456B70
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[31]); // 80456B74
  c->r[30]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80456B78
  c->r[30]=c->r[8]+c->r[30]; // 80456B7C
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 80456B80
  c->r[27]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[27]); // 80456B84
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000100u); // 80456B88
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456B8C
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000100u); // 80456B90
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000100u); // 80456B94
  c->r[12]=c->r[8]+c->r[12]; // 80456B98
  c->r[31]=rotl(c->r[27],22)&0xFFC00000u; // 80456B9C
  c->r[27]=rotl(c->r[27],1)&0x00000001u; // 80456BA0
  c->r[31]=c->r[31]-c->r[27]; // 80456BA4
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[12]+0x00000100u); // 80456BA8
  c->r[31]=rotl(c->r[31],10)&0xFFFFFFFFu; // 80456BAC
  c->r[27]=c->r[31]+c->r[27]; // 80456BB0
  c->r[31]=rotl(c->r[27],1)&0xFFFFFFFEu; // 80456BB4
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[31]); // 80456BB8
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[28]); // 80456BBC
  c->r[31]=rotl(c->r[28],22)&0xFFC00000u; // 80456BC0
  c->r[28]=rotl(c->r[28],1)&0x00000001u; // 80456BC4
  c->r[31]=c->r[31]-c->r[28]; // 80456BC8
  c->r[31]=rotl(c->r[31],10)&0xFFFFFFFFu; // 80456BCC
  c->r[28]=c->r[31]+c->r[28]; // 80456BD0
  c->r[31]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80456BD4
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[31]); // 80456BD8
  c->r[29]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[29]); // 80456BDC
  c->r[31]=rotl(c->r[29],22)&0xFFC00000u; // 80456BE0
  c->r[29]=rotl(c->r[29],1)&0x00000001u; // 80456BE4
  c->r[31]=c->r[31]-c->r[29]; // 80456BE8
  c->r[31]=rotl(c->r[31],10)&0xFFFFFFFFu; // 80456BEC
  c->r[29]=c->r[31]+c->r[29]; // 80456BF0
  c->r[31]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80456BF4
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[31]); // 80456BF8
  c->r[30]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[30]); // 80456BFC
  c->r[31]=rotl(c->r[30],22)&0xFFC00000u; // 80456C00
  c->r[30]=rotl(c->r[30],1)&0x00000001u; // 80456C04
  c->r[31]=c->r[31]-c->r[30]; // 80456C08
  c->r[31]=rotl(c->r[31],10)&0xFFFFFFFFu; // 80456C0C
  c->r[30]=c->r[31]+c->r[30]; // 80456C10
  c->r[31]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80456C14
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[31]); // 80456C18
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 80456C1C
  c->r[12]=rotl(c->r[31],22)&0xFFC00000u; // 80456C20
  c->r[31]=rotl(c->r[31],1)&0x00000001u; // 80456C24
  c->r[12]=c->r[12]-c->r[31]; // 80456C28
  c->r[12]=rotl(c->r[12],10)&0xFFFFFFFFu; // 80456C2C
  c->r[12]=c->r[12]+c->r[31]; // 80456C30
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456C34
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[12]); // 80456C38
  c->r[12]=R8(c->r[9]+0x00000006u); // 80456C3C
  c->r[10]=c->r[10]+0x00000008u; // 80456C40
  c->r[9]=R8(c->r[9]+0x00000007u); // 80456C44
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 80456C48
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456C4C
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 80456C50
  c->r[12]=c->r[8]+c->r[12]; // 80456C54
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[12]+0x00000100u); // 80456C58
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80456C5C
  c->r[9]=c->r[8]+c->r[9]; // 80456C60
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 80456C64
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000100u); // 80456C68
  c->r[12]=rotl(c->r[31],22)&0xFFC00000u; // 80456C6C
  c->r[31]=rotl(c->r[31],1)&0x00000001u; // 80456C70
  c->r[12]=c->r[12]-c->r[31]; // 80456C74
  c->r[12]=rotl(c->r[12],10)&0xFFFFFFFFu; // 80456C78
  c->r[12]=c->r[12]+c->r[31]; // 80456C7C
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80456C80
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[12]); // 80456C84
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[9]); // 80456C88
  c->r[9]=rotl(c->r[12],22)&0xFFC00000u; // 80456C8C
  c->r[12]=rotl(c->r[12],1)&0x00000001u; // 80456C90
  c->r[9]=c->r[9]-c->r[12]; // 80456C94
  c->r[9]=rotl(c->r[9],10)&0xFFFFFFFFu; // 80456C98
  c->r[9]=c->r[9]+c->r[12]; // 80456C9C
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80456CA0
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[9]); // 80456CA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456B00; } // 80456CA8
L_80456CAC:;
  c->r[9]=0u+0x806B0000u; // 80456CAC
  c->r[8]=c->r[4]-c->r[10]; // 80456CB0
  c->r[9]=c->r[9]+0xFFFF9090u; // 80456CB4
  c->r[3]=c->r[3]+c->r[10]; // 80456CB8
  c->ctr=c->r[8]; // 80456CBC
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[4]); // 80456CC0
  if (!crb(c,0)) { goto L_80456D08; } // 80456CC4
L_80456CC8:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 80456CC8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[12]; // 80456CCC
  c->r[3]=c->r[3]+0x00000001u; // 80456CD0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80456CD4
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80456CD8
  c->r[4]=c->r[9]+c->r[4]; // 80456CDC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000100u); // 80456CE0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[4]); // 80456CE4
  c->r[4]=rotl(c->r[8],22)&0xFFC00000u; // 80456CE8
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 80456CEC
  c->r[4]=c->r[4]-c->r[8]; // 80456CF0
  c->r[4]=rotl(c->r[4],10)&0xFFFFFFFFu; // 80456CF4
  c->r[4]=c->r[4]+c->r[8]; // 80456CF8
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80456CFC
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+c->r[4]); // 80456D00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456CC8; } // 80456D04
L_80456D08:;
  W16(c->r[5]+0x00000000u,c->r[0]); // 80456D08
  c->r[3]=0u+0x00000000u; // 80456D0C
  W16(c->r[6]+0x00000000u,c->r[11]); // 80456D10
  W16(c->r[7]+0x00000000u,c->r[12]); // 80456D14
L_80456D18:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80456D18
  c->r[1]=c->r[1]+0x00000020u; // 80456D1C
  return; // 80456D20
}

// fn_80456D24
void f_80456D24(Ctx* __restrict c) {
  trace_call(0x80456D24u);
  c->r[3]=0u+0x807E0000u; // 80456D24
  c->r[3]=R32(c->r[3]+0x00005170u); // 80456D28
  return; // 80456D2C
}

// fn_80456D30
void f_80456D30(Ctx* __restrict c) {
  trace_call(0x80456D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456D30
  c->r[0]=c->lr; // 80456D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80456D38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80456D3C
  c->r[31]=0u+0x807E0000u; // 80456D40
  c->r[31]=c->r[31]+0x00005158u; // 80456D44
  c->lr=0x80456D4Cu; f_80455344(c); // 80456D48
  c->r[6]=R32(c->r[31]+0x00000000u); // 80456D4C
  c->r[3]=c->r[31]+0x00000020u; // 80456D50
  c->r[4]=0u+0x00000000u; // 80456D54
  c->r[5]=0u+0x00000F80u; // 80456D58
  c->r[0]=c->r[6]+0x00000001u; // 80456D5C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80456D60
  c->lr=0x80456D68u; f_800043EC(c); // 80456D64
  c->r[0]=0u+0x00000000u; // 80456D68
  W32(c->r[31]+0x00000018u,c->r[0]); // 80456D6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80456D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80456D74
  c->lr=c->r[0]; // 80456D78
  c->r[1]=c->r[1]+0x00000010u; // 80456D7C
  return; // 80456D80
}

// fn_80456D84
void f_80456D84(Ctx* __restrict c) {
  trace_call(0x80456D84u);
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 80456D84
  W32(c->r[4]+0x00000000u,c->r[0]); // 80456D88
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 80456D8C
  c->r[0]=R32(c->r[3]+0x00000040u); // 80456D90
  c->r[0]=c->r[0]-c->r[4]; // 80456D94
  W32(c->r[5]+0x00000000u,c->r[0]); // 80456D98
  c->r[4]=R32(c->r[3]+0x00000088u); // 80456D9C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80456DA0
  c->r[0]=c->r[0]-c->r[4]; // 80456DA4
  W32(c->r[6]+0x00000000u,c->r[0]); // 80456DA8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80456DAC
  return; // 80456DB0
}

// fn_80456DB4
void f_80456DB4(Ctx* __restrict c) {
  trace_call(0x80456DB4u);
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 80456DB4
  c->r[0]=R32(c->r[3]+0x00000088u); // 80456DB8
  c->r[4]=c->r[4]+c->r[5]; // 80456DBC
  c->r[0]=c->r[0]+c->r[5]; // 80456DC0
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80456DC4
  W32(c->r[3]+0x00000088u,c->r[0]); // 80456DC8
  return; // 80456DCC
}

// fn_80456DD0
void f_80456DD0(Ctx* __restrict c) {
  trace_call(0x80456DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456DD0
  c->r[0]=c->lr; // 80456DD4
  c->r[7]=0u+0x807E0000u; // 80456DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80456DDC
  c->r[0]=0u+0x00000002u; // 80456DE0
  c->r[7]=c->r[7]+0x00005178u; // 80456DE4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80456DE8
  c->r[27]=c->r[3]|c->r[3]; // 80456DEC
  c->r[28]=c->r[4]|c->r[4]; // 80456DF0
  c->r[29]=c->r[5]|c->r[5]; // 80456DF4
  c->r[31]=c->r[6]|c->r[6]; // 80456DF8
  c->r[3]=0u+0x00000000u; // 80456DFC
  c->ctr=c->r[0]; // 80456E00
L_80456E04:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000000u); // 80456E04
  cmps(c,0,(int32_t)c->r[0],0); // 80456E08
  if (crb(c,2)) { goto L_80456E8C; } // 80456E0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000000F8u); // 80456E10
  c->r[3]=c->r[3]+0x00000001u; // 80456E14
  cmps(c,0,(int32_t)c->r[0],0); // 80456E18
  if (crb(c,2)) { goto L_80456E8C; } // 80456E1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000001F0u); // 80456E20
  c->r[3]=c->r[3]+0x00000001u; // 80456E24
  cmps(c,0,(int32_t)c->r[0],0); // 80456E28
  if (crb(c,2)) { goto L_80456E8C; } // 80456E2C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000002E8u); // 80456E30
  c->r[3]=c->r[3]+0x00000001u; // 80456E34
  cmps(c,0,(int32_t)c->r[0],0); // 80456E38
  if (crb(c,2)) { goto L_80456E8C; } // 80456E3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000003E0u); // 80456E40
  c->r[3]=c->r[3]+0x00000001u; // 80456E44
  cmps(c,0,(int32_t)c->r[0],0); // 80456E48
  if (crb(c,2)) { goto L_80456E8C; } // 80456E4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000004D8u); // 80456E50
  c->r[3]=c->r[3]+0x00000001u; // 80456E54
  cmps(c,0,(int32_t)c->r[0],0); // 80456E58
  if (crb(c,2)) { goto L_80456E8C; } // 80456E5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000005D0u); // 80456E60
  c->r[3]=c->r[3]+0x00000001u; // 80456E64
  cmps(c,0,(int32_t)c->r[0],0); // 80456E68
  if (crb(c,2)) { goto L_80456E8C; } // 80456E6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000006C8u); // 80456E70
  c->r[3]=c->r[3]+0x00000001u; // 80456E74
  cmps(c,0,(int32_t)c->r[0],0); // 80456E78
  if (crb(c,2)) { goto L_80456E8C; } // 80456E7C
  c->r[7]=c->r[7]+0x000007C0u; // 80456E80
  c->r[3]=c->r[3]+0x00000001u; // 80456E84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80456E04; } // 80456E88
L_80456E8C:;
  cmps(c,0,(int32_t)c->r[3],16); // 80456E8C
  if (!crb(c,2)) { goto L_80456E9C; } // 80456E90
  c->r[3]=0u+0x00000000u; // 80456E94
  goto L_80456F60; // 80456E98
L_80456E9C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)248); // 80456E9C
  c->r[3]=0u+0x807E0000u; // 80456EA0
  c->r[4]=0u+0x00000000u; // 80456EA4
  c->r[3]=c->r[3]+0x00005178u; // 80456EA8
  c->r[30]=c->r[3]+c->r[0]; // 80456EAC
  c->r[5]=0u+0x000000F8u; // 80456EB0
  c->r[3]=c->r[30]|c->r[30]; // 80456EB4
  c->lr=0x80456EBCu; f_800043EC(c); // 80456EB8
  c->r[0]=0u+0x00000001u; // 80456EBC
  W16(c->r[30]+0x00000000u,c->r[0]); // 80456EC0
  c->lr=0x80456EC8u; f_80455358(c); // 80456EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80456EC8
  W32(c->r[30]+0x00000008u,c->r[3]); // 80456ECC
  if (!crb(c,2)) { goto L_80456F04; } // 80456ED0
  cmps(c,0,(int32_t)c->r[30],0); // 80456ED4
  if (crb(c,2)) { goto L_80456EFC; } // 80456ED8
  c->r[31]=0u+0x00000000u; // 80456EDC
  W32(c->r[30]+0x00000008u,c->r[31]); // 80456EE0
  c->lr=0x80456EE8u; f_8045551C(c); // 80456EE4
  c->r[3]=c->r[30]|c->r[30]; // 80456EE8
  c->r[4]=0u+0x00000000u; // 80456EEC
  c->r[5]=0u+0x000000F8u; // 80456EF0
  c->lr=0x80456EF8u; f_800043EC(c); // 80456EF4
  W16(c->r[30]+0x00000000u,c->r[31]); // 80456EF8
L_80456EFC:;
  c->r[3]=0u+0x00000000u; // 80456EFC
  goto L_80456F60; // 80456F00
L_80456F04:;
  W32(c->r[30]+0x00000038u,c->r[27]); // 80456F04
  c->r[8]=0u+0x80450000u; // 80456F08
  c->r[7]=0u+0x80450000u; // 80456F0C
  c->r[6]=0u+0x00000000u; // 80456F10
  W32(c->r[30]+0x0000003Cu,c->r[28]); // 80456F14
  c->r[8]=c->r[8]+0x00006D84u; // 80456F18
  c->r[7]=c->r[7]+0x00006DB4u; // 80456F1C
  c->r[0]=0u+0xFFFFFF80u; // 80456F20
  W32(c->r[30]+0x00000040u,c->r[29]); // 80456F24
  c->r[3]=c->r[30]+0x000000C4u; // 80456F28
  c->r[4]=0u+0x00000000u; // 80456F2C
  c->r[5]=0u+0x00000010u; // 80456F30
  W32(c->r[30]+0x00000044u,c->r[31]); // 80456F34
  W32(c->r[30]+0x00000078u,c->r[8]); // 80456F38
  W32(c->r[30]+0x0000007Cu,c->r[30]); // 80456F3C
  W32(c->r[30]+0x00000080u,c->r[7]); // 80456F40
  W32(c->r[30]+0x00000084u,c->r[30]); // 80456F44
  W32(c->r[30]+0x000000C0u,c->r[6]); // 80456F48
  W16(c->r[30]+0x000000D4u,c->r[6]); // 80456F4C
  W16(c->r[30]+0x000000D6u,c->r[0]); // 80456F50
  W16(c->r[30]+0x000000D8u,c->r[0]); // 80456F54
  c->lr=0x80456F5Cu; f_800043EC(c); // 80456F58
  c->r[3]=c->r[30]|c->r[30]; // 80456F5C
L_80456F60:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80456F60
  c->r[0]=R32(c->r[1]+0x00000024u); // 80456F64
  c->lr=c->r[0]; // 80456F68
  c->r[1]=c->r[1]+0x00000020u; // 80456F6C
  return; // 80456F70
}

// fn_80456F74
void f_80456F74(Ctx* __restrict c) {
  trace_call(0x80456F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456F74
  c->r[0]=c->lr; // 80456F78
  cmps(c,0,(int32_t)c->r[3],0); // 80456F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80456F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80456F84
  W32(c->r[1]+0x00000008u,c->r[30]); // 80456F88
  c->r[30]=c->r[3]|c->r[3]; // 80456F8C
  if (crb(c,2)) { goto L_80456FB8; } // 80456F90
  c->r[3]=R32(c->r[3]+0x00000008u); // 80456F94
  c->r[31]=0u+0x00000000u; // 80456F98
  W32(c->r[30]+0x00000008u,c->r[31]); // 80456F9C
  c->lr=0x80456FA4u; f_8045551C(c); // 80456FA0
  c->r[3]=c->r[30]|c->r[30]; // 80456FA4
  c->r[4]=0u+0x00000000u; // 80456FA8
  c->r[5]=0u+0x000000F8u; // 80456FAC
  c->lr=0x80456FB4u; f_800043EC(c); // 80456FB0
  W16(c->r[30]+0x00000000u,c->r[31]); // 80456FB4
L_80456FB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80456FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80456FBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80456FC0
  c->lr=c->r[0]; // 80456FC4
  c->r[1]=c->r[1]+0x00000010u; // 80456FC8
  return; // 80456FCC
}

// fn_80456FD0
void f_80456FD0(Ctx* __restrict c) {
  trace_call(0x80456FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80456FD0
  c->r[0]=c->lr; // 80456FD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80456FD8
  c->r[0]=0u+0x00000001u; // 80456FDC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80456FE0
  c->r[31]=c->r[3]|c->r[3]; // 80456FE4
  c->r[6]=c->r[31]+0x0000000Cu; // 80456FE8
  W32(c->r[1]+0x00000038u,c->r[30]); // 80456FEC
  c->r[7]=c->r[31]+0x0000000Du; // 80456FF0
  c->r[8]=c->r[31]+0x0000000Fu; // 80456FF4
  c->r[9]=c->r[31]+0x0000000Eu; // 80456FF8
  W32(c->r[1]+0x00000034u,c->r[29]); // 80456FFC
  c->r[29]=c->r[5]|c->r[5]; // 80457000
  c->r[5]=c->r[1]+0x00000018u; // 80457004
  c->r[10]=c->r[31]+0x00000014u; // 80457008
  W32(c->r[1]+0x00000030u,c->r[28]); // 8045700C
  c->r[28]=c->r[4]|c->r[4]; // 80457010
  c->r[4]=c->r[29]|c->r[29]; // 80457014
  W16(c->r[3]+0x00000002u,c->r[0]); // 80457018
  c->r[0]=c->r[3]+0x00000018u; // 8045701C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80457020
  c->r[0]=c->r[3]+0x00000010u; // 80457024
  c->r[3]=c->r[28]|c->r[28]; // 80457028
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8045702C
  c->lr=0x80457034u; f_8045978C(c); // 80457030
  cmps(c,0,(int32_t)c->r[3],0); // 80457034
  if (!crb(c,0)) { goto L_80457044; } // 80457038
  c->r[3]=0u+0x00000000u; // 8045703C
  goto L_804572A0; // 80457040
L_80457044:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 80457044
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80457048
  cmps(c,0,(int32_t)c->r[0],4); // 8045704C
  if (!crb(c,1)) { goto L_80457140; } // 80457050
  c->r[0]=R32(c->r[31]+0x000000B4u); // 80457054
  cmps(c,0,(int32_t)c->r[0],0); // 80457058
  if (!crb(c,2)) { goto L_80457078; } // 8045705C
  c->r[3]=0u+0x806B0000u; // 80457060
  c->r[3]=c->r[3]+0xFFFF9890u; // 80457064
  c->r[4]=c->r[3]+0x00000020u; // 80457068
  c->lr=0x80457070u; f_80459DC4(c); // 8045706C
  c->r[3]=0u+0xFFFFFFFFu; // 80457070
  goto L_804572A0; // 80457074
L_80457078:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80457078
  c->r[30]=0u+0x00000000u; // 8045707C
  c->r[3]=0u+0x00000008u; // 80457080
  c->r[7]=0u+0x00000060u; // 80457084
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)192); // 80457088
  c->r[0]=0u+0x0000000Au; // 8045708C
  W8(c->r[31]+0x0000000Du,c->r[3]); // 80457090
  c->r[3]=c->r[28]|c->r[28]; // 80457094
  c->r[4]=c->r[29]|c->r[29]; // 80457098
  W8(c->r[31]+0x0000000Fu,c->r[5]); // 8045709C
  c->r[5]=c->r[1]+0x00000011u; // 804570A0
  c->r[6]=c->r[1]+0x00000010u; // 804570A4
  W32(c->r[31]+0x00000010u,c->r[7]); // 804570A8
  W16(c->r[31]+0x00000098u,c->r[0]); // 804570AC
  W16(c->r[31]+0x0000001Cu,c->r[30]); // 804570B0
  W16(c->r[31]+0x00000024u,c->r[30]); // 804570B4
  W16(c->r[31]+0x00000026u,c->r[30]); // 804570B8
  W32(c->r[31]+0x00000020u,c->r[30]); // 804570BC
  W32(c->r[31]+0x00000028u,c->r[30]); // 804570C0
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 804570C4
  W32(c->r[31]+0x00000030u,c->r[30]); // 804570C8
  W32(c->r[31]+0x00000034u,c->r[30]); // 804570CC
  W32(c->r[31]+0x00000088u,c->r[30]); // 804570D0
  c->lr=0x804570D8u; f_804598BC(c); // 804570D4
  cmps(c,0,(int32_t)c->r[3],0); // 804570D8
  if (!crb(c,0)) { goto L_804570E8; } // 804570DC
  c->r[3]=0u+0x00000000u; // 804570E0
  goto L_804572A0; // 804570E4
L_804570E8:;
  W16(c->r[1]+0x00000028u,c->r[30]); // 804570E8
  c->r[3]=c->r[31]|c->r[31]; // 804570EC
  c->r[4]=R8(c->r[1]+0x00000011u); // 804570F0
  c->r[7]=c->r[1]+0x0000002Au; // 804570F4
  c->r[5]=R8(c->r[1]+0x00000010u); // 804570F8
  c->r[8]=c->r[1]+0x0000002Cu; // 804570FC
  c->r[6]=R32(c->r[31]+0x00000018u); // 80457100
  c->r[9]=c->r[1]+0x0000002Eu; // 80457104
  c->lr=0x8045710Cu; f_80457680(c); // 80457108
  cmps(c,0,(int32_t)c->r[3],0); // 8045710C
  if (!crb(c,0)) { goto L_8045711C; } // 80457110
  c->r[3]=0u+0xFFFFFFFFu; // 80457114
  goto L_804572A0; // 80457118
L_8045711C:;
  c->r[3]=0u+0x807E0000u; // 8045711C
  c->r[12]=R32(c->r[3]+0x0000515Cu); // 80457120
  cmps(c,0,(int32_t)c->r[12],0); // 80457124
  if (crb(c,2)) { goto L_8045725C; } // 80457128
  c->r[4]=c->r[1]+0x00000028u; // 8045712C
  c->r[3]=R32(c->r[31]+0x000000B4u); // 80457130
  c->ctr=c->r[12]; // 80457134
  if (true) { c->lr=0x8045713Cu; dispatch(c,c->ctr); } // 80457138
  goto L_8045725C; // 8045713C
L_80457140:;
  c->r[3]=c->r[28]|c->r[28]; // 80457140
  c->r[4]=c->r[29]|c->r[29]; // 80457144
  c->r[5]=c->r[1]+0x00000011u; // 80457148
  c->r[6]=c->r[1]+0x00000010u; // 8045714C
  c->lr=0x80457154u; f_804598BC(c); // 80457150
  cmps(c,0,(int32_t)c->r[3],0); // 80457154
  if (!crb(c,0)) { goto L_80457164; } // 80457158
  c->r[3]=0u+0x00000000u; // 8045715C
  goto L_804572A0; // 80457160
L_80457164:;
  c->r[4]=R8(c->r[1]+0x00000011u); // 80457164
  c->r[3]=c->r[31]|c->r[31]; // 80457168
  c->r[5]=R8(c->r[1]+0x00000010u); // 8045716C
  c->r[7]=c->r[1]+0x00000016u; // 80457170
  c->r[6]=R32(c->r[31]+0x00000018u); // 80457174
  c->r[8]=c->r[1]+0x00000014u; // 80457178
  c->r[9]=c->r[1]+0x00000012u; // 8045717C
  c->lr=0x80457184u; f_80457680(c); // 80457180
  cmps(c,0,(int32_t)c->r[3],0); // 80457184
  if (!crb(c,0)) { goto L_80457194; } // 80457188
  c->r[3]=0u+0xFFFFFFFFu; // 8045718C
  goto L_804572A0; // 80457190
L_80457194:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80457194
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000016u); // 80457198
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000014u); // 8045719C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000012u); // 804571A0
  c->lr=0x804571A8u; f_804554F0(c); // 804571A4
  c->r[3]=c->r[28]|c->r[28]; // 804571A8
  c->r[4]=c->r[29]|c->r[29]; // 804571AC
  c->r[5]=c->r[31]+0x0000001Cu; // 804571B0
  c->lr=0x804571B8u; f_80459874(c); // 804571B4
  cmps(c,0,(int32_t)c->r[3],0); // 804571B8
  if (!crb(c,0)) { goto L_804571C8; } // 804571BC
  c->r[3]=0u+0x00000000u; // 804571C0
  goto L_804572A0; // 804571C4
L_804571C8:;
  c->r[3]=c->r[28]|c->r[28]; // 804571C8
  c->r[4]=c->r[29]|c->r[29]; // 804571CC
  c->r[5]=c->r[1]+0x00000020u; // 804571D0
  c->r[6]=c->r[1]+0x0000001Cu; // 804571D4
  c->lr=0x804571DCu; f_8045990C(c); // 804571D8
  cmps(c,0,(int32_t)c->r[3],0); // 804571DC
  if (!crb(c,0)) { goto L_804571EC; } // 804571E0
  c->r[3]=0u+0x00000000u; // 804571E4
  goto L_804572A0; // 804571E8
L_804571EC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 804571EC
  c->r[4]=R32(c->r[31]+0x00000014u); // 804571F0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000001Cu); // 804571F4
  c->lr=0x804571FCu; f_80455494(c); // 804571F8
  c->r[3]=R32(c->r[31]+0x00000008u); // 804571FC
  c->r[4]=c->r[1]+0x00000020u; // 80457200
  c->r[5]=c->r[1]+0x0000001Cu; // 80457204
  c->lr=0x8045720Cu; f_804554A8(c); // 80457208
  c->r[0]=c->r[31]+0x00000034u; // 8045720C
  c->r[3]=c->r[28]|c->r[28]; // 80457210
  W32(c->r[1]+0x00000008u,c->r[0]); // 80457214
  c->r[4]=c->r[29]|c->r[29]; // 80457218
  c->r[5]=c->r[31]+0x00000020u; // 8045721C
  c->r[6]=c->r[31]+0x00000024u; // 80457220
  c->r[7]=c->r[31]+0x00000026u; // 80457224
  c->r[8]=c->r[31]+0x00000028u; // 80457228
  c->r[9]=c->r[31]+0x0000002Cu; // 8045722C
  c->r[10]=c->r[31]+0x00000030u; // 80457230
  c->lr=0x80457238u; f_804599DC(c); // 80457234
  c->r[3]=c->r[28]|c->r[28]; // 80457238
  c->r[4]=c->r[29]|c->r[29]; // 8045723C
  c->r[5]=c->r[31]+0x000000C0u; // 80457240
  c->r[6]=c->r[31]+0x000000C4u; // 80457244
  c->r[7]=c->r[31]+0x000000D4u; // 80457248
  c->r[8]=c->r[31]+0x000000D6u; // 8045724C
  c->lr=0x80457254u; f_80459AF8(c); // 80457250
  c->r[0]=0u+0x00000000u; // 80457254
  W16(c->r[31]+0x00000098u,c->r[0]); // 80457258
L_8045725C:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 8045725C
  c->r[0]=0u+0x00000000u; // 80457260
  c->r[3]=R8(c->r[31]+0x0000000Fu); // 80457264
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80457268
  c->r[6]=R32(c->r[31]+0x00000010u); // 8045726C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80457270
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80457274
  c->r[4]=R32(c->r[31]+0x00000040u); // 80457278
  c->r[3]=R32(c->r[31]+0x00000044u); // 8045727C
  W32(c->r[31]+0x00000050u,c->r[8]); // 80457280
  W32(c->r[31]+0x00000054u,c->r[7]); // 80457284
  W32(c->r[31]+0x00000058u,c->r[6]); // 80457288
  W32(c->r[31]+0x0000005Cu,c->r[5]); // 8045728C
  W32(c->r[31]+0x00000060u,c->r[4]); // 80457290
  W32(c->r[31]+0x00000064u,c->r[3]); // 80457294
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80457298
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000018u); // 8045729C
L_804572A0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 804572A0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 804572A4
  c->r[30]=R32(c->r[1]+0x00000038u); // 804572A8
  c->r[29]=R32(c->r[1]+0x00000034u); // 804572AC
  c->r[28]=R32(c->r[1]+0x00000030u); // 804572B0
  c->lr=c->r[0]; // 804572B4
  c->r[1]=c->r[1]+0x00000040u; // 804572B8
  return; // 804572BC
}

// fn_804572C0
void f_804572C0(Ctx* __restrict c) {
  trace_call(0x804572C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804572C0
  c->r[10]=0u+0x80000000u; // 804572C4
  c->r[4]=0u+0x00010000u; // 804572C8
  c->r[0]=0u+0x00000000u; // 804572CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 804572D0
  c->r[31]=c->r[4]+0xFFFFBB80u; // 804572D4
  c->r[12]=0u+0x00000002u; // 804572D8
  c->r[9]=0u+0x0000007Fu; // 804572DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 804572E0
  c->r[8]=0u+0x00000400u; // 804572E4
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 804572E8
  c->r[30]=0u+0x00000001u; // 804572EC
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000009Au); // 804572F0
  c->r[11]=0u+0x00000010u; // 804572F4
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 804572F8
  c->r[5]=R32(c->r[3]+0x00000040u); // 804572FC
  c->r[4]=R32(c->r[3]+0x00000044u); // 80457300
  W16(c->r[3]+0x00000002u,c->r[30]); // 80457304
  W32(c->r[3]+0x00000014u,c->r[31]); // 80457308
  W8(c->r[3]+0x0000000Eu,c->r[12]); // 8045730C
  W8(c->r[3]+0x0000000Du,c->r[11]); // 80457310
  W32(c->r[3]+0x00000018u,c->r[10]); // 80457314
  W8(c->r[3]+0x0000000Fu,c->r[9]); // 80457318
  W32(c->r[3]+0x00000010u,c->r[8]); // 8045731C
  W16(c->r[3]+0x00000098u,c->r[7]); // 80457320
  W32(c->r[3]+0x00000050u,c->r[12]); // 80457324
  W32(c->r[3]+0x00000054u,c->r[9]); // 80457328
  W32(c->r[3]+0x00000058u,c->r[8]); // 8045732C
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 80457330
  W32(c->r[3]+0x00000060u,c->r[5]); // 80457334
  W32(c->r[3]+0x00000064u,c->r[4]); // 80457338
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8045733C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 80457340
  W16(c->r[3]+0x00000024u,c->r[0]); // 80457344
  W16(c->r[3]+0x00000026u,c->r[0]); // 80457348
  W32(c->r[3]+0x00000020u,c->r[0]); // 8045734C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80457350
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80457354
  W32(c->r[3]+0x00000030u,c->r[0]); // 80457358
  W32(c->r[3]+0x00000034u,c->r[0]); // 8045735C
  W32(c->r[3]+0x00000088u,c->r[0]); // 80457360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80457364
  c->r[30]=R32(c->r[1]+0x00000008u); // 80457368
  c->r[1]=c->r[1]+0x00000010u; // 8045736C
  return; // 80457370
}

// fn_80457374
void f_80457374(Ctx* __restrict c) {
  trace_call(0x80457374u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80457374
  c->r[0]=c->lr; // 80457378
  c->r[6]=0u+0x00000000u; // 8045737C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80457380
  c->r[0]=0u+0xFFFFFF80u; // 80457384
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80457388
  c->r[31]=c->r[5]|c->r[5]; // 8045738C
  c->r[5]=0u+0x00000010u; // 80457390
  W32(c->r[1]+0x00000018u,c->r[30]); // 80457394
  c->r[30]=c->r[4]|c->r[4]; // 80457398
  c->r[4]=0u+0x00000000u; // 8045739C
  W32(c->r[1]+0x00000014u,c->r[29]); // 804573A0
  c->r[29]=c->r[3]|c->r[3]; // 804573A4
  W32(c->r[3]+0x000000C0u,c->r[6]); // 804573A8
  W16(c->r[3]+0x000000D4u,c->r[6]); // 804573AC
  W16(c->r[3]+0x000000D6u,c->r[0]); // 804573B0
  W16(c->r[3]+0x000000D8u,c->r[0]); // 804573B4
  c->r[3]=c->r[3]+0x000000C4u; // 804573B8
  c->lr=0x804573C0u; f_800043EC(c); // 804573BC
  c->r[0]=R16(c->r[30]+0x00000000u); // 804573C0
  cmpu(c,0,c->r[0],0x00008000u); // 804573C4
  if (!crb(c,2)) { goto L_804573E0; } // 804573C8
  c->r[3]=c->r[29]|c->r[29]; // 804573CC
  c->r[4]=c->r[30]|c->r[30]; // 804573D0
  c->r[5]=c->r[31]|c->r[31]; // 804573D4
  c->lr=0x804573DCu; f_80456FD0(c); // 804573D8
  goto L_80457474; // 804573DC
L_804573E0:;
  c->r[3]=c->r[30]|c->r[30]; // 804573E0
  c->lr=0x804573E8u; f_804619A4(c); // 804573E4
  cmps(c,0,(int32_t)c->r[3],0); // 804573E8
  if (crb(c,2)) { goto L_80457404; } // 804573EC
  c->r[3]=c->r[29]|c->r[29]; // 804573F0
  c->r[4]=c->r[30]|c->r[30]; // 804573F4
  c->r[5]=c->r[31]|c->r[31]; // 804573F8
  c->lr=0x80457400u; f_80461598(c); // 804573FC
  goto L_80457474; // 80457400
L_80457404:;
  c->r[3]=c->r[30]|c->r[30]; // 80457404
  c->lr=0x8045740Cu; f_80458E34(c); // 80457408
  cmps(c,0,(int32_t)c->r[3],0); // 8045740C
  if (crb(c,2)) { goto L_80457428; } // 80457410
  c->r[3]=c->r[29]|c->r[29]; // 80457414
  c->r[4]=c->r[30]|c->r[30]; // 80457418
  c->r[5]=c->r[31]|c->r[31]; // 8045741C
  c->lr=0x80457424u; f_804581F4(c); // 80457420
  goto L_80457474; // 80457424
L_80457428:;
  c->r[3]=c->r[30]|c->r[30]; // 80457428
  c->lr=0x80457430u; f_80455C68(c); // 8045742C
  cmps(c,0,(int32_t)c->r[3],0); // 80457430
  if (crb(c,2)) { goto L_8045744C; } // 80457434
  c->r[3]=c->r[29]|c->r[29]; // 80457438
  c->r[4]=c->r[30]|c->r[30]; // 8045743C
  c->r[5]=c->r[31]|c->r[31]; // 80457440
  c->lr=0x80457448u; f_80455DD8(c); // 80457444
  goto L_80457474; // 80457448
L_8045744C:;
  c->r[3]=c->r[30]|c->r[30]; // 8045744C
  c->lr=0x80457454u; f_80461BF8(c); // 80457450
  cmps(c,0,(int32_t)c->r[3],0); // 80457454
  if (crb(c,2)) { goto L_80457470; } // 80457458
  c->r[3]=c->r[29]|c->r[29]; // 8045745C
  c->r[4]=c->r[30]|c->r[30]; // 80457460
  c->r[5]=c->r[31]|c->r[31]; // 80457464
  c->lr=0x8045746Cu; f_80461D70(c); // 80457468
  goto L_80457474; // 8045746C
L_80457470:;
  c->r[3]=0u+0xFFFFFFFFu; // 80457470
L_80457474:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80457474
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80457478
  c->r[30]=R32(c->r[1]+0x00000018u); // 8045747C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80457480
  c->lr=c->r[0]; // 80457484
  c->r[1]=c->r[1]+0x00000020u; // 80457488
  return; // 8045748C
}

// fn_80457490
void f_80457490(Ctx* __restrict c) {
  trace_call(0x80457490u);
  W32(c->r[3]+0x00000078u,c->r[4]); // 80457490
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80457494
  return; // 80457498
}

// fn_8045749C
void f_8045749C(Ctx* __restrict c) {
  trace_call(0x8045749Cu);
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8045749C
  return; // 804574A0
}

// fn_804574A4
void f_804574A4(Ctx* __restrict c) {
  trace_call(0x804574A4u);
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000098u); // 804574A4
  return; // 804574A8
}

// fn_804574AC
void f_804574AC(Ctx* __restrict c) {
  trace_call(0x804574ACu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 804574AC
  return; // 804574B0
}

// fn_804574B4
void f_804574B4(Ctx* __restrict c) {
  trace_call(0x804574B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804574B4
  c->r[0]=c->lr; // 804574B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 804574BC
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 804574C0
  cmps(c,0,(int32_t)c->r[4],1); // 804574C4
  if (!crb(c,2)) { goto L_804574E0; } // 804574C8
  c->r[0]=R32(c->r[3]+0x000000DCu); // 804574CC
  cmps(c,0,(int32_t)c->r[0],0); // 804574D0
  if (crb(c,2)) { goto L_804574E0; } // 804574D4
  c->r[3]=0u+0x00000002u; // 804574D8
  goto L_80457504; // 804574DC
L_804574E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 804574E0
  if (!crb(c,2)) { goto L_80457500; } // 804574E4
  c->r[3]=0u+0x806B0000u; // 804574E8
  c->r[3]=c->r[3]+0xFFFF9890u; // 804574EC
  c->r[3]=c->r[3]+0x00000043u; // 804574F0
  c->lr=0x804574F8u; f_80459D44(c); // 804574F4
  c->r[3]=0u+0xFFFFFFFFu; // 804574F8
  goto L_80457504; // 804574FC
L_80457500:;
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80457500
L_80457504:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80457504
  c->lr=c->r[0]; // 80457508
  c->r[1]=c->r[1]+0x00000010u; // 8045750C
  return; // 80457510
}

// fn_80457514
void f_80457514(Ctx* __restrict c) {
  trace_call(0x80457514u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000098u); // 80457514
  cmps(c,0,(int32_t)c->r[0],0); // 80457518
  if (!crb(c,2)) { goto L_80457528; } // 8045751C
  c->r[3]=0u+0x00000010u; // 80457520
  return; // 80457524
L_80457528:;
  cmps(c,0,(int32_t)c->r[0],2); // 80457528
  if (!crb(c,2)) { goto L_80457558; } // 8045752C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000009Cu); // 80457530
  cmps(c,0,(int32_t)c->r[0],2); // 80457534
  if (!crb(c,2)) { goto L_80457544; } // 80457538
  c->r[3]=0u+0x00000004u; // 8045753C
  return; // 80457540
L_80457544:;
  cmps(c,0,(int32_t)c->r[0],1); // 80457544
  c->r[3]=0u+0x00000010u; // 80457548
  if (!crb(c,2)) return; // 8045754C
  c->r[3]=0u+0x00000008u; // 80457550
  return; // 80457554
L_80457558:;
  cmps(c,0,(int32_t)c->r[0],1); // 80457558
  if (!crb(c,2)) { goto L_80457578; } // 8045755C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000009Cu); // 80457560
  c->r[3]=0u+0x00000010u; // 80457564
  cmps(c,0,(int32_t)c->r[0],2); // 80457568
  if (!crb(c,2)) return; // 8045756C
  c->r[3]=0u+0x00000004u; // 80457570
  return; // 80457574
L_80457578:;
  c->r[3]=0u+0x00000010u; // 80457578
  return; // 8045757C
}

// fn_80457580
void f_80457580(Ctx* __restrict c) {
  trace_call(0x80457580u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80457580
  return; // 80457584
}

// fn_80457588
void f_80457588(Ctx* __restrict c) {
  trace_call(0x80457588u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80457588
  return; // 8045758C
}

// fn_80457590
void f_80457590(Ctx* __restrict c) {
  trace_call(0x80457590u);
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000024u); // 80457590
  return; // 80457594
}

