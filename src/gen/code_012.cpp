#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CFE44
void f_800CFE44(Ctx* __restrict c) {
  trace_call(0x800CFE44u);
  c->r[0]=R8(c->r[13]+0xFFFFC29Cu); // 800CFE44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CFE48
  if (!crb(c,2)) { goto L_800CFE6C; } // 800CFE4C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800CFE50
  c->r[0]=0u+0x00000001u; // 800CFE54
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800CFE58
  c->r[3]=c->r[4]+0x00000001u; // 800CFE5C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800CFE60
  W32(c->r[13]+0xFFFFC298u,c->r[4]); // 800CFE64
  W8(c->r[13]+0xFFFFC29Cu,c->r[0]); // 800CFE68
L_800CFE6C:;
  c->r[3]=R32(c->r[13]+0xFFFFC298u); // 800CFE6C
  return; // 800CFE70
}

// fn_800CFE74
void f_800CFE74(Ctx* __restrict c) {
  trace_call(0x800CFE74u);
  c->r[0]=R8(c->r[13]+0xFFFFC2A4u); // 800CFE74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CFE78
  if (!crb(c,2)) { goto L_800CFE9C; } // 800CFE7C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800CFE80
  c->r[0]=0u+0x00000001u; // 800CFE84
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800CFE88
  c->r[3]=c->r[4]+0x00000001u; // 800CFE8C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800CFE90
  W32(c->r[13]+0xFFFFC2A0u,c->r[4]); // 800CFE94
  W8(c->r[13]+0xFFFFC2A4u,c->r[0]); // 800CFE98
L_800CFE9C:;
  c->r[3]=R32(c->r[13]+0xFFFFC2A0u); // 800CFE9C
  return; // 800CFEA0
}

// fn_800CFEA4
void f_800CFEA4(Ctx* __restrict c) {
  trace_call(0x800CFEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFEA4
  c->r[0]=c->lr; // 800CFEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFEAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFEB0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800CFEB4
  cmps(c,0,(int32_t)c->r[30],0); // 800CFEB8
  if (crb(c,2)) { goto L_800CFF00; } // 800CFEBC
  c->lr=0x800CFEC4u; f_800CFE74(c); // 800CFEC0
  c->r[31]=c->r[3]|c->r[3]; // 800CFEC4
  c->lr=0x800CFECCu; f_800CFF18(c); // 800CFEC8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800CFECC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CFED0
  c->r[5]=0u+0x800D0000u; // 800CFED4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800CFED8
  c->r[4]=c->r[30]+c->r[4]; // 800CFEDC
  c->r[5]=c->r[5]+0xFFFFFF14u; // 800CFEE0
  c->r[4]=c->r[4]+c->r[0]; // 800CFEE4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800CFEE8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800CFEEC
  cmpu(c,0,c->r[0],0x00000018u); // 800CFEF0
  if (!crb(c,0)) { goto L_800CFF00; } // 800CFEF4
  c->r[0]=0u+0x00000018u; // 800CFEF8
  W32(c->r[30]+c->r[3],c->r[0]); // 800CFEFC
L_800CFF00:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFF00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFF04
  c->lr=c->r[0]; // 800CFF08
  c->r[1]=c->r[1]+0x00000010u; // 800CFF0C
  return; // 800CFF10
}

// fn_800CFF14
void f_800CFF14(Ctx* __restrict c) {
  trace_call(0x800CFF14u);
  f_800D308C(c); return; // 800CFF14
}

// fn_800CFF18
void f_800CFF18(Ctx* __restrict c) {
  trace_call(0x800CFF18u);
  c->r[0]=R8(c->r[13]+0xFFFFC294u); // 800CFF18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CFF1C
  if (!crb(c,2)) { goto L_800CFF40; } // 800CFF20
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800CFF24
  c->r[0]=0u+0x00000001u; // 800CFF28
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800CFF2C
  c->r[3]=c->r[4]+0x00000001u; // 800CFF30
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800CFF34
  W32(c->r[13]+0xFFFFC290u,c->r[4]); // 800CFF38
  W8(c->r[13]+0xFFFFC294u,c->r[0]); // 800CFF3C
L_800CFF40:;
  c->r[3]=R32(c->r[13]+0xFFFFC290u); // 800CFF40
  return; // 800CFF44
}

// fn_800CFF48
void f_800CFF48(Ctx* __restrict c) {
  trace_call(0x800CFF48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFF48
  c->r[0]=c->lr; // 800CFF4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFF50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFF54
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800CFF58
  cmps(c,0,(int32_t)c->r[30],0); // 800CFF5C
  if (crb(c,2)) { goto L_800CFFA4; } // 800CFF60
  c->lr=0x800CFF68u; f_800CFE74(c); // 800CFF64
  c->r[31]=c->r[3]|c->r[3]; // 800CFF68
  c->lr=0x800CFF70u; f_800CFFBC(c); // 800CFF6C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800CFF70
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CFF74
  c->r[5]=0u+0x800D0000u; // 800CFF78
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800CFF7C
  c->r[4]=c->r[30]+c->r[4]; // 800CFF80
  c->r[5]=c->r[5]+0xFFFFFFB8u; // 800CFF84
  c->r[4]=c->r[4]+c->r[0]; // 800CFF88
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800CFF8C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800CFF90
  cmpu(c,0,c->r[0],0x0000001Cu); // 800CFF94
  if (!crb(c,0)) { goto L_800CFFA4; } // 800CFF98
  c->r[0]=0u+0x0000001Cu; // 800CFF9C
  W32(c->r[30]+c->r[3],c->r[0]); // 800CFFA0
L_800CFFA4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFFA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFFA8
  c->lr=c->r[0]; // 800CFFAC
  c->r[1]=c->r[1]+0x00000010u; // 800CFFB0
  return; // 800CFFB4
}

// fn_800CFFB8
void f_800CFFB8(Ctx* __restrict c) {
  trace_call(0x800CFFB8u);
  f_800D2E7C(c); return; // 800CFFB8
}

// fn_800CFFBC
void f_800CFFBC(Ctx* __restrict c) {
  trace_call(0x800CFFBCu);
  c->r[0]=R8(c->r[13]+0xFFFFC28Cu); // 800CFFBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CFFC0
  if (!crb(c,2)) { goto L_800CFFE4; } // 800CFFC4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800CFFC8
  c->r[0]=0u+0x00000001u; // 800CFFCC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800CFFD0
  c->r[3]=c->r[4]+0x00000001u; // 800CFFD4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800CFFD8
  W32(c->r[13]+0xFFFFC288u,c->r[4]); // 800CFFDC
  W8(c->r[13]+0xFFFFC28Cu,c->r[0]); // 800CFFE0
L_800CFFE4:;
  c->r[3]=R32(c->r[13]+0xFFFFC288u); // 800CFFE4
  return; // 800CFFE8
}

// fn_800CFFEC
void f_800CFFEC(Ctx* __restrict c) {
  trace_call(0x800CFFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFFEC
  c->r[0]=c->lr; // 800CFFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFFF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFFF8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800CFFFC
  cmps(c,0,(int32_t)c->r[30],0); // 800D0000
  if (crb(c,2)) { goto L_800D0048; } // 800D0004
  c->lr=0x800D000Cu; f_800CFE74(c); // 800D0008
  c->r[31]=c->r[3]|c->r[3]; // 800D000C
  c->lr=0x800D0014u; f_800D0060(c); // 800D0010
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0014
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0018
  c->r[5]=0u+0x800D0000u; // 800D001C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D0020
  c->r[4]=c->r[30]+c->r[4]; // 800D0024
  c->r[5]=c->r[5]+0x0000005Cu; // 800D0028
  c->r[4]=c->r[4]+c->r[0]; // 800D002C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0030
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D0034
  cmpu(c,0,c->r[0],0x00000014u); // 800D0038
  if (!crb(c,0)) { goto L_800D0048; } // 800D003C
  c->r[0]=0u+0x00000014u; // 800D0040
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0044
L_800D0048:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0048
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D004C
  c->lr=c->r[0]; // 800D0050
  c->r[1]=c->r[1]+0x00000010u; // 800D0054
  return; // 800D0058
}

// fn_800D005C
void f_800D005C(Ctx* __restrict c) {
  trace_call(0x800D005Cu);
  f_800D2DF4(c); return; // 800D005C
}

// fn_800D0060
void f_800D0060(Ctx* __restrict c) {
  trace_call(0x800D0060u);
  c->r[0]=R8(c->r[13]+0xFFFFC284u); // 800D0060
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0064
  if (!crb(c,2)) { goto L_800D0088; } // 800D0068
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D006C
  c->r[0]=0u+0x00000001u; // 800D0070
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0074
  c->r[3]=c->r[4]+0x00000001u; // 800D0078
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D007C
  W32(c->r[13]+0xFFFFC280u,c->r[4]); // 800D0080
  W8(c->r[13]+0xFFFFC284u,c->r[0]); // 800D0084
L_800D0088:;
  c->r[3]=R32(c->r[13]+0xFFFFC280u); // 800D0088
  return; // 800D008C
}

// fn_800D0090
void f_800D0090(Ctx* __restrict c) {
  trace_call(0x800D0090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0090
  c->r[0]=c->lr; // 800D0094
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0098
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D009C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D00A0
  cmps(c,0,(int32_t)c->r[30],0); // 800D00A4
  if (crb(c,2)) { goto L_800D00EC; } // 800D00A8
  c->lr=0x800D00B0u; f_800CFE74(c); // 800D00AC
  c->r[31]=c->r[3]|c->r[3]; // 800D00B0
  c->lr=0x800D00B8u; f_800D0104(c); // 800D00B4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D00B8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D00BC
  c->r[5]=0u+0x800D0000u; // 800D00C0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D00C4
  c->r[4]=c->r[30]+c->r[4]; // 800D00C8
  c->r[5]=c->r[5]+0x00000100u; // 800D00CC
  c->r[4]=c->r[4]+c->r[0]; // 800D00D0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D00D4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D00D8
  cmpu(c,0,c->r[0],0x00000010u); // 800D00DC
  if (!crb(c,0)) { goto L_800D00EC; } // 800D00E0
  c->r[0]=0u+0x00000010u; // 800D00E4
  W32(c->r[30]+c->r[3],c->r[0]); // 800D00E8
L_800D00EC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D00EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D00F0
  c->lr=c->r[0]; // 800D00F4
  c->r[1]=c->r[1]+0x00000010u; // 800D00F8
  return; // 800D00FC
}

// fn_800D0100
void f_800D0100(Ctx* __restrict c) {
  trace_call(0x800D0100u);
  f_800D2CB4(c); return; // 800D0100
}

// fn_800D0104
void f_800D0104(Ctx* __restrict c) {
  trace_call(0x800D0104u);
  c->r[0]=R8(c->r[13]+0xFFFFC27Cu); // 800D0104
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0108
  if (!crb(c,2)) { goto L_800D012C; } // 800D010C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D0110
  c->r[0]=0u+0x00000001u; // 800D0114
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0118
  c->r[3]=c->r[4]+0x00000001u; // 800D011C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D0120
  W32(c->r[13]+0xFFFFC278u,c->r[4]); // 800D0124
  W8(c->r[13]+0xFFFFC27Cu,c->r[0]); // 800D0128
L_800D012C:;
  c->r[3]=R32(c->r[13]+0xFFFFC278u); // 800D012C
  return; // 800D0130
}

// fn_800D0134
void f_800D0134(Ctx* __restrict c) {
  trace_call(0x800D0134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0134
  c->r[0]=c->lr; // 800D0138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D013C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0140
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D0144
  cmps(c,0,(int32_t)c->r[30],0); // 800D0148
  if (crb(c,2)) { goto L_800D0190; } // 800D014C
  c->lr=0x800D0154u; f_800CFE74(c); // 800D0150
  c->r[31]=c->r[3]|c->r[3]; // 800D0154
  c->lr=0x800D015Cu; f_800D01A8(c); // 800D0158
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D015C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0160
  c->r[5]=0u+0x800D0000u; // 800D0164
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D0168
  c->r[4]=c->r[30]+c->r[4]; // 800D016C
  c->r[5]=c->r[5]+0x000001A4u; // 800D0170
  c->r[4]=c->r[4]+c->r[0]; // 800D0174
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0178
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D017C
  cmpu(c,0,c->r[0],0x00000010u); // 800D0180
  if (!crb(c,0)) { goto L_800D0190; } // 800D0184
  c->r[0]=0u+0x00000010u; // 800D0188
  W32(c->r[30]+c->r[3],c->r[0]); // 800D018C
L_800D0190:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0194
  c->lr=c->r[0]; // 800D0198
  c->r[1]=c->r[1]+0x00000010u; // 800D019C
  return; // 800D01A0
}

// fn_800D01A4
void f_800D01A4(Ctx* __restrict c) {
  trace_call(0x800D01A4u);
  f_800D2BB0(c); return; // 800D01A4
}

// fn_800D01A8
void f_800D01A8(Ctx* __restrict c) {
  trace_call(0x800D01A8u);
  c->r[0]=R8(c->r[13]+0xFFFFC274u); // 800D01A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D01AC
  if (!crb(c,2)) { goto L_800D01D0; } // 800D01B0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D01B4
  c->r[0]=0u+0x00000001u; // 800D01B8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D01BC
  c->r[3]=c->r[4]+0x00000001u; // 800D01C0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D01C4
  W32(c->r[13]+0xFFFFC270u,c->r[4]); // 800D01C8
  W8(c->r[13]+0xFFFFC274u,c->r[0]); // 800D01CC
L_800D01D0:;
  c->r[3]=R32(c->r[13]+0xFFFFC270u); // 800D01D0
  return; // 800D01D4
}

// fn_800D01D8
void f_800D01D8(Ctx* __restrict c) {
  trace_call(0x800D01D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D01D8
  c->r[0]=c->lr; // 800D01DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D01E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D01E4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D01E8
  cmps(c,0,(int32_t)c->r[30],0); // 800D01EC
  if (crb(c,2)) { goto L_800D0234; } // 800D01F0
  c->lr=0x800D01F8u; f_800CFE74(c); // 800D01F4
  c->r[31]=c->r[3]|c->r[3]; // 800D01F8
  c->lr=0x800D0200u; f_800D024C(c); // 800D01FC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0200
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0204
  c->r[5]=0u+0x800D0000u; // 800D0208
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D020C
  c->r[4]=c->r[30]+c->r[4]; // 800D0210
  c->r[5]=c->r[5]+0x00000248u; // 800D0214
  c->r[4]=c->r[4]+c->r[0]; // 800D0218
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D021C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D0220
  cmpu(c,0,c->r[0],0x00000010u); // 800D0224
  if (!crb(c,0)) { goto L_800D0234; } // 800D0228
  c->r[0]=0u+0x00000010u; // 800D022C
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0230
L_800D0234:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0234
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0238
  c->lr=c->r[0]; // 800D023C
  c->r[1]=c->r[1]+0x00000010u; // 800D0240
  return; // 800D0244
}

// fn_800D0248
void f_800D0248(Ctx* __restrict c) {
  trace_call(0x800D0248u);
  f_800D294C(c); return; // 800D0248
}

// fn_800D024C
void f_800D024C(Ctx* __restrict c) {
  trace_call(0x800D024Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC26Cu); // 800D024C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0250
  if (!crb(c,2)) { goto L_800D0274; } // 800D0254
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D0258
  c->r[0]=0u+0x00000001u; // 800D025C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0260
  c->r[3]=c->r[4]+0x00000001u; // 800D0264
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D0268
  W32(c->r[13]+0xFFFFC268u,c->r[4]); // 800D026C
  W8(c->r[13]+0xFFFFC26Cu,c->r[0]); // 800D0270
L_800D0274:;
  c->r[3]=R32(c->r[13]+0xFFFFC268u); // 800D0274
  return; // 800D0278
}

// fn_800D027C
void f_800D027C(Ctx* __restrict c) {
  trace_call(0x800D027Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D027C
  c->r[0]=c->lr; // 800D0280
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0284
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0288
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D028C
  cmps(c,0,(int32_t)c->r[30],0); // 800D0290
  if (crb(c,2)) { goto L_800D02D8; } // 800D0294
  c->lr=0x800D029Cu; f_800CFE74(c); // 800D0298
  c->r[31]=c->r[3]|c->r[3]; // 800D029C
  c->lr=0x800D02A4u; f_800D02F0(c); // 800D02A0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D02A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D02A8
  c->r[5]=0u+0x800D0000u; // 800D02AC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D02B0
  c->r[4]=c->r[30]+c->r[4]; // 800D02B4
  c->r[5]=c->r[5]+0x000002ECu; // 800D02B8
  c->r[4]=c->r[4]+c->r[0]; // 800D02BC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D02C0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D02C4
  cmpu(c,0,c->r[0],0x00000014u); // 800D02C8
  if (!crb(c,0)) { goto L_800D02D8; } // 800D02CC
  c->r[0]=0u+0x00000014u; // 800D02D0
  W32(c->r[30]+c->r[3],c->r[0]); // 800D02D4
L_800D02D8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D02D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D02DC
  c->lr=c->r[0]; // 800D02E0
  c->r[1]=c->r[1]+0x00000010u; // 800D02E4
  return; // 800D02E8
}

// fn_800D02EC
void f_800D02EC(Ctx* __restrict c) {
  trace_call(0x800D02ECu);
  f_800D2898(c); return; // 800D02EC
}

// fn_800D02F0
void f_800D02F0(Ctx* __restrict c) {
  trace_call(0x800D02F0u);
  c->r[0]=R8(c->r[13]+0xFFFFC264u); // 800D02F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D02F4
  if (!crb(c,2)) { goto L_800D0318; } // 800D02F8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D02FC
  c->r[0]=0u+0x00000001u; // 800D0300
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0304
  c->r[3]=c->r[4]+0x00000001u; // 800D0308
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D030C
  W32(c->r[13]+0xFFFFC260u,c->r[4]); // 800D0310
  W8(c->r[13]+0xFFFFC264u,c->r[0]); // 800D0314
L_800D0318:;
  c->r[3]=R32(c->r[13]+0xFFFFC260u); // 800D0318
  return; // 800D031C
}

// fn_800D0320
void f_800D0320(Ctx* __restrict c) {
  trace_call(0x800D0320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0320
  c->r[0]=c->lr; // 800D0324
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0328
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D032C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D0330
  cmps(c,0,(int32_t)c->r[30],0); // 800D0334
  if (crb(c,2)) { goto L_800D037C; } // 800D0338
  c->lr=0x800D0340u; f_800CFE74(c); // 800D033C
  c->r[31]=c->r[3]|c->r[3]; // 800D0340
  c->lr=0x800D0348u; f_800D0394(c); // 800D0344
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0348
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D034C
  c->r[5]=0u+0x800D0000u; // 800D0350
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D0354
  c->r[4]=c->r[30]+c->r[4]; // 800D0358
  c->r[5]=c->r[5]+0x00000390u; // 800D035C
  c->r[4]=c->r[4]+c->r[0]; // 800D0360
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0364
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D0368
  cmpu(c,0,c->r[0],0x00000018u); // 800D036C
  if (!crb(c,0)) { goto L_800D037C; } // 800D0370
  c->r[0]=0u+0x00000018u; // 800D0374
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0378
L_800D037C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D037C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0380
  c->lr=c->r[0]; // 800D0384
  c->r[1]=c->r[1]+0x00000010u; // 800D0388
  return; // 800D038C
}

// fn_800D0390
void f_800D0390(Ctx* __restrict c) {
  trace_call(0x800D0390u);
  f_800D276C(c); return; // 800D0390
}

// fn_800D0394
void f_800D0394(Ctx* __restrict c) {
  trace_call(0x800D0394u);
  c->r[0]=R8(c->r[13]+0xFFFFC25Cu); // 800D0394
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0398
  if (!crb(c,2)) { goto L_800D03BC; } // 800D039C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D03A0
  c->r[0]=0u+0x00000001u; // 800D03A4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D03A8
  c->r[3]=c->r[4]+0x00000001u; // 800D03AC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D03B0
  W32(c->r[13]+0xFFFFC258u,c->r[4]); // 800D03B4
  W8(c->r[13]+0xFFFFC25Cu,c->r[0]); // 800D03B8
L_800D03BC:;
  c->r[3]=R32(c->r[13]+0xFFFFC258u); // 800D03BC
  return; // 800D03C0
}

// fn_800D03C4
void f_800D03C4(Ctx* __restrict c) {
  trace_call(0x800D03C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D03C4
  c->r[0]=c->lr; // 800D03C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D03CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D03D0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D03D4
  cmps(c,0,(int32_t)c->r[30],0); // 800D03D8
  if (crb(c,2)) { goto L_800D0420; } // 800D03DC
  c->lr=0x800D03E4u; f_800CFE74(c); // 800D03E0
  c->r[31]=c->r[3]|c->r[3]; // 800D03E4
  c->lr=0x800D03ECu; f_800D0438(c); // 800D03E8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D03EC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D03F0
  c->r[5]=0u+0x800D0000u; // 800D03F4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D03F8
  c->r[4]=c->r[30]+c->r[4]; // 800D03FC
  c->r[5]=c->r[5]+0x00000434u; // 800D0400
  c->r[4]=c->r[4]+c->r[0]; // 800D0404
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0408
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D040C
  cmpu(c,0,c->r[0],0x00000010u); // 800D0410
  if (!crb(c,0)) { goto L_800D0420; } // 800D0414
  c->r[0]=0u+0x00000010u; // 800D0418
  W32(c->r[30]+c->r[3],c->r[0]); // 800D041C
L_800D0420:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0420
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0424
  c->lr=c->r[0]; // 800D0428
  c->r[1]=c->r[1]+0x00000010u; // 800D042C
  return; // 800D0430
}

// fn_800D0434
void f_800D0434(Ctx* __restrict c) {
  trace_call(0x800D0434u);
  f_800D2614(c); return; // 800D0434
}

// fn_800D0438
void f_800D0438(Ctx* __restrict c) {
  trace_call(0x800D0438u);
  c->r[0]=R8(c->r[13]+0xFFFFC254u); // 800D0438
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D043C
  if (!crb(c,2)) { goto L_800D0460; } // 800D0440
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D0444
  c->r[0]=0u+0x00000001u; // 800D0448
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D044C
  c->r[3]=c->r[4]+0x00000001u; // 800D0450
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D0454
  W32(c->r[13]+0xFFFFC250u,c->r[4]); // 800D0458
  W8(c->r[13]+0xFFFFC254u,c->r[0]); // 800D045C
L_800D0460:;
  c->r[3]=R32(c->r[13]+0xFFFFC250u); // 800D0460
  return; // 800D0464
}

// fn_800D0468
void f_800D0468(Ctx* __restrict c) {
  trace_call(0x800D0468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0468
  c->r[0]=c->lr; // 800D046C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0470
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0474
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D0478
  cmps(c,0,(int32_t)c->r[30],0); // 800D047C
  if (crb(c,2)) { goto L_800D04C4; } // 800D0480
  c->lr=0x800D0488u; f_800CFE74(c); // 800D0484
  c->r[31]=c->r[3]|c->r[3]; // 800D0488
  c->lr=0x800D0490u; f_800D04DC(c); // 800D048C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0490
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0494
  c->r[5]=0u+0x800D0000u; // 800D0498
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D049C
  c->r[4]=c->r[30]+c->r[4]; // 800D04A0
  c->r[5]=c->r[5]+0x000004D8u; // 800D04A4
  c->r[4]=c->r[4]+c->r[0]; // 800D04A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D04AC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D04B0
  cmpu(c,0,c->r[0],0x00000010u); // 800D04B4
  if (!crb(c,0)) { goto L_800D04C4; } // 800D04B8
  c->r[0]=0u+0x00000010u; // 800D04BC
  W32(c->r[30]+c->r[3],c->r[0]); // 800D04C0
L_800D04C4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D04C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D04C8
  c->lr=c->r[0]; // 800D04CC
  c->r[1]=c->r[1]+0x00000010u; // 800D04D0
  return; // 800D04D4
}

// fn_800D04D8
void f_800D04D8(Ctx* __restrict c) {
  trace_call(0x800D04D8u);
  f_800D24A0(c); return; // 800D04D8
}

// fn_800D04DC
void f_800D04DC(Ctx* __restrict c) {
  trace_call(0x800D04DCu);
  c->r[0]=R8(c->r[13]+0xFFFFC24Cu); // 800D04DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D04E0
  if (!crb(c,2)) { goto L_800D0504; } // 800D04E4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D04E8
  c->r[0]=0u+0x00000001u; // 800D04EC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D04F0
  c->r[3]=c->r[4]+0x00000001u; // 800D04F4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D04F8
  W32(c->r[13]+0xFFFFC248u,c->r[4]); // 800D04FC
  W8(c->r[13]+0xFFFFC24Cu,c->r[0]); // 800D0500
L_800D0504:;
  c->r[3]=R32(c->r[13]+0xFFFFC248u); // 800D0504
  return; // 800D0508
}

// fn_800D050C
void f_800D050C(Ctx* __restrict c) {
  trace_call(0x800D050Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D050C
  c->r[0]=c->lr; // 800D0510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0514
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0518
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D051C
  cmps(c,0,(int32_t)c->r[30],0); // 800D0520
  if (crb(c,2)) { goto L_800D0568; } // 800D0524
  c->lr=0x800D052Cu; f_800CFE74(c); // 800D0528
  c->r[31]=c->r[3]|c->r[3]; // 800D052C
  c->lr=0x800D0534u; f_800D0580(c); // 800D0530
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0534
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0538
  c->r[5]=0u+0x800D0000u; // 800D053C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D0540
  c->r[4]=c->r[30]+c->r[4]; // 800D0544
  c->r[5]=c->r[5]+0x0000057Cu; // 800D0548
  c->r[4]=c->r[4]+c->r[0]; // 800D054C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0550
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D0554
  cmpu(c,0,c->r[0],0x00000018u); // 800D0558
  if (!crb(c,0)) { goto L_800D0568; } // 800D055C
  c->r[0]=0u+0x00000018u; // 800D0560
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0564
L_800D0568:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0568
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D056C
  c->lr=c->r[0]; // 800D0570
  c->r[1]=c->r[1]+0x00000010u; // 800D0574
  return; // 800D0578
}

// fn_800D057C
void f_800D057C(Ctx* __restrict c) {
  trace_call(0x800D057Cu);
  f_800D20A4(c); return; // 800D057C
}

// fn_800D0580
void f_800D0580(Ctx* __restrict c) {
  trace_call(0x800D0580u);
  c->r[0]=R8(c->r[13]+0xFFFFC244u); // 800D0580
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0584
  if (!crb(c,2)) { goto L_800D05A8; } // 800D0588
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D058C
  c->r[0]=0u+0x00000001u; // 800D0590
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0594
  c->r[3]=c->r[4]+0x00000001u; // 800D0598
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D059C
  W32(c->r[13]+0xFFFFC240u,c->r[4]); // 800D05A0
  W8(c->r[13]+0xFFFFC244u,c->r[0]); // 800D05A4
L_800D05A8:;
  c->r[3]=R32(c->r[13]+0xFFFFC240u); // 800D05A8
  return; // 800D05AC
}

// fn_800D05B0
void f_800D05B0(Ctx* __restrict c) {
  trace_call(0x800D05B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D05B0
  c->r[0]=c->lr; // 800D05B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D05B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D05BC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D05C0
  cmps(c,0,(int32_t)c->r[30],0); // 800D05C4
  if (crb(c,2)) { goto L_800D060C; } // 800D05C8
  c->lr=0x800D05D0u; f_800CFE74(c); // 800D05CC
  c->r[31]=c->r[3]|c->r[3]; // 800D05D0
  c->lr=0x800D05D8u; f_800D0624(c); // 800D05D4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D05D8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D05DC
  c->r[5]=0u+0x800D0000u; // 800D05E0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D05E4
  c->r[4]=c->r[30]+c->r[4]; // 800D05E8
  c->r[5]=c->r[5]+0x00000620u; // 800D05EC
  c->r[4]=c->r[4]+c->r[0]; // 800D05F0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D05F4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D05F8
  cmpu(c,0,c->r[0],0x00000014u); // 800D05FC
  if (!crb(c,0)) { goto L_800D060C; } // 800D0600
  c->r[0]=0u+0x00000014u; // 800D0604
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0608
L_800D060C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D060C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0610
  c->lr=c->r[0]; // 800D0614
  c->r[1]=c->r[1]+0x00000010u; // 800D0618
  return; // 800D061C
}

// fn_800D0620
void f_800D0620(Ctx* __restrict c) {
  trace_call(0x800D0620u);
  f_800D1E6C(c); return; // 800D0620
}

// fn_800D0624
void f_800D0624(Ctx* __restrict c) {
  trace_call(0x800D0624u);
  c->r[0]=R8(c->r[13]+0xFFFFC23Cu); // 800D0624
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0628
  if (!crb(c,2)) { goto L_800D064C; } // 800D062C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D0630
  c->r[0]=0u+0x00000001u; // 800D0634
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0638
  c->r[3]=c->r[4]+0x00000001u; // 800D063C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D0640
  W32(c->r[13]+0xFFFFC238u,c->r[4]); // 800D0644
  W8(c->r[13]+0xFFFFC23Cu,c->r[0]); // 800D0648
L_800D064C:;
  c->r[3]=R32(c->r[13]+0xFFFFC238u); // 800D064C
  return; // 800D0650
}

// fn_800D0654
void f_800D0654(Ctx* __restrict c) {
  trace_call(0x800D0654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0654
  c->r[0]=c->lr; // 800D0658
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D065C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0660
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D0664
  cmps(c,0,(int32_t)c->r[30],0); // 800D0668
  if (crb(c,2)) { goto L_800D06B0; } // 800D066C
  c->lr=0x800D0674u; f_800CFE74(c); // 800D0670
  c->r[31]=c->r[3]|c->r[3]; // 800D0674
  c->lr=0x800D067Cu; f_800D06C8(c); // 800D0678
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D067C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0680
  c->r[5]=0u+0x800D0000u; // 800D0684
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D0688
  c->r[4]=c->r[30]+c->r[4]; // 800D068C
  c->r[5]=c->r[5]+0x000006C4u; // 800D0690
  c->r[4]=c->r[4]+c->r[0]; // 800D0694
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0698
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D069C
  cmpu(c,0,c->r[0],0x00000014u); // 800D06A0
  if (!crb(c,0)) { goto L_800D06B0; } // 800D06A4
  c->r[0]=0u+0x00000014u; // 800D06A8
  W32(c->r[30]+c->r[3],c->r[0]); // 800D06AC
L_800D06B0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D06B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D06B4
  c->lr=c->r[0]; // 800D06B8
  c->r[1]=c->r[1]+0x00000010u; // 800D06BC
  return; // 800D06C0
}

// fn_800D06C4
void f_800D06C4(Ctx* __restrict c) {
  trace_call(0x800D06C4u);
  f_800D1DB4(c); return; // 800D06C4
}

// fn_800D06C8
void f_800D06C8(Ctx* __restrict c) {
  trace_call(0x800D06C8u);
  c->r[0]=R8(c->r[13]+0xFFFFC234u); // 800D06C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D06CC
  if (!crb(c,2)) { goto L_800D06F0; } // 800D06D0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D06D4
  c->r[0]=0u+0x00000001u; // 800D06D8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D06DC
  c->r[3]=c->r[4]+0x00000001u; // 800D06E0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D06E4
  W32(c->r[13]+0xFFFFC230u,c->r[4]); // 800D06E8
  W8(c->r[13]+0xFFFFC234u,c->r[0]); // 800D06EC
L_800D06F0:;
  c->r[3]=R32(c->r[13]+0xFFFFC230u); // 800D06F0
  return; // 800D06F4
}

// fn_800D06F8
void f_800D06F8(Ctx* __restrict c) {
  trace_call(0x800D06F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D06F8
  c->r[0]=c->lr; // 800D06FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0700
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0704
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D0708
  cmps(c,0,(int32_t)c->r[30],0); // 800D070C
  if (crb(c,2)) { goto L_800D0754; } // 800D0710
  c->lr=0x800D0718u; f_800CFE74(c); // 800D0714
  c->r[31]=c->r[3]|c->r[3]; // 800D0718
  c->lr=0x800D0720u; f_800D076C(c); // 800D071C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D0720
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0724
  c->r[5]=0u+0x800D0000u; // 800D0728
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D072C
  c->r[4]=c->r[30]+c->r[4]; // 800D0730
  c->r[5]=c->r[5]+0x00000768u; // 800D0734
  c->r[4]=c->r[4]+c->r[0]; // 800D0738
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D073C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D0740
  cmpu(c,0,c->r[0],0x00000014u); // 800D0744
  if (!crb(c,0)) { goto L_800D0754; } // 800D0748
  c->r[0]=0u+0x00000014u; // 800D074C
  W32(c->r[30]+c->r[3],c->r[0]); // 800D0750
L_800D0754:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0754
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0758
  c->lr=c->r[0]; // 800D075C
  c->r[1]=c->r[1]+0x00000010u; // 800D0760
  return; // 800D0764
}

// fn_800D0768
void f_800D0768(Ctx* __restrict c) {
  trace_call(0x800D0768u);
  f_800D1C64(c); return; // 800D0768
}

// fn_800D076C
void f_800D076C(Ctx* __restrict c) {
  trace_call(0x800D076Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC22Cu); // 800D076C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0770
  if (!crb(c,2)) { goto L_800D0794; } // 800D0774
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D0778
  c->r[0]=0u+0x00000001u; // 800D077C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0780
  c->r[3]=c->r[4]+0x00000001u; // 800D0784
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D0788
  W32(c->r[13]+0xFFFFC228u,c->r[4]); // 800D078C
  W8(c->r[13]+0xFFFFC22Cu,c->r[0]); // 800D0790
L_800D0794:;
  c->r[3]=R32(c->r[13]+0xFFFFC228u); // 800D0794
  return; // 800D0798
}

// fn_800D079C
void f_800D079C(Ctx* __restrict c) {
  trace_call(0x800D079Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D079C
  c->r[0]=c->lr; // 800D07A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D07A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D07A8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D07AC
  cmps(c,0,(int32_t)c->r[30],0); // 800D07B0
  if (crb(c,2)) { goto L_800D07F8; } // 800D07B4
  c->lr=0x800D07BCu; f_800CFE74(c); // 800D07B8
  c->r[31]=c->r[3]|c->r[3]; // 800D07BC
  c->lr=0x800D07C4u; f_800D0810(c); // 800D07C0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D07C4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D07C8
  c->r[5]=0u+0x800D0000u; // 800D07CC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D07D0
  c->r[4]=c->r[30]+c->r[4]; // 800D07D4
  c->r[5]=c->r[5]+0x0000080Cu; // 800D07D8
  c->r[4]=c->r[4]+c->r[0]; // 800D07DC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D07E0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D07E4
  cmpu(c,0,c->r[0],0x00000018u); // 800D07E8
  if (!crb(c,0)) { goto L_800D07F8; } // 800D07EC
  c->r[0]=0u+0x00000018u; // 800D07F0
  W32(c->r[30]+c->r[3],c->r[0]); // 800D07F4
L_800D07F8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D07F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D07FC
  c->lr=c->r[0]; // 800D0800
  c->r[1]=c->r[1]+0x00000010u; // 800D0804
  return; // 800D0808
}

// fn_800D080C
void f_800D080C(Ctx* __restrict c) {
  trace_call(0x800D080Cu);
  f_800D1BAC(c); return; // 800D080C
}

// fn_800D0810
void f_800D0810(Ctx* __restrict c) {
  trace_call(0x800D0810u);
  c->r[0]=R8(c->r[13]+0xFFFFC224u); // 800D0810
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0814
  if (!crb(c,2)) { goto L_800D0838; } // 800D0818
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D081C
  c->r[0]=0u+0x00000001u; // 800D0820
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D0824
  c->r[3]=c->r[4]+0x00000001u; // 800D0828
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D082C
  W32(c->r[13]+0xFFFFC220u,c->r[4]); // 800D0830
  W8(c->r[13]+0xFFFFC224u,c->r[0]); // 800D0834
L_800D0838:;
  c->r[3]=R32(c->r[13]+0xFFFFC220u); // 800D0838
  return; // 800D083C
}

// fn_800D0840
void f_800D0840(Ctx* __restrict c) {
  trace_call(0x800D0840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0840
  c->r[0]=c->lr; // 800D0844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D084C
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800D0850
  cmps(c,0,(int32_t)c->r[31],0); // 800D0854
  if (crb(c,2)) { goto L_800D08C0; } // 800D0858
  c->lr=0x800D0860u; f_800CFE74(c); // 800D085C
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800D0860
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0864
  if (!crb(c,2)) { goto L_800D0888; } // 800D0868
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800D086C
  c->r[0]=0u+0x00000001u; // 800D0870
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800D0874
  c->r[4]=c->r[5]+0x00000001u; // 800D0878
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800D087C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800D0880
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800D0884
L_800D0888:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800D0888
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800D088C
  c->r[5]=0u+0x800D0000u; // 800D0890
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0894
  c->r[4]=c->r[31]+c->r[4]; // 800D0898
  c->r[5]=c->r[5]+0x000008D4u; // 800D089C
  c->r[4]=c->r[4]+c->r[0]; // 800D08A0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D08A4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D08A8
  c->r[0]=R32(c->r[31]+c->r[3]); // 800D08AC
  cmpu(c,0,c->r[0],0x00000010u); // 800D08B0
  if (!crb(c,0)) { goto L_800D08C0; } // 800D08B4
  c->r[0]=0u+0x00000010u; // 800D08B8
  W32(c->r[31]+c->r[3],c->r[0]); // 800D08BC
L_800D08C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D08C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D08C4
  c->lr=c->r[0]; // 800D08C8
  c->r[1]=c->r[1]+0x00000010u; // 800D08CC
  return; // 800D08D0
}

// fn_800D08D4
void f_800D08D4(Ctx* __restrict c) {
  trace_call(0x800D08D4u);
  f_800D17D4(c); return; // 800D08D4
}

// fn_800D08D8
void f_800D08D8(Ctx* __restrict c) {
  trace_call(0x800D08D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D08D8
  c->r[0]=c->lr; // 800D08DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D08E0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D08E4
  c->r[27]=c->r[3]|c->r[3]; // 800D08E8
  c->r[26]=c->r[5]|c->r[5]; // 800D08EC
  c->r[31]=c->r[27]|c->r[27]; // 800D08F0
  c->r[30]=c->r[27]|c->r[27]; // 800D08F4
  c->r[28]=c->r[27]|c->r[27]; // 800D08F8
  c->lr=0x800D0900u; f_800CFE74(c); // 800D08FC
  c->r[4]=0u+0x806D0000u; // 800D0900
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 800D0904
  c->r[0]=0u+0x00000000u; // 800D0908
  W32(c->r[27]+0x00000000u,c->r[3]); // 800D090C
  c->r[4]=c->r[4]+0x000038C0u; // 800D0910
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D0914
  W32(c->r[27]+0x00000004u,c->r[0]); // 800D0918
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D091C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800D0920
  W8(c->r[27]+0x00000010u,c->r[0]); // 800D0924
  W32(c->r[27]+0x00000014u,c->r[0]); // 800D0928
  W32(c->r[27]+0x00000018u,c->r[0]); // 800D092C
  W32(c->r[27]+0x00000020u,c->r[0]); // 800D0930
  W32(c->r[27]+0x00000024u,c->r[0]); // 800D0934
  if (crb(c,2)) { goto L_800D0940; } // 800D0938
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 800D093C
L_800D0940:;
  c->lr=0x800D0944u; f_800797AC(c); // 800D0940
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D0944
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800D0948
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D094C
  if (!crb(c,2)) { goto L_800D095C; } // 800D0950
  c->r[0]=0u+0x00000001u; // 800D0954
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D0958
L_800D095C:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D095C
  c->r[5]=0u+0x0000012Cu; // 800D0960
  c->r[4]=c->r[6]+0x00000001u; // 800D0964
  c->r[0]=divwu(c->r[4],c->r[5]); // 800D0968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800D096C
  c->r[7]=c->r[4]-c->r[0]; // 800D0970
  goto L_800D09C0; // 800D0974
L_800D0978:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D0978
  c->r[4]=c->r[3]+c->r[0]; // 800D097C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D0980
  cmps(c,0,(int32_t)c->r[0],0); // 800D0984
  if (!crb(c,2)) { goto L_800D09B0; } // 800D0988
  W32(c->r[3]+0x00000004u,c->r[7]); // 800D098C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D0990
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D0994
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800D0998
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D099C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D09A0
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D09A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D09A8
  goto L_800D09DC; // 800D09AC
L_800D09B0:;
  c->r[4]=c->r[7]+0x00000001u; // 800D09B0
  c->r[0]=divwu(c->r[4],c->r[5]); // 800D09B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800D09B8
  c->r[7]=c->r[4]-c->r[0]; // 800D09BC
L_800D09C0:;
  cmpu(c,0,c->r[7],c->r[6]); // 800D09C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0978; } // 800D09C4
  c->r[0]=0u+0x00000000u; // 800D09C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D09CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D09D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D09D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D09D8
L_800D09DC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D09DC
  c->r[24]=c->r[27]+0x00000028u; // 800D09E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D09E4
  c->r[3]=c->r[24]|c->r[24]; // 800D09E8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D09EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D09F0
  W32(c->r[27]+0x00000020u,c->r[4]); // 800D09F4
  W32(c->r[27]+0x00000024u,c->r[0]); // 800D09F8
  c->lr=0x800D0A00u; f_800506C0(c); // 800D09FC
  cmps(c,0,(int32_t)c->r[24],0); // 800D0A00
  c->r[3]=c->r[24]|c->r[24]; // 800D0A04
  if (crb(c,2)) { goto L_800D0A10; } // 800D0A08
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800D0A0C
L_800D0A10:;
  c->r[29]=0u+0x00000001u; // 800D0A10
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D0A14
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800D0A18
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800D0A1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0A20
  if (!crb(c,2)) { goto L_800D0A64; } // 800D0A24
  c->r[25]=0u+0x80740000u; // 800D0A28
  c->r[3]=c->r[25]+0x000074BCu; // 800D0A2C
  c->lr=0x800D0A34u; f_800506C0(c); // 800D0A30
  c->r[6]=0u+0x806D0000u; // 800D0A34
  c->r[4]=0u+0x80060000u; // 800D0A38
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800D0A3C
  c->r[3]=c->r[25]+0x000074BCu; // 800D0A40
  c->r[0]=c->r[6]+0x00000008u; // 800D0A44
  c->r[5]=0u+0x80750000u; // 800D0A48
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D0A4C
  c->r[4]=c->r[4]+0x000057D4u; // 800D0A50
  c->r[5]=c->r[5]+0x00003918u; // 800D0A54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D0A58
  c->lr=0x800D0A60u; f_803A92B8(c); // 800D0A5C
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 800D0A60
L_800D0A64:;
  c->r[3]=0u+0x80740000u; // 800D0A64
  c->r[5]=c->r[24]|c->r[24]; // 800D0A68
  c->r[3]=c->r[3]+0x000074BCu; // 800D0A6C
  c->r[4]=c->r[3]|c->r[3]; // 800D0A70
  c->lr=0x800D0A78u; f_802DDCA8(c); // 800D0A74
  c->r[24]=c->r[27]+0x00000038u; // 800D0A78
  c->r[3]=c->r[24]|c->r[24]; // 800D0A7C
  c->lr=0x800D0A84u; f_800506C0(c); // 800D0A80
  cmps(c,0,(int32_t)c->r[24],0); // 800D0A84
  c->r[0]=c->r[24]|c->r[24]; // 800D0A88
  if (crb(c,2)) { goto L_800D0A94; } // 800D0A8C
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 800D0A90
L_800D0A94:;
  c->r[29]=c->r[27]+0x00000044u; // 800D0A94
  W32(c->r[24]+0x00000008u,c->r[0]); // 800D0A98
  c->r[3]=c->r[29]|c->r[29]; // 800D0A9C
  c->lr=0x800D0AA4u; f_800506C0(c); // 800D0AA0
  cmps(c,0,(int32_t)c->r[29],0); // 800D0AA4
  c->r[0]=c->r[29]|c->r[29]; // 800D0AA8
  if (crb(c,2)) { goto L_800D0AB4; } // 800D0AAC
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 800D0AB0
L_800D0AB4:;
  c->r[3]=0u+0x806F0000u; // 800D0AB4
  c->r[25]=0u+0x00000000u; // 800D0AB8
  c->r[3]=c->r[3]+0x00000E80u; // 800D0ABC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D0AC0
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 800D0AC4
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D0AC8
  W32(c->r[27]+0x00000058u,c->r[25]); // 800D0ACC
  W32(c->r[27]+0x00000064u,c->r[25]); // 800D0AD0
  c->lr=0x800D0AD8u; f_8007BDCC(c); // 800D0AD4
  c->r[0]=c->r[13]+0xFFFF8114u; // 800D0AD8
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800D0ADC
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800D0AE0
  W32(c->r[27]+0x000000A4u,c->r[25]); // 800D0AE4
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800D0AE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0AEC
  if (!crb(c,2)) { goto L_800D0B10; } // 800D0AF0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D0AF4
  c->r[0]=0u+0x00000001u; // 800D0AF8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D0AFC
  c->r[3]=c->r[4]+0x00000001u; // 800D0B00
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D0B04
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800D0B08
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800D0B0C
L_800D0B10:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800D0B10
  c->r[3]=c->r[13]+0xFFFF8110u; // 800D0B14
  c->r[0]=0u+0x00000000u; // 800D0B18
  W32(c->r[27]+0x000000A8u,c->r[4]); // 800D0B1C
  W32(c->r[27]+0x000000ACu,c->r[3]); // 800D0B20
  W32(c->r[27]+0x000000B0u,c->r[0]); // 800D0B24
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800D0B28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0B2C
  if (!crb(c,2)) { goto L_800D0B50; } // 800D0B30
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D0B34
  c->r[0]=0u+0x00000001u; // 800D0B38
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D0B3C
  c->r[3]=c->r[4]+0x00000001u; // 800D0B40
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D0B44
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800D0B48
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800D0B4C
L_800D0B50:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800D0B50
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800D0B54
  c->r[0]=0u+0x00000000u; // 800D0B58
  W32(c->r[27]+0x000000B4u,c->r[4]); // 800D0B5C
  W32(c->r[27]+0x000000B8u,c->r[3]); // 800D0B60
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800D0B64
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800D0B68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0B6C
  if (!crb(c,2)) { goto L_800D0B90; } // 800D0B70
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D0B74
  c->r[0]=0u+0x00000001u; // 800D0B78
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D0B7C
  c->r[3]=c->r[4]+0x00000001u; // 800D0B80
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D0B84
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800D0B88
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800D0B8C
L_800D0B90:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800D0B90
  c->r[3]=c->r[13]+0xFFFF8108u; // 800D0B94
  c->r[0]=0u+0x00000000u; // 800D0B98
  W32(c->r[27]+0x000000C0u,c->r[4]); // 800D0B9C
  W32(c->r[27]+0x000000C4u,c->r[3]); // 800D0BA0
  W32(c->r[27]+0x000000C8u,c->r[0]); // 800D0BA4
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800D0BA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0BAC
  if (!crb(c,2)) { goto L_800D0BD0; } // 800D0BB0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D0BB4
  c->r[0]=0u+0x00000001u; // 800D0BB8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D0BBC
  c->r[3]=c->r[4]+0x00000001u; // 800D0BC0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D0BC4
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800D0BC8
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800D0BCC
L_800D0BD0:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800D0BD0
  c->r[0]=c->r[13]+0xFFFF8104u; // 800D0BD4
  c->r[25]=0u+0x00000000u; // 800D0BD8
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800D0BDC
  c->r[3]=c->r[27]+0x000000D8u; // 800D0BE0
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800D0BE4
  W32(c->r[27]+0x000000D4u,c->r[25]); // 800D0BE8
  c->lr=0x800D0BF0u; f_800506C0(c); // 800D0BEC
  c->r[4]=0u+0x806F0000u; // 800D0BF0
  c->r[3]=0u+0x00000006u; // 800D0BF4
  c->r[4]=c->r[4]+0x000007A0u; // 800D0BF8
  c->r[29]=c->r[27]+0x000000FCu; // 800D0BFC
  c->r[0]=c->r[4]+0x00000024u; // 800D0C00
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800D0C04
  c->r[3]=c->r[29]+0x0000000Cu; // 800D0C08
  W32(c->r[27]+0x000000ECu,c->r[25]); // 800D0C0C
  W32(c->r[27]+0x000000F8u,c->r[25]); // 800D0C10
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800D0C14
  W32(c->r[27]+0x00000100u,c->r[0]); // 800D0C18
  c->lr=0x800D0C20u; f_800506C0(c); // 800D0C1C
  c->r[3]=c->r[29]+0x00000018u; // 800D0C20
  c->lr=0x800D0C28u; f_800506C0(c); // 800D0C24
  W32(c->r[29]+0x00000024u,c->r[25]); // 800D0C28
  c->r[3]=c->r[29]+0x000000B0u; // 800D0C2C
  c->lr=0x800D0C34u; f_800506C0(c); // 800D0C30
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D0C34
  c->r[3]=c->r[29]|c->r[29]; // 800D0C38
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800D0C3C
  c->ctr=c->r[12]; // 800D0C40
  if (true) { c->lr=0x800D0C48u; dispatch(c,c->ctr); } // 800D0C44
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800D0C48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0C4C
  if (!crb(c,2)) { goto L_800D0C6C; } // 800D0C50
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800D0C54
  c->r[0]=0u+0x00000001u; // 800D0C58
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800D0C5C
  c->r[3]=c->r[3]+0x00000001u; // 800D0C60
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800D0C64
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800D0C68
L_800D0C6C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800D0C6C
  c->r[5]=0u+0x806F0000u; // 800D0C70
  c->r[5]=c->r[5]+0x000007F8u; // 800D0C74
  c->r[0]=0u+0x00000032u; // 800D0C78
  c->r[4]=c->r[5]+0x00000024u; // 800D0C7C
  W32(c->r[29]+0x00000008u,c->r[3]); // 800D0C80
  c->r[6]=0u+0x00000000u; // 800D0C84
  c->r[3]=0u+0x00000000u; // 800D0C88
  W32(c->r[29]+0x00000000u,c->r[5]); // 800D0C8C
  W32(c->r[29]+0x00000004u,c->r[4]); // 800D0C90
  c->ctr=c->r[0]; // 800D0C94
L_800D0C98:;
  c->r[4]=c->r[29]+c->r[3]; // 800D0C98
  c->r[3]=c->r[3]+0x00000004u; // 800D0C9C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800D0CA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0C98; } // 800D0CA4
  c->r[3]=0u+0x806D0000u; // 800D0CA8
  c->r[7]=0u+0x00000000u; // 800D0CAC
  c->r[3]=c->r[3]+0x00003868u; // 800D0CB0
  c->r[0]=0u+0x0000000Au; // 800D0CB4
  c->r[4]=c->r[3]+0x00000024u; // 800D0CB8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D0CBC
  c->r[8]=0u+0x00000000u; // 800D0CC0
  c->r[3]=0u+0x00000000u; // 800D0CC4
  W32(c->r[29]+0x00000004u,c->r[4]); // 800D0CC8
  c->r[6]=0u+0xFFFFFFFFu; // 800D0CCC
  W32(c->r[27]+0x00000314u,c->r[7]); // 800D0CD0
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800D0CD4
  W32(c->r[27]+0x00000054u,c->r[7]); // 800D0CD8
  W32(c->r[27]+0x00000310u,c->r[27]); // 800D0CDC
  c->ctr=c->r[0]; // 800D0CE0
L_800D0CE4:;
  c->r[5]=c->r[27]+c->r[3]; // 800D0CE4
  c->r[4]=c->r[27]+c->r[8]; // 800D0CE8
  W32(c->r[5]+0x00000068u,c->r[6]); // 800D0CEC
  c->r[8]=c->r[8]+0x00000001u; // 800D0CF0
  c->r[3]=c->r[3]+0x00000004u; // 800D0CF4
  W8(c->r[4]+0x00000090u,c->r[7]); // 800D0CF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0CE4; } // 800D0CFC
  c->r[25]=c->r[27]+0x00000318u; // 800D0D00
  c->r[3]=c->r[25]|c->r[25]; // 800D0D04
  c->lr=0x800D0D0Cu; f_800506C0(c); // 800D0D08
  cmps(c,0,(int32_t)c->r[25],0); // 800D0D0C
  c->r[3]=c->r[25]|c->r[25]; // 800D0D10
  if (crb(c,2)) { goto L_800D0D1C; } // 800D0D14
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800D0D18
L_800D0D1C:;
  c->r[29]=0u+0x00000001u; // 800D0D1C
  W32(c->r[25]+0x00000008u,c->r[3]); // 800D0D20
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 800D0D24
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800D0D28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0D2C
  if (!crb(c,2)) { goto L_800D0D70; } // 800D0D30
  c->r[28]=0u+0x80750000u; // 800D0D34
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800D0D38
  c->lr=0x800D0D40u; f_800506C0(c); // 800D0D3C
  c->r[6]=0u+0x806D0000u; // 800D0D40
  c->r[4]=0u+0x80080000u; // 800D0D44
  c->r[6]=c->r[6]+0x000038D8u; // 800D0D48
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800D0D4C
  c->r[0]=c->r[6]+0x00000008u; // 800D0D50
  c->r[5]=0u+0x80750000u; // 800D0D54
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D0D58
  c->r[4]=c->r[4]+0xFFFF9844u; // 800D0D5C
  c->r[5]=c->r[5]+0x0000390Cu; // 800D0D60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D0D64
  c->lr=0x800D0D6Cu; f_803A92B8(c); // 800D0D68
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800D0D6C
L_800D0D70:;
  c->r[3]=0u+0x80750000u; // 800D0D70
  c->r[5]=c->r[25]|c->r[25]; // 800D0D74
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800D0D78
  c->r[4]=c->r[3]|c->r[3]; // 800D0D7C
  c->lr=0x800D0D84u; f_802DDCA8(c); // 800D0D80
  c->r[3]=0u+0x806D0000u; // 800D0D84
  c->r[0]=0u+0x00000000u; // 800D0D88
  c->r[3]=c->r[3]+0xFFFFD974u; // 800D0D8C
  c->r[5]=0u+0xFFFFFFFFu; // 800D0D90
  c->r[4]=0u+0x00000001u; // 800D0D94
  c->r[24]=c->r[27]+0x0000032Cu; // 800D0D98
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D0D9C
  c->r[3]=c->r[24]|c->r[24]; // 800D0DA0
  W32(c->r[27]+0x00000328u,c->r[5]); // 800D0DA4
  W32(c->r[27]+0x000000ECu,c->r[4]); // 800D0DA8
  W32(c->r[27]+0x00000054u,c->r[0]); // 800D0DAC
  W32(c->r[27]+0x00000314u,c->r[0]); // 800D0DB0
  c->lr=0x800D0DB8u; f_800506C0(c); // 800D0DB4
  cmps(c,0,(int32_t)c->r[24],0); // 800D0DB8
  c->r[3]=c->r[24]|c->r[24]; // 800D0DBC
  if (crb(c,2)) { goto L_800D0DC8; } // 800D0DC0
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 800D0DC4
L_800D0DC8:;
  c->r[29]=0u+0x00000001u; // 800D0DC8
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D0DCC
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800D0DD0
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 800D0DD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0DD8
  if (!crb(c,2)) { goto L_800D0E1C; } // 800D0DDC
  c->r[28]=0u+0x80730000u; // 800D0DE0
  c->r[3]=c->r[28]+0x000073A8u; // 800D0DE4
  c->lr=0x800D0DECu; f_800506C0(c); // 800D0DE8
  c->r[6]=0u+0x806D0000u; // 800D0DEC
  c->r[4]=0u+0x80050000u; // 800D0DF0
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 800D0DF4
  c->r[3]=c->r[28]+0x000073A8u; // 800D0DF8
  c->r[0]=c->r[6]+0x00000008u; // 800D0DFC
  c->r[5]=0u+0x80750000u; // 800D0E00
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D0E04
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 800D0E08
  c->r[5]=c->r[5]+0x00003900u; // 800D0E0C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D0E10
  c->lr=0x800D0E18u; f_803A92B8(c); // 800D0E14
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 800D0E18
L_800D0E1C:;
  c->r[3]=0u+0x80730000u; // 800D0E1C
  c->r[5]=c->r[24]|c->r[24]; // 800D0E20
  c->r[3]=c->r[3]+0x000073A8u; // 800D0E24
  c->r[4]=c->r[3]|c->r[3]; // 800D0E28
  c->lr=0x800D0E30u; f_802DDCA8(c); // 800D0E2C
  c->r[24]=c->r[27]+0x0000033Cu; // 800D0E30
  c->r[3]=c->r[24]|c->r[24]; // 800D0E34
  c->lr=0x800D0E3Cu; f_800506C0(c); // 800D0E38
  cmps(c,0,(int32_t)c->r[24],0); // 800D0E3C
  c->r[3]=c->r[24]|c->r[24]; // 800D0E40
  if (crb(c,2)) { goto L_800D0E4C; } // 800D0E44
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 800D0E48
L_800D0E4C:;
  c->r[29]=0u+0x00000001u; // 800D0E4C
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D0E50
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800D0E54
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800D0E58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0E5C
  if (!crb(c,2)) { goto L_800D0EA0; } // 800D0E60
  c->r[28]=0u+0x80750000u; // 800D0E64
  c->r[3]=c->r[28]+0xFFFF8158u; // 800D0E68
  c->lr=0x800D0E70u; f_800506C0(c); // 800D0E6C
  c->r[6]=0u+0x806D0000u; // 800D0E70
  c->r[4]=0u+0x80080000u; // 800D0E74
  c->r[6]=c->r[6]+0x000038F0u; // 800D0E78
  c->r[3]=c->r[28]+0xFFFF8158u; // 800D0E7C
  c->r[0]=c->r[6]+0x00000008u; // 800D0E80
  c->r[5]=0u+0x80750000u; // 800D0E84
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D0E88
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800D0E8C
  c->r[5]=c->r[5]+0x000038F4u; // 800D0E90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D0E94
  c->lr=0x800D0E9Cu; f_803A92B8(c); // 800D0E98
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 800D0E9C
L_800D0EA0:;
  c->r[3]=0u+0x80750000u; // 800D0EA0
  c->r[5]=c->r[24]|c->r[24]; // 800D0EA4
  c->r[3]=c->r[3]+0xFFFF8158u; // 800D0EA8
  c->r[4]=c->r[3]|c->r[3]; // 800D0EAC
  c->lr=0x800D0EB4u; f_802DDCA8(c); // 800D0EB0
  c->r[3]=0u+0x806D0000u; // 800D0EB4
  W32(c->r[27]+0x00000054u,c->r[26]); // 800D0EB8
  c->r[3]=c->r[3]+0x00004AE8u; // 800D0EBC
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D0EC0
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800D0EC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0EC8
  if (!crb(c,2)) { goto L_800D0EE8; } // 800D0ECC
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800D0ED0
  c->r[0]=0u+0x00000001u; // 800D0ED4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800D0ED8
  c->r[3]=c->r[3]+0x00000001u; // 800D0EDC
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800D0EE0
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800D0EE4
L_800D0EE8:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800D0EE8
  W32(c->r[27]+0x00000328u,c->r[0]); // 800D0EEC
  c->r[0]=R8(c->r[13]+0xFFFFC2ACu); // 800D0EF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0EF4
  if (!crb(c,2)) { goto L_800D0F14; } // 800D0EF8
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800D0EFC
  c->r[0]=0u+0x00000001u; // 800D0F00
  W32(c->r[13]+0xFFFFC2A8u,c->r[3]); // 800D0F04
  c->r[3]=c->r[3]+0x00000001u; // 800D0F08
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800D0F0C
  W8(c->r[13]+0xFFFFC2ACu,c->r[0]); // 800D0F10
L_800D0F14:;
  c->r[0]=R32(c->r[13]+0xFFFFC2A8u); // 800D0F14
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 800D0F18
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 800D0F1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0F20
  if (!crb(c,2)) { goto L_800D0F40; } // 800D0F24
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800D0F28
  c->r[0]=0u+0x00000001u; // 800D0F2C
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 800D0F30
  c->r[3]=c->r[3]+0x00000001u; // 800D0F34
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800D0F38
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 800D0F3C
L_800D0F40:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 800D0F40
  c->r[5]=0u+0x806D0000u; // 800D0F44
  c->r[5]=c->r[5]+0xFFFFE468u; // 800D0F48
  W32(c->r[27]+0x00000350u,c->r[0]); // 800D0F4C
  c->r[3]=c->r[27]+0x000003B0u; // 800D0F50
  c->r[4]=0u+0x00000000u; // 800D0F54
  W32(c->r[27]+0x00000400u,c->r[5]); // 800D0F58
  c->r[5]=0u+0x00000050u; // 800D0F5C
  c->lr=0x800D0F64u; f_800043EC(c); // 800D0F60
  c->r[4]=0u+0x806D0000u; // 800D0F64
  c->r[3]=c->r[27]+0x00000450u; // 800D0F68
  c->r[4]=c->r[4]+0xFFFFE170u; // 800D0F6C
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D0F70
  c->r[0]=c->r[4]+0x00000044u; // 800D0F74
  W32(c->r[27]+0x00000400u,c->r[0]); // 800D0F78
  c->lr=0x800D0F80u; f_8007BDFC(c); // 800D0F7C
  c->r[3]=c->r[27]+0x000004C4u; // 800D0F80
  c->lr=0x800D0F88u; f_8007BDFC(c); // 800D0F84
  c->r[3]=c->r[27]+0x00000538u; // 800D0F88
  c->r[4]=0u+0x00000000u; // 800D0F8C
  c->r[5]=0u+0x00000008u; // 800D0F90
  c->lr=0x800D0F98u; f_800043EC(c); // 800D0F94
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D0F98
  cmps(c,0,(int32_t)c->r[24],0); // 800D0F9C
  if (crb(c,2)) { goto L_800D0FE4; } // 800D0FA0
  c->lr=0x800D0FA8u; f_800CFE74(c); // 800D0FA4
  c->r[26]=c->r[3]|c->r[3]; // 800D0FA8
  c->lr=0x800D0FB0u; f_8007BDCC(c); // 800D0FAC
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 800D0FB0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D0FB4
  c->r[5]=0u+0x800D0000u; // 800D0FB8
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D0FBC
  c->r[4]=c->r[24]+c->r[4]; // 800D0FC0
  c->r[5]=c->r[5]+0x000013B8u; // 800D0FC4
  c->r[4]=c->r[4]+c->r[0]; // 800D0FC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D0FCC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D0FD0
  cmpu(c,0,c->r[0],0x0000000Cu); // 800D0FD4
  if (!crb(c,0)) { goto L_800D0FE4; } // 800D0FD8
  c->r[0]=0u+0x0000000Cu; // 800D0FDC
  W32(c->r[24]+c->r[3],c->r[0]); // 800D0FE0
L_800D0FE4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D0FE4
  cmps(c,0,(int32_t)c->r[24],0); // 800D0FE8
  if (crb(c,2)) { goto L_800D1054; } // 800D0FEC
  c->lr=0x800D0FF4u; f_800CFE74(c); // 800D0FF0
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800D0FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D0FF8
  if (!crb(c,2)) { goto L_800D101C; } // 800D0FFC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D1000
  c->r[0]=0u+0x00000001u; // 800D1004
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D1008
  c->r[4]=c->r[5]+0x00000001u; // 800D100C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D1010
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800D1014
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800D1018
L_800D101C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D101C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800D1020
  c->r[5]=0u+0x800D0000u; // 800D1024
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1028
  c->r[4]=c->r[24]+c->r[4]; // 800D102C
  c->r[5]=c->r[5]+0x000013B4u; // 800D1030
  c->r[4]=c->r[4]+c->r[0]; // 800D1034
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D1038
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D103C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1040
  cmpu(c,0,c->r[0],0x00000018u); // 800D1044
  if (!crb(c,0)) { goto L_800D1054; } // 800D1048
  c->r[0]=0u+0x00000018u; // 800D104C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D1050
L_800D1054:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D1054
  cmps(c,0,(int32_t)c->r[24],0); // 800D1058
  if (crb(c,2)) { goto L_800D10C4; } // 800D105C
  c->lr=0x800D1064u; f_800CFE74(c); // 800D1060
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800D1064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1068
  if (!crb(c,2)) { goto L_800D108C; } // 800D106C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D1070
  c->r[0]=0u+0x00000001u; // 800D1074
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D1078
  c->r[4]=c->r[5]+0x00000001u; // 800D107C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D1080
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800D1084
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800D1088
L_800D108C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D108C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800D1090
  c->r[5]=0u+0x800D0000u; // 800D1094
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1098
  c->r[4]=c->r[24]+c->r[4]; // 800D109C
  c->r[5]=c->r[5]+0x000013B0u; // 800D10A0
  c->r[4]=c->r[4]+c->r[0]; // 800D10A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D10A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D10AC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D10B0
  cmpu(c,0,c->r[0],0x0000006Cu); // 800D10B4
  if (!crb(c,0)) { goto L_800D10C4; } // 800D10B8
  c->r[0]=0u+0x0000006Cu; // 800D10BC
  W32(c->r[24]+c->r[3],c->r[0]); // 800D10C0
L_800D10C4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D10C4
  cmps(c,0,(int32_t)c->r[24],0); // 800D10C8
  if (crb(c,2)) { goto L_800D1134; } // 800D10CC
  c->lr=0x800D10D4u; f_800CFE74(c); // 800D10D0
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800D10D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D10D8
  if (!crb(c,2)) { goto L_800D10FC; } // 800D10DC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D10E0
  c->r[0]=0u+0x00000001u; // 800D10E4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D10E8
  c->r[4]=c->r[5]+0x00000001u; // 800D10EC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D10F0
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 800D10F4
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800D10F8
L_800D10FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D10FC
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 800D1100
  c->r[5]=0u+0x800D0000u; // 800D1104
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1108
  c->r[4]=c->r[24]+c->r[4]; // 800D110C
  c->r[5]=c->r[5]+0x000013ACu; // 800D1110
  c->r[4]=c->r[4]+c->r[0]; // 800D1114
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D1118
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D111C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1120
  cmpu(c,0,c->r[0],0x0000002Cu); // 800D1124
  if (!crb(c,0)) { goto L_800D1134; } // 800D1128
  c->r[0]=0u+0x0000002Cu; // 800D112C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D1130
L_800D1134:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D1134
  cmps(c,0,(int32_t)c->r[24],0); // 800D1138
  if (crb(c,2)) { goto L_800D11A4; } // 800D113C
  c->lr=0x800D1144u; f_800CFE74(c); // 800D1140
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800D1144
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1148
  if (!crb(c,2)) { goto L_800D116C; } // 800D114C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D1150
  c->r[0]=0u+0x00000001u; // 800D1154
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D1158
  c->r[4]=c->r[5]+0x00000001u; // 800D115C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D1160
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800D1164
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800D1168
L_800D116C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D116C
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800D1170
  c->r[5]=0u+0x800D0000u; // 800D1174
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1178
  c->r[4]=c->r[24]+c->r[4]; // 800D117C
  c->r[5]=c->r[5]+0x000013A8u; // 800D1180
  c->r[4]=c->r[4]+c->r[0]; // 800D1184
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D1188
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D118C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1190
  cmpu(c,0,c->r[0],0x00000010u); // 800D1194
  if (!crb(c,0)) { goto L_800D11A4; } // 800D1198
  c->r[0]=0u+0x00000010u; // 800D119C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D11A0
L_800D11A4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D11A4
  cmps(c,0,(int32_t)c->r[24],0); // 800D11A8
  if (crb(c,2)) { goto L_800D1214; } // 800D11AC
  c->lr=0x800D11B4u; f_800CFE74(c); // 800D11B0
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800D11B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D11B8
  if (!crb(c,2)) { goto L_800D11DC; } // 800D11BC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D11C0
  c->r[0]=0u+0x00000001u; // 800D11C4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D11C8
  c->r[4]=c->r[5]+0x00000001u; // 800D11CC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D11D0
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800D11D4
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800D11D8
L_800D11DC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D11DC
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800D11E0
  c->r[5]=0u+0x800D0000u; // 800D11E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D11E8
  c->r[4]=c->r[24]+c->r[4]; // 800D11EC
  c->r[5]=c->r[5]+0x000013A4u; // 800D11F0
  c->r[4]=c->r[4]+c->r[0]; // 800D11F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D11F8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D11FC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1200
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D1204
  if (!crb(c,0)) { goto L_800D1214; } // 800D1208
  c->r[0]=0u+0x0000005Cu; // 800D120C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D1210
L_800D1214:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D1214
  cmps(c,0,(int32_t)c->r[24],0); // 800D1218
  if (crb(c,2)) { goto L_800D1284; } // 800D121C
  c->lr=0x800D1224u; f_800CFE74(c); // 800D1220
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800D1224
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1228
  if (!crb(c,2)) { goto L_800D124C; } // 800D122C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D1230
  c->r[0]=0u+0x00000001u; // 800D1234
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D1238
  c->r[4]=c->r[5]+0x00000001u; // 800D123C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D1240
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800D1244
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800D1248
L_800D124C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D124C
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800D1250
  c->r[5]=0u+0x800D0000u; // 800D1254
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1258
  c->r[4]=c->r[24]+c->r[4]; // 800D125C
  c->r[5]=c->r[5]+0x000013A0u; // 800D1260
  c->r[4]=c->r[4]+c->r[0]; // 800D1264
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D1268
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D126C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1270
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D1274
  if (!crb(c,0)) { goto L_800D1284; } // 800D1278
  c->r[0]=0u+0x0000005Cu; // 800D127C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D1280
L_800D1284:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D1284
  cmps(c,0,(int32_t)c->r[24],0); // 800D1288
  if (crb(c,2)) { goto L_800D12F4; } // 800D128C
  c->lr=0x800D1294u; f_800CFE74(c); // 800D1290
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800D1294
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1298
  if (!crb(c,2)) { goto L_800D12BC; } // 800D129C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D12A0
  c->r[0]=0u+0x00000001u; // 800D12A4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D12A8
  c->r[4]=c->r[5]+0x00000001u; // 800D12AC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D12B0
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800D12B4
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800D12B8
L_800D12BC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D12BC
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800D12C0
  c->r[5]=0u+0x800D0000u; // 800D12C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D12C8
  c->r[4]=c->r[24]+c->r[4]; // 800D12CC
  c->r[5]=c->r[5]+0x0000139Cu; // 800D12D0
  c->r[4]=c->r[4]+c->r[0]; // 800D12D4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D12D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D12DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D12E0
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D12E4
  if (!crb(c,0)) { goto L_800D12F4; } // 800D12E8
  c->r[0]=0u+0x0000005Cu; // 800D12EC
  W32(c->r[24]+c->r[3],c->r[0]); // 800D12F0
L_800D12F4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D12F4
  cmps(c,0,(int32_t)c->r[24],0); // 800D12F8
  if (crb(c,2)) { goto L_800D1364; } // 800D12FC
  c->lr=0x800D1304u; f_800CFE74(c); // 800D1300
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800D1304
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1308
  if (!crb(c,2)) { goto L_800D132C; } // 800D130C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D1310
  c->r[0]=0u+0x00000001u; // 800D1314
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D1318
  c->r[4]=c->r[5]+0x00000001u; // 800D131C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D1320
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800D1324
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800D1328
L_800D132C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D132C
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800D1330
  c->r[5]=0u+0x800D0000u; // 800D1334
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1338
  c->r[4]=c->r[24]+c->r[4]; // 800D133C
  c->r[5]=c->r[5]+0x00001398u; // 800D1340
  c->r[4]=c->r[4]+c->r[0]; // 800D1344
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D1348
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D134C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D1350
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D1354
  if (!crb(c,0)) { goto L_800D1364; } // 800D1358
  c->r[0]=0u+0x0000005Cu; // 800D135C
  W32(c->r[24]+c->r[3],c->r[0]); // 800D1360
L_800D1364:;
  c->r[3]=c->r[27]|c->r[27]; // 800D1364
  c->lr=0x800D136Cu; f_8005BBF0(c); // 800D1368
  c->r[4]=0u+0x806D0000u; // 800D136C
  c->r[3]=c->r[27]|c->r[27]; // 800D1370
  c->r[4]=c->r[4]+0x000048F8u; // 800D1374
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D1378
  c->r[0]=c->r[4]+0x00000044u; // 800D137C
  W32(c->r[27]+0x00000400u,c->r[0]); // 800D1380
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1384
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D1388
  c->lr=c->r[0]; // 800D138C
  c->r[1]=c->r[1]+0x00000040u; // 800D1390
  return; // 800D1394
}

// fn_800D1398
void f_800D1398(Ctx* __restrict c) {
  trace_call(0x800D1398u);
  f_8005E338(c); return; // 800D1398
}

// fn_800D139C
void f_800D139C(Ctx* __restrict c) {
  trace_call(0x800D139Cu);
  f_8005E324(c); return; // 800D139C
}

// fn_800D13A0
void f_800D13A0(Ctx* __restrict c) {
  trace_call(0x800D13A0u);
  f_8005E310(c); return; // 800D13A0
}

// fn_800D13A4
void f_800D13A4(Ctx* __restrict c) {
  trace_call(0x800D13A4u);
  f_8005E2FC(c); return; // 800D13A4
}

// fn_800D13A8
void f_800D13A8(Ctx* __restrict c) {
  trace_call(0x800D13A8u);
  f_8005E34C(c); return; // 800D13A8
}

// fn_800D13AC
void f_800D13AC(Ctx* __restrict c) {
  trace_call(0x800D13ACu);
  f_8005E360(c); return; // 800D13AC
}

// fn_800D13B0
void f_800D13B0(Ctx* __restrict c) {
  trace_call(0x800D13B0u);
  f_8005D47C(c); return; // 800D13B0
}

// fn_800D13B4
void f_800D13B4(Ctx* __restrict c) {
  trace_call(0x800D13B4u);
  f_8005D468(c); return; // 800D13B4
}

// fn_800D13B8
void f_800D13B8(Ctx* __restrict c) {
  trace_call(0x800D13B8u);
  f_8005BEDC(c); return; // 800D13B8
}

// fn_800D13BC
void f_800D13BC(Ctx* __restrict c) {
  trace_call(0x800D13BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D13BC
  c->r[0]=c->lr; // 800D13C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D13C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D13C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D13CC
  c->r[30]=c->r[3]|c->r[3]; // 800D13D0
  c->r[31]=c->r[4]|c->r[4]; // 800D13D4
  if (crb(c,2)) { goto L_800D13F8; } // 800D13D8
  if (crb(c,2)) { goto L_800D13E8; } // 800D13DC
  c->r[4]=0u+0x00000000u; // 800D13E0
  c->lr=0x800D13E8u; f_8005BD00(c); // 800D13E4
L_800D13E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D13E8
  if (!crb(c,1)) { goto L_800D13F8; } // 800D13EC
  c->r[3]=c->r[30]|c->r[30]; // 800D13F0
  c->lr=0x800D13F8u; f_8005328C(c); // 800D13F4
L_800D13F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D13F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D13FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1400
  c->lr=c->r[0]; // 800D1404
  c->r[1]=c->r[1]+0x00000010u; // 800D1408
  return; // 800D140C
}

// fn_800D1410
void f_800D1410(Ctx* __restrict c) {
  trace_call(0x800D1410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1410
  c->r[0]=c->lr; // 800D1414
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1418
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D141C
  c->f[2]=c->f[1]; // 800D1420
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1424
  c->f[3]=c->f[1]; // 800D1428
  c->r[31]=c->r[3]|c->r[3]; // 800D142C
  c->lr=0x800D1434u; f_80316D18(c); // 800D1430
  c->r[0]=0u+0x00000000u; // 800D1434
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800D1438
  c->r[3]=c->r[31]+0x000005C4u; // 800D143C
  c->r[4]=0u+0x00000000u; // 800D1440
  c->r[5]=0u+0x00000028u; // 800D1444
  c->lr=0x800D144Cu; f_800043EC(c); // 800D1448
  c->r[3]=c->r[31]+0x000005ECu; // 800D144C
  c->r[4]=0u+0x00000000u; // 800D1450
  c->r[5]=0u+0x00000008u; // 800D1454
  c->lr=0x800D145Cu; f_800043EC(c); // 800D1458
  c->r[3]=c->r[31]|c->r[31]; // 800D145C
  c->lr=0x800D1464u; f_8005EAA0(c); // 800D1460
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1464
  c->r[31]=c->r[3]|c->r[3]; // 800D1468
  c->lr=0x800D1470u; f_80101528(c); // 800D146C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1470
  c->r[3]=c->r[31]|c->r[31]; // 800D1474
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1478
  c->lr=0x800D1480u; f_80101538(c); // 800D147C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1480
  c->r[3]=c->r[31]|c->r[31]; // 800D1484
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1488
  c->lr=0x800D1490u; f_80101544(c); // 800D148C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1490
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1494
  c->lr=c->r[0]; // 800D1498
  c->r[1]=c->r[1]+0x00000010u; // 800D149C
  return; // 800D14A0
}

// fn_800D14A4
void f_800D14A4(Ctx* __restrict c) {
  trace_call(0x800D14A4u);
  f_800D3F5C(c); return; // 800D14A4
}

// fn_800D14A8
void f_800D14A8(Ctx* __restrict c) {
  trace_call(0x800D14A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D14A8
  c->r[0]=c->lr; // 800D14AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D14B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D14B4
  c->r[31]=c->r[1]|c->r[1]; // 800D14B8
  c->r[28]=c->r[3]|c->r[3]; // 800D14BC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800D14C0
  c->r[12]=R32(c->r[12]+0x00000110u); // 800D14C4
  c->ctr=c->r[12]; // 800D14C8
  if (true) { c->lr=0x800D14D0u; dispatch(c,c->ctr); } // 800D14CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D14D0
  if (crb(c,2)) { goto L_800D1548; } // 800D14D4
  c->lr=0x800D14DCu; f_800CFE44(c); // 800D14D8
  c->r[4]=c->r[3]|c->r[3]; // 800D14DC
  c->r[3]=c->r[28]|c->r[28]; // 800D14E0
  c->lr=0x800D14E8u; f_80062F4C(c); // 800D14E4
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D14E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D14EC
  c->r[3]=c->r[28]+c->r[0]; // 800D14F0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D14F4
  cmps(c,0,(int32_t)c->r[29],0); // 800D14F8
  if (crb(c,2)) { goto L_800D1528; } // 800D14FC
  c->r[30]=0u+0x00000000u; // 800D1500
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D1504
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D1508
  c->lr=0x800D1510u; f_800CFE44(c); // 800D150C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D1510
  c->r[0]=c->r[13]+0xFFFF8410u; // 800D1514
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1518
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D151C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D1520
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D1524
L_800D1528:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1528
  c->r[0]=0u+0x00000000u; // 800D152C
  c->r[3]=c->r[28]|c->r[28]; // 800D1530
  c->r[4]=c->r[29]|c->r[29]; // 800D1534
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D1538
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D153C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D1540
  c->lr=0x800D1548u; f_8006306C(c); // 800D1544
L_800D1548:;
  c->r[10]=c->r[31]|c->r[31]; // 800D1548
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D154C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D1550
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D1554
  c->r[1]=c->r[10]|c->r[10]; // 800D1558
  c->lr=c->r[0]; // 800D155C
  return; // 800D1560
}

// fn_800D1564
void f_800D1564(Ctx* __restrict c) {
  trace_call(0x800D1564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1564
  c->r[0]=c->lr; // 800D1568
  c->r[5]=0u+0x00000028u; // 800D156C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1570
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1574
  c->r[26]=c->r[3]|c->r[3]; // 800D1578
  c->r[27]=c->r[4]|c->r[4]; // 800D157C
  c->r[4]=0u+0x00000000u; // 800D1580
  c->r[3]=c->r[3]+0x000005C4u; // 800D1584
  c->lr=0x800D158Cu; f_800043EC(c); // 800D1588
  c->r[3]=c->r[27]|c->r[27]; // 800D158C
  c->lr=0x800D1594u; f_802D93E8(c); // 800D1590
  cmps(c,0,(int32_t)c->r[3],0); // 800D1594
  if (crb(c,2)) { goto L_800D1668; } // 800D1598
  c->r[3]=c->r[27]|c->r[27]; // 800D159C
  c->r[4]=0u+0x00000008u; // 800D15A0
  c->lr=0x800D15A8u; f_802D9584(c); // 800D15A4
  W32(c->r[26]+0x000005C4u,c->r[3]); // 800D15A8
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800D15AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D15B0
  if (!crb(c,2)) { goto L_800D15F8; } // 800D15B4
  c->r[31]=0u+0x80730000u; // 800D15B8
  c->r[3]=c->r[31]+0x00005908u; // 800D15BC
  c->lr=0x800D15C4u; f_8009822C(c); // 800D15C0
  c->r[6]=0u+0x806D0000u; // 800D15C4
  c->r[4]=0u+0x80050000u; // 800D15C8
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800D15CC
  c->r[3]=c->r[31]+0x00005908u; // 800D15D0
  c->r[0]=c->r[6]+0x00000028u; // 800D15D4
  c->r[5]=0u+0x80750000u; // 800D15D8
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800D15DC
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800D15E0
  c->r[5]=c->r[5]+0x000038E8u; // 800D15E4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800D15E8
  c->lr=0x800D15F0u; f_803A92B8(c); // 800D15EC
  c->r[0]=0u+0x00000001u; // 800D15F0
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800D15F4
L_800D15F8:;
  c->r[4]=R32(c->r[26]+0x00000448u); // 800D15F8
  c->r[3]=0u+0x80730000u; // 800D15FC
  c->r[3]=c->r[3]+0x00005908u; // 800D1600
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800D1604
  c->lr=0x800D160Cu; f_800992D4(c); // 800D1608
  c->r[30]=c->r[3]|c->r[3]; // 800D160C
  c->r[29]=0u+0x00000000u; // 800D1610
  c->r[31]=0u+0x00000000u; // 800D1614
L_800D1618:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D1618
  c->r[3]=c->r[27]|c->r[27]; // 800D161C
  c->r[4]=0u+0x00000005u; // 800D1620
  if (crb(c,2)) { goto L_800D162C; } // 800D1624
  c->r[4]=c->r[29]+0x0000000Cu; // 800D1628
L_800D162C:;
  c->lr=0x800D1630u; f_802D9584(c); // 800D162C
  c->r[28]=c->r[3]|c->r[3]; // 800D1630
  c->lr=0x800D1638u; f_803A91D4(c); // 800D1634
  cmps(c,0,(int32_t)c->r[3],0); // 800D1638
  if (crb(c,2)) { goto L_800D1658; } // 800D163C
  c->r[5]=c->r[26]+c->r[31]; // 800D1640
  c->r[3]=c->r[30]|c->r[30]; // 800D1644
  c->r[4]=c->r[28]|c->r[28]; // 800D1648
  c->r[6]=0u+0x00000000u; // 800D164C
  c->r[5]=c->r[5]+0x000005C8u; // 800D1650
  c->lr=0x800D1658u; f_802D24C8(c); // 800D1654
L_800D1658:;
  c->r[29]=c->r[29]+0x00000001u; // 800D1658
  c->r[31]=c->r[31]+0x00000004u; // 800D165C
  cmps(c,0,(int32_t)c->r[29],9); // 800D1660
  if (crb(c,0)) { IRQCHK(c); goto L_800D1618; } // 800D1664
L_800D1668:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1668
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D166C
  c->lr=c->r[0]; // 800D1670
  c->r[1]=c->r[1]+0x00000020u; // 800D1674
  return; // 800D1678
}

// fn_800D167C
void f_800D167C(Ctx* __restrict c) {
  trace_call(0x800D167Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D167C
  c->r[0]=c->lr; // 800D1680
  c->r[5]=0u+0x80690000u; // 800D1684
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D1688
  c->r[0]=0u+0x00000002u; // 800D168C
  c->r[5]=c->r[5]+0xFFFFE748u; // 800D1690
  c->r[6]=c->r[1]+0x00000004u; // 800D1694
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1698
  c->r[28]=c->r[4]|c->r[4]; // 800D169C
  c->r[27]=c->r[3]|c->r[3]; // 800D16A0
  c->r[4]=c->r[5]+0xFFFFFFFCu; // 800D16A4
  c->ctr=c->r[0]; // 800D16A8
L_800D16AC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800D16AC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800D16B0
  W32(c->r[6]+0x00000004u,c->r[3]); // 800D16B4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800D16B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D16AC; } // 800D16BC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D16C0
  c->r[30]=c->r[1]+0x00000008u; // 800D16C4
  W32(c->r[6]+0x00000004u,c->r[0]); // 800D16C8
  c->r[29]=0u+0x00000000u; // 800D16CC
  c->r[31]=0u+0x00000000u; // 800D16D0
L_800D16D4:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800D16D4
  c->r[4]=c->r[28]|c->r[28]; // 800D16D8
  c->lr=0x800D16E0u; f_803B393C(c); // 800D16DC
  cmps(c,0,(int32_t)c->r[3],0); // 800D16E0
  if (!crb(c,2)) { goto L_800D170C; } // 800D16E4
  cmps(c,0,(int32_t)c->r[29],-1); // 800D16E8
  if (!crb(c,1)) { goto L_800D171C; } // 800D16EC
  cmps(c,0,(int32_t)c->r[29],5); // 800D16F0
  if (!crb(c,0)) { goto L_800D171C; } // 800D16F4
  c->r[4]=c->r[29]|c->r[29]; // 800D16F8
  c->r[3]=c->r[27]+0x000005ECu; // 800D16FC
  c->r[5]=0u+0x00000001u; // 800D1700
  c->lr=0x800D1708u; f_8005DCA0(c); // 800D1704
  goto L_800D171C; // 800D1708
L_800D170C:;
  c->r[29]=c->r[29]+0x00000001u; // 800D170C
  c->r[31]=c->r[31]+0x00000004u; // 800D1710
  cmpu(c,0,c->r[29],0x00000005u); // 800D1714
  if (crb(c,0)) { IRQCHK(c); goto L_800D16D4; } // 800D1718
L_800D171C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D171C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D1720
  c->lr=c->r[0]; // 800D1724
  c->r[1]=c->r[1]+0x00000040u; // 800D1728
  return; // 800D172C
}

// fn_800D1730
void f_800D1730(Ctx* __restrict c) {
  trace_call(0x800D1730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1730
  c->r[0]=c->lr; // 800D1734
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 800D1738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D173C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1740
  c->r[30]=c->r[3]|c->r[3]; // 800D1744
  c->r[0]=R32(c->r[4]+0x00000088u); // 800D1748
  cmps(c,0,(int32_t)c->r[0],3); // 800D174C
  if (!crb(c,2)) { goto L_800D175C; } // 800D1750
  c->r[3]=0u+0x00000001u; // 800D1754
  goto L_800D17C0; // 800D1758
L_800D175C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D175C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1760
  if (crb(c,2)) { goto L_800D178C; } // 800D1764
  c->r[31]=R32(c->r[3]+0x00000000u); // 800D1768
  c->lr=0x800D1770u; f_800D02F0(c); // 800D176C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800D1770
  if (crb(c,2)) { goto L_800D1784; } // 800D1774
  c->lr=0x800D177Cu; f_800D024C(c); // 800D1778
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800D177C
  if (!crb(c,2)) { goto L_800D178C; } // 800D1780
L_800D1784:;
  c->r[3]=0u+0x00000001u; // 800D1784
  goto L_800D17C0; // 800D1788
L_800D178C:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D178C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1790
  if (crb(c,2)) { goto L_800D17BC; } // 800D1794
  c->r[31]=R32(c->r[3]+0x00000000u); // 800D1798
  c->lr=0x800D17A0u; f_800D02F0(c); // 800D179C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800D17A0
  if (crb(c,2)) { goto L_800D17B4; } // 800D17A4
  c->lr=0x800D17ACu; f_800D024C(c); // 800D17A8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800D17AC
  if (!crb(c,2)) { goto L_800D17BC; } // 800D17B0
L_800D17B4:;
  c->r[3]=0u+0x00000001u; // 800D17B4
  goto L_800D17C0; // 800D17B8
L_800D17BC:;
  c->r[3]=0u+0x00000000u; // 800D17BC
L_800D17C0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D17C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D17C4
  c->lr=c->r[0]; // 800D17C8
  c->r[1]=c->r[1]+0x00000010u; // 800D17CC
  return; // 800D17D0
}

// fn_800D17D4
void f_800D17D4(Ctx* __restrict c) {
  trace_call(0x800D17D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D17D4
  c->r[0]=c->lr; // 800D17D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D17DC
  c->r[11]=c->r[1]+0x00000030u; // 800D17E0
  c->lr=0x800D17E8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D17E4
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800D17E8
  c->r[28]=c->r[3]|c->r[3]; // 800D17EC
  c->r[3]=c->r[4]+0x00000004u; // 800D17F0
  c->lr=0x800D17F8u; f_800A097C(c); // 800D17F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D17F8
  if (crb(c,2)) { goto L_800D183C; } // 800D17FC
  c->r[0]=0u+0x00000001u; // 800D1800
  W32(c->r[28]+0x000005C0u,c->r[0]); // 800D1804
  c->r[3]=c->r[28]|c->r[28]; // 800D1808
  c->lr=0x800D1810u; f_800D3608(c); // 800D180C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1810
  c->r[3]=c->r[1]+0x00000008u; // 800D1814
  c->lr=0x800D181Cu; f_800C998C(c); // 800D1818
  c->r[31]=c->r[3]|c->r[3]; // 800D181C
  c->r[4]=c->r[28]|c->r[28]; // 800D1820
  c->r[3]=c->r[1]+0x00000014u; // 800D1824
  c->lr=0x800D182Cu; f_80061A48(c); // 800D1828
  c->r[3]=R32(c->r[28]+0x0000041Cu); // 800D182C
  c->r[5]=c->r[31]|c->r[31]; // 800D1830
  c->r[4]=c->r[1]+0x00000014u; // 800D1834
  c->lr=0x800D183Cu; f_800C2D1C(c); // 800D1838
L_800D183C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D183C
  c->r[4]=0u+0x00000000u; // 800D1840
  c->lr=0x800D1848u; f_8005EA70(c); // 800D1844
  c->r[3]=c->r[28]|c->r[28]; // 800D1848
  c->r[4]=0u+0x00000000u; // 800D184C
  c->lr=0x800D1854u; f_8005EE88(c); // 800D1850
  c->r[30]=R32(c->r[28]+0x000005C4u); // 800D1854
  cmps(c,0,(int32_t)c->r[30],0); // 800D1858
  if (crb(c,2)) { goto L_800D1994; } // 800D185C
  c->r[31]=0u+0x80690000u; // 800D1860
  c->r[4]=c->r[30]|c->r[30]; // 800D1864
  c->r[31]=c->r[31]+0xFFFFE75Cu; // 800D1868
  c->r[29]=0u+0x00000000u; // 800D186C
  c->r[3]=c->r[31]+0x00000001u; // 800D1870
  c->lr=0x800D1878u; f_803B393C(c); // 800D1874
  cmps(c,0,(int32_t)c->r[3],0); // 800D1878
  if (!crb(c,2)) { goto L_800D1888; } // 800D187C
  c->r[29]=0u+0x00003E83u; // 800D1880
  goto L_800D192C; // 800D1884
L_800D1888:;
  c->r[4]=c->r[30]|c->r[30]; // 800D1888
  c->r[3]=c->r[31]+0x0000000Bu; // 800D188C
  c->lr=0x800D1894u; f_803B393C(c); // 800D1890
  cmps(c,0,(int32_t)c->r[3],0); // 800D1894
  if (!crb(c,2)) { goto L_800D18A4; } // 800D1898
  c->r[29]=0u+0x00003E80u; // 800D189C
  goto L_800D192C; // 800D18A0
L_800D18A4:;
  c->r[4]=c->r[30]|c->r[30]; // 800D18A4
  c->r[3]=c->r[31]+0x00000013u; // 800D18A8
  c->lr=0x800D18B0u; f_803B393C(c); // 800D18AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D18B0
  if (!crb(c,2)) { goto L_800D18C0; } // 800D18B4
  c->r[29]=0u+0x00003E91u; // 800D18B8
  goto L_800D192C; // 800D18BC
L_800D18C0:;
  c->r[4]=c->r[30]|c->r[30]; // 800D18C0
  c->r[3]=c->r[31]+0x0000001Bu; // 800D18C4
  c->lr=0x800D18CCu; f_803B393C(c); // 800D18C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D18CC
  if (!crb(c,2)) { goto L_800D18DC; } // 800D18D0
  c->r[29]=0u+0x00003E94u; // 800D18D4
  goto L_800D192C; // 800D18D8
L_800D18DC:;
  c->r[4]=c->r[30]|c->r[30]; // 800D18DC
  c->r[3]=c->r[31]+0x00000024u; // 800D18E0
  c->lr=0x800D18E8u; f_803B393C(c); // 800D18E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D18E8
  if (!crb(c,2)) { goto L_800D18F8; } // 800D18EC
  c->r[29]=0u+0x00003E93u; // 800D18F0
  goto L_800D192C; // 800D18F4
L_800D18F8:;
  c->r[4]=c->r[30]|c->r[30]; // 800D18F8
  c->r[3]=c->r[31]+0x00000036u; // 800D18FC
  c->lr=0x800D1904u; f_803B393C(c); // 800D1900
  cmps(c,0,(int32_t)c->r[3],0); // 800D1904
  if (!crb(c,2)) { goto L_800D1914; } // 800D1908
  c->r[29]=0u+0x00003E95u; // 800D190C
  goto L_800D192C; // 800D1910
L_800D1914:;
  c->r[4]=c->r[30]|c->r[30]; // 800D1914
  c->r[3]=c->r[31]+0x0000003Fu; // 800D1918
  c->lr=0x800D1920u; f_803B393C(c); // 800D191C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1920
  if (!crb(c,2)) { goto L_800D192C; } // 800D1924
  c->r[29]=0u+0x00003E92u; // 800D1928
L_800D192C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D192C
  if (crb(c,2)) { goto L_800D193C; } // 800D1930
  cmps(c,0,(int32_t)c->r[29],16003); // 800D1934
  if (!crb(c,2)) { goto L_800D1954; } // 800D1938
L_800D193C:;
  c->r[4]=0u+0x80690000u; // 800D193C
  c->r[3]=c->r[28]+0x000000FCu; // 800D1940
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D1944
  c->r[5]=0u+0x00000000u; // 800D1948
  c->r[4]=c->r[4]+0x00000051u; // 800D194C
  c->lr=0x800D1954u; f_802E67B4(c); // 800D1950
L_800D1954:;
  c->r[0]=c->r[29]+0xFFFFC16Eu; // 800D1954
  cmpu(c,0,c->r[0],0x00000001u); // 800D1958
  if (!crb(c,1)) { goto L_800D1974; } // 800D195C
  cmps(c,0,(int32_t)c->r[29],0); // 800D1960
  if (!crb(c,2)) { goto L_800D1984; } // 800D1964
  c->r[3]=c->r[28]|c->r[28]; // 800D1968
  c->lr=0x800D1970u; f_800D1B08(c); // 800D196C
  goto L_800D199C; // 800D1970
L_800D1974:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1974
  c->lr=0x800D197Cu; f_800D1A60(c); // 800D1978
  W32(c->r[3]+0x00000010u,c->r[29]); // 800D197C
  goto L_800D199C; // 800D1980
L_800D1984:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1984
  c->lr=0x800D198Cu; f_800D19B4(c); // 800D1988
  W32(c->r[3]+0x00000010u,c->r[29]); // 800D198C
  goto L_800D199C; // 800D1990
L_800D1994:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1994
  c->lr=0x800D199Cu; f_800D38C8(c); // 800D1998
L_800D199C:;
  c->r[11]=c->r[1]+0x00000030u; // 800D199C
  c->lr=0x800D19A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D19A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D19A4
  c->lr=c->r[0]; // 800D19A8
  c->r[1]=c->r[1]+0x00000030u; // 800D19AC
  return; // 800D19B0
}

// fn_800D19B4
void f_800D19B4(Ctx* __restrict c) {
  trace_call(0x800D19B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D19B4
  c->r[0]=c->lr; // 800D19B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D19BC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D19C0
  c->r[31]=c->r[1]|c->r[1]; // 800D19C4
  c->r[28]=c->r[3]|c->r[3]; // 800D19C8
  c->lr=0x800D19D0u; f_800D0810(c); // 800D19CC
  c->r[4]=c->r[3]|c->r[3]; // 800D19D0
  c->r[3]=c->r[28]|c->r[28]; // 800D19D4
  c->lr=0x800D19DCu; f_80062F4C(c); // 800D19D8
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D19DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D19E0
  c->r[3]=c->r[28]+c->r[0]; // 800D19E4
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D19E8
  cmps(c,0,(int32_t)c->r[29],0); // 800D19EC
  if (crb(c,2)) { goto L_800D1A20; } // 800D19F0
  c->r[30]=0u+0x00000000u; // 800D19F4
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D19F8
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D19FC
  c->lr=0x800D1A04u; f_800D0810(c); // 800D1A00
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D1A04
  c->r[0]=c->r[13]+0xFFFF844Cu; // 800D1A08
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1A0C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D1A10
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D1A14
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D1A18
  W32(c->r[29]+0x00000014u,c->r[30]); // 800D1A1C
L_800D1A20:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1A20
  c->r[0]=0u+0x00000000u; // 800D1A24
  c->r[3]=c->r[28]|c->r[28]; // 800D1A28
  c->r[4]=c->r[29]|c->r[29]; // 800D1A2C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D1A30
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D1A34
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D1A38
  c->lr=0x800D1A40u; f_8006306C(c); // 800D1A3C
  c->r[10]=c->r[31]|c->r[31]; // 800D1A40
  c->r[3]=c->r[29]|c->r[29]; // 800D1A44
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1A48
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D1A4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D1A50
  c->r[1]=c->r[10]|c->r[10]; // 800D1A54
  c->lr=c->r[0]; // 800D1A58
  return; // 800D1A5C
}

// fn_800D1A60
void f_800D1A60(Ctx* __restrict c) {
  trace_call(0x800D1A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1A60
  c->r[0]=c->lr; // 800D1A64
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D1A68
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1A6C
  c->r[31]=c->r[1]|c->r[1]; // 800D1A70
  c->r[28]=c->r[3]|c->r[3]; // 800D1A74
  c->lr=0x800D1A7Cu; f_800D076C(c); // 800D1A78
  c->r[4]=c->r[3]|c->r[3]; // 800D1A7C
  c->r[3]=c->r[28]|c->r[28]; // 800D1A80
  c->lr=0x800D1A88u; f_80062F4C(c); // 800D1A84
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D1A88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1A8C
  c->r[3]=c->r[28]+c->r[0]; // 800D1A90
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D1A94
  cmps(c,0,(int32_t)c->r[29],0); // 800D1A98
  if (crb(c,2)) { goto L_800D1AC8; } // 800D1A9C
  c->r[30]=0u+0x00000000u; // 800D1AA0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D1AA4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D1AA8
  c->lr=0x800D1AB0u; f_800D076C(c); // 800D1AAC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D1AB0
  c->r[0]=c->r[13]+0xFFFF8448u; // 800D1AB4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1AB8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D1ABC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D1AC0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D1AC4
L_800D1AC8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1AC8
  c->r[0]=0u+0x00000000u; // 800D1ACC
  c->r[3]=c->r[28]|c->r[28]; // 800D1AD0
  c->r[4]=c->r[29]|c->r[29]; // 800D1AD4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D1AD8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D1ADC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D1AE0
  c->lr=0x800D1AE8u; f_8006306C(c); // 800D1AE4
  c->r[10]=c->r[31]|c->r[31]; // 800D1AE8
  c->r[3]=c->r[29]|c->r[29]; // 800D1AEC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1AF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D1AF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D1AF8
  c->r[1]=c->r[10]|c->r[10]; // 800D1AFC
  c->lr=c->r[0]; // 800D1B00
  return; // 800D1B04
}

// fn_800D1B08
void f_800D1B08(Ctx* __restrict c) {
  trace_call(0x800D1B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B08
  c->r[0]=c->lr; // 800D1B0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D1B10
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1B14
  c->r[31]=c->r[1]|c->r[1]; // 800D1B18
  c->r[28]=c->r[3]|c->r[3]; // 800D1B1C
  c->lr=0x800D1B24u; f_800D04DC(c); // 800D1B20
  c->r[4]=c->r[3]|c->r[3]; // 800D1B24
  c->r[3]=c->r[28]|c->r[28]; // 800D1B28
  c->lr=0x800D1B30u; f_80062F4C(c); // 800D1B2C
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D1B30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1B34
  c->r[3]=c->r[28]+c->r[0]; // 800D1B38
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D1B3C
  cmps(c,0,(int32_t)c->r[29],0); // 800D1B40
  if (crb(c,2)) { goto L_800D1B6C; } // 800D1B44
  c->r[30]=0u+0x00000000u; // 800D1B48
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D1B4C
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D1B50
  c->lr=0x800D1B58u; f_800D04DC(c); // 800D1B54
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D1B58
  c->r[0]=c->r[13]+0xFFFF8438u; // 800D1B5C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1B60
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D1B64
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D1B68
L_800D1B6C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1B6C
  c->r[0]=0u+0x00000000u; // 800D1B70
  c->r[3]=c->r[28]|c->r[28]; // 800D1B74
  c->r[4]=c->r[29]|c->r[29]; // 800D1B78
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D1B7C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D1B80
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D1B84
  c->lr=0x800D1B8Cu; f_8006306C(c); // 800D1B88
  c->r[10]=c->r[31]|c->r[31]; // 800D1B8C
  c->r[3]=c->r[29]|c->r[29]; // 800D1B90
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1B94
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D1B98
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D1B9C
  c->r[1]=c->r[10]|c->r[10]; // 800D1BA0
  c->lr=c->r[0]; // 800D1BA4
  return; // 800D1BA8
}

// fn_800D1BAC
void f_800D1BAC(Ctx* __restrict c) {
  trace_call(0x800D1BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1BAC
  c->r[0]=c->lr; // 800D1BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1BB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1BB8
  c->r[30]=c->r[3]|c->r[3]; // 800D1BBC
  c->r[31]=c->r[4]|c->r[4]; // 800D1BC0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1BC4
  cmps(c,0,(int32_t)c->r[5],0); // 800D1BC8
  if (crb(c,2)) { goto L_800D1BD8; } // 800D1BCC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D1BD0
  goto L_800D1BDC; // 800D1BD4
L_800D1BD8:;
  c->r[0]=0u+0x00000000u; // 800D1BD8
L_800D1BDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1BDC
  if (!crb(c,2)) { goto L_800D1C10; } // 800D1BE0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D1BE4
  c->r[3]=c->r[3]+0x00000354u; // 800D1BE8
  c->lr=0x800D1BF0u; f_800667BC(c); // 800D1BEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D1BF0
  if (!crb(c,2)) { goto L_800D1C08; } // 800D1BF4
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D1BF8
  c->r[3]=c->r[30]|c->r[30]; // 800D1BFC
  c->r[5]=0u+0x00000001u; // 800D1C00
  c->lr=0x800D1C08u; f_80064744(c); // 800D1C04
L_800D1C08:;
  c->r[0]=0u+0x00000000u; // 800D1C08
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D1C0C
L_800D1C10:;
  c->r[3]=c->r[30]+0x00000354u; // 800D1C10
  c->lr=0x800D1C18u; f_800C9374(c); // 800D1C14
  c->r[0]=c->r[3]+0xFFFFC16Cu; // 800D1C18
  cmpu(c,0,c->r[0],0x00000001u); // 800D1C1C
  if (crb(c,1)) { goto L_800D1C40; } // 800D1C20
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1C24
  c->r[0]=R32(c->r[30]+0x000003A8u); // 800D1C28
  cmpu(c,0,c->r[3],c->r[0]); // 800D1C2C
  if (!crb(c,0)) { goto L_800D1C48; } // 800D1C30
  c->r[3]=c->r[30]|c->r[30]; // 800D1C34
  c->lr=0x800D1C3Cu; f_800D3378(c); // 800D1C38
  goto L_800D1C48; // 800D1C3C
L_800D1C40:;
  c->r[3]=c->r[30]|c->r[30]; // 800D1C40
  c->lr=0x800D1C48u; f_800D3378(c); // 800D1C44
L_800D1C48:;
  c->r[0]=R32(c->r[30]+0x000003A8u); // 800D1C48
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D1C4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C54
  c->lr=c->r[0]; // 800D1C58
  c->r[1]=c->r[1]+0x00000010u; // 800D1C5C
  return; // 800D1C60
}

// fn_800D1C64
void f_800D1C64(Ctx* __restrict c) {
  trace_call(0x800D1C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C64
  c->r[0]=c->lr; // 800D1C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1C6C
  c->r[11]=c->r[1]+0x00000020u; // 800D1C70
  c->lr=0x800D1C78u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1C74
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1C78
  c->r[29]=c->r[3]|c->r[3]; // 800D1C7C
  c->r[30]=c->r[4]|c->r[4]; // 800D1C80
  cmps(c,0,(int32_t)c->r[5],0); // 800D1C84
  if (crb(c,2)) { goto L_800D1C94; } // 800D1C88
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D1C8C
  goto L_800D1C98; // 800D1C90
L_800D1C94:;
  c->r[0]=0u+0x00000000u; // 800D1C94
L_800D1C98:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C98
  if (!crb(c,2)) { goto L_800D1CFC; } // 800D1C9C
  c->r[4]=0u+0x00003E80u; // 800D1CA0
  c->r[3]=c->r[3]+0x00000354u; // 800D1CA4
  c->lr=0x800D1CACu; f_800667BC(c); // 800D1CA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1CAC
  if (!crb(c,2)) { goto L_800D1CC4; } // 800D1CB0
  c->r[3]=c->r[29]|c->r[29]; // 800D1CB4
  c->r[4]=0u+0x00003E80u; // 800D1CB8
  c->r[5]=0u+0x00000001u; // 800D1CBC
  c->lr=0x800D1CC4u; f_80064744(c); // 800D1CC0
L_800D1CC4:;
  c->lr=0x800D1CC8u; f_803B220C(c); // 800D1CC4
  c->r[3]=c->r[3]^0x80000000u; // 800D1CC8
  c->r[0]=0u+0x43300000u; // 800D1CCC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D1CD0
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[3]=RF64(ea);} // 800D1CD4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D1CD8
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1CDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D1CE0
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1CE4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800D1CE8
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1CEC
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800D1CF0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800D1CF4
  {uint32_t ea=c->r[29]+0x0000055Cu; WF32(ea,c->f[0]);} // 800D1CF8
L_800D1CFC:;
  c->r[3]=c->r[29]+0x00000354u; // 800D1CFC
  c->lr=0x800D1D04u; f_800C9374(c); // 800D1D00
  c->r[31]=c->r[3]|c->r[3]; // 800D1D04
  c->r[3]=R32(c->r[29]+0x00000404u); // 800D1D08
  c->lr=0x800D1D10u; f_802EA4B0(c); // 800D1D0C
  cmps(c,0,(int32_t)c->r[31],16000); // 800D1D10
  if (!crb(c,2)) { goto L_800D1D60; } // 800D1D14
  c->r[3]=c->r[29]|c->r[29]; // 800D1D18
  c->lr=0x800D1D20u; f_800D3378(c); // 800D1D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D20
  if (!crb(c,2)) { goto L_800D1D60; } // 800D1D24
  {uint32_t ea=c->r[29]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1D28
  {uint32_t ea=c->r[29]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1D2C
  fcmp(c,0,c->f[0],c->f[1]); // 800D1D30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D1D34
  if (!crb(c,2)) { goto L_800D1D60; } // 800D1D38
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D1D3C
  c->r[3]=c->r[29]+0x00000354u; // 800D1D40
  c->lr=0x800D1D48u; f_800667BC(c); // 800D1D44
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D48
  if (!crb(c,2)) { goto L_800D1D60; } // 800D1D4C
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D1D50
  c->r[3]=c->r[29]|c->r[29]; // 800D1D54
  c->r[5]=0u+0x00000001u; // 800D1D58
  c->lr=0x800D1D60u; f_80064744(c); // 800D1D5C
L_800D1D60:;
  c->r[3]=c->r[29]+0x00000354u; // 800D1D60
  c->lr=0x800D1D68u; f_800667AC(c); // 800D1D64
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D68
  if (crb(c,2)) { goto L_800D1D9C; } // 800D1D6C
  c->r[3]=c->r[29]|c->r[29]; // 800D1D70
  c->lr=0x800D1D78u; f_800D3378(c); // 800D1D74
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D78
  if (!crb(c,2)) { goto L_800D1D9C; } // 800D1D7C
  c->r[0]=c->r[31]+0xFFFFC16Eu; // 800D1D80
  cmpu(c,0,c->r[0],0x00000001u); // 800D1D84
  if (crb(c,1)) { goto L_800D1D9C; } // 800D1D88
  c->r[31]=R32(c->r[30]+0x00000010u); // 800D1D8C
  c->r[3]=c->r[29]|c->r[29]; // 800D1D90
  c->lr=0x800D1D98u; f_800D1A60(c); // 800D1D94
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D1D98
L_800D1D9C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D1D9C
  c->lr=0x800D1DA4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1DA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1DA4
  c->lr=c->r[0]; // 800D1DA8
  c->r[1]=c->r[1]+0x00000020u; // 800D1DAC
  return; // 800D1DB0
}

// fn_800D1DB4
void f_800D1DB4(Ctx* __restrict c) {
  trace_call(0x800D1DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1DB4
  c->r[0]=c->lr; // 800D1DB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1DBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1DC0
  c->r[31]=c->r[4]|c->r[4]; // 800D1DC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1DC8
  c->r[30]=c->r[3]|c->r[3]; // 800D1DCC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1DD0
  cmps(c,0,(int32_t)c->r[5],0); // 800D1DD4
  if (crb(c,2)) { goto L_800D1DE4; } // 800D1DD8
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D1DDC
  goto L_800D1DE8; // 800D1DE0
L_800D1DE4:;
  c->r[0]=0u+0x00000000u; // 800D1DE4
L_800D1DE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1DE8
  if (!crb(c,2)) { goto L_800D1E14; } // 800D1DEC
  c->r[4]=0u+0x00003E83u; // 800D1DF0
  c->r[3]=c->r[3]+0x00000354u; // 800D1DF4
  c->lr=0x800D1DFCu; f_800667BC(c); // 800D1DF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1DFC
  if (!crb(c,2)) { goto L_800D1E14; } // 800D1E00
  c->r[3]=c->r[30]|c->r[30]; // 800D1E04
  c->r[4]=0u+0x00003E83u; // 800D1E08
  c->r[5]=0u+0x00000001u; // 800D1E0C
  c->lr=0x800D1E14u; f_80064744(c); // 800D1E10
L_800D1E14:;
  c->r[4]=c->r[30]|c->r[30]; // 800D1E14
  c->r[3]=c->r[1]+0x00000008u; // 800D1E18
  c->lr=0x800D1E20u; f_800CA1D4(c); // 800D1E1C
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1E20
  c->r[3]=c->r[30]|c->r[30]; // 800D1E24
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1E28
  c->r[4]=c->r[1]+0x00000008u; // 800D1E2C
  c->f[2]=c->f[1]; // 800D1E30
  c->lr=0x800D1E38u; f_80063F5C(c); // 800D1E34
  c->r[3]=c->r[30]|c->r[30]; // 800D1E38
  c->lr=0x800D1E40u; f_8006117C(c); // 800D1E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1E40
  if (crb(c,2)) { goto L_800D1E54; } // 800D1E44
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D1E48
  c->r[3]=c->r[30]|c->r[30]; // 800D1E4C
  c->lr=0x800D1E54u; f_800D3E28(c); // 800D1E50
L_800D1E54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1E54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1E58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1E5C
  c->lr=c->r[0]; // 800D1E60
  c->r[1]=c->r[1]+0x00000020u; // 800D1E64
  return; // 800D1E68
}

// fn_800D1E6C
void f_800D1E6C(Ctx* __restrict c) {
  trace_call(0x800D1E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1E6C
  c->r[0]=c->lr; // 800D1E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1E74
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1E78
  c->r[29]=c->r[3]|c->r[3]; // 800D1E7C
  c->r[30]=c->r[4]|c->r[4]; // 800D1E80
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1E84
  cmps(c,0,(int32_t)c->r[5],0); // 800D1E88
  if (crb(c,2)) { goto L_800D1E98; } // 800D1E8C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D1E90
  goto L_800D1E9C; // 800D1E94
L_800D1E98:;
  c->r[0]=0u+0x00000000u; // 800D1E98
L_800D1E9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1E9C
  if (!crb(c,2)) { goto L_800D1ED4; } // 800D1EA0
  c->r[4]=0u+0x00003E81u; // 800D1EA4
  c->r[3]=c->r[3]+0x00000354u; // 800D1EA8
  c->lr=0x800D1EB0u; f_800667BC(c); // 800D1EAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D1EB0
  if (!crb(c,2)) { goto L_800D1EC8; } // 800D1EB4
  c->r[3]=c->r[29]|c->r[29]; // 800D1EB8
  c->r[4]=0u+0x00003E81u; // 800D1EBC
  c->r[5]=0u+0x00000001u; // 800D1EC0
  c->lr=0x800D1EC8u; f_80064744(c); // 800D1EC4
L_800D1EC8:;
  c->r[3]=c->r[29]|c->r[29]; // 800D1EC8
  c->r[4]=0u+0x00000000u; // 800D1ECC
  c->lr=0x800D1ED4u; f_8005EA70(c); // 800D1ED0
L_800D1ED4:;
  c->r[3]=c->r[29]+0x00000354u; // 800D1ED4
  c->lr=0x800D1EDCu; f_800667AC(c); // 800D1ED8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1EDC
  if (crb(c,2)) { goto L_800D1F40; } // 800D1EE0
  c->r[30]=R32(c->r[30]+0x00000010u); // 800D1EE4
  c->r[0]=c->r[30]+0xFFFFC17Au; // 800D1EE8
  cmpu(c,0,c->r[0],0x00000002u); // 800D1EEC
  if (!crb(c,1)) { goto L_800D1F20; } // 800D1EF0
  cmps(c,0,(int32_t)c->r[30],16002); // 800D1EF4
  if (crb(c,2)) { goto L_800D1F08; } // 800D1EF8
  cmps(c,0,(int32_t)c->r[30],16003); // 800D1EFC
  if (crb(c,2)) { goto L_800D1F14; } // 800D1F00
  goto L_800D1F40; // 800D1F04
L_800D1F08:;
  c->r[3]=c->r[29]|c->r[29]; // 800D1F08
  c->lr=0x800D1F10u; f_800D1B08(c); // 800D1F0C
  goto L_800D1F40; // 800D1F10
L_800D1F14:;
  c->r[3]=c->r[29]|c->r[29]; // 800D1F14
  c->lr=0x800D1F1Cu; f_800D2000(c); // 800D1F18
  goto L_800D1F40; // 800D1F1C
L_800D1F20:;
  c->r[3]=c->r[29]|c->r[29]; // 800D1F20
  c->r[4]=c->r[30]|c->r[30]; // 800D1F24
  c->lr=0x800D1F2Cu; f_800D4124(c); // 800D1F28
  c->r[31]=c->r[3]|c->r[3]; // 800D1F2C
  c->r[3]=c->r[29]|c->r[29]; // 800D1F30
  c->lr=0x800D1F38u; f_800D1F54(c); // 800D1F34
  W32(c->r[3]+0x00000010u,c->r[30]); // 800D1F38
  W32(c->r[3]+0x00000014u,c->r[31]); // 800D1F3C
L_800D1F40:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1F40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1F44
  c->lr=c->r[0]; // 800D1F48
  c->r[1]=c->r[1]+0x00000020u; // 800D1F4C
  return; // 800D1F50
}

// fn_800D1F54
void f_800D1F54(Ctx* __restrict c) {
  trace_call(0x800D1F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1F54
  c->r[0]=c->lr; // 800D1F58
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D1F5C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1F60
  c->r[31]=c->r[1]|c->r[1]; // 800D1F64
  c->r[28]=c->r[3]|c->r[3]; // 800D1F68
  c->lr=0x800D1F70u; f_800D0580(c); // 800D1F6C
  c->r[4]=c->r[3]|c->r[3]; // 800D1F70
  c->r[3]=c->r[28]|c->r[28]; // 800D1F74
  c->lr=0x800D1F7Cu; f_80062F4C(c); // 800D1F78
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D1F7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1F80
  c->r[3]=c->r[28]+c->r[0]; // 800D1F84
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D1F88
  cmps(c,0,(int32_t)c->r[29],0); // 800D1F8C
  if (crb(c,2)) { goto L_800D1FC0; } // 800D1F90
  c->r[30]=0u+0x00000000u; // 800D1F94
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D1F98
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D1F9C
  c->lr=0x800D1FA4u; f_800D0580(c); // 800D1FA0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D1FA4
  c->r[0]=c->r[13]+0xFFFF843Cu; // 800D1FA8
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1FAC
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D1FB0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D1FB4
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D1FB8
  W32(c->r[29]+0x00000014u,c->r[30]); // 800D1FBC
L_800D1FC0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1FC0
  c->r[0]=0u+0x00000000u; // 800D1FC4
  c->r[3]=c->r[28]|c->r[28]; // 800D1FC8
  c->r[4]=c->r[29]|c->r[29]; // 800D1FCC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D1FD0
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D1FD4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D1FD8
  c->lr=0x800D1FE0u; f_8006306C(c); // 800D1FDC
  c->r[10]=c->r[31]|c->r[31]; // 800D1FE0
  c->r[3]=c->r[29]|c->r[29]; // 800D1FE4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1FE8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D1FEC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D1FF0
  c->r[1]=c->r[10]|c->r[10]; // 800D1FF4
  c->lr=c->r[0]; // 800D1FF8
  return; // 800D1FFC
}

// fn_800D2000
void f_800D2000(Ctx* __restrict c) {
  trace_call(0x800D2000u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2000
  c->r[0]=c->lr; // 800D2004
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2008
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D200C
  c->r[31]=c->r[1]|c->r[1]; // 800D2010
  c->r[28]=c->r[3]|c->r[3]; // 800D2014
  c->lr=0x800D201Cu; f_800D01A8(c); // 800D2018
  c->r[4]=c->r[3]|c->r[3]; // 800D201C
  c->r[3]=c->r[28]|c->r[28]; // 800D2020
  c->lr=0x800D2028u; f_80062F4C(c); // 800D2024
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D2028
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D202C
  c->r[3]=c->r[28]+c->r[0]; // 800D2030
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D2034
  cmps(c,0,(int32_t)c->r[29],0); // 800D2038
  if (crb(c,2)) { goto L_800D2064; } // 800D203C
  c->r[30]=0u+0x00000000u; // 800D2040
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D2044
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D2048
  c->lr=0x800D2050u; f_800D01A8(c); // 800D204C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D2050
  c->r[0]=c->r[13]+0xFFFF8424u; // 800D2054
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D2058
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D205C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D2060
L_800D2064:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D2064
  c->r[0]=0u+0x00000000u; // 800D2068
  c->r[3]=c->r[28]|c->r[28]; // 800D206C
  c->r[4]=c->r[29]|c->r[29]; // 800D2070
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D2074
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D2078
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D207C
  c->lr=0x800D2084u; f_8006306C(c); // 800D2080
  c->r[10]=c->r[31]|c->r[31]; // 800D2084
  c->r[3]=c->r[29]|c->r[29]; // 800D2088
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D208C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D2090
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D2094
  c->r[1]=c->r[10]|c->r[10]; // 800D2098
  c->lr=c->r[0]; // 800D209C
  return; // 800D20A0
}

// fn_800D20A4
void f_800D20A4(Ctx* __restrict c) {
  trace_call(0x800D20A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D20A4
  c->r[0]=c->lr; // 800D20A8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D20AC
  c->r[11]=c->r[1]+0x00000090u; // 800D20B0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800D20B4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800D20B8
  c->lr=0x800D20C0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D20BC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D20C0
  c->r[28]=c->r[3]|c->r[3]; // 800D20C4
  c->r[29]=c->r[4]|c->r[4]; // 800D20C8
  cmps(c,0,(int32_t)c->r[5],0); // 800D20CC
  if (crb(c,2)) { goto L_800D20DC; } // 800D20D0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D20D4
  goto L_800D20E0; // 800D20D8
L_800D20DC:;
  c->r[0]=0u+0x00000000u; // 800D20DC
L_800D20E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D20E0
  if (!crb(c,2)) { goto L_800D2284; } // 800D20E4
  c->r[31]=R32(c->r[4]+0x00000014u); // 800D20E8
  c->r[30]=0u+0x00000000u; // 800D20EC
  cmps(c,0,(int32_t)c->r[31],0); // 800D20F0
  if (crb(c,2)) { goto L_800D210C; } // 800D20F4
  cmps(c,0,(int32_t)c->r[31],1); // 800D20F8
  if (crb(c,2)) { goto L_800D2140; } // 800D20FC
  cmps(c,0,(int32_t)c->r[31],2); // 800D2100
  if (crb(c,2)) { goto L_800D2148; } // 800D2104
  goto L_800D2190; // 800D2108
L_800D210C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D210C
  c->lr=0x800D2114u; f_8006117C(c); // 800D2110
  cmps(c,0,(int32_t)c->r[3],0); // 800D2114
  if (crb(c,2)) { goto L_800D212C; } // 800D2118
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D211C
  c->r[3]=c->r[28]|c->r[28]; // 800D2120
  c->lr=0x800D2128u; f_800D3E28(c); // 800D2124
  goto L_800D2330; // 800D2128
L_800D212C:;
  c->r[31]=R32(c->r[29]+0x00000010u); // 800D212C
  c->r[3]=c->r[28]|c->r[28]; // 800D2130
  c->lr=0x800D2138u; f_800D23FC(c); // 800D2134
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D2138
  goto L_800D2330; // 800D213C
L_800D2140:;
  c->r[30]=0u+0x00003E83u; // 800D2140
  goto L_800D2190; // 800D2144
L_800D2148:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 800D2148
  cmps(c,0,(int32_t)c->r[0],16008); // 800D214C
  if (crb(c,2)) { goto L_800D2160; } // 800D2150
  cmps(c,0,(int32_t)c->r[0],16007); // 800D2154
  if (crb(c,2)) { goto L_800D2168; } // 800D2158
  goto L_800D216C; // 800D215C
L_800D2160:;
  {uint32_t ea=c->r[2]+0xFFFFA3FCu; c->f[31]=c->ps1[31]=RF32(ea);} // 800D2160
  goto L_800D216C; // 800D2164
L_800D2168:;
  {uint32_t ea=c->r[2]+0xFFFFA400u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D2168
L_800D216C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D216C
  c->lr=0x800D2174u; f_800D41B4(c); // 800D2170
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800D2174
  {uint32_t ea=c->r[2]+0xFFFFA404u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2178
  fcmp(c,0,c->f[0],c->f[1]); // 800D217C
  if (!crb(c,0)) { goto L_800D218C; } // 800D2180
  c->r[30]=0u+0x00003E82u; // 800D2184
  goto L_800D2190; // 800D2188
L_800D218C:;
  c->r[30]=0u+0x00003E83u; // 800D218C
L_800D2190:;
  c->r[4]=c->r[30]|c->r[30]; // 800D2190
  c->r[3]=c->r[28]+0x00000354u; // 800D2194
  c->lr=0x800D219Cu; f_800667BC(c); // 800D2198
  cmps(c,0,(int32_t)c->r[3],0); // 800D219C
  if (!crb(c,2)) { goto L_800D21B4; } // 800D21A0
  c->r[3]=c->r[28]|c->r[28]; // 800D21A4
  c->r[4]=c->r[30]|c->r[30]; // 800D21A8
  c->r[5]=0u+0x00000001u; // 800D21AC
  c->lr=0x800D21B4u; f_80064744(c); // 800D21B0
L_800D21B4:;
  cmps(c,0,(int32_t)c->r[31],1); // 800D21B4
  if (crb(c,2)) { goto L_800D21C8; } // 800D21B8
  cmps(c,0,(int32_t)c->r[31],2); // 800D21BC
  if (crb(c,2)) { goto L_800D2244; } // 800D21C0
  goto L_800D2284; // 800D21C4
L_800D21C8:;
  c->r[4]=c->r[28]|c->r[28]; // 800D21C8
  c->r[3]=c->r[1]+0x00000068u; // 800D21CC
  c->lr=0x800D21D4u; f_800CA880(c); // 800D21D0
  c->r[4]=c->r[28]|c->r[28]; // 800D21D4
  c->r[3]=c->r[1]+0x0000005Cu; // 800D21D8
  c->lr=0x800D21E0u; f_80061A48(c); // 800D21DC
  {uint32_t ea=c->r[2]+0xFFFFA404u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D21E0
  c->r[3]=c->r[1]+0x00000044u; // 800D21E4
  c->r[4]=c->r[1]+0x00000068u; // 800D21E8
  c->lr=0x800D21F0u; f_8005ED34(c); // 800D21EC
  c->r[3]=c->r[1]+0x00000050u; // 800D21F0
  c->r[4]=c->r[1]+0x0000005Cu; // 800D21F4
  c->r[5]=c->r[1]+0x00000044u; // 800D21F8
  c->lr=0x800D2200u; f_80073ACC(c); // 800D21FC
  c->r[3]=c->r[1]+0x00000038u; // 800D2200
  c->r[4]=c->r[1]+0x00000050u; // 800D2204
  c->lr=0x800D220Cu; f_8005CD7C(c); // 800D2208
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D220C
  c->r[3]=c->r[1]+0x00000014u; // 800D2210
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2214
  c->f[2]=c->f[1]; // 800D2218
  c->lr=0x800D2220u; f_8005FD70(c); // 800D221C
  c->r[4]=c->r[3]|c->r[3]; // 800D2220
  c->r[3]=c->r[28]+0x00000644u; // 800D2224
  c->lr=0x800D222Cu; f_8005DC84(c); // 800D2228
  c->r[3]=c->r[28]+0x00000638u; // 800D222C
  c->r[4]=c->r[1]+0x00000038u; // 800D2230
  c->lr=0x800D2238u; f_8005DC84(c); // 800D2234
  {uint32_t ea=c->r[2]+0xFFFFA40Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2238
  {uint32_t ea=c->r[28]+0x00000650u; WF32(ea,c->f[0]);} // 800D223C
  goto L_800D2284; // 800D2240
L_800D2244:;
  c->r[4]=c->r[28]|c->r[28]; // 800D2244
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2248
  c->lr=0x800D2250u; f_800CA1D4(c); // 800D224C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2250
  c->r[3]=c->r[1]+0x00000008u; // 800D2254
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2258
  c->f[2]=c->f[1]; // 800D225C
  c->lr=0x800D2264u; f_8005FD70(c); // 800D2260
  c->r[4]=c->r[3]|c->r[3]; // 800D2264
  c->r[3]=c->r[28]+0x00000644u; // 800D2268
  c->lr=0x800D2270u; f_8005DC84(c); // 800D226C
  c->r[3]=c->r[28]+0x00000638u; // 800D2270
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2274
  c->lr=0x800D227Cu; f_8005DC84(c); // 800D2278
  {uint32_t ea=c->r[2]+0xFFFFA40Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D227C
  {uint32_t ea=c->r[28]+0x00000650u; WF32(ea,c->f[0]);} // 800D2280
L_800D2284:;
  c->r[31]=R32(c->r[29]+0x00000010u); // 800D2284
  c->r[3]=c->r[28]|c->r[28]; // 800D2288
  c->r[4]=c->r[31]|c->r[31]; // 800D228C
  c->lr=0x800D2294u; f_800D4124(c); // 800D2290
  cmps(c,0,(int32_t)c->r[3],0); // 800D2294
  if (!crb(c,2)) { goto L_800D2300; } // 800D2298
  c->r[3]=c->r[28]+0x00000354u; // 800D229C
  c->lr=0x800D22A4u; f_800C9374(c); // 800D22A0
  cmps(c,0,(int32_t)c->r[3],16003); // 800D22A4
  if (crb(c,2)) { goto L_800D22B8; } // 800D22A8
  cmps(c,0,(int32_t)c->r[3],16002); // 800D22AC
  if (crb(c,2)) { goto L_800D22E8; } // 800D22B0
  goto L_800D2330; // 800D22B4
L_800D22B8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D22B8
  c->lr=0x800D22C0u; f_8006117C(c); // 800D22BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D22C0
  if (crb(c,2)) { goto L_800D22D8; } // 800D22C4
  c->r[3]=c->r[28]|c->r[28]; // 800D22C8
  c->r[4]=c->r[31]|c->r[31]; // 800D22CC
  c->lr=0x800D22D4u; f_800D3E28(c); // 800D22D0
  goto L_800D2330; // 800D22D4
L_800D22D8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D22D8
  c->lr=0x800D22E0u; f_800D23FC(c); // 800D22DC
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D22E0
  goto L_800D2330; // 800D22E4
L_800D22E8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D22E8
  c->lr=0x800D22F0u; f_800D2350(c); // 800D22EC
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D22F0
  c->r[0]=0u+0x00000001u; // 800D22F4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D22F8
  goto L_800D2330; // 800D22FC
L_800D2300:;
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2300
  c->r[3]=c->r[28]|c->r[28]; // 800D2304
  c->lr=0x800D230Cu; f_800D42FC(c); // 800D2308
  c->r[4]=c->r[28]|c->r[28]; // 800D230C
  c->r[3]=c->r[1]+0x00000020u; // 800D2310
  c->lr=0x800D2318u; f_800CA1D4(c); // 800D2314
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2318
  c->r[3]=c->r[28]|c->r[28]; // 800D231C
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2320
  c->r[4]=c->r[1]+0x00000020u; // 800D2324
  c->f[2]=c->f[1]; // 800D2328
  c->lr=0x800D2330u; f_80063BD8(c); // 800D232C
L_800D2330:;
  c->r[11]=c->r[1]+0x00000090u; // 800D2330
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800D2334
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800D2338
  c->lr=0x800D2340u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D233C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D2340
  c->lr=c->r[0]; // 800D2344
  c->r[1]=c->r[1]+0x000000A0u; // 800D2348
  return; // 800D234C
}

// fn_800D2350
void f_800D2350(Ctx* __restrict c) {
  trace_call(0x800D2350u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2350
  c->r[0]=c->lr; // 800D2354
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2358
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D235C
  c->r[31]=c->r[1]|c->r[1]; // 800D2360
  c->r[28]=c->r[3]|c->r[3]; // 800D2364
  c->lr=0x800D236Cu; f_800D0394(c); // 800D2368
  c->r[4]=c->r[3]|c->r[3]; // 800D236C
  c->r[3]=c->r[28]|c->r[28]; // 800D2370
  c->lr=0x800D2378u; f_80062F4C(c); // 800D2374
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D2378
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D237C
  c->r[3]=c->r[28]+c->r[0]; // 800D2380
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D2384
  cmps(c,0,(int32_t)c->r[29],0); // 800D2388
  if (crb(c,2)) { goto L_800D23BC; } // 800D238C
  c->r[30]=0u+0x00000000u; // 800D2390
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D2394
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D2398
  c->lr=0x800D23A0u; f_800D0394(c); // 800D239C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D23A0
  c->r[0]=c->r[13]+0xFFFF8430u; // 800D23A4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D23A8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D23AC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D23B0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D23B4
  W32(c->r[29]+0x00000014u,c->r[30]); // 800D23B8
L_800D23BC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D23BC
  c->r[0]=0u+0x00000000u; // 800D23C0
  c->r[3]=c->r[28]|c->r[28]; // 800D23C4
  c->r[4]=c->r[29]|c->r[29]; // 800D23C8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D23CC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D23D0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D23D4
  c->lr=0x800D23DCu; f_8006306C(c); // 800D23D8
  c->r[10]=c->r[31]|c->r[31]; // 800D23DC
  c->r[3]=c->r[29]|c->r[29]; // 800D23E0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D23E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D23E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D23EC
  c->r[1]=c->r[10]|c->r[10]; // 800D23F0
  c->lr=c->r[0]; // 800D23F4
  return; // 800D23F8
}

// fn_800D23FC
void f_800D23FC(Ctx* __restrict c) {
  trace_call(0x800D23FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D23FC
  c->r[0]=c->lr; // 800D2400
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2404
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2408
  c->r[31]=c->r[1]|c->r[1]; // 800D240C
  c->r[28]=c->r[3]|c->r[3]; // 800D2410
  c->lr=0x800D2418u; f_800D06C8(c); // 800D2414
  c->r[4]=c->r[3]|c->r[3]; // 800D2418
  c->r[3]=c->r[28]|c->r[28]; // 800D241C
  c->lr=0x800D2424u; f_80062F4C(c); // 800D2420
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D2424
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D2428
  c->r[3]=c->r[28]+c->r[0]; // 800D242C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D2430
  cmps(c,0,(int32_t)c->r[29],0); // 800D2434
  if (crb(c,2)) { goto L_800D2460; } // 800D2438
  c->r[30]=0u+0x00000000u; // 800D243C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D2440
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D2444
  c->lr=0x800D244Cu; f_800D06C8(c); // 800D2448
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D244C
  c->r[0]=c->r[13]+0xFFFF8444u; // 800D2450
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D2454
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D2458
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D245C
L_800D2460:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D2460
  c->r[0]=0u+0x00000000u; // 800D2464
  c->r[3]=c->r[28]|c->r[28]; // 800D2468
  c->r[4]=c->r[29]|c->r[29]; // 800D246C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D2470
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D2474
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D2478
  c->lr=0x800D2480u; f_8006306C(c); // 800D247C
  c->r[10]=c->r[31]|c->r[31]; // 800D2480
  c->r[3]=c->r[29]|c->r[29]; // 800D2484
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2488
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D248C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D2490
  c->r[1]=c->r[10]|c->r[10]; // 800D2494
  c->lr=c->r[0]; // 800D2498
  return; // 800D249C
}

// fn_800D24A0
void f_800D24A0(Ctx* __restrict c) {
  trace_call(0x800D24A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D24A0
  c->r[0]=c->lr; // 800D24A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D24A8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D24AC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D24B0
  c->r[30]=c->r[3]|c->r[3]; // 800D24B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D24B8
  cmps(c,0,(int32_t)c->r[4],0); // 800D24BC
  if (crb(c,2)) { goto L_800D24CC; } // 800D24C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D24C4
  goto L_800D24D0; // 800D24C8
L_800D24CC:;
  c->r[0]=0u+0x00000000u; // 800D24CC
L_800D24D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D24D0
  if (!crb(c,2)) { goto L_800D2570; } // 800D24D4
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800D24D8
  c->r[0]=R8(c->r[4]+0x00000015u); // 800D24DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D24E0
  if (crb(c,2)) { goto L_800D24FC; } // 800D24E4
  c->r[0]=0u+0x00000000u; // 800D24E8
  W32(c->r[3]+0x000005C0u,c->r[0]); // 800D24EC
  c->r[3]=c->r[30]|c->r[30]; // 800D24F0
  c->lr=0x800D24F8u; f_800D38C8(c); // 800D24F4
  goto L_800D25FC; // 800D24F8
L_800D24FC:;
  c->r[4]=0u+0x00003E82u; // 800D24FC
  c->r[3]=c->r[3]+0x00000354u; // 800D2500
  c->lr=0x800D2508u; f_800667BC(c); // 800D2504
  cmps(c,0,(int32_t)c->r[3],0); // 800D2508
  if (!crb(c,2)) { goto L_800D2520; } // 800D250C
  c->r[3]=c->r[30]|c->r[30]; // 800D2510
  c->r[4]=0u+0x00003E82u; // 800D2514
  c->r[5]=0u+0x00000001u; // 800D2518
  c->lr=0x800D2520u; f_80064744(c); // 800D251C
L_800D2520:;
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D2520
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2524
  {uint32_t ea=c->r[2]+0xFFFFA410u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2528
  c->lr=0x800D2530u; f_800C30F4(c); // 800D252C
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D2530
  c->r[3]=c->r[1]+0x00000038u; // 800D2534
  c->lr=0x800D253Cu; f_800C2FB8(c); // 800D2538
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D253C
  c->r[3]=c->r[1]+0x00000008u; // 800D2540
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2544
  c->f[2]=c->f[1]; // 800D2548
  c->lr=0x800D2550u; f_8005FD70(c); // 800D254C
  c->r[4]=c->r[3]|c->r[3]; // 800D2550
  c->r[3]=c->r[30]+0x00000644u; // 800D2554
  c->lr=0x800D255Cu; f_8005DC84(c); // 800D2558
  c->r[3]=c->r[30]+0x00000638u; // 800D255C
  c->r[4]=c->r[1]+0x00000038u; // 800D2560
  c->lr=0x800D2568u; f_8005DC84(c); // 800D2564
  {uint32_t ea=c->r[2]+0xFFFFA414u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2568
  {uint32_t ea=c->r[30]+0x00000650u; WF32(ea,c->f[0]);} // 800D256C
L_800D2570:;
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2570
  c->r[3]=c->r[30]|c->r[30]; // 800D2574
  c->lr=0x800D257Cu; f_800D42FC(c); // 800D2578
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D257C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2580
  c->lr=0x800D2588u; f_800C2FB8(c); // 800D2584
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2588
  c->r[3]=c->r[30]|c->r[30]; // 800D258C
  {uint32_t ea=c->r[2]+0xFFFFA418u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2590
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2594
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2598
  c->lr=0x800D25A0u; f_80063BD8(c); // 800D259C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D25A0
  c->r[3]=c->r[1]+0x00000014u; // 800D25A4
  c->lr=0x800D25ACu; f_800C998C(c); // 800D25A8
  c->r[31]=c->r[3]|c->r[3]; // 800D25AC
  c->r[4]=c->r[30]|c->r[30]; // 800D25B0
  c->r[3]=c->r[1]+0x00000020u; // 800D25B4
  c->lr=0x800D25BCu; f_80061A48(c); // 800D25B8
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D25BC
  c->r[5]=c->r[31]|c->r[31]; // 800D25C0
  c->r[4]=c->r[1]+0x00000020u; // 800D25C4
  c->lr=0x800D25CCu; f_800C2D1C(c); // 800D25C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D25CC
  if (crb(c,2)) { goto L_800D25FC; } // 800D25D0
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D25D4
  c->r[0]=R8(c->r[3]+0x00000015u); // 800D25D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D25DC
  if (crb(c,2)) { goto L_800D25EC; } // 800D25E0
  c->r[0]=0u+0x00000000u; // 800D25E4
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800D25E8
L_800D25EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D25EC
  c->lr=0x800D25F4u; f_800D3608(c); // 800D25F0
  c->r[3]=c->r[30]|c->r[30]; // 800D25F4
  c->lr=0x800D25FCu; f_800D38C8(c); // 800D25F8
L_800D25FC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D25FC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D2600
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D2604
  c->lr=c->r[0]; // 800D2608
  c->r[1]=c->r[1]+0x00000050u; // 800D260C
  return; // 800D2610
}

// fn_800D2614
void f_800D2614(Ctx* __restrict c) {
  trace_call(0x800D2614u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2614
  c->r[0]=c->lr; // 800D2618
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D261C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D2620
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D2624
  c->r[30]=c->r[3]|c->r[3]; // 800D2628
  c->r[3]=c->r[1]+0x00000050u; // 800D262C
  c->r[4]=c->r[30]|c->r[30]; // 800D2630
  c->lr=0x800D2638u; f_80061A48(c); // 800D2634
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D2638
  c->r[3]=c->r[1]+0x00000044u; // 800D263C
  c->lr=0x800D2644u; f_800C2E48(c); // 800D2640
  c->r[3]=c->r[1]+0x00000038u; // 800D2644
  c->r[4]=c->r[1]+0x00000044u; // 800D2648
  c->r[5]=c->r[1]+0x00000050u; // 800D264C
  c->lr=0x800D2654u; f_8005FC60(c); // 800D2650
  c->r[3]=c->r[1]+0x00000038u; // 800D2654
  c->lr=0x800D265Cu; f_80060DC8(c); // 800D2658
  {uint32_t ea=c->r[2]+0xFFFFA41Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D265C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800D2660
  fcmp(c,0,c->f[1],c->f[0]); // 800D2664
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2668
  if (!crb(c,2)) { goto L_800D26C0; } // 800D266C
  c->r[0]=0u+0x00000001u; // 800D2670
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800D2674
  c->r[3]=c->r[30]|c->r[30]; // 800D2678
  c->lr=0x800D2680u; f_800D3608(c); // 800D267C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2680
  c->r[3]=c->r[1]+0x00000020u; // 800D2684
  c->lr=0x800D268Cu; f_800C998C(c); // 800D2688
  c->r[31]=c->r[3]|c->r[3]; // 800D268C
  c->r[4]=c->r[30]|c->r[30]; // 800D2690
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2694
  c->lr=0x800D269Cu; f_80061A48(c); // 800D2698
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D269C
  c->r[5]=c->r[31]|c->r[31]; // 800D26A0
  c->r[4]=c->r[1]+0x0000002Cu; // 800D26A4
  c->lr=0x800D26ACu; f_800C2D1C(c); // 800D26A8
  c->r[3]=c->r[30]|c->r[30]; // 800D26AC
  c->lr=0x800D26B4u; f_800D38C8(c); // 800D26B0
  c->r[3]=c->r[30]|c->r[30]; // 800D26B4
  c->r[4]=0u+0x00000001u; // 800D26B8
  c->lr=0x800D26C0u; f_8005E814(c); // 800D26BC
L_800D26C0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D26C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D26C4
  if (crb(c,2)) { goto L_800D26D4; } // 800D26C8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D26CC
  goto L_800D26D8; // 800D26D0
L_800D26D4:;
  c->r[0]=0u+0x00000000u; // 800D26D4
L_800D26D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D26D8
  if (!crb(c,2)) { goto L_800D2730; } // 800D26DC
  c->r[3]=c->r[30]|c->r[30]; // 800D26E0
  c->r[4]=0u+0x00003E82u; // 800D26E4
  c->r[5]=0u+0x00000001u; // 800D26E8
  c->lr=0x800D26F0u; f_80064744(c); // 800D26EC
  c->r[3]=c->r[1]+0x00000014u; // 800D26F0
  c->r[4]=c->r[1]+0x00000044u; // 800D26F4
  c->lr=0x800D26FCu; f_8005CD7C(c); // 800D26F8
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D26FC
  c->r[3]=c->r[1]+0x00000008u; // 800D2700
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2704
  c->f[2]=c->f[1]; // 800D2708
  c->lr=0x800D2710u; f_8005FD70(c); // 800D270C
  c->r[4]=c->r[3]|c->r[3]; // 800D2710
  c->r[3]=c->r[30]+0x00000644u; // 800D2714
  c->lr=0x800D271Cu; f_8005DC84(c); // 800D2718
  c->r[3]=c->r[30]+0x00000638u; // 800D271C
  c->r[4]=c->r[1]+0x00000014u; // 800D2720
  c->lr=0x800D2728u; f_8005DC84(c); // 800D2724
  {uint32_t ea=c->r[2]+0xFFFFA414u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2728
  {uint32_t ea=c->r[30]+0x00000650u; WF32(ea,c->f[0]);} // 800D272C
L_800D2730:;
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2730
  c->r[3]=c->r[30]|c->r[30]; // 800D2734
  c->lr=0x800D273Cu; f_800D42FC(c); // 800D2738
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D273C
  c->r[3]=c->r[30]|c->r[30]; // 800D2740
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2744
  c->r[4]=c->r[1]+0x00000044u; // 800D2748
  c->f[2]=c->f[1]; // 800D274C
  c->lr=0x800D2754u; f_80063BD8(c); // 800D2750
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D2754
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D2758
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D275C
  c->lr=c->r[0]; // 800D2760
  c->r[1]=c->r[1]+0x00000070u; // 800D2764
  return; // 800D2768
}

// fn_800D276C
void f_800D276C(Ctx* __restrict c) {
  trace_call(0x800D276Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D276C
  c->r[0]=c->lr; // 800D2770
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2774
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2778
  c->r[29]=c->r[3]|c->r[3]; // 800D277C
  c->r[30]=c->r[4]|c->r[4]; // 800D2780
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2784
  cmps(c,0,(int32_t)c->r[5],0); // 800D2788
  if (crb(c,2)) { goto L_800D2798; } // 800D278C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D2790
  goto L_800D279C; // 800D2794
L_800D2798:;
  c->r[0]=0u+0x00000000u; // 800D2798
L_800D279C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D279C
  if (!crb(c,2)) { goto L_800D27C8; } // 800D27A0
  c->r[4]=0u+0x00003E89u; // 800D27A4
  c->r[3]=c->r[3]+0x00000354u; // 800D27A8
  c->lr=0x800D27B0u; f_800667BC(c); // 800D27AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D27B0
  if (!crb(c,2)) { goto L_800D27C8; } // 800D27B4
  c->r[3]=c->r[29]|c->r[29]; // 800D27B8
  c->r[4]=0u+0x00003E89u; // 800D27BC
  c->r[5]=0u+0x00000001u; // 800D27C0
  c->lr=0x800D27C8u; f_80064744(c); // 800D27C4
L_800D27C8:;
  c->r[3]=c->r[29]+0x00000354u; // 800D27C8
  c->lr=0x800D27D0u; f_800C9374(c); // 800D27CC
  cmps(c,0,(int32_t)c->r[3],16009); // 800D27D0
  if (crb(c,2)) { goto L_800D27E4; } // 800D27D4
  cmps(c,0,(int32_t)c->r[3],16010); // 800D27D8
  if (crb(c,2)) { goto L_800D2808; } // 800D27DC
  goto L_800D2884; // 800D27E0
L_800D27E4:;
  c->r[3]=c->r[29]+0x00000354u; // 800D27E4
  c->lr=0x800D27ECu; f_800667AC(c); // 800D27E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D27EC
  if (crb(c,2)) { goto L_800D2884; } // 800D27F0
  c->r[3]=c->r[29]|c->r[29]; // 800D27F4
  c->r[4]=0u+0x00003E8Au; // 800D27F8
  c->r[5]=0u+0x00000001u; // 800D27FC
  c->lr=0x800D2804u; f_80064744(c); // 800D2800
  goto L_800D2884; // 800D2804
L_800D2808:;
  c->r[31]=R32(c->r[30]+0x00000014u); // 800D2808
  c->r[3]=R32(c->r[29]+0x00000404u); // 800D280C
  c->lr=0x800D2814u; f_802EA530(c); // 800D2810
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 800D2814
  if (!crb(c,2)) { goto L_800D2884; } // 800D2818
  c->r[31]=R32(c->r[30]+0x00000010u); // 800D281C
  c->r[0]=c->r[31]+0xFFFFC17Au; // 800D2820
  cmpu(c,0,c->r[0],0x00000002u); // 800D2824
  if (!crb(c,1)) { goto L_800D2858; } // 800D2828
  cmps(c,0,(int32_t)c->r[31],16002); // 800D282C
  if (crb(c,2)) { goto L_800D2840; } // 800D2830
  cmps(c,0,(int32_t)c->r[31],16003); // 800D2834
  if (crb(c,2)) { goto L_800D284C; } // 800D2838
  goto L_800D2884; // 800D283C
L_800D2840:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2840
  c->lr=0x800D2848u; f_800D1B08(c); // 800D2844
  goto L_800D2884; // 800D2848
L_800D284C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D284C
  c->lr=0x800D2854u; f_800D2000(c); // 800D2850
  goto L_800D2884; // 800D2854
L_800D2858:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2858
  c->lr=0x800D2860u; f_8006117C(c); // 800D285C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2860
  if (crb(c,2)) { goto L_800D2878; } // 800D2864
  c->r[3]=c->r[29]|c->r[29]; // 800D2868
  c->r[4]=c->r[31]|c->r[31]; // 800D286C
  c->lr=0x800D2874u; f_800D3E28(c); // 800D2870
  goto L_800D2884; // 800D2874
L_800D2878:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2878
  c->lr=0x800D2880u; f_800D23FC(c); // 800D287C
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D2880
L_800D2884:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2884
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2888
  c->lr=c->r[0]; // 800D288C
  c->r[1]=c->r[1]+0x00000020u; // 800D2890
  return; // 800D2894
}

// fn_800D2898
void f_800D2898(Ctx* __restrict c) {
  trace_call(0x800D2898u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2898
  c->r[0]=c->lr; // 800D289C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D28A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D28A4
  c->r[31]=c->r[4]|c->r[4]; // 800D28A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D28AC
  c->r[30]=c->r[3]|c->r[3]; // 800D28B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D28B4
  cmps(c,0,(int32_t)c->r[5],0); // 800D28B8
  if (crb(c,2)) { goto L_800D28C8; } // 800D28BC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D28C0
  goto L_800D28CC; // 800D28C4
L_800D28C8:;
  c->r[0]=0u+0x00000000u; // 800D28C8
L_800D28CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D28CC
  if (!crb(c,2)) { goto L_800D291C; } // 800D28D0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D28D4
  c->r[3]=c->r[3]+0x00000354u; // 800D28D8
  c->lr=0x800D28E0u; f_800667BC(c); // 800D28DC
  cmps(c,0,(int32_t)c->r[3],0); // 800D28E0
  if (!crb(c,2)) { goto L_800D28F8; } // 800D28E4
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D28E8
  c->r[3]=c->r[30]|c->r[30]; // 800D28EC
  c->r[5]=0u+0x00000001u; // 800D28F0
  c->lr=0x800D28F8u; f_80064744(c); // 800D28F4
L_800D28F8:;
  c->r[4]=c->r[30]|c->r[30]; // 800D28F8
  c->r[3]=c->r[1]+0x00000008u; // 800D28FC
  c->lr=0x800D2904u; f_800CA1D4(c); // 800D2900
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2904
  c->r[3]=c->r[30]|c->r[30]; // 800D2908
  {uint32_t ea=c->r[2]+0xFFFFA420u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D290C
  c->r[4]=c->r[1]+0x00000008u; // 800D2910
  c->f[2]=c->f[1]; // 800D2914
  c->lr=0x800D291Cu; f_80063BD8(c); // 800D2918
L_800D291C:;
  c->r[3]=c->r[30]+0x00000354u; // 800D291C
  c->lr=0x800D2924u; f_800667AC(c); // 800D2920
  cmps(c,0,(int32_t)c->r[3],0); // 800D2924
  if (crb(c,2)) { goto L_800D2934; } // 800D2928
  c->r[3]=c->r[30]|c->r[30]; // 800D292C
  c->lr=0x800D2934u; f_800D38C8(c); // 800D2930
L_800D2934:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2934
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2938
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D293C
  c->lr=c->r[0]; // 800D2940
  c->r[1]=c->r[1]+0x00000020u; // 800D2944
  return; // 800D2948
}

// fn_800D294C
void f_800D294C(Ctx* __restrict c) {
  trace_call(0x800D294Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D294C
  c->r[0]=c->lr; // 800D2950
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D2954
  c->r[11]=c->r[1]+0x00000090u; // 800D2958
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800D295C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800D2960
  c->lr=0x800D2968u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2964
  c->r[31]=c->r[1]|c->r[1]; // 800D2968
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D296C
  c->r[27]=c->r[3]|c->r[3]; // 800D2970
  cmps(c,0,(int32_t)c->r[4],0); // 800D2974
  if (crb(c,2)) { goto L_800D2984; } // 800D2978
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D297C
  goto L_800D2988; // 800D2980
L_800D2984:;
  c->r[0]=0u+0x00000000u; // 800D2984
L_800D2988:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2988
  if (!crb(c,2)) { goto L_800D29B4; } // 800D298C
  c->r[4]=0u+0x00003E84u; // 800D2990
  c->r[3]=c->r[3]+0x00000354u; // 800D2994
  c->lr=0x800D299Cu; f_800667BC(c); // 800D2998
  cmps(c,0,(int32_t)c->r[3],0); // 800D299C
  if (!crb(c,2)) { goto L_800D29B4; } // 800D29A0
  c->r[3]=c->r[27]|c->r[27]; // 800D29A4
  c->r[4]=0u+0x00003E84u; // 800D29A8
  c->r[5]=0u+0x00000001u; // 800D29AC
  c->lr=0x800D29B4u; f_80064744(c); // 800D29B0
L_800D29B4:;
  c->r[3]=c->r[27]+0x00000354u; // 800D29B4
  c->lr=0x800D29BCu; f_800C9374(c); // 800D29B8
  cmps(c,0,(int32_t)c->r[3],16006); // 800D29BC
  c->r[29]=c->r[3]|c->r[3]; // 800D29C0
  if (!crb(c,2)) { goto L_800D2A7C; } // 800D29C4
  c->r[3]=c->r[27]|c->r[27]; // 800D29C8
  c->r[4]=0u+0x00000003u; // 800D29CC
  c->r[5]=0u+0x00000001u; // 800D29D0
  c->lr=0x800D29D8u; f_80062748(c); // 800D29D4
  {uint32_t ea=c->r[2]+0xFFFFA41Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D29D8
  c->r[3]=c->r[27]|c->r[27]; // 800D29DC
  c->lr=0x800D29E4u; f_800D42FC(c); // 800D29E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D29E4
  if (crb(c,2)) { goto L_800D2A7C; } // 800D29E8
  c->r[3]=c->r[27]|c->r[27]; // 800D29EC
  c->r[4]=0u+0x00000000u; // 800D29F0
  c->lr=0x800D29F8u; f_800D34E0(c); // 800D29F4
  c->r[0]=c->r[3]+0xFFFFFFF3u; // 800D29F8
  cmpu(c,0,c->r[0],0x00000007u); // 800D29FC
  if (crb(c,1)) { goto L_800D2A10; } // 800D2A00
  c->r[3]=c->r[27]|c->r[27]; // 800D2A04
  c->lr=0x800D2A0Cu; f_800D38C8(c); // 800D2A08
  goto L_800D2A7C; // 800D2A0C
L_800D2A10:;
  c->lr=0x800D2A14u; f_800D0104(c); // 800D2A10
  c->r[4]=c->r[3]|c->r[3]; // 800D2A14
  c->r[3]=c->r[27]|c->r[27]; // 800D2A18
  c->lr=0x800D2A20u; f_80062F4C(c); // 800D2A1C
  c->r[0]=R8(c->r[27]+0x00000010u); // 800D2A20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D2A24
  c->r[3]=c->r[27]+c->r[0]; // 800D2A28
  c->r[28]=R32(c->r[3]+0x00000014u); // 800D2A2C
  cmps(c,0,(int32_t)c->r[28],0); // 800D2A30
  if (crb(c,2)) { goto L_800D2A5C; } // 800D2A34
  c->r[30]=0u+0x00000000u; // 800D2A38
  W32(c->r[31]+0x00000074u,c->r[1]); // 800D2A3C
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D2A40
  c->lr=0x800D2A48u; f_800D0104(c); // 800D2A44
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D2A48
  c->r[0]=c->r[13]+0xFFFF8420u; // 800D2A4C
  W32(c->r[28]+0x00000004u,c->r[0]); // 800D2A50
  W32(c->r[28]+0x00000008u,c->r[30]); // 800D2A54
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 800D2A58
L_800D2A5C:;
  W32(c->r[27]+0x00000008u,c->r[28]); // 800D2A5C
  c->r[0]=0u+0x00000000u; // 800D2A60
  c->r[3]=c->r[27]|c->r[27]; // 800D2A64
  c->r[4]=c->r[28]|c->r[28]; // 800D2A68
  W32(c->r[28]+0x00000008u,c->r[0]); // 800D2A6C
  c->r[0]=R32(c->r[27]+0x00000004u); // 800D2A70
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800D2A74
  c->lr=0x800D2A7Cu; f_8006306C(c); // 800D2A78
L_800D2A7C:;
  c->r[3]=c->r[27]+0x00000354u; // 800D2A7C
  c->lr=0x800D2A84u; f_800667AC(c); // 800D2A80
  cmps(c,0,(int32_t)c->r[3],0); // 800D2A84
  if (crb(c,2)) { goto L_800D2B88; } // 800D2A88
  cmps(c,0,(int32_t)c->r[29],16004); // 800D2A8C
  if (crb(c,2)) { goto L_800D2AA0; } // 800D2A90
  cmps(c,0,(int32_t)c->r[29],16005); // 800D2A94
  if (crb(c,2)) { goto L_800D2AB4; } // 800D2A98
  goto L_800D2B88; // 800D2A9C
L_800D2AA0:;
  c->r[3]=c->r[27]|c->r[27]; // 800D2AA0
  c->r[4]=0u+0x00003E85u; // 800D2AA4
  c->r[5]=0u+0x00000001u; // 800D2AA8
  c->lr=0x800D2AB0u; f_80064744(c); // 800D2AAC
  goto L_800D2B88; // 800D2AB0
L_800D2AB4:;
  c->r[4]=c->r[27]|c->r[27]; // 800D2AB4
  c->r[3]=c->r[31]+0x00000054u; // 800D2AB8
  c->lr=0x800D2AC0u; f_80061A48(c); // 800D2ABC
  c->r[4]=c->r[27]|c->r[27]; // 800D2AC0
  c->r[3]=c->r[31]+0x00000048u; // 800D2AC4
  c->lr=0x800D2ACCu; f_800CA1D4(c); // 800D2AC8
  c->r[3]=c->r[31]+0x0000003Cu; // 800D2ACC
  c->r[4]=c->r[31]+0x00000048u; // 800D2AD0
  c->r[5]=c->r[31]+0x00000054u; // 800D2AD4
  c->lr=0x800D2ADCu; f_8005FC60(c); // 800D2AD8
  c->r[3]=c->r[31]+0x0000003Cu; // 800D2ADC
  c->r[5]=0u+0x806A0000u; // 800D2AE0
  {uint32_t ea=c->r[2]+0xFFFFA424u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D2AE4
  c->r[4]=c->r[3]|c->r[3]; // 800D2AE8
  c->r[5]=c->r[5]+0x00000AA8u; // 800D2AEC
  c->lr=0x800D2AF4u; f_8030E0BC(c); // 800D2AF0
  c->f[1]=c->f[31]; // 800D2AF4
  c->r[3]=c->r[31]+0x00000024u; // 800D2AF8
  c->r[4]=c->r[31]+0x0000003Cu; // 800D2AFC
  c->lr=0x800D2B04u; f_8005ED34(c); // 800D2B00
  c->r[3]=c->r[31]+0x00000030u; // 800D2B04
  c->r[4]=c->r[31]+0x00000048u; // 800D2B08
  c->r[5]=c->r[31]+0x00000024u; // 800D2B0C
  c->lr=0x800D2B14u; f_80073ACC(c); // 800D2B10
  c->r[3]=c->r[31]+0x00000018u; // 800D2B14
  c->r[4]=c->r[31]+0x00000030u; // 800D2B18
  c->lr=0x800D2B20u; f_8005CD7C(c); // 800D2B1C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2B20
  c->r[3]=c->r[31]+0x0000000Cu; // 800D2B24
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2B28
  c->f[2]=c->f[1]; // 800D2B2C
  c->lr=0x800D2B34u; f_8005FD70(c); // 800D2B30
  c->r[4]=c->r[3]|c->r[3]; // 800D2B34
  c->r[3]=c->r[27]+0x00000644u; // 800D2B38
  c->lr=0x800D2B40u; f_8005DC84(c); // 800D2B3C
  c->r[3]=c->r[27]+0x00000638u; // 800D2B40
  c->r[4]=c->r[31]+0x00000018u; // 800D2B44
  c->lr=0x800D2B4Cu; f_8005DC84(c); // 800D2B48
  {uint32_t ea=c->r[2]+0xFFFFA428u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2B4C
  c->r[3]=c->r[27]|c->r[27]; // 800D2B50
  {uint32_t ea=c->r[27]+0x00000650u; WF32(ea,c->f[0]);} // 800D2B54
  c->r[4]=0u+0x00003E86u; // 800D2B58
  c->r[5]=0u+0x00000001u; // 800D2B5C
  c->lr=0x800D2B64u; f_80064744(c); // 800D2B60
  c->r[3]=c->r[27]|c->r[27]; // 800D2B64
  c->r[4]=0u+0x00000000u; // 800D2B68
  c->lr=0x800D2B70u; f_8005E814(c); // 800D2B6C
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2B70
  c->r[3]=c->r[27]|c->r[27]; // 800D2B74
  {uint32_t ea=c->r[2]+0xFFFFA420u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2B78
  c->r[4]=c->r[27]+0x00000638u; // 800D2B7C
  c->f[2]=c->f[1]; // 800D2B80
  c->lr=0x800D2B88u; f_80063BD8(c); // 800D2B84
L_800D2B88:;
  c->r[10]=c->r[31]|c->r[31]; // 800D2B88
  c->r[11]=c->r[10]+0x00000090u; // 800D2B8C
  {uint32_t ea=c->r[10]+0x00000098u; psq_load(c,31,ea,0,0);} // 800D2B90
  {uint32_t ea=c->r[31]+0x00000090u; c->f[31]=RF64(ea);} // 800D2B94
  c->lr=0x800D2B9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2B98
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D2B9C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D2BA0
  c->r[1]=c->r[10]|c->r[10]; // 800D2BA4
  c->lr=c->r[0]; // 800D2BA8
  return; // 800D2BAC
}

// fn_800D2BB0
void f_800D2BB0(Ctx* __restrict c) {
  trace_call(0x800D2BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2BB0
  c->r[0]=c->lr; // 800D2BB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2BB8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D2BBC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D2BC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D2BC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D2BC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2BCC
  c->r[31]=c->r[3]|c->r[3]; // 800D2BD0
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D2BD4
  cmps(c,0,(int32_t)c->r[4],0); // 800D2BD8
  if (crb(c,2)) { goto L_800D2BE8; } // 800D2BDC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D2BE0
  goto L_800D2BEC; // 800D2BE4
L_800D2BE8:;
  c->r[0]=0u+0x00000000u; // 800D2BE8
L_800D2BEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2BEC
  if (!crb(c,2)) { goto L_800D2C74; } // 800D2BF0
  c->r[4]=0u+0x00003E83u; // 800D2BF4
  c->r[3]=c->r[3]+0x00000354u; // 800D2BF8
  c->lr=0x800D2C00u; f_800667BC(c); // 800D2BFC
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C00
  if (!crb(c,2)) { goto L_800D2C18; } // 800D2C04
  c->r[3]=c->r[31]|c->r[31]; // 800D2C08
  c->r[4]=0u+0x00003E83u; // 800D2C0C
  c->r[5]=0u+0x00000001u; // 800D2C10
  c->lr=0x800D2C18u; f_80064744(c); // 800D2C14
L_800D2C18:;
  c->r[3]=R32(c->r[31]+0x00000434u); // 800D2C18
  c->r[4]=0u+0x00000000u; // 800D2C1C
  c->r[3]=c->r[3]+0x00000030u; // 800D2C20
  c->lr=0x800D2C28u; f_802D94E8(c); // 800D2C24
  c->r[3]=R32(c->r[31]+0x00000434u); // 800D2C28
  c->f[30]=c->f[1]; // 800D2C2C
  c->r[4]=0u+0x00000001u; // 800D2C30
  c->r[3]=c->r[3]+0x00000030u; // 800D2C34
  c->lr=0x800D2C3Cu; f_802D94E8(c); // 800D2C38
  c->f[31]=c->f[1]; // 800D2C3C
  c->lr=0x800D2C44u; f_803B220C(c); // 800D2C40
  c->r[3]=c->r[3]^0x80000000u; // 800D2C44
  c->r[0]=0u+0x43300000u; // 800D2C48
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D2C4C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[30]); // 800D2C50
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[3]=RF64(ea);} // 800D2C54
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2C58
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2C5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800D2C60
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D2C64
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D2C68
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[30])); // 800D2C6C
  {uint32_t ea=c->r[31]+0x0000055Cu; WF32(ea,c->f[0]);} // 800D2C70
L_800D2C74:;
  {uint32_t ea=c->r[31]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2C74
  {uint32_t ea=c->r[31]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2C78
  fcmp(c,0,c->f[0],c->f[1]); // 800D2C7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2C80
  if (!crb(c,2)) { goto L_800D2C90; } // 800D2C84
  c->r[3]=c->r[31]|c->r[31]; // 800D2C88
  c->lr=0x800D2C90u; f_800D38C8(c); // 800D2C8C
L_800D2C90:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D2C90
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D2C94
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D2C98
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800D2C9C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D2CA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2CA4
  c->lr=c->r[0]; // 800D2CA8
  c->r[1]=c->r[1]+0x00000040u; // 800D2CAC
  return; // 800D2CB0
}

// fn_800D2CB4
void f_800D2CB4(Ctx* __restrict c) {
  trace_call(0x800D2CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2CB4
  c->r[0]=c->lr; // 800D2CB8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D2CBC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D2CC0
  c->r[31]=c->r[3]|c->r[3]; // 800D2CC4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D2CC8
  cmps(c,0,(int32_t)c->r[4],0); // 800D2CCC
  if (crb(c,2)) { goto L_800D2CDC; } // 800D2CD0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D2CD4
  goto L_800D2CE0; // 800D2CD8
L_800D2CDC:;
  c->r[0]=0u+0x00000000u; // 800D2CDC
L_800D2CE0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2CE0
  if (!crb(c,2)) { goto L_800D2D84; } // 800D2CE4
  c->r[4]=0u+0x00003E83u; // 800D2CE8
  c->r[3]=c->r[3]+0x00000354u; // 800D2CEC
  c->lr=0x800D2CF4u; f_800667BC(c); // 800D2CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2CF4
  if (!crb(c,2)) { goto L_800D2D0C; } // 800D2CF8
  c->r[3]=c->r[31]|c->r[31]; // 800D2CFC
  c->r[4]=0u+0x00003E83u; // 800D2D00
  c->r[5]=0u+0x00000001u; // 800D2D04
  c->lr=0x800D2D0Cu; f_80064744(c); // 800D2D08
L_800D2D0C:;
  c->r[4]=c->r[31]|c->r[31]; // 800D2D0C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2D10
  c->lr=0x800D2D18u; f_800CA880(c); // 800D2D14
  {uint32_t ea=c->r[2]+0xFFFFA404u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2D18
  c->r[3]=c->r[1]+0x00000038u; // 800D2D1C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2D20
  c->lr=0x800D2D28u; f_8005ED34(c); // 800D2D24
  c->r[4]=c->r[31]|c->r[31]; // 800D2D28
  c->r[3]=c->r[1]+0x00000044u; // 800D2D2C
  c->lr=0x800D2D34u; f_800CA1D4(c); // 800D2D30
  c->r[3]=c->r[1]+0x00000050u; // 800D2D34
  c->r[4]=c->r[1]+0x00000044u; // 800D2D38
  c->r[5]=c->r[1]+0x00000038u; // 800D2D3C
  c->lr=0x800D2D44u; f_80073ACC(c); // 800D2D40
  c->r[3]=c->r[1]+0x00000020u; // 800D2D44
  c->r[4]=c->r[1]+0x00000050u; // 800D2D48
  c->lr=0x800D2D50u; f_8005CD7C(c); // 800D2D4C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2D50
  c->r[3]=c->r[1]+0x00000008u; // 800D2D54
  c->f[2]=c->f[1]; // 800D2D58
  c->f[3]=c->f[1]; // 800D2D5C
  c->lr=0x800D2D64u; f_8005FD70(c); // 800D2D60
  c->r[4]=c->r[3]|c->r[3]; // 800D2D64
  c->r[3]=c->r[31]+0x00000644u; // 800D2D68
  c->lr=0x800D2D70u; f_8005DC84(c); // 800D2D6C
  c->r[3]=c->r[31]+0x00000638u; // 800D2D70
  c->r[4]=c->r[1]+0x00000020u; // 800D2D74
  c->lr=0x800D2D7Cu; f_8005DC84(c); // 800D2D78
  {uint32_t ea=c->r[2]+0xFFFFA40Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2D7C
  {uint32_t ea=c->r[31]+0x00000650u; WF32(ea,c->f[0]);} // 800D2D80
L_800D2D84:;
  {uint32_t ea=c->r[2]+0xFFFFA41Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2D84
  c->r[3]=c->r[31]|c->r[31]; // 800D2D88
  c->lr=0x800D2D90u; f_800D440C(c); // 800D2D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D90
  if (crb(c,2)) { goto L_800D2DAC; } // 800D2D94
  c->r[3]=c->r[31]|c->r[31]; // 800D2D98
  c->r[4]=0u+0x00000001u; // 800D2D9C
  c->lr=0x800D2DA4u; f_8005E814(c); // 800D2DA0
  c->r[3]=c->r[31]|c->r[31]; // 800D2DA4
  c->lr=0x800D2DACu; f_800D38C8(c); // 800D2DA8
L_800D2DAC:;
  c->r[3]=R32(c->r[31]+0x00000420u); // 800D2DAC
  c->lr=0x800D2DB4u; f_800C3D1C(c); // 800D2DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DB4
  if (crb(c,2)) { goto L_800D2DE0; } // 800D2DB8
  c->r[4]=c->r[31]|c->r[31]; // 800D2DBC
  c->r[3]=c->r[1]+0x00000014u; // 800D2DC0
  c->lr=0x800D2DC8u; f_800CA1D4(c); // 800D2DC4
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2DC8
  c->r[3]=c->r[31]|c->r[31]; // 800D2DCC
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2DD0
  c->r[4]=c->r[1]+0x00000014u; // 800D2DD4
  c->f[2]=c->f[1]; // 800D2DD8
  c->lr=0x800D2DE0u; f_80063BD8(c); // 800D2DDC
L_800D2DE0:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D2DE0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D2DE4
  c->lr=c->r[0]; // 800D2DE8
  c->r[1]=c->r[1]+0x00000070u; // 800D2DEC
  return; // 800D2DF0
}

// fn_800D2DF4
void f_800D2DF4(Ctx* __restrict c) {
  trace_call(0x800D2DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2DF4
  c->r[0]=c->lr; // 800D2DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2DFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2E00
  c->r[30]=c->r[3]|c->r[3]; // 800D2E04
  c->r[31]=c->r[4]|c->r[4]; // 800D2E08
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2E0C
  cmps(c,0,(int32_t)c->r[5],0); // 800D2E10
  if (crb(c,2)) { goto L_800D2E20; } // 800D2E14
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D2E18
  goto L_800D2E24; // 800D2E1C
L_800D2E20:;
  c->r[0]=0u+0x00000000u; // 800D2E20
L_800D2E24:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2E24
  if (!crb(c,2)) { goto L_800D2E50; } // 800D2E28
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D2E2C
  c->r[3]=c->r[3]+0x00000354u; // 800D2E30
  c->lr=0x800D2E38u; f_800667BC(c); // 800D2E34
  cmps(c,0,(int32_t)c->r[3],0); // 800D2E38
  if (!crb(c,2)) { goto L_800D2E50; } // 800D2E3C
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D2E40
  c->r[3]=c->r[30]|c->r[30]; // 800D2E44
  c->r[5]=0u+0x00000001u; // 800D2E48
  c->lr=0x800D2E50u; f_80064744(c); // 800D2E4C
L_800D2E50:;
  c->r[3]=c->r[30]+0x00000354u; // 800D2E50
  c->lr=0x800D2E58u; f_800667AC(c); // 800D2E54
  cmps(c,0,(int32_t)c->r[3],0); // 800D2E58
  if (crb(c,2)) { goto L_800D2E68; } // 800D2E5C
  c->r[3]=c->r[30]|c->r[30]; // 800D2E60
  c->lr=0x800D2E68u; f_800D38C8(c); // 800D2E64
L_800D2E68:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2E68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2E6C
  c->lr=c->r[0]; // 800D2E70
  c->r[1]=c->r[1]+0x00000010u; // 800D2E74
  return; // 800D2E78
}

// fn_800D2E7C
void f_800D2E7C(Ctx* __restrict c) {
  trace_call(0x800D2E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E7C
  c->r[0]=c->lr; // 800D2E80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2E84
  c->r[11]=c->r[1]+0x00000020u; // 800D2E88
  c->lr=0x800D2E90u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2E8C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2E90
  c->r[28]=c->r[3]|c->r[3]; // 800D2E94
  c->r[29]=c->r[4]|c->r[4]; // 800D2E98
  cmps(c,0,(int32_t)c->r[5],0); // 800D2E9C
  if (crb(c,2)) { goto L_800D2EAC; } // 800D2EA0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D2EA4
  goto L_800D2EB0; // 800D2EA8
L_800D2EAC:;
  c->r[0]=0u+0x00000000u; // 800D2EAC
L_800D2EB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2EB0
  if (!crb(c,2)) { goto L_800D2F14; } // 800D2EB4
  c->r[4]=0u+0x00003E80u; // 800D2EB8
  c->r[3]=c->r[3]+0x00000354u; // 800D2EBC
  c->lr=0x800D2EC4u; f_800667BC(c); // 800D2EC0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2EC4
  if (!crb(c,2)) { goto L_800D2EDC; } // 800D2EC8
  c->r[3]=c->r[28]|c->r[28]; // 800D2ECC
  c->r[4]=0u+0x00003E80u; // 800D2ED0
  c->r[5]=0u+0x00000001u; // 800D2ED4
  c->lr=0x800D2EDCu; f_80064744(c); // 800D2ED8
L_800D2EDC:;
  c->lr=0x800D2EE0u; f_803B220C(c); // 800D2EDC
  c->r[3]=c->r[3]^0x80000000u; // 800D2EE0
  c->r[0]=0u+0x43300000u; // 800D2EE4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D2EE8
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[3]=RF64(ea);} // 800D2EEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2EF0
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2EF4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D2EF8
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2EFC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800D2F00
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2F04
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800D2F08
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800D2F0C
  {uint32_t ea=c->r[28]+0x0000055Cu; WF32(ea,c->f[0]);} // 800D2F10
L_800D2F14:;
  {uint32_t ea=c->r[28]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2F14
  {uint32_t ea=c->r[28]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2F18
  fcmp(c,0,c->f[0],c->f[1]); // 800D2F1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2F20
  if (!crb(c,2)) { goto L_800D2F4C; } // 800D2F24
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D2F28
  c->r[3]=c->r[28]+0x00000354u; // 800D2F2C
  c->lr=0x800D2F34u; f_800667BC(c); // 800D2F30
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F34
  if (!crb(c,2)) { goto L_800D2F4C; } // 800D2F38
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D2F3C
  c->r[3]=c->r[28]|c->r[28]; // 800D2F40
  c->r[5]=0u+0x00000001u; // 800D2F44
  c->lr=0x800D2F4Cu; f_80064744(c); // 800D2F48
L_800D2F4C:;
  c->r[3]=c->r[28]+0x00000354u; // 800D2F4C
  c->lr=0x800D2F54u; f_800667AC(c); // 800D2F50
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F54
  if (crb(c,2)) { goto L_800D2FB4; } // 800D2F58
  c->r[3]=c->r[28]+0x00000354u; // 800D2F5C
  c->lr=0x800D2F64u; f_800C9374(c); // 800D2F60
  c->r[0]=c->r[3]+0xFFFFC16Eu; // 800D2F64
  cmpu(c,0,c->r[0],0x00000001u); // 800D2F68
  if (crb(c,1)) { goto L_800D2FB4; } // 800D2F6C
  c->r[3]=R32(c->r[29]+0x00000018u); // 800D2F70
  c->r[30]=R32(c->r[29]+0x00000014u); // 800D2F74
  c->r[31]=c->r[3]+0x00000001u; // 800D2F78
  W32(c->r[29]+0x00000018u,c->r[31]); // 800D2F7C
  cmpu(c,0,c->r[30],c->r[31]); // 800D2F80
  if (crb(c,1)) { goto L_800D2F9C; } // 800D2F84
  c->r[3]=c->r[28]|c->r[28]; // 800D2F88
  c->lr=0x800D2F90u; f_800D38C8(c); // 800D2F8C
  c->r[0]=0u+0x00000000u; // 800D2F90
  W32(c->r[29]+0x00000018u,c->r[0]); // 800D2F94
  goto L_800D2FB4; // 800D2F98
L_800D2F9C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D2F9C
  c->lr=0x800D2FA4u; f_800D2FDC(c); // 800D2FA0
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D2FA4
  c->r[5]=c->r[30]|c->r[30]; // 800D2FA8
  c->r[6]=c->r[31]|c->r[31]; // 800D2FAC
  c->lr=0x800D2FB4u; f_800D2FCC(c); // 800D2FB0
L_800D2FB4:;
  c->r[11]=c->r[1]+0x00000020u; // 800D2FB4
  c->lr=0x800D2FBCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2FB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2FBC
  c->lr=c->r[0]; // 800D2FC0
  c->r[1]=c->r[1]+0x00000020u; // 800D2FC4
  return; // 800D2FC8
}

// fn_800D2FCC
void f_800D2FCC(Ctx* __restrict c) {
  trace_call(0x800D2FCCu);
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D2FCC
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D2FD0
  W32(c->r[3]+0x00000018u,c->r[6]); // 800D2FD4
  return; // 800D2FD8
}

// fn_800D2FDC
void f_800D2FDC(Ctx* __restrict c) {
  trace_call(0x800D2FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FDC
  c->r[0]=c->lr; // 800D2FE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2FE4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2FE8
  c->r[31]=c->r[1]|c->r[1]; // 800D2FEC
  c->r[28]=c->r[3]|c->r[3]; // 800D2FF0
  c->lr=0x800D2FF8u; f_800CFFBC(c); // 800D2FF4
  c->r[4]=c->r[3]|c->r[3]; // 800D2FF8
  c->r[3]=c->r[28]|c->r[28]; // 800D2FFC
  c->lr=0x800D3004u; f_80062F4C(c); // 800D3000
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D3004
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3008
  c->r[3]=c->r[28]+c->r[0]; // 800D300C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D3010
  cmps(c,0,(int32_t)c->r[29],0); // 800D3014
  if (crb(c,2)) { goto L_800D304C; } // 800D3018
  c->r[30]=0u+0x00000000u; // 800D301C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D3020
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D3024
  c->lr=0x800D302Cu; f_800CFFBC(c); // 800D3028
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D302C
  c->r[0]=c->r[13]+0xFFFF8418u; // 800D3030
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D3034
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D3038
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D303C
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D3040
  W32(c->r[29]+0x00000014u,c->r[30]); // 800D3044
  W32(c->r[29]+0x00000018u,c->r[30]); // 800D3048
L_800D304C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D304C
  c->r[0]=0u+0x00000000u; // 800D3050
  c->r[3]=c->r[28]|c->r[28]; // 800D3054
  c->r[4]=c->r[29]|c->r[29]; // 800D3058
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D305C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D3060
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D3064
  c->lr=0x800D306Cu; f_8006306C(c); // 800D3068
  c->r[10]=c->r[31]|c->r[31]; // 800D306C
  c->r[3]=c->r[29]|c->r[29]; // 800D3070
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3074
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D3078
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D307C
  c->r[1]=c->r[10]|c->r[10]; // 800D3080
  c->lr=c->r[0]; // 800D3084
  return; // 800D3088
}

// fn_800D308C
void f_800D308C(Ctx* __restrict c) {
  trace_call(0x800D308Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D308C
  c->r[0]=c->lr; // 800D3090
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3094
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3098
  c->r[30]=c->r[3]|c->r[3]; // 800D309C
  c->r[31]=c->r[4]|c->r[4]; // 800D30A0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D30A4
  cmps(c,0,(int32_t)c->r[5],0); // 800D30A8
  if (crb(c,2)) { goto L_800D30B8; } // 800D30AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D30B0
  goto L_800D30BC; // 800D30B4
L_800D30B8:;
  c->r[0]=0u+0x00000000u; // 800D30B8
L_800D30BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D30BC
  if (!crb(c,2)) { goto L_800D30E8; } // 800D30C0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800D30C4
  c->r[3]=c->r[3]+0x00000354u; // 800D30C8
  c->lr=0x800D30D0u; f_800667BC(c); // 800D30CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D30D0
  if (!crb(c,2)) { goto L_800D30E8; } // 800D30D4
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D30D8
  c->r[3]=c->r[30]|c->r[30]; // 800D30DC
  c->r[5]=0u+0x00000001u; // 800D30E0
  c->lr=0x800D30E8u; f_80064744(c); // 800D30E4
L_800D30E8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D30E8
  c->r[0]=R32(c->r[30]+0x000003A8u); // 800D30EC
  cmpu(c,0,c->r[3],c->r[0]); // 800D30F0
  if (crb(c,1)) { goto L_800D3100; } // 800D30F4
  c->r[3]=c->r[30]|c->r[30]; // 800D30F8
  c->lr=0x800D3100u; f_800D38C8(c); // 800D30FC
L_800D3100:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3100
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3104
  c->lr=c->r[0]; // 800D3108
  c->r[1]=c->r[1]+0x00000010u; // 800D310C
  return; // 800D3110
}

// fn_800D3114
void f_800D3114(Ctx* __restrict c) {
  trace_call(0x800D3114u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3114
  c->r[0]=c->lr; // 800D3118
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D311C
  c->r[11]=c->r[1]+0x00000040u; // 800D3120
  c->lr=0x800D3128u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3124
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D3128
  c->r[28]=c->r[3]|c->r[3]; // 800D312C
  cmps(c,0,(int32_t)c->r[4],0); // 800D3130
  if (crb(c,2)) { goto L_800D3140; } // 800D3134
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D3138
  goto L_800D3144; // 800D313C
L_800D3140:;
  c->r[0]=0u+0x00000000u; // 800D3140
L_800D3144:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D3144
  if (!crb(c,2)) { goto L_800D31D4; } // 800D3148
  c->r[3]=c->r[28]|c->r[28]; // 800D314C
  c->lr=0x800D3154u; f_800D422C(c); // 800D3150
  c->r[31]=c->r[3]|c->r[3]; // 800D3154
  c->r[3]=c->r[28]+0x00000354u; // 800D3158
  c->r[4]=c->r[31]|c->r[31]; // 800D315C
  c->lr=0x800D3164u; f_800667BC(c); // 800D3160
  cmps(c,0,(int32_t)c->r[3],0); // 800D3164
  if (!crb(c,2)) { goto L_800D317C; } // 800D3168
  c->r[3]=c->r[28]|c->r[28]; // 800D316C
  c->r[4]=c->r[31]|c->r[31]; // 800D3170
  c->r[5]=0u+0x00000001u; // 800D3174
  c->lr=0x800D317Cu; f_80064744(c); // 800D3178
L_800D317C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D317C
  c->r[4]=0u+0x00000001u; // 800D3180
  c->lr=0x800D3188u; f_8005E814(c); // 800D3184
  c->r[4]=0u+0x80690000u; // 800D3188
  c->r[3]=c->r[28]+0x000000FCu; // 800D318C
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D3190
  c->r[5]=0u+0x00000000u; // 800D3194
  c->r[4]=c->r[4]+0x00000051u; // 800D3198
  c->lr=0x800D31A0u; f_802E67B4(c); // 800D319C
  {uint32_t ea=c->r[2]+0xFFFFA424u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D31A0
  c->r[4]=c->r[28]|c->r[28]; // 800D31A4
  {uint32_t ea=c->r[28]+0x0000055Cu; WF32(ea,c->f[0]);} // 800D31A8
  c->r[3]=c->r[1]+0x00000020u; // 800D31AC
  c->lr=0x800D31B4u; f_800CA1D4(c); // 800D31B0
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D31B4
  c->r[3]=c->r[28]|c->r[28]; // 800D31B8
  {uint32_t ea=c->r[2]+0xFFFFA420u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D31BC
  c->r[4]=c->r[1]+0x00000020u; // 800D31C0
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D31C4
  c->lr=0x800D31CCu; f_800634E8(c); // 800D31C8
  c->r[3]=c->r[28]|c->r[28]; // 800D31CC
  c->lr=0x800D31D4u; f_800D3DAC(c); // 800D31D0
L_800D31D4:;
  c->r[3]=c->r[28]+0x00000354u; // 800D31D4
  c->lr=0x800D31DCu; f_800C9374(c); // 800D31D8
  cmps(c,0,(int32_t)c->r[3],16012); // 800D31DC
  c->r[31]=c->r[3]|c->r[3]; // 800D31E0
  if (crb(c,2)) { goto L_800D31F0; } // 800D31E4
  cmps(c,0,(int32_t)c->r[3],16015); // 800D31E8
  if (!crb(c,2)) { goto L_800D3270; } // 800D31EC
L_800D31F0:;
  c->r[3]=c->r[28]|c->r[28]; // 800D31F0
  c->r[30]=0u+0x00000000u; // 800D31F4
  c->lr=0x800D31FCu; f_800D4278(c); // 800D31F8
  {uint32_t ea=c->r[28]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D31FC
  {uint32_t ea=c->r[28]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3200
  fcmp(c,0,c->f[0],c->f[1]); // 800D3204
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D3208
  if (!crb(c,2)) { goto L_800D3218; } // 800D320C
  c->r[30]=0u+0x00000001u; // 800D3210
  goto L_800D322C; // 800D3214
L_800D3218:;
  c->r[3]=c->r[28]|c->r[28]; // 800D3218
  c->lr=0x800D3220u; f_8005EA80(c); // 800D321C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3220
  if (crb(c,2)) { goto L_800D322C; } // 800D3224
  c->r[30]=0u+0x00000001u; // 800D3228
L_800D322C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D322C
  if (crb(c,2)) { goto L_800D3270; } // 800D3230
  cmps(c,0,(int32_t)c->r[31],16012); // 800D3234
  if (crb(c,2)) { goto L_800D3248; } // 800D3238
  cmps(c,0,(int32_t)c->r[31],16015); // 800D323C
  if (crb(c,2)) { goto L_800D3250; } // 800D3240
  goto L_800D3254; // 800D3244
L_800D3248:;
  c->r[29]=0u+0x00003E8Du; // 800D3248
  goto L_800D3254; // 800D324C
L_800D3250:;
  c->r[29]=0u+0x00003E90u; // 800D3250
L_800D3254:;
  c->r[3]=c->r[28]|c->r[28]; // 800D3254
  c->r[4]=c->r[29]|c->r[29]; // 800D3258
  c->r[5]=0u+0x00000001u; // 800D325C
  c->lr=0x800D3264u; f_80064744(c); // 800D3260
  c->r[3]=c->r[28]|c->r[28]; // 800D3264
  c->r[4]=0u+0x00000001u; // 800D3268
  c->lr=0x800D3270u; f_8005EA70(c); // 800D326C
L_800D3270:;
  c->r[3]=c->r[28]+0x00000354u; // 800D3270
  c->lr=0x800D3278u; f_800667AC(c); // 800D3274
  cmps(c,0,(int32_t)c->r[3],0); // 800D3278
  if (crb(c,2)) { goto L_800D3340; } // 800D327C
  cmps(c,0,(int32_t)c->r[31],16011); // 800D3280
  if (crb(c,2)) { goto L_800D32A4; } // 800D3284
  cmps(c,0,(int32_t)c->r[31],16014); // 800D3288
  if (crb(c,2)) { goto L_800D32A4; } // 800D328C
  cmps(c,0,(int32_t)c->r[31],16013); // 800D3290
  if (crb(c,2)) { goto L_800D3334; } // 800D3294
  cmps(c,0,(int32_t)c->r[31],16016); // 800D3298
  if (crb(c,2)) { goto L_800D3334; } // 800D329C
  goto L_800D3340; // 800D32A0
L_800D32A4:;
  cmps(c,0,(int32_t)c->r[31],16011); // 800D32A4
  c->r[4]=0u+0x00000000u; // 800D32A8
  if (crb(c,2)) { goto L_800D32BC; } // 800D32AC
  cmps(c,0,(int32_t)c->r[31],16014); // 800D32B0
  if (crb(c,2)) { goto L_800D32C4; } // 800D32B4
  goto L_800D32C8; // 800D32B8
L_800D32BC:;
  c->r[4]=0u+0x00003E8Cu; // 800D32BC
  goto L_800D32C8; // 800D32C0
L_800D32C4:;
  c->r[4]=0u+0x00003E8Fu; // 800D32C4
L_800D32C8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D32C8
  c->r[5]=0u+0x00000001u; // 800D32CC
  c->lr=0x800D32D4u; f_80064744(c); // 800D32D0
  c->r[3]=c->r[28]+0x00000654u; // 800D32D4
  c->lr=0x800D32DCu; f_800A7AE8(c); // 800D32D8
  {uint32_t ea=c->r[2]+0xFFFFA42Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D32DC
  c->r[3]=c->r[28]+0x00000654u; // 800D32E0
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D32E4
  c->f[2]=c->f[1]; // 800D32E8
  c->lr=0x800D32F0u; f_800A7B08(c); // 800D32EC
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D32F0
  c->r[3]=c->r[1]+0x00000008u; // 800D32F4
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D32F8
  c->f[3]=c->f[1]; // 800D32FC
  c->lr=0x800D3304u; f_8005FD70(c); // 800D3300
  c->r[4]=c->r[3]|c->r[3]; // 800D3304
  c->r[3]=c->r[28]+0x00000644u; // 800D3308
  c->lr=0x800D3310u; f_8005DC84(c); // 800D330C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3310
  c->r[3]=c->r[1]+0x00000014u; // 800D3314
  c->f[2]=c->f[1]; // 800D3318
  c->f[3]=c->f[1]; // 800D331C
  c->lr=0x800D3324u; f_8005FD70(c); // 800D3320
  c->r[4]=c->r[3]|c->r[3]; // 800D3324
  c->r[3]=c->r[28]+0x00000638u; // 800D3328
  c->lr=0x800D3330u; f_8005DC84(c); // 800D332C
  goto L_800D3340; // 800D3330
L_800D3334:;
  c->r[3]=c->r[28]|c->r[28]; // 800D3334
  c->r[4]=0u+0x00000000u; // 800D3338
  c->lr=0x800D3340u; f_8005EE88(c); // 800D333C
L_800D3340:;
  c->r[11]=c->r[1]+0x00000040u; // 800D3340
  c->lr=0x800D3348u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3344
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D3348
  c->lr=c->r[0]; // 800D334C
  c->r[1]=c->r[1]+0x00000040u; // 800D3350
  return; // 800D3354
}

// fn_800D3358
void f_800D3358(Ctx* __restrict c) {
  trace_call(0x800D3358u);
  cmps(c,0,(int32_t)c->r[4],-1); // 800D3358
  if (!crb(c,1)) { goto L_800D3370; } // 800D335C
  cmps(c,0,(int32_t)c->r[4],5); // 800D3360
  if (!crb(c,0)) { goto L_800D3370; } // 800D3364
  c->r[3]=c->r[3]+0x000005ECu; // 800D3368
  f_8005CDE8(c); return; // 800D336C
L_800D3370:;
  c->r[3]=0u+0x00000000u; // 800D3370
  return; // 800D3374
}

// fn_800D3378
void f_800D3378(Ctx* __restrict c) {
  trace_call(0x800D3378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3378
  c->r[0]=c->lr; // 800D337C
  c->r[4]=0u+0x00000000u; // 800D3380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3384
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3388
  c->r[30]=c->r[3]|c->r[3]; // 800D338C
  c->r[31]=0u+0xFFFFFFFFu; // 800D3390
  c->lr=0x800D3398u; f_800D3358(c); // 800D3394
  cmps(c,0,(int32_t)c->r[3],0); // 800D3398
  if (crb(c,2)) { goto L_800D33A8; } // 800D339C
  c->r[31]=0u+0x00000000u; // 800D33A0
  goto L_800D3414; // 800D33A4
L_800D33A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D33A8
  c->r[4]=0u+0x00000001u; // 800D33AC
  c->lr=0x800D33B4u; f_800D3358(c); // 800D33B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D33B4
  if (crb(c,2)) { goto L_800D33C4; } // 800D33B8
  c->r[31]=0u+0x00000001u; // 800D33BC
  goto L_800D3414; // 800D33C0
L_800D33C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D33C4
  c->r[4]=0u+0x00000003u; // 800D33C8
  c->lr=0x800D33D0u; f_800D3358(c); // 800D33CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D33D0
  if (crb(c,2)) { goto L_800D33E0; } // 800D33D4
  c->r[31]=0u+0x00000003u; // 800D33D8
  goto L_800D3414; // 800D33DC
L_800D33E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D33E0
  c->r[4]=0u+0x00000002u; // 800D33E4
  c->lr=0x800D33ECu; f_800D3358(c); // 800D33E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D33EC
  if (crb(c,2)) { goto L_800D33FC; } // 800D33F0
  c->r[31]=0u+0x00000002u; // 800D33F4
  goto L_800D3414; // 800D33F8
L_800D33FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D33FC
  c->r[4]=0u+0x00000004u; // 800D3400
  c->lr=0x800D3408u; f_800D3358(c); // 800D3404
  cmps(c,0,(int32_t)c->r[3],0); // 800D3408
  if (crb(c,2)) { goto L_800D3414; } // 800D340C
  c->r[31]=0u+0x00000004u; // 800D3410
L_800D3414:;
  cmps(c,0,(int32_t)c->r[31],-1); // 800D3414
  if (!crb(c,2)) { goto L_800D3424; } // 800D3418
  c->r[3]=0u+0x00000000u; // 800D341C
  goto L_800D34CC; // 800D3420
L_800D3424:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D3424
  if (crb(c,2)) { goto L_800D3450; } // 800D3428
  cmps(c,0,(int32_t)c->r[31],1); // 800D342C
  if (crb(c,2)) { goto L_800D345C; } // 800D3430
  cmps(c,0,(int32_t)c->r[31],2); // 800D3434
  if (crb(c,2)) { goto L_800D3470; } // 800D3438
  cmps(c,0,(int32_t)c->r[31],3); // 800D343C
  if (crb(c,2)) { goto L_800D3484; } // 800D3440
  cmps(c,0,(int32_t)c->r[31],4); // 800D3444
  if (crb(c,2)) { goto L_800D3498; } // 800D3448
  goto L_800D34A8; // 800D344C
L_800D3450:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3450
  c->lr=0x800D3458u; f_800D38C8(c); // 800D3454
  goto L_800D34A8; // 800D3458
L_800D345C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D345C
  c->lr=0x800D3464u; f_800D19B4(c); // 800D3460
  c->r[0]=0u+0x00003E94u; // 800D3464
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3468
  goto L_800D34A8; // 800D346C
L_800D3470:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3470
  c->lr=0x800D3478u; f_800D1A60(c); // 800D3474
  c->r[0]=0u+0x00003E93u; // 800D3478
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D347C
  goto L_800D34A8; // 800D3480
L_800D3484:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3484
  c->lr=0x800D348Cu; f_800D19B4(c); // 800D3488
  c->r[0]=0u+0x00003E95u; // 800D348C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3490
  goto L_800D34A8; // 800D3494
L_800D3498:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3498
  c->lr=0x800D34A0u; f_800D1A60(c); // 800D349C
  c->r[0]=0u+0x00003E92u; // 800D34A0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D34A4
L_800D34A8:;
  cmps(c,0,(int32_t)c->r[31],-1); // 800D34A8
  if (!crb(c,1)) { goto L_800D34C8; } // 800D34AC
  cmps(c,0,(int32_t)c->r[31],5); // 800D34B0
  if (!crb(c,0)) { goto L_800D34C8; } // 800D34B4
  c->r[4]=c->r[31]|c->r[31]; // 800D34B8
  c->r[3]=c->r[30]+0x000005ECu; // 800D34BC
  c->r[5]=0u+0x00000000u; // 800D34C0
  c->lr=0x800D34C8u; f_8005DCA0(c); // 800D34C4
L_800D34C8:;
  c->r[3]=0u+0x00000001u; // 800D34C8
L_800D34CC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D34CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D34D0
  c->lr=c->r[0]; // 800D34D4
  c->r[1]=c->r[1]+0x00000010u; // 800D34D8
  return; // 800D34DC
}

// fn_800D34E0
void f_800D34E0(Ctx* __restrict c) {
  trace_call(0x800D34E0u);
  c->r[5]=R32(c->r[3]+0x00000634u); // 800D34E0
  cmps(c,0,(int32_t)c->r[5],0); // 800D34E4
  if (crb(c,0)) { goto L_800D34F4; } // 800D34E8
  cmps(c,0,(int32_t)c->r[5],16); // 800D34EC
  if (crb(c,0)) { goto L_800D34FC; } // 800D34F0
L_800D34F4:;
  c->r[3]=0u+0x00000000u; // 800D34F4
  return; // 800D34F8
L_800D34FC:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D34FC
  cmps(c,0,(int32_t)c->r[4],0); // 800D3500
  c->r[4]=c->r[3]+c->r[0]; // 800D3504
  c->r[4]=R32(c->r[4]+0x000005F4u); // 800D3508
  if (crb(c,2)) { goto L_800D3518; } // 800D350C
  c->r[0]=c->r[5]+0x00000001u; // 800D3510
  W32(c->r[3]+0x00000634u,c->r[0]); // 800D3514
L_800D3518:;
  c->r[3]=c->r[4]|c->r[4]; // 800D3518
  return; // 800D351C
}

// fn_800D3520
void f_800D3520(Ctx* __restrict c) {
  trace_call(0x800D3520u);
  cmpu(c,0,c->r[4],0x0000000Cu); // 800D3520
  if (crb(c,1)) return; // 800D3524
  c->r[5]=0u+0x806D0000u; // 800D3528
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D352C
  c->r[5]=c->r[5]+0x000076D0u; // 800D3530
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D3534
  c->ctr=c->r[5]; // 800D3538
  if (true) { switch (c->ctr) { case 0x800D3540u: goto L_800D3540; case 0x800D3548u: goto L_800D3548; case 0x800D3550u: goto L_800D3550; case 0x800D3558u: goto L_800D3558; case 0x800D3560u: goto L_800D3560; case 0x800D3568u: goto L_800D3568; case 0x800D3570u: goto L_800D3570; case 0x800D3578u: goto L_800D3578; case 0x800D3580u: goto L_800D3580; case 0x800D3588u: goto L_800D3588; case 0x800D3590u: goto L_800D3590; case 0x800D3598u: goto L_800D3598; case 0x800D359Cu: goto L_800D359C; default: break; } dispatch(c,c->ctr); return; } // 800D353C
L_800D3540:;
  c->r[3]=0u+0x00000000u; // 800D3540
  return; // 800D3544
L_800D3548:;
  c->r[3]=0u+0x00003E82u; // 800D3548
  return; // 800D354C
L_800D3550:;
  c->r[3]=0u+0x00003E83u; // 800D3550
  return; // 800D3554
L_800D3558:;
  c->r[3]=0u+0x00003E88u; // 800D3558
  return; // 800D355C
L_800D3560:;
  c->r[3]=0u+0x00003E87u; // 800D3560
  return; // 800D3564
L_800D3568:;
  c->r[3]=0u+0x00003E86u; // 800D3568
  return; // 800D356C
L_800D3570:;
  c->r[3]=0u+0x00003E93u; // 800D3570
  return; // 800D3574
L_800D3578:;
  c->r[3]=0u+0x00003E93u; // 800D3578
  return; // 800D357C
L_800D3580:;
  c->r[3]=0u+0x00003E94u; // 800D3580
  return; // 800D3584
L_800D3588:;
  c->r[3]=0u+0x00003E92u; // 800D3588
  return; // 800D358C
L_800D3590:;
  c->r[3]=0u+0x00003E92u; // 800D3590
  return; // 800D3594
L_800D3598:;
  c->r[3]=0u+0x00003E95u; // 800D3598
L_800D359C:;
  return; // 800D359C
}

// fn_800D35A0
void f_800D35A0(Ctx* __restrict c) {
  trace_call(0x800D35A0u);
  c->r[0]=c->r[4]+0xFFFFFFF3u; // 800D35A0
  c->r[3]=0u+0x00000001u; // 800D35A4
  cmpu(c,0,c->r[0],0x00000007u); // 800D35A8
  if (crb(c,1)) return; // 800D35AC
  c->r[4]=0u+0x806D0000u; // 800D35B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D35B4
  c->r[4]=c->r[4]+0x00007704u; // 800D35B8
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D35BC
  c->ctr=c->r[4]; // 800D35C0
  if (true) { switch (c->ctr) { case 0x800D35C8u: goto L_800D35C8; case 0x800D35D0u: goto L_800D35D0; case 0x800D35D8u: goto L_800D35D8; case 0x800D35E0u: goto L_800D35E0; case 0x800D35E8u: goto L_800D35E8; case 0x800D35F0u: goto L_800D35F0; case 0x800D35F8u: goto L_800D35F8; case 0x800D3600u: goto L_800D3600; default: break; } dispatch(c,c->ctr); return; } // 800D35C4
L_800D35C8:;
  c->r[3]=0u+0x00000001u; // 800D35C8
  return; // 800D35CC
L_800D35D0:;
  c->r[3]=0u+0x00000002u; // 800D35D0
  return; // 800D35D4
L_800D35D8:;
  c->r[3]=0u+0x00000003u; // 800D35D8
  return; // 800D35DC
L_800D35E0:;
  c->r[3]=0u+0x00000004u; // 800D35E0
  return; // 800D35E4
L_800D35E8:;
  c->r[3]=0u+0x00000005u; // 800D35E8
  return; // 800D35EC
L_800D35F0:;
  c->r[3]=0u+0x00000006u; // 800D35F0
  return; // 800D35F4
L_800D35F8:;
  c->r[3]=0u+0x00000007u; // 800D35F8
  return; // 800D35FC
L_800D3600:;
  c->r[3]=0u+0x00000008u; // 800D3600
  return; // 800D3604
}

// fn_800D3608
void f_800D3608(Ctx* __restrict c) {
  trace_call(0x800D3608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3608
  c->r[0]=c->lr; // 800D360C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3610
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3614
  c->r[26]=c->r[3]|c->r[3]; // 800D3618
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800D361C
  c->r[3]=c->r[4]+0x00000004u; // 800D3620
  c->lr=0x800D3628u; f_800A097C(c); // 800D3624
  cmps(c,0,(int32_t)c->r[3],0); // 800D3628
  if (crb(c,2)) { goto L_800D38B4; } // 800D362C
  c->r[3]=c->r[26]+0x000005F4u; // 800D3630
  c->r[31]=0u+0x00000000u; // 800D3634
  c->r[4]=0u+0x00000000u; // 800D3638
  c->r[5]=0u+0x00000040u; // 800D363C
  c->lr=0x800D3644u; f_800043EC(c); // 800D3640
  c->r[30]=0u+0x80690000u; // 800D3644
  W32(c->r[26]+0x00000634u,c->r[31]); // 800D3648
  c->r[29]=0u+0x00000000u; // 800D364C
  c->r[30]=c->r[30]+0xFFFFE75Cu; // 800D3650
L_800D3654:;
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 800D3654
  c->r[4]=c->r[29]|c->r[29]; // 800D3658
  c->r[28]=0u+0x00000000u; // 800D365C
  c->lr=0x800D3664u; f_800C2EE0(c); // 800D3660
  c->r[27]=c->r[3]|c->r[3]; // 800D3664
  c->r[3]=c->r[30]+0x00000056u; // 800D3668
  c->r[4]=c->r[27]|c->r[27]; // 800D366C
  c->lr=0x800D3674u; f_803B393C(c); // 800D3670
  cmps(c,0,(int32_t)c->r[3],0); // 800D3674
  if (!crb(c,2)) { goto L_800D3684; } // 800D3678
  c->r[28]=0u+0x00000001u; // 800D367C
  goto L_800D3894; // 800D3680
L_800D3684:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3684
  c->r[3]=c->r[30]+0x00000001u; // 800D3688
  c->lr=0x800D3690u; f_803B393C(c); // 800D368C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3690
  if (!crb(c,2)) { goto L_800D36A0; } // 800D3694
  c->r[28]=0u+0x00000002u; // 800D3698
  goto L_800D3894; // 800D369C
L_800D36A0:;
  c->r[4]=c->r[27]|c->r[27]; // 800D36A0
  c->r[3]=c->r[30]+0x0000005Au; // 800D36A4
  c->lr=0x800D36ACu; f_803B393C(c); // 800D36A8
  cmps(c,0,(int32_t)c->r[3],0); // 800D36AC
  if (!crb(c,2)) { goto L_800D36BC; } // 800D36B0
  c->r[28]=0u+0x00000003u; // 800D36B4
  goto L_800D3894; // 800D36B8
L_800D36BC:;
  c->r[4]=c->r[27]|c->r[27]; // 800D36BC
  c->r[3]=c->r[30]+0x00000066u; // 800D36C0
  c->lr=0x800D36C8u; f_803B393C(c); // 800D36C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D36C8
  if (!crb(c,2)) { goto L_800D36D8; } // 800D36CC
  c->r[28]=0u+0x00000004u; // 800D36D0
  goto L_800D3894; // 800D36D4
L_800D36D8:;
  c->r[4]=c->r[27]|c->r[27]; // 800D36D8
  c->r[3]=c->r[30]+0x00000072u; // 800D36DC
  c->lr=0x800D36E4u; f_803B393C(c); // 800D36E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D36E4
  if (!crb(c,2)) { goto L_800D36F4; } // 800D36E8
  c->r[28]=0u+0x00000005u; // 800D36EC
  goto L_800D3894; // 800D36F0
L_800D36F4:;
  c->r[4]=c->r[27]|c->r[27]; // 800D36F4
  c->r[3]=c->r[30]+0x00000081u; // 800D36F8
  c->lr=0x800D3700u; f_803B393C(c); // 800D36FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3700
  if (!crb(c,2)) { goto L_800D3710; } // 800D3704
  c->r[28]=0u+0x00000006u; // 800D3708
  goto L_800D3894; // 800D370C
L_800D3710:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3710
  c->r[3]=c->r[30]+0x00000089u; // 800D3714
  c->lr=0x800D371Cu; f_803B393C(c); // 800D3718
  cmps(c,0,(int32_t)c->r[3],0); // 800D371C
  if (!crb(c,2)) { goto L_800D372C; } // 800D3720
  c->r[28]=0u+0x00000007u; // 800D3724
  goto L_800D3894; // 800D3728
L_800D372C:;
  c->r[4]=c->r[27]|c->r[27]; // 800D372C
  c->r[3]=c->r[30]+0x00000024u; // 800D3730
  c->lr=0x800D3738u; f_803B393C(c); // 800D3734
  cmps(c,0,(int32_t)c->r[3],0); // 800D3738
  if (!crb(c,2)) { goto L_800D3748; } // 800D373C
  c->r[28]=0u+0x00000008u; // 800D3740
  goto L_800D3894; // 800D3744
L_800D3748:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3748
  c->r[3]=c->r[30]+0x0000001Bu; // 800D374C
  c->lr=0x800D3754u; f_803B393C(c); // 800D3750
  cmps(c,0,(int32_t)c->r[3],0); // 800D3754
  if (!crb(c,2)) { goto L_800D3764; } // 800D3758
  c->r[28]=0u+0x00000009u; // 800D375C
  goto L_800D3894; // 800D3760
L_800D3764:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3764
  c->r[3]=c->r[30]+0x00000097u; // 800D3768
  c->lr=0x800D3770u; f_803B393C(c); // 800D376C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3770
  if (!crb(c,2)) { goto L_800D3780; } // 800D3774
  c->r[28]=0u+0x0000000Au; // 800D3778
  goto L_800D3894; // 800D377C
L_800D3780:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3780
  c->r[3]=c->r[30]+0x0000003Fu; // 800D3784
  c->lr=0x800D378Cu; f_803B393C(c); // 800D3788
  cmps(c,0,(int32_t)c->r[3],0); // 800D378C
  if (!crb(c,2)) { goto L_800D379C; } // 800D3790
  c->r[28]=0u+0x0000000Bu; // 800D3794
  goto L_800D3894; // 800D3798
L_800D379C:;
  c->r[4]=c->r[27]|c->r[27]; // 800D379C
  c->r[3]=c->r[30]+0x00000036u; // 800D37A0
  c->lr=0x800D37A8u; f_803B393C(c); // 800D37A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D37A8
  if (!crb(c,2)) { goto L_800D37B8; } // 800D37AC
  c->r[28]=0u+0x0000000Cu; // 800D37B0
  goto L_800D3894; // 800D37B4
L_800D37B8:;
  c->r[4]=c->r[27]|c->r[27]; // 800D37B8
  c->r[3]=c->r[30]+0x000000A5u; // 800D37BC
  c->lr=0x800D37C4u; f_803B393C(c); // 800D37C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D37C4
  if (!crb(c,2)) { goto L_800D37D4; } // 800D37C8
  c->r[28]=0u+0x0000000Du; // 800D37CC
  goto L_800D3894; // 800D37D0
L_800D37D4:;
  c->r[4]=c->r[27]|c->r[27]; // 800D37D4
  c->r[3]=c->r[30]+0x000000A9u; // 800D37D8
  c->lr=0x800D37E0u; f_803B393C(c); // 800D37DC
  cmps(c,0,(int32_t)c->r[3],0); // 800D37E0
  if (!crb(c,2)) { goto L_800D37F0; } // 800D37E4
  c->r[28]=0u+0x0000000Eu; // 800D37E8
  goto L_800D3894; // 800D37EC
L_800D37F0:;
  c->r[4]=c->r[27]|c->r[27]; // 800D37F0
  c->r[3]=c->r[30]+0x000000ADu; // 800D37F4
  c->lr=0x800D37FCu; f_803B393C(c); // 800D37F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D37FC
  if (!crb(c,2)) { goto L_800D380C; } // 800D3800
  c->r[28]=0u+0x0000000Fu; // 800D3804
  goto L_800D3894; // 800D3808
L_800D380C:;
  c->r[4]=c->r[27]|c->r[27]; // 800D380C
  c->r[3]=c->r[30]+0x000000B1u; // 800D3810
  c->lr=0x800D3818u; f_803B393C(c); // 800D3814
  cmps(c,0,(int32_t)c->r[3],0); // 800D3818
  if (!crb(c,2)) { goto L_800D3828; } // 800D381C
  c->r[28]=0u+0x00000010u; // 800D3820
  goto L_800D3894; // 800D3824
L_800D3828:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3828
  c->r[3]=c->r[30]+0x000000B5u; // 800D382C
  c->lr=0x800D3834u; f_803B393C(c); // 800D3830
  cmps(c,0,(int32_t)c->r[3],0); // 800D3834
  if (!crb(c,2)) { goto L_800D3844; } // 800D3838
  c->r[28]=0u+0x00000011u; // 800D383C
  goto L_800D3894; // 800D3840
L_800D3844:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3844
  c->r[3]=c->r[30]+0x000000B9u; // 800D3848
  c->lr=0x800D3850u; f_803B393C(c); // 800D384C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3850
  if (!crb(c,2)) { goto L_800D3860; } // 800D3854
  c->r[28]=0u+0x00000012u; // 800D3858
  goto L_800D3894; // 800D385C
L_800D3860:;
  c->r[4]=c->r[27]|c->r[27]; // 800D3860
  c->r[3]=c->r[30]+0x000000BDu; // 800D3864
  c->lr=0x800D386Cu; f_803B393C(c); // 800D3868
  cmps(c,0,(int32_t)c->r[3],0); // 800D386C
  if (!crb(c,2)) { goto L_800D387C; } // 800D3870
  c->r[28]=0u+0x00000013u; // 800D3874
  goto L_800D3894; // 800D3878
L_800D387C:;
  c->r[4]=c->r[27]|c->r[27]; // 800D387C
  c->r[3]=c->r[30]+0x000000C1u; // 800D3880
  c->lr=0x800D3888u; f_803B393C(c); // 800D3884
  cmps(c,0,(int32_t)c->r[3],0); // 800D3888
  if (!crb(c,2)) { goto L_800D3894; } // 800D388C
  c->r[28]=0u+0x00000014u; // 800D3890
L_800D3894:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D3894
  if (crb(c,2)) { goto L_800D38A8; } // 800D3898
  c->r[3]=c->r[26]+c->r[31]; // 800D389C
  c->r[31]=c->r[31]+0x00000004u; // 800D38A0
  W32(c->r[3]+0x000005F4u,c->r[28]); // 800D38A4
L_800D38A8:;
  c->r[29]=c->r[29]+0x00000001u; // 800D38A8
  cmps(c,0,(int32_t)c->r[29],16); // 800D38AC
  if (crb(c,0)) { IRQCHK(c); goto L_800D3654; } // 800D38B0
L_800D38B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D38B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D38B8
  c->lr=c->r[0]; // 800D38BC
  c->r[1]=c->r[1]+0x00000020u; // 800D38C0
  return; // 800D38C4
}

// fn_800D38C8
void f_800D38C8(Ctx* __restrict c) {
  trace_call(0x800D38C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D38C8
  c->r[0]=c->lr; // 800D38CC
  c->r[4]=0u+0x00000001u; // 800D38D0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D38D4
  {uint32_t ea=c->r[1]+0x0000006Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D38D8
  c->r[31]=c->r[1]|c->r[1]; // 800D38DC
  c->r[29]=c->r[3]|c->r[3]; // 800D38E0
  c->lr=0x800D38E8u; f_800D34E0(c); // 800D38E4
  c->r[30]=c->r[3]|c->r[3]; // 800D38E8
  c->r[3]=c->r[29]+0x00000354u; // 800D38EC
  c->lr=0x800D38F4u; f_800C9374(c); // 800D38F0
  cmpu(c,0,c->r[30],0x00000014u); // 800D38F4
  c->r[28]=c->r[3]|c->r[3]; // 800D38F8
  if (crb(c,1)) { goto L_800D3BDC; } // 800D38FC
  c->r[4]=0u+0x806D0000u; // 800D3900
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D3904
  c->r[4]=c->r[4]+0x00007724u; // 800D3908
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D390C
  c->ctr=c->r[4]; // 800D3910
  if (true) { switch (c->ctr) { case 0x800D3918u: goto L_800D3918; case 0x800D394Cu: goto L_800D394C; case 0x800D39A8u: goto L_800D39A8; case 0x800D3A2Cu: goto L_800D3A2C; case 0x800D3A58u: goto L_800D3A58; case 0x800D3AE8u: goto L_800D3AE8; case 0x800D3B40u: goto L_800D3B40; case 0x800D3B4Cu: goto L_800D3B4C; case 0x800D3BD4u: goto L_800D3BD4; default: break; } dispatch(c,c->ctr); return; } // 800D3914
L_800D3918:;
  c->r[0]=c->r[3]+0xFFFFC16Fu; // 800D3918
  cmpu(c,0,c->r[0],0x00000004u); // 800D391C
  if (!crb(c,1)) { goto L_800D392C; } // 800D3920
  cmps(c,0,(int32_t)c->r[3],16000); // 800D3924
  if (!crb(c,2)) { goto L_800D3940; } // 800D3928
L_800D392C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D392C
  c->lr=0x800D3934u; f_800D3BF8(c); // 800D3930
  c->r[0]=0u+0x00003E82u; // 800D3934
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3938
  goto L_800D3BDC; // 800D393C
L_800D3940:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3940
  c->lr=0x800D3948u; f_800D1B08(c); // 800D3944
  goto L_800D3BDC; // 800D3948
L_800D394C:;
  c->r[0]=c->r[3]+0xFFFFC16Fu; // 800D394C
  cmpu(c,0,c->r[0],0x00000004u); // 800D3950
  if (!crb(c,1)) { goto L_800D3988; } // 800D3954
  cmps(c,0,(int32_t)c->r[3],16002); // 800D3958
  if (crb(c,2)) { goto L_800D396C; } // 800D395C
  cmps(c,0,(int32_t)c->r[3],16000); // 800D3960
  if (crb(c,2)) { goto L_800D3988; } // 800D3964
  goto L_800D399C; // 800D3968
L_800D396C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D396C
  c->lr=0x800D3974u; f_800D2350(c); // 800D3970
  c->r[0]=0u+0x00003E83u; // 800D3974
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3978
  c->r[0]=0u+0x00000001u; // 800D397C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D3980
  goto L_800D3BDC; // 800D3984
L_800D3988:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3988
  c->lr=0x800D3990u; f_800D3BF8(c); // 800D398C
  c->r[0]=0u+0x00003E83u; // 800D3990
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3994
  goto L_800D3BDC; // 800D3998
L_800D399C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D399C
  c->lr=0x800D39A4u; f_800D2000(c); // 800D39A0
  goto L_800D3BDC; // 800D39A4
L_800D39A8:;
  c->lr=0x800D39ACu; f_800D0060(c); // 800D39A8
  c->r[4]=c->r[3]|c->r[3]; // 800D39AC
  c->r[3]=c->r[29]|c->r[29]; // 800D39B0
  c->lr=0x800D39B8u; f_80062F4C(c); // 800D39B4
  c->r[0]=R8(c->r[29]+0x00000010u); // 800D39B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D39BC
  c->r[3]=c->r[29]+c->r[0]; // 800D39C0
  c->r[27]=R32(c->r[3]+0x00000014u); // 800D39C4
  cmps(c,0,(int32_t)c->r[27],0); // 800D39C8
  if (crb(c,2)) { goto L_800D39F8; } // 800D39CC
  c->r[28]=0u+0x00000000u; // 800D39D0
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 800D39D4
  W8(c->r[31]+0x00000010u,c->r[28]); // 800D39D8
  c->lr=0x800D39E0u; f_800D0060(c); // 800D39DC
  W32(c->r[27]+0x00000000u,c->r[3]); // 800D39E0
  c->r[0]=c->r[13]+0xFFFF841Cu; // 800D39E4
  W32(c->r[27]+0x00000004u,c->r[0]); // 800D39E8
  W32(c->r[27]+0x00000008u,c->r[28]); // 800D39EC
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800D39F0
  W32(c->r[27]+0x00000010u,c->r[28]); // 800D39F4
L_800D39F8:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800D39F8
  c->r[0]=0u+0x00000000u; // 800D39FC
  c->r[3]=c->r[29]|c->r[29]; // 800D3A00
  c->r[4]=c->r[27]|c->r[27]; // 800D3A04
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D3A08
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D3A0C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D3A10
  c->lr=0x800D3A18u; f_8006306C(c); // 800D3A14
  c->r[3]=c->r[29]|c->r[29]; // 800D3A18
  c->r[4]=c->r[30]|c->r[30]; // 800D3A1C
  c->lr=0x800D3A24u; f_800D3520(c); // 800D3A20
  W32(c->r[27]+0x00000010u,c->r[3]); // 800D3A24
  goto L_800D3BDC; // 800D3A28
L_800D3A2C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3A2C
  c->r[4]=c->r[30]|c->r[30]; // 800D3A30
  c->lr=0x800D3A38u; f_800D3520(c); // 800D3A34
  c->r[28]=c->r[3]|c->r[3]; // 800D3A38
  c->r[3]=c->r[29]|c->r[29]; // 800D3A3C
  c->lr=0x800D3A44u; f_800D2FDC(c); // 800D3A40
  c->r[4]=c->r[28]|c->r[28]; // 800D3A44
  c->r[5]=0u+0x00000002u; // 800D3A48
  c->r[6]=0u+0x00000000u; // 800D3A4C
  c->lr=0x800D3A54u; f_800D2FCC(c); // 800D3A50
  goto L_800D3BDC; // 800D3A54
L_800D3A58:;
  c->lr=0x800D3A5Cu; f_800CFF18(c); // 800D3A58
  c->r[4]=c->r[3]|c->r[3]; // 800D3A5C
  c->r[3]=c->r[29]|c->r[29]; // 800D3A60
  c->lr=0x800D3A68u; f_80062F4C(c); // 800D3A64
  c->r[0]=R8(c->r[29]+0x00000010u); // 800D3A68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3A6C
  c->r[3]=c->r[29]+c->r[0]; // 800D3A70
  c->r[27]=R32(c->r[3]+0x00000014u); // 800D3A74
  cmps(c,0,(int32_t)c->r[27],0); // 800D3A78
  if (crb(c,2)) { goto L_800D3AAC; } // 800D3A7C
  c->r[28]=0u+0x00000000u; // 800D3A80
  W32(c->r[31]+0x00000044u,c->r[1]); // 800D3A84
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 800D3A88
  c->lr=0x800D3A90u; f_800CFF18(c); // 800D3A8C
  W32(c->r[27]+0x00000000u,c->r[3]); // 800D3A90
  c->r[0]=c->r[13]+0xFFFF8414u; // 800D3A94
  W32(c->r[27]+0x00000004u,c->r[0]); // 800D3A98
  W32(c->r[27]+0x00000008u,c->r[28]); // 800D3A9C
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800D3AA0
  W32(c->r[27]+0x00000010u,c->r[28]); // 800D3AA4
  W32(c->r[27]+0x00000014u,c->r[28]); // 800D3AA8
L_800D3AAC:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800D3AAC
  c->r[0]=0u+0x00000000u; // 800D3AB0
  c->r[3]=c->r[29]|c->r[29]; // 800D3AB4
  c->r[4]=c->r[27]|c->r[27]; // 800D3AB8
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D3ABC
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D3AC0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D3AC4
  c->lr=0x800D3ACCu; f_8006306C(c); // 800D3AC8
  c->r[3]=c->r[29]|c->r[29]; // 800D3ACC
  c->r[4]=c->r[30]|c->r[30]; // 800D3AD0
  c->lr=0x800D3AD8u; f_800D3520(c); // 800D3AD4
  W32(c->r[27]+0x00000010u,c->r[3]); // 800D3AD8
  c->r[0]=0u+0x00000001u; // 800D3ADC
  W32(c->r[27]+0x00000014u,c->r[0]); // 800D3AE0
  goto L_800D3BDC; // 800D3AE4
L_800D3AE8:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3AE8
  c->r[4]=c->r[30]|c->r[30]; // 800D3AEC
  c->lr=0x800D3AF4u; f_800D3520(c); // 800D3AF0
  c->r[0]=c->r[28]+0xFFFFC16Fu; // 800D3AF4
  c->r[27]=c->r[3]|c->r[3]; // 800D3AF8
  cmpu(c,0,c->r[0],0x00000004u); // 800D3AFC
  if (!crb(c,1)) { goto L_800D3B0C; } // 800D3B00
  cmps(c,0,(int32_t)c->r[28],16000); // 800D3B04
  if (!crb(c,2)) { goto L_800D3B1C; } // 800D3B08
L_800D3B0C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3B0C
  c->lr=0x800D3B14u; f_800D3BF8(c); // 800D3B10
  W32(c->r[3]+0x00000010u,c->r[27]); // 800D3B14
  goto L_800D3BDC; // 800D3B18
L_800D3B1C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3B1C
  c->r[4]=c->r[27]|c->r[27]; // 800D3B20
  c->lr=0x800D3B28u; f_800D4124(c); // 800D3B24
  c->r[30]=c->r[3]|c->r[3]; // 800D3B28
  c->r[3]=c->r[29]|c->r[29]; // 800D3B2C
  c->lr=0x800D3B34u; f_800D1F54(c); // 800D3B30
  W32(c->r[3]+0x00000010u,c->r[27]); // 800D3B34
  W32(c->r[3]+0x00000014u,c->r[30]); // 800D3B38
  goto L_800D3BDC; // 800D3B3C
L_800D3B40:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3B40
  c->lr=0x800D3B48u; f_8031749C(c); // 800D3B44
  goto L_800D3BDC; // 800D3B48
L_800D3B4C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3B4C
  c->r[4]=c->r[30]|c->r[30]; // 800D3B50
  c->lr=0x800D3B58u; f_800D35A0(c); // 800D3B54
  c->r[4]=c->r[3]|c->r[3]; // 800D3B58
  c->r[3]=c->r[29]|c->r[29]; // 800D3B5C
  c->lr=0x800D3B64u; f_800D40D0(c); // 800D3B60
  c->lr=0x800D3B68u; f_800D0438(c); // 800D3B64
  c->r[4]=c->r[3]|c->r[3]; // 800D3B68
  c->r[3]=c->r[29]|c->r[29]; // 800D3B6C
  c->lr=0x800D3B74u; f_80062F4C(c); // 800D3B70
  c->r[0]=R8(c->r[29]+0x00000010u); // 800D3B74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3B78
  c->r[3]=c->r[29]+c->r[0]; // 800D3B7C
  c->r[27]=R32(c->r[3]+0x00000014u); // 800D3B80
  cmps(c,0,(int32_t)c->r[27],0); // 800D3B84
  if (crb(c,2)) { goto L_800D3BB0; } // 800D3B88
  c->r[30]=0u+0x00000000u; // 800D3B8C
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800D3B90
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D3B94
  c->lr=0x800D3B9Cu; f_800D0438(c); // 800D3B98
  W32(c->r[27]+0x00000000u,c->r[3]); // 800D3B9C
  c->r[0]=c->r[13]+0xFFFF8434u; // 800D3BA0
  W32(c->r[27]+0x00000004u,c->r[0]); // 800D3BA4
  W32(c->r[27]+0x00000008u,c->r[30]); // 800D3BA8
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 800D3BAC
L_800D3BB0:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800D3BB0
  c->r[0]=0u+0x00000000u; // 800D3BB4
  c->r[3]=c->r[29]|c->r[29]; // 800D3BB8
  c->r[4]=c->r[27]|c->r[27]; // 800D3BBC
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D3BC0
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D3BC4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D3BC8
  c->lr=0x800D3BD0u; f_8006306C(c); // 800D3BCC
  goto L_800D3BDC; // 800D3BD0
L_800D3BD4:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3BD4
  c->lr=0x800D3BDCu; f_800D3CDC(c); // 800D3BD8
L_800D3BDC:;
  c->r[10]=c->r[31]|c->r[31]; // 800D3BDC
  {uint32_t ea=c->r[10]+0x0000006Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3BE0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D3BE4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D3BE8
  c->r[1]=c->r[10]|c->r[10]; // 800D3BEC
  c->lr=c->r[0]; // 800D3BF0
  return; // 800D3BF4
}

// fn_800D3BF8
void f_800D3BF8(Ctx* __restrict c) {
  trace_call(0x800D3BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3BF8
  c->r[0]=c->lr; // 800D3BFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D3C00
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3C04
  c->r[31]=c->r[1]|c->r[1]; // 800D3C08
  c->r[28]=c->r[3]|c->r[3]; // 800D3C0C
  c->lr=0x800D3C14u; f_800D0624(c); // 800D3C10
  c->r[4]=c->r[3]|c->r[3]; // 800D3C14
  c->r[3]=c->r[28]|c->r[28]; // 800D3C18
  c->lr=0x800D3C20u; f_80062F4C(c); // 800D3C1C
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D3C20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3C24
  c->r[3]=c->r[28]+c->r[0]; // 800D3C28
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D3C2C
  cmps(c,0,(int32_t)c->r[29],0); // 800D3C30
  if (crb(c,2)) { goto L_800D3C60; } // 800D3C34
  c->r[30]=0u+0x00000000u; // 800D3C38
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D3C3C
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D3C40
  c->lr=0x800D3C48u; f_800D0624(c); // 800D3C44
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D3C48
  c->r[0]=c->r[13]+0xFFFF8440u; // 800D3C4C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D3C50
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D3C54
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D3C58
  W32(c->r[29]+0x00000010u,c->r[30]); // 800D3C5C
L_800D3C60:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D3C60
  c->r[0]=0u+0x00000000u; // 800D3C64
  c->r[3]=c->r[28]|c->r[28]; // 800D3C68
  c->r[4]=c->r[29]|c->r[29]; // 800D3C6C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D3C70
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D3C74
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D3C78
  c->lr=0x800D3C80u; f_8006306C(c); // 800D3C7C
  c->r[10]=c->r[31]|c->r[31]; // 800D3C80
  c->r[3]=c->r[29]|c->r[29]; // 800D3C84
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3C88
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D3C8C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D3C90
  c->r[1]=c->r[10]|c->r[10]; // 800D3C94
  c->lr=c->r[0]; // 800D3C98
  return; // 800D3C9C
}

// fn_800D3CA0
void f_800D3CA0(Ctx* __restrict c) {
  trace_call(0x800D3CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CA0
  c->r[0]=c->lr; // 800D3CA4
  c->r[4]=0u+0x00000000u; // 800D3CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3CB0
  c->r[31]=c->r[3]|c->r[3]; // 800D3CB4
  c->r[3]=R32(c->r[3]+0x00000434u); // 800D3CB8
  c->lr=0x800D3CC0u; f_800FE038(c); // 800D3CBC
  c->r[3]=R32(c->r[31]+0x00000434u); // 800D3CC0
  c->lr=0x800D3CC8u; f_800FE178(c); // 800D3CC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3CCC
  c->lr=c->r[0]; // 800D3CD0
  c->r[1]=c->r[1]+0x00000010u; // 800D3CD4
  return; // 800D3CD8
}

// fn_800D3CDC
void f_800D3CDC(Ctx* __restrict c) {
  trace_call(0x800D3CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CDC
  c->r[0]=c->lr; // 800D3CE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3CE4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3CE8
  c->r[29]=c->r[3]|c->r[3]; // 800D3CEC
  c->lr=0x800D3CF4u; f_800D3CA0(c); // 800D3CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D3CF4
  c->r[30]=0u+0x00000000u; // 800D3CF8
  if (crb(c,2)) { goto L_800D3D14; } // 800D3CFC
  cmps(c,0,(int32_t)c->r[3],1); // 800D3D00
  if (crb(c,2)) { goto L_800D3D1C; } // 800D3D04
  cmps(c,0,(int32_t)c->r[3],2); // 800D3D08
  if (crb(c,2)) { goto L_800D3D24; } // 800D3D0C
  goto L_800D3D30; // 800D3D10
L_800D3D14:;
  c->r[30]=0u+0x00003E88u; // 800D3D14
  goto L_800D3D30; // 800D3D18
L_800D3D1C:;
  c->r[30]=0u+0x00003E87u; // 800D3D1C
  goto L_800D3D30; // 800D3D20
L_800D3D24:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3D24
  c->lr=0x800D3D2Cu; f_800D2000(c); // 800D3D28
  goto L_800D3D98; // 800D3D2C
L_800D3D30:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3D30
  c->r[4]=c->r[30]|c->r[30]; // 800D3D34
  c->lr=0x800D3D3Cu; f_800D4124(c); // 800D3D38
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3D3C
  c->r[31]=c->r[3]|c->r[3]; // 800D3D40
  cmpu(c,0,c->r[0],0x00000001u); // 800D3D44
  if (!crb(c,1)) { goto L_800D3D58; } // 800D3D48
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D4C
  if (crb(c,2)) { goto L_800D3D6C; } // 800D3D50
  goto L_800D3D98; // 800D3D54
L_800D3D58:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3D58
  c->lr=0x800D3D60u; f_800D1F54(c); // 800D3D5C
  W32(c->r[3]+0x00000010u,c->r[30]); // 800D3D60
  W32(c->r[3]+0x00000014u,c->r[31]); // 800D3D64
  goto L_800D3D98; // 800D3D68
L_800D3D6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3D6C
  c->lr=0x800D3D74u; f_8006117C(c); // 800D3D70
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D74
  if (crb(c,2)) { goto L_800D3D8C; } // 800D3D78
  c->r[3]=c->r[29]|c->r[29]; // 800D3D7C
  c->r[4]=c->r[30]|c->r[30]; // 800D3D80
  c->lr=0x800D3D88u; f_800D3E28(c); // 800D3D84
  goto L_800D3D98; // 800D3D88
L_800D3D8C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D3D8C
  c->lr=0x800D3D94u; f_800D23FC(c); // 800D3D90
  W32(c->r[3]+0x00000010u,c->r[30]); // 800D3D94
L_800D3D98:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3D98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3D9C
  c->lr=c->r[0]; // 800D3DA0
  c->r[1]=c->r[1]+0x00000020u; // 800D3DA4
  return; // 800D3DA8
}

// fn_800D3DAC
void f_800D3DAC(Ctx* __restrict c) {
  trace_call(0x800D3DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DAC
  c->r[0]=c->lr; // 800D3DB0
  c->r[4]=0u+0x00000016u; // 800D3DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3DBC
  c->r[31]=c->r[3]|c->r[3]; // 800D3DC0
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800D3DC4
  c->r[3]=c->r[5]+0x000000C4u; // 800D3DC8
  c->lr=0x800D3DD0u; f_8005CDE8(c); // 800D3DCC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3DD0
  if (!crb(c,2)) { goto L_800D3E14; } // 800D3DD4
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800D3DD8
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3DDC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3DE0
  fcmp(c,0,c->f[1],c->f[0]); // 800D3DE4
  if (!crb(c,1)) { goto L_800D3DF8; } // 800D3DE8
  c->r[3]=c->r[31]|c->r[31]; // 800D3DEC
  c->lr=0x800D3DF4u; f_8005E00C(c); // 800D3DF0
  goto L_800D3E08; // 800D3DF4
L_800D3DF8:;
  c->r[3]=c->r[3]+0x000000C4u; // 800D3DF8
  c->r[4]=0u+0x00000016u; // 800D3DFC
  c->r[5]=0u+0x00000001u; // 800D3E00
  c->lr=0x800D3E08u; f_8005DCA0(c); // 800D3E04
L_800D3E08:;
  c->r[3]=c->r[31]|c->r[31]; // 800D3E08
  c->r[4]=0u+0x00000000u; // 800D3E0C
  c->lr=0x800D3E14u; f_8005EE88(c); // 800D3E10
L_800D3E14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3E18
  c->lr=c->r[0]; // 800D3E1C
  c->r[1]=c->r[1]+0x00000010u; // 800D3E20
  return; // 800D3E24
}

// fn_800D3E28
void f_800D3E28(Ctx* __restrict c) {
  trace_call(0x800D3E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E28
  c->r[0]=c->lr; // 800D3E2C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D3E30
  c->r[0]=c->r[4]+0xFFFFC179u; // 800D3E34
  cmpu(c,0,c->r[0],0x00000001u); // 800D3E38
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3E3C
  c->r[31]=c->r[1]|c->r[1]; // 800D3E40
  c->r[30]=c->r[3]|c->r[3]; // 800D3E44
  c->r[27]=c->r[4]|c->r[4]; // 800D3E48
  if (!crb(c,1)) { goto L_800D3E5C; } // 800D3E4C
  cmps(c,0,(int32_t)c->r[4],16006); // 800D3E50
  if (crb(c,2)) { goto L_800D3ED4; } // 800D3E54
  goto L_800D3F40; // 800D3E58
L_800D3E5C:;
  c->lr=0x800D3E60u; f_800D02F0(c); // 800D3E5C
  c->r[4]=c->r[3]|c->r[3]; // 800D3E60
  c->r[3]=c->r[30]|c->r[30]; // 800D3E64
  c->lr=0x800D3E6Cu; f_80062F4C(c); // 800D3E68
  c->r[0]=R8(c->r[30]+0x00000010u); // 800D3E6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3E70
  c->r[3]=c->r[30]+c->r[0]; // 800D3E74
  c->r[28]=R32(c->r[3]+0x00000014u); // 800D3E78
  cmps(c,0,(int32_t)c->r[28],0); // 800D3E7C
  if (crb(c,2)) { goto L_800D3EAC; } // 800D3E80
  c->r[29]=0u+0x00000000u; // 800D3E84
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800D3E88
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800D3E8C
  c->lr=0x800D3E94u; f_800D02F0(c); // 800D3E90
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D3E94
  c->r[0]=c->r[13]+0xFFFF842Cu; // 800D3E98
  W32(c->r[28]+0x00000004u,c->r[0]); // 800D3E9C
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D3EA0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800D3EA4
  W32(c->r[28]+0x00000010u,c->r[29]); // 800D3EA8
L_800D3EAC:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800D3EAC
  c->r[0]=0u+0x00000000u; // 800D3EB0
  c->r[3]=c->r[30]|c->r[30]; // 800D3EB4
  c->r[4]=c->r[28]|c->r[28]; // 800D3EB8
  W32(c->r[28]+0x00000008u,c->r[0]); // 800D3EBC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D3EC0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D3EC4
  c->lr=0x800D3ECCu; f_8006306C(c); // 800D3EC8
  W32(c->r[28]+0x00000010u,c->r[27]); // 800D3ECC
  goto L_800D3F40; // 800D3ED0
L_800D3ED4:;
  c->lr=0x800D3ED8u; f_800D024C(c); // 800D3ED4
  c->r[4]=c->r[3]|c->r[3]; // 800D3ED8
  c->r[3]=c->r[30]|c->r[30]; // 800D3EDC
  c->lr=0x800D3EE4u; f_80062F4C(c); // 800D3EE0
  c->r[0]=R8(c->r[30]+0x00000010u); // 800D3EE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3EE8
  c->r[3]=c->r[30]+c->r[0]; // 800D3EEC
  c->r[28]=R32(c->r[3]+0x00000014u); // 800D3EF0
  cmps(c,0,(int32_t)c->r[28],0); // 800D3EF4
  if (crb(c,2)) { goto L_800D3F20; } // 800D3EF8
  c->r[29]=0u+0x00000000u; // 800D3EFC
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D3F00
  W8(c->r[31]+0x00000008u,c->r[29]); // 800D3F04
  c->lr=0x800D3F0Cu; f_800D024C(c); // 800D3F08
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D3F0C
  c->r[0]=c->r[13]+0xFFFF8428u; // 800D3F10
  W32(c->r[28]+0x00000004u,c->r[0]); // 800D3F14
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D3F18
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800D3F1C
L_800D3F20:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800D3F20
  c->r[0]=0u+0x00000000u; // 800D3F24
  c->r[3]=c->r[30]|c->r[30]; // 800D3F28
  c->r[4]=c->r[28]|c->r[28]; // 800D3F2C
  W32(c->r[28]+0x00000008u,c->r[0]); // 800D3F30
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D3F34
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D3F38
  c->lr=0x800D3F40u; f_8006306C(c); // 800D3F3C
L_800D3F40:;
  c->r[10]=c->r[31]|c->r[31]; // 800D3F40
  {uint32_t ea=c->r[10]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3F44
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D3F48
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D3F4C
  c->r[1]=c->r[10]|c->r[10]; // 800D3F50
  c->lr=c->r[0]; // 800D3F54
  return; // 800D3F58
}

// fn_800D3F5C
void f_800D3F5C(Ctx* __restrict c) {
  trace_call(0x800D3F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F5C
  c->r[0]=c->lr; // 800D3F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3F64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3F68
  c->r[31]=c->r[3]|c->r[3]; // 800D3F6C
  c->r[3]=c->r[3]+0x00000354u; // 800D3F70
  c->lr=0x800D3F78u; f_800C9374(c); // 800D3F74
  c->r[0]=c->r[3]+0xFFFFC16Du; // 800D3F78
  cmpu(c,0,c->r[0],0x00000001u); // 800D3F7C
  if (!crb(c,1)) { goto L_800D4000; } // 800D3F80
  cmps(c,0,(int32_t)c->r[3],16001); // 800D3F84
  if (crb(c,2)) { goto L_800D3FA0; } // 800D3F88
  cmps(c,0,(int32_t)c->r[3],16018); // 800D3F8C
  if (crb(c,2)) { goto L_800D4060; } // 800D3F90
  cmps(c,0,(int32_t)c->r[3],16021); // 800D3F94
  if (crb(c,2)) { goto L_800D4060; } // 800D3F98
  goto L_800D40BC; // 800D3F9C
L_800D3FA0:;
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3FA0
  c->r[3]=c->r[31]|c->r[31]; // 800D3FA4
  c->lr=0x800D3FACu; f_80064A68(c); // 800D3FA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D3FAC
  if (crb(c,2)) { goto L_800D3FD0; } // 800D3FB0
  c->r[4]=0u+0x80690000u; // 800D3FB4
  c->r[3]=c->r[31]+0x000000FCu; // 800D3FB8
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D3FBC
  c->r[5]=0u+0x00000001u; // 800D3FC0
  c->r[4]=c->r[4]+0x00000051u; // 800D3FC4
  c->lr=0x800D3FCCu; f_802E67B4(c); // 800D3FC8
  goto L_800D40BC; // 800D3FCC
L_800D3FD0:;
  {uint32_t ea=c->r[2]+0xFFFFA434u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3FD0
  c->r[3]=c->r[31]|c->r[31]; // 800D3FD4
  c->lr=0x800D3FDCu; f_80064A68(c); // 800D3FD8
  cmps(c,0,(int32_t)c->r[3],0); // 800D3FDC
  if (crb(c,2)) { goto L_800D40BC; } // 800D3FE0
  c->r[4]=0u+0x80690000u; // 800D3FE4
  c->r[3]=c->r[31]+0x000000FCu; // 800D3FE8
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D3FEC
  c->r[5]=0u+0x00000000u; // 800D3FF0
  c->r[4]=c->r[4]+0x00000051u; // 800D3FF4
  c->lr=0x800D3FFCu; f_802E67B4(c); // 800D3FF8
  goto L_800D40BC; // 800D3FFC
L_800D4000:;
  {uint32_t ea=c->r[2]+0xFFFFA438u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4000
  c->r[3]=c->r[31]|c->r[31]; // 800D4004
  c->lr=0x800D400Cu; f_80064A68(c); // 800D4008
  cmps(c,0,(int32_t)c->r[3],0); // 800D400C
  if (crb(c,2)) { goto L_800D4030; } // 800D4010
  c->r[4]=0u+0x80690000u; // 800D4014
  c->r[3]=c->r[31]+0x000000FCu; // 800D4018
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D401C
  c->r[5]=0u+0x00000000u; // 800D4020
  c->r[4]=c->r[4]+0x00000051u; // 800D4024
  c->lr=0x800D402Cu; f_802E67B4(c); // 800D4028
  goto L_800D40BC; // 800D402C
L_800D4030:;
  {uint32_t ea=c->r[2]+0xFFFFA43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4030
  c->r[3]=c->r[31]|c->r[31]; // 800D4034
  c->lr=0x800D403Cu; f_80064A68(c); // 800D4038
  cmps(c,0,(int32_t)c->r[3],0); // 800D403C
  if (crb(c,2)) { goto L_800D40BC; } // 800D4040
  c->r[4]=0u+0x80690000u; // 800D4044
  c->r[3]=c->r[31]+0x000000FCu; // 800D4048
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D404C
  c->r[5]=0u+0x00000001u; // 800D4050
  c->r[4]=c->r[4]+0x00000051u; // 800D4054
  c->lr=0x800D405Cu; f_802E67B4(c); // 800D4058
  goto L_800D40BC; // 800D405C
L_800D4060:;
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4060
  c->r[3]=c->r[31]|c->r[31]; // 800D4064
  c->lr=0x800D406Cu; f_80064A68(c); // 800D4068
  cmps(c,0,(int32_t)c->r[3],0); // 800D406C
  if (crb(c,2)) { goto L_800D4090; } // 800D4070
  c->r[4]=0u+0x80690000u; // 800D4074
  c->r[3]=c->r[31]+0x000000FCu; // 800D4078
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D407C
  c->r[5]=0u+0x00000000u; // 800D4080
  c->r[4]=c->r[4]+0x00000051u; // 800D4084
  c->lr=0x800D408Cu; f_802E67B4(c); // 800D4088
  goto L_800D40BC; // 800D408C
L_800D4090:;
  {uint32_t ea=c->r[2]+0xFFFFA440u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4090
  c->r[3]=c->r[31]|c->r[31]; // 800D4094
  c->lr=0x800D409Cu; f_80064A68(c); // 800D4098
  cmps(c,0,(int32_t)c->r[3],0); // 800D409C
  if (crb(c,2)) { goto L_800D40BC; } // 800D40A0
  c->r[4]=0u+0x80690000u; // 800D40A4
  c->r[3]=c->r[31]+0x000000FCu; // 800D40A8
  c->r[4]=c->r[4]+0xFFFFE75Cu; // 800D40AC
  c->r[5]=0u+0x00000001u; // 800D40B0
  c->r[4]=c->r[4]+0x00000051u; // 800D40B4
  c->lr=0x800D40BCu; f_802E67B4(c); // 800D40B8
L_800D40BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D40BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D40C0
  c->lr=c->r[0]; // 800D40C4
  c->r[1]=c->r[1]+0x00000010u; // 800D40C8
  return; // 800D40CC
}

// fn_800D40D0
void f_800D40D0(Ctx* __restrict c) {
  trace_call(0x800D40D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40D0
  c->r[0]=c->lr; // 800D40D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D40D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D40DC
  c->r[30]=c->r[3]|c->r[3]; // 800D40E0
  c->r[31]=c->r[4]|c->r[4]; // 800D40E4
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800D40E8
  c->lr=0x800D40F0u; f_800C2DF8(c); // 800D40EC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D40F0
  c->r[3]=c->r[30]+c->r[0]; // 800D40F4
  c->r[4]=R32(c->r[3]+0x000005C8u); // 800D40F8
  cmps(c,0,(int32_t)c->r[4],0); // 800D40FC
  if (crb(c,2)) { goto L_800D4110; } // 800D4100
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D4104
  c->r[3]=c->r[3]+0x00000004u; // 800D4108
  c->lr=0x800D4110u; f_800A0914(c); // 800D410C
L_800D4110:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4114
  c->lr=c->r[0]; // 800D4118
  c->r[1]=c->r[1]+0x00000010u; // 800D411C
  return; // 800D4120
}

// fn_800D4124
void f_800D4124(Ctx* __restrict c) {
  trace_call(0x800D4124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4124
  c->r[0]=c->lr; // 800D4128
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D412C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4130
  c->r[31]=c->r[4]|c->r[4]; // 800D4134
  c->lr=0x800D413Cu; f_800D41B4(c); // 800D4138
  cmps(c,0,(int32_t)c->r[31],16008); // 800D413C
  c->r[3]=0u+0x00000000u; // 800D4140
  if (crb(c,2)) { goto L_800D4154; } // 800D4144
  cmps(c,0,(int32_t)c->r[31],16007); // 800D4148
  if (crb(c,2)) { goto L_800D417C; } // 800D414C
  goto L_800D41A0; // 800D4150
L_800D4154:;
  {uint32_t ea=c->r[2]+0xFFFFA444u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4154
  fcmp(c,0,c->f[1],c->f[0]); // 800D4158
  if (!crb(c,0)) { goto L_800D4168; } // 800D415C
  c->r[3]=0u+0x00000001u; // 800D4160
  goto L_800D41A0; // 800D4164
L_800D4168:;
  {uint32_t ea=c->r[2]+0xFFFFA3FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4168
  fcmp(c,0,c->f[0],c->f[1]); // 800D416C
  if (!crb(c,0)) { goto L_800D41A0; } // 800D4170
  c->r[3]=0u+0x00000002u; // 800D4174
  goto L_800D41A0; // 800D4178
L_800D417C:;
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D417C
  fcmp(c,0,c->f[1],c->f[0]); // 800D4180
  if (!crb(c,0)) { goto L_800D4190; } // 800D4184
  c->r[3]=0u+0x00000001u; // 800D4188
  goto L_800D41A0; // 800D418C
L_800D4190:;
  {uint32_t ea=c->r[2]+0xFFFFA400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4190
  fcmp(c,0,c->f[0],c->f[1]); // 800D4194
  if (!crb(c,0)) { goto L_800D41A0; } // 800D4198
  c->r[3]=0u+0x00000002u; // 800D419C
L_800D41A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D41A4
  c->lr=c->r[0]; // 800D41A8
  c->r[1]=c->r[1]+0x00000010u; // 800D41AC
  return; // 800D41B0
}

// fn_800D41B4
void f_800D41B4(Ctx* __restrict c) {
  trace_call(0x800D41B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41B4
  c->r[0]=c->lr; // 800D41B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D41BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D41C0
  c->r[31]=c->r[3]|c->r[3]; // 800D41C4
  c->r[3]=c->r[1]+0x00000008u; // 800D41C8
  c->r[4]=c->r[31]|c->r[31]; // 800D41CC
  c->lr=0x800D41D4u; f_800CA1D4(c); // 800D41D0
  c->r[4]=c->r[31]|c->r[31]; // 800D41D4
  c->r[31]=c->r[1]+0x00000008u; // 800D41D8
  c->r[3]=c->r[1]+0x00000014u; // 800D41DC
  c->lr=0x800D41E4u; f_80061A48(c); // 800D41E0
  c->r[4]=c->r[31]|c->r[31]; // 800D41E4
  c->r[3]=c->r[1]+0x00000014u; // 800D41E8
  c->lr=0x800D41F0u; f_80383EF4(c); // 800D41EC
  c->r[3]=0u+0x806A0000u; // 800D41F0
  c->r[3]=c->r[3]+0x00000AA8u; // 800D41F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D41F8
  c->f[0]=frsqrte(c->f[1]); // 800D41FC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D4200
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800D4204
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800D4208
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 800D420C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[3]); // 800D4210
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800D4214
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D4218
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D421C
  c->lr=c->r[0]; // 800D4220
  c->r[1]=c->r[1]+0x00000030u; // 800D4224
  return; // 800D4228
}

// fn_800D422C
void f_800D422C(Ctx* __restrict c) {
  trace_call(0x800D422Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D422C
  c->r[0]=c->lr; // 800D4230
  c->r[3]=R32(c->r[2]+0xFFFFA450u); // 800D4234
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4238
  c->r[0]=R32(c->r[2]+0xFFFFA454u); // 800D423C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D4240
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D4244
  c->lr=0x800D424Cu; f_803B220C(c); // 800D4248
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800D424C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800D4250
  c->r[0]=c->r[0]^c->r[4]; // 800D4254
  c->r[3]=c->r[1]+0x00000008u; // 800D4258
  c->r[0]=c->r[0]-c->r[4]; // 800D425C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D4260
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D4264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4268
  c->lr=c->r[0]; // 800D426C
  c->r[1]=c->r[1]+0x00000010u; // 800D4270
  return; // 800D4274
}

// fn_800D4278
void f_800D4278(Ctx* __restrict c) {
  trace_call(0x800D4278u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4278
  c->r[0]=c->lr; // 800D427C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4280
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D4284
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D4288
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D428C
  c->r[31]=c->r[3]|c->r[3]; // 800D4290
  c->r[3]=c->r[3]+0x00000654u; // 800D4294
  c->lr=0x800D429Cu; f_800A7B64(c); // 800D4298
  c->r[4]=c->r[31]|c->r[31]; // 800D429C
  c->r[3]=c->r[1]+0x00000018u; // 800D42A0
  c->lr=0x800D42A8u; f_80061A48(c); // 800D42A4
  c->r[0]=0u+0x00000000u; // 800D42A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D42AC
  c->r[3]=c->r[1]+0x00000008u; // 800D42B0
  c->lr=0x800D42B8u; f_8004714C(c); // 800D42B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D42B8
  c->r[3]=c->r[31]+0x00000654u; // 800D42BC
  c->lr=0x800D42C4u; f_800A7BEC(c); // 800D42C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800D42C4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D42C8
  c->r[4]=c->r[31]+0x00000644u; // 800D42CC
  c->lr=0x800D42D4u; f_8005ED34(c); // 800D42D0
  c->r[3]=c->r[31]|c->r[31]; // 800D42D4
  c->r[4]=c->r[1]+0x0000000Cu; // 800D42D8
  c->lr=0x800D42E0u; f_80083340(c); // 800D42DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D42E0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D42E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D42E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D42EC
  c->lr=c->r[0]; // 800D42F0
  c->r[1]=c->r[1]+0x00000040u; // 800D42F4
  return; // 800D42F8
}

// fn_800D42FC
void f_800D42FC(Ctx* __restrict c) {
  trace_call(0x800D42FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D42FC
  c->r[0]=c->lr; // 800D4300
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D4304
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800D4308
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800D430C
  c->f[31]=c->f[1]; // 800D4310
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800D4314
  c->r[31]=c->r[3]|c->r[3]; // 800D4318
  c->r[4]=c->r[31]|c->r[31]; // 800D431C
  c->r[3]=c->r[1]+0x0000003Cu; // 800D4320
  c->lr=0x800D4328u; f_80061A48(c); // 800D4324
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4328
  fcmp(c,0,c->f[0],c->f[31]); // 800D432C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D4330
  if (crb(c,2)) { goto L_800D434C; } // 800D4334
  c->r[3]=c->r[31]+0x00000638u; // 800D4338
  c->lr=0x800D4340u; f_80084FAC(c); // 800D433C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4340
  fcmp(c,0,c->f[1],c->f[0]); // 800D4344
  if (crb(c,2)) { goto L_800D437C; } // 800D4348
L_800D434C:;
  c->r[3]=c->r[1]+0x00000018u; // 800D434C
  c->r[4]=c->r[31]+0x00000638u; // 800D4350
  c->r[5]=c->r[1]+0x0000003Cu; // 800D4354
  c->lr=0x800D435Cu; f_8005FC60(c); // 800D4358
  c->r[3]=c->r[1]+0x00000018u; // 800D435C
  c->lr=0x800D4364u; f_80060DC8(c); // 800D4360
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800D4364
  fcmp(c,0,c->f[1],c->f[0]); // 800D4368
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D436C
  if (!crb(c,2)) { goto L_800D437C; } // 800D4370
  c->r[3]=0u+0x00000001u; // 800D4374
  goto L_800D43F0; // 800D4378
L_800D437C:;
  c->r[3]=c->r[31]+0x000001B8u; // 800D437C
  c->r[4]=c->r[1]+0x00000048u; // 800D4380
  c->lr=0x800D4388u; f_80382F2C(c); // 800D4384
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D4388
  c->r[3]=c->r[1]+0x0000000Cu; // 800D438C
  c->f[2]=c->f[1]; // 800D4390
  c->f[3]=c->f[1]; // 800D4394
  c->lr=0x800D439Cu; f_8005FD70(c); // 800D4398
  c->r[4]=c->r[3]|c->r[3]; // 800D439C
  c->r[3]=c->r[1]+0x00000048u; // 800D43A0
  c->lr=0x800D43A8u; f_8005CDC8(c); // 800D43A4
  c->r[3]=c->r[1]+0x00000030u; // 800D43A8
  c->r[4]=c->r[1]+0x00000048u; // 800D43AC
  c->r[5]=c->r[31]+0x00000644u; // 800D43B0
  c->lr=0x800D43B8u; f_8030DB70(c); // 800D43B4
  c->r[0]=0u+0x00000000u; // 800D43B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D43BC
  c->r[3]=c->r[1]+0x00000008u; // 800D43C0
  c->lr=0x800D43C8u; f_8004714C(c); // 800D43C4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D43C8
  c->r[3]=c->r[1]+0x00000024u; // 800D43CC
  {uint32_t ea=c->r[31]+0x00000650u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D43D0
  c->r[4]=c->r[1]+0x00000030u; // 800D43D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D43D8
  c->lr=0x800D43E0u; f_8005ED34(c); // 800D43DC
  c->r[3]=c->r[31]|c->r[31]; // 800D43E0
  c->r[4]=c->r[1]+0x00000024u; // 800D43E4
  c->lr=0x800D43ECu; f_80083340(c); // 800D43E8
  c->r[3]=0u+0x00000000u; // 800D43EC
L_800D43F0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D43F0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800D43F4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800D43F8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800D43FC
  c->lr=c->r[0]; // 800D4400
  c->r[1]=c->r[1]+0x00000090u; // 800D4404
  return; // 800D4408
}

// fn_800D440C
void f_800D440C(Ctx* __restrict c) {
  trace_call(0x800D440Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D440C
  c->r[0]=c->lr; // 800D4410
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D4414
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800D4418
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800D441C
  c->f[31]=c->f[1]; // 800D4420
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800D4424
  c->r[31]=c->r[3]|c->r[3]; // 800D4428
  c->r[4]=c->r[31]|c->r[31]; // 800D442C
  c->r[3]=c->r[1]+0x00000030u; // 800D4430
  c->lr=0x800D4438u; f_80061A48(c); // 800D4434
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4438
  fcmp(c,0,c->f[0],c->f[31]); // 800D443C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D4440
  if (crb(c,2)) { goto L_800D445C; } // 800D4444
  c->r[3]=c->r[31]+0x00000638u; // 800D4448
  c->lr=0x800D4450u; f_80084FAC(c); // 800D444C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4450
  fcmp(c,0,c->f[1],c->f[0]); // 800D4454
  if (crb(c,2)) { goto L_800D448C; } // 800D4458
L_800D445C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D445C
  c->r[4]=c->r[31]+0x00000638u; // 800D4460
  c->r[5]=c->r[1]+0x00000030u; // 800D4464
  c->lr=0x800D446Cu; f_8005FC60(c); // 800D4468
  c->r[3]=c->r[1]+0x0000000Cu; // 800D446C
  c->lr=0x800D4474u; f_80060DC8(c); // 800D4470
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800D4474
  fcmp(c,0,c->f[1],c->f[0]); // 800D4478
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D447C
  if (!crb(c,2)) { goto L_800D448C; } // 800D4480
  c->r[3]=0u+0x00000001u; // 800D4484
  goto L_800D44F8; // 800D4488
L_800D448C:;
  c->r[3]=c->r[31]+0x000001B8u; // 800D448C
  c->r[4]=c->r[1]+0x00000040u; // 800D4490
  c->lr=0x800D4498u; f_80382F2C(c); // 800D4494
  c->r[0]=0u+0x00000000u; // 800D4498
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D449C
  c->r[3]=c->r[1]+0x00000008u; // 800D44A0
  c->lr=0x800D44A8u; f_8004714C(c); // 800D44A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D44A8
  c->r[3]=c->r[1]+0x00000024u; // 800D44AC
  {uint32_t ea=c->r[31]+0x00000650u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D44B0
  c->r[4]=c->r[31]+0x00000638u; // 800D44B4
  c->r[5]=c->r[1]+0x00000030u; // 800D44B8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800D44BC
  c->lr=0x800D44C4u; f_8005FC60(c); // 800D44C0
  c->r[3]=c->r[1]+0x00000024u; // 800D44C4
  c->r[5]=0u+0x806A0000u; // 800D44C8
  c->r[4]=c->r[3]|c->r[3]; // 800D44CC
  c->r[5]=c->r[5]+0x00000AA8u; // 800D44D0
  c->lr=0x800D44D8u; f_8030E0BC(c); // 800D44D4
  c->f[1]=c->f[31]; // 800D44D8
  c->r[3]=c->r[1]+0x00000018u; // 800D44DC
  c->r[4]=c->r[1]+0x00000024u; // 800D44E0
  c->lr=0x800D44E8u; f_8005ED34(c); // 800D44E4
  c->r[3]=c->r[31]|c->r[31]; // 800D44E8
  c->r[4]=c->r[1]+0x00000018u; // 800D44EC
  c->lr=0x800D44F4u; f_80083340(c); // 800D44F0
  c->r[3]=0u+0x00000000u; // 800D44F4
L_800D44F8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D44F8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800D44FC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800D4500
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800D4504
  c->lr=c->r[0]; // 800D4508
  c->r[1]=c->r[1]+0x00000090u; // 800D450C
  return; // 800D4510
}

// fn_800D4514
void f_800D4514(Ctx* __restrict c) {
  trace_call(0x800D4514u);
  return; // 800D4514
}

// fn_800D4518
void f_800D4518(Ctx* __restrict c) {
  trace_call(0x800D4518u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800D4518
  f_800D13BC(c); return; // 800D451C
}

// fn_800D4520
void f_800D4520(Ctx* __restrict c) {
  trace_call(0x800D4520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4520
  c->r[0]=c->lr; // 800D4524
  c->r[5]=0u+0x80690000u; // 800D4528
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D452C
  c->r[0]=0u+0x00000000u; // 800D4530
  c->r[4]=c->r[1]+0x00000008u; // 800D4534
  c->r[5]=c->r[5]+0xFFFFE9E0u; // 800D4538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D453C
  c->r[31]=c->r[3]|c->r[3]; // 800D4540
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D4544
  c->lr=0x800D454Cu; f_800D52C4(c); // 800D4548
  c->r[4]=0u+0x806D0000u; // 800D454C
  c->r[3]=c->r[31]+0x000005DCu; // 800D4550
  c->r[4]=c->r[4]+0x000079A8u; // 800D4554
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800D4558
  c->r[0]=c->r[4]+0x00000044u; // 800D455C
  W32(c->r[31]+0x00000400u,c->r[0]); // 800D4560
  c->lr=0x800D4568u; f_800D45EC(c); // 800D4564
  c->r[3]=c->r[31]+0x00000604u; // 800D4568
  c->lr=0x800D4570u; f_800864D0(c); // 800D456C
  c->r[3]=c->r[31]+0x00000614u; // 800D4570
  c->lr=0x800D4578u; f_800864D0(c); // 800D4574
  c->lr=0x800D457Cu; f_800D5220(c); // 800D4578
  c->lr=0x800D4580u; f_800D5188(c); // 800D457C
  c->lr=0x800D4584u; f_800D5114(c); // 800D4580
  c->lr=0x800D4588u; f_800D50A0(c); // 800D4584
  c->lr=0x800D458Cu; f_800D502C(c); // 800D4588
  c->lr=0x800D4590u; f_800D4FB8(c); // 800D458C
  c->lr=0x800D4594u; f_800D4F44(c); // 800D4590
  c->lr=0x800D4598u; f_800D4ED0(c); // 800D4594
  c->lr=0x800D459Cu; f_800D4E2C(c); // 800D4598
  c->lr=0x800D45A0u; f_800D4D88(c); // 800D459C
  c->lr=0x800D45A4u; f_800D4D14(c); // 800D45A0
  c->lr=0x800D45A8u; f_800D4C70(c); // 800D45A4
  c->lr=0x800D45ACu; f_800D4BCC(c); // 800D45A8
  c->lr=0x800D45B0u; f_800D4B58(c); // 800D45AC
  c->lr=0x800D45B4u; f_800D4AB4(c); // 800D45B0
  c->lr=0x800D45B8u; f_800D4A10(c); // 800D45B4
  c->lr=0x800D45BCu; f_800D496C(c); // 800D45B8
  c->lr=0x800D45C0u; f_800D48F8(c); // 800D45BC
  c->lr=0x800D45C4u; f_800D4884(c); // 800D45C0
  c->lr=0x800D45C8u; f_800D47E0(c); // 800D45C4
  c->lr=0x800D45CCu; f_800D473C(c); // 800D45C8
  c->lr=0x800D45D0u; f_800D46C8(c); // 800D45CC
  c->lr=0x800D45D4u; f_800D4624(c); // 800D45D0
  c->r[3]=c->r[31]|c->r[31]; // 800D45D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D45D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D45DC
  c->lr=c->r[0]; // 800D45E0
  c->r[1]=c->r[1]+0x00000020u; // 800D45E4
  return; // 800D45E8
}

// fn_800D45EC
void f_800D45EC(Ctx* __restrict c) {
  trace_call(0x800D45ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D45EC
  c->r[0]=c->lr; // 800D45F0
  c->r[4]=0u+0x00000000u; // 800D45F4
  c->r[5]=0u+0x00000024u; // 800D45F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D45FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4600
  c->r[31]=c->r[3]|c->r[3]; // 800D4604
  c->lr=0x800D460Cu; f_800043EC(c); // 800D4608
  c->r[3]=c->r[31]|c->r[31]; // 800D460C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4610
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4614
  c->lr=c->r[0]; // 800D4618
  c->r[1]=c->r[1]+0x00000010u; // 800D461C
  return; // 800D4620
}

// fn_800D4624
void f_800D4624(Ctx* __restrict c) {
  trace_call(0x800D4624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4624
  c->r[0]=c->lr; // 800D4628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D462C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4630
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4634
  cmps(c,0,(int32_t)c->r[30],0); // 800D4638
  if (crb(c,2)) { goto L_800D4680; } // 800D463C
  c->lr=0x800D4644u; f_800D4698(c); // 800D4640
  c->r[31]=c->r[3]|c->r[3]; // 800D4644
  c->lr=0x800D464Cu; f_80062D0C(c); // 800D4648
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D464C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4650
  c->r[5]=0u+0x800D0000u; // 800D4654
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4658
  c->r[4]=c->r[30]+c->r[4]; // 800D465C
  c->r[5]=c->r[5]+0x00004694u; // 800D4660
  c->r[4]=c->r[4]+c->r[0]; // 800D4664
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4668
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D466C
  cmpu(c,0,c->r[0],0x00000014u); // 800D4670
  if (!crb(c,0)) { goto L_800D4680; } // 800D4674
  c->r[0]=0u+0x00000014u; // 800D4678
  W32(c->r[30]+c->r[3],c->r[0]); // 800D467C
L_800D4680:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4680
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4684
  c->lr=c->r[0]; // 800D4688
  c->r[1]=c->r[1]+0x00000010u; // 800D468C
  return; // 800D4690
}

// fn_800D4694
void f_800D4694(Ctx* __restrict c) {
  trace_call(0x800D4694u);
  f_800D9A34(c); return; // 800D4694
}

// fn_800D4698
void f_800D4698(Ctx* __restrict c) {
  trace_call(0x800D4698u);
  c->r[0]=R8(c->r[13]+0xFFFFC304u); // 800D4698
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D469C
  if (!crb(c,2)) { goto L_800D46C0; } // 800D46A0
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800D46A4
  c->r[0]=0u+0x00000001u; // 800D46A8
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800D46AC
  c->r[3]=c->r[4]+0x00000001u; // 800D46B0
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800D46B4
  W32(c->r[13]+0xFFFFC300u,c->r[4]); // 800D46B8
  W8(c->r[13]+0xFFFFC304u,c->r[0]); // 800D46BC
L_800D46C0:;
  c->r[3]=R32(c->r[13]+0xFFFFC300u); // 800D46C0
  return; // 800D46C4
}

// fn_800D46C8
void f_800D46C8(Ctx* __restrict c) {
  trace_call(0x800D46C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D46C8
  c->r[0]=c->lr; // 800D46CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D46D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D46D4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D46D8
  cmps(c,0,(int32_t)c->r[30],0); // 800D46DC
  if (crb(c,2)) { goto L_800D4724; } // 800D46E0
  c->lr=0x800D46E8u; f_800D4698(c); // 800D46E4
  c->r[31]=c->r[3]|c->r[3]; // 800D46E8
  c->lr=0x800D46F0u; f_80062DCC(c); // 800D46EC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D46F0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D46F4
  c->r[5]=0u+0x800D0000u; // 800D46F8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D46FC
  c->r[4]=c->r[30]+c->r[4]; // 800D4700
  c->r[5]=c->r[5]+0x00004738u; // 800D4704
  c->r[4]=c->r[4]+c->r[0]; // 800D4708
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D470C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4710
  cmpu(c,0,c->r[0],0x00000010u); // 800D4714
  if (!crb(c,0)) { goto L_800D4724; } // 800D4718
  c->r[0]=0u+0x00000010u; // 800D471C
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4720
L_800D4724:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4724
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4728
  c->lr=c->r[0]; // 800D472C
  c->r[1]=c->r[1]+0x00000010u; // 800D4730
  return; // 800D4734
}

// fn_800D4738
void f_800D4738(Ctx* __restrict c) {
  trace_call(0x800D4738u);
  f_800D9978(c); return; // 800D4738
}

// fn_800D473C
void f_800D473C(Ctx* __restrict c) {
  trace_call(0x800D473Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D473C
  c->r[0]=c->lr; // 800D4740
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4744
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4748
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D474C
  cmps(c,0,(int32_t)c->r[30],0); // 800D4750
  if (crb(c,2)) { goto L_800D4798; } // 800D4754
  c->lr=0x800D475Cu; f_800D4698(c); // 800D4758
  c->r[31]=c->r[3]|c->r[3]; // 800D475C
  c->lr=0x800D4764u; f_800D47B0(c); // 800D4760
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4764
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4768
  c->r[5]=0u+0x800D0000u; // 800D476C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4770
  c->r[4]=c->r[30]+c->r[4]; // 800D4774
  c->r[5]=c->r[5]+0x000047ACu; // 800D4778
  c->r[4]=c->r[4]+c->r[0]; // 800D477C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4780
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4784
  cmpu(c,0,c->r[0],0x00000010u); // 800D4788
  if (!crb(c,0)) { goto L_800D4798; } // 800D478C
  c->r[0]=0u+0x00000010u; // 800D4790
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4794
L_800D4798:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D479C
  c->lr=c->r[0]; // 800D47A0
  c->r[1]=c->r[1]+0x00000010u; // 800D47A4
  return; // 800D47A8
}

// fn_800D47AC
void f_800D47AC(Ctx* __restrict c) {
  trace_call(0x800D47ACu);
  f_800D9234(c); return; // 800D47AC
}

// fn_800D47B0
void f_800D47B0(Ctx* __restrict c) {
  trace_call(0x800D47B0u);
  c->r[0]=R8(c->r[13]+0xFFFFC2FCu); // 800D47B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D47B4
  if (!crb(c,2)) { goto L_800D47D8; } // 800D47B8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D47BC
  c->r[0]=0u+0x00000001u; // 800D47C0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D47C4
  c->r[3]=c->r[4]+0x00000001u; // 800D47C8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D47CC
  W32(c->r[13]+0xFFFFC2F8u,c->r[4]); // 800D47D0
  W8(c->r[13]+0xFFFFC2FCu,c->r[0]); // 800D47D4
L_800D47D8:;
  c->r[3]=R32(c->r[13]+0xFFFFC2F8u); // 800D47D8
  return; // 800D47DC
}

// fn_800D47E0
void f_800D47E0(Ctx* __restrict c) {
  trace_call(0x800D47E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D47E0
  c->r[0]=c->lr; // 800D47E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D47E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D47EC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D47F0
  cmps(c,0,(int32_t)c->r[30],0); // 800D47F4
  if (crb(c,2)) { goto L_800D483C; } // 800D47F8
  c->lr=0x800D4800u; f_800D4698(c); // 800D47FC
  c->r[31]=c->r[3]|c->r[3]; // 800D4800
  c->lr=0x800D4808u; f_800D4854(c); // 800D4804
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4808
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D480C
  c->r[5]=0u+0x800D0000u; // 800D4810
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4814
  c->r[4]=c->r[30]+c->r[4]; // 800D4818
  c->r[5]=c->r[5]+0x00004850u; // 800D481C
  c->r[4]=c->r[4]+c->r[0]; // 800D4820
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4824
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4828
  cmpu(c,0,c->r[0],0x00000010u); // 800D482C
  if (!crb(c,0)) { goto L_800D483C; } // 800D4830
  c->r[0]=0u+0x00000010u; // 800D4834
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4838
L_800D483C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D483C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4840
  c->lr=c->r[0]; // 800D4844
  c->r[1]=c->r[1]+0x00000010u; // 800D4848
  return; // 800D484C
}

// fn_800D4850
void f_800D4850(Ctx* __restrict c) {
  trace_call(0x800D4850u);
  f_800D8E2C(c); return; // 800D4850
}

// fn_800D4854
void f_800D4854(Ctx* __restrict c) {
  trace_call(0x800D4854u);
  c->r[0]=R8(c->r[13]+0xFFFFC2F4u); // 800D4854
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4858
  if (!crb(c,2)) { goto L_800D487C; } // 800D485C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4860
  c->r[0]=0u+0x00000001u; // 800D4864
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4868
  c->r[3]=c->r[4]+0x00000001u; // 800D486C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4870
  W32(c->r[13]+0xFFFFC2F0u,c->r[4]); // 800D4874
  W8(c->r[13]+0xFFFFC2F4u,c->r[0]); // 800D4878
L_800D487C:;
  c->r[3]=R32(c->r[13]+0xFFFFC2F0u); // 800D487C
  return; // 800D4880
}

// fn_800D4884
void f_800D4884(Ctx* __restrict c) {
  trace_call(0x800D4884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4884
  c->r[0]=c->lr; // 800D4888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D488C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4890
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4894
  cmps(c,0,(int32_t)c->r[30],0); // 800D4898
  if (crb(c,2)) { goto L_800D48E0; } // 800D489C
  c->lr=0x800D48A4u; f_800D4698(c); // 800D48A0
  c->r[31]=c->r[3]|c->r[3]; // 800D48A4
  c->lr=0x800D48ACu; f_80062E2C(c); // 800D48A8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D48AC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D48B0
  c->r[5]=0u+0x800D0000u; // 800D48B4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D48B8
  c->r[4]=c->r[30]+c->r[4]; // 800D48BC
  c->r[5]=c->r[5]+0x000048F4u; // 800D48C0
  c->r[4]=c->r[4]+c->r[0]; // 800D48C4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D48C8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D48CC
  cmpu(c,0,c->r[0],0x00000010u); // 800D48D0
  if (!crb(c,0)) { goto L_800D48E0; } // 800D48D4
  c->r[0]=0u+0x00000010u; // 800D48D8
  W32(c->r[30]+c->r[3],c->r[0]); // 800D48DC
L_800D48E0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D48E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D48E4
  c->lr=c->r[0]; // 800D48E8
  c->r[1]=c->r[1]+0x00000010u; // 800D48EC
  return; // 800D48F0
}

// fn_800D48F4
void f_800D48F4(Ctx* __restrict c) {
  trace_call(0x800D48F4u);
  f_800D8C38(c); return; // 800D48F4
}

// fn_800D48F8
void f_800D48F8(Ctx* __restrict c) {
  trace_call(0x800D48F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48F8
  c->r[0]=c->lr; // 800D48FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4900
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4904
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4908
  cmps(c,0,(int32_t)c->r[30],0); // 800D490C
  if (crb(c,2)) { goto L_800D4954; } // 800D4910
  c->lr=0x800D4918u; f_800D4698(c); // 800D4914
  c->r[31]=c->r[3]|c->r[3]; // 800D4918
  c->lr=0x800D4920u; f_80062E5C(c); // 800D491C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4920
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4924
  c->r[5]=0u+0x800D0000u; // 800D4928
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D492C
  c->r[4]=c->r[30]+c->r[4]; // 800D4930
  c->r[5]=c->r[5]+0x00004968u; // 800D4934
  c->r[4]=c->r[4]+c->r[0]; // 800D4938
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D493C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4940
  cmpu(c,0,c->r[0],0x00000010u); // 800D4944
  if (!crb(c,0)) { goto L_800D4954; } // 800D4948
  c->r[0]=0u+0x00000010u; // 800D494C
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4950
L_800D4954:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4958
  c->lr=c->r[0]; // 800D495C
  c->r[1]=c->r[1]+0x00000010u; // 800D4960
  return; // 800D4964
}

// fn_800D4968
void f_800D4968(Ctx* __restrict c) {
  trace_call(0x800D4968u);
  f_800D8AF8(c); return; // 800D4968
}

// fn_800D496C
void f_800D496C(Ctx* __restrict c) {
  trace_call(0x800D496Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D496C
  c->r[0]=c->lr; // 800D4970
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4974
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4978
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D497C
  cmps(c,0,(int32_t)c->r[30],0); // 800D4980
  if (crb(c,2)) { goto L_800D49C8; } // 800D4984
  c->lr=0x800D498Cu; f_800D4698(c); // 800D4988
  c->r[31]=c->r[3]|c->r[3]; // 800D498C
  c->lr=0x800D4994u; f_800D49E0(c); // 800D4990
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4994
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4998
  c->r[5]=0u+0x800D0000u; // 800D499C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D49A0
  c->r[4]=c->r[30]+c->r[4]; // 800D49A4
  c->r[5]=c->r[5]+0x000049DCu; // 800D49A8
  c->r[4]=c->r[4]+c->r[0]; // 800D49AC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D49B0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D49B4
  cmpu(c,0,c->r[0],0x00000010u); // 800D49B8
  if (!crb(c,0)) { goto L_800D49C8; } // 800D49BC
  c->r[0]=0u+0x00000010u; // 800D49C0
  W32(c->r[30]+c->r[3],c->r[0]); // 800D49C4
L_800D49C8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D49C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D49CC
  c->lr=c->r[0]; // 800D49D0
  c->r[1]=c->r[1]+0x00000010u; // 800D49D4
  return; // 800D49D8
}

// fn_800D49DC
void f_800D49DC(Ctx* __restrict c) {
  trace_call(0x800D49DCu);
  f_800D8624(c); return; // 800D49DC
}

// fn_800D49E0
void f_800D49E0(Ctx* __restrict c) {
  trace_call(0x800D49E0u);
  c->r[0]=R8(c->r[13]+0xFFFFC2ECu); // 800D49E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D49E4
  if (!crb(c,2)) { goto L_800D4A08; } // 800D49E8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D49EC
  c->r[0]=0u+0x00000001u; // 800D49F0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D49F4
  c->r[3]=c->r[4]+0x00000001u; // 800D49F8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D49FC
  W32(c->r[13]+0xFFFFC2E8u,c->r[4]); // 800D4A00
  W8(c->r[13]+0xFFFFC2ECu,c->r[0]); // 800D4A04
L_800D4A08:;
  c->r[3]=R32(c->r[13]+0xFFFFC2E8u); // 800D4A08
  return; // 800D4A0C
}

// fn_800D4A10
void f_800D4A10(Ctx* __restrict c) {
  trace_call(0x800D4A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A10
  c->r[0]=c->lr; // 800D4A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4A18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4A1C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4A20
  cmps(c,0,(int32_t)c->r[30],0); // 800D4A24
  if (crb(c,2)) { goto L_800D4A6C; } // 800D4A28
  c->lr=0x800D4A30u; f_800D4698(c); // 800D4A2C
  c->r[31]=c->r[3]|c->r[3]; // 800D4A30
  c->lr=0x800D4A38u; f_800D4A84(c); // 800D4A34
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4A38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4A3C
  c->r[5]=0u+0x800D0000u; // 800D4A40
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4A44
  c->r[4]=c->r[30]+c->r[4]; // 800D4A48
  c->r[5]=c->r[5]+0x00004A80u; // 800D4A4C
  c->r[4]=c->r[4]+c->r[0]; // 800D4A50
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4A54
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4A58
  cmpu(c,0,c->r[0],0x00000010u); // 800D4A5C
  if (!crb(c,0)) { goto L_800D4A6C; } // 800D4A60
  c->r[0]=0u+0x00000010u; // 800D4A64
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4A68
L_800D4A6C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4A6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A70
  c->lr=c->r[0]; // 800D4A74
  c->r[1]=c->r[1]+0x00000010u; // 800D4A78
  return; // 800D4A7C
}

// fn_800D4A80
void f_800D4A80(Ctx* __restrict c) {
  trace_call(0x800D4A80u);
  f_800D8380(c); return; // 800D4A80
}

// fn_800D4A84
void f_800D4A84(Ctx* __restrict c) {
  trace_call(0x800D4A84u);
  c->r[0]=R8(c->r[13]+0xFFFFC2E4u); // 800D4A84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4A88
  if (!crb(c,2)) { goto L_800D4AAC; } // 800D4A8C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4A90
  c->r[0]=0u+0x00000001u; // 800D4A94
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4A98
  c->r[3]=c->r[4]+0x00000001u; // 800D4A9C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4AA0
  W32(c->r[13]+0xFFFFC2E0u,c->r[4]); // 800D4AA4
  W8(c->r[13]+0xFFFFC2E4u,c->r[0]); // 800D4AA8
L_800D4AAC:;
  c->r[3]=R32(c->r[13]+0xFFFFC2E0u); // 800D4AAC
  return; // 800D4AB0
}

// fn_800D4AB4
void f_800D4AB4(Ctx* __restrict c) {
  trace_call(0x800D4AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4AB4
  c->r[0]=c->lr; // 800D4AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4ABC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4AC0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4AC4
  cmps(c,0,(int32_t)c->r[30],0); // 800D4AC8
  if (crb(c,2)) { goto L_800D4B10; } // 800D4ACC
  c->lr=0x800D4AD4u; f_800D4698(c); // 800D4AD0
  c->r[31]=c->r[3]|c->r[3]; // 800D4AD4
  c->lr=0x800D4ADCu; f_800D4B28(c); // 800D4AD8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4ADC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4AE0
  c->r[5]=0u+0x800D0000u; // 800D4AE4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4AE8
  c->r[4]=c->r[30]+c->r[4]; // 800D4AEC
  c->r[5]=c->r[5]+0x00004B24u; // 800D4AF0
  c->r[4]=c->r[4]+c->r[0]; // 800D4AF4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4AF8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4AFC
  cmpu(c,0,c->r[0],0x00000010u); // 800D4B00
  if (!crb(c,0)) { goto L_800D4B10; } // 800D4B04
  c->r[0]=0u+0x00000010u; // 800D4B08
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4B0C
L_800D4B10:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4B14
  c->lr=c->r[0]; // 800D4B18
  c->r[1]=c->r[1]+0x00000010u; // 800D4B1C
  return; // 800D4B20
}

// fn_800D4B24
void f_800D4B24(Ctx* __restrict c) {
  trace_call(0x800D4B24u);
  f_800D81A4(c); return; // 800D4B24
}

// fn_800D4B28
void f_800D4B28(Ctx* __restrict c) {
  trace_call(0x800D4B28u);
  c->r[0]=R8(c->r[13]+0xFFFFC2DCu); // 800D4B28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4B2C
  if (!crb(c,2)) { goto L_800D4B50; } // 800D4B30
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4B34
  c->r[0]=0u+0x00000001u; // 800D4B38
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4B3C
  c->r[3]=c->r[4]+0x00000001u; // 800D4B40
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4B44
  W32(c->r[13]+0xFFFFC2D8u,c->r[4]); // 800D4B48
  W8(c->r[13]+0xFFFFC2DCu,c->r[0]); // 800D4B4C
L_800D4B50:;
  c->r[3]=R32(c->r[13]+0xFFFFC2D8u); // 800D4B50
  return; // 800D4B54
}

// fn_800D4B58
void f_800D4B58(Ctx* __restrict c) {
  trace_call(0x800D4B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B58
  c->r[0]=c->lr; // 800D4B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4B60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4B64
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4B68
  cmps(c,0,(int32_t)c->r[30],0); // 800D4B6C
  if (crb(c,2)) { goto L_800D4BB4; } // 800D4B70
  c->lr=0x800D4B78u; f_800D4698(c); // 800D4B74
  c->r[31]=c->r[3]|c->r[3]; // 800D4B78
  c->lr=0x800D4B80u; f_80061044(c); // 800D4B7C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4B80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4B84
  c->r[5]=0u+0x800D0000u; // 800D4B88
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4B8C
  c->r[4]=c->r[30]+c->r[4]; // 800D4B90
  c->r[5]=c->r[5]+0x00004BC8u; // 800D4B94
  c->r[4]=c->r[4]+c->r[0]; // 800D4B98
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4B9C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4BA0
  cmpu(c,0,c->r[0],0x00000020u); // 800D4BA4
  if (!crb(c,0)) { goto L_800D4BB4; } // 800D4BA8
  c->r[0]=0u+0x00000020u; // 800D4BAC
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4BB0
L_800D4BB4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4BB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4BB8
  c->lr=c->r[0]; // 800D4BBC
  c->r[1]=c->r[1]+0x00000010u; // 800D4BC0
  return; // 800D4BC4
}

// fn_800D4BC8
void f_800D4BC8(Ctx* __restrict c) {
  trace_call(0x800D4BC8u);
  f_800D7E18(c); return; // 800D4BC8
}

// fn_800D4BCC
void f_800D4BCC(Ctx* __restrict c) {
  trace_call(0x800D4BCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4BCC
  c->r[0]=c->lr; // 800D4BD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4BD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4BD8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4BDC
  cmps(c,0,(int32_t)c->r[30],0); // 800D4BE0
  if (crb(c,2)) { goto L_800D4C28; } // 800D4BE4
  c->lr=0x800D4BECu; f_800D4698(c); // 800D4BE8
  c->r[31]=c->r[3]|c->r[3]; // 800D4BEC
  c->lr=0x800D4BF4u; f_800D4C40(c); // 800D4BF0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4BF4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4BF8
  c->r[5]=0u+0x800D0000u; // 800D4BFC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4C00
  c->r[4]=c->r[30]+c->r[4]; // 800D4C04
  c->r[5]=c->r[5]+0x00004C3Cu; // 800D4C08
  c->r[4]=c->r[4]+c->r[0]; // 800D4C0C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4C10
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4C14
  cmpu(c,0,c->r[0],0x00000010u); // 800D4C18
  if (!crb(c,0)) { goto L_800D4C28; } // 800D4C1C
  c->r[0]=0u+0x00000010u; // 800D4C20
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4C24
L_800D4C28:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4C28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4C2C
  c->lr=c->r[0]; // 800D4C30
  c->r[1]=c->r[1]+0x00000010u; // 800D4C34
  return; // 800D4C38
}

// fn_800D4C3C
void f_800D4C3C(Ctx* __restrict c) {
  trace_call(0x800D4C3Cu);
  f_800D7A4C(c); return; // 800D4C3C
}

// fn_800D4C40
void f_800D4C40(Ctx* __restrict c) {
  trace_call(0x800D4C40u);
  c->r[0]=R8(c->r[13]+0xFFFFC2D4u); // 800D4C40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4C44
  if (!crb(c,2)) { goto L_800D4C68; } // 800D4C48
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4C4C
  c->r[0]=0u+0x00000001u; // 800D4C50
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4C54
  c->r[3]=c->r[4]+0x00000001u; // 800D4C58
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4C5C
  W32(c->r[13]+0xFFFFC2D0u,c->r[4]); // 800D4C60
  W8(c->r[13]+0xFFFFC2D4u,c->r[0]); // 800D4C64
L_800D4C68:;
  c->r[3]=R32(c->r[13]+0xFFFFC2D0u); // 800D4C68
  return; // 800D4C6C
}

// fn_800D4C70
void f_800D4C70(Ctx* __restrict c) {
  trace_call(0x800D4C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C70
  c->r[0]=c->lr; // 800D4C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4C78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4C7C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4C80
  cmps(c,0,(int32_t)c->r[30],0); // 800D4C84
  if (crb(c,2)) { goto L_800D4CCC; } // 800D4C88
  c->lr=0x800D4C90u; f_800D4698(c); // 800D4C8C
  c->r[31]=c->r[3]|c->r[3]; // 800D4C90
  c->lr=0x800D4C98u; f_800D4CE4(c); // 800D4C94
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4C98
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4C9C
  c->r[5]=0u+0x800D0000u; // 800D4CA0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4CA4
  c->r[4]=c->r[30]+c->r[4]; // 800D4CA8
  c->r[5]=c->r[5]+0x00004CE0u; // 800D4CAC
  c->r[4]=c->r[4]+c->r[0]; // 800D4CB0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4CB4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4CB8
  cmpu(c,0,c->r[0],0x00000010u); // 800D4CBC
  if (!crb(c,0)) { goto L_800D4CCC; } // 800D4CC0
  c->r[0]=0u+0x00000010u; // 800D4CC4
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4CC8
L_800D4CCC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4CCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4CD0
  c->lr=c->r[0]; // 800D4CD4
  c->r[1]=c->r[1]+0x00000010u; // 800D4CD8
  return; // 800D4CDC
}

// fn_800D4CE0
void f_800D4CE0(Ctx* __restrict c) {
  trace_call(0x800D4CE0u);
  f_800D6F70(c); return; // 800D4CE0
}

// fn_800D4CE4
void f_800D4CE4(Ctx* __restrict c) {
  trace_call(0x800D4CE4u);
  c->r[0]=R8(c->r[13]+0xFFFFC2B4u); // 800D4CE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4CE8
  if (!crb(c,2)) { goto L_800D4D0C; } // 800D4CEC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4CF0
  c->r[0]=0u+0x00000001u; // 800D4CF4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4CF8
  c->r[3]=c->r[4]+0x00000001u; // 800D4CFC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4D00
  W32(c->r[13]+0xFFFFC2B0u,c->r[4]); // 800D4D04
  W8(c->r[13]+0xFFFFC2B4u,c->r[0]); // 800D4D08
L_800D4D0C:;
  c->r[3]=R32(c->r[13]+0xFFFFC2B0u); // 800D4D0C
  return; // 800D4D10
}

// fn_800D4D14
void f_800D4D14(Ctx* __restrict c) {
  trace_call(0x800D4D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D14
  c->r[0]=c->lr; // 800D4D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4D1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4D20
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4D24
  cmps(c,0,(int32_t)c->r[30],0); // 800D4D28
  if (crb(c,2)) { goto L_800D4D70; } // 800D4D2C
  c->lr=0x800D4D34u; f_800D4698(c); // 800D4D30
  c->r[31]=c->r[3]|c->r[3]; // 800D4D34
  c->lr=0x800D4D3Cu; f_8007AE58(c); // 800D4D38
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4D3C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4D40
  c->r[5]=0u+0x800D0000u; // 800D4D44
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4D48
  c->r[4]=c->r[30]+c->r[4]; // 800D4D4C
  c->r[5]=c->r[5]+0x00004D84u; // 800D4D50
  c->r[4]=c->r[4]+c->r[0]; // 800D4D54
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4D58
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4D5C
  cmpu(c,0,c->r[0],0x00000010u); // 800D4D60
  if (!crb(c,0)) { goto L_800D4D70; } // 800D4D64
  c->r[0]=0u+0x00000010u; // 800D4D68
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4D6C
L_800D4D70:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4D74
  c->lr=c->r[0]; // 800D4D78
  c->r[1]=c->r[1]+0x00000010u; // 800D4D7C
  return; // 800D4D80
}

// fn_800D4D84
void f_800D4D84(Ctx* __restrict c) {
  trace_call(0x800D4D84u);
  f_800D6EC4(c); return; // 800D4D84
}

// fn_800D4D88
void f_800D4D88(Ctx* __restrict c) {
  trace_call(0x800D4D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D88
  c->r[0]=c->lr; // 800D4D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4D90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4D94
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4D98
  cmps(c,0,(int32_t)c->r[30],0); // 800D4D9C
  if (crb(c,2)) { goto L_800D4DE4; } // 800D4DA0
  c->lr=0x800D4DA8u; f_800D4698(c); // 800D4DA4
  c->r[31]=c->r[3]|c->r[3]; // 800D4DA8
  c->lr=0x800D4DB0u; f_800D4DFC(c); // 800D4DAC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4DB0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4DB4
  c->r[5]=0u+0x800D0000u; // 800D4DB8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4DBC
  c->r[4]=c->r[30]+c->r[4]; // 800D4DC0
  c->r[5]=c->r[5]+0x00004DF8u; // 800D4DC4
  c->r[4]=c->r[4]+c->r[0]; // 800D4DC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4DCC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4DD0
  cmpu(c,0,c->r[0],0x00000010u); // 800D4DD4
  if (!crb(c,0)) { goto L_800D4DE4; } // 800D4DD8
  c->r[0]=0u+0x00000010u; // 800D4DDC
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4DE0
L_800D4DE4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4DE8
  c->lr=c->r[0]; // 800D4DEC
  c->r[1]=c->r[1]+0x00000010u; // 800D4DF0
  return; // 800D4DF4
}

// fn_800D4DF8
void f_800D4DF8(Ctx* __restrict c) {
  trace_call(0x800D4DF8u);
  f_800D68F0(c); return; // 800D4DF8
}

// fn_800D4DFC
void f_800D4DFC(Ctx* __restrict c) {
  trace_call(0x800D4DFCu);
  c->r[0]=R8(c->r[13]+0xFFFFC2CCu); // 800D4DFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4E00
  if (!crb(c,2)) { goto L_800D4E24; } // 800D4E04
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4E08
  c->r[0]=0u+0x00000001u; // 800D4E0C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4E10
  c->r[3]=c->r[4]+0x00000001u; // 800D4E14
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4E18
  W32(c->r[13]+0xFFFFC2C8u,c->r[4]); // 800D4E1C
  W8(c->r[13]+0xFFFFC2CCu,c->r[0]); // 800D4E20
L_800D4E24:;
  c->r[3]=R32(c->r[13]+0xFFFFC2C8u); // 800D4E24
  return; // 800D4E28
}

// fn_800D4E2C
void f_800D4E2C(Ctx* __restrict c) {
  trace_call(0x800D4E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E2C
  c->r[0]=c->lr; // 800D4E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4E34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4E38
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4E3C
  cmps(c,0,(int32_t)c->r[30],0); // 800D4E40
  if (crb(c,2)) { goto L_800D4E88; } // 800D4E44
  c->lr=0x800D4E4Cu; f_800D4698(c); // 800D4E48
  c->r[31]=c->r[3]|c->r[3]; // 800D4E4C
  c->lr=0x800D4E54u; f_800D4EA0(c); // 800D4E50
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4E54
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4E58
  c->r[5]=0u+0x800D0000u; // 800D4E5C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4E60
  c->r[4]=c->r[30]+c->r[4]; // 800D4E64
  c->r[5]=c->r[5]+0x00004E9Cu; // 800D4E68
  c->r[4]=c->r[4]+c->r[0]; // 800D4E6C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4E70
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4E74
  cmpu(c,0,c->r[0],0x00000010u); // 800D4E78
  if (!crb(c,0)) { goto L_800D4E88; } // 800D4E7C
  c->r[0]=0u+0x00000010u; // 800D4E80
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4E84
L_800D4E88:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4E88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4E8C
  c->lr=c->r[0]; // 800D4E90
  c->r[1]=c->r[1]+0x00000010u; // 800D4E94
  return; // 800D4E98
}

// fn_800D4E9C
void f_800D4E9C(Ctx* __restrict c) {
  trace_call(0x800D4E9Cu);
  f_800D6874(c); return; // 800D4E9C
}

// fn_800D4EA0
void f_800D4EA0(Ctx* __restrict c) {
  trace_call(0x800D4EA0u);
  c->r[0]=R8(c->r[13]+0xFFFFC2C4u); // 800D4EA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D4EA4
  if (!crb(c,2)) { goto L_800D4EC8; } // 800D4EA8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D4EAC
  c->r[0]=0u+0x00000001u; // 800D4EB0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D4EB4
  c->r[3]=c->r[4]+0x00000001u; // 800D4EB8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D4EBC
  W32(c->r[13]+0xFFFFC2C0u,c->r[4]); // 800D4EC0
  W8(c->r[13]+0xFFFFC2C4u,c->r[0]); // 800D4EC4
L_800D4EC8:;
  c->r[3]=R32(c->r[13]+0xFFFFC2C0u); // 800D4EC8
  return; // 800D4ECC
}

// fn_800D4ED0
void f_800D4ED0(Ctx* __restrict c) {
  trace_call(0x800D4ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4ED0
  c->r[0]=c->lr; // 800D4ED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4ED8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4EDC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4EE0
  cmps(c,0,(int32_t)c->r[30],0); // 800D4EE4
  if (crb(c,2)) { goto L_800D4F2C; } // 800D4EE8
  c->lr=0x800D4EF0u; f_800D4698(c); // 800D4EEC
  c->r[31]=c->r[3]|c->r[3]; // 800D4EF0
  c->lr=0x800D4EF8u; f_80062D3C(c); // 800D4EF4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4EF8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4EFC
  c->r[5]=0u+0x800D0000u; // 800D4F00
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4F04
  c->r[4]=c->r[30]+c->r[4]; // 800D4F08
  c->r[5]=c->r[5]+0x00004F40u; // 800D4F0C
  c->r[4]=c->r[4]+c->r[0]; // 800D4F10
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4F14
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4F18
  cmpu(c,0,c->r[0],0x00000010u); // 800D4F1C
  if (!crb(c,0)) { goto L_800D4F2C; } // 800D4F20
  c->r[0]=0u+0x00000010u; // 800D4F24
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4F28
L_800D4F2C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4F2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4F30
  c->lr=c->r[0]; // 800D4F34
  c->r[1]=c->r[1]+0x00000010u; // 800D4F38
  return; // 800D4F3C
}

// fn_800D4F40
void f_800D4F40(Ctx* __restrict c) {
  trace_call(0x800D4F40u);
  f_800D67F8(c); return; // 800D4F40
}

// fn_800D4F44
void f_800D4F44(Ctx* __restrict c) {
  trace_call(0x800D4F44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F44
  c->r[0]=c->lr; // 800D4F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4F4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4F50
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4F54
  cmps(c,0,(int32_t)c->r[30],0); // 800D4F58
  if (crb(c,2)) { goto L_800D4FA0; } // 800D4F5C
  c->lr=0x800D4F64u; f_800D4698(c); // 800D4F60
  c->r[31]=c->r[3]|c->r[3]; // 800D4F64
  c->lr=0x800D4F6Cu; f_80062D6C(c); // 800D4F68
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4F6C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4F70
  c->r[5]=0u+0x800D0000u; // 800D4F74
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4F78
  c->r[4]=c->r[30]+c->r[4]; // 800D4F7C
  c->r[5]=c->r[5]+0x00004FB4u; // 800D4F80
  c->r[4]=c->r[4]+c->r[0]; // 800D4F84
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4F88
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D4F8C
  cmpu(c,0,c->r[0],0x00000010u); // 800D4F90
  if (!crb(c,0)) { goto L_800D4FA0; } // 800D4F94
  c->r[0]=0u+0x00000010u; // 800D4F98
  W32(c->r[30]+c->r[3],c->r[0]); // 800D4F9C
L_800D4FA0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4FA4
  c->lr=c->r[0]; // 800D4FA8
  c->r[1]=c->r[1]+0x00000010u; // 800D4FAC
  return; // 800D4FB0
}

// fn_800D4FB4
void f_800D4FB4(Ctx* __restrict c) {
  trace_call(0x800D4FB4u);
  f_800D677C(c); return; // 800D4FB4
}

// fn_800D4FB8
void f_800D4FB8(Ctx* __restrict c) {
  trace_call(0x800D4FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4FB8
  c->r[0]=c->lr; // 800D4FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4FC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4FC4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D4FC8
  cmps(c,0,(int32_t)c->r[30],0); // 800D4FCC
  if (crb(c,2)) { goto L_800D5014; } // 800D4FD0
  c->lr=0x800D4FD8u; f_800D4698(c); // 800D4FD4
  c->r[31]=c->r[3]|c->r[3]; // 800D4FD8
  c->lr=0x800D4FE0u; f_8007B170(c); // 800D4FDC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D4FE0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4FE4
  c->r[5]=0u+0x800D0000u; // 800D4FE8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4FEC
  c->r[4]=c->r[30]+c->r[4]; // 800D4FF0
  c->r[5]=c->r[5]+0x00005028u; // 800D4FF4
  c->r[4]=c->r[4]+c->r[0]; // 800D4FF8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D4FFC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D5000
  cmpu(c,0,c->r[0],0x00000010u); // 800D5004
  if (!crb(c,0)) { goto L_800D5014; } // 800D5008
  c->r[0]=0u+0x00000010u; // 800D500C
  W32(c->r[30]+c->r[3],c->r[0]); // 800D5010
L_800D5014:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5014
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5018
  c->lr=c->r[0]; // 800D501C
  c->r[1]=c->r[1]+0x00000010u; // 800D5020
  return; // 800D5024
}

// fn_800D5028
void f_800D5028(Ctx* __restrict c) {
  trace_call(0x800D5028u);
  f_800D661C(c); return; // 800D5028
}

// fn_800D502C
void f_800D502C(Ctx* __restrict c) {
  trace_call(0x800D502Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D502C
  c->r[0]=c->lr; // 800D5030
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5034
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5038
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D503C
  cmps(c,0,(int32_t)c->r[30],0); // 800D5040
  if (crb(c,2)) { goto L_800D5088; } // 800D5044
  c->lr=0x800D504Cu; f_800D4698(c); // 800D5048
  c->r[31]=c->r[3]|c->r[3]; // 800D504C
  c->lr=0x800D5054u; f_80062EBC(c); // 800D5050
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D5054
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5058
  c->r[5]=0u+0x800D0000u; // 800D505C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D5060
  c->r[4]=c->r[30]+c->r[4]; // 800D5064
  c->r[5]=c->r[5]+0x0000509Cu; // 800D5068
  c->r[4]=c->r[4]+c->r[0]; // 800D506C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5070
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D5074
  cmpu(c,0,c->r[0],0x00000010u); // 800D5078
  if (!crb(c,0)) { goto L_800D5088; } // 800D507C
  c->r[0]=0u+0x00000010u; // 800D5080
  W32(c->r[30]+c->r[3],c->r[0]); // 800D5084
L_800D5088:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5088
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D508C
  c->lr=c->r[0]; // 800D5090
  c->r[1]=c->r[1]+0x00000010u; // 800D5094
  return; // 800D5098
}

// fn_800D509C
void f_800D509C(Ctx* __restrict c) {
  trace_call(0x800D509Cu);
  f_800D66DC(c); return; // 800D509C
}

// fn_800D50A0
void f_800D50A0(Ctx* __restrict c) {
  trace_call(0x800D50A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D50A0
  c->r[0]=c->lr; // 800D50A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D50A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D50AC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D50B0
  cmps(c,0,(int32_t)c->r[30],0); // 800D50B4
  if (crb(c,2)) { goto L_800D50FC; } // 800D50B8
  c->lr=0x800D50C0u; f_800D4698(c); // 800D50BC
  c->r[31]=c->r[3]|c->r[3]; // 800D50C0
  c->lr=0x800D50C8u; f_8005E1B0(c); // 800D50C4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D50C8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D50CC
  c->r[5]=0u+0x800D0000u; // 800D50D0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D50D4
  c->r[4]=c->r[30]+c->r[4]; // 800D50D8
  c->r[5]=c->r[5]+0x00005110u; // 800D50DC
  c->r[4]=c->r[4]+c->r[0]; // 800D50E0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D50E4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D50E8
  cmpu(c,0,c->r[0],0x00000010u); // 800D50EC
  if (!crb(c,0)) { goto L_800D50FC; } // 800D50F0
  c->r[0]=0u+0x00000010u; // 800D50F4
  W32(c->r[30]+c->r[3],c->r[0]); // 800D50F8
L_800D50FC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D50FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5100
  c->lr=c->r[0]; // 800D5104
  c->r[1]=c->r[1]+0x00000010u; // 800D5108
  return; // 800D510C
}

// fn_800D5110
void f_800D5110(Ctx* __restrict c) {
  trace_call(0x800D5110u);
  f_800D64A0(c); return; // 800D5110
}

// fn_800D5114
void f_800D5114(Ctx* __restrict c) {
  trace_call(0x800D5114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5114
  c->r[0]=c->lr; // 800D5118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D511C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5120
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D5124
  cmps(c,0,(int32_t)c->r[30],0); // 800D5128
  if (crb(c,2)) { goto L_800D5170; } // 800D512C
  c->lr=0x800D5134u; f_800D4698(c); // 800D5130
  c->r[31]=c->r[3]|c->r[3]; // 800D5134
  c->lr=0x800D513Cu; f_80062DFC(c); // 800D5138
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D513C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5140
  c->r[5]=0u+0x800D0000u; // 800D5144
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D5148
  c->r[4]=c->r[30]+c->r[4]; // 800D514C
  c->r[5]=c->r[5]+0x00005184u; // 800D5150
  c->r[4]=c->r[4]+c->r[0]; // 800D5154
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5158
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D515C
  cmpu(c,0,c->r[0],0x00000010u); // 800D5160
  if (!crb(c,0)) { goto L_800D5170; } // 800D5164
  c->r[0]=0u+0x00000010u; // 800D5168
  W32(c->r[30]+c->r[3],c->r[0]); // 800D516C
L_800D5170:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5170
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5174
  c->lr=c->r[0]; // 800D5178
  c->r[1]=c->r[1]+0x00000010u; // 800D517C
  return; // 800D5180
}

// fn_800D5184
void f_800D5184(Ctx* __restrict c) {
  trace_call(0x800D5184u);
  f_800D6340(c); return; // 800D5184
}

// fn_800D5188
void f_800D5188(Ctx* __restrict c) {
  trace_call(0x800D5188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5188
  c->r[0]=c->lr; // 800D518C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5194
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800D5198
  cmps(c,0,(int32_t)c->r[31],0); // 800D519C
  if (crb(c,2)) { goto L_800D5208; } // 800D51A0
  c->lr=0x800D51A8u; f_800D4698(c); // 800D51A4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800D51A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D51AC
  if (!crb(c,2)) { goto L_800D51D0; } // 800D51B0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800D51B4
  c->r[0]=0u+0x00000001u; // 800D51B8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800D51BC
  c->r[4]=c->r[5]+0x00000001u; // 800D51C0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800D51C4
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800D51C8
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800D51CC
L_800D51D0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800D51D0
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800D51D4
  c->r[5]=0u+0x800D0000u; // 800D51D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D51DC
  c->r[4]=c->r[31]+c->r[4]; // 800D51E0
  c->r[5]=c->r[5]+0x0000521Cu; // 800D51E4
  c->r[4]=c->r[4]+c->r[0]; // 800D51E8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D51EC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D51F0
  c->r[0]=R32(c->r[31]+c->r[3]); // 800D51F4
  cmpu(c,0,c->r[0],0x00000010u); // 800D51F8
  if (!crb(c,0)) { goto L_800D5208; } // 800D51FC
  c->r[0]=0u+0x00000010u; // 800D5200
  W32(c->r[31]+c->r[3],c->r[0]); // 800D5204
L_800D5208:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5208
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D520C
  c->lr=c->r[0]; // 800D5210
  c->r[1]=c->r[1]+0x00000010u; // 800D5214
  return; // 800D5218
}

// fn_800D521C
void f_800D521C(Ctx* __restrict c) {
  trace_call(0x800D521Cu);
  f_800D6218(c); return; // 800D521C
}

// fn_800D5220
void f_800D5220(Ctx* __restrict c) {
  trace_call(0x800D5220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5220
  c->r[0]=c->lr; // 800D5224
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5228
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D522C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800D5230
  cmps(c,0,(int32_t)c->r[30],0); // 800D5234
  if (crb(c,2)) { goto L_800D527C; } // 800D5238
  c->lr=0x800D5240u; f_800D4698(c); // 800D523C
  c->r[31]=c->r[3]|c->r[3]; // 800D5240
  c->lr=0x800D5248u; f_800D5294(c); // 800D5244
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800D5248
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D524C
  c->r[5]=0u+0x800D0000u; // 800D5250
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D5254
  c->r[4]=c->r[30]+c->r[4]; // 800D5258
  c->r[5]=c->r[5]+0x00005290u; // 800D525C
  c->r[4]=c->r[4]+c->r[0]; // 800D5260
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5264
  c->r[0]=R32(c->r[30]+c->r[3]); // 800D5268
  cmpu(c,0,c->r[0],0x00000010u); // 800D526C
  if (!crb(c,0)) { goto L_800D527C; } // 800D5270
  c->r[0]=0u+0x00000010u; // 800D5274
  W32(c->r[30]+c->r[3],c->r[0]); // 800D5278
L_800D527C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D527C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5280
  c->lr=c->r[0]; // 800D5284
  c->r[1]=c->r[1]+0x00000010u; // 800D5288
  return; // 800D528C
}

// fn_800D5290
void f_800D5290(Ctx* __restrict c) {
  trace_call(0x800D5290u);
  return; // 800D5290
}

// fn_800D5294
void f_800D5294(Ctx* __restrict c) {
  trace_call(0x800D5294u);
  c->r[0]=R8(c->r[13]+0xFFFFC2BCu); // 800D5294
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5298
  if (!crb(c,2)) { goto L_800D52BC; } // 800D529C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800D52A0
  c->r[0]=0u+0x00000001u; // 800D52A4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800D52A8
  c->r[3]=c->r[4]+0x00000001u; // 800D52AC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800D52B0
  W32(c->r[13]+0xFFFFC2B8u,c->r[4]); // 800D52B4
  W8(c->r[13]+0xFFFFC2BCu,c->r[0]); // 800D52B8
L_800D52BC:;
  c->r[3]=R32(c->r[13]+0xFFFFC2B8u); // 800D52BC
  return; // 800D52C0
}

// fn_800D52C4
void f_800D52C4(Ctx* __restrict c) {
  trace_call(0x800D52C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D52C4
  c->r[0]=c->lr; // 800D52C8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D52CC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D52D0
  c->r[27]=c->r[3]|c->r[3]; // 800D52D4
  c->r[26]=c->r[5]|c->r[5]; // 800D52D8
  c->r[31]=c->r[27]|c->r[27]; // 800D52DC
  c->r[30]=c->r[27]|c->r[27]; // 800D52E0
  c->r[28]=c->r[27]|c->r[27]; // 800D52E4
  c->lr=0x800D52ECu; f_800D4698(c); // 800D52E8
  c->r[4]=0u+0x806D0000u; // 800D52EC
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 800D52F0
  c->r[0]=0u+0x00000000u; // 800D52F4
  W32(c->r[27]+0x00000000u,c->r[3]); // 800D52F8
  c->r[4]=c->r[4]+0x000038C0u; // 800D52FC
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D5300
  W32(c->r[27]+0x00000004u,c->r[0]); // 800D5304
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D5308
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800D530C
  W8(c->r[27]+0x00000010u,c->r[0]); // 800D5310
  W32(c->r[27]+0x00000014u,c->r[0]); // 800D5314
  W32(c->r[27]+0x00000018u,c->r[0]); // 800D5318
  W32(c->r[27]+0x00000020u,c->r[0]); // 800D531C
  W32(c->r[27]+0x00000024u,c->r[0]); // 800D5320
  if (crb(c,2)) { goto L_800D532C; } // 800D5324
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 800D5328
L_800D532C:;
  c->lr=0x800D5330u; f_800797AC(c); // 800D532C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5330
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800D5334
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D5338
  if (!crb(c,2)) { goto L_800D5348; } // 800D533C
  c->r[0]=0u+0x00000001u; // 800D5340
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D5344
L_800D5348:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D5348
  c->r[5]=0u+0x0000012Cu; // 800D534C
  c->r[4]=c->r[6]+0x00000001u; // 800D5350
  c->r[0]=divwu(c->r[4],c->r[5]); // 800D5354
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800D5358
  c->r[7]=c->r[4]-c->r[0]; // 800D535C
  goto L_800D53AC; // 800D5360
L_800D5364:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5364
  c->r[4]=c->r[3]+c->r[0]; // 800D5368
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D536C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5370
  if (!crb(c,2)) { goto L_800D539C; } // 800D5374
  W32(c->r[3]+0x00000004u,c->r[7]); // 800D5378
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D537C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D5380
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800D5384
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D5388
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D538C
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D5390
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5394
  goto L_800D53C8; // 800D5398
L_800D539C:;
  c->r[4]=c->r[7]+0x00000001u; // 800D539C
  c->r[0]=divwu(c->r[4],c->r[5]); // 800D53A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800D53A4
  c->r[7]=c->r[4]-c->r[0]; // 800D53A8
L_800D53AC:;
  cmpu(c,0,c->r[7],c->r[6]); // 800D53AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5364; } // 800D53B0
  c->r[0]=0u+0x00000000u; // 800D53B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D53B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D53BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D53C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D53C4
L_800D53C8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D53C8
  c->r[24]=c->r[27]+0x00000028u; // 800D53CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D53D0
  c->r[3]=c->r[24]|c->r[24]; // 800D53D4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D53D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D53DC
  W32(c->r[27]+0x00000020u,c->r[4]); // 800D53E0
  W32(c->r[27]+0x00000024u,c->r[0]); // 800D53E4
  c->lr=0x800D53ECu; f_800506C0(c); // 800D53E8
  cmps(c,0,(int32_t)c->r[24],0); // 800D53EC
  c->r[3]=c->r[24]|c->r[24]; // 800D53F0
  if (crb(c,2)) { goto L_800D53FC; } // 800D53F4
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800D53F8
L_800D53FC:;
  c->r[29]=0u+0x00000001u; // 800D53FC
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D5400
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800D5404
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800D5408
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D540C
  if (!crb(c,2)) { goto L_800D5450; } // 800D5410
  c->r[25]=0u+0x80740000u; // 800D5414
  c->r[3]=c->r[25]+0x000074BCu; // 800D5418
  c->lr=0x800D5420u; f_800506C0(c); // 800D541C
  c->r[6]=0u+0x806D0000u; // 800D5420
  c->r[4]=0u+0x80060000u; // 800D5424
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800D5428
  c->r[3]=c->r[25]+0x000074BCu; // 800D542C
  c->r[0]=c->r[6]+0x00000008u; // 800D5430
  c->r[5]=0u+0x80750000u; // 800D5434
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D5438
  c->r[4]=c->r[4]+0x000057D4u; // 800D543C
  c->r[5]=c->r[5]+0x00003958u; // 800D5440
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D5444
  c->lr=0x800D544Cu; f_803A92B8(c); // 800D5448
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 800D544C
L_800D5450:;
  c->r[3]=0u+0x80740000u; // 800D5450
  c->r[5]=c->r[24]|c->r[24]; // 800D5454
  c->r[3]=c->r[3]+0x000074BCu; // 800D5458
  c->r[4]=c->r[3]|c->r[3]; // 800D545C
  c->lr=0x800D5464u; f_802DDCA8(c); // 800D5460
  c->r[24]=c->r[27]+0x00000038u; // 800D5464
  c->r[3]=c->r[24]|c->r[24]; // 800D5468
  c->lr=0x800D5470u; f_800506C0(c); // 800D546C
  cmps(c,0,(int32_t)c->r[24],0); // 800D5470
  c->r[0]=c->r[24]|c->r[24]; // 800D5474
  if (crb(c,2)) { goto L_800D5480; } // 800D5478
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 800D547C
L_800D5480:;
  c->r[29]=c->r[27]+0x00000044u; // 800D5480
  W32(c->r[24]+0x00000008u,c->r[0]); // 800D5484
  c->r[3]=c->r[29]|c->r[29]; // 800D5488
  c->lr=0x800D5490u; f_800506C0(c); // 800D548C
  cmps(c,0,(int32_t)c->r[29],0); // 800D5490
  c->r[0]=c->r[29]|c->r[29]; // 800D5494
  if (crb(c,2)) { goto L_800D54A0; } // 800D5498
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 800D549C
L_800D54A0:;
  c->r[3]=0u+0x806F0000u; // 800D54A0
  c->r[25]=0u+0x00000000u; // 800D54A4
  c->r[3]=c->r[3]+0x00000E80u; // 800D54A8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D54AC
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 800D54B0
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D54B4
  W32(c->r[27]+0x00000058u,c->r[25]); // 800D54B8
  W32(c->r[27]+0x00000064u,c->r[25]); // 800D54BC
  c->lr=0x800D54C4u; f_8007BDCC(c); // 800D54C0
  c->r[0]=c->r[13]+0xFFFF8114u; // 800D54C4
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800D54C8
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800D54CC
  W32(c->r[27]+0x000000A4u,c->r[25]); // 800D54D0
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800D54D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D54D8
  if (!crb(c,2)) { goto L_800D54FC; } // 800D54DC
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D54E0
  c->r[0]=0u+0x00000001u; // 800D54E4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D54E8
  c->r[3]=c->r[4]+0x00000001u; // 800D54EC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D54F0
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800D54F4
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800D54F8
L_800D54FC:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800D54FC
  c->r[3]=c->r[13]+0xFFFF8110u; // 800D5500
  c->r[0]=0u+0x00000000u; // 800D5504
  W32(c->r[27]+0x000000A8u,c->r[4]); // 800D5508
  W32(c->r[27]+0x000000ACu,c->r[3]); // 800D550C
  W32(c->r[27]+0x000000B0u,c->r[0]); // 800D5510
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800D5514
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5518
  if (!crb(c,2)) { goto L_800D553C; } // 800D551C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D5520
  c->r[0]=0u+0x00000001u; // 800D5524
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D5528
  c->r[3]=c->r[4]+0x00000001u; // 800D552C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D5530
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800D5534
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800D5538
L_800D553C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800D553C
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800D5540
  c->r[0]=0u+0x00000000u; // 800D5544
  W32(c->r[27]+0x000000B4u,c->r[4]); // 800D5548
  W32(c->r[27]+0x000000B8u,c->r[3]); // 800D554C
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800D5550
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800D5554
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5558
  if (!crb(c,2)) { goto L_800D557C; } // 800D555C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D5560
  c->r[0]=0u+0x00000001u; // 800D5564
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D5568
  c->r[3]=c->r[4]+0x00000001u; // 800D556C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D5570
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800D5574
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800D5578
L_800D557C:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800D557C
  c->r[3]=c->r[13]+0xFFFF8108u; // 800D5580
  c->r[0]=0u+0x00000000u; // 800D5584
  W32(c->r[27]+0x000000C0u,c->r[4]); // 800D5588
  W32(c->r[27]+0x000000C4u,c->r[3]); // 800D558C
  W32(c->r[27]+0x000000C8u,c->r[0]); // 800D5590
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800D5594
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5598
  if (!crb(c,2)) { goto L_800D55BC; } // 800D559C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800D55A0
  c->r[0]=0u+0x00000001u; // 800D55A4
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800D55A8
  c->r[3]=c->r[4]+0x00000001u; // 800D55AC
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800D55B0
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800D55B4
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800D55B8
L_800D55BC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800D55BC
  c->r[0]=c->r[13]+0xFFFF8104u; // 800D55C0
  c->r[25]=0u+0x00000000u; // 800D55C4
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800D55C8
  c->r[3]=c->r[27]+0x000000D8u; // 800D55CC
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800D55D0
  W32(c->r[27]+0x000000D4u,c->r[25]); // 800D55D4
  c->lr=0x800D55DCu; f_800506C0(c); // 800D55D8
  c->r[4]=0u+0x806F0000u; // 800D55DC
  c->r[3]=0u+0x00000006u; // 800D55E0
  c->r[4]=c->r[4]+0x000007A0u; // 800D55E4
  c->r[29]=c->r[27]+0x000000FCu; // 800D55E8
  c->r[0]=c->r[4]+0x00000024u; // 800D55EC
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800D55F0
  c->r[3]=c->r[29]+0x0000000Cu; // 800D55F4
  W32(c->r[27]+0x000000ECu,c->r[25]); // 800D55F8
  W32(c->r[27]+0x000000F8u,c->r[25]); // 800D55FC
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800D5600
  W32(c->r[27]+0x00000100u,c->r[0]); // 800D5604
  c->lr=0x800D560Cu; f_800506C0(c); // 800D5608
  c->r[3]=c->r[29]+0x00000018u; // 800D560C
  c->lr=0x800D5614u; f_800506C0(c); // 800D5610
  W32(c->r[29]+0x00000024u,c->r[25]); // 800D5614
  c->r[3]=c->r[29]+0x000000B0u; // 800D5618
  c->lr=0x800D5620u; f_800506C0(c); // 800D561C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D5620
  c->r[3]=c->r[29]|c->r[29]; // 800D5624
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800D5628
  c->ctr=c->r[12]; // 800D562C
  if (true) { c->lr=0x800D5634u; dispatch(c,c->ctr); } // 800D5630
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800D5634
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5638
  if (!crb(c,2)) { goto L_800D5658; } // 800D563C
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800D5640
  c->r[0]=0u+0x00000001u; // 800D5644
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800D5648
  c->r[3]=c->r[3]+0x00000001u; // 800D564C
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800D5650
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800D5654
L_800D5658:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800D5658
  c->r[5]=0u+0x806F0000u; // 800D565C
  c->r[5]=c->r[5]+0x000007F8u; // 800D5660
  c->r[0]=0u+0x00000032u; // 800D5664
  c->r[4]=c->r[5]+0x00000024u; // 800D5668
  W32(c->r[29]+0x00000008u,c->r[3]); // 800D566C
  c->r[6]=0u+0x00000000u; // 800D5670
  c->r[3]=0u+0x00000000u; // 800D5674
  W32(c->r[29]+0x00000000u,c->r[5]); // 800D5678
  W32(c->r[29]+0x00000004u,c->r[4]); // 800D567C
  c->ctr=c->r[0]; // 800D5680
L_800D5684:;
  c->r[4]=c->r[29]+c->r[3]; // 800D5684
  c->r[3]=c->r[3]+0x00000004u; // 800D5688
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800D568C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5684; } // 800D5690
  c->r[3]=0u+0x806D0000u; // 800D5694
  c->r[7]=0u+0x00000000u; // 800D5698
  c->r[3]=c->r[3]+0x00003868u; // 800D569C
  c->r[0]=0u+0x0000000Au; // 800D56A0
  c->r[4]=c->r[3]+0x00000024u; // 800D56A4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D56A8
  c->r[8]=0u+0x00000000u; // 800D56AC
  c->r[3]=0u+0x00000000u; // 800D56B0
  W32(c->r[29]+0x00000004u,c->r[4]); // 800D56B4
  c->r[6]=0u+0xFFFFFFFFu; // 800D56B8
  W32(c->r[27]+0x00000314u,c->r[7]); // 800D56BC
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800D56C0
  W32(c->r[27]+0x00000054u,c->r[7]); // 800D56C4
  W32(c->r[27]+0x00000310u,c->r[27]); // 800D56C8
  c->ctr=c->r[0]; // 800D56CC
L_800D56D0:;
  c->r[5]=c->r[27]+c->r[3]; // 800D56D0
  c->r[4]=c->r[27]+c->r[8]; // 800D56D4
  W32(c->r[5]+0x00000068u,c->r[6]); // 800D56D8
  c->r[8]=c->r[8]+0x00000001u; // 800D56DC
  c->r[3]=c->r[3]+0x00000004u; // 800D56E0
  W8(c->r[4]+0x00000090u,c->r[7]); // 800D56E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D56D0; } // 800D56E8
  c->r[25]=c->r[27]+0x00000318u; // 800D56EC
  c->r[3]=c->r[25]|c->r[25]; // 800D56F0
  c->lr=0x800D56F8u; f_800506C0(c); // 800D56F4
  cmps(c,0,(int32_t)c->r[25],0); // 800D56F8
  c->r[3]=c->r[25]|c->r[25]; // 800D56FC
  if (crb(c,2)) { goto L_800D5708; } // 800D5700
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800D5704
L_800D5708:;
  c->r[29]=0u+0x00000001u; // 800D5708
  W32(c->r[25]+0x00000008u,c->r[3]); // 800D570C
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 800D5710
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800D5714
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5718
  if (!crb(c,2)) { goto L_800D575C; } // 800D571C
  c->r[28]=0u+0x80750000u; // 800D5720
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800D5724
  c->lr=0x800D572Cu; f_800506C0(c); // 800D5728
  c->r[6]=0u+0x806D0000u; // 800D572C
  c->r[4]=0u+0x80080000u; // 800D5730
  c->r[6]=c->r[6]+0x000038D8u; // 800D5734
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800D5738
  c->r[0]=c->r[6]+0x00000008u; // 800D573C
  c->r[5]=0u+0x80750000u; // 800D5740
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D5744
  c->r[4]=c->r[4]+0xFFFF9844u; // 800D5748
  c->r[5]=c->r[5]+0x0000394Cu; // 800D574C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D5750
  c->lr=0x800D5758u; f_803A92B8(c); // 800D5754
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800D5758
L_800D575C:;
  c->r[3]=0u+0x80750000u; // 800D575C
  c->r[5]=c->r[25]|c->r[25]; // 800D5760
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800D5764
  c->r[4]=c->r[3]|c->r[3]; // 800D5768
  c->lr=0x800D5770u; f_802DDCA8(c); // 800D576C
  c->r[3]=0u+0x806D0000u; // 800D5770
  c->r[0]=0u+0x00000000u; // 800D5774
  c->r[3]=c->r[3]+0xFFFFD974u; // 800D5778
  c->r[5]=0u+0xFFFFFFFFu; // 800D577C
  c->r[4]=0u+0x00000001u; // 800D5780
  c->r[24]=c->r[27]+0x0000032Cu; // 800D5784
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D5788
  c->r[3]=c->r[24]|c->r[24]; // 800D578C
  W32(c->r[27]+0x00000328u,c->r[5]); // 800D5790
  W32(c->r[27]+0x000000ECu,c->r[4]); // 800D5794
  W32(c->r[27]+0x00000054u,c->r[0]); // 800D5798
  W32(c->r[27]+0x00000314u,c->r[0]); // 800D579C
  c->lr=0x800D57A4u; f_800506C0(c); // 800D57A0
  cmps(c,0,(int32_t)c->r[24],0); // 800D57A4
  c->r[3]=c->r[24]|c->r[24]; // 800D57A8
  if (crb(c,2)) { goto L_800D57B4; } // 800D57AC
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 800D57B0
L_800D57B4:;
  c->r[0]=0u+0x00000000u; // 800D57B4
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800D57B8
  c->r[0]=0u+0x00000001u; // 800D57BC
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D57C0
  W8(c->r[24]+0x0000000Cu,c->r[0]); // 800D57C4
  c->lr=0x800D57CCu; f_8008570C(c); // 800D57C8
  c->r[4]=c->r[3]|c->r[3]; // 800D57CC
  c->r[5]=c->r[24]|c->r[24]; // 800D57D0
  c->lr=0x800D57D8u; f_802DDCA8(c); // 800D57D4
  c->r[24]=c->r[27]+0x0000033Cu; // 800D57D8
  c->r[3]=c->r[24]|c->r[24]; // 800D57DC
  c->lr=0x800D57E4u; f_800506C0(c); // 800D57E0
  cmps(c,0,(int32_t)c->r[24],0); // 800D57E4
  c->r[3]=c->r[24]|c->r[24]; // 800D57E8
  if (crb(c,2)) { goto L_800D57F4; } // 800D57EC
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 800D57F0
L_800D57F4:;
  c->r[29]=0u+0x00000001u; // 800D57F4
  W32(c->r[24]+0x00000008u,c->r[3]); // 800D57F8
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800D57FC
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800D5800
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5804
  if (!crb(c,2)) { goto L_800D5848; } // 800D5808
  c->r[28]=0u+0x80750000u; // 800D580C
  c->r[3]=c->r[28]+0xFFFF8158u; // 800D5810
  c->lr=0x800D5818u; f_800506C0(c); // 800D5814
  c->r[6]=0u+0x806D0000u; // 800D5818
  c->r[4]=0u+0x80080000u; // 800D581C
  c->r[6]=c->r[6]+0x000038F0u; // 800D5820
  c->r[3]=c->r[28]+0xFFFF8158u; // 800D5824
  c->r[0]=c->r[6]+0x00000008u; // 800D5828
  c->r[5]=0u+0x80750000u; // 800D582C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800D5830
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800D5834
  c->r[5]=c->r[5]+0x00003940u; // 800D5838
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D583C
  c->lr=0x800D5844u; f_803A92B8(c); // 800D5840
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 800D5844
L_800D5848:;
  c->r[3]=0u+0x80750000u; // 800D5848
  c->r[5]=c->r[24]|c->r[24]; // 800D584C
  c->r[3]=c->r[3]+0xFFFF8158u; // 800D5850
  c->r[4]=c->r[3]|c->r[3]; // 800D5854
  c->lr=0x800D585Cu; f_802DDCA8(c); // 800D5858
  c->r[3]=0u+0x806D0000u; // 800D585C
  W32(c->r[27]+0x00000054u,c->r[26]); // 800D5860
  c->r[3]=c->r[3]+0x00004AE8u; // 800D5864
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D5868
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800D586C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5870
  if (!crb(c,2)) { goto L_800D5890; } // 800D5874
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800D5878
  c->r[0]=0u+0x00000001u; // 800D587C
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800D5880
  c->r[3]=c->r[3]+0x00000001u; // 800D5884
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800D5888
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800D588C
L_800D5890:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800D5890
  W32(c->r[27]+0x00000328u,c->r[0]); // 800D5894
  c->lr=0x800D589Cu; f_800D5D40(c); // 800D5898
  W32(c->r[27]+0x0000034Cu,c->r[3]); // 800D589C
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 800D58A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D58A4
  if (!crb(c,2)) { goto L_800D58C4; } // 800D58A8
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800D58AC
  c->r[0]=0u+0x00000001u; // 800D58B0
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 800D58B4
  c->r[3]=c->r[3]+0x00000001u; // 800D58B8
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800D58BC
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 800D58C0
L_800D58C4:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 800D58C4
  c->r[5]=0u+0x806D0000u; // 800D58C8
  c->r[5]=c->r[5]+0xFFFFE468u; // 800D58CC
  W32(c->r[27]+0x00000350u,c->r[0]); // 800D58D0
  c->r[3]=c->r[27]+0x000003B0u; // 800D58D4
  c->r[4]=0u+0x00000000u; // 800D58D8
  W32(c->r[27]+0x00000400u,c->r[5]); // 800D58DC
  c->r[5]=0u+0x00000050u; // 800D58E0
  c->lr=0x800D58E8u; f_800043EC(c); // 800D58E4
  c->r[4]=0u+0x806D0000u; // 800D58E8
  c->r[3]=c->r[27]+0x00000450u; // 800D58EC
  c->r[4]=c->r[4]+0xFFFFE170u; // 800D58F0
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D58F4
  c->r[0]=c->r[4]+0x00000044u; // 800D58F8
  W32(c->r[27]+0x00000400u,c->r[0]); // 800D58FC
  c->lr=0x800D5904u; f_8007BDFC(c); // 800D5900
  c->r[3]=c->r[27]+0x000004C4u; // 800D5904
  c->lr=0x800D590Cu; f_8007BDFC(c); // 800D5908
  c->r[3]=c->r[27]+0x00000538u; // 800D590C
  c->r[4]=0u+0x00000000u; // 800D5910
  c->r[5]=0u+0x00000008u; // 800D5914
  c->lr=0x800D591Cu; f_800043EC(c); // 800D5918
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D591C
  cmps(c,0,(int32_t)c->r[24],0); // 800D5920
  if (crb(c,2)) { goto L_800D5968; } // 800D5924
  c->lr=0x800D592Cu; f_800D4698(c); // 800D5928
  c->r[26]=c->r[3]|c->r[3]; // 800D592C
  c->lr=0x800D5934u; f_8007BDCC(c); // 800D5930
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 800D5934
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5938
  c->r[5]=0u+0x800D0000u; // 800D593C
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D5940
  c->r[4]=c->r[24]+c->r[4]; // 800D5944
  c->r[5]=c->r[5]+0x00005D3Cu; // 800D5948
  c->r[4]=c->r[4]+c->r[0]; // 800D594C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5950
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5954
  cmpu(c,0,c->r[0],0x0000000Cu); // 800D5958
  if (!crb(c,0)) { goto L_800D5968; } // 800D595C
  c->r[0]=0u+0x0000000Cu; // 800D5960
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5964
L_800D5968:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5968
  cmps(c,0,(int32_t)c->r[24],0); // 800D596C
  if (crb(c,2)) { goto L_800D59D8; } // 800D5970
  c->lr=0x800D5978u; f_800D4698(c); // 800D5974
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800D5978
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D597C
  if (!crb(c,2)) { goto L_800D59A0; } // 800D5980
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5984
  c->r[0]=0u+0x00000001u; // 800D5988
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D598C
  c->r[4]=c->r[5]+0x00000001u; // 800D5990
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5994
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800D5998
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800D599C
L_800D59A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D59A0
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800D59A4
  c->r[5]=0u+0x800D0000u; // 800D59A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D59AC
  c->r[4]=c->r[24]+c->r[4]; // 800D59B0
  c->r[5]=c->r[5]+0x00005D38u; // 800D59B4
  c->r[4]=c->r[4]+c->r[0]; // 800D59B8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D59BC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D59C0
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D59C4
  cmpu(c,0,c->r[0],0x00000018u); // 800D59C8
  if (!crb(c,0)) { goto L_800D59D8; } // 800D59CC
  c->r[0]=0u+0x00000018u; // 800D59D0
  W32(c->r[24]+c->r[3],c->r[0]); // 800D59D4
L_800D59D8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D59D8
  cmps(c,0,(int32_t)c->r[24],0); // 800D59DC
  if (crb(c,2)) { goto L_800D5A48; } // 800D59E0
  c->lr=0x800D59E8u; f_800D4698(c); // 800D59E4
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800D59E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D59EC
  if (!crb(c,2)) { goto L_800D5A10; } // 800D59F0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D59F4
  c->r[0]=0u+0x00000001u; // 800D59F8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D59FC
  c->r[4]=c->r[5]+0x00000001u; // 800D5A00
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5A04
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800D5A08
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800D5A0C
L_800D5A10:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5A10
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800D5A14
  c->r[5]=0u+0x800D0000u; // 800D5A18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5A1C
  c->r[4]=c->r[24]+c->r[4]; // 800D5A20
  c->r[5]=c->r[5]+0x00005D34u; // 800D5A24
  c->r[4]=c->r[4]+c->r[0]; // 800D5A28
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5A2C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5A30
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5A34
  cmpu(c,0,c->r[0],0x0000006Cu); // 800D5A38
  if (!crb(c,0)) { goto L_800D5A48; } // 800D5A3C
  c->r[0]=0u+0x0000006Cu; // 800D5A40
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5A44
L_800D5A48:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5A48
  cmps(c,0,(int32_t)c->r[24],0); // 800D5A4C
  if (crb(c,2)) { goto L_800D5AB8; } // 800D5A50
  c->lr=0x800D5A58u; f_800D4698(c); // 800D5A54
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800D5A58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5A5C
  if (!crb(c,2)) { goto L_800D5A80; } // 800D5A60
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5A64
  c->r[0]=0u+0x00000001u; // 800D5A68
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5A6C
  c->r[4]=c->r[5]+0x00000001u; // 800D5A70
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5A74
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 800D5A78
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800D5A7C
L_800D5A80:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5A80
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 800D5A84
  c->r[5]=0u+0x800D0000u; // 800D5A88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5A8C
  c->r[4]=c->r[24]+c->r[4]; // 800D5A90
  c->r[5]=c->r[5]+0x00005D30u; // 800D5A94
  c->r[4]=c->r[4]+c->r[0]; // 800D5A98
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5A9C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5AA0
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5AA4
  cmpu(c,0,c->r[0],0x0000002Cu); // 800D5AA8
  if (!crb(c,0)) { goto L_800D5AB8; } // 800D5AAC
  c->r[0]=0u+0x0000002Cu; // 800D5AB0
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5AB4
L_800D5AB8:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5AB8
  cmps(c,0,(int32_t)c->r[24],0); // 800D5ABC
  if (crb(c,2)) { goto L_800D5B28; } // 800D5AC0
  c->lr=0x800D5AC8u; f_800D4698(c); // 800D5AC4
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800D5AC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5ACC
  if (!crb(c,2)) { goto L_800D5AF0; } // 800D5AD0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5AD4
  c->r[0]=0u+0x00000001u; // 800D5AD8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5ADC
  c->r[4]=c->r[5]+0x00000001u; // 800D5AE0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5AE4
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800D5AE8
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800D5AEC
L_800D5AF0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5AF0
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800D5AF4
  c->r[5]=0u+0x800D0000u; // 800D5AF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5AFC
  c->r[4]=c->r[24]+c->r[4]; // 800D5B00
  c->r[5]=c->r[5]+0x00005D2Cu; // 800D5B04
  c->r[4]=c->r[4]+c->r[0]; // 800D5B08
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5B0C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5B10
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5B14
  cmpu(c,0,c->r[0],0x00000010u); // 800D5B18
  if (!crb(c,0)) { goto L_800D5B28; } // 800D5B1C
  c->r[0]=0u+0x00000010u; // 800D5B20
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5B24
L_800D5B28:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5B28
  cmps(c,0,(int32_t)c->r[24],0); // 800D5B2C
  if (crb(c,2)) { goto L_800D5B98; } // 800D5B30
  c->lr=0x800D5B38u; f_800D4698(c); // 800D5B34
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800D5B38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5B3C
  if (!crb(c,2)) { goto L_800D5B60; } // 800D5B40
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5B44
  c->r[0]=0u+0x00000001u; // 800D5B48
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5B4C
  c->r[4]=c->r[5]+0x00000001u; // 800D5B50
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5B54
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800D5B58
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800D5B5C
L_800D5B60:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5B60
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800D5B64
  c->r[5]=0u+0x800D0000u; // 800D5B68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5B6C
  c->r[4]=c->r[24]+c->r[4]; // 800D5B70
  c->r[5]=c->r[5]+0x00005D28u; // 800D5B74
  c->r[4]=c->r[4]+c->r[0]; // 800D5B78
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5B7C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5B80
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5B84
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D5B88
  if (!crb(c,0)) { goto L_800D5B98; } // 800D5B8C
  c->r[0]=0u+0x0000005Cu; // 800D5B90
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5B94
L_800D5B98:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5B98
  cmps(c,0,(int32_t)c->r[24],0); // 800D5B9C
  if (crb(c,2)) { goto L_800D5C08; } // 800D5BA0
  c->lr=0x800D5BA8u; f_800D4698(c); // 800D5BA4
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800D5BA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5BAC
  if (!crb(c,2)) { goto L_800D5BD0; } // 800D5BB0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5BB4
  c->r[0]=0u+0x00000001u; // 800D5BB8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5BBC
  c->r[4]=c->r[5]+0x00000001u; // 800D5BC0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5BC4
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800D5BC8
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800D5BCC
L_800D5BD0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5BD0
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800D5BD4
  c->r[5]=0u+0x800D0000u; // 800D5BD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5BDC
  c->r[4]=c->r[24]+c->r[4]; // 800D5BE0
  c->r[5]=c->r[5]+0x00005D24u; // 800D5BE4
  c->r[4]=c->r[4]+c->r[0]; // 800D5BE8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5BEC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5BF0
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5BF4
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D5BF8
  if (!crb(c,0)) { goto L_800D5C08; } // 800D5BFC
  c->r[0]=0u+0x0000005Cu; // 800D5C00
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5C04
L_800D5C08:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5C08
  cmps(c,0,(int32_t)c->r[24],0); // 800D5C0C
  if (crb(c,2)) { goto L_800D5C78; } // 800D5C10
  c->lr=0x800D5C18u; f_800D4698(c); // 800D5C14
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800D5C18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5C1C
  if (!crb(c,2)) { goto L_800D5C40; } // 800D5C20
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5C24
  c->r[0]=0u+0x00000001u; // 800D5C28
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5C2C
  c->r[4]=c->r[5]+0x00000001u; // 800D5C30
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5C34
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800D5C38
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800D5C3C
L_800D5C40:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5C40
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800D5C44
  c->r[5]=0u+0x800D0000u; // 800D5C48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5C4C
  c->r[4]=c->r[24]+c->r[4]; // 800D5C50
  c->r[5]=c->r[5]+0x00005D20u; // 800D5C54
  c->r[4]=c->r[4]+c->r[0]; // 800D5C58
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5C5C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5C60
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5C64
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D5C68
  if (!crb(c,0)) { goto L_800D5C78; } // 800D5C6C
  c->r[0]=0u+0x0000005Cu; // 800D5C70
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5C74
L_800D5C78:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800D5C78
  cmps(c,0,(int32_t)c->r[24],0); // 800D5C7C
  if (crb(c,2)) { goto L_800D5CE8; } // 800D5C80
  c->lr=0x800D5C88u; f_800D4698(c); // 800D5C84
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800D5C88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5C8C
  if (!crb(c,2)) { goto L_800D5CB0; } // 800D5C90
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800D5C94
  c->r[0]=0u+0x00000001u; // 800D5C98
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800D5C9C
  c->r[4]=c->r[5]+0x00000001u; // 800D5CA0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800D5CA4
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800D5CA8
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800D5CAC
L_800D5CB0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800D5CB0
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800D5CB4
  c->r[5]=0u+0x800D0000u; // 800D5CB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5CBC
  c->r[4]=c->r[24]+c->r[4]; // 800D5CC0
  c->r[5]=c->r[5]+0x00005D1Cu; // 800D5CC4
  c->r[4]=c->r[4]+c->r[0]; // 800D5CC8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D5CCC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800D5CD0
  c->r[0]=R32(c->r[24]+c->r[3]); // 800D5CD4
  cmpu(c,0,c->r[0],0x0000005Cu); // 800D5CD8
  if (!crb(c,0)) { goto L_800D5CE8; } // 800D5CDC
  c->r[0]=0u+0x0000005Cu; // 800D5CE0
  W32(c->r[24]+c->r[3],c->r[0]); // 800D5CE4
L_800D5CE8:;
  c->r[3]=c->r[27]|c->r[27]; // 800D5CE8
  c->lr=0x800D5CF0u; f_8005BBF0(c); // 800D5CEC
  c->r[4]=0u+0x806D0000u; // 800D5CF0
  c->r[3]=c->r[27]|c->r[27]; // 800D5CF4
  c->r[4]=c->r[4]+0x000048F8u; // 800D5CF8
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800D5CFC
  c->r[0]=c->r[4]+0x00000044u; // 800D5D00
  W32(c->r[27]+0x00000400u,c->r[0]); // 800D5D04
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5D08
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D5D0C
  c->lr=c->r[0]; // 800D5D10
  c->r[1]=c->r[1]+0x00000040u; // 800D5D14
  return; // 800D5D18
}

// fn_800D5D1C
void f_800D5D1C(Ctx* __restrict c) {
  trace_call(0x800D5D1Cu);
  f_8005E338(c); return; // 800D5D1C
}

// fn_800D5D20
void f_800D5D20(Ctx* __restrict c) {
  trace_call(0x800D5D20u);
  f_8005E324(c); return; // 800D5D20
}

// fn_800D5D24
void f_800D5D24(Ctx* __restrict c) {
  trace_call(0x800D5D24u);
  f_8005E310(c); return; // 800D5D24
}

// fn_800D5D28
void f_800D5D28(Ctx* __restrict c) {
  trace_call(0x800D5D28u);
  f_8005E2FC(c); return; // 800D5D28
}

// fn_800D5D2C
void f_800D5D2C(Ctx* __restrict c) {
  trace_call(0x800D5D2Cu);
  f_8005E34C(c); return; // 800D5D2C
}

// fn_800D5D30
void f_800D5D30(Ctx* __restrict c) {
  trace_call(0x800D5D30u);
  f_8005E360(c); return; // 800D5D30
}

// fn_800D5D34
void f_800D5D34(Ctx* __restrict c) {
  trace_call(0x800D5D34u);
  f_8005D47C(c); return; // 800D5D34
}

// fn_800D5D38
void f_800D5D38(Ctx* __restrict c) {
  trace_call(0x800D5D38u);
  f_8005D468(c); return; // 800D5D38
}

// fn_800D5D3C
void f_800D5D3C(Ctx* __restrict c) {
  trace_call(0x800D5D3Cu);
  f_8005BEDC(c); return; // 800D5D3C
}

// fn_800D5D40
void f_800D5D40(Ctx* __restrict c) {
  trace_call(0x800D5D40u);
  c->r[0]=R8(c->r[13]+0xFFFFBDC4u); // 800D5D40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5D44
  if (!crb(c,2)) { goto L_800D5D64; } // 800D5D48
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800D5D4C
  c->r[0]=0u+0x00000001u; // 800D5D50
  W32(c->r[13]+0xFFFFBDC0u,c->r[3]); // 800D5D54
  c->r[3]=c->r[3]+0x00000001u; // 800D5D58
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800D5D5C
  W8(c->r[13]+0xFFFFBDC4u,c->r[0]); // 800D5D60
L_800D5D64:;
  c->r[3]=R32(c->r[13]+0xFFFFBDC0u); // 800D5D64
  return; // 800D5D68
}

// fn_800D5D6C
void f_800D5D6C(Ctx* __restrict c) {
  trace_call(0x800D5D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5D6C
  c->r[0]=c->lr; // 800D5D70
  cmps(c,0,(int32_t)c->r[3],0); // 800D5D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5D78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5D7C
  c->r[30]=c->r[3]|c->r[3]; // 800D5D80
  c->r[31]=c->r[4]|c->r[4]; // 800D5D84
  if (crb(c,2)) { goto L_800D5DA8; } // 800D5D88
  if (crb(c,2)) { goto L_800D5D98; } // 800D5D8C
  c->r[4]=0u+0x00000000u; // 800D5D90
  c->lr=0x800D5D98u; f_8005BD00(c); // 800D5D94
L_800D5D98:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5D98
  if (!crb(c,1)) { goto L_800D5DA8; } // 800D5D9C
  c->r[3]=c->r[30]|c->r[30]; // 800D5DA0
  c->lr=0x800D5DA8u; f_8005328C(c); // 800D5DA4
L_800D5DA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5DA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5DB0
  c->lr=c->r[0]; // 800D5DB4
  c->r[1]=c->r[1]+0x00000010u; // 800D5DB8
  return; // 800D5DBC
}

// fn_800D5DC0
void f_800D5DC0(Ctx* __restrict c) {
  trace_call(0x800D5DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5DC0
  c->r[0]=c->lr; // 800D5DC4
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5DC8
  c->r[5]=0u+0x00000014u; // 800D5DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5DD0
  c->r[0]=0u+0x00000000u; // 800D5DD4
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5DDC
  c->r[31]=c->r[3]|c->r[3]; // 800D5DE0
  c->r[4]=R32(c->r[3]+0x00000444u); // 800D5DE4
  {uint32_t ea=c->r[4]+0x00000194u; WF32(ea,c->f[0]);} // 800D5DE8
  c->r[4]=0u+0x00000000u; // 800D5DEC
  {uint32_t ea=c->r[2]+0xFFFFA4A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5DF0
  c->r[6]=R32(c->r[3]+0x00000444u); // 800D5DF4
  {uint32_t ea=c->r[6]+0x00000198u; WF32(ea,c->f[0]);} // 800D5DF8
  {uint32_t ea=c->r[2]+0xFFFFA4ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5DFC
  c->r[6]=R32(c->r[3]+0x00000444u); // 800D5E00
  {uint32_t ea=c->r[6]+0x0000019Cu; WF32(ea,c->f[1]);} // 800D5E04
  c->r[6]=R32(c->r[3]+0x00000444u); // 800D5E08
  {uint32_t ea=c->r[6]+0x000001A0u; WF32(ea,c->f[0]);} // 800D5E0C
  W32(c->r[3]+0x000005C0u,c->r[0]); // 800D5E10
  W32(c->r[3]+0x00000624u,c->r[0]); // 800D5E14
  c->r[3]=c->r[3]+0x00000640u; // 800D5E18
  c->lr=0x800D5E20u; f_800043EC(c); // 800D5E1C
  c->r[3]=c->r[31]+0x00000654u; // 800D5E20
  c->r[4]=0u+0x00000000u; // 800D5E24
  c->r[5]=0u+0x00000014u; // 800D5E28
  c->lr=0x800D5E30u; f_800043EC(c); // 800D5E2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5E30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5E34
  c->lr=c->r[0]; // 800D5E38
  c->r[1]=c->r[1]+0x00000010u; // 800D5E3C
  return; // 800D5E40
}

// fn_800D5E44
void f_800D5E44(Ctx* __restrict c) {
  trace_call(0x800D5E44u);
  f_800DB7B0(c); return; // 800D5E44
}

// fn_800D5E48
void f_800D5E48(Ctx* __restrict c) {
  trace_call(0x800D5E48u);
  return; // 800D5E48
}

// fn_800D5E4C
void f_800D5E4C(Ctx* __restrict c) {
  trace_call(0x800D5E4Cu);
  return; // 800D5E4C
}

// fn_800D5E50
void f_800D5E50(Ctx* __restrict c) {
  trace_call(0x800D5E50u);
  return; // 800D5E50
}

// fn_800D5E54
void f_800D5E54(Ctx* __restrict c) {
  trace_call(0x800D5E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E54
  c->r[0]=c->lr; // 800D5E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5E5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5E60
  c->r[31]=c->r[4]|c->r[4]; // 800D5E64
  c->r[30]=c->r[3]|c->r[3]; // 800D5E68
  c->r[4]=0u+0x00000016u; // 800D5E6C
  c->lr=0x800D5E74u; f_800D5F00(c); // 800D5E70
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E74
  if (!crb(c,2)) { goto L_800D5EEC; } // 800D5E78
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D5E7C
  c->r[3]=c->r[30]|c->r[30]; // 800D5E80
  c->r[12]=R32(c->r[12]+0x00000100u); // 800D5E84
  c->ctr=c->r[12]; // 800D5E88
  if (true) { c->lr=0x800D5E90u; dispatch(c,c->ctr); } // 800D5E8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E90
  if (!crb(c,2)) { goto L_800D5EC4; } // 800D5E94
  c->r[3]=c->r[30]|c->r[30]; // 800D5E98
  c->r[4]=0u+0x00000000u; // 800D5E9C
  c->lr=0x800D5EA4u; f_8005EE88(c); // 800D5EA0
  c->r[3]=c->r[30]|c->r[30]; // 800D5EA4
  c->r[4]=0u+0x00000016u; // 800D5EA8
  c->r[5]=0u+0x00000001u; // 800D5EAC
  c->lr=0x800D5EB4u; f_800D5F20(c); // 800D5EB0
  c->r[3]=c->r[30]|c->r[30]; // 800D5EB4
  c->r[4]=c->r[31]|c->r[31]; // 800D5EB8
  c->lr=0x800D5EC0u; f_800DB140(c); // 800D5EBC
  goto L_800D5EEC; // 800D5EC0
L_800D5EC4:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D5EC4
  c->r[3]=c->r[30]|c->r[30]; // 800D5EC8
  c->r[12]=R32(c->r[12]+0x00000110u); // 800D5ECC
  c->ctr=c->r[12]; // 800D5ED0
  if (true) { c->lr=0x800D5ED8u; dispatch(c,c->ctr); } // 800D5ED4
  cmps(c,0,(int32_t)c->r[3],0); // 800D5ED8
  if (crb(c,2)) { goto L_800D5EEC; } // 800D5EDC
  c->r[3]=c->r[30]|c->r[30]; // 800D5EE0
  c->r[4]=c->r[31]|c->r[31]; // 800D5EE4
  c->lr=0x800D5EECu; f_800DAD10(c); // 800D5EE8
L_800D5EEC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5EF0
  c->lr=c->r[0]; // 800D5EF4
  c->r[1]=c->r[1]+0x00000010u; // 800D5EF8
  return; // 800D5EFC
}

// fn_800D5F00
void f_800D5F00(Ctx* __restrict c) {
  trace_call(0x800D5F00u);
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800D5F00
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFCu; // 800D5F04
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 800D5F08
  c->r[3]=c->r[5]+c->r[3]; // 800D5F0C
  c->r[3]=R32(c->r[3]+0x000000C4u); // 800D5F10
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5F14
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800D5F18
  return; // 800D5F1C
}

// fn_800D5F20
void f_800D5F20(Ctx* __restrict c) {
  trace_call(0x800D5F20u);
  c->r[6]=R32(c->r[3]+0x0000044Cu); // 800D5F20
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFCu; // 800D5F24
  c->r[7]=rotl(c->r[4],0)&0x0000001Fu; // 800D5F28
  c->r[0]=0u+0x00000001u; // 800D5F2C
  c->r[6]=c->r[6]+c->r[3]; // 800D5F30
  c->r[4]=R32(c->r[6]+0x000000C4u); // 800D5F34
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800D5F38
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800D5F3C
  c->r[3]=c->r[4]&~c->r[3]; // 800D5F40
  c->r[0]=c->r[3]+c->r[0]; // 800D5F44
  W32(c->r[6]+0x000000C4u,c->r[0]); // 800D5F48
  return; // 800D5F4C
}

// fn_800D5F50
void f_800D5F50(Ctx* __restrict c) {
  trace_call(0x800D5F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F50
  c->r[0]=c->lr; // 800D5F54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5F58
  c->r[11]=c->r[1]+0x00000020u; // 800D5F5C
  c->lr=0x800D5F64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5F60
  c->r[26]=c->r[3]|c->r[3]; // 800D5F64
  c->r[27]=c->r[4]|c->r[4]; // 800D5F68
  c->r[4]=0u+0x00000000u; // 800D5F6C
  c->r[5]=0u+0x00000024u; // 800D5F70
  c->r[3]=c->r[3]+0x000005DCu; // 800D5F74
  c->lr=0x800D5F7Cu; f_800043EC(c); // 800D5F78
  c->r[3]=c->r[27]|c->r[27]; // 800D5F7C
  c->lr=0x800D5F84u; f_802D93E8(c); // 800D5F80
  cmps(c,0,(int32_t)c->r[3],0); // 800D5F84
  if (crb(c,2)) { goto L_800D60B8; } // 800D5F88
  c->r[3]=c->r[27]|c->r[27]; // 800D5F8C
  c->r[4]=0u+0x00000008u; // 800D5F90
  c->lr=0x800D5F98u; f_802D9584(c); // 800D5F94
  W32(c->r[26]+0x000005DCu,c->r[3]); // 800D5F98
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800D5F9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D5FA0
  if (!crb(c,2)) { goto L_800D5FE8; } // 800D5FA4
  c->r[31]=0u+0x80730000u; // 800D5FA8
  c->r[3]=c->r[31]+0x00005908u; // 800D5FAC
  c->lr=0x800D5FB4u; f_8009822C(c); // 800D5FB0
  c->r[6]=0u+0x806D0000u; // 800D5FB4
  c->r[4]=0u+0x80050000u; // 800D5FB8
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800D5FBC
  c->r[3]=c->r[31]+0x00005908u; // 800D5FC0
  c->r[0]=c->r[6]+0x00000028u; // 800D5FC4
  c->r[5]=0u+0x80750000u; // 800D5FC8
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800D5FCC
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800D5FD0
  c->r[5]=c->r[5]+0x00003934u; // 800D5FD4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800D5FD8
  c->lr=0x800D5FE0u; f_803A92B8(c); // 800D5FDC
  c->r[0]=0u+0x00000001u; // 800D5FE0
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800D5FE4
L_800D5FE8:;
  c->r[4]=R32(c->r[26]+0x00000448u); // 800D5FE8
  c->r[3]=0u+0x80730000u; // 800D5FEC
  c->r[3]=c->r[3]+0x00005908u; // 800D5FF0
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800D5FF4
  c->lr=0x800D5FFCu; f_800992D4(c); // 800D5FF8
  c->r[30]=c->r[3]|c->r[3]; // 800D5FFC
  c->r[29]=0u+0x00000000u; // 800D6000
  c->r[31]=0u+0x00000000u; // 800D6004
L_800D6008:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D6008
  c->r[3]=c->r[27]|c->r[27]; // 800D600C
  c->r[4]=0u+0x00000005u; // 800D6010
  if (crb(c,2)) { goto L_800D601C; } // 800D6014
  c->r[4]=c->r[29]+0x0000000Cu; // 800D6018
L_800D601C:;
  c->lr=0x800D6020u; f_802D9584(c); // 800D601C
  c->r[28]=c->r[3]|c->r[3]; // 800D6020
  c->lr=0x800D6028u; f_803A91D4(c); // 800D6024
  cmps(c,0,(int32_t)c->r[3],0); // 800D6028
  if (crb(c,2)) { goto L_800D6048; } // 800D602C
  c->r[5]=c->r[26]+c->r[31]; // 800D6030
  c->r[3]=c->r[30]|c->r[30]; // 800D6034
  c->r[4]=c->r[28]|c->r[28]; // 800D6038
  c->r[6]=0u+0x00000000u; // 800D603C
  c->r[5]=c->r[5]+0x000005E0u; // 800D6040
  c->lr=0x800D6048u; f_802D24C8(c); // 800D6044
L_800D6048:;
  c->r[29]=c->r[29]+0x00000001u; // 800D6048
  c->r[31]=c->r[31]+0x00000004u; // 800D604C
  cmps(c,0,(int32_t)c->r[29],8); // 800D6050
  if (crb(c,0)) { IRQCHK(c); goto L_800D6008; } // 800D6054
  c->r[3]=c->r[27]|c->r[27]; // 800D6058
  c->r[4]=0u+0x0000000Fu; // 800D605C
  c->lr=0x800D6064u; f_802D9584(c); // 800D6060
  c->lr=0x800D6068u; f_803B5690(c); // 800D6064
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D6068
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D606C
  fcmp(c,0,c->f[0],c->f[1]); // 800D6070
  if (!crb(c,2)) { goto L_800D607C; } // 800D6074
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6078
L_800D607C:;
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D607C
  {uint32_t ea=c->r[26]+0x00000640u; WF32(ea,c->f[1]);} // 800D6080
  c->r[3]=c->r[27]|c->r[27]; // 800D6084
  c->r[4]=0u+0x00000010u; // 800D6088
  {uint32_t ea=c->r[26]+0x00000654u; WF32(ea,c->f[0]);} // 800D608C
  c->lr=0x800D6094u; f_802D9584(c); // 800D6090
  c->lr=0x800D6098u; f_803B5690(c); // 800D6094
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D6098
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D609C
  fcmp(c,0,c->f[0],c->f[1]); // 800D60A0
  if (!crb(c,2)) { goto L_800D60AC; } // 800D60A4
  {uint32_t ea=c->r[2]+0xFFFFA4B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D60A8
L_800D60AC:;
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D60AC
  {uint32_t ea=c->r[26]+0x00000648u; WF32(ea,c->f[1]);} // 800D60B0
  {uint32_t ea=c->r[26]+0x0000065Cu; WF32(ea,c->f[0]);} // 800D60B4
L_800D60B8:;
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 800D60B8
  {uint32_t ea=c->r[2]+0xFFFFA4BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D60BC
  {uint32_t ea=c->r[2]+0xFFFFA4C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D60C0
  c->lr=0x800D60C8u; f_800C30F4(c); // 800D60C4
  c->r[11]=c->r[1]+0x00000020u; // 800D60C8
  c->lr=0x800D60D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D60CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D60D0
  c->lr=c->r[0]; // 800D60D4
  c->r[1]=c->r[1]+0x00000020u; // 800D60D8
  return; // 800D60DC
}

// fn_800D60E0
void f_800D60E0(Ctx* __restrict c) {
  trace_call(0x800D60E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60E0
  c->r[0]=c->lr; // 800D60E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D60E8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D60EC
  c->r[30]=c->r[4]|c->r[4]; // 800D60F0
  c->r[31]=c->r[1]|c->r[1]; // 800D60F4
  c->r[28]=c->r[3]|c->r[3]; // 800D60F8
  c->r[4]=0u+0x00000016u; // 800D60FC
  c->lr=0x800D6104u; f_800D5F00(c); // 800D6100
  cmps(c,0,(int32_t)c->r[3],0); // 800D6104
  if (!crb(c,2)) { goto L_800D61FC; } // 800D6108
  c->r[0]=R32(c->r[28]+0x000005C0u); // 800D610C
  cmps(c,0,(int32_t)c->r[0],0); // 800D6110
  if (!crb(c,2)) { goto L_800D61A4; } // 800D6114
  c->r[4]=0u+0x80690000u; // 800D6118
  c->r[3]=c->r[30]|c->r[30]; // 800D611C
  c->r[4]=c->r[4]+0xFFFFE9E0u; // 800D6120
  c->r[4]=c->r[4]+0x00000001u; // 800D6124
  c->lr=0x800D612Cu; f_803B393C(c); // 800D6128
  cmps(c,0,(int32_t)c->r[3],0); // 800D612C
  if (!crb(c,2)) { goto L_800D61B8; } // 800D6130
  c->lr=0x800D6138u; f_80062DFC(c); // 800D6134
  c->r[4]=c->r[3]|c->r[3]; // 800D6138
  c->r[3]=c->r[28]|c->r[28]; // 800D613C
  c->lr=0x800D6144u; f_80062F4C(c); // 800D6140
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D6144
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D6148
  c->r[3]=c->r[28]+c->r[0]; // 800D614C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D6150
  cmps(c,0,(int32_t)c->r[29],0); // 800D6154
  if (crb(c,2)) { goto L_800D6180; } // 800D6158
  c->r[30]=0u+0x00000000u; // 800D615C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D6160
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D6164
  c->lr=0x800D616Cu; f_80062DFC(c); // 800D6168
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D616C
  c->r[0]=c->r[13]+0xFFFF80B0u; // 800D6170
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D6174
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D6178
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D617C
L_800D6180:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D6180
  c->r[0]=0u+0x00000000u; // 800D6184
  c->r[3]=c->r[28]|c->r[28]; // 800D6188
  c->r[4]=c->r[29]|c->r[29]; // 800D618C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D6190
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D6194
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D6198
  c->lr=0x800D61A0u; f_8006306C(c); // 800D619C
  goto L_800D61FC; // 800D61A0
L_800D61A4:;
  cmps(c,0,(int32_t)c->r[0],1); // 800D61A4
  if (!crb(c,2)) { goto L_800D61B8; } // 800D61A8
  c->r[3]=c->r[28]|c->r[28]; // 800D61AC
  c->lr=0x800D61B4u; f_800DA994(c); // 800D61B0
  goto L_800D61FC; // 800D61B4
L_800D61B8:;
  c->r[29]=0u+0x00000000u; // 800D61B8
  goto L_800D61F4; // 800D61BC
L_800D61C0:;
  c->r[4]=0u+0x80690000u; // 800D61C0
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D61C4
  c->r[4]=c->r[4]+0xFFFFE9A0u; // 800D61C8
  c->r[3]=c->r[30]|c->r[30]; // 800D61CC
  c->r[4]=c->r[4]+c->r[0]; // 800D61D0
  c->lr=0x800D61D8u; f_803B393C(c); // 800D61D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D61D8
  if (!crb(c,2)) { goto L_800D61F0; } // 800D61DC
  c->r[3]=c->r[28]|c->r[28]; // 800D61E0
  c->r[4]=c->r[29]|c->r[29]; // 800D61E4
  c->lr=0x800D61ECu; f_800DB688(c); // 800D61E8
  goto L_800D61FC; // 800D61EC
L_800D61F0:;
  c->r[29]=c->r[29]+0x00000001u; // 800D61F0
L_800D61F4:;
  cmps(c,0,(int32_t)c->r[29],8); // 800D61F4
  if (crb(c,0)) { IRQCHK(c); goto L_800D61C0; } // 800D61F8
L_800D61FC:;
  c->r[10]=c->r[31]|c->r[31]; // 800D61FC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6200
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D6204
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D6208
  c->r[1]=c->r[10]|c->r[10]; // 800D620C
  c->lr=c->r[0]; // 800D6210
  return; // 800D6214
}

// fn_800D6218
void f_800D6218(Ctx* __restrict c) {
  trace_call(0x800D6218u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6218
  c->r[0]=c->lr; // 800D621C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6220
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6224
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6228
  c->r[30]=c->r[3]|c->r[3]; // 800D622C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D6230
  cmps(c,0,(int32_t)c->r[4],0); // 800D6234
  if (crb(c,2)) { goto L_800D6244; } // 800D6238
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D623C
  goto L_800D6248; // 800D6240
L_800D6244:;
  c->r[0]=0u+0x00000000u; // 800D6244
L_800D6248:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D6248
  if (!crb(c,2)) { goto L_800D6328; } // 800D624C
  c->r[31]=0u+0x00000000u; // 800D6250
  W32(c->r[3]+0x00000600u,c->r[31]); // 800D6254
  c->r[4]=c->r[30]|c->r[30]; // 800D6258
  W32(c->r[3]+0x00000630u,c->r[31]); // 800D625C
  c->r[3]=c->r[1]+0x00000008u; // 800D6260
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D6264
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D6268
  c->ctr=c->r[12]; // 800D626C
  if (true) { c->lr=0x800D6274u; dispatch(c,c->ctr); } // 800D6270
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6274
  c->r[3]=c->r[30]|c->r[30]; // 800D6278
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D627C
  {uint32_t ea=c->r[30]+0x00000638u; WF32(ea,c->f[1]);} // 800D6280
  c->r[4]=R32(c->r[30]+0x000005DCu); // 800D6284
  {uint32_t ea=c->r[30]+0x0000063Cu; WF32(ea,c->f[0]);} // 800D6288
  c->lr=0x800D6290u; f_800DAC88(c); // 800D628C
  cmpu(c,0,c->r[3],0x00000001u); // 800D6290
  if (!crb(c,1)) { goto L_800D62BC; } // 800D6294
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800D6298
  cmpu(c,0,c->r[0],0x00000001u); // 800D629C
  if (!crb(c,1)) { goto L_800D62F4; } // 800D62A0
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 800D62A4
  cmpu(c,0,c->r[0],0x00000001u); // 800D62A8
  if (!crb(c,1)) { goto L_800D62F4; } // 800D62AC
  cmps(c,0,(int32_t)c->r[3],4); // 800D62B0
  if (crb(c,2)) { goto L_800D62D0; } // 800D62B4
  goto L_800D6308; // 800D62B8
L_800D62BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D62BC
  c->r[4]=0u+0x000036B0u; // 800D62C0
  c->r[5]=0u+0x00000001u; // 800D62C4
  c->lr=0x800D62CCu; f_80064744(c); // 800D62C8
  goto L_800D6328; // 800D62CC
L_800D62D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D62D0
  c->r[4]=0u+0x00000001u; // 800D62D4
  c->r[5]=0u+0x00000001u; // 800D62D8
  c->lr=0x800D62E0u; f_800D5F20(c); // 800D62DC
  c->r[3]=c->r[30]|c->r[30]; // 800D62E0
  c->r[4]=0u+0x000036B0u; // 800D62E4
  c->r[5]=0u+0x00000001u; // 800D62E8
  c->lr=0x800D62F0u; f_80064744(c); // 800D62EC
  goto L_800D6328; // 800D62F0
L_800D62F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D62F4
  c->r[4]=0u+0x00000001u; // 800D62F8
  c->r[5]=0u+0x00000001u; // 800D62FC
  c->lr=0x800D6304u; f_800D5F20(c); // 800D6300
  goto L_800D6328; // 800D6304
L_800D6308:;
  c->r[0]=0u+0x00000001u; // 800D6308
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800D630C
  c->r[3]=c->r[30]|c->r[30]; // 800D6310
  W32(c->r[30]+0x000005C4u,c->r[31]); // 800D6314
  c->lr=0x800D631Cu; f_800DA994(c); // 800D6318
  c->r[3]=R32(c->r[30]+0x00000434u); // 800D631C
  c->r[4]=0u+0x00000000u; // 800D6320
  c->lr=0x800D6328u; f_800FE038(c); // 800D6324
L_800D6328:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6328
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D632C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6330
  c->lr=c->r[0]; // 800D6334
  c->r[1]=c->r[1]+0x00000020u; // 800D6338
  return; // 800D633C
}

// fn_800D6340
void f_800D6340(Ctx* __restrict c) {
  trace_call(0x800D6340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6340
  c->r[0]=c->lr; // 800D6344
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D634C
  c->r[31]=c->r[3]|c->r[3]; // 800D6350
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800D6354
  c->r[3]=c->r[4]+0x00000004u; // 800D6358
  c->lr=0x800D6360u; f_800A097C(c); // 800D635C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6360
  if (!crb(c,2)) { goto L_800D637C; } // 800D6364
  c->r[0]=0u+0x00000002u; // 800D6368
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800D636C
  c->r[3]=c->r[31]|c->r[31]; // 800D6370
  c->lr=0x800D6378u; f_800DB36C(c); // 800D6374
  goto L_800D648C; // 800D6378
L_800D637C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800D637C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6380
  if (crb(c,2)) { goto L_800D6390; } // 800D6384
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D6388
  goto L_800D6394; // 800D638C
L_800D6390:;
  c->r[0]=0u+0x00000000u; // 800D6390
L_800D6394:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D6394
  if (!crb(c,2)) { goto L_800D6468; } // 800D6398
  c->r[3]=c->r[31]|c->r[31]; // 800D639C
  c->r[4]=0u+0x00000001u; // 800D63A0
  c->r[5]=0u+0x00000000u; // 800D63A4
  c->lr=0x800D63ACu; f_800D5F20(c); // 800D63A8
  c->r[3]=0u+0x00000001u; // 800D63AC
  c->r[0]=0u+0x00000000u; // 800D63B0
  W32(c->r[31]+0x000005C0u,c->r[3]); // 800D63B4
  c->r[3]=c->r[31]|c->r[31]; // 800D63B8
  c->r[4]=R32(c->r[31]+0x000005DCu); // 800D63BC
  W32(c->r[31]+0x000005C4u,c->r[0]); // 800D63C0
  c->lr=0x800D63C8u; f_800DAC88(c); // 800D63C4
  cmpu(c,0,c->r[3],0x00000001u); // 800D63C8
  if (!crb(c,1)) { goto L_800D63FC; } // 800D63CC
  cmps(c,0,(int32_t)c->r[3],2); // 800D63D0
  if (crb(c,2)) { goto L_800D6408; } // 800D63D4
  cmps(c,0,(int32_t)c->r[3],3); // 800D63D8
  if (crb(c,2)) { goto L_800D641C; } // 800D63DC
  cmps(c,0,(int32_t)c->r[3],4); // 800D63E0
  if (crb(c,2)) { goto L_800D6430; } // 800D63E4
  cmps(c,0,(int32_t)c->r[3],5); // 800D63E8
  if (crb(c,2)) { goto L_800D6444; } // 800D63EC
  cmps(c,0,(int32_t)c->r[3],6); // 800D63F0
  if (crb(c,2)) { goto L_800D6458; } // 800D63F4
  goto L_800D6468; // 800D63F8
L_800D63FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D63FC
  c->lr=0x800D6404u; f_800DA994(c); // 800D6400
  goto L_800D648C; // 800D6404
L_800D6408:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6408
  c->r[4]=0u+0x00003A36u; // 800D640C
  c->r[5]=0u+0x00000001u; // 800D6410
  c->lr=0x800D6418u; f_80064744(c); // 800D6414
  goto L_800D6468; // 800D6418
L_800D641C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D641C
  c->r[4]=0u+0x00003A37u; // 800D6420
  c->r[5]=0u+0x00000001u; // 800D6424
  c->lr=0x800D642Cu; f_80064744(c); // 800D6428
  goto L_800D6468; // 800D642C
L_800D6430:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6430
  c->r[4]=0u+0x00003A35u; // 800D6434
  c->r[5]=0u+0x00000001u; // 800D6438
  c->lr=0x800D6440u; f_80064744(c); // 800D643C
  goto L_800D6468; // 800D6440
L_800D6444:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6444
  c->r[4]=0u+0x000036CFu; // 800D6448
  c->r[5]=0u+0x00000001u; // 800D644C
  c->lr=0x800D6454u; f_80064744(c); // 800D6450
  goto L_800D6468; // 800D6454
L_800D6458:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6458
  c->r[4]=0u+0x000036D0u; // 800D645C
  c->r[5]=0u+0x00000001u; // 800D6460
  c->lr=0x800D6468u; f_80064744(c); // 800D6464
L_800D6468:;
  c->r[3]=c->r[31]+0x00000354u; // 800D6468
  c->lr=0x800D6470u; f_800667AC(c); // 800D646C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6470
  if (crb(c,2)) { goto L_800D648C; } // 800D6474
  c->r[3]=c->r[31]|c->r[31]; // 800D6478
  c->r[4]=0u+0x00000001u; // 800D647C
  c->lr=0x800D6484u; f_800DA944(c); // 800D6480
  c->r[3]=c->r[31]|c->r[31]; // 800D6484
  c->lr=0x800D648Cu; f_800DA994(c); // 800D6488
L_800D648C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D648C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6490
  c->lr=c->r[0]; // 800D6494
  c->r[1]=c->r[1]+0x00000010u; // 800D6498
  return; // 800D649C
}

// fn_800D64A0
void f_800D64A0(Ctx* __restrict c) {
  trace_call(0x800D64A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64A0
  c->r[0]=c->lr; // 800D64A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D64A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D64AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D64B0
  c->r[30]=c->r[3]|c->r[3]; // 800D64B4
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D64B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D64BC
  if (crb(c,2)) { goto L_800D64D8; } // 800D64C0
  cmps(c,0,(int32_t)c->r[0],1); // 800D64C4
  if (crb(c,2)) { goto L_800D65A4; } // 800D64C8
  cmps(c,0,(int32_t)c->r[0],2); // 800D64CC
  if (crb(c,2)) { goto L_800D65C0; } // 800D64D0
  goto L_800D6604; // 800D64D4
L_800D64D8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D64D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D64DC
  if (crb(c,2)) { goto L_800D64EC; } // 800D64E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D64E4
  goto L_800D64F0; // 800D64E8
L_800D64EC:;
  c->r[0]=0u+0x00000000u; // 800D64EC
L_800D64F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D64F0
  if (!crb(c,2)) { goto L_800D6604; } // 800D64F4
  c->r[3]=c->r[30]|c->r[30]; // 800D64F8
  c->lr=0x800D6500u; f_800DBAE4(c); // 800D64FC
  c->r[0]=R32(c->r[30]+0x000005C0u); // 800D6500
  cmps(c,0,(int32_t)c->r[0],1); // 800D6504
  if (crb(c,2)) { goto L_800D6518; } // 800D6508
  cmps(c,0,(int32_t)c->r[0],2); // 800D650C
  if (crb(c,2)) { goto L_800D6584; } // 800D6510
  goto L_800D6590; // 800D6514
L_800D6518:;
  c->r[4]=R32(c->r[30]+0x00000600u); // 800D6518
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800D651C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800D6520
  c->r[0]=sraw(c,c->r[4],31); // 800D6524
  c->r[4]=c->r[4]&~c->r[0]; // 800D6528
  c->lr=0x800D6530u; f_800C2EE0(c); // 800D652C
  c->r[4]=0u+0x80690000u; // 800D6530
  c->r[31]=c->r[3]|c->r[3]; // 800D6534
  c->r[4]=c->r[4]+0xFFFFE9E0u; // 800D6538
  c->r[3]=c->r[3]+0x00000005u; // 800D653C
  c->r[4]=c->r[4]+0x00000007u; // 800D6540
  c->lr=0x800D6548u; f_803B4278(c); // 800D6544
  cmps(c,0,(int32_t)c->r[3],0); // 800D6548
  if (crb(c,2)) { goto L_800D655C; } // 800D654C
  c->r[0]=0u+0x00000001u; // 800D6550
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 800D6554
  goto L_800D656C; // 800D6558
L_800D655C:;
  c->r[3]=c->r[31]+0x00000005u; // 800D655C
  c->lr=0x800D6564u; f_803B5690(c); // 800D6560
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D6564
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[0]);} // 800D6568
L_800D656C:;
  c->r[3]=R32(c->r[30]+0x000005C8u); // 800D656C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6570
  c->r[0]=c->r[3]+0x00000002u; // 800D6574
  {uint32_t ea=c->r[30]+0x00000564u; WF32(ea,c->f[0]);} // 800D6578
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800D657C
  goto L_800D6590; // 800D6580
L_800D6584:;
  c->r[3]=R32(c->r[30]+0x000005C8u); // 800D6584
  c->r[0]=c->r[3]+0x00000001u; // 800D6588
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800D658C
L_800D6590:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6590
  c->r[4]=0u+0x000036B0u; // 800D6594
  c->r[5]=0u+0x00000001u; // 800D6598
  c->lr=0x800D65A0u; f_80064744(c); // 800D659C
  goto L_800D6604; // 800D65A0
L_800D65A4:;
  c->r[3]=c->r[3]+0x00000354u; // 800D65A4
  c->lr=0x800D65ACu; f_800667AC(c); // 800D65A8
  cmps(c,0,(int32_t)c->r[3],0); // 800D65AC
  if (crb(c,2)) { goto L_800D6604; } // 800D65B0
  c->r[3]=c->r[30]|c->r[30]; // 800D65B4
  c->lr=0x800D65BCu; f_800DB36C(c); // 800D65B8
  goto L_800D6604; // 800D65BC
L_800D65C0:;
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 800D65C0
  cmps(c,0,(int32_t)c->r[0],1); // 800D65C4
  if (crb(c,2)) { goto L_800D6604; } // 800D65C8
  c->r[0]=0u+0x00000000u; // 800D65CC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D65D0
  c->r[3]=c->r[1]+0x00000008u; // 800D65D4
  c->lr=0x800D65DCu; f_8004714C(c); // 800D65D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D65DC
  {uint32_t ea=c->r[30]+0x00000564u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D65E0
  {uint32_t ea=c->r[30]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D65E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D65E8
  {uint32_t ea=c->r[30]+0x00000564u; WF32(ea,c->f[0]);} // 800D65EC
  fcmp(c,0,c->f[0],c->f[2]); // 800D65F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D65F4
  if (!crb(c,2)) { goto L_800D6604; } // 800D65F8
  c->r[3]=c->r[30]|c->r[30]; // 800D65FC
  c->lr=0x800D6604u; f_800DA994(c); // 800D6600
L_800D6604:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6604
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6608
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D660C
  c->lr=c->r[0]; // 800D6610
  c->r[1]=c->r[1]+0x00000020u; // 800D6614
  return; // 800D6618
}

// fn_800D661C
void f_800D661C(Ctx* __restrict c) {
  trace_call(0x800D661Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D661C
  c->r[0]=c->lr; // 800D6620
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6624
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D6628
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D662C
  c->r[30]=c->r[3]|c->r[3]; // 800D6630
  c->lr=0x800D6638u; f_800DB304(c); // 800D6634
  cmps(c,0,(int32_t)c->r[3],0); // 800D6638
  if (!crb(c,2)) { goto L_800D66C4; } // 800D663C
  c->r[3]=c->r[1]+0x00000014u; // 800D6640
  c->r[4]=c->r[30]+0x000001B8u; // 800D6644
  c->lr=0x800D664Cu; f_80060F28(c); // 800D6648
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D664C
  c->r[4]=c->r[30]|c->r[30]; // 800D6650
  c->r[3]=c->r[1]+0x00000020u; // 800D6654
  c->r[31]=R32(c->r[30]+0x0000041Cu); // 800D6658
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D665C
  c->ctr=c->r[12]; // 800D6660
  if (true) { c->lr=0x800D6668u; dispatch(c,c->ctr); } // 800D6664
  c->r[3]=c->r[31]|c->r[31]; // 800D6668
  c->r[4]=c->r[1]+0x00000020u; // 800D666C
  c->r[5]=c->r[1]+0x00000014u; // 800D6670
  c->lr=0x800D6678u; f_800C2D1C(c); // 800D6674
  cmps(c,0,(int32_t)c->r[3],0); // 800D6678
  if (crb(c,2)) { goto L_800D66A0; } // 800D667C
  c->r[0]=0u+0x00000000u; // 800D6680
  W32(c->r[30]+0x00000600u,c->r[0]); // 800D6684
  c->r[3]=c->r[30]|c->r[30]; // 800D6688
  c->lr=0x800D6690u; f_800DA994(c); // 800D668C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6690
  if (!crb(c,2)) { goto L_800D66A0; } // 800D6694
  c->r[3]=c->r[30]|c->r[30]; // 800D6698
  c->lr=0x800D66A0u; f_800DB304(c); // 800D669C
L_800D66A0:;
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D66A0
  c->r[3]=c->r[1]+0x00000008u; // 800D66A4
  c->lr=0x800D66ACu; f_800C2FB8(c); // 800D66A8
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D66AC
  c->r[3]=c->r[30]|c->r[30]; // 800D66B0
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D66B4
  c->r[4]=c->r[1]+0x00000008u; // 800D66B8
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D66BC
  c->lr=0x800D66C4u; f_800634E8(c); // 800D66C0
L_800D66C4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D66C4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D66C8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D66CC
  c->lr=c->r[0]; // 800D66D0
  c->r[1]=c->r[1]+0x00000040u; // 800D66D4
  return; // 800D66D8
}

// fn_800D66DC
void f_800D66DC(Ctx* __restrict c) {
  trace_call(0x800D66DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66DC
  c->r[0]=c->lr; // 800D66E0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D66E4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D66E8
  c->r[31]=c->r[3]|c->r[3]; // 800D66EC
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 800D66F0
  c->r[0]=R32(c->r[4]+0x000000A4u); // 800D66F4
  cmps(c,0,(int32_t)c->r[0],1); // 800D66F8
  if (!crb(c,2)) { goto L_800D6724; } // 800D66FC
  c->r[0]=R32(c->r[3]+0x000005CCu); // 800D6700
  c->r[4]=0u+0x00000000u; // 800D6704
  W32(c->r[3]+0x000005C8u,c->r[4]); // 800D6708
  cmps(c,0,(int32_t)c->r[0],0); // 800D670C
  if (!crb(c,2)) { goto L_800D671C; } // 800D6710
  c->lr=0x800D6718u; f_800DB36C(c); // 800D6714
  goto L_800D6768; // 800D6718
L_800D671C:;
  c->lr=0x800D6720u; f_80095124(c); // 800D671C
  goto L_800D6768; // 800D6720
L_800D6724:;
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800D6724
  c->r[4]=c->r[1]+0x00000018u; // 800D6728
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D672C
  c->ctr=c->r[12]; // 800D6730
  if (true) { c->lr=0x800D6738u; dispatch(c,c->ctr); } // 800D6734
  c->r[4]=c->r[3]|c->r[3]; // 800D6738
  c->r[3]=c->r[1]+0x00000008u; // 800D673C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6740
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6744
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6748
  c->lr=0x800D6750u; f_8005FD70(c); // 800D674C
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6750
  c->r[3]=c->r[31]|c->r[31]; // 800D6754
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6758
  c->r[4]=c->r[1]+0x00000008u; // 800D675C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6760
  c->lr=0x800D6768u; f_800634E8(c); // 800D6764
L_800D6768:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D6768
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D676C
  c->lr=c->r[0]; // 800D6770
  c->r[1]=c->r[1]+0x00000050u; // 800D6774
  return; // 800D6778
}

// fn_800D677C
void f_800D677C(Ctx* __restrict c) {
  trace_call(0x800D677Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D677C
  c->r[0]=c->lr; // 800D6780
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6788
  c->r[31]=c->r[3]|c->r[3]; // 800D678C
  c->lr=0x800D6794u; f_800DBAE4(c); // 800D6790
  c->r[0]=0u+0x00000000u; // 800D6794
  W32(c->r[31]+0x000005C4u,c->r[0]); // 800D6798
  c->r[3]=c->r[31]|c->r[31]; // 800D679C
  c->r[4]=0u+0x000036B2u; // 800D67A0
  c->r[5]=0u+0x00000001u; // 800D67A4
  c->lr=0x800D67ACu; f_80064744(c); // 800D67A8
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D67AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D67B0
  if (crb(c,2)) { goto L_800D67C4; } // 800D67B4
  cmps(c,0,(int32_t)c->r[0],2); // 800D67B8
  if (crb(c,2)) { goto L_800D67DC; } // 800D67BC
  goto L_800D67E4; // 800D67C0
L_800D67C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D67C4
  c->lr=0x800D67CCu; f_80094A38(c); // 800D67C8
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D67CC
  c->r[0]=c->r[0]|0x40000000u; // 800D67D0
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D67D4
  goto L_800D67E4; // 800D67D8
L_800D67DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D67DC
  c->lr=0x800D67E4u; f_80095784(c); // 800D67E0
L_800D67E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D67E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D67E8
  c->lr=c->r[0]; // 800D67EC
  c->r[1]=c->r[1]+0x00000010u; // 800D67F0
  return; // 800D67F4
}

// fn_800D67F8
void f_800D67F8(Ctx* __restrict c) {
  trace_call(0x800D67F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D67F8
  c->r[0]=c->lr; // 800D67FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6804
  c->r[31]=c->r[3]|c->r[3]; // 800D6808
  c->lr=0x800D6810u; f_800DBAE4(c); // 800D680C
  c->r[0]=0u+0x00000001u; // 800D6810
  W32(c->r[31]+0x000005C4u,c->r[0]); // 800D6814
  c->r[3]=c->r[31]|c->r[31]; // 800D6818
  c->r[4]=0u+0x000036B3u; // 800D681C
  c->r[5]=0u+0x00000001u; // 800D6820
  c->lr=0x800D6828u; f_80064744(c); // 800D6824
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D6828
  cmps(c,0,(int32_t)c->r[0],1); // 800D682C
  if (crb(c,2)) { goto L_800D6840; } // 800D6830
  cmps(c,0,(int32_t)c->r[0],2); // 800D6834
  if (crb(c,2)) { goto L_800D6858; } // 800D6838
  goto L_800D6860; // 800D683C
L_800D6840:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6840
  c->lr=0x800D6848u; f_80094A38(c); // 800D6844
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D6848
  c->r[0]=c->r[0]|0x40000000u; // 800D684C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D6850
  goto L_800D6860; // 800D6854
L_800D6858:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6858
  c->lr=0x800D6860u; f_80095784(c); // 800D685C
L_800D6860:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6864
  c->lr=c->r[0]; // 800D6868
  c->r[1]=c->r[1]+0x00000010u; // 800D686C
  return; // 800D6870
}

// fn_800D6874
void f_800D6874(Ctx* __restrict c) {
  trace_call(0x800D6874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6874
  c->r[0]=c->lr; // 800D6878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D687C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6880
  c->r[31]=c->r[3]|c->r[3]; // 800D6884
  c->lr=0x800D688Cu; f_800DBAE4(c); // 800D6888
  c->r[0]=0u+0x00000002u; // 800D688C
  W32(c->r[31]+0x000005C4u,c->r[0]); // 800D6890
  c->r[3]=c->r[31]|c->r[31]; // 800D6894
  c->r[4]=0u+0x000036B4u; // 800D6898
  c->r[5]=0u+0x00000001u; // 800D689C
  c->lr=0x800D68A4u; f_80064744(c); // 800D68A0
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D68A4
  cmps(c,0,(int32_t)c->r[0],1); // 800D68A8
  if (crb(c,2)) { goto L_800D68BC; } // 800D68AC
  cmps(c,0,(int32_t)c->r[0],2); // 800D68B0
  if (crb(c,2)) { goto L_800D68D4; } // 800D68B4
  goto L_800D68DC; // 800D68B8
L_800D68BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D68BC
  c->lr=0x800D68C4u; f_80094A38(c); // 800D68C0
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D68C4
  c->r[0]=c->r[0]|0x40000000u; // 800D68C8
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D68CC
  goto L_800D68DC; // 800D68D0
L_800D68D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D68D4
  c->lr=0x800D68DCu; f_80095784(c); // 800D68D8
L_800D68DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D68DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D68E0
  c->lr=c->r[0]; // 800D68E4
  c->r[1]=c->r[1]+0x00000010u; // 800D68E8
  return; // 800D68EC
}

// fn_800D68F0
void f_800D68F0(Ctx* __restrict c) {
  trace_call(0x800D68F0u);
  {uint32_t ea=c->r[1]+0xFFFFFBB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68F0
  c->r[0]=c->lr; // 800D68F4
  W32(c->r[1]+0x00000454u,c->r[0]); // 800D68F8
  c->r[11]=c->r[1]+0x00000420u; // 800D68FC
  {uint32_t ea=c->r[1]+0x00000440u; WF64(ea,c->f[31]);} // 800D6900
  {uint32_t ea=c->r[1]+0x00000448u; psq_store(c,31,ea,0,0);} // 800D6904
  {uint32_t ea=c->r[1]+0x00000430u; WF64(ea,c->f[30]);} // 800D6908
  {uint32_t ea=c->r[1]+0x00000438u; psq_store(c,30,ea,0,0);} // 800D690C
  {uint32_t ea=c->r[1]+0x00000420u; WF64(ea,c->f[29]);} // 800D6910
  {uint32_t ea=c->r[1]+0x00000428u; psq_store(c,29,ea,0,0);} // 800D6914
  c->lr=0x800D691Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6918
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D691C
  c->r[31]=c->r[3]|c->r[3]; // 800D6920
  cmps(c,0,(int32_t)c->r[4],0); // 800D6924
  if (crb(c,2)) { goto L_800D6934; } // 800D6928
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D692C
  goto L_800D6938; // 800D6930
L_800D6934:;
  c->r[0]=0u+0x00000000u; // 800D6934
L_800D6938:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D6938
  if (!crb(c,2)) { goto L_800D6C40; } // 800D693C
  c->r[3]=c->r[31]|c->r[31]; // 800D6940
  c->lr=0x800D6948u; f_800DBAE4(c); // 800D6944
  c->r[3]=R32(c->r[31]+0x00000420u); // 800D6948
  c->r[26]=0u+0x00000000u; // 800D694C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D6950
  cmps(c,0,(int32_t)c->r[0],0); // 800D6954
  if (!crb(c,0)) { goto L_800D6964; } // 800D6958
  c->r[26]=c->r[26]|0x00000002u; // 800D695C
  goto L_800D696C; // 800D6960
L_800D6964:;
  if (!crb(c,1)) { goto L_800D696C; } // 800D6964
  c->r[26]=c->r[26]|0x00000001u; // 800D6968
L_800D696C:;
  c->r[3]=c->r[1]+0x000000B0u; // 800D696C
  c->lr=0x800D6974u; f_8006585C(c); // 800D6970
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D6974
  c->r[4]=c->r[31]|c->r[31]; // 800D6978
  c->r[3]=c->r[1]+0x0000006Cu; // 800D697C
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D6980
  c->ctr=c->r[12]; // 800D6984
  if (true) { c->lr=0x800D698Cu; dispatch(c,c->ctr); } // 800D6988
  {uint32_t ea=c->r[31]+0x000001B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D698C
  c->r[3]=c->r[1]+0x00000060u; // 800D6990
  {uint32_t ea=c->r[31]+0x000001C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6994
  {uint32_t ea=c->r[31]+0x000001D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6998
  c->lr=0x800D69A0u; f_8005FD70(c); // 800D699C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D69A0
  c->r[3]=c->r[1]+0x00000014u; // 800D69A4
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D69A8
  c->r[4]=c->r[1]+0x00000060u; // 800D69AC
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D69B0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D69B4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800D69B8
  c->lr=0x800D69C0u; f_800D6C88(c); // 800D69BC
  c->r[3]=c->r[1]+0x00000054u; // 800D69C0
  c->r[4]=c->r[1]+0x0000006Cu; // 800D69C4
  c->r[5]=c->r[1]+0x00000014u; // 800D69C8
  c->lr=0x800D69D0u; f_8005ED10(c); // 800D69CC
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D69D0
  c->r[3]=c->r[1]+0x00000008u; // 800D69D4
  c->r[4]=c->r[1]+0x00000060u; // 800D69D8
  c->lr=0x800D69E0u; f_800D6C88(c); // 800D69DC
  c->r[3]=c->r[1]+0x00000048u; // 800D69E0
  c->r[4]=c->r[1]+0x0000006Cu; // 800D69E4
  c->r[5]=c->r[1]+0x00000008u; // 800D69E8
  c->lr=0x800D69F0u; f_800772A0(c); // 800D69EC
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 800D69F0
  if (!crb(c,2)) { goto L_800D6A14; } // 800D69F4
  c->r[3]=c->r[1]+0x0000006Cu; // 800D69F8
  c->r[4]=c->r[1]+0x00000054u; // 800D69FC
  c->r[5]=0u+0x00000000u; // 800D6A00
  c->lr=0x800D6A08u; f_8005EB94(c); // 800D6A04
  cmps(c,0,(int32_t)c->r[3],0); // 800D6A08
  if (crb(c,2)) { goto L_800D6A14; } // 800D6A0C
  c->r[26]=c->r[26]|0x00000001u; // 800D6A10
L_800D6A14:;
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 800D6A14
  if (!crb(c,2)) { goto L_800D6A38; } // 800D6A18
  c->r[3]=c->r[1]+0x0000006Cu; // 800D6A1C
  c->r[4]=c->r[1]+0x00000048u; // 800D6A20
  c->r[5]=0u+0x00000000u; // 800D6A24
  c->lr=0x800D6A2Cu; f_8005EB94(c); // 800D6A28
  cmps(c,0,(int32_t)c->r[3],0); // 800D6A2C
  if (crb(c,2)) { goto L_800D6A38; } // 800D6A30
  c->r[26]=c->r[26]|0x00000002u; // 800D6A34
L_800D6A38:;
  cmpu(c,0,c->r[26],0x00000003u); // 800D6A38
  if (crb(c,2)) { goto L_800D6B44; } // 800D6A3C
  c->lr=0x800D6A44u; f_8008570C(c); // 800D6A40
  c->r[27]=R32(c->r[3]+0x00000000u); // 800D6A44
  c->r[30]=c->r[3]|c->r[3]; // 800D6A48
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[29]=c->ps1[29]=RF32(ea);} // 800D6A4C
  {uint32_t ea=c->r[2]+0xFFFFA4BCu; c->f[31]=c->ps1[31]=RF32(ea);} // 800D6A50
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D6A54
  goto L_800D6B34; // 800D6A58
L_800D6A5C:;
  c->r[29]=R32(c->r[28]+0x0000034Cu); // 800D6A5C
  c->lr=0x800D6A64u; f_800D5D40(c); // 800D6A60
  c->r[0]=c->r[29]-c->r[3]; // 800D6A64
  c->r[0]=cntlz(c->r[0]); // 800D6A68
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800D6A6C
  if (crb(c,2)) { goto L_800D6B30; } // 800D6A70
  cmpu(c,0,c->r[28],c->r[31]); // 800D6A74
  if (crb(c,2)) { goto L_800D6B30; } // 800D6A78
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800D6A7C
  c->r[4]=c->r[28]|c->r[28]; // 800D6A80
  c->r[3]=c->r[1]+0x0000003Cu; // 800D6A84
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D6A88
  c->ctr=c->r[12]; // 800D6A8C
  if (true) { c->lr=0x800D6A94u; dispatch(c,c->ctr); } // 800D6A90
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6A94
  c->r[3]=c->r[1]+0x00000030u; // 800D6A98
  c->r[4]=c->r[1]+0x0000003Cu; // 800D6A9C
  c->r[5]=c->r[1]+0x0000006Cu; // 800D6AA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 800D6AA4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800D6AA8
  c->lr=0x800D6AB0u; f_800772A0(c); // 800D6AAC
  c->r[3]=c->r[1]+0x00000030u; // 800D6AB0
  c->lr=0x800D6AB8u; f_80084FAC(c); // 800D6AB4
  fcmp(c,0,c->f[1],c->f[30]); // 800D6AB8
  if (!crb(c,0)) { goto L_800D6B30; } // 800D6ABC
  c->r[3]=c->r[1]+0x00000020u; // 800D6AC0
  c->r[4]=c->r[1]+0x0000003Cu; // 800D6AC4
  c->lr=0x800D6ACCu; f_8005DC84(c); // 800D6AC8
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 800D6ACC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 800D6AD0
  if (!crb(c,2)) { goto L_800D6B00; } // 800D6AD4
  c->r[3]=c->r[1]+0x00000094u; // 800D6AD8
  c->r[4]=c->r[1]+0x0000006Cu; // 800D6ADC
  c->r[5]=c->r[1]+0x00000054u; // 800D6AE0
  c->lr=0x800D6AE8u; f_800D6CC8(c); // 800D6AE4
  c->r[3]=c->r[1]+0x00000020u; // 800D6AE8
  c->r[4]=c->r[1]+0x00000094u; // 800D6AEC
  c->lr=0x800D6AF4u; f_800D6D48(c); // 800D6AF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D6AF4
  if (crb(c,2)) { goto L_800D6B00; } // 800D6AF8
  c->r[26]=c->r[26]|0x00000001u; // 800D6AFC
L_800D6B00:;
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 800D6B00
  if (!crb(c,2)) { goto L_800D6B30; } // 800D6B04
  c->r[3]=c->r[1]+0x00000078u; // 800D6B08
  c->r[4]=c->r[1]+0x0000006Cu; // 800D6B0C
  c->r[5]=c->r[1]+0x00000048u; // 800D6B10
  c->lr=0x800D6B18u; f_800D6CC8(c); // 800D6B14
  c->r[3]=c->r[1]+0x00000020u; // 800D6B18
  c->r[4]=c->r[1]+0x00000078u; // 800D6B1C
  c->lr=0x800D6B24u; f_800D6D48(c); // 800D6B20
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B24
  if (crb(c,2)) { goto L_800D6B30; } // 800D6B28
  c->r[26]=c->r[26]|0x00000002u; // 800D6B2C
L_800D6B30:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 800D6B30
L_800D6B34:;
  c->r[28]=R32(c->r[27]+0x00000008u); // 800D6B34
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D6B38
  cmpu(c,0,c->r[28],c->r[0]); // 800D6B3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D6A5C; } // 800D6B40
L_800D6B44:;
  cmpu(c,0,c->r[26],0x00000003u); // 800D6B44
  if (!crb(c,2)) { goto L_800D6B80; } // 800D6B48
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D6B4C
  c->r[30]=0u+0x00000000u; // 800D6B50
  W32(c->r[31]+0x000005C8u,c->r[30]); // 800D6B54
  cmps(c,0,(int32_t)c->r[0],2); // 800D6B58
  if (!crb(c,2)) { goto L_800D6B70; } // 800D6B5C
  c->r[3]=c->r[31]|c->r[31]; // 800D6B60
  c->lr=0x800D6B68u; f_800D6E20(c); // 800D6B64
  W32(c->r[1]+0x000003F8u,c->r[30]); // 800D6B68
  goto L_800D6C58; // 800D6B6C
L_800D6B70:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6B70
  c->lr=0x800D6B78u; f_800DB36C(c); // 800D6B74
  W32(c->r[1]+0x000003F8u,c->r[30]); // 800D6B78
  goto L_800D6C58; // 800D6B7C
L_800D6B80:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 800D6B80
  if (crb(c,2)) { goto L_800D6BA4; } // 800D6B84
  c->r[0]=0u+0x00000001u; // 800D6B88
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D6B8C
  c->r[3]=c->r[31]|c->r[31]; // 800D6B90
  c->r[4]=0u+0x000036CFu; // 800D6B94
  c->r[5]=0u+0x00000001u; // 800D6B98
  c->lr=0x800D6BA0u; f_80064744(c); // 800D6B9C
  goto L_800D6C30; // 800D6BA0
L_800D6BA4:;
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 800D6BA4
  if (crb(c,2)) { goto L_800D6BC8; } // 800D6BA8
  c->r[0]=0u+0x00000000u; // 800D6BAC
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D6BB0
  c->r[3]=c->r[31]|c->r[31]; // 800D6BB4
  c->r[4]=0u+0x000036D0u; // 800D6BB8
  c->r[5]=0u+0x00000001u; // 800D6BBC
  c->lr=0x800D6BC4u; f_80064744(c); // 800D6BC0
  goto L_800D6C30; // 800D6BC4
L_800D6BC8:;
  c->lr=0x800D6BCCu; f_803B220C(c); // 800D6BC8
  c->r[3]=c->r[3]^0x80000000u; // 800D6BCC
  c->r[0]=0u+0x43300000u; // 800D6BD0
  W32(c->r[1]+0x00000404u,c->r[3]); // 800D6BD4
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[3]=RF64(ea);} // 800D6BD8
  W32(c->r[1]+0x00000400u,c->r[0]); // 800D6BDC
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6BE0
  {uint32_t ea=c->r[1]+0x00000400u; c->f[2]=RF64(ea);} // 800D6BE4
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6BE8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D6BEC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D6BF0
  fcmp(c,0,c->f[1],c->f[0]); // 800D6BF4
  if (!crb(c,0)) { goto L_800D6C18; } // 800D6BF8
  c->r[0]=0u+0x00000000u; // 800D6BFC
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D6C00
  c->r[3]=c->r[31]|c->r[31]; // 800D6C04
  c->r[4]=0u+0x000036D0u; // 800D6C08
  c->r[5]=0u+0x00000001u; // 800D6C0C
  c->lr=0x800D6C14u; f_80064744(c); // 800D6C10
  goto L_800D6C30; // 800D6C14
L_800D6C18:;
  c->r[0]=0u+0x00000001u; // 800D6C18
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D6C1C
  c->r[3]=c->r[31]|c->r[31]; // 800D6C20
  c->r[4]=0u+0x000036CFu; // 800D6C24
  c->r[5]=0u+0x00000001u; // 800D6C28
  c->lr=0x800D6C30u; f_80064744(c); // 800D6C2C
L_800D6C30:;
  c->r[0]=0u+0x00000000u; // 800D6C30
  W32(c->r[31]+0x00000624u,c->r[0]); // 800D6C34
  W32(c->r[1]+0x000003F8u,c->r[0]); // 800D6C38
  goto L_800D6C58; // 800D6C3C
L_800D6C40:;
  c->r[3]=c->r[3]+0x00000354u; // 800D6C40
  c->lr=0x800D6C48u; f_800667AC(c); // 800D6C44
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C48
  if (crb(c,2)) { goto L_800D6C58; } // 800D6C4C
  c->r[3]=c->r[31]|c->r[31]; // 800D6C50
  c->lr=0x800D6C58u; f_800DB36C(c); // 800D6C54
L_800D6C58:;
  c->r[11]=c->r[1]+0x00000420u; // 800D6C58
  {uint32_t ea=c->r[1]+0x00000448u; psq_load(c,31,ea,0,0);} // 800D6C5C
  {uint32_t ea=c->r[1]+0x00000440u; c->f[31]=RF64(ea);} // 800D6C60
  {uint32_t ea=c->r[1]+0x00000438u; psq_load(c,30,ea,0,0);} // 800D6C64
  {uint32_t ea=c->r[1]+0x00000430u; c->f[30]=RF64(ea);} // 800D6C68
  {uint32_t ea=c->r[1]+0x00000428u; psq_load(c,29,ea,0,0);} // 800D6C6C
  {uint32_t ea=c->r[1]+0x00000420u; c->f[29]=RF64(ea);} // 800D6C70
  c->lr=0x800D6C78u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6C74
  c->r[0]=R32(c->r[1]+0x00000454u); // 800D6C78
  c->lr=c->r[0]; // 800D6C7C
  c->r[1]=c->r[1]+0x00000450u; // 800D6C80
  return; // 800D6C84
}

// fn_800D6C88
void f_800D6C88(Ctx* __restrict c) {
  trace_call(0x800D6C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C88
  c->r[0]=c->lr; // 800D6C8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C90
  c->r[5]=c->r[1]+0x00000008u; // 800D6C94
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800D6C98
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6C9C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 800D6CA0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 800D6CA4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6CA8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 800D6CAC
  c->r[4]=c->r[5]|c->r[5]; // 800D6CB0
  c->lr=0x800D6CB8u; f_8005CD7C(c); // 800D6CB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6CB8
  c->lr=c->r[0]; // 800D6CBC
  c->r[1]=c->r[1]+0x00000020u; // 800D6CC0
  return; // 800D6CC4
}

// fn_800D6CC8
void f_800D6CC8(Ctx* __restrict c) {
  trace_call(0x800D6CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6CC8
  c->r[0]=c->lr; // 800D6CCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6CD0
  c->r[11]=c->r[1]+0x00000020u; // 800D6CD4
  c->lr=0x800D6CDCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6CD8
  c->r[29]=c->r[3]|c->r[3]; // 800D6CDC
  c->r[30]=c->r[4]|c->r[4]; // 800D6CE0
  c->r[31]=c->r[5]|c->r[5]; // 800D6CE4
  c->lr=0x800D6CECu; f_8005DC84(c); // 800D6CE8
  c->r[4]=c->r[31]|c->r[31]; // 800D6CEC
  c->r[5]=c->r[30]|c->r[30]; // 800D6CF0
  c->r[3]=c->r[29]+0x0000000Cu; // 800D6CF4
  c->lr=0x800D6CFCu; f_800772A0(c); // 800D6CF8
  c->r[3]=c->r[29]+0x0000000Cu; // 800D6CFC
  c->lr=0x800D6D04u; f_80084FAC(c); // 800D6D00
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800D6D04
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D08
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 800D6D0C
  fcmp(c,0,c->f[2],c->f[0]); // 800D6D10
  if (!crb(c,1)) { goto L_800D6D2C; } // 800D6D14
  c->r[3]=c->r[29]+0x0000000Cu; // 800D6D18
  c->r[5]=0u+0x806A0000u; // 800D6D1C
  c->r[4]=c->r[3]|c->r[3]; // 800D6D20
  c->r[5]=c->r[5]+0x00000AA8u; // 800D6D24
  c->lr=0x800D6D2Cu; f_8030E0BC(c); // 800D6D28
L_800D6D2C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6D2C
  c->r[3]=c->r[29]|c->r[29]; // 800D6D30
  c->lr=0x800D6D38u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6D34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6D38
  c->lr=c->r[0]; // 800D6D3C
  c->r[1]=c->r[1]+0x00000020u; // 800D6D40
  return; // 800D6D44
}

// fn_800D6D48
void f_800D6D48(Ctx* __restrict c) {
  trace_call(0x800D6D48u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D48
  c->r[0]=c->lr; // 800D6D4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6D50
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D6D54
  c->r[31]=c->r[4]|c->r[4]; // 800D6D58
  c->r[5]=c->r[31]|c->r[31]; // 800D6D5C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D6D60
  c->r[30]=c->r[3]|c->r[3]; // 800D6D64
  c->r[4]=c->r[30]|c->r[30]; // 800D6D68
  c->r[3]=c->r[1]+0x00000020u; // 800D6D6C
  c->lr=0x800D6D74u; f_800772A0(c); // 800D6D70
  c->r[3]=c->r[31]+0x0000000Cu; // 800D6D74
  c->r[4]=c->r[1]+0x00000020u; // 800D6D78
  c->lr=0x800D6D80u; f_800B3F44(c); // 800D6D7C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D80
  {uint32_t ea=c->r[31]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D84
  fcmp(c,0,c->f[1],c->f[0]); // 800D6D88
  if (!crb(c,1)) { goto L_800D6D94; } // 800D6D8C
  goto L_800D6D98; // 800D6D90
L_800D6D94:;
  c->f[1]=c->f[0]; // 800D6D94
L_800D6D98:;
  fcmp(c,0,c->f[2],c->f[1]); // 800D6D98
  if (!crb(c,0)) { goto L_800D6DA4; } // 800D6D9C
  goto L_800D6DA8; // 800D6DA0
L_800D6DA4:;
  c->f[2]=c->f[1]; // 800D6DA4
L_800D6DA8:;
  c->f[1]=c->f[2]; // 800D6DA8
  c->r[3]=c->r[1]+0x00000014u; // 800D6DAC
  c->r[4]=c->r[31]+0x0000000Cu; // 800D6DB0
  c->lr=0x800D6DB8u; f_800D6C88(c); // 800D6DB4
  c->r[4]=c->r[31]|c->r[31]; // 800D6DB8
  c->r[3]=c->r[1]+0x0000002Cu; // 800D6DBC
  c->r[5]=c->r[1]+0x00000014u; // 800D6DC0
  c->lr=0x800D6DC8u; f_8005ED10(c); // 800D6DC4
  c->r[5]=c->r[30]|c->r[30]; // 800D6DC8
  c->r[3]=c->r[1]+0x00000008u; // 800D6DCC
  c->r[4]=c->r[1]+0x0000002Cu; // 800D6DD0
  c->lr=0x800D6DD8u; f_800772A0(c); // 800D6DD4
  c->r[3]=c->r[1]+0x00000008u; // 800D6DD8
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800D6DDC
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6DE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6DE4
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6DE8
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800D6DEC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6DF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800D6DF4
  fcmp(c,0,c->f[1],c->f[0]); // 800D6DF8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D6DFC
  c->r[3]=c->cr; // 800D6E00
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D6E04
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D6E08
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800D6E0C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6E10
  c->lr=c->r[0]; // 800D6E14
  c->r[1]=c->r[1]+0x00000040u; // 800D6E18
  return; // 800D6E1C
}

// fn_800D6E20
void f_800D6E20(Ctx* __restrict c) {
  trace_call(0x800D6E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E20
  c->r[0]=c->lr; // 800D6E24
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6E28
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6E2C
  c->r[31]=c->r[1]|c->r[1]; // 800D6E30
  c->r[28]=c->r[3]|c->r[3]; // 800D6E34
  c->lr=0x800D6E3Cu; f_8007AE58(c); // 800D6E38
  c->r[4]=c->r[3]|c->r[3]; // 800D6E3C
  c->r[3]=c->r[28]|c->r[28]; // 800D6E40
  c->lr=0x800D6E48u; f_80062F4C(c); // 800D6E44
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D6E48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D6E4C
  c->r[3]=c->r[28]+c->r[0]; // 800D6E50
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D6E54
  cmps(c,0,(int32_t)c->r[29],0); // 800D6E58
  if (crb(c,2)) { goto L_800D6E84; } // 800D6E5C
  c->r[30]=0u+0x00000000u; // 800D6E60
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D6E64
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D6E68
  c->lr=0x800D6E70u; f_8007AE58(c); // 800D6E6C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D6E70
  c->r[0]=c->r[13]+0xFFFF8220u; // 800D6E74
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D6E78
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D6E7C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D6E80
L_800D6E84:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D6E84
  c->r[0]=0u+0x00000000u; // 800D6E88
  c->r[3]=c->r[28]|c->r[28]; // 800D6E8C
  c->r[4]=c->r[29]|c->r[29]; // 800D6E90
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D6E94
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D6E98
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D6E9C
  c->lr=0x800D6EA4u; f_8006306C(c); // 800D6EA0
  c->r[10]=c->r[31]|c->r[31]; // 800D6EA4
  c->r[3]=c->r[29]|c->r[29]; // 800D6EA8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6EAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D6EB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D6EB4
  c->r[1]=c->r[10]|c->r[10]; // 800D6EB8
  c->lr=c->r[0]; // 800D6EBC
  return; // 800D6EC0
}

// fn_800D6EC4
void f_800D6EC4(Ctx* __restrict c) {
  trace_call(0x800D6EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6EC4
  c->r[0]=c->lr; // 800D6EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6ED0
  c->r[31]=c->r[3]|c->r[3]; // 800D6ED4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D6ED8
  cmps(c,0,(int32_t)c->r[4],0); // 800D6EDC
  if (crb(c,2)) { goto L_800D6EEC; } // 800D6EE0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D6EE4
  goto L_800D6EF0; // 800D6EE8
L_800D6EEC:;
  c->r[0]=0u+0x00000000u; // 800D6EEC
L_800D6EF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D6EF0
  if (!crb(c,2)) { goto L_800D6F28; } // 800D6EF4
  c->r[3]=c->r[31]|c->r[31]; // 800D6EF8
  c->lr=0x800D6F00u; f_800DBAE4(c); // 800D6EFC
  c->r[3]=c->r[31]|c->r[31]; // 800D6F00
  c->r[4]=0u+0x000036B5u; // 800D6F04
  c->r[5]=0u+0x00000001u; // 800D6F08
  c->lr=0x800D6F10u; f_80064744(c); // 800D6F0C
  c->r[0]=R32(c->r[31]+0x000005D0u); // 800D6F10
  cmps(c,0,(int32_t)c->r[0],1); // 800D6F14
  if (!crb(c,2)) { goto L_800D6F5C; } // 800D6F18
  c->r[3]=c->r[31]|c->r[31]; // 800D6F1C
  c->lr=0x800D6F24u; f_800DA588(c); // 800D6F20
  goto L_800D6F5C; // 800D6F24
L_800D6F28:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 800D6F28
  cmps(c,0,(int32_t)c->r[0],1); // 800D6F2C
  if (!crb(c,2)) { goto L_800D6F3C; } // 800D6F30
  c->r[3]=c->r[31]|c->r[31]; // 800D6F34
  c->lr=0x800D6F3Cu; f_800DA874(c); // 800D6F38
L_800D6F3C:;
  c->r[3]=c->r[31]+0x00000354u; // 800D6F3C
  c->lr=0x800D6F44u; f_800667AC(c); // 800D6F40
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F44
  if (crb(c,2)) { goto L_800D6F5C; } // 800D6F48
  c->r[0]=0u+0x00000000u; // 800D6F4C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 800D6F50
  c->r[3]=c->r[31]|c->r[31]; // 800D6F54
  c->lr=0x800D6F5Cu; f_800DB36C(c); // 800D6F58
L_800D6F5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6F5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6F60
  c->lr=c->r[0]; // 800D6F64
  c->r[1]=c->r[1]+0x00000010u; // 800D6F68
  return; // 800D6F6C
}

// fn_800D6F70
void f_800D6F70(Ctx* __restrict c) {
  trace_call(0x800D6F70u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F70
  c->r[0]=c->lr; // 800D6F74
  W32(c->r[1]+0x00000164u,c->r[0]); // 800D6F78
  c->r[11]=c->r[1]+0x00000160u; // 800D6F7C
  c->lr=0x800D6F84u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6F80
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D6F84
  c->r[31]=c->r[3]|c->r[3]; // 800D6F88
  cmps(c,0,(int32_t)c->r[0],0); // 800D6F8C
  if (crb(c,2)) { goto L_800D6FB8; } // 800D6F90
  cmps(c,0,(int32_t)c->r[0],3); // 800D6F94
  if (crb(c,2)) { goto L_800D7140; } // 800D6F98
  cmps(c,0,(int32_t)c->r[0],1); // 800D6F9C
  if (crb(c,2)) { goto L_800D7294; } // 800D6FA0
  cmps(c,0,(int32_t)c->r[0],4); // 800D6FA4
  if (crb(c,2)) { goto L_800D752C; } // 800D6FA8
  cmps(c,0,(int32_t)c->r[0],2); // 800D6FAC
  if (crb(c,2)) { goto L_800D77A4; } // 800D6FB0
  goto L_800D78B4; // 800D6FB4
L_800D6FB8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D6FB8
  cmps(c,0,(int32_t)c->r[4],0); // 800D6FBC
  if (crb(c,2)) { goto L_800D6FCC; } // 800D6FC0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D6FC4
  goto L_800D6FD0; // 800D6FC8
L_800D6FCC:;
  c->r[0]=0u+0x00000000u; // 800D6FCC
L_800D6FD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D6FD0
  if (!crb(c,2)) { goto L_800D710C; } // 800D6FD4
  c->r[3]=c->r[31]|c->r[31]; // 800D6FD8
  c->lr=0x800D6FE0u; f_800DBAE4(c); // 800D6FDC
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D6FE0
  c->r[4]=R32(c->r[31]+0x00000600u); // 800D6FE4
  c->lr=0x800D6FECu; f_800C2EE0(c); // 800D6FE8
  c->r[4]=0u+0x80690000u; // 800D6FEC
  c->r[4]=c->r[4]+0xFFFFE9E0u; // 800D6FF0
  c->r[4]=c->r[4]+0x0000000Bu; // 800D6FF4
  c->lr=0x800D6FFCu; f_803B393C(c); // 800D6FF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D6FFC
  if (!crb(c,2)) { goto L_800D7010; } // 800D7000
  c->r[0]=0u+0x00000001u; // 800D7004
  W8(c->r[31]+0x00000628u,c->r[0]); // 800D7008
  goto L_800D7018; // 800D700C
L_800D7010:;
  c->r[0]=0u+0x00000000u; // 800D7010
  W8(c->r[31]+0x00000628u,c->r[0]); // 800D7014
L_800D7018:;
  c->r[4]=R32(c->r[31]+0x00000600u); // 800D7018
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D701C
  c->r[0]=c->r[4]+0x00000001u; // 800D7020
  W32(c->r[31]+0x00000600u,c->r[0]); // 800D7024
  c->lr=0x800D702Cu; f_800C2EE0(c); // 800D7028
  W32(c->r[31]+0x0000062Cu,c->r[3]); // 800D702C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D7030
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D7034
  if (!crb(c,2)) { goto L_800D7044; } // 800D7038
  c->r[0]=0u+0x00000000u; // 800D703C
  W32(c->r[31]+0x0000062Cu,c->r[0]); // 800D7040
L_800D7044:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7044
  c->r[4]=0u+0x000036C0u; // 800D7048
  c->r[5]=0u+0x00000001u; // 800D704C
  c->lr=0x800D7054u; f_80064744(c); // 800D7050
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7054
  c->lr=0x800D705Cu; f_800C2E40(c); // 800D7058
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D705C
  cmps(c,0,(int32_t)c->r[0],3); // 800D7060
  if (!crb(c,2)) { goto L_800D7098; } // 800D7064
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7068
  c->r[4]=c->r[3]+0x00000002u; // 800D706C
  c->r[3]=c->r[30]|c->r[30]; // 800D7070
  c->lr=0x800D7078u; f_800C30A0(c); // 800D7074
  c->r[4]=c->r[3]|c->r[3]; // 800D7078
  c->r[3]=c->r[30]+0x00000004u; // 800D707C
  c->r[5]=0u+0x00000000u; // 800D7080
  c->lr=0x800D7088u; f_800A0B44(c); // 800D7084
  c->r[4]=c->r[3]|c->r[3]; // 800D7088
  c->r[3]=c->r[31]|c->r[31]; // 800D708C
  c->lr=0x800D7094u; f_800DAC88(c); // 800D7090
  goto L_800D70C4; // 800D7094
L_800D7098:;
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7098
  c->r[4]=c->r[3]+0x00000001u; // 800D709C
  c->r[3]=c->r[30]|c->r[30]; // 800D70A0
  c->lr=0x800D70A8u; f_800C30A0(c); // 800D70A4
  c->r[4]=c->r[3]|c->r[3]; // 800D70A8
  c->r[3]=c->r[30]+0x00000004u; // 800D70AC
  c->r[5]=0u+0x00000000u; // 800D70B0
  c->lr=0x800D70B8u; f_800A0B44(c); // 800D70B4
  c->r[4]=c->r[3]|c->r[3]; // 800D70B8
  c->r[3]=c->r[31]|c->r[31]; // 800D70BC
  c->lr=0x800D70C4u; f_800DAC88(c); // 800D70C0
L_800D70C4:;
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 800D70C4
  cmpu(c,0,c->r[0],0x00000007u); // 800D70C8
  if (crb(c,1)) { goto L_800D70DC; } // 800D70CC
  c->r[0]=0u+0x00000001u; // 800D70D0
  W8(c->r[31]+0x00000635u,c->r[0]); // 800D70D4
  goto L_800D70E4; // 800D70D8
L_800D70DC:;
  c->r[0]=0u+0x00000000u; // 800D70DC
  W8(c->r[31]+0x00000635u,c->r[0]); // 800D70E0
L_800D70E4:;
  c->r[0]=R8(c->r[31]+0x00000635u); // 800D70E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D70E8
  if (crb(c,2)) { goto L_800D7100; } // 800D70EC
  c->r[3]=c->r[31]|c->r[31]; // 800D70F0
  c->r[4]=0u+0x00000008u; // 800D70F4
  c->r[5]=0u+0x00000001u; // 800D70F8
  c->lr=0x800D7100u; f_800D5F20(c); // 800D70FC
L_800D7100:;
  c->r[0]=0u+0x00000001u; // 800D7100
  W8(c->r[31]+0x00000634u,c->r[0]); // 800D7104
  goto L_800D78B4; // 800D7108
L_800D710C:;
  c->r[3]=c->r[3]+0x00000354u; // 800D710C
  c->lr=0x800D7114u; f_800667AC(c); // 800D7110
  cmps(c,0,(int32_t)c->r[3],0); // 800D7114
  if (crb(c,2)) { goto L_800D78B4; } // 800D7118
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D711C
  c->r[3]=c->r[31]|c->r[31]; // 800D7120
  c->r[0]=c->r[4]+0x00000001u; // 800D7124
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7128
  c->lr=0x800D7130u; f_800D79A8(c); // 800D712C
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7130
  c->r[0]=c->r[0]|0x40000000u; // 800D7134
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7138
  goto L_800D78B4; // 800D713C
L_800D7140:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7140
  cmps(c,0,(int32_t)c->r[4],0); // 800D7144
  if (crb(c,2)) { goto L_800D7154; } // 800D7148
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D714C
  goto L_800D7158; // 800D7150
L_800D7154:;
  c->r[0]=0u+0x00000000u; // 800D7154
L_800D7158:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7158
  if (!crb(c,2)) { goto L_800D7184; } // 800D715C
  c->r[3]=c->r[31]|c->r[31]; // 800D7160
  c->r[4]=0u+0x000036DFu; // 800D7164
  c->r[5]=0u+0x00000001u; // 800D7168
  c->lr=0x800D7170u; f_80064744(c); // 800D716C
  c->r[3]=c->r[31]|c->r[31]; // 800D7170
  c->r[4]=0u+0x000036DFu; // 800D7174
  c->r[5]=0u+0x00000001u; // 800D7178
  c->lr=0x800D7180u; f_80064744(c); // 800D717C
  goto L_800D78B4; // 800D7180
L_800D7184:;
  c->r[3]=c->r[3]+0x000001B8u; // 800D7184
  c->r[4]=c->r[1]+0x00000120u; // 800D7188
  c->lr=0x800D7190u; f_80382F2C(c); // 800D718C
  c->r[3]=c->r[1]+0x00000120u; // 800D7190
  c->r[4]=c->r[31]+0x00000604u; // 800D7194
  c->lr=0x800D719Cu; f_8005CDC8(c); // 800D7198
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D719C
  c->r[3]=c->r[31]|c->r[31]; // 800D71A0
  c->r[4]=c->r[1]+0x00000120u; // 800D71A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D71A8
  c->ctr=c->r[12]; // 800D71AC
  if (true) { c->lr=0x800D71B4u; dispatch(c,c->ctr); } // 800D71B0
  c->r[3]=c->r[31]+0x00000354u; // 800D71B4
  c->lr=0x800D71BCu; f_800667AC(c); // 800D71B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D71BC
  if (crb(c,2)) { goto L_800D78B4; } // 800D71C0
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D71C4
  c->r[4]=0u+0x00000000u; // 800D71C8
  c->lr=0x800D71D0u; f_800C2EE0(c); // 800D71CC
  c->r[4]=c->r[3]|c->r[3]; // 800D71D0
  c->r[3]=c->r[31]|c->r[31]; // 800D71D4
  c->lr=0x800D71DCu; f_800DAC88(c); // 800D71D8
  cmps(c,0,(int32_t)c->r[3],10); // 800D71DC
  if (crb(c,2)) { goto L_800D7200; } // 800D71E0
  cmps(c,0,(int32_t)c->r[3],11); // 800D71E4
  if (crb(c,2)) { goto L_800D7228; } // 800D71E8
  cmps(c,0,(int32_t)c->r[3],12); // 800D71EC
  if (crb(c,2)) { goto L_800D724C; } // 800D71F0
  cmps(c,0,(int32_t)c->r[3],15); // 800D71F4
  if (crb(c,2)) { goto L_800D7274; } // 800D71F8
  goto L_800D78B4; // 800D71FC
L_800D7200:;
  c->r[3]=0u+0x00000001u; // 800D7200
  c->r[0]=0u+0x00000000u; // 800D7204
  W32(c->r[31]+0x000005C8u,c->r[3]); // 800D7208
  c->r[3]=c->r[31]|c->r[31]; // 800D720C
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D7210
  c->lr=0x800D7218u; f_800D79A8(c); // 800D7214
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7218
  c->r[0]=c->r[0]|0x40000000u; // 800D721C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7220
  goto L_800D78B4; // 800D7224
L_800D7228:;
  c->r[0]=0u+0x00000001u; // 800D7228
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D722C
  c->r[3]=c->r[31]|c->r[31]; // 800D7230
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D7234
  c->lr=0x800D723Cu; f_800D79A8(c); // 800D7238
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D723C
  c->r[0]=c->r[0]|0x40000000u; // 800D7240
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7244
  goto L_800D78B4; // 800D7248
L_800D724C:;
  c->r[3]=0u+0x00000001u; // 800D724C
  c->r[0]=0u+0x00000003u; // 800D7250
  W32(c->r[31]+0x000005C8u,c->r[3]); // 800D7254
  c->r[3]=c->r[31]|c->r[31]; // 800D7258
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D725C
  c->lr=0x800D7264u; f_800D79A8(c); // 800D7260
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7264
  c->r[0]=c->r[0]|0x40000000u; // 800D7268
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D726C
  goto L_800D78B4; // 800D7270
L_800D7274:;
  c->r[0]=0u+0x00000001u; // 800D7274
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7278
  c->r[3]=c->r[31]|c->r[31]; // 800D727C
  c->lr=0x800D7284u; f_800D7904(c); // 800D7280
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7284
  c->r[0]=c->r[0]|0x40000000u; // 800D7288
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D728C
  goto L_800D78B4; // 800D7290
L_800D7294:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7294
  cmps(c,0,(int32_t)c->r[4],0); // 800D7298
  if (crb(c,2)) { goto L_800D72A8; } // 800D729C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D72A0
  goto L_800D72AC; // 800D72A4
L_800D72A8:;
  c->r[0]=0u+0x00000000u; // 800D72A8
L_800D72AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D72AC
  if (!crb(c,2)) { goto L_800D7448; } // 800D72B0
  c->r[3]=c->r[31]|c->r[31]; // 800D72B4
  c->r[4]=0u+0x00000001u; // 800D72B8
  c->r[5]=0u+0x00000000u; // 800D72BC
  c->lr=0x800D72C4u; f_8005E9E8(c); // 800D72C0
  c->r[3]=c->r[31]|c->r[31]; // 800D72C4
  c->r[4]=0u+0x00000003u; // 800D72C8
  c->r[5]=0u+0x00000000u; // 800D72CC
  c->lr=0x800D72D4u; f_8005E9E8(c); // 800D72D0
  c->r[3]=c->r[31]|c->r[31]; // 800D72D4
  c->r[4]=0u+0x00000004u; // 800D72D8
  c->r[5]=0u+0x00000000u; // 800D72DC
  c->lr=0x800D72E4u; f_8005E9E8(c); // 800D72E0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D72E4
  c->r[3]=c->r[1]+0x00000068u; // 800D72E8
  c->f[2]=c->f[1]; // 800D72EC
  c->f[3]=c->f[1]; // 800D72F0
  c->lr=0x800D72F8u; f_8005FD70(c); // 800D72F4
  c->r[3]=c->r[31]|c->r[31]; // 800D72F8
  c->lr=0x800D7300u; f_800D78CC(c); // 800D72FC
  c->r[30]=c->r[3]|c->r[3]; // 800D7300
  c->r[3]=c->r[3]+0x00000068u; // 800D7304
  c->r[4]=c->r[1]+0x00000068u; // 800D7308
  c->lr=0x800D7310u; f_8005DC84(c); // 800D730C
  c->r[0]=0u+0x00000001u; // 800D7310
  W8(c->r[30]+0x00000064u,c->r[0]); // 800D7314
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7318
  cmps(c,0,(int32_t)c->r[0],0); // 800D731C
  if (crb(c,2)) { goto L_800D7338; } // 800D7320
  cmps(c,0,(int32_t)c->r[0],1); // 800D7324
  if (crb(c,2)) { goto L_800D7388; } // 800D7328
  cmps(c,0,(int32_t)c->r[0],3); // 800D732C
  if (crb(c,2)) { goto L_800D73E8; } // 800D7330
  goto L_800D78B4; // 800D7334
L_800D7338:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7338
  c->r[4]=0u+0x000036C1u; // 800D733C
  c->r[5]=0u+0x00000001u; // 800D7340
  c->lr=0x800D7348u; f_80064744(c); // 800D7344
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7348
  c->lr=0x800D7350u; f_800C2E40(c); // 800D734C
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7350
  c->r[4]=c->r[3]+0x00000002u; // 800D7354
  c->r[3]=c->r[30]|c->r[30]; // 800D7358
  c->lr=0x800D7360u; f_800C30A0(c); // 800D735C
  c->r[4]=c->r[3]|c->r[3]; // 800D7360
  c->r[3]=c->r[30]+0x00000004u; // 800D7364
  c->lr=0x800D736Cu; f_800A09F0(c); // 800D7368
  c->r[4]=c->r[3]|c->r[3]; // 800D736C
  c->r[3]=c->r[1]+0x0000005Cu; // 800D7370
  c->lr=0x800D7378u; f_8005CD7C(c); // 800D7374
  c->r[4]=c->r[3]|c->r[3]; // 800D7378
  c->r[3]=c->r[31]|c->r[31]; // 800D737C
  c->lr=0x800D7384u; f_800D9CB8(c); // 800D7380
  goto L_800D78B4; // 800D7384
L_800D7388:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7388
  c->r[4]=0u+0x000036BFu; // 800D738C
  c->r[5]=0u+0x00000001u; // 800D7390
  c->lr=0x800D7398u; f_80064744(c); // 800D7394
  c->r[3]=c->r[31]|c->r[31]; // 800D7398
  c->r[4]=0u+0x000036BFu; // 800D739C
  c->r[5]=0u+0x00000001u; // 800D73A0
  c->lr=0x800D73A8u; f_80064744(c); // 800D73A4
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D73A8
  c->lr=0x800D73B0u; f_800C2E40(c); // 800D73AC
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D73B0
  c->r[4]=c->r[3]+0x00000002u; // 800D73B4
  c->r[3]=c->r[30]|c->r[30]; // 800D73B8
  c->lr=0x800D73C0u; f_800C30A0(c); // 800D73BC
  c->r[4]=c->r[3]|c->r[3]; // 800D73C0
  c->r[3]=c->r[30]+0x00000004u; // 800D73C4
  c->lr=0x800D73CCu; f_800A09F0(c); // 800D73C8
  c->r[4]=c->r[3]|c->r[3]; // 800D73CC
  c->r[3]=c->r[1]+0x00000050u; // 800D73D0
  c->lr=0x800D73D8u; f_8005CD7C(c); // 800D73D4
  c->r[4]=c->r[3]|c->r[3]; // 800D73D8
  c->r[3]=c->r[31]|c->r[31]; // 800D73DC
  c->lr=0x800D73E4u; f_800D9E68(c); // 800D73E0
  goto L_800D78B4; // 800D73E4
L_800D73E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D73E8
  c->r[4]=0u+0x000036BEu; // 800D73EC
  c->r[5]=0u+0x00000001u; // 800D73F0
  c->lr=0x800D73F8u; f_80064744(c); // 800D73F4
  c->r[3]=c->r[31]|c->r[31]; // 800D73F8
  c->r[4]=0u+0x000036BEu; // 800D73FC
  c->r[5]=0u+0x00000001u; // 800D7400
  c->lr=0x800D7408u; f_80064744(c); // 800D7404
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7408
  c->lr=0x800D7410u; f_800C2E40(c); // 800D740C
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7410
  c->r[4]=c->r[3]+0x00000003u; // 800D7414
  c->r[3]=c->r[30]|c->r[30]; // 800D7418
  c->lr=0x800D7420u; f_800C30A0(c); // 800D741C
  c->r[4]=c->r[3]|c->r[3]; // 800D7420
  c->r[3]=c->r[30]+0x00000004u; // 800D7424
  c->lr=0x800D742Cu; f_800A09F0(c); // 800D7428
  c->r[4]=c->r[3]|c->r[3]; // 800D742C
  c->r[3]=c->r[1]+0x00000044u; // 800D7430
  c->lr=0x800D7438u; f_8005CD7C(c); // 800D7434
  c->r[4]=c->r[3]|c->r[3]; // 800D7438
  c->r[3]=c->r[31]|c->r[31]; // 800D743C
  c->lr=0x800D7444u; f_800DA000(c); // 800D7440
  goto L_800D78B4; // 800D7444
L_800D7448:;
  c->r[0]=R32(c->r[3]+0x000005CCu); // 800D7448
  cmps(c,0,(int32_t)c->r[0],0); // 800D744C
  if (crb(c,2)) { goto L_800D7468; } // 800D7450
  cmps(c,0,(int32_t)c->r[0],1); // 800D7454
  if (crb(c,2)) { goto L_800D74AC; } // 800D7458
  cmps(c,0,(int32_t)c->r[0],3); // 800D745C
  if (crb(c,2)) { goto L_800D74F0; } // 800D7460
  goto L_800D78B4; // 800D7464
L_800D7468:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 800D7468
  c->lr=0x800D7470u; f_802EA4B0(c); // 800D746C
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7470
  fcmp(c,0,c->f[1],c->f[0]); // 800D7474
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7478
  if (!crb(c,2)) { goto L_800D7498; } // 800D747C
  c->r[3]=c->r[31]|c->r[31]; // 800D7480
  c->r[4]=0u+0x00000003u; // 800D7484
  c->r[5]=0u+0x00000001u; // 800D7488
  c->lr=0x800D7490u; f_8005E9E8(c); // 800D748C
  c->r[0]=0u+0x00000004u; // 800D7490
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7494
L_800D7498:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7498
  c->r[4]=0u+0x00000000u; // 800D749C
  c->r[5]=0u+0x00000000u; // 800D74A0
  c->lr=0x800D74A8u; f_800DA368(c); // 800D74A4
  goto L_800D78B4; // 800D74A8
L_800D74AC:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 800D74AC
  c->lr=0x800D74B4u; f_802EA4B0(c); // 800D74B0
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D74B4
  fcmp(c,0,c->f[1],c->f[0]); // 800D74B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D74BC
  if (!crb(c,2)) { goto L_800D74DC; } // 800D74C0
  c->r[3]=c->r[31]|c->r[31]; // 800D74C4
  c->r[4]=0u+0x00000003u; // 800D74C8
  c->r[5]=0u+0x00000001u; // 800D74CC
  c->lr=0x800D74D4u; f_8005E9E8(c); // 800D74D0
  c->r[0]=0u+0x00000004u; // 800D74D4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D74D8
L_800D74DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D74DC
  c->r[4]=0u+0x00000000u; // 800D74E0
  c->r[5]=0u+0x00000000u; // 800D74E4
  c->lr=0x800D74ECu; f_800DA368(c); // 800D74E8
  goto L_800D78B4; // 800D74EC
L_800D74F0:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 800D74F0
  c->lr=0x800D74F8u; f_802EA4B0(c); // 800D74F4
  {uint32_t ea=c->r[2]+0xFFFFA4E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D74F8
  fcmp(c,0,c->f[1],c->f[0]); // 800D74FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7500
  if (!crb(c,2)) { goto L_800D7520; } // 800D7504
  c->r[3]=c->r[31]|c->r[31]; // 800D7508
  c->r[4]=0u+0x00000003u; // 800D750C
  c->r[5]=0u+0x00000001u; // 800D7510
  c->lr=0x800D7518u; f_8005E9E8(c); // 800D7514
  c->r[0]=0u+0x00000004u; // 800D7518
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D751C
L_800D7520:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7520
  c->lr=0x800D7528u; f_800DA460(c); // 800D7524
  goto L_800D78B4; // 800D7528
L_800D752C:;
  c->lr=0x800D7530u; f_8005EA80(c); // 800D752C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7530
  c->r[29]=c->r[3]|c->r[3]; // 800D7534
  if (!crb(c,2)) { goto L_800D7630; } // 800D7538
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D753C
  cmps(c,0,(int32_t)c->r[0],3); // 800D7540
  if (!crb(c,2)) { goto L_800D757C; } // 800D7544
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7548
  c->lr=0x800D7550u; f_800C2E40(c); // 800D754C
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7550
  c->r[4]=c->r[3]+0x00000002u; // 800D7554
  c->r[3]=c->r[30]|c->r[30]; // 800D7558
  c->lr=0x800D7560u; f_800C30A0(c); // 800D755C
  c->r[4]=c->r[3]|c->r[3]; // 800D7560
  c->r[3]=c->r[30]+0x00000004u; // 800D7564
  c->lr=0x800D756Cu; f_800A09F0(c); // 800D7568
  c->r[4]=c->r[3]|c->r[3]; // 800D756C
  c->r[3]=c->r[1]+0x00000080u; // 800D7570
  c->lr=0x800D7578u; f_8005DC84(c); // 800D7574
  goto L_800D75AC; // 800D7578
L_800D757C:;
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D757C
  c->lr=0x800D7584u; f_800C2E40(c); // 800D7580
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7584
  c->r[4]=c->r[3]+0x00000001u; // 800D7588
  c->r[3]=c->r[30]|c->r[30]; // 800D758C
  c->lr=0x800D7594u; f_800C30A0(c); // 800D7590
  c->r[4]=c->r[3]|c->r[3]; // 800D7594
  c->r[3]=c->r[30]+0x00000004u; // 800D7598
  c->lr=0x800D75A0u; f_800A09F0(c); // 800D759C
  c->r[4]=c->r[3]|c->r[3]; // 800D75A0
  c->r[3]=c->r[1]+0x00000080u; // 800D75A4
  c->lr=0x800D75ACu; f_8005DC84(c); // 800D75A8
L_800D75AC:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D75AC
  c->r[4]=c->r[31]|c->r[31]; // 800D75B0
  c->r[3]=c->r[1]+0x00000038u; // 800D75B4
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D75B8
  c->ctr=c->r[12]; // 800D75BC
  if (true) { c->lr=0x800D75C4u; dispatch(c,c->ctr); } // 800D75C0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D75C4
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D75C8
  fcmp(c,0,c->f[1],c->f[0]); // 800D75CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D75D0
  if (!crb(c,2)) { goto L_800D7630; } // 800D75D4
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D75D8
  c->r[3]=c->r[1]+0x00000020u; // 800D75DC
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D75E0
  c->f[3]=c->f[1]; // 800D75E4
  c->lr=0x800D75ECu; f_8005FD70(c); // 800D75E8
  c->r[3]=c->r[1]+0x0000002Cu; // 800D75EC
  c->r[4]=c->r[1]+0x00000080u; // 800D75F0
  c->r[5]=c->r[1]+0x00000020u; // 800D75F4
  c->lr=0x800D75FCu; f_8005ED10(c); // 800D75F8
  c->r[3]=c->r[31]+0x000001B8u; // 800D75FC
  c->r[4]=c->r[1]+0x000000F0u; // 800D7600
  c->lr=0x800D7608u; f_80382F2C(c); // 800D7604
  c->r[3]=c->r[1]+0x000000F0u; // 800D7608
  c->r[4]=c->r[1]+0x0000002Cu; // 800D760C
  c->lr=0x800D7614u; f_8005CDC8(c); // 800D7610
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7614
  c->r[3]=c->r[31]|c->r[31]; // 800D7618
  c->r[4]=c->r[1]+0x000000F0u; // 800D761C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D7620
  c->ctr=c->r[12]; // 800D7624
  if (true) { c->lr=0x800D762Cu; dispatch(c,c->ctr); } // 800D7628
  c->r[29]=0u+0x00000001u; // 800D762C
L_800D7630:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7630
  if (crb(c,2)) { goto L_800D7750; } // 800D7634
  c->r[3]=c->r[31]|c->r[31]; // 800D7638
  c->lr=0x800D7640u; f_800DBAE4(c); // 800D763C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7640
  c->r[4]=c->r[31]|c->r[31]; // 800D7644
  c->r[3]=c->r[1]+0x00000014u; // 800D7648
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D764C
  c->ctr=c->r[12]; // 800D7650
  if (true) { c->lr=0x800D7658u; dispatch(c,c->ctr); } // 800D7654
  c->r[3]=c->r[31]+0x00000604u; // 800D7658
  c->r[4]=c->r[1]+0x00000014u; // 800D765C
  c->lr=0x800D7664u; f_8005DC84(c); // 800D7660
  c->r[0]=R32(c->r[31]+0x0000062Cu); // 800D7664
  cmps(c,0,(int32_t)c->r[0],0); // 800D7668
  if (crb(c,2)) { goto L_800D76A0; } // 800D766C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7670
  c->r[4]=c->r[31]|c->r[31]; // 800D7674
  c->r[3]=c->r[1]+0x00000074u; // 800D7678
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D767C
  c->ctr=c->r[12]; // 800D7680
  if (true) { c->lr=0x800D7688u; dispatch(c,c->ctr); } // 800D7684
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800D7688
  c->r[5]=c->r[1]+0x00000074u; // 800D768C
  c->r[4]=R32(c->r[31]+0x0000062Cu); // 800D7690
  c->r[6]=0u+0x00000000u; // 800D7694
  c->r[7]=0u+0x00000000u; // 800D7698
  c->lr=0x800D76A0u; f_80065FDC(c); // 800D769C
L_800D76A0:;
  c->r[0]=R8(c->r[31]+0x00000635u); // 800D76A0
  cmps(c,0,(int32_t)c->r[0],0); // 800D76A4
  if (crb(c,2)) { goto L_800D7730; } // 800D76A8
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D76AC
  cmps(c,0,(int32_t)c->r[0],3); // 800D76B0
  if (!crb(c,2)) { goto L_800D76D8; } // 800D76B4
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D76B8
  c->r[3]=c->r[30]|c->r[30]; // 800D76BC
  c->lr=0x800D76C4u; f_800C2E40(c); // 800D76C0
  c->r[4]=c->r[3]|c->r[3]; // 800D76C4
  c->r[3]=c->r[30]|c->r[30]; // 800D76C8
  c->r[4]=c->r[4]+0x00000002u; // 800D76CC
  c->lr=0x800D76D4u; f_800C3054(c); // 800D76D0
  goto L_800D76F4; // 800D76D4
L_800D76D8:;
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D76D8
  c->r[3]=c->r[30]|c->r[30]; // 800D76DC
  c->lr=0x800D76E4u; f_800C2E40(c); // 800D76E0
  c->r[4]=c->r[3]|c->r[3]; // 800D76E4
  c->r[3]=c->r[30]|c->r[30]; // 800D76E8
  c->r[4]=c->r[4]+0x00000001u; // 800D76EC
  c->lr=0x800D76F4u; f_800C3054(c); // 800D76F0
L_800D76F4:;
  c->r[30]=0u+0x00000000u; // 800D76F4
  c->r[0]=0u+0x00000003u; // 800D76F8
  W32(c->r[31]+0x00000600u,c->r[30]); // 800D76FC
  c->r[3]=c->r[31]|c->r[31]; // 800D7700
  c->r[4]=0u+0x00000008u; // 800D7704
  c->r[5]=0u+0x00000000u; // 800D7708
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D770C
  c->lr=0x800D7714u; f_800D5F20(c); // 800D7710
  W8(c->r[31]+0x00000635u,c->r[30]); // 800D7714
  c->r[3]=c->r[31]|c->r[31]; // 800D7718
  c->lr=0x800D7720u; f_800D79A8(c); // 800D771C
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7720
  c->r[0]=c->r[0]|0x40000000u; // 800D7724
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7728
  goto L_800D78B4; // 800D772C
L_800D7730:;
  c->r[0]=0u+0x00000002u; // 800D7730
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7734
  c->r[3]=c->r[31]|c->r[31]; // 800D7738
  c->lr=0x800D7740u; f_800D79A8(c); // 800D773C
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7740
  c->r[0]=c->r[0]|0x40000000u; // 800D7744
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7748
  goto L_800D78B4; // 800D774C
L_800D7750:;
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7750
  cmps(c,0,(int32_t)c->r[0],0); // 800D7754
  if (crb(c,2)) { goto L_800D7770; } // 800D7758
  cmps(c,0,(int32_t)c->r[0],1); // 800D775C
  if (crb(c,2)) { goto L_800D7784; } // 800D7760
  cmps(c,0,(int32_t)c->r[0],3); // 800D7764
  if (crb(c,2)) { goto L_800D7798; } // 800D7768
  goto L_800D78B4; // 800D776C
L_800D7770:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7770
  c->r[4]=0u+0x00000000u; // 800D7774
  c->r[5]=0u+0x00000000u; // 800D7778
  c->lr=0x800D7780u; f_800DA368(c); // 800D777C
  goto L_800D78B4; // 800D7780
L_800D7784:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7784
  c->r[4]=0u+0x00000000u; // 800D7788
  c->r[5]=0u+0x00000000u; // 800D778C
  c->lr=0x800D7794u; f_800DA368(c); // 800D7790
  goto L_800D78B4; // 800D7794
L_800D7798:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7798
  c->lr=0x800D77A0u; f_800DA460(c); // 800D779C
  goto L_800D78B4; // 800D77A0
L_800D77A4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D77A4
  cmps(c,0,(int32_t)c->r[4],0); // 800D77A8
  if (crb(c,2)) { goto L_800D77B8; } // 800D77AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D77B0
  goto L_800D77BC; // 800D77B4
L_800D77B8:;
  c->r[0]=0u+0x00000000u; // 800D77B8
L_800D77BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D77BC
  if (!crb(c,2)) { goto L_800D77E8; } // 800D77C0
  c->r[3]=c->r[31]|c->r[31]; // 800D77C4
  c->r[4]=0u+0x000036C2u; // 800D77C8
  c->r[5]=0u+0x00000001u; // 800D77CC
  c->lr=0x800D77D4u; f_80064744(c); // 800D77D0
  c->r[3]=c->r[31]|c->r[31]; // 800D77D4
  c->r[4]=0u+0x000036C2u; // 800D77D8
  c->r[5]=0u+0x00000001u; // 800D77DC
  c->lr=0x800D77E4u; f_80064744(c); // 800D77E0
  goto L_800D78B4; // 800D77E4
L_800D77E8:;
  c->r[0]=R8(c->r[3]+0x00000628u); // 800D77E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D77EC
  if (crb(c,2)) { goto L_800D783C; } // 800D77F0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D77F4
  c->r[3]=c->r[31]|c->r[31]; // 800D77F8
  c->r[4]=c->r[1]+0x000000C0u; // 800D77FC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D7800
  c->ctr=c->r[12]; // 800D7804
  if (true) { c->lr=0x800D780Cu; dispatch(c,c->ctr); } // 800D7808
  c->r[4]=c->r[3]|c->r[3]; // 800D780C
  c->r[3]=c->r[1]+0x00000008u; // 800D7810
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7814
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7818
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D781C
  c->lr=0x800D7824u; f_8005FD70(c); // 800D7820
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7824
  c->r[3]=c->r[31]|c->r[31]; // 800D7828
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D782C
  c->r[4]=c->r[1]+0x00000008u; // 800D7830
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7834
  c->lr=0x800D783Cu; f_800634E8(c); // 800D7838
L_800D783C:;
  c->r[3]=c->r[31]+0x000001B8u; // 800D783C
  c->r[4]=c->r[1]+0x00000090u; // 800D7840
  c->lr=0x800D7848u; f_80382F2C(c); // 800D7844
  c->r[3]=c->r[1]+0x00000090u; // 800D7848
  c->r[4]=c->r[31]+0x00000604u; // 800D784C
  c->lr=0x800D7854u; f_8005CDC8(c); // 800D7850
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7854
  c->r[3]=c->r[31]|c->r[31]; // 800D7858
  c->r[4]=c->r[1]+0x00000090u; // 800D785C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D7860
  c->ctr=c->r[12]; // 800D7864
  if (true) { c->lr=0x800D786Cu; dispatch(c,c->ctr); } // 800D7868
  c->r[3]=c->r[31]+0x00000354u; // 800D786C
  c->lr=0x800D7874u; f_800667AC(c); // 800D7870
  cmps(c,0,(int32_t)c->r[3],0); // 800D7874
  if (crb(c,2)) { goto L_800D78B4; } // 800D7878
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D787C
  cmps(c,0,(int32_t)c->r[0],3); // 800D7880
  if (!crb(c,2)) { goto L_800D7898; } // 800D7884
  c->r[3]=c->r[31]|c->r[31]; // 800D7888
  c->r[4]=0u+0x00000002u; // 800D788C
  c->lr=0x800D7894u; f_800DA944(c); // 800D7890
  goto L_800D78A4; // 800D7894
L_800D7898:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7898
  c->r[4]=0u+0x00000001u; // 800D789C
  c->lr=0x800D78A4u; f_800DA944(c); // 800D78A0
L_800D78A4:;
  c->r[0]=0u+0x00000000u; // 800D78A4
  W8(c->r[31]+0x00000634u,c->r[0]); // 800D78A8
  c->r[3]=c->r[31]|c->r[31]; // 800D78AC
  c->lr=0x800D78B4u; f_800DA994(c); // 800D78B0
L_800D78B4:;
  c->r[11]=c->r[1]+0x00000160u; // 800D78B4
  c->lr=0x800D78BCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D78B8
  c->r[0]=R32(c->r[1]+0x00000164u); // 800D78BC
  c->lr=c->r[0]; // 800D78C0
  c->r[1]=c->r[1]+0x00000160u; // 800D78C4
  return; // 800D78C8
}

// fn_800D78CC
void f_800D78CC(Ctx* __restrict c) {
  trace_call(0x800D78CCu);
  c->r[0]=R8(c->r[13]+0xFFFFBFD4u); // 800D78CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D78D0
  if (!crb(c,2)) { goto L_800D78F0; } // 800D78D4
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 800D78D8
  c->r[0]=0u+0x00000001u; // 800D78DC
  W32(c->r[13]+0xFFFFBFD0u,c->r[4]); // 800D78E0
  c->r[4]=c->r[4]+0x00000001u; // 800D78E4
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 800D78E8
  W8(c->r[13]+0xFFFFBFD4u,c->r[0]); // 800D78EC
L_800D78F0:;
  {uint32_t ea=c->r[3]+0x000000FCu; c->r[12]=R32(ea); c->r[3]=ea;} // 800D78F0
  c->r[4]=R32(c->r[13]+0xFFFFBFD0u); // 800D78F4
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D78F8
  c->ctr=c->r[12]; // 800D78FC
  if (true) { dispatch(c,c->ctr); return; } // 800D7900
}

// fn_800D7904
void f_800D7904(Ctx* __restrict c) {
  trace_call(0x800D7904u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7904
  c->r[0]=c->lr; // 800D7908
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D790C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7910
  c->r[31]=c->r[1]|c->r[1]; // 800D7914
  c->r[28]=c->r[3]|c->r[3]; // 800D7918
  c->lr=0x800D7920u; f_800D4B28(c); // 800D791C
  c->r[4]=c->r[3]|c->r[3]; // 800D7920
  c->r[3]=c->r[28]|c->r[28]; // 800D7924
  c->lr=0x800D792Cu; f_80062F4C(c); // 800D7928
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D792C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7930
  c->r[3]=c->r[28]+c->r[0]; // 800D7934
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D7938
  cmps(c,0,(int32_t)c->r[29],0); // 800D793C
  if (crb(c,2)) { goto L_800D7968; } // 800D7940
  c->r[30]=0u+0x00000000u; // 800D7944
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D7948
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D794C
  c->lr=0x800D7954u; f_800D4B28(c); // 800D7950
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D7954
  c->r[0]=c->r[13]+0xFFFF8460u; // 800D7958
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D795C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D7960
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D7964
L_800D7968:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D7968
  c->r[0]=0u+0x00000000u; // 800D796C
  c->r[3]=c->r[28]|c->r[28]; // 800D7970
  c->r[4]=c->r[29]|c->r[29]; // 800D7974
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D7978
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D797C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D7980
  c->lr=0x800D7988u; f_8006306C(c); // 800D7984
  c->r[10]=c->r[31]|c->r[31]; // 800D7988
  c->r[3]=c->r[29]|c->r[29]; // 800D798C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7990
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D7994
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D7998
  c->r[1]=c->r[10]|c->r[10]; // 800D799C
  c->lr=c->r[0]; // 800D79A0
  return; // 800D79A4
}

// fn_800D79A8
void f_800D79A8(Ctx* __restrict c) {
  trace_call(0x800D79A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79A8
  c->r[0]=c->lr; // 800D79AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D79B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D79B4
  c->r[31]=c->r[1]|c->r[1]; // 800D79B8
  c->r[28]=c->r[3]|c->r[3]; // 800D79BC
  c->lr=0x800D79C4u; f_800D4CE4(c); // 800D79C0
  c->r[4]=c->r[3]|c->r[3]; // 800D79C4
  c->r[3]=c->r[28]|c->r[28]; // 800D79C8
  c->lr=0x800D79D0u; f_80062F4C(c); // 800D79CC
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D79D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D79D4
  c->r[3]=c->r[28]+c->r[0]; // 800D79D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D79DC
  cmps(c,0,(int32_t)c->r[29],0); // 800D79E0
  if (crb(c,2)) { goto L_800D7A0C; } // 800D79E4
  c->r[30]=0u+0x00000000u; // 800D79E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D79EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D79F0
  c->lr=0x800D79F8u; f_800D4CE4(c); // 800D79F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D79F8
  c->r[0]=c->r[13]+0xFFFF8474u; // 800D79FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D7A00
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D7A04
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D7A08
L_800D7A0C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D7A0C
  c->r[0]=0u+0x00000000u; // 800D7A10
  c->r[3]=c->r[28]|c->r[28]; // 800D7A14
  c->r[4]=c->r[29]|c->r[29]; // 800D7A18
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D7A1C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D7A20
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D7A24
  c->lr=0x800D7A2Cu; f_8006306C(c); // 800D7A28
  c->r[10]=c->r[31]|c->r[31]; // 800D7A2C
  c->r[3]=c->r[29]|c->r[29]; // 800D7A30
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7A34
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D7A38
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D7A3C
  c->r[1]=c->r[10]|c->r[10]; // 800D7A40
  c->lr=c->r[0]; // 800D7A44
  return; // 800D7A48
}

// fn_800D7A4C
void f_800D7A4C(Ctx* __restrict c) {
  trace_call(0x800D7A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A4C
  c->r[0]=c->lr; // 800D7A50
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7A54
  c->r[11]=c->r[1]+0x00000030u; // 800D7A58
  c->lr=0x800D7A60u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7A5C
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D7A60
  c->r[31]=c->r[3]|c->r[3]; // 800D7A64
  cmps(c,0,(int32_t)c->r[0],0); // 800D7A68
  if (crb(c,2)) { goto L_800D7A94; } // 800D7A6C
  cmps(c,0,(int32_t)c->r[0],1); // 800D7A70
  if (crb(c,2)) { goto L_800D7B10; } // 800D7A74
  cmps(c,0,(int32_t)c->r[0],3); // 800D7A78
  if (crb(c,2)) { goto L_800D7B10; } // 800D7A7C
  cmps(c,0,(int32_t)c->r[0],2); // 800D7A80
  if (crb(c,2)) { goto L_800D7C78; } // 800D7A84
  cmps(c,0,(int32_t)c->r[0],4); // 800D7A88
  if (crb(c,2)) { goto L_800D7D04; } // 800D7A8C
  goto L_800D7D5C; // 800D7A90
L_800D7A94:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7A94
  cmps(c,0,(int32_t)c->r[4],0); // 800D7A98
  if (crb(c,2)) { goto L_800D7AA8; } // 800D7A9C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D7AA0
  goto L_800D7AAC; // 800D7AA4
L_800D7AA8:;
  c->r[0]=0u+0x00000000u; // 800D7AA8
L_800D7AAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7AAC
  if (!crb(c,2)) { goto L_800D7ADC; } // 800D7AB0
  c->r[3]=c->r[31]|c->r[31]; // 800D7AB4
  c->lr=0x800D7ABCu; f_800DBAE4(c); // 800D7AB8
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7ABC
  c->r[4]=c->r[2]+0xFFFFA458u; // 800D7AC0
  c->r[3]=c->r[31]|c->r[31]; // 800D7AC4
  c->r[5]=0u+0x00000001u; // 800D7AC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7ACC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7AD0
  c->lr=0x800D7AD8u; f_80064744(c); // 800D7AD4
  goto L_800D7D5C; // 800D7AD8
L_800D7ADC:;
  c->r[3]=c->r[3]+0x00000354u; // 800D7ADC
  c->lr=0x800D7AE4u; f_800667AC(c); // 800D7AE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7AE4
  if (crb(c,2)) { goto L_800D7D5C; } // 800D7AE8
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D7AEC
  c->r[3]=c->r[31]|c->r[31]; // 800D7AF0
  c->r[0]=c->r[4]+0x00000001u; // 800D7AF4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7AF8
  c->lr=0x800D7B00u; f_800D7D74(c); // 800D7AFC
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7B00
  c->r[0]=c->r[0]|0x40000000u; // 800D7B04
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7B08
  goto L_800D7D5C; // 800D7B0C
L_800D7B10:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D7B10
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B14
  if (crb(c,2)) { goto L_800D7B24; } // 800D7B18
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D7B1C
  goto L_800D7B28; // 800D7B20
L_800D7B24:;
  c->r[0]=0u+0x00000000u; // 800D7B24
L_800D7B28:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7B28
  if (!crb(c,2)) { goto L_800D7BEC; } // 800D7B2C
  c->r[3]=c->r[31]|c->r[31]; // 800D7B30
  c->r[4]=0u+0x00000000u; // 800D7B34
  c->lr=0x800D7B3Cu; f_8005E814(c); // 800D7B38
  c->r[0]=R32(c->r[31]+0x000005C8u); // 800D7B3C
  cmps(c,0,(int32_t)c->r[0],1); // 800D7B40
  if (!crb(c,2)) { goto L_800D7B68; } // 800D7B44
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7B48
  c->r[4]=c->r[2]+0xFFFFA460u; // 800D7B4C
  c->r[3]=c->r[31]|c->r[31]; // 800D7B50
  c->r[5]=0u+0x00000001u; // 800D7B54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7B58
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7B5C
  c->lr=0x800D7B64u; f_80064744(c); // 800D7B60
  goto L_800D7B8C; // 800D7B64
L_800D7B68:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D7B68
  if (!crb(c,2)) { goto L_800D7B8C; } // 800D7B6C
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7B70
  c->r[4]=c->r[2]+0xFFFFA470u; // 800D7B74
  c->r[3]=c->r[31]|c->r[31]; // 800D7B78
  c->r[5]=0u+0x00000001u; // 800D7B7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7B80
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7B84
  c->lr=0x800D7B8Cu; f_80064744(c); // 800D7B88
L_800D7B8C:;
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7B8C
  c->lr=0x800D7B94u; f_800C2E40(c); // 800D7B90
  c->r[30]=R32(c->r[31]+0x0000041Cu); // 800D7B94
  c->r[4]=c->r[3]+0x00000002u; // 800D7B98
  c->r[3]=c->r[30]|c->r[30]; // 800D7B9C
  c->lr=0x800D7BA4u; f_800C30A0(c); // 800D7BA0
  c->r[4]=c->r[3]|c->r[3]; // 800D7BA4
  c->r[3]=c->r[30]+0x00000004u; // 800D7BA8
  c->lr=0x800D7BB0u; f_800A09F0(c); // 800D7BAC
  c->r[29]=R32(c->r[31]+0x0000041Cu); // 800D7BB0
  c->r[4]=c->r[3]|c->r[3]; // 800D7BB4
  c->r[3]=c->r[1]+0x00000008u; // 800D7BB8
  c->lr=0x800D7BC0u; f_8005CD7C(c); // 800D7BBC
  c->r[30]=c->r[3]|c->r[3]; // 800D7BC0
  c->r[4]=c->r[29]|c->r[29]; // 800D7BC4
  c->r[3]=c->r[1]+0x00000014u; // 800D7BC8
  c->lr=0x800D7BD0u; f_800C2FB8(c); // 800D7BCC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BD0
  c->r[3]=c->r[31]|c->r[31]; // 800D7BD4
  c->r[5]=c->r[30]|c->r[30]; // 800D7BD8
  c->r[4]=c->r[1]+0x00000014u; // 800D7BDC
  c->r[6]=0u+0x00000001u; // 800D7BE0
  c->lr=0x800D7BE8u; f_800D9B18(c); // 800D7BE4
  goto L_800D7D5C; // 800D7BE8
L_800D7BEC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7BEC
  c->r[4]=0u+0x00000001u; // 800D7BF0
  c->r[5]=0u+0x00000001u; // 800D7BF4
  c->lr=0x800D7BFCu; f_800DA368(c); // 800D7BF8
  c->r[0]=R32(c->r[31]+0x000005C8u); // 800D7BFC
  cmps(c,0,(int32_t)c->r[0],3); // 800D7C00
  if (!crb(c,2)) { goto L_800D7C44; } // 800D7C04
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800D7C08
  c->lr=0x800D7C10u; f_800C2E40(c); // 800D7C0C
  c->r[29]=R32(c->r[31]+0x0000041Cu); // 800D7C10
  c->r[4]=c->r[3]+0x00000002u; // 800D7C14
  c->r[3]=c->r[29]|c->r[29]; // 800D7C18
  c->lr=0x800D7C20u; f_800C30A0(c); // 800D7C1C
  c->r[4]=c->r[3]|c->r[3]; // 800D7C20
  c->r[3]=c->r[29]+0x00000004u; // 800D7C24
  c->lr=0x800D7C2Cu; f_800A09F0(c); // 800D7C28
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7C2C
  c->r[4]=c->r[3]|c->r[3]; // 800D7C30
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7C34
  c->r[3]=c->r[31]|c->r[31]; // 800D7C38
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7C3C
  c->lr=0x800D7C44u; f_800637D0(c); // 800D7C40
L_800D7C44:;
  c->r[3]=c->r[31]+0x00000354u; // 800D7C44
  c->lr=0x800D7C4Cu; f_800667AC(c); // 800D7C48
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C4C
  if (crb(c,2)) { goto L_800D7D5C; } // 800D7C50
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D7C54
  c->r[3]=c->r[31]|c->r[31]; // 800D7C58
  c->r[0]=c->r[4]+0x00000001u; // 800D7C5C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7C60
  c->lr=0x800D7C68u; f_800D7D74(c); // 800D7C64
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7C68
  c->r[0]=c->r[0]|0x40000000u; // 800D7C6C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7C70
  goto L_800D7D5C; // 800D7C74
L_800D7C78:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7C78
  cmps(c,0,(int32_t)c->r[4],0); // 800D7C7C
  if (crb(c,2)) { goto L_800D7C8C; } // 800D7C80
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D7C84
  goto L_800D7C90; // 800D7C88
L_800D7C8C:;
  c->r[0]=0u+0x00000000u; // 800D7C8C
L_800D7C90:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7C90
  if (!crb(c,2)) { goto L_800D7CB8; } // 800D7C94
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D7C98
  c->r[4]=c->r[2]+0xFFFFA468u; // 800D7C9C
  c->r[3]=c->r[31]|c->r[31]; // 800D7CA0
  c->r[5]=0u+0x00000001u; // 800D7CA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7CA8
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7CAC
  c->lr=0x800D7CB4u; f_80064744(c); // 800D7CB0
  goto L_800D7D5C; // 800D7CB4
L_800D7CB8:;
  c->r[3]=c->r[3]+0x00000354u; // 800D7CB8
  c->lr=0x800D7CC0u; f_800667AC(c); // 800D7CBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7CC0
  if (crb(c,2)) { goto L_800D7D5C; } // 800D7CC4
  c->r[3]=c->r[31]|c->r[31]; // 800D7CC8
  c->r[4]=0u+0x00000001u; // 800D7CCC
  c->lr=0x800D7CD4u; f_8005E814(c); // 800D7CD0
  c->r[3]=c->r[31]|c->r[31]; // 800D7CD4
  c->r[4]=0u+0x00000001u; // 800D7CD8
  c->lr=0x800D7CE0u; f_800DA944(c); // 800D7CDC
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D7CE0
  c->r[3]=c->r[31]|c->r[31]; // 800D7CE4
  c->r[0]=c->r[4]+0x00000001u; // 800D7CE8
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D7CEC
  c->lr=0x800D7CF4u; f_800D7D74(c); // 800D7CF0
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D7CF4
  c->r[0]=c->r[0]|0x40000000u; // 800D7CF8
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D7CFC
  goto L_800D7D5C; // 800D7D00
L_800D7D04:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7D04
  cmps(c,0,(int32_t)c->r[4],0); // 800D7D08
  if (crb(c,2)) { goto L_800D7D18; } // 800D7D0C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D7D10
  goto L_800D7D1C; // 800D7D14
L_800D7D18:;
  c->r[0]=0u+0x00000000u; // 800D7D18
L_800D7D1C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7D1C
  if (!crb(c,2)) { goto L_800D7D38; } // 800D7D20
  c->r[3]=c->r[31]|c->r[31]; // 800D7D24
  c->r[4]=0u+0x000036C2u; // 800D7D28
  c->r[5]=0u+0x00000001u; // 800D7D2C
  c->lr=0x800D7D34u; f_80064744(c); // 800D7D30
  goto L_800D7D5C; // 800D7D34
L_800D7D38:;
  c->r[3]=c->r[3]+0x00000354u; // 800D7D38
  c->lr=0x800D7D40u; f_800667AC(c); // 800D7D3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7D40
  if (crb(c,2)) { goto L_800D7D5C; } // 800D7D44
  c->r[3]=c->r[31]|c->r[31]; // 800D7D48
  c->r[4]=0u+0x00000001u; // 800D7D4C
  c->lr=0x800D7D54u; f_800DA944(c); // 800D7D50
  c->r[3]=c->r[31]|c->r[31]; // 800D7D54
  c->lr=0x800D7D5Cu; f_800DA994(c); // 800D7D58
L_800D7D5C:;
  c->r[11]=c->r[1]+0x00000030u; // 800D7D5C
  c->lr=0x800D7D64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7D60
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D7D64
  c->lr=c->r[0]; // 800D7D68
  c->r[1]=c->r[1]+0x00000030u; // 800D7D6C
  return; // 800D7D70
}

// fn_800D7D74
void f_800D7D74(Ctx* __restrict c) {
  trace_call(0x800D7D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7D74
  c->r[0]=c->lr; // 800D7D78
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D7D7C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7D80
  c->r[31]=c->r[1]|c->r[1]; // 800D7D84
  c->r[28]=c->r[3]|c->r[3]; // 800D7D88
  c->lr=0x800D7D90u; f_800D4C40(c); // 800D7D8C
  c->r[4]=c->r[3]|c->r[3]; // 800D7D90
  c->r[3]=c->r[28]|c->r[28]; // 800D7D94
  c->lr=0x800D7D9Cu; f_80062F4C(c); // 800D7D98
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D7D9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7DA0
  c->r[3]=c->r[28]+c->r[0]; // 800D7DA4
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D7DA8
  cmps(c,0,(int32_t)c->r[29],0); // 800D7DAC
  if (crb(c,2)) { goto L_800D7DD8; } // 800D7DB0
  c->r[30]=0u+0x00000000u; // 800D7DB4
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D7DB8
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D7DBC
  c->lr=0x800D7DC4u; f_800D4C40(c); // 800D7DC0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D7DC4
  c->r[0]=c->r[13]+0xFFFF8464u; // 800D7DC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D7DCC
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D7DD0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D7DD4
L_800D7DD8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D7DD8
  c->r[0]=0u+0x00000000u; // 800D7DDC
  c->r[3]=c->r[28]|c->r[28]; // 800D7DE0
  c->r[4]=c->r[29]|c->r[29]; // 800D7DE4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D7DE8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D7DEC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D7DF0
  c->lr=0x800D7DF8u; f_8006306C(c); // 800D7DF4
  c->r[10]=c->r[31]|c->r[31]; // 800D7DF8
  c->r[3]=c->r[29]|c->r[29]; // 800D7DFC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7E00
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D7E04
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D7E08
  c->r[1]=c->r[10]|c->r[10]; // 800D7E0C
  c->lr=c->r[0]; // 800D7E10
  return; // 800D7E14
}

// fn_800D7E18
void f_800D7E18(Ctx* __restrict c) {
  trace_call(0x800D7E18u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7E18
  c->r[0]=c->lr; // 800D7E1C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800D7E20
  W32(c->r[1]+0x000000ECu,c->r[31]); // 800D7E24
  c->r[31]=c->r[3]|c->r[3]; // 800D7E28
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7E2C
  cmps(c,0,(int32_t)c->r[4],0); // 800D7E30
  if (crb(c,2)) { goto L_800D7E40; } // 800D7E34
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D7E38
  goto L_800D7E44; // 800D7E3C
L_800D7E40:;
  c->r[0]=0u+0x00000000u; // 800D7E40
L_800D7E44:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7E44
  if (!crb(c,2)) { goto L_800D7FC0; } // 800D7E48
  c->r[3]=c->r[31]|c->r[31]; // 800D7E4C
  c->lr=0x800D7E54u; f_800DBAE4(c); // 800D7E50
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7E54
  c->r[3]=c->r[31]|c->r[31]; // 800D7E58
  c->r[12]=R32(c->r[12]+0x00000114u); // 800D7E5C
  c->ctr=c->r[12]; // 800D7E60
  if (true) { c->lr=0x800D7E68u; dispatch(c,c->ctr); } // 800D7E64
  cmps(c,0,(int32_t)c->r[3],0); // 800D7E68
  if (!crb(c,2)) { goto L_800D7E7C; } // 800D7E6C
  c->r[3]=c->r[31]|c->r[31]; // 800D7E70
  c->lr=0x800D7E78u; f_8005E0F8(c); // 800D7E74
  goto L_800D8048; // 800D7E78
L_800D7E7C:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800D7E7C
  c->r[0]=R32(c->r[3]+0x000000A4u); // 800D7E80
  cmps(c,0,(int32_t)c->r[0],1); // 800D7E84
  if (!crb(c,1)) { goto L_800D7EE0; } // 800D7E88
  c->r[0]=0u+0x00000001u; // 800D7E8C
  W32(c->r[31]+0x000005CCu,c->r[0]); // 800D7E90
  c->lr=0x800D7E98u; f_803B220C(c); // 800D7E94
  c->r[3]=c->r[3]^0x80000000u; // 800D7E98
  c->r[0]=0u+0x43300000u; // 800D7E9C
  W32(c->r[1]+0x000000E4u,c->r[3]); // 800D7EA0
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[3]=RF64(ea);} // 800D7EA4
  W32(c->r[1]+0x000000E0u,c->r[0]); // 800D7EA8
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7EAC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 800D7EB0
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7EB4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D7EB8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D7EBC
  fcmp(c,0,c->f[1],c->f[0]); // 800D7EC0
  if (!crb(c,0)) { goto L_800D7ED4; } // 800D7EC4
  c->r[3]=c->r[31]|c->r[31]; // 800D7EC8
  c->lr=0x800D7ED0u; f_800D8100(c); // 800D7ECC
  goto L_800D8048; // 800D7ED0
L_800D7ED4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7ED4
  c->lr=0x800D7EDCu; f_800D805C(c); // 800D7ED8
  goto L_800D8048; // 800D7EDC
L_800D7EE0:;
  c->r[3]=c->r[31]+0x000001B8u; // 800D7EE0
  c->r[4]=c->r[1]+0x000000B0u; // 800D7EE4
  c->lr=0x800D7EECu; f_80382F2C(c); // 800D7EE8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7EEC
  c->r[3]=c->r[1]+0x00000044u; // 800D7EF0
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7EF4
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7EF8
  c->lr=0x800D7F00u; f_8005FD70(c); // 800D7EFC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7F00
  c->r[3]=c->r[31]|c->r[31]; // 800D7F04
  c->r[4]=c->r[1]+0x00000080u; // 800D7F08
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D7F0C
  c->ctr=c->r[12]; // 800D7F10
  if (true) { c->lr=0x800D7F18u; dispatch(c,c->ctr); } // 800D7F14
  c->r[4]=c->r[3]|c->r[3]; // 800D7F18
  c->r[3]=c->r[1]+0x00000020u; // 800D7F1C
  c->lr=0x800D7F24u; f_80060F28(c); // 800D7F20
  c->r[3]=c->r[1]+0x00000038u; // 800D7F24
  c->r[4]=c->r[1]+0x00000020u; // 800D7F28
  c->lr=0x800D7F30u; f_8005FC20(c); // 800D7F2C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7F30
  c->r[3]=c->r[1]+0x0000002Cu; // 800D7F34
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7F38
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7F3C
  c->lr=0x800D7F44u; f_8005FD70(c); // 800D7F40
  c->r[3]=c->r[1]+0x000000B0u; // 800D7F44
  c->r[4]=c->r[1]+0x00000038u; // 800D7F48
  c->r[5]=c->r[1]+0x00000044u; // 800D7F4C
  c->lr=0x800D7F54u; f_8005FD80(c); // 800D7F50
  c->r[3]=c->r[1]+0x000000B0u; // 800D7F54
  c->r[4]=c->r[1]+0x0000002Cu; // 800D7F58
  c->lr=0x800D7F60u; f_8005CDC8(c); // 800D7F5C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7F60
  c->r[3]=c->r[31]|c->r[31]; // 800D7F64
  c->r[4]=c->r[1]+0x000000B0u; // 800D7F68
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D7F6C
  c->ctr=c->r[12]; // 800D7F70
  if (true) { c->lr=0x800D7F78u; dispatch(c,c->ctr); } // 800D7F74
  c->r[0]=R32(c->r[31]+0x00000630u); // 800D7F78
  c->r[4]=0u+0x80690000u; // 800D7F7C
  c->r[4]=c->r[4]+0xFFFFE828u; // 800D7F80
  c->r[3]=c->r[31]|c->r[31]; // 800D7F84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7F88
  c->r[5]=0u+0x00000001u; // 800D7F8C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7F90
  c->lr=0x800D7F98u; f_80064744(c); // 800D7F94
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7F98
  c->r[4]=c->r[31]|c->r[31]; // 800D7F9C
  c->r[3]=c->r[1]+0x00000014u; // 800D7FA0
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D7FA4
  c->ctr=c->r[12]; // 800D7FA8
  if (true) { c->lr=0x800D7FB0u; dispatch(c,c->ctr); } // 800D7FAC
  c->r[3]=c->r[31]+0x00000604u; // 800D7FB0
  c->r[4]=c->r[1]+0x00000014u; // 800D7FB4
  c->lr=0x800D7FBCu; f_8005DC84(c); // 800D7FB8
  goto L_800D8048; // 800D7FBC
L_800D7FC0:;
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800D7FC0
  c->r[4]=R32(c->r[3]+0x00000444u); // 800D7FC4
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7FC8
  {uint32_t ea=c->r[4]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7FCC
  fcmp(c,0,c->f[1],c->f[0]); // 800D7FD0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D7FD4
  if (!crb(c,2)) { goto L_800D800C; } // 800D7FD8
  c->r[3]=c->r[3]+0x000001B8u; // 800D7FDC
  c->r[4]=c->r[1]+0x00000050u; // 800D7FE0
  c->lr=0x800D7FE8u; f_80382F2C(c); // 800D7FE4
  c->r[3]=c->r[1]+0x00000050u; // 800D7FE8
  c->r[4]=c->r[31]+0x00000604u; // 800D7FEC
  c->lr=0x800D7FF4u; f_8005CDC8(c); // 800D7FF0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D7FF4
  c->r[3]=c->r[31]|c->r[31]; // 800D7FF8
  c->r[4]=c->r[1]+0x00000050u; // 800D7FFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D8000
  c->ctr=c->r[12]; // 800D8004
  if (true) { c->lr=0x800D800Cu; dispatch(c,c->ctr); } // 800D8008
L_800D800C:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D800C
  c->r[4]=c->r[31]|c->r[31]; // 800D8010
  c->r[3]=c->r[1]+0x00000008u; // 800D8014
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D8018
  c->ctr=c->r[12]; // 800D801C
  if (true) { c->lr=0x800D8024u; dispatch(c,c->ctr); } // 800D8020
  c->r[3]=c->r[31]+0x00000604u; // 800D8024
  c->r[4]=c->r[1]+0x00000008u; // 800D8028
  c->lr=0x800D8030u; f_8005DC84(c); // 800D802C
  c->r[3]=c->r[31]+0x00000354u; // 800D8030
  c->lr=0x800D8038u; f_800667AC(c); // 800D8034
  cmps(c,0,(int32_t)c->r[3],0); // 800D8038
  if (crb(c,2)) { goto L_800D8048; } // 800D803C
  c->r[3]=c->r[31]|c->r[31]; // 800D8040
  c->lr=0x800D8048u; f_800DB36C(c); // 800D8044
L_800D8048:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800D8048
  c->r[31]=R32(c->r[1]+0x000000ECu); // 800D804C
  c->lr=c->r[0]; // 800D8050
  c->r[1]=c->r[1]+0x000000F0u; // 800D8054
  return; // 800D8058
}

// fn_800D805C
void f_800D805C(Ctx* __restrict c) {
  trace_call(0x800D805Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D805C
  c->r[0]=c->lr; // 800D8060
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8064
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8068
  c->r[31]=c->r[1]|c->r[1]; // 800D806C
  c->r[28]=c->r[3]|c->r[3]; // 800D8070
  c->lr=0x800D8078u; f_80062D6C(c); // 800D8074
  c->r[4]=c->r[3]|c->r[3]; // 800D8078
  c->r[3]=c->r[28]|c->r[28]; // 800D807C
  c->lr=0x800D8084u; f_80062F4C(c); // 800D8080
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D8084
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8088
  c->r[3]=c->r[28]+c->r[0]; // 800D808C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D8090
  cmps(c,0,(int32_t)c->r[29],0); // 800D8094
  if (crb(c,2)) { goto L_800D80C0; } // 800D8098
  c->r[30]=0u+0x00000000u; // 800D809C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D80A0
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D80A4
  c->lr=0x800D80ACu; f_80062D6C(c); // 800D80A8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D80AC
  c->r[0]=c->r[13]+0xFFFF80C0u; // 800D80B0
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D80B4
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D80B8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D80BC
L_800D80C0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D80C0
  c->r[0]=0u+0x00000000u; // 800D80C4
  c->r[3]=c->r[28]|c->r[28]; // 800D80C8
  c->r[4]=c->r[29]|c->r[29]; // 800D80CC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D80D0
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D80D4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D80D8
  c->lr=0x800D80E0u; f_8006306C(c); // 800D80DC
  c->r[10]=c->r[31]|c->r[31]; // 800D80E0
  c->r[3]=c->r[29]|c->r[29]; // 800D80E4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D80E8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D80EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D80F0
  c->r[1]=c->r[10]|c->r[10]; // 800D80F4
  c->lr=c->r[0]; // 800D80F8
  return; // 800D80FC
}

// fn_800D8100
void f_800D8100(Ctx* __restrict c) {
  trace_call(0x800D8100u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8100
  c->r[0]=c->lr; // 800D8104
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8108
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D810C
  c->r[31]=c->r[1]|c->r[1]; // 800D8110
  c->r[28]=c->r[3]|c->r[3]; // 800D8114
  c->lr=0x800D811Cu; f_80062D3C(c); // 800D8118
  c->r[4]=c->r[3]|c->r[3]; // 800D811C
  c->r[3]=c->r[28]|c->r[28]; // 800D8120
  c->lr=0x800D8128u; f_80062F4C(c); // 800D8124
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D8128
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D812C
  c->r[3]=c->r[28]+c->r[0]; // 800D8130
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D8134
  cmps(c,0,(int32_t)c->r[29],0); // 800D8138
  if (crb(c,2)) { goto L_800D8164; } // 800D813C
  c->r[30]=0u+0x00000000u; // 800D8140
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D8144
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D8148
  c->lr=0x800D8150u; f_80062D3C(c); // 800D814C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D8150
  c->r[0]=c->r[13]+0xFFFF80BCu; // 800D8154
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D8158
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D815C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D8160
L_800D8164:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D8164
  c->r[0]=0u+0x00000000u; // 800D8168
  c->r[3]=c->r[28]|c->r[28]; // 800D816C
  c->r[4]=c->r[29]|c->r[29]; // 800D8170
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D8174
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D8178
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D817C
  c->lr=0x800D8184u; f_8006306C(c); // 800D8180
  c->r[10]=c->r[31]|c->r[31]; // 800D8184
  c->r[3]=c->r[29]|c->r[29]; // 800D8188
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D818C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8190
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8194
  c->r[1]=c->r[10]|c->r[10]; // 800D8198
  c->lr=c->r[0]; // 800D819C
  return; // 800D81A0
}

// fn_800D81A4
void f_800D81A4(Ctx* __restrict c) {
  trace_call(0x800D81A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D81A4
  c->r[0]=c->lr; // 800D81A8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D81AC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D81B0
  c->r[31]=c->r[3]|c->r[3]; // 800D81B4
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D81B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D81BC
  if (crb(c,2)) { goto L_800D81D8; } // 800D81C0
  cmps(c,0,(int32_t)c->r[0],1); // 800D81C4
  if (crb(c,2)) { goto L_800D824C; } // 800D81C8
  cmps(c,0,(int32_t)c->r[0],2); // 800D81CC
  if (crb(c,2)) { goto L_800D8320; } // 800D81D0
  goto L_800D836C; // 800D81D4
L_800D81D8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D81D8
  cmps(c,0,(int32_t)c->r[4],0); // 800D81DC
  if (crb(c,2)) { goto L_800D81EC; } // 800D81E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D81E4
  goto L_800D81F0; // 800D81E8
L_800D81EC:;
  c->r[0]=0u+0x00000000u; // 800D81EC
L_800D81F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D81F0
  if (!crb(c,2)) { goto L_800D821C; } // 800D81F4
  c->r[3]=c->r[31]|c->r[31]; // 800D81F8
  c->lr=0x800D8200u; f_800DBAE4(c); // 800D81FC
  c->r[3]=c->r[31]|c->r[31]; // 800D8200
  c->r[4]=0u+0x000036BBu; // 800D8204
  c->r[5]=0u+0x00000001u; // 800D8208
  c->lr=0x800D8210u; f_80064744(c); // 800D820C
  c->r[0]=0u+0x00000002u; // 800D8210
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800D8214
  goto L_800D836C; // 800D8218
L_800D821C:;
  c->r[3]=c->r[3]+0x00000354u; // 800D821C
  c->lr=0x800D8224u; f_800667AC(c); // 800D8220
  cmps(c,0,(int32_t)c->r[3],0); // 800D8224
  if (crb(c,2)) { goto L_800D836C; } // 800D8228
  c->r[0]=0u+0x00000001u; // 800D822C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D8230
  c->r[3]=c->r[31]|c->r[31]; // 800D8234
  c->lr=0x800D823Cu; f_800D7904(c); // 800D8238
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D823C
  c->r[0]=c->r[0]|0x40000000u; // 800D8240
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D8244
  goto L_800D836C; // 800D8248
L_800D824C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D824C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8250
  if (crb(c,2)) { goto L_800D8260; } // 800D8254
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D8258
  goto L_800D8264; // 800D825C
L_800D8260:;
  c->r[0]=0u+0x00000000u; // 800D8260
L_800D8264:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8264
  if (!crb(c,2)) { goto L_800D82E0; } // 800D8268
  c->r[3]=c->r[31]|c->r[31]; // 800D826C
  c->r[4]=0u+0x000036BCu; // 800D8270
  c->r[5]=0u+0x00000001u; // 800D8274
  c->lr=0x800D827Cu; f_80064744(c); // 800D8278
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D827C
  c->r[3]=c->r[31]|c->r[31]; // 800D8280
  c->r[4]=c->r[1]+0x00000020u; // 800D8284
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D8288
  c->ctr=c->r[12]; // 800D828C
  if (true) { c->lr=0x800D8294u; dispatch(c,c->ctr); } // 800D8290
  c->r[4]=c->r[3]|c->r[3]; // 800D8294
  c->r[3]=c->r[1]+0x00000008u; // 800D8298
  c->lr=0x800D82A0u; f_80060878(c); // 800D829C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D82A0
  c->r[3]=c->r[31]|c->r[31]; // 800D82A4
  c->r[4]=c->r[1]+0x00000050u; // 800D82A8
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D82AC
  c->ctr=c->r[12]; // 800D82B0
  if (true) { c->lr=0x800D82B8u; dispatch(c,c->ctr); } // 800D82B4
  c->r[4]=c->r[3]|c->r[3]; // 800D82B8
  c->r[3]=c->r[1]+0x00000014u; // 800D82BC
  c->lr=0x800D82C4u; f_80060878(c); // 800D82C0
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D82C4
  c->r[3]=c->r[31]|c->r[31]; // 800D82C8
  c->r[4]=c->r[1]+0x00000014u; // 800D82CC
  c->r[5]=c->r[1]+0x00000008u; // 800D82D0
  c->r[6]=0u+0x00000000u; // 800D82D4
  c->lr=0x800D82DCu; f_800D9B18(c); // 800D82D8
  goto L_800D836C; // 800D82DC
L_800D82E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D82E0
  c->r[4]=0u+0x00000000u; // 800D82E4
  c->r[5]=0u+0x00000000u; // 800D82E8
  c->lr=0x800D82F0u; f_800DA368(c); // 800D82EC
  c->r[3]=c->r[31]+0x00000354u; // 800D82F0
  c->lr=0x800D82F8u; f_800667AC(c); // 800D82F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D82F8
  if (crb(c,2)) { goto L_800D836C; } // 800D82FC
  c->r[0]=0u+0x00000002u; // 800D8300
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D8304
  c->r[3]=c->r[31]|c->r[31]; // 800D8308
  c->lr=0x800D8310u; f_800D7904(c); // 800D830C
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D8310
  c->r[0]=c->r[0]|0x40000000u; // 800D8314
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D8318
  goto L_800D836C; // 800D831C
L_800D8320:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8320
  cmps(c,0,(int32_t)c->r[4],0); // 800D8324
  if (crb(c,2)) { goto L_800D8334; } // 800D8328
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D832C
  goto L_800D8338; // 800D8330
L_800D8334:;
  c->r[0]=0u+0x00000000u; // 800D8334
L_800D8338:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8338
  if (!crb(c,2)) { goto L_800D8354; } // 800D833C
  c->r[3]=c->r[31]|c->r[31]; // 800D8340
  c->r[4]=0u+0x000036BDu; // 800D8344
  c->r[5]=0u+0x00000001u; // 800D8348
  c->lr=0x800D8350u; f_80064744(c); // 800D834C
  goto L_800D836C; // 800D8350
L_800D8354:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8354
  c->lr=0x800D835Cu; f_800667AC(c); // 800D8358
  cmps(c,0,(int32_t)c->r[3],0); // 800D835C
  if (crb(c,2)) { goto L_800D836C; } // 800D8360
  c->r[3]=c->r[31]|c->r[31]; // 800D8364
  c->lr=0x800D836Cu; f_800DB36C(c); // 800D8368
L_800D836C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D836C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D8370
  c->lr=c->r[0]; // 800D8374
  c->r[1]=c->r[1]+0x00000090u; // 800D8378
  return; // 800D837C
}

// fn_800D8380
void f_800D8380(Ctx* __restrict c) {
  trace_call(0x800D8380u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8380
  c->r[0]=c->lr; // 800D8384
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D8388
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D838C
  c->r[31]=c->r[3]|c->r[3]; // 800D8390
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D8394
  cmps(c,0,(int32_t)c->r[0],0); // 800D8398
  if (crb(c,2)) { goto L_800D83B4; } // 800D839C
  cmps(c,0,(int32_t)c->r[0],1); // 800D83A0
  if (crb(c,2)) { goto L_800D8434; } // 800D83A4
  cmps(c,0,(int32_t)c->r[0],2); // 800D83A8
  if (crb(c,2)) { goto L_800D8514; } // 800D83AC
  goto L_800D856C; // 800D83B0
L_800D83B4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D83B4
  cmps(c,0,(int32_t)c->r[4],0); // 800D83B8
  if (crb(c,2)) { goto L_800D83C8; } // 800D83BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D83C0
  goto L_800D83CC; // 800D83C4
L_800D83C8:;
  c->r[0]=0u+0x00000000u; // 800D83C8
L_800D83CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D83CC
  if (!crb(c,2)) { goto L_800D8404; } // 800D83D0
  c->r[3]=c->r[31]|c->r[31]; // 800D83D4
  c->lr=0x800D83DCu; f_800DBAE4(c); // 800D83D8
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D83DC
  c->r[4]=c->r[2]+0xFFFFA488u; // 800D83E0
  c->r[3]=c->r[31]|c->r[31]; // 800D83E4
  c->r[5]=0u+0x00000001u; // 800D83E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D83EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D83F0
  c->lr=0x800D83F8u; f_80064744(c); // 800D83F4
  c->r[0]=0u+0x00000002u; // 800D83F8
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800D83FC
  goto L_800D856C; // 800D8400
L_800D8404:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8404
  c->lr=0x800D840Cu; f_800667AC(c); // 800D8408
  cmps(c,0,(int32_t)c->r[3],0); // 800D840C
  if (crb(c,2)) { goto L_800D856C; } // 800D8410
  c->r[0]=0u+0x00000001u; // 800D8414
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D8418
  c->r[3]=c->r[31]|c->r[31]; // 800D841C
  c->lr=0x800D8424u; f_800D8580(c); // 800D8420
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D8424
  c->r[0]=c->r[0]|0x40000000u; // 800D8428
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D842C
  goto L_800D856C; // 800D8430
L_800D8434:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8434
  cmps(c,0,(int32_t)c->r[3],0); // 800D8438
  if (crb(c,2)) { goto L_800D8448; } // 800D843C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D8440
  goto L_800D844C; // 800D8444
L_800D8448:;
  c->r[0]=0u+0x00000000u; // 800D8448
L_800D844C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D844C
  if (!crb(c,2)) { goto L_800D84D4; } // 800D8450
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D8454
  c->r[4]=c->r[2]+0xFFFFA490u; // 800D8458
  c->r[3]=c->r[31]|c->r[31]; // 800D845C
  c->r[5]=0u+0x00000001u; // 800D8460
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8464
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D8468
  c->lr=0x800D8470u; f_80064744(c); // 800D846C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D8470
  c->r[3]=c->r[31]|c->r[31]; // 800D8474
  c->r[4]=c->r[1]+0x00000020u; // 800D8478
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D847C
  c->ctr=c->r[12]; // 800D8480
  if (true) { c->lr=0x800D8488u; dispatch(c,c->ctr); } // 800D8484
  c->r[4]=c->r[3]|c->r[3]; // 800D8488
  c->r[3]=c->r[1]+0x00000008u; // 800D848C
  c->lr=0x800D8494u; f_80060878(c); // 800D8490
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D8494
  c->r[3]=c->r[31]|c->r[31]; // 800D8498
  c->r[4]=c->r[1]+0x00000050u; // 800D849C
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D84A0
  c->ctr=c->r[12]; // 800D84A4
  if (true) { c->lr=0x800D84ACu; dispatch(c,c->ctr); } // 800D84A8
  c->r[4]=c->r[3]|c->r[3]; // 800D84AC
  c->r[3]=c->r[1]+0x00000014u; // 800D84B0
  c->lr=0x800D84B8u; f_80060878(c); // 800D84B4
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D84B8
  c->r[3]=c->r[31]|c->r[31]; // 800D84BC
  c->r[4]=c->r[1]+0x00000014u; // 800D84C0
  c->r[5]=c->r[1]+0x00000008u; // 800D84C4
  c->r[6]=0u+0x00000000u; // 800D84C8
  c->lr=0x800D84D0u; f_800D9B18(c); // 800D84CC
  goto L_800D856C; // 800D84D0
L_800D84D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D84D4
  c->r[4]=0u+0x00000000u; // 800D84D8
  c->r[5]=0u+0x00000000u; // 800D84DC
  c->lr=0x800D84E4u; f_800DA368(c); // 800D84E0
  c->r[3]=c->r[31]+0x00000354u; // 800D84E4
  c->lr=0x800D84ECu; f_800667AC(c); // 800D84E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D84EC
  if (crb(c,2)) { goto L_800D856C; } // 800D84F0
  c->r[0]=0u+0x00000002u; // 800D84F4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D84F8
  c->r[3]=c->r[31]|c->r[31]; // 800D84FC
  c->lr=0x800D8504u; f_800D8580(c); // 800D8500
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D8504
  c->r[0]=c->r[0]|0x40000000u; // 800D8508
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D850C
  goto L_800D856C; // 800D8510
L_800D8514:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8514
  cmps(c,0,(int32_t)c->r[4],0); // 800D8518
  if (crb(c,2)) { goto L_800D8528; } // 800D851C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8520
  goto L_800D852C; // 800D8524
L_800D8528:;
  c->r[0]=0u+0x00000000u; // 800D8528
L_800D852C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D852C
  if (!crb(c,2)) { goto L_800D8554; } // 800D8530
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D8534
  c->r[4]=c->r[2]+0xFFFFA498u; // 800D8538
  c->r[3]=c->r[31]|c->r[31]; // 800D853C
  c->r[5]=0u+0x00000001u; // 800D8540
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8544
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D8548
  c->lr=0x800D8550u; f_80064744(c); // 800D854C
  goto L_800D856C; // 800D8550
L_800D8554:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8554
  c->lr=0x800D855Cu; f_800667AC(c); // 800D8558
  cmps(c,0,(int32_t)c->r[3],0); // 800D855C
  if (crb(c,2)) { goto L_800D856C; } // 800D8560
  c->r[3]=c->r[31]|c->r[31]; // 800D8564
  c->lr=0x800D856Cu; f_800DB36C(c); // 800D8568
L_800D856C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D856C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D8570
  c->lr=c->r[0]; // 800D8574
  c->r[1]=c->r[1]+0x00000090u; // 800D8578
  return; // 800D857C
}

// fn_800D8580
void f_800D8580(Ctx* __restrict c) {
  trace_call(0x800D8580u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8580
  c->r[0]=c->lr; // 800D8584
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8588
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D858C
  c->r[31]=c->r[1]|c->r[1]; // 800D8590
  c->r[28]=c->r[3]|c->r[3]; // 800D8594
  c->lr=0x800D859Cu; f_800D4A84(c); // 800D8598
  c->r[4]=c->r[3]|c->r[3]; // 800D859C
  c->r[3]=c->r[28]|c->r[28]; // 800D85A0
  c->lr=0x800D85A8u; f_80062F4C(c); // 800D85A4
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D85A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D85AC
  c->r[3]=c->r[28]+c->r[0]; // 800D85B0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D85B4
  cmps(c,0,(int32_t)c->r[29],0); // 800D85B8
  if (crb(c,2)) { goto L_800D85E4; } // 800D85BC
  c->r[30]=0u+0x00000000u; // 800D85C0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D85C4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D85C8
  c->lr=0x800D85D0u; f_800D4A84(c); // 800D85CC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D85D0
  c->r[0]=c->r[13]+0xFFFF845Cu; // 800D85D4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D85D8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D85DC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D85E0
L_800D85E4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D85E4
  c->r[0]=0u+0x00000000u; // 800D85E8
  c->r[3]=c->r[28]|c->r[28]; // 800D85EC
  c->r[4]=c->r[29]|c->r[29]; // 800D85F0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D85F4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D85F8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D85FC
  c->lr=0x800D8604u; f_8006306C(c); // 800D8600
  c->r[10]=c->r[31]|c->r[31]; // 800D8604
  c->r[3]=c->r[29]|c->r[29]; // 800D8608
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D860C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8610
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8614
  c->r[1]=c->r[10]|c->r[10]; // 800D8618
  c->lr=c->r[0]; // 800D861C
  return; // 800D8620
}

// fn_800D8624
void f_800D8624(Ctx* __restrict c) {
  trace_call(0x800D8624u);
  {uint32_t ea=c->r[1]+0xFFFFFB40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8624
  c->r[0]=c->lr; // 800D8628
  W32(c->r[1]+0x000004C4u,c->r[0]); // 800D862C
  W32(c->r[1]+0x000004BCu,c->r[31]); // 800D8630
  c->r[31]=c->r[3]|c->r[3]; // 800D8634
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D8638
  cmps(c,0,(int32_t)c->r[0],0); // 800D863C
  if (crb(c,2)) { goto L_800D8668; } // 800D8640
  cmps(c,0,(int32_t)c->r[0],1); // 800D8644
  if (crb(c,2)) { goto L_800D86EC; } // 800D8648
  cmps(c,0,(int32_t)c->r[0],2); // 800D864C
  if (crb(c,2)) { goto L_800D87B8; } // 800D8650
  cmps(c,0,(int32_t)c->r[0],3); // 800D8654
  if (crb(c,2)) { goto L_800D8838; } // 800D8658
  cmps(c,0,(int32_t)c->r[0],4); // 800D865C
  if (crb(c,2)) { goto L_800D89D8; } // 800D8660
  goto L_800D8A40; // 800D8664
L_800D8668:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8668
  cmps(c,0,(int32_t)c->r[4],0); // 800D866C
  if (crb(c,2)) { goto L_800D867C; } // 800D8670
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8674
  goto L_800D8680; // 800D8678
L_800D867C:;
  c->r[0]=0u+0x00000000u; // 800D867C
L_800D8680:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8680
  if (!crb(c,2)) { goto L_800D86B8; } // 800D8684
  c->r[3]=c->r[31]|c->r[31]; // 800D8688
  c->lr=0x800D8690u; f_800DBAE4(c); // 800D868C
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D8690
  c->r[4]=c->r[2]+0xFFFFA458u; // 800D8694
  c->r[3]=c->r[31]|c->r[31]; // 800D8698
  c->r[5]=0u+0x00000001u; // 800D869C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D86A0
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D86A4
  c->lr=0x800D86ACu; f_80064744(c); // 800D86A8
  c->r[0]=0u+0x00000002u; // 800D86AC
  W32(c->r[31]+0x000005C0u,c->r[0]); // 800D86B0
  goto L_800D8A40; // 800D86B4
L_800D86B8:;
  c->r[3]=c->r[3]+0x00000354u; // 800D86B8
  c->lr=0x800D86C0u; f_800667AC(c); // 800D86BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D86C0
  if (crb(c,2)) { goto L_800D8A40; } // 800D86C4
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D86C8
  c->r[3]=c->r[31]|c->r[31]; // 800D86CC
  c->r[0]=c->r[4]+0x00000001u; // 800D86D0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D86D4
  c->lr=0x800D86DCu; f_800D8A54(c); // 800D86D8
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D86DC
  c->r[0]=c->r[0]|0x40000000u; // 800D86E0
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D86E4
  goto L_800D8A40; // 800D86E8
L_800D86EC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D86EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D86F0
  if (crb(c,2)) { goto L_800D8700; } // 800D86F4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D86F8
  goto L_800D8704; // 800D86FC
L_800D8700:;
  c->r[0]=0u+0x00000000u; // 800D8700
L_800D8704:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8704
  if (!crb(c,2)) { goto L_800D8774; } // 800D8708
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D870C
  c->r[4]=c->r[2]+0xFFFFA460u; // 800D8710
  c->r[3]=c->r[31]|c->r[31]; // 800D8714
  c->r[5]=0u+0x00000001u; // 800D8718
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D871C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D8720
  c->lr=0x800D8728u; f_80064744(c); // 800D8724
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D8728
  c->r[3]=c->r[31]|c->r[31]; // 800D872C
  c->r[4]=c->r[1]+0x00000138u; // 800D8730
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D8734
  c->ctr=c->r[12]; // 800D8738
  if (true) { c->lr=0x800D8740u; dispatch(c,c->ctr); } // 800D873C
  c->r[4]=c->r[3]|c->r[3]; // 800D8740
  c->r[3]=c->r[1]+0x00000044u; // 800D8744
  c->lr=0x800D874Cu; f_80060878(c); // 800D8748
  c->r[4]=R32(c->r[31]+0x0000041Cu); // 800D874C
  c->r[3]=c->r[1]+0x00000050u; // 800D8750
  c->lr=0x800D8758u; f_800C2FB8(c); // 800D8754
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8758
  c->r[3]=c->r[31]|c->r[31]; // 800D875C
  c->r[4]=c->r[1]+0x00000050u; // 800D8760
  c->r[5]=c->r[1]+0x00000044u; // 800D8764
  c->r[6]=0u+0x00000001u; // 800D8768
  c->lr=0x800D8770u; f_800D9B18(c); // 800D876C
  goto L_800D8A40; // 800D8770
L_800D8774:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8774
  c->r[4]=0u+0x00000001u; // 800D8778
  c->r[5]=0u+0x00000001u; // 800D877C
  c->lr=0x800D8784u; f_800DA368(c); // 800D8780
  c->r[3]=c->r[31]+0x00000354u; // 800D8784
  c->lr=0x800D878Cu; f_800667AC(c); // 800D8788
  cmps(c,0,(int32_t)c->r[3],0); // 800D878C
  if (crb(c,2)) { goto L_800D8A40; } // 800D8790
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D8794
  c->r[3]=c->r[31]|c->r[31]; // 800D8798
  c->r[0]=c->r[4]+0x00000001u; // 800D879C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D87A0
  c->lr=0x800D87A8u; f_800D8A54(c); // 800D87A4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D87A8
  c->r[0]=c->r[0]|0x40000000u; // 800D87AC
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D87B0
  goto L_800D8A40; // 800D87B4
L_800D87B8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D87B8
  cmps(c,0,(int32_t)c->r[4],0); // 800D87BC
  if (crb(c,2)) { goto L_800D87CC; } // 800D87C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D87C4
  goto L_800D87D0; // 800D87C8
L_800D87CC:;
  c->r[0]=0u+0x00000000u; // 800D87CC
L_800D87D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D87D0
  if (!crb(c,2)) { goto L_800D87F8; } // 800D87D4
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D87D8
  c->r[4]=c->r[2]+0xFFFFA468u; // 800D87DC
  c->r[3]=c->r[31]|c->r[31]; // 800D87E0
  c->r[5]=0u+0x00000001u; // 800D87E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D87E8
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D87EC
  c->lr=0x800D87F4u; f_80064744(c); // 800D87F0
  goto L_800D8A40; // 800D87F4
L_800D87F8:;
  c->r[3]=c->r[3]+0x00000354u; // 800D87F8
  c->lr=0x800D8800u; f_800667AC(c); // 800D87FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D8800
  if (crb(c,2)) { goto L_800D8A40; } // 800D8804
  c->r[3]=c->r[31]|c->r[31]; // 800D8808
  c->r[4]=0u+0x00000001u; // 800D880C
  c->lr=0x800D8814u; f_800DA944(c); // 800D8810
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D8814
  c->r[3]=c->r[31]|c->r[31]; // 800D8818
  c->r[0]=c->r[4]+0x00000001u; // 800D881C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D8820
  c->lr=0x800D8828u; f_800D8A54(c); // 800D8824
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D8828
  c->r[0]=c->r[0]|0x40000000u; // 800D882C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D8830
  goto L_800D8A40; // 800D8834
L_800D8838:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8838
  cmps(c,0,(int32_t)c->r[3],0); // 800D883C
  if (crb(c,2)) { goto L_800D884C; } // 800D8840
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D8844
  goto L_800D8850; // 800D8848
L_800D884C:;
  c->r[0]=0u+0x00000000u; // 800D884C
L_800D8850:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8850
  if (!crb(c,2)) { goto L_800D8994; } // 800D8854
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D8858
  c->r[4]=c->r[2]+0xFFFFA478u; // 800D885C
  c->r[3]=c->r[31]|c->r[31]; // 800D8860
  c->r[5]=0u+0x00000001u; // 800D8864
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8868
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D886C
  c->lr=0x800D8874u; f_80064744(c); // 800D8870
  c->r[3]=c->r[1]+0x00000168u; // 800D8874
  c->lr=0x800D887Cu; f_8006585C(c); // 800D8878
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D887C
  c->r[3]=c->r[31]|c->r[31]; // 800D8880
  c->r[4]=c->r[1]+0x00000108u; // 800D8884
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D8888
  c->ctr=c->r[12]; // 800D888C
  if (true) { c->lr=0x800D8894u; dispatch(c,c->ctr); } // 800D8890
  c->r[4]=c->r[3]|c->r[3]; // 800D8894
  c->r[3]=c->r[1]+0x00000068u; // 800D8898
  c->lr=0x800D88A0u; f_80060878(c); // 800D889C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D88A0
  c->r[3]=c->r[1]+0x00000038u; // 800D88A4
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D88A8
  c->f[3]=c->f[1]; // 800D88AC
  c->lr=0x800D88B4u; f_8005FD70(c); // 800D88B0
  c->r[3]=c->r[1]+0x0000005Cu; // 800D88B4
  c->r[4]=c->r[1]+0x00000068u; // 800D88B8
  c->r[5]=c->r[1]+0x00000038u; // 800D88BC
  c->lr=0x800D88C4u; f_800772A0(c); // 800D88C0
  c->r[3]=c->r[1]+0x00000068u; // 800D88C4
  c->r[4]=c->r[1]+0x0000005Cu; // 800D88C8
  c->r[5]=c->r[1]+0x00000168u; // 800D88CC
  c->lr=0x800D88D4u; f_8005EB78(c); // 800D88D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D88D4
  if (crb(c,2)) { goto L_800D8928; } // 800D88D8
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D88DC
  c->r[3]=c->r[31]|c->r[31]; // 800D88E0
  c->r[4]=c->r[1]+0x000000D8u; // 800D88E4
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D88E8
  c->ctr=c->r[12]; // 800D88EC
  if (true) { c->lr=0x800D88F4u; dispatch(c,c->ctr); } // 800D88F0
  c->r[4]=c->r[3]|c->r[3]; // 800D88F4
  c->r[3]=c->r[1]+0x00000020u; // 800D88F8
  c->lr=0x800D8900u; f_80060878(c); // 800D88FC
  c->r[3]=c->r[1]+0x0000002Cu; // 800D8900
  c->r[4]=c->r[1]+0x00000190u; // 800D8904
  c->lr=0x800D890Cu; f_8005CD7C(c); // 800D8908
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D890C
  c->r[4]=c->r[3]|c->r[3]; // 800D8910
  c->r[3]=c->r[31]|c->r[31]; // 800D8914
  c->r[5]=c->r[1]+0x00000020u; // 800D8918
  c->r[6]=0u+0x00000001u; // 800D891C
  c->lr=0x800D8924u; f_800D9B18(c); // 800D8920
  goto L_800D8988; // 800D8924
L_800D8928:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D8928
  c->r[3]=c->r[31]|c->r[31]; // 800D892C
  c->r[4]=c->r[1]+0x00000078u; // 800D8930
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D8934
  c->ctr=c->r[12]; // 800D8938
  if (true) { c->lr=0x800D8940u; dispatch(c,c->ctr); } // 800D893C
  c->r[4]=c->r[3]|c->r[3]; // 800D8940
  c->r[3]=c->r[1]+0x00000008u; // 800D8944
  c->lr=0x800D894Cu; f_80060878(c); // 800D8948
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D894C
  c->r[3]=c->r[31]|c->r[31]; // 800D8950
  c->r[4]=c->r[1]+0x000000A8u; // 800D8954
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D8958
  c->ctr=c->r[12]; // 800D895C
  if (true) { c->lr=0x800D8964u; dispatch(c,c->ctr); } // 800D8960
  c->r[4]=c->r[3]|c->r[3]; // 800D8964
  c->r[3]=c->r[1]+0x00000014u; // 800D8968
  c->lr=0x800D8970u; f_80060878(c); // 800D896C
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8970
  c->r[3]=c->r[31]|c->r[31]; // 800D8974
  c->r[4]=c->r[1]+0x00000014u; // 800D8978
  c->r[5]=c->r[1]+0x00000008u; // 800D897C
  c->r[6]=0u+0x00000001u; // 800D8980
  c->lr=0x800D8988u; f_800D9B18(c); // 800D8984
L_800D8988:;
  c->r[0]=0u+0x00000000u; // 800D8988
  W32(c->r[1]+0x000004B0u,c->r[0]); // 800D898C
  goto L_800D8A40; // 800D8990
L_800D8994:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8994
  c->r[4]=0u+0x00000001u; // 800D8998
  c->r[5]=0u+0x00000001u; // 800D899C
  c->lr=0x800D89A4u; f_800DA368(c); // 800D89A0
  c->r[3]=c->r[31]+0x00000354u; // 800D89A4
  c->lr=0x800D89ACu; f_800667AC(c); // 800D89A8
  cmps(c,0,(int32_t)c->r[3],0); // 800D89AC
  if (crb(c,2)) { goto L_800D8A40; } // 800D89B0
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D89B4
  c->r[3]=c->r[31]|c->r[31]; // 800D89B8
  c->r[0]=c->r[4]+0x00000001u; // 800D89BC
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D89C0
  c->lr=0x800D89C8u; f_800D8A54(c); // 800D89C4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D89C8
  c->r[0]=c->r[0]|0x40000000u; // 800D89CC
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D89D0
  goto L_800D8A40; // 800D89D4
L_800D89D8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D89D8
  cmps(c,0,(int32_t)c->r[4],0); // 800D89DC
  if (crb(c,2)) { goto L_800D89EC; } // 800D89E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D89E4
  goto L_800D89F0; // 800D89E8
L_800D89EC:;
  c->r[0]=0u+0x00000000u; // 800D89EC
L_800D89F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D89F0
  if (!crb(c,2)) { goto L_800D8A20; } // 800D89F4
  c->r[0]=R32(c->r[31]+0x000005CCu); // 800D89F8
  c->r[4]=c->r[2]+0xFFFFA480u; // 800D89FC
  c->r[3]=c->r[31]|c->r[31]; // 800D8A00
  c->r[5]=0u+0x00000001u; // 800D8A04
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8A08
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D8A0C
  c->lr=0x800D8A14u; f_80064744(c); // 800D8A10
  c->r[3]=c->r[31]|c->r[31]; // 800D8A14
  c->lr=0x800D8A1Cu; f_8006052C(c); // 800D8A18
  goto L_800D8A40; // 800D8A1C
L_800D8A20:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8A20
  c->lr=0x800D8A28u; f_800667AC(c); // 800D8A24
  cmps(c,0,(int32_t)c->r[3],0); // 800D8A28
  if (crb(c,2)) { goto L_800D8A40; } // 800D8A2C
  c->r[3]=c->r[31]|c->r[31]; // 800D8A30
  c->lr=0x800D8A38u; f_8006053C(c); // 800D8A34
  c->r[3]=c->r[31]|c->r[31]; // 800D8A38
  c->lr=0x800D8A40u; f_800DB36C(c); // 800D8A3C
L_800D8A40:;
  c->r[0]=R32(c->r[1]+0x000004C4u); // 800D8A40
  c->r[31]=R32(c->r[1]+0x000004BCu); // 800D8A44
  c->lr=c->r[0]; // 800D8A48
  c->r[1]=c->r[1]+0x000004C0u; // 800D8A4C
  return; // 800D8A50
}

// fn_800D8A54
void f_800D8A54(Ctx* __restrict c) {
  trace_call(0x800D8A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A54
  c->r[0]=c->lr; // 800D8A58
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8A5C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8A60
  c->r[31]=c->r[1]|c->r[1]; // 800D8A64
  c->r[28]=c->r[3]|c->r[3]; // 800D8A68
  c->lr=0x800D8A70u; f_800D49E0(c); // 800D8A6C
  c->r[4]=c->r[3]|c->r[3]; // 800D8A70
  c->r[3]=c->r[28]|c->r[28]; // 800D8A74
  c->lr=0x800D8A7Cu; f_80062F4C(c); // 800D8A78
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D8A7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8A80
  c->r[3]=c->r[28]+c->r[0]; // 800D8A84
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D8A88
  cmps(c,0,(int32_t)c->r[29],0); // 800D8A8C
  if (crb(c,2)) { goto L_800D8AB8; } // 800D8A90
  c->r[30]=0u+0x00000000u; // 800D8A94
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D8A98
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D8A9C
  c->lr=0x800D8AA4u; f_800D49E0(c); // 800D8AA0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D8AA4
  c->r[0]=c->r[13]+0xFFFF8458u; // 800D8AA8
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D8AAC
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D8AB0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D8AB4
L_800D8AB8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D8AB8
  c->r[0]=0u+0x00000000u; // 800D8ABC
  c->r[3]=c->r[28]|c->r[28]; // 800D8AC0
  c->r[4]=c->r[29]|c->r[29]; // 800D8AC4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D8AC8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D8ACC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D8AD0
  c->lr=0x800D8AD8u; f_8006306C(c); // 800D8AD4
  c->r[10]=c->r[31]|c->r[31]; // 800D8AD8
  c->r[3]=c->r[29]|c->r[29]; // 800D8ADC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8AE0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8AE4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8AE8
  c->r[1]=c->r[10]|c->r[10]; // 800D8AEC
  c->lr=c->r[0]; // 800D8AF0
  return; // 800D8AF4
}

// fn_800D8AF8
void f_800D8AF8(Ctx* __restrict c) {
  trace_call(0x800D8AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8AF8
  c->r[0]=c->lr; // 800D8AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8B04
  c->r[31]=c->r[3]|c->r[3]; // 800D8B08
  c->r[3]=c->r[3]+0x00000354u; // 800D8B0C
  c->lr=0x800D8B14u; f_800667AC(c); // 800D8B10
  cmps(c,0,(int32_t)c->r[3],0); // 800D8B14
  if (crb(c,2)) { goto L_800D8B80; } // 800D8B18
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D8B1C
  cmps(c,0,(int32_t)c->r[0],1); // 800D8B20
  if (crb(c,2)) { goto L_800D8B34; } // 800D8B24
  cmps(c,0,(int32_t)c->r[0],2); // 800D8B28
  if (crb(c,2)) { goto L_800D8B78; } // 800D8B2C
  goto L_800D8B80; // 800D8B30
L_800D8B34:;
  c->r[0]=R32(c->r[31]+0x000005C4u); // 800D8B34
  cmps(c,0,(int32_t)c->r[0],0); // 800D8B38
  if (crb(c,2)) { goto L_800D8B54; } // 800D8B3C
  cmps(c,0,(int32_t)c->r[0],1); // 800D8B40
  if (crb(c,2)) { goto L_800D8B60; } // 800D8B44
  cmps(c,0,(int32_t)c->r[0],2); // 800D8B48
  if (crb(c,2)) { goto L_800D8B6C; } // 800D8B4C
  goto L_800D8B80; // 800D8B50
L_800D8B54:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8B54
  c->lr=0x800D8B5Cu; f_800D805C(c); // 800D8B58
  goto L_800D8B80; // 800D8B5C
L_800D8B60:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8B60
  c->lr=0x800D8B68u; f_800D8100(c); // 800D8B64
  goto L_800D8B80; // 800D8B68
L_800D8B6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8B6C
  c->lr=0x800D8B74u; f_800D8B94(c); // 800D8B70
  goto L_800D8B80; // 800D8B74
L_800D8B78:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8B78
  c->lr=0x800D8B80u; f_800DB36C(c); // 800D8B7C
L_800D8B80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8B80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8B84
  c->lr=c->r[0]; // 800D8B88
  c->r[1]=c->r[1]+0x00000010u; // 800D8B8C
  return; // 800D8B90
}

// fn_800D8B94
void f_800D8B94(Ctx* __restrict c) {
  trace_call(0x800D8B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8B94
  c->r[0]=c->lr; // 800D8B98
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8B9C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8BA0
  c->r[31]=c->r[1]|c->r[1]; // 800D8BA4
  c->r[28]=c->r[3]|c->r[3]; // 800D8BA8
  c->lr=0x800D8BB0u; f_800D4EA0(c); // 800D8BAC
  c->r[4]=c->r[3]|c->r[3]; // 800D8BB0
  c->r[3]=c->r[28]|c->r[28]; // 800D8BB4
  c->lr=0x800D8BBCu; f_80062F4C(c); // 800D8BB8
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D8BBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8BC0
  c->r[3]=c->r[28]+c->r[0]; // 800D8BC4
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D8BC8
  cmps(c,0,(int32_t)c->r[29],0); // 800D8BCC
  if (crb(c,2)) { goto L_800D8BF8; } // 800D8BD0
  c->r[30]=0u+0x00000000u; // 800D8BD4
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D8BD8
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D8BDC
  c->lr=0x800D8BE4u; f_800D4EA0(c); // 800D8BE0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D8BE4
  c->r[0]=c->r[13]+0xFFFF846Cu; // 800D8BE8
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D8BEC
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D8BF0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D8BF4
L_800D8BF8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D8BF8
  c->r[0]=0u+0x00000000u; // 800D8BFC
  c->r[3]=c->r[28]|c->r[28]; // 800D8C00
  c->r[4]=c->r[29]|c->r[29]; // 800D8C04
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D8C08
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D8C0C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D8C10
  c->lr=0x800D8C18u; f_8006306C(c); // 800D8C14
  c->r[10]=c->r[31]|c->r[31]; // 800D8C18
  c->r[3]=c->r[29]|c->r[29]; // 800D8C1C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8C20
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8C24
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8C28
  c->r[1]=c->r[10]|c->r[10]; // 800D8C2C
  c->lr=c->r[0]; // 800D8C30
  return; // 800D8C34
}

// fn_800D8C38
void f_800D8C38(Ctx* __restrict c) {
  trace_call(0x800D8C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C38
  c->r[0]=c->lr; // 800D8C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8C44
  c->r[31]=c->r[3]|c->r[3]; // 800D8C48
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D8C4C
  cmps(c,0,(int32_t)c->r[0],0); // 800D8C50
  if (crb(c,2)) { goto L_800D8C64; } // 800D8C54
  cmps(c,0,(int32_t)c->r[0],1); // 800D8C58
  if (crb(c,2)) { goto L_800D8CCC; } // 800D8C5C
  goto L_800D8D74; // 800D8C60
L_800D8C64:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8C64
  cmps(c,0,(int32_t)c->r[4],0); // 800D8C68
  if (crb(c,2)) { goto L_800D8C78; } // 800D8C6C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8C70
  goto L_800D8C7C; // 800D8C74
L_800D8C78:;
  c->r[0]=0u+0x00000000u; // 800D8C78
L_800D8C7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8C7C
  if (!crb(c,2)) { goto L_800D8C98; } // 800D8C80
  c->r[3]=c->r[31]|c->r[31]; // 800D8C84
  c->r[4]=0u+0x000036D3u; // 800D8C88
  c->r[5]=0u+0x00000001u; // 800D8C8C
  c->lr=0x800D8C94u; f_80064744(c); // 800D8C90
  goto L_800D8D74; // 800D8C94
L_800D8C98:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8C98
  c->lr=0x800D8CA0u; f_800667AC(c); // 800D8C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8CA0
  if (crb(c,2)) { goto L_800D8D74; } // 800D8CA4
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D8CA8
  c->r[3]=c->r[31]|c->r[31]; // 800D8CAC
  c->r[0]=c->r[4]+0x00000001u; // 800D8CB0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D8CB4
  c->lr=0x800D8CBCu; f_800D8D88(c); // 800D8CB8
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D8CBC
  c->r[0]=c->r[0]|0x40000000u; // 800D8CC0
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D8CC4
  goto L_800D8D74; // 800D8CC8
L_800D8CCC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8CCC
  cmps(c,0,(int32_t)c->r[4],0); // 800D8CD0
  if (crb(c,2)) { goto L_800D8CE0; } // 800D8CD4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8CD8
  goto L_800D8CE4; // 800D8CDC
L_800D8CE0:;
  c->r[0]=0u+0x00000000u; // 800D8CE0
L_800D8CE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8CE4
  if (!crb(c,2)) { goto L_800D8D00; } // 800D8CE8
  c->r[3]=c->r[31]|c->r[31]; // 800D8CEC
  c->r[4]=0u+0x000036DAu; // 800D8CF0
  c->r[5]=0u+0x00000001u; // 800D8CF4
  c->lr=0x800D8CFCu; f_80064744(c); // 800D8CF8
  goto L_800D8D74; // 800D8CFC
L_800D8D00:;
  c->r[3]=c->r[3]+0x00000354u; // 800D8D00
  c->lr=0x800D8D08u; f_800667AC(c); // 800D8D04
  cmps(c,0,(int32_t)c->r[3],0); // 800D8D08
  if (crb(c,2)) { goto L_800D8D74; } // 800D8D0C
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D8D10
  cmps(c,0,(int32_t)c->r[0],1); // 800D8D14
  if (crb(c,2)) { goto L_800D8D28; } // 800D8D18
  cmps(c,0,(int32_t)c->r[0],2); // 800D8D1C
  if (crb(c,2)) { goto L_800D8D6C; } // 800D8D20
  goto L_800D8D74; // 800D8D24
L_800D8D28:;
  c->r[0]=R32(c->r[31]+0x000005C4u); // 800D8D28
  cmps(c,0,(int32_t)c->r[0],0); // 800D8D2C
  if (crb(c,2)) { goto L_800D8D48; } // 800D8D30
  cmps(c,0,(int32_t)c->r[0],1); // 800D8D34
  if (crb(c,2)) { goto L_800D8D54; } // 800D8D38
  cmps(c,0,(int32_t)c->r[0],2); // 800D8D3C
  if (crb(c,2)) { goto L_800D8D60; } // 800D8D40
  goto L_800D8D74; // 800D8D44
L_800D8D48:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8D48
  c->lr=0x800D8D50u; f_800D805C(c); // 800D8D4C
  goto L_800D8D74; // 800D8D50
L_800D8D54:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8D54
  c->lr=0x800D8D5Cu; f_800D8100(c); // 800D8D58
  goto L_800D8D74; // 800D8D5C
L_800D8D60:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8D60
  c->lr=0x800D8D68u; f_800D8B94(c); // 800D8D64
  goto L_800D8D74; // 800D8D68
L_800D8D6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8D6C
  c->lr=0x800D8D74u; f_800DB36C(c); // 800D8D70
L_800D8D74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8D78
  c->lr=c->r[0]; // 800D8D7C
  c->r[1]=c->r[1]+0x00000010u; // 800D8D80
  return; // 800D8D84
}

// fn_800D8D88
void f_800D8D88(Ctx* __restrict c) {
  trace_call(0x800D8D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D88
  c->r[0]=c->lr; // 800D8D8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8D90
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8D94
  c->r[31]=c->r[1]|c->r[1]; // 800D8D98
  c->r[28]=c->r[3]|c->r[3]; // 800D8D9C
  c->lr=0x800D8DA4u; f_80062E2C(c); // 800D8DA0
  c->r[4]=c->r[3]|c->r[3]; // 800D8DA4
  c->r[3]=c->r[28]|c->r[28]; // 800D8DA8
  c->lr=0x800D8DB0u; f_80062F4C(c); // 800D8DAC
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D8DB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8DB4
  c->r[3]=c->r[28]+c->r[0]; // 800D8DB8
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D8DBC
  cmps(c,0,(int32_t)c->r[29],0); // 800D8DC0
  if (crb(c,2)) { goto L_800D8DEC; } // 800D8DC4
  c->r[30]=0u+0x00000000u; // 800D8DC8
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D8DCC
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D8DD0
  c->lr=0x800D8DD8u; f_80062E2C(c); // 800D8DD4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D8DD8
  c->r[0]=c->r[13]+0xFFFF80B4u; // 800D8DDC
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D8DE0
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D8DE4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D8DE8
L_800D8DEC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D8DEC
  c->r[0]=0u+0x00000000u; // 800D8DF0
  c->r[3]=c->r[28]|c->r[28]; // 800D8DF4
  c->r[4]=c->r[29]|c->r[29]; // 800D8DF8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D8DFC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D8E00
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D8E04
  c->lr=0x800D8E0Cu; f_8006306C(c); // 800D8E08
  c->r[10]=c->r[31]|c->r[31]; // 800D8E0C
  c->r[3]=c->r[29]|c->r[29]; // 800D8E10
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8E14
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8E18
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8E1C
  c->r[1]=c->r[10]|c->r[10]; // 800D8E20
  c->lr=c->r[0]; // 800D8E24
  return; // 800D8E28
}

// fn_800D8E2C
void f_800D8E2C(Ctx* __restrict c) {
  trace_call(0x800D8E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8E2C
  c->r[0]=c->lr; // 800D8E30
  W32(c->r[1]+0x00000114u,c->r[0]); // 800D8E34
  c->r[11]=c->r[1]+0x00000100u; // 800D8E38
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800D8E3C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800D8E40
  c->lr=0x800D8E48u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D8E44
  c->r[31]=c->r[1]|c->r[1]; // 800D8E48
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D8E4C
  c->r[30]=c->r[3]|c->r[3]; // 800D8E50
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E54
  if (crb(c,2)) { goto L_800D8E68; } // 800D8E58
  cmps(c,0,(int32_t)c->r[0],1); // 800D8E5C
  if (crb(c,2)) { goto L_800D8FE0; } // 800D8E60
  goto L_800D9168; // 800D8E64
L_800D8E68:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8E68
  cmps(c,0,(int32_t)c->r[4],0); // 800D8E6C
  if (crb(c,2)) { goto L_800D8E7C; } // 800D8E70
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8E74
  goto L_800D8E80; // 800D8E78
L_800D8E7C:;
  c->r[0]=0u+0x00000000u; // 800D8E7C
L_800D8E80:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E80
  if (!crb(c,2)) { goto L_800D8EC8; } // 800D8E84
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8E88
  c->r[4]=c->r[30]|c->r[30]; // 800D8E8C
  {uint32_t ea=c->r[3]+0x00000620u; WF32(ea,c->f[0]);} // 800D8E90
  c->r[3]=c->r[31]+0x0000004Cu; // 800D8E94
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D8E98
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D8E9C
  c->ctr=c->r[12]; // 800D8EA0
  if (true) { c->lr=0x800D8EA8u; dispatch(c,c->ctr); } // 800D8EA4
  c->r[3]=c->r[30]+0x00000604u; // 800D8EA8
  c->r[4]=c->r[31]+0x0000004Cu; // 800D8EAC
  c->lr=0x800D8EB4u; f_8005DC84(c); // 800D8EB0
  c->r[3]=c->r[30]|c->r[30]; // 800D8EB4
  c->r[4]=0u+0x000036D8u; // 800D8EB8
  c->r[5]=0u+0x00000001u; // 800D8EBC
  c->lr=0x800D8EC4u; f_80064744(c); // 800D8EC0
  goto L_800D9168; // 800D8EC4
L_800D8EC8:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D8EC8
  c->r[4]=c->r[30]|c->r[30]; // 800D8ECC
  c->r[3]=c->r[31]+0x00000064u; // 800D8ED0
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D8ED4
  c->ctr=c->r[12]; // 800D8ED8
  if (true) { c->lr=0x800D8EE0u; dispatch(c,c->ctr); } // 800D8EDC
  c->r[3]=R32(c->r[30]+0x00000404u); // 800D8EE0
  c->lr=0x800D8EE8u; f_802EA4B0(c); // 800D8EE4
  c->f[31]=c->f[1]; // 800D8EE8
  c->r[3]=c->r[31]+0x00000034u; // 800D8EEC
  c->r[4]=c->r[31]+0x00000064u; // 800D8EF0
  c->r[5]=c->r[30]+0x00000604u; // 800D8EF4
  c->lr=0x800D8EFCu; f_800772A0(c); // 800D8EF8
  c->r[29]=0u+0x00000000u; // 800D8EFC
  W8(c->r[31]+0x00000018u,c->r[29]); // 800D8F00
  c->r[3]=c->r[31]+0x00000018u; // 800D8F04
  c->lr=0x800D8F0Cu; f_8004714C(c); // 800D8F08
  {uint32_t ea=c->r[30]+0x00000620u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8F0C
  c->r[4]=c->r[31]+0x00000034u; // 800D8F10
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8F14
  c->r[3]=c->r[31]+0x00000040u; // 800D8F18
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 800D8F1C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800D8F20
  c->lr=0x800D8F28u; f_8005ED34(c); // 800D8F24
  c->r[3]=c->r[30]+0x00000614u; // 800D8F28
  c->r[4]=c->r[31]+0x00000040u; // 800D8F2C
  c->lr=0x800D8F34u; f_8005DC84(c); // 800D8F30
  c->r[3]=c->r[30]+0x00000604u; // 800D8F34
  c->r[4]=c->r[31]+0x00000064u; // 800D8F38
  c->lr=0x800D8F40u; f_8005DC84(c); // 800D8F3C
  {uint32_t ea=c->r[30]+0x00000620u; WF32(ea,c->f[31]);} // 800D8F40
  c->r[3]=R32(c->r[30]+0x00000404u); // 800D8F44
  c->lr=0x800D8F4Cu; f_802EA4B0(c); // 800D8F48
  {uint32_t ea=c->r[2]+0xFFFFA4ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8F4C
  fcmp(c,0,c->f[1],c->f[0]); // 800D8F50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D8F54
  if (!crb(c,2)) { goto L_800D9168; } // 800D8F58
  c->r[3]=R32(c->r[30]+0x000005C8u); // 800D8F5C
  c->r[0]=c->r[3]+0x00000001u; // 800D8F60
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800D8F64
  c->lr=0x800D8F6Cu; f_800D4854(c); // 800D8F68
  c->r[4]=c->r[3]|c->r[3]; // 800D8F6C
  c->r[3]=c->r[30]|c->r[30]; // 800D8F70
  c->lr=0x800D8F78u; f_80062F4C(c); // 800D8F74
  c->r[0]=R8(c->r[30]+0x00000010u); // 800D8F78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8F7C
  c->r[3]=c->r[30]+c->r[0]; // 800D8F80
  c->r[28]=R32(c->r[3]+0x00000014u); // 800D8F84
  cmps(c,0,(int32_t)c->r[28],0); // 800D8F88
  if (crb(c,2)) { goto L_800D8FB0; } // 800D8F8C
  W32(c->r[31]+0x00000084u,c->r[1]); // 800D8F90
  W8(c->r[31]+0x00000014u,c->r[29]); // 800D8F94
  c->lr=0x800D8F9Cu; f_800D4854(c); // 800D8F98
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D8F9C
  c->r[0]=c->r[13]+0xFFFF8454u; // 800D8FA0
  W32(c->r[28]+0x00000004u,c->r[0]); // 800D8FA4
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D8FA8
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800D8FAC
L_800D8FB0:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800D8FB0
  c->r[0]=0u+0x00000000u; // 800D8FB4
  c->r[3]=c->r[30]|c->r[30]; // 800D8FB8
  c->r[4]=c->r[28]|c->r[28]; // 800D8FBC
  W32(c->r[28]+0x00000008u,c->r[0]); // 800D8FC0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D8FC4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D8FC8
  c->lr=0x800D8FD0u; f_8006306C(c); // 800D8FCC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 800D8FD0
  c->r[0]=c->r[0]|0x40000000u; // 800D8FD4
  W32(c->r[30]+0x000005BCu,c->r[0]); // 800D8FD8
  goto L_800D9168; // 800D8FDC
L_800D8FE0:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8FE0
  cmps(c,0,(int32_t)c->r[4],0); // 800D8FE4
  if (crb(c,2)) { goto L_800D8FF4; } // 800D8FE8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8FEC
  goto L_800D8FF8; // 800D8FF0
L_800D8FF4:;
  c->r[0]=0u+0x00000000u; // 800D8FF4
L_800D8FF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8FF8
  if (!crb(c,2)) { goto L_800D9008; } // 800D8FFC
  {uint32_t ea=c->r[2]+0xFFFFA4F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9000
  {uint32_t ea=c->r[3]+0x00000610u; WF32(ea,c->f[0]);} // 800D9004
L_800D9008:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9008
  c->lr=0x800D9010u; f_8005EA80(c); // 800D900C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9010
  if (!crb(c,2)) { goto L_800D90F0; } // 800D9014
  c->r[29]=0u+0x00000000u; // 800D9018
  W8(c->r[31]+0x00000008u,c->r[29]); // 800D901C
  c->r[3]=c->r[31]+0x00000008u; // 800D9020
  c->lr=0x800D9028u; f_8004714C(c); // 800D9024
  c->r[28]=R32(c->r[3]+0x00000034u); // 800D9028
  c->r[3]=c->r[31]+0x0000000Cu; // 800D902C
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800D9030
  c->lr=0x800D9038u; f_8004714C(c); // 800D9034
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D9038
  c->r[3]=c->r[31]+0x00000010u; // 800D903C
  W8(c->r[31]+0x00000010u,c->r[29]); // 800D9040
  c->lr=0x800D9048u; f_8004714C(c); // 800D9044
  c->r[4]=c->r[28]^0x80000000u; // 800D9048
  c->r[0]=0u+0x43300000u; // 800D904C
  W32(c->r[31]+0x000000ECu,c->r[4]); // 800D9050
  c->r[4]=c->r[31]+0x000000B8u; // 800D9054
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800D9058
  W32(c->r[31]+0x000000E8u,c->r[0]); // 800D905C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9060
  c->r[3]=c->r[30]+0x000001B8u; // 800D9064
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=RF64(ea);} // 800D9068
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D906C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D9070
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800D9074
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800D9078
  c->f[31]=c->ps1[31]=S(c->f[3]/c->f[0]); // 800D907C
  c->lr=0x800D9084u; f_80382F2C(c); // 800D9080
  c->f[1]=c->f[31]; // 800D9084
  c->r[3]=c->r[31]+0x0000001Cu; // 800D9088
  c->r[4]=c->r[30]+0x00000614u; // 800D908C
  c->lr=0x800D9094u; f_800D6C88(c); // 800D9090
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9094
  c->r[4]=c->r[30]|c->r[30]; // 800D9098
  c->r[3]=c->r[31]+0x00000028u; // 800D909C
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D90A0
  c->ctr=c->r[12]; // 800D90A4
  if (true) { c->lr=0x800D90ACu; dispatch(c,c->ctr); } // 800D90A8
  c->r[3]=c->r[31]+0x00000058u; // 800D90AC
  c->r[4]=c->r[31]+0x00000028u; // 800D90B0
  c->r[5]=c->r[31]+0x0000001Cu; // 800D90B4
  c->lr=0x800D90BCu; f_8005ED10(c); // 800D90B8
  c->r[3]=c->r[31]+0x000000B8u; // 800D90BC
  c->r[4]=c->r[31]+0x00000058u; // 800D90C0
  c->lr=0x800D90C8u; f_8005CDC8(c); // 800D90C4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D90C8
  c->r[3]=c->r[30]|c->r[30]; // 800D90CC
  c->r[4]=c->r[31]+0x000000B8u; // 800D90D0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D90D4
  c->ctr=c->r[12]; // 800D90D8
  if (true) { c->lr=0x800D90E0u; dispatch(c,c->ctr); } // 800D90DC
  {uint32_t ea=c->r[30]+0x00000610u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D90E0
  {uint32_t ea=c->r[30]+0x00000618u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D90E4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[31],-c->f[0])); // 800D90E8
  {uint32_t ea=c->r[30]+0x00000618u; WF32(ea,c->f[0]);} // 800D90EC
L_800D90F0:;
  c->r[3]=c->r[30]+0x00000354u; // 800D90F0
  c->lr=0x800D90F8u; f_800667AC(c); // 800D90F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D90F8
  if (crb(c,2)) { goto L_800D9168; } // 800D90FC
  c->r[3]=c->r[30]|c->r[30]; // 800D9100
  c->lr=0x800D9108u; f_8005EA80(c); // 800D9104
  cmps(c,0,(int32_t)c->r[3],0); // 800D9108
  if (crb(c,2)) { goto L_800D9168; } // 800D910C
  c->r[3]=c->r[30]+0x000001B8u; // 800D9110
  c->r[4]=c->r[31]+0x00000088u; // 800D9114
  c->lr=0x800D911Cu; f_80382F2C(c); // 800D9118
  c->r[3]=R32(c->r[30]+0x00000408u); // 800D911C
  c->lr=0x800D9124u; f_8005BB78(c); // 800D9120
  c->r[4]=c->r[3]|c->r[3]; // 800D9124
  c->r[3]=c->r[31]+0x00000088u; // 800D9128
  c->r[4]=c->r[4]+0x00000028u; // 800D912C
  c->lr=0x800D9134u; f_8005CDC8(c); // 800D9130
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9134
  c->r[3]=c->r[30]|c->r[30]; // 800D9138
  c->r[4]=c->r[31]+0x00000088u; // 800D913C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D9140
  c->ctr=c->r[12]; // 800D9144
  if (true) { c->lr=0x800D914Cu; dispatch(c,c->ctr); } // 800D9148
  c->r[0]=0u+0x00000003u; // 800D914C
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800D9150
  c->r[3]=c->r[30]|c->r[30]; // 800D9154
  c->lr=0x800D915Cu; f_800D9190(c); // 800D9158
  c->r[0]=R32(c->r[30]+0x000005BCu); // 800D915C
  c->r[0]=c->r[0]|0x40000000u; // 800D9160
  W32(c->r[30]+0x000005BCu,c->r[0]); // 800D9164
L_800D9168:;
  c->r[10]=c->r[31]|c->r[31]; // 800D9168
  c->r[11]=c->r[10]+0x00000100u; // 800D916C
  {uint32_t ea=c->r[10]+0x00000108u; psq_load(c,31,ea,0,0);} // 800D9170
  {uint32_t ea=c->r[31]+0x00000100u; c->f[31]=RF64(ea);} // 800D9174
  c->lr=0x800D917Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9178
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D917C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D9180
  c->r[1]=c->r[10]|c->r[10]; // 800D9184
  c->lr=c->r[0]; // 800D9188
  return; // 800D918C
}

// fn_800D9190
void f_800D9190(Ctx* __restrict c) {
  trace_call(0x800D9190u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9190
  c->r[0]=c->lr; // 800D9194
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D9198
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D919C
  c->r[31]=c->r[1]|c->r[1]; // 800D91A0
  c->r[28]=c->r[3]|c->r[3]; // 800D91A4
  c->lr=0x800D91ACu; f_800D47B0(c); // 800D91A8
  c->r[4]=c->r[3]|c->r[3]; // 800D91AC
  c->r[3]=c->r[28]|c->r[28]; // 800D91B0
  c->lr=0x800D91B8u; f_80062F4C(c); // 800D91B4
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D91B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D91BC
  c->r[3]=c->r[28]+c->r[0]; // 800D91C0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D91C4
  cmps(c,0,(int32_t)c->r[29],0); // 800D91C8
  if (crb(c,2)) { goto L_800D91F4; } // 800D91CC
  c->r[30]=0u+0x00000000u; // 800D91D0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D91D4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D91D8
  c->lr=0x800D91E0u; f_800D47B0(c); // 800D91DC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D91E0
  c->r[0]=c->r[13]+0xFFFF8450u; // 800D91E4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D91E8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D91EC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D91F0
L_800D91F4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D91F4
  c->r[0]=0u+0x00000000u; // 800D91F8
  c->r[3]=c->r[28]|c->r[28]; // 800D91FC
  c->r[4]=c->r[29]|c->r[29]; // 800D9200
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D9204
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D9208
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D920C
  c->lr=0x800D9214u; f_8006306C(c); // 800D9210
  c->r[10]=c->r[31]|c->r[31]; // 800D9214
  c->r[3]=c->r[29]|c->r[29]; // 800D9218
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D921C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D9220
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D9224
  c->r[1]=c->r[10]|c->r[10]; // 800D9228
  c->lr=c->r[0]; // 800D922C
  return; // 800D9230
}

// fn_800D9234
void f_800D9234(Ctx* __restrict c) {
  trace_call(0x800D9234u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9234
  c->r[0]=c->lr; // 800D9238
  W32(c->r[1]+0x00000154u,c->r[0]); // 800D923C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 800D9240
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 800D9244
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 800D9248
  c->r[31]=c->r[3]|c->r[3]; // 800D924C
  W32(c->r[1]+0x00000138u,c->r[30]); // 800D9250
  c->r[0]=R32(c->r[3]+0x000005C8u); // 800D9254
  cmps(c,0,(int32_t)c->r[0],0); // 800D9258
  if (crb(c,2)) { goto L_800D9284; } // 800D925C
  cmps(c,0,(int32_t)c->r[0],4); // 800D9260
  if (crb(c,2)) { goto L_800D9464; } // 800D9264
  cmps(c,0,(int32_t)c->r[0],1); // 800D9268
  if (crb(c,2)) { goto L_800D9548; } // 800D926C
  cmps(c,0,(int32_t)c->r[0],2); // 800D9270
  if (crb(c,2)) { goto L_800D9638; } // 800D9274
  cmps(c,0,(int32_t)c->r[0],3); // 800D9278
  if (crb(c,2)) { goto L_800D9714; } // 800D927C
  goto L_800D9798; // 800D9280
L_800D9284:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D9284
  cmps(c,0,(int32_t)c->r[3],0); // 800D9288
  if (crb(c,2)) { goto L_800D9298; } // 800D928C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D9290
  goto L_800D929C; // 800D9294
L_800D9298:;
  c->r[0]=0u+0x00000000u; // 800D9298
L_800D929C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D929C
  if (!crb(c,2)) { goto L_800D92F4; } // 800D92A0
  c->r[3]=c->r[31]|c->r[31]; // 800D92A4
  c->lr=0x800D92ACu; f_800DBAE4(c); // 800D92A8
  c->r[3]=c->r[31]|c->r[31]; // 800D92AC
  c->lr=0x800D92B4u; f_8006053C(c); // 800D92B0
  c->r[0]=R32(c->r[31]+0x000005D4u); // 800D92B4
  cmps(c,0,(int32_t)c->r[0],1); // 800D92B8
  if (crb(c,2)) { goto L_800D92CC; } // 800D92BC
  cmps(c,0,(int32_t)c->r[0],2); // 800D92C0
  if (crb(c,2)) { goto L_800D92E0; } // 800D92C4
  goto L_800D9798; // 800D92C8
L_800D92CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D92CC
  c->r[4]=0u+0x000036D4u; // 800D92D0
  c->r[5]=0u+0x00000001u; // 800D92D4
  c->lr=0x800D92DCu; f_80064744(c); // 800D92D8
  goto L_800D9798; // 800D92DC
L_800D92E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D92E0
  c->r[4]=0u+0x000036D6u; // 800D92E4
  c->r[5]=0u+0x00000001u; // 800D92E8
  c->lr=0x800D92F0u; f_80064744(c); // 800D92EC
  goto L_800D9798; // 800D92F0
L_800D92F4:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D92F4
  c->r[3]=c->r[31]|c->r[31]; // 800D92F8
  c->r[4]=c->r[1]+0x000000A8u; // 800D92FC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800D9300
  c->ctr=c->r[12]; // 800D9304
  if (true) { c->lr=0x800D930Cu; dispatch(c,c->ctr); } // 800D9308
  c->r[4]=c->r[3]|c->r[3]; // 800D930C
  c->r[3]=c->r[1]+0x00000020u; // 800D9310
  c->lr=0x800D9318u; f_80060878(c); // 800D9314
  {uint32_t ea=c->r[2]+0xFFFFA4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9318
  c->r[3]=c->r[31]|c->r[31]; // 800D931C
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9320
  c->r[4]=c->r[1]+0x00000020u; // 800D9324
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9328
  c->lr=0x800D9330u; f_800634E8(c); // 800D932C
  c->r[3]=R32(c->r[31]+0x00000404u); // 800D9330
  c->lr=0x800D9338u; f_802EA4B0(c); // 800D9334
  {uint32_t ea=c->r[2]+0xFFFFA4FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9338
  fcmp(c,0,c->f[1],c->f[0]); // 800D933C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D9340
  if (!crb(c,2)) { goto L_800D942C; } // 800D9344
  c->r[3]=c->r[31]|c->r[31]; // 800D9348
  c->lr=0x800D9350u; f_8005EA80(c); // 800D934C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9350
  if (crb(c,2)) { goto L_800D942C; } // 800D9354
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D9358
  c->r[3]=c->r[31]|c->r[31]; // 800D935C
  c->r[12]=R32(c->r[12]+0x00000100u); // 800D9360
  c->ctr=c->r[12]; // 800D9364
  if (true) { c->lr=0x800D936Cu; dispatch(c,c->ctr); } // 800D9368
  cmps(c,0,(int32_t)c->r[3],0); // 800D936C
  if (!crb(c,2)) { goto L_800D9408; } // 800D9370
  c->r[3]=c->r[31]|c->r[31]; // 800D9374
  c->lr=0x800D937Cu; f_8005EAA0(c); // 800D9378
  c->r[30]=c->r[3]|c->r[3]; // 800D937C
  c->r[3]=c->r[1]+0x00000014u; // 800D9380
  c->r[4]=c->r[31]+0x000001B8u; // 800D9384
  c->lr=0x800D938Cu; f_80061F40(c); // 800D9388
  c->r[3]=c->r[1]+0x00000014u; // 800D938C
  c->r[4]=c->r[30]+0x00000038u; // 800D9390
  c->lr=0x800D9398u; f_800D97B8(c); // 800D9394
  c->f[31]=c->f[1]; // 800D9398
  c->r[3]=c->r[31]+0x000001B8u; // 800D939C
  c->r[4]=c->r[1]+0x00000108u; // 800D93A0
  c->lr=0x800D93A8u; f_80382F2C(c); // 800D93A4
  {uint32_t ea=c->r[1]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D93A8
  c->r[3]=c->r[1]+0x00000038u; // 800D93AC
  {uint32_t ea=c->r[1]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D93B0
  {uint32_t ea=c->r[1]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D93B4
  c->lr=0x800D93BCu; f_8005FD70(c); // 800D93B8
  {uint32_t ea=c->r[2]+0xFFFFA500u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D93BC
  c->r[3]=c->r[1]+0x00000078u; // 800D93C0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D93C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800D93C8
  c->f[3]=c->f[2]; // 800D93CC
  c->lr=0x800D93D4u; f_804E18A0(c); // 800D93D0
  c->r[3]=c->r[1]+0x00000108u; // 800D93D4
  c->r[4]=c->r[1]+0x00000078u; // 800D93D8
  c->r[5]=c->r[3]|c->r[3]; // 800D93DC
  c->lr=0x800D93E4u; f_8030DA28(c); // 800D93E0
  c->r[3]=c->r[1]+0x00000108u; // 800D93E4
  c->r[4]=c->r[1]+0x00000038u; // 800D93E8
  c->lr=0x800D93F0u; f_8005CDC8(c); // 800D93EC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D93F0
  c->r[3]=c->r[31]|c->r[31]; // 800D93F4
  c->r[4]=c->r[1]+0x00000108u; // 800D93F8
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D93FC
  c->ctr=c->r[12]; // 800D9400
  if (true) { c->lr=0x800D9408u; dispatch(c,c->ctr); } // 800D9404
L_800D9408:;
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D9408
  c->r[3]=c->r[31]|c->r[31]; // 800D940C
  c->r[0]=c->r[4]+0x00000001u; // 800D9410
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D9414
  c->lr=0x800D941Cu; f_800D9190(c); // 800D9418
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D941C
  c->r[0]=c->r[0]|0x40000000u; // 800D9420
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D9424
  goto L_800D9798; // 800D9428
L_800D942C:;
  c->r[3]=c->r[31]+0x00000354u; // 800D942C
  c->lr=0x800D9434u; f_800667AC(c); // 800D9430
  cmps(c,0,(int32_t)c->r[3],0); // 800D9434
  if (crb(c,2)) { goto L_800D9798; } // 800D9438
  c->r[0]=0u+0x00000004u; // 800D943C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D9440
  c->r[3]=c->r[31]|c->r[31]; // 800D9444
  c->lr=0x800D944Cu; f_8006052C(c); // 800D9448
  c->r[3]=c->r[31]|c->r[31]; // 800D944C
  c->lr=0x800D9454u; f_800D9190(c); // 800D9450
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D9454
  c->r[0]=c->r[0]|0x40000000u; // 800D9458
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D945C
  goto L_800D9798; // 800D9460
L_800D9464:;
  c->lr=0x800D9468u; f_8005EA80(c); // 800D9464
  cmps(c,0,(int32_t)c->r[3],0); // 800D9468
  if (crb(c,2)) { goto L_800D9798; } // 800D946C
  c->r[3]=c->r[31]|c->r[31]; // 800D9470
  c->lr=0x800D9478u; f_8006053C(c); // 800D9474
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D9478
  c->r[3]=c->r[31]|c->r[31]; // 800D947C
  c->r[12]=R32(c->r[12]+0x00000100u); // 800D9480
  c->ctr=c->r[12]; // 800D9484
  if (true) { c->lr=0x800D948Cu; dispatch(c,c->ctr); } // 800D9488
  cmps(c,0,(int32_t)c->r[3],0); // 800D948C
  if (!crb(c,2)) { goto L_800D9528; } // 800D9490
  c->r[3]=c->r[31]|c->r[31]; // 800D9494
  c->lr=0x800D949Cu; f_8005EAA0(c); // 800D9498
  c->r[30]=c->r[3]|c->r[3]; // 800D949C
  c->r[3]=c->r[1]+0x00000008u; // 800D94A0
  c->r[4]=c->r[31]+0x000001B8u; // 800D94A4
  c->lr=0x800D94ACu; f_80061F40(c); // 800D94A8
  c->r[3]=c->r[1]+0x00000008u; // 800D94AC
  c->r[4]=c->r[30]+0x00000038u; // 800D94B0
  c->lr=0x800D94B8u; f_800D97B8(c); // 800D94B4
  c->f[31]=c->f[1]; // 800D94B8
  c->r[3]=c->r[31]+0x000001B8u; // 800D94BC
  c->r[4]=c->r[1]+0x000000D8u; // 800D94C0
  c->lr=0x800D94C8u; f_80382F2C(c); // 800D94C4
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D94C8
  c->r[3]=c->r[1]+0x0000002Cu; // 800D94CC
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D94D0
  {uint32_t ea=c->r[1]+0x00000104u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D94D4
  c->lr=0x800D94DCu; f_8005FD70(c); // 800D94D8
  {uint32_t ea=c->r[2]+0xFFFFA500u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94DC
  c->r[3]=c->r[1]+0x00000048u; // 800D94E0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D94E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800D94E8
  c->f[3]=c->f[2]; // 800D94EC
  c->lr=0x800D94F4u; f_804E18A0(c); // 800D94F0
  c->r[3]=c->r[1]+0x000000D8u; // 800D94F4
  c->r[4]=c->r[1]+0x00000048u; // 800D94F8
  c->r[5]=c->r[3]|c->r[3]; // 800D94FC
  c->lr=0x800D9504u; f_8030DA28(c); // 800D9500
  c->r[3]=c->r[1]+0x000000D8u; // 800D9504
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9508
  c->lr=0x800D9510u; f_8005CDC8(c); // 800D950C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D9510
  c->r[3]=c->r[31]|c->r[31]; // 800D9514
  c->r[4]=c->r[1]+0x000000D8u; // 800D9518
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D951C
  c->ctr=c->r[12]; // 800D9520
  if (true) { c->lr=0x800D9528u; dispatch(c,c->ctr); } // 800D9524
L_800D9528:;
  c->r[0]=0u+0x00000001u; // 800D9528
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D952C
  c->r[3]=c->r[31]|c->r[31]; // 800D9530
  c->lr=0x800D9538u; f_800D9190(c); // 800D9534
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D9538
  c->r[0]=c->r[0]|0x40000000u; // 800D953C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D9540
  goto L_800D9798; // 800D9544
L_800D9548:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D9548
  cmps(c,0,(int32_t)c->r[4],0); // 800D954C
  if (crb(c,2)) { goto L_800D955C; } // 800D9550
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9554
  goto L_800D9560; // 800D9558
L_800D955C:;
  c->r[0]=0u+0x00000000u; // 800D955C
L_800D9560:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9560
  if (!crb(c,2)) { goto L_800D95C4; } // 800D9564
  c->r[0]=R32(c->r[3]+0x000005D4u); // 800D9568
  cmps(c,0,(int32_t)c->r[0],1); // 800D956C
  if (crb(c,2)) { goto L_800D9588; } // 800D9570
  cmps(c,0,(int32_t)c->r[0],2); // 800D9574
  if (crb(c,2)) { goto L_800D959C; } // 800D9578
  cmps(c,0,(int32_t)c->r[0],3); // 800D957C
  if (crb(c,2)) { goto L_800D95B0; } // 800D9580
  goto L_800D9798; // 800D9584
L_800D9588:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9588
  c->r[4]=0u+0x000036D5u; // 800D958C
  c->r[5]=0u+0x00000001u; // 800D9590
  c->lr=0x800D9598u; f_80064744(c); // 800D9594
  goto L_800D9798; // 800D9598
L_800D959C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D959C
  c->r[4]=0u+0x000036D7u; // 800D95A0
  c->r[5]=0u+0x00000001u; // 800D95A4
  c->lr=0x800D95ACu; f_80064744(c); // 800D95A8
  goto L_800D9798; // 800D95AC
L_800D95B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D95B0
  c->r[4]=0u+0x000036D9u; // 800D95B4
  c->r[5]=0u+0x00000001u; // 800D95B8
  c->lr=0x800D95C0u; f_80064744(c); // 800D95BC
  goto L_800D9798; // 800D95C0
L_800D95C4:;
  c->r[3]=c->r[3]+0x00000354u; // 800D95C4
  c->lr=0x800D95CCu; f_800667AC(c); // 800D95C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D95CC
  if (crb(c,2)) { goto L_800D9798; } // 800D95D0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D95D4
  c->r[3]=c->r[31]|c->r[31]; // 800D95D8
  c->r[12]=R32(c->r[12]+0x00000100u); // 800D95DC
  c->ctr=c->r[12]; // 800D95E0
  if (true) { c->lr=0x800D95E8u; dispatch(c,c->ctr); } // 800D95E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D95E8
  if (!crb(c,2)) { goto L_800D9614; } // 800D95EC
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D95F0
  c->r[3]=c->r[31]|c->r[31]; // 800D95F4
  c->r[0]=c->r[4]+0x00000002u; // 800D95F8
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D95FC
  c->lr=0x800D9604u; f_800D9190(c); // 800D9600
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D9604
  c->r[0]=c->r[0]|0x40000000u; // 800D9608
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D960C
  goto L_800D9798; // 800D9610
L_800D9614:;
  c->r[4]=R32(c->r[31]+0x000005C8u); // 800D9614
  c->r[3]=c->r[31]|c->r[31]; // 800D9618
  c->r[0]=c->r[4]+0x00000001u; // 800D961C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 800D9620
  c->lr=0x800D9628u; f_800D9190(c); // 800D9624
  c->r[0]=R32(c->r[31]+0x000005BCu); // 800D9628
  c->r[0]=c->r[0]|0x40000000u; // 800D962C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 800D9630
  goto L_800D9798; // 800D9634
L_800D9638:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D9638
  cmps(c,0,(int32_t)c->r[4],0); // 800D963C
  if (crb(c,2)) { goto L_800D964C; } // 800D9640
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9644
  goto L_800D9650; // 800D9648
L_800D964C:;
  c->r[0]=0u+0x00000000u; // 800D964C
L_800D9650:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9650
  if (!crb(c,2)) { goto L_800D969C; } // 800D9654
  c->r[3]=R32(c->r[3]+0x000005D4u); // 800D9658
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D965C
  cmpu(c,0,c->r[0],0x00000001u); // 800D9660
  if (!crb(c,1)) { goto L_800D9674; } // 800D9664
  cmps(c,0,(int32_t)c->r[3],3); // 800D9668
  if (crb(c,2)) { goto L_800D9688; } // 800D966C
  goto L_800D9798; // 800D9670
L_800D9674:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9674
  c->r[4]=0u+0x000036DAu; // 800D9678
  c->r[5]=0u+0x00000001u; // 800D967C
  c->lr=0x800D9684u; f_80064744(c); // 800D9680
  goto L_800D9798; // 800D9684
L_800D9688:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9688
  c->r[4]=0u+0x000036E5u; // 800D968C
  c->r[5]=0u+0x00000001u; // 800D9690
  c->lr=0x800D9698u; f_80064744(c); // 800D9694
  goto L_800D9798; // 800D9698
L_800D969C:;
  c->r[3]=c->r[3]+0x00000354u; // 800D969C
  c->lr=0x800D96A4u; f_800667AC(c); // 800D96A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D96A4
  if (crb(c,2)) { goto L_800D9798; } // 800D96A8
  c->r[0]=R32(c->r[31]+0x000005C0u); // 800D96AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D96B0
  if (crb(c,2)) { goto L_800D96C4; } // 800D96B4
  cmps(c,0,(int32_t)c->r[0],2); // 800D96B8
  if (crb(c,2)) { goto L_800D9708; } // 800D96BC
  goto L_800D9798; // 800D96C0
L_800D96C4:;
  c->r[0]=R32(c->r[31]+0x000005C4u); // 800D96C4
  cmps(c,0,(int32_t)c->r[0],0); // 800D96C8
  if (crb(c,2)) { goto L_800D96E4; } // 800D96CC
  cmps(c,0,(int32_t)c->r[0],1); // 800D96D0
  if (crb(c,2)) { goto L_800D96F0; } // 800D96D4
  cmps(c,0,(int32_t)c->r[0],2); // 800D96D8
  if (crb(c,2)) { goto L_800D96FC; } // 800D96DC
  goto L_800D9798; // 800D96E0
L_800D96E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D96E4
  c->lr=0x800D96ECu; f_800D805C(c); // 800D96E8
  goto L_800D9798; // 800D96EC
L_800D96F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D96F0
  c->lr=0x800D96F8u; f_800D8100(c); // 800D96F4
  goto L_800D9798; // 800D96F8
L_800D96FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D96FC
  c->lr=0x800D9704u; f_800D8B94(c); // 800D9700
  goto L_800D9798; // 800D9704
L_800D9708:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9708
  c->lr=0x800D9710u; f_800DB36C(c); // 800D970C
  goto L_800D9798; // 800D9710
L_800D9714:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D9714
  cmps(c,0,(int32_t)c->r[4],0); // 800D9718
  if (crb(c,2)) { goto L_800D9728; } // 800D971C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9720
  goto L_800D972C; // 800D9724
L_800D9728:;
  c->r[0]=0u+0x00000000u; // 800D9728
L_800D972C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D972C
  if (!crb(c,2)) { goto L_800D9780; } // 800D9730
  c->r[0]=R32(c->r[3]+0x000005D4u); // 800D9734
  cmps(c,0,(int32_t)c->r[0],1); // 800D9738
  if (crb(c,2)) { goto L_800D9754; } // 800D973C
  cmps(c,0,(int32_t)c->r[0],2); // 800D9740
  if (crb(c,2)) { goto L_800D9768; } // 800D9744
  cmps(c,0,(int32_t)c->r[0],3); // 800D9748
  if (crb(c,2)) { goto L_800D9774; } // 800D974C
  goto L_800D9798; // 800D9750
L_800D9754:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9754
  c->r[4]=0u+0x000036DBu; // 800D9758
  c->r[5]=0u+0x00000001u; // 800D975C
  c->lr=0x800D9764u; f_80064744(c); // 800D9760
  goto L_800D9798; // 800D9764
L_800D9768:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9768
  c->lr=0x800D9770u; f_800D98D4(c); // 800D976C
  goto L_800D9798; // 800D9770
L_800D9774:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9774
  c->lr=0x800D977Cu; f_800D98D4(c); // 800D9778
  goto L_800D9798; // 800D977C
L_800D9780:;
  c->r[3]=c->r[3]+0x00000354u; // 800D9780
  c->lr=0x800D9788u; f_800667AC(c); // 800D9784
  cmps(c,0,(int32_t)c->r[3],0); // 800D9788
  if (crb(c,2)) { goto L_800D9798; } // 800D978C
  c->r[3]=c->r[31]|c->r[31]; // 800D9790
  c->lr=0x800D9798u; f_800D98D4(c); // 800D9794
L_800D9798:;
  c->r[0]=R32(c->r[1]+0x00000154u); // 800D9798
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 800D979C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 800D97A0
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 800D97A4
  c->r[30]=R32(c->r[1]+0x00000138u); // 800D97A8
  c->lr=c->r[0]; // 800D97AC
  c->r[1]=c->r[1]+0x00000150u; // 800D97B0
  return; // 800D97B4
}

// fn_800D97B8
void f_800D97B8(Ctx* __restrict c) {
  trace_call(0x800D97B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D97B8
  c->r[0]=c->lr; // 800D97BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D97C0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D97C4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D97C8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800D97CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800D97D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D97D4
  c->r[31]=c->r[3]|c->r[3]; // 800D97D8
  c->r[3]=c->r[4]|c->r[4]; // 800D97DC
  c->lr=0x800D97E4u; f_80063CB8(c); // 800D97E0
  c->f[30]=c->f[1]; // 800D97E4
  c->r[3]=c->r[31]|c->r[31]; // 800D97E8
  c->lr=0x800D97F0u; f_80063CB8(c); // 800D97EC
  c->lr=0x800D97F4u; f_8008151C(c); // 800D97F0
  c->f[31]=c->f[1]; // 800D97F4
  c->f[1]=c->f[30]; // 800D97F8
  c->lr=0x800D9800u; f_8008151C(c); // 800D97FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800D9800
  {uint32_t ea=c->r[2]+0xFFFFA504u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9804
  fcmp(c,0,c->f[1],c->f[0]); // 800D9808
  if (!crb(c,0)) { goto L_800D981C; } // 800D980C
  {uint32_t ea=c->r[2]+0xFFFFA508u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9810
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D9814
  goto L_800D9834; // 800D9818
L_800D981C:;
  {uint32_t ea=c->r[2]+0xFFFFA50Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D981C
  fcmp(c,0,c->f[1],c->f[0]); // 800D9820
  if (!crb(c,1)) { goto L_800D9834; } // 800D9824
  {uint32_t ea=c->r[2]+0xFFFFA508u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9828
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D982C
  c->f[1]=-c->f[0]; // 800D9830
L_800D9834:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9834
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D9838
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D983C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800D9840
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800D9844
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9848
  c->lr=c->r[0]; // 800D984C
  c->r[1]=c->r[1]+0x00000030u; // 800D9850
  return; // 800D9854
}

// fn_800D9858
void f_800D9858(Ctx* __restrict c) {
  trace_call(0x800D9858u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9858
  c->r[0]=c->lr; // 800D985C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9860
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D9864
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D9868
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D986C
  c->f[31]=c->f[1]; // 800D9870
  fcmp(c,0,c->f[1],c->f[0]); // 800D9874
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D9878
  if (crb(c,2)) { goto L_800D989C; } // 800D987C
  c->r[3]=0u+0x806D0000u; // 800D9880
  c->r[5]=0u+0x806D0000u; // 800D9884
  c->r[3]=c->r[3]+0xFFFFDD24u; // 800D9888
  c->r[4]=0u+0x00000273u; // 800D988C
  c->r[5]=c->r[5]+0xFFFFDD00u; // 800D9890
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9894
  c->lr=0x800D989Cu; f_80484708(c); // 800D9898
L_800D989C:;
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D989C
  fcmp(c,0,c->f[31],c->f[1]); // 800D98A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D98A4
  if (!crb(c,2)) { goto L_800D98B0; } // 800D98A8
  goto L_800D98BC; // 800D98AC
L_800D98B0:;
  c->f[1]=c->f[31]; // 800D98B0
  c->lr=0x800D98B8u; f_804E1098(c); // 800D98B4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D98B8
L_800D98BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D98BC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800D98C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D98C4
  c->lr=c->r[0]; // 800D98C8
  c->r[1]=c->r[1]+0x00000020u; // 800D98CC
  return; // 800D98D0
}

// fn_800D98D4
void f_800D98D4(Ctx* __restrict c) {
  trace_call(0x800D98D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D98D4
  c->r[0]=c->lr; // 800D98D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D98DC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D98E0
  c->r[31]=c->r[1]|c->r[1]; // 800D98E4
  c->r[28]=c->r[3]|c->r[3]; // 800D98E8
  c->lr=0x800D98F0u; f_800D5294(c); // 800D98EC
  c->r[4]=c->r[3]|c->r[3]; // 800D98F0
  c->r[3]=c->r[28]|c->r[28]; // 800D98F4
  c->lr=0x800D98FCu; f_80062F4C(c); // 800D98F8
  c->r[0]=R8(c->r[28]+0x00000010u); // 800D98FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D9900
  c->r[3]=c->r[28]+c->r[0]; // 800D9904
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D9908
  cmps(c,0,(int32_t)c->r[29],0); // 800D990C
  if (crb(c,2)) { goto L_800D9938; } // 800D9910
  c->r[30]=0u+0x00000000u; // 800D9914
  W32(c->r[31]+0x00000024u,c->r[1]); // 800D9918
  W8(c->r[31]+0x00000008u,c->r[30]); // 800D991C
  c->lr=0x800D9924u; f_800D5294(c); // 800D9920
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D9924
  c->r[0]=c->r[13]+0xFFFF8470u; // 800D9928
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D992C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800D9930
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800D9934
L_800D9938:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D9938
  c->r[0]=0u+0x00000000u; // 800D993C
  c->r[3]=c->r[28]|c->r[28]; // 800D9940
  c->r[4]=c->r[29]|c->r[29]; // 800D9944
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D9948
  c->r[0]=R32(c->r[28]+0x00000004u); // 800D994C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D9950
  c->lr=0x800D9958u; f_8006306C(c); // 800D9954
  c->r[10]=c->r[31]|c->r[31]; // 800D9958
  c->r[3]=c->r[29]|c->r[29]; // 800D995C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9960
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D9964
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D9968
  c->r[1]=c->r[10]|c->r[10]; // 800D996C
  c->lr=c->r[0]; // 800D9970
  return; // 800D9974
}

// fn_800D9978
void f_800D9978(Ctx* __restrict c) {
  trace_call(0x800D9978u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9978
  c->r[0]=c->lr; // 800D997C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9980
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D9984
  c->r[31]=c->r[3]|c->r[3]; // 800D9988
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D998C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9990
  if (crb(c,2)) { goto L_800D99A0; } // 800D9994
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9998
  goto L_800D99A4; // 800D999C
L_800D99A0:;
  c->r[0]=0u+0x00000000u; // 800D99A0
L_800D99A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D99A4
  if (!crb(c,2)) { goto L_800D9A08; } // 800D99A8
  c->lr=0x800D99B0u; f_803B220C(c); // 800D99AC
  c->r[3]=c->r[3]^0x80000000u; // 800D99B0
  c->r[0]=0u+0x43300000u; // 800D99B4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D99B8
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[3]=RF64(ea);} // 800D99BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D99C0
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D99C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800D99C8
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D99CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D99D0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D99D4
  fcmp(c,0,c->f[1],c->f[0]); // 800D99D8
  if (!crb(c,0)) { goto L_800D99F4; } // 800D99DC
  c->r[3]=c->r[31]|c->r[31]; // 800D99E0
  c->r[4]=0u+0x000036DCu; // 800D99E4
  c->r[5]=0u+0x00000001u; // 800D99E8
  c->lr=0x800D99F0u; f_80064744(c); // 800D99EC
  goto L_800D9A20; // 800D99F0
L_800D99F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D99F4
  c->r[4]=0u+0x000036E4u; // 800D99F8
  c->r[5]=0u+0x00000001u; // 800D99FC
  c->lr=0x800D9A04u; f_80064744(c); // 800D9A00
  goto L_800D9A20; // 800D9A04
L_800D9A08:;
  c->r[3]=c->r[3]+0x00000354u; // 800D9A08
  c->lr=0x800D9A10u; f_800667AC(c); // 800D9A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A10
  if (crb(c,2)) { goto L_800D9A20; } // 800D9A14
  c->r[3]=c->r[31]|c->r[31]; // 800D9A18
  c->lr=0x800D9A20u; f_800D98D4(c); // 800D9A1C
L_800D9A20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9A20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9A24
  c->lr=c->r[0]; // 800D9A28
  c->r[1]=c->r[1]+0x00000020u; // 800D9A2C
  return; // 800D9A30
}

// fn_800D9A34
void f_800D9A34(Ctx* __restrict c) {
  trace_call(0x800D9A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9A34
  c->r[0]=c->lr; // 800D9A38
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9A3C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D9A40
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D9A44
  c->r[30]=c->r[3]|c->r[3]; // 800D9A48
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D9A4C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9A50
  if (crb(c,2)) { goto L_800D9A60; } // 800D9A54
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9A58
  goto L_800D9A64; // 800D9A5C
L_800D9A60:;
  c->r[0]=0u+0x00000000u; // 800D9A60
L_800D9A64:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9A64
  if (!crb(c,2)) { goto L_800D9A88; } // 800D9A68
  c->r[3]=c->r[30]|c->r[30]; // 800D9A6C
  c->lr=0x800D9A74u; f_800DBAE4(c); // 800D9A70
  c->r[3]=c->r[30]|c->r[30]; // 800D9A74
  c->r[4]=0u+0x000036B1u; // 800D9A78
  c->r[5]=0u+0x00000001u; // 800D9A7C
  c->lr=0x800D9A84u; f_80064744(c); // 800D9A80
  goto L_800D9B00; // 800D9A84
L_800D9A88:;
  c->r[3]=c->r[3]+0x00000354u; // 800D9A88
  c->lr=0x800D9A90u; f_800667AC(c); // 800D9A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A90
  if (crb(c,2)) { goto L_800D9B00; } // 800D9A94
  c->r[0]=R32(c->r[30]+0x000005C0u); // 800D9A98
  cmps(c,0,(int32_t)c->r[0],1); // 800D9A9C
  if (crb(c,2)) { goto L_800D9AB0; } // 800D9AA0
  cmps(c,0,(int32_t)c->r[0],2); // 800D9AA4
  if (crb(c,2)) { goto L_800D9AF8; } // 800D9AA8
  goto L_800D9B00; // 800D9AAC
L_800D9AB0:;
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9AB0
  c->r[4]=c->r[30]|c->r[30]; // 800D9AB4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800D9AB8
  c->r[3]=c->r[1]+0x00000014u; // 800D9ABC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D9AC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D9AC4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9AC8
  c->r[31]=R32(c->r[30]+0x0000041Cu); // 800D9ACC
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9AD0
  c->ctr=c->r[12]; // 800D9AD4
  if (true) { c->lr=0x800D9ADCu; dispatch(c,c->ctr); } // 800D9AD8
  c->r[3]=c->r[31]|c->r[31]; // 800D9ADC
  c->r[4]=c->r[1]+0x00000014u; // 800D9AE0
  c->r[5]=c->r[1]+0x00000008u; // 800D9AE4
  c->lr=0x800D9AECu; f_800C2D1C(c); // 800D9AE8
  c->r[3]=c->r[30]|c->r[30]; // 800D9AEC
  c->lr=0x800D9AF4u; f_800DA994(c); // 800D9AF0
  goto L_800D9B00; // 800D9AF4
L_800D9AF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9AF8
  c->lr=0x800D9B00u; f_800DB36C(c); // 800D9AFC
L_800D9B00:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9B00
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D9B04
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D9B08
  c->lr=c->r[0]; // 800D9B0C
  c->r[1]=c->r[1]+0x00000030u; // 800D9B10
  return; // 800D9B14
}

// fn_800D9B18
void f_800D9B18(Ctx* __restrict c) {
  trace_call(0x800D9B18u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B18
  c->r[0]=c->lr; // 800D9B1C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D9B20
  c->r[11]=c->r[1]+0x00000060u; // 800D9B24
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D9B28
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D9B2C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800D9B30
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800D9B34
  c->lr=0x800D9B3Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9B38
  c->r[28]=c->r[3]|c->r[3]; // 800D9B3C
  c->r[29]=c->r[4]|c->r[4]; // 800D9B40
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800D9B44
  c->f[30]=c->f[1]; // 800D9B48
  c->r[4]=c->r[28]|c->r[28]; // 800D9B4C
  c->r[30]=c->r[5]|c->r[5]; // 800D9B50
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9B54
  c->r[31]=c->r[6]|c->r[6]; // 800D9B58
  c->r[3]=c->r[1]+0x00000020u; // 800D9B5C
  c->ctr=c->r[12]; // 800D9B60
  if (true) { c->lr=0x800D9B68u; dispatch(c,c->ctr); } // 800D9B64
  c->r[4]=c->r[29]|c->r[29]; // 800D9B68
  c->r[3]=c->r[1]+0x00000038u; // 800D9B6C
  c->r[5]=c->r[1]+0x00000020u; // 800D9B70
  c->lr=0x800D9B78u; f_800772A0(c); // 800D9B74
  c->r[3]=R32(c->r[28]+0x00000404u); // 800D9B78
  c->lr=0x800D9B80u; f_802EA43C(c); // 800D9B7C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9B80
  c->f[31]=c->f[1]; // 800D9B84
  fcmp(c,0,c->f[0],c->f[30]); // 800D9B88
  if (crb(c,2)) { goto L_800D9BC4; } // 800D9B8C
  c->r[5]=0u+0x806A0000u; // 800D9B90
  c->r[3]=c->r[1]+0x0000002Cu; // 800D9B94
  c->r[4]=c->r[1]+0x00000038u; // 800D9B98
  c->r[5]=c->r[5]+0x00000AA8u; // 800D9B9C
  c->lr=0x800D9BA4u; f_8030E0BC(c); // 800D9BA0
  c->f[1]=c->f[30]; // 800D9BA4
  c->r[3]=c->r[1]+0x00000014u; // 800D9BA8
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9BAC
  c->lr=0x800D9BB4u; f_800D6C88(c); // 800D9BB0
  c->r[3]=c->r[1]+0x00000038u; // 800D9BB4
  c->r[5]=c->r[1]+0x00000014u; // 800D9BB8
  c->r[4]=c->r[3]|c->r[3]; // 800D9BBC
  c->lr=0x800D9BC4u; f_800772A0(c); // 800D9BC0
L_800D9BC4:;
  c->f[1]=c->f[31]; // 800D9BC4
  c->r[3]=c->r[1]+0x00000008u; // 800D9BC8
  c->r[4]=c->r[1]+0x00000038u; // 800D9BCC
  c->lr=0x800D9BD4u; f_80089874(c); // 800D9BD0
  c->r[3]=c->r[28]+0x00000614u; // 800D9BD4
  c->r[4]=c->r[1]+0x00000008u; // 800D9BD8
  c->lr=0x800D9BE0u; f_8005DC84(c); // 800D9BDC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9BE0
  c->r[4]=c->r[29]|c->r[29]; // 800D9BE4
  {uint32_t ea=c->r[28]+0x00000620u; WF32(ea,c->f[0]);} // 800D9BE8
  c->r[3]=c->r[28]+0x00000604u; // 800D9BEC
  c->lr=0x800D9BF4u; f_8005DC84(c); // 800D9BF0
  cmps(c,0,(int32_t)c->r[31],0); // 800D9BF4
  if (crb(c,2)) { goto L_800D9C70; } // 800D9BF8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9BFC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C00
  fcmp(c,0,c->f[1],c->f[0]); // 800D9C04
  if (!crb(c,1)) { goto L_800D9C30; } // 800D9C08
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C0C
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 800D9C10
  c->f[1]=c->f[30]; // 800D9C14
  c->lr=0x800D9C1Cu; f_800D9858(c); // 800D9C18
  {uint32_t ea=c->r[2]+0xFFFFA518u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9C1C
  {uint32_t ea=c->r[2]+0xFFFFA514u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D9C24
  c->f[3]=c->ps1[3]=S(std::fma(c->f[0],c->f[30],c->f[1])); // 800D9C28
  goto L_800D9C48; // 800D9C2C
L_800D9C30:;
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C30
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D9C34
  c->lr=0x800D9C3Cu; f_800D9858(c); // 800D9C38
  {uint32_t ea=c->r[2]+0xFFFFA518u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9C3C
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C40
  c->f[3]=c->ps1[3]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800D9C44
L_800D9C48:;
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[31]); // 800D9C48
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9C4C
  {uint32_t ea=c->r[2]+0xFFFFA514u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9C50
  {uint32_t ea=c->r[28]+0x00000618u; WF32(ea,c->f[0]);} // 800D9C54
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800D9C58
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800D9C5C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D9C60
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D9C64
  {uint32_t ea=c->r[28]+0x00000610u; WF32(ea,c->f[0]);} // 800D9C68
  goto L_800D9C78; // 800D9C6C
L_800D9C70:;
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9C70
  {uint32_t ea=c->r[28]+0x00000618u; WF32(ea,c->f[0]);} // 800D9C74
L_800D9C78:;
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9C78
  c->r[3]=c->r[28]|c->r[28]; // 800D9C7C
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9C80
  c->r[4]=c->r[30]|c->r[30]; // 800D9C84
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9C88
  c->lr=0x800D9C90u; f_800637D0(c); // 800D9C8C
  c->r[11]=c->r[1]+0x00000060u; // 800D9C90
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D9C94
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D9C98
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800D9C9C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800D9CA0
  c->lr=0x800D9CA8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9CA4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D9CA8
  c->lr=c->r[0]; // 800D9CAC
  c->r[1]=c->r[1]+0x00000080u; // 800D9CB0
  return; // 800D9CB4
}

// fn_800D9CB8
void f_800D9CB8(Ctx* __restrict c) {
  trace_call(0x800D9CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9CB8
  c->r[0]=c->lr; // 800D9CBC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D9CC0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800D9CC4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800D9CC8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800D9CCC
  c->r[31]=c->r[4]|c->r[4]; // 800D9CD0
  W32(c->r[1]+0x00000098u,c->r[30]); // 800D9CD4
  c->r[30]=c->r[3]|c->r[3]; // 800D9CD8
  c->r[4]=c->r[30]|c->r[30]; // 800D9CDC
  c->r[3]=c->r[1]+0x00000044u; // 800D9CE0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9CE4
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9CE8
  c->ctr=c->r[12]; // 800D9CEC
  if (true) { c->lr=0x800D9CF4u; dispatch(c,c->ctr); } // 800D9CF0
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9CF4
  c->r[3]=c->r[1]+0x00000050u; // 800D9CF8
  c->lr=0x800D9D00u; f_800C2FB8(c); // 800D9CFC
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9D00
  c->r[4]=c->r[1]+0x00000050u; // 800D9D04
  c->r[5]=c->r[1]+0x00000044u; // 800D9D08
  c->lr=0x800D9D10u; f_800772A0(c); // 800D9D0C
  {uint32_t ea=c->r[2]+0xFFFFA520u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9D10
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9D14
  {uint32_t ea=c->r[2]+0xFFFFA51Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9D18
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9D1C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[3],c->f[2],-c->f[1])); // 800D9D20
  fcmp(c,0,c->f[1],c->f[0]); // 800D9D24
  if (!crb(c,0)) { goto L_800D9DC4; } // 800D9D28
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9D2C
  c->r[3]=c->r[1]+0x00000038u; // 800D9D30
  c->lr=0x800D9D38u; f_800C2E48(c); // 800D9D34
  c->r[3]=c->r[30]+0x000001B8u; // 800D9D38
  c->r[4]=c->r[1]+0x00000068u; // 800D9D3C
  c->lr=0x800D9D44u; f_80382F2C(c); // 800D9D40
  c->r[3]=c->r[1]+0x00000068u; // 800D9D44
  c->r[4]=c->r[1]+0x00000038u; // 800D9D48
  c->lr=0x800D9D50u; f_8005CDC8(c); // 800D9D4C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9D50
  c->r[3]=c->r[30]|c->r[30]; // 800D9D54
  c->r[4]=c->r[1]+0x00000068u; // 800D9D58
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D9D5C
  c->ctr=c->r[12]; // 800D9D60
  if (true) { c->lr=0x800D9D68u; dispatch(c,c->ctr); } // 800D9D64
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9D68
  c->r[4]=c->r[30]|c->r[30]; // 800D9D6C
  c->r[3]=c->r[1]+0x00000014u; // 800D9D70
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9D74
  c->ctr=c->r[12]; // 800D9D78
  if (true) { c->lr=0x800D9D80u; dispatch(c,c->ctr); } // 800D9D7C
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9D80
  c->r[3]=c->r[1]+0x00000020u; // 800D9D84
  c->lr=0x800D9D8Cu; f_800C2FB8(c); // 800D9D88
  c->r[3]=c->r[1]+0x0000002Cu; // 800D9D8C
  c->r[4]=c->r[1]+0x00000020u; // 800D9D90
  c->r[5]=c->r[1]+0x00000014u; // 800D9D94
  c->lr=0x800D9D9Cu; f_800772A0(c); // 800D9D98
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9D9C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9DA0
  c->lr=0x800D9DA8u; f_8005DC84(c); // 800D9DA4
  {uint32_t ea=c->r[2]+0xFFFFA528u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9DA8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DAC
  {uint32_t ea=c->r[2]+0xFFFFA4B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9DB0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800D9DB4
  {uint32_t ea=c->r[2]+0xFFFFA524u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DB8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D9DBC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D9DC0
L_800D9DC4:;
  c->lr=0x800D9DC8u; f_803BA9AC(c); // 800D9DC4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DC8
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800D9DCC
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9DD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 800D9DD4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DD8
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[3]); // 800D9DDC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800D9DE0
  c->lr=0x800D9DE8u; f_803BA9AC(c); // 800D9DE4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D9DE8
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DEC
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9DF0
  c->r[5]=0u+0x806A0000u; // 800D9DF4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800D9DF8
  c->r[4]=c->r[3]|c->r[3]; // 800D9DFC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 800D9E00
  c->r[5]=c->r[5]+0x00000AA8u; // 800D9E04
  c->lr=0x800D9E0Cu; f_8030E0BC(c); // 800D9E08
  c->f[1]=c->f[31]; // 800D9E0C
  c->r[3]=c->r[1]+0x00000008u; // 800D9E10
  c->r[4]=c->r[1]+0x0000005Cu; // 800D9E14
  c->lr=0x800D9E1Cu; f_8005ED34(c); // 800D9E18
  c->r[3]=c->r[30]+0x00000614u; // 800D9E1C
  c->r[4]=c->r[1]+0x00000008u; // 800D9E20
  c->lr=0x800D9E28u; f_8005DC84(c); // 800D9E24
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9E28
  c->r[3]=c->r[30]|c->r[30]; // 800D9E2C
  {uint32_t ea=c->r[30]+0x00000620u; WF32(ea,c->f[3]);} // 800D9E30
  c->r[4]=c->r[31]|c->r[31]; // 800D9E34
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9E38
  {uint32_t ea=c->r[30]+0x00000618u; WF32(ea,c->f[3]);} // 800D9E3C
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9E40
  c->lr=0x800D9E48u; f_800637D0(c); // 800D9E44
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D9E48
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800D9E4C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800D9E50
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800D9E54
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D9E58
  c->lr=c->r[0]; // 800D9E5C
  c->r[1]=c->r[1]+0x000000B0u; // 800D9E60
  return; // 800D9E64
}

// fn_800D9E68
void f_800D9E68(Ctx* __restrict c) {
  trace_call(0x800D9E68u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E68
  c->r[0]=c->lr; // 800D9E6C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D9E70
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800D9E74
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800D9E78
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800D9E7C
  c->r[31]=c->r[4]|c->r[4]; // 800D9E80
  W32(c->r[1]+0x00000098u,c->r[30]); // 800D9E84
  c->r[30]=c->r[3]|c->r[3]; // 800D9E88
  c->r[4]=c->r[30]|c->r[30]; // 800D9E8C
  c->r[3]=c->r[1]+0x00000044u; // 800D9E90
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9E94
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9E98
  c->ctr=c->r[12]; // 800D9E9C
  if (true) { c->lr=0x800D9EA4u; dispatch(c,c->ctr); } // 800D9EA0
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9EA4
  c->r[3]=c->r[1]+0x00000050u; // 800D9EA8
  c->lr=0x800D9EB0u; f_800C2FB8(c); // 800D9EAC
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9EB0
  c->r[4]=c->r[1]+0x00000050u; // 800D9EB4
  c->r[5]=c->r[1]+0x00000044u; // 800D9EB8
  c->lr=0x800D9EC0u; f_800772A0(c); // 800D9EBC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9EC0
  {uint32_t ea=c->r[2]+0xFFFFA51Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9EC4
  fcmp(c,0,c->f[1],c->f[0]); // 800D9EC8
  if (!crb(c,1)) { goto L_800D9F4C; } // 800D9ECC
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9ED0
  c->r[3]=c->r[1]+0x00000038u; // 800D9ED4
  c->lr=0x800D9EDCu; f_800C2E48(c); // 800D9ED8
  c->r[3]=c->r[30]+0x000001B8u; // 800D9EDC
  c->r[4]=c->r[1]+0x00000068u; // 800D9EE0
  c->lr=0x800D9EE8u; f_80382F2C(c); // 800D9EE4
  c->r[3]=c->r[1]+0x00000068u; // 800D9EE8
  c->r[4]=c->r[1]+0x00000038u; // 800D9EEC
  c->lr=0x800D9EF4u; f_8005CDC8(c); // 800D9EF0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9EF4
  c->r[3]=c->r[30]|c->r[30]; // 800D9EF8
  c->r[4]=c->r[1]+0x00000068u; // 800D9EFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D9F00
  c->ctr=c->r[12]; // 800D9F04
  if (true) { c->lr=0x800D9F0Cu; dispatch(c,c->ctr); } // 800D9F08
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800D9F0C
  c->r[4]=c->r[30]|c->r[30]; // 800D9F10
  c->r[3]=c->r[1]+0x00000014u; // 800D9F14
  c->r[12]=R32(c->r[12]+0x00000134u); // 800D9F18
  c->ctr=c->r[12]; // 800D9F1C
  if (true) { c->lr=0x800D9F24u; dispatch(c,c->ctr); } // 800D9F20
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800D9F24
  c->r[3]=c->r[1]+0x00000020u; // 800D9F28
  c->lr=0x800D9F30u; f_800C2FB8(c); // 800D9F2C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D9F30
  c->r[4]=c->r[1]+0x00000020u; // 800D9F34
  c->r[5]=c->r[1]+0x00000014u; // 800D9F38
  c->lr=0x800D9F40u; f_800772A0(c); // 800D9F3C
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9F40
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9F44
  c->lr=0x800D9F4Cu; f_8005DC84(c); // 800D9F48
L_800D9F4C:;
  {uint32_t ea=c->r[2]+0xFFFFA51Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9F4C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9F50
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D9F54
  c->lr=0x800D9F5Cu; f_803BA9AC(c); // 800D9F58
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9F5C
  c->f[4]=c->ps1[4]=S(c->f[1]); // 800D9F60
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9F64
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 800D9F68
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9F6C
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9F70
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800D9F74
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[4],c->f[2])); // 800D9F78
  c->lr=0x800D9F80u; f_803BA9AC(c); // 800D9F7C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D9F80
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9F84
  c->r[3]=c->r[1]+0x0000005Cu; // 800D9F88
  c->r[5]=0u+0x806A0000u; // 800D9F8C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800D9F90
  c->r[4]=c->r[3]|c->r[3]; // 800D9F94
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 800D9F98
  c->r[5]=c->r[5]+0x00000AA8u; // 800D9F9C
  c->lr=0x800D9FA4u; f_8030E0BC(c); // 800D9FA0
  c->f[1]=c->f[31]; // 800D9FA4
  c->r[3]=c->r[1]+0x00000008u; // 800D9FA8
  c->r[4]=c->r[1]+0x0000005Cu; // 800D9FAC
  c->lr=0x800D9FB4u; f_8005ED34(c); // 800D9FB0
  c->r[3]=c->r[30]+0x00000614u; // 800D9FB4
  c->r[4]=c->r[1]+0x00000008u; // 800D9FB8
  c->lr=0x800D9FC0u; f_8005DC84(c); // 800D9FBC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9FC0
  c->r[3]=c->r[30]|c->r[30]; // 800D9FC4
  {uint32_t ea=c->r[30]+0x00000620u; WF32(ea,c->f[3]);} // 800D9FC8
  c->r[4]=c->r[31]|c->r[31]; // 800D9FCC
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9FD0
  {uint32_t ea=c->r[30]+0x00000618u; WF32(ea,c->f[3]);} // 800D9FD4
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9FD8
  c->lr=0x800D9FE0u; f_800637D0(c); // 800D9FDC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D9FE0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800D9FE4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800D9FE8
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800D9FEC
  c->r[30]=R32(c->r[1]+0x00000098u); // 800D9FF0
  c->lr=c->r[0]; // 800D9FF4
  c->r[1]=c->r[1]+0x000000B0u; // 800D9FF8
  return; // 800D9FFC
}

// fn_800DA000
void f_800DA000(Ctx* __restrict c) {
  trace_call(0x800DA000u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA000
  c->r[0]=c->lr; // 800DA004
  W32(c->r[1]+0x00000114u,c->r[0]); // 800DA008
  c->r[11]=c->r[1]+0x000000E0u; // 800DA00C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800DA010
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800DA014
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800DA018
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800DA01C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 800DA020
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 800DA024
  c->lr=0x800DA02Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DA028
  c->r[28]=c->r[3]|c->r[3]; // 800DA02C
  c->r[29]=c->r[4]|c->r[4]; // 800DA030
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DA034
  c->r[4]=c->r[28]|c->r[28]; // 800DA038
  c->r[31]=R32(c->r[3]+0x0000041Cu); // 800DA03C
  c->r[3]=c->r[1]+0x0000006Cu; // 800DA040
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA044
  c->ctr=c->r[12]; // 800DA048
  if (true) { c->lr=0x800DA050u; dispatch(c,c->ctr); } // 800DA04C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DA050
  c->r[4]=c->r[31]|c->r[31]; // 800DA054
  c->r[3]=c->r[1]+0x00000078u; // 800DA058
  c->lr=0x800DA060u; f_800C2FB8(c); // 800DA05C
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DA060
  c->r[4]=c->r[28]|c->r[28]; // 800DA064
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA068
  c->r[3]=c->r[1]+0x00000060u; // 800DA06C
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA070
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[30]); // 800DA074
  c->ctr=c->r[12]; // 800DA078
  if (true) { c->lr=0x800DA080u; dispatch(c,c->ctr); } // 800DA07C
  c->r[3]=R32(c->r[28]+0x0000041Cu); // 800DA080
  c->lr=0x800DA088u; f_800C2E40(c); // 800DA084
  c->r[31]=R32(c->r[28]+0x0000041Cu); // 800DA088
  c->r[4]=c->r[3]+0x00000002u; // 800DA08C
  c->r[3]=c->r[31]|c->r[31]; // 800DA090
  c->lr=0x800DA098u; f_800C30A0(c); // 800DA094
  c->r[4]=c->r[3]|c->r[3]; // 800DA098
  c->r[3]=c->r[31]+0x00000004u; // 800DA09C
  c->lr=0x800DA0A4u; f_800A09F0(c); // 800DA0A0
  c->r[4]=c->r[3]|c->r[3]; // 800DA0A4
  c->r[3]=c->r[1]+0x00000084u; // 800DA0A8
  c->r[5]=c->r[1]+0x00000060u; // 800DA0AC
  c->lr=0x800DA0B4u; f_800772A0(c); // 800DA0B0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA0B4
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA0B8
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[31]); // 800DA0BC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA0C0
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[2]); // 800DA0C4
  fcmp(c,0,c->f[30],c->f[0]); // 800DA0C8
  if (!crb(c,0)) { goto L_800DA1A8; } // 800DA0CC
  c->r[4]=R32(c->r[28]+0x0000041Cu); // 800DA0D0
  c->r[3]=c->r[1]+0x00000054u; // 800DA0D4
  c->lr=0x800DA0DCu; f_800C2E48(c); // 800DA0D8
  c->r[3]=c->r[28]+0x000001B8u; // 800DA0DC
  c->r[4]=c->r[1]+0x00000090u; // 800DA0E0
  c->lr=0x800DA0E8u; f_80382F2C(c); // 800DA0E4
  c->r[3]=c->r[1]+0x00000090u; // 800DA0E8
  c->r[4]=c->r[1]+0x00000054u; // 800DA0EC
  c->lr=0x800DA0F4u; f_8005CDC8(c); // 800DA0F0
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DA0F4
  c->r[3]=c->r[28]|c->r[28]; // 800DA0F8
  c->r[4]=c->r[1]+0x00000090u; // 800DA0FC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DA100
  c->ctr=c->r[12]; // 800DA104
  if (true) { c->lr=0x800DA10Cu; dispatch(c,c->ctr); } // 800DA108
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DA10C
  c->r[4]=c->r[28]|c->r[28]; // 800DA110
  c->r[3]=c->r[1]+0x0000003Cu; // 800DA114
  c->r[31]=R32(c->r[28]+0x0000041Cu); // 800DA118
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA11C
  c->ctr=c->r[12]; // 800DA120
  if (true) { c->lr=0x800DA128u; dispatch(c,c->ctr); } // 800DA124
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DA128
  c->r[4]=c->r[31]|c->r[31]; // 800DA12C
  c->r[3]=c->r[1]+0x00000048u; // 800DA130
  c->lr=0x800DA138u; f_800C2FB8(c); // 800DA134
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DA138
  c->r[4]=c->r[28]|c->r[28]; // 800DA13C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA140
  c->r[3]=c->r[1]+0x00000024u; // 800DA144
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA148
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[30]); // 800DA14C
  c->ctr=c->r[12]; // 800DA150
  if (true) { c->lr=0x800DA158u; dispatch(c,c->ctr); } // 800DA154
  c->r[3]=R32(c->r[28]+0x0000041Cu); // 800DA158
  c->lr=0x800DA160u; f_800C2E40(c); // 800DA15C
  c->r[31]=R32(c->r[28]+0x0000041Cu); // 800DA160
  c->r[4]=c->r[3]+0x00000002u; // 800DA164
  c->r[3]=c->r[31]|c->r[31]; // 800DA168
  c->lr=0x800DA170u; f_800C30A0(c); // 800DA16C
  c->r[4]=c->r[3]|c->r[3]; // 800DA170
  c->r[3]=c->r[31]+0x00000004u; // 800DA174
  c->lr=0x800DA17Cu; f_800A09F0(c); // 800DA178
  c->r[4]=c->r[3]|c->r[3]; // 800DA17C
  c->r[3]=c->r[1]+0x00000030u; // 800DA180
  c->r[5]=c->r[1]+0x00000024u; // 800DA184
  c->lr=0x800DA18Cu; f_800772A0(c); // 800DA188
  c->r[3]=c->r[1]+0x00000084u; // 800DA18C
  c->r[4]=c->r[1]+0x00000030u; // 800DA190
  c->lr=0x800DA198u; f_8005DC84(c); // 800DA194
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA198
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA19C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800DA1A0
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 800DA1A4
L_800DA1A8:;
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA1A8
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA1AC
  fcmp(c,0,c->f[1],c->f[0]); // 800DA1B0
  if (!crb(c,0)) { goto L_800DA210; } // 800DA1B4
  c->r[31]=0u+0x00000000u; // 800DA1B8
  W8(c->r[1]+0x00000010u,c->r[31]); // 800DA1BC
  c->r[3]=c->r[1]+0x00000010u; // 800DA1C0
  c->lr=0x800DA1C8u; f_8004714C(c); // 800DA1C4
  c->r[30]=R32(c->r[3]+0x00000034u); // 800DA1C8
  c->r[3]=c->r[1]+0x00000014u; // 800DA1CC
  W8(c->r[1]+0x00000014u,c->r[31]); // 800DA1D0
  c->lr=0x800DA1D8u; f_8004714C(c); // 800DA1D4
  c->r[4]=c->r[30]^0x80000000u; // 800DA1D8
  c->r[0]=0u+0x43300000u; // 800DA1DC
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800DA1E0
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DA1E4
  W32(c->r[1]+0x000000C0u,c->r[0]); // 800DA1E8
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA1EC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 800DA1F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA1F4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DA1F8
  {uint32_t ea=c->r[2]+0xFFFFA530u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA1FC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800DA200
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800DA204
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 800DA208
  goto L_800DA264; // 800DA20C
L_800DA210:;
  c->r[31]=0u+0x00000000u; // 800DA210
  W8(c->r[1]+0x00000008u,c->r[31]); // 800DA214
  c->r[3]=c->r[1]+0x00000008u; // 800DA218
  c->lr=0x800DA220u; f_8004714C(c); // 800DA21C
  c->r[30]=R32(c->r[3]+0x00000034u); // 800DA220
  c->r[3]=c->r[1]+0x0000000Cu; // 800DA224
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800DA228
  c->lr=0x800DA230u; f_8004714C(c); // 800DA22C
  c->r[4]=c->r[30]^0x80000000u; // 800DA230
  c->r[0]=0u+0x43300000u; // 800DA234
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800DA238
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DA23C
  W32(c->r[1]+0x000000C0u,c->r[0]); // 800DA240
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA244
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 800DA248
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA24C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DA250
  {uint32_t ea=c->r[2]+0xFFFFA534u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA254
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800DA258
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800DA25C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 800DA260
L_800DA264:;
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA264
  c->f[0]=c->ps1[0]=S(c->f[2]); // 800DA268
  {uint32_t ea=c->r[28]+0x00000610u; WF32(ea,c->f[2]);} // 800DA26C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800DA270
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800DA274
  c->lr=0x800DA27Cu; f_803BA9AC(c); // 800DA278
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800DA27C
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA280
  c->f[1]=c->f[30]; // 800DA284
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[2]); // 800DA288
  {uint32_t ea=c->r[28]+0x0000039Cu; WF32(ea,c->f[30]);} // 800DA28C
  c->lr=0x800DA294u; f_803BA9AC(c); // 800DA290
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800DA294
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA298
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA29C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 800DA2A0
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA2A4
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 800DA2A8
  {uint32_t ea=c->r[2]+0xFFFFA4E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA2AC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800DA2B0
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[3]); // 800DA2B4
  c->lr=0x800DA2BCu; f_803BA9AC(c); // 800DA2B8
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA2BC
  c->r[3]=c->r[1]+0x00000084u; // 800DA2C0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA2C4
  c->r[5]=0u+0x806A0000u; // 800DA2C8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800DA2CC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800DA2D0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[30]); // 800DA2D4
  c->r[4]=c->r[3]|c->r[3]; // 800DA2D8
  c->r[5]=c->r[5]+0x00000AA8u; // 800DA2DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DA2E0
  c->f[29]=c->ps1[29]=S(c->f[0]/c->f[29]); // 800DA2E4
  c->lr=0x800DA2ECu; f_8030E0BC(c); // 800DA2E8
  c->f[1]=c->f[29]; // 800DA2EC
  c->r[3]=c->r[1]+0x00000018u; // 800DA2F0
  c->r[4]=c->r[1]+0x00000084u; // 800DA2F4
  c->lr=0x800DA2FCu; f_8005ED34(c); // 800DA2F8
  c->r[3]=c->r[28]+0x00000614u; // 800DA2FC
  c->r[4]=c->r[1]+0x00000018u; // 800DA300
  c->lr=0x800DA308u; f_8005DC84(c); // 800DA304
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA308
  c->r[3]=c->r[28]|c->r[28]; // 800DA30C
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA310
  c->r[4]=c->r[29]|c->r[29]; // 800DA314
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[31]); // 800DA318
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA31C
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA320
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA324
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[30]); // 800DA328
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[0]); // 800DA32C
  {uint32_t ea=c->r[28]+0x00000618u; WF32(ea,c->f[0]);} // 800DA330
  c->lr=0x800DA338u; f_800637D0(c); // 800DA334
  c->r[11]=c->r[1]+0x000000E0u; // 800DA338
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800DA33C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800DA340
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800DA344
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800DA348
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 800DA34C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800DA350
  c->lr=0x800DA358u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DA354
  c->r[0]=R32(c->r[1]+0x00000114u); // 800DA358
  c->lr=c->r[0]; // 800DA35C
  c->r[1]=c->r[1]+0x00000110u; // 800DA360
  return; // 800DA364
}

// fn_800DA368
void f_800DA368(Ctx* __restrict c) {
  trace_call(0x800DA368u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA368
  c->r[0]=c->lr; // 800DA36C
  cmps(c,0,(int32_t)c->r[4],0); // 800DA370
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DA374
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800DA378
  c->r[31]=c->r[5]|c->r[5]; // 800DA37C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800DA380
  c->r[30]=c->r[3]|c->r[3]; // 800DA384
  if (crb(c,2)) { goto L_800DA39C; } // 800DA388
  {uint32_t ea=c->r[3]+0x00000618u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA38C
  {uint32_t ea=c->r[3]+0x00000610u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA390
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DA394
  {uint32_t ea=c->r[3]+0x00000618u; WF32(ea,c->f[0]);} // 800DA398
L_800DA39C:;
  c->r[3]=c->r[3]+0x000001B8u; // 800DA39C
  c->r[4]=c->r[1]+0x00000030u; // 800DA3A0
  c->lr=0x800DA3A8u; f_80382F2C(c); // 800DA3A4
  c->r[3]=R32(c->r[30]+0x00000404u); // 800DA3A8
  c->lr=0x800DA3B0u; f_802EA4B0(c); // 800DA3AC
  {uint32_t ea=c->r[30]+0x00000620u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA3B0
  c->r[3]=c->r[1]+0x00000008u; // 800DA3B4
  c->r[4]=c->r[30]+0x00000614u; // 800DA3B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DA3BC
  c->lr=0x800DA3C4u; f_800D6C88(c); // 800DA3C0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DA3C4
  c->r[4]=c->r[30]|c->r[30]; // 800DA3C8
  c->r[3]=c->r[1]+0x00000014u; // 800DA3CC
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA3D0
  c->ctr=c->r[12]; // 800DA3D4
  if (true) { c->lr=0x800DA3DCu; dispatch(c,c->ctr); } // 800DA3D8
  c->r[3]=c->r[1]+0x00000020u; // 800DA3DC
  c->r[4]=c->r[1]+0x00000014u; // 800DA3E0
  c->r[5]=c->r[1]+0x00000008u; // 800DA3E4
  c->lr=0x800DA3ECu; f_8005ED10(c); // 800DA3E8
  cmps(c,0,(int32_t)c->r[31],0); // 800DA3EC
  if (crb(c,2)) { goto L_800DA418; } // 800DA3F0
  {uint32_t ea=c->r[30]+0x00000618u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA3F4
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA3F8
  fcmp(c,0,c->f[1],c->f[0]); // 800DA3FC
  if (!crb(c,0)) { goto L_800DA418; } // 800DA400
  {uint32_t ea=c->r[30]+0x00000608u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA404
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA408
  fcmp(c,0,c->f[1],c->f[0]); // 800DA40C
  if (!crb(c,1)) { goto L_800DA418; } // 800DA410
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800DA414
L_800DA418:;
  c->r[3]=c->r[1]+0x00000030u; // 800DA418
  c->r[4]=c->r[1]+0x00000020u; // 800DA41C
  c->lr=0x800DA424u; f_8005CDC8(c); // 800DA420
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DA424
  c->r[3]=c->r[30]|c->r[30]; // 800DA428
  c->r[4]=c->r[1]+0x00000030u; // 800DA42C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DA430
  c->ctr=c->r[12]; // 800DA434
  if (true) { c->lr=0x800DA43Cu; dispatch(c,c->ctr); } // 800DA438
  c->r[3]=R32(c->r[30]+0x00000404u); // 800DA43C
  c->lr=0x800DA444u; f_802EA4B0(c); // 800DA440
  {uint32_t ea=c->r[30]+0x00000620u; WF32(ea,c->f[1]);} // 800DA444
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800DA448
  c->r[30]=R32(c->r[1]+0x00000068u); // 800DA44C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DA450
  c->lr=c->r[0]; // 800DA454
  c->r[1]=c->r[1]+0x00000070u; // 800DA458
  return; // 800DA45C
}

// fn_800DA460
void f_800DA460(Ctx* __restrict c) {
  trace_call(0x800DA460u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA460
  c->r[0]=c->lr; // 800DA464
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DA468
  c->r[11]=c->r[1]+0x00000090u; // 800DA46C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800DA470
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800DA474
  c->lr=0x800DA47Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DA478
  {uint32_t ea=c->r[3]+0x00000618u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA47C
  c->r[29]=c->r[3]|c->r[3]; // 800DA480
  {uint32_t ea=c->r[3]+0x00000610u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA484
  c->r[4]=c->r[1]+0x00000048u; // 800DA488
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DA48C
  {uint32_t ea=c->r[3]+0x00000618u; WF32(ea,c->f[0]);} // 800DA490
  c->r[3]=c->r[3]+0x000001B8u; // 800DA494
  c->lr=0x800DA49Cu; f_80382F2C(c); // 800DA498
  c->r[31]=0u+0x00000000u; // 800DA49C
  W8(c->r[1]+0x00000008u,c->r[31]); // 800DA4A0
  c->r[3]=c->r[1]+0x00000008u; // 800DA4A4
  c->lr=0x800DA4ACu; f_8004714C(c); // 800DA4A8
  c->r[30]=R32(c->r[3]+0x00000034u); // 800DA4AC
  c->r[3]=c->r[1]+0x0000000Cu; // 800DA4B0
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800DA4B4
  c->lr=0x800DA4BCu; f_8004714C(c); // 800DA4B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DA4BC
  c->r[3]=c->r[1]+0x00000010u; // 800DA4C0
  W8(c->r[1]+0x00000010u,c->r[31]); // 800DA4C4
  c->lr=0x800DA4CCu; f_8004714C(c); // 800DA4C8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA4CC
  c->r[3]=c->r[1]+0x00000014u; // 800DA4D0
  c->r[4]=c->r[29]+0x00000614u; // 800DA4D4
  c->lr=0x800DA4DCu; f_8005ED34(c); // 800DA4D8
  c->r[3]=c->r[30]^0x80000000u; // 800DA4DC
  c->r[0]=0u+0x43300000u; // 800DA4E0
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 800DA4E4
  c->r[3]=c->r[1]+0x00000020u; // 800DA4E8
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DA4EC
  c->r[4]=c->r[1]+0x00000014u; // 800DA4F0
  W32(c->r[1]+0x00000078u,c->r[0]); // 800DA4F4
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA4F8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800DA4FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DA500
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800DA504
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800DA508
  c->lr=0x800DA510u; f_80089874(c); // 800DA50C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 800DA510
  c->r[4]=c->r[29]|c->r[29]; // 800DA514
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA518
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA51C
  c->ctr=c->r[12]; // 800DA520
  if (true) { c->lr=0x800DA528u; dispatch(c,c->ctr); } // 800DA524
  c->r[3]=c->r[1]+0x00000038u; // 800DA528
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA52C
  c->r[5]=c->r[1]+0x00000020u; // 800DA530
  c->lr=0x800DA538u; f_8005ED10(c); // 800DA534
  c->r[3]=c->r[1]+0x00000048u; // 800DA538
  c->r[4]=c->r[1]+0x00000038u; // 800DA53C
  c->lr=0x800DA544u; f_8005CDC8(c); // 800DA540
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 800DA544
  c->r[3]=c->r[29]|c->r[29]; // 800DA548
  c->r[4]=c->r[1]+0x00000048u; // 800DA54C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DA550
  c->ctr=c->r[12]; // 800DA554
  if (true) { c->lr=0x800DA55Cu; dispatch(c,c->ctr); } // 800DA558
  c->r[3]=R32(c->r[29]+0x00000404u); // 800DA55C
  c->lr=0x800DA564u; f_802EA4B0(c); // 800DA560
  {uint32_t ea=c->r[29]+0x00000620u; WF32(ea,c->f[1]);} // 800DA564
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800DA568
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800DA56C
  c->r[11]=c->r[1]+0x00000090u; // 800DA570
  c->lr=0x800DA578u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DA574
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DA578
  c->lr=c->r[0]; // 800DA57C
  c->r[1]=c->r[1]+0x000000A0u; // 800DA580
  return; // 800DA584
}

// fn_800DA588
void f_800DA588(Ctx* __restrict c) {
  trace_call(0x800DA588u);
  {uint32_t ea=c->r[1]+0xFFFFFDC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA588
  c->r[0]=c->lr; // 800DA58C
  W32(c->r[1]+0x00000244u,c->r[0]); // 800DA590
  c->r[4]=c->r[1]+0x000001C8u; // 800DA594
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[31]);} // 800DA598
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,31,ea,0,0);} // 800DA59C
  W32(c->r[1]+0x0000022Cu,c->r[31]); // 800DA5A0
  c->r[31]=c->r[3]|c->r[3]; // 800DA5A4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800DA5A8
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DA5AC
  c->ctr=c->r[12]; // 800DA5B0
  if (true) { c->lr=0x800DA5B8u; dispatch(c,c->ctr); } // 800DA5B4
  c->r[4]=c->r[3]|c->r[3]; // 800DA5B8
  c->r[3]=c->r[1]+0x000000A4u; // 800DA5BC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA5C0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA5C4
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA5C8
  c->lr=0x800DA5D0u; f_8005FD70(c); // 800DA5CC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA5D0
  c->r[4]=c->r[31]|c->r[31]; // 800DA5D4
  c->r[3]=c->r[1]+0x000000B0u; // 800DA5D8
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA5DC
  c->ctr=c->r[12]; // 800DA5E0
  if (true) { c->lr=0x800DA5E8u; dispatch(c,c->ctr); } // 800DA5E4
  c->r[3]=c->r[1]+0x000000E0u; // 800DA5E8
  c->r[4]=c->r[1]+0x000000B0u; // 800DA5EC
  c->r[5]=c->r[1]+0x000000A4u; // 800DA5F0
  c->lr=0x800DA5F8u; f_800772A0(c); // 800DA5F4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA5F8
  c->r[3]=c->r[31]|c->r[31]; // 800DA5FC
  c->r[4]=c->r[1]+0x00000198u; // 800DA600
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DA604
  c->ctr=c->r[12]; // 800DA608
  if (true) { c->lr=0x800DA610u; dispatch(c,c->ctr); } // 800DA60C
  c->r[4]=c->r[3]|c->r[3]; // 800DA610
  c->r[3]=c->r[1]+0x00000098u; // 800DA614
  c->lr=0x800DA61Cu; f_80060F28(c); // 800DA618
  c->r[3]=c->r[1]+0x000000E0u; // 800DA61C
  c->r[4]=c->r[1]+0x00000098u; // 800DA620
  c->lr=0x800DA628u; f_800B3F44(c); // 800DA624
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA628
  fcmp(c,0,c->f[1],c->f[0]); // 800DA62C
  if (!crb(c,0)) { goto L_800DA760; } // 800DA630
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA634
  c->r[3]=c->r[31]|c->r[31]; // 800DA638
  c->r[4]=c->r[1]+0x00000168u; // 800DA63C
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DA640
  c->ctr=c->r[12]; // 800DA644
  if (true) { c->lr=0x800DA64Cu; dispatch(c,c->ctr); } // 800DA648
  c->r[4]=c->r[3]|c->r[3]; // 800DA64C
  c->r[3]=c->r[1]+0x0000008Cu; // 800DA650
  c->lr=0x800DA658u; f_80060F28(c); // 800DA654
  c->r[3]=c->r[1]+0x000000D4u; // 800DA658
  c->r[4]=c->r[1]+0x0000008Cu; // 800DA65C
  c->lr=0x800DA664u; f_8005FC20(c); // 800DA660
  c->r[3]=c->r[1]+0x000000C8u; // 800DA664
  c->r[4]=c->r[31]+0x000001B8u; // 800DA668
  c->lr=0x800DA670u; f_80061F40(c); // 800DA66C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA670
  c->r[4]=c->r[31]|c->r[31]; // 800DA674
  c->r[3]=c->r[1]+0x000000BCu; // 800DA678
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA67C
  c->ctr=c->r[12]; // 800DA680
  if (true) { c->lr=0x800DA688u; dispatch(c,c->ctr); } // 800DA684
  c->r[3]=c->r[1]+0x000001F8u; // 800DA688
  c->r[4]=c->r[1]+0x000000D4u; // 800DA68C
  c->r[5]=c->r[1]+0x000000C8u; // 800DA690
  c->lr=0x800DA698u; f_8005FD80(c); // 800DA694
  c->r[3]=c->r[1]+0x000001F8u; // 800DA698
  c->r[4]=c->r[1]+0x000000BCu; // 800DA69C
  c->lr=0x800DA6A4u; f_8005CDC8(c); // 800DA6A0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA6A4
  c->r[3]=c->r[31]|c->r[31]; // 800DA6A8
  c->r[4]=c->r[1]+0x000001F8u; // 800DA6AC
  c->r[12]=R32(c->r[12]+0x000000F0u); // 800DA6B0
  c->ctr=c->r[12]; // 800DA6B4
  if (true) { c->lr=0x800DA6BCu; dispatch(c,c->ctr); } // 800DA6B8
  c->r[5]=R32(c->r[31]+0x0000044Cu); // 800DA6BC
  c->r[3]=c->r[1]+0x00000068u; // 800DA6C0
  c->r[4]=R32(c->r[31]+0x00000444u); // 800DA6C4
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA6C8
  {uint32_t ea=c->r[4]+0x00000198u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA6CC
  {uint32_t ea=c->r[31]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA6D0
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[2]); // 800DA6D4
  {uint32_t ea=c->r[31]+0x000001D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA6D8
  {uint32_t ea=c->r[31]+0x000001E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA6DC
  c->lr=0x800DA6E4u; f_8005FD70(c); // 800DA6E0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA6E4
  c->r[3]=c->r[31]|c->r[31]; // 800DA6E8
  c->r[4]=c->r[1]+0x00000138u; // 800DA6EC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DA6F0
  c->ctr=c->r[12]; // 800DA6F4
  if (true) { c->lr=0x800DA6FCu; dispatch(c,c->ctr); } // 800DA6F8
  c->r[4]=c->r[3]|c->r[3]; // 800DA6FC
  c->r[3]=c->r[1]+0x00000074u; // 800DA700
  c->lr=0x800DA708u; f_80060F28(c); // 800DA704
  c->r[3]=c->r[1]+0x00000080u; // 800DA708
  c->r[4]=c->r[1]+0x00000074u; // 800DA70C
  c->r[5]=c->r[1]+0x00000068u; // 800DA710
  c->lr=0x800DA718u; f_800772A0(c); // 800DA714
  c->r[3]=c->r[1]+0x000000D4u; // 800DA718
  c->r[4]=c->r[1]+0x00000080u; // 800DA71C
  c->lr=0x800DA724u; f_8005DC84(c); // 800DA720
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA724
  c->r[3]=c->r[1]+0x000000D4u; // 800DA728
  c->r[5]=0u+0x806A0000u; // 800DA72C
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 800DA730
  c->r[4]=c->r[3]|c->r[3]; // 800DA734
  c->r[5]=c->r[5]+0x00000AA8u; // 800DA738
  c->lr=0x800DA740u; f_8030E0BC(c); // 800DA73C
  c->f[1]=-c->f[31]; // 800DA740
  c->r[3]=c->r[1]+0x0000005Cu; // 800DA744
  c->r[4]=c->r[1]+0x000000D4u; // 800DA748
  c->lr=0x800DA750u; f_800D6C88(c); // 800DA74C
  c->r[3]=c->r[1]+0x000000ECu; // 800DA750
  c->r[4]=c->r[1]+0x0000005Cu; // 800DA754
  c->lr=0x800DA75Cu; f_8005DC84(c); // 800DA758
  goto L_800DA800; // 800DA75C
L_800DA760:;
  c->r[5]=R32(c->r[31]+0x0000044Cu); // 800DA760
  c->r[3]=c->r[1]+0x00000038u; // 800DA764
  c->r[4]=R32(c->r[31]+0x00000444u); // 800DA768
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA76C
  {uint32_t ea=c->r[4]+0x00000198u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA770
  {uint32_t ea=c->r[31]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA774
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 800DA778
  {uint32_t ea=c->r[31]+0x000001D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA77C
  {uint32_t ea=c->r[31]+0x000001E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA780
  c->lr=0x800DA788u; f_8005FD70(c); // 800DA784
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA788
  c->r[3]=c->r[31]|c->r[31]; // 800DA78C
  c->r[4]=c->r[1]+0x00000108u; // 800DA790
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DA794
  c->ctr=c->r[12]; // 800DA798
  if (true) { c->lr=0x800DA7A0u; dispatch(c,c->ctr); } // 800DA79C
  c->r[4]=c->r[3]|c->r[3]; // 800DA7A0
  c->r[3]=c->r[1]+0x00000044u; // 800DA7A4
  c->lr=0x800DA7ACu; f_80060F28(c); // 800DA7A8
  c->r[3]=c->r[1]+0x00000050u; // 800DA7AC
  c->r[4]=c->r[1]+0x00000044u; // 800DA7B0
  c->r[5]=c->r[1]+0x00000038u; // 800DA7B4
  c->lr=0x800DA7BCu; f_800772A0(c); // 800DA7B8
  c->r[3]=c->r[1]+0x000000F8u; // 800DA7BC
  c->r[4]=c->r[1]+0x00000050u; // 800DA7C0
  c->lr=0x800DA7C8u; f_8005DC84(c); // 800DA7C4
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA7C8
  c->r[3]=c->r[1]+0x000000F8u; // 800DA7CC
  c->r[5]=0u+0x806A0000u; // 800DA7D0
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 800DA7D4
  c->r[4]=c->r[3]|c->r[3]; // 800DA7D8
  c->r[5]=c->r[5]+0x00000AA8u; // 800DA7DC
  c->lr=0x800DA7E4u; f_8030E0BC(c); // 800DA7E0
  c->f[1]=c->f[31]; // 800DA7E4
  c->r[3]=c->r[1]+0x0000002Cu; // 800DA7E8
  c->r[4]=c->r[1]+0x000000F8u; // 800DA7EC
  c->lr=0x800DA7F4u; f_800D6C88(c); // 800DA7F0
  c->r[3]=c->r[1]+0x000000ECu; // 800DA7F4
  c->r[4]=c->r[1]+0x0000002Cu; // 800DA7F8
  c->lr=0x800DA800u; f_8005DC84(c); // 800DA7FC
L_800DA800:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA800
  c->r[4]=c->r[31]|c->r[31]; // 800DA804
  c->r[3]=c->r[1]+0x00000014u; // 800DA808
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA80C
  c->ctr=c->r[12]; // 800DA810
  if (true) { c->lr=0x800DA818u; dispatch(c,c->ctr); } // 800DA814
  c->r[3]=c->r[1]+0x00000020u; // 800DA818
  c->r[4]=c->r[1]+0x00000014u; // 800DA81C
  c->r[5]=c->r[1]+0x000000ECu; // 800DA820
  c->lr=0x800DA828u; f_8005ED10(c); // 800DA824
  c->r[3]=c->r[31]+0x00000604u; // 800DA828
  c->r[4]=c->r[1]+0x00000020u; // 800DA82C
  c->lr=0x800DA834u; f_8005DC84(c); // 800DA830
  {uint32_t ea=c->r[2]+0xFFFFA53Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA834
  c->r[3]=c->r[1]+0x00000008u; // 800DA838
  c->r[4]=c->r[1]+0x000000ECu; // 800DA83C
  c->lr=0x800DA844u; f_80089874(c); // 800DA840
  c->r[3]=c->r[31]+0x00000614u; // 800DA844
  c->r[4]=c->r[1]+0x00000008u; // 800DA848
  c->lr=0x800DA850u; f_8005DC84(c); // 800DA84C
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA850
  {uint32_t ea=c->r[31]+0x00000620u; WF32(ea,c->f[0]);} // 800DA854
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,31,ea,0,0);} // 800DA858
  {uint32_t ea=c->r[1]+0x00000230u; c->f[31]=RF64(ea);} // 800DA85C
  c->r[31]=R32(c->r[1]+0x0000022Cu); // 800DA860
  c->r[0]=R32(c->r[1]+0x00000244u); // 800DA864
  c->lr=c->r[0]; // 800DA868
  c->r[1]=c->r[1]+0x00000240u; // 800DA86C
  return; // 800DA870
}

// fn_800DA874
void f_800DA874(Ctx* __restrict c) {
  trace_call(0x800DA874u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA874
  c->r[0]=c->lr; // 800DA878
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DA87C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800DA880
  c->r[31]=c->r[3]|c->r[3]; // 800DA884
  c->r[3]=R32(c->r[3]+0x00000404u); // 800DA888
  c->lr=0x800DA890u; f_802EA4B0(c); // 800DA88C
  {uint32_t ea=c->r[2]+0xFFFFA4BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA890
  fcmp(c,0,c->f[1],c->f[0]); // 800DA894
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DA898
  if (!crb(c,2)) { goto L_800DA924; } // 800DA89C
  {uint32_t ea=c->r[2]+0xFFFFA540u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA8A0
  fcmp(c,0,c->f[1],c->f[0]); // 800DA8A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DA8A8
  if (!crb(c,2)) { goto L_800DA924; } // 800DA8AC
  c->r[3]=c->r[31]+0x000001B8u; // 800DA8B0
  c->r[4]=c->r[1]+0x00000030u; // 800DA8B4
  c->lr=0x800DA8BCu; f_80382F2C(c); // 800DA8B8
  c->r[3]=R32(c->r[31]+0x00000404u); // 800DA8BC
  c->lr=0x800DA8C4u; f_802EA4B0(c); // 800DA8C0
  {uint32_t ea=c->r[31]+0x00000620u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA8C4
  c->r[3]=c->r[1]+0x00000008u; // 800DA8C8
  c->r[4]=c->r[31]+0x00000614u; // 800DA8CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DA8D0
  c->lr=0x800DA8D8u; f_800D6C88(c); // 800DA8D4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA8D8
  c->r[4]=c->r[31]|c->r[31]; // 800DA8DC
  c->r[3]=c->r[1]+0x00000014u; // 800DA8E0
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DA8E4
  c->ctr=c->r[12]; // 800DA8E8
  if (true) { c->lr=0x800DA8F0u; dispatch(c,c->ctr); } // 800DA8EC
  c->r[3]=c->r[1]+0x00000020u; // 800DA8F0
  c->r[4]=c->r[1]+0x00000014u; // 800DA8F4
  c->r[5]=c->r[1]+0x00000008u; // 800DA8F8
  c->lr=0x800DA900u; f_800772A0(c); // 800DA8FC
  c->r[3]=c->r[1]+0x00000030u; // 800DA900
  c->r[4]=c->r[1]+0x00000020u; // 800DA904
  c->lr=0x800DA90Cu; f_8005CDC8(c); // 800DA908
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DA90C
  c->r[3]=c->r[31]|c->r[31]; // 800DA910
  c->r[4]=c->r[1]+0x00000030u; // 800DA914
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DA918
  c->ctr=c->r[12]; // 800DA91C
  if (true) { c->lr=0x800DA924u; dispatch(c,c->ctr); } // 800DA920
L_800DA924:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 800DA924
  c->lr=0x800DA92Cu; f_802EA4B0(c); // 800DA928
  {uint32_t ea=c->r[31]+0x00000620u; WF32(ea,c->f[1]);} // 800DA92C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800DA930
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DA934
  c->lr=c->r[0]; // 800DA938
  c->r[1]=c->r[1]+0x00000070u; // 800DA93C
  return; // 800DA940
}

// fn_800DA944
void f_800DA944(Ctx* __restrict c) {
  trace_call(0x800DA944u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA944
  c->r[0]=c->lr; // 800DA948
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA94C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA950
  c->r[29]=c->r[3]|c->r[3]; // 800DA954
  c->r[30]=c->r[4]|c->r[4]; // 800DA958
  c->r[31]=R32(c->r[3]+0x0000041Cu); // 800DA95C
  c->r[3]=c->r[31]|c->r[31]; // 800DA960
  c->lr=0x800DA968u; f_800C2E40(c); // 800DA964
  c->r[0]=c->r[3]|c->r[3]; // 800DA968
  c->r[3]=c->r[31]|c->r[31]; // 800DA96C
  c->r[4]=c->r[30]+c->r[0]; // 800DA970
  c->lr=0x800DA978u; f_800C3054(c); // 800DA974
  c->r[0]=0u+0x00000000u; // 800DA978
  W32(c->r[29]+0x00000600u,c->r[0]); // 800DA97C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA980
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA984
  c->lr=c->r[0]; // 800DA988
  c->r[1]=c->r[1]+0x00000020u; // 800DA98C
  return; // 800DA990
}

// fn_800DA994
void f_800DA994(Ctx* __restrict c) {
  trace_call(0x800DA994u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA994
  c->r[0]=c->lr; // 800DA998
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA99C
  c->r[0]=0u+0x00000000u; // 800DA9A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA9A4
  c->r[31]=c->r[3]|c->r[3]; // 800DA9A8
  c->r[30]=0u+0x806D0000u; // 800DA9AC
  W32(c->r[3]+0x000005C8u,c->r[0]); // 800DA9B0
  c->r[29]=R32(c->r[3]+0x00000600u); // 800DA9B4
  goto L_800DABD8; // 800DA9B8
L_800DA9BC:;
  c->r[3]=R32(c->r[31]+0x0000041Cu); // 800DA9BC
  c->r[4]=c->r[29]|c->r[29]; // 800DA9C0
  c->lr=0x800DA9C8u; f_800C2EE0(c); // 800DA9C4
  c->r[4]=c->r[3]|c->r[3]; // 800DA9C8
  c->r[3]=c->r[31]|c->r[31]; // 800DA9CC
  c->lr=0x800DA9D4u; f_800DAC88(c); // 800DA9D0
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 800DA9D4
  cmpu(c,0,c->r[0],0x0000000Eu); // 800DA9D8
  if (crb(c,1)) { goto L_800DABD4; } // 800DA9DC
  c->r[3]=c->r[30]+0x00007968u; // 800DA9E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DA9E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DA9E8
  c->ctr=c->r[3]; // 800DA9EC
  if (true) { switch (c->ctr) { case 0x800DA9F4u: goto L_800DA9F4; case 0x800DAA14u: goto L_800DAA14; case 0x800DAA34u: goto L_800DAA34; case 0x800DAA54u: goto L_800DAA54; case 0x800DAA74u: goto L_800DAA74; case 0x800DAA94u: goto L_800DAA94; case 0x800DAAB4u: goto L_800DAAB4; case 0x800DAAD4u: goto L_800DAAD4; case 0x800DAAF4u: goto L_800DAAF4; case 0x800DAB14u: goto L_800DAB14; case 0x800DAB34u: goto L_800DAB34; case 0x800DAB54u: goto L_800DAB54; case 0x800DAB74u: goto L_800DAB74; case 0x800DAB94u: goto L_800DAB94; case 0x800DABB4u: goto L_800DABB4; default: break; } dispatch(c,c->ctr); return; } // 800DA9F0
L_800DA9F4:;
  c->r[0]=c->r[29]+0x00000001u; // 800DA9F4
  c->r[3]=0u+0x00000003u; // 800DA9F8
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DA9FC
  c->r[3]=c->r[31]|c->r[31]; // 800DAA00
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAA04
  c->lr=0x800DAA0Cu; f_8005E0F8(c); // 800DAA08
  c->r[3]=0u+0x00000001u; // 800DAA0C
  goto L_800DAC74; // 800DAA10
L_800DAA14:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAA14
  c->r[3]=0u+0x00000003u; // 800DAA18
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAA1C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA20
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAA24
  c->lr=0x800DAA2Cu; f_800D805C(c); // 800DAA28
  c->r[3]=0u+0x00000001u; // 800DAA2C
  goto L_800DAC74; // 800DAA30
L_800DAA34:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAA34
  c->r[3]=0u+0x00000003u; // 800DAA38
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAA3C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA40
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAA44
  c->lr=0x800DAA4Cu; f_800D8100(c); // 800DAA48
  c->r[3]=0u+0x00000001u; // 800DAA4C
  goto L_800DAC74; // 800DAA50
L_800DAA54:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAA54
  c->r[3]=0u+0x00000003u; // 800DAA58
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAA5C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA60
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAA64
  c->lr=0x800DAA6Cu; f_800D8B94(c); // 800DAA68
  c->r[3]=0u+0x00000001u; // 800DAA6C
  goto L_800DAC74; // 800DAA70
L_800DAA74:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAA74
  c->r[3]=0u+0x00000000u; // 800DAA78
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAA7C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA80
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAA84
  c->lr=0x800DAA8Cu; f_800D79A8(c); // 800DAA88
  c->r[3]=0u+0x00000001u; // 800DAA8C
  goto L_800DAC74; // 800DAA90
L_800DAA94:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAA94
  c->r[3]=0u+0x00000001u; // 800DAA98
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAA9C
  c->r[3]=c->r[31]|c->r[31]; // 800DAAA0
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAAA4
  c->lr=0x800DAAACu; f_800D79A8(c); // 800DAAA8
  c->r[3]=0u+0x00000001u; // 800DAAAC
  goto L_800DAC74; // 800DAAB0
L_800DAAB4:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAAB4
  c->r[3]=0u+0x00000003u; // 800DAAB8
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAABC
  c->r[3]=c->r[31]|c->r[31]; // 800DAAC0
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAAC4
  c->lr=0x800DAACCu; f_800D79A8(c); // 800DAAC8
  c->r[3]=0u+0x00000001u; // 800DAACC
  goto L_800DAC74; // 800DAAD0
L_800DAAD4:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAAD4
  c->r[3]=0u+0x00000001u; // 800DAAD8
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAADC
  c->r[3]=c->r[31]|c->r[31]; // 800DAAE0
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAAE4
  c->lr=0x800DAAECu; f_800D7D74(c); // 800DAAE8
  c->r[3]=0u+0x00000001u; // 800DAAEC
  goto L_800DAC74; // 800DAAF0
L_800DAAF4:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAAF4
  c->r[3]=0u+0x00000000u; // 800DAAF8
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAAFC
  c->r[3]=c->r[31]|c->r[31]; // 800DAB00
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAB04
  c->lr=0x800DAB0Cu; f_800D7D74(c); // 800DAB08
  c->r[3]=0u+0x00000001u; // 800DAB0C
  goto L_800DAC74; // 800DAB10
L_800DAB14:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAB14
  c->r[3]=0u+0x00000003u; // 800DAB18
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAB1C
  c->r[3]=c->r[31]|c->r[31]; // 800DAB20
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAB24
  c->lr=0x800DAB2Cu; f_800D7904(c); // 800DAB28
  c->r[3]=0u+0x00000001u; // 800DAB2C
  goto L_800DAC74; // 800DAB30
L_800DAB34:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAB34
  c->r[3]=0u+0x00000001u; // 800DAB38
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAB3C
  c->r[3]=c->r[31]|c->r[31]; // 800DAB40
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAB44
  c->lr=0x800DAB4Cu; f_800D8A54(c); // 800DAB48
  c->r[3]=0u+0x00000001u; // 800DAB4C
  goto L_800DAC74; // 800DAB50
L_800DAB54:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAB54
  c->r[3]=0u+0x00000000u; // 800DAB58
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAB5C
  c->r[3]=c->r[31]|c->r[31]; // 800DAB60
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAB64
  c->lr=0x800DAB6Cu; f_800D8A54(c); // 800DAB68
  c->r[3]=0u+0x00000001u; // 800DAB6C
  goto L_800DAC74; // 800DAB70
L_800DAB74:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAB74
  c->r[3]=0u+0x00000001u; // 800DAB78
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAB7C
  c->r[3]=c->r[31]|c->r[31]; // 800DAB80
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DAB84
  c->lr=0x800DAB8Cu; f_800D8580(c); // 800DAB88
  c->r[3]=0u+0x00000001u; // 800DAB8C
  goto L_800DAC74; // 800DAB90
L_800DAB94:;
  c->r[0]=c->r[29]+0x00000001u; // 800DAB94
  c->r[3]=0u+0x00000000u; // 800DAB98
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DAB9C
  c->r[3]=c->r[31]|c->r[31]; // 800DABA0
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DABA4
  c->lr=0x800DABACu; f_800D8580(c); // 800DABA8
  c->r[3]=0u+0x00000001u; // 800DABAC
  goto L_800DAC74; // 800DABB0
L_800DABB4:;
  c->r[0]=c->r[29]+0x00000001u; // 800DABB4
  c->r[3]=0u+0x00000003u; // 800DABB8
  W32(c->r[31]+0x000005CCu,c->r[3]); // 800DABBC
  c->r[3]=c->r[31]|c->r[31]; // 800DABC0
  W32(c->r[31]+0x00000600u,c->r[0]); // 800DABC4
  c->lr=0x800DABCCu; f_8007D858(c); // 800DABC8
  c->r[3]=0u+0x00000001u; // 800DABCC
  goto L_800DAC74; // 800DABD0
L_800DABD4:;
  c->r[29]=c->r[29]+0x00000001u; // 800DABD4
L_800DABD8:;
  cmps(c,0,(int32_t)c->r[29],16); // 800DABD8
  if (crb(c,0)) { IRQCHK(c); goto L_800DA9BC; } // 800DABDC
  c->r[3]=c->r[31]|c->r[31]; // 800DABE0
  c->lr=0x800DABE8u; f_800DB304(c); // 800DABE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DABE8
  if (crb(c,2)) { goto L_800DABF8; } // 800DABEC
  c->r[3]=0u+0x00000000u; // 800DABF0
  goto L_800DAC74; // 800DABF4
L_800DABF8:;
  c->r[3]=R32(c->r[31]+0x00000354u); // 800DABF8
  cmps(c,0,(int32_t)c->r[3],0); // 800DABFC
  if (!crb(c,2)) { goto L_800DAC0C; } // 800DAC00
  c->r[3]=0u+0x00000000u; // 800DAC04
  goto L_800DAC18; // 800DAC08
L_800DAC0C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DAC0C
  c->r[0]=sraw(c,c->r[3],31); // 800DAC10
  c->r[3]=c->r[3]&~c->r[0]; // 800DAC14
L_800DAC18:;
  c->r[0]=c->r[3]+0xFFFFC94Eu; // 800DAC18
  cmpu(c,0,c->r[0],0x00000002u); // 800DAC1C
  if (crb(c,1)) { goto L_800DAC30; } // 800DAC20
  c->r[3]=c->r[31]|c->r[31]; // 800DAC24
  c->lr=0x800DAC2Cu; f_80094A38(c); // 800DAC28
  goto L_800DAC70; // 800DAC2C
L_800DAC30:;
  c->r[0]=R32(c->r[31]+0x000005C4u); // 800DAC30
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC34
  if (crb(c,2)) { goto L_800DAC50; } // 800DAC38
  cmps(c,0,(int32_t)c->r[0],2); // 800DAC3C
  if (crb(c,2)) { goto L_800DAC5C; } // 800DAC40
  cmps(c,0,(int32_t)c->r[0],1); // 800DAC44
  if (crb(c,2)) { goto L_800DAC68; } // 800DAC48
  goto L_800DAC70; // 800DAC4C
L_800DAC50:;
  c->r[3]=c->r[31]|c->r[31]; // 800DAC50
  c->lr=0x800DAC58u; f_800D805C(c); // 800DAC54
  goto L_800DAC70; // 800DAC58
L_800DAC5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DAC5C
  c->lr=0x800DAC64u; f_800D8B94(c); // 800DAC60
  goto L_800DAC70; // 800DAC64
L_800DAC68:;
  c->r[3]=c->r[31]|c->r[31]; // 800DAC68
  c->lr=0x800DAC70u; f_800D8100(c); // 800DAC6C
L_800DAC70:;
  c->r[3]=0u+0x00000001u; // 800DAC70
L_800DAC74:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAC74
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAC78
  c->lr=c->r[0]; // 800DAC7C
  c->r[1]=c->r[1]+0x00000020u; // 800DAC80
  return; // 800DAC84
}

// fn_800DAC88
void f_800DAC88(Ctx* __restrict c) {
  trace_call(0x800DAC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAC88
  c->r[0]=c->lr; // 800DAC8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAC90
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAC94
  c->r[30]=0u+0x80690000u; // 800DAC98
  c->r[28]=c->r[4]|c->r[4]; // 800DAC9C
  c->r[29]=0u+0x00000000u; // 800DACA0
  c->r[30]=c->r[30]+0xFFFFE840u; // 800DACA4
  c->r[31]=0u+0x00000000u; // 800DACA8
L_800DACAC:;
  c->r[3]=c->r[28]|c->r[28]; // 800DACAC
  c->r[4]=c->r[30]+c->r[31]; // 800DACB0
  c->lr=0x800DACB8u; f_803B393C(c); // 800DACB4
  cmps(c,0,(int32_t)c->r[3],0); // 800DACB8
  if (!crb(c,2)) { goto L_800DACC8; } // 800DACBC
  c->r[3]=c->r[29]|c->r[29]; // 800DACC0
  goto L_800DACFC; // 800DACC4
L_800DACC8:;
  c->r[29]=c->r[29]+0x00000001u; // 800DACC8
  c->r[31]=c->r[31]+0x00000010u; // 800DACCC
  cmps(c,0,(int32_t)c->r[29],21); // 800DACD0
  if (crb(c,0)) { IRQCHK(c); goto L_800DACAC; } // 800DACD4
  c->r[4]=0u+0x80690000u; // 800DACD8
  c->r[3]=c->r[28]|c->r[28]; // 800DACDC
  c->r[4]=c->r[4]+0xFFFFE840u; // 800DACE0
  c->r[4]=c->r[4]+0x00000150u; // 800DACE4
  c->lr=0x800DACECu; f_803B4278(c); // 800DACE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DACEC
  c->r[3]=0u+0x00000017u; // 800DACF0
  if (crb(c,2)) { goto L_800DACFC; } // 800DACF4
  c->r[3]=0u+0x00000015u; // 800DACF8
L_800DACFC:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DACFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAD00
  c->lr=c->r[0]; // 800DAD04
  c->r[1]=c->r[1]+0x00000020u; // 800DAD08
  return; // 800DAD0C
}

// fn_800DAD10
void f_800DAD10(Ctx* __restrict c) {
  trace_call(0x800DAD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAD10
  c->r[0]=c->lr; // 800DAD14
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DAD18
  c->r[11]=c->r[1]+0x00000050u; // 800DAD1C
  c->lr=0x800DAD24u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DAD20
  c->r[31]=c->r[1]|c->r[1]; // 800DAD24
  c->r[0]=0u+0x43300000u; // 800DAD28
  W32(c->r[31]+0x00000030u,c->r[0]); // 800DAD2C
  c->r[30]=c->r[3]|c->r[3]; // 800DAD30
  c->r[28]=c->r[4]|c->r[4]; // 800DAD34
  W32(c->r[31]+0x00000038u,c->r[0]); // 800DAD38
  c->lr=0x800DAD40u; f_80060974(c); // 800DAD3C
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800DAD40
  cmps(c,0,(int32_t)c->r[3],0); // 800DAD44
  W32(c->r[31]+0x00000010u,c->r[3]); // 800DAD48
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800DAD4C
  if (crb(c,0)) { goto L_800DB120; } // 800DAD50
  c->r[0]=R8(c->r[30]+0x00000634u); // 800DAD54
  cmps(c,0,(int32_t)c->r[0],0); // 800DAD58
  if (crb(c,2)) { goto L_800DAD7C; } // 800DAD5C
  c->r[0]=R8(c->r[30]+0x00000635u); // 800DAD60
  cmps(c,0,(int32_t)c->r[0],0); // 800DAD64
  if (!crb(c,2)) { goto L_800DAD7C; } // 800DAD68
  c->r[3]=0u+0x00000002u; // 800DAD6C
  c->r[0]=0u+0x00000000u; // 800DAD70
  W32(c->r[30]+0x000005C0u,c->r[3]); // 800DAD74
  W8(c->r[30]+0x00000634u,c->r[0]); // 800DAD78
L_800DAD7C:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DAD7C
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800DAD80
  cmps(c,0,(int32_t)c->r[0],4); // 800DAD84
  if (!crb(c,2)) { goto L_800DADB8; } // 800DAD88
  c->r[3]=c->r[30]|c->r[30]; // 800DAD8C
  c->lr=0x800DAD94u; f_800DBAE4(c); // 800DAD90
  c->r[3]=c->r[30]|c->r[30]; // 800DAD94
  c->lr=0x800DAD9Cu; f_8006053C(c); // 800DAD98
  c->r[3]=0u+0x00000000u; // 800DAD9C
  c->r[0]=0u+0x00000002u; // 800DADA0
  W32(c->r[30]+0x000005C8u,c->r[3]); // 800DADA4
  c->r[3]=c->r[30]|c->r[30]; // 800DADA8
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DADAC
  c->lr=0x800DADB4u; f_800D9190(c); // 800DADB0
  goto L_800DB120; // 800DADB4
L_800DADB8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DADB8
  cmps(c,0,(int32_t)c->r[0],1); // 800DADBC
  if (crb(c,0)) { goto L_800DB120; } // 800DADC0
  c->r[3]=c->r[30]|c->r[30]; // 800DADC4
  c->lr=0x800DADCCu; f_800DBAE4(c); // 800DADC8
  c->r[3]=c->r[30]|c->r[30]; // 800DADCC
  c->lr=0x800DADD4u; f_8006053C(c); // 800DADD0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800DADD4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DADD8
  cmpu(c,0,c->r[0],0x00000001u); // 800DADDC
  if (!crb(c,1)) { goto L_800DAE0C; } // 800DADE0
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800DADE4
  cmpu(c,0,c->r[0],0x00000001u); // 800DADE8
  if (!crb(c,1)) { goto L_800DAE0C; } // 800DADEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DADF0
  if (crb(c,2)) { goto L_800DAF00; } // 800DADF4
  cmps(c,0,(int32_t)c->r[3],3); // 800DADF8
  if (crb(c,2)) { goto L_800DAF00; } // 800DADFC
  cmps(c,0,(int32_t)c->r[3],14); // 800DAE00
  if (crb(c,2)) { goto L_800DAFF4; } // 800DAE04
  goto L_800DB08C; // 800DAE08
L_800DAE0C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DAE0C
  cmps(c,0,(int32_t)c->r[0],3); // 800DAE10
  if (crb(c,0)) { goto L_800DAE24; } // 800DAE14
  c->r[0]=0u+0x00000001u; // 800DAE18
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DAE1C
  goto L_800DB0FC; // 800DAE20
L_800DAE24:;
  cmps(c,0,(int32_t)c->r[0],2); // 800DAE24
  if (crb(c,0)) { goto L_800DAE90; } // 800DAE28
  c->lr=0x800DAE30u; f_803B220C(c); // 800DAE2C
  c->r[0]=c->r[3]^0x80000000u; // 800DAE30
  W32(c->r[31]+0x00000034u,c->r[0]); // 800DAE34
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DAE38
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=RF64(ea);} // 800DAE3C
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAE40
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DAE44
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAE48
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DAE4C
  fcmp(c,0,c->f[1],c->f[0]); // 800DAE50
  if (!crb(c,0)) { goto L_800DAE74; } // 800DAE54
  c->r[3]=c->r[30]|c->r[30]; // 800DAE58
  c->r[4]=0u+0x000036DDu; // 800DAE5C
  c->r[5]=0u+0x00000001u; // 800DAE60
  c->lr=0x800DAE68u; f_80064744(c); // 800DAE64
  c->r[0]=0u+0x00000001u; // 800DAE68
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAE6C
  goto L_800DB08C; // 800DAE70
L_800DAE74:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAE74
  c->r[4]=0u+0x000036DEu; // 800DAE78
  c->r[5]=0u+0x00000001u; // 800DAE7C
  c->lr=0x800DAE84u; f_80064744(c); // 800DAE80
  c->r[0]=0u+0x00000000u; // 800DAE84
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAE88
  goto L_800DB08C; // 800DAE8C
L_800DAE90:;
  cmps(c,0,(int32_t)c->r[0],1); // 800DAE90
  if (crb(c,0)) { goto L_800DB120; } // 800DAE94
  c->lr=0x800DAE9Cu; f_803B220C(c); // 800DAE98
  c->r[0]=c->r[3]^0x80000000u; // 800DAE9C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DAEA0
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DAEA4
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=RF64(ea);} // 800DAEA8
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAEAC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DAEB0
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAEB4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DAEB8
  fcmp(c,0,c->f[1],c->f[0]); // 800DAEBC
  if (!crb(c,0)) { goto L_800DAEE0; } // 800DAEC0
  c->r[3]=c->r[30]|c->r[30]; // 800DAEC4
  c->r[4]=0u+0x000036D1u; // 800DAEC8
  c->r[5]=0u+0x00000001u; // 800DAECC
  c->lr=0x800DAED4u; f_80064744(c); // 800DAED0
  c->r[0]=0u+0x00000001u; // 800DAED4
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAED8
  goto L_800DB08C; // 800DAEDC
L_800DAEE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAEE0
  c->r[4]=0u+0x000036D2u; // 800DAEE4
  c->r[5]=0u+0x00000001u; // 800DAEE8
  c->lr=0x800DAEF0u; f_80064744(c); // 800DAEEC
  c->r[0]=0u+0x00000000u; // 800DAEF0
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAEF4
  goto L_800DB08C; // 800DAEF8
  goto L_800DB120; // 800DAEFC
L_800DAF00:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DAF00
  cmps(c,0,(int32_t)c->r[0],3); // 800DAF04
  if (crb(c,0)) { goto L_800DAF18; } // 800DAF08
  c->r[0]=0u+0x00000002u; // 800DAF0C
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DAF10
  goto L_800DB0FC; // 800DAF14
L_800DAF18:;
  cmps(c,0,(int32_t)c->r[0],2); // 800DAF18
  if (crb(c,0)) { goto L_800DAF84; } // 800DAF1C
  c->lr=0x800DAF24u; f_803B220C(c); // 800DAF20
  c->r[0]=c->r[3]^0x80000000u; // 800DAF24
  W32(c->r[31]+0x00000034u,c->r[0]); // 800DAF28
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DAF2C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=RF64(ea);} // 800DAF30
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAF34
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DAF38
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAF3C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DAF40
  fcmp(c,0,c->f[1],c->f[0]); // 800DAF44
  if (!crb(c,0)) { goto L_800DAF68; } // 800DAF48
  c->r[3]=c->r[30]|c->r[30]; // 800DAF4C
  c->r[4]=0u+0x000036DDu; // 800DAF50
  c->r[5]=0u+0x00000001u; // 800DAF54
  c->lr=0x800DAF5Cu; f_80064744(c); // 800DAF58
  c->r[0]=0u+0x00000001u; // 800DAF5C
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAF60
  goto L_800DB08C; // 800DAF64
L_800DAF68:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAF68
  c->r[4]=0u+0x000036DEu; // 800DAF6C
  c->r[5]=0u+0x00000001u; // 800DAF70
  c->lr=0x800DAF78u; f_80064744(c); // 800DAF74
  c->r[0]=0u+0x00000000u; // 800DAF78
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAF7C
  goto L_800DB08C; // 800DAF80
L_800DAF84:;
  cmps(c,0,(int32_t)c->r[0],1); // 800DAF84
  if (crb(c,0)) { goto L_800DB120; } // 800DAF88
  c->lr=0x800DAF90u; f_803B220C(c); // 800DAF8C
  c->r[0]=c->r[3]^0x80000000u; // 800DAF90
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DAF94
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DAF98
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=RF64(ea);} // 800DAF9C
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAFA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DAFA4
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAFA8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DAFAC
  fcmp(c,0,c->f[1],c->f[0]); // 800DAFB0
  if (!crb(c,0)) { goto L_800DAFD4; } // 800DAFB4
  c->r[3]=c->r[30]|c->r[30]; // 800DAFB8
  c->r[4]=0u+0x000036D1u; // 800DAFBC
  c->r[5]=0u+0x00000001u; // 800DAFC0
  c->lr=0x800DAFC8u; f_80064744(c); // 800DAFC4
  c->r[0]=0u+0x00000001u; // 800DAFC8
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAFCC
  goto L_800DB08C; // 800DAFD0
L_800DAFD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAFD4
  c->r[4]=0u+0x000036D2u; // 800DAFD8
  c->r[5]=0u+0x00000001u; // 800DAFDC
  c->lr=0x800DAFE4u; f_80064744(c); // 800DAFE0
  c->r[0]=0u+0x00000000u; // 800DAFE4
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DAFE8
  goto L_800DB08C; // 800DAFEC
  goto L_800DB120; // 800DAFF0
L_800DAFF4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DAFF4
  cmps(c,0,(int32_t)c->r[0],3); // 800DAFF8
  if (!crb(c,0)) { goto L_800DB110; } // 800DAFFC
  cmps(c,0,(int32_t)c->r[0],2); // 800DB000
  if (crb(c,0)) { goto L_800DB01C; } // 800DB004
  c->r[3]=c->r[30]|c->r[30]; // 800DB008
  c->r[4]=0u+0x000036E3u; // 800DB00C
  c->r[5]=0u+0x00000001u; // 800DB010
  c->lr=0x800DB018u; f_80064744(c); // 800DB014
  goto L_800DB08C; // 800DB018
L_800DB01C:;
  cmps(c,0,(int32_t)c->r[0],1); // 800DB01C
  if (crb(c,0)) { goto L_800DB120; } // 800DB020
  c->lr=0x800DB028u; f_803B220C(c); // 800DB024
  c->r[0]=c->r[3]^0x80000000u; // 800DB028
  W32(c->r[31]+0x00000034u,c->r[0]); // 800DB02C
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=RF64(ea);} // 800DB030
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=RF64(ea);} // 800DB034
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB038
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800DB03C
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB040
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DB044
  fcmp(c,0,c->f[1],c->f[0]); // 800DB048
  if (!crb(c,0)) { goto L_800DB06C; } // 800DB04C
  c->r[3]=c->r[30]|c->r[30]; // 800DB050
  c->r[4]=0u+0x000036D1u; // 800DB054
  c->r[5]=0u+0x00000001u; // 800DB058
  c->lr=0x800DB060u; f_80064744(c); // 800DB05C
  c->r[0]=0u+0x00000001u; // 800DB060
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DB064
  goto L_800DB08C; // 800DB068
L_800DB06C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB06C
  c->r[4]=0u+0x000036D2u; // 800DB070
  c->r[5]=0u+0x00000001u; // 800DB074
  c->lr=0x800DB07Cu; f_80064744(c); // 800DB078
  c->r[0]=0u+0x00000000u; // 800DB07C
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DB080
  goto L_800DB08C; // 800DB084
  goto L_800DB120; // 800DB088
L_800DB08C:;
  c->r[29]=0u+0x00000000u; // 800DB08C
  W32(c->r[30]+0x000005C8u,c->r[29]); // 800DB090
  c->lr=0x800DB098u; f_80062E5C(c); // 800DB094
  c->r[4]=c->r[3]|c->r[3]; // 800DB098
  c->r[3]=c->r[30]|c->r[30]; // 800DB09C
  c->lr=0x800DB0A4u; f_80062F4C(c); // 800DB0A0
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DB0A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DB0A8
  c->r[3]=c->r[30]+c->r[0]; // 800DB0AC
  c->r[28]=R32(c->r[3]+0x00000014u); // 800DB0B0
  cmps(c,0,(int32_t)c->r[28],0); // 800DB0B4
  if (crb(c,2)) { goto L_800DB0DC; } // 800DB0B8
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800DB0BC
  W8(c->r[31]+0x00000008u,c->r[29]); // 800DB0C0
  c->lr=0x800DB0C8u; f_80062E5C(c); // 800DB0C4
  W32(c->r[28]+0x00000000u,c->r[3]); // 800DB0C8
  c->r[0]=c->r[13]+0xFFFF80CCu; // 800DB0CC
  W32(c->r[28]+0x00000004u,c->r[0]); // 800DB0D0
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DB0D4
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800DB0D8
L_800DB0DC:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800DB0DC
  c->r[0]=0u+0x00000000u; // 800DB0E0
  c->r[3]=c->r[30]|c->r[30]; // 800DB0E4
  c->r[4]=c->r[28]|c->r[28]; // 800DB0E8
  W32(c->r[28]+0x00000008u,c->r[0]); // 800DB0EC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DB0F0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DB0F4
  c->lr=0x800DB0FCu; f_8006306C(c); // 800DB0F8
L_800DB0FC:;
  c->r[0]=0u+0x00000000u; // 800DB0FC
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800DB100
  c->r[3]=c->r[30]|c->r[30]; // 800DB104
  c->lr=0x800DB10Cu; f_800D9190(c); // 800DB108
  goto L_800DB120; // 800DB10C
L_800DB110:;
  c->r[0]=0u+0x00000000u; // 800DB110
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800DB114
  c->r[3]=c->r[30]|c->r[30]; // 800DB118
  c->lr=0x800DB120u; f_800D8D88(c); // 800DB11C
L_800DB120:;
  c->r[10]=c->r[31]|c->r[31]; // 800DB120
  c->r[11]=c->r[10]+0x00000050u; // 800DB124
  c->lr=0x800DB12Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB128
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DB12C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DB130
  c->r[1]=c->r[10]|c->r[10]; // 800DB134
  c->lr=c->r[0]; // 800DB138
  return; // 800DB13C
}

// fn_800DB140
void f_800DB140(Ctx* __restrict c) {
  trace_call(0x800DB140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB140
  c->r[0]=c->lr; // 800DB144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB148
  c->r[0]=0u+0x00000000u; // 800DB14C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB150
  c->r[31]=c->r[4]|c->r[4]; // 800DB154
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DB158
  c->r[30]=c->r[3]|c->r[3]; // 800DB15C
  W32(c->r[3]+0x000005C8u,c->r[0]); // 800DB160
  c->lr=0x800DB168u; f_800DBAE4(c); // 800DB164
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DB168
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800DB16C
  cmps(c,0,(int32_t)c->r[0],4); // 800DB170
  if (!crb(c,2)) { goto L_800DB19C; } // 800DB174
  c->r[3]=c->r[30]|c->r[30]; // 800DB178
  c->r[4]=0u+0x000036D6u; // 800DB17C
  c->r[5]=0u+0x00000001u; // 800DB180
  c->lr=0x800DB188u; f_80064744(c); // 800DB184
  c->r[0]=0u+0x00000002u; // 800DB188
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DB18C
  c->r[3]=c->r[30]|c->r[30]; // 800DB190
  c->lr=0x800DB198u; f_800D9190(c); // 800DB194
  goto L_800DB2EC; // 800DB198
L_800DB19C:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800DB19C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DB1A0
  cmpu(c,0,c->r[0],0x00000001u); // 800DB1A4
  if (!crb(c,1)) { goto L_800DB1D4; } // 800DB1A8
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800DB1AC
  cmpu(c,0,c->r[0],0x00000001u); // 800DB1B0
  if (!crb(c,1)) { goto L_800DB1F8; } // 800DB1B4
  cmps(c,0,(int32_t)c->r[3],14); // 800DB1B8
  if (crb(c,2)) { goto L_800DB1F8; } // 800DB1BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB1C0
  if (crb(c,2)) { goto L_800DB25C; } // 800DB1C4
  cmps(c,0,(int32_t)c->r[3],3); // 800DB1C8
  if (crb(c,2)) { goto L_800DB25C; } // 800DB1CC
  goto L_800DB2EC; // 800DB1D0
L_800DB1D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB1D4
  c->r[4]=0u+0x000036D6u; // 800DB1D8
  c->r[5]=0u+0x00000001u; // 800DB1DC
  c->lr=0x800DB1E4u; f_80064744(c); // 800DB1E0
  c->r[0]=0u+0x00000002u; // 800DB1E4
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DB1E8
  c->r[3]=c->r[30]|c->r[30]; // 800DB1EC
  c->lr=0x800DB1F4u; f_800D9190(c); // 800DB1F0
  goto L_800DB2EC; // 800DB1F4
L_800DB1F8:;
  c->lr=0x800DB1FCu; f_803B220C(c); // 800DB1F8
  c->r[3]=c->r[3]^0x80000000u; // 800DB1FC
  c->r[0]=0u+0x43300000u; // 800DB200
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DB204
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[3]=RF64(ea);} // 800DB208
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB20C
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB210
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800DB214
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB218
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DB21C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DB220
  fcmp(c,0,c->f[1],c->f[0]); // 800DB224
  if (!crb(c,0)) { goto L_800DB250; } // 800DB228
  c->r[3]=c->r[30]|c->r[30]; // 800DB22C
  c->r[4]=0u+0x000036D4u; // 800DB230
  c->r[5]=0u+0x00000001u; // 800DB234
  c->lr=0x800DB23Cu; f_80064744(c); // 800DB238
  c->r[0]=0u+0x00000001u; // 800DB23C
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DB240
  c->r[3]=c->r[30]|c->r[30]; // 800DB244
  c->lr=0x800DB24Cu; f_800D9190(c); // 800DB248
  goto L_800DB2EC; // 800DB24C
L_800DB250:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB250
  c->lr=0x800DB258u; f_8007D624(c); // 800DB254
  goto L_800DB2EC; // 800DB258
L_800DB25C:;
  c->lr=0x800DB260u; f_803B220C(c); // 800DB25C
  c->r[3]=c->r[3]^0x80000000u; // 800DB260
  c->r[0]=0u+0x43300000u; // 800DB264
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DB268
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[3]=RF64(ea);} // 800DB26C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB270
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB274
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800DB278
  {uint32_t ea=c->r[2]+0xFFFFA54Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB27C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DB280
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DB284
  fcmp(c,0,c->f[1],c->f[0]); // 800DB288
  if (!crb(c,0)) { goto L_800DB2B4; } // 800DB28C
  c->r[3]=c->r[30]|c->r[30]; // 800DB290
  c->r[4]=0u+0x000036D4u; // 800DB294
  c->r[5]=0u+0x00000001u; // 800DB298
  c->lr=0x800DB2A0u; f_80064744(c); // 800DB29C
  c->r[0]=0u+0x00000001u; // 800DB2A0
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DB2A4
  c->r[3]=c->r[30]|c->r[30]; // 800DB2A8
  c->lr=0x800DB2B0u; f_800D9190(c); // 800DB2AC
  goto L_800DB2EC; // 800DB2B0
L_800DB2B4:;
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB2B4
  fcmp(c,0,c->f[1],c->f[0]); // 800DB2B8
  if (!crb(c,0)) { goto L_800DB2E4; } // 800DB2BC
  c->r[3]=c->r[30]|c->r[30]; // 800DB2C0
  c->r[4]=0u+0x000036D6u; // 800DB2C4
  c->r[5]=0u+0x00000001u; // 800DB2C8
  c->lr=0x800DB2D0u; f_80064744(c); // 800DB2CC
  c->r[0]=0u+0x00000002u; // 800DB2D0
  W32(c->r[30]+0x000005D4u,c->r[0]); // 800DB2D4
  c->r[3]=c->r[30]|c->r[30]; // 800DB2D8
  c->lr=0x800DB2E0u; f_800D9190(c); // 800DB2DC
  goto L_800DB2EC; // 800DB2E0
L_800DB2E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB2E4
  c->lr=0x800DB2ECu; f_8007D624(c); // 800DB2E8
L_800DB2EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB2EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB2F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DB2F4
  c->lr=c->r[0]; // 800DB2F8
  c->r[1]=c->r[1]+0x00000020u; // 800DB2FC
  return; // 800DB300
}

// fn_800DB304
void f_800DB304(Ctx* __restrict c) {
  trace_call(0x800DB304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB304
  c->r[0]=c->lr; // 800DB308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB30C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB310
  c->r[30]=c->r[3]|c->r[3]; // 800DB314
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800DB318
  c->r[3]=c->r[4]+0x00000004u; // 800DB31C
  c->lr=0x800DB324u; f_800A09D4(c); // 800DB320
  c->r[31]=c->r[3]|c->r[3]; // 800DB324
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DB328
  c->lr=0x800DB330u; f_800C2E40(c); // 800DB32C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800DB330
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DB334
  if (!crb(c,0)) { goto L_800DB344; } // 800DB338
  c->r[3]=0u+0x00000000u; // 800DB33C
  goto L_800DB358; // 800DB340
L_800DB344:;
  c->r[0]=0u+0x00000002u; // 800DB344
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800DB348
  c->r[3]=c->r[30]|c->r[30]; // 800DB34C
  c->lr=0x800DB354u; f_800DB36C(c); // 800DB350
  c->r[3]=0u+0x00000001u; // 800DB354
L_800DB358:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB358
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB35C
  c->lr=c->r[0]; // 800DB360
  c->r[1]=c->r[1]+0x00000010u; // 800DB364
  return; // 800DB368
}

// fn_800DB36C
void f_800DB36C(Ctx* __restrict c) {
  trace_call(0x800DB36Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB36C
  c->r[0]=c->lr; // 800DB370
  c->r[4]=0u+0x00000016u; // 800DB374
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DB378
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800DB37C
  W32(c->r[1]+0x00000098u,c->r[30]); // 800DB380
  c->r[30]=c->r[3]|c->r[3]; // 800DB384
  c->lr=0x800DB38Cu; f_800D5F00(c); // 800DB388
  cmps(c,0,(int32_t)c->r[3],0); // 800DB38C
  if (!crb(c,2)) { goto L_800DB3B0; } // 800DB390
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB394
  c->r[3]=c->r[30]|c->r[30]; // 800DB398
  c->r[12]=R32(c->r[12]+0x00000100u); // 800DB39C
  c->ctr=c->r[12]; // 800DB3A0
  if (true) { c->lr=0x800DB3A8u; dispatch(c,c->ctr); } // 800DB3A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB3A8
  if (!crb(c,2)) { goto L_800DB3E4; } // 800DB3AC
L_800DB3B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB3B0
  c->lr=0x800DB3B8u; f_800DBAE4(c); // 800DB3B4
  c->r[3]=c->r[30]|c->r[30]; // 800DB3B8
  c->r[4]=0u+0x00000016u; // 800DB3BC
  c->r[5]=0u+0x00000001u; // 800DB3C0
  c->lr=0x800DB3C8u; f_800D5F20(c); // 800DB3C4
  c->r[3]=c->r[30]|c->r[30]; // 800DB3C8
  c->r[4]=0u+0x000036DCu; // 800DB3CC
  c->r[5]=0u+0x00000001u; // 800DB3D0
  c->lr=0x800DB3D8u; f_80064744(c); // 800DB3D4
  c->r[3]=c->r[30]|c->r[30]; // 800DB3D8
  c->lr=0x800DB3E0u; f_8007D624(c); // 800DB3DC
  goto L_800DB5CC; // 800DB3E0
L_800DB3E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB3E4
  c->lr=0x800DB3ECu; f_8006052C(c); // 800DB3E8
  c->r[0]=0u+0x00000000u; // 800DB3EC
  W32(c->r[30]+0x000005C8u,c->r[0]); // 800DB3F0
  c->r[3]=c->r[30]|c->r[30]; // 800DB3F4
  c->r[4]=c->r[1]+0x00000068u; // 800DB3F8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB3FC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DB400
  c->ctr=c->r[12]; // 800DB404
  if (true) { c->lr=0x800DB40Cu; dispatch(c,c->ctr); } // 800DB408
  c->r[4]=c->r[3]|c->r[3]; // 800DB40C
  c->r[3]=c->r[1]+0x00000014u; // 800DB410
  c->lr=0x800DB418u; f_80060878(c); // 800DB414
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB418
  c->r[4]=c->r[30]|c->r[30]; // 800DB41C
  c->r[3]=c->r[1]+0x00000020u; // 800DB420
  c->r[12]=R32(c->r[12]+0x00000134u); // 800DB424
  c->ctr=c->r[12]; // 800DB428
  if (true) { c->lr=0x800DB430u; dispatch(c,c->ctr); } // 800DB42C
  c->r[3]=c->r[1]+0x0000002Cu; // 800DB430
  c->r[4]=c->r[1]+0x00000020u; // 800DB434
  c->r[5]=c->r[1]+0x00000014u; // 800DB438
  c->lr=0x800DB440u; f_800772A0(c); // 800DB43C
  c->r[3]=c->r[1]+0x0000002Cu; // 800DB440
  c->r[5]=0u+0x806A0000u; // 800DB444
  c->r[4]=c->r[3]|c->r[3]; // 800DB448
  c->r[5]=c->r[5]+0x00000AA8u; // 800DB44C
  c->lr=0x800DB454u; f_8030E0BC(c); // 800DB450
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB454
  c->r[3]=c->r[30]|c->r[30]; // 800DB458
  c->r[4]=c->r[1]+0x00000038u; // 800DB45C
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DB460
  c->ctr=c->r[12]; // 800DB464
  if (true) { c->lr=0x800DB46Cu; dispatch(c,c->ctr); } // 800DB468
  c->r[4]=c->r[3]|c->r[3]; // 800DB46C
  c->r[3]=c->r[1]+0x00000008u; // 800DB470
  c->lr=0x800DB478u; f_80060F28(c); // 800DB474
  c->r[3]=c->r[1]+0x0000002Cu; // 800DB478
  c->r[4]=c->r[1]+0x00000008u; // 800DB47C
  c->lr=0x800DB484u; f_800B3F44(c); // 800DB480
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB484
  fcmp(c,0,c->f[1],c->f[0]); // 800DB488
  if (!crb(c,0)) { goto L_800DB4A4; } // 800DB48C
  c->r[0]=0u+0x00000001u; // 800DB490
  W32(c->r[30]+0x000005D0u,c->r[0]); // 800DB494
  c->r[3]=c->r[30]|c->r[30]; // 800DB498
  c->lr=0x800DB4A0u; f_800D6E20(c); // 800DB49C
  goto L_800DB5CC; // 800DB4A0
L_800DB4A4:;
  c->r[3]=R32(c->r[30]+0x00000420u); // 800DB4A4
  c->r[0]=R32(c->r[3]+0x00000020u); // 800DB4A8
  cmps(c,0,(int32_t)c->r[0],3); // 800DB4AC
  if (crb(c,0)) { goto L_800DB4C8; } // 800DB4B0
  c->r[0]=0u+0x00000002u; // 800DB4B4
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DB4B8
  c->r[3]=c->r[30]|c->r[30]; // 800DB4BC
  c->lr=0x800DB4C4u; f_800DB5E4(c); // 800DB4C0
  goto L_800DB5CC; // 800DB4C4
L_800DB4C8:;
  c->r[4]=R32(c->r[30]+0x00000624u); // 800DB4C8
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DB4CC
  c->r[0]=c->r[4]+0x00000001u; // 800DB4D0
  W32(c->r[30]+0x00000624u,c->r[0]); // 800DB4D4
  c->r[0]=R32(c->r[3]+0x000000A4u); // 800DB4D8
  cmps(c,0,(int32_t)c->r[0],1); // 800DB4DC
  if (crb(c,0)) { goto L_800DB4EC; } // 800DB4E0
  cmps(c,0,(int32_t)c->r[0],2); // 800DB4E4
  if (!crb(c,1)) { goto L_800DB514; } // 800DB4E8
L_800DB4EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB4EC
  if (crb(c,2)) { goto L_800DB500; } // 800DB4F0
  cmps(c,0,(int32_t)c->r[0],3); // 800DB4F4
  if (crb(c,2)) { goto L_800DB5BC; } // 800DB4F8
  goto L_800DB5CC; // 800DB4FC
L_800DB500:;
  c->r[0]=0u+0x00000001u; // 800DB500
  W32(c->r[30]+0x000005D0u,c->r[0]); // 800DB504
  c->r[3]=c->r[30]|c->r[30]; // 800DB508
  c->lr=0x800DB510u; f_800D6E20(c); // 800DB50C
  goto L_800DB5CC; // 800DB510
L_800DB514:;
  c->r[3]=R32(c->r[30]+0x00000434u); // 800DB514
  c->lr=0x800DB51Cu; f_800FE178(c); // 800DB518
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800DB51C
  c->r[31]=c->r[3]|c->r[3]; // 800DB520
  cmpu(c,0,c->r[0],0x00000004u); // 800DB524
  if (!crb(c,1)) { goto L_800DB580; } // 800DB528
  cmps(c,0,(int32_t)c->r[3],0); // 800DB52C
  if (crb(c,2)) { goto L_800DB550; } // 800DB530
  cmps(c,0,(int32_t)c->r[3],1); // 800DB534
  if (crb(c,2)) { goto L_800DB55C; } // 800DB538
  cmps(c,0,(int32_t)c->r[3],2); // 800DB53C
  if (crb(c,2)) { goto L_800DB568; } // 800DB540
  cmps(c,0,(int32_t)c->r[3],3); // 800DB544
  if (crb(c,2)) { goto L_800DB574; } // 800DB548
  goto L_800DB5CC; // 800DB54C
L_800DB550:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB550
  c->lr=0x800DB558u; f_8005E0F8(c); // 800DB554
  goto L_800DB5CC; // 800DB558
L_800DB55C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB55C
  c->lr=0x800DB564u; f_8007D858(c); // 800DB560
  goto L_800DB5CC; // 800DB564
L_800DB568:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB568
  c->lr=0x800DB570u; f_800DB5E4(c); // 800DB56C
  goto L_800DB5CC; // 800DB570
L_800DB574:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB574
  c->lr=0x800DB57Cu; f_800D6E20(c); // 800DB578
  goto L_800DB5CC; // 800DB57C
L_800DB580:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB580
  c->r[3]=c->r[30]|c->r[30]; // 800DB584
  c->r[12]=R32(c->r[12]+0x00000114u); // 800DB588
  c->ctr=c->r[12]; // 800DB58C
  if (true) { c->lr=0x800DB594u; dispatch(c,c->ctr); } // 800DB590
  cmps(c,0,(int32_t)c->r[3],0); // 800DB594
  if (crb(c,2)) { goto L_800DB5B0; } // 800DB598
  c->r[0]=c->r[31]+0xFFFFFFFCu; // 800DB59C
  W32(c->r[30]+0x00000630u,c->r[0]); // 800DB5A0
  c->r[3]=c->r[30]|c->r[30]; // 800DB5A4
  c->lr=0x800DB5ACu; f_80095124(c); // 800DB5A8
  goto L_800DB5CC; // 800DB5AC
L_800DB5B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB5B0
  c->lr=0x800DB5B8u; f_8005E0F8(c); // 800DB5B4
  goto L_800DB5CC; // 800DB5B8
L_800DB5BC:;
  c->r[0]=0u+0x00000000u; // 800DB5BC
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DB5C0
  c->r[3]=c->r[30]|c->r[30]; // 800DB5C4
  c->lr=0x800DB5CCu; f_800D8100(c); // 800DB5C8
L_800DB5CC:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DB5CC
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800DB5D0
  c->r[30]=R32(c->r[1]+0x00000098u); // 800DB5D4
  c->lr=c->r[0]; // 800DB5D8
  c->r[1]=c->r[1]+0x000000A0u; // 800DB5DC
  return; // 800DB5E0
}

// fn_800DB5E4
void f_800DB5E4(Ctx* __restrict c) {
  trace_call(0x800DB5E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB5E4
  c->r[0]=c->lr; // 800DB5E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB5EC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB5F0
  c->r[31]=c->r[1]|c->r[1]; // 800DB5F4
  c->r[28]=c->r[3]|c->r[3]; // 800DB5F8
  c->lr=0x800DB600u; f_800D4DFC(c); // 800DB5FC
  c->r[4]=c->r[3]|c->r[3]; // 800DB600
  c->r[3]=c->r[28]|c->r[28]; // 800DB604
  c->lr=0x800DB60Cu; f_80062F4C(c); // 800DB608
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DB60C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DB610
  c->r[3]=c->r[28]+c->r[0]; // 800DB614
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DB618
  cmps(c,0,(int32_t)c->r[29],0); // 800DB61C
  if (crb(c,2)) { goto L_800DB648; } // 800DB620
  c->r[30]=0u+0x00000000u; // 800DB624
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DB628
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DB62C
  c->lr=0x800DB634u; f_800D4DFC(c); // 800DB630
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DB634
  c->r[0]=c->r[13]+0xFFFF8468u; // 800DB638
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DB63C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DB640
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DB644
L_800DB648:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DB648
  c->r[0]=0u+0x00000000u; // 800DB64C
  c->r[3]=c->r[28]|c->r[28]; // 800DB650
  c->r[4]=c->r[29]|c->r[29]; // 800DB654
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DB658
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DB65C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DB660
  c->lr=0x800DB668u; f_8006306C(c); // 800DB664
  c->r[10]=c->r[31]|c->r[31]; // 800DB668
  c->r[3]=c->r[29]|c->r[29]; // 800DB66C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB670
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DB674
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DB678
  c->r[1]=c->r[10]|c->r[10]; // 800DB67C
  c->lr=c->r[0]; // 800DB680
  return; // 800DB684
}

// fn_800DB688
void f_800DB688(Ctx* __restrict c) {
  trace_call(0x800DB688u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB688
  c->r[0]=c->lr; // 800DB68C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800DB690
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800DB694
  c->r[31]=c->r[4]|c->r[4]; // 800DB698
  W32(c->r[1]+0x00000058u,c->r[30]); // 800DB69C
  c->r[30]=c->r[3]|c->r[3]; // 800DB6A0
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800DB6A4
  c->lr=0x800DB6ACu; f_800C2DF8(c); // 800DB6A8
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DB6AC
  c->r[3]=c->r[30]+c->r[0]; // 800DB6B0
  c->r[4]=R32(c->r[3]+0x000005E0u); // 800DB6B4
  cmps(c,0,(int32_t)c->r[4],0); // 800DB6B8
  if (!crb(c,2)) { goto L_800DB6C8; } // 800DB6BC
  c->r[3]=0u+0x00000000u; // 800DB6C0
  goto L_800DB798; // 800DB6C4
L_800DB6C8:;
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DB6C8
  c->r[3]=c->r[3]+0x00000004u; // 800DB6CC
  c->lr=0x800DB6D4u; f_800A0914(c); // 800DB6D0
  c->r[31]=R32(c->r[30]+0x0000041Cu); // 800DB6D4
  c->r[4]=0u+0x00000000u; // 800DB6D8
  c->r[3]=c->r[31]|c->r[31]; // 800DB6DC
  c->lr=0x800DB6E4u; f_800C30A0(c); // 800DB6E0
  c->r[4]=c->r[3]|c->r[3]; // 800DB6E4
  c->r[3]=c->r[31]+0x00000004u; // 800DB6E8
  c->lr=0x800DB6F0u; f_800A09F0(c); // 800DB6EC
  c->r[4]=c->r[3]|c->r[3]; // 800DB6F0
  c->r[3]=c->r[1]+0x00000014u; // 800DB6F4
  c->lr=0x800DB6FCu; f_8005CD7C(c); // 800DB6F8
  c->r[31]=R32(c->r[30]+0x0000041Cu); // 800DB6FC
  c->r[4]=0u+0x00000000u; // 800DB700
  c->r[3]=c->r[31]|c->r[31]; // 800DB704
  c->lr=0x800DB70Cu; f_800C30A0(c); // 800DB708
  c->r[5]=c->r[3]|c->r[3]; // 800DB70C
  c->r[3]=c->r[1]+0x00000008u; // 800DB710
  c->r[4]=c->r[31]+0x00000004u; // 800DB714
  c->lr=0x800DB71Cu; f_800A0A20(c); // 800DB718
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DB71C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB720
  c->lr=0x800DB728u; f_804E1378(c); // 800DB724
  {uint32_t ea=c->r[2]+0xFFFFA510u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DB728
  c->r[3]=c->r[1]+0x00000020u; // 800DB72C
  {uint32_t ea=c->r[2]+0xFFFFA500u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB730
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800DB734
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB738
  c->f[3]=c->f[1]; // 800DB73C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800DB740
  c->lr=0x800DB748u; f_804E18A0(c); // 800DB744
  c->r[3]=c->r[1]+0x00000020u; // 800DB748
  c->r[4]=c->r[1]+0x00000014u; // 800DB74C
  c->lr=0x800DB754u; f_8005CDC8(c); // 800DB750
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DB754
  c->r[3]=c->r[30]|c->r[30]; // 800DB758
  c->r[4]=c->r[1]+0x00000020u; // 800DB75C
  c->r[12]=R32(c->r[12]+0x000000F0u); // 800DB760
  c->ctr=c->r[12]; // 800DB764
  if (true) { c->lr=0x800DB76Cu; dispatch(c,c->ctr); } // 800DB768
  c->r[4]=0u+0x00000000u; // 800DB76C
  c->r[3]=0u+0x00000001u; // 800DB770
  c->r[0]=0u+0x00000003u; // 800DB774
  W32(c->r[30]+0x000005C0u,c->r[3]); // 800DB778
  c->r[3]=c->r[30]|c->r[30]; // 800DB77C
  W32(c->r[30]+0x000005C4u,c->r[4]); // 800DB780
  W32(c->r[30]+0x000005CCu,c->r[0]); // 800DB784
  W32(c->r[30]+0x000005C8u,c->r[4]); // 800DB788
  W32(c->r[30]+0x00000600u,c->r[4]); // 800DB78C
  c->lr=0x800DB794u; f_800DA994(c); // 800DB790
  c->r[3]=0u+0x00000001u; // 800DB794
L_800DB798:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800DB798
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800DB79C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800DB7A0
  c->lr=c->r[0]; // 800DB7A4
  c->r[1]=c->r[1]+0x00000060u; // 800DB7A8
  return; // 800DB7AC
}

// fn_800DB7B0
void f_800DB7B0(Ctx* __restrict c) {
  trace_call(0x800DB7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB7B0
  c->r[0]=c->lr; // 800DB7B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DB7B8
  c->r[11]=c->r[1]+0x00000080u; // 800DB7BC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800DB7C0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800DB7C4
  c->lr=0x800DB7CCu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DB7C8
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800DB7CC
  c->r[18]=c->r[3]|c->r[3]; // 800DB7D0
  c->r[12]=R32(c->r[12]+0x00000100u); // 800DB7D4
  c->ctr=c->r[12]; // 800DB7D8
  if (true) { c->lr=0x800DB7E0u; dispatch(c,c->ctr); } // 800DB7DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB7E0
  if (crb(c,2)) { goto L_800DBA84; } // 800DB7E4
  c->r[3]=c->r[18]|c->r[18]; // 800DB7E8
  c->r[4]=0u+0x00000016u; // 800DB7EC
  c->lr=0x800DB7F4u; f_800D5F00(c); // 800DB7F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB7F4
  if (crb(c,2)) { goto L_800DB800; } // 800DB7F8
  goto L_800DBA84; // 800DB7FC
L_800DB800:;
  c->r[3]=R32(c->r[18]+0x0000044Cu); // 800DB800
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800DB804
  cmps(c,0,(int32_t)c->r[0],4); // 800DB808
  if (crb(c,2)) { goto L_800DBA84; } // 800DB80C
  c->r[0]=R32(c->r[18]+0x000005C0u); // 800DB810
  cmps(c,0,(int32_t)c->r[0],2); // 800DB814
  if (!crb(c,2)) { goto L_800DBA84; } // 800DB818
  c->r[23]=0u+0x00000000u; // 800DB81C
  W8(c->r[1]+0x00000014u,c->r[23]); // 800DB820
  c->r[3]=c->r[1]+0x00000014u; // 800DB824
  c->lr=0x800DB82Cu; f_80046D50(c); // 800DB828
  c->lr=0x800DB830u; f_8008CD00(c); // 800DB82C
  W8(c->r[1]+0x00000010u,c->r[23]); // 800DB830
  c->r[24]=c->r[3]|c->r[3]; // 800DB834
  c->r[3]=c->r[1]+0x00000010u; // 800DB838
  c->lr=0x800DB840u; f_80046D50(c); // 800DB83C
  c->lr=0x800DB844u; f_8008CD18(c); // 800DB840
  c->r[26]=0u+0x80730000u; // 800DB844
  c->r[27]=0u+0x806D0000u; // 800DB848
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DB84C
  c->r[25]=c->r[3]|c->r[3]; // 800DB850
  c->r[27]=c->r[27]+0xFFFFC340u; // 800DB854
  c->r[28]=c->r[26]+0x00006378u; // 800DB858
  c->r[19]=0u+0x00000000u; // 800DB85C
  c->r[29]=0u+0x80050000u; // 800DB860
  c->r[30]=0u+0x80750000u; // 800DB864
  c->r[31]=0u+0x00000001u; // 800DB868
  goto L_800DBA38; // 800DB86C
L_800DB870:;
  c->r[0]=c->r[24]+c->r[19]; // 800DB870
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DB874
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800DB878
  c->r[0]=c->r[0]^c->r[3]; // 800DB87C
  c->r[21]=c->r[0]-c->r[3]; // 800DB880
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)20); // 800DB884
  c->r[20]=c->r[18]+c->r[0]; // 800DB888
  c->r[0]=R8(c->r[20]+0x00000650u); // 800DB88C
  cmps(c,0,(int32_t)c->r[0],0); // 800DB890
  if (!crb(c,2)) { goto L_800DB8B4; } // 800DB894
  W8(c->r[1]+0x0000000Cu,c->r[23]); // 800DB898
  c->r[3]=c->r[1]+0x0000000Cu; // 800DB89C
  c->lr=0x800DB8A4u; f_8004714C(c); // 800DB8A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB8A4
  {uint32_t ea=c->r[20]+0x0000064Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB8A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DB8AC
  {uint32_t ea=c->r[20]+0x0000064Cu; WF32(ea,c->f[0]);} // 800DB8B0
L_800DB8B4:;
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800DB8B4
  W32(c->r[1]+0x00000030u,c->r[23]); // 800DB8B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DB8BC
  W32(c->r[1]+0x00000034u,c->r[23]); // 800DB8C0
  if (!crb(c,2)) { goto L_800DB8F0; } // 800DB8C4
  c->r[3]=c->r[26]+0x00006378u; // 800DB8C8
  c->lr=0x800DB8D0u; f_800B0D5C(c); // 800DB8CC
  c->r[0]=c->r[27]+0x00000028u; // 800DB8D0
  W32(c->r[28]+0x000000A4u,c->r[27]); // 800DB8D4
  c->r[3]=c->r[28]|c->r[28]; // 800DB8D8
  c->r[4]=c->r[29]+0xFFFF9F20u; // 800DB8DC
  W32(c->r[28]+0x000000A8u,c->r[0]); // 800DB8E0
  c->r[5]=c->r[30]+0x00003928u; // 800DB8E4
  c->lr=0x800DB8ECu; f_803A92B8(c); // 800DB8E8
  W8(c->r[13]+0xFFFFBB88u,c->r[31]); // 800DB8EC
L_800DB8F0:;
  c->r[4]=c->r[21]|c->r[21]; // 800DB8F0
  c->r[3]=c->r[26]+0x00006378u; // 800DB8F4
  c->r[7]=c->r[1]+0x00000030u; // 800DB8F8
  c->r[8]=c->r[1]+0x0000001Cu; // 800DB8FC
  c->r[9]=c->r[1]+0x00000018u; // 800DB900
  c->r[5]=0u+0x00000000u; // 800DB904
  c->r[6]=0u+0x00000000u; // 800DB908
  c->lr=0x800DB910u; f_800B2400(c); // 800DB90C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800DB910
  if (crb(c,2)) { goto L_800DBA2C; } // 800DB914
  c->r[6]=R32(c->r[18]+0x00000020u); // 800DB918
  c->r[3]=c->r[1]+0x00000028u; // 800DB91C
  c->r[5]=R32(c->r[18]+0x00000024u); // 800DB920
  c->r[22]=0u+0x00000001u; // 800DB924
  c->r[4]=R32(c->r[1]+0x00000030u); // 800DB928
  c->r[21]=0u+0x00000000u; // 800DB92C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DB930
  W32(c->r[1]+0x00000020u,c->r[6]); // 800DB934
  W32(c->r[1]+0x00000024u,c->r[5]); // 800DB938
  W32(c->r[1]+0x00000028u,c->r[4]); // 800DB93C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800DB940
  c->lr=0x800DB948u; f_80053614(c); // 800DB944
  c->r[0]=cntlz(c->r[3]); // 800DB948
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800DB94C
  if (crb(c,2)) { goto L_800DB96C; } // 800DB950
  c->r[3]=c->r[1]+0x00000020u; // 800DB954
  c->lr=0x800DB95Cu; f_80053614(c); // 800DB958
  c->r[0]=cntlz(c->r[3]); // 800DB95C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800DB960
  if (crb(c,2)) { goto L_800DB96C; } // 800DB964
  c->r[21]=0u+0x00000001u; // 800DB968
L_800DB96C:;
  cmps(c,0,(int32_t)c->r[21],0); // 800DB96C
  if (!crb(c,2)) { goto L_800DB9C4; } // 800DB970
  c->r[3]=c->r[1]+0x00000028u; // 800DB974
  c->r[17]=0u+0x00000000u; // 800DB978
  c->lr=0x800DB980u; f_80053614(c); // 800DB97C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB980
  if (crb(c,2)) { goto L_800DB9B8; } // 800DB984
  c->r[3]=c->r[1]+0x00000020u; // 800DB988
  c->lr=0x800DB990u; f_80053614(c); // 800DB98C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB990
  if (crb(c,2)) { goto L_800DB9B8; } // 800DB994
  c->r[3]=c->r[1]+0x00000020u; // 800DB998
  c->lr=0x800DB9A0u; f_800DBAA4(c); // 800DB99C
  c->r[21]=c->r[3]|c->r[3]; // 800DB9A0
  c->r[3]=c->r[1]+0x00000028u; // 800DB9A4
  c->lr=0x800DB9ACu; f_800DBAA4(c); // 800DB9A8
  cmpu(c,0,c->r[3],c->r[21]); // 800DB9AC
  if (!crb(c,2)) { goto L_800DB9B8; } // 800DB9B0
  c->r[17]=0u+0x00000001u; // 800DB9B4
L_800DB9B8:;
  cmps(c,0,(int32_t)c->r[17],0); // 800DB9B8
  if (!crb(c,2)) { goto L_800DB9C4; } // 800DB9BC
  c->r[22]=0u+0x00000000u; // 800DB9C0
L_800DB9C4:;
  cmps(c,0,(int32_t)c->r[22],0); // 800DB9C4
  if (crb(c,2)) { goto L_800DBA2C; } // 800DB9C8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800DB9CC
  cmps(c,0,(int32_t)c->r[0],1); // 800DB9D0
  if (!crb(c,2)) { goto L_800DBA2C; } // 800DB9D4
  c->r[0]=R8(c->r[20]+0x00000650u); // 800DB9D8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB9DC
  if (!crb(c,2)) { goto L_800DBA34; } // 800DB9E0
  W8(c->r[1]+0x00000008u,c->r[23]); // 800DB9E4
  c->r[3]=c->r[1]+0x00000008u; // 800DB9E8
  c->lr=0x800DB9F0u; f_8004714C(c); // 800DB9EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB9F0
  {uint32_t ea=c->r[20]+0x00000644u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB9F4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800DB9F8
  {uint32_t ea=c->r[20]+0x00000644u; WF32(ea,c->f[1]);} // 800DB9FC
  {uint32_t ea=c->r[20]+0x00000640u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBA00
  fcmp(c,0,c->f[1],c->f[0]); // 800DBA04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DBA08
  if (!crb(c,2)) { goto L_800DBA34; } // 800DBA0C
  {uint32_t ea=c->r[20]+0x0000064Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBA10
  {uint32_t ea=c->r[20]+0x00000648u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBA14
  fcmp(c,0,c->f[1],c->f[0]); // 800DBA18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DBA1C
  if (!crb(c,2)) { goto L_800DBA34; } // 800DBA20
  W8(c->r[20]+0x00000650u,c->r[31]); // 800DBA24
  goto L_800DBA34; // 800DBA28
L_800DBA2C:;
  {uint32_t ea=c->r[20]+0x00000644u; WF32(ea,c->f[31]);} // 800DBA2C
  W8(c->r[20]+0x00000650u,c->r[23]); // 800DBA30
L_800DBA34:;
  c->r[19]=c->r[19]+0x00000001u; // 800DBA34
L_800DBA38:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[25]); // 800DBA38
  if (crb(c,0)) { IRQCHK(c); goto L_800DB870; } // 800DBA3C
  c->r[0]=R8(c->r[18]+0x00000650u); // 800DBA40
  cmps(c,0,(int32_t)c->r[0],0); // 800DBA44
  if (!crb(c,2)) { goto L_800DBA58; } // 800DBA48
  c->r[0]=R8(c->r[18]+0x00000664u); // 800DBA4C
  cmps(c,0,(int32_t)c->r[0],0); // 800DBA50
  if (crb(c,2)) { goto L_800DBA84; } // 800DBA54
L_800DBA58:;
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBA58
  c->r[4]=0u+0x00000000u; // 800DBA5C
  c->r[0]=0u+0x00000002u; // 800DBA60
  W8(c->r[18]+0x00000650u,c->r[4]); // 800DBA64
  c->r[3]=c->r[18]|c->r[18]; // 800DBA68
  W8(c->r[18]+0x00000664u,c->r[4]); // 800DBA6C
  {uint32_t ea=c->r[18]+0x0000064Cu; WF32(ea,c->f[0]);} // 800DBA70
  {uint32_t ea=c->r[18]+0x00000660u; WF32(ea,c->f[0]);} // 800DBA74
  W32(c->r[18]+0x000005CCu,c->r[0]); // 800DBA78
  W32(c->r[18]+0x000005C8u,c->r[4]); // 800DBA7C
  c->lr=0x800DBA84u; f_800DB5E4(c); // 800DBA80
L_800DBA84:;
  c->r[11]=c->r[1]+0x00000080u; // 800DBA84
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800DBA88
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800DBA8C
  c->lr=0x800DBA94u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DBA90
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DBA94
  c->lr=c->r[0]; // 800DBA98
  c->r[1]=c->r[1]+0x00000090u; // 800DBA9C
  return; // 800DBAA0
}

// fn_800DBAA4
void f_800DBAA4(Ctx* __restrict c) {
  trace_call(0x800DBAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBAA4
  c->r[0]=c->lr; // 800DBAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBAAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBAB0
  c->r[31]=c->r[3]|c->r[3]; // 800DBAB4
  c->lr=0x800DBABCu; f_800797AC(c); // 800DBAB8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DBABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBAC0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800DBAC4
  c->r[3]=c->r[3]+c->r[0]; // 800DBAC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBACC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DBAD0
  c->lr=c->r[0]; // 800DBAD4
  c->r[1]=c->r[1]+0x00000010u; // 800DBAD8
  return; // 800DBADC
}

// fn_800DBAE0
void f_800DBAE0(Ctx* __restrict c) {
  trace_call(0x800DBAE0u);
  f_80060520(c); return; // 800DBAE0
}

// fn_800DBAE4
void f_800DBAE4(Ctx* __restrict c) {
  trace_call(0x800DBAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBAE4
  c->r[0]=c->lr; // 800DBAE8
  c->r[4]=0u+0x00000001u; // 800DBAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBAF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBAF4
  c->r[31]=c->r[3]|c->r[3]; // 800DBAF8
  c->lr=0x800DBB00u; f_8005E814(c); // 800DBAFC
  c->r[3]=c->r[31]|c->r[31]; // 800DBB00
  c->r[4]=0u+0x00000001u; // 800DBB04
  c->r[5]=0u+0x00000001u; // 800DBB08
  c->lr=0x800DBB10u; f_8005E9E8(c); // 800DBB0C
  c->r[3]=c->r[31]|c->r[31]; // 800DBB10
  c->r[4]=0u+0x00000003u; // 800DBB14
  c->r[5]=0u+0x00000001u; // 800DBB18
  c->lr=0x800DBB20u; f_8005E9E8(c); // 800DBB1C
  c->r[3]=c->r[31]|c->r[31]; // 800DBB20
  c->r[4]=0u+0x00000004u; // 800DBB24
  c->r[5]=0u+0x00000001u; // 800DBB28
  c->lr=0x800DBB30u; f_8005E9E8(c); // 800DBB2C
  c->r[4]=R32(c->r[31]+0x00000408u); // 800DBB30
  c->r[0]=0u+0x00000001u; // 800DBB34
  c->r[3]=c->r[31]|c->r[31]; // 800DBB38
  c->r[4]=R32(c->r[4]+0x00000038u); // 800DBB3C
  W8(c->r[4]+0x000003FBu,c->r[0]); // 800DBB40
  c->lr=0x800DBB48u; f_800D78CC(c); // 800DBB44
  c->r[0]=0u+0x00000000u; // 800DBB48
  W8(c->r[3]+0x00000064u,c->r[0]); // 800DBB4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBB50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBB54
  c->lr=c->r[0]; // 800DBB58
  c->r[1]=c->r[1]+0x00000010u; // 800DBB5C
  return; // 800DBB60
}

// fn_800DBB64
void f_800DBB64(Ctx* __restrict c) {
  trace_call(0x800DBB64u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800DBB64
  f_800D5D6C(c); return; // 800DBB68
}

// fn_800DBB6C
void f_800DBB6C(Ctx* __restrict c) {
  trace_call(0x800DBB6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB6C
  c->r[0]=c->lr; // 800DBB70
  c->r[5]=0u+0x80690000u; // 800DBB74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBB78
  c->r[0]=0u+0x00000000u; // 800DBB7C
  c->r[4]=c->r[1]+0x00000008u; // 800DBB80
  c->r[5]=c->r[5]+0xFFFFEA04u; // 800DBB84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBB88
  c->r[31]=c->r[3]|c->r[3]; // 800DBB8C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DBB90
  c->lr=0x800DBB98u; f_800DC838(c); // 800DBB94
  c->r[4]=0u+0x806D0000u; // 800DBB98
  c->r[3]=c->r[31]+0x000005C8u; // 800DBB9C
  c->r[4]=c->r[4]+0x00007C68u; // 800DBBA0
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800DBBA4
  c->r[0]=c->r[4]+0x00000044u; // 800DBBA8
  W32(c->r[31]+0x00000400u,c->r[0]); // 800DBBAC
  c->lr=0x800DBBB4u; f_800DBC54(c); // 800DBBB0
  c->r[3]=c->r[31]+0x00000640u; // 800DBBB4
  c->lr=0x800DBBBCu; f_800864D0(c); // 800DBBB8
  c->r[3]=c->r[31]+0x0000064Cu; // 800DBBBC
  c->lr=0x800DBBC4u; f_800864D0(c); // 800DBBC0
  c->r[3]=c->r[31]+0x0000066Cu; // 800DBBC4
  c->lr=0x800DBBCCu; f_800A7AB8(c); // 800DBBC8
  c->r[3]=c->r[31]+0x0000067Cu; // 800DBBCC
  c->lr=0x800DBBD4u; f_8006585C(c); // 800DBBD0
  c->r[3]=c->r[31]+0x000009D8u; // 800DBBD4
  c->lr=0x800DBBDCu; f_800864D0(c); // 800DBBD8
  c->r[3]=c->r[31]+0x000009E4u; // 800DBBDC
  c->lr=0x800DBBE4u; f_800864D0(c); // 800DBBE0
  c->r[3]=c->r[31]+0x000009F4u; // 800DBBE4
  c->lr=0x800DBBECu; f_800864D0(c); // 800DBBE8
  c->r[3]=c->r[31]+0x00000A00u; // 800DBBEC
  c->lr=0x800DBBF4u; f_800864D0(c); // 800DBBF0
  c->lr=0x800DBBF8u; f_800DC7A0(c); // 800DBBF4
  c->lr=0x800DBBFCu; f_800DC6FC(c); // 800DBBF8
  c->lr=0x800DBC00u; f_800DC658(c); // 800DBBFC
  c->lr=0x800DBC04u; f_800DC5B4(c); // 800DBC00
  c->lr=0x800DBC08u; f_800DC510(c); // 800DBC04
  c->lr=0x800DBC0Cu; f_800DC46C(c); // 800DBC08
  c->lr=0x800DBC10u; f_800DC3C8(c); // 800DBC0C
  c->lr=0x800DBC14u; f_800DC324(c); // 800DBC10
  c->lr=0x800DBC18u; f_800DC280(c); // 800DBC14
  c->lr=0x800DBC1Cu; f_800DC1DC(c); // 800DBC18
  c->lr=0x800DBC20u; f_800DC138(c); // 800DBC1C
  c->lr=0x800DBC24u; f_800DC094(c); // 800DBC20
  c->lr=0x800DBC28u; f_800DBFF0(c); // 800DBC24
  c->lr=0x800DBC2Cu; f_800DBF4C(c); // 800DBC28
  c->lr=0x800DBC30u; f_800DBEA8(c); // 800DBC2C
  c->lr=0x800DBC34u; f_800DBE04(c); // 800DBC30
  c->lr=0x800DBC38u; f_800DBD60(c); // 800DBC34
  c->lr=0x800DBC3Cu; f_800DBC8C(c); // 800DBC38
  c->r[3]=c->r[31]|c->r[31]; // 800DBC3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBC40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBC44
  c->lr=c->r[0]; // 800DBC48
  c->r[1]=c->r[1]+0x00000020u; // 800DBC4C
  return; // 800DBC50
}

// fn_800DBC54
void f_800DBC54(Ctx* __restrict c) {
  trace_call(0x800DBC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBC54
  c->r[0]=c->lr; // 800DBC58
  c->r[4]=0u+0x00000000u; // 800DBC5C
  c->r[5]=0u+0x0000002Cu; // 800DBC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBC68
  c->r[31]=c->r[3]|c->r[3]; // 800DBC6C
  c->lr=0x800DBC74u; f_800043EC(c); // 800DBC70
  c->r[3]=c->r[31]|c->r[31]; // 800DBC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBC7C
  c->lr=c->r[0]; // 800DBC80
  c->r[1]=c->r[1]+0x00000010u; // 800DBC84
  return; // 800DBC88
}

// fn_800DBC8C
void f_800DBC8C(Ctx* __restrict c) {
  trace_call(0x800DBC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBC8C
  c->r[0]=c->lr; // 800DBC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBC94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBC98
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DBC9C
  cmps(c,0,(int32_t)c->r[30],0); // 800DBCA0
  if (crb(c,2)) { goto L_800DBCE8; } // 800DBCA4
  c->lr=0x800DBCACu; f_800DBD30(c); // 800DBCA8
  c->r[31]=c->r[3]|c->r[3]; // 800DBCAC
  c->lr=0x800DBCB4u; f_800DBD00(c); // 800DBCB0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DBCB4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DBCB8
  c->r[5]=0u+0x800E0000u; // 800DBCBC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DBCC0
  c->r[4]=c->r[30]+c->r[4]; // 800DBCC4
  c->r[5]=c->r[5]+0xFFFFBCFCu; // 800DBCC8
  c->r[4]=c->r[4]+c->r[0]; // 800DBCCC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DBCD0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DBCD4
  cmpu(c,0,c->r[0],0x00000024u); // 800DBCD8
  if (!crb(c,0)) { goto L_800DBCE8; } // 800DBCDC
  c->r[0]=0u+0x00000024u; // 800DBCE0
  W32(c->r[30]+c->r[3],c->r[0]); // 800DBCE4
L_800DBCE8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBCE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBCEC
  c->lr=c->r[0]; // 800DBCF0
  c->r[1]=c->r[1]+0x00000010u; // 800DBCF4
  return; // 800DBCF8
}

// fn_800DBCFC
void f_800DBCFC(Ctx* __restrict c) {
  trace_call(0x800DBCFCu);
  f_800DF670(c); return; // 800DBCFC
}

// fn_800DBD00
void f_800DBD00(Ctx* __restrict c) {
  trace_call(0x800DBD00u);
  c->r[0]=R8(c->r[13]+0xFFFFC38Cu); // 800DBD00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBD04
  if (!crb(c,2)) { goto L_800DBD28; } // 800DBD08
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DBD0C
  c->r[0]=0u+0x00000001u; // 800DBD10
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DBD14
  c->r[3]=c->r[4]+0x00000001u; // 800DBD18
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DBD1C
  W32(c->r[13]+0xFFFFC388u,c->r[4]); // 800DBD20
  W8(c->r[13]+0xFFFFC38Cu,c->r[0]); // 800DBD24
L_800DBD28:;
  c->r[3]=R32(c->r[13]+0xFFFFC388u); // 800DBD28
  return; // 800DBD2C
}

// fn_800DBD30
void f_800DBD30(Ctx* __restrict c) {
  trace_call(0x800DBD30u);
  c->r[0]=R8(c->r[13]+0xFFFFC394u); // 800DBD30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBD34
  if (!crb(c,2)) { goto L_800DBD58; } // 800DBD38
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800DBD3C
  c->r[0]=0u+0x00000001u; // 800DBD40
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800DBD44
  c->r[3]=c->r[4]+0x00000001u; // 800DBD48
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800DBD4C
  W32(c->r[13]+0xFFFFC390u,c->r[4]); // 800DBD50
  W8(c->r[13]+0xFFFFC394u,c->r[0]); // 800DBD54
L_800DBD58:;
  c->r[3]=R32(c->r[13]+0xFFFFC390u); // 800DBD58
  return; // 800DBD5C
}

// fn_800DBD60
void f_800DBD60(Ctx* __restrict c) {
  trace_call(0x800DBD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD60
  c->r[0]=c->lr; // 800DBD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBD68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBD6C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DBD70
  cmps(c,0,(int32_t)c->r[30],0); // 800DBD74
  if (crb(c,2)) { goto L_800DBDBC; } // 800DBD78
  c->lr=0x800DBD80u; f_800DBD30(c); // 800DBD7C
  c->r[31]=c->r[3]|c->r[3]; // 800DBD80
  c->lr=0x800DBD88u; f_800DBDD4(c); // 800DBD84
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DBD88
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DBD8C
  c->r[5]=0u+0x800E0000u; // 800DBD90
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DBD94
  c->r[4]=c->r[30]+c->r[4]; // 800DBD98
  c->r[5]=c->r[5]+0xFFFFBDD0u; // 800DBD9C
  c->r[4]=c->r[4]+c->r[0]; // 800DBDA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DBDA4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DBDA8
  cmpu(c,0,c->r[0],0x00000014u); // 800DBDAC
  if (!crb(c,0)) { goto L_800DBDBC; } // 800DBDB0
  c->r[0]=0u+0x00000014u; // 800DBDB4
  W32(c->r[30]+c->r[3],c->r[0]); // 800DBDB8
L_800DBDBC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBDC0
  c->lr=c->r[0]; // 800DBDC4
  c->r[1]=c->r[1]+0x00000010u; // 800DBDC8
  return; // 800DBDCC
}

// fn_800DBDD0
void f_800DBDD0(Ctx* __restrict c) {
  trace_call(0x800DBDD0u);
  f_800DF31C(c); return; // 800DBDD0
}

// fn_800DBDD4
void f_800DBDD4(Ctx* __restrict c) {
  trace_call(0x800DBDD4u);
  c->r[0]=R8(c->r[13]+0xFFFFC384u); // 800DBDD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBDD8
  if (!crb(c,2)) { goto L_800DBDFC; } // 800DBDDC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DBDE0
  c->r[0]=0u+0x00000001u; // 800DBDE4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DBDE8
  c->r[3]=c->r[4]+0x00000001u; // 800DBDEC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DBDF0
  W32(c->r[13]+0xFFFFC380u,c->r[4]); // 800DBDF4
  W8(c->r[13]+0xFFFFC384u,c->r[0]); // 800DBDF8
L_800DBDFC:;
  c->r[3]=R32(c->r[13]+0xFFFFC380u); // 800DBDFC
  return; // 800DBE00
}

// fn_800DBE04
void f_800DBE04(Ctx* __restrict c) {
  trace_call(0x800DBE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE04
  c->r[0]=c->lr; // 800DBE08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBE0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBE10
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DBE14
  cmps(c,0,(int32_t)c->r[30],0); // 800DBE18
  if (crb(c,2)) { goto L_800DBE60; } // 800DBE1C
  c->lr=0x800DBE24u; f_800DBD30(c); // 800DBE20
  c->r[31]=c->r[3]|c->r[3]; // 800DBE24
  c->lr=0x800DBE2Cu; f_800DBE78(c); // 800DBE28
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DBE2C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DBE30
  c->r[5]=0u+0x800E0000u; // 800DBE34
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DBE38
  c->r[4]=c->r[30]+c->r[4]; // 800DBE3C
  c->r[5]=c->r[5]+0xFFFFBE74u; // 800DBE40
  c->r[4]=c->r[4]+c->r[0]; // 800DBE44
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DBE48
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DBE4C
  cmpu(c,0,c->r[0],0x00000014u); // 800DBE50
  if (!crb(c,0)) { goto L_800DBE60; } // 800DBE54
  c->r[0]=0u+0x00000014u; // 800DBE58
  W32(c->r[30]+c->r[3],c->r[0]); // 800DBE5C
L_800DBE60:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBE60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBE64
  c->lr=c->r[0]; // 800DBE68
  c->r[1]=c->r[1]+0x00000010u; // 800DBE6C
  return; // 800DBE70
}

// fn_800DBE74
void f_800DBE74(Ctx* __restrict c) {
  trace_call(0x800DBE74u);
  f_800DF284(c); return; // 800DBE74
}

// fn_800DBE78
void f_800DBE78(Ctx* __restrict c) {
  trace_call(0x800DBE78u);
  c->r[0]=R8(c->r[13]+0xFFFFC37Cu); // 800DBE78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBE7C
  if (!crb(c,2)) { goto L_800DBEA0; } // 800DBE80
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DBE84
  c->r[0]=0u+0x00000001u; // 800DBE88
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DBE8C
  c->r[3]=c->r[4]+0x00000001u; // 800DBE90
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DBE94
  W32(c->r[13]+0xFFFFC378u,c->r[4]); // 800DBE98
  W8(c->r[13]+0xFFFFC37Cu,c->r[0]); // 800DBE9C
L_800DBEA0:;
  c->r[3]=R32(c->r[13]+0xFFFFC378u); // 800DBEA0
  return; // 800DBEA4
}

// fn_800DBEA8
void f_800DBEA8(Ctx* __restrict c) {
  trace_call(0x800DBEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBEA8
  c->r[0]=c->lr; // 800DBEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBEB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBEB4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DBEB8
  cmps(c,0,(int32_t)c->r[30],0); // 800DBEBC
  if (crb(c,2)) { goto L_800DBF04; } // 800DBEC0
  c->lr=0x800DBEC8u; f_800DBD30(c); // 800DBEC4
  c->r[31]=c->r[3]|c->r[3]; // 800DBEC8
  c->lr=0x800DBED0u; f_800DBF1C(c); // 800DBECC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DBED0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DBED4
  c->r[5]=0u+0x800E0000u; // 800DBED8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DBEDC
  c->r[4]=c->r[30]+c->r[4]; // 800DBEE0
  c->r[5]=c->r[5]+0xFFFFBF18u; // 800DBEE4
  c->r[4]=c->r[4]+c->r[0]; // 800DBEE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DBEEC
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DBEF0
  cmpu(c,0,c->r[0],0x00000014u); // 800DBEF4
  if (!crb(c,0)) { goto L_800DBF04; } // 800DBEF8
  c->r[0]=0u+0x00000014u; // 800DBEFC
  W32(c->r[30]+c->r[3],c->r[0]); // 800DBF00
L_800DBF04:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBF04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBF08
  c->lr=c->r[0]; // 800DBF0C
  c->r[1]=c->r[1]+0x00000010u; // 800DBF10
  return; // 800DBF14
}

// fn_800DBF18
void f_800DBF18(Ctx* __restrict c) {
  trace_call(0x800DBF18u);
  f_800DEFAC(c); return; // 800DBF18
}

// fn_800DBF1C
void f_800DBF1C(Ctx* __restrict c) {
  trace_call(0x800DBF1Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC374u); // 800DBF1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBF20
  if (!crb(c,2)) { goto L_800DBF44; } // 800DBF24
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DBF28
  c->r[0]=0u+0x00000001u; // 800DBF2C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DBF30
  c->r[3]=c->r[4]+0x00000001u; // 800DBF34
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DBF38
  W32(c->r[13]+0xFFFFC370u,c->r[4]); // 800DBF3C
  W8(c->r[13]+0xFFFFC374u,c->r[0]); // 800DBF40
L_800DBF44:;
  c->r[3]=R32(c->r[13]+0xFFFFC370u); // 800DBF44
  return; // 800DBF48
}

// fn_800DBF4C
void f_800DBF4C(Ctx* __restrict c) {
  trace_call(0x800DBF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF4C
  c->r[0]=c->lr; // 800DBF50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBF54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBF58
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DBF5C
  cmps(c,0,(int32_t)c->r[30],0); // 800DBF60
  if (crb(c,2)) { goto L_800DBFA8; } // 800DBF64
  c->lr=0x800DBF6Cu; f_800DBD30(c); // 800DBF68
  c->r[31]=c->r[3]|c->r[3]; // 800DBF6C
  c->lr=0x800DBF74u; f_800DBFC0(c); // 800DBF70
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DBF74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DBF78
  c->r[5]=0u+0x800E0000u; // 800DBF7C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DBF80
  c->r[4]=c->r[30]+c->r[4]; // 800DBF84
  c->r[5]=c->r[5]+0xFFFFBFBCu; // 800DBF88
  c->r[4]=c->r[4]+c->r[0]; // 800DBF8C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DBF90
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DBF94
  cmpu(c,0,c->r[0],0x00000014u); // 800DBF98
  if (!crb(c,0)) { goto L_800DBFA8; } // 800DBF9C
  c->r[0]=0u+0x00000014u; // 800DBFA0
  W32(c->r[30]+c->r[3],c->r[0]); // 800DBFA4
L_800DBFA8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBFA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBFAC
  c->lr=c->r[0]; // 800DBFB0
  c->r[1]=c->r[1]+0x00000010u; // 800DBFB4
  return; // 800DBFB8
}

// fn_800DBFBC
void f_800DBFBC(Ctx* __restrict c) {
  trace_call(0x800DBFBCu);
  f_800DEEB0(c); return; // 800DBFBC
}

// fn_800DBFC0
void f_800DBFC0(Ctx* __restrict c) {
  trace_call(0x800DBFC0u);
  c->r[0]=R8(c->r[13]+0xFFFFC36Cu); // 800DBFC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DBFC4
  if (!crb(c,2)) { goto L_800DBFE8; } // 800DBFC8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DBFCC
  c->r[0]=0u+0x00000001u; // 800DBFD0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DBFD4
  c->r[3]=c->r[4]+0x00000001u; // 800DBFD8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DBFDC
  W32(c->r[13]+0xFFFFC368u,c->r[4]); // 800DBFE0
  W8(c->r[13]+0xFFFFC36Cu,c->r[0]); // 800DBFE4
L_800DBFE8:;
  c->r[3]=R32(c->r[13]+0xFFFFC368u); // 800DBFE8
  return; // 800DBFEC
}

// fn_800DBFF0
void f_800DBFF0(Ctx* __restrict c) {
  trace_call(0x800DBFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBFF0
  c->r[0]=c->lr; // 800DBFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBFF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBFFC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC000
  cmps(c,0,(int32_t)c->r[30],0); // 800DC004
  if (crb(c,2)) { goto L_800DC04C; } // 800DC008
  c->lr=0x800DC010u; f_800DBD30(c); // 800DC00C
  c->r[31]=c->r[3]|c->r[3]; // 800DC010
  c->lr=0x800DC018u; f_800DC064(c); // 800DC014
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC018
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC01C
  c->r[5]=0u+0x800E0000u; // 800DC020
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC024
  c->r[4]=c->r[30]+c->r[4]; // 800DC028
  c->r[5]=c->r[5]+0xFFFFC060u; // 800DC02C
  c->r[4]=c->r[4]+c->r[0]; // 800DC030
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC034
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC038
  cmpu(c,0,c->r[0],0x00000014u); // 800DC03C
  if (!crb(c,0)) { goto L_800DC04C; } // 800DC040
  c->r[0]=0u+0x00000014u; // 800DC044
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC048
L_800DC04C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC050
  c->lr=c->r[0]; // 800DC054
  c->r[1]=c->r[1]+0x00000010u; // 800DC058
  return; // 800DC05C
}

// fn_800DC060
void f_800DC060(Ctx* __restrict c) {
  trace_call(0x800DC060u);
  f_800DEE40(c); return; // 800DC060
}

// fn_800DC064
void f_800DC064(Ctx* __restrict c) {
  trace_call(0x800DC064u);
  c->r[0]=R8(c->r[13]+0xFFFFC364u); // 800DC064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC068
  if (!crb(c,2)) { goto L_800DC08C; } // 800DC06C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC070
  c->r[0]=0u+0x00000001u; // 800DC074
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC078
  c->r[3]=c->r[4]+0x00000001u; // 800DC07C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC080
  W32(c->r[13]+0xFFFFC360u,c->r[4]); // 800DC084
  W8(c->r[13]+0xFFFFC364u,c->r[0]); // 800DC088
L_800DC08C:;
  c->r[3]=R32(c->r[13]+0xFFFFC360u); // 800DC08C
  return; // 800DC090
}

// fn_800DC094
void f_800DC094(Ctx* __restrict c) {
  trace_call(0x800DC094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC094
  c->r[0]=c->lr; // 800DC098
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC09C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC0A0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC0A4
  cmps(c,0,(int32_t)c->r[30],0); // 800DC0A8
  if (crb(c,2)) { goto L_800DC0F0; } // 800DC0AC
  c->lr=0x800DC0B4u; f_800DBD30(c); // 800DC0B0
  c->r[31]=c->r[3]|c->r[3]; // 800DC0B4
  c->lr=0x800DC0BCu; f_800DC108(c); // 800DC0B8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC0BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC0C0
  c->r[5]=0u+0x800E0000u; // 800DC0C4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC0C8
  c->r[4]=c->r[30]+c->r[4]; // 800DC0CC
  c->r[5]=c->r[5]+0xFFFFC104u; // 800DC0D0
  c->r[4]=c->r[4]+c->r[0]; // 800DC0D4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC0D8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC0DC
  cmpu(c,0,c->r[0],0x00000010u); // 800DC0E0
  if (!crb(c,0)) { goto L_800DC0F0; } // 800DC0E4
  c->r[0]=0u+0x00000010u; // 800DC0E8
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC0EC
L_800DC0F0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC0F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC0F4
  c->lr=c->r[0]; // 800DC0F8
  c->r[1]=c->r[1]+0x00000010u; // 800DC0FC
  return; // 800DC100
}

// fn_800DC104
void f_800DC104(Ctx* __restrict c) {
  trace_call(0x800DC104u);
  f_800DED8C(c); return; // 800DC104
}

// fn_800DC108
void f_800DC108(Ctx* __restrict c) {
  trace_call(0x800DC108u);
  c->r[0]=R8(c->r[13]+0xFFFFC35Cu); // 800DC108
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC10C
  if (!crb(c,2)) { goto L_800DC130; } // 800DC110
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC114
  c->r[0]=0u+0x00000001u; // 800DC118
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC11C
  c->r[3]=c->r[4]+0x00000001u; // 800DC120
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC124
  W32(c->r[13]+0xFFFFC358u,c->r[4]); // 800DC128
  W8(c->r[13]+0xFFFFC35Cu,c->r[0]); // 800DC12C
L_800DC130:;
  c->r[3]=R32(c->r[13]+0xFFFFC358u); // 800DC130
  return; // 800DC134
}

// fn_800DC138
void f_800DC138(Ctx* __restrict c) {
  trace_call(0x800DC138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC138
  c->r[0]=c->lr; // 800DC13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC140
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC144
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC148
  cmps(c,0,(int32_t)c->r[30],0); // 800DC14C
  if (crb(c,2)) { goto L_800DC194; } // 800DC150
  c->lr=0x800DC158u; f_800DBD30(c); // 800DC154
  c->r[31]=c->r[3]|c->r[3]; // 800DC158
  c->lr=0x800DC160u; f_800DC1AC(c); // 800DC15C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC160
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC164
  c->r[5]=0u+0x800E0000u; // 800DC168
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC16C
  c->r[4]=c->r[30]+c->r[4]; // 800DC170
  c->r[5]=c->r[5]+0xFFFFC1A8u; // 800DC174
  c->r[4]=c->r[4]+c->r[0]; // 800DC178
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC17C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC180
  cmpu(c,0,c->r[0],0x00000014u); // 800DC184
  if (!crb(c,0)) { goto L_800DC194; } // 800DC188
  c->r[0]=0u+0x00000014u; // 800DC18C
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC190
L_800DC194:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC194
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC198
  c->lr=c->r[0]; // 800DC19C
  c->r[1]=c->r[1]+0x00000010u; // 800DC1A0
  return; // 800DC1A4
}

// fn_800DC1A8
void f_800DC1A8(Ctx* __restrict c) {
  trace_call(0x800DC1A8u);
  f_800DEB34(c); return; // 800DC1A8
}

// fn_800DC1AC
void f_800DC1AC(Ctx* __restrict c) {
  trace_call(0x800DC1ACu);
  c->r[0]=R8(c->r[13]+0xFFFFC354u); // 800DC1AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC1B0
  if (!crb(c,2)) { goto L_800DC1D4; } // 800DC1B4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC1B8
  c->r[0]=0u+0x00000001u; // 800DC1BC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC1C0
  c->r[3]=c->r[4]+0x00000001u; // 800DC1C4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC1C8
  W32(c->r[13]+0xFFFFC350u,c->r[4]); // 800DC1CC
  W8(c->r[13]+0xFFFFC354u,c->r[0]); // 800DC1D0
L_800DC1D4:;
  c->r[3]=R32(c->r[13]+0xFFFFC350u); // 800DC1D4
  return; // 800DC1D8
}

// fn_800DC1DC
void f_800DC1DC(Ctx* __restrict c) {
  trace_call(0x800DC1DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC1DC
  c->r[0]=c->lr; // 800DC1E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC1E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC1E8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC1EC
  cmps(c,0,(int32_t)c->r[30],0); // 800DC1F0
  if (crb(c,2)) { goto L_800DC238; } // 800DC1F4
  c->lr=0x800DC1FCu; f_800DBD30(c); // 800DC1F8
  c->r[31]=c->r[3]|c->r[3]; // 800DC1FC
  c->lr=0x800DC204u; f_800DC250(c); // 800DC200
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC204
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC208
  c->r[5]=0u+0x800E0000u; // 800DC20C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC210
  c->r[4]=c->r[30]+c->r[4]; // 800DC214
  c->r[5]=c->r[5]+0xFFFFC24Cu; // 800DC218
  c->r[4]=c->r[4]+c->r[0]; // 800DC21C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC220
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC224
  cmpu(c,0,c->r[0],0x00000010u); // 800DC228
  if (!crb(c,0)) { goto L_800DC238; } // 800DC22C
  c->r[0]=0u+0x00000010u; // 800DC230
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC234
L_800DC238:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC238
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC23C
  c->lr=c->r[0]; // 800DC240
  c->r[1]=c->r[1]+0x00000010u; // 800DC244
  return; // 800DC248
}

// fn_800DC24C
void f_800DC24C(Ctx* __restrict c) {
  trace_call(0x800DC24Cu);
  f_800DE994(c); return; // 800DC24C
}

// fn_800DC250
void f_800DC250(Ctx* __restrict c) {
  trace_call(0x800DC250u);
  c->r[0]=R8(c->r[13]+0xFFFFC34Cu); // 800DC250
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC254
  if (!crb(c,2)) { goto L_800DC278; } // 800DC258
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC25C
  c->r[0]=0u+0x00000001u; // 800DC260
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC264
  c->r[3]=c->r[4]+0x00000001u; // 800DC268
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC26C
  W32(c->r[13]+0xFFFFC348u,c->r[4]); // 800DC270
  W8(c->r[13]+0xFFFFC34Cu,c->r[0]); // 800DC274
L_800DC278:;
  c->r[3]=R32(c->r[13]+0xFFFFC348u); // 800DC278
  return; // 800DC27C
}

// fn_800DC280
void f_800DC280(Ctx* __restrict c) {
  trace_call(0x800DC280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC280
  c->r[0]=c->lr; // 800DC284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC288
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC28C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC290
  cmps(c,0,(int32_t)c->r[30],0); // 800DC294
  if (crb(c,2)) { goto L_800DC2DC; } // 800DC298
  c->lr=0x800DC2A0u; f_800DBD30(c); // 800DC29C
  c->r[31]=c->r[3]|c->r[3]; // 800DC2A0
  c->lr=0x800DC2A8u; f_800DC2F4(c); // 800DC2A4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC2A8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC2AC
  c->r[5]=0u+0x800E0000u; // 800DC2B0
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC2B4
  c->r[4]=c->r[30]+c->r[4]; // 800DC2B8
  c->r[5]=c->r[5]+0xFFFFC2F0u; // 800DC2BC
  c->r[4]=c->r[4]+c->r[0]; // 800DC2C0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC2C4
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC2C8
  cmpu(c,0,c->r[0],0x00000010u); // 800DC2CC
  if (!crb(c,0)) { goto L_800DC2DC; } // 800DC2D0
  c->r[0]=0u+0x00000010u; // 800DC2D4
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC2D8
L_800DC2DC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC2DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC2E0
  c->lr=c->r[0]; // 800DC2E4
  c->r[1]=c->r[1]+0x00000010u; // 800DC2E8
  return; // 800DC2EC
}

// fn_800DC2F0
void f_800DC2F0(Ctx* __restrict c) {
  trace_call(0x800DC2F0u);
  f_800DE7E0(c); return; // 800DC2F0
}

// fn_800DC2F4
void f_800DC2F4(Ctx* __restrict c) {
  trace_call(0x800DC2F4u);
  c->r[0]=R8(c->r[13]+0xFFFFC344u); // 800DC2F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC2F8
  if (!crb(c,2)) { goto L_800DC31C; } // 800DC2FC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC300
  c->r[0]=0u+0x00000001u; // 800DC304
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC308
  c->r[3]=c->r[4]+0x00000001u; // 800DC30C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC310
  W32(c->r[13]+0xFFFFC340u,c->r[4]); // 800DC314
  W8(c->r[13]+0xFFFFC344u,c->r[0]); // 800DC318
L_800DC31C:;
  c->r[3]=R32(c->r[13]+0xFFFFC340u); // 800DC31C
  return; // 800DC320
}

// fn_800DC324
void f_800DC324(Ctx* __restrict c) {
  trace_call(0x800DC324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC324
  c->r[0]=c->lr; // 800DC328
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC32C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC330
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC334
  cmps(c,0,(int32_t)c->r[30],0); // 800DC338
  if (crb(c,2)) { goto L_800DC380; } // 800DC33C
  c->lr=0x800DC344u; f_800DBD30(c); // 800DC340
  c->r[31]=c->r[3]|c->r[3]; // 800DC344
  c->lr=0x800DC34Cu; f_800DC398(c); // 800DC348
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC34C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC350
  c->r[5]=0u+0x800E0000u; // 800DC354
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC358
  c->r[4]=c->r[30]+c->r[4]; // 800DC35C
  c->r[5]=c->r[5]+0xFFFFC394u; // 800DC360
  c->r[4]=c->r[4]+c->r[0]; // 800DC364
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC368
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC36C
  cmpu(c,0,c->r[0],0x00000010u); // 800DC370
  if (!crb(c,0)) { goto L_800DC380; } // 800DC374
  c->r[0]=0u+0x00000010u; // 800DC378
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC37C
L_800DC380:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC380
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC384
  c->lr=c->r[0]; // 800DC388
  c->r[1]=c->r[1]+0x00000010u; // 800DC38C
  return; // 800DC390
}

// fn_800DC394
void f_800DC394(Ctx* __restrict c) {
  trace_call(0x800DC394u);
  f_800DE684(c); return; // 800DC394
}

// fn_800DC398
void f_800DC398(Ctx* __restrict c) {
  trace_call(0x800DC398u);
  c->r[0]=R8(c->r[13]+0xFFFFC33Cu); // 800DC398
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC39C
  if (!crb(c,2)) { goto L_800DC3C0; } // 800DC3A0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC3A4
  c->r[0]=0u+0x00000001u; // 800DC3A8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC3AC
  c->r[3]=c->r[4]+0x00000001u; // 800DC3B0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC3B4
  W32(c->r[13]+0xFFFFC338u,c->r[4]); // 800DC3B8
  W8(c->r[13]+0xFFFFC33Cu,c->r[0]); // 800DC3BC
L_800DC3C0:;
  c->r[3]=R32(c->r[13]+0xFFFFC338u); // 800DC3C0
  return; // 800DC3C4
}

// fn_800DC3C8
void f_800DC3C8(Ctx* __restrict c) {
  trace_call(0x800DC3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC3C8
  c->r[0]=c->lr; // 800DC3CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC3D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC3D4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC3D8
  cmps(c,0,(int32_t)c->r[30],0); // 800DC3DC
  if (crb(c,2)) { goto L_800DC424; } // 800DC3E0
  c->lr=0x800DC3E8u; f_800DBD30(c); // 800DC3E4
  c->r[31]=c->r[3]|c->r[3]; // 800DC3E8
  c->lr=0x800DC3F0u; f_800DC43C(c); // 800DC3EC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC3F0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC3F4
  c->r[5]=0u+0x800E0000u; // 800DC3F8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC3FC
  c->r[4]=c->r[30]+c->r[4]; // 800DC400
  c->r[5]=c->r[5]+0xFFFFC438u; // 800DC404
  c->r[4]=c->r[4]+c->r[0]; // 800DC408
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC40C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC410
  cmpu(c,0,c->r[0],0x00000014u); // 800DC414
  if (!crb(c,0)) { goto L_800DC424; } // 800DC418
  c->r[0]=0u+0x00000014u; // 800DC41C
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC420
L_800DC424:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC424
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC428
  c->lr=c->r[0]; // 800DC42C
  c->r[1]=c->r[1]+0x00000010u; // 800DC430
  return; // 800DC434
}

// fn_800DC438
void f_800DC438(Ctx* __restrict c) {
  trace_call(0x800DC438u);
  f_800DE58C(c); return; // 800DC438
}

// fn_800DC43C
void f_800DC43C(Ctx* __restrict c) {
  trace_call(0x800DC43Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC334u); // 800DC43C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC440
  if (!crb(c,2)) { goto L_800DC464; } // 800DC444
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC448
  c->r[0]=0u+0x00000001u; // 800DC44C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC450
  c->r[3]=c->r[4]+0x00000001u; // 800DC454
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC458
  W32(c->r[13]+0xFFFFC330u,c->r[4]); // 800DC45C
  W8(c->r[13]+0xFFFFC334u,c->r[0]); // 800DC460
L_800DC464:;
  c->r[3]=R32(c->r[13]+0xFFFFC330u); // 800DC464
  return; // 800DC468
}

// fn_800DC46C
void f_800DC46C(Ctx* __restrict c) {
  trace_call(0x800DC46Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC46C
  c->r[0]=c->lr; // 800DC470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC474
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC478
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC47C
  cmps(c,0,(int32_t)c->r[30],0); // 800DC480
  if (crb(c,2)) { goto L_800DC4C8; } // 800DC484
  c->lr=0x800DC48Cu; f_800DBD30(c); // 800DC488
  c->r[31]=c->r[3]|c->r[3]; // 800DC48C
  c->lr=0x800DC494u; f_800DC4E0(c); // 800DC490
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC494
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC498
  c->r[5]=0u+0x800E0000u; // 800DC49C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC4A0
  c->r[4]=c->r[30]+c->r[4]; // 800DC4A4
  c->r[5]=c->r[5]+0xFFFFC4DCu; // 800DC4A8
  c->r[4]=c->r[4]+c->r[0]; // 800DC4AC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC4B0
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC4B4
  cmpu(c,0,c->r[0],0x00000018u); // 800DC4B8
  if (!crb(c,0)) { goto L_800DC4C8; } // 800DC4BC
  c->r[0]=0u+0x00000018u; // 800DC4C0
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC4C4
L_800DC4C8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC4CC
  c->lr=c->r[0]; // 800DC4D0
  c->r[1]=c->r[1]+0x00000010u; // 800DC4D4
  return; // 800DC4D8
}

// fn_800DC4DC
void f_800DC4DC(Ctx* __restrict c) {
  trace_call(0x800DC4DCu);
  f_800DE2B0(c); return; // 800DC4DC
}

// fn_800DC4E0
void f_800DC4E0(Ctx* __restrict c) {
  trace_call(0x800DC4E0u);
  c->r[0]=R8(c->r[13]+0xFFFFC32Cu); // 800DC4E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC4E4
  if (!crb(c,2)) { goto L_800DC508; } // 800DC4E8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC4EC
  c->r[0]=0u+0x00000001u; // 800DC4F0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC4F4
  c->r[3]=c->r[4]+0x00000001u; // 800DC4F8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC4FC
  W32(c->r[13]+0xFFFFC328u,c->r[4]); // 800DC500
  W8(c->r[13]+0xFFFFC32Cu,c->r[0]); // 800DC504
L_800DC508:;
  c->r[3]=R32(c->r[13]+0xFFFFC328u); // 800DC508
  return; // 800DC50C
}

// fn_800DC510
void f_800DC510(Ctx* __restrict c) {
  trace_call(0x800DC510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC510
  c->r[0]=c->lr; // 800DC514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC518
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC51C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC520
  cmps(c,0,(int32_t)c->r[30],0); // 800DC524
  if (crb(c,2)) { goto L_800DC56C; } // 800DC528
  c->lr=0x800DC530u; f_800DBD30(c); // 800DC52C
  c->r[31]=c->r[3]|c->r[3]; // 800DC530
  c->lr=0x800DC538u; f_800DC584(c); // 800DC534
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC538
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC53C
  c->r[5]=0u+0x800E0000u; // 800DC540
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC544
  c->r[4]=c->r[30]+c->r[4]; // 800DC548
  c->r[5]=c->r[5]+0xFFFFC580u; // 800DC54C
  c->r[4]=c->r[4]+c->r[0]; // 800DC550
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC554
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC558
  cmpu(c,0,c->r[0],0x00000014u); // 800DC55C
  if (!crb(c,0)) { goto L_800DC56C; } // 800DC560
  c->r[0]=0u+0x00000014u; // 800DC564
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC568
L_800DC56C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC570
  c->lr=c->r[0]; // 800DC574
  c->r[1]=c->r[1]+0x00000010u; // 800DC578
  return; // 800DC57C
}

