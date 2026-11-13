#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801A2858
void f_801A2858(Ctx* __restrict c) {
  trace_call(0x801A2858u);
  f_801A489C(c); return; // 801A2858
}

// fn_801A285C
void f_801A285C(Ctx* __restrict c) {
  trace_call(0x801A285Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A285C
  c->r[0]=c->lr; // 801A2860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2864
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A2868
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801A286C
  cmps(c,0,(int32_t)c->r[30],0); // 801A2870
  if (crb(c,2)) { goto L_801A28B8; } // 801A2874
  c->lr=0x801A287Cu; f_801A19E8(c); // 801A2878
  c->r[31]=c->r[3]|c->r[3]; // 801A287C
  c->lr=0x801A2884u; f_8005E1B0(c); // 801A2880
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801A2884
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A2888
  c->r[5]=0u+0x801A0000u; // 801A288C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801A2890
  c->r[4]=c->r[30]+c->r[4]; // 801A2894
  c->r[5]=c->r[5]+0x000028CCu; // 801A2898
  c->r[4]=c->r[4]+c->r[0]; // 801A289C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A28A0
  c->r[0]=R32(c->r[30]+c->r[3]); // 801A28A4
  cmpu(c,0,c->r[0],0x00000010u); // 801A28A8
  if (!crb(c,0)) { goto L_801A28B8; } // 801A28AC
  c->r[0]=0u+0x00000010u; // 801A28B0
  W32(c->r[30]+c->r[3],c->r[0]); // 801A28B4
L_801A28B8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A28B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A28BC
  c->lr=c->r[0]; // 801A28C0
  c->r[1]=c->r[1]+0x00000010u; // 801A28C4
  return; // 801A28C8
}

// fn_801A28CC
void f_801A28CC(Ctx* __restrict c) {
  trace_call(0x801A28CCu);
  f_801A4768(c); return; // 801A28CC
}

// fn_801A28D0
void f_801A28D0(Ctx* __restrict c) {
  trace_call(0x801A28D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A28D0
  c->r[0]=c->lr; // 801A28D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A28D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A28DC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 801A28E0
  cmps(c,0,(int32_t)c->r[30],0); // 801A28E4
  if (crb(c,2)) { goto L_801A292C; } // 801A28E8
  c->lr=0x801A28F0u; f_801A19E8(c); // 801A28EC
  c->r[31]=c->r[3]|c->r[3]; // 801A28F0
  c->lr=0x801A28F8u; f_8007AD40(c); // 801A28F4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 801A28F8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A28FC
  c->r[5]=0u+0x801A0000u; // 801A2900
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801A2904
  c->r[4]=c->r[30]+c->r[4]; // 801A2908
  c->r[5]=c->r[5]+0x00002940u; // 801A290C
  c->r[4]=c->r[4]+c->r[0]; // 801A2910
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A2914
  c->r[0]=R32(c->r[30]+c->r[3]); // 801A2918
  cmpu(c,0,c->r[0],0x00000018u); // 801A291C
  if (!crb(c,0)) { goto L_801A292C; } // 801A2920
  c->r[0]=0u+0x00000018u; // 801A2924
  W32(c->r[30]+c->r[3],c->r[0]); // 801A2928
L_801A292C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A292C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2930
  c->lr=c->r[0]; // 801A2934
  c->r[1]=c->r[1]+0x00000010u; // 801A2938
  return; // 801A293C
}

// fn_801A2940
void f_801A2940(Ctx* __restrict c) {
  trace_call(0x801A2940u);
  f_801A4644(c); return; // 801A2940
}

// fn_801A2944
void f_801A2944(Ctx* __restrict c) {
  trace_call(0x801A2944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2944
  c->r[0]=c->lr; // 801A2948
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A294C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2950
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 801A2954
  cmps(c,0,(int32_t)c->r[31],0); // 801A2958
  if (crb(c,2)) { goto L_801A29C4; } // 801A295C
  c->lr=0x801A2964u; f_801A19E8(c); // 801A2960
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 801A2964
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2968
  if (!crb(c,2)) { goto L_801A298C; } // 801A296C
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 801A2970
  c->r[0]=0u+0x00000001u; // 801A2974
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 801A2978
  c->r[4]=c->r[5]+0x00000001u; // 801A297C
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 801A2980
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 801A2984
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 801A2988
L_801A298C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 801A298C
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 801A2990
  c->r[5]=0u+0x801A0000u; // 801A2994
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A2998
  c->r[4]=c->r[31]+c->r[4]; // 801A299C
  c->r[5]=c->r[5]+0x000029D8u; // 801A29A0
  c->r[4]=c->r[4]+c->r[0]; // 801A29A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A29A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A29AC
  c->r[0]=R32(c->r[31]+c->r[3]); // 801A29B0
  cmpu(c,0,c->r[0],0x00000010u); // 801A29B4
  if (!crb(c,0)) { goto L_801A29C4; } // 801A29B8
  c->r[0]=0u+0x00000010u; // 801A29BC
  W32(c->r[31]+c->r[3],c->r[0]); // 801A29C0
L_801A29C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A29C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A29C8
  c->lr=c->r[0]; // 801A29CC
  c->r[1]=c->r[1]+0x00000010u; // 801A29D0
  return; // 801A29D4
}

// fn_801A29D8
void f_801A29D8(Ctx* __restrict c) {
  trace_call(0x801A29D8u);
  f_801A44E4(c); return; // 801A29D8
}

// fn_801A29DC
void f_801A29DC(Ctx* __restrict c) {
  trace_call(0x801A29DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A29DC
  c->r[0]=c->lr; // 801A29E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A29E4
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A29E8
  c->r[27]=c->r[3]|c->r[3]; // 801A29EC
  c->r[26]=c->r[5]|c->r[5]; // 801A29F0
  c->r[31]=c->r[27]|c->r[27]; // 801A29F4
  c->r[30]=c->r[27]|c->r[27]; // 801A29F8
  c->r[28]=c->r[27]|c->r[27]; // 801A29FC
  c->lr=0x801A2A04u; f_801A19E8(c); // 801A2A00
  c->r[4]=0u+0x806D0000u; // 801A2A04
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 801A2A08
  c->r[0]=0u+0x00000000u; // 801A2A0C
  W32(c->r[27]+0x00000000u,c->r[3]); // 801A2A10
  c->r[4]=c->r[4]+0x000038C0u; // 801A2A14
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 801A2A18
  W32(c->r[27]+0x00000004u,c->r[0]); // 801A2A1C
  W32(c->r[27]+0x00000008u,c->r[0]); // 801A2A20
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 801A2A24
  W8(c->r[27]+0x00000010u,c->r[0]); // 801A2A28
  W32(c->r[27]+0x00000014u,c->r[0]); // 801A2A2C
  W32(c->r[27]+0x00000018u,c->r[0]); // 801A2A30
  W32(c->r[27]+0x00000020u,c->r[0]); // 801A2A34
  W32(c->r[27]+0x00000024u,c->r[0]); // 801A2A38
  if (crb(c,2)) { goto L_801A2A44; } // 801A2A3C
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 801A2A40
L_801A2A44:;
  c->lr=0x801A2A48u; f_800797AC(c); // 801A2A44
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A2A48
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 801A2A4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801A2A50
  if (!crb(c,2)) { goto L_801A2A60; } // 801A2A54
  c->r[0]=0u+0x00000001u; // 801A2A58
  W32(c->r[3]+0x00000000u,c->r[0]); // 801A2A5C
L_801A2A60:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 801A2A60
  c->r[5]=0u+0x0000012Cu; // 801A2A64
  c->r[4]=c->r[6]+0x00000001u; // 801A2A68
  c->r[0]=divwu(c->r[4],c->r[5]); // 801A2A6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801A2A70
  c->r[7]=c->r[4]-c->r[0]; // 801A2A74
  goto L_801A2AC4; // 801A2A78
L_801A2A7C:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801A2A7C
  c->r[4]=c->r[3]+c->r[0]; // 801A2A80
  c->r[0]=R32(c->r[4]+0x00000008u); // 801A2A84
  cmps(c,0,(int32_t)c->r[0],0); // 801A2A88
  if (!crb(c,2)) { goto L_801A2AB4; } // 801A2A8C
  W32(c->r[3]+0x00000004u,c->r[7]); // 801A2A90
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A2A94
  W32(c->r[4]+0x00000008u,c->r[0]); // 801A2A98
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801A2A9C
  c->r[4]=R32(c->r[3]+0x00000000u); // 801A2AA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801A2AA4
  W32(c->r[1]+0x00000010u,c->r[4]); // 801A2AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2AAC
  goto L_801A2AE0; // 801A2AB0
L_801A2AB4:;
  c->r[4]=c->r[7]+0x00000001u; // 801A2AB4
  c->r[0]=divwu(c->r[4],c->r[5]); // 801A2AB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801A2ABC
  c->r[7]=c->r[4]-c->r[0]; // 801A2AC0
L_801A2AC4:;
  cmpu(c,0,c->r[7],c->r[6]); // 801A2AC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801A2A7C; } // 801A2AC8
  c->r[0]=0u+0x00000000u; // 801A2ACC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801A2AD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801A2AD4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801A2AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2ADC
L_801A2AE0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 801A2AE0
  c->r[24]=c->r[27]+0x00000028u; // 801A2AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2AE8
  c->r[3]=c->r[24]|c->r[24]; // 801A2AEC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801A2AF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801A2AF4
  W32(c->r[27]+0x00000020u,c->r[4]); // 801A2AF8
  W32(c->r[27]+0x00000024u,c->r[0]); // 801A2AFC
  c->lr=0x801A2B04u; f_800506C0(c); // 801A2B00
  cmps(c,0,(int32_t)c->r[24],0); // 801A2B04
  c->r[3]=c->r[24]|c->r[24]; // 801A2B08
  if (crb(c,2)) { goto L_801A2B14; } // 801A2B0C
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 801A2B10
L_801A2B14:;
  c->r[29]=0u+0x00000001u; // 801A2B14
  W32(c->r[24]+0x00000008u,c->r[3]); // 801A2B18
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801A2B1C
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 801A2B20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2B24
  if (!crb(c,2)) { goto L_801A2B68; } // 801A2B28
  c->r[25]=0u+0x80740000u; // 801A2B2C
  c->r[3]=c->r[25]+0x000074BCu; // 801A2B30
  c->lr=0x801A2B38u; f_800506C0(c); // 801A2B34
  c->r[6]=0u+0x806D0000u; // 801A2B38
  c->r[4]=0u+0x80060000u; // 801A2B3C
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 801A2B40
  c->r[3]=c->r[25]+0x000074BCu; // 801A2B44
  c->r[0]=c->r[6]+0x00000008u; // 801A2B48
  c->r[5]=0u+0x80750000u; // 801A2B4C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A2B50
  c->r[4]=c->r[4]+0x000057D4u; // 801A2B54
  c->r[5]=c->r[5]+0x00004E80u; // 801A2B58
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A2B5C
  c->lr=0x801A2B64u; f_803A92B8(c); // 801A2B60
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 801A2B64
L_801A2B68:;
  c->r[3]=0u+0x80740000u; // 801A2B68
  c->r[5]=c->r[24]|c->r[24]; // 801A2B6C
  c->r[3]=c->r[3]+0x000074BCu; // 801A2B70
  c->r[4]=c->r[3]|c->r[3]; // 801A2B74
  c->lr=0x801A2B7Cu; f_802DDCA8(c); // 801A2B78
  c->r[24]=c->r[27]+0x00000038u; // 801A2B7C
  c->r[3]=c->r[24]|c->r[24]; // 801A2B80
  c->lr=0x801A2B88u; f_800506C0(c); // 801A2B84
  cmps(c,0,(int32_t)c->r[24],0); // 801A2B88
  c->r[0]=c->r[24]|c->r[24]; // 801A2B8C
  if (crb(c,2)) { goto L_801A2B98; } // 801A2B90
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 801A2B94
L_801A2B98:;
  c->r[29]=c->r[27]+0x00000044u; // 801A2B98
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A2B9C
  c->r[3]=c->r[29]|c->r[29]; // 801A2BA0
  c->lr=0x801A2BA8u; f_800506C0(c); // 801A2BA4
  cmps(c,0,(int32_t)c->r[29],0); // 801A2BA8
  c->r[0]=c->r[29]|c->r[29]; // 801A2BAC
  if (crb(c,2)) { goto L_801A2BB8; } // 801A2BB0
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 801A2BB4
L_801A2BB8:;
  c->r[3]=0u+0x806F0000u; // 801A2BB8
  c->r[25]=0u+0x00000000u; // 801A2BBC
  c->r[3]=c->r[3]+0x00000E80u; // 801A2BC0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A2BC4
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 801A2BC8
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 801A2BCC
  W32(c->r[27]+0x00000058u,c->r[25]); // 801A2BD0
  W32(c->r[27]+0x00000064u,c->r[25]); // 801A2BD4
  c->lr=0x801A2BDCu; f_8007BDCC(c); // 801A2BD8
  c->r[0]=c->r[13]+0xFFFF8114u; // 801A2BDC
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 801A2BE0
  W32(c->r[27]+0x000000A0u,c->r[0]); // 801A2BE4
  W32(c->r[27]+0x000000A4u,c->r[25]); // 801A2BE8
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 801A2BEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2BF0
  if (!crb(c,2)) { goto L_801A2C14; } // 801A2BF4
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801A2BF8
  c->r[0]=0u+0x00000001u; // 801A2BFC
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801A2C00
  c->r[3]=c->r[4]+0x00000001u; // 801A2C04
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801A2C08
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 801A2C0C
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 801A2C10
L_801A2C14:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 801A2C14
  c->r[3]=c->r[13]+0xFFFF8110u; // 801A2C18
  c->r[0]=0u+0x00000000u; // 801A2C1C
  W32(c->r[27]+0x000000A8u,c->r[4]); // 801A2C20
  W32(c->r[27]+0x000000ACu,c->r[3]); // 801A2C24
  W32(c->r[27]+0x000000B0u,c->r[0]); // 801A2C28
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 801A2C2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2C30
  if (!crb(c,2)) { goto L_801A2C54; } // 801A2C34
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801A2C38
  c->r[0]=0u+0x00000001u; // 801A2C3C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801A2C40
  c->r[3]=c->r[4]+0x00000001u; // 801A2C44
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801A2C48
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 801A2C4C
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 801A2C50
L_801A2C54:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 801A2C54
  c->r[3]=c->r[13]+0xFFFF810Cu; // 801A2C58
  c->r[0]=0u+0x00000000u; // 801A2C5C
  W32(c->r[27]+0x000000B4u,c->r[4]); // 801A2C60
  W32(c->r[27]+0x000000B8u,c->r[3]); // 801A2C64
  W32(c->r[27]+0x000000BCu,c->r[0]); // 801A2C68
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 801A2C6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2C70
  if (!crb(c,2)) { goto L_801A2C94; } // 801A2C74
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801A2C78
  c->r[0]=0u+0x00000001u; // 801A2C7C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801A2C80
  c->r[3]=c->r[4]+0x00000001u; // 801A2C84
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801A2C88
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 801A2C8C
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 801A2C90
L_801A2C94:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 801A2C94
  c->r[3]=c->r[13]+0xFFFF8108u; // 801A2C98
  c->r[0]=0u+0x00000000u; // 801A2C9C
  W32(c->r[27]+0x000000C0u,c->r[4]); // 801A2CA0
  W32(c->r[27]+0x000000C4u,c->r[3]); // 801A2CA4
  W32(c->r[27]+0x000000C8u,c->r[0]); // 801A2CA8
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 801A2CAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2CB0
  if (!crb(c,2)) { goto L_801A2CD4; } // 801A2CB4
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801A2CB8
  c->r[0]=0u+0x00000001u; // 801A2CBC
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801A2CC0
  c->r[3]=c->r[4]+0x00000001u; // 801A2CC4
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801A2CC8
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 801A2CCC
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 801A2CD0
L_801A2CD4:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 801A2CD4
  c->r[0]=c->r[13]+0xFFFF8104u; // 801A2CD8
  c->r[25]=0u+0x00000000u; // 801A2CDC
  W32(c->r[27]+0x000000CCu,c->r[3]); // 801A2CE0
  c->r[3]=c->r[27]+0x000000D8u; // 801A2CE4
  W32(c->r[27]+0x000000D0u,c->r[0]); // 801A2CE8
  W32(c->r[27]+0x000000D4u,c->r[25]); // 801A2CEC
  c->lr=0x801A2CF4u; f_800506C0(c); // 801A2CF0
  c->r[4]=0u+0x806F0000u; // 801A2CF4
  c->r[3]=0u+0x00000006u; // 801A2CF8
  c->r[4]=c->r[4]+0x000007A0u; // 801A2CFC
  c->r[29]=c->r[27]+0x000000FCu; // 801A2D00
  c->r[0]=c->r[4]+0x00000024u; // 801A2D04
  W32(c->r[27]+0x000000E8u,c->r[3]); // 801A2D08
  c->r[3]=c->r[29]+0x0000000Cu; // 801A2D0C
  W32(c->r[27]+0x000000ECu,c->r[25]); // 801A2D10
  W32(c->r[27]+0x000000F8u,c->r[25]); // 801A2D14
  W32(c->r[27]+0x000000FCu,c->r[4]); // 801A2D18
  W32(c->r[27]+0x00000100u,c->r[0]); // 801A2D1C
  c->lr=0x801A2D24u; f_800506C0(c); // 801A2D20
  c->r[3]=c->r[29]+0x00000018u; // 801A2D24
  c->lr=0x801A2D2Cu; f_800506C0(c); // 801A2D28
  W32(c->r[29]+0x00000024u,c->r[25]); // 801A2D2C
  c->r[3]=c->r[29]+0x000000B0u; // 801A2D30
  c->lr=0x801A2D38u; f_800506C0(c); // 801A2D34
  c->r[12]=R32(c->r[29]+0x00000000u); // 801A2D38
  c->r[3]=c->r[29]|c->r[29]; // 801A2D3C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801A2D40
  c->ctr=c->r[12]; // 801A2D44
  if (true) { c->lr=0x801A2D4Cu; dispatch(c,c->ctr); } // 801A2D48
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 801A2D4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2D50
  if (!crb(c,2)) { goto L_801A2D70; } // 801A2D54
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 801A2D58
  c->r[0]=0u+0x00000001u; // 801A2D5C
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 801A2D60
  c->r[3]=c->r[3]+0x00000001u; // 801A2D64
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 801A2D68
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 801A2D6C
L_801A2D70:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 801A2D70
  c->r[5]=0u+0x806F0000u; // 801A2D74
  c->r[5]=c->r[5]+0x000007F8u; // 801A2D78
  c->r[0]=0u+0x00000032u; // 801A2D7C
  c->r[4]=c->r[5]+0x00000024u; // 801A2D80
  W32(c->r[29]+0x00000008u,c->r[3]); // 801A2D84
  c->r[6]=0u+0x00000000u; // 801A2D88
  c->r[3]=0u+0x00000000u; // 801A2D8C
  W32(c->r[29]+0x00000000u,c->r[5]); // 801A2D90
  W32(c->r[29]+0x00000004u,c->r[4]); // 801A2D94
  c->ctr=c->r[0]; // 801A2D98
L_801A2D9C:;
  c->r[4]=c->r[29]+c->r[3]; // 801A2D9C
  c->r[3]=c->r[3]+0x00000004u; // 801A2DA0
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 801A2DA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A2D9C; } // 801A2DA8
  c->r[3]=0u+0x806D0000u; // 801A2DAC
  c->r[7]=0u+0x00000000u; // 801A2DB0
  c->r[3]=c->r[3]+0x00003868u; // 801A2DB4
  c->r[0]=0u+0x0000000Au; // 801A2DB8
  c->r[4]=c->r[3]+0x00000024u; // 801A2DBC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A2DC0
  c->r[8]=0u+0x00000000u; // 801A2DC4
  c->r[3]=0u+0x00000000u; // 801A2DC8
  W32(c->r[29]+0x00000004u,c->r[4]); // 801A2DCC
  c->r[6]=0u+0xFFFFFFFFu; // 801A2DD0
  W32(c->r[27]+0x00000314u,c->r[7]); // 801A2DD4
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 801A2DD8
  W32(c->r[27]+0x00000054u,c->r[7]); // 801A2DDC
  W32(c->r[27]+0x00000310u,c->r[27]); // 801A2DE0
  c->ctr=c->r[0]; // 801A2DE4
L_801A2DE8:;
  c->r[5]=c->r[27]+c->r[3]; // 801A2DE8
  c->r[4]=c->r[27]+c->r[8]; // 801A2DEC
  W32(c->r[5]+0x00000068u,c->r[6]); // 801A2DF0
  c->r[8]=c->r[8]+0x00000001u; // 801A2DF4
  c->r[3]=c->r[3]+0x00000004u; // 801A2DF8
  W8(c->r[4]+0x00000090u,c->r[7]); // 801A2DFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A2DE8; } // 801A2E00
  c->r[25]=c->r[27]+0x00000318u; // 801A2E04
  c->r[3]=c->r[25]|c->r[25]; // 801A2E08
  c->lr=0x801A2E10u; f_800506C0(c); // 801A2E0C
  cmps(c,0,(int32_t)c->r[25],0); // 801A2E10
  c->r[3]=c->r[25]|c->r[25]; // 801A2E14
  if (crb(c,2)) { goto L_801A2E20; } // 801A2E18
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 801A2E1C
L_801A2E20:;
  c->r[29]=0u+0x00000001u; // 801A2E20
  W32(c->r[25]+0x00000008u,c->r[3]); // 801A2E24
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 801A2E28
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 801A2E2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2E30
  if (!crb(c,2)) { goto L_801A2E74; } // 801A2E34
  c->r[28]=0u+0x80750000u; // 801A2E38
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801A2E3C
  c->lr=0x801A2E44u; f_800506C0(c); // 801A2E40
  c->r[6]=0u+0x806D0000u; // 801A2E44
  c->r[4]=0u+0x80080000u; // 801A2E48
  c->r[6]=c->r[6]+0x000038D8u; // 801A2E4C
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801A2E50
  c->r[0]=c->r[6]+0x00000008u; // 801A2E54
  c->r[5]=0u+0x80750000u; // 801A2E58
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A2E5C
  c->r[4]=c->r[4]+0xFFFF9844u; // 801A2E60
  c->r[5]=c->r[5]+0x00004E74u; // 801A2E64
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A2E68
  c->lr=0x801A2E70u; f_803A92B8(c); // 801A2E6C
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 801A2E70
L_801A2E74:;
  c->r[3]=0u+0x80750000u; // 801A2E74
  c->r[5]=c->r[25]|c->r[25]; // 801A2E78
  c->r[3]=c->r[3]+0xFFFF816Cu; // 801A2E7C
  c->r[4]=c->r[3]|c->r[3]; // 801A2E80
  c->lr=0x801A2E88u; f_802DDCA8(c); // 801A2E84
  c->r[3]=0u+0x806D0000u; // 801A2E88
  c->r[0]=0u+0x00000000u; // 801A2E8C
  c->r[3]=c->r[3]+0xFFFFD974u; // 801A2E90
  c->r[5]=0u+0xFFFFFFFFu; // 801A2E94
  c->r[4]=0u+0x00000001u; // 801A2E98
  c->r[24]=c->r[27]+0x0000032Cu; // 801A2E9C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 801A2EA0
  c->r[3]=c->r[24]|c->r[24]; // 801A2EA4
  W32(c->r[27]+0x00000328u,c->r[5]); // 801A2EA8
  W32(c->r[27]+0x000000ECu,c->r[4]); // 801A2EAC
  W32(c->r[27]+0x00000054u,c->r[0]); // 801A2EB0
  W32(c->r[27]+0x00000314u,c->r[0]); // 801A2EB4
  c->lr=0x801A2EBCu; f_800506C0(c); // 801A2EB8
  cmps(c,0,(int32_t)c->r[24],0); // 801A2EBC
  c->r[3]=c->r[24]|c->r[24]; // 801A2EC0
  if (crb(c,2)) { goto L_801A2ECC; } // 801A2EC4
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 801A2EC8
L_801A2ECC:;
  c->r[29]=0u+0x00000001u; // 801A2ECC
  W32(c->r[24]+0x00000008u,c->r[3]); // 801A2ED0
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801A2ED4
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801A2ED8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2EDC
  if (!crb(c,2)) { goto L_801A2F20; } // 801A2EE0
  c->r[28]=0u+0x80730000u; // 801A2EE4
  c->r[3]=c->r[28]+0x000073A8u; // 801A2EE8
  c->lr=0x801A2EF0u; f_800506C0(c); // 801A2EEC
  c->r[6]=0u+0x806D0000u; // 801A2EF0
  c->r[4]=0u+0x80050000u; // 801A2EF4
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801A2EF8
  c->r[3]=c->r[28]+0x000073A8u; // 801A2EFC
  c->r[0]=c->r[6]+0x00000008u; // 801A2F00
  c->r[5]=0u+0x80750000u; // 801A2F04
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A2F08
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 801A2F0C
  c->r[5]=c->r[5]+0x00004E68u; // 801A2F10
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A2F14
  c->lr=0x801A2F1Cu; f_803A92B8(c); // 801A2F18
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 801A2F1C
L_801A2F20:;
  c->r[3]=0u+0x80730000u; // 801A2F20
  c->r[5]=c->r[24]|c->r[24]; // 801A2F24
  c->r[3]=c->r[3]+0x000073A8u; // 801A2F28
  c->r[4]=c->r[3]|c->r[3]; // 801A2F2C
  c->lr=0x801A2F34u; f_802DDCA8(c); // 801A2F30
  c->r[24]=c->r[27]+0x0000033Cu; // 801A2F34
  c->r[3]=c->r[24]|c->r[24]; // 801A2F38
  c->lr=0x801A2F40u; f_800506C0(c); // 801A2F3C
  cmps(c,0,(int32_t)c->r[24],0); // 801A2F40
  c->r[3]=c->r[24]|c->r[24]; // 801A2F44
  if (crb(c,2)) { goto L_801A2F50; } // 801A2F48
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 801A2F4C
L_801A2F50:;
  c->r[29]=0u+0x00000001u; // 801A2F50
  W32(c->r[24]+0x00000008u,c->r[3]); // 801A2F54
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801A2F58
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 801A2F5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2F60
  if (!crb(c,2)) { goto L_801A2FA4; } // 801A2F64
  c->r[28]=0u+0x80750000u; // 801A2F68
  c->r[3]=c->r[28]+0xFFFF8158u; // 801A2F6C
  c->lr=0x801A2F74u; f_800506C0(c); // 801A2F70
  c->r[6]=0u+0x806D0000u; // 801A2F74
  c->r[4]=0u+0x80080000u; // 801A2F78
  c->r[6]=c->r[6]+0x000038F0u; // 801A2F7C
  c->r[3]=c->r[28]+0xFFFF8158u; // 801A2F80
  c->r[0]=c->r[6]+0x00000008u; // 801A2F84
  c->r[5]=0u+0x80750000u; // 801A2F88
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A2F8C
  c->r[4]=c->r[4]+0xFFFF98C0u; // 801A2F90
  c->r[5]=c->r[5]+0x00004E5Cu; // 801A2F94
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A2F98
  c->lr=0x801A2FA0u; f_803A92B8(c); // 801A2F9C
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 801A2FA0
L_801A2FA4:;
  c->r[3]=0u+0x80750000u; // 801A2FA4
  c->r[5]=c->r[24]|c->r[24]; // 801A2FA8
  c->r[3]=c->r[3]+0xFFFF8158u; // 801A2FAC
  c->r[4]=c->r[3]|c->r[3]; // 801A2FB0
  c->lr=0x801A2FB8u; f_802DDCA8(c); // 801A2FB4
  c->r[3]=0u+0x806D0000u; // 801A2FB8
  W32(c->r[27]+0x00000054u,c->r[26]); // 801A2FBC
  c->r[3]=c->r[3]+0x00004AE8u; // 801A2FC0
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 801A2FC4
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 801A2FC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2FCC
  if (!crb(c,2)) { goto L_801A2FEC; } // 801A2FD0
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801A2FD4
  c->r[0]=0u+0x00000001u; // 801A2FD8
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 801A2FDC
  c->r[3]=c->r[3]+0x00000001u; // 801A2FE0
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801A2FE4
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 801A2FE8
L_801A2FEC:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 801A2FEC
  W32(c->r[27]+0x00000328u,c->r[0]); // 801A2FF0
  c->r[0]=R8(c->r[13]+0xFFFFCFC4u); // 801A2FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A2FF8
  if (!crb(c,2)) { goto L_801A3018; } // 801A2FFC
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 801A3000
  c->r[0]=0u+0x00000001u; // 801A3004
  W32(c->r[13]+0xFFFFCFC0u,c->r[3]); // 801A3008
  c->r[3]=c->r[3]+0x00000001u; // 801A300C
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 801A3010
  W8(c->r[13]+0xFFFFCFC4u,c->r[0]); // 801A3014
L_801A3018:;
  c->r[0]=R32(c->r[13]+0xFFFFCFC0u); // 801A3018
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 801A301C
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 801A3020
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A3024
  if (!crb(c,2)) { goto L_801A3044; } // 801A3028
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 801A302C
  c->r[0]=0u+0x00000001u; // 801A3030
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 801A3034
  c->r[3]=c->r[3]+0x00000001u; // 801A3038
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 801A303C
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 801A3040
L_801A3044:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 801A3044
  c->r[5]=0u+0x806D0000u; // 801A3048
  c->r[5]=c->r[5]+0xFFFFE468u; // 801A304C
  W32(c->r[27]+0x00000350u,c->r[0]); // 801A3050
  c->r[3]=c->r[27]+0x000003B0u; // 801A3054
  c->r[4]=0u+0x00000000u; // 801A3058
  W32(c->r[27]+0x00000400u,c->r[5]); // 801A305C
  c->r[5]=0u+0x00000050u; // 801A3060
  c->lr=0x801A3068u; f_800043EC(c); // 801A3064
  c->r[4]=0u+0x806D0000u; // 801A3068
  c->r[3]=c->r[27]+0x00000450u; // 801A306C
  c->r[4]=c->r[4]+0xFFFFE170u; // 801A3070
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 801A3074
  c->r[0]=c->r[4]+0x00000044u; // 801A3078
  W32(c->r[27]+0x00000400u,c->r[0]); // 801A307C
  c->lr=0x801A3084u; f_8007BDFC(c); // 801A3080
  c->r[3]=c->r[27]+0x000004C4u; // 801A3084
  c->lr=0x801A308Cu; f_8007BDFC(c); // 801A3088
  c->r[3]=c->r[27]+0x00000538u; // 801A308C
  c->r[4]=0u+0x00000000u; // 801A3090
  c->r[5]=0u+0x00000008u; // 801A3094
  c->lr=0x801A309Cu; f_800043EC(c); // 801A3098
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A309C
  cmps(c,0,(int32_t)c->r[24],0); // 801A30A0
  if (crb(c,2)) { goto L_801A30E8; } // 801A30A4
  c->lr=0x801A30ACu; f_801A19E8(c); // 801A30A8
  c->r[26]=c->r[3]|c->r[3]; // 801A30AC
  c->lr=0x801A30B4u; f_8007BDCC(c); // 801A30B0
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 801A30B4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A30B8
  c->r[5]=0u+0x801A0000u; // 801A30BC
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801A30C0
  c->r[4]=c->r[24]+c->r[4]; // 801A30C4
  c->r[5]=c->r[5]+0x000034BCu; // 801A30C8
  c->r[4]=c->r[4]+c->r[0]; // 801A30CC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A30D0
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A30D4
  cmpu(c,0,c->r[0],0x0000000Cu); // 801A30D8
  if (!crb(c,0)) { goto L_801A30E8; } // 801A30DC
  c->r[0]=0u+0x0000000Cu; // 801A30E0
  W32(c->r[24]+c->r[3],c->r[0]); // 801A30E4
L_801A30E8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A30E8
  cmps(c,0,(int32_t)c->r[24],0); // 801A30EC
  if (crb(c,2)) { goto L_801A3158; } // 801A30F0
  c->lr=0x801A30F8u; f_801A19E8(c); // 801A30F4
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 801A30F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A30FC
  if (!crb(c,2)) { goto L_801A3120; } // 801A3100
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A3104
  c->r[0]=0u+0x00000001u; // 801A3108
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A310C
  c->r[4]=c->r[5]+0x00000001u; // 801A3110
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A3114
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 801A3118
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 801A311C
L_801A3120:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3120
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 801A3124
  c->r[5]=0u+0x801A0000u; // 801A3128
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A312C
  c->r[4]=c->r[24]+c->r[4]; // 801A3130
  c->r[5]=c->r[5]+0x000034B8u; // 801A3134
  c->r[4]=c->r[4]+c->r[0]; // 801A3138
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A313C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3140
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3144
  cmpu(c,0,c->r[0],0x00000018u); // 801A3148
  if (!crb(c,0)) { goto L_801A3158; } // 801A314C
  c->r[0]=0u+0x00000018u; // 801A3150
  W32(c->r[24]+c->r[3],c->r[0]); // 801A3154
L_801A3158:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A3158
  cmps(c,0,(int32_t)c->r[24],0); // 801A315C
  if (crb(c,2)) { goto L_801A31C8; } // 801A3160
  c->lr=0x801A3168u; f_801A19E8(c); // 801A3164
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 801A3168
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A316C
  if (!crb(c,2)) { goto L_801A3190; } // 801A3170
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A3174
  c->r[0]=0u+0x00000001u; // 801A3178
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A317C
  c->r[4]=c->r[5]+0x00000001u; // 801A3180
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A3184
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 801A3188
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 801A318C
L_801A3190:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3190
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 801A3194
  c->r[5]=0u+0x801A0000u; // 801A3198
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A319C
  c->r[4]=c->r[24]+c->r[4]; // 801A31A0
  c->r[5]=c->r[5]+0x000034B4u; // 801A31A4
  c->r[4]=c->r[4]+c->r[0]; // 801A31A8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A31AC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A31B0
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A31B4
  cmpu(c,0,c->r[0],0x0000006Cu); // 801A31B8
  if (!crb(c,0)) { goto L_801A31C8; } // 801A31BC
  c->r[0]=0u+0x0000006Cu; // 801A31C0
  W32(c->r[24]+c->r[3],c->r[0]); // 801A31C4
L_801A31C8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A31C8
  cmps(c,0,(int32_t)c->r[24],0); // 801A31CC
  if (crb(c,2)) { goto L_801A3238; } // 801A31D0
  c->lr=0x801A31D8u; f_801A19E8(c); // 801A31D4
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801A31D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A31DC
  if (!crb(c,2)) { goto L_801A3200; } // 801A31E0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A31E4
  c->r[0]=0u+0x00000001u; // 801A31E8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A31EC
  c->r[4]=c->r[5]+0x00000001u; // 801A31F0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A31F4
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 801A31F8
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 801A31FC
L_801A3200:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3200
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 801A3204
  c->r[5]=0u+0x801A0000u; // 801A3208
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A320C
  c->r[4]=c->r[24]+c->r[4]; // 801A3210
  c->r[5]=c->r[5]+0x000034B0u; // 801A3214
  c->r[4]=c->r[4]+c->r[0]; // 801A3218
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A321C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3220
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3224
  cmpu(c,0,c->r[0],0x0000002Cu); // 801A3228
  if (!crb(c,0)) { goto L_801A3238; } // 801A322C
  c->r[0]=0u+0x0000002Cu; // 801A3230
  W32(c->r[24]+c->r[3],c->r[0]); // 801A3234
L_801A3238:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A3238
  cmps(c,0,(int32_t)c->r[24],0); // 801A323C
  if (crb(c,2)) { goto L_801A32A8; } // 801A3240
  c->lr=0x801A3248u; f_801A19E8(c); // 801A3244
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801A3248
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A324C
  if (!crb(c,2)) { goto L_801A3270; } // 801A3250
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A3254
  c->r[0]=0u+0x00000001u; // 801A3258
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A325C
  c->r[4]=c->r[5]+0x00000001u; // 801A3260
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A3264
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801A3268
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801A326C
L_801A3270:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3270
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801A3274
  c->r[5]=0u+0x801A0000u; // 801A3278
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A327C
  c->r[4]=c->r[24]+c->r[4]; // 801A3280
  c->r[5]=c->r[5]+0x000034ACu; // 801A3284
  c->r[4]=c->r[4]+c->r[0]; // 801A3288
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A328C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3290
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3294
  cmpu(c,0,c->r[0],0x00000010u); // 801A3298
  if (!crb(c,0)) { goto L_801A32A8; } // 801A329C
  c->r[0]=0u+0x00000010u; // 801A32A0
  W32(c->r[24]+c->r[3],c->r[0]); // 801A32A4
L_801A32A8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A32A8
  cmps(c,0,(int32_t)c->r[24],0); // 801A32AC
  if (crb(c,2)) { goto L_801A3318; } // 801A32B0
  c->lr=0x801A32B8u; f_801A19E8(c); // 801A32B4
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801A32B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A32BC
  if (!crb(c,2)) { goto L_801A32E0; } // 801A32C0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A32C4
  c->r[0]=0u+0x00000001u; // 801A32C8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A32CC
  c->r[4]=c->r[5]+0x00000001u; // 801A32D0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A32D4
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801A32D8
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801A32DC
L_801A32E0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A32E0
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801A32E4
  c->r[5]=0u+0x801A0000u; // 801A32E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A32EC
  c->r[4]=c->r[24]+c->r[4]; // 801A32F0
  c->r[5]=c->r[5]+0x000034A8u; // 801A32F4
  c->r[4]=c->r[4]+c->r[0]; // 801A32F8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A32FC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3300
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3304
  cmpu(c,0,c->r[0],0x0000005Cu); // 801A3308
  if (!crb(c,0)) { goto L_801A3318; } // 801A330C
  c->r[0]=0u+0x0000005Cu; // 801A3310
  W32(c->r[24]+c->r[3],c->r[0]); // 801A3314
L_801A3318:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A3318
  cmps(c,0,(int32_t)c->r[24],0); // 801A331C
  if (crb(c,2)) { goto L_801A3388; } // 801A3320
  c->lr=0x801A3328u; f_801A19E8(c); // 801A3324
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 801A3328
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A332C
  if (!crb(c,2)) { goto L_801A3350; } // 801A3330
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A3334
  c->r[0]=0u+0x00000001u; // 801A3338
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A333C
  c->r[4]=c->r[5]+0x00000001u; // 801A3340
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A3344
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801A3348
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801A334C
L_801A3350:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3350
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801A3354
  c->r[5]=0u+0x801A0000u; // 801A3358
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A335C
  c->r[4]=c->r[24]+c->r[4]; // 801A3360
  c->r[5]=c->r[5]+0x000034A4u; // 801A3364
  c->r[4]=c->r[4]+c->r[0]; // 801A3368
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A336C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3370
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3374
  cmpu(c,0,c->r[0],0x0000005Cu); // 801A3378
  if (!crb(c,0)) { goto L_801A3388; } // 801A337C
  c->r[0]=0u+0x0000005Cu; // 801A3380
  W32(c->r[24]+c->r[3],c->r[0]); // 801A3384
L_801A3388:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A3388
  cmps(c,0,(int32_t)c->r[24],0); // 801A338C
  if (crb(c,2)) { goto L_801A33F8; } // 801A3390
  c->lr=0x801A3398u; f_801A19E8(c); // 801A3394
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801A3398
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A339C
  if (!crb(c,2)) { goto L_801A33C0; } // 801A33A0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A33A4
  c->r[0]=0u+0x00000001u; // 801A33A8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A33AC
  c->r[4]=c->r[5]+0x00000001u; // 801A33B0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A33B4
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801A33B8
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801A33BC
L_801A33C0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A33C0
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801A33C4
  c->r[5]=0u+0x801A0000u; // 801A33C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A33CC
  c->r[4]=c->r[24]+c->r[4]; // 801A33D0
  c->r[5]=c->r[5]+0x000034A0u; // 801A33D4
  c->r[4]=c->r[4]+c->r[0]; // 801A33D8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A33DC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A33E0
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A33E4
  cmpu(c,0,c->r[0],0x0000005Cu); // 801A33E8
  if (!crb(c,0)) { goto L_801A33F8; } // 801A33EC
  c->r[0]=0u+0x0000005Cu; // 801A33F0
  W32(c->r[24]+c->r[3],c->r[0]); // 801A33F4
L_801A33F8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801A33F8
  cmps(c,0,(int32_t)c->r[24],0); // 801A33FC
  if (crb(c,2)) { goto L_801A3468; } // 801A3400
  c->lr=0x801A3408u; f_801A19E8(c); // 801A3404
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 801A3408
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A340C
  if (!crb(c,2)) { goto L_801A3430; } // 801A3410
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801A3414
  c->r[0]=0u+0x00000001u; // 801A3418
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801A341C
  c->r[4]=c->r[5]+0x00000001u; // 801A3420
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801A3424
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 801A3428
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 801A342C
L_801A3430:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801A3430
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 801A3434
  c->r[5]=0u+0x801A0000u; // 801A3438
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A343C
  c->r[4]=c->r[24]+c->r[4]; // 801A3440
  c->r[5]=c->r[5]+0x0000349Cu; // 801A3444
  c->r[4]=c->r[4]+c->r[0]; // 801A3448
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A344C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801A3450
  c->r[0]=R32(c->r[24]+c->r[3]); // 801A3454
  cmpu(c,0,c->r[0],0x0000005Cu); // 801A3458
  if (!crb(c,0)) { goto L_801A3468; } // 801A345C
  c->r[0]=0u+0x0000005Cu; // 801A3460
  W32(c->r[24]+c->r[3],c->r[0]); // 801A3464
L_801A3468:;
  c->r[3]=c->r[27]|c->r[27]; // 801A3468
  c->lr=0x801A3470u; f_8005BBF0(c); // 801A346C
  c->r[4]=0u+0x806D0000u; // 801A3470
  c->r[3]=c->r[27]|c->r[27]; // 801A3474
  c->r[4]=c->r[4]+0x000048F8u; // 801A3478
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 801A347C
  c->r[0]=c->r[4]+0x00000044u; // 801A3480
  W32(c->r[27]+0x00000400u,c->r[0]); // 801A3484
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A3488
  c->r[0]=R32(c->r[1]+0x00000044u); // 801A348C
  c->lr=c->r[0]; // 801A3490
  c->r[1]=c->r[1]+0x00000040u; // 801A3494
  return; // 801A3498
}

// fn_801A349C
void f_801A349C(Ctx* __restrict c) {
  trace_call(0x801A349Cu);
  f_8005E338(c); return; // 801A349C
}

// fn_801A34A0
void f_801A34A0(Ctx* __restrict c) {
  trace_call(0x801A34A0u);
  f_8005E324(c); return; // 801A34A0
}

// fn_801A34A4
void f_801A34A4(Ctx* __restrict c) {
  trace_call(0x801A34A4u);
  f_8005E310(c); return; // 801A34A4
}

// fn_801A34A8
void f_801A34A8(Ctx* __restrict c) {
  trace_call(0x801A34A8u);
  f_8005E2FC(c); return; // 801A34A8
}

// fn_801A34AC
void f_801A34AC(Ctx* __restrict c) {
  trace_call(0x801A34ACu);
  f_8005E34C(c); return; // 801A34AC
}

// fn_801A34B0
void f_801A34B0(Ctx* __restrict c) {
  trace_call(0x801A34B0u);
  f_8005E360(c); return; // 801A34B0
}

// fn_801A34B4
void f_801A34B4(Ctx* __restrict c) {
  trace_call(0x801A34B4u);
  f_8005D47C(c); return; // 801A34B4
}

// fn_801A34B8
void f_801A34B8(Ctx* __restrict c) {
  trace_call(0x801A34B8u);
  f_8005D468(c); return; // 801A34B8
}

// fn_801A34BC
void f_801A34BC(Ctx* __restrict c) {
  trace_call(0x801A34BCu);
  f_8005BEDC(c); return; // 801A34BC
}

// fn_801A34C0
void f_801A34C0(Ctx* __restrict c) {
  trace_call(0x801A34C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A34C0
  c->r[0]=c->lr; // 801A34C4
  cmps(c,0,(int32_t)c->r[3],0); // 801A34C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A34CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A34D0
  c->r[30]=c->r[3]|c->r[3]; // 801A34D4
  c->r[31]=c->r[4]|c->r[4]; // 801A34D8
  if (crb(c,2)) { goto L_801A34FC; } // 801A34DC
  if (crb(c,2)) { goto L_801A34EC; } // 801A34E0
  c->r[4]=0u+0x00000000u; // 801A34E4
  c->lr=0x801A34ECu; f_8005BD00(c); // 801A34E8
L_801A34EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801A34EC
  if (!crb(c,1)) { goto L_801A34FC; } // 801A34F0
  c->r[3]=c->r[30]|c->r[30]; // 801A34F4
  c->lr=0x801A34FCu; f_8005328C(c); // 801A34F8
L_801A34FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801A34FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A3500
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3504
  c->lr=c->r[0]; // 801A3508
  c->r[1]=c->r[1]+0x00000010u; // 801A350C
  return; // 801A3510
}

// fn_801A3514
void f_801A3514(Ctx* __restrict c) {
  trace_call(0x801A3514u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3514
  c->r[0]=c->lr; // 801A3518
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A351C
  c->r[11]=c->r[1]+0x00000050u; // 801A3520
  c->lr=0x801A3528u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A3524
  c->r[5]=R32(c->r[3]+0x00000444u); // 801A3528
  c->r[31]=c->r[3]|c->r[3]; // 801A352C
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3530
  c->r[4]=0u+0x00000000u; // 801A3534
  {uint32_t ea=c->r[5]+0x00000194u; WF32(ea,c->f[0]);} // 801A3538
  c->r[5]=0u+0x00000004u; // 801A353C
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3540
  c->r[6]=R32(c->r[3]+0x00000444u); // 801A3544
  {uint32_t ea=c->r[2]+0xFFFFC408u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3548
  {uint32_t ea=c->r[6]+0x00000198u; WF32(ea,c->f[0]);} // 801A354C
  {uint32_t ea=c->r[2]+0xFFFFC40Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3550
  c->r[6]=R32(c->r[3]+0x00000444u); // 801A3554
  {uint32_t ea=c->r[6]+0x0000019Cu; WF32(ea,c->f[1]);} // 801A3558
  c->r[6]=R32(c->r[3]+0x00000444u); // 801A355C
  c->r[3]=c->r[3]+0x00000600u; // 801A3560
  {uint32_t ea=c->r[6]+0x000001A0u; WF32(ea,c->f[0]);} // 801A3564
  c->lr=0x801A356Cu; f_800043EC(c); // 801A3568
  c->r[29]=0u+0x00000000u; // 801A356C
  c->r[7]=0u+0x00007DC8u; // 801A3570
  c->r[6]=0u+0x00007E40u; // 801A3574
  c->r[5]=0u+0x00007E54u; // 801A3578
  c->r[0]=0u+0x00007D46u; // 801A357C
  W32(c->r[31]+0x000005ECu,c->r[29]); // 801A3580
  c->r[3]=c->r[31]|c->r[31]; // 801A3584
  c->r[4]=0u+0x00000002u; // 801A3588
  W32(c->r[31]+0x000005F0u,c->r[7]); // 801A358C
  W32(c->r[31]+0x000005F4u,c->r[6]); // 801A3590
  W32(c->r[31]+0x000005F8u,c->r[5]); // 801A3594
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801A3598
  c->lr=0x801A35A0u; f_801A37AC(c); // 801A359C
  c->r[3]=c->r[31]|c->r[31]; // 801A35A0
  c->r[4]=0u+0x00000002u; // 801A35A4
  c->lr=0x801A35ACu; f_801A37C8(c); // 801A35A8
  c->r[3]=c->r[31]|c->r[31]; // 801A35AC
  c->r[4]=0u+0x00000000u; // 801A35B0
  c->lr=0x801A35B8u; f_801A37E4(c); // 801A35B4
  c->r[3]=c->r[31]|c->r[31]; // 801A35B8
  c->r[4]=0u+0x00000000u; // 801A35BC
  c->lr=0x801A35C4u; f_801A3800(c); // 801A35C0
  c->r[3]=c->r[31]|c->r[31]; // 801A35C4
  c->r[4]=0u+0x00000000u; // 801A35C8
  c->lr=0x801A35D0u; f_801A87F4(c); // 801A35CC
  c->r[0]=R32(c->r[31]+0x0000061Cu); // 801A35D0
  W32(c->r[31]+0x00000618u,c->r[29]); // 801A35D4
  cmps(c,0,(int32_t)c->r[0],0); // 801A35D8
  if (crb(c,2)) { goto L_801A35E4; } // 801A35DC
  W32(c->r[31]+0x000005E8u,c->r[29]); // 801A35E0
L_801A35E4:;
  c->r[29]=0u+0x00000000u; // 801A35E4
  W32(c->r[31]+0x0000061Cu,c->r[29]); // 801A35E8
  c->r[3]=c->r[31]|c->r[31]; // 801A35EC
  c->r[4]=0u+0x00000000u; // 801A35F0
  c->lr=0x801A35F8u; f_801A381C(c); // 801A35F4
  c->r[3]=c->r[31]|c->r[31]; // 801A35F8
  c->r[4]=0u+0x00000000u; // 801A35FC
  c->lr=0x801A3604u; f_801A3838(c); // 801A3600
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[5]=c->ps1[5]=RF32(ea);} // 801A3604
  c->r[0]=0u+0x00000005u; // 801A3608
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A360C
  c->r[3]=0u+0x00000004u; // 801A3610
  {uint32_t ea=c->r[2]+0xFFFFC418u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3614
  {uint32_t ea=c->r[2]+0xFFFFC41Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3618
  {uint32_t ea=c->r[2]+0xFFFFC420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A361C
  {uint32_t ea=c->r[2]+0xFFFFC424u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3620
  W32(c->r[31]+0x00000630u,c->r[29]); // 801A3624
  W32(c->r[31]+0x00000634u,c->r[3]); // 801A3628
  {uint32_t ea=c->r[31]+0x00000638u; WF32(ea,c->f[5]);} // 801A362C
  {uint32_t ea=c->r[31]+0x0000063Cu; WF32(ea,c->f[4]);} // 801A3630
  {uint32_t ea=c->r[31]+0x00000640u; WF32(ea,c->f[3]);} // 801A3634
  {uint32_t ea=c->r[31]+0x00000644u; WF32(ea,c->f[2]);} // 801A3638
  {uint32_t ea=c->r[31]+0x00000648u; WF32(ea,c->f[1]);} // 801A363C
  {uint32_t ea=c->r[31]+0x0000064Cu; WF32(ea,c->f[5]);} // 801A3640
  {uint32_t ea=c->r[31]+0x00000650u; WF32(ea,c->f[0]);} // 801A3644
  c->ctr=c->r[0]; // 801A3648
L_801A364C:;
  c->r[3]=c->r[31]+c->r[29]; // 801A364C
  c->r[29]=c->r[29]+0x00000004u; // 801A3650
  {uint32_t ea=c->r[3]+0x00000658u; WF32(ea,c->f[5]);} // 801A3654
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A364C; } // 801A3658
  c->r[29]=0u+0x80690000u; // 801A365C
  c->r[27]=c->r[31]+0x000000FCu; // 801A3660
  c->r[29]=c->r[29]+0x000034B8u; // 801A3664
  c->r[3]=c->r[27]|c->r[27]; // 801A3668
  c->r[4]=c->r[29]+0x00000001u; // 801A366C
  c->lr=0x801A3674u; f_802E6F14(c); // 801A3670
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3674
  c->r[28]=c->r[3]|c->r[3]; // 801A3678
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A367C
  c->r[3]=c->r[1]+0x00000020u; // 801A3680
  c->f[3]=c->f[1]; // 801A3684
  c->lr=0x801A368Cu; f_8005FD70(c); // 801A3688
  c->r[30]=c->r[3]|c->r[3]; // 801A368C
  c->r[3]=c->r[31]|c->r[31]; // 801A3690
  c->lr=0x801A3698u; f_8005EAA0(c); // 801A3694
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3698
  c->r[4]=c->r[28]|c->r[28]; // 801A369C
  c->r[5]=c->r[30]|c->r[30]; // 801A36A0
  c->lr=0x801A36A8u; f_80101550(c); // 801A36A4
  c->r[3]=c->r[27]|c->r[27]; // 801A36A8
  c->r[4]=c->r[29]+0x00000006u; // 801A36AC
  c->lr=0x801A36B4u; f_802E6F14(c); // 801A36B0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A36B4
  c->r[28]=c->r[3]|c->r[3]; // 801A36B8
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A36BC
  c->r[3]=c->r[1]+0x00000014u; // 801A36C0
  c->f[3]=c->f[1]; // 801A36C4
  c->lr=0x801A36CCu; f_8005FD70(c); // 801A36C8
  c->r[30]=c->r[3]|c->r[3]; // 801A36CC
  c->r[3]=c->r[31]|c->r[31]; // 801A36D0
  c->lr=0x801A36D8u; f_8005EAA0(c); // 801A36D4
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A36D8
  c->r[4]=c->r[28]|c->r[28]; // 801A36DC
  c->r[5]=c->r[30]|c->r[30]; // 801A36E0
  c->lr=0x801A36E8u; f_80101550(c); // 801A36E4
  c->r[3]=c->r[27]|c->r[27]; // 801A36E8
  c->r[4]=c->r[29]+0x00000012u; // 801A36EC
  c->lr=0x801A36F4u; f_802E6F14(c); // 801A36F0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A36F4
  c->r[28]=c->r[3]|c->r[3]; // 801A36F8
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A36FC
  c->r[3]=c->r[1]+0x00000008u; // 801A3700
  c->f[3]=c->f[1]; // 801A3704
  c->lr=0x801A370Cu; f_8005FD70(c); // 801A3708
  c->r[30]=c->r[3]|c->r[3]; // 801A370C
  c->r[3]=c->r[31]|c->r[31]; // 801A3710
  c->lr=0x801A3718u; f_8005EAA0(c); // 801A3714
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3718
  c->r[4]=c->r[28]|c->r[28]; // 801A371C
  c->r[5]=c->r[30]|c->r[30]; // 801A3720
  c->lr=0x801A3728u; f_80101550(c); // 801A3724
  c->r[3]=c->r[31]|c->r[31]; // 801A3728
  c->lr=0x801A3730u; f_8005EAA0(c); // 801A372C
  c->r[4]=0u+0x00000002u; // 801A3730
  c->r[5]=0u+0x00000000u; // 801A3734
  c->r[3]=c->r[3]+0x000003E0u; // 801A3738
  c->lr=0x801A3740u; f_8005DCA0(c); // 801A373C
  c->r[3]=c->r[31]+0x000006ACu; // 801A3740
  c->lr=0x801A3748u; f_800A7AE8(c); // 801A3744
  {uint32_t ea=c->r[2]+0xFFFFC42Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3748
  c->r[0]=0u+0x00000000u; // 801A374C
  {uint32_t ea=c->r[2]+0xFFFFC430u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3750
  c->r[30]=0u+0x00000001u; // 801A3754
  {uint32_t ea=c->r[2]+0xFFFFC434u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3758
  c->r[3]=c->r[31]|c->r[31]; // 801A375C
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3760
  W8(c->r[31]+0x00000654u,c->r[0]); // 801A3764
  {uint32_t ea=c->r[31]+0x000006BCu; WF32(ea,c->f[3]);} // 801A3768
  {uint32_t ea=c->r[31]+0x000006C0u; WF32(ea,c->f[3]);} // 801A376C
  {uint32_t ea=c->r[31]+0x000006C4u; WF32(ea,c->f[3]);} // 801A3770
  W32(c->r[31]+0x000006C8u,c->r[30]); // 801A3774
  W8(c->r[31]+0x000006CCu,c->r[0]); // 801A3778
  W8(c->r[31]+0x000006CDu,c->r[0]); // 801A377C
  {uint32_t ea=c->r[31]+0x000006D0u; WF32(ea,c->f[2]);} // 801A3780
  {uint32_t ea=c->r[31]+0x000006D4u; WF32(ea,c->f[1]);} // 801A3784
  {uint32_t ea=c->r[31]+0x000006D8u; WF32(ea,c->f[0]);} // 801A3788
  c->lr=0x801A3790u; f_8005EAA0(c); // 801A378C
  W8(c->r[3]+0x000003FFu,c->r[30]); // 801A3790
  c->r[11]=c->r[1]+0x00000050u; // 801A3794
  c->lr=0x801A379Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A3798
  c->r[0]=R32(c->r[1]+0x00000054u); // 801A379C
  c->lr=c->r[0]; // 801A37A0
  c->r[1]=c->r[1]+0x00000050u; // 801A37A4
  return; // 801A37A8
}

// fn_801A37AC
void f_801A37AC(Ctx* __restrict c) {
  trace_call(0x801A37ACu);
  c->r[0]=R32(c->r[3]+0x00000604u); // 801A37AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A37B0
  if (crb(c,2)) { goto L_801A37C0; } // 801A37B4
  c->r[0]=0u+0x00000000u; // 801A37B8
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A37BC
L_801A37C0:;
  W32(c->r[3]+0x00000604u,c->r[4]); // 801A37C0
  return; // 801A37C4
}

// fn_801A37C8
void f_801A37C8(Ctx* __restrict c) {
  trace_call(0x801A37C8u);
  c->r[0]=R32(c->r[3]+0x00000608u); // 801A37C8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A37CC
  if (crb(c,2)) { goto L_801A37DC; } // 801A37D0
  c->r[0]=0u+0x00000000u; // 801A37D4
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A37D8
L_801A37DC:;
  W32(c->r[3]+0x00000608u,c->r[4]); // 801A37DC
  return; // 801A37E0
}

// fn_801A37E4
void f_801A37E4(Ctx* __restrict c) {
  trace_call(0x801A37E4u);
  c->r[0]=R32(c->r[3]+0x0000060Cu); // 801A37E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A37E8
  if (crb(c,2)) { goto L_801A37F8; } // 801A37EC
  c->r[0]=0u+0x00000000u; // 801A37F0
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A37F4
L_801A37F8:;
  W32(c->r[3]+0x0000060Cu,c->r[4]); // 801A37F8
  return; // 801A37FC
}

// fn_801A3800
void f_801A3800(Ctx* __restrict c) {
  trace_call(0x801A3800u);
  c->r[0]=R32(c->r[3]+0x00000610u); // 801A3800
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A3804
  if (crb(c,2)) { goto L_801A3814; } // 801A3808
  c->r[0]=0u+0x00000000u; // 801A380C
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A3810
L_801A3814:;
  W32(c->r[3]+0x00000610u,c->r[4]); // 801A3814
  return; // 801A3818
}

// fn_801A381C
void f_801A381C(Ctx* __restrict c) {
  trace_call(0x801A381Cu);
  c->r[0]=R32(c->r[3]+0x00000620u); // 801A381C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A3820
  if (crb(c,2)) { goto L_801A3830; } // 801A3824
  c->r[0]=0u+0x00000000u; // 801A3828
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A382C
L_801A3830:;
  W32(c->r[3]+0x00000620u,c->r[4]); // 801A3830
  return; // 801A3834
}

// fn_801A3838
void f_801A3838(Ctx* __restrict c) {
  trace_call(0x801A3838u);
  c->r[0]=R32(c->r[3]+0x00000624u); // 801A3838
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A383C
  if (crb(c,2)) { goto L_801A384C; } // 801A3840
  c->r[0]=0u+0x00000000u; // 801A3844
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A3848
L_801A384C:;
  W32(c->r[3]+0x00000624u,c->r[4]); // 801A384C
  return; // 801A3850
}

// fn_801A3854
void f_801A3854(Ctx* __restrict c) {
  trace_call(0x801A3854u);
  {uint32_t ea=c->r[1]+0xFFFFFC00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3854
  c->r[0]=c->lr; // 801A3858
  W32(c->r[1]+0x00000404u,c->r[0]); // 801A385C
  c->r[11]=c->r[1]+0x000003F0u; // 801A3860
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[31]);} // 801A3864
  {uint32_t ea=c->r[1]+0x000003F8u; psq_store(c,31,ea,0,0);} // 801A3868
  c->lr=0x801A3870u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A386C
  c->r[28]=c->r[3]+0x000005C0u; // 801A3870
  c->r[30]=c->r[3]|c->r[3]; // 801A3874
  c->r[31]=c->r[4]|c->r[4]; // 801A3878
  c->r[4]=0u+0x00000000u; // 801A387C
  c->r[3]=c->r[28]|c->r[28]; // 801A3880
  c->r[5]=0u+0x00000028u; // 801A3884
  c->lr=0x801A388Cu; f_800043EC(c); // 801A3888
  c->r[29]=R32(c->r[30]+0x00000434u); // 801A388C
  c->r[0]=0u+0x0000000Cu; // 801A3890
  W32(c->r[28]+0x00000000u,c->r[0]); // 801A3894
  c->r[4]=0u+0x00000000u; // 801A3898
  c->r[3]=c->r[29]+0x00000030u; // 801A389C
  c->lr=0x801A38A4u; f_802D94E8(c); // 801A38A0
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A38A4
  c->r[3]=c->r[29]+0x00000030u; // 801A38A8
  c->r[4]=0u+0x00000001u; // 801A38AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A38B0
  {uint32_t ea=c->r[30]+0x000006D0u; WF32(ea,c->f[0]);} // 801A38B4
  c->lr=0x801A38BCu; f_802D94E8(c); // 801A38B8
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A38BC
  c->r[3]=c->r[29]+0x00000030u; // 801A38C0
  c->r[4]=0u+0x00000002u; // 801A38C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A38C8
  {uint32_t ea=c->r[30]+0x000006D4u; WF32(ea,c->f[0]);} // 801A38CC
  c->lr=0x801A38D4u; f_802D94E8(c); // 801A38D0
  {uint32_t ea=c->r[30]+0x000006C0u; WF32(ea,c->f[1]);} // 801A38D4
  c->r[3]=c->r[29]+0x00000030u; // 801A38D8
  c->r[4]=0u+0x00000003u; // 801A38DC
  c->lr=0x801A38E4u; f_802D94E8(c); // 801A38E0
  {uint32_t ea=c->r[30]+0x000006C4u; WF32(ea,c->f[1]);} // 801A38E4
  c->r[3]=c->r[31]|c->r[31]; // 801A38E8
  c->lr=0x801A38F0u; f_802D93E8(c); // 801A38EC
  cmps(c,0,(int32_t)c->r[3],0); // 801A38F0
  if (crb(c,2)) { goto L_801A3C28; } // 801A38F4
  c->r[3]=c->r[31]|c->r[31]; // 801A38F8
  c->r[4]=0u+0x00000008u; // 801A38FC
  c->lr=0x801A3904u; f_802D9584(c); // 801A3900
  c->lr=0x801A3908u; f_801A16FC(c); // 801A3904
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A3908
  c->r[3]=c->r[31]|c->r[31]; // 801A390C
  c->r[4]=0u+0x0000000Du; // 801A3910
  c->lr=0x801A3918u; f_802D9584(c); // 801A3914
  c->r[28]=c->r[3]|c->r[3]; // 801A3918
  c->lr=0x801A3920u; f_803A91D4(c); // 801A391C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3920
  if (crb(c,2)) { goto L_801A3940; } // 801A3924
  c->r[3]=c->r[28]|c->r[28]; // 801A3928
  c->lr=0x801A3930u; f_803B5690(c); // 801A392C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A3930
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3934
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A3938
  {uint32_t ea=c->r[30]+0x0000063Cu; WF32(ea,c->f[0]);} // 801A393C
L_801A3940:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3940
  c->r[4]=0u+0x0000000Eu; // 801A3944
  c->lr=0x801A394Cu; f_802D9584(c); // 801A3948
  c->r[28]=c->r[3]|c->r[3]; // 801A394C
  c->lr=0x801A3954u; f_803A91D4(c); // 801A3950
  cmps(c,0,(int32_t)c->r[3],0); // 801A3954
  if (crb(c,2)) { goto L_801A3974; } // 801A3958
  c->r[3]=c->r[28]|c->r[28]; // 801A395C
  c->lr=0x801A3964u; f_803B5690(c); // 801A3960
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A3964
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3968
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A396C
  {uint32_t ea=c->r[30]+0x00000640u; WF32(ea,c->f[0]);} // 801A3970
L_801A3974:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3974
  c->r[4]=0u+0x0000000Fu; // 801A3978
  c->lr=0x801A3980u; f_802D9584(c); // 801A397C
  c->r[28]=c->r[3]|c->r[3]; // 801A3980
  c->lr=0x801A3988u; f_803A91D4(c); // 801A3984
  cmps(c,0,(int32_t)c->r[3],0); // 801A3988
  if (crb(c,2)) { goto L_801A39A8; } // 801A398C
  c->r[3]=c->r[28]|c->r[28]; // 801A3990
  c->lr=0x801A3998u; f_803B5690(c); // 801A3994
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A3998
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A399C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A39A0
  {uint32_t ea=c->r[30]+0x00000644u; WF32(ea,c->f[0]);} // 801A39A4
L_801A39A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801A39A8
  c->r[4]=0u+0x00000010u; // 801A39AC
  c->lr=0x801A39B4u; f_802D9584(c); // 801A39B0
  c->r[28]=c->r[3]|c->r[3]; // 801A39B4
  c->lr=0x801A39BCu; f_803A91D4(c); // 801A39B8
  cmps(c,0,(int32_t)c->r[3],0); // 801A39BC
  if (crb(c,2)) { goto L_801A39DC; } // 801A39C0
  c->r[3]=c->r[28]|c->r[28]; // 801A39C4
  c->lr=0x801A39CCu; f_803B5690(c); // 801A39C8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A39CC
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A39D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A39D4
  {uint32_t ea=c->r[30]+0x00000648u; WF32(ea,c->f[0]);} // 801A39D8
L_801A39DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801A39DC
  c->r[4]=0u+0x00000011u; // 801A39E0
  c->lr=0x801A39E8u; f_802D9584(c); // 801A39E4
  c->r[28]=c->r[3]|c->r[3]; // 801A39E8
  c->lr=0x801A39F0u; f_803A91D4(c); // 801A39EC
  cmps(c,0,(int32_t)c->r[3],0); // 801A39F0
  if (crb(c,2)) { goto L_801A3A10; } // 801A39F4
  c->r[3]=c->r[28]|c->r[28]; // 801A39F8
  c->lr=0x801A3A00u; f_803B5690(c); // 801A39FC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A3A00
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3A04
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A3A08
  {uint32_t ea=c->r[30]+0x00000650u; WF32(ea,c->f[0]);} // 801A3A0C
L_801A3A10:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3A10
  c->r[4]=0u+0x00000012u; // 801A3A14
  c->lr=0x801A3A1Cu; f_802D9584(c); // 801A3A18
  c->r[28]=c->r[3]|c->r[3]; // 801A3A1C
  c->lr=0x801A3A24u; f_803A91D4(c); // 801A3A20
  cmps(c,0,(int32_t)c->r[3],0); // 801A3A24
  if (crb(c,2)) { goto L_801A3AE0; } // 801A3A28
  c->r[0]=0u+0x43300000u; // 801A3A2C
  W32(c->r[1]+0x000003C4u,c->r[3]); // 801A3A30
  {uint32_t ea=c->r[2]+0xFFFFC460u; c->f[2]=RF64(ea);} // 801A3A34
  W32(c->r[1]+0x000003C0u,c->r[0]); // 801A3A38
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3A3C
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[1]=RF64(ea);} // 801A3A40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801A3A44
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801A3A48
  c->ctr=c->r[3]; // 801A3A4C
  cmpu(c,0,c->r[3],0x00000000u); // 801A3A50
  if (!crb(c,1)) { goto L_801A3AE0; } // 801A3A54
L_801A3A58:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801A3A58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801A3A5C
  cmps(c,0,(int32_t)c->r[0],65); // 801A3A60
  if (crb(c,2)) { goto L_801A3A8C; } // 801A3A64
  cmps(c,0,(int32_t)c->r[0],68); // 801A3A68
  if (crb(c,2)) { goto L_801A3A9C; } // 801A3A6C
  cmps(c,0,(int32_t)c->r[0],67); // 801A3A70
  if (crb(c,2)) { goto L_801A3AAC; } // 801A3A74
  cmps(c,0,(int32_t)c->r[0],84); // 801A3A78
  if (crb(c,2)) { goto L_801A3ABC; } // 801A3A7C
  cmps(c,0,(int32_t)c->r[0],83); // 801A3A80
  if (crb(c,2)) { goto L_801A3ACC; } // 801A3A84
  goto L_801A3AD8; // 801A3A88
L_801A3A8C:;
  {uint32_t ea=c->r[30]+0x00000658u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3A8C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A3A90
  {uint32_t ea=c->r[30]+0x00000658u; WF32(ea,c->f[0]);} // 801A3A94
  goto L_801A3AD8; // 801A3A98
L_801A3A9C:;
  {uint32_t ea=c->r[30]+0x0000065Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3A9C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A3AA0
  {uint32_t ea=c->r[30]+0x0000065Cu; WF32(ea,c->f[0]);} // 801A3AA4
  goto L_801A3AD8; // 801A3AA8
L_801A3AAC:;
  {uint32_t ea=c->r[30]+0x00000660u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3AAC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A3AB0
  {uint32_t ea=c->r[30]+0x00000660u; WF32(ea,c->f[0]);} // 801A3AB4
  goto L_801A3AD8; // 801A3AB8
L_801A3ABC:;
  {uint32_t ea=c->r[30]+0x00000664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3ABC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A3AC0
  {uint32_t ea=c->r[30]+0x00000664u; WF32(ea,c->f[0]);} // 801A3AC4
  goto L_801A3AD8; // 801A3AC8
L_801A3ACC:;
  {uint32_t ea=c->r[30]+0x00000668u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3ACC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A3AD0
  {uint32_t ea=c->r[30]+0x00000668u; WF32(ea,c->f[0]);} // 801A3AD4
L_801A3AD8:;
  c->r[28]=c->r[28]+0x00000001u; // 801A3AD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A3A58; } // 801A3ADC
L_801A3AE0:;
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 801A3AE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801A3AE4
  W32(c->r[30]+0x000005C4u,c->r[0]); // 801A3AE8
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 801A3AEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A3AF0
  if (!crb(c,2)) { goto L_801A3B38; } // 801A3AF4
  c->r[29]=0u+0x80730000u; // 801A3AF8
  c->r[3]=c->r[29]+0x00005908u; // 801A3AFC
  c->lr=0x801A3B04u; f_8009822C(c); // 801A3B00
  c->r[6]=0u+0x806D0000u; // 801A3B04
  c->r[4]=0u+0x80050000u; // 801A3B08
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 801A3B0C
  c->r[3]=c->r[29]+0x00005908u; // 801A3B10
  c->r[0]=c->r[6]+0x00000028u; // 801A3B14
  c->r[5]=0u+0x80750000u; // 801A3B18
  W32(c->r[3]+0x000000A4u,c->r[6]); // 801A3B1C
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 801A3B20
  c->r[5]=c->r[5]+0x00004E50u; // 801A3B24
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801A3B28
  c->lr=0x801A3B30u; f_803A92B8(c); // 801A3B2C
  c->r[0]=0u+0x00000001u; // 801A3B30
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 801A3B34
L_801A3B38:;
  c->r[4]=R32(c->r[30]+0x00000448u); // 801A3B38
  c->r[3]=0u+0x80730000u; // 801A3B3C
  c->r[3]=c->r[3]+0x00005908u; // 801A3B40
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801A3B44
  c->lr=0x801A3B4Cu; f_800992D4(c); // 801A3B48
  c->r[29]=0u+0x80690000u; // 801A3B4C
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801A3B50
  c->r[29]=c->r[29]+0x000034B8u; // 801A3B54
  c->r[27]=c->r[3]|c->r[3]; // 801A3B58
  c->r[26]=0u+0x00000013u; // 801A3B5C
  c->r[28]=c->r[29]+0x0000001Fu; // 801A3B60
L_801A3B64:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3B64
  c->r[4]=c->r[26]|c->r[26]; // 801A3B68
  c->lr=0x801A3B70u; f_802D9584(c); // 801A3B6C
  c->r[25]=c->r[3]|c->r[3]; // 801A3B70
  c->r[5]=c->r[28]|c->r[28]; // 801A3B74
  c->r[4]=c->r[25]|c->r[25]; // 801A3B78
  c->r[3]=c->r[1]+0x0000002Cu; // 801A3B7C
  c->r[6]=0u+0x00000000u; // 801A3B80
  c->r[7]=0u+0x00000000u; // 801A3B84
  c->lr=0x801A3B8Cu; f_800A7BF4(c); // 801A3B88
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801A3B8C
  cmps(c,0,(int32_t)c->r[0],0); // 801A3B90
  if (crb(c,2)) { goto L_801A3C1C; } // 801A3B94
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 801A3B98
  c->r[4]=c->r[29]+0x00000023u; // 801A3B9C
  c->lr=0x801A3BA4u; f_8007CA34(c); // 801A3BA0
  cmps(c,0,(int32_t)c->r[3],0); // 801A3BA4
  if (crb(c,2)) { goto L_801A3BD0; } // 801A3BA8
  c->r[3]=c->r[1]+0x0000002Cu; // 801A3BAC
  c->r[4]=0u+0x00000001u; // 801A3BB0
  c->lr=0x801A3BB8u; f_8007D0E0(c); // 801A3BB4
  {uint32_t ea=c->r[30]+0x000006C0u; WF32(ea,c->f[1]);} // 801A3BB8
  c->r[3]=c->r[1]+0x0000002Cu; // 801A3BBC
  c->r[4]=0u+0x00000002u; // 801A3BC0
  c->lr=0x801A3BC8u; f_8007D0E0(c); // 801A3BC4
  {uint32_t ea=c->r[30]+0x000006C4u; WF32(ea,c->f[1]);} // 801A3BC8
  goto L_801A3C1C; // 801A3BCC
L_801A3BD0:;
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 801A3BD0
  c->r[4]=c->r[29]+0x00000033u; // 801A3BD4
  c->lr=0x801A3BDCu; f_8007CA34(c); // 801A3BD8
  cmps(c,0,(int32_t)c->r[3],0); // 801A3BDC
  if (crb(c,2)) { goto L_801A3BFC; } // 801A3BE0
  c->r[3]=c->r[1]+0x0000002Cu; // 801A3BE4
  c->r[4]=0u+0x00000001u; // 801A3BE8
  c->lr=0x801A3BF0u; f_8007D0E0(c); // 801A3BEC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 801A3BF0
  {uint32_t ea=c->r[30]+0x000006D8u; WF32(ea,c->f[0]);} // 801A3BF4
  goto L_801A3C1C; // 801A3BF8
L_801A3BFC:;
  c->r[0]=c->r[26]+0xFFFFFFF4u; // 801A3BFC
  c->r[3]=c->r[27]|c->r[27]; // 801A3C00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A3C04
  c->r[4]=c->r[25]|c->r[25]; // 801A3C08
  c->r[5]=c->r[30]+c->r[0]; // 801A3C0C
  c->r[6]=0u+0x00000000u; // 801A3C10
  c->r[5]=c->r[5]+0x000005C4u; // 801A3C14
  c->lr=0x801A3C1Cu; f_802D24C8(c); // 801A3C18
L_801A3C1C:;
  c->r[26]=c->r[26]+0x00000001u; // 801A3C1C
  cmps(c,0,(int32_t)c->r[26],21); // 801A3C20
  if (crb(c,0)) { IRQCHK(c); goto L_801A3B64; } // 801A3C24
L_801A3C28:;
  c->r[3]=c->r[1]+0x00000070u; // 801A3C28
  c->lr=0x801A3C30u; f_8006585C(c); // 801A3C2C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A3C30
  c->r[4]=c->r[30]|c->r[30]; // 801A3C34
  c->r[3]=c->r[1]+0x00000014u; // 801A3C38
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A3C3C
  c->ctr=c->r[12]; // 801A3C40
  if (true) { c->lr=0x801A3C48u; dispatch(c,c->ctr); } // 801A3C44
  c->r[3]=0u+0x00310000u; // 801A3C48
  {uint32_t ea=c->r[2]+0xFFFFC444u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3C4C
  c->r[3]=c->r[3]+0x00000004u; // 801A3C50
  c->r[4]=c->r[1]+0x00000014u; // 801A3C54
  c->r[5]=c->r[1]+0x00000070u; // 801A3C58
  c->r[6]=0u+0x00000000u; // 801A3C5C
  c->lr=0x801A3C64u; f_8005EC34(c); // 801A3C60
  cmps(c,0,(int32_t)c->r[3],0); // 801A3C64
  if (crb(c,2)) { goto L_801A3DF0; } // 801A3C68
  c->r[3]=c->r[1]+0x00000020u; // 801A3C6C
  c->r[4]=c->r[1]+0x000000A4u; // 801A3C70
  c->lr=0x801A3C78u; f_8005CD7C(c); // 801A3C74
  c->r[4]=0u+0x80760000u; // 801A3C78
  c->r[3]=c->r[1]+0x00000008u; // 801A3C7C
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A3C80
  c->r[25]=0u+0x00000000u; // 801A3C84
  c->lr=0x801A3C8Cu; f_8005FC20(c); // 801A3C88
  c->r[3]=c->r[1]+0x00000020u; // 801A3C8C
  c->r[4]=c->r[1]+0x00000008u; // 801A3C90
  c->lr=0x801A3C98u; f_800B3F44(c); // 801A3C94
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3C98
  c->f[31]=c->f[1]; // 801A3C9C
  fcmp(c,0,c->f[1],c->f[0]); // 801A3CA0
  if (!crb(c,1)) { goto L_801A3CB0; } // 801A3CA4
  c->f[31]=c->f[0]; // 801A3CA8
  goto L_801A3CC0; // 801A3CAC
L_801A3CB0:;
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3CB0
  fcmp(c,0,c->f[1],c->f[0]); // 801A3CB4
  if (!crb(c,0)) { goto L_801A3CC0; } // 801A3CB8
  c->f[31]=c->f[0]; // 801A3CBC
L_801A3CC0:;
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3CC0
  c->r[0]=0u+0x00000000u; // 801A3CC4
  fcmp(c,0,c->f[31],c->f[0]); // 801A3CC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801A3CCC
  if (!crb(c,2)) { goto L_801A3CE8; } // 801A3CD0
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3CD4
  fcmp(c,0,c->f[31],c->f[0]); // 801A3CD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801A3CDC
  if (!crb(c,2)) { goto L_801A3CE8; } // 801A3CE0
  c->r[0]=0u+0x00000001u; // 801A3CE4
L_801A3CE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A3CE8
  if (!crb(c,2)) { goto L_801A3D0C; } // 801A3CEC
  c->r[3]=0u+0x806D0000u; // 801A3CF0
  c->r[5]=0u+0x806D0000u; // 801A3CF4
  c->r[3]=c->r[3]+0xFFFFE414u; // 801A3CF8
  c->r[4]=0u+0x000000EFu; // 801A3CFC
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 801A3D00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A3D04
  c->lr=0x801A3D0Cu; f_80484708(c); // 801A3D08
L_801A3D0C:;
  c->f[1]=c->f[31]; // 801A3D0C
  c->lr=0x801A3D14u; f_803BA740(c); // 801A3D10
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A3D14
  {uint32_t ea=c->r[2]+0xFFFFC44Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3D18
  fcmp(c,0,c->f[1],c->f[0]); // 801A3D1C
  c->r[0]=c->cr; // 801A3D20
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801A3D24
  if (!crb(c,2)) { goto L_801A3D44; } // 801A3D28
  c->r[25]=0u+0x00000001u; // 801A3D2C
  W8(c->r[30]+0x00000654u,c->r[25]); // 801A3D30
  c->r[3]=c->r[30]|c->r[30]; // 801A3D34
  c->r[4]=0u+0x00000002u; // 801A3D38
  c->lr=0x801A3D40u; f_801A87F4(c); // 801A3D3C
  goto L_801A3DDC; // 801A3D40
L_801A3D44:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3D44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3D48
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 801A3D4C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3D50
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 801A3D54
  fcmp(c,0,c->f[31],c->f[0]); // 801A3D58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801A3D5C
  if (crb(c,2)) { goto L_801A3D80; } // 801A3D60
  c->r[3]=0u+0x806D0000u; // 801A3D64
  c->r[5]=0u+0x806D0000u; // 801A3D68
  c->r[3]=c->r[3]+0xFFFFDD24u; // 801A3D6C
  c->r[4]=0u+0x00000273u; // 801A3D70
  c->r[5]=c->r[5]+0xFFFFDD00u; // 801A3D74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A3D78
  c->lr=0x801A3D80u; f_80484708(c); // 801A3D7C
L_801A3D80:;
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3D80
  fcmp(c,0,c->f[31],c->f[2]); // 801A3D84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801A3D88
  if (!crb(c,2)) { goto L_801A3D94; } // 801A3D8C
  goto L_801A3DA0; // 801A3D90
L_801A3D94:;
  c->f[1]=c->f[31]; // 801A3D94
  c->lr=0x801A3D9Cu; f_804E1098(c); // 801A3D98
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 801A3D9C
L_801A3DA0:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3DA0
  c->f[1]=-c->f[0]; // 801A3DA4
  c->lr=0x801A3DACu; f_804E1378(c); // 801A3DA8
  {uint32_t ea=c->r[2]+0xFFFFC450u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3DAC
  {uint32_t ea=c->r[2]+0xFFFFC454u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3DB0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801A3DB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A3DB8
  c->f[1]=std::fabs(c->f[0]); // 801A3DBC
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3DC0
  fcmp(c,0,c->f[1],c->f[0]); // 801A3DC4
  if (!crb(c,0)) { goto L_801A3DDC; } // 801A3DC8
  c->r[3]=c->r[30]|c->r[30]; // 801A3DCC
  c->r[25]=0u+0x00000001u; // 801A3DD0
  c->r[4]=0u+0x00000001u; // 801A3DD4
  c->lr=0x801A3DDCu; f_801A87F4(c); // 801A3DD8
L_801A3DDC:;
  cmps(c,0,(int32_t)c->r[25],0); // 801A3DDC
  if (crb(c,2)) { goto L_801A3DF0; } // 801A3DE0
  c->r[3]=c->r[30]|c->r[30]; // 801A3DE4
  c->r[4]=c->r[1]+0x00000020u; // 801A3DE8
  c->lr=0x801A3DF0u; f_80061C18(c); // 801A3DEC
L_801A3DF0:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A3DF0
  c->r[5]=0u+0x80690000u; // 801A3DF4
  c->r[5]=c->r[5]+0x000034B8u; // 801A3DF8
  c->r[3]=c->r[30]|c->r[30]; // 801A3DFC
  c->r[12]=R32(c->r[12]+0x0000018Cu); // 801A3E00
  c->r[4]=c->r[5]+0x00000046u; // 801A3E04
  c->r[6]=c->r[31]|c->r[31]; // 801A3E08
  c->r[5]=c->r[5]+0x0000004Du; // 801A3E0C
  c->ctr=c->r[12]; // 801A3E10
  if (true) { c->lr=0x801A3E18u; dispatch(c,c->ctr); } // 801A3E14
  c->r[0]=0u+0x00000000u; // 801A3E18
  W32(c->r[1]+0x000003B8u,c->r[0]); // 801A3E1C
  {uint32_t ea=c->r[1]+0x000003F8u; psq_load(c,31,ea,0,0);} // 801A3E20
  {uint32_t ea=c->r[1]+0x000003F0u; c->f[31]=RF64(ea);} // 801A3E24
  c->r[11]=c->r[1]+0x000003F0u; // 801A3E28
  c->lr=0x801A3E30u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A3E2C
  c->r[0]=R32(c->r[1]+0x00000404u); // 801A3E30
  c->lr=c->r[0]; // 801A3E34
  c->r[1]=c->r[1]+0x00000400u; // 801A3E38
  return; // 801A3E3C
}

// fn_801A3E40
void f_801A3E40(Ctx* __restrict c) {
  trace_call(0x801A3E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3E40
  c->r[0]=c->lr; // 801A3E44
  W32(c->r[1]+0x00000034u,c->r[0]); // 801A3E48
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801A3E4C
  c->r[31]=c->r[3]|c->r[3]; // 801A3E50
  c->r[4]=R32(c->r[3]+0x0000042Cu); // 801A3E54
  c->r[0]=R32(c->r[4]+0x00000010u); // 801A3E58
  cmps(c,0,(int32_t)c->r[0],0); // 801A3E5C
  if (crb(c,2)) { goto L_801A3E70; } // 801A3E60
  c->lr=0x801A3E68u; f_80060974(c); // 801A3E64
  W32(c->r[31]+0x00000634u,c->r[3]); // 801A3E68
  goto L_801A3E9C; // 801A3E6C
L_801A3E70:;
  c->r[0]=R32(c->r[3]+0x00000634u); // 801A3E70
  cmps(c,0,(int32_t)c->r[0],4); // 801A3E74
  if (crb(c,2)) { goto L_801A3E9C; } // 801A3E78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A3E7C
  {uint32_t ea=c->r[3]+0x00000638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3E80
  c->r[4]=c->r[3]+c->r[0]; // 801A3E84
  {uint32_t ea=c->r[4]+0x0000063Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3E88
  c->r[0]=0u+0x00000004u; // 801A3E8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801A3E90
  W32(c->r[3]+0x00000634u,c->r[0]); // 801A3E94
  {uint32_t ea=c->r[3]+0x00000638u; WF32(ea,c->f[0]);} // 801A3E98
L_801A3E9C:;
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3E9C
  c->r[3]=c->r[1]+0x00000008u; // 801A3EA0
  {uint32_t ea=c->r[31]+0x000001CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3EA4
  {uint32_t ea=c->r[31]+0x000001DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3EA8
  c->lr=0x801A3EB0u; f_8005FD70(c); // 801A3EAC
  c->r[3]=c->r[1]+0x00000014u; // 801A3EB0
  c->r[4]=c->r[1]+0x00000008u; // 801A3EB4
  c->lr=0x801A3EBCu; f_8005FC20(c); // 801A3EB8
  c->r[3]=c->r[31]|c->r[31]; // 801A3EBC
  c->lr=0x801A3EC4u; f_8005EAA0(c); // 801A3EC0
  c->r[4]=c->r[1]+0x00000014u; // 801A3EC4
  c->lr=0x801A3ECCu; f_80101520(c); // 801A3EC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801A3ECC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801A3ED0
  c->lr=c->r[0]; // 801A3ED4
  c->r[1]=c->r[1]+0x00000030u; // 801A3ED8
  return; // 801A3EDC
}

// fn_801A3EE0
void f_801A3EE0(Ctx* __restrict c) {
  trace_call(0x801A3EE0u);
  return; // 801A3EE0
}

// fn_801A3EE4
void f_801A3EE4(Ctx* __restrict c) {
  trace_call(0x801A3EE4u);
  return; // 801A3EE4
}

// fn_801A3EE8
void f_801A3EE8(Ctx* __restrict c) {
  trace_call(0x801A3EE8u);
  return; // 801A3EE8
}

// fn_801A3EEC
void f_801A3EEC(Ctx* __restrict c) {
  trace_call(0x801A3EECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3EEC
  c->r[0]=c->lr; // 801A3EF0
  c->r[5]=0u+0x00000000u; // 801A3EF4
  c->r[6]=0u+0x00000000u; // 801A3EF8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801A3EFC
  c->r[7]=0u+0x00000000u; // 801A3F00
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801A3F04
  c->r[31]=c->r[3]|c->r[3]; // 801A3F08
  c->r[3]=c->r[1]+0x00000008u; // 801A3F0C
  c->lr=0x801A3F14u; f_800A7BF4(c); // 801A3F10
  c->r[3]=R32(c->r[1]+0x00000008u); // 801A3F14
  c->lr=0x801A3F1Cu; f_801A178C(c); // 801A3F18
  cmps(c,0,(int32_t)c->r[3],3); // 801A3F1C
  if (crb(c,2)) { goto L_801A3F58; } // 801A3F20
  cmps(c,0,(int32_t)c->r[3],1); // 801A3F24
  if (!crb(c,2)) { goto L_801A3F48; } // 801A3F28
  c->r[3]=c->r[1]+0x00000008u; // 801A3F2C
  c->r[4]=0u+0x00000001u; // 801A3F30
  c->lr=0x801A3F38u; f_80094630(c); // 801A3F34
  c->r[4]=c->r[3]|c->r[3]; // 801A3F38
  c->r[3]=c->r[31]|c->r[31]; // 801A3F3C
  c->lr=0x801A3F44u; f_801A88C8(c); // 801A3F40
  goto L_801A3F58; // 801A3F44
L_801A3F48:;
  c->r[4]=c->r[3]|c->r[3]; // 801A3F48
  c->r[3]=c->r[31]+0x00000600u; // 801A3F4C
  c->r[5]=0u+0x00000001u; // 801A3F50
  c->lr=0x801A3F58u; f_8005DCA0(c); // 801A3F54
L_801A3F58:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801A3F58
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801A3F5C
  c->lr=c->r[0]; // 801A3F60
  c->r[1]=c->r[1]+0x00000060u; // 801A3F64
  return; // 801A3F68
}

// fn_801A3F6C
void f_801A3F6C(Ctx* __restrict c) {
  trace_call(0x801A3F6Cu);
  return; // 801A3F6C
}

// fn_801A3F70
void f_801A3F70(Ctx* __restrict c) {
  trace_call(0x801A3F70u);
  f_801A8858(c); return; // 801A3F70
}

// fn_801A3F74
void f_801A3F74(Ctx* __restrict c) {
  trace_call(0x801A3F74u);
  return; // 801A3F74
}

// fn_801A3F78
void f_801A3F78(Ctx* __restrict c) {
  trace_call(0x801A3F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3F78
  c->r[0]=c->lr; // 801A3F7C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A3F80
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A3F84
  c->r[31]=c->r[1]|c->r[1]; // 801A3F88
  c->r[28]=c->r[3]|c->r[3]; // 801A3F8C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801A3F90
  c->r[12]=R32(c->r[12]+0x00000118u); // 801A3F94
  c->ctr=c->r[12]; // 801A3F98
  if (true) { c->lr=0x801A3FA0u; dispatch(c,c->ctr); } // 801A3F9C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3FA0
  if (crb(c,2)) { goto L_801A4254; } // 801A3FA4
  c->r[3]=c->r[28]|c->r[28]; // 801A3FA8
  c->r[29]=0u+0x00000000u; // 801A3FAC
  c->lr=0x801A3FB4u; f_80060974(c); // 801A3FB0
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 801A3FB4
  c->r[30]=c->r[3]|c->r[3]; // 801A3FB8
  c->r[3]=c->r[28]|c->r[28]; // 801A3FBC
  c->r[12]=R32(c->r[12]+0x00000100u); // 801A3FC0
  c->ctr=c->r[12]; // 801A3FC4
  if (true) { c->lr=0x801A3FCCu; dispatch(c,c->ctr); } // 801A3FC8
  c->r[4]=R32(c->r[28]+0x0000044Cu); // 801A3FCC
  c->r[9]=cntlz(c->r[3]); // 801A3FD0
  c->r[0]=R8(c->r[28]+0x000004C1u); // 801A3FD4
  c->r[7]=0u+0x00000002u; // 801A3FD8
  c->r[8]=R32(c->r[28]+0x00000614u); // 801A3FDC
  c->r[5]=0u+0x00000004u; // 801A3FE0
  c->r[6]=R32(c->r[4]+0x0000008Cu); // 801A3FE4
  c->r[3]=0u+0x00000001u; // 801A3FE8
  c->r[4]=R32(c->r[28]+0x0000060Cu); // 801A3FEC
  cmps(c,0,(int32_t)c->r[0],0); // 801A3FF0
  c->r[7]=c->r[8]-c->r[7]; // 801A3FF4
  c->r[5]=c->r[6]-c->r[5]; // 801A3FF8
  c->r[0]=c->r[4]-c->r[3]; // 801A3FFC
  c->r[27]=rotl(c->r[9],27)&0x07FFFFFFu; // 801A4000
  c->r[4]=cntlz(c->r[7]); // 801A4004
  c->r[3]=cntlz(c->r[5]); // 801A4008
  c->r[0]=cntlz(c->r[0]); // 801A400C
  c->r[26]=rotl(c->r[4],27)&0x07FFFFFFu; // 801A4010
  c->r[24]=rotl(c->r[3],27)&0x07FFFFFFu; // 801A4014
  c->r[25]=rotl(c->r[0],27)&0x07FFFFFFu; // 801A4018
  if (crb(c,2)) { goto L_801A4054; } // 801A401C
  c->r[3]=c->r[28]|c->r[28]; // 801A4020
  c->lr=0x801A4028u; f_8006053C(c); // 801A4024
  c->r[3]=c->r[28]|c->r[28]; // 801A4028
  c->r[4]=0u+0x00000005u; // 801A402C
  c->lr=0x801A4034u; f_801A37C8(c); // 801A4030
  cmps(c,0,(int32_t)c->r[26],0); // 801A4034
  if (crb(c,2)) { goto L_801A4048; } // 801A4038
  c->r[3]=c->r[28]|c->r[28]; // 801A403C
  c->lr=0x801A4044u; f_801A4320(c); // 801A4040
  goto L_801A4254; // 801A4044
L_801A4048:;
  c->r[3]=c->r[28]|c->r[28]; // 801A4048
  c->lr=0x801A4050u; f_801A4270(c); // 801A404C
  goto L_801A4254; // 801A4050
L_801A4054:;
  cmps(c,0,(int32_t)c->r[27],0); // 801A4054
  if (!crb(c,2)) { goto L_801A4090; } // 801A4058
  c->r[0]=R32(c->r[28]+0x00000604u); // 801A405C
  cmps(c,0,(int32_t)c->r[0],4); // 801A4060
  if (!crb(c,2)) { goto L_801A4090; } // 801A4064
  c->r[3]=c->r[28]+0x00000354u; // 801A4068
  c->r[4]=0u+0x00007DDCu; // 801A406C
  c->lr=0x801A4074u; f_800667BC(c); // 801A4070
  cmps(c,0,(int32_t)c->r[3],0); // 801A4074
  if (crb(c,2)) { goto L_801A4090; } // 801A4078
  c->r[3]=c->r[28]|c->r[28]; // 801A407C
  c->lr=0x801A4084u; f_8006053C(c); // 801A4080
  c->r[3]=c->r[28]|c->r[28]; // 801A4084
  c->lr=0x801A408Cu; f_801A4270(c); // 801A4088
  goto L_801A4254; // 801A408C
L_801A4090:;
  cmps(c,0,(int32_t)c->r[27],0); // 801A4090
  if (!crb(c,2)) { goto L_801A4254; } // 801A4094
  cmps(c,0,(int32_t)c->r[30],0); // 801A4098
  if (crb(c,2)) { goto L_801A4254; } // 801A409C
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801A40A0
  cmpu(c,0,c->r[0],0x00000001u); // 801A40A4
  if (!crb(c,1)) { goto L_801A40B8; } // 801A40A8
  cmps(c,0,(int32_t)c->r[30],3); // 801A40AC
  if (crb(c,2)) { goto L_801A416C; } // 801A40B0
  goto L_801A41D0; // 801A40B4
L_801A40B8:;
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 801A40B8
  c->r[3]=c->r[28]|c->r[28]; // 801A40BC
  c->r[12]=R32(c->r[12]+0x00000110u); // 801A40C0
  c->ctr=c->r[12]; // 801A40C4
  if (true) { c->lr=0x801A40CCu; dispatch(c,c->ctr); } // 801A40C8
  cmps(c,0,(int32_t)c->r[3],0); // 801A40CC
  if (crb(c,2)) { goto L_801A4254; } // 801A40D0
  cmps(c,0,(int32_t)c->r[24],0); // 801A40D4
  if (crb(c,2)) { goto L_801A40E0; } // 801A40D8
  goto L_801A4254; // 801A40DC
L_801A40E0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801A40E0
  c->r[0]=R32(c->r[28]+0x00000480u); // 801A40E4
  if (!crb(c,2)) { goto L_801A40F4; } // 801A40E8
  cmps(c,0,(int32_t)c->r[26],0); // 801A40EC
  if (crb(c,2)) { goto L_801A4130; } // 801A40F0
L_801A40F4:;
  cmps(c,0,(int32_t)c->r[0],7); // 801A40F4
  if (crb(c,2)) { goto L_801A4118; } // 801A40F8
  cmps(c,0,(int32_t)c->r[0],16); // 801A40FC
  if (crb(c,2)) { goto L_801A4118; } // 801A4100
  cmps(c,0,(int32_t)c->r[0],6); // 801A4104
  if (crb(c,2)) { goto L_801A4120; } // 801A4108
  cmps(c,0,(int32_t)c->r[0],15); // 801A410C
  if (crb(c,2)) { goto L_801A4120; } // 801A4110
  goto L_801A4128; // 801A4114
L_801A4118:;
  c->r[29]=0u+0x00007E36u; // 801A4118
  goto L_801A41D0; // 801A411C
L_801A4120:;
  c->r[29]=0u+0x00007E3Bu; // 801A4120
  goto L_801A41D0; // 801A4124
L_801A4128:;
  c->r[29]=0u+0x00007E36u; // 801A4128
  goto L_801A41D0; // 801A412C
L_801A4130:;
  cmps(c,0,(int32_t)c->r[0],7); // 801A4130
  if (crb(c,2)) { goto L_801A4154; } // 801A4134
  cmps(c,0,(int32_t)c->r[0],16); // 801A4138
  if (crb(c,2)) { goto L_801A4154; } // 801A413C
  cmps(c,0,(int32_t)c->r[0],6); // 801A4140
  if (crb(c,2)) { goto L_801A415C; } // 801A4144
  cmps(c,0,(int32_t)c->r[0],15); // 801A4148
  if (crb(c,2)) { goto L_801A415C; } // 801A414C
  goto L_801A4164; // 801A4150
L_801A4154:;
  c->r[29]=0u+0x00007E2Cu; // 801A4154
  goto L_801A41D0; // 801A4158
L_801A415C:;
  c->r[29]=0u+0x00007E31u; // 801A415C
  goto L_801A41D0; // 801A4160
L_801A4164:;
  c->r[29]=0u+0x00007E40u; // 801A4164
  goto L_801A41D0; // 801A4168
L_801A416C:;
  c->r[0]=R32(c->r[28]+0x00000604u); // 801A416C
  c->r[3]=0u+0x00000000u; // 801A4170
  cmps(c,0,(int32_t)c->r[0],4); // 801A4174
  if (crb(c,2)) { goto L_801A4188; } // 801A4178
  c->r[0]=R8(c->r[28]+0x000006CCu); // 801A417C
  cmps(c,0,(int32_t)c->r[0],0); // 801A4180
  if (crb(c,2)) { goto L_801A418C; } // 801A4184
L_801A4188:;
  c->r[3]=0u+0x00000001u; // 801A4188
L_801A418C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A418C
  if (crb(c,2)) { goto L_801A4254; } // 801A4190
  c->r[0]=R8(c->r[28]+0x000006CDu); // 801A4194
  cmps(c,0,(int32_t)c->r[0],0); // 801A4198
  if (!crb(c,2)) { goto L_801A4254; } // 801A419C
  c->r[0]=0u+0x00000001u; // 801A41A0
  W8(c->r[28]+0x000006CDu,c->r[0]); // 801A41A4
  c->r[3]=c->r[28]|c->r[28]; // 801A41A8
  c->lr=0x801A41B0u; f_8006053C(c); // 801A41AC
  cmps(c,0,(int32_t)c->r[26],0); // 801A41B0
  if (crb(c,2)) { goto L_801A41C4; } // 801A41B4
  c->r[3]=c->r[28]|c->r[28]; // 801A41B8
  c->lr=0x801A41C0u; f_801A4320(c); // 801A41BC
  goto L_801A4254; // 801A41C0
L_801A41C4:;
  c->r[3]=c->r[28]|c->r[28]; // 801A41C4
  c->lr=0x801A41CCu; f_801A4270(c); // 801A41C8
  goto L_801A4254; // 801A41CC
L_801A41D0:;
  c->r[3]=c->r[28]|c->r[28]; // 801A41D0
  c->lr=0x801A41D8u; f_8006053C(c); // 801A41D4
  W32(c->r[28]+0x000005F4u,c->r[29]); // 801A41D8
  c->lr=0x801A41E0u; f_80062E5C(c); // 801A41DC
  c->r[4]=c->r[3]|c->r[3]; // 801A41E0
  c->r[3]=c->r[28]|c->r[28]; // 801A41E4
  c->lr=0x801A41ECu; f_80062F4C(c); // 801A41E8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A41EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A41F0
  c->r[3]=c->r[28]+c->r[0]; // 801A41F4
  c->r[27]=R32(c->r[3]+0x00000014u); // 801A41F8
  cmps(c,0,(int32_t)c->r[27],0); // 801A41FC
  if (crb(c,2)) { goto L_801A4228; } // 801A4200
  c->r[29]=0u+0x00000000u; // 801A4204
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A4208
  W8(c->r[31]+0x00000008u,c->r[29]); // 801A420C
  c->lr=0x801A4214u; f_80062E5C(c); // 801A4210
  W32(c->r[27]+0x00000000u,c->r[3]); // 801A4214
  c->r[0]=c->r[13]+0xFFFF80CCu; // 801A4218
  W32(c->r[27]+0x00000004u,c->r[0]); // 801A421C
  W32(c->r[27]+0x00000008u,c->r[29]); // 801A4220
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 801A4224
L_801A4228:;
  W32(c->r[28]+0x00000008u,c->r[27]); // 801A4228
  c->r[0]=0u+0x00000000u; // 801A422C
  c->r[3]=c->r[28]|c->r[28]; // 801A4230
  c->r[4]=c->r[27]|c->r[27]; // 801A4234
  W32(c->r[27]+0x00000008u,c->r[0]); // 801A4238
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A423C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A4240
  c->lr=0x801A4248u; f_8006306C(c); // 801A4244
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A4248
  c->r[0]=c->r[0]|0x40000000u; // 801A424C
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A4250
L_801A4254:;
  c->r[10]=c->r[31]|c->r[31]; // 801A4254
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A4258
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A425C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A4260
  c->r[1]=c->r[10]|c->r[10]; // 801A4264
  c->lr=c->r[0]; // 801A4268
  return; // 801A426C
}

// fn_801A4270
void f_801A4270(Ctx* __restrict c) {
  trace_call(0x801A4270u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4270
  c->r[0]=c->lr; // 801A4274
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A4278
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A427C
  c->r[31]=c->r[1]|c->r[1]; // 801A4280
  c->r[28]=c->r[3]|c->r[3]; // 801A4284
  c->lr=0x801A428Cu; f_801A23AC(c); // 801A4288
  c->r[4]=c->r[3]|c->r[3]; // 801A428C
  c->r[3]=c->r[28]|c->r[28]; // 801A4290
  c->lr=0x801A4298u; f_80062F4C(c); // 801A4294
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A4298
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A429C
  c->r[3]=c->r[28]+c->r[0]; // 801A42A0
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A42A4
  cmps(c,0,(int32_t)c->r[29],0); // 801A42A8
  if (crb(c,2)) { goto L_801A42D4; } // 801A42AC
  c->r[30]=0u+0x00000000u; // 801A42B0
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A42B4
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A42B8
  c->lr=0x801A42C0u; f_801A23AC(c); // 801A42BC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A42C0
  c->r[0]=c->r[13]+0xFFFF8D50u; // 801A42C4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A42C8
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A42CC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A42D0
L_801A42D4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A42D4
  c->r[0]=0u+0x00000000u; // 801A42D8
  c->r[3]=c->r[28]|c->r[28]; // 801A42DC
  c->r[4]=c->r[29]|c->r[29]; // 801A42E0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A42E4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A42E8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A42EC
  c->lr=0x801A42F4u; f_8006306C(c); // 801A42F0
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A42F4
  c->r[10]=c->r[31]|c->r[31]; // 801A42F8
  c->r[3]=c->r[29]|c->r[29]; // 801A42FC
  c->r[0]=c->r[0]|0x40000000u; // 801A4300
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A4304
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A4308
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A430C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A4310
  c->r[1]=c->r[10]|c->r[10]; // 801A4314
  c->lr=c->r[0]; // 801A4318
  return; // 801A431C
}

// fn_801A4320
void f_801A4320(Ctx* __restrict c) {
  trace_call(0x801A4320u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4320
  c->r[0]=c->lr; // 801A4324
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A4328
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A432C
  c->r[31]=c->r[1]|c->r[1]; // 801A4330
  c->r[28]=c->r[3]|c->r[3]; // 801A4334
  c->lr=0x801A433Cu; f_801A2450(c); // 801A4338
  c->r[4]=c->r[3]|c->r[3]; // 801A433C
  c->r[3]=c->r[28]|c->r[28]; // 801A4340
  c->lr=0x801A4348u; f_80062F4C(c); // 801A4344
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A4348
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A434C
  c->r[3]=c->r[28]+c->r[0]; // 801A4350
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A4354
  cmps(c,0,(int32_t)c->r[29],0); // 801A4358
  if (crb(c,2)) { goto L_801A4384; } // 801A435C
  c->r[30]=0u+0x00000000u; // 801A4360
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A4364
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A4368
  c->lr=0x801A4370u; f_801A2450(c); // 801A436C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A4370
  c->r[0]=c->r[13]+0xFFFF8D4Cu; // 801A4374
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A4378
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A437C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A4380
L_801A4384:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A4384
  c->r[0]=0u+0x00000000u; // 801A4388
  c->r[3]=c->r[28]|c->r[28]; // 801A438C
  c->r[4]=c->r[29]|c->r[29]; // 801A4390
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A4394
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A4398
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A439C
  c->lr=0x801A43A4u; f_8006306C(c); // 801A43A0
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A43A4
  c->r[10]=c->r[31]|c->r[31]; // 801A43A8
  c->r[3]=c->r[29]|c->r[29]; // 801A43AC
  c->r[0]=c->r[0]|0x40000000u; // 801A43B0
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A43B4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A43B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A43BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A43C0
  c->r[1]=c->r[10]|c->r[10]; // 801A43C4
  c->lr=c->r[0]; // 801A43C8
  return; // 801A43CC
}

// fn_801A43D0
void f_801A43D0(Ctx* __restrict c) {
  trace_call(0x801A43D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A43D0
  c->r[0]=c->lr; // 801A43D4
  cmps(c,0,(int32_t)c->r[4],0); // 801A43D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A43DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A43E0
  c->r[30]=c->r[4]|c->r[4]; // 801A43E4
  if (!crb(c,2)) { goto L_801A43F4; } // 801A43E8
  c->r[3]=0u+0x00000000u; // 801A43EC
  goto L_801A4484; // 801A43F0
L_801A43F4:;
  c->r[0]=R8(c->r[13]+0xFFFFBDECu); // 801A43F4
  c->r[31]=c->r[3]+0x000000FCu; // 801A43F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A43FC
  if (!crb(c,2)) { goto L_801A441C; } // 801A4400
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 801A4404
  c->r[0]=0u+0x00000001u; // 801A4408
  W32(c->r[13]+0xFFFFBDE8u,c->r[3]); // 801A440C
  c->r[3]=c->r[3]+0x00000001u; // 801A4410
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 801A4414
  W8(c->r[13]+0xFFFFBDECu,c->r[0]); // 801A4418
L_801A441C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801A441C
  c->r[3]=c->r[31]|c->r[31]; // 801A4420
  c->r[4]=R32(c->r[13]+0xFFFFBDE8u); // 801A4424
  c->r[12]=R32(c->r[12]+0x00000048u); // 801A4428
  c->ctr=c->r[12]; // 801A442C
  if (true) { c->lr=0x801A4434u; dispatch(c,c->ctr); } // 801A4430
  cmps(c,0,(int32_t)c->r[3],0); // 801A4434
  if (crb(c,2)) { goto L_801A4448; } // 801A4438
  c->r[4]=0u+0x00000001u; // 801A443C
  c->lr=0x801A4444u; f_803547F0(c); // 801A4440
  goto L_801A444C; // 801A4444
L_801A4448:;
  c->r[3]=0u+0x00000000u; // 801A4448
L_801A444C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A444C
  if (crb(c,2)) { goto L_801A4464; } // 801A4450
  c->r[4]=c->r[30]|c->r[30]; // 801A4454
  c->r[3]=c->r[3]+0x00000020u; // 801A4458
  c->lr=0x801A4460u; f_80382F2C(c); // 801A445C
  goto L_801A4480; // 801A4460
L_801A4464:;
  c->r[4]=0u+0x80690000u; // 801A4464
  c->r[3]=c->r[31]|c->r[31]; // 801A4468
  c->r[4]=c->r[4]+0x000034B8u; // 801A446C
  c->r[4]=c->r[4]+0x00000053u; // 801A4470
  c->lr=0x801A4478u; f_802E6F14(c); // 801A4474
  c->r[4]=c->r[30]|c->r[30]; // 801A4478
  c->lr=0x801A4480u; f_80382F2C(c); // 801A447C
L_801A4480:;
  c->r[3]=0u+0x00000001u; // 801A4480
L_801A4484:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A4484
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4488
  c->lr=c->r[0]; // 801A448C
  c->r[1]=c->r[1]+0x00000010u; // 801A4490
  return; // 801A4494
}

// fn_801A4498
void f_801A4498(Ctx* __restrict c) {
  trace_call(0x801A4498u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4498
  c->r[0]=c->lr; // 801A449C
  c->r[5]=0u+0x80690000u; // 801A44A0
  c->r[6]=c->r[4]|c->r[4]; // 801A44A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A44A8
  c->r[5]=c->r[5]+0x000034B8u; // 801A44AC
  c->r[4]=c->r[5]+0x00000053u; // 801A44B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A44B4
  c->r[31]=c->r[3]|c->r[3]; // 801A44B8
  c->r[3]=c->r[6]+0x000000FCu; // 801A44BC
  c->lr=0x801A44C4u; f_802E6F14(c); // 801A44C0
  c->r[4]=c->r[3]|c->r[3]; // 801A44C4
  c->r[3]=c->r[31]|c->r[31]; // 801A44C8
  c->lr=0x801A44D0u; f_80060878(c); // 801A44CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A44D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A44D4
  c->lr=c->r[0]; // 801A44D8
  c->r[1]=c->r[1]+0x00000010u; // 801A44DC
  return; // 801A44E0
}

// fn_801A44E4
void f_801A44E4(Ctx* __restrict c) {
  trace_call(0x801A44E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A44E4
  c->r[0]=c->lr; // 801A44E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A44EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A44F0
  c->r[31]=c->r[3]|c->r[3]; // 801A44F4
  c->r[0]=R32(c->r[3]+0x000005C0u); // 801A44F8
  cmpu(c,0,c->r[0],0x0000000Cu); // 801A44FC
  if (crb(c,1)) { goto L_801A461C; } // 801A4500
  c->r[4]=0u+0x806E0000u; // 801A4504
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A4508
  c->r[4]=c->r[4]+0x000020C8u; // 801A450C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801A4510
  c->ctr=c->r[4]; // 801A4514
  if (true) { switch (c->ctr) { case 0x801A451Cu: goto L_801A451C; case 0x801A4530u: goto L_801A4530; case 0x801A4544u: goto L_801A4544; case 0x801A4558u: goto L_801A4558; case 0x801A456Cu: goto L_801A456C; case 0x801A4580u: goto L_801A4580; case 0x801A4594u: goto L_801A4594; case 0x801A45ACu: goto L_801A45AC; case 0x801A45C4u: goto L_801A45C4; case 0x801A45F0u: goto L_801A45F0; case 0x801A4608u: goto L_801A4608; case 0x801A461Cu: goto L_801A461C; default: break; } dispatch(c,c->ctr); return; } // 801A4518
L_801A451C:;
  c->r[4]=0u+0x00000000u; // 801A451C
  c->lr=0x801A4524u; f_801A37AC(c); // 801A4520
  c->r[0]=0u+0x00007FC6u; // 801A4524
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A4528
  goto L_801A461C; // 801A452C
L_801A4530:;
  c->r[4]=0u+0x00000000u; // 801A4530
  c->lr=0x801A4538u; f_801A37AC(c); // 801A4534
  c->r[0]=0u+0x00007FCBu; // 801A4538
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A453C
  goto L_801A461C; // 801A4540
L_801A4544:;
  c->r[4]=0u+0x00000000u; // 801A4544
  c->lr=0x801A454Cu; f_801A37AC(c); // 801A4548
  c->r[0]=0u+0x00007FBCu; // 801A454C
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A4550
  goto L_801A461C; // 801A4554
L_801A4558:;
  c->r[4]=0u+0x00000000u; // 801A4558
  c->lr=0x801A4560u; f_801A37AC(c); // 801A455C
  c->r[0]=0u+0x00007FC1u; // 801A4560
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A4564
  goto L_801A461C; // 801A4568
L_801A456C:;
  c->r[4]=0u+0x00000000u; // 801A456C
  c->lr=0x801A4574u; f_801A37AC(c); // 801A4570
  c->r[0]=0u+0x00007FD0u; // 801A4574
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A4578
  goto L_801A461C; // 801A457C
L_801A4580:;
  c->r[4]=0u+0x00000000u; // 801A4580
  c->lr=0x801A4588u; f_801A37AC(c); // 801A4584
  c->r[0]=0u+0x00007FD5u; // 801A4588
  W32(c->r[31]+0x000005ECu,c->r[0]); // 801A458C
  goto L_801A461C; // 801A4590
L_801A4594:;
  c->r[4]=0u+0x00000001u; // 801A4594
  c->lr=0x801A459Cu; f_801A37AC(c); // 801A4598
  c->r[3]=c->r[31]|c->r[31]; // 801A459C
  c->r[4]=0u+0x00000000u; // 801A45A0
  c->lr=0x801A45A8u; f_801A37E4(c); // 801A45A4
  goto L_801A461C; // 801A45A8
L_801A45AC:;
  c->r[4]=0u+0x00000001u; // 801A45AC
  c->lr=0x801A45B4u; f_801A37AC(c); // 801A45B0
  c->r[3]=c->r[31]|c->r[31]; // 801A45B4
  c->r[4]=0u+0x00000001u; // 801A45B8
  c->lr=0x801A45C0u; f_801A37E4(c); // 801A45BC
  goto L_801A461C; // 801A45C0
L_801A45C4:;
  c->r[4]=0u+0x00000001u; // 801A45C4
  c->lr=0x801A45CCu; f_801A37AC(c); // 801A45C8
  c->r[3]=c->r[31]|c->r[31]; // 801A45CC
  c->r[4]=0u+0x00000001u; // 801A45D0
  c->lr=0x801A45D8u; f_801A37E4(c); // 801A45D4
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801A45D8
  c->r[4]=0u+0x00000001u; // 801A45DC
  c->r[5]=0u+0x00000001u; // 801A45E0
  c->r[3]=c->r[3]+0x000000C4u; // 801A45E4
  c->lr=0x801A45ECu; f_8005DCA0(c); // 801A45E8
  goto L_801A461C; // 801A45EC
L_801A45F0:;
  c->r[4]=0u+0x00000002u; // 801A45F0
  c->lr=0x801A45F8u; f_801A37AC(c); // 801A45F4
  c->r[3]=c->r[31]|c->r[31]; // 801A45F8
  c->r[4]=0u+0x00000000u; // 801A45FC
  c->lr=0x801A4604u; f_801A3800(c); // 801A4600
  goto L_801A461C; // 801A4604
L_801A4608:;
  c->r[4]=0u+0x00000002u; // 801A4608
  c->lr=0x801A4610u; f_801A37AC(c); // 801A460C
  c->r[3]=c->r[31]|c->r[31]; // 801A4610
  c->r[4]=0u+0x00000001u; // 801A4614
  c->lr=0x801A461Cu; f_801A3800(c); // 801A4618
L_801A461C:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A461C
  c->r[3]=c->r[31]|c->r[31]; // 801A4620
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A4624
  c->ctr=c->r[12]; // 801A4628
  if (true) { c->lr=0x801A4630u; dispatch(c,c->ctr); } // 801A462C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A4634
  c->lr=c->r[0]; // 801A4638
  c->r[1]=c->r[1]+0x00000010u; // 801A463C
  return; // 801A4640
}

// fn_801A4644
void f_801A4644(Ctx* __restrict c) {
  trace_call(0x801A4644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4644
  c->r[0]=c->lr; // 801A4648
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A464C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4650
  c->r[31]=c->r[3]|c->r[3]; // 801A4654
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A4658
  cmps(c,0,(int32_t)c->r[0],0); // 801A465C
  if (crb(c,2)) { goto L_801A4678; } // 801A4660
  cmps(c,0,(int32_t)c->r[0],256); // 801A4664
  if (crb(c,2)) { goto L_801A46BC; } // 801A4668
  cmps(c,0,(int32_t)c->r[0],512); // 801A466C
  if (crb(c,2)) { goto L_801A46F0; } // 801A4670
  goto L_801A4738; // 801A4674
L_801A4678:;
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 801A4678
  c->r[4]=0u+0x00000003u; // 801A467C
  c->r[5]=0u+0x00000001u; // 801A4680
  c->r[3]=c->r[3]+0x000000C4u; // 801A4684
  c->lr=0x801A468Cu; f_8005DCA0(c); // 801A4688
  c->r[3]=c->r[31]|c->r[31]; // 801A468C
  c->r[4]=0u+0x00000000u; // 801A4690
  c->lr=0x801A4698u; f_8005EA70(c); // 801A4694
  c->r[4]=R32(c->r[31]+0x000005ECu); // 801A4698
  c->r[3]=c->r[31]|c->r[31]; // 801A469C
  c->r[5]=0u+0x00000001u; // 801A46A0
  c->lr=0x801A46A8u; f_80064744(c); // 801A46A4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A46A8
  c->r[0]=0u+0x00000100u; // 801A46AC
  {uint32_t ea=c->r[31]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A46B0
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A46B4
  goto L_801A4738; // 801A46B8
L_801A46BC:;
  c->r[4]=0u+0x00000000u; // 801A46BC
  c->lr=0x801A46C4u; f_801A474C(c); // 801A46C0
  cmps(c,0,(int32_t)c->r[3],0); // 801A46C4
  if (crb(c,2)) { goto L_801A4738; } // 801A46C8
  c->r[3]=c->r[31]+0x00000600u; // 801A46CC
  c->r[4]=0u+0x00000000u; // 801A46D0
  c->r[5]=0u+0x00000000u; // 801A46D4
  c->lr=0x801A46DCu; f_8005DCA0(c); // 801A46D8
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A46DC
  c->r[0]=0u+0x00000200u; // 801A46E0
  {uint32_t ea=c->r[31]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A46E4
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A46E8
  goto L_801A4738; // 801A46EC
L_801A46F0:;
  c->r[3]=c->r[3]+0x00000354u; // 801A46F0
  c->lr=0x801A46F8u; f_800667AC(c); // 801A46F4
  cmps(c,0,(int32_t)c->r[3],0); // 801A46F8
  if (crb(c,2)) { goto L_801A4738; } // 801A46FC
  c->r[3]=c->r[31]|c->r[31]; // 801A4700
  c->r[4]=0u+0x00000001u; // 801A4704
  c->lr=0x801A470Cu; f_8005EA70(c); // 801A4708
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 801A470C
  c->r[4]=0u+0x00000001u; // 801A4710
  c->lr=0x801A4718u; f_800C3068(c); // 801A4714
  c->r[3]=c->r[31]|c->r[31]; // 801A4718
  c->r[4]=0u+0x00000002u; // 801A471C
  c->lr=0x801A4724u; f_801A37AC(c); // 801A4720
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A4724
  c->r[3]=c->r[31]|c->r[31]; // 801A4728
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A472C
  c->ctr=c->r[12]; // 801A4730
  if (true) { c->lr=0x801A4738u; dispatch(c,c->ctr); } // 801A4734
L_801A4738:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A473C
  c->lr=c->r[0]; // 801A4740
  c->r[1]=c->r[1]+0x00000010u; // 801A4744
  return; // 801A4748
}

// fn_801A474C
void f_801A474C(Ctx* __restrict c) {
  trace_call(0x801A474Cu);
  c->r[5]=rotl(c->r[4],29)&0x1FFFFFFCu; // 801A474C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801A4750
  c->r[3]=c->r[3]+c->r[5]; // 801A4754
  c->r[3]=R32(c->r[3]+0x00000600u); // 801A4758
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801A475C
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801A4760
  return; // 801A4764
}

// fn_801A4768
void f_801A4768(Ctx* __restrict c) {
  trace_call(0x801A4768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4768
  c->r[0]=c->lr; // 801A476C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4770
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4774
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A4778
  c->r[30]=c->r[3]|c->r[3]; // 801A477C
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A4780
  cmps(c,0,(int32_t)c->r[0],0); // 801A4784
  if (crb(c,2)) { goto L_801A47A0; } // 801A4788
  cmps(c,0,(int32_t)c->r[0],80); // 801A478C
  if (crb(c,2)) { goto L_801A47C8; } // 801A4790
  cmps(c,0,(int32_t)c->r[0],256); // 801A4794
  if (crb(c,2)) { goto L_801A47E4; } // 801A4798
  goto L_801A4884; // 801A479C
L_801A47A0:;
  c->r[4]=0u+0x00000000u; // 801A47A0
  c->lr=0x801A47A8u; f_801A37C8(c); // 801A47A4
  c->r[3]=c->r[30]|c->r[30]; // 801A47A8
  c->r[31]=0u+0x00000100u; // 801A47AC
  c->lr=0x801A47B4u; f_801A860C(c); // 801A47B0
  cmps(c,0,(int32_t)c->r[3],256); // 801A47B4
  if (!crb(c,2)) { goto L_801A47C0; } // 801A47B8
  c->r[31]=0u+0x00000050u; // 801A47BC
L_801A47C0:;
  W32(c->r[30]+0x0000055Cu,c->r[31]); // 801A47C0
  goto L_801A4884; // 801A47C4
L_801A47C8:;
  c->r[3]=c->r[3]+0x00000354u; // 801A47C8
  c->lr=0x801A47D0u; f_800667AC(c); // 801A47CC
  cmps(c,0,(int32_t)c->r[3],0); // 801A47D0
  if (crb(c,2)) { goto L_801A4884; } // 801A47D4
  c->r[0]=0u+0x00000000u; // 801A47D8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A47DC
  goto L_801A4884; // 801A47E0
L_801A47E4:;
  c->r[0]=R32(c->r[3]+0x00000604u); // 801A47E4
  c->r[31]=0u+0x00000000u; // 801A47E8
  cmps(c,0,(int32_t)c->r[0],1); // 801A47EC
  if (crb(c,2)) { goto L_801A4808; } // 801A47F0
  {uint32_t ea=c->r[3]+0x000006BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A47F4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A47F8
  fcmp(c,0,c->f[1],c->f[0]); // 801A47FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801A4800
  if (!crb(c,2)) { goto L_801A4840; } // 801A4804
L_801A4808:;
  c->r[3]=c->r[30]|c->r[30]; // 801A4808
  c->r[4]=0u+0x00000000u; // 801A480C
  c->lr=0x801A4814u; f_801A474C(c); // 801A4810
  cmps(c,0,(int32_t)c->r[3],0); // 801A4814
  if (crb(c,2)) { goto L_801A4854; } // 801A4818
  c->r[3]=c->r[30]|c->r[30]; // 801A481C
  c->r[4]=0u+0x00000002u; // 801A4820
  c->lr=0x801A4828u; f_801A37AC(c); // 801A4824
  c->r[3]=c->r[30]+0x00000600u; // 801A4828
  c->r[4]=0u+0x00000000u; // 801A482C
  c->r[5]=0u+0x00000000u; // 801A4830
  c->lr=0x801A4838u; f_8005DCA0(c); // 801A4834
  c->r[31]=0u+0x00000001u; // 801A4838
  goto L_801A4854; // 801A483C
L_801A4840:;
  {uint32_t ea=c->r[3]+0x00000558u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4840
  fcmp(c,0,c->f[0],c->f[1]); // 801A4844
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801A4848
  if (!crb(c,2)) { goto L_801A4854; } // 801A484C
  c->r[31]=0u+0x00000001u; // 801A4850
L_801A4854:;
  cmps(c,0,(int32_t)c->r[31],0); // 801A4854
  if (crb(c,2)) { goto L_801A4884; } // 801A4858
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 801A485C
  c->r[4]=0u+0x00000001u; // 801A4860
  c->r[5]=0u+0x00000000u; // 801A4864
  c->r[3]=c->r[3]+0x000000C4u; // 801A4868
  c->lr=0x801A4870u; f_8005DCA0(c); // 801A486C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A4870
  c->r[3]=c->r[30]|c->r[30]; // 801A4874
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A4878
  c->ctr=c->r[12]; // 801A487C
  if (true) { c->lr=0x801A4884u; dispatch(c,c->ctr); } // 801A4880
L_801A4884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A4888
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A488C
  c->lr=c->r[0]; // 801A4890
  c->r[1]=c->r[1]+0x00000010u; // 801A4894
  return; // 801A4898
}

// fn_801A489C
void f_801A489C(Ctx* __restrict c) {
  trace_call(0x801A489Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A489C
  c->r[0]=c->lr; // 801A48A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A48A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A48A8
  c->r[31]=c->r[3]|c->r[3]; // 801A48AC
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A48B0
  cmps(c,0,(int32_t)c->r[0],0); // 801A48B4
  if (crb(c,2)) { goto L_801A48C8; } // 801A48B8
  cmps(c,0,(int32_t)c->r[0],256); // 801A48BC
  if (crb(c,2)) { goto L_801A48E4; } // 801A48C0
  goto L_801A4908; // 801A48C4
L_801A48C8:;
  c->r[4]=0u+0x00000001u; // 801A48C8
  c->lr=0x801A48D0u; f_801A37C8(c); // 801A48CC
  c->r[3]=c->r[31]|c->r[31]; // 801A48D0
  c->lr=0x801A48D8u; f_801A860C(c); // 801A48D4
  c->r[0]=0u+0x00000100u; // 801A48D8
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A48DC
  goto L_801A4908; // 801A48E0
L_801A48E4:;
  c->r[3]=c->r[3]+0x00000354u; // 801A48E4
  c->lr=0x801A48ECu; f_800667AC(c); // 801A48E8
  cmps(c,0,(int32_t)c->r[3],0); // 801A48EC
  if (crb(c,2)) { goto L_801A4908; } // 801A48F0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A48F4
  c->r[3]=c->r[31]|c->r[31]; // 801A48F8
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A48FC
  c->ctr=c->r[12]; // 801A4900
  if (true) { c->lr=0x801A4908u; dispatch(c,c->ctr); } // 801A4904
L_801A4908:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A490C
  c->lr=c->r[0]; // 801A4910
  c->r[1]=c->r[1]+0x00000010u; // 801A4914
  return; // 801A4918
}

// fn_801A491C
void f_801A491C(Ctx* __restrict c) {
  trace_call(0x801A491Cu);
  {uint32_t ea=c->r[1]+0xFFFFFB10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A491C
  c->r[0]=c->lr; // 801A4920
  W32(c->r[1]+0x000004F4u,c->r[0]); // 801A4924
  c->r[11]=c->r[1]+0x000004D0u; // 801A4928
  {uint32_t ea=c->r[1]+0x000004E0u; WF64(ea,c->f[31]);} // 801A492C
  {uint32_t ea=c->r[1]+0x000004E8u; psq_store(c,31,ea,0,0);} // 801A4930
  {uint32_t ea=c->r[1]+0x000004D0u; WF64(ea,c->f[30]);} // 801A4934
  {uint32_t ea=c->r[1]+0x000004D8u; psq_store(c,30,ea,0,0);} // 801A4938
  c->lr=0x801A4940u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A493C
  c->r[31]=c->r[3]|c->r[3]; // 801A4940
  c->r[3]=c->r[1]+0x00000160u; // 801A4944
  c->lr=0x801A494Cu; f_8006585C(c); // 801A4948
  c->r[0]=R32(c->r[31]+0x00000614u); // 801A494C
  cmps(c,0,(int32_t)c->r[0],0); // 801A4950
  if (!crb(c,2)) { goto L_801A4DF4; } // 801A4954
  c->r[0]=R32(c->r[31]+0x0000055Cu); // 801A4958
  cmps(c,0,(int32_t)c->r[0],0); // 801A495C
  if (crb(c,2)) { goto L_801A4988; } // 801A4960
  cmps(c,0,(int32_t)c->r[0],16); // 801A4964
  if (crb(c,2)) { goto L_801A4A2C; } // 801A4968
  cmps(c,0,(int32_t)c->r[0],256); // 801A496C
  if (crb(c,2)) { goto L_801A4A70; } // 801A4970
  cmps(c,0,(int32_t)c->r[0],336); // 801A4974
  if (crb(c,2)) { goto L_801A4A9C; } // 801A4978
  cmps(c,0,(int32_t)c->r[0],512); // 801A497C
  if (crb(c,2)) { goto L_801A4BA0; } // 801A4980
  goto L_801A50B4; // 801A4984
L_801A4988:;
  c->r[28]=0u+0x80760000u; // 801A4988
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A498C
  c->r[3]=c->r[1]+0x00000118u; // 801A4990
  c->r[4]=c->r[28]+0xFFFF9C9Cu; // 801A4994
  c->lr=0x801A499Cu; f_8005ED34(c); // 801A4998
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A499C
  c->r[4]=c->r[31]|c->r[31]; // 801A49A0
  c->r[3]=c->r[1]+0x00000124u; // 801A49A4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A49A8
  c->ctr=c->r[12]; // 801A49AC
  if (true) { c->lr=0x801A49B4u; dispatch(c,c->ctr); } // 801A49B0
  c->r[3]=c->r[1]+0x00000154u; // 801A49B4
  c->r[4]=c->r[1]+0x00000124u; // 801A49B8
  c->r[5]=c->r[1]+0x00000118u; // 801A49BC
  c->lr=0x801A49C4u; f_80073ACC(c); // 801A49C0
  {uint32_t ea=c->r[31]+0x000006D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A49C4
  c->r[3]=c->r[1]+0x00000100u; // 801A49C8
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A49CC
  c->r[4]=c->r[28]+0xFFFF9C9Cu; // 801A49D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801A49D4
  c->lr=0x801A49DCu; f_8005ED34(c); // 801A49D8
  c->r[3]=c->r[1]+0x0000010Cu; // 801A49DC
  c->r[4]=c->r[1]+0x00000154u; // 801A49E0
  c->r[5]=c->r[1]+0x00000100u; // 801A49E4
  c->lr=0x801A49ECu; f_80073ACC(c); // 801A49E8
  c->r[3]=c->r[1]+0x00000154u; // 801A49EC
  c->r[4]=c->r[1]+0x0000010Cu; // 801A49F0
  c->r[5]=c->r[1]+0x00000160u; // 801A49F4
  c->lr=0x801A49FCu; f_8005EB5C(c); // 801A49F8
  cmps(c,0,(int32_t)c->r[3],0); // 801A49FC
  if (crb(c,2)) { goto L_801A4A24; } // 801A4A00
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A4A04
  c->r[3]=c->r[31]|c->r[31]; // 801A4A08
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A4A0C
  c->ctr=c->r[12]; // 801A4A10
  if (true) { c->lr=0x801A4A18u; dispatch(c,c->ctr); } // 801A4A14
  c->r[0]=0u+0x00000000u; // 801A4A18
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4A1C
  goto L_801A50BC; // 801A4A20
L_801A4A24:;
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4A24
  {uint32_t ea=c->r[31]+0x00000564u; WF32(ea,c->f[0]);} // 801A4A28
L_801A4A2C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4A2C
  c->lr=0x801A4A34u; f_801A8858(c); // 801A4A30
  c->r[3]=c->r[31]|c->r[31]; // 801A4A34
  c->r[4]=0u+0x00000000u; // 801A4A38
  c->lr=0x801A4A40u; f_8005EA70(c); // 801A4A3C
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4A40
  c->r[3]=c->r[31]+0x000006ACu; // 801A4A44
  {uint32_t ea=c->r[13]+0xFFFF8D20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A4A48
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A4A4C
  c->lr=0x801A4A54u; f_800A7B08(c); // 801A4A50
  c->r[3]=c->r[31]|c->r[31]; // 801A4A54
  c->r[4]=0u+0x00007D82u; // 801A4A58
  c->r[5]=0u+0x00000001u; // 801A4A5C
  c->lr=0x801A4A64u; f_80064744(c); // 801A4A60
  c->r[0]=0u+0x00000100u; // 801A4A64
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A4A68
  goto L_801A50B4; // 801A4A6C
L_801A4A70:;
  c->r[3]=c->r[31]+0x00000354u; // 801A4A70
  c->lr=0x801A4A78u; f_800667AC(c); // 801A4A74
  cmps(c,0,(int32_t)c->r[3],0); // 801A4A78
  if (crb(c,2)) { goto L_801A50B4; } // 801A4A7C
  c->r[3]=c->r[31]|c->r[31]; // 801A4A80
  c->r[4]=0u+0x00007D87u; // 801A4A84
  c->r[5]=0u+0x00000001u; // 801A4A88
  c->lr=0x801A4A90u; f_80064744(c); // 801A4A8C
  c->r[0]=0u+0x00000150u; // 801A4A90
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A4A94
  goto L_801A50B4; // 801A4A98
L_801A4A9C:;
  c->r[3]=c->r[31]+0x000006ACu; // 801A4A9C
  c->lr=0x801A4AA4u; f_800A7B64(c); // 801A4AA0
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 801A4AA4
  c->r[3]=c->r[1]+0x000000F4u; // 801A4AA8
  c->r[4]=c->r[4]+0x000000A8u; // 801A4AAC
  c->lr=0x801A4AB4u; f_8005CD7C(c); // 801A4AB0
  c->r[3]=c->r[1]+0x00000148u; // 801A4AB4
  c->r[4]=c->r[1]+0x000000F4u; // 801A4AB8
  c->lr=0x801A4AC0u; f_8005FC20(c); // 801A4ABC
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4AC0
  c->r[3]=c->r[1]+0x00000148u; // 801A4AC4
  c->r[5]=0u+0x806A0000u; // 801A4AC8
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 801A4ACC
  c->r[4]=c->r[3]|c->r[3]; // 801A4AD0
  c->r[5]=c->r[5]+0x00000AA8u; // 801A4AD4
  c->lr=0x801A4ADCu; f_8030E0BC(c); // 801A4AD8
  {uint32_t ea=c->r[13]+0xFFFF8D24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4ADC
  c->r[3]=c->r[1]+0x00000148u; // 801A4AE0
  c->lr=0x801A4AE8u; f_800774A8(c); // 801A4AE4
  c->r[28]=0u+0x00000000u; // 801A4AE8
  W8(c->r[1]+0x00000008u,c->r[28]); // 801A4AEC
  c->r[3]=c->r[1]+0x00000008u; // 801A4AF0
  c->lr=0x801A4AF8u; f_8004714C(c); // 801A4AF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A4AF8
  c->r[3]=c->r[1]+0x0000000Cu; // 801A4AFC
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 801A4B00
  c->lr=0x801A4B08u; f_8004714C(c); // 801A4B04
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 801A4B08
  c->r[3]=c->r[31]+0x000006ACu; // 801A4B0C
  c->lr=0x801A4B14u; f_800A7BEC(c); // 801A4B10
  c->f[2]=-c->f[1]; // 801A4B14
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4B18
  c->f[1]=c->f[31]; // 801A4B1C
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 801A4B20
  c->r[3]=c->r[1]+0x000000D0u; // 801A4B24
  c->r[4]=c->r[1]+0x00000148u; // 801A4B28
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 801A4B2C
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 801A4B30
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[2]);} // 801A4B34
  c->lr=0x801A4B3Cu; f_8005ED34(c); // 801A4B38
  c->r[3]=c->r[1]+0x000000E8u; // 801A4B3C
  c->r[4]=c->r[1]+0x000000DCu; // 801A4B40
  c->r[5]=c->r[1]+0x000000D0u; // 801A4B44
  c->lr=0x801A4B4Cu; f_80073ACC(c); // 801A4B48
  c->r[3]=c->r[31]|c->r[31]; // 801A4B4C
  c->r[4]=c->r[1]+0x000000E8u; // 801A4B50
  c->lr=0x801A4B58u; f_80083340(c); // 801A4B54
  c->r[3]=c->r[31]+0x00000354u; // 801A4B58
  c->lr=0x801A4B60u; f_800667AC(c); // 801A4B5C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4B60
  if (crb(c,2)) { goto L_801A50B4; } // 801A4B64
  c->r[3]=c->r[31]|c->r[31]; // 801A4B68
  c->lr=0x801A4B70u; f_8005EA80(c); // 801A4B6C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4B70
  if (crb(c,2)) { goto L_801A50B4; } // 801A4B74
  c->r[3]=c->r[31]|c->r[31]; // 801A4B78
  c->r[4]=0u+0x00000001u; // 801A4B7C
  c->lr=0x801A4B84u; f_8005EA70(c); // 801A4B80
  c->r[3]=c->r[31]|c->r[31]; // 801A4B84
  c->r[4]=0u+0x00007D8Cu; // 801A4B88
  c->r[5]=0u+0x00000001u; // 801A4B8C
  c->lr=0x801A4B94u; f_80064744(c); // 801A4B90
  c->r[0]=0u+0x00000200u; // 801A4B94
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A4B98
  goto L_801A50B4; // 801A4B9C
L_801A4BA0:;
  c->r[3]=c->r[31]+0x00000354u; // 801A4BA0
  c->lr=0x801A4BA8u; f_800667AC(c); // 801A4BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801A4BA8
  if (crb(c,2)) { goto L_801A50B4; } // 801A4BAC
  {uint32_t ea=c->r[31]+0x00000564u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4BB0
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4BB4
  c->r[0]=R32(c->r[31]+0x000006C8u); // 801A4BB8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A4BBC
  {uint32_t ea=c->r[31]+0x00000564u; WF32(ea,c->f[0]);} // 801A4BC0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801A4BC4
  {uint32_t ea=c->r[1]+0x000004B0u; WF64(ea,c->f[0]);} // 801A4BC8
  c->r[3]=R32(c->r[1]+0x000004B4u); // 801A4BCC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801A4BD0
  if (!crb(c,0)) { goto L_801A4BE4; } // 801A4BD4
  c->r[0]=0u+0x00000010u; // 801A4BD8
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A4BDC
  goto L_801A50B4; // 801A4BE0
L_801A4BE4:;
  c->r[0]=R32(c->r[31]+0x00000604u); // 801A4BE4
  cmps(c,0,(int32_t)c->r[0],4); // 801A4BE8
  if (!crb(c,2)) { goto L_801A4DDC; } // 801A4BEC
  c->lr=0x801A4BF4u; f_803B220C(c); // 801A4BF0
  c->r[3]=c->r[3]^0x80000000u; // 801A4BF4
  c->r[0]=0u+0x43300000u; // 801A4BF8
  W32(c->r[1]+0x000004B4u,c->r[3]); // 801A4BFC
  c->r[27]=0u+0x00000000u; // 801A4C00
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[2]=RF64(ea);} // 801A4C04
  c->r[30]=0u+0x00000000u; // 801A4C08
  W32(c->r[1]+0x000004B0u,c->r[0]); // 801A4C0C
  c->r[29]=0u+0x80760000u; // 801A4C10
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4C14
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[1]=RF64(ea);} // 801A4C18
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A4C1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801A4C20
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 801A4C24
L_801A4C28:;
  c->r[3]=c->r[31]+c->r[30]; // 801A4C28
  {uint32_t ea=c->r[3]+0x00000658u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4C2C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801A4C30
  fcmp(c,0,c->f[30],c->f[31]); // 801A4C34
  if (crb(c,1)) { goto L_801A4DCC; } // 801A4C38
  cmps(c,0,(int32_t)c->r[27],0); // 801A4C3C
  if (crb(c,2)) { goto L_801A4C68; } // 801A4C40
  cmps(c,0,(int32_t)c->r[27],1); // 801A4C44
  if (crb(c,2)) { goto L_801A4C7C; } // 801A4C48
  cmps(c,0,(int32_t)c->r[27],2); // 801A4C4C
  if (crb(c,2)) { goto L_801A4C90; } // 801A4C50
  cmps(c,0,(int32_t)c->r[27],3); // 801A4C54
  if (crb(c,2)) { goto L_801A4CA4; } // 801A4C58
  cmps(c,0,(int32_t)c->r[27],4); // 801A4C5C
  if (crb(c,2)) { goto L_801A4CC4; } // 801A4C60
  goto L_801A4DCC; // 801A4C64
L_801A4C68:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4C68
  c->lr=0x801A4C70u; f_801A5458(c); // 801A4C6C
  c->r[0]=0u+0x00000000u; // 801A4C70
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4C74
  goto L_801A50BC; // 801A4C78
L_801A4C7C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4C7C
  c->lr=0x801A4C84u; f_801A53A8(c); // 801A4C80
  c->r[0]=0u+0x00000000u; // 801A4C84
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4C88
  goto L_801A50BC; // 801A4C8C
L_801A4C90:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4C90
  c->lr=0x801A4C98u; f_801A52F8(c); // 801A4C94
  c->r[0]=0u+0x00000000u; // 801A4C98
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4C9C
  goto L_801A50BC; // 801A4CA0
L_801A4CA4:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4CA4
  c->r[4]=0u+0x00000000u; // 801A4CA8
  c->lr=0x801A4CB0u; f_801A3838(c); // 801A4CAC
  c->r[3]=c->r[31]|c->r[31]; // 801A4CB0
  c->lr=0x801A4CB8u; f_801A5244(c); // 801A4CB4
  c->r[0]=0u+0x00000000u; // 801A4CB8
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4CBC
  goto L_801A50BC; // 801A4CC0
L_801A4CC4:;
  {uint32_t ea=c->r[2]+0xFFFFC444u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4CC4
  c->r[3]=c->r[1]+0x000000B8u; // 801A4CC8
  c->r[4]=c->r[29]+0xFFFF9C9Cu; // 801A4CCC
  c->r[26]=0u+0x00000000u; // 801A4CD0
  c->lr=0x801A4CD8u; f_8005ED34(c); // 801A4CD4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A4CD8
  c->r[4]=c->r[31]|c->r[31]; // 801A4CDC
  c->r[3]=c->r[1]+0x000000C4u; // 801A4CE0
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A4CE4
  c->ctr=c->r[12]; // 801A4CE8
  if (true) { c->lr=0x801A4CF0u; dispatch(c,c->ctr); } // 801A4CEC
  c->r[3]=c->r[1]+0x0000013Cu; // 801A4CF0
  c->r[4]=c->r[1]+0x000000C4u; // 801A4CF4
  c->r[5]=c->r[1]+0x000000B8u; // 801A4CF8
  c->lr=0x801A4D00u; f_80073ACC(c); // 801A4CFC
  c->lr=0x801A4D04u; f_803B220C(c); // 801A4D00
  c->r[3]=c->r[3]&0x00000000u; cr0(c,c->r[3]); // 801A4D04
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801A4D08
  c->r[28]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[28]); // 801A4D0C
  if (crb(c,2)) { goto L_801A4D5C; } // 801A4D10
  c->r[4]=c->r[31]|c->r[31]; // 801A4D14
  c->r[3]=c->r[1]+0x00000094u; // 801A4D18
  c->lr=0x801A4D20u; f_80061584(c); // 801A4D1C
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4D20
  c->r[3]=c->r[1]+0x000000A0u; // 801A4D24
  c->r[4]=c->r[1]+0x00000094u; // 801A4D28
  c->lr=0x801A4D30u; f_8005ED34(c); // 801A4D2C
  c->r[3]=c->r[1]+0x000000ACu; // 801A4D30
  c->r[4]=c->r[1]+0x0000013Cu; // 801A4D34
  c->r[5]=c->r[1]+0x000000A0u; // 801A4D38
  c->lr=0x801A4D40u; f_80073ACC(c); // 801A4D3C
  c->r[3]=c->r[1]+0x0000013Cu; // 801A4D40
  c->r[4]=c->r[1]+0x000000ACu; // 801A4D44
  c->r[5]=c->r[1]+0x00000160u; // 801A4D48
  c->lr=0x801A4D50u; f_8005EB5C(c); // 801A4D4C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4D50
  if (!crb(c,2)) { goto L_801A4D5C; } // 801A4D54
  c->r[26]=0u+0x00007FD5u; // 801A4D58
L_801A4D5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A4D5C
  if (!crb(c,2)) { goto L_801A4DAC; } // 801A4D60
  c->r[4]=c->r[31]|c->r[31]; // 801A4D64
  c->r[3]=c->r[1]+0x00000070u; // 801A4D68
  c->lr=0x801A4D70u; f_80061584(c); // 801A4D6C
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4D70
  c->r[3]=c->r[1]+0x0000007Cu; // 801A4D74
  c->r[4]=c->r[1]+0x00000070u; // 801A4D78
  c->lr=0x801A4D80u; f_8005ED34(c); // 801A4D7C
  c->r[3]=c->r[1]+0x00000088u; // 801A4D80
  c->r[4]=c->r[1]+0x0000013Cu; // 801A4D84
  c->r[5]=c->r[1]+0x0000007Cu; // 801A4D88
  c->lr=0x801A4D90u; f_8005FC60(c); // 801A4D8C
  c->r[3]=c->r[1]+0x0000013Cu; // 801A4D90
  c->r[4]=c->r[1]+0x00000088u; // 801A4D94
  c->r[5]=c->r[1]+0x00000160u; // 801A4D98
  c->lr=0x801A4DA0u; f_8005EB5C(c); // 801A4D9C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4DA0
  if (!crb(c,2)) { goto L_801A4DAC; } // 801A4DA4
  c->r[26]=0u+0x00007FD0u; // 801A4DA8
L_801A4DAC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801A4DAC
  if (crb(c,2)) { goto L_801A4DCC; } // 801A4DB0
  c->r[3]=c->r[31]|c->r[31]; // 801A4DB4
  c->lr=0x801A4DBCu; f_801A5194(c); // 801A4DB8
  W32(c->r[3]+0x00000010u,c->r[26]); // 801A4DBC
  c->r[0]=0u+0x00000000u; // 801A4DC0
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4DC4
  goto L_801A50BC; // 801A4DC8
L_801A4DCC:;
  c->r[27]=c->r[27]+0x00000001u; // 801A4DCC
  c->r[30]=c->r[30]+0x00000004u; // 801A4DD0
  cmps(c,0,(int32_t)c->r[27],5); // 801A4DD4
  if (crb(c,0)) { IRQCHK(c); goto L_801A4C28; } // 801A4DD8
L_801A4DDC:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A4DDC
  c->r[3]=c->r[31]|c->r[31]; // 801A4DE0
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A4DE4
  c->ctr=c->r[12]; // 801A4DE8
  if (true) { c->lr=0x801A4DF0u; dispatch(c,c->ctr); } // 801A4DEC
  goto L_801A50B4; // 801A4DF0
L_801A4DF4:;
  c->r[0]=R32(c->r[31]+0x0000055Cu); // 801A4DF4
  cmps(c,0,(int32_t)c->r[0],0); // 801A4DF8
  if (crb(c,2)) { goto L_801A4E0C; } // 801A4DFC
  cmps(c,0,(int32_t)c->r[0],256); // 801A4E00
  if (crb(c,2)) { goto L_801A4E74; } // 801A4E04
  goto L_801A50B4; // 801A4E08
L_801A4E0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4E0C
  c->lr=0x801A4E14u; f_8006052C(c); // 801A4E10
  c->r[3]=c->r[31]|c->r[31]; // 801A4E14
  c->r[4]=0u+0x00000002u; // 801A4E18
  c->lr=0x801A4E20u; f_801A37C8(c); // 801A4E1C
  c->r[3]=c->r[31]|c->r[31]; // 801A4E20
  c->r[4]=0u+0x00000004u; // 801A4E24
  c->lr=0x801A4E2Cu; f_801A3800(c); // 801A4E28
  c->r[3]=c->r[31]|c->r[31]; // 801A4E2C
  c->lr=0x801A4E34u; f_801A860C(c); // 801A4E30
  c->r[0]=0u+0x00000100u; // 801A4E34
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A4E38
  c->lr=0x801A4E40u; f_803B220C(c); // 801A4E3C
  c->r[3]=c->r[3]^0x80000000u; // 801A4E40
  c->r[0]=0u+0x43300000u; // 801A4E44
  W32(c->r[1]+0x000004B4u,c->r[3]); // 801A4E48
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[3]=RF64(ea);} // 801A4E4C
  W32(c->r[1]+0x000004B0u,c->r[0]); // 801A4E50
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4E54
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[2]=RF64(ea);} // 801A4E58
  {uint32_t ea=c->r[2]+0xFFFFC478u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4E5C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801A4E60
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801A4E64
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801A4E68
  {uint32_t ea=c->r[31]+0x00000560u; WF32(ea,c->f[0]);} // 801A4E6C
  goto L_801A50B4; // 801A4E70
L_801A4E74:;
  {uint32_t ea=c->r[31]+0x00000560u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4E74
  {uint32_t ea=c->r[31]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4E78
  fcmp(c,0,c->f[1],c->f[0]); // 801A4E7C
  if (crb(c,0)) { goto L_801A50B4; } // 801A4E80
  c->r[0]=R32(c->r[31]+0x00000604u); // 801A4E84
  cmps(c,0,(int32_t)c->r[0],4); // 801A4E88
  if (!crb(c,2)) { goto L_801A5098; } // 801A4E8C
  c->lr=0x801A4E94u; f_803B220C(c); // 801A4E90
  c->r[3]=c->r[3]^0x80000000u; // 801A4E94
  c->r[0]=0u+0x43300000u; // 801A4E98
  W32(c->r[1]+0x000004B4u,c->r[3]); // 801A4E9C
  c->r[26]=0u+0x00000000u; // 801A4EA0
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[2]=RF64(ea);} // 801A4EA4
  c->r[30]=0u+0x00000000u; // 801A4EA8
  W32(c->r[1]+0x000004B0u,c->r[0]); // 801A4EAC
  c->r[28]=0u+0x80760000u; // 801A4EB0
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4EB4
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[1]=RF64(ea);} // 801A4EB8
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A4EBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801A4EC0
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 801A4EC4
L_801A4EC8:;
  c->r[3]=c->r[31]+c->r[30]; // 801A4EC8
  {uint32_t ea=c->r[3]+0x00000658u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A4ECC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801A4ED0
  fcmp(c,0,c->f[30],c->f[31]); // 801A4ED4
  if (crb(c,1)) { goto L_801A5070; } // 801A4ED8
  cmpu(c,0,c->r[26],0x00000001u); // 801A4EDC
  if (!crb(c,1)) { goto L_801A4F00; } // 801A4EE0
  cmps(c,0,(int32_t)c->r[26],2); // 801A4EE4
  if (crb(c,2)) { goto L_801A4F14; } // 801A4EE8
  cmps(c,0,(int32_t)c->r[26],3); // 801A4EEC
  if (crb(c,2)) { goto L_801A4F28; } // 801A4EF0
  cmps(c,0,(int32_t)c->r[26],4); // 801A4EF4
  if (crb(c,2)) { goto L_801A4F48; } // 801A4EF8
  goto L_801A5070; // 801A4EFC
L_801A4F00:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4F00
  c->lr=0x801A4F08u; f_801A53A8(c); // 801A4F04
  c->r[0]=0u+0x00000000u; // 801A4F08
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4F0C
  goto L_801A50BC; // 801A4F10
L_801A4F14:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4F14
  c->lr=0x801A4F1Cu; f_801A50E4(c); // 801A4F18
  c->r[0]=0u+0x00000000u; // 801A4F1C
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4F20
  goto L_801A50BC; // 801A4F24
L_801A4F28:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4F28
  c->r[4]=0u+0x00000000u; // 801A4F2C
  c->lr=0x801A4F34u; f_801A3838(c); // 801A4F30
  c->r[3]=c->r[31]|c->r[31]; // 801A4F34
  c->lr=0x801A4F3Cu; f_801A5244(c); // 801A4F38
  c->r[0]=0u+0x00000000u; // 801A4F3C
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A4F40
  goto L_801A50BC; // 801A4F44
L_801A4F48:;
  {uint32_t ea=c->r[2]+0xFFFFC444u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4F48
  c->r[3]=c->r[1]+0x00000058u; // 801A4F4C
  c->r[4]=c->r[28]+0xFFFF9C9Cu; // 801A4F50
  c->lr=0x801A4F58u; f_8005ED34(c); // 801A4F54
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A4F58
  c->r[4]=c->r[31]|c->r[31]; // 801A4F5C
  c->r[3]=c->r[1]+0x00000064u; // 801A4F60
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A4F64
  c->ctr=c->r[12]; // 801A4F68
  if (true) { c->lr=0x801A4F70u; dispatch(c,c->ctr); } // 801A4F6C
  c->r[3]=c->r[1]+0x00000130u; // 801A4F70
  c->r[4]=c->r[1]+0x00000064u; // 801A4F74
  c->r[5]=c->r[1]+0x00000058u; // 801A4F78
  c->lr=0x801A4F80u; f_80073ACC(c); // 801A4F7C
  c->lr=0x801A4F84u; f_803B220C(c); // 801A4F80
  c->r[3]=c->r[3]&0x00000000u; cr0(c,c->r[3]); // 801A4F84
  c->r[27]=0u+0x00000000u; // 801A4F88
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801A4F8C
  c->r[29]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[29]); // 801A4F90
  if (crb(c,2)) { goto L_801A4FEC; } // 801A4F94
  c->r[4]=c->r[31]|c->r[31]; // 801A4F98
  c->r[3]=c->r[1]+0x00000034u; // 801A4F9C
  c->lr=0x801A4FA4u; f_80061584(c); // 801A4FA0
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A4FA4
  c->r[3]=c->r[1]+0x00000040u; // 801A4FA8
  c->r[4]=c->r[1]+0x00000034u; // 801A4FAC
  c->lr=0x801A4FB4u; f_8005ED34(c); // 801A4FB0
  c->r[3]=c->r[1]+0x0000004Cu; // 801A4FB4
  c->r[4]=c->r[1]+0x00000130u; // 801A4FB8
  c->r[5]=c->r[1]+0x00000040u; // 801A4FBC
  c->lr=0x801A4FC4u; f_80073ACC(c); // 801A4FC0
  c->r[3]=c->r[1]+0x00000130u; // 801A4FC4
  c->r[4]=c->r[1]+0x0000004Cu; // 801A4FC8
  c->r[5]=c->r[1]+0x00000160u; // 801A4FCC
  c->lr=0x801A4FD4u; f_8005EB5C(c); // 801A4FD0
  cmps(c,0,(int32_t)c->r[3],0); // 801A4FD4
  if (!crb(c,2)) { goto L_801A4FEC; } // 801A4FD8
  c->r[3]=c->r[31]|c->r[31]; // 801A4FDC
  c->r[4]=0u+0x00000003u; // 801A4FE0
  c->lr=0x801A4FE8u; f_801A3800(c); // 801A4FE4
  c->r[27]=0u+0x00000001u; // 801A4FE8
L_801A4FEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801A4FEC
  if (!crb(c,2)) { goto L_801A5048; } // 801A4FF0
  c->r[4]=c->r[31]|c->r[31]; // 801A4FF4
  c->r[3]=c->r[1]+0x00000010u; // 801A4FF8
  c->lr=0x801A5000u; f_80061584(c); // 801A4FFC
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A5000
  c->r[3]=c->r[1]+0x0000001Cu; // 801A5004
  c->r[4]=c->r[1]+0x00000010u; // 801A5008
  c->lr=0x801A5010u; f_8005ED34(c); // 801A500C
  c->r[3]=c->r[1]+0x00000028u; // 801A5010
  c->r[4]=c->r[1]+0x00000130u; // 801A5014
  c->r[5]=c->r[1]+0x0000001Cu; // 801A5018
  c->lr=0x801A5020u; f_8005FC60(c); // 801A501C
  c->r[3]=c->r[1]+0x00000130u; // 801A5020
  c->r[4]=c->r[1]+0x00000028u; // 801A5024
  c->r[5]=c->r[1]+0x00000160u; // 801A5028
  c->lr=0x801A5030u; f_8005EB5C(c); // 801A502C
  cmps(c,0,(int32_t)c->r[3],0); // 801A5030
  if (!crb(c,2)) { goto L_801A5048; } // 801A5034
  c->r[3]=c->r[31]|c->r[31]; // 801A5038
  c->r[4]=0u+0x00000002u; // 801A503C
  c->lr=0x801A5044u; f_801A3800(c); // 801A5040
  c->r[27]=0u+0x00000001u; // 801A5044
L_801A5048:;
  cmps(c,0,(int32_t)c->r[27],0); // 801A5048
  if (crb(c,2)) { goto L_801A5070; } // 801A504C
  c->r[3]=c->r[31]|c->r[31]; // 801A5050
  c->r[4]=0u+0x00000002u; // 801A5054
  c->lr=0x801A505Cu; f_801A37C8(c); // 801A5058
  c->r[3]=c->r[31]|c->r[31]; // 801A505C
  c->lr=0x801A5064u; f_80095784(c); // 801A5060
  c->r[0]=0u+0x00000000u; // 801A5064
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A5068
  goto L_801A50BC; // 801A506C
L_801A5070:;
  c->r[26]=c->r[26]+0x00000001u; // 801A5070
  c->r[30]=c->r[30]+0x00000004u; // 801A5074
  cmps(c,0,(int32_t)c->r[26],5); // 801A5078
  if (crb(c,0)) { IRQCHK(c); goto L_801A4EC8; } // 801A507C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A5080
  c->r[3]=c->r[31]|c->r[31]; // 801A5084
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A5088
  c->ctr=c->r[12]; // 801A508C
  if (true) { c->lr=0x801A5094u; dispatch(c,c->ctr); } // 801A5090
  goto L_801A50AC; // 801A5094
L_801A5098:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A5098
  c->r[3]=c->r[31]|c->r[31]; // 801A509C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A50A0
  c->ctr=c->r[12]; // 801A50A4
  if (true) { c->lr=0x801A50ACu; dispatch(c,c->ctr); } // 801A50A8
L_801A50AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801A50AC
  c->lr=0x801A50B4u; f_8006053C(c); // 801A50B0
L_801A50B4:;
  c->r[0]=0u+0x00000000u; // 801A50B4
  W32(c->r[1]+0x000004A8u,c->r[0]); // 801A50B8
L_801A50BC:;
  c->r[11]=c->r[1]+0x000004D0u; // 801A50BC
  {uint32_t ea=c->r[1]+0x000004E8u; psq_load(c,31,ea,0,0);} // 801A50C0
  {uint32_t ea=c->r[1]+0x000004E0u; c->f[31]=RF64(ea);} // 801A50C4
  {uint32_t ea=c->r[1]+0x000004D8u; psq_load(c,30,ea,0,0);} // 801A50C8
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[30]=RF64(ea);} // 801A50CC
  c->lr=0x801A50D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A50D0
  c->r[0]=R32(c->r[1]+0x000004F4u); // 801A50D4
  c->lr=c->r[0]; // 801A50D8
  c->r[1]=c->r[1]+0x000004F0u; // 801A50DC
  return; // 801A50E0
}

// fn_801A50E4
void f_801A50E4(Ctx* __restrict c) {
  trace_call(0x801A50E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A50E4
  c->r[0]=c->lr; // 801A50E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A50EC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A50F0
  c->r[31]=c->r[1]|c->r[1]; // 801A50F4
  c->r[28]=c->r[3]|c->r[3]; // 801A50F8
  c->lr=0x801A5100u; f_801A1FF8(c); // 801A50FC
  c->r[4]=c->r[3]|c->r[3]; // 801A5100
  c->r[3]=c->r[28]|c->r[28]; // 801A5104
  c->lr=0x801A510Cu; f_80062F4C(c); // 801A5108
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A510C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5110
  c->r[3]=c->r[28]+c->r[0]; // 801A5114
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A5118
  cmps(c,0,(int32_t)c->r[29],0); // 801A511C
  if (crb(c,2)) { goto L_801A5148; } // 801A5120
  c->r[30]=0u+0x00000000u; // 801A5124
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A5128
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A512C
  c->lr=0x801A5134u; f_801A1FF8(c); // 801A5130
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5134
  c->r[0]=c->r[13]+0xFFFF8D68u; // 801A5138
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A513C
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5140
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5144
L_801A5148:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A5148
  c->r[0]=0u+0x00000000u; // 801A514C
  c->r[3]=c->r[28]|c->r[28]; // 801A5150
  c->r[4]=c->r[29]|c->r[29]; // 801A5154
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A5158
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A515C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5160
  c->lr=0x801A5168u; f_8006306C(c); // 801A5164
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A5168
  c->r[10]=c->r[31]|c->r[31]; // 801A516C
  c->r[3]=c->r[29]|c->r[29]; // 801A5170
  c->r[0]=c->r[0]|0x40000000u; // 801A5174
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A5178
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A517C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5180
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5184
  c->r[1]=c->r[10]|c->r[10]; // 801A5188
  c->lr=c->r[0]; // 801A518C
  return; // 801A5190
}

// fn_801A5194
void f_801A5194(Ctx* __restrict c) {
  trace_call(0x801A5194u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5194
  c->r[0]=c->lr; // 801A5198
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A519C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A51A0
  c->r[31]=c->r[1]|c->r[1]; // 801A51A4
  c->r[28]=c->r[3]|c->r[3]; // 801A51A8
  c->lr=0x801A51B0u; f_801A2220(c); // 801A51AC
  c->r[4]=c->r[3]|c->r[3]; // 801A51B0
  c->r[3]=c->r[28]|c->r[28]; // 801A51B4
  c->lr=0x801A51BCu; f_80062F4C(c); // 801A51B8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A51BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A51C0
  c->r[3]=c->r[28]+c->r[0]; // 801A51C4
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A51C8
  cmps(c,0,(int32_t)c->r[29],0); // 801A51CC
  if (crb(c,2)) { goto L_801A51F8; } // 801A51D0
  c->r[30]=0u+0x00000000u; // 801A51D4
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A51D8
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A51DC
  c->lr=0x801A51E4u; f_801A2220(c); // 801A51E0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A51E4
  c->r[0]=c->r[13]+0xFFFF8D3Cu; // 801A51E8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A51EC
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A51F0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A51F4
L_801A51F8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A51F8
  c->r[0]=0u+0x00000000u; // 801A51FC
  c->r[3]=c->r[28]|c->r[28]; // 801A5200
  c->r[4]=c->r[29]|c->r[29]; // 801A5204
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A5208
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A520C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5210
  c->lr=0x801A5218u; f_8006306C(c); // 801A5214
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A5218
  c->r[10]=c->r[31]|c->r[31]; // 801A521C
  c->r[3]=c->r[29]|c->r[29]; // 801A5220
  c->r[0]=c->r[0]|0x40000000u; // 801A5224
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A5228
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A522C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5230
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5234
  c->r[1]=c->r[10]|c->r[10]; // 801A5238
  c->lr=c->r[0]; // 801A523C
  return; // 801A5240
}

// fn_801A5244
void f_801A5244(Ctx* __restrict c) {
  trace_call(0x801A5244u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5244
  c->r[0]=c->lr; // 801A5248
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A524C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5250
  c->r[31]=c->r[1]|c->r[1]; // 801A5254
  c->r[28]=c->r[3]|c->r[3]; // 801A5258
  c->lr=0x801A5260u; f_80062D0C(c); // 801A525C
  c->r[4]=c->r[3]|c->r[3]; // 801A5260
  c->r[3]=c->r[28]|c->r[28]; // 801A5264
  c->lr=0x801A526Cu; f_80062F4C(c); // 801A5268
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A526C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5270
  c->r[3]=c->r[28]+c->r[0]; // 801A5274
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A5278
  cmps(c,0,(int32_t)c->r[29],0); // 801A527C
  if (crb(c,2)) { goto L_801A52AC; } // 801A5280
  c->r[30]=0u+0x00000000u; // 801A5284
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A5288
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A528C
  c->lr=0x801A5294u; f_80062D0C(c); // 801A5290
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5294
  c->r[0]=c->r[13]+0xFFFF80ACu; // 801A5298
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A529C
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A52A0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A52A4
  W32(c->r[29]+0x00000010u,c->r[30]); // 801A52A8
L_801A52AC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A52AC
  c->r[0]=0u+0x00000000u; // 801A52B0
  c->r[3]=c->r[28]|c->r[28]; // 801A52B4
  c->r[4]=c->r[29]|c->r[29]; // 801A52B8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A52BC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A52C0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A52C4
  c->lr=0x801A52CCu; f_8006306C(c); // 801A52C8
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A52CC
  c->r[10]=c->r[31]|c->r[31]; // 801A52D0
  c->r[3]=c->r[29]|c->r[29]; // 801A52D4
  c->r[0]=c->r[0]|0x40000000u; // 801A52D8
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A52DC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A52E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A52E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A52E8
  c->r[1]=c->r[10]|c->r[10]; // 801A52EC
  c->lr=c->r[0]; // 801A52F0
  return; // 801A52F4
}

// fn_801A52F8
void f_801A52F8(Ctx* __restrict c) {
  trace_call(0x801A52F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A52F8
  c->r[0]=c->lr; // 801A52FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A5300
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5304
  c->r[31]=c->r[1]|c->r[1]; // 801A5308
  c->r[28]=c->r[3]|c->r[3]; // 801A530C
  c->lr=0x801A5314u; f_801A217C(c); // 801A5310
  c->r[4]=c->r[3]|c->r[3]; // 801A5314
  c->r[3]=c->r[28]|c->r[28]; // 801A5318
  c->lr=0x801A5320u; f_80062F4C(c); // 801A531C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A5320
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5324
  c->r[3]=c->r[28]+c->r[0]; // 801A5328
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A532C
  cmps(c,0,(int32_t)c->r[29],0); // 801A5330
  if (crb(c,2)) { goto L_801A535C; } // 801A5334
  c->r[30]=0u+0x00000000u; // 801A5338
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A533C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A5340
  c->lr=0x801A5348u; f_801A217C(c); // 801A5344
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5348
  c->r[0]=c->r[13]+0xFFFF8D70u; // 801A534C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A5350
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5354
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5358
L_801A535C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A535C
  c->r[0]=0u+0x00000000u; // 801A5360
  c->r[3]=c->r[28]|c->r[28]; // 801A5364
  c->r[4]=c->r[29]|c->r[29]; // 801A5368
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A536C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A5370
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5374
  c->lr=0x801A537Cu; f_8006306C(c); // 801A5378
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A537C
  c->r[10]=c->r[31]|c->r[31]; // 801A5380
  c->r[3]=c->r[29]|c->r[29]; // 801A5384
  c->r[0]=c->r[0]|0x40000000u; // 801A5388
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A538C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A5390
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5394
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5398
  c->r[1]=c->r[10]|c->r[10]; // 801A539C
  c->lr=c->r[0]; // 801A53A0
  return; // 801A53A4
}

// fn_801A53A8
void f_801A53A8(Ctx* __restrict c) {
  trace_call(0x801A53A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A53A8
  c->r[0]=c->lr; // 801A53AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A53B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A53B4
  c->r[31]=c->r[1]|c->r[1]; // 801A53B8
  c->r[28]=c->r[3]|c->r[3]; // 801A53BC
  c->lr=0x801A53C4u; f_801A19B8(c); // 801A53C0
  c->r[4]=c->r[3]|c->r[3]; // 801A53C4
  c->r[3]=c->r[28]|c->r[28]; // 801A53C8
  c->lr=0x801A53D0u; f_80062F4C(c); // 801A53CC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A53D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A53D4
  c->r[3]=c->r[28]+c->r[0]; // 801A53D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A53DC
  cmps(c,0,(int32_t)c->r[29],0); // 801A53E0
  if (crb(c,2)) { goto L_801A540C; } // 801A53E4
  c->r[30]=0u+0x00000000u; // 801A53E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A53EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A53F0
  c->lr=0x801A53F8u; f_801A19B8(c); // 801A53F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A53F8
  c->r[0]=c->r[13]+0xFFFF8D40u; // 801A53FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A5400
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5404
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5408
L_801A540C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A540C
  c->r[0]=0u+0x00000000u; // 801A5410
  c->r[3]=c->r[28]|c->r[28]; // 801A5414
  c->r[4]=c->r[29]|c->r[29]; // 801A5418
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A541C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A5420
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5424
  c->lr=0x801A542Cu; f_8006306C(c); // 801A5428
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A542C
  c->r[10]=c->r[31]|c->r[31]; // 801A5430
  c->r[3]=c->r[29]|c->r[29]; // 801A5434
  c->r[0]=c->r[0]|0x40000000u; // 801A5438
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A543C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A5440
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5444
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5448
  c->r[1]=c->r[10]|c->r[10]; // 801A544C
  c->lr=c->r[0]; // 801A5450
  return; // 801A5454
}

// fn_801A5458
void f_801A5458(Ctx* __restrict c) {
  trace_call(0x801A5458u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5458
  c->r[0]=c->lr; // 801A545C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A5460
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5464
  c->r[31]=c->r[1]|c->r[1]; // 801A5468
  c->r[28]=c->r[3]|c->r[3]; // 801A546C
  c->lr=0x801A5474u; f_801A1B30(c); // 801A5470
  c->r[4]=c->r[3]|c->r[3]; // 801A5474
  c->r[3]=c->r[28]|c->r[28]; // 801A5478
  c->lr=0x801A5480u; f_80062F4C(c); // 801A547C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A5480
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5484
  c->r[3]=c->r[28]+c->r[0]; // 801A5488
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A548C
  cmps(c,0,(int32_t)c->r[29],0); // 801A5490
  if (crb(c,2)) { goto L_801A54BC; } // 801A5494
  c->r[30]=0u+0x00000000u; // 801A5498
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A549C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A54A0
  c->lr=0x801A54A8u; f_801A1B30(c); // 801A54A4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A54A8
  c->r[0]=c->r[13]+0xFFFF8D48u; // 801A54AC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A54B0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A54B4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A54B8
L_801A54BC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A54BC
  c->r[0]=0u+0x00000000u; // 801A54C0
  c->r[3]=c->r[28]|c->r[28]; // 801A54C4
  c->r[4]=c->r[29]|c->r[29]; // 801A54C8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A54CC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A54D0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A54D4
  c->lr=0x801A54DCu; f_8006306C(c); // 801A54D8
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A54DC
  c->r[10]=c->r[31]|c->r[31]; // 801A54E0
  c->r[3]=c->r[29]|c->r[29]; // 801A54E4
  c->r[0]=c->r[0]|0x40000000u; // 801A54E8
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A54EC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A54F0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A54F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A54F8
  c->r[1]=c->r[10]|c->r[10]; // 801A54FC
  c->lr=c->r[0]; // 801A5500
  return; // 801A5504
}

// fn_801A5508
void f_801A5508(Ctx* __restrict c) {
  trace_call(0x801A5508u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5508
  c->r[0]=c->lr; // 801A550C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801A5510
  c->r[11]=c->r[1]+0x00000060u; // 801A5514
  c->lr=0x801A551Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A5518
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A551C
  c->r[29]=c->r[3]|c->r[3]; // 801A5520
  cmps(c,0,(int32_t)c->r[0],0); // 801A5524
  if (crb(c,2)) { goto L_801A5538; } // 801A5528
  cmps(c,0,(int32_t)c->r[0],256); // 801A552C
  if (crb(c,2)) { goto L_801A5590; } // 801A5530
  goto L_801A5650; // 801A5534
L_801A5538:;
  c->lr=0x801A553Cu; f_8006052C(c); // 801A5538
  c->r[3]=c->r[29]|c->r[29]; // 801A553C
  c->r[4]=0u+0x00000002u; // 801A5540
  c->lr=0x801A5548u; f_801A37C8(c); // 801A5544
  c->r[3]=c->r[29]|c->r[29]; // 801A5548
  c->lr=0x801A5550u; f_801A860C(c); // 801A554C
  c->lr=0x801A5554u; f_803B220C(c); // 801A5550
  c->r[0]=c->r[3]^0x80000000u; // 801A5554
  c->r[3]=0u+0x43300000u; // 801A5558
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801A555C
  c->r[0]=0u+0x00000100u; // 801A5560
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[3]=RF64(ea);} // 801A5564
  W32(c->r[1]+0x00000048u,c->r[3]); // 801A5568
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A556C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 801A5570
  {uint32_t ea=c->r[2]+0xFFFFC478u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A5574
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801A5578
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A557C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801A5580
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801A5584
  {uint32_t ea=c->r[29]+0x00000560u; WF32(ea,c->f[0]);} // 801A5588
  goto L_801A5650; // 801A558C
L_801A5590:;
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 801A5590
  c->r[31]=0u+0x00000000u; // 801A5594
  c->r[0]=R32(c->r[4]+0x000000A4u); // 801A5598
  cmps(c,0,(int32_t)c->r[0],2); // 801A559C
  if (!crb(c,0)) { goto L_801A55CC; } // 801A55A0
  c->r[4]=R32(c->r[3]+0x00000610u); // 801A55A4
  c->r[0]=0u+0x00000001u; // 801A55A8
  cmps(c,0,(int32_t)c->r[4],0); // 801A55AC
  if (crb(c,2)) { goto L_801A55C0; } // 801A55B0
  cmps(c,0,(int32_t)c->r[4],1); // 801A55B4
  if (crb(c,2)) { goto L_801A55C0; } // 801A55B8
  c->r[0]=0u+0x00000000u; // 801A55BC
L_801A55C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A55C0
  if (crb(c,2)) { goto L_801A55CC; } // 801A55C4
  c->r[31]=0u+0x00000001u; // 801A55C8
L_801A55CC:;
  c->r[3]=R32(c->r[3]+0x00000610u); // 801A55CC
  c->r[30]=0u+0x00000000u; // 801A55D0
  c->r[0]=0u+0x00000001u; // 801A55D4
  cmps(c,0,(int32_t)c->r[3],2); // 801A55D8
  if (crb(c,2)) { goto L_801A55EC; } // 801A55DC
  cmps(c,0,(int32_t)c->r[3],3); // 801A55E0
  if (crb(c,2)) { goto L_801A55EC; } // 801A55E4
  c->r[0]=0u+0x00000000u; // 801A55E8
L_801A55EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A55EC
  if (crb(c,2)) { goto L_801A5608; } // 801A55F0
  c->r[3]=c->r[29]|c->r[29]; // 801A55F4
  c->lr=0x801A55FCu; f_8005EA90(c); // 801A55F8
  cmps(c,0,(int32_t)c->r[3],0); // 801A55FC
  if (crb(c,2)) { goto L_801A5608; } // 801A5600
  c->r[30]=0u+0x00000001u; // 801A5604
L_801A5608:;
  {uint32_t ea=c->r[29]+0x00000560u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A5608
  {uint32_t ea=c->r[29]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A560C
  fcmp(c,0,c->f[1],c->f[0]); // 801A5610
  c->r[0]=c->cr; // 801A5614
  cmps(c,0,(int32_t)c->r[31],0); // 801A5618
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 801A561C
  if (!crb(c,2)) { goto L_801A5634; } // 801A5620
  cmps(c,0,(int32_t)c->r[30],0); // 801A5624
  if (!crb(c,2)) { goto L_801A5634; } // 801A5628
  cmps(c,0,(int32_t)c->r[0],0); // 801A562C
  if (crb(c,2)) { goto L_801A5650; } // 801A5630
L_801A5634:;
  c->r[3]=c->r[29]|c->r[29]; // 801A5634
  c->lr=0x801A563Cu; f_8006053C(c); // 801A5638
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A563C
  c->r[3]=c->r[29]|c->r[29]; // 801A5640
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A5644
  c->ctr=c->r[12]; // 801A5648
  if (true) { c->lr=0x801A5650u; dispatch(c,c->ctr); } // 801A564C
L_801A5650:;
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A5650
  c->r[3]=c->r[29]|c->r[29]; // 801A5654
  c->r[4]=c->r[1]+0x00000018u; // 801A5658
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A565C
  c->ctr=c->r[12]; // 801A5660
  if (true) { c->lr=0x801A5668u; dispatch(c,c->ctr); } // 801A5664
  c->r[4]=c->r[3]|c->r[3]; // 801A5668
  c->r[3]=c->r[1]+0x00000008u; // 801A566C
  c->lr=0x801A5674u; f_80060878(c); // 801A5670
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A5674
  c->r[3]=c->r[29]|c->r[29]; // 801A5678
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A567C
  c->r[4]=c->r[1]+0x00000008u; // 801A5680
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A5684
  c->lr=0x801A568Cu; f_800634E8(c); // 801A5688
  c->r[11]=c->r[1]+0x00000060u; // 801A568C
  c->lr=0x801A5694u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A5690
  c->r[0]=R32(c->r[1]+0x00000064u); // 801A5694
  c->lr=c->r[0]; // 801A5698
  c->r[1]=c->r[1]+0x00000060u; // 801A569C
  return; // 801A56A0
}

// fn_801A56A4
void f_801A56A4(Ctx* __restrict c) {
  trace_call(0x801A56A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A56A4
  c->r[0]=c->lr; // 801A56A8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801A56AC
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801A56B0
  c->r[31]=c->r[3]|c->r[3]; // 801A56B4
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A56B8
  cmps(c,0,(int32_t)c->r[0],0); // 801A56BC
  if (crb(c,2)) { goto L_801A56D0; } // 801A56C0
  cmps(c,0,(int32_t)c->r[0],256); // 801A56C4
  if (crb(c,2)) { goto L_801A5744; } // 801A56C8
  goto L_801A5828; // 801A56CC
L_801A56D0:;
  c->lr=0x801A56D4u; f_8006052C(c); // 801A56D0
  c->r[3]=c->r[31]|c->r[31]; // 801A56D4
  c->r[4]=0u+0x00000002u; // 801A56D8
  c->lr=0x801A56E0u; f_801A37C8(c); // 801A56DC
  c->r[0]=R32(c->r[31]+0x00000610u); // 801A56E0
  cmps(c,0,(int32_t)c->r[0],4); // 801A56E4
  if (!crb(c,2)) { goto L_801A56F8; } // 801A56E8
  c->r[3]=c->r[31]|c->r[31]; // 801A56EC
  c->r[4]=0u+0x00000000u; // 801A56F0
  c->lr=0x801A56F8u; f_801A3800(c); // 801A56F4
L_801A56F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801A56F8
  c->lr=0x801A5700u; f_801A860C(c); // 801A56FC
  c->lr=0x801A5704u; f_803B220C(c); // 801A5700
  c->r[0]=c->r[3]^0x80000000u; // 801A5704
  c->r[3]=0u+0x43300000u; // 801A5708
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801A570C
  c->r[0]=0u+0x00000100u; // 801A5710
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[3]=RF64(ea);} // 801A5714
  W32(c->r[1]+0x000000A8u,c->r[3]); // 801A5718
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A571C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801A5720
  {uint32_t ea=c->r[2]+0xFFFFC48Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A5724
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801A5728
  {uint32_t ea=c->r[2]+0xFFFFC488u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A572C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A5730
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801A5734
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801A5738
  {uint32_t ea=c->r[31]+0x00000560u; WF32(ea,c->f[0]);} // 801A573C
  goto L_801A5828; // 801A5740
L_801A5744:;
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801A5744
  c->r[4]=c->r[1]+0x00000048u; // 801A5748
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A574C
  c->ctr=c->r[12]; // 801A5750
  if (true) { c->lr=0x801A5758u; dispatch(c,c->ctr); } // 801A5754
  c->r[4]=c->r[3]|c->r[3]; // 801A5758
  c->r[3]=c->r[1]+0x00000014u; // 801A575C
  c->lr=0x801A5764u; f_80060F28(c); // 801A5760
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A5764
  c->r[3]=c->r[31]|c->r[31]; // 801A5768
  c->r[4]=c->r[1]+0x00000078u; // 801A576C
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A5770
  c->ctr=c->r[12]; // 801A5774
  if (true) { c->lr=0x801A577Cu; dispatch(c,c->ctr); } // 801A5778
  c->r[4]=c->r[3]|c->r[3]; // 801A577C
  c->r[3]=c->r[1]+0x0000002Cu; // 801A5780
  c->lr=0x801A5788u; f_80060878(c); // 801A5784
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A5788
  c->r[3]=c->r[1]+0x00000020u; // 801A578C
  c->r[4]=c->r[1]+0x00000014u; // 801A5790
  c->lr=0x801A5798u; f_8005ED34(c); // 801A5794
  c->r[3]=c->r[1]+0x00000038u; // 801A5798
  c->r[4]=c->r[1]+0x0000002Cu; // 801A579C
  c->r[5]=c->r[1]+0x00000020u; // 801A57A0
  c->lr=0x801A57A8u; f_80073ACC(c); // 801A57A4
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A57A8
  c->r[3]=c->r[31]|c->r[31]; // 801A57AC
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A57B0
  c->r[4]=c->r[1]+0x00000038u; // 801A57B4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A57B8
  c->lr=0x801A57C0u; f_800634E8(c); // 801A57BC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A57C0
  c->r[4]=c->r[31]|c->r[31]; // 801A57C4
  c->r[3]=c->r[1]+0x00000008u; // 801A57C8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A57CC
  c->ctr=c->r[12]; // 801A57D0
  if (true) { c->lr=0x801A57D8u; dispatch(c,c->ctr); } // 801A57D4
  c->r[5]=0u+0x80760000u; // 801A57D8
  c->r[3]=c->r[1]+0x00000038u; // 801A57DC
  c->r[4]=c->r[1]+0x00000008u; // 801A57E0
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 801A57E4
  c->lr=0x801A57ECu; f_8032B134(c); // 801A57E8
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A57EC
  fcmp(c,0,c->f[1],c->f[0]); // 801A57F0
  if (crb(c,0)) { goto L_801A580C; } // 801A57F4
  {uint32_t ea=c->r[31]+0x00000560u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A57F8
  {uint32_t ea=c->r[31]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A57FC
  fcmp(c,0,c->f[1],c->f[0]); // 801A5800
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801A5804
  if (!crb(c,2)) { goto L_801A5828; } // 801A5808
L_801A580C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A580C
  c->lr=0x801A5814u; f_8006053C(c); // 801A5810
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A5814
  c->r[3]=c->r[31]|c->r[31]; // 801A5818
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A581C
  c->ctr=c->r[12]; // 801A5820
  if (true) { c->lr=0x801A5828u; dispatch(c,c->ctr); } // 801A5824
L_801A5828:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801A5828
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801A582C
  c->lr=c->r[0]; // 801A5830
  c->r[1]=c->r[1]+0x000000C0u; // 801A5834
  return; // 801A5838
}

// fn_801A583C
void f_801A583C(Ctx* __restrict c) {
  trace_call(0x801A583Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A583C
  c->r[0]=c->lr; // 801A5840
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801A5844
  c->r[11]=c->r[1]+0x000000A0u; // 801A5848
  c->lr=0x801A5850u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A584C
  c->r[31]=c->r[1]|c->r[1]; // 801A5850
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A5854
  c->r[30]=c->r[3]|c->r[3]; // 801A5858
  cmps(c,0,(int32_t)c->r[0],0); // 801A585C
  if (crb(c,2)) { goto L_801A5870; } // 801A5860
  cmps(c,0,(int32_t)c->r[0],256); // 801A5864
  if (crb(c,2)) { goto L_801A5894; } // 801A5868
  goto L_801A5DD4; // 801A586C
L_801A5870:;
  c->r[0]=R32(c->r[3]+0x00000628u); // 801A5870
  cmps(c,0,(int32_t)c->r[0],0); // 801A5874
  if (!crb(c,0)) { goto L_801A588C; } // 801A5878
  c->r[4]=0u+0x00000002u; // 801A587C
  c->lr=0x801A5884u; f_801A37C8(c); // 801A5880
  c->r[3]=c->r[30]|c->r[30]; // 801A5884
  c->lr=0x801A588Cu; f_801A860C(c); // 801A5888
L_801A588C:;
  c->r[0]=0u+0x00000100u; // 801A588C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A5890
L_801A5894:;
  c->r[3]=c->r[31]+0x00000018u; // 801A5894
  c->r[4]=c->r[30]+0x000001B8u; // 801A5898
  c->r[28]=0u+0x00000001u; // 801A589C
  c->lr=0x801A58A4u; f_80060F28(c); // 801A58A0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A58A4
  c->r[4]=c->r[30]|c->r[30]; // 801A58A8
  c->r[3]=c->r[31]+0x00000024u; // 801A58AC
  c->r[29]=R32(c->r[30]+0x0000041Cu); // 801A58B0
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A58B4
  c->ctr=c->r[12]; // 801A58B8
  if (true) { c->lr=0x801A58C0u; dispatch(c,c->ctr); } // 801A58BC
  c->r[3]=c->r[29]|c->r[29]; // 801A58C0
  c->r[4]=c->r[31]+0x00000024u; // 801A58C4
  c->r[5]=c->r[31]+0x00000018u; // 801A58C8
  c->lr=0x801A58D0u; f_800C2D1C(c); // 801A58CC
  cmps(c,0,(int32_t)c->r[3],0); // 801A58D0
  if (!crb(c,2)) { goto L_801A58E8; } // 801A58D4
  c->r[0]=R8(c->r[30]+0x0000062Cu); // 801A58D8
  cmps(c,0,(int32_t)c->r[0],0); // 801A58DC
  if (!crb(c,2)) { goto L_801A58E8; } // 801A58E0
  c->r[28]=0u+0x00000000u; // 801A58E4
L_801A58E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A58E8
  if (crb(c,2)) { goto L_801A5900; } // 801A58EC
  c->r[3]=c->r[30]+0x00000628u; // 801A58F0
  c->r[4]=0u+0x00000000u; // 801A58F4
  c->r[5]=0u+0x00000008u; // 801A58F8
  c->lr=0x801A5900u; f_800043EC(c); // 801A58FC
L_801A5900:;
  c->r[0]=R32(c->r[30]+0x00000628u); // 801A5900
  cmps(c,0,(int32_t)c->r[0],0); // 801A5904
  if (crb(c,0)) { goto L_801A5DD4; } // 801A5908
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 801A590C
  c->r[4]=R32(c->r[30]+0x00000628u); // 801A5910
  c->lr=0x801A5918u; f_800C2EE0(c); // 801A5914
  c->r[4]=c->r[3]|c->r[3]; // 801A5918
  c->r[3]=c->r[31]+0x00000048u; // 801A591C
  c->r[5]=0u+0x00000000u; // 801A5920
  c->r[6]=0u+0x00000000u; // 801A5924
  c->r[7]=0u+0x00000000u; // 801A5928
  c->lr=0x801A5930u; f_800A7BF4(c); // 801A592C
  c->r[3]=R32(c->r[31]+0x00000048u); // 801A5930
  c->lr=0x801A5938u; f_801A1744(c); // 801A5934
  cmps(c,0,(int32_t)c->r[3],31); // 801A5938
  if (crb(c,2)) { goto L_801A5958; } // 801A593C
  c->r[0]=R32(c->r[30]+0x00000628u); // 801A5940
  cmps(c,0,(int32_t)c->r[0],0); // 801A5944
  if (crb(c,0)) { goto L_801A5958; } // 801A5948
  c->r[4]=R32(c->r[30]+0x00000628u); // 801A594C
  c->r[0]=c->r[4]+0x00000001u; // 801A5950
  W32(c->r[30]+0x00000628u,c->r[0]); // 801A5954
L_801A5958:;
  cmpu(c,0,c->r[3],0x0000001Fu); // 801A5958
  if (crb(c,1)) { goto L_801A5DD4; } // 801A595C
  c->r[4]=0u+0x806E0000u; // 801A5960
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A5964
  c->r[4]=c->r[4]+0x000020FCu; // 801A5968
  c->r[4]=R32(c->r[4]+c->r[0]); // 801A596C
  c->ctr=c->r[4]; // 801A5970
  if (true) { switch (c->ctr) { case 0x801A5978u: goto L_801A5978; case 0x801A59CCu: goto L_801A59CC; case 0x801A5A00u: goto L_801A5A00; case 0x801A5A34u: goto L_801A5A34; case 0x801A5A4Cu: goto L_801A5A4C; case 0x801A5A64u: goto L_801A5A64; case 0x801A5A7Cu: goto L_801A5A7C; case 0x801A5A98u: goto L_801A5A98; case 0x801A5AC8u: goto L_801A5AC8; case 0x801A5AF8u: goto L_801A5AF8; case 0x801A5B28u: goto L_801A5B28; case 0x801A5B58u: goto L_801A5B58; case 0x801A5B7Cu: goto L_801A5B7C; case 0x801A5BA0u: goto L_801A5BA0; case 0x801A5BB4u: goto L_801A5BB4; case 0x801A5BC8u: goto L_801A5BC8; case 0x801A5BE0u: goto L_801A5BE0; case 0x801A5BF8u: goto L_801A5BF8; case 0x801A5C10u: goto L_801A5C10; case 0x801A5C28u: goto L_801A5C28; case 0x801A5C40u: goto L_801A5C40; case 0x801A5C58u: goto L_801A5C58; case 0x801A5C6Cu: goto L_801A5C6C; case 0x801A5C80u: goto L_801A5C80; case 0x801A5C94u: goto L_801A5C94; case 0x801A5CA8u: goto L_801A5CA8; case 0x801A5CD0u: goto L_801A5CD0; case 0x801A5D4Cu: goto L_801A5D4C; case 0x801A5D60u: goto L_801A5D60; case 0x801A5D78u: goto L_801A5D78; case 0x801A5D9Cu: goto L_801A5D9C; case 0x801A5DD4u: goto L_801A5DD4; default: break; } dispatch(c,c->ctr); return; } // 801A5974
L_801A5978:;
  c->r[0]=0u+0xFFFFFFFFu; // 801A5978
  W32(c->r[30]+0x00000628u,c->r[0]); // 801A597C
  c->r[3]=c->r[30]|c->r[30]; // 801A5980
  c->lr=0x801A5988u; f_801A891C(c); // 801A5984
  cmps(c,0,(int32_t)c->r[3],0); // 801A5988
  if (crb(c,2)) { goto L_801A59B4; } // 801A598C
  c->r[3]=c->r[30]|c->r[30]; // 801A5990
  c->r[4]=0u+0x00000004u; // 801A5994
  c->lr=0x801A599Cu; f_801A37AC(c); // 801A5998
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A599C
  c->r[3]=c->r[30]|c->r[30]; // 801A59A0
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A59A4
  c->ctr=c->r[12]; // 801A59A8
  if (true) { c->lr=0x801A59B0u; dispatch(c,c->ctr); } // 801A59AC
  goto L_801A5DD4; // 801A59B0
L_801A59B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801A59B4
  c->r[4]=0u+0x00000002u; // 801A59B8
  c->lr=0x801A59C0u; f_801A37C8(c); // 801A59BC
  c->r[3]=c->r[30]|c->r[30]; // 801A59C0
  c->lr=0x801A59C8u; f_801A860C(c); // 801A59C4
  goto L_801A5DD4; // 801A59C8
L_801A59CC:;
  c->r[3]=c->r[31]+0x00000048u; // 801A59CC
  c->r[4]=0u+0x00000001u; // 801A59D0
  c->lr=0x801A59D8u; f_8007D0E0(c); // 801A59D4
  {uint32_t ea=c->r[30]+0x000006BCu; WF32(ea,c->f[1]);} // 801A59D8
  c->r[3]=c->r[30]|c->r[30]; // 801A59DC
  c->r[4]=0u+0x00000000u; // 801A59E0
  c->lr=0x801A59E8u; f_801A37E4(c); // 801A59E4
  c->r[3]=c->r[30]|c->r[30]; // 801A59E8
  c->lr=0x801A59F0u; f_8005E0F8(c); // 801A59EC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A59F0
  c->r[0]=c->r[0]|0x40000000u; // 801A59F4
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A59F8
  goto L_801A5DD4; // 801A59FC
L_801A5A00:;
  c->r[3]=c->r[31]+0x00000048u; // 801A5A00
  c->r[4]=0u+0x00000001u; // 801A5A04
  c->lr=0x801A5A0Cu; f_8007D0E0(c); // 801A5A08
  {uint32_t ea=c->r[30]+0x000006BCu; WF32(ea,c->f[1]);} // 801A5A0C
  c->r[3]=c->r[30]|c->r[30]; // 801A5A10
  c->r[4]=0u+0x00000001u; // 801A5A14
  c->lr=0x801A5A1Cu; f_801A37E4(c); // 801A5A18
  c->r[3]=c->r[30]|c->r[30]; // 801A5A1C
  c->lr=0x801A5A24u; f_8005E0F8(c); // 801A5A20
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A5A24
  c->r[0]=c->r[0]|0x40000000u; // 801A5A28
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A5A2C
  goto L_801A5DD4; // 801A5A30
L_801A5A34:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5A34
  c->r[4]=0u+0x00000000u; // 801A5A38
  c->lr=0x801A5A40u; f_801A3838(c); // 801A5A3C
  c->r[3]=c->r[30]|c->r[30]; // 801A5A40
  c->lr=0x801A5A48u; f_801A5244(c); // 801A5A44
  goto L_801A5DD4; // 801A5A48
L_801A5A4C:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5A4C
  c->r[4]=0u+0x00000001u; // 801A5A50
  c->lr=0x801A5A58u; f_801A3838(c); // 801A5A54
  c->r[3]=c->r[30]|c->r[30]; // 801A5A58
  c->lr=0x801A5A60u; f_801A5244(c); // 801A5A5C
  goto L_801A5DD4; // 801A5A60
L_801A5A64:;
  c->r[5]=0u+0x00000000u; // 801A5A64
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5A68
  c->r[3]=c->r[30]|c->r[30]; // 801A5A6C
  c->r[6]=c->r[5]|c->r[5]; // 801A5A70
  c->lr=0x801A5A78u; f_801A8DAC(c); // 801A5A74
  goto L_801A5DD4; // 801A5A78
L_801A5A7C:;
  c->r[3]=c->r[31]+0x00000048u; // 801A5A7C
  c->r[4]=0u+0x00000001u; // 801A5A80
  c->lr=0x801A5A88u; f_80094630(c); // 801A5A84
  W32(c->r[30]+0x000006C8u,c->r[3]); // 801A5A88
  c->r[3]=c->r[30]|c->r[30]; // 801A5A8C
  c->lr=0x801A5A94u; f_801A6038(c); // 801A5A90
  goto L_801A5DD4; // 801A5A94
L_801A5A98:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5A98
  c->r[4]=0u+0x00000002u; // 801A5A9C
  c->lr=0x801A5AA4u; f_801A37C8(c); // 801A5AA0
  c->r[3]=c->r[30]|c->r[30]; // 801A5AA4
  c->r[4]=0u+0x00000000u; // 801A5AA8
  c->lr=0x801A5AB0u; f_801A37E4(c); // 801A5AAC
  c->r[3]=c->r[30]|c->r[30]; // 801A5AB0
  c->r[4]=0u+0x00000000u; // 801A5AB4
  c->lr=0x801A5ABCu; f_801A3800(c); // 801A5AB8
  c->r[3]=c->r[30]|c->r[30]; // 801A5ABC
  c->lr=0x801A5AC4u; f_801A860C(c); // 801A5AC0
  goto L_801A5DD4; // 801A5AC4
L_801A5AC8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5AC8
  c->r[4]=0u+0x00000002u; // 801A5ACC
  c->lr=0x801A5AD4u; f_801A37C8(c); // 801A5AD0
  c->r[3]=c->r[30]|c->r[30]; // 801A5AD4
  c->r[4]=0u+0x00000000u; // 801A5AD8
  c->lr=0x801A5AE0u; f_801A37E4(c); // 801A5ADC
  c->r[3]=c->r[30]|c->r[30]; // 801A5AE0
  c->r[4]=0u+0x00000001u; // 801A5AE4
  c->lr=0x801A5AECu; f_801A3800(c); // 801A5AE8
  c->r[3]=c->r[30]|c->r[30]; // 801A5AEC
  c->lr=0x801A5AF4u; f_801A860C(c); // 801A5AF0
  goto L_801A5DD4; // 801A5AF4
L_801A5AF8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5AF8
  c->r[4]=0u+0x00000002u; // 801A5AFC
  c->lr=0x801A5B04u; f_801A37C8(c); // 801A5B00
  c->r[3]=c->r[30]|c->r[30]; // 801A5B04
  c->r[4]=0u+0x00000001u; // 801A5B08
  c->lr=0x801A5B10u; f_801A37E4(c); // 801A5B0C
  c->r[3]=c->r[30]|c->r[30]; // 801A5B10
  c->r[4]=0u+0x00000000u; // 801A5B14
  c->lr=0x801A5B1Cu; f_801A3800(c); // 801A5B18
  c->r[3]=c->r[30]|c->r[30]; // 801A5B1C
  c->lr=0x801A5B24u; f_801A860C(c); // 801A5B20
  goto L_801A5DD4; // 801A5B24
L_801A5B28:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5B28
  c->r[4]=0u+0x00000002u; // 801A5B2C
  c->lr=0x801A5B34u; f_801A37C8(c); // 801A5B30
  c->r[3]=c->r[30]|c->r[30]; // 801A5B34
  c->r[4]=0u+0x00000001u; // 801A5B38
  c->lr=0x801A5B40u; f_801A37E4(c); // 801A5B3C
  c->r[3]=c->r[30]|c->r[30]; // 801A5B40
  c->r[4]=0u+0x00000001u; // 801A5B44
  c->lr=0x801A5B4Cu; f_801A3800(c); // 801A5B48
  c->r[3]=c->r[30]|c->r[30]; // 801A5B4C
  c->lr=0x801A5B54u; f_801A860C(c); // 801A5B50
  goto L_801A5DD4; // 801A5B54
L_801A5B58:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5B58
  c->r[4]=0u+0x00000002u; // 801A5B5C
  c->lr=0x801A5B64u; f_801A37C8(c); // 801A5B60
  c->r[3]=c->r[30]|c->r[30]; // 801A5B64
  c->r[4]=0u+0x00000003u; // 801A5B68
  c->lr=0x801A5B70u; f_801A3800(c); // 801A5B6C
  c->r[3]=c->r[30]|c->r[30]; // 801A5B70
  c->lr=0x801A5B78u; f_801A860C(c); // 801A5B74
  goto L_801A5DD4; // 801A5B78
L_801A5B7C:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5B7C
  c->r[4]=0u+0x00000002u; // 801A5B80
  c->lr=0x801A5B88u; f_801A37C8(c); // 801A5B84
  c->r[3]=c->r[30]|c->r[30]; // 801A5B88
  c->r[4]=0u+0x00000002u; // 801A5B8C
  c->lr=0x801A5B94u; f_801A3800(c); // 801A5B90
  c->r[3]=c->r[30]|c->r[30]; // 801A5B94
  c->lr=0x801A5B9Cu; f_801A860C(c); // 801A5B98
  goto L_801A5DD4; // 801A5B9C
L_801A5BA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5BA0
  c->lr=0x801A5BA8u; f_801A5194(c); // 801A5BA4
  c->r[0]=0u+0x00007FD5u; // 801A5BA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801A5BAC
  goto L_801A5DD4; // 801A5BB0
L_801A5BB4:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5BB4
  c->lr=0x801A5BBCu; f_801A5194(c); // 801A5BB8
  c->r[0]=0u+0x00007FD0u; // 801A5BBC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801A5BC0
  goto L_801A5DD4; // 801A5BC4
L_801A5BC8:;
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5BC8
  c->r[3]=c->r[30]|c->r[30]; // 801A5BCC
  c->r[5]=0u+0x00000002u; // 801A5BD0
  c->r[6]=0u+0x00000000u; // 801A5BD4
  c->lr=0x801A5BDCu; f_801A8DAC(c); // 801A5BD8
  goto L_801A5DD4; // 801A5BDC
L_801A5BE0:;
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5BE0
  c->r[3]=c->r[30]|c->r[30]; // 801A5BE4
  c->r[5]=0u+0x00000002u; // 801A5BE8
  c->r[6]=0u+0x00000001u; // 801A5BEC
  c->lr=0x801A5BF4u; f_801A8DAC(c); // 801A5BF0
  goto L_801A5DD4; // 801A5BF4
L_801A5BF8:;
  c->r[5]=0u+0x00000000u; // 801A5BF8
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5BFC
  c->r[3]=c->r[30]|c->r[30]; // 801A5C00
  c->r[6]=c->r[5]|c->r[5]; // 801A5C04
  c->lr=0x801A5C0Cu; f_801A8DAC(c); // 801A5C08
  goto L_801A5DD4; // 801A5C0C
L_801A5C10:;
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5C10
  c->r[3]=c->r[30]|c->r[30]; // 801A5C14
  c->r[5]=0u+0x00000000u; // 801A5C18
  c->r[6]=0u+0x00000001u; // 801A5C1C
  c->lr=0x801A5C24u; f_801A8DAC(c); // 801A5C20
  goto L_801A5DD4; // 801A5C24
L_801A5C28:;
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5C28
  c->r[3]=c->r[30]|c->r[30]; // 801A5C2C
  c->r[5]=0u+0x00000001u; // 801A5C30
  c->r[6]=0u+0x00000000u; // 801A5C34
  c->lr=0x801A5C3Cu; f_801A8DAC(c); // 801A5C38
  goto L_801A5DD4; // 801A5C3C
L_801A5C40:;
  c->r[5]=0u+0x00000001u; // 801A5C40
  c->r[4]=R32(c->r[30]+0x00000614u); // 801A5C44
  c->r[3]=c->r[30]|c->r[30]; // 801A5C48
  c->r[6]=c->r[5]|c->r[5]; // 801A5C4C
  c->lr=0x801A5C54u; f_801A8DAC(c); // 801A5C50
  goto L_801A5DD4; // 801A5C54
L_801A5C58:;
  c->r[0]=0u+0x00007D46u; // 801A5C58
  W32(c->r[30]+0x000005FCu,c->r[0]); // 801A5C5C
  c->r[3]=c->r[30]|c->r[30]; // 801A5C60
  c->lr=0x801A5C68u; f_801A5F88(c); // 801A5C64
  goto L_801A5DD4; // 801A5C68
L_801A5C6C:;
  c->r[0]=0u+0x00007D4Bu; // 801A5C6C
  W32(c->r[30]+0x000005FCu,c->r[0]); // 801A5C70
  c->r[3]=c->r[30]|c->r[30]; // 801A5C74
  c->lr=0x801A5C7Cu; f_801A5F88(c); // 801A5C78
  goto L_801A5DD4; // 801A5C7C
L_801A5C80:;
  c->r[0]=0u+0x00007DC8u; // 801A5C80
  W32(c->r[30]+0x000005F0u,c->r[0]); // 801A5C84
  c->r[3]=c->r[30]|c->r[30]; // 801A5C88
  c->lr=0x801A5C90u; f_801A5EC8(c); // 801A5C8C
  goto L_801A5DD4; // 801A5C90
L_801A5C94:;
  c->r[0]=0u+0x00007DD2u; // 801A5C94
  W32(c->r[30]+0x000005F0u,c->r[0]); // 801A5C98
  c->r[3]=c->r[30]|c->r[30]; // 801A5C9C
  c->lr=0x801A5CA4u; f_801A5EC8(c); // 801A5CA0
  goto L_801A5DD4; // 801A5CA4
L_801A5CA8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5CA8
  c->lr=0x801A5CB0u; f_801A891C(c); // 801A5CAC
  cmps(c,0,(int32_t)c->r[3],0); // 801A5CB0
  if (crb(c,2)) { goto L_801A5CC4; } // 801A5CB4
  c->r[3]=c->r[30]|c->r[30]; // 801A5CB8
  c->r[4]=0u+0x00000004u; // 801A5CBC
  c->lr=0x801A5CC4u; f_801A37AC(c); // 801A5CC0
L_801A5CC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801A5CC4
  c->lr=0x801A5CCCu; f_801A5458(c); // 801A5CC8
  goto L_801A5DD4; // 801A5CCC
L_801A5CD0:;
  c->lr=0x801A5CD4u; f_801A1A8C(c); // 801A5CD0
  c->r[4]=c->r[3]|c->r[3]; // 801A5CD4
  c->r[3]=c->r[30]|c->r[30]; // 801A5CD8
  c->lr=0x801A5CE0u; f_80062F4C(c); // 801A5CDC
  c->r[0]=R8(c->r[30]+0x00000010u); // 801A5CE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5CE4
  c->r[3]=c->r[30]+c->r[0]; // 801A5CE8
  c->r[28]=R32(c->r[3]+0x00000014u); // 801A5CEC
  cmps(c,0,(int32_t)c->r[28],0); // 801A5CF0
  if (crb(c,2)) { goto L_801A5D1C; } // 801A5CF4
  c->r[29]=0u+0x00000000u; // 801A5CF8
  W32(c->r[31]+0x00000044u,c->r[1]); // 801A5CFC
  W8(c->r[31]+0x00000008u,c->r[29]); // 801A5D00
  c->lr=0x801A5D08u; f_801A1A8C(c); // 801A5D04
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A5D08
  c->r[0]=c->r[13]+0xFFFF8D44u; // 801A5D0C
  W32(c->r[28]+0x00000004u,c->r[0]); // 801A5D10
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A5D14
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801A5D18
L_801A5D1C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801A5D1C
  c->r[0]=0u+0x00000000u; // 801A5D20
  c->r[3]=c->r[30]|c->r[30]; // 801A5D24
  c->r[4]=c->r[28]|c->r[28]; // 801A5D28
  W32(c->r[28]+0x00000008u,c->r[0]); // 801A5D2C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801A5D30
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A5D34
  c->lr=0x801A5D3Cu; f_8006306C(c); // 801A5D38
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A5D3C
  c->r[0]=c->r[0]|0x40000000u; // 801A5D40
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A5D44
  goto L_801A5DD4; // 801A5D48
L_801A5D4C:;
  c->r[0]=0u+0x00007DCDu; // 801A5D4C
  W32(c->r[30]+0x000005F0u,c->r[0]); // 801A5D50
  c->r[3]=c->r[30]|c->r[30]; // 801A5D54
  c->lr=0x801A5D5Cu; f_801A5EC8(c); // 801A5D58
  goto L_801A5DD4; // 801A5D5C
L_801A5D60:;
  c->r[4]=0u+0x00020000u; // 801A5D60
  c->r[3]=c->r[30]|c->r[30]; // 801A5D64
  c->r[0]=c->r[4]+0xFFFFB207u; // 801A5D68
  W32(c->r[30]+0x000005F0u,c->r[0]); // 801A5D6C
  c->lr=0x801A5D74u; f_801A5EC8(c); // 801A5D70
  goto L_801A5DD4; // 801A5D74
L_801A5D78:;
  c->r[3]=c->r[31]+0x00000048u; // 801A5D78
  c->r[4]=0u+0x00000001u; // 801A5D7C
  c->lr=0x801A5D84u; f_80094630(c); // 801A5D80
  c->r[4]=c->r[3]|c->r[3]; // 801A5D84
  c->r[3]=c->r[30]|c->r[30]; // 801A5D88
  c->lr=0x801A5D90u; f_801A88C8(c); // 801A5D8C
  c->r[3]=c->r[30]|c->r[30]; // 801A5D90
  c->lr=0x801A5D98u; f_801A5E18(c); // 801A5D94
  goto L_801A5DD4; // 801A5D98
L_801A5D9C:;
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801A5D9C
  cmps(c,0,(int32_t)c->r[3],0); // 801A5DA0
  if (crb(c,2)) { goto L_801A5DC0; } // 801A5DA4
  c->r[4]=0u+0x80690000u; // 801A5DA8
  c->r[4]=c->r[4]+0x000034B8u; // 801A5DAC
  c->r[4]=c->r[4]+0x00000058u; // 801A5DB0
  c->lr=0x801A5DB8u; f_803B393C(c); // 801A5DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801A5DB8
  if (!crb(c,2)) { goto L_801A5DCC; } // 801A5DBC
L_801A5DC0:;
  c->r[0]=0u+0x00000001u; // 801A5DC0
  W8(c->r[30]+0x000006CCu,c->r[0]); // 801A5DC4
  goto L_801A5DD4; // 801A5DC8
L_801A5DCC:;
  c->r[0]=0u+0x00000000u; // 801A5DCC
  W8(c->r[30]+0x000006CCu,c->r[0]); // 801A5DD0
L_801A5DD4:;
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 801A5DD4
  c->r[3]=c->r[31]+0x0000000Cu; // 801A5DD8
  c->lr=0x801A5DE0u; f_800C2FB8(c); // 801A5DDC
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A5DE0
  c->r[3]=c->r[30]|c->r[30]; // 801A5DE4
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A5DE8
  c->r[4]=c->r[31]+0x0000000Cu; // 801A5DEC
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A5DF0
  c->lr=0x801A5DF8u; f_800634E8(c); // 801A5DF4
  c->r[10]=c->r[31]|c->r[31]; // 801A5DF8
  c->r[11]=c->r[10]+0x000000A0u; // 801A5DFC
  c->lr=0x801A5E04u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A5E00
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5E04
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5E08
  c->r[1]=c->r[10]|c->r[10]; // 801A5E0C
  c->lr=c->r[0]; // 801A5E10
  return; // 801A5E14
}

// fn_801A5E18
void f_801A5E18(Ctx* __restrict c) {
  trace_call(0x801A5E18u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5E18
  c->r[0]=c->lr; // 801A5E1C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A5E20
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5E24
  c->r[31]=c->r[1]|c->r[1]; // 801A5E28
  c->r[28]=c->r[3]|c->r[3]; // 801A5E2C
  c->lr=0x801A5E34u; f_801A1BD4(c); // 801A5E30
  c->r[4]=c->r[3]|c->r[3]; // 801A5E34
  c->r[3]=c->r[28]|c->r[28]; // 801A5E38
  c->lr=0x801A5E40u; f_80062F4C(c); // 801A5E3C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A5E40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5E44
  c->r[3]=c->r[28]+c->r[0]; // 801A5E48
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A5E4C
  cmps(c,0,(int32_t)c->r[29],0); // 801A5E50
  if (crb(c,2)) { goto L_801A5E7C; } // 801A5E54
  c->r[30]=0u+0x00000000u; // 801A5E58
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A5E5C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A5E60
  c->lr=0x801A5E68u; f_801A1BD4(c); // 801A5E64
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5E68
  c->r[0]=c->r[13]+0xFFFF8D54u; // 801A5E6C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A5E70
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5E74
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5E78
L_801A5E7C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A5E7C
  c->r[0]=0u+0x00000000u; // 801A5E80
  c->r[3]=c->r[28]|c->r[28]; // 801A5E84
  c->r[4]=c->r[29]|c->r[29]; // 801A5E88
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A5E8C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A5E90
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5E94
  c->lr=0x801A5E9Cu; f_8006306C(c); // 801A5E98
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A5E9C
  c->r[10]=c->r[31]|c->r[31]; // 801A5EA0
  c->r[3]=c->r[29]|c->r[29]; // 801A5EA4
  c->r[0]=c->r[0]|0x40000000u; // 801A5EA8
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A5EAC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A5EB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5EB4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5EB8
  c->r[1]=c->r[10]|c->r[10]; // 801A5EBC
  c->lr=c->r[0]; // 801A5EC0
  return; // 801A5EC4
}

// fn_801A5EC8
void f_801A5EC8(Ctx* __restrict c) {
  trace_call(0x801A5EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5EC8
  c->r[0]=c->lr; // 801A5ECC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A5ED0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5ED4
  c->r[31]=c->r[1]|c->r[1]; // 801A5ED8
  c->r[28]=c->r[3]|c->r[3]; // 801A5EDC
  c->lr=0x801A5EE4u; f_80061044(c); // 801A5EE0
  c->r[4]=c->r[3]|c->r[3]; // 801A5EE4
  c->r[3]=c->r[28]|c->r[28]; // 801A5EE8
  c->lr=0x801A5EF0u; f_80062F4C(c); // 801A5EEC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A5EF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5EF4
  c->r[3]=c->r[28]+c->r[0]; // 801A5EF8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A5EFC
  cmps(c,0,(int32_t)c->r[29],0); // 801A5F00
  if (crb(c,2)) { goto L_801A5F3C; } // 801A5F04
  c->r[30]=0u+0x00000000u; // 801A5F08
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A5F0C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A5F10
  c->lr=0x801A5F18u; f_80061044(c); // 801A5F14
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5F18
  c->r[0]=c->r[13]+0xFFFF80D0u; // 801A5F1C
  c->r[3]=c->r[29]+0x00000010u; // 801A5F20
  c->r[4]=0u+0x00000000u; // 801A5F24
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A5F28
  c->r[5]=0u+0x00000010u; // 801A5F2C
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5F30
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5F34
  c->lr=0x801A5F3Cu; f_800043EC(c); // 801A5F38
L_801A5F3C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A5F3C
  c->r[0]=0u+0x00000000u; // 801A5F40
  c->r[3]=c->r[28]|c->r[28]; // 801A5F44
  c->r[4]=c->r[29]|c->r[29]; // 801A5F48
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A5F4C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A5F50
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A5F54
  c->lr=0x801A5F5Cu; f_8006306C(c); // 801A5F58
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A5F5C
  c->r[10]=c->r[31]|c->r[31]; // 801A5F60
  c->r[3]=c->r[29]|c->r[29]; // 801A5F64
  c->r[0]=c->r[0]|0x40000000u; // 801A5F68
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A5F6C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A5F70
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A5F74
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A5F78
  c->r[1]=c->r[10]|c->r[10]; // 801A5F7C
  c->lr=c->r[0]; // 801A5F80
  return; // 801A5F84
}

// fn_801A5F88
void f_801A5F88(Ctx* __restrict c) {
  trace_call(0x801A5F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5F88
  c->r[0]=c->lr; // 801A5F8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A5F90
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A5F94
  c->r[31]=c->r[1]|c->r[1]; // 801A5F98
  c->r[28]=c->r[3]|c->r[3]; // 801A5F9C
  c->lr=0x801A5FA4u; f_80062E8C(c); // 801A5FA0
  c->r[4]=c->r[3]|c->r[3]; // 801A5FA4
  c->r[3]=c->r[28]|c->r[28]; // 801A5FA8
  c->lr=0x801A5FB0u; f_80062F4C(c); // 801A5FAC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A5FB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A5FB4
  c->r[3]=c->r[28]+c->r[0]; // 801A5FB8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A5FBC
  cmps(c,0,(int32_t)c->r[29],0); // 801A5FC0
  if (crb(c,2)) { goto L_801A5FEC; } // 801A5FC4
  c->r[30]=0u+0x00000000u; // 801A5FC8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A5FCC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A5FD0
  c->lr=0x801A5FD8u; f_80062E8C(c); // 801A5FD4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A5FD8
  c->r[0]=c->r[13]+0xFFFF80D4u; // 801A5FDC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A5FE0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A5FE4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A5FE8
L_801A5FEC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A5FEC
  c->r[0]=0u+0x00000000u; // 801A5FF0
  c->r[3]=c->r[28]|c->r[28]; // 801A5FF4
  c->r[4]=c->r[29]|c->r[29]; // 801A5FF8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A5FFC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A6000
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A6004
  c->lr=0x801A600Cu; f_8006306C(c); // 801A6008
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A600C
  c->r[10]=c->r[31]|c->r[31]; // 801A6010
  c->r[3]=c->r[29]|c->r[29]; // 801A6014
  c->r[0]=c->r[0]|0x40000000u; // 801A6018
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A601C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A6020
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A6024
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A6028
  c->r[1]=c->r[10]|c->r[10]; // 801A602C
  c->lr=c->r[0]; // 801A6030
  return; // 801A6034
}

// fn_801A6038
void f_801A6038(Ctx* __restrict c) {
  trace_call(0x801A6038u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6038
  c->r[0]=c->lr; // 801A603C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A6040
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A6044
  c->r[31]=c->r[1]|c->r[1]; // 801A6048
  c->r[28]=c->r[3]|c->r[3]; // 801A604C
  c->lr=0x801A6054u; f_8007AE58(c); // 801A6050
  c->r[4]=c->r[3]|c->r[3]; // 801A6054
  c->r[3]=c->r[28]|c->r[28]; // 801A6058
  c->lr=0x801A6060u; f_80062F4C(c); // 801A605C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801A6060
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A6064
  c->r[3]=c->r[28]+c->r[0]; // 801A6068
  c->r[29]=R32(c->r[3]+0x00000014u); // 801A606C
  cmps(c,0,(int32_t)c->r[29],0); // 801A6070
  if (crb(c,2)) { goto L_801A609C; } // 801A6074
  c->r[30]=0u+0x00000000u; // 801A6078
  W32(c->r[31]+0x00000024u,c->r[1]); // 801A607C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801A6080
  c->lr=0x801A6088u; f_8007AE58(c); // 801A6084
  W32(c->r[29]+0x00000000u,c->r[3]); // 801A6088
  c->r[0]=c->r[13]+0xFFFF8220u; // 801A608C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801A6090
  W32(c->r[29]+0x00000008u,c->r[30]); // 801A6094
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801A6098
L_801A609C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A609C
  c->r[0]=0u+0x00000000u; // 801A60A0
  c->r[3]=c->r[28]|c->r[28]; // 801A60A4
  c->r[4]=c->r[29]|c->r[29]; // 801A60A8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801A60AC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801A60B0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A60B4
  c->lr=0x801A60BCu; f_8006306C(c); // 801A60B8
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801A60BC
  c->r[10]=c->r[31]|c->r[31]; // 801A60C0
  c->r[3]=c->r[29]|c->r[29]; // 801A60C4
  c->r[0]=c->r[0]|0x40000000u; // 801A60C8
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801A60CC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A60D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A60D4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A60D8
  c->r[1]=c->r[10]|c->r[10]; // 801A60DC
  c->lr=c->r[0]; // 801A60E0
  return; // 801A60E4
}

// fn_801A60E8
void f_801A60E8(Ctx* __restrict c) {
  trace_call(0x801A60E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A60E8
  c->r[0]=c->lr; // 801A60EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A60F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801A60F4
  c->r[31]=c->r[3]|c->r[3]; // 801A60F8
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A60FC
  cmps(c,0,(int32_t)c->r[0],0); // 801A6100
  if (crb(c,2)) { goto L_801A6114; } // 801A6104
  cmps(c,0,(int32_t)c->r[0],256); // 801A6108
  if (crb(c,2)) { goto L_801A6138; } // 801A610C
  goto L_801A6168; // 801A6110
L_801A6114:;
  c->r[4]=0u+0x00000003u; // 801A6114
  c->lr=0x801A611Cu; f_801A37C8(c); // 801A6118
  c->r[4]=R32(c->r[31]+0x000005F0u); // 801A611C
  c->r[3]=c->r[31]|c->r[31]; // 801A6120
  c->r[5]=0u+0x00000000u; // 801A6124
  c->lr=0x801A612Cu; f_80064744(c); // 801A6128
  c->r[0]=0u+0x00000100u; // 801A612C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A6130
  goto L_801A6168; // 801A6134
L_801A6138:;
  c->r[3]=c->r[3]+0x00000354u; // 801A6138
  c->lr=0x801A6140u; f_800667AC(c); // 801A613C
  cmps(c,0,(int32_t)c->r[3],0); // 801A6140
  if (crb(c,2)) { goto L_801A6168; } // 801A6144
  c->r[4]=R32(c->r[31]+0x0000044Cu); // 801A6148
  c->r[0]=0u+0x00000005u; // 801A614C
  c->r[3]=c->r[31]|c->r[31]; // 801A6150
  W32(c->r[4]+0x00000088u,c->r[0]); // 801A6154
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A6158
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A615C
  c->ctr=c->r[12]; // 801A6160
  if (true) { c->lr=0x801A6168u; dispatch(c,c->ctr); } // 801A6164
L_801A6168:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A6168
  c->r[3]=c->r[31]|c->r[31]; // 801A616C
  c->r[4]=c->r[1]+0x00000018u; // 801A6170
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6174
  c->ctr=c->r[12]; // 801A6178
  if (true) { c->lr=0x801A6180u; dispatch(c,c->ctr); } // 801A617C
  c->r[4]=c->r[3]|c->r[3]; // 801A6180
  c->r[3]=c->r[1]+0x00000008u; // 801A6184
  c->lr=0x801A618Cu; f_80060878(c); // 801A6188
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A618C
  c->r[3]=c->r[31]|c->r[31]; // 801A6190
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6194
  c->r[4]=c->r[1]+0x00000008u; // 801A6198
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A619C
  c->lr=0x801A61A4u; f_800634E8(c); // 801A61A0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801A61A4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801A61A8
  c->lr=c->r[0]; // 801A61AC
  c->r[1]=c->r[1]+0x00000050u; // 801A61B0
  return; // 801A61B4
}

// fn_801A61B8
void f_801A61B8(Ctx* __restrict c) {
  trace_call(0x801A61B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A61B8
  c->r[0]=c->lr; // 801A61BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A61C0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801A61C4
  c->r[31]=c->r[3]|c->r[3]; // 801A61C8
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A61CC
  cmps(c,0,(int32_t)c->r[0],0); // 801A61D0
  if (crb(c,2)) { goto L_801A61EC; } // 801A61D4
  cmps(c,0,(int32_t)c->r[0],80); // 801A61D8
  if (crb(c,2)) { goto L_801A621C; } // 801A61DC
  cmps(c,0,(int32_t)c->r[0],512); // 801A61E0
  if (crb(c,2)) { goto L_801A6288; } // 801A61E4
  goto L_801A62AC; // 801A61E8
L_801A61EC:;
  c->lr=0x801A61F0u; f_8006052C(c); // 801A61EC
  c->r[3]=c->r[31]|c->r[31]; // 801A61F0
  c->r[4]=0u+0x00000002u; // 801A61F4
  c->lr=0x801A61FCu; f_801A37C8(c); // 801A61F8
  c->r[3]=c->r[31]|c->r[31]; // 801A61FC
  c->r[4]=0u+0x00000001u; // 801A6200
  c->lr=0x801A6208u; f_801A3800(c); // 801A6204
  c->r[3]=c->r[31]|c->r[31]; // 801A6208
  c->lr=0x801A6210u; f_801A860C(c); // 801A620C
  c->r[0]=0u+0x00000050u; // 801A6210
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A6214
  goto L_801A62AC; // 801A6218
L_801A621C:;
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801A621C
  c->r[4]=c->r[1]+0x00000018u; // 801A6220
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6224
  c->ctr=c->r[12]; // 801A6228
  if (true) { c->lr=0x801A6230u; dispatch(c,c->ctr); } // 801A622C
  c->r[4]=c->r[3]|c->r[3]; // 801A6230
  c->r[3]=c->r[1]+0x00000008u; // 801A6234
  c->lr=0x801A623Cu; f_80060878(c); // 801A6238
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A623C
  c->r[3]=c->r[31]|c->r[31]; // 801A6240
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6244
  c->r[4]=c->r[1]+0x00000008u; // 801A6248
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A624C
  c->lr=0x801A6254u; f_800634E8(c); // 801A6250
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801A6254
  c->r[0]=R32(c->r[3]+0x000000A4u); // 801A6258
  cmps(c,0,(int32_t)c->r[0],1); // 801A625C
  if (crb(c,1)) { goto L_801A62AC; } // 801A6260
  c->r[3]=c->r[31]|c->r[31]; // 801A6264
  c->lr=0x801A626Cu; f_8006053C(c); // 801A6268
  c->r[3]=c->r[31]|c->r[31]; // 801A626C
  c->r[4]=0u+0x00007DC8u; // 801A6270
  c->r[5]=0u+0x00000001u; // 801A6274
  c->lr=0x801A627Cu; f_80064744(c); // 801A6278
  c->r[0]=0u+0x00000200u; // 801A627C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A6280
  goto L_801A62AC; // 801A6284
L_801A6288:;
  c->r[3]=c->r[3]+0x00000354u; // 801A6288
  c->lr=0x801A6290u; f_800667AC(c); // 801A628C
  cmps(c,0,(int32_t)c->r[3],0); // 801A6290
  if (crb(c,2)) { goto L_801A62AC; } // 801A6294
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A6298
  c->r[3]=c->r[31]|c->r[31]; // 801A629C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A62A0
  c->ctr=c->r[12]; // 801A62A4
  if (true) { c->lr=0x801A62ACu; dispatch(c,c->ctr); } // 801A62A8
L_801A62AC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801A62AC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801A62B0
  c->lr=c->r[0]; // 801A62B4
  c->r[1]=c->r[1]+0x00000050u; // 801A62B8
  return; // 801A62BC
}

// fn_801A62C0
void f_801A62C0(Ctx* __restrict c) {
  trace_call(0x801A62C0u);
  {uint32_t ea=c->r[1]+0xFFFFFAC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A62C0
  c->r[0]=c->lr; // 801A62C4
  W32(c->r[1]+0x00000544u,c->r[0]); // 801A62C8
  c->r[11]=c->r[1]+0x00000530u; // 801A62CC
  {uint32_t ea=c->r[1]+0x00000530u; WF64(ea,c->f[31]);} // 801A62D0
  {uint32_t ea=c->r[1]+0x00000538u; psq_store(c,31,ea,0,0);} // 801A62D4
  c->lr=0x801A62DCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A62D8
  c->r[29]=c->r[3]|c->r[3]; // 801A62DC
  c->r[3]=c->r[1]+0x000001C8u; // 801A62E0
  c->lr=0x801A62E8u; f_8006585C(c); // 801A62E4
  c->r[0]=R32(c->r[29]+0x0000055Cu); // 801A62E8
  cmps(c,0,(int32_t)c->r[0],0); // 801A62EC
  if (crb(c,2)) { goto L_801A6310; } // 801A62F0
  cmps(c,0,(int32_t)c->r[0],48); // 801A62F4
  if (crb(c,2)) { goto L_801A6584; } // 801A62F8
  cmps(c,0,(int32_t)c->r[0],80); // 801A62FC
  if (crb(c,2)) { goto L_801A65CC; } // 801A6300
  cmps(c,0,(int32_t)c->r[0],256); // 801A6304
  if (crb(c,2)) { goto L_801A6704; } // 801A6308
  goto L_801A6764; // 801A630C
L_801A6310:;
  c->r[3]=c->r[29]|c->r[29]; // 801A6310
  c->r[4]=0u+0x00000003u; // 801A6314
  c->lr=0x801A631Cu; f_801A37C8(c); // 801A6318
  c->r[3]=c->r[29]|c->r[29]; // 801A631C
  c->r[4]=0u+0x00007DD7u; // 801A6320
  c->r[5]=0u+0x00000001u; // 801A6324
  c->lr=0x801A632Cu; f_80064744(c); // 801A6328
  c->r[0]=0u+0x00000030u; // 801A632C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A6330
  c->r[3]=c->r[29]|c->r[29]; // 801A6334
  c->lr=0x801A633Cu; f_801A8858(c); // 801A6338
  c->r[0]=R32(c->r[29]+0x00000604u); // 801A633C
  c->r[30]=0u+0x00000000u; // 801A6340
  {uint32_t ea=c->r[29]+0x000006D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A6344
  cmps(c,0,(int32_t)c->r[0],4); // 801A6348
  if (!crb(c,2)) { goto L_801A63C8; } // 801A634C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6350
  c->r[3]=c->r[29]|c->r[29]; // 801A6354
  c->r[4]=c->r[1]+0x00000168u; // 801A6358
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A635C
  c->ctr=c->r[12]; // 801A6360
  if (true) { c->lr=0x801A6368u; dispatch(c,c->ctr); } // 801A6364
  c->r[4]=c->r[3]|c->r[3]; // 801A6368
  c->r[3]=c->r[1]+0x000000B4u; // 801A636C
  c->lr=0x801A6374u; f_80060F28(c); // 801A6370
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6374
  c->r[3]=c->r[29]|c->r[29]; // 801A6378
  c->r[4]=c->r[1]+0x00000198u; // 801A637C
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6380
  c->ctr=c->r[12]; // 801A6384
  if (true) { c->lr=0x801A638Cu; dispatch(c,c->ctr); } // 801A6388
  c->r[4]=c->r[3]|c->r[3]; // 801A638C
  c->r[3]=c->r[1]+0x000000CCu; // 801A6390
  c->lr=0x801A6398u; f_80060878(c); // 801A6394
  {uint32_t ea=c->r[13]+0xFFFF8D28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6398
  c->r[3]=c->r[1]+0x000000C0u; // 801A639C
  c->r[4]=c->r[1]+0x000000B4u; // 801A63A0
  c->lr=0x801A63A8u; f_8005ED34(c); // 801A63A4
  c->r[3]=c->r[1]+0x000000D8u; // 801A63A8
  c->r[4]=c->r[1]+0x000000CCu; // 801A63AC
  c->r[5]=c->r[1]+0x000000C0u; // 801A63B0
  c->lr=0x801A63B8u; f_80073ACC(c); // 801A63B4
  c->r[3]=c->r[29]+0x00000678u; // 801A63B8
  c->r[4]=c->r[1]+0x000000D8u; // 801A63BC
  c->lr=0x801A63C4u; f_8005DC84(c); // 801A63C0
  goto L_801A6484; // 801A63C4
L_801A63C8:;
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 801A63C8
  c->lr=0x801A63D0u; f_800C2FAC(c); // 801A63CC
  c->r[31]=R32(c->r[29]+0x0000041Cu); // 801A63D0
  c->r[4]=c->r[3]|c->r[3]; // 801A63D4
  c->r[3]=c->r[31]|c->r[31]; // 801A63D8
  c->lr=0x801A63E0u; f_800C30A0(c); // 801A63DC
  c->r[4]=c->r[3]|c->r[3]; // 801A63E0
  c->r[3]=c->r[31]+0x00000004u; // 801A63E4
  c->r[5]=0u+0x00000000u; // 801A63E8
  c->lr=0x801A63F0u; f_800A0B44(c); // 801A63EC
  c->r[4]=0u+0x80690000u; // 801A63F0
  c->r[4]=c->r[4]+0x000034B8u; // 801A63F4
  c->r[4]=c->r[4]+0x0000005Bu; // 801A63F8
  c->lr=0x801A6400u; f_803B393C(c); // 801A63FC
  cmps(c,0,(int32_t)c->r[3],0); // 801A6400
  if (!crb(c,2)) { goto L_801A6458; } // 801A6404
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 801A6408
  c->r[4]=0u+0x00000001u; // 801A640C
  c->lr=0x801A6414u; f_800C3068(c); // 801A6410
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6414
  c->r[4]=c->r[29]|c->r[29]; // 801A6418
  c->r[3]=c->r[1]+0x0000009Cu; // 801A641C
  c->r[31]=R32(c->r[29]+0x0000041Cu); // 801A6420
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6424
  c->ctr=c->r[12]; // 801A6428
  if (true) { c->lr=0x801A6430u; dispatch(c,c->ctr); } // 801A642C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A6430
  c->r[4]=c->r[31]|c->r[31]; // 801A6434
  c->r[3]=c->r[1]+0x000000A8u; // 801A6438
  c->lr=0x801A6440u; f_800C2E48(c); // 801A643C
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6440
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6444
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[31]); // 801A6448
  fcmp(c,0,c->f[31],c->f[0]); // 801A644C
  if (!crb(c,1)) { goto L_801A6458; } // 801A6450
  c->r[30]=0u+0x00000001u; // 801A6454
L_801A6458:;
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 801A6458
  c->r[3]=c->r[1]+0x00000090u; // 801A645C
  c->lr=0x801A6464u; f_800C2FB8(c); // 801A6460
  c->r[3]=c->r[29]+0x00000678u; // 801A6464
  c->r[4]=c->r[1]+0x00000090u; // 801A6468
  c->lr=0x801A6470u; f_8005DC84(c); // 801A646C
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 801A6470
  c->r[4]=0u+0x00000001u; // 801A6474
  c->lr=0x801A647Cu; f_800C3068(c); // 801A6478
  c->r[0]=0u+0x00000001u; // 801A647C
  W8(c->r[29]+0x0000062Cu,c->r[0]); // 801A6480
L_801A6484:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A6484
  if (!crb(c,2)) { goto L_801A64C0; } // 801A6488
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A648C
  c->r[4]=c->r[29]|c->r[29]; // 801A6490
  c->r[3]=c->r[1]+0x00000084u; // 801A6494
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6498
  c->ctr=c->r[12]; // 801A649C
  if (true) { c->lr=0x801A64A4u; dispatch(c,c->ctr); } // 801A64A0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A64A4
  {uint32_t ea=c->r[29]+0x0000067Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A64A8
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A64AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801A64B0
  fcmp(c,0,c->f[1],c->f[0]); // 801A64B4
  if (!crb(c,1)) { goto L_801A64C0; } // 801A64B8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 801A64BC
L_801A64C0:;
  c->r[31]=0u+0x80760000u; // 801A64C0
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A64C4
  c->r[3]=c->r[1]+0x00000060u; // 801A64C8
  c->r[4]=c->r[31]+0xFFFF9C9Cu; // 801A64CC
  c->lr=0x801A64D4u; f_8005ED34(c); // 801A64D0
  c->r[3]=c->r[1]+0x0000006Cu; // 801A64D4
  c->r[4]=c->r[29]+0x00000678u; // 801A64D8
  c->r[5]=c->r[1]+0x00000060u; // 801A64DC
  c->lr=0x801A64E4u; f_8005FC60(c); // 801A64E0
  c->r[3]=c->r[1]+0x00000078u; // 801A64E4
  c->r[4]=c->r[29]+0x00000678u; // 801A64E8
  c->r[5]=c->r[31]+0xFFFF9C9Cu; // 801A64EC
  c->lr=0x801A64F4u; f_80073ACC(c); // 801A64F0
  c->r[3]=c->r[1]+0x00000078u; // 801A64F4
  c->r[4]=c->r[1]+0x0000006Cu; // 801A64F8
  c->r[5]=c->r[1]+0x000001C8u; // 801A64FC
  c->lr=0x801A6504u; f_8005EB5C(c); // 801A6500
  cmps(c,0,(int32_t)c->r[3],0); // 801A6504
  if (crb(c,2)) { goto L_801A6524; } // 801A6508
  c->r[3]=c->r[29]+0x00000678u; // 801A650C
  c->r[4]=c->r[1]+0x000001F0u; // 801A6510
  c->lr=0x801A6518u; f_8005DC84(c); // 801A6514
  c->r[3]=c->r[29]+0x00000684u; // 801A6518
  c->r[4]=c->r[1]+0x000001FCu; // 801A651C
  c->lr=0x801A6524u; f_8005DC84(c); // 801A6520
L_801A6524:;
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6524
  c->r[4]=c->r[29]|c->r[29]; // 801A6528
  c->r[3]=c->r[1]+0x00000048u; // 801A652C
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6530
  c->ctr=c->r[12]; // 801A6534
  if (true) { c->lr=0x801A653Cu; dispatch(c,c->ctr); } // 801A6538
  c->f[1]=c->f[31]; // 801A653C
  c->r[3]=c->r[29]|c->r[29]; // 801A6540
  c->r[4]=c->r[1]+0x00000054u; // 801A6544
  c->r[5]=c->r[1]+0x00000048u; // 801A6548
  c->r[6]=c->r[29]+0x00000678u; // 801A654C
  c->lr=0x801A6554u; f_801A8CB4(c); // 801A6550
  c->r[3]=c->r[29]+0x0000069Cu; // 801A6554
  c->r[4]=c->r[1]+0x00000054u; // 801A6558
  c->lr=0x801A6560u; f_8005DC84(c); // 801A655C
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6560
  c->r[3]=c->r[29]+0x000006ACu; // 801A6564
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6568
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A656C
  c->lr=0x801A6574u; f_800A7B08(c); // 801A6570
  c->r[3]=c->r[29]|c->r[29]; // 801A6574
  c->r[4]=0u+0x00000000u; // 801A6578
  c->lr=0x801A6580u; f_8005EA70(c); // 801A657C
  goto L_801A6764; // 801A6580
L_801A6584:;
  c->r[3]=c->r[29]+0x00000354u; // 801A6584
  c->lr=0x801A658Cu; f_800667AC(c); // 801A6588
  cmps(c,0,(int32_t)c->r[3],0); // 801A658C
  if (crb(c,2)) { goto L_801A6764; } // 801A6590
  c->r[3]=c->r[29]|c->r[29]; // 801A6594
  c->r[4]=0u+0x00007DDCu; // 801A6598
  c->r[5]=0u+0x00000001u; // 801A659C
  c->lr=0x801A65A4u; f_80064744(c); // 801A65A0
  c->r[3]=R32(c->r[29]+0x00000404u); // 801A65A4
  c->lr=0x801A65ACu; f_802EA43C(c); // 801A65A8
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A65AC
  c->r[0]=0u+0x00000050u; // 801A65B0
  {uint32_t ea=c->r[29]+0x000006A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A65B4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801A65B8
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A65BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A65C0
  {uint32_t ea=c->r[29]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A65C4
  goto L_801A6764; // 801A65C8
L_801A65CC:;
  c->r[3]=c->r[29]+0x000006ACu; // 801A65CC
  c->lr=0x801A65D4u; f_800A7B64(c); // 801A65D0
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A65D4
  c->r[4]=c->r[29]|c->r[29]; // 801A65D8
  c->r[3]=c->r[1]+0x000000FCu; // 801A65DC
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A65E0
  c->ctr=c->r[12]; // 801A65E4
  if (true) { c->lr=0x801A65ECu; dispatch(c,c->ctr); } // 801A65E8
  c->r[3]=c->r[1]+0x000000F0u; // 801A65EC
  c->r[4]=c->r[29]+0x0000069Cu; // 801A65F0
  c->lr=0x801A65F8u; f_8005CD7C(c); // 801A65F4
  c->r[3]=c->r[29]+0x000006ACu; // 801A65F8
  c->lr=0x801A6600u; f_800A7BEC(c); // 801A65FC
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6600
  c->r[0]=0u+0x00000000u; // 801A6604
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A6608
  c->r[3]=c->r[1]+0x00000008u; // 801A660C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801A6610
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 801A6614
  c->lr=0x801A661Cu; f_8004714C(c); // 801A6618
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A661C
  c->r[3]=c->r[1]+0x000000F0u; // 801A6620
  c->lr=0x801A6628u; f_800774A8(c); // 801A6624
  c->r[3]=c->r[29]|c->r[29]; // 801A6628
  c->r[4]=c->r[1]+0x000000F0u; // 801A662C
  c->lr=0x801A6634u; f_80083340(c); // 801A6630
  c->r[3]=c->r[1]+0x000000E4u; // 801A6634
  c->r[4]=c->r[29]+0x000001B8u; // 801A6638
  c->lr=0x801A6640u; f_80061F40(c); // 801A663C
  {uint32_t ea=c->r[29]+0x00000364u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6640
  {uint32_t ea=c->r[2]+0xFFFFC490u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6644
  fcmp(c,0,c->f[1],c->f[0]); // 801A6648
  if (!crb(c,1)) { goto L_801A6764; } // 801A664C
  c->r[3]=c->r[1]+0x00000024u; // 801A6650
  c->r[4]=c->r[1]+0x000000FCu; // 801A6654
  c->r[5]=c->r[1]+0x000000E4u; // 801A6658
  c->lr=0x801A6660u; f_8005FC60(c); // 801A665C
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6660
  c->r[3]=c->r[1]+0x00000030u; // 801A6664
  c->r[4]=c->r[1]+0x000000E4u; // 801A6668
  c->lr=0x801A6670u; f_8005ED34(c); // 801A666C
  c->r[3]=c->r[1]+0x0000003Cu; // 801A6670
  c->r[4]=c->r[1]+0x000000FCu; // 801A6674
  c->r[5]=c->r[1]+0x00000030u; // 801A6678
  c->lr=0x801A6680u; f_80073ACC(c); // 801A667C
  c->r[3]=c->r[1]+0x0000003Cu; // 801A6680
  c->r[4]=c->r[1]+0x00000024u; // 801A6684
  c->r[5]=c->r[1]+0x000001C8u; // 801A6688
  c->lr=0x801A6690u; f_8005EB5C(c); // 801A668C
  cmps(c,0,(int32_t)c->r[3],0); // 801A6690
  if (crb(c,2)) { goto L_801A6764; } // 801A6694
  c->r[3]=c->r[29]+0x000001B8u; // 801A6698
  c->r[4]=c->r[1]+0x00000138u; // 801A669C
  c->lr=0x801A66A4u; f_80382F2C(c); // 801A66A0
  c->r[3]=c->r[1]+0x00000138u; // 801A66A4
  c->r[4]=c->r[1]+0x000001F0u; // 801A66A8
  c->lr=0x801A66B0u; f_8005CDC8(c); // 801A66AC
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A66B0
  c->r[3]=c->r[29]|c->r[29]; // 801A66B4
  c->r[4]=c->r[1]+0x00000138u; // 801A66B8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A66BC
  c->ctr=c->r[12]; // 801A66C0
  if (true) { c->lr=0x801A66C8u; dispatch(c,c->ctr); } // 801A66C4
  c->r[3]=c->r[29]+0x00000684u; // 801A66C8
  c->r[4]=c->r[1]+0x000001FCu; // 801A66CC
  c->lr=0x801A66D4u; f_8005DC84(c); // 801A66D0
  c->r[3]=c->r[29]|c->r[29]; // 801A66D4
  c->r[4]=0u+0x00000001u; // 801A66D8
  c->lr=0x801A66E0u; f_8005EA70(c); // 801A66DC
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A66E0
  c->r[3]=c->r[29]|c->r[29]; // 801A66E4
  {uint32_t ea=c->r[29]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A66E8
  c->r[4]=0u+0x00007DE1u; // 801A66EC
  c->r[5]=0u+0x00000001u; // 801A66F0
  c->lr=0x801A66F8u; f_80064744(c); // 801A66F4
  c->r[0]=0u+0x00000100u; // 801A66F8
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A66FC
  goto L_801A6764; // 801A6700
L_801A6704:;
  c->r[3]=c->r[29]+0x00000354u; // 801A6704
  c->lr=0x801A670Cu; f_800667AC(c); // 801A6708
  cmps(c,0,(int32_t)c->r[3],0); // 801A670C
  if (crb(c,2)) { goto L_801A6764; } // 801A6710
  c->r[5]=R32(c->r[29]+0x0000044Cu); // 801A6714
  c->r[0]=0u+0x00000005u; // 801A6718
  c->r[4]=0u+0x80760000u; // 801A671C
  c->r[3]=c->r[1]+0x00000018u; // 801A6720
  W32(c->r[5]+0x00000088u,c->r[0]); // 801A6724
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A6728
  c->lr=0x801A6730u; f_8005FC20(c); // 801A672C
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6730
  c->r[3]=c->r[29]|c->r[29]; // 801A6734
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6738
  c->r[4]=c->r[1]+0x00000018u; // 801A673C
  c->lr=0x801A6744u; f_80061DBC(c); // 801A6740
  c->r[3]=c->r[29]|c->r[29]; // 801A6744
  c->r[4]=0u+0x00000000u; // 801A6748
  c->lr=0x801A6750u; f_801A87F4(c); // 801A674C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6750
  c->r[3]=c->r[29]|c->r[29]; // 801A6754
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A6758
  c->ctr=c->r[12]; // 801A675C
  if (true) { c->lr=0x801A6764u; dispatch(c,c->ctr); } // 801A6760
L_801A6764:;
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6764
  c->r[3]=c->r[29]|c->r[29]; // 801A6768
  c->r[4]=c->r[1]+0x00000108u; // 801A676C
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6770
  c->ctr=c->r[12]; // 801A6774
  if (true) { c->lr=0x801A677Cu; dispatch(c,c->ctr); } // 801A6778
  c->r[4]=c->r[3]|c->r[3]; // 801A677C
  c->r[3]=c->r[1]+0x0000000Cu; // 801A6780
  c->lr=0x801A6788u; f_80060878(c); // 801A6784
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6788
  c->r[3]=c->r[29]|c->r[29]; // 801A678C
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6790
  c->r[4]=c->r[1]+0x0000000Cu; // 801A6794
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A6798
  c->lr=0x801A67A0u; f_800634E8(c); // 801A679C
  c->r[0]=0u+0x00000000u; // 801A67A0
  W32(c->r[1]+0x00000510u,c->r[0]); // 801A67A4
  {uint32_t ea=c->r[1]+0x00000538u; psq_load(c,31,ea,0,0);} // 801A67A8
  {uint32_t ea=c->r[1]+0x00000530u; c->f[31]=RF64(ea);} // 801A67AC
  c->r[11]=c->r[1]+0x00000530u; // 801A67B0
  c->lr=0x801A67B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A67B4
  c->r[0]=R32(c->r[1]+0x00000544u); // 801A67B8
  c->lr=c->r[0]; // 801A67BC
  c->r[1]=c->r[1]+0x00000540u; // 801A67C0
  return; // 801A67C4
}

// fn_801A67C8
void f_801A67C8(Ctx* __restrict c) {
  trace_call(0x801A67C8u);
  {uint32_t ea=c->r[1]+0xFFFFFAA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A67C8
  c->r[0]=c->lr; // 801A67CC
  W32(c->r[1]+0x00000564u,c->r[0]); // 801A67D0
  {uint32_t ea=c->r[1]+0x00000550u; WF64(ea,c->f[31]);} // 801A67D4
  {uint32_t ea=c->r[1]+0x00000558u; psq_store(c,31,ea,0,0);} // 801A67D8
  W32(c->r[1]+0x0000054Cu,c->r[31]); // 801A67DC
  W32(c->r[1]+0x00000548u,c->r[30]); // 801A67E0
  c->r[30]=c->r[3]|c->r[3]; // 801A67E4
  c->r[3]=c->r[1]+0x000001F8u; // 801A67E8
  c->lr=0x801A67F0u; f_8006585C(c); // 801A67EC
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 801A67F0
  cmps(c,0,(int32_t)c->r[0],0); // 801A67F4
  if (crb(c,2)) { goto L_801A6818; } // 801A67F8
  cmps(c,0,(int32_t)c->r[0],48); // 801A67FC
  if (crb(c,2)) { goto L_801A69D4; } // 801A6800
  cmps(c,0,(int32_t)c->r[0],80); // 801A6804
  if (crb(c,2)) { goto L_801A6A1C; } // 801A6808
  cmps(c,0,(int32_t)c->r[0],256); // 801A680C
  if (crb(c,2)) { goto L_801A6BAC; } // 801A6810
  goto L_801A6C0C; // 801A6814
L_801A6818:;
  c->r[3]=c->r[30]|c->r[30]; // 801A6818
  c->r[4]=0u+0x00000003u; // 801A681C
  c->lr=0x801A6824u; f_801A37C8(c); // 801A6820
  c->r[3]=c->r[30]|c->r[30]; // 801A6824
  c->r[4]=0u+0x00007DD7u; // 801A6828
  c->r[5]=0u+0x00000001u; // 801A682C
  c->lr=0x801A6834u; f_80064744(c); // 801A6830
  c->r[0]=0u+0x00000030u; // 801A6834
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A6838
  c->r[3]=c->r[30]|c->r[30]; // 801A683C
  c->lr=0x801A6844u; f_801A8858(c); // 801A6840
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6844
  c->r[3]=c->r[30]|c->r[30]; // 801A6848
  c->r[4]=c->r[1]+0x00000168u; // 801A684C
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6850
  c->ctr=c->r[12]; // 801A6854
  if (true) { c->lr=0x801A685Cu; dispatch(c,c->ctr); } // 801A6858
  c->r[4]=c->r[3]|c->r[3]; // 801A685C
  c->r[3]=c->r[1]+0x000000A8u; // 801A6860
  c->lr=0x801A6868u; f_80060F28(c); // 801A6864
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6868
  c->r[3]=c->r[30]|c->r[30]; // 801A686C
  c->r[4]=c->r[1]+0x00000198u; // 801A6870
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6874
  c->ctr=c->r[12]; // 801A6878
  if (true) { c->lr=0x801A6880u; dispatch(c,c->ctr); } // 801A687C
  c->r[4]=c->r[3]|c->r[3]; // 801A6880
  c->r[3]=c->r[1]+0x000000C0u; // 801A6884
  c->lr=0x801A688Cu; f_80060878(c); // 801A6888
  c->r[4]=0u+0x80760000u; // 801A688C
  {uint32_t ea=c->r[2]+0xFFFFC494u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6890
  c->r[3]=c->r[1]+0x0000009Cu; // 801A6894
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A6898
  c->lr=0x801A68A0u; f_8005ED34(c); // 801A689C
  {uint32_t ea=c->r[13]+0xFFFF8D2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A68A0
  c->r[3]=c->r[1]+0x000000B4u; // 801A68A4
  c->r[4]=c->r[1]+0x000000A8u; // 801A68A8
  c->lr=0x801A68B0u; f_8005ED34(c); // 801A68AC
  c->r[3]=c->r[1]+0x000000CCu; // 801A68B0
  c->r[4]=c->r[1]+0x000000C0u; // 801A68B4
  c->r[5]=c->r[1]+0x000000B4u; // 801A68B8
  c->lr=0x801A68C0u; f_80073ACC(c); // 801A68BC
  c->r[3]=c->r[1]+0x000000D8u; // 801A68C0
  c->r[4]=c->r[1]+0x000000CCu; // 801A68C4
  c->r[5]=c->r[1]+0x0000009Cu; // 801A68C8
  c->lr=0x801A68D0u; f_8005FC60(c); // 801A68CC
  c->r[3]=c->r[30]+0x00000678u; // 801A68D0
  c->r[4]=c->r[1]+0x000000D8u; // 801A68D4
  c->lr=0x801A68DCu; f_8005DC84(c); // 801A68D8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A68DC
  c->r[4]=c->r[30]|c->r[30]; // 801A68E0
  c->r[3]=c->r[1]+0x00000090u; // 801A68E4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A68E8
  c->ctr=c->r[12]; // 801A68EC
  if (true) { c->lr=0x801A68F4u; dispatch(c,c->ctr); } // 801A68F0
  {uint32_t ea=c->r[1]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A68F4
  {uint32_t ea=c->r[30]+0x0000067Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A68F8
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A68FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801A6900
  fcmp(c,0,c->f[0],c->f[31]); // 801A6904
  if (!crb(c,1)) { goto L_801A6910; } // 801A6908
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801A690C
L_801A6910:;
  c->r[31]=0u+0x80760000u; // 801A6910
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6914
  c->r[3]=c->r[1]+0x0000006Cu; // 801A6918
  c->r[4]=c->r[31]+0xFFFF9C9Cu; // 801A691C
  c->lr=0x801A6924u; f_8005ED34(c); // 801A6920
  c->r[3]=c->r[1]+0x00000078u; // 801A6924
  c->r[4]=c->r[30]+0x00000678u; // 801A6928
  c->r[5]=c->r[1]+0x0000006Cu; // 801A692C
  c->lr=0x801A6934u; f_8005FC60(c); // 801A6930
  c->r[3]=c->r[1]+0x00000084u; // 801A6934
  c->r[4]=c->r[30]+0x00000678u; // 801A6938
  c->r[5]=c->r[31]+0xFFFF9C9Cu; // 801A693C
  c->lr=0x801A6944u; f_80073ACC(c); // 801A6940
  c->r[3]=c->r[1]+0x00000084u; // 801A6944
  c->r[4]=c->r[1]+0x00000078u; // 801A6948
  c->r[5]=c->r[1]+0x000001F8u; // 801A694C
  c->lr=0x801A6954u; f_8005EB5C(c); // 801A6950
  cmps(c,0,(int32_t)c->r[3],0); // 801A6954
  if (crb(c,2)) { goto L_801A6974; } // 801A6958
  c->r[3]=c->r[30]+0x00000678u; // 801A695C
  c->r[4]=c->r[1]+0x00000220u; // 801A6960
  c->lr=0x801A6968u; f_8005DC84(c); // 801A6964
  c->r[3]=c->r[30]+0x00000684u; // 801A6968
  c->r[4]=c->r[1]+0x0000022Cu; // 801A696C
  c->lr=0x801A6974u; f_8005DC84(c); // 801A6970
L_801A6974:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6974
  c->r[4]=c->r[30]|c->r[30]; // 801A6978
  c->r[3]=c->r[1]+0x00000054u; // 801A697C
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6980
  c->ctr=c->r[12]; // 801A6984
  if (true) { c->lr=0x801A698Cu; dispatch(c,c->ctr); } // 801A6988
  c->f[1]=c->f[31]; // 801A698C
  c->r[3]=c->r[30]|c->r[30]; // 801A6990
  c->r[4]=c->r[1]+0x00000060u; // 801A6994
  c->r[5]=c->r[1]+0x00000054u; // 801A6998
  c->r[6]=c->r[30]+0x00000678u; // 801A699C
  c->lr=0x801A69A4u; f_801A8CB4(c); // 801A69A0
  c->r[3]=c->r[30]+0x0000069Cu; // 801A69A4
  c->r[4]=c->r[1]+0x00000060u; // 801A69A8
  c->lr=0x801A69B0u; f_8005DC84(c); // 801A69AC
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A69B0
  c->r[3]=c->r[30]+0x000006ACu; // 801A69B4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A69B8
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A69BC
  c->lr=0x801A69C4u; f_800A7B08(c); // 801A69C0
  c->r[3]=c->r[30]|c->r[30]; // 801A69C4
  c->r[4]=0u+0x00000000u; // 801A69C8
  c->lr=0x801A69D0u; f_8005EA70(c); // 801A69CC
  goto L_801A6C0C; // 801A69D0
L_801A69D4:;
  c->r[3]=c->r[30]+0x00000354u; // 801A69D4
  c->lr=0x801A69DCu; f_800667AC(c); // 801A69D8
  cmps(c,0,(int32_t)c->r[3],0); // 801A69DC
  if (crb(c,2)) { goto L_801A6C0C; } // 801A69E0
  c->r[3]=c->r[30]|c->r[30]; // 801A69E4
  c->r[4]=0u+0x00007DE6u; // 801A69E8
  c->r[5]=0u+0x00000001u; // 801A69EC
  c->lr=0x801A69F4u; f_80064744(c); // 801A69F0
  c->r[3]=R32(c->r[30]+0x00000404u); // 801A69F4
  c->lr=0x801A69FCu; f_802EA43C(c); // 801A69F8
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A69FC
  c->r[0]=0u+0x00000050u; // 801A6A00
  {uint32_t ea=c->r[30]+0x000006A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6A04
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801A6A08
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A6A0C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A6A10
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A6A14
  goto L_801A6C0C; // 801A6A18
L_801A6A1C:;
  c->r[6]=0u+0x80760000u; // 801A6A1C
  {uint32_t ea=c->r[2]+0xFFFFC498u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6A20
  c->r[3]=c->r[30]|c->r[30]; // 801A6A24
  c->r[4]=c->r[1]+0x000001C8u; // 801A6A28
  c->r[5]=c->r[30]+0x000001B8u; // 801A6A2C
  c->r[6]=c->r[6]+0xFFFF9C9Cu; // 801A6A30
  c->lr=0x801A6A38u; f_801A8970(c); // 801A6A34
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6A38
  c->r[4]=c->r[30]|c->r[30]; // 801A6A3C
  c->r[3]=c->r[1]+0x00000048u; // 801A6A40
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6A44
  c->ctr=c->r[12]; // 801A6A48
  if (true) { c->lr=0x801A6A50u; dispatch(c,c->ctr); } // 801A6A4C
  c->r[3]=c->r[1]+0x000001C8u; // 801A6A50
  c->r[4]=c->r[1]+0x00000048u; // 801A6A54
  c->lr=0x801A6A5Cu; f_8005CDC8(c); // 801A6A58
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6A5C
  c->r[3]=c->r[30]|c->r[30]; // 801A6A60
  c->r[4]=c->r[1]+0x000001C8u; // 801A6A64
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A6A68
  c->ctr=c->r[12]; // 801A6A6C
  if (true) { c->lr=0x801A6A74u; dispatch(c,c->ctr); } // 801A6A70
  c->r[3]=c->r[30]+0x000006ACu; // 801A6A74
  c->lr=0x801A6A7Cu; f_800A7B64(c); // 801A6A78
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6A7C
  c->r[4]=c->r[30]|c->r[30]; // 801A6A80
  c->r[3]=c->r[1]+0x000000FCu; // 801A6A84
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6A88
  c->ctr=c->r[12]; // 801A6A8C
  if (true) { c->lr=0x801A6A94u; dispatch(c,c->ctr); } // 801A6A90
  c->r[3]=c->r[1]+0x000000F0u; // 801A6A94
  c->r[4]=c->r[30]+0x0000069Cu; // 801A6A98
  c->lr=0x801A6AA0u; f_8005CD7C(c); // 801A6A9C
  c->r[3]=c->r[30]+0x000006ACu; // 801A6AA0
  c->lr=0x801A6AA8u; f_800A7BEC(c); // 801A6AA4
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6AA8
  c->r[0]=0u+0x00000000u; // 801A6AAC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A6AB0
  c->r[3]=c->r[1]+0x00000008u; // 801A6AB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801A6AB8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 801A6ABC
  c->lr=0x801A6AC4u; f_8004714C(c); // 801A6AC0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6AC4
  c->r[3]=c->r[1]+0x000000F0u; // 801A6AC8
  c->lr=0x801A6AD0u; f_800774A8(c); // 801A6ACC
  c->r[3]=c->r[30]|c->r[30]; // 801A6AD0
  c->r[4]=c->r[1]+0x000000F0u; // 801A6AD4
  c->lr=0x801A6ADCu; f_80083340(c); // 801A6AD8
  c->r[3]=c->r[1]+0x000000E4u; // 801A6ADC
  c->r[4]=c->r[30]+0x000001B8u; // 801A6AE0
  c->lr=0x801A6AE8u; f_80061F40(c); // 801A6AE4
  {uint32_t ea=c->r[30]+0x00000364u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6AE8
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6AEC
  fcmp(c,0,c->f[1],c->f[0]); // 801A6AF0
  if (!crb(c,1)) { goto L_801A6C0C; } // 801A6AF4
  c->r[3]=c->r[1]+0x00000024u; // 801A6AF8
  c->r[4]=c->r[1]+0x000000FCu; // 801A6AFC
  c->r[5]=c->r[1]+0x000000E4u; // 801A6B00
  c->lr=0x801A6B08u; f_8005FC60(c); // 801A6B04
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6B08
  c->r[3]=c->r[1]+0x00000030u; // 801A6B0C
  c->r[4]=c->r[1]+0x000000E4u; // 801A6B10
  c->lr=0x801A6B18u; f_8005ED34(c); // 801A6B14
  c->r[3]=c->r[1]+0x0000003Cu; // 801A6B18
  c->r[4]=c->r[1]+0x000000FCu; // 801A6B1C
  c->r[5]=c->r[1]+0x00000030u; // 801A6B20
  c->lr=0x801A6B28u; f_80073ACC(c); // 801A6B24
  c->r[3]=c->r[1]+0x0000003Cu; // 801A6B28
  c->r[4]=c->r[1]+0x00000024u; // 801A6B2C
  c->r[5]=c->r[1]+0x000001F8u; // 801A6B30
  c->lr=0x801A6B38u; f_8005EB5C(c); // 801A6B34
  cmps(c,0,(int32_t)c->r[3],0); // 801A6B38
  if (crb(c,2)) { goto L_801A6C0C; } // 801A6B3C
  c->r[3]=c->r[30]+0x000001B8u; // 801A6B40
  c->r[4]=c->r[1]+0x00000138u; // 801A6B44
  c->lr=0x801A6B4Cu; f_80382F2C(c); // 801A6B48
  c->r[3]=c->r[1]+0x00000138u; // 801A6B4C
  c->r[4]=c->r[1]+0x00000220u; // 801A6B50
  c->lr=0x801A6B58u; f_8005CDC8(c); // 801A6B54
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6B58
  c->r[3]=c->r[30]|c->r[30]; // 801A6B5C
  c->r[4]=c->r[1]+0x00000138u; // 801A6B60
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A6B64
  c->ctr=c->r[12]; // 801A6B68
  if (true) { c->lr=0x801A6B70u; dispatch(c,c->ctr); } // 801A6B6C
  c->r[3]=c->r[30]+0x00000684u; // 801A6B70
  c->r[4]=c->r[1]+0x0000022Cu; // 801A6B74
  c->lr=0x801A6B7Cu; f_8005DC84(c); // 801A6B78
  c->r[3]=c->r[30]|c->r[30]; // 801A6B7C
  c->r[4]=0u+0x00000001u; // 801A6B80
  c->lr=0x801A6B88u; f_8005EA70(c); // 801A6B84
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6B88
  c->r[3]=c->r[30]|c->r[30]; // 801A6B8C
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A6B90
  c->r[4]=0u+0x00007DEBu; // 801A6B94
  c->r[5]=0u+0x00000001u; // 801A6B98
  c->lr=0x801A6BA0u; f_80064744(c); // 801A6B9C
  c->r[0]=0u+0x00000100u; // 801A6BA0
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A6BA4
  goto L_801A6C0C; // 801A6BA8
L_801A6BAC:;
  c->r[3]=c->r[30]+0x00000354u; // 801A6BAC
  c->lr=0x801A6BB4u; f_800667AC(c); // 801A6BB0
  cmps(c,0,(int32_t)c->r[3],0); // 801A6BB4
  if (crb(c,2)) { goto L_801A6C0C; } // 801A6BB8
  c->r[5]=R32(c->r[30]+0x0000044Cu); // 801A6BBC
  c->r[0]=0u+0x00000005u; // 801A6BC0
  c->r[4]=0u+0x80760000u; // 801A6BC4
  c->r[3]=c->r[1]+0x00000018u; // 801A6BC8
  W32(c->r[5]+0x00000088u,c->r[0]); // 801A6BCC
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A6BD0
  c->lr=0x801A6BD8u; f_8005FC20(c); // 801A6BD4
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6BD8
  c->r[3]=c->r[30]|c->r[30]; // 801A6BDC
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6BE0
  c->r[4]=c->r[1]+0x00000018u; // 801A6BE4
  c->lr=0x801A6BECu; f_80061DBC(c); // 801A6BE8
  c->r[3]=c->r[30]|c->r[30]; // 801A6BEC
  c->r[4]=0u+0x00000000u; // 801A6BF0
  c->lr=0x801A6BF8u; f_801A87F4(c); // 801A6BF4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6BF8
  c->r[3]=c->r[30]|c->r[30]; // 801A6BFC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A6C00
  c->ctr=c->r[12]; // 801A6C04
  if (true) { c->lr=0x801A6C0Cu; dispatch(c,c->ctr); } // 801A6C08
L_801A6C0C:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A6C0C
  c->r[3]=c->r[30]|c->r[30]; // 801A6C10
  c->r[4]=c->r[1]+0x00000108u; // 801A6C14
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A6C18
  c->ctr=c->r[12]; // 801A6C1C
  if (true) { c->lr=0x801A6C24u; dispatch(c,c->ctr); } // 801A6C20
  c->r[4]=c->r[3]|c->r[3]; // 801A6C24
  c->r[3]=c->r[1]+0x0000000Cu; // 801A6C28
  c->lr=0x801A6C30u; f_80060878(c); // 801A6C2C
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6C30
  c->r[3]=c->r[30]|c->r[30]; // 801A6C34
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6C38
  c->r[4]=c->r[1]+0x0000000Cu; // 801A6C3C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A6C40
  c->lr=0x801A6C48u; f_800634E8(c); // 801A6C44
  c->r[0]=0u+0x00000000u; // 801A6C48
  W32(c->r[1]+0x00000540u,c->r[0]); // 801A6C4C
  {uint32_t ea=c->r[1]+0x00000558u; psq_load(c,31,ea,0,0);} // 801A6C50
  {uint32_t ea=c->r[1]+0x00000550u; c->f[31]=RF64(ea);} // 801A6C54
  c->r[31]=R32(c->r[1]+0x0000054Cu); // 801A6C58
  c->r[30]=R32(c->r[1]+0x00000548u); // 801A6C5C
  c->r[0]=R32(c->r[1]+0x00000564u); // 801A6C60
  c->lr=c->r[0]; // 801A6C64
  c->r[1]=c->r[1]+0x00000560u; // 801A6C68
  return; // 801A6C6C
}

// fn_801A6C70
void f_801A6C70(Ctx* __restrict c) {
  trace_call(0x801A6C70u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6C70
  c->r[0]=c->lr; // 801A6C74
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801A6C78
  c->r[11]=c->r[1]+0x000000E0u; // 801A6C7C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801A6C80
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801A6C84
  c->lr=0x801A6C8Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A6C88
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A6C8C
  c->r[29]=c->r[3]|c->r[3]; // 801A6C90
  cmps(c,0,(int32_t)c->r[0],0); // 801A6C94
  if (crb(c,2)) { goto L_801A6CB8; } // 801A6C98
  cmps(c,0,(int32_t)c->r[0],80); // 801A6C9C
  if (crb(c,2)) { goto L_801A6D24; } // 801A6CA0
  cmps(c,0,(int32_t)c->r[0],112); // 801A6CA4
  if (crb(c,2)) { goto L_801A6ECC; } // 801A6CA8
  cmps(c,0,(int32_t)c->r[0],256); // 801A6CAC
  if (crb(c,2)) { goto L_801A6F4C; } // 801A6CB0
  goto L_801A6F80; // 801A6CB4
L_801A6CB8:;
  c->lr=0x801A6CBCu; f_801A8858(c); // 801A6CB8
  c->r[3]=c->r[29]|c->r[29]; // 801A6CBC
  c->lr=0x801A6CC4u; f_8005EAA0(c); // 801A6CC0
  c->r[4]=0u+0x00000002u; // 801A6CC4
  c->r[5]=0u+0x00000001u; // 801A6CC8
  c->r[3]=c->r[3]+0x000003E0u; // 801A6CCC
  c->lr=0x801A6CD4u; f_8005DCA0(c); // 801A6CD0
  c->r[3]=c->r[29]|c->r[29]; // 801A6CD4
  c->r[4]=0u+0x00000000u; // 801A6CD8
  c->lr=0x801A6CE0u; f_8005EA70(c); // 801A6CDC
  c->r[0]=R32(c->r[29]+0x00000614u); // 801A6CE0
  cmps(c,0,(int32_t)c->r[0],2); // 801A6CE4
  if (!crb(c,2)) { goto L_801A6CF4; } // 801A6CE8
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6CEC
  {uint32_t ea=c->r[13]+0xFFFF8D30u; WF32(ea,c->f[0]);} // 801A6CF0
L_801A6CF4:;
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6CF4
  c->r[3]=c->r[29]+0x000006ACu; // 801A6CF8
  {uint32_t ea=c->r[13]+0xFFFF8D30u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6CFC
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A6D00
  c->lr=0x801A6D08u; f_800A7B08(c); // 801A6D04
  c->r[3]=c->r[29]|c->r[29]; // 801A6D08
  c->r[4]=0u+0x00007E45u; // 801A6D0C
  c->r[5]=0u+0x00000001u; // 801A6D10
  c->lr=0x801A6D18u; f_80064744(c); // 801A6D14
  c->r[0]=0u+0x00000050u; // 801A6D18
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A6D1C
  goto L_801A6F80; // 801A6D20
L_801A6D24:;
  c->r[3]=c->r[3]+0x000001B8u; // 801A6D24
  c->r[4]=c->r[1]+0x000000A0u; // 801A6D28
  c->lr=0x801A6D30u; f_80382F2C(c); // 801A6D2C
  c->r[3]=c->r[1]+0x00000060u; // 801A6D30
  c->r[4]=c->r[29]+0x000001B8u; // 801A6D34
  c->lr=0x801A6D3Cu; f_80060F28(c); // 801A6D38
  c->r[4]=0u+0x80760000u; // 801A6D3C
  c->r[3]=c->r[1]+0x00000070u; // 801A6D40
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A6D44
  c->r[5]=c->r[1]+0x00000060u; // 801A6D48
  c->lr=0x801A6D50u; f_8010A6BC(c); // 801A6D4C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6D50
  c->r[4]=c->r[29]|c->r[29]; // 801A6D54
  c->r[3]=c->r[1]+0x00000054u; // 801A6D58
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6D5C
  c->ctr=c->r[12]; // 801A6D60
  if (true) { c->lr=0x801A6D68u; dispatch(c,c->ctr); } // 801A6D64
  c->r[3]=c->r[1]+0x00000070u; // 801A6D68
  c->r[4]=c->r[1]+0x00000054u; // 801A6D6C
  c->lr=0x801A6D74u; f_8005CDC8(c); // 801A6D70
  c->r[3]=c->r[1]+0x000000A0u; // 801A6D74
  {uint32_t ea=c->r[2]+0xFFFFC498u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6D78
  c->r[4]=c->r[3]|c->r[3]; // 801A6D7C
  c->r[5]=c->r[1]+0x00000070u; // 801A6D80
  c->lr=0x801A6D88u; f_8030DFEC(c); // 801A6D84
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6D88
  c->r[3]=c->r[29]|c->r[29]; // 801A6D8C
  c->r[4]=c->r[1]+0x000000A0u; // 801A6D90
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A6D94
  c->ctr=c->r[12]; // 801A6D98
  if (true) { c->lr=0x801A6DA0u; dispatch(c,c->ctr); } // 801A6D9C
  c->r[3]=c->r[29]+0x00000354u; // 801A6DA0
  c->r[30]=0u+0x00000000u; // 801A6DA4
  c->lr=0x801A6DACu; f_800667AC(c); // 801A6DA8
  cmps(c,0,(int32_t)c->r[3],0); // 801A6DAC
  if (crb(c,2)) { goto L_801A6E28; } // 801A6DB0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6DB4
  c->r[3]=c->r[1]+0x00000024u; // 801A6DB8
  {uint32_t ea=c->r[2]+0xFFFFC49Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6DBC
  c->f[3]=c->f[1]; // 801A6DC0
  c->lr=0x801A6DC8u; f_8005FD70(c); // 801A6DC4
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6DC8
  c->r[31]=c->r[3]|c->r[3]; // 801A6DCC
  c->r[4]=c->r[29]|c->r[29]; // 801A6DD0
  c->r[3]=c->r[1]+0x00000030u; // 801A6DD4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6DD8
  c->ctr=c->r[12]; // 801A6DDC
  if (true) { c->lr=0x801A6DE4u; dispatch(c,c->ctr); } // 801A6DE0
  c->r[5]=c->r[31]|c->r[31]; // 801A6DE4
  c->r[3]=c->r[1]+0x0000003Cu; // 801A6DE8
  c->r[4]=c->r[1]+0x00000030u; // 801A6DEC
  c->lr=0x801A6DF4u; f_80073ACC(c); // 801A6DF0
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6DF4
  c->r[4]=c->r[29]|c->r[29]; // 801A6DF8
  c->r[3]=c->r[1]+0x00000048u; // 801A6DFC
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A6E00
  c->ctr=c->r[12]; // 801A6E04
  if (true) { c->lr=0x801A6E0Cu; dispatch(c,c->ctr); } // 801A6E08
  c->r[3]=c->r[1]+0x00000048u; // 801A6E0C
  c->r[4]=c->r[1]+0x0000003Cu; // 801A6E10
  c->r[5]=0u+0x00000000u; // 801A6E14
  c->lr=0x801A6E1Cu; f_8005EB94(c); // 801A6E18
  cmps(c,0,(int32_t)c->r[3],0); // 801A6E1C
  if (crb(c,2)) { goto L_801A6E28; } // 801A6E20
  c->r[30]=0u+0x00000001u; // 801A6E24
L_801A6E28:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A6E28
  if (!crb(c,2)) { goto L_801A6E50; } // 801A6E2C
  c->r[3]=c->r[29]+0x00000354u; // 801A6E30
  c->lr=0x801A6E38u; f_800667AC(c); // 801A6E34
  cmps(c,0,(int32_t)c->r[3],0); // 801A6E38
  if (crb(c,2)) { goto L_801A6E80; } // 801A6E3C
  c->r[3]=c->r[29]|c->r[29]; // 801A6E40
  c->lr=0x801A6E48u; f_8005EA80(c); // 801A6E44
  cmps(c,0,(int32_t)c->r[3],0); // 801A6E48
  if (crb(c,2)) { goto L_801A6E80; } // 801A6E4C
L_801A6E50:;
  c->r[3]=c->r[29]|c->r[29]; // 801A6E50
  c->r[4]=0u+0x00000001u; // 801A6E54
  c->lr=0x801A6E5Cu; f_8005EA70(c); // 801A6E58
  c->r[3]=c->r[29]|c->r[29]; // 801A6E5C
  c->lr=0x801A6E64u; f_8006052C(c); // 801A6E60
  c->r[3]=c->r[29]|c->r[29]; // 801A6E64
  c->r[4]=0u+0x00007E4Au; // 801A6E68
  c->r[5]=0u+0x00000001u; // 801A6E6C
  c->lr=0x801A6E74u; f_80064744(c); // 801A6E70
  c->r[0]=0u+0x00000070u; // 801A6E74
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A6E78
  goto L_801A6F80; // 801A6E7C
L_801A6E80:;
  c->r[3]=c->r[29]+0x000006ACu; // 801A6E80
  c->lr=0x801A6E88u; f_800A7B64(c); // 801A6E84
  c->r[0]=0u+0x00000000u; // 801A6E88
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A6E8C
  c->r[3]=c->r[1]+0x00000008u; // 801A6E90
  c->lr=0x801A6E98u; f_8004714C(c); // 801A6E94
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A6E98
  c->r[3]=c->r[29]+0x000006ACu; // 801A6E9C
  c->lr=0x801A6EA4u; f_800A7BEC(c); // 801A6EA0
  c->f[1]=-c->f[1]; // 801A6EA4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A6EA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801A6EAC
  c->r[3]=c->r[29]|c->r[29]; // 801A6EB0
  c->r[4]=c->r[1]+0x00000018u; // 801A6EB4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A6EB8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801A6EBC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801A6EC0
  c->lr=0x801A6EC8u; f_80083340(c); // 801A6EC4
  goto L_801A6F80; // 801A6EC8
L_801A6ECC:;
  c->r[3]=c->r[3]+0x00000354u; // 801A6ECC
  c->lr=0x801A6ED4u; f_800667AC(c); // 801A6ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801A6ED4
  if (crb(c,2)) { goto L_801A6F80; } // 801A6ED8
  c->r[4]=0u+0x80760000u; // 801A6EDC
  c->r[3]=c->r[1]+0x0000000Cu; // 801A6EE0
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A6EE4
  c->lr=0x801A6EECu; f_8005FC20(c); // 801A6EE8
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A6EEC
  c->r[3]=c->r[29]|c->r[29]; // 801A6EF0
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A6EF4
  c->r[4]=c->r[1]+0x0000000Cu; // 801A6EF8
  c->lr=0x801A6F00u; f_80061DBC(c); // 801A6EFC
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6F00
  c->r[3]=c->r[29]|c->r[29]; // 801A6F04
  c->r[12]=R32(c->r[12]+0x00000100u); // 801A6F08
  c->ctr=c->r[12]; // 801A6F0C
  if (true) { c->lr=0x801A6F14u; dispatch(c,c->ctr); } // 801A6F10
  cmps(c,0,(int32_t)c->r[3],0); // 801A6F14
  if (crb(c,2)) { goto L_801A6F38; } // 801A6F18
  c->r[3]=c->r[29]|c->r[29]; // 801A6F1C
  c->r[4]=0u+0x00007E4Fu; // 801A6F20
  c->r[5]=0u+0x00000001u; // 801A6F24
  c->lr=0x801A6F2Cu; f_80064744(c); // 801A6F28
  c->r[0]=0u+0x00000100u; // 801A6F2C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A6F30
  goto L_801A6F80; // 801A6F34
L_801A6F38:;
  c->r[0]=0u+0x00000200u; // 801A6F38
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801A6F3C
  c->r[3]=c->r[29]|c->r[29]; // 801A6F40
  c->lr=0x801A6F48u; f_801A84D0(c); // 801A6F44
  goto L_801A6F80; // 801A6F48
L_801A6F4C:;
  c->r[3]=c->r[3]+0x00000354u; // 801A6F4C
  c->lr=0x801A6F54u; f_800667AC(c); // 801A6F50
  cmps(c,0,(int32_t)c->r[3],0); // 801A6F54
  if (crb(c,2)) { goto L_801A6F80; } // 801A6F58
  c->r[3]=c->r[29]|c->r[29]; // 801A6F5C
  c->lr=0x801A6F64u; f_8006053C(c); // 801A6F60
  c->r[0]=0u+0x00000000u; // 801A6F64
  W8(c->r[29]+0x000006CDu,c->r[0]); // 801A6F68
  c->r[3]=c->r[29]|c->r[29]; // 801A6F6C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801A6F70
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A6F74
  c->ctr=c->r[12]; // 801A6F78
  if (true) { c->lr=0x801A6F80u; dispatch(c,c->ctr); } // 801A6F7C
L_801A6F80:;
  c->r[11]=c->r[1]+0x000000E0u; // 801A6F80
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801A6F84
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801A6F88
  c->lr=0x801A6F90u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A6F8C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801A6F90
  c->lr=c->r[0]; // 801A6F94
  c->r[1]=c->r[1]+0x000000F0u; // 801A6F98
  return; // 801A6F9C
}

// fn_801A6FA0
void f_801A6FA0(Ctx* __restrict c) {
  trace_call(0x801A6FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6FA0
  c->r[0]=c->lr; // 801A6FA4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A6FA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801A6FAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801A6FB0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801A6FB4
  c->r[31]=c->r[3]|c->r[3]; // 801A6FB8
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A6FBC
  cmps(c,0,(int32_t)c->r[0],0); // 801A6FC0
  if (crb(c,2)) { goto L_801A6FEC; } // 801A6FC4
  cmps(c,0,(int32_t)c->r[0],48); // 801A6FC8
  if (crb(c,2)) { goto L_801A7034; } // 801A6FCC
  cmps(c,0,(int32_t)c->r[0],80); // 801A6FD0
  if (crb(c,2)) { goto L_801A70A8; } // 801A6FD4
  cmps(c,0,(int32_t)c->r[0],112); // 801A6FD8
  if (crb(c,2)) { goto L_801A7158; } // 801A6FDC
  cmps(c,0,(int32_t)c->r[0],256); // 801A6FE0
  if (crb(c,2)) { goto L_801A71B4; } // 801A6FE4
  goto L_801A71E0; // 801A6FE8
L_801A6FEC:;
  c->lr=0x801A6FF0u; f_801A8858(c); // 801A6FEC
  c->r[3]=c->r[31]|c->r[31]; // 801A6FF0
  c->r[4]=0u+0x00000000u; // 801A6FF4
  c->lr=0x801A6FFCu; f_8005EA70(c); // 801A6FF8
  c->r[0]=0u+0x00000001u; // 801A6FFC
  W8(c->r[31]+0x00000654u,c->r[0]); // 801A7000
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7004
  c->r[3]=c->r[31]+0x000006ACu; // 801A7008
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A700C
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A7010
  c->lr=0x801A7018u; f_800A7B08(c); // 801A7014
  c->r[3]=c->r[31]|c->r[31]; // 801A7018
  c->r[4]=0u+0x00007E59u; // 801A701C
  c->r[5]=0u+0x00000001u; // 801A7020
  c->lr=0x801A7028u; f_80064744(c); // 801A7024
  c->r[0]=0u+0x00000030u; // 801A7028
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A702C
  goto L_801A71E0; // 801A7030
L_801A7034:;
  c->r[3]=c->r[3]+0x000006ACu; // 801A7034
  c->lr=0x801A703Cu; f_800A7B64(c); // 801A7038
  c->r[0]=0u+0x00000000u; // 801A703C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801A7040
  c->r[3]=c->r[1]+0x0000000Cu; // 801A7044
  c->lr=0x801A704Cu; f_8004714C(c); // 801A7048
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A704C
  c->r[3]=c->r[31]+0x000006ACu; // 801A7050
  c->lr=0x801A7058u; f_800A7BEC(c); // 801A7054
  c->f[1]=-c->f[1]; // 801A7058
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A705C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801A7060
  c->r[3]=c->r[31]|c->r[31]; // 801A7064
  c->r[4]=c->r[1]+0x00000028u; // 801A7068
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A706C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801A7070
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801A7074
  c->lr=0x801A707Cu; f_80083340(c); // 801A7078
  c->r[3]=c->r[31]+0x00000354u; // 801A707C
  c->lr=0x801A7084u; f_800667AC(c); // 801A7080
  cmps(c,0,(int32_t)c->r[3],0); // 801A7084
  if (crb(c,2)) { goto L_801A71E0; } // 801A7088
  c->r[3]=c->r[31]|c->r[31]; // 801A708C
  c->r[4]=0u+0x00007E5Eu; // 801A7090
  c->r[5]=0u+0x00000001u; // 801A7094
  c->lr=0x801A709Cu; f_80064744(c); // 801A7098
  c->r[0]=0u+0x00000050u; // 801A709C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A70A0
  goto L_801A71E0; // 801A70A4
L_801A70A8:;
  c->lr=0x801A70ACu; f_8005EA80(c); // 801A70A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A70AC
  if (crb(c,2)) { goto L_801A710C; } // 801A70B0
  c->r[4]=0u+0x80760000u; // 801A70B4
  c->r[3]=c->r[1]+0x0000001Cu; // 801A70B8
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A70BC
  c->lr=0x801A70C4u; f_8005FC20(c); // 801A70C0
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A70C4
  c->r[3]=c->r[31]|c->r[31]; // 801A70C8
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A70CC
  c->r[4]=c->r[1]+0x0000001Cu; // 801A70D0
  c->lr=0x801A70D8u; f_80061DBC(c); // 801A70D4
  c->r[3]=c->r[31]|c->r[31]; // 801A70D8
  c->r[4]=0u+0x00000000u; // 801A70DC
  c->lr=0x801A70E4u; f_801A87F4(c); // 801A70E0
  c->r[3]=c->r[31]|c->r[31]; // 801A70E4
  c->r[4]=0u+0x00000001u; // 801A70E8
  c->lr=0x801A70F0u; f_8005EA70(c); // 801A70EC
  c->r[3]=c->r[31]|c->r[31]; // 801A70F0
  c->r[4]=0u+0x00007E63u; // 801A70F4
  c->r[5]=0u+0x00000001u; // 801A70F8
  c->lr=0x801A7100u; f_80064744(c); // 801A70FC
  c->r[0]=0u+0x00000070u; // 801A7100
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7104
  goto L_801A71E0; // 801A7108
L_801A710C:;
  c->r[3]=c->r[31]+0x000006ACu; // 801A710C
  c->lr=0x801A7114u; f_800A7B64(c); // 801A7110
  c->r[0]=0u+0x00000000u; // 801A7114
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A7118
  c->r[3]=c->r[1]+0x00000008u; // 801A711C
  c->lr=0x801A7124u; f_8004714C(c); // 801A7120
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A7124
  c->r[3]=c->r[31]+0x000006ACu; // 801A7128
  c->lr=0x801A7130u; f_800A7BEC(c); // 801A712C
  c->f[1]=-c->f[1]; // 801A7130
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7134
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801A7138
  c->r[3]=c->r[31]|c->r[31]; // 801A713C
  c->r[4]=c->r[1]+0x00000010u; // 801A7140
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A7144
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801A7148
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801A714C
  c->lr=0x801A7154u; f_80083340(c); // 801A7150
  goto L_801A71E0; // 801A7154
L_801A7158:;
  c->r[3]=c->r[3]+0x00000354u; // 801A7158
  c->lr=0x801A7160u; f_800667AC(c); // 801A715C
  cmps(c,0,(int32_t)c->r[3],0); // 801A7160
  if (crb(c,2)) { goto L_801A71E0; } // 801A7164
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A7168
  c->r[3]=c->r[31]|c->r[31]; // 801A716C
  c->r[12]=R32(c->r[12]+0x00000100u); // 801A7170
  c->ctr=c->r[12]; // 801A7174
  if (true) { c->lr=0x801A717Cu; dispatch(c,c->ctr); } // 801A7178
  cmps(c,0,(int32_t)c->r[3],0); // 801A717C
  if (crb(c,2)) { goto L_801A71A0; } // 801A7180
  c->r[3]=c->r[31]|c->r[31]; // 801A7184
  c->r[4]=0u+0x00007E68u; // 801A7188
  c->r[5]=0u+0x00000001u; // 801A718C
  c->lr=0x801A7194u; f_80064744(c); // 801A7190
  c->r[0]=0u+0x00000100u; // 801A7194
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7198
  goto L_801A71E0; // 801A719C
L_801A71A0:;
  c->r[0]=0u+0x00000200u; // 801A71A0
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A71A4
  c->r[3]=c->r[31]|c->r[31]; // 801A71A8
  c->lr=0x801A71B0u; f_801A84D0(c); // 801A71AC
  goto L_801A71E0; // 801A71B0
L_801A71B4:;
  c->r[3]=c->r[3]+0x00000354u; // 801A71B4
  c->lr=0x801A71BCu; f_800667AC(c); // 801A71B8
  cmps(c,0,(int32_t)c->r[3],0); // 801A71BC
  if (crb(c,2)) { goto L_801A71E0; } // 801A71C0
  c->r[0]=0u+0x00000000u; // 801A71C4
  W8(c->r[31]+0x000006CDu,c->r[0]); // 801A71C8
  c->r[3]=c->r[31]|c->r[31]; // 801A71CC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A71D0
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A71D4
  c->ctr=c->r[12]; // 801A71D8
  if (true) { c->lr=0x801A71E0u; dispatch(c,c->ctr); } // 801A71DC
L_801A71E0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801A71E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801A71E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801A71E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801A71EC
  c->lr=c->r[0]; // 801A71F0
  c->r[1]=c->r[1]+0x00000050u; // 801A71F4
  return; // 801A71F8
}

// fn_801A71FC
void f_801A71FC(Ctx* __restrict c) {
  trace_call(0x801A71FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A71FC
  c->r[0]=c->lr; // 801A7200
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A7204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A7208
  c->r[31]=c->r[3]|c->r[3]; // 801A720C
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A7210
  cmps(c,0,(int32_t)c->r[0],0); // 801A7214
  if (crb(c,2)) { goto L_801A7228; } // 801A7218
  cmps(c,0,(int32_t)c->r[0],256); // 801A721C
  if (crb(c,2)) { goto L_801A7240; } // 801A7220
  goto L_801A7264; // 801A7224
L_801A7228:;
  c->r[4]=R32(c->r[3]+0x000005F4u); // 801A7228
  c->r[5]=0u+0x00000001u; // 801A722C
  c->lr=0x801A7234u; f_80064744(c); // 801A7230
  c->r[0]=0u+0x00000100u; // 801A7234
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7238
  goto L_801A7264; // 801A723C
L_801A7240:;
  c->r[3]=c->r[3]+0x00000354u; // 801A7240
  c->lr=0x801A7248u; f_800667AC(c); // 801A7244
  cmps(c,0,(int32_t)c->r[3],0); // 801A7248
  if (crb(c,2)) { goto L_801A7264; } // 801A724C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A7250
  c->r[3]=c->r[31]|c->r[31]; // 801A7254
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A7258
  c->ctr=c->r[12]; // 801A725C
  if (true) { c->lr=0x801A7264u; dispatch(c,c->ctr); } // 801A7260
L_801A7264:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A7268
  c->lr=c->r[0]; // 801A726C
  c->r[1]=c->r[1]+0x00000010u; // 801A7270
  return; // 801A7274
}

// fn_801A7278
void f_801A7278(Ctx* __restrict c) {
  trace_call(0x801A7278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7278
  c->r[0]=c->lr; // 801A727C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A7280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A7284
  c->r[31]=c->r[3]|c->r[3]; // 801A7288
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A728C
  cmps(c,0,(int32_t)c->r[0],0); // 801A7290
  if (!crb(c,2)) { goto L_801A72B4; } // 801A7294
  c->lr=0x801A729Cu; f_801A84D0(c); // 801A7298
  c->r[3]=c->r[31]|c->r[31]; // 801A729C
  c->r[4]=0u+0x00007E54u; // 801A72A0
  c->r[5]=0u+0x00000001u; // 801A72A4
  c->lr=0x801A72ACu; f_80064744(c); // 801A72A8
  c->r[0]=0u+0x00000100u; // 801A72AC
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A72B0
L_801A72B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A72B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A72B8
  c->lr=c->r[0]; // 801A72BC
  c->r[1]=c->r[1]+0x00000010u; // 801A72C0
  return; // 801A72C4
}

// fn_801A72C8
void f_801A72C8(Ctx* __restrict c) {
  trace_call(0x801A72C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A72C8
  c->r[0]=c->lr; // 801A72CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A72D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A72D4
  c->r[31]=c->r[3]|c->r[3]; // 801A72D8
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A72DC
  cmps(c,0,(int32_t)c->r[0],0); // 801A72E0
  if (crb(c,2)) { goto L_801A72F4; } // 801A72E4
  cmps(c,0,(int32_t)c->r[0],256); // 801A72E8
  if (crb(c,2)) { goto L_801A730C; } // 801A72EC
  goto L_801A7330; // 801A72F0
L_801A72F4:;
  c->r[4]=R32(c->r[3]+0x000005FCu); // 801A72F4
  c->r[5]=0u+0x00000001u; // 801A72F8
  c->lr=0x801A7300u; f_80064744(c); // 801A72FC
  c->r[0]=0u+0x00000100u; // 801A7300
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7304
  goto L_801A7330; // 801A7308
L_801A730C:;
  c->r[3]=c->r[3]+0x00000354u; // 801A730C
  c->lr=0x801A7314u; f_800667AC(c); // 801A7310
  cmps(c,0,(int32_t)c->r[3],0); // 801A7314
  if (crb(c,2)) { goto L_801A7330; } // 801A7318
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A731C
  c->r[3]=c->r[31]|c->r[31]; // 801A7320
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A7324
  c->ctr=c->r[12]; // 801A7328
  if (true) { c->lr=0x801A7330u; dispatch(c,c->ctr); } // 801A732C
L_801A7330:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A7334
  c->lr=c->r[0]; // 801A7338
  c->r[1]=c->r[1]+0x00000010u; // 801A733C
  return; // 801A7340
}

// fn_801A7344
void f_801A7344(Ctx* __restrict c) {
  trace_call(0x801A7344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7344
  c->r[0]=c->lr; // 801A7348
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A734C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A7350
  c->r[31]=c->r[3]|c->r[3]; // 801A7354
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A7358
  cmps(c,0,(int32_t)c->r[0],0); // 801A735C
  if (crb(c,2)) { goto L_801A7370; } // 801A7360
  cmps(c,0,(int32_t)c->r[0],256); // 801A7364
  if (crb(c,2)) { goto L_801A7388; } // 801A7368
  goto L_801A73AC; // 801A736C
L_801A7370:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 801A7370
  c->r[5]=0u+0x00000001u; // 801A7374
  c->lr=0x801A737Cu; f_80064744(c); // 801A7378
  c->r[0]=0u+0x00000100u; // 801A737C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7380
  goto L_801A73AC; // 801A7384
L_801A7388:;
  c->r[3]=c->r[3]+0x00000354u; // 801A7388
  c->lr=0x801A7390u; f_800667AC(c); // 801A738C
  cmps(c,0,(int32_t)c->r[3],0); // 801A7390
  if (crb(c,2)) { goto L_801A73AC; } // 801A7394
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A7398
  c->r[3]=c->r[31]|c->r[31]; // 801A739C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A73A0
  c->ctr=c->r[12]; // 801A73A4
  if (true) { c->lr=0x801A73ACu; dispatch(c,c->ctr); } // 801A73A8
L_801A73AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A73AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A73B0
  c->lr=c->r[0]; // 801A73B4
  c->r[1]=c->r[1]+0x00000010u; // 801A73B8
  return; // 801A73BC
}

// fn_801A73C0
void f_801A73C0(Ctx* __restrict c) {
  trace_call(0x801A73C0u);
  {uint32_t ea=c->r[1]+0xFFFFFBB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A73C0
  c->r[0]=c->lr; // 801A73C4
  W32(c->r[1]+0x00000454u,c->r[0]); // 801A73C8
  {uint32_t ea=c->r[1]+0x00000440u; WF64(ea,c->f[31]);} // 801A73CC
  {uint32_t ea=c->r[1]+0x00000448u; psq_store(c,31,ea,0,0);} // 801A73D0
  W32(c->r[1]+0x0000043Cu,c->r[31]); // 801A73D4
  W32(c->r[1]+0x00000438u,c->r[30]); // 801A73D8
  c->r[30]=c->r[3]|c->r[3]; // 801A73DC
  c->r[3]=c->r[1]+0x000000E8u; // 801A73E0
  c->lr=0x801A73E8u; f_8006585C(c); // 801A73E4
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 801A73E8
  cmps(c,0,(int32_t)c->r[0],0); // 801A73EC
  if (crb(c,2)) { goto L_801A7410; } // 801A73F0
  cmps(c,0,(int32_t)c->r[0],256); // 801A73F4
  if (crb(c,2)) { goto L_801A7564; } // 801A73F8
  cmps(c,0,(int32_t)c->r[0],512); // 801A73FC
  if (crb(c,2)) { goto L_801A7590; } // 801A7400
  cmps(c,0,(int32_t)c->r[0],768); // 801A7404
  if (crb(c,2)) { goto L_801A76F8; } // 801A7408
  goto L_801A7750; // 801A740C
L_801A7410:;
  c->r[31]=0u+0x80760000u; // 801A7410
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7414
  c->r[3]=c->r[1]+0x00000078u; // 801A7418
  c->r[4]=c->r[31]+0xFFFF9C9Cu; // 801A741C
  c->lr=0x801A7424u; f_8005ED34(c); // 801A7420
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7424
  c->r[4]=c->r[30]|c->r[30]; // 801A7428
  c->r[3]=c->r[1]+0x00000084u; // 801A742C
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A7430
  c->ctr=c->r[12]; // 801A7434
  if (true) { c->lr=0x801A743Cu; dispatch(c,c->ctr); } // 801A7438
  c->r[3]=c->r[1]+0x000000A8u; // 801A743C
  c->r[4]=c->r[1]+0x00000084u; // 801A7440
  c->r[5]=c->r[1]+0x00000078u; // 801A7444
  c->lr=0x801A744Cu; f_80073ACC(c); // 801A7448
  {uint32_t ea=c->r[30]+0x000006D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A744C
  c->r[3]=c->r[1]+0x00000060u; // 801A7450
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7454
  c->r[4]=c->r[31]+0xFFFF9C9Cu; // 801A7458
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801A745C
  c->lr=0x801A7464u; f_8005ED34(c); // 801A7460
  c->r[3]=c->r[1]+0x0000006Cu; // 801A7464
  c->r[4]=c->r[1]+0x000000A8u; // 801A7468
  c->r[5]=c->r[1]+0x00000060u; // 801A746C
  c->lr=0x801A7474u; f_80073ACC(c); // 801A7470
  c->r[3]=c->r[1]+0x000000A8u; // 801A7474
  c->r[4]=c->r[1]+0x0000006Cu; // 801A7478
  c->r[5]=c->r[1]+0x000000E8u; // 801A747C
  c->lr=0x801A7484u; f_8005EB5C(c); // 801A7480
  cmps(c,0,(int32_t)c->r[3],0); // 801A7484
  if (!crb(c,2)) { goto L_801A74B0; } // 801A7488
  c->r[31]=0u+0x00000000u; // 801A748C
  W8(c->r[30]+0x00000654u,c->r[31]); // 801A7490
  c->r[3]=c->r[30]|c->r[30]; // 801A7494
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7498
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A749C
  c->ctr=c->r[12]; // 801A74A0
  if (true) { c->lr=0x801A74A8u; dispatch(c,c->ctr); } // 801A74A4
  W32(c->r[1]+0x00000430u,c->r[31]); // 801A74A8
  goto L_801A7758; // 801A74AC
L_801A74B0:;
  c->r[3]=c->r[30]|c->r[30]; // 801A74B0
  c->r[4]=0u+0x00000000u; // 801A74B4
  c->lr=0x801A74BCu; f_8005EA70(c); // 801A74B8
  c->r[3]=c->r[30]|c->r[30]; // 801A74BC
  c->lr=0x801A74C4u; f_8005EAA0(c); // 801A74C0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A74C4
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A74C8
  c->lr=0x801A74D0u; f_80101538(c); // 801A74CC
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A74D0
  c->r[4]=c->r[30]|c->r[30]; // 801A74D4
  c->r[3]=c->r[1]+0x00000054u; // 801A74D8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A74DC
  c->ctr=c->r[12]; // 801A74E0
  if (true) { c->lr=0x801A74E8u; dispatch(c,c->ctr); } // 801A74E4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A74E8
  c->r[4]=c->r[30]|c->r[30]; // 801A74EC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A74F0
  c->r[3]=c->r[1]+0x0000003Cu; // 801A74F4
  {uint32_t ea=c->r[1]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A74F8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A74FC
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 801A7500
  c->ctr=c->r[12]; // 801A7504
  if (true) { c->lr=0x801A750Cu; dispatch(c,c->ctr); } // 801A7508
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A750C
  c->r[3]=c->r[30]|c->r[30]; // 801A7510
  c->r[4]=c->r[1]+0x00000048u; // 801A7514
  c->r[5]=c->r[1]+0x0000003Cu; // 801A7518
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 801A751C
  c->r[6]=c->r[1]+0x00000110u; // 801A7520
  c->lr=0x801A7528u; f_801A8CB4(c); // 801A7524
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7528
  c->r[3]=c->r[30]+0x000006ACu; // 801A752C
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7530
  c->f[2]=-c->f[0]; // 801A7534
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A7538
  c->lr=0x801A7540u; f_800A7B08(c); // 801A753C
  c->r[0]=0u+0x00000001u; // 801A7540
  W8(c->r[30]+0x00000654u,c->r[0]); // 801A7544
  c->r[3]=c->r[30]|c->r[30]; // 801A7548
  c->r[4]=0u+0x00007D64u; // 801A754C
  c->r[5]=0u+0x00000001u; // 801A7550
  c->lr=0x801A7558u; f_80064744(c); // 801A7554
  c->r[0]=0u+0x00000100u; // 801A7558
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A755C
  goto L_801A7750; // 801A7560
L_801A7564:;
  c->r[3]=c->r[30]+0x00000354u; // 801A7564
  c->lr=0x801A756Cu; f_800667AC(c); // 801A7568
  cmps(c,0,(int32_t)c->r[3],0); // 801A756C
  if (crb(c,2)) { goto L_801A7750; } // 801A7570
  c->r[3]=c->r[30]|c->r[30]; // 801A7574
  c->r[4]=0u+0x00007D69u; // 801A7578
  c->r[5]=0u+0x00000001u; // 801A757C
  c->lr=0x801A7584u; f_80064744(c); // 801A7580
  c->r[0]=0u+0x00000200u; // 801A7584
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A7588
  goto L_801A7750; // 801A758C
L_801A7590:;
  c->r[3]=c->r[30]+0x000006ACu; // 801A7590
  c->lr=0x801A7598u; f_800A7B64(c); // 801A7594
  c->r[0]=0u+0x00000000u; // 801A7598
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A759C
  c->r[3]=c->r[1]+0x00000008u; // 801A75A0
  c->lr=0x801A75A8u; f_8004714C(c); // 801A75A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A75A8
  c->r[3]=c->r[30]+0x000006ACu; // 801A75AC
  c->lr=0x801A75B4u; f_800A7BEC(c); // 801A75B0
  c->f[1]=-c->f[1]; // 801A75B4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A75B8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801A75BC
  c->r[3]=c->r[30]|c->r[30]; // 801A75C0
  c->r[4]=c->r[1]+0x00000030u; // 801A75C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A75C8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801A75CC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801A75D0
  c->lr=0x801A75D8u; f_80083340(c); // 801A75D4
  c->r[3]=c->r[30]|c->r[30]; // 801A75D8
  c->lr=0x801A75E0u; f_8005EA80(c); // 801A75DC
  cmps(c,0,(int32_t)c->r[3],0); // 801A75E0
  if (crb(c,2)) { goto L_801A7750; } // 801A75E4
  c->r[3]=c->r[30]|c->r[30]; // 801A75E8
  c->lr=0x801A75F0u; f_8005EAA0(c); // 801A75EC
  c->r[4]=c->r[3]|c->r[3]; // 801A75F0
  c->r[3]=c->r[1]+0x0000009Cu; // 801A75F4
  c->r[4]=c->r[4]+0x0000002Cu; // 801A75F8
  c->lr=0x801A7600u; f_8005CD7C(c); // 801A75FC
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7600
  c->r[4]=c->r[30]|c->r[30]; // 801A7604
  c->r[3]=c->r[1]+0x00000024u; // 801A7608
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A760C
  c->ctr=c->r[12]; // 801A7610
  if (true) { c->lr=0x801A7618u; dispatch(c,c->ctr); } // 801A7614
  c->r[3]=c->r[1]+0x00000090u; // 801A7618
  c->r[4]=c->r[1]+0x00000024u; // 801A761C
  c->r[5]=c->r[1]+0x0000009Cu; // 801A7620
  c->lr=0x801A7628u; f_8005FC60(c); // 801A7624
  c->r[3]=c->r[1]+0x00000090u; // 801A7628
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 801A762C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801A7630
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7634
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801A7638
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801A763C
  {uint32_t ea=c->r[2]+0xFFFFC4A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7640
  fcmp(c,0,c->f[1],c->f[0]); // 801A7644
  c->r[0]=c->cr; // 801A7648
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801A764C
  if (crb(c,2)) { goto L_801A7668; } // 801A7650
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7654
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7658
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 801A765C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 801A7660
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 801A7664
L_801A7668:;
  c->r[3]=c->r[1]+0x00000090u; // 801A7668
  c->r[5]=0u+0x806A0000u; // 801A766C
  c->r[4]=c->r[3]|c->r[3]; // 801A7670
  c->r[5]=c->r[5]+0x00000AA8u; // 801A7674
  c->lr=0x801A767Cu; f_8030E0BC(c); // 801A7678
  {uint32_t ea=c->r[2]+0xFFFFC494u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A767C
  c->r[3]=c->r[1]+0x0000000Cu; // 801A7680
  c->r[4]=c->r[1]+0x00000090u; // 801A7684
  c->lr=0x801A768Cu; f_8005ED34(c); // 801A7688
  c->r[3]=c->r[1]+0x00000018u; // 801A768C
  c->r[4]=c->r[1]+0x0000009Cu; // 801A7690
  c->r[5]=c->r[1]+0x0000000Cu; // 801A7694
  c->lr=0x801A769Cu; f_80073ACC(c); // 801A7698
  c->r[3]=c->r[30]+0x000001B8u; // 801A769C
  c->r[4]=c->r[1]+0x000000B8u; // 801A76A0
  c->lr=0x801A76A8u; f_80382F2C(c); // 801A76A4
  c->r[3]=c->r[1]+0x000000B8u; // 801A76A8
  c->r[4]=c->r[1]+0x00000018u; // 801A76AC
  c->lr=0x801A76B4u; f_8005CDC8(c); // 801A76B0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A76B4
  c->r[3]=c->r[30]|c->r[30]; // 801A76B8
  c->r[4]=c->r[1]+0x000000B8u; // 801A76BC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A76C0
  c->ctr=c->r[12]; // 801A76C4
  if (true) { c->lr=0x801A76CCu; dispatch(c,c->ctr); } // 801A76C8
  c->r[3]=c->r[30]+0x00000354u; // 801A76CC
  c->lr=0x801A76D4u; f_800667AC(c); // 801A76D0
  cmps(c,0,(int32_t)c->r[3],0); // 801A76D4
  if (crb(c,2)) { goto L_801A7750; } // 801A76D8
  c->r[3]=c->r[30]|c->r[30]; // 801A76DC
  c->r[4]=0u+0x00007D6Eu; // 801A76E0
  c->r[5]=0u+0x00000001u; // 801A76E4
  c->lr=0x801A76ECu; f_80064744(c); // 801A76E8
  c->r[0]=0u+0x00000300u; // 801A76EC
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A76F0
  goto L_801A7750; // 801A76F4
L_801A76F8:;
  c->r[3]=c->r[30]+0x00000354u; // 801A76F8
  c->lr=0x801A7700u; f_800667AC(c); // 801A76FC
  cmps(c,0,(int32_t)c->r[3],0); // 801A7700
  if (crb(c,2)) { goto L_801A7750; } // 801A7704
  c->r[3]=c->r[30]|c->r[30]; // 801A7708
  c->lr=0x801A7710u; f_801A8858(c); // 801A770C
  c->r[4]=0u+0x80760000u; // 801A7710
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7714
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A7718
  c->r[3]=c->r[30]|c->r[30]; // 801A771C
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A7720
  c->lr=0x801A7728u; f_80061DBC(c); // 801A7724
  c->r[0]=0u+0x00000000u; // 801A7728
  W8(c->r[30]+0x00000654u,c->r[0]); // 801A772C
  c->r[3]=c->r[30]|c->r[30]; // 801A7730
  c->r[4]=0u+0x00000002u; // 801A7734
  c->lr=0x801A773Cu; f_801A87F4(c); // 801A7738
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A773C
  c->r[3]=c->r[30]|c->r[30]; // 801A7740
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A7744
  c->ctr=c->r[12]; // 801A7748
  if (true) { c->lr=0x801A7750u; dispatch(c,c->ctr); } // 801A774C
L_801A7750:;
  c->r[0]=0u+0x00000000u; // 801A7750
  W32(c->r[1]+0x00000430u,c->r[0]); // 801A7754
L_801A7758:;
  c->r[0]=R32(c->r[1]+0x00000454u); // 801A7758
  {uint32_t ea=c->r[1]+0x00000448u; psq_load(c,31,ea,0,0);} // 801A775C
  {uint32_t ea=c->r[1]+0x00000440u; c->f[31]=RF64(ea);} // 801A7760
  c->r[31]=R32(c->r[1]+0x0000043Cu); // 801A7764
  c->r[30]=R32(c->r[1]+0x00000438u); // 801A7768
  c->lr=c->r[0]; // 801A776C
  c->r[1]=c->r[1]+0x00000450u; // 801A7770
  return; // 801A7774
}

// fn_801A7778
void f_801A7778(Ctx* __restrict c) {
  trace_call(0x801A7778u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7778
  c->r[0]=c->lr; // 801A777C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A7780
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801A7784
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801A7788
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801A778C
  c->r[31]=c->r[3]|c->r[3]; // 801A7790
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A7794
  cmps(c,0,(int32_t)c->r[0],0); // 801A7798
  if (crb(c,2)) { goto L_801A77BC; } // 801A779C
  cmps(c,0,(int32_t)c->r[0],256); // 801A77A0
  if (crb(c,2)) { goto L_801A7810; } // 801A77A4
  cmps(c,0,(int32_t)c->r[0],512); // 801A77A8
  if (crb(c,2)) { goto L_801A783C; } // 801A77AC
  cmps(c,0,(int32_t)c->r[0],768); // 801A77B0
  if (crb(c,2)) { goto L_801A78BC; } // 801A77B4
  goto L_801A7904; // 801A77B8
L_801A77BC:;
  c->r[4]=0u+0x00000000u; // 801A77BC
  c->lr=0x801A77C4u; f_801A87F4(c); // 801A77C0
  c->r[3]=c->r[31]|c->r[31]; // 801A77C4
  c->lr=0x801A77CCu; f_801A8858(c); // 801A77C8
  c->r[3]=c->r[31]|c->r[31]; // 801A77CC
  c->r[4]=0u+0x00000000u; // 801A77D0
  c->lr=0x801A77D8u; f_8005EA70(c); // 801A77D4
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A77D8
  c->r[3]=c->r[31]+0x000006ACu; // 801A77DC
  {uint32_t ea=c->r[13]+0xFFFF8D34u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A77E0
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A77E4
  c->lr=0x801A77ECu; f_800A7B08(c); // 801A77E8
  c->r[0]=0u+0x00000000u; // 801A77EC
  W8(c->r[31]+0x00000654u,c->r[0]); // 801A77F0
  c->r[3]=c->r[31]|c->r[31]; // 801A77F4
  c->r[4]=0u+0x00007D73u; // 801A77F8
  c->r[5]=0u+0x00000001u; // 801A77FC
  c->lr=0x801A7804u; f_80064744(c); // 801A7800
  c->r[0]=0u+0x00000100u; // 801A7804
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7808
  goto L_801A7904; // 801A780C
L_801A7810:;
  c->r[3]=c->r[3]+0x00000354u; // 801A7810
  c->lr=0x801A7818u; f_800667AC(c); // 801A7814
  cmps(c,0,(int32_t)c->r[3],0); // 801A7818
  if (crb(c,2)) { goto L_801A7904; } // 801A781C
  c->r[3]=c->r[31]|c->r[31]; // 801A7820
  c->r[4]=0u+0x00007D78u; // 801A7824
  c->r[5]=0u+0x00000001u; // 801A7828
  c->lr=0x801A7830u; f_80064744(c); // 801A782C
  c->r[0]=0u+0x00000200u; // 801A7830
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A7834
  goto L_801A7904; // 801A7838
L_801A783C:;
  c->r[3]=c->r[3]+0x000006ACu; // 801A783C
  c->lr=0x801A7844u; f_800A7B64(c); // 801A7840
  c->r[0]=0u+0x00000000u; // 801A7844
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A7848
  c->r[3]=c->r[1]+0x00000008u; // 801A784C
  c->lr=0x801A7854u; f_8004714C(c); // 801A7850
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A7854
  c->r[3]=c->r[31]+0x000006ACu; // 801A7858
  c->lr=0x801A7860u; f_800A7BEC(c); // 801A785C
  c->f[1]=-c->f[1]; // 801A7860
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7864
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801A7868
  c->r[3]=c->r[31]|c->r[31]; // 801A786C
  c->r[4]=c->r[1]+0x00000018u; // 801A7870
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A7874
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801A7878
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801A787C
  c->lr=0x801A7884u; f_80083340(c); // 801A7880
  c->r[3]=c->r[31]|c->r[31]; // 801A7884
  c->lr=0x801A788Cu; f_8005EA80(c); // 801A7888
  cmps(c,0,(int32_t)c->r[3],0); // 801A788C
  if (crb(c,2)) { goto L_801A7904; } // 801A7890
  c->r[3]=c->r[31]|c->r[31]; // 801A7894
  c->r[4]=0u+0x00000001u; // 801A7898
  c->lr=0x801A78A0u; f_8005EA70(c); // 801A789C
  c->r[3]=c->r[31]|c->r[31]; // 801A78A0
  c->r[4]=0u+0x00007D7Du; // 801A78A4
  c->r[5]=0u+0x00000001u; // 801A78A8
  c->lr=0x801A78B0u; f_80064744(c); // 801A78AC
  c->r[0]=0u+0x00000300u; // 801A78B0
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801A78B4
  goto L_801A7904; // 801A78B8
L_801A78BC:;
  c->r[3]=c->r[3]+0x00000354u; // 801A78BC
  c->lr=0x801A78C4u; f_800667AC(c); // 801A78C0
  cmps(c,0,(int32_t)c->r[3],0); // 801A78C4
  if (crb(c,2)) { goto L_801A7904; } // 801A78C8
  c->r[4]=0u+0x80760000u; // 801A78CC
  c->r[3]=c->r[1]+0x0000000Cu; // 801A78D0
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A78D4
  c->lr=0x801A78DCu; f_8005FC20(c); // 801A78D8
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A78DC
  c->r[3]=c->r[31]|c->r[31]; // 801A78E0
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A78E4
  c->r[4]=c->r[1]+0x0000000Cu; // 801A78E8
  c->lr=0x801A78F0u; f_80061DBC(c); // 801A78EC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A78F0
  c->r[3]=c->r[31]|c->r[31]; // 801A78F4
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A78F8
  c->ctr=c->r[12]; // 801A78FC
  if (true) { c->lr=0x801A7904u; dispatch(c,c->ctr); } // 801A7900
L_801A7904:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801A7904
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801A7908
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801A790C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801A7910
  c->lr=c->r[0]; // 801A7914
  c->r[1]=c->r[1]+0x00000040u; // 801A7918
  return; // 801A791C
}

// fn_801A7920
void f_801A7920(Ctx* __restrict c) {
  trace_call(0x801A7920u);
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7920
  c->r[0]=c->lr; // 801A7924
  W32(c->r[1]+0x000004A4u,c->r[0]); // 801A7928
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[31]);} // 801A792C
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,31,ea,0,0);} // 801A7930
  W32(c->r[1]+0x0000048Cu,c->r[31]); // 801A7934
  W32(c->r[1]+0x00000488u,c->r[30]); // 801A7938
  c->r[30]=c->r[3]|c->r[3]; // 801A793C
  c->r[3]=c->r[1]+0x00000130u; // 801A7940
  c->lr=0x801A7948u; f_8006585C(c); // 801A7944
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 801A7948
  cmps(c,0,(int32_t)c->r[0],0); // 801A794C
  if (crb(c,2)) { goto L_801A7970; } // 801A7950
  cmps(c,0,(int32_t)c->r[0],16); // 801A7954
  if (crb(c,2)) { goto L_801A79B4; } // 801A7958
  cmps(c,0,(int32_t)c->r[0],32); // 801A795C
  if (crb(c,2)) { goto L_801A79FC; } // 801A7960
  cmps(c,0,(int32_t)c->r[0],256); // 801A7964
  if (crb(c,2)) { goto L_801A7C5C; } // 801A7968
  goto L_801A7C9C; // 801A796C
L_801A7970:;
  {uint32_t ea=c->r[2]+0xFFFFC46Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7970
  c->r[3]=c->r[30]+0x000006ACu; // 801A7974
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A7978
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A797C
  c->lr=0x801A7984u; f_800A7B08(c); // 801A7980
  c->r[3]=c->r[30]|c->r[30]; // 801A7984
  c->r[4]=0u+0x00000000u; // 801A7988
  c->lr=0x801A7990u; f_8005EA70(c); // 801A798C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7990
  c->r[3]=c->r[30]|c->r[30]; // 801A7994
  {uint32_t ea=c->r[30]+0x00000564u; WF32(ea,c->f[0]);} // 801A7998
  c->r[5]=0u+0x00000001u; // 801A799C
  c->r[4]=R32(c->r[30]+0x0000066Cu); // 801A79A0
  c->lr=0x801A79A8u; f_80064744(c); // 801A79A4
  c->r[0]=0u+0x00000010u; // 801A79A8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A79AC
  goto L_801A7C9C; // 801A79B0
L_801A79B4:;
  c->r[3]=c->r[30]+0x00000354u; // 801A79B4
  c->lr=0x801A79BCu; f_800667AC(c); // 801A79B8
  cmps(c,0,(int32_t)c->r[3],0); // 801A79BC
  if (crb(c,2)) { goto L_801A7C9C; } // 801A79C0
  c->r[4]=R32(c->r[30]+0x00000670u); // 801A79C4
  c->r[3]=c->r[30]|c->r[30]; // 801A79C8
  c->r[5]=0u+0x00000001u; // 801A79CC
  c->lr=0x801A79D4u; f_80064744(c); // 801A79D0
  c->r[3]=R32(c->r[30]+0x00000404u); // 801A79D4
  c->lr=0x801A79DCu; f_802EA43C(c); // 801A79D8
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A79DC
  c->r[0]=0u+0x00000020u; // 801A79E0
  {uint32_t ea=c->r[30]+0x000006A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A79E4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801A79E8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A79EC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A79F0
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A79F4
  goto L_801A7C9C; // 801A79F8
L_801A79FC:;
  {uint32_t ea=c->r[30]+0x00000564u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A79FC
  c->r[3]=c->r[30]+0x000001B8u; // 801A7A00
  {uint32_t ea=c->r[30]+0x000006A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7A04
  c->r[4]=c->r[1]+0x000000A0u; // 801A7A08
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801A7A0C
  c->lr=0x801A7A14u; f_80382F2C(c); // 801A7A10
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7A14
  c->r[3]=c->r[1]+0x00000010u; // 801A7A18
  c->f[2]=c->f[1]; // 801A7A1C
  c->f[3]=c->f[1]; // 801A7A20
  c->lr=0x801A7A28u; f_8005FD70(c); // 801A7A24
  c->r[4]=c->r[3]|c->r[3]; // 801A7A28
  c->r[3]=c->r[1]+0x000000A0u; // 801A7A2C
  c->lr=0x801A7A34u; f_8005CDC8(c); // 801A7A30
  c->f[1]=c->f[31]; // 801A7A34
  c->r[3]=c->r[30]|c->r[30]; // 801A7A38
  c->r[4]=c->r[1]+0x00000100u; // 801A7A3C
  c->r[5]=c->r[1]+0x000000A0u; // 801A7A40
  c->r[6]=c->r[30]+0x00000690u; // 801A7A44
  c->lr=0x801A7A4Cu; f_801A8A60(c); // 801A7A48
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7A4C
  c->r[4]=c->r[30]|c->r[30]; // 801A7A50
  c->r[3]=c->r[1]+0x00000040u; // 801A7A54
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A7A58
  c->ctr=c->r[12]; // 801A7A5C
  if (true) { c->lr=0x801A7A64u; dispatch(c,c->ctr); } // 801A7A60
  c->r[3]=c->r[1]+0x00000100u; // 801A7A64
  c->r[4]=c->r[1]+0x00000040u; // 801A7A68
  c->lr=0x801A7A70u; f_8005CDC8(c); // 801A7A6C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7A70
  c->r[3]=c->r[30]|c->r[30]; // 801A7A74
  c->r[4]=c->r[1]+0x00000100u; // 801A7A78
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A7A7C
  c->ctr=c->r[12]; // 801A7A80
  if (true) { c->lr=0x801A7A88u; dispatch(c,c->ctr); } // 801A7A84
  c->r[31]=0u+0x00000000u; // 801A7A88
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801A7A8C
  c->r[3]=c->r[1]+0x0000000Cu; // 801A7A90
  c->lr=0x801A7A98u; f_8004714C(c); // 801A7A94
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7A98
  c->r[3]=c->r[30]+0x000006ACu; // 801A7A9C
  {uint32_t ea=c->r[30]+0x00000564u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7AA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801A7AA4
  {uint32_t ea=c->r[30]+0x00000564u; WF32(ea,c->f[0]);} // 801A7AA8
  c->lr=0x801A7AB0u; f_800A7B64(c); // 801A7AAC
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7AB0
  c->r[4]=c->r[30]|c->r[30]; // 801A7AB4
  c->r[3]=c->r[1]+0x00000064u; // 801A7AB8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A7ABC
  c->ctr=c->r[12]; // 801A7AC0
  if (true) { c->lr=0x801A7AC8u; dispatch(c,c->ctr); } // 801A7AC4
  c->r[3]=c->r[1]+0x00000058u; // 801A7AC8
  c->r[4]=c->r[30]+0x0000069Cu; // 801A7ACC
  c->lr=0x801A7AD4u; f_8005CD7C(c); // 801A7AD0
  c->r[3]=c->r[30]+0x000006ACu; // 801A7AD4
  c->lr=0x801A7ADCu; f_800A7BEC(c); // 801A7AD8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7ADC
  c->r[3]=c->r[1]+0x00000008u; // 801A7AE0
  W8(c->r[1]+0x00000008u,c->r[31]); // 801A7AE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801A7AE8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801A7AEC
  c->lr=0x801A7AF4u; f_8004714C(c); // 801A7AF0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7AF4
  c->r[3]=c->r[1]+0x00000058u; // 801A7AF8
  c->lr=0x801A7B00u; f_800774A8(c); // 801A7AFC
  c->r[3]=c->r[30]|c->r[30]; // 801A7B00
  c->r[4]=c->r[1]+0x00000058u; // 801A7B04
  c->lr=0x801A7B0Cu; f_80083340(c); // 801A7B08
  {uint32_t ea=c->r[30]+0x000001BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7B0C
  c->r[3]=c->r[1]+0x0000004Cu; // 801A7B10
  {uint32_t ea=c->r[30]+0x000001CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A7B14
  {uint32_t ea=c->r[30]+0x000001DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A7B18
  c->lr=0x801A7B20u; f_8005FD70(c); // 801A7B1C
  {uint32_t ea=c->r[30]+0x00000364u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7B20
  {uint32_t ea=c->r[2]+0xFFFFC490u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7B24
  fcmp(c,0,c->f[1],c->f[0]); // 801A7B28
  if (!crb(c,1)) { goto L_801A7BE0; } // 801A7B2C
  c->r[3]=c->r[1]+0x0000001Cu; // 801A7B30
  c->r[4]=c->r[1]+0x00000064u; // 801A7B34
  c->r[5]=c->r[1]+0x0000004Cu; // 801A7B38
  c->lr=0x801A7B40u; f_8005FC60(c); // 801A7B3C
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7B40
  c->r[3]=c->r[1]+0x00000028u; // 801A7B44
  c->r[4]=c->r[1]+0x0000004Cu; // 801A7B48
  c->lr=0x801A7B50u; f_8005ED34(c); // 801A7B4C
  c->r[3]=c->r[1]+0x00000034u; // 801A7B50
  c->r[4]=c->r[1]+0x00000064u; // 801A7B54
  c->r[5]=c->r[1]+0x00000028u; // 801A7B58
  c->lr=0x801A7B60u; f_80073ACC(c); // 801A7B5C
  c->r[3]=c->r[1]+0x00000034u; // 801A7B60
  c->r[4]=c->r[1]+0x0000001Cu; // 801A7B64
  c->r[5]=c->r[1]+0x00000130u; // 801A7B68
  c->lr=0x801A7B70u; f_8005EB5C(c); // 801A7B6C
  cmps(c,0,(int32_t)c->r[3],0); // 801A7B70
  if (crb(c,2)) { goto L_801A7BE0; } // 801A7B74
  c->r[3]=c->r[30]+0x000001B8u; // 801A7B78
  c->r[4]=c->r[1]+0x00000070u; // 801A7B7C
  c->lr=0x801A7B84u; f_80382F2C(c); // 801A7B80
  c->r[3]=c->r[1]+0x00000070u; // 801A7B84
  c->r[4]=c->r[1]+0x00000158u; // 801A7B88
  c->lr=0x801A7B90u; f_8005CDC8(c); // 801A7B8C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7B90
  c->r[3]=c->r[30]|c->r[30]; // 801A7B94
  c->r[4]=c->r[1]+0x00000070u; // 801A7B98
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A7B9C
  c->ctr=c->r[12]; // 801A7BA0
  if (true) { c->lr=0x801A7BA8u; dispatch(c,c->ctr); } // 801A7BA4
  c->r[3]=c->r[30]+0x00000684u; // 801A7BA8
  c->r[4]=c->r[1]+0x00000164u; // 801A7BAC
  c->lr=0x801A7BB4u; f_8005DC84(c); // 801A7BB0
  c->r[3]=c->r[30]|c->r[30]; // 801A7BB4
  c->r[4]=0u+0x00000001u; // 801A7BB8
  c->lr=0x801A7BC0u; f_8005EA70(c); // 801A7BBC
  c->r[4]=R32(c->r[30]+0x00000674u); // 801A7BC0
  c->r[3]=c->r[30]|c->r[30]; // 801A7BC4
  c->r[5]=0u+0x00000001u; // 801A7BC8
  c->lr=0x801A7BD0u; f_80064744(c); // 801A7BCC
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7BD0
  c->r[0]=0u+0x00000100u; // 801A7BD4
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A7BD8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A7BDC
L_801A7BE0:;
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7BE0
  fcmp(c,0,c->f[31],c->f[0]); // 801A7BE4
  if (!crb(c,1)) { goto L_801A7C9C; } // 801A7BE8
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 801A7BEC
  cmps(c,0,(int32_t)c->r[0],256); // 801A7BF0
  if (crb(c,2)) { goto L_801A7C9C; } // 801A7BF4
  c->r[3]=c->r[1]+0x000000D0u; // 801A7BF8
  c->r[4]=c->r[30]+0x00000684u; // 801A7BFC
  c->r[5]=c->r[30]+0x00000690u; // 801A7C00
  c->lr=0x801A7C08u; f_8010A6BC(c); // 801A7C04
  c->r[3]=c->r[1]+0x000000D0u; // 801A7C08
  c->r[4]=c->r[30]+0x00000678u; // 801A7C0C
  c->lr=0x801A7C14u; f_8005CDC8(c); // 801A7C10
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7C14
  c->r[3]=c->r[30]|c->r[30]; // 801A7C18
  c->r[4]=c->r[1]+0x000000D0u; // 801A7C1C
  c->r[12]=R32(c->r[12]+0x000000F0u); // 801A7C20
  c->ctr=c->r[12]; // 801A7C24
  if (true) { c->lr=0x801A7C2Cu; dispatch(c,c->ctr); } // 801A7C28
  c->r[3]=c->r[30]|c->r[30]; // 801A7C2C
  c->r[4]=0u+0x00000001u; // 801A7C30
  c->lr=0x801A7C38u; f_8005EA70(c); // 801A7C34
  c->r[4]=R32(c->r[30]+0x00000674u); // 801A7C38
  c->r[3]=c->r[30]|c->r[30]; // 801A7C3C
  c->r[5]=0u+0x00000001u; // 801A7C40
  c->lr=0x801A7C48u; f_80064744(c); // 801A7C44
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7C48
  c->r[0]=0u+0x00000100u; // 801A7C4C
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[0]);} // 801A7C50
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A7C54
  goto L_801A7C9C; // 801A7C58
L_801A7C5C:;
  c->r[3]=c->r[30]+0x00000354u; // 801A7C5C
  c->lr=0x801A7C64u; f_800667AC(c); // 801A7C60
  cmps(c,0,(int32_t)c->r[3],0); // 801A7C64
  if (crb(c,2)) { goto L_801A7C9C; } // 801A7C68
  c->r[3]=c->r[30]|c->r[30]; // 801A7C6C
  c->r[4]=c->r[30]+0x00000684u; // 801A7C70
  c->lr=0x801A7C78u; f_80061C18(c); // 801A7C74
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7C78
  c->r[3]=c->r[30]|c->r[30]; // 801A7C7C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A7C80
  c->ctr=c->r[12]; // 801A7C84
  if (true) { c->lr=0x801A7C8Cu; dispatch(c,c->ctr); } // 801A7C88
  c->r[0]=0u+0x00000000u; // 801A7C8C
  W32(c->r[1]+0x00000478u,c->r[0]); // 801A7C90
  c->r[3]=0u+0x00000001u; // 801A7C94
  goto L_801A7CA8; // 801A7C98
L_801A7C9C:;
  c->r[0]=0u+0x00000000u; // 801A7C9C
  W32(c->r[1]+0x00000478u,c->r[0]); // 801A7CA0
  c->r[3]=0u+0x00000000u; // 801A7CA4
L_801A7CA8:;
  c->r[0]=R32(c->r[1]+0x000004A4u); // 801A7CA8
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,31,ea,0,0);} // 801A7CAC
  {uint32_t ea=c->r[1]+0x00000490u; c->f[31]=RF64(ea);} // 801A7CB0
  c->r[31]=R32(c->r[1]+0x0000048Cu); // 801A7CB4
  c->r[30]=R32(c->r[1]+0x00000488u); // 801A7CB8
  c->lr=c->r[0]; // 801A7CBC
  c->r[1]=c->r[1]+0x000004A0u; // 801A7CC0
  return; // 801A7CC4
}

// fn_801A7CC8
void f_801A7CC8(Ctx* __restrict c) {
  trace_call(0x801A7CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7CC8
  c->r[0]=c->lr; // 801A7CCC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A7CD0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801A7CD4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801A7CD8
  c->r[30]=c->r[3]|c->r[3]; // 801A7CDC
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 801A7CE0
  cmps(c,1,(int32_t)c->r[0],0); // 801A7CE4
  if (crb(c,6)) { goto L_801A7CF8; } // 801A7CE8
  cmps(c,1,(int32_t)c->r[0],256); // 801A7CEC
  if (crb(c,6)) { goto L_801A7D20; } // 801A7CF0
  goto L_801A7E0C; // 801A7CF4
L_801A7CF8:;
  c->r[4]=0u+0x00000003u; // 801A7CF8
  c->lr=0x801A7D00u; f_801A37AC(c); // 801A7CFC
  c->r[3]=c->r[30]|c->r[30]; // 801A7D00
  c->r[4]=0u+0x00000002u; // 801A7D04
  c->lr=0x801A7D0Cu; f_801A37C8(c); // 801A7D08
  c->r[3]=c->r[30]|c->r[30]; // 801A7D0C
  c->lr=0x801A7D14u; f_801A860C(c); // 801A7D10
  c->r[0]=0u+0x00000100u; // 801A7D14
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801A7D18
  goto L_801A7E0C; // 801A7D1C
L_801A7D20:;
  c->r[31]=R32(c->r[3]+0x0000041Cu); // 801A7D20
  c->r[4]=0u+0x00000000u; // 801A7D24
  c->r[3]=c->r[31]|c->r[31]; // 801A7D28
  c->lr=0x801A7D30u; f_800C30A0(c); // 801A7D2C
  c->r[4]=c->r[3]|c->r[3]; // 801A7D30
  c->r[3]=c->r[31]+0x00000004u; // 801A7D34
  c->lr=0x801A7D3Cu; f_800A09F0(c); // 801A7D38
  c->r[4]=c->r[3]|c->r[3]; // 801A7D3C
  c->r[3]=c->r[1]+0x0000002Cu; // 801A7D40
  c->lr=0x801A7D48u; f_8005CD7C(c); // 801A7D44
  {uint32_t ea=c->r[2]+0xFFFFC404u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7D48
  c->r[3]=c->r[30]|c->r[30]; // 801A7D4C
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A7D50
  c->r[4]=c->r[1]+0x0000002Cu; // 801A7D54
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A7D58
  c->lr=0x801A7D60u; f_800634E8(c); // 801A7D5C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7D60
  c->r[4]=c->r[30]|c->r[30]; // 801A7D64
  c->r[3]=c->r[1]+0x00000008u; // 801A7D68
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A7D6C
  c->ctr=c->r[12]; // 801A7D70
  if (true) { c->lr=0x801A7D78u; dispatch(c,c->ctr); } // 801A7D74
  c->r[3]=c->r[1]+0x00000014u; // 801A7D78
  c->r[4]=c->r[1]+0x0000002Cu; // 801A7D7C
  c->r[5]=c->r[1]+0x00000008u; // 801A7D80
  c->lr=0x801A7D88u; f_8005FC60(c); // 801A7D84
  c->r[3]=c->r[1]+0x00000020u; // 801A7D88
  c->r[4]=c->r[1]+0x00000014u; // 801A7D8C
  c->lr=0x801A7D94u; f_8005CD7C(c); // 801A7D90
  c->r[4]=0u+0x806A0000u; // 801A7D94
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,4,ea,0,0);} // 801A7D98
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 801A7D9C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A7DA0
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 801A7DA4
  {uint32_t ea=c->r[4]+0x00000AA8u; c->f[2]=c->ps1[2]=RF32(ea); c->r[4]=ea;} // 801A7DA8
  {double t0=S(std::fma(c->f[4],c->ps1[3],c->f[3])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[3])); c->f[4]=t0; c->ps1[4]=t1;} // 801A7DAC
  fcmp(c,0,c->f[2],c->f[4]); // 801A7DB0
  if (crb(c,0)) { goto L_801A7DC0; } // 801A7DB4
  c->f[4]=c->f[2]; // 801A7DB8
  goto L_801A7DE0; // 801A7DBC
L_801A7DC0:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A7DC0
  c->f[3]=frsqrte(c->f[4]); // 801A7DC4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7DC8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 801A7DCC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801A7DD0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[4],-c->f[0])); // 801A7DD4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801A7DD8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[3]); // 801A7DDC
L_801A7DE0:;
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7DE0
  fcmp(c,1,c->f[4],c->f[0]); // 801A7DE4
  if (!crb(c,4)) { goto L_801A7E0C; } // 801A7DE8
  c->r[3]=c->r[30]|c->r[30]; // 801A7DEC
  c->r[4]=0u+0x00000002u; // 801A7DF0
  c->lr=0x801A7DF8u; f_801A37AC(c); // 801A7DF4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801A7DF8
  c->r[3]=c->r[30]|c->r[30]; // 801A7DFC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801A7E00
  c->ctr=c->r[12]; // 801A7E04
  if (true) { c->lr=0x801A7E0Cu; dispatch(c,c->ctr); } // 801A7E08
L_801A7E0C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801A7E0C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801A7E10
  c->r[30]=R32(c->r[1]+0x00000038u); // 801A7E14
  c->lr=c->r[0]; // 801A7E18
  c->r[1]=c->r[1]+0x00000040u; // 801A7E1C
  return; // 801A7E20
}

// fn_801A7E24
void f_801A7E24(Ctx* __restrict c) {
  trace_call(0x801A7E24u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7E24
  c->r[0]=c->lr; // 801A7E28
  W32(c->r[1]+0x00000094u,c->r[0]); // 801A7E2C
  c->r[11]=c->r[1]+0x00000090u; // 801A7E30
  c->lr=0x801A7E38u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A7E34
  c->r[31]=c->r[1]|c->r[1]; // 801A7E38
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801A7E3C
  c->r[30]=c->r[3]|c->r[3]; // 801A7E40
  c->r[12]=R32(c->r[12]+0x00000100u); // 801A7E44
  c->ctr=c->r[12]; // 801A7E48
  if (true) { c->lr=0x801A7E50u; dispatch(c,c->ctr); } // 801A7E4C
  cmps(c,0,(int32_t)c->r[3],0); // 801A7E50
  if (!crb(c,2)) { goto L_801A7ED8; } // 801A7E54
  c->lr=0x801A7E5Cu; f_80062DCC(c); // 801A7E58
  c->r[4]=c->r[3]|c->r[3]; // 801A7E5C
  c->r[3]=c->r[30]|c->r[30]; // 801A7E60
  c->lr=0x801A7E68u; f_80062F4C(c); // 801A7E64
  c->r[0]=R8(c->r[30]+0x00000010u); // 801A7E68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A7E6C
  c->r[3]=c->r[30]+c->r[0]; // 801A7E70
  c->r[28]=R32(c->r[3]+0x00000014u); // 801A7E74
  cmps(c,0,(int32_t)c->r[28],0); // 801A7E78
  if (crb(c,2)) { goto L_801A7EA4; } // 801A7E7C
  c->r[29]=0u+0x00000000u; // 801A7E80
  W32(c->r[31]+0x00000074u,c->r[1]); // 801A7E84
  W8(c->r[31]+0x00000014u,c->r[29]); // 801A7E88
  c->lr=0x801A7E90u; f_80062DCC(c); // 801A7E8C
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A7E90
  c->r[0]=c->r[13]+0xFFFF80C8u; // 801A7E94
  W32(c->r[28]+0x00000004u,c->r[0]); // 801A7E98
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A7E9C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801A7EA0
L_801A7EA4:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801A7EA4
  c->r[0]=0u+0x00000000u; // 801A7EA8
  c->r[3]=c->r[30]|c->r[30]; // 801A7EAC
  c->r[4]=c->r[28]|c->r[28]; // 801A7EB0
  W32(c->r[28]+0x00000008u,c->r[0]); // 801A7EB4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801A7EB8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A7EBC
  c->lr=0x801A7EC4u; f_8006306C(c); // 801A7EC0
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A7EC4
  c->r[3]=c->r[28]|c->r[28]; // 801A7EC8
  c->r[0]=c->r[0]|0x40000000u; // 801A7ECC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A7ED0
  goto L_801A8280; // 801A7ED4
L_801A7ED8:;
  c->r[0]=R8(c->r[30]+0x00000654u); // 801A7ED8
  c->r[3]=0u+0x00000000u; // 801A7EDC
  cmps(c,0,(int32_t)c->r[0],0); // 801A7EE0
  if (crb(c,2)) { goto L_801A7EF8; } // 801A7EE4
  c->r[0]=R32(c->r[30]+0x00000614u); // 801A7EE8
  cmps(c,0,(int32_t)c->r[0],2); // 801A7EEC
  if (crb(c,2)) { goto L_801A7EF8; } // 801A7EF0
  c->r[3]=0u+0x00000001u; // 801A7EF4
L_801A7EF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A7EF8
  if (crb(c,2)) { goto L_801A7F0C; } // 801A7EFC
  c->r[3]=c->r[30]|c->r[30]; // 801A7F00
  c->lr=0x801A7F08u; f_801A52F8(c); // 801A7F04
  goto L_801A8280; // 801A7F08
L_801A7F0C:;
  c->r[0]=R32(c->r[30]+0x00000604u); // 801A7F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801A7F10
  if (!crb(c,2)) { goto L_801A7F98; } // 801A7F14
  c->lr=0x801A7F1Cu; f_8007AD40(c); // 801A7F18
  c->r[4]=c->r[3]|c->r[3]; // 801A7F1C
  c->r[3]=c->r[30]|c->r[30]; // 801A7F20
  c->lr=0x801A7F28u; f_80062F4C(c); // 801A7F24
  c->r[0]=R8(c->r[30]+0x00000010u); // 801A7F28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A7F2C
  c->r[3]=c->r[30]+c->r[0]; // 801A7F30
  c->r[28]=R32(c->r[3]+0x00000014u); // 801A7F34
  cmps(c,0,(int32_t)c->r[28],0); // 801A7F38
  if (crb(c,2)) { goto L_801A7F64; } // 801A7F3C
  c->r[29]=0u+0x00000000u; // 801A7F40
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 801A7F44
  W8(c->r[31]+0x00000010u,c->r[29]); // 801A7F48
  c->lr=0x801A7F50u; f_8007AD40(c); // 801A7F4C
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A7F50
  c->r[0]=c->r[13]+0xFFFF821Cu; // 801A7F54
  W32(c->r[28]+0x00000004u,c->r[0]); // 801A7F58
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A7F5C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801A7F60
L_801A7F64:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801A7F64
  c->r[0]=0u+0x00000000u; // 801A7F68
  c->r[3]=c->r[30]|c->r[30]; // 801A7F6C
  c->r[4]=c->r[28]|c->r[28]; // 801A7F70
  W32(c->r[28]+0x00000008u,c->r[0]); // 801A7F74
  c->r[0]=R32(c->r[30]+0x00000004u); // 801A7F78
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A7F7C
  c->lr=0x801A7F84u; f_8006306C(c); // 801A7F80
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A7F84
  c->r[3]=c->r[28]|c->r[28]; // 801A7F88
  c->r[0]=c->r[0]|0x40000000u; // 801A7F8C
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A7F90
  goto L_801A8280; // 801A7F94
L_801A7F98:;
  cmps(c,0,(int32_t)c->r[0],1); // 801A7F98
  if (!crb(c,2)) { goto L_801A7FC0; } // 801A7F9C
  {uint32_t ea=c->r[2]+0xFFFFC42Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A7FA0
  c->r[3]=c->r[30]|c->r[30]; // 801A7FA4
  {uint32_t ea=c->r[30]+0x000006BCu; WF32(ea,c->f[0]);} // 801A7FA8
  c->lr=0x801A7FB0u; f_8005E0F8(c); // 801A7FAC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801A7FB0
  c->r[0]=c->r[0]|0x40000000u; // 801A7FB4
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801A7FB8
  goto L_801A8280; // 801A7FBC
L_801A7FC0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801A7FC0
  if (!crb(c,2)) { goto L_801A803C; } // 801A7FC4
  c->lr=0x801A7FCCu; f_8007B170(c); // 801A7FC8
  c->r[4]=c->r[3]|c->r[3]; // 801A7FCC
  c->r[3]=c->r[30]|c->r[30]; // 801A7FD0
  c->lr=0x801A7FD8u; f_80062F4C(c); // 801A7FD4
  c->r[0]=R8(c->r[30]+0x00000010u); // 801A7FD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A7FDC
  c->r[3]=c->r[30]+c->r[0]; // 801A7FE0
  c->r[28]=R32(c->r[3]+0x00000014u); // 801A7FE4
  cmps(c,0,(int32_t)c->r[28],0); // 801A7FE8
  if (crb(c,2)) { goto L_801A8014; } // 801A7FEC
  c->r[29]=0u+0x00000000u; // 801A7FF0
  W32(c->r[31]+0x00000044u,c->r[1]); // 801A7FF4
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 801A7FF8
  c->lr=0x801A8000u; f_8007B170(c); // 801A7FFC
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A8000
  c->r[0]=c->r[13]+0xFFFF8228u; // 801A8004
  W32(c->r[28]+0x00000004u,c->r[0]); // 801A8008
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A800C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801A8010
L_801A8014:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801A8014
  c->r[0]=0u+0x00000000u; // 801A8018
  c->r[3]=c->r[30]|c->r[30]; // 801A801C
  c->r[4]=c->r[28]|c->r[28]; // 801A8020
  W32(c->r[28]+0x00000008u,c->r[0]); // 801A8024
  c->r[0]=R32(c->r[30]+0x00000004u); // 801A8028
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A802C
  c->lr=0x801A8034u; f_8006306C(c); // 801A8030
  c->r[3]=c->r[28]|c->r[28]; // 801A8034
  goto L_801A8280; // 801A8038
L_801A803C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801A803C
  if (!crb(c,2)) { goto L_801A8050; } // 801A8040
  c->r[3]=c->r[30]|c->r[30]; // 801A8044
  c->lr=0x801A804Cu; f_801A5E18(c); // 801A8048
  goto L_801A8280; // 801A804C
L_801A8050:;
  c->r[3]=R32(c->r[30]+0x00000420u); // 801A8050
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8054
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8058
  fcmp(c,0,c->f[1],c->f[0]); // 801A805C
  if (!crb(c,1)) { goto L_801A80D8; } // 801A8060
  c->lr=0x801A8068u; f_8007B0CC(c); // 801A8064
  c->r[4]=c->r[3]|c->r[3]; // 801A8068
  c->r[3]=c->r[30]|c->r[30]; // 801A806C
  c->lr=0x801A8074u; f_80062F4C(c); // 801A8070
  c->r[0]=R8(c->r[30]+0x00000010u); // 801A8074
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A8078
  c->r[3]=c->r[30]+c->r[0]; // 801A807C
  c->r[28]=R32(c->r[3]+0x00000014u); // 801A8080
  cmps(c,0,(int32_t)c->r[28],0); // 801A8084
  if (crb(c,2)) { goto L_801A80B0; } // 801A8088
  c->r[29]=0u+0x00000000u; // 801A808C
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 801A8090
  W8(c->r[31]+0x00000008u,c->r[29]); // 801A8094
  c->lr=0x801A809Cu; f_8007B0CC(c); // 801A8098
  W32(c->r[28]+0x00000000u,c->r[3]); // 801A809C
  c->r[0]=c->r[13]+0xFFFF8224u; // 801A80A0
  W32(c->r[28]+0x00000004u,c->r[0]); // 801A80A4
  W32(c->r[28]+0x00000008u,c->r[29]); // 801A80A8
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801A80AC
L_801A80B0:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801A80B0
  c->r[0]=0u+0x00000000u; // 801A80B4
  c->r[3]=c->r[30]|c->r[30]; // 801A80B8
  c->r[4]=c->r[28]|c->r[28]; // 801A80BC
  W32(c->r[28]+0x00000008u,c->r[0]); // 801A80C0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801A80C4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A80C8
  c->lr=0x801A80D0u; f_8006306C(c); // 801A80CC
  c->r[3]=c->r[28]|c->r[28]; // 801A80D0
  goto L_801A8280; // 801A80D4
L_801A80D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A80D8
  c->lr=0x801A80E0u; f_801A8528(c); // 801A80DC
  cmps(c,0,(int32_t)c->r[3],0); // 801A80E0
  if (crb(c,2)) { goto L_801A8100; } // 801A80E4
  c->r[3]=c->r[30]|c->r[30]; // 801A80E8
  c->r[4]=0u+0x00000004u; // 801A80EC
  c->lr=0x801A80F4u; f_801A3800(c); // 801A80F0
  c->r[3]=c->r[30]|c->r[30]; // 801A80F4
  c->lr=0x801A80FCu; f_80095784(c); // 801A80F8
  goto L_801A8280; // 801A80FC
L_801A8100:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 801A8100
  c->r[0]=R32(c->r[3]+0x000000A4u); // 801A8104
  cmps(c,0,(int32_t)c->r[0],2); // 801A8108
  if (!crb(c,1)) { goto L_801A817C; } // 801A810C
  c->r[0]=R32(c->r[30]+0x00000610u); // 801A8110
  cmps(c,0,(int32_t)c->r[0],4); // 801A8114
  if (!crb(c,2)) { goto L_801A8148; } // 801A8118
  c->lr=0x801A8120u; f_803B220C(c); // 801A811C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A8120
  if (crb(c,2)) { goto L_801A8138; } // 801A8124
  c->r[3]=c->r[30]|c->r[30]; // 801A8128
  c->r[4]=0u+0x00000003u; // 801A812C
  c->lr=0x801A8134u; f_801A3800(c); // 801A8130
  goto L_801A8170; // 801A8134
L_801A8138:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8138
  c->r[4]=0u+0x00000002u; // 801A813C
  c->lr=0x801A8144u; f_801A3800(c); // 801A8140
  goto L_801A8170; // 801A8144
L_801A8148:;
  c->lr=0x801A814Cu; f_803B220C(c); // 801A8148
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A814C
  if (crb(c,2)) { goto L_801A8164; } // 801A8150
  c->r[3]=c->r[30]|c->r[30]; // 801A8154
  c->r[4]=0u+0x00000000u; // 801A8158
  c->lr=0x801A8160u; f_801A3800(c); // 801A815C
  goto L_801A8170; // 801A8160
L_801A8164:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8164
  c->r[4]=0u+0x00000001u; // 801A8168
  c->lr=0x801A8170u; f_801A3800(c); // 801A816C
L_801A8170:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8170
  c->lr=0x801A8178u; f_80095784(c); // 801A8174
  goto L_801A8280; // 801A8178
L_801A817C:;
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A817C
  c->r[3]=c->r[30]|c->r[30]; // 801A8180
  c->lr=0x801A8188u; f_801A85E4(c); // 801A8184
  cmps(c,0,(int32_t)c->r[3],0); // 801A8188
  if (crb(c,2)) { goto L_801A81DC; } // 801A818C
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 801A8190
  c->r[0]=R32(c->r[30]+0x00000614u); // 801A8194
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8198
  {uint32_t ea=c->r[2]+0xFFFFC454u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A819C
  cmps(c,0,(int32_t)c->r[0],2); // 801A81A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801A81A4
  if (!crb(c,2)) { goto L_801A81B0; } // 801A81A8
  c->f[1]=-c->f[1]; // 801A81AC
L_801A81B0:;
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A81B0
  fcmp(c,0,c->f[1],c->f[0]); // 801A81B4
  if (!crb(c,0)) { goto L_801A81C8; } // 801A81B8
  c->r[0]=0u+0x00007D46u; // 801A81BC
  W32(c->r[30]+0x000005FCu,c->r[0]); // 801A81C0
  goto L_801A81D0; // 801A81C4
L_801A81C8:;
  c->r[0]=0u+0x00007D4Bu; // 801A81C8
  W32(c->r[30]+0x000005FCu,c->r[0]); // 801A81CC
L_801A81D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801A81D0
  c->lr=0x801A81D8u; f_801A5F88(c); // 801A81D4
  goto L_801A8280; // 801A81D8
L_801A81DC:;
  c->lr=0x801A81E0u; f_803B220C(c); // 801A81DC
  c->r[3]=c->r[3]^0x80000000u; // 801A81E0
  c->r[0]=0u+0x43300000u; // 801A81E4
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 801A81E8
  {uint32_t ea=c->r[2]+0xFFFFC480u; c->f[3]=RF64(ea);} // 801A81EC
  W32(c->r[31]+0x00000078u,c->r[0]); // 801A81F0
  {uint32_t ea=c->r[2]+0xFFFFC474u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A81F4
  {uint32_t ea=c->r[31]+0x00000078u; c->f[2]=RF64(ea);} // 801A81F8
  {uint32_t ea=c->r[30]+0x00000638u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A81FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801A8200
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[1]); // 801A8204
  fcmp(c,0,c->f[2],c->f[0]); // 801A8208
  if (!crb(c,0)) { goto L_801A8244; } // 801A820C
  c->r[0]=R32(c->r[30]+0x00000614u); // 801A8210
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8214
  cmps(c,0,(int32_t)c->r[0],2); // 801A8218
  {uint32_t ea=c->r[30]+0x00000638u; WF32(ea,c->f[0]);} // 801A821C
  if (!crb(c,2)) { goto L_801A8230; } // 801A8220
  c->r[3]=c->r[30]|c->r[30]; // 801A8224
  c->lr=0x801A822Cu; f_801A50E4(c); // 801A8228
  goto L_801A8280; // 801A822C
L_801A8230:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A8230
  if (!crb(c,2)) { goto L_801A8278; } // 801A8234
  c->r[3]=c->r[30]|c->r[30]; // 801A8238
  c->lr=0x801A8240u; f_801A52F8(c); // 801A823C
  goto L_801A8280; // 801A8240
L_801A8244:;
  {uint32_t ea=c->r[30]+0x0000064Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8244
  fcmp(c,0,c->f[2],c->f[1]); // 801A8248
  if (!crb(c,0)) { goto L_801A826C; } // 801A824C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8250
  c->r[0]=0u+0x00000001u; // 801A8254
  {uint32_t ea=c->r[30]+0x0000064Cu; WF32(ea,c->f[0]);} // 801A8258
  c->r[3]=c->r[30]|c->r[30]; // 801A825C
  W32(c->r[30]+0x000006C8u,c->r[0]); // 801A8260
  c->lr=0x801A8268u; f_801A6038(c); // 801A8264
  goto L_801A8280; // 801A8268
L_801A826C:;
  {uint32_t ea=c->r[30]+0x00000650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A826C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801A8270
  {uint32_t ea=c->r[30]+0x0000064Cu; WF32(ea,c->f[0]);} // 801A8274
L_801A8278:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8278
  c->lr=0x801A8280u; f_801A82A0(c); // 801A827C
L_801A8280:;
  c->r[10]=c->r[31]|c->r[31]; // 801A8280
  c->r[11]=c->r[10]+0x00000090u; // 801A8284
  c->lr=0x801A828Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A8288
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A828C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A8290
  c->r[1]=c->r[10]|c->r[10]; // 801A8294
  c->lr=c->r[0]; // 801A8298
  return; // 801A829C
}

// fn_801A82A0
void f_801A82A0(Ctx* __restrict c) {
  trace_call(0x801A82A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A82A0
  c->r[0]=c->lr; // 801A82A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A82A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A82AC
  c->r[31]=c->r[3]|c->r[3]; // 801A82B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A82B4
  c->r[0]=R32(c->r[3]+0x00000614u); // 801A82B8
  cmps(c,0,(int32_t)c->r[0],2); // 801A82BC
  if (!crb(c,2)) { goto L_801A82D4; } // 801A82C0
  c->r[3]=R32(c->r[3]+0x00000434u); // 801A82C4
  c->r[4]=0u+0x00000001u; // 801A82C8
  c->lr=0x801A82D0u; f_800FE038(c); // 801A82CC
  goto L_801A82E0; // 801A82D0
L_801A82D4:;
  c->r[3]=R32(c->r[3]+0x00000434u); // 801A82D4
  c->r[4]=0u+0x00000000u; // 801A82D8
  c->lr=0x801A82E0u; f_800FE038(c); // 801A82DC
L_801A82E0:;
  c->r[3]=R32(c->r[31]+0x00000434u); // 801A82E0
  c->lr=0x801A82E8u; f_800FE178(c); // 801A82E4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A82E8
  c->r[30]=c->r[3]|c->r[3]; // 801A82EC
  c->r[3]=c->r[31]|c->r[31]; // 801A82F0
  c->r[12]=R32(c->r[12]+0x00000114u); // 801A82F4
  c->ctr=c->r[12]; // 801A82F8
  if (true) { c->lr=0x801A8300u; dispatch(c,c->ctr); } // 801A82FC
  cmps(c,0,(int32_t)c->r[3],0); // 801A8300
  if (!crb(c,2)) { goto L_801A830C; } // 801A8304
  c->r[30]=0u+0x00000000u; // 801A8308
L_801A830C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801A830C
  c->r[0]=R32(c->r[3]+0x000000A4u); // 801A8310
  cmps(c,0,(int32_t)c->r[0],1); // 801A8314
  if (crb(c,1)) { goto L_801A8358; } // 801A8318
  cmps(c,0,(int32_t)c->r[30],0); // 801A831C
  if (!crb(c,2)) { goto L_801A8358; } // 801A8320
  c->lr=0x801A8328u; f_803B220C(c); // 801A8324
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A8328
  if (crb(c,2)) { goto L_801A8340; } // 801A832C
  c->r[3]=c->r[31]|c->r[31]; // 801A8330
  c->r[4]=0u+0x00000000u; // 801A8334
  c->lr=0x801A833Cu; f_801A3838(c); // 801A8338
  goto L_801A834C; // 801A833C
L_801A8340:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8340
  c->r[4]=0u+0x00000001u; // 801A8344
  c->lr=0x801A834Cu; f_801A3838(c); // 801A8348
L_801A834C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A834C
  c->lr=0x801A8354u; f_801A5244(c); // 801A8350
  goto L_801A84B8; // 801A8354
L_801A8358:;
  cmps(c,0,(int32_t)c->r[0],2); // 801A8358
  if (crb(c,0)) { goto L_801A83D0; } // 801A835C
  cmps(c,0,(int32_t)c->r[30],0); // 801A8360
  if (crb(c,2)) { goto L_801A83D0; } // 801A8364
  cmps(c,0,(int32_t)c->r[30],3); // 801A8368
  if (crb(c,2)) { goto L_801A83D0; } // 801A836C
  cmps(c,0,(int32_t)c->r[30],6); // 801A8370
  if (crb(c,2)) { goto L_801A83D0; } // 801A8374
  cmps(c,0,(int32_t)c->r[30],7); // 801A8378
  if (crb(c,2)) { goto L_801A83D0; } // 801A837C
  c->r[0]=R32(c->r[31]+0x00000610u); // 801A8380
  cmps(c,0,(int32_t)c->r[0],4); // 801A8384
  if (!crb(c,2)) { goto L_801A83B8; } // 801A8388
  c->lr=0x801A8390u; f_803B220C(c); // 801A838C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A8390
  if (crb(c,2)) { goto L_801A83A8; } // 801A8394
  c->r[3]=c->r[31]|c->r[31]; // 801A8398
  c->r[4]=0u+0x00000003u; // 801A839C
  c->lr=0x801A83A4u; f_801A3800(c); // 801A83A0
  goto L_801A83C4; // 801A83A4
L_801A83A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801A83A8
  c->r[4]=0u+0x00000002u; // 801A83AC
  c->lr=0x801A83B4u; f_801A3800(c); // 801A83B0
  goto L_801A83C4; // 801A83B4
L_801A83B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801A83B8
  c->r[4]=0u+0x00000001u; // 801A83BC
  c->lr=0x801A83C4u; f_801A3800(c); // 801A83C0
L_801A83C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801A83C4
  c->lr=0x801A83CCu; f_80095784(c); // 801A83C8
  goto L_801A84B8; // 801A83CC
L_801A83D0:;
  cmpu(c,0,c->r[30],0x00000007u); // 801A83D0
  if (crb(c,1)) { goto L_801A84B0; } // 801A83D4
  c->r[3]=0u+0x806E0000u; // 801A83D8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801A83DC
  c->r[3]=c->r[3]+0x0000217Cu; // 801A83E0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A83E4
  c->ctr=c->r[3]; // 801A83E8
  if (true) { switch (c->ctr) { case 0x801A83F0u: goto L_801A83F0; case 0x801A8418u: goto L_801A8418; case 0x801A842Cu: goto L_801A842C; case 0x801A8440u: goto L_801A8440; case 0x801A8454u: goto L_801A8454; case 0x801A8468u: goto L_801A8468; case 0x801A8480u: goto L_801A8480; case 0x801A8498u: goto L_801A8498; default: break; } dispatch(c,c->ctr); return; } // 801A83EC
L_801A83F0:;
  {uint32_t ea=c->r[31]+0x000006C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A83F0
  {uint32_t ea=c->r[31]+0x000006C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A83F4
  c->lr=0x801A83FCu; f_8007C9C0(c); // 801A83F8
  {uint32_t ea=c->r[31]+0x000006BCu; WF32(ea,c->f[1]);} // 801A83FC
  c->r[3]=c->r[31]|c->r[31]; // 801A8400
  c->lr=0x801A8408u; f_8005E0F8(c); // 801A8404
  c->r[0]=R32(c->r[31]+0x000005BCu); // 801A8408
  c->r[0]=c->r[0]|0x40000000u; // 801A840C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 801A8410
  goto L_801A84B8; // 801A8414
L_801A8418:;
  c->r[3]=0u+0x00000000u; // 801A8418
  c->r[0]=0u+0x00007DC8u; // 801A841C
  W32(c->r[31]+0x00000618u,c->r[3]); // 801A8420
  W32(c->r[31]+0x000005F0u,c->r[0]); // 801A8424
  goto L_801A84B0; // 801A8428
L_801A842C:;
  c->r[3]=0u+0x00000001u; // 801A842C
  c->r[0]=0u+0x00007DD2u; // 801A8430
  W32(c->r[31]+0x00000618u,c->r[3]); // 801A8434
  W32(c->r[31]+0x000005F0u,c->r[0]); // 801A8438
  goto L_801A84B0; // 801A843C
L_801A8440:;
  c->r[0]=0u+0x00000004u; // 801A8440
  W32(c->r[31]+0x00000618u,c->r[0]); // 801A8444
  c->r[3]=c->r[31]|c->r[31]; // 801A8448
  c->lr=0x801A8450u; f_801A5458(c); // 801A844C
  goto L_801A84B8; // 801A8450
L_801A8454:;
  c->r[3]=0u+0x00000002u; // 801A8454
  c->r[0]=0u+0x00007DCDu; // 801A8458
  W32(c->r[31]+0x00000618u,c->r[3]); // 801A845C
  W32(c->r[31]+0x000005F0u,c->r[0]); // 801A8460
  goto L_801A84B0; // 801A8464
L_801A8468:;
  c->r[3]=0u+0x00020000u; // 801A8468
  c->r[4]=0u+0x00000003u; // 801A846C
  c->r[0]=c->r[3]+0xFFFFB207u; // 801A8470
  W32(c->r[31]+0x00000618u,c->r[4]); // 801A8474
  W32(c->r[31]+0x000005F0u,c->r[0]); // 801A8478
  goto L_801A84B0; // 801A847C
L_801A8480:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8480
  c->r[4]=0u+0x00000000u; // 801A8484
  c->lr=0x801A848Cu; f_801A3838(c); // 801A8488
  c->r[3]=c->r[31]|c->r[31]; // 801A848C
  c->lr=0x801A8494u; f_801A5244(c); // 801A8490
  goto L_801A84B8; // 801A8494
L_801A8498:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8498
  c->r[4]=0u+0x00000001u; // 801A849C
  c->lr=0x801A84A4u; f_801A3838(c); // 801A84A0
  c->r[3]=c->r[31]|c->r[31]; // 801A84A4
  c->lr=0x801A84ACu; f_801A5244(c); // 801A84A8
  goto L_801A84B8; // 801A84AC
L_801A84B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801A84B0
  c->lr=0x801A84B8u; f_801A5EC8(c); // 801A84B4
L_801A84B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A84B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A84BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A84C0
  c->lr=c->r[0]; // 801A84C4
  c->r[1]=c->r[1]+0x00000010u; // 801A84C8
  return; // 801A84CC
}

// fn_801A84D0
void f_801A84D0(Ctx* __restrict c) {
  trace_call(0x801A84D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A84D0
  c->r[0]=c->lr; // 801A84D4
  c->r[4]=0u+0x00000000u; // 801A84D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A84DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A84E0
  c->r[31]=c->r[3]|c->r[3]; // 801A84E4
  c->lr=0x801A84ECu; f_8005EE88(c); // 801A84E8
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801A84EC
  c->r[4]=0u+0x00000001u; // 801A84F0
  c->r[5]=0u+0x00000001u; // 801A84F4
  c->r[3]=c->r[3]+0x000000C4u; // 801A84F8
  c->lr=0x801A8500u; f_8005DCA0(c); // 801A84FC
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801A8500
  c->r[4]=0u+0x00000016u; // 801A8504
  c->r[5]=0u+0x00000001u; // 801A8508
  c->r[3]=c->r[3]+0x000000C4u; // 801A850C
  c->lr=0x801A8514u; f_8005DCA0(c); // 801A8510
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A8514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A8518
  c->lr=c->r[0]; // 801A851C
  c->r[1]=c->r[1]+0x00000010u; // 801A8520
  return; // 801A8524
}

// fn_801A8528
void f_801A8528(Ctx* __restrict c) {
  trace_call(0x801A8528u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8528
  c->r[0]=c->lr; // 801A852C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801A8530
  c->r[4]=c->r[1]+0x00000078u; // 801A8534
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801A8538
  c->r[31]=c->r[3]|c->r[3]; // 801A853C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801A8540
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A8544
  c->ctr=c->r[12]; // 801A8548
  if (true) { c->lr=0x801A8550u; dispatch(c,c->ctr); } // 801A854C
  c->r[4]=c->r[3]|c->r[3]; // 801A8550
  c->r[3]=c->r[1]+0x00000038u; // 801A8554
  c->lr=0x801A855Cu; f_80060F28(c); // 801A8558
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A855C
  c->r[3]=c->r[31]|c->r[31]; // 801A8560
  c->r[4]=c->r[1]+0x00000048u; // 801A8564
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A8568
  c->ctr=c->r[12]; // 801A856C
  if (true) { c->lr=0x801A8574u; dispatch(c,c->ctr); } // 801A8570
  c->r[4]=c->r[3]|c->r[3]; // 801A8574
  c->r[3]=c->r[1]+0x00000020u; // 801A8578
  c->lr=0x801A8580u; f_80060878(c); // 801A857C
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8580
  c->r[3]=c->r[1]+0x00000014u; // 801A8584
  c->r[4]=c->r[1]+0x00000038u; // 801A8588
  c->lr=0x801A8590u; f_8005ED34(c); // 801A858C
  c->r[3]=c->r[1]+0x0000002Cu; // 801A8590
  c->r[4]=c->r[1]+0x00000020u; // 801A8594
  c->r[5]=c->r[1]+0x00000014u; // 801A8598
  c->lr=0x801A85A0u; f_80073ACC(c); // 801A859C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801A85A0
  c->r[4]=c->r[31]|c->r[31]; // 801A85A4
  c->r[3]=c->r[1]+0x00000008u; // 801A85A8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A85AC
  c->ctr=c->r[12]; // 801A85B0
  if (true) { c->lr=0x801A85B8u; dispatch(c,c->ctr); } // 801A85B4
  c->r[3]=c->r[1]+0x0000002Cu; // 801A85B8
  c->r[4]=c->r[1]+0x00000038u; // 801A85BC
  c->r[5]=c->r[1]+0x00000008u; // 801A85C0
  c->lr=0x801A85C8u; f_80061518(c); // 801A85C4
  c->r[0]=cntlz(c->r[3]); // 801A85C8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801A85CC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801A85D0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801A85D4
  c->lr=c->r[0]; // 801A85D8
  c->r[1]=c->r[1]+0x000000B0u; // 801A85DC
  return; // 801A85E0
}

// fn_801A85E4
void f_801A85E4(Ctx* __restrict c) {
  trace_call(0x801A85E4u);
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 801A85E4
  {uint32_t ea=c->r[2]+0xFFFFC454u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A85E8
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A85EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801A85F0
  c->f[0]=std::fabs(c->f[0]); // 801A85F4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801A85F8
  fcmp(c,0,c->f[0],c->f[1]); // 801A85FC
  c->r[3]=c->cr; // 801A8600
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 801A8604
  return; // 801A8608
}

// fn_801A860C
void f_801A860C(Ctx* __restrict c) {
  trace_call(0x801A860Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A860C
  c->r[0]=c->lr; // 801A8610
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A8614
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A8618
  c->r[29]=c->r[3]|c->r[3]; // 801A861C
  c->r[31]=0u+0x00000001u; // 801A8620
  c->r[30]=0u+0x00000000u; // 801A8624
  c->r[5]=R32(c->r[3]+0x0000060Cu); // 801A8628
  c->r[6]=R32(c->r[3]+0x00000608u); // 801A862C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801A8630
  c->r[4]=R32(c->r[3]+0x00000614u); // 801A8634
  c->r[5]=cntlz(c->r[0]); // 801A8638
  cmps(c,0,(int32_t)c->r[6],0); // 801A863C
  c->r[0]=cntlz(c->r[4]); // 801A8640
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801A8644
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801A8648
  if (crb(c,2)) { goto L_801A8664; } // 801A864C
  cmps(c,0,(int32_t)c->r[6],1); // 801A8650
  if (crb(c,2)) { goto L_801A86D4; } // 801A8654
  cmps(c,0,(int32_t)c->r[6],2); // 801A8658
  if (crb(c,2)) { goto L_801A86FC; } // 801A865C
  goto L_801A87B8; // 801A8660
L_801A8664:;
  cmps(c,0,(int32_t)c->r[4],1); // 801A8664
  if (crb(c,0)) { goto L_801A8674; } // 801A8668
  cmps(c,0,(int32_t)c->r[4],2); // 801A866C
  if (!crb(c,1)) { goto L_801A8684; } // 801A8670
L_801A8674:;
  cmps(c,0,(int32_t)c->r[4],0); // 801A8674
  if (!crb(c,2)) { goto L_801A87B8; } // 801A8678
  c->r[30]=0u+0x00007D00u; // 801A867C
  goto L_801A87B8; // 801A8680
L_801A8684:;
  cmps(c,0,(int32_t)c->r[5],0); // 801A8684
  if (crb(c,2)) { goto L_801A86B0; } // 801A8688
  c->r[30]=0u+0x00007D05u; // 801A868C
  c->r[4]=0u+0x00007D00u; // 801A8690
  c->r[3]=c->r[3]+0x00000354u; // 801A8694
  c->lr=0x801A869Cu; f_800667BC(c); // 801A8698
  cmps(c,0,(int32_t)c->r[3],0); // 801A869C
  if (crb(c,2)) { goto L_801A87B8; } // 801A86A0
  c->r[30]=0u+0x00007D0Au; // 801A86A4
  c->r[31]=0u+0x00000100u; // 801A86A8
  goto L_801A87B8; // 801A86AC
L_801A86B0:;
  c->r[30]=0u+0x00007D00u; // 801A86B0
  c->r[4]=0u+0x00007D05u; // 801A86B4
  c->r[3]=c->r[3]+0x00000354u; // 801A86B8
  c->lr=0x801A86C0u; f_800667BC(c); // 801A86BC
  cmps(c,0,(int32_t)c->r[3],0); // 801A86C0
  if (crb(c,2)) { goto L_801A87B8; } // 801A86C4
  c->r[30]=0u+0x00007D0Fu; // 801A86C8
  c->r[31]=0u+0x00000100u; // 801A86CC
  goto L_801A87B8; // 801A86D0
L_801A86D4:;
  c->r[0]=R32(c->r[3]+0x00000624u); // 801A86D4
  cmps(c,0,(int32_t)c->r[0],0); // 801A86D8
  if (crb(c,2)) { goto L_801A86EC; } // 801A86DC
  cmps(c,0,(int32_t)c->r[0],1); // 801A86E0
  if (crb(c,2)) { goto L_801A86F4; } // 801A86E4
  goto L_801A87B8; // 801A86E8
L_801A86EC:;
  c->r[30]=0u+0x00007D50u; // 801A86EC
  goto L_801A87B8; // 801A86F0
L_801A86F4:;
  c->r[30]=0u+0x00007D55u; // 801A86F4
  goto L_801A87B8; // 801A86F8
L_801A86FC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801A86FC
  if (crb(c,2)) { goto L_801A8764; } // 801A8700
  cmps(c,0,(int32_t)c->r[0],0); // 801A8704
  if (!crb(c,2)) { goto L_801A8764; } // 801A8708
  c->r[0]=R32(c->r[3]+0x00000610u); // 801A870C
  cmps(c,0,(int32_t)c->r[0],0); // 801A8710
  if (crb(c,2)) { goto L_801A873C; } // 801A8714
  cmps(c,0,(int32_t)c->r[0],1); // 801A8718
  if (crb(c,2)) { goto L_801A8744; } // 801A871C
  cmps(c,0,(int32_t)c->r[0],2); // 801A8720
  if (crb(c,2)) { goto L_801A874C; } // 801A8724
  cmps(c,0,(int32_t)c->r[0],3); // 801A8728
  if (crb(c,2)) { goto L_801A8754; } // 801A872C
  cmps(c,0,(int32_t)c->r[0],4); // 801A8730
  if (crb(c,2)) { goto L_801A875C; } // 801A8734
  goto L_801A87B8; // 801A8738
L_801A873C:;
  c->r[30]=0u+0x00007D19u; // 801A873C
  goto L_801A87B8; // 801A8740
L_801A8744:;
  c->r[30]=0u+0x00007D23u; // 801A8744
  goto L_801A87B8; // 801A8748
L_801A874C:;
  c->r[30]=0u+0x00007D2Du; // 801A874C
  goto L_801A87B8; // 801A8750
L_801A8754:;
  c->r[30]=0u+0x00007D37u; // 801A8754
  goto L_801A87B8; // 801A8758
L_801A875C:;
  c->r[30]=0u+0x00007D41u; // 801A875C
  goto L_801A87B8; // 801A8760
L_801A8764:;
  c->r[0]=R32(c->r[3]+0x00000610u); // 801A8764
  cmps(c,0,(int32_t)c->r[0],0); // 801A8768
  if (crb(c,2)) { goto L_801A8794; } // 801A876C
  cmps(c,0,(int32_t)c->r[0],1); // 801A8770
  if (crb(c,2)) { goto L_801A879C; } // 801A8774
  cmps(c,0,(int32_t)c->r[0],2); // 801A8778
  if (crb(c,2)) { goto L_801A87A4; } // 801A877C
  cmps(c,0,(int32_t)c->r[0],3); // 801A8780
  if (crb(c,2)) { goto L_801A87AC; } // 801A8784
  cmps(c,0,(int32_t)c->r[0],4); // 801A8788
  if (crb(c,2)) { goto L_801A87B4; } // 801A878C
  goto L_801A87B8; // 801A8790
L_801A8794:;
  c->r[30]=0u+0x00007D14u; // 801A8794
  goto L_801A87B8; // 801A8798
L_801A879C:;
  c->r[30]=0u+0x00007D1Eu; // 801A879C
  goto L_801A87B8; // 801A87A0
L_801A87A4:;
  c->r[30]=0u+0x00007D28u; // 801A87A4
  goto L_801A87B8; // 801A87A8
L_801A87AC:;
  c->r[30]=0u+0x00007D32u; // 801A87AC
  goto L_801A87B8; // 801A87B0
L_801A87B4:;
  c->r[30]=0u+0x00007D3Cu; // 801A87B4
L_801A87B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A87B8
  if (crb(c,2)) { goto L_801A87DC; } // 801A87BC
  c->r[3]=c->r[29]|c->r[29]; // 801A87C0
  c->r[4]=c->r[30]|c->r[30]; // 801A87C4
  c->r[5]=0u+0x00000000u; // 801A87C8
  c->lr=0x801A87D0u; f_80064744(c); // 801A87CC
  c->r[3]=R32(c->r[29]+0x000005E8u); // 801A87D0
  c->r[0]=c->r[3]+0x00000001u; // 801A87D4
  W32(c->r[29]+0x000005E8u,c->r[0]); // 801A87D8
L_801A87DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801A87DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A87E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A87E4
  c->lr=c->r[0]; // 801A87E8
  c->r[1]=c->r[1]+0x00000020u; // 801A87EC
  return; // 801A87F0
}

// fn_801A87F4
void f_801A87F4(Ctx* __restrict c) {
  trace_call(0x801A87F4u);
  c->r[0]=R32(c->r[3]+0x00000614u); // 801A87F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801A87F8
  if (crb(c,2)) { goto L_801A8808; } // 801A87FC
  c->r[0]=0u+0x00000000u; // 801A8800
  W32(c->r[3]+0x000005E8u,c->r[0]); // 801A8804
L_801A8808:;
  cmps(c,0,(int32_t)c->r[4],0); // 801A8808
  if (crb(c,2)) { goto L_801A8824; } // 801A880C
  cmps(c,0,(int32_t)c->r[4],2); // 801A8810
  if (crb(c,2)) { goto L_801A8834; } // 801A8814
  cmps(c,0,(int32_t)c->r[4],1); // 801A8818
  if (crb(c,2)) { goto L_801A8844; } // 801A881C
  goto L_801A8850; // 801A8820
L_801A8824:;
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 801A8824
  c->r[0]=0u+0x00000000u; // 801A8828
  W32(c->r[5]+0x00000090u,c->r[0]); // 801A882C
  goto L_801A8850; // 801A8830
L_801A8834:;
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 801A8834
  c->r[0]=0u+0x00000002u; // 801A8838
  W32(c->r[5]+0x00000090u,c->r[0]); // 801A883C
  goto L_801A8850; // 801A8840
L_801A8844:;
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 801A8844
  c->r[0]=0u+0x00000001u; // 801A8848
  W32(c->r[5]+0x00000090u,c->r[0]); // 801A884C
L_801A8850:;
  W32(c->r[3]+0x00000614u,c->r[4]); // 801A8850
  return; // 801A8854
}

// fn_801A8858
void f_801A8858(Ctx* __restrict c) {
  trace_call(0x801A8858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8858
  c->r[0]=c->lr; // 801A885C
  c->r[4]=0u+0x00000001u; // 801A8860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A8864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A8868
  c->r[31]=c->r[3]|c->r[3]; // 801A886C
  c->lr=0x801A8874u; f_8005EA70(c); // 801A8870
  c->r[3]=c->r[31]|c->r[31]; // 801A8874
  c->lr=0x801A887Cu; f_8005EAA0(c); // 801A8878
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A887C
  {uint32_t ea=c->r[2]+0xFFFFC49Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8880
  c->lr=0x801A8888u; f_80101538(c); // 801A8884
  c->r[3]=c->r[31]|c->r[31]; // 801A8888
  c->lr=0x801A8890u; f_8005EAA0(c); // 801A888C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8890
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8894
  c->lr=0x801A889Cu; f_80101544(c); // 801A8898
  c->r[3]=c->r[31]|c->r[31]; // 801A889C
  c->lr=0x801A88A4u; f_8005EAA0(c); // 801A88A0
  c->r[4]=0u+0x00000002u; // 801A88A4
  c->r[5]=0u+0x00000000u; // 801A88A8
  c->r[3]=c->r[3]+0x000003E0u; // 801A88AC
  c->lr=0x801A88B4u; f_8005DCA0(c); // 801A88B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A88B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A88B8
  c->lr=c->r[0]; // 801A88BC
  c->r[1]=c->r[1]+0x00000010u; // 801A88C0
  return; // 801A88C4
}

// fn_801A88C8
void f_801A88C8(Ctx* __restrict c) {
  trace_call(0x801A88C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A88C8
  c->r[0]=c->lr; // 801A88CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A88D0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A88D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A88D8
  c->r[31]=c->r[3]+c->r[0]; // 801A88DC
  c->r[30]=c->r[3]|c->r[3]; // 801A88E0
  c->r[0]=R32(c->r[31]+0x000005C4u); // 801A88E4
  cmps(c,0,(int32_t)c->r[0],0); // 801A88E8
  if (crb(c,2)) { goto L_801A8908; } // 801A88EC
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 801A88F0
  c->lr=0x801A88F8u; f_800C2DF8(c); // 801A88F4
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 801A88F8
  c->r[4]=R32(c->r[31]+0x000005C4u); // 801A88FC
  c->r[3]=c->r[3]+0x00000004u; // 801A8900
  c->lr=0x801A8908u; f_800A0914(c); // 801A8904
L_801A8908:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A8908
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A890C
  c->lr=c->r[0]; // 801A8910
  c->r[1]=c->r[1]+0x00000010u; // 801A8914
  return; // 801A8918
}

// fn_801A891C
void f_801A891C(Ctx* __restrict c) {
  trace_call(0x801A891Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A891C
  c->r[0]=c->lr; // 801A8920
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A8924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A8928
  c->r[30]=c->r[3]|c->r[3]; // 801A892C
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 801A8930
  c->r[3]=c->r[4]+0x00000004u; // 801A8934
  c->lr=0x801A893Cu; f_800A09D4(c); // 801A8938
  c->r[31]=c->r[3]|c->r[3]; // 801A893C
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 801A8940
  c->lr=0x801A8948u; f_800C2E40(c); // 801A8944
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801A8948
  c->r[5]=sraw(c,c->r[3],31); // 801A894C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801A8950
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A8954
  c->r[0]=addc(c,~c->r[0],c->r[3],1); // 801A8958
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A895C
  c->r[3]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801A8960
  c->lr=c->r[0]; // 801A8964
  c->r[1]=c->r[1]+0x00000010u; // 801A8968
  return; // 801A896C
}

// fn_801A8970
void f_801A8970(Ctx* __restrict c) {
  trace_call(0x801A8970u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8970
  c->r[0]=c->lr; // 801A8974
  W32(c->r[1]+0x00000094u,c->r[0]); // 801A8978
  c->r[11]=c->r[1]+0x00000080u; // 801A897C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801A8980
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801A8984
  c->lr=0x801A898Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A8988
  c->f[31]=c->f[1]; // 801A898C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8990
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8994
  c->r[28]=c->r[4]|c->r[4]; // 801A8998
  {uint32_t ea=c->r[5]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A899C
  c->r[29]=c->r[5]|c->r[5]; // 801A89A0
  c->r[30]=c->r[6]|c->r[6]; // 801A89A4
  c->r[3]=c->r[1]+0x00000014u; // 801A89A8
  c->lr=0x801A89B0u; f_8005FD70(c); // 801A89AC
  c->r[5]=c->r[30]|c->r[30]; // 801A89B0
  c->r[3]=c->r[1]+0x00000020u; // 801A89B4
  c->r[4]=c->r[1]+0x00000014u; // 801A89B8
  c->lr=0x801A89C0u; f_80061B98(c); // 801A89BC
  c->r[31]=c->r[1]+0x00000020u; // 801A89C0
  c->r[5]=0u+0x806A0000u; // 801A89C4
  c->r[3]=c->r[31]|c->r[31]; // 801A89C8
  c->r[4]=c->r[31]|c->r[31]; // 801A89CC
  c->r[5]=c->r[5]+0x00000AA8u; // 801A89D0
  c->lr=0x801A89D8u; f_8030E0BC(c); // 801A89D4
  c->r[4]=c->r[31]|c->r[31]; // 801A89D8
  c->r[3]=c->r[1]+0x0000002Cu; // 801A89DC
  c->lr=0x801A89E4u; f_8005CD7C(c); // 801A89E0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A89E4
  c->r[3]=c->r[1]+0x00000008u; // 801A89E8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A89EC
  {uint32_t ea=c->r[29]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A89F0
  c->lr=0x801A89F8u; f_8005FD70(c); // 801A89F4
  c->r[4]=c->r[30]|c->r[30]; // 801A89F8
  c->r[3]=c->r[1]+0x00000008u; // 801A89FC
  c->lr=0x801A8A04u; f_800B3F44(c); // 801A8A00
  c->lr=0x801A8A08u; f_803BA740(c); // 801A8A04
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801A8A08
  {uint32_t ea=c->r[2]+0xFFFFC4A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8A0C
  c->r[3]=c->r[28]|c->r[28]; // 801A8A10
  c->r[4]=c->r[1]+0x0000002Cu; // 801A8A14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801A8A18
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801A8A1C
  c->lr=0x801A8A24u; f_804E1868(c); // 801A8A20
  c->r[4]=c->r[28]|c->r[28]; // 801A8A24
  c->r[5]=c->r[29]|c->r[29]; // 801A8A28
  c->r[3]=c->r[1]+0x00000038u; // 801A8A2C
  c->lr=0x801A8A34u; f_8030DA28(c); // 801A8A30
  c->r[4]=c->r[28]|c->r[28]; // 801A8A34
  c->r[3]=c->r[1]+0x00000038u; // 801A8A38
  c->lr=0x801A8A40u; f_80382F2C(c); // 801A8A3C
  c->r[11]=c->r[1]+0x00000080u; // 801A8A40
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801A8A44
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801A8A48
  c->lr=0x801A8A50u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A8A4C
  c->r[0]=R32(c->r[1]+0x00000094u); // 801A8A50
  c->lr=c->r[0]; // 801A8A54
  c->r[1]=c->r[1]+0x00000090u; // 801A8A58
  return; // 801A8A5C
}

// fn_801A8A60
void f_801A8A60(Ctx* __restrict c) {
  trace_call(0x801A8A60u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8A60
  c->r[0]=c->lr; // 801A8A64
  W32(c->r[1]+0x00000074u,c->r[0]); // 801A8A68
  c->r[11]=c->r[1]+0x00000060u; // 801A8A6C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801A8A70
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801A8A74
  c->lr=0x801A8A7Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A8A78
  c->f[31]=c->f[1]; // 801A8A7C
  c->r[3]=0u+0x80760000u; // 801A8A80
  c->r[29]=c->r[4]|c->r[4]; // 801A8A84
  c->r[30]=c->r[5]|c->r[5]; // 801A8A88
  c->r[31]=c->r[6]|c->r[6]; // 801A8A8C
  c->r[3]=c->r[3]+0xFFFF9D48u; // 801A8A90
  c->r[4]=c->r[1]+0x00000018u; // 801A8A94
  c->lr=0x801A8A9Cu; f_80382F2C(c); // 801A8A98
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8A9C
  c->r[3]=c->r[1]+0x00000008u; // 801A8AA0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8AA4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A8AA8
  c->lr=0x801A8AB0u; f_8005FD70(c); // 801A8AAC
  c->r[4]=c->r[31]|c->r[31]; // 801A8AB0
  c->r[3]=c->r[1]+0x00000018u; // 801A8AB4
  c->r[5]=c->r[1]+0x00000008u; // 801A8AB8
  c->lr=0x801A8AC0u; f_8005FD80(c); // 801A8ABC
  c->f[1]=c->f[31]; // 801A8AC0
  c->r[3]=c->r[29]|c->r[29]; // 801A8AC4
  c->r[4]=c->r[30]|c->r[30]; // 801A8AC8
  c->r[5]=c->r[1]+0x00000018u; // 801A8ACC
  c->lr=0x801A8AD4u; f_8030DFEC(c); // 801A8AD0
  c->r[11]=c->r[1]+0x00000060u; // 801A8AD4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801A8AD8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801A8ADC
  c->lr=0x801A8AE4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A8AE0
  c->r[0]=R32(c->r[1]+0x00000074u); // 801A8AE4
  c->lr=c->r[0]; // 801A8AE8
  c->r[1]=c->r[1]+0x00000070u; // 801A8AEC
  return; // 801A8AF0
}

// fn_801A8AF4
void f_801A8AF4(Ctx* __restrict c) {
  trace_call(0x801A8AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8AF4
  c->r[0]=c->lr; // 801A8AF8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801A8AFC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801A8B00
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801A8B04
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801A8B08
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801A8B0C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801A8B10
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801A8B14
  c->f[29]=c->f[1]; // 801A8B18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801A8B1C
  c->r[31]=c->r[4]|c->r[4]; // 801A8B20
  c->r[4]=c->r[6]|c->r[6]; // 801A8B24
  W32(c->r[1]+0x00000028u,c->r[30]); // 801A8B28
  c->r[30]=c->r[3]|c->r[3]; // 801A8B2C
  c->r[3]=c->r[1]+0x00000014u; // 801A8B30
  c->lr=0x801A8B38u; f_8005FC60(c); // 801A8B34
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A8B38
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8B3C
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[30]=c->ps1[30]=RF32(ea);} // 801A8B40
  fcmp(c,0,c->f[31],c->f[0]); // 801A8B44
  if (!crb(c,1)) { goto L_801A8B78; } // 801A8B48
  {uint32_t ea=c->r[2]+0xFFFFC444u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8B4C
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8B50
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 801A8B54
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8B58
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[0]); // 801A8B5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801A8B60
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801A8B64
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 801A8B68
  c->lr=0x801A8B70u; f_801A8C88(c); // 801A8B6C
  c->f[30]=c->f[1]; // 801A8B70
  goto L_801A8BA8; // 801A8B74
L_801A8B78:;
  {uint32_t ea=c->r[2]+0xFFFFC4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8B78
  fcmp(c,0,c->f[31],c->f[0]); // 801A8B7C
  if (!crb(c,1)) { goto L_801A8BA8; } // 801A8B80
  {uint32_t ea=c->r[2]+0xFFFFC444u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8B84
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8B88
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[29]); // 801A8B8C
  {uint32_t ea=c->r[2]+0xFFFFC4ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8B90
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[1]); // 801A8B94
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801A8B98
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801A8B9C
  c->lr=0x801A8BA4u; f_801A8C88(c); // 801A8BA0
  c->f[30]=c->f[1]; // 801A8BA4
L_801A8BA8:;
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[30]); // 801A8BA8
  {uint32_t ea=c->r[2]+0xFFFFC4B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8BAC
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8BB0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[31],c->f[2])); // 801A8BB4
  fcmp(c,0,c->f[1],c->f[0]); // 801A8BB8
  if (!crb(c,0)) { goto L_801A8BD4; } // 801A8BBC
  c->f[1]=-c->f[30]; // 801A8BC0
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8BC4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8BC8
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8BCC
  goto L_801A8C38; // 801A8BD0
L_801A8BD4:;
  {uint32_t ea=c->r[2]+0xFFFFC4B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8BD4
  fcmp(c,0,c->f[29],c->f[0]); // 801A8BD8
  if (!crb(c,1)) { goto L_801A8BFC; } // 801A8BDC
  c->lr=0x801A8BE4u; f_801A8C88(c); // 801A8BE0
  c->f[2]=-c->f[30]; // 801A8BE4
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8BE8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801A8BEC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8BF0
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8BF4
  goto L_801A8C38; // 801A8BF8
L_801A8BFC:;
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8BFC
  fcmp(c,0,c->f[31],c->f[0]); // 801A8C00
  if (!crb(c,1)) { goto L_801A8C24; } // 801A8C04
  c->lr=0x801A8C0Cu; f_801A8C88(c); // 801A8C08
  c->f[2]=-c->f[30]; // 801A8C0C
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8C10
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801A8C14
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8C18
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8C1C
  goto L_801A8C38; // 801A8C20
L_801A8C24:;
  c->lr=0x801A8C28u; f_801A8C88(c); // 801A8C24
  c->f[1]=-c->f[1]; // 801A8C28
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8C2C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8C30
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8C34
L_801A8C38:;
  {uint32_t ea=c->r[30]+0x000006A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8C38
  c->r[3]=c->r[1]+0x00000008u; // 801A8C3C
  c->r[4]=c->r[1]+0x00000014u; // 801A8C40
  c->lr=0x801A8C48u; f_80089874(c); // 801A8C44
  c->r[3]=c->r[31]|c->r[31]; // 801A8C48
  c->r[4]=c->r[1]+0x00000008u; // 801A8C4C
  c->lr=0x801A8C54u; f_8005DC84(c); // 801A8C50
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[30]);} // 801A8C54
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801A8C58
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801A8C5C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801A8C60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801A8C64
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801A8C68
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801A8C6C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801A8C70
  c->r[30]=R32(c->r[1]+0x00000028u); // 801A8C74
  c->r[0]=R32(c->r[1]+0x00000064u); // 801A8C78
  c->lr=c->r[0]; // 801A8C7C
  c->r[1]=c->r[1]+0x00000060u; // 801A8C80
  return; // 801A8C84
}

// fn_801A8C88
void f_801A8C88(Ctx* __restrict c) {
  trace_call(0x801A8C88u);
  c->r[3]=0u+0x806A0000u; // 801A8C88
  c->r[3]=c->r[3]+0x00000AA8u; // 801A8C8C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A8C90
  c->f[0]=frsqrte(c->f[1]); // 801A8C94
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A8C98
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 801A8C9C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801A8CA0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 801A8CA4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[3]); // 801A8CA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801A8CAC
  return; // 801A8CB0
}

// fn_801A8CB4
void f_801A8CB4(Ctx* __restrict c) {
  trace_call(0x801A8CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8CB4
  c->r[0]=c->lr; // 801A8CB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801A8CBC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801A8CC0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801A8CC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801A8CC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801A8CCC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801A8CD0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801A8CD4
  c->f[29]=c->f[1]; // 801A8CD8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801A8CDC
  c->r[31]=c->r[4]|c->r[4]; // 801A8CE0
  c->r[4]=c->r[6]|c->r[6]; // 801A8CE4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801A8CE8
  c->r[30]=c->r[3]|c->r[3]; // 801A8CEC
  c->r[3]=c->r[1]+0x00000014u; // 801A8CF0
  c->lr=0x801A8CF8u; f_8005FC60(c); // 801A8CF4
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[30]=c->ps1[30]=RF32(ea);} // 801A8CF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A8CFC
  fcmp(c,0,c->f[29],c->f[30]); // 801A8D00
  if (!crb(c,1)) { goto L_801A8D18; } // 801A8D04
  {uint32_t ea=c->r[2]+0xFFFFC4BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8D08
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[29]); // 801A8D0C
  c->lr=0x801A8D14u; f_801A8C88(c); // 801A8D10
  c->f[30]=c->f[1]; // 801A8D14
L_801A8D18:;
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[30]); // 801A8D18
  {uint32_t ea=c->r[2]+0xFFFFC4B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8D1C
  {uint32_t ea=c->r[2]+0xFFFFC414u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8D20
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[31],c->f[2])); // 801A8D24
  fcmp(c,0,c->f[1],c->f[0]); // 801A8D28
  if (!crb(c,0)) { goto L_801A8D44; } // 801A8D2C
  c->f[1]=-c->f[30]; // 801A8D30
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8D34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8D38
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8D3C
  goto L_801A8D5C; // 801A8D40
L_801A8D44:;
  c->lr=0x801A8D48u; f_801A8C88(c); // 801A8D44
  c->f[2]=-c->f[30]; // 801A8D48
  {uint32_t ea=c->r[2]+0xFFFFC4A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8D4C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801A8D50
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801A8D54
  {uint32_t ea=c->r[30]+0x000006A8u; WF32(ea,c->f[0]);} // 801A8D58
L_801A8D5C:;
  {uint32_t ea=c->r[30]+0x000006A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8D5C
  c->r[3]=c->r[1]+0x00000008u; // 801A8D60
  c->r[4]=c->r[1]+0x00000014u; // 801A8D64
  c->lr=0x801A8D6Cu; f_80089874(c); // 801A8D68
  c->r[3]=c->r[31]|c->r[31]; // 801A8D6C
  c->r[4]=c->r[1]+0x00000008u; // 801A8D70
  c->lr=0x801A8D78u; f_8005DC84(c); // 801A8D74
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[30]);} // 801A8D78
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801A8D7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801A8D80
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801A8D84
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801A8D88
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801A8D8C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801A8D90
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801A8D94
  c->r[30]=R32(c->r[1]+0x00000028u); // 801A8D98
  c->r[0]=R32(c->r[1]+0x00000064u); // 801A8D9C
  c->lr=c->r[0]; // 801A8DA0
  c->r[1]=c->r[1]+0x00000060u; // 801A8DA4
  return; // 801A8DA8
}

// fn_801A8DAC
void f_801A8DAC(Ctx* __restrict c) {
  trace_call(0x801A8DACu);
  {uint32_t ea=c->r[1]+0xFFFFF990u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8DAC
  c->r[0]=c->lr; // 801A8DB0
  W32(c->r[1]+0x00000674u,c->r[0]); // 801A8DB4
  c->r[11]=c->r[1]+0x00000650u; // 801A8DB8
  {uint32_t ea=c->r[1]+0x00000660u; WF64(ea,c->f[31]);} // 801A8DBC
  {uint32_t ea=c->r[1]+0x00000668u; psq_store(c,31,ea,0,0);} // 801A8DC0
  {uint32_t ea=c->r[1]+0x00000650u; WF64(ea,c->f[30]);} // 801A8DC4
  {uint32_t ea=c->r[1]+0x00000658u; psq_store(c,30,ea,0,0);} // 801A8DC8
  c->lr=0x801A8DD0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A8DCC
  c->r[31]=c->r[1]|c->r[1]; // 801A8DD0
  c->r[26]=c->r[3]|c->r[3]; // 801A8DD4
  c->r[27]=c->r[4]|c->r[4]; // 801A8DD8
  c->r[28]=c->r[5]|c->r[5]; // 801A8DDC
  c->r[29]=c->r[6]|c->r[6]; // 801A8DE0
  c->r[3]=c->r[31]+0x000002E0u; // 801A8DE4
  c->lr=0x801A8DECu; f_8006585C(c); // 801A8DE8
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A8DEC
  c->r[4]=c->r[26]|c->r[26]; // 801A8DF0
  c->r[3]=c->r[31]+0x00000168u; // 801A8DF4
  c->r[30]=0u+0x00000000u; // 801A8DF8
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A8DFC
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A8E00
  c->ctr=c->r[12]; // 801A8E04
  if (true) { c->lr=0x801A8E0Cu; dispatch(c,c->ctr); } // 801A8E08
  {uint32_t ea=c->r[31]+0x0000016Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801A8E0C
  c->r[0]=0u+0x00000000u; // 801A8E10
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 801A8E14
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A8E18
  W32(c->r[26]+0x00000670u,c->r[0]); // 801A8E1C
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A8E20
  c->lr=0x801A8E28u; f_800C2FAC(c); // 801A8E24
  c->r[24]=R32(c->r[26]+0x0000041Cu); // 801A8E28
  c->r[4]=c->r[3]|c->r[3]; // 801A8E2C
  c->r[3]=c->r[24]|c->r[24]; // 801A8E30
  c->lr=0x801A8E38u; f_800C30A0(c); // 801A8E34
  c->r[4]=c->r[3]|c->r[3]; // 801A8E38
  c->r[3]=c->r[24]+0x00000004u; // 801A8E3C
  c->r[5]=0u+0x00000000u; // 801A8E40
  c->lr=0x801A8E48u; f_800A0B44(c); // 801A8E44
  c->r[4]=0u+0x80690000u; // 801A8E48
  c->r[4]=c->r[4]+0x000034B8u; // 801A8E4C
  c->r[4]=c->r[4]+0x0000005Bu; // 801A8E50
  c->lr=0x801A8E58u; f_803B393C(c); // 801A8E54
  cmps(c,0,(int32_t)c->r[3],0); // 801A8E58
  if (!crb(c,2)) { goto L_801A8E90; } // 801A8E5C
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 801A8E60
  c->r[4]=0u+0x00000001u; // 801A8E64
  c->lr=0x801A8E6Cu; f_800C3068(c); // 801A8E68
  c->r[4]=R32(c->r[26]+0x0000041Cu); // 801A8E6C
  c->r[3]=c->r[31]+0x0000015Cu; // 801A8E70
  c->lr=0x801A8E78u; f_800C2E48(c); // 801A8E74
  {uint32_t ea=c->r[31]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8E78
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8E7C
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[30]); // 801A8E80
  fcmp(c,0,c->f[31],c->f[0]); // 801A8E84
  if (!crb(c,1)) { goto L_801A8E90; } // 801A8E88
  c->r[30]=0u+0x00000001u; // 801A8E8C
L_801A8E90:;
  c->r[4]=R32(c->r[26]+0x0000041Cu); // 801A8E90
  c->r[3]=c->r[31]+0x00000150u; // 801A8E94
  c->lr=0x801A8E9Cu; f_800C2FB8(c); // 801A8E98
  c->r[3]=c->r[26]+0x00000678u; // 801A8E9C
  c->r[4]=c->r[31]+0x00000150u; // 801A8EA0
  c->lr=0x801A8EA8u; f_8005DC84(c); // 801A8EA4
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 801A8EA8
  c->r[4]=0u+0x00000001u; // 801A8EAC
  c->lr=0x801A8EB4u; f_800C3068(c); // 801A8EB0
  c->r[24]=0u+0x00000001u; // 801A8EB4
  W8(c->r[26]+0x0000062Cu,c->r[24]); // 801A8EB8
  {uint32_t ea=c->r[26]+0x0000067Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A8EBC
  c->r[3]=0u+0x00000000u; // 801A8EC0
  c->r[0]=R8(c->r[13]+0xFFFFBC0Bu); // 801A8EC4
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[30]); // 801A8EC8
  W8(c->r[31]+0x00000020u,c->r[3]); // 801A8ECC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801A8ED0
  if (!crb(c,2)) { goto L_801A8F14; } // 801A8ED4
  c->r[25]=0u+0x80740000u; // 801A8ED8
  c->r[3]=c->r[25]+0x00004978u; // 801A8EDC
  c->lr=0x801A8EE4u; f_802F05B4(c); // 801A8EE0
  c->r[6]=0u+0x806D0000u; // 801A8EE4
  c->r[4]=0u+0x80050000u; // 801A8EE8
  c->r[6]=c->r[6]+0xFFFFCA20u; // 801A8EEC
  c->r[3]=c->r[25]+0x00004978u; // 801A8EF0
  c->r[0]=c->r[6]+0x0000000Cu; // 801A8EF4
  c->r[5]=0u+0x80750000u; // 801A8EF8
  W32(c->r[25]+0x00004978u,c->r[6]); // 801A8EFC
  c->r[4]=c->r[4]+0x000006D0u; // 801A8F00
  c->r[5]=c->r[5]+0x00004E8Cu; // 801A8F04
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801A8F08
  c->lr=0x801A8F10u; f_803A92B8(c); // 801A8F0C
  W8(c->r[13]+0xFFFFBC0Bu,c->r[24]); // 801A8F10
L_801A8F14:;
  c->r[3]=0u+0x80740000u; // 801A8F14
  c->r[4]=0u+0x00310000u; // 801A8F18
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8F1C
  c->r[3]=c->r[3]+0x00004978u; // 801A8F20
  {uint32_t ea=c->r[2]+0xFFFFC4C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8F24
  c->r[4]=c->r[4]+0x00000004u; // 801A8F28
  c->r[5]=c->r[26]+0x00000678u; // 801A8F2C
  c->r[6]=c->r[31]+0x000002E0u; // 801A8F30
  c->r[7]=0u+0x00000000u; // 801A8F34
  c->lr=0x801A8F3Cu; f_802F1DA4(c); // 801A8F38
  cmps(c,0,(int32_t)c->r[3],0); // 801A8F3C
  if (crb(c,2)) { goto L_801A903C; } // 801A8F40
  c->r[3]=c->r[26]+0x00000678u; // 801A8F44
  c->r[4]=c->r[31]+0x00000308u; // 801A8F48
  c->lr=0x801A8F50u; f_8005DC84(c); // 801A8F4C
  c->r[3]=c->r[26]+0x00000684u; // 801A8F50
  c->r[4]=c->r[31]+0x00000314u; // 801A8F54
  c->lr=0x801A8F5Cu; f_8005DC84(c); // 801A8F58
  cmps(c,0,(int32_t)c->r[29],0); // 801A8F5C
  if (crb(c,2)) { goto L_801A8FEC; } // 801A8F60
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A8F64
  c->r[3]=c->r[26]|c->r[26]; // 801A8F68
  c->r[4]=c->r[31]+0x00000220u; // 801A8F6C
  c->r[12]=R32(c->r[12]+0x00000148u); // 801A8F70
  c->ctr=c->r[12]; // 801A8F74
  if (true) { c->lr=0x801A8F7Cu; dispatch(c,c->ctr); } // 801A8F78
  c->r[4]=c->r[3]|c->r[3]; // 801A8F7C
  c->r[3]=c->r[31]+0x00000138u; // 801A8F80
  c->lr=0x801A8F88u; f_80060878(c); // 801A8F84
  c->r[3]=c->r[31]+0x00000144u; // 801A8F88
  c->r[4]=c->r[31]+0x00000138u; // 801A8F8C
  c->r[5]=c->r[26]+0x00000678u; // 801A8F90
  c->lr=0x801A8F98u; f_8005FC60(c); // 801A8F94
  c->r[3]=c->r[26]+0x00000690u; // 801A8F98
  c->r[4]=c->r[31]+0x00000144u; // 801A8F9C
  c->lr=0x801A8FA4u; f_8005DC84(c); // 801A8FA0
  c->r[3]=c->r[26]+0x00000690u; // 801A8FA4
  c->r[5]=0u+0x806A0000u; // 801A8FA8
  c->r[4]=c->r[3]|c->r[3]; // 801A8FAC
  c->r[5]=c->r[5]+0x00000AA8u; // 801A8FB0
  c->lr=0x801A8FB8u; f_8030E0BC(c); // 801A8FB4
  c->r[3]=c->r[31]+0x000002B0u; // 801A8FB8
  c->r[4]=c->r[26]+0x00000684u; // 801A8FBC
  c->r[5]=c->r[26]+0x00000690u; // 801A8FC0
  c->lr=0x801A8FC8u; f_8010A6BC(c); // 801A8FC4
  {uint32_t ea=c->r[31]+0x000002B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A8FC8
  c->r[3]=c->r[31]+0x0000012Cu; // 801A8FCC
  {uint32_t ea=c->r[31]+0x000002C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A8FD0
  {uint32_t ea=c->r[31]+0x000002D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A8FD4
  c->lr=0x801A8FDCu; f_8005FD70(c); // 801A8FD8
  c->r[3]=c->r[26]+0x00000690u; // 801A8FDC
  c->r[4]=c->r[31]+0x0000012Cu; // 801A8FE0
  c->lr=0x801A8FE8u; f_8005DC84(c); // 801A8FE4
  goto L_801A905C; // 801A8FE8
L_801A8FEC:;
  c->r[3]=c->r[31]+0x00000180u; // 801A8FEC
  c->r[4]=c->r[26]+0x000001B8u; // 801A8FF0
  c->lr=0x801A8FF8u; f_80060F28(c); // 801A8FF4
  c->r[3]=0u+0x80760000u; // 801A8FF8
  c->r[4]=c->r[31]+0x00000280u; // 801A8FFC
  c->r[3]=c->r[3]+0xFFFF9D48u; // 801A9000
  c->lr=0x801A9008u; f_80382F2C(c); // 801A9004
  c->r[3]=c->r[31]+0x00000280u; // 801A9008
  c->r[4]=c->r[26]+0x00000684u; // 801A900C
  c->r[5]=c->r[31]+0x00000180u; // 801A9010
  c->lr=0x801A9018u; f_8010A6BC(c); // 801A9014
  {uint32_t ea=c->r[31]+0x00000288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9018
  c->r[3]=c->r[31]+0x00000120u; // 801A901C
  {uint32_t ea=c->r[31]+0x00000298u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A9020
  {uint32_t ea=c->r[31]+0x000002A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A9024
  c->lr=0x801A902Cu; f_8005FD70(c); // 801A9028
  c->r[3]=c->r[26]+0x00000690u; // 801A902C
  c->r[4]=c->r[31]+0x00000120u; // 801A9030
  c->lr=0x801A9038u; f_8005DC84(c); // 801A9034
  goto L_801A905C; // 801A9038
L_801A903C:;
  c->r[4]=0u+0x80760000u; // 801A903C
  c->r[3]=c->r[26]+0x00000684u; // 801A9040
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 801A9044
  c->lr=0x801A904Cu; f_8005DC84(c); // 801A9048
  c->r[4]=0u+0x80760000u; // 801A904C
  c->r[3]=c->r[26]+0x00000690u; // 801A9050
  c->r[4]=c->r[4]+0xFFFF9CA8u; // 801A9054
  c->lr=0x801A905Cu; f_8005DC84(c); // 801A9058
L_801A905C:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A905C
  c->r[4]=c->r[26]|c->r[26]; // 801A9060
  c->r[3]=c->r[31]+0x00000114u; // 801A9064
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A9068
  c->ctr=c->r[12]; // 801A906C
  if (true) { c->lr=0x801A9074u; dispatch(c,c->ctr); } // 801A9070
  c->r[3]=c->r[31]+0x00000174u; // 801A9074
  c->r[4]=c->r[26]+0x00000678u; // 801A9078
  c->r[5]=c->r[31]+0x00000114u; // 801A907C
  c->lr=0x801A9084u; f_8005FC60(c); // 801A9080
  c->r[3]=c->r[31]+0x00000174u; // 801A9084
  c->r[5]=0u+0x806A0000u; // 801A9088
  c->r[4]=c->r[3]|c->r[3]; // 801A908C
  c->r[5]=c->r[5]+0x00000AA8u; // 801A9090
  c->lr=0x801A9098u; f_8030E0BC(c); // 801A9094
  {uint32_t ea=c->r[26]+0x000001BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9098
  c->r[3]=c->r[31]+0x00000108u; // 801A909C
  {uint32_t ea=c->r[26]+0x000001CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A90A0
  {uint32_t ea=c->r[26]+0x000001DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A90A4
  c->lr=0x801A90ACu; f_8005FD70(c); // 801A90A8
  c->r[3]=c->r[31]+0x00000250u; // 801A90AC
  c->r[4]=c->r[26]+0x00000690u; // 801A90B0
  c->r[5]=c->r[31]+0x00000108u; // 801A90B4
  c->lr=0x801A90BCu; f_8005FD80(c); // 801A90B8
  {uint32_t ea=c->r[31]+0x00000250u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A90BC
  c->r[3]=c->r[31]+0x000000FCu; // 801A90C0
  {uint32_t ea=c->r[31]+0x00000260u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A90C4
  {uint32_t ea=c->r[31]+0x00000270u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A90C8
  c->lr=0x801A90D0u; f_8005FD70(c); // 801A90CC
  c->r[3]=c->r[31]+0x00000174u; // 801A90D0
  c->r[4]=c->r[31]+0x000000FCu; // 801A90D4
  c->lr=0x801A90DCu; f_800B3F44(c); // 801A90D8
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A90DC
  c->r[3]=c->r[26]|c->r[26]; // 801A90E0
  fcmp(c,0,c->f[1],c->f[0]); // 801A90E4
  if (!crb(c,1)) { goto L_801A90F4; } // 801A90E8
  c->r[4]=0u+0x00000000u; // 801A90EC
  goto L_801A90F8; // 801A90F0
L_801A90F4:;
  c->r[4]=0u+0x00000001u; // 801A90F4
L_801A90F8:;
  c->lr=0x801A90FCu; f_801A381C(c); // 801A90F8
  c->r[0]=R32(c->r[26]+0x00000620u); // 801A90FC
  cmps(c,0,(int32_t)c->r[27],0); // 801A9100
  c->r[0]=cntlz(c->r[0]); // 801A9104
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801A9108
  if (crb(c,2)) { goto L_801A9124; } // 801A910C
  cmps(c,0,(int32_t)c->r[27],1); // 801A9110
  if (crb(c,2)) { goto L_801A9454; } // 801A9114
  cmps(c,0,(int32_t)c->r[27],2); // 801A9118
  if (crb(c,2)) { goto L_801A97D4; } // 801A911C
  goto L_801A98EC; // 801A9120
L_801A9124:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A9124
  if (crb(c,2)) { goto L_801A9140; } // 801A9128
  cmps(c,0,(int32_t)c->r[28],1); // 801A912C
  if (crb(c,2)) { goto L_801A92DC; } // 801A9130
  cmps(c,0,(int32_t)c->r[28],2); // 801A9134
  if (crb(c,2)) { goto L_801A9448; } // 801A9138
  goto L_801A98EC; // 801A913C
L_801A9140:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A9140
  c->r[4]=c->r[26]|c->r[26]; // 801A9144
  c->r[3]=c->r[31]+0x000000F0u; // 801A9148
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A914C
  c->ctr=c->r[12]; // 801A9150
  if (true) { c->lr=0x801A9158u; dispatch(c,c->ctr); } // 801A9154
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9158
  {uint32_t ea=c->r[26]+0x0000067Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A915C
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A9160
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801A9164
  fcmp(c,0,c->f[2],c->f[0]); // 801A9168
  c->r[24]=c->cr; // 801A916C
  c->r[3]=c->r[31]+0x000000D8u; // 801A9170
  c->r[24]=rotl(c->r[24],1)&0x00000001u; // 801A9174
  c->r[4]=c->r[26]+0x000001B8u; // 801A9178
  c->lr=0x801A9180u; f_80060F28(c); // 801A917C
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A9180
  c->r[4]=c->r[26]|c->r[26]; // 801A9184
  c->r[3]=c->r[31]+0x000000E4u; // 801A9188
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A918C
  c->ctr=c->r[12]; // 801A9190
  if (true) { c->lr=0x801A9198u; dispatch(c,c->ctr); } // 801A9194
  c->r[3]=c->r[31]+0x000000E4u; // 801A9198
  c->r[4]=c->r[31]+0x000000D8u; // 801A919C
  c->r[5]=c->r[26]+0x00000678u; // 801A91A0
  c->lr=0x801A91A8u; f_80061518(c); // 801A91A4
  cmps(c,0,(int32_t)c->r[3],0); // 801A91A8
  if (crb(c,2)) { goto L_801A91F0; } // 801A91AC
  cmps(c,0,(int32_t)c->r[24],0); // 801A91B0
  if (crb(c,2)) { goto L_801A91D4; } // 801A91B4
  c->r[4]=0u+0x00007FDAu; // 801A91B8
  c->r[3]=0u+0x00007FDFu; // 801A91BC
  c->r[0]=0u+0x00007FE4u; // 801A91C0
  W32(c->r[26]+0x0000066Cu,c->r[4]); // 801A91C4
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A91C8
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A91CC
  goto L_801A9208; // 801A91D0
L_801A91D4:;
  c->r[4]=0u+0x00007FE9u; // 801A91D4
  c->r[3]=0u+0x00007FEEu; // 801A91D8
  c->r[0]=0u+0x00007FF3u; // 801A91DC
  W32(c->r[26]+0x0000066Cu,c->r[4]); // 801A91E0
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A91E4
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A91E8
  goto L_801A9208; // 801A91EC
L_801A91F0:;
  c->r[4]=0u+0x00007D82u; // 801A91F0
  c->r[3]=0u+0x00007D87u; // 801A91F4
  c->r[0]=0u+0x00007D8Cu; // 801A91F8
  W32(c->r[26]+0x0000066Cu,c->r[4]); // 801A91FC
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A9200
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A9204
L_801A9208:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A9208
  if (!crb(c,2)) { goto L_801A9224; } // 801A920C
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9210
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9214
  fcmp(c,0,c->f[30],c->f[0]); // 801A9218
  if (!crb(c,1)) { goto L_801A9224; } // 801A921C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[30]); // 801A9220
L_801A9224:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A9224
  c->r[4]=c->r[26]|c->r[26]; // 801A9228
  c->r[3]=c->r[31]+0x000000C0u; // 801A922C
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A9230
  c->ctr=c->r[12]; // 801A9234
  if (true) { c->lr=0x801A923Cu; dispatch(c,c->ctr); } // 801A9238
  c->f[1]=c->f[31]; // 801A923C
  c->r[3]=c->r[26]|c->r[26]; // 801A9240
  c->r[4]=c->r[31]+0x000000CCu; // 801A9244
  c->r[5]=c->r[31]+0x000000C0u; // 801A9248
  c->r[6]=c->r[26]+0x00000678u; // 801A924C
  c->lr=0x801A9254u; f_801A8CB4(c); // 801A9250
  c->r[3]=c->r[26]+0x0000069Cu; // 801A9254
  c->r[4]=c->r[31]+0x000000CCu; // 801A9258
  c->lr=0x801A9260u; f_8005DC84(c); // 801A925C
  c->lr=0x801A9264u; f_800D4CE4(c); // 801A9260
  c->r[4]=c->r[3]|c->r[3]; // 801A9264
  c->r[3]=c->r[26]|c->r[26]; // 801A9268
  c->lr=0x801A9270u; f_80062F4C(c); // 801A926C
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A9270
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A9274
  c->r[3]=c->r[26]+c->r[0]; // 801A9278
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A927C
  cmps(c,0,(int32_t)c->r[24],0); // 801A9280
  if (crb(c,2)) { goto L_801A92AC; } // 801A9284
  c->r[27]=0u+0x00000000u; // 801A9288
  W32(c->r[31]+0x0000021Cu,c->r[1]); // 801A928C
  W8(c->r[31]+0x0000001Cu,c->r[27]); // 801A9290
  c->lr=0x801A9298u; f_800D4CE4(c); // 801A9294
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A9298
  c->r[0]=c->r[13]+0xFFFF8474u; // 801A929C
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A92A0
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A92A4
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A92A8
L_801A92AC:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A92AC
  c->r[0]=0u+0x00000000u; // 801A92B0
  c->r[3]=c->r[26]|c->r[26]; // 801A92B4
  c->r[4]=c->r[24]|c->r[24]; // 801A92B8
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A92BC
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A92C0
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A92C4
  c->lr=0x801A92CCu; f_8006306C(c); // 801A92C8
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A92CC
  c->r[0]=c->r[0]|0x40000000u; // 801A92D0
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A92D4
  goto L_801A98EC; // 801A92D8
L_801A92DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A92DC
  if (crb(c,2)) { goto L_801A9304; } // 801A92E0
  c->r[4]=0u+0x00010000u; // 801A92E4
  c->r[0]=c->r[4]+0xFFFF802Fu; // 801A92E8
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A92EC
  c->r[3]=c->r[4]+0xFFFF8034u; // 801A92F0
  c->r[0]=c->r[4]+0xFFFF8039u; // 801A92F4
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A92F8
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A92FC
  goto L_801A9320; // 801A9300
L_801A9304:;
  c->r[4]=0u+0x00010000u; // 801A9304
  c->r[0]=c->r[4]+0xFFFF8020u; // 801A9308
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A930C
  c->r[3]=c->r[4]+0xFFFF8025u; // 801A9310
  c->r[0]=c->r[4]+0xFFFF802Au; // 801A9314
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A9318
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A931C
L_801A9320:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A9320
  c->r[0]=0u+0x00000001u; // 801A9324
  if (!crb(c,2)) { goto L_801A9344; } // 801A9328
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801A932C
  fcmp(c,0,c->f[30],c->f[31]); // 801A9330
  if (!crb(c,0)) { goto L_801A933C; } // 801A9334
  goto L_801A9344; // 801A9338
L_801A933C:;
  c->f[31]=c->f[30]; // 801A933C
  c->r[0]=0u+0x00000000u; // 801A9340
L_801A9344:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A9344
  if (crb(c,2)) { goto L_801A938C; } // 801A9348
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A934C
  c->r[4]=c->r[26]|c->r[26]; // 801A9350
  c->r[3]=c->r[31]+0x000000A8u; // 801A9354
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A9358
  c->ctr=c->r[12]; // 801A935C
  if (true) { c->lr=0x801A9364u; dispatch(c,c->ctr); } // 801A9360
  c->f[1]=c->f[31]; // 801A9364
  c->r[3]=c->r[26]|c->r[26]; // 801A9368
  c->r[4]=c->r[31]+0x000000B4u; // 801A936C
  c->r[5]=c->r[31]+0x000000A8u; // 801A9370
  c->r[6]=c->r[26]+0x00000678u; // 801A9374
  c->lr=0x801A937Cu; f_801A8CB4(c); // 801A9378
  c->r[3]=c->r[26]+0x0000069Cu; // 801A937C
  c->r[4]=c->r[31]+0x000000B4u; // 801A9380
  c->lr=0x801A9388u; f_8005DC84(c); // 801A9384
  goto L_801A93CC; // 801A9388
L_801A938C:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A938C
  c->r[4]=c->r[26]|c->r[26]; // 801A9390
  c->r[3]=c->r[31]+0x00000090u; // 801A9394
  {uint32_t ea=c->r[13]+0xFFFF8D38u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9398
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A939C
  c->ctr=c->r[12]; // 801A93A0
  if (true) { c->lr=0x801A93A8u; dispatch(c,c->ctr); } // 801A93A4
  c->f[1]=c->f[31]; // 801A93A8
  c->r[3]=c->r[26]|c->r[26]; // 801A93AC
  c->r[4]=c->r[31]+0x0000009Cu; // 801A93B0
  c->r[5]=c->r[31]+0x00000090u; // 801A93B4
  c->r[6]=c->r[26]+0x00000678u; // 801A93B8
  c->lr=0x801A93C0u; f_801A8AF4(c); // 801A93BC
  c->r[3]=c->r[26]+0x0000069Cu; // 801A93C0
  c->r[4]=c->r[31]+0x0000009Cu; // 801A93C4
  c->lr=0x801A93CCu; f_8005DC84(c); // 801A93C8
L_801A93CC:;
  c->lr=0x801A93D0u; f_801A20D8(c); // 801A93CC
  c->r[4]=c->r[3]|c->r[3]; // 801A93D0
  c->r[3]=c->r[26]|c->r[26]; // 801A93D4
  c->lr=0x801A93DCu; f_80062F4C(c); // 801A93D8
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A93DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A93E0
  c->r[3]=c->r[26]+c->r[0]; // 801A93E4
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A93E8
  cmps(c,0,(int32_t)c->r[24],0); // 801A93EC
  if (crb(c,2)) { goto L_801A9418; } // 801A93F0
  c->r[27]=0u+0x00000000u; // 801A93F4
  W32(c->r[31]+0x00000204u,c->r[1]); // 801A93F8
  W8(c->r[31]+0x00000018u,c->r[27]); // 801A93FC
  c->lr=0x801A9404u; f_801A20D8(c); // 801A9400
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A9404
  c->r[0]=c->r[13]+0xFFFF8D6Cu; // 801A9408
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A940C
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A9410
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A9414
L_801A9418:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A9418
  c->r[0]=0u+0x00000000u; // 801A941C
  c->r[3]=c->r[26]|c->r[26]; // 801A9420
  c->r[4]=c->r[24]|c->r[24]; // 801A9424
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A9428
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A942C
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A9430
  c->lr=0x801A9438u; f_8006306C(c); // 801A9434
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A9438
  c->r[0]=c->r[0]|0x40000000u; // 801A943C
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A9440
  goto L_801A98EC; // 801A9444
L_801A9448:;
  c->r[3]=c->r[26]|c->r[26]; // 801A9448
  c->lr=0x801A9450u; f_801A52F8(c); // 801A944C
  goto L_801A98EC; // 801A9450
L_801A9454:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A9454
  if (crb(c,2)) { goto L_801A9470; } // 801A9458
  cmps(c,0,(int32_t)c->r[28],1); // 801A945C
  if (crb(c,2)) { goto L_801A95A4; } // 801A9460
  cmps(c,0,(int32_t)c->r[28],2); // 801A9464
  if (crb(c,2)) { goto L_801A96D8; } // 801A9468
  goto L_801A98EC; // 801A946C
L_801A9470:;
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9470
  fcmp(c,0,c->f[30],c->f[0]); // 801A9474
  if (!crb(c,1)) { goto L_801A9484; } // 801A9478
  c->r[0]=cntlz(c->r[0]); // 801A947C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801A9480
L_801A9484:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A9484
  if (crb(c,2)) { goto L_801A94AC; } // 801A9488
  c->r[4]=0u+0x00010000u; // 801A948C
  c->r[0]=c->r[4]+0xFFFF803Eu; // 801A9490
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A9494
  c->r[3]=c->r[4]+0xFFFF8043u; // 801A9498
  c->r[0]=c->r[4]+0xFFFF8048u; // 801A949C
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A94A0
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A94A4
  goto L_801A94C8; // 801A94A8
L_801A94AC:;
  c->r[4]=0u+0x00010000u; // 801A94AC
  c->r[0]=c->r[4]+0xFFFF804Du; // 801A94B0
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A94B4
  c->r[3]=c->r[4]+0xFFFF8052u; // 801A94B8
  c->r[0]=c->r[4]+0xFFFF8057u; // 801A94BC
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A94C0
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A94C4
L_801A94C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A94C8
  if (!crb(c,2)) { goto L_801A94EC; } // 801A94CC
  {uint32_t ea=c->r[2]+0xFFFFC4C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A94D0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A94D4
  fcmp(c,0,c->f[30],c->f[0]); // 801A94D8
  if (!crb(c,1)) { goto L_801A94EC; } // 801A94DC
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A94E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 801A94E4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801A94E8
L_801A94EC:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A94EC
  c->r[4]=c->r[26]|c->r[26]; // 801A94F0
  c->r[3]=c->r[31]+0x00000078u; // 801A94F4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A94F8
  c->ctr=c->r[12]; // 801A94FC
  if (true) { c->lr=0x801A9504u; dispatch(c,c->ctr); } // 801A9500
  c->f[1]=c->f[31]; // 801A9504
  c->r[3]=c->r[26]|c->r[26]; // 801A9508
  c->r[4]=c->r[31]+0x00000084u; // 801A950C
  c->r[5]=c->r[31]+0x00000078u; // 801A9510
  c->r[6]=c->r[26]+0x00000678u; // 801A9514
  c->lr=0x801A951Cu; f_801A8CB4(c); // 801A9518
  c->r[3]=c->r[26]+0x0000069Cu; // 801A951C
  c->r[4]=c->r[31]+0x00000084u; // 801A9520
  c->lr=0x801A9528u; f_8005DC84(c); // 801A9524
  c->lr=0x801A952Cu; f_801A1E74(c); // 801A9528
  c->r[4]=c->r[3]|c->r[3]; // 801A952C
  c->r[3]=c->r[26]|c->r[26]; // 801A9530
  c->lr=0x801A9538u; f_80062F4C(c); // 801A9534
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A9538
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A953C
  c->r[3]=c->r[26]+c->r[0]; // 801A9540
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A9544
  cmps(c,0,(int32_t)c->r[24],0); // 801A9548
  if (crb(c,2)) { goto L_801A9574; } // 801A954C
  c->r[27]=0u+0x00000000u; // 801A9550
  W32(c->r[31]+0x000001ECu,c->r[1]); // 801A9554
  W8(c->r[31]+0x00000014u,c->r[27]); // 801A9558
  c->lr=0x801A9560u; f_801A1E74(c); // 801A955C
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A9560
  c->r[0]=c->r[13]+0xFFFF8D60u; // 801A9564
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A9568
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A956C
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A9570
L_801A9574:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A9574
  c->r[0]=0u+0x00000000u; // 801A9578
  c->r[3]=c->r[26]|c->r[26]; // 801A957C
  c->r[4]=c->r[24]|c->r[24]; // 801A9580
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A9584
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A9588
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A958C
  c->lr=0x801A9594u; f_8006306C(c); // 801A9590
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A9594
  c->r[0]=c->r[0]|0x40000000u; // 801A9598
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A959C
  goto L_801A98EC; // 801A95A0
L_801A95A4:;
  c->r[4]=c->r[26]|c->r[26]; // 801A95A4
  c->r[3]=c->r[31]+0x0000006Cu; // 801A95A8
  c->lr=0x801A95B0u; f_80061584(c); // 801A95AC
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A95B0
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A95B4
  fcmp(c,0,c->f[1],c->f[0]); // 801A95B8
  c->r[0]=c->cr; // 801A95BC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801A95C0
  if (crb(c,2)) { goto L_801A95E8; } // 801A95C4
  c->r[4]=0u+0x00010000u; // 801A95C8
  c->r[0]=c->r[4]+0xFFFF806Bu; // 801A95CC
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A95D0
  c->r[3]=c->r[4]+0xFFFF8070u; // 801A95D4
  c->r[0]=c->r[4]+0xFFFF8075u; // 801A95D8
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A95DC
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A95E0
  goto L_801A9604; // 801A95E4
L_801A95E8:;
  c->r[4]=0u+0x00010000u; // 801A95E8
  c->r[0]=c->r[4]+0xFFFF805Cu; // 801A95EC
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A95F0
  c->r[3]=c->r[4]+0xFFFF8061u; // 801A95F4
  c->r[0]=c->r[4]+0xFFFF8066u; // 801A95F8
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A95FC
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A9600
L_801A9604:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A9604
  if (!crb(c,2)) { goto L_801A9620; } // 801A9608
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A960C
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9610
  fcmp(c,0,c->f[30],c->f[0]); // 801A9614
  if (!crb(c,1)) { goto L_801A9620; } // 801A9618
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[30]); // 801A961C
L_801A9620:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A9620
  c->r[4]=c->r[26]|c->r[26]; // 801A9624
  c->r[3]=c->r[31]+0x00000054u; // 801A9628
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A962C
  c->ctr=c->r[12]; // 801A9630
  if (true) { c->lr=0x801A9638u; dispatch(c,c->ctr); } // 801A9634
  c->f[1]=c->f[31]; // 801A9638
  c->r[3]=c->r[26]|c->r[26]; // 801A963C
  c->r[4]=c->r[31]+0x00000060u; // 801A9640
  c->r[5]=c->r[31]+0x00000054u; // 801A9644
  c->r[6]=c->r[26]+0x00000678u; // 801A9648
  c->lr=0x801A9650u; f_801A8CB4(c); // 801A964C
  c->r[3]=c->r[26]+0x0000069Cu; // 801A9650
  c->r[4]=c->r[31]+0x00000060u; // 801A9654
  c->lr=0x801A965Cu; f_8005DC84(c); // 801A9658
  c->lr=0x801A9660u; f_801A1CB4(c); // 801A965C
  c->r[4]=c->r[3]|c->r[3]; // 801A9660
  c->r[3]=c->r[26]|c->r[26]; // 801A9664
  c->lr=0x801A966Cu; f_80062F4C(c); // 801A9668
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A966C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A9670
  c->r[3]=c->r[26]+c->r[0]; // 801A9674
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A9678
  cmps(c,0,(int32_t)c->r[24],0); // 801A967C
  if (crb(c,2)) { goto L_801A96A8; } // 801A9680
  c->r[27]=0u+0x00000000u; // 801A9684
  W32(c->r[31]+0x000001D4u,c->r[1]); // 801A9688
  W8(c->r[31]+0x00000010u,c->r[27]); // 801A968C
  c->lr=0x801A9694u; f_801A1CB4(c); // 801A9690
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A9694
  c->r[0]=c->r[13]+0xFFFF8D58u; // 801A9698
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A969C
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A96A0
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A96A4
L_801A96A8:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A96A8
  c->r[0]=0u+0x00000000u; // 801A96AC
  c->r[3]=c->r[26]|c->r[26]; // 801A96B0
  c->r[4]=c->r[24]|c->r[24]; // 801A96B4
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A96B8
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A96BC
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A96C0
  c->lr=0x801A96C8u; f_8006306C(c); // 801A96C4
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A96C8
  c->r[0]=c->r[0]|0x40000000u; // 801A96CC
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A96D0
  goto L_801A98EC; // 801A96D4
L_801A96D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A96D8
  if (crb(c,2)) { goto L_801A9700; } // 801A96DC
  c->r[4]=0u+0x00010000u; // 801A96E0
  c->r[0]=c->r[4]+0xFFFF802Fu; // 801A96E4
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A96E8
  c->r[3]=c->r[4]+0xFFFF8034u; // 801A96EC
  c->r[0]=c->r[4]+0xFFFF8048u; // 801A96F0
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A96F4
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A96F8
  goto L_801A971C; // 801A96FC
L_801A9700:;
  c->r[4]=0u+0x00010000u; // 801A9700
  c->r[0]=c->r[4]+0xFFFF8020u; // 801A9704
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A9708
  c->r[3]=c->r[4]+0xFFFF8025u; // 801A970C
  c->r[0]=c->r[4]+0xFFFF8057u; // 801A9710
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A9714
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A9718
L_801A971C:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A971C
  c->r[4]=c->r[26]|c->r[26]; // 801A9720
  c->r[3]=c->r[31]+0x0000003Cu; // 801A9724
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A9728
  c->ctr=c->r[12]; // 801A972C
  if (true) { c->lr=0x801A9734u; dispatch(c,c->ctr); } // 801A9730
  {uint32_t ea=c->r[2]+0xFFFFC498u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9734
  c->r[3]=c->r[26]|c->r[26]; // 801A9738
  c->r[4]=c->r[31]+0x00000048u; // 801A973C
  c->r[5]=c->r[31]+0x0000003Cu; // 801A9740
  c->r[6]=c->r[26]+0x00000678u; // 801A9744
  c->lr=0x801A974Cu; f_801A8AF4(c); // 801A9748
  c->r[3]=c->r[26]+0x0000069Cu; // 801A974C
  c->r[4]=c->r[31]+0x00000048u; // 801A9750
  c->lr=0x801A9758u; f_8005DC84(c); // 801A9754
  c->lr=0x801A975Cu; f_801A1D94(c); // 801A9758
  c->r[4]=c->r[3]|c->r[3]; // 801A975C
  c->r[3]=c->r[26]|c->r[26]; // 801A9760
  c->lr=0x801A9768u; f_80062F4C(c); // 801A9764
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A9768
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A976C
  c->r[3]=c->r[26]+c->r[0]; // 801A9770
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A9774
  cmps(c,0,(int32_t)c->r[24],0); // 801A9778
  if (crb(c,2)) { goto L_801A97A4; } // 801A977C
  c->r[27]=0u+0x00000000u; // 801A9780
  W32(c->r[31]+0x000001BCu,c->r[1]); // 801A9784
  W8(c->r[31]+0x0000000Cu,c->r[27]); // 801A9788
  c->lr=0x801A9790u; f_801A1D94(c); // 801A978C
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A9790
  c->r[0]=c->r[13]+0xFFFF8D5Cu; // 801A9794
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A9798
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A979C
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A97A0
L_801A97A4:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A97A4
  c->r[0]=0u+0x00000000u; // 801A97A8
  c->r[3]=c->r[26]|c->r[26]; // 801A97AC
  c->r[4]=c->r[24]|c->r[24]; // 801A97B0
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A97B4
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A97B8
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A97BC
  c->lr=0x801A97C4u; f_8006306C(c); // 801A97C0
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A97C4
  c->r[0]=c->r[0]|0x40000000u; // 801A97C8
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A97CC
  goto L_801A98EC; // 801A97D0
L_801A97D4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A97D4
  if (crb(c,2)) { goto L_801A97E8; } // 801A97D8
  cmps(c,0,(int32_t)c->r[28],1); // 801A97DC
  if (crb(c,2)) { goto L_801A97F4; } // 801A97E0
  goto L_801A98EC; // 801A97E4
L_801A97E8:;
  c->r[3]=c->r[26]|c->r[26]; // 801A97E8
  c->lr=0x801A97F0u; f_801A50E4(c); // 801A97EC
  goto L_801A98EC; // 801A97F0
L_801A97F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A97F4
  if (crb(c,2)) { goto L_801A981C; } // 801A97F8
  c->r[4]=0u+0x00010000u; // 801A97FC
  c->r[0]=c->r[4]+0xFFFF802Fu; // 801A9800
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A9804
  c->r[3]=c->r[4]+0xFFFF8034u; // 801A9808
  c->r[0]=c->r[4]+0xFFFF802Au; // 801A980C
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A9810
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A9814
  goto L_801A9838; // 801A9818
L_801A981C:;
  c->r[4]=0u+0x00010000u; // 801A981C
  c->r[0]=c->r[4]+0xFFFF8020u; // 801A9820
  W32(c->r[26]+0x0000066Cu,c->r[0]); // 801A9824
  c->r[3]=c->r[4]+0xFFFF8025u; // 801A9828
  c->r[0]=c->r[4]+0xFFFF8039u; // 801A982C
  W32(c->r[26]+0x00000670u,c->r[3]); // 801A9830
  W32(c->r[26]+0x00000674u,c->r[0]); // 801A9834
L_801A9838:;
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 801A9838
  c->r[4]=c->r[26]|c->r[26]; // 801A983C
  c->r[3]=c->r[31]+0x00000024u; // 801A9840
  c->r[12]=R32(c->r[12]+0x00000134u); // 801A9844
  c->ctr=c->r[12]; // 801A9848
  if (true) { c->lr=0x801A9850u; dispatch(c,c->ctr); } // 801A984C
  {uint32_t ea=c->r[2]+0xFFFFC4B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9850
  c->r[3]=c->r[26]|c->r[26]; // 801A9854
  c->r[4]=c->r[31]+0x00000030u; // 801A9858
  c->r[5]=c->r[31]+0x00000024u; // 801A985C
  c->r[6]=c->r[26]+0x00000678u; // 801A9860
  c->lr=0x801A9868u; f_801A8AF4(c); // 801A9864
  c->r[3]=c->r[26]+0x0000069Cu; // 801A9868
  c->r[4]=c->r[31]+0x00000030u; // 801A986C
  c->lr=0x801A9874u; f_8005DC84(c); // 801A9870
  c->lr=0x801A9878u; f_801A1F54(c); // 801A9874
  c->r[4]=c->r[3]|c->r[3]; // 801A9878
  c->r[3]=c->r[26]|c->r[26]; // 801A987C
  c->lr=0x801A9884u; f_80062F4C(c); // 801A9880
  c->r[0]=R8(c->r[26]+0x00000010u); // 801A9884
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A9888
  c->r[3]=c->r[26]+c->r[0]; // 801A988C
  c->r[24]=R32(c->r[3]+0x00000014u); // 801A9890
  cmps(c,0,(int32_t)c->r[24],0); // 801A9894
  if (crb(c,2)) { goto L_801A98C0; } // 801A9898
  c->r[27]=0u+0x00000000u; // 801A989C
  W32(c->r[31]+0x000001A4u,c->r[1]); // 801A98A0
  W8(c->r[31]+0x00000008u,c->r[27]); // 801A98A4
  c->lr=0x801A98ACu; f_801A1F54(c); // 801A98A8
  W32(c->r[24]+0x00000000u,c->r[3]); // 801A98AC
  c->r[0]=c->r[13]+0xFFFF8D64u; // 801A98B0
  W32(c->r[24]+0x00000004u,c->r[0]); // 801A98B4
  W32(c->r[24]+0x00000008u,c->r[27]); // 801A98B8
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801A98BC
L_801A98C0:;
  W32(c->r[26]+0x00000008u,c->r[24]); // 801A98C0
  c->r[0]=0u+0x00000000u; // 801A98C4
  c->r[3]=c->r[26]|c->r[26]; // 801A98C8
  c->r[4]=c->r[24]|c->r[24]; // 801A98CC
  W32(c->r[24]+0x00000008u,c->r[0]); // 801A98D0
  c->r[0]=R32(c->r[26]+0x00000004u); // 801A98D4
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801A98D8
  c->lr=0x801A98E0u; f_8006306C(c); // 801A98DC
  c->r[0]=R32(c->r[26]+0x000005BCu); // 801A98E0
  c->r[0]=c->r[0]|0x40000000u; // 801A98E4
  W32(c->r[26]+0x000005BCu,c->r[0]); // 801A98E8
L_801A98EC:;
  c->r[0]=0u+0x00000000u; // 801A98EC
  W32(c->r[31]+0x00000628u,c->r[0]); // 801A98F0
  c->r[10]=c->r[31]|c->r[31]; // 801A98F4
  {uint32_t ea=c->r[10]+0x00000668u; psq_load(c,31,ea,0,0);} // 801A98F8
  {uint32_t ea=c->r[31]+0x00000660u; c->f[31]=RF64(ea);} // 801A98FC
  {uint32_t ea=c->r[10]+0x00000658u; psq_load(c,30,ea,0,0);} // 801A9900
  {uint32_t ea=c->r[31]+0x00000650u; c->f[30]=RF64(ea);} // 801A9904
  c->r[11]=c->r[10]+0x00000650u; // 801A9908
  c->lr=0x801A9910u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A990C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801A9910
  c->r[0]=R32(c->r[10]+0x00000004u); // 801A9914
  c->r[1]=c->r[10]|c->r[10]; // 801A9918
  c->lr=c->r[0]; // 801A991C
  return; // 801A9920
}

// fn_801A9924
void f_801A9924(Ctx* __restrict c) {
  trace_call(0x801A9924u);
  c->r[3]=c->r[3]+0x000005C0u; // 801A9924
  return; // 801A9928
}

// fn_801A992C
void f_801A992C(Ctx* __restrict c) {
  trace_call(0x801A992Cu);
  return; // 801A992C
}

// fn_801A9930
void f_801A9930(Ctx* __restrict c) {
  trace_call(0x801A9930u);
  return; // 801A9930
}

// fn_801A9934
void f_801A9934(Ctx* __restrict c) {
  trace_call(0x801A9934u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 801A9934
  f_801A34C0(c); return; // 801A9938
}

// fn_801A993C
void f_801A993C(Ctx* __restrict c) {
  trace_call(0x801A993Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A993C
  c->r[0]=c->lr; // 801A9940
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A9948
  c->r[31]=c->r[3]|c->r[3]; // 801A994C
  c->lr=0x801A9954u; f_801A9978(c); // 801A9950
  c->r[3]=c->r[31]|c->r[31]; // 801A9954
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9958
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A995C
  c->lr=c->r[0]; // 801A9960
  c->r[1]=c->r[1]+0x00000010u; // 801A9964
  return; // 801A9968
}

// fn_801A996C
void f_801A996C(Ctx* __restrict c) {
  trace_call(0x801A996Cu);
  c->r[3]=0u+0x80750000u; // 801A996C
  c->r[3]=c->r[3]+0x00004E98u; // 801A9970
  return; // 801A9974
}

// fn_801A9978
void f_801A9978(Ctx* __restrict c) {
  trace_call(0x801A9978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9978
  c->r[6]=0u+0x00000012u; // 801A997C
  {uint32_t ea=c->r[2]+0xFFFFC4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9980
  c->r[4]=c->r[6]^0x80000000u; // 801A9984
  c->r[0]=0u+0x43300000u; // 801A9988
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801A998C
  c->r[4]=0u+0x00000000u; // 801A9990
  c->r[5]=0u+0xA0A10000u; // 801A9994
  W32(c->r[1]+0x00000008u,c->r[0]); // 801A9998
  c->r[7]=c->r[5]+0xFFFFA0FFu; // 801A999C
  {uint32_t ea=c->r[2]+0xFFFFC4D8u; c->f[2]=RF64(ea);} // 801A99A0
  c->r[8]=0u+0x00000003u; // 801A99A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801A99A8
  c->r[5]=0u+0x00000001u; // 801A99AC
  {uint32_t ea=c->r[2]+0xFFFFC4C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A99B0
  c->r[0]=0u+0x000000FFu; // 801A99B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801A99B8
  {uint32_t ea=c->r[2]+0xFFFFC4CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A99BC
  {uint32_t ea=c->r[2]+0xFFFFC4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A99C0
  W32(c->r[3]+0x00000000u,c->r[8]); // 801A99C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 801A99C8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 801A99CC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801A99D0
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A99D4
  W32(c->r[3]+0x00000014u,c->r[6]); // 801A99D8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801A99DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 801A99E0
  W8(c->r[3]+0x0000002Du,c->r[5]); // 801A99E4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801A99E8
  W8(c->r[3]+0x0000002Eu,c->r[4]); // 801A99EC
  W32(c->r[3]+0x00000024u,c->r[0]); // 801A99F0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801A99F4
  W8(c->r[3]+0x0000002Cu,c->r[4]); // 801A99F8
  c->r[1]=c->r[1]+0x00000010u; // 801A99FC
  return; // 801A9A00
}

// fn_801A9A04
void f_801A9A04(Ctx* __restrict c) {
  trace_call(0x801A9A04u);
  {uint32_t ea=c->r[1]+0xFFFFFD60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9A04
  c->r[0]=c->lr; // 801A9A08
  W32(c->r[1]+0x000002A4u,c->r[0]); // 801A9A0C
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[31]);} // 801A9A10
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,31,ea,0,0);} // 801A9A14
  W32(c->r[1]+0x0000028Cu,c->r[31]); // 801A9A18
  W32(c->r[1]+0x00000288u,c->r[30]); // 801A9A1C
  c->r[30]=c->r[3]|c->r[3]; // 801A9A20
  if (!crb(c,6)) { goto L_801A9A48; } // 801A9A24
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801A9A28
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801A9A2C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801A9A30
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801A9A34
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801A9A38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801A9A3C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801A9A40
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801A9A44
L_801A9A48:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801A9A48
  c->r[11]=c->r[1]+0x000002A8u; // 801A9A4C
  c->r[0]=c->r[1]+0x00000008u; // 801A9A50
  c->r[12]=0u+0x02000000u; // 801A9A54
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801A9A58
  c->r[31]=c->r[1]+0x00000068u; // 801A9A5C
  c->r[3]=c->r[1]+0x00000078u; // 801A9A60
  W32(c->r[1]+0x00000010u,c->r[5]); // 801A9A64
  c->r[5]=c->r[31]|c->r[31]; // 801A9A68
  W32(c->r[1]+0x00000014u,c->r[6]); // 801A9A6C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801A9A70
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801A9A74
  W32(c->r[1]+0x00000020u,c->r[9]); // 801A9A78
  W32(c->r[1]+0x00000024u,c->r[10]); // 801A9A7C
  W32(c->r[1]+0x00000068u,c->r[12]); // 801A9A80
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 801A9A84
  W32(c->r[1]+0x00000070u,c->r[0]); // 801A9A88
  c->lr=0x801A9A90u; f_803B1E50(c); // 801A9A8C
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9A90
  c->r[3]=0u+0x80760000u; // 801A9A94
  c->r[3]=c->r[3]+0xFFFF9518u; // 801A9A98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9A9C
  c->r[3]=c->r[3]+c->r[0]; // 801A9AA0
  c->lr=0x801A9AA8u; f_802DB214(c); // 801A9AA4
  c->r[5]=R32(c->r[30]+0x00000014u); // 801A9AA8
  c->r[4]=0u+0x43300000u; // 801A9AAC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801A9AB0
  c->r[31]=c->r[3]|c->r[3]; // 801A9AB4
  c->r[5]=c->r[5]^0x80000000u; // 801A9AB8
  W32(c->r[1]+0x0000027Cu,c->r[5]); // 801A9ABC
  c->r[0]=c->r[0]^0x80000000u; // 801A9AC0
  {uint32_t ea=c->r[2]+0xFFFFC4D8u; c->f[2]=RF64(ea);} // 801A9AC4
  W32(c->r[1]+0x00000278u,c->r[4]); // 801A9AC8
  {uint32_t ea=c->r[3]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9ACC
  {uint32_t ea=c->r[1]+0x00000278u; c->f[0]=RF64(ea);} // 801A9AD0
  W32(c->r[1]+0x00000284u,c->r[0]); // 801A9AD4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801A9AD8
  W32(c->r[1]+0x00000280u,c->r[4]); // 801A9ADC
  {uint32_t ea=c->r[1]+0x00000280u; c->f[0]=RF64(ea);} // 801A9AE0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801A9AE4
  c->lr=0x801A9AECu; f_8050AB38(c); // 801A9AE8
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9AEC
  c->r[3]=c->r[1]+0x00000078u; // 801A9AF0
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 801A9AF4
  c->lr=0x801A9AFCu; f_803A91D4(c); // 801A9AF8
  c->r[5]=c->r[3]|c->r[3]; // 801A9AFC
  c->r[3]=c->r[31]|c->r[31]; // 801A9B00
  c->r[4]=c->r[1]+0x00000078u; // 801A9B04
  c->lr=0x801A9B0Cu; f_8050B730(c); // 801A9B08
  {uint32_t ea=c->r[2]+0xFFFFC4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9B0C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801A9B10
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801A9B14
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[31]);} // 801A9B18
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,31,ea,0,0);} // 801A9B1C
  {uint32_t ea=c->r[1]+0x00000290u; c->f[31]=RF64(ea);} // 801A9B20
  c->r[31]=R32(c->r[1]+0x0000028Cu); // 801A9B24
  c->r[30]=R32(c->r[1]+0x00000288u); // 801A9B28
  c->r[0]=R32(c->r[1]+0x000002A4u); // 801A9B2C
  c->lr=c->r[0]; // 801A9B30
  c->r[1]=c->r[1]+0x000002A0u; // 801A9B34
  return; // 801A9B38
}

// fn_801A9B3C
void f_801A9B3C(Ctx* __restrict c) {
  trace_call(0x801A9B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9B3C
  c->r[0]=c->lr; // 801A9B40
  W32(c->r[1]+0x00000084u,c->r[0]); // 801A9B44
  c->r[11]=c->r[1]+0x00000070u; // 801A9B48
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801A9B4C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801A9B50
  c->lr=0x801A9B58u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A9B54
  {uint32_t ea=c->r[2]+0xFFFFC4D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9B58
  c->r[6]=0u+0x80750000u; // 801A9B5C
  c->r[28]=c->r[3]|c->r[3]; // 801A9B60
  c->r[5]=c->r[1]+0x00000008u; // 801A9B64
  c->r[3]=c->r[6]+0xFFFFBC98u; // 801A9B68
  c->lr=0x801A9B70u; f_800AB224(c); // 801A9B6C
  c->r[30]=c->r[1]+0x00000008u; // 801A9B70
  c->r[29]=0u+0x00000000u; // 801A9B74
  c->r[31]=0u+0x00000000u; // 801A9B78
  goto L_801A9BA8; // 801A9B7C
L_801A9B80:;
  c->r[4]=c->r[30]+c->r[31]; // 801A9B80
  c->r[3]=c->r[28]|c->r[28]; // 801A9B84
  c->r[4]=R32(c->r[4]+0x00000008u); // 801A9B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A9B8C
  c->lr=0x801A9B94u; f_801A9A04(c); // 801A9B90
  fcmp(c,0,c->f[1],c->f[31]); // 801A9B94
  if (!crb(c,1)) { goto L_801A9BA0; } // 801A9B98
  c->f[31]=c->f[1]; // 801A9B9C
L_801A9BA0:;
  c->r[29]=c->r[29]+0x00000001u; // 801A9BA0
  c->r[31]=c->r[31]+0x00000004u; // 801A9BA4
L_801A9BA8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801A9BA8
  cmpu(c,0,c->r[29],c->r[0]); // 801A9BAC
  if (crb(c,0)) { IRQCHK(c); goto L_801A9B80; } // 801A9BB0
  c->f[1]=c->f[31]; // 801A9BB4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801A9BB8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801A9BBC
  c->r[11]=c->r[1]+0x00000070u; // 801A9BC0
  c->lr=0x801A9BC8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A9BC4
  c->r[0]=R32(c->r[1]+0x00000084u); // 801A9BC8
  c->lr=c->r[0]; // 801A9BCC
  c->r[1]=c->r[1]+0x00000080u; // 801A9BD0
  return; // 801A9BD4
}

// fn_801A9BD8
void f_801A9BD8(Ctx* __restrict c) {
  trace_call(0x801A9BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9BD8
  c->r[0]=c->lr; // 801A9BDC
  W32(c->r[1]+0x00000294u,c->r[0]); // 801A9BE0
  W32(c->r[1]+0x0000028Cu,c->r[31]); // 801A9BE4
  W32(c->r[1]+0x00000288u,c->r[30]); // 801A9BE8
  c->r[30]=c->r[3]|c->r[3]; // 801A9BEC
  if (!crb(c,6)) { goto L_801A9C14; } // 801A9BF0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801A9BF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801A9BF8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801A9BFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801A9C00
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801A9C04
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801A9C08
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801A9C0C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801A9C10
L_801A9C14:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801A9C14
  c->r[11]=c->r[1]+0x00000298u; // 801A9C18
  c->r[0]=c->r[1]+0x00000008u; // 801A9C1C
  c->r[12]=0u+0x02000000u; // 801A9C20
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801A9C24
  c->r[31]=c->r[1]+0x00000068u; // 801A9C28
  c->r[3]=c->r[1]+0x00000078u; // 801A9C2C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801A9C30
  c->r[5]=c->r[31]|c->r[31]; // 801A9C34
  W32(c->r[1]+0x00000014u,c->r[6]); // 801A9C38
  W32(c->r[1]+0x00000018u,c->r[7]); // 801A9C3C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801A9C40
  W32(c->r[1]+0x00000020u,c->r[9]); // 801A9C44
  W32(c->r[1]+0x00000024u,c->r[10]); // 801A9C48
  W32(c->r[1]+0x00000068u,c->r[12]); // 801A9C4C
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 801A9C50
  W32(c->r[1]+0x00000070u,c->r[0]); // 801A9C54
  c->lr=0x801A9C5Cu; f_803B1E50(c); // 801A9C58
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9C5C
  c->r[3]=0u+0x80760000u; // 801A9C60
  c->r[3]=c->r[3]+0xFFFF9518u; // 801A9C64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9C68
  c->r[3]=c->r[3]+c->r[0]; // 801A9C6C
  c->lr=0x801A9C74u; f_802DB214(c); // 801A9C70
  c->r[4]=R32(c->r[30]+0x00000010u); // 801A9C74
  c->r[0]=0u+0x43300000u; // 801A9C78
  W32(c->r[1]+0x00000278u,c->r[0]); // 801A9C7C
  c->r[31]=c->r[3]|c->r[3]; // 801A9C80
  c->r[0]=c->r[4]^0x80000000u; // 801A9C84
  {uint32_t ea=c->r[2]+0xFFFFC4D8u; c->f[1]=RF64(ea);} // 801A9C88
  W32(c->r[1]+0x0000027Cu,c->r[0]); // 801A9C8C
  {uint32_t ea=c->r[1]+0x00000278u; c->f[0]=RF64(ea);} // 801A9C90
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801A9C94
  c->lr=0x801A9C9Cu; f_8050ABFC(c); // 801A9C98
  c->r[3]=c->r[1]+0x00000078u; // 801A9C9C
  c->lr=0x801A9CA4u; f_803A91D4(c); // 801A9CA0
  c->r[5]=c->r[3]|c->r[3]; // 801A9CA4
  c->r[3]=c->r[31]|c->r[31]; // 801A9CA8
  c->r[4]=c->r[1]+0x00000078u; // 801A9CAC
  c->lr=0x801A9CB4u; f_8050B9D4(c); // 801A9CB0
  c->r[0]=R32(c->r[1]+0x00000294u); // 801A9CB4
  c->r[31]=R32(c->r[1]+0x0000028Cu); // 801A9CB8
  c->r[30]=R32(c->r[1]+0x00000288u); // 801A9CBC
  c->lr=c->r[0]; // 801A9CC0
  c->r[1]=c->r[1]+0x00000290u; // 801A9CC4
  return; // 801A9CC8
}

// fn_801A9CCC
void f_801A9CCC(Ctx* __restrict c) {
  trace_call(0x801A9CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9CCC
  c->r[5]=c->r[4]^0x80000000u; // 801A9CD0
  c->r[0]=0u+0x43300000u; // 801A9CD4
  {uint32_t ea=c->r[2]+0xFFFFC4D8u; c->f[1]=RF64(ea);} // 801A9CD8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801A9CDC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801A9CE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801A9CE4
  W32(c->r[3]+0x00000010u,c->r[4]); // 801A9CE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801A9CEC
  W32(c->r[3]+0x00000014u,c->r[4]); // 801A9CF0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801A9CF4
  c->r[1]=c->r[1]+0x00000010u; // 801A9CF8
  return; // 801A9CFC
}

// fn_801A9D00
void f_801A9D00(Ctx* __restrict c) {
  trace_call(0x801A9D00u);
  W32(c->r[3]+0x00000014u,c->r[4]); // 801A9D00
  return; // 801A9D04
}

// fn_801A9D08
void f_801A9D08(Ctx* __restrict c) {
  trace_call(0x801A9D08u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9D08
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9D0C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801A9D10
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801A9D14
  return; // 801A9D18
}

// fn_801A9D1C
void f_801A9D1C(Ctx* __restrict c) {
  trace_call(0x801A9D1Cu);
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801A9D1C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801A9D20
  return; // 801A9D24
}

// fn_801A9D28
void f_801A9D28(Ctx* __restrict c) {
  trace_call(0x801A9D28u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 801A9D28
  return; // 801A9D2C
}

// fn_801A9D30
void f_801A9D30(Ctx* __restrict c) {
  trace_call(0x801A9D30u);
  c->r[5]=R32(c->r[3]+0x00000024u); // 801A9D30
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801A9D34
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801A9D38
  c->r[0]=(rotl(c->r[5],0)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801A9D3C
  c->r[0]=(rotl(c->r[5],0)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 801A9D40
  W32(c->r[3]+0x00000024u,c->r[0]); // 801A9D44
  return; // 801A9D48
}

// fn_801A9D4C
void f_801A9D4C(Ctx* __restrict c) {
  trace_call(0x801A9D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9D4C
  c->r[0]=c->lr; // 801A9D50
  c->r[5]=0u+0x80750000u; // 801A9D54
  W32(c->r[1]+0x00000074u,c->r[0]); // 801A9D58
  {uint32_t ea=c->r[1]+0x00000060u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A9D5C
  c->r[28]=c->r[3]|c->r[3]; // 801A9D60
  c->r[3]=c->r[5]+0xFFFFBC98u; // 801A9D64
  c->r[5]=c->r[1]+0x00000008u; // 801A9D68
  c->lr=0x801A9D70u; f_800AB224(c); // 801A9D6C
  c->r[30]=c->r[1]+0x00000008u; // 801A9D70
  c->r[29]=0u+0x00000000u; // 801A9D74
  c->r[31]=0u+0x00000000u; // 801A9D78
  goto L_801A9D98; // 801A9D7C
L_801A9D80:;
  c->r[4]=c->r[30]+c->r[31]; // 801A9D80
  c->r[3]=c->r[28]|c->r[28]; // 801A9D84
  c->r[4]=R32(c->r[4]+0x00000008u); // 801A9D88
  c->lr=0x801A9D90u; f_801A9E9C(c); // 801A9D8C
  c->r[29]=c->r[29]+0x00000001u; // 801A9D90
  c->r[31]=c->r[31]+0x00000004u; // 801A9D94
L_801A9D98:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801A9D98
  cmpu(c,0,c->r[29],c->r[0]); // 801A9D9C
  if (crb(c,0)) { IRQCHK(c); goto L_801A9D80; } // 801A9DA0
  {uint32_t ea=c->r[1]+0x00000060u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A9DA4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801A9DA8
  c->lr=c->r[0]; // 801A9DAC
  c->r[1]=c->r[1]+0x00000070u; // 801A9DB0
  return; // 801A9DB4
}

// fn_801A9DB8
void f_801A9DB8(Ctx* __restrict c) {
  trace_call(0x801A9DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9DB8
  c->r[0]=c->lr; // 801A9DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9DC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A9DC4
  c->r[30]=c->r[3]|c->r[3]; // 801A9DC8
  c->r[31]=c->r[5]|c->r[5]; // 801A9DCC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801A9DD0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801A9DD4
  c->lr=0x801A9DDCu; f_801A9D30(c); // 801A9DD8
  c->r[3]=c->r[30]|c->r[30]; // 801A9DDC
  c->r[4]=c->r[31]|c->r[31]; // 801A9DE0
  c->lr=0x801A9DE8u; f_801A9D4C(c); // 801A9DE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A9DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9DEC
  c->lr=c->r[0]; // 801A9DF0
  c->r[1]=c->r[1]+0x00000010u; // 801A9DF4
  return; // 801A9DF8
}

// fn_801A9DFC
void f_801A9DFC(Ctx* __restrict c) {
  trace_call(0x801A9DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9DFC
  c->r[0]=c->lr; // 801A9E00
  W32(c->r[1]+0x00000284u,c->r[0]); // 801A9E04
  {uint32_t ea=c->r[1]+0x00000278u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801A9E08
  c->r[30]=c->r[3]|c->r[3]; // 801A9E0C
  if (!crb(c,6)) { goto L_801A9E34; } // 801A9E10
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801A9E14
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801A9E18
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801A9E1C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801A9E20
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801A9E24
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801A9E28
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801A9E2C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801A9E30
L_801A9E34:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801A9E34
  c->r[11]=c->r[1]+0x00000288u; // 801A9E38
  c->r[0]=c->r[1]+0x00000008u; // 801A9E3C
  c->r[12]=0u+0x02000000u; // 801A9E40
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801A9E44
  c->r[31]=c->r[1]+0x00000068u; // 801A9E48
  c->r[3]=c->r[1]+0x00000078u; // 801A9E4C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801A9E50
  c->r[5]=c->r[31]|c->r[31]; // 801A9E54
  W32(c->r[1]+0x00000014u,c->r[6]); // 801A9E58
  W32(c->r[1]+0x00000018u,c->r[7]); // 801A9E5C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801A9E60
  W32(c->r[1]+0x00000020u,c->r[9]); // 801A9E64
  W32(c->r[1]+0x00000024u,c->r[10]); // 801A9E68
  W32(c->r[1]+0x00000068u,c->r[12]); // 801A9E6C
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 801A9E70
  W32(c->r[1]+0x00000070u,c->r[0]); // 801A9E74
  c->lr=0x801A9E7Cu; f_803B1E50(c); // 801A9E78
  c->r[3]=c->r[30]|c->r[30]; // 801A9E7C
  c->r[4]=c->r[1]+0x00000078u; // 801A9E80
  c->lr=0x801A9E88u; f_801A9E9C(c); // 801A9E84
  {uint32_t ea=c->r[1]+0x00000278u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801A9E88
  c->r[0]=R32(c->r[1]+0x00000284u); // 801A9E8C
  c->lr=c->r[0]; // 801A9E90
  c->r[1]=c->r[1]+0x00000280u; // 801A9E94
  return; // 801A9E98
}

// fn_801A9E9C
void f_801A9E9C(Ctx* __restrict c) {
  trace_call(0x801A9E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9E9C
  c->r[0]=c->lr; // 801A9EA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801A9EA4
  c->r[11]=c->r[1]+0x00000030u; // 801A9EA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801A9EAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801A9EB0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801A9EB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801A9EB8
  c->lr=0x801A9EC0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A9EBC
  c->r[30]=c->r[3]|c->r[3]; // 801A9EC0
  c->r[31]=c->r[4]|c->r[4]; // 801A9EC4
  c->r[5]=c->r[1]+0x0000000Cu; // 801A9EC8
  c->r[6]=c->r[1]+0x00000008u; // 801A9ECC
  c->lr=0x801A9ED4u; f_801AA024(c); // 801A9ED0
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9ED4
  c->r[29]=0u+0x80760000u; // 801A9ED8
  c->r[29]=c->r[29]+0xFFFF9518u; // 801A9EDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9EE0
  c->r[3]=c->r[29]+c->r[0]; // 801A9EE4
  c->lr=0x801A9EECu; f_802DB214(c); // 801A9EE8
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9EEC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[30]=c->ps1[30]=RF32(ea);} // 801A9EF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9EF4
  c->r[3]=c->r[29]+c->r[0]; // 801A9EF8
  c->lr=0x801A9F00u; f_802DB214(c); // 801A9EFC
  c->r[5]=R32(c->r[30]+0x00000014u); // 801A9F00
  c->r[4]=0u+0x43300000u; // 801A9F04
  c->r[0]=R32(c->r[30]+0x00000010u); // 801A9F08
  c->r[5]=c->r[5]^0x80000000u; // 801A9F0C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801A9F10
  c->r[0]=c->r[0]^0x80000000u; // 801A9F14
  {uint32_t ea=c->r[2]+0xFFFFC4D8u; c->f[2]=RF64(ea);} // 801A9F18
  W32(c->r[1]+0x00000010u,c->r[4]); // 801A9F1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801A9F20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801A9F24
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801A9F28
  W32(c->r[1]+0x00000018u,c->r[4]); // 801A9F2C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801A9F30
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801A9F34
  c->lr=0x801A9F3Cu; f_8050AB38(c); // 801A9F38
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9F3C
  {uint32_t ea=c->r[30]+0x00000020u; c->f[31]=c->ps1[31]=RF32(ea);} // 801A9F40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9F44
  c->r[3]=c->r[29]+c->r[0]; // 801A9F48
  c->lr=0x801A9F50u; f_802DB214(c); // 801A9F4C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[31]);} // 801A9F50
  c->r[0]=R8(c->r[30]+0x0000002Eu); // 801A9F54
  cmps(c,0,(int32_t)c->r[0],0); // 801A9F58
  if (crb(c,2)) { goto L_801A9F90; } // 801A9F5C
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9F60
  c->r[5]=c->r[31]|c->r[31]; // 801A9F64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9F68
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A9F6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9F70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9F74
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801A9F78
  c->r[4]=R32(c->r[30]+0x00000024u); // 801A9F7C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 801A9F80
  c->r[3]=c->r[29]+c->r[0]; // 801A9F84
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801A9F88
  c->lr=0x801A9F90u; f_802DA6F0(c); // 801A9F8C
L_801A9F90:;
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9F90
  c->r[3]=0u+0x80760000u; // 801A9F94
  c->r[3]=c->r[3]+0xFFFF9518u; // 801A9F98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9F9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9FA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A9FA4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801A9FA8
  c->r[5]=c->r[31]|c->r[31]; // 801A9FAC
  c->r[3]=c->r[3]+c->r[0]; // 801A9FB0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801A9FB4
  c->lr=0x801A9FBCu; f_802DA6F0(c); // 801A9FB8
  c->r[0]=R8(c->r[30]+0x0000002Du); // 801A9FBC
  cmps(c,0,(int32_t)c->r[0],0); // 801A9FC0
  if (crb(c,2)) { goto L_801A9FE0; } // 801A9FC4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A9FC8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A9FCC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A9FD0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801A9FD4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801A9FD8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 801A9FDC
L_801A9FE0:;
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 801A9FE0
  c->r[3]=0u+0x80760000u; // 801A9FE4
  c->r[3]=c->r[3]+0xFFFF9518u; // 801A9FE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)152); // 801A9FEC
  c->r[3]=c->r[3]+c->r[0]; // 801A9FF0
  c->lr=0x801A9FF8u; f_802DB214(c); // 801A9FF4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[30]);} // 801A9FF8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801A9FFC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801AA000
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801AA004
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801AA008
  c->r[11]=c->r[1]+0x00000030u; // 801AA00C
  c->lr=0x801AA014u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AA010
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AA014
  c->lr=c->r[0]; // 801AA018
  c->r[1]=c->r[1]+0x00000050u; // 801AA01C
  return; // 801AA020
}

// fn_801AA024
void f_801AA024(Ctx* __restrict c) {
  trace_call(0x801AA024u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA024
  c->r[0]=c->lr; // 801AA028
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AA02C
  c->r[11]=c->r[1]+0x00000020u; // 801AA030
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801AA034
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801AA038
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801AA03C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801AA040
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801AA044
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801AA048
  c->lr=0x801AA050u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AA04C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AA050
  c->r[28]=c->r[3]|c->r[3]; // 801AA054
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 801AA058
  c->r[29]=c->r[4]|c->r[4]; // 801AA05C
  cmpu(c,0,c->r[0],0x00000003u); // 801AA060
  {uint32_t ea=c->r[3]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 801AA064
  c->r[30]=c->r[5]|c->r[5]; // 801AA068
  c->r[31]=c->r[6]|c->r[6]; // 801AA06C
  if (crb(c,2)) { goto L_801AA0CC; } // 801AA070
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA074
  c->lr=0x801AA07Cu; f_801A9A04(c); // 801AA078
  c->f[31]=c->f[1]; // 801AA07C
  c->r[3]=c->r[28]|c->r[28]; // 801AA080
  c->r[4]=c->r[29]|c->r[29]; // 801AA084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA088
  c->lr=0x801AA090u; f_801A9BD8(c); // 801AA08C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801AA090
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801AA094
  if (crb(c,2)) { goto L_801AA0A0; } // 801AA098
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[31]); // 801AA09C
L_801AA0A0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801AA0A0
  if (crb(c,2)) { goto L_801AA0B0; } // 801AA0A4
  {uint32_t ea=c->r[2]+0xFFFFC4E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AA0A8
  c->f[30]=c->ps1[30]=S(-std::fma(c->f[0],c->f[31],-c->f[30])); // 801AA0AC
L_801AA0B0:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801AA0B0
  if (crb(c,2)) { goto L_801AA0BC; } // 801AA0B4
  c->f[29]=c->ps1[29]=S(c->f[29]-c->f[1]); // 801AA0B8
L_801AA0BC:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 801AA0BC
  if (crb(c,2)) { goto L_801AA0CC; } // 801AA0C0
  {uint32_t ea=c->r[2]+0xFFFFC4E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AA0C4
  c->f[29]=c->ps1[29]=S(-std::fma(c->f[0],c->f[1],-c->f[29])); // 801AA0C8
L_801AA0CC:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[30]);} // 801AA0CC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[29]);} // 801AA0D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801AA0D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801AA0D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801AA0DC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801AA0E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801AA0E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801AA0E8
  c->r[11]=c->r[1]+0x00000020u; // 801AA0EC
  c->lr=0x801AA0F4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AA0F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AA0F4
  c->lr=c->r[0]; // 801AA0F8
  c->r[1]=c->r[1]+0x00000050u; // 801AA0FC
  return; // 801AA100
}

// fn_801AA104
void f_801AA104(Ctx* __restrict c) {
  trace_call(0x801AA104u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA104
  c->r[0]=c->lr; // 801AA108
  c->r[3]=0u+0x80750000u; // 801AA10C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AA110
  c->r[3]=c->r[3]+0xFFFFBC98u; // 801AA114
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801AA118
  c->r[31]=c->r[5]|c->r[5]; // 801AA11C
  c->r[5]=c->r[1]+0x00000008u; // 801AA120
  c->lr=0x801AA128u; f_800AB224(c); // 801AA124
  cmps(c,0,(int32_t)c->r[31],0); // 801AA128
  if (!crb(c,0)) { goto L_801AA138; } // 801AA12C
  c->r[3]=0u+0x00000000u; // 801AA130
  goto L_801AA158; // 801AA134
L_801AA138:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801AA138
  cmpu(c,0,c->r[31],c->r[0]); // 801AA13C
  if (crb(c,0)) { goto L_801AA14C; } // 801AA140
  c->r[3]=0u+0x00000000u; // 801AA144
  goto L_801AA158; // 801AA148
L_801AA14C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801AA14C
  c->r[3]=c->r[1]+0x00000010u; // 801AA150
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AA154
L_801AA158:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AA158
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801AA15C
  c->lr=c->r[0]; // 801AA160
  c->r[1]=c->r[1]+0x00000060u; // 801AA164
  return; // 801AA168
}

// fn_801AA16C
void f_801AA16C(Ctx* __restrict c) {
  trace_call(0x801AA16Cu);
  c->r[3]=0u+0x80750000u; // 801AA16C
  c->r[3]=c->r[3]+0x00004E98u; // 801AA170
  f_801A993C(c); return; // 801AA174
}

// fn_801AA178
void f_801AA178(Ctx* __restrict c) {
  trace_call(0x801AA178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA178
  c->r[0]=c->lr; // 801AA17C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AA180
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AA184
  c->r[29]=c->r[3]|c->r[3]; // 801AA188
  c->r[31]=0u+0x80690000u; // 801AA18C
  c->r[30]=c->r[29]|c->r[29]; // 801AA190
  c->r[28]=c->r[29]|c->r[29]; // 801AA194
  c->r[26]=c->r[29]|c->r[29]; // 801AA198
  c->r[31]=c->r[31]+0x00003520u; // 801AA19C
  c->lr=0x801AA1A4u; f_801AAD04(c); // 801AA1A0
  c->r[4]=0u+0x806D0000u; // 801AA1A4
  c->r[27]=0u+0x00000000u; // 801AA1A8
  W32(c->r[29]+0x00000000u,c->r[3]); // 801AA1AC
  c->r[4]=c->r[4]+0x000038C0u; // 801AA1B0
  c->r[3]=c->r[29]+0x00000020u; // 801AA1B4
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801AA1B8
  W32(c->r[29]+0x00000004u,c->r[27]); // 801AA1BC
  W32(c->r[29]+0x00000008u,c->r[27]); // 801AA1C0
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 801AA1C4
  W8(c->r[29]+0x00000010u,c->r[27]); // 801AA1C8
  W32(c->r[29]+0x00000014u,c->r[27]); // 801AA1CC
  W32(c->r[29]+0x00000018u,c->r[27]); // 801AA1D0
  c->lr=0x801AA1D8u; f_80163ED4(c); // 801AA1D4
  c->r[3]=c->r[29]+0x00000028u; // 801AA1D8
  c->r[4]=0u+0x00000001u; // 801AA1DC
  c->lr=0x801AA1E4u; f_80163FD0(c); // 801AA1E0
  c->r[3]=c->r[29]+0x00000038u; // 801AA1E4
  c->lr=0x801AA1ECu; f_80164094(c); // 801AA1E8
  c->r[3]=c->r[29]+0x00000044u; // 801AA1EC
  c->r[4]=0u+0x00000000u; // 801AA1F0
  c->lr=0x801AA1F8u; f_801640D8(c); // 801AA1F4
  c->r[3]=0u+0x806F0000u; // 801AA1F8
  W32(c->r[29]+0x00000058u,c->r[27]); // 801AA1FC
  c->r[3]=c->r[3]+0x00000E80u; // 801AA200
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801AA204
  c->r[3]=c->r[29]+0x0000009Cu; // 801AA208
  W32(c->r[29]+0x00000064u,c->r[27]); // 801AA20C
  c->lr=0x801AA214u; f_8016419C(c); // 801AA210
  c->r[3]=c->r[29]+0x000000A8u; // 801AA214
  c->lr=0x801AA21Cu; f_801641E0(c); // 801AA218
  c->r[3]=c->r[29]+0x000000B4u; // 801AA21C
  c->lr=0x801AA224u; f_80164224(c); // 801AA220
  c->r[3]=c->r[29]+0x000000C0u; // 801AA224
  c->lr=0x801AA22Cu; f_80164268(c); // 801AA228
  c->r[3]=c->r[29]+0x000000CCu; // 801AA22C
  c->lr=0x801AA234u; f_801642AC(c); // 801AA230
  c->r[3]=c->r[29]+0x000000D8u; // 801AA234
  c->lr=0x801AA23Cu; f_801642F0(c); // 801AA238
  c->r[0]=0u+0x00000006u; // 801AA23C
  W32(c->r[29]+0x000000E8u,c->r[0]); // 801AA240
  c->r[3]=c->r[29]+0x000000FCu; // 801AA244
  W32(c->r[29]+0x000000ECu,c->r[27]); // 801AA248
  W32(c->r[29]+0x000000F8u,c->r[27]); // 801AA24C
  c->lr=0x801AA254u; f_80164320(c); // 801AA250
  c->r[0]=0u+0x0000000Au; // 801AA254
  c->r[3]=c->r[27]|c->r[27]; // 801AA258
  W32(c->r[29]+0x00000314u,c->r[27]); // 801AA25C
  c->r[7]=0u+0x00000000u; // 801AA260
  c->r[6]=0u+0xFFFFFFFFu; // 801AA264
  W8(c->r[29]+0x0000005Cu,c->r[27]); // 801AA268
  W32(c->r[29]+0x00000054u,c->r[27]); // 801AA26C
  W32(c->r[29]+0x00000310u,c->r[29]); // 801AA270
  c->ctr=c->r[0]; // 801AA274
L_801AA278:;
  c->r[5]=c->r[29]+c->r[3]; // 801AA278
  c->r[4]=c->r[29]+c->r[7]; // 801AA27C
  W32(c->r[5]+0x00000068u,c->r[6]); // 801AA280
  c->r[7]=c->r[7]+0x00000001u; // 801AA284
  c->r[3]=c->r[3]+0x00000004u; // 801AA288
  W8(c->r[4]+0x00000090u,c->r[27]); // 801AA28C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AA278; } // 801AA290
  c->r[3]=c->r[29]+0x00000318u; // 801AA294
  c->r[4]=0u+0x00000001u; // 801AA298
  c->lr=0x801AA2A0u; f_80163E10(c); // 801AA29C
  c->r[3]=0u+0x806D0000u; // 801AA2A0
  c->r[0]=0u+0x00000000u; // 801AA2A4
  c->r[3]=c->r[3]+0xFFFFD974u; // 801AA2A8
  c->r[5]=0u+0xFFFFFFFFu; // 801AA2AC
  c->r[4]=0u+0x00000001u; // 801AA2B0
  c->r[26]=c->r[29]+0x0000032Cu; // 801AA2B4
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801AA2B8
  c->r[3]=c->r[26]|c->r[26]; // 801AA2BC
  W32(c->r[29]+0x00000328u,c->r[5]); // 801AA2C0
  W32(c->r[29]+0x000000ECu,c->r[4]); // 801AA2C4
  W32(c->r[29]+0x00000054u,c->r[0]); // 801AA2C8
  W32(c->r[29]+0x00000314u,c->r[0]); // 801AA2CC
  c->lr=0x801AA2D4u; f_800506C0(c); // 801AA2D0
  cmps(c,0,(int32_t)c->r[26],0); // 801AA2D4
  c->r[3]=c->r[26]|c->r[26]; // 801AA2D8
  if (crb(c,2)) { goto L_801AA2E4; } // 801AA2DC
  c->r[3]=c->r[26]+0xFFFFFCD4u; // 801AA2E0
L_801AA2E4:;
  c->r[27]=0u+0x00000001u; // 801AA2E4
  W32(c->r[26]+0x00000008u,c->r[3]); // 801AA2E8
  W8(c->r[26]+0x0000000Cu,c->r[27]); // 801AA2EC
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801AA2F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA2F4
  if (!crb(c,2)) { goto L_801AA338; } // 801AA2F8
  c->r[28]=0u+0x80730000u; // 801AA2FC
  c->r[3]=c->r[28]+0x000073A8u; // 801AA300
  c->lr=0x801AA308u; f_800506C0(c); // 801AA304
  c->r[6]=0u+0x806D0000u; // 801AA308
  c->r[4]=0u+0x80050000u; // 801AA30C
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801AA310
  c->r[3]=c->r[28]+0x000073A8u; // 801AA314
  c->r[0]=c->r[6]+0x00000008u; // 801AA318
  c->r[5]=0u+0x80750000u; // 801AA31C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801AA320
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 801AA324
  c->r[5]=c->r[5]+0x00004EE0u; // 801AA328
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801AA32C
  c->lr=0x801AA334u; f_803A92B8(c); // 801AA330
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 801AA334
L_801AA338:;
  c->r[3]=0u+0x80730000u; // 801AA338
  c->r[5]=c->r[26]|c->r[26]; // 801AA33C
  c->r[3]=c->r[3]+0x000073A8u; // 801AA340
  c->r[4]=c->r[3]|c->r[3]; // 801AA344
  c->lr=0x801AA34Cu; f_802DDCA8(c); // 801AA348
  c->r[27]=c->r[29]+0x0000033Cu; // 801AA34C
  c->r[3]=c->r[27]|c->r[27]; // 801AA350
  c->lr=0x801AA358u; f_800506C0(c); // 801AA354
  cmps(c,0,(int32_t)c->r[27],0); // 801AA358
  c->r[3]=c->r[27]|c->r[27]; // 801AA35C
  if (crb(c,2)) { goto L_801AA368; } // 801AA360
  c->r[3]=c->r[27]+0xFFFFFCC4u; // 801AA364
L_801AA368:;
  c->r[0]=0u+0x00000000u; // 801AA368
  W32(c->r[27]+0x00000008u,c->r[3]); // 801AA36C
  c->r[3]=c->r[27]|c->r[27]; // 801AA370
  W8(c->r[27]+0x0000000Cu,c->r[0]); // 801AA374
  c->lr=0x801AA37Cu; f_80163D78(c); // 801AA378
  c->r[3]=0u+0x806D0000u; // 801AA37C
  W32(c->r[29]+0x00000054u,c->r[31]); // 801AA380
  c->r[3]=c->r[3]+0x00004AE8u; // 801AA384
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801AA388
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 801AA38C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA390
  if (!crb(c,2)) { goto L_801AA3B0; } // 801AA394
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801AA398
  c->r[0]=0u+0x00000001u; // 801AA39C
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 801AA3A0
  c->r[3]=c->r[3]+0x00000001u; // 801AA3A4
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801AA3A8
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 801AA3AC
L_801AA3B0:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 801AA3B0
  W32(c->r[29]+0x00000328u,c->r[0]); // 801AA3B4
  c->r[0]=R8(c->r[13]+0xFFFFD01Cu); // 801AA3B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA3BC
  if (!crb(c,2)) { goto L_801AA3DC; } // 801AA3C0
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 801AA3C4
  c->r[0]=0u+0x00000001u; // 801AA3C8
  W32(c->r[13]+0xFFFFD018u,c->r[3]); // 801AA3CC
  c->r[3]=c->r[3]+0x00000001u; // 801AA3D0
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 801AA3D4
  W8(c->r[13]+0xFFFFD01Cu,c->r[0]); // 801AA3D8
L_801AA3DC:;
  c->r[0]=R32(c->r[13]+0xFFFFD018u); // 801AA3DC
  W32(c->r[29]+0x0000034Cu,c->r[0]); // 801AA3E0
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 801AA3E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA3E8
  if (!crb(c,2)) { goto L_801AA408; } // 801AA3EC
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 801AA3F0
  c->r[0]=0u+0x00000001u; // 801AA3F4
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 801AA3F8
  c->r[3]=c->r[3]+0x00000001u; // 801AA3FC
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 801AA400
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 801AA404
L_801AA408:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 801AA408
  c->r[5]=0u+0x806D0000u; // 801AA40C
  c->r[5]=c->r[5]+0xFFFFE468u; // 801AA410
  W32(c->r[29]+0x00000350u,c->r[0]); // 801AA414
  c->r[3]=c->r[29]+0x000003B0u; // 801AA418
  c->r[4]=0u+0x00000000u; // 801AA41C
  W32(c->r[29]+0x00000400u,c->r[5]); // 801AA420
  c->r[5]=0u+0x00000050u; // 801AA424
  c->lr=0x801AA42Cu; f_800043EC(c); // 801AA428
  c->r[4]=0u+0x806D0000u; // 801AA42C
  c->r[3]=c->r[29]+0x00000450u; // 801AA430
  c->r[4]=c->r[4]+0xFFFFE170u; // 801AA434
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801AA438
  c->r[0]=c->r[4]+0x00000044u; // 801AA43C
  W32(c->r[29]+0x00000400u,c->r[0]); // 801AA440
  c->lr=0x801AA448u; f_8007BDFC(c); // 801AA444
  c->r[3]=c->r[29]+0x000004C4u; // 801AA448
  c->lr=0x801AA450u; f_8007BDFC(c); // 801AA44C
  c->r[3]=c->r[29]+0x00000538u; // 801AA450
  c->r[4]=0u+0x00000000u; // 801AA454
  c->r[5]=0u+0x00000008u; // 801AA458
  c->lr=0x801AA460u; f_800043EC(c); // 801AA45C
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA460
  cmps(c,0,(int32_t)c->r[26],0); // 801AA464
  if (crb(c,2)) { goto L_801AA4AC; } // 801AA468
  c->lr=0x801AA470u; f_801AAD04(c); // 801AA46C
  c->r[30]=c->r[3]|c->r[3]; // 801AA470
  c->lr=0x801AA478u; f_8007BDCC(c); // 801AA474
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)80); // 801AA478
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA47C
  c->r[5]=0u+0x801B0000u; // 801AA480
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA484
  c->r[4]=c->r[26]+c->r[4]; // 801AA488
  c->r[5]=c->r[5]+0xFFFFAEDCu; // 801AA48C
  c->r[4]=c->r[4]+c->r[0]; // 801AA490
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA494
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA498
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AA49C
  if (!crb(c,0)) { goto L_801AA4AC; } // 801AA4A0
  c->r[0]=0u+0x0000000Cu; // 801AA4A4
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA4A8
L_801AA4AC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA4AC
  cmps(c,0,(int32_t)c->r[26],0); // 801AA4B0
  if (crb(c,2)) { goto L_801AA51C; } // 801AA4B4
  c->lr=0x801AA4BCu; f_801AAD04(c); // 801AA4B8
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 801AA4BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA4C0
  if (!crb(c,2)) { goto L_801AA4E4; } // 801AA4C4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA4C8
  c->r[0]=0u+0x00000001u; // 801AA4CC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA4D0
  c->r[4]=c->r[5]+0x00000001u; // 801AA4D4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA4D8
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 801AA4DC
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 801AA4E0
L_801AA4E4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA4E4
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 801AA4E8
  c->r[5]=0u+0x801B0000u; // 801AA4EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA4F0
  c->r[4]=c->r[26]+c->r[4]; // 801AA4F4
  c->r[5]=c->r[5]+0xFFFFAED8u; // 801AA4F8
  c->r[4]=c->r[4]+c->r[0]; // 801AA4FC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA500
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA504
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA508
  cmpu(c,0,c->r[0],0x00000018u); // 801AA50C
  if (!crb(c,0)) { goto L_801AA51C; } // 801AA510
  c->r[0]=0u+0x00000018u; // 801AA514
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA518
L_801AA51C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA51C
  cmps(c,0,(int32_t)c->r[26],0); // 801AA520
  if (crb(c,2)) { goto L_801AA568; } // 801AA524
  c->lr=0x801AA52Cu; f_801AAD04(c); // 801AA528
  c->r[30]=c->r[3]|c->r[3]; // 801AA52C
  c->lr=0x801AA534u; f_80076C4C(c); // 801AA530
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)80); // 801AA534
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA538
  c->r[5]=0u+0x801B0000u; // 801AA53C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA540
  c->r[4]=c->r[26]+c->r[4]; // 801AA544
  c->r[5]=c->r[5]+0xFFFFAED4u; // 801AA548
  c->r[4]=c->r[4]+c->r[0]; // 801AA54C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA550
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA554
  cmpu(c,0,c->r[0],0x0000006Cu); // 801AA558
  if (!crb(c,0)) { goto L_801AA568; } // 801AA55C
  c->r[0]=0u+0x0000006Cu; // 801AA560
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA564
L_801AA568:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA568
  cmps(c,0,(int32_t)c->r[26],0); // 801AA56C
  if (crb(c,2)) { goto L_801AA5D8; } // 801AA570
  c->lr=0x801AA578u; f_801AAD04(c); // 801AA574
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801AA578
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA57C
  if (!crb(c,2)) { goto L_801AA5A0; } // 801AA580
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA584
  c->r[0]=0u+0x00000001u; // 801AA588
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA58C
  c->r[4]=c->r[5]+0x00000001u; // 801AA590
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA594
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 801AA598
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 801AA59C
L_801AA5A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA5A0
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 801AA5A4
  c->r[5]=0u+0x801B0000u; // 801AA5A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA5AC
  c->r[4]=c->r[26]+c->r[4]; // 801AA5B0
  c->r[5]=c->r[5]+0xFFFFAED0u; // 801AA5B4
  c->r[4]=c->r[4]+c->r[0]; // 801AA5B8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA5BC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA5C0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA5C4
  cmpu(c,0,c->r[0],0x0000002Cu); // 801AA5C8
  if (!crb(c,0)) { goto L_801AA5D8; } // 801AA5CC
  c->r[0]=0u+0x0000002Cu; // 801AA5D0
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA5D4
L_801AA5D8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA5D8
  cmps(c,0,(int32_t)c->r[26],0); // 801AA5DC
  if (crb(c,2)) { goto L_801AA648; } // 801AA5E0
  c->lr=0x801AA5E8u; f_801AAD04(c); // 801AA5E4
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801AA5E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA5EC
  if (!crb(c,2)) { goto L_801AA610; } // 801AA5F0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA5F4
  c->r[0]=0u+0x00000001u; // 801AA5F8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA5FC
  c->r[4]=c->r[5]+0x00000001u; // 801AA600
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA604
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801AA608
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801AA60C
L_801AA610:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA610
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801AA614
  c->r[5]=0u+0x801B0000u; // 801AA618
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA61C
  c->r[4]=c->r[26]+c->r[4]; // 801AA620
  c->r[5]=c->r[5]+0xFFFFAECCu; // 801AA624
  c->r[4]=c->r[4]+c->r[0]; // 801AA628
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA62C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA630
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA634
  cmpu(c,0,c->r[0],0x00000010u); // 801AA638
  if (!crb(c,0)) { goto L_801AA648; } // 801AA63C
  c->r[0]=0u+0x00000010u; // 801AA640
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA644
L_801AA648:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA648
  cmps(c,0,(int32_t)c->r[26],0); // 801AA64C
  if (crb(c,2)) { goto L_801AA6B8; } // 801AA650
  c->lr=0x801AA658u; f_801AAD04(c); // 801AA654
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801AA658
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA65C
  if (!crb(c,2)) { goto L_801AA680; } // 801AA660
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA664
  c->r[0]=0u+0x00000001u; // 801AA668
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA66C
  c->r[4]=c->r[5]+0x00000001u; // 801AA670
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA674
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801AA678
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801AA67C
L_801AA680:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA680
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801AA684
  c->r[5]=0u+0x801B0000u; // 801AA688
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA68C
  c->r[4]=c->r[26]+c->r[4]; // 801AA690
  c->r[5]=c->r[5]+0xFFFFAEC8u; // 801AA694
  c->r[4]=c->r[4]+c->r[0]; // 801AA698
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA69C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA6A0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA6A4
  cmpu(c,0,c->r[0],0x0000005Cu); // 801AA6A8
  if (!crb(c,0)) { goto L_801AA6B8; } // 801AA6AC
  c->r[0]=0u+0x0000005Cu; // 801AA6B0
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA6B4
L_801AA6B8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA6B8
  cmps(c,0,(int32_t)c->r[26],0); // 801AA6BC
  if (crb(c,2)) { goto L_801AA728; } // 801AA6C0
  c->lr=0x801AA6C8u; f_801AAD04(c); // 801AA6C4
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 801AA6C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA6CC
  if (!crb(c,2)) { goto L_801AA6F0; } // 801AA6D0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA6D4
  c->r[0]=0u+0x00000001u; // 801AA6D8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA6DC
  c->r[4]=c->r[5]+0x00000001u; // 801AA6E0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA6E4
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801AA6E8
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801AA6EC
L_801AA6F0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA6F0
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801AA6F4
  c->r[5]=0u+0x801B0000u; // 801AA6F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA6FC
  c->r[4]=c->r[26]+c->r[4]; // 801AA700
  c->r[5]=c->r[5]+0xFFFFAEC4u; // 801AA704
  c->r[4]=c->r[4]+c->r[0]; // 801AA708
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA70C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA710
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA714
  cmpu(c,0,c->r[0],0x0000005Cu); // 801AA718
  if (!crb(c,0)) { goto L_801AA728; } // 801AA71C
  c->r[0]=0u+0x0000005Cu; // 801AA720
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA724
L_801AA728:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA728
  cmps(c,0,(int32_t)c->r[26],0); // 801AA72C
  if (crb(c,2)) { goto L_801AA798; } // 801AA730
  c->lr=0x801AA738u; f_801AAD04(c); // 801AA734
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801AA738
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA73C
  if (!crb(c,2)) { goto L_801AA760; } // 801AA740
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA744
  c->r[0]=0u+0x00000001u; // 801AA748
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA74C
  c->r[4]=c->r[5]+0x00000001u; // 801AA750
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA754
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801AA758
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801AA75C
L_801AA760:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA760
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801AA764
  c->r[5]=0u+0x801B0000u; // 801AA768
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA76C
  c->r[4]=c->r[26]+c->r[4]; // 801AA770
  c->r[5]=c->r[5]+0xFFFFAEC0u; // 801AA774
  c->r[4]=c->r[4]+c->r[0]; // 801AA778
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA77C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA780
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA784
  cmpu(c,0,c->r[0],0x0000005Cu); // 801AA788
  if (!crb(c,0)) { goto L_801AA798; } // 801AA78C
  c->r[0]=0u+0x0000005Cu; // 801AA790
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA794
L_801AA798:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801AA798
  cmps(c,0,(int32_t)c->r[26],0); // 801AA79C
  if (crb(c,2)) { goto L_801AA808; } // 801AA7A0
  c->lr=0x801AA7A8u; f_801AAD04(c); // 801AA7A4
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 801AA7A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA7AC
  if (!crb(c,2)) { goto L_801AA7D0; } // 801AA7B0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AA7B4
  c->r[0]=0u+0x00000001u; // 801AA7B8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AA7BC
  c->r[4]=c->r[5]+0x00000001u; // 801AA7C0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AA7C4
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 801AA7C8
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 801AA7CC
L_801AA7D0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AA7D0
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 801AA7D4
  c->r[5]=0u+0x801B0000u; // 801AA7D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA7DC
  c->r[4]=c->r[26]+c->r[4]; // 801AA7E0
  c->r[5]=c->r[5]+0xFFFFAEBCu; // 801AA7E4
  c->r[4]=c->r[4]+c->r[0]; // 801AA7E8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA7EC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA7F0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA7F4
  cmpu(c,0,c->r[0],0x0000005Cu); // 801AA7F8
  if (!crb(c,0)) { goto L_801AA808; } // 801AA7FC
  c->r[0]=0u+0x0000005Cu; // 801AA800
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA804
L_801AA808:;
  c->r[3]=c->r[29]|c->r[29]; // 801AA808
  c->lr=0x801AA810u; f_8005BBF0(c); // 801AA80C
  c->r[5]=0u+0x806E0000u; // 801AA810
  c->r[3]=c->r[29]+0x000005C4u; // 801AA814
  c->r[5]=c->r[5]+0x00002418u; // 801AA818
  W32(c->r[29]+0x0000001Cu,c->r[5]); // 801AA81C
  c->r[4]=c->r[5]+0x00000044u; // 801AA820
  c->r[0]=c->r[5]+0x000001F0u; // 801AA824
  W32(c->r[29]+0x00000400u,c->r[4]); // 801AA828
  W32(c->r[29]+0x000005C0u,c->r[0]); // 801AA82C
  c->lr=0x801AA834u; f_800E1E14(c); // 801AA830
  c->r[0]=0u+0x00000000u; // 801AA834
  W32(c->r[29]+0x00000668u,c->r[0]); // 801AA838
  c->r[3]=c->r[29]+0x00000688u; // 801AA83C
  W32(c->r[29]+0x0000066Cu,c->r[0]); // 801AA840
  W32(c->r[29]+0x00000670u,c->r[0]); // 801AA844
  W32(c->r[29]+0x00000674u,c->r[0]); // 801AA848
  c->lr=0x801AA850u; f_80258690(c); // 801AA84C
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA850
  cmps(c,0,(int32_t)c->r[26],0); // 801AA854
  if (crb(c,2)) { goto L_801AA89C; } // 801AA858
  c->lr=0x801AA860u; f_801AAD04(c); // 801AA85C
  c->r[30]=c->r[3]|c->r[3]; // 801AA860
  c->lr=0x801AA868u; f_80163CF0(c); // 801AA864
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA868
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA86C
  c->r[5]=0u+0x801B0000u; // 801AA870
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA874
  c->r[4]=c->r[26]+c->r[4]; // 801AA878
  c->r[5]=c->r[5]+0xFFFFAEB8u; // 801AA87C
  c->r[4]=c->r[4]+c->r[0]; // 801AA880
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA884
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA888
  cmpu(c,0,c->r[0],0x00000010u); // 801AA88C
  if (!crb(c,0)) { goto L_801AA89C; } // 801AA890
  c->r[0]=0u+0x00000010u; // 801AA894
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA898
L_801AA89C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA89C
  cmps(c,0,(int32_t)c->r[26],0); // 801AA8A0
  if (crb(c,2)) { goto L_801AA8E8; } // 801AA8A4
  c->lr=0x801AA8ACu; f_801AAD04(c); // 801AA8A8
  c->r[30]=c->r[3]|c->r[3]; // 801AA8AC
  c->lr=0x801AA8B4u; f_8017CE04(c); // 801AA8B0
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA8B4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA8B8
  c->r[5]=0u+0x801B0000u; // 801AA8BC
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA8C0
  c->r[4]=c->r[26]+c->r[4]; // 801AA8C4
  c->r[5]=c->r[5]+0xFFFFAEB4u; // 801AA8C8
  c->r[4]=c->r[4]+c->r[0]; // 801AA8CC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA8D0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA8D4
  cmpu(c,0,c->r[0],0x00000010u); // 801AA8D8
  if (!crb(c,0)) { goto L_801AA8E8; } // 801AA8DC
  c->r[0]=0u+0x00000010u; // 801AA8E0
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA8E4
L_801AA8E8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA8E8
  cmps(c,0,(int32_t)c->r[26],0); // 801AA8EC
  if (crb(c,2)) { goto L_801AA934; } // 801AA8F0
  c->lr=0x801AA8F8u; f_801AAD04(c); // 801AA8F4
  c->r[30]=c->r[3]|c->r[3]; // 801AA8F8
  c->lr=0x801AA900u; f_8017CDD0(c); // 801AA8FC
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA900
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA904
  c->r[5]=0u+0x801B0000u; // 801AA908
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA90C
  c->r[4]=c->r[26]+c->r[4]; // 801AA910
  c->r[5]=c->r[5]+0xFFFFAEB0u; // 801AA914
  c->r[4]=c->r[4]+c->r[0]; // 801AA918
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA91C
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA920
  cmpu(c,0,c->r[0],0x00000010u); // 801AA924
  if (!crb(c,0)) { goto L_801AA934; } // 801AA928
  c->r[0]=0u+0x00000010u; // 801AA92C
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA930
L_801AA934:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA934
  cmps(c,0,(int32_t)c->r[26],0); // 801AA938
  if (crb(c,2)) { goto L_801AA980; } // 801AA93C
  c->lr=0x801AA944u; f_801AAD04(c); // 801AA940
  c->r[30]=c->r[3]|c->r[3]; // 801AA944
  c->lr=0x801AA94Cu; f_8017CD9C(c); // 801AA948
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA94C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA950
  c->r[5]=0u+0x801B0000u; // 801AA954
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA958
  c->r[4]=c->r[26]+c->r[4]; // 801AA95C
  c->r[5]=c->r[5]+0xFFFFAEACu; // 801AA960
  c->r[4]=c->r[4]+c->r[0]; // 801AA964
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA968
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA96C
  cmpu(c,0,c->r[0],0x00000010u); // 801AA970
  if (!crb(c,0)) { goto L_801AA980; } // 801AA974
  c->r[0]=0u+0x00000010u; // 801AA978
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA97C
L_801AA980:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA980
  cmps(c,0,(int32_t)c->r[26],0); // 801AA984
  if (crb(c,2)) { goto L_801AA9CC; } // 801AA988
  c->lr=0x801AA990u; f_801AAD04(c); // 801AA98C
  c->r[30]=c->r[3]|c->r[3]; // 801AA990
  c->lr=0x801AA998u; f_8017CD68(c); // 801AA994
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA998
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA99C
  c->r[5]=0u+0x801B0000u; // 801AA9A0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA9A4
  c->r[4]=c->r[26]+c->r[4]; // 801AA9A8
  c->r[5]=c->r[5]+0xFFFFAEA8u; // 801AA9AC
  c->r[4]=c->r[4]+c->r[0]; // 801AA9B0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AA9B4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AA9B8
  cmpu(c,0,c->r[0],0x00000010u); // 801AA9BC
  if (!crb(c,0)) { goto L_801AA9CC; } // 801AA9C0
  c->r[0]=0u+0x00000010u; // 801AA9C4
  W32(c->r[26]+c->r[3],c->r[0]); // 801AA9C8
L_801AA9CC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AA9CC
  cmps(c,0,(int32_t)c->r[26],0); // 801AA9D0
  if (crb(c,2)) { goto L_801AAA18; } // 801AA9D4
  c->lr=0x801AA9DCu; f_801AAD04(c); // 801AA9D8
  c->r[30]=c->r[3]|c->r[3]; // 801AA9DC
  c->lr=0x801AA9E4u; f_8017CD34(c); // 801AA9E0
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AA9E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AA9E8
  c->r[5]=0u+0x801B0000u; // 801AA9EC
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AA9F0
  c->r[4]=c->r[26]+c->r[4]; // 801AA9F4
  c->r[5]=c->r[5]+0xFFFFAEA4u; // 801AA9F8
  c->r[4]=c->r[4]+c->r[0]; // 801AA9FC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAA00
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAA04
  cmpu(c,0,c->r[0],0x00000010u); // 801AAA08
  if (!crb(c,0)) { goto L_801AAA18; } // 801AAA0C
  c->r[0]=0u+0x00000010u; // 801AAA10
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAA14
L_801AAA18:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAA18
  cmps(c,0,(int32_t)c->r[26],0); // 801AAA1C
  if (crb(c,2)) { goto L_801AAA64; } // 801AAA20
  c->lr=0x801AAA28u; f_801AAD04(c); // 801AAA24
  c->r[30]=c->r[3]|c->r[3]; // 801AAA28
  c->lr=0x801AAA30u; f_801AAE74(c); // 801AAA2C
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAA30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAA34
  c->r[5]=0u+0x801B0000u; // 801AAA38
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAA3C
  c->r[4]=c->r[26]+c->r[4]; // 801AAA40
  c->r[5]=c->r[5]+0xFFFFAE70u; // 801AAA44
  c->r[4]=c->r[4]+c->r[0]; // 801AAA48
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAA4C
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAA50
  cmpu(c,0,c->r[0],0x00000010u); // 801AAA54
  if (!crb(c,0)) { goto L_801AAA64; } // 801AAA58
  c->r[0]=0u+0x00000010u; // 801AAA5C
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAA60
L_801AAA64:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAA64
  cmps(c,0,(int32_t)c->r[26],0); // 801AAA68
  if (crb(c,2)) { goto L_801AAAB0; } // 801AAA6C
  c->lr=0x801AAA74u; f_801AAD04(c); // 801AAA70
  c->r[30]=c->r[3]|c->r[3]; // 801AAA74
  c->lr=0x801AAA7Cu; f_801AAE40(c); // 801AAA78
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAA7C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAA80
  c->r[5]=0u+0x801B0000u; // 801AAA84
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAA88
  c->r[4]=c->r[26]+c->r[4]; // 801AAA8C
  c->r[5]=c->r[5]+0xFFFFAE3Cu; // 801AAA90
  c->r[4]=c->r[4]+c->r[0]; // 801AAA94
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAA98
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAA9C
  cmpu(c,0,c->r[0],0x00000010u); // 801AAAA0
  if (!crb(c,0)) { goto L_801AAAB0; } // 801AAAA4
  c->r[0]=0u+0x00000010u; // 801AAAA8
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAAAC
L_801AAAB0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAAB0
  cmps(c,0,(int32_t)c->r[26],0); // 801AAAB4
  if (crb(c,2)) { goto L_801AAAFC; } // 801AAAB8
  c->lr=0x801AAAC0u; f_801AAD04(c); // 801AAABC
  c->r[30]=c->r[3]|c->r[3]; // 801AAAC0
  c->lr=0x801AAAC8u; f_801AAE0C(c); // 801AAAC4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAAC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAACC
  c->r[5]=0u+0x801B0000u; // 801AAAD0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAAD4
  c->r[4]=c->r[26]+c->r[4]; // 801AAAD8
  c->r[5]=c->r[5]+0xFFFFAE08u; // 801AAADC
  c->r[4]=c->r[4]+c->r[0]; // 801AAAE0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAAE4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAAE8
  cmpu(c,0,c->r[0],0x00000010u); // 801AAAEC
  if (!crb(c,0)) { goto L_801AAAFC; } // 801AAAF0
  c->r[0]=0u+0x00000010u; // 801AAAF4
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAAF8
L_801AAAFC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAAFC
  cmps(c,0,(int32_t)c->r[26],0); // 801AAB00
  if (crb(c,2)) { goto L_801AAB48; } // 801AAB04
  c->lr=0x801AAB0Cu; f_801AAD04(c); // 801AAB08
  c->r[30]=c->r[3]|c->r[3]; // 801AAB0C
  c->lr=0x801AAB14u; f_801AADD8(c); // 801AAB10
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAB14
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAB18
  c->r[5]=0u+0x801B0000u; // 801AAB1C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAB20
  c->r[4]=c->r[26]+c->r[4]; // 801AAB24
  c->r[5]=c->r[5]+0xFFFFADD4u; // 801AAB28
  c->r[4]=c->r[4]+c->r[0]; // 801AAB2C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAB30
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAB34
  cmpu(c,0,c->r[0],0x00000010u); // 801AAB38
  if (!crb(c,0)) { goto L_801AAB48; } // 801AAB3C
  c->r[0]=0u+0x00000010u; // 801AAB40
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAB44
L_801AAB48:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAB48
  cmps(c,0,(int32_t)c->r[26],0); // 801AAB4C
  if (crb(c,2)) { goto L_801AABB8; } // 801AAB50
  c->lr=0x801AAB58u; f_801AAD04(c); // 801AAB54
  c->r[0]=R8(c->r[13]+0xFFFFCFECu); // 801AAB58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAB5C
  if (!crb(c,2)) { goto L_801AAB80; } // 801AAB60
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 801AAB64
  c->r[0]=0u+0x00000001u; // 801AAB68
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 801AAB6C
  c->r[4]=c->r[5]+0x00000001u; // 801AAB70
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 801AAB74
  W32(c->r[13]+0xFFFFCFE8u,c->r[5]); // 801AAB78
  W8(c->r[13]+0xFFFFCFECu,c->r[0]); // 801AAB7C
L_801AAB80:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 801AAB80
  c->r[0]=R32(c->r[13]+0xFFFFCFE8u); // 801AAB84
  c->r[5]=0u+0x801B0000u; // 801AAB88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AAB8C
  c->r[4]=c->r[26]+c->r[4]; // 801AAB90
  c->r[5]=c->r[5]+0xFFFFADD0u; // 801AAB94
  c->r[4]=c->r[4]+c->r[0]; // 801AAB98
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAB9C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AABA0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AABA4
  cmpu(c,0,c->r[0],0x00000010u); // 801AABA8
  if (!crb(c,0)) { goto L_801AABB8; } // 801AABAC
  c->r[0]=0u+0x00000010u; // 801AABB0
  W32(c->r[26]+c->r[3],c->r[0]); // 801AABB4
L_801AABB8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AABB8
  cmps(c,0,(int32_t)c->r[26],0); // 801AABBC
  if (crb(c,2)) { goto L_801AAC04; } // 801AABC0
  c->lr=0x801AABC8u; f_801AAD04(c); // 801AABC4
  c->r[30]=c->r[3]|c->r[3]; // 801AABC8
  c->lr=0x801AABD0u; f_801AADA0(c); // 801AABCC
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AABD0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AABD4
  c->r[5]=0u+0x801B0000u; // 801AABD8
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AABDC
  c->r[4]=c->r[26]+c->r[4]; // 801AABE0
  c->r[5]=c->r[5]+0xFFFFAD9Cu; // 801AABE4
  c->r[4]=c->r[4]+c->r[0]; // 801AABE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AABEC
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AABF0
  cmpu(c,0,c->r[0],0x00000010u); // 801AABF4
  if (!crb(c,0)) { goto L_801AAC04; } // 801AABF8
  c->r[0]=0u+0x00000010u; // 801AABFC
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAC00
L_801AAC04:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAC04
  cmps(c,0,(int32_t)c->r[26],0); // 801AAC08
  if (crb(c,2)) { goto L_801AAC50; } // 801AAC0C
  c->lr=0x801AAC14u; f_801AAD04(c); // 801AAC10
  c->r[30]=c->r[3]|c->r[3]; // 801AAC14
  c->lr=0x801AAC1Cu; f_801AAD6C(c); // 801AAC18
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAC1C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAC20
  c->r[5]=0u+0x801B0000u; // 801AAC24
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAC28
  c->r[4]=c->r[26]+c->r[4]; // 801AAC2C
  c->r[5]=c->r[5]+0xFFFFAD68u; // 801AAC30
  c->r[4]=c->r[4]+c->r[0]; // 801AAC34
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAC38
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAC3C
  cmpu(c,0,c->r[0],0x00000010u); // 801AAC40
  if (!crb(c,0)) { goto L_801AAC50; } // 801AAC44
  c->r[0]=0u+0x00000010u; // 801AAC48
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAC4C
L_801AAC50:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAC50
  cmps(c,0,(int32_t)c->r[26],0); // 801AAC54
  if (crb(c,2)) { goto L_801AAC9C; } // 801AAC58
  c->lr=0x801AAC60u; f_801AAD04(c); // 801AAC5C
  c->r[30]=c->r[3]|c->r[3]; // 801AAC60
  c->lr=0x801AAC68u; f_801AAD38(c); // 801AAC64
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AAC68
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AAC6C
  c->r[5]=0u+0x801B0000u; // 801AAC70
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AAC74
  c->r[4]=c->r[26]+c->r[4]; // 801AAC78
  c->r[5]=c->r[5]+0xFFFFAD34u; // 801AAC7C
  c->r[4]=c->r[4]+c->r[0]; // 801AAC80
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AAC84
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AAC88
  cmpu(c,0,c->r[0],0x00000010u); // 801AAC8C
  if (!crb(c,0)) { goto L_801AAC9C; } // 801AAC90
  c->r[0]=0u+0x00000010u; // 801AAC94
  W32(c->r[26]+c->r[3],c->r[0]); // 801AAC98
L_801AAC9C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801AAC9C
  cmps(c,0,(int32_t)c->r[26],0); // 801AACA0
  if (crb(c,2)) { goto L_801AACE8; } // 801AACA4
  c->lr=0x801AACACu; f_801AAD04(c); // 801AACA8
  c->r[30]=c->r[3]|c->r[3]; // 801AACAC
  c->lr=0x801AACB4u; f_80062DCC(c); // 801AACB0
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801AACB4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AACB8
  c->r[5]=0u+0x801B0000u; // 801AACBC
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AACC0
  c->r[4]=c->r[26]+c->r[4]; // 801AACC4
  c->r[5]=c->r[5]+0xFFFFAD00u; // 801AACC8
  c->r[4]=c->r[4]+c->r[0]; // 801AACCC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AACD0
  c->r[0]=R32(c->r[26]+c->r[3]); // 801AACD4
  cmpu(c,0,c->r[0],0x00000010u); // 801AACD8
  if (!crb(c,0)) { goto L_801AACE8; } // 801AACDC
  c->r[0]=0u+0x00000010u; // 801AACE0
  W32(c->r[26]+c->r[3],c->r[0]); // 801AACE4
L_801AACE8:;
  c->r[3]=c->r[29]|c->r[29]; // 801AACE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AACEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AACF0
  c->lr=c->r[0]; // 801AACF4
  c->r[1]=c->r[1]+0x00000020u; // 801AACF8
  return; // 801AACFC
}

// fn_801AAD00
void f_801AAD00(Ctx* __restrict c) {
  trace_call(0x801AAD00u);
  f_801ADF30(c); return; // 801AAD00
}

// fn_801AAD04
void f_801AAD04(Ctx* __restrict c) {
  trace_call(0x801AAD04u);
  c->r[0]=R8(c->r[13]+0xFFFFD014u); // 801AAD04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAD08
  if (!crb(c,2)) { goto L_801AAD2C; } // 801AAD0C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801AAD10
  c->r[0]=0u+0x00000001u; // 801AAD14
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801AAD18
  c->r[3]=c->r[4]+0x00000001u; // 801AAD1C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801AAD20
  W32(c->r[13]+0xFFFFD010u,c->r[4]); // 801AAD24
  W8(c->r[13]+0xFFFFD014u,c->r[0]); // 801AAD28
L_801AAD2C:;
  c->r[3]=R32(c->r[13]+0xFFFFD010u); // 801AAD2C
  return; // 801AAD30
}

// fn_801AAD34
void f_801AAD34(Ctx* __restrict c) {
  trace_call(0x801AAD34u);
  f_801ADA48(c); return; // 801AAD34
}

// fn_801AAD38
void f_801AAD38(Ctx* __restrict c) {
  trace_call(0x801AAD38u);
  c->r[0]=R8(c->r[13]+0xFFFFD004u); // 801AAD38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAD3C
  if (!crb(c,2)) { goto L_801AAD60; } // 801AAD40
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AAD44
  c->r[0]=0u+0x00000001u; // 801AAD48
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AAD4C
  c->r[3]=c->r[4]+0x00000001u; // 801AAD50
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AAD54
  W32(c->r[13]+0xFFFFD000u,c->r[4]); // 801AAD58
  W8(c->r[13]+0xFFFFD004u,c->r[0]); // 801AAD5C
L_801AAD60:;
  c->r[3]=R32(c->r[13]+0xFFFFD000u); // 801AAD60
  return; // 801AAD64
}

// fn_801AAD68
void f_801AAD68(Ctx* __restrict c) {
  trace_call(0x801AAD68u);
  f_801AD744(c); return; // 801AAD68
}

// fn_801AAD6C
void f_801AAD6C(Ctx* __restrict c) {
  trace_call(0x801AAD6Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCFFCu); // 801AAD6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAD70
  if (!crb(c,2)) { goto L_801AAD94; } // 801AAD74
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AAD78
  c->r[0]=0u+0x00000001u; // 801AAD7C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AAD80
  c->r[3]=c->r[4]+0x00000001u; // 801AAD84
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AAD88
  W32(c->r[13]+0xFFFFCFF8u,c->r[4]); // 801AAD8C
  W8(c->r[13]+0xFFFFCFFCu,c->r[0]); // 801AAD90
L_801AAD94:;
  c->r[3]=R32(c->r[13]+0xFFFFCFF8u); // 801AAD94
  return; // 801AAD98
}

// fn_801AAD9C
void f_801AAD9C(Ctx* __restrict c) {
  trace_call(0x801AAD9Cu);
  f_801AD20C(c); return; // 801AAD9C
}

// fn_801AADA0
void f_801AADA0(Ctx* __restrict c) {
  trace_call(0x801AADA0u);
  c->r[0]=R8(c->r[13]+0xFFFFCFF4u); // 801AADA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AADA4
  if (!crb(c,2)) { goto L_801AADC8; } // 801AADA8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AADAC
  c->r[0]=0u+0x00000001u; // 801AADB0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AADB4
  c->r[3]=c->r[4]+0x00000001u; // 801AADB8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AADBC
  W32(c->r[13]+0xFFFFCFF0u,c->r[4]); // 801AADC0
  W8(c->r[13]+0xFFFFCFF4u,c->r[0]); // 801AADC4
L_801AADC8:;
  c->r[3]=R32(c->r[13]+0xFFFFCFF0u); // 801AADC8
  return; // 801AADCC
}

// fn_801AADD0
void f_801AADD0(Ctx* __restrict c) {
  trace_call(0x801AADD0u);
  return; // 801AADD0
}

// fn_801AADD4
void f_801AADD4(Ctx* __restrict c) {
  trace_call(0x801AADD4u);
  f_801ACC50(c); return; // 801AADD4
}

// fn_801AADD8
void f_801AADD8(Ctx* __restrict c) {
  trace_call(0x801AADD8u);
  c->r[0]=R8(c->r[13]+0xFFFFCFE4u); // 801AADD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AADDC
  if (!crb(c,2)) { goto L_801AAE00; } // 801AADE0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AADE4
  c->r[0]=0u+0x00000001u; // 801AADE8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AADEC
  c->r[3]=c->r[4]+0x00000001u; // 801AADF0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AADF4
  W32(c->r[13]+0xFFFFCFE0u,c->r[4]); // 801AADF8
  W8(c->r[13]+0xFFFFCFE4u,c->r[0]); // 801AADFC
L_801AAE00:;
  c->r[3]=R32(c->r[13]+0xFFFFCFE0u); // 801AAE00
  return; // 801AAE04
}

// fn_801AAE08
void f_801AAE08(Ctx* __restrict c) {
  trace_call(0x801AAE08u);
  f_801AC758(c); return; // 801AAE08
}

// fn_801AAE0C
void f_801AAE0C(Ctx* __restrict c) {
  trace_call(0x801AAE0Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCFDCu); // 801AAE0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAE10
  if (!crb(c,2)) { goto L_801AAE34; } // 801AAE14
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AAE18
  c->r[0]=0u+0x00000001u; // 801AAE1C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AAE20
  c->r[3]=c->r[4]+0x00000001u; // 801AAE24
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AAE28
  W32(c->r[13]+0xFFFFCFD8u,c->r[4]); // 801AAE2C
  W8(c->r[13]+0xFFFFCFDCu,c->r[0]); // 801AAE30
L_801AAE34:;
  c->r[3]=R32(c->r[13]+0xFFFFCFD8u); // 801AAE34
  return; // 801AAE38
}

// fn_801AAE3C
void f_801AAE3C(Ctx* __restrict c) {
  trace_call(0x801AAE3Cu);
  f_801ADBCC(c); return; // 801AAE3C
}

// fn_801AAE40
void f_801AAE40(Ctx* __restrict c) {
  trace_call(0x801AAE40u);
  c->r[0]=R8(c->r[13]+0xFFFFCFD4u); // 801AAE40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAE44
  if (!crb(c,2)) { goto L_801AAE68; } // 801AAE48
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AAE4C
  c->r[0]=0u+0x00000001u; // 801AAE50
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AAE54
  c->r[3]=c->r[4]+0x00000001u; // 801AAE58
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AAE5C
  W32(c->r[13]+0xFFFFCFD0u,c->r[4]); // 801AAE60
  W8(c->r[13]+0xFFFFCFD4u,c->r[0]); // 801AAE64
L_801AAE68:;
  c->r[3]=R32(c->r[13]+0xFFFFCFD0u); // 801AAE68
  return; // 801AAE6C
}

// fn_801AAE70
void f_801AAE70(Ctx* __restrict c) {
  trace_call(0x801AAE70u);
  f_801AD89C(c); return; // 801AAE70
}

// fn_801AAE74
void f_801AAE74(Ctx* __restrict c) {
  trace_call(0x801AAE74u);
  c->r[0]=R8(c->r[13]+0xFFFFCFCCu); // 801AAE74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AAE78
  if (!crb(c,2)) { goto L_801AAE9C; } // 801AAE7C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801AAE80
  c->r[0]=0u+0x00000001u; // 801AAE84
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801AAE88
  c->r[3]=c->r[4]+0x00000001u; // 801AAE8C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801AAE90
  W32(c->r[13]+0xFFFFCFC8u,c->r[4]); // 801AAE94
  W8(c->r[13]+0xFFFFCFCCu,c->r[0]); // 801AAE98
L_801AAE9C:;
  c->r[3]=R32(c->r[13]+0xFFFFCFC8u); // 801AAE9C
  return; // 801AAEA0
}

// fn_801AAEA4
void f_801AAEA4(Ctx* __restrict c) {
  trace_call(0x801AAEA4u);
  f_801AD50C(c); return; // 801AAEA4
}

// fn_801AAEA8
void f_801AAEA8(Ctx* __restrict c) {
  trace_call(0x801AAEA8u);
  f_801AD100(c); return; // 801AAEA8
}

// fn_801AAEAC
void f_801AAEAC(Ctx* __restrict c) {
  trace_call(0x801AAEACu);
  f_801ACF0C(c); return; // 801AAEAC
}

// fn_801AAEB0
void f_801AAEB0(Ctx* __restrict c) {
  trace_call(0x801AAEB0u);
  f_801AC868(c); return; // 801AAEB0
}

// fn_801AAEB4
void f_801AAEB4(Ctx* __restrict c) {
  trace_call(0x801AAEB4u);
  f_801AC4B8(c); return; // 801AAEB4
}

// fn_801AAEB8
void f_801AAEB8(Ctx* __restrict c) {
  trace_call(0x801AAEB8u);
  f_801AC380(c); return; // 801AAEB8
}

// fn_801AAEBC
void f_801AAEBC(Ctx* __restrict c) {
  trace_call(0x801AAEBCu);
  f_8005E338(c); return; // 801AAEBC
}

// fn_801AAEC0
void f_801AAEC0(Ctx* __restrict c) {
  trace_call(0x801AAEC0u);
  f_8005E324(c); return; // 801AAEC0
}

// fn_801AAEC4
void f_801AAEC4(Ctx* __restrict c) {
  trace_call(0x801AAEC4u);
  f_8005E310(c); return; // 801AAEC4
}

// fn_801AAEC8
void f_801AAEC8(Ctx* __restrict c) {
  trace_call(0x801AAEC8u);
  f_8005E2FC(c); return; // 801AAEC8
}

// fn_801AAECC
void f_801AAECC(Ctx* __restrict c) {
  trace_call(0x801AAECCu);
  f_8005E34C(c); return; // 801AAECC
}

// fn_801AAED0
void f_801AAED0(Ctx* __restrict c) {
  trace_call(0x801AAED0u);
  f_8005E360(c); return; // 801AAED0
}

// fn_801AAED4
void f_801AAED4(Ctx* __restrict c) {
  trace_call(0x801AAED4u);
  f_8005D47C(c); return; // 801AAED4
}

// fn_801AAED8
void f_801AAED8(Ctx* __restrict c) {
  trace_call(0x801AAED8u);
  f_8005D468(c); return; // 801AAED8
}

// fn_801AAEDC
void f_801AAEDC(Ctx* __restrict c) {
  trace_call(0x801AAEDCu);
  f_8005BEDC(c); return; // 801AAEDC
}

// fn_801AAEE0
void f_801AAEE0(Ctx* __restrict c) {
  trace_call(0x801AAEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAEE0
  c->r[0]=c->lr; // 801AAEE4
  cmps(c,0,(int32_t)c->r[3],0); // 801AAEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAEEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AAEF0
  c->r[30]=c->r[3]|c->r[3]; // 801AAEF4
  c->r[31]=c->r[4]|c->r[4]; // 801AAEF8
  if (crb(c,2)) { goto L_801AAF90; } // 801AAEFC
  c->r[5]=0u+0x806E0000u; // 801AAF00
  c->r[5]=c->r[5]+0x00002418u; // 801AAF04
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801AAF08
  c->r[4]=c->r[5]+0x00000044u; // 801AAF0C
  c->r[0]=c->r[5]+0x000001F0u; // 801AAF10
  W32(c->r[3]+0x00000400u,c->r[4]); // 801AAF14
  W32(c->r[3]+0x000005C0u,c->r[0]); // 801AAF18
  c->r[3]=c->r[3]+0x00000668u; // 801AAF1C
  c->lr=0x801AAF24u; f_80053614(c); // 801AAF20
  cmps(c,0,(int32_t)c->r[3],0); // 801AAF24
  if (crb(c,2)) { goto L_801AAF38; } // 801AAF28
  c->r[3]=c->r[30]+0x00000668u; // 801AAF2C
  c->lr=0x801AAF34u; f_8007ECBC(c); // 801AAF30
  c->lr=0x801AAF38u; f_8031749C(c); // 801AAF34
L_801AAF38:;
  c->r[3]=c->r[30]+0x00000670u; // 801AAF38
  c->lr=0x801AAF40u; f_80053614(c); // 801AAF3C
  cmps(c,0,(int32_t)c->r[3],0); // 801AAF40
  if (crb(c,2)) { goto L_801AAF54; } // 801AAF44
  c->r[3]=c->r[30]+0x00000670u; // 801AAF48
  c->lr=0x801AAF50u; f_8007ECBC(c); // 801AAF4C
  c->lr=0x801AAF54u; f_8031749C(c); // 801AAF50
L_801AAF54:;
  c->r[3]=c->r[30]+0x00000688u; // 801AAF54
  c->r[4]=0u+0xFFFFFFFFu; // 801AAF58
  c->lr=0x801AAF60u; f_80132EC0(c); // 801AAF5C
  c->r[3]=c->r[30]+0x000005C4u; // 801AAF60
  c->r[4]=0u+0xFFFFFFFFu; // 801AAF64
  c->lr=0x801AAF6Cu; f_800E1E78(c); // 801AAF68
  cmps(c,0,(int32_t)c->r[30],0); // 801AAF6C
  if (crb(c,2)) { goto L_801AAF80; } // 801AAF70
  c->r[3]=c->r[30]|c->r[30]; // 801AAF74
  c->r[4]=0u+0x00000000u; // 801AAF78
  c->lr=0x801AAF80u; f_8005BD00(c); // 801AAF7C
L_801AAF80:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AAF80
  if (!crb(c,1)) { goto L_801AAF90; } // 801AAF84
  c->r[3]=c->r[30]|c->r[30]; // 801AAF88
  c->lr=0x801AAF90u; f_8005328C(c); // 801AAF8C
L_801AAF90:;
  c->r[3]=c->r[30]|c->r[30]; // 801AAF90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AAF94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAF98
  c->lr=c->r[0]; // 801AAF9C
  c->r[1]=c->r[1]+0x00000010u; // 801AAFA0
  return; // 801AAFA4
}

// fn_801AAFA8
void f_801AAFA8(Ctx* __restrict c) {
  trace_call(0x801AAFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAFA8
  c->r[0]=c->lr; // 801AAFAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AAFB0
  c->r[11]=c->r[1]+0x00000040u; // 801AAFB4
  c->lr=0x801AAFBCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AAFB8
  c->r[31]=c->r[3]|c->r[3]; // 801AAFBC
  c->r[4]=0u+0x00000000u; // 801AAFC0
  c->lr=0x801AAFC8u; f_8005E814(c); // 801AAFC4
  c->r[3]=R32(c->r[31]+0x00000410u); // 801AAFC8
  c->r[29]=0u+0x80690000u; // 801AAFCC
  c->r[29]=c->r[29]+0x00003520u; // 801AAFD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801AAFD4
  c->r[4]=c->r[29]+0x00000001u; // 801AAFD8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801AAFDC
  c->ctr=c->r[12]; // 801AAFE0
  if (true) { c->lr=0x801AAFE8u; dispatch(c,c->ctr); } // 801AAFE4
  c->r[3]=R32(c->r[31]+0x00000414u); // 801AAFE8
  c->r[4]=c->r[29]+0x00000001u; // 801AAFEC
  c->lr=0x801AAFF4u; f_8034F3E0(c); // 801AAFF0
  c->r[3]=c->r[31]+0x000005C4u; // 801AAFF4
  c->r[4]=c->r[31]+0x000000FCu; // 801AAFF8
  c->lr=0x801AB000u; f_800E2088(c); // 801AAFFC
  c->r[3]=c->r[31]|c->r[31]; // 801AB000
  c->lr=0x801AB008u; f_8006481C(c); // 801AB004
  c->r[30]=c->r[3]|c->r[3]; // 801AB008
  c->r[3]=c->r[31]|c->r[31]; // 801AB00C
  c->lr=0x801AB014u; f_80064AFC(c); // 801AB010
  c->r[4]=c->r[3]|c->r[3]; // 801AB014
  c->r[5]=c->r[30]|c->r[30]; // 801AB018
  c->r[3]=c->r[31]+0x00000688u; // 801AB01C
  c->r[6]=c->r[31]+0x000005C0u; // 801AB020
  c->lr=0x801AB028u; f_80258718(c); // 801AB024
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801AB028
  c->r[3]=c->r[31]|c->r[31]; // 801AB02C
  {uint32_t ea=c->r[2]+0xFFFFC4E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB030
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801AB034
  {uint32_t ea=c->r[2]+0xFFFFC4ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AB038
  {uint32_t ea=c->r[2]+0xFFFFC4F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AB03C
  c->ctr=c->r[12]; // 801AB040
  if (true) { c->lr=0x801AB048u; dispatch(c,c->ctr); } // 801AB044
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB048
  c->r[3]=c->r[31]+0x000005C4u; // 801AB04C
  {uint32_t ea=c->r[31]+0x00000680u; WF32(ea,c->f[1]);} // 801AB050
  c->lr=0x801AB058u; f_800E21B4(c); // 801AB054
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB058
  c->r[3]=c->r[31]+0x000005C4u; // 801AB05C
  c->r[4]=0u+0x00000001u; // 801AB060
  c->lr=0x801AB068u; f_800E21E8(c); // 801AB064
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB068
  c->r[3]=c->r[31]+0x000005C4u; // 801AB06C
  c->r[4]=c->r[29]+0x00000006u; // 801AB070
  c->r[5]=0u+0x00000000u; // 801AB074
  c->lr=0x801AB07Cu; f_800E277C(c); // 801AB078
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB07C
  c->r[3]=c->r[31]+0x000005C4u; // 801AB080
  c->r[4]=0u+0x00000001u; // 801AB084
  c->f[2]=c->f[1]; // 801AB088
  c->lr=0x801AB090u; f_800E29C8(c); // 801AB08C
  c->r[4]=0u+0x00010000u; // 801AB090
  c->r[3]=c->r[31]|c->r[31]; // 801AB094
  c->r[4]=c->r[4]+0xFFFFEA61u; // 801AB098
  c->r[5]=0u+0x00000001u; // 801AB09C
  c->lr=0x801AB0A4u; f_80064744(c); // 801AB0A0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB0A4
  c->r[3]=c->r[31]+0x000005C4u; // 801AB0A8
  c->r[4]=c->r[29]+0x0000001Du; // 801AB0AC
  c->r[5]=0u+0x00000000u; // 801AB0B0
  c->lr=0x801AB0B8u; f_800E2300(c); // 801AB0B4
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB0B8
  c->r[3]=c->r[31]|c->r[31]; // 801AB0BC
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AB0C0
  c->r[6]=c->r[29]+0x0000002Au; // 801AB0C4
  c->r[4]=0u+0x00000002u; // 801AB0C8
  c->r[5]=0u+0x00000000u; // 801AB0CC
  c->lr=0x801AB0D4u; f_80064968(c); // 801AB0D0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AB0D4
  c->r[3]=c->r[31]|c->r[31]; // 801AB0D8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AB0DC
  c->r[6]=c->r[29]+0x00000036u; // 801AB0E0
  c->r[4]=0u+0x00000002u; // 801AB0E4
  c->r[5]=0u+0x00000001u; // 801AB0E8
  c->lr=0x801AB0F0u; f_80064968(c); // 801AB0EC
  c->r[3]=R32(c->r[31]+0x00000434u); // 801AB0F0
  c->r[4]=c->r[29]+0x00000043u; // 801AB0F4
  c->lr=0x801AB0FCu; f_800FE0C8(c); // 801AB0F8
  c->r[3]=R32(c->r[31]+0x00000404u); // 801AB0FC
  c->lr=0x801AB104u; f_802E8740(c); // 801AB100
  c->lr=0x801AB108u; f_80050558(c); // 801AB104
  c->r[0]=0u+0x00000000u; // 801AB108
  c->r[4]=0u+0x80740000u; // 801AB10C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB110
  c->r[4]=c->r[4]+0x00005180u; // 801AB114
  c->r[5]=c->r[29]+0x00000047u; // 801AB118
  c->r[6]=0u+0x00000000u; // 801AB11C
  c->r[7]=0u+0x00000F7Du; // 801AB120
  c->r[8]=0u+0x00000000u; // 801AB124
  c->r[9]=0u+0x00000000u; // 801AB128
  c->r[10]=0u+0x00000000u; // 801AB12C
  c->lr=0x801AB134u; f_801AB234(c); // 801AB130
  cmps(c,0,(int32_t)c->r[3],0); // 801AB134
  c->r[4]=c->r[3]|c->r[3]; // 801AB138
  if (crb(c,2)) { goto L_801AB144; } // 801AB13C
  c->r[4]=c->r[3]+0x00000020u; // 801AB140
L_801AB144:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801AB144
  c->r[3]=c->r[31]+0x00000668u; // 801AB148
  c->r[0]=R32(c->r[4]+0x00000004u); // 801AB14C
  c->r[4]=c->r[1]+0x00000020u; // 801AB150
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB154
  W32(c->r[1]+0x00000020u,c->r[5]); // 801AB158
  c->lr=0x801AB160u; f_80053568(c); // 801AB15C
  c->lr=0x801AB164u; f_80050558(c); // 801AB160
  c->r[5]=0u+0x80690000u; // 801AB164
  c->r[0]=0u+0x00000000u; // 801AB168
  c->r[5]=c->r[5]+0x00003520u; // 801AB16C
  c->r[4]=0u+0x80740000u; // 801AB170
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB174
  c->r[4]=c->r[4]+0x00005180u; // 801AB178
  c->r[5]=c->r[5]+0x00000047u; // 801AB17C
  c->r[6]=0u+0x00000000u; // 801AB180
  c->r[7]=0u+0x00000F7Du; // 801AB184
  c->r[8]=0u+0x00000000u; // 801AB188
  c->r[9]=0u+0x00000000u; // 801AB18C
  c->r[10]=0u+0x00000000u; // 801AB190
  c->lr=0x801AB198u; f_801AB234(c); // 801AB194
  cmps(c,0,(int32_t)c->r[3],0); // 801AB198
  c->r[4]=c->r[3]|c->r[3]; // 801AB19C
  if (crb(c,2)) { goto L_801AB1A8; } // 801AB1A0
  c->r[4]=c->r[3]+0x00000020u; // 801AB1A4
L_801AB1A8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801AB1A8
  c->r[3]=c->r[31]+0x00000670u; // 801AB1AC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801AB1B0
  c->r[4]=c->r[1]+0x00000018u; // 801AB1B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB1B8
  W32(c->r[1]+0x00000018u,c->r[5]); // 801AB1BC
  c->lr=0x801AB1C4u; f_80053568(c); // 801AB1C0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AB1C4
  c->r[0]=0u+0x00000001u; // 801AB1C8
  W8(c->r[31]+0x00000678u,c->r[0]); // 801AB1CC
  {uint32_t ea=c->r[31]+0x0000078Cu; WF32(ea,c->f[0]);} // 801AB1D0
  {uint32_t ea=c->r[31]+0x00000790u; WF32(ea,c->f[0]);} // 801AB1D4
  c->lr=0x801AB1DCu; f_80349570(c); // 801AB1D8
  c->r[3]=c->r[3]+0x00010000u; // 801AB1DC
  c->r[0]=0u+0x00000000u; // 801AB1E0
  c->r[29]=R32(c->r[3]+0xFFFF83F4u); // 801AB1E4
  c->r[3]=c->r[1]+0x00000010u; // 801AB1E8
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AB1EC
  c->lr=0x801AB1F4u; f_8004E228(c); // 801AB1F0
  c->r[5]=0u+0x80690000u; // 801AB1F4
  c->r[4]=c->r[29]|c->r[29]; // 801AB1F8
  c->r[5]=c->r[5]+0x00003520u; // 801AB1FC
  c->r[6]=0u+0x00000001u; // 801AB200
  c->r[5]=c->r[5]+0x00000050u; // 801AB204
  c->lr=0x801AB20Cu; f_80075ED0(c); // 801AB208
  c->r[3]=c->r[31]|c->r[31]; // 801AB20C
  c->r[4]=0u+0x00000038u; // 801AB210
  c->r[5]=0u+0x00000001u; // 801AB214
  c->lr=0x801AB21Cu; f_800D5F20(c); // 801AB218
  c->r[11]=c->r[1]+0x00000040u; // 801AB21C
  c->lr=0x801AB224u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB220
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AB224
  c->lr=c->r[0]; // 801AB228
  c->r[1]=c->r[1]+0x00000040u; // 801AB22C
  return; // 801AB230
}

// fn_801AB234
void f_801AB234(Ctx* __restrict c) {
  trace_call(0x801AB234u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB234
  c->r[0]=c->lr; // 801AB238
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AB23C
  c->r[11]=c->r[1]+0x00000050u; // 801AB240
  c->lr=0x801AB248u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB244
  c->r[0]=0u+0x00000005u; // 801AB248
  c->r[25]=c->r[5]|c->r[5]; // 801AB24C
  c->r[23]=c->r[3]|c->r[3]; // 801AB250
  c->r[24]=c->r[4]|c->r[4]; // 801AB254
  c->r[26]=c->r[6]|c->r[6]; // 801AB258
  c->r[27]=c->r[7]|c->r[7]; // 801AB25C
  c->r[28]=c->r[8]|c->r[8]; // 801AB260
  c->r[29]=c->r[9]|c->r[9]; // 801AB264
  c->r[30]=c->r[10]|c->r[10]; // 801AB268
  c->r[31]=R32(c->r[1]+0x00000058u); // 801AB26C
  c->r[5]=0u+0x00000000u; // 801AB270
  c->ctr=c->r[0]; // 801AB274
L_801AB278:;
  c->r[6]=c->r[3]+c->r[5]; // 801AB278
  c->r[0]=R32(c->r[6]+0x000000ACu); // 801AB27C
  cmps(c,0,(int32_t)c->r[0],0); // 801AB280
  if (!crb(c,2)) { goto L_801AB290; } // 801AB284
  W32(c->r[6]+0x000000ACu,c->r[4]); // 801AB288
  goto L_801AB2A0; // 801AB28C
L_801AB290:;
  cmpu(c,0,c->r[0],c->r[4]); // 801AB290
  if (crb(c,2)) { goto L_801AB2A0; } // 801AB294
  c->r[5]=c->r[5]+0x00000004u; // 801AB298
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AB278; } // 801AB29C
L_801AB2A0:;
  c->r[0]=R8(c->r[13]+0xFFFFBC30u); // 801AB2A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB2A4
  if (!crb(c,2)) { goto L_801AB2D8; } // 801AB2A8
  c->r[19]=0u+0x80740000u; // 801AB2AC
  c->r[3]=c->r[19]+0x00004D40u; // 801AB2B0
  c->lr=0x801AB2B8u; f_80052DF0(c); // 801AB2B4
  c->r[4]=0u+0x80040000u; // 801AB2B8
  c->r[5]=0u+0x80750000u; // 801AB2BC
  c->r[3]=c->r[19]+0x00004D40u; // 801AB2C0
  c->r[4]=c->r[4]+0x000055F4u; // 801AB2C4
  c->r[5]=c->r[5]+0x00004EC8u; // 801AB2C8
  c->lr=0x801AB2D0u; f_803A92B8(c); // 801AB2CC
  c->r[0]=0u+0x00000001u; // 801AB2D0
  W8(c->r[13]+0xFFFFBC30u,c->r[0]); // 801AB2D4
L_801AB2D8:;
  c->r[3]=0u+0x80740000u; // 801AB2D8
  c->r[4]=0u+0x000003E4u; // 801AB2DC
  c->r[3]=c->r[3]+0x00004D40u; // 801AB2E0
  c->lr=0x801AB2E8u; f_8005BFB0(c); // 801AB2E4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB2E8
  c->r[21]=c->r[3]|c->r[3]; // 801AB2EC
  if (crb(c,2)) { goto L_801AB95C; } // 801AB2F0
  c->r[20]=c->r[21]|c->r[21]; // 801AB2F4
  c->r[19]=c->r[21]|c->r[21]; // 801AB2F8
  c->lr=0x801AB300u; f_801ABAA4(c); // 801AB2FC
  W32(c->r[21]+0x00000000u,c->r[3]); // 801AB300
  c->r[3]=0u+0x806D0000u; // 801AB304
  c->r[3]=c->r[3]+0x000038C0u; // 801AB308
  c->r[22]=0u+0x00000000u; // 801AB30C
  W32(c->r[21]+0x0000001Cu,c->r[3]); // 801AB310
  c->r[3]=c->r[21]+0x00000020u; // 801AB314
  W32(c->r[21]+0x00000004u,c->r[22]); // 801AB318
  W32(c->r[21]+0x00000008u,c->r[22]); // 801AB31C
  W32(c->r[21]+0x0000000Cu,c->r[22]); // 801AB320
  W8(c->r[21]+0x00000010u,c->r[22]); // 801AB324
  W32(c->r[21]+0x00000014u,c->r[22]); // 801AB328
  W32(c->r[21]+0x00000018u,c->r[22]); // 801AB32C
  c->lr=0x801AB334u; f_80163ED4(c); // 801AB330
  c->r[3]=c->r[21]+0x00000028u; // 801AB334
  c->r[4]=0u+0x00000001u; // 801AB338
  c->lr=0x801AB340u; f_80163FD0(c); // 801AB33C
  c->r[3]=c->r[21]+0x00000038u; // 801AB340
  c->lr=0x801AB348u; f_80164094(c); // 801AB344
  c->r[3]=c->r[21]+0x00000044u; // 801AB348
  c->r[4]=0u+0x00000000u; // 801AB34C
  c->lr=0x801AB354u; f_801640D8(c); // 801AB350
  c->r[3]=0u+0x806F0000u; // 801AB354
  c->r[3]=c->r[3]+0x00000E80u; // 801AB358
  W32(c->r[21]+0x0000001Cu,c->r[3]); // 801AB35C
  c->r[3]=c->r[21]+0x0000009Cu; // 801AB360
  W32(c->r[21]+0x00000058u,c->r[22]); // 801AB364
  W32(c->r[21]+0x00000064u,c->r[22]); // 801AB368
  c->lr=0x801AB370u; f_8016419C(c); // 801AB36C
  c->r[3]=c->r[21]+0x000000A8u; // 801AB370
  c->lr=0x801AB378u; f_801641E0(c); // 801AB374
  c->r[3]=c->r[21]+0x000000B4u; // 801AB378
  c->lr=0x801AB380u; f_80164224(c); // 801AB37C
  c->r[3]=c->r[21]+0x000000C0u; // 801AB380
  c->lr=0x801AB388u; f_80164268(c); // 801AB384
  c->r[3]=c->r[21]+0x000000CCu; // 801AB388
  c->lr=0x801AB390u; f_801642AC(c); // 801AB38C
  c->r[3]=c->r[21]+0x000000D8u; // 801AB390
  c->lr=0x801AB398u; f_801642F0(c); // 801AB394
  c->r[0]=0u+0x00000006u; // 801AB398
  W32(c->r[21]+0x000000E8u,c->r[0]); // 801AB39C
  c->r[3]=c->r[21]+0x000000FCu; // 801AB3A0
  W32(c->r[21]+0x000000ECu,c->r[22]); // 801AB3A4
  W32(c->r[21]+0x000000F8u,c->r[22]); // 801AB3A8
  c->lr=0x801AB3B0u; f_80164320(c); // 801AB3AC
  W32(c->r[21]+0x00000314u,c->r[22]); // 801AB3B0
  c->r[0]=0u+0x0000000Au; // 801AB3B4
  c->r[7]=0u+0x00000000u; // 801AB3B8
  c->r[3]=0u+0x00000000u; // 801AB3BC
  W8(c->r[21]+0x0000005Cu,c->r[22]); // 801AB3C0
  c->r[6]=0u+0xFFFFFFFFu; // 801AB3C4
  W32(c->r[21]+0x00000054u,c->r[22]); // 801AB3C8
  W32(c->r[21]+0x00000310u,c->r[21]); // 801AB3CC
  c->ctr=c->r[0]; // 801AB3D0
L_801AB3D4:;
  c->r[5]=c->r[21]+c->r[3]; // 801AB3D4
  c->r[4]=c->r[21]+c->r[7]; // 801AB3D8
  W32(c->r[5]+0x00000068u,c->r[6]); // 801AB3DC
  c->r[7]=c->r[7]+0x00000001u; // 801AB3E0
  c->r[3]=c->r[3]+0x00000004u; // 801AB3E4
  W8(c->r[4]+0x00000090u,c->r[22]); // 801AB3E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AB3D4; } // 801AB3EC
  c->r[3]=c->r[21]+0x00000318u; // 801AB3F0
  c->r[4]=0u+0x00000001u; // 801AB3F4
  c->lr=0x801AB3FCu; f_80163E10(c); // 801AB3F8
  c->r[4]=0u+0x806D0000u; // 801AB3FC
  c->r[3]=0u+0xFFFFFFFFu; // 801AB400
  c->r[4]=c->r[4]+0xFFFFD974u; // 801AB404
  W32(c->r[21]+0x0000001Cu,c->r[4]); // 801AB408
  c->r[0]=0u+0x00000001u; // 801AB40C
  c->r[19]=0u+0x00000000u; // 801AB410
  W32(c->r[21]+0x00000328u,c->r[3]); // 801AB414
  c->r[3]=c->r[21]+0x0000032Cu; // 801AB418
  W32(c->r[21]+0x000000ECu,c->r[0]); // 801AB41C
  W32(c->r[21]+0x00000054u,c->r[19]); // 801AB420
  W32(c->r[21]+0x00000314u,c->r[19]); // 801AB424
  c->lr=0x801AB42Cu; f_800E6AB0(c); // 801AB428
  c->r[3]=0u+0x806D0000u; // 801AB42C
  c->r[4]=0u+0x806D0000u; // 801AB430
  c->r[3]=c->r[3]+0xFFFFD908u; // 801AB434
  W32(c->r[21]+0x0000001Cu,c->r[3]); // 801AB438
  c->r[0]=c->r[3]+0x00000044u; // 801AB43C
  c->r[20]=c->r[21]+0x00000378u; // 801AB440
  W32(c->r[21]+0x00000330u,c->r[0]); // 801AB444
  c->r[4]=c->r[4]+0xFFFFE0C0u; // 801AB448
  c->r[3]=c->r[20]|c->r[20]; // 801AB44C
  W32(c->r[21]+0x00000338u,c->r[19]); // 801AB450
  W32(c->r[21]+0x0000033Cu,c->r[19]); // 801AB454
  W32(c->r[21]+0x00000340u,c->r[19]); // 801AB458
  W32(c->r[21]+0x00000374u,c->r[4]); // 801AB45C
  c->lr=0x801AB464u; f_800506C0(c); // 801AB460
  cmps(c,0,(int32_t)c->r[20],0); // 801AB464
  c->r[0]=c->r[20]|c->r[20]; // 801AB468
  if (crb(c,2)) { goto L_801AB474; } // 801AB46C
  c->r[0]=c->r[20]+0xFFFFFFFCu; // 801AB470
L_801AB474:;
  c->r[19]=c->r[21]+0x00000384u; // 801AB474
  W32(c->r[20]+0x00000008u,c->r[0]); // 801AB478
  c->r[3]=c->r[19]|c->r[19]; // 801AB47C
  c->lr=0x801AB484u; f_800506C0(c); // 801AB480
  cmps(c,0,(int32_t)c->r[19],0); // 801AB484
  c->r[0]=c->r[19]|c->r[19]; // 801AB488
  if (crb(c,2)) { goto L_801AB494; } // 801AB48C
  c->r[0]=c->r[19]+0xFFFFFFF0u; // 801AB490
L_801AB494:;
  W32(c->r[19]+0x00000008u,c->r[0]); // 801AB494
  c->r[3]=c->r[21]+0x00000394u; // 801AB498
  c->lr=0x801AB4A0u; f_800E6AB0(c); // 801AB49C
  c->r[3]=0u+0x806D0000u; // 801AB4A0
  c->r[3]=c->r[3]+0xFFFFE058u; // 801AB4A4
  W32(c->r[21]+0x00000374u,c->r[3]); // 801AB4A8
  c->r[0]=c->r[3]+0x00000018u; // 801AB4AC
  W32(c->r[21]+0x00000398u,c->r[0]); // 801AB4B0
  c->r[0]=R8(c->r[13]+0xFFFFC3DCu); // 801AB4B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB4B8
  if (!crb(c,2)) { goto L_801AB4D8; } // 801AB4BC
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 801AB4C0
  c->r[0]=0u+0x00000001u; // 801AB4C4
  W32(c->r[13]+0xFFFFC3D8u,c->r[3]); // 801AB4C8
  c->r[3]=c->r[3]+0x00000001u; // 801AB4CC
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 801AB4D0
  W8(c->r[13]+0xFFFFC3DCu,c->r[0]); // 801AB4D4
L_801AB4D8:;
  c->r[0]=R32(c->r[13]+0xFFFFC3D8u); // 801AB4D8
  c->r[3]=0u+0x00000000u; // 801AB4DC
  W32(c->r[21]+0x0000039Cu,c->r[0]); // 801AB4E0
  c->r[4]=0u+0x00000001u; // 801AB4E4
  c->r[0]=c->r[13]+0xFFFF8D88u; // 801AB4E8
  c->r[5]=R32(c->r[13]+0xFFFF84DCu); // 801AB4EC
  W32(c->r[21]+0x000003A0u,c->r[5]); // 801AB4F0
  W32(c->r[21]+0x00000390u,c->r[3]); // 801AB4F4
  W8(c->r[21]+0x000003A8u,c->r[4]); // 801AB4F8
  W32(c->r[21]+0x00000054u,c->r[0]); // 801AB4FC
  c->r[0]=R8(c->r[13]+0xFFFFC3D4u); // 801AB500
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB504
  if (!crb(c,2)) { goto L_801AB520; } // 801AB508
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801AB50C
  W32(c->r[13]+0xFFFFC3D0u,c->r[3]); // 801AB510
  c->r[0]=c->r[3]+0x00000001u; // 801AB514
  W32(c->r[13]+0xFFFFBC48u,c->r[0]); // 801AB518
  W8(c->r[13]+0xFFFFC3D4u,c->r[4]); // 801AB51C
L_801AB520:;
  c->r[0]=R32(c->r[13]+0xFFFFC3D0u); // 801AB520
  c->r[20]=c->r[21]+0x000003ACu; // 801AB524
  W32(c->r[21]+0x00000328u,c->r[0]); // 801AB528
  c->r[0]=0u+0x00000000u; // 801AB52C
  c->r[3]=c->r[20]|c->r[20]; // 801AB530
  W8(c->r[21]+0x00000334u,c->r[0]); // 801AB534
  c->lr=0x801AB53Cu; f_800506C0(c); // 801AB538
  cmps(c,0,(int32_t)c->r[20],0); // 801AB53C
  c->r[3]=c->r[20]|c->r[20]; // 801AB540
  if (crb(c,2)) { goto L_801AB54C; } // 801AB544
  c->r[3]=c->r[20]+0xFFFFFC54u; // 801AB548
L_801AB54C:;
  W32(c->r[20]+0x00000008u,c->r[3]); // 801AB54C
  c->r[0]=0u+0x00000000u; // 801AB550
  c->r[22]=0u+0x00000001u; // 801AB554
  W8(c->r[20]+0x0000000Cu,c->r[0]); // 801AB558
  W8(c->r[20]+0x0000000Cu,c->r[22]); // 801AB55C
  c->r[0]=R8(c->r[13]+0xFFFFBFCEu); // 801AB560
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB564
  if (!crb(c,2)) { goto L_801AB5A8; } // 801AB568
  c->r[19]=0u+0x80750000u; // 801AB56C
  c->r[3]=c->r[19]+0xFFFF8290u; // 801AB570
  c->lr=0x801AB578u; f_800506C0(c); // 801AB574
  c->r[6]=0u+0x806D0000u; // 801AB578
  c->r[4]=0u+0x80080000u; // 801AB57C
  c->r[6]=c->r[6]+0x00004DC0u; // 801AB580
  c->r[3]=c->r[19]+0xFFFF8290u; // 801AB584
  c->r[0]=c->r[6]+0x00000008u; // 801AB588
  c->r[5]=0u+0x80750000u; // 801AB58C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801AB590
  c->r[4]=c->r[4]+0x00004A70u; // 801AB594
  c->r[5]=c->r[5]+0x00004ED4u; // 801AB598
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801AB59C
  c->lr=0x801AB5A4u; f_803A92B8(c); // 801AB5A0
  W8(c->r[13]+0xFFFFBFCEu,c->r[22]); // 801AB5A4
L_801AB5A8:;
  c->r[3]=0u+0x80750000u; // 801AB5A8
  c->r[5]=c->r[20]|c->r[20]; // 801AB5AC
  c->r[3]=c->r[3]+0xFFFF8290u; // 801AB5B0
  c->r[4]=c->r[3]|c->r[3]; // 801AB5B4
  c->lr=0x801AB5BCu; f_802DDCA8(c); // 801AB5B8
  c->r[19]=c->r[21]+0x000003BCu; // 801AB5BC
  c->r[3]=c->r[19]|c->r[19]; // 801AB5C0
  c->lr=0x801AB5C8u; f_800506C0(c); // 801AB5C4
  cmps(c,0,(int32_t)c->r[19],0); // 801AB5C8
  c->r[0]=c->r[19]|c->r[19]; // 801AB5CC
  if (crb(c,2)) { goto L_801AB5D8; } // 801AB5D0
  c->r[0]=c->r[19]+0xFFFFFC44u; // 801AB5D4
L_801AB5D8:;
  W32(c->r[19]+0x00000008u,c->r[0]); // 801AB5D8
  c->r[20]=0u+0x00000000u; // 801AB5DC
  c->r[3]=c->r[19]|c->r[19]; // 801AB5E0
  W8(c->r[19]+0x0000000Cu,c->r[20]); // 801AB5E4
  c->lr=0x801AB5ECu; f_80163D78(c); // 801AB5E8
  c->r[4]=0u+0x806D0000u; // 801AB5EC
  c->r[3]=0u+0xFFFFFFFFu; // 801AB5F0
  c->r[4]=c->r[4]+0x00007F8Cu; // 801AB5F4
  W32(c->r[21]+0x0000001Cu,c->r[4]); // 801AB5F8
  c->r[0]=c->r[4]+0x00000044u; // 801AB5FC
  {uint32_t ea=c->r[2]+0xFFFFC4FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AB600
  W32(c->r[21]+0x00000330u,c->r[0]); // 801AB604
  c->r[0]=c->r[13]+0xFFFF8D88u; // 801AB608
  W32(c->r[21]+0x000003CCu,c->r[3]); // 801AB60C
  {uint32_t ea=c->r[21]+0x000003D4u; WF32(ea,c->f[0]);} // 801AB610
  W8(c->r[21]+0x000003D8u,c->r[20]); // 801AB614
  W32(c->r[21]+0x00000054u,c->r[0]); // 801AB618
  {uint32_t ea=c->r[21]+0x000003D0u; WF32(ea,c->f[0]);} // 801AB61C
  c->r[0]=R8(c->r[13]+0xFFFFC3CCu); // 801AB620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB624
  if (!crb(c,2)) { goto L_801AB644; } // 801AB628
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801AB62C
  c->r[0]=0u+0x00000001u; // 801AB630
  W32(c->r[13]+0xFFFFC3C8u,c->r[3]); // 801AB634
  c->r[3]=c->r[3]+0x00000001u; // 801AB638
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801AB63C
  W8(c->r[13]+0xFFFFC3CCu,c->r[0]); // 801AB640
L_801AB644:;
  c->r[0]=R32(c->r[13]+0xFFFFC3C8u); // 801AB644
  c->r[4]=0u+0x806E0000u; // 801AB648
  W32(c->r[21]+0x00000328u,c->r[0]); // 801AB64C
  c->r[4]=c->r[4]+0xFFFF8C38u; // 801AB650
  c->r[3]=c->r[4]+0x00000044u; // 801AB654
  c->r[0]=0u+0x00000001u; // 801AB658
  W32(c->r[21]+0x0000001Cu,c->r[4]); // 801AB65C
  W32(c->r[21]+0x00000330u,c->r[3]); // 801AB660
  W8(c->r[21]+0x000003E0u,c->r[0]); // 801AB664
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB668
  cmps(c,0,(int32_t)c->r[20],0); // 801AB66C
  if (crb(c,2)) { goto L_801AB6B4; } // 801AB670
  c->lr=0x801AB678u; f_801ABAA4(c); // 801AB674
  c->r[22]=c->r[3]|c->r[3]; // 801AB678
  c->lr=0x801AB680u; f_8007BDCC(c); // 801AB67C
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)80); // 801AB680
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB684
  c->r[5]=0u+0x801B0000u; // 801AB688
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB68C
  c->r[4]=c->r[20]+c->r[4]; // 801AB690
  c->r[5]=c->r[5]+0xFFFFBCE4u; // 801AB694
  c->r[4]=c->r[4]+c->r[0]; // 801AB698
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB69C
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB6A0
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AB6A4
  if (!crb(c,0)) { goto L_801AB6B4; } // 801AB6A8
  c->r[0]=0u+0x0000000Cu; // 801AB6AC
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB6B0
L_801AB6B4:;
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB6B4
  cmps(c,0,(int32_t)c->r[20],0); // 801AB6B8
  if (crb(c,2)) { goto L_801AB700; } // 801AB6BC
  c->lr=0x801AB6C4u; f_801ABAA4(c); // 801AB6C0
  c->r[22]=c->r[3]|c->r[3]; // 801AB6C4
  c->lr=0x801AB6CCu; f_80076D18(c); // 801AB6C8
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)80); // 801AB6CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB6D0
  c->r[5]=0u+0x801B0000u; // 801AB6D4
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB6D8
  c->r[4]=c->r[20]+c->r[4]; // 801AB6DC
  c->r[5]=c->r[5]+0xFFFFBCE0u; // 801AB6E0
  c->r[4]=c->r[4]+c->r[0]; // 801AB6E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB6E8
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB6EC
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AB6F0
  if (!crb(c,0)) { goto L_801AB700; } // 801AB6F4
  c->r[0]=0u+0x0000000Cu; // 801AB6F8
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB6FC
L_801AB700:;
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB700
  cmps(c,0,(int32_t)c->r[20],0); // 801AB704
  if (crb(c,2)) { goto L_801AB74C; } // 801AB708
  c->lr=0x801AB710u; f_801ABAA4(c); // 801AB70C
  c->r[22]=c->r[3]|c->r[3]; // 801AB710
  c->lr=0x801AB718u; f_80076CB0(c); // 801AB714
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)80); // 801AB718
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB71C
  c->r[5]=0u+0x801B0000u; // 801AB720
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB724
  c->r[4]=c->r[20]+c->r[4]; // 801AB728
  c->r[5]=c->r[5]+0xFFFFBCDCu; // 801AB72C
  c->r[4]=c->r[4]+c->r[0]; // 801AB730
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB734
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB738
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AB73C
  if (!crb(c,0)) { goto L_801AB74C; } // 801AB740
  c->r[0]=0u+0x0000000Cu; // 801AB744
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB748
L_801AB74C:;
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB74C
  cmps(c,0,(int32_t)c->r[20],0); // 801AB750
  if (crb(c,2)) { goto L_801AB798; } // 801AB754
  c->lr=0x801AB75Cu; f_801ABAA4(c); // 801AB758
  c->r[22]=c->r[3]|c->r[3]; // 801AB75C
  c->lr=0x801AB764u; f_80076CE4(c); // 801AB760
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)80); // 801AB764
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB768
  c->r[5]=0u+0x801B0000u; // 801AB76C
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB770
  c->r[4]=c->r[20]+c->r[4]; // 801AB774
  c->r[5]=c->r[5]+0xFFFFBCD8u; // 801AB778
  c->r[4]=c->r[4]+c->r[0]; // 801AB77C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB780
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB784
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AB788
  if (!crb(c,0)) { goto L_801AB798; } // 801AB78C
  c->r[0]=0u+0x0000000Cu; // 801AB790
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB794
L_801AB798:;
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB798
  cmps(c,0,(int32_t)c->r[20],0); // 801AB79C
  if (crb(c,2)) { goto L_801AB7E4; } // 801AB7A0
  c->lr=0x801AB7A8u; f_801ABAA4(c); // 801AB7A4
  c->r[22]=c->r[3]|c->r[3]; // 801AB7A8
  c->lr=0x801AB7B0u; f_80076C4C(c); // 801AB7AC
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)80); // 801AB7B0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB7B4
  c->r[5]=0u+0x801B0000u; // 801AB7B8
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB7BC
  c->r[4]=c->r[20]+c->r[4]; // 801AB7C0
  c->r[5]=c->r[5]+0xFFFFBCD4u; // 801AB7C4
  c->r[4]=c->r[4]+c->r[0]; // 801AB7C8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB7CC
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB7D0
  cmpu(c,0,c->r[0],0x0000006Cu); // 801AB7D4
  if (!crb(c,0)) { goto L_801AB7E4; } // 801AB7D8
  c->r[0]=0u+0x0000006Cu; // 801AB7DC
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB7E0
L_801AB7E4:;
  c->r[20]=R32(c->r[13]+0xFFFFDBDCu); // 801AB7E4
  cmps(c,0,(int32_t)c->r[20],0); // 801AB7E8
  if (crb(c,2)) { goto L_801AB854; } // 801AB7EC
  c->lr=0x801AB7F4u; f_801ABAA4(c); // 801AB7F0
  c->r[0]=R8(c->r[13]+0xFFFFC3B4u); // 801AB7F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AB7F8
  if (!crb(c,2)) { goto L_801AB81C; } // 801AB7FC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801AB800
  c->r[0]=0u+0x00000001u; // 801AB804
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801AB808
  c->r[4]=c->r[5]+0x00000001u; // 801AB80C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801AB810
  W32(c->r[13]+0xFFFFC3B0u,c->r[5]); // 801AB814
  W8(c->r[13]+0xFFFFC3B4u,c->r[0]); // 801AB818
L_801AB81C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801AB81C
  c->r[0]=R32(c->r[13]+0xFFFFC3B0u); // 801AB820
  c->r[5]=0u+0x801B0000u; // 801AB824
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AB828
  c->r[4]=c->r[20]+c->r[4]; // 801AB82C
  c->r[5]=c->r[5]+0xFFFFBCD0u; // 801AB830
  c->r[4]=c->r[4]+c->r[0]; // 801AB834
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB838
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB83C
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB840
  cmpu(c,0,c->r[0],0x0000000Cu); // 801AB844
  if (!crb(c,0)) { goto L_801AB854; } // 801AB848
  c->r[0]=0u+0x0000000Cu; // 801AB84C
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB850
L_801AB854:;
  c->r[3]=0u+0x806E0000u; // 801AB854
  c->r[3]=c->r[3]+0x00002390u; // 801AB858
  W32(c->r[21]+0x0000001Cu,c->r[3]); // 801AB85C
  c->r[0]=c->r[3]+0x00000044u; // 801AB860
  W32(c->r[21]+0x00000330u,c->r[0]); // 801AB864
  c->r[20]=R32(c->r[13]+0xFFFFDBD8u); // 801AB868
  cmps(c,0,(int32_t)c->r[20],0); // 801AB86C
  if (crb(c,2)) { goto L_801AB8B4; } // 801AB870
  c->lr=0x801AB878u; f_801ABAA4(c); // 801AB874
  c->r[22]=c->r[3]|c->r[3]; // 801AB878
  c->lr=0x801AB880u; f_80163CF0(c); // 801AB87C
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)2600); // 801AB880
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB884
  c->r[5]=0u+0x801B0000u; // 801AB888
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB88C
  c->r[4]=c->r[20]+c->r[4]; // 801AB890
  c->r[5]=c->r[5]+0xFFFFBCCCu; // 801AB894
  c->r[4]=c->r[4]+c->r[0]; // 801AB898
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB89C
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB8A0
  cmpu(c,0,c->r[0],0x00000010u); // 801AB8A4
  if (!crb(c,0)) { goto L_801AB8B4; } // 801AB8A8
  c->r[0]=0u+0x00000010u; // 801AB8AC
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB8B0
L_801AB8B4:;
  c->r[20]=R32(c->r[13]+0xFFFFDBD8u); // 801AB8B4
  cmps(c,0,(int32_t)c->r[20],0); // 801AB8B8
  if (crb(c,2)) { goto L_801AB900; } // 801AB8BC
  c->lr=0x801AB8C4u; f_801ABAA4(c); // 801AB8C0
  c->r[22]=c->r[3]|c->r[3]; // 801AB8C4
  c->lr=0x801AB8CCu; f_80062EBC(c); // 801AB8C8
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)2600); // 801AB8CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB8D0
  c->r[5]=0u+0x801B0000u; // 801AB8D4
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB8D8
  c->r[4]=c->r[20]+c->r[4]; // 801AB8DC
  c->r[5]=c->r[5]+0xFFFFBBF8u; // 801AB8E0
  c->r[4]=c->r[4]+c->r[0]; // 801AB8E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB8E8
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB8EC
  cmpu(c,0,c->r[0],0x00000010u); // 801AB8F0
  if (!crb(c,0)) { goto L_801AB900; } // 801AB8F4
  c->r[0]=0u+0x00000010u; // 801AB8F8
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB8FC
L_801AB900:;
  c->r[20]=R32(c->r[13]+0xFFFFDBD8u); // 801AB900
  cmps(c,0,(int32_t)c->r[20],0); // 801AB904
  if (crb(c,2)) { goto L_801AB94C; } // 801AB908
  c->lr=0x801AB910u; f_801ABAA4(c); // 801AB90C
  c->r[22]=c->r[3]|c->r[3]; // 801AB910
  c->lr=0x801AB918u; f_800E6A20(c); // 801AB914
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)2600); // 801AB918
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AB91C
  c->r[5]=0u+0x801B0000u; // 801AB920
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801AB924
  c->r[4]=c->r[20]+c->r[4]; // 801AB928
  c->r[5]=c->r[5]+0xFFFFBB24u; // 801AB92C
  c->r[4]=c->r[4]+c->r[0]; // 801AB930
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801AB934
  c->r[0]=R32(c->r[20]+c->r[3]); // 801AB938
  cmpu(c,0,c->r[0],0x00000010u); // 801AB93C
  if (!crb(c,0)) { goto L_801AB94C; } // 801AB940
  c->r[0]=0u+0x00000010u; // 801AB944
  W32(c->r[20]+c->r[3],c->r[0]); // 801AB948
L_801AB94C:;
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AB94C
  c->r[0]=0u+0x00000001u; // 801AB950
  {uint32_t ea=c->r[21]+0x000003D0u; WF32(ea,c->f[0]);} // 801AB954
  W8(c->r[21]+0x000003D8u,c->r[0]); // 801AB958
L_801AB95C:;
  W32(c->r[21]+0x000000F4u,c->r[27]); // 801AB95C
  c->r[0]=c->r[23]+0x000000D8u; // 801AB960
  c->r[0]=c->r[24]-c->r[0]; // 801AB964
  cmps(c,0,(int32_t)c->r[28],0); // 801AB968
  W32(c->r[21]+0x000000F8u,c->r[26]); // 801AB96C
  c->r[0]=cntlz(c->r[0]); // 801AB970
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AB974
  c->r[19]=c->r[21]|c->r[21]; // 801AB978
  W32(c->r[21]+0x00000060u,c->r[24]); // 801AB97C
  W8(c->r[21]+0x0000005Cu,c->r[0]); // 801AB980
  if (crb(c,2)) { goto L_801AB998; } // 801AB984
  c->r[4]=c->r[28]|c->r[28]; // 801AB988
  c->r[3]=c->r[21]+0x000000FCu; // 801AB98C
  c->r[5]=0u+0x00000001u; // 801AB990
  c->lr=0x801AB998u; f_802E4E84(c); // 801AB994
L_801AB998:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AB998
  if (crb(c,2)) { goto L_801AB9B0; } // 801AB99C
  c->r[4]=c->r[29]|c->r[29]; // 801AB9A0
  c->r[3]=c->r[21]+0x000000FCu; // 801AB9A4
  c->r[5]=0u+0x00000001u; // 801AB9A8
  c->lr=0x801AB9B0u; f_802E4E84(c); // 801AB9AC
L_801AB9B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AB9B0
  if (crb(c,2)) { goto L_801AB9F8; } // 801AB9B4
  c->r[4]=c->r[30]|c->r[30]; // 801AB9B8
  c->r[3]=c->r[21]+0x000000FCu; // 801AB9BC
  c->lr=0x801AB9C4u; f_802E5F00(c); // 801AB9C0
  c->r[3]=c->r[30]|c->r[30]; // 801AB9C4
  c->r[4]=c->r[13]+0xFFFF8D80u; // 801AB9C8
  c->lr=0x801AB9D0u; f_80317DA8(c); // 801AB9CC
  c->r[4]=c->r[3]|c->r[3]; // 801AB9D0
  c->r[3]=c->r[1]+0x0000000Cu; // 801AB9D4
  c->lr=0x801AB9DCu; f_8007524C(c); // 801AB9D8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801AB9DC
  cmps(c,0,(int32_t)c->r[0],0); // 801AB9E0
  if (crb(c,2)) { goto L_801AB9F8; } // 801AB9E4
  c->r[3]=c->r[21]+0x000000FCu; // 801AB9E8
  c->r[4]=c->r[1]+0x0000000Cu; // 801AB9EC
  c->r[5]=0u+0x00000000u; // 801AB9F0
  c->lr=0x801AB9F8u; f_802E4E84(c); // 801AB9F4
L_801AB9F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AB9F8
  if (crb(c,2)) { goto L_801ABA40; } // 801AB9FC
  c->r[4]=c->r[31]|c->r[31]; // 801ABA00
  c->r[3]=c->r[21]+0x000000FCu; // 801ABA04
  c->lr=0x801ABA0Cu; f_802E5F00(c); // 801ABA08
  c->r[3]=c->r[31]|c->r[31]; // 801ABA0C
  c->r[4]=c->r[13]+0xFFFF8D78u; // 801ABA10
  c->lr=0x801ABA18u; f_80317DA8(c); // 801ABA14
  c->r[4]=c->r[3]|c->r[3]; // 801ABA18
  c->r[3]=c->r[1]+0x00000008u; // 801ABA1C
  c->lr=0x801ABA24u; f_8007524C(c); // 801ABA20
  c->r[0]=R32(c->r[1]+0x00000008u); // 801ABA24
  cmps(c,0,(int32_t)c->r[0],0); // 801ABA28
  if (crb(c,2)) { goto L_801ABA40; } // 801ABA2C
  c->r[3]=c->r[21]+0x000000FCu; // 801ABA30
  c->r[4]=c->r[1]+0x00000008u; // 801ABA34
  c->r[5]=0u+0x00000000u; // 801ABA38
  c->lr=0x801ABA40u; f_802E4E84(c); // 801ABA3C
L_801ABA40:;
  cmps(c,0,(int32_t)c->r[21],0); // 801ABA40
  if (crb(c,2)) { goto L_801ABA88; } // 801ABA44
  c->r[6]=R8(c->r[23]+0x000000D4u); // 801ABA48
  c->r[3]=c->r[23]|c->r[23]; // 801ABA4C
  c->r[4]=c->r[25]|c->r[25]; // 801ABA50
  c->r[5]=c->r[21]|c->r[21]; // 801ABA54
  c->lr=0x801ABA5Cu; f_80318C10(c); // 801ABA58
  cmps(c,0,(int32_t)c->r[3],0); // 801ABA5C
  if (!crb(c,2)) { goto L_801ABA88; } // 801ABA60
  cmps(c,0,(int32_t)c->r[21],0); // 801ABA64
  if (crb(c,2)) { goto L_801ABA84; } // 801ABA68
  c->r[12]=R32(c->r[21]+0x0000001Cu); // 801ABA6C
  c->r[3]=c->r[21]|c->r[21]; // 801ABA70
  c->r[4]=0u+0x00000001u; // 801ABA74
  c->r[12]=R32(c->r[12]+0x00000008u); // 801ABA78
  c->ctr=c->r[12]; // 801ABA7C
  if (true) { c->lr=0x801ABA84u; dispatch(c,c->ctr); } // 801ABA80
L_801ABA84:;
  c->r[19]=0u+0x00000000u; // 801ABA84
L_801ABA88:;
  c->r[11]=c->r[1]+0x00000050u; // 801ABA88
  c->r[3]=c->r[19]|c->r[19]; // 801ABA8C
  c->lr=0x801ABA94u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ABA90
  c->r[0]=R32(c->r[1]+0x00000054u); // 801ABA94
  c->lr=c->r[0]; // 801ABA98
  c->r[1]=c->r[1]+0x00000050u; // 801ABA9C
  return; // 801ABAA0
}

// fn_801ABAA4
void f_801ABAA4(Ctx* __restrict c) {
  trace_call(0x801ABAA4u);
  c->r[0]=R8(c->r[13]+0xFFFFD00Cu); // 801ABAA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801ABAA8
  if (!crb(c,2)) { goto L_801ABACC; } // 801ABAAC
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801ABAB0
  c->r[0]=0u+0x00000001u; // 801ABAB4
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801ABAB8
  c->r[3]=c->r[4]+0x00000001u; // 801ABABC
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801ABAC0
  W32(c->r[13]+0xFFFFD008u,c->r[4]); // 801ABAC4
  W8(c->r[13]+0xFFFFD00Cu,c->r[0]); // 801ABAC8
L_801ABACC:;
  c->r[3]=R32(c->r[13]+0xFFFFD008u); // 801ABACC
  return; // 801ABAD0
}

// fn_801ABAD4
void f_801ABAD4(Ctx* __restrict c) {
  trace_call(0x801ABAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABAD4
  c->r[0]=c->lr; // 801ABAD8
  cmps(c,0,(int32_t)c->r[3],0); // 801ABADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABAE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ABAE4
  c->r[30]=c->r[3]|c->r[3]; // 801ABAE8
  c->r[31]=c->r[4]|c->r[4]; // 801ABAEC
  if (crb(c,2)) { goto L_801ABB0C; } // 801ABAF0
  c->r[4]=0u+0x00000000u; // 801ABAF4
  c->lr=0x801ABAFCu; f_800FCC0C(c); // 801ABAF8
  cmps(c,0,(int32_t)c->r[31],0); // 801ABAFC
  if (!crb(c,1)) { goto L_801ABB0C; } // 801ABB00
  c->r[3]=c->r[30]|c->r[30]; // 801ABB04
  c->lr=0x801ABB0Cu; f_8005328C(c); // 801ABB08
L_801ABB0C:;
  c->r[3]=c->r[30]|c->r[30]; // 801ABB0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ABB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABB14
  c->lr=c->r[0]; // 801ABB18
  c->r[1]=c->r[1]+0x00000010u; // 801ABB1C
  return; // 801ABB20
}

// fn_801ABB24
void f_801ABB24(Ctx* __restrict c) {
  trace_call(0x801ABB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABB24
  c->r[0]=c->lr; // 801ABB28
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ABB2C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ABB30
  W32(c->r[1]+0x00000038u,c->r[30]); // 801ABB34
  c->r[30]=c->r[3]|c->r[3]; // 801ABB38
  c->r[4]=R32(c->r[3]+0x00000004u); // 801ABB3C
  cmps(c,0,(int32_t)c->r[4],0); // 801ABB40
  if (crb(c,2)) { goto L_801ABB50; } // 801ABB44
  c->r[0]=R32(c->r[4]+0x00000008u); // 801ABB48
  goto L_801ABB54; // 801ABB4C
L_801ABB50:;
  c->r[0]=0u+0x00000000u; // 801ABB50
L_801ABB54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ABB54
  if (!crb(c,2)) { goto L_801ABBE0; } // 801ABB58
  c->r[3]=c->r[1]+0x00000008u; // 801ABB5C
  c->lr=0x801ABB64u; f_80382F00(c); // 801ABB60
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABB64
  c->r[3]=c->r[1]+0x00000008u; // 801ABB68
  c->f[2]=c->f[1]; // 801ABB6C
  c->f[3]=c->f[1]; // 801ABB70
  c->lr=0x801ABB78u; f_804E18A0(c); // 801ABB74
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABB78
  c->r[3]=c->r[1]+0x00000008u; // 801ABB7C
  c->f[2]=c->f[1]; // 801ABB80
  c->f[3]=c->f[1]; // 801ABB84
  c->lr=0x801ABB8Cu; f_8007E8A8(c); // 801ABB88
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801ABB8C
  c->r[3]=c->r[30]|c->r[30]; // 801ABB90
  c->r[4]=c->r[1]+0x00000008u; // 801ABB94
  c->r[12]=R32(c->r[12]+0x00000020u); // 801ABB98
  c->ctr=c->r[12]; // 801ABB9C
  if (true) { c->lr=0x801ABBA4u; dispatch(c,c->ctr); } // 801ABBA0
  c->r[31]=c->r[30]+0x000000FCu; // 801ABBA4
  c->r[4]=0u+0x00000001u; // 801ABBA8
  c->r[3]=c->r[31]|c->r[31]; // 801ABBAC
  c->lr=0x801ABBB4u; f_802E6678(c); // 801ABBB0
  c->r[3]=c->r[31]|c->r[31]; // 801ABBB4
  c->r[4]=0u+0x00000000u; // 801ABBB8
  c->r[5]=0u+0x00000000u; // 801ABBBC
  c->lr=0x801ABBC4u; f_802E6608(c); // 801ABBC0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABBC4
  c->r[4]=0u+0x806E0000u; // 801ABBC8
  c->r[3]=R32(c->r[30]+0x000003DCu); // 801ABBCC
  c->r[4]=c->r[4]+0x00002628u; // 801ABBD0
  c->f[2]=c->f[1]; // 801ABBD4
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ABBD8
  c->lr=0x801ABBE0u; f_802E8A64(c); // 801ABBDC
L_801ABBE0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801ABBE0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ABBE4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801ABBE8
  c->lr=c->r[0]; // 801ABBEC
  c->r[1]=c->r[1]+0x00000040u; // 801ABBF0
  return; // 801ABBF4
}

// fn_801ABBF8
void f_801ABBF8(Ctx* __restrict c) {
  trace_call(0x801ABBF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABBF8
  c->r[0]=c->lr; // 801ABBFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ABC00
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ABC04
  W32(c->r[1]+0x00000038u,c->r[30]); // 801ABC08
  c->r[30]=c->r[3]|c->r[3]; // 801ABC0C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801ABC10
  cmps(c,0,(int32_t)c->r[4],0); // 801ABC14
  if (crb(c,2)) { goto L_801ABC24; } // 801ABC18
  c->r[0]=R32(c->r[4]+0x00000008u); // 801ABC1C
  goto L_801ABC28; // 801ABC20
L_801ABC24:;
  c->r[0]=0u+0x00000000u; // 801ABC24
L_801ABC28:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ABC28
  if (!crb(c,2)) { goto L_801ABCB4; } // 801ABC2C
  c->r[3]=c->r[1]+0x00000008u; // 801ABC30
  c->lr=0x801ABC38u; f_80382F00(c); // 801ABC34
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABC38
  c->r[3]=c->r[1]+0x00000008u; // 801ABC3C
  c->f[2]=c->f[1]; // 801ABC40
  c->f[3]=c->f[1]; // 801ABC44
  c->lr=0x801ABC4Cu; f_804E18A0(c); // 801ABC48
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABC4C
  c->r[3]=c->r[1]+0x00000008u; // 801ABC50
  c->f[2]=c->f[1]; // 801ABC54
  c->f[3]=c->f[1]; // 801ABC58
  c->lr=0x801ABC60u; f_8007E8A8(c); // 801ABC5C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801ABC60
  c->r[3]=c->r[30]|c->r[30]; // 801ABC64
  c->r[4]=c->r[1]+0x00000008u; // 801ABC68
  c->r[12]=R32(c->r[12]+0x00000020u); // 801ABC6C
  c->ctr=c->r[12]; // 801ABC70
  if (true) { c->lr=0x801ABC78u; dispatch(c,c->ctr); } // 801ABC74
  c->r[31]=c->r[30]+0x000000FCu; // 801ABC78
  c->r[4]=0u+0x00000001u; // 801ABC7C
  c->r[3]=c->r[31]|c->r[31]; // 801ABC80
  c->lr=0x801ABC88u; f_802E6678(c); // 801ABC84
  c->r[3]=c->r[31]|c->r[31]; // 801ABC88
  c->r[4]=0u+0x00000000u; // 801ABC8C
  c->r[5]=0u+0x00000000u; // 801ABC90
  c->lr=0x801ABC98u; f_802E6608(c); // 801ABC94
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABC98
  c->r[4]=0u+0x806E0000u; // 801ABC9C
  c->r[3]=R32(c->r[30]+0x000003DCu); // 801ABCA0
  c->r[4]=c->r[4]+0x00002618u; // 801ABCA4
  c->f[2]=c->f[1]; // 801ABCA8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ABCAC
  c->lr=0x801ABCB4u; f_802E8A64(c); // 801ABCB0
L_801ABCB4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801ABCB4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ABCB8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801ABCBC
  c->lr=c->r[0]; // 801ABCC0
  c->r[1]=c->r[1]+0x00000040u; // 801ABCC4
  return; // 801ABCC8
}

// fn_801ABCCC
void f_801ABCCC(Ctx* __restrict c) {
  trace_call(0x801ABCCCu);
  return; // 801ABCCC
}

// fn_801ABCD0
void f_801ABCD0(Ctx* __restrict c) {
  trace_call(0x801ABCD0u);
  f_800FD008(c); return; // 801ABCD0
}

// fn_801ABCD4
void f_801ABCD4(Ctx* __restrict c) {
  trace_call(0x801ABCD4u);
  f_800FCE88(c); return; // 801ABCD4
}

// fn_801ABCD8
void f_801ABCD8(Ctx* __restrict c) {
  trace_call(0x801ABCD8u);
  f_800FCE74(c); return; // 801ABCD8
}

// fn_801ABCDC
void f_801ABCDC(Ctx* __restrict c) {
  trace_call(0x801ABCDCu);
  f_800FCE60(c); return; // 801ABCDC
}

// fn_801ABCE0
void f_801ABCE0(Ctx* __restrict c) {
  trace_call(0x801ABCE0u);
  f_800FCE4C(c); return; // 801ABCE0
}

// fn_801ABCE4
void f_801ABCE4(Ctx* __restrict c) {
  trace_call(0x801ABCE4u);
  f_800FCC5C(c); return; // 801ABCE4
}

// fn_801ABCE8
void f_801ABCE8(Ctx* __restrict c) {
  trace_call(0x801ABCE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABCE8
  c->r[0]=c->lr; // 801ABCEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABCF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABCF4
  c->r[31]=c->r[3]|c->r[3]; // 801ABCF8
  c->lr=0x801ABD00u; f_8016D6B4(c); // 801ABCFC
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ABD00
  fcmp(c,0,c->f[1],c->f[0]); // 801ABD04
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ABD08
  if (!crb(c,2)) { goto L_801ABD18; } // 801ABD0C
  c->r[0]=0u+0x00000000u; // 801ABD10
  W8(c->r[31]+0x00000678u,c->r[0]); // 801ABD14
L_801ABD18:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ABD18
  c->lr=0x801ABD20u; f_800E1F38(c); // 801ABD1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABD20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABD24
  c->lr=c->r[0]; // 801ABD28
  c->r[1]=c->r[1]+0x00000010u; // 801ABD2C
  return; // 801ABD30
}

// fn_801ABD34
void f_801ABD34(Ctx* __restrict c) {
  trace_call(0x801ABD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABD34
  c->r[0]=c->lr; // 801ABD38
  W32(c->r[1]+0x00000064u,c->r[0]); // 801ABD3C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801ABD40
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801ABD44
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801ABD48
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801ABD4C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ABD50
  c->r[31]=0u+0x00000000u; // 801ABD54
  W32(c->r[1]+0x00000038u,c->r[30]); // 801ABD58
  c->r[30]=c->r[3]|c->r[3]; // 801ABD5C
  c->r[3]=c->r[1]+0x0000000Cu; // 801ABD60
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801ABD64
  c->lr=0x801ABD6Cu; f_800462D8(c); // 801ABD68
  c->r[4]=R8(c->r[30]+0x00000678u); // 801ABD6C
  c->lr=0x801ABD74u; f_800EA1A0(c); // 801ABD70
  c->r[5]=R32(c->r[30]+0x00000444u); // 801ABD74
  c->r[3]=c->r[1]+0x00000008u; // 801ABD78
  c->r[4]=R32(c->r[30]+0x0000044Cu); // 801ABD7C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 801ABD80
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 801ABD84
  W8(c->r[1]+0x00000008u,c->r[31]); // 801ABD88
  c->lr=0x801ABD90u; f_800462D8(c); // 801ABD8C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 801ABD90
  c->r[4]=0u+0x43300000u; // 801ABD94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 801ABD98
  W32(c->r[1]+0x00000018u,c->r[4]); // 801ABD9C
  {uint32_t ea=c->r[2]+0xFFFFC508u; c->f[2]=RF64(ea);} // 801ABDA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 801ABDA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801ABDA8
  c->r[5]=R32(c->r[1]+0x00000014u); // 801ABDAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ABDB0
  c->r[5]=c->r[5]^0x80000000u; // 801ABDB4
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801ABDB8
  c->r[0]=c->r[0]^0x80000000u; // 801ABDBC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801ABDC0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801ABDC4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801ABDC8
  W32(c->r[1]+0x00000028u,c->r[4]); // 801ABDCC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801ABDD0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801ABDD4
  c->lr=0x801ABDDCu; f_800EA1BC(c); // 801ABDD8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801ABDDC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801ABDE0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801ABDE4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801ABDE8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801ABDEC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ABDF0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801ABDF4
  c->lr=c->r[0]; // 801ABDF8
  c->r[1]=c->r[1]+0x00000060u; // 801ABDFC
  return; // 801ABE00
}

// fn_801ABE04
void f_801ABE04(Ctx* __restrict c) {
  trace_call(0x801ABE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABE04
  c->r[0]=c->lr; // 801ABE08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ABE0C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801ABE10
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801ABE14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ABE18
  c->r[30]=c->r[3]|c->r[3]; // 801ABE1C
  c->r[3]=R32(c->r[3]+0x00000404u); // 801ABE20
  c->lr=0x801ABE28u; f_802EA4B0(c); // 801ABE24
  c->f[30]=c->f[1]; // 801ABE28
  c->r[3]=c->r[30]+0x000005C4u; // 801ABE2C
  c->lr=0x801ABE34u; f_800E2A98(c); // 801ABE30
  c->f[31]=c->f[1]; // 801ABE34
  c->r[3]=c->r[30]+0x000005C4u; // 801ABE38
  c->lr=0x801ABE40u; f_800E2090(c); // 801ABE3C
  c->r[31]=c->r[3]|c->r[3]; // 801ABE40
  c->r[3]=c->r[30]+0x00000354u; // 801ABE44
  c->lr=0x801ABE4Cu; f_800C9374(c); // 801ABE48
  c->f[1]=c->f[30]; // 801ABE4C
  c->r[4]=c->r[3]|c->r[3]; // 801ABE50
  c->f[2]=c->f[31]; // 801ABE54
  c->r[5]=c->r[31]|c->r[31]; // 801ABE58
  c->r[3]=c->r[30]+0x00000688u; // 801ABE5C
  c->lr=0x801ABE64u; f_802588C4(c); // 801ABE60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801ABE64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801ABE68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ABE6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ABE70
  c->lr=c->r[0]; // 801ABE74
  c->r[1]=c->r[1]+0x00000020u; // 801ABE78
  return; // 801ABE7C
}

// fn_801ABE80
void f_801ABE80(Ctx* __restrict c) {
  trace_call(0x801ABE80u);
  return; // 801ABE80
}

// fn_801ABE84
void f_801ABE84(Ctx* __restrict c) {
  trace_call(0x801ABE84u);
  return; // 801ABE84
}

// fn_801ABE88
void f_801ABE88(Ctx* __restrict c) {
  trace_call(0x801ABE88u);
  return; // 801ABE88
}

// fn_801ABE8C
void f_801ABE8C(Ctx* __restrict c) {
  trace_call(0x801ABE8Cu);
  return; // 801ABE8C
}

// fn_801ABE90
void f_801ABE90(Ctx* __restrict c) {
  trace_call(0x801ABE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABE90
  c->r[0]=c->lr; // 801ABE94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ABE98
  c->r[11]=c->r[1]+0x00000020u; // 801ABE9C
  c->lr=0x801ABEA4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ABEA0
  c->r[0]=R32(c->r[4]+0x00000044u); // 801ABEA4
  c->r[29]=c->r[3]|c->r[3]; // 801ABEA8
  cmps(c,0,(int32_t)c->r[0],0); // 801ABEAC
  if (crb(c,2)) { goto L_801ABECC; } // 801ABEB0
  {uint32_t ea=c->r[4]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ABEB4
  {uint32_t ea=c->r[2]+0xFFFFC510u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABEB8
  {uint32_t ea=c->r[3]+0x00000680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ABEBC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801ABEC0
  {uint32_t ea=c->r[3]+0x00000680u; WF32(ea,c->f[0]);} // 801ABEC4
  goto L_801ABEDC; // 801ABEC8
L_801ABECC:;
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ABECC
  {uint32_t ea=c->r[3]+0x00000680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ABED0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801ABED4
  {uint32_t ea=c->r[3]+0x00000680u; WF32(ea,c->f[0]);} // 801ABED8
L_801ABEDC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801ABEDC
  c->r[31]=0u+0x00000000u; // 801ABEE0
  cmps(c,0,(int32_t)c->r[3],0); // 801ABEE4
  if (crb(c,2)) { goto L_801ABF00; } // 801ABEE8
  c->r[30]=R32(c->r[3]+0x00000000u); // 801ABEEC
  c->lr=0x801ABEF4u; f_8017CDD0(c); // 801ABEF0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801ABEF4
  if (!crb(c,2)) { goto L_801ABF00; } // 801ABEF8
  c->r[31]=0u+0x00000001u; // 801ABEFC
L_801ABF00:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ABF00
  if (crb(c,2)) { goto L_801ABF44; } // 801ABF04
  c->r[3]=c->r[29]|c->r[29]; // 801ABF08
  c->lr=0x801ABF10u; f_8016D6B4(c); // 801ABF0C
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ABF10
  fcmp(c,0,c->f[1],c->f[0]); // 801ABF14
  if (!crb(c,0)) { goto L_801ABF44; } // 801ABF18
  c->r[31]=0u+0x00010000u; // 801ABF1C
  c->r[3]=c->r[29]+0x00000354u; // 801ABF20
  c->r[4]=c->r[31]+0xFFFFEA83u; // 801ABF24
  c->lr=0x801ABF2Cu; f_800667BC(c); // 801ABF28
  cmps(c,0,(int32_t)c->r[3],0); // 801ABF2C
  if (!crb(c,2)) { goto L_801ABF44; } // 801ABF30
  c->r[3]=c->r[29]|c->r[29]; // 801ABF34
  c->r[4]=c->r[31]+0xFFFFEA83u; // 801ABF38
  c->r[5]=0u+0x00000001u; // 801ABF3C
  c->lr=0x801ABF44u; f_80064744(c); // 801ABF40
L_801ABF44:;
  c->r[11]=c->r[1]+0x00000020u; // 801ABF44
  c->lr=0x801ABF4Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ABF48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ABF4C
  c->lr=c->r[0]; // 801ABF50
  c->r[1]=c->r[1]+0x00000020u; // 801ABF54
  return; // 801ABF58
}

// fn_801ABF5C
void f_801ABF5C(Ctx* __restrict c) {
  trace_call(0x801ABF5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABF5C
  c->r[0]=c->lr; // 801ABF60
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ABF64
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801ABF68
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801ABF6C
  c->f[31]=c->f[2]; // 801ABF70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801ABF74
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801ABF78
  c->f[30]=c->f[1]; // 801ABF7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ABF80
  c->r[31]=c->r[3]|c->r[3]; // 801ABF84
  c->r[3]=c->r[3]+0x000005C4u; // 801ABF88
  c->lr=0x801ABF90u; f_800E2B50(c); // 801ABF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801ABF90
  if (crb(c,2)) { goto L_801ABFD8; } // 801ABF94
  c->r[0]=0u+0x00000000u; // 801ABF98
  W8(c->r[1]+0x00000010u,c->r[0]); // 801ABF9C
  c->r[3]=c->r[1]+0x00000010u; // 801ABFA0
  c->lr=0x801ABFA8u; f_80046EFC(c); // 801ABFA4
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 801ABFA8
  {uint32_t ea=c->r[2]+0xFFFFC518u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ABFAC
  {uint32_t ea=c->r[2]+0xFFFFC51Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ABFB0
  c->r[4]=0u+0x00000000u; // 801ABFB4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801ABFB8
  c->r[5]=0u+0x00000000u; // 801ABFBC
  c->f[3]=c->f[2]; // 801ABFC0
  c->r[6]=0u+0x00000000u; // 801ABFC4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801ABFC8
  c->r[7]=0u+0x00000000u; // 801ABFCC
  c->r[8]=0u+0xFFFFFFFFu; // 801ABFD0
  c->lr=0x801ABFD8u; f_8011A9B4(c); // 801ABFD4
L_801ABFD8:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ABFD8
  c->lr=0x801ABFE0u; f_800E2A98(c); // 801ABFDC
  fcmp(c,0,c->f[1],c->f[30]); // 801ABFE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ABFE4
  if (!crb(c,2)) { goto L_801AC028; } // 801ABFE8
  c->r[3]=c->r[31]+0x000005C4u; // 801ABFEC
  c->lr=0x801ABFF4u; f_800E2A98(c); // 801ABFF0
  fcmp(c,0,c->f[1],c->f[31]); // 801ABFF4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ABFF8
  if (!crb(c,2)) { goto L_801AC028; } // 801ABFFC
  c->r[0]=0u+0x00000000u; // 801AC000
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801AC004
  c->r[3]=c->r[1]+0x0000000Cu; // 801AC008
  c->lr=0x801AC010u; f_80046EFC(c); // 801AC00C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801AC010
  c->lr=0x801AC018u; f_8011AC88(c); // 801AC014
  cmps(c,0,(int32_t)c->r[3],2); // 801AC018
  if (!crb(c,2)) { goto L_801AC060; } // 801AC01C
  c->r[3]=0u+0x00000002u; // 801AC020
  goto L_801AC064; // 801AC024
L_801AC028:;
  c->r[3]=c->r[31]+0x000005C4u; // 801AC028
  c->lr=0x801AC030u; f_800E2A98(c); // 801AC02C
  fcmp(c,0,c->f[1],c->f[31]); // 801AC030
  if (!crb(c,1)) { goto L_801AC060; } // 801AC034
  c->r[0]=0u+0x00000000u; // 801AC038
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AC03C
  c->r[3]=c->r[1]+0x00000008u; // 801AC040
  c->lr=0x801AC048u; f_80046EFC(c); // 801AC044
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801AC048
  c->lr=0x801AC050u; f_8011ABE4(c); // 801AC04C
  cmps(c,0,(int32_t)c->r[3],1); // 801AC050
  if (crb(c,2)) { goto L_801AC060; } // 801AC054
  c->r[3]=0u+0x00000003u; // 801AC058
  goto L_801AC064; // 801AC05C
L_801AC060:;
  c->r[3]=0u+0x00000000u; // 801AC060
L_801AC064:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AC064
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801AC068
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801AC06C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801AC070
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801AC074
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AC078
  c->lr=c->r[0]; // 801AC07C
  c->r[1]=c->r[1]+0x00000040u; // 801AC080
  return; // 801AC084
}

// fn_801AC088
void f_801AC088(Ctx* __restrict c) {
  trace_call(0x801AC088u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC088
  c->r[0]=c->lr; // 801AC08C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC090
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801AC094
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801AC098
  c->f[31]=c->f[4]; // 801AC09C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801AC0A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801AC0A4
  c->f[30]=c->f[3]; // 801AC0A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801AC0AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801AC0B0
  c->f[29]=c->f[2]; // 801AC0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC0B8
  c->r[31]=c->r[3]|c->r[3]; // 801AC0BC
  c->r[3]=R32(c->r[3]+0x00000404u); // 801AC0C0
  c->lr=0x801AC0C8u; f_802EA5A4(c); // 801AC0C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC0C8
  if (crb(c,2)) { goto L_801AC0EC; } // 801AC0CC
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 801AC0D0
  c->r[0]=0u+0x00000000u; // 801AC0D4
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AC0D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC0DC
  {uint32_t ea=c->r[31]+0x0000067Cu; WF32(ea,c->f[1]);} // 801AC0E0
  {uint32_t ea=c->r[31]+0x00000680u; WF32(ea,c->f[0]);} // 801AC0E4
  W8(c->r[31]+0x00000684u,c->r[0]); // 801AC0E8
L_801AC0EC:;
  c->f[1]=c->f[29]; // 801AC0EC
  c->r[3]=R32(c->r[31]+0x00000404u); // 801AC0F0
  c->lr=0x801AC0F8u; f_802EA5A4(c); // 801AC0F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC0F8
  if (crb(c,2)) { goto L_801AC118; } // 801AC0FC
  {uint32_t ea=c->r[31]+0x00000680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AC100
  fcmp(c,0,c->f[0],c->f[31]); // 801AC104
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801AC108
  if (!crb(c,2)) { goto L_801AC118; } // 801AC10C
  c->r[0]=0u+0x00000001u; // 801AC110
  W8(c->r[31]+0x00000684u,c->r[0]); // 801AC114
L_801AC118:;
  c->f[1]=c->f[30]; // 801AC118
  c->r[3]=R32(c->r[31]+0x00000404u); // 801AC11C
  c->lr=0x801AC124u; f_802EA5A4(c); // 801AC120
  cmps(c,0,(int32_t)c->r[3],0); // 801AC124
  if (crb(c,2)) { goto L_801AC134; } // 801AC128
  c->r[3]=R8(c->r[31]+0x00000684u); // 801AC12C
  goto L_801AC138; // 801AC130
L_801AC134:;
  c->r[3]=0u+0x00000000u; // 801AC134
L_801AC138:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AC138
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801AC13C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801AC140
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801AC144
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801AC148
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801AC14C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801AC150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC154
  c->lr=c->r[0]; // 801AC158
  c->r[1]=c->r[1]+0x00000040u; // 801AC15C
  return; // 801AC160
}

// fn_801AC164
void f_801AC164(Ctx* __restrict c) {
  trace_call(0x801AC164u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC164
  c->r[0]=c->lr; // 801AC168
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801AC16C
  c->r[11]=c->r[1]+0x000000E0u; // 801AC170
  c->lr=0x801AC178u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC174
  c->r[28]=c->r[3]|c->r[3]; // 801AC178
  c->r[3]=R32(c->r[3]+0x00000434u); // 801AC17C
  c->r[29]=c->r[5]|c->r[5]; // 801AC180
  c->lr=0x801AC188u; f_800FDFE0(c); // 801AC184
  c->r[3]=c->r[1]+0x0000003Cu; // 801AC188
  c->r[4]=0u+0x00000000u; // 801AC18C
  c->r[5]=0u+0x00000014u; // 801AC190
  c->lr=0x801AC198u; f_800043EC(c); // 801AC194
  cmps(c,0,(int32_t)c->r[29],0); // 801AC198
  c->r[0]=0u+0xFFFFFFFFu; // 801AC19C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AC1A0
  if (!crb(c,2)) { goto L_801AC1C4; } // 801AC1A4
  c->r[4]=R32(c->r[28]+0x00000434u); // 801AC1A8
  c->r[3]=c->r[1]+0x00000028u; // 801AC1AC
  c->lr=0x801AC1B4u; f_800FE1C8(c); // 801AC1B0
  c->r[3]=c->r[1]+0x0000003Cu; // 801AC1B4
  c->r[4]=c->r[1]+0x00000028u; // 801AC1B8
  c->lr=0x801AC1C0u; f_801AC314(c); // 801AC1BC
  goto L_801AC22C; // 801AC1C0
L_801AC1C4:;
  c->r[30]=0u+0x00000000u; // 801AC1C4
  c->r[31]=0u+0x00000000u; // 801AC1C8
  goto L_801AC20C; // 801AC1CC
L_801AC1D0:;
  c->r[4]=R32(c->r[28]+0x00000434u); // 801AC1D0
  c->r[5]=c->r[31]|c->r[31]; // 801AC1D4
  c->r[3]=c->r[1]+0x00000014u; // 801AC1D8
  c->lr=0x801AC1E0u; f_800FE734(c); // 801AC1DC
  c->r[3]=c->r[1]+0x0000003Cu; // 801AC1E0
  c->r[4]=c->r[1]+0x00000014u; // 801AC1E4
  c->lr=0x801AC1ECu; f_801AC314(c); // 801AC1E8
  c->r[3]=R32(c->r[1]+0x00000040u); // 801AC1EC
  c->r[4]=c->r[29]|c->r[29]; // 801AC1F0
  c->lr=0x801AC1F8u; f_803B393C(c); // 801AC1F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC1F8
  if (!crb(c,2)) { goto L_801AC208; } // 801AC1FC
  c->r[30]=0u+0x00000001u; // 801AC200
  goto L_801AC21C; // 801AC204
L_801AC208:;
  c->r[31]=c->r[31]+0x00000001u; // 801AC208
L_801AC20C:;
  c->r[3]=R32(c->r[28]+0x00000434u); // 801AC20C
  c->lr=0x801AC214u; f_800FE6EC(c); // 801AC210
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801AC214
  if (crb(c,0)) { IRQCHK(c); goto L_801AC1D0; } // 801AC218
L_801AC21C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AC21C
  if (!crb(c,2)) { goto L_801AC22C; } // 801AC220
  c->r[3]=0u+0xFFFFFFFFu; // 801AC224
  goto L_801AC2FC; // 801AC228
L_801AC22C:;
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801AC22C
  c->r[3]=c->r[1]+0x00000050u; // 801AC230
  c->lr=0x801AC238u; f_803B37C0(c); // 801AC234
  c->r[3]=c->r[1]+0x00000008u; // 801AC238
  c->r[4]=c->r[1]+0x00000050u; // 801AC23C
  c->r[5]=0u+0xFFFFFFFFu; // 801AC240
  c->lr=0x801AC248u; f_802DD8B8(c); // 801AC244
  c->r[4]=0u+0x80690000u; // 801AC248
  c->r[3]=c->r[1]+0x00000008u; // 801AC24C
  c->r[31]=c->r[4]+0x00003520u; // 801AC250
  c->r[4]=c->r[31]+0x0000005Cu; // 801AC254
  c->lr=0x801AC25Cu; f_802DD8E4(c); // 801AC258
  c->r[30]=c->r[3]|c->r[3]; // 801AC25C
  goto L_801AC2D0; // 801AC260
L_801AC264:;
  c->r[3]=c->r[30]|c->r[30]; // 801AC264
  c->r[4]=c->r[31]+0x00000063u; // 801AC268
  c->lr=0x801AC270u; f_803BA9B0(c); // 801AC26C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC270
  if (!crb(c,2)) { goto L_801AC294; } // 801AC274
  c->r[3]=c->r[1]+0x00000008u; // 801AC278
  c->r[4]=c->r[31]+0x0000005Cu; // 801AC27C
  c->lr=0x801AC284u; f_802DD8E4(c); // 801AC280
  c->lr=0x801AC288u; f_803B5690(c); // 801AC284
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801AC288
  {uint32_t ea=c->r[28]+0x0000078Cu; WF32(ea,c->f[0]);} // 801AC28C
  goto L_801AC2C0; // 801AC290
L_801AC294:;
  c->r[3]=c->r[30]|c->r[30]; // 801AC294
  c->r[4]=c->r[31]+0x00000065u; // 801AC298
  c->lr=0x801AC2A0u; f_803BA9B0(c); // 801AC29C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC2A0
  if (!crb(c,2)) { goto L_801AC2C0; } // 801AC2A4
  c->r[3]=c->r[1]+0x00000008u; // 801AC2A8
  c->r[4]=c->r[31]+0x0000005Cu; // 801AC2AC
  c->lr=0x801AC2B4u; f_802DD8E4(c); // 801AC2B0
  c->lr=0x801AC2B8u; f_803B5690(c); // 801AC2B4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801AC2B8
  {uint32_t ea=c->r[28]+0x00000790u; WF32(ea,c->f[0]);} // 801AC2BC
L_801AC2C0:;
  c->r[3]=c->r[1]+0x00000008u; // 801AC2C0
  c->r[4]=c->r[31]+0x0000005Cu; // 801AC2C4
  c->lr=0x801AC2CCu; f_802DD8E4(c); // 801AC2C8
  c->r[30]=c->r[3]|c->r[3]; // 801AC2CC
L_801AC2D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AC2D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801AC264; } // 801AC2D4
  c->r[3]=R32(c->r[1]+0x00000040u); // 801AC2D8
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AC2DC
  c->r[5]=R8(c->r[3]+0x00000002u); // 801AC2E0
  c->r[4]=R8(c->r[3]+0x00000003u); // 801AC2E4
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801AC2E8
  c->r[3]=R8(c->r[3]+0x00000000u); // 801AC2EC
  c->r[4]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801AC2F0
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801AC2F4
  c->r[3]=c->r[4]|c->r[0]; // 801AC2F8
L_801AC2FC:;
  c->r[11]=c->r[1]+0x000000E0u; // 801AC2FC
  c->lr=0x801AC304u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AC300
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801AC304
  c->lr=c->r[0]; // 801AC308
  c->r[1]=c->r[1]+0x000000E0u; // 801AC30C
  return; // 801AC310
}

// fn_801AC314
void f_801AC314(Ctx* __restrict c) {
  trace_call(0x801AC314u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 801AC314
  c->r[6]=R32(c->r[4]+0x00000004u); // 801AC318
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AC31C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801AC320
  c->r[0]=R32(c->r[4]+0x00000010u); // 801AC324
  W32(c->r[3]+0x00000000u,c->r[7]); // 801AC328
  W32(c->r[3]+0x00000004u,c->r[6]); // 801AC32C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801AC330
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801AC334
  W32(c->r[3]+0x00000010u,c->r[0]); // 801AC338
  return; // 801AC33C
}

// fn_801AC340
void f_801AC340(Ctx* __restrict c) {
  trace_call(0x801AC340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC340
  c->r[0]=c->lr; // 801AC344
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC348
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 801AC34C
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801AC350
  c->r[0]=rotl(c->r[0],8)&0x00000001u; cr0(c,c->r[0]); // 801AC354
  if (crb(c,2)) { goto L_801AC364; } // 801AC358
  c->r[3]=0u+0x00000000u; // 801AC35C
  goto L_801AC370; // 801AC360
L_801AC364:;
  c->lr=0x801AC368u; f_800FA310(c); // 801AC364
  c->r[0]=cntlz(c->r[3]); // 801AC368
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AC36C
L_801AC370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC370
  c->lr=c->r[0]; // 801AC374
  c->r[1]=c->r[1]+0x00000010u; // 801AC378
  return; // 801AC37C
}

// fn_801AC380
void f_801AC380(Ctx* __restrict c) {
  trace_call(0x801AC380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC380
  c->r[0]=c->lr; // 801AC384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC38C
  c->r[31]=c->r[3]|c->r[3]; // 801AC390
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AC394
  cmps(c,0,(int32_t)c->r[4],0); // 801AC398
  if (crb(c,2)) { goto L_801AC3A8; } // 801AC39C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AC3A0
  goto L_801AC3AC; // 801AC3A4
L_801AC3A8:;
  c->r[0]=0u+0x00000000u; // 801AC3A8
L_801AC3AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AC3AC
  if (!crb(c,2)) { goto L_801AC3E8; } // 801AC3B0
  c->r[3]=R32(c->r[3]+0x00000434u); // 801AC3B4
  c->r[4]=0u+0x00000000u; // 801AC3B8
  c->r[3]=c->r[3]+0x00000030u; // 801AC3BC
  c->lr=0x801AC3C4u; f_802D94E8(c); // 801AC3C0
  c->r[3]=c->r[31]|c->r[31]; // 801AC3C4
  c->r[4]=0u+0x00000001u; // 801AC3C8
  c->r[5]=0u+0x00000000u; // 801AC3CC
  c->lr=0x801AC3D4u; f_8005EF48(c); // 801AC3D0
  c->r[4]=0u+0x00010000u; // 801AC3D4
  c->r[3]=c->r[31]|c->r[31]; // 801AC3D8
  c->r[4]=c->r[4]+0xFFFFEA65u; // 801AC3DC
  c->r[5]=0u+0x00000001u; // 801AC3E0
  c->lr=0x801AC3E8u; f_80064744(c); // 801AC3E4
L_801AC3E8:;
  c->r[3]=c->r[31]+0x00000354u; // 801AC3E8
  c->lr=0x801AC3F0u; f_800667AC(c); // 801AC3EC
  cmps(c,0,(int32_t)c->r[3],0); // 801AC3F0
  if (crb(c,2)) { goto L_801AC400; } // 801AC3F4
  c->r[3]=c->r[31]|c->r[31]; // 801AC3F8
  c->lr=0x801AC400u; f_801AC414(c); // 801AC3FC
L_801AC400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC400
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC404
  c->lr=c->r[0]; // 801AC408
  c->r[1]=c->r[1]+0x00000010u; // 801AC40C
  return; // 801AC410
}

// fn_801AC414
void f_801AC414(Ctx* __restrict c) {
  trace_call(0x801AC414u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC414
  c->r[0]=c->lr; // 801AC418
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC41C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AC420
  c->r[31]=c->r[1]|c->r[1]; // 801AC424
  c->r[28]=c->r[3]|c->r[3]; // 801AC428
  c->lr=0x801AC430u; f_8017CE04(c); // 801AC42C
  c->r[4]=c->r[3]|c->r[3]; // 801AC430
  c->r[3]=c->r[28]|c->r[28]; // 801AC434
  c->lr=0x801AC43Cu; f_80062F4C(c); // 801AC438
  c->r[0]=R8(c->r[28]+0x00000010u); // 801AC43C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AC440
  c->r[3]=c->r[28]+c->r[0]; // 801AC444
  c->r[29]=R32(c->r[3]+0x00000014u); // 801AC448
  cmps(c,0,(int32_t)c->r[29],0); // 801AC44C
  if (crb(c,2)) { goto L_801AC478; } // 801AC450
  c->r[30]=0u+0x00000000u; // 801AC454
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AC458
  W8(c->r[31]+0x00000008u,c->r[30]); // 801AC45C
  c->lr=0x801AC464u; f_8017CE04(c); // 801AC460
  W32(c->r[29]+0x00000000u,c->r[3]); // 801AC464
  c->r[0]=c->r[13]+0xFFFF8B28u; // 801AC468
  W32(c->r[29]+0x00000004u,c->r[0]); // 801AC46C
  W32(c->r[29]+0x00000008u,c->r[30]); // 801AC470
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801AC474
L_801AC478:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801AC478
  c->r[0]=0u+0x00000000u; // 801AC47C
  c->r[3]=c->r[28]|c->r[28]; // 801AC480
  c->r[4]=c->r[29]|c->r[29]; // 801AC484
  W32(c->r[29]+0x00000008u,c->r[0]); // 801AC488
  c->r[0]=R32(c->r[28]+0x00000004u); // 801AC48C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801AC490
  c->lr=0x801AC498u; f_8006306C(c); // 801AC494
  c->r[10]=c->r[31]|c->r[31]; // 801AC498
  c->r[3]=c->r[29]|c->r[29]; // 801AC49C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AC4A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AC4A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AC4A8
  c->r[1]=c->r[10]|c->r[10]; // 801AC4AC
  c->lr=c->r[0]; // 801AC4B0
  return; // 801AC4B4
}

// fn_801AC4B8
void f_801AC4B8(Ctx* __restrict c) {
  trace_call(0x801AC4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC4B8
  c->r[0]=c->lr; // 801AC4BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC4C0
  c->r[11]=c->r[1]+0x00000040u; // 801AC4C4
  c->lr=0x801AC4CCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC4C8
  c->r[31]=c->r[1]|c->r[1]; // 801AC4CC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AC4D0
  c->r[30]=c->r[3]|c->r[3]; // 801AC4D4
  cmps(c,0,(int32_t)c->r[4],0); // 801AC4D8
  if (crb(c,2)) { goto L_801AC4E8; } // 801AC4DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AC4E0
  goto L_801AC4EC; // 801AC4E4
L_801AC4E8:;
  c->r[0]=0u+0x00000000u; // 801AC4E8
L_801AC4EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AC4EC
  if (!crb(c,2)) { goto L_801AC580; } // 801AC4F0
  c->r[29]=0u+0x80690000u; // 801AC4F4
  c->r[3]=c->r[30]|c->r[30]; // 801AC4F8
  c->r[29]=c->r[29]+0x00003520u; // 801AC4FC
  c->r[5]=0u+0x00000000u; // 801AC500
  c->r[4]=c->r[29]+0x00000068u; // 801AC504
  c->lr=0x801AC50Cu; f_801AC164(c); // 801AC508
  c->r[0]=c->r[3]+0xB0B20000u; // 801AC50C
  cmpu(c,0,c->r[0],0x00005F57u); // 801AC510
  if (crb(c,2)) { goto L_801AC524; } // 801AC514
  cmpu(c,0,c->r[0],0x00005F48u); // 801AC518
  if (crb(c,2)) { goto L_801AC554; } // 801AC51C
  goto L_801AC580; // 801AC520
L_801AC524:;
  c->r[4]=0u+0x00010000u; // 801AC524
  c->r[3]=c->r[30]|c->r[30]; // 801AC528
  c->r[4]=c->r[4]+0xFFFFEA75u; // 801AC52C
  c->r[5]=0u+0x00000001u; // 801AC530
  c->lr=0x801AC538u; f_80064744(c); // 801AC534
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC538
  c->r[3]=c->r[30]+0x000005C4u; // 801AC53C
  c->r[4]=c->r[29]+0x00000070u; // 801AC540
  c->r[5]=c->r[30]+0x000001B8u; // 801AC544
  c->r[6]=0u+0x00000000u; // 801AC548
  c->lr=0x801AC550u; f_800E23DC(c); // 801AC54C
  goto L_801AC580; // 801AC550
L_801AC554:;
  c->r[4]=0u+0x00010000u; // 801AC554
  c->r[3]=c->r[30]|c->r[30]; // 801AC558
  c->r[4]=c->r[4]+0xFFFFEA76u; // 801AC55C
  c->r[5]=0u+0x00000001u; // 801AC560
  c->lr=0x801AC568u; f_80064744(c); // 801AC564
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC568
  c->r[3]=c->r[30]+0x000005C4u; // 801AC56C
  c->r[4]=c->r[29]+0x0000007Eu; // 801AC570
  c->r[5]=c->r[30]+0x000001B8u; // 801AC574
  c->r[6]=0u+0x00000000u; // 801AC578
  c->lr=0x801AC580u; f_800E23DC(c); // 801AC57C
L_801AC580:;
  c->r[3]=c->r[30]+0x00000354u; // 801AC580
  c->lr=0x801AC588u; f_800C9374(c); // 801AC584
  c->r[0]=c->r[3]+0x00000000u; // 801AC588
  cmpu(c,0,c->r[0],0x0000EA75u); // 801AC58C
  if (crb(c,2)) { goto L_801AC5A0; } // 801AC590
  cmpu(c,0,c->r[0],0x0000EA76u); // 801AC594
  if (crb(c,2)) { goto L_801AC620; } // 801AC598
  goto L_801AC69C; // 801AC59C
L_801AC5A0:;
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC5A0
  c->r[3]=c->r[30]|c->r[30]; // 801AC5A4
  {uint32_t ea=c->r[2]+0xFFFFC520u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC5A8
  {uint32_t ea=c->r[2]+0xFFFFC524u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AC5AC
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801AC5B0
  c->lr=0x801AC5B8u; f_801AC088(c); // 801AC5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC5B8
  if (crb(c,2)) { goto L_801AC5F4; } // 801AC5BC
  c->r[4]=0u+0x00010000u; // 801AC5C0
  c->r[3]=c->r[30]|c->r[30]; // 801AC5C4
  c->r[4]=c->r[4]+0xFFFFEA7Fu; // 801AC5C8
  c->r[5]=0u+0x00000001u; // 801AC5CC
  c->lr=0x801AC5D4u; f_80064744(c); // 801AC5D0
  c->r[4]=0u+0x80690000u; // 801AC5D4
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC5D8
  c->r[4]=c->r[4]+0x00003520u; // 801AC5DC
  c->r[3]=c->r[30]+0x000005C4u; // 801AC5E0
  c->r[4]=c->r[4]+0x0000008Cu; // 801AC5E4
  c->r[5]=c->r[30]+0x000001B8u; // 801AC5E8
  c->r[6]=0u+0x00000000u; // 801AC5EC
  c->lr=0x801AC5F4u; f_800E23DC(c); // 801AC5F0
L_801AC5F4:;
  {uint32_t ea=c->r[2]+0xFFFFC528u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC5F4
  c->r[3]=c->r[30]|c->r[30]; // 801AC5F8
  c->lr=0x801AC600u; f_80064A68(c); // 801AC5FC
  cmps(c,0,(int32_t)c->r[3],0); // 801AC600
  if (crb(c,2)) { goto L_801AC69C; } // 801AC604
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC608
  c->r[3]=c->r[30]|c->r[30]; // 801AC60C
  c->r[4]=0u+0x00000001u; // 801AC610
  c->r[5]=0u+0xFFFFFFFFu; // 801AC614
  c->lr=0x801AC61Cu; f_80062194(c); // 801AC618
  goto L_801AC69C; // 801AC61C
L_801AC620:;
  {uint32_t ea=c->r[2]+0xFFFFC52Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC620
  c->r[3]=c->r[30]|c->r[30]; // 801AC624
  {uint32_t ea=c->r[2]+0xFFFFC530u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC628
  {uint32_t ea=c->r[2]+0xFFFFC534u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AC62C
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801AC630
  c->lr=0x801AC638u; f_801AC088(c); // 801AC634
  cmps(c,0,(int32_t)c->r[3],0); // 801AC638
  if (crb(c,2)) { goto L_801AC674; } // 801AC63C
  c->r[4]=0u+0x00010000u; // 801AC640
  c->r[3]=c->r[30]|c->r[30]; // 801AC644
  c->r[4]=c->r[4]+0xFFFFEA80u; // 801AC648
  c->r[5]=0u+0x00000001u; // 801AC64C
  c->lr=0x801AC654u; f_80064744(c); // 801AC650
  c->r[4]=0u+0x80690000u; // 801AC654
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC658
  c->r[4]=c->r[4]+0x00003520u; // 801AC65C
  c->r[3]=c->r[30]+0x000005C4u; // 801AC660
  c->r[4]=c->r[4]+0x0000009Au; // 801AC664
  c->r[5]=c->r[30]+0x000001B8u; // 801AC668
  c->r[6]=0u+0x00000000u; // 801AC66C
  c->lr=0x801AC674u; f_800E23DC(c); // 801AC670
L_801AC674:;
  {uint32_t ea=c->r[2]+0xFFFFC538u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC674
  c->r[3]=c->r[30]|c->r[30]; // 801AC678
  c->lr=0x801AC680u; f_80064A68(c); // 801AC67C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC680
  if (crb(c,2)) { goto L_801AC69C; } // 801AC684
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC688
  c->r[3]=c->r[30]|c->r[30]; // 801AC68C
  c->r[4]=0u+0x00000001u; // 801AC690
  c->r[5]=0u+0xFFFFFFFFu; // 801AC694
  c->lr=0x801AC69Cu; f_80062194(c); // 801AC698
L_801AC69C:;
  c->r[3]=c->r[30]+0x00000354u; // 801AC69C
  c->lr=0x801AC6A4u; f_800667AC(c); // 801AC6A0
  cmps(c,0,(int32_t)c->r[3],0); // 801AC6A4
  if (crb(c,2)) { goto L_801AC738; } // 801AC6A8
  c->r[3]=c->r[30]|c->r[30]; // 801AC6AC
  c->lr=0x801AC6B4u; f_8016D6B4(c); // 801AC6B0
  {uint32_t ea=c->r[2]+0xFFFFC53Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AC6B4
  fcmp(c,0,c->f[1],c->f[0]); // 801AC6B8
  if (!crb(c,0)) { goto L_801AC730; } // 801AC6BC
  c->lr=0x801AC6C4u; f_801AAE0C(c); // 801AC6C0
  c->r[4]=c->r[3]|c->r[3]; // 801AC6C4
  c->r[3]=c->r[30]|c->r[30]; // 801AC6C8
  c->lr=0x801AC6D0u; f_80062F4C(c); // 801AC6CC
  c->r[0]=R8(c->r[30]+0x00000010u); // 801AC6D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AC6D4
  c->r[3]=c->r[30]+c->r[0]; // 801AC6D8
  c->r[28]=R32(c->r[3]+0x00000014u); // 801AC6DC
  cmps(c,0,(int32_t)c->r[28],0); // 801AC6E0
  if (crb(c,2)) { goto L_801AC70C; } // 801AC6E4
  c->r[29]=0u+0x00000000u; // 801AC6E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AC6EC
  W8(c->r[31]+0x00000008u,c->r[29]); // 801AC6F0
  c->lr=0x801AC6F8u; f_801AAE0C(c); // 801AC6F4
  W32(c->r[28]+0x00000000u,c->r[3]); // 801AC6F8
  c->r[0]=c->r[13]+0xFFFF8DB0u; // 801AC6FC
  W32(c->r[28]+0x00000004u,c->r[0]); // 801AC700
  W32(c->r[28]+0x00000008u,c->r[29]); // 801AC704
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801AC708
L_801AC70C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801AC70C
  c->r[0]=0u+0x00000000u; // 801AC710
  c->r[3]=c->r[30]|c->r[30]; // 801AC714
  c->r[4]=c->r[28]|c->r[28]; // 801AC718
  W32(c->r[28]+0x00000008u,c->r[0]); // 801AC71C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801AC720
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801AC724
  c->lr=0x801AC72Cu; f_8006306C(c); // 801AC728
  goto L_801AC738; // 801AC72C
L_801AC730:;
  c->r[3]=c->r[30]|c->r[30]; // 801AC730
  c->lr=0x801AC738u; f_801AC414(c); // 801AC734
L_801AC738:;
  c->r[10]=c->r[31]|c->r[31]; // 801AC738
  c->r[11]=c->r[10]+0x00000040u; // 801AC73C
  c->lr=0x801AC744u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AC740
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AC744
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AC748
  c->r[1]=c->r[10]|c->r[10]; // 801AC74C
  c->lr=c->r[0]; // 801AC750
  return; // 801AC754
}

// fn_801AC758
void f_801AC758(Ctx* __restrict c) {
  trace_call(0x801AC758u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC758
  c->r[0]=c->lr; // 801AC75C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC760
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AC764
  c->r[31]=c->r[3]|c->r[3]; // 801AC768
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AC76C
  cmps(c,0,(int32_t)c->r[4],0); // 801AC770
  if (crb(c,2)) { goto L_801AC780; } // 801AC774
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AC778
  goto L_801AC784; // 801AC77C
L_801AC780:;
  c->r[0]=0u+0x00000000u; // 801AC780
L_801AC784:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AC784
  if (!crb(c,2)) { goto L_801AC7AC; } // 801AC788
  c->r[4]=0u+0x80690000u; // 801AC78C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC790
  c->r[4]=c->r[4]+0x00003520u; // 801AC794
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC798
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AC79C
  c->r[4]=c->r[4]+0x000000A8u; // 801AC7A0
  c->r[3]=c->r[3]+0x000005C4u; // 801AC7A4
  c->lr=0x801AC7ACu; f_800E24D0(c); // 801AC7A8
L_801AC7AC:;
  {uint32_t ea=c->r[2]+0xFFFFC544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC7AC
  c->r[3]=c->r[31]+0x000005C4u; // 801AC7B0
  c->lr=0x801AC7B8u; f_800E2B50(c); // 801AC7B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC7B8
  if (crb(c,2)) { goto L_801AC81C; } // 801AC7BC
  c->r[4]=0u+0x00010000u; // 801AC7C0
  c->r[3]=c->r[31]|c->r[31]; // 801AC7C4
  c->r[4]=c->r[4]+0xFFFFEA6Au; // 801AC7C8
  c->r[5]=0u+0x00000001u; // 801AC7CC
  c->lr=0x801AC7D4u; f_80064744(c); // 801AC7D0
  c->r[3]=c->r[1]+0x00000008u; // 801AC7D4
  c->lr=0x801AC7DCu; f_80382F00(c); // 801AC7D8
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC7DC
  c->r[3]=c->r[1]+0x00000008u; // 801AC7E0
  {uint32_t ea=c->r[2]+0xFFFFC548u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC7E4
  c->f[3]=c->f[1]; // 801AC7E8
  c->lr=0x801AC7F0u; f_804E18A0(c); // 801AC7EC
  {uint32_t ea=c->r[2]+0xFFFFC54Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC7F0
  c->r[3]=c->r[1]+0x00000008u; // 801AC7F4
  {uint32_t ea=c->r[2]+0xFFFFC4ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC7F8
  {uint32_t ea=c->r[2]+0xFFFFC550u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AC7FC
  c->lr=0x801AC804u; f_8007E8A8(c); // 801AC800
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801AC804
  c->r[3]=c->r[31]|c->r[31]; // 801AC808
  c->r[4]=c->r[1]+0x00000008u; // 801AC80C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801AC810
  c->ctr=c->r[12]; // 801AC814
  if (true) { c->lr=0x801AC81Cu; dispatch(c,c->ctr); } // 801AC818
L_801AC81C:;
  c->r[3]=c->r[31]+0x00000354u; // 801AC81C
  c->lr=0x801AC824u; f_800667AC(c); // 801AC820
  cmps(c,0,(int32_t)c->r[3],0); // 801AC824
  if (crb(c,2)) { goto L_801AC83C; } // 801AC828
  c->r[4]=0u+0x00010000u; // 801AC82C
  c->r[3]=c->r[31]+0x00000354u; // 801AC830
  c->r[4]=c->r[4]+0xFFFFEA6Au; // 801AC834
  c->lr=0x801AC83Cu; f_800667BC(c); // 801AC838
L_801AC83C:;
  c->r[3]=c->r[31]+0x000005C4u; // 801AC83C
  c->lr=0x801AC844u; f_800E2B1C(c); // 801AC840
  cmps(c,0,(int32_t)c->r[3],0); // 801AC844
  if (crb(c,2)) { goto L_801AC854; } // 801AC848
  c->r[3]=c->r[31]|c->r[31]; // 801AC84C
  c->lr=0x801AC854u; f_8017D89C(c); // 801AC850
L_801AC854:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AC854
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AC858
  c->lr=c->r[0]; // 801AC85C
  c->r[1]=c->r[1]+0x00000040u; // 801AC860
  return; // 801AC864
}

// fn_801AC868
void f_801AC868(Ctx* __restrict c) {
  trace_call(0x801AC868u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC868
  c->r[0]=c->lr; // 801AC86C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC870
  c->r[11]=c->r[1]+0x00000040u; // 801AC874
  c->lr=0x801AC87Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC878
  c->r[31]=c->r[1]|c->r[1]; // 801AC87C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AC880
  c->r[30]=c->r[3]|c->r[3]; // 801AC884
  cmps(c,0,(int32_t)c->r[4],0); // 801AC888
  if (crb(c,2)) { goto L_801AC898; } // 801AC88C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AC890
  goto L_801AC89C; // 801AC894
L_801AC898:;
  c->r[0]=0u+0x00000000u; // 801AC898
L_801AC89C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AC89C
  if (!crb(c,2)) { goto L_801AC968; } // 801AC8A0
  c->r[29]=0u+0x80690000u; // 801AC8A4
  c->r[3]=c->r[30]|c->r[30]; // 801AC8A8
  c->r[29]=c->r[29]+0x00003520u; // 801AC8AC
  c->r[5]=0u+0x00000000u; // 801AC8B0
  c->r[4]=c->r[29]+0x000000BAu; // 801AC8B4
  c->lr=0x801AC8BCu; f_801AC164(c); // 801AC8B8
  c->r[0]=c->r[3]+0xB0B20000u; // 801AC8BC
  cmpu(c,0,c->r[0],0x00005F57u); // 801AC8C0
  if (crb(c,2)) { goto L_801AC8DC; } // 801AC8C4
  cmpu(c,0,c->r[0],0x00005F48u); // 801AC8C8
  if (crb(c,2)) { goto L_801AC90C; } // 801AC8CC
  cmpu(c,0,c->r[0],0x00005F4Fu); // 801AC8D0
  if (crb(c,2)) { goto L_801AC93C; } // 801AC8D4
  goto L_801AC968; // 801AC8D8
L_801AC8DC:;
  c->r[4]=0u+0x00010000u; // 801AC8DC
  c->r[3]=c->r[30]|c->r[30]; // 801AC8E0
  c->r[4]=c->r[4]+0xFFFFEA75u; // 801AC8E4
  c->r[5]=0u+0x00000001u; // 801AC8E8
  c->lr=0x801AC8F0u; f_80064744(c); // 801AC8EC
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC8F0
  c->r[3]=c->r[30]+0x000005C4u; // 801AC8F4
  c->r[4]=c->r[29]+0x00000070u; // 801AC8F8
  c->r[5]=c->r[30]+0x000001B8u; // 801AC8FC
  c->r[6]=0u+0x00000000u; // 801AC900
  c->lr=0x801AC908u; f_800E23DC(c); // 801AC904
  goto L_801AC968; // 801AC908
L_801AC90C:;
  c->r[4]=0u+0x00010000u; // 801AC90C
  c->r[3]=c->r[30]|c->r[30]; // 801AC910
  c->r[4]=c->r[4]+0xFFFFEA76u; // 801AC914
  c->r[5]=0u+0x00000001u; // 801AC918
  c->lr=0x801AC920u; f_80064744(c); // 801AC91C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC920
  c->r[3]=c->r[30]+0x000005C4u; // 801AC924
  c->r[4]=c->r[29]+0x0000007Eu; // 801AC928
  c->r[5]=c->r[30]+0x000001B8u; // 801AC92C
  c->r[6]=0u+0x00000000u; // 801AC930
  c->lr=0x801AC938u; f_800E23DC(c); // 801AC934
  goto L_801AC968; // 801AC938
L_801AC93C:;
  c->r[4]=0u+0x00010000u; // 801AC93C
  c->r[3]=c->r[30]|c->r[30]; // 801AC940
  c->r[4]=c->r[4]+0xFFFFEA77u; // 801AC944
  c->r[5]=0u+0x00000001u; // 801AC948
  c->lr=0x801AC950u; f_80064744(c); // 801AC94C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC950
  c->r[3]=c->r[30]+0x000005C4u; // 801AC954
  c->r[4]=c->r[29]+0x000000C2u; // 801AC958
  c->r[5]=c->r[30]+0x000001B8u; // 801AC95C
  c->r[6]=0u+0x00000000u; // 801AC960
  c->lr=0x801AC968u; f_800E23DC(c); // 801AC964
L_801AC968:;
  c->r[3]=c->r[30]+0x00000354u; // 801AC968
  c->lr=0x801AC970u; f_800C9374(c); // 801AC96C
  c->r[0]=c->r[3]+0x00000000u; // 801AC970
  cmpu(c,0,c->r[0],0x0000EA75u); // 801AC974
  if (crb(c,2)) { goto L_801AC990; } // 801AC978
  cmpu(c,0,c->r[0],0x0000EA76u); // 801AC97C
  if (crb(c,2)) { goto L_801ACA3C; } // 801AC980
  cmpu(c,0,c->r[0],0x0000EA77u); // 801AC984
  if (crb(c,2)) { goto L_801ACAE8; } // 801AC988
  goto L_801ACB90; // 801AC98C
L_801AC990:;
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC990
  c->r[3]=c->r[30]|c->r[30]; // 801AC994
  {uint32_t ea=c->r[2]+0xFFFFC520u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AC998
  {uint32_t ea=c->r[2]+0xFFFFC524u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AC99C
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801AC9A0
  c->lr=0x801AC9A8u; f_801AC088(c); // 801AC9A4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC9A8
  if (crb(c,2)) { goto L_801ACA10; } // 801AC9AC
  c->r[3]=c->r[30]|c->r[30]; // 801AC9B0
  c->lr=0x801AC9B8u; f_8016D6B4(c); // 801AC9B4
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AC9B8
  fcmp(c,0,c->f[1],c->f[0]); // 801AC9BC
  if (!crb(c,0)) { goto L_801AC9DC; } // 801AC9C0
  c->r[4]=0u+0x00010000u; // 801AC9C4
  c->r[3]=c->r[30]|c->r[30]; // 801AC9C8
  c->r[4]=c->r[4]+0xFFFFEA83u; // 801AC9CC
  c->r[5]=0u+0x00000001u; // 801AC9D0
  c->lr=0x801AC9D8u; f_80064744(c); // 801AC9D4
  goto L_801AC9F0; // 801AC9D8
L_801AC9DC:;
  c->r[4]=0u+0x00010000u; // 801AC9DC
  c->r[3]=c->r[30]|c->r[30]; // 801AC9E0
  c->r[4]=c->r[4]+0xFFFFEA7Fu; // 801AC9E4
  c->r[5]=0u+0x00000001u; // 801AC9E8
  c->lr=0x801AC9F0u; f_80064744(c); // 801AC9EC
L_801AC9F0:;
  c->r[4]=0u+0x80690000u; // 801AC9F0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AC9F4
  c->r[4]=c->r[4]+0x00003520u; // 801AC9F8
  c->r[3]=c->r[30]+0x000005C4u; // 801AC9FC
  c->r[4]=c->r[4]+0x0000008Cu; // 801ACA00
  c->r[5]=c->r[30]+0x000001B8u; // 801ACA04
  c->r[6]=0u+0x00000000u; // 801ACA08
  c->lr=0x801ACA10u; f_800E23DC(c); // 801ACA0C
L_801ACA10:;
  {uint32_t ea=c->r[2]+0xFFFFC528u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACA10
  c->r[3]=c->r[30]|c->r[30]; // 801ACA14
  c->lr=0x801ACA1Cu; f_80064A68(c); // 801ACA18
  cmps(c,0,(int32_t)c->r[3],0); // 801ACA1C
  if (crb(c,2)) { goto L_801ACB90; } // 801ACA20
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACA24
  c->r[3]=c->r[30]|c->r[30]; // 801ACA28
  c->r[4]=0u+0x00000001u; // 801ACA2C
  c->r[5]=0u+0xFFFFFFFFu; // 801ACA30
  c->lr=0x801ACA38u; f_80062194(c); // 801ACA34
  goto L_801ACB90; // 801ACA38
L_801ACA3C:;
  {uint32_t ea=c->r[2]+0xFFFFC52Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACA3C
  c->r[3]=c->r[30]|c->r[30]; // 801ACA40
  {uint32_t ea=c->r[2]+0xFFFFC530u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACA44
  {uint32_t ea=c->r[2]+0xFFFFC534u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACA48
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801ACA4C
  c->lr=0x801ACA54u; f_801AC088(c); // 801ACA50
  cmps(c,0,(int32_t)c->r[3],0); // 801ACA54
  if (crb(c,2)) { goto L_801ACABC; } // 801ACA58
  c->r[3]=c->r[30]|c->r[30]; // 801ACA5C
  c->lr=0x801ACA64u; f_8016D6B4(c); // 801ACA60
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ACA64
  fcmp(c,0,c->f[1],c->f[0]); // 801ACA68
  if (!crb(c,0)) { goto L_801ACA88; } // 801ACA6C
  c->r[4]=0u+0x00010000u; // 801ACA70
  c->r[3]=c->r[30]|c->r[30]; // 801ACA74
  c->r[4]=c->r[4]+0xFFFFEA83u; // 801ACA78
  c->r[5]=0u+0x00000001u; // 801ACA7C
  c->lr=0x801ACA84u; f_80064744(c); // 801ACA80
  goto L_801ACA9C; // 801ACA84
L_801ACA88:;
  c->r[4]=0u+0x00010000u; // 801ACA88
  c->r[3]=c->r[30]|c->r[30]; // 801ACA8C
  c->r[4]=c->r[4]+0xFFFFEA80u; // 801ACA90
  c->r[5]=0u+0x00000001u; // 801ACA94
  c->lr=0x801ACA9Cu; f_80064744(c); // 801ACA98
L_801ACA9C:;
  c->r[4]=0u+0x80690000u; // 801ACA9C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACAA0
  c->r[4]=c->r[4]+0x00003520u; // 801ACAA4
  c->r[3]=c->r[30]+0x000005C4u; // 801ACAA8
  c->r[4]=c->r[4]+0x0000009Au; // 801ACAAC
  c->r[5]=c->r[30]+0x000001B8u; // 801ACAB0
  c->r[6]=0u+0x00000000u; // 801ACAB4
  c->lr=0x801ACABCu; f_800E23DC(c); // 801ACAB8
L_801ACABC:;
  {uint32_t ea=c->r[2]+0xFFFFC538u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACABC
  c->r[3]=c->r[30]|c->r[30]; // 801ACAC0
  c->lr=0x801ACAC8u; f_80064A68(c); // 801ACAC4
  cmps(c,0,(int32_t)c->r[3],0); // 801ACAC8
  if (crb(c,2)) { goto L_801ACB90; } // 801ACACC
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACAD0
  c->r[3]=c->r[30]|c->r[30]; // 801ACAD4
  c->r[4]=0u+0x00000001u; // 801ACAD8
  c->r[5]=0u+0xFFFFFFFFu; // 801ACADC
  c->lr=0x801ACAE4u; f_80062194(c); // 801ACAE0
  goto L_801ACB90; // 801ACAE4
L_801ACAE8:;
  {uint32_t ea=c->r[2]+0xFFFFC554u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACAE8
  c->r[3]=c->r[30]|c->r[30]; // 801ACAEC
  {uint32_t ea=c->r[2]+0xFFFFC558u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACAF0
  {uint32_t ea=c->r[2]+0xFFFFC55Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACAF4
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801ACAF8
  c->lr=0x801ACB00u; f_801AC088(c); // 801ACAFC
  cmps(c,0,(int32_t)c->r[3],0); // 801ACB00
  if (crb(c,2)) { goto L_801ACB68; } // 801ACB04
  c->r[3]=c->r[30]|c->r[30]; // 801ACB08
  c->lr=0x801ACB10u; f_8016D6B4(c); // 801ACB0C
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ACB10
  fcmp(c,0,c->f[1],c->f[0]); // 801ACB14
  if (!crb(c,0)) { goto L_801ACB34; } // 801ACB18
  c->r[4]=0u+0x00010000u; // 801ACB1C
  c->r[3]=c->r[30]|c->r[30]; // 801ACB20
  c->r[4]=c->r[4]+0xFFFFEA83u; // 801ACB24
  c->r[5]=0u+0x00000001u; // 801ACB28
  c->lr=0x801ACB30u; f_80064744(c); // 801ACB2C
  goto L_801ACB48; // 801ACB30
L_801ACB34:;
  c->r[4]=0u+0x00010000u; // 801ACB34
  c->r[3]=c->r[30]|c->r[30]; // 801ACB38
  c->r[4]=c->r[4]+0xFFFFEA81u; // 801ACB3C
  c->r[5]=0u+0x00000001u; // 801ACB40
  c->lr=0x801ACB48u; f_80064744(c); // 801ACB44
L_801ACB48:;
  c->r[4]=0u+0x80690000u; // 801ACB48
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACB4C
  c->r[4]=c->r[4]+0x00003520u; // 801ACB50
  c->r[3]=c->r[30]+0x000005C4u; // 801ACB54
  c->r[4]=c->r[4]+0x000000D0u; // 801ACB58
  c->r[5]=c->r[30]+0x000001B8u; // 801ACB5C
  c->r[6]=0u+0x00000000u; // 801ACB60
  c->lr=0x801ACB68u; f_800E23DC(c); // 801ACB64
L_801ACB68:;
  {uint32_t ea=c->r[2]+0xFFFFC560u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACB68
  c->r[3]=c->r[30]|c->r[30]; // 801ACB6C
  c->lr=0x801ACB74u; f_80064A68(c); // 801ACB70
  cmps(c,0,(int32_t)c->r[3],0); // 801ACB74
  if (crb(c,2)) { goto L_801ACB90; } // 801ACB78
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACB7C
  c->r[3]=c->r[30]|c->r[30]; // 801ACB80
  c->r[4]=0u+0x00000001u; // 801ACB84
  c->r[5]=0u+0xFFFFFFFFu; // 801ACB88
  c->lr=0x801ACB90u; f_80062194(c); // 801ACB8C
L_801ACB90:;
  c->r[3]=c->r[30]+0x00000354u; // 801ACB90
  c->lr=0x801ACB98u; f_800667AC(c); // 801ACB94
  cmps(c,0,(int32_t)c->r[3],0); // 801ACB98
  if (crb(c,2)) { goto L_801ACC30; } // 801ACB9C
  c->r[4]=0u+0x00010000u; // 801ACBA0
  c->r[3]=c->r[30]+0x00000354u; // 801ACBA4
  c->r[4]=c->r[4]+0xFFFFEA83u; // 801ACBA8
  c->lr=0x801ACBB0u; f_800667BC(c); // 801ACBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801ACBB0
  if (crb(c,2)) { goto L_801ACC28; } // 801ACBB4
  c->lr=0x801ACBBCu; f_801AADD8(c); // 801ACBB8
  c->r[4]=c->r[3]|c->r[3]; // 801ACBBC
  c->r[3]=c->r[30]|c->r[30]; // 801ACBC0
  c->lr=0x801ACBC8u; f_80062F4C(c); // 801ACBC4
  c->r[0]=R8(c->r[30]+0x00000010u); // 801ACBC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ACBCC
  c->r[3]=c->r[30]+c->r[0]; // 801ACBD0
  c->r[28]=R32(c->r[3]+0x00000014u); // 801ACBD4
  cmps(c,0,(int32_t)c->r[28],0); // 801ACBD8
  if (crb(c,2)) { goto L_801ACC04; } // 801ACBDC
  c->r[29]=0u+0x00000000u; // 801ACBE0
  W32(c->r[31]+0x00000024u,c->r[1]); // 801ACBE4
  W8(c->r[31]+0x00000008u,c->r[29]); // 801ACBE8
  c->lr=0x801ACBF0u; f_801AADD8(c); // 801ACBEC
  W32(c->r[28]+0x00000000u,c->r[3]); // 801ACBF0
  c->r[0]=c->r[13]+0xFFFF8DACu; // 801ACBF4
  W32(c->r[28]+0x00000004u,c->r[0]); // 801ACBF8
  W32(c->r[28]+0x00000008u,c->r[29]); // 801ACBFC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801ACC00
L_801ACC04:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801ACC04
  c->r[0]=0u+0x00000000u; // 801ACC08
  c->r[3]=c->r[30]|c->r[30]; // 801ACC0C
  c->r[4]=c->r[28]|c->r[28]; // 801ACC10
  W32(c->r[28]+0x00000008u,c->r[0]); // 801ACC14
  c->r[0]=R32(c->r[30]+0x00000004u); // 801ACC18
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801ACC1C
  c->lr=0x801ACC24u; f_8006306C(c); // 801ACC20
  goto L_801ACC30; // 801ACC24
L_801ACC28:;
  c->r[3]=c->r[30]|c->r[30]; // 801ACC28
  c->lr=0x801ACC30u; f_8017D89C(c); // 801ACC2C
L_801ACC30:;
  c->r[10]=c->r[31]|c->r[31]; // 801ACC30
  c->r[11]=c->r[10]+0x00000040u; // 801ACC34
  c->lr=0x801ACC3Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ACC38
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ACC3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ACC40
  c->r[1]=c->r[10]|c->r[10]; // 801ACC44
  c->lr=c->r[0]; // 801ACC48
  return; // 801ACC4C
}

// fn_801ACC50
void f_801ACC50(Ctx* __restrict c) {
  trace_call(0x801ACC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACC50
  c->r[0]=c->lr; // 801ACC54
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ACC58
  c->r[11]=c->r[1]+0x00000050u; // 801ACC5C
  c->lr=0x801ACC64u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ACC60
  c->r[5]=R32(c->r[3]+0x00000004u); // 801ACC64
  c->r[31]=c->r[3]|c->r[3]; // 801ACC68
  c->r[29]=c->r[4]|c->r[4]; // 801ACC6C
  cmps(c,0,(int32_t)c->r[5],0); // 801ACC70
  if (crb(c,2)) { goto L_801ACC80; } // 801ACC74
  c->r[0]=R32(c->r[5]+0x00000008u); // 801ACC78
  goto L_801ACC84; // 801ACC7C
L_801ACC80:;
  c->r[0]=0u+0x00000000u; // 801ACC80
L_801ACC84:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ACC84
  if (!crb(c,2)) { goto L_801ACC9C; } // 801ACC88
  c->r[0]=0u+0x00000003u; // 801ACC8C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801ACC90
  c->r[0]=0u+0x00000001u; // 801ACC94
  W32(c->r[3]+0x0000055Cu,c->r[0]); // 801ACC98
L_801ACC9C:;
  c->r[4]=0u+0x00010000u; // 801ACC9C
  c->r[3]=c->r[3]+0x00000354u; // 801ACCA0
  c->r[4]=c->r[4]+0xFFFFEA83u; // 801ACCA4
  c->lr=0x801ACCACu; f_800667BC(c); // 801ACCA8
  cmps(c,0,(int32_t)c->r[3],0); // 801ACCAC
  if (crb(c,2)) { goto L_801ACCF8; } // 801ACCB0
  c->r[3]=c->r[31]+0x00000354u; // 801ACCB4
  c->lr=0x801ACCBCu; f_800667AC(c); // 801ACCB8
  cmps(c,0,(int32_t)c->r[3],0); // 801ACCBC
  if (crb(c,2)) { goto L_801ACCF8; } // 801ACCC0
  c->r[0]=R32(c->r[31]+0x0000055Cu); // 801ACCC4
  cmps(c,0,(int32_t)c->r[0],0); // 801ACCC8
  if (crb(c,2)) { goto L_801ACCF8; } // 801ACCCC
  c->r[4]=0u+0x80690000u; // 801ACCD0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACCD4
  c->r[4]=c->r[4]+0x00003520u; // 801ACCD8
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACCDC
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACCE0
  c->r[3]=c->r[31]+0x000005C4u; // 801ACCE4
  c->r[4]=c->r[4]+0x000000DEu; // 801ACCE8
  c->lr=0x801ACCF0u; f_800E24D0(c); // 801ACCEC
  c->r[0]=0u+0x00000000u; // 801ACCF0
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 801ACCF4
L_801ACCF8:;
  c->r[4]=0u+0x80690000u; // 801ACCF8
  c->r[3]=c->r[31]+0x000005C4u; // 801ACCFC
  c->r[4]=c->r[4]+0x00003520u; // 801ACD00
  c->r[4]=c->r[4]+0x000000DEu; // 801ACD04
  c->lr=0x801ACD0Cu; f_800E2ACC(c); // 801ACD08
  cmps(c,0,(int32_t)c->r[3],0); // 801ACD0C
  if (crb(c,2)) { goto L_801ACE84; } // 801ACD10
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACD14
  c->r[3]=c->r[31]+0x000005C4u; // 801ACD18
  c->lr=0x801ACD20u; f_800E2B50(c); // 801ACD1C
  cmps(c,0,(int32_t)c->r[3],0); // 801ACD20
  if (crb(c,2)) { goto L_801ACD84; } // 801ACD24
  c->r[4]=0u+0x00010000u; // 801ACD28
  c->r[3]=c->r[31]|c->r[31]; // 801ACD2C
  c->r[4]=c->r[4]+0xFFFFEA6Bu; // 801ACD30
  c->r[5]=0u+0x00000001u; // 801ACD34
  c->lr=0x801ACD3Cu; f_80064744(c); // 801ACD38
  c->r[3]=c->r[1]+0x00000010u; // 801ACD3C
  c->lr=0x801ACD44u; f_80382F00(c); // 801ACD40
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACD44
  c->r[3]=c->r[1]+0x00000010u; // 801ACD48
  {uint32_t ea=c->r[2]+0xFFFFC564u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACD4C
  c->f[3]=c->f[1]; // 801ACD50
  c->lr=0x801ACD58u; f_804E18A0(c); // 801ACD54
  {uint32_t ea=c->r[2]+0xFFFFC568u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACD58
  c->r[3]=c->r[1]+0x00000010u; // 801ACD5C
  {uint32_t ea=c->r[2]+0xFFFFC4ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACD60
  {uint32_t ea=c->r[2]+0xFFFFC56Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACD64
  c->lr=0x801ACD6Cu; f_8007E8A8(c); // 801ACD68
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801ACD6C
  c->r[3]=c->r[31]|c->r[31]; // 801ACD70
  c->r[4]=c->r[1]+0x00000010u; // 801ACD74
  c->r[12]=R32(c->r[12]+0x00000020u); // 801ACD78
  c->ctr=c->r[12]; // 801ACD7C
  if (true) { c->lr=0x801ACD84u; dispatch(c,c->ctr); } // 801ACD80
L_801ACD84:;
  {uint32_t ea=c->r[2]+0xFFFFC570u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACD84
  c->r[3]=c->r[31]|c->r[31]; // 801ACD88
  {uint32_t ea=c->r[2]+0xFFFFC574u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACD8C
  c->lr=0x801ACD94u; f_801ABF5C(c); // 801ACD90
  cmps(c,0,(int32_t)c->r[3],2); // 801ACD94
  if (!crb(c,2)) { goto L_801ACDA4; } // 801ACD98
  c->r[0]=0u+0x00000002u; // 801ACD9C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801ACDA0
L_801ACDA4:;
  {uint32_t ea=c->r[2]+0xFFFFC578u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACDA4
  c->r[3]=c->r[31]+0x000005C4u; // 801ACDA8
  c->lr=0x801ACDB0u; f_800E2B50(c); // 801ACDAC
  cmps(c,0,(int32_t)c->r[3],0); // 801ACDB0
  if (crb(c,2)) { goto L_801ACDE8; } // 801ACDB4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801ACDB8
  cmps(c,0,(int32_t)c->r[0],2); // 801ACDBC
  if (!crb(c,2)) { goto L_801ACDE8; } // 801ACDC0
  c->r[4]=0u+0x80690000u; // 801ACDC4
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACDC8
  c->r[4]=c->r[4]+0x00003520u; // 801ACDCC
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACDD0
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACDD4
  c->r[3]=c->r[31]+0x000005C4u; // 801ACDD8
  c->r[4]=c->r[4]+0x000000F0u; // 801ACDDC
  c->lr=0x801ACDE4u; f_800E24D0(c); // 801ACDE0
  goto L_801ACE28; // 801ACDE4
L_801ACDE8:;
  {uint32_t ea=c->r[2]+0xFFFFC57Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACDE8
  c->r[3]=c->r[31]+0x000005C4u; // 801ACDEC
  c->lr=0x801ACDF4u; f_800E2B50(c); // 801ACDF0
  cmps(c,0,(int32_t)c->r[3],0); // 801ACDF4
  if (crb(c,2)) { goto L_801ACE28; } // 801ACDF8
  c->r[5]=0u+0x80690000u; // 801ACDFC
  c->r[3]=c->r[31]|c->r[31]; // 801ACE00
  c->r[5]=c->r[5]+0x00003520u; // 801ACE04
  c->r[4]=c->r[5]+0x000000FFu; // 801ACE08
  c->r[5]=c->r[5]+0x00000107u; // 801ACE0C
  c->lr=0x801ACE14u; f_801AC164(c); // 801ACE10
  {uint32_t ea=c->r[31]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACE14
  c->r[3]=c->r[31]|c->r[31]; // 801ACE18
  c->r[4]=0u+0x00000001u; // 801ACE1C
  c->r[5]=0u+0xFFFFFFFFu; // 801ACE20
  c->lr=0x801ACE28u; f_80062194(c); // 801ACE24
L_801ACE28:;
  {uint32_t ea=c->r[2]+0xFFFFC580u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACE28
  c->r[3]=c->r[31]+0x000005C4u; // 801ACE2C
  c->lr=0x801ACE34u; f_800E2B50(c); // 801ACE30
  cmps(c,0,(int32_t)c->r[3],0); // 801ACE34
  if (crb(c,2)) { goto L_801ACE6C; } // 801ACE38
  c->lr=0x801ACE40u; f_80349570(c); // 801ACE3C
  c->r[3]=c->r[3]+0x00010000u; // 801ACE40
  c->r[0]=0u+0x00000000u; // 801ACE44
  c->r[30]=R32(c->r[3]+0xFFFF83F4u); // 801ACE48
  c->r[3]=c->r[1]+0x0000000Cu; // 801ACE4C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801ACE50
  c->lr=0x801ACE58u; f_8004E228(c); // 801ACE54
  c->r[5]=0u+0x80690000u; // 801ACE58
  c->r[4]=c->r[30]|c->r[30]; // 801ACE5C
  c->r[5]=c->r[5]+0x00003520u; // 801ACE60
  c->r[5]=c->r[5]+0x0000010Cu; // 801ACE64
  c->lr=0x801ACE6Cu; f_80075FE0(c); // 801ACE68
L_801ACE6C:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ACE6C
  c->lr=0x801ACE74u; f_800E2B1C(c); // 801ACE70
  cmps(c,0,(int32_t)c->r[3],0); // 801ACE74
  if (crb(c,2)) { goto L_801ACE84; } // 801ACE78
  c->r[3]=c->r[31]|c->r[31]; // 801ACE7C
  c->lr=0x801ACE84u; f_8017DBD0(c); // 801ACE80
L_801ACE84:;
  c->r[30]=0u+0x80690000u; // 801ACE84
  c->r[3]=c->r[31]+0x000005C4u; // 801ACE88
  c->r[30]=c->r[30]+0x00003520u; // 801ACE8C
  c->r[4]=c->r[30]+0x000000F0u; // 801ACE90
  c->lr=0x801ACE98u; f_800E2ACC(c); // 801ACE94
  cmps(c,0,(int32_t)c->r[3],0); // 801ACE98
  if (crb(c,2)) { goto L_801ACEF4; } // 801ACE9C
  {uint32_t ea=c->r[2]+0xFFFFC514u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACEA0
  c->r[3]=c->r[31]+0x000005C4u; // 801ACEA4
  c->lr=0x801ACEACu; f_800E2B50(c); // 801ACEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801ACEAC
  if (crb(c,2)) { goto L_801ACEDC; } // 801ACEB0
  c->lr=0x801ACEB8u; f_80349570(c); // 801ACEB4
  c->r[3]=c->r[3]+0x00010000u; // 801ACEB8
  c->r[0]=0u+0x00000000u; // 801ACEBC
  c->r[29]=R32(c->r[3]+0xFFFF83F4u); // 801ACEC0
  c->r[3]=c->r[1]+0x00000008u; // 801ACEC4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801ACEC8
  c->lr=0x801ACED0u; f_8004E228(c); // 801ACECC
  c->r[4]=c->r[29]|c->r[29]; // 801ACED0
  c->r[5]=c->r[30]+0x0000010Cu; // 801ACED4
  c->lr=0x801ACEDCu; f_80075FE0(c); // 801ACED8
L_801ACEDC:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ACEDC
  c->lr=0x801ACEE4u; f_800E2B1C(c); // 801ACEE0
  cmps(c,0,(int32_t)c->r[3],0); // 801ACEE4
  if (crb(c,2)) { goto L_801ACEF4; } // 801ACEE8
  c->r[3]=c->r[31]|c->r[31]; // 801ACEEC
  c->lr=0x801ACEF4u; f_8017DBD0(c); // 801ACEF0
L_801ACEF4:;
  c->r[11]=c->r[1]+0x00000050u; // 801ACEF4
  c->lr=0x801ACEFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ACEF8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801ACEFC
  c->lr=c->r[0]; // 801ACF00
  c->r[1]=c->r[1]+0x00000050u; // 801ACF04
  return; // 801ACF08
}

// fn_801ACF0C
void f_801ACF0C(Ctx* __restrict c) {
  trace_call(0x801ACF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACF0C
  c->r[0]=c->lr; // 801ACF10
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ACF14
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ACF18
  c->r[31]=c->r[4]|c->r[4]; // 801ACF1C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801ACF20
  c->r[30]=c->r[3]|c->r[3]; // 801ACF24
  c->r[5]=R32(c->r[3]+0x00000004u); // 801ACF28
  cmps(c,0,(int32_t)c->r[5],0); // 801ACF2C
  if (crb(c,2)) { goto L_801ACF3C; } // 801ACF30
  c->r[0]=R32(c->r[5]+0x00000008u); // 801ACF34
  goto L_801ACF40; // 801ACF38
L_801ACF3C:;
  c->r[0]=0u+0x00000000u; // 801ACF3C
L_801ACF40:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ACF40
  if (!crb(c,2)) { goto L_801ACF70; } // 801ACF44
  c->r[5]=0u+0x80690000u; // 801ACF48
  c->r[0]=0u+0x00000003u; // 801ACF4C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801ACF50
  c->r[5]=c->r[5]+0x00003520u; // 801ACF54
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACF58
  c->r[4]=c->r[5]+0x0000011Bu; // 801ACF5C
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ACF60
  c->r[3]=c->r[3]+0x000005C4u; // 801ACF64
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ACF68
  c->lr=0x801ACF70u; f_800E24D0(c); // 801ACF6C
L_801ACF70:;
  c->r[4]=0u+0x80690000u; // 801ACF70
  c->r[3]=c->r[30]+0x000005C4u; // 801ACF74
  c->r[4]=c->r[4]+0x00003520u; // 801ACF78
  c->r[4]=c->r[4]+0x0000011Bu; // 801ACF7C
  c->lr=0x801ACF84u; f_800E2ACC(c); // 801ACF80
  cmps(c,0,(int32_t)c->r[3],0); // 801ACF84
  if (crb(c,2)) { goto L_801AD0B4; } // 801ACF88
  {uint32_t ea=c->r[2]+0xFFFFC544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACF8C
  c->r[3]=c->r[30]+0x000005C4u; // 801ACF90
  c->lr=0x801ACF98u; f_800E2B50(c); // 801ACF94
  cmps(c,0,(int32_t)c->r[3],0); // 801ACF98
  if (crb(c,2)) { goto L_801ACFFC; } // 801ACF9C
  c->r[4]=0u+0x00010000u; // 801ACFA0
  c->r[3]=c->r[30]|c->r[30]; // 801ACFA4
  c->r[4]=c->r[4]+0xFFFFEA6Cu; // 801ACFA8
  c->r[5]=0u+0x00000001u; // 801ACFAC
  c->lr=0x801ACFB4u; f_80064744(c); // 801ACFB0
  c->r[3]=c->r[1]+0x00000008u; // 801ACFB4
  c->lr=0x801ACFBCu; f_80382F00(c); // 801ACFB8
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACFBC
  c->r[3]=c->r[1]+0x00000008u; // 801ACFC0
  c->f[2]=c->f[1]; // 801ACFC4
  c->f[3]=c->f[1]; // 801ACFC8
  c->lr=0x801ACFD0u; f_804E18A0(c); // 801ACFCC
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACFD0
  c->r[3]=c->r[1]+0x00000008u; // 801ACFD4
  c->f[2]=c->f[1]; // 801ACFD8
  c->f[3]=c->f[1]; // 801ACFDC
  c->lr=0x801ACFE4u; f_8007E8A8(c); // 801ACFE0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801ACFE4
  c->r[3]=c->r[30]|c->r[30]; // 801ACFE8
  c->r[4]=c->r[1]+0x00000008u; // 801ACFEC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801ACFF0
  c->ctr=c->r[12]; // 801ACFF4
  if (true) { c->lr=0x801ACFFCu; dispatch(c,c->ctr); } // 801ACFF8
L_801ACFFC:;
  {uint32_t ea=c->r[2]+0xFFFFC584u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ACFFC
  c->r[3]=c->r[30]|c->r[30]; // 801AD000
  {uint32_t ea=c->r[2]+0xFFFFC588u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD004
  c->lr=0x801AD00Cu; f_801ABF5C(c); // 801AD008
  cmps(c,0,(int32_t)c->r[3],2); // 801AD00C
  if (!crb(c,2)) { goto L_801AD01C; } // 801AD010
  c->r[0]=0u+0x00000002u; // 801AD014
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801AD018
L_801AD01C:;
  {uint32_t ea=c->r[2]+0xFFFFC58Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD01C
  c->r[3]=c->r[30]+0x000005C4u; // 801AD020
  c->lr=0x801AD028u; f_800E2B50(c); // 801AD024
  cmps(c,0,(int32_t)c->r[3],0); // 801AD028
  if (crb(c,2)) { goto L_801AD05C; } // 801AD02C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801AD030
  cmps(c,0,(int32_t)c->r[0],2); // 801AD034
  if (!crb(c,2)) { goto L_801AD05C; } // 801AD038
  c->r[4]=0u+0x80690000u; // 801AD03C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD040
  c->r[4]=c->r[4]+0x00003520u; // 801AD044
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD048
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD04C
  c->r[3]=c->r[30]+0x000005C4u; // 801AD050
  c->r[4]=c->r[4]+0x0000012Du; // 801AD054
  c->lr=0x801AD05Cu; f_800E24D0(c); // 801AD058
L_801AD05C:;
  {uint32_t ea=c->r[2]+0xFFFFC590u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD05C
  c->r[3]=c->r[30]+0x000005C4u; // 801AD060
  c->lr=0x801AD068u; f_800E2B50(c); // 801AD064
  cmps(c,0,(int32_t)c->r[3],0); // 801AD068
  if (crb(c,2)) { goto L_801AD09C; } // 801AD06C
  c->r[5]=0u+0x80690000u; // 801AD070
  c->r[3]=c->r[30]|c->r[30]; // 801AD074
  c->r[5]=c->r[5]+0x00003520u; // 801AD078
  c->r[4]=c->r[5]+0x000000FFu; // 801AD07C
  c->r[5]=c->r[5]+0x0000013Cu; // 801AD080
  c->lr=0x801AD088u; f_801AC164(c); // 801AD084
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD088
  c->r[3]=c->r[30]|c->r[30]; // 801AD08C
  c->r[4]=0u+0x00000001u; // 801AD090
  c->r[5]=0u+0xFFFFFFFFu; // 801AD094
  c->lr=0x801AD09Cu; f_80062194(c); // 801AD098
L_801AD09C:;
  c->r[3]=c->r[30]+0x000005C4u; // 801AD09C
  c->lr=0x801AD0A4u; f_800E2B1C(c); // 801AD0A0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD0A4
  if (crb(c,2)) { goto L_801AD0B4; } // 801AD0A8
  c->r[3]=c->r[30]|c->r[30]; // 801AD0AC
  c->lr=0x801AD0B4u; f_8017DE74(c); // 801AD0B0
L_801AD0B4:;
  c->r[4]=0u+0x80690000u; // 801AD0B4
  c->r[3]=c->r[30]+0x000005C4u; // 801AD0B8
  c->r[4]=c->r[4]+0x00003520u; // 801AD0BC
  c->r[4]=c->r[4]+0x0000012Du; // 801AD0C0
  c->lr=0x801AD0C8u; f_800E2ACC(c); // 801AD0C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD0C8
  if (crb(c,2)) { goto L_801AD0E8; } // 801AD0CC
  c->r[3]=c->r[30]+0x000005C4u; // 801AD0D0
  c->lr=0x801AD0D8u; f_800E2B1C(c); // 801AD0D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD0D8
  if (crb(c,2)) { goto L_801AD0E8; } // 801AD0DC
  c->r[3]=c->r[30]|c->r[30]; // 801AD0E0
  c->lr=0x801AD0E8u; f_8017DE74(c); // 801AD0E4
L_801AD0E8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AD0E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AD0EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AD0F0
  c->lr=c->r[0]; // 801AD0F4
  c->r[1]=c->r[1]+0x00000040u; // 801AD0F8
  return; // 801AD0FC
}

// fn_801AD100
void f_801AD100(Ctx* __restrict c) {
  trace_call(0x801AD100u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD100
  c->r[0]=c->lr; // 801AD104
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AD108
  c->r[11]=c->r[1]+0x00000040u; // 801AD10C
  c->lr=0x801AD114u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD110
  c->r[31]=c->r[1]|c->r[1]; // 801AD114
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD118
  c->r[28]=c->r[3]|c->r[3]; // 801AD11C
  cmps(c,0,(int32_t)c->r[4],0); // 801AD120
  if (crb(c,2)) { goto L_801AD130; } // 801AD124
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AD128
  goto L_801AD134; // 801AD12C
L_801AD130:;
  c->r[0]=0u+0x00000000u; // 801AD130
L_801AD134:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD134
  if (!crb(c,2)) { goto L_801AD170; } // 801AD138
  c->r[4]=0u+0x00010000u; // 801AD13C
  c->r[3]=c->r[28]|c->r[28]; // 801AD140
  c->r[4]=c->r[4]+0xFFFFEA6Du; // 801AD144
  c->r[5]=0u+0x00000001u; // 801AD148
  c->lr=0x801AD150u; f_80064744(c); // 801AD14C
  c->r[4]=0u+0x80690000u; // 801AD150
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD154
  c->r[4]=c->r[4]+0x00003520u; // 801AD158
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD15C
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD160
  c->r[3]=c->r[28]+0x000005C4u; // 801AD164
  c->r[4]=c->r[4]+0x00000141u; // 801AD168
  c->lr=0x801AD170u; f_800E24D0(c); // 801AD16C
L_801AD170:;
  c->r[3]=c->r[28]+0x000005C4u; // 801AD170
  c->lr=0x801AD178u; f_800E2B1C(c); // 801AD174
  cmps(c,0,(int32_t)c->r[3],0); // 801AD178
  if (crb(c,2)) { goto L_801AD1EC; } // 801AD17C
  c->lr=0x801AD184u; f_801AADA0(c); // 801AD180
  c->r[4]=c->r[3]|c->r[3]; // 801AD184
  c->r[3]=c->r[28]|c->r[28]; // 801AD188
  c->lr=0x801AD190u; f_80062F4C(c); // 801AD18C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801AD190
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD194
  c->r[3]=c->r[28]+c->r[0]; // 801AD198
  c->r[29]=R32(c->r[3]+0x00000014u); // 801AD19C
  cmps(c,0,(int32_t)c->r[29],0); // 801AD1A0
  if (crb(c,2)) { goto L_801AD1CC; } // 801AD1A4
  c->r[30]=0u+0x00000000u; // 801AD1A8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AD1AC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801AD1B0
  c->lr=0x801AD1B8u; f_801AADA0(c); // 801AD1B4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801AD1B8
  c->r[0]=c->r[13]+0xFFFF8DA8u; // 801AD1BC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801AD1C0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801AD1C4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801AD1C8
L_801AD1CC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801AD1CC
  c->r[0]=0u+0x00000000u; // 801AD1D0
  c->r[3]=c->r[28]|c->r[28]; // 801AD1D4
  c->r[4]=c->r[29]|c->r[29]; // 801AD1D8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801AD1DC
  c->r[0]=R32(c->r[28]+0x00000004u); // 801AD1E0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801AD1E4
  c->lr=0x801AD1ECu; f_8006306C(c); // 801AD1E8
L_801AD1EC:;
  c->r[10]=c->r[31]|c->r[31]; // 801AD1EC
  c->r[11]=c->r[10]+0x00000040u; // 801AD1F0
  c->lr=0x801AD1F8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD1F4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AD1F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AD1FC
  c->r[1]=c->r[10]|c->r[10]; // 801AD200
  c->lr=c->r[0]; // 801AD204
  return; // 801AD208
}

// fn_801AD20C
void f_801AD20C(Ctx* __restrict c) {
  trace_call(0x801AD20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD20C
  c->r[0]=c->lr; // 801AD210
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801AD214
  c->r[11]=c->r[1]+0x000000B0u; // 801AD218
  c->lr=0x801AD220u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD21C
  c->r[31]=c->r[1]|c->r[1]; // 801AD220
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD224
  c->r[30]=c->r[3]|c->r[3]; // 801AD228
  cmps(c,0,(int32_t)c->r[4],0); // 801AD22C
  if (crb(c,2)) { goto L_801AD23C; } // 801AD230
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AD234
  goto L_801AD240; // 801AD238
L_801AD23C:;
  c->r[0]=0u+0x00000000u; // 801AD23C
L_801AD240:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD240
  if (!crb(c,2)) { goto L_801AD268; } // 801AD244
  c->r[4]=0u+0x80690000u; // 801AD248
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD24C
  c->r[4]=c->r[4]+0x00003520u; // 801AD250
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD254
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD258
  c->r[3]=c->r[3]+0x000005C4u; // 801AD25C
  c->r[4]=c->r[4]+0x0000014Du; // 801AD260
  c->lr=0x801AD268u; f_800E24D0(c); // 801AD264
L_801AD268:;
  c->r[4]=0u+0x80690000u; // 801AD268
  c->r[3]=c->r[30]+0x000005C4u; // 801AD26C
  c->r[4]=c->r[4]+0x00003520u; // 801AD270
  c->r[4]=c->r[4]+0x0000014Du; // 801AD274
  c->lr=0x801AD27Cu; f_800E2ACC(c); // 801AD278
  cmps(c,0,(int32_t)c->r[3],0); // 801AD27C
  if (crb(c,2)) { goto L_801AD424; } // 801AD280
  {uint32_t ea=c->r[2]+0xFFFFC594u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD284
  c->r[3]=c->r[30]+0x000005C4u; // 801AD288
  c->lr=0x801AD290u; f_800E2B50(c); // 801AD28C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD290
  if (crb(c,2)) { goto L_801AD2F4; } // 801AD294
  c->r[3]=c->r[30]+0x00000668u; // 801AD298
  c->lr=0x801AD2A0u; f_8007ECBC(c); // 801AD29C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801AD2A0
  c->r[29]=c->r[3]|c->r[3]; // 801AD2A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD2A8
  c->r[3]=c->r[3]+c->r[0]; // 801AD2AC
  c->r[27]=R32(c->r[3]+0x00000014u); // 801AD2B0
  cmps(c,0,(int32_t)c->r[27],0); // 801AD2B4
  if (crb(c,2)) { goto L_801AD2E0; } // 801AD2B8
  c->r[28]=0u+0x00000000u; // 801AD2BC
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 801AD2C0
  W8(c->r[31]+0x00000010u,c->r[28]); // 801AD2C4
  c->lr=0x801AD2CCu; f_80062EBC(c); // 801AD2C8
  W32(c->r[27]+0x00000000u,c->r[3]); // 801AD2CC
  c->r[0]=c->r[13]+0xFFFF80D8u; // 801AD2D0
  W32(c->r[27]+0x00000004u,c->r[0]); // 801AD2D4
  W32(c->r[27]+0x00000008u,c->r[28]); // 801AD2D8
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 801AD2DC
L_801AD2E0:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 801AD2E0
  c->r[0]=0u+0x00000000u; // 801AD2E4
  W32(c->r[27]+0x00000008u,c->r[0]); // 801AD2E8
  c->r[0]=R32(c->r[29]+0x00000004u); // 801AD2EC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801AD2F0
L_801AD2F4:;
  {uint32_t ea=c->r[2]+0xFFFFC598u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD2F4
  c->r[3]=c->r[30]+0x000005C4u; // 801AD2F8
  c->lr=0x801AD300u; f_800E2B50(c); // 801AD2FC
  cmps(c,0,(int32_t)c->r[3],0); // 801AD300
  if (crb(c,2)) { goto L_801AD364; } // 801AD304
  c->r[3]=c->r[30]+0x00000670u; // 801AD308
  c->lr=0x801AD310u; f_8007ECBC(c); // 801AD30C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801AD310
  c->r[28]=c->r[3]|c->r[3]; // 801AD314
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD318
  c->r[3]=c->r[3]+c->r[0]; // 801AD31C
  c->r[27]=R32(c->r[3]+0x00000014u); // 801AD320
  cmps(c,0,(int32_t)c->r[27],0); // 801AD324
  if (crb(c,2)) { goto L_801AD350; } // 801AD328
  c->r[29]=0u+0x00000000u; // 801AD32C
  W32(c->r[31]+0x00000044u,c->r[1]); // 801AD330
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 801AD334
  c->lr=0x801AD33Cu; f_800E6A20(c); // 801AD338
  W32(c->r[27]+0x00000000u,c->r[3]); // 801AD33C
  c->r[0]=c->r[13]+0xFFFF84E4u; // 801AD340
  W32(c->r[27]+0x00000004u,c->r[0]); // 801AD344
  W32(c->r[27]+0x00000008u,c->r[29]); // 801AD348
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 801AD34C
L_801AD350:;
  W32(c->r[28]+0x00000008u,c->r[27]); // 801AD350
  c->r[0]=0u+0x00000000u; // 801AD354
  W32(c->r[27]+0x00000008u,c->r[0]); // 801AD358
  c->r[0]=R32(c->r[28]+0x00000004u); // 801AD35C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801AD360
L_801AD364:;
  {uint32_t ea=c->r[2]+0xFFFFC59Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD364
  c->r[3]=c->r[30]+0x000005C4u; // 801AD368
  c->lr=0x801AD370u; f_800E2B50(c); // 801AD36C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD370
  if (crb(c,2)) { goto L_801AD38C; } // 801AD374
  c->r[4]=0u+0x00010000u; // 801AD378
  c->r[3]=c->r[30]|c->r[30]; // 801AD37C
  c->r[4]=c->r[4]+0xFFFFEA6Eu; // 801AD380
  c->r[5]=0u+0x00000001u; // 801AD384
  c->lr=0x801AD38Cu; f_80064744(c); // 801AD388
L_801AD38C:;
  c->r[3]=c->r[30]+0x000005C4u; // 801AD38C
  c->lr=0x801AD394u; f_800E2B1C(c); // 801AD390
  cmps(c,0,(int32_t)c->r[3],0); // 801AD394
  if (crb(c,2)) { goto L_801AD424; } // 801AD398
  c->r[3]=c->r[31]+0x00000060u; // 801AD39C
  c->lr=0x801AD3A4u; f_80382F00(c); // 801AD3A0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD3A4
  c->r[3]=c->r[31]+0x00000060u; // 801AD3A8
  c->f[2]=c->f[1]; // 801AD3AC
  c->f[3]=c->f[1]; // 801AD3B0
  c->lr=0x801AD3B8u; f_804E18A0(c); // 801AD3B4
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD3B8
  c->r[3]=c->r[31]+0x00000060u; // 801AD3BC
  {uint32_t ea=c->r[2]+0xFFFFC5A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD3C0
  c->f[3]=c->f[1]; // 801AD3C4
  c->lr=0x801AD3CCu; f_8007E8A8(c); // 801AD3C8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801AD3CC
  c->r[3]=c->r[30]|c->r[30]; // 801AD3D0
  c->r[4]=c->r[31]+0x00000060u; // 801AD3D4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801AD3D8
  c->ctr=c->r[12]; // 801AD3DC
  if (true) { c->lr=0x801AD3E4u; dispatch(c,c->ctr); } // 801AD3E0
  c->r[3]=c->r[30]+0x000000FCu; // 801AD3E4
  c->r[4]=0u+0x00000000u; // 801AD3E8
  c->lr=0x801AD3F0u; f_802E6678(c); // 801AD3EC
  c->r[29]=0u+0x80690000u; // 801AD3F0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD3F4
  c->r[29]=c->r[29]+0x00003520u; // 801AD3F8
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD3FC
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD400
  c->r[3]=c->r[30]+0x000005C4u; // 801AD404
  c->r[4]=c->r[29]+0x0000015Fu; // 801AD408
  c->lr=0x801AD410u; f_800E24D0(c); // 801AD40C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD410
  c->r[4]=c->r[29]+0x00000171u; // 801AD414
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801AD418
  c->f[2]=c->f[1]; // 801AD41C
  c->lr=0x801AD424u; f_802E3098(c); // 801AD420
L_801AD424:;
  {uint32_t ea=c->r[2]+0xFFFFC5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD424
  c->r[3]=c->r[30]+0x000005C4u; // 801AD428
  c->lr=0x801AD430u; f_800E2B50(c); // 801AD42C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD430
  if (crb(c,2)) { goto L_801AD454; } // 801AD434
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD438
  c->r[4]=0u+0x80690000u; // 801AD43C
  c->r[4]=c->r[4]+0x00003520u; // 801AD440
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801AD444
  c->f[2]=c->f[1]; // 801AD448
  c->r[4]=c->r[4]+0x00000171u; // 801AD44C
  c->lr=0x801AD454u; f_802E3098(c); // 801AD450
L_801AD454:;
  c->r[4]=0u+0x80690000u; // 801AD454
  c->r[3]=c->r[30]+0x000005C4u; // 801AD458
  c->r[4]=c->r[4]+0x00003520u; // 801AD45C
  c->r[4]=c->r[4]+0x0000015Fu; // 801AD460
  c->lr=0x801AD468u; f_800E2ACC(c); // 801AD464
  cmps(c,0,(int32_t)c->r[3],0); // 801AD468
  if (crb(c,2)) { goto L_801AD4EC; } // 801AD46C
  c->r[3]=c->r[30]+0x000005C4u; // 801AD470
  c->lr=0x801AD478u; f_800E2B1C(c); // 801AD474
  cmps(c,0,(int32_t)c->r[3],0); // 801AD478
  if (crb(c,2)) { goto L_801AD4EC; } // 801AD47C
  c->lr=0x801AD484u; f_8017CD34(c); // 801AD480
  c->r[4]=c->r[3]|c->r[3]; // 801AD484
  c->r[3]=c->r[30]|c->r[30]; // 801AD488
  c->lr=0x801AD490u; f_80062F4C(c); // 801AD48C
  c->r[0]=R8(c->r[30]+0x00000010u); // 801AD490
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD494
  c->r[3]=c->r[30]+c->r[0]; // 801AD498
  c->r[27]=R32(c->r[3]+0x00000014u); // 801AD49C
  cmps(c,0,(int32_t)c->r[27],0); // 801AD4A0
  if (crb(c,2)) { goto L_801AD4CC; } // 801AD4A4
  c->r[29]=0u+0x00000000u; // 801AD4A8
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 801AD4AC
  W8(c->r[31]+0x00000008u,c->r[29]); // 801AD4B0
  c->lr=0x801AD4B8u; f_8017CD34(c); // 801AD4B4
  W32(c->r[27]+0x00000000u,c->r[3]); // 801AD4B8
  c->r[0]=c->r[13]+0xFFFF8B18u; // 801AD4BC
  W32(c->r[27]+0x00000004u,c->r[0]); // 801AD4C0
  W32(c->r[27]+0x00000008u,c->r[29]); // 801AD4C4
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 801AD4C8
L_801AD4CC:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 801AD4CC
  c->r[0]=0u+0x00000000u; // 801AD4D0
  c->r[3]=c->r[30]|c->r[30]; // 801AD4D4
  c->r[4]=c->r[27]|c->r[27]; // 801AD4D8
  W32(c->r[27]+0x00000008u,c->r[0]); // 801AD4DC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801AD4E0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801AD4E4
  c->lr=0x801AD4ECu; f_8006306C(c); // 801AD4E8
L_801AD4EC:;
  c->r[10]=c->r[31]|c->r[31]; // 801AD4EC
  c->r[11]=c->r[10]+0x000000B0u; // 801AD4F0
  c->lr=0x801AD4F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD4F4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AD4F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AD4FC
  c->r[1]=c->r[10]|c->r[10]; // 801AD500
  c->lr=c->r[0]; // 801AD504
  return; // 801AD508
}

// fn_801AD50C
void f_801AD50C(Ctx* __restrict c) {
  trace_call(0x801AD50Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD50C
  c->r[0]=c->lr; // 801AD510
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AD514
  c->r[11]=c->r[1]+0x00000070u; // 801AD518
  c->lr=0x801AD520u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD51C
  c->r[31]=c->r[1]|c->r[1]; // 801AD520
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD524
  c->r[30]=c->r[3]|c->r[3]; // 801AD528
  cmps(c,0,(int32_t)c->r[4],0); // 801AD52C
  if (crb(c,2)) { goto L_801AD53C; } // 801AD530
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AD534
  goto L_801AD540; // 801AD538
L_801AD53C:;
  c->r[0]=0u+0x00000000u; // 801AD53C
L_801AD540:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD540
  if (!crb(c,2)) { goto L_801AD618; } // 801AD544
  c->r[3]=c->r[3]+0x00000668u; // 801AD548
  c->lr=0x801AD550u; f_80053614(c); // 801AD54C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD550
  if (crb(c,2)) { goto L_801AD564; } // 801AD554
  c->r[3]=c->r[30]+0x00000668u; // 801AD558
  c->lr=0x801AD560u; f_8007ECBC(c); // 801AD55C
  c->lr=0x801AD564u; f_8031749C(c); // 801AD560
L_801AD564:;
  c->r[3]=c->r[30]+0x00000670u; // 801AD564
  c->lr=0x801AD56Cu; f_80053614(c); // 801AD568
  cmps(c,0,(int32_t)c->r[3],0); // 801AD56C
  if (crb(c,2)) { goto L_801AD580; } // 801AD570
  c->r[3]=c->r[30]+0x00000670u; // 801AD574
  c->lr=0x801AD57Cu; f_8007ECBC(c); // 801AD578
  c->lr=0x801AD580u; f_8031749C(c); // 801AD57C
L_801AD580:;
  c->r[3]=c->r[31]+0x00000028u; // 801AD580
  c->lr=0x801AD588u; f_80382F00(c); // 801AD584
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD588
  c->r[3]=c->r[31]+0x00000028u; // 801AD58C
  c->f[2]=c->f[1]; // 801AD590
  c->f[3]=c->f[1]; // 801AD594
  c->lr=0x801AD59Cu; f_804E18A0(c); // 801AD598
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD59C
  c->r[3]=c->r[31]+0x00000028u; // 801AD5A0
  c->f[2]=c->f[1]; // 801AD5A4
  c->f[3]=c->f[1]; // 801AD5A8
  c->lr=0x801AD5B0u; f_8007E8A8(c); // 801AD5AC
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801AD5B0
  c->r[3]=c->r[30]|c->r[30]; // 801AD5B4
  c->r[4]=c->r[31]+0x00000028u; // 801AD5B8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801AD5BC
  c->ctr=c->r[12]; // 801AD5C0
  if (true) { c->lr=0x801AD5C8u; dispatch(c,c->ctr); } // 801AD5C4
  c->r[29]=0u+0x80690000u; // 801AD5C8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD5CC
  c->r[29]=c->r[29]+0x00003520u; // 801AD5D0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD5D4
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD5D8
  c->r[3]=c->r[30]+0x000005C4u; // 801AD5DC
  c->r[4]=c->r[29]+0x00000179u; // 801AD5E0
  c->lr=0x801AD5E8u; f_800E24D0(c); // 801AD5E4
  c->r[3]=c->r[30]+0x000000FCu; // 801AD5E8
  c->r[4]=0u+0x00000001u; // 801AD5EC
  c->lr=0x801AD5F4u; f_802E6678(c); // 801AD5F0
  c->r[4]=0u+0x00010000u; // 801AD5F4
  c->r[3]=c->r[30]|c->r[30]; // 801AD5F8
  c->r[4]=c->r[4]+0xFFFFEA6Fu; // 801AD5FC
  c->r[5]=0u+0x00000001u; // 801AD600
  c->lr=0x801AD608u; f_80064744(c); // 801AD604
  c->r[3]=c->r[30]|c->r[30]; // 801AD608
  c->r[4]=c->r[29]+0x000000FFu; // 801AD60C
  c->r[5]=c->r[29]+0x00000188u; // 801AD610
  c->lr=0x801AD618u; f_801AC164(c); // 801AD614
L_801AD618:;
  c->r[3]=c->r[30]+0x00000354u; // 801AD618
  c->lr=0x801AD620u; f_800C9374(c); // 801AD61C
  c->r[0]=c->r[3]+0x00000000u; // 801AD620
  cmpu(c,0,c->r[0],0x0000EA6Fu); // 801AD624
  if (!crb(c,2)) { goto L_801AD6A8; } // 801AD628
  {uint32_t ea=c->r[2]+0xFFFFC5A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD62C
  c->r[3]=c->r[30]|c->r[30]; // 801AD630
  {uint32_t ea=c->r[2]+0xFFFFC5ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD634
  {uint32_t ea=c->r[2]+0xFFFFC5B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD638
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801AD63C
  c->lr=0x801AD644u; f_801AC088(c); // 801AD640
  cmps(c,0,(int32_t)c->r[3],0); // 801AD644
  if (crb(c,2)) { goto L_801AD680; } // 801AD648
  c->r[4]=0u+0x80690000u; // 801AD64C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD650
  c->r[4]=c->r[4]+0x00003520u; // 801AD654
  c->r[3]=c->r[30]+0x000005C4u; // 801AD658
  c->r[4]=c->r[4]+0x0000018Du; // 801AD65C
  c->r[5]=c->r[30]+0x000001B8u; // 801AD660
  c->r[6]=0u+0x00000000u; // 801AD664
  c->lr=0x801AD66Cu; f_800E23DC(c); // 801AD668
  c->r[4]=0u+0x00010000u; // 801AD66C
  c->r[3]=c->r[30]|c->r[30]; // 801AD670
  c->r[4]=c->r[4]+0xFFFFEA70u; // 801AD674
  c->r[5]=0u+0x00000001u; // 801AD678
  c->lr=0x801AD680u; f_80064744(c); // 801AD67C
L_801AD680:;
  {uint32_t ea=c->r[2]+0xFFFFC53Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD680
  c->r[3]=c->r[30]+0x000005C4u; // 801AD684
  c->lr=0x801AD68Cu; f_800E2B50(c); // 801AD688
  cmps(c,0,(int32_t)c->r[3],0); // 801AD68C
  if (crb(c,2)) { goto L_801AD6A8; } // 801AD690
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD694
  c->r[3]=c->r[30]|c->r[30]; // 801AD698
  c->r[4]=0u+0x00000001u; // 801AD69C
  c->r[5]=0u+0xFFFFFFFFu; // 801AD6A0
  c->lr=0x801AD6A8u; f_80062194(c); // 801AD6A4
L_801AD6A8:;
  c->r[3]=c->r[30]+0x000005C4u; // 801AD6A8
  c->lr=0x801AD6B0u; f_800E2B1C(c); // 801AD6AC
  cmps(c,0,(int32_t)c->r[3],0); // 801AD6B0
  if (crb(c,2)) { goto L_801AD724; } // 801AD6B4
  c->lr=0x801AD6BCu; f_801AAD6C(c); // 801AD6B8
  c->r[4]=c->r[3]|c->r[3]; // 801AD6BC
  c->r[3]=c->r[30]|c->r[30]; // 801AD6C0
  c->lr=0x801AD6C8u; f_80062F4C(c); // 801AD6C4
  c->r[0]=R8(c->r[30]+0x00000010u); // 801AD6C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD6CC
  c->r[3]=c->r[30]+c->r[0]; // 801AD6D0
  c->r[28]=R32(c->r[3]+0x00000014u); // 801AD6D4
  cmps(c,0,(int32_t)c->r[28],0); // 801AD6D8
  if (crb(c,2)) { goto L_801AD704; } // 801AD6DC
  c->r[29]=0u+0x00000000u; // 801AD6E0
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AD6E4
  W8(c->r[31]+0x00000008u,c->r[29]); // 801AD6E8
  c->lr=0x801AD6F0u; f_801AAD6C(c); // 801AD6EC
  W32(c->r[28]+0x00000000u,c->r[3]); // 801AD6F0
  c->r[0]=c->r[13]+0xFFFF8DA4u; // 801AD6F4
  W32(c->r[28]+0x00000004u,c->r[0]); // 801AD6F8
  W32(c->r[28]+0x00000008u,c->r[29]); // 801AD6FC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801AD700
L_801AD704:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801AD704
  c->r[0]=0u+0x00000000u; // 801AD708
  c->r[3]=c->r[30]|c->r[30]; // 801AD70C
  c->r[4]=c->r[28]|c->r[28]; // 801AD710
  W32(c->r[28]+0x00000008u,c->r[0]); // 801AD714
  c->r[0]=R32(c->r[30]+0x00000004u); // 801AD718
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801AD71C
  c->lr=0x801AD724u; f_8006306C(c); // 801AD720
L_801AD724:;
  c->r[10]=c->r[31]|c->r[31]; // 801AD724
  c->r[11]=c->r[10]+0x00000070u; // 801AD728
  c->lr=0x801AD730u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD72C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AD730
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AD734
  c->r[1]=c->r[10]|c->r[10]; // 801AD738
  c->lr=c->r[0]; // 801AD73C
  return; // 801AD740
}

// fn_801AD744
void f_801AD744(Ctx* __restrict c) {
  trace_call(0x801AD744u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD744
  c->r[0]=c->lr; // 801AD748
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AD74C
  c->r[11]=c->r[1]+0x00000040u; // 801AD750
  c->lr=0x801AD758u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD754
  c->r[31]=c->r[1]|c->r[1]; // 801AD758
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD75C
  c->r[28]=c->r[3]|c->r[3]; // 801AD760
  cmps(c,0,(int32_t)c->r[4],0); // 801AD764
  if (crb(c,2)) { goto L_801AD774; } // 801AD768
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AD76C
  goto L_801AD778; // 801AD770
L_801AD774:;
  c->r[0]=0u+0x00000000u; // 801AD774
L_801AD778:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD778
  if (!crb(c,2)) { goto L_801AD7A0; } // 801AD77C
  c->r[4]=0u+0x80690000u; // 801AD780
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD784
  c->r[4]=c->r[4]+0x00003520u; // 801AD788
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD78C
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD790
  c->r[3]=c->r[3]+0x000005C4u; // 801AD794
  c->r[4]=c->r[4]+0x0000019Cu; // 801AD798
  c->lr=0x801AD7A0u; f_800E24D0(c); // 801AD79C
L_801AD7A0:;
  {uint32_t ea=c->r[2]+0xFFFFC5B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD7A0
  c->r[3]=c->r[28]+0x000005C4u; // 801AD7A4
  c->lr=0x801AD7ACu; f_800E2B50(c); // 801AD7A8
  cmps(c,0,(int32_t)c->r[3],0); // 801AD7AC
  if (crb(c,2)) { goto L_801AD7D0; } // 801AD7B0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD7B4
  c->r[4]=0u+0x80690000u; // 801AD7B8
  c->r[4]=c->r[4]+0x00003520u; // 801AD7BC
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801AD7C0
  c->f[2]=c->f[1]; // 801AD7C4
  c->r[4]=c->r[4]+0x00000171u; // 801AD7C8
  c->lr=0x801AD7D0u; f_802E3098(c); // 801AD7CC
L_801AD7D0:;
  {uint32_t ea=c->r[2]+0xFFFFC5B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD7D0
  c->r[3]=c->r[28]+0x000005C4u; // 801AD7D4
  c->lr=0x801AD7DCu; f_800E2B50(c); // 801AD7D8
  cmps(c,0,(int32_t)c->r[3],0); // 801AD7DC
  if (crb(c,2)) { goto L_801AD800; } // 801AD7E0
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD7E4
  c->r[4]=0u+0x80690000u; // 801AD7E8
  c->r[4]=c->r[4]+0x00003520u; // 801AD7EC
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801AD7F0
  c->f[2]=c->f[1]; // 801AD7F4
  c->r[4]=c->r[4]+0x00000171u; // 801AD7F8
  c->lr=0x801AD800u; f_802E3098(c); // 801AD7FC
L_801AD800:;
  c->r[3]=c->r[28]+0x000005C4u; // 801AD800
  c->lr=0x801AD808u; f_800E2B1C(c); // 801AD804
  cmps(c,0,(int32_t)c->r[3],0); // 801AD808
  if (crb(c,2)) { goto L_801AD87C; } // 801AD80C
  c->lr=0x801AD814u; f_801AAE74(c); // 801AD810
  c->r[4]=c->r[3]|c->r[3]; // 801AD814
  c->r[3]=c->r[28]|c->r[28]; // 801AD818
  c->lr=0x801AD820u; f_80062F4C(c); // 801AD81C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801AD820
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD824
  c->r[3]=c->r[28]+c->r[0]; // 801AD828
  c->r[29]=R32(c->r[3]+0x00000014u); // 801AD82C
  cmps(c,0,(int32_t)c->r[29],0); // 801AD830
  if (crb(c,2)) { goto L_801AD85C; } // 801AD834
  c->r[30]=0u+0x00000000u; // 801AD838
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AD83C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801AD840
  c->lr=0x801AD848u; f_801AAE74(c); // 801AD844
  W32(c->r[29]+0x00000000u,c->r[3]); // 801AD848
  c->r[0]=c->r[13]+0xFFFF8DB8u; // 801AD84C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801AD850
  W32(c->r[29]+0x00000008u,c->r[30]); // 801AD854
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801AD858
L_801AD85C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801AD85C
  c->r[0]=0u+0x00000000u; // 801AD860
  c->r[3]=c->r[28]|c->r[28]; // 801AD864
  c->r[4]=c->r[29]|c->r[29]; // 801AD868
  W32(c->r[29]+0x00000008u,c->r[0]); // 801AD86C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801AD870
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801AD874
  c->lr=0x801AD87Cu; f_8006306C(c); // 801AD878
L_801AD87C:;
  c->r[10]=c->r[31]|c->r[31]; // 801AD87C
  c->r[11]=c->r[10]+0x00000040u; // 801AD880
  c->lr=0x801AD888u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD884
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AD888
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AD88C
  c->r[1]=c->r[10]|c->r[10]; // 801AD890
  c->lr=c->r[0]; // 801AD894
  return; // 801AD898
}

// fn_801AD89C
void f_801AD89C(Ctx* __restrict c) {
  trace_call(0x801AD89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD89C
  c->r[0]=c->lr; // 801AD8A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AD8A4
  c->r[11]=c->r[1]+0x00000040u; // 801AD8A8
  c->lr=0x801AD8B0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD8AC
  c->r[31]=c->r[1]|c->r[1]; // 801AD8B0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD8B4
  c->r[30]=c->r[3]|c->r[3]; // 801AD8B8
  cmps(c,0,(int32_t)c->r[4],0); // 801AD8BC
  if (crb(c,2)) { goto L_801AD8CC; } // 801AD8C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AD8C4
  goto L_801AD8D0; // 801AD8C8
L_801AD8CC:;
  c->r[0]=0u+0x00000000u; // 801AD8CC
L_801AD8D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD8D0
  if (!crb(c,2)) { goto L_801AD91C; } // 801AD8D4
  c->r[29]=0u+0x80690000u; // 801AD8D8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD8DC
  c->r[29]=c->r[29]+0x00003520u; // 801AD8E0
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD8E4
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD8E8
  c->r[3]=c->r[3]+0x000005C4u; // 801AD8EC
  c->r[4]=c->r[29]+0x000001AEu; // 801AD8F0
  c->lr=0x801AD8F8u; f_800E24D0(c); // 801AD8F4
  c->r[4]=0u+0x00010000u; // 801AD8F8
  c->r[3]=c->r[30]|c->r[30]; // 801AD8FC
  c->r[4]=c->r[4]+0xFFFFEA71u; // 801AD900
  c->r[5]=0u+0x00000001u; // 801AD904
  c->lr=0x801AD90Cu; f_80064744(c); // 801AD908
  c->r[3]=c->r[30]|c->r[30]; // 801AD90C
  c->r[4]=c->r[29]+0x000000FFu; // 801AD910
  c->r[5]=c->r[29]+0x000001BDu; // 801AD914
  c->lr=0x801AD91Cu; f_801AC164(c); // 801AD918
L_801AD91C:;
  c->r[3]=c->r[30]+0x00000354u; // 801AD91C
  c->lr=0x801AD924u; f_800C9374(c); // 801AD920
  c->r[0]=c->r[3]+0x00000000u; // 801AD924
  cmpu(c,0,c->r[0],0x0000EA71u); // 801AD928
  if (!crb(c,2)) { goto L_801AD9AC; } // 801AD92C
  {uint32_t ea=c->r[2]+0xFFFFC5A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD930
  c->r[3]=c->r[30]|c->r[30]; // 801AD934
  {uint32_t ea=c->r[2]+0xFFFFC5ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AD938
  {uint32_t ea=c->r[2]+0xFFFFC5B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AD93C
  {uint32_t ea=c->r[30]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801AD940
  c->lr=0x801AD948u; f_801AC088(c); // 801AD944
  cmps(c,0,(int32_t)c->r[3],0); // 801AD948
  if (crb(c,2)) { goto L_801AD984; } // 801AD94C
  c->r[4]=0u+0x80690000u; // 801AD950
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD954
  c->r[4]=c->r[4]+0x00003520u; // 801AD958
  c->r[3]=c->r[30]+0x000005C4u; // 801AD95C
  c->r[4]=c->r[4]+0x000001C2u; // 801AD960
  c->r[5]=c->r[30]+0x000001B8u; // 801AD964
  c->r[6]=0u+0x00000000u; // 801AD968
  c->lr=0x801AD970u; f_800E23DC(c); // 801AD96C
  c->r[4]=0u+0x00010000u; // 801AD970
  c->r[3]=c->r[30]|c->r[30]; // 801AD974
  c->r[4]=c->r[4]+0xFFFFEA72u; // 801AD978
  c->r[5]=0u+0x00000001u; // 801AD97C
  c->lr=0x801AD984u; f_80064744(c); // 801AD980
L_801AD984:;
  {uint32_t ea=c->r[2]+0xFFFFC53Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD984
  c->r[3]=c->r[30]+0x000005C4u; // 801AD988
  c->lr=0x801AD990u; f_800E2B50(c); // 801AD98C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD990
  if (crb(c,2)) { goto L_801AD9AC; } // 801AD994
  {uint32_t ea=c->r[30]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AD998
  c->r[3]=c->r[30]|c->r[30]; // 801AD99C
  c->r[4]=0u+0x00000001u; // 801AD9A0
  c->r[5]=0u+0xFFFFFFFFu; // 801AD9A4
  c->lr=0x801AD9ACu; f_80062194(c); // 801AD9A8
L_801AD9AC:;
  c->r[3]=c->r[30]+0x000005C4u; // 801AD9AC
  c->lr=0x801AD9B4u; f_800E2B1C(c); // 801AD9B0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD9B4
  if (crb(c,2)) { goto L_801ADA28; } // 801AD9B8
  c->lr=0x801AD9C0u; f_801AAD38(c); // 801AD9BC
  c->r[4]=c->r[3]|c->r[3]; // 801AD9C0
  c->r[3]=c->r[30]|c->r[30]; // 801AD9C4
  c->lr=0x801AD9CCu; f_80062F4C(c); // 801AD9C8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801AD9CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD9D0
  c->r[3]=c->r[30]+c->r[0]; // 801AD9D4
  c->r[28]=R32(c->r[3]+0x00000014u); // 801AD9D8
  cmps(c,0,(int32_t)c->r[28],0); // 801AD9DC
  if (crb(c,2)) { goto L_801ADA08; } // 801AD9E0
  c->r[29]=0u+0x00000000u; // 801AD9E4
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AD9E8
  W8(c->r[31]+0x00000008u,c->r[29]); // 801AD9EC
  c->lr=0x801AD9F4u; f_801AAD38(c); // 801AD9F0
  W32(c->r[28]+0x00000000u,c->r[3]); // 801AD9F4
  c->r[0]=c->r[13]+0xFFFF8DA0u; // 801AD9F8
  W32(c->r[28]+0x00000004u,c->r[0]); // 801AD9FC
  W32(c->r[28]+0x00000008u,c->r[29]); // 801ADA00
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801ADA04
L_801ADA08:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801ADA08
  c->r[0]=0u+0x00000000u; // 801ADA0C
  c->r[3]=c->r[30]|c->r[30]; // 801ADA10
  c->r[4]=c->r[28]|c->r[28]; // 801ADA14
  W32(c->r[28]+0x00000008u,c->r[0]); // 801ADA18
  c->r[0]=R32(c->r[30]+0x00000004u); // 801ADA1C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801ADA20
  c->lr=0x801ADA28u; f_8006306C(c); // 801ADA24
L_801ADA28:;
  c->r[10]=c->r[31]|c->r[31]; // 801ADA28
  c->r[11]=c->r[10]+0x00000040u; // 801ADA2C
  c->lr=0x801ADA34u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ADA30
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ADA34
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ADA38
  c->r[1]=c->r[10]|c->r[10]; // 801ADA3C
  c->lr=c->r[0]; // 801ADA40
  return; // 801ADA44
}

// fn_801ADA48
void f_801ADA48(Ctx* __restrict c) {
  trace_call(0x801ADA48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA48
  c->r[0]=c->lr; // 801ADA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADA54
  c->r[31]=c->r[3]|c->r[3]; // 801ADA58
  c->r[4]=R32(c->r[3]+0x00000004u); // 801ADA5C
  cmps(c,0,(int32_t)c->r[4],0); // 801ADA60
  if (crb(c,2)) { goto L_801ADA70; } // 801ADA64
  c->r[0]=R32(c->r[4]+0x00000008u); // 801ADA68
  goto L_801ADA74; // 801ADA6C
L_801ADA70:;
  c->r[0]=0u+0x00000000u; // 801ADA70
L_801ADA74:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ADA74
  if (!crb(c,2)) { goto L_801ADA9C; } // 801ADA78
  c->r[4]=0u+0x80690000u; // 801ADA7C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADA80
  c->r[4]=c->r[4]+0x00003520u; // 801ADA84
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADA88
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADA8C
  c->r[4]=c->r[4]+0x000001D1u; // 801ADA90
  c->r[3]=c->r[3]+0x000005C4u; // 801ADA94
  c->lr=0x801ADA9Cu; f_800E24D0(c); // 801ADA98
L_801ADA9C:;
  {uint32_t ea=c->r[2]+0xFFFFC5BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADA9C
  c->r[3]=c->r[31]+0x000005C4u; // 801ADAA0
  c->lr=0x801ADAA8u; f_800E2B50(c); // 801ADAA4
  cmps(c,0,(int32_t)c->r[3],0); // 801ADAA8
  if (crb(c,2)) { goto L_801ADACC; } // 801ADAAC
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADAB0
  c->r[4]=0u+0x80690000u; // 801ADAB4
  c->r[4]=c->r[4]+0x00003520u; // 801ADAB8
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801ADABC
  c->f[2]=c->f[1]; // 801ADAC0
  c->r[4]=c->r[4]+0x00000171u; // 801ADAC4
  c->lr=0x801ADACCu; f_802E3098(c); // 801ADAC8
L_801ADACC:;
  {uint32_t ea=c->r[2]+0xFFFFC5C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADACC
  c->r[3]=c->r[31]+0x000005C4u; // 801ADAD0
  c->lr=0x801ADAD8u; f_800E2B50(c); // 801ADAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801ADAD8
  if (crb(c,2)) { goto L_801ADAFC; } // 801ADADC
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADAE0
  c->r[4]=0u+0x80690000u; // 801ADAE4
  c->r[4]=c->r[4]+0x00003520u; // 801ADAE8
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801ADAEC
  c->f[2]=c->f[1]; // 801ADAF0
  c->r[4]=c->r[4]+0x00000171u; // 801ADAF4
  c->lr=0x801ADAFCu; f_802E3098(c); // 801ADAF8
L_801ADAFC:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ADAFC
  c->lr=0x801ADB04u; f_800E2B1C(c); // 801ADB00
  cmps(c,0,(int32_t)c->r[3],0); // 801ADB04
  if (crb(c,2)) { goto L_801ADB14; } // 801ADB08
  c->r[3]=c->r[31]|c->r[31]; // 801ADB0C
  c->lr=0x801ADB14u; f_801ADB28(c); // 801ADB10
L_801ADB14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADB14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADB18
  c->lr=c->r[0]; // 801ADB1C
  c->r[1]=c->r[1]+0x00000010u; // 801ADB20
  return; // 801ADB24
}

// fn_801ADB28
void f_801ADB28(Ctx* __restrict c) {
  trace_call(0x801ADB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB28
  c->r[0]=c->lr; // 801ADB2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ADB30
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ADB34
  c->r[31]=c->r[1]|c->r[1]; // 801ADB38
  c->r[28]=c->r[3]|c->r[3]; // 801ADB3C
  c->lr=0x801ADB44u; f_801AAE40(c); // 801ADB40
  c->r[4]=c->r[3]|c->r[3]; // 801ADB44
  c->r[3]=c->r[28]|c->r[28]; // 801ADB48
  c->lr=0x801ADB50u; f_80062F4C(c); // 801ADB4C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801ADB50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ADB54
  c->r[3]=c->r[28]+c->r[0]; // 801ADB58
  c->r[29]=R32(c->r[3]+0x00000014u); // 801ADB5C
  cmps(c,0,(int32_t)c->r[29],0); // 801ADB60
  if (crb(c,2)) { goto L_801ADB8C; } // 801ADB64
  c->r[30]=0u+0x00000000u; // 801ADB68
  W32(c->r[31]+0x00000024u,c->r[1]); // 801ADB6C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801ADB70
  c->lr=0x801ADB78u; f_801AAE40(c); // 801ADB74
  W32(c->r[29]+0x00000000u,c->r[3]); // 801ADB78
  c->r[0]=c->r[13]+0xFFFF8DB4u; // 801ADB7C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801ADB80
  W32(c->r[29]+0x00000008u,c->r[30]); // 801ADB84
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801ADB88
L_801ADB8C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801ADB8C
  c->r[0]=0u+0x00000000u; // 801ADB90
  c->r[3]=c->r[28]|c->r[28]; // 801ADB94
  c->r[4]=c->r[29]|c->r[29]; // 801ADB98
  W32(c->r[29]+0x00000008u,c->r[0]); // 801ADB9C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801ADBA0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801ADBA4
  c->lr=0x801ADBACu; f_8006306C(c); // 801ADBA8
  c->r[10]=c->r[31]|c->r[31]; // 801ADBAC
  c->r[3]=c->r[29]|c->r[29]; // 801ADBB0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ADBB4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ADBB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ADBBC
  c->r[1]=c->r[10]|c->r[10]; // 801ADBC0
  c->lr=c->r[0]; // 801ADBC4
  return; // 801ADBC8
}

// fn_801ADBCC
void f_801ADBCC(Ctx* __restrict c) {
  trace_call(0x801ADBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADBCC
  c->r[0]=c->lr; // 801ADBD0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801ADBD4
  c->r[11]=c->r[1]+0x000000A0u; // 801ADBD8
  c->lr=0x801ADBE0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADBDC
  c->r[5]=R32(c->r[3]+0x00000004u); // 801ADBE0
  c->r[31]=c->r[3]|c->r[3]; // 801ADBE4
  c->r[28]=c->r[4]|c->r[4]; // 801ADBE8
  cmps(c,0,(int32_t)c->r[5],0); // 801ADBEC
  if (crb(c,2)) { goto L_801ADBFC; } // 801ADBF0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801ADBF4
  goto L_801ADC00; // 801ADBF8
L_801ADBFC:;
  c->r[0]=0u+0x00000000u; // 801ADBFC
L_801ADC00:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ADC00
  if (!crb(c,2)) { goto L_801ADC54; } // 801ADC04
  c->r[29]=0u+0x80690000u; // 801ADC08
  c->r[0]=0u+0x00000003u; // 801ADC0C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801ADC10
  c->r[29]=c->r[29]+0x00003520u; // 801ADC14
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADC18
  c->r[4]=c->r[29]+0x000001E3u; // 801ADC1C
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADC20
  c->r[3]=c->r[3]+0x000005C4u; // 801ADC24
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADC28
  c->lr=0x801ADC30u; f_800E24D0(c); // 801ADC2C
  c->r[4]=0u+0x00010000u; // 801ADC30
  c->r[3]=c->r[31]|c->r[31]; // 801ADC34
  c->r[4]=c->r[4]+0xFFFFEA73u; // 801ADC38
  c->r[5]=0u+0x00000001u; // 801ADC3C
  c->lr=0x801ADC44u; f_80064744(c); // 801ADC40
  c->r[3]=c->r[31]|c->r[31]; // 801ADC44
  c->r[4]=c->r[29]+0x000000FFu; // 801ADC48
  c->r[5]=c->r[29]+0x000001F2u; // 801ADC4C
  c->lr=0x801ADC54u; f_801AC164(c); // 801ADC50
L_801ADC54:;
  c->r[29]=0u+0x80690000u; // 801ADC54
  c->r[3]=c->r[31]+0x000005C4u; // 801ADC58
  c->r[29]=c->r[29]+0x00003520u; // 801ADC5C
  c->r[4]=c->r[29]+0x000001E3u; // 801ADC60
  c->lr=0x801ADC68u; f_800E2ACC(c); // 801ADC64
  cmps(c,0,(int32_t)c->r[3],0); // 801ADC68
  if (crb(c,2)) { goto L_801ADD10; } // 801ADC6C
  {uint32_t ea=c->r[2]+0xFFFFC5C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADC70
  c->r[3]=c->r[31]|c->r[31]; // 801ADC74
  {uint32_t ea=c->r[2]+0xFFFFC5C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADC78
  {uint32_t ea=c->r[2]+0xFFFFC5CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADC7C
  {uint32_t ea=c->r[31]+0x0000078Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801ADC80
  c->lr=0x801ADC88u; f_801AC088(c); // 801ADC84
  cmps(c,0,(int32_t)c->r[3],0); // 801ADC88
  if (crb(c,2)) { goto L_801ADCD0; } // 801ADC8C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADC90
  c->r[3]=c->r[31]+0x000005C4u; // 801ADC94
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADC98
  c->r[4]=c->r[29]+0x000001F7u; // 801ADC9C
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADCA0
  c->lr=0x801ADCA8u; f_800E24D0(c); // 801ADCA4
  c->r[4]=0u+0x00010000u; // 801ADCA8
  c->r[3]=c->r[31]|c->r[31]; // 801ADCAC
  c->r[4]=c->r[4]+0xFFFFEA74u; // 801ADCB0
  c->r[5]=0u+0x00000001u; // 801ADCB4
  c->lr=0x801ADCBCu; f_80064744(c); // 801ADCB8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADCBC
  c->r[3]=c->r[31]+0x000005C4u; // 801ADCC0
  c->r[4]=0u+0x00000000u; // 801ADCC4
  c->f[2]=c->f[1]; // 801ADCC8
  c->lr=0x801ADCD0u; f_800E29C8(c); // 801ADCCC
L_801ADCD0:;
  {uint32_t ea=c->r[2]+0xFFFFC5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADCD0
  c->r[3]=c->r[31]+0x000005C4u; // 801ADCD4
  c->lr=0x801ADCDCu; f_800E2B50(c); // 801ADCD8
  cmps(c,0,(int32_t)c->r[3],0); // 801ADCDC
  if (crb(c,2)) { goto L_801ADCF8; } // 801ADCE0
  {uint32_t ea=c->r[31]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADCE4
  c->r[3]=c->r[31]|c->r[31]; // 801ADCE8
  c->r[4]=0u+0x00000001u; // 801ADCEC
  c->r[5]=0u+0xFFFFFFFFu; // 801ADCF0
  c->lr=0x801ADCF8u; f_80062194(c); // 801ADCF4
L_801ADCF8:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ADCF8
  c->lr=0x801ADD00u; f_800E2B1C(c); // 801ADCFC
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD00
  if (crb(c,2)) { goto L_801ADD10; } // 801ADD04
  c->r[3]=c->r[31]|c->r[31]; // 801ADD08
  c->lr=0x801ADD10u; f_801ADB28(c); // 801ADD0C
L_801ADD10:;
  c->r[4]=0u+0x80690000u; // 801ADD10
  c->r[3]=c->r[31]+0x000005C4u; // 801ADD14
  c->r[4]=c->r[4]+0x00003520u; // 801ADD18
  c->r[4]=c->r[4]+0x000001F7u; // 801ADD1C
  c->lr=0x801ADD24u; f_800E2ACC(c); // 801ADD20
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD24
  if (crb(c,2)) { goto L_801ADE5C; } // 801ADD28
  {uint32_t ea=c->r[2]+0xFFFFC500u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADD2C
  c->r[3]=c->r[31]|c->r[31]; // 801ADD30
  {uint32_t ea=c->r[2]+0xFFFFC588u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADD34
  c->lr=0x801ADD3Cu; f_801ABF5C(c); // 801ADD38
  cmps(c,0,(int32_t)c->r[3],2); // 801ADD3C
  if (!crb(c,2)) { goto L_801ADD4C; } // 801ADD40
  c->r[0]=0u+0x00000002u; // 801ADD44
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801ADD48
L_801ADD4C:;
  {uint32_t ea=c->r[2]+0xFFFFC5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADD4C
  c->r[3]=c->r[31]+0x000005C4u; // 801ADD50
  c->lr=0x801ADD58u; f_800E2B50(c); // 801ADD54
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD58
  if (crb(c,2)) { goto L_801ADD8C; } // 801ADD5C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801ADD60
  cmps(c,0,(int32_t)c->r[0],2); // 801ADD64
  if (!crb(c,2)) { goto L_801ADD8C; } // 801ADD68
  c->r[4]=0u+0x80690000u; // 801ADD6C
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADD70
  c->r[4]=c->r[4]+0x00003520u; // 801ADD74
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADD78
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADD7C
  c->r[3]=c->r[31]+0x000005C4u; // 801ADD80
  c->r[4]=c->r[4]+0x00000206u; // 801ADD84
  c->lr=0x801ADD8Cu; f_800E24D0(c); // 801ADD88
L_801ADD8C:;
  {uint32_t ea=c->r[2]+0xFFFFC5D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADD8C
  c->r[3]=c->r[31]|c->r[31]; // 801ADD90
  c->lr=0x801ADD98u; f_80064A68(c); // 801ADD94
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD98
  if (crb(c,2)) { goto L_801ADDB4; } // 801ADD9C
  {uint32_t ea=c->r[31]+0x00000790u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADDA0
  c->r[3]=c->r[31]|c->r[31]; // 801ADDA4
  c->r[4]=0u+0x00000001u; // 801ADDA8
  c->r[5]=0u+0xFFFFFFFFu; // 801ADDAC
  c->lr=0x801ADDB4u; f_80062194(c); // 801ADDB0
L_801ADDB4:;
  {uint32_t ea=c->r[2]+0xFFFFC5DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADDB4
  c->r[3]=c->r[31]+0x000005C4u; // 801ADDB8
  c->lr=0x801ADDC0u; f_800E2B50(c); // 801ADDBC
  cmps(c,0,(int32_t)c->r[3],0); // 801ADDC0
  if (crb(c,2)) { goto L_801ADDFC; } // 801ADDC4
  c->lr=0x801ADDCCu; f_80349570(c); // 801ADDC8
  c->r[3]=c->r[3]+0x00010000u; // 801ADDCC
  c->r[29]=0u+0x00000000u; // 801ADDD0
  c->r[30]=R32(c->r[3]+0xFFFF83F4u); // 801ADDD4
  c->r[3]=c->r[1]+0x0000000Cu; // 801ADDD8
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801ADDDC
  c->lr=0x801ADDE4u; f_8004E228(c); // 801ADDE0
  c->r[5]=0u+0x80690000u; // 801ADDE4
  c->r[4]=c->r[30]|c->r[30]; // 801ADDE8
  c->r[5]=c->r[5]+0x00003520u; // 801ADDEC
  c->r[5]=c->r[5]+0x00000050u; // 801ADDF0
  c->lr=0x801ADDF8u; f_80075FE0(c); // 801ADDF4
  W8(c->r[31]+0x00000678u,c->r[29]); // 801ADDF8
L_801ADDFC:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ADDFC
  c->lr=0x801ADE04u; f_800E2B1C(c); // 801ADE00
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE04
  if (crb(c,2)) { goto L_801ADE14; } // 801ADE08
  c->r[3]=c->r[31]|c->r[31]; // 801ADE0C
  c->lr=0x801ADE14u; f_8007D624(c); // 801ADE10
L_801ADE14:;
  {uint32_t ea=c->r[2]+0xFFFFC5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADE14
  c->r[3]=c->r[31]+0x000005C4u; // 801ADE18
  c->lr=0x801ADE20u; f_800E2B50(c); // 801ADE1C
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE20
  if (crb(c,2)) { goto L_801ADE5C; } // 801ADE24
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADE28
  c->r[29]=0u+0x80690000u; // 801ADE2C
  c->r[29]=c->r[29]+0x00003520u; // 801ADE30
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801ADE34
  c->f[2]=c->f[1]; // 801ADE38
  c->r[4]=c->r[29]+0x00000215u; // 801ADE3C
  c->lr=0x801ADE44u; f_802E3098(c); // 801ADE40
  c->lr=0x801ADE48u; f_8004DB5C(c); // 801ADE44
  c->r[4]=c->r[3]|c->r[3]; // 801ADE48
  c->r[3]=c->r[1]+0x0000004Cu; // 801ADE4C
  c->r[5]=c->r[29]+0x0000021Cu; // 801ADE50
  c->r[6]=0u+0x00000001u; // 801ADE54
  c->lr=0x801ADE5Cu; f_80321B90(c); // 801ADE58
L_801ADE5C:;
  c->r[29]=0u+0x80690000u; // 801ADE5C
  c->r[3]=c->r[31]+0x000005C4u; // 801ADE60
  c->r[29]=c->r[29]+0x00003520u; // 801ADE64
  c->r[4]=c->r[29]+0x00000206u; // 801ADE68
  c->lr=0x801ADE70u; f_800E2ACC(c); // 801ADE6C
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE70
  if (crb(c,2)) { goto L_801ADF18; } // 801ADE74
  {uint32_t ea=c->r[2]+0xFFFFC534u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADE78
  c->r[3]=c->r[31]+0x000005C4u; // 801ADE7C
  c->lr=0x801ADE84u; f_800E2B50(c); // 801ADE80
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE84
  if (crb(c,2)) { goto L_801ADEB8; } // 801ADE88
  c->lr=0x801ADE90u; f_80349570(c); // 801ADE8C
  c->r[3]=c->r[3]+0x00010000u; // 801ADE90
  c->r[30]=0u+0x00000000u; // 801ADE94
  c->r[28]=R32(c->r[3]+0xFFFF83F4u); // 801ADE98
  c->r[3]=c->r[1]+0x00000008u; // 801ADE9C
  W8(c->r[1]+0x00000008u,c->r[30]); // 801ADEA0
  c->lr=0x801ADEA8u; f_8004E228(c); // 801ADEA4
  c->r[4]=c->r[28]|c->r[28]; // 801ADEA8
  c->r[5]=c->r[29]+0x00000050u; // 801ADEAC
  c->lr=0x801ADEB4u; f_80075FE0(c); // 801ADEB0
  W8(c->r[31]+0x00000678u,c->r[30]); // 801ADEB4
L_801ADEB8:;
  {uint32_t ea=c->r[2]+0xFFFFC5E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADEB8
  c->r[3]=c->r[31]+0x000005C4u; // 801ADEBC
  c->lr=0x801ADEC4u; f_800E2B50(c); // 801ADEC0
  cmps(c,0,(int32_t)c->r[3],0); // 801ADEC4
  if (crb(c,2)) { goto L_801ADF00; } // 801ADEC8
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADECC
  c->r[30]=0u+0x80690000u; // 801ADED0
  c->r[30]=c->r[30]+0x00003520u; // 801ADED4
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801ADED8
  c->f[2]=c->f[1]; // 801ADEDC
  c->r[4]=c->r[30]+0x00000215u; // 801ADEE0
  c->lr=0x801ADEE8u; f_802E3098(c); // 801ADEE4
  c->lr=0x801ADEECu; f_8004DB5C(c); // 801ADEE8
  c->r[4]=c->r[3]|c->r[3]; // 801ADEEC
  c->r[3]=c->r[1]+0x00000010u; // 801ADEF0
  c->r[5]=c->r[30]+0x0000021Cu; // 801ADEF4
  c->r[6]=0u+0x00000001u; // 801ADEF8
  c->lr=0x801ADF00u; f_80321B90(c); // 801ADEFC
L_801ADF00:;
  c->r[3]=c->r[31]+0x000005C4u; // 801ADF00
  c->lr=0x801ADF08u; f_800E2B1C(c); // 801ADF04
  cmps(c,0,(int32_t)c->r[3],0); // 801ADF08
  if (crb(c,2)) { goto L_801ADF18; } // 801ADF0C
  c->r[3]=c->r[31]|c->r[31]; // 801ADF10
  c->lr=0x801ADF18u; f_8007D624(c); // 801ADF14
L_801ADF18:;
  c->r[11]=c->r[1]+0x000000A0u; // 801ADF18
  c->lr=0x801ADF20u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ADF1C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801ADF20
  c->lr=c->r[0]; // 801ADF24
  c->r[1]=c->r[1]+0x000000A0u; // 801ADF28
  return; // 801ADF2C
}

// fn_801ADF30
void f_801ADF30(Ctx* __restrict c) {
  trace_call(0x801ADF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADF30
  c->r[0]=c->lr; // 801ADF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADF3C
  c->r[31]=c->r[3]|c->r[3]; // 801ADF40
  c->r[4]=R32(c->r[3]+0x00000004u); // 801ADF44
  cmps(c,0,(int32_t)c->r[4],0); // 801ADF48
  if (crb(c,2)) { goto L_801ADF58; } // 801ADF4C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801ADF50
  goto L_801ADF5C; // 801ADF54
L_801ADF58:;
  c->r[0]=0u+0x00000000u; // 801ADF58
L_801ADF5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ADF5C
  if (!crb(c,2)) { goto L_801ADFE8; } // 801ADF60
  c->r[0]=0u+0x00000000u; // 801ADF64
  W8(c->r[3]+0x00000678u,c->r[0]); // 801ADF68
  c->r[4]=0u+0x00000000u; // 801ADF6C
  c->r[3]=c->r[3]+0x000005C4u; // 801ADF70
  c->lr=0x801ADF78u; f_800E2960(c); // 801ADF74
  c->r[4]=0u+0x80690000u; // 801ADF78
  {uint32_t ea=c->r[2]+0xFFFFC4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADF7C
  c->r[4]=c->r[4]+0x00003520u; // 801ADF80
  {uint32_t ea=c->r[2]+0xFFFFC4F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ADF84
  {uint32_t ea=c->r[2]+0xFFFFC540u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ADF88
  c->r[3]=c->r[31]+0x000005C4u; // 801ADF8C
  c->r[4]=c->r[4]+0x00000228u; // 801ADF90
  c->lr=0x801ADF98u; f_800E24D0(c); // 801ADF94
  c->r[3]=c->r[31]|c->r[31]; // 801ADF98
  c->lr=0x801ADFA0u; f_800608BC(c); // 801ADF9C
  c->r[3]=c->r[31]|c->r[31]; // 801ADFA0
  c->r[4]=0u+0x00000016u; // 801ADFA4
  c->r[5]=0u+0x00000001u; // 801ADFA8
  c->lr=0x801ADFB0u; f_800D5F20(c); // 801ADFAC
  c->r[3]=c->r[31]|c->r[31]; // 801ADFB0
  c->lr=0x801ADFB8u; f_8005E00C(c); // 801ADFB4
  c->r[7]=R32(c->r[31]+0x00000504u); // 801ADFB8
  c->r[3]=c->r[31]|c->r[31]; // 801ADFBC
  c->r[0]=R32(c->r[31]+0x00000508u); // 801ADFC0
  c->r[4]=c->r[1]+0x00000008u; // 801ADFC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801ADFC8
  c->r[5]=0u+0x00000021u; // 801ADFCC
  c->r[6]=0u+0x00000000u; // 801ADFD0
  W32(c->r[1]+0x00000008u,c->r[7]); // 801ADFD4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801ADFD8
  c->r[12]=R32(c->r[12]+0x000001A0u); // 801ADFDC
  c->ctr=c->r[12]; // 801ADFE0
  if (true) { c->lr=0x801ADFE8u; dispatch(c,c->ctr); } // 801ADFE4
L_801ADFE8:;
  {uint32_t ea=c->r[2]+0xFFFFC544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ADFE8
  c->r[3]=c->r[31]+0x000005C4u; // 801ADFEC
  c->lr=0x801ADFF4u; f_800E2B50(c); // 801ADFF0
  cmps(c,0,(int32_t)c->r[3],0); // 801ADFF4
  if (crb(c,2)) { goto L_801AE010; } // 801ADFF8
  c->r[4]=0u+0x00010000u; // 801ADFFC
  c->r[3]=c->r[31]|c->r[31]; // 801AE000
  c->r[4]=c->r[4]+0xFFFFEA88u; // 801AE004
  c->r[5]=0u+0x00000001u; // 801AE008
  c->lr=0x801AE010u; f_80064744(c); // 801AE00C
L_801AE010:;
  c->r[3]=c->r[31]+0x00000354u; // 801AE010
  c->lr=0x801AE018u; f_800667AC(c); // 801AE014
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE018
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE01C
  c->lr=c->r[0]; // 801AE020
  c->r[1]=c->r[1]+0x00000020u; // 801AE024
  return; // 801AE028
}

// fn_801AE02C
void f_801AE02C(Ctx* __restrict c) {
  trace_call(0x801AE02Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE02C
  c->r[0]=c->lr; // 801AE030
  c->r[4]=0u+0x00000000u; // 801AE034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE038
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE03C
  c->r[29]=c->r[3]|c->r[3]; // 801AE040
  c->r[3]=c->r[3]+0x000000FCu; // 801AE044
  c->lr=0x801AE04Cu; f_802E6678(c); // 801AE048
  c->r[3]=0u+0x00000154u; // 801AE04C
  c->lr=0x801AE054u; f_8007C17C(c); // 801AE050
  cmps(c,0,(int32_t)c->r[3],0); // 801AE054
  c->r[31]=c->r[3]|c->r[3]; // 801AE058
  if (crb(c,2)) { goto L_801AE0B0; } // 801AE05C
  c->r[30]=c->r[31]|c->r[31]; // 801AE060
  c->lr=0x801AE068u; f_8035712C(c); // 801AE064
  c->r[4]=0u+0x806D0000u; // 801AE068
  c->r[3]=c->r[31]+0x00000044u; // 801AE06C
  c->r[4]=c->r[4]+0x000060D0u; // 801AE070
  W32(c->r[31]+0x00000000u,c->r[4]); // 801AE074
  c->r[0]=c->r[4]+0x00000018u; // 801AE078
  W32(c->r[31]+0x00000024u,c->r[0]); // 801AE07C
  c->lr=0x801AE084u; f_80095C14(c); // 801AE080
  c->r[0]=R8(c->r[13]+0xFFFFBD60u); // 801AE084
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE088
  if (!crb(c,2)) { goto L_801AE0A8; } // 801AE08C
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 801AE090
  c->r[0]=0u+0x00000001u; // 801AE094
  W32(c->r[13]+0xFFFFBD5Cu,c->r[3]); // 801AE098
  c->r[3]=c->r[3]+0x00000001u; // 801AE09C
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 801AE0A0
  W8(c->r[13]+0xFFFFBD60u,c->r[0]); // 801AE0A4
L_801AE0A8:;
  c->r[0]=R32(c->r[13]+0xFFFFBD5Cu); // 801AE0A8
  W32(c->r[31]+0x00000028u,c->r[0]); // 801AE0AC
L_801AE0B0:;
  c->r[12]=R32(c->r[29]+0x000000FCu); // 801AE0B0
  c->r[3]=c->r[29]+0x000000FCu; // 801AE0B4
  c->r[4]=c->r[31]|c->r[31]; // 801AE0B8
  c->r[5]=0u+0x00000001u; // 801AE0BC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801AE0C0
  c->ctr=c->r[12]; // 801AE0C4
  if (true) { c->lr=0x801AE0CCu; dispatch(c,c->ctr); } // 801AE0C8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801AE0CC
  c->r[3]=c->r[31]|c->r[31]; // 801AE0D0
  c->r[4]=0u+0xFFFFFFFFu; // 801AE0D4
  c->r[5]=0u+0x00000000u; // 801AE0D8
  c->r[12]=R32(c->r[12]+0x00000054u); // 801AE0DC
  c->ctr=c->r[12]; // 801AE0E0
  if (true) { c->lr=0x801AE0E8u; dispatch(c,c->ctr); } // 801AE0E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801AE0E8
  c->r[3]=c->r[31]|c->r[31]; // 801AE0EC
  c->r[4]=c->r[13]+0xFFFF8D98u; // 801AE0F0
  c->r[12]=R32(c->r[12]+0x00000060u); // 801AE0F4
  c->ctr=c->r[12]; // 801AE0F8
  if (true) { c->lr=0x801AE100u; dispatch(c,c->ctr); } // 801AE0FC
  c->r[3]=0u+0x00000480u; // 801AE100
  c->lr=0x801AE108u; f_8007C17C(c); // 801AE104
  cmps(c,0,(int32_t)c->r[3],0); // 801AE108
  c->r[30]=c->r[3]|c->r[3]; // 801AE10C
  if (crb(c,2)) { goto L_801AE11C; } // 801AE110
  c->r[4]=0u+0x00000000u; // 801AE114
  c->lr=0x801AE11Cu; f_8034EC80(c); // 801AE118
L_801AE11C:;
  c->r[12]=R32(c->r[29]+0x000000FCu); // 801AE11C
  c->r[3]=c->r[29]+0x000000FCu; // 801AE120
  c->r[4]=c->r[30]|c->r[30]; // 801AE124
  c->r[5]=0u+0x00000001u; // 801AE128
  c->r[12]=R32(c->r[12]+0x00000040u); // 801AE12C
  c->ctr=c->r[12]; // 801AE130
  if (true) { c->lr=0x801AE138u; dispatch(c,c->ctr); } // 801AE134
  c->r[3]=c->r[30]|c->r[30]; // 801AE138
  c->r[4]=c->r[13]+0xFFFF8D90u; // 801AE13C
  c->lr=0x801AE144u; f_8034F3E0(c); // 801AE140
  c->r[3]=c->r[31]+0x00000044u; // 801AE144
  c->r[4]=0u+0x00000000u; // 801AE148
  c->r[5]=0u+0x00000000u; // 801AE14C
  c->lr=0x801AE154u; f_80095D28(c); // 801AE150
  c->r[3]=c->r[31]+0x00000044u; // 801AE154
  c->r[4]=0u+0x00000001u; // 801AE158
  c->r[5]=0u+0x00000000u; // 801AE15C
  c->lr=0x801AE164u; f_80095D28(c); // 801AE160
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE164
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE168
  c->lr=c->r[0]; // 801AE16C
  c->r[1]=c->r[1]+0x00000020u; // 801AE170
  return; // 801AE174
}

// fn_801AE178
void f_801AE178(Ctx* __restrict c) {
  trace_call(0x801AE178u);
  return; // 801AE178
}

// fn_801AE17C
void f_801AE17C(Ctx* __restrict c) {
  trace_call(0x801AE17Cu);
  return; // 801AE17C
}

// fn_801AE180
void f_801AE180(Ctx* __restrict c) {
  trace_call(0x801AE180u);
  return; // 801AE180
}

// fn_801AE184
void f_801AE184(Ctx* __restrict c) {
  trace_call(0x801AE184u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 801AE184
  f_801AAEE0(c); return; // 801AE188
}

// fn_801AE18C
void f_801AE18C(Ctx* __restrict c) {
  trace_call(0x801AE18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE18C
  c->r[0]=c->lr; // 801AE190
  c->r[4]=0u+0x806E0000u; // 801AE194
  c->r[7]=0u+0x00000000u; // 801AE198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE19C
  c->r[4]=c->r[4]+0x00002638u; // 801AE1A0
  c->r[6]=0u+0x00000002u; // 801AE1A4
  c->r[5]=0u+0xFFFFFFFFu; // 801AE1A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE1AC
  c->r[0]=c->r[4]+0x00000028u; // 801AE1B0
  c->r[30]=c->r[3]|c->r[3]; // 801AE1B4
  W32(c->r[3]+0x00000000u,c->r[7]); // 801AE1B8
  W32(c->r[3]+0x00000004u,c->r[6]); // 801AE1BC
  W32(c->r[3]+0x00000010u,c->r[5]); // 801AE1C0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801AE1C4
  W32(c->r[3]+0x00000018u,c->r[7]); // 801AE1C8
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 801AE1CC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801AE1D0
  W32(c->r[3]+0x00000020u,c->r[7]); // 801AE1D4
  W32(c->r[3]+0x00000008u,c->r[7]); // 801AE1D8
  W32(c->r[3]+0x000000A4u,c->r[4]); // 801AE1DC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801AE1E0
  c->r[3]=c->r[3]+0x000000D0u; // 801AE1E4
  c->lr=0x801AE1ECu; f_801AE254(c); // 801AE1E8
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 801AE1EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE1F0
  if (!crb(c,2)) { goto L_801AE218; } // 801AE1F4
  c->r[31]=0u+0x80730000u; // 801AE1F8
  c->r[3]=c->r[31]+0x000067B8u; // 801AE1FC
  c->lr=0x801AE204u; f_8029EF58(c); // 801AE200
  c->r[3]=0u+0x806D0000u; // 801AE204
  c->r[0]=0u+0x00000001u; // 801AE208
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 801AE20C
  W32(c->r[31]+0x000067B8u,c->r[3]); // 801AE210
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 801AE214
L_801AE218:;
  c->r[3]=0u+0x80730000u; // 801AE218
  c->r[8]=0u+0x80690000u; // 801AE21C
  c->r[4]=c->r[30]|c->r[30]; // 801AE220
  c->r[5]=0u+0x00000000u; // 801AE224
  c->r[3]=c->r[3]+0x000067B8u; // 801AE228
  c->r[8]=c->r[8]+0x00003758u; // 801AE22C
  c->r[6]=0u+0x0000003Fu; // 801AE230
  c->r[7]=0u+0x00000032u; // 801AE234
  c->lr=0x801AE23Cu; f_8029F4EC(c); // 801AE238
  c->r[3]=c->r[30]|c->r[30]; // 801AE23C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE244
  c->lr=c->r[0]; // 801AE248
  c->r[1]=c->r[1]+0x00000010u; // 801AE24C
  return; // 801AE250
}

// fn_801AE254
void f_801AE254(Ctx* __restrict c) {
  trace_call(0x801AE254u);
  {uint32_t ea=c->r[2]+0xFFFFC5E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AE254
  c->r[4]=0u+0xFFFFFFFFu; // 801AE258
  {uint32_t ea=c->r[2]+0xFFFFC5ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE25C
  c->r[0]=0u+0x00000000u; // 801AE260
  {uint32_t ea=c->r[2]+0xFFFFC5F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE264
  W32(c->r[3]+0x00000000u,c->r[4]); // 801AE268
  W32(c->r[3]+0x00000004u,c->r[0]); // 801AE26C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801AE270
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801AE274
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801AE278
  return; // 801AE27C
}

// dtor_801AE280
void f_801AE280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE280
  c->r[0]=c->lr; // 801AE284
  cmps(c,0,(int32_t)c->r[3],0); // 801AE288
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE28C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE290
  c->r[31]=c->r[3]|c->r[3]; // 801AE294
  if (crb(c,2)) { goto L_801AE2A0; } // 801AE298
  c->lr=0x801AE2A0u; f_801AE254(c); // 801AE29C
L_801AE2A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801AE2A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE2A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE2A8
  c->lr=c->r[0]; // 801AE2AC
  c->r[1]=c->r[1]+0x00000010u; // 801AE2B0
  return; // 801AE2B4
}

// fn_801AE2B8
void f_801AE2B8(Ctx* __restrict c) {
  trace_call(0x801AE2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE2B8
  c->r[0]=c->lr; // 801AE2BC
  cmps(c,0,(int32_t)c->r[3],0); // 801AE2C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE2C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE2C8
  c->r[31]=c->r[3]|c->r[3]; // 801AE2CC
  if (crb(c,2)) { goto L_801AE2F8; } // 801AE2D0
  c->r[4]=0u+0x806E0000u; // 801AE2D4
  c->r[4]=c->r[4]+0x00002638u; // 801AE2D8
  W32(c->r[3]+0x000000A4u,c->r[4]); // 801AE2DC
  c->r[0]=c->r[4]+0x00000028u; // 801AE2E0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801AE2E4
  c->lr=0x801AE2ECu; f_801AE53C(c); // 801AE2E8
  c->r[3]=c->r[31]+0x000000D0u; // 801AE2EC
  c->r[4]=0u+0xFFFFFFFFu; // 801AE2F0
  c->lr=0x801AE2F8u; f_801AE280(c); // 801AE2F4
L_801AE2F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801AE2F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE300
  c->lr=c->r[0]; // 801AE304
  c->r[1]=c->r[1]+0x00000010u; // 801AE308
  return; // 801AE30C
}

// fn_801AE310
void f_801AE310(Ctx* __restrict c) {
  trace_call(0x801AE310u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE310
  c->r[0]=c->lr; // 801AE314
  W32(c->r[1]+0x00000144u,c->r[0]); // 801AE318
  {uint32_t ea=c->r[1]+0x0000012Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE31C
  c->r[31]=c->r[1]|c->r[1]; // 801AE320
  c->r[30]=c->r[3]|c->r[3]; // 801AE324
  c->lr=0x801AE32Cu; f_801AE53C(c); // 801AE328
  c->r[4]=0u+0x80690000u; // 801AE32C
  c->r[3]=c->r[31]+0x00000028u; // 801AE330
  c->r[4]=c->r[4]+0x00003758u; // 801AE334
  c->r[4]=c->r[4]+0x0000001Au; // 801AE338
  c->lr=0x801AE340u; f_80048E74(c); // 801AE33C
  c->r[3]=0u+0x80740000u; // 801AE340
  c->r[4]=c->r[31]+0x00000028u; // 801AE344
  c->r[3]=c->r[3]+0x00004FD0u; // 801AE348
  c->lr=0x801AE350u; f_80313128(c); // 801AE34C
  c->r[0]=R8(c->r[3]+0x00000018u); // 801AE350
  c->r[4]=0u+0x00000000u; // 801AE354
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801AE358
  if (crb(c,2)) { goto L_801AE370; } // 801AE35C
  c->r[0]=R8(c->r[3]+0x00000019u); // 801AE360
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 801AE364
  if (!crb(c,2)) { goto L_801AE370; } // 801AE368
  c->r[4]=0u+0x00000001u; // 801AE36C
L_801AE370:;
  cmps(c,0,(int32_t)c->r[4],0); // 801AE370
  if (crb(c,2)) { goto L_801AE380; } // 801AE374
  c->r[27]=R32(c->r[3]+0x0000001Cu); // 801AE378
  goto L_801AE384; // 801AE37C
L_801AE380:;
  c->r[27]=0u+0x00000000u; // 801AE380
L_801AE384:;
  c->r[0]=0u+0x00000000u; // 801AE384
  W8(c->r[31]+0x00000008u,c->r[0]); // 801AE388
  c->r[3]=c->r[31]+0x00000008u; // 801AE38C
  c->lr=0x801AE394u; f_800A3310(c); // 801AE390
  c->r[5]=c->r[27]|c->r[27]; // 801AE394
  c->r[4]=c->r[31]+0x00000028u; // 801AE398
  c->lr=0x801AE3A0u; f_802E1740(c); // 801AE39C
  c->r[0]=R32(c->r[30]+0x000000ACu); // 801AE3A0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE3A4
  if (!crb(c,2)) { goto L_801AE49C; } // 801AE3A8
  c->lr=0x801AE3B0u; f_800A37D0(c); // 801AE3AC
  c->r[0]=R32(c->r[3]+0x00000028u); // 801AE3B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE3B4
  if (crb(c,2)) { goto L_801AE3DC; } // 801AE3B8
  c->r[3]=c->r[0]|c->r[0]; // 801AE3BC
  c->r[4]=0u+0x000000B8u; // 801AE3C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801AE3C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801AE3C8
  c->ctr=c->r[12]; // 801AE3CC
  if (true) { c->lr=0x801AE3D4u; dispatch(c,c->ctr); } // 801AE3D0
  c->r[27]=c->r[3]|c->r[3]; // 801AE3D4
  goto L_801AE3EC; // 801AE3D8
L_801AE3DC:;
  c->r[4]=0u+0x000000B8u; // 801AE3DC
  c->r[3]=c->r[3]+0x00000018u; // 801AE3E0
  c->lr=0x801AE3E8u; f_803C4D08(c); // 801AE3E4
  c->r[27]=c->r[3]|c->r[3]; // 801AE3E8
L_801AE3EC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801AE3EC
  if (crb(c,2)) { goto L_801AE498; } // 801AE3F0
  c->r[3]=0u+0x806D0000u; // 801AE3F4
  c->r[8]=0u+0x806E0000u; // 801AE3F8
  c->r[3]=c->r[3]+0x00005CF4u; // 801AE3FC
  W32(c->r[27]+0x00000000u,c->r[3]); // 801AE400
  c->r[0]=0u+0x00000000u; // 801AE404
  c->r[28]=0u+0x800A0000u; // 801AE408
  W32(c->r[27]+0x00000010u,c->r[0]); // 801AE40C
  c->r[29]=0u+0x800A0000u; // 801AE410
  c->r[9]=c->r[27]+0x00000010u; // 801AE414
  c->r[8]=c->r[8]+0x00006A60u; // 801AE418
  W32(c->r[27]+0x00000014u,c->r[0]); // 801AE41C
  c->r[3]=c->r[27]+0x00000080u; // 801AE420
  c->r[4]=c->r[28]+0x0000372Cu; // 801AE424
  c->r[5]=c->r[29]+0x0000373Cu; // 801AE428
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 801AE42C
  c->r[6]=0u+0x00000008u; // 801AE430
  c->r[7]=0u+0x00000002u; // 801AE434
  W32(c->r[27]+0x00000010u,c->r[9]); // 801AE438
  W32(c->r[27]+0x00000014u,c->r[9]); // 801AE43C
  W32(c->r[31]+0x00000024u,c->r[1]); // 801AE440
  W32(c->r[27]+0x00000000u,c->r[8]); // 801AE444
  c->lr=0x801AE44Cu; f_803A9830(c); // 801AE448
  c->r[3]=c->r[27]+0x00000090u; // 801AE44C
  c->r[4]=c->r[28]+0x0000372Cu; // 801AE450
  c->r[5]=c->r[29]+0x0000373Cu; // 801AE454
  c->r[6]=0u+0x00000008u; // 801AE458
  c->r[7]=0u+0x00000002u; // 801AE45C
  c->lr=0x801AE464u; f_803A9830(c); // 801AE460
  c->r[3]=c->r[27]|c->r[27]; // 801AE464
  c->lr=0x801AE46Cu; f_8020ED84(c); // 801AE468
  c->r[4]=0u+0x806E0000u; // 801AE46C
  c->r[3]=c->r[27]|c->r[27]; // 801AE470
  c->r[4]=c->r[4]+0x00002688u; // 801AE474
  W32(c->r[27]+0x00000000u,c->r[4]); // 801AE478
  c->r[4]=0u+0x00000000u; // 801AE47C
  c->lr=0x801AE484u; f_802DF8F0(c); // 801AE480
  goto L_801AE498; // 801AE484
  c->r[3]=0u+0x00000000u; // 801AE488
  c->r[4]=0u+0x00000000u; // 801AE48C
  c->r[5]=0u+0x00000000u; // 801AE490
  c->lr=0x801AE498u; f_803ABBF0(c); // 801AE494
L_801AE498:;
  W32(c->r[30]+0x000000ACu,c->r[27]); // 801AE498
L_801AE49C:;
  c->r[10]=c->r[31]|c->r[31]; // 801AE49C
  {uint32_t ea=c->r[10]+0x0000012Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE4A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AE4A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AE4A8
  c->r[1]=c->r[10]|c->r[10]; // 801AE4AC
  c->lr=c->r[0]; // 801AE4B0
  return; // 801AE4B4
}

// fn_801AE4B8
void f_801AE4B8(Ctx* __restrict c) {
  trace_call(0x801AE4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE4B8
  c->r[0]=c->lr; // 801AE4BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AE4C0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AE4C4
  c->r[31]=c->r[3]|c->r[3]; // 801AE4C8
  c->r[0]=R32(c->r[3]+0x000000ACu); // 801AE4CC
  cmps(c,0,(int32_t)c->r[0],0); // 801AE4D0
  if (crb(c,2)) { goto L_801AE4F4; } // 801AE4D4
  c->r[3]=c->r[0]|c->r[0]; // 801AE4D8
  c->lr=0x801AE4E0u; f_802DF9A4(c); // 801AE4DC
  c->lr=0x801AE4E4u; f_800A37D0(c); // 801AE4E0
  c->r[3]=R32(c->r[31]+0x000000ACu); // 801AE4E4
  c->lr=0x801AE4ECu; f_8005328C(c); // 801AE4E8
  c->r[0]=0u+0x00000000u; // 801AE4EC
  W32(c->r[31]+0x000000ACu,c->r[0]); // 801AE4F0
L_801AE4F4:;
  c->r[4]=0u+0x80690000u; // 801AE4F4
  c->r[3]=c->r[1]+0x00000010u; // 801AE4F8
  c->r[4]=c->r[4]+0x00003758u; // 801AE4FC
  c->r[4]=c->r[4]+0x0000001Au; // 801AE500
  c->lr=0x801AE508u; f_80048E74(c); // 801AE504
  c->r[0]=0u+0x00000000u; // 801AE508
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AE50C
  c->r[3]=c->r[1]+0x00000008u; // 801AE510
  c->lr=0x801AE518u; f_800A3310(c); // 801AE514
  c->r[4]=c->r[1]+0x00000010u; // 801AE518
  c->lr=0x801AE520u; f_802E1A50(c); // 801AE51C
  c->r[3]=c->r[31]|c->r[31]; // 801AE520
  c->lr=0x801AE528u; f_801AE53C(c); // 801AE524
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AE528
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AE52C
  c->lr=c->r[0]; // 801AE530
  c->r[1]=c->r[1]+0x00000040u; // 801AE534
  return; // 801AE538
}

// fn_801AE53C
void f_801AE53C(Ctx* __restrict c) {
  trace_call(0x801AE53Cu);
  {uint32_t ea=c->r[2]+0xFFFFC5F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE53C
  c->r[5]=0u+0x00000000u; // 801AE540
  c->r[4]=0u+0xFFFFFFFFu; // 801AE544
  c->r[0]=0u+0x00000001u; // 801AE548
  W32(c->r[3]+0x000000BCu,c->r[5]); // 801AE54C
  W32(c->r[3]+0x000000C8u,c->r[5]); // 801AE550
  W8(c->r[3]+0x000000B1u,c->r[5]); // 801AE554
  W8(c->r[3]+0x000000B2u,c->r[5]); // 801AE558
  W32(c->r[3]+0x000000B4u,c->r[4]); // 801AE55C
  W32(c->r[3]+0x000000B8u,c->r[4]); // 801AE560
  W8(c->r[3]+0x000000C4u,c->r[0]); // 801AE564
  W8(c->r[3]+0x000000B0u,c->r[5]); // 801AE568
  W32(c->r[3]+0x000000ACu,c->r[5]); // 801AE56C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 801AE570
  c->r[3]=c->r[3]+0x000000D0u; // 801AE574
  f_801AE254(c); return; // 801AE578
}

// fn_801AE57C
void f_801AE57C(Ctx* __restrict c) {
  trace_call(0x801AE57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE57C
  c->r[0]=c->lr; // 801AE580
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE584
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE588
  c->r[29]=c->r[3]|c->r[3]; // 801AE58C
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801AE590
  cmps(c,0,(int32_t)c->r[0],1); // 801AE594
  if (crb(c,2)) { goto L_801AE5B0; } // 801AE598
  cmps(c,0,(int32_t)c->r[0],2); // 801AE59C
  if (crb(c,2)) { goto L_801AE5CC; } // 801AE5A0
  cmps(c,0,(int32_t)c->r[0],3); // 801AE5A4
  if (crb(c,2)) { goto L_801AE660; } // 801AE5A8
  goto L_801AE680; // 801AE5AC
L_801AE5B0:;
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801AE5B0
  c->lr=0x801AE5B8u; f_801AF7A4(c); // 801AE5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AE5B8
  if (crb(c,2)) { goto L_801AE680; } // 801AE5BC
  c->r[0]=0u+0x00000002u; // 801AE5C0
  W32(c->r[29]+0x000000BCu,c->r[0]); // 801AE5C4
  goto L_801AE680; // 801AE5C8
L_801AE5CC:;
  c->r[0]=R8(c->r[3]+0x000000B0u); // 801AE5CC
  cmps(c,0,(int32_t)c->r[0],0); // 801AE5D0
  if (!crb(c,2)) { goto L_801AE680; } // 801AE5D4
  c->r[4]=R32(c->r[3]+0x000000C8u); // 801AE5D8
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801AE5DC
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 801AE5E0
  c->r[4]=cntlz(c->r[3]); // 801AE5E4
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801AE5E8
  c->r[30]=rotl(c->r[4],27)&0x07FFFFFFu; // 801AE5EC
  c->r[31]=c->r[3]+0x00000002u; // 801AE5F0
  goto L_801AE63C; // 801AE5F4
L_801AE5F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801AE5F8
  c->r[4]=c->r[30]|c->r[30]; // 801AE5FC
  c->lr=0x801AE604u; f_801AE698(c); // 801AE600
  cmps(c,0,(int32_t)c->r[3],0); // 801AE604
  if (crb(c,2)) { goto L_801AE638; } // 801AE608
  c->r[3]=0u+0xFFFFFFFFu; // 801AE60C
  c->r[0]=0u+0x00000000u; // 801AE610
  c->r[4]=0u+0x00000003u; // 801AE614
  W32(c->r[29]+0x000000BCu,c->r[4]); // 801AE618
  W32(c->r[29]+0x000000D0u,c->r[3]); // 801AE61C
  W32(c->r[29]+0x000000D4u,c->r[0]); // 801AE620
  W8(c->r[29]+0x000000B1u,c->r[0]); // 801AE624
  W8(c->r[29]+0x000000B2u,c->r[0]); // 801AE628
  W32(c->r[29]+0x000000B4u,c->r[3]); // 801AE62C
  W32(c->r[29]+0x000000B8u,c->r[3]); // 801AE630
  goto L_801AE644; // 801AE634
L_801AE638:;
  c->r[30]=c->r[30]+0x00000001u; // 801AE638
L_801AE63C:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801AE63C
  if (crb(c,0)) { IRQCHK(c); goto L_801AE5F8; } // 801AE640
L_801AE644:;
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AE644
  c->r[4]=R8(c->r[29]+0x000000B1u); // 801AE648
  c->lr=0x801AE650u; f_801AF9C4(c); // 801AE64C
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AE650
  c->r[4]=R8(c->r[29]+0x000000B2u); // 801AE654
  c->lr=0x801AE65Cu; f_801AFB0C(c); // 801AE658
  goto L_801AE680; // 801AE65C
L_801AE660:;
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801AE660
  c->lr=0x801AE668u; f_801AF87C(c); // 801AE664
  cmps(c,0,(int32_t)c->r[3],0); // 801AE668
  if (crb(c,2)) { goto L_801AE680; } // 801AE66C
  c->r[3]=0u+0x00000004u; // 801AE670
  c->r[0]=0u+0x00000000u; // 801AE674
  W32(c->r[29]+0x000000BCu,c->r[3]); // 801AE678
  W8(c->r[29]+0x000000B0u,c->r[0]); // 801AE67C
L_801AE680:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE680
  c->r[3]=0u+0x00000001u; // 801AE684
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE688
  c->lr=c->r[0]; // 801AE68C
  c->r[1]=c->r[1]+0x00000020u; // 801AE690
  return; // 801AE694
}

// fn_801AE698
void f_801AE698(Ctx* __restrict c) {
  trace_call(0x801AE698u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE698
  c->r[0]=c->lr; // 801AE69C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AE6A0
  c->r[0]=cntlz(c->r[4]); // 801AE6A4
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE6A8
  c->r[30]=0u+0x00000000u; // 801AE6AC
  c->r[27]=c->r[3]|c->r[3]; // 801AE6B0
  c->r[28]=c->r[4]|c->r[4]; // 801AE6B4
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AE6B8
  c->r[3]=c->r[1]+0x00000014u; // 801AE6BC
  c->r[29]=0u+0xFFFFFFFFu; // 801AE6C0
  W8(c->r[1]+0x00000014u,c->r[30]); // 801AE6C4
  c->lr=0x801AE6CCu; f_8004F55C(c); // 801AE6C8
  c->r[4]=c->r[28]|c->r[28]; // 801AE6CC
  c->lr=0x801AE6D4u; f_8005A508(c); // 801AE6D0
  c->r[4]=c->r[3]|c->r[3]; // 801AE6D4
  c->r[3]=c->r[1]+0x00000030u; // 801AE6D8
  c->lr=0x801AE6E0u; f_8005CD7C(c); // 801AE6DC
  c->r[0]=0u+0x00000000u; // 801AE6E0
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AE6E4
  c->r[3]=c->r[1]+0x00000010u; // 801AE6E8
  c->lr=0x801AE6F0u; f_80048270(c); // 801AE6EC
  c->r[4]=c->r[28]|c->r[28]; // 801AE6F0
  c->lr=0x801AE6F8u; f_800481D0(c); // 801AE6F4
  c->r[0]=R32(c->r[3]+0x00002A28u); // 801AE6F8
  cmps(c,0,(int32_t)c->r[0],-1); // 801AE6FC
  if (!crb(c,2)) { goto L_801AE70C; } // 801AE700
  c->r[29]=0u+0xFFFFFFFFu; // 801AE704
  goto L_801AE758; // 801AE708
L_801AE70C:;
  c->r[3]=c->r[1]+0x00000024u; // 801AE70C
  c->r[4]=c->r[1]+0x00000030u; // 801AE710
  c->lr=0x801AE718u; f_8005CD7C(c); // 801AE714
  c->r[4]=c->r[3]|c->r[3]; // 801AE718
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE71C
  c->lr=0x801AE724u; f_801AFC54(c); // 801AE720
  cmps(c,0,(int32_t)c->r[3],0); // 801AE724
  if (crb(c,2)) { goto L_801AE734; } // 801AE728
  c->r[29]=0u+0x00000000u; // 801AE72C
  goto L_801AE758; // 801AE730
L_801AE734:;
  c->r[3]=c->r[1]+0x00000018u; // 801AE734
  c->r[4]=c->r[1]+0x00000030u; // 801AE738
  c->lr=0x801AE740u; f_8005CD7C(c); // 801AE73C
  c->r[4]=c->r[3]|c->r[3]; // 801AE740
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE744
  c->lr=0x801AE74Cu; f_801AFE50(c); // 801AE748
  cmps(c,0,(int32_t)c->r[3],0); // 801AE74C
  if (crb(c,2)) { goto L_801AE758; } // 801AE750
  c->r[29]=0u+0x00000001u; // 801AE754
L_801AE758:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801AE758
  c->r[31]=c->r[27]+c->r[0]; // 801AE75C
  c->r[4]=R32(c->r[31]+0x000000B4u); // 801AE760
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 801AE764
  if (crb(c,2)) { goto L_801AE884; } // 801AE768
  cmps(c,0,(int32_t)c->r[29],-1); // 801AE76C
  if (crb(c,2)) { goto L_801AE81C; } // 801AE770
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801AE774
  c->r[3]=c->r[27]+c->r[0]; // 801AE778
  c->r[0]=R32(c->r[3]+0x000000B4u); // 801AE77C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801AE780
  if (crb(c,2)) { goto L_801AE7C0; } // 801AE784
  cmps(c,0,(int32_t)c->r[29],0); // 801AE788
  if (!crb(c,2)) { goto L_801AE7A4; } // 801AE78C
  c->r[3]=0u+0x00000001u; // 801AE790
  c->r[0]=0u+0x00000000u; // 801AE794
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE798
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE79C
  goto L_801AE80C; // 801AE7A0
L_801AE7A4:;
  cmps(c,0,(int32_t)c->r[29],1); // 801AE7A4
  if (!crb(c,2)) { goto L_801AE80C; } // 801AE7A8
  c->r[3]=0u+0x00000000u; // 801AE7AC
  c->r[0]=0u+0x00000001u; // 801AE7B0
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE7B4
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE7B8
  goto L_801AE80C; // 801AE7BC
L_801AE7C0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AE7C0
  if (!crb(c,2)) { goto L_801AE7E8; } // 801AE7C4
  c->r[0]=R8(c->r[27]+0x000000B1u); // 801AE7C8
  cmpu(c,0,c->r[0],0x00000001u); // 801AE7CC
  if (crb(c,2)) { goto L_801AE7E8; } // 801AE7D0
  c->r[3]=0u+0x00000001u; // 801AE7D4
  c->r[0]=0u+0x00000000u; // 801AE7D8
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE7DC
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE7E0
  goto L_801AE80C; // 801AE7E4
L_801AE7E8:;
  cmps(c,0,(int32_t)c->r[29],1); // 801AE7E8
  if (!crb(c,2)) { goto L_801AE80C; } // 801AE7EC
  c->r[0]=R8(c->r[27]+0x000000B2u); // 801AE7F0
  cmpu(c,0,c->r[0],0x00000001u); // 801AE7F4
  if (crb(c,2)) { goto L_801AE80C; } // 801AE7F8
  c->r[3]=0u+0x00000000u; // 801AE7FC
  c->r[0]=0u+0x00000001u; // 801AE800
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE804
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE808
L_801AE80C:;
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE80C
  c->lr=0x801AE814u; f_8020F03C(c); // 801AE810
  W32(c->r[31]+0x000000B4u,c->r[29]); // 801AE814
  goto L_801AE884; // 801AE818
L_801AE81C:;
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801AE81C
  c->r[3]=c->r[27]+c->r[0]; // 801AE820
  c->r[0]=R32(c->r[3]+0x000000B4u); // 801AE824
  cmps(c,0,(int32_t)c->r[0],-1); // 801AE828
  if (crb(c,2)) { goto L_801AE874; } // 801AE82C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801AE830
  if (crb(c,2)) { goto L_801AE86C; } // 801AE834
  cmps(c,0,(int32_t)c->r[0],0); // 801AE838
  if (!crb(c,2)) { goto L_801AE854; } // 801AE83C
  c->r[3]=0u+0x00000001u; // 801AE840
  c->r[0]=0u+0x00000000u; // 801AE844
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE848
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE84C
  goto L_801AE86C; // 801AE850
L_801AE854:;
  cmps(c,0,(int32_t)c->r[0],1); // 801AE854
  if (!crb(c,2)) { goto L_801AE86C; } // 801AE858
  c->r[3]=0u+0x00000000u; // 801AE85C
  c->r[0]=0u+0x00000001u; // 801AE860
  W8(c->r[27]+0x000000B1u,c->r[3]); // 801AE864
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE868
L_801AE86C:;
  W32(c->r[31]+0x000000B4u,c->r[29]); // 801AE86C
  goto L_801AE884; // 801AE870
L_801AE874:;
  c->r[0]=0u+0x00000000u; // 801AE874
  W8(c->r[27]+0x000000B1u,c->r[0]); // 801AE878
  W8(c->r[27]+0x000000B2u,c->r[0]); // 801AE87C
  W32(c->r[31]+0x000000B4u,c->r[29]); // 801AE880
L_801AE884:;
  c->r[29]=0u+0x00000000u; // 801AE884
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AE888
  c->r[3]=c->r[1]+0x0000000Cu; // 801AE88C
  c->lr=0x801AE894u; f_80048270(c); // 801AE890
  c->r[4]=c->r[28]|c->r[28]; // 801AE894
  c->lr=0x801AE89Cu; f_800481D0(c); // 801AE898
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)120); // 801AE89C
  c->r[5]=0u+0x80740000u; // 801AE8A0
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 801AE8A4
  c->r[4]=0u+0x0000000Eu; // 801AE8A8
  c->r[5]=c->r[5]+0x00004C10u; // 801AE8AC
  c->r[25]=c->r[5]+c->r[0]; // 801AE8B0
  c->r[3]=c->r[25]|c->r[25]; // 801AE8B4
  c->lr=0x801AE8BCu; f_80052BC8(c); // 801AE8B8
  c->r[0]=c->r[26]&c->r[3]; cr0(c,c->r[0]); // 801AE8BC
  if (crb(c,2)) { goto L_801AE924; } // 801AE8C0
  c->r[0]=R8(c->r[27]+0x000000B1u); // 801AE8C4
  cmpu(c,0,c->r[0],0x00000001u); // 801AE8C8
  if (!crb(c,2)) { goto L_801AE8F4; } // 801AE8CC
  c->r[0]=R32(c->r[31]+0x000000B4u); // 801AE8D0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE8D4
  if (!crb(c,2)) { goto L_801AE8F4; } // 801AE8D8
  W32(c->r[27]+0x000000C0u,c->r[29]); // 801AE8DC
  c->r[4]=c->r[28]|c->r[28]; // 801AE8E0
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE8E4
  c->r[30]=0u+0x00000001u; // 801AE8E8
  c->lr=0x801AE8F0u; f_8020F0B8(c); // 801AE8EC
  goto L_801AE984; // 801AE8F0
L_801AE8F4:;
  c->r[0]=R8(c->r[27]+0x000000B2u); // 801AE8F4
  cmpu(c,0,c->r[0],0x00000001u); // 801AE8F8
  if (!crb(c,2)) { goto L_801AE984; } // 801AE8FC
  c->r[0]=R32(c->r[31]+0x000000B4u); // 801AE900
  cmps(c,0,(int32_t)c->r[0],1); // 801AE904
  if (!crb(c,2)) { goto L_801AE984; } // 801AE908
  c->r[30]=0u+0x00000001u; // 801AE90C
  W32(c->r[27]+0x000000C0u,c->r[30]); // 801AE910
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE914
  c->r[4]=c->r[28]|c->r[28]; // 801AE918
  c->lr=0x801AE920u; f_8020F17C(c); // 801AE91C
  goto L_801AE984; // 801AE920
L_801AE924:;
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE924
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801AE928
  cmps(c,0,(int32_t)c->r[0],1); // 801AE92C
  if (crb(c,2)) { goto L_801AE984; } // 801AE930
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AE934
  c->r[3]=c->r[1]+0x00000008u; // 801AE938
  c->lr=0x801AE940u; f_80048270(c); // 801AE93C
  c->r[4]=c->r[28]|c->r[28]; // 801AE940
  c->lr=0x801AE948u; f_800481D0(c); // 801AE944
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 801AE948
  c->r[3]=c->r[25]|c->r[25]; // 801AE94C
  c->r[4]=0u+0x0000000Fu; // 801AE950
  c->lr=0x801AE958u; f_80052BC8(c); // 801AE954
  c->r[0]=c->r[26]&c->r[3]; cr0(c,c->r[0]); // 801AE958
  if (crb(c,2)) { goto L_801AE984; } // 801AE95C
  c->r[0]=R8(c->r[27]+0x000000C4u); // 801AE960
  cmps(c,0,(int32_t)c->r[0],0); // 801AE964
  if (crb(c,2)) { goto L_801AE984; } // 801AE968
  c->r[0]=0u+0x00000002u; // 801AE96C
  W32(c->r[27]+0x000000C0u,c->r[0]); // 801AE970
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AE974
  c->r[4]=c->r[28]|c->r[28]; // 801AE978
  c->r[30]=0u+0x00000001u; // 801AE97C
  c->lr=0x801AE984u; f_8020F17C(c); // 801AE980
L_801AE984:;
  c->r[3]=c->r[30]|c->r[30]; // 801AE984
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE988
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AE98C
  c->lr=c->r[0]; // 801AE990
  c->r[1]=c->r[1]+0x00000060u; // 801AE994
  return; // 801AE998
}

// fn_801AE99C
void f_801AE99C(Ctx* __restrict c) {
  trace_call(0x801AE99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE99C
  c->r[0]=c->lr; // 801AE9A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AE9A4
  c->r[11]=c->r[1]+0x00000040u; // 801AE9A8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801AE9AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801AE9B0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801AE9B4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801AE9B8
  c->lr=0x801AE9C0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE9BC
  c->r[0]=0u+0x00000000u; // 801AE9C0
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AE9C4
  c->r[30]=c->r[3]|c->r[3]; // 801AE9C8
  c->r[3]=c->r[1]+0x00000010u; // 801AE9CC
  c->lr=0x801AE9D4u; f_800486E8(c); // 801AE9D0
  c->r[0]=R8(c->r[3]+0x00000020u); // 801AE9D4
  c->r[31]=c->r[3]|c->r[3]; // 801AE9D8
  cmps(c,0,(int32_t)c->r[0],0); // 801AE9DC
  if (!crb(c,2)) { goto L_801AEA88; } // 801AE9E0
  c->r[4]=R32(c->r[3]+0x00000010u); // 801AE9E4
  cmps(c,0,(int32_t)c->r[4],0); // 801AE9E8
  if (crb(c,2)) { goto L_801AEA88; } // 801AE9EC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801AE9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE9F4
  if (crb(c,2)) { goto L_801AEA88; } // 801AE9F8
  c->r[0]=R32(c->r[3]+0x00000028u); // 801AE9FC
  cmps(c,0,(int32_t)c->r[0],14); // 801AEA00
  if (!crb(c,1)) { goto L_801AEA88; } // 801AEA04
  c->r[0]=R32(c->r[4]+0x00000070u); // 801AEA08
  cmps(c,0,(int32_t)c->r[0],0); // 801AEA0C
  if (!crb(c,2)) { goto L_801AEA20; } // 801AEA10
  c->r[0]=R32(c->r[3]+0x00000014u); // 801AEA14
  W32(c->r[4]+0x00000070u,c->r[0]); // 801AEA18
  goto L_801AEA2C; // 801AEA1C
L_801AEA20:;
  c->r[4]=R32(c->r[4]+0x00000074u); // 801AEA20
  c->r[0]=R32(c->r[3]+0x00000014u); // 801AEA24
  W32(c->r[4]+0x00000004u,c->r[0]); // 801AEA28
L_801AEA2C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801AEA2C
  c->r[0]=0u+0x00000000u; // 801AEA30
  c->r[5]=R32(c->r[3]+0x00000014u); // 801AEA34
  W32(c->r[4]+0x00000074u,c->r[5]); // 801AEA38
  c->r[4]=R32(c->r[3]+0x00000014u); // 801AEA3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AEA40
  c->r[4]=R32(c->r[3]+0x00000014u); // 801AEA44
  W32(c->r[4]+0x00000008u,c->r[0]); // 801AEA48
  c->r[4]=R32(c->r[3]+0x00000014u); // 801AEA4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801AEA50
  c->r[0]=R8(c->r[31]+0x00000030u); // 801AEA54
  c->r[5]=R32(c->r[3]+0x00000014u); // 801AEA58
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801AEA5C
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801AEA60
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AEA64
  c->r[4]=c->r[31]+c->r[4]; // 801AEA68
  c->r[3]=c->r[5]+0x00000020u; // 801AEA6C
  c->r[4]=R32(c->r[4]+0x00000018u); // 801AEA70
  c->r[4]=c->r[3]-c->r[4]; // 801AEA74
  c->r[4]=c->r[0]-c->r[4]; // 801AEA78
  c->lr=0x801AEA80u; f_803A8234(c); // 801AEA7C
  c->r[0]=0u+0x0000000Eu; // 801AEA80
  W32(c->r[31]+0x00000024u,c->r[0]); // 801AEA84
L_801AEA88:;
  c->r[0]=R32(c->r[30]+0x000000BCu); // 801AEA88
  cmps(c,0,(int32_t)c->r[0],2); // 801AEA8C
  if (!crb(c,2)) { goto L_801AEAF8; } // 801AEA90
  c->r[0]=R8(c->r[30]+0x000000B0u); // 801AEA94
  cmps(c,0,(int32_t)c->r[0],0); // 801AEA98
  if (!crb(c,2)) { goto L_801AEAF8; } // 801AEA9C
  c->r[4]=R32(c->r[30]+0x000000C8u); // 801AEAA0
  c->r[3]=c->r[30]|c->r[30]; // 801AEAA4
  c->lr=0x801AEAACu; f_801AED4C(c); // 801AEAA8
  c->r[3]=R32(c->r[30]+0x000000ACu); // 801AEAAC
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801AEAB0
  cmps(c,0,(int32_t)c->r[0],1); // 801AEAB4
  if (!crb(c,2)) { goto L_801AEAD8; } // 801AEAB8
  c->r[4]=0u+0x80690000u; // 801AEABC
  c->r[5]=0u+0x00000001u; // 801AEAC0
  c->r[4]=c->r[4]+0x00003758u; // 801AEAC4
  c->r[6]=0u+0xFFFFFFFFu; // 801AEAC8
  c->r[4]=c->r[4]+0x00000037u; // 801AEACC
  c->lr=0x801AEAD4u; f_8020F928(c); // 801AEAD0
  goto L_801AEAF8; // 801AEAD4
L_801AEAD8:;
  c->r[4]=0u+0x80690000u; // 801AEAD8
  c->r[5]=0u+0xFFFFFFFFu; // 801AEADC
  c->r[4]=c->r[4]+0x00003758u; // 801AEAE0
  c->r[6]=0u+0x00000000u; // 801AEAE4
  c->r[4]=c->r[4]+0x00000037u; // 801AEAE8
  c->r[7]=0u+0x00000001u; // 801AEAEC
  c->r[8]=0u+0xFFFFFFFFu; // 801AEAF0
  c->lr=0x801AEAF8u; f_8020F8AC(c); // 801AEAF4
L_801AEAF8:;
  c->r[0]=R8(c->r[30]+0x000000B1u); // 801AEAF8
  c->r[4]=0u+0xFFFFFFFFu; // 801AEAFC
  cmps(c,0,(int32_t)c->r[0],0); // 801AEB00
  if (crb(c,2)) { goto L_801AEB10; } // 801AEB04
  c->r[4]=0u+0x0000004Du; // 801AEB08
  goto L_801AEB20; // 801AEB0C
L_801AEB10:;
  c->r[0]=R8(c->r[30]+0x000000B2u); // 801AEB10
  cmps(c,0,(int32_t)c->r[0],0); // 801AEB14
  if (crb(c,2)) { goto L_801AEB20; } // 801AEB18
  c->r[4]=0u+0x0000004Eu; // 801AEB1C
L_801AEB20:;
  cmps(c,0,(int32_t)c->r[4],-1); // 801AEB20
  if (crb(c,2)) { goto L_801AEB8C; } // 801AEB24
  c->r[0]=R8(c->r[30]+0x000000B0u); // 801AEB28
  cmps(c,0,(int32_t)c->r[0],0); // 801AEB2C
  if (!crb(c,2)) { goto L_801AEB8C; } // 801AEB30
  c->r[3]=0u+0x80750000u; // 801AEB34
  c->r[5]=c->r[30]+0x000000E8u; // 801AEB38
  c->r[3]=c->r[3]+0xFFFFBC98u; // 801AEB3C
  c->lr=0x801AEB44u; f_800AB224(c); // 801AEB40
  cmps(c,0,(int32_t)c->r[3],0); // 801AEB44
  if (crb(c,2)) { goto L_801AEB8C; } // 801AEB48
  {uint32_t ea=c->r[2]+0xFFFFC5ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEB4C
  c->r[27]=0u+0x80760000u; // 801AEB50
  {uint32_t ea=c->r[2]+0xFFFFC5F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEB54
  c->r[3]=c->r[27]+0xFFFF9518u; // 801AEB58
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 801AEB5C
  c->lr=0x801AEB64u; f_802DA618(c); // 801AEB60
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AEB64
  c->r[3]=c->r[27]+0xFFFF9518u; // 801AEB68
  {uint32_t ea=c->r[2]+0xFFFFC5FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEB6C
  c->r[4]=0u+0xFFFFFFFFu; // 801AEB70
  {uint32_t ea=c->r[2]+0xFFFFC5F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEB74
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801AEB78
  {uint32_t ea=c->r[2]+0xFFFFC5F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AEB7C
  c->r[5]=R32(c->r[30]+0x000000F0u); // 801AEB80
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801AEB84
  c->lr=0x801AEB8Cu; f_802DAA7C(c); // 801AEB88
L_801AEB8C:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 801AEB8C
  cmps(c,0,(int32_t)c->r[0],0); // 801AEB90
  if (!crb(c,1)) { goto L_801AEC94; } // 801AEB94
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEB98
  c->r[27]=0u+0x80760000u; // 801AEB9C
  {uint32_t ea=c->r[2]+0xFFFFC5F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEBA0
  c->r[3]=c->r[27]+0xFFFF9518u; // 801AEBA4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 801AEBA8
  c->lr=0x801AEBB0u; f_802DA618(c); // 801AEBAC
  c->r[0]=0u+0xFFFFFFFFu; // 801AEBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEBB4
  c->r[3]=R32(c->r[30]+0x000000ACu); // 801AEBB8
  c->r[4]=c->r[13]+0xFFFF8DC0u; // 801AEBBC
  c->lr=0x801AEBC4u; f_802DF854(c); // 801AEBC0
  c->r[0]=0u+0x00000000u; // 801AEBC4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801AEBC8
  c->r[28]=c->r[3]|c->r[3]; // 801AEBCC
  c->r[3]=c->r[1]+0x0000000Cu; // 801AEBD0
  c->lr=0x801AEBD8u; f_8012556C(c); // 801AEBD4
  c->r[0]=R8(c->r[28]+0x000000B8u); // 801AEBD8
  c->r[26]=0u+0x00000000u; // 801AEBDC
  W8(c->r[1]+0x00000017u,c->r[0]); // 801AEBE0
  c->r[25]=0u+0x00000000u; // 801AEBE4
  {uint32_t ea=c->r[2]+0xFFFFC608u; c->f[30]=RF64(ea);} // 801AEBE8
  c->r[29]=0u+0x43300000u; // 801AEBEC
  {uint32_t ea=c->r[2]+0xFFFFC600u; c->f[31]=c->ps1[31]=RF32(ea);} // 801AEBF0
  c->r[28]=0u+0x80750000u; // 801AEBF4
  goto L_801AEC88; // 801AEBF8
L_801AEBFC:;
  c->r[0]=R32(c->r[30]+0x000000D0u); // 801AEBFC
  c->r[3]=c->r[28]+0xFFFFBC98u; // 801AEC00
  c->r[5]=c->r[30]+0x000000E8u; // 801AEC04
  c->r[4]=c->r[0]+c->r[25]; // 801AEC08
  c->lr=0x801AEC10u; f_800AB224(c); // 801AEC0C
  c->r[24]=0u+0x00000000u; // 801AEC10
  c->r[31]=0u+0x00000000u; // 801AEC14
  goto L_801AEC78; // 801AEC18
L_801AEC1C:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEC1C
  c->r[0]=c->r[26]^0x80000000u; // 801AEC20
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEC24
  c->r[5]=c->r[30]+c->r[31]; // 801AEC28
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AEC2C
  c->r[3]=c->r[27]+0xFFFF9518u; // 801AEC30
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 801AEC34
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEC38
  W32(c->r[1]+0x00000018u,c->r[29]); // 801AEC3C
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEC40
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[1],c->f[31],-c->f[2])); // 801AEC44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 801AEC48
  {uint32_t ea=c->r[2]+0xFFFFC5F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEC4C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[30]); // 801AEC50
  {uint32_t ea=c->r[2]+0xFFFFC5F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AEC54
  c->r[4]=R32(c->r[1]+0x00000014u); // 801AEC58
  c->r[5]=R32(c->r[5]+0x000000F0u); // 801AEC5C
  c->f[3]=c->ps1[3]=S(std::fma(c->f[0],c->f[4],c->f[3])); // 801AEC60
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801AEC64
  c->lr=0x801AEC6Cu; f_802DAA7C(c); // 801AEC68
  c->r[26]=c->r[26]+0x00000001u; // 801AEC6C
  c->r[24]=c->r[24]+0x00000001u; // 801AEC70
  c->r[31]=c->r[31]+0x00000004u; // 801AEC74
L_801AEC78:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801AEC78
  cmpu(c,0,c->r[24],c->r[0]); // 801AEC7C
  if (crb(c,0)) { IRQCHK(c); goto L_801AEC1C; } // 801AEC80
  c->r[25]=c->r[25]+0x00000001u; // 801AEC84
L_801AEC88:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 801AEC88
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801AEC8C
  if (crb(c,0)) { IRQCHK(c); goto L_801AEBFC; } // 801AEC90
L_801AEC94:;
  c->r[0]=0u+0x00000000u; // 801AEC94
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEC98
  c->r[3]=c->r[1]+0x00000008u; // 801AEC9C
  c->lr=0x801AECA4u; f_800486E8(c); // 801AECA0
  c->r[0]=R8(c->r[3]+0x00000020u); // 801AECA4
  c->r[30]=c->r[3]|c->r[3]; // 801AECA8
  cmps(c,0,(int32_t)c->r[0],0); // 801AECAC
  if (!crb(c,2)) { goto L_801AED24; } // 801AECB0
  c->r[4]=R32(c->r[3]+0x00000010u); // 801AECB4
  cmps(c,0,(int32_t)c->r[4],0); // 801AECB8
  if (crb(c,2)) { goto L_801AED24; } // 801AECBC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801AECC0
  cmps(c,0,(int32_t)c->r[0],0); // 801AECC4
  if (crb(c,2)) { goto L_801AED24; } // 801AECC8
  c->r[0]=R32(c->r[3]+0x00000024u); // 801AECCC
  cmps(c,0,(int32_t)c->r[0],0); // 801AECD0
  if (crb(c,0)) { goto L_801AED24; } // 801AECD4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801AECD8
  c->r[3]=c->r[4]+c->r[0]; // 801AECDC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801AECE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AECE4
  cmps(c,0,(int32_t)c->r[0],0); // 801AECE8
  if (!crb(c,2)) { goto L_801AED24; } // 801AECEC
  c->lr=0x801AECF4u; f_803A82E8(c); // 801AECF0
  c->r[4]=R32(c->r[30]+0x00000024u); // 801AECF4
  c->r[0]=0u+0xFFFFFFFFu; // 801AECF8
  c->r[5]=R32(c->r[30]+0x00000010u); // 801AECFC
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801AED00
  c->r[4]=c->r[5]+c->r[4]; // 801AED04
  c->r[4]=R32(c->r[4]+0x00000004u); // 801AED08
  W32(c->r[4]+0x00000008u,c->r[3]); // 801AED0C
  W32(c->r[30]+0x00000024u,c->r[0]); // 801AED10
  c->r[0]=R32(c->r[30]+0x00000014u); // 801AED14
  c->r[3]=c->r[3]+c->r[0]; // 801AED18
  c->r[0]=c->r[3]+0x00000020u; // 801AED1C
  W32(c->r[30]+0x00000014u,c->r[0]); // 801AED20
L_801AED24:;
  c->r[11]=c->r[1]+0x00000040u; // 801AED24
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801AED28
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801AED2C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801AED30
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801AED34
  c->lr=0x801AED3Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AED38
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AED3C
  c->lr=c->r[0]; // 801AED40
  c->r[1]=c->r[1]+0x00000060u; // 801AED44
  return; // 801AED48
}

// fn_801AED4C
void f_801AED4C(Ctx* __restrict c) {
  trace_call(0x801AED4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED4C
  c->r[0]=c->lr; // 801AED50
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AED54
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AED58
  c->r[27]=c->r[3]|c->r[3]; // 801AED5C
  c->r[0]=R32(c->r[3]+0x000000ACu); // 801AED60
  cmps(c,0,(int32_t)c->r[0],0); // 801AED64
  if (crb(c,2)) { goto L_801AEE18; } // 801AED68
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801AED6C
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 801AED70
  c->r[4]=cntlz(c->r[3]); // 801AED74
  c->r[31]=0u+0x00000000u; // 801AED78
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801AED7C
  c->r[28]=rotl(c->r[4],27)&0x07FFFFFFu; // 801AED80
  c->r[30]=c->r[3]+0x00000002u; // 801AED84
  goto L_801AEE10; // 801AED88
L_801AED8C:;
  W8(c->r[1]+0x00000010u,c->r[31]); // 801AED8C
  c->r[3]=c->r[1]+0x00000010u; // 801AED90
  c->lr=0x801AED98u; f_80048270(c); // 801AED94
  c->r[4]=c->r[28]|c->r[28]; // 801AED98
  c->lr=0x801AEDA0u; f_800481D0(c); // 801AED9C
  c->r[0]=R32(c->r[3]+0x00002A28u); // 801AEDA0
  cmps(c,0,(int32_t)c->r[0],-1); // 801AEDA4
  if (crb(c,2)) { goto L_801AEE0C; } // 801AEDA8
  W8(c->r[1]+0x00000008u,c->r[31]); // 801AEDAC
  c->r[3]=c->r[1]+0x00000008u; // 801AEDB0
  c->lr=0x801AEDB8u; f_80046EFC(c); // 801AEDB4
  c->r[4]=c->r[28]|c->r[28]; // 801AEDB8
  c->lr=0x801AEDC0u; f_800B2800(c); // 801AEDBC
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801AEDC0
  c->r[29]=c->r[3]|c->r[3]; // 801AEDC4
  c->r[3]=c->r[1]+0x0000000Cu; // 801AEDC8
  c->lr=0x801AEDD0u; f_8004F55C(c); // 801AEDCC
  c->r[4]=c->r[28]|c->r[28]; // 801AEDD0
  c->lr=0x801AEDD8u; f_8005A508(c); // 801AEDD4
  c->r[4]=c->r[3]|c->r[3]; // 801AEDD8
  c->r[3]=c->r[1]+0x00000020u; // 801AEDDC
  c->lr=0x801AEDE4u; f_8005CD7C(c); // 801AEDE0
  c->r[0]=R32(c->r[27]+0x000000ACu); // 801AEDE4
  cmps(c,0,(int32_t)c->r[0],0); // 801AEDE8
  if (crb(c,2)) { goto L_801AEE0C; } // 801AEDEC
  c->r[3]=c->r[1]+0x00000014u; // 801AEDF0
  c->r[4]=c->r[1]+0x00000020u; // 801AEDF4
  c->lr=0x801AEDFCu; f_8005CD7C(c); // 801AEDF8
  c->r[4]=c->r[3]|c->r[3]; // 801AEDFC
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801AEE00
  c->r[5]=c->r[29]|c->r[29]; // 801AEE04
  c->lr=0x801AEE0Cu; f_801AF5AC(c); // 801AEE08
L_801AEE0C:;
  c->r[28]=c->r[28]+0x00000001u; // 801AEE0C
L_801AEE10:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 801AEE10
  if (crb(c,0)) { IRQCHK(c); goto L_801AED8C; } // 801AEE14
L_801AEE18:;
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AEE18
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AEE1C
  c->lr=c->r[0]; // 801AEE20
  c->r[1]=c->r[1]+0x00000050u; // 801AEE24
  return; // 801AEE28
}

// fn_801AEE2C
void f_801AEE2C(Ctx* __restrict c) {
  trace_call(0x801AEE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEE2C
  c->r[0]=c->lr; // 801AEE30
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AEE34
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AEE38
  c->r[29]=c->r[3]|c->r[3]; // 801AEE3C
  c->r[26]=c->r[4]|c->r[4]; // 801AEE40
  c->r[30]=c->r[5]|c->r[5]; // 801AEE44
  c->r[31]=c->r[6]|c->r[6]; // 801AEE48
  c->r[27]=c->r[7]|c->r[7]; // 801AEE4C
  c->r[28]=c->r[8]|c->r[8]; // 801AEE50
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801AEE54
  cmps(c,0,(int32_t)c->r[0],4); // 801AEE58
  if (!crb(c,2)) { goto L_801AEE68; } // 801AEE5C
  c->r[0]=0u+0x00000000u; // 801AEE60
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801AEE64
L_801AEE68:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801AEE68
  cmps(c,0,(int32_t)c->r[0],0); // 801AEE6C
  if (!crb(c,2)) { goto L_801AEEF8; } // 801AEE70
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801AEE74
  c->r[0]=0u+0x00000001u; // 801AEE78
  c->r[4]=c->r[30]|c->r[30]; // 801AEE7C
  c->r[5]=c->r[31]|c->r[31]; // 801AEE80
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801AEE84
  c->r[3]=c->r[29]|c->r[29]; // 801AEE88
  c->lr=0x801AEE90u; f_801AEF34(c); // 801AEE8C
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AEE90
  c->lr=0x801AEE98u; f_801AF384(c); // 801AEE94
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AEE98
  c->r[4]=c->r[27]|c->r[27]; // 801AEE9C
  c->r[5]=c->r[28]|c->r[28]; // 801AEEA0
  c->lr=0x801AEEA8u; f_801AF4E0(c); // 801AEEA4
  c->r[3]=c->r[26]+0xFFFFFFFFu; // 801AEEA8
  c->r[0]=0u+0x00000000u; // 801AEEAC
  c->r[3]=cntlz(c->r[3]); // 801AEEB0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEEB4
  c->r[28]=rotl(c->r[3],27)&0x07FFFFFFu; // 801AEEB8
  c->r[3]=c->r[1]+0x00000008u; // 801AEEBC
  c->lr=0x801AEEC4u; f_80048270(c); // 801AEEC0
  c->r[4]=c->r[28]|c->r[28]; // 801AEEC4
  c->lr=0x801AEECCu; f_800481D0(c); // 801AEEC8
  c->r[4]=c->r[3]|c->r[3]; // 801AEECC
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AEED0
  c->r[4]=R32(c->r[4]+0x00002A2Cu); // 801AEED4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801AEED8
  c->r[0]=cntlz(c->r[0]); // 801AEEDC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AEEE0
  c->lr=0x801AEEE8u; f_801AF4DC(c); // 801AEEE4
  c->r[3]=R32(c->r[29]+0x000000ACu); // 801AEEE8
  c->lr=0x801AEEF0u; f_8020EFEC(c); // 801AEEEC
  c->r[0]=0u+0xFFFFFFFFu; // 801AEEF0
  W32(c->r[29]+0x000000C0u,c->r[0]); // 801AEEF4
L_801AEEF8:;
  c->r[0]=R32(c->r[29]+0x000000D0u); // 801AEEF8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801AEEFC
  if (!crb(c,2)) { goto L_801AEF10; } // 801AEF00
  c->r[0]=R32(c->r[29]+0x000000D4u); // 801AEF04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801AEF08
  if (crb(c,2)) { goto L_801AEF20; } // 801AEF0C
L_801AEF10:;
  c->r[3]=c->r[29]|c->r[29]; // 801AEF10
  c->r[4]=c->r[30]|c->r[30]; // 801AEF14
  c->r[5]=c->r[31]|c->r[31]; // 801AEF18
  c->lr=0x801AEF20u; f_801AEF34(c); // 801AEF1C
L_801AEF20:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AEF20
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AEF24
  c->lr=c->r[0]; // 801AEF28
  c->r[1]=c->r[1]+0x00000030u; // 801AEF2C
  return; // 801AEF30
}

// fn_801AEF34
void f_801AEF34(Ctx* __restrict c) {
  trace_call(0x801AEF34u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF34
  c->r[0]=c->lr; // 801AEF38
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801AEF3C
  c->r[11]=c->r[1]+0x000000A0u; // 801AEF40
  c->lr=0x801AEF48u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AEF44
  c->r[27]=c->r[5]|c->r[5]; // 801AEF48
  W32(c->r[3]+0x000000D0u,c->r[4]); // 801AEF4C
  c->r[31]=c->r[3]|c->r[3]; // 801AEF50
  c->r[26]=c->r[4]|c->r[4]; // 801AEF54
  W32(c->r[3]+0x000000D4u,c->r[5]); // 801AEF58
  c->r[30]=c->r[27]|c->r[27]; // 801AEF5C
  c->r[28]=0u+0x00000000u; // 801AEF60
  c->r[29]=0u+0x80750000u; // 801AEF64
  goto L_801AEF8C; // 801AEF68
L_801AEF6C:;
  c->r[3]=c->r[29]+0xFFFFBC98u; // 801AEF6C
  c->r[4]=c->r[26]+c->r[28]; // 801AEF70
  c->r[5]=c->r[1]+0x00000028u; // 801AEF74
  c->lr=0x801AEF7Cu; f_800AB224(c); // 801AEF78
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801AEF7C
  c->r[28]=c->r[28]+0x00000001u; // 801AEF80
  c->r[3]=c->r[0]+c->r[30]; // 801AEF84
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 801AEF88
L_801AEF8C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801AEF8C
  if (crb(c,0)) { IRQCHK(c); goto L_801AEF6C; } // 801AEF90
  {uint32_t ea=c->r[2]+0xFFFFC5ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801AEF94
  cmps(c,0,(int32_t)c->r[30],6); // 801AEF98
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[3]);} // 801AEF9C
  if (crb(c,0)) { goto L_801AEFE8; } // 801AEFA0
  c->r[3]=c->r[30]+0xFFFFFFFBu; // 801AEFA4
  c->r[0]=0u+0x43300000u; // 801AEFA8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)30); // 801AEFAC
  W32(c->r[1]+0x00000078u,c->r[0]); // 801AEFB0
  {uint32_t ea=c->r[2]+0xFFFFC608u; c->f[2]=RF64(ea);} // 801AEFB4
  {uint32_t ea=c->r[2]+0xFFFFC610u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEFB8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[30]); // 801AEFBC
  c->r[0]=addc(c,~c->r[0],0x0000001Eu,1); // 801AEFC0
  c->r[0]=c->r[0]^0x80000000u; // 801AEFC4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801AEFC8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 801AEFCC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801AEFD0
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[1]);} // 801AEFD4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801AEFD8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801AEFDC
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 801AEFE0
  goto L_801AF004; // 801AEFE4
L_801AEFE8:;
  cmps(c,0,(int32_t)c->r[30],4); // 801AEFE8
  if (crb(c,0)) { goto L_801AEFFC; } // 801AEFEC
  {uint32_t ea=c->r[2]+0xFFFFC610u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEFF0
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 801AEFF4
  goto L_801AF004; // 801AEFF8
L_801AEFFC:;
  {uint32_t ea=c->r[2]+0xFFFFC5E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEFFC
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 801AF000
L_801AF004:;
  c->r[3]=c->r[30]+0xFFFFFFFFu; // 801AF004
  c->r[0]=0u+0x43300000u; // 801AF008
  c->r[3]=c->r[3]^0x80000000u; // 801AF00C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801AF010
  c->r[4]=0u+0x806E0000u; // 801AF014
  {uint32_t ea=c->r[2]+0xFFFFC608u; c->f[4]=RF64(ea);} // 801AF018
  W32(c->r[1]+0x00000078u,c->r[0]); // 801AF01C
  c->r[4]=c->r[4]+0x0000266Cu; // 801AF020
  {uint32_t ea=c->r[2]+0xFFFFC600u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF024
  W32(c->r[1]+0x00000084u,c->r[3]); // 801AF028
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 801AF02C
  W32(c->r[1]+0x00000080u,c->r[0]); // 801AF030
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801AF034
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF038
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=RF64(ea);} // 801AF03C
  c->r[3]=R32(c->r[31]+0x000000ACu); // 801AF040
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 801AF044
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[1],-c->f[2])); // 801AF048
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801AF04C
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 801AF050
  c->lr=0x801AF058u; f_802DF854(c); // 801AF054
  c->r[30]=0u+0x00000000u; // 801AF058
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 801AF05C
  c->r[29]=c->r[3]|c->r[3]; // 801AF060
  c->r[3]=c->r[1]+0x0000000Cu; // 801AF064
  c->lr=0x801AF06Cu; f_8012556C(c); // 801AF068
  c->r[0]=R32(c->r[29]+0x00000030u); // 801AF06C
  c->r[4]=0u+0x806E0000u; // 801AF070
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AF074
  c->r[4]=c->r[4]+0x00002678u; // 801AF078
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 801AF07C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF080
  {uint32_t ea=c->r[2]+0xFFFFC614u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF084
  c->r[0]=R32(c->r[29]+0x00000034u); // 801AF088
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801AF08C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801AF090
  c->r[3]=R32(c->r[31]+0x000000ACu); // 801AF094
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF098
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 801AF09C
  c->lr=0x801AF0A4u; f_802DF854(c); // 801AF0A0
  W8(c->r[1]+0x00000008u,c->r[30]); // 801AF0A4
  c->r[30]=c->r[3]|c->r[3]; // 801AF0A8
  c->r[3]=c->r[1]+0x00000008u; // 801AF0AC
  c->lr=0x801AF0B4u; f_8012556C(c); // 801AF0B0
  c->r[0]=R32(c->r[30]+0x00000030u); // 801AF0B4
  c->r[11]=c->r[1]+0x000000A0u; // 801AF0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF0BC
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 801AF0C0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF0C4
  {uint32_t ea=c->r[2]+0xFFFFC614u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF0C8
  c->r[0]=R32(c->r[30]+0x00000034u); // 801AF0CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801AF0D0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801AF0D4
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 801AF0D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AF0DC
  c->lr=0x801AF0E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF0E0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801AF0E4
  c->lr=c->r[0]; // 801AF0E8
  c->r[1]=c->r[1]+0x000000A0u; // 801AF0EC
  return; // 801AF0F0
}

// fn_801AF0F4
void f_801AF0F4(Ctx* __restrict c) {
  trace_call(0x801AF0F4u);
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801AF0F4
  c->r[3]=0u+0x00000001u; // 801AF0F8
  cmps(c,0,(int32_t)c->r[0],0); // 801AF0FC
  if (crb(c,2)) { goto L_801AF10C; } // 801AF100
  cmps(c,0,(int32_t)c->r[0],4); // 801AF104
  if (!crb(c,2)) return; // 801AF108
L_801AF10C:;
  c->r[3]=0u+0x00000000u; // 801AF10C
  return; // 801AF110
}

// fn_801AF114
void f_801AF114(Ctx* __restrict c) {
  trace_call(0x801AF114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF114
  c->r[0]=c->lr; // 801AF118
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF11C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF120
  c->r[30]=c->r[3]|c->r[3]; // 801AF124
  c->r[31]=c->r[4]|c->r[4]; // 801AF128
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801AF12C
  c->lr=0x801AF134u; f_801B0038(c); // 801AF130
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 801AF134
  c->r[0]=cntlz(c->r[0]); // 801AF138
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AF13C
  W8(c->r[30]+0x000000B0u,c->r[0]); // 801AF140
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF144
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF148
  c->lr=c->r[0]; // 801AF14C
  c->r[1]=c->r[1]+0x00000010u; // 801AF150
  return; // 801AF154
}

// fn_801AF158
void f_801AF158(Ctx* __restrict c) {
  trace_call(0x801AF158u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF158
  c->r[0]=c->lr; // 801AF15C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF160
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF164
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801AF168
  cmps(c,0,(int32_t)c->r[3],0); // 801AF16C
  if (!crb(c,2)) { goto L_801AF17C; } // 801AF170
  c->r[3]=0u+0x00000000u; // 801AF174
  goto L_801AF19C; // 801AF178
L_801AF17C:;
  c->r[4]=c->r[13]+0xFFFF8DC0u; // 801AF17C
  c->lr=0x801AF184u; f_802DF854(c); // 801AF180
  c->r[0]=0u+0x00000000u; // 801AF184
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AF188
  c->r[31]=c->r[3]|c->r[3]; // 801AF18C
  c->r[3]=c->r[1]+0x00000008u; // 801AF190
  c->lr=0x801AF198u; f_8012556C(c); // 801AF194
  c->r[3]=R8(c->r[31]+0x000000B8u); // 801AF198
L_801AF19C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF19C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF1A0
  c->lr=c->r[0]; // 801AF1A4
  c->r[1]=c->r[1]+0x00000020u; // 801AF1A8
  return; // 801AF1AC
}

// fn_801AF1B0
void f_801AF1B0(Ctx* __restrict c) {
  trace_call(0x801AF1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF1B0
  c->r[0]=c->lr; // 801AF1B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF1B8
  c->r[11]=c->r[1]+0x00000040u; // 801AF1BC
  c->lr=0x801AF1C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF1C0
  c->r[31]=c->r[3]|c->r[3]; // 801AF1C4
  c->r[4]=0u+0x00000000u; // 801AF1C8
  c->lr=0x801AF1D0u; f_802DFACC(c); // 801AF1CC
  c->r[0]=0u+0x00000001u; // 801AF1D0
  W32(c->r[31]+0x00000018u,c->r[0]); // 801AF1D4
  c->r[28]=0u+0x00000000u; // 801AF1D8
  c->r[30]=0u+0x80690000u; // 801AF1DC
  W8(c->r[1]+0x00000024u,c->r[28]); // 801AF1E0
  c->r[3]=c->r[31]|c->r[31]; // 801AF1E4
  c->r[27]=c->r[1]+0x00000024u; // 801AF1E8
  c->r[4]=c->r[30]+0x000037A0u; // 801AF1EC
  c->lr=0x801AF1F4u; f_802DF854(c); // 801AF1F0
  c->r[29]=c->r[3]|c->r[3]; // 801AF1F4
  c->r[3]=c->r[27]|c->r[27]; // 801AF1F8
  c->lr=0x801AF200u; f_8012556C(c); // 801AF1FC
  c->r[4]=R32(c->r[31]+0x000000B4u); // 801AF200
  c->r[6]=c->r[29]|c->r[29]; // 801AF204
  c->r[5]=0u+0x00000000u; // 801AF208
  c->lr=0x801AF210u; f_80125F50(c); // 801AF20C
  c->r[3]=c->r[31]|c->r[31]; // 801AF210
  c->r[4]=c->r[30]+0x000037A0u; // 801AF214
  c->lr=0x801AF21Cu; f_802DF854(c); // 801AF218
  c->r[29]=R32(c->r[31]+0x000000B4u); // 801AF21C
  c->r[27]=c->r[3]|c->r[3]; // 801AF220
  c->r[3]=c->r[1]+0x00000020u; // 801AF224
  W8(c->r[1]+0x00000020u,c->r[28]); // 801AF228
  c->lr=0x801AF230u; f_8012556C(c); // 801AF22C
  c->r[4]=c->r[29]|c->r[29]; // 801AF230
  c->r[5]=c->r[27]|c->r[27]; // 801AF234
  c->lr=0x801AF23Cu; f_801254F8(c); // 801AF238
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF23C
  c->r[29]=c->r[30]+0x000037A0u; // 801AF240
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801AF244
  c->r[3]=c->r[31]|c->r[31]; // 801AF248
  c->r[27]=c->r[1]+0x0000001Cu; // 801AF24C
  c->r[4]=c->r[29]+0x00000006u; // 801AF250
  W8(c->r[1]+0x0000001Cu,c->r[28]); // 801AF254
  c->lr=0x801AF25Cu; f_802DF854(c); // 801AF258
  c->r[30]=c->r[3]|c->r[3]; // 801AF25C
  c->r[3]=c->r[27]|c->r[27]; // 801AF260
  c->lr=0x801AF268u; f_8012556C(c); // 801AF264
  c->r[4]=R32(c->r[31]+0x000000ACu); // 801AF268
  c->r[5]=c->r[30]|c->r[30]; // 801AF26C
  c->lr=0x801AF274u; f_801253BC(c); // 801AF270
  W8(c->r[1]+0x00000018u,c->r[28]); // 801AF274
  c->r[3]=c->r[31]|c->r[31]; // 801AF278
  c->r[27]=c->r[1]+0x00000018u; // 801AF27C
  c->r[4]=c->r[29]+0x00000006u; // 801AF280
  c->lr=0x801AF288u; f_802DF854(c); // 801AF284
  c->r[30]=c->r[3]|c->r[3]; // 801AF288
  c->r[3]=c->r[27]|c->r[27]; // 801AF28C
  c->lr=0x801AF294u; f_8012556C(c); // 801AF290
  c->r[4]=R32(c->r[31]+0x000000A8u); // 801AF294
  c->r[5]=c->r[30]|c->r[30]; // 801AF298
  c->lr=0x801AF2A0u; f_801253BC(c); // 801AF29C
  c->r[3]=c->r[31]|c->r[31]; // 801AF2A0
  c->r[4]=0u+0x00000000u; // 801AF2A4
  c->lr=0x801AF2ACu; f_801AF9C4(c); // 801AF2A8
  c->r[3]=c->r[31]|c->r[31]; // 801AF2AC
  c->r[4]=0u+0x00000000u; // 801AF2B0
  c->lr=0x801AF2B8u; f_801AFB0C(c); // 801AF2B4
  W8(c->r[1]+0x00000014u,c->r[28]); // 801AF2B8
  c->r[3]=c->r[31]|c->r[31]; // 801AF2BC
  c->r[27]=c->r[1]+0x00000014u; // 801AF2C0
  c->r[4]=c->r[29]+0x0000000Du; // 801AF2C4
  c->lr=0x801AF2CCu; f_802DF854(c); // 801AF2C8
  c->r[30]=c->r[3]|c->r[3]; // 801AF2CC
  c->r[3]=c->r[27]|c->r[27]; // 801AF2D0
  c->lr=0x801AF2D8u; f_8012556C(c); // 801AF2D4
  c->r[4]=c->r[30]|c->r[30]; // 801AF2D8
  c->r[5]=0u+0x00000001u; // 801AF2DC
  c->lr=0x801AF2E4u; f_80125594(c); // 801AF2E0
  W8(c->r[1]+0x00000010u,c->r[28]); // 801AF2E4
  c->r[3]=c->r[31]|c->r[31]; // 801AF2E8
  c->r[27]=c->r[1]+0x00000010u; // 801AF2EC
  c->r[4]=c->r[29]+0x00000017u; // 801AF2F0
  c->lr=0x801AF2F8u; f_802DF854(c); // 801AF2F4
  c->r[30]=c->r[3]|c->r[3]; // 801AF2F8
  c->r[3]=c->r[27]|c->r[27]; // 801AF2FC
  c->lr=0x801AF304u; f_8012556C(c); // 801AF300
  c->r[4]=c->r[30]|c->r[30]; // 801AF304
  c->r[5]=0u+0x00000000u; // 801AF308
  c->lr=0x801AF310u; f_80125594(c); // 801AF30C
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 801AF310
  c->r[3]=c->r[31]|c->r[31]; // 801AF314
  c->r[27]=c->r[1]+0x0000000Cu; // 801AF318
  c->r[4]=c->r[29]+0x00000020u; // 801AF31C
  c->lr=0x801AF324u; f_802DF854(c); // 801AF320
  c->r[30]=c->r[3]|c->r[3]; // 801AF324
  c->r[3]=c->r[27]|c->r[27]; // 801AF328
  c->lr=0x801AF330u; f_8012556C(c); // 801AF32C
  c->r[4]=c->r[30]|c->r[30]; // 801AF330
  c->r[5]=0u+0x00000000u; // 801AF334
  c->lr=0x801AF33Cu; f_80125594(c); // 801AF338
  W8(c->r[1]+0x00000008u,c->r[28]); // 801AF33C
  c->r[3]=c->r[31]|c->r[31]; // 801AF340
  c->r[27]=c->r[1]+0x00000008u; // 801AF344
  c->r[4]=c->r[29]+0x00000026u; // 801AF348
  c->lr=0x801AF350u; f_802DF854(c); // 801AF34C
  c->r[31]=c->r[3]|c->r[3]; // 801AF350
  c->r[3]=c->r[27]|c->r[27]; // 801AF354
  c->lr=0x801AF35Cu; f_8012556C(c); // 801AF358
  c->r[4]=c->r[31]|c->r[31]; // 801AF35C
  c->r[5]=0u+0x00000000u; // 801AF360
  c->lr=0x801AF368u; f_80125594(c); // 801AF364
  c->r[11]=c->r[1]+0x00000040u; // 801AF368
  c->lr=0x801AF370u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF36C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AF370
  c->lr=c->r[0]; // 801AF374
  c->r[1]=c->r[1]+0x00000040u; // 801AF378
  return; // 801AF37C
}

// fn_801AF380
void f_801AF380(Ctx* __restrict c) {
  trace_call(0x801AF380u);
  return; // 801AF380
}

// fn_801AF384
void f_801AF384(Ctx* __restrict c) {
  trace_call(0x801AF384u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF384
  c->r[0]=c->lr; // 801AF388
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF38C
  c->r[11]=c->r[1]+0x00000030u; // 801AF390
  c->lr=0x801AF398u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF394
  c->r[27]=c->r[3]|c->r[3]; // 801AF398
  c->r[4]=0u+0x00000001u; // 801AF39C
  c->lr=0x801AF3A4u; f_802DFACC(c); // 801AF3A0
  c->r[29]=0u+0x80690000u; // 801AF3A4
  c->r[3]=c->r[27]|c->r[27]; // 801AF3A8
  c->r[4]=c->r[29]+0x000037A0u; // 801AF3AC
  c->lr=0x801AF3B4u; f_802DF854(c); // 801AF3B0
  c->r[4]=R32(c->r[27]+0x000000B4u); // 801AF3B4
  c->r[5]=c->r[3]|c->r[3]; // 801AF3B8
  {uint32_t ea=c->r[2]+0xFFFFC61Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF3BC
  c->r[3]=c->r[27]|c->r[27]; // 801AF3C0
  c->lr=0x801AF3C8u; f_802E02F0(c); // 801AF3C4
  c->r[30]=c->r[29]+0x000037A0u; // 801AF3C8
  c->r[29]=0u+0x00000000u; // 801AF3CC
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AF3D0
  c->r[3]=c->r[27]|c->r[27]; // 801AF3D4
  c->r[28]=c->r[1]+0x0000000Cu; // 801AF3D8
  c->r[4]=c->r[30]+0x00000006u; // 801AF3DC
  c->lr=0x801AF3E4u; f_802DF854(c); // 801AF3E0
  c->r[31]=c->r[3]|c->r[3]; // 801AF3E4
  c->r[3]=c->r[28]|c->r[28]; // 801AF3E8
  c->lr=0x801AF3F0u; f_8012556C(c); // 801AF3EC
  c->r[4]=R32(c->r[27]+0x000000ACu); // 801AF3F0
  c->r[5]=c->r[31]|c->r[31]; // 801AF3F4
  c->lr=0x801AF3FCu; f_801253BC(c); // 801AF3F8
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AF3FC
  c->r[3]=c->r[27]|c->r[27]; // 801AF400
  c->r[28]=c->r[1]+0x00000008u; // 801AF404
  c->r[4]=c->r[30]+0x00000006u; // 801AF408
  c->lr=0x801AF410u; f_802DF854(c); // 801AF40C
  c->r[31]=c->r[3]|c->r[3]; // 801AF410
  c->r[3]=c->r[28]|c->r[28]; // 801AF414
  c->lr=0x801AF41Cu; f_8012556C(c); // 801AF418
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801AF41C
  c->r[5]=c->r[31]|c->r[31]; // 801AF420
  c->lr=0x801AF428u; f_801253BC(c); // 801AF424
  c->r[3]=c->r[27]|c->r[27]; // 801AF428
  c->r[4]=0u+0x00000000u; // 801AF42C
  c->lr=0x801AF434u; f_801AF9C4(c); // 801AF430
  c->r[3]=c->r[27]|c->r[27]; // 801AF434
  c->r[4]=0u+0x00000000u; // 801AF438
  c->lr=0x801AF440u; f_801AFB0C(c); // 801AF43C
  c->r[11]=c->r[1]+0x00000030u; // 801AF440
  c->lr=0x801AF448u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF444
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF448
  c->lr=c->r[0]; // 801AF44C
  c->r[1]=c->r[1]+0x00000030u; // 801AF450
  return; // 801AF454
}

// fn_801AF458
void f_801AF458(Ctx* __restrict c) {
  trace_call(0x801AF458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF458
  c->r[0]=c->lr; // 801AF45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF460
  c->r[0]=0u+0xFFFFFFFFu; // 801AF464
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF468
  c->r[31]=0u+0x80690000u; // 801AF46C
  c->r[31]=c->r[31]+0x000037A0u; // 801AF470
  c->r[30]=c->r[3]|c->r[3]; // 801AF474
  c->r[4]=c->r[31]+0x0000002Fu; // 801AF478
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801AF47C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 801AF480
  c->lr=0x801AF488u; f_802DFB68(c); // 801AF484
  c->r[3]=c->r[30]|c->r[30]; // 801AF488
  c->r[4]=c->r[31]+0x00000043u; // 801AF48C
  c->lr=0x801AF494u; f_802DFCE8(c); // 801AF490
  W32(c->r[30]+0x000000A8u,c->r[3]); // 801AF494
  c->r[3]=c->r[30]|c->r[30]; // 801AF498
  c->r[4]=c->r[31]+0x0000005Fu; // 801AF49C
  c->lr=0x801AF4A4u; f_802DFCE8(c); // 801AF4A0
  W32(c->r[30]+0x000000ACu,c->r[3]); // 801AF4A4
  c->r[3]=c->r[30]|c->r[30]; // 801AF4A8
  c->r[4]=c->r[31]+0x0000007Cu; // 801AF4AC
  c->lr=0x801AF4B4u; f_802DFCE8(c); // 801AF4B0
  W32(c->r[30]+0x000000B0u,c->r[3]); // 801AF4B4
  c->r[3]=c->r[30]|c->r[30]; // 801AF4B8
  c->r[4]=c->r[31]+0x0000009Cu; // 801AF4BC
  c->lr=0x801AF4C4u; f_802DFCE8(c); // 801AF4C0
  W32(c->r[30]+0x000000B4u,c->r[3]); // 801AF4C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF4CC
  c->lr=c->r[0]; // 801AF4D0
  c->r[1]=c->r[1]+0x00000010u; // 801AF4D4
  return; // 801AF4D8
}

// fn_801AF4DC
void f_801AF4DC(Ctx* __restrict c) {
  trace_call(0x801AF4DCu);
  return; // 801AF4DC
}

// fn_801AF4E0
void f_801AF4E0(Ctx* __restrict c) {
  trace_call(0x801AF4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF4E0
  c->r[0]=c->lr; // 801AF4E4
  cmps(c,0,(int32_t)c->r[4],0); // 801AF4E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF4EC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF4F0
  c->r[27]=c->r[3]|c->r[3]; // 801AF4F4
  c->r[28]=c->r[5]|c->r[5]; // 801AF4F8
  if (!crb(c,2)) { goto L_801AF558; } // 801AF4FC
  c->r[29]=0u+0x80690000u; // 801AF500
  c->r[29]=c->r[29]+0x000037A0u; // 801AF504
  c->r[4]=c->r[29]+0x00000006u; // 801AF508
  c->lr=0x801AF510u; f_802DF854(c); // 801AF50C
  c->r[31]=0u+0x00000000u; // 801AF510
  W8(c->r[1]+0x00000010u,c->r[31]); // 801AF514
  c->r[30]=c->r[3]|c->r[3]; // 801AF518
  c->r[3]=c->r[1]+0x00000010u; // 801AF51C
  c->lr=0x801AF524u; f_8012556C(c); // 801AF520
  c->r[0]=0u+0x000000FFu; // 801AF524
  W8(c->r[30]+0x000000B8u,c->r[0]); // 801AF528
  c->r[3]=c->r[27]|c->r[27]; // 801AF52C
  c->r[30]=c->r[1]+0x0000000Cu; // 801AF530
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801AF534
  c->r[4]=c->r[29]+0x00000006u; // 801AF538
  c->lr=0x801AF540u; f_802DF854(c); // 801AF53C
  c->r[31]=c->r[3]|c->r[3]; // 801AF540
  c->r[3]=c->r[30]|c->r[30]; // 801AF544
  c->lr=0x801AF54Cu; f_8012556C(c); // 801AF548
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801AF54C
  c->r[5]=c->r[31]|c->r[31]; // 801AF550
  c->lr=0x801AF558u; f_80142358(c); // 801AF554
L_801AF558:;
  cmps(c,0,(int32_t)c->r[28],0); // 801AF558
  if (!crb(c,2)) { goto L_801AF598; } // 801AF55C
  c->r[4]=0u+0x80690000u; // 801AF560
  c->r[0]=0u+0x00000000u; // 801AF564
  c->r[4]=c->r[4]+0x000037A0u; // 801AF568
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AF56C
  c->r[3]=c->r[27]|c->r[27]; // 801AF570
  c->r[29]=c->r[1]+0x00000008u; // 801AF574
  c->r[4]=c->r[4]+0x00000006u; // 801AF578
  c->lr=0x801AF580u; f_802DF854(c); // 801AF57C
  c->r[31]=c->r[3]|c->r[3]; // 801AF580
  c->r[3]=c->r[29]|c->r[29]; // 801AF584
  c->lr=0x801AF58Cu; f_8012556C(c); // 801AF588
  c->r[4]=R32(c->r[27]+0x000000ACu); // 801AF58C
  c->r[5]=c->r[31]|c->r[31]; // 801AF590
  c->lr=0x801AF598u; f_80142358(c); // 801AF594
L_801AF598:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF598
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF59C
  c->lr=c->r[0]; // 801AF5A0
  c->r[1]=c->r[1]+0x00000030u; // 801AF5A4
  return; // 801AF5A8
}

// fn_801AF5AC
void f_801AF5AC(Ctx* __restrict c) {
  trace_call(0x801AF5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF5AC
  c->r[0]=c->lr; // 801AF5B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AF5B4
  c->r[11]=c->r[1]+0x00000050u; // 801AF5B8
  c->lr=0x801AF5C0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF5BC
  c->r[6]=0u+0x80690000u; // 801AF5C0
  W32(c->r[1]+0x00000034u,c->r[5]); // 801AF5C4
  c->r[6]=c->r[6]+0x000037A0u; // 801AF5C8
  c->r[27]=c->r[4]|c->r[4]; // 801AF5CC
  c->r[26]=c->r[3]|c->r[3]; // 801AF5D0
  c->r[4]=c->r[6]+0x00000026u; // 801AF5D4
  c->lr=0x801AF5DCu; f_802DF854(c); // 801AF5D8
  c->r[0]=0u+0x00000000u; // 801AF5DC
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AF5E0
  c->r[30]=c->r[3]|c->r[3]; // 801AF5E4
  c->r[3]=c->r[1]+0x00000010u; // 801AF5E8
  c->lr=0x801AF5F0u; f_8012556C(c); // 801AF5EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF5F0
  cmps(c,0,(int32_t)c->r[30],0); // 801AF5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF5F8
  c->r[29]=c->r[13]+0xFFFFE4A8u; // 801AF5FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AF600
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AF604
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AF608
  if (crb(c,2)) { goto L_801AF654; } // 801AF60C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801AF610
  c->r[3]=c->r[30]|c->r[30]; // 801AF614
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801AF618
  c->ctr=c->r[12]; // 801AF61C
  if (true) { c->lr=0x801AF624u; dispatch(c,c->ctr); } // 801AF620
  goto L_801AF63C; // 801AF624
L_801AF628:;
  cmpu(c,0,c->r[3],c->r[29]); // 801AF628
  if (!crb(c,2)) { goto L_801AF638; } // 801AF62C
  c->r[0]=0u+0x00000001u; // 801AF630
  goto L_801AF648; // 801AF634
L_801AF638:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801AF638
L_801AF63C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AF63C
  if (!crb(c,2)) { IRQCHK(c); goto L_801AF628; } // 801AF640
  c->r[0]=0u+0x00000000u; // 801AF644
L_801AF648:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AF648
  if (crb(c,2)) { goto L_801AF654; } // 801AF64C
  goto L_801AF658; // 801AF650
L_801AF654:;
  c->r[30]=0u+0x00000000u; // 801AF654
L_801AF658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF658
  c->r[3]=c->r[30]|c->r[30]; // 801AF65C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AF660
  c->r[5]=c->r[1]+0x00000030u; // 801AF664
  c->r[4]=0u+0x00000000u; // 801AF668
  c->r[12]=R32(c->r[30]+0x00000000u); // 801AF66C
  c->r[12]=R32(c->r[12]+0x00000028u); // 801AF670
  c->ctr=c->r[12]; // 801AF674
  if (true) { c->lr=0x801AF67Cu; dispatch(c,c->ctr); } // 801AF678
  c->r[0]=R32(c->r[1]+0x00000018u); // 801AF67C
  c->r[3]=c->r[30]|c->r[30]; // 801AF680
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AF684
  c->r[5]=c->r[1]+0x0000002Cu; // 801AF688
  c->r[4]=0u+0x00000001u; // 801AF68C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801AF690
  c->r[12]=R32(c->r[12]+0x00000028u); // 801AF694
  c->ctr=c->r[12]; // 801AF698
  if (true) { c->lr=0x801AF6A0u; dispatch(c,c->ctr); } // 801AF69C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801AF6A0
  c->r[3]=c->r[30]|c->r[30]; // 801AF6A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AF6A8
  c->r[5]=c->r[1]+0x00000028u; // 801AF6AC
  c->r[4]=0u+0x00000002u; // 801AF6B0
  c->r[12]=R32(c->r[30]+0x00000000u); // 801AF6B4
  c->r[12]=R32(c->r[12]+0x00000028u); // 801AF6B8
  c->ctr=c->r[12]; // 801AF6BC
  if (true) { c->lr=0x801AF6C4u; dispatch(c,c->ctr); } // 801AF6C0
  c->r[0]=R32(c->r[1]+0x00000020u); // 801AF6C4
  c->r[3]=c->r[30]|c->r[30]; // 801AF6C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF6CC
  c->r[5]=c->r[1]+0x00000024u; // 801AF6D0
  c->r[4]=0u+0x00000003u; // 801AF6D4
  c->r[12]=R32(c->r[30]+0x00000000u); // 801AF6D8
  c->r[12]=R32(c->r[12]+0x00000028u); // 801AF6DC
  c->ctr=c->r[12]; // 801AF6E0
  if (true) { c->lr=0x801AF6E8u; dispatch(c,c->ctr); } // 801AF6E4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AF6E8
  c->r[30]=0u+0x80690000u; // 801AF6EC
  {uint32_t ea=c->r[2]+0xFFFFC620u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF6F0
  c->r[30]=c->r[30]+0x000037A0u; // 801AF6F4
  {uint32_t ea=c->r[2]+0xFFFFC624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF6F8
  c->r[29]=0u+0x00000000u; // 801AF6FC
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF700
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801AF704
  c->r[3]=c->r[26]|c->r[26]; // 801AF708
  c->r[28]=c->r[1]+0x0000000Cu; // 801AF70C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801AF710
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[2]);} // 801AF714
  c->r[4]=c->r[30]+0x00000026u; // 801AF718
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 801AF71C
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AF720
  c->lr=0x801AF728u; f_802DF854(c); // 801AF724
  c->r[31]=c->r[3]|c->r[3]; // 801AF728
  c->r[3]=c->r[28]|c->r[28]; // 801AF72C
  c->lr=0x801AF734u; f_8012556C(c); // 801AF730
  c->r[4]=c->r[31]|c->r[31]; // 801AF734
  c->r[5]=0u+0x00000001u; // 801AF738
  c->lr=0x801AF740u; f_80125594(c); // 801AF73C
  c->r[3]=c->r[26]|c->r[26]; // 801AF740
  c->r[4]=c->r[30]+0x00000026u; // 801AF744
  c->lr=0x801AF74Cu; f_802DF854(c); // 801AF748
  c->r[4]=c->r[3]|c->r[3]; // 801AF74C
  c->r[3]=c->r[26]|c->r[26]; // 801AF750
  c->r[5]=c->r[27]|c->r[27]; // 801AF754
  c->r[6]=0u+0x000000FFu; // 801AF758
  c->lr=0x801AF760u; f_802DF3E8(c); // 801AF75C
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AF760
  c->r[3]=c->r[26]|c->r[26]; // 801AF764
  c->r[28]=c->r[1]+0x00000008u; // 801AF768
  c->r[4]=c->r[30]+0x00000026u; // 801AF76C
  c->lr=0x801AF774u; f_802DF854(c); // 801AF770
  c->r[31]=c->r[3]|c->r[3]; // 801AF774
  c->r[3]=c->r[28]|c->r[28]; // 801AF778
  c->lr=0x801AF780u; f_8012556C(c); // 801AF77C
  c->r[4]=c->r[31]|c->r[31]; // 801AF780
  c->r[5]=0u+0x00000000u; // 801AF784
  c->lr=0x801AF78Cu; f_80125594(c); // 801AF788
  c->r[11]=c->r[1]+0x00000050u; // 801AF78C
  c->lr=0x801AF794u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF790
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AF794
  c->lr=c->r[0]; // 801AF798
  c->r[1]=c->r[1]+0x00000050u; // 801AF79C
  return; // 801AF7A0
}

// fn_801AF7A4
void f_801AF7A4(Ctx* __restrict c) {
  trace_call(0x801AF7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF7A4
  c->r[0]=c->lr; // 801AF7A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF7AC
  c->r[11]=c->r[1]+0x00000030u; // 801AF7B0
  c->lr=0x801AF7B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF7B4
  c->r[30]=0u+0x80690000u; // 801AF7B8
  c->r[29]=0u+0x00000000u; // 801AF7BC
  c->r[30]=c->r[30]+0x000037A0u; // 801AF7C0
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AF7C4
  c->r[27]=c->r[3]|c->r[3]; // 801AF7C8
  c->r[28]=c->r[1]+0x0000000Cu; // 801AF7CC
  c->r[4]=c->r[30]+0x00000006u; // 801AF7D0
  c->lr=0x801AF7D8u; f_802DF854(c); // 801AF7D4
  c->r[31]=c->r[3]|c->r[3]; // 801AF7D8
  c->r[3]=c->r[28]|c->r[28]; // 801AF7DC
  c->lr=0x801AF7E4u; f_8012556C(c); // 801AF7E0
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801AF7E4
  c->r[5]=c->r[31]|c->r[31]; // 801AF7E8
  c->lr=0x801AF7F0u; f_80125A90(c); // 801AF7EC
  cmps(c,0,(int32_t)c->r[3],0); // 801AF7F0
  if (crb(c,2)) { goto L_801AF834; } // 801AF7F4
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AF7F8
  c->r[3]=c->r[27]|c->r[27]; // 801AF7FC
  c->r[28]=c->r[1]+0x00000008u; // 801AF800
  c->r[4]=c->r[30]+0x00000006u; // 801AF804
  c->lr=0x801AF80Cu; f_802DF854(c); // 801AF808
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801AF80C
  c->r[31]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801AF810
  c->r[3]=c->r[28]|c->r[28]; // 801AF814
  c->lr=0x801AF81Cu; f_8012556C(c); // 801AF818
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801AF81C
  c->r[5]=c->r[31]|c->r[31]; // 801AF820
  c->r[6]=0u+0x00000000u; // 801AF824
  c->lr=0x801AF82Cu; f_80125F50(c); // 801AF828
  c->r[3]=0u+0x00000001u; // 801AF82C
  goto L_801AF864; // 801AF830
L_801AF834:;
  c->r[3]=c->r[27]|c->r[27]; // 801AF834
  c->r[4]=0u+0x00000001u; // 801AF838
  c->lr=0x801AF840u; f_802DFACC(c); // 801AF83C
  c->r[3]=c->r[27]|c->r[27]; // 801AF840
  c->r[4]=c->r[30]+0x00000006u; // 801AF844
  c->lr=0x801AF84Cu; f_802DF854(c); // 801AF848
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801AF84C
  c->r[5]=c->r[3]|c->r[3]; // 801AF850
  {uint32_t ea=c->r[2]+0xFFFFC61Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF854
  c->r[3]=c->r[27]|c->r[27]; // 801AF858
  c->lr=0x801AF860u; f_802E02F0(c); // 801AF85C
  c->r[3]=0u+0x00000000u; // 801AF860
L_801AF864:;
  c->r[11]=c->r[1]+0x00000030u; // 801AF864
  c->lr=0x801AF86Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF868
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF86C
  c->lr=c->r[0]; // 801AF870
  c->r[1]=c->r[1]+0x00000030u; // 801AF874
  return; // 801AF878
}

// fn_801AF87C
void f_801AF87C(Ctx* __restrict c) {
  trace_call(0x801AF87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF87C
  c->r[0]=c->lr; // 801AF880
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF884
  c->r[11]=c->r[1]+0x00000030u; // 801AF888
  c->lr=0x801AF890u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF88C
  c->r[30]=0u+0x80690000u; // 801AF890
  c->r[29]=0u+0x00000000u; // 801AF894
  c->r[30]=c->r[30]+0x000037A0u; // 801AF898
  W8(c->r[1]+0x00000014u,c->r[29]); // 801AF89C
  c->r[27]=c->r[3]|c->r[3]; // 801AF8A0
  c->r[28]=c->r[1]+0x00000014u; // 801AF8A4
  c->r[4]=c->r[30]+0x00000006u; // 801AF8A8
  c->lr=0x801AF8B0u; f_802DF854(c); // 801AF8AC
  c->r[31]=c->r[3]|c->r[3]; // 801AF8B0
  c->r[3]=c->r[28]|c->r[28]; // 801AF8B4
  c->lr=0x801AF8BCu; f_8012556C(c); // 801AF8B8
  c->r[4]=R32(c->r[27]+0x000000ACu); // 801AF8BC
  c->r[5]=c->r[31]|c->r[31]; // 801AF8C0
  c->lr=0x801AF8C8u; f_80125A90(c); // 801AF8C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF8C8
  if (crb(c,2)) { goto L_801AF988; } // 801AF8CC
  W8(c->r[1]+0x00000010u,c->r[29]); // 801AF8D0
  c->r[3]=c->r[27]|c->r[27]; // 801AF8D4
  c->r[28]=c->r[1]+0x00000010u; // 801AF8D8
  c->r[4]=c->r[30]+0x00000006u; // 801AF8DC
  c->lr=0x801AF8E4u; f_802DF854(c); // 801AF8E0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801AF8E4
  c->r[31]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801AF8E8
  c->r[3]=c->r[28]|c->r[28]; // 801AF8EC
  c->lr=0x801AF8F4u; f_8012556C(c); // 801AF8F0
  c->r[4]=R32(c->r[27]+0x000000ACu); // 801AF8F4
  c->r[5]=c->r[31]|c->r[31]; // 801AF8F8
  c->r[6]=0u+0x00000000u; // 801AF8FC
  c->lr=0x801AF904u; f_80125F50(c); // 801AF900
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AF904
  c->r[3]=c->r[27]|c->r[27]; // 801AF908
  c->r[4]=c->r[30]|c->r[30]; // 801AF90C
  c->r[28]=c->r[1]+0x0000000Cu; // 801AF910
  c->lr=0x801AF918u; f_802DF854(c); // 801AF914
  c->r[31]=c->r[3]|c->r[3]; // 801AF918
  c->r[3]=c->r[28]|c->r[28]; // 801AF91C
  c->lr=0x801AF924u; f_8012556C(c); // 801AF920
  c->r[4]=R32(c->r[27]+0x000000B4u); // 801AF924
  c->r[6]=c->r[31]|c->r[31]; // 801AF928
  c->r[5]=0u+0x00000000u; // 801AF92C
  c->lr=0x801AF934u; f_80125F50(c); // 801AF930
  c->r[3]=c->r[27]|c->r[27]; // 801AF934
  c->r[4]=c->r[30]|c->r[30]; // 801AF938
  c->lr=0x801AF940u; f_802DF854(c); // 801AF93C
  c->r[30]=R32(c->r[27]+0x000000B4u); // 801AF940
  c->r[31]=c->r[3]|c->r[3]; // 801AF944
  c->r[3]=c->r[1]+0x00000008u; // 801AF948
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AF94C
  c->lr=0x801AF954u; f_8012556C(c); // 801AF950
  c->r[4]=c->r[30]|c->r[30]; // 801AF954
  c->r[5]=c->r[31]|c->r[31]; // 801AF958
  c->lr=0x801AF960u; f_801254F8(c); // 801AF95C
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF960
  c->r[4]=0u+0x00000000u; // 801AF964
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801AF968
  c->r[3]=c->r[27]|c->r[27]; // 801AF96C
  c->lr=0x801AF974u; f_802DFACC(c); // 801AF970
  c->r[3]=c->r[27]|c->r[27]; // 801AF974
  c->r[4]=0u+0x00000000u; // 801AF978
  c->lr=0x801AF980u; f_801B0250(c); // 801AF97C
  c->r[3]=0u+0x00000001u; // 801AF980
  goto L_801AF9AC; // 801AF984
L_801AF988:;
  c->r[3]=c->r[27]|c->r[27]; // 801AF988
  c->r[4]=c->r[30]+0x00000006u; // 801AF98C
  c->lr=0x801AF994u; f_802DF854(c); // 801AF990
  c->r[4]=R32(c->r[27]+0x000000ACu); // 801AF994
  c->r[5]=c->r[3]|c->r[3]; // 801AF998
  {uint32_t ea=c->r[2]+0xFFFFC61Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF99C
  c->r[3]=c->r[27]|c->r[27]; // 801AF9A0
  c->lr=0x801AF9A8u; f_802E02F0(c); // 801AF9A4
  c->r[3]=0u+0x00000000u; // 801AF9A8
L_801AF9AC:;
  c->r[11]=c->r[1]+0x00000030u; // 801AF9AC
  c->lr=0x801AF9B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF9B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF9B4
  c->lr=c->r[0]; // 801AF9B8
  c->r[1]=c->r[1]+0x00000030u; // 801AF9BC
  return; // 801AF9C0
}

// fn_801AF9C4
void f_801AF9C4(Ctx* __restrict c) {
  trace_call(0x801AF9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF9C4
  c->r[0]=c->lr; // 801AF9C8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF9CC
  c->r[11]=c->r[1]+0x00000040u; // 801AF9D0
  c->lr=0x801AF9D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF9D4
  cmps(c,0,(int32_t)c->r[4],0); // 801AF9D8
  c->r[27]=c->r[3]|c->r[3]; // 801AF9DC
  if (crb(c,2)) { goto L_801AFA68; } // 801AF9E0
  c->r[30]=0u+0x80690000u; // 801AF9E4
  c->r[31]=0u+0x00000000u; // 801AF9E8
  c->r[30]=c->r[30]+0x000037A0u; // 801AF9EC
  W8(c->r[1]+0x00000018u,c->r[31]); // 801AF9F0
  c->r[28]=c->r[1]+0x00000018u; // 801AF9F4
  c->r[4]=c->r[30]+0x000000B6u; // 801AF9F8
  c->lr=0x801AFA00u; f_802DF854(c); // 801AF9FC
  c->r[29]=c->r[3]|c->r[3]; // 801AFA00
  c->r[3]=c->r[28]|c->r[28]; // 801AFA04
  c->lr=0x801AFA0Cu; f_8012556C(c); // 801AFA08
  c->r[4]=c->r[29]|c->r[29]; // 801AFA0C
  c->r[5]=0u+0x00000000u; // 801AFA10
  c->lr=0x801AFA18u; f_80125594(c); // 801AFA14
  W8(c->r[1]+0x00000014u,c->r[31]); // 801AFA18
  c->r[3]=c->r[27]|c->r[27]; // 801AFA1C
  c->r[28]=c->r[1]+0x00000014u; // 801AFA20
  c->r[4]=c->r[30]+0x000000BEu; // 801AFA24
  c->lr=0x801AFA2Cu; f_802DF854(c); // 801AFA28
  c->r[29]=c->r[3]|c->r[3]; // 801AFA2C
  c->r[3]=c->r[28]|c->r[28]; // 801AFA30
  c->lr=0x801AFA38u; f_8012556C(c); // 801AFA34
  c->r[4]=c->r[29]|c->r[29]; // 801AFA38
  c->r[5]=0u+0x00000001u; // 801AFA3C
  c->lr=0x801AFA44u; f_80125594(c); // 801AFA40
  c->r[3]=c->r[27]|c->r[27]; // 801AFA44
  c->r[4]=c->r[30]+0x000000BEu; // 801AFA48
  c->lr=0x801AFA50u; f_802DF854(c); // 801AFA4C
  c->r[4]=R32(c->r[27]+0x000000B0u); // 801AFA50
  c->r[5]=c->r[3]|c->r[3]; // 801AFA54
  {uint32_t ea=c->r[2]+0xFFFFC61Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFA58
  c->r[3]=c->r[27]|c->r[27]; // 801AFA5C
  c->lr=0x801AFA64u; f_802E02F0(c); // 801AFA60
  goto L_801AFAF4; // 801AFA64
L_801AFA68:;
  c->r[30]=0u+0x80690000u; // 801AFA68
  c->r[29]=0u+0x00000000u; // 801AFA6C
  c->r[30]=c->r[30]+0x000037A0u; // 801AFA70
  W8(c->r[1]+0x00000010u,c->r[29]); // 801AFA74
  c->r[28]=c->r[1]+0x00000010u; // 801AFA78
  c->r[4]=c->r[30]+0x000000B6u; // 801AFA7C
  c->lr=0x801AFA84u; f_802DF854(c); // 801AFA80
  c->r[31]=c->r[3]|c->r[3]; // 801AFA84
  c->r[3]=c->r[28]|c->r[28]; // 801AFA88
  c->lr=0x801AFA90u; f_8012556C(c); // 801AFA8C
  c->r[4]=c->r[31]|c->r[31]; // 801AFA90
  c->r[5]=0u+0x00000001u; // 801AFA94
  c->lr=0x801AFA9Cu; f_80125594(c); // 801AFA98
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AFA9C
  c->r[3]=c->r[27]|c->r[27]; // 801AFAA0
  c->r[28]=c->r[1]+0x0000000Cu; // 801AFAA4
  c->r[4]=c->r[30]+0x000000BEu; // 801AFAA8
  c->lr=0x801AFAB0u; f_802DF854(c); // 801AFAAC
  c->r[31]=c->r[3]|c->r[3]; // 801AFAB0
  c->r[3]=c->r[28]|c->r[28]; // 801AFAB4
  c->lr=0x801AFABCu; f_8012556C(c); // 801AFAB8
  c->r[4]=c->r[31]|c->r[31]; // 801AFABC
  c->r[5]=0u+0x00000000u; // 801AFAC0
  c->lr=0x801AFAC8u; f_80125594(c); // 801AFAC4
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AFAC8
  c->r[3]=c->r[27]|c->r[27]; // 801AFACC
  c->r[28]=c->r[1]+0x00000008u; // 801AFAD0
  c->r[4]=c->r[30]+0x000000BEu; // 801AFAD4
  c->lr=0x801AFADCu; f_802DF854(c); // 801AFAD8
  c->r[31]=c->r[3]|c->r[3]; // 801AFADC
  c->r[3]=c->r[28]|c->r[28]; // 801AFAE0
  c->lr=0x801AFAE8u; f_8012556C(c); // 801AFAE4
  c->r[4]=R32(c->r[27]+0x000000B0u); // 801AFAE8
  c->r[5]=c->r[31]|c->r[31]; // 801AFAEC
  c->lr=0x801AFAF4u; f_801253BC(c); // 801AFAF0
L_801AFAF4:;
  c->r[11]=c->r[1]+0x00000040u; // 801AFAF4
  c->lr=0x801AFAFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFAF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AFAFC
  c->lr=c->r[0]; // 801AFB00
  c->r[1]=c->r[1]+0x00000040u; // 801AFB04
  return; // 801AFB08
}

// fn_801AFB0C
void f_801AFB0C(Ctx* __restrict c) {
  trace_call(0x801AFB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFB0C
  c->r[0]=c->lr; // 801AFB10
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AFB14
  c->r[11]=c->r[1]+0x00000040u; // 801AFB18
  c->lr=0x801AFB20u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFB1C
  cmps(c,0,(int32_t)c->r[4],0); // 801AFB20
  c->r[27]=c->r[3]|c->r[3]; // 801AFB24
  if (crb(c,2)) { goto L_801AFBB0; } // 801AFB28
  c->r[30]=0u+0x80690000u; // 801AFB2C
  c->r[31]=0u+0x00000000u; // 801AFB30
  c->r[30]=c->r[30]+0x000037A0u; // 801AFB34
  W8(c->r[1]+0x00000018u,c->r[31]); // 801AFB38
  c->r[28]=c->r[1]+0x00000018u; // 801AFB3C
  c->r[4]=c->r[30]+0x000000C5u; // 801AFB40
  c->lr=0x801AFB48u; f_802DF854(c); // 801AFB44
  c->r[29]=c->r[3]|c->r[3]; // 801AFB48
  c->r[3]=c->r[28]|c->r[28]; // 801AFB4C
  c->lr=0x801AFB54u; f_8012556C(c); // 801AFB50
  c->r[4]=c->r[29]|c->r[29]; // 801AFB54
  c->r[5]=0u+0x00000000u; // 801AFB58
  c->lr=0x801AFB60u; f_80125594(c); // 801AFB5C
  W8(c->r[1]+0x00000014u,c->r[31]); // 801AFB60
  c->r[3]=c->r[27]|c->r[27]; // 801AFB64
  c->r[28]=c->r[1]+0x00000014u; // 801AFB68
  c->r[4]=c->r[30]+0x000000CCu; // 801AFB6C
  c->lr=0x801AFB74u; f_802DF854(c); // 801AFB70
  c->r[29]=c->r[3]|c->r[3]; // 801AFB74
  c->r[3]=c->r[28]|c->r[28]; // 801AFB78
  c->lr=0x801AFB80u; f_8012556C(c); // 801AFB7C
  c->r[4]=c->r[29]|c->r[29]; // 801AFB80
  c->r[5]=0u+0x00000001u; // 801AFB84
  c->lr=0x801AFB8Cu; f_80125594(c); // 801AFB88
  c->r[3]=c->r[27]|c->r[27]; // 801AFB8C
  c->r[4]=c->r[30]+0x000000CCu; // 801AFB90
  c->lr=0x801AFB98u; f_802DF854(c); // 801AFB94
  c->r[4]=R32(c->r[27]+0x000000B0u); // 801AFB98
  c->r[5]=c->r[3]|c->r[3]; // 801AFB9C
  {uint32_t ea=c->r[2]+0xFFFFC61Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFBA0
  c->r[3]=c->r[27]|c->r[27]; // 801AFBA4
  c->lr=0x801AFBACu; f_802E02F0(c); // 801AFBA8
  goto L_801AFC3C; // 801AFBAC
L_801AFBB0:;
  c->r[30]=0u+0x80690000u; // 801AFBB0
  c->r[29]=0u+0x00000000u; // 801AFBB4
  c->r[30]=c->r[30]+0x000037A0u; // 801AFBB8
  W8(c->r[1]+0x00000010u,c->r[29]); // 801AFBBC
  c->r[28]=c->r[1]+0x00000010u; // 801AFBC0
  c->r[4]=c->r[30]+0x000000C5u; // 801AFBC4
  c->lr=0x801AFBCCu; f_802DF854(c); // 801AFBC8
  c->r[31]=c->r[3]|c->r[3]; // 801AFBCC
  c->r[3]=c->r[28]|c->r[28]; // 801AFBD0
  c->lr=0x801AFBD8u; f_8012556C(c); // 801AFBD4
  c->r[4]=c->r[31]|c->r[31]; // 801AFBD8
  c->r[5]=0u+0x00000001u; // 801AFBDC
  c->lr=0x801AFBE4u; f_80125594(c); // 801AFBE0
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AFBE4
  c->r[3]=c->r[27]|c->r[27]; // 801AFBE8
  c->r[28]=c->r[1]+0x0000000Cu; // 801AFBEC
  c->r[4]=c->r[30]+0x000000CCu; // 801AFBF0
  c->lr=0x801AFBF8u; f_802DF854(c); // 801AFBF4
  c->r[31]=c->r[3]|c->r[3]; // 801AFBF8
  c->r[3]=c->r[28]|c->r[28]; // 801AFBFC
  c->lr=0x801AFC04u; f_8012556C(c); // 801AFC00
  c->r[4]=c->r[31]|c->r[31]; // 801AFC04
  c->r[5]=0u+0x00000000u; // 801AFC08
  c->lr=0x801AFC10u; f_80125594(c); // 801AFC0C
  W8(c->r[1]+0x00000008u,c->r[29]); // 801AFC10
  c->r[3]=c->r[27]|c->r[27]; // 801AFC14
  c->r[28]=c->r[1]+0x00000008u; // 801AFC18
  c->r[4]=c->r[30]+0x000000CCu; // 801AFC1C
  c->lr=0x801AFC24u; f_802DF854(c); // 801AFC20
  c->r[31]=c->r[3]|c->r[3]; // 801AFC24
  c->r[3]=c->r[28]|c->r[28]; // 801AFC28
  c->lr=0x801AFC30u; f_8012556C(c); // 801AFC2C
  c->r[4]=R32(c->r[27]+0x000000B0u); // 801AFC30
  c->r[5]=c->r[31]|c->r[31]; // 801AFC34
  c->lr=0x801AFC3Cu; f_801253BC(c); // 801AFC38
L_801AFC3C:;
  c->r[11]=c->r[1]+0x00000040u; // 801AFC3C
  c->lr=0x801AFC44u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFC40
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AFC44
  c->lr=c->r[0]; // 801AFC48
  c->r[1]=c->r[1]+0x00000040u; // 801AFC4C
  return; // 801AFC50
}

// fn_801AFC54
void f_801AFC54(Ctx* __restrict c) {
  trace_call(0x801AFC54u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFC54
  c->r[0]=c->lr; // 801AFC58
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AFC5C
  c->r[11]=c->r[1]+0x00000070u; // 801AFC60
  c->lr=0x801AFC68u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFC64
  c->r[5]=R32(c->r[3]+0x000000A0u); // 801AFC68
  c->r[26]=c->r[3]|c->r[3]; // 801AFC6C
  c->r[27]=c->r[4]|c->r[4]; // 801AFC70
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 801AFC74
  cmpu(c,0,c->r[0],0x00000001u); // 801AFC78
  if (crb(c,1)) { goto L_801AFC88; } // 801AFC7C
  c->r[3]=0u+0x00000000u; // 801AFC80
  goto L_801AFDB4; // 801AFC84
L_801AFC88:;
  c->r[30]=0u+0x80690000u; // 801AFC88
  c->r[29]=0u+0x00000000u; // 801AFC8C
  c->r[30]=c->r[30]+0x000037A0u; // 801AFC90
  W8(c->r[1]+0x00000010u,c->r[29]); // 801AFC94
  c->r[28]=c->r[1]+0x00000010u; // 801AFC98
  c->r[4]=c->r[30]+0x000000D2u; // 801AFC9C
  c->lr=0x801AFCA4u; f_802DF854(c); // 801AFCA0
  c->r[31]=c->r[3]|c->r[3]; // 801AFCA4
  c->r[3]=c->r[28]|c->r[28]; // 801AFCA8
  c->lr=0x801AFCB0u; f_8012556C(c); // 801AFCAC
  c->r[4]=c->r[3]|c->r[3]; // 801AFCB0
  c->r[5]=c->r[31]|c->r[31]; // 801AFCB4
  c->r[3]=c->r[1]+0x00000038u; // 801AFCB8
  c->lr=0x801AFCC0u; f_801AFDCC(c); // 801AFCBC
  c->r[3]=c->r[1]+0x00000044u; // 801AFCC0
  c->r[4]=c->r[1]+0x00000038u; // 801AFCC4
  c->lr=0x801AFCCCu; f_800E710C(c); // 801AFCC8
  c->r[0]=R32(c->r[26]+0x000000A0u); // 801AFCCC
  cmps(c,0,(int32_t)c->r[0],1); // 801AFCD0
  if (!crb(c,2)) { goto L_801AFCE0; } // 801AFCD4
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFCD8
  goto L_801AFD14; // 801AFCDC
L_801AFCE0:;
  c->r[3]=c->r[26]|c->r[26]; // 801AFCE0
  c->r[31]=c->r[30]+0x000000D6u; // 801AFCE4
  c->r[4]=c->r[30]+0x000000D2u; // 801AFCE8
  c->lr=0x801AFCF0u; f_802DF854(c); // 801AFCEC
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AFCF0
  c->r[29]=c->r[3]|c->r[3]; // 801AFCF4
  c->r[3]=c->r[1]+0x0000000Cu; // 801AFCF8
  c->lr=0x801AFD00u; f_8012556C(c); // 801AFCFC
  c->r[3]=c->r[29]|c->r[29]; // 801AFD00
  c->r[4]=c->r[31]|c->r[31]; // 801AFD04
  c->lr=0x801AFD0Cu; f_804D57C8(c); // 801AFD08
  c->r[0]=R32(c->r[3]+0x00000004u); // 801AFD0C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFD10
L_801AFD14:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801AFD14
  {uint32_t ea=c->r[2]+0xFFFFC628u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFD18
  c->r[4]=0u+0x80690000u; // 801AFD1C
  c->r[0]=0u+0x00000000u; // 801AFD20
  c->r[4]=c->r[4]+0x000037A0u; // 801AFD24
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AFD28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801AFD2C
  c->r[3]=c->r[26]|c->r[26]; // 801AFD30
  c->r[28]=c->r[1]+0x00000008u; // 801AFD34
  c->r[4]=c->r[4]+0x000000BEu; // 801AFD38
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801AFD3C
  c->lr=0x801AFD44u; f_802DF854(c); // 801AFD40
  c->r[31]=c->r[3]|c->r[3]; // 801AFD44
  c->r[3]=c->r[28]|c->r[28]; // 801AFD48
  c->lr=0x801AFD50u; f_8012556C(c); // 801AFD4C
  c->r[4]=c->r[3]|c->r[3]; // 801AFD50
  c->r[5]=c->r[31]|c->r[31]; // 801AFD54
  c->r[3]=c->r[1]+0x00000018u; // 801AFD58
  c->lr=0x801AFD60u; f_80142D48(c); // 801AFD5C
  {uint32_t ea=c->r[2]+0xFFFFC620u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AFD60
  c->r[4]=c->r[27]|c->r[27]; // 801AFD64
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AFD68
  c->r[3]=c->r[1]+0x00000020u; // 801AFD6C
  {uint32_t ea=c->r[2]+0xFFFFC624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFD70
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFD74
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801AFD78
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801AFD7C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 801AFD80
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801AFD84
  c->lr=0x801AFD8Cu; f_8005CD7C(c); // 801AFD88
  c->r[31]=c->r[3]|c->r[3]; // 801AFD8C
  c->r[3]=c->r[1]+0x0000002Cu; // 801AFD90
  c->r[4]=c->r[1]+0x00000044u; // 801AFD94
  c->lr=0x801AFD9Cu; f_8005CD7C(c); // 801AFD98
  {uint32_t ea=c->r[2]+0xFFFFC62Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFD9C
  c->r[4]=c->r[3]|c->r[3]; // 801AFDA0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AFDA4
  c->r[3]=c->r[26]|c->r[26]; // 801AFDA8
  c->r[5]=c->r[31]|c->r[31]; // 801AFDAC
  c->lr=0x801AFDB4u; f_801AFFCC(c); // 801AFDB0
L_801AFDB4:;
  c->r[11]=c->r[1]+0x00000070u; // 801AFDB4
  c->lr=0x801AFDBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFDB8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801AFDBC
  c->lr=c->r[0]; // 801AFDC0
  c->r[1]=c->r[1]+0x00000070u; // 801AFDC4
  return; // 801AFDC8
}

// fn_801AFDCC
void f_801AFDCC(Ctx* __restrict c) {
  trace_call(0x801AFDCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFDCC
  c->r[6]=R32(c->r[5]+0x00000090u); // 801AFDD0
  W32(c->r[1]+0x00000014u,c->r[6]); // 801AFDD4
  c->r[4]=R32(c->r[5]+0x000000A0u); // 801AFDD8
  W32(c->r[1]+0x00000024u,c->r[4]); // 801AFDDC
  c->r[0]=R32(c->r[5]+0x000000B0u); // 801AFDE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFDE4
  c->r[12]=R32(c->r[5]+0x00000084u); // 801AFDE8
  c->r[11]=R32(c->r[5]+0x00000088u); // 801AFDEC
  c->r[10]=R32(c->r[5]+0x0000008Cu); // 801AFDF0
  c->r[9]=R32(c->r[5]+0x00000094u); // 801AFDF4
  c->r[8]=R32(c->r[5]+0x00000098u); // 801AFDF8
  c->r[7]=R32(c->r[5]+0x0000009Cu); // 801AFDFC
  c->r[6]=R32(c->r[5]+0x000000A4u); // 801AFE00
  c->r[4]=R32(c->r[5]+0x000000A8u); // 801AFE04
  c->r[0]=R32(c->r[5]+0x000000ACu); // 801AFE08
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AFE0C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFE10
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFE14
  W32(c->r[1]+0x00000008u,c->r[12]); // 801AFE18
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 801AFE1C
  W32(c->r[1]+0x00000010u,c->r[10]); // 801AFE20
  W32(c->r[1]+0x00000018u,c->r[9]); // 801AFE24
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801AFE28
  W32(c->r[1]+0x00000020u,c->r[7]); // 801AFE2C
  W32(c->r[1]+0x00000028u,c->r[6]); // 801AFE30
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801AFE34
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AFE38
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801AFE3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801AFE40
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801AFE44
  c->r[1]=c->r[1]+0x00000040u; // 801AFE48
  return; // 801AFE4C
}

// fn_801AFE50
void f_801AFE50(Ctx* __restrict c) {
  trace_call(0x801AFE50u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFE50
  c->r[0]=c->lr; // 801AFE54
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AFE58
  c->r[11]=c->r[1]+0x00000070u; // 801AFE5C
  c->lr=0x801AFE64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFE60
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801AFE64
  c->r[26]=c->r[3]|c->r[3]; // 801AFE68
  c->r[27]=c->r[4]|c->r[4]; // 801AFE6C
  cmps(c,0,(int32_t)c->r[0],1); // 801AFE70
  if (crb(c,2)) { goto L_801AFE80; } // 801AFE74
  cmps(c,0,(int32_t)c->r[0],3); // 801AFE78
  if (!crb(c,2)) { goto L_801AFE88; } // 801AFE7C
L_801AFE80:;
  c->r[3]=0u+0x00000000u; // 801AFE80
  goto L_801AFFB4; // 801AFE84
L_801AFE88:;
  c->r[30]=0u+0x80690000u; // 801AFE88
  c->r[29]=0u+0x00000000u; // 801AFE8C
  c->r[30]=c->r[30]+0x000037A0u; // 801AFE90
  W8(c->r[1]+0x00000010u,c->r[29]); // 801AFE94
  c->r[28]=c->r[1]+0x00000010u; // 801AFE98
  c->r[4]=c->r[30]+0x000000DFu; // 801AFE9C
  c->lr=0x801AFEA4u; f_802DF854(c); // 801AFEA0
  c->r[31]=c->r[3]|c->r[3]; // 801AFEA4
  c->r[3]=c->r[28]|c->r[28]; // 801AFEA8
  c->lr=0x801AFEB0u; f_8012556C(c); // 801AFEAC
  c->r[4]=c->r[3]|c->r[3]; // 801AFEB0
  c->r[5]=c->r[31]|c->r[31]; // 801AFEB4
  c->r[3]=c->r[1]+0x00000038u; // 801AFEB8
  c->lr=0x801AFEC0u; f_801AFDCC(c); // 801AFEBC
  c->r[3]=c->r[1]+0x00000044u; // 801AFEC0
  c->r[4]=c->r[1]+0x00000038u; // 801AFEC4
  c->lr=0x801AFECCu; f_800E710C(c); // 801AFEC8
  c->r[0]=R32(c->r[26]+0x000000A0u); // 801AFECC
  cmps(c,0,(int32_t)c->r[0],2); // 801AFED0
  if (!crb(c,2)) { goto L_801AFEE0; } // 801AFED4
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFED8
  goto L_801AFF14; // 801AFEDC
L_801AFEE0:;
  c->r[3]=c->r[26]|c->r[26]; // 801AFEE0
  c->r[31]=c->r[30]+0x000000D6u; // 801AFEE4
  c->r[4]=c->r[30]+0x000000DFu; // 801AFEE8
  c->lr=0x801AFEF0u; f_802DF854(c); // 801AFEEC
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801AFEF0
  c->r[29]=c->r[3]|c->r[3]; // 801AFEF4
  c->r[3]=c->r[1]+0x0000000Cu; // 801AFEF8
  c->lr=0x801AFF00u; f_8012556C(c); // 801AFEFC
  c->r[3]=c->r[29]|c->r[29]; // 801AFF00
  c->r[4]=c->r[31]|c->r[31]; // 801AFF04
  c->lr=0x801AFF0Cu; f_804D57C8(c); // 801AFF08
  c->r[0]=R32(c->r[3]+0x00000004u); // 801AFF0C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFF10
L_801AFF14:;
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801AFF14
  {uint32_t ea=c->r[2]+0xFFFFC628u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFF18
  c->r[4]=0u+0x80690000u; // 801AFF1C
  c->r[0]=0u+0x00000000u; // 801AFF20
  c->r[4]=c->r[4]+0x000037A0u; // 801AFF24
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AFF28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801AFF2C
  c->r[3]=c->r[26]|c->r[26]; // 801AFF30
  c->r[28]=c->r[1]+0x00000008u; // 801AFF34
  c->r[4]=c->r[4]+0x000000CCu; // 801AFF38
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801AFF3C
  c->lr=0x801AFF44u; f_802DF854(c); // 801AFF40
  c->r[31]=c->r[3]|c->r[3]; // 801AFF44
  c->r[3]=c->r[28]|c->r[28]; // 801AFF48
  c->lr=0x801AFF50u; f_8012556C(c); // 801AFF4C
  c->r[4]=c->r[3]|c->r[3]; // 801AFF50
  c->r[5]=c->r[31]|c->r[31]; // 801AFF54
  c->r[3]=c->r[1]+0x00000018u; // 801AFF58
  c->lr=0x801AFF60u; f_80142D48(c); // 801AFF5C
  {uint32_t ea=c->r[2]+0xFFFFC620u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AFF60
  c->r[4]=c->r[27]|c->r[27]; // 801AFF64
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AFF68
  c->r[3]=c->r[1]+0x00000020u; // 801AFF6C
  {uint32_t ea=c->r[2]+0xFFFFC624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFF70
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFF74
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801AFF78
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801AFF7C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 801AFF80
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801AFF84
  c->lr=0x801AFF8Cu; f_8005CD7C(c); // 801AFF88
  c->r[31]=c->r[3]|c->r[3]; // 801AFF8C
  c->r[3]=c->r[1]+0x0000002Cu; // 801AFF90
  c->r[4]=c->r[1]+0x00000044u; // 801AFF94
  c->lr=0x801AFF9Cu; f_8005CD7C(c); // 801AFF98
  {uint32_t ea=c->r[2]+0xFFFFC62Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFF9C
  c->r[4]=c->r[3]|c->r[3]; // 801AFFA0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AFFA4
  c->r[3]=c->r[26]|c->r[26]; // 801AFFA8
  c->r[5]=c->r[31]|c->r[31]; // 801AFFAC
  c->lr=0x801AFFB4u; f_801AFFCC(c); // 801AFFB0
L_801AFFB4:;
  c->r[11]=c->r[1]+0x00000070u; // 801AFFB4
  c->lr=0x801AFFBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFFB8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801AFFBC
  c->lr=c->r[0]; // 801AFFC0
  c->r[1]=c->r[1]+0x00000070u; // 801AFFC4
  return; // 801AFFC8
}

// fn_801AFFCC
void f_801AFFCC(Ctx* __restrict c) {
  trace_call(0x801AFFCCu);
  {uint32_t ea=c->r[2]+0xFFFFC630u; c->f[5]=c->ps1[5]=RF32(ea);} // 801AFFCC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801AFFD0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AFFD4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[5],-c->f[4])); // 801AFFD8
  fcmp(c,0,c->f[0],c->f[3]); // 801AFFDC
  if (!crb(c,1)) { goto L_801AFFEC; } // 801AFFE0
  c->r[3]=0u+0x00000000u; // 801AFFE4
  return; // 801AFFE8
L_801AFFEC:;
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[5],c->f[4])); // 801AFFEC
  fcmp(c,0,c->f[0],c->f[3]); // 801AFFF0
  if (!crb(c,0)) { goto L_801B0000; } // 801AFFF4
  c->r[3]=0u+0x00000000u; // 801AFFF8
  return; // 801AFFFC
L_801B0000:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B0000
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0004
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[5],-c->f[3])); // 801B0008
  fcmp(c,0,c->f[0],c->f[1]); // 801B000C
  if (!crb(c,1)) { goto L_801B001C; } // 801B0010
  c->r[3]=0u+0x00000000u; // 801B0014
  return; // 801B0018
L_801B001C:;
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[5],c->f[3])); // 801B001C
  fcmp(c,0,c->f[0],c->f[1]); // 801B0020
  c->r[0]=c->cr; // 801B0024
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801B0028
  c->r[0]=cntlz(c->r[0]); // 801B002C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B0030
  return; // 801B0034
}

// fn_801B0038
void f_801B0038(Ctx* __restrict c) {
  trace_call(0x801B0038u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0038
  c->r[0]=c->lr; // 801B003C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B0040
  c->r[11]=c->r[1]+0x00000050u; // 801B0044
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801B0048
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801B004C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801B0050
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801B0054
  c->lr=0x801B005Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0058
  c->r[6]=c->r[4]+0xFFFFFFFEu; // 801B005C
  cmps(c,0,(int32_t)c->r[4],1); // 801B0060
  c->r[0]=addc(c,c->r[6],0xFFFFFFFFu,0); // 801B0064
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801B0068
  c->r[31]=addc(c,~c->r[0],c->r[6],c->xer_ca); // 801B006C
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801B0070
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 801B0074
  c->r[28]=c->r[3]|c->r[3]; // 801B0078
  c->r[29]=c->r[4]|c->r[4]; // 801B007C
  c->r[30]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 801B0080
  if (!crb(c,2)) { goto L_801B0090; } // 801B0084
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B0088
  goto L_801B00CC; // 801B008C
L_801B0090:;
  c->r[4]=0u+0x80690000u; // 801B0090
  c->r[4]=c->r[4]+0x000037A0u; // 801B0094
  c->r[26]=c->r[4]+0x000000D6u; // 801B0098
  c->r[4]=c->r[4]+0x000000D2u; // 801B009C
  c->lr=0x801B00A4u; f_802DF854(c); // 801B00A0
  c->r[0]=0u+0x00000000u; // 801B00A4
  W8(c->r[1]+0x00000024u,c->r[0]); // 801B00A8
  c->r[25]=c->r[3]|c->r[3]; // 801B00AC
  c->r[3]=c->r[1]+0x00000024u; // 801B00B0
  c->lr=0x801B00B8u; f_8012556C(c); // 801B00B4
  c->r[3]=c->r[25]|c->r[25]; // 801B00B8
  c->r[4]=c->r[26]|c->r[26]; // 801B00BC
  c->lr=0x801B00C4u; f_804D57C8(c); // 801B00C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B00C4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[31]=c->ps1[31]=RF32(ea);} // 801B00C8
L_801B00CC:;
  cmps(c,0,(int32_t)c->r[29],2); // 801B00CC
  if (!crb(c,2)) { goto L_801B00DC; } // 801B00D0
  {uint32_t ea=c->r[2]+0xFFFFC618u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B00D4
  goto L_801B011C; // 801B00D8
L_801B00DC:;
  c->r[4]=0u+0x80690000u; // 801B00DC
  c->r[3]=c->r[28]|c->r[28]; // 801B00E0
  c->r[4]=c->r[4]+0x000037A0u; // 801B00E4
  c->r[26]=c->r[4]+0x000000D6u; // 801B00E8
  c->r[4]=c->r[4]+0x000000DFu; // 801B00EC
  c->lr=0x801B00F4u; f_802DF854(c); // 801B00F0
  c->r[0]=0u+0x00000000u; // 801B00F4
  W8(c->r[1]+0x00000020u,c->r[0]); // 801B00F8
  c->r[25]=c->r[3]|c->r[3]; // 801B00FC
  c->r[3]=c->r[1]+0x00000020u; // 801B0100
  c->lr=0x801B0108u; f_8012556C(c); // 801B0104
  c->r[3]=c->r[25]|c->r[25]; // 801B0108
  c->r[4]=c->r[26]|c->r[26]; // 801B010C
  c->lr=0x801B0114u; f_804D57C8(c); // 801B0110
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B0114
  {uint32_t ea=c->r[3]+c->r[0]; c->f[30]=c->ps1[30]=RF32(ea);} // 801B0118
L_801B011C:;
  c->r[25]=0u+0x80690000u; // 801B011C
  c->r[3]=c->r[28]|c->r[28]; // 801B0120
  c->r[25]=c->r[25]+0x000037A0u; // 801B0124
  c->r[4]=c->r[25]+0x000000D2u; // 801B0128
  c->lr=0x801B0130u; f_802DF854(c); // 801B012C
  c->r[26]=0u+0x00000000u; // 801B0130
  W8(c->r[1]+0x0000001Cu,c->r[26]); // 801B0134
  c->r[27]=c->r[3]|c->r[3]; // 801B0138
  c->r[3]=c->r[1]+0x0000001Cu; // 801B013C
  c->lr=0x801B0144u; f_8012556C(c); // 801B0140
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[31]);} // 801B0144
  c->r[3]=c->r[28]|c->r[28]; // 801B0148
  c->r[24]=c->r[1]+0x00000018u; // 801B014C
  c->r[4]=c->r[25]+0x000000D2u; // 801B0150
  W8(c->r[1]+0x00000018u,c->r[26]); // 801B0154
  c->lr=0x801B015Cu; f_802DF854(c); // 801B0158
  c->r[27]=c->r[3]|c->r[3]; // 801B015C
  c->r[3]=c->r[24]|c->r[24]; // 801B0160
  c->lr=0x801B0168u; f_8012556C(c); // 801B0164
  c->r[4]=c->r[27]|c->r[27]; // 801B0168
  c->r[5]=c->r[31]|c->r[31]; // 801B016C
  c->lr=0x801B0174u; f_80125594(c); // 801B0170
  c->r[3]=c->r[28]|c->r[28]; // 801B0174
  c->r[4]=c->r[25]+0x000000DFu; // 801B0178
  c->lr=0x801B0180u; f_802DF854(c); // 801B017C
  W8(c->r[1]+0x00000014u,c->r[26]); // 801B0180
  c->r[31]=c->r[3]|c->r[3]; // 801B0184
  c->r[3]=c->r[1]+0x00000014u; // 801B0188
  c->lr=0x801B0190u; f_8012556C(c); // 801B018C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[30]);} // 801B0190
  c->r[3]=c->r[28]|c->r[28]; // 801B0194
  c->r[24]=c->r[1]+0x00000010u; // 801B0198
  c->r[4]=c->r[25]+0x000000DFu; // 801B019C
  W8(c->r[1]+0x00000010u,c->r[26]); // 801B01A0
  c->lr=0x801B01A8u; f_802DF854(c); // 801B01A4
  c->r[31]=c->r[3]|c->r[3]; // 801B01A8
  c->r[3]=c->r[24]|c->r[24]; // 801B01AC
  c->lr=0x801B01B4u; f_8012556C(c); // 801B01B0
  c->r[4]=c->r[31]|c->r[31]; // 801B01B4
  c->r[5]=c->r[30]|c->r[30]; // 801B01B8
  c->lr=0x801B01C0u; f_80125594(c); // 801B01BC
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 801B01C0
  c->r[3]=c->r[28]|c->r[28]; // 801B01C4
  c->r[24]=c->r[1]+0x0000000Cu; // 801B01C8
  c->r[4]=c->r[25]+0x000000E2u; // 801B01CC
  c->lr=0x801B01D4u; f_802DF854(c); // 801B01D0
  c->r[30]=c->r[3]|c->r[3]; // 801B01D4
  c->r[3]=c->r[24]|c->r[24]; // 801B01D8
  c->lr=0x801B01E0u; f_8012556C(c); // 801B01DC
  c->r[5]=c->r[29]+0xFFFFFFFDu; // 801B01E0
  c->r[4]=c->r[30]|c->r[30]; // 801B01E4
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 801B01E8
  c->r[5]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 801B01EC
  c->lr=0x801B01F4u; f_80125594(c); // 801B01F0
  W8(c->r[1]+0x00000008u,c->r[26]); // 801B01F4
  c->r[3]=c->r[28]|c->r[28]; // 801B01F8
  c->r[24]=c->r[1]+0x00000008u; // 801B01FC
  c->r[4]=c->r[25]+0x000000E9u; // 801B0200
  c->lr=0x801B0208u; f_802DF854(c); // 801B0204
  c->r[28]=c->r[3]|c->r[3]; // 801B0208
  c->r[3]=c->r[24]|c->r[24]; // 801B020C
  c->lr=0x801B0214u; f_8012556C(c); // 801B0210
  c->r[5]=c->r[29]+0xFFFFFFFDu; // 801B0214
  c->r[4]=c->r[28]|c->r[28]; // 801B0218
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 801B021C
  c->r[5]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 801B0220
  c->lr=0x801B0228u; f_80125594(c); // 801B0224
  c->r[11]=c->r[1]+0x00000050u; // 801B0228
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801B022C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801B0230
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801B0234
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801B0238
  c->lr=0x801B0240u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B023C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B0240
  c->lr=c->r[0]; // 801B0244
  c->r[1]=c->r[1]+0x00000070u; // 801B0248
  return; // 801B024C
}

// fn_801B0250
void f_801B0250(Ctx* __restrict c) {
  trace_call(0x801B0250u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0250
  c->r[0]=c->lr; // 801B0254
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0258
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B025C
  c->r[30]=0u+0x80690000u; // 801B0260
  c->r[29]=0u+0x00000000u; // 801B0264
  c->r[26]=c->r[3]|c->r[3]; // 801B0268
  c->r[30]=c->r[30]+0x000037A0u; // 801B026C
  c->r[27]=c->r[4]|c->r[4]; // 801B0270
  c->r[28]=c->r[1]+0x00000010u; // 801B0274
  W32(c->r[3]+0x000000A4u,c->r[4]); // 801B0278
  c->r[4]=c->r[30]+0x0000000Du; // 801B027C
  W8(c->r[1]+0x00000010u,c->r[29]); // 801B0280
  c->lr=0x801B0288u; f_802DF854(c); // 801B0284
  c->r[31]=c->r[3]|c->r[3]; // 801B0288
  c->r[3]=c->r[28]|c->r[28]; // 801B028C
  c->lr=0x801B0294u; f_8012556C(c); // 801B0290
  c->r[0]=cntlz(c->r[27]); // 801B0294
  c->r[4]=c->r[31]|c->r[31]; // 801B0298
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B029C
  c->lr=0x801B02A4u; f_80125594(c); // 801B02A0
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801B02A4
  c->r[3]=c->r[26]|c->r[26]; // 801B02A8
  c->r[28]=c->r[1]+0x0000000Cu; // 801B02AC
  c->r[4]=c->r[30]+0x00000017u; // 801B02B0
  c->lr=0x801B02B8u; f_802DF854(c); // 801B02B4
  c->r[31]=c->r[3]|c->r[3]; // 801B02B8
  c->r[3]=c->r[28]|c->r[28]; // 801B02BC
  c->lr=0x801B02C4u; f_8012556C(c); // 801B02C0
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801B02C4
  c->r[4]=c->r[31]|c->r[31]; // 801B02C8
  c->r[0]=cntlz(c->r[0]); // 801B02CC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B02D0
  c->lr=0x801B02D8u; f_80125594(c); // 801B02D4
  W8(c->r[1]+0x00000008u,c->r[29]); // 801B02D8
  c->r[3]=c->r[26]|c->r[26]; // 801B02DC
  c->r[28]=c->r[1]+0x00000008u; // 801B02E0
  c->r[4]=c->r[30]+0x00000020u; // 801B02E4
  c->lr=0x801B02ECu; f_802DF854(c); // 801B02E8
  c->r[31]=c->r[3]|c->r[3]; // 801B02EC
  c->r[3]=c->r[28]|c->r[28]; // 801B02F0
  c->lr=0x801B02F8u; f_8012556C(c); // 801B02F4
  c->r[0]=c->r[27]+0xFFFFFFFEu; // 801B02F8
  c->r[4]=c->r[31]|c->r[31]; // 801B02FC
  c->r[0]=cntlz(c->r[0]); // 801B0300
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B0304
  c->lr=0x801B030Cu; f_80125594(c); // 801B0308
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B030C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0310
  c->lr=c->r[0]; // 801B0314
  c->r[1]=c->r[1]+0x00000030u; // 801B0318
  return; // 801B031C
}

// fn_801B0320
void f_801B0320(Ctx* __restrict c) {
  trace_call(0x801B0320u);
  c->r[3]=0u+0x0000000Cu; // 801B0320
  return; // 801B0324
}

// fn_801B0328
void f_801B0328(Ctx* __restrict c) {
  trace_call(0x801B0328u);
  c->r[3]=0u+0x0000000Eu; // 801B0328
  return; // 801B032C
}

// fn_801B0330
void f_801B0330(Ctx* __restrict c) {
  trace_call(0x801B0330u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0330
  c->r[0]=c->lr; // 801B0334
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B0338
  c->r[11]=c->r[1]+0x00000040u; // 801B033C
  c->lr=0x801B0344u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0340
  c->r[26]=c->r[3]|c->r[3]; // 801B0344
  c->r[31]=0u+0x80690000u; // 801B0348
  c->r[30]=c->r[26]|c->r[26]; // 801B034C
  c->r[27]=c->r[26]|c->r[26]; // 801B0350
  c->r[29]=c->r[26]|c->r[26]; // 801B0354
  c->r[31]=c->r[31]+0x00003890u; // 801B0358
  c->lr=0x801B0360u; f_801B0EE0(c); // 801B035C
  c->r[4]=0u+0x806D0000u; // 801B0360
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 801B0364
  c->r[0]=0u+0x00000000u; // 801B0368
  W32(c->r[26]+0x00000000u,c->r[3]); // 801B036C
  c->r[4]=c->r[4]+0x000038C0u; // 801B0370
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 801B0374
  W32(c->r[26]+0x00000004u,c->r[0]); // 801B0378
  W32(c->r[26]+0x00000008u,c->r[0]); // 801B037C
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801B0380
  W8(c->r[26]+0x00000010u,c->r[0]); // 801B0384
  W32(c->r[26]+0x00000014u,c->r[0]); // 801B0388
  W32(c->r[26]+0x00000018u,c->r[0]); // 801B038C
  W32(c->r[26]+0x00000020u,c->r[0]); // 801B0390
  W32(c->r[26]+0x00000024u,c->r[0]); // 801B0394
  if (crb(c,2)) { goto L_801B03A0; } // 801B0398
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 801B039C
L_801B03A0:;
  c->lr=0x801B03A4u; f_800797AC(c); // 801B03A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B03A4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 801B03A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B03AC
  if (!crb(c,2)) { goto L_801B03BC; } // 801B03B0
  c->r[0]=0u+0x00000001u; // 801B03B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B03B8
L_801B03BC:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 801B03BC
  c->r[5]=0u+0x0000012Cu; // 801B03C0
  c->r[4]=c->r[7]+0x00000001u; // 801B03C4
  c->r[0]=divwu(c->r[4],c->r[5]); // 801B03C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801B03CC
  c->r[6]=c->r[4]-c->r[0]; // 801B03D0
  goto L_801B0420; // 801B03D4
L_801B03D8:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801B03D8
  c->r[4]=c->r[3]+c->r[0]; // 801B03DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B03E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B03E4
  if (!crb(c,2)) { goto L_801B0410; } // 801B03E8
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B03EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B03F0
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B03F4
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 801B03F8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B03FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B0400
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B0404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0408
  goto L_801B043C; // 801B040C
L_801B0410:;
  c->r[4]=c->r[6]+0x00000001u; // 801B0410
  c->r[0]=divwu(c->r[4],c->r[5]); // 801B0414
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801B0418
  c->r[6]=c->r[4]-c->r[0]; // 801B041C
L_801B0420:;
  cmpu(c,0,c->r[6],c->r[7]); // 801B0420
  if (!crb(c,2)) { IRQCHK(c); goto L_801B03D8; } // 801B0424
  c->r[0]=0u+0x00000000u; // 801B0428
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B042C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B0430
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B0434
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0438
L_801B043C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 801B043C
  c->r[24]=c->r[26]+0x00000028u; // 801B0440
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0444
  c->r[3]=c->r[24]|c->r[24]; // 801B0448
  W32(c->r[1]+0x00000018u,c->r[4]); // 801B044C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B0450
  W32(c->r[26]+0x00000020u,c->r[4]); // 801B0454
  W32(c->r[26]+0x00000024u,c->r[0]); // 801B0458
  c->lr=0x801B0460u; f_800506C0(c); // 801B045C
  cmps(c,0,(int32_t)c->r[24],0); // 801B0460
  c->r[3]=c->r[24]|c->r[24]; // 801B0464
  if (crb(c,2)) { goto L_801B0470; } // 801B0468
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 801B046C
L_801B0470:;
  c->r[28]=0u+0x00000001u; // 801B0470
  W32(c->r[24]+0x00000008u,c->r[3]); // 801B0474
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 801B0478
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 801B047C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0480
  if (!crb(c,2)) { goto L_801B04C4; } // 801B0484
  c->r[25]=0u+0x80740000u; // 801B0488
  c->r[3]=c->r[25]+0x000074BCu; // 801B048C
  c->lr=0x801B0494u; f_800506C0(c); // 801B0490
  c->r[6]=0u+0x806D0000u; // 801B0494
  c->r[4]=0u+0x80060000u; // 801B0498
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 801B049C
  c->r[3]=c->r[25]+0x000074BCu; // 801B04A0
  c->r[0]=c->r[6]+0x00000008u; // 801B04A4
  c->r[5]=0u+0x80750000u; // 801B04A8
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B04AC
  c->r[4]=c->r[4]+0x000057D4u; // 801B04B0
  c->r[5]=c->r[5]+0x00004F20u; // 801B04B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B04B8
  c->lr=0x801B04C0u; f_803A92B8(c); // 801B04BC
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 801B04C0
L_801B04C4:;
  c->r[3]=0u+0x80740000u; // 801B04C4
  c->r[5]=c->r[24]|c->r[24]; // 801B04C8
  c->r[3]=c->r[3]+0x000074BCu; // 801B04CC
  c->r[4]=c->r[3]|c->r[3]; // 801B04D0
  c->lr=0x801B04D8u; f_802DDCA8(c); // 801B04D4
  c->r[25]=c->r[26]+0x00000038u; // 801B04D8
  c->r[3]=c->r[25]|c->r[25]; // 801B04DC
  c->lr=0x801B04E4u; f_800506C0(c); // 801B04E0
  cmps(c,0,(int32_t)c->r[25],0); // 801B04E4
  c->r[0]=c->r[25]|c->r[25]; // 801B04E8
  if (crb(c,2)) { goto L_801B04F4; } // 801B04EC
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 801B04F0
L_801B04F4:;
  c->r[28]=c->r[26]+0x00000044u; // 801B04F4
  W32(c->r[25]+0x00000008u,c->r[0]); // 801B04F8
  c->r[3]=c->r[28]|c->r[28]; // 801B04FC
  c->lr=0x801B0504u; f_800506C0(c); // 801B0500
  cmps(c,0,(int32_t)c->r[28],0); // 801B0504
  c->r[0]=c->r[28]|c->r[28]; // 801B0508
  if (crb(c,2)) { goto L_801B0514; } // 801B050C
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 801B0510
L_801B0514:;
  c->r[3]=0u+0x806F0000u; // 801B0514
  c->r[25]=0u+0x00000000u; // 801B0518
  c->r[3]=c->r[3]+0x00000E80u; // 801B051C
  W32(c->r[28]+0x00000008u,c->r[0]); // 801B0520
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 801B0524
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 801B0528
  W32(c->r[26]+0x00000058u,c->r[25]); // 801B052C
  W32(c->r[26]+0x00000064u,c->r[25]); // 801B0530
  c->lr=0x801B0538u; f_8007BDCC(c); // 801B0534
  c->r[0]=c->r[13]+0xFFFF8114u; // 801B0538
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 801B053C
  W32(c->r[26]+0x000000A0u,c->r[0]); // 801B0540
  W32(c->r[26]+0x000000A4u,c->r[25]); // 801B0544
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 801B0548
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B054C
  if (!crb(c,2)) { goto L_801B0570; } // 801B0550
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B0554
  c->r[0]=0u+0x00000001u; // 801B0558
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B055C
  c->r[3]=c->r[4]+0x00000001u; // 801B0560
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B0564
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 801B0568
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 801B056C
L_801B0570:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 801B0570
  c->r[3]=c->r[13]+0xFFFF8110u; // 801B0574
  c->r[0]=0u+0x00000000u; // 801B0578
  W32(c->r[26]+0x000000A8u,c->r[4]); // 801B057C
  W32(c->r[26]+0x000000ACu,c->r[3]); // 801B0580
  W32(c->r[26]+0x000000B0u,c->r[0]); // 801B0584
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 801B0588
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B058C
  if (!crb(c,2)) { goto L_801B05B0; } // 801B0590
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B0594
  c->r[0]=0u+0x00000001u; // 801B0598
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B059C
  c->r[3]=c->r[4]+0x00000001u; // 801B05A0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B05A4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 801B05A8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 801B05AC
L_801B05B0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 801B05B0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 801B05B4
  c->r[0]=0u+0x00000000u; // 801B05B8
  W32(c->r[26]+0x000000B4u,c->r[4]); // 801B05BC
  W32(c->r[26]+0x000000B8u,c->r[3]); // 801B05C0
  W32(c->r[26]+0x000000BCu,c->r[0]); // 801B05C4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 801B05C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B05CC
  if (!crb(c,2)) { goto L_801B05F0; } // 801B05D0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B05D4
  c->r[0]=0u+0x00000001u; // 801B05D8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B05DC
  c->r[3]=c->r[4]+0x00000001u; // 801B05E0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B05E4
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 801B05E8
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 801B05EC
L_801B05F0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 801B05F0
  c->r[3]=c->r[13]+0xFFFF8108u; // 801B05F4
  c->r[0]=0u+0x00000000u; // 801B05F8
  W32(c->r[26]+0x000000C0u,c->r[4]); // 801B05FC
  W32(c->r[26]+0x000000C4u,c->r[3]); // 801B0600
  W32(c->r[26]+0x000000C8u,c->r[0]); // 801B0604
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 801B0608
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B060C
  if (!crb(c,2)) { goto L_801B0630; } // 801B0610
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B0614
  c->r[0]=0u+0x00000001u; // 801B0618
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B061C
  c->r[3]=c->r[4]+0x00000001u; // 801B0620
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B0624
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 801B0628
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 801B062C
L_801B0630:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 801B0630
  c->r[0]=c->r[13]+0xFFFF8104u; // 801B0634
  c->r[25]=0u+0x00000000u; // 801B0638
  W32(c->r[26]+0x000000CCu,c->r[3]); // 801B063C
  c->r[3]=c->r[26]+0x000000D8u; // 801B0640
  W32(c->r[26]+0x000000D0u,c->r[0]); // 801B0644
  W32(c->r[26]+0x000000D4u,c->r[25]); // 801B0648
  c->lr=0x801B0650u; f_800506C0(c); // 801B064C
  c->r[4]=0u+0x806F0000u; // 801B0650
  c->r[3]=0u+0x00000006u; // 801B0654
  c->r[4]=c->r[4]+0x000007A0u; // 801B0658
  c->r[28]=c->r[26]+0x000000FCu; // 801B065C
  c->r[0]=c->r[4]+0x00000024u; // 801B0660
  W32(c->r[26]+0x000000E8u,c->r[3]); // 801B0664
  c->r[3]=c->r[28]+0x0000000Cu; // 801B0668
  W32(c->r[26]+0x000000ECu,c->r[25]); // 801B066C
  W32(c->r[26]+0x000000F8u,c->r[25]); // 801B0670
  W32(c->r[26]+0x000000FCu,c->r[4]); // 801B0674
  W32(c->r[26]+0x00000100u,c->r[0]); // 801B0678
  c->lr=0x801B0680u; f_800506C0(c); // 801B067C
  c->r[3]=c->r[28]+0x00000018u; // 801B0680
  c->lr=0x801B0688u; f_800506C0(c); // 801B0684
  W32(c->r[28]+0x00000024u,c->r[25]); // 801B0688
  c->r[3]=c->r[28]+0x000000B0u; // 801B068C
  c->lr=0x801B0694u; f_800506C0(c); // 801B0690
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B0694
  c->r[3]=c->r[28]|c->r[28]; // 801B0698
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B069C
  c->ctr=c->r[12]; // 801B06A0
  if (true) { c->lr=0x801B06A8u; dispatch(c,c->ctr); } // 801B06A4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 801B06A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B06AC
  if (!crb(c,2)) { goto L_801B06CC; } // 801B06B0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 801B06B4
  c->r[0]=0u+0x00000001u; // 801B06B8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 801B06BC
  c->r[3]=c->r[3]+0x00000001u; // 801B06C0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 801B06C4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 801B06C8
L_801B06CC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 801B06CC
  c->r[5]=0u+0x806F0000u; // 801B06D0
  c->r[5]=c->r[5]+0x000007F8u; // 801B06D4
  c->r[0]=0u+0x00000032u; // 801B06D8
  c->r[4]=c->r[5]+0x00000024u; // 801B06DC
  W32(c->r[28]+0x00000008u,c->r[3]); // 801B06E0
  c->r[6]=0u+0x00000000u; // 801B06E4
  c->r[3]=0u+0x00000000u; // 801B06E8
  W32(c->r[28]+0x00000000u,c->r[5]); // 801B06EC
  W32(c->r[28]+0x00000004u,c->r[4]); // 801B06F0
  c->ctr=c->r[0]; // 801B06F4
L_801B06F8:;
  c->r[4]=c->r[28]+c->r[3]; // 801B06F8
  c->r[3]=c->r[3]+0x00000004u; // 801B06FC
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 801B0700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B06F8; } // 801B0704
  c->r[3]=0u+0x806D0000u; // 801B0708
  c->r[7]=0u+0x00000000u; // 801B070C
  c->r[3]=c->r[3]+0x00003868u; // 801B0710
  c->r[0]=0u+0x0000000Au; // 801B0714
  c->r[4]=c->r[3]+0x00000024u; // 801B0718
  W32(c->r[28]+0x00000000u,c->r[3]); // 801B071C
  c->r[8]=0u+0x00000000u; // 801B0720
  c->r[3]=0u+0x00000000u; // 801B0724
  W32(c->r[28]+0x00000004u,c->r[4]); // 801B0728
  c->r[6]=0u+0xFFFFFFFFu; // 801B072C
  W32(c->r[26]+0x00000314u,c->r[7]); // 801B0730
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 801B0734
  W32(c->r[26]+0x00000054u,c->r[7]); // 801B0738
  W32(c->r[26]+0x00000310u,c->r[26]); // 801B073C
  c->ctr=c->r[0]; // 801B0740
L_801B0744:;
  c->r[5]=c->r[26]+c->r[3]; // 801B0744
  c->r[4]=c->r[26]+c->r[8]; // 801B0748
  W32(c->r[5]+0x00000068u,c->r[6]); // 801B074C
  c->r[8]=c->r[8]+0x00000001u; // 801B0750
  c->r[3]=c->r[3]+0x00000004u; // 801B0754
  W8(c->r[4]+0x00000090u,c->r[7]); // 801B0758
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0744; } // 801B075C
  c->r[24]=c->r[26]+0x00000318u; // 801B0760
  c->r[3]=c->r[24]|c->r[24]; // 801B0764
  c->lr=0x801B076Cu; f_800506C0(c); // 801B0768
  cmps(c,0,(int32_t)c->r[24],0); // 801B076C
  c->r[3]=c->r[24]|c->r[24]; // 801B0770
  if (crb(c,2)) { goto L_801B077C; } // 801B0774
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 801B0778
L_801B077C:;
  c->r[29]=0u+0x00000001u; // 801B077C
  W32(c->r[24]+0x00000008u,c->r[3]); // 801B0780
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801B0784
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 801B0788
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B078C
  if (!crb(c,2)) { goto L_801B07D0; } // 801B0790
  c->r[28]=0u+0x80750000u; // 801B0794
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801B0798
  c->lr=0x801B07A0u; f_800506C0(c); // 801B079C
  c->r[6]=0u+0x806D0000u; // 801B07A0
  c->r[4]=0u+0x80080000u; // 801B07A4
  c->r[6]=c->r[6]+0x000038D8u; // 801B07A8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801B07AC
  c->r[0]=c->r[6]+0x00000008u; // 801B07B0
  c->r[5]=0u+0x80750000u; // 801B07B4
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B07B8
  c->r[4]=c->r[4]+0xFFFF9844u; // 801B07BC
  c->r[5]=c->r[5]+0x00004F14u; // 801B07C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B07C4
  c->lr=0x801B07CCu; f_803A92B8(c); // 801B07C8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 801B07CC
L_801B07D0:;
  c->r[3]=0u+0x80750000u; // 801B07D0
  c->r[5]=c->r[24]|c->r[24]; // 801B07D4
  c->r[3]=c->r[3]+0xFFFF816Cu; // 801B07D8
  c->r[4]=c->r[3]|c->r[3]; // 801B07DC
  c->lr=0x801B07E4u; f_802DDCA8(c); // 801B07E0
  c->r[3]=0u+0x806D0000u; // 801B07E4
  c->r[0]=0u+0x00000000u; // 801B07E8
  c->r[3]=c->r[3]+0xFFFFD974u; // 801B07EC
  c->r[5]=0u+0xFFFFFFFFu; // 801B07F0
  c->r[4]=0u+0x00000001u; // 801B07F4
  c->r[25]=c->r[26]+0x0000032Cu; // 801B07F8
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 801B07FC
  c->r[3]=c->r[25]|c->r[25]; // 801B0800
  W32(c->r[26]+0x00000328u,c->r[5]); // 801B0804
  W32(c->r[26]+0x000000ECu,c->r[4]); // 801B0808
  W32(c->r[26]+0x00000054u,c->r[0]); // 801B080C
  W32(c->r[26]+0x00000314u,c->r[0]); // 801B0810
  c->lr=0x801B0818u; f_800506C0(c); // 801B0814
  cmps(c,0,(int32_t)c->r[25],0); // 801B0818
  c->r[3]=c->r[25]|c->r[25]; // 801B081C
  if (crb(c,2)) { goto L_801B0828; } // 801B0820
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 801B0824
L_801B0828:;
  c->r[28]=0u+0x00000001u; // 801B0828
  W32(c->r[25]+0x00000008u,c->r[3]); // 801B082C
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 801B0830
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801B0834
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0838
  if (!crb(c,2)) { goto L_801B087C; } // 801B083C
  c->r[27]=0u+0x80730000u; // 801B0840
  c->r[3]=c->r[27]+0x000073A8u; // 801B0844
  c->lr=0x801B084Cu; f_800506C0(c); // 801B0848
  c->r[6]=0u+0x806D0000u; // 801B084C
  c->r[4]=0u+0x80050000u; // 801B0850
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801B0854
  c->r[3]=c->r[27]+0x000073A8u; // 801B0858
  c->r[0]=c->r[6]+0x00000008u; // 801B085C
  c->r[5]=0u+0x80750000u; // 801B0860
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B0864
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 801B0868
  c->r[5]=c->r[5]+0x00004F08u; // 801B086C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B0870
  c->lr=0x801B0878u; f_803A92B8(c); // 801B0874
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 801B0878
L_801B087C:;
  c->r[3]=0u+0x80730000u; // 801B087C
  c->r[5]=c->r[25]|c->r[25]; // 801B0880
  c->r[3]=c->r[3]+0x000073A8u; // 801B0884
  c->r[4]=c->r[3]|c->r[3]; // 801B0888
  c->lr=0x801B0890u; f_802DDCA8(c); // 801B088C
  c->r[25]=c->r[26]+0x0000033Cu; // 801B0890
  c->r[3]=c->r[25]|c->r[25]; // 801B0894
  c->lr=0x801B089Cu; f_800506C0(c); // 801B0898
  cmps(c,0,(int32_t)c->r[25],0); // 801B089C
  c->r[3]=c->r[25]|c->r[25]; // 801B08A0
  if (crb(c,2)) { goto L_801B08AC; } // 801B08A4
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 801B08A8
L_801B08AC:;
  c->r[28]=0u+0x00000001u; // 801B08AC
  W32(c->r[25]+0x00000008u,c->r[3]); // 801B08B0
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 801B08B4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 801B08B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B08BC
  if (!crb(c,2)) { goto L_801B0900; } // 801B08C0
  c->r[27]=0u+0x80750000u; // 801B08C4
  c->r[3]=c->r[27]+0xFFFF8158u; // 801B08C8
  c->lr=0x801B08D0u; f_800506C0(c); // 801B08CC
  c->r[6]=0u+0x806D0000u; // 801B08D0
  c->r[4]=0u+0x80080000u; // 801B08D4
  c->r[6]=c->r[6]+0x000038F0u; // 801B08D8
  c->r[3]=c->r[27]+0xFFFF8158u; // 801B08DC
  c->r[0]=c->r[6]+0x00000008u; // 801B08E0
  c->r[5]=0u+0x80750000u; // 801B08E4
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B08E8
  c->r[4]=c->r[4]+0xFFFF98C0u; // 801B08EC
  c->r[5]=c->r[5]+0x00004EFCu; // 801B08F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B08F4
  c->lr=0x801B08FCu; f_803A92B8(c); // 801B08F8
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 801B08FC
L_801B0900:;
  c->r[3]=0u+0x80750000u; // 801B0900
  c->r[5]=c->r[25]|c->r[25]; // 801B0904
  c->r[3]=c->r[3]+0xFFFF8158u; // 801B0908
  c->r[4]=c->r[3]|c->r[3]; // 801B090C
  c->lr=0x801B0914u; f_802DDCA8(c); // 801B0910
  c->r[3]=0u+0x806D0000u; // 801B0914
  W32(c->r[26]+0x00000054u,c->r[31]); // 801B0918
  c->r[3]=c->r[3]+0x00004AE8u; // 801B091C
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 801B0920
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 801B0924
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0928
  if (!crb(c,2)) { goto L_801B0948; } // 801B092C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801B0930
  c->r[0]=0u+0x00000001u; // 801B0934
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 801B0938
  c->r[3]=c->r[3]+0x00000001u; // 801B093C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801B0940
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 801B0944
L_801B0948:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 801B0948
  W32(c->r[26]+0x00000328u,c->r[0]); // 801B094C
  c->r[0]=R8(c->r[13]+0xFFFFD02Cu); // 801B0950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0954
  if (!crb(c,2)) { goto L_801B0974; } // 801B0958
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 801B095C
  c->r[0]=0u+0x00000001u; // 801B0960
  W32(c->r[13]+0xFFFFD028u,c->r[3]); // 801B0964
  c->r[3]=c->r[3]+0x00000001u; // 801B0968
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 801B096C
  W8(c->r[13]+0xFFFFD02Cu,c->r[0]); // 801B0970
L_801B0974:;
  c->r[0]=R32(c->r[13]+0xFFFFD028u); // 801B0974
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 801B0978
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 801B097C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0980
  if (!crb(c,2)) { goto L_801B09A0; } // 801B0984
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 801B0988
  c->r[0]=0u+0x00000001u; // 801B098C
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 801B0990
  c->r[3]=c->r[3]+0x00000001u; // 801B0994
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 801B0998
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 801B099C
L_801B09A0:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 801B09A0
  c->r[5]=0u+0x806D0000u; // 801B09A4
  c->r[5]=c->r[5]+0xFFFFE468u; // 801B09A8
  W32(c->r[26]+0x00000350u,c->r[0]); // 801B09AC
  c->r[3]=c->r[26]+0x000003B0u; // 801B09B0
  c->r[4]=0u+0x00000000u; // 801B09B4
  W32(c->r[26]+0x00000400u,c->r[5]); // 801B09B8
  c->r[5]=0u+0x00000050u; // 801B09BC
  c->lr=0x801B09C4u; f_800043EC(c); // 801B09C0
  c->r[4]=0u+0x806D0000u; // 801B09C4
  c->r[3]=c->r[26]+0x00000450u; // 801B09C8
  c->r[4]=c->r[4]+0xFFFFE170u; // 801B09CC
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 801B09D0
  c->r[0]=c->r[4]+0x00000044u; // 801B09D4
  W32(c->r[26]+0x00000400u,c->r[0]); // 801B09D8
  c->lr=0x801B09E0u; f_8007BDFC(c); // 801B09DC
  c->r[3]=c->r[26]+0x000004C4u; // 801B09E0
  c->lr=0x801B09E8u; f_8007BDFC(c); // 801B09E4
  c->r[3]=c->r[26]+0x00000538u; // 801B09E8
  c->r[4]=0u+0x00000000u; // 801B09EC
  c->r[5]=0u+0x00000008u; // 801B09F0
  c->lr=0x801B09F8u; f_800043EC(c); // 801B09F4
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B09F8
  cmps(c,0,(int32_t)c->r[24],0); // 801B09FC
  if (crb(c,2)) { goto L_801B0A44; } // 801B0A00
  c->lr=0x801B0A08u; f_801B0EE0(c); // 801B0A04
  c->r[27]=c->r[3]|c->r[3]; // 801B0A08
  c->lr=0x801B0A10u; f_8007BDCC(c); // 801B0A0C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 801B0A10
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0A14
  c->r[5]=0u+0x801B0000u; // 801B0A18
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0A1C
  c->r[4]=c->r[24]+c->r[4]; // 801B0A20
  c->r[5]=c->r[5]+0x00000F34u; // 801B0A24
  c->r[4]=c->r[4]+c->r[0]; // 801B0A28
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0A2C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0A30
  cmpu(c,0,c->r[0],0x0000000Cu); // 801B0A34
  if (!crb(c,0)) { goto L_801B0A44; } // 801B0A38
  c->r[0]=0u+0x0000000Cu; // 801B0A3C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0A40
L_801B0A44:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0A44
  cmps(c,0,(int32_t)c->r[24],0); // 801B0A48
  if (crb(c,2)) { goto L_801B0AB4; } // 801B0A4C
  c->lr=0x801B0A54u; f_801B0EE0(c); // 801B0A50
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 801B0A54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0A58
  if (!crb(c,2)) { goto L_801B0A7C; } // 801B0A5C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0A60
  c->r[0]=0u+0x00000001u; // 801B0A64
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0A68
  c->r[4]=c->r[5]+0x00000001u; // 801B0A6C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0A70
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 801B0A74
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 801B0A78
L_801B0A7C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0A7C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 801B0A80
  c->r[5]=0u+0x801B0000u; // 801B0A84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0A88
  c->r[4]=c->r[24]+c->r[4]; // 801B0A8C
  c->r[5]=c->r[5]+0x00000F30u; // 801B0A90
  c->r[4]=c->r[4]+c->r[0]; // 801B0A94
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0A98
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0A9C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0AA0
  cmpu(c,0,c->r[0],0x00000018u); // 801B0AA4
  if (!crb(c,0)) { goto L_801B0AB4; } // 801B0AA8
  c->r[0]=0u+0x00000018u; // 801B0AAC
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0AB0
L_801B0AB4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0AB4
  cmps(c,0,(int32_t)c->r[24],0); // 801B0AB8
  if (crb(c,2)) { goto L_801B0B24; } // 801B0ABC
  c->lr=0x801B0AC4u; f_801B0EE0(c); // 801B0AC0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 801B0AC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0AC8
  if (!crb(c,2)) { goto L_801B0AEC; } // 801B0ACC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0AD0
  c->r[0]=0u+0x00000001u; // 801B0AD4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0AD8
  c->r[4]=c->r[5]+0x00000001u; // 801B0ADC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0AE0
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 801B0AE4
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 801B0AE8
L_801B0AEC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0AEC
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 801B0AF0
  c->r[5]=0u+0x801B0000u; // 801B0AF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0AF8
  c->r[4]=c->r[24]+c->r[4]; // 801B0AFC
  c->r[5]=c->r[5]+0x00000F2Cu; // 801B0B00
  c->r[4]=c->r[4]+c->r[0]; // 801B0B04
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0B08
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0B0C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0B10
  cmpu(c,0,c->r[0],0x0000006Cu); // 801B0B14
  if (!crb(c,0)) { goto L_801B0B24; } // 801B0B18
  c->r[0]=0u+0x0000006Cu; // 801B0B1C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0B20
L_801B0B24:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0B24
  cmps(c,0,(int32_t)c->r[24],0); // 801B0B28
  if (crb(c,2)) { goto L_801B0B94; } // 801B0B2C
  c->lr=0x801B0B34u; f_801B0EE0(c); // 801B0B30
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801B0B34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0B38
  if (!crb(c,2)) { goto L_801B0B5C; } // 801B0B3C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0B40
  c->r[0]=0u+0x00000001u; // 801B0B44
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0B48
  c->r[4]=c->r[5]+0x00000001u; // 801B0B4C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0B50
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 801B0B54
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 801B0B58
L_801B0B5C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0B5C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 801B0B60
  c->r[5]=0u+0x801B0000u; // 801B0B64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0B68
  c->r[4]=c->r[24]+c->r[4]; // 801B0B6C
  c->r[5]=c->r[5]+0x00000F28u; // 801B0B70
  c->r[4]=c->r[4]+c->r[0]; // 801B0B74
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0B78
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0B7C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0B80
  cmpu(c,0,c->r[0],0x0000002Cu); // 801B0B84
  if (!crb(c,0)) { goto L_801B0B94; } // 801B0B88
  c->r[0]=0u+0x0000002Cu; // 801B0B8C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0B90
L_801B0B94:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0B94
  cmps(c,0,(int32_t)c->r[24],0); // 801B0B98
  if (crb(c,2)) { goto L_801B0C04; } // 801B0B9C
  c->lr=0x801B0BA4u; f_801B0EE0(c); // 801B0BA0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801B0BA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0BA8
  if (!crb(c,2)) { goto L_801B0BCC; } // 801B0BAC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0BB0
  c->r[0]=0u+0x00000001u; // 801B0BB4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0BB8
  c->r[4]=c->r[5]+0x00000001u; // 801B0BBC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0BC0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801B0BC4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801B0BC8
L_801B0BCC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0BCC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801B0BD0
  c->r[5]=0u+0x801B0000u; // 801B0BD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0BD8
  c->r[4]=c->r[24]+c->r[4]; // 801B0BDC
  c->r[5]=c->r[5]+0x00000F24u; // 801B0BE0
  c->r[4]=c->r[4]+c->r[0]; // 801B0BE4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0BE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0BEC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0BF0
  cmpu(c,0,c->r[0],0x00000010u); // 801B0BF4
  if (!crb(c,0)) { goto L_801B0C04; } // 801B0BF8
  c->r[0]=0u+0x00000010u; // 801B0BFC
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0C00
L_801B0C04:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0C04
  cmps(c,0,(int32_t)c->r[24],0); // 801B0C08
  if (crb(c,2)) { goto L_801B0C74; } // 801B0C0C
  c->lr=0x801B0C14u; f_801B0EE0(c); // 801B0C10
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801B0C14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0C18
  if (!crb(c,2)) { goto L_801B0C3C; } // 801B0C1C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0C20
  c->r[0]=0u+0x00000001u; // 801B0C24
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0C28
  c->r[4]=c->r[5]+0x00000001u; // 801B0C2C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0C30
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801B0C34
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801B0C38
L_801B0C3C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0C3C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801B0C40
  c->r[5]=0u+0x801B0000u; // 801B0C44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0C48
  c->r[4]=c->r[24]+c->r[4]; // 801B0C4C
  c->r[5]=c->r[5]+0x00000F20u; // 801B0C50
  c->r[4]=c->r[4]+c->r[0]; // 801B0C54
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0C58
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0C5C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0C60
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B0C64
  if (!crb(c,0)) { goto L_801B0C74; } // 801B0C68
  c->r[0]=0u+0x0000005Cu; // 801B0C6C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0C70
L_801B0C74:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0C74
  cmps(c,0,(int32_t)c->r[24],0); // 801B0C78
  if (crb(c,2)) { goto L_801B0CE4; } // 801B0C7C
  c->lr=0x801B0C84u; f_801B0EE0(c); // 801B0C80
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 801B0C84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0C88
  if (!crb(c,2)) { goto L_801B0CAC; } // 801B0C8C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0C90
  c->r[0]=0u+0x00000001u; // 801B0C94
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0C98
  c->r[4]=c->r[5]+0x00000001u; // 801B0C9C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0CA0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801B0CA4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801B0CA8
L_801B0CAC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0CAC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801B0CB0
  c->r[5]=0u+0x801B0000u; // 801B0CB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0CB8
  c->r[4]=c->r[24]+c->r[4]; // 801B0CBC
  c->r[5]=c->r[5]+0x00000F1Cu; // 801B0CC0
  c->r[4]=c->r[4]+c->r[0]; // 801B0CC4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0CC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0CCC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0CD0
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B0CD4
  if (!crb(c,0)) { goto L_801B0CE4; } // 801B0CD8
  c->r[0]=0u+0x0000005Cu; // 801B0CDC
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0CE0
L_801B0CE4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0CE4
  cmps(c,0,(int32_t)c->r[24],0); // 801B0CE8
  if (crb(c,2)) { goto L_801B0D54; } // 801B0CEC
  c->lr=0x801B0CF4u; f_801B0EE0(c); // 801B0CF0
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801B0CF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0CF8
  if (!crb(c,2)) { goto L_801B0D1C; } // 801B0CFC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0D00
  c->r[0]=0u+0x00000001u; // 801B0D04
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0D08
  c->r[4]=c->r[5]+0x00000001u; // 801B0D0C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0D10
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801B0D14
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801B0D18
L_801B0D1C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0D1C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801B0D20
  c->r[5]=0u+0x801B0000u; // 801B0D24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0D28
  c->r[4]=c->r[24]+c->r[4]; // 801B0D2C
  c->r[5]=c->r[5]+0x00000F18u; // 801B0D30
  c->r[4]=c->r[4]+c->r[0]; // 801B0D34
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0D38
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0D3C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0D40
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B0D44
  if (!crb(c,0)) { goto L_801B0D54; } // 801B0D48
  c->r[0]=0u+0x0000005Cu; // 801B0D4C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0D50
L_801B0D54:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 801B0D54
  cmps(c,0,(int32_t)c->r[24],0); // 801B0D58
  if (crb(c,2)) { goto L_801B0DC4; } // 801B0D5C
  c->lr=0x801B0D64u; f_801B0EE0(c); // 801B0D60
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 801B0D64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0D68
  if (!crb(c,2)) { goto L_801B0D8C; } // 801B0D6C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B0D70
  c->r[0]=0u+0x00000001u; // 801B0D74
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B0D78
  c->r[4]=c->r[5]+0x00000001u; // 801B0D7C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B0D80
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 801B0D84
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 801B0D88
L_801B0D8C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B0D8C
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 801B0D90
  c->r[5]=0u+0x801B0000u; // 801B0D94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0D98
  c->r[4]=c->r[24]+c->r[4]; // 801B0D9C
  c->r[5]=c->r[5]+0x00000F14u; // 801B0DA0
  c->r[4]=c->r[4]+c->r[0]; // 801B0DA4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0DA8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0DAC
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0DB0
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B0DB4
  if (!crb(c,0)) { goto L_801B0DC4; } // 801B0DB8
  c->r[0]=0u+0x0000005Cu; // 801B0DBC
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0DC0
L_801B0DC4:;
  c->r[3]=c->r[26]|c->r[26]; // 801B0DC4
  c->lr=0x801B0DCCu; f_8005BBF0(c); // 801B0DC8
  c->r[4]=0u+0x806E0000u; // 801B0DCC
  c->r[3]=c->r[26]+0x000005C0u; // 801B0DD0
  c->r[4]=c->r[4]+0x000026D0u; // 801B0DD4
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 801B0DD8
  c->r[0]=c->r[4]+0x00000044u; // 801B0DDC
  W32(c->r[26]+0x00000400u,c->r[0]); // 801B0DE0
  c->lr=0x801B0DE8u; f_803209E8(c); // 801B0DE4
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801B0DE8
  cmps(c,0,(int32_t)c->r[24],0); // 801B0DEC
  if (crb(c,2)) { goto L_801B0E58; } // 801B0DF0
  c->lr=0x801B0DF8u; f_801B0EE0(c); // 801B0DF4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 801B0DF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0DFC
  if (!crb(c,2)) { goto L_801B0E20; } // 801B0E00
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 801B0E04
  c->r[0]=0u+0x00000001u; // 801B0E08
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 801B0E0C
  c->r[4]=c->r[5]+0x00000001u; // 801B0E10
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 801B0E14
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 801B0E18
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 801B0E1C
L_801B0E20:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 801B0E20
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 801B0E24
  c->r[5]=0u+0x801B0000u; // 801B0E28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0E2C
  c->r[4]=c->r[24]+c->r[4]; // 801B0E30
  c->r[5]=c->r[5]+0x00000F10u; // 801B0E34
  c->r[4]=c->r[4]+c->r[0]; // 801B0E38
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0E3C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0E40
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0E44
  cmpu(c,0,c->r[0],0x00000010u); // 801B0E48
  if (!crb(c,0)) { goto L_801B0E58; } // 801B0E4C
  c->r[0]=0u+0x00000010u; // 801B0E50
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0E54
L_801B0E58:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801B0E58
  cmps(c,0,(int32_t)c->r[24],0); // 801B0E5C
  if (crb(c,2)) { goto L_801B0EA4; } // 801B0E60
  c->lr=0x801B0E68u; f_801B0EE0(c); // 801B0E64
  c->r[27]=c->r[3]|c->r[3]; // 801B0E68
  c->lr=0x801B0E70u; f_80062F1C(c); // 801B0E6C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801B0E70
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B0E74
  c->r[5]=0u+0x801B0000u; // 801B0E78
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0E7C
  c->r[4]=c->r[24]+c->r[4]; // 801B0E80
  c->r[5]=c->r[5]+0x00000EDCu; // 801B0E84
  c->r[4]=c->r[4]+c->r[0]; // 801B0E88
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B0E8C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801B0E90
  cmpu(c,0,c->r[0],0x00000010u); // 801B0E94
  if (!crb(c,0)) { goto L_801B0EA4; } // 801B0E98
  c->r[0]=0u+0x00000010u; // 801B0E9C
  W32(c->r[24]+c->r[3],c->r[0]); // 801B0EA0
L_801B0EA4:;
  {uint32_t ea=c->r[2]+0xFFFFC638u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0EA4
  c->r[0]=0u+0x00000000u; // 801B0EA8
  W8(c->r[26]+0x000005FCu,c->r[0]); // 801B0EAC
  c->r[11]=c->r[1]+0x00000040u; // 801B0EB0
  c->r[3]=c->r[26]|c->r[26]; // 801B0EB4
  W8(c->r[26]+0x000005FDu,c->r[0]); // 801B0EB8
  W8(c->r[26]+0x000005FEu,c->r[0]); // 801B0EBC
  W8(c->r[26]+0x000005FFu,c->r[0]); // 801B0EC0
  {uint32_t ea=c->r[26]+0x00000600u; WF32(ea,c->f[0]);} // 801B0EC4
  c->lr=0x801B0ECCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0EC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B0ECC
  c->lr=c->r[0]; // 801B0ED0
  c->r[1]=c->r[1]+0x00000040u; // 801B0ED4
  return; // 801B0ED8
}

// fn_801B0EDC
void f_801B0EDC(Ctx* __restrict c) {
  trace_call(0x801B0EDCu);
  return; // 801B0EDC
}

// fn_801B0EE0
void f_801B0EE0(Ctx* __restrict c) {
  trace_call(0x801B0EE0u);
  c->r[0]=R8(c->r[13]+0xFFFFD024u); // 801B0EE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0EE4
  if (!crb(c,2)) { goto L_801B0F08; } // 801B0EE8
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801B0EEC
  c->r[0]=0u+0x00000001u; // 801B0EF0
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801B0EF4
  c->r[3]=c->r[4]+0x00000001u; // 801B0EF8
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801B0EFC
  W32(c->r[13]+0xFFFFD020u,c->r[4]); // 801B0F00
  W8(c->r[13]+0xFFFFD024u,c->r[0]); // 801B0F04
L_801B0F08:;
  c->r[3]=R32(c->r[13]+0xFFFFD020u); // 801B0F08
  return; // 801B0F0C
}

// fn_801B0F10
void f_801B0F10(Ctx* __restrict c) {
  trace_call(0x801B0F10u);
  f_801B10D8(c); return; // 801B0F10
}

// fn_801B0F14
void f_801B0F14(Ctx* __restrict c) {
  trace_call(0x801B0F14u);
  f_8005E338(c); return; // 801B0F14
}

// fn_801B0F18
void f_801B0F18(Ctx* __restrict c) {
  trace_call(0x801B0F18u);
  f_8005E324(c); return; // 801B0F18
}

// fn_801B0F1C
void f_801B0F1C(Ctx* __restrict c) {
  trace_call(0x801B0F1Cu);
  f_8005E310(c); return; // 801B0F1C
}

// fn_801B0F20
void f_801B0F20(Ctx* __restrict c) {
  trace_call(0x801B0F20u);
  f_8005E2FC(c); return; // 801B0F20
}

// fn_801B0F24
void f_801B0F24(Ctx* __restrict c) {
  trace_call(0x801B0F24u);
  f_8005E34C(c); return; // 801B0F24
}

// fn_801B0F28
void f_801B0F28(Ctx* __restrict c) {
  trace_call(0x801B0F28u);
  f_8005E360(c); return; // 801B0F28
}

// fn_801B0F2C
void f_801B0F2C(Ctx* __restrict c) {
  trace_call(0x801B0F2Cu);
  f_8005D47C(c); return; // 801B0F2C
}

// fn_801B0F30
void f_801B0F30(Ctx* __restrict c) {
  trace_call(0x801B0F30u);
  f_8005D468(c); return; // 801B0F30
}

// fn_801B0F34
void f_801B0F34(Ctx* __restrict c) {
  trace_call(0x801B0F34u);
  f_8005BEDC(c); return; // 801B0F34
}

// fn_801B0F38
void f_801B0F38(Ctx* __restrict c) {
  trace_call(0x801B0F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F38
  c->r[0]=c->lr; // 801B0F3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0F44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0F48
  c->r[30]=c->r[3]|c->r[3]; // 801B0F4C
  c->r[31]=c->r[4]|c->r[4]; // 801B0F50
  if (crb(c,2)) { goto L_801B0F74; } // 801B0F54
  if (crb(c,2)) { goto L_801B0F64; } // 801B0F58
  c->r[4]=0u+0x00000000u; // 801B0F5C
  c->lr=0x801B0F64u; f_8005BD00(c); // 801B0F60
L_801B0F64:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B0F64
  if (!crb(c,1)) { goto L_801B0F74; } // 801B0F68
  c->r[3]=c->r[30]|c->r[30]; // 801B0F6C
  c->lr=0x801B0F74u; f_8005328C(c); // 801B0F70
L_801B0F74:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0F74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B0F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0F7C
  c->lr=c->r[0]; // 801B0F80
  c->r[1]=c->r[1]+0x00000010u; // 801B0F84
  return; // 801B0F88
}

// fn_801B0F8C
void f_801B0F8C(Ctx* __restrict c) {
  trace_call(0x801B0F8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F8C
  c->r[0]=c->lr; // 801B0F90
  {uint32_t ea=c->r[2]+0xFFFFC638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0F94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0F98
  c->f[2]=c->f[1]; // 801B0F9C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B0FA0
  c->f[3]=c->f[1]; // 801B0FA4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B0FA8
  c->r[30]=c->r[3]|c->r[3]; // 801B0FAC
  c->r[3]=c->r[1]+0x00000008u; // 801B0FB0
  c->lr=0x801B0FB8u; f_8005FD70(c); // 801B0FB4
  {uint32_t ea=c->r[2]+0xFFFFC638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0FB8
  c->r[31]=c->r[3]|c->r[3]; // 801B0FBC
  c->r[3]=c->r[1]+0x00000014u; // 801B0FC0
  c->f[2]=c->f[1]; // 801B0FC4
  c->f[3]=c->f[1]; // 801B0FC8
  c->lr=0x801B0FD0u; f_8005FD70(c); // 801B0FCC
  c->r[4]=c->r[3]|c->r[3]; // 801B0FD0
  c->r[3]=c->r[30]|c->r[30]; // 801B0FD4
  c->r[5]=c->r[31]|c->r[31]; // 801B0FD8
  c->lr=0x801B0FE0u; f_801B11BC(c); // 801B0FDC
  c->r[3]=c->r[30]+0x000005C0u; // 801B0FE0
  c->r[4]=0u+0x00000001u; // 801B0FE4
  c->lr=0x801B0FECu; f_80320C3C(c); // 801B0FE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0FEC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B0FF0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B0FF4
  c->lr=c->r[0]; // 801B0FF8
  c->r[1]=c->r[1]+0x00000030u; // 801B0FFC
  return; // 801B1000
}

// fn_801B1004
void f_801B1004(Ctx* __restrict c) {
  trace_call(0x801B1004u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1004
  c->r[0]=c->lr; // 801B1008
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B100C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1010
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B1014
  c->r[30]=c->r[3]|c->r[3]; // 801B1018
  c->r[0]=R8(c->r[3]+0x000005FCu); // 801B101C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1020
  if (crb(c,2)) { goto L_801B10AC; } // 801B1024
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 801B1028
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B102C
  if (!crb(c,2)) { goto L_801B106C; } // 801B1030
  c->r[31]=0u+0x80730000u; // 801B1034
  c->r[3]=c->r[31]+0x00006D10u; // 801B1038
  c->lr=0x801B1040u; f_802D8298(c); // 801B103C
  c->r[3]=0u+0x806D0000u; // 801B1040
  c->r[4]=0u+0x80050000u; // 801B1044
  c->r[3]=c->r[3]+0xFFFFC220u; // 801B1048
  c->r[5]=0u+0x80750000u; // 801B104C
  W32(c->r[31]+0x00006D10u,c->r[3]); // 801B1050
  c->r[3]=c->r[31]+0x00006D10u; // 801B1054
  c->r[4]=c->r[4]+0xFFFF9D40u; // 801B1058
  c->r[5]=c->r[5]+0x00004F2Cu; // 801B105C
  c->lr=0x801B1064u; f_803A92B8(c); // 801B1060
  c->r[0]=0u+0x00000001u; // 801B1064
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 801B1068
L_801B106C:;
  c->r[3]=0u+0x80730000u; // 801B106C
  {uint32_t ea=c->r[30]+0x00000600u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1070
  c->r[3]=c->r[3]+0x00006D10u; // 801B1074
  {uint32_t ea=c->r[2]+0xFFFFC63Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1078
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B107C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801B1080
  {uint32_t ea=c->r[30]+0x00000600u; WF32(ea,c->f[1]);} // 801B1084
  fcmp(c,0,c->f[0],c->f[1]); // 801B1088
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B108C
  if (!crb(c,2)) { goto L_801B10AC; } // 801B1090
  c->r[3]=c->r[30]+0x000005C0u; // 801B1094
  c->r[4]=0u+0x00000000u; // 801B1098
  c->lr=0x801B10A0u; f_80320C3C(c); // 801B109C
  c->r[0]=0u+0x00000000u; // 801B10A0
  W8(c->r[30]+0x000005FCu,c->r[0]); // 801B10A4
  W8(c->r[30]+0x000005FEu,c->r[0]); // 801B10A8
L_801B10AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B10AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B10B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B10B4
  c->lr=c->r[0]; // 801B10B8
  c->r[1]=c->r[1]+0x00000010u; // 801B10BC
  return; // 801B10C0
}

// fn_801B10C4
void f_801B10C4(Ctx* __restrict c) {
  trace_call(0x801B10C4u);
  c->r[0]=R8(c->r[3]+0x000005FFu); // 801B10C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B10C8
  if (crb(c,2)) return; // 801B10CC
  f_801B12AC(c); return; // 801B10D0
  return; // 801B10D4
}

// fn_801B10D8
void f_801B10D8(Ctx* __restrict c) {
  trace_call(0x801B10D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B10D8
  c->r[0]=c->lr; // 801B10DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B10E0
  c->r[11]=c->r[1]+0x00000040u; // 801B10E4
  c->lr=0x801B10ECu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B10E8
  c->r[31]=c->r[1]|c->r[1]; // 801B10EC
  c->r[5]=R32(c->r[3]+0x00000444u); // 801B10F0
  c->r[28]=c->r[3]|c->r[3]; // 801B10F4
  {uint32_t ea=c->r[2]+0xFFFFC640u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B10F8
  c->r[4]=0u+0x00000000u; // 801B10FC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801B1100
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 801B1104
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801B1108
  c->lr=0x801B1110u; f_8005EE88(c); // 801B110C
  c->r[3]=c->r[28]|c->r[28]; // 801B1110
  c->r[4]=0u+0x00000000u; // 801B1114
  c->lr=0x801B111Cu; f_8005E814(c); // 801B1118
  c->r[4]=R32(c->r[28]+0x0000044Cu); // 801B111C
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801B1120
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801B1124
  c->r[0]=c->r[3]+0x00000002u; // 801B1128
  W32(c->r[4]+0x000000C4u,c->r[0]); // 801B112C
  c->lr=0x801B1134u; f_80062F1C(c); // 801B1130
  c->r[4]=c->r[3]|c->r[3]; // 801B1134
  c->r[3]=c->r[28]|c->r[28]; // 801B1138
  c->lr=0x801B1140u; f_80062F4C(c); // 801B113C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801B1140
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1144
  c->r[3]=c->r[28]+c->r[0]; // 801B1148
  c->r[29]=R32(c->r[3]+0x00000014u); // 801B114C
  cmps(c,0,(int32_t)c->r[29],0); // 801B1150
  if (crb(c,2)) { goto L_801B117C; } // 801B1154
  c->r[30]=0u+0x00000000u; // 801B1158
  W32(c->r[31]+0x00000024u,c->r[1]); // 801B115C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801B1160
  c->lr=0x801B1168u; f_80062F1C(c); // 801B1164
  W32(c->r[29]+0x00000000u,c->r[3]); // 801B1168
  c->r[0]=c->r[13]+0xFFFF80E4u; // 801B116C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B1170
  W32(c->r[29]+0x00000008u,c->r[30]); // 801B1174
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801B1178
L_801B117C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801B117C
  c->r[0]=0u+0x00000000u; // 801B1180
  c->r[3]=c->r[28]|c->r[28]; // 801B1184
  c->r[4]=c->r[29]|c->r[29]; // 801B1188
  W32(c->r[29]+0x00000008u,c->r[0]); // 801B118C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B1190
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801B1194
  c->lr=0x801B119Cu; f_8006306C(c); // 801B1198
  c->r[10]=c->r[31]|c->r[31]; // 801B119C
  c->r[11]=c->r[10]+0x00000040u; // 801B11A0
  c->lr=0x801B11A8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B11A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B11A8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B11AC
  c->r[1]=c->r[10]|c->r[10]; // 801B11B0
  c->lr=c->r[0]; // 801B11B4
  return; // 801B11B8
}

// fn_801B11BC
void f_801B11BC(Ctx* __restrict c) {
  trace_call(0x801B11BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B11BC
  c->r[0]=c->lr; // 801B11C0
  {uint32_t ea=c->r[2]+0xFFFFC644u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B11C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B11C8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B11CC
  c->r[31]=c->r[4]|c->r[4]; // 801B11D0
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B11D4
  c->r[30]=c->r[3]|c->r[3]; // 801B11D8
  c->r[3]=c->r[1]+0x00000008u; // 801B11DC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B11E0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B11E4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B11E8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801B11EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801B11F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801B11F4
  c->lr=0x801B11FCu; f_8005FD70(c); // 801B11F8
  c->r[3]=c->r[1]+0x00000018u; // 801B11FC
  c->lr=0x801B1204u; f_80382F00(c); // 801B1200
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1204
  c->r[3]=c->r[1]+0x00000018u; // 801B1208
  {uint32_t ea=c->r[2]+0xFFFFC648u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B120C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1210
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B1214
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 801B1218
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801B121C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801B1220
  c->lr=0x801B1228u; f_804E18A0(c); // 801B1224
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1228
  c->r[3]=c->r[30]+0x000000FCu; // 801B122C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801B1230
  c->r[4]=c->r[1]+0x00000018u; // 801B1234
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1238
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801B123C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1240
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801B1244
  c->lr=0x801B124Cu; f_80078164(c); // 801B1248
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B124C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B1250
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B1254
  c->lr=c->r[0]; // 801B1258
  c->r[1]=c->r[1]+0x00000050u; // 801B125C
  return; // 801B1260
}

// fn_801B1264
void f_801B1264(Ctx* __restrict c) {
  trace_call(0x801B1264u);
  c->r[0]=R8(c->r[3]+0x000005FFu); // 801B1264
  cmps(c,0,(int32_t)c->r[0],0); // 801B1268
  if (crb(c,2)) { goto L_801B1298; } // 801B126C
  c->r[0]=R8(c->r[3]+0x000005FCu); // 801B1270
  cmps(c,0,(int32_t)c->r[0],0); // 801B1274
  if (crb(c,2)) { goto L_801B1298; } // 801B1278
  c->r[0]=R8(c->r[3]+0x000005FDu); // 801B127C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1280
  if (crb(c,2)) { goto L_801B1298; } // 801B1284
  c->r[0]=0u+0x00000000u; // 801B1288
  W8(c->r[3]+0x000005FDu,c->r[0]); // 801B128C
  c->r[3]=0u+0x00000001u; // 801B1290
  return; // 801B1294
L_801B1298:;
  c->r[3]=0u+0x00000000u; // 801B1298
  return; // 801B129C
}

// fn_801B12A0
void f_801B12A0(Ctx* __restrict c) {
  trace_call(0x801B12A0u);
  W8(c->r[3]+0x000005FFu,c->r[4]); // 801B12A0
  return; // 801B12A4
}

// fn_801B12A8
void f_801B12A8(Ctx* __restrict c) {
  trace_call(0x801B12A8u);
  f_801B12AC(c); return; // 801B12A8
}

// fn_801B12AC
void f_801B12AC(Ctx* __restrict c) {
  trace_call(0x801B12ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B12AC
  c->r[0]=c->lr; // 801B12B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B12B4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B12B8
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B12BC
  c->r[30]=c->r[3]|c->r[3]; // 801B12C0
  c->r[0]=R8(c->r[3]+0x000005FCu); // 801B12C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B12C8
  if (!crb(c,2)) { goto L_801B13A0; } // 801B12CC
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 801B12D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B12D4
  if (!crb(c,2)) { goto L_801B1308; } // 801B12D8
  c->r[31]=0u+0x80730000u; // 801B12DC
  c->r[3]=c->r[31]+0x00002598u; // 801B12E0
  c->lr=0x801B12E8u; f_80321014(c); // 801B12E4
  c->r[4]=0u+0x80320000u; // 801B12E8
  c->r[5]=0u+0x80750000u; // 801B12EC
  c->r[3]=c->r[31]+0x00002598u; // 801B12F0
  c->r[4]=c->r[4]+0x0000116Cu; // 801B12F4
  c->r[5]=c->r[5]+0x00004EF0u; // 801B12F8
  c->lr=0x801B1300u; f_803A92B8(c); // 801B12FC
  c->r[0]=0u+0x00000001u; // 801B1300
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 801B1304
L_801B1308:;
  c->r[31]=0u+0x80690000u; // 801B1308
  c->r[4]=0u+0x80730000u; // 801B130C
  c->r[31]=c->r[31]+0x00003890u; // 801B1310
  c->r[3]=c->r[1]+0x00000008u; // 801B1314
  c->r[4]=c->r[4]+0x00002598u; // 801B1318
  c->r[6]=0u+0x00000001u; // 801B131C
  c->r[5]=c->r[31]+0x00000001u; // 801B1320
  c->lr=0x801B1328u; f_80321B90(c); // 801B1324
  c->r[3]=c->r[1]+0x00000008u; // 801B1328
  c->r[4]=c->r[30]+0x000005C0u; // 801B132C
  c->lr=0x801B1334u; f_80382F2C(c); // 801B1330
  c->r[3]=c->r[30]+0x000005F0u; // 801B1334
  c->r[4]=c->r[1]+0x00000038u; // 801B1338
  c->lr=0x801B1340u; f_80495690(c); // 801B133C
  c->r[3]=c->r[30]+0x000001B8u; // 801B1340
  c->r[4]=c->r[30]+0x000005C0u; // 801B1344
  c->lr=0x801B134Cu; f_80382F2C(c); // 801B1348
  c->r[12]=R32(c->r[30]+0x000005F8u); // 801B134C
  c->r[3]=c->r[30]+0x000005C0u; // 801B1350
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B1354
  c->ctr=c->r[12]; // 801B1358
  if (true) { c->lr=0x801B1360u; dispatch(c,c->ctr); } // 801B135C
  c->r[12]=R32(c->r[30]+0x000005F8u); // 801B1360
  c->r[3]=c->r[30]+0x000005C0u; // 801B1364
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B1368
  c->ctr=c->r[12]; // 801B136C
  if (true) { c->lr=0x801B1374u; dispatch(c,c->ctr); } // 801B1370
  {uint32_t ea=c->r[2]+0xFFFFC64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1374
  c->r[4]=c->r[31]+0x0000000Au; // 801B1378
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 801B137C
  c->f[2]=c->f[1]; // 801B1380
  c->lr=0x801B1388u; f_802E3098(c); // 801B1384
  {uint32_t ea=c->r[2]+0xFFFFC638u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1388
  c->r[0]=0u+0x00000001u; // 801B138C
  W8(c->r[30]+0x000005FCu,c->r[0]); // 801B1390
  {uint32_t ea=c->r[30]+0x00000600u; WF32(ea,c->f[0]);} // 801B1394
  W8(c->r[30]+0x000005FDu,c->r[0]); // 801B1398
  W8(c->r[30]+0x000005FEu,c->r[0]); // 801B139C
L_801B13A0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B13A0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B13A4
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B13A8
  c->lr=c->r[0]; // 801B13AC
  c->r[1]=c->r[1]+0x00000050u; // 801B13B0
  return; // 801B13B4
}

// fn_801B13B8
void f_801B13B8(Ctx* __restrict c) {
  trace_call(0x801B13B8u);
  return; // 801B13B8
}

// fn_801B13BC
void f_801B13BC(Ctx* __restrict c) {
  trace_call(0x801B13BCu);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 801B13BC
  f_801B0F38(c); return; // 801B13C0
}

// fn_801B13C4
void f_801B13C4(Ctx* __restrict c) {
  trace_call(0x801B13C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B13C4
  c->r[0]=c->lr; // 801B13C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B13CC
  c->r[11]=c->r[1]+0x00000050u; // 801B13D0
  c->lr=0x801B13D8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B13D4
  c->r[25]=c->r[3]|c->r[3]; // 801B13D8
  c->r[30]=0u+0x80690000u; // 801B13DC
  c->r[31]=c->r[25]|c->r[25]; // 801B13E0
  c->r[29]=c->r[25]|c->r[25]; // 801B13E4
  c->r[26]=c->r[25]|c->r[25]; // 801B13E8
  c->r[28]=c->r[25]|c->r[25]; // 801B13EC
  c->r[30]=c->r[30]+0x000038A8u; // 801B13F0
  c->lr=0x801B13F8u; f_801B2134(c); // 801B13F4
  c->r[4]=0u+0x806D0000u; // 801B13F8
  c->r[27]=addc(c,c->r[25],0x00000020u,0); cr0(c,c->r[27]); // 801B13FC
  c->r[0]=0u+0x00000000u; // 801B1400
  W32(c->r[25]+0x00000000u,c->r[3]); // 801B1404
  c->r[4]=c->r[4]+0x000038C0u; // 801B1408
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 801B140C
  W32(c->r[25]+0x00000004u,c->r[0]); // 801B1410
  W32(c->r[25]+0x00000008u,c->r[0]); // 801B1414
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 801B1418
  W8(c->r[25]+0x00000010u,c->r[0]); // 801B141C
  W32(c->r[25]+0x00000014u,c->r[0]); // 801B1420
  W32(c->r[25]+0x00000018u,c->r[0]); // 801B1424
  W32(c->r[25]+0x00000020u,c->r[0]); // 801B1428
  W32(c->r[25]+0x00000024u,c->r[0]); // 801B142C
  if (crb(c,2)) { goto L_801B1438; } // 801B1430
  c->r[27]=c->r[27]+0xFFFFFFE0u; // 801B1434
L_801B1438:;
  c->lr=0x801B143Cu; f_800797AC(c); // 801B1438
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B143C
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 801B1440
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B1444
  if (!crb(c,2)) { goto L_801B1454; } // 801B1448
  c->r[0]=0u+0x00000001u; // 801B144C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B1450
L_801B1454:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 801B1454
  c->r[5]=0u+0x0000012Cu; // 801B1458
  c->r[4]=c->r[7]+0x00000001u; // 801B145C
  c->r[0]=divwu(c->r[4],c->r[5]); // 801B1460
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801B1464
  c->r[6]=c->r[4]-c->r[0]; // 801B1468
  goto L_801B14B8; // 801B146C
L_801B1470:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801B1470
  c->r[4]=c->r[3]+c->r[0]; // 801B1474
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B1478
  cmps(c,0,(int32_t)c->r[0],0); // 801B147C
  if (!crb(c,2)) { goto L_801B14A8; } // 801B1480
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B1484
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B1488
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B148C
  W32(c->r[4]+0x0000000Cu,c->r[27]); // 801B1490
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B1494
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B1498
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B149C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B14A0
  goto L_801B14D4; // 801B14A4
L_801B14A8:;
  c->r[4]=c->r[6]+0x00000001u; // 801B14A8
  c->r[0]=divwu(c->r[4],c->r[5]); // 801B14AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801B14B0
  c->r[6]=c->r[4]-c->r[0]; // 801B14B4
L_801B14B8:;
  cmpu(c,0,c->r[6],c->r[7]); // 801B14B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1470; } // 801B14BC
  c->r[0]=0u+0x00000000u; // 801B14C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B14C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B14C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B14CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B14D0
L_801B14D4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 801B14D4
  c->r[23]=c->r[25]+0x00000028u; // 801B14D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B14DC
  c->r[3]=c->r[23]|c->r[23]; // 801B14E0
  W32(c->r[1]+0x00000018u,c->r[4]); // 801B14E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B14E8
  W32(c->r[25]+0x00000020u,c->r[4]); // 801B14EC
  W32(c->r[25]+0x00000024u,c->r[0]); // 801B14F0
  c->lr=0x801B14F8u; f_800506C0(c); // 801B14F4
  cmps(c,0,(int32_t)c->r[23],0); // 801B14F8
  c->r[3]=c->r[23]|c->r[23]; // 801B14FC
  if (crb(c,2)) { goto L_801B1508; } // 801B1500
  c->r[3]=c->r[23]+0xFFFFFFD8u; // 801B1504
L_801B1508:;
  c->r[27]=0u+0x00000001u; // 801B1508
  W32(c->r[23]+0x00000008u,c->r[3]); // 801B150C
  W8(c->r[23]+0x0000000Cu,c->r[27]); // 801B1510
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 801B1514
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1518
  if (!crb(c,2)) { goto L_801B155C; } // 801B151C
  c->r[24]=0u+0x80740000u; // 801B1520
  c->r[3]=c->r[24]+0x000074BCu; // 801B1524
  c->lr=0x801B152Cu; f_800506C0(c); // 801B1528
  c->r[6]=0u+0x806D0000u; // 801B152C
  c->r[4]=0u+0x80060000u; // 801B1530
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 801B1534
  c->r[3]=c->r[24]+0x000074BCu; // 801B1538
  c->r[0]=c->r[6]+0x00000008u; // 801B153C
  c->r[5]=0u+0x80750000u; // 801B1540
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B1544
  c->r[4]=c->r[4]+0x000057D4u; // 801B1548
  c->r[5]=c->r[5]+0x00004F68u; // 801B154C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B1550
  c->lr=0x801B1558u; f_803A92B8(c); // 801B1554
  W8(c->r[13]+0xFFFFBE09u,c->r[27]); // 801B1558
L_801B155C:;
  c->r[3]=0u+0x80740000u; // 801B155C
  c->r[5]=c->r[23]|c->r[23]; // 801B1560
  c->r[3]=c->r[3]+0x000074BCu; // 801B1564
  c->r[4]=c->r[3]|c->r[3]; // 801B1568
  c->lr=0x801B1570u; f_802DDCA8(c); // 801B156C
  c->r[24]=c->r[25]+0x00000038u; // 801B1570
  c->r[3]=c->r[24]|c->r[24]; // 801B1574
  c->lr=0x801B157Cu; f_800506C0(c); // 801B1578
  cmps(c,0,(int32_t)c->r[24],0); // 801B157C
  c->r[0]=c->r[24]|c->r[24]; // 801B1580
  if (crb(c,2)) { goto L_801B158C; } // 801B1584
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 801B1588
L_801B158C:;
  c->r[27]=c->r[25]+0x00000044u; // 801B158C
  W32(c->r[24]+0x00000008u,c->r[0]); // 801B1590
  c->r[3]=c->r[27]|c->r[27]; // 801B1594
  c->lr=0x801B159Cu; f_800506C0(c); // 801B1598
  cmps(c,0,(int32_t)c->r[27],0); // 801B159C
  c->r[0]=c->r[27]|c->r[27]; // 801B15A0
  if (crb(c,2)) { goto L_801B15AC; } // 801B15A4
  c->r[0]=c->r[27]+0xFFFFFFBCu; // 801B15A8
L_801B15AC:;
  c->r[3]=0u+0x806F0000u; // 801B15AC
  c->r[24]=0u+0x00000000u; // 801B15B0
  c->r[3]=c->r[3]+0x00000E80u; // 801B15B4
  W32(c->r[27]+0x00000008u,c->r[0]); // 801B15B8
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 801B15BC
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 801B15C0
  W32(c->r[25]+0x00000058u,c->r[24]); // 801B15C4
  W32(c->r[25]+0x00000064u,c->r[24]); // 801B15C8
  c->lr=0x801B15D0u; f_8007BDCC(c); // 801B15CC
  c->r[0]=c->r[13]+0xFFFF8114u; // 801B15D0
  W32(c->r[25]+0x0000009Cu,c->r[3]); // 801B15D4
  W32(c->r[25]+0x000000A0u,c->r[0]); // 801B15D8
  W32(c->r[25]+0x000000A4u,c->r[24]); // 801B15DC
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 801B15E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B15E4
  if (!crb(c,2)) { goto L_801B1608; } // 801B15E8
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B15EC
  c->r[0]=0u+0x00000001u; // 801B15F0
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B15F4
  c->r[3]=c->r[4]+0x00000001u; // 801B15F8
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B15FC
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 801B1600
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 801B1604
L_801B1608:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 801B1608
  c->r[3]=c->r[13]+0xFFFF8110u; // 801B160C
  c->r[0]=0u+0x00000000u; // 801B1610
  W32(c->r[25]+0x000000A8u,c->r[4]); // 801B1614
  W32(c->r[25]+0x000000ACu,c->r[3]); // 801B1618
  W32(c->r[25]+0x000000B0u,c->r[0]); // 801B161C
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 801B1620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1624
  if (!crb(c,2)) { goto L_801B1648; } // 801B1628
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B162C
  c->r[0]=0u+0x00000001u; // 801B1630
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B1634
  c->r[3]=c->r[4]+0x00000001u; // 801B1638
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B163C
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 801B1640
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 801B1644
L_801B1648:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 801B1648
  c->r[3]=c->r[13]+0xFFFF810Cu; // 801B164C
  c->r[0]=0u+0x00000000u; // 801B1650
  W32(c->r[25]+0x000000B4u,c->r[4]); // 801B1654
  W32(c->r[25]+0x000000B8u,c->r[3]); // 801B1658
  W32(c->r[25]+0x000000BCu,c->r[0]); // 801B165C
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 801B1660
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1664
  if (!crb(c,2)) { goto L_801B1688; } // 801B1668
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B166C
  c->r[0]=0u+0x00000001u; // 801B1670
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B1674
  c->r[3]=c->r[4]+0x00000001u; // 801B1678
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B167C
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 801B1680
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 801B1684
L_801B1688:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 801B1688
  c->r[3]=c->r[13]+0xFFFF8108u; // 801B168C
  c->r[0]=0u+0x00000000u; // 801B1690
  W32(c->r[25]+0x000000C0u,c->r[4]); // 801B1694
  W32(c->r[25]+0x000000C4u,c->r[3]); // 801B1698
  W32(c->r[25]+0x000000C8u,c->r[0]); // 801B169C
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 801B16A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B16A4
  if (!crb(c,2)) { goto L_801B16C8; } // 801B16A8
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801B16AC
  c->r[0]=0u+0x00000001u; // 801B16B0
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801B16B4
  c->r[3]=c->r[4]+0x00000001u; // 801B16B8
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801B16BC
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 801B16C0
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 801B16C4
L_801B16C8:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 801B16C8
  c->r[0]=c->r[13]+0xFFFF8104u; // 801B16CC
  c->r[24]=0u+0x00000000u; // 801B16D0
  W32(c->r[25]+0x000000CCu,c->r[3]); // 801B16D4
  c->r[3]=c->r[25]+0x000000D8u; // 801B16D8
  W32(c->r[25]+0x000000D0u,c->r[0]); // 801B16DC
  W32(c->r[25]+0x000000D4u,c->r[24]); // 801B16E0
  c->lr=0x801B16E8u; f_800506C0(c); // 801B16E4
  c->r[4]=0u+0x806F0000u; // 801B16E8
  c->r[3]=0u+0x00000006u; // 801B16EC
  c->r[4]=c->r[4]+0x000007A0u; // 801B16F0
  c->r[27]=c->r[25]+0x000000FCu; // 801B16F4
  c->r[0]=c->r[4]+0x00000024u; // 801B16F8
  W32(c->r[25]+0x000000E8u,c->r[3]); // 801B16FC
  c->r[3]=c->r[27]+0x0000000Cu; // 801B1700
  W32(c->r[25]+0x000000ECu,c->r[24]); // 801B1704
  W32(c->r[25]+0x000000F8u,c->r[24]); // 801B1708
  W32(c->r[25]+0x000000FCu,c->r[4]); // 801B170C
  W32(c->r[25]+0x00000100u,c->r[0]); // 801B1710
  c->lr=0x801B1718u; f_800506C0(c); // 801B1714
  c->r[3]=c->r[27]+0x00000018u; // 801B1718
  c->lr=0x801B1720u; f_800506C0(c); // 801B171C
  W32(c->r[27]+0x00000024u,c->r[24]); // 801B1720
  c->r[3]=c->r[27]+0x000000B0u; // 801B1724
  c->lr=0x801B172Cu; f_800506C0(c); // 801B1728
  c->r[12]=R32(c->r[27]+0x00000000u); // 801B172C
  c->r[3]=c->r[27]|c->r[27]; // 801B1730
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B1734
  c->ctr=c->r[12]; // 801B1738
  if (true) { c->lr=0x801B1740u; dispatch(c,c->ctr); } // 801B173C
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 801B1740
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1744
  if (!crb(c,2)) { goto L_801B1764; } // 801B1748
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 801B174C
  c->r[0]=0u+0x00000001u; // 801B1750
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 801B1754
  c->r[3]=c->r[3]+0x00000001u; // 801B1758
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 801B175C
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 801B1760
L_801B1764:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 801B1764
  c->r[5]=0u+0x806F0000u; // 801B1768
  c->r[5]=c->r[5]+0x000007F8u; // 801B176C
  c->r[0]=0u+0x00000032u; // 801B1770
  c->r[4]=c->r[5]+0x00000024u; // 801B1774
  W32(c->r[27]+0x00000008u,c->r[3]); // 801B1778
  c->r[6]=0u+0x00000000u; // 801B177C
  c->r[3]=0u+0x00000000u; // 801B1780
  W32(c->r[27]+0x00000000u,c->r[5]); // 801B1784
  W32(c->r[27]+0x00000004u,c->r[4]); // 801B1788
  c->ctr=c->r[0]; // 801B178C
L_801B1790:;
  c->r[4]=c->r[27]+c->r[3]; // 801B1790
  c->r[3]=c->r[3]+0x00000004u; // 801B1794
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 801B1798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1790; } // 801B179C
  c->r[3]=0u+0x806D0000u; // 801B17A0
  c->r[7]=0u+0x00000000u; // 801B17A4
  c->r[3]=c->r[3]+0x00003868u; // 801B17A8
  c->r[0]=0u+0x0000000Au; // 801B17AC
  c->r[4]=c->r[3]+0x00000024u; // 801B17B0
  W32(c->r[27]+0x00000000u,c->r[3]); // 801B17B4
  c->r[8]=0u+0x00000000u; // 801B17B8
  c->r[3]=0u+0x00000000u; // 801B17BC
  W32(c->r[27]+0x00000004u,c->r[4]); // 801B17C0
  c->r[6]=0u+0xFFFFFFFFu; // 801B17C4
  W32(c->r[25]+0x00000314u,c->r[7]); // 801B17C8
  W8(c->r[25]+0x0000005Cu,c->r[7]); // 801B17CC
  W32(c->r[25]+0x00000054u,c->r[7]); // 801B17D0
  W32(c->r[25]+0x00000310u,c->r[25]); // 801B17D4
  c->ctr=c->r[0]; // 801B17D8
L_801B17DC:;
  c->r[5]=c->r[25]+c->r[3]; // 801B17DC
  c->r[4]=c->r[25]+c->r[8]; // 801B17E0
  W32(c->r[5]+0x00000068u,c->r[6]); // 801B17E4
  c->r[8]=c->r[8]+0x00000001u; // 801B17E8
  c->r[3]=c->r[3]+0x00000004u; // 801B17EC
  W8(c->r[4]+0x00000090u,c->r[7]); // 801B17F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B17DC; } // 801B17F4
  c->r[23]=c->r[25]+0x00000318u; // 801B17F8
  c->r[3]=c->r[23]|c->r[23]; // 801B17FC
  c->lr=0x801B1804u; f_800506C0(c); // 801B1800
  cmps(c,0,(int32_t)c->r[23],0); // 801B1804
  c->r[3]=c->r[23]|c->r[23]; // 801B1808
  if (crb(c,2)) { goto L_801B1814; } // 801B180C
  c->r[3]=c->r[23]+0xFFFFFCE8u; // 801B1810
L_801B1814:;
  c->r[28]=0u+0x00000001u; // 801B1814
  W32(c->r[23]+0x00000008u,c->r[3]); // 801B1818
  W8(c->r[23]+0x0000000Cu,c->r[28]); // 801B181C
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 801B1820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1824
  if (!crb(c,2)) { goto L_801B1868; } // 801B1828
  c->r[27]=0u+0x80750000u; // 801B182C
  c->r[3]=c->r[27]+0xFFFF816Cu; // 801B1830
  c->lr=0x801B1838u; f_800506C0(c); // 801B1834
  c->r[6]=0u+0x806D0000u; // 801B1838
  c->r[4]=0u+0x80080000u; // 801B183C
  c->r[6]=c->r[6]+0x000038D8u; // 801B1840
  c->r[3]=c->r[27]+0xFFFF816Cu; // 801B1844
  c->r[0]=c->r[6]+0x00000008u; // 801B1848
  c->r[5]=0u+0x80750000u; // 801B184C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B1850
  c->r[4]=c->r[4]+0xFFFF9844u; // 801B1854
  c->r[5]=c->r[5]+0x00004F5Cu; // 801B1858
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B185C
  c->lr=0x801B1864u; f_803A92B8(c); // 801B1860
  W8(c->r[13]+0xFFFFBE9Eu,c->r[28]); // 801B1864
L_801B1868:;
  c->r[3]=0u+0x80750000u; // 801B1868
  c->r[5]=c->r[23]|c->r[23]; // 801B186C
  c->r[3]=c->r[3]+0xFFFF816Cu; // 801B1870
  c->r[4]=c->r[3]|c->r[3]; // 801B1874
  c->lr=0x801B187Cu; f_802DDCA8(c); // 801B1878
  c->r[3]=0u+0x806D0000u; // 801B187C
  c->r[0]=0u+0x00000000u; // 801B1880
  c->r[3]=c->r[3]+0xFFFFD974u; // 801B1884
  c->r[5]=0u+0xFFFFFFFFu; // 801B1888
  c->r[4]=0u+0x00000001u; // 801B188C
  c->r[24]=c->r[25]+0x0000032Cu; // 801B1890
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 801B1894
  c->r[3]=c->r[24]|c->r[24]; // 801B1898
  W32(c->r[25]+0x00000328u,c->r[5]); // 801B189C
  W32(c->r[25]+0x000000ECu,c->r[4]); // 801B18A0
  W32(c->r[25]+0x00000054u,c->r[0]); // 801B18A4
  W32(c->r[25]+0x00000314u,c->r[0]); // 801B18A8
  c->lr=0x801B18B0u; f_800506C0(c); // 801B18AC
  cmps(c,0,(int32_t)c->r[24],0); // 801B18B0
  c->r[3]=c->r[24]|c->r[24]; // 801B18B4
  if (crb(c,2)) { goto L_801B18C0; } // 801B18B8
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 801B18BC
L_801B18C0:;
  c->r[27]=0u+0x00000001u; // 801B18C0
  W32(c->r[24]+0x00000008u,c->r[3]); // 801B18C4
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 801B18C8
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801B18CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B18D0
  if (!crb(c,2)) { goto L_801B1914; } // 801B18D4
  c->r[26]=0u+0x80730000u; // 801B18D8
  c->r[3]=c->r[26]+0x000073A8u; // 801B18DC
  c->lr=0x801B18E4u; f_800506C0(c); // 801B18E0
  c->r[6]=0u+0x806D0000u; // 801B18E4
  c->r[4]=0u+0x80050000u; // 801B18E8
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801B18EC
  c->r[3]=c->r[26]+0x000073A8u; // 801B18F0
  c->r[0]=c->r[6]+0x00000008u; // 801B18F4
  c->r[5]=0u+0x80750000u; // 801B18F8
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B18FC
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 801B1900
  c->r[5]=c->r[5]+0x00004F50u; // 801B1904
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B1908
  c->lr=0x801B1910u; f_803A92B8(c); // 801B190C
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 801B1910
L_801B1914:;
  c->r[3]=0u+0x80730000u; // 801B1914
  c->r[5]=c->r[24]|c->r[24]; // 801B1918
  c->r[3]=c->r[3]+0x000073A8u; // 801B191C
  c->r[4]=c->r[3]|c->r[3]; // 801B1920
  c->lr=0x801B1928u; f_802DDCA8(c); // 801B1924
  c->r[24]=c->r[25]+0x0000033Cu; // 801B1928
  c->r[3]=c->r[24]|c->r[24]; // 801B192C
  c->lr=0x801B1934u; f_800506C0(c); // 801B1930
  cmps(c,0,(int32_t)c->r[24],0); // 801B1934
  c->r[3]=c->r[24]|c->r[24]; // 801B1938
  if (crb(c,2)) { goto L_801B1944; } // 801B193C
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 801B1940
L_801B1944:;
  c->r[27]=0u+0x00000001u; // 801B1944
  W32(c->r[24]+0x00000008u,c->r[3]); // 801B1948
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 801B194C
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 801B1950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1954
  if (!crb(c,2)) { goto L_801B1998; } // 801B1958
  c->r[26]=0u+0x80750000u; // 801B195C
  c->r[3]=c->r[26]+0xFFFF8158u; // 801B1960
  c->lr=0x801B1968u; f_800506C0(c); // 801B1964
  c->r[6]=0u+0x806D0000u; // 801B1968
  c->r[4]=0u+0x80080000u; // 801B196C
  c->r[6]=c->r[6]+0x000038F0u; // 801B1970
  c->r[3]=c->r[26]+0xFFFF8158u; // 801B1974
  c->r[0]=c->r[6]+0x00000008u; // 801B1978
  c->r[5]=0u+0x80750000u; // 801B197C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B1980
  c->r[4]=c->r[4]+0xFFFF98C0u; // 801B1984
  c->r[5]=c->r[5]+0x00004F44u; // 801B1988
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B198C
  c->lr=0x801B1994u; f_803A92B8(c); // 801B1990
  W8(c->r[13]+0xFFFFBE9Du,c->r[27]); // 801B1994
L_801B1998:;
  c->r[3]=0u+0x80750000u; // 801B1998
  c->r[5]=c->r[24]|c->r[24]; // 801B199C
  c->r[3]=c->r[3]+0xFFFF8158u; // 801B19A0
  c->r[4]=c->r[3]|c->r[3]; // 801B19A4
  c->lr=0x801B19ACu; f_802DDCA8(c); // 801B19A8
  c->r[3]=0u+0x806D0000u; // 801B19AC
  W32(c->r[25]+0x00000054u,c->r[30]); // 801B19B0
  c->r[3]=c->r[3]+0x00004AE8u; // 801B19B4
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 801B19B8
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 801B19BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B19C0
  if (!crb(c,2)) { goto L_801B19E0; } // 801B19C4
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 801B19C8
  c->r[0]=0u+0x00000001u; // 801B19CC
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 801B19D0
  c->r[3]=c->r[3]+0x00000001u; // 801B19D4
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 801B19D8
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 801B19DC
L_801B19E0:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 801B19E0
  W32(c->r[25]+0x00000328u,c->r[0]); // 801B19E4
  c->r[0]=R8(c->r[13]+0xFFFFD03Cu); // 801B19E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B19EC
  if (!crb(c,2)) { goto L_801B1A0C; } // 801B19F0
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 801B19F4
  c->r[0]=0u+0x00000001u; // 801B19F8
  W32(c->r[13]+0xFFFFD038u,c->r[3]); // 801B19FC
  c->r[3]=c->r[3]+0x00000001u; // 801B1A00
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 801B1A04
  W8(c->r[13]+0xFFFFD03Cu,c->r[0]); // 801B1A08
L_801B1A0C:;
  c->r[0]=R32(c->r[13]+0xFFFFD038u); // 801B1A0C
  W32(c->r[25]+0x0000034Cu,c->r[0]); // 801B1A10
  c->r[0]=R8(c->r[13]+0xFFFFCD04u); // 801B1A14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1A18
  if (!crb(c,2)) { goto L_801B1A38; } // 801B1A1C
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 801B1A20
  c->r[0]=0u+0x00000001u; // 801B1A24
  W32(c->r[13]+0xFFFFCD00u,c->r[3]); // 801B1A28
  c->r[3]=c->r[3]+0x00000001u; // 801B1A2C
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 801B1A30
  W8(c->r[13]+0xFFFFCD04u,c->r[0]); // 801B1A34
L_801B1A38:;
  c->r[0]=R32(c->r[13]+0xFFFFCD00u); // 801B1A38
  c->r[5]=0u+0x806D0000u; // 801B1A3C
  c->r[5]=c->r[5]+0xFFFFE468u; // 801B1A40
  W32(c->r[25]+0x00000350u,c->r[0]); // 801B1A44
  c->r[3]=c->r[25]+0x000003B0u; // 801B1A48
  c->r[4]=0u+0x00000000u; // 801B1A4C
  W32(c->r[25]+0x00000400u,c->r[5]); // 801B1A50
  c->r[5]=0u+0x00000050u; // 801B1A54
  c->lr=0x801B1A5Cu; f_800043EC(c); // 801B1A58
  c->r[4]=0u+0x806D0000u; // 801B1A5C
  c->r[3]=c->r[25]+0x00000450u; // 801B1A60
  c->r[4]=c->r[4]+0xFFFFE170u; // 801B1A64
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 801B1A68
  c->r[0]=c->r[4]+0x00000044u; // 801B1A6C
  W32(c->r[25]+0x00000400u,c->r[0]); // 801B1A70
  c->lr=0x801B1A78u; f_8007BDFC(c); // 801B1A74
  c->r[3]=c->r[25]+0x000004C4u; // 801B1A78
  c->lr=0x801B1A80u; f_8007BDFC(c); // 801B1A7C
  c->r[3]=c->r[25]+0x00000538u; // 801B1A80
  c->r[4]=0u+0x00000000u; // 801B1A84
  c->r[5]=0u+0x00000008u; // 801B1A88
  c->lr=0x801B1A90u; f_800043EC(c); // 801B1A8C
  c->r[23]=R32(c->r[13]+0xFFFFDBDCu); // 801B1A90
  cmps(c,0,(int32_t)c->r[23],0); // 801B1A94
  if (crb(c,2)) { goto L_801B1ADC; } // 801B1A98
  c->lr=0x801B1AA0u; f_801B2134(c); // 801B1A9C
  c->r[26]=c->r[3]|c->r[3]; // 801B1AA0
  c->lr=0x801B1AA8u; f_8007BDCC(c); // 801B1AA4
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 801B1AA8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1AAC
  c->r[5]=0u+0x801B0000u; // 801B1AB0
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B1AB4
  c->r[4]=c->r[23]+c->r[4]; // 801B1AB8
  c->r[5]=c->r[5]+0x000021C8u; // 801B1ABC
  c->r[4]=c->r[4]+c->r[0]; // 801B1AC0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1AC4
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B1AC8
  cmpu(c,0,c->r[0],0x0000000Cu); // 801B1ACC
  if (!crb(c,0)) { goto L_801B1ADC; } // 801B1AD0
  c->r[0]=0u+0x0000000Cu; // 801B1AD4
  W32(c->r[23]+c->r[3],c->r[0]); // 801B1AD8
L_801B1ADC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1ADC
  cmps(c,0,(int32_t)c->r[26],0); // 801B1AE0
  if (crb(c,2)) { goto L_801B1B4C; } // 801B1AE4
  c->lr=0x801B1AECu; f_801B2134(c); // 801B1AE8
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 801B1AEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1AF0
  if (!crb(c,2)) { goto L_801B1B14; } // 801B1AF4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1AF8
  c->r[0]=0u+0x00000001u; // 801B1AFC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1B00
  c->r[4]=c->r[5]+0x00000001u; // 801B1B04
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1B08
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 801B1B0C
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 801B1B10
L_801B1B14:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1B14
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 801B1B18
  c->r[5]=0u+0x801B0000u; // 801B1B1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1B20
  c->r[4]=c->r[26]+c->r[4]; // 801B1B24
  c->r[5]=c->r[5]+0x000021C4u; // 801B1B28
  c->r[4]=c->r[4]+c->r[0]; // 801B1B2C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1B30
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1B34
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1B38
  cmpu(c,0,c->r[0],0x00000018u); // 801B1B3C
  if (!crb(c,0)) { goto L_801B1B4C; } // 801B1B40
  c->r[0]=0u+0x00000018u; // 801B1B44
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1B48
L_801B1B4C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1B4C
  cmps(c,0,(int32_t)c->r[26],0); // 801B1B50
  if (crb(c,2)) { goto L_801B1BBC; } // 801B1B54
  c->lr=0x801B1B5Cu; f_801B2134(c); // 801B1B58
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 801B1B5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1B60
  if (!crb(c,2)) { goto L_801B1B84; } // 801B1B64
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1B68
  c->r[0]=0u+0x00000001u; // 801B1B6C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1B70
  c->r[4]=c->r[5]+0x00000001u; // 801B1B74
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1B78
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 801B1B7C
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 801B1B80
L_801B1B84:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1B84
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 801B1B88
  c->r[5]=0u+0x801B0000u; // 801B1B8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1B90
  c->r[4]=c->r[26]+c->r[4]; // 801B1B94
  c->r[5]=c->r[5]+0x000021C0u; // 801B1B98
  c->r[4]=c->r[4]+c->r[0]; // 801B1B9C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1BA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1BA4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1BA8
  cmpu(c,0,c->r[0],0x0000006Cu); // 801B1BAC
  if (!crb(c,0)) { goto L_801B1BBC; } // 801B1BB0
  c->r[0]=0u+0x0000006Cu; // 801B1BB4
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1BB8
L_801B1BBC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1BBC
  cmps(c,0,(int32_t)c->r[26],0); // 801B1BC0
  if (crb(c,2)) { goto L_801B1C2C; } // 801B1BC4
  c->lr=0x801B1BCCu; f_801B2134(c); // 801B1BC8
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 801B1BCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1BD0
  if (!crb(c,2)) { goto L_801B1BF4; } // 801B1BD4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1BD8
  c->r[0]=0u+0x00000001u; // 801B1BDC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1BE0
  c->r[4]=c->r[5]+0x00000001u; // 801B1BE4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1BE8
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 801B1BEC
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 801B1BF0
L_801B1BF4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1BF4
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 801B1BF8
  c->r[5]=0u+0x801B0000u; // 801B1BFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1C00
  c->r[4]=c->r[26]+c->r[4]; // 801B1C04
  c->r[5]=c->r[5]+0x000021BCu; // 801B1C08
  c->r[4]=c->r[4]+c->r[0]; // 801B1C0C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1C10
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1C14
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1C18
  cmpu(c,0,c->r[0],0x0000002Cu); // 801B1C1C
  if (!crb(c,0)) { goto L_801B1C2C; } // 801B1C20
  c->r[0]=0u+0x0000002Cu; // 801B1C24
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1C28
L_801B1C2C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1C2C
  cmps(c,0,(int32_t)c->r[26],0); // 801B1C30
  if (crb(c,2)) { goto L_801B1C9C; } // 801B1C34
  c->lr=0x801B1C3Cu; f_801B2134(c); // 801B1C38
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801B1C3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1C40
  if (!crb(c,2)) { goto L_801B1C64; } // 801B1C44
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1C48
  c->r[0]=0u+0x00000001u; // 801B1C4C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1C50
  c->r[4]=c->r[5]+0x00000001u; // 801B1C54
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1C58
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801B1C5C
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801B1C60
L_801B1C64:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1C64
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801B1C68
  c->r[5]=0u+0x801B0000u; // 801B1C6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1C70
  c->r[4]=c->r[26]+c->r[4]; // 801B1C74
  c->r[5]=c->r[5]+0x000021B8u; // 801B1C78
  c->r[4]=c->r[4]+c->r[0]; // 801B1C7C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1C80
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1C84
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1C88
  cmpu(c,0,c->r[0],0x00000010u); // 801B1C8C
  if (!crb(c,0)) { goto L_801B1C9C; } // 801B1C90
  c->r[0]=0u+0x00000010u; // 801B1C94
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1C98
L_801B1C9C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1C9C
  cmps(c,0,(int32_t)c->r[26],0); // 801B1CA0
  if (crb(c,2)) { goto L_801B1D0C; } // 801B1CA4
  c->lr=0x801B1CACu; f_801B2134(c); // 801B1CA8
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 801B1CAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1CB0
  if (!crb(c,2)) { goto L_801B1CD4; } // 801B1CB4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1CB8
  c->r[0]=0u+0x00000001u; // 801B1CBC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1CC0
  c->r[4]=c->r[5]+0x00000001u; // 801B1CC4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1CC8
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 801B1CCC
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 801B1CD0
L_801B1CD4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1CD4
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 801B1CD8
  c->r[5]=0u+0x801B0000u; // 801B1CDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1CE0
  c->r[4]=c->r[26]+c->r[4]; // 801B1CE4
  c->r[5]=c->r[5]+0x000021B4u; // 801B1CE8
  c->r[4]=c->r[4]+c->r[0]; // 801B1CEC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1CF0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1CF4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1CF8
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B1CFC
  if (!crb(c,0)) { goto L_801B1D0C; } // 801B1D00
  c->r[0]=0u+0x0000005Cu; // 801B1D04
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1D08
L_801B1D0C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1D0C
  cmps(c,0,(int32_t)c->r[26],0); // 801B1D10
  if (crb(c,2)) { goto L_801B1D7C; } // 801B1D14
  c->lr=0x801B1D1Cu; f_801B2134(c); // 801B1D18
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 801B1D1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1D20
  if (!crb(c,2)) { goto L_801B1D44; } // 801B1D24
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1D28
  c->r[0]=0u+0x00000001u; // 801B1D2C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1D30
  c->r[4]=c->r[5]+0x00000001u; // 801B1D34
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1D38
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801B1D3C
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801B1D40
L_801B1D44:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1D44
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801B1D48
  c->r[5]=0u+0x801B0000u; // 801B1D4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1D50
  c->r[4]=c->r[26]+c->r[4]; // 801B1D54
  c->r[5]=c->r[5]+0x000021B0u; // 801B1D58
  c->r[4]=c->r[4]+c->r[0]; // 801B1D5C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1D60
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1D64
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1D68
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B1D6C
  if (!crb(c,0)) { goto L_801B1D7C; } // 801B1D70
  c->r[0]=0u+0x0000005Cu; // 801B1D74
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1D78
L_801B1D7C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1D7C
  cmps(c,0,(int32_t)c->r[26],0); // 801B1D80
  if (crb(c,2)) { goto L_801B1DEC; } // 801B1D84
  c->lr=0x801B1D8Cu; f_801B2134(c); // 801B1D88
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801B1D8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1D90
  if (!crb(c,2)) { goto L_801B1DB4; } // 801B1D94
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1D98
  c->r[0]=0u+0x00000001u; // 801B1D9C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1DA0
  c->r[4]=c->r[5]+0x00000001u; // 801B1DA4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1DA8
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 801B1DAC
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 801B1DB0
L_801B1DB4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1DB4
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 801B1DB8
  c->r[5]=0u+0x801B0000u; // 801B1DBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1DC0
  c->r[4]=c->r[26]+c->r[4]; // 801B1DC4
  c->r[5]=c->r[5]+0x000021ACu; // 801B1DC8
  c->r[4]=c->r[4]+c->r[0]; // 801B1DCC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1DD0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1DD4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1DD8
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B1DDC
  if (!crb(c,0)) { goto L_801B1DEC; } // 801B1DE0
  c->r[0]=0u+0x0000005Cu; // 801B1DE4
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1DE8
L_801B1DEC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801B1DEC
  cmps(c,0,(int32_t)c->r[26],0); // 801B1DF0
  if (crb(c,2)) { goto L_801B1E5C; } // 801B1DF4
  c->lr=0x801B1DFCu; f_801B2134(c); // 801B1DF8
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 801B1DFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1E00
  if (!crb(c,2)) { goto L_801B1E24; } // 801B1E04
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801B1E08
  c->r[0]=0u+0x00000001u; // 801B1E0C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801B1E10
  c->r[4]=c->r[5]+0x00000001u; // 801B1E14
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801B1E18
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 801B1E1C
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 801B1E20
L_801B1E24:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801B1E24
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 801B1E28
  c->r[5]=0u+0x801B0000u; // 801B1E2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1E30
  c->r[4]=c->r[26]+c->r[4]; // 801B1E34
  c->r[5]=c->r[5]+0x000021A8u; // 801B1E38
  c->r[4]=c->r[4]+c->r[0]; // 801B1E3C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1E40
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1E44
  c->r[0]=R32(c->r[26]+c->r[3]); // 801B1E48
  cmpu(c,0,c->r[0],0x0000005Cu); // 801B1E4C
  if (!crb(c,0)) { goto L_801B1E5C; } // 801B1E50
  c->r[0]=0u+0x0000005Cu; // 801B1E54
  W32(c->r[26]+c->r[3],c->r[0]); // 801B1E58
L_801B1E5C:;
  c->r[3]=c->r[25]|c->r[25]; // 801B1E5C
  c->lr=0x801B1E64u; f_8005BBF0(c); // 801B1E60
  c->r[24]=c->r[25]+0x000005C0u; // 801B1E64
  c->r[3]=c->r[24]|c->r[24]; // 801B1E68
  c->lr=0x801B1E70u; f_800506C0(c); // 801B1E6C
  cmps(c,0,(int32_t)c->r[24],0); // 801B1E70
  c->r[3]=c->r[24]|c->r[24]; // 801B1E74
  if (crb(c,2)) { goto L_801B1E80; } // 801B1E78
  c->r[3]=c->r[24]+0xFFFFFA40u; // 801B1E7C
L_801B1E80:;
  c->r[27]=0u+0x00000001u; // 801B1E80
  W32(c->r[24]+0x00000008u,c->r[3]); // 801B1E84
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 801B1E88
  c->r[0]=R8(c->r[13]+0xFFFFCA3Du); // 801B1E8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1E90
  if (!crb(c,2)) { goto L_801B1ED4; } // 801B1E94
  c->r[26]=0u+0x80750000u; // 801B1E98
  c->r[3]=c->r[26]+0x00004844u; // 801B1E9C
  c->lr=0x801B1EA4u; f_800506C0(c); // 801B1EA0
  c->r[6]=0u+0x806E0000u; // 801B1EA4
  c->r[4]=0u+0x80160000u; // 801B1EA8
  c->r[6]=c->r[6]+0xFFFFE970u; // 801B1EAC
  c->r[3]=c->r[26]+0x00004844u; // 801B1EB0
  c->r[0]=c->r[6]+0x00000008u; // 801B1EB4
  c->r[5]=0u+0x80750000u; // 801B1EB8
  W32(c->r[3]+0x00000010u,c->r[6]); // 801B1EBC
  c->r[4]=c->r[4]+0x00002A4Cu; // 801B1EC0
  c->r[5]=c->r[5]+0x00004F38u; // 801B1EC4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B1EC8
  c->lr=0x801B1ED0u; f_803A92B8(c); // 801B1ECC
  W8(c->r[13]+0xFFFFCA3Du,c->r[27]); // 801B1ED0
L_801B1ED4:;
  c->r[3]=0u+0x80750000u; // 801B1ED4
  c->r[5]=c->r[24]|c->r[24]; // 801B1ED8
  c->r[3]=c->r[3]+0x00004844u; // 801B1EDC
  c->r[4]=c->r[3]|c->r[3]; // 801B1EE0
  c->lr=0x801B1EE8u; f_802DDCA8(c); // 801B1EE4
  c->r[3]=0u+0x806E0000u; // 801B1EE8
  c->r[0]=0u+0x00000000u; // 801B1EEC
  c->r[3]=c->r[3]+0x000028C0u; // 801B1EF0
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 801B1EF4
  c->r[4]=c->r[3]+0x00000044u; // 801B1EF8
  W32(c->r[25]+0x00000400u,c->r[4]); // 801B1EFC
  c->r[3]=c->r[25]+0x0000060Cu; // 801B1F00
  W32(c->r[25]+0x000005D0u,c->r[0]); // 801B1F04
  W32(c->r[25]+0x000005D4u,c->r[0]); // 801B1F08
  c->lr=0x801B1F10u; f_803209E8(c); // 801B1F0C
  c->r[3]=c->r[25]+0x00000648u; // 801B1F10
  c->lr=0x801B1F18u; f_803209E8(c); // 801B1F14
  c->r[3]=c->r[25]+0x00000684u; // 801B1F18
  c->lr=0x801B1F20u; f_803209E8(c); // 801B1F1C
  c->r[3]=c->r[25]+0x000006C0u; // 801B1F20
  c->lr=0x801B1F28u; f_803209E8(c); // 801B1F24
  c->r[3]=c->r[25]+0x000006FCu; // 801B1F28
  c->lr=0x801B1F30u; f_803209E8(c); // 801B1F2C
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801B1F30
  cmps(c,0,(int32_t)c->r[23],0); // 801B1F34
  if (crb(c,2)) { goto L_801B1FA0; } // 801B1F38
  c->lr=0x801B1F40u; f_801B2134(c); // 801B1F3C
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 801B1F40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1F44
  if (!crb(c,2)) { goto L_801B1F68; } // 801B1F48
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 801B1F4C
  c->r[0]=0u+0x00000001u; // 801B1F50
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 801B1F54
  c->r[4]=c->r[5]+0x00000001u; // 801B1F58
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 801B1F5C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 801B1F60
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 801B1F64
L_801B1F68:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 801B1F68
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 801B1F6C
  c->r[5]=0u+0x801B0000u; // 801B1F70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1F74
  c->r[4]=c->r[23]+c->r[4]; // 801B1F78
  c->r[5]=c->r[5]+0x00002170u; // 801B1F7C
  c->r[4]=c->r[4]+c->r[0]; // 801B1F80
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1F84
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1F88
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B1F8C
  cmpu(c,0,c->r[0],0x00000010u); // 801B1F90
  if (!crb(c,0)) { goto L_801B1FA0; } // 801B1F94
  c->r[0]=0u+0x00000010u; // 801B1F98
  W32(c->r[23]+c->r[3],c->r[0]); // 801B1F9C
L_801B1FA0:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801B1FA0
  cmps(c,0,(int32_t)c->r[23],0); // 801B1FA4
  if (crb(c,2)) { goto L_801B1FEC; } // 801B1FA8
  c->lr=0x801B1FB0u; f_801B2134(c); // 801B1FAC
  c->r[26]=c->r[3]|c->r[3]; // 801B1FB0
  c->lr=0x801B1FB8u; f_8005E1B0(c); // 801B1FB4
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 801B1FB8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1FBC
  c->r[5]=0u+0x801B0000u; // 801B1FC0
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B1FC4
  c->r[4]=c->r[23]+c->r[4]; // 801B1FC8
  c->r[5]=c->r[5]+0x0000216Cu; // 801B1FCC
  c->r[4]=c->r[4]+c->r[0]; // 801B1FD0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B1FD4
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B1FD8
  cmpu(c,0,c->r[0],0x00000010u); // 801B1FDC
  if (!crb(c,0)) { goto L_801B1FEC; } // 801B1FE0
  c->r[0]=0u+0x00000010u; // 801B1FE4
  W32(c->r[23]+c->r[3],c->r[0]); // 801B1FE8
L_801B1FEC:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801B1FEC
  cmps(c,0,(int32_t)c->r[23],0); // 801B1FF0
  if (crb(c,2)) { goto L_801B2038; } // 801B1FF4
  c->lr=0x801B1FFCu; f_801B2134(c); // 801B1FF8
  c->r[26]=c->r[3]|c->r[3]; // 801B1FFC
  c->lr=0x801B2004u; f_80062EBC(c); // 801B2000
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 801B2004
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B2008
  c->r[5]=0u+0x801B0000u; // 801B200C
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B2010
  c->r[4]=c->r[23]+c->r[4]; // 801B2014
  c->r[5]=c->r[5]+0x00002168u; // 801B2018
  c->r[4]=c->r[4]+c->r[0]; // 801B201C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B2020
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B2024
  cmpu(c,0,c->r[0],0x00000010u); // 801B2028
  if (!crb(c,0)) { goto L_801B2038; } // 801B202C
  c->r[0]=0u+0x00000010u; // 801B2030
  W32(c->r[23]+c->r[3],c->r[0]); // 801B2034
L_801B2038:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801B2038
  cmps(c,0,(int32_t)c->r[23],0); // 801B203C
  if (crb(c,2)) { goto L_801B2084; } // 801B2040
  c->lr=0x801B2048u; f_801B2134(c); // 801B2044
  c->r[26]=c->r[3]|c->r[3]; // 801B2048
  c->lr=0x801B2050u; f_80062F1C(c); // 801B204C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 801B2050
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B2054
  c->r[5]=0u+0x801B0000u; // 801B2058
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B205C
  c->r[4]=c->r[23]+c->r[4]; // 801B2060
  c->r[5]=c->r[5]+0x00002164u; // 801B2064
  c->r[4]=c->r[4]+c->r[0]; // 801B2068
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B206C
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B2070
  cmpu(c,0,c->r[0],0x00000010u); // 801B2074
  if (!crb(c,0)) { goto L_801B2084; } // 801B2078
  c->r[0]=0u+0x00000010u; // 801B207C
  W32(c->r[23]+c->r[3],c->r[0]); // 801B2080
L_801B2084:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801B2084
  cmps(c,0,(int32_t)c->r[23],0); // 801B2088
  if (crb(c,2)) { goto L_801B20D0; } // 801B208C
  c->lr=0x801B2094u; f_801B2134(c); // 801B2090
  c->r[26]=c->r[3]|c->r[3]; // 801B2094
  c->lr=0x801B209Cu; f_80062DCC(c); // 801B2098
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 801B209C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B20A0
  c->r[5]=0u+0x801B0000u; // 801B20A4
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B20A8
  c->r[4]=c->r[23]+c->r[4]; // 801B20AC
  c->r[5]=c->r[5]+0x00002130u; // 801B20B0
  c->r[4]=c->r[4]+c->r[0]; // 801B20B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801B20B8
  c->r[0]=R32(c->r[23]+c->r[3]); // 801B20BC
  cmpu(c,0,c->r[0],0x00000010u); // 801B20C0
  if (!crb(c,0)) { goto L_801B20D0; } // 801B20C4
  c->r[0]=0u+0x00000010u; // 801B20C8
  W32(c->r[23]+c->r[3],c->r[0]); // 801B20CC
L_801B20D0:;
  {uint32_t ea=c->r[2]+0xFFFFC650u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B20D0
  c->r[3]=0u+0xFFFFFFFFu; // 801B20D4
  {uint32_t ea=c->r[2]+0xFFFFC654u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B20D8
  c->r[5]=0u+0x00000000u; // 801B20DC
  c->r[0]=0u+0x00000004u; // 801B20E0
  c->r[26]=0u+0x80760000u; // 801B20E4
  W32(c->r[25]+0x00000608u,c->r[3]); // 801B20E8
  c->r[3]=c->r[25]+0x00000760u; // 801B20EC
  c->r[4]=c->r[26]+0xFFFF9C78u; // 801B20F0
  W8(c->r[25]+0x00000738u,c->r[5]); // 801B20F4
  {uint32_t ea=c->r[25]+0x0000073Cu; WF32(ea,c->f[1]);} // 801B20F8
  {uint32_t ea=c->r[25]+0x00000740u; WF32(ea,c->f[0]);} // 801B20FC
  W32(c->r[25]+0x00000744u,c->r[0]); // 801B2100
  c->lr=0x801B2108u; f_8005DC84(c); // 801B2104
  c->r[3]=c->r[25]+0x00000754u; // 801B2108
  c->r[4]=c->r[26]+0xFFFF9C78u; // 801B210C
  c->lr=0x801B2114u; f_8005DC84(c); // 801B2110
  c->r[11]=c->r[1]+0x00000050u; // 801B2114
  c->r[3]=c->r[25]|c->r[25]; // 801B2118
  c->lr=0x801B2120u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B211C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B2120
  c->lr=c->r[0]; // 801B2124
  c->r[1]=c->r[1]+0x00000050u; // 801B2128
  return; // 801B212C
}

// fn_801B2130
void f_801B2130(Ctx* __restrict c) {
  trace_call(0x801B2130u);
  f_801B26A0(c); return; // 801B2130
}

// fn_801B2134
void f_801B2134(Ctx* __restrict c) {
  trace_call(0x801B2134u);
  c->r[0]=R8(c->r[13]+0xFFFFD034u); // 801B2134
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2138
  if (!crb(c,2)) { goto L_801B215C; } // 801B213C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801B2140
  c->r[0]=0u+0x00000001u; // 801B2144
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801B2148
  c->r[3]=c->r[4]+0x00000001u; // 801B214C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 801B2150
  W32(c->r[13]+0xFFFFD030u,c->r[4]); // 801B2154
  W8(c->r[13]+0xFFFFD034u,c->r[0]); // 801B2158
L_801B215C:;
  c->r[3]=R32(c->r[13]+0xFFFFD030u); // 801B215C
  return; // 801B2160
}

// fn_801B2164
void f_801B2164(Ctx* __restrict c) {
  trace_call(0x801B2164u);
  f_801B262C(c); return; // 801B2164
}

// fn_801B2168
void f_801B2168(Ctx* __restrict c) {
  trace_call(0x801B2168u);
  f_801B23AC(c); return; // 801B2168
}

// fn_801B216C
void f_801B216C(Ctx* __restrict c) {
  trace_call(0x801B216Cu);
  return; // 801B216C
}

// fn_801B2170
void f_801B2170(Ctx* __restrict c) {
  trace_call(0x801B2170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2170
  c->r[0]=c->lr; // 801B2174
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2178
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B217C
  c->r[31]=c->r[3]|c->r[3]; // 801B2180
  c->lr=0x801B2188u; f_8005E0F8(c); // 801B2184
  c->r[0]=R32(c->r[31]+0x000005BCu); // 801B2188
  c->r[0]=c->r[0]|0x40000000u; // 801B218C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 801B2190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2194
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2198
  c->lr=c->r[0]; // 801B219C
  c->r[1]=c->r[1]+0x00000010u; // 801B21A0
  return; // 801B21A4
}

// fn_801B21A8
void f_801B21A8(Ctx* __restrict c) {
  trace_call(0x801B21A8u);
  f_8005E338(c); return; // 801B21A8
}

// fn_801B21AC
void f_801B21AC(Ctx* __restrict c) {
  trace_call(0x801B21ACu);
  f_8005E324(c); return; // 801B21AC
}

// fn_801B21B0
void f_801B21B0(Ctx* __restrict c) {
  trace_call(0x801B21B0u);
  f_8005E310(c); return; // 801B21B0
}

// fn_801B21B4
void f_801B21B4(Ctx* __restrict c) {
  trace_call(0x801B21B4u);
  f_8005E2FC(c); return; // 801B21B4
}

// fn_801B21B8
void f_801B21B8(Ctx* __restrict c) {
  trace_call(0x801B21B8u);
  f_8005E34C(c); return; // 801B21B8
}

// fn_801B21BC
void f_801B21BC(Ctx* __restrict c) {
  trace_call(0x801B21BCu);
  f_8005E360(c); return; // 801B21BC
}

// fn_801B21C0
void f_801B21C0(Ctx* __restrict c) {
  trace_call(0x801B21C0u);
  f_8005D47C(c); return; // 801B21C0
}

// fn_801B21C4
void f_801B21C4(Ctx* __restrict c) {
  trace_call(0x801B21C4u);
  f_8005D468(c); return; // 801B21C4
}

// fn_801B21C8
void f_801B21C8(Ctx* __restrict c) {
  trace_call(0x801B21C8u);
  f_8005BEDC(c); return; // 801B21C8
}

// fn_801B21CC
void f_801B21CC(Ctx* __restrict c) {
  trace_call(0x801B21CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B21CC
  c->r[0]=c->lr; // 801B21D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B21D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B21D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B21DC
  c->r[30]=c->r[3]|c->r[3]; // 801B21E0
  c->r[31]=c->r[4]|c->r[4]; // 801B21E4
  if (crb(c,2)) { goto L_801B223C; } // 801B21E8
  c->r[0]=R8(c->r[3]+0x00000738u); // 801B21EC
  c->r[4]=0u+0x806E0000u; // 801B21F0
  c->r[4]=c->r[4]+0x000028C0u; // 801B21F4
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801B21F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B21FC
  c->r[0]=c->r[4]+0x00000044u; // 801B2200
  W32(c->r[3]+0x00000400u,c->r[0]); // 801B2204
  if (!crb(c,2)) { goto L_801B2220; } // 801B2208
  c->r[4]=0u+0x00000001u; // 801B220C
  c->lr=0x801B2214u; f_801B27F8(c); // 801B2210
  c->r[3]=c->r[30]+0x000006FCu; // 801B2214
  c->r[4]=0u+0x00000001u; // 801B2218
  c->lr=0x801B2220u; f_80320C3C(c); // 801B221C
L_801B2220:;
  c->r[3]=c->r[30]|c->r[30]; // 801B2220
  c->r[4]=0u+0x00000000u; // 801B2224
  c->lr=0x801B222Cu; f_8017F0DC(c); // 801B2228
  cmps(c,0,(int32_t)c->r[31],0); // 801B222C
  if (!crb(c,1)) { goto L_801B223C; } // 801B2230
  c->r[3]=c->r[30]|c->r[30]; // 801B2234
  c->lr=0x801B223Cu; f_8005328C(c); // 801B2238
L_801B223C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B223C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2244
  c->lr=c->r[0]; // 801B2248
  c->r[1]=c->r[1]+0x00000010u; // 801B224C
  return; // 801B2250
}

// fn_801B2254
void f_801B2254(Ctx* __restrict c) {
  trace_call(0x801B2254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2254
  c->r[0]=c->lr; // 801B2258
  {uint32_t ea=c->r[2]+0xFFFFC654u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B225C
  c->r[4]=0u+0x00000000u; // 801B2260
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2264
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2268
  c->r[31]=c->r[3]|c->r[3]; // 801B226C
  c->r[5]=R32(c->r[3]+0x00000444u); // 801B2270
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801B2274
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 801B2278
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801B227C
  c->lr=0x801B2284u; f_8005EE88(c); // 801B2280
  c->r[3]=c->r[31]|c->r[31]; // 801B2284
  c->r[4]=0u+0x00000000u; // 801B2288
  c->lr=0x801B2290u; f_8005E814(c); // 801B228C
  c->r[3]=c->r[31]|c->r[31]; // 801B2290
  c->r[4]=0u+0x0000000Bu; // 801B2294
  c->r[5]=0u+0x00000001u; // 801B2298
  c->lr=0x801B22A0u; f_800D5F20(c); // 801B229C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B22A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B22A4
  c->lr=c->r[0]; // 801B22A8
  c->r[1]=c->r[1]+0x00000010u; // 801B22AC
  return; // 801B22B0
}

// fn_801B22B4
void f_801B22B4(Ctx* __restrict c) {
  trace_call(0x801B22B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B22B4
  c->r[0]=c->lr; // 801B22B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B22BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B22C0
  c->r[31]=c->r[3]|c->r[3]; // 801B22C4
  c->lr=0x801B22CCu; f_801B29FC(c); // 801B22C8
  c->r[3]=c->r[31]|c->r[31]; // 801B22CC
  c->lr=0x801B22D4u; f_801B2858(c); // 801B22D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B22D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B22D8
  c->lr=c->r[0]; // 801B22DC
  c->r[1]=c->r[1]+0x00000010u; // 801B22E0
  return; // 801B22E4
}

// fn_801B22E8
void f_801B22E8(Ctx* __restrict c) {
  trace_call(0x801B22E8u);
  return; // 801B22E8
}

// fn_801B22EC
void f_801B22EC(Ctx* __restrict c) {
  trace_call(0x801B22ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B22EC
  c->r[0]=c->lr; // 801B22F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B22F4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B22F8
  c->r[31]=c->r[1]|c->r[1]; // 801B22FC
  c->r[28]=c->r[3]|c->r[3]; // 801B2300
  c->lr=0x801B2308u; f_800610FC(c); // 801B2304
  cmps(c,0,(int32_t)c->r[3],0); // 801B2308
  if (crb(c,2)) { goto L_801B2388; } // 801B230C
  c->lr=0x801B2314u; f_80062DCC(c); // 801B2310
  c->r[4]=c->r[3]|c->r[3]; // 801B2314
  c->r[3]=c->r[28]|c->r[28]; // 801B2318
  c->lr=0x801B2320u; f_80062F4C(c); // 801B231C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801B2320
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B2324
  c->r[3]=c->r[28]+c->r[0]; // 801B2328
  c->r[29]=R32(c->r[3]+0x00000014u); // 801B232C
  cmps(c,0,(int32_t)c->r[29],0); // 801B2330
  if (crb(c,2)) { goto L_801B235C; } // 801B2334
  c->r[30]=0u+0x00000000u; // 801B2338
  W32(c->r[31]+0x00000024u,c->r[1]); // 801B233C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801B2340
  c->lr=0x801B2348u; f_80062DCC(c); // 801B2344
  W32(c->r[29]+0x00000000u,c->r[3]); // 801B2348
  c->r[0]=c->r[13]+0xFFFF80C8u; // 801B234C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B2350
  W32(c->r[29]+0x00000008u,c->r[30]); // 801B2354
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801B2358
L_801B235C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801B235C
  c->r[0]=0u+0x00000000u; // 801B2360
  c->r[3]=c->r[28]|c->r[28]; // 801B2364
  c->r[4]=c->r[29]|c->r[29]; // 801B2368
  W32(c->r[29]+0x00000008u,c->r[0]); // 801B236C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B2370
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801B2374
  c->lr=0x801B237Cu; f_8006306C(c); // 801B2378
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801B237C
  c->r[0]=c->r[0]|0x40000000u; // 801B2380
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801B2384
L_801B2388:;
  c->r[10]=c->r[31]|c->r[31]; // 801B2388
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B238C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B2390
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B2394
  c->r[1]=c->r[10]|c->r[10]; // 801B2398
  c->lr=c->r[0]; // 801B239C
  return; // 801B23A0
}

// fn_801B23A4
void f_801B23A4(Ctx* __restrict c) {
  trace_call(0x801B23A4u);
  c->r[3]=0u+0x00000000u; // 801B23A4
  return; // 801B23A8
}

// fn_801B23AC
void f_801B23AC(Ctx* __restrict c) {
  trace_call(0x801B23ACu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B23AC
  c->r[0]=c->lr; // 801B23B0
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B23B4
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801B23B8
  W32(c->r[1]+0x00000108u,c->r[30]); // 801B23BC
  c->r[30]=c->r[3]|c->r[3]; // 801B23C0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B23C4
  cmps(c,0,(int32_t)c->r[4],0); // 801B23C8
  if (crb(c,2)) { goto L_801B23D8; } // 801B23CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B23D0
  goto L_801B23DC; // 801B23D4
L_801B23D8:;
  c->r[0]=0u+0x00000000u; // 801B23D8
L_801B23DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B23DC
  if (!crb(c,2)) { goto L_801B24B8; } // 801B23E0
  {uint32_t ea=c->r[2]+0xFFFFC658u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B23E4
  {uint32_t ea=c->r[3]+0x00000748u; WF32(ea,c->f[0]);} // 801B23E8
  c->lr=0x801B23F0u; f_803B220C(c); // 801B23EC
  c->r[0]=c->r[3]^0x80000000u; // 801B23F0
  c->r[31]=0u+0x43300000u; // 801B23F4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B23F8
  {uint32_t ea=c->r[2]+0xFFFFC668u; c->f[1]=RF64(ea);} // 801B23FC
  W32(c->r[1]+0x000000F8u,c->r[31]); // 801B2400
  {uint32_t ea=c->r[2]+0xFFFFC65Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B2404
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=RF64(ea);} // 801B2408
  {uint32_t ea=c->r[2]+0xFFFFC654u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B240C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801B2410
  {uint32_t ea=c->r[2]+0xFFFFC660u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2414
  {uint32_t ea=c->r[30]+0x0000073Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2418
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 801B241C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 801B2420
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801B2424
  {uint32_t ea=c->r[30]+0x0000074Cu; WF32(ea,c->f[0]);} // 801B2428
  c->lr=0x801B2430u; f_803B220C(c); // 801B242C
  c->r[0]=c->r[3]^0x80000000u; // 801B2430
  W32(c->r[1]+0x00000104u,c->r[0]); // 801B2434
  {uint32_t ea=c->r[2]+0xFFFFC668u; c->f[1]=RF64(ea);} // 801B2438
  c->r[3]=c->r[1]+0x00000068u; // 801B243C
  W32(c->r[1]+0x00000100u,c->r[31]); // 801B2440
  c->r[4]=0u+0x00000000u; // 801B2444
  {uint32_t ea=c->r[2]+0xFFFFC65Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B2448
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 801B244C
  {uint32_t ea=c->r[2]+0xFFFFC664u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B2450
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 801B2454
  {uint32_t ea=c->r[2]+0xFFFFC650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2458
  {uint32_t ea=c->r[30]+0x00000748u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B245C
  {uint32_t ea=c->r[30]+0x0000074Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2460
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[4]); // 801B2464
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[4],c->f[0])); // 801B2468
  {uint32_t ea=c->r[30]+0x00000750u; WF32(ea,c->f[3]);} // 801B246C
  c->lr=0x801B2474u; f_80064240(c); // 801B2470
  c->r[3]=c->r[1]+0x00000068u; // 801B2474
  c->r[4]=c->r[30]+0x000005D8u; // 801B2478
  c->lr=0x801B2480u; f_80382F2C(c); // 801B247C
  c->r[4]=c->r[30]|c->r[30]; // 801B2480
  c->r[3]=c->r[1]+0x0000005Cu; // 801B2484
  c->lr=0x801B248Cu; f_80061A48(c); // 801B2488
  c->r[3]=c->r[1]+0x00000050u; // 801B248C
  c->r[4]=c->r[30]+0x000005D8u; // 801B2490
  c->lr=0x801B2498u; f_80060878(c); // 801B2494
  c->r[3]=c->r[30]+0x00000740u; // 801B2498
  c->r[4]=c->r[1]+0x0000005Cu; // 801B249C
  c->r[5]=c->r[1]+0x00000050u; // 801B24A0
  c->r[6]=c->r[30]+0x00000754u; // 801B24A4
  c->r[7]=c->r[30]+0x00000760u; // 801B24A8
  c->lr=0x801B24B0u; f_80110F48(c); // 801B24AC
  c->r[3]=c->r[30]|c->r[30]; // 801B24B0
  c->lr=0x801B24B8u; f_801B2768(c); // 801B24B4
L_801B24B8:;
  c->r[3]=c->r[30]+0x000001B8u; // 801B24B8
  c->r[4]=c->r[1]+0x000000C8u; // 801B24BC
  c->lr=0x801B24C4u; f_80382F2C(c); // 801B24C0
  {uint32_t ea=c->r[30]+0x00000748u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B24C4
  c->r[3]=c->r[1]+0x00000098u; // 801B24C8
  {uint32_t ea=c->r[30]+0x0000074Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B24CC
  c->r[4]=0u+0x00000000u; // 801B24D0
  {uint32_t ea=c->r[30]+0x00000750u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B24D4
  c->lr=0x801B24DCu; f_80064240(c); // 801B24D8
  c->r[3]=c->r[30]+0x00000740u; // 801B24DC
  c->r[4]=c->r[1]+0x000000C8u; // 801B24E0
  c->r[5]=c->r[30]+0x00000754u; // 801B24E4
  c->r[6]=c->r[30]+0x00000760u; // 801B24E8
  c->lr=0x801B24F0u; f_80111024(c); // 801B24EC
  c->r[3]=c->r[1]+0x00000038u; // 801B24F0
  c->r[4]=c->r[30]+0x0000058Cu; // 801B24F4
  c->lr=0x801B24FCu; f_80060878(c); // 801B24F8
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B24FC
  c->r[3]=c->r[1]+0x0000002Cu; // 801B2500
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2504
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B2508
  c->lr=0x801B2510u; f_8005FD70(c); // 801B250C
  c->r[3]=c->r[1]+0x00000020u; // 801B2510
  c->r[4]=c->r[30]+0x000005D8u; // 801B2514
  c->lr=0x801B251Cu; f_80060878(c); // 801B2518
  {uint32_t ea=c->r[30]+0x000005DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B251C
  c->r[3]=c->r[1]+0x00000014u; // 801B2520
  {uint32_t ea=c->r[30]+0x000005ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2524
  {uint32_t ea=c->r[30]+0x000005FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B2528
  c->lr=0x801B2530u; f_8005FD70(c); // 801B252C
  {uint32_t ea=c->r[30]+0x000005D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2530
  c->r[3]=c->r[1]+0x00000008u; // 801B2534
  {uint32_t ea=c->r[30]+0x000005E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2538
  {uint32_t ea=c->r[30]+0x000005F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B253C
  c->lr=0x801B2544u; f_8005FD70(c); // 801B2540
  c->r[3]=c->r[1]+0x00000038u; // 801B2544
  c->r[4]=c->r[1]+0x0000002Cu; // 801B2548
  c->r[5]=c->r[1]+0x00000020u; // 801B254C
  c->r[6]=c->r[1]+0x00000014u; // 801B2550
  c->r[7]=c->r[1]+0x00000008u; // 801B2554
  c->r[8]=c->r[1]+0x00000044u; // 801B2558
  c->lr=0x801B2560u; f_800646CC(c); // 801B255C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2560
  if (crb(c,2)) { goto L_801B2588; } // 801B2564
  c->r[3]=c->r[30]+0x000005D0u; // 801B2568
  c->lr=0x801B2570u; f_800DBAA4(c); // 801B256C
  c->lr=0x801B2574u; f_80196190(c); // 801B2570
  c->r[3]=c->r[30]|c->r[30]; // 801B2574
  c->lr=0x801B257Cu; f_800ECC90(c); // 801B2578
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801B257C
  c->r[0]=c->r[0]|0x40000000u; // 801B2580
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801B2584
L_801B2588:;
  c->r[3]=c->r[1]+0x000000C8u; // 801B2588
  c->r[4]=c->r[30]+0x000006C0u; // 801B258C
  c->lr=0x801B2594u; f_80382F2C(c); // 801B2590
  c->r[12]=R32(c->r[30]+0x000006F8u); // 801B2594
  c->r[3]=c->r[30]+0x000006C0u; // 801B2598
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B259C
  c->ctr=c->r[12]; // 801B25A0
  if (true) { c->lr=0x801B25A8u; dispatch(c,c->ctr); } // 801B25A4
  c->r[3]=c->r[30]+0x000006C0u; // 801B25A8
  c->r[4]=c->r[30]+0x00000684u; // 801B25AC
  c->lr=0x801B25B4u; f_80382F2C(c); // 801B25B0
  c->r[12]=R32(c->r[30]+0x000006BCu); // 801B25B4
  c->r[3]=c->r[30]+0x00000684u; // 801B25B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B25BC
  c->ctr=c->r[12]; // 801B25C0
  if (true) { c->lr=0x801B25C8u; dispatch(c,c->ctr); } // 801B25C4
  c->r[3]=c->r[30]+0x00000684u; // 801B25C8
  c->r[4]=c->r[30]+0x00000648u; // 801B25CC
  c->lr=0x801B25D4u; f_80382F2C(c); // 801B25D0
  c->r[12]=R32(c->r[30]+0x00000680u); // 801B25D4
  c->r[3]=c->r[30]+0x00000648u; // 801B25D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B25DC
  c->ctr=c->r[12]; // 801B25E0
  if (true) { c->lr=0x801B25E8u; dispatch(c,c->ctr); } // 801B25E4
  c->r[3]=c->r[30]+0x00000648u; // 801B25E8
  c->r[4]=c->r[30]+0x0000060Cu; // 801B25EC
  c->lr=0x801B25F4u; f_80382F2C(c); // 801B25F0
  c->r[12]=R32(c->r[30]+0x00000644u); // 801B25F4
  c->r[3]=c->r[30]+0x0000060Cu; // 801B25F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B25FC
  c->ctr=c->r[12]; // 801B2600
  if (true) { c->lr=0x801B2608u; dispatch(c,c->ctr); } // 801B2604
  c->r[3]=c->r[30]+0x000000FCu; // 801B2608
  c->r[4]=c->r[1]+0x000000C8u; // 801B260C
  c->lr=0x801B2614u; f_80078164(c); // 801B2610
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B2614
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801B2618
  c->r[30]=R32(c->r[1]+0x00000108u); // 801B261C
  c->lr=c->r[0]; // 801B2620
  c->r[1]=c->r[1]+0x00000110u; // 801B2624
  return; // 801B2628
}

// fn_801B262C
void f_801B262C(Ctx* __restrict c) {
  trace_call(0x801B262Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B262C
  c->r[0]=c->lr; // 801B2630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2638
  c->r[31]=c->r[3]|c->r[3]; // 801B263C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B2640
  cmps(c,0,(int32_t)c->r[4],0); // 801B2644
  if (crb(c,2)) { goto L_801B2654; } // 801B2648
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B264C
  goto L_801B2658; // 801B2650
L_801B2654:;
  c->r[0]=0u+0x00000000u; // 801B2654
L_801B2658:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B2658
  if (!crb(c,2)) { goto L_801B268C; } // 801B265C
  c->r[3]=c->r[31]|c->r[31]; // 801B2660
  c->r[4]=0u+0x00000016u; // 801B2664
  c->r[5]=0u+0x00000001u; // 801B2668
  c->lr=0x801B2670u; f_800D5F20(c); // 801B266C
  c->r[3]=c->r[31]|c->r[31]; // 801B2670
  c->r[4]=0u+0x00000000u; // 801B2674
  c->lr=0x801B267Cu; f_801B27F8(c); // 801B2678
  c->r[0]=0u+0x00000001u; // 801B267C
  W8(c->r[31]+0x00000738u,c->r[0]); // 801B2680
  c->r[3]=c->r[31]|c->r[31]; // 801B2684
  c->lr=0x801B268Cu; f_8031749C(c); // 801B2688
L_801B268C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B268C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2690
  c->lr=c->r[0]; // 801B2694
  c->r[1]=c->r[1]+0x00000010u; // 801B2698
  return; // 801B269C
}

// fn_801B26A0
void f_801B26A0(Ctx* __restrict c) {
  trace_call(0x801B26A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B26A0
  c->r[0]=c->lr; // 801B26A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B26A8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B26AC
  c->r[31]=c->r[3]|c->r[3]; // 801B26B0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B26B4
  cmps(c,0,(int32_t)c->r[4],0); // 801B26B8
  if (crb(c,2)) { goto L_801B26C8; } // 801B26BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B26C0
  goto L_801B26CC; // 801B26C4
L_801B26C8:;
  c->r[0]=0u+0x00000000u; // 801B26C8
L_801B26CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B26CC
  if (!crb(c,2)) { goto L_801B2754; } // 801B26D0
  c->r[3]=c->r[31]|c->r[31]; // 801B26D4
  c->lr=0x801B26DCu; f_8005E00C(c); // 801B26D8
  c->r[3]=c->r[31]|c->r[31]; // 801B26DC
  c->r[4]=0u+0x00000016u; // 801B26E0
  c->r[5]=0u+0x00000001u; // 801B26E4
  c->lr=0x801B26ECu; f_800D5F20(c); // 801B26E8
  c->r[3]=c->r[31]|c->r[31]; // 801B26EC
  c->r[4]=0u+0x00000000u; // 801B26F0
  c->lr=0x801B26F8u; f_801B27F8(c); // 801B26F4
  c->r[0]=0u+0x00000001u; // 801B26F8
  W8(c->r[31]+0x00000738u,c->r[0]); // 801B26FC
  c->lr=0x801B2704u; f_8004DB5C(c); // 801B2700
  c->r[5]=0u+0x80690000u; // 801B2704
  c->r[4]=c->r[3]|c->r[3]; // 801B2708
  c->r[5]=c->r[5]+0x000038A8u; // 801B270C
  c->r[3]=c->r[1]+0x00000008u; // 801B2710
  c->r[5]=c->r[5]+0x00000001u; // 801B2714
  c->r[6]=0u+0x00000001u; // 801B2718
  c->lr=0x801B2720u; f_80321B90(c); // 801B271C
  c->r[3]=c->r[31]+0x000006FCu; // 801B2720
  c->r[4]=c->r[1]+0x00000008u; // 801B2724
  c->lr=0x801B272Cu; f_80066080(c); // 801B2728
  c->r[3]=c->r[31]+0x000001B8u; // 801B272C
  c->r[4]=c->r[31]+0x000006FCu; // 801B2730
  c->lr=0x801B2738u; f_80382F2C(c); // 801B2734
  c->r[12]=R32(c->r[31]+0x00000734u); // 801B2738
  c->r[3]=c->r[31]+0x000006FCu; // 801B273C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B2740
  c->ctr=c->r[12]; // 801B2744
  if (true) { c->lr=0x801B274Cu; dispatch(c,c->ctr); } // 801B2748
  c->r[3]=c->r[31]|c->r[31]; // 801B274C
  c->lr=0x801B2754u; f_8031749C(c); // 801B2750
L_801B2754:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B2754
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B2758
  c->lr=c->r[0]; // 801B275C
  c->r[1]=c->r[1]+0x00000050u; // 801B2760
  return; // 801B2764
}

// fn_801B2768
void f_801B2768(Ctx* __restrict c) {
  trace_call(0x801B2768u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2768
  c->r[0]=c->lr; // 801B276C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B2770
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B2774
  c->r[31]=c->r[3]|c->r[3]; // 801B2778
  c->lr=0x801B2780u; f_8004DB5C(c); // 801B277C
  c->r[5]=0u+0x80690000u; // 801B2780
  c->r[4]=c->r[3]|c->r[3]; // 801B2784
  c->r[5]=c->r[5]+0x000038A8u; // 801B2788
  c->r[3]=c->r[1]+0x00000008u; // 801B278C
  c->r[5]=c->r[5]+0x00000014u; // 801B2790
  c->r[6]=0u+0x00000001u; // 801B2794
  c->lr=0x801B279Cu; f_80321B90(c); // 801B2798
  c->r[3]=c->r[31]+0x0000060Cu; // 801B279C
  c->r[4]=c->r[1]+0x00000008u; // 801B27A0
  c->lr=0x801B27A8u; f_80066080(c); // 801B27A4
  c->r[3]=c->r[31]+0x000001B8u; // 801B27A8
  c->r[4]=c->r[31]+0x0000060Cu; // 801B27AC
  c->lr=0x801B27B4u; f_80382F2C(c); // 801B27B0
  c->r[12]=R32(c->r[31]+0x00000644u); // 801B27B4
  c->r[3]=c->r[31]+0x0000060Cu; // 801B27B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B27BC
  c->ctr=c->r[12]; // 801B27C0
  if (true) { c->lr=0x801B27C8u; dispatch(c,c->ctr); } // 801B27C4
  {uint32_t ea=c->r[2]+0xFFFFC670u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B27C8
  c->r[3]=c->r[31]|c->r[31]; // 801B27CC
  {uint32_t ea=c->r[31]+0x00000740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B27D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801B27D4
  c->lr=0x801B27DCu; f_801B29DC(c); // 801B27D8
  c->r[0]=0u+0x00000000u; // 801B27DC
  W32(c->r[31]+0x00000608u,c->r[0]); // 801B27E0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B27E4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B27E8
  c->lr=c->r[0]; // 801B27EC
  c->r[1]=c->r[1]+0x00000050u; // 801B27F0
  return; // 801B27F4
}

// fn_801B27F8
void f_801B27F8(Ctx* __restrict c) {
  trace_call(0x801B27F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B27F8
  c->r[0]=c->lr; // 801B27FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2800
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2804
  c->r[30]=c->r[3]|c->r[3]; // 801B2808
  c->r[31]=c->r[4]|c->r[4]; // 801B280C
  c->r[3]=c->r[3]+0x0000060Cu; // 801B2810
  c->lr=0x801B2818u; f_80320C3C(c); // 801B2814
  c->r[4]=c->r[31]|c->r[31]; // 801B2818
  c->r[3]=c->r[30]+0x00000648u; // 801B281C
  c->lr=0x801B2824u; f_80320C3C(c); // 801B2820
  c->r[4]=c->r[31]|c->r[31]; // 801B2824
  c->r[3]=c->r[30]+0x00000684u; // 801B2828
  c->lr=0x801B2830u; f_80320C3C(c); // 801B282C
  c->r[4]=c->r[31]|c->r[31]; // 801B2830
  c->r[3]=c->r[30]+0x000006C0u; // 801B2834
  c->lr=0x801B283Cu; f_80320C3C(c); // 801B2838
  c->r[0]=0u+0xFFFFFFFFu; // 801B283C
  W32(c->r[30]+0x00000608u,c->r[0]); // 801B2840
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2844
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2848
  c->lr=c->r[0]; // 801B284C
  c->r[1]=c->r[1]+0x00000010u; // 801B2850
  return; // 801B2854
}

// fn_801B2858
void f_801B2858(Ctx* __restrict c) {
  trace_call(0x801B2858u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2858
  c->r[0]=c->lr; // 801B285C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801B2860
  W32(c->r[1]+0x000000CCu,c->r[31]); // 801B2864
  c->r[31]=c->r[3]|c->r[3]; // 801B2868
  c->r[0]=R8(c->r[3]+0x00000775u); // 801B286C
  cmps(c,0,(int32_t)c->r[0],0); // 801B2870
  if (crb(c,2)) { goto L_801B29C8; } // 801B2874
  c->r[0]=R32(c->r[3]+0x00000608u); // 801B2878
  cmps(c,0,(int32_t)c->r[0],0); // 801B287C
  if (crb(c,2)) { goto L_801B28A8; } // 801B2880
  cmps(c,0,(int32_t)c->r[0],1); // 801B2884
  if (crb(c,2)) { goto L_801B2900; } // 801B2888
  cmps(c,0,(int32_t)c->r[0],2); // 801B288C
  if (crb(c,2)) { goto L_801B2958; } // 801B2890
  cmps(c,0,(int32_t)c->r[0],3); // 801B2894
  if (crb(c,2)) { goto L_801B29B0; } // 801B2898
  cmps(c,0,(int32_t)c->r[0],4); // 801B289C
  if (crb(c,2)) { goto L_801B29C4; } // 801B28A0
  goto L_801B29C8; // 801B28A4
L_801B28A8:;
  c->r[4]=0u+0x00000000u; // 801B28A8
  c->r[3]=c->r[3]+0x0000060Cu; // 801B28AC
  c->lr=0x801B28B4u; f_80320C3C(c); // 801B28B0
  c->lr=0x801B28B8u; f_8004DB5C(c); // 801B28B4
  c->r[5]=0u+0x80690000u; // 801B28B8
  c->r[4]=c->r[3]|c->r[3]; // 801B28BC
  c->r[5]=c->r[5]+0x000038A8u; // 801B28C0
  c->r[3]=c->r[1]+0x00000080u; // 801B28C4
  c->r[5]=c->r[5]+0x00000022u; // 801B28C8
  c->r[6]=0u+0x00000001u; // 801B28CC
  c->lr=0x801B28D4u; f_80321B90(c); // 801B28D0
  c->r[3]=c->r[31]+0x00000648u; // 801B28D4
  c->r[4]=c->r[1]+0x00000080u; // 801B28D8
  c->lr=0x801B28E0u; f_80066080(c); // 801B28DC
  {uint32_t ea=c->r[2]+0xFFFFC670u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B28E0
  c->r[3]=c->r[31]|c->r[31]; // 801B28E4
  {uint32_t ea=c->r[31]+0x00000740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B28E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801B28EC
  c->lr=0x801B28F4u; f_801B29DC(c); // 801B28F0
  c->r[0]=0u+0x00000001u; // 801B28F4
  W32(c->r[31]+0x00000608u,c->r[0]); // 801B28F8
  goto L_801B29C8; // 801B28FC
L_801B2900:;
  c->r[4]=0u+0x00000000u; // 801B2900
  c->r[3]=c->r[3]+0x00000648u; // 801B2904
  c->lr=0x801B290Cu; f_80320C3C(c); // 801B2908
  c->lr=0x801B2910u; f_8004DB5C(c); // 801B290C
  c->r[5]=0u+0x80690000u; // 801B2910
  c->r[4]=c->r[3]|c->r[3]; // 801B2914
  c->r[5]=c->r[5]+0x000038A8u; // 801B2918
  c->r[3]=c->r[1]+0x00000044u; // 801B291C
  c->r[5]=c->r[5]+0x00000030u; // 801B2920
  c->r[6]=0u+0x00000001u; // 801B2924
  c->lr=0x801B292Cu; f_80321B90(c); // 801B2928
  c->r[3]=c->r[31]+0x00000684u; // 801B292C
  c->r[4]=c->r[1]+0x00000044u; // 801B2930
  c->lr=0x801B2938u; f_80066080(c); // 801B2934
  {uint32_t ea=c->r[2]+0xFFFFC670u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2938
  c->r[3]=c->r[31]|c->r[31]; // 801B293C
  {uint32_t ea=c->r[31]+0x00000740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2940
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801B2944
  c->lr=0x801B294Cu; f_801B29DC(c); // 801B2948
  c->r[0]=0u+0x00000002u; // 801B294C
  W32(c->r[31]+0x00000608u,c->r[0]); // 801B2950
  goto L_801B29C8; // 801B2954
L_801B2958:;
  c->r[4]=0u+0x00000000u; // 801B2958
  c->r[3]=c->r[3]+0x00000684u; // 801B295C
  c->lr=0x801B2964u; f_80320C3C(c); // 801B2960
  c->lr=0x801B2968u; f_8004DB5C(c); // 801B2964
  c->r[5]=0u+0x80690000u; // 801B2968
  c->r[4]=c->r[3]|c->r[3]; // 801B296C
  c->r[5]=c->r[5]+0x000038A8u; // 801B2970
  c->r[3]=c->r[1]+0x00000008u; // 801B2974
  c->r[5]=c->r[5]+0x0000003Eu; // 801B2978
  c->r[6]=0u+0x00000001u; // 801B297C
  c->lr=0x801B2984u; f_80321B90(c); // 801B2980
  c->r[3]=c->r[31]+0x000006C0u; // 801B2984
  c->r[4]=c->r[1]+0x00000008u; // 801B2988
  c->lr=0x801B2990u; f_80066080(c); // 801B298C
  {uint32_t ea=c->r[2]+0xFFFFC674u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2990
  c->r[3]=c->r[31]|c->r[31]; // 801B2994
  {uint32_t ea=c->r[31]+0x00000740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2998
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801B299C
  c->lr=0x801B29A4u; f_801B29DC(c); // 801B29A0
  c->r[0]=0u+0x00000003u; // 801B29A4
  W32(c->r[31]+0x00000608u,c->r[0]); // 801B29A8
  goto L_801B29C8; // 801B29AC
L_801B29B0:;
  {uint32_t ea=c->r[3]+0x00000740u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B29B0
  c->lr=0x801B29B8u; f_801B29DC(c); // 801B29B4
  c->r[0]=0u+0x00000004u; // 801B29B8
  W32(c->r[31]+0x00000608u,c->r[0]); // 801B29BC
  goto L_801B29C8; // 801B29C0
L_801B29C4:;
  c->lr=0x801B29C8u; f_800ECC90(c); // 801B29C4
L_801B29C8:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801B29C8
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801B29CC
  c->lr=c->r[0]; // 801B29D0
  c->r[1]=c->r[1]+0x000000D0u; // 801B29D4
  return; // 801B29D8
}

// fn_801B29DC
void f_801B29DC(Ctx* __restrict c) {
  trace_call(0x801B29DCu);
  {uint32_t ea=c->r[2]+0xFFFFC678u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B29DC
  c->r[4]=0u+0x00000001u; // 801B29E0
  c->r[0]=0u+0x00000000u; // 801B29E4
  {uint32_t ea=c->r[3]+0x0000076Cu; WF32(ea,c->f[0]);} // 801B29E8
  {uint32_t ea=c->r[3]+0x00000770u; WF32(ea,c->f[1]);} // 801B29EC
  W8(c->r[3]+0x00000774u,c->r[4]); // 801B29F0
  W8(c->r[3]+0x00000775u,c->r[0]); // 801B29F4
  return; // 801B29F8
}

// fn_801B29FC
void f_801B29FC(Ctx* __restrict c) {
  trace_call(0x801B29FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B29FC
  c->r[0]=c->lr; // 801B2A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2A08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2A0C
  c->r[30]=c->r[3]|c->r[3]; // 801B2A10
  c->r[0]=R8(c->r[3]+0x00000774u); // 801B2A14
  cmps(c,0,(int32_t)c->r[0],0); // 801B2A18
  if (crb(c,2)) { goto L_801B2A9C; } // 801B2A1C
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 801B2A20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2A24
  if (!crb(c,2)) { goto L_801B2A64; } // 801B2A28
  c->r[31]=0u+0x80730000u; // 801B2A2C
  c->r[3]=c->r[31]+0x00006D10u; // 801B2A30
  c->lr=0x801B2A38u; f_802D8298(c); // 801B2A34
  c->r[3]=0u+0x806D0000u; // 801B2A38
  c->r[4]=0u+0x80050000u; // 801B2A3C
  c->r[3]=c->r[3]+0xFFFFC220u; // 801B2A40
  c->r[5]=0u+0x80750000u; // 801B2A44
  W32(c->r[31]+0x00006D10u,c->r[3]); // 801B2A48
  c->r[3]=c->r[31]+0x00006D10u; // 801B2A4C
  c->r[4]=c->r[4]+0xFFFF9D40u; // 801B2A50
  c->r[5]=c->r[5]+0x00004F74u; // 801B2A54
  c->lr=0x801B2A5Cu; f_803A92B8(c); // 801B2A58
  c->r[0]=0u+0x00000001u; // 801B2A5C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 801B2A60
L_801B2A64:;
  c->r[3]=0u+0x80730000u; // 801B2A64
  {uint32_t ea=c->r[30]+0x0000076Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2A68
  c->r[3]=c->r[3]+0x00006D10u; // 801B2A6C
  {uint32_t ea=c->r[30]+0x00000770u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2A70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2A74
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801B2A78
  {uint32_t ea=c->r[30]+0x0000076Cu; WF32(ea,c->f[1]);} // 801B2A7C
  fcmp(c,0,c->f[0],c->f[1]); // 801B2A80
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B2A84
  if (!crb(c,2)) { goto L_801B2A9C; } // 801B2A88
  c->r[3]=0u+0x00000000u; // 801B2A8C
  c->r[0]=0u+0x00000001u; // 801B2A90
  W8(c->r[30]+0x00000774u,c->r[3]); // 801B2A94
  W8(c->r[30]+0x00000775u,c->r[0]); // 801B2A98
L_801B2A9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2A9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2AA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2AA4
  c->lr=c->r[0]; // 801B2AA8
  c->r[1]=c->r[1]+0x00000010u; // 801B2AAC
  return; // 801B2AB0
}

// fn_801B2AB4
void f_801B2AB4(Ctx* __restrict c) {
  trace_call(0x801B2AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2AB4
  c->r[0]=c->lr; // 801B2AB8
  c->r[5]=0u+0x80690000u; // 801B2ABC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B2AC0
  c->r[5]=c->r[5]+0x000038A8u; // 801B2AC4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2AC8
  c->r[31]=c->r[1]|c->r[1]; // 801B2ACC
  c->r[28]=c->r[3]|c->r[3]; // 801B2AD0
  c->r[30]=c->r[5]+0x0000004Cu; // 801B2AD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B2AD8
  W32(c->r[3]+0x000005D0u,c->r[0]); // 801B2ADC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B2AE0
  W32(c->r[3]+0x000005D4u,c->r[0]); // 801B2AE4
  {uint32_t ea=c->r[3]+0x00000740u; WF32(ea,c->f[1]);} // 801B2AE8
  {uint32_t ea=c->r[3]+0x0000073Cu; WF32(ea,c->f[2]);} // 801B2AEC
  c->r[3]=c->r[3]+0x000005D0u; // 801B2AF0
  c->lr=0x801B2AF8u; f_800DBAA4(c); // 801B2AF4
  c->r[4]=c->r[30]|c->r[30]; // 801B2AF8
  c->r[3]=c->r[3]+0x000000FCu; // 801B2AFC
  c->lr=0x801B2B04u; f_802E6F14(c); // 801B2B00
  c->r[4]=c->r[3]|c->r[3]; // 801B2B04
  c->r[3]=c->r[28]|c->r[28]; // 801B2B08
  c->lr=0x801B2B10u; f_8005CE00(c); // 801B2B0C
  c->lr=0x801B2B14u; f_80062EBC(c); // 801B2B10
  c->r[4]=c->r[3]|c->r[3]; // 801B2B14
  c->r[3]=c->r[28]|c->r[28]; // 801B2B18
  c->lr=0x801B2B20u; f_80062F4C(c); // 801B2B1C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801B2B20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B2B24
  c->r[3]=c->r[28]+c->r[0]; // 801B2B28
  c->r[29]=R32(c->r[3]+0x00000014u); // 801B2B2C
  cmps(c,0,(int32_t)c->r[29],0); // 801B2B30
  if (crb(c,2)) { goto L_801B2B5C; } // 801B2B34
  c->r[30]=0u+0x00000000u; // 801B2B38
  W32(c->r[31]+0x00000024u,c->r[1]); // 801B2B3C
  W8(c->r[31]+0x00000008u,c->r[30]); // 801B2B40
  c->lr=0x801B2B48u; f_80062EBC(c); // 801B2B44
  W32(c->r[29]+0x00000000u,c->r[3]); // 801B2B48
  c->r[0]=c->r[13]+0xFFFF80D8u; // 801B2B4C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B2B50
  W32(c->r[29]+0x00000008u,c->r[30]); // 801B2B54
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801B2B58
L_801B2B5C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801B2B5C
  c->r[0]=0u+0x00000000u; // 801B2B60
  c->r[3]=c->r[28]|c->r[28]; // 801B2B64
  c->r[4]=c->r[29]|c->r[29]; // 801B2B68
  W32(c->r[29]+0x00000008u,c->r[0]); // 801B2B6C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B2B70
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801B2B74
  c->lr=0x801B2B7Cu; f_8006306C(c); // 801B2B78
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801B2B7C
  c->r[10]=c->r[31]|c->r[31]; // 801B2B80
  c->r[0]=c->r[0]|0x40000000u; // 801B2B84
  W32(c->r[28]+0x000005BCu,c->r[0]); // 801B2B88
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2B8C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B2B90
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B2B94
  c->r[1]=c->r[10]|c->r[10]; // 801B2B98
  c->lr=c->r[0]; // 801B2B9C
  return; // 801B2BA0
}

// fn_801B2BA4
void f_801B2BA4(Ctx* __restrict c) {
  trace_call(0x801B2BA4u);
  return; // 801B2BA4
}

// fn_801B2BA8
void f_801B2BA8(Ctx* __restrict c) {
  trace_call(0x801B2BA8u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 801B2BA8
  f_801B21CC(c); return; // 801B2BAC
}

// fn_801B2BB0
void f_801B2BB0(Ctx* __restrict c) {
  trace_call(0x801B2BB0u);
  c->r[0]=0u+0x00000010u; // 801B2BB0
  c->r[9]=0u+0x00000000u; // 801B2BB4
  c->r[4]=0u+0x00000000u; // 801B2BB8
  c->r[5]=0u+0x00000000u; // 801B2BBC
  c->r[6]=0u+0x00000000u; // 801B2BC0
  c->ctr=c->r[0]; // 801B2BC4
L_801B2BC8:;
  c->r[8]=c->r[3]+c->r[5]; // 801B2BC8
  c->r[7]=c->r[3]+c->r[4]; // 801B2BCC
  W8(c->r[8]+0x00000018u,c->r[9]); // 801B2BD0
  c->r[8]=c->r[3]+c->r[6]; // 801B2BD4
  c->r[4]=c->r[4]+0x00000010u; // 801B2BD8
  c->r[5]=c->r[5]+0x00000008u; // 801B2BDC
  W8(c->r[7]+0x00000098u,c->r[9]); // 801B2BE0
  c->r[6]=c->r[6]+0x00000004u; // 801B2BE4
  W32(c->r[8]+0x00000198u,c->r[9]); // 801B2BE8
  W32(c->r[8]+0x000001D8u,c->r[9]); // 801B2BEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2BC8; } // 801B2BF0
  return; // 801B2BF4
}

// fn_801B2BF8
void f_801B2BF8(Ctx* __restrict c) {
  trace_call(0x801B2BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BF8
  c->r[0]=c->lr; // 801B2BFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B2C00
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2C04
  c->r[28]=0u+0x00000000u; // 801B2C08
  c->r[27]=c->r[3]|c->r[3]; // 801B2C0C
  c->r[30]=c->r[1]+0x00000014u; // 801B2C10
  c->r[31]=c->r[28]|c->r[28]; // 801B2C14
  c->r[21]=c->r[28]|c->r[28]; // 801B2C18
  c->r[22]=c->r[28]|c->r[28]; // 801B2C1C
  c->r[23]=c->r[28]|c->r[28]; // 801B2C20
  c->r[26]=0u+0x00000000u; // 801B2C24
  c->r[25]=0u+0x00000000u; // 801B2C28
  c->r[24]=0u+0x00000000u; // 801B2C2C
L_801B2C30:;
  c->r[29]=c->r[27]+c->r[25]; // 801B2C30
  c->r[0]=R8(c->r[29]+0x00000018u); // 801B2C34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2C38
  if (crb(c,2)) { goto L_801B2CDC; } // 801B2C3C
  W8(c->r[1]+0x00000010u,c->r[31]); // 801B2C40
  c->r[3]=c->r[1]+0x00000010u; // 801B2C44
  W8(c->r[1]+0x00000014u,c->r[31]); // 801B2C48
  c->lr=0x801B2C50u; f_8004DBC0(c); // 801B2C4C
  c->r[4]=c->r[29]|c->r[29]; // 801B2C50
  c->r[4]=c->r[4]+0x00000018u; // 801B2C54
  c->lr=0x801B2C5Cu; f_8009920C(c); // 801B2C58
  c->r[20]=c->r[3]|c->r[3]; // 801B2C5C
  c->r[3]=c->r[30]|c->r[30]; // 801B2C60
  c->lr=0x801B2C68u; f_8004DBC0(c); // 801B2C64
  c->r[4]=c->r[20]|c->r[20]; // 801B2C68
  c->lr=0x801B2C70u; f_80099344(c); // 801B2C6C
  W8(c->r[1]+0x0000000Cu,c->r[21]); // 801B2C70
  c->r[19]=c->r[3]|c->r[3]; // 801B2C74
  c->r[3]=c->r[1]+0x0000000Cu; // 801B2C78
  c->r[20]=c->r[27]+c->r[24]; // 801B2C7C
  c->lr=0x801B2C84u; f_8004E228(c); // 801B2C80
  c->r[5]=R32(c->r[20]+0x00000198u); // 801B2C84
  c->r[4]=c->r[19]|c->r[19]; // 801B2C88
  c->lr=0x801B2C90u; f_80075E94(c); // 801B2C8C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C90
  if (crb(c,2)) { goto L_801B2CCC; } // 801B2C94
  c->r[3]=R32(c->r[20]+0x000001D8u); // 801B2C98
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801B2C9C
  if (crb(c,2)) { goto L_801B2CCC; } // 801B2CA0
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 801B2CA4
  W32(c->r[20]+0x000001D8u,c->r[0]); // 801B2CA8
  c->r[3]=c->r[1]+0x00000008u; // 801B2CAC
  W8(c->r[1]+0x00000008u,c->r[22]); // 801B2CB0
  c->lr=0x801B2CB8u; f_8004E228(c); // 801B2CB4
  c->r[6]=c->r[27]+c->r[26]; // 801B2CB8
  c->r[5]=R32(c->r[20]+0x00000198u); // 801B2CBC
  c->r[4]=c->r[19]|c->r[19]; // 801B2CC0
  c->r[6]=c->r[6]+0x00000098u; // 801B2CC4
  c->lr=0x801B2CCCu; f_8007613C(c); // 801B2CC8
L_801B2CCC:;
  c->r[0]=R32(c->r[20]+0x000001D8u); // 801B2CCC
  cmps(c,0,(int32_t)c->r[0],0); // 801B2CD0
  if (!crb(c,2)) { goto L_801B2CDC; } // 801B2CD4
  W8(c->r[29]+0x00000018u,c->r[23]); // 801B2CD8
L_801B2CDC:;
  c->r[28]=c->r[28]+0x00000001u; // 801B2CDC
  c->r[25]=c->r[25]+0x00000008u; // 801B2CE0
  cmps(c,0,(int32_t)c->r[28],16); // 801B2CE4
  c->r[24]=c->r[24]+0x00000004u; // 801B2CE8
  c->r[26]=c->r[26]+0x00000010u; // 801B2CEC
  if (crb(c,0)) { IRQCHK(c); goto L_801B2C30; } // 801B2CF0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2CF4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B2CF8
  c->lr=c->r[0]; // 801B2CFC
  c->r[1]=c->r[1]+0x00000050u; // 801B2D00
  return; // 801B2D04
}

// fn_801B2D08
void f_801B2D08(Ctx* __restrict c) {
  trace_call(0x801B2D08u);
  c->r[3]=0u+0x0000003Cu; // 801B2D08
  return; // 801B2D0C
}

// fn_801B2D10
void f_801B2D10(Ctx* __restrict c) {
  trace_call(0x801B2D10u);
  c->r[3]=0u+0x801B0000u; // 801B2D10
  c->r[3]=c->r[3]+0x00002E34u; // 801B2D14
  return; // 801B2D18
}

// fn_801B2D1C
void f_801B2D1C(Ctx* __restrict c) {
  trace_call(0x801B2D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2D1C
  c->r[0]=c->lr; // 801B2D20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2D24
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2D28
  c->r[28]=c->r[3]|c->r[3]; // 801B2D2C
  c->r[24]=c->r[4]|c->r[4]; // 801B2D30
  c->r[29]=c->r[5]|c->r[5]; // 801B2D34
  c->r[30]=c->r[6]|c->r[6]; // 801B2D38
  c->r[31]=0u+0xFFFFFFFFu; // 801B2D3C
  c->r[25]=0u+0x00000000u; // 801B2D40
  c->r[27]=0u+0x00000000u; // 801B2D44
  c->r[26]=0u+0x00000000u; // 801B2D48
L_801B2D4C:;
  c->r[3]=c->r[28]+c->r[26]; // 801B2D4C
  c->r[0]=R32(c->r[3]+0x00000198u); // 801B2D50
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801B2D54
  if (!crb(c,2)) { goto L_801B2D7C; } // 801B2D58
  c->r[3]=c->r[28]+c->r[27]; // 801B2D5C
  c->r[4]=c->r[24]|c->r[24]; // 801B2D60
  c->r[3]=c->r[3]+0x00000018u; // 801B2D64
  c->lr=0x801B2D6Cu; f_803B393C(c); // 801B2D68
  cmps(c,0,(int32_t)c->r[3],0); // 801B2D6C
  if (!crb(c,2)) { goto L_801B2D7C; } // 801B2D70
  c->r[31]=c->r[25]|c->r[25]; // 801B2D74
  goto L_801B2DA4; // 801B2D78
L_801B2D7C:;
  c->r[3]=c->r[28]+c->r[27]; // 801B2D7C
  c->r[0]=R8(c->r[3]+0x00000018u); // 801B2D80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2D84
  if (!crb(c,2)) { goto L_801B2D90; } // 801B2D88
  c->r[31]=c->r[25]|c->r[25]; // 801B2D8C
L_801B2D90:;
  c->r[25]=c->r[25]+0x00000001u; // 801B2D90
  c->r[26]=c->r[26]+0x00000004u; // 801B2D94
  cmps(c,0,(int32_t)c->r[25],16); // 801B2D98
  c->r[27]=c->r[27]+0x00000008u; // 801B2D9C
  if (crb(c,0)) { IRQCHK(c); goto L_801B2D4C; } // 801B2DA0
L_801B2DA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2DA4
  if (!crb(c,0)) { goto L_801B2DB0; } // 801B2DA8
  c->r[31]=0u+0x00000000u; // 801B2DAC
L_801B2DB0:;
  cmps(c,0,(int32_t)c->r[25],16); // 801B2DB0
  if (crb(c,0)) { goto L_801B2E1C; } // 801B2DB4
  c->r[3]=c->r[24]|c->r[24]; // 801B2DB8
  c->lr=0x801B2DC0u; f_803A91D4(c); // 801B2DBC
  cmpu(c,0,c->r[3],0x00000008u); // 801B2DC0
  if (!crb(c,0)) { goto L_801B2E1C; } // 801B2DC4
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801B2DC8
  c->r[4]=c->r[24]|c->r[24]; // 801B2DCC
  c->r[3]=c->r[28]+c->r[0]; // 801B2DD0
  c->r[3]=c->r[3]+0x00000018u; // 801B2DD4
  c->lr=0x801B2DDCu; f_803B37C0(c); // 801B2DD8
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 801B2DDC
  cmps(c,0,(int32_t)c->r[30],0); // 801B2DE0
  c->r[26]=c->r[28]+c->r[0]; // 801B2DE4
  c->r[0]=0u+0x00000000u; // 801B2DE8
  {uint32_t ea=c->r[26]+0x00000098u; W8(ea,c->r[0]); c->r[26]=ea;} // 801B2DEC
  if (crb(c,2)) { goto L_801B2E10; } // 801B2DF0
  c->r[3]=c->r[30]|c->r[30]; // 801B2DF4
  c->lr=0x801B2DFCu; f_803A91D4(c); // 801B2DF8
  cmpu(c,0,c->r[3],0x00000010u); // 801B2DFC
  if (!crb(c,0)) { goto L_801B2E10; } // 801B2E00
  c->r[3]=c->r[26]|c->r[26]; // 801B2E04
  c->r[4]=c->r[30]|c->r[30]; // 801B2E08
  c->lr=0x801B2E10u; f_803B37C0(c); // 801B2E0C
L_801B2E10:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801B2E10
  c->r[3]=c->r[28]+c->r[0]; // 801B2E14
  W32(c->r[3]+0x00000198u,c->r[29]); // 801B2E18
L_801B2E1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B2E1C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2E20
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2E24
  c->lr=c->r[0]; // 801B2E28
  c->r[1]=c->r[1]+0x00000030u; // 801B2E2C
  return; // 801B2E30
}

// fn_801B2E34
void f_801B2E34(Ctx* __restrict c) {
  trace_call(0x801B2E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2E34
  c->r[0]=c->lr; // 801B2E38
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B2E3C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2E40
  c->r[3]=R32(c->r[4]+0x00000000u); // 801B2E44
  c->r[0]=c->r[3]+0xBDB90000u; // 801B2E48
  cmpu(c,0,c->r[0],0x00004F47u); // 801B2E4C
  if (crb(c,2)) { goto L_801B2E5C; } // 801B2E50
  c->r[3]=0u+0x00000001u; // 801B2E54
  goto L_801B2F38; // 801B2E58
L_801B2E5C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B2E5C
  cmps(c,0,(int32_t)c->r[0],0); // 801B2E60
  if (crb(c,2)) { goto L_801B2E70; } // 801B2E64
  c->r[3]=0u+0x00000001u; // 801B2E68
  goto L_801B2F38; // 801B2E6C
L_801B2E70:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B2E70
  c->r[30]=0u+0x00000000u; // 801B2E74
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801B2E78
  c->r[3]=c->r[1]+0x00000018u; // 801B2E7C
  c->r[28]=c->r[4]+c->r[0]; // 801B2E80
  c->r[29]=c->r[1]+0x0000001Cu; // 801B2E84
  c->r[0]=R32(c->r[28]+0x00000008u); // 801B2E88
  c->r[27]=c->r[28]+c->r[5]; // 801B2E8C
  W8(c->r[1]+0x00000018u,c->r[30]); // 801B2E90
  c->r[26]=c->r[27]+c->r[0]; // 801B2E94
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 801B2E98
  c->lr=0x801B2EA0u; f_8004DBC0(c); // 801B2E9C
  c->r[4]=c->r[27]|c->r[27]; // 801B2EA0
  c->lr=0x801B2EA8u; f_8009920C(c); // 801B2EA4
  c->r[31]=c->r[3]|c->r[3]; // 801B2EA8
  c->r[3]=c->r[29]|c->r[29]; // 801B2EAC
  c->lr=0x801B2EB4u; f_8004DBC0(c); // 801B2EB0
  c->r[4]=c->r[31]|c->r[31]; // 801B2EB4
  c->lr=0x801B2EBCu; f_80099344(c); // 801B2EB8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B2EBC
  c->r[29]=c->r[3]|c->r[3]; // 801B2EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B2EC4
  if (!crb(c,2)) { goto L_801B2F34; } // 801B2EC8
  W8(c->r[1]+0x00000014u,c->r[30]); // 801B2ECC
  c->r[3]=c->r[1]+0x00000014u; // 801B2ED0
  c->lr=0x801B2ED8u; f_8004E228(c); // 801B2ED4
  c->r[5]=R32(c->r[28]+0x00000004u); // 801B2ED8
  c->r[4]=c->r[29]|c->r[29]; // 801B2EDC
  c->lr=0x801B2EE4u; f_80075E94(c); // 801B2EE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2EE4
  if (crb(c,2)) { goto L_801B2F0C; } // 801B2EE8
  W8(c->r[1]+0x00000010u,c->r[30]); // 801B2EEC
  c->r[3]=c->r[1]+0x00000010u; // 801B2EF0
  c->lr=0x801B2EF8u; f_8004E228(c); // 801B2EF4
  c->r[5]=R32(c->r[28]+0x00000004u); // 801B2EF8
  c->r[4]=c->r[29]|c->r[29]; // 801B2EFC
  c->r[6]=c->r[26]|c->r[26]; // 801B2F00
  c->lr=0x801B2F08u; f_8007613C(c); // 801B2F04
  goto L_801B2F34; // 801B2F08
L_801B2F0C:;
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 801B2F0C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B2F10
  c->lr=0x801B2F18u; f_8004F118(c); // 801B2F14
  c->r[5]=R32(c->r[28]+0x00000004u); // 801B2F18
  c->r[4]=c->r[27]|c->r[27]; // 801B2F1C
  c->r[6]=c->r[26]|c->r[26]; // 801B2F20
  c->lr=0x801B2F28u; f_801B2D1C(c); // 801B2F24
  W8(c->r[1]+0x00000008u,c->r[30]); // 801B2F28
  c->r[3]=c->r[1]+0x00000008u; // 801B2F2C
  c->lr=0x801B2F34u; f_8004F118(c); // 801B2F30
L_801B2F34:;
  c->r[3]=0u+0x00000001u; // 801B2F34
L_801B2F38:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B2F38
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B2F3C
  c->lr=c->r[0]; // 801B2F40
  c->r[1]=c->r[1]+0x00000040u; // 801B2F44
  return; // 801B2F48
}

// fn_801B2F4C
void f_801B2F4C(Ctx* __restrict c) {
  trace_call(0x801B2F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2F4C
  c->r[0]=c->lr; // 801B2F50
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2F54
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2F58
  c->r[29]=0u+0x00000000u; // 801B2F5C
  c->r[31]=0u+0x80690000u; // 801B2F60
  c->r[27]=c->r[3]|c->r[3]; // 801B2F64
  c->r[28]=c->r[1]+0x00000014u; // 801B2F68
  c->r[4]=c->r[31]+0x00003960u; // 801B2F6C
  W8(c->r[1]+0x00000014u,c->r[29]); // 801B2F70
  c->lr=0x801B2F78u; f_802DF854(c); // 801B2F74
  c->r[30]=c->r[3]|c->r[3]; // 801B2F78
  c->r[3]=c->r[28]|c->r[28]; // 801B2F7C
  c->lr=0x801B2F84u; f_8012556C(c); // 801B2F80
  c->r[4]=c->r[30]|c->r[30]; // 801B2F84
  c->r[5]=0u+0x00000000u; // 801B2F88
  c->lr=0x801B2F90u; f_80125594(c); // 801B2F8C
  c->r[30]=c->r[31]+0x00003960u; // 801B2F90
  W8(c->r[1]+0x00000010u,c->r[29]); // 801B2F94
  c->r[3]=c->r[27]|c->r[27]; // 801B2F98
  c->r[28]=c->r[1]+0x00000010u; // 801B2F9C
  c->r[4]=c->r[30]+0x00000008u; // 801B2FA0
  c->lr=0x801B2FA8u; f_802DF854(c); // 801B2FA4
  c->r[31]=c->r[3]|c->r[3]; // 801B2FA8
  c->r[3]=c->r[28]|c->r[28]; // 801B2FAC
  c->lr=0x801B2FB4u; f_8012556C(c); // 801B2FB0
  c->r[4]=c->r[31]|c->r[31]; // 801B2FB4
  c->r[5]=0u+0x00000000u; // 801B2FB8
  c->lr=0x801B2FC0u; f_80125594(c); // 801B2FBC
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801B2FC0
  c->r[3]=c->r[27]|c->r[27]; // 801B2FC4
  c->r[28]=c->r[1]+0x0000000Cu; // 801B2FC8
  c->r[4]=c->r[30]+0x00000010u; // 801B2FCC
  c->lr=0x801B2FD4u; f_802DF854(c); // 801B2FD0
  c->r[31]=c->r[3]|c->r[3]; // 801B2FD4
  c->r[3]=c->r[28]|c->r[28]; // 801B2FD8
  c->lr=0x801B2FE0u; f_8012556C(c); // 801B2FDC
  c->r[4]=c->r[31]|c->r[31]; // 801B2FE0
  c->r[5]=0u+0x00000000u; // 801B2FE4
  c->lr=0x801B2FECu; f_80125594(c); // 801B2FE8
  W8(c->r[1]+0x00000008u,c->r[29]); // 801B2FEC
  c->r[3]=c->r[27]|c->r[27]; // 801B2FF0
  c->r[28]=c->r[1]+0x00000008u; // 801B2FF4
  c->r[4]=c->r[30]+0x0000001Cu; // 801B2FF8
  c->lr=0x801B3000u; f_802DF854(c); // 801B2FFC
  c->r[31]=c->r[3]|c->r[3]; // 801B3000
  c->r[3]=c->r[28]|c->r[28]; // 801B3004
  c->lr=0x801B300Cu; f_8012556C(c); // 801B3008
  c->r[4]=c->r[31]|c->r[31]; // 801B300C
  c->r[5]=0u+0x00000000u; // 801B3010
  c->lr=0x801B3018u; f_80125594(c); // 801B3014
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B3018
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B301C
  c->lr=c->r[0]; // 801B3020
  c->r[1]=c->r[1]+0x00000030u; // 801B3024
  return; // 801B3028
}

// fn_801B302C
void f_801B302C(Ctx* __restrict c) {
  trace_call(0x801B302Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B302C
  c->r[0]=c->lr; // 801B3030
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3034
  c->r[11]=c->r[1]+0x00000040u; // 801B3038
  c->lr=0x801B3040u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B303C
  c->r[30]=0u+0x80690000u; // 801B3040
  c->r[29]=0u+0x00000000u; // 801B3044
  c->r[30]=c->r[30]+0x00003960u; // 801B3048
  W8(c->r[1]+0x00000024u,c->r[29]); // 801B304C
  c->r[27]=c->r[3]|c->r[3]; // 801B3050
  c->r[28]=c->r[1]+0x00000024u; // 801B3054
  c->r[4]=c->r[30]+0x00000028u; // 801B3058
  c->lr=0x801B3060u; f_802DF854(c); // 801B305C
  c->r[31]=c->r[3]|c->r[3]; // 801B3060
  c->r[3]=c->r[28]|c->r[28]; // 801B3064
  c->lr=0x801B306Cu; f_8012556C(c); // 801B3068
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801B306C
  c->r[6]=c->r[31]|c->r[31]; // 801B3070
  c->r[5]=0u+0x00000000u; // 801B3074
  c->lr=0x801B307Cu; f_80125F50(c); // 801B3078
  c->r[3]=c->r[27]|c->r[27]; // 801B307C
  c->r[4]=c->r[30]+0x00000028u; // 801B3080
  c->lr=0x801B3088u; f_802DF854(c); // 801B3084
  c->r[31]=R32(c->r[27]+0x000000A8u); // 801B3088
  c->r[28]=c->r[3]|c->r[3]; // 801B308C
  c->r[3]=c->r[1]+0x00000020u; // 801B3090
  W8(c->r[1]+0x00000020u,c->r[29]); // 801B3094
  c->lr=0x801B309Cu; f_8012556C(c); // 801B3098
  c->r[4]=c->r[31]|c->r[31]; // 801B309C
  c->r[5]=c->r[28]|c->r[28]; // 801B30A0
  c->lr=0x801B30A8u; f_801254F8(c); // 801B30A4
  {uint32_t ea=c->r[2]+0xFFFFC680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B30A8
  c->r[28]=c->r[1]+0x0000001Cu; // 801B30AC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B30B0
  c->r[3]=c->r[27]|c->r[27]; // 801B30B4
  c->r[4]=c->r[30]+0x00000037u; // 801B30B8
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 801B30BC
  c->lr=0x801B30C4u; f_802DF854(c); // 801B30C0
  c->r[31]=c->r[3]|c->r[3]; // 801B30C4
  c->r[3]=c->r[28]|c->r[28]; // 801B30C8
  c->lr=0x801B30D0u; f_8012556C(c); // 801B30CC
  c->r[4]=R32(c->r[27]+0x000000A8u); // 801B30D0
  c->r[6]=c->r[31]|c->r[31]; // 801B30D4
  c->r[5]=0u+0x00000000u; // 801B30D8
  c->lr=0x801B30E0u; f_80125F50(c); // 801B30DC
  c->r[3]=c->r[27]|c->r[27]; // 801B30E0
  c->r[4]=c->r[30]+0x00000037u; // 801B30E4
  c->lr=0x801B30ECu; f_802DF854(c); // 801B30E8
  c->r[28]=R32(c->r[27]+0x000000A8u); // 801B30EC
  c->r[31]=c->r[3]|c->r[3]; // 801B30F0
  c->r[3]=c->r[1]+0x00000018u; // 801B30F4
  W8(c->r[1]+0x00000018u,c->r[29]); // 801B30F8
  c->lr=0x801B3100u; f_8012556C(c); // 801B30FC
  c->r[4]=c->r[28]|c->r[28]; // 801B3100
  c->r[5]=c->r[31]|c->r[31]; // 801B3104
  c->lr=0x801B310Cu; f_801254F8(c); // 801B3108
  {uint32_t ea=c->r[2]+0xFFFFC680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B310C
  c->r[28]=c->r[1]+0x00000014u; // 801B3110
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B3114
  c->r[3]=c->r[27]|c->r[27]; // 801B3118
  c->r[4]=c->r[30]+0x00000046u; // 801B311C
  W8(c->r[1]+0x00000014u,c->r[29]); // 801B3120
  c->lr=0x801B3128u; f_802DF854(c); // 801B3124
  c->r[31]=c->r[3]|c->r[3]; // 801B3128
  c->r[3]=c->r[28]|c->r[28]; // 801B312C
  c->lr=0x801B3134u; f_8012556C(c); // 801B3130
  c->r[4]=R32(c->r[27]+0x000000B8u); // 801B3134
  c->r[6]=c->r[31]|c->r[31]; // 801B3138
  c->r[5]=0u+0x00000000u; // 801B313C
  c->lr=0x801B3144u; f_80125F50(c); // 801B3140
  c->r[3]=c->r[27]|c->r[27]; // 801B3144
  c->r[4]=c->r[30]+0x00000046u; // 801B3148
  c->lr=0x801B3150u; f_802DF854(c); // 801B314C
  c->r[28]=R32(c->r[27]+0x000000B8u); // 801B3150
  c->r[31]=c->r[3]|c->r[3]; // 801B3154
  c->r[3]=c->r[1]+0x00000010u; // 801B3158
  W8(c->r[1]+0x00000010u,c->r[29]); // 801B315C
  c->lr=0x801B3164u; f_8012556C(c); // 801B3160
  c->r[4]=c->r[28]|c->r[28]; // 801B3164
  c->r[5]=c->r[31]|c->r[31]; // 801B3168
  c->lr=0x801B3170u; f_801254F8(c); // 801B316C
  {uint32_t ea=c->r[2]+0xFFFFC680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3170
  c->r[28]=c->r[1]+0x0000000Cu; // 801B3174
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B3178
  c->r[3]=c->r[27]|c->r[27]; // 801B317C
  c->r[4]=c->r[30]+0x00000053u; // 801B3180
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 801B3184
  c->lr=0x801B318Cu; f_802DF854(c); // 801B3188
  c->r[31]=c->r[3]|c->r[3]; // 801B318C
  c->r[3]=c->r[28]|c->r[28]; // 801B3190
  c->lr=0x801B3198u; f_8012556C(c); // 801B3194
  c->r[4]=R32(c->r[27]+0x000000B8u); // 801B3198
  c->r[6]=c->r[31]|c->r[31]; // 801B319C
  c->r[5]=0u+0x00000000u; // 801B31A0
  c->lr=0x801B31A8u; f_80125F50(c); // 801B31A4
  c->r[3]=c->r[27]|c->r[27]; // 801B31A8
  c->r[4]=c->r[30]+0x00000053u; // 801B31AC
  c->lr=0x801B31B4u; f_802DF854(c); // 801B31B0
  c->r[28]=R32(c->r[27]+0x000000B8u); // 801B31B4
  c->r[30]=c->r[3]|c->r[3]; // 801B31B8
  c->r[3]=c->r[1]+0x00000008u; // 801B31BC
  W8(c->r[1]+0x00000008u,c->r[29]); // 801B31C0
  c->lr=0x801B31C8u; f_8012556C(c); // 801B31C4
  c->r[4]=c->r[28]|c->r[28]; // 801B31C8
  c->r[5]=c->r[30]|c->r[30]; // 801B31CC
  c->lr=0x801B31D4u; f_801254F8(c); // 801B31D0
  {uint32_t ea=c->r[2]+0xFFFFC680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B31D4
  c->r[11]=c->r[1]+0x00000040u; // 801B31D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B31DC
  c->lr=0x801B31E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B31E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B31E4
  c->lr=c->r[0]; // 801B31E8
  c->r[1]=c->r[1]+0x00000040u; // 801B31EC
  return; // 801B31F0
}

// fn_801B31F4
void f_801B31F4(Ctx* __restrict c) {
  trace_call(0x801B31F4u);
  c->r[4]=0u+0xFFFFFFFFu; // 801B31F4
  c->r[0]=0u+0x00000000u; // 801B31F8
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801B31FC
  W32(c->r[3]+0x000000A4u,c->r[4]); // 801B3200
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801B3204
  W32(c->r[3]+0x000000B8u,c->r[0]); // 801B3208
  return; // 801B320C
}

// fn_801B3210
void f_801B3210(Ctx* __restrict c) {
  trace_call(0x801B3210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3210
  c->r[0]=c->lr; // 801B3214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3218
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B321C
  c->r[30]=c->r[3]|c->r[3]; // 801B3220
  c->lr=0x801B3228u; f_801B31F4(c); // 801B3224
  c->r[31]=0u+0x80690000u; // 801B3228
  c->r[3]=c->r[30]|c->r[30]; // 801B322C
  c->r[31]=c->r[31]+0x00003960u; // 801B3230
  c->r[4]=c->r[31]+0x00000060u; // 801B3234
  c->lr=0x801B323Cu; f_802DFB68(c); // 801B3238
  c->r[3]=c->r[30]|c->r[30]; // 801B323C
  c->r[4]=c->r[31]+0x0000006Cu; // 801B3240
  c->lr=0x801B3248u; f_802DFCE8(c); // 801B3244
  W32(c->r[30]+0x000000A8u,c->r[3]); // 801B3248
  c->r[3]=c->r[30]|c->r[30]; // 801B324C
  c->r[4]=c->r[31]+0x0000007Eu; // 801B3250
  c->lr=0x801B3258u; f_802DFCE8(c); // 801B3254
  W32(c->r[30]+0x000000ACu,c->r[3]); // 801B3258
  c->r[3]=c->r[30]|c->r[30]; // 801B325C
  c->r[4]=c->r[31]+0x00000095u; // 801B3260
  c->lr=0x801B3268u; f_802DFCE8(c); // 801B3264
  W32(c->r[30]+0x000000B0u,c->r[3]); // 801B3268
  c->r[3]=c->r[30]|c->r[30]; // 801B326C
  c->r[4]=c->r[31]+0x000000ACu; // 801B3270
  c->lr=0x801B3278u; f_802DFCE8(c); // 801B3274
  W32(c->r[30]+0x000000B4u,c->r[3]); // 801B3278
  c->r[3]=c->r[30]|c->r[30]; // 801B327C
  c->r[4]=c->r[31]+0x000000BEu; // 801B3280
  c->lr=0x801B3288u; f_802DFCE8(c); // 801B3284
  W32(c->r[30]+0x000000B8u,c->r[3]); // 801B3288
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B328C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3290
  c->lr=c->r[0]; // 801B3294
  c->r[1]=c->r[1]+0x00000010u; // 801B3298
  return; // 801B329C
}

// fn_801B32A0
void f_801B32A0(Ctx* __restrict c) {
  trace_call(0x801B32A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B32A0
  c->r[0]=c->lr; // 801B32A4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801B32A8
  c->r[11]=c->r[1]+0x000000C0u; // 801B32AC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801B32B0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801B32B4
  c->lr=0x801B32BCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B32B8
  c->r[6]=0u+0x80690000u; // 801B32BC
  c->r[30]=c->r[5]|c->r[5]; // 801B32C0
  c->f[31]=c->f[3]; // 801B32C4
  c->r[6]=c->r[6]+0x00003900u; // 801B32C8
  c->r[29]=c->r[4]|c->r[4]; // 801B32CC
  c->r[0]=0u+0x00000004u; // 801B32D0
  c->r[28]=c->r[3]|c->r[3]; // 801B32D4
  c->r[5]=c->r[1]+0x0000006Cu; // 801B32D8
  c->r[4]=c->r[6]+0xFFFFFFFCu; // 801B32DC
  c->ctr=c->r[0]; // 801B32E0
L_801B32E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B32E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B32E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B32EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B32F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B32E4; } // 801B32F4
  c->r[3]=0u+0x80690000u; // 801B32F8
  {uint32_t ea=c->r[2]+0xFFFFC680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B32FC
  c->r[3]=c->r[3]+0x00003920u; // 801B3300
  c->r[0]=0u+0x00000004u; // 801B3304
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B3308
  c->r[5]=c->r[1]+0x0000004Cu; // 801B330C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801B3310
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 801B3314
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801B3318
  c->ctr=c->r[0]; // 801B331C
L_801B3320:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B3320
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B3324
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B3328
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B332C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3320; } // 801B3330
  c->r[3]=c->r[28]|c->r[28]; // 801B3334
  c->r[4]=c->r[29]|c->r[29]; // 801B3338
  c->r[5]=c->r[1]+0x00000050u; // 801B333C
  c->lr=0x801B3344u; f_801B3EE0(c); // 801B3340
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801B3344
  c->r[31]=c->r[28]+c->r[0]; // 801B3348
  c->r[0]=R32(c->r[31]+0x000000A0u); // 801B334C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801B3350
  if (crb(c,2)) { goto L_801B38E8; } // 801B3354
  c->r[4]=0u+0x80690000u; // 801B3358
  c->r[3]=c->r[1]+0x00000070u; // 801B335C
  c->r[4]=c->r[4]+0x00003960u; // 801B3360
  c->r[4]=c->r[4]+0x000000D4u; // 801B3364
  c->lr=0x801B336Cu; f_803B37C0(c); // 801B3368
  c->r[3]=c->r[28]|c->r[28]; // 801B336C
  c->r[4]=c->r[29]|c->r[29]; // 801B3370
  c->r[5]=c->r[1]+0x00000070u; // 801B3374
  c->lr=0x801B337Cu; f_801B3EE0(c); // 801B3378
  c->r[0]=0u+0x00000000u; // 801B337C
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 801B3380
  c->r[3]=c->r[28]|c->r[28]; // 801B3384
  c->r[26]=c->r[1]+0x0000003Cu; // 801B3388
  c->r[4]=c->r[1]+0x00000070u; // 801B338C
  c->lr=0x801B3394u; f_802DF854(c); // 801B3390
  c->r[25]=c->r[3]|c->r[3]; // 801B3394
  c->r[3]=c->r[26]|c->r[26]; // 801B3398
  c->lr=0x801B33A0u; f_8012556C(c); // 801B339C
  c->r[0]=c->r[30]+0xFFFFFFFEu; // 801B33A0
  c->r[4]=c->r[25]|c->r[25]; // 801B33A4
  c->r[0]=cntlz(c->r[0]); // 801B33A8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B33AC
  c->lr=0x801B33B4u; f_80125594(c); // 801B33B0
  cmps(c,0,(int32_t)c->r[30],2); // 801B33B4
  if (!crb(c,2)) { goto L_801B33E0; } // 801B33B8
  c->r[3]=c->r[28]|c->r[28]; // 801B33BC
  c->r[4]=c->r[1]+0x00000050u; // 801B33C0
  c->lr=0x801B33C8u; f_802DF854(c); // 801B33C4
  c->r[4]=R32(c->r[28]+0x000000A8u); // 801B33C8
  c->r[5]=c->r[3]|c->r[3]; // 801B33CC
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B33D0
  c->r[3]=c->r[28]|c->r[28]; // 801B33D4
  c->lr=0x801B33DCu; f_802E02F0(c); // 801B33D8
  goto L_801B3400; // 801B33DC
L_801B33E0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B33E0
  c->r[4]=c->r[1]+0x00000050u; // 801B33E4
  c->lr=0x801B33ECu; f_802DF854(c); // 801B33E8
  c->r[4]=R32(c->r[28]+0x000000A8u); // 801B33EC
  c->r[5]=c->r[3]|c->r[3]; // 801B33F0
  c->r[3]=c->r[28]|c->r[28]; // 801B33F4
  c->r[6]=0u+0x00000000u; // 801B33F8
  c->lr=0x801B3400u; f_802E041C(c); // 801B33FC
L_801B3400:;
  c->r[26]=0u+0x80690000u; // 801B3400
  c->r[3]=c->r[1]+0x00000070u; // 801B3404
  c->r[26]=c->r[26]+0x00003960u; // 801B3408
  c->r[4]=c->r[26]+0x000000DCu; // 801B340C
  c->lr=0x801B3414u; f_803B37C0(c); // 801B3410
  c->r[3]=c->r[28]|c->r[28]; // 801B3414
  c->r[4]=c->r[29]|c->r[29]; // 801B3418
  c->r[5]=c->r[1]+0x00000070u; // 801B341C
  c->lr=0x801B3424u; f_801B3EE0(c); // 801B3420
  c->r[27]=0u+0x00000000u; // 801B3424
  W8(c->r[1]+0x00000038u,c->r[27]); // 801B3428
  c->r[3]=c->r[28]|c->r[28]; // 801B342C
  c->r[24]=c->r[1]+0x00000038u; // 801B3430
  c->r[4]=c->r[1]+0x00000070u; // 801B3434
  c->lr=0x801B343Cu; f_802DF854(c); // 801B3438
  c->r[25]=c->r[3]|c->r[3]; // 801B343C
  c->r[3]=c->r[24]|c->r[24]; // 801B3440
  c->lr=0x801B3448u; f_8012556C(c); // 801B3444
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801B3448
  c->r[4]=c->r[25]|c->r[25]; // 801B344C
  c->r[0]=cntlz(c->r[0]); // 801B3450
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B3454
  c->lr=0x801B345Cu; f_80125594(c); // 801B3458
  c->r[4]=c->r[26]+0x000000E4u; // 801B345C
  c->r[3]=c->r[1]+0x00000070u; // 801B3460
  c->lr=0x801B3468u; f_803B37C0(c); // 801B3464
  c->r[3]=c->r[28]|c->r[28]; // 801B3468
  c->r[4]=c->r[29]|c->r[29]; // 801B346C
  c->r[5]=c->r[1]+0x00000070u; // 801B3470
  c->lr=0x801B3478u; f_801B3EE0(c); // 801B3474
  W8(c->r[1]+0x00000034u,c->r[27]); // 801B3478
  c->r[3]=c->r[28]|c->r[28]; // 801B347C
  c->r[24]=c->r[1]+0x00000034u; // 801B3480
  c->r[4]=c->r[1]+0x00000070u; // 801B3484
  c->lr=0x801B348Cu; f_802DF854(c); // 801B3488
  c->r[25]=c->r[3]|c->r[3]; // 801B348C
  c->r[3]=c->r[24]|c->r[24]; // 801B3490
  c->lr=0x801B3498u; f_8012556C(c); // 801B3494
  c->r[0]=cntlz(c->r[30]); // 801B3498
  c->r[4]=c->r[25]|c->r[25]; // 801B349C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B34A0
  c->lr=0x801B34A8u; f_80125594(c); // 801B34A4
  c->r[4]=c->r[26]+0x000000ECu; // 801B34A8
  c->r[3]=c->r[1]+0x00000070u; // 801B34AC
  c->lr=0x801B34B4u; f_803B37C0(c); // 801B34B0
  c->r[3]=c->r[28]|c->r[28]; // 801B34B4
  c->r[4]=c->r[29]|c->r[29]; // 801B34B8
  c->r[5]=c->r[1]+0x00000070u; // 801B34BC
  c->lr=0x801B34C4u; f_801B3EE0(c); // 801B34C0
  cmps(c,0,(int32_t)c->r[30],3); // 801B34C4
  if (crb(c,2)) { goto L_801B34D4; } // 801B34C8
  cmps(c,0,(int32_t)c->r[30],4); // 801B34CC
  if (!crb(c,2)) { goto L_801B34D8; } // 801B34D0
L_801B34D4:;
  c->r[27]=0u+0x00000001u; // 801B34D4
L_801B34D8:;
  c->r[26]=0u+0x00000000u; // 801B34D8
  W8(c->r[1]+0x00000030u,c->r[26]); // 801B34DC
  c->r[3]=c->r[28]|c->r[28]; // 801B34E0
  c->r[24]=c->r[1]+0x00000030u; // 801B34E4
  c->r[4]=c->r[1]+0x00000070u; // 801B34E8
  c->lr=0x801B34F0u; f_802DF854(c); // 801B34EC
  c->r[25]=c->r[3]|c->r[3]; // 801B34F0
  c->r[3]=c->r[24]|c->r[24]; // 801B34F4
  c->lr=0x801B34FCu; f_8012556C(c); // 801B34F8
  c->r[4]=c->r[25]|c->r[25]; // 801B34FC
  c->r[5]=c->r[27]|c->r[27]; // 801B3500
  c->lr=0x801B3508u; f_80125594(c); // 801B3504
  c->r[4]=0u+0x80690000u; // 801B3508
  c->r[3]=c->r[1]+0x00000070u; // 801B350C
  c->r[4]=c->r[4]+0x00003960u; // 801B3510
  c->r[4]=c->r[4]+0x000000ECu; // 801B3514
  c->lr=0x801B351Cu; f_803B37C0(c); // 801B3518
  c->r[3]=c->r[28]|c->r[28]; // 801B351C
  c->r[4]=c->r[29]|c->r[29]; // 801B3520
  c->r[5]=c->r[1]+0x00000070u; // 801B3524
  c->lr=0x801B352Cu; f_801B3EE0(c); // 801B3528
  cmps(c,0,(int32_t)c->r[30],3); // 801B352C
  if (crb(c,2)) { goto L_801B353C; } // 801B3530
  cmps(c,0,(int32_t)c->r[30],4); // 801B3534
  if (!crb(c,2)) { goto L_801B3540; } // 801B3538
L_801B353C:;
  c->r[26]=0u+0x00000001u; // 801B353C
L_801B3540:;
  c->r[27]=0u+0x00000000u; // 801B3540
  W8(c->r[1]+0x0000002Cu,c->r[27]); // 801B3544
  c->r[3]=c->r[28]|c->r[28]; // 801B3548
  c->r[24]=c->r[1]+0x0000002Cu; // 801B354C
  c->r[4]=c->r[1]+0x00000070u; // 801B3550
  c->lr=0x801B3558u; f_802DF854(c); // 801B3554
  c->r[25]=c->r[3]|c->r[3]; // 801B3558
  c->r[3]=c->r[24]|c->r[24]; // 801B355C
  c->lr=0x801B3564u; f_8012556C(c); // 801B3560
  c->r[4]=c->r[25]|c->r[25]; // 801B3564
  c->r[5]=c->r[26]|c->r[26]; // 801B3568
  c->lr=0x801B3570u; f_80125594(c); // 801B356C
  cmps(c,0,(int32_t)c->r[30],4); // 801B3570
  if (!crb(c,2)) { goto L_801B35EC; } // 801B3574
  c->r[25]=0u+0x80690000u; // 801B3578
  c->r[3]=c->r[1]+0x00000070u; // 801B357C
  c->r[25]=c->r[25]+0x00003960u; // 801B3580
  c->r[5]=c->r[29]+0x00000001u; // 801B3584
  c->r[4]=c->r[25]+0x000000F4u; // 801B3588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B358C
  c->lr=0x801B3594u; f_803B1FC8(c); // 801B3590
  c->r[3]=c->r[28]|c->r[28]; // 801B3594
  c->r[4]=c->r[1]+0x00000070u; // 801B3598
  c->lr=0x801B35A0u; f_802DF854(c); // 801B359C
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B35A0
  c->r[5]=c->r[3]|c->r[3]; // 801B35A4
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B35A8
  c->r[3]=c->r[28]|c->r[28]; // 801B35AC
  c->lr=0x801B35B4u; f_802E02F0(c); // 801B35B0
  c->r[3]=c->r[1]+0x00000070u; // 801B35B4
  c->r[4]=c->r[25]+0x00000102u; // 801B35B8
  c->r[5]=c->r[29]+0x00000001u; // 801B35BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B35C0
  c->lr=0x801B35C8u; f_803B1FC8(c); // 801B35C4
  c->r[3]=c->r[28]|c->r[28]; // 801B35C8
  c->r[4]=c->r[1]+0x00000070u; // 801B35CC
  c->lr=0x801B35D4u; f_802DF854(c); // 801B35D0
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B35D4
  c->r[5]=c->r[3]|c->r[3]; // 801B35D8
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B35DC
  c->r[3]=c->r[28]|c->r[28]; // 801B35E0
  c->lr=0x801B35E8u; f_802E02F0(c); // 801B35E4
  goto L_801B36F0; // 801B35E8
L_801B35EC:;
  cmps(c,0,(int32_t)c->r[30],3); // 801B35EC
  if (!crb(c,2)) { goto L_801B3668; } // 801B35F0
  c->r[25]=0u+0x80690000u; // 801B35F4
  c->r[3]=c->r[1]+0x00000070u; // 801B35F8
  c->r[25]=c->r[25]+0x00003960u; // 801B35FC
  c->r[5]=c->r[29]+0x00000001u; // 801B3600
  c->r[4]=c->r[25]+0x000000F4u; // 801B3604
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3608
  c->lr=0x801B3610u; f_803B1FC8(c); // 801B360C
  c->r[3]=c->r[28]|c->r[28]; // 801B3610
  c->r[4]=c->r[1]+0x00000070u; // 801B3614
  c->lr=0x801B361Cu; f_802DF854(c); // 801B3618
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B361C
  c->r[5]=c->r[3]|c->r[3]; // 801B3620
  c->r[3]=c->r[28]|c->r[28]; // 801B3624
  c->r[6]=0u+0x00000000u; // 801B3628
  c->lr=0x801B3630u; f_802E041C(c); // 801B362C
  c->r[3]=c->r[1]+0x00000070u; // 801B3630
  c->r[4]=c->r[25]+0x00000102u; // 801B3634
  c->r[5]=c->r[29]+0x00000001u; // 801B3638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B363C
  c->lr=0x801B3644u; f_803B1FC8(c); // 801B3640
  c->r[3]=c->r[28]|c->r[28]; // 801B3644
  c->r[4]=c->r[1]+0x00000070u; // 801B3648
  c->lr=0x801B3650u; f_802DF854(c); // 801B364C
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B3650
  c->r[5]=c->r[3]|c->r[3]; // 801B3654
  c->r[3]=c->r[28]|c->r[28]; // 801B3658
  c->r[6]=0u+0x00000000u; // 801B365C
  c->lr=0x801B3664u; f_802E041C(c); // 801B3660
  goto L_801B36F0; // 801B3664
L_801B3668:;
  c->r[26]=0u+0x80690000u; // 801B3668
  c->r[3]=c->r[1]+0x00000070u; // 801B366C
  c->r[26]=c->r[26]+0x00003960u; // 801B3670
  c->r[5]=c->r[29]+0x00000001u; // 801B3674
  c->r[4]=c->r[26]+0x000000F4u; // 801B3678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B367C
  c->lr=0x801B3684u; f_803B1FC8(c); // 801B3680
  W8(c->r[1]+0x00000028u,c->r[27]); // 801B3684
  c->r[3]=c->r[28]|c->r[28]; // 801B3688
  c->r[24]=c->r[1]+0x00000028u; // 801B368C
  c->r[4]=c->r[1]+0x00000070u; // 801B3690
  c->lr=0x801B3698u; f_802DF854(c); // 801B3694
  c->r[25]=c->r[3]|c->r[3]; // 801B3698
  c->r[3]=c->r[24]|c->r[24]; // 801B369C
  c->lr=0x801B36A4u; f_8012556C(c); // 801B36A0
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B36A4
  c->r[5]=c->r[25]|c->r[25]; // 801B36A8
  c->lr=0x801B36B0u; f_801253BC(c); // 801B36AC
  c->r[3]=c->r[1]+0x00000070u; // 801B36B0
  c->r[4]=c->r[26]+0x00000102u; // 801B36B4
  c->r[5]=c->r[29]+0x00000001u; // 801B36B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B36BC
  c->lr=0x801B36C4u; f_803B1FC8(c); // 801B36C0
  W8(c->r[1]+0x00000024u,c->r[27]); // 801B36C4
  c->r[3]=c->r[28]|c->r[28]; // 801B36C8
  c->r[24]=c->r[1]+0x00000024u; // 801B36CC
  c->r[4]=c->r[1]+0x00000070u; // 801B36D0
  c->lr=0x801B36D8u; f_802DF854(c); // 801B36D4
  c->r[25]=c->r[3]|c->r[3]; // 801B36D8
  c->r[3]=c->r[24]|c->r[24]; // 801B36DC
  c->lr=0x801B36E4u; f_8012556C(c); // 801B36E0
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801B36E4
  c->r[5]=c->r[25]|c->r[25]; // 801B36E8
  c->lr=0x801B36F0u; f_801253BC(c); // 801B36EC
L_801B36F0:;
  c->r[4]=0u+0x80690000u; // 801B36F0
  c->r[3]=c->r[1]+0x00000070u; // 801B36F4
  c->r[4]=c->r[4]+0x00003960u; // 801B36F8
  c->r[4]=c->r[4]+0x00000110u; // 801B36FC
  c->lr=0x801B3704u; f_803B37C0(c); // 801B3700
  c->r[3]=c->r[28]|c->r[28]; // 801B3704
  c->r[4]=c->r[29]|c->r[29]; // 801B3708
  c->r[5]=c->r[1]+0x00000070u; // 801B370C
  c->lr=0x801B3714u; f_801B3EE0(c); // 801B3710
  c->r[0]=0u+0x00000000u; // 801B3714
  W8(c->r[1]+0x00000020u,c->r[0]); // 801B3718
  c->r[3]=c->r[28]|c->r[28]; // 801B371C
  c->r[24]=c->r[1]+0x00000020u; // 801B3720
  c->r[4]=c->r[1]+0x00000070u; // 801B3724
  c->lr=0x801B372Cu; f_802DF854(c); // 801B3728
  c->r[25]=c->r[3]|c->r[3]; // 801B372C
  c->r[3]=c->r[24]|c->r[24]; // 801B3730
  c->lr=0x801B3738u; f_8012556C(c); // 801B3734
  c->r[0]=c->r[30]+0xFFFFFFFBu; // 801B3738
  c->r[4]=c->r[25]|c->r[25]; // 801B373C
  c->r[0]=cntlz(c->r[0]); // 801B3740
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B3744
  c->lr=0x801B374Cu; f_80125594(c); // 801B3748
  cmps(c,0,(int32_t)c->r[30],5); // 801B374C
  if (!crb(c,2)) { goto L_801B3778; } // 801B3750
  c->r[3]=c->r[28]|c->r[28]; // 801B3754
  c->r[4]=c->r[1]+0x00000070u; // 801B3758
  c->lr=0x801B3760u; f_802DF854(c); // 801B375C
  c->r[4]=R32(c->r[28]+0x000000ACu); // 801B3760
  c->r[5]=c->r[3]|c->r[3]; // 801B3764
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3768
  c->r[3]=c->r[28]|c->r[28]; // 801B376C
  c->lr=0x801B3774u; f_802E02F0(c); // 801B3770
  goto L_801B3798; // 801B3774
L_801B3778:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3778
  c->r[4]=c->r[1]+0x00000070u; // 801B377C
  c->lr=0x801B3784u; f_802DF854(c); // 801B3780
  c->r[4]=R32(c->r[28]+0x000000ACu); // 801B3784
  c->r[5]=c->r[3]|c->r[3]; // 801B3788
  c->r[3]=c->r[28]|c->r[28]; // 801B378C
  c->r[6]=0u+0x00000000u; // 801B3790
  c->lr=0x801B3798u; f_802E041C(c); // 801B3794
L_801B3798:;
  c->r[27]=0u+0x80690000u; // 801B3798
  c->r[3]=c->r[1]+0x00000070u; // 801B379C
  c->r[27]=c->r[27]+0x00003960u; // 801B37A0
  c->r[4]=c->r[27]+0x00000118u; // 801B37A4
  c->lr=0x801B37ACu; f_803B37C0(c); // 801B37A8
  c->r[3]=c->r[28]|c->r[28]; // 801B37AC
  c->r[4]=c->r[29]|c->r[29]; // 801B37B0
  c->r[5]=c->r[1]+0x00000070u; // 801B37B4
  c->lr=0x801B37BCu; f_801B3EE0(c); // 801B37B8
  c->r[26]=0u+0x00000000u; // 801B37BC
  W8(c->r[1]+0x0000001Cu,c->r[26]); // 801B37C0
  c->r[3]=c->r[28]|c->r[28]; // 801B37C4
  c->r[24]=c->r[1]+0x0000001Cu; // 801B37C8
  c->r[4]=c->r[1]+0x00000070u; // 801B37CC
  c->lr=0x801B37D4u; f_802DF854(c); // 801B37D0
  c->r[25]=c->r[3]|c->r[3]; // 801B37D4
  c->r[3]=c->r[24]|c->r[24]; // 801B37D8
  c->lr=0x801B37E0u; f_8012556C(c); // 801B37DC
  c->r[0]=c->r[30]+0xFFFFFFFAu; // 801B37E0
  c->r[4]=c->r[25]|c->r[25]; // 801B37E4
  c->r[0]=cntlz(c->r[0]); // 801B37E8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B37EC
  c->lr=0x801B37F4u; f_80125594(c); // 801B37F0
  cmps(c,0,(int32_t)c->r[30],6); // 801B37F4
  if (!crb(c,2)) { goto L_801B3868; } // 801B37F8
  c->r[3]=c->r[1]+0x00000070u; // 801B37FC
  c->r[4]=c->r[27]+0x00000120u; // 801B3800
  c->r[5]=c->r[29]+0x00000001u; // 801B3804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3808
  c->lr=0x801B3810u; f_803B1FC8(c); // 801B380C
  c->r[3]=c->r[28]|c->r[28]; // 801B3810
  c->r[4]=c->r[1]+0x00000070u; // 801B3814
  c->lr=0x801B381Cu; f_802DF854(c); // 801B3818
  c->r[4]=R32(c->r[28]+0x000000B4u); // 801B381C
  c->r[5]=c->r[3]|c->r[3]; // 801B3820
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3824
  c->r[3]=c->r[28]|c->r[28]; // 801B3828
  c->lr=0x801B3830u; f_802E02F0(c); // 801B382C
  c->r[3]=c->r[1]+0x00000070u; // 801B3830
  c->r[4]=c->r[27]+0x00000132u; // 801B3834
  c->r[5]=c->r[29]+0x00000001u; // 801B3838
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B383C
  c->lr=0x801B3844u; f_803B1FC8(c); // 801B3840
  c->r[3]=c->r[28]|c->r[28]; // 801B3844
  c->r[4]=c->r[1]+0x00000070u; // 801B3848
  c->lr=0x801B3850u; f_802DF854(c); // 801B384C
  c->r[4]=R32(c->r[28]+0x000000B4u); // 801B3850
  c->r[5]=c->r[3]|c->r[3]; // 801B3854
  {uint32_t ea=c->r[2]+0xFFFFC684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3858
  c->r[3]=c->r[28]|c->r[28]; // 801B385C
  c->lr=0x801B3864u; f_802E02F0(c); // 801B3860
  goto L_801B38E8; // 801B3864
L_801B3868:;
  c->r[3]=c->r[1]+0x00000070u; // 801B3868
  c->r[4]=c->r[27]+0x00000120u; // 801B386C
  c->r[5]=c->r[29]+0x00000001u; // 801B3870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3874
  c->lr=0x801B387Cu; f_803B1FC8(c); // 801B3878
  W8(c->r[1]+0x00000018u,c->r[26]); // 801B387C
  c->r[3]=c->r[28]|c->r[28]; // 801B3880
  c->r[24]=c->r[1]+0x00000018u; // 801B3884
  c->r[4]=c->r[1]+0x00000070u; // 801B3888
  c->lr=0x801B3890u; f_802DF854(c); // 801B388C
  c->r[25]=c->r[3]|c->r[3]; // 801B3890
  c->r[3]=c->r[24]|c->r[24]; // 801B3894
  c->lr=0x801B389Cu; f_8012556C(c); // 801B3898
  c->r[4]=R32(c->r[28]+0x000000B4u); // 801B389C
  c->r[5]=c->r[25]|c->r[25]; // 801B38A0
  c->lr=0x801B38A8u; f_801253BC(c); // 801B38A4
  c->r[3]=c->r[1]+0x00000070u; // 801B38A8
  c->r[4]=c->r[27]+0x00000132u; // 801B38AC
  c->r[5]=c->r[29]+0x00000001u; // 801B38B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B38B4
  c->lr=0x801B38BCu; f_803B1FC8(c); // 801B38B8
  W8(c->r[1]+0x00000014u,c->r[26]); // 801B38BC
  c->r[3]=c->r[28]|c->r[28]; // 801B38C0
  c->r[24]=c->r[1]+0x00000014u; // 801B38C4
  c->r[4]=c->r[1]+0x00000070u; // 801B38C8
  c->lr=0x801B38D0u; f_802DF854(c); // 801B38CC
  c->r[25]=c->r[3]|c->r[3]; // 801B38D0
  c->r[3]=c->r[24]|c->r[24]; // 801B38D4
  c->lr=0x801B38DCu; f_8012556C(c); // 801B38D8
  c->r[4]=R32(c->r[28]+0x000000B4u); // 801B38DC
  c->r[5]=c->r[25]|c->r[25]; // 801B38E0
  c->lr=0x801B38E8u; f_801253BC(c); // 801B38E4
L_801B38E8:;
  c->f[1]=c->f[31]; // 801B38E8
  c->r[3]=c->r[28]|c->r[28]; // 801B38EC
  c->r[4]=c->r[29]|c->r[29]; // 801B38F0
  c->r[5]=c->r[30]|c->r[30]; // 801B38F4
  c->lr=0x801B38FCu; f_801B3CF0(c); // 801B38F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B38FC
  c->r[25]=0u+0x80690000u; // 801B3900
  {uint32_t ea=c->r[2]+0xFFFFC688u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B3904
  c->f[31]=c->f[1]; // 801B3908
  {uint32_t ea=c->r[2]+0xFFFFC68Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B390C
  c->r[25]=c->r[25]+0x00003960u; // 801B3910
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3914
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 801B3918
  c->r[4]=c->r[25]+0x00000144u; // 801B391C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801B3920
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B3924
  c->r[3]=c->r[1]+0x00000070u; // 801B3928
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801B392C
  c->lr=0x801B3934u; f_803B37C0(c); // 801B3930
  c->r[3]=c->r[28]|c->r[28]; // 801B3934
  c->r[4]=c->r[29]|c->r[29]; // 801B3938
  c->r[5]=c->r[1]+0x00000070u; // 801B393C
  c->lr=0x801B3944u; f_801B3EE0(c); // 801B3940
  c->r[26]=0u+0x00000000u; // 801B3944
  W8(c->r[1]+0x00000010u,c->r[26]); // 801B3948
  c->r[3]=c->r[28]|c->r[28]; // 801B394C
  c->r[24]=c->r[1]+0x00000010u; // 801B3950
  c->r[4]=c->r[1]+0x00000070u; // 801B3954
  c->lr=0x801B395Cu; f_802DF854(c); // 801B3958
  c->r[27]=c->r[3]|c->r[3]; // 801B395C
  c->r[3]=c->r[24]|c->r[24]; // 801B3960
  c->lr=0x801B3968u; f_8012556C(c); // 801B3964
  c->r[4]=c->r[27]|c->r[27]; // 801B3968
  c->r[5]=0u+0x00000001u; // 801B396C
  c->lr=0x801B3974u; f_80125594(c); // 801B3970
  c->r[3]=c->r[28]|c->r[28]; // 801B3974
  c->r[4]=c->r[1]+0x00000070u; // 801B3978
  c->lr=0x801B3980u; f_802DF854(c); // 801B397C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 801B3980
  c->r[4]=c->r[3]|c->r[3]; // 801B3984
  c->r[3]=c->r[28]|c->r[28]; // 801B3988
  c->r[5]=c->r[1]+0x00000040u; // 801B398C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 801B3990
  c->r[0]=R32(c->r[1]+0x00000094u); // 801B3994
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801B3998
  c->lr=0x801B39A0u; f_802DF3E8(c); // 801B399C
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 801B39A0
  c->r[3]=c->r[28]|c->r[28]; // 801B39A4
  c->r[24]=c->r[1]+0x0000000Cu; // 801B39A8
  c->r[4]=c->r[1]+0x00000070u; // 801B39AC
  c->lr=0x801B39B4u; f_802DF854(c); // 801B39B0
  c->r[27]=c->r[3]|c->r[3]; // 801B39B4
  c->r[3]=c->r[24]|c->r[24]; // 801B39B8
  c->lr=0x801B39C0u; f_8012556C(c); // 801B39BC
  c->r[4]=c->r[27]|c->r[27]; // 801B39C0
  c->r[5]=0u+0x00000000u; // 801B39C4
  c->lr=0x801B39CCu; f_80125594(c); // 801B39C8
  c->r[4]=c->r[25]+0x0000014Au; // 801B39CC
  c->r[3]=c->r[1]+0x00000070u; // 801B39D0
  c->lr=0x801B39D8u; f_803B37C0(c); // 801B39D4
  c->r[3]=c->r[28]|c->r[28]; // 801B39D8
  c->r[4]=c->r[29]|c->r[29]; // 801B39DC
  c->r[5]=c->r[1]+0x00000070u; // 801B39E0
  c->lr=0x801B39E8u; f_801B3EE0(c); // 801B39E4
  W8(c->r[1]+0x00000008u,c->r[26]); // 801B39E8
  c->r[3]=c->r[28]|c->r[28]; // 801B39EC
  c->r[24]=c->r[1]+0x00000008u; // 801B39F0
  c->r[4]=c->r[1]+0x00000070u; // 801B39F4
  c->lr=0x801B39FCu; f_802DF854(c); // 801B39F8
  c->r[28]=c->r[3]|c->r[3]; // 801B39FC
  c->r[3]=c->r[24]|c->r[24]; // 801B3A00
  c->lr=0x801B3A08u; f_8012556C(c); // 801B3A04
  c->r[4]=c->r[28]|c->r[28]; // 801B3A08
  c->r[5]=0u+0x00000000u; // 801B3A0C
  c->lr=0x801B3A14u; f_80125594(c); // 801B3A10
  W32(c->r[31]+0x000000A0u,c->r[30]); // 801B3A14
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801B3A18
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801B3A1C
  c->r[11]=c->r[1]+0x000000C0u; // 801B3A20
  c->lr=0x801B3A28u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3A24
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801B3A28
  c->lr=c->r[0]; // 801B3A2C
  c->r[1]=c->r[1]+0x000000D0u; // 801B3A30
  return; // 801B3A34
}

// fn_801B3A38
void f_801B3A38(Ctx* __restrict c) {
  trace_call(0x801B3A38u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3A38
  c->r[0]=c->lr; // 801B3A3C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B3A40
  c->r[11]=c->r[1]+0x00000060u; // 801B3A44
  c->lr=0x801B3A4Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3A48
  c->r[8]=0u+0x80690000u; // 801B3A4C
  c->r[26]=c->r[5]|c->r[5]; // 801B3A50
  c->r[0]=0u+0x00000004u; // 801B3A54
  c->r[29]=c->r[3]|c->r[3]; // 801B3A58
  c->r[8]=c->r[8]+0x00003940u; // 801B3A5C
  c->r[27]=c->r[4]|c->r[4]; // 801B3A60
  c->r[30]=c->r[6]|c->r[6]; // 801B3A64
  c->r[31]=c->r[7]|c->r[7]; // 801B3A68
  c->r[5]=c->r[1]+0x00000024u; // 801B3A6C
  c->r[4]=c->r[8]+0xFFFFFFFCu; // 801B3A70
  c->ctr=c->r[0]; // 801B3A74
L_801B3A78:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B3A78
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B3A7C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B3A80
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B3A84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3A78; } // 801B3A88
  c->r[3]=c->r[29]|c->r[29]; // 801B3A8C
  c->r[4]=c->r[27]|c->r[27]; // 801B3A90
  c->r[5]=c->r[1]+0x00000028u; // 801B3A94
  c->lr=0x801B3A9Cu; f_801B3EE0(c); // 801B3A98
  cmps(c,0,(int32_t)c->r[26],2); // 801B3A9C
  if (crb(c,2)) { goto L_801B3AC0; } // 801B3AA0
  cmps(c,0,(int32_t)c->r[26],4); // 801B3AA4
  if (crb(c,2)) { goto L_801B3B30; } // 801B3AA8
  cmps(c,0,(int32_t)c->r[26],5); // 801B3AAC
  if (crb(c,2)) { goto L_801B3BBC; } // 801B3AB0
  cmps(c,0,(int32_t)c->r[26],6); // 801B3AB4
  if (crb(c,2)) { goto L_801B3C50; } // 801B3AB8
  goto L_801B3CD8; // 801B3ABC
L_801B3AC0:;
  c->r[3]=c->r[29]|c->r[29]; // 801B3AC0
  c->r[4]=c->r[1]+0x00000028u; // 801B3AC4
  c->lr=0x801B3ACCu; f_802DF854(c); // 801B3AC8
  c->r[27]=R32(c->r[29]+0x000000A8u); // 801B3ACC
  c->r[28]=0u+0x00000000u; // 801B3AD0
  c->r[26]=c->r[3]|c->r[3]; // 801B3AD4
  c->r[3]=c->r[1]+0x00000024u; // 801B3AD8
  W8(c->r[1]+0x00000024u,c->r[28]); // 801B3ADC
  c->lr=0x801B3AE4u; f_8012556C(c); // 801B3AE0
  c->r[4]=c->r[27]|c->r[27]; // 801B3AE4
  c->r[5]=c->r[26]|c->r[26]; // 801B3AE8
  c->lr=0x801B3AF0u; f_801254F8(c); // 801B3AEC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3AF0
  c->r[3]=c->r[29]|c->r[29]; // 801B3AF4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801B3AF8
  c->r[4]=c->r[1]+0x00000028u; // 801B3AFC
  c->lr=0x801B3B04u; f_802DF854(c); // 801B3B00
  c->r[26]=R32(c->r[29]+0x000000A8u); // 801B3B04
  c->r[27]=c->r[3]|c->r[3]; // 801B3B08
  c->r[3]=c->r[1]+0x00000020u; // 801B3B0C
  W8(c->r[1]+0x00000020u,c->r[28]); // 801B3B10
  c->lr=0x801B3B18u; f_8012556C(c); // 801B3B14
  c->r[4]=c->r[26]|c->r[26]; // 801B3B18
  c->r[5]=c->r[27]|c->r[27]; // 801B3B1C
  c->lr=0x801B3B24u; f_801254F8(c); // 801B3B20
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3B24
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B3B28
  goto L_801B3CD8; // 801B3B2C
L_801B3B30:;
  c->r[4]=0u+0x80690000u; // 801B3B30
  c->r[3]=c->r[1]+0x00000028u; // 801B3B34
  c->r[4]=c->r[4]+0x00003960u; // 801B3B38
  c->r[5]=c->r[27]+0x00000001u; // 801B3B3C
  c->r[4]=c->r[4]+0x000000F4u; // 801B3B40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3B44
  c->lr=0x801B3B4Cu; f_803B1FC8(c); // 801B3B48
  c->r[3]=c->r[29]|c->r[29]; // 801B3B4C
  c->r[4]=c->r[1]+0x00000028u; // 801B3B50
  c->lr=0x801B3B58u; f_802DF854(c); // 801B3B54
  c->r[26]=R32(c->r[29]+0x000000B0u); // 801B3B58
  c->r[28]=0u+0x00000000u; // 801B3B5C
  c->r[27]=c->r[3]|c->r[3]; // 801B3B60
  c->r[3]=c->r[1]+0x0000001Cu; // 801B3B64
  W8(c->r[1]+0x0000001Cu,c->r[28]); // 801B3B68
  c->lr=0x801B3B70u; f_8012556C(c); // 801B3B6C
  c->r[4]=c->r[26]|c->r[26]; // 801B3B70
  c->r[5]=c->r[27]|c->r[27]; // 801B3B74
  c->lr=0x801B3B7Cu; f_801254F8(c); // 801B3B78
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3B7C
  c->r[3]=c->r[29]|c->r[29]; // 801B3B80
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801B3B84
  c->r[4]=c->r[1]+0x00000028u; // 801B3B88
  c->lr=0x801B3B90u; f_802DF854(c); // 801B3B8C
  c->r[26]=R32(c->r[29]+0x000000B0u); // 801B3B90
  c->r[27]=c->r[3]|c->r[3]; // 801B3B94
  c->r[3]=c->r[1]+0x00000018u; // 801B3B98
  W8(c->r[1]+0x00000018u,c->r[28]); // 801B3B9C
  c->lr=0x801B3BA4u; f_8012556C(c); // 801B3BA0
  c->r[4]=c->r[26]|c->r[26]; // 801B3BA4
  c->r[5]=c->r[27]|c->r[27]; // 801B3BA8
  c->lr=0x801B3BB0u; f_801254F8(c); // 801B3BAC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3BB0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B3BB4
  goto L_801B3CD8; // 801B3BB8
L_801B3BBC:;
  c->r[4]=0u+0x80690000u; // 801B3BBC
  c->r[3]=c->r[1]+0x00000028u; // 801B3BC0
  c->r[4]=c->r[4]+0x00003960u; // 801B3BC4
  c->r[4]=c->r[4]+0x00000110u; // 801B3BC8
  c->lr=0x801B3BD0u; f_803B37C0(c); // 801B3BCC
  c->r[3]=c->r[29]|c->r[29]; // 801B3BD0
  c->r[4]=c->r[27]|c->r[27]; // 801B3BD4
  c->r[5]=c->r[1]+0x00000028u; // 801B3BD8
  c->lr=0x801B3BE0u; f_801B3EE0(c); // 801B3BDC
  c->r[3]=c->r[29]|c->r[29]; // 801B3BE0
  c->r[4]=c->r[1]+0x00000028u; // 801B3BE4
  c->lr=0x801B3BECu; f_802DF854(c); // 801B3BE8
  c->r[26]=R32(c->r[29]+0x000000ACu); // 801B3BEC
  c->r[28]=0u+0x00000000u; // 801B3BF0
  c->r[27]=c->r[3]|c->r[3]; // 801B3BF4
  c->r[3]=c->r[1]+0x00000014u; // 801B3BF8
  W8(c->r[1]+0x00000014u,c->r[28]); // 801B3BFC
  c->lr=0x801B3C04u; f_8012556C(c); // 801B3C00
  c->r[4]=c->r[26]|c->r[26]; // 801B3C04
  c->r[5]=c->r[27]|c->r[27]; // 801B3C08
  c->lr=0x801B3C10u; f_801254F8(c); // 801B3C0C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3C10
  c->r[3]=c->r[29]|c->r[29]; // 801B3C14
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801B3C18
  c->r[4]=c->r[1]+0x00000028u; // 801B3C1C
  c->lr=0x801B3C24u; f_802DF854(c); // 801B3C20
  c->r[26]=R32(c->r[29]+0x000000ACu); // 801B3C24
  c->r[27]=c->r[3]|c->r[3]; // 801B3C28
  c->r[3]=c->r[1]+0x00000010u; // 801B3C2C
  W8(c->r[1]+0x00000010u,c->r[28]); // 801B3C30
  c->lr=0x801B3C38u; f_8012556C(c); // 801B3C34
  c->r[4]=c->r[26]|c->r[26]; // 801B3C38
  c->r[5]=c->r[27]|c->r[27]; // 801B3C3C
  c->lr=0x801B3C44u; f_801254F8(c); // 801B3C40
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3C44
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B3C48
  goto L_801B3CD8; // 801B3C4C
L_801B3C50:;
  c->r[4]=0u+0x80690000u; // 801B3C50
  c->r[3]=c->r[1]+0x00000028u; // 801B3C54
  c->r[4]=c->r[4]+0x00003960u; // 801B3C58
  c->r[5]=c->r[27]+0x00000001u; // 801B3C5C
  c->r[4]=c->r[4]+0x00000132u; // 801B3C60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3C64
  c->lr=0x801B3C6Cu; f_803B1FC8(c); // 801B3C68
  c->r[3]=c->r[29]|c->r[29]; // 801B3C6C
  c->r[4]=c->r[1]+0x00000028u; // 801B3C70
  c->lr=0x801B3C78u; f_802DF854(c); // 801B3C74
  c->r[26]=R32(c->r[29]+0x000000B4u); // 801B3C78
  c->r[28]=0u+0x00000000u; // 801B3C7C
  c->r[27]=c->r[3]|c->r[3]; // 801B3C80
  c->r[3]=c->r[1]+0x0000000Cu; // 801B3C84
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 801B3C88
  c->lr=0x801B3C90u; f_8012556C(c); // 801B3C8C
  c->r[4]=c->r[26]|c->r[26]; // 801B3C90
  c->r[5]=c->r[27]|c->r[27]; // 801B3C94
  c->lr=0x801B3C9Cu; f_801254F8(c); // 801B3C98
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3C9C
  c->r[3]=c->r[29]|c->r[29]; // 801B3CA0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801B3CA4
  c->r[4]=c->r[1]+0x00000028u; // 801B3CA8
  c->lr=0x801B3CB0u; f_802DF854(c); // 801B3CAC
  c->r[26]=R32(c->r[29]+0x000000B4u); // 801B3CB0
  c->r[27]=c->r[3]|c->r[3]; // 801B3CB4
  c->r[3]=c->r[1]+0x00000008u; // 801B3CB8
  W8(c->r[1]+0x00000008u,c->r[28]); // 801B3CBC
  c->lr=0x801B3CC4u; f_8012556C(c); // 801B3CC0
  c->r[4]=c->r[26]|c->r[26]; // 801B3CC4
  c->r[5]=c->r[27]|c->r[27]; // 801B3CC8
  c->lr=0x801B3CD0u; f_801254F8(c); // 801B3CCC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3CD0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B3CD4
L_801B3CD8:;
  c->r[11]=c->r[1]+0x00000060u; // 801B3CD8
  c->lr=0x801B3CE0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3CDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B3CE0
  c->lr=c->r[0]; // 801B3CE4
  c->r[1]=c->r[1]+0x00000060u; // 801B3CE8
  return; // 801B3CEC
}

// fn_801B3CF0
void f_801B3CF0(Ctx* __restrict c) {
  trace_call(0x801B3CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3CF0
  c->r[0]=c->lr; // 801B3CF4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3CF8
  c->r[0]=0u+0x00000004u; // 801B3CFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801B3D00
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801B3D04
  c->f[31]=c->f[1]; // 801B3D08
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B3D0C
  c->r[31]=c->r[4]|c->r[4]; // 801B3D10
  c->r[4]=c->r[1]+0x0000000Cu; // 801B3D14
  W32(c->r[1]+0x00000038u,c->r[30]); // 801B3D18
  c->r[30]=c->r[3]|c->r[3]; // 801B3D1C
  c->r[3]=0u+0x00000000u; // 801B3D20
  c->ctr=c->r[0]; // 801B3D24
L_801B3D28:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801B3D28
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801B3D2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3D28; } // 801B3D30
  cmps(c,0,(int32_t)c->r[5],2); // 801B3D34
  if (!crb(c,2)) { goto L_801B3D64; } // 801B3D38
  c->r[4]=0u+0x80690000u; // 801B3D3C
  c->r[3]=c->r[1]+0x00000010u; // 801B3D40
  c->r[4]=c->r[4]+0x00003960u; // 801B3D44
  c->r[4]=c->r[4]+0x000000D4u; // 801B3D48
  c->lr=0x801B3D50u; f_803B37C0(c); // 801B3D4C
  c->r[3]=c->r[30]|c->r[30]; // 801B3D50
  c->r[4]=c->r[31]|c->r[31]; // 801B3D54
  c->r[5]=c->r[1]+0x00000010u; // 801B3D58
  c->lr=0x801B3D60u; f_801B3EE0(c); // 801B3D5C
  goto L_801B3E80; // 801B3D60
L_801B3D64:;
  cmps(c,0,(int32_t)c->r[5],1); // 801B3D64
  if (!crb(c,2)) { goto L_801B3D94; } // 801B3D68
  c->r[4]=0u+0x80690000u; // 801B3D6C
  c->r[3]=c->r[1]+0x00000010u; // 801B3D70
  c->r[4]=c->r[4]+0x00003960u; // 801B3D74
  c->r[4]=c->r[4]+0x000000DCu; // 801B3D78
  c->lr=0x801B3D80u; f_803B37C0(c); // 801B3D7C
  c->r[3]=c->r[30]|c->r[30]; // 801B3D80
  c->r[4]=c->r[31]|c->r[31]; // 801B3D84
  c->r[5]=c->r[1]+0x00000010u; // 801B3D88
  c->lr=0x801B3D90u; f_801B3EE0(c); // 801B3D8C
  goto L_801B3E80; // 801B3D90
L_801B3D94:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B3D94
  if (!crb(c,2)) { goto L_801B3DC4; } // 801B3D98
  c->r[4]=0u+0x80690000u; // 801B3D9C
  c->r[3]=c->r[1]+0x00000010u; // 801B3DA0
  c->r[4]=c->r[4]+0x00003960u; // 801B3DA4
  c->r[4]=c->r[4]+0x000000E4u; // 801B3DA8
  c->lr=0x801B3DB0u; f_803B37C0(c); // 801B3DAC
  c->r[3]=c->r[30]|c->r[30]; // 801B3DB0
  c->r[4]=c->r[31]|c->r[31]; // 801B3DB4
  c->r[5]=c->r[1]+0x00000010u; // 801B3DB8
  c->lr=0x801B3DC0u; f_801B3EE0(c); // 801B3DBC
  goto L_801B3E80; // 801B3DC0
L_801B3DC4:;
  cmps(c,0,(int32_t)c->r[5],3); // 801B3DC4
  if (!crb(c,2)) { goto L_801B3DF4; } // 801B3DC8
  c->r[4]=0u+0x80690000u; // 801B3DCC
  c->r[3]=c->r[1]+0x00000010u; // 801B3DD0
  c->r[4]=c->r[4]+0x00003960u; // 801B3DD4
  c->r[4]=c->r[4]+0x000000ECu; // 801B3DD8
  c->lr=0x801B3DE0u; f_803B37C0(c); // 801B3DDC
  c->r[3]=c->r[30]|c->r[30]; // 801B3DE0
  c->r[4]=c->r[31]|c->r[31]; // 801B3DE4
  c->r[5]=c->r[1]+0x00000010u; // 801B3DE8
  c->lr=0x801B3DF0u; f_801B3EE0(c); // 801B3DEC
  goto L_801B3E80; // 801B3DF0
L_801B3DF4:;
  cmps(c,0,(int32_t)c->r[5],4); // 801B3DF4
  if (!crb(c,2)) { goto L_801B3E24; } // 801B3DF8
  c->r[4]=0u+0x80690000u; // 801B3DFC
  c->r[3]=c->r[1]+0x00000010u; // 801B3E00
  c->r[4]=c->r[4]+0x00003960u; // 801B3E04
  c->r[4]=c->r[4]+0x000000ECu; // 801B3E08
  c->lr=0x801B3E10u; f_803B37C0(c); // 801B3E0C
  c->r[3]=c->r[30]|c->r[30]; // 801B3E10
  c->r[4]=c->r[31]|c->r[31]; // 801B3E14
  c->r[5]=c->r[1]+0x00000010u; // 801B3E18
  c->lr=0x801B3E20u; f_801B3EE0(c); // 801B3E1C
  goto L_801B3E80; // 801B3E20
L_801B3E24:;
  cmps(c,0,(int32_t)c->r[5],5); // 801B3E24
  if (!crb(c,2)) { goto L_801B3E54; } // 801B3E28
  c->r[4]=0u+0x80690000u; // 801B3E2C
  c->r[3]=c->r[1]+0x00000010u; // 801B3E30
  c->r[4]=c->r[4]+0x00003960u; // 801B3E34
  c->r[4]=c->r[4]+0x00000110u; // 801B3E38
  c->lr=0x801B3E40u; f_803B37C0(c); // 801B3E3C
  c->r[3]=c->r[30]|c->r[30]; // 801B3E40
  c->r[4]=c->r[31]|c->r[31]; // 801B3E44
  c->r[5]=c->r[1]+0x00000010u; // 801B3E48
  c->lr=0x801B3E50u; f_801B3EE0(c); // 801B3E4C
  goto L_801B3E80; // 801B3E50
L_801B3E54:;
  cmps(c,0,(int32_t)c->r[5],6); // 801B3E54
  if (!crb(c,2)) { goto L_801B3E80; } // 801B3E58
  c->r[4]=0u+0x80690000u; // 801B3E5C
  c->r[3]=c->r[1]+0x00000010u; // 801B3E60
  c->r[4]=c->r[4]+0x00003960u; // 801B3E64
  c->r[4]=c->r[4]+0x00000118u; // 801B3E68
  c->lr=0x801B3E70u; f_803B37C0(c); // 801B3E6C
  c->r[3]=c->r[30]|c->r[30]; // 801B3E70
  c->r[4]=c->r[31]|c->r[31]; // 801B3E74
  c->r[5]=c->r[1]+0x00000010u; // 801B3E78
  c->lr=0x801B3E80u; f_801B3EE0(c); // 801B3E7C
L_801B3E80:;
  c->r[3]=c->r[30]|c->r[30]; // 801B3E80
  c->r[4]=c->r[1]+0x00000010u; // 801B3E84
  c->lr=0x801B3E8Cu; f_802DF854(c); // 801B3E88
  c->r[0]=0u+0x00000000u; // 801B3E8C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B3E90
  c->r[31]=c->r[3]|c->r[3]; // 801B3E94
  c->r[3]=c->r[1]+0x00000008u; // 801B3E98
  c->lr=0x801B3EA0u; f_8012556C(c); // 801B3E9C
  c->r[3]=R8(c->r[31]+0x000000B8u); // 801B3EA0
  c->r[0]=0u+0x43300000u; // 801B3EA4
  W32(c->r[1]+0x00000034u,c->r[3]); // 801B3EA8
  {uint32_t ea=c->r[2]+0xFFFFC690u; c->f[1]=RF64(ea);} // 801B3EAC
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B3EB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801B3EB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801B3EB8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B3EBC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801B3EC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801B3EC4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B3EC8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801B3ECC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B3ED0
  c->lr=c->r[0]; // 801B3ED4
  c->r[1]=c->r[1]+0x00000050u; // 801B3ED8
  return; // 801B3EDC
}

// fn_801B3EE0
void f_801B3EE0(Ctx* __restrict c) {
  trace_call(0x801B3EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3EE0
  c->r[0]=c->lr; // 801B3EE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3EE8
  c->r[0]=c->r[4]+0x00000001u; // 801B3EEC
  cmpu(c,0,c->r[0],0x00000002u); // 801B3EF0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B3EF4
  c->r[29]=c->r[4]|c->r[4]; // 801B3EF8
  c->r[30]=c->r[5]|c->r[5]; // 801B3EFC
  if (crb(c,1)) { goto L_801B3F38; } // 801B3F00
  c->r[31]=0u+0x80690000u; // 801B3F04
  c->r[3]=c->r[30]|c->r[30]; // 801B3F08
  c->r[31]=c->r[31]+0x00003960u; // 801B3F0C
  c->r[4]=c->r[31]+0x0000016Cu; // 801B3F10
  c->lr=0x801B3F18u; f_803B393C(c); // 801B3F14
  cmps(c,0,(int32_t)c->r[3],0); // 801B3F18
  if (crb(c,2)) { goto L_801B3F38; } // 801B3F1C
  c->r[3]=c->r[30]|c->r[30]; // 801B3F20
  c->r[5]=c->r[30]|c->r[30]; // 801B3F24
  c->r[4]=c->r[31]+0x0000016Du; // 801B3F28
  c->r[6]=c->r[29]+0x00000001u; // 801B3F2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3F30
  c->lr=0x801B3F38u; f_803B1FC8(c); // 801B3F34
L_801B3F38:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B3F38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3F3C
  c->lr=c->r[0]; // 801B3F40
  c->r[1]=c->r[1]+0x00000020u; // 801B3F44
  return; // 801B3F48
}

// fn_801B3F4C
void f_801B3F4C(Ctx* __restrict c) {
  trace_call(0x801B3F4Cu);
  c->r[3]=0u+0x00000005u; // 801B3F4C
  return; // 801B3F50
}

