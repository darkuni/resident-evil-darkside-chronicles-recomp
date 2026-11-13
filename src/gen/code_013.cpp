#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800DC580
void f_800DC580(Ctx* __restrict c) {
  trace_call(0x800DC580u);
  f_800DE1FC(c); return; // 800DC580
}

// fn_800DC584
void f_800DC584(Ctx* __restrict c) {
  trace_call(0x800DC584u);
  c->r[0]=R8(c->r[13]+0xFFFFC324u); // 800DC584
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC588
  if (!crb(c,2)) { goto L_800DC5AC; } // 800DC58C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC590
  c->r[0]=0u+0x00000001u; // 800DC594
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC598
  c->r[3]=c->r[4]+0x00000001u; // 800DC59C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC5A0
  W32(c->r[13]+0xFFFFC320u,c->r[4]); // 800DC5A4
  W8(c->r[13]+0xFFFFC324u,c->r[0]); // 800DC5A8
L_800DC5AC:;
  c->r[3]=R32(c->r[13]+0xFFFFC320u); // 800DC5AC
  return; // 800DC5B0
}

// fn_800DC5B4
void f_800DC5B4(Ctx* __restrict c) {
  trace_call(0x800DC5B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC5B4
  c->r[0]=c->lr; // 800DC5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC5BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC5C0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC5C4
  cmps(c,0,(int32_t)c->r[30],0); // 800DC5C8
  if (crb(c,2)) { goto L_800DC610; } // 800DC5CC
  c->lr=0x800DC5D4u; f_800DBD30(c); // 800DC5D0
  c->r[31]=c->r[3]|c->r[3]; // 800DC5D4
  c->lr=0x800DC5DCu; f_800DC628(c); // 800DC5D8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC5DC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC5E0
  c->r[5]=0u+0x800E0000u; // 800DC5E4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC5E8
  c->r[4]=c->r[30]+c->r[4]; // 800DC5EC
  c->r[5]=c->r[5]+0xFFFFC624u; // 800DC5F0
  c->r[4]=c->r[4]+c->r[0]; // 800DC5F4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC5F8
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC5FC
  cmpu(c,0,c->r[0],0x00000014u); // 800DC600
  if (!crb(c,0)) { goto L_800DC610; } // 800DC604
  c->r[0]=0u+0x00000014u; // 800DC608
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC60C
L_800DC610:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC610
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC614
  c->lr=c->r[0]; // 800DC618
  c->r[1]=c->r[1]+0x00000010u; // 800DC61C
  return; // 800DC620
}

// fn_800DC624
void f_800DC624(Ctx* __restrict c) {
  trace_call(0x800DC624u);
  f_800DE0EC(c); return; // 800DC624
}

// fn_800DC628
void f_800DC628(Ctx* __restrict c) {
  trace_call(0x800DC628u);
  c->r[0]=R8(c->r[13]+0xFFFFC31Cu); // 800DC628
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC62C
  if (!crb(c,2)) { goto L_800DC650; } // 800DC630
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC634
  c->r[0]=0u+0x00000001u; // 800DC638
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC63C
  c->r[3]=c->r[4]+0x00000001u; // 800DC640
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC644
  W32(c->r[13]+0xFFFFC318u,c->r[4]); // 800DC648
  W8(c->r[13]+0xFFFFC31Cu,c->r[0]); // 800DC64C
L_800DC650:;
  c->r[3]=R32(c->r[13]+0xFFFFC318u); // 800DC650
  return; // 800DC654
}

// fn_800DC658
void f_800DC658(Ctx* __restrict c) {
  trace_call(0x800DC658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC658
  c->r[0]=c->lr; // 800DC65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC660
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC664
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC668
  cmps(c,0,(int32_t)c->r[30],0); // 800DC66C
  if (crb(c,2)) { goto L_800DC6B4; } // 800DC670
  c->lr=0x800DC678u; f_800DBD30(c); // 800DC674
  c->r[31]=c->r[3]|c->r[3]; // 800DC678
  c->lr=0x800DC680u; f_800DC6CC(c); // 800DC67C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC680
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC684
  c->r[5]=0u+0x800E0000u; // 800DC688
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC68C
  c->r[4]=c->r[30]+c->r[4]; // 800DC690
  c->r[5]=c->r[5]+0xFFFFC6C8u; // 800DC694
  c->r[4]=c->r[4]+c->r[0]; // 800DC698
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC69C
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC6A0
  cmpu(c,0,c->r[0],0x00000014u); // 800DC6A4
  if (!crb(c,0)) { goto L_800DC6B4; } // 800DC6A8
  c->r[0]=0u+0x00000014u; // 800DC6AC
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC6B0
L_800DC6B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC6B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC6B8
  c->lr=c->r[0]; // 800DC6BC
  c->r[1]=c->r[1]+0x00000010u; // 800DC6C0
  return; // 800DC6C4
}

// fn_800DC6C8
void f_800DC6C8(Ctx* __restrict c) {
  trace_call(0x800DC6C8u);
  f_800DE074(c); return; // 800DC6C8
}

// fn_800DC6CC
void f_800DC6CC(Ctx* __restrict c) {
  trace_call(0x800DC6CCu);
  c->r[0]=R8(c->r[13]+0xFFFFC314u); // 800DC6CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC6D0
  if (!crb(c,2)) { goto L_800DC6F4; } // 800DC6D4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC6D8
  c->r[0]=0u+0x00000001u; // 800DC6DC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC6E0
  c->r[3]=c->r[4]+0x00000001u; // 800DC6E4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC6E8
  W32(c->r[13]+0xFFFFC310u,c->r[4]); // 800DC6EC
  W8(c->r[13]+0xFFFFC314u,c->r[0]); // 800DC6F0
L_800DC6F4:;
  c->r[3]=R32(c->r[13]+0xFFFFC310u); // 800DC6F4
  return; // 800DC6F8
}

// fn_800DC6FC
void f_800DC6FC(Ctx* __restrict c) {
  trace_call(0x800DC6FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC6FC
  c->r[0]=c->lr; // 800DC700
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC704
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC708
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 800DC70C
  cmps(c,0,(int32_t)c->r[30],0); // 800DC710
  if (crb(c,2)) { goto L_800DC758; } // 800DC714
  c->lr=0x800DC71Cu; f_800DBD30(c); // 800DC718
  c->r[31]=c->r[3]|c->r[3]; // 800DC71C
  c->lr=0x800DC724u; f_800DC770(c); // 800DC720
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 800DC724
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC728
  c->r[5]=0u+0x800E0000u; // 800DC72C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC730
  c->r[4]=c->r[30]+c->r[4]; // 800DC734
  c->r[5]=c->r[5]+0xFFFFC76Cu; // 800DC738
  c->r[4]=c->r[4]+c->r[0]; // 800DC73C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC740
  c->r[0]=R32(c->r[30]+c->r[3]); // 800DC744
  cmpu(c,0,c->r[0],0x00000010u); // 800DC748
  if (!crb(c,0)) { goto L_800DC758; } // 800DC74C
  c->r[0]=0u+0x00000010u; // 800DC750
  W32(c->r[30]+c->r[3],c->r[0]); // 800DC754
L_800DC758:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC75C
  c->lr=c->r[0]; // 800DC760
  c->r[1]=c->r[1]+0x00000010u; // 800DC764
  return; // 800DC768
}

// fn_800DC76C
void f_800DC76C(Ctx* __restrict c) {
  trace_call(0x800DC76Cu);
  f_800DDF08(c); return; // 800DC76C
}

// fn_800DC770
void f_800DC770(Ctx* __restrict c) {
  trace_call(0x800DC770u);
  c->r[0]=R8(c->r[13]+0xFFFFC30Cu); // 800DC770
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC774
  if (!crb(c,2)) { goto L_800DC798; } // 800DC778
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800DC77C
  c->r[0]=0u+0x00000001u; // 800DC780
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800DC784
  c->r[3]=c->r[4]+0x00000001u; // 800DC788
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800DC78C
  W32(c->r[13]+0xFFFFC308u,c->r[4]); // 800DC790
  W8(c->r[13]+0xFFFFC30Cu,c->r[0]); // 800DC794
L_800DC798:;
  c->r[3]=R32(c->r[13]+0xFFFFC308u); // 800DC798
  return; // 800DC79C
}

// fn_800DC7A0
void f_800DC7A0(Ctx* __restrict c) {
  trace_call(0x800DC7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC7A0
  c->r[0]=c->lr; // 800DC7A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC7A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC7AC
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 800DC7B0
  cmps(c,0,(int32_t)c->r[31],0); // 800DC7B4
  if (crb(c,2)) { goto L_800DC820; } // 800DC7B8
  c->lr=0x800DC7C0u; f_800DBD30(c); // 800DC7BC
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800DC7C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC7C4
  if (!crb(c,2)) { goto L_800DC7E8; } // 800DC7C8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800DC7CC
  c->r[0]=0u+0x00000001u; // 800DC7D0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800DC7D4
  c->r[4]=c->r[5]+0x00000001u; // 800DC7D8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800DC7DC
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800DC7E0
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800DC7E4
L_800DC7E8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800DC7E8
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800DC7EC
  c->r[5]=0u+0x800E0000u; // 800DC7F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DC7F4
  c->r[4]=c->r[31]+c->r[4]; // 800DC7F8
  c->r[5]=c->r[5]+0xFFFFC834u; // 800DC7FC
  c->r[4]=c->r[4]+c->r[0]; // 800DC800
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DC804
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DC808
  c->r[0]=R32(c->r[31]+c->r[3]); // 800DC80C
  cmpu(c,0,c->r[0],0x00000010u); // 800DC810
  if (!crb(c,0)) { goto L_800DC820; } // 800DC814
  c->r[0]=0u+0x00000010u; // 800DC818
  W32(c->r[31]+c->r[3],c->r[0]); // 800DC81C
L_800DC820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC824
  c->lr=c->r[0]; // 800DC828
  c->r[1]=c->r[1]+0x00000010u; // 800DC82C
  return; // 800DC830
}

// fn_800DC834
void f_800DC834(Ctx* __restrict c) {
  trace_call(0x800DC834u);
  f_800DDB88(c); return; // 800DC834
}

// fn_800DC838
void f_800DC838(Ctx* __restrict c) {
  trace_call(0x800DC838u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC838
  c->r[0]=c->lr; // 800DC83C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DC840
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC844
  c->r[27]=c->r[3]|c->r[3]; // 800DC848
  c->r[26]=c->r[5]|c->r[5]; // 800DC84C
  c->r[31]=c->r[27]|c->r[27]; // 800DC850
  c->r[30]=c->r[27]|c->r[27]; // 800DC854
  c->r[28]=c->r[27]|c->r[27]; // 800DC858
  c->lr=0x800DC860u; f_800DBD30(c); // 800DC85C
  c->r[4]=0u+0x806D0000u; // 800DC860
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 800DC864
  c->r[0]=0u+0x00000000u; // 800DC868
  W32(c->r[27]+0x00000000u,c->r[3]); // 800DC86C
  c->r[4]=c->r[4]+0x000038C0u; // 800DC870
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800DC874
  W32(c->r[27]+0x00000004u,c->r[0]); // 800DC878
  W32(c->r[27]+0x00000008u,c->r[0]); // 800DC87C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800DC880
  W8(c->r[27]+0x00000010u,c->r[0]); // 800DC884
  W32(c->r[27]+0x00000014u,c->r[0]); // 800DC888
  W32(c->r[27]+0x00000018u,c->r[0]); // 800DC88C
  W32(c->r[27]+0x00000020u,c->r[0]); // 800DC890
  W32(c->r[27]+0x00000024u,c->r[0]); // 800DC894
  if (crb(c,2)) { goto L_800DC8A0; } // 800DC898
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 800DC89C
L_800DC8A0:;
  c->lr=0x800DC8A4u; f_800797AC(c); // 800DC8A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC8A4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800DC8A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DC8AC
  if (!crb(c,2)) { goto L_800DC8BC; } // 800DC8B0
  c->r[0]=0u+0x00000001u; // 800DC8B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DC8B8
L_800DC8BC:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800DC8BC
  c->r[5]=0u+0x0000012Cu; // 800DC8C0
  c->r[4]=c->r[6]+0x00000001u; // 800DC8C4
  c->r[0]=divwu(c->r[4],c->r[5]); // 800DC8C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800DC8CC
  c->r[7]=c->r[4]-c->r[0]; // 800DC8D0
  goto L_800DC920; // 800DC8D4
L_800DC8D8:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800DC8D8
  c->r[4]=c->r[3]+c->r[0]; // 800DC8DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DC8E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DC8E4
  if (!crb(c,2)) { goto L_800DC910; } // 800DC8E8
  W32(c->r[3]+0x00000004u,c->r[7]); // 800DC8EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC8F0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800DC8F4
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800DC8F8
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DC8FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC900
  W32(c->r[1]+0x00000010u,c->r[4]); // 800DC904
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC908
  goto L_800DC93C; // 800DC90C
L_800DC910:;
  c->r[4]=c->r[7]+0x00000001u; // 800DC910
  c->r[0]=divwu(c->r[4],c->r[5]); // 800DC914
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800DC918
  c->r[7]=c->r[4]-c->r[0]; // 800DC91C
L_800DC920:;
  cmpu(c,0,c->r[7],c->r[6]); // 800DC920
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC8D8; } // 800DC924
  c->r[0]=0u+0x00000000u; // 800DC928
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DC92C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DC930
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DC934
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC938
L_800DC93C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800DC93C
  c->r[24]=c->r[27]+0x00000028u; // 800DC940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC944
  c->r[3]=c->r[24]|c->r[24]; // 800DC948
  W32(c->r[1]+0x00000008u,c->r[4]); // 800DC94C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC950
  W32(c->r[27]+0x00000020u,c->r[4]); // 800DC954
  W32(c->r[27]+0x00000024u,c->r[0]); // 800DC958
  c->lr=0x800DC960u; f_800506C0(c); // 800DC95C
  cmps(c,0,(int32_t)c->r[24],0); // 800DC960
  c->r[3]=c->r[24]|c->r[24]; // 800DC964
  if (crb(c,2)) { goto L_800DC970; } // 800DC968
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 800DC96C
L_800DC970:;
  c->r[29]=0u+0x00000001u; // 800DC970
  W32(c->r[24]+0x00000008u,c->r[3]); // 800DC974
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800DC978
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800DC97C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC980
  if (!crb(c,2)) { goto L_800DC9C4; } // 800DC984
  c->r[25]=0u+0x80740000u; // 800DC988
  c->r[3]=c->r[25]+0x000074BCu; // 800DC98C
  c->lr=0x800DC994u; f_800506C0(c); // 800DC990
  c->r[6]=0u+0x806D0000u; // 800DC994
  c->r[4]=0u+0x80060000u; // 800DC998
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800DC99C
  c->r[3]=c->r[25]+0x000074BCu; // 800DC9A0
  c->r[0]=c->r[6]+0x00000008u; // 800DC9A4
  c->r[5]=0u+0x80750000u; // 800DC9A8
  W32(c->r[3]+0x00000010u,c->r[6]); // 800DC9AC
  c->r[4]=c->r[4]+0x000057D4u; // 800DC9B0
  c->r[5]=c->r[5]+0x00003998u; // 800DC9B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DC9B8
  c->lr=0x800DC9C0u; f_803A92B8(c); // 800DC9BC
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 800DC9C0
L_800DC9C4:;
  c->r[3]=0u+0x80740000u; // 800DC9C4
  c->r[5]=c->r[24]|c->r[24]; // 800DC9C8
  c->r[3]=c->r[3]+0x000074BCu; // 800DC9CC
  c->r[4]=c->r[3]|c->r[3]; // 800DC9D0
  c->lr=0x800DC9D8u; f_802DDCA8(c); // 800DC9D4
  c->r[24]=c->r[27]+0x00000038u; // 800DC9D8
  c->r[3]=c->r[24]|c->r[24]; // 800DC9DC
  c->lr=0x800DC9E4u; f_800506C0(c); // 800DC9E0
  cmps(c,0,(int32_t)c->r[24],0); // 800DC9E4
  c->r[0]=c->r[24]|c->r[24]; // 800DC9E8
  if (crb(c,2)) { goto L_800DC9F4; } // 800DC9EC
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 800DC9F0
L_800DC9F4:;
  c->r[29]=c->r[27]+0x00000044u; // 800DC9F4
  W32(c->r[24]+0x00000008u,c->r[0]); // 800DC9F8
  c->r[3]=c->r[29]|c->r[29]; // 800DC9FC
  c->lr=0x800DCA04u; f_800506C0(c); // 800DCA00
  cmps(c,0,(int32_t)c->r[29],0); // 800DCA04
  c->r[0]=c->r[29]|c->r[29]; // 800DCA08
  if (crb(c,2)) { goto L_800DCA14; } // 800DCA0C
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 800DCA10
L_800DCA14:;
  c->r[3]=0u+0x806F0000u; // 800DCA14
  c->r[25]=0u+0x00000000u; // 800DCA18
  c->r[3]=c->r[3]+0x00000E80u; // 800DCA1C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DCA20
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 800DCA24
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800DCA28
  W32(c->r[27]+0x00000058u,c->r[25]); // 800DCA2C
  W32(c->r[27]+0x00000064u,c->r[25]); // 800DCA30
  c->lr=0x800DCA38u; f_8007BDCC(c); // 800DCA34
  c->r[0]=c->r[13]+0xFFFF8114u; // 800DCA38
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800DCA3C
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800DCA40
  W32(c->r[27]+0x000000A4u,c->r[25]); // 800DCA44
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800DCA48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCA4C
  if (!crb(c,2)) { goto L_800DCA70; } // 800DCA50
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800DCA54
  c->r[0]=0u+0x00000001u; // 800DCA58
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800DCA5C
  c->r[3]=c->r[4]+0x00000001u; // 800DCA60
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800DCA64
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800DCA68
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800DCA6C
L_800DCA70:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 800DCA70
  c->r[3]=c->r[13]+0xFFFF8110u; // 800DCA74
  c->r[0]=0u+0x00000000u; // 800DCA78
  W32(c->r[27]+0x000000A8u,c->r[4]); // 800DCA7C
  W32(c->r[27]+0x000000ACu,c->r[3]); // 800DCA80
  W32(c->r[27]+0x000000B0u,c->r[0]); // 800DCA84
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 800DCA88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCA8C
  if (!crb(c,2)) { goto L_800DCAB0; } // 800DCA90
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800DCA94
  c->r[0]=0u+0x00000001u; // 800DCA98
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800DCA9C
  c->r[3]=c->r[4]+0x00000001u; // 800DCAA0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800DCAA4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 800DCAA8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 800DCAAC
L_800DCAB0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 800DCAB0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 800DCAB4
  c->r[0]=0u+0x00000000u; // 800DCAB8
  W32(c->r[27]+0x000000B4u,c->r[4]); // 800DCABC
  W32(c->r[27]+0x000000B8u,c->r[3]); // 800DCAC0
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800DCAC4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 800DCAC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCACC
  if (!crb(c,2)) { goto L_800DCAF0; } // 800DCAD0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800DCAD4
  c->r[0]=0u+0x00000001u; // 800DCAD8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800DCADC
  c->r[3]=c->r[4]+0x00000001u; // 800DCAE0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800DCAE4
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 800DCAE8
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 800DCAEC
L_800DCAF0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 800DCAF0
  c->r[3]=c->r[13]+0xFFFF8108u; // 800DCAF4
  c->r[0]=0u+0x00000000u; // 800DCAF8
  W32(c->r[27]+0x000000C0u,c->r[4]); // 800DCAFC
  W32(c->r[27]+0x000000C4u,c->r[3]); // 800DCB00
  W32(c->r[27]+0x000000C8u,c->r[0]); // 800DCB04
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800DCB08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCB0C
  if (!crb(c,2)) { goto L_800DCB30; } // 800DCB10
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800DCB14
  c->r[0]=0u+0x00000001u; // 800DCB18
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800DCB1C
  c->r[3]=c->r[4]+0x00000001u; // 800DCB20
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800DCB24
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800DCB28
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800DCB2C
L_800DCB30:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800DCB30
  c->r[0]=c->r[13]+0xFFFF8104u; // 800DCB34
  c->r[25]=0u+0x00000000u; // 800DCB38
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800DCB3C
  c->r[3]=c->r[27]+0x000000D8u; // 800DCB40
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800DCB44
  W32(c->r[27]+0x000000D4u,c->r[25]); // 800DCB48
  c->lr=0x800DCB50u; f_800506C0(c); // 800DCB4C
  c->r[4]=0u+0x806F0000u; // 800DCB50
  c->r[3]=0u+0x00000006u; // 800DCB54
  c->r[4]=c->r[4]+0x000007A0u; // 800DCB58
  c->r[29]=c->r[27]+0x000000FCu; // 800DCB5C
  c->r[0]=c->r[4]+0x00000024u; // 800DCB60
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800DCB64
  c->r[3]=c->r[29]+0x0000000Cu; // 800DCB68
  W32(c->r[27]+0x000000ECu,c->r[25]); // 800DCB6C
  W32(c->r[27]+0x000000F8u,c->r[25]); // 800DCB70
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800DCB74
  W32(c->r[27]+0x00000100u,c->r[0]); // 800DCB78
  c->lr=0x800DCB80u; f_800506C0(c); // 800DCB7C
  c->r[3]=c->r[29]+0x00000018u; // 800DCB80
  c->lr=0x800DCB88u; f_800506C0(c); // 800DCB84
  W32(c->r[29]+0x00000024u,c->r[25]); // 800DCB88
  c->r[3]=c->r[29]+0x000000B0u; // 800DCB8C
  c->lr=0x800DCB94u; f_800506C0(c); // 800DCB90
  c->r[12]=R32(c->r[29]+0x00000000u); // 800DCB94
  c->r[3]=c->r[29]|c->r[29]; // 800DCB98
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800DCB9C
  c->ctr=c->r[12]; // 800DCBA0
  if (true) { c->lr=0x800DCBA8u; dispatch(c,c->ctr); } // 800DCBA4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800DCBA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCBAC
  if (!crb(c,2)) { goto L_800DCBCC; } // 800DCBB0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800DCBB4
  c->r[0]=0u+0x00000001u; // 800DCBB8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800DCBBC
  c->r[3]=c->r[3]+0x00000001u; // 800DCBC0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800DCBC4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800DCBC8
L_800DCBCC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800DCBCC
  c->r[5]=0u+0x806F0000u; // 800DCBD0
  c->r[5]=c->r[5]+0x000007F8u; // 800DCBD4
  c->r[0]=0u+0x00000032u; // 800DCBD8
  c->r[4]=c->r[5]+0x00000024u; // 800DCBDC
  W32(c->r[29]+0x00000008u,c->r[3]); // 800DCBE0
  c->r[6]=0u+0x00000000u; // 800DCBE4
  c->r[3]=0u+0x00000000u; // 800DCBE8
  W32(c->r[29]+0x00000000u,c->r[5]); // 800DCBEC
  W32(c->r[29]+0x00000004u,c->r[4]); // 800DCBF0
  c->ctr=c->r[0]; // 800DCBF4
L_800DCBF8:;
  c->r[4]=c->r[29]+c->r[3]; // 800DCBF8
  c->r[3]=c->r[3]+0x00000004u; // 800DCBFC
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800DCC00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCBF8; } // 800DCC04
  c->r[3]=0u+0x806D0000u; // 800DCC08
  c->r[7]=0u+0x00000000u; // 800DCC0C
  c->r[3]=c->r[3]+0x00003868u; // 800DCC10
  c->r[0]=0u+0x0000000Au; // 800DCC14
  c->r[4]=c->r[3]+0x00000024u; // 800DCC18
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DCC1C
  c->r[8]=0u+0x00000000u; // 800DCC20
  c->r[3]=0u+0x00000000u; // 800DCC24
  W32(c->r[29]+0x00000004u,c->r[4]); // 800DCC28
  c->r[6]=0u+0xFFFFFFFFu; // 800DCC2C
  W32(c->r[27]+0x00000314u,c->r[7]); // 800DCC30
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800DCC34
  W32(c->r[27]+0x00000054u,c->r[7]); // 800DCC38
  W32(c->r[27]+0x00000310u,c->r[27]); // 800DCC3C
  c->ctr=c->r[0]; // 800DCC40
L_800DCC44:;
  c->r[5]=c->r[27]+c->r[3]; // 800DCC44
  c->r[4]=c->r[27]+c->r[8]; // 800DCC48
  W32(c->r[5]+0x00000068u,c->r[6]); // 800DCC4C
  c->r[8]=c->r[8]+0x00000001u; // 800DCC50
  c->r[3]=c->r[3]+0x00000004u; // 800DCC54
  W8(c->r[4]+0x00000090u,c->r[7]); // 800DCC58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCC44; } // 800DCC5C
  c->r[25]=c->r[27]+0x00000318u; // 800DCC60
  c->r[3]=c->r[25]|c->r[25]; // 800DCC64
  c->lr=0x800DCC6Cu; f_800506C0(c); // 800DCC68
  cmps(c,0,(int32_t)c->r[25],0); // 800DCC6C
  c->r[3]=c->r[25]|c->r[25]; // 800DCC70
  if (crb(c,2)) { goto L_800DCC7C; } // 800DCC74
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800DCC78
L_800DCC7C:;
  c->r[29]=0u+0x00000001u; // 800DCC7C
  W32(c->r[25]+0x00000008u,c->r[3]); // 800DCC80
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 800DCC84
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800DCC88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCC8C
  if (!crb(c,2)) { goto L_800DCCD0; } // 800DCC90
  c->r[28]=0u+0x80750000u; // 800DCC94
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800DCC98
  c->lr=0x800DCCA0u; f_800506C0(c); // 800DCC9C
  c->r[6]=0u+0x806D0000u; // 800DCCA0
  c->r[4]=0u+0x80080000u; // 800DCCA4
  c->r[6]=c->r[6]+0x000038D8u; // 800DCCA8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800DCCAC
  c->r[0]=c->r[6]+0x00000008u; // 800DCCB0
  c->r[5]=0u+0x80750000u; // 800DCCB4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800DCCB8
  c->r[4]=c->r[4]+0xFFFF9844u; // 800DCCBC
  c->r[5]=c->r[5]+0x0000398Cu; // 800DCCC0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DCCC4
  c->lr=0x800DCCCCu; f_803A92B8(c); // 800DCCC8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800DCCCC
L_800DCCD0:;
  c->r[3]=0u+0x80750000u; // 800DCCD0
  c->r[5]=c->r[25]|c->r[25]; // 800DCCD4
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800DCCD8
  c->r[4]=c->r[3]|c->r[3]; // 800DCCDC
  c->lr=0x800DCCE4u; f_802DDCA8(c); // 800DCCE0
  c->r[3]=0u+0x806D0000u; // 800DCCE4
  c->r[0]=0u+0x00000000u; // 800DCCE8
  c->r[3]=c->r[3]+0xFFFFD974u; // 800DCCEC
  c->r[5]=0u+0xFFFFFFFFu; // 800DCCF0
  c->r[4]=0u+0x00000001u; // 800DCCF4
  c->r[24]=c->r[27]+0x0000032Cu; // 800DCCF8
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800DCCFC
  c->r[3]=c->r[24]|c->r[24]; // 800DCD00
  W32(c->r[27]+0x00000328u,c->r[5]); // 800DCD04
  W32(c->r[27]+0x000000ECu,c->r[4]); // 800DCD08
  W32(c->r[27]+0x00000054u,c->r[0]); // 800DCD0C
  W32(c->r[27]+0x00000314u,c->r[0]); // 800DCD10
  c->lr=0x800DCD18u; f_800506C0(c); // 800DCD14
  cmps(c,0,(int32_t)c->r[24],0); // 800DCD18
  c->r[3]=c->r[24]|c->r[24]; // 800DCD1C
  if (crb(c,2)) { goto L_800DCD28; } // 800DCD20
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 800DCD24
L_800DCD28:;
  c->r[29]=0u+0x00000001u; // 800DCD28
  W32(c->r[24]+0x00000008u,c->r[3]); // 800DCD2C
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800DCD30
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 800DCD34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCD38
  if (!crb(c,2)) { goto L_800DCD7C; } // 800DCD3C
  c->r[28]=0u+0x80730000u; // 800DCD40
  c->r[3]=c->r[28]+0x000073A8u; // 800DCD44
  c->lr=0x800DCD4Cu; f_800506C0(c); // 800DCD48
  c->r[6]=0u+0x806D0000u; // 800DCD4C
  c->r[4]=0u+0x80050000u; // 800DCD50
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 800DCD54
  c->r[3]=c->r[28]+0x000073A8u; // 800DCD58
  c->r[0]=c->r[6]+0x00000008u; // 800DCD5C
  c->r[5]=0u+0x80750000u; // 800DCD60
  W32(c->r[3]+0x00000010u,c->r[6]); // 800DCD64
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 800DCD68
  c->r[5]=c->r[5]+0x00003980u; // 800DCD6C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DCD70
  c->lr=0x800DCD78u; f_803A92B8(c); // 800DCD74
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 800DCD78
L_800DCD7C:;
  c->r[3]=0u+0x80730000u; // 800DCD7C
  c->r[5]=c->r[24]|c->r[24]; // 800DCD80
  c->r[3]=c->r[3]+0x000073A8u; // 800DCD84
  c->r[4]=c->r[3]|c->r[3]; // 800DCD88
  c->lr=0x800DCD90u; f_802DDCA8(c); // 800DCD8C
  c->r[24]=c->r[27]+0x0000033Cu; // 800DCD90
  c->r[3]=c->r[24]|c->r[24]; // 800DCD94
  c->lr=0x800DCD9Cu; f_800506C0(c); // 800DCD98
  cmps(c,0,(int32_t)c->r[24],0); // 800DCD9C
  c->r[3]=c->r[24]|c->r[24]; // 800DCDA0
  if (crb(c,2)) { goto L_800DCDAC; } // 800DCDA4
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 800DCDA8
L_800DCDAC:;
  c->r[29]=0u+0x00000001u; // 800DCDAC
  W32(c->r[24]+0x00000008u,c->r[3]); // 800DCDB0
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 800DCDB4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800DCDB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCDBC
  if (!crb(c,2)) { goto L_800DCE00; } // 800DCDC0
  c->r[28]=0u+0x80750000u; // 800DCDC4
  c->r[3]=c->r[28]+0xFFFF8158u; // 800DCDC8
  c->lr=0x800DCDD0u; f_800506C0(c); // 800DCDCC
  c->r[6]=0u+0x806D0000u; // 800DCDD0
  c->r[4]=0u+0x80080000u; // 800DCDD4
  c->r[6]=c->r[6]+0x000038F0u; // 800DCDD8
  c->r[3]=c->r[28]+0xFFFF8158u; // 800DCDDC
  c->r[0]=c->r[6]+0x00000008u; // 800DCDE0
  c->r[5]=0u+0x80750000u; // 800DCDE4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800DCDE8
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800DCDEC
  c->r[5]=c->r[5]+0x00003974u; // 800DCDF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DCDF4
  c->lr=0x800DCDFCu; f_803A92B8(c); // 800DCDF8
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 800DCDFC
L_800DCE00:;
  c->r[3]=0u+0x80750000u; // 800DCE00
  c->r[5]=c->r[24]|c->r[24]; // 800DCE04
  c->r[3]=c->r[3]+0xFFFF8158u; // 800DCE08
  c->r[4]=c->r[3]|c->r[3]; // 800DCE0C
  c->lr=0x800DCE14u; f_802DDCA8(c); // 800DCE10
  c->r[3]=0u+0x806D0000u; // 800DCE14
  W32(c->r[27]+0x00000054u,c->r[26]); // 800DCE18
  c->r[3]=c->r[3]+0x00004AE8u; // 800DCE1C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800DCE20
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800DCE24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCE28
  if (!crb(c,2)) { goto L_800DCE48; } // 800DCE2C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800DCE30
  c->r[0]=0u+0x00000001u; // 800DCE34
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800DCE38
  c->r[3]=c->r[3]+0x00000001u; // 800DCE3C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800DCE40
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800DCE44
L_800DCE48:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 800DCE48
  W32(c->r[27]+0x00000328u,c->r[0]); // 800DCE4C
  c->r[0]=R8(c->r[13]+0xFFFFC39Cu); // 800DCE50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCE54
  if (!crb(c,2)) { goto L_800DCE74; } // 800DCE58
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 800DCE5C
  c->r[0]=0u+0x00000001u; // 800DCE60
  W32(c->r[13]+0xFFFFC398u,c->r[3]); // 800DCE64
  c->r[3]=c->r[3]+0x00000001u; // 800DCE68
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 800DCE6C
  W8(c->r[13]+0xFFFFC39Cu,c->r[0]); // 800DCE70
L_800DCE74:;
  c->r[0]=R32(c->r[13]+0xFFFFC398u); // 800DCE74
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 800DCE78
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 800DCE7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCE80
  if (!crb(c,2)) { goto L_800DCEA0; } // 800DCE84
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 800DCE88
  c->r[0]=0u+0x00000001u; // 800DCE8C
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 800DCE90
  c->r[3]=c->r[3]+0x00000001u; // 800DCE94
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 800DCE98
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 800DCE9C
L_800DCEA0:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 800DCEA0
  c->r[5]=0u+0x806D0000u; // 800DCEA4
  c->r[5]=c->r[5]+0xFFFFE468u; // 800DCEA8
  W32(c->r[27]+0x00000350u,c->r[0]); // 800DCEAC
  c->r[3]=c->r[27]+0x000003B0u; // 800DCEB0
  c->r[4]=0u+0x00000000u; // 800DCEB4
  W32(c->r[27]+0x00000400u,c->r[5]); // 800DCEB8
  c->r[5]=0u+0x00000050u; // 800DCEBC
  c->lr=0x800DCEC4u; f_800043EC(c); // 800DCEC0
  c->r[4]=0u+0x806D0000u; // 800DCEC4
  c->r[3]=c->r[27]+0x00000450u; // 800DCEC8
  c->r[4]=c->r[4]+0xFFFFE170u; // 800DCECC
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800DCED0
  c->r[0]=c->r[4]+0x00000044u; // 800DCED4
  W32(c->r[27]+0x00000400u,c->r[0]); // 800DCED8
  c->lr=0x800DCEE0u; f_8007BDFC(c); // 800DCEDC
  c->r[3]=c->r[27]+0x000004C4u; // 800DCEE0
  c->lr=0x800DCEE8u; f_8007BDFC(c); // 800DCEE4
  c->r[3]=c->r[27]+0x00000538u; // 800DCEE8
  c->r[4]=0u+0x00000000u; // 800DCEEC
  c->r[5]=0u+0x00000008u; // 800DCEF0
  c->lr=0x800DCEF8u; f_800043EC(c); // 800DCEF4
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DCEF8
  cmps(c,0,(int32_t)c->r[24],0); // 800DCEFC
  if (crb(c,2)) { goto L_800DCF44; } // 800DCF00
  c->lr=0x800DCF08u; f_800DBD30(c); // 800DCF04
  c->r[26]=c->r[3]|c->r[3]; // 800DCF08
  c->lr=0x800DCF10u; f_8007BDCC(c); // 800DCF0C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 800DCF10
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DCF14
  c->r[5]=0u+0x800E0000u; // 800DCF18
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800DCF1C
  c->r[4]=c->r[24]+c->r[4]; // 800DCF20
  c->r[5]=c->r[5]+0xFFFFD318u; // 800DCF24
  c->r[4]=c->r[4]+c->r[0]; // 800DCF28
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DCF2C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DCF30
  cmpu(c,0,c->r[0],0x0000000Cu); // 800DCF34
  if (!crb(c,0)) { goto L_800DCF44; } // 800DCF38
  c->r[0]=0u+0x0000000Cu; // 800DCF3C
  W32(c->r[24]+c->r[3],c->r[0]); // 800DCF40
L_800DCF44:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DCF44
  cmps(c,0,(int32_t)c->r[24],0); // 800DCF48
  if (crb(c,2)) { goto L_800DCFB4; } // 800DCF4C
  c->lr=0x800DCF54u; f_800DBD30(c); // 800DCF50
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 800DCF54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCF58
  if (!crb(c,2)) { goto L_800DCF7C; } // 800DCF5C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DCF60
  c->r[0]=0u+0x00000001u; // 800DCF64
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DCF68
  c->r[4]=c->r[5]+0x00000001u; // 800DCF6C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DCF70
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 800DCF74
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 800DCF78
L_800DCF7C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DCF7C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 800DCF80
  c->r[5]=0u+0x800E0000u; // 800DCF84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DCF88
  c->r[4]=c->r[24]+c->r[4]; // 800DCF8C
  c->r[5]=c->r[5]+0xFFFFD314u; // 800DCF90
  c->r[4]=c->r[4]+c->r[0]; // 800DCF94
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DCF98
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DCF9C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DCFA0
  cmpu(c,0,c->r[0],0x00000018u); // 800DCFA4
  if (!crb(c,0)) { goto L_800DCFB4; } // 800DCFA8
  c->r[0]=0u+0x00000018u; // 800DCFAC
  W32(c->r[24]+c->r[3],c->r[0]); // 800DCFB0
L_800DCFB4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DCFB4
  cmps(c,0,(int32_t)c->r[24],0); // 800DCFB8
  if (crb(c,2)) { goto L_800DD024; } // 800DCFBC
  c->lr=0x800DCFC4u; f_800DBD30(c); // 800DCFC0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800DCFC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DCFC8
  if (!crb(c,2)) { goto L_800DCFEC; } // 800DCFCC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DCFD0
  c->r[0]=0u+0x00000001u; // 800DCFD4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DCFD8
  c->r[4]=c->r[5]+0x00000001u; // 800DCFDC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DCFE0
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800DCFE4
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800DCFE8
L_800DCFEC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DCFEC
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800DCFF0
  c->r[5]=0u+0x800E0000u; // 800DCFF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DCFF8
  c->r[4]=c->r[24]+c->r[4]; // 800DCFFC
  c->r[5]=c->r[5]+0xFFFFD310u; // 800DD000
  c->r[4]=c->r[4]+c->r[0]; // 800DD004
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD008
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD00C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD010
  cmpu(c,0,c->r[0],0x0000006Cu); // 800DD014
  if (!crb(c,0)) { goto L_800DD024; } // 800DD018
  c->r[0]=0u+0x0000006Cu; // 800DD01C
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD020
L_800DD024:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD024
  cmps(c,0,(int32_t)c->r[24],0); // 800DD028
  if (crb(c,2)) { goto L_800DD094; } // 800DD02C
  c->lr=0x800DD034u; f_800DBD30(c); // 800DD030
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 800DD034
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD038
  if (!crb(c,2)) { goto L_800DD05C; } // 800DD03C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD040
  c->r[0]=0u+0x00000001u; // 800DD044
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD048
  c->r[4]=c->r[5]+0x00000001u; // 800DD04C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD050
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 800DD054
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 800DD058
L_800DD05C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD05C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 800DD060
  c->r[5]=0u+0x800E0000u; // 800DD064
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD068
  c->r[4]=c->r[24]+c->r[4]; // 800DD06C
  c->r[5]=c->r[5]+0xFFFFD30Cu; // 800DD070
  c->r[4]=c->r[4]+c->r[0]; // 800DD074
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD078
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD07C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD080
  cmpu(c,0,c->r[0],0x0000002Cu); // 800DD084
  if (!crb(c,0)) { goto L_800DD094; } // 800DD088
  c->r[0]=0u+0x0000002Cu; // 800DD08C
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD090
L_800DD094:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD094
  cmps(c,0,(int32_t)c->r[24],0); // 800DD098
  if (crb(c,2)) { goto L_800DD104; } // 800DD09C
  c->lr=0x800DD0A4u; f_800DBD30(c); // 800DD0A0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 800DD0A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD0A8
  if (!crb(c,2)) { goto L_800DD0CC; } // 800DD0AC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD0B0
  c->r[0]=0u+0x00000001u; // 800DD0B4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD0B8
  c->r[4]=c->r[5]+0x00000001u; // 800DD0BC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD0C0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 800DD0C4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 800DD0C8
L_800DD0CC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD0CC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 800DD0D0
  c->r[5]=0u+0x800E0000u; // 800DD0D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD0D8
  c->r[4]=c->r[24]+c->r[4]; // 800DD0DC
  c->r[5]=c->r[5]+0xFFFFD308u; // 800DD0E0
  c->r[4]=c->r[4]+c->r[0]; // 800DD0E4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD0E8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD0EC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD0F0
  cmpu(c,0,c->r[0],0x00000010u); // 800DD0F4
  if (!crb(c,0)) { goto L_800DD104; } // 800DD0F8
  c->r[0]=0u+0x00000010u; // 800DD0FC
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD100
L_800DD104:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD104
  cmps(c,0,(int32_t)c->r[24],0); // 800DD108
  if (crb(c,2)) { goto L_800DD174; } // 800DD10C
  c->lr=0x800DD114u; f_800DBD30(c); // 800DD110
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 800DD114
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD118
  if (!crb(c,2)) { goto L_800DD13C; } // 800DD11C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD120
  c->r[0]=0u+0x00000001u; // 800DD124
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD128
  c->r[4]=c->r[5]+0x00000001u; // 800DD12C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD130
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 800DD134
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 800DD138
L_800DD13C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD13C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 800DD140
  c->r[5]=0u+0x800E0000u; // 800DD144
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD148
  c->r[4]=c->r[24]+c->r[4]; // 800DD14C
  c->r[5]=c->r[5]+0xFFFFD304u; // 800DD150
  c->r[4]=c->r[4]+c->r[0]; // 800DD154
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD158
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD15C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD160
  cmpu(c,0,c->r[0],0x0000005Cu); // 800DD164
  if (!crb(c,0)) { goto L_800DD174; } // 800DD168
  c->r[0]=0u+0x0000005Cu; // 800DD16C
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD170
L_800DD174:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD174
  cmps(c,0,(int32_t)c->r[24],0); // 800DD178
  if (crb(c,2)) { goto L_800DD1E4; } // 800DD17C
  c->lr=0x800DD184u; f_800DBD30(c); // 800DD180
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 800DD184
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD188
  if (!crb(c,2)) { goto L_800DD1AC; } // 800DD18C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD190
  c->r[0]=0u+0x00000001u; // 800DD194
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD198
  c->r[4]=c->r[5]+0x00000001u; // 800DD19C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD1A0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 800DD1A4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 800DD1A8
L_800DD1AC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD1AC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 800DD1B0
  c->r[5]=0u+0x800E0000u; // 800DD1B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD1B8
  c->r[4]=c->r[24]+c->r[4]; // 800DD1BC
  c->r[5]=c->r[5]+0xFFFFD300u; // 800DD1C0
  c->r[4]=c->r[4]+c->r[0]; // 800DD1C4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD1C8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD1CC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD1D0
  cmpu(c,0,c->r[0],0x0000005Cu); // 800DD1D4
  if (!crb(c,0)) { goto L_800DD1E4; } // 800DD1D8
  c->r[0]=0u+0x0000005Cu; // 800DD1DC
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD1E0
L_800DD1E4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD1E4
  cmps(c,0,(int32_t)c->r[24],0); // 800DD1E8
  if (crb(c,2)) { goto L_800DD254; } // 800DD1EC
  c->lr=0x800DD1F4u; f_800DBD30(c); // 800DD1F0
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 800DD1F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD1F8
  if (!crb(c,2)) { goto L_800DD21C; } // 800DD1FC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD200
  c->r[0]=0u+0x00000001u; // 800DD204
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD208
  c->r[4]=c->r[5]+0x00000001u; // 800DD20C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD210
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 800DD214
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 800DD218
L_800DD21C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD21C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 800DD220
  c->r[5]=0u+0x800E0000u; // 800DD224
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD228
  c->r[4]=c->r[24]+c->r[4]; // 800DD22C
  c->r[5]=c->r[5]+0xFFFFD2FCu; // 800DD230
  c->r[4]=c->r[4]+c->r[0]; // 800DD234
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD238
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD23C
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD240
  cmpu(c,0,c->r[0],0x0000005Cu); // 800DD244
  if (!crb(c,0)) { goto L_800DD254; } // 800DD248
  c->r[0]=0u+0x0000005Cu; // 800DD24C
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD250
L_800DD254:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 800DD254
  cmps(c,0,(int32_t)c->r[24],0); // 800DD258
  if (crb(c,2)) { goto L_800DD2C4; } // 800DD25C
  c->lr=0x800DD264u; f_800DBD30(c); // 800DD260
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 800DD264
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD268
  if (!crb(c,2)) { goto L_800DD28C; } // 800DD26C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800DD270
  c->r[0]=0u+0x00000001u; // 800DD274
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800DD278
  c->r[4]=c->r[5]+0x00000001u; // 800DD27C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800DD280
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 800DD284
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 800DD288
L_800DD28C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800DD28C
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 800DD290
  c->r[5]=0u+0x800E0000u; // 800DD294
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD298
  c->r[4]=c->r[24]+c->r[4]; // 800DD29C
  c->r[5]=c->r[5]+0xFFFFD2F8u; // 800DD2A0
  c->r[4]=c->r[4]+c->r[0]; // 800DD2A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DD2A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800DD2AC
  c->r[0]=R32(c->r[24]+c->r[3]); // 800DD2B0
  cmpu(c,0,c->r[0],0x0000005Cu); // 800DD2B4
  if (!crb(c,0)) { goto L_800DD2C4; } // 800DD2B8
  c->r[0]=0u+0x0000005Cu; // 800DD2BC
  W32(c->r[24]+c->r[3],c->r[0]); // 800DD2C0
L_800DD2C4:;
  c->r[3]=c->r[27]|c->r[27]; // 800DD2C4
  c->lr=0x800DD2CCu; f_8005BBF0(c); // 800DD2C8
  c->r[4]=0u+0x806D0000u; // 800DD2CC
  c->r[3]=c->r[27]|c->r[27]; // 800DD2D0
  c->r[4]=c->r[4]+0x000048F8u; // 800DD2D4
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800DD2D8
  c->r[0]=c->r[4]+0x00000044u; // 800DD2DC
  W32(c->r[27]+0x00000400u,c->r[0]); // 800DD2E0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD2E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DD2E8
  c->lr=c->r[0]; // 800DD2EC
  c->r[1]=c->r[1]+0x00000040u; // 800DD2F0
  return; // 800DD2F4
}

// fn_800DD2F8
void f_800DD2F8(Ctx* __restrict c) {
  trace_call(0x800DD2F8u);
  f_8005E338(c); return; // 800DD2F8
}

// fn_800DD2FC
void f_800DD2FC(Ctx* __restrict c) {
  trace_call(0x800DD2FCu);
  f_8005E324(c); return; // 800DD2FC
}

// fn_800DD300
void f_800DD300(Ctx* __restrict c) {
  trace_call(0x800DD300u);
  f_8005E310(c); return; // 800DD300
}

// fn_800DD304
void f_800DD304(Ctx* __restrict c) {
  trace_call(0x800DD304u);
  f_8005E2FC(c); return; // 800DD304
}

// fn_800DD308
void f_800DD308(Ctx* __restrict c) {
  trace_call(0x800DD308u);
  f_8005E34C(c); return; // 800DD308
}

// fn_800DD30C
void f_800DD30C(Ctx* __restrict c) {
  trace_call(0x800DD30Cu);
  f_8005E360(c); return; // 800DD30C
}

// fn_800DD310
void f_800DD310(Ctx* __restrict c) {
  trace_call(0x800DD310u);
  f_8005D47C(c); return; // 800DD310
}

// fn_800DD314
void f_800DD314(Ctx* __restrict c) {
  trace_call(0x800DD314u);
  f_8005D468(c); return; // 800DD314
}

// fn_800DD318
void f_800DD318(Ctx* __restrict c) {
  trace_call(0x800DD318u);
  f_8005BEDC(c); return; // 800DD318
}

// fn_800DD31C
void f_800DD31C(Ctx* __restrict c) {
  trace_call(0x800DD31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD31C
  c->r[0]=c->lr; // 800DD320
  cmps(c,0,(int32_t)c->r[3],0); // 800DD324
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD328
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD32C
  c->r[30]=c->r[3]|c->r[3]; // 800DD330
  c->r[31]=c->r[4]|c->r[4]; // 800DD334
  if (crb(c,2)) { goto L_800DD370; } // 800DD338
  c->r[0]=addc(c,c->r[3],0x0000067Cu,0); cr0(c,c->r[0]); // 800DD33C
  if (crb(c,2)) { goto L_800DD34C; } // 800DD340
  c->r[0]=0u+0x00000000u; // 800DD344
  W32(c->r[3]+0x000009C4u,c->r[0]); // 800DD348
L_800DD34C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DD34C
  if (crb(c,2)) { goto L_800DD360; } // 800DD350
  c->r[3]=c->r[30]|c->r[30]; // 800DD354
  c->r[4]=0u+0x00000000u; // 800DD358
  c->lr=0x800DD360u; f_8005BD00(c); // 800DD35C
L_800DD360:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD360
  if (!crb(c,1)) { goto L_800DD370; } // 800DD364
  c->r[3]=c->r[30]|c->r[30]; // 800DD368
  c->lr=0x800DD370u; f_8005328C(c); // 800DD36C
L_800DD370:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD374
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD378
  c->lr=c->r[0]; // 800DD37C
  c->r[1]=c->r[1]+0x00000010u; // 800DD380
  return; // 800DD384
}

// fn_800DD388
void f_800DD388(Ctx* __restrict c) {
  trace_call(0x800DD388u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD388
  c->r[0]=c->lr; // 800DD38C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD390
  c->r[11]=c->r[1]+0x00000020u; // 800DD394
  c->lr=0x800DD39Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD398
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD39C
  c->r[29]=c->r[3]|c->r[3]; // 800DD3A0
  c->f[2]=c->f[1]; // 800DD3A4
  c->f[3]=c->f[1]; // 800DD3A8
  c->lr=0x800DD3B0u; f_80316D18(c); // 800DD3AC
  c->r[31]=0u+0x00000000u; // 800DD3B0
  W32(c->r[29]+0x000005C0u,c->r[31]); // 800DD3B4
  c->r[3]=c->r[29]+0x000005C8u; // 800DD3B8
  c->r[4]=0u+0x00000000u; // 800DD3BC
  W32(c->r[29]+0x000005C4u,c->r[31]); // 800DD3C0
  c->r[5]=0u+0x0000002Cu; // 800DD3C4
  c->lr=0x800DD3CCu; f_800043EC(c); // 800DD3C8
  c->r[3]=c->r[29]+0x000005F4u; // 800DD3CC
  c->r[4]=0u+0x00000000u; // 800DD3D0
  c->r[5]=0u+0x00000008u; // 800DD3D4
  c->lr=0x800DD3DCu; f_800043EC(c); // 800DD3D8
  c->r[3]=c->r[29]|c->r[29]; // 800DD3DC
  c->lr=0x800DD3E4u; f_8005EAA0(c); // 800DD3E0
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD3E4
  c->r[30]=c->r[3]|c->r[3]; // 800DD3E8
  c->lr=0x800DD3F0u; f_80101528(c); // 800DD3EC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD3F0
  c->r[3]=c->r[30]|c->r[30]; // 800DD3F4
  {uint32_t ea=c->r[2]+0xFFFFA554u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DD3F8
  c->lr=0x800DD400u; f_80101538(c); // 800DD3FC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD400
  c->r[3]=c->r[30]|c->r[30]; // 800DD404
  {uint32_t ea=c->r[2]+0xFFFFA558u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DD408
  c->lr=0x800DD410u; f_80101544(c); // 800DD40C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD410
  c->r[0]=0u+0x00000002u; // 800DD414
  {uint32_t ea=c->r[2]+0xFFFFA554u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD418
  c->r[11]=c->r[1]+0x00000020u; // 800DD41C
  {uint32_t ea=c->r[29]+0x000009C8u; WF32(ea,c->f[1]);} // 800DD420
  {uint32_t ea=c->r[29]+0x000009CCu; WF32(ea,c->f[0]);} // 800DD424
  W8(c->r[29]+0x000009D0u,c->r[31]); // 800DD428
  W32(c->r[29]+0x000009D4u,c->r[0]); // 800DD42C
  c->lr=0x800DD434u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD430
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD434
  c->lr=c->r[0]; // 800DD438
  c->r[1]=c->r[1]+0x00000020u; // 800DD43C
  return; // 800DD440
}

// fn_800DD444
void f_800DD444(Ctx* __restrict c) {
  trace_call(0x800DD444u);
  return; // 800DD444
}

// fn_800DD448
void f_800DD448(Ctx* __restrict c) {
  trace_call(0x800DD448u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD448
  c->r[0]=c->lr; // 800DD44C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD450
  c->r[0]=0u+0x00000000u; // 800DD454
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD458
  c->r[30]=c->r[3]|c->r[3]; // 800DD45C
  W8(c->r[3]+0x000009D1u,c->r[0]); // 800DD460
  c->lr=0x800DD468u; f_800E11F4(c); // 800DD464
  c->r[31]=0u+0x00000000u; // 800DD468
L_800DD46C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD46C
  if (crb(c,2)) { goto L_800DD47C; } // 800DD470
  c->r[3]=c->r[30]|c->r[30]; // 800DD474
  c->lr=0x800DD47Cu; f_800E11F4(c); // 800DD478
L_800DD47C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD47C
  c->lr=0x800DD484u; f_800E13DC(c); // 800DD480
  cmps(c,0,(int32_t)c->r[3],0); // 800DD484
  if (crb(c,2)) { goto L_800DD49C; } // 800DD488
  c->r[0]=R32(c->r[30]+0x000009D4u); // 800DD48C
  c->r[31]=c->r[31]+0x00000001u; // 800DD490
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800DD494
  if (!crb(c,1)) { IRQCHK(c); goto L_800DD46C; } // 800DD498
L_800DD49C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD4A0
  c->lr=c->r[0]; // 800DD4A4
  c->r[1]=c->r[1]+0x00000010u; // 800DD4A8
  return; // 800DD4AC
}

// fn_800DD4B0
void f_800DD4B0(Ctx* __restrict c) {
  trace_call(0x800DD4B0u);
  return; // 800DD4B0
}

// fn_800DD4B4
void f_800DD4B4(Ctx* __restrict c) {
  trace_call(0x800DD4B4u);
  return; // 800DD4B4
}

// fn_800DD4B8
void f_800DD4B8(Ctx* __restrict c) {
  trace_call(0x800DD4B8u);
  return; // 800DD4B8
}

// fn_800DD4BC
void f_800DD4BC(Ctx* __restrict c) {
  trace_call(0x800DD4BCu);
  return; // 800DD4BC
}

// fn_800DD4C0
void f_800DD4C0(Ctx* __restrict c) {
  trace_call(0x800DD4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD4C0
  c->r[0]=c->lr; // 800DD4C4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800DD4C8
  c->r[11]=c->r[1]+0x000000C0u; // 800DD4CC
  c->lr=0x800DD4D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD4D0
  c->r[31]=c->r[1]|c->r[1]; // 800DD4D4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800DD4D8
  c->r[30]=c->r[3]|c->r[3]; // 800DD4DC
  c->r[12]=R32(c->r[12]+0x00000110u); // 800DD4E0
  c->ctr=c->r[12]; // 800DD4E4
  if (true) { c->lr=0x800DD4ECu; dispatch(c,c->ctr); } // 800DD4E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4EC
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD4F0
  c->r[3]=c->r[31]+0x00000028u; // 800DD4F4
  c->r[4]=c->r[30]+0x00000450u; // 800DD4F8
  c->lr=0x800DD500u; f_800DD878(c); // 800DD4FC
  c->r[4]=R32(c->r[30]+0x00000004u); // 800DD500
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DD504
  cmps(c,0,(int32_t)c->r[4],0); // 800DD508
  c->r[27]=R32(c->r[3]+0x0000008Cu); // 800DD50C
  if (crb(c,2)) { goto L_800DD51C; } // 800DD510
  c->r[29]=R32(c->r[4]+0x00000000u); // 800DD514
  goto L_800DD520; // 800DD518
L_800DD51C:;
  c->r[29]=0u+0xFFFFFFFFu; // 800DD51C
L_800DD520:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD520
  c->lr=0x800DD528u; f_8006130C(c); // 800DD524
  c->r[0]=R32(c->r[30]+0x000005C0u); // 800DD528
  c->r[28]=c->r[3]|c->r[3]; // 800DD52C
  cmps(c,0,(int32_t)c->r[0],1); // 800DD530
  if (!crb(c,2)) { goto L_800DD560; } // 800DD534
  c->r[3]=c->r[30]+0x00000354u; // 800DD538
  c->lr=0x800DD540u; f_800C9374(c); // 800DD53C
  c->r[0]=c->r[3]+0xFFFFBD8Eu; // 800DD540
  cmpu(c,0,c->r[0],0x00000001u); // 800DD544
  if (!crb(c,1)) { goto L_800DD558; } // 800DD548
  c->r[0]=c->r[3]+0xFFFFBBFEu; // 800DD54C
  cmpu(c,0,c->r[0],0x00000001u); // 800DD550
  if (crb(c,1)) { goto L_800DD560; } // 800DD554
L_800DD558:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD558
  c->lr=0x800DD560u; f_800DF9C0(c); // 800DD55C
L_800DD560:;
  cmps(c,0,(int32_t)c->r[27],4); // 800DD560
  if (!crb(c,2)) { goto L_800DD5D0; } // 800DD564
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DD568
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD56C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD570
  fcmp(c,0,c->f[1],c->f[0]); // 800DD574
  if (crb(c,1)) { goto L_800DD5A8; } // 800DD578
  c->lr=0x800DD580u; f_800DBDD4(c); // 800DD57C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD580
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD584
  c->lr=0x800DD58Cu; f_800DBD00(c); // 800DD588
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD58C
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD590
  c->r[3]=c->r[30]|c->r[30]; // 800DD594
  c->lr=0x800DD59Cu; f_800DD7B0(c); // 800DD598
  c->r[0]=0u+0x00004395u; // 800DD59C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DD5A0
  goto L_800DD6DC; // 800DD5A4
L_800DD5A8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DD5A8
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD5AC
  c->lr=0x800DD5B4u; f_800DBDD4(c); // 800DD5B0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD5B4
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD5B8
  c->r[3]=c->r[30]|c->r[30]; // 800DD5BC
  c->lr=0x800DD5C4u; f_800DD6FC(c); // 800DD5C0
  c->r[0]=0u+0x0000433Bu; // 800DD5C4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DD5C8
  goto L_800DD6DC; // 800DD5CC
L_800DD5D0:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 800DD5D0
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD5D4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD5D8
  fcmp(c,0,c->f[1],c->f[0]); // 800DD5DC
  if (crb(c,1)) { goto L_800DD618; } // 800DD5E0
  c->lr=0x800DD5E8u; f_800DBDD4(c); // 800DD5E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD5E8
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD5EC
  c->lr=0x800DD5F4u; f_800DBD00(c); // 800DD5F0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD5F4
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD5F8
  c->r[3]=c->r[30]|c->r[30]; // 800DD5FC
  c->lr=0x800DD604u; f_800E07F8(c); // 800DD600
  c->r[28]=c->r[3]|c->r[3]; // 800DD604
  c->r[3]=c->r[30]|c->r[30]; // 800DD608
  c->lr=0x800DD610u; f_800DD7B0(c); // 800DD60C
  W32(c->r[3]+0x00000010u,c->r[28]); // 800DD610
  goto L_800DD6DC; // 800DD614
L_800DD618:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DD618
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD61C
  c->r[3]=c->r[30]|c->r[30]; // 800DD620
  c->lr=0x800DD628u; f_800E0864(c); // 800DD624
  cmps(c,0,(int32_t)c->r[3],17210); // 800DD628
  c->r[28]=c->r[3]|c->r[3]; // 800DD62C
  if (!crb(c,2)) { goto L_800DD650; } // 800DD630
  c->lr=0x800DD638u; f_800DBDD4(c); // 800DD634
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD638
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD63C
  c->r[3]=c->r[30]|c->r[30]; // 800DD640
  c->lr=0x800DD648u; f_800DD6FC(c); // 800DD644
  W32(c->r[3]+0x00000010u,c->r[28]); // 800DD648
  goto L_800DD6DC; // 800DD64C
L_800DD650:;
  c->lr=0x800DD654u; f_800DBDD4(c); // 800DD650
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800DD654
  if (crb(c,2)) { goto L_800DD6DC; } // 800DD658
  c->lr=0x800DD660u; f_800DBE78(c); // 800DD65C
  c->r[4]=c->r[3]|c->r[3]; // 800DD660
  c->r[3]=c->r[30]|c->r[30]; // 800DD664
  c->lr=0x800DD66Cu; f_80062F4C(c); // 800DD668
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DD66C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD670
  c->r[3]=c->r[30]+c->r[0]; // 800DD674
  c->r[27]=R32(c->r[3]+0x00000014u); // 800DD678
  cmps(c,0,(int32_t)c->r[27],0); // 800DD67C
  if (crb(c,2)) { goto L_800DD6AC; } // 800DD680
  c->r[29]=0u+0x00000000u; // 800DD684
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DD688
  W8(c->r[31]+0x00000008u,c->r[29]); // 800DD68C
  c->lr=0x800DD694u; f_800DBE78(c); // 800DD690
  W32(c->r[27]+0x00000000u,c->r[3]); // 800DD694
  c->r[0]=c->r[13]+0xFFFF8480u; // 800DD698
  W32(c->r[27]+0x00000004u,c->r[0]); // 800DD69C
  W32(c->r[27]+0x00000008u,c->r[29]); // 800DD6A0
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 800DD6A4
  W32(c->r[27]+0x00000010u,c->r[29]); // 800DD6A8
L_800DD6AC:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 800DD6AC
  c->r[0]=0u+0x00000000u; // 800DD6B0
  c->r[3]=c->r[30]|c->r[30]; // 800DD6B4
  c->r[4]=c->r[27]|c->r[27]; // 800DD6B8
  W32(c->r[27]+0x00000008u,c->r[0]); // 800DD6BC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DD6C0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DD6C4
  c->lr=0x800DD6CCu; f_8006306C(c); // 800DD6C8
  c->r[0]=R32(c->r[30]+0x000005BCu); // 800DD6CC
  c->r[0]=c->r[0]|0x40000000u; // 800DD6D0
  W32(c->r[30]+0x000005BCu,c->r[0]); // 800DD6D4
  W32(c->r[27]+0x00000010u,c->r[28]); // 800DD6D8
L_800DD6DC:;
  c->r[10]=c->r[31]|c->r[31]; // 800DD6DC
  c->r[11]=c->r[10]+0x000000C0u; // 800DD6E0
  c->lr=0x800DD6E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD6E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DD6E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DD6EC
  c->r[1]=c->r[10]|c->r[10]; // 800DD6F0
  c->lr=c->r[0]; // 800DD6F4
  return; // 800DD6F8
}

// fn_800DD6FC
void f_800DD6FC(Ctx* __restrict c) {
  trace_call(0x800DD6FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD6FC
  c->r[0]=c->lr; // 800DD700
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DD704
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD708
  c->r[31]=c->r[1]|c->r[1]; // 800DD70C
  c->r[28]=c->r[3]|c->r[3]; // 800DD710
  c->lr=0x800DD718u; f_800DBDD4(c); // 800DD714
  c->r[4]=c->r[3]|c->r[3]; // 800DD718
  c->r[3]=c->r[28]|c->r[28]; // 800DD71C
  c->lr=0x800DD724u; f_80062F4C(c); // 800DD720
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DD724
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD728
  c->r[3]=c->r[28]+c->r[0]; // 800DD72C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DD730
  cmps(c,0,(int32_t)c->r[29],0); // 800DD734
  if (crb(c,2)) { goto L_800DD764; } // 800DD738
  c->r[30]=0u+0x00000000u; // 800DD73C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DD740
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DD744
  c->lr=0x800DD74Cu; f_800DBDD4(c); // 800DD748
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DD74C
  c->r[0]=c->r[13]+0xFFFF847Cu; // 800DD750
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DD754
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DD758
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DD75C
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DD760
L_800DD764:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DD764
  c->r[0]=0u+0x00000000u; // 800DD768
  c->r[3]=c->r[28]|c->r[28]; // 800DD76C
  c->r[4]=c->r[29]|c->r[29]; // 800DD770
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD774
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DD778
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DD77C
  c->lr=0x800DD784u; f_8006306C(c); // 800DD780
  c->r[0]=R32(c->r[28]+0x000005BCu); // 800DD784
  c->r[10]=c->r[31]|c->r[31]; // 800DD788
  c->r[3]=c->r[29]|c->r[29]; // 800DD78C
  c->r[0]=c->r[0]|0x40000000u; // 800DD790
  W32(c->r[28]+0x000005BCu,c->r[0]); // 800DD794
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD798
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DD79C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DD7A0
  c->r[1]=c->r[10]|c->r[10]; // 800DD7A4
  c->lr=c->r[0]; // 800DD7A8
  return; // 800DD7AC
}

// fn_800DD7B0
void f_800DD7B0(Ctx* __restrict c) {
  trace_call(0x800DD7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD7B0
  c->r[0]=c->lr; // 800DD7B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DD7B8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD7BC
  c->r[31]=c->r[1]|c->r[1]; // 800DD7C0
  c->r[28]=c->r[3]|c->r[3]; // 800DD7C4
  c->lr=0x800DD7CCu; f_800DBD00(c); // 800DD7C8
  c->r[4]=c->r[3]|c->r[3]; // 800DD7CC
  c->r[3]=c->r[28]|c->r[28]; // 800DD7D0
  c->lr=0x800DD7D8u; f_80062F4C(c); // 800DD7D4
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DD7D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DD7DC
  c->r[3]=c->r[28]+c->r[0]; // 800DD7E0
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DD7E4
  cmps(c,0,(int32_t)c->r[29],0); // 800DD7E8
  if (crb(c,2)) { goto L_800DD82C; } // 800DD7EC
  c->r[30]=0u+0x00000000u; // 800DD7F0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DD7F4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DD7F8
  c->lr=0x800DD800u; f_800DBD00(c); // 800DD7FC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DD800
  c->r[0]=c->r[13]+0xFFFF8478u; // 800DD804
  c->r[4]=0u+0x80760000u; // 800DD808
  c->r[3]=c->r[29]+0x00000018u; // 800DD80C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DD810
  c->r[4]=c->r[4]+0xFFFF9C78u; // 800DD814
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DD818
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DD81C
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DD820
  W8(c->r[29]+0x00000014u,c->r[30]); // 800DD824
  c->lr=0x800DD82Cu; f_8005DC84(c); // 800DD828
L_800DD82C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DD82C
  c->r[0]=0u+0x00000000u; // 800DD830
  c->r[3]=c->r[28]|c->r[28]; // 800DD834
  c->r[4]=c->r[29]|c->r[29]; // 800DD838
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DD83C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DD840
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DD844
  c->lr=0x800DD84Cu; f_8006306C(c); // 800DD848
  c->r[0]=R32(c->r[28]+0x000005BCu); // 800DD84C
  c->r[10]=c->r[31]|c->r[31]; // 800DD850
  c->r[3]=c->r[29]|c->r[29]; // 800DD854
  c->r[0]=c->r[0]|0x40000000u; // 800DD858
  W32(c->r[28]+0x000005BCu,c->r[0]); // 800DD85C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD860
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DD864
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DD868
  c->r[1]=c->r[10]|c->r[10]; // 800DD86C
  c->lr=c->r[0]; // 800DD870
  return; // 800DD874
}

// fn_800DD878
void f_800DD878(Ctx* __restrict c) {
  trace_call(0x800DD878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD878
  c->r[0]=c->lr; // 800DD87C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD880
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD884
  c->r[31]=c->r[4]|c->r[4]; // 800DD888
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD88C
  c->r[30]=c->r[3]|c->r[3]; // 800DD890
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD894
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD898
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DD89C
  c->r[4]=c->r[4]+0x00000008u; // 800DD8A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DD8A4
  c->r[3]=c->r[3]+0x00000008u; // 800DD8A8
  c->lr=0x800DD8B0u; f_8005CD7C(c); // 800DD8AC
  c->r[3]=c->r[30]+0x00000014u; // 800DD8B0
  c->r[4]=c->r[31]+0x00000014u; // 800DD8B4
  c->lr=0x800DD8BCu; f_8005CD7C(c); // 800DD8B8
  c->r[3]=c->r[30]+0x00000020u; // 800DD8BC
  c->r[4]=c->r[31]+0x00000020u; // 800DD8C0
  c->lr=0x800DD8C8u; f_8005CD7C(c); // 800DD8C4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800DD8C8
  c->r[3]=c->r[30]|c->r[30]; // 800DD8CC
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800DD8D0
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DD8D4
  W32(c->r[30]+0x00000030u,c->r[0]); // 800DD8D8
  c->r[0]=R32(c->r[31]+0x00000034u); // 800DD8DC
  W32(c->r[30]+0x00000034u,c->r[0]); // 800DD8E0
  c->r[0]=R32(c->r[31]+0x00000038u); // 800DD8E4
  W32(c->r[30]+0x00000038u,c->r[0]); // 800DD8E8
  c->r[0]=R8(c->r[31]+0x0000003Cu); // 800DD8EC
  W8(c->r[30]+0x0000003Cu,c->r[0]); // 800DD8F0
  c->r[0]=R32(c->r[31]+0x00000040u); // 800DD8F4
  W32(c->r[30]+0x00000040u,c->r[0]); // 800DD8F8
  c->r[0]=R32(c->r[31]+0x00000044u); // 800DD8FC
  W32(c->r[30]+0x00000044u,c->r[0]); // 800DD900
  c->r[0]=R32(c->r[31]+0x00000048u); // 800DD904
  W32(c->r[30]+0x00000048u,c->r[0]); // 800DD908
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD90C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DD910
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD914
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800DD918
  c->r[0]=R32(c->r[31]+0x00000054u); // 800DD91C
  W32(c->r[30]+0x00000054u,c->r[0]); // 800DD920
  c->r[0]=R32(c->r[31]+0x00000058u); // 800DD924
  W32(c->r[30]+0x00000058u,c->r[0]); // 800DD928
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800DD92C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 800DD930
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD934
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 800DD938
  c->r[0]=R32(c->r[31]+0x00000064u); // 800DD93C
  W32(c->r[30]+0x00000064u,c->r[0]); // 800DD940
  c->r[4]=R32(c->r[31]+0x00000068u); // 800DD944
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 800DD948
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 800DD94C
  W32(c->r[30]+0x00000068u,c->r[4]); // 800DD950
  c->r[0]=R8(c->r[31]+0x00000070u); // 800DD954
  W8(c->r[30]+0x00000070u,c->r[0]); // 800DD958
  c->r[0]=R8(c->r[31]+0x00000071u); // 800DD95C
  W8(c->r[30]+0x00000071u,c->r[0]); // 800DD960
  c->r[0]=R8(c->r[31]+0x00000072u); // 800DD964
  W8(c->r[30]+0x00000072u,c->r[0]); // 800DD968
  c->r[0]=R8(c->r[31]+0x00000073u); // 800DD96C
  W8(c->r[30]+0x00000073u,c->r[0]); // 800DD970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD974
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD97C
  c->lr=c->r[0]; // 800DD980
  c->r[1]=c->r[1]+0x00000010u; // 800DD984
  return; // 800DD988
}

// fn_800DD98C
void f_800DD98C(Ctx* __restrict c) {
  trace_call(0x800DD98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD98C
  c->r[0]=c->lr; // 800DD990
  c->r[5]=0u+0x0000002Cu; // 800DD994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD99C
  c->r[26]=c->r[3]|c->r[3]; // 800DD9A0
  c->r[27]=c->r[4]|c->r[4]; // 800DD9A4
  c->r[4]=0u+0x00000000u; // 800DD9A8
  c->r[3]=c->r[3]+0x000005C8u; // 800DD9AC
  c->lr=0x800DD9B4u; f_800043EC(c); // 800DD9B0
  c->r[3]=c->r[27]|c->r[27]; // 800DD9B4
  c->lr=0x800DD9BCu; f_802D93E8(c); // 800DD9B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD9BC
  if (crb(c,2)) { goto L_800DDAA0; } // 800DD9C0
  c->r[3]=c->r[27]|c->r[27]; // 800DD9C4
  c->r[4]=0u+0x00000008u; // 800DD9C8
  c->lr=0x800DD9D0u; f_802D9584(c); // 800DD9CC
  W32(c->r[26]+0x000005C8u,c->r[3]); // 800DD9D0
  c->r[3]=c->r[27]|c->r[27]; // 800DD9D4
  c->r[4]=0u+0x00000003u; // 800DD9D8
  c->lr=0x800DD9E0u; f_802D9584(c); // 800DD9DC
  W32(c->r[26]+0x000005CCu,c->r[3]); // 800DD9E0
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800DD9E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD9E8
  if (!crb(c,2)) { goto L_800DDA30; } // 800DD9EC
  c->r[31]=0u+0x80730000u; // 800DD9F0
  c->r[3]=c->r[31]+0x00005908u; // 800DD9F4
  c->lr=0x800DD9FCu; f_8009822C(c); // 800DD9F8
  c->r[6]=0u+0x806D0000u; // 800DD9FC
  c->r[4]=0u+0x80050000u; // 800DDA00
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800DDA04
  c->r[3]=c->r[31]+0x00005908u; // 800DDA08
  c->r[0]=c->r[6]+0x00000028u; // 800DDA0C
  c->r[5]=0u+0x80750000u; // 800DDA10
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800DDA14
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800DDA18
  c->r[5]=c->r[5]+0x00003968u; // 800DDA1C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800DDA20
  c->lr=0x800DDA28u; f_803A92B8(c); // 800DDA24
  c->r[0]=0u+0x00000001u; // 800DDA28
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800DDA2C
L_800DDA30:;
  c->r[4]=R32(c->r[26]+0x00000448u); // 800DDA30
  c->r[3]=0u+0x80730000u; // 800DDA34
  c->r[3]=c->r[3]+0x00005908u; // 800DDA38
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800DDA3C
  c->lr=0x800DDA44u; f_800992D4(c); // 800DDA40
  c->r[30]=c->r[3]|c->r[3]; // 800DDA44
  c->r[29]=0u+0x00000000u; // 800DDA48
  c->r[31]=0u+0x00000000u; // 800DDA4C
L_800DDA50:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DDA50
  c->r[3]=c->r[27]|c->r[27]; // 800DDA54
  c->r[4]=0u+0x00000005u; // 800DDA58
  if (crb(c,2)) { goto L_800DDA64; } // 800DDA5C
  c->r[4]=c->r[29]+0x0000000Cu; // 800DDA60
L_800DDA64:;
  c->lr=0x800DDA68u; f_802D9584(c); // 800DDA64
  c->r[28]=c->r[3]|c->r[3]; // 800DDA68
  c->lr=0x800DDA70u; f_803A91D4(c); // 800DDA6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA70
  if (crb(c,2)) { goto L_800DDA90; } // 800DDA74
  c->r[5]=c->r[26]+c->r[31]; // 800DDA78
  c->r[3]=c->r[30]|c->r[30]; // 800DDA7C
  c->r[4]=c->r[28]|c->r[28]; // 800DDA80
  c->r[6]=0u+0x00000000u; // 800DDA84
  c->r[5]=c->r[5]+0x000005D0u; // 800DDA88
  c->lr=0x800DDA90u; f_802D24C8(c); // 800DDA8C
L_800DDA90:;
  c->r[29]=c->r[29]+0x00000001u; // 800DDA90
  c->r[31]=c->r[31]+0x00000004u; // 800DDA94
  cmps(c,0,(int32_t)c->r[29],9); // 800DDA98
  if (crb(c,0)) { IRQCHK(c); goto L_800DDA50; } // 800DDA9C
L_800DDAA0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDAA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDAA4
  c->lr=c->r[0]; // 800DDAA8
  c->r[1]=c->r[1]+0x00000020u; // 800DDAAC
  return; // 800DDAB0
}

// fn_800DDAB4
void f_800DDAB4(Ctx* __restrict c) {
  trace_call(0x800DDAB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDAB4
  c->r[0]=c->lr; // 800DDAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDABC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDAC0
  c->r[30]=c->r[3]|c->r[3]; // 800DDAC4
  c->r[31]=0u+0x00000000u; // 800DDAC8
  c->r[0]=R32(c->r[2]+0xFFFFA564u); // 800DDACC
  c->r[3]=c->r[0]|c->r[0]; // 800DDAD0
  c->lr=0x800DDAD8u; f_803B393C(c); // 800DDAD4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDAD8
  if (!crb(c,2)) { goto L_800DDAF8; } // 800DDADC
  cmps(c,0,(int32_t)c->r[31],0); // 800DDAE0
  if (!crb(c,2)) { goto L_800DDAF8; } // 800DDAE4
  c->r[3]=c->r[30]+0x000005F4u; // 800DDAE8
  c->r[4]=0u+0x00000000u; // 800DDAEC
  c->r[5]=0u+0x00000001u; // 800DDAF0
  c->lr=0x800DDAF8u; f_8005DCA0(c); // 800DDAF4
L_800DDAF8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDAFC
  c->lr=c->r[0]; // 800DDB00
  c->r[1]=c->r[1]+0x00000010u; // 800DDB04
  return; // 800DDB08
}

// fn_800DDB0C
void f_800DDB0C(Ctx* __restrict c) {
  trace_call(0x800DDB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB0C
  c->r[0]=c->lr; // 800DDB10
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 800DDB14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDB18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDB1C
  c->r[0]=R32(c->r[4]+0x00000088u); // 800DDB20
  cmps(c,0,(int32_t)c->r[0],3); // 800DDB24
  if (!crb(c,2)) { goto L_800DDB34; } // 800DDB28
  c->r[3]=0u+0x00000001u; // 800DDB2C
  goto L_800DDB68; // 800DDB30
L_800DDB34:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800DDB34
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB38
  if (crb(c,2)) { goto L_800DDB64; } // 800DDB3C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DDB40
  c->lr=0x800DDB48u; f_800DBFC0(c); // 800DDB44
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800DDB48
  if (crb(c,2)) { goto L_800DDB5C; } // 800DDB4C
  c->lr=0x800DDB54u; f_800DBF1C(c); // 800DDB50
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800DDB54
  if (!crb(c,2)) { goto L_800DDB64; } // 800DDB58
L_800DDB5C:;
  c->r[3]=0u+0x00000001u; // 800DDB5C
  goto L_800DDB68; // 800DDB60
L_800DDB64:;
  c->r[3]=0u+0x00000000u; // 800DDB64
L_800DDB68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDB68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDB6C
  c->lr=c->r[0]; // 800DDB70
  c->r[1]=c->r[1]+0x00000010u; // 800DDB74
  return; // 800DDB78
}

// fn_800DDB7C
void f_800DDB7C(Ctx* __restrict c) {
  trace_call(0x800DDB7Cu);
  c->r[0]=R32(c->r[3]+0x000005BCu); // 800DDB7C
  c->r[3]=rotl(c->r[0],4)&0x00000001u; // 800DDB80
  return; // 800DDB84
}

// fn_800DDB88
void f_800DDB88(Ctx* __restrict c) {
  trace_call(0x800DDB88u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB88
  c->r[0]=c->lr; // 800DDB8C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DDB90
  c->r[11]=c->r[1]+0x00000070u; // 800DDB94
  c->lr=0x800DDB9Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDB98
  c->r[31]=c->r[1]|c->r[1]; // 800DDB9C
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800DDBA0
  c->r[29]=c->r[3]|c->r[3]; // 800DDBA4
  c->r[3]=c->r[4]+0x00000004u; // 800DDBA8
  c->lr=0x800DDBB0u; f_800A097C(c); // 800DDBAC
  cmps(c,0,(int32_t)c->r[3],0); // 800DDBB0
  if (crb(c,2)) { goto L_800DDBF4; } // 800DDBB4
  c->r[0]=0u+0x00000001u; // 800DDBB8
  W32(c->r[29]+0x000005C0u,c->r[0]); // 800DDBBC
  c->r[3]=c->r[29]|c->r[29]; // 800DDBC0
  c->lr=0x800DDBC8u; f_800DFACC(c); // 800DDBC4
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDBC8
  c->r[3]=c->r[31]+0x00000010u; // 800DDBCC
  c->lr=0x800DDBD4u; f_800C998C(c); // 800DDBD0
  c->r[28]=c->r[3]|c->r[3]; // 800DDBD4
  c->r[4]=c->r[29]|c->r[29]; // 800DDBD8
  c->r[3]=c->r[31]+0x0000001Cu; // 800DDBDC
  c->lr=0x800DDBE4u; f_80061A48(c); // 800DDBE0
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800DDBE4
  c->r[5]=c->r[28]|c->r[28]; // 800DDBE8
  c->r[4]=c->r[31]+0x0000001Cu; // 800DDBEC
  c->lr=0x800DDBF4u; f_800C2D1C(c); // 800DDBF0
L_800DDBF4:;
  c->r[27]=R32(c->r[29]+0x000005C8u); // 800DDBF4
  cmps(c,0,(int32_t)c->r[27],0); // 800DDBF8
  if (crb(c,2)) { goto L_800DDE38; } // 800DDBFC
  c->r[28]=0u+0x80690000u; // 800DDC00
  c->r[4]=c->r[27]|c->r[27]; // 800DDC04
  c->r[28]=c->r[28]+0xFFFFEA04u; // 800DDC08
  c->r[30]=0u+0x00000000u; // 800DDC0C
  c->r[3]=c->r[28]+0x00000001u; // 800DDC10
  c->r[26]=0u+0x00000000u; // 800DDC14
  c->lr=0x800DDC1Cu; f_803B393C(c); // 800DDC18
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC1C
  if (!crb(c,2)) { goto L_800DDC2C; } // 800DDC20
  c->r[30]=0u+0x0000445Cu; // 800DDC24
  goto L_800DDCC0; // 800DDC28
L_800DDC2C:;
  c->r[4]=c->r[27]|c->r[27]; // 800DDC2C
  c->r[3]=c->r[28]+0x0000000Cu; // 800DDC30
  c->lr=0x800DDC38u; f_803B393C(c); // 800DDC34
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC38
  if (!crb(c,2)) { goto L_800DDC48; } // 800DDC3C
  c->r[30]=0u+0x00004268u; // 800DDC40
  goto L_800DDCC0; // 800DDC44
L_800DDC48:;
  c->r[4]=c->r[27]|c->r[27]; // 800DDC48
  c->r[3]=c->r[28]+0x00000014u; // 800DDC4C
  c->lr=0x800DDC54u; f_803B393C(c); // 800DDC50
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC54
  if (!crb(c,2)) { goto L_800DDC64; } // 800DDC58
  c->r[30]=0u+0x000043F9u; // 800DDC5C
  goto L_800DDCC0; // 800DDC60
L_800DDC64:;
  c->r[4]=c->r[27]|c->r[27]; // 800DDC64
  c->r[3]=c->r[28]+0x0000001Cu; // 800DDC68
  c->lr=0x800DDC70u; f_803B393C(c); // 800DDC6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC70
  if (!crb(c,2)) { goto L_800DDC84; } // 800DDC74
  c->r[30]=0u+0x00004272u; // 800DDC78
  c->r[26]=0u+0x00000003u; // 800DDC7C
  goto L_800DDCC0; // 800DDC80
L_800DDC84:;
  c->r[4]=c->r[27]|c->r[27]; // 800DDC84
  c->r[3]=c->r[28]+0x00000021u; // 800DDC88
  c->lr=0x800DDC90u; f_803B393C(c); // 800DDC8C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC90
  if (!crb(c,2)) { goto L_800DDCA4; } // 800DDC94
  c->r[30]=0u+0x00004402u; // 800DDC98
  c->r[26]=0u+0x00000005u; // 800DDC9C
  goto L_800DDCC0; // 800DDCA0
L_800DDCA4:;
  c->r[4]=c->r[27]|c->r[27]; // 800DDCA4
  c->r[3]=c->r[28]+0x00000026u; // 800DDCA8
  c->lr=0x800DDCB0u; f_803B393C(c); // 800DDCAC
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCB0
  if (!crb(c,2)) { goto L_800DDCC0; } // 800DDCB4
  c->r[30]=0u+0x00004403u; // 800DDCB8
  c->r[26]=0u+0x00000006u; // 800DDCBC
L_800DDCC0:;
  c->r[0]=c->r[30]+0xFFFFBBFEu; // 800DDCC0
  cmpu(c,0,c->r[0],0x00000001u); // 800DDCC4
  if (!crb(c,1)) { goto L_800DDCD4; } // 800DDCC8
  cmps(c,0,(int32_t)c->r[30],17401); // 800DDCCC
  if (!crb(c,2)) { goto L_800DDCE0; } // 800DDCD0
L_800DDCD4:;
  c->r[0]=0u+0x00000001u; // 800DDCD4
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DDCD8
  goto L_800DDCE8; // 800DDCDC
L_800DDCE0:;
  c->r[0]=0u+0x00000000u; // 800DDCE0
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DDCE4
L_800DDCE8:;
  c->r[0]=c->r[30]+0xFFFFBBFEu; // 800DDCE8
  cmpu(c,0,c->r[0],0x00000001u); // 800DDCEC
  if (!crb(c,1)) { goto L_800DDE00; } // 800DDCF0
  cmps(c,0,(int32_t)c->r[30],17500); // 800DDCF4
  if (crb(c,2)) { goto L_800DDD18; } // 800DDCF8
  cmps(c,0,(int32_t)c->r[30],17000); // 800DDCFC
  if (crb(c,2)) { goto L_800DDD88; } // 800DDD00
  cmps(c,0,(int32_t)c->r[30],17401); // 800DDD04
  if (crb(c,2)) { goto L_800DDD88; } // 800DDD08
  cmps(c,0,(int32_t)c->r[30],17010); // 800DDD0C
  if (crb(c,2)) { goto L_800DDE00; } // 800DDD10
  goto L_800DDE2C; // 800DDD14
L_800DDD18:;
  c->lr=0x800DDD1Cu; f_800DC770(c); // 800DDD18
  c->r[4]=c->r[3]|c->r[3]; // 800DDD1C
  c->r[3]=c->r[29]|c->r[29]; // 800DDD20
  c->lr=0x800DDD28u; f_80062F4C(c); // 800DDD24
  c->r[0]=R8(c->r[29]+0x00000010u); // 800DDD28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DDD2C
  c->r[3]=c->r[29]+c->r[0]; // 800DDD30
  c->r[30]=R32(c->r[3]+0x00000014u); // 800DDD34
  cmps(c,0,(int32_t)c->r[30],0); // 800DDD38
  if (crb(c,2)) { goto L_800DDD64; } // 800DDD3C
  c->r[28]=0u+0x00000000u; // 800DDD40
  W32(c->r[31]+0x00000054u,c->r[1]); // 800DDD44
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 800DDD48
  c->lr=0x800DDD50u; f_800DC770(c); // 800DDD4C
  W32(c->r[30]+0x00000000u,c->r[3]); // 800DDD50
  c->r[0]=c->r[13]+0xFFFF84B8u; // 800DDD54
  W32(c->r[30]+0x00000004u,c->r[0]); // 800DDD58
  W32(c->r[30]+0x00000008u,c->r[28]); // 800DDD5C
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 800DDD60
L_800DDD64:;
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DDD64
  c->r[0]=0u+0x00000000u; // 800DDD68
  c->r[3]=c->r[29]|c->r[29]; // 800DDD6C
  c->r[4]=c->r[30]|c->r[30]; // 800DDD70
  W32(c->r[30]+0x00000008u,c->r[0]); // 800DDD74
  c->r[0]=R32(c->r[29]+0x00000004u); // 800DDD78
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800DDD7C
  c->lr=0x800DDD84u; f_8006306C(c); // 800DDD80
  goto L_800DDE40; // 800DDD84
L_800DDD88:;
  c->lr=0x800DDD8Cu; f_800DC6CC(c); // 800DDD88
  c->r[4]=c->r[3]|c->r[3]; // 800DDD8C
  c->r[3]=c->r[29]|c->r[29]; // 800DDD90
  c->lr=0x800DDD98u; f_80062F4C(c); // 800DDD94
  c->r[0]=R8(c->r[29]+0x00000010u); // 800DDD98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DDD9C
  c->r[3]=c->r[29]+c->r[0]; // 800DDDA0
  c->r[27]=R32(c->r[3]+0x00000014u); // 800DDDA4
  cmps(c,0,(int32_t)c->r[27],0); // 800DDDA8
  if (crb(c,2)) { goto L_800DDDD8; } // 800DDDAC
  c->r[28]=0u+0x00000000u; // 800DDDB0
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800DDDB4
  W8(c->r[31]+0x00000008u,c->r[28]); // 800DDDB8
  c->lr=0x800DDDC0u; f_800DC6CC(c); // 800DDDBC
  W32(c->r[27]+0x00000000u,c->r[3]); // 800DDDC0
  c->r[0]=c->r[13]+0xFFFF84B4u; // 800DDDC4
  W32(c->r[27]+0x00000004u,c->r[0]); // 800DDDC8
  W32(c->r[27]+0x00000008u,c->r[28]); // 800DDDCC
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800DDDD0
  W32(c->r[27]+0x00000010u,c->r[28]); // 800DDDD4
L_800DDDD8:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800DDDD8
  c->r[0]=0u+0x00000000u; // 800DDDDC
  c->r[3]=c->r[29]|c->r[29]; // 800DDDE0
  c->r[4]=c->r[27]|c->r[27]; // 800DDDE4
  W32(c->r[27]+0x00000008u,c->r[0]); // 800DDDE8
  c->r[0]=R32(c->r[29]+0x00000004u); // 800DDDEC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800DDDF0
  c->lr=0x800DDDF8u; f_8006306C(c); // 800DDDF4
  W32(c->r[27]+0x00000010u,c->r[30]); // 800DDDF8
  goto L_800DDE40; // 800DDDFC
L_800DDE00:;
  c->r[3]=c->r[29]|c->r[29]; // 800DDE00
  c->lr=0x800DDE08u; f_800DDE60(c); // 800DDE04
  W32(c->r[3]+0x00000010u,c->r[30]); // 800DDE08
  c->r[3]=c->r[29]+0x000005FCu; // 800DDE0C
  c->r[4]=0u+0x00000000u; // 800DDE10
  c->r[5]=0u+0x00000040u; // 800DDE14
  c->lr=0x800DDE1Cu; f_800043EC(c); // 800DDE18
  c->r[0]=0u+0x00000000u; // 800DDE1C
  W32(c->r[29]+0x0000063Cu,c->r[0]); // 800DDE20
  W32(c->r[29]+0x000005FCu,c->r[26]); // 800DDE24
  goto L_800DDE40; // 800DDE28
L_800DDE2C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DDE2C
  c->lr=0x800DDE34u; f_800DFD8C(c); // 800DDE30
  goto L_800DDE40; // 800DDE34
L_800DDE38:;
  c->r[3]=c->r[29]|c->r[29]; // 800DDE38
  c->lr=0x800DDE40u; f_800DFD8C(c); // 800DDE3C
L_800DDE40:;
  c->r[10]=c->r[31]|c->r[31]; // 800DDE40
  c->r[11]=c->r[10]+0x00000070u; // 800DDE44
  c->lr=0x800DDE4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDE48
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DDE4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DDE50
  c->r[1]=c->r[10]|c->r[10]; // 800DDE54
  c->lr=c->r[0]; // 800DDE58
  return; // 800DDE5C
}

// fn_800DDE60
void f_800DDE60(Ctx* __restrict c) {
  trace_call(0x800DDE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDE60
  c->r[0]=c->lr; // 800DDE64
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DDE68
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDE6C
  c->r[31]=c->r[1]|c->r[1]; // 800DDE70
  c->r[28]=c->r[3]|c->r[3]; // 800DDE74
  c->lr=0x800DDE7Cu; f_800DC43C(c); // 800DDE78
  c->r[4]=c->r[3]|c->r[3]; // 800DDE7C
  c->r[3]=c->r[28]|c->r[28]; // 800DDE80
  c->lr=0x800DDE88u; f_80062F4C(c); // 800DDE84
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DDE88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DDE8C
  c->r[3]=c->r[28]+c->r[0]; // 800DDE90
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DDE94
  cmps(c,0,(int32_t)c->r[29],0); // 800DDE98
  if (crb(c,2)) { goto L_800DDEC8; } // 800DDE9C
  c->r[30]=0u+0x00000000u; // 800DDEA0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DDEA4
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DDEA8
  c->lr=0x800DDEB0u; f_800DC43C(c); // 800DDEAC
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DDEB0
  c->r[0]=c->r[13]+0xFFFF84A4u; // 800DDEB4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DDEB8
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DDEBC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DDEC0
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DDEC4
L_800DDEC8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DDEC8
  c->r[0]=0u+0x00000000u; // 800DDECC
  c->r[3]=c->r[28]|c->r[28]; // 800DDED0
  c->r[4]=c->r[29]|c->r[29]; // 800DDED4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DDED8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DDEDC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DDEE0
  c->lr=0x800DDEE8u; f_8006306C(c); // 800DDEE4
  c->r[10]=c->r[31]|c->r[31]; // 800DDEE8
  c->r[3]=c->r[29]|c->r[29]; // 800DDEEC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDEF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DDEF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DDEF8
  c->r[1]=c->r[10]|c->r[10]; // 800DDEFC
  c->lr=c->r[0]; // 800DDF00
  return; // 800DDF04
}

// fn_800DDF08
void f_800DDF08(Ctx* __restrict c) {
  trace_call(0x800DDF08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDF08
  c->r[0]=c->lr; // 800DDF0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DDF10
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DDF14
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DDF18
  c->r[30]=c->r[3]|c->r[3]; // 800DDF1C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800DDF20
  cmps(c,0,(int32_t)c->r[4],0); // 800DDF24
  if (crb(c,2)) { goto L_800DDF34; } // 800DDF28
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DDF2C
  goto L_800DDF38; // 800DDF30
L_800DDF34:;
  c->r[0]=0u+0x00000000u; // 800DDF34
L_800DDF38:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DDF38
  if (!crb(c,2)) { goto L_800DDFB8; } // 800DDF3C
  c->r[3]=c->r[30]|c->r[30]; // 800DDF40
  c->r[4]=0u+0x0000445Cu; // 800DDF44
  c->r[5]=0u+0x00000001u; // 800DDF48
  c->lr=0x800DDF50u; f_80064744(c); // 800DDF4C
  c->r[3]=c->r[30]|c->r[30]; // 800DDF50
  c->r[4]=0u+0x00000000u; // 800DDF54
  c->lr=0x800DDF5Cu; f_8005EA70(c); // 800DDF58
  c->r[3]=c->r[30]+0x0000066Cu; // 800DDF5C
  c->lr=0x800DDF64u; f_800A7AE8(c); // 800DDF60
  {uint32_t ea=c->r[2]+0xFFFFA568u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDF64
  c->r[3]=c->r[30]+0x0000066Cu; // 800DDF68
  {uint32_t ea=c->r[2]+0xFFFFA56Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DDF6C
  c->f[2]=c->f[1]; // 800DDF70
  c->lr=0x800DDF78u; f_800A7B08(c); // 800DDF74
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDF78
  c->r[3]=c->r[1]+0x0000002Cu; // 800DDF7C
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDF80
  c->f[3]=c->f[1]; // 800DDF84
  c->lr=0x800DDF8Cu; f_8005FD70(c); // 800DDF88
  c->r[3]=c->r[30]+0x0000064Cu; // 800DDF8C
  c->r[4]=c->r[1]+0x0000002Cu; // 800DDF90
  c->lr=0x800DDF98u; f_8005DC84(c); // 800DDF94
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDF98
  c->r[3]=c->r[1]+0x00000008u; // 800DDF9C
  c->f[2]=c->f[1]; // 800DDFA0
  c->f[3]=c->f[1]; // 800DDFA4
  c->lr=0x800DDFACu; f_8005FD70(c); // 800DDFA8
  c->r[4]=c->r[3]|c->r[3]; // 800DDFAC
  c->r[3]=c->r[30]+0x00000640u; // 800DDFB0
  c->lr=0x800DDFB8u; f_8005DC84(c); // 800DDFB4
L_800DDFB8:;
  c->r[3]=c->r[30]+0x00000354u; // 800DDFB8
  c->lr=0x800DDFC0u; f_800C9374(c); // 800DDFBC
  cmps(c,0,(int32_t)c->r[3],17500); // 800DDFC0
  if (!crb(c,2)) { goto L_800DE008; } // 800DDFC4
  c->r[3]=c->r[30]|c->r[30]; // 800DDFC8
  c->lr=0x800DDFD0u; f_800E0AE4(c); // 800DDFCC
  c->r[3]=c->r[30]|c->r[30]; // 800DDFD0
  c->lr=0x800DDFD8u; f_8005EA80(c); // 800DDFD4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDFD8
  if (crb(c,2)) { goto L_800DE05C; } // 800DDFDC
  c->r[3]=c->r[30]|c->r[30]; // 800DDFE0
  c->r[4]=0u+0x0000445Du; // 800DDFE4
  c->r[5]=0u+0x00000001u; // 800DDFE8
  c->lr=0x800DDFF0u; f_80064744(c); // 800DDFEC
  c->r[3]=c->r[30]|c->r[30]; // 800DDFF0
  c->r[4]=0u+0x00000001u; // 800DDFF4
  c->lr=0x800DDFFCu; f_8005EA70(c); // 800DDFF8
  c->r[0]=0u+0x00000000u; // 800DDFFC
  W32(c->r[30]+0x000005C4u,c->r[0]); // 800DE000
  goto L_800DE05C; // 800DE004
L_800DE008:;
  cmps(c,0,(int32_t)c->r[3],17501); // 800DE008
  if (!crb(c,2)) { goto L_800DE05C; } // 800DE00C
  c->r[3]=c->r[30]+0x00000354u; // 800DE010
  c->lr=0x800DE018u; f_800667AC(c); // 800DE014
  cmps(c,0,(int32_t)c->r[3],0); // 800DE018
  if (crb(c,2)) { goto L_800DE05C; } // 800DE01C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE020
  c->r[3]=c->r[1]+0x00000014u; // 800DE024
  c->lr=0x800DE02Cu; f_800C998C(c); // 800DE028
  c->r[31]=c->r[3]|c->r[3]; // 800DE02C
  c->r[4]=c->r[30]|c->r[30]; // 800DE030
  c->r[3]=c->r[1]+0x00000020u; // 800DE034
  c->lr=0x800DE03Cu; f_80061A48(c); // 800DE038
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DE03C
  c->r[5]=c->r[31]|c->r[31]; // 800DE040
  c->r[4]=c->r[1]+0x00000020u; // 800DE044
  c->lr=0x800DE04Cu; f_800C2D1C(c); // 800DE048
  c->r[3]=c->r[30]|c->r[30]; // 800DE04C
  c->lr=0x800DE054u; f_800DFACC(c); // 800DE050
  c->r[3]=c->r[30]|c->r[30]; // 800DE054
  c->lr=0x800DE05Cu; f_800DFD8C(c); // 800DE058
L_800DE05C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DE05C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DE060
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DE064
  c->lr=c->r[0]; // 800DE068
  c->r[1]=c->r[1]+0x00000040u; // 800DE06C
  return; // 800DE070
}

// fn_800DE074
void f_800DE074(Ctx* __restrict c) {
  trace_call(0x800DE074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE074
  c->r[0]=c->lr; // 800DE078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE07C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE080
  c->r[30]=c->r[3]|c->r[3]; // 800DE084
  c->r[31]=c->r[4]|c->r[4]; // 800DE088
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE08C
  cmps(c,0,(int32_t)c->r[5],0); // 800DE090
  if (crb(c,2)) { goto L_800DE0A0; } // 800DE094
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DE098
  goto L_800DE0A4; // 800DE09C
L_800DE0A0:;
  c->r[0]=0u+0x00000000u; // 800DE0A0
L_800DE0A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE0A4
  if (!crb(c,2)) { goto L_800DE0D0; } // 800DE0A8
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DE0AC
  c->r[3]=c->r[3]+0x00000354u; // 800DE0B0
  c->lr=0x800DE0B8u; f_800667BC(c); // 800DE0B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DE0B8
  if (!crb(c,2)) { goto L_800DE0D0; } // 800DE0BC
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE0C0
  c->r[3]=c->r[30]|c->r[30]; // 800DE0C4
  c->r[5]=0u+0x00000001u; // 800DE0C8
  c->lr=0x800DE0D0u; f_80064744(c); // 800DE0CC
L_800DE0D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE0D0
  c->lr=0x800DE0D8u; f_800DF8F4(c); // 800DE0D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE0D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE0DC
  c->lr=c->r[0]; // 800DE0E0
  c->r[1]=c->r[1]+0x00000010u; // 800DE0E4
  return; // 800DE0E8
}

// fn_800DE0EC
void f_800DE0EC(Ctx* __restrict c) {
  trace_call(0x800DE0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE0EC
  c->r[0]=c->lr; // 800DE0F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DE0F4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800DE0F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800DE0FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800DE100
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800DE104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE108
  c->r[31]=c->r[4]|c->r[4]; // 800DE10C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE110
  c->r[30]=c->r[3]|c->r[3]; // 800DE114
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE118
  cmps(c,0,(int32_t)c->r[5],0); // 800DE11C
  if (crb(c,2)) { goto L_800DE12C; } // 800DE120
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DE124
  goto L_800DE130; // 800DE128
L_800DE12C:;
  c->r[0]=0u+0x00000000u; // 800DE12C
L_800DE130:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE130
  if (!crb(c,2)) { goto L_800DE1B8; } // 800DE134
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DE138
  c->r[3]=c->r[3]+0x00000354u; // 800DE13C
  c->lr=0x800DE144u; f_800667BC(c); // 800DE140
  cmps(c,0,(int32_t)c->r[3],0); // 800DE144
  if (!crb(c,2)) { goto L_800DE15C; } // 800DE148
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE14C
  c->r[3]=c->r[30]|c->r[30]; // 800DE150
  c->r[5]=0u+0x00000001u; // 800DE154
  c->lr=0x800DE15Cu; f_80064744(c); // 800DE158
L_800DE15C:;
  c->r[3]=R32(c->r[30]+0x00000434u); // 800DE15C
  c->r[4]=0u+0x00000000u; // 800DE160
  c->r[3]=c->r[3]+0x00000030u; // 800DE164
  c->lr=0x800DE16Cu; f_802D94E8(c); // 800DE168
  c->r[3]=R32(c->r[30]+0x00000434u); // 800DE16C
  c->f[30]=c->f[1]; // 800DE170
  c->r[4]=0u+0x00000001u; // 800DE174
  c->r[3]=c->r[3]+0x00000030u; // 800DE178
  c->lr=0x800DE180u; f_802D94E8(c); // 800DE17C
  c->f[31]=c->f[1]; // 800DE180
  c->lr=0x800DE188u; f_803B220C(c); // 800DE184
  c->r[3]=c->r[3]^0x80000000u; // 800DE188
  c->r[0]=0u+0x43300000u; // 800DE18C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DE190
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[30]); // 800DE194
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[3]=RF64(ea);} // 800DE198
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE19C
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800DE1A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DE1A8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DE1AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[30])); // 800DE1B0
  {uint32_t ea=c->r[30]+0x0000055Cu; WF32(ea,c->f[0]);} // 800DE1B4
L_800DE1B8:;
  {uint32_t ea=c->r[30]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE1B8
  {uint32_t ea=c->r[30]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1BC
  fcmp(c,0,c->f[0],c->f[1]); // 800DE1C0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DE1C4
  if (!crb(c,2)) { goto L_800DE1D4; } // 800DE1C8
  c->r[3]=c->r[30]|c->r[30]; // 800DE1CC
  c->lr=0x800DE1D4u; f_800DFD8C(c); // 800DE1D0
L_800DE1D4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DE1D4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800DE1D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800DE1DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800DE1E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800DE1E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE1E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE1EC
  c->lr=c->r[0]; // 800DE1F0
  c->r[1]=c->r[1]+0x00000040u; // 800DE1F4
  return; // 800DE1F8
}

// fn_800DE1FC
void f_800DE1FC(Ctx* __restrict c) {
  trace_call(0x800DE1FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE1FC
  c->r[0]=c->lr; // 800DE200
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE204
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE208
  c->r[29]=c->r[3]|c->r[3]; // 800DE20C
  c->r[30]=c->r[4]|c->r[4]; // 800DE210
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE214
  cmps(c,0,(int32_t)c->r[5],0); // 800DE218
  if (crb(c,2)) { goto L_800DE228; } // 800DE21C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DE220
  goto L_800DE22C; // 800DE224
L_800DE228:;
  c->r[0]=0u+0x00000000u; // 800DE228
L_800DE22C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE22C
  if (!crb(c,2)) { goto L_800DE280; } // 800DE230
  c->r[0]=R32(c->r[3]+0x000005C4u); // 800DE234
  c->r[31]=0u+0x00000000u; // 800DE238
  cmps(c,0,(int32_t)c->r[0],0); // 800DE23C
  if (crb(c,2)) { goto L_800DE250; } // 800DE240
  cmps(c,0,(int32_t)c->r[0],1); // 800DE244
  if (crb(c,2)) { goto L_800DE258; } // 800DE248
  goto L_800DE25C; // 800DE24C
L_800DE250:;
  c->r[31]=0u+0x00004268u; // 800DE250
  goto L_800DE25C; // 800DE254
L_800DE258:;
  c->r[31]=0u+0x000043F9u; // 800DE258
L_800DE25C:;
  c->r[4]=c->r[31]|c->r[31]; // 800DE25C
  c->r[3]=c->r[3]+0x00000354u; // 800DE260
  c->lr=0x800DE268u; f_800667BC(c); // 800DE264
  cmps(c,0,(int32_t)c->r[3],0); // 800DE268
  if (!crb(c,2)) { goto L_800DE280; } // 800DE26C
  c->r[3]=c->r[29]|c->r[29]; // 800DE270
  c->r[4]=c->r[31]|c->r[31]; // 800DE274
  c->r[5]=0u+0x00000001u; // 800DE278
  c->lr=0x800DE280u; f_80064744(c); // 800DE27C
L_800DE280:;
  c->r[3]=c->r[29]|c->r[29]; // 800DE280
  c->lr=0x800DE288u; f_8006117C(c); // 800DE284
  cmps(c,0,(int32_t)c->r[3],0); // 800DE288
  if (crb(c,2)) { goto L_800DE29C; } // 800DE28C
  c->r[4]=R32(c->r[30]+0x00000010u); // 800DE290
  c->r[3]=c->r[29]|c->r[29]; // 800DE294
  c->lr=0x800DE29Cu; f_800E0580(c); // 800DE298
L_800DE29C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE29C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE2A0
  c->lr=c->r[0]; // 800DE2A4
  c->r[1]=c->r[1]+0x00000020u; // 800DE2A8
  return; // 800DE2AC
}

// fn_800DE2B0
void f_800DE2B0(Ctx* __restrict c) {
  trace_call(0x800DE2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE2B0
  c->r[0]=c->lr; // 800DE2B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DE2B8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DE2BC
  c->r[31]=c->r[4]|c->r[4]; // 800DE2C0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DE2C4
  c->r[30]=c->r[3]|c->r[3]; // 800DE2C8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE2CC
  cmps(c,0,(int32_t)c->r[5],0); // 800DE2D0
  if (crb(c,2)) { goto L_800DE2E0; } // 800DE2D4
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DE2D8
  goto L_800DE2E4; // 800DE2DC
L_800DE2E0:;
  c->r[0]=0u+0x00000000u; // 800DE2E0
L_800DE2E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE2E4
  if (!crb(c,2)) { goto L_800DE384; } // 800DE2E8
  c->r[0]=R32(c->r[4]+0x00000014u); // 800DE2EC
  cmps(c,0,(int32_t)c->r[0],0); // 800DE2F0
  if (crb(c,2)) { goto L_800DE30C; } // 800DE2F4
  cmps(c,0,(int32_t)c->r[0],1); // 800DE2F8
  if (crb(c,2)) { goto L_800DE340; } // 800DE2FC
  cmps(c,0,(int32_t)c->r[0],2); // 800DE300
  if (crb(c,2)) { goto L_800DE354; } // 800DE304
  goto L_800DE384; // 800DE308
L_800DE30C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE30C
  c->lr=0x800DE314u; f_8006117C(c); // 800DE310
  cmps(c,0,(int32_t)c->r[3],0); // 800DE314
  if (crb(c,2)) { goto L_800DE32C; } // 800DE318
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE31C
  c->r[3]=c->r[30]|c->r[30]; // 800DE320
  c->lr=0x800DE328u; f_800E0580(c); // 800DE324
  goto L_800DE424; // 800DE328
L_800DE32C:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800DE32C
  c->r[3]=c->r[30]|c->r[30]; // 800DE330
  c->lr=0x800DE338u; f_800DE4E4(c); // 800DE334
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DE338
  goto L_800DE424; // 800DE33C
L_800DE340:;
  c->r[31]=R32(c->r[4]+0x00000010u); // 800DE340
  c->r[3]=c->r[30]|c->r[30]; // 800DE344
  c->lr=0x800DE34Cu; f_800DE43C(c); // 800DE348
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DE34C
  goto L_800DE424; // 800DE350
L_800DE354:;
  c->r[0]=R32(c->r[3]+0x000005C4u); // 800DE354
  cmps(c,0,(int32_t)c->r[0],0); // 800DE358
  if (crb(c,2)) { goto L_800DE36C; } // 800DE35C
  cmps(c,0,(int32_t)c->r[0],1); // 800DE360
  if (crb(c,2)) { goto L_800DE374; } // 800DE364
  goto L_800DE378; // 800DE368
L_800DE36C:;
  c->r[4]=0u+0x00004273u; // 800DE36C
  goto L_800DE378; // 800DE370
L_800DE374:;
  c->r[4]=0u+0x00004402u; // 800DE374
L_800DE378:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE378
  c->r[5]=0u+0x00000001u; // 800DE37C
  c->lr=0x800DE384u; f_80064744(c); // 800DE380
L_800DE384:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE384
  c->r[3]=c->r[30]|c->r[30]; // 800DE388
  c->lr=0x800DE390u; f_800E0450(c); // 800DE38C
  cmps(c,0,(int32_t)c->r[3],0); // 800DE390
  if (crb(c,2)) { goto L_800DE3A4; } // 800DE394
  cmps(c,0,(int32_t)c->r[3],1); // 800DE398
  if (crb(c,2)) { goto L_800DE3D8; } // 800DE39C
  goto L_800DE3E8; // 800DE3A0
L_800DE3A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE3A4
  c->lr=0x800DE3ACu; f_8006117C(c); // 800DE3A8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE3AC
  if (crb(c,2)) { goto L_800DE3C4; } // 800DE3B0
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE3B4
  c->r[3]=c->r[30]|c->r[30]; // 800DE3B8
  c->lr=0x800DE3C0u; f_800E0580(c); // 800DE3BC
  goto L_800DE3E8; // 800DE3C0
L_800DE3C4:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800DE3C4
  c->r[3]=c->r[30]|c->r[30]; // 800DE3C8
  c->lr=0x800DE3D0u; f_800DE4E4(c); // 800DE3CC
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DE3D0
  goto L_800DE3E8; // 800DE3D4
L_800DE3D8:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800DE3D8
  c->r[3]=c->r[30]|c->r[30]; // 800DE3DC
  c->lr=0x800DE3E4u; f_800DE43C(c); // 800DE3E0
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DE3E4
L_800DE3E8:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DE3E8
  c->r[3]=c->r[30]|c->r[30]; // 800DE3EC
  c->r[4]=c->r[1]+0x00000018u; // 800DE3F0
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DE3F4
  c->ctr=c->r[12]; // 800DE3F8
  if (true) { c->lr=0x800DE400u; dispatch(c,c->ctr); } // 800DE3FC
  c->r[4]=c->r[3]|c->r[3]; // 800DE400
  c->r[3]=c->r[1]+0x00000008u; // 800DE404
  c->lr=0x800DE40Cu; f_80060878(c); // 800DE408
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE40C
  c->r[3]=c->r[30]|c->r[30]; // 800DE410
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE414
  c->r[4]=c->r[1]+0x00000008u; // 800DE418
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE41C
  c->lr=0x800DE424u; f_800634E8(c); // 800DE420
L_800DE424:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DE424
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DE428
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DE42C
  c->lr=c->r[0]; // 800DE430
  c->r[1]=c->r[1]+0x00000050u; // 800DE434
  return; // 800DE438
}

// fn_800DE43C
void f_800DE43C(Ctx* __restrict c) {
  trace_call(0x800DE43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE43C
  c->r[0]=c->lr; // 800DE440
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DE444
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE448
  c->r[31]=c->r[1]|c->r[1]; // 800DE44C
  c->r[28]=c->r[3]|c->r[3]; // 800DE450
  c->lr=0x800DE458u; f_800DC1AC(c); // 800DE454
  c->r[4]=c->r[3]|c->r[3]; // 800DE458
  c->r[3]=c->r[28]|c->r[28]; // 800DE45C
  c->lr=0x800DE464u; f_80062F4C(c); // 800DE460
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DE464
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE468
  c->r[3]=c->r[28]+c->r[0]; // 800DE46C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DE470
  cmps(c,0,(int32_t)c->r[29],0); // 800DE474
  if (crb(c,2)) { goto L_800DE4A4; } // 800DE478
  c->r[30]=0u+0x00000000u; // 800DE47C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DE480
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DE484
  c->lr=0x800DE48Cu; f_800DC1AC(c); // 800DE488
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DE48C
  c->r[0]=c->r[13]+0xFFFF8494u; // 800DE490
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DE494
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DE498
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DE49C
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DE4A0
L_800DE4A4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DE4A4
  c->r[0]=0u+0x00000000u; // 800DE4A8
  c->r[3]=c->r[28]|c->r[28]; // 800DE4AC
  c->r[4]=c->r[29]|c->r[29]; // 800DE4B0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DE4B4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DE4B8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DE4BC
  c->lr=0x800DE4C4u; f_8006306C(c); // 800DE4C0
  c->r[10]=c->r[31]|c->r[31]; // 800DE4C4
  c->r[3]=c->r[29]|c->r[29]; // 800DE4C8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE4CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DE4D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DE4D4
  c->r[1]=c->r[10]|c->r[10]; // 800DE4D8
  c->lr=c->r[0]; // 800DE4DC
  return; // 800DE4E0
}

// fn_800DE4E4
void f_800DE4E4(Ctx* __restrict c) {
  trace_call(0x800DE4E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE4E4
  c->r[0]=c->lr; // 800DE4E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DE4EC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE4F0
  c->r[31]=c->r[1]|c->r[1]; // 800DE4F4
  c->r[28]=c->r[3]|c->r[3]; // 800DE4F8
  c->lr=0x800DE500u; f_800DC584(c); // 800DE4FC
  c->r[4]=c->r[3]|c->r[3]; // 800DE500
  c->r[3]=c->r[28]|c->r[28]; // 800DE504
  c->lr=0x800DE50Cu; f_80062F4C(c); // 800DE508
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DE50C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE510
  c->r[3]=c->r[28]+c->r[0]; // 800DE514
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DE518
  cmps(c,0,(int32_t)c->r[29],0); // 800DE51C
  if (crb(c,2)) { goto L_800DE54C; } // 800DE520
  c->r[30]=0u+0x00000000u; // 800DE524
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DE528
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DE52C
  c->lr=0x800DE534u; f_800DC584(c); // 800DE530
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DE534
  c->r[0]=c->r[13]+0xFFFF84ACu; // 800DE538
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DE53C
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DE540
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DE544
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DE548
L_800DE54C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DE54C
  c->r[0]=0u+0x00000000u; // 800DE550
  c->r[3]=c->r[28]|c->r[28]; // 800DE554
  c->r[4]=c->r[29]|c->r[29]; // 800DE558
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DE55C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DE560
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DE564
  c->lr=0x800DE56Cu; f_8006306C(c); // 800DE568
  c->r[10]=c->r[31]|c->r[31]; // 800DE56C
  c->r[3]=c->r[29]|c->r[29]; // 800DE570
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE574
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DE578
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DE57C
  c->r[1]=c->r[10]|c->r[10]; // 800DE580
  c->lr=c->r[0]; // 800DE584
  return; // 800DE588
}

// fn_800DE58C
void f_800DE58C(Ctx* __restrict c) {
  trace_call(0x800DE58Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE58C
  c->r[0]=c->lr; // 800DE590
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DE594
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DE598
  c->r[31]=c->r[4]|c->r[4]; // 800DE59C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DE5A0
  c->r[30]=c->r[3]|c->r[3]; // 800DE5A4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE5A8
  cmps(c,0,(int32_t)c->r[5],0); // 800DE5AC
  if (crb(c,2)) { goto L_800DE5BC; } // 800DE5B0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DE5B4
  goto L_800DE5C0; // 800DE5B8
L_800DE5BC:;
  c->r[0]=0u+0x00000000u; // 800DE5BC
L_800DE5C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE5C0
  if (!crb(c,2)) { goto L_800DE5EC; } // 800DE5C4
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DE5C8
  c->r[3]=c->r[3]+0x00000354u; // 800DE5CC
  c->lr=0x800DE5D4u; f_800667BC(c); // 800DE5D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5D4
  if (!crb(c,2)) { goto L_800DE5EC; } // 800DE5D8
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DE5DC
  c->r[3]=c->r[30]|c->r[30]; // 800DE5E0
  c->r[5]=0u+0x00000001u; // 800DE5E4
  c->lr=0x800DE5ECu; f_80064744(c); // 800DE5E8
L_800DE5EC:;
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800DE5EC
  c->r[3]=c->r[1]+0x00000020u; // 800DE5F0
  c->lr=0x800DE5F8u; f_800C2FB8(c); // 800DE5F4
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE5F8
  c->r[3]=c->r[1]+0x00000008u; // 800DE5FC
  c->lr=0x800DE604u; f_800C998C(c); // 800DE600
  c->r[31]=c->r[3]|c->r[3]; // 800DE604
  c->r[4]=c->r[30]|c->r[30]; // 800DE608
  c->r[3]=c->r[1]+0x00000014u; // 800DE60C
  c->lr=0x800DE614u; f_80061A48(c); // 800DE610
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DE614
  c->r[5]=c->r[31]|c->r[31]; // 800DE618
  c->r[4]=c->r[1]+0x00000014u; // 800DE61C
  c->lr=0x800DE624u; f_800C2D1C(c); // 800DE620
  c->r[31]=c->r[3]|c->r[3]; // 800DE624
  c->r[3]=R32(c->r[30]+0x00000424u); // 800DE628
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE62C
  c->r[4]=c->r[1]+0x00000020u; // 800DE630
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE634
  c->lr=0x800DE63Cu; f_800C43B8(c); // 800DE638
  cmps(c,0,(int32_t)c->r[31],0); // 800DE63C
  if (crb(c,2)) { goto L_800DE66C; } // 800DE640
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DE644
  c->r[0]=R8(c->r[3]+0x00000015u); // 800DE648
  cmps(c,0,(int32_t)c->r[0],0); // 800DE64C
  if (crb(c,2)) { goto L_800DE65C; } // 800DE650
  c->r[0]=0u+0x00000000u; // 800DE654
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800DE658
L_800DE65C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE65C
  c->lr=0x800DE664u; f_800DFACC(c); // 800DE660
  c->r[3]=c->r[30]|c->r[30]; // 800DE664
  c->lr=0x800DE66Cu; f_800DFD8C(c); // 800DE668
L_800DE66C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DE66C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DE670
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DE674
  c->lr=c->r[0]; // 800DE678
  c->r[1]=c->r[1]+0x00000040u; // 800DE67C
  return; // 800DE680
}

// fn_800DE684
void f_800DE684(Ctx* __restrict c) {
  trace_call(0x800DE684u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE684
  c->r[0]=c->lr; // 800DE688
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DE68C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DE690
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DE694
  c->r[30]=c->r[3]|c->r[3]; // 800DE698
  c->r[3]=c->r[1]+0x0000002Cu; // 800DE69C
  c->r[4]=c->r[30]|c->r[30]; // 800DE6A0
  c->lr=0x800DE6A8u; f_80061A48(c); // 800DE6A4
  c->r[4]=R32(c->r[30]+0x0000041Cu); // 800DE6A8
  c->r[3]=c->r[1]+0x00000020u; // 800DE6AC
  c->lr=0x800DE6B4u; f_800C2E48(c); // 800DE6B0
  c->r[3]=c->r[1]+0x00000014u; // 800DE6B4
  c->r[4]=c->r[1]+0x00000020u; // 800DE6B8
  c->r[5]=c->r[1]+0x0000002Cu; // 800DE6BC
  c->lr=0x800DE6C4u; f_8005FC60(c); // 800DE6C0
  c->r[3]=c->r[1]+0x00000014u; // 800DE6C4
  c->lr=0x800DE6CCu; f_80060DC8(c); // 800DE6C8
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE6CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800DE6D0
  fcmp(c,0,c->f[1],c->f[0]); // 800DE6D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DE6D8
  if (!crb(c,2)) { goto L_800DE718; } // 800DE6DC
  c->r[0]=0u+0x00000001u; // 800DE6E0
  W32(c->r[30]+0x000005C0u,c->r[0]); // 800DE6E4
  c->r[3]=c->r[30]|c->r[30]; // 800DE6E8
  c->lr=0x800DE6F0u; f_800DFACC(c); // 800DE6EC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE6F0
  c->r[3]=c->r[1]+0x00000008u; // 800DE6F4
  c->lr=0x800DE6FCu; f_800C998C(c); // 800DE6F8
  c->r[5]=c->r[3]|c->r[3]; // 800DE6FC
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800DE700
  c->r[4]=c->r[1]+0x0000002Cu; // 800DE704
  c->lr=0x800DE70Cu; f_800C2D1C(c); // 800DE708
  c->r[3]=c->r[30]|c->r[30]; // 800DE70C
  c->lr=0x800DE714u; f_800DFD8C(c); // 800DE710
  goto L_800DE7C8; // 800DE714
L_800DE718:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800DE718
  cmps(c,0,(int32_t)c->r[3],0); // 800DE71C
  if (crb(c,2)) { goto L_800DE72C; } // 800DE720
  c->r[0]=R32(c->r[3]+0x00000008u); // 800DE724
  goto L_800DE730; // 800DE728
L_800DE72C:;
  c->r[0]=0u+0x00000000u; // 800DE72C
L_800DE730:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE730
  if (!crb(c,2)) { goto L_800DE7B4; } // 800DE734
  c->r[3]=c->r[30]|c->r[30]; // 800DE738
  c->r[4]=0u+0x00000001u; // 800DE73C
  c->lr=0x800DE744u; f_800DF980(c); // 800DE740
  c->r[4]=c->r[3]|c->r[3]; // 800DE744
  c->r[3]=c->r[30]|c->r[30]; // 800DE748
  c->lr=0x800DE750u; f_800DF9DC(c); // 800DE74C
  c->r[0]=c->r[3]+0xFFFFBD8Eu; // 800DE750
  c->r[31]=c->r[3]|c->r[3]; // 800DE754
  cmpu(c,0,c->r[0],0x00000001u); // 800DE758
  if (!crb(c,1)) { goto L_800DE790; } // 800DE75C
  c->r[0]=c->r[3]+0xFFFFBBFEu; // 800DE760
  cmpu(c,0,c->r[0],0x00000001u); // 800DE764
  if (!crb(c,1)) { goto L_800DE790; } // 800DE768
  c->r[0]=R32(c->r[30]+0x000005C4u); // 800DE76C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE770
  if (crb(c,2)) { goto L_800DE784; } // 800DE774
  cmps(c,0,(int32_t)c->r[0],1); // 800DE778
  if (crb(c,2)) { goto L_800DE78C; } // 800DE77C
  goto L_800DE790; // 800DE780
L_800DE784:;
  c->r[31]=0u+0x00004272u; // 800DE784
  goto L_800DE790; // 800DE788
L_800DE78C:;
  c->r[31]=0u+0x00004402u; // 800DE78C
L_800DE790:;
  c->r[4]=c->r[31]|c->r[31]; // 800DE790
  c->r[3]=c->r[30]+0x00000354u; // 800DE794
  c->lr=0x800DE79Cu; f_800667BC(c); // 800DE798
  cmps(c,0,(int32_t)c->r[3],0); // 800DE79C
  if (!crb(c,2)) { goto L_800DE7B4; } // 800DE7A0
  c->r[3]=c->r[30]|c->r[30]; // 800DE7A4
  c->r[4]=c->r[31]|c->r[31]; // 800DE7A8
  c->r[5]=0u+0x00000001u; // 800DE7AC
  c->lr=0x800DE7B4u; f_80064744(c); // 800DE7B0
L_800DE7B4:;
  c->r[3]=R32(c->r[30]+0x00000424u); // 800DE7B4
  c->r[4]=c->r[1]+0x00000020u; // 800DE7B8
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE7BC
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE7C0
  c->lr=0x800DE7C8u; f_800C43B8(c); // 800DE7C4
L_800DE7C8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DE7C8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DE7CC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DE7D0
  c->lr=c->r[0]; // 800DE7D4
  c->r[1]=c->r[1]+0x00000040u; // 800DE7D8
  return; // 800DE7DC
}

// fn_800DE7E0
void f_800DE7E0(Ctx* __restrict c) {
  trace_call(0x800DE7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE7E0
  c->r[0]=c->lr; // 800DE7E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DE7E8
  c->r[11]=c->r[1]+0x00000050u; // 800DE7EC
  c->lr=0x800DE7F4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE7F0
  c->r[4]=R32(c->r[3]+0x00000004u); // 800DE7F4
  c->r[29]=c->r[3]|c->r[3]; // 800DE7F8
  cmps(c,0,(int32_t)c->r[4],0); // 800DE7FC
  if (crb(c,2)) { goto L_800DE80C; } // 800DE800
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DE804
  goto L_800DE810; // 800DE808
L_800DE80C:;
  c->r[0]=0u+0x00000000u; // 800DE80C
L_800DE810:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE810
  if (!crb(c,2)) { goto L_800DE868; } // 800DE814
  c->r[3]=c->r[29]|c->r[29]; // 800DE818
  c->r[4]=0u+0x00004281u; // 800DE81C
  c->r[5]=0u+0x00000001u; // 800DE820
  c->lr=0x800DE828u; f_80064744(c); // 800DE824
  c->r[3]=c->r[29]|c->r[29]; // 800DE828
  c->r[4]=0u+0x00000000u; // 800DE82C
  c->lr=0x800DE834u; f_8005EA70(c); // 800DE830
  c->r[0]=0u+0x00000000u; // 800DE834
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DE838
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800DE83C
  c->r[3]=c->r[1]+0x00000020u; // 800DE840
  c->lr=0x800DE848u; f_800C2FB8(c); // 800DE844
  c->r[4]=c->r[29]|c->r[29]; // 800DE848
  c->r[3]=c->r[1]+0x0000002Cu; // 800DE84C
  c->lr=0x800DE854u; f_80061A48(c); // 800DE850
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE854
  c->r[3]=c->r[29]|c->r[29]; // 800DE858
  c->r[4]=c->r[1]+0x0000002Cu; // 800DE85C
  c->r[5]=c->r[1]+0x00000020u; // 800DE860
  c->lr=0x800DE868u; f_800E0DE8(c); // 800DE864
L_800DE868:;
  c->r[3]=c->r[29]+0x00000354u; // 800DE868
  c->lr=0x800DE870u; f_800C9374(c); // 800DE86C
  cmps(c,0,(int32_t)c->r[3],17025); // 800DE870
  c->r[30]=c->r[3]|c->r[3]; // 800DE874
  c->r[31]=0u+0x00000000u; // 800DE878
  if (!crb(c,2)) { goto L_800DE898; } // 800DE87C
  c->r[3]=R32(c->r[29]+0x00000404u); // 800DE880
  c->lr=0x800DE888u; f_802EA4B0(c); // 800DE884
  {uint32_t ea=c->r[2]+0xFFFFA590u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE888
  fcmp(c,0,c->f[0],c->f[1]); // 800DE88C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DE890
  if (crb(c,2)) { goto L_800DE8A4; } // 800DE894
L_800DE898:;
  c->r[0]=c->r[30]+0xFFFFBD7Eu; // 800DE898
  cmpu(c,0,c->r[0],0x00000001u); // 800DE89C
  if (crb(c,1)) { goto L_800DE8BC; } // 800DE8A0
L_800DE8A4:;
  {uint32_t ea=c->r[2]+0xFFFFA594u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8A4
  c->r[3]=c->r[29]|c->r[29]; // 800DE8A8
  c->lr=0x800DE8B0u; f_800E0E88(c); // 800DE8AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE8B0
  if (crb(c,2)) { goto L_800DE8BC; } // 800DE8B4
  c->r[31]=0u+0x00000001u; // 800DE8B8
L_800DE8BC:;
  cmps(c,0,(int32_t)c->r[30],17027); // 800DE8BC
  if (!crb(c,2)) { goto L_800DE8D4; } // 800DE8C0
  c->r[0]=R8(c->r[29]+0x000009D1u); // 800DE8C4
  cmps(c,0,(int32_t)c->r[0],0); // 800DE8C8
  if (crb(c,2)) { goto L_800DE8D4; } // 800DE8CC
  c->r[31]=0u+0x00000001u; // 800DE8D0
L_800DE8D4:;
  cmps(c,0,(int32_t)c->r[30],17027); // 800DE8D4
  if (!crb(c,2)) { goto L_800DE900; } // 800DE8D8
  cmps(c,0,(int32_t)c->r[31],0); // 800DE8DC
  if (crb(c,2)) { goto L_800DE900; } // 800DE8E0
  c->r[3]=c->r[29]|c->r[29]; // 800DE8E4
  c->r[4]=0u+0x00004282u; // 800DE8E8
  c->r[5]=0u+0x00000001u; // 800DE8EC
  c->lr=0x800DE8F4u; f_80064744(c); // 800DE8F0
  c->r[0]=0u+0x00000001u; // 800DE8F4
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DE8F8
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DE8FC
L_800DE900:;
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE900
  c->r[3]=c->r[1]+0x00000008u; // 800DE904
  c->lr=0x800DE90Cu; f_800C998C(c); // 800DE908
  c->r[31]=c->r[3]|c->r[3]; // 800DE90C
  c->r[4]=c->r[29]|c->r[29]; // 800DE910
  c->r[3]=c->r[1]+0x00000014u; // 800DE914
  c->lr=0x800DE91Cu; f_80061A48(c); // 800DE918
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800DE91C
  c->r[5]=c->r[31]|c->r[31]; // 800DE920
  c->r[4]=c->r[1]+0x00000014u; // 800DE924
  c->lr=0x800DE92Cu; f_800C2D1C(c); // 800DE928
  cmps(c,0,(int32_t)c->r[3],0); // 800DE92C
  if (crb(c,2)) { goto L_800DE93C; } // 800DE930
  c->r[3]=c->r[29]|c->r[29]; // 800DE934
  c->lr=0x800DE93Cu; f_800DFACC(c); // 800DE938
L_800DE93C:;
  c->r[3]=c->r[29]+0x00000354u; // 800DE93C
  c->lr=0x800DE944u; f_800667AC(c); // 800DE940
  cmps(c,0,(int32_t)c->r[3],0); // 800DE944
  if (crb(c,2)) { goto L_800DE97C; } // 800DE948
  cmps(c,0,(int32_t)c->r[30],17025); // 800DE94C
  if (crb(c,2)) { goto L_800DE960; } // 800DE950
  cmps(c,0,(int32_t)c->r[30],17026); // 800DE954
  if (crb(c,2)) { goto L_800DE974; } // 800DE958
  goto L_800DE97C; // 800DE95C
L_800DE960:;
  c->r[3]=c->r[29]|c->r[29]; // 800DE960
  c->r[4]=0u+0x00004283u; // 800DE964
  c->r[5]=0u+0x00000001u; // 800DE968
  c->lr=0x800DE970u; f_80064744(c); // 800DE96C
  goto L_800DE97C; // 800DE970
L_800DE974:;
  c->r[3]=c->r[29]|c->r[29]; // 800DE974
  c->lr=0x800DE97Cu; f_800DFD8C(c); // 800DE978
L_800DE97C:;
  c->r[11]=c->r[1]+0x00000050u; // 800DE97C
  c->lr=0x800DE984u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE980
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DE984
  c->lr=c->r[0]; // 800DE988
  c->r[1]=c->r[1]+0x00000050u; // 800DE98C
  return; // 800DE990
}

// fn_800DE994
void f_800DE994(Ctx* __restrict c) {
  trace_call(0x800DE994u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE994
  c->r[0]=c->lr; // 800DE998
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DE99C
  c->r[11]=c->r[1]+0x00000050u; // 800DE9A0
  c->lr=0x800DE9A8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE9A4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800DE9A8
  c->r[29]=c->r[3]|c->r[3]; // 800DE9AC
  cmps(c,0,(int32_t)c->r[4],0); // 800DE9B0
  if (crb(c,2)) { goto L_800DE9C0; } // 800DE9B4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DE9B8
  goto L_800DE9C4; // 800DE9BC
L_800DE9C0:;
  c->r[0]=0u+0x00000000u; // 800DE9C0
L_800DE9C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE9C4
  if (!crb(c,2)) { goto L_800DE9F0; } // 800DE9C8
  c->r[3]=c->r[29]|c->r[29]; // 800DE9CC
  c->r[4]=0u+0x00004407u; // 800DE9D0
  c->r[5]=0u+0x00000001u; // 800DE9D4
  c->lr=0x800DE9DCu; f_80064744(c); // 800DE9D8
  c->r[3]=c->r[29]|c->r[29]; // 800DE9DC
  c->r[4]=0u+0x00000000u; // 800DE9E0
  c->lr=0x800DE9E8u; f_8005EA70(c); // 800DE9E4
  c->r[0]=0u+0x00000000u; // 800DE9E8
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DE9EC
L_800DE9F0:;
  c->r[3]=c->r[29]+0x00000354u; // 800DE9F0
  c->lr=0x800DE9F8u; f_800C9374(c); // 800DE9F4
  c->r[0]=c->r[3]+0xFFFFBBF8u; // 800DE9F8
  c->r[30]=c->r[3]|c->r[3]; // 800DE9FC
  cmpu(c,0,c->r[0],0x00000001u); // 800DEA00
  c->r[31]=0u+0x00000000u; // 800DEA04
  if (crb(c,1)) { goto L_800DEA24; } // 800DEA08
  {uint32_t ea=c->r[2]+0xFFFFA594u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA0C
  c->r[3]=c->r[29]|c->r[29]; // 800DEA10
  c->lr=0x800DEA18u; f_800E0E88(c); // 800DEA14
  cmps(c,0,(int32_t)c->r[3],0); // 800DEA18
  if (crb(c,2)) { goto L_800DEA24; } // 800DEA1C
  c->r[31]=0u+0x00000001u; // 800DEA20
L_800DEA24:;
  cmps(c,0,(int32_t)c->r[30],17416); // 800DEA24
  if (!crb(c,2)) { goto L_800DEA40; } // 800DEA28
  c->r[3]=c->r[29]|c->r[29]; // 800DEA2C
  c->lr=0x800DEA34u; f_8005EA80(c); // 800DEA30
  cmps(c,0,(int32_t)c->r[3],0); // 800DEA34
  if (crb(c,2)) { goto L_800DEA40; } // 800DEA38
  c->r[31]=0u+0x00000001u; // 800DEA3C
L_800DEA40:;
  cmps(c,0,(int32_t)c->r[30],17416); // 800DEA40
  if (!crb(c,2)) { goto L_800DEA74; } // 800DEA44
  cmps(c,0,(int32_t)c->r[31],0); // 800DEA48
  if (crb(c,2)) { goto L_800DEA74; } // 800DEA4C
  c->r[3]=c->r[29]|c->r[29]; // 800DEA50
  c->r[4]=0u+0x00004409u; // 800DEA54
  c->r[5]=0u+0x00000001u; // 800DEA58
  c->lr=0x800DEA60u; f_80064744(c); // 800DEA5C
  c->r[3]=c->r[29]|c->r[29]; // 800DEA60
  c->r[4]=0u+0x00000001u; // 800DEA64
  c->lr=0x800DEA6Cu; f_8005EA70(c); // 800DEA68
  c->r[0]=0u+0x00000000u; // 800DEA6C
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DEA70
L_800DEA74:;
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA74
  c->r[3]=c->r[1]+0x00000020u; // 800DEA78
  c->lr=0x800DEA80u; f_800C998C(c); // 800DEA7C
  c->r[31]=c->r[3]|c->r[3]; // 800DEA80
  c->r[4]=c->r[29]|c->r[29]; // 800DEA84
  c->r[3]=c->r[1]+0x0000002Cu; // 800DEA88
  c->lr=0x800DEA90u; f_80061A48(c); // 800DEA8C
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 800DEA90
  c->r[5]=c->r[31]|c->r[31]; // 800DEA94
  c->r[4]=c->r[1]+0x0000002Cu; // 800DEA98
  c->lr=0x800DEAA0u; f_800C2D1C(c); // 800DEA9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DEAA0
  if (crb(c,2)) { goto L_800DEAB0; } // 800DEAA4
  c->r[3]=c->r[29]|c->r[29]; // 800DEAA8
  c->lr=0x800DEAB0u; f_800DFACC(c); // 800DEAAC
L_800DEAB0:;
  c->r[3]=c->r[29]+0x00000354u; // 800DEAB0
  c->lr=0x800DEAB8u; f_800667AC(c); // 800DEAB4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEAB8
  if (crb(c,2)) { goto L_800DEB1C; } // 800DEABC
  cmps(c,0,(int32_t)c->r[30],17415); // 800DEAC0
  if (crb(c,2)) { goto L_800DEAD4; } // 800DEAC4
  cmps(c,0,(int32_t)c->r[30],17417); // 800DEAC8
  if (crb(c,2)) { goto L_800DEB14; } // 800DEACC
  goto L_800DEB1C; // 800DEAD0
L_800DEAD4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DEAD4
  c->r[4]=0u+0x00004408u; // 800DEAD8
  c->r[5]=0u+0x00000001u; // 800DEADC
  c->lr=0x800DEAE4u; f_80064744(c); // 800DEAE0
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 800DEAE4
  c->r[3]=c->r[1]+0x00000008u; // 800DEAE8
  c->lr=0x800DEAF0u; f_800C2FB8(c); // 800DEAEC
  c->r[4]=c->r[29]|c->r[29]; // 800DEAF0
  c->r[3]=c->r[1]+0x00000014u; // 800DEAF4
  c->lr=0x800DEAFCu; f_80061A48(c); // 800DEAF8
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEAFC
  c->r[3]=c->r[29]|c->r[29]; // 800DEB00
  c->r[4]=c->r[1]+0x00000014u; // 800DEB04
  c->r[5]=c->r[1]+0x00000008u; // 800DEB08
  c->lr=0x800DEB10u; f_800E0DE8(c); // 800DEB0C
  goto L_800DEB1C; // 800DEB10
L_800DEB14:;
  c->r[3]=c->r[29]|c->r[29]; // 800DEB14
  c->lr=0x800DEB1Cu; f_800DFD8C(c); // 800DEB18
L_800DEB1C:;
  c->r[11]=c->r[1]+0x00000050u; // 800DEB1C
  c->lr=0x800DEB24u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DEB20
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DEB24
  c->lr=c->r[0]; // 800DEB28
  c->r[1]=c->r[1]+0x00000050u; // 800DEB2C
  return; // 800DEB30
}

// fn_800DEB34
void f_800DEB34(Ctx* __restrict c) {
  trace_call(0x800DEB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEB34
  c->r[0]=c->lr; // 800DEB38
  W32(c->r[1]+0x00000064u,c->r[0]); // 800DEB3C
  c->r[11]=c->r[1]+0x00000060u; // 800DEB40
  c->lr=0x800DEB48u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DEB44
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DEB48
  c->r[28]=c->r[3]|c->r[3]; // 800DEB4C
  c->r[29]=c->r[4]|c->r[4]; // 800DEB50
  cmps(c,0,(int32_t)c->r[5],0); // 800DEB54
  if (crb(c,2)) { goto L_800DEB64; } // 800DEB58
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DEB5C
  goto L_800DEB68; // 800DEB60
L_800DEB64:;
  c->r[0]=0u+0x00000000u; // 800DEB64
L_800DEB68:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB68
  if (!crb(c,2)) { goto L_800DEBC0; } // 800DEB6C
  c->r[0]=R32(c->r[3]+0x000005C4u); // 800DEB70
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB74
  if (crb(c,2)) { goto L_800DEB88; } // 800DEB78
  cmps(c,0,(int32_t)c->r[0],1); // 800DEB7C
  if (crb(c,2)) { goto L_800DEB9C; } // 800DEB80
  goto L_800DEBC0; // 800DEB84
L_800DEB88:;
  c->r[3]=c->r[28]|c->r[28]; // 800DEB88
  c->r[4]=0u+0x00004274u; // 800DEB8C
  c->r[5]=0u+0x00000001u; // 800DEB90
  c->lr=0x800DEB98u; f_80064744(c); // 800DEB94
  goto L_800DEBC0; // 800DEB98
L_800DEB9C:;
  c->r[4]=0u+0x00004404u; // 800DEB9C
  c->r[3]=c->r[3]+0x00000354u; // 800DEBA0
  c->lr=0x800DEBA8u; f_800667BC(c); // 800DEBA4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEBA8
  if (!crb(c,2)) { goto L_800DEBC0; } // 800DEBAC
  c->r[3]=c->r[28]|c->r[28]; // 800DEBB0
  c->r[4]=0u+0x00004404u; // 800DEBB4
  c->r[5]=0u+0x00000001u; // 800DEBB8
  c->lr=0x800DEBC0u; f_80064744(c); // 800DEBBC
L_800DEBC0:;
  c->r[3]=c->r[28]+0x00000354u; // 800DEBC0
  c->lr=0x800DEBC8u; f_800C9374(c); // 800DEBC4
  cmps(c,0,(int32_t)c->r[3],17012); // 800DEBC8
  c->r[30]=0u+0x00000000u; // 800DEBCC
  if (crb(c,2)) { goto L_800DEBE0; } // 800DEBD0
  cmps(c,0,(int32_t)c->r[3],17412); // 800DEBD4
  if (crb(c,2)) { goto L_800DEBF8; } // 800DEBD8
  goto L_800DEBFC; // 800DEBDC
L_800DEBE0:;
  c->r[3]=c->r[28]+0x00000354u; // 800DEBE0
  c->lr=0x800DEBE8u; f_800667AC(c); // 800DEBE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEBE8
  if (crb(c,2)) { goto L_800DEBFC; } // 800DEBEC
  c->r[30]=0u+0x00000001u; // 800DEBF0
  goto L_800DEBFC; // 800DEBF4
L_800DEBF8:;
  c->r[30]=0u+0x00000001u; // 800DEBF8
L_800DEBFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DEBFC
  if (crb(c,2)) { goto L_800DEC8C; } // 800DEC00
  c->r[4]=R32(c->r[29]+0x00000010u); // 800DEC04
  c->r[3]=c->r[28]|c->r[28]; // 800DEC08
  c->lr=0x800DEC10u; f_800E0450(c); // 800DEC0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DEC10
  c->r[31]=c->r[3]|c->r[3]; // 800DEC14
  if (crb(c,2)) { goto L_800DEC30; } // 800DEC18
  cmps(c,0,(int32_t)c->r[3],1); // 800DEC1C
  if (crb(c,2)) { goto L_800DEC64; } // 800DEC20
  cmps(c,0,(int32_t)c->r[3],2); // 800DEC24
  if (crb(c,2)) { goto L_800DEC78; } // 800DEC28
  goto L_800DEC8C; // 800DEC2C
L_800DEC30:;
  c->r[3]=c->r[28]|c->r[28]; // 800DEC30
  c->lr=0x800DEC38u; f_8006117C(c); // 800DEC34
  cmps(c,0,(int32_t)c->r[3],0); // 800DEC38
  if (crb(c,2)) { goto L_800DEC50; } // 800DEC3C
  c->r[4]=R32(c->r[29]+0x00000010u); // 800DEC40
  c->r[3]=c->r[28]|c->r[28]; // 800DEC44
  c->lr=0x800DEC4Cu; f_800E0580(c); // 800DEC48
  goto L_800DEC8C; // 800DEC4C
L_800DEC50:;
  c->r[31]=R32(c->r[29]+0x00000010u); // 800DEC50
  c->r[3]=c->r[28]|c->r[28]; // 800DEC54
  c->lr=0x800DEC5Cu; f_800DE4E4(c); // 800DEC58
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DEC5C
  goto L_800DEC8C; // 800DEC60
L_800DEC64:;
  c->r[31]=R32(c->r[29]+0x00000010u); // 800DEC64
  c->r[3]=c->r[28]|c->r[28]; // 800DEC68
  c->lr=0x800DEC70u; f_800DE43C(c); // 800DEC6C
  W32(c->r[3]+0x00000010u,c->r[31]); // 800DEC70
  goto L_800DEC8C; // 800DEC74
L_800DEC78:;
  c->r[30]=R32(c->r[29]+0x00000010u); // 800DEC78
  c->r[3]=c->r[28]|c->r[28]; // 800DEC7C
  c->lr=0x800DEC84u; f_800DECE0(c); // 800DEC80
  W32(c->r[3]+0x00000010u,c->r[30]); // 800DEC84
  W32(c->r[3]+0x00000014u,c->r[31]); // 800DEC88
L_800DEC8C:;
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800DEC8C
  c->r[3]=c->r[28]|c->r[28]; // 800DEC90
  c->r[4]=c->r[1]+0x00000018u; // 800DEC94
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DEC98
  c->ctr=c->r[12]; // 800DEC9C
  if (true) { c->lr=0x800DECA4u; dispatch(c,c->ctr); } // 800DECA0
  c->r[4]=c->r[3]|c->r[3]; // 800DECA4
  c->r[3]=c->r[1]+0x00000008u; // 800DECA8
  c->lr=0x800DECB0u; f_80060878(c); // 800DECAC
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DECB0
  c->r[3]=c->r[28]|c->r[28]; // 800DECB4
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DECB8
  c->r[4]=c->r[1]+0x00000008u; // 800DECBC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DECC0
  c->lr=0x800DECC8u; f_800634E8(c); // 800DECC4
  c->r[11]=c->r[1]+0x00000060u; // 800DECC8
  c->lr=0x800DECD0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DECCC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800DECD0
  c->lr=c->r[0]; // 800DECD4
  c->r[1]=c->r[1]+0x00000060u; // 800DECD8
  return; // 800DECDC
}

// fn_800DECE0
void f_800DECE0(Ctx* __restrict c) {
  trace_call(0x800DECE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECE0
  c->r[0]=c->lr; // 800DECE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DECE8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DECEC
  c->r[31]=c->r[1]|c->r[1]; // 800DECF0
  c->r[28]=c->r[3]|c->r[3]; // 800DECF4
  c->lr=0x800DECFCu; f_800DC4E0(c); // 800DECF8
  c->r[4]=c->r[3]|c->r[3]; // 800DECFC
  c->r[3]=c->r[28]|c->r[28]; // 800DED00
  c->lr=0x800DED08u; f_80062F4C(c); // 800DED04
  c->r[0]=R8(c->r[28]+0x00000010u); // 800DED08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DED0C
  c->r[3]=c->r[28]+c->r[0]; // 800DED10
  c->r[29]=R32(c->r[3]+0x00000014u); // 800DED14
  cmps(c,0,(int32_t)c->r[29],0); // 800DED18
  if (crb(c,2)) { goto L_800DED4C; } // 800DED1C
  c->r[30]=0u+0x00000000u; // 800DED20
  W32(c->r[31]+0x00000024u,c->r[1]); // 800DED24
  W8(c->r[31]+0x00000008u,c->r[30]); // 800DED28
  c->lr=0x800DED30u; f_800DC4E0(c); // 800DED2C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800DED30
  c->r[0]=c->r[13]+0xFFFF84A8u; // 800DED34
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DED38
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DED3C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800DED40
  W32(c->r[29]+0x00000010u,c->r[30]); // 800DED44
  W32(c->r[29]+0x00000014u,c->r[30]); // 800DED48
L_800DED4C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DED4C
  c->r[0]=0u+0x00000000u; // 800DED50
  c->r[3]=c->r[28]|c->r[28]; // 800DED54
  c->r[4]=c->r[29]|c->r[29]; // 800DED58
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DED5C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DED60
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800DED64
  c->lr=0x800DED6Cu; f_8006306C(c); // 800DED68
  c->r[10]=c->r[31]|c->r[31]; // 800DED6C
  c->r[3]=c->r[29]|c->r[29]; // 800DED70
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DED74
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DED78
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DED7C
  c->r[1]=c->r[10]|c->r[10]; // 800DED80
  c->lr=c->r[0]; // 800DED84
  return; // 800DED88
}

// fn_800DED8C
void f_800DED8C(Ctx* __restrict c) {
  trace_call(0x800DED8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DED8C
  c->r[0]=c->lr; // 800DED90
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DED94
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DED98
  c->r[31]=c->r[3]|c->r[3]; // 800DED9C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800DEDA0
  cmps(c,0,(int32_t)c->r[4],0); // 800DEDA4
  if (crb(c,2)) { goto L_800DEDB4; } // 800DEDA8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DEDAC
  goto L_800DEDB8; // 800DEDB0
L_800DEDB4:;
  c->r[0]=0u+0x00000000u; // 800DEDB4
L_800DEDB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEDB8
  if (!crb(c,2)) { goto L_800DEDD8; } // 800DEDBC
  c->r[3]=c->r[31]|c->r[31]; // 800DEDC0
  c->lr=0x800DEDC8u; f_800E0780(c); // 800DEDC4
  c->r[4]=c->r[3]|c->r[3]; // 800DEDC8
  c->r[3]=c->r[31]|c->r[31]; // 800DEDCC
  c->r[5]=0u+0x00000001u; // 800DEDD0
  c->lr=0x800DEDD8u; f_80064744(c); // 800DEDD4
L_800DEDD8:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800DEDD8
  c->r[3]=c->r[31]|c->r[31]; // 800DEDDC
  c->r[4]=c->r[1]+0x00000018u; // 800DEDE0
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DEDE4
  c->ctr=c->r[12]; // 800DEDE8
  if (true) { c->lr=0x800DEDF0u; dispatch(c,c->ctr); } // 800DEDEC
  c->r[4]=c->r[3]|c->r[3]; // 800DEDF0
  c->r[3]=c->r[1]+0x00000008u; // 800DEDF4
  c->lr=0x800DEDFCu; f_80060878(c); // 800DEDF8
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEDFC
  c->r[3]=c->r[31]|c->r[31]; // 800DEE00
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEE04
  c->r[4]=c->r[1]+0x00000008u; // 800DEE08
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEE0C
  c->lr=0x800DEE14u; f_800637D0(c); // 800DEE10
  c->r[3]=c->r[31]+0x00000354u; // 800DEE14
  c->lr=0x800DEE1Cu; f_800667AC(c); // 800DEE18
  cmps(c,0,(int32_t)c->r[3],0); // 800DEE1C
  if (crb(c,2)) { goto L_800DEE2C; } // 800DEE20
  c->r[3]=c->r[31]|c->r[31]; // 800DEE24
  c->lr=0x800DEE2Cu; f_800DFD8C(c); // 800DEE28
L_800DEE2C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DEE2C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DEE30
  c->lr=c->r[0]; // 800DEE34
  c->r[1]=c->r[1]+0x00000050u; // 800DEE38
  return; // 800DEE3C
}

// fn_800DEE40
void f_800DEE40(Ctx* __restrict c) {
  trace_call(0x800DEE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE40
  c->r[0]=c->lr; // 800DEE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEE48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEE4C
  c->r[31]=c->r[3]|c->r[3]; // 800DEE50
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DEE54
  cmps(c,0,(int32_t)c->r[5],0); // 800DEE58
  if (crb(c,2)) { goto L_800DEE68; } // 800DEE5C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DEE60
  goto L_800DEE6C; // 800DEE64
L_800DEE68:;
  c->r[0]=0u+0x00000000u; // 800DEE68
L_800DEE6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEE6C
  if (!crb(c,2)) { goto L_800DEE84; } // 800DEE70
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DEE74
  c->r[3]=c->r[31]|c->r[31]; // 800DEE78
  c->r[5]=0u+0x00000001u; // 800DEE7C
  c->lr=0x800DEE84u; f_80064744(c); // 800DEE80
L_800DEE84:;
  c->r[3]=c->r[31]+0x00000354u; // 800DEE84
  c->lr=0x800DEE8Cu; f_800667AC(c); // 800DEE88
  cmps(c,0,(int32_t)c->r[3],0); // 800DEE8C
  if (crb(c,2)) { goto L_800DEE9C; } // 800DEE90
  c->r[3]=c->r[31]|c->r[31]; // 800DEE94
  c->lr=0x800DEE9Cu; f_800DFD8C(c); // 800DEE98
L_800DEE9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEE9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEEA0
  c->lr=c->r[0]; // 800DEEA4
  c->r[1]=c->r[1]+0x00000010u; // 800DEEA8
  return; // 800DEEAC
}

// fn_800DEEB0
void f_800DEEB0(Ctx* __restrict c) {
  trace_call(0x800DEEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEEB0
  c->r[0]=c->lr; // 800DEEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEEBC
  c->r[31]=c->r[3]|c->r[3]; // 800DEEC0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DEEC4
  cmps(c,0,(int32_t)c->r[5],0); // 800DEEC8
  if (crb(c,2)) { goto L_800DEED8; } // 800DEECC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DEED0
  goto L_800DEEDC; // 800DEED4
L_800DEED8:;
  c->r[0]=0u+0x00000000u; // 800DEED8
L_800DEEDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEEDC
  if (!crb(c,2)) { goto L_800DEEF4; } // 800DEEE0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DEEE4
  c->r[3]=c->r[31]|c->r[31]; // 800DEEE8
  c->r[5]=0u+0x00000001u; // 800DEEEC
  c->lr=0x800DEEF4u; f_80064744(c); // 800DEEF0
L_800DEEF4:;
  c->r[3]=c->r[31]+0x00000354u; // 800DEEF4
  c->lr=0x800DEEFCu; f_800C9374(c); // 800DEEF8
  cmps(c,0,(int32_t)c->r[3],17102); // 800DEEFC
  if (crb(c,2)) { goto L_800DEF20; } // 800DEF00
  cmps(c,0,(int32_t)c->r[3],17430); // 800DEF04
  if (crb(c,2)) { goto L_800DEF48; } // 800DEF08
  cmps(c,0,(int32_t)c->r[3],17101); // 800DEF0C
  if (crb(c,2)) { goto L_800DEF70; } // 800DEF10
  cmps(c,0,(int32_t)c->r[3],17431); // 800DEF14
  if (crb(c,2)) { goto L_800DEF70; } // 800DEF18
  goto L_800DEF80; // 800DEF1C
L_800DEF20:;
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEF20
  c->r[3]=c->r[31]|c->r[31]; // 800DEF24
  c->lr=0x800DEF2Cu; f_80064A68(c); // 800DEF28
  cmps(c,0,(int32_t)c->r[3],0); // 800DEF2C
  if (crb(c,2)) { goto L_800DEF80; } // 800DEF30
  c->r[3]=c->r[31]|c->r[31]; // 800DEF34
  c->r[4]=0u+0x00000002u; // 800DEF38
  c->r[5]=0u+0x00000001u; // 800DEF3C
  c->lr=0x800DEF44u; f_80062748(c); // 800DEF40
  goto L_800DEF80; // 800DEF44
L_800DEF48:;
  {uint32_t ea=c->r[2]+0xFFFFA59Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEF48
  c->r[3]=c->r[31]|c->r[31]; // 800DEF4C
  c->lr=0x800DEF54u; f_80064A68(c); // 800DEF50
  cmps(c,0,(int32_t)c->r[3],0); // 800DEF54
  if (crb(c,2)) { goto L_800DEF80; } // 800DEF58
  c->r[3]=c->r[31]|c->r[31]; // 800DEF5C
  c->r[4]=0u+0x00000002u; // 800DEF60
  c->r[5]=0u+0x00000001u; // 800DEF64
  c->lr=0x800DEF6Cu; f_80062748(c); // 800DEF68
  goto L_800DEF80; // 800DEF6C
L_800DEF70:;
  c->r[3]=c->r[31]|c->r[31]; // 800DEF70
  c->r[4]=0u+0x00000003u; // 800DEF74
  c->r[5]=0u+0x00000001u; // 800DEF78
  c->lr=0x800DEF80u; f_80062748(c); // 800DEF7C
L_800DEF80:;
  c->r[3]=c->r[31]+0x00000354u; // 800DEF80
  c->lr=0x800DEF88u; f_800667AC(c); // 800DEF84
  cmps(c,0,(int32_t)c->r[3],0); // 800DEF88
  if (crb(c,2)) { goto L_800DEF98; } // 800DEF8C
  c->r[3]=c->r[31]|c->r[31]; // 800DEF90
  c->lr=0x800DEF98u; f_800DFD8C(c); // 800DEF94
L_800DEF98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEF9C
  c->lr=c->r[0]; // 800DEFA0
  c->r[1]=c->r[1]+0x00000010u; // 800DEFA4
  return; // 800DEFA8
}

// fn_800DEFAC
void f_800DEFAC(Ctx* __restrict c) {
  trace_call(0x800DEFACu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEFAC
  c->r[0]=c->lr; // 800DEFB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DEFB4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800DEFB8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800DEFBC
  c->r[30]=c->r[3]|c->r[3]; // 800DEFC0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DEFC4
  cmps(c,0,(int32_t)c->r[5],0); // 800DEFC8
  if (crb(c,2)) { goto L_800DEFD8; } // 800DEFCC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DEFD0
  goto L_800DEFDC; // 800DEFD4
L_800DEFD8:;
  c->r[0]=0u+0x00000000u; // 800DEFD8
L_800DEFDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEFDC
  if (!crb(c,2)) { goto L_800DF044; } // 800DEFE0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DEFE4
  c->r[3]=c->r[30]|c->r[30]; // 800DEFE8
  c->r[5]=0u+0x00000001u; // 800DEFEC
  c->lr=0x800DEFF4u; f_80064744(c); // 800DEFF0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DEFF4
  c->r[3]=c->r[30]|c->r[30]; // 800DEFF8
  c->r[4]=c->r[1]+0x00000050u; // 800DEFFC
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DF000
  c->ctr=c->r[12]; // 800DF004
  if (true) { c->lr=0x800DF00Cu; dispatch(c,c->ctr); } // 800DF008
  c->r[4]=c->r[3]|c->r[3]; // 800DF00C
  c->r[3]=c->r[1]+0x00000014u; // 800DF010
  c->lr=0x800DF018u; f_80060878(c); // 800DF014
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF018
  c->r[3]=c->r[30]|c->r[30]; // 800DF01C
  {uint32_t ea=c->r[2]+0xFFFFA5A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF020
  c->r[4]=c->r[1]+0x00000014u; // 800DF024
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DF028
  c->lr=0x800DF030u; f_800634E8(c); // 800DF02C
  c->r[3]=c->r[30]|c->r[30]; // 800DF030
  c->r[4]=0u+0x00000000u; // 800DF034
  c->lr=0x800DF03Cu; f_8005EA70(c); // 800DF038
  c->r[0]=0u+0x00000000u; // 800DF03C
  W8(c->r[30]+0x000009D0u,c->r[0]); // 800DF040
L_800DF044:;
  c->r[3]=c->r[30]+0x00000354u; // 800DF044
  c->lr=0x800DF04Cu; f_800C9374(c); // 800DF048
  cmps(c,0,(int32_t)c->r[3],17106); // 800DF04C
  c->r[31]=c->r[3]|c->r[3]; // 800DF050
  if (crb(c,2)) { goto L_800DF074; } // 800DF054
  cmps(c,0,(int32_t)c->r[3],17434); // 800DF058
  if (crb(c,2)) { goto L_800DF074; } // 800DF05C
  cmps(c,0,(int32_t)c->r[3],17107); // 800DF060
  if (crb(c,2)) { goto L_800DF114; } // 800DF064
  cmps(c,0,(int32_t)c->r[3],17435); // 800DF068
  if (crb(c,2)) { goto L_800DF114; } // 800DF06C
  goto L_800DF174; // 800DF070
L_800DF074:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF074
  c->r[4]=0u+0x00000001u; // 800DF078
  c->r[5]=0u+0x00000001u; // 800DF07C
  c->lr=0x800DF084u; f_80062748(c); // 800DF080
  c->r[3]=c->r[30]|c->r[30]; // 800DF084
  c->lr=0x800DF08Cu; f_800E0D08(c); // 800DF088
  cmps(c,0,(int32_t)c->r[3],0); // 800DF08C
  if (crb(c,2)) { goto L_800DF0CC; } // 800DF090
  c->r[0]=R32(c->r[30]+0x000005C4u); // 800DF094
  c->r[4]=0u+0x00000000u; // 800DF098
  cmps(c,0,(int32_t)c->r[0],0); // 800DF09C
  if (crb(c,2)) { goto L_800DF0B0; } // 800DF0A0
  cmps(c,0,(int32_t)c->r[0],1); // 800DF0A4
  if (crb(c,2)) { goto L_800DF0B8; } // 800DF0A8
  goto L_800DF0BC; // 800DF0AC
L_800DF0B0:;
  c->r[4]=0u+0x000042D3u; // 800DF0B0
  goto L_800DF0BC; // 800DF0B4
L_800DF0B8:;
  c->r[4]=0u+0x0000441Bu; // 800DF0B8
L_800DF0BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF0BC
  c->r[5]=0u+0x00000001u; // 800DF0C0
  c->lr=0x800DF0C8u; f_80064744(c); // 800DF0C4
  goto L_800DF174; // 800DF0C8
L_800DF0CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF0CC
  c->lr=0x800DF0D4u; f_8005EA90(c); // 800DF0D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF0D4
  if (crb(c,2)) { goto L_800DF174; } // 800DF0D8
  c->r[0]=R32(c->r[30]+0x000005C4u); // 800DF0DC
  c->r[4]=0u+0x00000000u; // 800DF0E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DF0E4
  if (crb(c,2)) { goto L_800DF0F8; } // 800DF0E8
  cmps(c,0,(int32_t)c->r[0],1); // 800DF0EC
  if (crb(c,2)) { goto L_800DF100; } // 800DF0F0
  goto L_800DF104; // 800DF0F4
L_800DF0F8:;
  c->r[4]=0u+0x000042D3u; // 800DF0F8
  goto L_800DF104; // 800DF0FC
L_800DF100:;
  c->r[4]=0u+0x0000441Bu; // 800DF100
L_800DF104:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF104
  c->r[5]=0u+0x00000001u; // 800DF108
  c->lr=0x800DF110u; f_80064744(c); // 800DF10C
  goto L_800DF174; // 800DF110
L_800DF114:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF114
  c->lr=0x800DF11Cu; f_8005EA80(c); // 800DF118
  cmps(c,0,(int32_t)c->r[3],0); // 800DF11C
  if (crb(c,2)) { goto L_800DF14C; } // 800DF120
  c->r[3]=c->r[30]|c->r[30]; // 800DF124
  c->r[4]=0u+0x000042D4u; // 800DF128
  c->r[5]=0u+0x00000001u; // 800DF12C
  c->lr=0x800DF134u; f_80064744(c); // 800DF130
  c->r[3]=c->r[30]|c->r[30]; // 800DF134
  c->r[4]=0u+0x00000001u; // 800DF138
  c->lr=0x800DF140u; f_8005EA70(c); // 800DF13C
  c->r[0]=0u+0x00000000u; // 800DF140
  W32(c->r[30]+0x000005C4u,c->r[0]); // 800DF144
  goto L_800DF174; // 800DF148
L_800DF14C:;
  c->r[0]=R8(c->r[30]+0x000009D1u); // 800DF14C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF150
  if (crb(c,2)) { goto L_800DF174; } // 800DF154
  c->r[3]=c->r[30]|c->r[30]; // 800DF158
  c->r[4]=0u+0x0000441Cu; // 800DF15C
  c->r[5]=0u+0x00000001u; // 800DF160
  c->lr=0x800DF168u; f_80064744(c); // 800DF164
  c->r[0]=0u+0x00000001u; // 800DF168
  W8(c->r[30]+0x000009D0u,c->r[0]); // 800DF16C
  W32(c->r[30]+0x000005C4u,c->r[0]); // 800DF170
L_800DF174:;
  c->r[3]=c->r[30]+0x00000354u; // 800DF174
  c->lr=0x800DF17Cu; f_800667AC(c); // 800DF178
  cmps(c,0,(int32_t)c->r[3],0); // 800DF17C
  if (crb(c,2)) { goto L_800DF26C; } // 800DF180
  cmps(c,0,(int32_t)c->r[31],17105); // 800DF184
  if (crb(c,2)) { goto L_800DF1B8; } // 800DF188
  cmps(c,0,(int32_t)c->r[31],17433); // 800DF18C
  if (crb(c,2)) { goto L_800DF1B8; } // 800DF190
  cmps(c,0,(int32_t)c->r[31],17106); // 800DF194
  if (crb(c,2)) { goto L_800DF23C; } // 800DF198
  cmps(c,0,(int32_t)c->r[31],17108); // 800DF19C
  if (crb(c,2)) { goto L_800DF264; } // 800DF1A0
  cmps(c,0,(int32_t)c->r[31],17434); // 800DF1A4
  if (crb(c,2)) { goto L_800DF250; } // 800DF1A8
  cmps(c,0,(int32_t)c->r[31],17436); // 800DF1AC
  if (crb(c,2)) { goto L_800DF264; } // 800DF1B0
  goto L_800DF26C; // 800DF1B4
L_800DF1B8:;
  c->r[0]=R32(c->r[30]+0x000005C4u); // 800DF1B8
  c->r[4]=0u+0x00000000u; // 800DF1BC
  cmps(c,0,(int32_t)c->r[0],0); // 800DF1C0
  if (crb(c,2)) { goto L_800DF1D4; } // 800DF1C4
  cmps(c,0,(int32_t)c->r[0],1); // 800DF1C8
  if (crb(c,2)) { goto L_800DF1DC; } // 800DF1CC
  goto L_800DF1E0; // 800DF1D0
L_800DF1D4:;
  c->r[4]=0u+0x000042D2u; // 800DF1D4
  goto L_800DF1E0; // 800DF1D8
L_800DF1DC:;
  c->r[4]=0u+0x0000441Au; // 800DF1DC
L_800DF1E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF1E0
  c->r[5]=0u+0x00000001u; // 800DF1E4
  c->lr=0x800DF1ECu; f_80064744(c); // 800DF1E8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800DF1EC
  c->r[3]=c->r[30]|c->r[30]; // 800DF1F0
  c->r[4]=c->r[1]+0x00000020u; // 800DF1F4
  c->r[12]=R32(c->r[12]+0x00000148u); // 800DF1F8
  c->ctr=c->r[12]; // 800DF1FC
  if (true) { c->lr=0x800DF204u; dispatch(c,c->ctr); } // 800DF200
  c->r[4]=c->r[3]|c->r[3]; // 800DF204
  c->r[3]=c->r[1]+0x00000008u; // 800DF208
  c->lr=0x800DF210u; f_80060878(c); // 800DF20C
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF210
  c->r[3]=c->r[30]|c->r[30]; // 800DF214
  {uint32_t ea=c->r[2]+0xFFFFA5A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF218
  c->r[4]=c->r[1]+0x00000008u; // 800DF21C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DF220
  c->lr=0x800DF228u; f_800634E8(c); // 800DF224
  c->r[3]=R32(c->r[30]+0x00000404u); // 800DF228
  c->lr=0x800DF230u; f_802EA43C(c); // 800DF22C
  c->r[3]=c->r[30]|c->r[30]; // 800DF230
  c->lr=0x800DF238u; f_800E0B98(c); // 800DF234
  goto L_800DF26C; // 800DF238
L_800DF23C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF23C
  c->r[4]=0u+0x000042D3u; // 800DF240
  c->r[5]=0u+0x00000001u; // 800DF244
  c->lr=0x800DF24Cu; f_80064744(c); // 800DF248
  goto L_800DF26C; // 800DF24C
L_800DF250:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF250
  c->r[4]=0u+0x0000441Bu; // 800DF254
  c->r[5]=0u+0x00000001u; // 800DF258
  c->lr=0x800DF260u; f_80064744(c); // 800DF25C
  goto L_800DF26C; // 800DF260
L_800DF264:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF264
  c->lr=0x800DF26Cu; f_800DFD8C(c); // 800DF268
L_800DF26C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800DF26C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800DF270
  c->r[30]=R32(c->r[1]+0x00000088u); // 800DF274
  c->lr=c->r[0]; // 800DF278
  c->r[1]=c->r[1]+0x00000090u; // 800DF27C
  return; // 800DF280
}

// fn_800DF284
void f_800DF284(Ctx* __restrict c) {
  trace_call(0x800DF284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF284
  c->r[0]=c->lr; // 800DF288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF28C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF290
  c->r[30]=c->r[3]|c->r[3]; // 800DF294
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DF298
  cmps(c,0,(int32_t)c->r[5],0); // 800DF29C
  if (crb(c,2)) { goto L_800DF2AC; } // 800DF2A0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DF2A4
  goto L_800DF2B0; // 800DF2A8
L_800DF2AC:;
  c->r[0]=0u+0x00000000u; // 800DF2AC
L_800DF2B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF2B0
  if (!crb(c,2)) { goto L_800DF2C8; } // 800DF2B4
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DF2B8
  c->r[3]=c->r[30]|c->r[30]; // 800DF2BC
  c->r[5]=0u+0x00000001u; // 800DF2C0
  c->lr=0x800DF2C8u; f_80064744(c); // 800DF2C4
L_800DF2C8:;
  c->r[3]=c->r[30]+0x00000354u; // 800DF2C8
  c->lr=0x800DF2D0u; f_800C9374(c); // 800DF2CC
  c->r[31]=c->r[3]|c->r[3]; // 800DF2D0
  c->r[3]=c->r[30]+0x00000354u; // 800DF2D4
  c->lr=0x800DF2DCu; f_800667AC(c); // 800DF2D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF2DC
  if (crb(c,2)) { goto L_800DF308; } // 800DF2E0
  cmps(c,0,(int32_t)c->r[31],17421); // 800DF2E4
  if (!crb(c,2)) { goto L_800DF300; } // 800DF2E8
  c->r[3]=c->r[30]|c->r[30]; // 800DF2EC
  c->r[4]=0u+0x00004411u; // 800DF2F0
  c->r[5]=0u+0x00000001u; // 800DF2F4
  c->lr=0x800DF2FCu; f_80064744(c); // 800DF2F8
  goto L_800DF308; // 800DF2FC
L_800DF300:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF300
  c->lr=0x800DF308u; f_800DFD8C(c); // 800DF304
L_800DF308:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF308
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF30C
  c->lr=c->r[0]; // 800DF310
  c->r[1]=c->r[1]+0x00000010u; // 800DF314
  return; // 800DF318
}

// fn_800DF31C
void f_800DF31C(Ctx* __restrict c) {
  trace_call(0x800DF31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFC60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF31C
  c->r[0]=c->lr; // 800DF320
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800DF324
  c->r[11]=c->r[1]+0x000003A0u; // 800DF328
  c->lr=0x800DF330u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF32C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DF330
  c->r[29]=c->r[3]|c->r[3]; // 800DF334
  cmps(c,0,(int32_t)c->r[5],0); // 800DF338
  if (crb(c,2)) { goto L_800DF348; } // 800DF33C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DF340
  goto L_800DF34C; // 800DF344
L_800DF348:;
  c->r[0]=0u+0x00000000u; // 800DF348
L_800DF34C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF34C
  if (!crb(c,2)) { goto L_800DF378; } // 800DF350
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DF354
  c->r[3]=c->r[29]|c->r[29]; // 800DF358
  c->r[5]=0u+0x00000001u; // 800DF35C
  c->lr=0x800DF364u; f_80064744(c); // 800DF360
  c->r[3]=c->r[29]|c->r[29]; // 800DF364
  c->r[4]=0u+0x00000000u; // 800DF368
  c->lr=0x800DF370u; f_8005EA70(c); // 800DF36C
  c->r[0]=0u+0x00000000u; // 800DF370
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DF374
L_800DF378:;
  c->r[3]=c->r[29]+0x00000354u; // 800DF378
  c->lr=0x800DF380u; f_800C9374(c); // 800DF37C
  c->r[0]=c->r[3]+0xFFFFBCC6u; // 800DF380
  c->r[30]=c->r[3]|c->r[3]; // 800DF384
  cmpu(c,0,c->r[0],0x00000001u); // 800DF388
  if (crb(c,1)) { goto L_800DF4C4; } // 800DF38C
  c->r[3]=c->r[29]|c->r[29]; // 800DF390
  c->lr=0x800DF398u; f_8005EA80(c); // 800DF394
  cmps(c,0,(int32_t)c->r[3],0); // 800DF398
  if (crb(c,2)) { goto L_800DF440; } // 800DF39C
  c->r[3]=R32(c->r[29]+0x00000408u); // 800DF3A0
  c->lr=0x800DF3A8u; f_8005BB78(c); // 800DF3A4
  c->r[4]=c->r[3]|c->r[3]; // 800DF3A8
  c->r[3]=c->r[1]+0x00000038u; // 800DF3AC
  c->lr=0x800DF3B4u; f_800DF57C(c); // 800DF3B0
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF3B4
  c->r[3]=c->r[1]+0x00000014u; // 800DF3B8
  c->r[4]=c->r[1]+0x0000006Cu; // 800DF3BC
  c->lr=0x800DF3C4u; f_8005ED34(c); // 800DF3C0
  c->r[3]=c->r[1]+0x0000002Cu; // 800DF3C4
  c->r[4]=c->r[1]+0x00000060u; // 800DF3C8
  c->r[5]=c->r[1]+0x00000014u; // 800DF3CC
  c->lr=0x800DF3D4u; f_80073ACC(c); // 800DF3D0
  c->r[3]=c->r[29]|c->r[29]; // 800DF3D4
  c->r[4]=c->r[1]+0x0000002Cu; // 800DF3D8
  c->lr=0x800DF3E0u; f_8008930C(c); // 800DF3DC
  c->r[3]=c->r[29]|c->r[29]; // 800DF3E0
  c->r[4]=0u+0x00000001u; // 800DF3E4
  c->lr=0x800DF3ECu; f_8005EA70(c); // 800DF3E8
  c->r[3]=c->r[29]|c->r[29]; // 800DF3EC
  c->lr=0x800DF3F4u; f_8006053C(c); // 800DF3F0
  c->r[0]=0u+0x00000000u; // 800DF3F4
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DF3F8
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800DF3FC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF400
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF404
  fcmp(c,0,c->f[1],c->f[0]); // 800DF408
  if (crb(c,1)) { goto L_800DF424; } // 800DF40C
  c->r[3]=c->r[29]|c->r[29]; // 800DF410
  c->lr=0x800DF418u; f_800DD7B0(c); // 800DF414
  c->r[0]=0u+0x00004394u; // 800DF418
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DF41C
  goto L_800DF434; // 800DF420
L_800DF424:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF424
  c->r[4]=0u+0x0000433Cu; // 800DF428
  c->r[5]=0u+0x00000001u; // 800DF42C
  c->lr=0x800DF434u; f_80064744(c); // 800DF430
L_800DF434:;
  c->r[0]=0u+0x00000000u; // 800DF434
  W32(c->r[1]+0x00000380u,c->r[0]); // 800DF438
  goto L_800DF4C4; // 800DF43C
L_800DF440:;
  c->r[0]=R8(c->r[29]+0x000009D1u); // 800DF440
  cmps(c,0,(int32_t)c->r[0],0); // 800DF444
  if (crb(c,2)) { goto L_800DF4C4; } // 800DF448
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF44C
  c->r[3]=c->r[1]+0x00000008u; // 800DF450
  c->r[4]=c->r[29]+0x000006B0u; // 800DF454
  c->lr=0x800DF45Cu; f_8005ED34(c); // 800DF458
  c->r[3]=c->r[1]+0x00000020u; // 800DF45C
  c->r[4]=c->r[29]+0x000006A4u; // 800DF460
  c->r[5]=c->r[1]+0x00000008u; // 800DF464
  c->lr=0x800DF46Cu; f_80073ACC(c); // 800DF468
  c->r[3]=c->r[29]|c->r[29]; // 800DF46C
  c->r[4]=c->r[1]+0x00000020u; // 800DF470
  c->lr=0x800DF478u; f_8008930C(c); // 800DF474
  c->r[31]=0u+0x00000001u; // 800DF478
  W8(c->r[29]+0x000009D0u,c->r[31]); // 800DF47C
  c->r[3]=c->r[29]|c->r[29]; // 800DF480
  c->lr=0x800DF488u; f_8006053C(c); // 800DF484
  W32(c->r[29]+0x000005C4u,c->r[31]); // 800DF488
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800DF48C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF490
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF494
  fcmp(c,0,c->f[1],c->f[0]); // 800DF498
  if (crb(c,1)) { goto L_800DF4B4; } // 800DF49C
  c->r[3]=c->r[29]|c->r[29]; // 800DF4A0
  c->lr=0x800DF4A8u; f_800DD7B0(c); // 800DF4A4
  c->r[0]=0u+0x00004399u; // 800DF4A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DF4AC
  goto L_800DF4C4; // 800DF4B0
L_800DF4B4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF4B4
  c->r[4]=0u+0x0000433Du; // 800DF4B8
  c->r[5]=0u+0x00000001u; // 800DF4BC
  c->lr=0x800DF4C4u; f_80064744(c); // 800DF4C0
L_800DF4C4:;
  c->r[3]=c->r[29]+0x00000354u; // 800DF4C4
  c->lr=0x800DF4CCu; f_800667AC(c); // 800DF4C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF4CC
  if (crb(c,2)) { goto L_800DF564; } // 800DF4D0
  c->r[0]=c->r[30]+0xFFFFBCC6u; // 800DF4D4
  cmpu(c,0,c->r[0],0x00000001u); // 800DF4D8
  if (!crb(c,1)) { goto L_800DF4F4; } // 800DF4DC
  cmps(c,0,(int32_t)c->r[30],17212); // 800DF4E0
  if (crb(c,2)) { goto L_800DF500; } // 800DF4E4
  cmps(c,0,(int32_t)c->r[30],17213); // 800DF4E8
  if (crb(c,2)) { goto L_800DF534; } // 800DF4EC
  goto L_800DF564; // 800DF4F0
L_800DF4F4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF4F4
  c->lr=0x800DF4FCu; f_8006052C(c); // 800DF4F8
  goto L_800DF564; // 800DF4FC
L_800DF500:;
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800DF500
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF504
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF508
  fcmp(c,0,c->f[1],c->f[0]); // 800DF50C
  if (crb(c,1)) { goto L_800DF528; } // 800DF510
  c->r[3]=c->r[29]|c->r[29]; // 800DF514
  c->lr=0x800DF51Cu; f_800DD7B0(c); // 800DF518
  c->r[0]=0u+0x00004394u; // 800DF51C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DF520
  goto L_800DF564; // 800DF524
L_800DF528:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF528
  c->lr=0x800DF530u; f_800DFD8C(c); // 800DF52C
  goto L_800DF564; // 800DF530
L_800DF534:;
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 800DF534
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF538
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF53C
  fcmp(c,0,c->f[1],c->f[0]); // 800DF540
  if (crb(c,1)) { goto L_800DF55C; } // 800DF544
  c->r[3]=c->r[29]|c->r[29]; // 800DF548
  c->lr=0x800DF550u; f_800DD7B0(c); // 800DF54C
  c->r[0]=0u+0x00004399u; // 800DF550
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DF554
  goto L_800DF564; // 800DF558
L_800DF55C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF55C
  c->lr=0x800DF564u; f_800DFD8C(c); // 800DF560
L_800DF564:;
  c->r[11]=c->r[1]+0x000003A0u; // 800DF564
  c->lr=0x800DF56Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF568
  c->r[0]=R32(c->r[1]+0x000003A4u); // 800DF56C
  c->lr=c->r[0]; // 800DF570
  c->r[1]=c->r[1]+0x000003A0u; // 800DF574
  return; // 800DF578
}

// fn_800DF57C
void f_800DF57C(Ctx* __restrict c) {
  trace_call(0x800DF57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF57C
  c->r[0]=c->lr; // 800DF580
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF584
  c->r[11]=c->r[1]+0x00000020u; // 800DF588
  c->lr=0x800DF590u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF58C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DF590
  c->r[27]=c->r[3]|c->r[3]; // 800DF594
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DF598
  c->r[28]=c->r[4]|c->r[4]; // 800DF59C
  c->r[29]=c->r[3]+0x00000008u; // 800DF5A0
  c->r[30]=c->r[4]+0x00000008u; // 800DF5A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DF5A8
  c->r[31]=c->r[3]+0x00000348u; // 800DF5AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DF5B0
L_800DF5B4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800DF5B4
  c->r[3]=c->r[29]+0x00000020u; // 800DF5B8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800DF5BC
  c->r[4]=c->r[30]+0x00000020u; // 800DF5C0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DF5C4
  W32(c->r[29]+0x00000004u,c->r[0]); // 800DF5C8
  c->r[0]=R32(c->r[30]+0x00000008u); // 800DF5CC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800DF5D0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800DF5D4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800DF5D8
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DF5DC
  W32(c->r[29]+0x00000010u,c->r[0]); // 800DF5E0
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DF5E4
  W32(c->r[29]+0x00000014u,c->r[0]); // 800DF5E8
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF5EC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 800DF5F0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF5F4
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DF5F8
  c->lr=0x800DF600u; f_8005CD7C(c); // 800DF5FC
  c->r[3]=c->r[29]+0x0000002Cu; // 800DF600
  c->r[4]=c->r[30]+0x0000002Cu; // 800DF604
  c->lr=0x800DF60Cu; f_8005CD7C(c); // 800DF608
  c->r[3]=c->r[29]+0x00000038u; // 800DF60C
  c->r[4]=c->r[30]+0x00000038u; // 800DF610
  c->lr=0x800DF618u; f_8005CD7C(c); // 800DF614
  c->r[3]=c->r[29]+0x00000044u; // 800DF618
  c->r[4]=c->r[30]+0x00000044u; // 800DF61C
  c->lr=0x800DF624u; f_8005CD7C(c); // 800DF620
  c->r[3]=c->r[29]+0x00000050u; // 800DF624
  c->r[4]=c->r[30]+0x00000050u; // 800DF628
  c->lr=0x800DF630u; f_8005CD7C(c); // 800DF62C
  c->r[3]=c->r[29]+0x0000005Cu; // 800DF630
  c->r[4]=c->r[30]+0x0000005Cu; // 800DF634
  c->lr=0x800DF63Cu; f_8005CD7C(c); // 800DF638
  c->r[29]=c->r[29]+0x00000068u; // 800DF63C
  c->r[30]=c->r[30]+0x00000068u; // 800DF640
  cmpu(c,0,c->r[29],c->r[31]); // 800DF644
  if (crb(c,0)) { IRQCHK(c); goto L_800DF5B4; } // 800DF648
  c->r[0]=R32(c->r[28]+0x00000348u); // 800DF64C
  c->r[11]=c->r[1]+0x00000020u; // 800DF650
  W32(c->r[27]+0x00000348u,c->r[0]); // 800DF654
  c->r[3]=c->r[27]|c->r[27]; // 800DF658
  c->lr=0x800DF660u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF660
  c->lr=c->r[0]; // 800DF664
  c->r[1]=c->r[1]+0x00000020u; // 800DF668
  return; // 800DF66C
}

// fn_800DF670
void f_800DF670(Ctx* __restrict c) {
  trace_call(0x800DF670u);
  {uint32_t ea=c->r[1]+0xFFFFFC60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF670
  c->r[0]=c->lr; // 800DF674
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800DF678
  c->r[11]=c->r[1]+0x000003A0u; // 800DF67C
  c->lr=0x800DF684u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF680
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DF684
  c->r[29]=c->r[3]|c->r[3]; // 800DF688
  c->r[30]=c->r[4]|c->r[4]; // 800DF68C
  cmps(c,0,(int32_t)c->r[5],0); // 800DF690
  if (crb(c,2)) { goto L_800DF6A0; } // 800DF694
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DF698
  goto L_800DF6A4; // 800DF69C
L_800DF6A0:;
  c->r[0]=0u+0x00000000u; // 800DF6A0
L_800DF6A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF6A4
  if (!crb(c,2)) { goto L_800DF6E4; } // 800DF6A8
  c->r[4]=R32(c->r[4]+0x00000010u); // 800DF6AC
  c->r[3]=c->r[29]|c->r[29]; // 800DF6B0
  c->r[5]=0u+0x00000001u; // 800DF6B4
  c->lr=0x800DF6BCu; f_80064744(c); // 800DF6B8
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DF6BC
  cmps(c,0,(int32_t)c->r[0],17301); // 800DF6C0
  if (!crb(c,2)) { goto L_800DF6DC; } // 800DF6C4
  c->r[3]=c->r[29]|c->r[29]; // 800DF6C8
  c->r[4]=0u+0x00000000u; // 800DF6CC
  c->lr=0x800DF6D4u; f_8005EA70(c); // 800DF6D0
  c->r[0]=0u+0x00000000u; // 800DF6D4
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DF6D8
L_800DF6DC:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF6DC
  c->lr=0x800DF6E4u; f_800E0380(c); // 800DF6E0
L_800DF6E4:;
  c->r[3]=c->r[29]+0x00000354u; // 800DF6E4
  c->lr=0x800DF6ECu; f_800C9374(c); // 800DF6E8
  cmps(c,0,(int32_t)c->r[3],17301); // 800DF6EC
  c->r[31]=c->r[3]|c->r[3]; // 800DF6F0
  if (!crb(c,2)) { goto L_800DF848; } // 800DF6F4
  c->r[3]=R32(c->r[29]+0x00000404u); // 800DF6F8
  c->lr=0x800DF700u; f_802EA4B0(c); // 800DF6FC
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF700
  fcmp(c,0,c->f[0],c->f[1]); // 800DF704
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DF708
  if (!crb(c,2)) { goto L_800DF848; } // 800DF70C
  c->r[0]=R8(c->r[30]+0x00000014u); // 800DF710
  cmps(c,0,(int32_t)c->r[0],0); // 800DF714
  if (!crb(c,2)) { goto L_800DF7DC; } // 800DF718
  c->r[3]=c->r[29]|c->r[29]; // 800DF71C
  c->lr=0x800DF724u; f_8005EA80(c); // 800DF720
  cmps(c,0,(int32_t)c->r[3],0); // 800DF724
  if (crb(c,2)) { goto L_800DF790; } // 800DF728
  c->r[3]=R32(c->r[29]+0x00000408u); // 800DF72C
  c->lr=0x800DF734u; f_8005BB78(c); // 800DF730
  c->r[4]=c->r[3]|c->r[3]; // 800DF734
  c->r[3]=c->r[1]+0x00000044u; // 800DF738
  c->lr=0x800DF740u; f_800DF57C(c); // 800DF73C
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF740
  c->r[3]=c->r[1]+0x00000020u; // 800DF744
  c->r[4]=c->r[1]+0x00000078u; // 800DF748
  c->lr=0x800DF750u; f_8005ED34(c); // 800DF74C
  c->r[3]=c->r[1]+0x0000002Cu; // 800DF750
  c->r[4]=c->r[1]+0x0000006Cu; // 800DF754
  c->r[5]=c->r[1]+0x00000020u; // 800DF758
  c->lr=0x800DF760u; f_80073ACC(c); // 800DF75C
  c->r[3]=c->r[30]+0x00000018u; // 800DF760
  c->r[4]=c->r[1]+0x0000002Cu; // 800DF764
  c->lr=0x800DF76Cu; f_8005DC84(c); // 800DF768
  c->r[3]=c->r[29]|c->r[29]; // 800DF76C
  c->r[4]=0u+0x00000001u; // 800DF770
  c->lr=0x800DF778u; f_8005EA70(c); // 800DF774
  c->r[3]=0u+0x00000000u; // 800DF778
  W32(c->r[29]+0x000005C4u,c->r[3]); // 800DF77C
  c->r[0]=0u+0x00000001u; // 800DF780
  W8(c->r[30]+0x00000014u,c->r[0]); // 800DF784
  W32(c->r[1]+0x0000038Cu,c->r[3]); // 800DF788
  goto L_800DF848; // 800DF78C
L_800DF790:;
  c->r[0]=R8(c->r[29]+0x000009D1u); // 800DF790
  cmps(c,0,(int32_t)c->r[0],0); // 800DF794
  if (crb(c,2)) { goto L_800DF848; } // 800DF798
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF79C
  c->r[3]=c->r[1]+0x00000008u; // 800DF7A0
  c->r[4]=c->r[29]+0x000006B0u; // 800DF7A4
  c->lr=0x800DF7ACu; f_8005ED34(c); // 800DF7A8
  c->r[3]=c->r[1]+0x00000014u; // 800DF7AC
  c->r[4]=c->r[29]+0x000006A4u; // 800DF7B0
  c->r[5]=c->r[1]+0x00000008u; // 800DF7B4
  c->lr=0x800DF7BCu; f_80073ACC(c); // 800DF7B8
  c->r[3]=c->r[30]+0x00000018u; // 800DF7BC
  c->r[4]=c->r[1]+0x00000014u; // 800DF7C0
  c->lr=0x800DF7C8u; f_8005DC84(c); // 800DF7C4
  c->r[0]=0u+0x00000001u; // 800DF7C8
  W8(c->r[29]+0x000009D0u,c->r[0]); // 800DF7CC
  W32(c->r[29]+0x000005C4u,c->r[0]); // 800DF7D0
  W8(c->r[30]+0x00000014u,c->r[0]); // 800DF7D4
  goto L_800DF848; // 800DF7D8
L_800DF7DC:;
  c->r[4]=c->r[29]|c->r[29]; // 800DF7DC
  c->r[3]=c->r[1]+0x00000038u; // 800DF7E0
  c->lr=0x800DF7E8u; f_80061A48(c); // 800DF7E4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF7E8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF7EC
  fcmp(c,0,c->f[1],c->f[0]); // 800DF7F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DF7F4
  if (!crb(c,2)) { goto L_800DF848; } // 800DF7F8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DF7FC
  c->r[3]=c->r[29]|c->r[29]; // 800DF800
  c->r[4]=c->r[1]+0x00000038u; // 800DF804
  c->lr=0x800DF80Cu; f_8008930C(c); // 800DF808
  c->r[0]=R32(c->r[29]+0x000005C4u); // 800DF80C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF810
  if (crb(c,2)) { goto L_800DF824; } // 800DF814
  cmps(c,0,(int32_t)c->r[0],1); // 800DF818
  if (crb(c,2)) { goto L_800DF838; } // 800DF81C
  goto L_800DF848; // 800DF820
L_800DF824:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF824
  c->r[4]=0u+0x00004396u; // 800DF828
  c->r[5]=0u+0x00000001u; // 800DF82C
  c->lr=0x800DF834u; f_80064744(c); // 800DF830
  goto L_800DF848; // 800DF834
L_800DF838:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF838
  c->r[4]=0u+0x00004399u; // 800DF83C
  c->r[5]=0u+0x00000001u; // 800DF840
  c->lr=0x800DF848u; f_80064744(c); // 800DF844
L_800DF848:;
  c->r[3]=c->r[29]+0x00000354u; // 800DF848
  c->lr=0x800DF850u; f_800667AC(c); // 800DF84C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF850
  if (crb(c,2)) { goto L_800DF8C4; } // 800DF854
  cmps(c,0,(int32_t)c->r[31],17301); // 800DF858
  if (crb(c,2)) { goto L_800DF874; } // 800DF85C
  cmps(c,0,(int32_t)c->r[31],17305); // 800DF860
  if (crb(c,2)) { goto L_800DF8B4; } // 800DF864
  cmps(c,0,(int32_t)c->r[31],17422); // 800DF868
  if (crb(c,2)) { goto L_800DF8B4; } // 800DF86C
  goto L_800DF8C4; // 800DF870
L_800DF874:;
  c->r[0]=R32(c->r[29]+0x000005C4u); // 800DF874
  cmps(c,0,(int32_t)c->r[0],0); // 800DF878
  if (crb(c,2)) { goto L_800DF88C; } // 800DF87C
  cmps(c,0,(int32_t)c->r[0],1); // 800DF880
  if (crb(c,2)) { goto L_800DF8A0; } // 800DF884
  goto L_800DF8C4; // 800DF888
L_800DF88C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF88C
  c->r[4]=0u+0x00004396u; // 800DF890
  c->r[5]=0u+0x00000001u; // 800DF894
  c->lr=0x800DF89Cu; f_80064744(c); // 800DF898
  goto L_800DF8C4; // 800DF89C
L_800DF8A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF8A0
  c->r[4]=0u+0x00004399u; // 800DF8A4
  c->r[5]=0u+0x00000001u; // 800DF8A8
  c->lr=0x800DF8B0u; f_80064744(c); // 800DF8AC
  goto L_800DF8C4; // 800DF8B0
L_800DF8B4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF8B4
  c->r[4]=0u+0x0000439Eu; // 800DF8B8
  c->r[5]=0u+0x00000001u; // 800DF8BC
  c->lr=0x800DF8C4u; f_80064744(c); // 800DF8C0
L_800DF8C4:;
  c->r[11]=c->r[1]+0x000003A0u; // 800DF8C4
  c->lr=0x800DF8CCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF8C8
  c->r[0]=R32(c->r[1]+0x000003A4u); // 800DF8CC
  c->lr=c->r[0]; // 800DF8D0
  c->r[1]=c->r[1]+0x000003A0u; // 800DF8D4
  return; // 800DF8D8
}

// fn_800DF8DC
void f_800DF8DC(Ctx* __restrict c) {
  trace_call(0x800DF8DCu);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF8DC
  if (!crb(c,2)) { goto L_800DF8EC; } // 800DF8E0
  c->r[3]=c->r[3]+0x000005F4u; // 800DF8E4
  f_8005CDE8(c); return; // 800DF8E8
L_800DF8EC:;
  c->r[3]=0u+0x00000000u; // 800DF8EC
  return; // 800DF8F0
}

// fn_800DF8F4
void f_800DF8F4(Ctx* __restrict c) {
  trace_call(0x800DF8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF8F4
  c->r[0]=c->lr; // 800DF8F8
  c->r[4]=0u+0x00000000u; // 800DF8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF900
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF904
  c->r[30]=c->r[3]|c->r[3]; // 800DF908
  c->r[31]=0u+0xFFFFFFFFu; // 800DF90C
  c->lr=0x800DF914u; f_800DF8DC(c); // 800DF910
  cmps(c,0,(int32_t)c->r[3],0); // 800DF914
  if (crb(c,2)) { goto L_800DF920; } // 800DF918
  c->r[31]=0u+0x00000000u; // 800DF91C
L_800DF920:;
  cmps(c,0,(int32_t)c->r[31],-1); // 800DF920
  if (!crb(c,2)) { goto L_800DF930; } // 800DF924
  c->r[3]=0u+0x00000000u; // 800DF928
  goto L_800DF96C; // 800DF92C
L_800DF930:;
  c->r[3]=c->r[30]+0x00000354u; // 800DF930
  c->lr=0x800DF938u; f_800C9374(c); // 800DF934
  cmps(c,0,(int32_t)c->r[3],17000); // 800DF938
  if (crb(c,2)) { goto L_800DF948; } // 800DF93C
  cmps(c,0,(int32_t)c->r[3],17401); // 800DF940
  if (!crb(c,2)) { goto L_800DF950; } // 800DF944
L_800DF948:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF948
  c->lr=0x800DF950u; f_800DFD8C(c); // 800DF94C
L_800DF950:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DF950
  if (!crb(c,2)) { goto L_800DF968; } // 800DF954
  c->r[4]=c->r[31]|c->r[31]; // 800DF958
  c->r[3]=c->r[30]+0x000005F4u; // 800DF95C
  c->r[5]=0u+0x00000000u; // 800DF960
  c->lr=0x800DF968u; f_8005DCA0(c); // 800DF964
L_800DF968:;
  c->r[3]=0u+0x00000001u; // 800DF968
L_800DF96C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF970
  c->lr=c->r[0]; // 800DF974
  c->r[1]=c->r[1]+0x00000010u; // 800DF978
  return; // 800DF97C
}

// fn_800DF980
void f_800DF980(Ctx* __restrict c) {
  trace_call(0x800DF980u);
  c->r[5]=R32(c->r[3]+0x0000063Cu); // 800DF980
  cmps(c,0,(int32_t)c->r[5],0); // 800DF984
  if (crb(c,0)) { goto L_800DF994; } // 800DF988
  cmps(c,0,(int32_t)c->r[5],16); // 800DF98C
  if (crb(c,0)) { goto L_800DF99C; } // 800DF990
L_800DF994:;
  c->r[3]=0u+0x00000000u; // 800DF994
  return; // 800DF998
L_800DF99C:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800DF99C
  cmps(c,0,(int32_t)c->r[4],0); // 800DF9A0
  c->r[4]=c->r[3]+c->r[0]; // 800DF9A4
  c->r[4]=R32(c->r[4]+0x000005FCu); // 800DF9A8
  if (crb(c,2)) { goto L_800DF9B8; } // 800DF9AC
  c->r[0]=c->r[5]+0x00000001u; // 800DF9B0
  W32(c->r[3]+0x0000063Cu,c->r[0]); // 800DF9B4
L_800DF9B8:;
  c->r[3]=c->r[4]|c->r[4]; // 800DF9B8
  return; // 800DF9BC
}

// fn_800DF9C0
void f_800DF9C0(Ctx* __restrict c) {
  trace_call(0x800DF9C0u);
  c->r[4]=R32(c->r[3]+0x0000063Cu); // 800DF9C0
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800DF9C4
  W32(c->r[3]+0x0000063Cu,c->r[0]); // 800DF9C8
  if (!crb(c,0)) return; // 800DF9CC
  c->r[0]=0u+0x00000000u; // 800DF9D0
  W32(c->r[3]+0x0000063Cu,c->r[0]); // 800DF9D4
  return; // 800DF9D8
}

// fn_800DF9DC
void f_800DF9DC(Ctx* __restrict c) {
  trace_call(0x800DF9DCu);
  cmpu(c,0,c->r[4],0x0000000Cu); // 800DF9DC
  if (crb(c,1)) return; // 800DF9E0
  c->r[5]=0u+0x806D0000u; // 800DF9E4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800DF9E8
  c->r[5]=c->r[5]+0x00007B98u; // 800DF9EC
  c->r[5]=R32(c->r[5]+c->r[0]); // 800DF9F0
  c->ctr=c->r[5]; // 800DF9F4
  if (true) { switch (c->ctr) { case 0x800DF9FCu: goto L_800DF9FC; case 0x800DFA04u: goto L_800DFA04; case 0x800DFA0Cu: goto L_800DFA0C; case 0x800DFA14u: goto L_800DFA14; case 0x800DFA1Cu: goto L_800DFA1C; case 0x800DFA24u: goto L_800DFA24; case 0x800DFA2Cu: goto L_800DFA2C; case 0x800DFA34u: goto L_800DFA34; case 0x800DFA3Cu: goto L_800DFA3C; case 0x800DFA44u: goto L_800DFA44; case 0x800DFA4Cu: goto L_800DFA4C; case 0x800DFA54u: goto L_800DFA54; case 0x800DFA5Cu: goto L_800DFA5C; default: break; } dispatch(c,c->ctr); return; } // 800DF9F8
L_800DF9FC:;
  c->r[3]=0u+0x00000000u; // 800DF9FC
  return; // 800DFA00
L_800DFA04:;
  c->r[3]=0u+0x00004268u; // 800DFA04
  return; // 800DFA08
L_800DFA0C:;
  c->r[3]=0u+0x000043F9u; // 800DFA0C
  return; // 800DFA10
L_800DFA14:;
  c->r[3]=0u+0x00004272u; // 800DFA14
  return; // 800DFA18
L_800DFA1C:;
  c->r[3]=0u+0x00004273u; // 800DFA1C
  return; // 800DFA20
L_800DFA24:;
  c->r[3]=0u+0x00004402u; // 800DFA24
  return; // 800DFA28
L_800DFA2C:;
  c->r[3]=0u+0x00004403u; // 800DFA2C
  return; // 800DFA30
L_800DFA34:;
  c->r[3]=0u+0x00004281u; // 800DFA34
  return; // 800DFA38
L_800DFA3C:;
  c->r[3]=0u+0x00004407u; // 800DFA3C
  return; // 800DFA40
L_800DFA44:;
  c->r[3]=0u+0x0000426Au; // 800DFA44
  return; // 800DFA48
L_800DFA4C:;
  c->r[3]=0u+0x000043FBu; // 800DFA4C
  return; // 800DFA50
L_800DFA54:;
  c->r[3]=0u+0x000042D1u; // 800DFA54
  return; // 800DFA58
L_800DFA5C:;
  c->r[3]=0u+0x00004419u; // 800DFA5C
  return; // 800DFA60
}

// fn_800DFA64
void f_800DFA64(Ctx* __restrict c) {
  trace_call(0x800DFA64u);
  c->r[0]=c->r[4]+0xFFFFFFF3u; // 800DFA64
  c->r[3]=0u+0x00000001u; // 800DFA68
  cmpu(c,0,c->r[0],0x00000007u); // 800DFA6C
  if (crb(c,1)) return; // 800DFA70
  c->r[4]=0u+0x806D0000u; // 800DFA74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DFA78
  c->r[4]=c->r[4]+0x00007BCCu; // 800DFA7C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800DFA80
  c->ctr=c->r[4]; // 800DFA84
  if (true) { switch (c->ctr) { case 0x800DFA8Cu: goto L_800DFA8C; case 0x800DFA94u: goto L_800DFA94; case 0x800DFA9Cu: goto L_800DFA9C; case 0x800DFAA4u: goto L_800DFAA4; case 0x800DFAACu: goto L_800DFAAC; case 0x800DFAB4u: goto L_800DFAB4; case 0x800DFABCu: goto L_800DFABC; case 0x800DFAC4u: goto L_800DFAC4; default: break; } dispatch(c,c->ctr); return; } // 800DFA88
L_800DFA8C:;
  c->r[3]=0u+0x00000001u; // 800DFA8C
  return; // 800DFA90
L_800DFA94:;
  c->r[3]=0u+0x00000002u; // 800DFA94
  return; // 800DFA98
L_800DFA9C:;
  c->r[3]=0u+0x00000003u; // 800DFA9C
  return; // 800DFAA0
L_800DFAA4:;
  c->r[3]=0u+0x00000004u; // 800DFAA4
  return; // 800DFAA8
L_800DFAAC:;
  c->r[3]=0u+0x00000005u; // 800DFAAC
  return; // 800DFAB0
L_800DFAB4:;
  c->r[3]=0u+0x00000006u; // 800DFAB4
  return; // 800DFAB8
L_800DFABC:;
  c->r[3]=0u+0x00000007u; // 800DFABC
  return; // 800DFAC0
L_800DFAC4:;
  c->r[3]=0u+0x00000008u; // 800DFAC4
  return; // 800DFAC8
}

// fn_800DFACC
void f_800DFACC(Ctx* __restrict c) {
  trace_call(0x800DFACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFACC
  c->r[0]=c->lr; // 800DFAD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFAD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFAD8
  c->r[26]=c->r[3]|c->r[3]; // 800DFADC
  c->r[4]=R32(c->r[3]+0x0000041Cu); // 800DFAE0
  c->r[3]=c->r[4]+0x00000004u; // 800DFAE4
  c->lr=0x800DFAECu; f_800A097C(c); // 800DFAE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DFAEC
  if (crb(c,2)) { goto L_800DFD78; } // 800DFAF0
  c->r[3]=c->r[26]+0x000005FCu; // 800DFAF4
  c->r[31]=0u+0x00000000u; // 800DFAF8
  c->r[4]=0u+0x00000000u; // 800DFAFC
  c->r[5]=0u+0x00000040u; // 800DFB00
  c->lr=0x800DFB08u; f_800043EC(c); // 800DFB04
  c->r[30]=0u+0x80690000u; // 800DFB08
  W32(c->r[26]+0x0000063Cu,c->r[31]); // 800DFB0C
  c->r[29]=0u+0x00000000u; // 800DFB10
  c->r[30]=c->r[30]+0xFFFFEA04u; // 800DFB14
L_800DFB18:;
  c->r[3]=R32(c->r[26]+0x0000041Cu); // 800DFB18
  c->r[4]=c->r[29]|c->r[29]; // 800DFB1C
  c->r[28]=0u+0x00000000u; // 800DFB20
  c->lr=0x800DFB28u; f_800C2EE0(c); // 800DFB24
  c->r[27]=c->r[3]|c->r[3]; // 800DFB28
  c->r[3]=c->r[30]+0x0000000Cu; // 800DFB2C
  c->r[4]=c->r[27]|c->r[27]; // 800DFB30
  c->lr=0x800DFB38u; f_803B393C(c); // 800DFB34
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB38
  if (!crb(c,2)) { goto L_800DFB48; } // 800DFB3C
  c->r[28]=0u+0x00000001u; // 800DFB40
  goto L_800DFD58; // 800DFB44
L_800DFB48:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFB48
  c->r[3]=c->r[30]+0x00000014u; // 800DFB4C
  c->lr=0x800DFB54u; f_803B393C(c); // 800DFB50
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB54
  if (!crb(c,2)) { goto L_800DFB64; } // 800DFB58
  c->r[28]=0u+0x00000002u; // 800DFB5C
  goto L_800DFD58; // 800DFB60
L_800DFB64:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFB64
  c->r[3]=c->r[30]+0x0000001Cu; // 800DFB68
  c->lr=0x800DFB70u; f_803B393C(c); // 800DFB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB70
  if (!crb(c,2)) { goto L_800DFB80; } // 800DFB74
  c->r[28]=0u+0x00000003u; // 800DFB78
  goto L_800DFD58; // 800DFB7C
L_800DFB80:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFB80
  c->r[3]=c->r[30]+0x0000002Du; // 800DFB84
  c->lr=0x800DFB8Cu; f_803B393C(c); // 800DFB88
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB8C
  if (!crb(c,2)) { goto L_800DFB9C; } // 800DFB90
  c->r[28]=0u+0x00000004u; // 800DFB94
  goto L_800DFD58; // 800DFB98
L_800DFB9C:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFB9C
  c->r[3]=c->r[30]+0x00000021u; // 800DFBA0
  c->lr=0x800DFBA8u; f_803B393C(c); // 800DFBA4
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBA8
  if (!crb(c,2)) { goto L_800DFBB8; } // 800DFBAC
  c->r[28]=0u+0x00000005u; // 800DFBB0
  goto L_800DFD58; // 800DFBB4
L_800DFBB8:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFBB8
  c->r[3]=c->r[30]+0x00000026u; // 800DFBBC
  c->lr=0x800DFBC4u; f_803B393C(c); // 800DFBC0
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBC4
  if (!crb(c,2)) { goto L_800DFBD4; } // 800DFBC8
  c->r[28]=0u+0x00000006u; // 800DFBCC
  goto L_800DFD58; // 800DFBD0
L_800DFBD4:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFBD4
  c->r[3]=c->r[30]+0x00000037u; // 800DFBD8
  c->lr=0x800DFBE0u; f_803B393C(c); // 800DFBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBE0
  if (!crb(c,2)) { goto L_800DFBF0; } // 800DFBE4
  c->r[28]=0u+0x00000007u; // 800DFBE8
  goto L_800DFD58; // 800DFBEC
L_800DFBF0:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFBF0
  c->r[3]=c->r[30]+0x00000043u; // 800DFBF4
  c->lr=0x800DFBFCu; f_803B393C(c); // 800DFBF8
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBFC
  if (!crb(c,2)) { goto L_800DFC0C; } // 800DFC00
  c->r[28]=0u+0x00000008u; // 800DFC04
  goto L_800DFD58; // 800DFC08
L_800DFC0C:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC0C
  c->r[3]=c->r[30]+0x0000004Fu; // 800DFC10
  c->lr=0x800DFC18u; f_803B393C(c); // 800DFC14
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC18
  if (!crb(c,2)) { goto L_800DFC28; } // 800DFC1C
  c->r[28]=0u+0x00000009u; // 800DFC20
  goto L_800DFD58; // 800DFC24
L_800DFC28:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC28
  c->r[3]=c->r[30]+0x00000058u; // 800DFC2C
  c->lr=0x800DFC34u; f_803B393C(c); // 800DFC30
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC34
  if (!crb(c,2)) { goto L_800DFC44; } // 800DFC38
  c->r[28]=0u+0x0000000Au; // 800DFC3C
  goto L_800DFD58; // 800DFC40
L_800DFC44:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC44
  c->r[3]=c->r[30]+0x00000061u; // 800DFC48
  c->lr=0x800DFC50u; f_803B393C(c); // 800DFC4C
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC50
  if (!crb(c,2)) { goto L_800DFC60; } // 800DFC54
  c->r[28]=0u+0x0000000Bu; // 800DFC58
  goto L_800DFD58; // 800DFC5C
L_800DFC60:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC60
  c->r[3]=c->r[30]+0x00000074u; // 800DFC64
  c->lr=0x800DFC6Cu; f_803B393C(c); // 800DFC68
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC6C
  if (!crb(c,2)) { goto L_800DFC7C; } // 800DFC70
  c->r[28]=0u+0x0000000Cu; // 800DFC74
  goto L_800DFD58; // 800DFC78
L_800DFC7C:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC7C
  c->r[3]=c->r[30]+0x00000087u; // 800DFC80
  c->lr=0x800DFC88u; f_803B393C(c); // 800DFC84
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC88
  if (!crb(c,2)) { goto L_800DFC98; } // 800DFC8C
  c->r[28]=0u+0x0000000Du; // 800DFC90
  goto L_800DFD58; // 800DFC94
L_800DFC98:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFC98
  c->r[3]=c->r[30]+0x0000008Bu; // 800DFC9C
  c->lr=0x800DFCA4u; f_803B393C(c); // 800DFCA0
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCA4
  if (!crb(c,2)) { goto L_800DFCB4; } // 800DFCA8
  c->r[28]=0u+0x0000000Eu; // 800DFCAC
  goto L_800DFD58; // 800DFCB0
L_800DFCB4:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFCB4
  c->r[3]=c->r[30]+0x0000008Fu; // 800DFCB8
  c->lr=0x800DFCC0u; f_803B393C(c); // 800DFCBC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCC0
  if (!crb(c,2)) { goto L_800DFCD0; } // 800DFCC4
  c->r[28]=0u+0x0000000Fu; // 800DFCC8
  goto L_800DFD58; // 800DFCCC
L_800DFCD0:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFCD0
  c->r[3]=c->r[30]+0x00000093u; // 800DFCD4
  c->lr=0x800DFCDCu; f_803B393C(c); // 800DFCD8
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCDC
  if (!crb(c,2)) { goto L_800DFCEC; } // 800DFCE0
  c->r[28]=0u+0x00000010u; // 800DFCE4
  goto L_800DFD58; // 800DFCE8
L_800DFCEC:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFCEC
  c->r[3]=c->r[30]+0x00000097u; // 800DFCF0
  c->lr=0x800DFCF8u; f_803B393C(c); // 800DFCF4
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCF8
  if (!crb(c,2)) { goto L_800DFD08; } // 800DFCFC
  c->r[28]=0u+0x00000011u; // 800DFD00
  goto L_800DFD58; // 800DFD04
L_800DFD08:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFD08
  c->r[3]=c->r[30]+0x0000009Bu; // 800DFD0C
  c->lr=0x800DFD14u; f_803B393C(c); // 800DFD10
  cmps(c,0,(int32_t)c->r[3],0); // 800DFD14
  if (!crb(c,2)) { goto L_800DFD24; } // 800DFD18
  c->r[28]=0u+0x00000012u; // 800DFD1C
  goto L_800DFD58; // 800DFD20
L_800DFD24:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFD24
  c->r[3]=c->r[30]+0x0000009Fu; // 800DFD28
  c->lr=0x800DFD30u; f_803B393C(c); // 800DFD2C
  cmps(c,0,(int32_t)c->r[3],0); // 800DFD30
  if (!crb(c,2)) { goto L_800DFD40; } // 800DFD34
  c->r[28]=0u+0x00000013u; // 800DFD38
  goto L_800DFD58; // 800DFD3C
L_800DFD40:;
  c->r[4]=c->r[27]|c->r[27]; // 800DFD40
  c->r[3]=c->r[30]+0x000000A3u; // 800DFD44
  c->lr=0x800DFD4Cu; f_803B393C(c); // 800DFD48
  cmps(c,0,(int32_t)c->r[3],0); // 800DFD4C
  if (!crb(c,2)) { goto L_800DFD58; } // 800DFD50
  c->r[28]=0u+0x00000014u; // 800DFD54
L_800DFD58:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DFD58
  if (crb(c,2)) { goto L_800DFD6C; } // 800DFD5C
  c->r[3]=c->r[26]+c->r[31]; // 800DFD60
  c->r[31]=c->r[31]+0x00000004u; // 800DFD64
  W32(c->r[3]+0x000005FCu,c->r[28]); // 800DFD68
L_800DFD6C:;
  c->r[29]=c->r[29]+0x00000001u; // 800DFD6C
  cmps(c,0,(int32_t)c->r[29],16); // 800DFD70
  if (crb(c,0)) { IRQCHK(c); goto L_800DFB18; } // 800DFD74
L_800DFD78:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFD78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFD7C
  c->lr=c->r[0]; // 800DFD80
  c->r[1]=c->r[1]+0x00000020u; // 800DFD84
  return; // 800DFD88
}

// fn_800DFD8C
void f_800DFD8C(Ctx* __restrict c) {
  trace_call(0x800DFD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFD8C
  c->r[0]=c->lr; // 800DFD90
  c->r[4]=0u+0x00000001u; // 800DFD94
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DFD98
  {uint32_t ea=c->r[1]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFD9C
  c->r[31]=c->r[1]|c->r[1]; // 800DFDA0
  c->r[30]=c->r[3]|c->r[3]; // 800DFDA4
  c->lr=0x800DFDACu; f_800DF980(c); // 800DFDA8
  c->r[27]=c->r[3]|c->r[3]; // 800DFDAC
  c->r[3]=c->r[30]+0x00000354u; // 800DFDB0
  c->lr=0x800DFDB8u; f_800C9374(c); // 800DFDB4
  cmpu(c,0,c->r[27],0x00000014u); // 800DFDB8
  if (crb(c,1)) { goto L_800E0040; } // 800DFDBC
  c->r[3]=0u+0x806D0000u; // 800DFDC0
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800DFDC4
  c->r[3]=c->r[3]+0x00007BECu; // 800DFDC8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DFDCC
  c->ctr=c->r[3]; // 800DFDD0
  if (true) { switch (c->ctr) { case 0x800DFDD8u: goto L_800DFDD8; case 0x800DFDF8u: goto L_800DFDF8; case 0x800DFE18u: goto L_800DFE18; case 0x800DFE88u: goto L_800DFE88; case 0x800DFEF8u: goto L_800DFEF8; case 0x800DFF7Cu: goto L_800DFF7C; case 0x800DFFB0u: goto L_800DFFB0; case 0x800E0038u: goto L_800E0038; default: break; } dispatch(c,c->ctr); return; } // 800DFDD4
L_800DFDD8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFDD8
  c->r[4]=c->r[27]|c->r[27]; // 800DFDDC
  c->lr=0x800DFDE4u; f_800DF9DC(c); // 800DFDE0
  c->r[29]=c->r[3]|c->r[3]; // 800DFDE4
  c->r[3]=c->r[30]|c->r[30]; // 800DFDE8
  c->lr=0x800DFDF0u; f_800E005C(c); // 800DFDEC
  W32(c->r[3]+0x00000010u,c->r[29]); // 800DFDF0
  goto L_800E0040; // 800DFDF4
L_800DFDF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFDF8
  c->r[4]=c->r[27]|c->r[27]; // 800DFDFC
  c->lr=0x800DFE04u; f_800DF9DC(c); // 800DFE00
  c->r[29]=c->r[3]|c->r[3]; // 800DFE04
  c->r[3]=c->r[30]|c->r[30]; // 800DFE08
  c->lr=0x800DFE10u; f_800DDE60(c); // 800DFE0C
  W32(c->r[3]+0x00000010u,c->r[29]); // 800DFE10
  goto L_800E0040; // 800DFE14
L_800DFE18:;
  c->lr=0x800DFE1Cu; f_800DC2F4(c); // 800DFE18
  c->r[4]=c->r[3]|c->r[3]; // 800DFE1C
  c->r[3]=c->r[30]|c->r[30]; // 800DFE20
  c->lr=0x800DFE28u; f_80062F4C(c); // 800DFE24
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DFE28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DFE2C
  c->r[3]=c->r[30]+c->r[0]; // 800DFE30
  c->r[28]=R32(c->r[3]+0x00000014u); // 800DFE34
  cmps(c,0,(int32_t)c->r[28],0); // 800DFE38
  if (crb(c,2)) { goto L_800DFE64; } // 800DFE3C
  c->r[29]=0u+0x00000000u; // 800DFE40
  W32(c->r[31]+0x00000074u,c->r[1]); // 800DFE44
  W8(c->r[31]+0x00000014u,c->r[29]); // 800DFE48
  c->lr=0x800DFE50u; f_800DC2F4(c); // 800DFE4C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800DFE50
  c->r[0]=c->r[13]+0xFFFF849Cu; // 800DFE54
  W32(c->r[28]+0x00000004u,c->r[0]); // 800DFE58
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DFE5C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800DFE60
L_800DFE64:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800DFE64
  c->r[0]=0u+0x00000000u; // 800DFE68
  c->r[3]=c->r[30]|c->r[30]; // 800DFE6C
  c->r[4]=c->r[28]|c->r[28]; // 800DFE70
  W32(c->r[28]+0x00000008u,c->r[0]); // 800DFE74
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DFE78
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DFE7C
  c->lr=0x800DFE84u; f_8006306C(c); // 800DFE80
  goto L_800E0040; // 800DFE84
L_800DFE88:;
  c->lr=0x800DFE8Cu; f_800DC250(c); // 800DFE88
  c->r[4]=c->r[3]|c->r[3]; // 800DFE8C
  c->r[3]=c->r[30]|c->r[30]; // 800DFE90
  c->lr=0x800DFE98u; f_80062F4C(c); // 800DFE94
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DFE98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DFE9C
  c->r[3]=c->r[30]+c->r[0]; // 800DFEA0
  c->r[28]=R32(c->r[3]+0x00000014u); // 800DFEA4
  cmps(c,0,(int32_t)c->r[28],0); // 800DFEA8
  if (crb(c,2)) { goto L_800DFED4; } // 800DFEAC
  c->r[29]=0u+0x00000000u; // 800DFEB0
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 800DFEB4
  W8(c->r[31]+0x00000010u,c->r[29]); // 800DFEB8
  c->lr=0x800DFEC0u; f_800DC250(c); // 800DFEBC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800DFEC0
  c->r[0]=c->r[13]+0xFFFF8498u; // 800DFEC4
  W32(c->r[28]+0x00000004u,c->r[0]); // 800DFEC8
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DFECC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800DFED0
L_800DFED4:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800DFED4
  c->r[0]=0u+0x00000000u; // 800DFED8
  c->r[3]=c->r[30]|c->r[30]; // 800DFEDC
  c->r[4]=c->r[28]|c->r[28]; // 800DFEE0
  W32(c->r[28]+0x00000008u,c->r[0]); // 800DFEE4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DFEE8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DFEEC
  c->lr=0x800DFEF4u; f_8006306C(c); // 800DFEF0
  goto L_800E0040; // 800DFEF4
L_800DFEF8:;
  c->lr=0x800DFEFCu; f_800DC064(c); // 800DFEF8
  c->r[4]=c->r[3]|c->r[3]; // 800DFEFC
  c->r[3]=c->r[30]|c->r[30]; // 800DFF00
  c->lr=0x800DFF08u; f_80062F4C(c); // 800DFF04
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DFF08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DFF0C
  c->r[3]=c->r[30]+c->r[0]; // 800DFF10
  c->r[28]=R32(c->r[3]+0x00000014u); // 800DFF14
  cmps(c,0,(int32_t)c->r[28],0); // 800DFF18
  if (crb(c,2)) { goto L_800DFF48; } // 800DFF1C
  c->r[29]=0u+0x00000000u; // 800DFF20
  W32(c->r[31]+0x00000044u,c->r[1]); // 800DFF24
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 800DFF28
  c->lr=0x800DFF30u; f_800DC064(c); // 800DFF2C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800DFF30
  c->r[0]=c->r[13]+0xFFFF848Cu; // 800DFF34
  W32(c->r[28]+0x00000004u,c->r[0]); // 800DFF38
  W32(c->r[28]+0x00000008u,c->r[29]); // 800DFF3C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800DFF40
  W32(c->r[28]+0x00000010u,c->r[29]); // 800DFF44
L_800DFF48:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800DFF48
  c->r[0]=0u+0x00000000u; // 800DFF4C
  c->r[3]=c->r[30]|c->r[30]; // 800DFF50
  c->r[4]=c->r[28]|c->r[28]; // 800DFF54
  W32(c->r[28]+0x00000008u,c->r[0]); // 800DFF58
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DFF5C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DFF60
  c->lr=0x800DFF68u; f_8006306C(c); // 800DFF64
  c->r[3]=c->r[30]|c->r[30]; // 800DFF68
  c->r[4]=c->r[27]|c->r[27]; // 800DFF6C
  c->lr=0x800DFF74u; f_800DF9DC(c); // 800DFF70
  W32(c->r[28]+0x00000010u,c->r[3]); // 800DFF74
  goto L_800E0040; // 800DFF78
L_800DFF7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFF7C
  c->r[4]=c->r[27]|c->r[27]; // 800DFF80
  c->lr=0x800DFF88u; f_800DF9DC(c); // 800DFF84
  c->r[27]=c->r[3]|c->r[3]; // 800DFF88
  c->r[3]=c->r[30]|c->r[30]; // 800DFF8C
  c->r[4]=c->r[27]|c->r[27]; // 800DFF90
  c->lr=0x800DFF98u; f_800E0450(c); // 800DFF94
  c->r[29]=c->r[3]|c->r[3]; // 800DFF98
  c->r[3]=c->r[30]|c->r[30]; // 800DFF9C
  c->lr=0x800DFFA4u; f_800DECE0(c); // 800DFFA0
  W32(c->r[3]+0x00000010u,c->r[27]); // 800DFFA4
  W32(c->r[3]+0x00000014u,c->r[29]); // 800DFFA8
  goto L_800E0040; // 800DFFAC
L_800DFFB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFFB0
  c->r[4]=c->r[27]|c->r[27]; // 800DFFB4
  c->lr=0x800DFFBCu; f_800DFA64(c); // 800DFFB8
  c->r[4]=c->r[3]|c->r[3]; // 800DFFBC
  c->r[3]=c->r[30]|c->r[30]; // 800DFFC0
  c->lr=0x800DFFC8u; f_800E03FC(c); // 800DFFC4
  c->lr=0x800DFFCCu; f_800DC398(c); // 800DFFC8
  c->r[4]=c->r[3]|c->r[3]; // 800DFFCC
  c->r[3]=c->r[30]|c->r[30]; // 800DFFD0
  c->lr=0x800DFFD8u; f_80062F4C(c); // 800DFFD4
  c->r[0]=R8(c->r[30]+0x00000010u); // 800DFFD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DFFDC
  c->r[3]=c->r[30]+c->r[0]; // 800DFFE0
  c->r[28]=R32(c->r[3]+0x00000014u); // 800DFFE4
  cmps(c,0,(int32_t)c->r[28],0); // 800DFFE8
  if (crb(c,2)) { goto L_800E0014; } // 800DFFEC
  c->r[29]=0u+0x00000000u; // 800DFFF0
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800DFFF4
  W8(c->r[31]+0x00000008u,c->r[29]); // 800DFFF8
  c->lr=0x800E0000u; f_800DC398(c); // 800DFFFC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800E0000
  c->r[0]=c->r[13]+0xFFFF84A0u; // 800E0004
  W32(c->r[28]+0x00000004u,c->r[0]); // 800E0008
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E000C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800E0010
L_800E0014:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800E0014
  c->r[0]=0u+0x00000000u; // 800E0018
  c->r[3]=c->r[30]|c->r[30]; // 800E001C
  c->r[4]=c->r[28]|c->r[28]; // 800E0020
  W32(c->r[28]+0x00000008u,c->r[0]); // 800E0024
  c->r[0]=R32(c->r[30]+0x00000004u); // 800E0028
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E002C
  c->lr=0x800E0034u; f_8006306C(c); // 800E0030
  goto L_800E0040; // 800E0034
L_800E0038:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0038
  c->lr=0x800E0040u; f_800E01A8(c); // 800E003C
L_800E0040:;
  c->r[10]=c->r[31]|c->r[31]; // 800E0040
  {uint32_t ea=c->r[10]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0044
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E0048
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E004C
  c->r[1]=c->r[10]|c->r[10]; // 800E0050
  c->lr=c->r[0]; // 800E0054
  return; // 800E0058
}

// fn_800E005C
void f_800E005C(Ctx* __restrict c) {
  trace_call(0x800E005Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E005C
  c->r[0]=c->lr; // 800E0060
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E0064
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0068
  c->r[31]=c->r[1]|c->r[1]; // 800E006C
  c->r[28]=c->r[3]|c->r[3]; // 800E0070
  c->lr=0x800E0078u; f_800DC628(c); // 800E0074
  c->r[4]=c->r[3]|c->r[3]; // 800E0078
  c->r[3]=c->r[28]|c->r[28]; // 800E007C
  c->lr=0x800E0084u; f_80062F4C(c); // 800E0080
  c->r[0]=R8(c->r[28]+0x00000010u); // 800E0084
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0088
  c->r[3]=c->r[28]+c->r[0]; // 800E008C
  c->r[29]=R32(c->r[3]+0x00000014u); // 800E0090
  cmps(c,0,(int32_t)c->r[29],0); // 800E0094
  if (crb(c,2)) { goto L_800E00C4; } // 800E0098
  c->r[30]=0u+0x00000000u; // 800E009C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E00A0
  W8(c->r[31]+0x00000008u,c->r[30]); // 800E00A4
  c->lr=0x800E00ACu; f_800DC628(c); // 800E00A8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E00AC
  c->r[0]=c->r[13]+0xFFFF84B0u; // 800E00B0
  W32(c->r[29]+0x00000004u,c->r[0]); // 800E00B4
  W32(c->r[29]+0x00000008u,c->r[30]); // 800E00B8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800E00BC
  W32(c->r[29]+0x00000010u,c->r[30]); // 800E00C0
L_800E00C4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E00C4
  c->r[0]=0u+0x00000000u; // 800E00C8
  c->r[3]=c->r[28]|c->r[28]; // 800E00CC
  c->r[4]=c->r[29]|c->r[29]; // 800E00D0
  W32(c->r[29]+0x00000008u,c->r[0]); // 800E00D4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800E00D8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800E00DC
  c->lr=0x800E00E4u; f_8006306C(c); // 800E00E0
  c->r[10]=c->r[31]|c->r[31]; // 800E00E4
  c->r[3]=c->r[29]|c->r[29]; // 800E00E8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E00EC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E00F0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E00F4
  c->r[1]=c->r[10]|c->r[10]; // 800E00F8
  c->lr=c->r[0]; // 800E00FC
  return; // 800E0100
}

// fn_800E0104
void f_800E0104(Ctx* __restrict c) {
  trace_call(0x800E0104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0104
  c->r[0]=c->lr; // 800E0108
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E010C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0110
  c->r[28]=c->r[3]|c->r[3]; // 800E0114
  c->r[30]=0u+0xFFFFFFFFu; // 800E0118
  c->r[0]=R32(c->r[3]+0x000005C4u); // 800E011C
  cmps(c,0,(int32_t)c->r[0],0); // 800E0120
  if (crb(c,2)) { goto L_800E0134; } // 800E0124
  cmps(c,0,(int32_t)c->r[0],1); // 800E0128
  if (crb(c,2)) { goto L_800E013C; } // 800E012C
  goto L_800E0140; // 800E0130
L_800E0134:;
  c->r[30]=0u+0x00000000u; // 800E0134
  goto L_800E0140; // 800E0138
L_800E013C:;
  c->r[30]=0u+0x00000001u; // 800E013C
L_800E0140:;
  c->r[31]=R32(c->r[3]+0x000005CCu); // 800E0140
  c->r[29]=0u+0x00000001u; // 800E0144
  c->r[3]=c->r[31]|c->r[31]; // 800E0148
  c->lr=0x800E0150u; f_803A91D4(c); // 800E014C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0150
  if (crb(c,2)) { goto L_800E0174; } // 800E0154
  c->r[3]=R32(c->r[28]+0x00000434u); // 800E0158
  c->r[4]=c->r[31]|c->r[31]; // 800E015C
  c->lr=0x800E0164u; f_800FE0C8(c); // 800E0160
  cmps(c,0,(int32_t)c->r[3],0); // 800E0164
  if (!crb(c,2)) { goto L_800E0178; } // 800E0168
  c->r[29]=0u+0x00000000u; // 800E016C
  goto L_800E0178; // 800E0170
L_800E0174:;
  c->r[29]=0u+0x00000000u; // 800E0174
L_800E0178:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E0178
  if (!crb(c,2)) { goto L_800E018C; } // 800E017C
  c->r[3]=R32(c->r[28]+0x00000434u); // 800E0180
  c->r[4]=c->r[30]|c->r[30]; // 800E0184
  c->lr=0x800E018Cu; f_800FE038(c); // 800E0188
L_800E018C:;
  c->r[3]=R32(c->r[28]+0x00000434u); // 800E018C
  c->lr=0x800E0194u; f_800FE178(c); // 800E0190
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0194
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0198
  c->lr=c->r[0]; // 800E019C
  c->r[1]=c->r[1]+0x00000020u; // 800E01A0
  return; // 800E01A4
}

// fn_800E01A8
void f_800E01A8(Ctx* __restrict c) {
  trace_call(0x800E01A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E01A8
  c->r[0]=c->lr; // 800E01AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E01B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E01B4
  c->r[31]=c->r[1]|c->r[1]; // 800E01B8
  c->r[30]=c->r[3]|c->r[3]; // 800E01BC
  c->lr=0x800E01C4u; f_800E0104(c); // 800E01C0
  cmpu(c,0,c->r[3],0x00000008u); // 800E01C4
  c->r[28]=0u+0x00000000u; // 800E01C8
  if (crb(c,1)) { goto L_800E02FC; } // 800E01CC
  c->r[4]=0u+0x806D0000u; // 800E01D0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E01D4
  c->r[4]=c->r[4]+0x00007C40u; // 800E01D8
  c->r[4]=R32(c->r[4]+c->r[0]); // 800E01DC
  c->ctr=c->r[4]; // 800E01E0
  if (true) { switch (c->ctr) { case 0x800E01E8u: goto L_800E01E8; case 0x800E01F0u: goto L_800E01F0; case 0x800E01F8u: goto L_800E01F8; case 0x800E0200u: goto L_800E0200; case 0x800E0208u: goto L_800E0208; case 0x800E0210u: goto L_800E0210; case 0x800E0218u: goto L_800E0218; case 0x800E022Cu: goto L_800E022C; case 0x800E0240u: goto L_800E0240; default: break; } dispatch(c,c->ctr); return; } // 800E01E4
L_800E01E8:;
  c->r[28]=0u+0x000042D1u; // 800E01E8
  goto L_800E02FC; // 800E01EC
L_800E01F0:;
  c->r[28]=0u+0x000042CEu; // 800E01F0
  goto L_800E02FC; // 800E01F4
L_800E01F8:;
  c->r[28]=0u+0x000042CDu; // 800E01F8
  goto L_800E02FC; // 800E01FC
L_800E0200:;
  c->r[28]=0u+0x00004419u; // 800E0200
  goto L_800E02FC; // 800E0204
L_800E0208:;
  c->r[28]=0u+0x00004416u; // 800E0208
  goto L_800E02FC; // 800E020C
L_800E0210:;
  c->r[28]=0u+0x00004417u; // 800E0210
  goto L_800E02FC; // 800E0214
L_800E0218:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0218
  c->lr=0x800E0220u; f_800E005C(c); // 800E021C
  c->r[0]=0u+0x00004268u; // 800E0220
  W32(c->r[3]+0x00000010u,c->r[0]); // 800E0224
  goto L_800E0364; // 800E0228
L_800E022C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E022C
  c->lr=0x800E0234u; f_800E005C(c); // 800E0230
  c->r[0]=0u+0x000043F9u; // 800E0234
  W32(c->r[3]+0x00000010u,c->r[0]); // 800E0238
  goto L_800E0364; // 800E023C
L_800E0240:;
  c->r[0]=R32(c->r[30]+0x000005C4u); // 800E0240
  cmps(c,0,(int32_t)c->r[0],1); // 800E0244
  if (!crb(c,2)) { goto L_800E028C; } // 800E0248
  c->r[5]=0u+0x80690000u; // 800E024C
  {uint32_t ea=c->r[5]+0xFFFFE9F8u; c->r[4]=R32(ea); c->r[5]=ea;} // 800E0250
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800E0254
  c->r[3]=R32(c->r[5]+0x00000004u); // 800E0258
  c->r[0]=R32(c->r[5]+0x00000008u); // 800E025C
  W32(c->r[31]+0x00000010u,c->r[3]); // 800E0260
  W32(c->r[31]+0x00000014u,c->r[0]); // 800E0264
  c->lr=0x800E026Cu; f_803B220C(c); // 800E0268
  c->r[5]=0u+0x00000003u; // 800E026C
  c->r[4]=c->r[31]+0x0000000Cu; // 800E0270
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 800E0274
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800E0278
  c->r[0]=c->r[3]-c->r[0]; // 800E027C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0280
  c->r[28]=R32(c->r[4]+c->r[0]); // 800E0284
  goto L_800E02FC; // 800E0288
L_800E028C:;
  c->lr=0x800E0290u; f_800DC108(c); // 800E028C
  c->r[4]=c->r[3]|c->r[3]; // 800E0290
  c->r[3]=c->r[30]|c->r[30]; // 800E0294
  c->lr=0x800E029Cu; f_80062F4C(c); // 800E0298
  c->r[0]=R8(c->r[30]+0x00000010u); // 800E029C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E02A0
  c->r[3]=c->r[30]+c->r[0]; // 800E02A4
  c->r[28]=R32(c->r[3]+0x00000014u); // 800E02A8
  cmps(c,0,(int32_t)c->r[28],0); // 800E02AC
  if (crb(c,2)) { goto L_800E02D8; } // 800E02B0
  c->r[29]=0u+0x00000000u; // 800E02B4
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800E02B8
  W8(c->r[31]+0x00000008u,c->r[29]); // 800E02BC
  c->lr=0x800E02C4u; f_800DC108(c); // 800E02C0
  W32(c->r[28]+0x00000000u,c->r[3]); // 800E02C4
  c->r[0]=c->r[13]+0xFFFF8490u; // 800E02C8
  W32(c->r[28]+0x00000004u,c->r[0]); // 800E02CC
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E02D0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 800E02D4
L_800E02D8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800E02D8
  c->r[0]=0u+0x00000000u; // 800E02DC
  c->r[3]=c->r[30]|c->r[30]; // 800E02E0
  c->r[4]=c->r[28]|c->r[28]; // 800E02E4
  W32(c->r[28]+0x00000008u,c->r[0]); // 800E02E8
  c->r[0]=R32(c->r[30]+0x00000004u); // 800E02EC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E02F0
  c->lr=0x800E02F8u; f_8006306C(c); // 800E02F4
  goto L_800E0364; // 800E02F8
L_800E02FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800E02FC
  c->r[4]=c->r[28]|c->r[28]; // 800E0300
  c->lr=0x800E0308u; f_800E0450(c); // 800E0304
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E0308
  c->r[29]=c->r[3]|c->r[3]; // 800E030C
  cmpu(c,0,c->r[0],0x00000001u); // 800E0310
  if (!crb(c,1)) { goto L_800E0324; } // 800E0314
  cmps(c,0,(int32_t)c->r[3],0); // 800E0318
  if (crb(c,2)) { goto L_800E0338; } // 800E031C
  goto L_800E0364; // 800E0320
L_800E0324:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0324
  c->lr=0x800E032Cu; f_800DECE0(c); // 800E0328
  W32(c->r[3]+0x00000010u,c->r[28]); // 800E032C
  W32(c->r[3]+0x00000014u,c->r[29]); // 800E0330
  goto L_800E0364; // 800E0334
L_800E0338:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0338
  c->lr=0x800E0340u; f_8006117C(c); // 800E033C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0340
  if (crb(c,2)) { goto L_800E0358; } // 800E0344
  c->r[3]=c->r[30]|c->r[30]; // 800E0348
  c->r[4]=c->r[28]|c->r[28]; // 800E034C
  c->lr=0x800E0354u; f_800E0580(c); // 800E0350
  goto L_800E0364; // 800E0354
L_800E0358:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0358
  c->lr=0x800E0360u; f_800DE4E4(c); // 800E035C
  W32(c->r[3]+0x00000010u,c->r[28]); // 800E0360
L_800E0364:;
  c->r[10]=c->r[31]|c->r[31]; // 800E0364
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0368
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E036C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E0370
  c->r[1]=c->r[10]|c->r[10]; // 800E0374
  c->lr=c->r[0]; // 800E0378
  return; // 800E037C
}

// fn_800E0380
void f_800E0380(Ctx* __restrict c) {
  trace_call(0x800E0380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0380
  c->r[0]=c->lr; // 800E0384
  c->r[4]=0u+0x00000016u; // 800E0388
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E038C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0390
  c->r[31]=c->r[3]|c->r[3]; // 800E0394
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800E0398
  c->r[3]=c->r[5]+0x000000C4u; // 800E039C
  c->lr=0x800E03A4u; f_8005CDE8(c); // 800E03A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E03A4
  if (!crb(c,2)) { goto L_800E03E8; } // 800E03A8
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 800E03AC
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E03B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E03B4
  fcmp(c,0,c->f[1],c->f[0]); // 800E03B8
  if (!crb(c,1)) { goto L_800E03CC; } // 800E03BC
  c->r[3]=c->r[31]|c->r[31]; // 800E03C0
  c->lr=0x800E03C8u; f_8005E00C(c); // 800E03C4
  goto L_800E03DC; // 800E03C8
L_800E03CC:;
  c->r[3]=c->r[3]+0x000000C4u; // 800E03CC
  c->r[4]=0u+0x00000016u; // 800E03D0
  c->r[5]=0u+0x00000001u; // 800E03D4
  c->lr=0x800E03DCu; f_8005DCA0(c); // 800E03D8
L_800E03DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800E03DC
  c->r[4]=0u+0x00000000u; // 800E03E0
  c->lr=0x800E03E8u; f_8005EE88(c); // 800E03E4
L_800E03E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E03E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E03EC
  c->lr=c->r[0]; // 800E03F0
  c->r[1]=c->r[1]+0x00000010u; // 800E03F4
  return; // 800E03F8
}

// fn_800E03FC
void f_800E03FC(Ctx* __restrict c) {
  trace_call(0x800E03FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E03FC
  c->r[0]=c->lr; // 800E0400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0408
  c->r[30]=c->r[3]|c->r[3]; // 800E040C
  c->r[31]=c->r[4]|c->r[4]; // 800E0410
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 800E0414
  c->lr=0x800E041Cu; f_800C2DF8(c); // 800E0418
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800E041C
  c->r[3]=c->r[30]+c->r[0]; // 800E0420
  c->r[4]=R32(c->r[3]+0x000005D0u); // 800E0424
  cmps(c,0,(int32_t)c->r[4],0); // 800E0428
  if (crb(c,2)) { goto L_800E043C; } // 800E042C
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 800E0430
  c->r[3]=c->r[3]+0x00000004u; // 800E0434
  c->lr=0x800E043Cu; f_800A0914(c); // 800E0438
L_800E043C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E043C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0440
  c->lr=c->r[0]; // 800E0444
  c->r[1]=c->r[1]+0x00000010u; // 800E0448
  return; // 800E044C
}

// fn_800E0450
void f_800E0450(Ctx* __restrict c) {
  trace_call(0x800E0450u);
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 800E0450
  cmps(c,0,(int32_t)c->r[4],17105); // 800E0454
  c->r[3]=0u+0x00000000u; // 800E0458
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E045C
  if (crb(c,2)) { goto L_800E0490; } // 800E0460
  cmps(c,0,(int32_t)c->r[4],17102); // 800E0464
  if (crb(c,2)) { goto L_800E04B8; } // 800E0468
  cmps(c,0,(int32_t)c->r[4],17101); // 800E046C
  if (crb(c,2)) { goto L_800E04E0; } // 800E0470
  cmps(c,0,(int32_t)c->r[4],17433); // 800E0474
  if (crb(c,2)) { goto L_800E0508; } // 800E0478
  cmps(c,0,(int32_t)c->r[4],17430); // 800E047C
  if (crb(c,2)) { goto L_800E0530; } // 800E0480
  cmps(c,0,(int32_t)c->r[4],17431); // 800E0484
  if (crb(c,2)) { goto L_800E0558; } // 800E0488
  return; // 800E048C
L_800E0490:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0490
  fcmp(c,0,c->f[1],c->f[0]); // 800E0494
  if (!crb(c,0)) { goto L_800E04A4; } // 800E0498
  c->r[3]=0u+0x00000001u; // 800E049C
  return; // 800E04A0
L_800E04A4:;
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04A4
  fcmp(c,0,c->f[0],c->f[1]); // 800E04A8
  if (!crb(c,0)) return; // 800E04AC
  c->r[3]=0u+0x00000002u; // 800E04B0
  return; // 800E04B4
L_800E04B8:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04B8
  fcmp(c,0,c->f[1],c->f[0]); // 800E04BC
  if (!crb(c,0)) { goto L_800E04CC; } // 800E04C0
  c->r[3]=0u+0x00000001u; // 800E04C4
  return; // 800E04C8
L_800E04CC:;
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04CC
  fcmp(c,0,c->f[0],c->f[1]); // 800E04D0
  if (!crb(c,0)) return; // 800E04D4
  c->r[3]=0u+0x00000002u; // 800E04D8
  return; // 800E04DC
L_800E04E0:;
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04E0
  fcmp(c,0,c->f[1],c->f[0]); // 800E04E4
  if (!crb(c,0)) { goto L_800E04F4; } // 800E04E8
  c->r[3]=0u+0x00000001u; // 800E04EC
  return; // 800E04F0
L_800E04F4:;
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E04F4
  fcmp(c,0,c->f[0],c->f[1]); // 800E04F8
  if (!crb(c,0)) return; // 800E04FC
  c->r[3]=0u+0x00000002u; // 800E0500
  return; // 800E0504
L_800E0508:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0508
  fcmp(c,0,c->f[1],c->f[0]); // 800E050C
  if (!crb(c,0)) { goto L_800E051C; } // 800E0510
  c->r[3]=0u+0x00000001u; // 800E0514
  return; // 800E0518
L_800E051C:;
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E051C
  fcmp(c,0,c->f[0],c->f[1]); // 800E0520
  if (!crb(c,0)) return; // 800E0524
  c->r[3]=0u+0x00000002u; // 800E0528
  return; // 800E052C
L_800E0530:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0530
  fcmp(c,0,c->f[1],c->f[0]); // 800E0534
  if (!crb(c,0)) { goto L_800E0544; } // 800E0538
  c->r[3]=0u+0x00000001u; // 800E053C
  return; // 800E0540
L_800E0544:;
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0544
  fcmp(c,0,c->f[0],c->f[1]); // 800E0548
  if (!crb(c,0)) return; // 800E054C
  c->r[3]=0u+0x00000002u; // 800E0550
  return; // 800E0554
L_800E0558:;
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0558
  fcmp(c,0,c->f[1],c->f[0]); // 800E055C
  if (!crb(c,0)) { goto L_800E056C; } // 800E0560
  c->r[3]=0u+0x00000001u; // 800E0564
  return; // 800E0568
L_800E056C:;
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E056C
  fcmp(c,0,c->f[0],c->f[1]); // 800E0570
  if (!crb(c,0)) return; // 800E0574
  c->r[3]=0u+0x00000002u; // 800E0578
  return; // 800E057C
}

// fn_800E0580
void f_800E0580(Ctx* __restrict c) {
  trace_call(0x800E0580u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0580
  c->r[0]=c->lr; // 800E0584
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E0588
  c->r[0]=c->r[4]+0xFFFFBD33u; // 800E058C
  cmpu(c,0,c->r[0],0x00000001u); // 800E0590
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0594
  c->r[31]=c->r[1]|c->r[1]; // 800E0598
  c->r[29]=c->r[3]|c->r[3]; // 800E059C
  c->r[30]=c->r[4]|c->r[4]; // 800E05A0
  if (!crb(c,1)) { goto L_800E063C; } // 800E05A4
  c->r[0]=c->r[4]+0xFFFFBBEAu; // 800E05A8
  cmpu(c,0,c->r[0],0x00000001u); // 800E05AC
  if (!crb(c,1)) { goto L_800E063C; } // 800E05B0
  cmps(c,0,(int32_t)c->r[4],17105); // 800E05B4
  if (crb(c,2)) { goto L_800E05C4; } // 800E05B8
  cmps(c,0,(int32_t)c->r[4],17433); // 800E05BC
  if (!crb(c,2)) { goto L_800E06B0; } // 800E05C0
L_800E05C4:;
  c->lr=0x800E05C8u; f_800DBF1C(c); // 800E05C4
  c->r[4]=c->r[3]|c->r[3]; // 800E05C8
  c->r[3]=c->r[29]|c->r[29]; // 800E05CC
  c->lr=0x800E05D4u; f_80062F4C(c); // 800E05D0
  c->r[0]=R8(c->r[29]+0x00000010u); // 800E05D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E05D8
  c->r[3]=c->r[29]+c->r[0]; // 800E05DC
  c->r[27]=R32(c->r[3]+0x00000014u); // 800E05E0
  cmps(c,0,(int32_t)c->r[27],0); // 800E05E4
  if (crb(c,2)) { goto L_800E0614; } // 800E05E8
  c->r[28]=0u+0x00000000u; // 800E05EC
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800E05F0
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 800E05F4
  c->lr=0x800E05FCu; f_800DBF1C(c); // 800E05F8
  W32(c->r[27]+0x00000000u,c->r[3]); // 800E05FC
  c->r[0]=c->r[13]+0xFFFF8484u; // 800E0600
  W32(c->r[27]+0x00000004u,c->r[0]); // 800E0604
  W32(c->r[27]+0x00000008u,c->r[28]); // 800E0608
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800E060C
  W32(c->r[27]+0x00000010u,c->r[28]); // 800E0610
L_800E0614:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800E0614
  c->r[0]=0u+0x00000000u; // 800E0618
  c->r[3]=c->r[29]|c->r[29]; // 800E061C
  c->r[4]=c->r[27]|c->r[27]; // 800E0620
  W32(c->r[27]+0x00000008u,c->r[0]); // 800E0624
  c->r[0]=R32(c->r[29]+0x00000004u); // 800E0628
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E062C
  c->lr=0x800E0634u; f_8006306C(c); // 800E0630
  W32(c->r[27]+0x00000010u,c->r[30]); // 800E0634
  goto L_800E06B0; // 800E0638
L_800E063C:;
  c->lr=0x800E0640u; f_800DBFC0(c); // 800E063C
  c->r[4]=c->r[3]|c->r[3]; // 800E0640
  c->r[3]=c->r[29]|c->r[29]; // 800E0644
  c->lr=0x800E064Cu; f_80062F4C(c); // 800E0648
  c->r[0]=R8(c->r[29]+0x00000010u); // 800E064C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0650
  c->r[3]=c->r[29]+c->r[0]; // 800E0654
  c->r[27]=R32(c->r[3]+0x00000014u); // 800E0658
  cmps(c,0,(int32_t)c->r[27],0); // 800E065C
  if (crb(c,2)) { goto L_800E068C; } // 800E0660
  c->r[28]=0u+0x00000000u; // 800E0664
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E0668
  W8(c->r[31]+0x00000008u,c->r[28]); // 800E066C
  c->lr=0x800E0674u; f_800DBFC0(c); // 800E0670
  W32(c->r[27]+0x00000000u,c->r[3]); // 800E0674
  c->r[0]=c->r[13]+0xFFFF8488u; // 800E0678
  W32(c->r[27]+0x00000004u,c->r[0]); // 800E067C
  W32(c->r[27]+0x00000008u,c->r[28]); // 800E0680
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800E0684
  W32(c->r[27]+0x00000010u,c->r[28]); // 800E0688
L_800E068C:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 800E068C
  c->r[0]=0u+0x00000000u; // 800E0690
  c->r[3]=c->r[29]|c->r[29]; // 800E0694
  c->r[4]=c->r[27]|c->r[27]; // 800E0698
  W32(c->r[27]+0x00000008u,c->r[0]); // 800E069C
  c->r[0]=R32(c->r[29]+0x00000004u); // 800E06A0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800E06A4
  c->lr=0x800E06ACu; f_8006306C(c); // 800E06A8
  W32(c->r[27]+0x00000010u,c->r[30]); // 800E06AC
L_800E06B0:;
  c->r[10]=c->r[31]|c->r[31]; // 800E06B0
  {uint32_t ea=c->r[10]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E06B4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E06B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E06BC
  c->r[1]=c->r[10]|c->r[10]; // 800E06C0
  c->lr=c->r[0]; // 800E06C4
  return; // 800E06C8
}

// fn_800E06CC
void f_800E06CC(Ctx* __restrict c) {
  trace_call(0x800E06CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E06CC
  c->r[0]=c->lr; // 800E06D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E06D4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800E06D8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800E06DC
  c->f[31]=c->f[1]; // 800E06E0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E06E4
  c->r[31]=c->r[3]|c->r[3]; // 800E06E8
  c->r[4]=c->r[31]|c->r[31]; // 800E06EC
  c->r[3]=c->r[1]+0x00000020u; // 800E06F0
  c->lr=0x800E06F8u; f_80061A48(c); // 800E06F4
  c->r[3]=c->r[1]+0x00000014u; // 800E06F8
  c->r[4]=c->r[31]+0x00000640u; // 800E06FC
  c->lr=0x800E0704u; f_8005CD7C(c); // 800E0700
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0704
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800E0708
  fcmp(c,0,c->f[0],c->f[31]); // 800E070C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800E0710
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E0714
  if (crb(c,2)) { goto L_800E0730; } // 800E0718
  c->r[3]=c->r[1]+0x00000014u; // 800E071C
  c->lr=0x800E0724u; f_80084FAC(c); // 800E0720
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0724
  fcmp(c,0,c->f[1],c->f[0]); // 800E0728
  if (crb(c,2)) { goto L_800E0760; } // 800E072C
L_800E0730:;
  c->r[3]=c->r[1]+0x00000008u; // 800E0730
  c->r[4]=c->r[1]+0x00000014u; // 800E0734
  c->r[5]=c->r[1]+0x00000020u; // 800E0738
  c->lr=0x800E0740u; f_8005FC60(c); // 800E073C
  c->r[3]=c->r[1]+0x00000008u; // 800E0740
  c->lr=0x800E0748u; f_80060DC8(c); // 800E0744
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800E0748
  fcmp(c,0,c->f[1],c->f[0]); // 800E074C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E0750
  if (!crb(c,2)) { goto L_800E0760; } // 800E0754
  c->r[3]=0u+0x00000001u; // 800E0758
  goto L_800E0764; // 800E075C
L_800E0760:;
  c->r[3]=0u+0x00000000u; // 800E0760
L_800E0764:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E0764
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800E0768
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800E076C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E0770
  c->lr=c->r[0]; // 800E0774
  c->r[1]=c->r[1]+0x00000050u; // 800E0778
  return; // 800E077C
}

// fn_800E0780
void f_800E0780(Ctx* __restrict c) {
  trace_call(0x800E0780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0780
  c->r[0]=c->lr; // 800E0784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0788
  c->r[3]=R32(c->r[3]+0x00000420u); // 800E078C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800E0790
  cmps(c,0,(int32_t)c->r[3],2); // 800E0794
  if (!crb(c,0)) { goto L_800E07E4; } // 800E0798
  c->r[0]=c->r[3]+0x00000001u; // 800E079C
  cmpu(c,0,c->r[0],0x00000002u); // 800E07A0
  if (!crb(c,1)) { goto L_800E07B0; } // 800E07A4
  c->r[3]=0u+0x0000427Du; // 800E07A8
  goto L_800E07E8; // 800E07AC
L_800E07B0:;
  c->r[3]=R32(c->r[2]+0xFFFFA5B8u); // 800E07B0
  c->r[0]=R32(c->r[2]+0xFFFFA5BCu); // 800E07B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E07B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E07BC
  c->lr=0x800E07C4u; f_803B220C(c); // 800E07C0
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800E07C4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800E07C8
  c->r[0]=c->r[0]^c->r[4]; // 800E07CC
  c->r[3]=c->r[1]+0x00000008u; // 800E07D0
  c->r[0]=c->r[0]-c->r[4]; // 800E07D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E07D8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E07DC
  goto L_800E07E8; // 800E07E0
L_800E07E4:;
  c->r[3]=0u+0x0000427Cu; // 800E07E4
L_800E07E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E07E8
  c->lr=c->r[0]; // 800E07EC
  c->r[1]=c->r[1]+0x00000010u; // 800E07F0
  return; // 800E07F4
}

// fn_800E07F8
void f_800E07F8(Ctx* __restrict c) {
  trace_call(0x800E07F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E07F8
  c->r[0]=c->lr; // 800E07FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0800
  c->r[0]=R32(c->r[3]+0x000005C4u); // 800E0804
  cmps(c,0,(int32_t)c->r[0],0); // 800E0808
  if (crb(c,2)) { goto L_800E081C; } // 800E080C
  cmps(c,0,(int32_t)c->r[0],1); // 800E0810
  if (crb(c,2)) { goto L_800E0850; } // 800E0814
  goto L_800E0854; // 800E0818
L_800E081C:;
  c->r[3]=R32(c->r[2]+0xFFFFA5C0u); // 800E081C
  c->r[0]=R32(c->r[2]+0xFFFFA5C4u); // 800E0820
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E0824
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E0828
  c->lr=0x800E0830u; f_803B220C(c); // 800E082C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800E0830
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800E0834
  c->r[0]=c->r[0]^c->r[4]; // 800E0838
  c->r[3]=c->r[1]+0x00000008u; // 800E083C
  c->r[0]=c->r[0]-c->r[4]; // 800E0840
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0844
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E0848
  goto L_800E0854; // 800E084C
L_800E0850:;
  c->r[3]=0u+0x0000440Eu; // 800E0850
L_800E0854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0854
  c->lr=c->r[0]; // 800E0858
  c->r[1]=c->r[1]+0x00000010u; // 800E085C
  return; // 800E0860
}

// fn_800E0864
void f_800E0864(Ctx* __restrict c) {
  trace_call(0x800E0864u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0864
  c->r[0]=c->lr; // 800E0868
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E086C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E0870
  c->r[31]=c->r[3]|c->r[3]; // 800E0874
  c->r[3]=c->r[1]+0x00000008u; // 800E0878
  c->r[4]=c->r[31]+0x00000450u; // 800E087C
  c->lr=0x800E0884u; f_800DD878(c); // 800E0880
  c->r[0]=R32(c->r[31]+0x000005C4u); // 800E0884
  c->r[4]=R32(c->r[1]+0x00000038u); // 800E0888
  cmps(c,0,(int32_t)c->r[0],0); // 800E088C
  if (crb(c,2)) { goto L_800E08A0; } // 800E0890
  cmps(c,0,(int32_t)c->r[0],1); // 800E0894
  if (crb(c,2)) { goto L_800E090C; } // 800E0898
  goto L_800E0914; // 800E089C
L_800E08A0:;
  cmps(c,0,(int32_t)c->r[4],2); // 800E08A0
  if (crb(c,2)) { goto L_800E08DC; } // 800E08A4
  cmps(c,0,(int32_t)c->r[4],13); // 800E08A8
  if (crb(c,2)) { goto L_800E08E8; } // 800E08AC
  cmps(c,0,(int32_t)c->r[4],7); // 800E08B0
  if (crb(c,2)) { goto L_800E08E8; } // 800E08B4
  cmps(c,0,(int32_t)c->r[4],10); // 800E08B8
  if (crb(c,2)) { goto L_800E08E8; } // 800E08BC
  cmps(c,0,(int32_t)c->r[4],12); // 800E08C0
  if (crb(c,2)) { goto L_800E08F4; } // 800E08C4
  cmps(c,0,(int32_t)c->r[4],6); // 800E08C8
  if (crb(c,2)) { goto L_800E08F4; } // 800E08CC
  cmps(c,0,(int32_t)c->r[4],9); // 800E08D0
  if (crb(c,2)) { goto L_800E08F4; } // 800E08D4
  goto L_800E0900; // 800E08D8
L_800E08DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800E08DC
  c->lr=0x800E08E4u; f_800E0928(c); // 800E08E0
  goto L_800E0914; // 800E08E4
L_800E08E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800E08E8
  c->lr=0x800E08F0u; f_800E0968(c); // 800E08EC
  goto L_800E0914; // 800E08F0
L_800E08F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E08F4
  c->lr=0x800E08FCu; f_800E09E4(c); // 800E08F8
  goto L_800E0914; // 800E08FC
L_800E0900:;
  c->r[3]=c->r[31]|c->r[31]; // 800E0900
  c->lr=0x800E0908u; f_800E0A60(c); // 800E0904
  goto L_800E0914; // 800E0908
L_800E090C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E090C
  c->lr=0x800E0914u; f_800E0AA4(c); // 800E0910
L_800E0914:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E0914
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E0918
  c->lr=c->r[0]; // 800E091C
  c->r[1]=c->r[1]+0x00000090u; // 800E0920
  return; // 800E0924
}

// fn_800E0928
void f_800E0928(Ctx* __restrict c) {
  trace_call(0x800E0928u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0928
  c->r[0]=c->lr; // 800E092C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0930
  c->lr=0x800E0938u; f_80060974(c); // 800E0934
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800E0938
  cmpu(c,0,c->r[0],0x00000001u); // 800E093C
  if (!crb(c,1)) { goto L_800E0954; } // 800E0940
  cmps(c,0,(int32_t)c->r[3],1); // 800E0944
  if (!crb(c,2)) { goto L_800E0958; } // 800E0948
  c->r[3]=0u+0x00004330u; // 800E094C
  goto L_800E0958; // 800E0950
L_800E0954:;
  c->r[3]=0u+0x0000433Au; // 800E0954
L_800E0958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0958
  c->lr=c->r[0]; // 800E095C
  c->r[1]=c->r[1]+0x00000010u; // 800E0960
  return; // 800E0964
}

// fn_800E0968
void f_800E0968(Ctx* __restrict c) {
  trace_call(0x800E0968u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0968
  c->r[0]=c->lr; // 800E096C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0970
  c->lr=0x800E0978u; f_80060974(c); // 800E0974
  cmps(c,0,(int32_t)c->r[3],1); // 800E0978
  if (crb(c,2)) { goto L_800E0994; } // 800E097C
  cmps(c,0,(int32_t)c->r[3],2); // 800E0980
  if (crb(c,2)) { goto L_800E099C; } // 800E0984
  cmps(c,0,(int32_t)c->r[3],3); // 800E0988
  if (crb(c,2)) { goto L_800E09D0; } // 800E098C
  goto L_800E09D4; // 800E0990
L_800E0994:;
  c->r[3]=0u+0x00004331u; // 800E0994
  goto L_800E09D4; // 800E0998
L_800E099C:;
  c->r[3]=R32(c->r[2]+0xFFFFA5C8u); // 800E099C
  c->r[0]=R32(c->r[2]+0xFFFFA5CCu); // 800E09A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E09A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E09A8
  c->lr=0x800E09B0u; f_803B220C(c); // 800E09AC
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800E09B0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800E09B4
  c->r[0]=c->r[0]^c->r[4]; // 800E09B8
  c->r[3]=c->r[1]+0x00000008u; // 800E09BC
  c->r[0]=c->r[0]-c->r[4]; // 800E09C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E09C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E09C8
  goto L_800E09D4; // 800E09CC
L_800E09D0:;
  c->r[3]=0u+0x0000433Au; // 800E09D0
L_800E09D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E09D4
  c->lr=c->r[0]; // 800E09D8
  c->r[1]=c->r[1]+0x00000010u; // 800E09DC
  return; // 800E09E0
}

// fn_800E09E4
void f_800E09E4(Ctx* __restrict c) {
  trace_call(0x800E09E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E09E4
  c->r[0]=c->lr; // 800E09E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E09EC
  c->lr=0x800E09F4u; f_80060974(c); // 800E09F0
  cmps(c,0,(int32_t)c->r[3],1); // 800E09F4
  if (crb(c,2)) { goto L_800E0A10; } // 800E09F8
  cmps(c,0,(int32_t)c->r[3],2); // 800E09FC
  if (crb(c,2)) { goto L_800E0A18; } // 800E0A00
  cmps(c,0,(int32_t)c->r[3],3); // 800E0A04
  if (crb(c,2)) { goto L_800E0A4C; } // 800E0A08
  goto L_800E0A50; // 800E0A0C
L_800E0A10:;
  c->r[3]=0u+0x00004332u; // 800E0A10
  goto L_800E0A50; // 800E0A14
L_800E0A18:;
  c->r[3]=R32(c->r[2]+0xFFFFA5D0u); // 800E0A18
  c->r[0]=R32(c->r[2]+0xFFFFA5D4u); // 800E0A1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E0A20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E0A24
  c->lr=0x800E0A2Cu; f_803B220C(c); // 800E0A28
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800E0A2C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800E0A30
  c->r[0]=c->r[0]^c->r[4]; // 800E0A34
  c->r[3]=c->r[1]+0x00000008u; // 800E0A38
  c->r[0]=c->r[0]-c->r[4]; // 800E0A3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0A40
  c->r[3]=R32(c->r[3]+c->r[0]); // 800E0A44
  goto L_800E0A50; // 800E0A48
L_800E0A4C:;
  c->r[3]=0u+0x0000433Au; // 800E0A4C
L_800E0A50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A50
  c->lr=c->r[0]; // 800E0A54
  c->r[1]=c->r[1]+0x00000010u; // 800E0A58
  return; // 800E0A5C
}

// fn_800E0A60
void f_800E0A60(Ctx* __restrict c) {
  trace_call(0x800E0A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A60
  c->r[0]=c->lr; // 800E0A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0A68
  c->lr=0x800E0A70u; f_80060974(c); // 800E0A6C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E0A70
  cmpu(c,0,c->r[0],0x00000001u); // 800E0A74
  if (!crb(c,1)) { goto L_800E0A88; } // 800E0A78
  cmps(c,0,(int32_t)c->r[3],3); // 800E0A7C
  if (crb(c,2)) { goto L_800E0A90; } // 800E0A80
  goto L_800E0A94; // 800E0A84
L_800E0A88:;
  c->r[3]=0u+0x00004330u; // 800E0A88
  goto L_800E0A94; // 800E0A8C
L_800E0A90:;
  c->r[3]=0u+0x0000433Au; // 800E0A90
L_800E0A94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A94
  c->lr=c->r[0]; // 800E0A98
  c->r[1]=c->r[1]+0x00000010u; // 800E0A9C
  return; // 800E0AA0
}

// fn_800E0AA4
void f_800E0AA4(Ctx* __restrict c) {
  trace_call(0x800E0AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0AA4
  c->r[0]=c->lr; // 800E0AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0AAC
  c->lr=0x800E0AB4u; f_80060974(c); // 800E0AB0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800E0AB4
  cmpu(c,0,c->r[0],0x00000001u); // 800E0AB8
  if (!crb(c,1)) { goto L_800E0AD0; } // 800E0ABC
  cmps(c,0,(int32_t)c->r[3],1); // 800E0AC0
  if (!crb(c,2)) { goto L_800E0AD4; } // 800E0AC4
  c->r[3]=0u+0x0000440Cu; // 800E0AC8
  goto L_800E0AD4; // 800E0ACC
L_800E0AD0:;
  c->r[3]=0u+0x0000440Du; // 800E0AD0
L_800E0AD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0AD4
  c->lr=c->r[0]; // 800E0AD8
  c->r[1]=c->r[1]+0x00000010u; // 800E0ADC
  return; // 800E0AE0
}

// fn_800E0AE4
void f_800E0AE4(Ctx* __restrict c) {
  trace_call(0x800E0AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0AE4
  c->r[0]=c->lr; // 800E0AE8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800E0AEC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800E0AF0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800E0AF4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E0AF8
  c->r[31]=c->r[3]|c->r[3]; // 800E0AFC
  c->r[3]=c->r[3]+0x0000066Cu; // 800E0B00
  c->lr=0x800E0B08u; f_800A7B64(c); // 800E0B04
  c->r[4]=c->r[31]|c->r[31]; // 800E0B08
  c->r[3]=c->r[1]+0x00000024u; // 800E0B0C
  c->lr=0x800E0B14u; f_80061A48(c); // 800E0B10
  c->r[0]=0u+0x00000000u; // 800E0B14
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E0B18
  c->r[3]=c->r[1]+0x00000008u; // 800E0B1C
  c->lr=0x800E0B24u; f_8004714C(c); // 800E0B20
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E0B24
  c->r[3]=c->r[31]+0x0000066Cu; // 800E0B28
  c->lr=0x800E0B30u; f_800A7BEC(c); // 800E0B2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800E0B30
  c->r[3]=c->r[1]+0x00000018u; // 800E0B34
  c->r[4]=c->r[31]+0x0000064Cu; // 800E0B38
  c->lr=0x800E0B40u; f_8005ED34(c); // 800E0B3C
  c->r[3]=c->r[1]+0x0000000Cu; // 800E0B40
  c->r[4]=c->r[1]+0x00000024u; // 800E0B44
  c->r[5]=c->r[1]+0x00000018u; // 800E0B48
  c->lr=0x800E0B50u; f_80073ACC(c); // 800E0B4C
  c->r[3]=c->r[31]+0x000001B8u; // 800E0B50
  c->r[4]=c->r[1]+0x00000030u; // 800E0B54
  c->lr=0x800E0B5Cu; f_80382F2C(c); // 800E0B58
  c->r[3]=c->r[1]+0x00000030u; // 800E0B5C
  c->r[4]=c->r[1]+0x0000000Cu; // 800E0B60
  c->lr=0x800E0B68u; f_8005CDC8(c); // 800E0B64
  c->r[3]=c->r[31]+0x000000FCu; // 800E0B68
  c->r[4]=c->r[1]+0x00000030u; // 800E0B6C
  c->lr=0x800E0B74u; f_80078164(c); // 800E0B70
  c->r[3]=R32(c->r[31]+0x00000420u); // 800E0B74
  c->lr=0x800E0B7Cu; f_800C3B34(c); // 800E0B78
  c->r[0]=R32(c->r[1]+0x00000084u); // 800E0B7C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800E0B80
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800E0B84
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E0B88
  c->lr=c->r[0]; // 800E0B8C
  c->r[1]=c->r[1]+0x00000080u; // 800E0B90
  return; // 800E0B94
}

// fn_800E0B98
void f_800E0B98(Ctx* __restrict c) {
  trace_call(0x800E0B98u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0B98
  c->r[0]=c->lr; // 800E0B9C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800E0BA0
  c->r[4]=c->r[1]+0x00000050u; // 800E0BA4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800E0BA8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800E0BAC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800E0BB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800E0BB4
  c->f[30]=c->f[1]; // 800E0BB8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800E0BBC
  W32(c->r[1]+0x00000088u,c->r[30]); // 800E0BC0
  c->r[30]=c->r[3]|c->r[3]; // 800E0BC4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800E0BC8
  c->r[12]=R32(c->r[12]+0x00000148u); // 800E0BCC
  c->ctr=c->r[12]; // 800E0BD0
  if (true) { c->lr=0x800E0BD8u; dispatch(c,c->ctr); } // 800E0BD4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0BD8
  c->r[3]=c->r[1]+0x00000044u; // 800E0BDC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0BE0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0BE4
  c->lr=0x800E0BECu; f_8005FD70(c); // 800E0BE8
  c->r[3]=c->r[1]+0x00000044u; // 800E0BEC
  c->r[5]=0u+0x806A0000u; // 800E0BF0
  c->r[4]=c->r[3]|c->r[3]; // 800E0BF4
  c->r[5]=c->r[5]+0x00000AA8u; // 800E0BF8
  c->lr=0x800E0C00u; f_8030E0BC(c); // 800E0BFC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0C00
  c->r[3]=c->r[1]+0x00000020u; // 800E0C04
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0C08
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0C0C
  c->lr=0x800E0C14u; f_8005FD70(c); // 800E0C10
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0C14
  c->r[3]=c->r[1]+0x00000014u; // 800E0C18
  c->r[4]=c->r[1]+0x00000044u; // 800E0C1C
  c->lr=0x800E0C24u; f_8005ED34(c); // 800E0C20
  c->r[3]=c->r[1]+0x0000002Cu; // 800E0C24
  c->r[4]=c->r[1]+0x00000020u; // 800E0C28
  c->r[5]=c->r[1]+0x00000014u; // 800E0C2C
  c->lr=0x800E0C34u; f_80073ACC(c); // 800E0C30
  c->r[3]=c->r[30]+0x00000640u; // 800E0C34
  c->r[4]=c->r[1]+0x0000002Cu; // 800E0C38
  c->lr=0x800E0C40u; f_8005DC84(c); // 800E0C3C
  c->r[4]=c->r[30]|c->r[30]; // 800E0C40
  c->r[3]=c->r[1]+0x00000008u; // 800E0C44
  c->lr=0x800E0C4Cu; f_80061A48(c); // 800E0C48
  c->r[3]=c->r[1]+0x00000038u; // 800E0C4C
  c->r[4]=c->r[30]+0x00000640u; // 800E0C50
  c->r[5]=c->r[1]+0x00000008u; // 800E0C54
  c->lr=0x800E0C5Cu; f_8005FC60(c); // 800E0C58
  c->r[0]=R8(c->r[13]+0xFFFFBB9Au); // 800E0C5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E0C60
  if (!crb(c,2)) { goto L_800E0CA0; } // 800E0C64
  c->r[31]=0u+0x80730000u; // 800E0C68
  c->r[3]=c->r[31]+0x000069F8u; // 800E0C6C
  c->lr=0x800E0C74u; f_80299654(c); // 800E0C70
  c->r[3]=0u+0x806D0000u; // 800E0C74
  c->r[4]=0u+0x80050000u; // 800E0C78
  c->r[3]=c->r[3]+0xFFFFC230u; // 800E0C7C
  c->r[5]=0u+0x80750000u; // 800E0C80
  W32(c->r[31]+0x000069F8u,c->r[3]); // 800E0C84
  c->r[3]=c->r[31]+0x000069F8u; // 800E0C88
  c->r[4]=c->r[4]+0xFFFF9D7Cu; // 800E0C8C
  c->r[5]=c->r[5]+0x000039A4u; // 800E0C90
  c->lr=0x800E0C98u; f_803A92B8(c); // 800E0C94
  c->r[0]=0u+0x00000001u; // 800E0C98
  W8(c->r[13]+0xFFFFBB9Au,c->r[0]); // 800E0C9C
L_800E0CA0:;
  c->r[4]=0u+0x80730000u; // 800E0CA0
  c->r[3]=c->r[1]+0x00000038u; // 800E0CA4
  c->r[4]=c->r[4]+0x000069F8u; // 800E0CA8
  {uint32_t ea=c->r[4]+0x00000258u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E0CAC
  c->lr=0x800E0CB4u; f_80084FAC(c); // 800E0CB0
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[30]); // 800E0CB4
  c->r[3]=c->r[1]+0x00000038u; // 800E0CB8
  c->r[5]=0u+0x806A0000u; // 800E0CBC
  c->r[4]=c->r[3]|c->r[3]; // 800E0CC0
  c->r[5]=c->r[5]+0x00000AA8u; // 800E0CC4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800E0CC8
  {uint32_t ea=c->r[30]+0x0000065Cu; WF32(ea,c->f[0]);} // 800E0CCC
  c->lr=0x800E0CD4u; f_8030E0BC(c); // 800E0CD0
  c->r[3]=c->r[30]+0x0000064Cu; // 800E0CD4
  c->r[4]=c->r[1]+0x00000038u; // 800E0CD8
  c->lr=0x800E0CE0u; f_8005DC84(c); // 800E0CDC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800E0CE0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800E0CE4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800E0CE8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800E0CEC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800E0CF0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800E0CF4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800E0CF8
  c->lr=c->r[0]; // 800E0CFC
  c->r[1]=c->r[1]+0x000000B0u; // 800E0D00
  return; // 800E0D04
}

// fn_800E0D08
void f_800E0D08(Ctx* __restrict c) {
  trace_call(0x800E0D08u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0D08
  c->r[0]=c->lr; // 800E0D0C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E0D10
  c->r[0]=0u+0x00000000u; // 800E0D14
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E0D18
  c->r[31]=c->r[3]|c->r[3]; // 800E0D1C
  c->r[3]=c->r[1]+0x00000008u; // 800E0D20
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E0D24
  c->lr=0x800E0D2Cu; f_8004714C(c); // 800E0D28
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0D2C
  c->r[3]=c->r[1]+0x00000038u; // 800E0D30
  {uint32_t ea=c->r[31]+0x0000065Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0D34
  c->r[4]=c->r[31]+0x0000064Cu; // 800E0D38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E0D3C
  c->lr=0x800E0D44u; f_8005ED34(c); // 800E0D40
  c->r[3]=c->r[31]|c->r[31]; // 800E0D44
  c->r[4]=c->r[1]+0x00000038u; // 800E0D48
  c->lr=0x800E0D50u; f_80083340(c); // 800E0D4C
  c->r[4]=c->r[31]|c->r[31]; // 800E0D50
  c->r[3]=c->r[1]+0x0000000Cu; // 800E0D54
  c->lr=0x800E0D5Cu; f_80061A48(c); // 800E0D58
  c->r[3]=c->r[1]+0x00000018u; // 800E0D5C
  c->r[4]=c->r[31]+0x0000058Cu; // 800E0D60
  c->lr=0x800E0D68u; f_80060878(c); // 800E0D64
  c->r[11]=R32(c->r[1]+0x00000018u); // 800E0D68
  c->r[3]=c->r[1]+0x00000048u; // 800E0D6C
  c->r[10]=R32(c->r[1]+0x0000001Cu); // 800E0D70
  c->r[4]=c->r[1]+0x00000028u; // 800E0D74
  c->r[9]=R32(c->r[1]+0x00000020u); // 800E0D78
  c->r[5]=0u+0x00000000u; // 800E0D7C
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 800E0D80
  c->r[6]=0u+0x00000000u; // 800E0D84
  c->r[7]=R32(c->r[1]+0x00000010u); // 800E0D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0D8C
  W32(c->r[1]+0x00000048u,c->r[11]); // 800E0D90
  {uint32_t ea=c->r[2]+0xFFFFA594u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0D94
  W32(c->r[1]+0x0000004Cu,c->r[10]); // 800E0D98
  W32(c->r[1]+0x00000050u,c->r[9]); // 800E0D9C
  W32(c->r[1]+0x00000054u,c->r[8]); // 800E0DA0
  W32(c->r[1]+0x00000058u,c->r[7]); // 800E0DA4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800E0DA8
  c->r[7]=R32(c->r[31]+0x00000640u); // 800E0DAC
  c->r[0]=R32(c->r[31]+0x00000644u); // 800E0DB0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800E0DB4
  W32(c->r[1]+0x00000028u,c->r[7]); // 800E0DB8
  c->r[0]=R32(c->r[31]+0x00000648u); // 800E0DBC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800E0DC0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800E0DC4
  c->lr=0x800E0DCCu; f_804E3138(c); // 800E0DC8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800E0DCC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E0DD0
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800E0DD4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E0DD8
  c->lr=c->r[0]; // 800E0DDC
  c->r[1]=c->r[1]+0x00000070u; // 800E0DE0
  return; // 800E0DE4
}

// fn_800E0DE8
void f_800E0DE8(Ctx* __restrict c) {
  trace_call(0x800E0DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0DE8
  c->r[0]=c->lr; // 800E0DEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E0DF0
  c->r[11]=c->r[1]+0x00000030u; // 800E0DF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E0DF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E0DFC
  c->lr=0x800E0E04u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0E00
  c->f[31]=c->f[1]; // 800E0E04
  c->r[29]=c->r[3]|c->r[3]; // 800E0E08
  c->r[31]=c->r[5]|c->r[5]; // 800E0E0C
  c->r[30]=c->r[4]|c->r[4]; // 800E0E10
  c->r[4]=c->r[31]|c->r[31]; // 800E0E14
  c->r[3]=c->r[3]+0x00000640u; // 800E0E18
  c->lr=0x800E0E20u; f_8005DC84(c); // 800E0E1C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0E20
  c->r[4]=c->r[31]|c->r[31]; // 800E0E24
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800E0E28
  c->r[5]=c->r[30]|c->r[30]; // 800E0E2C
  c->r[3]=c->r[1]+0x00000008u; // 800E0E30
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 800E0E34
  c->lr=0x800E0E3Cu; f_8005FC60(c); // 800E0E38
  c->r[3]=c->r[29]+0x0000064Cu; // 800E0E3C
  c->r[4]=c->r[1]+0x00000008u; // 800E0E40
  c->lr=0x800E0E48u; f_8005DC84(c); // 800E0E44
  c->r[3]=c->r[29]+0x0000064Cu; // 800E0E48
  c->r[5]=0u+0x806A0000u; // 800E0E4C
  c->r[4]=c->r[3]|c->r[3]; // 800E0E50
  c->r[5]=c->r[5]+0x00000AA8u; // 800E0E54
  c->lr=0x800E0E5Cu; f_8030E0BC(c); // 800E0E58
  c->r[0]=0u+0x00000000u; // 800E0E5C
  {uint32_t ea=c->r[29]+0x0000065Cu; WF32(ea,c->f[31]);} // 800E0E60
  W8(c->r[29]+0x00000660u,c->r[0]); // 800E0E64
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E0E68
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E0E6C
  c->r[11]=c->r[1]+0x00000030u; // 800E0E70
  c->lr=0x800E0E78u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0E74
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E0E78
  c->lr=c->r[0]; // 800E0E7C
  c->r[1]=c->r[1]+0x00000040u; // 800E0E80
  return; // 800E0E84
}

// fn_800E0E88
void f_800E0E88(Ctx* __restrict c) {
  trace_call(0x800E0E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0E88
  c->r[0]=c->lr; // 800E0E8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E0E90
  c->r[11]=c->r[1]+0x00000040u; // 800E0E94
  c->lr=0x800E0E9Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0E98
  c->r[0]=R8(c->r[3]+0x00000660u); // 800E0E9C
  c->r[29]=c->r[3]|c->r[3]; // 800E0EA0
  cmps(c,0,(int32_t)c->r[0],0); // 800E0EA4
  if (!crb(c,2)) { goto L_800E0EC0; } // 800E0EA8
  c->lr=0x800E0EB0u; f_800E06CC(c); // 800E0EAC
  cmps(c,0,(int32_t)c->r[3],0); // 800E0EB0
  if (crb(c,2)) { goto L_800E0EC0; } // 800E0EB4
  c->r[0]=0u+0x00000001u; // 800E0EB8
  W8(c->r[29]+0x00000660u,c->r[0]); // 800E0EBC
L_800E0EC0:;
  c->r[0]=R8(c->r[29]+0x00000660u); // 800E0EC0
  cmps(c,0,(int32_t)c->r[0],0); // 800E0EC4
  if (!crb(c,2)) { goto L_800E0F00; } // 800E0EC8
  c->r[0]=0u+0x00000000u; // 800E0ECC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E0ED0
  c->r[3]=c->r[1]+0x00000008u; // 800E0ED4
  c->lr=0x800E0EDCu; f_8004714C(c); // 800E0ED8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0EDC
  c->r[3]=c->r[1]+0x00000024u; // 800E0EE0
  {uint32_t ea=c->r[29]+0x0000065Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0EE4
  c->r[4]=c->r[29]+0x0000064Cu; // 800E0EE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800E0EEC
  c->lr=0x800E0EF4u; f_8005ED34(c); // 800E0EF0
  c->r[3]=c->r[29]|c->r[29]; // 800E0EF4
  c->r[4]=c->r[1]+0x00000024u; // 800E0EF8
  c->lr=0x800E0F00u; f_80083340(c); // 800E0EFC
L_800E0F00:;
  c->r[3]=c->r[29]+0x00000354u; // 800E0F00
  c->lr=0x800E0F08u; f_800C9374(c); // 800E0F04
  c->r[31]=c->r[3]|c->r[3]; // 800E0F08
  c->r[4]=c->r[29]|c->r[29]; // 800E0F0C
  c->r[3]=c->r[1]+0x00000018u; // 800E0F10
  c->lr=0x800E0F18u; f_80061A48(c); // 800E0F14
  c->r[3]=c->r[1]+0x0000000Cu; // 800E0F18
  c->r[4]=c->r[29]+0x00000640u; // 800E0F1C
  c->lr=0x800E0F24u; f_8005CD7C(c); // 800E0F20
  cmps(c,0,(int32_t)c->r[31],17416); // 800E0F24
  c->r[30]=0u+0x00000000u; // 800E0F28
  if (crb(c,2)) { goto L_800E0F3C; } // 800E0F2C
  cmps(c,0,(int32_t)c->r[31],17027); // 800E0F30
  if (crb(c,2)) { goto L_800E0F5C; } // 800E0F34
  goto L_800E0F78; // 800E0F38
L_800E0F3C:;
  c->r[3]=R32(c->r[29]+0x00000404u); // 800E0F3C
  c->lr=0x800E0F44u; f_802EA4B0(c); // 800E0F40
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0F44
  fcmp(c,0,c->f[0],c->f[1]); // 800E0F48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E0F4C
  if (!crb(c,2)) { goto L_800E0F78; } // 800E0F50
  c->r[30]=0u+0x00000001u; // 800E0F54
  goto L_800E0F78; // 800E0F58
L_800E0F5C:;
  c->r[3]=R32(c->r[29]+0x00000404u); // 800E0F5C
  c->lr=0x800E0F64u; f_802EA4B0(c); // 800E0F60
  {uint32_t ea=c->r[2]+0xFFFFA594u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0F64
  fcmp(c,0,c->f[0],c->f[1]); // 800E0F68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E0F6C
  if (!crb(c,2)) { goto L_800E0F78; } // 800E0F70
  c->r[30]=0u+0x00000001u; // 800E0F74
L_800E0F78:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E0F78
  if (crb(c,2)) { goto L_800E0FA8; } // 800E0F7C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0F80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0F84
  fcmp(c,0,c->f[1],c->f[0]); // 800E0F88
  if (!crb(c,0)) { goto L_800E0FA8; } // 800E0F8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E0F90
  c->r[3]=c->r[29]|c->r[29]; // 800E0F94
  c->r[4]=c->r[1]+0x00000018u; // 800E0F98
  c->lr=0x800E0FA0u; f_8008930C(c); // 800E0F9C
  c->r[3]=0u+0x00000001u; // 800E0FA0
  goto L_800E0FAC; // 800E0FA4
L_800E0FA8:;
  c->r[3]=0u+0x00000000u; // 800E0FA8
L_800E0FAC:;
  c->r[11]=c->r[1]+0x00000040u; // 800E0FAC
  c->lr=0x800E0FB4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0FB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E0FB4
  c->lr=c->r[0]; // 800E0FB8
  c->r[1]=c->r[1]+0x00000040u; // 800E0FBC
  return; // 800E0FC0
}

// fn_800E0FC4
void f_800E0FC4(Ctx* __restrict c) {
  trace_call(0x800E0FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0FC4
  c->r[0]=c->lr; // 800E0FC8
  W32(c->r[1]+0x00000434u,c->r[0]); // 800E0FCC
  {uint32_t ea=c->r[1]+0x00000420u; WF64(ea,c->f[31]);} // 800E0FD0
  {uint32_t ea=c->r[1]+0x00000428u; psq_store(c,31,ea,0,0);} // 800E0FD4
  W32(c->r[1]+0x0000041Cu,c->r[31]); // 800E0FD8
  c->r[31]=c->r[3]|c->r[3]; // 800E0FDC
  c->lr=0x800E0FE4u; f_8005EAA0(c); // 800E0FE0
  c->r[4]=c->r[3]|c->r[3]; // 800E0FE4
  c->r[3]=c->r[1]+0x00000008u; // 800E0FE8
  c->lr=0x800E0FF0u; f_800E102C(c); // 800E0FEC
  c->r[3]=c->r[1]+0x00000008u; // 800E0FF0
  c->lr=0x800E0FF8u; f_80101530(c); // 800E0FF4
  {uint32_t ea=c->r[31]+0x000009C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0FF8
  c->r[3]=c->r[1]+0x00000008u; // 800E0FFC
  c->r[4]=0u+0xFFFFFFFFu; // 800E1000
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 800E1004
  c->lr=0x800E100Cu; f_80101794(c); // 800E1008
  c->f[1]=c->f[31]; // 800E100C
  {uint32_t ea=c->r[1]+0x00000428u; psq_load(c,31,ea,0,0);} // 800E1010
  {uint32_t ea=c->r[1]+0x00000420u; c->f[31]=RF64(ea);} // 800E1014
  c->r[31]=R32(c->r[1]+0x0000041Cu); // 800E1018
  c->r[0]=R32(c->r[1]+0x00000434u); // 800E101C
  c->lr=c->r[0]; // 800E1020
  c->r[1]=c->r[1]+0x00000430u; // 800E1024
  return; // 800E1028
}

// fn_800E102C
void f_800E102C(Ctx* __restrict c) {
  trace_call(0x800E102Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E102C
  c->r[0]=c->lr; // 800E1030
  c->r[5]=0u+0x806E0000u; // 800E1034
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1038
  c->r[5]=c->r[5]+0xFFFF8D60u; // 800E103C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1040
  c->r[31]=c->r[4]|c->r[4]; // 800E1044
  c->r[4]=c->r[4]+0x00000004u; // 800E1048
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E104C
  c->r[30]=c->r[3]|c->r[3]; // 800E1050
  W32(c->r[3]+0x00000000u,c->r[5]); // 800E1054
  c->r[3]=c->r[3]+0x00000004u; // 800E1058
  c->lr=0x800E1060u; f_800DF57C(c); // 800E105C
  {uint32_t ea=c->r[31]+0x00000350u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1060
  c->r[3]=c->r[30]+0x00000368u; // 800E1064
  {uint32_t ea=c->r[30]+0x00000350u; WF32(ea,c->f[0]);} // 800E1068
  c->r[4]=c->r[31]+0x00000368u; // 800E106C
  {uint32_t ea=c->r[31]+0x00000354u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1070
  {uint32_t ea=c->r[30]+0x00000354u; WF32(ea,c->f[0]);} // 800E1074
  {uint32_t ea=c->r[31]+0x00000358u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1078
  {uint32_t ea=c->r[30]+0x00000358u; WF32(ea,c->f[0]);} // 800E107C
  {uint32_t ea=c->r[31]+0x0000035Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1080
  {uint32_t ea=c->r[30]+0x0000035Cu; WF32(ea,c->f[0]);} // 800E1084
  {uint32_t ea=c->r[31]+0x00000360u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1088
  {uint32_t ea=c->r[30]+0x00000360u; WF32(ea,c->f[0]);} // 800E108C
  c->r[0]=R32(c->r[31]+0x00000364u); // 800E1090
  W32(c->r[30]+0x00000364u,c->r[0]); // 800E1094
  c->lr=0x800E109Cu; f_800E11A0(c); // 800E1098
  c->r[3]=c->r[30]+0x0000037Cu; // 800E109C
  c->r[4]=c->r[31]+0x0000037Cu; // 800E10A0
  c->lr=0x800E10A8u; f_800E11A0(c); // 800E10A4
  c->r[3]=c->r[30]+0x00000390u; // 800E10A8
  c->r[4]=c->r[31]+0x00000390u; // 800E10AC
  c->lr=0x800E10B4u; f_800E11A0(c); // 800E10B0
  c->r[3]=c->r[30]+0x000003A4u; // 800E10B4
  c->r[4]=c->r[31]+0x000003A4u; // 800E10B8
  c->lr=0x800E10C0u; f_800E11A0(c); // 800E10BC
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E10C0
  c->r[3]=c->r[30]+0x000003D0u; // 800E10C4
  {uint32_t ea=c->r[30]+0x000003B8u; WF32(ea,c->f[0]);} // 800E10C8
  c->r[4]=c->r[31]+0x000003D0u; // 800E10CC
  c->r[0]=R32(c->r[31]+0x000003BCu); // 800E10D0
  W32(c->r[30]+0x000003BCu,c->r[0]); // 800E10D4
  {uint32_t ea=c->r[31]+0x000003C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E10D8
  {uint32_t ea=c->r[30]+0x000003C0u; WF32(ea,c->f[0]);} // 800E10DC
  {uint32_t ea=c->r[31]+0x000003C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E10E0
  {uint32_t ea=c->r[30]+0x000003C4u; WF32(ea,c->f[0]);} // 800E10E4
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E10E8
  {uint32_t ea=c->r[30]+0x000003C8u; WF32(ea,c->f[0]);} // 800E10EC
  c->r[0]=R8(c->r[31]+0x000003CCu); // 800E10F0
  W8(c->r[30]+0x000003CCu,c->r[0]); // 800E10F4
  c->lr=0x800E10FCu; f_8005CD7C(c); // 800E10F8
  c->r[0]=R32(c->r[31]+0x000003DCu); // 800E10FC
  c->r[3]=c->r[30]+0x000003E4u; // 800E1100
  W32(c->r[30]+0x000003DCu,c->r[0]); // 800E1104
  c->r[4]=c->r[31]+0x000003E4u; // 800E1108
  c->r[0]=R32(c->r[31]+0x000003E0u); // 800E110C
  W32(c->r[30]+0x000003E0u,c->r[0]); // 800E1110
  c->lr=0x800E1118u; f_8005CD7C(c); // 800E1114
  c->r[0]=R32(c->r[31]+0x000003F0u); // 800E1118
  c->r[4]=0u+0x806E0000u; // 800E111C
  W32(c->r[30]+0x000003F0u,c->r[0]); // 800E1120
  c->r[4]=c->r[4]+0xFFFF8D48u; // 800E1124
  c->r[3]=c->r[30]|c->r[30]; // 800E1128
  c->r[0]=R32(c->r[31]+0x000003F4u); // 800E112C
  W32(c->r[30]+0x000003F4u,c->r[0]); // 800E1130
  c->r[0]=R8(c->r[31]+0x000003F8u); // 800E1134
  W8(c->r[30]+0x000003F8u,c->r[0]); // 800E1138
  c->r[0]=R8(c->r[31]+0x000003F9u); // 800E113C
  W8(c->r[30]+0x000003F9u,c->r[0]); // 800E1140
  c->r[0]=R8(c->r[31]+0x000003FAu); // 800E1144
  W8(c->r[30]+0x000003FAu,c->r[0]); // 800E1148
  c->r[0]=R8(c->r[31]+0x000003FBu); // 800E114C
  W8(c->r[30]+0x000003FBu,c->r[0]); // 800E1150
  c->r[0]=R8(c->r[31]+0x000003FCu); // 800E1154
  W8(c->r[30]+0x000003FCu,c->r[0]); // 800E1158
  c->r[0]=R8(c->r[31]+0x000003FDu); // 800E115C
  W8(c->r[30]+0x000003FDu,c->r[0]); // 800E1160
  c->r[0]=R8(c->r[31]+0x000003FEu); // 800E1164
  W8(c->r[30]+0x000003FEu,c->r[0]); // 800E1168
  c->r[0]=R8(c->r[31]+0x000003FFu); // 800E116C
  W8(c->r[30]+0x000003FFu,c->r[0]); // 800E1170
  W32(c->r[30]+0x00000000u,c->r[4]); // 800E1174
  c->r[0]=R32(c->r[31]+0x00000400u); // 800E1178
  W32(c->r[30]+0x00000400u,c->r[0]); // 800E117C
  c->r[0]=R32(c->r[31]+0x00000404u); // 800E1180
  W32(c->r[30]+0x00000404u,c->r[0]); // 800E1184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1188
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E118C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1190
  c->lr=c->r[0]; // 800E1194
  c->r[1]=c->r[1]+0x00000010u; // 800E1198
  return; // 800E119C
}

// fn_800E11A0
void f_800E11A0(Ctx* __restrict c) {
  trace_call(0x800E11A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E11A0
  c->r[0]=c->lr; // 800E11A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E11A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E11AC
  c->r[31]=c->r[4]|c->r[4]; // 800E11B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E11B4
  c->r[30]=c->r[3]|c->r[3]; // 800E11B8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E11BC
  c->r[4]=c->r[4]+0x00000004u; // 800E11C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E11C4
  c->r[3]=c->r[3]+0x00000004u; // 800E11C8
  c->lr=0x800E11D0u; f_8005CD7C(c); // 800E11CC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E11D0
  c->r[3]=c->r[30]|c->r[30]; // 800E11D4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 800E11D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E11DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E11E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E11E4
  c->lr=c->r[0]; // 800E11E8
  c->r[1]=c->r[1]+0x00000010u; // 800E11EC
  return; // 800E11F0
}

// fn_800E11F4
void f_800E11F4(Ctx* __restrict c) {
  trace_call(0x800E11F4u);
  {uint32_t ea=c->r[1]+0xFFFFFC00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E11F4
  c->r[0]=c->lr; // 800E11F8
  W32(c->r[1]+0x00000404u,c->r[0]); // 800E11FC
  c->r[11]=c->r[1]+0x00000400u; // 800E1200
  c->lr=0x800E1208u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1204
  c->r[27]=c->r[3]|c->r[3]; // 800E1208
  c->r[3]=c->r[3]+0x000001B8u; // 800E120C
  c->r[4]=c->r[1]+0x00000068u; // 800E1210
  c->lr=0x800E1218u; f_80382F2C(c); // 800E1214
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1218
  c->r[3]=c->r[1]+0x0000005Cu; // 800E121C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1220
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1224
  c->lr=0x800E122Cu; f_8005FD70(c); // 800E1228
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E122C
  c->r[3]=c->r[1]+0x00000050u; // 800E1230
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1234
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1238
  c->lr=0x800E1240u; f_8005FD70(c); // 800E123C
  c->r[3]=c->r[27]|c->r[27]; // 800E1240
  c->lr=0x800E1248u; f_800E0FC4(c); // 800E1244
  c->r[3]=c->r[1]+0x00000020u; // 800E1248
  c->r[4]=c->r[1]+0x0000005Cu; // 800E124C
  c->lr=0x800E1254u; f_8005ED34(c); // 800E1250
  c->r[3]=c->r[1]+0x00000044u; // 800E1254
  c->r[4]=c->r[1]+0x00000050u; // 800E1258
  c->r[5]=c->r[1]+0x00000020u; // 800E125C
  c->lr=0x800E1264u; f_80073ACC(c); // 800E1260
  {uint32_t ea=c->r[27]+0x000009CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1264
  c->r[3]=c->r[1]+0x00000014u; // 800E1268
  c->r[4]=c->r[1]+0x0000005Cu; // 800E126C
  c->lr=0x800E1274u; f_8005ED34(c); // 800E1270
  c->r[3]=c->r[1]+0x00000038u; // 800E1274
  c->r[4]=c->r[1]+0x00000050u; // 800E1278
  c->r[5]=c->r[1]+0x00000014u; // 800E127C
  c->lr=0x800E1284u; f_80073ACC(c); // 800E1280
  c->r[3]=c->r[1]+0x00000098u; // 800E1284
  c->r[28]=0u+0x00000000u; // 800E1288
  c->lr=0x800E1290u; f_8006585C(c); // 800E128C
  c->r[4]=c->r[1]+0x00000044u; // 800E1290
  c->r[5]=c->r[1]+0x00000038u; // 800E1294
  c->r[6]=c->r[1]+0x00000098u; // 800E1298
  c->r[3]=0u+0x00000005u; // 800E129C
  c->lr=0x800E12A4u; f_8005ED74(c); // 800E12A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E12A4
  if (crb(c,2)) { goto L_800E12FC; } // 800E12A8
  c->r[0]=R8(c->r[27]+0x000009D0u); // 800E12AC
  cmps(c,0,(int32_t)c->r[0],0); // 800E12B0
  if (crb(c,2)) { goto L_800E12F0; } // 800E12B4
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E12B8
  c->r[3]=c->r[1]+0x00000008u; // 800E12BC
  c->r[4]=c->r[1]+0x000000CCu; // 800E12C0
  c->lr=0x800E12C8u; f_8005ED34(c); // 800E12C4
  c->r[3]=c->r[1]+0x0000002Cu; // 800E12C8
  c->r[4]=c->r[1]+0x000000C0u; // 800E12CC
  c->r[5]=c->r[1]+0x00000008u; // 800E12D0
  c->lr=0x800E12D8u; f_80073ACC(c); // 800E12D4
  c->r[3]=c->r[1]+0x00000068u; // 800E12D8
  c->r[4]=c->r[1]+0x0000002Cu; // 800E12DC
  c->lr=0x800E12E4u; f_8005CDC8(c); // 800E12E0
  c->r[3]=c->r[27]+0x000000FCu; // 800E12E4
  c->r[4]=c->r[1]+0x00000068u; // 800E12E8
  c->lr=0x800E12F0u; f_80078164(c); // 800E12EC
L_800E12F0:;
  c->r[0]=0u+0x00000001u; // 800E12F0
  W8(c->r[27]+0x000009D1u,c->r[0]); // 800E12F4
  c->r[28]=0u+0x00000001u; // 800E12F8
L_800E12FC:;
  c->r[0]=R32(c->r[1]+0x00000098u); // 800E12FC
  c->r[30]=c->r[27]+0x00000684u; // 800E1300
  W32(c->r[27]+0x0000067Cu,c->r[0]); // 800E1304
  c->r[29]=c->r[1]+0x000000A0u; // 800E1308
  c->r[31]=c->r[27]+0x000009C4u; // 800E130C
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800E1310
  W32(c->r[27]+0x00000680u,c->r[0]); // 800E1314
L_800E1318:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800E1318
  c->r[3]=c->r[30]+0x00000020u; // 800E131C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800E1320
  c->r[4]=c->r[29]+0x00000020u; // 800E1324
  c->r[0]=R32(c->r[29]+0x00000004u); // 800E1328
  W32(c->r[30]+0x00000004u,c->r[0]); // 800E132C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800E1330
  W32(c->r[30]+0x00000008u,c->r[0]); // 800E1334
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E1338
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800E133C
  c->r[0]=R32(c->r[29]+0x00000010u); // 800E1340
  W32(c->r[30]+0x00000010u,c->r[0]); // 800E1344
  c->r[0]=R32(c->r[29]+0x00000014u); // 800E1348
  W32(c->r[30]+0x00000014u,c->r[0]); // 800E134C
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1350
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 800E1354
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1358
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E135C
  c->lr=0x800E1364u; f_8005DC84(c); // 800E1360
  c->r[3]=c->r[30]+0x0000002Cu; // 800E1364
  c->r[4]=c->r[29]+0x0000002Cu; // 800E1368
  c->lr=0x800E1370u; f_8005DC84(c); // 800E136C
  c->r[3]=c->r[30]+0x00000038u; // 800E1370
  c->r[4]=c->r[29]+0x00000038u; // 800E1374
  c->lr=0x800E137Cu; f_8005DC84(c); // 800E1378
  c->r[3]=c->r[30]+0x00000044u; // 800E137C
  c->r[4]=c->r[29]+0x00000044u; // 800E1380
  c->lr=0x800E1388u; f_8005DC84(c); // 800E1384
  c->r[3]=c->r[30]+0x00000050u; // 800E1388
  c->r[4]=c->r[29]+0x00000050u; // 800E138C
  c->lr=0x800E1394u; f_8005DC84(c); // 800E1390
  c->r[3]=c->r[30]+0x0000005Cu; // 800E1394
  c->r[4]=c->r[29]+0x0000005Cu; // 800E1398
  c->lr=0x800E13A0u; f_8005DC84(c); // 800E139C
  c->r[30]=c->r[30]+0x00000068u; // 800E13A0
  c->r[29]=c->r[29]+0x00000068u; // 800E13A4
  cmpu(c,0,c->r[30],c->r[31]); // 800E13A8
  if (crb(c,0)) { IRQCHK(c); goto L_800E1318; } // 800E13AC
  c->r[3]=R32(c->r[1]+0x000003E0u); // 800E13B0
  c->r[0]=0u+0x00000000u; // 800E13B4
  W32(c->r[27]+0x000009C4u,c->r[3]); // 800E13B8
  c->r[11]=c->r[1]+0x00000400u; // 800E13BC
  c->r[3]=c->r[28]|c->r[28]; // 800E13C0
  W32(c->r[1]+0x000003E0u,c->r[0]); // 800E13C4
  c->lr=0x800E13CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E13C8
  c->r[0]=R32(c->r[1]+0x00000404u); // 800E13CC
  c->lr=c->r[0]; // 800E13D0
  c->r[1]=c->r[1]+0x00000400u; // 800E13D4
  return; // 800E13D8
}

// fn_800E13DC
void f_800E13DC(Ctx* __restrict c) {
  trace_call(0x800E13DCu);
  {uint32_t ea=c->r[1]+0xFFFFF7B0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E13DC
  c->r[0]=c->lr; // 800E13E0
  W32(c->r[1]+0x00000854u,c->r[0]); // 800E13E4
  c->r[0]=0u+0x00000848u; // 800E13E8
  {uint32_t ea=c->r[1]+0x00000840u; WF64(ea,c->f[31]);} // 800E13EC
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800E13F0
  W32(c->r[1]+0x0000083Cu,c->r[31]); // 800E13F4
  W32(c->r[1]+0x00000838u,c->r[30]); // 800E13F8
  c->r[30]=c->r[3]|c->r[3]; // 800E13FC
  c->lr=0x800E1404u; f_8005EAA0(c); // 800E1400
  c->r[4]=c->r[3]|c->r[3]; // 800E1404
  c->r[3]=c->r[1]+0x00000430u; // 800E1408
  c->lr=0x800E1410u; f_800E102C(c); // 800E140C
  c->r[3]=c->r[30]+0x000001B8u; // 800E1410
  c->r[4]=c->r[1]+0x000000B0u; // 800E1414
  c->lr=0x800E141Cu; f_80382F2C(c); // 800E1418
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E141C
  c->r[3]=c->r[1]+0x000000A4u; // 800E1420
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1424
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1428
  c->lr=0x800E1430u; f_8005FD70(c); // 800E142C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1430
  c->r[3]=c->r[1]+0x00000098u; // 800E1434
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1438
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E143C
  c->lr=0x800E1444u; f_8005FD70(c); // 800E1440
  c->r[3]=c->r[1]+0x00000430u; // 800E1444
  c->lr=0x800E144Cu; f_80101530(c); // 800E1448
  c->f[31]=c->f[1]; // 800E144C
  c->r[3]=c->r[1]+0x0000008Cu; // 800E1450
  c->r[4]=c->r[30]+0x0000058Cu; // 800E1454
  c->lr=0x800E145Cu; f_80060878(c); // 800E1458
  c->f[1]=c->f[31]; // 800E145C
  c->r[3]=c->r[1]+0x00000044u; // 800E1460
  c->r[4]=c->r[1]+0x000000A4u; // 800E1464
  c->lr=0x800E146Cu; f_8005ED34(c); // 800E1468
  c->r[3]=c->r[1]+0x00000080u; // 800E146C
  c->r[4]=c->r[1]+0x00000098u; // 800E1470
  c->r[5]=c->r[1]+0x00000044u; // 800E1474
  c->lr=0x800E147Cu; f_80073ACC(c); // 800E1478
  c->r[3]=c->r[1]+0x000000E0u; // 800E147C
  c->r[31]=0u+0x00000000u; // 800E1480
  c->lr=0x800E1488u; f_8006585C(c); // 800E1484
  c->r[4]=c->r[1]+0x0000008Cu; // 800E1488
  c->r[5]=c->r[1]+0x00000080u; // 800E148C
  c->r[6]=c->r[1]+0x000000E0u; // 800E1490
  c->r[3]=0u+0x00000005u; // 800E1494
  c->lr=0x800E149Cu; f_8005ED74(c); // 800E1498
  cmps(c,0,(int32_t)c->r[3],0); // 800E149C
  if (crb(c,2)) { goto L_800E15A0; } // 800E14A0
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E14A4
  c->r[3]=c->r[1]+0x00000038u; // 800E14A8
  c->r[4]=c->r[1]+0x00000114u; // 800E14AC
  c->lr=0x800E14B4u; f_8005ED34(c); // 800E14B0
  c->r[3]=c->r[1]+0x00000074u; // 800E14B4
  c->r[4]=c->r[1]+0x00000108u; // 800E14B8
  c->r[5]=c->r[1]+0x00000038u; // 800E14BC
  c->lr=0x800E14C4u; f_80073ACC(c); // 800E14C0
  c->r[3]=c->r[1]+0x000000B0u; // 800E14C4
  c->r[4]=c->r[1]+0x00000074u; // 800E14C8
  c->lr=0x800E14D0u; f_8005CDC8(c); // 800E14CC
  c->r[3]=c->r[30]+0x000000FCu; // 800E14D0
  c->r[4]=c->r[1]+0x000000B0u; // 800E14D4
  c->lr=0x800E14DCu; f_80078164(c); // 800E14D8
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E14DC
  c->r[3]=c->r[1]+0x00000068u; // 800E14E0
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E14E4
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E14E8
  c->lr=0x800E14F0u; f_8005FD70(c); // 800E14EC
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E14F0
  c->r[3]=c->r[1]+0x00000014u; // 800E14F4
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E14F8
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E14FC
  c->lr=0x800E1504u; f_8005FD70(c); // 800E1500
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1504
  c->r[3]=c->r[1]+0x0000002Cu; // 800E1508
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E150C
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E1510
  c->lr=0x800E1518u; f_8005FD70(c); // 800E1514
  c->f[1]=c->f[31]; // 800E1518
  c->r[3]=c->r[1]+0x00000020u; // 800E151C
  c->r[4]=c->r[1]+0x00000014u; // 800E1520
  c->lr=0x800E1528u; f_8005ED34(c); // 800E1524
  c->r[3]=c->r[1]+0x0000005Cu; // 800E1528
  c->r[4]=c->r[1]+0x0000002Cu; // 800E152C
  c->r[5]=c->r[1]+0x00000020u; // 800E1530
  c->lr=0x800E1538u; f_8005FC60(c); // 800E1534
  c->r[4]=c->r[1]+0x00000068u; // 800E1538
  c->r[5]=c->r[1]+0x0000005Cu; // 800E153C
  c->r[6]=c->r[1]+0x000000E0u; // 800E1540
  c->r[3]=0u+0x00000005u; // 800E1544
  c->lr=0x800E154Cu; f_8005ED74(c); // 800E1548
  cmps(c,0,(int32_t)c->r[3],0); // 800E154C
  if (crb(c,2)) { goto L_800E1584; } // 800E1550
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1554
  c->r[3]=c->r[1]+0x00000008u; // 800E1558
  c->r[4]=c->r[1]+0x00000114u; // 800E155C
  c->lr=0x800E1564u; f_8005ED34(c); // 800E1560
  c->r[3]=c->r[1]+0x00000050u; // 800E1564
  c->r[4]=c->r[1]+0x00000108u; // 800E1568
  c->r[5]=c->r[1]+0x00000008u; // 800E156C
  c->lr=0x800E1574u; f_80073ACC(c); // 800E1570
  c->r[3]=c->r[1]+0x000000B0u; // 800E1574
  c->r[4]=c->r[1]+0x00000050u; // 800E1578
  c->lr=0x800E1580u; f_8005CDC8(c); // 800E157C
  goto L_800E1590; // 800E1580
L_800E1584:;
  c->r[3]=c->r[1]+0x000000B0u; // 800E1584
  c->r[4]=c->r[1]+0x0000005Cu; // 800E1588
  c->lr=0x800E1590u; f_8005CDC8(c); // 800E158C
L_800E1590:;
  c->r[3]=c->r[30]+0x000000FCu; // 800E1590
  c->r[4]=c->r[1]+0x000000B0u; // 800E1594
  c->lr=0x800E159Cu; f_80078164(c); // 800E1598
  c->r[31]=0u+0x00000001u; // 800E159C
L_800E15A0:;
  c->r[0]=0u+0x00000000u; // 800E15A0
  W32(c->r[1]+0x00000428u,c->r[0]); // 800E15A4
  c->r[3]=c->r[1]+0x00000430u; // 800E15A8
  c->r[4]=0u+0xFFFFFFFFu; // 800E15AC
  c->lr=0x800E15B4u; f_80101794(c); // 800E15B0
  c->r[0]=0u+0x00000848u; // 800E15B4
  c->r[3]=c->r[31]|c->r[31]; // 800E15B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E15BC
  {uint32_t ea=c->r[1]+0x00000840u; c->f[31]=RF64(ea);} // 800E15C0
  c->r[31]=R32(c->r[1]+0x0000083Cu); // 800E15C4
  c->r[30]=R32(c->r[1]+0x00000838u); // 800E15C8
  c->r[0]=R32(c->r[1]+0x00000854u); // 800E15CC
  c->lr=c->r[0]; // 800E15D0
  c->r[1]=c->r[1]+0x00000850u; // 800E15D4
  return; // 800E15D8
}

// fn_800E15DC
void f_800E15DC(Ctx* __restrict c) {
  trace_call(0x800E15DCu);
  return; // 800E15DC
}

// fn_800E15E0
void f_800E15E0(Ctx* __restrict c) {
  trace_call(0x800E15E0u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 800E15E0
  f_800DD31C(c); return; // 800E15E4
}

// fn_800E15E8
void f_800E15E8(Ctx* __restrict c) {
  trace_call(0x800E15E8u);
  c->r[3]=0u+0x0000001Fu; // 800E15E8
  return; // 800E15EC
}

// fn_800E15F0
void f_800E15F0(Ctx* __restrict c) {
  trace_call(0x800E15F0u);
  c->r[3]=0u+0x800E0000u; // 800E15F0
  c->r[3]=c->r[3]+0x000015FCu; // 800E15F4
  return; // 800E15F8
}

// fn_800E15FC
void f_800E15FC(Ctx* __restrict c) {
  trace_call(0x800E15FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E15FC
  c->r[0]=c->lr; // 800E1600
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E1604
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E1608
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E160C
  c->r[0]=c->r[3]+0xACBC0000u; // 800E1610
  cmpu(c,0,c->r[0],0x00005700u); // 800E1614
  if (crb(c,2)) { goto L_800E1624; } // 800E1618
  c->r[3]=0u+0x00000001u; // 800E161C
  goto L_800E16D8; // 800E1620
L_800E1624:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E1624
  cmps(c,0,(int32_t)c->r[0],0); // 800E1628
  if (crb(c,2)) { goto L_800E1638; } // 800E162C
  c->r[3]=0u+0x00000001u; // 800E1630
  goto L_800E16D8; // 800E1634
L_800E1638:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E1638
  c->r[3]=c->r[1]+0x0000001Cu; // 800E163C
  c->r[31]=c->r[4]+c->r[0]; // 800E1640
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1644
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1648
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E164C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800E1650
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800E1654
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800E1658
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 800E165C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800E1660
  c->f[2]=c->ps1[2]=S(c->f[0]); // 800E1664
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800E1668
  {double t0=S(std::fma(c->f[2],c->ps1[1],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800E166C
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1670
  fcmp(c,0,c->f[2],c->f[0]); // 800E1674
  c->r[0]=c->cr; // 800E1678
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800E167C
  if (crb(c,2)) { goto L_800E16B8; } // 800E1680
  c->r[0]=0u+0x00000000u; // 800E1684
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800E1688
  c->r[3]=c->r[1]+0x0000000Cu; // 800E168C
  c->lr=0x800E1694u; f_8004FC20(c); // 800E1690
  c->r[4]=c->r[3]|c->r[3]; // 800E1694
  c->r[3]=c->r[1]+0x00000010u; // 800E1698
  c->lr=0x800E16A0u; f_8033AF30(c); // 800E169C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E16A0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E16A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E16A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800E16AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800E16B0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800E16B4
L_800E16B8:;
  c->r[0]=0u+0x00000000u; // 800E16B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E16BC
  c->r[3]=c->r[1]+0x00000008u; // 800E16C0
  c->lr=0x800E16C8u; f_8004FC20(c); // 800E16C4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E16C8
  c->r[4]=c->r[1]+0x0000001Cu; // 800E16CC
  c->lr=0x800E16D4u; f_8033AE04(c); // 800E16D0
  c->r[3]=0u+0x00000001u; // 800E16D4
L_800E16D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E16D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E16DC
  c->lr=c->r[0]; // 800E16E0
  c->r[1]=c->r[1]+0x00000030u; // 800E16E4
  return; // 800E16E8
}

// fn_800E16EC
void f_800E16EC(Ctx* __restrict c) {
  trace_call(0x800E16ECu);
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E16EC
  c->r[0]=0u+0x00000000u; // 800E16F0
  {uint32_t ea=c->r[2]+0xFFFFA5ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E16F4
  W8(c->r[3]+0x000000DCu,c->r[0]); // 800E16F8
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 800E16FC
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 800E1700
  return; // 800E1704
}

// fn_800E1708
void f_800E1708(Ctx* __restrict c) {
  trace_call(0x800E1708u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1708
  c->r[0]=c->lr; // 800E170C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E1710
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E1714
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E1718
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800E171C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800E1720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1724
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1728
  c->r[30]=c->r[3]|c->r[3]; // 800E172C
  c->r[0]=R8(c->r[3]+0x000000DCu); // 800E1730
  cmps(c,0,(int32_t)c->r[0],0); // 800E1734
  if (crb(c,2)) { goto L_800E1844; } // 800E1738
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E173C
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1740
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1744
  fcmp(c,0,c->f[2],c->f[0]); // 800E1748
  if (!crb(c,1)) { goto L_800E1758; } // 800E174C
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1750
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[2]); // 800E1754
L_800E1758:;
  {uint32_t ea=c->r[2]+0xFFFFA5F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1758
  fcmp(c,0,c->f[31],c->f[0]); // 800E175C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E1760
  if (!crb(c,2)) { goto L_800E1774; } // 800E1764
  c->f[31]=c->f[0]; // 800E1768
  c->r[0]=0u+0x00000000u; // 800E176C
  W8(c->r[3]+0x000000DCu,c->r[0]); // 800E1770
L_800E1774:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 800E1774
  cmps(c,0,(int32_t)c->r[0],0); // 800E1778
  if (crb(c,2)) { goto L_800E178C; } // 800E177C
  cmps(c,0,(int32_t)c->r[0],1); // 800E1780
  if (crb(c,2)) { goto L_800E17B4; } // 800E1784
  goto L_800E17D8; // 800E1788
L_800E178C:;
  c->f[3]=c->f[31]; // 800E178C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1790
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1794
  c->lr=0x800E179Cu; f_8032A674(c); // 800E1798
  c->f[30]=c->f[1]; // 800E179C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E17A0
  c->f[3]=c->f[31]; // 800E17A4
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E17A8
  c->lr=0x800E17B0u; f_8032A674(c); // 800E17AC
  goto L_800E17D8; // 800E17B0
L_800E17B4:;
  c->f[3]=c->f[31]; // 800E17B4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E17B8
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E17BC
  c->lr=0x800E17C4u; f_8032A680(c); // 800E17C0
  c->f[30]=c->f[1]; // 800E17C4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E17C8
  c->f[3]=c->f[31]; // 800E17CC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E17D0
  c->lr=0x800E17D8u; f_8032A680(c); // 800E17D4
L_800E17D8:;
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[30]);} // 800E17D8
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 800E17DC
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800E17E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E17E4
  if (!crb(c,2)) { goto L_800E1824; } // 800E17E8
  c->r[31]=0u+0x80730000u; // 800E17EC
  c->r[3]=c->r[31]+0x00006D10u; // 800E17F0
  c->lr=0x800E17F8u; f_802D8298(c); // 800E17F4
  c->r[3]=0u+0x806D0000u; // 800E17F8
  c->r[4]=0u+0x80050000u; // 800E17FC
  c->r[3]=c->r[3]+0xFFFFC220u; // 800E1800
  c->r[5]=0u+0x80750000u; // 800E1804
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800E1808
  c->r[3]=c->r[31]+0x00006D10u; // 800E180C
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800E1810
  c->r[5]=c->r[5]+0x000039C8u; // 800E1814
  c->lr=0x800E181Cu; f_803A92B8(c); // 800E1818
  c->r[0]=0u+0x00000001u; // 800E181C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800E1820
L_800E1824:;
  c->r[4]=0u+0x80730000u; // 800E1824
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1828
  c->r[4]=c->r[4]+0x00006D10u; // 800E182C
  c->r[3]=c->r[30]|c->r[30]; // 800E1830
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1834
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800E1838
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[0]);} // 800E183C
  c->lr=0x800E1844u; f_800E186C(c); // 800E1840
L_800E1844:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E1844
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800E1848
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E184C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800E1850
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800E1854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1858
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E185C
  c->lr=c->r[0]; // 800E1860
  c->r[1]=c->r[1]+0x00000030u; // 800E1864
  return; // 800E1868
}

// fn_800E186C
void f_800E186C(Ctx* __restrict c) {
  trace_call(0x800E186Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E186C
  c->r[0]=c->lr; // 800E1870
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800E1874
  c->r[11]=c->r[1]+0x00000090u; // 800E1878
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800E187C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800E1880
  c->lr=0x800E1888u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1884
  c->r[30]=0u+0x00000000u; // 800E1888
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800E188C
  c->r[31]=c->r[3]|c->r[3]; // 800E1890
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1894
  c->lr=0x800E189Cu; f_8004EC30(c); // 800E1898
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E189C
  c->lr=0x800E18A4u; f_80323304(c); // 800E18A0
  {uint32_t ea=c->r[3]+0x00000258u; WF32(ea,c->f[31]);} // 800E18A4
  c->r[3]=c->r[1]+0x0000001Cu; // 800E18A8
  c->r[4]=0u+0x000000FFu; // 800E18AC
  c->r[5]=0u+0x000000FFu; // 800E18B0
  c->r[6]=0u+0x000000FFu; // 800E18B4
  c->r[7]=0u+0x000000FFu; // 800E18B8
  c->lr=0x800E18C0u; f_800E1A68(c); // 800E18BC
  W8(c->r[1]+0x00000008u,c->r[30]); // 800E18C0
  c->r[3]=c->r[1]+0x00000008u; // 800E18C4
  c->lr=0x800E18CCu; f_8004EC30(c); // 800E18C8
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E18CC
  c->r[29]=c->r[1]+0x00000014u; // 800E18D0
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E18D4
  c->r[27]=0u+0x00000000u; // 800E18D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800E18DC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E18E0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800E18E4
  c->r[28]=R32(c->r[1]+0x0000005Cu); // 800E18E8
L_800E18EC:;
  c->lr=0x800E18F0u; f_80349570(c); // 800E18EC
  c->r[4]=c->r[27]|c->r[27]; // 800E18F0
  c->lr=0x800E18F8u; f_80349DD4(c); // 800E18F4
  c->r[26]=c->r[3]|c->r[3]; // 800E18F8
  c->lr=0x800E1900u; f_8034CB18(c); // 800E18FC
  c->r[30]=c->r[3]|c->r[3]; // 800E1900
  c->r[25]=0u+0x00000000u; // 800E1904
  goto L_800E19BC; // 800E1908
L_800E190C:;
  c->r[3]=c->r[26]|c->r[26]; // 800E190C
  c->r[4]=c->r[25]|c->r[25]; // 800E1910
  c->lr=0x800E1918u; f_8034CB40(c); // 800E1914
  cmps(c,0,(int32_t)c->r[3],0); // 800E1918
  if (crb(c,2)) { goto L_800E19B8; } // 800E191C
  c->r[12]=R32(c->r[3]+0x00000054u); // 800E1920
  c->r[12]=R32(c->r[12]+0x00000018u); // 800E1924
  c->ctr=c->r[12]; // 800E1928
  if (true) { c->lr=0x800E1930u; dispatch(c,c->ctr); } // 800E192C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1930
  c->r[24]=c->r[3]|c->r[3]; // 800E1934
  if (crb(c,2)) { goto L_800E19B8; } // 800E1938
  c->r[23]=0u+0x00000000u; // 800E193C
  goto L_800E19A0; // 800E1940
L_800E1944:;
  c->r[4]=c->r[24]|c->r[24]; // 800E1944
  c->r[5]=c->r[23]|c->r[23]; // 800E1948
  c->r[3]=c->r[1]+0x00000020u; // 800E194C
  c->lr=0x800E1954u; f_804CFFFC(c); // 800E1950
  c->r[3]=c->r[1]+0x00000020u; // 800E1954
  c->r[4]=0u+0x00000000u; // 800E1958
  c->lr=0x800E1960u; f_804CFF54(c); // 800E195C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800E1960
  c->r[3]=c->r[1]+0x00000018u; // 800E1964
  c->r[5]=c->r[1]+0x0000001Cu; // 800E1968
  c->r[4]=0u+0x00000003u; // 800E196C
  c->lr=0x800E1974u; f_804AF178(c); // 800E1970
  W8(c->r[1]+0x0000001Fu,c->r[28]); // 800E1974
  c->r[5]=c->r[29]|c->r[29]; // 800E1978
  c->r[3]=c->r[1]+0x00000018u; // 800E197C
  c->r[4]=0u+0x00000003u; // 800E1980
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800E1984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1988
  c->lr=0x800E1990u; f_804AF230(c); // 800E198C
  c->r[3]=c->r[1]+0x00000018u; // 800E1990
  c->r[4]=0u+0x00000000u; // 800E1994
  c->lr=0x800E199Cu; f_804AE634(c); // 800E1998
  c->r[23]=c->r[23]+0x00000001u; // 800E199C
L_800E19A0:;
  c->r[0]=R32(c->r[24]+0x000000E8u); // 800E19A0
  c->r[3]=c->r[1]+0x00000010u; // 800E19A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E19A8
  c->lr=0x800E19B0u; f_804ACA9C(c); // 800E19AC
  cmpu(c,0,c->r[23],c->r[3]); // 800E19B0
  if (crb(c,0)) { IRQCHK(c); goto L_800E1944; } // 800E19B4
L_800E19B8:;
  c->r[25]=c->r[25]+0x00000001u; // 800E19B8
L_800E19BC:;
  cmpu(c,0,c->r[25],c->r[30]); // 800E19BC
  if (crb(c,0)) { IRQCHK(c); goto L_800E190C; } // 800E19C0
  c->r[27]=c->r[27]+0x00000001u; // 800E19C4
  cmpu(c,0,c->r[27],0x00000005u); // 800E19C8
  if (crb(c,0)) { IRQCHK(c); goto L_800E18EC; } // 800E19CC
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800E19D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E19D4
  if (!crb(c,2)) { goto L_800E1A1C; } // 800E19D8
  c->r[30]=0u+0x80740000u; // 800E19DC
  c->r[3]=c->r[30]+0x000074BCu; // 800E19E0
  c->lr=0x800E19E8u; f_800506C0(c); // 800E19E4
  c->r[6]=0u+0x806D0000u; // 800E19E8
  c->r[4]=0u+0x80060000u; // 800E19EC
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800E19F0
  c->r[3]=c->r[30]+0x000074BCu; // 800E19F4
  c->r[0]=c->r[6]+0x00000008u; // 800E19F8
  c->r[5]=0u+0x80750000u; // 800E19FC
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E1A00
  c->r[4]=c->r[4]+0x000057D4u; // 800E1A04
  c->r[5]=c->r[5]+0x000039BCu; // 800E1A08
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E1A0C
  c->lr=0x800E1A14u; f_803A92B8(c); // 800E1A10
  c->r[0]=0u+0x00000001u; // 800E1A14
  W8(c->r[13]+0xFFFFBE09u,c->r[0]); // 800E1A18
L_800E1A1C:;
  c->r[3]=0u+0x80740000u; // 800E1A1C
  c->r[30]=R32(c->r[3]+0x000074BCu); // 800E1A20
  c->r[29]=c->r[3]+0x000074BCu; // 800E1A24
  goto L_800E1A38; // 800E1A28
L_800E1A2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E1A2C
  c->lr=0x800E1A34u; f_800E1D00(c); // 800E1A30
  c->r[30]=R32(c->r[30]+0x00000000u); // 800E1A34
L_800E1A38:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800E1A38
  c->r[0]=R32(c->r[29]+0x00000008u); // 800E1A3C
  cmpu(c,0,c->r[4],c->r[0]); // 800E1A40
  if (!crb(c,2)) { IRQCHK(c); goto L_800E1A2C; } // 800E1A44
  c->r[11]=c->r[1]+0x00000090u; // 800E1A48
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800E1A4C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800E1A50
  c->lr=0x800E1A58u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E1A54
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800E1A58
  c->lr=c->r[0]; // 800E1A5C
  c->r[1]=c->r[1]+0x000000A0u; // 800E1A60
  return; // 800E1A64
}

// fn_800E1A68
void f_800E1A68(Ctx* __restrict c) {
  trace_call(0x800E1A68u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 800E1A68
  W8(c->r[3]+0x00000001u,c->r[5]); // 800E1A6C
  W8(c->r[3]+0x00000002u,c->r[6]); // 800E1A70
  W8(c->r[3]+0x00000003u,c->r[7]); // 800E1A74
  return; // 800E1A78
}

// fn_800E1A7C
void f_800E1A7C(Ctx* __restrict c) {
  trace_call(0x800E1A7Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800E1A7C
  return; // 800E1A80
}

// fn_800E1A84
void f_800E1A84(Ctx* __restrict c) {
  trace_call(0x800E1A84u);
  c->r[3]=0u+0x00000020u; // 800E1A84
  return; // 800E1A88
}

// fn_800E1A8C
void f_800E1A8C(Ctx* __restrict c) {
  trace_call(0x800E1A8Cu);
  c->r[3]=0u+0x800E0000u; // 800E1A8C
  c->r[3]=c->r[3]+0x00001A98u; // 800E1A90
  return; // 800E1A94
}

// fn_800E1A98
void f_800E1A98(Ctx* __restrict c) {
  trace_call(0x800E1A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1A98
  c->r[0]=c->lr; // 800E1A9C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E1AA0
  c->r[11]=c->r[1]+0x00000050u; // 800E1AA4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800E1AA8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800E1AAC
  c->lr=0x800E1AB4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1AB0
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E1AB4
  c->r[31]=c->r[5]|c->r[5]; // 800E1AB8
  c->r[0]=c->r[3]+0xB9B80000u; // 800E1ABC
  cmpu(c,0,c->r[0],0x00004452u); // 800E1AC0
  if (crb(c,2)) { goto L_800E1AD0; } // 800E1AC4
  c->r[3]=0u+0x00000001u; // 800E1AC8
  goto L_800E1C78; // 800E1ACC
L_800E1AD0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E1AD0
  cmps(c,0,(int32_t)c->r[0],0); // 800E1AD4
  if (crb(c,2)) { goto L_800E1AE4; } // 800E1AD8
  c->r[3]=0u+0x00000001u; // 800E1ADC
  goto L_800E1C78; // 800E1AE0
L_800E1AE4:;
  c->r[5]=R32(c->r[4]+0x00000008u); // 800E1AE4
  c->r[0]=0u+0x00000000u; // 800E1AE8
  c->r[3]=c->r[1]+0x00000030u; // 800E1AEC
  W8(c->r[1]+0x00000030u,c->r[0]); // 800E1AF0
  c->r[29]=c->r[4]+c->r[5]; // 800E1AF4
  c->lr=0x800E1AFCu; f_8004EC30(c); // 800E1AF8
  c->r[4]=c->r[29]|c->r[29]; // 800E1AFC
  c->r[3]=c->r[3]+0x00000058u; // 800E1B00
  c->lr=0x800E1B08u; f_800E1C98(c); // 800E1B04
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1B08
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1B0C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1B10
  if (!crb(c,0)) { goto L_800E1BA4; } // 800E1B14
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800E1B18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E1B1C
  if (!crb(c,2)) { goto L_800E1B64; } // 800E1B20
  c->r[30]=0u+0x80730000u; // 800E1B24
  c->r[3]=c->r[30]+0x00005908u; // 800E1B28
  c->lr=0x800E1B30u; f_8009822C(c); // 800E1B2C
  c->r[6]=0u+0x806D0000u; // 800E1B30
  c->r[4]=0u+0x80050000u; // 800E1B34
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800E1B38
  c->r[3]=c->r[30]+0x00005908u; // 800E1B3C
  c->r[0]=c->r[6]+0x00000028u; // 800E1B40
  c->r[5]=0u+0x80750000u; // 800E1B44
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800E1B48
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800E1B4C
  c->r[5]=c->r[5]+0x000039B0u; // 800E1B50
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E1B54
  c->lr=0x800E1B5Cu; f_803A92B8(c); // 800E1B58
  c->r[0]=0u+0x00000001u; // 800E1B5C
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800E1B60
L_800E1B64:;
  c->r[3]=0u+0x80730000u; // 800E1B64
  c->r[4]=c->r[31]|c->r[31]; // 800E1B68
  c->r[3]=c->r[3]+0x00005908u; // 800E1B6C
  c->lr=0x800E1B74u; f_80099344(c); // 800E1B70
  c->r[30]=c->r[3]|c->r[3]; // 800E1B74
  c->lr=0x800E1B7Cu; f_80349570(c); // 800E1B78
  c->r[4]=c->r[30]|c->r[30]; // 800E1B7C
  c->lr=0x800E1B84u; f_80349DD4(c); // 800E1B80
  c->r[0]=0u+0x00000000u; // 800E1B84
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800E1B88
  c->r[4]=c->r[3]|c->r[3]; // 800E1B8C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E1B90
  c->r[4]=R32(c->r[4]+0x000019B8u); // 800E1B94
  {uint32_t ea=c->r[4]+0x00000218u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1B98
  c->lr=0x800E1BA0u; f_8004EC30(c); // 800E1B9C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[31]);} // 800E1BA0
L_800E1BA4:;
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1BA4
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1BA8
  fcmp(c,0,c->f[1],c->f[0]); // 800E1BAC
  if (!crb(c,0)) { goto L_800E1BDC; } // 800E1BB0
  c->r[0]=0u+0x00000000u; // 800E1BB4
  W8(c->r[1]+0x00000024u,c->r[0]); // 800E1BB8
  c->r[3]=c->r[1]+0x00000024u; // 800E1BBC
  c->r[30]=c->r[1]+0x00000028u; // 800E1BC0
  W8(c->r[1]+0x00000028u,c->r[0]); // 800E1BC4
  c->lr=0x800E1BCCu; f_8004EC30(c); // 800E1BC8
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1BCC
  c->r[3]=c->r[30]|c->r[30]; // 800E1BD0
  c->lr=0x800E1BD8u; f_8004EC30(c); // 800E1BD4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[31]);} // 800E1BD8
L_800E1BDC:;
  c->r[30]=0u+0x00000000u; // 800E1BDC
  W8(c->r[1]+0x00000020u,c->r[30]); // 800E1BE0
  c->r[31]=c->r[1]+0x00000020u; // 800E1BE4
  c->lr=0x800E1BECu; f_80323304(c); // 800E1BE8
  {uint32_t ea=c->r[3]+0x00000258u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1BEC
  c->r[3]=c->r[31]|c->r[31]; // 800E1BF0
  c->lr=0x800E1BF8u; f_8004EC30(c); // 800E1BF4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[31]);} // 800E1BF8
  c->r[3]=c->r[1]+0x00000018u; // 800E1BFC
  c->r[31]=c->r[1]+0x0000001Cu; // 800E1C00
  W8(c->r[1]+0x00000018u,c->r[30]); // 800E1C04
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800E1C08
  c->lr=0x800E1C10u; f_8004EC30(c); // 800E1C0C
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1C10
  c->r[3]=c->r[31]|c->r[31]; // 800E1C14
  c->lr=0x800E1C1Cu; f_8004EC30(c); // 800E1C18
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[31]);} // 800E1C1C
  c->r[3]=c->r[1]+0x00000010u; // 800E1C20
  c->r[29]=c->r[1]+0x00000014u; // 800E1C24
  W8(c->r[1]+0x00000010u,c->r[30]); // 800E1C28
  W8(c->r[1]+0x00000014u,c->r[30]); // 800E1C2C
  c->lr=0x800E1C34u; f_8004EC30(c); // 800E1C30
  c->r[31]=c->r[3]|c->r[3]; // 800E1C34
  c->r[3]=c->r[29]|c->r[29]; // 800E1C38
  c->lr=0x800E1C40u; f_8004EC30(c); // 800E1C3C
  c->r[3]=c->r[3]+0x00000098u; // 800E1C40
  c->r[4]=c->r[31]+0x00000018u; // 800E1C44
  c->lr=0x800E1C4Cu; f_800E1C98(c); // 800E1C48
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800E1C4C
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1C50
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E1C54
  c->lr=0x800E1C5Cu; f_8004EC30(c); // 800E1C58
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[31]);} // 800E1C5C
  c->r[3]=c->r[1]+0x00000008u; // 800E1C60
  c->r[31]=0u+0x00000001u; // 800E1C64
  W8(c->r[1]+0x00000008u,c->r[30]); // 800E1C68
  c->lr=0x800E1C70u; f_8004EC30(c); // 800E1C6C
  W8(c->r[3]+0x000000DCu,c->r[31]); // 800E1C70
  c->r[3]=0u+0x00000001u; // 800E1C74
L_800E1C78:;
  c->r[11]=c->r[1]+0x00000050u; // 800E1C78
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800E1C7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800E1C80
  c->lr=0x800E1C88u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E1C84
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E1C88
  c->lr=c->r[0]; // 800E1C8C
  c->r[1]=c->r[1]+0x00000060u; // 800E1C90
  return; // 800E1C94
}

// fn_800E1C98
void f_800E1C98(Ctx* __restrict c) {
  trace_call(0x800E1C98u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 800E1C98
  c->r[0]=0u+0x00000004u; // 800E1C9C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800E1CA0
  c->r[5]=c->r[4]+0x0000001Cu; // 800E1CA4
  c->r[6]=c->r[3]+0x0000001Cu; // 800E1CA8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1CAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800E1CB0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1CB4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800E1CB8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1CBC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E1CC0
  c->r[8]=R32(c->r[4]+0x00000010u); // 800E1CC4
  c->r[7]=R32(c->r[4]+0x00000014u); // 800E1CC8
  W32(c->r[3]+0x00000014u,c->r[7]); // 800E1CCC
  W32(c->r[3]+0x00000010u,c->r[8]); // 800E1CD0
  c->r[7]=R32(c->r[4]+0x00000018u); // 800E1CD4
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 800E1CD8
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800E1CDC
  W32(c->r[3]+0x00000018u,c->r[7]); // 800E1CE0
  c->ctr=c->r[0]; // 800E1CE4
L_800E1CE8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800E1CE8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800E1CEC
  W32(c->r[6]+0x00000004u,c->r[4]); // 800E1CF0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800E1CF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E1CE8; } // 800E1CF8
  return; // 800E1CFC
}

// fn_800E1D00
void f_800E1D00(Ctx* __restrict c) {
  trace_call(0x800E1D00u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1D00
  c->r[0]=c->lr; // 800E1D04
  W32(c->r[1]+0x00000084u,c->r[0]); // 800E1D08
  c->r[11]=c->r[1]+0x00000080u; // 800E1D0C
  c->lr=0x800E1D14u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1D10
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1D14
  c->r[24]=c->r[4]|c->r[4]; // 800E1D18
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1D1C
  c->r[3]=c->r[1]+0x00000014u; // 800E1D20
  c->r[4]=0u+0x000000FFu; // 800E1D24
  c->r[5]=0u+0x000000FFu; // 800E1D28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800E1D2C
  c->r[6]=0u+0x000000FFu; // 800E1D30
  c->r[7]=0u+0x000000FFu; // 800E1D34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E1D38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800E1D3C
  c->r[29]=R32(c->r[1]+0x00000054u); // 800E1D40
  c->lr=0x800E1D48u; f_800E1A68(c); // 800E1D44
  c->r[28]=R32(c->r[24]+0x00000130u); // 800E1D48
  c->r[30]=c->r[1]+0x00000008u; // 800E1D4C
  c->r[27]=0u+0x00000000u; // 800E1D50
  c->r[31]=0u+0x00000000u; // 800E1D54
  goto L_800E1DF4; // 800E1D58
L_800E1D5C:;
  c->r[3]=c->r[24]+c->r[31]; // 800E1D5C
  c->r[25]=0u+0x00000000u; // 800E1D60
  c->r[26]=R32(c->r[3]+0x00000138u); // 800E1D64
  c->r[0]=R32(c->r[26]+0x000000E8u); // 800E1D68
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E1D6C
  goto L_800E1DDC; // 800E1D70
L_800E1D74:;
  c->r[4]=c->r[26]|c->r[26]; // 800E1D74
  c->r[5]=c->r[25]|c->r[25]; // 800E1D78
  c->r[3]=c->r[1]+0x00000018u; // 800E1D7C
  c->lr=0x800E1D84u; f_804CFFFC(c); // 800E1D80
  c->r[3]=c->r[1]+0x00000018u; // 800E1D84
  c->r[4]=0u+0x00000000u; // 800E1D88
  c->lr=0x800E1D90u; f_804CFF54(c); // 800E1D8C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800E1D90
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1D94
  c->r[5]=c->r[1]+0x00000014u; // 800E1D98
  c->r[4]=0u+0x00000003u; // 800E1D9C
  c->lr=0x800E1DA4u; f_804AF178(c); // 800E1DA0
  W8(c->r[1]+0x00000014u,c->r[29]); // 800E1DA4
  c->r[5]=c->r[30]|c->r[30]; // 800E1DA8
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1DAC
  c->r[4]=0u+0x00000003u; // 800E1DB0
  W8(c->r[1]+0x00000015u,c->r[29]); // 800E1DB4
  W8(c->r[1]+0x00000016u,c->r[29]); // 800E1DB8
  W8(c->r[1]+0x00000017u,c->r[29]); // 800E1DBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1DC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800E1DC4
  c->lr=0x800E1DCCu; f_804AF230(c); // 800E1DC8
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1DCC
  c->r[4]=0u+0x00000000u; // 800E1DD0
  c->lr=0x800E1DD8u; f_804AE634(c); // 800E1DD4
  c->r[25]=c->r[25]+0x00000001u; // 800E1DD8
L_800E1DDC:;
  c->r[3]=c->r[1]+0x00000010u; // 800E1DDC
  c->lr=0x800E1DE4u; f_804ACA9C(c); // 800E1DE0
  cmpu(c,0,c->r[25],c->r[3]); // 800E1DE4
  if (crb(c,0)) { IRQCHK(c); goto L_800E1D74; } // 800E1DE8
  c->r[27]=c->r[27]+0x00000001u; // 800E1DEC
  c->r[31]=c->r[31]+0x00000004u; // 800E1DF0
L_800E1DF4:;
  cmpu(c,0,c->r[27],c->r[28]); // 800E1DF4
  if (crb(c,0)) { IRQCHK(c); goto L_800E1D5C; } // 800E1DF8
  c->r[11]=c->r[1]+0x00000080u; // 800E1DFC
  c->lr=0x800E1E04u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E1E00
  c->r[0]=R32(c->r[1]+0x00000084u); // 800E1E04
  c->lr=c->r[0]; // 800E1E08
  c->r[1]=c->r[1]+0x00000080u; // 800E1E0C
  return; // 800E1E10
}

// fn_800E1E14
void f_800E1E14(Ctx* __restrict c) {
  trace_call(0x800E1E14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E14
  c->r[0]=c->lr; // 800E1E18
  c->r[4]=0u+0x806D0000u; // 800E1E1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1E20
  c->r[4]=c->r[4]+0x00007E58u; // 800E1E24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1E28
  c->r[29]=c->r[3]|c->r[3]; // 800E1E2C
  c->r[30]=c->r[29]|c->r[29]; // 800E1E30
  c->r[31]=c->r[3]+0x00000040u; // 800E1E34
  W32(c->r[3]+0x000000A0u,c->r[4]); // 800E1E38
L_800E1E3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1E3C
  c->r[4]=0u+0x00000000u; // 800E1E40
  c->r[5]=0u+0x00000004u; // 800E1E44
  c->lr=0x800E1E4Cu; f_800043EC(c); // 800E1E48
  c->r[30]=c->r[30]+0x00000004u; // 800E1E4C
  cmpu(c,0,c->r[30],c->r[31]); // 800E1E50
  if (crb(c,0)) { IRQCHK(c); goto L_800E1E3C; } // 800E1E54
  c->r[3]=c->r[29]|c->r[29]; // 800E1E58
  c->lr=0x800E1E60u; f_800E1EBC(c); // 800E1E5C
  c->r[3]=c->r[29]|c->r[29]; // 800E1E60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1E64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1E68
  c->lr=c->r[0]; // 800E1E6C
  c->r[1]=c->r[1]+0x00000020u; // 800E1E70
  return; // 800E1E74
}

// dtor_800E1E78
void f_800E1E78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E78
  c->r[0]=c->lr; // 800E1E7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1E80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1E84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1E88
  c->r[31]=c->r[3]|c->r[3]; // 800E1E8C
  if (crb(c,2)) { goto L_800E1EA4; } // 800E1E90
  c->r[4]=0u+0x806D0000u; // 800E1E94
  c->r[4]=c->r[4]+0x00007E58u; // 800E1E98
  W32(c->r[3]+0x000000A0u,c->r[4]); // 800E1E9C
  c->lr=0x800E1EA4u; f_800E1EBC(c); // 800E1EA0
L_800E1EA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E1EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1EAC
  c->lr=c->r[0]; // 800E1EB0
  c->r[1]=c->r[1]+0x00000010u; // 800E1EB4
  return; // 800E1EB8
}

// fn_800E1EBC
void f_800E1EBC(Ctx* __restrict c) {
  trace_call(0x800E1EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1EBC
  c->r[0]=c->lr; // 800E1EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1EC4
  c->r[11]=c->r[1]+0x00000020u; // 800E1EC8
  c->lr=0x800E1ED0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1ECC
  c->r[29]=c->r[3]|c->r[3]; // 800E1ED0
  c->r[3]=c->r[3]+0x00000048u; // 800E1ED4
  c->lr=0x800E1EDCu; f_80382F00(c); // 800E1ED8
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1EDC
  c->r[30]=0u+0x00000000u; // 800E1EE0
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1EE4
  c->r[31]=0u+0x00000000u; // 800E1EE8
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[1]);} // 800E1EEC
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E1EF0
L_800E1EF4:;
  c->r[3]=c->r[29]+c->r[31]; // 800E1EF4
  c->r[4]=0u+0x00000000u; // 800E1EF8
  c->r[5]=0u+0x00000004u; // 800E1EFC
  c->lr=0x800E1F04u; f_800043EC(c); // 800E1F00
  c->r[30]=c->r[30]+0x00000001u; // 800E1F04
  c->r[31]=c->r[31]+0x00000004u; // 800E1F08
  cmpu(c,0,c->r[30],0x00000010u); // 800E1F0C
  if (crb(c,0)) { IRQCHK(c); goto L_800E1EF4; } // 800E1F10
  c->r[0]=0u+0x00000000u; // 800E1F14
  W32(c->r[29]+0x00000080u,c->r[0]); // 800E1F18
  c->r[11]=c->r[1]+0x00000020u; // 800E1F1C
  W32(c->r[29]+0x00000084u,c->r[0]); // 800E1F20
  c->lr=0x800E1F28u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E1F24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1F28
  c->lr=c->r[0]; // 800E1F2C
  c->r[1]=c->r[1]+0x00000020u; // 800E1F30
  return; // 800E1F34
}

// fn_800E1F38
void f_800E1F38(Ctx* __restrict c) {
  trace_call(0x800E1F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1F38
  c->r[0]=c->lr; // 800E1F3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1F40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1F44
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1F48
  c->r[30]=c->r[3]|c->r[3]; // 800E1F4C
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1F50
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800E1F54
  c->lr=0x800E1F5Cu; f_8033FE4C(c); // 800E1F58
  c->lr=0x800E1F60u; f_8009BA1C(c); // 800E1F5C
  c->r[3]=c->r[3]+0x00000078u; // 800E1F60
  c->lr=0x800E1F68u; f_80331648(c); // 800E1F64
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800E1F68
  c->lr=0x800E1F70u; f_8033FE4C(c); // 800E1F6C
  c->r[4]=c->r[30]+0x00000048u; // 800E1F70
  c->lr=0x800E1F78u; f_803412DC(c); // 800E1F74
  c->r[0]=R32(c->r[30]+0x00000080u); // 800E1F78
  cmps(c,0,(int32_t)c->r[0],1); // 800E1F7C
  if (crb(c,2)) { goto L_800E1F90; } // 800E1F80
  cmps(c,0,(int32_t)c->r[0],2); // 800E1F84
  if (crb(c,2)) { goto L_800E2004; } // 800E1F88
  goto L_800E2070; // 800E1F8C
L_800E1F90:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 800E1F90
  cmps(c,0,(int32_t)c->r[0],0); // 800E1F94
  if (crb(c,2)) { goto L_800E2070; } // 800E1F98
  c->r[31]=0u+0x00000000u; // 800E1F9C
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800E1FA0
  c->r[3]=c->r[1]+0x0000000Cu; // 800E1FA4
  c->lr=0x800E1FACu; f_8004714C(c); // 800E1FA8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1FAC
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1FB0
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1FB4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 800E1FB8
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1FBC
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[2]);} // 800E1FC0
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 800E1FC4
  fcmp(c,0,c->f[1],c->f[0]); // 800E1FC8
  if (!crb(c,0)) { goto L_800E1FE4; } // 800E1FCC
  c->r[3]=R32(c->r[30]+0x00000084u); // 800E1FD0
  c->lr=0x800E1FD8u; f_803317DC(c); // 800E1FD4
  W32(c->r[30]+0x00000084u,c->r[31]); // 800E1FD8
  W32(c->r[30]+0x00000080u,c->r[31]); // 800E1FDC
  goto L_800E2070; // 800E1FE0
L_800E1FE4:;
  c->r[3]=R32(c->r[30]+0x00000084u); // 800E1FE4
  c->f[1]=c->f[0]; // 800E1FE8
  c->r[0]=R32(c->r[3]+0x000000D8u); // 800E1FEC
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 800E1FF0
  W32(c->r[3]+0x000000D8u,c->r[0]); // 800E1FF4
  c->r[3]=R32(c->r[30]+0x00000084u); // 800E1FF8
  c->lr=0x800E2000u; f_803317DC(c); // 800E1FFC
  goto L_800E2070; // 800E2000
L_800E2004:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 800E2004
  cmps(c,0,(int32_t)c->r[0],0); // 800E2008
  if (crb(c,2)) { goto L_800E2070; } // 800E200C
  c->r[31]=0u+0x00000000u; // 800E2010
  W8(c->r[1]+0x00000008u,c->r[31]); // 800E2014
  c->r[3]=c->r[1]+0x00000008u; // 800E2018
  c->lr=0x800E2020u; f_8004714C(c); // 800E201C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2020
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2024
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2028
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 800E202C
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2030
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2034
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[3]);} // 800E2038
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800E203C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800E2040
  fcmp(c,0,c->f[1],c->f[0]); // 800E2044
  if (!crb(c,0)) { goto L_800E2068; } // 800E2048
  c->r[3]=R32(c->r[30]+0x00000084u); // 800E204C
  c->r[0]=R32(c->r[3]+0x000000D8u); // 800E2050
  c->r[0]=c->r[0]|0x40000000u; // 800E2054
  W32(c->r[3]+0x000000D8u,c->r[0]); // 800E2058
  W32(c->r[30]+0x00000084u,c->r[31]); // 800E205C
  W32(c->r[30]+0x00000080u,c->r[31]); // 800E2060
  goto L_800E2070; // 800E2064
L_800E2068:;
  c->r[3]=R32(c->r[30]+0x00000084u); // 800E2068
  c->lr=0x800E2070u; f_803317DC(c); // 800E206C
L_800E2070:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2074
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E2078
  c->lr=c->r[0]; // 800E207C
  c->r[1]=c->r[1]+0x00000020u; // 800E2080
  return; // 800E2084
}

// fn_800E2088
void f_800E2088(Ctx* __restrict c) {
  trace_call(0x800E2088u);
  W32(c->r[3]+0x00000040u,c->r[4]); // 800E2088
  return; // 800E208C
}

// fn_800E2090
void f_800E2090(Ctx* __restrict c) {
  trace_call(0x800E2090u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2090
  c->r[0]=c->lr; // 800E2094
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800E2098
  {uint32_t ea=c->r[1]+0x00000090u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E209C
  c->r[28]=c->r[3]|c->r[3]; // 800E20A0
  c->lr=0x800E20A8u; f_8033FE4C(c); // 800E20A4
  c->lr=0x800E20ACu; f_8009BA1C(c); // 800E20A8
  c->r[3]=c->r[3]+0x00000078u; // 800E20AC
  c->lr=0x800E20B4u; f_80331680(c); // 800E20B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E20B4
  c->r[30]=c->r[3]|c->r[3]; // 800E20B8
  if (!crb(c,2)) { goto L_800E20CC; } // 800E20BC
  c->r[3]=0u+0x80690000u; // 800E20C0
  c->r[3]=c->r[3]+0xFFFFEAB0u; // 800E20C4
  goto L_800E21A0; // 800E20C8
L_800E20CC:;
  c->r[31]=0u+0x80690000u; // 800E20CC
  c->r[29]=0u+0x00000000u; // 800E20D0
  c->r[31]=c->r[31]+0xFFFFEAB0u; // 800E20D4
L_800E20D8:;
  c->r[3]=R32(c->r[28]+0x00000040u); // 800E20D8
  c->r[4]=c->r[29]|c->r[29]; // 800E20DC
  c->lr=0x800E20E4u; f_802E5F44(c); // 800E20E0
  cmps(c,0,(int32_t)c->r[3],0); // 800E20E4
  if (crb(c,2)) { goto L_800E218C; } // 800E20E8
  c->r[3]=R32(c->r[28]+0x00000040u); // 800E20EC
  c->r[4]=c->r[29]|c->r[29]; // 800E20F0
  c->lr=0x800E20F8u; f_802E5F44(c); // 800E20F4
  c->r[4]=c->r[3]|c->r[3]; // 800E20F8
  c->r[3]=c->r[1]+0x00000018u; // 800E20FC
  c->lr=0x800E2104u; f_802D240C(c); // 800E2100
  c->r[3]=c->r[1]+0x00000018u; // 800E2104
  c->r[4]=c->r[31]+0x00000001u; // 800E2108
  c->r[5]=c->r[1]+0x00000008u; // 800E210C
  c->lr=0x800E2114u; f_802D27B4(c); // 800E2110
  cmps(c,0,(int32_t)c->r[3],0); // 800E2114
  if (!crb(c,2)) { goto L_800E212C; } // 800E2118
  c->r[3]=c->r[1]+0x00000018u; // 800E211C
  c->r[4]=0u+0xFFFFFFFFu; // 800E2120
  c->lr=0x800E2128u; f_802D246C(c); // 800E2124
  goto L_800E218C; // 800E2128
L_800E212C:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 800E212C
  c->r[3]=c->r[1]+0x00000018u; // 800E2130
  c->r[5]=0u+0x00000000u; // 800E2134
  c->lr=0x800E213Cu; f_802D25B8(c); // 800E2138
  cmpu(c,0,c->r[3],c->r[30]); // 800E213C
  if (!crb(c,2)) { goto L_800E2164; } // 800E2140
  c->r[3]=c->r[1]+0x00000018u; // 800E2144
  c->lr=0x800E214Cu; f_802D2930(c); // 800E2148
  c->r[30]=R32(c->r[1]+0x00000014u); // 800E214C
  c->r[3]=c->r[1]+0x00000018u; // 800E2150
  c->r[4]=0u+0xFFFFFFFFu; // 800E2154
  c->lr=0x800E215Cu; f_802D246C(c); // 800E2158
  c->r[3]=c->r[30]|c->r[30]; // 800E215C
  goto L_800E21A0; // 800E2160
L_800E2164:;
  c->r[3]=c->r[1]+0x00000018u; // 800E2164
  c->r[4]=c->r[1]+0x00000008u; // 800E2168
  c->lr=0x800E2170u; f_802D28A4(c); // 800E216C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2170
  if (!crb(c,2)) { IRQCHK(c); goto L_800E212C; } // 800E2174
  c->r[3]=c->r[1]+0x00000018u; // 800E2178
  c->lr=0x800E2180u; f_802D2930(c); // 800E217C
  c->r[3]=c->r[1]+0x00000018u; // 800E2180
  c->r[4]=0u+0xFFFFFFFFu; // 800E2184
  c->lr=0x800E218Cu; f_802D246C(c); // 800E2188
L_800E218C:;
  c->r[29]=c->r[29]+0x00000001u; // 800E218C
  cmps(c,0,(int32_t)c->r[29],10); // 800E2190
  if (crb(c,0)) { IRQCHK(c); goto L_800E20D8; } // 800E2194
  c->r[3]=0u+0x80690000u; // 800E2198
  c->r[3]=c->r[3]+0xFFFFEAB0u; // 800E219C
L_800E21A0:;
  {uint32_t ea=c->r[1]+0x00000090u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E21A0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800E21A4
  c->lr=c->r[0]; // 800E21A8
  c->r[1]=c->r[1]+0x000000A0u; // 800E21AC
  return; // 800E21B0
}

// fn_800E21B4
void f_800E21B4(Ctx* __restrict c) {
  trace_call(0x800E21B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21B4
  c->r[0]=c->lr; // 800E21B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E21BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800E21C0
  c->f[31]=c->f[1]; // 800E21C4
  c->lr=0x800E21CCu; f_8009A32C(c); // 800E21C8
  c->f[1]=c->f[31]; // 800E21CC
  c->lr=0x800E21D4u; f_8009BD88(c); // 800E21D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E21D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800E21D8
  c->lr=c->r[0]; // 800E21DC
  c->r[1]=c->r[1]+0x00000010u; // 800E21E0
  return; // 800E21E4
}

// fn_800E21E8
void f_800E21E8(Ctx* __restrict c) {
  trace_call(0x800E21E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21E8
  c->r[0]=c->lr; // 800E21EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E21F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800E21F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800E21F8
  c->f[31]=c->f[1]; // 800E21FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2200
  c->r[31]=c->r[4]|c->r[4]; // 800E2204
  c->lr=0x800E220Cu; f_8033FE4C(c); // 800E2208
  c->lr=0x800E2210u; f_8009A9F8(c); // 800E220C
  c->f[1]=c->f[31]; // 800E2210
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2214
  c->lr=0x800E221Cu; f_800A77CC(c); // 800E2218
  c->lr=0x800E2220u; f_8033FE4C(c); // 800E221C
  c->lr=0x800E2224u; f_8009A9F8(c); // 800E2220
  c->r[4]=c->r[31]|c->r[31]; // 800E2224
  c->lr=0x800E222Cu; f_800A73BC(c); // 800E2228
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E222C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800E2230
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800E2234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2238
  c->lr=c->r[0]; // 800E223C
  c->r[1]=c->r[1]+0x00000020u; // 800E2240
  return; // 800E2244
}

// fn_800E2248
void f_800E2248(Ctx* __restrict c) {
  trace_call(0x800E2248u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2248
  c->r[0]=c->lr; // 800E224C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2250
  c->r[3]=c->r[1]+0x00000018u; // 800E2254
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E2258
  c->r[31]=0u+0x00000000u; // 800E225C
  W8(c->r[1]+0x00000018u,c->r[31]); // 800E2260
  c->lr=0x800E2268u; f_8004816C(c); // 800E2264
  c->lr=0x800E226Cu; f_800475D4(c); // 800E2268
  W8(c->r[1]+0x00000014u,c->r[31]); // 800E226C
  c->r[3]=c->r[1]+0x00000014u; // 800E2270
  c->lr=0x800E2278u; f_8004816C(c); // 800E2274
  c->lr=0x800E227Cu; f_800475D4(c); // 800E2278
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800E227C
  cmpu(c,0,c->r[0],0x00000007u); // 800E2280
  if (crb(c,1)) { goto L_800E22E8; } // 800E2284
  W8(c->r[1]+0x00000010u,c->r[31]); // 800E2288
  c->r[3]=c->r[1]+0x00000010u; // 800E228C
  c->lr=0x800E2294u; f_8004816C(c); // 800E2290
  c->lr=0x800E2298u; f_800475F0(c); // 800E2294
  cmps(c,0,(int32_t)c->r[3],0); // 800E2298
  if (!crb(c,2)) { goto L_800E22A8; } // 800E229C
  c->r[3]=0u+0x00000001u; // 800E22A0
  goto L_800E22EC; // 800E22A4
L_800E22A8:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800E22A8
  c->r[3]=c->r[1]+0x0000000Cu; // 800E22AC
  c->lr=0x800E22B4u; f_8004816C(c); // 800E22B0
  c->lr=0x800E22B8u; f_800475D4(c); // 800E22B4
  cmps(c,0,(int32_t)c->r[3],10); // 800E22B8
  if (!crb(c,2)) { goto L_800E22E0; } // 800E22BC
  W8(c->r[1]+0x00000008u,c->r[31]); // 800E22C0
  c->r[3]=c->r[1]+0x00000008u; // 800E22C4
  c->lr=0x800E22CCu; f_8004816C(c); // 800E22C8
  c->lr=0x800E22D0u; f_800475F0(c); // 800E22CC
  cmps(c,0,(int32_t)c->r[3],2); // 800E22D0
  if (!crb(c,2)) { goto L_800E22E0; } // 800E22D4
  c->r[3]=0u+0x00000001u; // 800E22D8
  goto L_800E22EC; // 800E22DC
L_800E22E0:;
  c->r[3]=0u+0x00000000u; // 800E22E0
  goto L_800E22EC; // 800E22E4
L_800E22E8:;
  c->r[3]=0u+0x00000001u; // 800E22E8
L_800E22EC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E22EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E22F0
  c->lr=c->r[0]; // 800E22F4
  c->r[1]=c->r[1]+0x00000030u; // 800E22F8
  return; // 800E22FC
}

// fn_800E2300
void f_800E2300(Ctx* __restrict c) {
  trace_call(0x800E2300u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2300
  c->r[0]=c->lr; // 800E2304
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2308
  c->r[11]=c->r[1]+0x00000020u; // 800E230C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E2310
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E2314
  c->lr=0x800E231Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2318
  c->f[31]=c->f[1]; // 800E231C
  c->r[29]=c->r[3]|c->r[3]; // 800E2320
  c->r[31]=c->r[4]|c->r[4]; // 800E2324
  c->r[30]=c->r[5]|c->r[5]; // 800E2328
  c->lr=0x800E2330u; f_800E2248(c); // 800E232C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2330
  if (crb(c,2)) { goto L_800E23BC; } // 800E2334
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2338
  c->r[4]=c->r[31]|c->r[31]; // 800E233C
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2340
  c->r[5]=0u+0x00000000u; // 800E2344
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[1]);} // 800E2348
  c->r[3]=R32(c->r[29]+0x00000040u); // 800E234C
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E2350
  c->lr=0x800E2358u; f_802E5F54(c); // 800E2354
  cmps(c,0,(int32_t)c->r[3],0); // 800E2358
  c->r[31]=c->r[3]|c->r[3]; // 800E235C
  if (crb(c,2)) { goto L_800E23BC; } // 800E2360
  c->lr=0x800E2368u; f_8033FE4C(c); // 800E2364
  c->lr=0x800E236Cu; f_8009BA1C(c); // 800E2368
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E236C
  c->r[4]=c->r[31]|c->r[31]; // 800E2370
  c->r[6]=c->r[30]|c->r[30]; // 800E2374
  c->r[5]=0u+0x00000000u; // 800E2378
  c->r[3]=c->r[3]+0x00000078u; // 800E237C
  c->lr=0x800E2384u; f_8033169C(c); // 800E2380
  c->lr=0x800E2388u; f_8033FE4C(c); // 800E2384
  c->lr=0x800E238Cu; f_8009BA1C(c); // 800E2388
  c->f[1]=c->f[31]; // 800E238C
  c->r[3]=c->r[3]+0x00000078u; // 800E2390
  c->lr=0x800E2398u; f_803317D4(c); // 800E2394
  c->lr=0x800E239Cu; f_8033FE4C(c); // 800E2398
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E239C
  c->lr=0x800E23A4u; f_80341364(c); // 800E23A0
  c->lr=0x800E23A8u; f_8033FE4C(c); // 800E23A4
  c->r[31]=c->r[3]|c->r[3]; // 800E23A8
  c->lr=0x800E23B0u; f_8009BA58(c); // 800E23AC
  c->r[4]=c->r[3]|c->r[3]; // 800E23B0
  c->r[3]=c->r[31]|c->r[31]; // 800E23B4
  c->lr=0x800E23BCu; f_8034121C(c); // 800E23B8
L_800E23BC:;
  c->r[11]=c->r[1]+0x00000020u; // 800E23BC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800E23C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E23C4
  c->lr=0x800E23CCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E23C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E23CC
  c->lr=c->r[0]; // 800E23D0
  c->r[1]=c->r[1]+0x00000030u; // 800E23D4
  return; // 800E23D8
}

// fn_800E23DC
void f_800E23DC(Ctx* __restrict c) {
  trace_call(0x800E23DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E23DC
  c->r[0]=c->lr; // 800E23E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E23E4
  c->r[11]=c->r[1]+0x00000020u; // 800E23E8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E23EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E23F0
  c->lr=0x800E23F8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E23F4
  c->f[31]=c->f[1]; // 800E23F8
  c->r[28]=c->r[3]|c->r[3]; // 800E23FC
  c->r[31]=c->r[4]|c->r[4]; // 800E2400
  c->r[29]=c->r[5]|c->r[5]; // 800E2404
  c->r[30]=c->r[6]|c->r[6]; // 800E2408
  c->lr=0x800E2410u; f_800E2248(c); // 800E240C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2410
  if (crb(c,2)) { goto L_800E24B0; } // 800E2414
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2418
  c->r[4]=c->r[31]|c->r[31]; // 800E241C
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2420
  c->r[5]=0u+0x00000000u; // 800E2424
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[1]);} // 800E2428
  c->r[3]=R32(c->r[28]+0x00000040u); // 800E242C
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E2430
  c->lr=0x800E2438u; f_802E5F54(c); // 800E2434
  cmps(c,0,(int32_t)c->r[3],0); // 800E2438
  c->r[31]=c->r[3]|c->r[3]; // 800E243C
  if (crb(c,2)) { goto L_800E24B0; } // 800E2440
  c->lr=0x800E2448u; f_8033FE4C(c); // 800E2444
  c->lr=0x800E244Cu; f_8009BA1C(c); // 800E2448
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E244C
  c->r[4]=c->r[31]|c->r[31]; // 800E2450
  c->r[6]=c->r[30]|c->r[30]; // 800E2454
  c->r[5]=0u+0x00000000u; // 800E2458
  c->r[3]=c->r[3]+0x00000078u; // 800E245C
  c->lr=0x800E2464u; f_8033169C(c); // 800E2460
  c->lr=0x800E2468u; f_8033FE4C(c); // 800E2464
  c->lr=0x800E246Cu; f_8009BA1C(c); // 800E2468
  c->f[1]=c->f[31]; // 800E246C
  c->r[3]=c->r[3]+0x00000078u; // 800E2470
  c->lr=0x800E2478u; f_803317D4(c); // 800E2474
  c->lr=0x800E247Cu; f_8033FE4C(c); // 800E2478
  c->lr=0x800E2480u; f_8009BA1C(c); // 800E247C
  c->r[4]=c->r[29]|c->r[29]; // 800E2480
  c->r[3]=c->r[3]+0x00000078u; // 800E2484
  c->lr=0x800E248Cu; f_80331890(c); // 800E2488
  c->lr=0x800E2490u; f_8033FE4C(c); // 800E248C
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2490
  c->lr=0x800E2498u; f_80341364(c); // 800E2494
  c->lr=0x800E249Cu; f_8033FE4C(c); // 800E2498
  c->r[31]=c->r[3]|c->r[3]; // 800E249C
  c->lr=0x800E24A4u; f_8009BA58(c); // 800E24A0
  c->r[4]=c->r[3]|c->r[3]; // 800E24A4
  c->r[3]=c->r[31]|c->r[31]; // 800E24A8
  c->lr=0x800E24B0u; f_8034121C(c); // 800E24AC
L_800E24B0:;
  c->r[11]=c->r[1]+0x00000020u; // 800E24B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800E24B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E24B8
  c->lr=0x800E24C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E24BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E24C0
  c->lr=c->r[0]; // 800E24C4
  c->r[1]=c->r[1]+0x00000030u; // 800E24C8
  return; // 800E24CC
}

// fn_800E24D0
void f_800E24D0(Ctx* __restrict c) {
  trace_call(0x800E24D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E24D0
  c->r[0]=c->lr; // 800E24D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E24D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E24DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E24E0
  c->f[31]=c->f[3]; // 800E24E4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800E24E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800E24EC
  c->f[30]=c->f[2]; // 800E24F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 800E24F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 800E24F8
  c->f[29]=c->f[1]; // 800E24FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2500
  c->r[31]=c->r[4]|c->r[4]; // 800E2504
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E2508
  c->r[30]=c->r[3]|c->r[3]; // 800E250C
  c->lr=0x800E2514u; f_800E2248(c); // 800E2510
  cmps(c,0,(int32_t)c->r[3],0); // 800E2514
  if (crb(c,2)) { goto L_800E25D4; } // 800E2518
  c->r[3]=R32(c->r[30]+0x00000040u); // 800E251C
  c->r[4]=c->r[31]|c->r[31]; // 800E2520
  c->r[5]=0u+0x00000000u; // 800E2524
  c->lr=0x800E252Cu; f_802E5F54(c); // 800E2528
  cmps(c,0,(int32_t)c->r[3],0); // 800E252C
  c->r[31]=c->r[3]|c->r[3]; // 800E2530
  if (crb(c,2)) { goto L_800E25D4; } // 800E2534
  c->lr=0x800E253Cu; f_8033FE4C(c); // 800E2538
  c->lr=0x800E2540u; f_8009BA1C(c); // 800E253C
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2540
  c->r[4]=c->r[31]|c->r[31]; // 800E2544
  c->r[5]=0u+0x00000000u; // 800E2548
  c->r[6]=0u+0x00000000u; // 800E254C
  c->r[3]=c->r[3]+0x00000078u; // 800E2550
  c->lr=0x800E2558u; f_8033169C(c); // 800E2554
  c->lr=0x800E255Cu; f_8033FE4C(c); // 800E2558
  c->lr=0x800E2560u; f_8009BA1C(c); // 800E255C
  c->f[1]=c->f[29]; // 800E2560
  c->r[3]=c->r[3]+0x00000078u; // 800E2564
  c->lr=0x800E256Cu; f_803317D4(c); // 800E2568
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E256C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800E2570
  fcmp(c,0,c->f[0],c->f[30]); // 800E2574
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[30]);} // 800E2578
  if (!crb(c,2)) { goto L_800E259C; } // 800E257C
  c->lr=0x800E2584u; f_8033FE4C(c); // 800E2580
  c->lr=0x800E2588u; f_8009BA1C(c); // 800E2584
  c->r[3]=c->r[3]+0x00000078u; // 800E2588
  c->lr=0x800E2590u; f_80331664(c); // 800E258C
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2590
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800E2594
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E2598
L_800E259C:;
  c->lr=0x800E25A0u; f_8033FE4C(c); // 800E259C
  c->lr=0x800E25A4u; f_8009BA1C(c); // 800E25A0
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E25A4
  c->r[3]=c->r[3]+0x00000078u; // 800E25A8
  c->lr=0x800E25B0u; f_80331808(c); // 800E25AC
  c->lr=0x800E25B4u; f_8033FE4C(c); // 800E25B0
  c->f[1]=c->f[31]; // 800E25B4
  c->lr=0x800E25BCu; f_80341364(c); // 800E25B8
  c->lr=0x800E25C0u; f_8033FE4C(c); // 800E25BC
  c->r[31]=c->r[3]|c->r[3]; // 800E25C0
  c->lr=0x800E25C8u; f_8009BA58(c); // 800E25C4
  c->r[4]=c->r[3]|c->r[3]; // 800E25C8
  c->r[3]=c->r[31]|c->r[31]; // 800E25CC
  c->lr=0x800E25D4u; f_8034121C(c); // 800E25D0
L_800E25D4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E25D4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E25D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E25DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800E25E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800E25E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 800E25E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 800E25EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E25F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E25F4
  c->lr=c->r[0]; // 800E25F8
  c->r[1]=c->r[1]+0x00000040u; // 800E25FC
  return; // 800E2600
}

// fn_800E2604
void f_800E2604(Ctx* __restrict c) {
  trace_call(0x800E2604u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2604
  c->r[0]=c->lr; // 800E2608
  W32(c->r[1]+0x00000054u,c->r[0]); // 800E260C
  c->r[11]=c->r[1]+0x00000020u; // 800E2610
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800E2614
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800E2618
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800E261C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800E2620
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 800E2624
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 800E2628
  c->lr=0x800E2630u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E262C
  c->f[29]=c->f[1]; // 800E2630
  c->r[29]=c->r[3]|c->r[3]; // 800E2634
  c->f[30]=c->f[2]; // 800E2638
  c->r[31]=c->r[4]|c->r[4]; // 800E263C
  c->f[31]=c->f[3]; // 800E2640
  c->r[30]=c->r[5]|c->r[5]; // 800E2644
  c->lr=0x800E264Cu; f_800E2248(c); // 800E2648
  cmps(c,0,(int32_t)c->r[3],0); // 800E264C
  if (crb(c,2)) { goto L_800E2720; } // 800E2650
  c->r[3]=R32(c->r[29]+0x00000040u); // 800E2654
  c->r[4]=c->r[31]|c->r[31]; // 800E2658
  c->r[5]=0u+0x00000000u; // 800E265C
  c->lr=0x800E2664u; f_802E5F54(c); // 800E2660
  cmps(c,0,(int32_t)c->r[3],0); // 800E2664
  c->r[31]=c->r[3]|c->r[3]; // 800E2668
  if (crb(c,2)) { goto L_800E2720; } // 800E266C
  c->lr=0x800E2674u; f_8033FE4C(c); // 800E2670
  c->lr=0x800E2678u; f_8009BA1C(c); // 800E2674
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2678
  c->r[4]=c->r[31]|c->r[31]; // 800E267C
  c->r[5]=0u+0x00000000u; // 800E2680
  c->r[6]=0u+0x00000000u; // 800E2684
  c->r[3]=c->r[3]+0x00000078u; // 800E2688
  c->lr=0x800E2690u; f_8033169C(c); // 800E268C
  c->lr=0x800E2694u; f_8033FE4C(c); // 800E2690
  c->lr=0x800E2698u; f_8009BA1C(c); // 800E2694
  c->f[1]=c->f[29]; // 800E2698
  c->r[3]=c->r[3]+0x00000078u; // 800E269C
  c->lr=0x800E26A4u; f_803317D4(c); // 800E26A0
  c->lr=0x800E26A8u; f_8033FE4C(c); // 800E26A4
  c->lr=0x800E26ACu; f_8009BA1C(c); // 800E26A8
  c->r[4]=c->r[30]|c->r[30]; // 800E26AC
  c->r[3]=c->r[3]+0x00000078u; // 800E26B0
  c->lr=0x800E26B8u; f_80331890(c); // 800E26B4
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E26B8
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 800E26BC
  fcmp(c,0,c->f[0],c->f[30]); // 800E26C0
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[30]);} // 800E26C4
  if (!crb(c,2)) { goto L_800E26E8; } // 800E26C8
  c->lr=0x800E26D0u; f_8033FE4C(c); // 800E26CC
  c->lr=0x800E26D4u; f_8009BA1C(c); // 800E26D0
  c->r[3]=c->r[3]+0x00000078u; // 800E26D4
  c->lr=0x800E26DCu; f_80331664(c); // 800E26D8
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E26DC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800E26E0
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E26E4
L_800E26E8:;
  c->lr=0x800E26ECu; f_8033FE4C(c); // 800E26E8
  c->lr=0x800E26F0u; f_8009BA1C(c); // 800E26EC
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E26F0
  c->r[3]=c->r[3]+0x00000078u; // 800E26F4
  c->lr=0x800E26FCu; f_80331808(c); // 800E26F8
  c->lr=0x800E2700u; f_8033FE4C(c); // 800E26FC
  c->f[1]=c->f[31]; // 800E2700
  c->lr=0x800E2708u; f_80341364(c); // 800E2704
  c->lr=0x800E270Cu; f_8033FE4C(c); // 800E2708
  c->r[31]=c->r[3]|c->r[3]; // 800E270C
  c->lr=0x800E2714u; f_8009BA58(c); // 800E2710
  c->r[4]=c->r[3]|c->r[3]; // 800E2714
  c->r[3]=c->r[31]|c->r[31]; // 800E2718
  c->lr=0x800E2720u; f_8034121C(c); // 800E271C
L_800E2720:;
  c->r[11]=c->r[1]+0x00000020u; // 800E2720
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800E2724
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800E2728
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800E272C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800E2730
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 800E2734
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 800E2738
  c->lr=0x800E2740u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E273C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800E2740
  c->lr=c->r[0]; // 800E2744
  c->r[1]=c->r[1]+0x00000050u; // 800E2748
  return; // 800E274C
}

// fn_800E2750
void f_800E2750(Ctx* __restrict c) {
  trace_call(0x800E2750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2750
  c->r[0]=c->lr; // 800E2754
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2758
  c->lr=0x800E2760u; f_8033FE4C(c); // 800E275C
  c->lr=0x800E2764u; f_8009BA1C(c); // 800E2760
  c->r[3]=c->r[3]+0x00000078u; // 800E2764
  c->lr=0x800E276Cu; f_803315D0(c); // 800E2768
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E276C
  c->lr=c->r[0]; // 800E2770
  c->r[1]=c->r[1]+0x00000010u; // 800E2774
  return; // 800E2778
}

// fn_800E277C
void f_800E277C(Ctx* __restrict c) {
  trace_call(0x800E277Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E277C
  c->r[0]=c->lr; // 800E2780
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2784
  c->r[11]=c->r[1]+0x00000020u; // 800E2788
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E278C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E2790
  c->lr=0x800E2798u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2794
  c->f[31]=c->f[1]; // 800E2798
  c->r[27]=c->r[3]|c->r[3]; // 800E279C
  c->r[3]=R32(c->r[3]+0x00000040u); // 800E27A0
  c->r[28]=c->r[5]|c->r[5]; // 800E27A4
  c->r[5]=0u+0x00000000u; // 800E27A8
  c->lr=0x800E27B0u; f_802E5F54(c); // 800E27AC
  cmps(c,0,(int32_t)c->r[3],0); // 800E27B0
  c->r[31]=c->r[3]|c->r[3]; // 800E27B4
  if (!crb(c,2)) { goto L_800E27C4; } // 800E27B8
  c->r[3]=0u+0x00000000u; // 800E27BC
  goto L_800E2844; // 800E27C0
L_800E27C4:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E27C4
  c->r[29]=0u+0x00000000u; // 800E27C8
  c->r[30]=c->r[27]+c->r[0]; // 800E27CC
  c->r[0]=R32(c->r[27]+c->r[0]); // 800E27D0
  cmps(c,0,(int32_t)c->r[0],0); // 800E27D4
  if (crb(c,2)) { goto L_800E27E8; } // 800E27D8
  c->r[3]=c->r[27]|c->r[27]; // 800E27DC
  c->r[4]=c->r[28]|c->r[28]; // 800E27E0
  c->lr=0x800E27E8u; f_800E2960(c); // 800E27E4
L_800E27E8:;
  c->lr=0x800E27ECu; f_8033FE4C(c); // 800E27E8
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E27EC
  c->r[4]=0u+0x00000004u; // 800E27F0
  c->r[5]=0u+0x00000000u; // 800E27F4
  c->r[6]=0u+0x00000001u; // 800E27F8
  c->lr=0x800E2800u; f_8033202C(c); // 800E27FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E2800
  W32(c->r[30]+0x00000000u,c->r[3]); // 800E2804
  if (crb(c,2)) { goto L_800E2840; } // 800E2808
  c->lr=0x800E2810u; f_8033FE4C(c); // 800E280C
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E2810
  c->r[4]=c->r[30]|c->r[30]; // 800E2814
  c->lr=0x800E281Cu; f_803322C4(c); // 800E2818
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E281C
  c->r[29]=c->r[3]|c->r[3]; // 800E2820
  c->r[4]=c->r[31]|c->r[31]; // 800E2824
  c->r[5]=0u+0x00000000u; // 800E2828
  c->r[6]=0u+0x00000001u; // 800E282C
  c->lr=0x800E2834u; f_8033169C(c); // 800E2830
  c->f[1]=c->f[31]; // 800E2834
  c->r[3]=c->r[29]|c->r[29]; // 800E2838
  c->lr=0x800E2840u; f_803317DC(c); // 800E283C
L_800E2840:;
  c->r[3]=c->r[29]|c->r[29]; // 800E2840
L_800E2844:;
  c->r[11]=c->r[1]+0x00000020u; // 800E2844
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800E2848
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E284C
  c->lr=0x800E2854u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E2850
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E2854
  c->lr=c->r[0]; // 800E2858
  c->r[1]=c->r[1]+0x00000030u; // 800E285C
  return; // 800E2860
}

// fn_800E2864
void f_800E2864(Ctx* __restrict c) {
  trace_call(0x800E2864u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2864
  c->r[0]=c->lr; // 800E2868
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E286C
  c->r[11]=c->r[1]+0x00000020u; // 800E2870
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E2874
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E2878
  c->lr=0x800E2880u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E287C
  c->r[6]=0u+0x80690000u; // 800E2880
  c->f[31]=c->f[1]; // 800E2884
  c->r[7]=0u+0x80740000u; // 800E2888
  c->r[27]=c->r[3]|c->r[3]; // 800E288C
  c->r[28]=c->r[5]|c->r[5]; // 800E2890
  c->r[6]=c->r[6]+0xFFFFEAB0u; // 800E2894
  c->r[5]=c->r[4]|c->r[4]; // 800E2898
  c->r[4]=c->r[6]+0x00000006u; // 800E289C
  c->r[3]=c->r[7]+0x00004FD0u; // 800E28A0
  c->r[6]=0u+0x00000000u; // 800E28A4
  c->lr=0x800E28ACu; f_8005A7B0(c); // 800E28A8
  cmps(c,0,(int32_t)c->r[3],0); // 800E28AC
  c->r[30]=c->r[3]|c->r[3]; // 800E28B0
  if (!crb(c,2)) { goto L_800E28C0; } // 800E28B4
  c->r[3]=0u+0x00000000u; // 800E28B8
  goto L_800E2940; // 800E28BC
L_800E28C0:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E28C0
  c->r[29]=0u+0x00000000u; // 800E28C4
  c->r[31]=c->r[27]+c->r[0]; // 800E28C8
  c->r[0]=R32(c->r[27]+c->r[0]); // 800E28CC
  cmps(c,0,(int32_t)c->r[0],0); // 800E28D0
  if (crb(c,2)) { goto L_800E28E4; } // 800E28D4
  c->r[3]=c->r[27]|c->r[27]; // 800E28D8
  c->r[4]=c->r[28]|c->r[28]; // 800E28DC
  c->lr=0x800E28E4u; f_800E2960(c); // 800E28E0
L_800E28E4:;
  c->lr=0x800E28E8u; f_8033FE4C(c); // 800E28E4
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E28E8
  c->r[4]=0u+0x00000004u; // 800E28EC
  c->r[5]=0u+0x00000000u; // 800E28F0
  c->r[6]=0u+0x00000001u; // 800E28F4
  c->lr=0x800E28FCu; f_8033202C(c); // 800E28F8
  cmps(c,0,(int32_t)c->r[3],0); // 800E28FC
  W32(c->r[31]+0x00000000u,c->r[3]); // 800E2900
  if (crb(c,2)) { goto L_800E293C; } // 800E2904
  c->lr=0x800E290Cu; f_8033FE4C(c); // 800E2908
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E290C
  c->r[4]=c->r[31]|c->r[31]; // 800E2910
  c->lr=0x800E2918u; f_803322C4(c); // 800E2914
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2918
  c->r[29]=c->r[3]|c->r[3]; // 800E291C
  c->r[4]=c->r[30]|c->r[30]; // 800E2920
  c->r[5]=0u+0x00000000u; // 800E2924
  c->r[6]=0u+0x00000000u; // 800E2928
  c->lr=0x800E2930u; f_8033169C(c); // 800E292C
  c->f[1]=c->f[31]; // 800E2930
  c->r[3]=c->r[29]|c->r[29]; // 800E2934
  c->lr=0x800E293Cu; f_803317DC(c); // 800E2938
L_800E293C:;
  c->r[3]=c->r[29]|c->r[29]; // 800E293C
L_800E2940:;
  c->r[11]=c->r[1]+0x00000020u; // 800E2940
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800E2944
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E2948
  c->lr=0x800E2950u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E294C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E2950
  c->lr=c->r[0]; // 800E2954
  c->r[1]=c->r[1]+0x00000030u; // 800E2958
  return; // 800E295C
}

// fn_800E2960
void f_800E2960(Ctx* __restrict c) {
  trace_call(0x800E2960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2960
  c->r[0]=c->lr; // 800E2964
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2968
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E296C
  c->r[30]=c->r[3]|c->r[3]; // 800E2970
  c->r[31]=c->r[4]|c->r[4]; // 800E2974
  c->lr=0x800E297Cu; f_8033FE4C(c); // 800E2978
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800E297C
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E2980
  c->r[31]=c->r[30]+c->r[0]; // 800E2984
  c->r[4]=c->r[31]|c->r[31]; // 800E2988
  c->lr=0x800E2990u; f_803320C0(c); // 800E298C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2990
  if (crb(c,2)) { goto L_800E29B0; } // 800E2994
  c->r[3]=c->r[31]|c->r[31]; // 800E2998
  c->r[4]=0u+0x00000000u; // 800E299C
  c->r[5]=0u+0x00000004u; // 800E29A0
  c->lr=0x800E29A8u; f_800043EC(c); // 800E29A4
  c->r[3]=0u+0x00000001u; // 800E29A8
  goto L_800E29B4; // 800E29AC
L_800E29B0:;
  c->r[3]=0u+0x00000000u; // 800E29B0
L_800E29B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E29B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E29B8
  c->lr=c->r[0]; // 800E29BC
  c->r[1]=c->r[1]+0x00000010u; // 800E29C0
  return; // 800E29C4
}

// fn_800E29C8
void f_800E29C8(Ctx* __restrict c) {
  trace_call(0x800E29C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E29C8
  c->r[0]=c->lr; // 800E29CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E29D0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800E29D4
  c->f[31]=c->f[2]; // 800E29D8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800E29DC
  c->f[30]=c->f[1]; // 800E29E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E29E4
  c->r[31]=c->r[4]|c->r[4]; // 800E29E8
  c->lr=0x800E29F0u; f_8033FE4C(c); // 800E29EC
  c->lr=0x800E29F4u; f_8009A9F8(c); // 800E29F0
  c->f[1]=c->f[30]; // 800E29F4
  c->f[2]=c->f[31]; // 800E29F8
  c->lr=0x800E2A00u; f_800A77CC(c); // 800E29FC
  c->lr=0x800E2A04u; f_8033FE4C(c); // 800E2A00
  c->lr=0x800E2A08u; f_8009A9F8(c); // 800E2A04
  c->r[4]=c->r[31]|c->r[31]; // 800E2A08
  c->lr=0x800E2A10u; f_800A73BC(c); // 800E2A0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2A10
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800E2A14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800E2A18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2A1C
  c->lr=c->r[0]; // 800E2A20
  c->r[1]=c->r[1]+0x00000020u; // 800E2A24
  return; // 800E2A28
}

// fn_800E2A2C
void f_800E2A2C(Ctx* __restrict c) {
  trace_call(0x800E2A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2A2C
  c->r[0]=c->lr; // 800E2A30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2A34
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800E2A38
  c->f[31]=c->f[2]; // 800E2A3C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800E2A40
  c->f[30]=c->f[1]; // 800E2A44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2A48
  c->r[30]=c->r[3]|c->r[3]; // 800E2A4C
  c->r[31]=c->r[4]|c->r[4]; // 800E2A50
  c->lr=0x800E2A58u; f_8033FE4C(c); // 800E2A54
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800E2A58
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E2A5C
  c->r[4]=c->r[30]+c->r[0]; // 800E2A60
  c->lr=0x800E2A68u; f_803322C4(c); // 800E2A64
  cmps(c,0,(int32_t)c->r[3],0); // 800E2A68
  if (crb(c,2)) { goto L_800E2A7C; } // 800E2A6C
  c->f[1]=c->f[30]; // 800E2A70
  c->f[2]=c->f[31]; // 800E2A74
  c->lr=0x800E2A7Cu; f_80331A34(c); // 800E2A78
L_800E2A7C:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800E2A7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800E2A80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2A88
  c->lr=c->r[0]; // 800E2A8C
  c->r[1]=c->r[1]+0x00000020u; // 800E2A90
  return; // 800E2A94
}

// fn_800E2A98
void f_800E2A98(Ctx* __restrict c) {
  trace_call(0x800E2A98u);
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2A98
  return; // 800E2A9C
}

// fn_800E2AA0
void f_800E2AA0(Ctx* __restrict c) {
  trace_call(0x800E2AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2AA0
  c->r[0]=c->lr; // 800E2AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2AA8
  c->lr=0x800E2AB0u; f_8033FE4C(c); // 800E2AAC
  c->lr=0x800E2AB4u; f_8009BA1C(c); // 800E2AB0
  c->r[3]=c->r[3]+0x00000078u; // 800E2AB4
  c->lr=0x800E2ABCu; f_80331664(c); // 800E2AB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2ABC
  c->lr=c->r[0]; // 800E2AC0
  c->r[1]=c->r[1]+0x00000010u; // 800E2AC4
  return; // 800E2AC8
}

// fn_800E2ACC
void f_800E2ACC(Ctx* __restrict c) {
  trace_call(0x800E2ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2ACC
  c->r[0]=c->lr; // 800E2AD0
  c->r[5]=0u+0x00000000u; // 800E2AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2ADC
  c->r[3]=R32(c->r[3]+0x00000040u); // 800E2AE0
  c->lr=0x800E2AE8u; f_802E5F54(c); // 800E2AE4
  c->r[31]=c->r[3]|c->r[3]; // 800E2AE8
  c->lr=0x800E2AF0u; f_8033FE4C(c); // 800E2AEC
  c->lr=0x800E2AF4u; f_8009BA1C(c); // 800E2AF0
  c->r[3]=c->r[3]+0x00000078u; // 800E2AF4
  c->lr=0x800E2AFCu; f_80331680(c); // 800E2AF8
  c->r[0]=c->r[31]-c->r[3]; // 800E2AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2B00
  c->r[0]=cntlz(c->r[0]); // 800E2B04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2B08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2B0C
  c->lr=c->r[0]; // 800E2B10
  c->r[1]=c->r[1]+0x00000010u; // 800E2B14
  return; // 800E2B18
}

// fn_800E2B1C
void f_800E2B1C(Ctx* __restrict c) {
  trace_call(0x800E2B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2B1C
  c->r[0]=c->lr; // 800E2B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2B24
  c->lr=0x800E2B2Cu; f_8033FE4C(c); // 800E2B28
  c->lr=0x800E2B30u; f_8009BA1C(c); // 800E2B2C
  c->r[3]=c->r[3]+0x00000078u; // 800E2B30
  c->lr=0x800E2B38u; f_803315E0(c); // 800E2B34
  c->r[0]=cntlz(c->r[3]); // 800E2B38
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2B40
  c->lr=c->r[0]; // 800E2B44
  c->r[1]=c->r[1]+0x00000010u; // 800E2B48
  return; // 800E2B4C
}

// fn_800E2B50
void f_800E2B50(Ctx* __restrict c) {
  trace_call(0x800E2B50u);
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2B50
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B54
  fcmp(c,0,c->f[2],c->f[0]); // 800E2B58
  if (!crb(c,0)) { goto L_800E2B68; } // 800E2B5C
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B60
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800E2B64
L_800E2B68:;
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B68
  c->r[0]=0u+0x00000000u; // 800E2B6C
  fcmp(c,0,c->f[0],c->f[1]); // 800E2B70
  if (!crb(c,0)) { goto L_800E2B8C; } // 800E2B74
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B78
  fcmp(c,0,c->f[1],c->f[0]); // 800E2B7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E2B80
  if (!crb(c,2)) { goto L_800E2B8C; } // 800E2B84
  c->r[0]=0u+0x00000001u; // 800E2B88
L_800E2B8C:;
  c->r[3]=c->r[0]|c->r[0]; // 800E2B8C
  return; // 800E2B90
}

// fn_800E2B94
void f_800E2B94(Ctx* __restrict c) {
  trace_call(0x800E2B94u);
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B94
  c->r[3]=0u+0x00000000u; // 800E2B98
  fcmp(c,0,c->f[1],c->f[0]); // 800E2B9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E2BA0
  if (!crb(c,2)) return; // 800E2BA4
  fcmp(c,0,c->f[0],c->f[2]); // 800E2BA8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E2BAC
  if (!crb(c,2)) return; // 800E2BB0
  c->r[3]=0u+0x00000001u; // 800E2BB4
  return; // 800E2BB8
}

// fn_800E2BBC
void f_800E2BBC(Ctx* __restrict c) {
  trace_call(0x800E2BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2BBC
  c->r[0]=c->lr; // 800E2BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2BC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2BC8
  c->r[30]=c->r[3]|c->r[3]; // 800E2BCC
  c->r[31]=c->r[4]|c->r[4]; // 800E2BD0
  c->lr=0x800E2BD8u; f_8033FE4C(c); // 800E2BD4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800E2BD8
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800E2BDC
  c->r[4]=c->r[30]+c->r[0]; // 800E2BE0
  c->lr=0x800E2BE8u; f_803322C4(c); // 800E2BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800E2BE8
  if (crb(c,2)) { goto L_800E2BF8; } // 800E2BEC
  c->lr=0x800E2BF4u; f_80331A08(c); // 800E2BF0
  goto L_800E2BFC; // 800E2BF4
L_800E2BF8:;
  c->r[3]=0u+0x00000000u; // 800E2BF8
L_800E2BFC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C00
  c->lr=c->r[0]; // 800E2C04
  c->r[1]=c->r[1]+0x00000010u; // 800E2C08
  return; // 800E2C0C
}

// fn_800E2C10
void f_800E2C10(Ctx* __restrict c) {
  trace_call(0x800E2C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C10
  c->r[0]=c->lr; // 800E2C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2C1C
  c->r[31]=c->r[3]|c->r[3]; // 800E2C20
  c->lr=0x800E2C28u; f_8033FE4C(c); // 800E2C24
  c->r[4]=c->r[3]|c->r[3]; // 800E2C28
  c->r[3]=c->r[31]|c->r[31]; // 800E2C2C
  c->r[4]=c->r[4]+0x0000012Cu; // 800E2C30
  c->lr=0x800E2C38u; f_8005CD7C(c); // 800E2C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2C3C
  c->lr=c->r[0]; // 800E2C40
  c->r[1]=c->r[1]+0x00000010u; // 800E2C44
  return; // 800E2C48
}

// fn_800E2C4C
void f_800E2C4C(Ctx* __restrict c) {
  trace_call(0x800E2C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C4C
  c->r[0]=c->lr; // 800E2C50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2C54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E2C58
  c->r[31]=c->r[4]|c->r[4]; // 800E2C5C
  c->lr=0x800E2C64u; f_8033FE4C(c); // 800E2C60
  c->r[5]=c->r[3]|c->r[3]; // 800E2C64
  c->r[4]=c->r[31]|c->r[31]; // 800E2C68
  c->r[3]=c->r[1]+0x00000008u; // 800E2C6C
  c->r[5]=c->r[5]+0x0000012Cu; // 800E2C70
  c->lr=0x800E2C78u; f_8005FC60(c); // 800E2C74
  c->r[3]=c->r[1]+0x00000008u; // 800E2C78
  c->r[4]=0u+0x806A0000u; // 800E2C7C
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800E2C80
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 800E2C84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2C88
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 800E2C8C
  {uint32_t ea=c->r[4]+0x00000AA8u; c->f[3]=c->ps1[3]=RF32(ea); c->r[4]=ea;} // 800E2C90
  {double t0=S(std::fma(c->f[1],c->ps1[4],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[4],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 800E2C94
  fcmp(c,0,c->f[3],c->f[1]); // 800E2C98
  if (crb(c,0)) { goto L_800E2CA8; } // 800E2C9C
  c->f[1]=c->f[3]; // 800E2CA0
  goto L_800E2CC8; // 800E2CA4
L_800E2CA8:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2CA8
  c->f[4]=frsqrte(c->f[1]); // 800E2CAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2CB0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 800E2CB4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800E2CB8
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[1],-c->f[0])); // 800E2CBC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 800E2CC0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 800E2CC4
L_800E2CC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2CC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2CCC
  c->lr=c->r[0]; // 800E2CD0
  c->r[1]=c->r[1]+0x00000020u; // 800E2CD4
  return; // 800E2CD8
}

// fn_800E2CDC
void f_800E2CDC(Ctx* __restrict c) {
  trace_call(0x800E2CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2CDC
  c->r[0]=c->lr; // 800E2CE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E2CE4
  c->r[11]=c->r[1]+0x00000020u; // 800E2CE8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E2CEC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E2CF0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800E2CF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800E2CF8
  c->lr=0x800E2D00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2CFC
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E2D00
  c->r[27]=c->r[3]|c->r[3]; // 800E2D04
  {uint32_t ea=c->r[2]+0xFFFFA614u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E2D08
  c->r[28]=0u+0x00000000u; // 800E2D0C
  c->r[31]=0u+0x00000000u; // 800E2D10
  c->r[30]=0u+0x00000000u; // 800E2D14
  c->r[29]=0u+0x00000000u; // 800E2D18
L_800E2D1C:;
  c->r[3]=c->r[27]+c->r[31]; // 800E2D1C
  c->r[4]=0u+0x00000001u; // 800E2D20
  c->r[3]=c->r[3]+0x00000018u; // 800E2D24
  c->lr=0x800E2D2Cu; f_80320C3C(c); // 800E2D28
  c->r[6]=c->r[27]+c->r[29]; // 800E2D2C
  c->r[3]=c->r[27]+c->r[30]; // 800E2D30
  {uint32_t ea=c->r[6]+0x00000F18u; WF32(ea,c->f[30]);} // 800E2D34
  c->r[3]=c->r[3]+0x00001118u; // 800E2D38
  c->r[4]=0u+0x00000000u; // 800E2D3C
  c->r[5]=0u+0x00000020u; // 800E2D40
  {uint32_t ea=c->r[6]+0x00001018u; WF32(ea,c->f[31]);} // 800E2D44
  c->lr=0x800E2D4Cu; f_800043EC(c); // 800E2D48
  c->r[28]=c->r[28]+0x00000001u; // 800E2D4C
  c->r[30]=c->r[30]+0x00000020u; // 800E2D50
  cmps(c,0,(int32_t)c->r[28],64); // 800E2D54
  c->r[29]=c->r[29]+0x00000004u; // 800E2D58
  c->r[31]=c->r[31]+0x0000003Cu; // 800E2D5C
  if (crb(c,0)) { IRQCHK(c); goto L_800E2D1C; } // 800E2D60
  c->r[11]=c->r[1]+0x00000020u; // 800E2D64
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E2D68
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E2D6C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800E2D70
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800E2D74
  c->lr=0x800E2D7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E2D78
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E2D7C
  c->lr=c->r[0]; // 800E2D80
  c->r[1]=c->r[1]+0x00000040u; // 800E2D84
  return; // 800E2D88
}

// fn_800E2D8C
void f_800E2D8C(Ctx* __restrict c) {
  trace_call(0x800E2D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2D8C
  c->r[0]=c->lr; // 800E2D90
  W32(c->r[1]+0x00000084u,c->r[0]); // 800E2D94
  c->r[11]=c->r[1]+0x00000060u; // 800E2D98
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800E2D9C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800E2DA0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800E2DA4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800E2DA8
  c->lr=0x800E2DB0u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2DAC
  c->r[31]=0u+0x00000000u; // 800E2DB0
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E2DB4
  {uint32_t ea=c->r[2]+0xFFFFA614u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E2DB8
  c->r[30]=c->r[3]|c->r[3]; // 800E2DBC
  c->r[20]=c->r[31]|c->r[31]; // 800E2DC0
  c->r[21]=c->r[31]|c->r[31]; // 800E2DC4
  c->r[22]=c->r[31]|c->r[31]; // 800E2DC8
  c->r[23]=c->r[31]|c->r[31]; // 800E2DCC
  c->r[24]=c->r[31]|c->r[31]; // 800E2DD0
  c->r[25]=c->r[31]|c->r[31]; // 800E2DD4
  c->r[26]=c->r[31]|c->r[31]; // 800E2DD8
  c->r[29]=0u+0x00000000u; // 800E2DDC
  c->r[28]=0u+0x00000000u; // 800E2DE0
  c->r[27]=0u+0x00000000u; // 800E2DE4
L_800E2DE8:;
  c->r[3]=c->r[30]+c->r[29]; // 800E2DE8
  c->r[19]=c->r[3]+0x00000018u; // 800E2DEC
  c->r[3]=c->r[19]|c->r[19]; // 800E2DF0
  c->lr=0x800E2DF8u; f_80320BEC(c); // 800E2DF4
  cmps(c,0,(int32_t)c->r[3],0); // 800E2DF8
  if (crb(c,2)) { goto L_800E2EE8; } // 800E2DFC
  c->r[18]=c->r[30]+c->r[27]; // 800E2E00
  {uint32_t ea=c->r[18]+0x00001018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E04
  fcmp(c,0,c->f[0],c->f[30]); // 800E2E08
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E2E0C
  if (!crb(c,2)) { goto L_800E2EE8; } // 800E2E10
  W8(c->r[1]+0x0000001Cu,c->r[20]); // 800E2E14
  c->r[3]=c->r[1]+0x0000001Cu; // 800E2E18
  c->lr=0x800E2E20u; f_8004714C(c); // 800E2E1C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2E20
  c->r[4]=c->r[30]+c->r[29]; // 800E2E24
  {uint32_t ea=c->r[18]+0x00001018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E28
  c->r[3]=c->r[1]+0x00000018u; // 800E2E2C
  {uint32_t ea=c->r[18]+0x00000F18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2E30
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[2]); // 800E2E34
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E38
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800E2E3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E2E40
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800E2E44
  {uint32_t ea=c->r[18]+0x00000F18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E2E4C
  {uint32_t ea=c->r[18]+0x00000F18u; WF32(ea,c->f[0]);} // 800E2E50
  W8(c->r[1]+0x00000018u,c->r[21]); // 800E2E54
  c->lr=0x800E2E5Cu; f_8004714C(c); // 800E2E58
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2E5C
  c->r[3]=c->r[19]|c->r[19]; // 800E2E60
  {uint32_t ea=c->r[18]+0x00001018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E2E68
  {uint32_t ea=c->r[18]+0x00001018u; WF32(ea,c->f[0]);} // 800E2E6C
  c->r[12]=R32(c->r[19]+0x00000038u); // 800E2E70
  c->r[12]=R32(c->r[12]+0x00000008u); // 800E2E74
  c->ctr=c->r[12]; // 800E2E78
  if (true) { c->lr=0x800E2E80u; dispatch(c,c->ctr); } // 800E2E7C
  {uint32_t ea=c->r[18]+0x00001018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2E80
  fcmp(c,0,c->f[0],c->f[30]); // 800E2E84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E2E88
  if (!crb(c,2)) { goto L_800E2EE8; } // 800E2E8C
  W8(c->r[1]+0x00000014u,c->r[22]); // 800E2E90
  c->r[3]=c->r[1]+0x00000014u; // 800E2E94
  c->lr=0x800E2E9Cu; f_8004EE10(c); // 800E2E98
  c->r[3]=c->r[3]+c->r[29]; // 800E2E9C
  c->r[4]=0u+0x00000001u; // 800E2EA0
  c->r[3]=c->r[3]+0x00000018u; // 800E2EA4
  c->lr=0x800E2EACu; f_80320C3C(c); // 800E2EA8
  W8(c->r[1]+0x00000010u,c->r[23]); // 800E2EAC
  c->r[3]=c->r[1]+0x00000010u; // 800E2EB0
  c->lr=0x800E2EB8u; f_8004EE10(c); // 800E2EB4
  c->r[4]=c->r[3]+c->r[27]; // 800E2EB8
  c->r[3]=c->r[1]+0x0000000Cu; // 800E2EBC
  {uint32_t ea=c->r[4]+0x00000F18u; WF32(ea,c->f[30]);} // 800E2EC0
  W8(c->r[1]+0x0000000Cu,c->r[24]); // 800E2EC4
  c->lr=0x800E2ECCu; f_8004EE10(c); // 800E2EC8
  c->r[4]=c->r[3]+c->r[27]; // 800E2ECC
  c->r[3]=c->r[1]+0x00000008u; // 800E2ED0
  {uint32_t ea=c->r[4]+0x00001018u; WF32(ea,c->f[31]);} // 800E2ED4
  W8(c->r[1]+0x00000008u,c->r[25]); // 800E2ED8
  c->lr=0x800E2EE0u; f_8004EE10(c); // 800E2EDC
  c->r[3]=c->r[3]+c->r[28]; // 800E2EE0
  W8(c->r[3]+0x00001118u,c->r[26]); // 800E2EE4
L_800E2EE8:;
  c->r[31]=c->r[31]+0x00000001u; // 800E2EE8
  c->r[28]=c->r[28]+0x00000020u; // 800E2EEC
  cmps(c,0,(int32_t)c->r[31],64); // 800E2EF0
  c->r[27]=c->r[27]+0x00000004u; // 800E2EF4
  c->r[29]=c->r[29]+0x0000003Cu; // 800E2EF8
  if (crb(c,0)) { IRQCHK(c); goto L_800E2DE8; } // 800E2EFC
  c->r[11]=c->r[1]+0x00000060u; // 800E2F00
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800E2F04
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800E2F08
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800E2F0C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800E2F10
  c->lr=0x800E2F18u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E2F14
  c->r[0]=R32(c->r[1]+0x00000084u); // 800E2F18
  c->lr=c->r[0]; // 800E2F1C
  c->r[1]=c->r[1]+0x00000080u; // 800E2F20
  return; // 800E2F24
}

// fn_800E2F28
void f_800E2F28(Ctx* __restrict c) {
  trace_call(0x800E2F28u);
  c->r[12]=R32(c->r[3]+0x00000010u); // 800E2F28
  c->r[12]=R32(c->r[12]+0x00000008u); // 800E2F2C
  c->ctr=c->r[12]; // 800E2F30
  if (true) { dispatch(c,c->ctr); return; } // 800E2F34
}

// fn_800E2F38
void f_800E2F38(Ctx* __restrict c) {
  trace_call(0x800E2F38u);
  c->r[3]=0u+0x00000021u; // 800E2F38
  return; // 800E2F3C
}

// fn_800E2F40
void f_800E2F40(Ctx* __restrict c) {
  trace_call(0x800E2F40u);
  c->r[3]=0u+0x800E0000u; // 800E2F40
  c->r[3]=c->r[3]+0x00002F4Cu; // 800E2F44
  return; // 800E2F48
}

// fn_800E2F4C
void f_800E2F4C(Ctx* __restrict c) {
  trace_call(0x800E2F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2F4C
  c->r[0]=c->lr; // 800E2F50
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800E2F54
  c->r[11]=c->r[1]+0x00000090u; // 800E2F58
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800E2F5C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800E2F60
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800E2F64
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800E2F68
  c->lr=0x800E2F70u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2F6C
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E2F70
  c->r[0]=c->r[3]+0xBABA0000u; // 800E2F74
  cmpu(c,0,c->r[0],0x00004600u); // 800E2F78
  if (crb(c,2)) { goto L_800E2F88; } // 800E2F7C
  c->r[3]=0u+0x00000001u; // 800E2F80
  goto L_800E3310; // 800E2F84
L_800E2F88:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E2F88
  cmps(c,0,(int32_t)c->r[0],0); // 800E2F8C
  if (crb(c,2)) { goto L_800E2F9C; } // 800E2F90
  c->r[3]=0u+0x00000001u; // 800E2F94
  goto L_800E3310; // 800E2F98
L_800E2F9C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E2F9C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800E2FA0
  c->r[31]=c->r[4]+c->r[0]; // 800E2FA4
  c->r[30]=c->r[31]+c->r[3]; // 800E2FA8
  c->r[3]=c->r[30]|c->r[30]; // 800E2FAC
  c->lr=0x800E2FB4u; f_803A91D4(c); // 800E2FB0
  cmpu(c,0,c->r[3],0x00000020u); // 800E2FB4
  c->r[29]=c->r[3]|c->r[3]; // 800E2FB8
  if (crb(c,0)) { goto L_800E2FC4; } // 800E2FBC
  c->r[29]=0u+0x0000001Fu; // 800E2FC0
L_800E2FC4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800E2FC4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E2FC8
  cmpu(c,0,c->r[0],0x00000001u); // 800E2FCC
  if (!crb(c,1)) { goto L_800E317C; } // 800E2FD0
  cmps(c,0,(int32_t)c->r[3],0); // 800E2FD4
  if (crb(c,2)) { goto L_800E2FE8; } // 800E2FD8
  cmps(c,0,(int32_t)c->r[3],3); // 800E2FDC
  if (crb(c,2)) { goto L_800E3264; } // 800E2FE0
  goto L_800E330C; // 800E2FE4
L_800E2FE8:;
  c->r[25]=0u+0x00000000u; // 800E2FE8
  c->r[27]=0u+0x00000000u; // 800E2FEC
  c->r[26]=c->r[25]|c->r[25]; // 800E2FF0
L_800E2FF4:;
  W8(c->r[1]+0x0000004Cu,c->r[26]); // 800E2FF4
  c->r[3]=c->r[1]+0x0000004Cu; // 800E2FF8
  c->lr=0x800E3000u; f_8004EE10(c); // 800E2FFC
  c->r[3]=c->r[3]+c->r[27]; // 800E3000
  c->r[3]=c->r[3]+0x00000018u; // 800E3004
  c->lr=0x800E300Cu; f_80320BEC(c); // 800E3008
  cmps(c,0,(int32_t)c->r[3],0); // 800E300C
  if (!crb(c,2)) { goto L_800E3168; } // 800E3010
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3014
  c->r[3]=c->r[1]+0x0000005Cu; // 800E3018
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E301C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E3020
  c->lr=0x800E3028u; f_8005A6D0(c); // 800E3024
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3028
  c->r[3]=c->r[1]+0x00000050u; // 800E302C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E3030
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E3034
  c->lr=0x800E303Cu; f_8005A6D0(c); // 800E3038
  c->r[26]=0u+0x00000000u; // 800E303C
  W8(c->r[1]+0x00000048u,c->r[26]); // 800E3040
  c->r[3]=c->r[1]+0x00000048u; // 800E3044
  c->lr=0x800E304Cu; f_8004EE10(c); // 800E3048
  c->r[3]=c->r[3]+c->r[27]; // 800E304C
  c->r[4]=0u+0x00000001u; // 800E3050
  c->r[3]=c->r[3]+0x00000018u; // 800E3054
  c->lr=0x800E305Cu; f_80320C3C(c); // 800E3058
  c->r[28]=c->r[1]+0x00000050u; // 800E305C
  {uint32_t ea=c->r[28]+0x00000004u; psq_load(c,1,ea,0,0);} // 800E3060
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800E3064
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3068
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800E306C
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800E3070
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3074
  fcmp(c,0,c->f[1],c->f[0]); // 800E3078
  c->r[0]=c->cr; // 800E307C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800E3080
  if (crb(c,2)) { goto L_800E30B4; } // 800E3084
  W8(c->r[1]+0x00000044u,c->r[26]); // 800E3088
  c->r[3]=c->r[1]+0x00000044u; // 800E308C
  c->lr=0x800E3094u; f_8004EE10(c); // 800E3090
  c->r[6]=c->r[3]+c->r[27]; // 800E3094
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800E3098
  c->r[7]=c->r[6]+0x00000018u; // 800E309C
  c->r[4]=c->r[30]|c->r[30]; // 800E30A0
  c->r[5]=c->r[1]+0x0000005Cu; // 800E30A4
  c->r[6]=0u+0x00000000u; // 800E30A8
  c->lr=0x800E30B0u; f_80065FDC(c); // 800E30AC
  goto L_800E30F0; // 800E30B0
L_800E30B4:;
  c->r[5]=0u+0x806A0000u; // 800E30B4
  c->r[3]=c->r[28]|c->r[28]; // 800E30B8
  c->r[4]=c->r[28]|c->r[28]; // 800E30BC
  c->r[5]=c->r[5]+0x00000AA8u; // 800E30C0
  c->lr=0x800E30C8u; f_8030E0BC(c); // 800E30C4
  W8(c->r[1]+0x00000040u,c->r[26]); // 800E30C8
  c->r[3]=c->r[1]+0x00000040u; // 800E30CC
  c->lr=0x800E30D4u; f_8004EE10(c); // 800E30D0
  c->r[7]=c->r[3]+c->r[27]; // 800E30D4
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800E30D8
  c->r[4]=c->r[30]|c->r[30]; // 800E30DC
  c->r[6]=c->r[28]|c->r[28]; // 800E30E0
  c->r[5]=c->r[1]+0x0000005Cu; // 800E30E4
  c->r[7]=c->r[7]+0x00000018u; // 800E30E8
  c->lr=0x800E30F0u; f_80065FDC(c); // 800E30EC
L_800E30F0:;
  c->r[26]=0u+0x00000000u; // 800E30F0
  W8(c->r[1]+0x0000003Cu,c->r[26]); // 800E30F4
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E30F8
  c->r[3]=c->r[1]+0x0000003Cu; // 800E30FC
  c->r[27]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800E3100
  c->lr=0x800E3108u; f_8004EE10(c); // 800E3104
  c->r[3]=c->r[3]+c->r[27]; // 800E3108
  {uint32_t ea=c->r[2]+0xFFFFA614u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E310C
  {uint32_t ea=c->r[3]+0x00000F18u; WF32(ea,c->f[31]);} // 800E3110
  c->r[3]=c->r[1]+0x00000038u; // 800E3114
  W8(c->r[1]+0x00000038u,c->r[26]); // 800E3118
  c->lr=0x800E3120u; f_8004EE10(c); // 800E311C
  c->r[3]=c->r[3]+c->r[27]; // 800E3120
  c->r[27]=rotl(c->r[25],5)&0xFFFFFFE0u; // 800E3124
  {uint32_t ea=c->r[3]+0x00001018u; WF32(ea,c->f[30]);} // 800E3128
  c->r[3]=c->r[1]+0x00000034u; // 800E312C
  W8(c->r[1]+0x00000034u,c->r[26]); // 800E3130
  c->lr=0x800E3138u; f_8004EE10(c); // 800E3134
  c->r[3]=c->r[3]+c->r[27]; // 800E3138
  c->r[4]=c->r[30]|c->r[30]; // 800E313C
  c->r[5]=c->r[29]|c->r[29]; // 800E3140
  c->r[3]=c->r[3]+0x00001118u; // 800E3144
  c->lr=0x800E314Cu; f_802DC484(c); // 800E3148
  W8(c->r[1]+0x00000030u,c->r[26]); // 800E314C
  c->r[3]=c->r[1]+0x00000030u; // 800E3150
  c->lr=0x800E3158u; f_8004EE10(c); // 800E3154
  c->r[0]=c->r[29]+c->r[3]; // 800E3158
  c->r[3]=c->r[0]+c->r[27]; // 800E315C
  W8(c->r[3]+0x00001118u,c->r[26]); // 800E3160
  goto L_800E330C; // 800E3164
L_800E3168:;
  c->r[25]=c->r[25]+0x00000001u; // 800E3168
  c->r[27]=c->r[27]+0x0000003Cu; // 800E316C
  cmps(c,0,(int32_t)c->r[25],64); // 800E3170
  if (crb(c,0)) { IRQCHK(c); goto L_800E2FF4; } // 800E3174
  goto L_800E330C; // 800E3178
L_800E317C:;
  c->r[25]=0u+0x00000000u; // 800E317C
  c->r[27]=0u+0x00000000u; // 800E3180
  c->r[28]=0u+0x00000000u; // 800E3184
  c->r[26]=0u+0x00000000u; // 800E3188
L_800E318C:;
  W8(c->r[1]+0x0000002Cu,c->r[26]); // 800E318C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E3190
  c->lr=0x800E3198u; f_8004EE10(c); // 800E3194
  c->r[3]=c->r[3]+c->r[27]; // 800E3198
  c->r[3]=c->r[3]+0x00000018u; // 800E319C
  c->lr=0x800E31A4u; f_80320BEC(c); // 800E31A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E31A4
  if (crb(c,2)) { goto L_800E324C; } // 800E31A8
  W8(c->r[1]+0x00000028u,c->r[26]); // 800E31AC
  c->r[3]=c->r[1]+0x00000028u; // 800E31B0
  c->lr=0x800E31B8u; f_8004EE10(c); // 800E31B4
  c->r[3]=c->r[3]+c->r[28]; // 800E31B8
  c->r[4]=c->r[30]|c->r[30]; // 800E31BC
  c->r[5]=c->r[29]|c->r[29]; // 800E31C0
  c->r[3]=c->r[3]+0x00001118u; // 800E31C4
  c->lr=0x800E31CCu; f_803AF7B8(c); // 800E31C8
  cmps(c,0,(int32_t)c->r[3],0); // 800E31CC
  if (!crb(c,2)) { goto L_800E324C; } // 800E31D0
  c->r[26]=0u+0x00000000u; // 800E31D4
  W8(c->r[1]+0x00000024u,c->r[26]); // 800E31D8
  c->r[3]=c->r[1]+0x00000024u; // 800E31DC
  c->lr=0x800E31E4u; f_8004EE10(c); // 800E31E0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E31E4
  c->r[3]=c->r[3]+c->r[27]; // 800E31E8
  c->r[3]=c->r[3]+0x00000018u; // 800E31EC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E31F0
  c->r[0]=cntlz(c->r[0]); // 800E31F4
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E31F8
  c->lr=0x800E3200u; f_80320C3C(c); // 800E31FC
  W8(c->r[1]+0x00000020u,c->r[26]); // 800E3200
  c->r[3]=c->r[1]+0x00000020u; // 800E3204
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E3208
  c->r[27]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800E320C
  c->lr=0x800E3214u; f_8004EE10(c); // 800E3210
  c->r[3]=c->r[3]+c->r[27]; // 800E3214
  {uint32_t ea=c->r[2]+0xFFFFA614u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E3218
  {uint32_t ea=c->r[3]+0x00000F18u; WF32(ea,c->f[30]);} // 800E321C
  c->r[3]=c->r[1]+0x0000001Cu; // 800E3220
  W8(c->r[1]+0x0000001Cu,c->r[26]); // 800E3224
  c->lr=0x800E322Cu; f_8004EE10(c); // 800E3228
  c->r[3]=c->r[3]+c->r[27]; // 800E322C
  {uint32_t ea=c->r[3]+0x00001018u; WF32(ea,c->f[31]);} // 800E3230
  c->r[3]=c->r[1]+0x00000018u; // 800E3234
  W8(c->r[1]+0x00000018u,c->r[26]); // 800E3238
  c->lr=0x800E3240u; f_8004EE10(c); // 800E323C
  c->r[3]=c->r[3]+c->r[28]; // 800E3240
  W8(c->r[3]+0x00001118u,c->r[26]); // 800E3244
  goto L_800E330C; // 800E3248
L_800E324C:;
  c->r[25]=c->r[25]+0x00000001u; // 800E324C
  c->r[28]=c->r[28]+0x00000020u; // 800E3250
  cmps(c,0,(int32_t)c->r[25],64); // 800E3254
  c->r[27]=c->r[27]+0x0000003Cu; // 800E3258
  if (crb(c,0)) { IRQCHK(c); goto L_800E318C; } // 800E325C
  goto L_800E330C; // 800E3260
L_800E3264:;
  c->r[25]=0u+0x00000000u; // 800E3264
  c->r[28]=0u+0x00000000u; // 800E3268
  c->r[27]=0u+0x00000000u; // 800E326C
  c->r[26]=0u+0x00000000u; // 800E3270
L_800E3274:;
  W8(c->r[1]+0x00000014u,c->r[26]); // 800E3274
  c->r[3]=c->r[1]+0x00000014u; // 800E3278
  c->lr=0x800E3280u; f_8004EE10(c); // 800E327C
  c->r[3]=c->r[3]+c->r[28]; // 800E3280
  c->r[3]=c->r[3]+0x00000018u; // 800E3284
  c->lr=0x800E328Cu; f_80320BEC(c); // 800E3288
  cmps(c,0,(int32_t)c->r[3],0); // 800E328C
  if (crb(c,2)) { goto L_800E32F8; } // 800E3290
  W8(c->r[1]+0x00000010u,c->r[26]); // 800E3294
  c->r[3]=c->r[1]+0x00000010u; // 800E3298
  c->lr=0x800E32A0u; f_8004EE10(c); // 800E329C
  c->r[3]=c->r[3]+c->r[27]; // 800E32A0
  c->r[4]=c->r[30]|c->r[30]; // 800E32A4
  c->r[5]=c->r[29]|c->r[29]; // 800E32A8
  c->r[3]=c->r[3]+0x00001118u; // 800E32AC
  c->lr=0x800E32B4u; f_803AF7B8(c); // 800E32B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E32B4
  if (!crb(c,2)) { goto L_800E32F8; } // 800E32B8
  c->r[27]=0u+0x00000000u; // 800E32BC
  W8(c->r[1]+0x0000000Cu,c->r[27]); // 800E32C0
  c->r[3]=c->r[1]+0x0000000Cu; // 800E32C4
  c->r[26]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800E32C8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E32CC
  c->lr=0x800E32D4u; f_8004EE10(c); // 800E32D0
  c->r[3]=c->r[3]+c->r[26]; // 800E32D4
  {uint32_t ea=c->r[3]+0x00000F18u; WF32(ea,c->f[31]);} // 800E32D8
  c->r[3]=c->r[1]+0x00000008u; // 800E32DC
  W8(c->r[1]+0x00000008u,c->r[27]); // 800E32E0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E32E4
  c->lr=0x800E32ECu; f_8004EE10(c); // 800E32E8
  c->r[3]=c->r[3]+c->r[26]; // 800E32EC
  {uint32_t ea=c->r[3]+0x00001018u; WF32(ea,c->f[31]);} // 800E32F0
  goto L_800E330C; // 800E32F4
L_800E32F8:;
  c->r[25]=c->r[25]+0x00000001u; // 800E32F8
  c->r[27]=c->r[27]+0x00000020u; // 800E32FC
  cmps(c,0,(int32_t)c->r[25],64); // 800E3300
  c->r[28]=c->r[28]+0x0000003Cu; // 800E3304
  if (crb(c,0)) { IRQCHK(c); goto L_800E3274; } // 800E3308
L_800E330C:;
  c->r[3]=0u+0x00000001u; // 800E330C
L_800E3310:;
  c->r[11]=c->r[1]+0x00000090u; // 800E3310
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800E3314
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800E3318
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800E331C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800E3320
  c->lr=0x800E3328u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3324
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800E3328
  c->lr=c->r[0]; // 800E332C
  c->r[1]=c->r[1]+0x000000B0u; // 800E3330
  return; // 800E3334
}

// fn_800E3338
void f_800E3338(Ctx* __restrict c) {
  trace_call(0x800E3338u);
  c->r[3]=R32(c->r[13]+0xFFFFC3A0u); // 800E3338
  c->r[3]=c->r[3]+0x00000001u; // 800E333C
  W32(c->r[13]+0xFFFFC3A0u,c->r[3]); // 800E3340
  c->r[0]=c->r[3]+0x00010000u; // 800E3344
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800E3348
  if (!crb(c,2)) return; // 800E334C
  c->r[3]=0u+0x00000001u; // 800E3350
  W32(c->r[13]+0xFFFFC3A0u,c->r[3]); // 800E3354
  return; // 800E3358
}

// fn_800E335C
void f_800E335C(Ctx* __restrict c) {
  trace_call(0x800E335Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E335C
  c->r[0]=c->lr; // 800E3360
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3364
  c->r[0]=0u+0x00000000u; // 800E3368
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E336C
  c->r[31]=c->r[3]|c->r[3]; // 800E3370
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E3374
  W32(c->r[3]+0x00000004u,c->r[0]); // 800E3378
  c->r[6]=R32(c->r[4]+0x00000000u); // 800E337C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E3380
  c->r[4]=c->r[1]+0x00000008u; // 800E3384
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E3388
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E338C
  c->lr=0x800E3394u; f_800E341C(c); // 800E3390
  c->r[3]=c->r[31]|c->r[31]; // 800E3394
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E3398
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E339C
  c->lr=c->r[0]; // 800E33A0
  c->r[1]=c->r[1]+0x00000020u; // 800E33A4
  return; // 800E33A8
}

// fn_800E33AC
void f_800E33AC(Ctx* __restrict c) {
  trace_call(0x800E33ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E33AC
  c->r[0]=c->lr; // 800E33B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E33B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E33B8
  c->r[30]=c->r[3]|c->r[3]; // 800E33BC
  c->lr=0x800E33C4u; f_800B14B8(c); // 800E33C0
  c->r[31]=0u+0x80760000u; // 800E33C4
  c->r[3]=c->r[30]+0x00000008u; // 800E33C8
  c->r[4]=c->r[31]+0xFFFF9C78u; // 800E33CC
  c->lr=0x800E33D4u; f_8005DC84(c); // 800E33D0
  c->r[3]=c->r[30]+0x00000014u; // 800E33D4
  c->r[4]=c->r[31]+0xFFFF9C78u; // 800E33D8
  c->lr=0x800E33E0u; f_8005DC84(c); // 800E33DC
  c->r[3]=c->r[30]+0x00000020u; // 800E33E0
  c->r[4]=c->r[31]+0xFFFF9C78u; // 800E33E4
  c->lr=0x800E33ECu; f_8005DC84(c); // 800E33E8
  c->r[3]=0u+0xFFFFFFFFu; // 800E33EC
  c->r[0]=0u+0x00000000u; // 800E33F0
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800E33F4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E33F8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E33FC
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E3400
  W8(c->r[30]+0x0000003Cu,c->r[0]); // 800E3404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3408
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E340C
  c->lr=c->r[0]; // 800E3410
  c->r[1]=c->r[1]+0x00000010u; // 800E3414
  return; // 800E3418
}

// fn_800E341C
void f_800E341C(Ctx* __restrict c) {
  trace_call(0x800E341Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E341C
  c->r[0]=c->lr; // 800E3420
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E3424
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3428
  c->r[30]=c->r[3]|c->r[3]; // 800E342C
  c->r[31]=c->r[5]|c->r[5]; // 800E3430
  c->r[0]=R8(c->r[13]+0xFFFFBB75u); // 800E3434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3438
  if (!crb(c,2)) { goto L_800E3480; } // 800E343C
  c->r[6]=0u+0x80730000u; // 800E3440
  c->r[9]=0u+0x00000000u; // 800E3444
  c->r[8]=c->r[6]+0x00002B80u; // 800E3448
  c->r[0]=0u+0x0000012Cu; // 800E344C
  c->r[7]=0u+0x0000012Bu; // 800E3450
  W32(c->r[6]+0x00002B80u,c->r[9]); // 800E3454
  c->r[6]=0u+0x00000000u; // 800E3458
  W32(c->r[8]+0x00000004u,c->r[7]); // 800E345C
  c->ctr=c->r[0]; // 800E3460
L_800E3464:;
  c->r[7]=c->r[8]+c->r[6]; // 800E3464
  c->r[6]=c->r[6]+0x00000008u; // 800E3468
  W32(c->r[7]+0x00000008u,c->r[9]); // 800E346C
  W32(c->r[7]+0x0000000Cu,c->r[9]); // 800E3470
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E3464; } // 800E3474
  c->r[0]=0u+0x00000001u; // 800E3478
  W8(c->r[13]+0xFFFFBB75u,c->r[0]); // 800E347C
L_800E3480:;
  c->r[6]=R32(c->r[4]+0x00000004u); // 800E3480
  c->r[7]=0u+0x80730000u; // 800E3484
  c->r[7]=c->r[7]+0x00002B80u; // 800E3488
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E348C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800E3490
  c->r[6]=c->r[7]+c->r[6]; // 800E3494
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800E3498
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E349C
  c->r[28]=c->r[6]+0x000000FCu; // 800E34A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E34A4
  c->r[4]=c->r[5]+0x000003BCu; // 800E34A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800E34AC
  c->r[0]=R8(c->r[5]+0x00000000u); // 800E34B0
  W8(c->r[3]+0x0000003Cu,c->r[0]); // 800E34B4
  c->r[3]=c->r[1]+0x00000014u; // 800E34B8
  c->lr=0x800E34C0u; f_8005CD7C(c); // 800E34BC
  c->r[3]=c->r[30]+0x00000008u; // 800E34C0
  c->r[4]=c->r[1]+0x00000014u; // 800E34C4
  c->lr=0x800E34CCu; f_8005DC84(c); // 800E34C8
  c->r[3]=c->r[1]+0x00000008u; // 800E34CC
  c->r[4]=c->r[31]+0x000003C8u; // 800E34D0
  c->lr=0x800E34D8u; f_8005CD7C(c); // 800E34D4
  c->r[3]=c->r[30]+0x00000014u; // 800E34D8
  c->r[4]=c->r[1]+0x00000008u; // 800E34DC
  c->lr=0x800E34E4u; f_8005DC84(c); // 800E34E0
  c->r[3]=c->r[30]+0x00000020u; // 800E34E4
  c->r[4]=c->r[31]+0x00000350u; // 800E34E8
  c->lr=0x800E34F0u; f_8005DC84(c); // 800E34EC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E34F0
  cmps(c,0,(int32_t)c->r[0],0); // 800E34F4
  if (crb(c,2)) { goto L_800E3580; } // 800E34F8
  c->r[0]=R8(c->r[13]+0xFFFFBC0Bu); // 800E34FC
  c->r[28]=R32(c->r[31]+0x0000001Cu); // 800E3500
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3504
  if (!crb(c,2)) { goto L_800E354C; } // 800E3508
  c->r[29]=0u+0x80740000u; // 800E350C
  c->r[3]=c->r[29]+0x00004978u; // 800E3510
  c->lr=0x800E3518u; f_802F05B4(c); // 800E3514
  c->r[6]=0u+0x806D0000u; // 800E3518
  c->r[4]=0u+0x80050000u; // 800E351C
  c->r[6]=c->r[6]+0xFFFFCA20u; // 800E3520
  c->r[3]=c->r[29]+0x00004978u; // 800E3524
  c->r[0]=c->r[6]+0x0000000Cu; // 800E3528
  c->r[5]=0u+0x80750000u; // 800E352C
  W32(c->r[29]+0x00004978u,c->r[6]); // 800E3530
  c->r[4]=c->r[4]+0x000006D0u; // 800E3534
  c->r[5]=c->r[5]+0x000039D8u; // 800E3538
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E353C
  c->lr=0x800E3544u; f_803A92B8(c); // 800E3540
  c->r[0]=0u+0x00000001u; // 800E3544
  W8(c->r[13]+0xFFFFBC0Bu,c->r[0]); // 800E3548
L_800E354C:;
  c->r[3]=0u+0x80740000u; // 800E354C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800E3550
  c->r[5]=R32(c->r[31]+0x00000014u); // 800E3554
  c->r[3]=c->r[3]+0x00004978u; // 800E3558
  c->lr=0x800E3560u; f_802F23A0(c); // 800E355C
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 800E3560
  c->r[4]=rotl(c->r[28],24)&0x000000FFu; // 800E3564
  c->r[0]=rotl(c->r[28],16)&0x000000FFu; // 800E3568
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800E356C
  W32(c->r[30]+0x00000030u,c->r[5]); // 800E3570
  W32(c->r[30]+0x00000034u,c->r[4]); // 800E3574
  W32(c->r[30]+0x00000038u,c->r[0]); // 800E3578
  goto L_800E3618; // 800E357C
L_800E3580:;
  c->r[4]=R32(c->r[31]+0x0000035Cu); // 800E3580
  cmps(c,0,(int32_t)c->r[4],0); // 800E3584
  if (!crb(c,2)) { goto L_800E35A4; } // 800E3588
  c->r[0]=0u+0xFFFFFFFFu; // 800E358C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800E3590
  W32(c->r[30]+0x00000030u,c->r[0]); // 800E3594
  W32(c->r[30]+0x00000034u,c->r[0]); // 800E3598
  W32(c->r[30]+0x00000038u,c->r[0]); // 800E359C
  goto L_800E3618; // 800E35A0
L_800E35A4:;
  c->r[3]=c->r[28]|c->r[28]; // 800E35A4
  c->r[4]=c->r[4]+0x0000000Du; // 800E35A8
  c->lr=0x800E35B0u; f_802E6E50(c); // 800E35AC
  cmps(c,0,(int32_t)c->r[3],0); // 800E35B0
  c->r[29]=c->r[3]|c->r[3]; // 800E35B4
  if (!crb(c,2)) { goto L_800E35D8; } // 800E35B8
  c->r[3]=0u+0x806D0000u; // 800E35BC
  c->r[5]=0u+0x806D0000u; // 800E35C0
  c->r[3]=c->r[3]+0xFFFFE3D8u; // 800E35C4
  c->r[4]=0u+0x00000038u; // 800E35C8
  c->r[5]=c->r[5]+0xFFFFE3B8u; // 800E35CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E35D0
  c->lr=0x800E35D8u; f_80484674(c); // 800E35D4
L_800E35D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E35D8
  if (crb(c,2)) { goto L_800E35E8; } // 800E35DC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800E35E0
  goto L_800E35EC; // 800E35E4
L_800E35E8:;
  c->r[0]=0u+0x00000000u; // 800E35E8
L_800E35EC:;
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800E35EC
  c->r[3]=R32(c->r[31]+0x0000035Cu); // 800E35F0
  c->r[0]=R32(c->r[3]+0x000000BCu); // 800E35F4
  W32(c->r[30]+0x00000030u,c->r[0]); // 800E35F8
  c->r[3]=R32(c->r[31]+0x0000035Cu); // 800E35FC
  c->r[3]=R32(c->r[3]+0x000000B8u); // 800E3600
  c->r[0]=c->r[3]+0x00000001u; // 800E3604
  W32(c->r[30]+0x00000034u,c->r[0]); // 800E3608
  c->r[3]=R32(c->r[31]+0x0000035Cu); // 800E360C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800E3610
  W32(c->r[30]+0x00000038u,c->r[0]); // 800E3614
L_800E3618:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3618
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E361C
  c->lr=c->r[0]; // 800E3620
  c->r[1]=c->r[1]+0x00000030u; // 800E3624
  return; // 800E3628
}

// fn_800E362C
void f_800E362C(Ctx* __restrict c) {
  trace_call(0x800E362Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E362C
  c->r[0]=c->lr; // 800E3630
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3638
  c->r[31]=c->r[3]|c->r[3]; // 800E363C
  c->lr=0x800E3644u; f_800E33AC(c); // 800E3640
  c->r[3]=c->r[31]+0x00000040u; // 800E3644
  c->lr=0x800E364Cu; f_800B14B8(c); // 800E3648
  {uint32_t ea=c->r[2]+0xFFFFA620u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E364C
  c->r[0]=0u+0x00000000u; // 800E3650
  c->r[3]=0u+0xFFFFFFFFu; // 800E3654
  W32(c->r[31]+0x00000048u,c->r[3]); // 800E3658
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800E365C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800E3660
  W32(c->r[31]+0x00000054u,c->r[0]); // 800E3664
  W32(c->r[31]+0x00000058u,c->r[0]); // 800E3668
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800E366C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3670
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3674
  c->lr=c->r[0]; // 800E3678
  c->r[1]=c->r[1]+0x00000010u; // 800E367C
  return; // 800E3680
}

// fn_800E3684
void f_800E3684(Ctx* __restrict c) {
  trace_call(0x800E3684u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3684
  c->r[0]=c->lr; // 800E3688
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E368C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 800E3690
  c->f[31]=c->f[2]; // 800E3694
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800E3698
  c->f[30]=c->f[1]; // 800E369C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E36A0
  c->r[26]=c->r[4]|c->r[4]; // 800E36A4
  c->r[25]=c->r[3]|c->r[3]; // 800E36A8
  c->r[27]=c->r[5]|c->r[5]; // 800E36AC
  c->r[28]=c->r[6]|c->r[6]; // 800E36B0
  c->r[29]=c->r[7]|c->r[7]; // 800E36B4
  c->r[30]=c->r[8]|c->r[8]; // 800E36B8
  c->r[31]=c->r[9]|c->r[9]; // 800E36BC
  c->r[10]=R32(c->r[4]+0x00000000u); // 800E36C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E36C4
  c->r[4]=c->r[4]+0x00000008u; // 800E36C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800E36CC
  W32(c->r[3]+0x00000000u,c->r[10]); // 800E36D0
  c->r[3]=c->r[3]+0x00000008u; // 800E36D4
  c->lr=0x800E36DCu; f_8005DC84(c); // 800E36D8
  c->r[3]=c->r[25]+0x00000014u; // 800E36DC
  c->r[4]=c->r[26]+0x00000014u; // 800E36E0
  c->lr=0x800E36E8u; f_8005DC84(c); // 800E36E4
  c->r[3]=c->r[25]+0x00000020u; // 800E36E8
  c->r[4]=c->r[26]+0x00000020u; // 800E36EC
  c->lr=0x800E36F4u; f_8005DC84(c); // 800E36F0
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 800E36F4
  c->r[4]=c->r[27]|c->r[27]; // 800E36F8
  W32(c->r[25]+0x0000002Cu,c->r[0]); // 800E36FC
  c->r[3]=c->r[25]+0x00000040u; // 800E3700
  c->r[0]=R32(c->r[26]+0x00000030u); // 800E3704
  W32(c->r[25]+0x00000030u,c->r[0]); // 800E3708
  c->r[0]=R32(c->r[26]+0x00000034u); // 800E370C
  W32(c->r[25]+0x00000034u,c->r[0]); // 800E3710
  c->r[0]=R32(c->r[26]+0x00000038u); // 800E3714
  W32(c->r[25]+0x00000038u,c->r[0]); // 800E3718
  c->r[0]=R8(c->r[26]+0x0000003Cu); // 800E371C
  W8(c->r[25]+0x0000003Cu,c->r[0]); // 800E3720
  c->lr=0x800E3728u; f_80053568(c); // 800E3724
  W32(c->r[25]+0x00000048u,c->r[28]); // 800E3728
  {uint32_t ea=c->r[25]+0x0000004Cu; WF32(ea,c->f[30]);} // 800E372C
  {uint32_t ea=c->r[25]+0x00000050u; WF32(ea,c->f[31]);} // 800E3730
  W32(c->r[25]+0x00000054u,c->r[29]); // 800E3734
  W32(c->r[25]+0x00000058u,c->r[30]); // 800E3738
  W32(c->r[25]+0x0000005Cu,c->r[31]); // 800E373C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 800E3740
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800E3744
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3748
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E374C
  c->lr=c->r[0]; // 800E3750
  c->r[1]=c->r[1]+0x00000040u; // 800E3754
  return; // 800E3758
}

// fn_800E375C
void f_800E375C(Ctx* __restrict c) {
  trace_call(0x800E375Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E375C
  c->r[0]=c->lr; // 800E3760
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E3764
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 800E3768
  c->f[31]=c->f[2]; // 800E376C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800E3770
  c->f[30]=c->f[1]; // 800E3774
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3778
  c->r[26]=c->r[3]|c->r[3]; // 800E377C
  c->r[27]=c->r[6]|c->r[6]; // 800E3780
  c->r[28]=c->r[7]|c->r[7]; // 800E3784
  c->r[29]=c->r[8]|c->r[8]; // 800E3788
  c->r[30]=c->r[9]|c->r[9]; // 800E378C
  c->r[31]=c->r[10]|c->r[10]; // 800E3790
  c->r[11]=R32(c->r[4]+0x00000000u); // 800E3794
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E3798
  c->r[4]=c->r[1]+0x00000008u; // 800E379C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E37A0
  W32(c->r[1]+0x00000008u,c->r[11]); // 800E37A4
  c->lr=0x800E37ACu; f_800E341C(c); // 800E37A8
  c->r[4]=c->r[27]|c->r[27]; // 800E37AC
  c->r[3]=c->r[26]+0x00000040u; // 800E37B0
  c->lr=0x800E37B8u; f_80053568(c); // 800E37B4
  W32(c->r[26]+0x00000048u,c->r[28]); // 800E37B8
  {uint32_t ea=c->r[26]+0x0000004Cu; WF32(ea,c->f[30]);} // 800E37BC
  {uint32_t ea=c->r[26]+0x00000050u; WF32(ea,c->f[31]);} // 800E37C0
  W32(c->r[26]+0x00000054u,c->r[29]); // 800E37C4
  W32(c->r[26]+0x00000058u,c->r[30]); // 800E37C8
  W32(c->r[26]+0x0000005Cu,c->r[31]); // 800E37CC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 800E37D0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800E37D4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E37D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E37DC
  c->lr=c->r[0]; // 800E37E0
  c->r[1]=c->r[1]+0x00000040u; // 800E37E4
  return; // 800E37E8
}

// fn_800E37EC
void f_800E37EC(Ctx* __restrict c) {
  trace_call(0x800E37ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E37EC
  c->r[0]=c->lr; // 800E37F0
  c->r[4]=0u+0x806D0000u; // 800E37F4
  c->r[7]=0u+0x00000000u; // 800E37F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E37FC
  c->r[4]=c->r[4]+0x00007E98u; // 800E3800
  c->r[6]=0u+0x00000002u; // 800E3804
  c->r[5]=0u+0xFFFFFFFFu; // 800E3808
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E380C
  c->r[0]=c->r[4]+0x00000028u; // 800E3810
  c->r[30]=c->r[3]|c->r[3]; // 800E3814
  W32(c->r[3]+0x00000000u,c->r[7]); // 800E3818
  W32(c->r[3]+0x00000004u,c->r[6]); // 800E381C
  W32(c->r[3]+0x00000010u,c->r[5]); // 800E3820
  W32(c->r[3]+0x00000014u,c->r[7]); // 800E3824
  W32(c->r[3]+0x00000018u,c->r[7]); // 800E3828
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800E382C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800E3830
  W32(c->r[3]+0x00000020u,c->r[7]); // 800E3834
  W32(c->r[3]+0x00000008u,c->r[7]); // 800E3838
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800E383C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E3840
  c->lr=0x800E3848u; f_800E4124(c); // 800E3844
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800E3848
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E384C
  if (!crb(c,2)) { goto L_800E3874; } // 800E3850
  c->r[31]=0u+0x80730000u; // 800E3854
  c->r[3]=c->r[31]+0x000067B8u; // 800E3858
  c->lr=0x800E3860u; f_8029EF58(c); // 800E385C
  c->r[3]=0u+0x806D0000u; // 800E3860
  c->r[0]=0u+0x00000001u; // 800E3864
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800E3868
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800E386C
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800E3870
L_800E3874:;
  c->r[3]=0u+0x80730000u; // 800E3874
  c->r[8]=0u+0x80690000u; // 800E3878
  c->r[4]=c->r[30]|c->r[30]; // 800E387C
  c->r[5]=0u+0x00000000u; // 800E3880
  c->r[3]=c->r[3]+0x000067B8u; // 800E3884
  c->r[8]=c->r[8]+0xFFFFEAC8u; // 800E3888
  c->r[6]=0u+0x0000003Fu; // 800E388C
  c->r[7]=0u+0x0000002Au; // 800E3890
  c->lr=0x800E3898u; f_8029F4EC(c); // 800E3894
  c->r[3]=c->r[30]|c->r[30]; // 800E3898
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E389C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E38A0
  c->lr=c->r[0]; // 800E38A4
  c->r[1]=c->r[1]+0x00000010u; // 800E38A8
  return; // 800E38AC
}

// fn_800E38B0
void f_800E38B0(Ctx* __restrict c) {
  trace_call(0x800E38B0u);
  return; // 800E38B0
}

// fn_800E38B4
void f_800E38B4(Ctx* __restrict c) {
  trace_call(0x800E38B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38B4
  c->r[0]=c->lr; // 800E38B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E38BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E38C0
  c->r[31]=c->r[3]|c->r[3]; // 800E38C4
  c->lr=0x800E38CCu; f_800504E0(c); // 800E38C8
  c->lr=0x800E38D0u; f_80341F0C(c); // 800E38CC
  c->r[3]=c->r[31]|c->r[31]; // 800E38D0
  c->lr=0x800E38D8u; f_800E4188(c); // 800E38D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E38D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E38DC
  c->lr=c->r[0]; // 800E38E0
  c->r[1]=c->r[1]+0x00000010u; // 800E38E4
  return; // 800E38E8
}

// fn_800E38EC
void f_800E38EC(Ctx* __restrict c) {
  trace_call(0x800E38ECu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38EC
  c->r[0]=c->lr; // 800E38F0
  W32(c->r[1]+0x00000174u,c->r[0]); // 800E38F4
  c->r[11]=c->r[1]+0x00000170u; // 800E38F8
  c->lr=0x800E3900u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E38FC
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800E3900
  c->r[21]=0u+0x00000000u; // 800E3904
  W32(c->r[1]+0x00000030u,c->r[21]); // 800E3908
  c->r[28]=c->r[3]|c->r[3]; // 800E390C
  cmps(c,0,(int32_t)c->r[0],1); // 800E3910
  W32(c->r[1]+0x00000034u,c->r[21]); // 800E3914
  if (crb(c,2)) { goto L_800E3940; } // 800E3918
  cmps(c,0,(int32_t)c->r[0],2); // 800E391C
  if (crb(c,2)) { goto L_800E3A84; } // 800E3920
  cmps(c,0,(int32_t)c->r[0],3); // 800E3924
  if (crb(c,2)) { goto L_800E3B28; } // 800E3928
  cmps(c,0,(int32_t)c->r[0],4); // 800E392C
  if (crb(c,2)) { goto L_800E3BCC; } // 800E3930
  cmps(c,0,(int32_t)c->r[0],5); // 800E3934
  if (crb(c,2)) { goto L_800E3D68; } // 800E3938
  goto L_800E3D6C; // 800E393C
L_800E3940:;
  c->r[4]=0u+0x80690000u; // 800E3940
  c->r[3]=c->r[1]+0x00000038u; // 800E3944
  c->r[4]=c->r[4]+0xFFFFEAC8u; // 800E3948
  c->r[5]=c->r[28]+0x000000ACu; // 800E394C
  c->r[4]=c->r[4]+0x00000012u; // 800E3950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3954
  c->lr=0x800E395Cu; f_803B1FC8(c); // 800E3958
  c->r[20]=0u+0x80740000u; // 800E395C
  c->r[4]=c->r[1]+0x00000038u; // 800E3960
  c->r[3]=c->r[20]+0x000054E0u; // 800E3964
  c->lr=0x800E396Cu; f_80313128(c); // 800E3968
  c->lr=0x800E3970u; f_80048F58(c); // 800E396C
  cmps(c,0,(int32_t)c->r[3],0); // 800E3970
  c->r[19]=c->r[3]|c->r[3]; // 800E3974
  if (crb(c,2)) { goto L_800E3D6C; } // 800E3978
  c->r[3]=c->r[20]+0x000054E0u; // 800E397C
  c->r[4]=c->r[1]+0x00000038u; // 800E3980
  c->lr=0x800E3988u; f_80313128(c); // 800E3984
  c->r[0]=R8(c->r[3]+0x00000018u); // 800E3988
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800E398C
  if (crb(c,2)) { goto L_800E39A4; } // 800E3990
  c->r[0]=R8(c->r[3]+0x00000019u); // 800E3994
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800E3998
  if (!crb(c,2)) { goto L_800E39A4; } // 800E399C
  c->r[21]=0u+0x00000001u; // 800E39A0
L_800E39A4:;
  cmps(c,0,(int32_t)c->r[21],0); // 800E39A4
  if (crb(c,2)) { goto L_800E39B4; } // 800E39A8
  c->r[20]=R32(c->r[3]+0x00000038u); // 800E39AC
  goto L_800E39B8; // 800E39B0
L_800E39B4:;
  c->r[20]=0u+0x00000000u; // 800E39B4
L_800E39B8:;
  c->lr=0x800E39BCu; f_800504E0(c); // 800E39B8
  c->r[4]=c->r[19]|c->r[19]; // 800E39BC
  c->r[5]=c->r[20]|c->r[20]; // 800E39C0
  c->lr=0x800E39C8u; f_80342CE8(c); // 800E39C4
  c->r[0]=0u+0x00000000u; // 800E39C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E39CC
  c->r[22]=0u+0x80740000u; // 800E39D0
  c->r[21]=0u+0x80740000u; // 800E39D4
  c->r[20]=0u+0x80740000u; // 800E39D8
  goto L_800E3A5C; // 800E39DC
L_800E39E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E39E0
  cmps(c,0,(int32_t)c->r[0],0); // 800E39E4
  if (!crb(c,2)) { goto L_800E3A34; } // 800E39E8
  c->r[4]=c->r[19]|c->r[19]; // 800E39EC
  c->r[3]=c->r[22]+0x00005330u; // 800E39F0
  c->lr=0x800E39F8u; f_80313128(c); // 800E39F4
  c->lr=0x800E39FCu; f_80048F58(c); // 800E39F8
  cmps(c,0,(int32_t)c->r[3],0); // 800E39FC
  if (crb(c,2)) { goto L_800E3A1C; } // 800E3A00
  c->lr=0x800E3A08u; f_80050558(c); // 800E3A04
  c->r[5]=c->r[19]|c->r[19]; // 800E3A08
  c->r[4]=c->r[22]+0x00005330u; // 800E3A0C
  c->r[6]=0u+0x00000000u; // 800E3A10
  c->lr=0x800E3A18u; f_803187FC(c); // 800E3A14
  goto L_800E3A5C; // 800E3A18
L_800E3A1C:;
  c->lr=0x800E3A20u; f_80050558(c); // 800E3A1C
  c->r[5]=c->r[19]|c->r[19]; // 800E3A20
  c->r[4]=c->r[21]+0x00005180u; // 800E3A24
  c->r[6]=0u+0x00000000u; // 800E3A28
  c->lr=0x800E3A30u; f_803187FC(c); // 800E3A2C
  goto L_800E3A5C; // 800E3A30
L_800E3A34:;
  cmps(c,0,(int32_t)c->r[0],1); // 800E3A34
  if (!crb(c,2)) { goto L_800E3A5C; } // 800E3A38
  c->r[4]=c->r[19]|c->r[19]; // 800E3A3C
  c->r[3]=c->r[20]+0x000054E0u; // 800E3A40
  c->r[5]=0u+0xFFFFFFFFu; // 800E3A44
  c->r[6]=0u+0x00000002u; // 800E3A48
  c->r[7]=0u+0x00000000u; // 800E3A4C
  c->r[8]=0u+0x00000000u; // 800E3A50
  c->r[9]=0u+0x00000001u; // 800E3A54
  c->lr=0x800E3A5Cu; f_80312A20(c); // 800E3A58
L_800E3A5C:;
  c->r[3]=c->r[28]|c->r[28]; // 800E3A5C
  c->r[4]=c->r[1]+0x00000018u; // 800E3A60
  c->r[5]=c->r[1]+0x00000014u; // 800E3A64
  c->lr=0x800E3A6Cu; f_800E4288(c); // 800E3A68
  cmps(c,0,(int32_t)c->r[3],0); // 800E3A6C
  c->r[19]=c->r[3]|c->r[3]; // 800E3A70
  if (!crb(c,2)) { IRQCHK(c); goto L_800E39E0; } // 800E3A74
  c->r[0]=0u+0x00000002u; // 800E3A78
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800E3A7C
  goto L_800E3D6C; // 800E3A80
L_800E3A84:;
  W32(c->r[1]+0x00000018u,c->r[21]); // 800E3A84
  c->r[22]=0u+0x80740000u; // 800E3A88
  c->r[21]=0u+0x80740000u; // 800E3A8C
  c->r[20]=0u+0x80740000u; // 800E3A90
  goto L_800E3AF8; // 800E3A94
L_800E3A98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A98
  cmps(c,0,(int32_t)c->r[0],0); // 800E3A9C
  if (!crb(c,2)) { goto L_800E3AD8; } // 800E3AA0
  c->r[4]=c->r[19]|c->r[19]; // 800E3AA4
  c->r[3]=c->r[22]+0x00005330u; // 800E3AA8
  c->lr=0x800E3AB0u; f_80313128(c); // 800E3AAC
  c->lr=0x800E3AB4u; f_80048F58(c); // 800E3AB0
  cmps(c,0,(int32_t)c->r[3],0); // 800E3AB4
  if (!crb(c,2)) { goto L_800E3AF8; } // 800E3AB8
  c->r[4]=c->r[19]|c->r[19]; // 800E3ABC
  c->r[3]=c->r[21]+0x00005180u; // 800E3AC0
  c->lr=0x800E3AC8u; f_80313128(c); // 800E3AC4
  c->lr=0x800E3ACCu; f_80048F58(c); // 800E3AC8
  cmps(c,0,(int32_t)c->r[3],0); // 800E3ACC
  if (crb(c,2)) { goto L_800E3B14; } // 800E3AD0
  goto L_800E3AF8; // 800E3AD4
L_800E3AD8:;
  cmps(c,0,(int32_t)c->r[0],1); // 800E3AD8
  if (!crb(c,2)) { goto L_800E3AF8; } // 800E3ADC
  c->r[4]=c->r[19]|c->r[19]; // 800E3AE0
  c->r[3]=c->r[20]+0x000054E0u; // 800E3AE4
  c->lr=0x800E3AECu; f_80313128(c); // 800E3AE8
  c->lr=0x800E3AF0u; f_80048F58(c); // 800E3AEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E3AF0
  if (crb(c,2)) { goto L_800E3B14; } // 800E3AF4
L_800E3AF8:;
  c->r[3]=c->r[28]|c->r[28]; // 800E3AF8
  c->r[4]=c->r[1]+0x00000018u; // 800E3AFC
  c->r[5]=c->r[1]+0x00000014u; // 800E3B00
  c->lr=0x800E3B08u; f_800E4288(c); // 800E3B04
  cmps(c,0,(int32_t)c->r[3],0); // 800E3B08
  c->r[19]=c->r[3]|c->r[3]; // 800E3B0C
  if (!crb(c,2)) { IRQCHK(c); goto L_800E3A98; } // 800E3B10
L_800E3B14:;
  cmps(c,0,(int32_t)c->r[19],0); // 800E3B14
  if (!crb(c,2)) { goto L_800E3D6C; } // 800E3B18
  c->r[0]=0u+0x00000003u; // 800E3B1C
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800E3B20
  goto L_800E3D6C; // 800E3B24
L_800E3B28:;
  c->r[0]=R8(c->r[3]+0x000000F8u); // 800E3B28
  cmps(c,0,(int32_t)c->r[0],0); // 800E3B2C
  if (crb(c,2)) { goto L_800E3D6C; } // 800E3B30
  c->r[0]=R8(c->r[3]+0x000000CCu); // 800E3B34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3B38
  if (crb(c,2)) { goto L_800E3BA8; } // 800E3B3C
  c->lr=0x800E3B44u; f_800504E0(c); // 800E3B40
  c->lr=0x800E3B48u; f_803421F4(c); // 800E3B44
  c->r[19]=c->r[3]|c->r[3]; // 800E3B48
  goto L_800E3BA0; // 800E3B4C
L_800E3B50:;
  c->lr=0x800E3B54u; f_8009CAE0(c); // 800E3B50
  c->r[4]=R32(c->r[28]+0x000000F0u); // 800E3B54
  c->r[5]=c->r[28]+0x000000CCu; // 800E3B58
  c->r[6]=c->r[19]+0xFFFFFFFFu; // 800E3B5C
  c->lr=0x800E3B64u; f_8009EAAC(c); // 800E3B60
  cmps(c,0,(int32_t)c->r[3],0); // 800E3B64
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800E3B68
  W32(c->r[1]+0x00000028u,c->r[3]); // 800E3B6C
  W32(c->r[1]+0x00000030u,c->r[3]); // 800E3B70
  W32(c->r[1]+0x00000034u,c->r[4]); // 800E3B74
  if (crb(c,2)) { goto L_800E3BA8; } // 800E3B78
  W32(c->r[1]+0x00000020u,c->r[3]); // 800E3B7C
  W32(c->r[1]+0x00000024u,c->r[4]); // 800E3B80
  c->lr=0x800E3B88u; f_800504E0(c); // 800E3B84
  c->r[4]=c->r[19]|c->r[19]; // 800E3B88
  c->r[5]=c->r[1]+0x00000020u; // 800E3B8C
  c->lr=0x800E3B94u; f_80342350(c); // 800E3B90
  c->lr=0x800E3B98u; f_800504E0(c); // 800E3B94
  c->lr=0x800E3B9Cu; f_803422A0(c); // 800E3B98
  c->r[19]=c->r[3]|c->r[3]; // 800E3B9C
L_800E3BA0:;
  cmps(c,0,(int32_t)c->r[19],0); // 800E3BA0
  if (!crb(c,0)) { IRQCHK(c); goto L_800E3B50; } // 800E3BA4
L_800E3BA8:;
  c->lr=0x800E3BACu; f_800504E0(c); // 800E3BA8
  c->lr=0x800E3BB0u; f_80341F0C(c); // 800E3BAC
  c->lr=0x800E3BB4u; f_800504E0(c); // 800E3BB0
  c->lr=0x800E3BB8u; f_80341E74(c); // 800E3BB4
  c->r[3]=0u+0x00000004u; // 800E3BB8
  c->r[0]=0u+0x00000000u; // 800E3BBC
  W32(c->r[28]+0x000000F4u,c->r[3]); // 800E3BC0
  W8(c->r[28]+0x000000F8u,c->r[0]); // 800E3BC4
  goto L_800E3D6C; // 800E3BC8
L_800E3BCC:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800E3BCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3BD0
  if (!crb(c,2)) { goto L_800E3C10; } // 800E3BD4
  c->r[20]=0u+0x80730000u; // 800E3BD8
  c->r[3]=c->r[20]+0x00006D10u; // 800E3BDC
  c->lr=0x800E3BE4u; f_802D8298(c); // 800E3BE0
  c->r[3]=0u+0x806D0000u; // 800E3BE4
  c->r[4]=0u+0x80050000u; // 800E3BE8
  c->r[3]=c->r[3]+0xFFFFC220u; // 800E3BEC
  c->r[5]=0u+0x80750000u; // 800E3BF0
  W32(c->r[20]+0x00006D10u,c->r[3]); // 800E3BF4
  c->r[3]=c->r[20]+0x00006D10u; // 800E3BF8
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800E3BFC
  c->r[5]=c->r[5]+0x000039F4u; // 800E3C00
  c->lr=0x800E3C08u; f_803A92B8(c); // 800E3C04
  c->r[0]=0u+0x00000001u; // 800E3C08
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800E3C0C
L_800E3C10:;
  c->r[3]=0u+0x80730000u; // 800E3C10
  {uint32_t ea=c->r[28]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3C14
  c->r[3]=c->r[3]+0x00006D10u; // 800E3C18
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3C1C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E3C20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800E3C24
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[1]);} // 800E3C28
  fcmp(c,0,c->f[1],c->f[0]); // 800E3C2C
  if (!crb(c,0)) { goto L_800E3D30; } // 800E3C30
  c->r[29]=0u+0x00000000u; // 800E3C34
  c->r[20]=0u+0x80730000u; // 800E3C38
  c->r[21]=0u+0x806D0000u; // 800E3C3C
  c->r[26]=0u+0x80740000u; // 800E3C40
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 800E3C44
  c->r[31]=c->r[29]|c->r[29]; // 800E3C48
  c->r[30]=c->r[29]|c->r[29]; // 800E3C4C
  c->r[21]=c->r[21]+0xFFFFC240u; // 800E3C50
  c->r[22]=c->r[20]+0x000069C0u; // 800E3C54
  c->r[26]=c->r[26]+0x00004C10u; // 800E3C58
  c->r[27]=0u+0x00000000u; // 800E3C5C
  c->r[23]=0u+0x80050000u; // 800E3C60
  c->r[24]=0u+0x80750000u; // 800E3C64
  c->r[25]=0u+0x00000001u; // 800E3C68
L_800E3C6C:;
  W8(c->r[1]+0x00000010u,c->r[30]); // 800E3C6C
  c->r[3]=c->r[1]+0x00000010u; // 800E3C70
  c->lr=0x800E3C78u; f_80046D50(c); // 800E3C74
  c->lr=0x800E3C7Cu; f_8008CD00(c); // 800E3C78
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800E3C7C
  if (crb(c,2)) { goto L_800E3C9C; } // 800E3C80
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800E3C84
  c->r[3]=c->r[1]+0x0000000Cu; // 800E3C88
  c->lr=0x800E3C90u; f_80046D50(c); // 800E3C8C
  c->lr=0x800E3C94u; f_8008CD10(c); // 800E3C90
  cmps(c,0,(int32_t)c->r[3],0); // 800E3C94
  if (crb(c,2)) { goto L_800E3D20; } // 800E3C98
L_800E3C9C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB99u); // 800E3C9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3CA0
  if (!crb(c,2)) { goto L_800E3CD0; } // 800E3CA4
  c->r[3]=c->r[20]+0x000069C0u; // 800E3CA8
  c->lr=0x800E3CB0u; f_8029D954(c); // 800E3CAC
  c->r[0]=c->r[21]+0x00000008u; // 800E3CB0
  W32(c->r[22]+0x00000010u,c->r[21]); // 800E3CB4
  c->r[3]=c->r[22]|c->r[22]; // 800E3CB8
  c->r[4]=c->r[23]+0xFFFF9DB8u; // 800E3CBC
  W32(c->r[22]+0x0000000Cu,c->r[0]); // 800E3CC0
  c->r[5]=c->r[24]+0x00003A00u; // 800E3CC4
  c->lr=0x800E3CCCu; f_803A92B8(c); // 800E3CC8
  W8(c->r[13]+0xFFFFBB99u,c->r[25]); // 800E3CCC
L_800E3CD0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E3CD0
  c->r[0]=c->r[29]|c->r[29]; // 800E3CD4
  if (!crb(c,0)) { goto L_800E3CE0; } // 800E3CD8
  c->r[0]=R32(c->r[22]+0x00000030u); // 800E3CDC
L_800E3CE0:;
  cmpu(c,0,c->r[0],0x00000003u); // 800E3CE0
  if (!crb(c,1)) { goto L_800E3CEC; } // 800E3CE4
  c->r[0]=0u+0x00000000u; // 800E3CE8
L_800E3CEC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10904); // 800E3CEC
  c->r[5]=R32(c->r[22]+0x00000014u); // 800E3CF0
  c->r[3]=c->r[26]+c->r[27]; // 800E3CF4
  c->r[4]=0u+0x00000005u; // 800E3CF8
  c->r[5]=c->r[5]+c->r[0]; // 800E3CFC
  c->r[19]=R32(c->r[5]+0x0000000Cu); // 800E3D00
  c->lr=0x800E3D08u; f_80052BC8(c); // 800E3D04
  c->r[0]=c->r[19]&c->r[3]; cr0(c,c->r[0]); // 800E3D08
  if (crb(c,2)) { goto L_800E3D20; } // 800E3D0C
  c->lr=0x800E3D14u; f_800504E0(c); // 800E3D10
  {uint32_t ea=c->r[2]+0xFFFFA62Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3D14
  c->lr=0x800E3D1Cu; f_80341FCC(c); // 800E3D18
  goto L_800E3D30; // 800E3D1C
L_800E3D20:;
  c->r[29]=c->r[29]+0x00000001u; // 800E3D20
  c->r[27]=c->r[27]+0x00000078u; // 800E3D24
  cmps(c,0,(int32_t)c->r[29],2); // 800E3D28
  if (crb(c,0)) { IRQCHK(c); goto L_800E3C6C; } // 800E3D2C
L_800E3D30:;
  c->lr=0x800E3D34u; f_800504E0(c); // 800E3D30
  c->r[0]=R8(c->r[3]+0x000000CCu); // 800E3D34
  c->r[4]=0u+0x00000000u; // 800E3D38
  cmps(c,0,(int32_t)c->r[0],0); // 800E3D3C
  if (crb(c,2)) { goto L_800E3D54; } // 800E3D40
  c->r[0]=R8(c->r[3]+0x000000CDu); // 800E3D44
  cmps(c,0,(int32_t)c->r[0],0); // 800E3D48
  if (!crb(c,2)) { goto L_800E3D54; } // 800E3D4C
  c->r[4]=0u+0x00000001u; // 800E3D50
L_800E3D54:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E3D54
  if (!crb(c,2)) { goto L_800E3D6C; } // 800E3D58
  c->r[3]=c->r[28]|c->r[28]; // 800E3D5C
  c->lr=0x800E3D64u; f_800E3FE4(c); // 800E3D60
  goto L_800E3D6C; // 800E3D64
L_800E3D68:;
  c->lr=0x800E3D6Cu; f_800E4188(c); // 800E3D68
L_800E3D6C:;
  c->r[0]=R32(c->r[28]+0x000000F4u); // 800E3D6C
  cmps(c,0,(int32_t)c->r[0],3); // 800E3D70
  if (crb(c,2)) { goto L_800E3D98; } // 800E3D74
  c->r[0]=R8(c->r[28]+0x000000F8u); // 800E3D78
  cmps(c,0,(int32_t)c->r[0],0); // 800E3D7C
  if (crb(c,2)) { goto L_800E3D98; } // 800E3D80
  c->r[0]=0u+0x00000000u; // 800E3D84
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E3D88
  c->r[3]=c->r[1]+0x00000008u; // 800E3D8C
  c->lr=0x800E3D94u; f_80046D50(c); // 800E3D90
  c->lr=0x800E3D98u; f_8008CC20(c); // 800E3D94
L_800E3D98:;
  c->r[11]=c->r[1]+0x00000170u; // 800E3D98
  c->r[3]=0u+0x00000001u; // 800E3D9C
  c->lr=0x800E3DA4u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3DA0
  c->r[0]=R32(c->r[1]+0x00000174u); // 800E3DA4
  c->lr=c->r[0]; // 800E3DA8
  c->r[1]=c->r[1]+0x00000170u; // 800E3DAC
  return; // 800E3DB0
}

// fn_800E3DB4
void f_800E3DB4(Ctx* __restrict c) {
  trace_call(0x800E3DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DB4
  c->r[0]=c->lr; // 800E3DB8
  c->r[7]=0u+0x80690000u; // 800E3DBC
  W32(c->r[1]+0x00000124u,c->r[0]); // 800E3DC0
  c->r[7]=c->r[7]+0xFFFFEAC8u; // 800E3DC4
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3DC8
  c->r[29]=c->r[4]|c->r[4]; // 800E3DCC
  c->r[28]=c->r[3]|c->r[3]; // 800E3DD0
  c->r[30]=c->r[5]|c->r[5]; // 800E3DD4
  c->r[31]=c->r[6]|c->r[6]; // 800E3DD8
  c->r[5]=c->r[29]|c->r[29]; // 800E3DDC
  c->r[3]=c->r[1]+0x00000008u; // 800E3DE0
  c->r[4]=c->r[7]+0x00000019u; // 800E3DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E3DE8
  c->lr=0x800E3DF0u; f_803B1FC8(c); // 800E3DEC
  c->r[3]=0u+0x80740000u; // 800E3DF0
  c->r[4]=c->r[1]+0x00000008u; // 800E3DF4
  c->r[3]=c->r[3]+0x000054E0u; // 800E3DF8
  c->r[5]=0u+0xFFFFFFFFu; // 800E3DFC
  c->r[6]=0u+0x00000002u; // 800E3E00
  c->r[7]=0u+0x00000000u; // 800E3E04
  c->r[8]=0u+0x00000000u; // 800E3E08
  c->r[9]=0u+0x00000001u; // 800E3E0C
  c->lr=0x800E3E14u; f_80312A20(c); // 800E3E10
  c->r[3]=c->r[29]|c->r[29]; // 800E3E14
  c->lr=0x800E3E1Cu; f_803A91D4(c); // 800E3E18
  cmpu(c,0,c->r[3],0x00000020u); // 800E3E1C
  if (!crb(c,0)) { goto L_800E3E68; } // 800E3E20
  c->r[4]=c->r[29]|c->r[29]; // 800E3E24
  c->r[3]=c->r[28]+0x000000ACu; // 800E3E28
  c->lr=0x800E3E30u; f_803B37C0(c); // 800E3E2C
  goto L_800E3E38; // 800E3E30
  goto L_800E3E68; // 800E3E34
L_800E3E38:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3E38
  c->lr=0x800E3E40u; f_803A91D4(c); // 800E3E3C
  cmpu(c,0,c->r[3],0x00000020u); // 800E3E40
  if (!crb(c,0)) { goto L_800E3E68; } // 800E3E44
  c->r[4]=c->r[30]|c->r[30]; // 800E3E48
  c->r[3]=c->r[28]+0x000000CCu; // 800E3E4C
  c->lr=0x800E3E54u; f_803B37C0(c); // 800E3E50
  goto L_800E3E5C; // 800E3E54
  goto L_800E3E68; // 800E3E58
L_800E3E5C:;
  c->r[0]=0u+0x00000001u; // 800E3E5C
  W32(c->r[28]+0x000000F0u,c->r[31]); // 800E3E60
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800E3E64
L_800E3E68:;
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3E68
  c->r[0]=R32(c->r[1]+0x00000124u); // 800E3E6C
  c->lr=c->r[0]; // 800E3E70
  c->r[1]=c->r[1]+0x00000120u; // 800E3E74
  return; // 800E3E78
}

// fn_800E3E7C
void f_800E3E7C(Ctx* __restrict c) {
  trace_call(0x800E3E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E7C
  c->r[0]=c->lr; // 800E3E80
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E3E84
  c->r[11]=c->r[1]+0x00000030u; // 800E3E88
  c->lr=0x800E3E90u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3E8C
  c->r[0]=0u+0x00000000u; // 800E3E90
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E3E94
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3E98
  c->r[4]=0u+0x00000001u; // 800E3E9C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E3EA0
  c->r[29]=c->r[3]|c->r[3]; // 800E3EA4
  c->r[0]=R8(c->r[3]+0x000000CCu); // 800E3EA8
  W8(c->r[3]+0x000000F8u,c->r[4]); // 800E3EAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3EB0
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 800E3EB4
  if (crb(c,2)) { goto L_800E3F1C; } // 800E3EB8
  c->lr=0x800E3EC0u; f_8009CAE0(c); // 800E3EBC
  c->r[4]=R32(c->r[29]+0x000000F0u); // 800E3EC0
  c->r[5]=c->r[29]+0x000000CCu; // 800E3EC4
  c->lr=0x800E3ECCu; f_8009EA68(c); // 800E3EC8
  c->r[31]=c->r[3]|c->r[3]; // 800E3ECC
  c->r[30]=0u+0x00000000u; // 800E3ED0
  goto L_800E3F14; // 800E3ED4
L_800E3ED8:;
  c->lr=0x800E3EDCu; f_8009CAE0(c); // 800E3ED8
  c->r[4]=R32(c->r[29]+0x000000F0u); // 800E3EDC
  c->r[6]=c->r[30]|c->r[30]; // 800E3EE0
  c->r[5]=c->r[29]+0x000000CCu; // 800E3EE4
  c->lr=0x800E3EECu; f_8009EAAC(c); // 800E3EE8
  cmps(c,0,(int32_t)c->r[3],0); // 800E3EEC
  W32(c->r[1]+0x00000014u,c->r[4]); // 800E3EF0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800E3EF4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800E3EF8
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800E3EFC
  if (crb(c,2)) { goto L_800E3F10; } // 800E3F00
  c->r[3]=c->r[1]+0x00000018u; // 800E3F04
  c->lr=0x800E3F0Cu; f_800DBAA4(c); // 800E3F08
  c->lr=0x800E3F10u; f_800615F4(c); // 800E3F0C
L_800E3F10:;
  c->r[30]=c->r[30]+0x00000001u; // 800E3F10
L_800E3F14:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 800E3F14
  if (crb(c,0)) { IRQCHK(c); goto L_800E3ED8; } // 800E3F18
L_800E3F1C:;
  c->r[0]=0u+0x00000000u; // 800E3F1C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E3F20
  c->r[3]=c->r[1]+0x00000008u; // 800E3F24
  c->lr=0x800E3F2Cu; f_80046EFC(c); // 800E3F28
  c->r[4]=0u+0x00000009u; // 800E3F2C
  c->r[5]=0u+0x00000001u; // 800E3F30
  c->r[6]=0u+0xFFFFFFFFu; // 800E3F34
  c->lr=0x800E3F3Cu; f_800B1DE0(c); // 800E3F38
  c->lr=0x800E3F40u; f_80049CC8(c); // 800E3F3C
  c->r[4]=0u+0x00000001u; // 800E3F40
  c->lr=0x800E3F48u; f_800FC6C0(c); // 800E3F44
  c->r[0]=R8(c->r[13]+0xFFFFBB86u); // 800E3F48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E3F4C
  if (!crb(c,2)) { goto L_800E3F94; } // 800E3F50
  c->r[31]=0u+0x80730000u; // 800E3F54
  c->r[3]=c->r[31]+0x00006040u; // 800E3F58
  c->lr=0x800E3F60u; f_8004B784(c); // 800E3F5C
  c->r[6]=0u+0x806D0000u; // 800E3F60
  c->r[4]=0u+0x80050000u; // 800E3F64
  c->r[6]=c->r[6]+0xFFFFC3B8u; // 800E3F68
  c->r[3]=c->r[31]+0x00006040u; // 800E3F6C
  c->r[0]=c->r[6]+0x00000028u; // 800E3F70
  c->r[5]=0u+0x80750000u; // 800E3F74
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800E3F78
  c->r[4]=c->r[4]+0xFFFF9F98u; // 800E3F7C
  c->r[5]=c->r[5]+0x000039E8u; // 800E3F80
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E3F84
  c->lr=0x800E3F8Cu; f_803A92B8(c); // 800E3F88
  c->r[0]=0u+0x00000001u; // 800E3F8C
  W8(c->r[13]+0xFFFFBB86u,c->r[0]); // 800E3F90
L_800E3F94:;
  c->r[3]=0u+0x80730000u; // 800E3F94
  c->r[4]=0u+0xFFFFFFFFu; // 800E3F98
  c->r[3]=c->r[3]+0x00006040u; // 800E3F9C
  c->lr=0x800E3FA4u; f_8004C8D0(c); // 800E3FA0
  c->r[3]=0u+0x80750000u; // 800E3FA4
  c->r[3]=c->r[3]+0xFFFFBC98u; // 800E3FA8
  c->lr=0x800E3FB0u; f_800AB428(c); // 800E3FAC
  c->r[3]=0u+0x80750000u; // 800E3FB0
  c->r[3]=c->r[3]+0xFFFFC558u; // 800E3FB4
  c->lr=0x800E3FBCu; f_800AB428(c); // 800E3FB8
  c->lr=0x800E3FC0u; f_8009A32C(c); // 800E3FBC
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3FC0
  c->r[4]=0u+0x00000001u; // 800E3FC4
  c->lr=0x800E3FCCu; f_8009BE08(c); // 800E3FC8
  c->r[11]=c->r[1]+0x00000030u; // 800E3FCC
  c->lr=0x800E3FD4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E3FD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E3FD4
  c->lr=c->r[0]; // 800E3FD8
  c->r[1]=c->r[1]+0x00000030u; // 800E3FDC
  return; // 800E3FE0
}

// fn_800E3FE4
void f_800E3FE4(Ctx* __restrict c) {
  trace_call(0x800E3FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3FE4
  c->r[0]=c->lr; // 800E3FE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E3FEC
  c->r[11]=c->r[1]+0x00000030u; // 800E3FF0
  c->lr=0x800E3FF8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3FF4
  c->r[0]=0u+0x00000000u; // 800E3FF8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E3FFC
  c->r[29]=c->r[3]|c->r[3]; // 800E4000
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E4004
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800E4008
  cmps(c,0,(int32_t)c->r[0],0); // 800E400C
  if (crb(c,2)) { goto L_800E40D4; } // 800E4010
  cmps(c,0,(int32_t)c->r[0],5); // 800E4014
  if (crb(c,2)) { goto L_800E40D4; } // 800E4018
  c->lr=0x800E4020u; f_800504E0(c); // 800E401C
  c->lr=0x800E4024u; f_80341F0C(c); // 800E4020
  c->r[0]=R8(c->r[29]+0x000000CCu); // 800E4024
  c->r[3]=0u+0x00000005u; // 800E4028
  W32(c->r[29]+0x000000F4u,c->r[3]); // 800E402C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E4030
  if (crb(c,2)) { goto L_800E4098; } // 800E4034
  c->lr=0x800E403Cu; f_8009CAE0(c); // 800E4038
  c->r[4]=R32(c->r[29]+0x000000F0u); // 800E403C
  c->r[5]=c->r[29]+0x000000CCu; // 800E4040
  c->lr=0x800E4048u; f_8009EA68(c); // 800E4044
  c->r[31]=c->r[3]|c->r[3]; // 800E4048
  c->r[30]=0u+0x00000000u; // 800E404C
  goto L_800E4090; // 800E4050
L_800E4054:;
  c->lr=0x800E4058u; f_8009CAE0(c); // 800E4054
  c->r[4]=R32(c->r[29]+0x000000F0u); // 800E4058
  c->r[6]=c->r[30]|c->r[30]; // 800E405C
  c->r[5]=c->r[29]+0x000000CCu; // 800E4060
  c->lr=0x800E4068u; f_8009EAAC(c); // 800E4064
  cmps(c,0,(int32_t)c->r[3],0); // 800E4068
  W32(c->r[1]+0x00000014u,c->r[4]); // 800E406C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800E4070
  W32(c->r[1]+0x00000018u,c->r[3]); // 800E4074
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800E4078
  if (crb(c,2)) { goto L_800E408C; } // 800E407C
  c->r[3]=c->r[1]+0x00000018u; // 800E4080
  c->lr=0x800E4088u; f_800DBAA4(c); // 800E4084
  c->lr=0x800E408Cu; f_80061678(c); // 800E4088
L_800E408C:;
  c->r[30]=c->r[30]+0x00000001u; // 800E408C
L_800E4090:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 800E4090
  if (crb(c,0)) { IRQCHK(c); goto L_800E4054; } // 800E4094
L_800E4098:;
  c->r[0]=0u+0x00000000u; // 800E4098
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E409C
  c->r[3]=c->r[1]+0x00000008u; // 800E40A0
  c->lr=0x800E40A8u; f_80046EFC(c); // 800E40A4
  c->r[4]=0u+0x00000009u; // 800E40A8
  c->r[5]=0u+0x00000000u; // 800E40AC
  c->r[6]=0u+0xFFFFFFFFu; // 800E40B0
  c->lr=0x800E40B8u; f_800B1DE0(c); // 800E40B4
  c->lr=0x800E40BCu; f_80049CC8(c); // 800E40B8
  c->r[4]=0u+0x00000000u; // 800E40BC
  c->lr=0x800E40C4u; f_800FC6C0(c); // 800E40C0
  c->lr=0x800E40C8u; f_8009A32C(c); // 800E40C4
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E40C8
  c->r[4]=0u+0x00000001u; // 800E40CC
  c->lr=0x800E40D4u; f_8009BDE8(c); // 800E40D0
L_800E40D4:;
  c->r[11]=c->r[1]+0x00000030u; // 800E40D4
  c->lr=0x800E40DCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E40D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E40DC
  c->lr=c->r[0]; // 800E40E0
  c->r[1]=c->r[1]+0x00000030u; // 800E40E4
  return; // 800E40E8
}

// fn_800E40EC
void f_800E40EC(Ctx* __restrict c) {
  trace_call(0x800E40ECu);
  c->r[3]=R32(c->r[3]+0x000000F4u); // 800E40EC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800E40F0
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800E40F4
  return; // 800E40F8
}

// fn_800E40FC
void f_800E40FC(Ctx* __restrict c) {
  trace_call(0x800E40FCu);
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800E40FC
  cmps(c,0,(int32_t)c->r[0],4); // 800E4100
  if (!crb(c,0)) { goto L_800E4114; } // 800E4104
  c->r[0]=R8(c->r[3]+0x000000F8u); // 800E4108
  cmps(c,0,(int32_t)c->r[0],0); // 800E410C
  if (crb(c,2)) { goto L_800E411C; } // 800E4110
L_800E4114:;
  c->r[3]=0u+0x00000001u; // 800E4114
  return; // 800E4118
L_800E411C:;
  c->r[3]=0u+0x00000000u; // 800E411C
  return; // 800E4120
}

// fn_800E4124
void f_800E4124(Ctx* __restrict c) {
  trace_call(0x800E4124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4124
  c->r[0]=c->lr; // 800E4128
  c->r[4]=0u+0x00000000u; // 800E412C
  c->r[5]=0u+0x00000020u; // 800E4130
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4138
  c->r[31]=c->r[3]|c->r[3]; // 800E413C
  c->r[3]=c->r[3]+0x000000ACu; // 800E4140
  c->lr=0x800E4148u; f_800043EC(c); // 800E4144
  c->r[3]=c->r[31]+0x000000CCu; // 800E4148
  c->r[4]=0u+0x00000000u; // 800E414C
  c->r[5]=0u+0x00000020u; // 800E4150
  c->lr=0x800E4158u; f_800043EC(c); // 800E4154
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4158
  c->r[0]=0u+0x00000000u; // 800E415C
  c->r[3]=0u+0xFFFFFFFFu; // 800E4160
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800E4164
  W32(c->r[31]+0x000000F0u,c->r[3]); // 800E4168
  W32(c->r[31]+0x000000F4u,c->r[0]); // 800E416C
  W8(c->r[31]+0x000000F8u,c->r[0]); // 800E4170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4174
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4178
  c->lr=c->r[0]; // 800E417C
  c->r[1]=c->r[1]+0x00000010u; // 800E4180
  return; // 800E4184
}

// fn_800E4188
void f_800E4188(Ctx* __restrict c) {
  trace_call(0x800E4188u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4188
  c->r[0]=c->lr; // 800E418C
  W32(c->r[1]+0x00000134u,c->r[0]); // 800E4190
  {uint32_t ea=c->r[1]+0x0000011Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4194
  c->r[27]=c->r[3]|c->r[3]; // 800E4198
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800E419C
  cmps(c,0,(int32_t)c->r[0],2); // 800E41A0
  if (crb(c,0)) { goto L_800E4234; } // 800E41A4
  c->r[0]=0u+0x00000000u; // 800E41A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E41AC
  c->r[29]=0u+0x80740000u; // 800E41B0
  c->r[30]=0u+0x80740000u; // 800E41B4
  c->r[31]=0u+0x80740000u; // 800E41B8
  goto L_800E4218; // 800E41BC
L_800E41C0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800E41C0
  cmps(c,0,(int32_t)c->r[0],0); // 800E41C4
  if (!crb(c,2)) { goto L_800E4204; } // 800E41C8
  c->r[4]=c->r[28]|c->r[28]; // 800E41CC
  c->r[3]=c->r[29]+0x00005330u; // 800E41D0
  c->lr=0x800E41D8u; f_80313128(c); // 800E41D4
  c->lr=0x800E41DCu; f_80048F58(c); // 800E41D8
  cmps(c,0,(int32_t)c->r[3],0); // 800E41DC
  if (crb(c,2)) { goto L_800E41F4; } // 800E41E0
  c->r[4]=c->r[28]|c->r[28]; // 800E41E4
  c->r[3]=c->r[29]+0x00005330u; // 800E41E8
  c->lr=0x800E41F0u; f_80313430(c); // 800E41EC
  goto L_800E4218; // 800E41F0
L_800E41F4:;
  c->r[4]=c->r[28]|c->r[28]; // 800E41F4
  c->r[3]=c->r[30]+0x00005180u; // 800E41F8
  c->lr=0x800E4200u; f_80313430(c); // 800E41FC
  goto L_800E4218; // 800E4200
L_800E4204:;
  cmps(c,0,(int32_t)c->r[0],1); // 800E4204
  if (!crb(c,2)) { goto L_800E4218; } // 800E4208
  c->r[4]=c->r[28]|c->r[28]; // 800E420C
  c->r[3]=c->r[31]+0x000054E0u; // 800E4210
  c->lr=0x800E4218u; f_80313430(c); // 800E4214
L_800E4218:;
  c->r[3]=c->r[27]|c->r[27]; // 800E4218
  c->r[4]=c->r[1]+0x0000000Cu; // 800E421C
  c->r[5]=c->r[1]+0x00000008u; // 800E4220
  c->lr=0x800E4228u; f_800E4288(c); // 800E4224
  cmps(c,0,(int32_t)c->r[3],0); // 800E4228
  c->r[28]=c->r[3]|c->r[3]; // 800E422C
  if (!crb(c,2)) { IRQCHK(c); goto L_800E41C0; } // 800E4230
L_800E4234:;
  c->r[0]=R32(c->r[27]+0x000000F4u); // 800E4234
  cmps(c,0,(int32_t)c->r[0],1); // 800E4238
  if (crb(c,0)) { goto L_800E426C; } // 800E423C
  c->r[4]=0u+0x80690000u; // 800E4240
  c->r[3]=c->r[1]+0x00000010u; // 800E4244
  c->r[4]=c->r[4]+0xFFFFEAC8u; // 800E4248
  c->r[5]=c->r[27]+0x000000ACu; // 800E424C
  c->r[4]=c->r[4]+0x00000012u; // 800E4250
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E4254
  c->lr=0x800E425Cu; f_803B1FC8(c); // 800E4258
  c->r[3]=0u+0x80740000u; // 800E425C
  c->r[4]=c->r[1]+0x00000010u; // 800E4260
  c->r[3]=c->r[3]+0x000054E0u; // 800E4264
  c->lr=0x800E426Cu; f_80313430(c); // 800E4268
L_800E426C:;
  c->r[3]=c->r[27]|c->r[27]; // 800E426C
  c->lr=0x800E4274u; f_800E4124(c); // 800E4270
  {uint32_t ea=c->r[1]+0x0000011Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4274
  c->r[0]=R32(c->r[1]+0x00000134u); // 800E4278
  c->lr=c->r[0]; // 800E427C
  c->r[1]=c->r[1]+0x00000130u; // 800E4280
  return; // 800E4284
}

// fn_800E4288
void f_800E4288(Ctx* __restrict c) {
  trace_call(0x800E4288u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4288
  c->r[0]=c->lr; // 800E428C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4290
  c->r[0]=0u+0x00000002u; // 800E4294
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4298
  c->r[31]=0u+0x80690000u; // 800E429C
  c->r[28]=c->r[4]|c->r[4]; // 800E42A0
  c->r[29]=c->r[5]|c->r[5]; // 800E42A4
  c->r[31]=c->r[31]+0xFFFFEAC8u; // 800E42A8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800E42AC
  goto L_800E4314; // 800E42B0
L_800E42B4:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 800E42B4
  c->r[3]=c->r[30]|c->r[30]; // 800E42B8
  c->r[4]=c->r[31]+0x0000002Bu; // 800E42BC
  c->r[0]=c->r[5]+0x00000001u; // 800E42C0
  W32(c->r[28]+0x00000000u,c->r[0]); // 800E42C4
  c->lr=0x800E42CCu; f_803B4278(c); // 800E42C8
  cmps(c,0,(int32_t)c->r[3],0); // 800E42CC
  if (!crb(c,2)) { goto L_800E4314; } // 800E42D0
  c->r[3]=c->r[30]|c->r[30]; // 800E42D4
  c->r[4]=c->r[31]+0x00000036u; // 800E42D8
  c->lr=0x800E42E0u; f_803B4278(c); // 800E42DC
  cmps(c,0,(int32_t)c->r[3],0); // 800E42E0
  if (crb(c,2)) { goto L_800E42F4; } // 800E42E4
  c->r[0]=0u+0x00000000u; // 800E42E8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800E42EC
  goto L_800E432C; // 800E42F0
L_800E42F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E42F4
  c->r[4]=c->r[31]+0x0000003Bu; // 800E42F8
  c->lr=0x800E4300u; f_803B4278(c); // 800E42FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E4300
  if (crb(c,2)) { goto L_800E4314; } // 800E4304
  c->r[0]=0u+0x00000001u; // 800E4308
  W32(c->r[29]+0x00000000u,c->r[0]); // 800E430C
  goto L_800E432C; // 800E4310
L_800E4314:;
  c->lr=0x800E4318u; f_800504E0(c); // 800E4314
  c->r[4]=R32(c->r[28]+0x00000000u); // 800E4318
  c->lr=0x800E4320u; f_803420DC(c); // 800E431C
  cmps(c,0,(int32_t)c->r[3],0); // 800E4320
  c->r[30]=c->r[3]|c->r[3]; // 800E4324
  if (!crb(c,2)) { IRQCHK(c); goto L_800E42B4; } // 800E4328
L_800E432C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E432C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4330
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4334
  c->lr=c->r[0]; // 800E4338
  c->r[1]=c->r[1]+0x00000020u; // 800E433C
  return; // 800E4340
}

// fn_800E4344
void f_800E4344(Ctx* __restrict c) {
  trace_call(0x800E4344u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4344
  c->r[0]=c->lr; // 800E4348
  c->r[4]=0u+0x806D0000u; // 800E434C
  c->r[7]=0u+0x00000000u; // 800E4350
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4354
  c->r[4]=c->r[4]+0x00007ED0u; // 800E4358
  c->r[6]=0u+0x00000002u; // 800E435C
  c->r[5]=0u+0xFFFFFFFFu; // 800E4360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E4364
  c->r[0]=c->r[4]+0x00000028u; // 800E4368
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E436C
  c->r[30]=0u+0x00000001u; // 800E4370
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E4374
  c->r[29]=c->r[3]|c->r[3]; // 800E4378
  W32(c->r[3]+0x00000000u,c->r[7]); // 800E437C
  W32(c->r[3]+0x00000004u,c->r[6]); // 800E4380
  W32(c->r[3]+0x00000010u,c->r[5]); // 800E4384
  W32(c->r[3]+0x00000014u,c->r[7]); // 800E4388
  W32(c->r[3]+0x00000018u,c->r[7]); // 800E438C
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800E4390
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800E4394
  W32(c->r[3]+0x00000020u,c->r[7]); // 800E4398
  W32(c->r[3]+0x00000008u,c->r[7]); // 800E439C
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800E43A0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E43A4
  W8(c->r[3]+0x000000ACu,c->r[7]); // 800E43A8
  W8(c->r[3]+0x000000CCu,c->r[7]); // 800E43AC
  W32(c->r[3]+0x000000ECu,c->r[7]); // 800E43B0
  W8(c->r[3]+0x000000F0u,c->r[30]); // 800E43B4
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800E43B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E43BC
  if (!crb(c,2)) { goto L_800E43E0; } // 800E43C0
  c->r[31]=0u+0x80730000u; // 800E43C4
  c->r[3]=c->r[31]+0x000067B8u; // 800E43C8
  c->lr=0x800E43D0u; f_8029EF58(c); // 800E43CC
  c->r[3]=0u+0x806D0000u; // 800E43D0
  W8(c->r[13]+0xFFFFBB98u,c->r[30]); // 800E43D4
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800E43D8
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800E43DC
L_800E43E0:;
  c->r[3]=0u+0x80730000u; // 800E43E0
  c->r[8]=0u+0x80690000u; // 800E43E4
  c->r[4]=c->r[29]|c->r[29]; // 800E43E8
  c->r[5]=0u+0x00000000u; // 800E43EC
  c->r[3]=c->r[3]+0x000067B8u; // 800E43F0
  c->r[8]=c->r[8]+0xFFFFEB08u; // 800E43F4
  c->r[6]=0u+0x0000003Fu; // 800E43F8
  c->r[7]=0u+0x0000002Bu; // 800E43FC
  c->lr=0x800E4404u; f_8029F4EC(c); // 800E4400
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E4404
  c->r[3]=c->r[29]|c->r[29]; // 800E4408
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E440C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E4410
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4414
  c->lr=c->r[0]; // 800E4418
  c->r[1]=c->r[1]+0x00000020u; // 800E441C
  return; // 800E4420
}

// fn_800E4424
void f_800E4424(Ctx* __restrict c) {
  trace_call(0x800E4424u);
  return; // 800E4424
}

// fn_800E4428
void f_800E4428(Ctx* __restrict c) {
  trace_call(0x800E4428u);
  c->r[4]=0u+0x00000000u; // 800E4428
  c->r[0]=0u+0x00000001u; // 800E442C
  W8(c->r[3]+0x000000ACu,c->r[4]); // 800E4430
  W8(c->r[3]+0x000000CCu,c->r[4]); // 800E4434
  W32(c->r[3]+0x000000ECu,c->r[4]); // 800E4438
  W8(c->r[3]+0x000000F0u,c->r[0]); // 800E443C
  return; // 800E4440
}

// fn_800E4444
void f_800E4444(Ctx* __restrict c) {
  trace_call(0x800E4444u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4444
  c->r[0]=c->lr; // 800E4448
  W32(c->r[1]+0x00000224u,c->r[0]); // 800E444C
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 800E4450
  c->r[31]=c->r[3]|c->r[3]; // 800E4454
  W32(c->r[1]+0x00000218u,c->r[30]); // 800E4458
  W32(c->r[1]+0x00000214u,c->r[29]); // 800E445C
  c->r[0]=R32(c->r[3]+0x000000ECu); // 800E4460
  cmps(c,0,(int32_t)c->r[0],1); // 800E4464
  if (crb(c,2)) { goto L_800E4478; } // 800E4468
  cmps(c,0,(int32_t)c->r[0],3); // 800E446C
  if (crb(c,2)) { goto L_800E4510; } // 800E4470
  goto L_800E4644; // 800E4474
L_800E4478:;
  c->r[4]=0u+0x80690000u; // 800E4478
  c->r[3]=c->r[1]+0x00000108u; // 800E447C
  c->r[4]=c->r[4]+0xFFFFEB08u; // 800E4480
  c->r[5]=c->r[31]+0x000000ACu; // 800E4484
  c->r[4]=c->r[4]+0x00000013u; // 800E4488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E448C
  c->lr=0x800E4494u; f_803B1FC8(c); // 800E4490
  c->r[3]=0u+0x80740000u; // 800E4494
  c->r[4]=c->r[1]+0x00000108u; // 800E4498
  c->r[3]=c->r[3]+0x000054E0u; // 800E449C
  c->lr=0x800E44A4u; f_80313128(c); // 800E44A0
  c->r[0]=R8(c->r[3]+0x00000018u); // 800E44A4
  c->r[4]=0u+0x00000000u; // 800E44A8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800E44AC
  if (crb(c,2)) { goto L_800E44C4; } // 800E44B0
  c->r[0]=R8(c->r[3]+0x00000019u); // 800E44B4
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800E44B8
  if (!crb(c,2)) { goto L_800E44C4; } // 800E44BC
  c->r[4]=0u+0x00000001u; // 800E44C0
L_800E44C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E44C4
  if (crb(c,2)) { goto L_800E44D4; } // 800E44C8
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800E44CC
  goto L_800E44D8; // 800E44D0
L_800E44D4:;
  c->r[29]=0u+0x00000000u; // 800E44D4
L_800E44D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E44D8
  if (crb(c,2)) { goto L_800E4644; } // 800E44DC
  c->lr=0x800E44E4u; f_8032DF50(c); // 800E44E0
  c->r[30]=c->r[3]|c->r[3]; // 800E44E4
  c->lr=0x800E44ECu; f_80349570(c); // 800E44E8
  c->r[3]=c->r[3]+0x00010000u; // 800E44EC
  c->r[4]=c->r[30]|c->r[30]; // 800E44F0
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E44F4
  c->r[5]=c->r[29]|c->r[29]; // 800E44F8
  c->r[6]=0u+0x00000002u; // 800E44FC
  c->lr=0x800E4504u; f_8034E030(c); // 800E4500
  c->r[0]=0u+0x00000002u; // 800E4504
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800E4508
  goto L_800E4644; // 800E450C
L_800E4510:;
  c->r[4]=0u+0x80690000u; // 800E4510
  c->r[3]=c->r[1]+0x00000108u; // 800E4514
  c->r[4]=c->r[4]+0xFFFFEB08u; // 800E4518
  c->r[5]=c->r[31]+0x000000ACu; // 800E451C
  c->r[4]=c->r[4]+0x00000013u; // 800E4520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E4524
  c->lr=0x800E452Cu; f_803B1FC8(c); // 800E4528
  c->r[3]=0u+0x80740000u; // 800E452C
  c->r[4]=c->r[1]+0x00000108u; // 800E4530
  c->r[3]=c->r[3]+0x000054E0u; // 800E4534
  c->lr=0x800E453Cu; f_80313430(c); // 800E4538
  c->r[0]=R8(c->r[31]+0x000000CCu); // 800E453C
  c->r[3]=0u+0x00000000u; // 800E4540
  W8(c->r[31]+0x000000ACu,c->r[3]); // 800E4544
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E4548
  W32(c->r[31]+0x000000ECu,c->r[3]); // 800E454C
  if (crb(c,2)) { goto L_800E4644; } // 800E4550
  c->r[3]=c->r[31]+0x000000ACu; // 800E4554
  c->r[4]=c->r[31]+0x000000CCu; // 800E4558
  c->lr=0x800E4560u; f_803B393C(c); // 800E455C
  cmps(c,0,(int32_t)c->r[3],0); // 800E4560
  if (crb(c,2)) { goto L_800E4644; } // 800E4564
  c->r[0]=R32(c->r[31]+0x000000ECu); // 800E4568
  cmps(c,0,(int32_t)c->r[0],0); // 800E456C
  if (crb(c,2)) { goto L_800E45D8; } // 800E4570
  c->r[3]=c->r[31]+0x000000CCu; // 800E4574
  c->lr=0x800E457Cu; f_803A91D4(c); // 800E4578
  cmpu(c,0,c->r[3],0x00000020u); // 800E457C
  if (!crb(c,0)) { goto L_800E4644; } // 800E4580
  c->r[3]=c->r[31]+0x000000CCu; // 800E4584
  c->r[4]=c->r[3]|c->r[3]; // 800E4588
  c->lr=0x800E4590u; f_803B37C0(c); // 800E458C
  c->r[0]=R32(c->r[31]+0x000000ECu); // 800E4590
  cmps(c,0,(int32_t)c->r[0],2); // 800E4594
  if (!crb(c,2)) { goto L_800E45C0; } // 800E4598
  c->lr=0x800E45A0u; f_80349570(c); // 800E459C
  c->r[3]=c->r[3]+0x00010000u; // 800E45A0
  c->r[4]=0u+0x00000000u; // 800E45A4
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E45A8
  c->lr=0x800E45B0u; f_8034B31C(c); // 800E45AC
  c->lr=0x800E45B4u; f_80349570(c); // 800E45B0
  c->r[3]=c->r[3]+0x00010000u; // 800E45B4
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E45B8
  c->lr=0x800E45C0u; f_8034E1BC(c); // 800E45BC
L_800E45C0:;
  c->r[0]=R32(c->r[31]+0x000000ECu); // 800E45C0
  cmps(c,0,(int32_t)c->r[0],0); // 800E45C4
  if (crb(c,2)) { goto L_800E4644; } // 800E45C8
  c->r[0]=0u+0x00000003u; // 800E45CC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800E45D0
  goto L_800E4644; // 800E45D4
L_800E45D8:;
  c->r[3]=c->r[31]+0x000000CCu; // 800E45D8
  c->lr=0x800E45E0u; f_803A91D4(c); // 800E45DC
  cmpu(c,0,c->r[3],0x00000020u); // 800E45E0
  if (!crb(c,0)) { goto L_800E45F4; } // 800E45E4
  c->r[3]=c->r[31]+0x000000ACu; // 800E45E8
  c->r[4]=c->r[31]+0x000000CCu; // 800E45EC
  c->lr=0x800E45F4u; f_803B37C0(c); // 800E45F0
L_800E45F4:;
  c->r[4]=0u+0x80690000u; // 800E45F4
  c->r[3]=c->r[1]+0x00000008u; // 800E45F8
  c->r[4]=c->r[4]+0xFFFFEB08u; // 800E45FC
  c->r[5]=c->r[31]+0x000000ACu; // 800E4600
  c->r[4]=c->r[4]+0x0000001Cu; // 800E4604
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E4608
  c->lr=0x800E4610u; f_803B1FC8(c); // 800E460C
  c->r[3]=0u+0x80740000u; // 800E4610
  c->r[4]=c->r[1]+0x00000008u; // 800E4614
  c->r[3]=c->r[3]+0x000054E0u; // 800E4618
  c->r[5]=0u+0xFFFFFFFFu; // 800E461C
  c->r[6]=0u+0x00000002u; // 800E4620
  c->r[7]=0u+0x00000001u; // 800E4624
  c->r[8]=0u+0x00000000u; // 800E4628
  c->r[9]=0u+0x00000001u; // 800E462C
  c->lr=0x800E4634u; f_80312A20(c); // 800E4630
  c->r[3]=0u+0x00000000u; // 800E4634
  c->r[0]=0u+0x00000001u; // 800E4638
  W8(c->r[31]+0x000000CCu,c->r[3]); // 800E463C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800E4640
L_800E4644:;
  c->lr=0x800E4648u; f_80349570(c); // 800E4644
  c->r[3]=c->r[3]+0x00010000u; // 800E4648
  c->r[4]=R8(c->r[31]+0x000000F0u); // 800E464C
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E4650
  c->lr=0x800E4658u; f_8034B31C(c); // 800E4654
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 800E4658
  c->r[3]=0u+0x00000001u; // 800E465C
  c->r[30]=R32(c->r[1]+0x00000218u); // 800E4660
  c->r[29]=R32(c->r[1]+0x00000214u); // 800E4664
  c->r[0]=R32(c->r[1]+0x00000224u); // 800E4668
  c->lr=c->r[0]; // 800E466C
  c->r[1]=c->r[1]+0x00000220u; // 800E4670
  return; // 800E4674
}

// fn_800E4678
void f_800E4678(Ctx* __restrict c) {
  trace_call(0x800E4678u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4678
  c->r[0]=c->lr; // 800E467C
  W32(c->r[1]+0x00000114u,c->r[0]); // 800E4680
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 800E4684
  c->r[31]=c->r[4]|c->r[4]; // 800E4688
  W32(c->r[1]+0x00000108u,c->r[30]); // 800E468C
  c->r[30]=c->r[3]|c->r[3]; // 800E4690
  c->r[3]=c->r[3]+0x000000ACu; // 800E4694
  c->lr=0x800E469Cu; f_803B393C(c); // 800E4698
  cmps(c,0,(int32_t)c->r[3],0); // 800E469C
  if (crb(c,2)) { goto L_800E4780; } // 800E46A0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800E46A4
  cmps(c,0,(int32_t)c->r[0],0); // 800E46A8
  if (crb(c,2)) { goto L_800E4714; } // 800E46AC
  c->r[3]=c->r[31]|c->r[31]; // 800E46B0
  c->lr=0x800E46B8u; f_803A91D4(c); // 800E46B4
  cmpu(c,0,c->r[3],0x00000020u); // 800E46B8
  if (!crb(c,0)) { goto L_800E4780; } // 800E46BC
  c->r[4]=c->r[31]|c->r[31]; // 800E46C0
  c->r[3]=c->r[30]+0x000000CCu; // 800E46C4
  c->lr=0x800E46CCu; f_803B37C0(c); // 800E46C8
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800E46CC
  cmps(c,0,(int32_t)c->r[0],2); // 800E46D0
  if (!crb(c,2)) { goto L_800E46FC; } // 800E46D4
  c->lr=0x800E46DCu; f_80349570(c); // 800E46D8
  c->r[3]=c->r[3]+0x00010000u; // 800E46DC
  c->r[4]=0u+0x00000000u; // 800E46E0
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E46E4
  c->lr=0x800E46ECu; f_8034B31C(c); // 800E46E8
  c->lr=0x800E46F0u; f_80349570(c); // 800E46EC
  c->r[3]=c->r[3]+0x00010000u; // 800E46F0
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E46F4
  c->lr=0x800E46FCu; f_8034E1BC(c); // 800E46F8
L_800E46FC:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800E46FC
  cmps(c,0,(int32_t)c->r[0],0); // 800E4700
  if (crb(c,2)) { goto L_800E4780; } // 800E4704
  c->r[0]=0u+0x00000003u; // 800E4708
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800E470C
  goto L_800E4780; // 800E4710
L_800E4714:;
  c->r[3]=c->r[31]|c->r[31]; // 800E4714
  c->lr=0x800E471Cu; f_803A91D4(c); // 800E4718
  cmpu(c,0,c->r[3],0x00000020u); // 800E471C
  if (!crb(c,0)) { goto L_800E4730; } // 800E4720
  c->r[4]=c->r[31]|c->r[31]; // 800E4724
  c->r[3]=c->r[30]+0x000000ACu; // 800E4728
  c->lr=0x800E4730u; f_803B37C0(c); // 800E472C
L_800E4730:;
  c->r[4]=0u+0x80690000u; // 800E4730
  c->r[3]=c->r[1]+0x00000008u; // 800E4734
  c->r[4]=c->r[4]+0xFFFFEB08u; // 800E4738
  c->r[5]=c->r[30]+0x000000ACu; // 800E473C
  c->r[4]=c->r[4]+0x0000001Cu; // 800E4740
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E4744
  c->lr=0x800E474Cu; f_803B1FC8(c); // 800E4748
  c->r[3]=0u+0x80740000u; // 800E474C
  c->r[4]=c->r[1]+0x00000008u; // 800E4750
  c->r[3]=c->r[3]+0x000054E0u; // 800E4754
  c->r[5]=0u+0xFFFFFFFFu; // 800E4758
  c->r[6]=0u+0x00000002u; // 800E475C
  c->r[7]=0u+0x00000001u; // 800E4760
  c->r[8]=0u+0x00000000u; // 800E4764
  c->r[9]=0u+0x00000001u; // 800E4768
  c->lr=0x800E4770u; f_80312A20(c); // 800E476C
  c->r[3]=0u+0x00000000u; // 800E4770
  c->r[0]=0u+0x00000001u; // 800E4774
  W8(c->r[30]+0x000000CCu,c->r[3]); // 800E4778
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800E477C
L_800E4780:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 800E4780
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 800E4784
  c->r[30]=R32(c->r[1]+0x00000108u); // 800E4788
  c->lr=c->r[0]; // 800E478C
  c->r[1]=c->r[1]+0x00000110u; // 800E4790
  return; // 800E4794
}

// fn_800E4798
void f_800E4798(Ctx* __restrict c) {
  trace_call(0x800E4798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4798
  c->r[0]=c->lr; // 800E479C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E47A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E47A4
  c->r[31]=c->r[3]|c->r[3]; // 800E47A8
  c->r[0]=R32(c->r[3]+0x000000ECu); // 800E47AC
  cmps(c,0,(int32_t)c->r[0],2); // 800E47B0
  if (!crb(c,2)) { goto L_800E47DC; } // 800E47B4
  c->lr=0x800E47BCu; f_80349570(c); // 800E47B8
  c->r[3]=c->r[3]+0x00010000u; // 800E47BC
  c->r[4]=0u+0x00000000u; // 800E47C0
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E47C4
  c->lr=0x800E47CCu; f_8034B31C(c); // 800E47C8
  c->lr=0x800E47D0u; f_80349570(c); // 800E47CC
  c->r[3]=c->r[3]+0x00010000u; // 800E47D0
  c->r[3]=R32(c->r[3]+0xFFFF83F8u); // 800E47D4
  c->lr=0x800E47DCu; f_8034E1BC(c); // 800E47D8
L_800E47DC:;
  c->r[0]=R32(c->r[31]+0x000000ECu); // 800E47DC
  cmps(c,0,(int32_t)c->r[0],0); // 800E47E0
  if (crb(c,2)) { goto L_800E47F0; } // 800E47E4
  c->r[0]=0u+0x00000003u; // 800E47E8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800E47EC
L_800E47F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E47F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E47F4
  c->lr=c->r[0]; // 800E47F8
  c->r[1]=c->r[1]+0x00000010u; // 800E47FC
  return; // 800E4800
}

// fn_800E4804
void f_800E4804(Ctx* __restrict c) {
  trace_call(0x800E4804u);
  W8(c->r[3]+0x000000F0u,c->r[4]); // 800E4804
  return; // 800E4808
}

// fn_800E480C
void f_800E480C(Ctx* __restrict c) {
  trace_call(0x800E480Cu);
  c->r[3]=0u+0x00000022u; // 800E480C
  return; // 800E4810
}

// fn_800E4814
void f_800E4814(Ctx* __restrict c) {
  trace_call(0x800E4814u);
  c->r[3]=0u+0x800E0000u; // 800E4814
  c->r[3]=c->r[3]+0x00004820u; // 800E4818
  return; // 800E481C
}

// fn_800E4820
void f_800E4820(Ctx* __restrict c) {
  trace_call(0x800E4820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4820
  c->r[0]=c->lr; // 800E4824
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4828
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E482C
  c->r[30]=c->r[4]|c->r[4]; // 800E4830
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E4834
  c->r[0]=c->r[3]+0xACB50000u; // 800E4838
  cmpu(c,0,c->r[0],0x00005900u); // 800E483C
  if (crb(c,2)) { goto L_800E484C; } // 800E4840
  c->r[3]=0u+0x00000001u; // 800E4844
  goto L_800E4900; // 800E4848
L_800E484C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E484C
  cmps(c,0,(int32_t)c->r[0],0); // 800E4850
  if (crb(c,2)) { goto L_800E4860; } // 800E4854
  c->r[3]=0u+0x00000001u; // 800E4858
  goto L_800E4900; // 800E485C
L_800E4860:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E4860
  c->r[31]=c->r[4]+c->r[0]; // 800E4864
  c->r[0]=R32(c->r[4]+c->r[0]); // 800E4868
  cmps(c,0,(int32_t)c->r[0],0); // 800E486C
  if (crb(c,2)) { goto L_800E4890; } // 800E4870
  cmps(c,0,(int32_t)c->r[0],1); // 800E4874
  if (crb(c,2)) { goto L_800E48B0; } // 800E4878
  cmps(c,0,(int32_t)c->r[0],2); // 800E487C
  if (crb(c,2)) { goto L_800E48C8; } // 800E4880
  cmps(c,0,(int32_t)c->r[0],3); // 800E4884
  if (crb(c,2)) { goto L_800E48E4; } // 800E4888
  goto L_800E48FC; // 800E488C
L_800E4890:;
  c->r[0]=0u+0x00000000u; // 800E4890
  W8(c->r[1]+0x00000014u,c->r[0]); // 800E4894
  c->r[3]=c->r[1]+0x00000014u; // 800E4898
  c->lr=0x800E48A0u; f_8004E0C0(c); // 800E489C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800E48A0
  c->r[4]=c->r[31]+c->r[0]; // 800E48A4
  c->lr=0x800E48ACu; f_800E4678(c); // 800E48A8
  goto L_800E48FC; // 800E48AC
L_800E48B0:;
  c->r[0]=0u+0x00000000u; // 800E48B0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800E48B4
  c->r[3]=c->r[1]+0x00000010u; // 800E48B8
  c->lr=0x800E48C0u; f_8004E0C0(c); // 800E48BC
  c->lr=0x800E48C4u; f_800E4798(c); // 800E48C0
  goto L_800E48FC; // 800E48C4
L_800E48C8:;
  c->r[0]=0u+0x00000000u; // 800E48C8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800E48CC
  c->r[3]=c->r[1]+0x0000000Cu; // 800E48D0
  c->lr=0x800E48D8u; f_8004E0C0(c); // 800E48D4
  c->r[4]=0u+0x00000000u; // 800E48D8
  c->lr=0x800E48E0u; f_800E4804(c); // 800E48DC
  goto L_800E48FC; // 800E48E0
L_800E48E4:;
  c->r[0]=0u+0x00000000u; // 800E48E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E48E8
  c->r[3]=c->r[1]+0x00000008u; // 800E48EC
  c->lr=0x800E48F4u; f_8004E0C0(c); // 800E48F0
  c->r[4]=0u+0x00000001u; // 800E48F4
  c->lr=0x800E48FCu; f_800E4804(c); // 800E48F8
L_800E48FC:;
  c->r[3]=0u+0x00000001u; // 800E48FC
L_800E4900:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4900
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4904
  c->lr=c->r[0]; // 800E4908
  c->r[1]=c->r[1]+0x00000020u; // 800E490C
  return; // 800E4910
}

// fn_800E4914
void f_800E4914(Ctx* __restrict c) {
  trace_call(0x800E4914u);
  c->r[0]=0u+0x00000020u; // 800E4914
  c->r[4]=0u+0x00000000u; // 800E4918
  c->r[5]=0u+0xFFFFFFFFu; // 800E491C
  c->ctr=c->r[0]; // 800E4920
L_800E4924:;
  c->r[6]=c->r[3]+c->r[4]; // 800E4924
  c->r[4]=c->r[4]+0x00000004u; // 800E4928
  W32(c->r[6]+0x00000018u,c->r[5]); // 800E492C
  W32(c->r[6]+0x00000098u,c->r[5]); // 800E4930
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E4924; } // 800E4934
  c->r[0]=0u+0x00000000u; // 800E4938
  W32(c->r[3]+0x00000118u,c->r[0]); // 800E493C
  W8(c->r[3]+0x0000011Cu,c->r[0]); // 800E4940
  return; // 800E4944
}

// fn_800E4948
void f_800E4948(Ctx* __restrict c) {
  trace_call(0x800E4948u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4948
  c->r[0]=c->lr; // 800E494C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E4950
  c->r[11]=c->r[1]+0x00000060u; // 800E4954
  c->lr=0x800E495Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E4958
  c->r[22]=0u+0x80730000u; // 800E495C
  c->r[21]=0u+0x806D0000u; // 800E4960
  c->r[30]=c->r[3]|c->r[3]; // 800E4964
  c->r[25]=0u+0x00000000u; // 800E4968
  c->r[21]=c->r[21]+0xFFFFC3F4u; // 800E496C
  c->r[20]=c->r[22]+0x00005908u; // 800E4970
  c->r[24]=0u+0x00000000u; // 800E4974
  c->r[15]=0u+0x00000000u; // 800E4978
  c->r[19]=0u+0x80050000u; // 800E497C
  c->r[18]=0u+0x80750000u; // 800E4980
  c->r[17]=0u+0x00000001u; // 800E4984
  c->r[16]=0u+0xFFFFFFFFu; // 800E4988
L_800E498C:;
  c->r[23]=c->r[30]+c->r[15]; // 800E498C
  c->r[0]=R32(c->r[23]+0x00000018u); // 800E4990
  cmps(c,0,(int32_t)c->r[0],0); // 800E4994
  if (crb(c,0)) { goto L_800E49F4; } // 800E4998
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800E499C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E49A0
  if (!crb(c,2)) { goto L_800E49D0; } // 800E49A4
  c->r[3]=c->r[22]+0x00005908u; // 800E49A8
  c->lr=0x800E49B0u; f_8009822C(c); // 800E49AC
  c->r[0]=c->r[21]+0x00000028u; // 800E49B0
  W32(c->r[20]+0x000000A4u,c->r[21]); // 800E49B4
  c->r[3]=c->r[20]|c->r[20]; // 800E49B8
  c->r[4]=c->r[19]+0xFFFF9FD4u; // 800E49BC
  W32(c->r[20]+0x000000A8u,c->r[0]); // 800E49C0
  c->r[5]=c->r[18]+0x00003A10u; // 800E49C4
  c->lr=0x800E49CCu; f_803A92B8(c); // 800E49C8
  W8(c->r[13]+0xFFFFBB85u,c->r[17]); // 800E49CC
L_800E49D0:;
  c->r[4]=R32(c->r[23]+0x00000018u); // 800E49D0
  c->r[3]=c->r[22]+0x00005908u; // 800E49D4
  c->lr=0x800E49DCu; f_80099348(c); // 800E49D8
  cmps(c,0,(int32_t)c->r[3],0); // 800E49DC
  if (!crb(c,2)) { goto L_800E49F0; } // 800E49E0
  W32(c->r[23]+0x00000018u,c->r[16]); // 800E49E4
  W32(c->r[23]+0x00000098u,c->r[16]); // 800E49E8
  goto L_800E49F4; // 800E49EC
L_800E49F0:;
  c->r[25]=c->r[25]+0x00000001u; // 800E49F0
L_800E49F4:;
  c->r[24]=c->r[24]+0x00000001u; // 800E49F4
  c->r[15]=c->r[15]+0x00000004u; // 800E49F8
  cmps(c,0,(int32_t)c->r[24],32); // 800E49FC
  if (crb(c,0)) { IRQCHK(c); goto L_800E498C; } // 800E4A00
  c->r[0]=R32(c->r[30]+0x00000118u); // 800E4A04
  cmps(c,0,(int32_t)c->r[0],0); // 800E4A08
  if (!crb(c,1)) { goto L_800E4A58; } // 800E4A0C
  c->lr=0x800E4A14u; f_80323304(c); // 800E4A10
  c->r[3]=c->r[3]+0x000006B4u; // 800E4A14
  c->lr=0x800E4A1Cu; f_802A083C(c); // 800E4A18
  {uint32_t ea=c->r[2]+0xFFFFA638u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4A1C
  fcmp(c,0,c->f[1],c->f[0]); // 800E4A20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E4A24
  if (!crb(c,2)) { goto L_800E4A40; } // 800E4A28
  c->r[0]=0u+0x00000000u; // 800E4A2C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800E4A30
  c->r[3]=c->r[1]+0x00000010u; // 800E4A34
  c->lr=0x800E4A3Cu; f_80046D50(c); // 800E4A38
  c->lr=0x800E4A40u; f_8008CC20(c); // 800E4A3C
L_800E4A40:;
  c->r[3]=R32(c->r[30]+0x00000118u); // 800E4A40
  c->r[0]=0u+0x00000000u; // 800E4A44
  W8(c->r[30]+0x0000011Cu,c->r[0]); // 800E4A48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E4A4C
  W32(c->r[30]+0x00000118u,c->r[0]); // 800E4A50
  goto L_800E4D88; // 800E4A54
L_800E4A58:;
  cmps(c,0,(int32_t)c->r[25],0); // 800E4A58
  if (!crb(c,1)) { goto L_800E4D88; } // 800E4A5C
  c->r[3]=0u+0x80740000u; // 800E4A60
  c->r[3]=c->r[3]+0x000050A8u; // 800E4A64
  c->lr=0x800E4A6Cu; f_803130B8(c); // 800E4A68
  cmps(c,0,(int32_t)c->r[3],0); // 800E4A6C
  if (crb(c,1)) { goto L_800E4D50; } // 800E4A70
  c->r[3]=0u+0x80740000u; // 800E4A74
  c->r[3]=c->r[3]+0x00004FD0u; // 800E4A78
  c->lr=0x800E4A80u; f_803130B8(c); // 800E4A7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E4A80
  if (crb(c,1)) { goto L_800E4D50; } // 800E4A84
  c->r[3]=0u+0x80740000u; // 800E4A88
  c->r[3]=c->r[3]+0x000054E0u; // 800E4A8C
  c->lr=0x800E4A94u; f_803130B8(c); // 800E4A90
  cmps(c,0,(int32_t)c->r[3],0); // 800E4A94
  if (crb(c,1)) { goto L_800E4D50; } // 800E4A98
  c->r[3]=0u+0x80740000u; // 800E4A9C
  c->r[3]=c->r[3]+0x00005180u; // 800E4AA0
  c->lr=0x800E4AA8u; f_803130B8(c); // 800E4AA4
  cmps(c,0,(int32_t)c->r[3],0); // 800E4AA8
  if (crb(c,1)) { goto L_800E4D50; } // 800E4AAC
  c->r[3]=0u+0x80740000u; // 800E4AB0
  c->r[3]=c->r[3]+0x00005258u; // 800E4AB4
  c->lr=0x800E4ABCu; f_803130B8(c); // 800E4AB8
  cmps(c,0,(int32_t)c->r[3],0); // 800E4ABC
  if (crb(c,1)) { goto L_800E4D50; } // 800E4AC0
  c->r[3]=0u+0x80740000u; // 800E4AC4
  c->r[3]=c->r[3]+0x00005330u; // 800E4AC8
  c->lr=0x800E4AD0u; f_803130B8(c); // 800E4ACC
  cmps(c,0,(int32_t)c->r[3],0); // 800E4AD0
  if (crb(c,1)) { goto L_800E4D50; } // 800E4AD4
  c->r[3]=0u+0x80740000u; // 800E4AD8
  c->r[3]=c->r[3]+0x00005408u; // 800E4ADC
  c->lr=0x800E4AE4u; f_803130B8(c); // 800E4AE0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4AE4
  if (crb(c,1)) { goto L_800E4D50; } // 800E4AE8
  c->lr=0x800E4AF0u; f_8009CAE0(c); // 800E4AEC
  c->r[3]=c->r[3]+0x000000E4u; // 800E4AF0
  c->lr=0x800E4AF8u; f_8009F448(c); // 800E4AF4
  cmps(c,0,(int32_t)c->r[3],0); // 800E4AF8
  if (!crb(c,2)) { goto L_800E4D50; } // 800E4AFC
  c->r[0]=R8(c->r[30]+0x0000011Cu); // 800E4B00
  cmps(c,0,(int32_t)c->r[0],0); // 800E4B04
  if (crb(c,2)) { goto L_800E4D44; } // 800E4B08
  c->r[19]=0u+0x80740000u; // 800E4B0C
  c->r[20]=0u+0x806D0000u; // 800E4B10
  c->r[31]=0u+0x00000000u; // 800E4B14
  c->r[28]=0u+0x00000000u; // 800E4B18
  c->r[20]=c->r[20]+0xFFFFCD54u; // 800E4B1C
  c->r[21]=c->r[19]+0xFFFFFF5Cu; // 800E4B20
  c->r[22]=0u+0x80050000u; // 800E4B24
  c->r[23]=0u+0x80750000u; // 800E4B28
  c->r[24]=0u+0x00000001u; // 800E4B2C
  c->r[25]=0u+0x00000000u; // 800E4B30
  c->r[26]=0u+0x00000002u; // 800E4B34
  c->r[27]=0u+0xFFFFFFFFu; // 800E4B38
  c->r[29]=0u+0x00000004u; // 800E4B3C
L_800E4B40:;
  c->r[18]=c->r[30]+c->r[28]; // 800E4B40
  c->r[0]=R32(c->r[18]+0x00000018u); // 800E4B44
  cmps(c,0,(int32_t)c->r[0],0); // 800E4B48
  if (crb(c,0)) { goto L_800E4D1C; } // 800E4B4C
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800E4B50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E4B54
  if (!crb(c,2)) { goto L_800E4B84; } // 800E4B58
  c->r[3]=c->r[19]+0xFFFFFF5Cu; // 800E4B5C
  c->lr=0x800E4B64u; f_800A1FCC(c); // 800E4B60
  c->r[0]=c->r[20]+0x00000028u; // 800E4B64
  W32(c->r[21]+0x000000A4u,c->r[20]); // 800E4B68
  c->r[3]=c->r[21]|c->r[21]; // 800E4B6C
  c->r[4]=c->r[22]+0x000009E8u; // 800E4B70
  W32(c->r[21]+0x000000A8u,c->r[0]); // 800E4B74
  c->r[5]=c->r[23]+0x00003A1Cu; // 800E4B78
  c->lr=0x800E4B80u; f_803A92B8(c); // 800E4B7C
  W8(c->r[13]+0xFFFFBBF0u,c->r[24]); // 800E4B80
L_800E4B84:;
  c->r[3]=c->r[30]+c->r[28]; // 800E4B84
  c->r[5]=R32(c->r[18]+0x00000018u); // 800E4B88
  c->r[18]=R32(c->r[3]+0x00000098u); // 800E4B8C
  c->r[6]=0u+0x00000000u; // 800E4B90
  c->r[3]=0u+0x00000000u; // 800E4B94
  c->ctr=c->r[29]; // 800E4B98
L_800E4B9C:;
  c->r[4]=c->r[21]+c->r[3]; // 800E4B9C
  c->r[0]=R32(c->r[4]+0x00000958u); // 800E4BA0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800E4BA4
  if (crb(c,2)) { goto L_800E4BB8; } // 800E4BA8
  c->r[6]=c->r[6]+0x00000001u; // 800E4BAC
  c->r[3]=c->r[3]+0x000008B0u; // 800E4BB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E4B9C; } // 800E4BB4
L_800E4BB8:;
  cmps(c,0,(int32_t)c->r[6],4); // 800E4BB8
  c->r[0]=0u+0xFFFFFFFFu; // 800E4BBC
  if (!crb(c,0)) { goto L_800E4BC8; } // 800E4BC0
  c->r[0]=c->r[6]|c->r[6]; // 800E4BC4
L_800E4BC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E4BC8
  if (crb(c,0)) { goto L_800E4D1C; } // 800E4BCC
  c->r[16]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800E4BD0
  c->r[4]=c->r[18]|c->r[18]; // 800E4BD4
  c->r[3]=c->r[21]+c->r[16]; // 800E4BD8
  c->r[3]=c->r[3]+0x00000130u; // 800E4BDC
  c->lr=0x800E4BE4u; f_800A1D5C(c); // 800E4BE0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4BE4
  c->r[17]=c->r[3]|c->r[3]; // 800E4BE8
  if (crb(c,2)) { goto L_800E4D1C; } // 800E4BEC
  cmpu(c,0,c->r[18],0x000003FFu); // 800E4BF0
  c->r[0]=c->r[18]|c->r[18]; // 800E4BF4
  if (!crb(c,1)) { goto L_800E4C00; } // 800E4BF8
  c->r[0]=0u+0x00000000u; // 800E4BFC
L_800E4C00:;
  c->r[4]=c->r[21]+c->r[16]; // 800E4C00
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 800E4C04
  c->r[15]=c->r[4]+0x000000B0u; // 800E4C08
  c->r[0]=sraw(c,c->r[0],3); // 800E4C0C
  c->r[0]=R8(c->r[15]+c->r[0]); // 800E4C10
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[24]<<((c->r[3])&31)); // 800E4C14
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800E4C18
  if (!crb(c,2)) { goto L_800E4C3C; } // 800E4C1C
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 800E4C20
  c->r[3]=c->r[1]+0x0000000Cu; // 800E4C24
  c->lr=0x800E4C2Cu; f_80046D50(c); // 800E4C28
  c->r[4]=c->r[17]|c->r[17]; // 800E4C2C
  c->lr=0x800E4C34u; f_8008CD98(c); // 800E4C30
  c->r[3]=c->r[21]+c->r[16]; // 800E4C34
  W32(c->r[3]+0x00000950u,c->r[26]); // 800E4C38
L_800E4C3C:;
  cmpu(c,0,c->r[18],0x000003FFu); // 800E4C3C
  if (!crb(c,1)) { goto L_800E4C48; } // 800E4C40
  c->r[18]=0u+0x00000000u; // 800E4C44
L_800E4C48:;
  c->r[4]=sraw(c,c->r[18],3); // 800E4C48
  c->r[0]=rotl(c->r[18],0)&0x00000007u; // 800E4C4C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 800E4C50
  c->r[3]=R8(c->r[15]+c->r[4]); // 800E4C54
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E4C58
  c->r[0]=c->r[3]|c->r[0]; // 800E4C5C
  W8(c->r[15]+c->r[4],c->r[0]); // 800E4C60
  c->r[0]=R8(c->r[17]+0x00000000u); // 800E4C64
  cmps(c,0,(int32_t)c->r[0],71); // 800E4C68
  if (!crb(c,2)) { goto L_800E4C94; } // 800E4C6C
  c->r[0]=R8(c->r[17]+0x00000001u); // 800E4C70
  cmps(c,0,(int32_t)c->r[0],95); // 800E4C74
  if (!crb(c,2)) { goto L_800E4C94; } // 800E4C78
  c->r[3]=c->r[17]+0x00000002u; // 800E4C7C
  c->lr=0x800E4C84u; f_803B613C(c); // 800E4C80
  cmpu(c,0,c->r[3],0x000003FFu); // 800E4C84
  if (!crb(c,1)) { goto L_800E4C98; } // 800E4C88
  c->r[3]=0u+0xFFFFFFFFu; // 800E4C8C
  goto L_800E4C98; // 800E4C90
L_800E4C94:;
  c->r[3]=0u+0xFFFFFFFFu; // 800E4C94
L_800E4C98:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800E4C98
  if (crb(c,1)) { goto L_800E4CC0; } // 800E4C9C
  c->r[4]=sraw(c,c->r[3],3); // 800E4CA0
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800E4CA4
  c->r[4]=c->r[21]+c->r[4]; // 800E4CA8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 800E4CAC
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800E4CB0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E4CB4
  c->r[0]=c->r[3]|c->r[0]; // 800E4CB8
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800E4CBC
L_800E4CC0:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 800E4CC0
  cmps(c,0,(int32_t)c->r[0],67); // 800E4CC4
  if (!crb(c,2)) { goto L_800E4CF0; } // 800E4CC8
  c->r[0]=R8(c->r[17]+0x00000001u); // 800E4CCC
  cmps(c,0,(int32_t)c->r[0],95); // 800E4CD0
  if (!crb(c,2)) { goto L_800E4CF0; } // 800E4CD4
  c->r[3]=c->r[17]+0x00000002u; // 800E4CD8
  c->lr=0x800E4CE0u; f_803B613C(c); // 800E4CDC
  cmpu(c,0,c->r[3],0x0000003Fu); // 800E4CE0
  if (!crb(c,1)) { goto L_800E4CF4; } // 800E4CE4
  c->r[3]=0u+0xFFFFFFFFu; // 800E4CE8
  goto L_800E4CF4; // 800E4CEC
L_800E4CF0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800E4CF0
L_800E4CF4:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800E4CF4
  if (crb(c,1)) { goto L_800E4D1C; } // 800E4CF8
  c->r[4]=sraw(c,c->r[3],3); // 800E4CFC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800E4D00
  c->r[4]=c->r[21]+c->r[4]; // 800E4D04
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 800E4D08
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800E4D0C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E4D10
  c->r[0]=c->r[3]|c->r[0]; // 800E4D14
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800E4D18
L_800E4D1C:;
  c->r[3]=c->r[30]+c->r[28]; // 800E4D1C
  c->r[31]=c->r[31]+0x00000001u; // 800E4D20
  W32(c->r[3]+0x00000018u,c->r[27]); // 800E4D24
  cmps(c,0,(int32_t)c->r[31],32); // 800E4D28
  c->r[28]=c->r[28]+0x00000004u; // 800E4D2C
  W32(c->r[3]+0x00000098u,c->r[27]); // 800E4D30
  if (crb(c,0)) { IRQCHK(c); goto L_800E4B40; } // 800E4D34
  c->r[0]=0u+0x00000000u; // 800E4D38
  W8(c->r[30]+0x0000011Cu,c->r[0]); // 800E4D3C
  goto L_800E4D88; // 800E4D40
L_800E4D44:;
  c->r[0]=0u+0x00000001u; // 800E4D44
  W8(c->r[30]+0x0000011Cu,c->r[0]); // 800E4D48
  goto L_800E4D88; // 800E4D4C
L_800E4D50:;
  c->lr=0x800E4D54u; f_80323304(c); // 800E4D50
  c->r[3]=c->r[3]+0x000006B4u; // 800E4D54
  c->lr=0x800E4D5Cu; f_802A083C(c); // 800E4D58
  {uint32_t ea=c->r[2]+0xFFFFA638u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4D5C
  fcmp(c,0,c->f[1],c->f[0]); // 800E4D60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E4D64
  if (!crb(c,2)) { goto L_800E4D80; } // 800E4D68
  c->r[0]=0u+0x00000000u; // 800E4D6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E4D70
  c->r[3]=c->r[1]+0x00000008u; // 800E4D74
  c->lr=0x800E4D7Cu; f_80046D50(c); // 800E4D78
  c->lr=0x800E4D80u; f_8008CC20(c); // 800E4D7C
L_800E4D80:;
  c->r[0]=0u+0x00000000u; // 800E4D80
  W8(c->r[30]+0x0000011Cu,c->r[0]); // 800E4D84
L_800E4D88:;
  c->r[11]=c->r[1]+0x00000060u; // 800E4D88
  c->lr=0x800E4D90u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E4D8C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E4D90
  c->lr=c->r[0]; // 800E4D94
  c->r[1]=c->r[1]+0x00000060u; // 800E4D98
  return; // 800E4D9C
}

// fn_800E4DA0
void f_800E4DA0(Ctx* __restrict c) {
  trace_call(0x800E4DA0u);
  c->r[3]=0u+0x00000023u; // 800E4DA0
  return; // 800E4DA4
}

// fn_800E4DA8
void f_800E4DA8(Ctx* __restrict c) {
  trace_call(0x800E4DA8u);
  c->r[3]=0u+0x800E0000u; // 800E4DA8
  c->r[3]=c->r[3]+0x00004DBCu; // 800E4DAC
  return; // 800E4DB0
}

// fn_800E4DB4
void f_800E4DB4(Ctx* __restrict c) {
  trace_call(0x800E4DB4u);
  W32(c->r[3]+0x00000118u,c->r[4]); // 800E4DB4
  return; // 800E4DB8
}

// fn_800E4DBC
void f_800E4DBC(Ctx* __restrict c) {
  trace_call(0x800E4DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4DBC
  c->r[0]=c->lr; // 800E4DC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E4DC4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4DC8
  c->r[26]=c->r[4]|c->r[4]; // 800E4DCC
  c->r[27]=c->r[5]|c->r[5]; // 800E4DD0
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E4DD4
  c->r[0]=c->r[3]+0xB3BA0000u; // 800E4DD8
  cmpu(c,0,c->r[0],0x00004C47u); // 800E4DDC
  if (crb(c,2)) { goto L_800E4DEC; } // 800E4DE0
  c->r[3]=0u+0x00000001u; // 800E4DE4
  goto L_800E4E94; // 800E4DE8
L_800E4DEC:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E4DEC
  cmps(c,0,(int32_t)c->r[0],0); // 800E4DF0
  if (crb(c,2)) { goto L_800E4E00; } // 800E4DF4
  c->r[3]=0u+0x00000001u; // 800E4DF8
  goto L_800E4E94; // 800E4DFC
L_800E4E00:;
  c->r[28]=0u+0x00000000u; // 800E4E00
  c->r[29]=R32(c->r[4]+0x00000008u); // 800E4E04
  c->r[30]=c->r[28]|c->r[28]; // 800E4E08
  c->r[31]=0u+0x00000000u; // 800E4E0C
L_800E4E10:;
  W8(c->r[1]+0x00000014u,c->r[30]); // 800E4E10
  c->r[3]=c->r[1]+0x00000014u; // 800E4E14
  c->lr=0x800E4E1Cu; f_8004E9D8(c); // 800E4E18
  c->r[3]=c->r[3]+c->r[31]; // 800E4E1C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800E4E20
  cmps(c,0,(int32_t)c->r[0],0); // 800E4E24
  if (!crb(c,0)) { goto L_800E4E60; } // 800E4E28
  c->r[30]=0u+0x00000000u; // 800E4E2C
  W8(c->r[1]+0x00000010u,c->r[30]); // 800E4E30
  c->r[3]=c->r[1]+0x00000010u; // 800E4E34
  c->lr=0x800E4E3Cu; f_8004E9D8(c); // 800E4E38
  c->r[3]=c->r[3]+c->r[31]; // 800E4E3C
  W32(c->r[3]+0x00000018u,c->r[27]); // 800E4E40
  c->r[3]=c->r[1]+0x0000000Cu; // 800E4E44
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800E4E48
  c->r[30]=R32(c->r[26]+c->r[29]); // 800E4E4C
  c->lr=0x800E4E54u; f_8004E9D8(c); // 800E4E50
  c->r[3]=c->r[3]+c->r[31]; // 800E4E54
  W32(c->r[3]+0x00000098u,c->r[30]); // 800E4E58
  goto L_800E4E70; // 800E4E5C
L_800E4E60:;
  c->r[28]=c->r[28]+0x00000001u; // 800E4E60
  c->r[31]=c->r[31]+0x00000004u; // 800E4E64
  cmps(c,0,(int32_t)c->r[28],32); // 800E4E68
  if (crb(c,0)) { IRQCHK(c); goto L_800E4E10; } // 800E4E6C
L_800E4E70:;
  c->r[0]=0u+0x00000000u; // 800E4E70
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E4E74
  c->r[3]=c->r[1]+0x00000008u; // 800E4E78
  c->lr=0x800E4E80u; f_8004E9D8(c); // 800E4E7C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800E4E80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4E84
  c->ctr=c->r[12]; // 800E4E88
  if (true) { c->lr=0x800E4E90u; dispatch(c,c->ctr); } // 800E4E8C
  c->r[3]=0u+0x00000001u; // 800E4E90
L_800E4E94:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4E94
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E4E98
  c->lr=c->r[0]; // 800E4E9C
  c->r[1]=c->r[1]+0x00000030u; // 800E4EA0
  return; // 800E4EA4
}

// fn_800E4EA8
void f_800E4EA8(Ctx* __restrict c) {
  trace_call(0x800E4EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4EA8
  c->r[0]=c->lr; // 800E4EAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E4EB0
  c->r[11]=c->r[1]+0x00000030u; // 800E4EB4
  c->lr=0x800E4EBCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E4EB8
  cmps(c,0,(int32_t)c->r[7],3); // 800E4EBC
  c->r[28]=c->r[3]|c->r[3]; // 800E4EC0
  c->r[29]=c->r[4]|c->r[4]; // 800E4EC4
  c->r[30]=c->r[5]|c->r[5]; // 800E4EC8
  c->r[31]=c->r[8]|c->r[8]; // 800E4ECC
  if (crb(c,2)) { goto L_800E4F90; } // 800E4ED0
  c->r[4]=c->r[31]|c->r[31]; // 800E4ED4
  c->r[5]=c->r[7]|c->r[7]; // 800E4ED8
  c->r[3]=c->r[1]+0x00000010u; // 800E4EDC
  c->lr=0x800E4EE4u; f_8013E99C(c); // 800E4EE0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4EE4
  if (crb(c,2)) { goto L_800E4F40; } // 800E4EE8
  cmps(c,0,(int32_t)c->r[31],0); // 800E4EEC
  if (crb(c,2)) { goto L_800E4F40; } // 800E4EF0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E4EF4
  c->r[3]=c->r[28]|c->r[28]; // 800E4EF8
  {uint32_t ea=c->r[13]+0xFFFF84C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4EFC
  c->r[5]=c->r[29]|c->r[29]; // 800E4F00
  c->r[6]=c->r[30]|c->r[30]; // 800E4F04
  c->lr=0x800E4F0Cu; f_800E4FA8(c); // 800E4F08
  c->r[0]=0u+0x00000000u; // 800E4F0C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800E4F10
  c->r[3]=c->r[1]+0x0000000Cu; // 800E4F14
  c->lr=0x800E4F1Cu; f_800474F4(c); // 800E4F18
  c->r[4]=R32(c->r[1]+0x00000018u); // 800E4F1C
  c->r[5]=c->r[29]|c->r[29]; // 800E4F20
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4F24
  c->r[6]=0u+0xFFFFFFFFu; // 800E4F28
  c->r[7]=0u+0x00000000u; // 800E4F2C
  c->r[8]=0u+0x00000000u; // 800E4F30
  c->r[9]=0u+0x00000001u; // 800E4F34
  c->lr=0x800E4F3Cu; f_8004BFE0(c); // 800E4F38
  goto L_800E4F90; // 800E4F3C
L_800E4F40:;
  c->r[4]=0u+0x80690000u; // 800E4F40
  {uint32_t ea=c->r[13]+0xFFFF84C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4F44
  c->r[4]=c->r[4]+0xFFFFEB40u; // 800E4F48
  c->r[3]=c->r[28]|c->r[28]; // 800E4F4C
  c->r[5]=c->r[29]|c->r[29]; // 800E4F50
  c->r[6]=c->r[30]|c->r[30]; // 800E4F54
  c->r[31]=c->r[4]+0x0000000Du; // 800E4F58
  c->lr=0x800E4F60u; f_800E4FA8(c); // 800E4F5C
  c->r[0]=0u+0x00000000u; // 800E4F60
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E4F64
  c->r[3]=c->r[1]+0x00000008u; // 800E4F68
  c->lr=0x800E4F70u; f_800474F4(c); // 800E4F6C
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E4F70
  c->r[4]=c->r[31]|c->r[31]; // 800E4F74
  c->r[5]=c->r[29]|c->r[29]; // 800E4F78
  c->r[6]=0u+0xFFFFFFFFu; // 800E4F7C
  c->r[7]=0u+0x00000000u; // 800E4F80
  c->r[8]=0u+0x00000000u; // 800E4F84
  c->r[9]=0u+0x00000001u; // 800E4F88
  c->lr=0x800E4F90u; f_8004BFE0(c); // 800E4F8C
L_800E4F90:;
  c->r[11]=c->r[1]+0x00000030u; // 800E4F90
  c->lr=0x800E4F98u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E4F94
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E4F98
  c->lr=c->r[0]; // 800E4F9C
  c->r[1]=c->r[1]+0x00000030u; // 800E4FA0
  return; // 800E4FA4
}

// fn_800E4FA8
void f_800E4FA8(Ctx* __restrict c) {
  trace_call(0x800E4FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4FA8
  c->r[0]=c->lr; // 800E4FAC
  W32(c->r[1]+0x00000104u,c->r[0]); // 800E4FB0
  c->r[11]=c->r[1]+0x000000E0u; // 800E4FB4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 800E4FB8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 800E4FBC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 800E4FC0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 800E4FC4
  c->lr=0x800E4FCCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E4FC8
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 800E4FCC
  c->f[30]=c->f[1]; // 800E4FD0
  c->r[28]=c->r[4]|c->r[4]; // 800E4FD4
  c->r[29]=c->r[5]|c->r[5]; // 800E4FD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E4FDC
  c->r[30]=c->r[6]|c->r[6]; // 800E4FE0
  if (!crb(c,2)) { goto L_800E5014; } // 800E4FE4
  c->r[31]=0u+0x80730000u; // 800E4FE8
  c->r[3]=c->r[31]+0x00002598u; // 800E4FEC
  c->lr=0x800E4FF4u; f_80321014(c); // 800E4FF0
  c->r[4]=0u+0x80320000u; // 800E4FF4
  c->r[5]=0u+0x80750000u; // 800E4FF8
  c->r[3]=c->r[31]+0x00002598u; // 800E4FFC
  c->r[4]=c->r[4]+0x0000116Cu; // 800E5000
  c->r[5]=c->r[5]+0x00003A28u; // 800E5004
  c->lr=0x800E500Cu; f_803A92B8(c); // 800E5008
  c->r[0]=0u+0x00000001u; // 800E500C
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 800E5010
L_800E5014:;
  c->r[4]=0u+0x80730000u; // 800E5014
  c->r[5]=c->r[28]|c->r[28]; // 800E5018
  c->r[3]=c->r[1]+0x0000008Cu; // 800E501C
  c->r[6]=0u+0x00000001u; // 800E5020
  c->r[4]=c->r[4]+0x00002598u; // 800E5024
  c->lr=0x800E502Cu; f_80321B90(c); // 800E5028
  c->r[3]=c->r[1]+0x0000008Cu; // 800E502C
  c->lr=0x800E5034u; f_80320BEC(c); // 800E5030
  cmps(c,0,(int32_t)c->r[3],0); // 800E5034
  if (!crb(c,2)) { goto L_800E5044; } // 800E5038
  c->r[3]=0u+0x00000000u; // 800E503C
  goto L_800E52BC; // 800E5040
L_800E5044:;
  c->r[4]=c->r[30]|c->r[30]; // 800E5044
  c->r[3]=c->r[1]+0x00000080u; // 800E5048
  c->lr=0x800E5050u; f_8005CD7C(c); // 800E504C
  c->lr=0x800E5054u; f_8033FE4C(c); // 800E5050
  c->r[4]=c->r[1]+0x00000044u; // 800E5054
  {uint32_t ea=c->r[3]+0x00000138u; psq_load(c,1,ea,0,0);} // 800E5058
  {uint32_t ea=c->r[3]+0x0000012Cu; psq_load(c,0,ea,0,0);} // 800E505C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800E5060
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E5064
  {uint32_t ea=c->r[3]+0x00000140u; psq_load(c,1,ea,1,0);} // 800E5068
  {uint32_t ea=c->r[3]+0x00000134u; psq_load(c,0,ea,1,0);} // 800E506C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800E5070
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800E5074
  c->r[5]=0u+0x806A0000u; // 800E5078
  c->r[3]=c->r[1]+0x00000050u; // 800E507C
  c->r[5]=c->r[5]+0x00000AA8u; // 800E5080
  c->lr=0x800E5088u; f_8030E0BC(c); // 800E5084
  c->r[3]=c->r[1]+0x00000050u; // 800E5088
  c->r[4]=c->r[1]+0x00000038u; // 800E508C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800E5090
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800E5094
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E5098
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800E509C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800E50A0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800E50A4
  c->r[3]=c->r[1]+0x0000005Cu; // 800E50A8
  c->lr=0x800E50B0u; f_8005CD7C(c); // 800E50AC
  c->r[3]=c->r[1]+0x0000005Cu; // 800E50B0
  c->r[4]=c->r[1]+0x0000002Cu; // 800E50B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800E50B8
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 800E50BC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E50C0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800E50C4
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 800E50C8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800E50CC
  c->r[3]=c->r[1]+0x00000068u; // 800E50D0
  c->lr=0x800E50D8u; f_8005CD7C(c); // 800E50D4
  c->r[3]=c->r[1]+0x00000068u; // 800E50D8
  c->r[4]=c->r[1]+0x00000074u; // 800E50DC
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 800E50E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800E50E4
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800E50E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E50EC
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 800E50F0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 800E50F4
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800E50F8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800E50FC
  c->r[4]=0u+0x80760000u; // 800E5100
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 800E5104
  c->r[3]=c->r[1]+0x00000080u; // 800E5108
  {uint32_t ea=c->r[2]+0xFFFFA644u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E510C
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,30,ea,0,0);} // 800E5110
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 800E5114
  {double t0=S(c->f[30]*c->f[0]), t1=S(c->ps1[30]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800E5118
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E511C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[30]); c->f[0]=t0; c->ps1[0]=t1;} // 800E5120
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E5124
  {double t0=S(std::fma(c->f[30],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[30],c->ps1[0],c->ps1[0])); c->f[30]=t0; c->ps1[30]=t1;} // 800E5128
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E512C
  fcmp(c,0,c->f[30],c->f[0]); // 800E5130
  if (!crb(c,1)) { goto L_800E5140; } // 800E5134
  c->f[30]=c->f[0]; // 800E5138
  goto L_800E5150; // 800E513C
L_800E5140:;
  {uint32_t ea=c->r[2]+0xFFFFA648u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5140
  fcmp(c,0,c->f[30],c->f[0]); // 800E5144
  if (!crb(c,0)) { goto L_800E5150; } // 800E5148
  c->f[30]=c->f[0]; // 800E514C
L_800E5150:;
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5150
  c->r[0]=0u+0x00000000u; // 800E5154
  fcmp(c,0,c->f[30],c->f[0]); // 800E5158
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E515C
  if (!crb(c,2)) { goto L_800E5178; } // 800E5160
  {uint32_t ea=c->r[2]+0xFFFFA648u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5164
  fcmp(c,0,c->f[30],c->f[0]); // 800E5168
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E516C
  if (!crb(c,2)) { goto L_800E5178; } // 800E5170
  c->r[0]=0u+0x00000001u; // 800E5174
L_800E5178:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E5178
  if (!crb(c,2)) { goto L_800E519C; } // 800E517C
  c->r[3]=0u+0x806D0000u; // 800E5180
  c->r[5]=0u+0x806D0000u; // 800E5184
  c->r[3]=c->r[3]+0xFFFFE414u; // 800E5188
  c->r[4]=0u+0x000000EFu; // 800E518C
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 800E5190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E5194
  c->lr=0x800E519Cu; f_80484708(c); // 800E5198
L_800E519C:;
  c->f[1]=c->f[30]; // 800E519C
  c->lr=0x800E51A4u; f_803BA740(c); // 800E51A0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800E51A4
  fcmp(c,0,c->f[0],c->f[31]); // 800E51A8
  c->r[0]=c->cr; // 800E51AC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800E51B0
  if (!crb(c,2)) { goto L_800E51D8; } // 800E51B4
  c->r[4]=0u+0x80760000u; // 800E51B8
  c->r[3]=c->r[4]+0xFFFF9CA8u; // 800E51BC
  {uint32_t ea=c->r[4]+0xFFFF9CA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E51C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E51C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E51C8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 800E51CC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 800E51D0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800E51D4
L_800E51D8:;
  c->r[0]=R8(c->r[13]+0xFFFFBCC0u); // 800E51D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E51DC
  if (!crb(c,2)) { goto L_800E5208; } // 800E51E0
  c->r[4]=0u+0x80740000u; // 800E51E4
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E51E8
  c->r[3]=c->r[4]+0x00007490u; // 800E51EC
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E51F0
  c->r[0]=0u+0x00000001u; // 800E51F4
  {uint32_t ea=c->r[4]+0x00007490u; WF32(ea,c->f[1]);} // 800E51F8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800E51FC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800E5200
  W8(c->r[13]+0xFFFFBCC0u,c->r[0]); // 800E5204
L_800E5208:;
  c->r[31]=0u+0x806A0000u; // 800E5208
  c->r[3]=c->r[1]+0x00000008u; // 800E520C
  c->r[4]=c->r[1]+0x00000080u; // 800E5210
  c->r[5]=c->r[31]+0x00000AA8u; // 800E5214
  c->lr=0x800E521Cu; f_8030E0BC(c); // 800E5218
  c->r[3]=0u+0x80740000u; // 800E521C
  c->r[4]=c->r[1]+0x00000014u; // 800E5220
  c->r[3]=c->r[3]+0x00007490u; // 800E5224
  c->r[5]=c->r[1]+0x00000008u; // 800E5228
  c->lr=0x800E5230u; f_8005FE58(c); // 800E522C
  c->r[3]=c->r[1]+0x00000014u; // 800E5230
  c->r[5]=c->r[31]+0x00000AA8u; // 800E5234
  c->r[4]=c->r[3]|c->r[3]; // 800E5238
  c->lr=0x800E5240u; f_8030E0BC(c); // 800E523C
  c->r[3]=c->r[1]+0x00000008u; // 800E5240
  c->r[4]=c->r[1]+0x00000020u; // 800E5244
  c->r[5]=c->r[1]+0x00000014u; // 800E5248
  c->lr=0x800E5250u; f_8005FE58(c); // 800E524C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 800E5250
  c->r[3]=c->r[1]+0x0000008Cu; // 800E5254
  {uint32_t ea=c->r[1]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 800E5258
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800E525C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 800E5260
  {uint32_t ea=c->r[1]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 800E5264
  {uint32_t ea=c->r[1]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E5268
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E526C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800E5270
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E5274
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E5278
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E527C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5280
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[11]);} // 800E5284
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[10]);} // 800E5288
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[9]);} // 800E528C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[8]);} // 800E5290
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[7]);} // 800E5294
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[6]);} // 800E5298
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[5]);} // 800E529C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[4]);} // 800E52A0
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 800E52A4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 800E52A8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 800E52AC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 800E52B0
  c->lr=0x800E52B8u; f_80320A28(c); // 800E52B4
  c->r[3]=0u+0x00000001u; // 800E52B8
L_800E52BC:;
  c->r[11]=c->r[1]+0x000000E0u; // 800E52BC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 800E52C0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 800E52C4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 800E52C8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 800E52CC
  c->lr=0x800E52D4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E52D0
  c->r[0]=R32(c->r[1]+0x00000104u); // 800E52D4
  c->lr=c->r[0]; // 800E52D8
  c->r[1]=c->r[1]+0x00000100u; // 800E52DC
  return; // 800E52E0
}

// fn_800E52E4
void f_800E52E4(Ctx* __restrict c) {
  trace_call(0x800E52E4u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E52E4
  c->r[0]=c->lr; // 800E52E8
  W32(c->r[1]+0x00000154u,c->r[0]); // 800E52EC
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[31]);} // 800E52F0
  c->f[31]=c->f[1]; // 800E52F4
  {uint32_t ea=c->r[1]+0x0000012Cu; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E52F8
  c->r[25]=c->r[3]|c->r[3]; // 800E52FC
  c->r[26]=c->r[4]|c->r[4]; // 800E5300
  c->r[27]=c->r[5]|c->r[5]; // 800E5304
  c->r[28]=c->r[6]|c->r[6]; // 800E5308
  c->r[29]=c->r[7]|c->r[7]; // 800E530C
  c->r[0]=R8(c->r[13]+0xFFFFBC0Au); // 800E5310
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E5314
  if (!crb(c,2)) { goto L_800E535C; } // 800E5318
  c->r[30]=0u+0x80740000u; // 800E531C
  c->r[3]=c->r[30]+0x000047D8u; // 800E5320
  c->lr=0x800E5328u; f_80317EFC(c); // 800E5324
  c->r[6]=0u+0x806D0000u; // 800E5328
  c->r[4]=0u+0x80050000u; // 800E532C
  c->r[6]=c->r[6]+0xFFFFCA68u; // 800E5330
  c->r[3]=c->r[30]+0x000047D8u; // 800E5334
  c->r[0]=c->r[6]+0x00000028u; // 800E5338
  c->r[5]=0u+0x80750000u; // 800E533C
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800E5340
  c->r[4]=c->r[4]+0x0000074Cu; // 800E5344
  c->r[5]=c->r[5]+0x00003A50u; // 800E5348
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E534C
  c->lr=0x800E5354u; f_803A92B8(c); // 800E5350
  c->r[0]=0u+0x00000001u; // 800E5354
  W8(c->r[13]+0xFFFFBC0Au,c->r[0]); // 800E5358
L_800E535C:;
  c->r[31]=0u+0x80740000u; // 800E535C
  c->r[4]=0u+0x80740000u; // 800E5360
  c->r[0]=0u+0x00000005u; // 800E5364
  c->r[3]=0u+0x00000000u; // 800E5368
  c->r[31]=c->r[31]+0x000047D8u; // 800E536C
  c->r[4]=c->r[4]+0x00005180u; // 800E5370
  c->ctr=c->r[0]; // 800E5374
L_800E5378:;
  c->r[5]=c->r[31]+c->r[3]; // 800E5378
  c->r[0]=R32(c->r[5]+0x000000ACu); // 800E537C
  cmps(c,0,(int32_t)c->r[0],0); // 800E5380
  if (!crb(c,2)) { goto L_800E5398; } // 800E5384
  c->r[3]=0u+0x80740000u; // 800E5388
  c->r[3]=c->r[3]+0x00005180u; // 800E538C
  W32(c->r[5]+0x000000ACu,c->r[3]); // 800E5390
  goto L_800E53A8; // 800E5394
L_800E5398:;
  cmpu(c,0,c->r[0],c->r[4]); // 800E5398
  if (crb(c,2)) { goto L_800E53A8; } // 800E539C
  c->r[3]=c->r[3]+0x00000004u; // 800E53A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E5378; } // 800E53A4
L_800E53A8:;
  c->r[0]=R8(c->r[13]+0xFFFFBC30u); // 800E53A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E53AC
  if (!crb(c,2)) { goto L_800E53E0; } // 800E53B0
  c->r[30]=0u+0x80740000u; // 800E53B4
  c->r[3]=c->r[30]+0x00004D40u; // 800E53B8
  c->lr=0x800E53C0u; f_80052DF0(c); // 800E53BC
  c->r[4]=0u+0x80040000u; // 800E53C0
  c->r[5]=0u+0x80750000u; // 800E53C4
  c->r[3]=c->r[30]+0x00004D40u; // 800E53C8
  c->r[4]=c->r[4]+0x000055F4u; // 800E53CC
  c->r[5]=c->r[5]+0x00003A38u; // 800E53D0
  c->lr=0x800E53D8u; f_803A92B8(c); // 800E53D4
  c->r[0]=0u+0x00000001u; // 800E53D8
  W8(c->r[13]+0xFFFFBC30u,c->r[0]); // 800E53DC
L_800E53E0:;
  c->r[3]=0u+0x80740000u; // 800E53E0
  c->r[4]=0u+0x00000458u; // 800E53E4
  c->r[3]=c->r[3]+0x00004D40u; // 800E53E8
  c->lr=0x800E53F0u; f_8005BFB0(c); // 800E53EC
  cmps(c,0,(int32_t)c->r[3],0); // 800E53F0
  c->r[30]=c->r[3]|c->r[3]; // 800E53F4
  if (crb(c,2)) { goto L_800E5400; } // 800E53F8
  c->lr=0x800E5400u; f_800E5E50(c); // 800E53FC
L_800E5400:;
  c->r[0]=0u+0x00000F7Du; // 800E5400
  W32(c->r[30]+0x000000F4u,c->r[0]); // 800E5404
  c->r[0]=0u+0x00000000u; // 800E5408
  c->r[3]=0u+0x80740000u; // 800E540C
  W32(c->r[30]+0x000000F8u,c->r[0]); // 800E5410
  c->r[3]=c->r[3]+0x00005180u; // 800E5414
  c->r[0]=c->r[31]+0x000000D8u; // 800E5418
  cmps(c,0,(int32_t)c->r[30],0); // 800E541C
  c->r[0]=c->r[3]-c->r[0]; // 800E5420
  W32(c->r[30]+0x00000060u,c->r[3]); // 800E5424
  c->r[0]=cntlz(c->r[0]); // 800E5428
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E542C
  W8(c->r[30]+0x0000005Cu,c->r[0]); // 800E5430
  if (crb(c,2)) { goto L_800E5478; } // 800E5434
  c->r[6]=R8(c->r[31]+0x000000D4u); // 800E5438
  c->r[3]=c->r[31]|c->r[31]; // 800E543C
  c->r[4]=c->r[25]|c->r[25]; // 800E5440
  c->r[5]=c->r[30]|c->r[30]; // 800E5444
  c->lr=0x800E544Cu; f_80318C10(c); // 800E5448
  cmps(c,0,(int32_t)c->r[3],0); // 800E544C
  if (!crb(c,2)) { goto L_800E5478; } // 800E5450
  cmps(c,0,(int32_t)c->r[30],0); // 800E5454
  if (crb(c,2)) { goto L_800E5474; } // 800E5458
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800E545C
  c->r[3]=c->r[30]|c->r[30]; // 800E5460
  c->r[4]=0u+0x00000001u; // 800E5464
  c->r[12]=R32(c->r[12]+0x00000008u); // 800E5468
  c->ctr=c->r[12]; // 800E546C
  if (true) { c->lr=0x800E5474u; dispatch(c,c->ctr); } // 800E5470
L_800E5474:;
  c->r[30]=0u+0x00000000u; // 800E5474
L_800E5478:;
  W32(c->r[30]+0x000003E4u,c->r[28]); // 800E5478
  c->r[3]=c->r[30]|c->r[30]; // 800E547C
  c->r[4]=c->r[26]|c->r[26]; // 800E5480
  W32(c->r[30]+0x000003E8u,c->r[29]); // 800E5484
  {uint32_t ea=c->r[30]+0x000003D0u; WF32(ea,c->f[31]);} // 800E5488
  c->lr=0x800E5490u; f_800E720C(c); // 800E548C
  c->r[4]=c->r[25]|c->r[25]; // 800E5490
  c->r[3]=c->r[30]+0x00000415u; // 800E5494
  c->lr=0x800E549Cu; f_803B37C0(c); // 800E5498
  cmps(c,0,(int32_t)c->r[27],0); // 800E549C
  if (!crb(c,2)) { goto L_800E54E4; } // 800E54A0
  c->r[0]=R8(c->r[13]+0xFFFFBD68u); // 800E54A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E54A8
  if (!crb(c,2)) { goto L_800E54C8; } // 800E54AC
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 800E54B0
  c->r[0]=0u+0x00000001u; // 800E54B4
  W32(c->r[13]+0xFFFFBD64u,c->r[3]); // 800E54B8
  c->r[3]=c->r[3]+0x00000001u; // 800E54BC
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 800E54C0
  W8(c->r[13]+0xFFFFBD68u,c->r[0]); // 800E54C4
L_800E54C8:;
  c->r[12]=R32(c->r[30]+0x000000FCu); // 800E54C8
  c->r[3]=c->r[30]+0x000000FCu; // 800E54CC
  c->r[4]=R32(c->r[13]+0xFFFFBD64u); // 800E54D0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E54D4
  c->ctr=c->r[12]; // 800E54D8
  if (true) { c->lr=0x800E54E0u; dispatch(c,c->ctr); } // 800E54DC
  c->lr=0x800E54E4u; f_802E89E8(c); // 800E54E0
L_800E54E4:;
  c->r[26]=0u+0x80690000u; // 800E54E4
  c->r[3]=0u+0x80740000u; // 800E54E8
  c->r[4]=c->r[26]+0xFFFFEB58u; // 800E54EC
  c->r[6]=0u+0x00000000u; // 800E54F0
  c->r[3]=c->r[3]+0x00004FD0u; // 800E54F4
  c->r[5]=c->r[4]+0x0000000Du; // 800E54F8
  c->lr=0x800E5500u; f_8005A7B0(c); // 800E54FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E5500
  if (crb(c,2)) { goto L_800E55A4; } // 800E5504
  c->r[4]=c->r[3]|c->r[3]; // 800E5508
  c->r[3]=c->r[1]+0x00000018u; // 800E550C
  c->lr=0x800E5514u; f_802D8E94(c); // 800E5510
  c->r[4]=c->r[26]+0xFFFFEB58u; // 800E5514
  c->r[3]=c->r[1]+0x00000018u; // 800E5518
  c->r[4]=c->r[4]+0x00000025u; // 800E551C
  c->lr=0x800E5524u; f_802D8F80(c); // 800E5520
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800E5524
  W32(c->r[1]+0x00000008u,c->r[3]); // 800E5528
  W32(c->r[1]+0x00000010u,c->r[3]); // 800E552C
  c->r[3]=c->r[1]+0x00000010u; // 800E5530
  W32(c->r[1]+0x00000014u,c->r[4]); // 800E5534
  c->lr=0x800E553Cu; f_802D90E0(c); // 800E5538
  c->r[26]=c->r[3]|c->r[3]; // 800E553C
  c->r[27]=0u+0x00000000u; // 800E5540
  goto L_800E559C; // 800E5544
L_800E5548:;
  c->r[4]=c->r[27]|c->r[27]; // 800E5548
  c->r[3]=c->r[1]+0x00000010u; // 800E554C
  c->r[5]=0u+0x00000000u; // 800E5550
  c->lr=0x800E5558u; f_802D927C(c); // 800E5554
  c->r[4]=c->r[3]|c->r[3]; // 800E5558
  c->r[3]=c->r[1]+0x00000028u; // 800E555C
  c->lr=0x800E5564u; f_803B37C0(c); // 800E5560
  c->r[3]=c->r[1]+0x00000028u; // 800E5564
  c->lr=0x800E556Cu; f_803BAA50(c); // 800E5568
  c->r[3]=c->r[25]|c->r[25]; // 800E556C
  c->r[4]=c->r[1]+0x00000028u; // 800E5570
  c->lr=0x800E5578u; f_803B4278(c); // 800E5574
  cmps(c,0,(int32_t)c->r[3],0); // 800E5578
  if (crb(c,2)) { goto L_800E5598; } // 800E557C
  c->r[4]=c->r[27]|c->r[27]; // 800E5580
  c->r[3]=c->r[1]+0x00000010u; // 800E5584
  c->r[5]=0u+0x00000001u; // 800E5588
  c->lr=0x800E5590u; f_802D916C(c); // 800E558C
  W32(c->r[30]+0x000003ECu,c->r[3]); // 800E5590
  goto L_800E55A4; // 800E5594
L_800E5598:;
  c->r[27]=c->r[27]+0x00000001u; // 800E5598
L_800E559C:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 800E559C
  if (crb(c,0)) { IRQCHK(c); goto L_800E5548; } // 800E55A0
L_800E55A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E55A4
  {uint32_t ea=c->r[1]+0x00000148u; c->f[31]=RF64(ea);} // 800E55A8
  {uint32_t ea=c->r[1]+0x0000012Cu; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E55AC
  c->r[0]=R32(c->r[1]+0x00000154u); // 800E55B0
  c->lr=c->r[0]; // 800E55B4
  c->r[1]=c->r[1]+0x00000150u; // 800E55B8
  return; // 800E55BC
}

// fn_800E55C0
void f_800E55C0(Ctx* __restrict c) {
  trace_call(0x800E55C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E55C0
  c->r[0]=c->lr; // 800E55C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E55C8
  c->r[0]=0u+0x00000000u; // 800E55CC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E55D0
  c->r[28]=c->r[3]|c->r[3]; // 800E55D4
  c->r[29]=c->r[4]|c->r[4]; // 800E55D8
  c->r[30]=c->r[5]|c->r[5]; // 800E55DC
  c->r[3]=c->r[1]+0x00000008u; // 800E55E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E55E4
  c->lr=0x800E55ECu; f_800E5700(c); // 800E55E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E55EC
  c->r[31]=c->r[3]|c->r[3]; // 800E55F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E55F4
  goto L_800E5654; // 800E55F8
L_800E55FC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E55FC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5600
  c->lr=0x800E5608u; f_800E56C0(c); // 800E5604
  cmps(c,0,(int32_t)c->r[3],0); // 800E5608
  if (crb(c,2)) { goto L_800E5648; } // 800E560C
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5610
  c->r[3]=c->r[1]+0x00000014u; // 800E5614
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5618
  c->r[4]=c->r[4]+0x000001B8u; // 800E561C
  c->lr=0x800E5624u; f_80060878(c); // 800E5620
  c->r[4]=c->r[28]|c->r[28]; // 800E5624
  c->r[3]=c->r[1]+0x00000014u; // 800E5628
  c->lr=0x800E5630u; f_800E5680(c); // 800E562C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5630
  if (crb(c,2)) { goto L_800E5648; } // 800E5634
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5638
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E563C
  W32(c->r[3]+0x000003E4u,c->r[29]); // 800E5640
  W32(c->r[3]+0x000003E8u,c->r[30]); // 800E5644
L_800E5648:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5648
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E564C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5650
L_800E5654:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5654
  c->r[3]=c->r[1]+0x00000010u; // 800E5658
  c->r[4]=c->r[1]+0x0000000Cu; // 800E565C
  c->lr=0x800E5664u; f_800E5778(c); // 800E5660
  cmps(c,0,(int32_t)c->r[3],0); // 800E5664
  if (!crb(c,2)) { IRQCHK(c); goto L_800E55FC; } // 800E5668
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E566C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5670
  c->lr=c->r[0]; // 800E5674
  c->r[1]=c->r[1]+0x00000030u; // 800E5678
  return; // 800E567C
}

// __eq__7Vector3CFRC7Vector3
void f_800E5680(Ctx* __restrict c) {
  trace_call(0x800E5680u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5680
  c->r[0]=0u+0x00000000u; // 800E5684
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5688
  fcmp(c,0,c->f[1],c->f[0]); // 800E568C
  if (!crb(c,2)) { goto L_800E56B8; } // 800E5690
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E5694
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5698
  fcmp(c,0,c->f[1],c->f[0]); // 800E569C
  if (!crb(c,2)) { goto L_800E56B8; } // 800E56A0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E56A4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E56A8
  fcmp(c,0,c->f[1],c->f[0]); // 800E56AC
  if (!crb(c,2)) { goto L_800E56B8; } // 800E56B0
  c->r[0]=0u+0x00000001u; // 800E56B4
L_800E56B8:;
  c->r[3]=c->r[0]|c->r[0]; // 800E56B8
  return; // 800E56BC
}

// fn_800E56C0
void f_800E56C0(Ctx* __restrict c) {
  trace_call(0x800E56C0u);
  c->r[0]=R8(c->r[13]+0xFFFFBFA0u); // 800E56C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E56C4
  if (!crb(c,2)) { goto L_800E56E8; } // 800E56C8
  c->r[5]=R32(c->r[13]+0xFFFFBE94u); // 800E56CC
  c->r[0]=0u+0x00000001u; // 800E56D0
  W32(c->r[13]+0xFFFFBE98u,c->r[5]); // 800E56D4
  c->r[4]=c->r[5]+0x00000001u; // 800E56D8
  W32(c->r[13]+0xFFFFBE94u,c->r[4]); // 800E56DC
  W32(c->r[13]+0xFFFFBF9Cu,c->r[5]); // 800E56E0
  W8(c->r[13]+0xFFFFBFA0u,c->r[0]); // 800E56E4
L_800E56E8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E56E8
  c->r[0]=R32(c->r[13]+0xFFFFBF9Cu); // 800E56EC
  c->r[0]=c->r[0]-c->r[3]; // 800E56F0
  c->r[0]=cntlz(c->r[0]); // 800E56F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E56F8
  return; // 800E56FC
}

// fn_800E5700
void f_800E5700(Ctx* __restrict c) {
  trace_call(0x800E5700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5700
  c->r[0]=c->lr; // 800E5704
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E570C
  c->r[0]=R8(c->r[13]+0xFFFFBFCEu); // 800E5710
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E5714
  if (!crb(c,2)) { goto L_800E575C; } // 800E5718
  c->r[31]=0u+0x80750000u; // 800E571C
  c->r[3]=c->r[31]+0xFFFF8290u; // 800E5720
  c->lr=0x800E5728u; f_800506C0(c); // 800E5724
  c->r[6]=0u+0x806D0000u; // 800E5728
  c->r[4]=0u+0x80080000u; // 800E572C
  c->r[6]=c->r[6]+0x00004DC0u; // 800E5730
  c->r[3]=c->r[31]+0xFFFF8290u; // 800E5734
  c->r[0]=c->r[6]+0x00000008u; // 800E5738
  c->r[5]=0u+0x80750000u; // 800E573C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E5740
  c->r[4]=c->r[4]+0x00004A70u; // 800E5744
  c->r[5]=c->r[5]+0x00003A44u; // 800E5748
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E574C
  c->lr=0x800E5754u; f_803A92B8(c); // 800E5750
  c->r[0]=0u+0x00000001u; // 800E5754
  W8(c->r[13]+0xFFFFBFCEu,c->r[0]); // 800E5758
L_800E575C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E575C
  c->r[3]=0u+0x80750000u; // 800E5760
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5764
  c->r[3]=c->r[3]+0xFFFF8290u; // 800E5768
  c->lr=c->r[0]; // 800E576C
  c->r[1]=c->r[1]+0x00000010u; // 800E5770
  return; // 800E5774
}

// fn_800E5778
void f_800E5778(Ctx* __restrict c) {
  trace_call(0x800E5778u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800E5778
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E577C
  c->r[4]=R32(c->r[5]+0x00000008u); // 800E5780
  c->r[0]=R32(c->r[3]+0x00000008u); // 800E5784
  c->r[3]=c->r[0]-c->r[4]; // 800E5788
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800E578C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800E5790
  return; // 800E5794
}

// fn_800E5798
void f_800E5798(Ctx* __restrict c) {
  trace_call(0x800E5798u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5798
  c->r[0]=c->lr; // 800E579C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E57A0
  c->r[0]=0u+0x00000000u; // 800E57A4
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E57A8
  c->r[30]=c->r[3]|c->r[3]; // 800E57AC
  c->r[3]=c->r[1]+0x00000008u; // 800E57B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E57B4
  c->lr=0x800E57BCu; f_800E5700(c); // 800E57B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E57BC
  c->r[31]=c->r[3]|c->r[3]; // 800E57C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E57C4
  goto L_800E5820; // 800E57C8
L_800E57CC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E57CC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E57D0
  c->lr=0x800E57D8u; f_800E56C0(c); // 800E57D4
  cmps(c,0,(int32_t)c->r[3],0); // 800E57D8
  if (crb(c,2)) { goto L_800E5814; } // 800E57DC
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E57E0
  c->r[3]=c->r[1]+0x00000014u; // 800E57E4
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E57E8
  c->r[4]=c->r[4]+0x000001B8u; // 800E57EC
  c->lr=0x800E57F4u; f_80060878(c); // 800E57F0
  c->r[4]=c->r[30]|c->r[30]; // 800E57F4
  c->r[3]=c->r[1]+0x00000014u; // 800E57F8
  c->lr=0x800E5800u; f_800E5680(c); // 800E57FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E5800
  if (crb(c,2)) { goto L_800E5814; } // 800E5804
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5808
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E580C
  c->lr=0x800E5814u; f_8031749C(c); // 800E5810
L_800E5814:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5814
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5818
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E581C
L_800E5820:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5820
  c->r[3]=c->r[1]+0x00000010u; // 800E5824
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5828
  c->lr=0x800E5830u; f_800E5778(c); // 800E582C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5830
  if (!crb(c,2)) { IRQCHK(c); goto L_800E57CC; } // 800E5834
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5838
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E583C
  c->lr=c->r[0]; // 800E5840
  c->r[1]=c->r[1]+0x00000030u; // 800E5844
  return; // 800E5848
}

// fn_800E584C
void f_800E584C(Ctx* __restrict c) {
  trace_call(0x800E584Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E584C
  c->r[0]=c->lr; // 800E5850
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5854
  c->r[0]=0u+0x00000000u; // 800E5858
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E585C
  c->r[30]=c->r[3]|c->r[3]; // 800E5860
  c->r[3]=c->r[1]+0x00000008u; // 800E5864
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5868
  c->lr=0x800E5870u; f_800E5700(c); // 800E586C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5870
  c->r[31]=c->r[3]|c->r[3]; // 800E5874
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5878
  goto L_800E58B4; // 800E587C
L_800E5880:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5880
  c->r[4]=c->r[30]|c->r[30]; // 800E5884
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5888
  c->r[3]=c->r[3]+0x00000415u; // 800E588C
  c->lr=0x800E5894u; f_803BA9B0(c); // 800E5890
  cmps(c,0,(int32_t)c->r[3],0); // 800E5894
  if (!crb(c,2)) { goto L_800E58A8; } // 800E5898
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E589C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E58A0
  c->lr=0x800E58A8u; f_8031749C(c); // 800E58A4
L_800E58A8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E58A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E58AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E58B0
L_800E58B4:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E58B4
  c->r[3]=c->r[1]+0x00000010u; // 800E58B8
  c->r[4]=c->r[1]+0x0000000Cu; // 800E58BC
  c->lr=0x800E58C4u; f_800E5778(c); // 800E58C0
  cmps(c,0,(int32_t)c->r[3],0); // 800E58C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5880; } // 800E58C8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E58CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E58D0
  c->lr=c->r[0]; // 800E58D4
  c->r[1]=c->r[1]+0x00000020u; // 800E58D8
  return; // 800E58DC
}

// fn_800E58E0
void f_800E58E0(Ctx* __restrict c) {
  trace_call(0x800E58E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E58E0
  c->r[0]=c->lr; // 800E58E4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E58E8
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E58EC
  c->r[26]=c->r[3]|c->r[3]; // 800E58F0
  c->r[27]=c->r[4]|c->r[4]; // 800E58F4
  c->r[3]=c->r[1]+0x00000034u; // 800E58F8
  c->lr=0x800E5900u; f_800E5A44(c); // 800E58FC
  c->r[30]=0u+0x00000000u; // 800E5900
  W8(c->r[1]+0x00000008u,c->r[30]); // 800E5904
  c->r[3]=c->r[1]+0x00000008u; // 800E5908
  c->lr=0x800E5910u; f_800E5700(c); // 800E590C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5910
  c->r[31]=0u+0x806D0000u; // 800E5914
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5918
  c->r[28]=c->r[3]|c->r[3]; // 800E591C
  c->r[31]=c->r[31]+0x00007F08u; // 800E5920
  goto L_800E5A18; // 800E5924
L_800E5928:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5928
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E592C
  c->lr=0x800E5934u; f_800E56C0(c); // 800E5930
  cmps(c,0,(int32_t)c->r[3],0); // 800E5934
  if (crb(c,2)) { goto L_800E5A0C; } // 800E5938
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E593C
  c->r[3]=c->r[1]+0x00000028u; // 800E5940
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5944
  c->r[4]=c->r[4]+0x000001B8u; // 800E5948
  c->lr=0x800E5950u; f_80060878(c); // 800E594C
  c->r[4]=c->r[26]|c->r[26]; // 800E5950
  c->r[3]=c->r[1]+0x00000028u; // 800E5954
  c->lr=0x800E595Cu; f_800E5680(c); // 800E5958
  cmps(c,0,(int32_t)c->r[3],0); // 800E595C
  if (crb(c,2)) { goto L_800E5A0C; } // 800E5960
  cmps(c,0,(int32_t)c->r[27],0); // 800E5964
  if (crb(c,2)) { goto L_800E597C; } // 800E5968
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E596C
  c->r[4]=c->r[27]|c->r[27]; // 800E5970
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5974
  c->lr=0x800E597Cu; f_800E720C(c); // 800E5978
L_800E597C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E597C
  c->r[4]=R32(c->r[3]+0x00000008u); // 800E5980
  cmps(c,0,(int32_t)c->r[4],0); // 800E5984
  if (crb(c,2)) { goto L_800E5990; } // 800E5988
  c->r[4]=c->r[4]+0x00000020u; // 800E598C
L_800E5990:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800E5990
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E5994
  W32(c->r[1]+0x00000018u,c->r[3]); // 800E5998
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E599C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800E59A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E59A4
  c->lr=0x800E59ACu; f_80065650(c); // 800E59A8
  c->r[3]=0u+0x0000002Cu; // 800E59AC
  c->lr=0x800E59B4u; f_800625D8(c); // 800E59B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E59B4
  c->r[29]=c->r[3]|c->r[3]; // 800E59B8
  if (crb(c,2)) { goto L_800E59DC; } // 800E59BC
  c->r[4]=0u+0x00000000u; // 800E59C0
  c->lr=0x800E59C8u; f_8006264C(c); // 800E59C4
  W32(c->r[29]+0x00000010u,c->r[31]); // 800E59C8
  c->r[3]=c->r[29]+0x0000001Cu; // 800E59CC
  W32(c->r[29]+0x00000014u,c->r[30]); // 800E59D0
  W32(c->r[29]+0x00000018u,c->r[30]); // 800E59D4
  c->lr=0x800E59DCu; f_800E5A44(c); // 800E59D8
L_800E59DC:;
  c->r[3]=c->r[29]+0x00000014u; // 800E59DC
  c->r[4]=c->r[1]+0x00000020u; // 800E59E0
  c->lr=0x800E59E8u; f_80053568(c); // 800E59E4
  c->r[3]=c->r[29]+0x0000001Cu; // 800E59E8
  c->r[4]=c->r[1]+0x00000034u; // 800E59EC
  c->lr=0x800E59F4u; f_8005E4EC(c); // 800E59F0
  W8(c->r[29]+0x00000028u,c->r[30]); // 800E59F4
  c->r[3]=c->r[29]|c->r[29]; // 800E59F8
  c->r[12]=R32(c->r[29]+0x00000010u); // 800E59FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5A00
  c->ctr=c->r[12]; // 800E5A04
  if (true) { c->lr=0x800E5A0Cu; dispatch(c,c->ctr); } // 800E5A08
L_800E5A0C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5A0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5A10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5A14
L_800E5A18:;
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 800E5A18
  c->r[3]=c->r[1]+0x00000010u; // 800E5A1C
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5A20
  c->lr=0x800E5A28u; f_800E5778(c); // 800E5A24
  cmps(c,0,(int32_t)c->r[3],0); // 800E5A28
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5928; } // 800E5A2C
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5A30
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E5A34
  c->lr=c->r[0]; // 800E5A38
  c->r[1]=c->r[1]+0x00000060u; // 800E5A3C
  return; // 800E5A40
}

// fn_800E5A44
void f_800E5A44(Ctx* __restrict c) {
  trace_call(0x800E5A44u);
  c->r[0]=R8(c->r[13]+0xFFFFC3B4u); // 800E5A44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E5A48
  if (!crb(c,2)) { goto L_800E5A6C; } // 800E5A4C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800E5A50
  c->r[0]=0u+0x00000001u; // 800E5A54
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800E5A58
  c->r[4]=c->r[5]+0x00000001u; // 800E5A5C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800E5A60
  W32(c->r[13]+0xFFFFC3B0u,c->r[5]); // 800E5A64
  W8(c->r[13]+0xFFFFC3B4u,c->r[0]); // 800E5A68
L_800E5A6C:;
  c->r[5]=R32(c->r[13]+0xFFFFC3B0u); // 800E5A6C
  c->r[4]=c->r[13]+0xFFFF84C8u; // 800E5A70
  c->r[0]=0u+0x00000000u; // 800E5A74
  W32(c->r[3]+0x00000000u,c->r[5]); // 800E5A78
  W32(c->r[3]+0x00000004u,c->r[4]); // 800E5A7C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800E5A80
  return; // 800E5A84
}

// fn_800E5A88
void f_800E5A88(Ctx* __restrict c) {
  trace_call(0x800E5A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5A88
  c->r[0]=c->lr; // 800E5A8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5A90
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5A94
  c->r[30]=c->r[3]|c->r[3]; // 800E5A98
  c->r[0]=R8(c->r[3]+0x00000028u); // 800E5A9C
  cmps(c,0,(int32_t)c->r[0],0); // 800E5AA0
  if (crb(c,2)) { goto L_800E5B00; } // 800E5AA4
  c->r[0]=0u+0x00000000u; // 800E5AA8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5AAC
  c->r[3]=c->r[1]+0x00000008u; // 800E5AB0
  c->lr=0x800E5AB8u; f_80065678(c); // 800E5AB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5AB8
  c->r[31]=c->r[3]|c->r[3]; // 800E5ABC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5AC0
  goto L_800E5AE4; // 800E5AC4
L_800E5AC8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5AC8
  c->r[4]=c->r[30]+0x0000001Cu; // 800E5ACC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5AD0
  c->lr=0x800E5AD8u; f_8006550C(c); // 800E5AD4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5AD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5ADC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5AE0
L_800E5AE4:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5AE4
  c->r[3]=c->r[1]+0x00000010u; // 800E5AE8
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5AEC
  c->lr=0x800E5AF4u; f_8006576C(c); // 800E5AF0
  cmps(c,0,(int32_t)c->r[3],0); // 800E5AF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5AC8; } // 800E5AF8
  goto L_800E5B24; // 800E5AFC
L_800E5B00:;
  c->r[3]=c->r[3]+0x00000014u; // 800E5B00
  c->lr=0x800E5B08u; f_800655F4(c); // 800E5B04
  cmps(c,0,(int32_t)c->r[3],0); // 800E5B08
  if (crb(c,2)) { goto L_800E5B24; } // 800E5B0C
  c->r[3]=c->r[30]+0x00000014u; // 800E5B10
  c->lr=0x800E5B18u; f_80046E94(c); // 800E5B14
  c->r[3]=R32(c->r[3]+0x00000004u); // 800E5B18
  c->r[4]=c->r[30]+0x0000001Cu; // 800E5B1C
  c->lr=0x800E5B24u; f_8006550C(c); // 800E5B20
L_800E5B24:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5B28
  c->lr=c->r[0]; // 800E5B2C
  c->r[1]=c->r[1]+0x00000020u; // 800E5B30
  return; // 800E5B34
}

// fn_800E5B38
void f_800E5B38(Ctx* __restrict c) {
  trace_call(0x800E5B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5B38
  c->r[0]=c->lr; // 800E5B3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5B40
  c->r[0]=0u+0x00000000u; // 800E5B44
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5B48
  c->r[28]=c->r[3]|c->r[3]; // 800E5B4C
  c->r[29]=c->r[4]|c->r[4]; // 800E5B50
  c->r[30]=c->r[5]|c->r[5]; // 800E5B54
  c->r[3]=c->r[1]+0x00000008u; // 800E5B58
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5B5C
  c->lr=0x800E5B64u; f_800E5700(c); // 800E5B60
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5B64
  c->r[31]=c->r[3]|c->r[3]; // 800E5B68
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5B6C
  goto L_800E5BD0; // 800E5B70
L_800E5B74:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5B74
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5B78
  c->lr=0x800E5B80u; f_800E56C0(c); // 800E5B7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5B80
  if (crb(c,2)) { goto L_800E5BC4; } // 800E5B84
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5B88
  c->r[3]=c->r[1]+0x00000014u; // 800E5B8C
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5B90
  c->r[4]=c->r[4]+0x000001B8u; // 800E5B94
  c->lr=0x800E5B9Cu; f_80060878(c); // 800E5B98
  c->r[4]=c->r[28]|c->r[28]; // 800E5B9C
  c->r[3]=c->r[1]+0x00000014u; // 800E5BA0
  c->lr=0x800E5BA8u; f_800E5680(c); // 800E5BA4
  cmps(c,0,(int32_t)c->r[3],0); // 800E5BA8
  if (crb(c,2)) { goto L_800E5BC4; } // 800E5BAC
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5BB0
  c->r[4]=c->r[29]|c->r[29]; // 800E5BB4
  c->r[5]=c->r[30]|c->r[30]; // 800E5BB8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5BBC
  c->lr=0x800E5BC4u; f_800E7250(c); // 800E5BC0
L_800E5BC4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5BC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5BC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5BCC
L_800E5BD0:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5BD0
  c->r[3]=c->r[1]+0x00000010u; // 800E5BD4
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5BD8
  c->lr=0x800E5BE0u; f_800E5778(c); // 800E5BDC
  cmps(c,0,(int32_t)c->r[3],0); // 800E5BE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5B74; } // 800E5BE4
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5BE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5BEC
  c->lr=c->r[0]; // 800E5BF0
  c->r[1]=c->r[1]+0x00000030u; // 800E5BF4
  return; // 800E5BF8
}

// fn_800E5BFC
void f_800E5BFC(Ctx* __restrict c) {
  trace_call(0x800E5BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5BFC
  c->r[0]=c->lr; // 800E5C00
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5C04
  c->r[0]=0u+0x00000000u; // 800E5C08
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800E5C0C
  c->f[31]=c->f[1]; // 800E5C10
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5C14
  c->r[30]=c->r[3]|c->r[3]; // 800E5C18
  c->r[3]=c->r[1]+0x00000008u; // 800E5C1C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5C20
  c->lr=0x800E5C28u; f_800E5700(c); // 800E5C24
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5C28
  c->r[31]=c->r[3]|c->r[3]; // 800E5C2C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5C30
  goto L_800E5C90; // 800E5C34
L_800E5C38:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5C38
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5C3C
  c->lr=0x800E5C44u; f_800E56C0(c); // 800E5C40
  cmps(c,0,(int32_t)c->r[3],0); // 800E5C44
  if (crb(c,2)) { goto L_800E5C84; } // 800E5C48
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5C4C
  c->r[3]=c->r[1]+0x00000014u; // 800E5C50
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5C54
  c->r[4]=c->r[4]+0x000001B8u; // 800E5C58
  c->lr=0x800E5C60u; f_80060878(c); // 800E5C5C
  c->r[4]=c->r[30]|c->r[30]; // 800E5C60
  c->r[3]=c->r[1]+0x00000014u; // 800E5C64
  c->lr=0x800E5C6Cu; f_800E5680(c); // 800E5C68
  cmps(c,0,(int32_t)c->r[3],0); // 800E5C6C
  if (crb(c,2)) { goto L_800E5C84; } // 800E5C70
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5C74
  c->f[1]=c->f[31]; // 800E5C78
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5C7C
  c->lr=0x800E5C84u; f_800E74EC(c); // 800E5C80
L_800E5C84:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5C84
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5C88
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5C8C
L_800E5C90:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5C90
  c->r[3]=c->r[1]+0x00000010u; // 800E5C94
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5C98
  c->lr=0x800E5CA0u; f_800E5778(c); // 800E5C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5CA0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5C38; } // 800E5CA4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800E5CA8
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5CAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5CB0
  c->lr=c->r[0]; // 800E5CB4
  c->r[1]=c->r[1]+0x00000030u; // 800E5CB8
  return; // 800E5CBC
}

// fn_800E5CC0
void f_800E5CC0(Ctx* __restrict c) {
  trace_call(0x800E5CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5CC0
  c->r[0]=c->lr; // 800E5CC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5CC8
  c->r[0]=0u+0x00000000u; // 800E5CCC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5CD0
  c->r[29]=c->r[3]|c->r[3]; // 800E5CD4
  c->r[30]=c->r[4]|c->r[4]; // 800E5CD8
  c->r[3]=c->r[1]+0x00000008u; // 800E5CDC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5CE0
  c->lr=0x800E5CE8u; f_800E5700(c); // 800E5CE4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5CE8
  c->r[31]=c->r[3]|c->r[3]; // 800E5CEC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5CF0
  goto L_800E5D50; // 800E5CF4
L_800E5CF8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5CF8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5CFC
  c->lr=0x800E5D04u; f_800E56C0(c); // 800E5D00
  cmps(c,0,(int32_t)c->r[3],0); // 800E5D04
  if (crb(c,2)) { goto L_800E5D44; } // 800E5D08
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5D0C
  c->r[3]=c->r[1]+0x00000014u; // 800E5D10
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5D14
  c->r[4]=c->r[4]+0x000001B8u; // 800E5D18
  c->lr=0x800E5D20u; f_80060878(c); // 800E5D1C
  c->r[4]=c->r[29]|c->r[29]; // 800E5D20
  c->r[3]=c->r[1]+0x00000014u; // 800E5D24
  c->lr=0x800E5D2Cu; f_800E5680(c); // 800E5D28
  cmps(c,0,(int32_t)c->r[3],0); // 800E5D2C
  if (crb(c,2)) { goto L_800E5D44; } // 800E5D30
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5D34
  c->r[4]=c->r[30]|c->r[30]; // 800E5D38
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5D3C
  c->lr=0x800E5D44u; f_800E720C(c); // 800E5D40
L_800E5D44:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5D44
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5D48
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5D4C
L_800E5D50:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5D50
  c->r[3]=c->r[1]+0x00000010u; // 800E5D54
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5D58
  c->lr=0x800E5D60u; f_800E5778(c); // 800E5D5C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5D60
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5CF8; } // 800E5D64
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5D68
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5D6C
  c->lr=c->r[0]; // 800E5D70
  c->r[1]=c->r[1]+0x00000030u; // 800E5D74
  return; // 800E5D78
}

// fn_800E5D7C
void f_800E5D7C(Ctx* __restrict c) {
  trace_call(0x800E5D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5D7C
  c->r[0]=c->lr; // 800E5D80
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E5D84
  c->r[0]=0u+0x00000000u; // 800E5D88
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5D8C
  c->r[29]=c->r[3]|c->r[3]; // 800E5D90
  c->r[30]=c->r[4]|c->r[4]; // 800E5D94
  c->r[3]=c->r[1]+0x00000008u; // 800E5D98
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E5D9C
  c->lr=0x800E5DA4u; f_800E5700(c); // 800E5DA0
  c->r[4]=R32(c->r[3]+0x00000000u); // 800E5DA4
  c->r[0]=cntlz(c->r[30]); // 800E5DA8
  W32(c->r[1]+0x00000010u,c->r[4]); // 800E5DAC
  c->r[30]=c->r[3]|c->r[3]; // 800E5DB0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E5DB4
  goto L_800E5E14; // 800E5DB8
L_800E5DBC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5DBC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5DC0
  c->lr=0x800E5DC8u; f_800E56C0(c); // 800E5DC4
  cmps(c,0,(int32_t)c->r[3],0); // 800E5DC8
  if (crb(c,2)) { goto L_800E5E08; } // 800E5DCC
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5DD0
  c->r[3]=c->r[1]+0x00000014u; // 800E5DD4
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E5DD8
  c->r[4]=c->r[4]+0x000001B8u; // 800E5DDC
  c->lr=0x800E5DE4u; f_80060878(c); // 800E5DE0
  c->r[4]=c->r[29]|c->r[29]; // 800E5DE4
  c->r[3]=c->r[1]+0x00000014u; // 800E5DE8
  c->lr=0x800E5DF0u; f_800E5680(c); // 800E5DEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E5DF0
  if (crb(c,2)) { goto L_800E5E08; } // 800E5DF4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5DF8
  c->r[4]=c->r[31]|c->r[31]; // 800E5DFC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800E5E00
  c->lr=0x800E5E08u; f_800E71CC(c); // 800E5E04
L_800E5E08:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800E5E08
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5E0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5E10
L_800E5E14:;
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800E5E14
  c->r[3]=c->r[1]+0x00000010u; // 800E5E18
  c->r[4]=c->r[1]+0x0000000Cu; // 800E5E1C
  c->lr=0x800E5E24u; f_800E5778(c); // 800E5E20
  cmps(c,0,(int32_t)c->r[3],0); // 800E5E24
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5DBC; } // 800E5E28
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5E2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E5E30
  c->lr=c->r[0]; // 800E5E34
  c->r[1]=c->r[1]+0x00000030u; // 800E5E38
  return; // 800E5E3C
}

// fn_800E5E40
void f_800E5E40(Ctx* __restrict c) {
  trace_call(0x800E5E40u);
  c->r[3]=c->r[3]+0x0000001Cu; // 800E5E40
  return; // 800E5E44
}

// fn_800E5E48
void f_800E5E48(Ctx* __restrict c) {
  trace_call(0x800E5E48u);
  c->r[3]=c->r[3]+0x00000014u; // 800E5E48
  return; // 800E5E4C
}

// fn_800E5E50
void f_800E5E50(Ctx* __restrict c) {
  trace_call(0x800E5E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5E50
  c->r[0]=c->lr; // 800E5E54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E5E58
  c->r[11]=c->r[1]+0x00000040u; // 800E5E5C
  c->lr=0x800E5E64u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E5E60
  c->r[27]=c->r[3]|c->r[3]; // 800E5E64
  c->r[30]=0u+0x80690000u; // 800E5E68
  c->r[31]=c->r[27]|c->r[27]; // 800E5E6C
  c->r[29]=c->r[27]|c->r[27]; // 800E5E70
  c->r[30]=c->r[30]+0xFFFFEB88u; // 800E5E74
  c->lr=0x800E5E7Cu; f_800E69E8(c); // 800E5E78
  c->r[4]=0u+0x806D0000u; // 800E5E7C
  c->r[28]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[28]); // 800E5E80
  c->r[0]=0u+0x00000000u; // 800E5E84
  W32(c->r[27]+0x00000000u,c->r[3]); // 800E5E88
  c->r[4]=c->r[4]+0x000038C0u; // 800E5E8C
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800E5E90
  W32(c->r[27]+0x00000004u,c->r[0]); // 800E5E94
  W32(c->r[27]+0x00000008u,c->r[0]); // 800E5E98
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800E5E9C
  W8(c->r[27]+0x00000010u,c->r[0]); // 800E5EA0
  W32(c->r[27]+0x00000014u,c->r[0]); // 800E5EA4
  W32(c->r[27]+0x00000018u,c->r[0]); // 800E5EA8
  W32(c->r[27]+0x00000020u,c->r[0]); // 800E5EAC
  W32(c->r[27]+0x00000024u,c->r[0]); // 800E5EB0
  if (crb(c,2)) { goto L_800E5EBC; } // 800E5EB4
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 800E5EB8
L_800E5EBC:;
  c->lr=0x800E5EC0u; f_800797AC(c); // 800E5EBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5EC0
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800E5EC4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E5EC8
  if (!crb(c,2)) { goto L_800E5ED8; } // 800E5ECC
  c->r[0]=0u+0x00000001u; // 800E5ED0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E5ED4
L_800E5ED8:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E5ED8
  c->r[5]=0u+0x0000012Cu; // 800E5EDC
  c->r[4]=c->r[6]+0x00000001u; // 800E5EE0
  c->r[0]=divwu(c->r[4],c->r[5]); // 800E5EE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800E5EE8
  c->r[7]=c->r[4]-c->r[0]; // 800E5EEC
  goto L_800E5F3C; // 800E5EF0
L_800E5EF4:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800E5EF4
  c->r[4]=c->r[3]+c->r[0]; // 800E5EF8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E5EFC
  cmps(c,0,(int32_t)c->r[0],0); // 800E5F00
  if (!crb(c,2)) { goto L_800E5F2C; } // 800E5F04
  W32(c->r[3]+0x00000004u,c->r[7]); // 800E5F08
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5F0C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800E5F10
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 800E5F14
  c->r[4]=R32(c->r[3]+0x00000000u); // 800E5F18
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5F1C
  W32(c->r[1]+0x00000010u,c->r[4]); // 800E5F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5F24
  goto L_800E5F58; // 800E5F28
L_800E5F2C:;
  c->r[4]=c->r[7]+0x00000001u; // 800E5F2C
  c->r[0]=divwu(c->r[4],c->r[5]); // 800E5F30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800E5F34
  c->r[7]=c->r[4]-c->r[0]; // 800E5F38
L_800E5F3C:;
  cmpu(c,0,c->r[7],c->r[6]); // 800E5F3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800E5EF4; } // 800E5F40
  c->r[0]=0u+0x00000000u; // 800E5F44
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E5F48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800E5F4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E5F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5F54
L_800E5F58:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800E5F58
  c->r[25]=c->r[27]+0x00000028u; // 800E5F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5F60
  c->r[3]=c->r[25]|c->r[25]; // 800E5F64
  W32(c->r[1]+0x00000008u,c->r[4]); // 800E5F68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E5F6C
  W32(c->r[27]+0x00000020u,c->r[4]); // 800E5F70
  W32(c->r[27]+0x00000024u,c->r[0]); // 800E5F74
  c->lr=0x800E5F7Cu; f_800506C0(c); // 800E5F78
  cmps(c,0,(int32_t)c->r[25],0); // 800E5F7C
  c->r[3]=c->r[25]|c->r[25]; // 800E5F80
  if (crb(c,2)) { goto L_800E5F8C; } // 800E5F84
  c->r[3]=c->r[25]+0xFFFFFFD8u; // 800E5F88
L_800E5F8C:;
  c->r[28]=0u+0x00000001u; // 800E5F8C
  W32(c->r[25]+0x00000008u,c->r[3]); // 800E5F90
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 800E5F94
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800E5F98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E5F9C
  if (!crb(c,2)) { goto L_800E5FE0; } // 800E5FA0
  c->r[26]=0u+0x80740000u; // 800E5FA4
  c->r[3]=c->r[26]+0x000074BCu; // 800E5FA8
  c->lr=0x800E5FB0u; f_800506C0(c); // 800E5FAC
  c->r[6]=0u+0x806D0000u; // 800E5FB0
  c->r[4]=0u+0x80060000u; // 800E5FB4
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800E5FB8
  c->r[3]=c->r[26]+0x000074BCu; // 800E5FBC
  c->r[0]=c->r[6]+0x00000008u; // 800E5FC0
  c->r[5]=0u+0x80750000u; // 800E5FC4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E5FC8
  c->r[4]=c->r[4]+0x000057D4u; // 800E5FCC
  c->r[5]=c->r[5]+0x00003A9Cu; // 800E5FD0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E5FD4
  c->lr=0x800E5FDCu; f_803A92B8(c); // 800E5FD8
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 800E5FDC
L_800E5FE0:;
  c->r[3]=0u+0x80740000u; // 800E5FE0
  c->r[5]=c->r[25]|c->r[25]; // 800E5FE4
  c->r[3]=c->r[3]+0x000074BCu; // 800E5FE8
  c->r[4]=c->r[3]|c->r[3]; // 800E5FEC
  c->lr=0x800E5FF4u; f_802DDCA8(c); // 800E5FF0
  c->r[25]=c->r[27]+0x00000038u; // 800E5FF4
  c->r[3]=c->r[25]|c->r[25]; // 800E5FF8
  c->lr=0x800E6000u; f_800506C0(c); // 800E5FFC
  cmps(c,0,(int32_t)c->r[25],0); // 800E6000
  c->r[0]=c->r[25]|c->r[25]; // 800E6004
  if (crb(c,2)) { goto L_800E6010; } // 800E6008
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 800E600C
L_800E6010:;
  c->r[28]=c->r[27]+0x00000044u; // 800E6010
  W32(c->r[25]+0x00000008u,c->r[0]); // 800E6014
  c->r[3]=c->r[28]|c->r[28]; // 800E6018
  c->lr=0x800E6020u; f_800506C0(c); // 800E601C
  cmps(c,0,(int32_t)c->r[28],0); // 800E6020
  c->r[0]=c->r[28]|c->r[28]; // 800E6024
  if (crb(c,2)) { goto L_800E6030; } // 800E6028
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 800E602C
L_800E6030:;
  c->r[3]=0u+0x806F0000u; // 800E6030
  c->r[26]=0u+0x00000000u; // 800E6034
  c->r[3]=c->r[3]+0x00000E80u; // 800E6038
  W32(c->r[28]+0x00000008u,c->r[0]); // 800E603C
  W8(c->r[28]+0x0000000Cu,c->r[26]); // 800E6040
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800E6044
  W32(c->r[27]+0x00000058u,c->r[26]); // 800E6048
  W32(c->r[27]+0x00000064u,c->r[26]); // 800E604C
  c->lr=0x800E6054u; f_8007BDCC(c); // 800E6050
  c->r[0]=c->r[13]+0xFFFF8114u; // 800E6054
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800E6058
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800E605C
  W32(c->r[27]+0x000000A4u,c->r[26]); // 800E6060
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800E6064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6068
  if (!crb(c,2)) { goto L_800E608C; } // 800E606C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800E6070
  c->r[0]=0u+0x00000001u; // 800E6074
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800E6078
  c->r[3]=c->r[4]+0x00000001u; // 800E607C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800E6080
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800E6084
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800E6088
L_800E608C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE50u); // 800E608C
  c->r[0]=c->r[13]+0xFFFF8110u; // 800E6090
  c->r[26]=0u+0x00000000u; // 800E6094
  W32(c->r[27]+0x000000A8u,c->r[3]); // 800E6098
  W32(c->r[27]+0x000000ACu,c->r[0]); // 800E609C
  W32(c->r[27]+0x000000B0u,c->r[26]); // 800E60A0
  c->lr=0x800E60A8u; f_80076D18(c); // 800E60A4
  c->r[0]=c->r[13]+0xFFFF810Cu; // 800E60A8
  W32(c->r[27]+0x000000B4u,c->r[3]); // 800E60AC
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800E60B0
  W32(c->r[27]+0x000000BCu,c->r[26]); // 800E60B4
  c->lr=0x800E60BCu; f_80076CB0(c); // 800E60B8
  c->r[0]=c->r[13]+0xFFFF8108u; // 800E60BC
  W32(c->r[27]+0x000000C0u,c->r[3]); // 800E60C0
  W32(c->r[27]+0x000000C4u,c->r[0]); // 800E60C4
  W32(c->r[27]+0x000000C8u,c->r[26]); // 800E60C8
  c->lr=0x800E60D0u; f_80076CE4(c); // 800E60CC
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800E60D0
  c->r[0]=c->r[13]+0xFFFF8104u; // 800E60D4
  c->r[3]=c->r[27]+0x000000D8u; // 800E60D8
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800E60DC
  W32(c->r[27]+0x000000D4u,c->r[26]); // 800E60E0
  c->lr=0x800E60E8u; f_800506C0(c); // 800E60E4
  c->r[4]=0u+0x806F0000u; // 800E60E8
  c->r[3]=0u+0x00000006u; // 800E60EC
  c->r[4]=c->r[4]+0x000007A0u; // 800E60F0
  c->r[28]=c->r[27]+0x000000FCu; // 800E60F4
  c->r[0]=c->r[4]+0x00000024u; // 800E60F8
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800E60FC
  c->r[3]=c->r[28]+0x0000000Cu; // 800E6100
  W32(c->r[27]+0x000000ECu,c->r[26]); // 800E6104
  W32(c->r[27]+0x000000F8u,c->r[26]); // 800E6108
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800E610C
  W32(c->r[27]+0x00000100u,c->r[0]); // 800E6110
  c->lr=0x800E6118u; f_800506C0(c); // 800E6114
  c->r[3]=c->r[28]+0x00000018u; // 800E6118
  c->lr=0x800E6120u; f_800506C0(c); // 800E611C
  W32(c->r[28]+0x00000024u,c->r[26]); // 800E6120
  c->r[3]=c->r[28]+0x000000B0u; // 800E6124
  c->lr=0x800E612Cu; f_800506C0(c); // 800E6128
  c->r[12]=R32(c->r[28]+0x00000000u); // 800E612C
  c->r[3]=c->r[28]|c->r[28]; // 800E6130
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800E6134
  c->ctr=c->r[12]; // 800E6138
  if (true) { c->lr=0x800E6140u; dispatch(c,c->ctr); } // 800E613C
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800E6140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6144
  if (!crb(c,2)) { goto L_800E6164; } // 800E6148
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800E614C
  c->r[0]=0u+0x00000001u; // 800E6150
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800E6154
  c->r[3]=c->r[3]+0x00000001u; // 800E6158
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800E615C
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800E6160
L_800E6164:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800E6164
  c->r[5]=0u+0x806F0000u; // 800E6168
  c->r[5]=c->r[5]+0x000007F8u; // 800E616C
  c->r[0]=0u+0x00000032u; // 800E6170
  c->r[4]=c->r[5]+0x00000024u; // 800E6174
  W32(c->r[28]+0x00000008u,c->r[3]); // 800E6178
  c->r[6]=0u+0x00000000u; // 800E617C
  c->r[3]=0u+0x00000000u; // 800E6180
  W32(c->r[28]+0x00000000u,c->r[5]); // 800E6184
  W32(c->r[28]+0x00000004u,c->r[4]); // 800E6188
  c->ctr=c->r[0]; // 800E618C
L_800E6190:;
  c->r[4]=c->r[28]+c->r[3]; // 800E6190
  c->r[3]=c->r[3]+0x00000004u; // 800E6194
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800E6198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E6190; } // 800E619C
  c->r[3]=0u+0x806D0000u; // 800E61A0
  c->r[7]=0u+0x00000000u; // 800E61A4
  c->r[3]=c->r[3]+0x00003868u; // 800E61A8
  c->r[0]=0u+0x0000000Au; // 800E61AC
  c->r[4]=c->r[3]+0x00000024u; // 800E61B0
  W32(c->r[28]+0x00000000u,c->r[3]); // 800E61B4
  c->r[8]=0u+0x00000000u; // 800E61B8
  c->r[3]=0u+0x00000000u; // 800E61BC
  W32(c->r[28]+0x00000004u,c->r[4]); // 800E61C0
  c->r[6]=0u+0xFFFFFFFFu; // 800E61C4
  W32(c->r[27]+0x00000314u,c->r[7]); // 800E61C8
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800E61CC
  W32(c->r[27]+0x00000054u,c->r[7]); // 800E61D0
  W32(c->r[27]+0x00000310u,c->r[27]); // 800E61D4
  c->ctr=c->r[0]; // 800E61D8
L_800E61DC:;
  c->r[5]=c->r[27]+c->r[3]; // 800E61DC
  c->r[4]=c->r[27]+c->r[8]; // 800E61E0
  W32(c->r[5]+0x00000068u,c->r[6]); // 800E61E4
  c->r[8]=c->r[8]+0x00000001u; // 800E61E8
  c->r[3]=c->r[3]+0x00000004u; // 800E61EC
  W8(c->r[4]+0x00000090u,c->r[7]); // 800E61F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E61DC; } // 800E61F4
  c->r[25]=c->r[27]+0x00000318u; // 800E61F8
  c->r[3]=c->r[25]|c->r[25]; // 800E61FC
  c->lr=0x800E6204u; f_800506C0(c); // 800E6200
  cmps(c,0,(int32_t)c->r[25],0); // 800E6204
  c->r[3]=c->r[25]|c->r[25]; // 800E6208
  if (crb(c,2)) { goto L_800E6214; } // 800E620C
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800E6210
L_800E6214:;
  c->r[26]=0u+0x00000001u; // 800E6214
  W32(c->r[25]+0x00000008u,c->r[3]); // 800E6218
  W8(c->r[25]+0x0000000Cu,c->r[26]); // 800E621C
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800E6220
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6224
  if (!crb(c,2)) { goto L_800E6268; } // 800E6228
  c->r[28]=0u+0x80750000u; // 800E622C
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800E6230
  c->lr=0x800E6238u; f_800506C0(c); // 800E6234
  c->r[6]=0u+0x806D0000u; // 800E6238
  c->r[4]=0u+0x80080000u; // 800E623C
  c->r[6]=c->r[6]+0x000038D8u; // 800E6240
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800E6244
  c->r[0]=c->r[6]+0x00000008u; // 800E6248
  c->r[5]=0u+0x80750000u; // 800E624C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E6250
  c->r[4]=c->r[4]+0xFFFF9844u; // 800E6254
  c->r[5]=c->r[5]+0x00003A90u; // 800E6258
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E625C
  c->lr=0x800E6264u; f_803A92B8(c); // 800E6260
  W8(c->r[13]+0xFFFFBE9Eu,c->r[26]); // 800E6264
L_800E6268:;
  c->r[3]=0u+0x80750000u; // 800E6268
  c->r[5]=c->r[25]|c->r[25]; // 800E626C
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800E6270
  c->r[4]=c->r[3]|c->r[3]; // 800E6274
  c->lr=0x800E627Cu; f_802DDCA8(c); // 800E6278
  c->r[3]=0u+0x806D0000u; // 800E627C
  c->r[28]=0u+0x00000000u; // 800E6280
  c->r[3]=c->r[3]+0xFFFFD974u; // 800E6284
  c->r[4]=0u+0xFFFFFFFFu; // 800E6288
  c->r[0]=0u+0x00000001u; // 800E628C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800E6290
  c->r[3]=c->r[27]+0x0000032Cu; // 800E6294
  W32(c->r[27]+0x00000328u,c->r[4]); // 800E6298
  W32(c->r[27]+0x000000ECu,c->r[0]); // 800E629C
  W32(c->r[27]+0x00000054u,c->r[28]); // 800E62A0
  W32(c->r[27]+0x00000314u,c->r[28]); // 800E62A4
  c->lr=0x800E62ACu; f_800E6AB0(c); // 800E62A8
  c->r[3]=0u+0x806D0000u; // 800E62AC
  c->r[4]=0u+0x806D0000u; // 800E62B0
  c->r[3]=c->r[3]+0xFFFFD908u; // 800E62B4
  c->r[26]=c->r[27]+0x00000378u; // 800E62B8
  c->r[0]=c->r[3]+0x00000044u; // 800E62BC
  c->r[4]=c->r[4]+0xFFFFE0C0u; // 800E62C0
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800E62C4
  c->r[3]=c->r[26]|c->r[26]; // 800E62C8
  W32(c->r[27]+0x00000330u,c->r[0]); // 800E62CC
  W32(c->r[27]+0x00000338u,c->r[28]); // 800E62D0
  W32(c->r[27]+0x0000033Cu,c->r[28]); // 800E62D4
  W32(c->r[27]+0x00000340u,c->r[28]); // 800E62D8
  W32(c->r[27]+0x00000374u,c->r[4]); // 800E62DC
  c->lr=0x800E62E4u; f_800506C0(c); // 800E62E0
  cmps(c,0,(int32_t)c->r[26],0); // 800E62E4
  c->r[0]=c->r[26]|c->r[26]; // 800E62E8
  if (crb(c,2)) { goto L_800E62F4; } // 800E62EC
  c->r[0]=c->r[26]+0xFFFFFFFCu; // 800E62F0
L_800E62F4:;
  c->r[25]=c->r[27]+0x00000384u; // 800E62F4
  W32(c->r[26]+0x00000008u,c->r[0]); // 800E62F8
  c->r[3]=c->r[25]|c->r[25]; // 800E62FC
  c->lr=0x800E6304u; f_800506C0(c); // 800E6300
  cmps(c,0,(int32_t)c->r[25],0); // 800E6304
  c->r[0]=c->r[25]|c->r[25]; // 800E6308
  if (crb(c,2)) { goto L_800E6314; } // 800E630C
  c->r[0]=c->r[25]+0xFFFFFFF0u; // 800E6310
L_800E6314:;
  W32(c->r[25]+0x00000008u,c->r[0]); // 800E6314
  c->r[3]=c->r[27]+0x00000394u; // 800E6318
  c->lr=0x800E6320u; f_800E6AB0(c); // 800E631C
  c->r[3]=0u+0x806D0000u; // 800E6320
  c->r[3]=c->r[3]+0xFFFFE058u; // 800E6324
  W32(c->r[27]+0x00000374u,c->r[3]); // 800E6328
  c->r[0]=c->r[3]+0x00000018u; // 800E632C
  W32(c->r[27]+0x00000398u,c->r[0]); // 800E6330
  c->r[0]=R8(c->r[13]+0xFFFFC3DCu); // 800E6334
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6338
  if (!crb(c,2)) { goto L_800E6358; } // 800E633C
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 800E6340
  c->r[0]=0u+0x00000001u; // 800E6344
  W32(c->r[13]+0xFFFFC3D8u,c->r[3]); // 800E6348
  c->r[3]=c->r[3]+0x00000001u; // 800E634C
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 800E6350
  W8(c->r[13]+0xFFFFC3DCu,c->r[0]); // 800E6354
L_800E6358:;
  c->r[3]=R32(c->r[13]+0xFFFFC3D8u); // 800E6358
  c->r[0]=0u+0x00000000u; // 800E635C
  W32(c->r[27]+0x0000039Cu,c->r[3]); // 800E6360
  c->r[4]=0u+0x00000001u; // 800E6364
  c->r[3]=R32(c->r[13]+0xFFFF84DCu); // 800E6368
  W32(c->r[27]+0x000003A0u,c->r[3]); // 800E636C
  W32(c->r[27]+0x00000390u,c->r[0]); // 800E6370
  W8(c->r[27]+0x000003A8u,c->r[4]); // 800E6374
  W32(c->r[27]+0x00000054u,c->r[30]); // 800E6378
  c->r[0]=R8(c->r[13]+0xFFFFC3D4u); // 800E637C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6380
  if (!crb(c,2)) { goto L_800E639C; } // 800E6384
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800E6388
  W32(c->r[13]+0xFFFFC3D0u,c->r[3]); // 800E638C
  c->r[0]=c->r[3]+0x00000001u; // 800E6390
  W32(c->r[13]+0xFFFFBC48u,c->r[0]); // 800E6394
  W8(c->r[13]+0xFFFFC3D4u,c->r[4]); // 800E6398
L_800E639C:;
  c->r[3]=R32(c->r[13]+0xFFFFC3D0u); // 800E639C
  c->r[0]=0u+0x00000000u; // 800E63A0
  c->r[26]=c->r[27]+0x000003ACu; // 800E63A4
  W32(c->r[27]+0x00000328u,c->r[3]); // 800E63A8
  c->r[3]=c->r[26]|c->r[26]; // 800E63AC
  W8(c->r[27]+0x00000334u,c->r[0]); // 800E63B0
  c->lr=0x800E63B8u; f_800506C0(c); // 800E63B4
  cmps(c,0,(int32_t)c->r[26],0); // 800E63B8
  c->r[3]=c->r[26]|c->r[26]; // 800E63BC
  if (crb(c,2)) { goto L_800E63C8; } // 800E63C0
  c->r[3]=c->r[26]+0xFFFFFC54u; // 800E63C4
L_800E63C8:;
  c->r[29]=0u+0x00000001u; // 800E63C8
  W32(c->r[26]+0x00000008u,c->r[3]); // 800E63CC
  W8(c->r[26]+0x0000000Cu,c->r[29]); // 800E63D0
  c->r[0]=R8(c->r[13]+0xFFFFBFCEu); // 800E63D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E63D8
  if (!crb(c,2)) { goto L_800E641C; } // 800E63DC
  c->r[28]=0u+0x80750000u; // 800E63E0
  c->r[3]=c->r[28]+0xFFFF8290u; // 800E63E4
  c->lr=0x800E63ECu; f_800506C0(c); // 800E63E8
  c->r[6]=0u+0x806D0000u; // 800E63EC
  c->r[4]=0u+0x80080000u; // 800E63F0
  c->r[6]=c->r[6]+0x00004DC0u; // 800E63F4
  c->r[3]=c->r[28]+0xFFFF8290u; // 800E63F8
  c->r[0]=c->r[6]+0x00000008u; // 800E63FC
  c->r[5]=0u+0x80750000u; // 800E6400
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E6404
  c->r[4]=c->r[4]+0x00004A70u; // 800E6408
  c->r[5]=c->r[5]+0x00003A78u; // 800E640C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6410
  c->lr=0x800E6418u; f_803A92B8(c); // 800E6414
  W8(c->r[13]+0xFFFFBFCEu,c->r[29]); // 800E6418
L_800E641C:;
  c->r[3]=0u+0x80750000u; // 800E641C
  c->r[5]=c->r[26]|c->r[26]; // 800E6420
  c->r[3]=c->r[3]+0xFFFF8290u; // 800E6424
  c->r[4]=c->r[3]|c->r[3]; // 800E6428
  c->lr=0x800E6430u; f_802DDCA8(c); // 800E642C
  c->r[26]=c->r[27]+0x000003BCu; // 800E6430
  c->r[3]=c->r[26]|c->r[26]; // 800E6434
  c->lr=0x800E643Cu; f_800506C0(c); // 800E6438
  cmps(c,0,(int32_t)c->r[26],0); // 800E643C
  c->r[3]=c->r[26]|c->r[26]; // 800E6440
  if (crb(c,2)) { goto L_800E644C; } // 800E6444
  c->r[3]=c->r[26]+0xFFFFFC44u; // 800E6448
L_800E644C:;
  c->r[29]=0u+0x00000001u; // 800E644C
  W32(c->r[26]+0x00000008u,c->r[3]); // 800E6450
  W8(c->r[26]+0x0000000Cu,c->r[29]); // 800E6454
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800E6458
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E645C
  if (!crb(c,2)) { goto L_800E64A0; } // 800E6460
  c->r[28]=0u+0x80750000u; // 800E6464
  c->r[3]=c->r[28]+0xFFFF8158u; // 800E6468
  c->lr=0x800E6470u; f_800506C0(c); // 800E646C
  c->r[6]=0u+0x806D0000u; // 800E6470
  c->r[4]=0u+0x80080000u; // 800E6474
  c->r[6]=c->r[6]+0x000038F0u; // 800E6478
  c->r[3]=c->r[28]+0xFFFF8158u; // 800E647C
  c->r[0]=c->r[6]+0x00000008u; // 800E6480
  c->r[5]=0u+0x80750000u; // 800E6484
  W32(c->r[3]+0x00000010u,c->r[6]); // 800E6488
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800E648C
  c->r[5]=c->r[5]+0x00003A84u; // 800E6490
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E6494
  c->lr=0x800E649Cu; f_803A92B8(c); // 800E6498
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 800E649C
L_800E64A0:;
  c->r[3]=0u+0x80750000u; // 800E64A0
  c->r[5]=c->r[26]|c->r[26]; // 800E64A4
  c->r[3]=c->r[3]+0xFFFF8158u; // 800E64A8
  c->r[4]=c->r[3]|c->r[3]; // 800E64AC
  c->lr=0x800E64B4u; f_802DDCA8(c); // 800E64B0
  c->r[5]=0u+0x806D0000u; // 800E64B4
  {uint32_t ea=c->r[2]+0xFFFFA650u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E64B8
  c->r[5]=c->r[5]+0x00007F8Cu; // 800E64BC
  c->r[3]=0u+0xFFFFFFFFu; // 800E64C0
  c->r[4]=c->r[5]+0x00000044u; // 800E64C4
  c->r[0]=0u+0x00000000u; // 800E64C8
  W32(c->r[27]+0x0000001Cu,c->r[5]); // 800E64CC
  W32(c->r[27]+0x00000330u,c->r[4]); // 800E64D0
  W32(c->r[27]+0x000003CCu,c->r[3]); // 800E64D4
  {uint32_t ea=c->r[27]+0x000003D4u; WF32(ea,c->f[0]);} // 800E64D8
  W8(c->r[27]+0x000003D8u,c->r[0]); // 800E64DC
  W32(c->r[27]+0x00000054u,c->r[30]); // 800E64E0
  {uint32_t ea=c->r[27]+0x000003D0u; WF32(ea,c->f[0]);} // 800E64E4
  c->r[0]=R8(c->r[13]+0xFFFFC3CCu); // 800E64E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E64EC
  if (!crb(c,2)) { goto L_800E650C; } // 800E64F0
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800E64F4
  c->r[0]=0u+0x00000001u; // 800E64F8
  W32(c->r[13]+0xFFFFC3C8u,c->r[3]); // 800E64FC
  c->r[3]=c->r[3]+0x00000001u; // 800E6500
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800E6504
  W8(c->r[13]+0xFFFFC3CCu,c->r[0]); // 800E6508
L_800E650C:;
  c->r[0]=R32(c->r[13]+0xFFFFC3C8u); // 800E650C
  c->r[3]=0u+0x806D0000u; // 800E6510
  c->r[3]=c->r[3]+0x00007F20u; // 800E6514
  W32(c->r[27]+0x00000328u,c->r[0]); // 800E6518
  c->r[0]=c->r[3]+0x00000044u; // 800E651C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800E6520
  W32(c->r[27]+0x00000330u,c->r[0]); // 800E6524
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E6528
  cmps(c,0,(int32_t)c->r[25],0); // 800E652C
  if (crb(c,2)) { goto L_800E6574; } // 800E6530
  c->lr=0x800E6538u; f_800E69E8(c); // 800E6534
  c->r[28]=c->r[3]|c->r[3]; // 800E6538
  c->lr=0x800E6540u; f_8007BDCC(c); // 800E653C
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800E6540
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6544
  c->r[5]=0u+0x800E0000u; // 800E6548
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E654C
  c->r[4]=c->r[25]+c->r[4]; // 800E6550
  c->r[5]=c->r[5]+0x00006A70u; // 800E6554
  c->r[4]=c->r[4]+c->r[0]; // 800E6558
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E655C
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6560
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E6564
  if (!crb(c,0)) { goto L_800E6574; } // 800E6568
  c->r[0]=0u+0x0000000Cu; // 800E656C
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6570
L_800E6574:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E6574
  cmps(c,0,(int32_t)c->r[25],0); // 800E6578
  if (crb(c,2)) { goto L_800E65C0; } // 800E657C
  c->lr=0x800E6584u; f_800E69E8(c); // 800E6580
  c->r[28]=c->r[3]|c->r[3]; // 800E6584
  c->lr=0x800E658Cu; f_80076D18(c); // 800E6588
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800E658C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6590
  c->r[5]=0u+0x800E0000u; // 800E6594
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E6598
  c->r[4]=c->r[25]+c->r[4]; // 800E659C
  c->r[5]=c->r[5]+0x00006A6Cu; // 800E65A0
  c->r[4]=c->r[4]+c->r[0]; // 800E65A4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E65A8
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E65AC
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E65B0
  if (!crb(c,0)) { goto L_800E65C0; } // 800E65B4
  c->r[0]=0u+0x0000000Cu; // 800E65B8
  W32(c->r[25]+c->r[3],c->r[0]); // 800E65BC
L_800E65C0:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E65C0
  cmps(c,0,(int32_t)c->r[25],0); // 800E65C4
  if (crb(c,2)) { goto L_800E660C; } // 800E65C8
  c->lr=0x800E65D0u; f_800E69E8(c); // 800E65CC
  c->r[28]=c->r[3]|c->r[3]; // 800E65D0
  c->lr=0x800E65D8u; f_80076CB0(c); // 800E65D4
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800E65D8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E65DC
  c->r[5]=0u+0x800E0000u; // 800E65E0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E65E4
  c->r[4]=c->r[25]+c->r[4]; // 800E65E8
  c->r[5]=c->r[5]+0x00006A68u; // 800E65EC
  c->r[4]=c->r[4]+c->r[0]; // 800E65F0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E65F4
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E65F8
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E65FC
  if (!crb(c,0)) { goto L_800E660C; } // 800E6600
  c->r[0]=0u+0x0000000Cu; // 800E6604
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6608
L_800E660C:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E660C
  cmps(c,0,(int32_t)c->r[25],0); // 800E6610
  if (crb(c,2)) { goto L_800E6658; } // 800E6614
  c->lr=0x800E661Cu; f_800E69E8(c); // 800E6618
  c->r[28]=c->r[3]|c->r[3]; // 800E661C
  c->lr=0x800E6624u; f_80076CE4(c); // 800E6620
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800E6624
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6628
  c->r[5]=0u+0x800E0000u; // 800E662C
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E6630
  c->r[4]=c->r[25]+c->r[4]; // 800E6634
  c->r[5]=c->r[5]+0x00006A64u; // 800E6638
  c->r[4]=c->r[4]+c->r[0]; // 800E663C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6640
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6644
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E6648
  if (!crb(c,0)) { goto L_800E6658; } // 800E664C
  c->r[0]=0u+0x0000000Cu; // 800E6650
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6654
L_800E6658:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E6658
  cmps(c,0,(int32_t)c->r[25],0); // 800E665C
  if (crb(c,2)) { goto L_800E66C8; } // 800E6660
  c->lr=0x800E6668u; f_800E69E8(c); // 800E6664
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 800E6668
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E666C
  if (!crb(c,2)) { goto L_800E6690; } // 800E6670
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800E6674
  c->r[0]=0u+0x00000001u; // 800E6678
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800E667C
  c->r[4]=c->r[5]+0x00000001u; // 800E6680
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800E6684
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 800E6688
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 800E668C
L_800E6690:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800E6690
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 800E6694
  c->r[5]=0u+0x800E0000u; // 800E6698
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E669C
  c->r[4]=c->r[25]+c->r[4]; // 800E66A0
  c->r[5]=c->r[5]+0x00006A60u; // 800E66A4
  c->r[4]=c->r[4]+c->r[0]; // 800E66A8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E66AC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E66B0
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E66B4
  cmpu(c,0,c->r[0],0x0000006Cu); // 800E66B8
  if (!crb(c,0)) { goto L_800E66C8; } // 800E66BC
  c->r[0]=0u+0x0000006Cu; // 800E66C0
  W32(c->r[25]+c->r[3],c->r[0]); // 800E66C4
L_800E66C8:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E66C8
  cmps(c,0,(int32_t)c->r[25],0); // 800E66CC
  if (crb(c,2)) { goto L_800E6738; } // 800E66D0
  c->lr=0x800E66D8u; f_800E69E8(c); // 800E66D4
  c->r[0]=R8(c->r[13]+0xFFFFC3ACu); // 800E66D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E66DC
  if (!crb(c,2)) { goto L_800E6700; } // 800E66E0
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800E66E4
  c->r[0]=0u+0x00000001u; // 800E66E8
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800E66EC
  c->r[4]=c->r[5]+0x00000001u; // 800E66F0
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800E66F4
  W32(c->r[13]+0xFFFFC3A8u,c->r[5]); // 800E66F8
  W8(c->r[13]+0xFFFFC3ACu,c->r[0]); // 800E66FC
L_800E6700:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800E6700
  c->r[0]=R32(c->r[13]+0xFFFFC3A8u); // 800E6704
  c->r[5]=0u+0x800E0000u; // 800E6708
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E670C
  c->r[4]=c->r[25]+c->r[4]; // 800E6710
  c->r[5]=c->r[5]+0x00006A5Cu; // 800E6714
  c->r[4]=c->r[4]+c->r[0]; // 800E6718
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E671C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6720
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6724
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E6728
  if (!crb(c,0)) { goto L_800E6738; } // 800E672C
  c->r[0]=0u+0x0000000Cu; // 800E6730
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6734
L_800E6738:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800E6738
  cmps(c,0,(int32_t)c->r[25],0); // 800E673C
  if (crb(c,2)) { goto L_800E67A8; } // 800E6740
  c->lr=0x800E6748u; f_800E69E8(c); // 800E6744
  c->r[0]=R8(c->r[13]+0xFFFFC3B4u); // 800E6748
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E674C
  if (!crb(c,2)) { goto L_800E6770; } // 800E6750
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 800E6754
  c->r[0]=0u+0x00000001u; // 800E6758
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 800E675C
  c->r[4]=c->r[5]+0x00000001u; // 800E6760
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 800E6764
  W32(c->r[13]+0xFFFFC3B0u,c->r[5]); // 800E6768
  W8(c->r[13]+0xFFFFC3B4u,c->r[0]); // 800E676C
L_800E6770:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 800E6770
  c->r[0]=R32(c->r[13]+0xFFFFC3B0u); // 800E6774
  c->r[5]=0u+0x800E0000u; // 800E6778
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E677C
  c->r[4]=c->r[25]+c->r[4]; // 800E6780
  c->r[5]=c->r[5]+0x00006A58u; // 800E6784
  c->r[4]=c->r[4]+c->r[0]; // 800E6788
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E678C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6790
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6794
  cmpu(c,0,c->r[0],0x0000000Cu); // 800E6798
  if (!crb(c,0)) { goto L_800E67A8; } // 800E679C
  c->r[0]=0u+0x0000000Cu; // 800E67A0
  W32(c->r[25]+c->r[3],c->r[0]); // 800E67A4
L_800E67A8:;
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 800E67A8
  cmps(c,0,(int32_t)c->r[25],0); // 800E67AC
  if (crb(c,2)) { goto L_800E6818; } // 800E67B0
  c->lr=0x800E67B8u; f_800E69E8(c); // 800E67B4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 800E67B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E67BC
  if (!crb(c,2)) { goto L_800E67E0; } // 800E67C0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800E67C4
  c->r[0]=0u+0x00000001u; // 800E67C8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800E67CC
  c->r[4]=c->r[5]+0x00000001u; // 800E67D0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800E67D4
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 800E67D8
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 800E67DC
L_800E67E0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800E67E0
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 800E67E4
  c->r[5]=0u+0x800E0000u; // 800E67E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E67EC
  c->r[4]=c->r[25]+c->r[4]; // 800E67F0
  c->r[5]=c->r[5]+0x00006A54u; // 800E67F4
  c->r[4]=c->r[4]+c->r[0]; // 800E67F8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E67FC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6800
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6804
  cmpu(c,0,c->r[0],0x00000010u); // 800E6808
  if (!crb(c,0)) { goto L_800E6818; } // 800E680C
  c->r[0]=0u+0x00000010u; // 800E6810
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6814
L_800E6818:;
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 800E6818
  cmps(c,0,(int32_t)c->r[25],0); // 800E681C
  if (crb(c,2)) { goto L_800E6864; } // 800E6820
  c->lr=0x800E6828u; f_800E69E8(c); // 800E6824
  c->r[28]=c->r[3]|c->r[3]; // 800E6828
  c->lr=0x800E6830u; f_8005E1B0(c); // 800E682C
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)2600); // 800E6830
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6834
  c->r[5]=0u+0x800E0000u; // 800E6838
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E683C
  c->r[4]=c->r[25]+c->r[4]; // 800E6840
  c->r[5]=c->r[5]+0x00006A50u; // 800E6844
  c->r[4]=c->r[4]+c->r[0]; // 800E6848
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E684C
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6850
  cmpu(c,0,c->r[0],0x00000010u); // 800E6854
  if (!crb(c,0)) { goto L_800E6864; } // 800E6858
  c->r[0]=0u+0x00000010u; // 800E685C
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6860
L_800E6864:;
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 800E6864
  cmps(c,0,(int32_t)c->r[25],0); // 800E6868
  if (crb(c,2)) { goto L_800E68B0; } // 800E686C
  c->lr=0x800E6874u; f_800E69E8(c); // 800E6870
  c->r[28]=c->r[3]|c->r[3]; // 800E6874
  c->lr=0x800E687Cu; f_800E6A20(c); // 800E6878
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)2600); // 800E687C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6880
  c->r[5]=0u+0x800E0000u; // 800E6884
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E6888
  c->r[4]=c->r[25]+c->r[4]; // 800E688C
  c->r[5]=c->r[5]+0x00006A1Cu; // 800E6890
  c->r[4]=c->r[4]+c->r[0]; // 800E6894
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6898
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E689C
  cmpu(c,0,c->r[0],0x00000010u); // 800E68A0
  if (!crb(c,0)) { goto L_800E68B0; } // 800E68A4
  c->r[0]=0u+0x00000010u; // 800E68A8
  W32(c->r[25]+c->r[3],c->r[0]); // 800E68AC
L_800E68B0:;
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 800E68B0
  cmps(c,0,(int32_t)c->r[25],0); // 800E68B4
  if (crb(c,2)) { goto L_800E6920; } // 800E68B8
  c->lr=0x800E68C0u; f_800E69E8(c); // 800E68BC
  c->r[0]=R8(c->r[13]+0xFFFFBD10u); // 800E68C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E68C4
  if (!crb(c,2)) { goto L_800E68E8; } // 800E68C8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 800E68CC
  c->r[0]=0u+0x00000001u; // 800E68D0
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 800E68D4
  c->r[4]=c->r[5]+0x00000001u; // 800E68D8
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 800E68DC
  W32(c->r[13]+0xFFFFBD0Cu,c->r[5]); // 800E68E0
  W8(c->r[13]+0xFFFFBD10u,c->r[0]); // 800E68E4
L_800E68E8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 800E68E8
  c->r[0]=R32(c->r[13]+0xFFFFBD0Cu); // 800E68EC
  c->r[5]=0u+0x800E0000u; // 800E68F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E68F4
  c->r[4]=c->r[25]+c->r[4]; // 800E68F8
  c->r[5]=c->r[5]+0x00006A18u; // 800E68FC
  c->r[4]=c->r[4]+c->r[0]; // 800E6900
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E6904
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6908
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E690C
  cmpu(c,0,c->r[0],0x00000010u); // 800E6910
  if (!crb(c,0)) { goto L_800E6920; } // 800E6914
  c->r[0]=0u+0x00000010u; // 800E6918
  W32(c->r[25]+c->r[3],c->r[0]); // 800E691C
L_800E6920:;
  c->r[25]=R32(c->r[13]+0xFFFFDBD8u); // 800E6920
  cmps(c,0,(int32_t)c->r[25],0); // 800E6924
  if (crb(c,2)) { goto L_800E696C; } // 800E6928
  c->lr=0x800E6930u; f_800E69E8(c); // 800E692C
  c->r[28]=c->r[3]|c->r[3]; // 800E6930
  c->lr=0x800E6938u; f_800E69B8(c); // 800E6934
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)2600); // 800E6938
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E693C
  c->r[5]=0u+0x800E0000u; // 800E6940
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800E6944
  c->r[4]=c->r[25]+c->r[4]; // 800E6948
  c->r[5]=c->r[5]+0x000069B4u; // 800E694C
  c->r[4]=c->r[4]+c->r[0]; // 800E6950
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800E6954
  c->r[0]=R32(c->r[25]+c->r[3]); // 800E6958
  cmpu(c,0,c->r[0],0x00000010u); // 800E695C
  if (!crb(c,0)) { goto L_800E696C; } // 800E6960
  c->r[0]=0u+0x00000010u; // 800E6964
  W32(c->r[25]+c->r[3],c->r[0]); // 800E6968
L_800E696C:;
  c->r[4]=0u+0x00000000u; // 800E696C
  c->r[0]=0u+0xFFFFFFFFu; // 800E6970
  W32(c->r[27]+0x000003DCu,c->r[4]); // 800E6974
  c->r[11]=c->r[1]+0x00000040u; // 800E6978
  c->r[3]=c->r[27]|c->r[27]; // 800E697C
  W32(c->r[27]+0x000003E0u,c->r[4]); // 800E6980
  W8(c->r[27]+0x000003D9u,c->r[4]); // 800E6984
  W32(c->r[27]+0x000003E4u,c->r[0]); // 800E6988
  W32(c->r[27]+0x000003E8u,c->r[0]); // 800E698C
  W32(c->r[27]+0x000003F4u,c->r[4]); // 800E6990
  W32(c->r[27]+0x000003F8u,c->r[4]); // 800E6994
  W32(c->r[27]+0x000003F0u,c->r[4]); // 800E6998
  W8(c->r[27]+0x00000414u,c->r[4]); // 800E699C
  c->lr=0x800E69A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E69A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E69A4
  c->lr=c->r[0]; // 800E69A8
  c->r[1]=c->r[1]+0x00000040u; // 800E69AC
  return; // 800E69B0
}

// fn_800E69B4
void f_800E69B4(Ctx* __restrict c) {
  trace_call(0x800E69B4u);
  f_800E7E0C(c); return; // 800E69B4
}

// fn_800E69B8
void f_800E69B8(Ctx* __restrict c) {
  trace_call(0x800E69B8u);
  c->r[0]=R8(c->r[13]+0xFFFFC3BCu); // 800E69B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E69BC
  if (!crb(c,2)) { goto L_800E69E0; } // 800E69C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800E69C4
  c->r[0]=0u+0x00000001u; // 800E69C8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800E69CC
  c->r[3]=c->r[4]+0x00000001u; // 800E69D0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800E69D4
  W32(c->r[13]+0xFFFFC3B8u,c->r[4]); // 800E69D8
  W8(c->r[13]+0xFFFFC3BCu,c->r[0]); // 800E69DC
L_800E69E0:;
  c->r[3]=R32(c->r[13]+0xFFFFC3B8u); // 800E69E0
  return; // 800E69E4
}

// fn_800E69E8
void f_800E69E8(Ctx* __restrict c) {
  trace_call(0x800E69E8u);
  c->r[0]=R8(c->r[13]+0xFFFFBFA0u); // 800E69E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E69EC
  if (!crb(c,2)) { goto L_800E6A10; } // 800E69F0
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800E69F4
  c->r[0]=0u+0x00000001u; // 800E69F8
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800E69FC
  c->r[3]=c->r[4]+0x00000001u; // 800E6A00
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800E6A04
  W32(c->r[13]+0xFFFFBF9Cu,c->r[4]); // 800E6A08
  W8(c->r[13]+0xFFFFBFA0u,c->r[0]); // 800E6A0C
L_800E6A10:;
  c->r[3]=R32(c->r[13]+0xFFFFBF9Cu); // 800E6A10
  return; // 800E6A14
}

// fn_800E6A18
void f_800E6A18(Ctx* __restrict c) {
  trace_call(0x800E6A18u);
  return; // 800E6A18
}

// fn_800E6A1C
void f_800E6A1C(Ctx* __restrict c) {
  trace_call(0x800E6A1Cu);
  f_800E7D54(c); return; // 800E6A1C
}

// fn_800E6A20
void f_800E6A20(Ctx* __restrict c) {
  trace_call(0x800E6A20u);
  c->r[0]=R8(c->r[13]+0xFFFFC3C4u); // 800E6A20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E6A24
  if (!crb(c,2)) { goto L_800E6A48; } // 800E6A28
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 800E6A2C
  c->r[0]=0u+0x00000001u; // 800E6A30
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 800E6A34
  c->r[3]=c->r[4]+0x00000001u; // 800E6A38
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 800E6A3C
  W32(c->r[13]+0xFFFFC3C0u,c->r[4]); // 800E6A40
  W8(c->r[13]+0xFFFFC3C4u,c->r[0]); // 800E6A44
L_800E6A48:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C0u); // 800E6A48
  return; // 800E6A4C
}

// fn_800E6A50
void f_800E6A50(Ctx* __restrict c) {
  trace_call(0x800E6A50u);
  return; // 800E6A50
}

// fn_800E6A54
void f_800E6A54(Ctx* __restrict c) {
  trace_call(0x800E6A54u);
  f_800E7C68(c); return; // 800E6A54
}

// fn_800E6A58
void f_800E6A58(Ctx* __restrict c) {
  trace_call(0x800E6A58u);
  f_800E7464(c); return; // 800E6A58
}

// fn_800E6A5C
void f_800E6A5C(Ctx* __restrict c) {
  trace_call(0x800E6A5Cu);
  f_800E7BE0(c); return; // 800E6A5C
}

// fn_800E6A60
void f_800E6A60(Ctx* __restrict c) {
  trace_call(0x800E6A60u);
  f_800E7B54(c); return; // 800E6A60
}

// fn_800E6A64
void f_800E6A64(Ctx* __restrict c) {
  trace_call(0x800E6A64u);
  return; // 800E6A64
}

// fn_800E6A68
void f_800E6A68(Ctx* __restrict c) {
  trace_call(0x800E6A68u);
  return; // 800E6A68
}

// fn_800E6A6C
void f_800E6A6C(Ctx* __restrict c) {
  trace_call(0x800E6A6Cu);
  return; // 800E6A6C
}

// fn_800E6A70
void f_800E6A70(Ctx* __restrict c) {
  trace_call(0x800E6A70u);
  f_800E7598(c); return; // 800E6A70
}

// dtor_800E6A74
void f_800E6A74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A74
  c->r[0]=c->lr; // 800E6A78
  cmps(c,0,(int32_t)c->r[3],0); // 800E6A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6A84
  c->r[31]=c->r[3]|c->r[3]; // 800E6A88
  if (crb(c,2)) { goto L_800E6A98; } // 800E6A8C
  c->r[4]=0u+0x00000000u; // 800E6A90
  c->lr=0x800E6A98u; f_800455D8(c); // 800E6A94
L_800E6A98:;
  c->r[3]=c->r[31]|c->r[31]; // 800E6A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6AA0
  c->lr=c->r[0]; // 800E6AA4
  c->r[1]=c->r[1]+0x00000010u; // 800E6AA8
  return; // 800E6AAC
}

// fn_800E6AB0
void f_800E6AB0(Ctx* __restrict c) {
  trace_call(0x800E6AB0u);
  c->r[4]=0u+0x806D0000u; // 800E6AB0
  c->r[0]=0u+0x00000000u; // 800E6AB4
  c->r[4]=c->r[4]+0xFFFFE098u; // 800E6AB8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800E6ABC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E6AC0
  return; // 800E6AC4
}

// dtor_800E6AC8
void f_800E6AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6AC8
  c->r[0]=c->lr; // 800E6ACC
  cmps(c,0,(int32_t)c->r[3],0); // 800E6AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6AD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6AD8
  c->r[31]=c->r[3]|c->r[3]; // 800E6ADC
  if (crb(c,2)) { goto L_800E6AF0; } // 800E6AE0
  if (crb(c,2)) { goto L_800E6AF0; } // 800E6AE4
  c->r[4]=0u+0x00000000u; // 800E6AE8
  c->lr=0x800E6AF0u; f_800455D8(c); // 800E6AEC
L_800E6AF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800E6AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6AF8
  c->lr=c->r[0]; // 800E6AFC
  c->r[1]=c->r[1]+0x00000010u; // 800E6B00
  return; // 800E6B04
}

// dtor_800E6B08
void f_800E6B08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6B08
  c->r[0]=c->lr; // 800E6B0C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6B14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6B18
  c->r[30]=c->r[3]|c->r[3]; // 800E6B1C
  c->r[31]=c->r[4]|c->r[4]; // 800E6B20
  if (crb(c,2)) { goto L_800E6B5C; } // 800E6B24
  c->r[4]=0u+0x00000000u; // 800E6B28
  c->r[3]=c->r[3]+0x000003BCu; // 800E6B2C
  c->lr=0x800E6B34u; f_8005BDE4(c); // 800E6B30
  c->r[3]=c->r[30]+0x000003ACu; // 800E6B34
  c->r[4]=0u+0x00000000u; // 800E6B38
  c->lr=0x800E6B40u; f_800E6AC8(c); // 800E6B3C
  c->r[3]=c->r[30]|c->r[30]; // 800E6B40
  c->r[4]=0u+0x00000000u; // 800E6B44
  c->lr=0x800E6B4Cu; f_80053814(c); // 800E6B48
  cmps(c,0,(int32_t)c->r[31],0); // 800E6B4C
  if (!crb(c,1)) { goto L_800E6B5C; } // 800E6B50
  c->r[3]=c->r[30]|c->r[30]; // 800E6B54
  c->lr=0x800E6B5Cu; f_8005328C(c); // 800E6B58
L_800E6B5C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E6B5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6B60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6B64
  c->lr=c->r[0]; // 800E6B68
  c->r[1]=c->r[1]+0x00000010u; // 800E6B6C
  return; // 800E6B70
}

// fn_800E6B74
void f_800E6B74(Ctx* __restrict c) {
  trace_call(0x800E6B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6B74
  c->r[0]=c->lr; // 800E6B78
  cmps(c,0,(int32_t)c->r[3],0); // 800E6B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6B80
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6B84
  c->r[30]=c->r[3]|c->r[3]; // 800E6B88
  c->r[31]=c->r[4]|c->r[4]; // 800E6B8C
  if (crb(c,2)) { goto L_800E6C2C; } // 800E6B90
  c->r[5]=R32(c->r[3]+0x000003F0u); // 800E6B94
  c->r[4]=0u+0x806D0000u; // 800E6B98
  c->r[4]=c->r[4]+0x00007F20u; // 800E6B9C
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800E6BA0
  cmps(c,0,(int32_t)c->r[5],0); // 800E6BA4
  c->r[0]=c->r[4]+0x00000044u; // 800E6BA8
  W32(c->r[3]+0x00000330u,c->r[0]); // 800E6BAC
  if (crb(c,2)) { goto L_800E6BBC; } // 800E6BB0
  c->r[3]=c->r[5]|c->r[5]; // 800E6BB4
  c->lr=0x800E6BBCu; f_8035F214(c); // 800E6BB8
L_800E6BBC:;
  c->r[0]=R32(c->r[30]+0x000003F4u); // 800E6BBC
  cmps(c,0,(int32_t)c->r[0],0); // 800E6BC0
  if (crb(c,2)) { goto L_800E6BE0; } // 800E6BC4
  c->r[0]=0u+0x00000000u; // 800E6BC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800E6BCC
  c->r[3]=c->r[1]+0x0000000Cu; // 800E6BD0
  c->lr=0x800E6BD8u; f_8004FA38(c); // 800E6BD4
  c->r[4]=R32(c->r[30]+0x000003F4u); // 800E6BD8
  c->lr=0x800E6BE0u; f_802F1A04(c); // 800E6BDC
L_800E6BE0:;
  c->r[0]=R32(c->r[30]+0x000003F8u); // 800E6BE0
  cmps(c,0,(int32_t)c->r[0],0); // 800E6BE4
  if (crb(c,2)) { goto L_800E6C04; } // 800E6BE8
  c->r[0]=0u+0x00000000u; // 800E6BEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E6BF0
  c->r[3]=c->r[1]+0x00000008u; // 800E6BF4
  c->lr=0x800E6BFCu; f_8004FA38(c); // 800E6BF8
  c->r[4]=R32(c->r[30]+0x000003F8u); // 800E6BFC
  c->lr=0x800E6C04u; f_802F1A04(c); // 800E6C00
L_800E6C04:;
  c->r[0]=0u+0x00000000u; // 800E6C04
  W32(c->r[30]+0x000003F4u,c->r[0]); // 800E6C08
  c->r[3]=c->r[30]|c->r[30]; // 800E6C0C
  c->r[4]=0u+0x00000000u; // 800E6C10
  W32(c->r[30]+0x000003F8u,c->r[0]); // 800E6C14
  c->lr=0x800E6C1Cu; f_800E6B08(c); // 800E6C18
  cmps(c,0,(int32_t)c->r[31],0); // 800E6C1C
  if (!crb(c,1)) { goto L_800E6C2C; } // 800E6C20
  c->r[3]=c->r[30]|c->r[30]; // 800E6C24
  c->lr=0x800E6C2Cu; f_8005328C(c); // 800E6C28
L_800E6C2C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E6C2C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6C34
  c->lr=c->r[0]; // 800E6C38
  c->r[1]=c->r[1]+0x00000020u; // 800E6C3C
  return; // 800E6C40
}

// fn_800E6C44
void f_800E6C44(Ctx* __restrict c) {
  trace_call(0x800E6C44u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6C44
  c->r[0]=c->lr; // 800E6C48
  W32(c->r[1]+0x00000154u,c->r[0]); // 800E6C4C
  c->r[11]=c->r[1]+0x00000150u; // 800E6C50
  c->lr=0x800E6C58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E6C54
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E6C58
  c->r[27]=c->r[3]|c->r[3]; // 800E6C5C
  c->r[29]=0u+0x00000000u; // 800E6C60
  cmps(c,0,(int32_t)c->r[4],0); // 800E6C64
  if (crb(c,2)) { goto L_800E6C80; } // 800E6C68
  c->r[30]=R32(c->r[4]+0x00000000u); // 800E6C6C
  c->lr=0x800E6C74u; f_800E69B8(c); // 800E6C70
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800E6C74
  if (!crb(c,2)) { goto L_800E6C80; } // 800E6C78
  c->r[29]=0u+0x00000001u; // 800E6C7C
L_800E6C80:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E6C80
  if (!crb(c,2)) { goto L_800E70F4; } // 800E6C84
  c->r[5]=R32(c->r[27]+0x00000138u); // 800E6C88
  c->r[3]=c->r[1]+0x00000018u; // 800E6C8C
  c->r[4]=0u+0x00000000u; // 800E6C90
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800E6C94
  W32(c->r[1]+0x00000018u,c->r[0]); // 800E6C98
  c->lr=0x800E6CA0u; f_804AC458(c); // 800E6C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6CA0
  if (crb(c,2)) { goto L_800E6D34; } // 800E6CA4
  c->r[5]=R32(c->r[27]+0x00000138u); // 800E6CA8
  c->r[3]=c->r[1]+0x00000014u; // 800E6CAC
  c->r[4]=0u+0x00000000u; // 800E6CB0
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800E6CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6CB8
  c->lr=0x800E6CC0u; f_804AC458(c); // 800E6CBC
  cmps(c,0,(int32_t)c->r[3],0); // 800E6CC0
  c->r[29]=c->r[3]|c->r[3]; // 800E6CC4
  if (!crb(c,2)) { goto L_800E6CF0; } // 800E6CC8
  c->r[3]=0u+0x806D0000u; // 800E6CCC
  c->r[5]=0u+0x806D0000u; // 800E6CD0
  c->r[3]=c->r[3]+0x00003A48u; // 800E6CD4
  c->r[4]=0u+0x0000002Cu; // 800E6CD8
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E6CDC
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E6CE0
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E6CE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E6CE8
  c->lr=0x800E6CF0u; f_80484674(c); // 800E6CEC
L_800E6CF0:;
  c->r[3]=c->r[27]+0x000003FCu; // 800E6CF0
  c->r[4]=c->r[29]+0x00000044u; // 800E6CF4
  c->lr=0x800E6CFCu; f_800AF330(c); // 800E6CF8
  cmps(c,0,(int32_t)c->r[29],0); // 800E6CFC
  if (!crb(c,2)) { goto L_800E6D28; } // 800E6D00
  c->r[3]=0u+0x806D0000u; // 800E6D04
  c->r[5]=0u+0x806D0000u; // 800E6D08
  c->r[3]=c->r[3]+0x00003A48u; // 800E6D0C
  c->r[4]=0u+0x0000002Cu; // 800E6D10
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E6D14
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E6D18
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E6D1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E6D20
  c->lr=0x800E6D28u; f_80484674(c); // 800E6D24
L_800E6D28:;
  c->r[3]=c->r[27]+0x00000408u; // 800E6D28
  c->r[4]=c->r[29]+0x00000050u; // 800E6D2C
  c->lr=0x800E6D34u; f_800AF330(c); // 800E6D30
L_800E6D34:;
  c->r[28]=0u+0x00000001u; // 800E6D34
  c->r[31]=0u+0x806D0000u; // 800E6D38
  c->r[30]=0u+0x806D0000u; // 800E6D3C
  goto L_800E6F20; // 800E6D40
L_800E6D44:;
  c->r[5]=R32(c->r[27]+0x00000138u); // 800E6D44
  c->r[4]=c->r[28]|c->r[28]; // 800E6D48
  c->r[3]=c->r[1]+0x00000010u; // 800E6D4C
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800E6D50
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E6D54
  c->lr=0x800E6D5Cu; f_804AC458(c); // 800E6D58
  cmps(c,0,(int32_t)c->r[3],0); // 800E6D5C
  c->r[29]=c->r[3]|c->r[3]; // 800E6D60
  if (crb(c,2)) { goto L_800E6F30; } // 800E6D64
  if (!crb(c,2)) { goto L_800E6D88; } // 800E6D68
  c->r[3]=c->r[31]+0x00003A48u; // 800E6D6C
  c->r[5]=c->r[30]+0x00003A2Cu; // 800E6D70
  c->r[4]=0u+0x0000002Cu; // 800E6D74
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E6D78
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E6D7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E6D80
  c->lr=0x800E6D88u; f_80484674(c); // 800E6D84
L_800E6D88:;
  c->r[3]=c->r[1]+0x000000B8u; // 800E6D88
  c->r[4]=c->r[29]+0x00000038u; // 800E6D8C
  c->lr=0x800E6D94u; f_800E710C(c); // 800E6D90
  cmps(c,0,(int32_t)c->r[29],0); // 800E6D94
  if (!crb(c,2)) { goto L_800E6DB8; } // 800E6D98
  c->r[3]=c->r[31]+0x00003A48u; // 800E6D9C
  c->r[5]=c->r[30]+0x00003A2Cu; // 800E6DA0
  c->r[4]=0u+0x0000002Cu; // 800E6DA4
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E6DA8
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E6DAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E6DB0
  c->lr=0x800E6DB8u; f_80484674(c); // 800E6DB4
L_800E6DB8:;
  c->r[3]=c->r[1]+0x0000007Cu; // 800E6DB8
  c->r[4]=c->r[29]+0x00000050u; // 800E6DBC
  c->lr=0x800E6DC4u; f_800E710C(c); // 800E6DC0
  c->r[5]=c->r[3]|c->r[3]; // 800E6DC4
  c->r[3]=c->r[1]+0x00000088u; // 800E6DC8
  c->r[4]=c->r[1]+0x000000B8u; // 800E6DCC
  c->lr=0x800E6DD4u; f_80073ACC(c); // 800E6DD0
  c->r[3]=c->r[1]+0x000000C4u; // 800E6DD4
  c->r[4]=c->r[1]+0x00000088u; // 800E6DD8
  c->lr=0x800E6DE0u; f_8005DC84(c); // 800E6DDC
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6DE0
  {uint32_t ea=c->r[27]+0x000003FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6DE4
  fcmp(c,0,c->f[1],c->f[0]); // 800E6DE8
  if (!crb(c,0)) { goto L_800E6DF8; } // 800E6DEC
  {uint32_t ea=c->r[27]+0x000003FCu; WF32(ea,c->f[1]);} // 800E6DF0
  goto L_800E6E08; // 800E6DF4
L_800E6DF8:;
  {uint32_t ea=c->r[27]+0x00000408u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6DF8
  fcmp(c,0,c->f[1],c->f[0]); // 800E6DFC
  if (!crb(c,1)) { goto L_800E6E08; } // 800E6E00
  {uint32_t ea=c->r[27]+0x00000408u; WF32(ea,c->f[1]);} // 800E6E04
L_800E6E08:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6E08
  {uint32_t ea=c->r[27]+0x00000400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6E0C
  fcmp(c,0,c->f[1],c->f[0]); // 800E6E10
  if (!crb(c,0)) { goto L_800E6E20; } // 800E6E14
  {uint32_t ea=c->r[27]+0x00000400u; WF32(ea,c->f[1]);} // 800E6E18
  goto L_800E6E30; // 800E6E1C
L_800E6E20:;
  {uint32_t ea=c->r[27]+0x0000040Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6E20
  fcmp(c,0,c->f[1],c->f[0]); // 800E6E24
  if (!crb(c,1)) { goto L_800E6E30; } // 800E6E28
  {uint32_t ea=c->r[27]+0x0000040Cu; WF32(ea,c->f[1]);} // 800E6E2C
L_800E6E30:;
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6E30
  {uint32_t ea=c->r[27]+0x00000404u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6E34
  fcmp(c,0,c->f[1],c->f[0]); // 800E6E38
  if (!crb(c,0)) { goto L_800E6E48; } // 800E6E3C
  {uint32_t ea=c->r[27]+0x00000404u; WF32(ea,c->f[1]);} // 800E6E40
  goto L_800E6E58; // 800E6E44
L_800E6E48:;
  {uint32_t ea=c->r[27]+0x00000410u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6E48
  fcmp(c,0,c->f[1],c->f[0]); // 800E6E4C
  if (!crb(c,1)) { goto L_800E6E58; } // 800E6E50
  {uint32_t ea=c->r[27]+0x00000410u; WF32(ea,c->f[1]);} // 800E6E54
L_800E6E58:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E6E58
  if (!crb(c,2)) { goto L_800E6E7C; } // 800E6E5C
  c->r[3]=c->r[31]+0x00003A48u; // 800E6E60
  c->r[5]=c->r[30]+0x00003A2Cu; // 800E6E64
  c->r[4]=0u+0x0000002Cu; // 800E6E68
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E6E6C
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E6E70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E6E74
  c->lr=0x800E6E7Cu; f_80484674(c); // 800E6E78
L_800E6E7C:;
  c->r[3]=c->r[1]+0x00000064u; // 800E6E7C
  c->r[4]=c->r[29]+0x00000044u; // 800E6E80
  c->lr=0x800E6E88u; f_800E710C(c); // 800E6E84
  c->r[5]=c->r[3]|c->r[3]; // 800E6E88
  c->r[3]=c->r[1]+0x00000070u; // 800E6E8C
  c->r[4]=c->r[1]+0x000000B8u; // 800E6E90
  c->lr=0x800E6E98u; f_80073ACC(c); // 800E6E94
  c->r[3]=c->r[1]+0x000000C4u; // 800E6E98
  c->r[4]=c->r[1]+0x00000070u; // 800E6E9C
  c->lr=0x800E6EA4u; f_8005DC84(c); // 800E6EA0
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6EA4
  {uint32_t ea=c->r[27]+0x000003FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6EA8
  fcmp(c,0,c->f[1],c->f[0]); // 800E6EAC
  if (!crb(c,0)) { goto L_800E6EBC; } // 800E6EB0
  {uint32_t ea=c->r[27]+0x000003FCu; WF32(ea,c->f[1]);} // 800E6EB4
  goto L_800E6ECC; // 800E6EB8
L_800E6EBC:;
  {uint32_t ea=c->r[27]+0x00000408u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6EBC
  fcmp(c,0,c->f[1],c->f[0]); // 800E6EC0
  if (!crb(c,1)) { goto L_800E6ECC; } // 800E6EC4
  {uint32_t ea=c->r[27]+0x00000408u; WF32(ea,c->f[1]);} // 800E6EC8
L_800E6ECC:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6ECC
  {uint32_t ea=c->r[27]+0x00000400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6ED0
  fcmp(c,0,c->f[1],c->f[0]); // 800E6ED4
  if (!crb(c,0)) { goto L_800E6EE4; } // 800E6ED8
  {uint32_t ea=c->r[27]+0x00000400u; WF32(ea,c->f[1]);} // 800E6EDC
  goto L_800E6EF4; // 800E6EE0
L_800E6EE4:;
  {uint32_t ea=c->r[27]+0x0000040Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6EE4
  fcmp(c,0,c->f[1],c->f[0]); // 800E6EE8
  if (!crb(c,1)) { goto L_800E6EF4; } // 800E6EEC
  {uint32_t ea=c->r[27]+0x0000040Cu; WF32(ea,c->f[1]);} // 800E6EF0
L_800E6EF4:;
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6EF4
  {uint32_t ea=c->r[27]+0x00000404u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6EF8
  fcmp(c,0,c->f[1],c->f[0]); // 800E6EFC
  if (!crb(c,0)) { goto L_800E6F0C; } // 800E6F00
  {uint32_t ea=c->r[27]+0x00000404u; WF32(ea,c->f[1]);} // 800E6F04
  goto L_800E6F1C; // 800E6F08
L_800E6F0C:;
  {uint32_t ea=c->r[27]+0x00000410u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6F0C
  fcmp(c,0,c->f[1],c->f[0]); // 800E6F10
  if (!crb(c,1)) { goto L_800E6F1C; } // 800E6F14
  {uint32_t ea=c->r[27]+0x00000410u; WF32(ea,c->f[1]);} // 800E6F18
L_800E6F1C:;
  c->r[28]=c->r[28]+0x00000001u; // 800E6F1C
L_800E6F20:;
  c->r[3]=c->r[27]+0x000000FCu; // 800E6F20
  c->lr=0x800E6F28u; f_802E6DF0(c); // 800E6F24
  cmpu(c,0,c->r[28],c->r[3]); // 800E6F28
  if (crb(c,0)) { IRQCHK(c); goto L_800E6D44; } // 800E6F2C
L_800E6F30:;
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6F30
  c->r[3]=c->r[1]+0x000000ACu; // 800E6F34
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E6F38
  c->r[4]=c->r[27]+0x000003FCu; // 800E6F3C
  {uint32_t ea=c->r[27]+0x00000404u; WF32(ea,c->f[1]);} // 800E6F40
  {uint32_t ea=c->r[27]+0x00000410u; WF32(ea,c->f[0]);} // 800E6F44
  c->lr=0x800E6F4Cu; f_800E710C(c); // 800E6F48
  c->r[3]=c->r[1]+0x000000A0u; // 800E6F4C
  c->r[4]=c->r[27]+0x00000408u; // 800E6F50
  c->lr=0x800E6F58u; f_800E710C(c); // 800E6F54
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6F58
  c->r[3]=c->r[1]+0x00000100u; // 800E6F5C
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E6F60
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E6F64
  c->lr=0x800E6F6Cu; f_8005FD70(c); // 800E6F68
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6F6C
  c->r[3]=c->r[1]+0x0000010Cu; // 800E6F70
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E6F74
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E6F78
  c->lr=0x800E6F80u; f_8005FD70(c); // 800E6F7C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6F80
  c->r[3]=c->r[1]+0x00000118u; // 800E6F84
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E6F88
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E6F8C
  c->lr=0x800E6F94u; f_8005FD70(c); // 800E6F90
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E6F94
  c->r[3]=c->r[1]+0x00000124u; // 800E6F98
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E6F9C
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E6FA0
  c->lr=0x800E6FA8u; f_8005FD70(c); // 800E6FA4
  c->r[3]=c->r[1]+0x00000058u; // 800E6FA8
  c->r[4]=c->r[27]+0x000001B8u; // 800E6FAC
  c->r[5]=c->r[1]+0x00000100u; // 800E6FB0
  c->lr=0x800E6FB8u; f_8030DB70(c); // 800E6FB4
  c->r[3]=c->r[1]+0x00000100u; // 800E6FB8
  c->r[4]=c->r[1]+0x00000058u; // 800E6FBC
  c->lr=0x800E6FC4u; f_8005DC84(c); // 800E6FC0
  c->r[3]=c->r[1]+0x0000004Cu; // 800E6FC4
  c->r[4]=c->r[27]+0x000001B8u; // 800E6FC8
  c->r[5]=c->r[1]+0x0000010Cu; // 800E6FCC
  c->lr=0x800E6FD4u; f_8030DB70(c); // 800E6FD0
  c->r[3]=c->r[1]+0x0000010Cu; // 800E6FD4
  c->r[4]=c->r[1]+0x0000004Cu; // 800E6FD8
  c->lr=0x800E6FE0u; f_8005DC84(c); // 800E6FDC
  c->r[3]=c->r[1]+0x00000040u; // 800E6FE0
  c->r[4]=c->r[27]+0x000001B8u; // 800E6FE4
  c->r[5]=c->r[1]+0x00000118u; // 800E6FE8
  c->lr=0x800E6FF0u; f_8030DB70(c); // 800E6FEC
  c->r[3]=c->r[1]+0x00000118u; // 800E6FF0
  c->r[4]=c->r[1]+0x00000040u; // 800E6FF4
  c->lr=0x800E6FFCu; f_8005DC84(c); // 800E6FF8
  c->r[3]=c->r[1]+0x00000034u; // 800E6FFC
  c->r[4]=c->r[27]+0x000001B8u; // 800E7000
  c->r[5]=c->r[1]+0x00000124u; // 800E7004
  c->lr=0x800E700Cu; f_8030DB70(c); // 800E7008
  c->r[3]=c->r[1]+0x00000124u; // 800E700C
  c->r[4]=c->r[1]+0x00000034u; // 800E7010
  c->lr=0x800E7018u; f_8005DC84(c); // 800E7014
  c->r[30]=0u+0x00000000u; // 800E7018
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800E701C
  c->r[3]=c->r[1]+0x0000000Cu; // 800E7020
  c->lr=0x800E7028u; f_8004FA38(c); // 800E7024
  c->r[31]=0u+0x00210000u; // 800E7028
  c->r[4]=c->r[1]+0x00000100u; // 800E702C
  c->r[5]=c->r[31]+0x00000004u; // 800E7030
  c->r[6]=0u+0x00000000u; // 800E7034
  c->lr=0x800E703Cu; f_802F18AC(c); // 800E7038
  W32(c->r[27]+0x000003F4u,c->r[3]); // 800E703C
  c->r[3]=c->r[1]+0x000000D0u; // 800E7040
  c->r[4]=c->r[1]+0x00000124u; // 800E7044
  c->lr=0x800E704Cu; f_8005CD7C(c); // 800E7048
  c->r[3]=c->r[1]+0x000000DCu; // 800E704C
  c->r[4]=c->r[1]+0x00000118u; // 800E7050
  c->lr=0x800E7058u; f_8005CD7C(c); // 800E7054
  c->r[3]=c->r[1]+0x000000E8u; // 800E7058
  c->r[4]=c->r[1]+0x0000010Cu; // 800E705C
  c->lr=0x800E7064u; f_8005CD7C(c); // 800E7060
  c->r[3]=c->r[1]+0x000000F4u; // 800E7064
  c->r[4]=c->r[1]+0x00000100u; // 800E7068
  c->lr=0x800E7070u; f_8005CD7C(c); // 800E706C
  W8(c->r[1]+0x00000008u,c->r[30]); // 800E7070
  c->r[3]=c->r[1]+0x00000008u; // 800E7074
  c->lr=0x800E707Cu; f_8004FA38(c); // 800E7078
  c->r[4]=c->r[1]+0x000000D0u; // 800E707C
  c->r[5]=c->r[31]+0x00000004u; // 800E7080
  c->r[6]=0u+0x00000000u; // 800E7084
  c->lr=0x800E708Cu; f_802F18AC(c); // 800E7088
  W32(c->r[27]+0x000003F8u,c->r[3]); // 800E708C
  c->r[3]=c->r[1]+0x00000094u; // 800E7090
  {uint32_t ea=c->r[27]+0x00000408u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7094
  {uint32_t ea=c->r[27]+0x0000040Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7098
  {uint32_t ea=c->r[27]+0x00000410u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E709C
  c->lr=0x800E70A4u; f_8005FD70(c); // 800E70A0
  c->r[3]=c->r[1]+0x00000028u; // 800E70A4
  c->r[4]=c->r[1]+0x00000094u; // 800E70A8
  c->lr=0x800E70B0u; f_8005CD7C(c); // 800E70AC
  {uint32_t ea=c->r[2]+0xFFFFA65Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E70B0
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E70B4
  c->lr=0x800E70BCu; f_8035F688(c); // 800E70B8
  W32(c->r[27]+0x000003F0u,c->r[3]); // 800E70BC
  c->r[3]=c->r[1]+0x0000001Cu; // 800E70C0
  {uint32_t ea=c->r[27]+0x000001C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E70C4
  {uint32_t ea=c->r[27]+0x000001D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E70C8
  {uint32_t ea=c->r[27]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E70CC
  c->lr=0x800E70D4u; f_8005FD70(c); // 800E70D0
  c->r[3]=R32(c->r[27]+0x000003F0u); // 800E70D4
  c->r[4]=c->r[1]+0x0000001Cu; // 800E70D8
  c->lr=0x800E70E0u; f_8035F2B8(c); // 800E70DC
  c->r[3]=R32(c->r[27]+0x000003F0u); // 800E70E0
  c->r[4]=c->r[27]+0x000001B8u; // 800E70E4
  c->lr=0x800E70ECu; f_8035F310(c); // 800E70E8
  c->r[3]=R32(c->r[27]+0x000003F0u); // 800E70EC
  c->lr=0x800E70F4u; f_8035F180(c); // 800E70F0
L_800E70F4:;
  c->r[11]=c->r[1]+0x00000150u; // 800E70F4
  c->lr=0x800E70FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E70F8
  c->r[0]=R32(c->r[1]+0x00000154u); // 800E70FC
  c->lr=c->r[0]; // 800E7100
  c->r[1]=c->r[1]+0x00000150u; // 800E7104
  return; // 800E7108
}

// fn_800E710C
void f_800E710C(Ctx* __restrict c) {
  trace_call(0x800E710Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E710C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7110
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7114
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800E7118
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800E711C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800E7120
  return; // 800E7124
}

// fn_800E7128
void f_800E7128(Ctx* __restrict c) {
  trace_call(0x800E7128u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7128
  c->r[0]=c->lr; // 800E712C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E7134
  c->r[31]=c->r[3]|c->r[3]; // 800E7138
  c->lr=0x800E7140u; f_800D78CC(c); // 800E713C
  c->r[0]=0u+0x00000001u; // 800E7140
  W8(c->r[3]+0x00000074u,c->r[0]); // 800E7144
  c->r[3]=R32(c->r[31]+0x000003F0u); // 800E7148
  cmps(c,0,(int32_t)c->r[3],0); // 800E714C
  if (crb(c,2)) { goto L_800E7158; } // 800E7150
  c->lr=0x800E7158u; f_8035F214(c); // 800E7154
L_800E7158:;
  c->r[0]=R32(c->r[31]+0x000003F4u); // 800E7158
  c->r[3]=0u+0x00000000u; // 800E715C
  W32(c->r[31]+0x000003F0u,c->r[3]); // 800E7160
  cmps(c,0,(int32_t)c->r[0],0); // 800E7164
  if (crb(c,2)) { goto L_800E7180; } // 800E7168
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800E716C
  c->r[3]=c->r[1]+0x0000000Cu; // 800E7170
  c->lr=0x800E7178u; f_8004FA38(c); // 800E7174
  c->r[4]=R32(c->r[31]+0x000003F4u); // 800E7178
  c->lr=0x800E7180u; f_802F1A04(c); // 800E717C
L_800E7180:;
  c->r[0]=R32(c->r[31]+0x000003F8u); // 800E7180
  cmps(c,0,(int32_t)c->r[0],0); // 800E7184
  if (crb(c,2)) { goto L_800E71A4; } // 800E7188
  c->r[0]=0u+0x00000000u; // 800E718C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E7190
  c->r[3]=c->r[1]+0x00000008u; // 800E7194
  c->lr=0x800E719Cu; f_8004FA38(c); // 800E7198
  c->r[4]=R32(c->r[31]+0x000003F8u); // 800E719C
  c->lr=0x800E71A4u; f_802F1A04(c); // 800E71A0
L_800E71A4:;
  c->r[3]=0u+0x00000000u; // 800E71A4
  c->r[0]=0u+0x00000001u; // 800E71A8
  W32(c->r[31]+0x000003F4u,c->r[3]); // 800E71AC
  W32(c->r[31]+0x000003F8u,c->r[3]); // 800E71B0
  W8(c->r[31]+0x00000414u,c->r[0]); // 800E71B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E71B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E71BC
  c->lr=c->r[0]; // 800E71C0
  c->r[1]=c->r[1]+0x00000020u; // 800E71C4
  return; // 800E71C8
}

// fn_800E71CC
void f_800E71CC(Ctx* __restrict c) {
  trace_call(0x800E71CCu);
  W8(c->r[3]+0x000003D9u,c->r[4]); // 800E71CC
  return; // 800E71D0
}

// fn_800E71D4
void f_800E71D4(Ctx* __restrict c) {
  trace_call(0x800E71D4u);
  c->r[0]=R8(c->r[13]+0xFFFFBD68u); // 800E71D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E71D8
  if (!crb(c,2)) { goto L_800E71F8; } // 800E71DC
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 800E71E0
  c->r[0]=0u+0x00000001u; // 800E71E4
  W32(c->r[13]+0xFFFFBD64u,c->r[4]); // 800E71E8
  c->r[4]=c->r[4]+0x00000001u; // 800E71EC
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 800E71F0
  W8(c->r[13]+0xFFFFBD68u,c->r[0]); // 800E71F4
L_800E71F8:;
  {uint32_t ea=c->r[3]+0x000000FCu; c->r[12]=R32(ea); c->r[3]=ea;} // 800E71F8
  c->r[4]=R32(c->r[13]+0xFFFFBD64u); // 800E71FC
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E7200
  c->ctr=c->r[12]; // 800E7204
  if (true) { dispatch(c,c->ctr); return; } // 800E7208
}

// fn_800E720C
void f_800E720C(Ctx* __restrict c) {
  trace_call(0x800E720Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E720C
  c->r[0]=c->lr; // 800E7210
  cmps(c,0,(int32_t)c->r[4],0); // 800E7214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7218
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E721C
  c->r[30]=c->r[3]|c->r[3]; // 800E7220
  c->r[31]=c->r[4]|c->r[4]; // 800E7224
  if (crb(c,2)) { goto L_800E723C; } // 800E7228
  c->lr=0x800E7230u; f_800E71D4(c); // 800E722C
  c->r[4]=c->r[31]|c->r[31]; // 800E7230
  c->lr=0x800E7238u; f_802E9D04(c); // 800E7234
  W32(c->r[30]+0x000003E0u,c->r[3]); // 800E7238
L_800E723C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E723C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7240
  c->lr=c->r[0]; // 800E7244
  c->r[1]=c->r[1]+0x00000010u; // 800E7248
  return; // 800E724C
}

// fn_800E7250
void f_800E7250(Ctx* __restrict c) {
  trace_call(0x800E7250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7250
  c->r[0]=c->lr; // 800E7254
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7258
  c->r[11]=c->r[1]+0x00000020u; // 800E725C
  c->lr=0x800E7264u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E7260
  c->r[0]=R32(c->r[3]+0x000003E0u); // 800E7264
  c->r[29]=c->r[3]|c->r[3]; // 800E7268
  c->r[30]=c->r[4]|c->r[4]; // 800E726C
  c->r[31]=c->r[5]|c->r[5]; // 800E7270
  cmps(c,0,(int32_t)c->r[0],0); // 800E7274
  if (crb(c,2)) { goto L_800E72A0; } // 800E7278
  c->r[3]=c->r[0]|c->r[0]; // 800E727C
  c->lr=0x800E7284u; f_800E736C(c); // 800E7280
  c->r[4]=c->r[30]|c->r[30]; // 800E7284
  c->lr=0x800E728Cu; f_803BA9B0(c); // 800E7288
  cmps(c,0,(int32_t)c->r[3],0); // 800E728C
  if (!crb(c,2)) { goto L_800E72A0; } // 800E7290
  c->r[3]=c->r[29]|c->r[29]; // 800E7294
  c->lr=0x800E729Cu; f_800E7464(c); // 800E7298
  goto L_800E7344; // 800E729C
L_800E72A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E72A0
  if (crb(c,2)) { goto L_800E7318; } // 800E72A4
  c->r[4]=c->r[31]|c->r[31]; // 800E72A8
  c->r[3]=c->r[29]+0x000000FCu; // 800E72AC
  c->lr=0x800E72B4u; f_802E6E50(c); // 800E72B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E72B4
  c->r[31]=c->r[3]|c->r[3]; // 800E72B8
  if (!crb(c,2)) { goto L_800E72DC; } // 800E72BC
  c->r[3]=0u+0x806D0000u; // 800E72C0
  c->r[5]=0u+0x806D0000u; // 800E72C4
  c->r[3]=c->r[3]+0xFFFFE3D8u; // 800E72C8
  c->r[4]=0u+0x00000038u; // 800E72CC
  c->r[5]=c->r[5]+0xFFFFE3B8u; // 800E72D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E72D4
  c->lr=0x800E72DCu; f_80484674(c); // 800E72D8
L_800E72DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E72DC
  if (crb(c,2)) { goto L_800E72EC; } // 800E72E0
  c->r[31]=R32(c->r[31]+0x0000000Cu); // 800E72E4
  goto L_800E72F0; // 800E72E8
L_800E72EC:;
  c->r[31]=0u+0x00000000u; // 800E72EC
L_800E72F0:;
  c->r[3]=c->r[29]|c->r[29]; // 800E72F0
  c->lr=0x800E72F8u; f_800E71D4(c); // 800E72F4
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E72F8
  c->r[6]=c->r[30]|c->r[30]; // 800E72FC
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7300
  c->r[7]=c->r[31]|c->r[31]; // 800E7304
  c->r[4]=0u+0x00000000u; // 800E7308
  c->r[5]=0u+0xFFFFFFFDu; // 800E730C
  c->lr=0x800E7314u; f_802E955C(c); // 800E7310
  goto L_800E7344; // 800E7314
L_800E7318:;
  c->r[3]=c->r[29]|c->r[29]; // 800E7318
  c->lr=0x800E7320u; f_800E71D4(c); // 800E731C
  c->r[4]=0u+0x00000003u; // 800E7320
  c->lr=0x800E7328u; f_802E9FB8(c); // 800E7324
  c->r[3]=c->r[29]|c->r[29]; // 800E7328
  c->lr=0x800E7330u; f_800E71D4(c); // 800E732C
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7330
  c->r[4]=c->r[30]|c->r[30]; // 800E7334
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7338
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E733C
  c->lr=0x800E7344u; f_802E8A64(c); // 800E7340
L_800E7344:;
  c->r[3]=c->r[29]|c->r[29]; // 800E7344
  c->lr=0x800E734Cu; f_800E7128(c); // 800E7348
  c->r[3]=c->r[29]|c->r[29]; // 800E734C
  c->lr=0x800E7354u; f_800E73DC(c); // 800E7350
  c->r[11]=c->r[1]+0x00000020u; // 800E7354
  c->lr=0x800E735Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E7358
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E735C
  c->lr=c->r[0]; // 800E7360
  c->r[1]=c->r[1]+0x00000020u; // 800E7364
  return; // 800E7368
}

// fn_800E736C
void f_800E736C(Ctx* __restrict c) {
  trace_call(0x800E736Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E736C
  c->r[0]=c->lr; // 800E7370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7378
  c->r[31]=R32(c->r[3]+0x0000002Cu); // 800E737C
  cmps(c,0,(int32_t)c->r[31],0); // 800E7380
  if (!crb(c,2)) { goto L_800E73B0; } // 800E7384
  c->r[3]=0u+0x806E0000u; // 800E7388
  c->r[5]=0u+0x806E0000u; // 800E738C
  c->r[6]=0u+0x806D0000u; // 800E7390
  c->r[4]=0u+0x00000027u; // 800E7394
  c->r[3]=c->r[3]+0xFFFF8020u; // 800E7398
  c->r[5]=c->r[5]+0xFFFF8004u; // 800E739C
  c->r[6]=c->r[6]+0x00007FF8u; // 800E73A0
  c->r[7]=c->r[13]+0xFFFF84D0u; // 800E73A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E73A8
  c->lr=0x800E73B0u; f_80484674(c); // 800E73AC
L_800E73B0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800E73B0
  cmps(c,0,(int32_t)c->r[0],0); // 800E73B4
  if (crb(c,2)) { goto L_800E73C4; } // 800E73B8
  c->r[3]=c->r[31]+c->r[0]; // 800E73BC
  goto L_800E73C8; // 800E73C0
L_800E73C4:;
  c->r[3]=0u+0x00000000u; // 800E73C4
L_800E73C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E73C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E73CC
  c->lr=c->r[0]; // 800E73D0
  c->r[1]=c->r[1]+0x00000010u; // 800E73D4
  return; // 800E73D8
}

// fn_800E73DC
void f_800E73DC(Ctx* __restrict c) {
  trace_call(0x800E73DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E73DC
  c->r[0]=c->lr; // 800E73E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E73E4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E73E8
  c->r[28]=c->r[3]|c->r[3]; // 800E73EC
  c->r[31]=c->r[1]|c->r[1]; // 800E73F0
  c->r[0]=R8(c->r[3]+0x00000010u); // 800E73F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E73F8
  c->r[3]=c->r[3]+c->r[0]; // 800E73FC
  c->r[29]=R32(c->r[3]+0x00000014u); // 800E7400
  cmps(c,0,(int32_t)c->r[29],0); // 800E7404
  if (crb(c,2)) { goto L_800E7430; } // 800E7408
  c->r[30]=0u+0x00000000u; // 800E740C
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E7410
  W8(c->r[31]+0x00000008u,c->r[30]); // 800E7414
  c->lr=0x800E741Cu; f_800E6A20(c); // 800E7418
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E741C
  c->r[0]=c->r[13]+0xFFFF84E4u; // 800E7420
  W32(c->r[29]+0x00000004u,c->r[0]); // 800E7424
  W32(c->r[29]+0x00000008u,c->r[30]); // 800E7428
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800E742C
L_800E7430:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E7430
  c->r[0]=0u+0x00000000u; // 800E7434
  c->r[10]=c->r[31]|c->r[31]; // 800E7438
  c->r[3]=c->r[29]|c->r[29]; // 800E743C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800E7440
  c->r[0]=R32(c->r[28]+0x00000004u); // 800E7444
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800E7448
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E744C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E7450
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E7454
  c->r[1]=c->r[10]|c->r[10]; // 800E7458
  c->lr=c->r[0]; // 800E745C
  return; // 800E7460
}

// fn_800E7464
void f_800E7464(Ctx* __restrict c) {
  trace_call(0x800E7464u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7464
  c->r[0]=c->lr; // 800E7468
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E746C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E7470
  c->r[28]=c->r[3]|c->r[3]; // 800E7474
  c->r[31]=c->r[1]|c->r[1]; // 800E7478
  c->r[0]=R8(c->r[3]+0x00000010u); // 800E747C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E7480
  c->r[3]=c->r[3]+c->r[0]; // 800E7484
  c->r[29]=R32(c->r[3]+0x00000014u); // 800E7488
  cmps(c,0,(int32_t)c->r[29],0); // 800E748C
  if (crb(c,2)) { goto L_800E74B8; } // 800E7490
  c->r[30]=0u+0x00000000u; // 800E7494
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E7498
  W8(c->r[31]+0x00000008u,c->r[30]); // 800E749C
  c->lr=0x800E74A4u; f_800E69B8(c); // 800E74A0
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E74A4
  c->r[0]=c->r[13]+0xFFFF84E0u; // 800E74A8
  W32(c->r[29]+0x00000004u,c->r[0]); // 800E74AC
  W32(c->r[29]+0x00000008u,c->r[30]); // 800E74B0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800E74B4
L_800E74B8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E74B8
  c->r[0]=0u+0x00000000u; // 800E74BC
  c->r[10]=c->r[31]|c->r[31]; // 800E74C0
  c->r[3]=c->r[29]|c->r[29]; // 800E74C4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800E74C8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800E74CC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800E74D0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E74D4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E74D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E74DC
  c->r[1]=c->r[10]|c->r[10]; // 800E74E0
  c->lr=c->r[0]; // 800E74E4
  return; // 800E74E8
}

// fn_800E74EC
void f_800E74EC(Ctx* __restrict c) {
  trace_call(0x800E74ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E74EC
  c->r[0]=c->lr; // 800E74F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E74F4
  c->r[11]=c->r[1]+0x00000020u; // 800E74F8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E74FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E7500
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800E7504
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800E7508
  c->lr=0x800E7510u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E750C
  c->f[30]=c->f[1]; // 800E7510
  c->r[29]=c->r[3]|c->r[3]; // 800E7514
  c->lr=0x800E751Cu; f_800E71D4(c); // 800E7518
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E751C
  c->r[31]=c->r[3]|c->r[3]; // 800E7520
  c->r[30]=0u+0x00000000u; // 800E7524
  goto L_800E755C; // 800E7528
L_800E752C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E752C
  c->r[4]=c->r[30]|c->r[30]; // 800E7530
  c->lr=0x800E7538u; f_802E9F0C(c); // 800E7534
  cmps(c,0,(int32_t)c->r[3],0); // 800E7538
  if (crb(c,2)) { goto L_800E7558; } // 800E753C
  fcmp(c,0,c->f[31],c->f[30]); // 800E7540
  if (!crb(c,2)) { goto L_800E754C; } // 800E7544
  {uint32_t ea=c->r[3]+0x00000048u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E7548
L_800E754C:;
  c->f[1]=c->f[30]; // 800E754C
  c->r[4]=0u+0x00000001u; // 800E7550
  c->lr=0x800E7558u; f_802ECA30(c); // 800E7554
L_800E7558:;
  c->r[30]=c->r[30]+0x00000001u; // 800E7558
L_800E755C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E755C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800E7560
  if (crb(c,0)) { IRQCHK(c); goto L_800E752C; } // 800E7564
  c->r[3]=c->r[29]|c->r[29]; // 800E7568
  c->lr=0x800E7570u; f_800E7128(c); // 800E756C
  c->r[11]=c->r[1]+0x00000020u; // 800E7570
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E7574
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E7578
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800E757C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800E7580
  c->lr=0x800E7588u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E7584
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E7588
  c->lr=c->r[0]; // 800E758C
  c->r[1]=c->r[1]+0x00000040u; // 800E7590
  return; // 800E7594
}

// fn_800E7598
void f_800E7598(Ctx* __restrict c) {
  trace_call(0x800E7598u);
  {uint32_t ea=c->r[1]+0xFFFFFBC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7598
  c->r[0]=c->lr; // 800E759C
  W32(c->r[1]+0x00000444u,c->r[0]); // 800E75A0
  c->r[11]=c->r[1]+0x00000430u; // 800E75A4
  {uint32_t ea=c->r[1]+0x00000430u; WF64(ea,c->f[31]);} // 800E75A8
  {uint32_t ea=c->r[1]+0x00000438u; psq_store(c,31,ea,0,0);} // 800E75AC
  c->lr=0x800E75B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E75B0
  c->r[30]=c->r[3]|c->r[3]; // 800E75B4
  c->r[3]=0u+0x00000150u; // 800E75B8
  c->lr=0x800E75C0u; f_8007C17C(c); // 800E75BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E75C0
  c->r[26]=c->r[3]|c->r[3]; // 800E75C4
  if (crb(c,2)) { goto L_800E75D0; } // 800E75C8
  c->lr=0x800E75D0u; f_802F026C(c); // 800E75CC
L_800E75D0:;
  c->r[12]=R32(c->r[30]+0x000000FCu); // 800E75D0
  c->r[3]=c->r[30]+0x000000FCu; // 800E75D4
  c->r[4]=c->r[26]|c->r[26]; // 800E75D8
  c->r[5]=0u+0x00000001u; // 800E75DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800E75E0
  c->ctr=c->r[12]; // 800E75E4
  if (true) { c->lr=0x800E75ECu; dispatch(c,c->ctr); } // 800E75E8
  c->r[3]=0u+0x00000098u; // 800E75EC
  c->lr=0x800E75F4u; f_8007C17C(c); // 800E75F0
  cmps(c,0,(int32_t)c->r[3],0); // 800E75F4
  c->r[26]=c->r[3]|c->r[3]; // 800E75F8
  if (crb(c,2)) { goto L_800E7604; } // 800E75FC
  c->lr=0x800E7604u; f_80319908(c); // 800E7600
L_800E7604:;
  c->r[12]=R32(c->r[30]+0x000000FCu); // 800E7604
  c->r[3]=c->r[30]+0x000000FCu; // 800E7608
  c->r[4]=c->r[26]|c->r[26]; // 800E760C
  c->r[5]=0u+0x00000001u; // 800E7610
  c->r[12]=R32(c->r[12]+0x00000040u); // 800E7614
  c->ctr=c->r[12]; // 800E7618
  if (true) { c->lr=0x800E7620u; dispatch(c,c->ctr); } // 800E761C
  c->r[3]=c->r[30]|c->r[30]; // 800E7620
  c->lr=0x800E7628u; f_800E71D4(c); // 800E7624
  c->r[5]=0u+0x80690000u; // 800E7628
  c->r[5]=c->r[5]+0xFFFFEB88u; // 800E762C
  c->r[4]=c->r[5]+0x00000001u; // 800E7630
  c->lr=0x800E7638u; f_802E8788(c); // 800E7634
  c->r[3]=c->r[30]+0x000000FCu; // 800E7638
  c->r[4]=0u+0x00000000u; // 800E763C
  c->r[5]=0u+0x00000003u; // 800E7640
  c->r[6]=0u+0x00000001u; // 800E7644
  c->r[7]=0u+0xFFFFFFFFu; // 800E7648
  c->r[8]=0u+0x00000000u; // 800E764C
  c->lr=0x800E7654u; f_800A9900(c); // 800E7650
  c->r[0]=R8(c->r[13]+0xFFFFBE80u); // 800E7654
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E7658
  if (!crb(c,2)) { goto L_800E7678; } // 800E765C
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 800E7660
  c->r[0]=0u+0x00000001u; // 800E7664
  W32(c->r[13]+0xFFFFBE7Cu,c->r[3]); // 800E7668
  c->r[3]=c->r[3]+0x00000001u; // 800E766C
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 800E7670
  W8(c->r[13]+0xFFFFBE80u,c->r[0]); // 800E7674
L_800E7678:;
  c->r[12]=R32(c->r[30]+0x000000FCu); // 800E7678
  c->r[3]=c->r[30]+0x000000FCu; // 800E767C
  c->r[4]=R32(c->r[13]+0xFFFFBE7Cu); // 800E7680
  c->r[12]=R32(c->r[12]+0x00000048u); // 800E7684
  c->ctr=c->r[12]; // 800E7688
  if (true) { c->lr=0x800E7690u; dispatch(c,c->ctr); } // 800E768C
  c->r[4]=R32(c->r[30]+0x00000138u); // 800E7690
  c->r[27]=c->r[3]|c->r[3]; // 800E7694
  c->r[26]=R32(c->r[4]+0x000000E8u); // 800E7698
  cmps(c,0,(int32_t)c->r[26],0); // 800E769C
  if (!crb(c,2)) { goto L_800E76C8; } // 800E76A0
  c->r[3]=0u+0x806D0000u; // 800E76A4
  c->r[5]=0u+0x806D0000u; // 800E76A8
  c->r[3]=c->r[3]+0x00004F70u; // 800E76AC
  c->r[4]=0u+0x00000078u; // 800E76B0
  c->r[5]=c->r[5]+0x00004F50u; // 800E76B4
  c->r[6]=c->r[13]+0xFFFF8118u; // 800E76B8
  c->r[7]=c->r[13]+0xFFFF84D8u; // 800E76BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E76C0
  c->lr=0x800E76C8u; f_80484674(c); // 800E76C4
L_800E76C8:;
  c->r[0]=R32(c->r[26]+0x00000048u); // 800E76C8
  cmps(c,0,(int32_t)c->r[0],0); // 800E76CC
  if (crb(c,2)) { goto L_800E76DC; } // 800E76D0
  c->r[26]=c->r[26]+c->r[0]; // 800E76D4
  goto L_800E76E0; // 800E76D8
L_800E76DC:;
  c->r[26]=0u+0x00000000u; // 800E76DC
L_800E76E0:;
  c->lr=0x800E76E4u; f_8008BCC8(c); // 800E76E0
  c->r[5]=c->r[3]|c->r[3]; // 800E76E4
  c->r[4]=c->r[26]|c->r[26]; // 800E76E8
  c->r[3]=c->r[27]+0x00000044u; // 800E76EC
  c->lr=0x800E76F4u; f_8008BAB4(c); // 800E76F0
  c->r[26]=0u+0x80690000u; // 800E76F4
  c->r[3]=c->r[30]+0x000000FCu; // 800E76F8
  c->r[26]=c->r[26]+0xFFFFEB88u; // 800E76FC
  c->r[5]=0u+0x00000000u; // 800E7700
  c->r[4]=c->r[26]+0x00000011u; // 800E7704
  c->lr=0x800E770Cu; f_802E6904(c); // 800E7708
  c->r[3]=c->r[30]|c->r[30]; // 800E770C
  c->lr=0x800E7714u; f_800D78CC(c); // 800E7710
  c->r[27]=R32(c->r[3]+0x00000094u); // 800E7714
  c->r[0]=0u+0x00000000u; // 800E7718
  c->r[31]=c->r[3]|c->r[3]; // 800E771C
  c->r[3]=c->r[1]+0x00000008u; // 800E7720
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E7724
  c->lr=0x800E772Cu; f_8004FA38(c); // 800E7728
  c->r[4]=c->r[27]|c->r[27]; // 800E772C
  c->r[5]=0u+0x00000000u; // 800E7730
  c->lr=0x800E7738u; f_802F1638(c); // 800E7734
  c->r[3]=c->r[30]+0x000000FCu; // 800E7738
  c->r[4]=c->r[26]+0x00000018u; // 800E773C
  c->lr=0x800E7744u; f_802E6E50(c); // 800E7740
  c->r[29]=c->r[3]|c->r[3]; // 800E7744
  c->r[3]=c->r[30]+0x000000FCu; // 800E7748
  c->r[4]=c->r[26]+0x0000001Eu; // 800E774C
  c->lr=0x800E7754u; f_802E6E50(c); // 800E7750
  c->r[28]=c->r[3]|c->r[3]; // 800E7754
  c->r[3]=c->r[30]+0x000000FCu; // 800E7758
  c->r[4]=c->r[26]+0x00000023u; // 800E775C
  c->lr=0x800E7764u; f_802E6E50(c); // 800E7760
  c->r[27]=c->r[3]|c->r[3]; // 800E7764
  c->r[3]=c->r[30]+0x000000FCu; // 800E7768
  c->r[4]=c->r[26]+0x00000029u; // 800E776C
  c->lr=0x800E7774u; f_802E6E50(c); // 800E7770
  cmps(c,0,(int32_t)c->r[29],0); // 800E7774
  c->r[30]=c->r[3]|c->r[3]; // 800E7778
  if (!crb(c,2)) { goto L_800E77A4; } // 800E777C
  c->r[3]=0u+0x806D0000u; // 800E7780
  c->r[5]=0u+0x806D0000u; // 800E7784
  c->r[3]=c->r[3]+0x00003A48u; // 800E7788
  c->r[4]=0u+0x0000002Cu; // 800E778C
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E7790
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E7794
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E7798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E779C
  c->lr=0x800E77A4u; f_80484674(c); // 800E77A0
L_800E77A4:;
  c->r[3]=c->r[1]+0x00000078u; // 800E77A4
  c->r[4]=c->r[29]+0x00000038u; // 800E77A8
  c->lr=0x800E77B0u; f_800E710C(c); // 800E77AC
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E77B0
  c->r[3]=0u+0x00030000u; // 800E77B4
  c->r[5]=0u+0x00000000u; // 800E77B8
  c->r[4]=0u+0x00000001u; // 800E77BC
  c->r[0]=c->r[3]+0x00000D40u; // 800E77C0
  c->r[3]=0u+0x00000002u; // 800E77C4
  cmps(c,0,(int32_t)c->r[28],0); // 800E77C8
  W32(c->r[1]+0x00000330u,c->r[3]); // 800E77CC
  W32(c->r[1]+0x00000338u,c->r[5]); // 800E77D0
  W32(c->r[1]+0x00000334u,c->r[4]); // 800E77D4
  W8(c->r[1]+0x0000033Cu,c->r[4]); // 800E77D8
  {uint32_t ea=c->r[1]+0x000003E0u; WF32(ea,c->f[0]);} // 800E77DC
  W32(c->r[1]+0x000003E4u,c->r[0]); // 800E77E0
  W32(c->r[1]+0x000003E8u,c->r[5]); // 800E77E4
  W32(c->r[1]+0x000003ECu,c->r[5]); // 800E77E8
  W32(c->r[1]+0x000003F0u,c->r[5]); // 800E77EC
  W8(c->r[1]+0x000003F4u,c->r[5]); // 800E77F0
  if (crb(c,2)) { goto L_800E78B4; } // 800E77F4
  c->r[4]=0u+0x80690000u; // 800E77F8
  c->r[3]=c->r[1]+0x0000033Du; // 800E77FC
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E7800
  c->r[4]=c->r[4]+0x0000001Eu; // 800E7804
  c->lr=0x800E780Cu; f_803B37C0(c); // 800E7808
  c->r[3]=c->r[1]+0x00000380u; // 800E780C
  c->lr=0x800E7814u; f_80382F00(c); // 800E7810
  c->r[3]=c->r[1]+0x000003B0u; // 800E7814
  c->lr=0x800E781Cu; f_80382F00(c); // 800E7818
  cmps(c,0,(int32_t)c->r[28],0); // 800E781C
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E7820
  if (!crb(c,2)) { goto L_800E784C; } // 800E7824
  c->r[3]=0u+0x806D0000u; // 800E7828
  c->r[5]=0u+0x806D0000u; // 800E782C
  c->r[3]=c->r[3]+0x00003A48u; // 800E7830
  c->r[4]=0u+0x0000002Cu; // 800E7834
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E7838
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E783C
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E7840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E7844
  c->lr=0x800E784Cu; f_80484674(c); // 800E7848
L_800E784C:;
  c->r[3]=c->r[1]+0x00000054u; // 800E784C
  c->r[4]=c->r[28]+0x00000038u; // 800E7850
  c->lr=0x800E7858u; f_800E710C(c); // 800E7854
  c->r[5]=c->r[3]|c->r[3]; // 800E7858
  c->r[3]=c->r[1]+0x00000060u; // 800E785C
  c->r[4]=c->r[1]+0x00000078u; // 800E7860
  c->lr=0x800E7868u; f_8005FC60(c); // 800E7864
  c->r[3]=c->r[1]+0x00000060u; // 800E7868
  c->r[4]=c->r[1]+0x0000000Cu; // 800E786C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800E7870
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800E7874
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800E7878
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800E787C
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800E7880
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800E7884
  c->r[3]=c->r[1]+0x0000006Cu; // 800E7888
  c->lr=0x800E7890u; f_8005CD7C(c); // 800E788C
  c->r[3]=c->r[1]+0x000003B0u; // 800E7890
  c->r[4]=c->r[1]+0x0000006Cu; // 800E7894
  c->lr=0x800E789Cu; f_8005CDC8(c); // 800E7898
  c->r[3]=c->r[1]+0x0000024Cu; // 800E789C
  c->r[4]=c->r[1]+0x00000330u; // 800E78A0
  c->lr=0x800E78A8u; f_800E7A54(c); // 800E78A4
  c->r[4]=c->r[3]|c->r[3]; // 800E78A8
  c->r[3]=c->r[31]|c->r[31]; // 800E78AC
  c->lr=0x800E78B4u; f_8031A5B0(c); // 800E78B0
L_800E78B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800E78B4
  if (crb(c,2)) { goto L_800E794C; } // 800E78B8
  c->r[4]=0u+0x80690000u; // 800E78BC
  c->r[3]=c->r[1]+0x0000033Du; // 800E78C0
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E78C4
  c->r[4]=c->r[4]+0x00000023u; // 800E78C8
  c->lr=0x800E78D0u; f_803B37C0(c); // 800E78CC
  c->r[3]=c->r[1]+0x00000380u; // 800E78D0
  c->lr=0x800E78D8u; f_80382F00(c); // 800E78D4
  c->r[3]=c->r[1]+0x000003B0u; // 800E78D8
  c->lr=0x800E78E0u; f_80382F00(c); // 800E78DC
  cmps(c,0,(int32_t)c->r[27],0); // 800E78E0
  if (!crb(c,2)) { goto L_800E790C; } // 800E78E4
  c->r[3]=0u+0x806D0000u; // 800E78E8
  c->r[5]=0u+0x806D0000u; // 800E78EC
  c->r[3]=c->r[3]+0x00003A48u; // 800E78F0
  c->r[4]=0u+0x0000002Cu; // 800E78F4
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E78F8
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E78FC
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E7900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E7904
  c->lr=0x800E790Cu; f_80484674(c); // 800E7908
L_800E790C:;
  c->r[3]=c->r[1]+0x0000003Cu; // 800E790C
  c->r[4]=c->r[27]+0x00000038u; // 800E7910
  c->lr=0x800E7918u; f_800E710C(c); // 800E7914
  c->r[5]=c->r[3]|c->r[3]; // 800E7918
  c->r[3]=c->r[1]+0x00000048u; // 800E791C
  c->r[4]=c->r[1]+0x00000078u; // 800E7920
  c->lr=0x800E7928u; f_8005FC60(c); // 800E7924
  c->r[3]=c->r[1]+0x000003B0u; // 800E7928
  c->r[4]=c->r[1]+0x00000048u; // 800E792C
  c->lr=0x800E7934u; f_8005CDC8(c); // 800E7930
  c->r[3]=c->r[1]+0x00000168u; // 800E7934
  c->r[4]=c->r[1]+0x00000330u; // 800E7938
  c->lr=0x800E7940u; f_800E7A54(c); // 800E793C
  c->r[4]=c->r[3]|c->r[3]; // 800E7940
  c->r[3]=c->r[31]|c->r[31]; // 800E7944
  c->lr=0x800E794Cu; f_8031A5B0(c); // 800E7948
L_800E794C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E794C
  if (crb(c,2)) { goto L_800E79E4; } // 800E7950
  c->r[4]=0u+0x80690000u; // 800E7954
  c->r[3]=c->r[1]+0x0000033Du; // 800E7958
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E795C
  c->r[4]=c->r[4]+0x00000029u; // 800E7960
  c->lr=0x800E7968u; f_803B37C0(c); // 800E7964
  c->r[3]=c->r[1]+0x00000380u; // 800E7968
  c->lr=0x800E7970u; f_80382F00(c); // 800E796C
  c->r[3]=c->r[1]+0x000003B0u; // 800E7970
  c->lr=0x800E7978u; f_80382F00(c); // 800E7974
  cmps(c,0,(int32_t)c->r[30],0); // 800E7978
  if (!crb(c,2)) { goto L_800E79A4; } // 800E797C
  c->r[3]=0u+0x806D0000u; // 800E7980
  c->r[5]=0u+0x806D0000u; // 800E7984
  c->r[3]=c->r[3]+0x00003A48u; // 800E7988
  c->r[4]=0u+0x0000002Cu; // 800E798C
  c->r[5]=c->r[5]+0x00003A2Cu; // 800E7990
  c->r[6]=c->r[13]+0xFFFF8120u; // 800E7994
  c->r[7]=c->r[13]+0xFFFF84D4u; // 800E7998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E799C
  c->lr=0x800E79A4u; f_80484674(c); // 800E79A0
L_800E79A4:;
  c->r[3]=c->r[1]+0x00000024u; // 800E79A4
  c->r[4]=c->r[30]+0x00000038u; // 800E79A8
  c->lr=0x800E79B0u; f_800E710C(c); // 800E79AC
  c->r[5]=c->r[3]|c->r[3]; // 800E79B0
  c->r[3]=c->r[1]+0x00000030u; // 800E79B4
  c->r[4]=c->r[1]+0x00000078u; // 800E79B8
  c->lr=0x800E79C0u; f_8005FC60(c); // 800E79BC
  c->r[3]=c->r[1]+0x000003B0u; // 800E79C0
  c->r[4]=c->r[1]+0x00000030u; // 800E79C4
  c->lr=0x800E79CCu; f_8005CDC8(c); // 800E79C8
  c->r[3]=c->r[1]+0x00000084u; // 800E79CC
  c->r[4]=c->r[1]+0x00000330u; // 800E79D0
  c->lr=0x800E79D8u; f_800E7A54(c); // 800E79D4
  c->r[4]=c->r[3]|c->r[3]; // 800E79D8
  c->r[3]=c->r[31]|c->r[31]; // 800E79DC
  c->lr=0x800E79E4u; f_8031A5B0(c); // 800E79E0
L_800E79E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E79E4
  c->r[5]=c->r[31]|c->r[31]; // 800E79E8
  if (crb(c,2)) { goto L_800E79F4; } // 800E79EC
  c->r[5]=c->r[31]+0x00000038u; // 800E79F0
L_800E79F4:;
  c->r[3]=0u+0x80760000u; // 800E79F4
  c->r[3]=c->r[3]+0xFFFFA58Cu; // 800E79F8
  c->r[4]=c->r[3]|c->r[3]; // 800E79FC
  c->lr=0x800E7A04u; f_802DDCA8(c); // 800E7A00
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7A04
  c->r[0]=0u+0x00000000u; // 800E7A08
  W8(c->r[31]+0x00000074u,c->r[0]); // 800E7A0C
  c->r[3]=c->r[1]+0x00000018u; // 800E7A10
  c->f[2]=c->f[1]; // 800E7A14
  c->f[3]=c->f[1]; // 800E7A18
  c->lr=0x800E7A20u; f_8005FD70(c); // 800E7A1C
  c->r[3]=c->r[31]+0x00000068u; // 800E7A20
  c->r[4]=c->r[1]+0x00000018u; // 800E7A24
  c->lr=0x800E7A2Cu; f_8005DC84(c); // 800E7A28
  c->r[0]=0u+0x00000001u; // 800E7A2C
  W8(c->r[31]+0x00000064u,c->r[0]); // 800E7A30
  {uint32_t ea=c->r[1]+0x00000438u; psq_load(c,31,ea,0,0);} // 800E7A34
  {uint32_t ea=c->r[1]+0x00000430u; c->f[31]=RF64(ea);} // 800E7A38
  c->r[11]=c->r[1]+0x00000430u; // 800E7A3C
  c->lr=0x800E7A44u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E7A40
  c->r[0]=R32(c->r[1]+0x00000444u); // 800E7A44
  c->lr=c->r[0]; // 800E7A48
  c->r[1]=c->r[1]+0x00000440u; // 800E7A4C
  return; // 800E7A50
}

// fn_800E7A54
void f_800E7A54(Ctx* __restrict c) {
  trace_call(0x800E7A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7A54
  c->r[0]=c->lr; // 800E7A58
  c->r[6]=c->r[3]+0x00000009u; // 800E7A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7A60
  c->r[0]=0u+0x00000008u; // 800E7A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7A68
  c->r[31]=c->r[3]|c->r[3]; // 800E7A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E7A70
  c->r[30]=c->r[4]|c->r[4]; // 800E7A74
  c->r[5]=R32(c->r[4]+0x00000000u); // 800E7A78
  W32(c->r[3]+0x00000000u,c->r[5]); // 800E7A7C
  c->r[5]=c->r[4]+0x00000009u; // 800E7A80
  c->r[7]=R32(c->r[4]+0x00000004u); // 800E7A84
  W32(c->r[3]+0x00000004u,c->r[7]); // 800E7A88
  c->r[7]=R32(c->r[4]+0x00000008u); // 800E7A8C
  W32(c->r[3]+0x00000008u,c->r[7]); // 800E7A90
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 800E7A94
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800E7A98
  c->ctr=c->r[0]; // 800E7A9C
L_800E7AA0:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 800E7AA0
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800E7AA4
  W32(c->r[6]+0x00000004u,c->r[3]); // 800E7AA8
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800E7AAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E7AA0; } // 800E7AB0
  c->r[3]=c->r[4]+0x00000050u; // 800E7AB4
  c->r[4]=c->r[31]+0x00000050u; // 800E7AB8
  c->lr=0x800E7AC0u; f_80382F2C(c); // 800E7ABC
  c->r[3]=c->r[30]+0x00000080u; // 800E7AC0
  c->r[4]=c->r[31]+0x00000080u; // 800E7AC4
  c->lr=0x800E7ACCu; f_80382F2C(c); // 800E7AC8
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7ACC
  c->r[0]=0u+0x00000003u; // 800E7AD0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800E7AD4
  c->r[5]=c->r[31]+0x000000C1u; // 800E7AD8
  c->r[4]=c->r[30]+0x000000C1u; // 800E7ADC
  c->r[3]=R32(c->r[30]+0x000000B4u); // 800E7AE0
  W32(c->r[31]+0x000000B4u,c->r[3]); // 800E7AE4
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800E7AE8
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800E7AEC
  c->r[3]=R32(c->r[30]+0x000000BCu); // 800E7AF0
  W32(c->r[31]+0x000000BCu,c->r[3]); // 800E7AF4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800E7AF8
  W32(c->r[31]+0x000000C0u,c->r[3]); // 800E7AFC
  c->r[3]=R8(c->r[30]+0x000000C4u); // 800E7B00
  W8(c->r[31]+0x000000C4u,c->r[3]); // 800E7B04
  c->ctr=c->r[0]; // 800E7B08
L_800E7B0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800E7B0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800E7B10
  W32(c->r[5]+0x00000004u,c->r[3]); // 800E7B14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800E7B18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E7B0C; } // 800E7B1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E7B20
  c->r[3]=c->r[31]|c->r[31]; // 800E7B24
  W32(c->r[5]+0x00000004u,c->r[0]); // 800E7B28
  c->r[0]=R16(c->r[4]+0x00000008u); // 800E7B2C
  W16(c->r[5]+0x00000008u,c->r[0]); // 800E7B30
  c->r[0]=R8(c->r[4]+0x0000000Au); // 800E7B34
  W8(c->r[5]+0x0000000Au,c->r[0]); // 800E7B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7B3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E7B40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7B44
  c->lr=c->r[0]; // 800E7B48
  c->r[1]=c->r[1]+0x00000010u; // 800E7B4C
  return; // 800E7B50
}

// fn_800E7B54
void f_800E7B54(Ctx* __restrict c) {
  trace_call(0x800E7B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7B54
  c->r[0]=c->lr; // 800E7B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E7B5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E7B60
  c->r[31]=c->r[4]|c->r[4]; // 800E7B64
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E7B68
  c->r[30]=c->r[3]|c->r[3]; // 800E7B6C
  c->r[0]=R8(c->r[3]+0x000003D9u); // 800E7B70
  cmps(c,0,(int32_t)c->r[0],0); // 800E7B74
  if (crb(c,2)) { goto L_800E7BA0; } // 800E7B78
  {uint32_t ea=c->r[4]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7B7C
  {uint32_t ea=c->r[3]+0x000003D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7B80
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E7B84
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800E7B88
  {uint32_t ea=c->r[3]+0x000003D0u; WF32(ea,c->f[1]);} // 800E7B8C
  fcmp(c,0,c->f[1],c->f[0]); // 800E7B90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E7B94
  if (!crb(c,2)) { goto L_800E7BA0; } // 800E7B98
  c->lr=0x800E7BA0u; f_800E7464(c); // 800E7B9C
L_800E7BA0:;
  c->r[3]=c->r[1]+0x00000008u; // 800E7BA0
  c->r[4]=c->r[31]+0x00000014u; // 800E7BA4
  c->lr=0x800E7BACu; f_8005CD7C(c); // 800E7BA8
  c->r[6]=R32(c->r[31]+0x00000038u); // 800E7BAC
  c->r[3]=c->r[30]|c->r[30]; // 800E7BB0
  c->r[7]=R32(c->r[31]+0x00000060u); // 800E7BB4
  c->r[4]=c->r[1]+0x00000008u; // 800E7BB8
  c->r[8]=R32(c->r[30]+0x000003ECu); // 800E7BBC
  c->r[5]=c->r[31]+0x00000020u; // 800E7BC0
  c->lr=0x800E7BC8u; f_800E4EA8(c); // 800E7BC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E7BC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E7BCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E7BD0
  c->lr=c->r[0]; // 800E7BD4
  c->r[1]=c->r[1]+0x00000020u; // 800E7BD8
  return; // 800E7BDC
}

// fn_800E7BE0
void f_800E7BE0(Ctx* __restrict c) {
  trace_call(0x800E7BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7BE0
  c->r[0]=c->lr; // 800E7BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7BEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E7BF0
  c->r[30]=c->r[3]|c->r[3]; // 800E7BF4
  c->r[31]=R32(c->r[3]+0x000003DCu); // 800E7BF8
  cmps(c,0,(int32_t)c->r[31],0); // 800E7BFC
  if (crb(c,2)) { goto L_800E7C20; } // 800E7C00
  c->lr=0x800E7C08u; f_800E71D4(c); // 800E7C04
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7C08
  c->r[4]=c->r[31]|c->r[31]; // 800E7C0C
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7C10
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E7C14
  c->lr=0x800E7C1Cu; f_802E8B94(c); // 800E7C18
  goto L_800E7C40; // 800E7C1C
L_800E7C20:;
  c->lr=0x800E7C24u; f_800E71D4(c); // 800E7C20
  c->r[4]=0u+0x80690000u; // 800E7C24
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7C28
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E7C2C
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7C30
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E7C34
  c->r[4]=c->r[4]+0x0000002Fu; // 800E7C38
  c->lr=0x800E7C40u; f_802E8A64(c); // 800E7C3C
L_800E7C40:;
  c->r[3]=c->r[30]|c->r[30]; // 800E7C40
  c->lr=0x800E7C48u; f_800E7128(c); // 800E7C44
  c->r[3]=c->r[30]|c->r[30]; // 800E7C48
  c->lr=0x800E7C50u; f_800E73DC(c); // 800E7C4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E7C58
  c->lr=c->r[0]; // 800E7C5C
  c->r[1]=c->r[1]+0x00000010u; // 800E7C60
  return; // 800E7C64
}

// fn_800E7C68
void f_800E7C68(Ctx* __restrict c) {
  trace_call(0x800E7C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7C68
  c->r[0]=c->lr; // 800E7C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E7C74
  c->r[31]=c->r[3]|c->r[3]; // 800E7C78
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E7C7C
  cmps(c,0,(int32_t)c->r[4],0); // 800E7C80
  if (crb(c,2)) { goto L_800E7C90; } // 800E7C84
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E7C88
  goto L_800E7C94; // 800E7C8C
L_800E7C90:;
  c->r[0]=0u+0x00000000u; // 800E7C90
L_800E7C94:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7C94
  if (!crb(c,2)) { goto L_800E7CB0; } // 800E7C98
  c->r[0]=R8(c->r[3]+0x00000414u); // 800E7C9C
  cmps(c,0,(int32_t)c->r[0],0); // 800E7CA0
  if (!crb(c,2)) { goto L_800E7CB0; } // 800E7CA4
  c->r[3]=c->r[31]|c->r[31]; // 800E7CA8
  c->lr=0x800E7CB0u; f_800E6C44(c); // 800E7CAC
L_800E7CB0:;
  c->r[3]=c->r[31]|c->r[31]; // 800E7CB0
  c->lr=0x800E7CB8u; f_800E7CCC(c); // 800E7CB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E7CBC
  c->lr=c->r[0]; // 800E7CC0
  c->r[1]=c->r[1]+0x00000010u; // 800E7CC4
  return; // 800E7CC8
}

// fn_800E7CCC
void f_800E7CCC(Ctx* __restrict c) {
  trace_call(0x800E7CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7CCC
  c->r[0]=c->lr; // 800E7CD0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E7CD4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E7CD8
  c->r[28]=c->r[3]|c->r[3]; // 800E7CDC
  c->r[31]=c->r[1]|c->r[1]; // 800E7CE0
  c->r[0]=R8(c->r[3]+0x00000010u); // 800E7CE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E7CE8
  c->r[3]=c->r[3]+c->r[0]; // 800E7CEC
  c->r[29]=R32(c->r[3]+0x00000014u); // 800E7CF0
  cmps(c,0,(int32_t)c->r[29],0); // 800E7CF4
  if (crb(c,2)) { goto L_800E7D20; } // 800E7CF8
  c->r[30]=0u+0x00000000u; // 800E7CFC
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E7D00
  W8(c->r[31]+0x00000008u,c->r[30]); // 800E7D04
  c->lr=0x800E7D0Cu; f_8005E1B0(c); // 800E7D08
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E7D0C
  c->r[0]=c->r[13]+0xFFFF80E0u; // 800E7D10
  W32(c->r[29]+0x00000004u,c->r[0]); // 800E7D14
  W32(c->r[29]+0x00000008u,c->r[30]); // 800E7D18
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800E7D1C
L_800E7D20:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 800E7D20
  c->r[0]=0u+0x00000000u; // 800E7D24
  c->r[10]=c->r[31]|c->r[31]; // 800E7D28
  c->r[3]=c->r[29]|c->r[29]; // 800E7D2C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800E7D30
  c->r[0]=R32(c->r[28]+0x00000004u); // 800E7D34
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800E7D38
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E7D3C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E7D40
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E7D44
  c->r[1]=c->r[10]|c->r[10]; // 800E7D48
  c->lr=c->r[0]; // 800E7D4C
  return; // 800E7D50
}

// fn_800E7D54
void f_800E7D54(Ctx* __restrict c) {
  trace_call(0x800E7D54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7D54
  c->r[0]=c->lr; // 800E7D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E7D5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E7D60
  c->r[30]=c->r[3]|c->r[3]; // 800E7D64
  c->lr=0x800E7D6Cu; f_800E71D4(c); // 800E7D68
  c->lr=0x800E7D70u; f_802EA628(c); // 800E7D6C
  cmps(c,0,(int32_t)c->r[3],0); // 800E7D70
  if (crb(c,2)) { goto L_800E7DF8; } // 800E7D74
  c->r[3]=c->r[30]|c->r[30]; // 800E7D78
  c->lr=0x800E7D80u; f_800E71D4(c); // 800E7D7C
  c->lr=0x800E7D84u; f_802EA2AC(c); // 800E7D80
  cmps(c,0,(int32_t)c->r[3],0); // 800E7D84
  if (crb(c,2)) { goto L_800E7DF0; } // 800E7D88
  c->lr=0x800E7D90u; f_800E736C(c); // 800E7D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800E7D90
  c->r[31]=c->r[3]|c->r[3]; // 800E7D94
  if (crb(c,2)) { goto L_800E7DBC; } // 800E7D98
  c->r[4]=0u+0x80690000u; // 800E7D9C
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E7DA0
  c->r[4]=c->r[4]+0x00000034u; // 800E7DA4
  c->lr=0x800E7DACu; f_803B4278(c); // 800E7DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800E7DAC
  if (crb(c,2)) { goto L_800E7DBC; } // 800E7DB0
  c->r[3]=c->r[30]|c->r[30]; // 800E7DB4
  c->lr=0x800E7DBCu; f_800E6C44(c); // 800E7DB8
L_800E7DBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E7DBC
  if (crb(c,2)) { goto L_800E7DF0; } // 800E7DC0
  c->r[4]=0u+0x80690000u; // 800E7DC4
  c->r[3]=c->r[31]|c->r[31]; // 800E7DC8
  c->r[4]=c->r[4]+0xFFFFEB88u; // 800E7DCC
  c->r[4]=c->r[4]+0x0000002Fu; // 800E7DD0
  c->lr=0x800E7DD8u; f_803B4278(c); // 800E7DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800E7DD8
  if (crb(c,2)) { goto L_800E7DF0; } // 800E7DDC
  c->r[3]=c->r[30]|c->r[30]; // 800E7DE0
  c->lr=0x800E7DE8u; f_800D78CC(c); // 800E7DE4
  c->r[0]=0u+0x00000000u; // 800E7DE8
  W8(c->r[3]+0x00000074u,c->r[0]); // 800E7DEC
L_800E7DF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E7DF0
  c->lr=0x800E7DF8u; f_800E7CCC(c); // 800E7DF4
L_800E7DF8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E7DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E7DFC
  c->lr=c->r[0]; // 800E7E00
  c->r[1]=c->r[1]+0x00000010u; // 800E7E04
  return; // 800E7E08
}

// fn_800E7E0C
void f_800E7E0C(Ctx* __restrict c) {
  trace_call(0x800E7E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E7E0C
  c->r[0]=c->lr; // 800E7E10
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E7E14
  c->r[11]=c->r[1]+0x00000030u; // 800E7E18
  c->lr=0x800E7E20u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E7E1C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800E7E20
  c->r[26]=c->r[3]|c->r[3]; // 800E7E24
  cmps(c,0,(int32_t)c->r[4],0); // 800E7E28
  if (crb(c,2)) { goto L_800E7E38; } // 800E7E2C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E7E30
  goto L_800E7E3C; // 800E7E34
L_800E7E38:;
  c->r[0]=0u+0x00000000u; // 800E7E38
L_800E7E3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7E3C
  if (!crb(c,2)) { goto L_800E8110; } // 800E7E40
  c->r[0]=0u+0x00000000u; // 800E7E44
  W8(c->r[3]+0x000003D9u,c->r[0]); // 800E7E48
  c->r[3]=c->r[26]|c->r[26]; // 800E7E4C
  c->lr=0x800E7E54u; f_800E7128(c); // 800E7E50
  c->r[3]=c->r[26]|c->r[26]; // 800E7E54
  c->lr=0x800E7E5Cu; f_800E71D4(c); // 800E7E58
  c->lr=0x800E7E60u; f_802E89E8(c); // 800E7E5C
  c->r[25]=0u+0x80690000u; // 800E7E60
  c->r[3]=c->r[26]+0x000000FCu; // 800E7E64
  c->r[25]=c->r[25]+0xFFFFEB88u; // 800E7E68
  c->r[5]=0u+0x00000000u; // 800E7E6C
  c->r[4]=c->r[25]+0x0000003Au; // 800E7E70
  c->lr=0x800E7E78u; f_802E6904(c); // 800E7E74
  c->r[3]=c->r[26]+0x000000FCu; // 800E7E78
  c->r[4]=c->r[25]+0x00000018u; // 800E7E7C
  c->r[5]=0u+0x00000000u; // 800E7E80
  c->lr=0x800E7E88u; f_802E6904(c); // 800E7E84
  c->r[3]=c->r[26]+0x000000FCu; // 800E7E88
  c->r[4]=c->r[25]+0x00000011u; // 800E7E8C
  c->r[5]=0u+0x00000001u; // 800E7E90
  c->lr=0x800E7E98u; f_802E6904(c); // 800E7E94
  c->r[25]=R32(c->r[26]+0x000003E0u); // 800E7E98
  cmps(c,0,(int32_t)c->r[25],0); // 800E7E9C
  if (crb(c,2)) { goto L_800E7EC0; } // 800E7EA0
  c->r[3]=c->r[26]|c->r[26]; // 800E7EA4
  c->lr=0x800E7EACu; f_800E71D4(c); // 800E7EA8
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E7EAC
  c->r[4]=c->r[25]|c->r[25]; // 800E7EB0
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E7EB4
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E7EB8
  c->lr=0x800E7EC0u; f_802E8B94(c); // 800E7EBC
L_800E7EC0:;
  c->r[0]=R32(c->r[26]+0x000003E8u); // 800E7EC0
  cmps(c,0,(int32_t)c->r[0],-1); // 800E7EC4
  if (crb(c,2)) { goto L_800E8110; } // 800E7EC8
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800E7ECC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E7ED0
  if (!crb(c,2)) { goto L_800E7F18; } // 800E7ED4
  c->r[25]=0u+0x80740000u; // 800E7ED8
  c->r[3]=c->r[25]+0xFFFFFF5Cu; // 800E7EDC
  c->lr=0x800E7EE4u; f_800A1FCC(c); // 800E7EE0
  c->r[6]=0u+0x806D0000u; // 800E7EE4
  c->r[4]=0u+0x80050000u; // 800E7EE8
  c->r[6]=c->r[6]+0xFFFFCD54u; // 800E7EEC
  c->r[3]=c->r[25]+0xFFFFFF5Cu; // 800E7EF0
  c->r[0]=c->r[6]+0x00000028u; // 800E7EF4
  c->r[5]=0u+0x80750000u; // 800E7EF8
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800E7EFC
  c->r[4]=c->r[4]+0x000009E8u; // 800E7F00
  c->r[5]=c->r[5]+0x00003A6Cu; // 800E7F04
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E7F08
  c->lr=0x800E7F10u; f_803A92B8(c); // 800E7F0C
  c->r[0]=0u+0x00000001u; // 800E7F10
  W8(c->r[13]+0xFFFFBBF0u,c->r[0]); // 800E7F14
L_800E7F18:;
  c->r[31]=0u+0x80740000u; // 800E7F18
  c->r[0]=0u+0x00000004u; // 800E7F1C
  c->r[31]=c->r[31]+0xFFFFFF5Cu; // 800E7F20
  c->r[30]=R32(c->r[26]+0x000003E8u); // 800E7F24
  c->r[5]=R32(c->r[26]+0x000003E4u); // 800E7F28
  c->r[6]=0u+0x00000000u; // 800E7F2C
  c->r[3]=0u+0x00000000u; // 800E7F30
  c->ctr=c->r[0]; // 800E7F34
L_800E7F38:;
  c->r[4]=c->r[31]+c->r[3]; // 800E7F38
  c->r[0]=R32(c->r[4]+0x00000958u); // 800E7F3C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800E7F40
  if (crb(c,2)) { goto L_800E7F54; } // 800E7F44
  c->r[6]=c->r[6]+0x00000001u; // 800E7F48
  c->r[3]=c->r[3]+0x000008B0u; // 800E7F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E7F38; } // 800E7F50
L_800E7F54:;
  cmps(c,0,(int32_t)c->r[6],4); // 800E7F54
  c->r[0]=0u+0xFFFFFFFFu; // 800E7F58
  if (!crb(c,0)) { goto L_800E7F64; } // 800E7F5C
  c->r[0]=c->r[6]|c->r[6]; // 800E7F60
L_800E7F64:;
  cmps(c,0,(int32_t)c->r[0],0); // 800E7F64
  if (crb(c,0)) { goto L_800E8110; } // 800E7F68
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800E7F6C
  c->r[4]=c->r[30]|c->r[30]; // 800E7F70
  c->r[3]=c->r[31]+c->r[28]; // 800E7F74
  c->r[3]=c->r[3]+0x00000130u; // 800E7F78
  c->lr=0x800E7F80u; f_800A1D5C(c); // 800E7F7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E7F80
  c->r[29]=c->r[3]|c->r[3]; // 800E7F84
  if (crb(c,2)) { goto L_800E8110; } // 800E7F88
  cmpu(c,0,c->r[30],0x000003FFu); // 800E7F8C
  c->r[4]=c->r[30]|c->r[30]; // 800E7F90
  if (!crb(c,1)) { goto L_800E7F9C; } // 800E7F94
  c->r[4]=0u+0x00000000u; // 800E7F98
L_800E7F9C:;
  c->r[3]=c->r[31]+c->r[28]; // 800E7F9C
  c->r[0]=sraw(c,c->r[4],3); // 800E7FA0
  c->r[27]=c->r[3]+0x000000B0u; // 800E7FA4
  c->r[25]=0u+0x00000001u; // 800E7FA8
  c->r[3]=rotl(c->r[4],0)&0x00000007u; // 800E7FAC
  c->r[0]=R8(c->r[27]+c->r[0]); // 800E7FB0
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 800E7FB4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800E7FB8
  if (!crb(c,2)) { goto L_800E8024; } // 800E7FBC
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800E7FC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E7FC4
  if (!crb(c,2)) { goto L_800E8008; } // 800E7FC8
  c->r[26]=0u+0x80730000u; // 800E7FCC
  c->r[3]=c->r[26]+0x00006160u; // 800E7FD0
  c->lr=0x800E7FD8u; f_8008C1BC(c); // 800E7FD4
  c->r[6]=0u+0x806D0000u; // 800E7FD8
  c->r[4]=0u+0x80050000u; // 800E7FDC
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800E7FE0
  c->r[3]=c->r[26]+0x00006160u; // 800E7FE4
  c->r[0]=c->r[6]+0x00000028u; // 800E7FE8
  c->r[5]=0u+0x80750000u; // 800E7FEC
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800E7FF0
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800E7FF4
  c->r[5]=c->r[5]+0x00003A60u; // 800E7FF8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800E7FFC
  c->lr=0x800E8004u; f_803A92B8(c); // 800E8000
  W8(c->r[13]+0xFFFFBB87u,c->r[25]); // 800E8004
L_800E8008:;
  c->r[3]=0u+0x80730000u; // 800E8008
  c->r[4]=c->r[29]|c->r[29]; // 800E800C
  c->r[3]=c->r[3]+0x00006160u; // 800E8010
  c->lr=0x800E8018u; f_8008CD98(c); // 800E8014
  c->r[3]=c->r[31]+c->r[28]; // 800E8018
  c->r[0]=0u+0x00000002u; // 800E801C
  W32(c->r[3]+0x00000950u,c->r[0]); // 800E8020
L_800E8024:;
  cmpu(c,0,c->r[30],0x000003FFu); // 800E8024
  if (!crb(c,1)) { goto L_800E8030; } // 800E8028
  c->r[30]=0u+0x00000000u; // 800E802C
L_800E8030:;
  c->r[5]=sraw(c,c->r[30],3); // 800E8030
  c->r[0]=rotl(c->r[30],0)&0x00000007u; // 800E8034
  c->r[3]=0u+0x00000001u; // 800E8038
  c->r[4]=R8(c->r[27]+c->r[5]); // 800E803C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E8040
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E8044
  c->r[0]=c->r[4]|c->r[0]; // 800E8048
  W8(c->r[27]+c->r[5],c->r[0]); // 800E804C
  c->r[0]=R8(c->r[29]+0x00000000u); // 800E8050
  cmps(c,0,(int32_t)c->r[0],71); // 800E8054
  if (!crb(c,2)) { goto L_800E8080; } // 800E8058
  c->r[0]=R8(c->r[29]+0x00000001u); // 800E805C
  cmps(c,0,(int32_t)c->r[0],95); // 800E8060
  if (!crb(c,2)) { goto L_800E8080; } // 800E8064
  c->r[3]=c->r[29]+0x00000002u; // 800E8068
  c->lr=0x800E8070u; f_803B613C(c); // 800E806C
  cmpu(c,0,c->r[3],0x000003FFu); // 800E8070
  if (!crb(c,1)) { goto L_800E8084; } // 800E8074
  c->r[3]=0u+0xFFFFFFFFu; // 800E8078
  goto L_800E8084; // 800E807C
L_800E8080:;
  c->r[3]=0u+0xFFFFFFFFu; // 800E8080
L_800E8084:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800E8084
  if (crb(c,1)) { goto L_800E80B0; } // 800E8088
  c->r[4]=sraw(c,c->r[3],3); // 800E808C
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800E8090
  c->r[3]=0u+0x00000001u; // 800E8094
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E8098
  c->r[4]=c->r[31]+c->r[4]; // 800E809C
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800E80A0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E80A4
  c->r[0]=c->r[3]|c->r[0]; // 800E80A8
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800E80AC
L_800E80B0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800E80B0
  cmps(c,0,(int32_t)c->r[0],67); // 800E80B4
  if (!crb(c,2)) { goto L_800E80E0; } // 800E80B8
  c->r[0]=R8(c->r[29]+0x00000001u); // 800E80BC
  cmps(c,0,(int32_t)c->r[0],95); // 800E80C0
  if (!crb(c,2)) { goto L_800E80E0; } // 800E80C4
  c->r[3]=c->r[29]+0x00000002u; // 800E80C8
  c->lr=0x800E80D0u; f_803B613C(c); // 800E80CC
  cmpu(c,0,c->r[3],0x0000003Fu); // 800E80D0
  if (!crb(c,1)) { goto L_800E80E4; } // 800E80D4
  c->r[3]=0u+0xFFFFFFFFu; // 800E80D8
  goto L_800E80E4; // 800E80DC
L_800E80E0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800E80E0
L_800E80E4:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800E80E4
  if (crb(c,1)) { goto L_800E8110; } // 800E80E8
  c->r[4]=sraw(c,c->r[3],3); // 800E80EC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800E80F0
  c->r[3]=0u+0x00000001u; // 800E80F4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800E80F8
  c->r[4]=c->r[31]+c->r[4]; // 800E80FC
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800E8100
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800E8104
  c->r[0]=c->r[3]|c->r[0]; // 800E8108
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800E810C
L_800E8110:;
  c->r[11]=c->r[1]+0x00000030u; // 800E8110
  c->lr=0x800E8118u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E8114
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E8118
  c->lr=c->r[0]; // 800E811C
  c->r[1]=c->r[1]+0x00000030u; // 800E8120
  return; // 800E8124
}

// fn_800E8128
void f_800E8128(Ctx* __restrict c) {
  trace_call(0x800E8128u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8128
  c->r[0]=c->lr; // 800E812C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8130
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E8134
  c->r[31]=c->r[3]|c->r[3]; // 800E8138
  c->lr=0x800E8140u; f_80111234(c); // 800E813C
  c->r[9]=0u+0x806E0000u; // 800E8140
  c->r[11]=0u+0x00000000u; // 800E8144
  c->r[9]=c->r[9]+0xFFFF8038u; // 800E8148
  c->r[6]=0u+0x00000002u; // 800E814C
  c->r[8]=c->r[9]+0x00000008u; // 800E8150
  c->r[10]=0u+0xFFFFFFFFu; // 800E8154
  c->r[0]=c->r[9]+0x00000030u; // 800E8158
  c->r[4]=0u+0x800F0000u; // 800E815C
  c->r[5]=0u+0x800F0000u; // 800E8160
  W32(c->r[31]+0x00000040u,c->r[6]); // 800E8164
  c->r[3]=c->r[31]+0x000000ECu; // 800E8168
  c->r[4]=c->r[4]+0xFFFF8380u; // 800E816C
  W32(c->r[31]+0x0000003Cu,c->r[11]); // 800E8170
  c->r[5]=c->r[5]+0xFFFF83ECu; // 800E8174
  c->r[6]=0u+0x00000344u; // 800E8178
  c->r[7]=0u+0x00000002u; // 800E817C
  W32(c->r[31]+0x0000004Cu,c->r[10]); // 800E8180
  W32(c->r[31]+0x00000050u,c->r[11]); // 800E8184
  W32(c->r[31]+0x00000054u,c->r[11]); // 800E8188
  W32(c->r[31]+0x00000058u,c->r[11]); // 800E818C
  W32(c->r[31]+0x00000048u,c->r[11]); // 800E8190
  W32(c->r[31]+0x0000005Cu,c->r[11]); // 800E8194
  W32(c->r[31]+0x00000044u,c->r[11]); // 800E8198
  W32(c->r[31]+0x000000E8u,c->r[9]); // 800E819C
  W32(c->r[31]+0x000000E0u,c->r[8]); // 800E81A0
  W32(c->r[31]+0x000000E4u,c->r[0]); // 800E81A4
  c->lr=0x800E81ACu; f_803A9830(c); // 800E81A8
  c->r[30]=c->r[31]+0x00000790u; // 800E81AC
  c->r[29]=c->r[31]+0x000008C8u; // 800E81B0
L_800E81B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E81B4
  c->lr=0x800E81BCu; f_800E8424(c); // 800E81B8
  c->r[30]=c->r[30]+0x0000009Cu; // 800E81BC
  cmpu(c,0,c->r[30],c->r[29]); // 800E81C0
  if (crb(c,0)) { IRQCHK(c); goto L_800E81B4; } // 800E81C4
  c->r[28]=c->r[31]+0x000008D0u; // 800E81C8
  c->r[30]=c->r[28]+0x00000004u; // 800E81CC
  c->r[29]=c->r[28]+0x0000013Cu; // 800E81D0
L_800E81D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800E81D4
  c->lr=0x800E81DCu; f_800E8424(c); // 800E81D8
  c->r[30]=c->r[30]+0x0000009Cu; // 800E81DC
  cmpu(c,0,c->r[30],c->r[29]); // 800E81E0
  if (crb(c,0)) { IRQCHK(c); goto L_800E81D4; } // 800E81E4
  c->r[4]=0u+0x800F0000u; // 800E81E8
  c->r[5]=0u+0x800F0000u; // 800E81EC
  c->r[3]=c->r[29]|c->r[29]; // 800E81F0
  c->r[6]=0u+0x00000014u; // 800E81F4
  c->r[4]=c->r[4]+0xFFFF84ACu; // 800E81F8
  c->r[5]=c->r[5]+0xFFFF8504u; // 800E81FC
  c->r[7]=0u+0x00000002u; // 800E8200
  c->lr=0x800E8208u; f_803A9830(c); // 800E8204
  c->r[3]=c->r[28]+0x00000164u; // 800E8208
  c->lr=0x800E8210u; f_800E84DC(c); // 800E820C
  c->r[4]=0u+0x800F0000u; // 800E8210
  c->r[5]=0u+0x800F0000u; // 800E8214
  c->r[3]=c->r[28]+0x00000178u; // 800E8218
  c->r[6]=0u+0x00000344u; // 800E821C
  c->r[4]=c->r[4]+0xFFFF8380u; // 800E8220
  c->r[5]=c->r[5]+0xFFFF83ECu; // 800E8224
  c->r[7]=0u+0x00000002u; // 800E8228
  c->lr=0x800E8230u; f_803A9830(c); // 800E822C
  c->r[29]=0u+0x800F0000u; // 800E8230
  c->r[30]=0u+0x800F0000u; // 800E8234
  c->r[3]=c->r[28]+0x00000818u; // 800E8238
  c->r[6]=0u+0x0000000Cu; // 800E823C
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E8240
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E8244
  c->r[7]=0u+0x00000002u; // 800E8248
  c->lr=0x800E8250u; f_803A9830(c); // 800E824C
  c->r[3]=c->r[28]+0x00000830u; // 800E8250
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E8254
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E8258
  c->r[6]=0u+0x0000000Cu; // 800E825C
  c->r[7]=0u+0x00000002u; // 800E8260
  c->lr=0x800E8268u; f_803A9830(c); // 800E8264
  c->r[3]=c->r[28]+0x00000848u; // 800E8268
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E826C
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E8270
  c->r[6]=0u+0x0000000Cu; // 800E8274
  c->r[7]=0u+0x00000002u; // 800E8278
  c->lr=0x800E8280u; f_803A9830(c); // 800E827C
  c->r[3]=c->r[28]+0x00000860u; // 800E8280
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E8284
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E8288
  c->r[6]=0u+0x0000000Cu; // 800E828C
  c->r[7]=0u+0x00000002u; // 800E8290
  c->lr=0x800E8298u; f_803A9830(c); // 800E8294
  c->r[3]=c->r[28]+0x00000878u; // 800E8298
  c->lr=0x800E82A0u; f_800E856C(c); // 800E829C
  c->r[3]=c->r[28]+0x00000884u; // 800E82A0
  c->lr=0x800E82A8u; f_800E856C(c); // 800E82A4
  c->r[3]=c->r[28]+0x00000890u; // 800E82A8
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E82AC
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E82B0
  c->r[6]=0u+0x0000000Cu; // 800E82B4
  c->r[7]=0u+0x00000003u; // 800E82B8
  c->lr=0x800E82C0u; f_803A9830(c); // 800E82BC
  c->r[3]=c->r[28]+0x000008B4u; // 800E82C0
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E82C4
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E82C8
  c->r[6]=0u+0x0000000Cu; // 800E82CC
  c->r[7]=0u+0x00000003u; // 800E82D0
  c->lr=0x800E82D8u; f_803A9830(c); // 800E82D4
  c->r[3]=c->r[28]+0x000008D8u; // 800E82D8
  c->r[4]=c->r[29]+0xFFFF853Cu; // 800E82DC
  c->r[5]=c->r[30]+0xFFFF8584u; // 800E82E0
  c->r[6]=0u+0x0000000Cu; // 800E82E4
  c->r[7]=0u+0x00000003u; // 800E82E8
  c->lr=0x800E82F0u; f_803A9830(c); // 800E82EC
  c->r[3]=c->r[28]|c->r[28]; // 800E82F0
  c->lr=0x800E82F8u; f_800E85BC(c); // 800E82F4
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800E82F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800E82FC
  if (!crb(c,2)) { goto L_800E8324; } // 800E8300
  c->r[30]=0u+0x80730000u; // 800E8304
  c->r[3]=c->r[30]+0x000067B8u; // 800E8308
  c->lr=0x800E8310u; f_8029EF58(c); // 800E830C
  c->r[3]=0u+0x806D0000u; // 800E8310
  c->r[0]=0u+0x00000001u; // 800E8314
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800E8318
  W32(c->r[30]+0x000067B8u,c->r[3]); // 800E831C
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800E8320
L_800E8324:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E8324
  c->r[3]=0u+0x80730000u; // 800E8328
  c->r[4]=c->r[31]|c->r[31]; // 800E832C
  c->r[3]=c->r[3]+0x000067B8u; // 800E8330
  if (crb(c,2)) { goto L_800E833C; } // 800E8334
  c->r[4]=c->r[31]+0x0000003Cu; // 800E8338
L_800E833C:;
  c->r[8]=0u+0x80690000u; // 800E833C
  c->r[5]=0u+0x00000000u; // 800E8340
  c->r[8]=c->r[8]+0xFFFFEBC8u; // 800E8344
  c->r[6]=0u+0x0000003Fu; // 800E8348
  c->r[7]=0u+0x0000002Du; // 800E834C
  c->lr=0x800E8354u; f_8029F4EC(c); // 800E8350
  c->r[0]=0u+0x00000001u; // 800E8354
  c->r[3]=0u+0x00000000u; // 800E8358
  W8(c->r[31]+0x000008CAu,c->r[3]); // 800E835C
  c->r[3]=c->r[31]|c->r[31]; // 800E8360
  W8(c->r[31]+0x000008CCu,c->r[0]); // 800E8364
  W8(c->r[31]+0x000008CBu,c->r[0]); // 800E8368
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E836C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8370
  c->lr=c->r[0]; // 800E8374
  c->r[1]=c->r[1]+0x00000020u; // 800E8378
  return; // 800E837C
}

// fn_800E8380
void f_800E8380(Ctx* __restrict c) {
  trace_call(0x800E8380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8380
  c->r[0]=c->lr; // 800E8384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E838C
  c->r[31]=c->r[3]|c->r[3]; // 800E8390
  c->lr=0x800E8398u; f_800E83B0(c); // 800E8394
  c->r[3]=c->r[31]|c->r[31]; // 800E8398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E839C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E83A0
  c->lr=c->r[0]; // 800E83A4
  c->r[1]=c->r[1]+0x00000010u; // 800E83A8
  return; // 800E83AC
}

// fn_800E83B0
void f_800E83B0(Ctx* __restrict c) {
  trace_call(0x800E83B0u);
  c->r[0]=0u+0x00000010u; // 800E83B0
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E83B4
  c->r[7]=0u+0x00000000u; // 800E83B8
  c->r[4]=0u+0x00000000u; // 800E83BC
  c->r[5]=0u+0xFFFFFFFFu; // 800E83C0
  c->ctr=c->r[0]; // 800E83C4
L_800E83C8:;
  W32(c->r[3]+c->r[4],c->r[7]); // 800E83C8
  c->r[6]=c->r[3]+c->r[4]; // 800E83CC
  c->r[4]=c->r[4]+0x00000004u; // 800E83D0
  W32(c->r[6]+0x00000040u,c->r[5]); // 800E83D4
  {uint32_t ea=c->r[6]+0x00000300u; WF32(ea,c->f[0]);} // 800E83D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E83C8; } // 800E83DC
  c->r[0]=0u+0x00000000u; // 800E83E0
  W32(c->r[3]+0x00000340u,c->r[0]); // 800E83E4
  return; // 800E83E8
}

// dtor_800E83EC
void f_800E83EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E83EC
  c->r[0]=c->lr; // 800E83F0
  cmps(c,0,(int32_t)c->r[3],0); // 800E83F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E83F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E83FC
  c->r[31]=c->r[3]|c->r[3]; // 800E8400
  if (crb(c,2)) { goto L_800E840C; } // 800E8404
  c->lr=0x800E840Cu; f_800E83B0(c); // 800E8408
L_800E840C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E840C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8410
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8414
  c->lr=c->r[0]; // 800E8418
  c->r[1]=c->r[1]+0x00000010u; // 800E841C
  return; // 800E8420
}

// fn_800E8424
void f_800E8424(Ctx* __restrict c) {
  trace_call(0x800E8424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8424
  c->r[0]=c->lr; // 800E8428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E842C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8430
  c->r[31]=c->r[3]|c->r[3]; // 800E8434
  c->lr=0x800E843Cu; f_800E8468(c); // 800E8438
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E843C
  c->r[0]=0u+0x00000000u; // 800E8440
  W32(c->r[31]+0x00000000u,c->r[0]); // 800E8444
  c->r[3]=c->r[31]|c->r[31]; // 800E8448
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E844C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E8450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8458
  c->lr=c->r[0]; // 800E845C
  c->r[1]=c->r[1]+0x00000010u; // 800E8460
  return; // 800E8464
}

// fn_800E8468
void f_800E8468(Ctx* __restrict c) {
  trace_call(0x800E8468u);
  c->r[5]=0u+0x00000000u; // 800E8468
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E846C
  c->r[0]=0u+0x0000000Au; // 800E8470
  W32(c->r[3]+0x00000018u,c->r[5]); // 800E8474
  c->r[4]=c->r[5]|c->r[5]; // 800E8478
  W8(c->r[3]+0x00000098u,c->r[5]); // 800E847C
  W8(c->r[3]+0x00000099u,c->r[5]); // 800E8480
  W8(c->r[3]+0x0000009Au,c->r[5]); // 800E8484
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800E8488
  c->ctr=c->r[0]; // 800E848C
L_800E8490:;
  c->r[6]=c->r[3]+c->r[4]; // 800E8490
  c->r[4]=c->r[4]+0x00000004u; // 800E8494
  W32(c->r[6]+0x00000020u,c->r[5]); // 800E8498
  W32(c->r[6]+0x00000048u,c->r[0]); // 800E849C
  W32(c->r[6]+0x00000070u,c->r[5]); // 800E84A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E8490; } // 800E84A4
  return; // 800E84A8
}

// fn_800E84AC
void f_800E84AC(Ctx* __restrict c) {
  trace_call(0x800E84ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E84AC
  c->r[0]=c->lr; // 800E84B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E84B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E84B8
  c->r[31]=c->r[3]|c->r[3]; // 800E84BC
  c->lr=0x800E84C4u; f_800E84DC(c); // 800E84C0
  c->r[3]=c->r[31]|c->r[31]; // 800E84C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E84C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E84CC
  c->lr=c->r[0]; // 800E84D0
  c->r[1]=c->r[1]+0x00000010u; // 800E84D4
  return; // 800E84D8
}

// fn_800E84DC
void f_800E84DC(Ctx* __restrict c) {
  trace_call(0x800E84DCu);
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E84DC
  {uint32_t ea=c->r[2]+0xFFFFA678u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E84E0
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E84E4
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800E84E8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 800E84EC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800E84F0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800E84F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800E84F8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800E84FC
  return; // 800E8500
}

// dtor_800E8504
void f_800E8504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8504
  c->r[0]=c->lr; // 800E8508
  cmps(c,0,(int32_t)c->r[3],0); // 800E850C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8514
  c->r[31]=c->r[3]|c->r[3]; // 800E8518
  if (crb(c,2)) { goto L_800E8524; } // 800E851C
  c->lr=0x800E8524u; f_800E84DC(c); // 800E8520
L_800E8524:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8528
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E852C
  c->lr=c->r[0]; // 800E8530
  c->r[1]=c->r[1]+0x00000010u; // 800E8534
  return; // 800E8538
}

// fn_800E853C
void f_800E853C(Ctx* __restrict c) {
  trace_call(0x800E853Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E853C
  c->r[0]=c->lr; // 800E8540
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8548
  c->r[31]=c->r[3]|c->r[3]; // 800E854C
  c->lr=0x800E8554u; f_800E856C(c); // 800E8550
  c->r[3]=c->r[31]|c->r[31]; // 800E8554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8558
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E855C
  c->lr=c->r[0]; // 800E8560
  c->r[1]=c->r[1]+0x00000010u; // 800E8564
  return; // 800E8568
}

// fn_800E856C
void f_800E856C(Ctx* __restrict c) {
  trace_call(0x800E856Cu);
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E856C
  c->r[0]=0u+0xFFFFFFFFu; // 800E8570
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E8574
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800E8578
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800E857C
  return; // 800E8580
}

// dtor_800E8584
void f_800E8584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8584
  c->r[0]=c->lr; // 800E8588
  cmps(c,0,(int32_t)c->r[3],0); // 800E858C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8594
  c->r[31]=c->r[3]|c->r[3]; // 800E8598
  if (crb(c,2)) { goto L_800E85A4; } // 800E859C
  c->lr=0x800E85A4u; f_800E856C(c); // 800E85A0
L_800E85A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E85A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E85A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E85AC
  c->lr=c->r[0]; // 800E85B0
  c->r[1]=c->r[1]+0x00000010u; // 800E85B4
  return; // 800E85B8
}

// fn_800E85BC
void f_800E85BC(Ctx* __restrict c) {
  trace_call(0x800E85BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E85BC
  c->r[0]=c->lr; // 800E85C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E85C4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E85C8
  c->r[29]=0u+0x00000000u; // 800E85CC
  c->r[27]=c->r[3]|c->r[3]; // 800E85D0
  W8(c->r[3]+0x00000000u,c->r[29]); // 800E85D4
  W8(c->r[3]+0x00000809u,c->r[29]); // 800E85D8
  W8(c->r[3]+0x0000080Bu,c->r[29]); // 800E85DC
  W8(c->r[3]+0x0000080Cu,c->r[29]); // 800E85E0
  c->r[3]=c->r[3]+0x00000164u; // 800E85E4
  c->lr=0x800E85ECu; f_800E84DC(c); // 800E85E8
  c->r[28]=0u+0x00000000u; // 800E85EC
  c->r[31]=0u+0x00000000u; // 800E85F0
  c->r[30]=0u+0x00000000u; // 800E85F4
L_800E85F8:;
  c->r[3]=c->r[27]+c->r[30]; // 800E85F8
  c->r[3]=c->r[3]+0x0000013Cu; // 800E85FC
  c->lr=0x800E8604u; f_800E84DC(c); // 800E8600
  c->r[3]=c->r[27]+c->r[31]; // 800E8604
  c->r[3]=c->r[3]+0x00000178u; // 800E8608
  c->lr=0x800E8610u; f_800E83B0(c); // 800E860C
  c->r[3]=c->r[27]+c->r[29]; // 800E8610
  c->r[3]=c->r[3]+0x00000830u; // 800E8614
  c->lr=0x800E861Cu; f_800E856C(c); // 800E8618
  c->r[3]=c->r[27]+c->r[29]; // 800E861C
  c->r[3]=c->r[3]+0x00000848u; // 800E8620
  c->lr=0x800E8628u; f_800E856C(c); // 800E8624
  c->r[3]=c->r[27]+c->r[29]; // 800E8628
  c->r[3]=c->r[3]+0x00000860u; // 800E862C
  c->lr=0x800E8634u; f_800E856C(c); // 800E8630
  c->r[28]=c->r[28]+0x00000001u; // 800E8634
  c->r[30]=c->r[30]+0x00000014u; // 800E8638
  cmps(c,0,(int32_t)c->r[28],2); // 800E863C
  c->r[29]=c->r[29]+0x0000000Cu; // 800E8640
  c->r[31]=c->r[31]+0x00000344u; // 800E8644
  if (crb(c,0)) { IRQCHK(c); goto L_800E85F8; } // 800E8648
  c->r[28]=0u+0x00000000u; // 800E864C
  c->r[31]=0u+0x00000000u; // 800E8650
L_800E8654:;
  c->r[3]=c->r[27]+c->r[31]; // 800E8654
  c->r[3]=c->r[3]+0x00000890u; // 800E8658
  c->lr=0x800E8660u; f_800E856C(c); // 800E865C
  c->r[3]=c->r[27]+c->r[31]; // 800E8660
  c->r[3]=c->r[3]+0x000008B4u; // 800E8664
  c->lr=0x800E866Cu; f_800E856C(c); // 800E8668
  c->r[3]=c->r[27]+c->r[31]; // 800E866C
  c->r[3]=c->r[3]+0x000008D8u; // 800E8670
  c->lr=0x800E8678u; f_800E856C(c); // 800E8674
  c->r[28]=c->r[28]+0x00000001u; // 800E8678
  c->r[31]=c->r[31]+0x0000000Cu; // 800E867C
  cmps(c,0,(int32_t)c->r[28],3); // 800E8680
  if (crb(c,0)) { IRQCHK(c); goto L_800E8654; } // 800E8684
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E8688
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E868C
  c->lr=c->r[0]; // 800E8690
  c->r[1]=c->r[1]+0x00000020u; // 800E8694
  return; // 800E8698
}

// dtor_800E869C
void f_800E869C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E869C
  c->r[0]=c->lr; // 800E86A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E86A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E86A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E86AC
  c->r[30]=c->r[3]|c->r[3]; // 800E86B0
  if (crb(c,2)) { goto L_800E87A0; } // 800E86B4
  c->lr=0x800E86BCu; f_800E85BC(c); // 800E86B8
  c->r[31]=0u+0x800F0000u; // 800E86BC
  c->r[3]=c->r[30]+0x000008D8u; // 800E86C0
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E86C4
  c->r[5]=0u+0x0000000Cu; // 800E86C8
  c->r[6]=0u+0x00000003u; // 800E86CC
  c->lr=0x800E86D4u; f_803A9928(c); // 800E86D0
  c->r[3]=c->r[30]+0x000008B4u; // 800E86D4
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E86D8
  c->r[5]=0u+0x0000000Cu; // 800E86DC
  c->r[6]=0u+0x00000003u; // 800E86E0
  c->lr=0x800E86E8u; f_803A9928(c); // 800E86E4
  c->r[3]=c->r[30]+0x00000890u; // 800E86E8
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E86EC
  c->r[5]=0u+0x0000000Cu; // 800E86F0
  c->r[6]=0u+0x00000003u; // 800E86F4
  c->lr=0x800E86FCu; f_803A9928(c); // 800E86F8
  c->r[3]=c->r[30]+0x00000884u; // 800E86FC
  c->r[4]=0u+0xFFFFFFFFu; // 800E8700
  c->lr=0x800E8708u; f_800E8584(c); // 800E8704
  c->r[3]=c->r[30]+0x00000878u; // 800E8708
  c->r[4]=0u+0xFFFFFFFFu; // 800E870C
  c->lr=0x800E8714u; f_800E8584(c); // 800E8710
  c->r[3]=c->r[30]+0x00000860u; // 800E8714
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E8718
  c->r[5]=0u+0x0000000Cu; // 800E871C
  c->r[6]=0u+0x00000002u; // 800E8720
  c->lr=0x800E8728u; f_803A9928(c); // 800E8724
  c->r[3]=c->r[30]+0x00000848u; // 800E8728
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E872C
  c->r[5]=0u+0x0000000Cu; // 800E8730
  c->r[6]=0u+0x00000002u; // 800E8734
  c->lr=0x800E873Cu; f_803A9928(c); // 800E8738
  c->r[3]=c->r[30]+0x00000830u; // 800E873C
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E8740
  c->r[5]=0u+0x0000000Cu; // 800E8744
  c->r[6]=0u+0x00000002u; // 800E8748
  c->lr=0x800E8750u; f_803A9928(c); // 800E874C
  c->r[3]=c->r[30]+0x00000818u; // 800E8750
  c->r[4]=c->r[31]+0xFFFF8584u; // 800E8754
  c->r[5]=0u+0x0000000Cu; // 800E8758
  c->r[6]=0u+0x00000002u; // 800E875C
  c->lr=0x800E8764u; f_803A9928(c); // 800E8760
  c->r[4]=0u+0x800F0000u; // 800E8764
  c->r[3]=c->r[30]+0x00000178u; // 800E8768
  c->r[4]=c->r[4]+0xFFFF83ECu; // 800E876C
  c->r[5]=0u+0x00000344u; // 800E8770
  c->r[6]=0u+0x00000002u; // 800E8774
  c->lr=0x800E877Cu; f_803A9928(c); // 800E8778
  c->r[3]=c->r[30]+0x00000164u; // 800E877C
  c->r[4]=0u+0xFFFFFFFFu; // 800E8780
  c->lr=0x800E8788u; f_800E8504(c); // 800E8784
  c->r[4]=0u+0x800F0000u; // 800E8788
  c->r[3]=c->r[30]+0x0000013Cu; // 800E878C
  c->r[4]=c->r[4]+0xFFFF8504u; // 800E8790
  c->r[5]=0u+0x00000014u; // 800E8794
  c->r[6]=0u+0x00000002u; // 800E8798
  c->lr=0x800E87A0u; f_803A9928(c); // 800E879C
L_800E87A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E87A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E87A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E87A8
  c->lr=c->r[0]; // 800E87AC
  c->r[1]=c->r[1]+0x00000010u; // 800E87B0
  return; // 800E87B4
}

// fn_800E87B8
void f_800E87B8(Ctx* __restrict c) {
  trace_call(0x800E87B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E87B8
  c->r[0]=c->lr; // 800E87BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E87C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E87C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E87C8
  c->r[31]=c->r[3]|c->r[3]; // 800E87CC
  if (crb(c,2)) { goto L_800E8824; } // 800E87D0
  c->r[5]=0u+0x806E0000u; // 800E87D4
  c->r[5]=c->r[5]+0xFFFF8038u; // 800E87D8
  W32(c->r[3]+0x000000E8u,c->r[5]); // 800E87DC
  c->r[4]=c->r[5]+0x00000008u; // 800E87E0
  c->r[0]=c->r[5]+0x00000030u; // 800E87E4
  W32(c->r[3]+0x000000E0u,c->r[4]); // 800E87E8
  W32(c->r[3]+0x000000E4u,c->r[0]); // 800E87EC
  c->lr=0x800E87F4u; f_800E8EF4(c); // 800E87F0
  c->r[3]=c->r[31]+0x000008D0u; // 800E87F4
  c->r[4]=0u+0xFFFFFFFFu; // 800E87F8
  c->lr=0x800E8800u; f_800E869C(c); // 800E87FC
  c->r[4]=0u+0x800F0000u; // 800E8800
  c->r[3]=c->r[31]+0x000000ECu; // 800E8804
  c->r[4]=c->r[4]+0xFFFF83ECu; // 800E8808
  c->r[5]=0u+0x00000344u; // 800E880C
  c->r[6]=0u+0x00000002u; // 800E8810
  c->lr=0x800E8818u; f_803A9928(c); // 800E8814
  c->r[3]=c->r[31]|c->r[31]; // 800E8818
  c->r[4]=0u+0x00000000u; // 800E881C
  c->lr=0x800E8824u; f_80111238(c); // 800E8820
L_800E8824:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8828
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E882C
  c->lr=c->r[0]; // 800E8830
  c->r[1]=c->r[1]+0x00000010u; // 800E8834
  return; // 800E8838
}

// fn_800E883C
void f_800E883C(Ctx* __restrict c) {
  trace_call(0x800E883Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E883C
  c->r[0]=c->lr; // 800E8840
  W32(c->r[1]+0x000001D4u,c->r[0]); // 800E8844
  {uint32_t ea=c->r[1]+0x000001C4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E8848
  c->r[31]=c->r[1]|c->r[1]; // 800E884C
  c->r[30]=c->r[3]|c->r[3]; // 800E8850
  c->lr=0x800E8858u; f_800E8EF4(c); // 800E8854
  c->r[4]=0u+0x80690000u; // 800E8858
  c->r[3]=c->r[31]+0x000000B8u; // 800E885C
  c->r[4]=c->r[4]+0xFFFFEBC8u; // 800E8860
  c->r[4]=c->r[4]+0x00000014u; // 800E8864
  c->lr=0x800E886Cu; f_80048E74(c); // 800E8868
  c->r[3]=0u+0x80740000u; // 800E886C
  c->r[4]=c->r[31]+0x000000B8u; // 800E8870
  c->r[3]=c->r[3]+0x00004FD0u; // 800E8874
  c->lr=0x800E887Cu; f_80313128(c); // 800E8878
  c->r[0]=R8(c->r[3]+0x00000018u); // 800E887C
  c->r[4]=0u+0x00000000u; // 800E8880
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800E8884
  if (crb(c,2)) { goto L_800E889C; } // 800E8888
  c->r[0]=R8(c->r[3]+0x00000019u); // 800E888C
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800E8890
  if (!crb(c,2)) { goto L_800E889C; } // 800E8894
  c->r[4]=0u+0x00000001u; // 800E8898
L_800E889C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800E889C
  if (crb(c,2)) { goto L_800E88AC; } // 800E88A0
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800E88A4
  goto L_800E88B0; // 800E88A8
L_800E88AC:;
  c->r[29]=0u+0x00000000u; // 800E88AC
L_800E88B0:;
  c->r[0]=0u+0x00000000u; // 800E88B0
  W8(c->r[31]+0x00000008u,c->r[0]); // 800E88B4
  c->r[3]=c->r[31]+0x00000008u; // 800E88B8
  c->lr=0x800E88C0u; f_800A3310(c); // 800E88BC
  c->r[5]=c->r[29]|c->r[29]; // 800E88C0
  c->r[4]=c->r[31]+0x000000B8u; // 800E88C4
  c->lr=0x800E88CCu; f_802E1740(c); // 800E88C8
  c->r[3]=c->r[30]|c->r[30]; // 800E88CC
  c->lr=0x800E88D4u; f_80111280(c); // 800E88D0
  c->r[0]=R32(c->r[30]+0x00000780u); // 800E88D4
  cmps(c,0,(int32_t)c->r[0],0); // 800E88D8
  if (!crb(c,2)) { goto L_800E8930; } // 800E88DC
  c->lr=0x800E88E4u; f_800A37D0(c); // 800E88E0
  c->r[4]=0u+0x000000BCu; // 800E88E4
  c->lr=0x800E88ECu; f_8005BFB0(c); // 800E88E8
  cmps(c,0,(int32_t)c->r[3],0); // 800E88EC
  c->r[29]=c->r[3]|c->r[3]; // 800E88F0
  if (crb(c,2)) { goto L_800E892C; } // 800E88F4
  W32(c->r[31]+0x000000B4u,c->r[1]); // 800E88F8
  c->lr=0x800E8900u; f_800E8C64(c); // 800E88FC
  c->r[4]=0u+0x806E0000u; // 800E8900
  c->r[3]=c->r[29]|c->r[29]; // 800E8904
  c->r[4]=c->r[4]+0x00002AB0u; // 800E8908
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E890C
  c->r[4]=0u+0x00000000u; // 800E8910
  c->lr=0x800E8918u; f_802DF8F0(c); // 800E8914
  goto L_800E892C; // 800E8918
  c->r[3]=0u+0x00000000u; // 800E891C
  c->r[4]=0u+0x00000000u; // 800E8920
  c->r[5]=0u+0x00000000u; // 800E8924
  c->lr=0x800E892Cu; f_803ABBF0(c); // 800E8928
L_800E892C:;
  W32(c->r[30]+0x00000780u,c->r[29]); // 800E892C
L_800E8930:;
  c->r[0]=R32(c->r[30]+0x00000774u); // 800E8930
  cmps(c,0,(int32_t)c->r[0],0); // 800E8934
  if (!crb(c,2)) { goto L_800E89F4; } // 800E8938
  c->lr=0x800E8940u; f_800A37D0(c); // 800E893C
  c->r[4]=0u+0x00000154u; // 800E8940
  c->lr=0x800E8948u; f_8005BFB0(c); // 800E8944
  cmps(c,0,(int32_t)c->r[3],0); // 800E8948
  c->r[29]=c->r[3]|c->r[3]; // 800E894C
  if (crb(c,2)) { goto L_800E89F0; } // 800E8950
  W32(c->r[31]+0x0000009Cu,c->r[1]); // 800E8954
  c->lr=0x800E895Cu; f_800E8C64(c); // 800E8958
  c->r[3]=0u+0x806E0000u; // 800E895C
  c->r[4]=0u+0x800F0000u; // 800E8960
  c->r[3]=c->r[3]+0xFFFFCBFCu; // 800E8964
  c->r[5]=0u+0x800F0000u; // 800E8968
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E896C
  c->r[3]=c->r[29]+0x000000ACu; // 800E8970
  c->r[4]=c->r[4]+0xFFFF84ACu; // 800E8974
  c->r[5]=c->r[5]+0xFFFF8504u; // 800E8978
  c->r[6]=0u+0x00000014u; // 800E897C
  c->r[7]=0u+0x00000002u; // 800E8980
  c->lr=0x800E8988u; f_803A9830(c); // 800E8984
  c->r[4]=0u+0x800F0000u; // 800E8988
  c->r[5]=0u+0x800F0000u; // 800E898C
  c->r[3]=c->r[29]+0x000000D4u; // 800E8990
  c->r[6]=0u+0x0000000Cu; // 800E8994
  c->r[4]=c->r[4]+0xFFFF8D04u; // 800E8998
  c->r[5]=c->r[5]+0xFFFF8D4Cu; // 800E899C
  c->r[7]=0u+0x00000002u; // 800E89A0
  c->lr=0x800E89A8u; f_803A9830(c); // 800E89A4
  c->r[3]=c->r[29]+0x000000ECu; // 800E89A8
  c->lr=0x800E89B0u; f_800E84DC(c); // 800E89AC
  c->r[4]=0u+0x800F0000u; // 800E89B0
  c->r[5]=0u+0x80040000u; // 800E89B4
  c->r[3]=c->r[29]+0x00000110u; // 800E89B8
  c->r[6]=0u+0x00000004u; // 800E89BC
  c->r[4]=c->r[4]+0xFFFF8D84u; // 800E89C0
  c->r[5]=c->r[5]+0x00005E50u; // 800E89C4
  c->r[7]=0u+0x00000005u; // 800E89C8
  c->lr=0x800E89D0u; f_803A9830(c); // 800E89CC
  c->r[3]=c->r[29]|c->r[29]; // 800E89D0
  c->r[4]=0u+0x00000000u; // 800E89D4
  c->lr=0x800E89DCu; f_802DF8F0(c); // 800E89D8
  goto L_800E89F0; // 800E89DC
  c->r[3]=0u+0x00000000u; // 800E89E0
  c->r[4]=0u+0x00000000u; // 800E89E4
  c->r[5]=0u+0x00000000u; // 800E89E8
  c->lr=0x800E89F0u; f_803ABBF0(c); // 800E89EC
L_800E89F0:;
  W32(c->r[30]+0x00000774u,c->r[29]); // 800E89F0
L_800E89F4:;
  c->r[0]=R32(c->r[30]+0x00000778u); // 800E89F4
  cmps(c,0,(int32_t)c->r[0],0); // 800E89F8
  if (!crb(c,2)) { goto L_800E8A50; } // 800E89FC
  c->lr=0x800E8A04u; f_800A37D0(c); // 800E8A00
  c->r[4]=0u+0x000000B8u; // 800E8A04
  c->lr=0x800E8A0Cu; f_8005BFB0(c); // 800E8A08
  cmps(c,0,(int32_t)c->r[3],0); // 800E8A0C
  c->r[29]=c->r[3]|c->r[3]; // 800E8A10
  if (crb(c,2)) { goto L_800E8A4C; } // 800E8A14
  W32(c->r[31]+0x00000084u,c->r[1]); // 800E8A18
  c->lr=0x800E8A20u; f_800E8C64(c); // 800E8A1C
  c->r[4]=0u+0x806E0000u; // 800E8A20
  c->r[3]=c->r[29]|c->r[29]; // 800E8A24
  c->r[4]=c->r[4]+0xFFFFCB74u; // 800E8A28
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E8A2C
  c->r[4]=0u+0x00000000u; // 800E8A30
  c->lr=0x800E8A38u; f_802DF8F0(c); // 800E8A34
  goto L_800E8A4C; // 800E8A38
  c->r[3]=0u+0x00000000u; // 800E8A3C
  c->r[4]=0u+0x00000000u; // 800E8A40
  c->r[5]=0u+0x00000000u; // 800E8A44
  c->lr=0x800E8A4Cu; f_803ABBF0(c); // 800E8A48
L_800E8A4C:;
  W32(c->r[30]+0x00000778u,c->r[29]); // 800E8A4C
L_800E8A50:;
  c->r[0]=R32(c->r[30]+0x0000077Cu); // 800E8A50
  cmps(c,0,(int32_t)c->r[0],0); // 800E8A54
  if (!crb(c,2)) { goto L_800E8AAC; } // 800E8A58
  c->lr=0x800E8A60u; f_800A37D0(c); // 800E8A5C
  c->r[4]=0u+0x000002A8u; // 800E8A60
  c->lr=0x800E8A68u; f_8005BFB0(c); // 800E8A64
  cmps(c,0,(int32_t)c->r[3],0); // 800E8A68
  c->r[29]=c->r[3]|c->r[3]; // 800E8A6C
  if (crb(c,2)) { goto L_800E8AA8; } // 800E8A70
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 800E8A74
  c->lr=0x800E8A7Cu; f_800E8C64(c); // 800E8A78
  c->r[4]=0u+0x806E0000u; // 800E8A7C
  c->r[3]=c->r[29]|c->r[29]; // 800E8A80
  c->r[4]=c->r[4]+0x00002CA8u; // 800E8A84
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E8A88
  c->r[4]=0u+0x00000000u; // 800E8A8C
  c->lr=0x800E8A94u; f_802DF8F0(c); // 800E8A90
  goto L_800E8AA8; // 800E8A94
  c->r[3]=0u+0x00000000u; // 800E8A98
  c->r[4]=0u+0x00000000u; // 800E8A9C
  c->r[5]=0u+0x00000000u; // 800E8AA0
  c->lr=0x800E8AA8u; f_803ABBF0(c); // 800E8AA4
L_800E8AA8:;
  W32(c->r[30]+0x0000077Cu,c->r[29]); // 800E8AA8
L_800E8AAC:;
  c->r[0]=R32(c->r[30]+0x00000784u); // 800E8AAC
  cmps(c,0,(int32_t)c->r[0],0); // 800E8AB0
  if (!crb(c,2)) { goto L_800E8B08; } // 800E8AB4
  c->lr=0x800E8ABCu; f_800A37D0(c); // 800E8AB8
  c->r[4]=0u+0x000000A4u; // 800E8ABC
  c->lr=0x800E8AC4u; f_8005BFB0(c); // 800E8AC0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8AC4
  c->r[29]=c->r[3]|c->r[3]; // 800E8AC8
  if (crb(c,2)) { goto L_800E8B04; } // 800E8ACC
  W32(c->r[31]+0x00000054u,c->r[1]); // 800E8AD0
  c->lr=0x800E8AD8u; f_800E8C64(c); // 800E8AD4
  c->r[4]=0u+0x806E0000u; // 800E8AD8
  c->r[3]=c->r[29]|c->r[29]; // 800E8ADC
  c->r[4]=c->r[4]+0xFFFFCBB8u; // 800E8AE0
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E8AE4
  c->r[4]=0u+0x00000000u; // 800E8AE8
  c->lr=0x800E8AF0u; f_802DF8F0(c); // 800E8AEC
  goto L_800E8B04; // 800E8AF0
  c->r[3]=0u+0x00000000u; // 800E8AF4
  c->r[4]=0u+0x00000000u; // 800E8AF8
  c->r[5]=0u+0x00000000u; // 800E8AFC
  c->lr=0x800E8B04u; f_803ABBF0(c); // 800E8B00
L_800E8B04:;
  W32(c->r[30]+0x00000784u,c->r[29]); // 800E8B04
L_800E8B08:;
  c->r[0]=R32(c->r[30]+0x00000788u); // 800E8B08
  cmps(c,0,(int32_t)c->r[0],0); // 800E8B0C
  if (!crb(c,2)) { goto L_800E8B64; } // 800E8B10
  c->lr=0x800E8B18u; f_800A37D0(c); // 800E8B14
  c->r[4]=0u+0x00000020u; // 800E8B18
  c->lr=0x800E8B20u; f_8005BFB0(c); // 800E8B1C
  cmps(c,0,(int32_t)c->r[3],0); // 800E8B20
  c->r[29]=c->r[3]|c->r[3]; // 800E8B24
  if (crb(c,2)) { goto L_800E8B60; } // 800E8B28
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800E8B2C
  c->lr=0x800E8B34u; f_800E8CE0(c); // 800E8B30
  c->r[4]=0u+0x806E0000u; // 800E8B34
  c->r[3]=c->r[29]|c->r[29]; // 800E8B38
  c->r[4]=c->r[4]+0x00002E7Cu; // 800E8B3C
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E8B40
  c->r[4]=0u+0x00000000u; // 800E8B44
  c->lr=0x800E8B4Cu; f_802DF8F0(c); // 800E8B48
  goto L_800E8B60; // 800E8B4C
  c->r[3]=0u+0x00000000u; // 800E8B50
  c->r[4]=0u+0x00000000u; // 800E8B54
  c->r[5]=0u+0x00000000u; // 800E8B58
  c->lr=0x800E8B60u; f_803ABBF0(c); // 800E8B5C
L_800E8B60:;
  W32(c->r[30]+0x00000788u,c->r[29]); // 800E8B60
L_800E8B64:;
  c->r[0]=R32(c->r[30]+0x0000078Cu); // 800E8B64
  cmps(c,0,(int32_t)c->r[0],0); // 800E8B68
  if (!crb(c,2)) { goto L_800E8BC0; } // 800E8B6C
  c->lr=0x800E8B74u; f_800A37D0(c); // 800E8B70
  c->r[4]=0u+0x000000A8u; // 800E8B74
  c->lr=0x800E8B7Cu; f_8005BFB0(c); // 800E8B78
  cmps(c,0,(int32_t)c->r[3],0); // 800E8B7C
  c->r[29]=c->r[3]|c->r[3]; // 800E8B80
  if (crb(c,2)) { goto L_800E8BBC; } // 800E8B84
  W32(c->r[31]+0x00000024u,c->r[1]); // 800E8B88
  c->lr=0x800E8B90u; f_800E8C64(c); // 800E8B8C
  c->r[4]=0u+0x806E0000u; // 800E8B90
  c->r[3]=c->r[29]|c->r[29]; // 800E8B94
  c->r[4]=c->r[4]+0xFFFFCB30u; // 800E8B98
  W32(c->r[29]+0x00000000u,c->r[4]); // 800E8B9C
  c->r[4]=0u+0x00000000u; // 800E8BA0
  c->lr=0x800E8BA8u; f_802DF8F0(c); // 800E8BA4
  goto L_800E8BBC; // 800E8BA8
  c->r[3]=0u+0x00000000u; // 800E8BAC
  c->r[4]=0u+0x00000000u; // 800E8BB0
  c->r[5]=0u+0x00000000u; // 800E8BB4
  c->lr=0x800E8BBCu; f_803ABBF0(c); // 800E8BB8
L_800E8BBC:;
  W32(c->r[30]+0x0000078Cu,c->r[29]); // 800E8BBC
L_800E8BC0:;
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8BC0
  c->r[4]=R8(c->r[30]+0x000008C8u); // 800E8BC4
  c->lr=0x800E8BCCu; f_80142D78(c); // 800E8BC8
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8BCC
  c->r[4]=0u+0x00000000u; // 800E8BD0
  c->r[5]=R32(c->r[30]+0x000007A8u); // 800E8BD4
  c->lr=0x800E8BDCu; f_801431A4(c); // 800E8BD8
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8BDC
  c->r[4]=0u+0x00000001u; // 800E8BE0
  c->r[5]=R32(c->r[30]+0x00000844u); // 800E8BE4
  c->lr=0x800E8BECu; f_801431A4(c); // 800E8BE8
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8BEC
  c->r[4]=0u+0x00000000u; // 800E8BF0
  c->r[5]=0u+0xFFFFFFFFu; // 800E8BF4
  c->lr=0x800E8BFCu; f_801435E8(c); // 800E8BF8
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8BFC
  c->r[4]=0u+0x00000001u; // 800E8C00
  c->r[5]=0u+0xFFFFFFFFu; // 800E8C04
  c->lr=0x800E8C0Cu; f_801435E8(c); // 800E8C08
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8C0C
  c->r[4]=0u+0x00000000u; // 800E8C10
  c->r[5]=R32(c->r[30]+0x000010D0u); // 800E8C14
  c->lr=0x800E8C1Cu; f_80142E50(c); // 800E8C18
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8C1C
  c->r[4]=0u+0x00000001u; // 800E8C20
  c->r[5]=R32(c->r[30]+0x000010D4u); // 800E8C24
  c->lr=0x800E8C2Cu; f_80142E50(c); // 800E8C28
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E8C2C
  c->r[6]=0u+0x00000000u; // 800E8C30
  c->r[4]=R8(c->r[30]+0x000008CAu); // 800E8C34
  c->r[5]=R8(c->r[30]+0x000008C8u); // 800E8C38
  c->lr=0x800E8C40u; f_8014605C(c); // 800E8C3C
  c->r[3]=c->r[30]|c->r[30]; // 800E8C40
  c->lr=0x800E8C48u; f_800EAB98(c); // 800E8C44
  c->r[10]=c->r[31]|c->r[31]; // 800E8C48
  {uint32_t ea=c->r[10]+0x000001C4u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E8C4C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800E8C50
  c->r[0]=R32(c->r[10]+0x00000004u); // 800E8C54
  c->r[1]=c->r[10]|c->r[10]; // 800E8C58
  c->lr=c->r[0]; // 800E8C5C
  return; // 800E8C60
}

// fn_800E8C64
void f_800E8C64(Ctx* __restrict c) {
  trace_call(0x800E8C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8C64
  c->r[0]=c->lr; // 800E8C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8C6C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E8C70
  c->r[29]=c->r[3]|c->r[3]; // 800E8C74
  c->lr=0x800E8C7Cu; f_800E8CE0(c); // 800E8C78
  c->r[3]=0u+0x806E0000u; // 800E8C7C
  c->r[30]=0u+0x800A0000u; // 800E8C80
  c->r[3]=c->r[3]+0x00006A60u; // 800E8C84
  c->r[31]=0u+0x800A0000u; // 800E8C88
  W32(c->r[29]+0x00000000u,c->r[3]); // 800E8C8C
  c->r[3]=c->r[29]+0x00000080u; // 800E8C90
  c->r[4]=c->r[30]+0x0000372Cu; // 800E8C94
  c->r[5]=c->r[31]+0x0000373Cu; // 800E8C98
  c->r[6]=0u+0x00000008u; // 800E8C9C
  c->r[7]=0u+0x00000002u; // 800E8CA0
  c->lr=0x800E8CA8u; f_803A9830(c); // 800E8CA4
  c->r[3]=c->r[29]+0x00000090u; // 800E8CA8
  c->r[4]=c->r[30]+0x0000372Cu; // 800E8CAC
  c->r[5]=c->r[31]+0x0000373Cu; // 800E8CB0
  c->r[6]=0u+0x00000008u; // 800E8CB4
  c->r[7]=0u+0x00000002u; // 800E8CB8
  c->lr=0x800E8CC0u; f_803A9830(c); // 800E8CBC
  c->r[3]=c->r[29]|c->r[29]; // 800E8CC0
  c->lr=0x800E8CC8u; f_8020ED84(c); // 800E8CC4
  c->r[3]=c->r[29]|c->r[29]; // 800E8CC8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E8CCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E8CD0
  c->lr=c->r[0]; // 800E8CD4
  c->r[1]=c->r[1]+0x00000020u; // 800E8CD8
  return; // 800E8CDC
}

// fn_800E8CE0
void f_800E8CE0(Ctx* __restrict c) {
  trace_call(0x800E8CE0u);
  c->r[4]=0u+0x806D0000u; // 800E8CE0
  c->r[5]=c->r[3]+0x00000010u; // 800E8CE4
  c->r[4]=c->r[4]+0x00005CF4u; // 800E8CE8
  c->r[0]=0u+0x00000000u; // 800E8CEC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800E8CF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800E8CF4
  W32(c->r[3]+0x00000010u,c->r[5]); // 800E8CF8
  W32(c->r[3]+0x00000014u,c->r[5]); // 800E8CFC
  return; // 800E8D00
}

// fn_800E8D04
void f_800E8D04(Ctx* __restrict c) {
  trace_call(0x800E8D04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D04
  c->r[0]=c->lr; // 800E8D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8D0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8D10
  c->r[31]=c->r[3]|c->r[3]; // 800E8D14
  c->lr=0x800E8D1Cu; f_800E8D34(c); // 800E8D18
  c->r[3]=c->r[31]|c->r[31]; // 800E8D1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8D24
  c->lr=c->r[0]; // 800E8D28
  c->r[1]=c->r[1]+0x00000010u; // 800E8D2C
  return; // 800E8D30
}

// fn_800E8D34
void f_800E8D34(Ctx* __restrict c) {
  trace_call(0x800E8D34u);
  c->r[4]=0u+0x00000000u; // 800E8D34
  c->r[0]=0u+0xFFFFFFFFu; // 800E8D38
  W32(c->r[3]+0x00000000u,c->r[4]); // 800E8D3C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800E8D40
  W32(c->r[3]+0x00000008u,c->r[0]); // 800E8D44
  return; // 800E8D48
}

// dtor_800E8D4C
void f_800E8D4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D4C
  c->r[0]=c->lr; // 800E8D50
  cmps(c,0,(int32_t)c->r[3],0); // 800E8D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E8D5C
  c->r[31]=c->r[3]|c->r[3]; // 800E8D60
  if (crb(c,2)) { goto L_800E8D6C; } // 800E8D64
  c->lr=0x800E8D6Cu; f_800E8D34(c); // 800E8D68
L_800E8D6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8D6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E8D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8D74
  c->lr=c->r[0]; // 800E8D78
  c->r[1]=c->r[1]+0x00000010u; // 800E8D7C
  return; // 800E8D80
}

// fn_800E8D84
void f_800E8D84(Ctx* __restrict c) {
  trace_call(0x800E8D84u);
  c->r[0]=0u+0xFFFFFFFFu; // 800E8D84
  W32(c->r[3]+0x00000000u,c->r[0]); // 800E8D88
  return; // 800E8D8C
}

// fn_800E8D90
void f_800E8D90(Ctx* __restrict c) {
  trace_call(0x800E8D90u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8D90
  c->r[0]=c->lr; // 800E8D94
  W32(c->r[1]+0x00000124u,c->r[0]); // 800E8D98
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800E8D9C
  c->r[31]=c->r[3]|c->r[3]; // 800E8DA0
  c->lr=0x800E8DA8u; f_800EA614(c); // 800E8DA4
  c->r[3]=R32(c->r[31]+0x00000780u); // 800E8DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800E8DAC
  if (crb(c,2)) { goto L_800E8DCC; } // 800E8DB0
  c->lr=0x800E8DB8u; f_802DF9A4(c); // 800E8DB4
  c->lr=0x800E8DBCu; f_800A37D0(c); // 800E8DB8
  c->r[3]=R32(c->r[31]+0x00000780u); // 800E8DBC
  c->lr=0x800E8DC4u; f_8005328C(c); // 800E8DC0
  c->r[0]=0u+0x00000000u; // 800E8DC4
  W32(c->r[31]+0x00000780u,c->r[0]); // 800E8DC8
L_800E8DCC:;
  c->r[3]=R32(c->r[31]+0x00000774u); // 800E8DCC
  cmps(c,0,(int32_t)c->r[3],0); // 800E8DD0
  if (crb(c,2)) { goto L_800E8DF0; } // 800E8DD4
  c->lr=0x800E8DDCu; f_802DF9A4(c); // 800E8DD8
  c->lr=0x800E8DE0u; f_800A37D0(c); // 800E8DDC
  c->r[3]=R32(c->r[31]+0x00000774u); // 800E8DE0
  c->lr=0x800E8DE8u; f_8005328C(c); // 800E8DE4
  c->r[0]=0u+0x00000000u; // 800E8DE8
  W32(c->r[31]+0x00000774u,c->r[0]); // 800E8DEC
L_800E8DF0:;
  c->r[3]=R32(c->r[31]+0x00000778u); // 800E8DF0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8DF4
  if (crb(c,2)) { goto L_800E8E14; } // 800E8DF8
  c->lr=0x800E8E00u; f_802DF9A4(c); // 800E8DFC
  c->lr=0x800E8E04u; f_800A37D0(c); // 800E8E00
  c->r[3]=R32(c->r[31]+0x00000778u); // 800E8E04
  c->lr=0x800E8E0Cu; f_8005328C(c); // 800E8E08
  c->r[0]=0u+0x00000000u; // 800E8E0C
  W32(c->r[31]+0x00000778u,c->r[0]); // 800E8E10
L_800E8E14:;
  c->r[3]=R32(c->r[31]+0x0000077Cu); // 800E8E14
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E18
  if (crb(c,2)) { goto L_800E8E38; } // 800E8E1C
  c->lr=0x800E8E24u; f_802DF9A4(c); // 800E8E20
  c->lr=0x800E8E28u; f_800A37D0(c); // 800E8E24
  c->r[3]=R32(c->r[31]+0x0000077Cu); // 800E8E28
  c->lr=0x800E8E30u; f_8005328C(c); // 800E8E2C
  c->r[0]=0u+0x00000000u; // 800E8E30
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 800E8E34
L_800E8E38:;
  c->r[3]=R32(c->r[31]+0x00000784u); // 800E8E38
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E3C
  if (crb(c,2)) { goto L_800E8E5C; } // 800E8E40
  c->lr=0x800E8E48u; f_802DF9A4(c); // 800E8E44
  c->lr=0x800E8E4Cu; f_800A37D0(c); // 800E8E48
  c->r[3]=R32(c->r[31]+0x00000784u); // 800E8E4C
  c->lr=0x800E8E54u; f_8005328C(c); // 800E8E50
  c->r[0]=0u+0x00000000u; // 800E8E54
  W32(c->r[31]+0x00000784u,c->r[0]); // 800E8E58
L_800E8E5C:;
  c->r[3]=R32(c->r[31]+0x00000788u); // 800E8E5C
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E60
  if (crb(c,2)) { goto L_800E8E80; } // 800E8E64
  c->lr=0x800E8E6Cu; f_802DF9A4(c); // 800E8E68
  c->lr=0x800E8E70u; f_800A37D0(c); // 800E8E6C
  c->r[3]=R32(c->r[31]+0x00000788u); // 800E8E70
  c->lr=0x800E8E78u; f_8005328C(c); // 800E8E74
  c->r[0]=0u+0x00000000u; // 800E8E78
  W32(c->r[31]+0x00000788u,c->r[0]); // 800E8E7C
L_800E8E80:;
  c->r[3]=R32(c->r[31]+0x0000078Cu); // 800E8E80
  cmps(c,0,(int32_t)c->r[3],0); // 800E8E84
  if (crb(c,2)) { goto L_800E8EA4; } // 800E8E88
  c->lr=0x800E8E90u; f_802DF9A4(c); // 800E8E8C
  c->lr=0x800E8E94u; f_800A37D0(c); // 800E8E90
  c->r[3]=R32(c->r[31]+0x0000078Cu); // 800E8E94
  c->lr=0x800E8E9Cu; f_8005328C(c); // 800E8E98
  c->r[0]=0u+0x00000000u; // 800E8E9C
  W32(c->r[31]+0x0000078Cu,c->r[0]); // 800E8EA0
L_800E8EA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800E8EA4
  c->lr=0x800E8EACu; f_80111628(c); // 800E8EA8
  c->r[4]=0u+0x80690000u; // 800E8EAC
  c->r[3]=c->r[1]+0x00000010u; // 800E8EB0
  c->r[4]=c->r[4]+0xFFFFEBC8u; // 800E8EB4
  c->r[4]=c->r[4]+0x00000014u; // 800E8EB8
  c->lr=0x800E8EC0u; f_80048E74(c); // 800E8EBC
  c->r[0]=0u+0x00000000u; // 800E8EC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E8EC4
  c->r[3]=c->r[1]+0x00000008u; // 800E8EC8
  c->lr=0x800E8ED0u; f_800A3310(c); // 800E8ECC
  c->r[4]=c->r[1]+0x00000010u; // 800E8ED0
  c->lr=0x800E8ED8u; f_802E1A50(c); // 800E8ED4
  c->r[3]=c->r[31]|c->r[31]; // 800E8ED8
  c->lr=0x800E8EE0u; f_800E8EF4(c); // 800E8EDC
  c->r[0]=R32(c->r[1]+0x00000124u); // 800E8EE0
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800E8EE4
  c->lr=c->r[0]; // 800E8EE8
  c->r[1]=c->r[1]+0x00000120u; // 800E8EEC
  return; // 800E8EF0
}

// fn_800E8EF4
void f_800E8EF4(Ctx* __restrict c) {
  trace_call(0x800E8EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8EF4
  c->r[0]=c->lr; // 800E8EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E8EFC
  c->r[0]=0u+0x00000001u; // 800E8F00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E8F04
  c->r[31]=0u+0x00000000u; // 800E8F08
  c->r[30]=c->r[3]|c->r[3]; // 800E8F0C
  W8(c->r[3]+0x000008C8u,c->r[31]); // 800E8F10
  W8(c->r[3]+0x000008C9u,c->r[0]); // 800E8F14
  c->r[3]=c->r[3]+0x00000790u; // 800E8F18
  c->lr=0x800E8F20u; f_800E8468(c); // 800E8F1C
  c->r[3]=c->r[30]+0x0000082Cu; // 800E8F20
  c->lr=0x800E8F28u; f_800E8468(c); // 800E8F24
  c->r[3]=c->r[30]+0x000000ECu; // 800E8F28
  c->lr=0x800E8F30u; f_800E83B0(c); // 800E8F2C
  c->r[3]=c->r[30]+0x00000430u; // 800E8F30
  c->lr=0x800E8F38u; f_800E83B0(c); // 800E8F34
  W32(c->r[30]+0x00000774u,c->r[31]); // 800E8F38
  W32(c->r[30]+0x0000077Cu,c->r[31]); // 800E8F3C
  W32(c->r[30]+0x00000780u,c->r[31]); // 800E8F40
  W32(c->r[30]+0x00000788u,c->r[31]); // 800E8F44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E8F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E8F4C
  c->lr=c->r[0]; // 800E8F50
  c->r[1]=c->r[1]+0x00000010u; // 800E8F54
  return; // 800E8F58
}

// fn_800E8F5C
void f_800E8F5C(Ctx* __restrict c) {
  trace_call(0x800E8F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E8F5C
  c->r[0]=c->lr; // 800E8F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E8F64
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E8F68
  c->r[27]=c->r[3]|c->r[3]; // 800E8F6C
  c->r[0]=R32(c->r[3]+0x00000774u); // 800E8F70
  cmps(c,0,(int32_t)c->r[0],0); // 800E8F74
  if (!crb(c,2)) { goto L_800E8F84; } // 800E8F78
  c->r[3]=0u+0x00000001u; // 800E8F7C
  goto L_800E9080; // 800E8F80
L_800E8F84:;
  c->r[28]=0u+0x00000000u; // 800E8F84
  c->r[31]=0u+0x00000000u; // 800E8F88
  c->r[30]=c->r[28]|c->r[28]; // 800E8F8C
L_800E8F90:;
  c->r[0]=R8(c->r[27]+0x000008C8u); // 800E8F90
  cmps(c,0,(int32_t)c->r[0],0); // 800E8F94
  if (crb(c,2)) { goto L_800E8FA4; } // 800E8F98
  cmps(c,0,(int32_t)c->r[28],1); // 800E8F9C
  if (crb(c,2)) { goto L_800E8FD0; } // 800E8FA0
L_800E8FA4:;
  c->r[29]=c->r[27]+c->r[31]; // 800E8FA4
  c->r[0]=R8(c->r[29]+0x00000828u); // 800E8FA8
  cmps(c,0,(int32_t)c->r[0],0); // 800E8FAC
  if (crb(c,2)) { goto L_800E8FD0; } // 800E8FB0
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E8FB4
  c->r[4]=c->r[28]|c->r[28]; // 800E8FB8
  c->r[5]=R32(c->r[29]+0x000007A8u); // 800E8FBC
  c->lr=0x800E8FC4u; f_80143780(c); // 800E8FC0
  cmps(c,0,(int32_t)c->r[3],0); // 800E8FC4
  if (crb(c,2)) { goto L_800E8FD0; } // 800E8FC8
  W8(c->r[29]+0x00000828u,c->r[30]); // 800E8FCC
L_800E8FD0:;
  c->r[28]=c->r[28]+0x00000001u; // 800E8FD0
  c->r[31]=c->r[31]+0x0000009Cu; // 800E8FD4
  cmps(c,0,(int32_t)c->r[28],2); // 800E8FD8
  if (crb(c,0)) { IRQCHK(c); goto L_800E8F90; } // 800E8FDC
  c->r[0]=R8(c->r[27]+0x000008C9u); // 800E8FE0
  cmps(c,0,(int32_t)c->r[0],0); // 800E8FE4
  if (crb(c,2)) { goto L_800E9028; } // 800E8FE8
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E8FEC
  c->r[4]=R8(c->r[27]+0x000008CCu); // 800E8FF0
  c->r[5]=R8(c->r[27]+0x00000829u); // 800E8FF4
  c->r[6]=R8(c->r[27]+0x0000082Au); // 800E8FF8
  c->r[7]=R8(c->r[27]+0x000008C5u); // 800E8FFC
  c->r[8]=R8(c->r[27]+0x000008C6u); // 800E9000
  c->lr=0x800E9008u; f_80144020(c); // 800E9004
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E9008
  c->r[6]=0u+0x00000001u; // 800E900C
  c->r[4]=R8(c->r[27]+0x000008CAu); // 800E9010
  c->r[5]=R8(c->r[27]+0x000008C8u); // 800E9014
  c->lr=0x800E901Cu; f_8014605C(c); // 800E9018
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E901C
  c->r[4]=R8(c->r[27]+0x000008CBu); // 800E9020
  c->lr=0x800E9028u; f_80142694(c); // 800E9024
L_800E9028:;
  c->r[31]=R8(c->r[27]+0x000008C9u); // 800E9028
  c->r[30]=R32(c->r[27]+0x00000778u); // 800E902C
  c->r[4]=c->r[31]|c->r[31]; // 800E9030
  c->r[3]=c->r[30]|c->r[30]; // 800E9034
  c->lr=0x800E903Cu; f_802DFACC(c); // 800E9038
  c->r[3]=c->r[30]|c->r[30]; // 800E903C
  c->r[4]=c->r[31]|c->r[31]; // 800E9040
  c->lr=0x800E9048u; f_802DFA30(c); // 800E9044
  c->r[0]=R8(c->r[27]+0x000010DCu); // 800E9048
  cmps(c,0,(int32_t)c->r[0],0); // 800E904C
  if (crb(c,2)) { goto L_800E9074; } // 800E9050
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E9054
  c->lr=0x800E905Cu; f_801469B0(c); // 800E9058
  cmps(c,0,(int32_t)c->r[3],0); // 800E905C
  if (crb(c,2)) { goto L_800E9074; } // 800E9060
  c->r[0]=0u+0x00000000u; // 800E9064
  W8(c->r[27]+0x000010DCu,c->r[0]); // 800E9068
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E906C
  c->lr=0x800E9074u; f_80146BA4(c); // 800E9070
L_800E9074:;
  c->r[3]=c->r[27]|c->r[27]; // 800E9074
  c->lr=0x800E907Cu; f_801117F4(c); // 800E9078
  c->r[3]=0u+0x00000001u; // 800E907C
L_800E9080:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E9080
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E9084
  c->lr=c->r[0]; // 800E9088
  c->r[1]=c->r[1]+0x00000020u; // 800E908C
  return; // 800E9090
}

// fn_800E9094
void f_800E9094(Ctx* __restrict c) {
  trace_call(0x800E9094u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9094
  c->r[0]=c->lr; // 800E9098
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800E909C
  c->r[11]=c->r[1]+0x000000A0u; // 800E90A0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800E90A4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800E90A8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800E90AC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800E90B0
  c->lr=0x800E90B8u; f_803A9BD0(c); // 800E90B4
  c->r[0]=R32(c->r[3]+0x00000774u); // 800E90B8
  c->r[15]=c->r[3]|c->r[3]; // 800E90BC
  cmps(c,0,(int32_t)c->r[0],0); // 800E90C0
  if (crb(c,2)) { goto L_800E9440; } // 800E90C4
  c->r[0]=R32(c->r[3]+0x0000077Cu); // 800E90C8
  cmps(c,0,(int32_t)c->r[0],0); // 800E90CC
  if (crb(c,2)) { goto L_800E9440; } // 800E90D0
  c->r[0]=0u+0x00000000u; // 800E90D4
  W8(c->r[1]+0x00000010u,c->r[0]); // 800E90D8
  c->r[3]=c->r[1]+0x00000010u; // 800E90DC
  c->lr=0x800E90E4u; f_800486E8(c); // 800E90E0
  c->r[0]=R8(c->r[3]+0x00000020u); // 800E90E4
  c->r[14]=c->r[3]|c->r[3]; // 800E90E8
  cmps(c,0,(int32_t)c->r[0],0); // 800E90EC
  if (!crb(c,2)) { goto L_800E9198; } // 800E90F0
  c->r[4]=R32(c->r[3]+0x00000010u); // 800E90F4
  cmps(c,0,(int32_t)c->r[4],0); // 800E90F8
  if (crb(c,2)) { goto L_800E9198; } // 800E90FC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800E9100
  cmps(c,0,(int32_t)c->r[0],0); // 800E9104
  if (crb(c,2)) { goto L_800E9198; } // 800E9108
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E910C
  cmps(c,0,(int32_t)c->r[0],8); // 800E9110
  if (!crb(c,1)) { goto L_800E9198; } // 800E9114
  c->r[0]=R32(c->r[4]+0x00000040u); // 800E9118
  cmps(c,0,(int32_t)c->r[0],0); // 800E911C
  if (!crb(c,2)) { goto L_800E9130; } // 800E9120
  c->r[0]=R32(c->r[3]+0x00000014u); // 800E9124
  W32(c->r[4]+0x00000040u,c->r[0]); // 800E9128
  goto L_800E913C; // 800E912C
L_800E9130:;
  c->r[4]=R32(c->r[4]+0x00000044u); // 800E9130
  c->r[0]=R32(c->r[3]+0x00000014u); // 800E9134
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E9138
L_800E913C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 800E913C
  c->r[0]=0u+0x00000000u; // 800E9140
  c->r[5]=R32(c->r[3]+0x00000014u); // 800E9144
  W32(c->r[4]+0x00000044u,c->r[5]); // 800E9148
  c->r[4]=R32(c->r[3]+0x00000014u); // 800E914C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E9150
  c->r[4]=R32(c->r[3]+0x00000014u); // 800E9154
  W32(c->r[4]+0x00000008u,c->r[0]); // 800E9158
  c->r[4]=R32(c->r[3]+0x00000014u); // 800E915C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E9160
  c->r[0]=R8(c->r[14]+0x00000030u); // 800E9164
  c->r[5]=R32(c->r[3]+0x00000014u); // 800E9168
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E916C
  c->r[0]=R32(c->r[14]+0x0000002Cu); // 800E9170
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800E9174
  c->r[4]=c->r[14]+c->r[4]; // 800E9178
  c->r[3]=c->r[5]+0x00000020u; // 800E917C
  c->r[4]=R32(c->r[4]+0x00000018u); // 800E9180
  c->r[4]=c->r[3]-c->r[4]; // 800E9184
  c->r[4]=c->r[0]-c->r[4]; // 800E9188
  c->lr=0x800E9190u; f_803A8234(c); // 800E918C
  c->r[0]=0u+0x00000008u; // 800E9190
  W32(c->r[14]+0x00000024u,c->r[0]); // 800E9194
L_800E9198:;
  c->r[25]=0u+0x00000000u; // 800E9198
  W32(c->r[1]+0x00000018u,c->r[25]); // 800E919C
  {uint32_t ea=c->r[2]+0xFFFFA67Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800E91A0
  c->r[22]=c->r[1]+0x00000018u; // 800E91A4
  W32(c->r[1]+0x0000001Cu,c->r[25]); // 800E91A8
  c->r[17]=0u+0x00000000u; // 800E91AC
  c->r[31]=0u+0x00000000u; // 800E91B0
  c->r[30]=0u+0x00000000u; // 800E91B4
  c->r[29]=0u+0x00000000u; // 800E91B8
  c->r[14]=0u+0x00000003u; // 800E91BC
  c->r[26]=0u+0x00000002u; // 800E91C0
L_800E91C4:;
  c->r[21]=c->r[15]+c->r[31]; // 800E91C4
  c->r[0]=R32(c->r[21]+0x0000042Cu); // 800E91C8
  cmps(c,0,(int32_t)c->r[0],0); // 800E91CC
  if (!crb(c,1)) { goto L_800E9398; } // 800E91D0
  c->r[24]=c->r[21]+0x0000022Cu; // 800E91D4
  c->r[23]=c->r[21]+0x000002ECu; // 800E91D8
  c->r[16]=0u+0x00000000u; // 800E91DC
  c->r[28]=0u+0x00000000u; // 800E91E0
  c->r[27]=0u+0x00000000u; // 800E91E4
L_800E91E8:;
  c->r[18]=c->r[21]+c->r[27]; // 800E91E8
  c->r[0]=R32(c->r[18]+0x000000ECu); // 800E91EC
  cmps(c,0,(int32_t)c->r[0],1); // 800E91F0
  if (!crb(c,2)) { goto L_800E921C; } // 800E91F4
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E91F8
  c->r[4]=R32(c->r[18]+0x0000012Cu); // 800E91FC
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9200
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9204
  c->lr=0x800E920Cu; f_801B4480(c); // 800E9208
  cmps(c,0,(int32_t)c->r[3],0); // 800E920C
  if (crb(c,2)) { goto L_800E9384; } // 800E9210
  W32(c->r[18]+0x000000ECu,c->r[26]); // 800E9214
  goto L_800E9384; // 800E9218
L_800E921C:;
  cmps(c,0,(int32_t)c->r[0],2); // 800E921C
  if (!crb(c,2)) { goto L_800E9260; } // 800E9220
  c->r[3]=c->r[1]+0x00000044u; // 800E9224
  c->r[4]=c->r[24]+c->r[28]; // 800E9228
  c->lr=0x800E9230u; f_8005CD7C(c); // 800E922C
  c->r[5]=c->r[3]|c->r[3]; // 800E9230
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E9234
  c->r[4]=R32(c->r[18]+0x0000012Cu); // 800E9238
  c->r[6]=c->r[16]+c->r[30]; // 800E923C
  c->lr=0x800E9244u; f_801B47A4(c); // 800E9240
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E9244
  c->r[4]=R32(c->r[18]+0x0000012Cu); // 800E9248
  c->lr=0x800E9250u; f_801B46BC(c); // 800E924C
  cmps(c,0,(int32_t)c->r[3],0); // 800E9250
  if (crb(c,2)) { goto L_800E9384; } // 800E9254
  W32(c->r[18]+0x000000ECu,c->r[14]); // 800E9258
  goto L_800E9384; // 800E925C
L_800E9260:;
  cmps(c,0,(int32_t)c->r[0],3); // 800E9260
  if (!crb(c,2)) { goto L_800E92FC; } // 800E9264
  c->r[20]=c->r[24]+c->r[28]; // 800E9268
  c->r[19]=c->r[16]+c->r[30]; // 800E926C
  c->r[4]=c->r[20]|c->r[20]; // 800E9270
  c->r[3]=c->r[1]+0x00000038u; // 800E9274
  c->lr=0x800E927Cu; f_8005CD7C(c); // 800E9278
  c->r[5]=c->r[3]|c->r[3]; // 800E927C
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E9280
  c->r[4]=R32(c->r[18]+0x0000012Cu); // 800E9284
  c->r[6]=c->r[19]|c->r[19]; // 800E9288
  c->lr=0x800E9290u; f_801B47A4(c); // 800E928C
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 800E9290
  c->r[3]=c->r[1]+0x0000000Cu; // 800E9294
  c->lr=0x800E929Cu; f_8004714C(c); // 800E9298
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E929C
  c->r[3]=c->r[1]+0x0000002Cu; // 800E92A0
  c->r[4]=c->r[23]+c->r[28]; // 800E92A4
  c->lr=0x800E92ACu; f_8005CD7C(c); // 800E92A8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[30]); // 800E92AC
  c->r[5]=c->r[3]|c->r[3]; // 800E92B0
  c->r[3]=c->r[15]|c->r[15]; // 800E92B4
  c->r[4]=c->r[20]|c->r[20]; // 800E92B8
  c->lr=0x800E92C0u; f_800E9F7C(c); // 800E92BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E92C0
  if (crb(c,2)) { goto L_800E9384; } // 800E92C4
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E92C8
  c->r[0]=0u+0x00000004u; // 800E92CC
  W32(c->r[18]+0x000000ECu,c->r[0]); // 800E92D0
  c->r[3]=c->r[1]+0x00000020u; // 800E92D4
  c->f[2]=c->f[1]; // 800E92D8
  c->f[3]=c->f[1]; // 800E92DC
  c->lr=0x800E92E4u; f_8005FD70(c); // 800E92E0
  c->r[5]=c->r[3]|c->r[3]; // 800E92E4
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E92E8
  c->r[6]=c->r[19]|c->r[19]; // 800E92EC
  c->r[4]=0u+0xFFFFFFFFu; // 800E92F0
  c->lr=0x800E92F8u; f_801B47A4(c); // 800E92F4
  goto L_800E9384; // 800E92F8
L_800E92FC:;
  cmps(c,0,(int32_t)c->r[0],4); // 800E92FC
  if (!crb(c,2)) { goto L_800E934C; } // 800E9300
  c->r[0]=R32(c->r[22]+c->r[29]); // 800E9304
  cmps(c,0,(int32_t)c->r[0],0); // 800E9308
  if (crb(c,1)) { goto L_800E9384; } // 800E930C
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E9310
  c->r[4]=c->r[17]|c->r[17]; // 800E9314
  c->r[5]=R32(c->r[18]+0x0000012Cu); // 800E9318
  c->r[6]=R32(c->r[18]+0x0000016Cu); // 800E931C
  c->r[7]=R32(c->r[18]+0x000001ACu); // 800E9320
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9324
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9328
  c->lr=0x800E9330u; f_801B47D0(c); // 800E932C
  cmps(c,0,(int32_t)c->r[3],0); // 800E9330
  if (crb(c,2)) { goto L_800E9384; } // 800E9334
  c->r[0]=0u+0x00000005u; // 800E9338
  W32(c->r[18]+0x000000ECu,c->r[0]); // 800E933C
  c->r[0]=0u+0x00000001u; // 800E9340
  W32(c->r[22]+c->r[29],c->r[0]); // 800E9344
  goto L_800E9384; // 800E9348
L_800E934C:;
  cmps(c,0,(int32_t)c->r[0],5); // 800E934C
  if (!crb(c,2)) { goto L_800E9384; } // 800E9350
  c->r[3]=R32(c->r[15]+0x0000077Cu); // 800E9354
  c->r[4]=c->r[17]|c->r[17]; // 800E9358
  c->r[5]=R32(c->r[18]+0x0000012Cu); // 800E935C
  c->r[6]=R32(c->r[18]+0x000001ECu); // 800E9360
  c->r[7]=R32(c->r[18]+0x0000016Cu); // 800E9364
  c->lr=0x800E936Cu; f_801B4C0C(c); // 800E9368
  cmps(c,0,(int32_t)c->r[3],0); // 800E936C
  if (crb(c,2)) { goto L_800E9384; } // 800E9370
  W32(c->r[18]+0x000000ECu,c->r[25]); // 800E9374
  c->r[3]=R32(c->r[21]+0x0000042Cu); // 800E9378
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E937C
  W32(c->r[21]+0x0000042Cu,c->r[0]); // 800E9380
L_800E9384:;
  c->r[16]=c->r[16]+0x00000001u; // 800E9384
  c->r[27]=c->r[27]+0x00000004u; // 800E9388
  cmps(c,0,(int32_t)c->r[16],16); // 800E938C
  c->r[28]=c->r[28]+0x0000000Cu; // 800E9390
  if (crb(c,0)) { IRQCHK(c); goto L_800E91E8; } // 800E9394
L_800E9398:;
  c->r[17]=c->r[17]+0x00000001u; // 800E9398
  c->r[30]=c->r[30]+0x00000010u; // 800E939C
  cmps(c,0,(int32_t)c->r[17],2); // 800E93A0
  c->r[29]=c->r[29]+0x00000004u; // 800E93A4
  c->r[31]=c->r[31]+0x00000344u; // 800E93A8
  if (crb(c,0)) { IRQCHK(c); goto L_800E91C4; } // 800E93AC
  c->r[0]=0u+0x00000000u; // 800E93B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E93B4
  c->r[3]=c->r[1]+0x00000008u; // 800E93B8
  c->lr=0x800E93C0u; f_800486E8(c); // 800E93BC
  c->r[0]=R8(c->r[3]+0x00000020u); // 800E93C0
  c->r[14]=c->r[3]|c->r[3]; // 800E93C4
  cmps(c,0,(int32_t)c->r[0],0); // 800E93C8
  if (!crb(c,2)) { goto L_800E9440; } // 800E93CC
  c->r[4]=R32(c->r[3]+0x00000010u); // 800E93D0
  cmps(c,0,(int32_t)c->r[4],0); // 800E93D4
  if (crb(c,2)) { goto L_800E9440; } // 800E93D8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800E93DC
  cmps(c,0,(int32_t)c->r[0],0); // 800E93E0
  if (crb(c,2)) { goto L_800E9440; } // 800E93E4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800E93E8
  cmps(c,0,(int32_t)c->r[0],0); // 800E93EC
  if (crb(c,0)) { goto L_800E9440; } // 800E93F0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800E93F4
  c->r[3]=c->r[4]+c->r[0]; // 800E93F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800E93FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E9400
  cmps(c,0,(int32_t)c->r[0],0); // 800E9404
  if (!crb(c,2)) { goto L_800E9440; } // 800E9408
  c->lr=0x800E9410u; f_803A82E8(c); // 800E940C
  c->r[4]=R32(c->r[14]+0x00000024u); // 800E9410
  c->r[0]=0u+0xFFFFFFFFu; // 800E9414
  c->r[5]=R32(c->r[14]+0x00000010u); // 800E9418
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800E941C
  c->r[4]=c->r[5]+c->r[4]; // 800E9420
  c->r[4]=R32(c->r[4]+0x00000004u); // 800E9424
  W32(c->r[4]+0x00000008u,c->r[3]); // 800E9428
  W32(c->r[14]+0x00000024u,c->r[0]); // 800E942C
  c->r[0]=R32(c->r[14]+0x00000014u); // 800E9430
  c->r[3]=c->r[3]+c->r[0]; // 800E9434
  c->r[0]=c->r[3]+0x00000020u; // 800E9438
  W32(c->r[14]+0x00000014u,c->r[0]); // 800E943C
L_800E9440:;
  c->r[11]=c->r[1]+0x000000A0u; // 800E9440
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800E9444
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800E9448
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800E944C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800E9450
  c->lr=0x800E9458u; f_803A9C1C(c); // 800E9454
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800E9458
  c->lr=c->r[0]; // 800E945C
  c->r[1]=c->r[1]+0x000000C0u; // 800E9460
  return; // 800E9464
}

// fn_800E9468
void f_800E9468(Ctx* __restrict c) {
  trace_call(0x800E9468u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9468
  c->r[0]=c->lr; // 800E946C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E9470
  c->r[11]=c->r[1]+0x00000040u; // 800E9474
  c->lr=0x800E947Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9478
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E947C
  c->r[27]=c->r[3]|c->r[3]; // 800E9480
  c->r[7]=c->r[3]+c->r[0]; // 800E9484
  c->r[28]=c->r[4]|c->r[4]; // 800E9488
  W32(c->r[7]+0x000010D0u,c->r[5]); // 800E948C
  c->r[29]=c->r[5]|c->r[5]; // 800E9490
  c->r[30]=c->r[6]|c->r[6]; // 800E9494
  c->r[31]=c->r[9]|c->r[9]; // 800E9498
  c->r[0]=R32(c->r[3]+0x00000774u); // 800E949C
  cmps(c,0,(int32_t)c->r[0],0); // 800E94A0
  if (crb(c,2)) { goto L_800E9574; } // 800E94A4
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E94A8
  c->r[5]=c->r[31]|c->r[31]; // 800E94AC
  c->r[6]=0u+0xFFFFFFFFu; // 800E94B0
  c->r[7]=0u+0xFFFFFFFFu; // 800E94B4
  c->r[8]=0u+0xFFFFFFFFu; // 800E94B8
  c->lr=0x800E94C0u; f_800E9868(c); // 800E94BC
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E94C0
  c->r[4]=c->r[28]|c->r[28]; // 800E94C4
  c->r[5]=c->r[29]|c->r[29]; // 800E94C8
  c->lr=0x800E94D0u; f_80142E50(c); // 800E94CC
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E94D0
  c->r[4]=c->r[28]|c->r[28]; // 800E94D4
  c->r[5]=c->r[31]|c->r[31]; // 800E94D8
  c->lr=0x800E94E0u; f_801431A4(c); // 800E94DC
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E94E0
  c->r[4]=c->r[28]|c->r[28]; // 800E94E4
  c->r[5]=c->r[31]|c->r[31]; // 800E94E8
  c->lr=0x800E94F0u; f_801435E8(c); // 800E94EC
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E94F0
  c->r[4]=c->r[28]|c->r[28]; // 800E94F4
  c->r[5]=c->r[31]|c->r[31]; // 800E94F8
  c->lr=0x800E9500u; f_801432D4(c); // 800E94FC
  c->r[7]=c->r[30]^0x80000000u; // 800E9500
  c->r[6]=0u+0x43300000u; // 800E9504
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)156); // 800E9508
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800E950C
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[3]=RF64(ea);} // 800E9510
  cmps(c,0,(int32_t)c->r[28],1); // 800E9514
  W32(c->r[1]+0x00000008u,c->r[6]); // 800E9518
  c->r[4]=0u+0x00000000u; // 800E951C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800E9520
  c->r[3]=c->r[27]+c->r[0]; // 800E9524
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800E9528
  c->r[0]=R32(c->r[27]+0x00000774u); // 800E952C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800E9530
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800E9534
  W32(c->r[1]+0x00000010u,c->r[6]); // 800E9538
  c->r[5]=c->r[0]+c->r[5]; // 800E953C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800E9540
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800E9544
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 800E9548
  W32(c->r[1]+0x00000018u,c->r[6]); // 800E954C
  {uint32_t ea=c->r[5]+0x000000B4u; WF32(ea,c->f[2]);} // 800E9550
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800E9554
  {uint32_t ea=c->r[5]+0x000000ACu; WF32(ea,c->f[1]);} // 800E9558
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800E955C
  {uint32_t ea=c->r[5]+0x000000B0u; WF32(ea,c->f[0]);} // 800E9560
  W8(c->r[3]+0x00000828u,c->r[4]); // 800E9564
  if (!crb(c,2)) { goto L_800E9574; } // 800E9568
  c->r[3]=R32(c->r[27]+0x00000774u); // 800E956C
  c->lr=0x800E9574u; f_801430D8(c); // 800E9570
L_800E9574:;
  c->r[11]=c->r[1]+0x00000040u; // 800E9574
  c->lr=0x800E957Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E9578
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E957C
  c->lr=c->r[0]; // 800E9580
  c->r[1]=c->r[1]+0x00000040u; // 800E9584
  return; // 800E9588
}

// fn_800E958C
void f_800E958C(Ctx* __restrict c) {
  trace_call(0x800E958Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E958C
  c->r[0]=c->lr; // 800E9590
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E9598
  c->r[31]=c->r[4]|c->r[4]; // 800E959C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E95A0
  c->r[30]=c->r[3]|c->r[3]; // 800E95A4
  c->r[0]=R32(c->r[3]+0x00000774u); // 800E95A8
  cmps(c,0,(int32_t)c->r[0],0); // 800E95AC
  if (crb(c,2)) { goto L_800E95EC; } // 800E95B0
  cmps(c,0,(int32_t)c->r[4],0); // 800E95B4
  if (crb(c,2)) { goto L_800E95D8; } // 800E95B8
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E95BC
  c->r[4]=0u+0x00000001u; // 800E95C0
  c->r[5]=0u+0x00000000u; // 800E95C4
  c->r[6]=0u+0xFFFFFFFFu; // 800E95C8
  c->r[7]=0u+0xFFFFFFFFu; // 800E95CC
  c->r[8]=0u+0xFFFFFFFFu; // 800E95D0
  c->lr=0x800E95D8u; f_800E9868(c); // 800E95D4
L_800E95D8:;
  W8(c->r[30]+0x000008C8u,c->r[31]); // 800E95D8
  c->r[4]=c->r[31]|c->r[31]; // 800E95DC
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E95E0
  c->lr=0x800E95E8u; f_80142D78(c); // 800E95E4
  W8(c->r[30]+0x000010DAu,c->r[31]); // 800E95E8
L_800E95EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E95EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E95F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E95F4
  c->lr=c->r[0]; // 800E95F8
  c->r[1]=c->r[1]+0x00000010u; // 800E95FC
  return; // 800E9600
}

// fn_800E9604
void f_800E9604(Ctx* __restrict c) {
  trace_call(0x800E9604u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9604
  c->r[0]=c->lr; // 800E9608
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E960C
  c->r[11]=c->r[1]+0x00000060u; // 800E9610
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800E9614
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800E9618
  c->lr=0x800E9620u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E961C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 800E9620
  c->r[27]=c->r[4]|c->r[4]; // 800E9624
  c->f[31]=c->f[1]; // 800E9628
  c->r[26]=c->r[3]|c->r[3]; // 800E962C
  c->r[4]=c->r[3]+c->r[0]; // 800E9630
  {uint32_t ea=c->r[4]+0x00000A0Cu; WF32(ea,c->f[1]);} // 800E9634
  c->r[4]=R32(c->r[3]+0x00000774u); // 800E9638
  cmps(c,0,(int32_t)c->r[4],0); // 800E963C
  if (crb(c,2)) { goto L_800E9748; } // 800E9640
  c->r[5]=c->r[27]|c->r[27]; // 800E9644
  c->r[3]=c->r[1]+0x00000030u; // 800E9648
  c->r[30]=0u+0x00000000u; // 800E964C
  c->r[29]=0u+0x00000000u; // 800E9650
  c->lr=0x800E9658u; f_800E9768(c); // 800E9654
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9658
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E965C
  fcmp(c,0,c->f[1],c->f[0]); // 800E9660
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E9664
  c->r[28]=c->cr; // 800E9668
  c->r[3]=c->r[1]+0x00000030u; // 800E966C
  c->r[28]=rotl(c->r[28],3)&0x00000001u; // 800E9670
  c->lr=0x800E9678u; f_800E84DC(c); // 800E9674
  c->r[4]=R32(c->r[26]+0x00000774u); // 800E9678
  c->r[5]=c->r[27]|c->r[27]; // 800E967C
  c->r[3]=c->r[1]+0x0000001Cu; // 800E9680
  c->lr=0x800E9688u; f_800E9768(c); // 800E9684
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9688
  fcmp(c,0,c->f[31],c->f[0]); // 800E968C
  c->r[0]=c->cr; // 800E9690
  c->r[3]=c->r[1]+0x0000001Cu; // 800E9694
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800E9698
  c->r[31]=c->r[0]^0x00000001u; // 800E969C
  c->lr=0x800E96A4u; f_800E84DC(c); // 800E96A0
  cmps(c,0,(int32_t)c->r[31],0); // 800E96A4
  if (crb(c,2)) { goto L_800E96B0; } // 800E96A8
  c->r[30]=0u+0x00000001u; // 800E96AC
L_800E96B0:;
  c->r[4]=R32(c->r[26]+0x00000774u); // 800E96B0
  c->r[5]=c->r[27]|c->r[27]; // 800E96B4
  c->r[3]=c->r[1]+0x00000008u; // 800E96B8
  c->lr=0x800E96C0u; f_800E9768(c); // 800E96BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E96C0
  fcmp(c,0,c->f[0],c->f[31]); // 800E96C4
  c->r[31]=c->cr; // 800E96C8
  c->r[3]=c->r[1]+0x00000008u; // 800E96CC
  c->r[31]=rotl(c->r[31],1)&0x00000001u; // 800E96D0
  c->lr=0x800E96D8u; f_800E84DC(c); // 800E96D4
  cmps(c,0,(int32_t)c->r[31],0); // 800E96D8
  if (crb(c,2)) { goto L_800E96E4; } // 800E96DC
  c->r[29]=0u+0x00000001u; // 800E96E0
L_800E96E4:;
  c->f[1]=c->f[31]; // 800E96E4
  c->r[3]=R32(c->r[26]+0x00000774u); // 800E96E8
  c->r[4]=c->r[27]|c->r[27]; // 800E96EC
  c->lr=0x800E96F4u; f_801425E0(c); // 800E96F0
  cmps(c,0,(int32_t)c->r[30],0); // 800E96F4
  if (crb(c,2)) { goto L_800E9708; } // 800E96F8
  c->r[3]=c->r[26]|c->r[26]; // 800E96FC
  c->r[4]=c->r[27]|c->r[27]; // 800E9700
  c->lr=0x800E9708u; f_800E97A4(c); // 800E9704
L_800E9708:;
  cmps(c,0,(int32_t)c->r[28],0); // 800E9708
  if (!crb(c,2)) { goto L_800E9748; } // 800E970C
  cmps(c,0,(int32_t)c->r[29],0); // 800E9710
  if (crb(c,2)) { goto L_800E9748; } // 800E9714
  c->r[0]=R8(c->r[26]+0x000008C8u); // 800E9718
  cmps(c,0,(int32_t)c->r[0],0); // 800E971C
  if (crb(c,2)) { goto L_800E9738; } // 800E9720
  c->r[3]=R32(c->r[26]+0x00000778u); // 800E9724
  c->r[4]=0u+0x00000002u; // 800E9728
  c->r[5]=0u+0x00000001u; // 800E972C
  c->lr=0x800E9734u; f_80147F70(c); // 800E9730
  goto L_800E9748; // 800E9734
L_800E9738:;
  c->r[3]=R32(c->r[26]+0x00000778u); // 800E9738
  c->r[4]=c->r[27]|c->r[27]; // 800E973C
  c->r[5]=0u+0x00000001u; // 800E9740
  c->lr=0x800E9748u; f_80147F70(c); // 800E9744
L_800E9748:;
  c->r[11]=c->r[1]+0x00000060u; // 800E9748
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800E974C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800E9750
  c->lr=0x800E9758u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E9754
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E9758
  c->lr=c->r[0]; // 800E975C
  c->r[1]=c->r[1]+0x00000070u; // 800E9760
  return; // 800E9764
}

// fn_800E9768
void f_800E9768(Ctx* __restrict c) {
  trace_call(0x800E9768u);
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 800E9768
  c->r[4]=c->r[4]+c->r[0]; // 800E976C
  c->r[4]=c->r[4]+0x000000ACu; // 800E9770
  f_800E9778(c); return; // 800E9774
}

// fn_800E9778
void f_800E9778(Ctx* __restrict c) {
  trace_call(0x800E9778u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E9778
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E977C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9780
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9784
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9788
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 800E978C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 800E9790
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800E9794
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E9798
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800E979C
  return; // 800E97A0
}

// fn_800E97A4
void f_800E97A4(Ctx* __restrict c) {
  trace_call(0x800E97A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E97A4
  c->r[0]=c->lr; // 800E97A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E97AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E97B0
  c->r[30]=c->r[3]|c->r[3]; // 800E97B4
  c->r[31]=c->r[4]|c->r[4]; // 800E97B8
  c->r[0]=R8(c->r[3]+0x000008C8u); // 800E97BC
  cmps(c,0,(int32_t)c->r[0],0); // 800E97C0
  if (crb(c,2)) { goto L_800E983C; } // 800E97C4
  c->r[3]=R32(c->r[3]+0x00000774u); // 800E97C8
  c->r[4]=0u+0x00000000u; // 800E97CC
  c->lr=0x800E97D4u; f_801426F0(c); // 800E97D0
  cmps(c,0,(int32_t)c->r[31],0); // 800E97D4
  c->r[31]=c->r[3]|c->r[3]; // 800E97D8
  if (!crb(c,2)) { goto L_800E9800; } // 800E97DC
  c->r[3]=R32(c->r[30]+0x00000778u); // 800E97E0
  c->r[5]=c->r[31]|c->r[31]; // 800E97E4
  c->r[4]=0u+0x00000002u; // 800E97E8
  c->lr=0x800E97F0u; f_80147264(c); // 800E97EC
  c->r[3]=R32(c->r[30]+0x00000778u); // 800E97F0
  c->r[4]=0u+0x00000000u; // 800E97F4
  c->r[5]=0u+0x00000000u; // 800E97F8
  c->lr=0x800E9800u; f_80147264(c); // 800E97FC
L_800E9800:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E9800
  if (crb(c,2)) { goto L_800E981C; } // 800E9804
  c->r[3]=R32(c->r[30]+0x00000778u); // 800E9808
  c->r[4]=0u+0x00000001u; // 800E980C
  c->r[5]=0u+0x00000000u; // 800E9810
  c->lr=0x800E9818u; f_80147264(c); // 800E9814
  goto L_800E9854; // 800E9818
L_800E981C:;
  c->r[3]=R32(c->r[30]+0x00000774u); // 800E981C
  c->r[4]=0u+0x00000001u; // 800E9820
  c->lr=0x800E9828u; f_801426F0(c); // 800E9824
  c->r[5]=c->r[3]|c->r[3]; // 800E9828
  c->r[3]=R32(c->r[30]+0x00000778u); // 800E982C
  c->r[4]=0u+0x00000001u; // 800E9830
  c->lr=0x800E9838u; f_80147264(c); // 800E9834
  goto L_800E9854; // 800E9838
L_800E983C:;
  c->r[3]=R32(c->r[3]+0x00000774u); // 800E983C
  c->lr=0x800E9844u; f_801426F0(c); // 800E9840
  c->r[5]=c->r[3]|c->r[3]; // 800E9844
  c->r[3]=R32(c->r[30]+0x00000778u); // 800E9848
  c->r[4]=c->r[31]|c->r[31]; // 800E984C
  c->lr=0x800E9854u; f_80147264(c); // 800E9850
L_800E9854:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E9854
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E9858
  c->lr=c->r[0]; // 800E985C
  c->r[1]=c->r[1]+0x00000010u; // 800E9860
  return; // 800E9864
}

// fn_800E9868
void f_800E9868(Ctx* __restrict c) {
  trace_call(0x800E9868u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9868
  c->r[0]=c->lr; // 800E986C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E9870
  c->r[11]=c->r[1]+0x00000030u; // 800E9874
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E9878
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E987C
  c->lr=0x800E9884u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9880
  c->r[9]=R32(c->r[3]+0x00000774u); // 800E9884
  c->f[31]=c->f[1]; // 800E9888
  c->r[25]=c->r[3]|c->r[3]; // 800E988C
  c->r[26]=c->r[4]|c->r[4]; // 800E9890
  cmps(c,0,(int32_t)c->r[9],0); // 800E9894
  c->r[27]=c->r[5]|c->r[5]; // 800E9898
  c->r[28]=c->r[6]|c->r[6]; // 800E989C
  c->r[29]=c->r[7]|c->r[7]; // 800E98A0
  c->r[30]=c->r[8]|c->r[8]; // 800E98A4
  if (crb(c,2)) { goto L_800E9A9C; } // 800E98A8
  cmps(c,0,(int32_t)c->r[5],0); // 800E98AC
  if (crb(c,0)) { goto L_800E9A9C; } // 800E98B0
  cmps(c,0,(int32_t)c->r[5],9); // 800E98B4
  if (crb(c,1)) { goto L_800E9A9C; } // 800E98B8
  cmps(c,0,(int32_t)c->r[4],1); // 800E98BC
  if (!crb(c,2)) { goto L_800E98D0; } // 800E98C0
  c->r[0]=R8(c->r[3]+0x000008C8u); // 800E98C4
  cmps(c,0,(int32_t)c->r[0],0); // 800E98C8
  if (!crb(c,2)) { goto L_800E9A9C; } // 800E98CC
L_800E98D0:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 800E98D0
  if (!crb(c,1)) { goto L_800E98DC; } // 800E98D4
  c->r[29]=c->r[30]|c->r[30]; // 800E98D8
L_800E98DC:;
  c->f[1]=c->f[31]; // 800E98DC
  c->r[3]=c->r[9]|c->r[9]; // 800E98E0
  c->r[4]=c->r[26]|c->r[26]; // 800E98E4
  c->lr=0x800E98ECu; f_80143A80(c); // 800E98E8
  c->r[31]=(uint32_t)((int32_t)c->r[26]*(int32_t)156); // 800E98EC
  c->r[23]=c->r[25]+c->r[31]; // 800E98F0
  {uint32_t ea=c->r[23]+0x000007ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E98F4
  fcmp(c,0,c->f[31],c->f[0]); // 800E98F8
  if (crb(c,2)) { goto L_800E9938; } // 800E98FC
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9900
  fcmp(c,0,c->f[31],c->f[0]); // 800E9904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E9908
  if (!crb(c,2)) { goto L_800E9924; } // 800E990C
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E9910
  c->r[4]=c->r[26]|c->r[26]; // 800E9914
  c->r[5]=0u+0x00000001u; // 800E9918
  c->lr=0x800E9920u; f_80143DAC(c); // 800E991C
  goto L_800E9934; // 800E9920
L_800E9924:;
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E9924
  c->r[4]=c->r[26]|c->r[26]; // 800E9928
  c->r[5]=0u+0x00000000u; // 800E992C
  c->lr=0x800E9934u; f_80143DAC(c); // 800E9930
L_800E9934:;
  {uint32_t ea=c->r[23]+0x000007ACu; WF32(ea,c->f[31]);} // 800E9934
L_800E9938:;
  c->r[3]=c->r[25]+c->r[31]; // 800E9938
  c->r[0]=R32(c->r[3]+0x000007A8u); // 800E993C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800E9940
  if (!crb(c,2)) { goto L_800E9980; } // 800E9944
  cmps(c,0,(int32_t)c->r[0],7); // 800E9948
  if (crb(c,2)) { goto L_800E99A4; } // 800E994C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800E9950
  c->r[3]=c->r[3]+c->r[0]; // 800E9954
  c->r[0]=R32(c->r[3]+0x000007D8u); // 800E9958
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800E995C
  if (!crb(c,2)) { goto L_800E99A4; } // 800E9960
  c->r[0]=R32(c->r[3]+0x00000800u); // 800E9964
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800E9968
  if (!crb(c,2)) { goto L_800E99A4; } // 800E996C
  c->r[0]=R32(c->r[3]+0x000007B0u); // 800E9970
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800E9974
  if (!crb(c,2)) { goto L_800E99A4; } // 800E9978
  goto L_800E9A9C; // 800E997C
L_800E9980:;
  c->r[0]=R8(c->r[3]+0x00000828u); // 800E9980
  cmps(c,0,(int32_t)c->r[0],0); // 800E9984
  if (!crb(c,2)) { goto L_800E99A4; } // 800E9988
  c->r[0]=0u+0x00000001u; // 800E998C
  W8(c->r[3]+0x00000828u,c->r[0]); // 800E9990
  c->r[4]=c->r[26]|c->r[26]; // 800E9994
  W32(c->r[3]+0x000007A8u,c->r[27]); // 800E9998
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E999C
  c->lr=0x800E99A4u; f_8014396C(c); // 800E99A0
L_800E99A4:;
  c->r[23]=c->r[25]+c->r[31]; // 800E99A4
  c->r[0]=0u+0x00000000u; // 800E99A8
  W8(c->r[23]+0x00000829u,c->r[0]); // 800E99AC
  cmps(c,0,(int32_t)c->r[27],7); // 800E99B0
  W8(c->r[23]+0x0000082Au,c->r[0]); // 800E99B4
  if (crb(c,2)) { goto L_800E99F8; } // 800E99B8
  cmps(c,0,(int32_t)c->r[27],0); // 800E99BC
  if (crb(c,2)) { goto L_800E99DC; } // 800E99C0
  cmps(c,0,(int32_t)c->r[28],0); // 800E99C4
  if (!crb(c,2)) { goto L_800E99DC; } // 800E99C8
  cmps(c,0,(int32_t)c->r[29],0); // 800E99CC
  if (!crb(c,2)) { goto L_800E99DC; } // 800E99D0
  c->r[0]=0u+0x00000001u; // 800E99D4
  W8(c->r[23]+0x00000829u,c->r[0]); // 800E99D8
L_800E99DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800E99DC
  if (!crb(c,2)) { goto L_800E99F8; } // 800E99E0
  c->r[0]=R8(c->r[23]+0x00000829u); // 800E99E4
  cmps(c,0,(int32_t)c->r[0],0); // 800E99E8
  if (!crb(c,2)) { goto L_800E99F8; } // 800E99EC
  c->r[0]=0u+0x00000001u; // 800E99F0
  W8(c->r[23]+0x0000082Au,c->r[0]); // 800E99F4
L_800E99F8:;
  c->r[24]=c->r[25]+c->r[31]; // 800E99F8
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E99FC
  c->r[5]=R8(c->r[24]+0x00000829u); // 800E9A00
  c->r[4]=c->r[26]|c->r[26]; // 800E9A04
  c->lr=0x800E9A0Cu; f_80144C50(c); // 800E9A08
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E9A0C
  c->r[4]=c->r[26]|c->r[26]; // 800E9A10
  c->r[5]=R8(c->r[23]+0x0000082Au); // 800E9A14
  c->lr=0x800E9A1Cu; f_80144B04(c); // 800E9A18
  c->r[0]=R8(c->r[24]+0x00000829u); // 800E9A1C
  c->r[4]=c->r[26]|c->r[26]; // 800E9A20
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E9A24
  c->r[5]=0u+0x00000000u; // 800E9A28
  cmps(c,0,(int32_t)c->r[0],0); // 800E9A2C
  if (!crb(c,2)) { goto L_800E9A40; } // 800E9A30
  c->r[0]=R8(c->r[23]+0x0000082Au); // 800E9A34
  cmps(c,0,(int32_t)c->r[0],0); // 800E9A38
  if (crb(c,2)) { goto L_800E9A44; } // 800E9A3C
L_800E9A40:;
  c->r[5]=0u+0x00000001u; // 800E9A40
L_800E9A44:;
  cmps(c,0,(int32_t)c->r[5],0); // 800E9A44
  c->r[5]=0u+0x000000B4u; // 800E9A48
  if (crb(c,2)) { goto L_800E9A54; } // 800E9A4C
  c->r[5]=0u+0x0000002Du; // 800E9A50
L_800E9A54:;
  c->lr=0x800E9A58u; f_80144D9C(c); // 800E9A54
  c->r[3]=R32(c->r[25]+0x00000774u); // 800E9A58
  c->r[4]=c->r[26]|c->r[26]; // 800E9A5C
  c->r[5]=c->r[27]|c->r[27]; // 800E9A60
  c->r[6]=c->r[29]|c->r[29]; // 800E9A64
  c->r[7]=c->r[30]|c->r[30]; // 800E9A68
  c->lr=0x800E9A70u; f_80144008(c); // 800E9A6C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800E9A70
  c->r[0]=c->r[25]+c->r[31]; // 800E9A74
  c->r[6]=c->r[0]+c->r[3]; // 800E9A78
  c->f[1]=c->f[31]; // 800E9A7C
  W32(c->r[6]+0x000007B0u,c->r[29]); // 800E9A80
  c->r[3]=c->r[25]|c->r[25]; // 800E9A84
  c->r[4]=c->r[26]|c->r[26]; // 800E9A88
  c->r[5]=c->r[27]|c->r[27]; // 800E9A8C
  W32(c->r[6]+0x000007D8u,c->r[30]); // 800E9A90
  c->r[6]=c->r[28]|c->r[28]; // 800E9A94
  c->lr=0x800E9A9Cu; f_800E9ABC(c); // 800E9A98
L_800E9A9C:;
  c->r[11]=c->r[1]+0x00000030u; // 800E9A9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800E9AA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E9AA4
  c->lr=0x800E9AACu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E9AA8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E9AAC
  c->lr=c->r[0]; // 800E9AB0
  c->r[1]=c->r[1]+0x00000040u; // 800E9AB4
  return; // 800E9AB8
}

// fn_800E9ABC
void f_800E9ABC(Ctx* __restrict c) {
  trace_call(0x800E9ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9ABC
  c->r[0]=c->lr; // 800E9AC0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800E9AC4
  c->r[11]=c->r[1]+0x000000E0u; // 800E9AC8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800E9ACC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800E9AD0
  c->lr=0x800E9AD8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9AD4
  c->r[0]=R32(c->r[3]+0x00000774u); // 800E9AD8
  c->f[31]=c->f[1]; // 800E9ADC
  c->r[28]=c->r[3]|c->r[3]; // 800E9AE0
  c->r[29]=c->r[4]|c->r[4]; // 800E9AE4
  cmps(c,0,(int32_t)c->r[0],0); // 800E9AE8
  c->r[30]=c->r[5]|c->r[5]; // 800E9AEC
  c->r[31]=c->r[6]|c->r[6]; // 800E9AF0
  if (crb(c,2)) { goto L_800E9D68; } // 800E9AF4
  cmps(c,0,(int32_t)c->r[4],1); // 800E9AF8
  if (!crb(c,2)) { goto L_800E9B0C; } // 800E9AFC
  c->r[0]=R8(c->r[3]+0x000008C8u); // 800E9B00
  cmps(c,0,(int32_t)c->r[0],0); // 800E9B04
  if (!crb(c,2)) { goto L_800E9D68; } // 800E9B08
L_800E9B0C:;
  cmps(c,0,(int32_t)c->r[6],9999); // 800E9B0C
  if (!crb(c,1)) { goto L_800E9B1C; } // 800E9B10
  c->r[31]=0u+0x0000270Fu; // 800E9B14
  goto L_800E9B28; // 800E9B18
L_800E9B1C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800E9B1C
  if (!crb(c,0)) { goto L_800E9B28; } // 800E9B20
  c->r[31]=0u+0x00000000u; // 800E9B24
L_800E9B28:;
  c->r[0]=0u+0x00000004u; // 800E9B28
  c->r[7]=c->r[1]+0x00000014u; // 800E9B2C
  c->r[6]=0u+0x00000000u; // 800E9B30
  c->ctr=c->r[0]; // 800E9B34
L_800E9B38:;
  W32(c->r[7]+0x00000004u,c->r[6]); // 800E9B38
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[6]); c->r[7]=ea;} // 800E9B3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E9B38; } // 800E9B40
  c->r[0]=0u+0x00000008u; // 800E9B44
  c->r[7]=c->r[1]+0x00000074u; // 800E9B48
  c->r[6]=0u+0x00000000u; // 800E9B4C
  c->ctr=c->r[0]; // 800E9B50
L_800E9B54:;
  W32(c->r[7]+0x00000004u,c->r[6]); // 800E9B54
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[6]); c->r[7]=ea;} // 800E9B58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E9B54; } // 800E9B5C
  c->r[0]=0u+0x00000008u; // 800E9B60
  c->r[7]=c->r[1]+0x00000034u; // 800E9B64
  c->r[6]=0u+0x00000000u; // 800E9B68
  c->ctr=c->r[0]; // 800E9B6C
L_800E9B70:;
  W32(c->r[7]+0x00000004u,c->r[6]); // 800E9B70
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[6]); c->r[7]=ea;} // 800E9B74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E9B70; } // 800E9B78
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)156); // 800E9B7C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800E9B80
  cmps(c,0,(int32_t)c->r[5],0); // 800E9B84
  c->r[4]=c->r[29]|c->r[29]; // 800E9B88
  c->r[6]=c->r[3]+c->r[6]; // 800E9B8C
  c->r[5]=0u+0x00000000u; // 800E9B90
  c->r[6]=c->r[6]+c->r[0]; // 800E9B94
  W32(c->r[6]+0x00000800u,c->r[31]); // 800E9B98
  c->r[3]=R32(c->r[3]+0x00000774u); // 800E9B9C
  if (!crb(c,2)) { goto L_800E9BB4; } // 800E9BA0
  c->r[0]=R8(c->r[28]+0x000008CCu); // 800E9BA4
  cmps(c,0,(int32_t)c->r[0],0); // 800E9BA8
  if (crb(c,2)) { goto L_800E9BB4; } // 800E9BAC
  c->r[5]=0u+0x00000001u; // 800E9BB0
L_800E9BB4:;
  c->lr=0x800E9BB8u; f_801442F8(c); // 800E9BB4
  cmps(c,0,(int32_t)c->r[30],0); // 800E9BB8
  if (!crb(c,2)) { goto L_800E9BDC; } // 800E9BBC
  c->r[5]=0u+0x806E0000u; // 800E9BC0
  c->r[3]=R32(c->r[28]+0x00000774u); // 800E9BC4
  c->r[5]=c->r[5]+0xFFFF8084u; // 800E9BC8
  c->r[4]=c->r[29]|c->r[29]; // 800E9BCC
  c->r[6]=c->r[5]+0x0000000Au; // 800E9BD0
  c->lr=0x800E9BD8u; f_8014419C(c); // 800E9BD4
  goto L_800E9D68; // 800E9BD8
L_800E9BDC:;
  cmps(c,0,(int32_t)c->r[30],7); // 800E9BDC
  if (!crb(c,2)) { goto L_800E9C6C; } // 800E9BE0
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9BE4
  c->r[30]=0u+0x80690000u; // 800E9BE8
  c->r[30]=c->r[30]+0xFFFFEBC8u; // 800E9BEC
  c->r[3]=c->r[1]+0x00000018u; // 800E9BF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800E9BF4
  c->r[4]=c->r[30]+0x0000002Cu; // 800E9BF8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E9BFC
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800E9C00
  c->r[5]=R32(c->r[1]+0x000000BCu); // 800E9C04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9C08
  c->lr=0x800E9C10u; f_803B1FC8(c); // 800E9C0C
  c->r[3]=c->r[1]+0x00000078u; // 800E9C10
  c->r[4]=c->r[1]+0x00000018u; // 800E9C14
  c->r[5]=0u+0x00000008u; // 800E9C18
  c->lr=0x800E9C20u; f_803AF51C(c); // 800E9C1C
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9C20
  c->r[3]=c->r[1]+0x00000018u; // 800E9C24
  c->r[4]=c->r[30]+0x00000031u; // 800E9C28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800E9C2C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800E9C30
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[0]);} // 800E9C34
  c->r[5]=R32(c->r[1]+0x000000C4u); // 800E9C38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9C3C
  c->lr=0x800E9C44u; f_803B1FC8(c); // 800E9C40
  c->r[3]=c->r[1]+0x00000038u; // 800E9C44
  c->r[4]=c->r[1]+0x00000018u; // 800E9C48
  c->r[5]=0u+0x00000008u; // 800E9C4C
  c->lr=0x800E9C54u; f_803AF51C(c); // 800E9C50
  c->r[3]=R32(c->r[28]+0x00000774u); // 800E9C54
  c->r[4]=c->r[29]|c->r[29]; // 800E9C58
  c->r[5]=c->r[1]+0x00000078u; // 800E9C5C
  c->r[6]=c->r[1]+0x00000038u; // 800E9C60
  c->lr=0x800E9C68u; f_8014419C(c); // 800E9C64
  goto L_800E9D68; // 800E9C68
L_800E9C6C:;
  cmps(c,0,(int32_t)c->r[31],10); // 800E9C6C
  c->r[0]=0u+0x00000000u; // 800E9C70
  W32(c->r[1]+0x00000008u,c->r[0]); // 800E9C74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800E9C78
  W32(c->r[1]+0x00000010u,c->r[0]); // 800E9C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E9C80
  if (!crb(c,0)) { goto L_800E9CA0; } // 800E9C84
  c->r[4]=0u+0x806E0000u; // 800E9C88
  c->r[3]=c->r[1]+0x00000008u; // 800E9C8C
  c->r[4]=c->r[4]+0xFFFF8084u; // 800E9C90
  c->r[4]=c->r[4]+0x0000000Cu; // 800E9C94
  c->lr=0x800E9C9Cu; f_803B630C(c); // 800E9C98
  goto L_800E9CF4; // 800E9C9C
L_800E9CA0:;
  cmps(c,0,(int32_t)c->r[31],100); // 800E9CA0
  if (!crb(c,0)) { goto L_800E9CC0; } // 800E9CA4
  c->r[4]=0u+0x806E0000u; // 800E9CA8
  c->r[3]=c->r[1]+0x00000008u; // 800E9CAC
  c->r[4]=c->r[4]+0xFFFF8084u; // 800E9CB0
  c->r[4]=c->r[4]+0x00000014u; // 800E9CB4
  c->lr=0x800E9CBCu; f_803B630C(c); // 800E9CB8
  goto L_800E9CF4; // 800E9CBC
L_800E9CC0:;
  cmps(c,0,(int32_t)c->r[31],1000); // 800E9CC0
  if (!crb(c,0)) { goto L_800E9CE0; } // 800E9CC4
  c->r[4]=0u+0x806E0000u; // 800E9CC8
  c->r[3]=c->r[1]+0x00000008u; // 800E9CCC
  c->r[4]=c->r[4]+0xFFFF8084u; // 800E9CD0
  c->r[4]=c->r[4]+0x0000001Au; // 800E9CD4
  c->lr=0x800E9CDCu; f_803B630C(c); // 800E9CD8
  goto L_800E9CF4; // 800E9CDC
L_800E9CE0:;
  c->r[4]=0u+0x806E0000u; // 800E9CE0
  c->r[3]=c->r[1]+0x00000008u; // 800E9CE4
  c->r[4]=c->r[4]+0xFFFF8084u; // 800E9CE8
  c->r[4]=c->r[4]+0x0000000Au; // 800E9CEC
  c->lr=0x800E9CF4u; f_803B630C(c); // 800E9CF0
L_800E9CF4:;
  c->r[30]=0u+0x80690000u; // 800E9CF4
  c->r[5]=c->r[31]|c->r[31]; // 800E9CF8
  c->r[30]=c->r[30]+0xFFFFEBC8u; // 800E9CFC
  c->r[3]=c->r[1]+0x00000018u; // 800E9D00
  c->r[4]=c->r[30]+0x00000038u; // 800E9D04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9D08
  c->lr=0x800E9D10u; f_803B1FC8(c); // 800E9D0C
  c->r[3]=c->r[1]+0x00000078u; // 800E9D10
  c->r[4]=c->r[1]+0x00000018u; // 800E9D14
  c->r[5]=0u+0x00000020u; // 800E9D18
  c->lr=0x800E9D20u; f_803AF51C(c); // 800E9D1C
  c->r[3]=c->r[1]+0x00000008u; // 800E9D20
  c->r[4]=c->r[1]+0x00000078u; // 800E9D24
  c->lr=0x800E9D2Cu; f_803B636C(c); // 800E9D28
  c->r[27]=c->r[3]|c->r[3]; // 800E9D2C
  c->r[5]=c->r[31]|c->r[31]; // 800E9D30
  c->r[3]=c->r[1]+0x00000018u; // 800E9D34
  c->r[4]=c->r[30]+0x0000003Bu; // 800E9D38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E9D3C
  c->lr=0x800E9D44u; f_803B1FC8(c); // 800E9D40
  c->r[3]=c->r[1]+0x00000038u; // 800E9D44
  c->r[4]=c->r[1]+0x00000018u; // 800E9D48
  c->r[5]=0u+0x00000020u; // 800E9D4C
  c->lr=0x800E9D54u; f_803AF51C(c); // 800E9D50
  c->r[3]=R32(c->r[28]+0x00000774u); // 800E9D54
  c->r[4]=c->r[29]|c->r[29]; // 800E9D58
  c->r[5]=c->r[27]|c->r[27]; // 800E9D5C
  c->r[6]=c->r[1]+0x00000038u; // 800E9D60
  c->lr=0x800E9D68u; f_8014419C(c); // 800E9D64
L_800E9D68:;
  c->r[11]=c->r[1]+0x000000E0u; // 800E9D68
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800E9D6C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800E9D70
  c->lr=0x800E9D78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E9D74
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800E9D78
  c->lr=c->r[0]; // 800E9D7C
  c->r[1]=c->r[1]+0x000000F0u; // 800E9D80
  return; // 800E9D84
}

// fn_800E9D88
void f_800E9D88(Ctx* __restrict c) {
  trace_call(0x800E9D88u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)156); // 800E9D88
  c->r[3]=c->r[3]+c->r[0]; // 800E9D8C
  c->r[0]=R8(c->r[3]+0x00000828u); // 800E9D90
  c->r[0]=cntlz(c->r[0]); // 800E9D94
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E9D98
  return; // 800E9D9C
}

// fn_800E9DA0
void f_800E9DA0(Ctx* __restrict c) {
  trace_call(0x800E9DA0u);
  W8(c->r[3]+0x000008CCu,c->r[4]); // 800E9DA0
  W8(c->r[3]+0x000008CBu,c->r[4]); // 800E9DA4
  return; // 800E9DA8
}

// fn_800E9DAC
void f_800E9DAC(Ctx* __restrict c) {
  trace_call(0x800E9DACu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9DAC
  c->r[0]=c->lr; // 800E9DB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800E9DB4
  c->r[11]=c->r[1]+0x00000070u; // 800E9DB8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800E9DBC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800E9DC0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800E9DC4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800E9DC8
  c->lr=0x800E9DD0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9DCC
  c->r[0]=R32(c->r[3]+0x0000077Cu); // 800E9DD0
  c->f[30]=c->f[1]; // 800E9DD4
  c->f[31]=c->f[2]; // 800E9DD8
  c->r[25]=c->r[3]|c->r[3]; // 800E9DDC
  cmps(c,0,(int32_t)c->r[0],0); // 800E9DE0
  c->r[24]=c->r[4]|c->r[4]; // 800E9DE4
  c->r[26]=c->r[5]|c->r[5]; // 800E9DE8
  c->r[27]=c->r[6]|c->r[6]; // 800E9DEC
  c->r[28]=c->r[7]|c->r[7]; // 800E9DF0
  if (crb(c,2)) { goto L_800E9F54; } // 800E9DF4
  c->r[31]=0u+0x00000000u; // 800E9DF8
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800E9DFC
  c->r[3]=c->r[1]+0x0000000Cu; // 800E9E00
  c->lr=0x800E9E08u; f_8004FAB0(c); // 800E9E04
  c->r[4]=0u+0x00000005u; // 800E9E08
  c->r[5]=0u+0x00000000u; // 800E9E0C
  c->lr=0x800E9E14u; f_802E0EC0(c); // 800E9E10
  cmps(c,0,(int32_t)c->r[3],0); // 800E9E14
  if (crb(c,2)) { goto L_800E9F54; } // 800E9E18
  c->r[29]=(uint32_t)((int32_t)c->r[24]*(int32_t)836); // 800E9E1C
  c->r[0]=0u+0x00000010u; // 800E9E20
  c->r[23]=0u+0x00000000u; // 800E9E24
  c->r[4]=c->r[25]+c->r[29]; // 800E9E28
  c->ctr=c->r[0]; // 800E9E2C
L_800E9E30:;
  c->r[3]=c->r[4]+c->r[31]; // 800E9E30
  c->r[0]=R32(c->r[3]+0x000000ECu); // 800E9E34
  cmps(c,0,(int32_t)c->r[0],0); // 800E9E38
  if (!crb(c,2)) { goto L_800E9F48; } // 800E9E3C
  c->r[3]=R32(c->r[25]+0x0000077Cu); // 800E9E40
  c->r[4]=c->r[26]|c->r[26]; // 800E9E44
  c->lr=0x800E9E4Cu; f_801B520C(c); // 800E9E48
  cmps(c,0,(int32_t)c->r[3],0); // 800E9E4C
  if (crb(c,2)) { goto L_800E9F54; } // 800E9E50
  {uint32_t ea=c->r[2]+0xFFFFA68Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E54
  c->r[23]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 800E9E58
  {uint32_t ea=c->r[2]+0xFFFFA690u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9E5C
  c->r[0]=c->r[25]+c->r[29]; // 800E9E60
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 800E9E64
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9E68
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[31]); // 800E9E6C
  c->r[3]=c->r[0]+c->r[23]; // 800E9E70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[30]);} // 800E9E74
  c->r[30]=c->r[3]+0x0000022Cu; // 800E9E78
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 800E9E7C
  c->r[3]=c->r[30]|c->r[30]; // 800E9E80
  c->r[4]=c->r[1]+0x00000034u; // 800E9E84
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800E9E88
  c->lr=0x800E9E90u; f_8005DC84(c); // 800E9E8C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)156); // 800E9E90
  c->r[5]=c->r[24]|c->r[24]; // 800E9E94
  c->r[4]=R32(c->r[25]+0x0000077Cu); // 800E9E98
  c->r[6]=c->r[26]|c->r[26]; // 800E9E9C
  c->r[3]=c->r[1]+0x00000028u; // 800E9EA0
  c->r[24]=c->r[25]+c->r[0]; // 800E9EA4
  c->r[7]=R32(c->r[24]+0x000007A8u); // 800E9EA8
  c->lr=0x800E9EB0u; f_801B4E50(c); // 800E9EAC
  c->r[0]=c->r[25]+c->r[29]; // 800E9EB0
  c->r[4]=c->r[1]+0x00000028u; // 800E9EB4
  c->r[3]=c->r[0]+c->r[23]; // 800E9EB8
  c->r[3]=c->r[3]+0x000002ECu; // 800E9EBC
  c->lr=0x800E9EC4u; f_8005DC84(c); // 800E9EC0
  c->r[0]=c->r[25]+c->r[29]; // 800E9EC4
  c->r[4]=0u+0x00000001u; // 800E9EC8
  c->r[3]=c->r[0]+c->r[31]; // 800E9ECC
  W32(c->r[3]+0x000000ECu,c->r[4]); // 800E9ED0
  c->r[0]=0u+0x00000000u; // 800E9ED4
  c->r[3]=c->r[1]+0x00000008u; // 800E9ED8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800E9EDC
  c->lr=0x800E9EE4u; f_8004714C(c); // 800E9EE0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9EE4
  c->r[6]=c->r[25]+c->r[29]; // 800E9EE8
  {uint32_t ea=c->r[2]+0xFFFFA67Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9EEC
  c->r[5]=c->r[6]+c->r[31]; // 800E9EF0
  c->r[4]=c->r[30]|c->r[30]; // 800E9EF4
  c->r[3]=c->r[1]+0x00000010u; // 800E9EF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800E9EFC
  {uint32_t ea=c->r[5]+0x000003ACu; WF32(ea,c->f[0]);} // 800E9F00
  W32(c->r[5]+0x0000012Cu,c->r[26]); // 800E9F04
  W32(c->r[5]+0x0000016Cu,c->r[27]); // 800E9F08
  W32(c->r[5]+0x000001ACu,c->r[28]); // 800E9F0C
  c->r[0]=R32(c->r[24]+0x000007A8u); // 800E9F10
  W32(c->r[5]+0x000001ECu,c->r[0]); // 800E9F14
  c->r[5]=R32(c->r[6]+0x0000042Cu); // 800E9F18
  c->r[0]=c->r[5]+0x00000001u; // 800E9F1C
  W32(c->r[6]+0x0000042Cu,c->r[0]); // 800E9F20
  c->lr=0x800E9F28u; f_8005CD7C(c); // 800E9F24
  c->r[5]=c->r[3]|c->r[3]; // 800E9F28
  c->r[4]=c->r[25]|c->r[25]; // 800E9F2C
  c->r[3]=c->r[1]+0x0000001Cu; // 800E9F30
  c->lr=0x800E9F38u; f_800EA048(c); // 800E9F34
  c->r[3]=c->r[30]|c->r[30]; // 800E9F38
  c->r[4]=c->r[1]+0x0000001Cu; // 800E9F3C
  c->lr=0x800E9F44u; f_8005DC84(c); // 800E9F40
  goto L_800E9F54; // 800E9F44
L_800E9F48:;
  c->r[23]=c->r[23]+0x00000001u; // 800E9F48
  c->r[31]=c->r[31]+0x00000004u; // 800E9F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E9E30; } // 800E9F50
L_800E9F54:;
  c->r[11]=c->r[1]+0x00000070u; // 800E9F54
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800E9F58
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800E9F5C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800E9F60
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800E9F64
  c->lr=0x800E9F6Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E9F68
  c->r[0]=R32(c->r[1]+0x00000094u); // 800E9F6C
  c->lr=c->r[0]; // 800E9F70
  c->r[1]=c->r[1]+0x00000090u; // 800E9F74
  return; // 800E9F78
}

// fn_800E9F7C
void f_800E9F7C(Ctx* __restrict c) {
  trace_call(0x800E9F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E9F7C
  c->r[0]=c->lr; // 800E9F80
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E9F84
  c->r[11]=c->r[1]+0x00000030u; // 800E9F88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E9F8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E9F90
  c->lr=0x800E9F98u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E9F94
  c->f[31]=c->f[1]; // 800E9F98
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9F9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9FA0
  c->r[29]=c->r[4]|c->r[4]; // 800E9FA4
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9FA8
  c->r[30]=c->r[5]|c->r[5]; // 800E9FAC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800E9FB0
  c->r[3]=c->r[1]+0x00000008u; // 800E9FB4
  c->r[31]=0u+0x00000000u; // 800E9FB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800E9FBC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E9FC0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E9FC4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800E9FC8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E9FCC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E9FD0
  c->lr=0x800E9FD8u; f_80383D7C(c); // 800E9FD4
  fcmp(c,0,c->f[1],c->f[31]); // 800E9FD8
  if (!crb(c,0)) { goto L_800E9FF8; } // 800E9FDC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9FE0
  c->r[31]=0u+0x00000001u; // 800E9FE4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800E9FE8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E9FEC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800E9FF0
  goto L_800EA024; // 800E9FF4
L_800E9FF8:;
  c->r[3]=c->r[1]+0x00000008u; // 800E9FF8
  c->r[4]=c->r[3]|c->r[3]; // 800E9FFC
  c->lr=0x800EA004u; f_80383D38(c); // 800EA000
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA004
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA008
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA00C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[31],c->f[1])); // 800EA010
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 800EA014
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA018
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 800EA01C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800EA020
L_800EA024:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800EA024
  c->r[3]=c->r[31]|c->r[31]; // 800EA028
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800EA02C
  c->r[11]=c->r[1]+0x00000030u; // 800EA030
  c->lr=0x800EA038u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EA034
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EA038
  c->lr=c->r[0]; // 800EA03C
  c->r[1]=c->r[1]+0x00000040u; // 800EA040
  return; // 800EA044
}

// fn_800EA048
void f_800EA048(Ctx* __restrict c) {
  trace_call(0x800EA048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA048
  c->r[0]=c->lr; // 800EA04C
  c->r[4]=c->r[5]|c->r[5]; // 800EA050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA058
  c->r[31]=c->r[3]|c->r[3]; // 800EA05C
  c->lr=0x800EA064u; f_8005CD7C(c); // 800EA060
  c->r[3]=c->r[31]|c->r[31]; // 800EA064
  c->lr=0x800EA06Cu; f_80383D7C(c); // 800EA068
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA06C
  fcmp(c,0,c->f[1],c->f[0]); // 800EA070
  if (!crb(c,1)) { goto L_800EA0A0; } // 800EA074
  c->r[3]=c->r[31]|c->r[31]; // 800EA078
  c->r[4]=c->r[31]|c->r[31]; // 800EA07C
  c->lr=0x800EA084u; f_80383D38(c); // 800EA080
  {uint32_t ea=c->r[2]+0xFFFFA694u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA084
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA088
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA08C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800EA090
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800EA094
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800EA098
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800EA09C
L_800EA0A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA0A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA0A4
  c->lr=c->r[0]; // 800EA0A8
  c->r[1]=c->r[1]+0x00000010u; // 800EA0AC
  return; // 800EA0B0
}

// fn_800EA0B4
void f_800EA0B4(Ctx* __restrict c) {
  trace_call(0x800EA0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA0B4
  c->r[0]=c->lr; // 800EA0B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EA0BC
  c->r[11]=c->r[1]+0x00000040u; // 800EA0C0
  c->lr=0x800EA0C8u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 800EA0C4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EA0C8
  c->r[0]=R32(c->r[3]+0x00000780u); // 800EA0CC
  c->f[28]=c->f[1]; // 800EA0D0
  c->f[29]=c->f[2]; // 800EA0D4
  c->r[28]=c->r[3]|c->r[3]; // 800EA0D8
  c->f[30]=c->f[3]; // 800EA0DC
  cmps(c,0,(int32_t)c->r[0],0); // 800EA0E0
  c->f[31]=c->f[4]; // 800EA0E4
  c->r[29]=c->r[4]|c->r[4]; // 800EA0E8
  c->r[30]=c->r[5]|c->r[5]; // 800EA0EC
  if (crb(c,2)) { goto L_800EA184; } // 800EA0F0
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800EA0F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EA0F8
  if (!crb(c,2)) { goto L_800EA140; } // 800EA0FC
  c->r[31]=0u+0x80730000u; // 800EA100
  c->r[3]=c->r[31]+0x00006378u; // 800EA104
  c->lr=0x800EA10Cu; f_800B0D5C(c); // 800EA108
  c->r[6]=0u+0x806D0000u; // 800EA10C
  c->r[4]=0u+0x80050000u; // 800EA110
  c->r[6]=c->r[6]+0xFFFFC340u; // 800EA114
  c->r[3]=c->r[31]+0x00006378u; // 800EA118
  c->r[0]=c->r[6]+0x00000028u; // 800EA11C
  c->r[5]=0u+0x80750000u; // 800EA120
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800EA124
  c->r[4]=c->r[4]+0xFFFF9F20u; // 800EA128
  c->r[5]=c->r[5]+0x00003AA8u; // 800EA12C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800EA130
  c->lr=0x800EA138u; f_803A92B8(c); // 800EA134
  c->r[0]=0u+0x00000001u; // 800EA138
  W8(c->r[13]+0xFFFFBB88u,c->r[0]); // 800EA13C
L_800EA140:;
  c->r[3]=0u+0x80730000u; // 800EA140
  c->r[4]=c->r[29]|c->r[29]; // 800EA144
  c->r[3]=c->r[3]+0x00006378u; // 800EA148
  c->lr=0x800EA150u; f_800B2800(c); // 800EA14C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800EA150
  c->f[1]=c->f[28]; // 800EA154
  c->f[2]=c->f[29]; // 800EA158
  c->r[4]=c->r[29]|c->r[29]; // 800EA15C
  c->f[3]=c->f[30]; // 800EA160
  c->r[3]=R32(c->r[28]+0x00000780u); // 800EA164
  c->f[4]=c->f[31]; // 800EA168
  c->r[5]=c->r[30]|c->r[30]; // 800EA16C
  c->r[6]=c->r[1]+0x00000008u; // 800EA170
  c->lr=0x800EA178u; f_801B32A0(c); // 800EA174
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 800EA178
  c->r[3]=c->r[28]+c->r[0]; // 800EA17C
  W32(c->r[3]+0x000010E8u,c->r[30]); // 800EA180
L_800EA184:;
  c->r[11]=c->r[1]+0x00000040u; // 800EA184
  c->lr=0x800EA18Cu; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 800EA188
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EA18C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EA190
  c->lr=c->r[0]; // 800EA194
  c->r[1]=c->r[1]+0x00000040u; // 800EA198
  return; // 800EA19C
}

// fn_800EA1A0
void f_800EA1A0(Ctx* __restrict c) {
  trace_call(0x800EA1A0u);
  c->r[0]=R32(c->r[3]+0x00000774u); // 800EA1A0
  W8(c->r[3]+0x000010D9u,c->r[4]); // 800EA1A4
  cmps(c,0,(int32_t)c->r[0],0); // 800EA1A8
  if (crb(c,2)) return; // 800EA1AC
  c->r[3]=c->r[0]|c->r[0]; // 800EA1B0
  f_80144E98(c); return; // 800EA1B4
  return; // 800EA1B8
}

// fn_800EA1BC
void f_800EA1BC(Ctx* __restrict c) {
  trace_call(0x800EA1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA1BC
  c->r[0]=c->lr; // 800EA1C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EA1C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EA1C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EA1CC
  c->f[31]=c->f[2]; // 800EA1D0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800EA1D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800EA1D8
  c->f[30]=c->f[1]; // 800EA1DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA1E0
  c->r[31]=c->r[3]|c->r[3]; // 800EA1E4
  c->r[0]=R32(c->r[3]+0x00000774u); // 800EA1E8
  cmps(c,0,(int32_t)c->r[0],0); // 800EA1EC
  if (crb(c,2)) { goto L_800EA220; } // 800EA1F0
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA1F4
  fcmp(c,0,c->f[1],c->f[0]); // 800EA1F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EA1FC
  if (!crb(c,2)) { goto L_800EA210; } // 800EA200
  c->f[30]=c->f[0]; // 800EA204
  c->r[4]=0u+0x00000000u; // 800EA208
  c->lr=0x800EA210u; f_800EA1A0(c); // 800EA20C
L_800EA210:;
  c->f[1]=c->f[30]; // 800EA210
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EA214
  c->f[2]=c->f[31]; // 800EA218
  c->lr=0x800EA220u; f_80144F30(c); // 800EA21C
L_800EA220:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EA220
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800EA224
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EA228
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800EA22C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800EA230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA234
  c->lr=c->r[0]; // 800EA238
  c->r[1]=c->r[1]+0x00000030u; // 800EA23C
  return; // 800EA240
}

// fn_800EA244
void f_800EA244(Ctx* __restrict c) {
  trace_call(0x800EA244u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA244
  c->r[0]=c->lr; // 800EA248
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EA24C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800EA250
  c->r[31]=c->r[3]|c->r[3]; // 800EA254
  c->r[4]=R32(c->r[3]+0x00000774u); // 800EA258
  cmps(c,0,(int32_t)c->r[4],0); // 800EA25C
  if (crb(c,2)) { goto L_800EA29C; } // 800EA260
  c->r[3]=c->r[1]+0x0000001Cu; // 800EA264
  c->lr=0x800EA26Cu; f_800EA2B0(c); // 800EA268
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA26C
  c->r[3]=c->r[1]+0x00000008u; // 800EA270
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800EA274
  c->r[4]=c->r[1]+0x0000001Cu; // 800EA278
  c->lr=0x800EA280u; f_800E9778(c); // 800EA27C
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EA280
  c->r[4]=c->r[1]+0x00000008u; // 800EA284
  c->lr=0x800EA28Cu; f_80145010(c); // 800EA288
  c->r[3]=c->r[1]+0x00000008u; // 800EA28C
  c->lr=0x800EA294u; f_800E84DC(c); // 800EA290
  c->r[3]=c->r[1]+0x0000001Cu; // 800EA294
  c->lr=0x800EA29Cu; f_800E84DC(c); // 800EA298
L_800EA29C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EA29C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800EA2A0
  c->lr=c->r[0]; // 800EA2A4
  c->r[1]=c->r[1]+0x00000040u; // 800EA2A8
  return; // 800EA2AC
}

// fn_800EA2B0
void f_800EA2B0(Ctx* __restrict c) {
  trace_call(0x800EA2B0u);
  c->r[4]=c->r[4]+0x000000ECu; // 800EA2B0
  f_800E9778(c); return; // 800EA2B4
}

// fn_800EA2B8
void f_800EA2B8(Ctx* __restrict c) {
  trace_call(0x800EA2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA2B8
  c->r[0]=c->lr; // 800EA2BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EA2C0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EA2C4
  c->r[31]=c->r[3]|c->r[3]; // 800EA2C8
  c->r[4]=R32(c->r[3]+0x00000774u); // 800EA2CC
  cmps(c,0,(int32_t)c->r[4],0); // 800EA2D0
  if (crb(c,2)) { goto L_800EA2F4; } // 800EA2D4
  c->r[3]=c->r[1]+0x00000008u; // 800EA2D8
  c->lr=0x800EA2E0u; f_800EA2B0(c); // 800EA2DC
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EA2E0
  c->r[4]=c->r[1]+0x00000008u; // 800EA2E4
  c->lr=0x800EA2ECu; f_80145010(c); // 800EA2E8
  c->r[3]=c->r[1]+0x00000008u; // 800EA2EC
  c->lr=0x800EA2F4u; f_800E84DC(c); // 800EA2F0
L_800EA2F4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EA2F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EA2F8
  c->lr=c->r[0]; // 800EA2FC
  c->r[1]=c->r[1]+0x00000030u; // 800EA300
  return; // 800EA304
}

// fn_800EA308
void f_800EA308(Ctx* __restrict c) {
  trace_call(0x800EA308u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA308
  c->r[0]=c->lr; // 800EA30C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA310
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EA314
  c->r[31]=0u+0x00000000u; // 800EA318
  c->r[29]=c->r[3]|c->r[3]; // 800EA31C
  c->r[30]=c->r[4]|c->r[4]; // 800EA320
  c->r[3]=c->r[1]+0x00000008u; // 800EA324
  W8(c->r[1]+0x00000008u,c->r[31]); // 800EA328
  c->lr=0x800EA330u; f_8004FAB0(c); // 800EA32C
  c->r[4]=0u+0x00000005u; // 800EA330
  c->r[5]=0u+0x00000000u; // 800EA334
  c->lr=0x800EA33Cu; f_802E0EC0(c); // 800EA338
  cmps(c,0,(int32_t)c->r[3],0); // 800EA33C
  if (!crb(c,2)) { goto L_800EA34C; } // 800EA340
  c->r[3]=0u+0x00000000u; // 800EA344
  goto L_800EA398; // 800EA348
L_800EA34C:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA34C
  cmps(c,0,(int32_t)c->r[3],0); // 800EA350
  if (crb(c,2)) { goto L_800EA394; } // 800EA354
  c->r[5]=c->r[30]|c->r[30]; // 800EA358
  c->r[4]=0u+0x00000001u; // 800EA35C
  c->lr=0x800EA364u; f_801452FC(c); // 800EA360
  cmps(c,0,(int32_t)c->r[3],0); // 800EA364
  if (crb(c,2)) { goto L_800EA394; } // 800EA368
  c->r[0]=R8(c->r[29]+0x000008C9u); // 800EA36C
  cmps(c,0,(int32_t)c->r[0],0); // 800EA370
  if (crb(c,2)) { goto L_800EA390; } // 800EA374
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA378
  c->r[4]=0u+0x00000000u; // 800EA37C
  c->lr=0x800EA384u; f_802DFACC(c); // 800EA380
  c->r[0]=0u+0x00000000u; // 800EA384
  W8(c->r[29]+0x000008C9u,c->r[0]); // 800EA388
  W8(c->r[29]+0x000010D8u,c->r[0]); // 800EA38C
L_800EA390:;
  c->r[31]=0u+0x00000001u; // 800EA390
L_800EA394:;
  c->r[3]=c->r[31]|c->r[31]; // 800EA394
L_800EA398:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EA398
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA39C
  c->lr=c->r[0]; // 800EA3A0
  c->r[1]=c->r[1]+0x00000020u; // 800EA3A4
  return; // 800EA3A8
}

// fn_800EA3AC
void f_800EA3AC(Ctx* __restrict c) {
  trace_call(0x800EA3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA3AC
  c->r[0]=c->lr; // 800EA3B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA3B4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EA3B8
  c->r[31]=0u+0x00000000u; // 800EA3BC
  c->r[29]=c->r[3]|c->r[3]; // 800EA3C0
  c->r[30]=c->r[4]|c->r[4]; // 800EA3C4
  c->r[3]=c->r[1]+0x00000008u; // 800EA3C8
  W8(c->r[1]+0x00000008u,c->r[31]); // 800EA3CC
  c->lr=0x800EA3D4u; f_8004FAB0(c); // 800EA3D0
  c->r[4]=0u+0x00000005u; // 800EA3D4
  c->r[5]=0u+0x00000000u; // 800EA3D8
  c->lr=0x800EA3E0u; f_802E0EC0(c); // 800EA3DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EA3E0
  if (!crb(c,2)) { goto L_800EA3F0; } // 800EA3E4
  c->r[3]=0u+0x00000000u; // 800EA3E8
  goto L_800EA444; // 800EA3EC
L_800EA3F0:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA3F0
  cmps(c,0,(int32_t)c->r[3],0); // 800EA3F4
  if (!crb(c,2)) { goto L_800EA404; } // 800EA3F8
  c->r[3]=0u+0x00000000u; // 800EA3FC
  goto L_800EA444; // 800EA400
L_800EA404:;
  c->r[0]=R8(c->r[29]+0x000008C9u); // 800EA404
  cmps(c,0,(int32_t)c->r[0],0); // 800EA408
  if (!crb(c,2)) { goto L_800EA424; } // 800EA40C
  c->r[4]=0u+0x00000001u; // 800EA410
  c->lr=0x800EA418u; f_802DFACC(c); // 800EA414
  c->r[0]=0u+0x00000001u; // 800EA418
  W8(c->r[29]+0x000008C9u,c->r[0]); // 800EA41C
  W8(c->r[29]+0x000010D8u,c->r[0]); // 800EA420
L_800EA424:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA424
  c->r[5]=c->r[30]|c->r[30]; // 800EA428
  c->r[4]=0u+0xFFFFFFFFu; // 800EA42C
  c->lr=0x800EA434u; f_801452FC(c); // 800EA430
  cmps(c,0,(int32_t)c->r[3],0); // 800EA434
  if (crb(c,2)) { goto L_800EA440; } // 800EA438
  c->r[31]=0u+0x00000001u; // 800EA43C
L_800EA440:;
  c->r[3]=c->r[31]|c->r[31]; // 800EA440
L_800EA444:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EA444
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA448
  c->lr=c->r[0]; // 800EA44C
  c->r[1]=c->r[1]+0x00000020u; // 800EA450
  return; // 800EA454
}

// fn_800EA458
void f_800EA458(Ctx* __restrict c) {
  trace_call(0x800EA458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA458
  c->r[0]=c->lr; // 800EA45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA464
  c->r[31]=c->r[3]|c->r[3]; // 800EA468
  c->r[0]=R32(c->r[3]+0x00000788u); // 800EA46C
  cmps(c,0,(int32_t)c->r[0],0); // 800EA470
  if (crb(c,2)) { goto L_800EA4A0; } // 800EA474
  c->lr=0x800EA47Cu; f_800EA4B4(c); // 800EA478
  cmps(c,0,(int32_t)c->r[3],0); // 800EA47C
  if (crb(c,2)) { goto L_800EA48C; } // 800EA480
  c->r[3]=R32(c->r[31]+0x00000788u); // 800EA484
  c->lr=0x800EA48Cu; f_801B98F0(c); // 800EA488
L_800EA48C:;
  c->r[3]=R32(c->r[31]+0x00000788u); // 800EA48C
  c->r[4]=0u+0x00000001u; // 800EA490
  c->lr=0x800EA498u; f_802DFACC(c); // 800EA494
  c->r[3]=R32(c->r[31]+0x00000788u); // 800EA498
  c->lr=0x800EA4A0u; f_801B9CEC(c); // 800EA49C
L_800EA4A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA4A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA4A4
  c->lr=c->r[0]; // 800EA4A8
  c->r[1]=c->r[1]+0x00000010u; // 800EA4AC
  return; // 800EA4B0
}

// fn_800EA4B4
void f_800EA4B4(Ctx* __restrict c) {
  trace_call(0x800EA4B4u);
  c->r[3]=R32(c->r[3]+0x00000788u); // 800EA4B4
  cmps(c,0,(int32_t)c->r[3],0); // 800EA4B8
  if (crb(c,2)) { goto L_800EA4C4; } // 800EA4BC
  f_801B9D60(c); return; // 800EA4C0
L_800EA4C4:;
  c->r[3]=0u+0x00000000u; // 800EA4C4
  return; // 800EA4C8
}

// fn_800EA4CC
void f_800EA4CC(Ctx* __restrict c) {
  trace_call(0x800EA4CCu);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)156); // 800EA4CC
  c->r[6]=c->r[3]+c->r[0]; // 800EA4D0
  W32(c->r[6]+0x00000798u,c->r[5]); // 800EA4D4
  {uint32_t ea=c->r[6]+0x000007A0u; WF32(ea,c->f[1]);} // 800EA4D8
  c->r[6]=R32(c->r[3]+0x00000774u); // 800EA4DC
  cmps(c,0,(int32_t)c->r[6],0); // 800EA4E0
  if (crb(c,2)) return; // 800EA4E4
  c->r[0]=R8(c->r[3]+0x000008C9u); // 800EA4E8
  cmps(c,0,(int32_t)c->r[0],0); // 800EA4EC
  if (crb(c,2)) return; // 800EA4F0
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA4F4
  c->r[3]=c->r[6]|c->r[6]; // 800EA4F8
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA4FC
  f_80146250(c); return; // 800EA500
  return; // 800EA504
}

// fn_800EA508
void f_800EA508(Ctx* __restrict c) {
  trace_call(0x800EA508u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)156); // 800EA508
  c->r[6]=c->r[3]+c->r[0]; // 800EA50C
  W32(c->r[6]+0x00000794u,c->r[5]); // 800EA510
  {uint32_t ea=c->r[6]+0x0000079Cu; WF32(ea,c->f[1]);} // 800EA514
  c->r[6]=R32(c->r[3]+0x00000774u); // 800EA518
  cmps(c,0,(int32_t)c->r[6],0); // 800EA51C
  if (crb(c,2)) return; // 800EA520
  c->r[0]=R8(c->r[3]+0x000008C9u); // 800EA524
  cmps(c,0,(int32_t)c->r[0],0); // 800EA528
  if (crb(c,2)) return; // 800EA52C
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA530
  c->r[3]=c->r[6]|c->r[6]; // 800EA534
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA538
  f_80146668(c); return; // 800EA53C
  return; // 800EA540
}

// fn_800EA544
void f_800EA544(Ctx* __restrict c) {
  trace_call(0x800EA544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA544
  c->r[0]=c->lr; // 800EA548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA54C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EA550
  c->r[30]=c->r[4]|c->r[4]; // 800EA554
  c->r[31]=R32(c->r[3]+0x0000078Cu); // 800EA558
  W8(c->r[3]+0x000010DBu,c->r[4]); // 800EA55C
  cmps(c,0,(int32_t)c->r[31],0); // 800EA560
  if (crb(c,2)) { goto L_800EA57C; } // 800EA564
  c->r[3]=c->r[31]|c->r[31]; // 800EA568
  c->lr=0x800EA570u; f_802DFACC(c); // 800EA56C
  c->r[3]=c->r[31]|c->r[31]; // 800EA570
  c->r[4]=c->r[30]|c->r[30]; // 800EA574
  c->lr=0x800EA57Cu; f_802DFA30(c); // 800EA578
L_800EA57C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EA57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA580
  c->lr=c->r[0]; // 800EA584
  c->r[1]=c->r[1]+0x00000010u; // 800EA588
  return; // 800EA58C
}

// fn_800EA590
void f_800EA590(Ctx* __restrict c) {
  trace_call(0x800EA590u);
  c->r[0]=R32(c->r[3]+0x0000078Cu); // 800EA590
  W32(c->r[3]+0x000010E4u,c->r[4]); // 800EA594
  cmps(c,0,(int32_t)c->r[0],0); // 800EA598
  if (crb(c,2)) return; // 800EA59C
  c->r[3]=c->r[0]|c->r[0]; // 800EA5A0
  f_80148390(c); return; // 800EA5A4
  return; // 800EA5A8
}

// fn_800EA5AC
void f_800EA5AC(Ctx* __restrict c) {
  trace_call(0x800EA5ACu);
  c->r[4]=R32(c->r[3]+0x00000774u); // 800EA5AC
  cmps(c,0,(int32_t)c->r[4],0); // 800EA5B0
  if (crb(c,2)) return; // 800EA5B4
  c->r[0]=0u+0x00000001u; // 800EA5B8
  W8(c->r[3]+0x000010DCu,c->r[0]); // 800EA5BC
  c->r[3]=c->r[4]|c->r[4]; // 800EA5C0
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA5C4
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA5C8
  c->r[4]=0u+0x00000001u; // 800EA5CC
  f_80146810(c); return; // 800EA5D0
  return; // 800EA5D4
}

// fn_800EA5D8
void f_800EA5D8(Ctx* __restrict c) {
  trace_call(0x800EA5D8u);
  c->r[0]=R32(c->r[3]+0x00000774u); // 800EA5D8
  cmps(c,0,(int32_t)c->r[0],0); // 800EA5DC
  if (crb(c,2)) { goto L_800EA5F8; } // 800EA5E0
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA5E4
  c->r[3]=c->r[0]|c->r[0]; // 800EA5E8
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA5EC
  c->r[4]=0u+0x00000000u; // 800EA5F0
  f_80146810(c); return; // 800EA5F4
L_800EA5F8:;
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA5F8
  c->r[0]=0u+0x00000002u; // 800EA5FC
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA600
  W32(c->r[3]+0x00001154u,c->r[0]); // 800EA604
  {uint32_t ea=c->r[3]+0x0000115Cu; WF32(ea,c->f[1]);} // 800EA608
  {uint32_t ea=c->r[3]+0x00001158u; WF32(ea,c->f[0]);} // 800EA60C
  return; // 800EA610
}

// fn_800EA614
void f_800EA614(Ctx* __restrict c) {
  trace_call(0x800EA614u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA614
  c->r[0]=c->lr; // 800EA618
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EA61C
  c->r[0]=0u+0x00000001u; // 800EA620
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EA624
  c->r[29]=c->r[3]|c->r[3]; // 800EA628
  c->r[30]=0u+0x00000000u; // 800EA62C
  c->r[31]=0u+0x00000000u; // 800EA630
  c->r[28]=0u+0x00000000u; // 800EA634
  c->r[27]=0u+0x00000000u; // 800EA638
  c->r[26]=0u+0x00000000u; // 800EA63C
  W8(c->r[3]+0x000008D0u,c->r[0]); // 800EA640
L_800EA644:;
  c->r[4]=c->r[29]+c->r[28]; // 800EA644
  c->r[3]=c->r[4]+0x000008D4u; // 800EA648
  c->r[4]=c->r[4]+0x00000790u; // 800EA64C
  c->lr=0x800EA654u; f_800EA924(c); // 800EA650
  c->r[4]=R32(c->r[29]+0x00000774u); // 800EA654
  c->r[5]=c->r[30]|c->r[30]; // 800EA658
  c->r[3]=c->r[1]+0x0000001Cu; // 800EA65C
  c->lr=0x800EA664u; f_800E9768(c); // 800EA660
  c->r[3]=c->r[29]+c->r[27]; // 800EA664
  c->r[4]=c->r[1]+0x0000001Cu; // 800EA668
  c->r[3]=c->r[3]+0x00000A0Cu; // 800EA66C
  c->lr=0x800EA674u; f_800EA9EC(c); // 800EA670
  c->r[3]=c->r[1]+0x0000001Cu; // 800EA674
  c->lr=0x800EA67Cu; f_800E84DC(c); // 800EA678
  c->r[4]=c->r[29]+c->r[31]; // 800EA67C
  c->r[3]=c->r[4]+0x00000A48u; // 800EA680
  c->r[4]=c->r[4]+0x000000ECu; // 800EA684
  c->lr=0x800EA68Cu; f_800EAA18(c); // 800EA688
  c->r[6]=c->r[29]+c->r[26]; // 800EA68C
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA690
  c->r[5]=c->r[6]+0x00001134u; // 800EA694
  c->r[4]=c->r[30]|c->r[30]; // 800EA698
  c->r[6]=c->r[6]+0x00001138u; // 800EA69C
  c->lr=0x800EA6A4u; f_801455A4(c); // 800EA6A0
  c->r[7]=c->r[29]+c->r[26]; // 800EA6A4
  c->r[3]=R32(c->r[29]+0x00000780u); // 800EA6A8
  c->r[5]=R32(c->r[7]+0x000010E8u); // 800EA6AC
  c->r[6]=c->r[7]+0x000010ECu; // 800EA6B0
  c->r[4]=c->r[30]|c->r[30]; // 800EA6B4
  c->r[7]=c->r[7]+0x000010F0u; // 800EA6B8
  c->lr=0x800EA6C0u; f_801B3A38(c); // 800EA6BC
  c->r[7]=c->r[29]+c->r[26]; // 800EA6C0
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA6C4
  c->r[4]=c->r[30]|c->r[30]; // 800EA6C8
  c->r[5]=c->r[7]+0x00001104u; // 800EA6CC
  c->r[6]=c->r[7]+0x00001108u; // 800EA6D0
  c->r[7]=c->r[7]+0x00001100u; // 800EA6D4
  c->lr=0x800EA6DCu; f_80145D70(c); // 800EA6D8
  c->r[7]=c->r[29]+c->r[26]; // 800EA6DC
  c->r[5]=c->r[29]+c->r[28]; // 800EA6E0
  c->r[6]=c->r[7]+0x0000111Cu; // 800EA6E4
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA6E8
  c->r[4]=c->r[30]|c->r[30]; // 800EA6EC
  c->r[5]=c->r[5]+0x000008E8u; // 800EA6F0
  c->r[7]=c->r[7]+0x00001120u; // 800EA6F4
  c->lr=0x800EA6FCu; f_80145B64(c); // 800EA6F8
  c->r[4]=c->r[29]+c->r[26]; // 800EA6FC
  c->r[24]=0u+0x00000000u; // 800EA700
  W32(c->r[4]+0x00001118u,c->r[3]); // 800EA704
  c->r[25]=0u+0x00000000u; // 800EA708
L_800EA70C:;
  c->r[0]=c->r[29]+c->r[31]; // 800EA70C
  c->r[3]=c->r[0]+c->r[25]; // 800EA710
  c->r[0]=R32(c->r[3]+0x000000ECu); // 800EA714
  cmps(c,0,(int32_t)c->r[0],2); // 800EA718
  if (crb(c,2)) { goto L_800EA72C; } // 800EA71C
  cmps(c,0,(int32_t)c->r[0],5); // 800EA720
  if (crb(c,2)) { goto L_800EA750; } // 800EA724
  goto L_800EA770; // 800EA728
L_800EA72C:;
  c->r[0]=c->r[29]+c->r[31]; // 800EA72C
  c->r[3]=R32(c->r[29]+0x0000077Cu); // 800EA730
  c->r[7]=c->r[0]+c->r[25]; // 800EA734
  c->r[4]=c->r[30]|c->r[30]; // 800EA738
  c->r[5]=R32(c->r[7]+0x0000012Cu); // 800EA73C
  c->r[6]=c->r[7]+0x00000D08u; // 800EA740
  c->r[7]=c->r[7]+0x00000D48u; // 800EA744
  c->lr=0x800EA74Cu; f_801B4F84(c); // 800EA748
  goto L_800EA770; // 800EA74C
L_800EA750:;
  c->r[0]=c->r[29]+c->r[31]; // 800EA750
  c->r[3]=R32(c->r[29]+0x0000077Cu); // 800EA754
  c->r[7]=c->r[0]+c->r[25]; // 800EA758
  c->r[4]=c->r[30]|c->r[30]; // 800EA75C
  c->r[5]=R32(c->r[7]+0x0000012Cu); // 800EA760
  c->r[6]=c->r[7]+0x00000D08u; // 800EA764
  c->r[7]=c->r[7]+0x00000D48u; // 800EA768
  c->lr=0x800EA770u; f_801B509C(c); // 800EA76C
L_800EA770:;
  c->r[24]=c->r[24]+0x00000001u; // 800EA770
  c->r[25]=c->r[25]+0x00000004u; // 800EA774
  cmps(c,0,(int32_t)c->r[24],16); // 800EA778
  if (crb(c,0)) { IRQCHK(c); goto L_800EA70C; } // 800EA77C
  c->r[30]=c->r[30]+0x00000001u; // 800EA780
  c->r[28]=c->r[28]+0x0000009Cu; // 800EA784
  cmps(c,0,(int32_t)c->r[30],2); // 800EA788
  c->r[27]=c->r[27]+0x00000014u; // 800EA78C
  c->r[26]=c->r[26]+0x0000000Cu; // 800EA790
  c->r[31]=c->r[31]+0x00000344u; // 800EA794
  if (crb(c,0)) { IRQCHK(c); goto L_800EA644; } // 800EA798
  c->r[0]=R8(c->r[29]+0x000010DCu); // 800EA79C
  cmps(c,0,(int32_t)c->r[0],0); // 800EA7A0
  if (crb(c,2)) { goto L_800EA7BC; } // 800EA7A4
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA7A8
  c->r[4]=c->r[29]+0x00001158u; // 800EA7AC
  c->r[5]=c->r[29]+0x0000115Cu; // 800EA7B0
  c->r[6]=c->r[29]+0x00001154u; // 800EA7B4
  c->lr=0x800EA7BCu; f_80146A0C(c); // 800EA7B8
L_800EA7BC:;
  c->r[24]=0u+0x00000000u; // 800EA7BC
  c->r[30]=0u+0x00000000u; // 800EA7C0
L_800EA7C4:;
  c->r[7]=c->r[29]+c->r[30]; // 800EA7C4
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA7C8
  c->r[4]=c->r[24]|c->r[24]; // 800EA7CC
  c->r[5]=c->r[7]+0x000011ACu; // 800EA7D0
  c->r[6]=c->r[7]+0x000011B0u; // 800EA7D4
  c->r[7]=c->r[7]+0x000011A8u; // 800EA7D8
  c->lr=0x800EA7E0u; f_801480A0(c); // 800EA7DC
  c->r[24]=c->r[24]+0x00000001u; // 800EA7E0
  c->r[30]=c->r[30]+0x0000000Cu; // 800EA7E4
  cmps(c,0,(int32_t)c->r[24],3); // 800EA7E8
  if (crb(c,0)) { IRQCHK(c); goto L_800EA7C4; } // 800EA7EC
  c->r[0]=R8(c->r[29]+0x000008C8u); // 800EA7F0
  cmps(c,0,(int32_t)c->r[0],0); // 800EA7F4
  if (crb(c,2)) { goto L_800EA848; } // 800EA7F8
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA7FC
  c->r[4]=0u+0x00000000u; // 800EA800
  c->lr=0x800EA808u; f_801426F0(c); // 800EA804
  c->r[5]=c->r[3]|c->r[3]; // 800EA808
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA80C
  c->r[6]=c->r[29]+0x00001164u; // 800EA810
  c->r[7]=c->r[29]+0x00001168u; // 800EA814
  c->r[4]=0u+0x00000002u; // 800EA818
  c->lr=0x800EA820u; f_80147990(c); // 800EA81C
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA820
  c->r[4]=0u+0x00000000u; // 800EA824
  c->lr=0x800EA82Cu; f_801426F0(c); // 800EA828
  c->r[5]=c->r[3]|c->r[3]; // 800EA82C
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA830
  c->r[6]=c->r[29]+0x00001188u; // 800EA834
  c->r[7]=c->r[29]+0x0000118Cu; // 800EA838
  c->r[4]=0u+0x00000002u; // 800EA83C
  c->lr=0x800EA844u; f_80147B50(c); // 800EA840
  goto L_800EA890; // 800EA844
L_800EA848:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA848
  c->r[4]=0u+0x00000000u; // 800EA84C
  c->lr=0x800EA854u; f_801426F0(c); // 800EA850
  c->r[5]=c->r[3]|c->r[3]; // 800EA854
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA858
  c->r[6]=c->r[29]+0x00001164u; // 800EA85C
  c->r[7]=c->r[29]+0x00001168u; // 800EA860
  c->r[4]=0u+0x00000000u; // 800EA864
  c->lr=0x800EA86Cu; f_80147990(c); // 800EA868
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA86C
  c->r[4]=0u+0x00000000u; // 800EA870
  c->lr=0x800EA878u; f_801426F0(c); // 800EA874
  c->r[5]=c->r[3]|c->r[3]; // 800EA878
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA87C
  c->r[6]=c->r[29]+0x00001188u; // 800EA880
  c->r[7]=c->r[29]+0x0000118Cu; // 800EA884
  c->r[4]=0u+0x00000000u; // 800EA888
  c->lr=0x800EA890u; f_80147B50(c); // 800EA88C
L_800EA890:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA890
  c->r[4]=0u+0x00000001u; // 800EA894
  c->lr=0x800EA89Cu; f_801426F0(c); // 800EA898
  c->r[5]=c->r[3]|c->r[3]; // 800EA89C
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA8A0
  c->r[6]=c->r[29]+0x00001170u; // 800EA8A4
  c->r[7]=c->r[29]+0x00001174u; // 800EA8A8
  c->r[4]=0u+0x00000001u; // 800EA8AC
  c->lr=0x800EA8B4u; f_80147990(c); // 800EA8B0
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EA8B4
  c->r[4]=0u+0x00000001u; // 800EA8B8
  c->lr=0x800EA8C0u; f_801426F0(c); // 800EA8BC
  c->r[5]=c->r[3]|c->r[3]; // 800EA8C0
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA8C4
  c->r[6]=c->r[29]+0x00001194u; // 800EA8C8
  c->r[7]=c->r[29]+0x00001198u; // 800EA8CC
  c->r[4]=0u+0x00000001u; // 800EA8D0
  c->lr=0x800EA8D8u; f_80147B50(c); // 800EA8D4
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EA8D8
  c->r[5]=c->r[29]+0x000011B8u; // 800EA8DC
  c->r[6]=c->r[29]+0x000011BCu; // 800EA8E0
  c->r[7]=c->r[29]+0x000011B4u; // 800EA8E4
  c->r[4]=0u+0x00000001u; // 800EA8E8
  c->lr=0x800EA8F0u; f_801480A0(c); // 800EA8EC
  c->r[4]=R32(c->r[29]+0x00000774u); // 800EA8F0
  c->r[3]=c->r[1]+0x00000008u; // 800EA8F4
  c->lr=0x800EA8FCu; f_800EA2B0(c); // 800EA8F8
  c->r[3]=c->r[29]+0x00000A34u; // 800EA8FC
  c->r[4]=c->r[1]+0x00000008u; // 800EA900
  c->lr=0x800EA908u; f_800EA9EC(c); // 800EA904
  c->r[3]=c->r[1]+0x00000008u; // 800EA908
  c->lr=0x800EA910u; f_800E84DC(c); // 800EA90C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EA910
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EA914
  c->lr=c->r[0]; // 800EA918
  c->r[1]=c->r[1]+0x00000050u; // 800EA91C
  return; // 800EA920
}

// fn_800EA924
void f_800EA924(Ctx* __restrict c) {
  trace_call(0x800EA924u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 800EA924
  c->r[0]=0u+0x00000005u; // 800EA928
  W32(c->r[3]+0x00000000u,c->r[5]); // 800EA92C
  c->r[7]=c->r[3]+0x0000001Cu; // 800EA930
  c->r[6]=c->r[4]+0x0000001Cu; // 800EA934
  c->r[5]=R32(c->r[4]+0x00000004u); // 800EA938
  W32(c->r[3]+0x00000004u,c->r[5]); // 800EA93C
  c->r[5]=R32(c->r[4]+0x00000008u); // 800EA940
  W32(c->r[3]+0x00000008u,c->r[5]); // 800EA944
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA948
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EA94C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA950
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800EA954
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA958
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800EA95C
  c->r[5]=R32(c->r[4]+0x00000018u); // 800EA960
  W32(c->r[3]+0x00000018u,c->r[5]); // 800EA964
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA968
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800EA96C
  c->ctr=c->r[0]; // 800EA970
L_800EA974:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EA974
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EA978
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EA97C
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EA980
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EA974; } // 800EA984
  c->r[0]=0u+0x00000005u; // 800EA988
  c->r[7]=c->r[3]+0x00000044u; // 800EA98C
  c->r[6]=c->r[4]+0x00000044u; // 800EA990
  c->ctr=c->r[0]; // 800EA994
L_800EA998:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EA998
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EA99C
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EA9A0
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EA9A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EA998; } // 800EA9A8
  c->r[0]=0u+0x00000005u; // 800EA9AC
  c->r[7]=c->r[3]+0x0000006Cu; // 800EA9B0
  c->r[6]=c->r[4]+0x0000006Cu; // 800EA9B4
  c->ctr=c->r[0]; // 800EA9B8
L_800EA9BC:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EA9BC
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EA9C0
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EA9C4
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EA9C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EA9BC; } // 800EA9CC
  c->r[0]=R8(c->r[4]+0x00000098u); // 800EA9D0
  W8(c->r[3]+0x00000098u,c->r[0]); // 800EA9D4
  c->r[0]=R8(c->r[4]+0x00000099u); // 800EA9D8
  W8(c->r[3]+0x00000099u,c->r[0]); // 800EA9DC
  c->r[0]=R8(c->r[4]+0x0000009Au); // 800EA9E0
  W8(c->r[3]+0x0000009Au,c->r[0]); // 800EA9E4
  return; // 800EA9E8
}

// fn_800EA9EC
void f_800EA9EC(Ctx* __restrict c) {
  trace_call(0x800EA9ECu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EA9EC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA9F0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA9F4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA9F8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EA9FC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 800EAA00
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 800EAA04
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800EAA08
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800EAA0C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800EAA10
  return; // 800EAA14
}

// fn_800EAA18
void f_800EAA18(Ctx* __restrict c) {
  trace_call(0x800EAA18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAA18
  c->r[0]=c->lr; // 800EAA1C
  c->r[7]=c->r[3]+0xFFFFFFFCu; // 800EAA20
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 800EAA24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAA28
  c->r[0]=0u+0x00000008u; // 800EAA2C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EAA30
  c->r[30]=c->r[3]|c->r[3]; // 800EAA34
  c->r[31]=c->r[4]|c->r[4]; // 800EAA38
  c->ctr=c->r[0]; // 800EAA3C
L_800EAA40:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EAA40
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EAA44
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EAA48
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EAA4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAA40; } // 800EAA50
  c->r[0]=0u+0x00000008u; // 800EAA54
  c->r[7]=c->r[3]+0x0000003Cu; // 800EAA58
  c->r[6]=c->r[4]+0x0000003Cu; // 800EAA5C
  c->ctr=c->r[0]; // 800EAA60
L_800EAA64:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EAA64
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EAA68
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EAA6C
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EAA70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAA64; } // 800EAA74
  c->r[0]=0u+0x00000008u; // 800EAA78
  c->r[7]=c->r[3]+0x0000007Cu; // 800EAA7C
  c->r[6]=c->r[4]+0x0000007Cu; // 800EAA80
  c->ctr=c->r[0]; // 800EAA84
L_800EAA88:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EAA88
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EAA8C
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EAA90
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EAA94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAA88; } // 800EAA98
  c->r[0]=0u+0x00000008u; // 800EAA9C
  c->r[7]=c->r[3]+0x000000BCu; // 800EAAA0
  c->r[6]=c->r[4]+0x000000BCu; // 800EAAA4
  c->ctr=c->r[0]; // 800EAAA8
L_800EAAAC:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EAAAC
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EAAB0
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EAAB4
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EAAB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAAAC; } // 800EAABC
  c->r[0]=0u+0x00000008u; // 800EAAC0
  c->r[7]=c->r[3]+0x000000FCu; // 800EAAC4
  c->r[6]=c->r[4]+0x000000FCu; // 800EAAC8
  c->ctr=c->r[0]; // 800EAACC
L_800EAAD0:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800EAAD0
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800EAAD4
  W32(c->r[7]+0x00000004u,c->r[5]); // 800EAAD8
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800EAADC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAAD0; } // 800EAAE0
  c->r[29]=c->r[3]+0x00000140u; // 800EAAE4
  c->r[28]=c->r[4]+0x00000140u; // 800EAAE8
  c->r[27]=c->r[3]+0x00000200u; // 800EAAEC
L_800EAAF0:;
  c->r[3]=c->r[29]|c->r[29]; // 800EAAF0
  c->r[4]=c->r[28]|c->r[28]; // 800EAAF4
  c->lr=0x800EAAFCu; f_8005DC84(c); // 800EAAF8
  c->r[29]=c->r[29]+0x0000000Cu; // 800EAAFC
  c->r[28]=c->r[28]+0x0000000Cu; // 800EAB00
  cmpu(c,0,c->r[29],c->r[27]); // 800EAB04
  if (crb(c,0)) { IRQCHK(c); goto L_800EAAF0; } // 800EAB08
  c->r[28]=c->r[31]+0x00000200u; // 800EAB0C
  c->r[29]=c->r[30]+0x000002C0u; // 800EAB10
L_800EAB14:;
  c->r[3]=c->r[27]|c->r[27]; // 800EAB14
  c->r[4]=c->r[28]|c->r[28]; // 800EAB18
  c->lr=0x800EAB20u; f_8005DC84(c); // 800EAB1C
  c->r[27]=c->r[27]+0x0000000Cu; // 800EAB20
  c->r[28]=c->r[28]+0x0000000Cu; // 800EAB24
  cmpu(c,0,c->r[27],c->r[29]); // 800EAB28
  if (crb(c,0)) { IRQCHK(c); goto L_800EAB14; } // 800EAB2C
  c->r[0]=0u+0x00000008u; // 800EAB30
  c->r[5]=c->r[30]+0x000002BCu; // 800EAB34
  c->r[4]=c->r[31]+0x000002BCu; // 800EAB38
  c->ctr=c->r[0]; // 800EAB3C
L_800EAB40:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800EAB40
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800EAB44
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EAB48
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800EAB4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAB40; } // 800EAB50
  c->r[0]=0u+0x00000008u; // 800EAB54
  c->r[5]=c->r[30]+0x000002FCu; // 800EAB58
  c->r[4]=c->r[31]+0x000002FCu; // 800EAB5C
  c->ctr=c->r[0]; // 800EAB60
L_800EAB64:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800EAB64
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800EAB68
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EAB6C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800EAB70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EAB64; } // 800EAB74
  c->r[0]=R32(c->r[31]+0x00000340u); // 800EAB78
  c->r[3]=c->r[30]|c->r[30]; // 800EAB7C
  W32(c->r[30]+0x00000340u,c->r[0]); // 800EAB80
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EAB84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAB88
  c->lr=c->r[0]; // 800EAB8C
  c->r[1]=c->r[1]+0x00000020u; // 800EAB90
  return; // 800EAB94
}

// fn_800EAB98
void f_800EAB98(Ctx* __restrict c) {
  trace_call(0x800EAB98u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB98
  c->r[0]=c->lr; // 800EAB9C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800EABA0
  c->r[11]=c->r[1]+0x00000060u; // 800EABA4
  c->lr=0x800EABACu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EABA8
  c->r[0]=R8(c->r[3]+0x000008D0u); // 800EABAC
  c->r[29]=c->r[3]|c->r[3]; // 800EABB0
  cmps(c,0,(int32_t)c->r[0],0); // 800EABB4
  if (crb(c,2)) { goto L_800EAFDC; } // 800EABB8
  c->r[0]=R8(c->r[3]+0x000010D8u); // 800EABBC
  W8(c->r[3]+0x000008C9u,c->r[0]); // 800EABC0
  c->r[4]=R8(c->r[3]+0x000010DAu); // 800EABC4
  c->lr=0x800EABCCu; f_800E958C(c); // 800EABC8
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EABCC
  c->r[4]=0u+0xFFFFFFFFu; // 800EABD0
  c->r[5]=0u+0x00000000u; // 800EABD4
  c->lr=0x800EABDCu; f_801476CC(c); // 800EABD8
  c->r[30]=0u+0x00000000u; // 800EABDC
  c->r[31]=0u+0x00000000u; // 800EABE0
  c->r[28]=0u+0x00000000u; // 800EABE4
  c->r[27]=0u+0x00000000u; // 800EABE8
  c->r[26]=0u+0x00000000u; // 800EABEC
  c->r[25]=0u+0x00000000u; // 800EABF0
L_800EABF4:;
  c->r[3]=c->r[29]+c->r[27]; // 800EABF4
  c->r[5]=c->r[29]+c->r[25]; // 800EABF8
  {uint32_t ea=c->r[3]+0x00000A14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EABFC
  c->r[4]=c->r[29]+c->r[28]; // 800EAC00
  c->r[9]=R32(c->r[4]+0x000008ECu); // 800EAC04
  c->r[3]=c->r[29]|c->r[29]; // 800EAC08
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800EAC0C
  c->r[5]=R32(c->r[5]+0x000010D0u); // 800EAC10
  c->r[4]=c->r[30]|c->r[30]; // 800EAC14
  c->r[7]=0u+0x00000003u; // 800EAC18
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800EAC1C
  c->r[8]=0u+0x00000000u; // 800EAC20
  c->r[6]=R32(c->r[1]+0x00000034u); // 800EAC24
  c->r[10]=0u+0x00000000u; // 800EAC28
  c->lr=0x800EAC30u; f_800E9468(c); // 800EAC2C
  c->r[4]=c->r[29]+c->r[28]; // 800EAC30
  c->r[23]=c->r[4]+0x00000790u; // 800EAC34
  c->r[3]=c->r[23]|c->r[23]; // 800EAC38
  c->r[4]=c->r[4]+0x000008D4u; // 800EAC3C
  c->lr=0x800EAC44u; f_800EA924(c); // 800EAC40
  c->r[4]=c->r[29]+c->r[27]; // 800EAC44
  c->r[3]=c->r[1]+0x0000001Cu; // 800EAC48
  c->r[4]=c->r[4]+0x00000A0Cu; // 800EAC4C
  c->lr=0x800EAC54u; f_800E9778(c); // 800EAC50
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAC54
  c->r[4]=c->r[30]|c->r[30]; // 800EAC58
  c->r[5]=c->r[1]+0x0000001Cu; // 800EAC5C
  c->lr=0x800EAC64u; f_80142624(c); // 800EAC60
  c->r[3]=c->r[1]+0x0000001Cu; // 800EAC64
  c->lr=0x800EAC6Cu; f_800E84DC(c); // 800EAC68
  c->r[6]=c->r[29]+c->r[28]; // 800EAC6C
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAC70
  c->r[22]=R32(c->r[6]+0x000007A8u); // 800EAC74
  c->r[4]=c->r[30]|c->r[30]; // 800EAC78
  c->r[24]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800EAC7C
  c->r[5]=c->r[22]|c->r[22]; // 800EAC80
  c->r[7]=c->r[6]+c->r[24]; // 800EAC84
  c->r[6]=R32(c->r[7]+0x000007B0u); // 800EAC88
  c->r[7]=R32(c->r[7]+0x000007D8u); // 800EAC8C
  c->lr=0x800EAC94u; f_80144008(c); // 800EAC90
  c->r[0]=c->r[29]+c->r[28]; // 800EAC94
  {uint32_t ea=c->r[2]+0xFFFFA674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAC98
  c->r[4]=c->r[0]+c->r[24]; // 800EAC9C
  c->r[3]=c->r[29]|c->r[29]; // 800EACA0
  c->r[6]=R32(c->r[4]+0x00000800u); // 800EACA4
  c->r[4]=c->r[30]|c->r[30]; // 800EACA8
  c->r[5]=c->r[22]|c->r[22]; // 800EACAC
  c->lr=0x800EACB4u; f_800E9ABC(c); // 800EACB0
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EACB4
  c->r[4]=c->r[30]|c->r[30]; // 800EACB8
  c->r[5]=R32(c->r[23]+0x00000000u); // 800EACBC
  c->lr=0x800EACC4u; f_80145F18(c); // 800EACC0
  c->r[5]=c->r[29]+c->r[26]; // 800EACC4
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EACC8
  {uint32_t ea=c->r[5]+0x00001134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EACCC
  c->r[4]=c->r[30]|c->r[30]; // 800EACD0
  {uint32_t ea=c->r[5]+0x00001138u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EACD4
  c->lr=0x800EACDCu; f_80145680(c); // 800EACD8
  c->r[7]=c->r[29]+c->r[26]; // 800EACDC
  c->r[6]=c->r[29]+c->r[28]; // 800EACE0
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EACE4
  c->r[4]=c->r[30]|c->r[30]; // 800EACE8
  {uint32_t ea=c->r[7]+0x00001104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EACEC
  {uint32_t ea=c->r[7]+0x00001108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EACF0
  c->r[5]=R32(c->r[6]+0x000008D8u); // 800EACF4
  {uint32_t ea=c->r[6]+0x000008E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EACF8
  c->r[6]=R32(c->r[7]+0x00001100u); // 800EACFC
  c->lr=0x800EAD04u; f_80145E84(c); // 800EAD00
  c->r[7]=c->r[29]+c->r[28]; // 800EAD04
  c->r[6]=c->r[29]+c->r[26]; // 800EAD08
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAD0C
  c->r[4]=c->r[30]|c->r[30]; // 800EAD10
  {uint32_t ea=c->r[7]+0x000008E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAD14
  {uint32_t ea=c->r[6]+0x0000111Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAD18
  {uint32_t ea=c->r[6]+0x00001120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EAD1C
  c->r[5]=R32(c->r[7]+0x000008DCu); // 800EAD20
  {uint32_t ea=c->r[7]+0x000008E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EAD24
  c->r[6]=R32(c->r[6]+0x00001118u); // 800EAD28
  c->lr=0x800EAD30u; f_80145C68(c); // 800EAD2C
  c->r[4]=c->r[29]+c->r[31]; // 800EAD30
  c->r[3]=c->r[4]+0x000000ECu; // 800EAD34
  c->r[4]=c->r[4]+0x00000A48u; // 800EAD38
  c->lr=0x800EAD40u; f_800EAA18(c); // 800EAD3C
  c->r[22]=0u+0x00000000u; // 800EAD40
  c->r[24]=0u+0x00000000u; // 800EAD44
L_800EAD48:;
  c->r[0]=c->r[29]+c->r[31]; // 800EAD48
  c->r[3]=c->r[0]+c->r[24]; // 800EAD4C
  c->r[0]=R32(c->r[3]+0x000000ECu); // 800EAD50
  cmps(c,0,(int32_t)c->r[0],2); // 800EAD54
  if (crb(c,2)) { goto L_800EAD68; } // 800EAD58
  cmps(c,0,(int32_t)c->r[0],5); // 800EAD5C
  if (crb(c,2)) { goto L_800EAD88; } // 800EAD60
  goto L_800EADB0; // 800EAD64
L_800EAD68:;
  c->r[0]=c->r[29]+c->r[31]; // 800EAD68
  c->r[3]=R32(c->r[29]+0x0000077Cu); // 800EAD6C
  c->r[5]=c->r[0]+c->r[24]; // 800EAD70
  c->r[4]=R32(c->r[5]+0x0000012Cu); // 800EAD74
  {uint32_t ea=c->r[5]+0x000003ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAD78
  {uint32_t ea=c->r[5]+0x000003ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAD7C
  c->lr=0x800EAD84u; f_801B4480(c); // 800EAD80
  goto L_800EADB0; // 800EAD84
L_800EAD88:;
  c->r[0]=c->r[29]+c->r[31]; // 800EAD88
  c->r[3]=R32(c->r[29]+0x0000077Cu); // 800EAD8C
  c->r[8]=c->r[0]+c->r[24]; // 800EAD90
  c->r[4]=c->r[30]|c->r[30]; // 800EAD94
  c->r[5]=R32(c->r[8]+0x0000012Cu); // 800EAD98
  c->r[6]=R32(c->r[8]+0x0000016Cu); // 800EAD9C
  c->r[7]=R32(c->r[8]+0x000001ACu); // 800EADA0
  {uint32_t ea=c->r[8]+0x000003ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EADA4
  {uint32_t ea=c->r[8]+0x000003ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EADA8
  c->lr=0x800EADB0u; f_801B47D0(c); // 800EADAC
L_800EADB0:;
  c->r[22]=c->r[22]+0x00000001u; // 800EADB0
  c->r[24]=c->r[24]+0x00000004u; // 800EADB4
  cmps(c,0,(int32_t)c->r[22],16); // 800EADB8
  if (crb(c,0)) { IRQCHK(c); goto L_800EAD48; } // 800EADBC
  c->r[0]=R8(c->r[29]+0x000008C8u); // 800EADC0
  c->r[22]=c->r[30]|c->r[30]; // 800EADC4
  cmps(c,0,(int32_t)c->r[0],0); // 800EADC8
  if (crb(c,2)) { goto L_800EADDC; } // 800EADCC
  cmps(c,0,(int32_t)c->r[30],0); // 800EADD0
  if (!crb(c,2)) { goto L_800EADDC; } // 800EADD4
  c->r[22]=0u+0x00000002u; // 800EADD8
L_800EADDC:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EADDC
  c->r[4]=c->r[30]|c->r[30]; // 800EADE0
  c->lr=0x800EADE8u; f_801426F0(c); // 800EADE4
  c->r[6]=c->r[29]+c->r[26]; // 800EADE8
  c->r[5]=c->r[3]|c->r[3]; // 800EADEC
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EADF0
  c->r[4]=c->r[22]|c->r[22]; // 800EADF4
  {uint32_t ea=c->r[6]+0x00001164u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EADF8
  {uint32_t ea=c->r[6]+0x00001168u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EADFC
  c->lr=0x800EAE04u; f_80147C8C(c); // 800EAE00
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAE04
  c->r[4]=c->r[30]|c->r[30]; // 800EAE08
  c->lr=0x800EAE10u; f_801426F0(c); // 800EAE0C
  c->r[6]=c->r[29]+c->r[26]; // 800EAE10
  c->r[5]=c->r[3]|c->r[3]; // 800EAE14
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EAE18
  c->r[4]=c->r[22]|c->r[22]; // 800EAE1C
  {uint32_t ea=c->r[6]+0x00001188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAE20
  {uint32_t ea=c->r[6]+0x0000118Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAE24
  c->lr=0x800EAE2Cu; f_80147E3C(c); // 800EAE28
  c->r[3]=c->r[29]|c->r[29]; // 800EAE2C
  c->r[4]=c->r[30]|c->r[30]; // 800EAE30
  c->lr=0x800EAE38u; f_800E97A4(c); // 800EAE34
  c->r[30]=c->r[30]+0x00000001u; // 800EAE38
  c->r[28]=c->r[28]+0x0000009Cu; // 800EAE3C
  cmps(c,0,(int32_t)c->r[30],2); // 800EAE40
  c->r[27]=c->r[27]+0x00000014u; // 800EAE44
  c->r[26]=c->r[26]+0x0000000Cu; // 800EAE48
  c->r[25]=c->r[25]+0x00000004u; // 800EAE4C
  c->r[31]=c->r[31]+0x00000344u; // 800EAE50
  if (crb(c,0)) { IRQCHK(c); goto L_800EABF4; } // 800EAE54
  c->r[0]=R8(c->r[29]+0x000008C9u); // 800EAE58
  cmps(c,0,(int32_t)c->r[0],0); // 800EAE5C
  if (crb(c,2)) { goto L_800EAEA4; } // 800EAE60
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAE64
  c->r[4]=R8(c->r[29]+0x000008CCu); // 800EAE68
  c->r[5]=R8(c->r[29]+0x00000829u); // 800EAE6C
  c->r[6]=R8(c->r[29]+0x0000082Au); // 800EAE70
  c->r[7]=R8(c->r[29]+0x000008C5u); // 800EAE74
  c->r[8]=R8(c->r[29]+0x000008C6u); // 800EAE78
  c->lr=0x800EAE80u; f_80144020(c); // 800EAE7C
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAE80
  c->r[6]=0u+0x00000000u; // 800EAE84
  c->r[4]=R8(c->r[29]+0x000008CAu); // 800EAE88
  c->r[5]=R8(c->r[29]+0x000008C8u); // 800EAE8C
  c->lr=0x800EAE94u; f_8014605C(c); // 800EAE90
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAE94
  c->r[4]=R8(c->r[29]+0x000008CBu); // 800EAE98
  c->lr=0x800EAEA0u; f_80142694(c); // 800EAE9C
  goto L_800EAEE0; // 800EAEA0
L_800EAEA4:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAEA4
  c->r[4]=0u+0x00000000u; // 800EAEA8
  c->r[5]=R8(c->r[29]+0x00000829u); // 800EAEAC
  c->r[6]=R8(c->r[29]+0x0000082Au); // 800EAEB0
  c->r[7]=R8(c->r[29]+0x000008C5u); // 800EAEB4
  c->r[8]=R8(c->r[29]+0x000008C6u); // 800EAEB8
  c->lr=0x800EAEC0u; f_80144020(c); // 800EAEBC
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAEC0
  c->r[4]=0u+0x00000000u; // 800EAEC4
  c->r[5]=R8(c->r[29]+0x000008C8u); // 800EAEC8
  c->r[6]=0u+0x00000000u; // 800EAECC
  c->lr=0x800EAED4u; f_8014605C(c); // 800EAED0
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAED4
  c->r[4]=0u+0x00000000u; // 800EAED8
  c->lr=0x800EAEE0u; f_80142694(c); // 800EAEDC
L_800EAEE0:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAEE0
  c->lr=0x800EAEE8u; f_80141F6C(c); // 800EAEE4
  c->r[25]=R8(c->r[29]+0x000008C9u); // 800EAEE8
  c->r[24]=R32(c->r[29]+0x00000778u); // 800EAEEC
  c->r[4]=c->r[25]|c->r[25]; // 800EAEF0
  c->r[3]=c->r[24]|c->r[24]; // 800EAEF4
  c->lr=0x800EAEFCu; f_802DFACC(c); // 800EAEF8
  c->r[3]=c->r[24]|c->r[24]; // 800EAEFC
  c->r[4]=c->r[25]|c->r[25]; // 800EAF00
  c->lr=0x800EAF08u; f_802DFA30(c); // 800EAF04
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAF08
  {uint32_t ea=c->r[29]+0x0000114Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAF0C
  {uint32_t ea=c->r[29]+0x00001150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAF10
  c->lr=0x800EAF18u; f_80145590(c); // 800EAF14
  c->r[4]=R8(c->r[29]+0x000010DBu); // 800EAF18
  c->r[3]=c->r[29]|c->r[29]; // 800EAF1C
  c->lr=0x800EAF24u; f_800EA544(c); // 800EAF20
  c->r[3]=R32(c->r[29]+0x0000078Cu); // 800EAF24
  c->r[4]=R32(c->r[29]+0x000010E4u); // 800EAF28
  c->lr=0x800EAF30u; f_80148390(c); // 800EAF2C
  c->r[22]=0u+0x00000000u; // 800EAF30
  c->r[30]=0u+0x00000000u; // 800EAF34
L_800EAF38:;
  c->r[23]=c->r[29]+c->r[30]; // 800EAF38
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EAF3C
  {uint32_t ea=c->r[23]+0x000011ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAF40
  c->r[4]=c->r[22]|c->r[22]; // 800EAF44
  {uint32_t ea=c->r[23]+0x000011B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAF48
  c->lr=0x800EAF50u; f_80148194(c); // 800EAF4C
  c->r[5]=R32(c->r[23]+0x000011A8u); // 800EAF50
  c->r[4]=c->r[22]|c->r[22]; // 800EAF54
  c->r[3]=R32(c->r[29]+0x00000778u); // 800EAF58
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800EAF5C
  c->r[0]=cntlz(c->r[0]); // 800EAF60
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EAF64
  c->lr=0x800EAF6Cu; f_80147F70(c); // 800EAF68
  c->r[22]=c->r[22]+0x00000001u; // 800EAF6C
  c->r[30]=c->r[30]+0x0000000Cu; // 800EAF70
  cmps(c,0,(int32_t)c->r[22],3); // 800EAF74
  if (crb(c,0)) { IRQCHK(c); goto L_800EAF38; } // 800EAF78
  c->r[0]=R8(c->r[29]+0x000010DCu); // 800EAF7C
  cmps(c,0,(int32_t)c->r[0],0); // 800EAF80
  if (crb(c,2)) { goto L_800EAFA0; } // 800EAF84
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAF88
  {uint32_t ea=c->r[29]+0x00001158u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAF8C
  {uint32_t ea=c->r[29]+0x0000115Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAF90
  c->r[4]=R32(c->r[29]+0x00001154u); // 800EAF94
  c->lr=0x800EAF9Cu; f_80146B78(c); // 800EAF98
  goto L_800EAFA8; // 800EAF9C
L_800EAFA0:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAFA0
  c->lr=0x800EAFA8u; f_80146BA4(c); // 800EAFA4
L_800EAFA8:;
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAFA8
  c->r[4]=R8(c->r[29]+0x000010D9u); // 800EAFAC
  c->lr=0x800EAFB4u; f_80144E98(c); // 800EAFB0
  c->r[3]=c->r[1]+0x00000008u; // 800EAFB4
  c->r[4]=c->r[29]+0x00000A34u; // 800EAFB8
  c->lr=0x800EAFC0u; f_800E9778(c); // 800EAFBC
  c->r[3]=R32(c->r[29]+0x00000774u); // 800EAFC0
  c->r[4]=c->r[1]+0x00000008u; // 800EAFC4
  c->lr=0x800EAFCCu; f_80145010(c); // 800EAFC8
  c->r[3]=c->r[1]+0x00000008u; // 800EAFCC
  c->lr=0x800EAFD4u; f_800E84DC(c); // 800EAFD0
  c->r[0]=0u+0x00000000u; // 800EAFD4
  W8(c->r[29]+0x000008D0u,c->r[0]); // 800EAFD8
L_800EAFDC:;
  c->r[11]=c->r[1]+0x00000060u; // 800EAFDC
  c->lr=0x800EAFE4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EAFE0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800EAFE4
  c->lr=c->r[0]; // 800EAFE8
  c->r[1]=c->r[1]+0x00000060u; // 800EAFEC
  return; // 800EAFF0
}

// fn_800EAFF4
void f_800EAFF4(Ctx* __restrict c) {
  trace_call(0x800EAFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAFF4
  c->r[0]=c->lr; // 800EAFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAFFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB000
  c->r[31]=c->r[3]|c->r[3]; // 800EB004
  c->r[3]=c->r[3]+0x000008D4u; // 800EB008
  c->r[4]=c->r[31]+0x00000790u; // 800EB00C
  c->lr=0x800EB014u; f_800EA924(c); // 800EB010
  c->r[3]=c->r[31]+0x00000970u; // 800EB014
  c->r[4]=c->r[31]+0x0000082Cu; // 800EB018
  c->lr=0x800EB020u; f_800EA924(c); // 800EB01C
  c->r[3]=c->r[31]+0x000008D0u; // 800EB020
  c->lr=0x800EB028u; f_800E85BC(c); // 800EB024
  c->r[0]=0u+0x00000001u; // 800EB028
  W8(c->r[31]+0x000008D0u,c->r[0]); // 800EB02C
  c->r[3]=R32(c->r[31]+0x00000778u); // 800EB030
  c->r[4]=0u+0xFFFFFFFFu; // 800EB034
  c->r[5]=0u+0x00000001u; // 800EB038
  c->lr=0x800EB040u; f_801476CC(c); // 800EB03C
  c->r[3]=c->r[31]|c->r[31]; // 800EB040
  c->lr=0x800EB048u; f_800EAB98(c); // 800EB044
  c->r[3]=R32(c->r[31]+0x0000077Cu); // 800EB048
  c->lr=0x800EB050u; f_801B3F60(c); // 800EB04C
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EB050
  c->lr=0x800EB058u; f_80146BA4(c); // 800EB054
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EB058
  c->r[4]=0u+0x00000000u; // 800EB05C
  c->r[5]=0u+0x00000001u; // 800EB060
  c->lr=0x800EB068u; f_80145980(c); // 800EB064
  c->r[3]=R32(c->r[31]+0x00000774u); // 800EB068
  c->r[4]=0u+0x00000001u; // 800EB06C
  c->r[5]=0u+0x00000001u; // 800EB070
  c->lr=0x800EB078u; f_80145980(c); // 800EB074
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB07C
  c->lr=c->r[0]; // 800EB080
  c->r[1]=c->r[1]+0x00000010u; // 800EB084
  return; // 800EB088
}

